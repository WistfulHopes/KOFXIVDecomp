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
#include "dev/kof/master/development/source/baseproject/jni/game/player/actionsystem.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actionblackout.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/check/cameracheck.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmodel.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglvec3.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actorobject.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actorcharabase.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/util/fix32.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmatrix.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/damagesetting.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmotion.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/math.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglquat.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actor.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmaterial.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/damagesettingutil.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/check/commandcheck.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/system/battlecontroller.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/player/battleplayerinfo.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/ag/kofanticheat.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/data/saveplayerdata.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/randommt.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/cpuseq/battlecpu.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_bank.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_manager.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/util/soundutil.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/data/sounddata.cpp"

void ActorChara::CreateInit(); // 0x140186820
void ActorChara::Dispose(); // 0x140186B50
void ActorChara::ParamInit(const CharaDataUnify * pCharaData, const CharaDataUnify * pCommonData, InputKeyCheck * pKeyData); // 0x140186D60
void ActorChara::ActionParamInit(); // 0x140187130
void ActorChara::PrevDataSet(); // 0x1401873F0
void ActorChara::ActionChanged(); // 0x140187530
void ActorChara::StateChanged(); // 0x1401879B0
void ActorChara::ActionChangeReqBase(const long baseActID, const long frame, const bool bState); // 0x140187AA0
void ActorChara::SetShotFireData(const CharaActionData::Shot::Type::Fire & fireData); // 0x140187B40
void ActorChara::SetEffectCreateData(const CharaActionData::Effect::Type::Set & setData); // 0x140187B60
void ActorChara::SetEyeControlData(const CharaActionData::Setting::Type::EyeControl & eyeCtrl); // 0x140187C50
void ActorChara::SetHeadControlData(const CharaActionData::Setting::Type::HeadControl & headCtrl); // 0x140187CB0
void ActorChara::SetTalkSettingData(const CharaActionData::Setting::Type::Talk & talk); // 0x140187CE0
void ActorChara::SetSpecialEffectSettingData(const CharaActionData::Setting::Type::SpEffect & spEffect); // 0x140187D80
void ActorChara::SetCharaOffsetData(const CharaActionData::Setting::Type::CharaOffset & charaOffset); // 0x140187EB0
void ActorChara::SetExclusiveData(const CharaActionData::Exclusive & exclusive, bool bNextData); // 0x140187F10
void ActorChara::SetThrowAttach(const CharaActionData::ThrowAttach & throwAttach); // 0x140188050
void ActorChara::ResetThrowAttach(bool bResetReserve); // 0x1401880F0
void ActorChara::PreUpdate(); // 0x140188120
void ActorChara::BecomUpdate(); // 0x140188710
void ActorChara::MainUpdate(); // 0x140188830
void ActorChara::LateUpdate(); // 0x1401894F0
void ActorChara::Draw(); // 0x140189630
void ActorChara::UpdateMotionMove(); // 0x140189B10
void ActorChara::UpdatePosition(); // 0x14018A070
void ActorChara::UpdateFaceAngle(); // 0x14018A300
void ActorChara::UpdatePartsMotion(float fBlendRate); // 0x14018AE10
void ActorChara::ActionFlagCheck(); // 0x14018AF50
void ActorChara::ActionEtcSet(const CharaActionData::Etc & etc); // 0x14018B0A0
bool ActorChara::_checkCancelTerm(long term); // 0x14018B0F0
long ActorChara::_getCancelHitStopRemainderFrame(long iBasePrecedeFrame); // 0x14018B250
long ActorChara::_getCancelRemainderFrame(); // 0x14018B2F0
bool ActorChara::IsCancel(long cancelID, long precedeFrame, long remainderFrame); // 0x14018B410
bool ActorChara::_branchIsShotAttackHitOrGuard(float param); // 0x14018B530
bool ActorChara::_branchIsShotAttackHit(float param); // 0x14018B580
bool ActorChara::_branchIsShotAttackGuard(float param); // 0x14018B5B0
bool ActorChara::_branchIsShotFlag1(float param); // 0x14018B5E0
bool ActorChara::_branchIsShotFlag2(float param); // 0x14018B610
bool ActorChara::_branchIsShotFlag3(float param); // 0x14018B640
bool ActorChara::_branchIsShotFlag4(float param); // 0x14018B670
bool ActorChara::_branchIsShotAlive(float param); // 0x14018B6A0
bool ActorChara::_branchIsShotNotAlive(float param); // 0x14018B6D0
bool ActorChara::_branchIsCommandCountOver(float param); // 0x14018B700
bool ActorChara::_branchIsCommandCountUnder(float param); // 0x14018B710
void ActorChara::BranchCheck(); // 0x14018B720
bool ActorChara::_isGuardInputStat(long stat, bool bPermitPause); // 0x14018B8D0
bool ActorChara::_isDashCancelEnable(); // 0x14018B920
bool ActorChara::_isCommandReadyStat(long stat); // 0x14018B9A0
long ActorChara::GetHitBackEndFrame(long actNo, bool bOriginData); // 0x14018B9F0
long ActorChara::GetActionEndFrame(long actNo, bool bReadyFlag, bool bOriginData); // 0x14018BAF0
struct `anonymous-namespace'::ZOffsetPriority
{
	short pri; // 0x0
	short flag; // 0x2
};
const long ciMaxClimaxGaugeStock[3]; // 0x1408A05B0
const `anonymous-namespace'::ZOffsetPriority cSubCategoryDrawPri[9]; // 0x1408A05F8
const long ciMaxPowerGaugeStock[3]; // 0x1408A0620
std::piecewise_construct_t std::piecewise_construct; // 0x1408A040F
const ActorChara::ACTOR_STATUS::ID ciCommonActionToState[246]; // 0x1408A0700
void ActorChara::CheckUseZOffset(); // 0x14018BBE0
bool ActorChara::IsLanding(); // 0x14018BD50
bool ActorChara::IsBlackStop(); // 0x14018BDE0
void ActorChara::CancelBlackout(); // 0x14018BE20
OGLVec3 ActorChara::GetCenterPosition(); // 0x14018BE80
OGLVec3 ActorChara::GetBindCenterPosition(); // 0x14018BEB0
bool ActorChara::IsMotionCameraInvisibleActor(); // 0x14018BED0
bool ActorChara::IsInvisible(); // 0x14018BF10
bool ActorChara::IsModelDraw(); // 0x14018BF80
long ActorChara::GetJumpState(bool bCheckBase); // 0x14018C000
bool ActorChara::_commonCommandCheck(long stat, const CommandData::Setting & cmdSet, long remainderFrame); // 0x14018C070
bool ActorChara::_charaCommandCheck(long stat, long id, const CommandData::Setting & cmdSet, long remainderFrame); // 0x14018C8F0
void ActorChara::RecvCommandEvent(long tag, long id, const CommandData::Setting & cmdSet, long iExtendPriority, long iRemainderFrame); // 0x14018C9C0
void ActorChara::CommonActionRequestDuringHitStop(); // 0x14018CE60
void ActorChara::CommonActionRequest(); // 0x14018D0B0
void ActorChara::_cancelBonusCheck(); // 0x14018E0E0
void ActorChara::CommandActionRequest(); // 0x14018E4B0
void ActorChara::DefaultBranchCheck(); // 0x14018E890
bool ActorChara::IsValidCommandCheck(); // 0x14018EF70
bool ActorChara::IsValidDerivedCommandCheck(); // 0x14018F030
bool ActorChara::IsStand(); // 0x14018F090
bool ActorChara::IsCrouch(); // 0x14018F0F0
bool ActorChara::IsAir(); // 0x14018F170
bool ActorChara::IsDash(bool bRemain); // 0x14018F1E0
bool ActorChara::IsLandAttack(); // 0x14018F210
bool ActorChara::IsAirAttack(); // 0x14018F280
bool ActorChara::IsSkillStatus(); // 0x14018F300
bool ActorChara::IsGuard(); // 0x14018F320
bool ActorChara::IsAttackThrow(); // 0x14018F390
ActorChara * ActorChara::GetThrowLockTarget(); // 0x14018F400
bool ActorChara::IsThrowLock(); // 0x14018F440
bool ActorChara::IsValidEvadeCommand(); // 0x14018F4D0
float ActorChara::GetBodyPushRate(); // 0x14018F550
float ActorChara::GetWallBackDistance(); // 0x14018F620
float ActorChara::GetWallFrontDistance(); // 0x14018F6A0
float ActorChara::GetStageCornerBackDistance(); // 0x14018F720
float ActorChara::GetStageCornerFrontDistance(); // 0x14018F760
bool ActorChara::IsLandDamaged(); // 0x14018F7A0
bool ActorChara::IsAirDamaged(); // 0x14018F800
bool ActorChara::IsNokezori(); // 0x14018F860
bool ActorChara::IsKuzure(); // 0x14018F8B0
bool ActorChara::IsAirThrowDamaged(); // 0x14018F8F0
bool ActorChara::IsLandThrowDamaged(); // 0x14018F910
bool ActorChara::IsThrowDamaged(); // 0x14018F940
bool ActorChara::IsBound(); // 0x14018F990
bool ActorChara::IsDown(); // 0x14018F9A0
bool ActorChara::IsComboSoundException(); // 0x14018F5D0
bool ActorChara::IsClimaxMode(); // 0x14018F9B0
bool ActorChara::IsClimaxModeCombo(); // 0x14018F9C0
void ActorChara::SetClimaxMode(bool bQuick); // 0x14018F9F0
void ActorChara::EndClimaxMode(); // 0x14018FAD0
void ActorChara::SetStunRecoverMaxPer(long maxPer); // 0x14018FB40
void ActorChara::ResetStunPower(); // 0x14018FBB0
void ActorChara::SetGuardRecoverMaxPer(long maxPer); // 0x14018FBE0
void ActorChara::ResetGuardPower(); // 0x14018FC50
void ActorChara::SetDamageActionDeclare(); // 0x14018FC80
void ActorChara::SetGuardActionDeclare(); // 0x14018FD40
void ActorChara::SetThrowEscapePermit(); // 0x14018FDF0
void ActorChara::ResetDamageFlags(); // 0x14018FEB0
void ActorChara::ResetStunDamageFlags(); // 0x140190470
void ActorChara::ResetCommandFlags(); // 0x140190540
bool ActorChara::IsValidThrowEscapeCommand(); // 0x140190820
void ActorChara::CheckReversalTiming(); // 0x140190880
void ActorChara::SetReady(bool bCrouch, bool bInit); // 0x140190A20
void ActorChara::SetReadyFlags(); // 0x140190A90
void ActorChara::SetRoundStartWaitAction(); // 0x140190BA0
void ActorChara::SetRoundStartEntryAction(); // 0x140190CE0
bool ActorChara::IsExistRivalDemoAction(long charID); // 0x140190E00
void ActorChara::SetRivalDemoAction(long charID); // 0x140190E70
bool ActorChara::IsExistRivalRoundStartAction(long charID); // 0x140190F20
bool ActorChara::IsExistRivalRoundWinAction(long charID); // 0x140190F90
void ActorChara::SetRoundEndAction(); // 0x140191000
void ActorChara::SetResultDemoAction(); // 0x140191270
void ActorChara::SetupAction(bool bResultDemo, long subType); // 0x1401913A0
void ActorChara::SetKOVoice(bool bFinalKO, bool bAkebonoKO); // 0x140191460
void ActorChara::SetStandUpVoice(); // 0x1401916A0
long ActorChara::GetVitalPercent(); // 0x140191950
long ActorChara::GetMaxVital(); // 0x140191990
long ActorChara::GetMaxGuardPower(); // 0x1401919B0
long ActorChara::GetMaxStunPower(); // 0x1401919D0
long ActorChara::GetStunRecoverMax(); // 0x1401919F0
long ActorChara::GetGuardRecoverMax(); // 0x140191A10
long ActorChara::GetDrinkCount(); // 0x140191A30
void ActorChara::SetVital(Fix32 vital); // 0x140191A50
void ActorChara::SetExPower(Fix32 exPow); // 0x140191AD0
void ActorChara::SetStartExPower(Fix32 exPow); // 0x140191B00
void ActorChara::ResetExPower(); // 0x140191B50
void ActorChara::SetMaxClimaxTimeStockBase(long extendCount); // 0x140191B60
void ActorChara::SetMaxGaugeStockExtend(long extendCount); // 0x140191B90
void ActorChara::AddExPower(long pow, bool bFromActionEtcLine); // 0x140191C00
void ActorChara::AddClimaxTime(long time); // 0x140191D40
void ActorChara::AddClimaxTime(float time); // 0x140191DD0
void ActorChara::SetVitalDamage(long damage); // 0x140191E70
void ActorChara::SetStunPowerDamage(long damage); // 0x140191F00
void ActorChara::SetGuardPowerDamage(long damage); // 0x140191FC0
void ActorChara::SetReserveRecoverValue(long recover); // 0x140192080
void ActorChara::ReserveRecoverCalc(); // 0x1401920E0
void ActorChara::SetPoisonDamage(const CharaAttackData::PoisonDamageData & poison); // 0x140192190
void ActorChara::ResetPoisonDamage(); // 0x140192220
void ActorChara::PoisonDamageCalc(); // 0x140192240
ActorChara::DamageInfo * ActorChara::GetTargetDamageInfo(); // 0x1401923F0
void ActorChara::SetAliveShot(const ActorShot * pShot); // 0x140192420
void ActorChara::SetAttackHitShot(const ActorShot * pShot); // 0x140192520
void ActorChara::SetAttackGuardShot(const ActorShot * pShot); // 0x140192600
void ActorChara::SetBranchFlgShot(const ActorShot * pShot, long branchKey); // 0x1401926E0
void ActorChara::_autoEffectSet(); // 0x1401927C0
void ActorChara::SetEyeAngle(bool bRightEye, float x, float y); // 0x140192C70
void ActorChara::AddEyeAngle(bool bRightEye, float x, float y); // 0x140192D40
void ActorChara::ExtraEffectData::DeadEffectCheck(const CharaActionData::Effect::Type::Set & setData); // 0x140192E30
void ActorChara::CharaOffsetParam::SetData(const CharaActionData::Setting::Type::CharaOffset & data); // 0x140192E90
OGLVec3 ActorChara::CharaOffsetParam::GetOffset(long iCAngle); // 0x140192F50
bool ActorChara::IsRandomGuardValid(); // 0x140193030
bool ActorChara::IsRandomCounterValid(); // 0x140193090
void ActorChara::CheckReversalRecordTiming(); // 0x1401930F0
bool ActorChara::IsEnableReversalKeyPlay(); // 0x1401931F0//decompilation failure at 1408A05B0!
//decompilation failure at 1408A05F8!
//decompilation failure at 1408A0620!
//decompilation failure at 1408A040F!
//decompilation failure at 1408A0700!
std::bitset<62>::reference *__fastcall std::bitset<62>::reference::operator=(
        std::bitset<62>::reference *this,
        const std::bitset<62>::reference *_Bitref)
{
  unsigned __int64 Mypos; // r8
  std::bitset<62> *Pbitset; // r11
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rdx
  std::bitset<62> *v8; // rcx
  unsigned __int64 v9; // rax
  __int64 v10; // rax

  Mypos = _Bitref->_Mypos;
  Pbitset = _Bitref->_Pbitset;
  if ( Mypos >= 0x3E )
    std::_Xout_of_range("invalid bitset<N> position");
  v5 = this->_Mypos;
  if ( v5 >= 0x3E )
    std::_Xout_of_range("invalid bitset<N> position");
  v6 = v5 >> 6;
  v7 = this->_Mypos & 0x3F;
  v8 = &this->_Pbitset[v6];
  v9 = v8->_Array[0];
  if ( (Pbitset[Mypos >> 6]._Array[0] & (1i64 << (Mypos & 0x3F))) != 0 )
    v10 = v9 | (1i64 << v7);
  else
    v10 = v9 & ~(1i64 << v7);
  v8->_Array[0] = v10;
  return this;
}

std::bitset<61>::reference *__fastcall std::bitset<21>::operator[](
        std::bitset<61> *this,
        std::bitset<61>::reference *result,
        unsigned __int64 _Pos)
{
  std::bitset<61>::reference *v3; // rax

  result->_Pbitset = this;
  v3 = result;
  result->_Mypos = _Pos;
  return v3;
}

unsigned __int8 __fastcall std::bitset<13>::reference::operator bool(std::bitset<13>::reference *this)
{
  unsigned __int64 Mypos; // rdx
  unsigned int v2; // eax

  Mypos = this->_Mypos;
  if ( Mypos >= 0xD )
    std::_Xout_of_range("invalid bitset<N> position");
  v2 = this->_Pbitset[Mypos >> 5]._Array[0];
  return _bittest((const int *)&v2, this->_Mypos & 0x1F);
}

void __fastcall ActorChara::ActionChangeReqBase(
        ActorChara *this,
        const int baseActID,
        const int frame,
        const bool bState)
{
  const CharaBaseStatus *pBaseStat; // rdi
  __int64 v6; // rsi
  __int64 v9; // rsi
  __int64 iActionID; // rdx

  pBaseStat = this->pBaseStat;
  v6 = baseActID;
  if ( pBaseStat->CheckFileID(&pBaseStat->CharaFileBase) && (unsigned int)v6 < pBaseStat->dataHeader.uiCommonActionCount )
  {
    v9 = v6;
    iActionID = (unsigned int)pBaseStat->pCommonAct[v9].iActionID;
    if ( (int)iActionID >= 0 )
    {
      this->ActionChangeReq(this, iActionID, frame);
      if ( bState )
        this->StateChangeReq(this, ciCommonActionToState[v9]);
    }
  }
}

void __fastcall ActorChara::ActionChanged(ActorChara *this)
{
  ActorChara *i; // rax
  std::bitset<61>::reference *v3; // rax
  unsigned __int64 Mypos; // rdx
  __int64 v5; // rcx
  unsigned __int64 v6; // rax
  std::bitset<61>::reference *v7; // rax
  unsigned __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned __int64 v10; // rax
  std::bitset<61>::reference *v11; // rax
  unsigned __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned __int64 v14; // rax
  std::bitset<61>::reference *v15; // rax
  unsigned __int64 v16; // rdx
  std::bitset<61>::reference *v17; // rax
  unsigned __int64 v18; // rdx
  std::bitset<61>::reference *v19; // rax
  unsigned __int64 v20; // rdx
  const CharaBaseStatus *pBaseStat; // rcx
  __int64 iPlayerID; // rax
  OGLModel *pModel; // rax
  int iCAngle; // er8
  __int64 v25; // rax
  __int64 v26; // rcx
  char *v27; // rdx
  std::bitset<61> *v28; // rcx
  std::bitset<61>::reference *v29; // rax
  _QWORD *v30; // r9
  unsigned __int64 v31; // r8
  __int64 v32; // rdx
  unsigned __int64 v33; // r8
  std::bitset<61> *Pbitset; // r9
  std::bitset<61>::reference *v35; // rax
  unsigned __int64 v36; // rdx
  std::bitset<61>::reference result; // [rsp+28h] [rbp-40h] BYREF
  std::bitset<61>::reference v38; // [rsp+38h] [rbp-30h] BYREF
  std::bitset<61>::reference v39; // [rsp+48h] [rbp-20h] BYREF

  ActorCharaBase::ActionChanged(this);
  *(_QWORD *)this->bsAttackHitShotID._Array = 0i64;
  for ( i = (ActorChara *)this->bsBranchFlgShotID; i != (ActorChara *)&this->cmdInfo; i = (ActorChara *)((char *)i + 4) )
    LODWORD(i->ActorCharaBase::ActorObject::Actor::__vftable) = 0;
  v3 = std::bitset<21>::operator[]((std::bitset<61> *)&this->systemFlag, &result, 0x2Bui64);
  Mypos = v3->_Mypos;
  if ( Mypos >= 0x3E )
    std::_Xout_of_range("invalid bitset<N> position");
  v5 = v3->_Mypos & 0x3F;
  v6 = v3->_Pbitset[Mypos >> 6]._Array[0];
  if ( !_bittest64((const __int64 *)&v6, v5) )
  {
    v7 = std::bitset<21>::operator[]((std::bitset<61> *)&this->systemFlag, &v38, 0x2Cui64);
    v8 = v7->_Mypos;
    if ( v8 >= 0x3E )
      std::_Xout_of_range("invalid bitset<N> position");
    v9 = v7->_Mypos & 0x3F;
    v10 = v7->_Pbitset[v8 >> 6]._Array[0];
    if ( !_bittest64((const __int64 *)&v10, v9) )
    {
      v11 = std::bitset<21>::operator[]((std::bitset<61> *)&this->systemFlag, &v39, 0x2Dui64);
      v12 = v11->_Mypos;
      if ( v12 >= 0x3E )
        std::_Xout_of_range("invalid bitset<N> position");
      v13 = v11->_Mypos & 0x3F;
      v14 = v11->_Pbitset[v12 >> 6]._Array[0];
      if ( !_bittest64((const __int64 *)&v14, v13) )
      {
        v15 = std::bitset<21>::operator[]((std::bitset<61> *)&this->systemFlag, &v39, 0x2Eui64);
        v16 = v15->_Mypos;
        if ( v16 >= 0x3E )
          std::_Xout_of_range("invalid bitset<N> position");
        v15->_Pbitset[v16 >> 6]._Array[0] &= ~(1i64 << (v15->_Mypos & 0x3F));
      }
    }
  }
  if ( this->GetActionSubCategoryID(this, this->iActNo, 0) == 1
    || (((__int64 (__fastcall *)(ActorChara *, _QWORD, _QWORD))this->GetActionOptionFlag)(
          this,
          (unsigned int)this->iActNo,
          0i64) & 0x100) != 0 )
  {
    v19 = std::bitset<21>::operator[]((std::bitset<61> *)&this->systemFlag, &v39, 0x33ui64);
    v20 = v19->_Mypos;
    if ( v20 >= 0x3E )
      std::_Xout_of_range("invalid bitset<N> position");
    v19->_Pbitset[v20 >> 6]._Array[0] |= 1i64 << (v19->_Mypos & 0x3F);
  }
  else
  {
    v17 = std::bitset<21>::operator[]((std::bitset<61> *)&this->systemFlag, &v39, 0x33ui64);
    v18 = v17->_Mypos;
    if ( v18 >= 0x3E )
      std::_Xout_of_range("invalid bitset<N> position");
    v17->_Pbitset[v18 >> 6]._Array[0] &= ~(1i64 << (v17->_Mypos & 0x3F));
  }
  this->ResetThrowAttach(this, 0);
  this->eyeCtrl.iSettingType = 0;
  pBaseStat = this->pBaseStat;
  this->eyeCtrl.leftEyeLimit = pBaseStat->status.leftEyeLimit;
  this->eyeCtrl.rightEyeLimit = pBaseStat->status.rightEyeLimit;
  this->headCtrl.iSettingType = 0;
  this->headCtrl.fHeadAngleLimitLow = pBaseStat->status.fHeadAngleLow;
  this->headCtrl.fHeadAngleLimitUp = pBaseStat->status.fHeadAngleUp;
  this->iRivalTalkNextActionNo = -1;
  this->iBlurEffectCount = 0;
  this->iBlurFrameFlag = 15;
  iPlayerID = this->iPlayerID;
  if ( (unsigned int)iPlayerID <= 1 )
    this->pActSys->iShadowPassSetting[iPlayerID] = 0;
  pModel = this->pModel;
  if ( pModel )
    pModel->m_uiModeFlg &= ~0x800u;
  *(_QWORD *)&this->charaOffsetParam.vPrevOff.x = 0i64;
  *(_QWORD *)&this->charaOffsetParam.vPrevOff.z = 0i64;
  *(_QWORD *)&this->charaOffsetParam.vNextOff.y = 0i64;
  *(_QWORD *)&this->charaOffsetParam.xNowFrame.value = 0i64;
  this->charaOffsetParam.iCharaID = -1;
  if ( (((__int64 (__fastcall *)(ActorChara *, _QWORD, _QWORD))this->GetActionOptionFlag)(
          this,
          (unsigned int)this->iActNo,
          0i64) & 2) == 0 )
    *(_QWORD *)&this->cancelBonusType = 0i64;
  iCAngle = this->iCAngle;
  v25 = this->iPlayerID;
  if ( (unsigned int)v25 <= 3 )
  {
    v26 = this->iPlayerID;
    v27 = (char *)this->pActSys + 2 * v25;
    if ( v27[v25 + 241048] || v27[v25 + 241049] != iCAngle )
    {
      v27[v26 + 241048] = 0;
      v27[v26 + 241049] = iCAngle;
      v27[v26 + 241050] = 1;
    }
  }
  *(_QWORD *)&this->cmdInfo.actionReserve.iPriTag = 0i64;
  this->cmdInfo.actionReserve.pCmdSet = 0i64;
  this->cmdInfo.hitStopInfo.uiDataSize = 0;
  *(_QWORD *)&this->cmdInfo.hitStopInfo.uiBeginIndex = 0i64;
  std::bitset<21>::operator[]((std::bitset<61> *)&this->systemFlag, &v39, 0x38ui64);
  v29 = std::bitset<21>::operator[](v28, &v38, 0x39ui64);
  v31 = v30[1];
  if ( v31 >= 0x3E )
    std::_Xout_of_range("invalid bitset<N> position");
  v32 = *(_QWORD *)(*v30 + 8 * (v31 >> 6)) & (1i64 << (v31 & 0x3F));
  v33 = v29->_Mypos;
  Pbitset = v29->_Pbitset;
  if ( v33 >= 0x3E )
    std::_Xout_of_range("invalid bitset<N> position");
  if ( v32 )
    Pbitset[v33 >> 6]._Array[0] |= 1i64 << (v29->_Mypos & 0x3F);
  else
    Pbitset[v33 >> 6]._Array[0] &= ~(1i64 << (v29->_Mypos & 0x3F));
  v35 = std::bitset<21>::operator[]((std::bitset<61> *)&this->systemFlag, &v39, 0x38ui64);
  v36 = v35->_Mypos;
  if ( v36 >= 0x3E )
    std::_Xout_of_range("invalid bitset<N> position");
  v35->_Pbitset[v36 >> 6]._Array[0] &= ~(1i64 << (v35->_Mypos & 0x3F));
  if ( this->iCharNo == 39 )
  {
    this->charaUniqueParam.iDrinkCount = -1;
    this->charaUniqueParam.shuneiArm.xFadeFrame.value = 0;
  }
}

void __fastcall ActorChara::ActionEtcSet(ActorChara *this, const CharaActionData::Etc *etc)
{
  _BOOL8 v4; // r8

  Actor::ActionEtcSet(this, etc);
  this->AddClimaxTime(this, etc->iAddClimax);
  LOBYTE(v4) = 1;
  this->AddExPower(this, etc->iAddPower, v4);
}

void __fastcall ActorChara::ActionFlagCheck(ActorChara *this)
{
  bool ModelMirrorLightFlag; // al
  std::bitset<61>::reference *v3; // rax
  unsigned __int64 Mypos; // rdx
  std::bitset<61>::reference *v5; // rax
  unsigned __int64 v6; // rdx
  int iActFlg2; // eax
  std::bitset<61>::reference result; // [rsp+28h] [rbp-20h] BYREF

  ActorObject::ActionFlagCheck(this);
  if ( this->bActionNewFrame )
  {
    if ( (this->iActFlg2 & 0x2000) != 0 )
    {
      ModelMirrorLightFlag = Actor::GetModelMirrorLightFlag(this);
      Actor::SetModelMirrorLightFlag(this, !ModelMirrorLightFlag);
    }
    if ( (this->iActFlg2 & 0x4000) != 0 )
      Actor::SetModelMoveLightFlag(this, 1);
  }
  if ( (this->iActFlg1 & 0x400) != 0 )
  {
    v3 = std::bitset<21>::operator[]((std::bitset<61> *)&this->systemFlag, &result, 0x33ui64);
    Mypos = v3->_Mypos;
    if ( Mypos >= 0x3E )
      std::_Xout_of_range("invalid bitset<N> position");
    v3->_Pbitset[Mypos >> 6]._Array[0] &= ~(1i64 << (v3->_Mypos & 0x3F));
  }
  if ( (this->iActFlg2 & 4) != 0 )
  {
    v5 = std::bitset<21>::operator[]((std::bitset<61> *)&this->systemFlag, &result, 0x34ui64);
    v6 = v5->_Mypos;
    if ( v6 >= 0x3E )
      std::_Xout_of_range("invalid bitset<N> position");
    v5->_Pbitset[v6 >> 6]._Array[0] |= 1i64 << (v5->_Mypos & 0x3F);
  }
  iActFlg2 = this->iActFlg2;
  if ( (iActFlg2 & 0x200) != 0 )
    this->cmdInfo.iValidCount = 0;
  if ( this->bActionNewFrame
    && (iActFlg2 & 0x80000) != 0
    && IsEnableGameMode4TorophyCntup()
    && this->iPlayerID == (unsigned int)getTrophyPlayerID() )
  {
    ++*(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2205268i64);
  }
}

void __fastcall ActorChara::ActionParamInit(ActorChara *this)
{
  std::bitset<61>::reference *v2; // rax
  std::bitset<61> *v3; // r10
  unsigned __int64 Mypos; // rdx
  std::bitset<61>::reference *v5; // rax
  std::bitset<61> *v6; // r10
  unsigned __int64 v7; // rdx
  std::bitset<61>::reference *v8; // rax
  std::bitset<61> *v9; // r10
  unsigned __int64 v10; // rdx
  std::bitset<61>::reference *v11; // rax
  std::bitset<61> *v12; // r10
  unsigned __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned __int64 v15; // rax
  std::bitset<61>::reference *v16; // rax
  char v17; // r9
  unsigned __int64 v18; // rdx
  std::bitset<61> *Pbitset; // rcx
  unsigned __int64 v20; // rax
  char v21; // dl
  __int64 *v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rax
  std::bitset<61>::reference *v25; // rax
  std::bitset<61> *v26; // r10
  unsigned __int64 v27; // rdx
  std::bitset<61>::reference *v28; // rax
  std::bitset<61> *v29; // r10
  unsigned __int64 v30; // rcx
  std::bitset<61>::reference *v31; // rax
  unsigned __int64 v32; // rdx
  std::bitset<61>::reference result; // [rsp+28h] [rbp-20h] BYREF

  ActorCharaBase::ActionParamInit(this);
  v2 = std::bitset<21>::operator[]((std::bitset<61> *)&this->systemFlag, &result, 0x25ui64);
  Mypos = v2->_Mypos;
  if ( Mypos >= 0x3E )
    std::_Xout_of_range("invalid bitset<N> position");
  v2->_Pbitset[Mypos >> 6]._Array[0] &= ~(1i64 << (Mypos & 0x3F));
  v5 = std::bitset<21>::operator[](v3, &result, 7ui64);
  v7 = v5->_Mypos;
  if ( v7 >= 0x3E )
    std::_Xout_of_range("invalid bitset<N> position");
  v5->_Pbitset[v7 >> 6]._Array[0] &= ~(1i64 << (v7 & 0x3F));
  v8 = std::bitset<21>::operator[](v6, &result, 8ui64);
  v10 = v8->_Mypos;
  if ( v10 >= 0x3E )
    std::_Xout_of_range("invalid bitset<N> position");
  v8->_Pbitset[v10 >> 6]._Array[0] &= ~(1i64 << (v10 & 0x3F));
  v11 = std::bitset<21>::operator[](v9, &result, 4ui64);
  v13 = v11->_Mypos;
  if ( v13 >= 0x3E )
    std::_Xout_of_range("invalid bitset<N> position");
  v14 = v11->_Mypos & 0x3F;
  v15 = v11->_Pbitset[v13 >> 6]._Array[0];
  if ( _bittest64((const __int64 *)&v15, v14) )
  {
    v16 = std::bitset<21>::operator[](v12, &result, 4ui64);
    v18 = v16->_Mypos;
    Pbitset = v16->_Pbitset;
    if ( v18 >= 0x3E )
      std::_Xout_of_range("invalid bitset<N> position");
    v20 = v18 >> 6;
    v21 = v18 & 0x3F;
    v22 = (__int64 *)&Pbitset[v20];
    v23 = *v22;
    if ( v17 )
      v24 = v23 | (1i64 << v21);
    else
      v24 = v23 & ~(1i64 << v21);
    *v22 = v24;
  }
  v25 = std::bitset<21>::operator[](v12, &result, 9ui64);
  v27 = v25->_Mypos;
  if ( v27 >= 0x3E )
    std::_Xout_of_range("invalid bitset<N> position");
  v25->_Pbitset[v27 >> 6]._Array[0] &= ~(1i64 << (v27 & 0x3F));
  v28 = std::bitset<21>::operator[](v26, &result, 0x29ui64);
  v30 = v28->_Mypos;
  if ( v30 >= 0x3E )
    std::_Xout_of_range("invalid bitset<N> position");
  v28->_Pbitset[v30 >> 6]._Array[0] &= ~(1i64 << (v28->_Mypos & 0x3F));
  v31 = std::bitset<21>::operator[](v29, &result, 0x3Dui64);
  v32 = v31->_Mypos;
  if ( v32 >= 0x3E )
    std::_Xout_of_range("invalid bitset<N> position");
  v31->_Pbitset[v32 >> 6]._Array[0] &= ~(1i64 << (v32 & 0x3F));
}

void __fastcall ActorChara::AddClimaxTime(ActorChara *this, int time)
{
  int v4; // eax
  int value; // ecx
  int v6; // eax

  if ( (!this->IsInfiniteClimaxMode(this) || (unsigned int)(this->iActorStat - 39) <= 2) && this->IsClimaxMode(this) )
  {
    this->xClimaxTime.value += time << 16;
    v4 = this->GetMaxClimaxTime(this);
    value = this->xClimaxTime.value;
    if ( value >= 0 )
    {
      v6 = v4 << 16;
      if ( value >= v6 )
        this->xClimaxTime.value = v6;
    }
    else
    {
      this->xClimaxTime.value = 0;
    }
  }
}

void __fastcall ActorChara::AddClimaxTime(ActorChara *this, float time)
{
  int v3; // eax
  int value; // ecx
  int v5; // eax

  if ( (!this->IsInfiniteClimaxMode(this) || (unsigned int)(this->iActorStat - 39) <= 2) && this->IsClimaxMode(this) )
  {
    this->xClimaxTime.value += (int)(float)(time * 65536.0);
    v3 = this->GetMaxClimaxTime(this);
    value = this->xClimaxTime.value;
    if ( value >= 0 )
    {
      v5 = v3 << 16;
      if ( value >= v5 )
        this->xClimaxTime.value = v5;
    }
    else
    {
      this->xClimaxTime.value = 0;
    }
  }
}

void __fastcall ActorChara::AddExPower(ActorChara *this, int pow, bool bFromActionEtcLine)
{
  BattleSystem::BattleController *v6; // rax
  std::bitset<61>::reference *v7; // rax
  unsigned __int64 Mypos; // rdx
  __int64 v9; // rcx
  int v10; // eax
  int iActorStat; // ecx
  int v12; // eax
  int value; // ecx
  int v14; // eax
  std::bitset<61>::reference result; // [rsp+28h] [rbp-20h] BYREF
  BattleSystem::BattleController *v16; // [rsp+68h] [rbp+20h]

  v6 = BattleSystem::BattleController::instance;
  if ( !BattleSystem::BattleController::instance )
  {
    v16 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v16);
    BattleSystem::BattleController::instance = v6;
  }
  if ( v6->roundPhase == DIE )
  {
    v7 = std::bitset<21>::operator[]((std::bitset<61> *)&this->bsTrainingFlag, &result, 2ui64);
    Mypos = v7->_Mypos;
    if ( Mypos >= 0x15 )
      std::_Xout_of_range("invalid bitset<N> position");
    v9 = v7->_Mypos & 0x1F;
    v10 = *((_DWORD *)v7->_Pbitset->_Array + (Mypos >> 5));
    if ( !_bittest(&v10, v9) || pow < 0 )
    {
      if ( this->IsClimaxMode(this) || this->IsCommandFromClimax(this) )
      {
        if ( pow >= 0 )
          return;
        if ( bFromActionEtcLine )
        {
          iActorStat = this->iActorStat;
          if ( (unsigned int)(iActorStat - 29) > 2 && iActorStat != 35 )
          {
            pow += 1000;
            if ( pow > 0 )
              pow = 0;
          }
        }
      }
      this->xExPower.value += pow << 16;
      v12 = this->GetMaxExPower(this);
      value = this->xExPower.value;
      if ( value >= 0 )
      {
        v14 = v12 << 16;
        if ( value >= v14 )
          this->xExPower.value = v14;
      }
      else
      {
        this->xExPower.value = 0;
      }
    }
  }
}

void __fastcall ActorChara::AddEyeAngle(ActorChara *this, bool bRightEye, float x, float y)
{
  float v4; // xmm2_4
  float v5; // xmm3_4
  float fLow; // xmm0_4
  float fLeft; // xmm0_4
  float v8; // xmm2_4
  float v9; // xmm3_4
  float v10; // xmm0_4
  float v11; // xmm0_4

  if ( bRightEye )
  {
    v4 = x + this->eyeCtrl.fRAngleX;
    v5 = y + this->eyeCtrl.fRAngleY;
    LODWORD(fLow) = LODWORD(this->eyeCtrl.rightEyeLimit.fUp) ^ _xmm;
    this->eyeCtrl.fRAngleX = v4;
    this->eyeCtrl.fRAngleY = v5;
    if ( fLow > v4 || (fLow = this->eyeCtrl.rightEyeLimit.fLow, v4 > fLow) )
      this->eyeCtrl.fRAngleX = fLow;
    LODWORD(fLeft) = LODWORD(this->eyeCtrl.rightEyeLimit.fRight) ^ _xmm;
    if ( fLeft > v5 || (fLeft = this->eyeCtrl.rightEyeLimit.fLeft, v5 > fLeft) )
      this->eyeCtrl.fRAngleY = fLeft;
  }
  else
  {
    v8 = x + this->eyeCtrl.fLAngleX;
    v9 = y + this->eyeCtrl.fLAngleY;
    LODWORD(v10) = LODWORD(this->eyeCtrl.leftEyeLimit.fUp) ^ _xmm;
    this->eyeCtrl.fLAngleX = v8;
    this->eyeCtrl.fLAngleY = v9;
    if ( v10 > v8 || (v10 = this->eyeCtrl.leftEyeLimit.fLow, v8 > v10) )
      this->eyeCtrl.fLAngleX = v10;
    LODWORD(v11) = LODWORD(this->eyeCtrl.leftEyeLimit.fRight) ^ _xmm;
    if ( v11 > v9 || (v11 = this->eyeCtrl.leftEyeLimit.fLeft, v9 > v11) )
      this->eyeCtrl.fLAngleY = v11;
  }
}

void __fastcall ActorChara::BecomUpdate(ActorChara *this)
{
  std::bitset<62>::reference *v2; // rax
  const std::bitset<62>::reference *v3; // r9
  std::bitset<61>::reference *v4; // rax
  unsigned __int64 Mypos; // rdx
  std::bitset<61>::reference *v6; // rax
  unsigned __int64 v7; // rdx
  std::bitset<61>::reference result; // [rsp+28h] [rbp-30h] BYREF
  std::bitset<61>::reference v9; // [rsp+38h] [rbp-20h] BYREF

  this->bsAliveShotID._Array[0] = 0;
  if ( this->iActorStat == 65 && this->bActionEnd )
    this->bActionFreeze = 1;
  std::bitset<21>::operator[]((std::bitset<61> *)&this->systemFlag, &result, 0x27ui64);
  v2 = (std::bitset<62>::reference *)std::bitset<21>::operator[]((std::bitset<61> *)&this->systemFlag, &v9, 0x28ui64);
  std::bitset<62>::reference::operator=(v2, v3);
  v4 = std::bitset<21>::operator[]((std::bitset<61> *)&this->systemFlag, &v9, 0x27ui64);
  Mypos = v4->_Mypos;
  if ( Mypos >= 0x3E )
    std::_Xout_of_range("invalid bitset<N> position");
  v4->_Pbitset[Mypos >> 6]._Array[0] &= ~(1i64 << (Mypos & 0x3F));
  v6 = std::bitset<21>::operator[]((std::bitset<61> *)&this->bsTrainingFlag, &v9, 0x14ui64);
  v7 = v6->_Mypos;
  if ( v7 >= 0x15 )
    std::_Xout_of_range("invalid bitset<N> position");
  *((_DWORD *)v6->_Pbitset->_Array + (v7 >> 5)) &= ~(1 << (v7 & 0x1F));
}

void __fastcall ActorChara::BranchCheck(ActorChara *this)
{
  std::bitset<61>::reference *v2; // rax
  unsigned __int64 Mypos; // rdx
  __int64 v4; // rcx
  unsigned __int64 v5; // rax
  $FDE819AA8FD4FE0CD927010514BE7533 *v6; // r9
  unsigned int uiCancelBonusFlag; // eax
  unsigned int v8; // eax
  std::bitset<61>::reference *v9; // rax
  unsigned __int64 v10; // rdx
  _BOOL8 v11; // rdx
  std::bitset<61>::reference result; // [rsp+28h] [rbp-20h] BYREF

  v2 = std::bitset<21>::operator[]((std::bitset<61> *)&this->systemFlag, &result, 0x25ui64);
  Mypos = v2->_Mypos;
  if ( Mypos >= 0x3E )
    std::_Xout_of_range("invalid bitset<N> position");
  v4 = v2->_Mypos & 0x3F;
  v5 = v2->_Pbitset[Mypos >> 6]._Array[0];
  if ( !_bittest64((const __int64 *)&v5, v4) && !this->xHitStopFrame.value && !this->IsBlackStop(this) )
  {
    v6 = Actor::_branchConfirm(this);
    if ( v6 )
    {
      uiCancelBonusFlag = this->uiCancelBonusFlag;
      if ( uiCancelBonusFlag )
      {
        v8 = uiCancelBonusFlag + 7;
        if ( v6->iBase[0] == v8 || v6->iBase[4] == v8 )
        {
          v9 = std::bitset<21>::operator[]((std::bitset<61> *)&this->systemFlag, &result, 0x30ui64);
          v10 = v9->_Mypos;
          if ( v10 >= 0x3E )
            std::_Xout_of_range("invalid bitset<N> position");
          v9->_Pbitset[v10 >> 6]._Array[0] |= 1i64 << (v9->_Mypos & 0x3F);
        }
      }
      this->ActionChangeReq(this, v6->iBase[2], v6->iBase[3]);
      if ( this->IsActionDataChanged(this) )
        ((void (__fastcall *)(ActorChara *, const CharaActionData *, OGLModel *, const CharaHitRect *, __int64))this->ChangeActionDataReq)(
          this,
          this->pAct,
          this->pMotionChangeModel,
          this->pHitRect,
          -2i64);
      if ( (this->iMoveOption & 2) != 0 )
      {
        ((void (__fastcall *)(ActorChara *))this->RequestPositionX)(this);
        if ( this->GetActionCategoryID(this, this->iActNo, 0) == 2 )
          ((void (__fastcall *)(ActorChara *))this->RequestPositionY)(this);
      }
      LOBYTE(v11) = 1;
      this->SetInvalidDefaultBranch(this, v11);
    }
  }
}

void __fastcall ActorChara::CancelBlackout(ActorChara *this)
{
  ActionBlackout *p_actBlack; // rdx
  __int64 v2; // rcx
  __int64 v3; // rax

  p_actBlack = &this->pActSys->actBlack;
  v2 = ciTargetID[this->iPlayerID];
  p_actBlack->reqData[v2].attr = NONE;
  v3 = v2;
  p_actBlack->reqData[v3].frame = 0;
  p_actBlack->reqData[v3].bFadeOut = 0;
  if ( p_actBlack->data[v2].attr )
  {
    if ( p_actBlack->data[v2].xNowFrame.value )
      p_actBlack->data[v2].xNowFrame.value = 0;
  }
}

void __fastcall ActorChara::CheckReversalRecordTiming(ActorChara *this)
{
  BattleSystem::BattleController *v2; // r8
  BattleSystem::BattleController *v3; // rax
  std::bitset<61>::reference *v4; // rax
  unsigned __int64 Mypos; // rdx
  BattleEventHandler *Instance; // rax
  std::bitset<61>::reference result; // [rsp+28h] [rbp-20h] BYREF
  BattleSystem::BattleController *v8; // [rsp+50h] [rbp+8h]

  if ( this->IsReversalRecordMode(this) )
  {
    v2 = BattleSystem::BattleController::instance;
    if ( !BattleSystem::BattleController::instance )
    {
      v8 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
      BattleSystem::BattleController::BattleController(v8);
      v2 = v3;
      BattleSystem::BattleController::instance = v3;
    }
    if ( v2->keyRecordMode == 5
      && v2->m_KeyRecord[v2->keyRecordInfo.iKeyRecordType][v2->keyRecordInfo.iKeyRecordSlot].pKeyBuffer._Mypair._Myval2->uiDataSize == 180 )
    {
      v4 = std::bitset<21>::operator[]((std::bitset<61> *)&this->systemFlag, &result, 0x2Aui64);
      Mypos = v4->_Mypos;
      if ( Mypos >= 0x3E )
        std::_Xout_of_range("invalid bitset<N> position");
      v4->_Pbitset[Mypos >> 6]._Array[0] |= 1i64 << (v4->_Mypos & 0x3F);
      Instance = BattleEventHandler::getInstance();
      BattleEventHandler::CallEvent_CharacterActivity(Instance, (PLAYER_ID)this->iPlayerID, REVERSAL, 1000);
    }
  }
}

void __fastcall ActorChara::CheckReversalTiming(ActorChara *this)
{
  std::bitset<62>::reference *v2; // rax
  const std::bitset<62>::reference *v3; // r9
  std::bitset<61>::reference *v4; // rax
  unsigned __int64 Mypos; // rdx
  __int64 v6; // rcx
  unsigned __int64 v7; // rax
  BattleSystem::BattleController *v8; // rax
  BattleSystem::BattlePlayerInfo *v9; // r8
  int iBattleScore; // eax
  unsigned int v11; // edx
  int v12; // ecx
  unsigned int v13; // edx
  int v14; // ecx
  BattleEventHandler *Instance; // rax
  std::bitset<61>::reference result; // [rsp+28h] [rbp-30h] BYREF
  std::bitset<61>::reference v17; // [rsp+38h] [rbp-20h] BYREF
  BattleSystem::BattleController *v18; // [rsp+60h] [rbp+8h]

  std::bitset<21>::operator[]((std::bitset<61> *)&this->systemFlag, &result, 0x29ui64);
  v2 = (std::bitset<62>::reference *)std::bitset<21>::operator[]((std::bitset<61> *)&this->systemFlag, &v17, 0x2Aui64);
  std::bitset<62>::reference::operator=(v2, v3);
  v4 = std::bitset<21>::operator[]((std::bitset<61> *)&this->systemFlag, &v17, 0x2Aui64);
  Mypos = v4->_Mypos;
  if ( Mypos >= 0x3E )
    std::_Xout_of_range("invalid bitset<N> position");
  v6 = v4->_Mypos & 0x3F;
  v7 = v4->_Pbitset[Mypos >> 6]._Array[0];
  if ( _bittest64((const __int64 *)&v7, v6) )
  {
    v8 = BattleSystem::BattleController::instance;
    if ( !BattleSystem::BattleController::instance )
    {
      v18 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
      BattleSystem::BattleController::BattleController(v18);
      BattleSystem::BattleController::instance = v8;
    }
    v9 = &v8->playerInfo[this->iPlayerID];
    v9->scoreInfo.iBattleScore += 1000;
    iBattleScore = v9->scoreInfo.iBattleScore;
    if ( iBattleScore > 99999999 )
      iBattleScore = 99999999;
    v9->scoreInfo.iBattleScore = iBattleScore;
    v11 = v9->iTotalScore ^ 0x7B48A35E ^ (LOWORD(v9->iTotalScore) ^ 0xA35E ^ (unsigned __int16)((v9->iTotalScore ^ 0x7B48A35Eu) >> 14)) & 0xCCCC ^ (((LOWORD(v9->iTotalScore) ^ 0xA35E ^ (unsigned __int16)((v9->iTotalScore ^ 0x7B48A35Eu) >> 14)) & 0xCCCC) << 14);
    v12 = ((v11 ^ (v11 >> 7)) & 0x550055 ^ v11 ^ (((v11 ^ (v11 >> 7)) & 0x550055) << 7)) + 1000;
    if ( v12 > 99999999 )
      v12 = 99999999;
    v13 = v12 ^ (v12 ^ (v12 >> 7)) & 0x550055 ^ (((v12 ^ (v12 >> 7)) & 0x550055) << 7);
    v14 = ((unsigned __int16)(v12 ^ (v12 ^ (v12 >> 7)) & 0x55 ^ ((((unsigned __int16)v12 ^ (unsigned __int16)(v12 >> 7)) & 0x55) << 7)) ^ (unsigned __int16)(v13 >> 14)) & 0xCCCC;
    v9->iTotalScore = v13 ^ v14 ^ (v14 << 14) ^ 0x7B48A35E;
    Instance = BattleEventHandler::getInstance();
    BattleEventHandler::CallEvent_CharacterActivity(Instance, (PLAYER_ID)this->iPlayerID, REVERSAL, 1000);
  }
}

void __fastcall ActorChara::CheckUseZOffset(ActorChara *this)
{
  __int16 pri; // cx
  __int64 v3; // rdx
  int iActFlg2; // er8
  int v5; // er8
  ZOffsetPriority v6; // [rsp+30h] [rbp+8h]
  ZOffsetPriority v7; // [rsp+38h] [rbp+10h]

  this->SetUseZOffset(this, 0);
  if ( !this->IsResultDemoActor(this) && this->pTarget )
  {
    v6 = cSubCategoryDrawPri[this->GetActionSubCategoryID(this, this->iActNo, 0)];
    v7 = cSubCategoryDrawPri[this->pTarget->GetActionSubCategoryID(this->pTarget, this->pTarget->iActNo, 0)];
    if ( this->IsThrowLock(this) || ((LOBYTE(v6.flag) | LOBYTE(v7.flag)) & 3) == 3 )
    {
      pri = -1;
      v3 = 0xFFFFFFFFi64;
    }
    else
    {
      pri = v6.pri;
      v3 = (unsigned __int16)v7.pri;
    }
    iActFlg2 = this->iActFlg2;
    if ( (iActFlg2 & 0x10000) == 0 || (this->pTarget->ActorCharaBase::ActorObject::Actor::iActFlg2 & 0x10000) != 0 )
    {
      if ( (this->iActFlg2 & 0x10000) == 0
        && (this->pTarget->ActorCharaBase::ActorObject::Actor::iActFlg2 & 0x10000) != 0 )
      {
        v3 = 3i64;
      }
    }
    else
    {
      pri = 3;
    }
    v5 = iActFlg2 & 0x20000;
    if ( (!v5 || (this->pTarget->ActorCharaBase::ActorObject::Actor::iActFlg2 & 0x20000) != 0)
      && (!v5 && (this->pTarget->ActorCharaBase::ActorObject::Actor::iActFlg2 & 0x20000) != 0
       || pri >= 0 && pri >= (__int16)v3 && (pri != (_WORD)v3 || !Actor::IsUseZOffset(this->pTarget))) )
    {
      LOBYTE(v3) = 1;
      this->SetUseZOffset(this, v3);
    }
  }
}

void __fastcall ActorChara::CommandActionRequest(ActorChara *this, _BOOL8 a2)
{
  ActorChara *v2; // rbx
  const CommandData::Setting *pCmdSet; // rax
  int iActionID; // ebp
  int v5; // edi
  int iActorStat; // esi
  std::bitset<62>::reference *v7; // rax
  bool v8; // r9
  int iGroup; // eax
  std::bitset<61>::reference *v10; // rax
  unsigned __int64 Mypos; // rdx
  const CommandData::Setting *v12; // rax
  std::bitset<62>::reference *v13; // rax
  bool v14; // r9
  const CommandData::Setting *v15; // rcx
  float fMoveX; // xmm0_4
  std::bitset<61>::reference result; // [rsp+20h] [rbp-68h] BYREF
  __int64 v18; // [rsp+30h] [rbp-58h]
  __int128 v19[3]; // [rsp+38h] [rbp-50h]
  int v20; // [rsp+68h] [rbp-20h]

  v18 = -2i64;
  v2 = this;
  if ( this->xHitStopFrame.value )
    return;
  pCmdSet = this->cmdInfo.entry.pCmdSet;
  if ( !pCmdSet || this->cmdInfo.entry.iPriTag != 1 )
    return;
  iActionID = pCmdSet->iActionID;
  v5 = 36;
  iActorStat = this->iActorStat;
  if ( this->bNextStatCommandCheck )
  {
    this = (ActorChara *)(unsigned int)this->iActorStatReserve;
    if ( (int)this >= 0 )
      iActorStat = (int)this;
    else
      v2->bNextStatCommandCheck = 0;
  }
  if ( iActionID <= 0 && pCmdSet->iActionBranchKey <= 0 )
    goto LABEL_44;
  LOBYTE(a2) = 1;
  if ( iActionID >= v2->GetActionCount(v2, a2) )
    return;
  this = (ActorChara *)(unsigned int)(v2->cmdInfo.entry.pCmdSet->iGroup - 15);
  if ( (unsigned int)this <= 4 )
  {
    v2->CheckReversalTiming(v2);
    v7 = (std::bitset<62>::reference *)std::bitset<21>::operator[](
                                         (std::bitset<61> *)&v2->systemFlag,
                                         &result,
                                         0x2Fui64);
    std::bitset<62>::reference::operator=(v7, v8);
  }
  iGroup = v2->cmdInfo.entry.pCmdSet->iGroup;
  if ( iGroup >= 14 )
  {
    v19[0] = (__int128)_mm_load_si128((const __m128i *)&_xmm);
    v19[1] = (__int128)_mm_load_si128((const __m128i *)&_xmm);
    v19[2] = (__int128)_mm_load_si128((const __m128i *)&_xmm);
    v20 = 36;
    v5 = *((_DWORD *)&v19[-3] + iGroup - 2);
    v2->CheckReversalRecordTiming(v2);
  }
  if ( (unsigned int)(iActorStat - 37) > 1 || v5 < 39 )
  {
    if ( (unsigned int)(iActorStat - 39) > 1 )
      goto LABEL_29;
    if ( v5 == 41 )
    {
      if ( v2->cancelBonusType >= REVERSAL )
        goto LABEL_29;
      v2->cancelBonusType = REVERSAL;
      goto LABEL_28;
    }
    if ( iActorStat < v5 && v5 >= 40 && v2->cancelBonusType < GUARD_CRASH )
    {
      v2->cancelBonusType = GUARD_CRASH;
      goto LABEL_28;
    }
  }
  else if ( v2->iActFrame > 0 && v2->cancelBonusType < COUNTER_HIT )
  {
    v2->cancelBonusType = COUNTER_HIT;
LABEL_28:
    this = (ActorChara *)(unsigned int)v2->cmdInfo.entry.pCmdSet->iActionBranchKey;
    v2->uiCancelBonusFlag = (unsigned int)this;
  }
LABEL_29:
  if ( iActionID > 0 )
  {
    v10 = std::bitset<21>::operator[]((std::bitset<61> *)&v2->systemFlag, &result, 0x30ui64);
    Mypos = v10->_Mypos;
    if ( Mypos >= 0x3E )
      std::_Xout_of_range("invalid bitset<N> position");
    v10->_Pbitset[Mypos >> 6]._Array[0] |= 1i64 << (v10->_Mypos & 0x3F);
    ActorChara::_cancelBonusCheck(v2);
    v2->ActionChangeReq(v2, iActionID, 0);
    if ( v5 >= 0 )
      v2->StateChangeReq(v2, v5);
    v12 = v2->cmdInfo.entry.pCmdSet;
    if ( (v12->iValidTerms & 0x800) != 0 || v12->iGroup < 20 && v2->vPos.y <= 0.0 )
      v2->CAngleChangeReq(v2, v2->iCAngleBuf);
    if ( (v2->iMoveOption & 2) == 0 )
    {
      if ( (v2->iActFlg2 & 0x800000) == 0 )
        goto LABEL_44;
      ((void (__fastcall *)(ActorChara *))v2->RequestPositionX)(v2);
      if ( v2->GetActionCategoryID(v2, v2->iActNo, 0) != 2 )
        goto LABEL_44;
      goto LABEL_43;
    }
    ((void (__fastcall *)(ActorChara *))v2->RequestPositionX)(v2);
    if ( v2->GetActionCategoryID(v2, v2->iActNo, 0) == 2 )
LABEL_43:
      ((void (__fastcall *)(ActorChara *))v2->RequestPositionY)(v2);
  }
LABEL_44:
  ActorChara::_isCommandReadyStat(this, iActorStat);
  v13 = (std::bitset<62>::reference *)std::bitset<21>::operator[]((std::bitset<61> *)&v2->systemFlag, &result, 0x31ui64);
  std::bitset<62>::reference::operator=(v13, v14);
  v2->SetActionBranchKey(v2, v2->cmdInfo.entry.pCmdSet->iActionBranchKey);
  v15 = v2->cmdInfo.entry.pCmdSet;
  if ( (v15->iValidTerms & 0x100) != 0 )
    ++v2->cmdInfo.iValidCount;
  v2->cmdInfo.CommandMove.iOptionFlag = v15->iValidTerms;
  v2->cmdInfo.CommandMove.fMoveX = v15->fCharaMoveX;
  if ( (v2->cmdInfo.CommandMove.iOptionFlag & 0x200) == 0 )
  {
    fMoveX = v2->cmdInfo.CommandMove.fMoveX;
    if ( v2->iCAngle )
      LODWORD(fMoveX) ^= _xmm;
    v2->cmdInfo.CommandMove.fMoveX = fMoveX;
  }
  v2->cmdInfo.CommandMove.fMoveY = v15->fCharaMoveY;
}

void __fastcall ActorChara::CommonActionRequest(ActorChara *this, _BOOL8 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 pCmdSet; // rcx
  int iActorStat; // esi
  __int64 v7; // rdx
  ActorChara_vtbl *v8; // rax
  ActorChara *v9; // rcx
  bool v10; // al
  __int64 v11; // r9
  ActorChara *v12; // rcx
  bool v13; // zf
  ActorChara_vtbl *v14; // rax
  char v15; // al
  __int64 v16; // r9
  char v17; // al
  __int64 v18; // r9
  ActorChara *v19; // rcx
  ActorChara_vtbl *v20; // rax
  bool v21; // al
  __int64 v22; // rdx
  ActorChara_vtbl *v23; // rax
  ActorChara *v24; // rcx
  float v25; // xmm0_4
  float v26; // xmm0_4
  float v27; // xmm0_4
  float v28; // xmm0_4
  int v29; // eax
  __int64 v30; // r9
  int v31; // eax
  __int64 v32; // r9
  int v33; // eax
  __int64 v34; // r9
  int v35; // eax
  __int64 v36; // r9
  int v37; // eax
  __int64 v38; // r9
  _BOOL8 v39; // rdx
  std::bitset<61>::reference *v40; // rax
  unsigned __int64 Mypos; // rdx
  std::bitset<61>::reference *v42; // rax
  unsigned __int64 v43; // rdx
  std::bitset<62>::reference *v44; // rax
  bool v45; // r9
  std::bitset<61>::reference *v46; // rax
  unsigned __int64 v47; // rdx
  std::bitset<61>::reference *v48; // rax
  unsigned __int64 v49; // rdx
  std::bitset<61>::reference *v50; // rax
  unsigned __int64 v51; // rdx
  char *v52; // rbx
  char v53; // bp
  __int64 v54; // rdx
  float SoundPanPosition; // xmm0_4
  BattleSystem::BattleController *v56; // rax
  BattleEventHandler *Instance; // rax
  int v58; // eax
  int v59; // edx
  int CommonActionID; // eax
  int v61; // eax
  int v62; // edx
  int v63; // eax
  float v64; // xmm0_4
  __int64 v65; // r9
  __int64 v66; // rdx
  std::bitset<61>::reference *v67; // rax
  unsigned __int64 v68; // rdx
  float v69; // xmm0_4
  __int64 v70; // r9
  __int64 v71; // rdx
  std::bitset<61>::reference *v72; // rax
  unsigned __int64 v73; // rdx
  int v74; // ebx
  __int64 v75; // r9
  int v76; // eax
  __int64 v77; // r9
  std::bitset<62>::reference *v78; // rax
  bool v79; // r9
  std::bitset<62>::reference *v80; // rax
  bool v81; // r9
  const CommandData::Setting *v82; // rcx
  float fMoveX; // xmm0_4
  std::bitset<61>::reference result; // [rsp+28h] [rbp-30h] BYREF
  extension::SoundObject o; // [rsp+60h] [rbp+8h] BYREF

  if ( this->xHitStopFrame.value )
  {
    this->CommonActionRequestDuringHitStop(this);
    return;
  }
  pCmdSet = (unsigned __int64)this->cmdInfo.entry.pCmdSet;
  if ( pCmdSet && !this->cmdInfo.entry.iPriTag )
  {
    iActorStat = this->iActorStat;
    if ( this->bNextStatCommandCheck )
    {
      if ( this->iActorStatReserve >= 0 )
        iActorStat = this->iActorStatReserve;
      else
        this->bNextStatCommandCheck = 0;
    }
    LOBYTE(a2) = this->iCAngle != this->iCAngleBuf && (this->iActFlg2 & 0x400) == 0;
    switch ( *(_DWORD *)(pCmdSet + 44) )
    {
      case 0:
      case 0x2B:
        switch ( iActorStat )
        {
          case 0:
            if ( !a2 )
              goto $LN362;
            v7 = 30i64;
            goto LABEL_43;
          case 1:
            LOBYTE(a4) = 1;
            ((void (__fastcall *)(ActorChara *, __int64, _QWORD, __int64, __int64))this->ActionChangeReqBase)(
              this,
              3i64,
              0i64,
              a4,
              -2i64);
            goto $LN362;
          case 4:
            LOBYTE(a4) = 1;
            ((void (__fastcall *)(ActorChara *, __int64, _QWORD, __int64, __int64))this->ActionChangeReqBase)(
              this,
              7i64,
              0i64,
              a4,
              -2i64);
            goto $LN362;
          case 23:
            goto $LN362;
          case 24:
            goto $LN140_1;
          case 25:
            v8 = this->ActorCharaBase::ActorObject::Actor::__vftable;
            v9 = this;
            if ( a2 )
            {
              v7 = 30i64;
              goto LABEL_44;
            }
            v10 = v8->IsCrouch(this);
            LOBYTE(v11) = 1;
            v12 = this;
            v13 = !v10;
            v14 = this->ActorCharaBase::ActorObject::Actor::__vftable;
            if ( v13 )
              ((void (__fastcall *)(ActorChara *, __int64, _QWORD, __int64, __int64))v14->ActionChangeReqBase)(
                this,
                34i64,
                0i64,
                v11,
                -2i64);
            else
LABEL_22:
              ((void (__fastcall *)(ActorChara *, __int64))v14->ActionChangeReqBase)(v12, 3i64);
            break;
          default:
            v15 = ((__int64 (__fastcall *)(ActorChara *, _BOOL8))this->IsCrouch)(this, a2);
            LOBYTE(v16) = 1;
            v12 = this;
            v13 = v15 == 0;
            v14 = this->ActorCharaBase::ActorObject::Actor::__vftable;
            if ( !v13 )
              goto LABEL_22;
            ((void (__fastcall *)(ActorChara *, _QWORD, _QWORD, __int64, __int64))v14->ActionChangeReqBase)(
              this,
              0i64,
              0i64,
              v16,
              -2i64);
            goto $LN362;
        }
        goto $LN362;
      case 1:
        if ( !iActorStat )
        {
          LOBYTE(a4) = 1;
          ((void (__fastcall *)(ActorChara *, __int64, _QWORD, __int64, __int64))this->ActionChangeReqBase)(
            this,
            1i64,
            0i64,
            a4,
            -2i64);
          goto $LN362;
        }
        pCmdSet = (unsigned int)(iActorStat - 1);
        if ( iActorStat != 1 )
        {
          if ( iActorStat == 23 )
          {
LABEL_153:
            LOBYTE(a4) = 1;
            ((void (__fastcall *)(ActorChara *, __int64, _QWORD, __int64, __int64))this->ActionChangeReqBase)(
              this,
              31i64,
              (unsigned int)this->iActFrame,
              a4,
              -2i64);
          }
          else
          {
            pCmdSet = (unsigned int)(iActorStat - 24);
            if ( iActorStat == 24 )
              goto $LN362;
            v8 = this->ActorCharaBase::ActorObject::Actor::__vftable;
            v13 = (_DWORD)pCmdSet == 1;
            v9 = this;
            if ( v13 )
            {
              if ( a2 )
              {
                v7 = 31i64;
                goto LABEL_44;
              }
              v21 = v8->IsCrouch(this);
              LOBYTE(v18) = 1;
              v19 = this;
              v13 = !v21;
              v20 = this->ActorCharaBase::ActorObject::Actor::__vftable;
              if ( !v13 )
              {
                ((void (__fastcall *)(ActorChara *, __int64))v20->ActionChangeReqBase)(this, 39i64);
                goto $LN362;
              }
            }
            else
            {
              v17 = ((__int64 (__fastcall *)(ActorChara *, _BOOL8))v8->IsCrouch)(this, a2);
              LOBYTE(v18) = 1;
              v19 = this;
              v13 = v17 == 0;
              v20 = this->ActorCharaBase::ActorObject::Actor::__vftable;
              if ( !v13 )
              {
                ((void (__fastcall *)(ActorChara *, __int64))v20->ActionChangeReqBase)(this, 2i64);
                goto $LN362;
              }
            }
            ((void (__fastcall *)(ActorChara *, __int64, _QWORD, __int64, __int64))v20->ActionChangeReqBase)(
              v19,
              1i64,
              0i64,
              v18,
              -2i64);
          }
          goto $LN362;
        }
        if ( !a2 )
          goto $LN362;
        v7 = 31i64;
        goto LABEL_43;
      case 2:
        v7 = 4i64;
        goto LABEL_43;
      case 3:
        v7 = 5i64;
        goto LABEL_43;
      case 4:
        v22 = 6i64;
        goto LABEL_47;
      case 6:
        v22 = 8i64;
        goto LABEL_47;
      case 7:
        switch ( iActorStat )
        {
          case 4:
            goto $LN63_7;
          case 6:
            goto $LN89_9;
          case 7:
            goto $LN66_6;
          case 8:
            goto $LN70_4;
          case 9:
            goto $LN72_4;
          case 10:
            goto $LN68_6;
          default:
            v7 = 9i64;
            goto LABEL_43;
        }
      case 8:
        switch ( iActorStat )
        {
          case 4:
            goto $LN76_6;
          case 6:
            goto $LN89_9;
          case 7:
            goto $LN66_6;
          case 8:
            goto $LN70_4;
          case 9:
            goto $LN72_4;
          case 10:
            goto $LN68_6;
          default:
            v7 = 10i64;
            goto LABEL_43;
        }
      case 9:
        switch ( iActorStat )
        {
          case 6:
$LN89_9:
            if ( !this->bActionEnd )
              return;
            LOBYTE(a4) = 1;
            ((void (__fastcall *)(ActorChara *, __int64, _QWORD, __int64, __int64))this->ActionChangeReqBase)(
              this,
              14i64,
              0i64,
              a4,
              -2i64);
            break;
          case 7:
$LN66_6:
            if ( !this->bActionEnd )
              return;
            LOBYTE(a4) = 1;
            ((void (__fastcall *)(ActorChara *, __int64, _QWORD, __int64, __int64))this->ActionChangeReqBase)(
              this,
              15i64,
              0i64,
              a4,
              -2i64);
            break;
          case 8:
$LN70_4:
            if ( !this->bActionEnd )
              return;
            LOBYTE(a4) = 1;
            ((void (__fastcall *)(ActorChara *, __int64, _QWORD, __int64, __int64))this->ActionChangeReqBase)(
              this,
              22i64,
              0i64,
              a4,
              -2i64);
            break;
          case 9:
$LN72_4:
            if ( !this->bActionEnd )
              return;
            LOBYTE(a4) = 1;
            ((void (__fastcall *)(ActorChara *, __int64, _QWORD, __int64, __int64))this->ActionChangeReqBase)(
              this,
              23i64,
              0i64,
              a4,
              -2i64);
            break;
          case 10:
$LN68_6:
            if ( !this->bActionEnd )
              return;
            LOBYTE(a4) = 1;
            ((void (__fastcall *)(ActorChara *, __int64, _QWORD, __int64, __int64))this->ActionChangeReqBase)(
              this,
              16i64,
              0i64,
              a4,
              -2i64);
            break;
          default:
            v7 = 13i64;
            goto LABEL_43;
        }
        goto $LN362;
      case 0xA:
$LN63_7:
        v7 = 11i64;
        goto LABEL_43;
      case 0xB:
$LN76_6:
        v7 = 12i64;
        goto LABEL_43;
      case 0xC:
        v7 = 14i64;
        goto LABEL_43;
      case 0xD:
        v7 = 15i64;
        goto LABEL_43;
      case 0xE:
        v7 = 16i64;
        goto LABEL_43;
      case 0xF:
        v25 = ((float (__fastcall *)(ActorChara *, _BOOL8))this->GetRivalDistance)(this, a2);
        v23 = this->ActorCharaBase::ActorObject::Actor::__vftable;
        LOBYTE(a4) = 1;
        v24 = this;
        v22 = 49i64;
        if ( this->pBaseStat->status.fLowPunchDist <= v25 )
          v22 = 50i64;
        goto LABEL_48;
      case 0x10:
        v26 = ((float (__fastcall *)(ActorChara *, _BOOL8))this->GetRivalDistance)(this, a2);
        v23 = this->ActorCharaBase::ActorObject::Actor::__vftable;
        LOBYTE(a4) = 1;
        v24 = this;
        v22 = 51i64;
        if ( this->pBaseStat->status.fLowKickDist <= v26 )
          v22 = 52i64;
        goto LABEL_48;
      case 0x11:
        v27 = ((float (__fastcall *)(ActorChara *, _BOOL8))this->GetRivalDistance)(this, a2);
        v23 = this->ActorCharaBase::ActorObject::Actor::__vftable;
        LOBYTE(a4) = 1;
        v24 = this;
        v22 = 53i64;
        if ( this->pBaseStat->status.fHiPunchDist <= v27 )
          v22 = 54i64;
        goto LABEL_48;
      case 0x12:
        v28 = ((float (__fastcall *)(ActorChara *, _BOOL8))this->GetRivalDistance)(this, a2);
        v23 = this->ActorCharaBase::ActorObject::Actor::__vftable;
        LOBYTE(a4) = 1;
        v24 = this;
        v22 = 55i64;
        if ( this->pBaseStat->status.fHiKickDist <= v28 )
          v22 = 56i64;
        goto LABEL_48;
      case 0x13:
        v22 = 57i64;
        goto LABEL_47;
      case 0x14:
        v22 = 58i64;
        goto LABEL_47;
      case 0x15:
        v22 = 59i64;
        goto LABEL_47;
      case 0x16:
        v22 = 60i64;
        goto LABEL_47;
      case 0x17:
        LOBYTE(a2) = 1;
        v29 = this->GetJumpState(this, a2);
        LOBYTE(v30) = 1;
        ((void (__fastcall *)(ActorChara *, _QWORD, _QWORD, __int64, __int64))this->ActionChangeReqBase)(
          this,
          (unsigned int)ciJumpAttackActionID[-1][v29 - 1],
          0i64,
          v30,
          -2i64);
        goto $LN362;
      case 0x18:
        LOBYTE(a2) = 1;
        v31 = this->GetJumpState(this, a2);
        LOBYTE(v32) = 1;
        ((void (__fastcall *)(ActorChara *, _QWORD, _QWORD, __int64, __int64))this->ActionChangeReqBase)(
          this,
          (unsigned int)ciJumpAttackActionID[0][v31 - 1],
          0i64,
          v32,
          -2i64);
        goto $LN362;
      case 0x19:
        LOBYTE(a2) = 1;
        v33 = this->GetJumpState(this, a2);
        LOBYTE(v34) = 1;
        ((void (__fastcall *)(ActorChara *, _QWORD, _QWORD, __int64, __int64))this->ActionChangeReqBase)(
          this,
          (unsigned int)ciJumpAttackActionID[0][v33 + 9],
          0i64,
          v34,
          -2i64);
        goto $LN362;
      case 0x1A:
        LOBYTE(a2) = 1;
        v35 = this->GetJumpState(this, a2);
        LOBYTE(v36) = 1;
        ((void (__fastcall *)(ActorChara *, _QWORD, _QWORD, __int64, __int64))this->ActionChangeReqBase)(
          this,
          (unsigned int)ciJumpAttackActionID[1][v35 + 9],
          0i64,
          v36,
          -2i64);
        goto $LN362;
      case 0x1B:
        v22 = 101i64;
        goto LABEL_47;
      case 0x1C:
        LOBYTE(a2) = 1;
        v37 = this->GetJumpState(this, a2);
        LOBYTE(v38) = 1;
        ((void (__fastcall *)(ActorChara *, _QWORD, _QWORD, __int64, __int64))this->ActionChangeReqBase)(
          this,
          (unsigned int)ciJumpAttackActionID[2][v37 + 9],
          0i64,
          v38,
          -2i64);
        goto $LN362;
      case 0x1D:
        v23 = this->ActorCharaBase::ActorObject::Actor::__vftable;
        LOBYTE(a4) = 1;
        v24 = this;
        v22 = 215i64;
        if ( iActorStat != 4 )
          v22 = 40i64;
        goto LABEL_48;
      case 0x1E:
        v22 = 41i64;
LABEL_47:
        LOBYTE(a4) = 1;
        v23 = this->ActorCharaBase::ActorObject::Actor::__vftable;
        v24 = this;
LABEL_48:
        ((void (__fastcall *)(ActorChara *, __int64, _QWORD, __int64, __int64))v23->ActionChangeReqBase)(
          v24,
          v22,
          0i64,
          a4,
          -2i64);
        goto LABEL_49;
      case 0x1F:
        LOBYTE(a4) = 1;
        ((void (__fastcall *)(ActorChara *, __int64, _QWORD, __int64, __int64))this->ActionChangeReqBase)(
          this,
          48i64,
          0i64,
          a4,
          -2i64);
        this->CAngleChangeReq(this);
        this->SetClimaxMode(this, 0);
        goto LABEL_50;
      case 0x20:
        LOBYTE(a4) = 1;
        ((void (__fastcall *)(ActorChara *, __int64, _QWORD, __int64, __int64))this->ActionChangeReqBase)(
          this,
          42i64,
          0i64,
          a4,
          -2i64);
        this->CAngleChangeReq(this);
        this->ResetDamageFlags(this);
        v40 = std::bitset<21>::operator[]((std::bitset<61> *)&this->systemFlag, &result, 0x1Fui64);
        Mypos = v40->_Mypos;
        if ( Mypos >= 0x3E )
          std::_Xout_of_range("invalid bitset<N> position");
        pCmdSet = Mypos >> 6;
        v40->_Pbitset[Mypos >> 6]._Array[0] |= 1i64 << (v40->_Mypos & 0x3F);
        goto $LN362;
      case 0x21:
        LOBYTE(a4) = 1;
        ((void (__fastcall *)(ActorChara *, __int64, _QWORD, __int64, __int64))this->ActionChangeReqBase)(
          this,
          43i64,
          0i64,
          a4,
          -2i64);
        this->CAngleChangeReq(this);
        this->ResetDamageFlags(this);
        v42 = std::bitset<21>::operator[]((std::bitset<61> *)&this->systemFlag, &result, 0x1Fui64);
        v43 = v42->_Mypos;
        if ( v43 >= 0x3E )
          std::_Xout_of_range("invalid bitset<N> position");
        pCmdSet = v43 >> 6;
        v42->_Pbitset[v43 >> 6]._Array[0] |= 1i64 << (v42->_Mypos & 0x3F);
        goto $LN362;
      case 0x22:
        LOBYTE(a4) = 1;
        ((void (__fastcall *)(ActorChara *, __int64, _QWORD, __int64, __int64))this->ActionChangeReqBase)(
          this,
          44i64,
          0i64,
          a4,
          -2i64);
        this->IsAirAtkDamage(this);
        v44 = (std::bitset<62>::reference *)std::bitset<21>::operator[](
                                              (std::bitset<61> *)&this->systemFlag,
                                              &result,
                                              0x21ui64);
        std::bitset<62>::reference::operator=(v44, v45);
        this->CAngleChangeReq(this);
        this->ResetDamageFlags(this);
        v46 = std::bitset<21>::operator[]((std::bitset<61> *)&this->systemFlag, &result, 0x20ui64);
        v47 = v46->_Mypos;
        if ( v47 >= 0x3E )
          std::_Xout_of_range("invalid bitset<N> position");
        pCmdSet = v47 >> 6;
        v46->_Pbitset[v47 >> 6]._Array[0] |= 1i64 << (v46->_Mypos & 0x3F);
        goto $LN362;
      case 0x23:
        LOBYTE(a4) = 1;
        ((void (__fastcall *)(ActorChara *, __int64, _QWORD, __int64, __int64))this->ActionChangeReqBase)(
          this,
          45i64,
          0i64,
          a4,
          -2i64);
        this->CAngleChangeReq(this);
        this->ResetDamageFlags(this);
        ((void (__fastcall *)(ActorChara *))this->RequestPositionY)(this);
        v48 = std::bitset<21>::operator[]((std::bitset<61> *)&this->systemFlag, &result, 0x14ui64);
        v49 = v48->_Mypos;
        if ( v49 >= 0x3E )
          std::_Xout_of_range("invalid bitset<N> position");
        pCmdSet = v49 >> 6;
        v48->_Pbitset[v49 >> 6]._Array[0] |= 1i64 << (v48->_Mypos & 0x3F);
        goto $LN362;
      case 0x24:
        v50 = std::bitset<21>::operator[]((std::bitset<61> *)&this->systemFlag, &result, 0x24ui64);
        v51 = v50->_Mypos;
        if ( v51 >= 0x3E )
          std::_Xout_of_range("invalid bitset<N> position");
        v50->_Pbitset[v51 >> 6]._Array[0] |= 1i64 << (v50->_Mypos & 0x3F);
        v52 = (char *)operator new(0x60ui64);
        *(_QWORD *)v52 = 1i64;
        *((_WORD *)v52 + 4) = 1;
        v53 = 0;
        *(_QWORD *)(v52 + 12) = 0i64;
        *(_QWORD *)(v52 + 20) = 0i64;
        *((_DWORD *)v52 + 7) = 1120403456;
        *((_QWORD *)v52 + 11) = 0i64;
        o.m_runtimeEffector.m_ptr = (extension::exsound_detail::RuntimeEffector *)v52;
        SoundPanPosition = Actor::GetSoundPanPosition(this);
        if ( v52[8] || *((float *)v52 + 6) != SoundPanPosition )
          v53 = 1;
        v52[8] = v53;
        *((float *)v52 + 6) = SoundPanPosition;
        v52[9] = 0;
        if ( *(_QWORD *)&AppMain::pApp != -2196904i64 )
          extension::SoundList::playSEByName(
            (extension::SoundList *)(*(_QWORD *)&AppMain::pApp + 2196904i64),
            &o,
            &s_soundIndex.m_keys[157],
            0i64);
        extension::RefCountablePtr<extension::exsound_detail::RuntimeEffector>::~RefCountablePtr<extension::exsound_detail::RuntimeEffector>(
          &o.m_runtimeEffector,
          v54);
        BattleSystem::BattleController::GetActionSystem();
        BattleSystem::BattleController::AddBattleScore(v56, this->iPlayerID, 5000);
        Instance = BattleEventHandler::getInstance();
        BattleEventHandler::CallEvent_CharacterActivity(Instance, (PLAYER_ID)this->iPlayerID, THROW_ESCAPE, 5000);
        goto $LN362;
      case 0x26:
        pCmdSet = (unsigned int)(iActorStat - 23);
        switch ( iActorStat )
        {
          case 23:
            goto $LN362;
          case 24:
$LN140_1:
            LOBYTE(a4) = 1;
            ((void (__fastcall *)(ActorChara *, __int64, _QWORD, __int64, __int64))this->ActionChangeReqBase)(
              this,
              30i64,
              (unsigned int)this->iActFrame,
              a4,
              -2i64);
            break;
          case 26:
            if ( this->GetActionCategoryID(this, this->iActNo, 0) != 1 )
              return;
            v58 = this->GetBaseActionID(this);
            if ( v58 == 38 )
            {
              v59 = 35;
            }
            else
            {
              if ( v58 != 203 )
                goto $LN362;
              v59 = 201;
            }
            CommonActionID = CharaBaseStatus::GetCommonActionID((CharaBaseStatus *)this->pBaseStat, v59);
            if ( CommonActionID > 0 )
              this->iActNo = CommonActionID;
            break;
          default:
            if ( a2 )
            {
              v7 = 30i64;
              goto LABEL_43;
            }
            if ( iActorStat != 25 || this->IsCrouch(this) )
            {
              LOBYTE(a4) = 1;
              ((void (__fastcall *)(ActorChara *, __int64, _QWORD, __int64, __int64))this->ActionChangeReqBase)(
                this,
                32i64,
                0i64,
                a4,
                -2i64);
            }
            break;
        }
        goto $LN362;
      case 0x27:
        if ( iActorStat == 23 )
          goto LABEL_153;
        pCmdSet = (unsigned int)(iActorStat - 24);
        if ( iActorStat == 24 )
          goto $LN362;
        if ( iActorStat == 26 )
        {
          if ( this->GetActionCategoryID(this, this->iActNo, 0) == 1 )
            return;
          v61 = this->GetBaseActionID(this);
          if ( v61 == 33 )
            goto LABEL_150;
          if ( v61 <= 34 )
            goto $LN362;
          if ( v61 <= 36 )
          {
LABEL_150:
            v62 = 38;
          }
          else
          {
            if ( (unsigned int)(v61 - 200) > 2 )
              goto $LN362;
            v62 = 203;
          }
          v63 = CharaBaseStatus::GetCommonActionID((CharaBaseStatus *)this->pBaseStat, v62);
          if ( v63 > 0 )
            this->iActNo = v63;
        }
        else if ( a2 )
        {
          v7 = 31i64;
LABEL_43:
          v8 = this->ActorCharaBase::ActorObject::Actor::__vftable;
          v9 = this;
LABEL_44:
          LOBYTE(a4) = 1;
          ((void (__fastcall *)(ActorChara *, __int64, _QWORD, __int64, __int64))v8->ActionChangeReqBase)(
            v9,
            v7,
            0i64,
            a4,
            -2i64);
          this->CAngleChangeReq(this);
        }
        else if ( iActorStat != 25 || !this->IsCrouch(this) )
        {
          LOBYTE(a4) = 1;
          ((void (__fastcall *)(ActorChara *, __int64, _QWORD, __int64, __int64))this->ActionChangeReqBase)(
            this,
            37i64,
            0i64,
            a4,
            -2i64);
        }
$LN362:
        ActorChara::_isCommandReadyStat((ActorChara *)pCmdSet, iActorStat);
        v80 = (std::bitset<62>::reference *)std::bitset<21>::operator[](
                                              (std::bitset<61> *)&this->systemFlag,
                                              &result,
                                              0x31ui64);
        std::bitset<62>::reference::operator=(v80, v81);
        if ( (this->iMoveOption & 2) != 0 )
        {
          ((void (__fastcall *)(ActorChara *))this->RequestPositionX)(this);
          if ( this->GetActionCategoryID(this, this->iActNo, 0) != 2 )
            goto LABEL_173;
          goto LABEL_172;
        }
        if ( (this->iActFlg2 & 0x800000) != 0 )
        {
          ((void (__fastcall *)(ActorChara *))this->RequestPositionX)(this);
          if ( this->GetActionCategoryID(this, this->iActNo, 0) == 2 )
LABEL_172:
            ((void (__fastcall *)(ActorChara *))this->RequestPositionY)(this);
        }
LABEL_173:
        v82 = this->cmdInfo.entry.pCmdSet;
        if ( (v82->iValidTerms & 0x100) != 0 )
          ++this->cmdInfo.iValidCount;
        this->cmdInfo.CommandMove.iOptionFlag = v82->iValidTerms;
        this->cmdInfo.CommandMove.fMoveX = v82->fCharaMoveX;
        if ( (this->cmdInfo.CommandMove.iOptionFlag & 0x200) == 0 )
        {
          fMoveX = this->cmdInfo.CommandMove.fMoveX;
          if ( this->iCAngle )
            LODWORD(fMoveX) ^= _xmm;
          this->cmdInfo.CommandMove.fMoveX = fMoveX;
        }
        this->cmdInfo.CommandMove.fMoveY = v82->fCharaMoveY;
        break;
      case 0x28:
        v64 = ((float (__fastcall *)(ActorChara *, _BOOL8))this->GetRivalDistance)(this, a2);
        LOBYTE(v65) = 1;
        v66 = 210i64;
        if ( this->pBaseStat->status.fHiPunchDist <= v64 )
          v66 = 211i64;
        ((void (__fastcall *)(ActorChara *, __int64, _QWORD, __int64, __int64))this->ActionChangeReqBase)(
          this,
          v66,
          0i64,
          v65,
          -2i64);
        v67 = std::bitset<21>::operator[]((std::bitset<61> *)&this->systemFlag, &result, 0x38ui64);
        v68 = v67->_Mypos;
        if ( v68 >= 0x3E )
          std::_Xout_of_range("invalid bitset<N> position");
        v67->_Pbitset[v68 >> 6]._Array[0] |= 1i64 << (v67->_Mypos & 0x3F);
        goto LABEL_49;
      case 0x29:
        v69 = ((float (__fastcall *)(ActorChara *, _BOOL8))this->GetRivalDistance)(this, a2);
        LOBYTE(v70) = 1;
        v71 = 212i64;
        if ( this->pBaseStat->status.fHiKickDist <= v69 )
          v71 = 213i64;
        ((void (__fastcall *)(ActorChara *, __int64, _QWORD, __int64, __int64))this->ActionChangeReqBase)(
          this,
          v71,
          0i64,
          v70,
          -2i64);
        v72 = std::bitset<21>::operator[]((std::bitset<61> *)&this->systemFlag, &result, 0x38ui64);
        v73 = v72->_Mypos;
        if ( v73 >= 0x3E )
          std::_Xout_of_range("invalid bitset<N> position");
        v72->_Pbitset[v73 >> 6]._Array[0] |= 1i64 << (v72->_Mypos & 0x3F);
LABEL_49:
        this->CAngleChangeReq(this);
LABEL_50:
        this->CheckReversalRecordTiming(this);
        goto $LN362;
      case 0x2A:
        LOBYTE(a4) = 1;
        ((void (__fastcall *)(ActorChara *, __int64, _QWORD, __int64, __int64))this->ActionChangeReqBase)(
          this,
          214i64,
          0i64,
          a4,
          -2i64);
        this->CAngleChangeReq(this);
        LOBYTE(v39) = 1;
        this->SetClimaxMode(this, v39);
        goto $LN362;
      case 0x2C:
        LOBYTE(a2) = 1;
        v74 = ((__int64 (__fastcall *)(ActorChara *, _BOOL8))this->GetJumpState)(this, a2) - 11;
        LOBYTE(v75) = 1;
        ((void (__fastcall *)(ActorChara *, _QWORD, _QWORD, __int64, __int64))this->ActionChangeReqBase)(
          this,
          (unsigned int)ciJumpAttackActionID[2][v74],
          0i64,
          v75,
          -2i64);
        goto LABEL_166;
      case 0x2D:
        LOBYTE(a2) = 1;
        v76 = this->GetJumpState(this, a2);
        LOBYTE(v77) = 1;
        ((void (__fastcall *)(ActorChara *, _QWORD, _QWORD, __int64, __int64))this->ActionChangeReqBase)(
          this,
          (unsigned int)ciJumpAttackActionID[1][v76 + 9],
          0i64,
          v77,
          -2i64);
LABEL_166:
        v78 = (std::bitset<62>::reference *)std::bitset<21>::operator[](
                                              (std::bitset<61> *)&this->systemFlag,
                                              &result,
                                              0x38ui64);
        std::bitset<62>::reference::operator=(v78, v79);
        goto $LN362;
      default:
        goto $LN362;
    }
  }
}

void __fastcall ActorChara::CommonActionRequestDuringHitStop(ActorChara *this)
{
  const CommandData::Setting *pCmdSet; // rcx
  int iActorStat; // edx
  int v4; // ecx
  int v5; // eax
  ActorChara *v6; // rcx
  int v7; // edx
  int v8; // eax
  int CommonActionID; // eax
  __int64 iActFrame; // rdx
  std::bitset<62>::reference *v11; // rax
  bool v12; // r9
  const CommandData::Setting *v13; // rcx
  bool v14; // zf
  float fMoveX; // xmm0_4
  std::bitset<61>::reference result; // [rsp+20h] [rbp-18h] BYREF

  pCmdSet = this->cmdInfo.entry.pCmdSet;
  if ( pCmdSet && !this->cmdInfo.entry.iPriTag )
  {
    iActorStat = this->iActorStat;
    if ( this->bNextStatCommandCheck )
    {
      if ( this->iActorStatReserve >= 0 )
        iActorStat = this->iActorStatReserve;
      else
        this->bNextStatCommandCheck = 0;
    }
    v4 = pCmdSet->iActionID - 38;
    if ( !v4 )
    {
      if ( iActorStat != 26 )
        return;
      if ( this->GetActionCategoryID(this, this->iActNo, 0) != 1 )
        goto LABEL_35;
      v8 = this->GetBaseActionID(this);
      if ( v8 == 38 )
      {
        v7 = 35;
      }
      else
      {
        if ( v8 != 203 )
          goto LABEL_25;
        v7 = 201;
      }
      goto LABEL_23;
    }
    if ( v4 == 1 && iActorStat == 26 )
    {
      if ( this->GetActionCategoryID(this, this->iActNo, 0) == 1 )
      {
LABEL_35:
        this->cmdInfo.hitStopReserve.pCmdSet = 0i64;
        *(_QWORD *)&this->cmdInfo.hitStopReserve.iPriTag = 0i64;
        return;
      }
      v5 = this->GetBaseActionID(this);
      if ( v5 != 33 )
      {
        if ( v5 <= 34 )
          goto LABEL_25;
        if ( v5 > 36 )
        {
          if ( (unsigned int)(v5 - 200) <= 2 )
          {
            v7 = 203;
            goto LABEL_23;
          }
LABEL_25:
          ActorChara::_isCommandReadyStat(v6, 26);
          v11 = (std::bitset<62>::reference *)std::bitset<21>::operator[](
                                                (std::bitset<61> *)&this->systemFlag,
                                                &result,
                                                0x31ui64);
          std::bitset<62>::reference::operator=(v11, v12);
          if ( (this->iMoveOption & 2) != 0 )
          {
            ((void (__fastcall *)(ActorChara *))this->RequestPositionX)(this);
            if ( this->GetActionCategoryID(this, this->iActNo, 0) == 2 )
              ((void (__fastcall *)(ActorChara *))this->RequestPositionY)(this);
          }
          v13 = this->cmdInfo.entry.pCmdSet;
          if ( (v13->iValidTerms & 0x100) != 0 )
            ++this->cmdInfo.iValidCount;
          this->cmdInfo.CommandMove.iOptionFlag = v13->iValidTerms;
          v14 = (this->cmdInfo.CommandMove.iOptionFlag & 0x200) == 0;
          this->cmdInfo.CommandMove.fMoveX = v13->fCharaMoveX;
          if ( v14 )
          {
            fMoveX = this->cmdInfo.CommandMove.fMoveX;
            if ( this->iCAngle )
              LODWORD(fMoveX) ^= _xmm;
            this->cmdInfo.CommandMove.fMoveX = fMoveX;
          }
          this->cmdInfo.CommandMove.fMoveY = v13->fCharaMoveY;
          goto LABEL_35;
        }
      }
      v7 = 38;
LABEL_23:
      CommonActionID = CharaBaseStatus::GetCommonActionID((CharaBaseStatus *)this->pBaseStat, v7);
      if ( CommonActionID > 0 )
      {
        iActFrame = (unsigned int)this->iActFrame;
        this->iActNo = CommonActionID;
        this->ActionFrameChangeReq(this, iActFrame);
        this->fActReserveFrameFraction = this->fActFrameFraction;
        this->xHitStopDelay.value = 0x10000;
        this->xMoveWaitFrame.value = 0x10000;
      }
      goto LABEL_25;
    }
  }
}

void __fastcall ActorChara::CreateInit(ActorChara *this)
{
  ActorChara_vtbl *v2; // rax
  ActorChara_vtbl *v3; // rax
  ActorChara_vtbl *v4; // rax
  ActorChara *bsBranchFlgShotID; // rax
  bool *bCreated; // rcx
  __int64 v7; // r8
  __int64 v8; // rdx

  ActorCharaBase::CreateInit(this);
  *(_QWORD *)&this->cmdInfo.entry.iPriTag = 0i64;
  this->cmdInfo.entry.pCmdSet = 0i64;
  *(_QWORD *)&this->cmdInfo.hitStopReserve.iPriTag = 0i64;
  this->cmdInfo.hitStopReserve.pCmdSet = 0i64;
  *(_QWORD *)&this->cmdInfo.actionReserve.iPriTag = 0i64;
  this->cmdInfo.actionReserve.pCmdSet = 0i64;
  *(_QWORD *)&this->cmdInfo.iValidCount = 0i64;
  *(_QWORD *)&this->cmdInfo.CommandMove.fMoveX = 0i64;
  this->cmdInfo.iSuccessCount = 0;
  this->cmdInfo.hitStopInfo.uiDataSize = 0;
  *(_QWORD *)&this->cmdInfo.hitStopInfo.uiBeginIndex = 0i64;
  v2 = this->ActorCharaBase::ActorObject::Actor::__vftable;
  this->iActorStat = 0;
  this->iActorStatBase = 0;
  this->bNextStatCommandCheck = 0;
  this->xVital.value = v2->GetMaxVital(this) << 16;
  this->xGuardPower.value = this->GetMaxGuardPower(this) << 16;
  this->xStunPower.value = this->GetMaxStunPower(this) << 16;
  this->xGuardRecoverMax.value = this->xGuardPower.value;
  this->xStunRecoverMax.value = this->xStunPower.value;
  this->xExPower.value = 0;
  *(_QWORD *)&this->xStartExPower.value = 0i64;
  this->SetMaxGaugeStockExtend(this, 0);
  this->iNextDamageID = 0;
  *(_QWORD *)&this->iGuardInputCount = 0i64;
  this->iDamageAttr = 0;
  this->xStunWaitCount.value = 0;
  *(_QWORD *)&this->xGuardPowerWaitCount.value = 0i64;
  *(_QWORD *)&this->xThrowMutekiCount.value = 0i64;
  *(_QWORD *)&this->iExEffectLoopCount = 0i64;
  *(_QWORD *)&this->xExEffectFadeFrame.value = 0i64;
  this->xPoisonEffectFrame.value = 0;
  v3 = this->ActorCharaBase::ActorObject::Actor::__vftable;
  *(_QWORD *)&this->damageInfo.iCombo = 0i64;
  *(_QWORD *)&this->damageInfo.iSkillBonusCount = 0i64;
  *(_QWORD *)&this->damageInfo.iOneHitDamage = 0i64;
  *(_QWORD *)&this->damageInfo.iOneHitStunDamage = 0i64;
  *(_QWORD *)&this->damageInfo.iMaxComboStunDamage = 0i64;
  this->damageInfo.iMaxComboDamage = 0;
  this->damageInfo.bEnableAdvantageFrame = 0;
  *(_QWORD *)&this->damageInfo.iAdvantageFrame = 0i64;
  *(_QWORD *)&this->damageInfo.iComboScore = 0i64;
  *(_WORD *)&this->damageInfo.bMaxModeComboAttack = 0;
  v3->ResetPoisonDamage(this);
  v4 = this->ActorCharaBase::ActorObject::Actor::__vftable;
  this->damageReserve = 0i64;
  v4->ResetThrowAttach(this, 0);
  this->systemFlag._Array[0] = 0i64;
  bsBranchFlgShotID = (ActorChara *)this->bsBranchFlgShotID;
  this->bsTrainingFlag._Array[0] = 0;
  *(_QWORD *)this->bsAliveShotID._Array = 0i64;
  for ( this->bsAttackGuardShotID._Array[0] = 0;
        bsBranchFlgShotID != (ActorChara *)&this->cmdInfo;
        bsBranchFlgShotID = (ActorChara *)((char *)bsBranchFlgShotID + 4) )
  {
    LODWORD(bsBranchFlgShotID->ActorCharaBase::ActorObject::Actor::__vftable) = 0;
  }
  *(_QWORD *)&this->headCtrl.vHeadPos.x = 0i64;
  bCreated = this->extraEffectData.bCreated;
  *(_QWORD *)&this->headCtrl.vHeadPos.z = 0i64;
  *(_QWORD *)&this->headCtrl.fHeadAnglePrev = 0i64;
  *(_QWORD *)&this->headCtrl.fHeadAngleLimitLow = 0i64;
  v7 = 5i64;
  *(_QWORD *)&this->eyeCtrl.qLEyeQuat.x = 0i64;
  if ( this->extraEffectData.bCreated > &this->extraEffectData.bCreated[5] )
    v7 = 0i64;
  this->eyeCtrl.qLEyeQuat.z = 0.0;
  *(_QWORD *)&this->eyeCtrl.qLEyeQuat.w = 1065353216i64;
  *(_QWORD *)&this->eyeCtrl.qREyeQuat.y = 0i64;
  *(_QWORD *)&this->eyeCtrl.qREyeQuat.w = 1065353216i64;
  *(_QWORD *)&this->eyeCtrl.leftEyeLimit.fLeft = 0i64;
  this->eyeCtrl.leftEyeLimit.fLow = 0.0;
  *(_QWORD *)&this->eyeCtrl.rightEyeLimit.fLeft = 0i64;
  *(_QWORD *)&this->eyeCtrl.rightEyeLimit.fUp = 0i64;
  this->eyeCtrl.iSettingType = 0;
  this->eyeCtrl.bControlMode = 0;
  *(_QWORD *)&this->eyeCtrl.fLAngleX = 0i64;
  *(_QWORD *)&this->eyeCtrl.fRAngleX = 0i64;
  this->iRivalTalkNextActionNo = -1;
  this->extraEffectData.iDataCount = 0;
  if ( this->extraEffectData.bCreated <= &this->extraEffectData.bCreated[5] )
  {
    v8 = -(__int64)bCreated;
    do
      *bCreated++ = 0;
    while ( &bCreated[v8] != (bool *)v7 );
  }
  this->iBlurEffectCount = 0;
  this->iBlurFrameFlag = 15;
  this->damageMagnification.fAtkDamage = 1.0;
  this->damageMagnification.fAtkStun = 1.0;
  this->damageMagnification.fAtkGuard = 1.0;
  this->damageMagnification.fDefDamage = 1.0;
  this->damageMagnification.fDefStun = 1.0;
  this->damageMagnification.fDefGuard = 1.0;
  this->charaUniqueParam = 0i64;
  *(_QWORD *)&this->charaOffsetParam.vPrevOff.x = 0i64;
  *(_QWORD *)&this->charaOffsetParam.vPrevOff.z = 0i64;
  *(_QWORD *)&this->charaOffsetParam.vNextOff.y = 0i64;
  *(_QWORD *)&this->charaOffsetParam.xNowFrame.value = 0i64;
  this->charaOffsetParam.iCharaID = -1;
  this->iExtraDamageValue = 0;
  this->pCpuSeqData = 0i64;
  this->pComboMissionAtkEvent = 0i64;
  *(_QWORD *)&this->cancelBonusType = 0i64;
}

void __fastcall ActorChara::ExtraEffectData::DeadEffectCheck(
        ActorChara::ExtraEffectData *this,
        const CharaActionData::Effect::Type::Set *setData)
{
  int v2; // er10
  bool *bCreated; // r8
  __int16 *p_iActNo; // rax

  v2 = 0;
  if ( this->iDataCount > 0 )
  {
    bCreated = this->bCreated;
    p_iActNo = &this->effectDat[0].iActNo;
    do
    {
      if ( *bCreated
        && setData->iActFileID == *(p_iActNo - 2)
        && setData->iActNo == *p_iActNo
        && setData->iOptionFlag == *(_DWORD *)(p_iActNo + 1)
        && setData->iPosBase == *(p_iActNo - 3) )
      {
        *bCreated = 0;
      }
      ++v2;
      p_iActNo += 12;
      ++bCreated;
    }
    while ( v2 < this->iDataCount );
  }
}

void __fastcall ActorChara::DefaultBranchCheck(ActorChara *this)
{
  std::bitset<61>::reference *v2; // rax
  unsigned __int64 Mypos; // rdx
  __int64 v4; // rcx
  unsigned __int64 v5; // rax
  __int64 v6; // r9
  unsigned __int64 v7; // rdx
  __int64 v8; // r9
  __int64 v9; // r9
  __int64 v10; // r9
  bool v11; // di
  unsigned int iPlayerID; // eax
  char v13; // dl
  std::bitset<61>::reference *v14; // rax
  unsigned __int64 v15; // rdx
  std::bitset<61>::reference *v16; // rax
  unsigned __int64 v17; // rdx
  _BOOL8 v18; // rdx
  MaterialShowControl *DefaultMaterialData; // rax
  const CharaActionData::ActionDataInfo *v20; // rsi
  ActorChara *v21; // rax
  __int64 v22; // r9
  _BOOL8 v23; // rdx
  ActorChara_vtbl *v24; // rax
  __int64 v25; // rdx
  int v26; // eax
  __int64 v27; // r9
  unsigned int v28; // edi
  __int64 v29; // rdx
  std::bitset<61>::reference result; // [rsp+28h] [rbp-30h] BYREF

  v2 = std::bitset<21>::operator[]((std::bitset<61> *)&this->systemFlag, &result, 0x25ui64);
  Mypos = v2->_Mypos;
  if ( Mypos >= 0x3E )
    std::_Xout_of_range("invalid bitset<N> position");
  v4 = v2->_Mypos & 0x3F;
  v5 = v2->_Pbitset[Mypos >> 6]._Array[0];
  if ( !_bittest64((const __int64 *)&v5, v4)
    && !this->IsInvalidDefaultBranch(this)
    && !this->xHitStopFrame.value
    && !this->IsBlackStop(this) )
  {
    v7 = 0x140000000ui64;
    switch ( this->iActorStat )
    {
      case 0:
      case 0x17:
        if ( this->bActionEnd )
        {
          this->SetReady(this, 0, 0);
          goto LABEL_87;
        }
        return;
      case 1:
      case 0x18:
        if ( this->bActionEnd )
        {
          LOBYTE(v7) = 1;
          this->SetReady(this, v7, 0);
          goto LABEL_87;
        }
        return;
      case 2:
      case 3:
        if ( this->iCAngle != this->iCAngleBuf )
        {
          LOBYTE(v6) = 1;
          ((void (__fastcall *)(ActorChara *, __int64, _QWORD, __int64, __int64))this->ActionChangeReqBase)(
            this,
            30i64,
            0i64,
            v6,
            -2i64);
          this->CAngleChangeReq(this);
        }
        return;
      case 4:
        this->xDashRemainCount.value = 786432;
        return;
      case 6:
        if ( this->bActionEnd )
        {
          LOBYTE(v6) = 1;
          ((void (__fastcall *)(ActorChara *, __int64, _QWORD, __int64, __int64))this->ActionChangeReqBase)(
            this,
            17i64,
            0i64,
            v6,
            -2i64);
        }
        return;
      case 7:
        if ( this->bActionEnd )
        {
          LOBYTE(v6) = 1;
          ((void (__fastcall *)(ActorChara *, __int64, _QWORD, __int64, __int64))this->ActionChangeReqBase)(
            this,
            18i64,
            0i64,
            v6,
            -2i64);
        }
        return;
      case 8:
        if ( this->bActionEnd )
        {
          LOBYTE(v6) = 1;
          ((void (__fastcall *)(ActorChara *, __int64, _QWORD, __int64, __int64))this->ActionChangeReqBase)(
            this,
            20i64,
            0i64,
            v6,
            -2i64);
        }
        return;
      case 9:
        if ( this->bActionEnd )
        {
          LOBYTE(v6) = 1;
          ((void (__fastcall *)(ActorChara *, __int64, _QWORD, __int64, __int64))this->ActionChangeReqBase)(
            this,
            21i64,
            0i64,
            v6,
            -2i64);
        }
        return;
      case 0xA:
        if ( this->bActionEnd )
        {
          LOBYTE(v6) = 1;
          ((void (__fastcall *)(ActorChara *, __int64, _QWORD, __int64, __int64))this->ActionChangeReqBase)(
            this,
            19i64,
            0i64,
            v6,
            -2i64);
        }
        return;
      case 0xB:
      case 0xE:
      case 0x11:
      case 0x13:
        if ( ((unsigned __int8 (__fastcall *)(ActorChara *, unsigned __int64))this->IsLanding)(this, 0x140000000ui64) )
        {
          LOBYTE(v8) = 1;
          ((void (__fastcall *)(ActorChara *, __int64, _QWORD, __int64, __int64))this->ActionChangeReqBase)(
            this,
            24i64,
            0i64,
            v8,
            -2i64);
        }
        return;
      case 0xC:
      case 0xF:
      case 0x12:
      case 0x14:
        if ( ((unsigned __int8 (__fastcall *)(ActorChara *, unsigned __int64))this->IsLanding)(this, 0x140000000ui64) )
        {
          LOBYTE(v9) = 1;
          ((void (__fastcall *)(ActorChara *, __int64, _QWORD, __int64, __int64))this->ActionChangeReqBase)(
            this,
            25i64,
            0i64,
            v9,
            -2i64);
        }
        return;
      case 0xD:
      case 0x10:
        if ( ((unsigned __int8 (__fastcall *)(ActorChara *, unsigned __int64))this->IsLanding)(this, 0x140000000ui64) )
        {
          LOBYTE(v10) = 1;
          ((void (__fastcall *)(ActorChara *, __int64, _QWORD, __int64, __int64))this->ActionChangeReqBase)(
            this,
            26i64,
            0i64,
            v10,
            -2i64);
        }
        return;
      case 0x19:
        return;
      case 0x1A:
      case 0x20:
      case 0x2A:
      case 0x2B:
      case 0x2C:
      case 0x2D:
      case 0x2E:
      case 0x2F:
      case 0x30:
      case 0x31:
      case 0x32:
      case 0x33:
      case 0x34:
      case 0x35:
      case 0x36:
      case 0x37:
      case 0x38:
      case 0x39:
      case 0x3A:
      case 0x3B:
      case 0x3C:
        DamageSetControl::SetNextDamageAction(this);
        return;
      case 0x3E:
        v11 = 0;
        if ( this->pActSys->rivalTalkData.bNextAction )
        {
          if ( this->iRivalTalkNextActionNo <= 0 )
          {
            v11 = 1;
          }
          else
          {
            iPlayerID = this->iPlayerID;
            v13 = 0;
            if ( iPlayerID <= 1 )
              v13 = iPlayerID + 1;
            ActionSystem::RequestSoundStop((ActionSystem *)(iPlayerID + 1), v13 & 3, 0.0);
            this->ActionChangeReq(this, this->iRivalTalkNextActionNo, 0);
          }
        }
        if ( this->bActionEnd || this->iActionLoopCount > 0 )
          v11 = this->iRivalTalkNextActionNo <= 0;
        if ( this->pActSys->rivalTalkData.bSkipTalk || v11 )
        {
          v14 = std::bitset<21>::operator[]((std::bitset<61> *)&this->systemFlag, &result, 0x36ui64);
          v15 = v14->_Mypos;
          if ( v15 >= 0x3E )
            std::_Xout_of_range("invalid bitset<N> position");
          v14->_Pbitset[v15 >> 6]._Array[0] |= 1i64 << (v14->_Mypos & 0x3F);
        }
        return;
      case 0x3F:
        if ( this->bActionEnd || this->iActionLoopCount > 0 )
        {
          v16 = std::bitset<21>::operator[]((std::bitset<61> *)&this->systemFlag, &result, 0x35ui64);
          v17 = v16->_Mypos;
          if ( v17 >= 0x3E )
            std::_Xout_of_range("invalid bitset<N> position");
          v16->_Pbitset[v17 >> 6]._Array[0] |= 1i64 << (v16->_Mypos & 0x3F);
        }
        return;
      case 0x40:
        if ( !((unsigned __int8 (__fastcall *)(ActorChara *, unsigned __int64))this->IsEndSetup)(this, 0x140000000ui64)
          && (this->bActionEnd || this->iActionLoopCount > 0) )
        {
          LOBYTE(v18) = 1;
          this->SetEndSetupFlag(this, v18);
          DefaultMaterialData = ActionSystem::GetDefaultMaterialData(this->pActSys, this);
          MaterialShowControl::CreateBaseModelShadow(DefaultMaterialData);
          this->iActNo = -1;
        }
        return;
      case 0x41:
        if ( this->bActionEnd || this->iActionLoopCount > 0 )
        {
          LOBYTE(v7) = 1;
          this->SetResultDemoEnd(this, v7);
        }
        return;
      default:
        v20 = this->GetActionDataInfo(this, (unsigned int)this->iActNo, 0i64);
        if ( !v20 )
          return;
        if ( this->IsAttackThrow(this) )
        {
          v21 = this->GetTargetActor(this);
          if ( v21->IsThrowEscape(v21) )
          {
            LOBYTE(v22) = 1;
            ((void (__fastcall *)(ActorChara *, __int64, _QWORD, __int64, __int64))this->ActionChangeReqBase)(
              this,
              46i64,
              0i64,
              v22,
              -2i64);
            this->CAngleChangeReq(this);
            ((void (__fastcall *)(ActorChara *))this->RequestPositionY)(this);
            DamageSettingUtil::RequestStopVoice(this->iPlayerID);
            return;
          }
        }
        if ( v20->iCategoryID != 2 && (!this->IsReadyFlag(this) || this->vPos.y <= 0.0) )
        {
          v24 = this->ActorCharaBase::ActorObject::Actor::__vftable;
          if ( v20->iCategoryID == 1 )
          {
            if ( this->bActionEnd )
            {
              LOBYTE(v23) = 1;
              v24->SetReady(this, v23, 0);
LABEL_87:
              this->bNextStatCommandCheck = 1;
              return;
            }
            if ( !v24->IsReadyFlag(this) )
              return;
            v25 = 1i64;
          }
          else
          {
            if ( this->bActionEnd )
            {
              v24->SetReady(this, 0, 0);
              goto LABEL_87;
            }
            if ( !v24->IsReadyFlag(this) )
              return;
            v25 = 0i64;
          }
LABEL_86:
          this->StateChangeReq(this, v25);
          this->SetReadyFlags(this);
          goto LABEL_87;
        }
        v26 = this->GetJumpState(this, 0);
        v28 = v26;
        if ( this->vPos.y > 0.0 || (this->iActFlg1 & 0x100) != 0 )
        {
          if ( !this->IsReadyFlag(this) )
            return;
          v25 = v28;
          goto LABEL_86;
        }
        if ( v20->iSubCategoryID == 1 )
        {
          if ( v26 == 11 )
            v29 = 27i64;
          else
            v29 = (unsigned int)(v26 != 12) + 28;
        }
        else if ( v26 == 11 )
        {
          v29 = 24i64;
        }
        else
        {
          v29 = (unsigned int)(v26 != 12) + 25;
        }
        LOBYTE(v27) = 1;
        ((void (__fastcall *)(ActorChara *, __int64, _QWORD, __int64, __int64))this->ActionChangeReqBase)(
          this,
          v29,
          0i64,
          v27,
          -2i64);
        break;
    }
  }
}

void __fastcall ActorChara::Dispose(ActorChara *this)
{
  std::bitset<13> *bsBranchFlgShotID; // rax
  ActionSystem *p_cmdInfo; // rcx
  std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > >,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > > > > *p_Vec; // rdi
  std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > _Val; // [rsp+60h] [rbp+8h] BYREF
  std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > > > > result; // [rsp+68h] [rbp+10h] BYREF

  this->ResetThrowAttach(this, 0);
  this->systemFlag._Array[0] = 0i64;
  this->bsTrainingFlag._Array[0] = 0;
  *(_QWORD *)this->bsAliveShotID._Array = 0i64;
  this->bsAttackGuardShotID._Array[0] = 0;
  bsBranchFlgShotID = this->bsBranchFlgShotID;
  p_cmdInfo = (ActionSystem *)&this->cmdInfo;
  if ( this->bsBranchFlgShotID != (std::bitset<13> *)&this->cmdInfo )
  {
    do
    {
      bsBranchFlgShotID->_Array[0] = 0;
      ++bsBranchFlgShotID;
    }
    while ( bsBranchFlgShotID != (std::bitset<13> *)p_cmdInfo );
  }
  this->damageReserve = 0i64;
  this->damageMagnification.fAtkDamage = 1.0;
  this->damageMagnification.fAtkStun = 1.0;
  this->damageMagnification.fAtkGuard = 1.0;
  this->damageMagnification.fDefDamage = 1.0;
  this->damageMagnification.fDefStun = 1.0;
  this->damageMagnification.fDefGuard = 1.0;
  this->charaUniqueParam = 0i64;
  *(_QWORD *)&this->charaOffsetParam.vPrevOff.x = 0i64;
  *(_QWORD *)&this->charaOffsetParam.vPrevOff.z = 0i64;
  *(_QWORD *)&this->charaOffsetParam.vNextOff.y = 0i64;
  *(_QWORD *)&this->charaOffsetParam.xNowFrame.value = 0i64;
  this->charaOffsetParam.iCharaID = -1;
  this->iExtraDamageValue = 0;
  if ( this->cmdCheck != (CommandCheck *)&this->systemFlag )
  {
    p_Vec = (std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > >,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > > > > *)&this->cmdCheck[0].cmdSetMap._Vec;
    do
    {
      p_Vec[-2]._Mypair._Myval2._Myfirst = 0i64;
      p_Vec[-2]._Mypair._Myval2._Mylast = 0i64;
      LODWORD(p_Vec[-2]._Mypair._Myval2._Myend) = 0;
      BYTE4(p_Vec[-2]._Mypair._Myval2._Myend) = 0;
      std::list<std::pair<std::string const,CommandCheck::CommandSettingMapData>>::clear((std::list<std::pair<std::string const ,CommandCheck::CommandSettingMapData>> *)&p_Vec[-1]._Mypair._Myval2._Mylast);
      if ( (unsigned __int64)(p_Vec->_Mypair._Myval2._Myend - p_Vec->_Mypair._Myval2._Myfirst) < 0x10 )
        std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>>>>>,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>>>>>>>>::_Reallocate(
          p_Vec,
          0x10ui64);
      _Val._Ptr = (std::_List_node<std::pair<extension::SoundHashKey const ,int>,void *> *)p_Vec[-1]._Mypair._Myval2._Mylast;
      p_Vec->_Mypair._Myval2._Mylast = p_Vec->_Mypair._Myval2._Myfirst;
      std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,CommandCheck::CommandSettingMapData>>>>,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,CommandCheck::CommandSettingMapData>>>>>>>::_Insert_n(
        p_Vec,
        &result,
        (std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > > > >)p_Vec->_Mypair._Myval2._Myfirst,
        0x10ui64,
        &_Val);
      p_Vec[1]._Mypair._Myval2._Myfirst = (std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > *)7;
      p_Vec[1]._Mypair._Myval2._Mylast = (std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > *)8;
      p_Vec = (std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > >,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > > > > *)((char *)p_Vec + 88);
    }
    while ( &p_Vec[-2] != (std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > >,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > > > > *)&this->systemFlag );
  }
  this->pCpuSeqData = 0i64;
  this->pComboMissionAtkEvent = 0i64;
  *(_QWORD *)&this->cancelBonusType = 0i64;
  this->pDataUnify = 0i64;
  *(_QWORD *)&this->iResultSubType = 0i64;
  this->charaBaseFlag._Array[0] = 0;
  *(_QWORD *)&this->colorChangeData.xMaxFadeFrame.value = 0i64;
  this->colorChangeData.iOptionFlag = 0;
  *(_WORD *)&this->colorChangeData.bFadeOut = 0;
  this->bCalledUpdatePostureCalc = 0;
  this->bPrevMotionNotUnique = 0;
  *(_QWORD *)this->bsAttackFlag._Array = 0i64;
  ActionSystem::RequestSoundStopActionChange(p_cmdInfo, this);
  this->CreateInit(this);
}

void __fastcall ActorChara::Draw(ActorChara *this)
{
  ActionSystem *pActSys; // rcx
  int v3; // edi
  ActionSystem *v4; // rax
  float fProjBlendBase; // xmm0_4
  OGLModel *pModel; // rcx
  ActionSystem *v7; // rax
  ActionSystem *v8; // rax
  float fFadeAlpha; // xmm0_4
  __int64 iPriTarget; // rcx
  __int64 v11; // rdx
  OGLModel *v12; // rax
  OGLModel *v13; // r9
  __int64 v14; // rcx
  OGLMaterial *v15; // r8
  int iColorType; // eax
  ColorHolder v17; // xmm0
  int v18; // edx
  int v19; // er8
  __int64 iDamageAttr; // rax
  float v21; // xmm6_4
  int value; // ecx
  float v23; // xmm6_4
  int v24; // ecx
  float v25; // xmm2_4
  Tween::EasingType v26; // xmm1_4
  Tween::EasingType v27; // xmm0_4
  float v28; // xmm2_4
  int v29; // ecx
  float v30; // xmm0_4
  __int64 v31; // rcx
  int v32; // er9
  ColorHolder result; // [rsp+30h] [rbp-88h] BYREF
  __int64 v34; // [rsp+40h] [rbp-78h] BYREF
  float v35; // [rsp+48h] [rbp-70h]
  __int128 v36[2]; // [rsp+50h] [rbp-68h]
  int v37; // [rsp+70h] [rbp-48h]

  if ( this->IsModelDraw(this) )
  {
    pActSys = this->pActSys;
    v3 = 0;
    if ( (unsigned int)(pActSys->cameraCtrl.offset.type - 3) <= 1
      || pActSys->bUseSubCamera
      || pActSys->bInvalidZOffset
      || (unsigned int)(pActSys->cameraCtrl.offset.type - 3) <= 1
      || pActSys->bFreeCameraMode
      || !this->bUseZOffset )
    {
      this->pModel->m_zOffset = 0.0;
    }
    else
    {
      this->pModel->m_zOffset = -15.0;
    }
    v4 = this->GetActionSystem(this);
    if ( v4->bFreeCameraMode )
    {
      fProjBlendBase = v4->freeCamera.fProjBlendBase;
    }
    else
    {
      if ( v4->bUseSubCamera )
        goto LABEL_16;
      fProjBlendBase = v4->cameraCtrl.fProjBlendValue;
    }
    if ( fProjBlendBase > 0.0 )
    {
      this->pModel->m_bProjectionBlend = 1;
      goto LABEL_17;
    }
LABEL_16:
    this->pModel->m_bProjectionBlend = 0;
LABEL_17:
    this->GetCenterPosition(this, (OGLVec3 *)&v34);
    pModel = this->pModel;
    *(_QWORD *)&pModel->m_vCenterPosition.x = v34;
    pModel->m_vCenterPosition.z = v35;
    v7 = this->GetActionSystem(this);
    if ( v7->actBlack.data[v7->actBlack.iPriTarget].type == CLIMAX_CANCEL )
    {
      v8 = this->GetActionSystem(this);
      fFadeAlpha = 0.0;
      iPriTarget = v8->actBlack.iPriTarget;
      if ( v8->actBlack.data[iPriTarget].type == CLIMAX_CANCEL )
        fFadeAlpha = v8->actBlack.data[iPriTarget].fFadeAlpha;
      v11 = 0i64;
      this->pModel->m_fillColourType = 1;
      v12 = this->pModel;
      v12->m_fillColour[3] = fFadeAlpha;
      *(_QWORD *)v12->m_fillColour = 0i64;
      v12->m_fillColour[2] = 0.0;
      v13 = this->pModel;
      if ( v13->m_ucMaterialCount )
      {
        v14 = 0i64;
        do
        {
          v15 = &v13->m_pMaterial[v14];
          if ( v15 )
            v15->m_fillColourType = 0;
          v11 = (unsigned int)(v11 + 1);
          ++v14;
        }
        while ( (int)v11 < v13->m_ucMaterialCount );
      }
    }
    else
    {
      iColorType = this->colorChangeData.iColorType;
      if ( iColorType <= 0 || iColorType == 3 || (this->colorChangeData.iOptionFlag & 0xE) != 0 )
      {
        if ( this->GetDrinkCount(this) >= 0 )
          v19 = this->GetDrinkCount(this);
        else
          v19 = 0;
        ActorCharaBase::ColorChange::CheckCharaMaterialColorChange(&this->colorChangeData, this->pModel, v19);
      }
      else
      {
        ActorCharaBase::ColorChange::GetFadeColorValue(&this->colorChangeData, &result);
        v17 = result;
        this->pModel->m_fillColourType = this->colorChangeData.iColorType;
        *(ColorHolder *)this->pModel->m_fillColour = v17;
        OGLModel::resetMaterialFillColour(this->pModel, v18);
      }
    }
    iDamageAttr = this->iDamageAttr;
    v37 = 1;
    v36[0] = (__int128)_mm_load_si128((const __m128i *)&_xmm_ffffffe2ffffffecfffffff600000000);
    v36[1] = (__int128)_mm_load_si128((const __m128i *)&_xmm_ffffffecfffffff6ffffffd800000000);
    if ( (int)iDamageAttr >= 0 && (unsigned int)iDamageAttr < 9 )
      v3 = *((_DWORD *)v36 + iDamageAttr);
    v21 = *(float *)&FLOAT_1_0;
    if ( v3 )
      goto LABEL_55;
    if ( this->xExEffectFrame.value )
    {
      v3 = 10;
      goto LABEL_55;
    }
    value = this->xExEffectFadeFrame.value;
    if ( value )
    {
      v3 = 10;
      v23 = (float)((float)(unsigned __int16)value * 0.000015258789) + (float)(value >> 16);
      if ( this->iExEffectLoopCount == 1 )
        v21 = v23 / 10.0;
      else
        v21 = v23 / 3.0;
      goto LABEL_55;
    }
    if ( this->iExEffectLoopCount )
    {
LABEL_55:
      this->pModel->m_modelFXFlg = v3;
      this->pModel->m_modelFXEXStrength = v21;
      v30 = ((float (__fastcall *)(ActorChara *, __int64))this->GetBaseAnimeAlpha)(this, v11);
      v31 = *(_QWORD *)&AppMain::pApp;
      this->pModel->m_opacity = v30;
      OGLRender::addStack(*(OGLRender **)(v31 + 80), this->pModel, 1.0, v32);
      return;
    }
    if ( ((unsigned __int8 (__fastcall *)(ActorChara *, __int64))this->IsPoisonDamaged)(this, v11) )
    {
      v24 = this->xPoisonEffectFrame.value;
      v3 = 12;
      v25 = (float)(unsigned __int16)v24 * 0.000015258789;
      if ( v24 >= 2949120 )
      {
        v26 = FLOAT_1_0;
        v27 = FLOAT_0_2;
        v28 = (float)((float)(v25 + (float)(v24 >> 16)) - 45.0) / 45.0;
LABEL_54:
        v21 = Tween::easing(*(float *)&v27, *(float *)&v26, v28, InOutQuad);
        goto LABEL_55;
      }
      v26 = FLOAT_0_2;
      v28 = (float)(v25 + (float)(v24 >> 16)) / 45.0;
    }
    else
    {
      if ( !this->IsClimaxMode(this) )
        goto LABEL_55;
      v29 = this->xClimaxEffectFrame.value;
      v3 = 11;
      if ( v29 >= 1966080 )
      {
        v27 = Linear;
        v26 = FLOAT_1_0;
        v28 = (float)((float)((float)((float)(unsigned __int16)v29 * 0.000015258789) + (float)(v29 >> 16)) - 30.0)
            / 30.0;
        goto LABEL_54;
      }
      v26 = Linear;
      v28 = (float)((float)((float)(unsigned __int16)v29 * 0.000015258789) + (float)(v29 >> 16)) / 30.0;
    }
    v27 = FLOAT_1_0;
    goto LABEL_54;
  }
}

void __fastcall ActorChara::EndClimaxMode(ActorChara *this)
{
  std::bitset<61>::reference *v1; // rax
  __int64 v2; // r9
  unsigned __int64 Mypos; // rdx
  std::bitset<61>::reference result; // [rsp+28h] [rbp-20h] BYREF

  v1 = std::bitset<21>::operator[]((std::bitset<61> *)&this->systemFlag, &result, 0x1Eui64);
  Mypos = v1->_Mypos;
  if ( Mypos >= 0x3E )
    std::_Xout_of_range("invalid bitset<N> position");
  v1->_Pbitset[Mypos >> 6]._Array[0] &= ~(1i64 << (Mypos & 0x3F));
  *(_DWORD *)(v2 + 1132) = 0;
}

__int64 __fastcall ActorChara::GetActionEndFrame(ActorChara *this, int actNo, bool bReadyFlag, bool bOriginData)
{
  const CharaActionData *pAct; // rsi
  __int64 v7; // rdi
  __int64 v9; // r8
  unsigned int v10; // er9
  __int64 v11; // rcx
  int v12; // edx
  int v13; // er8
  int v14; // eax
  __int64 v16; // rax

  pAct = this->pAct;
  v7 = actNo;
  if ( this->IsActionDataChanged(this) && bOriginData )
  {
    pAct = this->pActBuf;
  }
  else if ( !this->IsDataExist(this) )
  {
    return 0i64;
  }
  if ( (int)v7 < 0 || (int)v7 >= pAct->dataHeader.iActionCount )
    return 0i64;
  v9 = (__int64)&pAct->pActData[v7];
  v10 = *(_DWORD *)(v9 + 8);
  if ( bReadyFlag )
  {
    v11 = *(_QWORD *)(v9 + 40);
    v12 = 0;
    v13 = *(_DWORD *)(v9 + 36);
    v14 = 0;
    if ( v13 > 0 )
    {
      while ( *(_DWORD *)(v11 + 4) != 12 )
      {
        ++v14;
        v11 += 16i64;
        if ( v14 >= v13 )
          return v10;
      }
      v16 = *(_QWORD *)(v11 + 8);
      if ( *(int *)v11 > 0 )
      {
        while ( (*(_BYTE *)(v16 + 4) & 2) == 0 )
        {
          ++v12;
          v16 += 32i64;
          if ( v12 >= *(_DWORD *)v11 )
            return v10;
        }
        return (unsigned int)(*(_DWORD *)v16 + 1);
      }
    }
  }
  return v10;
}

OGLVec3 *__fastcall ActorChara::GetBindCenterPosition(ActorWeapon *this, OGLVec3 *result)
{
  ((void (__fastcall *)(ActorWeapon *))this->GetCenterPosition)(this);
  return result;
}

float __fastcall ActorChara::GetBodyPushRate(ActorChara *this)
{
  if ( this->IsStunDamaged(this) && (this->IsAir(this) || this->IsBound(this)) )
    return *(float *)&FLOAT_0_80000001;
  if ( this->IsDown(this) )
    return *(float *)&FLOAT_0_1;
  if ( this->IsAir(this) )
    return *(float *)&FLOAT_0_80000001;
  return *(float *)&FLOAT_0_2;
}

OGLVec3 *__fastcall ActorOption::GetCenterPosition(ActorOption *this, OGLVec3 *result)
{
  this->GetBonePosition(this, result, C_HIPS);
  return result;
}

__int64 __fastcall ActorChara::GetDrinkCount(ActorChara *this)
{
  if ( this->iCharNo == 29 )
    return (unsigned int)this->charaUniqueParam.iDrinkCount;
  else
    return 0xFFFFFFFFi64;
}

__int64 __fastcall ActorChara::GetGuardRecoverMax(ActorChara *this)
{
  int value; // eax

  value = this->xGuardRecoverMax.value;
  if ( value )
    return (unsigned int)(value >> 16);
  else
    return ((__int64 (__fastcall *)(ActorChara *))this->GetMaxGuardPower)(this);
}

__int64 __fastcall ActorChara::GetHitBackEndFrame(ActorChara *this, int actNo, bool bOriginData)
{
  __int64 v4; // rbx
  const CharaActionData *pActBuf; // rcx
  int v8; // edx
  int v9; // eax
  __int64 v10; // r8
  int v11; // er9
  unsigned int v12; // er10
  __int64 v13; // rcx
  __int64 v14; // rax

  v4 = actNo;
  if ( this->IsActionDataChanged(this) && bOriginData )
  {
    if ( (int)v4 < 0 )
      return 0xFFFFFFFFi64;
    pActBuf = this->pActBuf;
    if ( (int)v4 >= pActBuf->dataHeader.iActionCount )
      return 0xFFFFFFFFi64;
  }
  else
  {
    if ( !this->IsDataExist(this) )
      return 0xFFFFFFFFi64;
    if ( (int)v4 < 0 )
      return 0xFFFFFFFFi64;
    pActBuf = this->pAct;
    if ( (int)v4 >= pActBuf->dataHeader.iActionCount )
      return 0xFFFFFFFFi64;
  }
  v8 = 0;
  v9 = 0;
  v10 = (__int64)&pActBuf->pActData[v4];
  v11 = *(_DWORD *)(v10 + 36);
  v12 = *(_DWORD *)(v10 + 8);
  v13 = *(_QWORD *)(v10 + 40);
  if ( v11 > 0 )
  {
    while ( *(_DWORD *)(v13 + 4) != 12 )
    {
      ++v9;
      v13 += 16i64;
      if ( v9 >= v11 )
        return v12;
    }
    v14 = *(_QWORD *)(v13 + 8);
    if ( *(int *)v13 > 0 )
    {
      while ( (*(_BYTE *)(v14 + 4) & 3) == 0 )
      {
        ++v8;
        v14 += 32i64;
        if ( v8 >= *(_DWORD *)v13 )
          return v12;
      }
      return (unsigned int)(*(_DWORD *)v14 + 1);
    }
  }
  return v12;
}

__int64 __fastcall ActorChara::GetJumpState(ActorChara *this, bool bCheckBase)
{
  float x; // xmm1_4
  unsigned int iActorStat; // edx

  x = this->vMov.x;
  if ( this->iCAngle )
    LODWORD(x) ^= _xmm;
  iActorStat = this->iActorStat;
  if ( iActorStat - 11 <= 9 )
    return iActorStat;
  if ( bCheckBase )
  {
    iActorStat = this->iActorStatBase;
    if ( iActorStat - 11 <= 9 )
      return iActorStat;
  }
  if ( x < 0.30000001 )
    return (unsigned int)(x > -0.30000001) + 12;
  return 11i64;
}

const CharaBaseStatus *__fastcall ActorChara::GetMaxGuardPower(ActorChara *this)
{
  const CharaBaseStatus *result; // rax

  result = this->pBaseStat;
  if ( result )
    return (const CharaBaseStatus *)(unsigned int)result->status.iGuard;
  return result;
}

const CharaBaseStatus *__fastcall ActorChara::GetMaxStunPower(ActorChara *this)
{
  const CharaBaseStatus *result; // rax

  result = this->pBaseStat;
  if ( result )
    return (const CharaBaseStatus *)(unsigned int)result->status.iStun;
  return result;
}

const CharaBaseStatus *__fastcall ActorChara::GetMaxVital(ActorChara *this)
{
  const CharaBaseStatus *result; // rax

  result = this->pBaseStat;
  if ( result )
    return (const CharaBaseStatus *)(unsigned int)result->status.iVital;
  return result;
}

OGLVec3 *__fastcall ActorChara::CharaOffsetParam::GetOffset(
        ActorChara::CharaOffsetParam *this,
        OGLVec3 *result,
        int iCAngle)
{
  int value; // er9
  __int64 v5; // xmm0_8
  float z; // eax
  int iMaxFrame; // er8
  float v8; // xmm3_4
  float v9; // xmm2_4
  float v10; // xmm1_4
  OGLVec3 *v11; // rax

  *(_QWORD *)&result->x = 0i64;
  result->z = 0.0;
  if ( this->iCharaID < 0 )
  {
    *(_QWORD *)&result->x = 0i64;
    result->z = 0.0;
    return result;
  }
  value = this->xNowFrame.value;
  if ( value >= 0 )
  {
    iMaxFrame = this->iMaxFrame;
    if ( iMaxFrame > 0 )
    {
      v8 = (float)((float)((float)(unsigned __int16)value * 0.000015258789) + (float)(value >> 16)) / (float)iMaxFrame;
      v9 = (float)((float)(this->vNextOff.z - this->vPrevOff.z) * v8) + this->vPrevOff.z;
      v10 = (float)((float)(this->vNextOff.x - this->vPrevOff.x) * v8) + this->vPrevOff.x;
      result->y = (float)((float)(this->vNextOff.y - this->vPrevOff.y) * v8) + this->vPrevOff.y;
      result->z = v9;
      result->x = v10;
      goto LABEL_8;
    }
    v5 = *(_QWORD *)&this->vNextOff.x;
    z = this->vNextOff.z;
  }
  else
  {
    v5 = *(_QWORD *)&this->vPrevOff.x;
    z = this->vPrevOff.z;
  }
  *(_QWORD *)&result->x = v5;
  result->z = z;
LABEL_8:
  v11 = result;
  if ( iCAngle )
    LODWORD(result->x) ^= _xmm;
  return v11;
}

float __fastcall ActorChara::GetStageCornerBackDistance(ActorChara *this)
{
  float v1; // xmm0_4

  if ( this->iCAngle )
    v1 = FLOAT_80_0;
  else
    v1 = FLOAT_N80_0;
  return COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v1 - this->vPos.x)) & _xmm)) & _xmm);
}

float __fastcall ActorChara::GetStageCornerFrontDistance(ActorChara *this)
{
  float v1; // xmm0_4

  if ( this->iCAngle )
    v1 = FLOAT_N80_0;
  else
    v1 = FLOAT_80_0;
  return COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v1 - this->vPos.x)) & _xmm)) & _xmm);
}

__int64 __fastcall ActorChara::GetStunRecoverMax(ActorChara *this)
{
  int value; // eax

  value = this->xStunRecoverMax.value;
  if ( value )
    return (unsigned int)(value >> 16);
  else
    return ((__int64 (__fastcall *)(ActorChara *))this->GetMaxStunPower)(this);
}

ActorChara *__fastcall ActorChara::GetTargetDamageInfo(ActorChara *this)
{
  ActorChara *result; // rax

  result = this->GetTargetActor(this);
  if ( result )
    return (ActorChara *)((char *)result + 1220);
  return result;
}

ActorChara *__fastcall ActorChara::GetThrowLockTarget(ActorChara *this)
{
  ActorChara *v2; // rdi
  bool v3; // al
  __int64 v4; // rcx

  v2 = this->GetTargetActor(this);
  v3 = this->IsThrowLock(this);
  v4 = 0i64;
  if ( v3 )
    return v2;
  return (ActorChara *)v4;
}

__int64 __fastcall ActorChara::GetVitalPercent(ActorChara *this)
{
  int v2; // ecx

  v2 = this->GetMaxVital(this);
  if ( v2 > 0 )
    return (unsigned int)(1000 * SHIWORD(this->xVital.value) / v2);
  else
    return 0i64;
}

float __fastcall ActorChara::GetWallBackDistance(ActorChara *this)
{
  float v1; // xmm0_4
  float v2; // xmm6_4

  if ( this->iCAngle )
    v1 = FLOAT_80_0;
  else
    v1 = FLOAT_N80_0;
  v2 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v1 - this->vPos.x)) & _xmm);
  return COERCE_DOUBLE(COERCE_UNSIGNED_INT64(fminf(52.5 - ((float (*)(void))this->GetRivalDistance)(), v2)) & _xmm);
}

float __fastcall ActorChara::GetWallFrontDistance(ActorChara *this)
{
  float v1; // xmm0_4
  float v2; // xmm6_4

  if ( this->iCAngle )
    v1 = FLOAT_N80_0;
  else
    v1 = FLOAT_80_0;
  v2 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v1 - this->vPos.x)) & _xmm);
  return COERCE_DOUBLE(COERCE_UNSIGNED_INT64(fminf(52.5 - ((float (*)(void))this->GetRivalDistance)(), v2)) & _xmm);
}

bool __fastcall ActorChara::IsAir(ActorChara *this)
{
  if ( this->IsBound(this) || this->IsDown(this) )
    return 0;
  if ( (this->iActFlg1 & 2) != 0 || this->GetActionCategoryID(this, this->iActNo, 0) == 2 )
    return 1;
  return this->vPos.y > 0.0;
}

bool __fastcall ActorChara::IsAirAttack(ActorChara *this)
{
  const CharaActionData::ActionDataInfo *v2; // rax
  const CharaActionData::ActionDataInfo *v3; // rdi

  v2 = this->GetActionDataInfo(this, (unsigned int)this->iActNo, 0i64);
  v3 = v2;
  if ( !v2 || v2->iSubCategoryID != 1 || !this->IsSkillStatus(this) )
    return 0;
  if ( (this->iActFlg1 & 2) != 0 )
    return 1;
  return v3->iCategoryID == 2;
}

bool __fastcall ActorChara::IsAirDamaged(ActorChara *this)
{
  int iActorStat; // ecx

  if ( this->GetActionCategoryID(this, this->iActNo, 0) != 2 )
    return 0;
  iActorStat = this->iActorStat;
  return (unsigned int)(iActorStat - 43) <= 1 || (unsigned int)(iActorStat - 52) <= 1;
}

bool __fastcall ActorChara::IsAirThrowDamaged(ActorChara *this)
{
  return this->iActorStat == 49 && this->IsAir(this);
}

bool __fastcall ActorChara::IsAttackThrow(ActorChara *this)
{
  const CharaActionData::ActionDataInfo *v2; // rbx

  v2 = this->GetActionDataInfo(this, (unsigned int)this->iActNo, 0i64);
  if ( !v2 || !this->IsSkillStatus(this) )
    return 0;
  if ( v2->iCategoryID == 5 )
    return v2->iSubCategoryID == 1;
  return v2->iSubCategoryID == 7;
}

bool __fastcall ActorChara::IsBlackStop(ActorChara *this)
{
  ActionSystem *pActSys; // rdx

  pActSys = this->pActSys;
  return pActSys->actBlack.data[5].attr == COUNTER_HIT || pActSys->actBlack.data[ciTargetID[this->iPlayerID]].bStop;
}

bool __fastcall ActorChara::IsBound(ActorChara *this)
{
  return this->iActorStat == 46;
}

bool __fastcall ActorChara::IsCancel(ActorChara *this, int cancelID, int precedeFrame, int remainderFrame)
{
  bool v4; // r14
  int i; // ebp
  const CharaActionData::ActionLineFrame *v11; // rax
  const CharaActionData::ActionLineFrame *v12; // rbx
  int v13; // eax
  int v14; // ecx
  int v15; // edx
  int CancelHitStopRemainderFrame; // eax

  v4 = 0;
  if ( cancelID > 127 )
    return 0;
  for ( i = 0; i < this->iCancelDataCount; ++i )
  {
    v11 = this->GetKeyFrame(this, (unsigned int)this->iActNo, 6i64, (unsigned int)this->iActFrame, i);
    v4 = 0;
    v12 = v11;
    if ( v11 )
    {
      v13 = v11->iBase[0];
      v14 = cancelID;
      if ( cancelID < 96 )
      {
        if ( cancelID < 64 )
        {
          if ( cancelID >= 32 )
          {
            v13 = v12->iBase[1];
            v14 = cancelID - 32;
          }
        }
        else
        {
          v13 = v12->iBase[2];
          v14 = cancelID - 64;
        }
      }
      else
      {
        v13 = v12->iBase[4];
        v14 = cancelID - 96;
      }
      if ( _bittest(&v13, v14) && ActorChara::_checkCancelTerm(this, v12->iBase[3]) )
      {
        v15 = v12->iBase[5];
        if ( v15 > 0 )
        {
          CancelHitStopRemainderFrame = ActorChara::_getCancelHitStopRemainderFrame(this, v15);
        }
        else
        {
          CancelHitStopRemainderFrame = precedeFrame;
          if ( precedeFrame < 0 )
            CancelHitStopRemainderFrame = 2;
        }
        v4 = CancelHitStopRemainderFrame >= remainderFrame;
        if ( CancelHitStopRemainderFrame >= remainderFrame )
          break;
      }
    }
  }
  return v4;
}

__int64 __fastcall ActorChara::IsClimaxMode(ActorChara *this)
{
  return (LODWORD(this->systemFlag._Array[0]) >> 30) & 1;
}

bool __fastcall ActorChara::IsClimaxModeCombo(ActorChara *this)
{
  ActorChara *v2; // rax
  bool v3; // zf
  bool result; // al

  v2 = this->GetTargetActor(this);
  if ( !v2 )
    return this->damageInfo.bMaxModeComboDamage;
  v3 = !v2->damageInfo.bMaxModeComboAttack;
  result = 1;
  if ( v3 )
    return this->damageInfo.bMaxModeComboDamage;
  return result;
}

bool __fastcall ActorChara::IsPreferenceWall(ActorChara *this)
{
  int iActorStat; // eax
  bool result; // al

  result = 1;
  if ( !this->IsBound(this) && !this->IsDown(this) )
  {
    iActorStat = this->iActorStat;
    if ( iActorStat != 48 && iActorStat != 51 )
      return 0;
  }
  return result;
}

bool __fastcall ActorChara::IsCrouch(ActorChara *this)
{
  bool result; // al
  int iActorStat; // eax

  result = 0;
  if ( !this->IsBound(this) && !this->IsDown(this) && !this->IsAir(this) )
  {
    if ( (this->iActFlg1 & 1) != 0 )
      return 1;
    if ( this->GetActionCategoryID(this, this->iActNo, 0) == 1 )
      return 1;
    iActorStat = this->iActorStat;
    if ( iActorStat == 1 || iActorStat == 24 )
      return 1;
  }
  return result;
}

bool __fastcall ActorChara::IsDash(ActorChara *this, bool bRemain)
{
  if ( !bRemain )
    return this->iActorStat == 4;
  return this->iActorStat == 4 || this->xDashRemainCount.value > 0;
}

bool __fastcall ActorChara::IsDown(ActorChara *this)
{
  return this->iActorStat == 47;
}

bool __fastcall ActorChara::IsEnableReversalKeyPlay(ActorChara *this)
{
  BattleSystem::BattleController *v2; // rax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  unsigned __int64 iActorStat; // rax
  __int64 v8; // rcx
  BattleSystem::BattleController *v10; // [rsp+40h] [rbp+8h]

  if ( !this->IsReversalChance(this) )
    return 0;
  v2 = BattleSystem::BattleController::instance;
  if ( !BattleSystem::BattleController::instance )
  {
    v10 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v10);
    BattleSystem::BattleController::instance = v2;
  }
  v3 = v2->keyRecordInfo.reversalType - 1;
  if ( v3 )
  {
    v4 = v3 - 1;
    if ( !v4 )
    {
      if ( !this->IsStandUpState(this) && !this->IsDownEvadeState(this) )
      {
        iActorStat = this->iActorStat;
        if ( (unsigned int)iActorStat > 0x38 )
          return 1;
        v8 = 0x104000004000000i64;
        if ( !_bittest64(&v8, iActorStat) )
          return 1;
      }
      return 0;
    }
    if ( v4 != 1 )
      return 1;
    v5 = this->iActorStat;
    if ( v5 == 26 )
      return 1;
    return v5 == 56;
  }
  else
  {
    if ( this->IsStandUpState(this) || this->IsDownEvadeState(this) )
      return 1;
    return this->iActorStat == 50;
  }
}

Actor *__fastcall ActorChara::IsExistRivalDemoAction(ActorChara *this, int charID)
{
  Actor *result; // rax
  _BOOL8 v4; // rdx
  int RivalDemoActionID; // edi

  if ( charID < 0 )
  {
    result = this->pTarget;
    if ( !result )
      return result;
    charID = result->iCharNo;
  }
  RivalDemoActionID = CharaBaseStatus::GetRivalDemoActionID((CharaBaseStatus *)this->pBaseStat, charID);
  result = 0;
  if ( RivalDemoActionID > 0 )
  {
    LOBYTE(v4) = 1;
    if ( RivalDemoActionID < this->GetActionCount(this, v4) )
      return (Actor *)1;
  }
  return result;
}

Actor *__fastcall ActorChara::IsExistRivalRoundStartAction(ActorChara *this, int charID)
{
  Actor *result; // rax
  _BOOL8 v4; // rdx
  int RivalRoundStartAcitonID; // edi

  if ( charID < 0 )
  {
    result = this->pTarget;
    if ( !result )
      return result;
    charID = result->iCharNo;
  }
  RivalRoundStartAcitonID = CharaBaseStatus::GetRivalRoundStartAcitonID((CharaBaseStatus *)this->pBaseStat, charID);
  result = 0;
  if ( RivalRoundStartAcitonID > 0 )
  {
    LOBYTE(v4) = 1;
    if ( RivalRoundStartAcitonID < this->GetActionCount(this, v4) )
      return (Actor *)1;
  }
  return result;
}

Actor *__fastcall ActorChara::IsExistRivalRoundWinAction(ActorChara *this, int charID)
{
  Actor *result; // rax
  _BOOL8 v4; // rdx
  int RivalRoundWinActionID; // edi

  if ( charID < 0 )
  {
    result = this->pTarget;
    if ( !result )
      return result;
    charID = result->iCharNo;
  }
  RivalRoundWinActionID = CharaBaseStatus::GetRivalRoundWinActionID((CharaBaseStatus *)this->pBaseStat, charID);
  result = 0;
  if ( RivalRoundWinActionID > 0 )
  {
    LOBYTE(v4) = 1;
    if ( RivalRoundWinActionID < this->GetActionCount(this, v4) )
      return (Actor *)1;
  }
  return result;
}

bool __fastcall ActorChara::IsGuard(ActorChara *this)
{
  if ( this->IsGuardValid(this) || this->GetActionSubCategoryID(this, this->iActNo, 0) == 3 )
    return 1;
  return this->IsGuardInputOK(this) && this->IsInputGuard(this);
}

bool __fastcall ActorChara::IsInvisible(ActorChara *this)
{
  ActionSystem *v3; // rax

  if ( this->baseAnime.fTransparent >= 1.0 || (this->iActFlg2 & 0x100) != 0 || this->IsMotionCameraInvisibleActor(this) )
    return 1;
  v3 = this->GetActionSystem(this);
  return (unsigned int)(v3->actBlack.data[v3->actBlack.iPriTarget].type - 3) <= 1;
}

bool __fastcall ActorChara::IsKuzure(ActorChara *this)
{
  return (unsigned int)this->GetActionCategoryID(this, this->iActNo, 0) <= 1 && this->iActorStat == 45;
}

bool __fastcall ActorChara::IsLandAttack(ActorChara *this)
{
  const CharaActionData::ActionDataInfo *v2; // rax
  const CharaActionData::ActionDataInfo *v3; // rdi

  v2 = this->GetActionDataInfo(this, (unsigned int)this->iActNo, 0i64);
  v3 = v2;
  return v2
      && v2->iSubCategoryID == 1
      && this->IsSkillStatus(this)
      && (this->iActFlg1 & 2) == 0
      && v3->iCategoryID <= 1u;
}

bool __fastcall ActorChara::IsLandDamaged(ActorChara *this)
{
  bool result; // al
  unsigned __int64 iActorStat; // rax
  __int64 v4; // rcx

  if ( (unsigned int)this->GetActionCategoryID(this, this->iActNo, 0) > 1 )
    return 0;
  iActorStat = this->iActorStat;
  result = 0;
  if ( (unsigned int)iActorStat <= 0x38 )
  {
    v4 = 0x180240000000000i64;
    if ( _bittest64(&v4, iActorStat) )
      return 1;
  }
  return result;
}

bool __fastcall ActorChara::IsLandThrowDamaged(ActorChara *this)
{
  return this->iActorStat == 49 && !this->IsAir(this);
}

bool __fastcall ActorChara::IsLanding(ActorChara *this)
{
  _BOOL8 v3; // r8
  char v4[4]; // [rsp+20h] [rbp-28h] BYREF
  float v5; // [rsp+24h] [rbp-24h]

  if ( this->vMov.y > 0.0 )
    return 0;
  if ( !this->IsAirDamaged(this) )
    return this->vPos.y <= 0.0;
  LOBYTE(v3) = this->iCAngle != 0;
  this->GetCameraPosition(this, (OGLVec3 *)v4, v3, 0);
  return v5 <= 0.0;
}

bool __fastcall ActorChara::IsModelDraw(ActorChara *this)
{
  unsigned __int64 iPlayerID; // rbx
  unsigned int v4; // eax

  if ( !this->pModel )
    return 0;
  if ( this->baseAnime.iMotionID < 0 )
    return 0;
  if ( this->IsInvisible(this) )
    return 0;
  iPlayerID = this->iPlayerID;
  v4 = this->GetActionSystem(this)->bsInvisibleFlag._Array[iPlayerID >> 5];
  return !_bittest((const int *)&v4, iPlayerID & 0x1F) && this->bDrawCalled;
}

bool __fastcall ActorChara::IsMotionCameraInvisibleActor(ActorChara *this)
{
  CameraControl *p_cameraCtrl; // rax

  p_cameraCtrl = &this->GetActionSystem(this)->cameraCtrl;
  return (p_cameraCtrl->offset.iOptionFlag & 1) != 0 && p_cameraCtrl->offset.pActor != this;
}

bool __fastcall ActorChara::IsNokezori(ActorChara *this)
{
  int iActorStat; // eax

  if ( (unsigned int)this->GetActionCategoryID(this, this->iActNo, 0) > 1 )
    return 0;
  iActorStat = this->iActorStat;
  return iActorStat == 42 || (unsigned int)(iActorStat - 55) <= 1;
}

bool __fastcall ActorChara::IsRandomCounterValid(ActorChara *this)
{
  int v2; // eax

  if ( (this->bsTrainingFlag._Array[0] & 0x20000) == 0
    || this->IsDamaged(this)
    || this->IsStunDamaged(this)
    || this->IsKO(this) )
  {
    LOBYTE(v2) = 0;
  }
  else
  {
    return ((unsigned int)BattleSystem::BattleController::GetRand31() >> 2) & 1;
  }
  return v2;
}

bool __fastcall ActorChara::IsRandomGuardValid(ActorChara *this)
{
  int v1; // eax
  BattleSystem::BattleController *v2; // rax
  BattleSystem::BattleController *v4; // [rsp+40h] [rbp+8h]

  if ( (this->bsTrainingFlag._Array[0] & 0x10000) != 0 )
  {
    v2 = BattleSystem::BattleController::instance;
    if ( !BattleSystem::BattleController::instance )
    {
      v4 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
      BattleSystem::BattleController::BattleController(v4);
      BattleSystem::BattleController::instance = v2;
    }
    return ((unsigned int)RandomMT::getRand32(&v2->randMT) >> 3) & 1;
  }
  else
  {
    LOBYTE(v1) = 0;
  }
  return v1;
}

bool __fastcall ActorChara::IsSkillStatus(ActorChara *this)
{
  int iActorStat; // edx

  iActorStat = this->iActorStat;
  return (unsigned int)(iActorStat - 36) <= 5 || iActorStat == 31;
}

bool __fastcall ActorChara::IsStand(ActorChara *this)
{
  return !this->IsBound(this) && !this->IsDown(this) && !this->IsAir(this) && !this->IsCrouch(this);
}

bool __fastcall ActorChara::IsThrowDamaged(ActorChara *this)
{
  if ( (this->bsCollisionFlag._Array[0] & 2) != 0 )
    return 1;
  return this->iActorStat == 49 && this->GetActionSubCategoryID(this, this->iActNo, 0) == 8;
}

ActorChara *__fastcall ActorChara::IsThrowLock(ActorChara *this)
{
  ActorChara *result; // rax
  ActorChara *v3; // rdi

  result = this->GetTargetActor(this);
  v3 = result;
  if ( result )
    return (ActorChara *)(this->IsAttackThrow(this) && v3->IsThrowDamaged(v3)
                       || v3->IsAttackThrow(v3) && this->IsThrowDamaged(this));
  return result;
}

bool __fastcall ActorChara::IsValidCommandCheck(ActorChara *this)
{
  bool v1; // al
  BattleSystem::BattleController *v2; // r8
  BattleSystem::BattleController *v3; // rax
  BattleSystem::BattleController *v5; // rax
  BattleSystem::BattleController *v6; // [rsp+40h] [rbp+8h]
  BattleSystem::BattleController *v7; // [rsp+40h] [rbp+8h]

  v1 = this->IsReversalRecordMode(this);
  v2 = BattleSystem::BattleController::instance;
  if ( v1 )
  {
    if ( !BattleSystem::BattleController::instance )
    {
      v6 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
      BattleSystem::BattleController::BattleController(v6);
      v2 = v3;
      BattleSystem::BattleController::instance = v3;
    }
    if ( v2->keyRecordMode == 5
      && v2->m_KeyRecord[v2->keyRecordInfo.iKeyRecordType][v2->keyRecordInfo.iKeyRecordSlot].pKeyBuffer._Mypair._Myval2->uiDataSize < 0xB4 )
    {
      return 0;
    }
  }
  if ( !v2 )
  {
    v7 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v7);
    v2 = v5;
    BattleSystem::BattleController::instance = v5;
  }
  return v2->roundPhase == DIE;
}

bool __fastcall ActorChara::IsValidDerivedCommandCheck(ActorChara *this)
{
  BattleSystem::BattleController *v1; // rax
  BattleSystem::BattleController::ROUND_PHASE roundPhase; // ecx
  BattleSystem::BattleController *v4; // [rsp+48h] [rbp+10h]

  v1 = BattleSystem::BattleController::instance;
  if ( !BattleSystem::BattleController::instance )
  {
    v4 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v4);
    BattleSystem::BattleController::instance = v1;
  }
  roundPhase = v1->roundPhase;
  return (unsigned int)(roundPhase - 6) <= 2 || roundPhase == (WALL|ERASE);
}

bool __fastcall ActorChara::IsValidEvadeCommand(ActorChara *this)
{
  bool result; // al
  unsigned __int64 iActorStatPrev; // rax
  __int64 v4; // rcx

  result = 0;
  if ( !this->IsNotEvade(this) && !this->IsStun(this) )
  {
    if ( ((unsigned __int8 (__fastcall *)(ActorChara *, __int64, _QWORD))this->IsCancel)(this, 36i64, 0i64) )
      return 1;
    if ( this->iActorStat == 46 && !this->iActFrame )
    {
      iActorStatPrev = this->iActorStatPrev;
      if ( (unsigned int)iActorStatPrev <= 0x34 )
      {
        v4 = 0x12080000000000i64;
        if ( _bittest64(&v4, iActorStatPrev) )
          return 1;
      }
    }
  }
  return result;
}

bool __fastcall ActorChara::IsValidThrowEscapeCommand(ActorChara *this)
{
  ActorChara *v2; // rax
  bool result; // al

  result = 0;
  if ( (this->systemFlag._Array[0] & 0x800000000i64) != 0 && (this->iActFlg1 & 8) != 0 && this->IsThrowDamaged(this) )
  {
    v2 = this->GetTargetActor(this);
    if ( v2->IsAttackThrow(v2) )
      return 1;
  }
  return result;
}

void __fastcall ActorChara::LateUpdate(ActorChara *this, __int64 a2, float a3)
{
  __int64 v4; // rdx
  std::bitset<61>::reference *v5; // rax
  unsigned __int64 Mypos; // rdx
  __int64 v7; // rcx
  unsigned __int64 v8; // rax
  RestrictRingBuffer<int> *Myval2; // rcx
  std::bitset<61>::reference *v10; // rax
  unsigned __int64 v11; // rcx
  std::bitset<61>::reference *v12; // rax
  unsigned __int64 v13; // rdx
  std::bitset<61>::reference result; // [rsp+28h] [rbp-20h] BYREF

  this->BranchCheck(this);
  this->DefaultBranchCheck(this);
  this->UpdatePosition(this);
  this->CheckUseZOffset(this);
  Actor::DrawRequest(this, v4, a3);
  v5 = std::bitset<21>::operator[]((std::bitset<61> *)&this->systemFlag, &result, 0x34ui64);
  Mypos = v5->_Mypos;
  if ( Mypos >= 0x3E )
    std::_Xout_of_range("invalid bitset<N> position");
  v7 = v5->_Mypos & 0x3F;
  v8 = v5->_Pbitset[Mypos >> 6]._Array[0];
  if ( _bittest64((const __int64 *)&v8, v7) )
  {
    Myval2 = this->cmdCheck[0].pKeyBuf->pKeyBuffer._Mypair._Myval2;
    Myval2->uiDataSize = 0;
    *(_QWORD *)&Myval2->uiBeginIndex = 0i64;
    v10 = std::bitset<21>::operator[]((std::bitset<61> *)&this->systemFlag, &result, 0x34ui64);
    v11 = v10->_Mypos;
    if ( v11 >= 0x3E )
      std::_Xout_of_range("invalid bitset<N> position");
    v10->_Pbitset[v11 >> 6]._Array[0] &= ~(1i64 << (v10->_Mypos & 0x3F));
  }
  v12 = std::bitset<21>::operator[]((std::bitset<61> *)&this->systemFlag, &result, 0x26ui64);
  v13 = v12->_Mypos;
  if ( v13 >= 0x3E )
    std::_Xout_of_range("invalid bitset<N> position");
  v12->_Pbitset[v13 >> 6]._Array[0] &= ~(1i64 << (v13 & 0x3F));
}

void __fastcall ActorChara::MainUpdate(ActorChara *this)
{
  float fMoveX; // xmm2_4
  int v3; // eax
  float v4; // xmm1_4
  float fMoveY; // xmm2_4
  float v6; // xmm1_4
  ActorChara *v7; // r14
  float x; // xmm1_4
  float y; // xmm2_4
  float z; // xmm3_4
  float v11; // xmm2_4
  float v12; // xmm3_4
  int v13; // eax
  int v14; // ecx
  int value; // eax
  std::bitset<61>::reference *v16; // rax
  unsigned __int64 Mypos; // rdx
  std::bitset<61>::reference *v18; // rax
  unsigned __int64 v19; // rdx
  __int64 v20; // rcx
  int v21; // eax
  std::bitset<61>::reference *v22; // rax
  unsigned __int64 v23; // rdx
  __int64 v24; // rcx
  int v25; // eax
  std::bitset<61>::reference *v26; // rax
  char v27; // r9
  unsigned __int64 v28; // rdx
  std::bitset<61> *Pbitset; // r8
  unsigned __int64 v30; // rcx
  __int64 v31; // rdx
  int v32; // eax
  int v33; // eax
  std::bitset<61>::reference *v34; // rax
  unsigned __int64 v35; // rdx
  Collision::HitRectCollection *Instance; // rax
  float v37; // xmm1_4
  ActorChara::CommandInfo::HitStopInfo *v38; // rdx
  ActorChara::CommandInfo::HitStopInfo *pBuffer; // rdx
  unsigned int uiBufferMask; // ecx
  unsigned int v41; // eax
  unsigned int uiBeginIndex; // edx
  unsigned int uiDataSize; // eax
  bool v44; // al
  int v45; // ecx
  int v46; // er9
  int iExEffectLoopCount; // eax
  bool v48; // zf
  bool v49; // cc
  int v50; // eax
  std::bitset<61>::reference *v51; // rax
  int v52; // er9
  unsigned __int64 v53; // rdx
  __int64 v54; // rcx
  unsigned __int64 v55; // rax
  char *v56; // rbx
  __int64 v57; // rdx
  float SoundPanPosition; // xmm0_4
  char v59; // al
  int v60; // eax
  int v61; // eax
  std::bitset<61>::reference *v62; // rax
  unsigned __int64 v63; // rdx
  __int64 v64; // rcx
  int v65; // eax
  int v66; // eax
  std::bitset<61>::reference *v67; // rax
  unsigned __int64 v68; // rdx
  __int64 v69; // rcx
  int v70; // eax
  ActorChara_vtbl *v71; // rbx
  unsigned int v72; // eax
  bool v73; // zf
  ActorChara_vtbl *v74; // rax
  float v75; // xmm6_4
  std::bitset<61>::reference result; // [rsp+28h] [rbp-58h] BYREF
  std::bitset<61>::reference v77; // [rsp+38h] [rbp-48h] BYREF
  int v78; // [rsp+B0h] [rbp+30h] BYREF
  extension::SoundObject o; // [rsp+B8h] [rbp+38h] BYREF

  v78 = 0;
  this->GetActionSystemSpeedFix(this, (Fix32 *)&v78);
  fMoveX = this->cmdInfo.CommandMove.fMoveX;
  v3 = v78;
  if ( fMoveX != 0.0 )
  {
    v4 = (float)((float)((float)(unsigned __int16)v78 * 0.000015258789) + (float)(v78 >> 16)) * fMoveX;
    this->vPos.x = v4 + this->vPos.x;
    this->vBasePos.x = v4 + this->vBasePos.x;
  }
  fMoveY = this->cmdInfo.CommandMove.fMoveY;
  if ( fMoveY != 0.0 )
  {
    v6 = (float)((float)((float)(unsigned __int16)v3 * 0.000015258789) + (float)(v3 >> 16)) * fMoveY;
    this->vPos.y = v6 + this->vPos.y;
    this->vBasePos.y = v6 + this->vBasePos.y;
  }
  if ( this->bActionNewFrame )
    this->bMotionMoveSlowAdjValue = 0;
  v7 = this->GetTargetActor(this);
  if ( this->IsThrowLock(this) )
  {
    if ( this->pActSys->iThrowChildPlayerID == this->iPlayerID )
    {
      x = this->vBasePos.x;
      y = this->vBasePos.y;
      z = this->vBasePos.z;
      *(_QWORD *)&this->vBasePos.x = *(_QWORD *)&v7->vBasePos.x;
      this->vBasePos.z = v7->vBasePos.z;
      v11 = y - this->vBasePos.y;
      v12 = z - this->vBasePos.z;
      this->vPos.x = this->vPos.x - (float)(x - this->vBasePos.x);
      this->vPos.y = this->vPos.y - v11;
      this->vPos.z = this->vPos.z - v12;
    }
  }
  else if ( !this->IsResultDemoActor(this) && !this->IsAirDamaged(this) && this->vPos.y < 0.0 )
  {
    this->vPos.y = 0.0;
  }
  v13 = v78;
  if ( this->iCharNo == this->charaOffsetParam.iCharaID )
  {
    if ( this->charaOffsetParam.xNowFrame.value >= 0 )
    {
      this->charaOffsetParam.xNowFrame.value += v78;
      v14 = this->charaOffsetParam.iMaxFrame << 16;
      if ( this->charaOffsetParam.xNowFrame.value > v14 )
        this->charaOffsetParam.xNowFrame.value = v14;
    }
    else
    {
      this->charaOffsetParam.xNowFrame.value = 0;
    }
  }
  if ( this->colorChangeData.iColorType
    && (!this->bActionFreeze || (this->colorChangeData.iOptionFlag & 0x20000000) != 0) )
  {
    if ( !this->colorChangeData.bInitial )
    {
      this->colorChangeData.xFadeFrame.value += v13;
      value = this->colorChangeData.xMaxFadeFrame.value;
      if ( this->colorChangeData.xFadeFrame.value >= value )
      {
        if ( this->colorChangeData.bFadeOut )
        {
          *(_QWORD *)&this->colorChangeData.iColorType = 0i64;
          this->colorChangeData.xFadeFrame.value = 0;
          this->colorChangeData.iOptionFlag = 0;
          *(_WORD *)&this->colorChangeData.bFadeOut = 0;
          goto LABEL_28;
        }
        this->colorChangeData.xFadeFrame.value = value;
      }
    }
    this->colorChangeData.bInitial = 0;
  }
LABEL_28:
  v16 = std::bitset<21>::operator[]((std::bitset<61> *)&this->bsTrainingFlag, &result, 3ui64);
  Mypos = v16->_Mypos;
  if ( Mypos >= 0x15 )
    std::_Xout_of_range("invalid bitset<N> position");
  *((_DWORD *)v16->_Pbitset->_Array + (Mypos >> 5)) &= ~(1 << (v16->_Mypos & 0x1F));
  v18 = std::bitset<21>::operator[]((std::bitset<61> *)&this->bsTrainingFlag, &result, 4ui64);
  v19 = v18->_Mypos;
  if ( v19 >= 0x15 )
    std::_Xout_of_range("invalid bitset<N> position");
  v20 = v18->_Mypos & 0x1F;
  v21 = *((_DWORD *)v18->_Pbitset->_Array + (v19 >> 5));
  if ( _bittest(&v21, v20) || this->IsRandomGuardValid(this) )
    goto LABEL_178;
  v22 = std::bitset<21>::operator[]((std::bitset<61> *)&this->bsTrainingFlag, &v77, 5ui64);
  v23 = v22->_Mypos;
  if ( v23 >= 0x15 )
    std::_Xout_of_range("invalid bitset<N> position");
  v24 = v22->_Mypos & 0x1F;
  v25 = *((_DWORD *)v22->_Pbitset->_Array + (v23 >> 5));
  if ( _bittest(&v25, v24) )
  {
    if ( this->xStunWaitCount.value > 3932160 || this->xGuardPowerWaitCount.value > 1966080 )
    {
LABEL_178:
      if ( this->iActorStat != 21 || this->iActFrame )
      {
        v26 = std::bitset<21>::operator[]((std::bitset<61> *)&this->bsTrainingFlag, &v77, 3ui64);
        v28 = v26->_Mypos;
        Pbitset = v26->_Pbitset;
        if ( v28 >= 0x15 )
          std::_Xout_of_range("invalid bitset<N> position");
        v30 = v28 >> 5;
        v31 = v26->_Mypos & 0x1F;
        v32 = *((_DWORD *)Pbitset->_Array + v30);
        if ( v27 )
          v33 = v32 | (1 << v31);
        else
          v33 = v32 & ~(1 << v31);
        *((_DWORD *)Pbitset->_Array + v30) = v33;
      }
    }
  }
  if ( this->iCharNo == 29 )
    this->damageMagnification.fAtkDamage = (float)((float)this->charaUniqueParam.iDrinkCount * 0.050000001) + 1.0;
  if ( this->iAtkDataCount > 0 )
  {
    v34 = std::bitset<21>::operator[]((std::bitset<61> *)&this->bsAttackFlag, &v77, 0i64);
    v35 = v34->_Mypos;
    if ( v35 >= 6 )
      std::_Xout_of_range("invalid bitset<N> position");
    *((_DWORD *)v34->_Pbitset->_Array + (v35 >> 5)) |= 1 << (v34->_Mypos & 0x1F);
  }
  Instance = Collision::HitRectCollection::GetInstance(this->iPlayerID);
  Collision::HitRectCollection::EntryPlayer(Instance, this);
  if ( this->iActorStat == 63 && !this->iActionLoopCount && this->iActorStatPrev != 63 )
  {
    v37 = 0.89999998 - (float)((float)this->iActFrame * 0.15000001);
    this->baseAnime.fBlend = v37;
    if ( v37 < 0.0 )
      this->baseAnime.fBlend = 0.0;
  }
  if ( this->bHitStopFreeze
    && (!this->cmdInfo.hitStopInfo.uiDataSize
     || (v38 = &this->cmdInfo.hitStopInfo.pBuffer[this->cmdInfo.hitStopInfo.uiBufferMask & (this->cmdInfo.hitStopInfo.uiEndIndex
                                                                                          - 1)]) == 0i64
     || v38->iActFrame != this->iActFrame) )
  {
    LOWORD(o.m_runtimeEffector.m_ptr) = this->iActFrame;
    WORD1(o.m_runtimeEffector.m_ptr) = HIWORD(this->xHitStopTotal.value);
    pBuffer = this->cmdInfo.hitStopInfo.pBuffer;
    if ( pBuffer )
    {
      pBuffer[this->cmdInfo.hitStopInfo.uiEndIndex] = (ActorChara::CommandInfo::HitStopInfo)o.m_runtimeEffector.m_ptr;
      uiBufferMask = this->cmdInfo.hitStopInfo.uiBufferMask;
      v41 = uiBufferMask & (this->cmdInfo.hitStopInfo.uiEndIndex + 1);
      this->cmdInfo.hitStopInfo.uiEndIndex = v41;
      uiBeginIndex = this->cmdInfo.hitStopInfo.uiBeginIndex;
      if ( v41 == uiBeginIndex )
        this->cmdInfo.hitStopInfo.uiBeginIndex = uiBufferMask & (uiBeginIndex + 1);
      uiDataSize = this->cmdInfo.hitStopInfo.uiDataSize;
      if ( this->cmdInfo.hitStopInfo.uiBufferSize != uiDataSize )
        this->cmdInfo.hitStopInfo.uiDataSize = uiDataSize + 1;
    }
  }
  if ( this->xHitStopFrame.value || this->bActionFreeze )
  {
    v52 = v78;
    goto LABEL_124;
  }
  v44 = this->IsPursuitDamaged(this);
  v45 = v78;
  if ( v44 && this->xPursuitFrame.value > 0 )
  {
    this->xPursuitFrame.value -= v78;
    if ( this->xPursuitFrame.value < 0 )
      this->xPursuitFrame.value = 0;
  }
  if ( this->iActorStat == 47 && this->xDownFrame.value > 0 )
  {
    this->xDownFrame.value -= v45;
    if ( this->xDownFrame.value < 0 )
      this->xDownFrame.value = 0;
  }
  if ( this->IsLandDamaged(this) || this->IsGuardDamaged(this) || this->IsThrow(this) )
  {
    v46 = v78;
    this->xHitBackFrame.value += v78;
  }
  else
  {
    v46 = v78;
  }
  if ( this->xPerfectMutekiCount.value > 0 )
  {
    this->xPerfectMutekiCount.value -= v46;
    if ( this->xPerfectMutekiCount.value < 0 )
      this->xPerfectMutekiCount.value = 0;
  }
  if ( this->xThrowMutekiCount.value > 0 )
  {
    this->xThrowMutekiCount.value -= v46;
    if ( this->xThrowMutekiCount.value < 0 )
      this->xThrowMutekiCount.value = 0;
  }
  if ( this->xNormalThrowDisableCount.value > 0 )
  {
    this->xNormalThrowDisableCount.value -= v46;
    if ( this->xNormalThrowDisableCount.value < 0 )
      this->xNormalThrowDisableCount.value = 0;
  }
  if ( this->xDashRemainCount.value > 0 )
  {
    this->xDashRemainCount.value -= v46;
    if ( this->xDashRemainCount.value < 0 )
      this->xDashRemainCount.value = 0;
  }
  iExEffectLoopCount = this->iExEffectLoopCount;
  if ( iExEffectLoopCount > 0 )
  {
    if ( this->xExEffectFrame.value <= 0 )
    {
      v49 = this->xExEffectFadeFrame.value <= 0;
      if ( this->xExEffectFadeFrame.value )
      {
LABEL_106:
        if ( !v49 )
        {
          this->xExEffectFadeFrame.value -= v46;
          if ( this->xExEffectFadeFrame.value < 0 )
            this->xExEffectFadeFrame.value = 0;
        }
        goto LABEL_109;
      }
      v50 = iExEffectLoopCount - 1;
      this->iExEffectLoopCount = v50;
      if ( v50 > 0 )
        this->xExEffectFrame.value = 196608;
    }
    else
    {
      this->xExEffectFrame.value -= v46;
      v48 = this->xExEffectFrame.value == 0;
      if ( this->xExEffectFrame.value < 0 )
      {
        this->xExEffectFrame.value = 0;
        v48 = 1;
      }
      if ( v48 )
      {
        if ( this->iExEffectLoopCount == 1 )
          this->xExEffectFadeFrame.value = 655360;
        else
          this->xExEffectFadeFrame.value = 196608;
      }
    }
    v49 = this->xExEffectFadeFrame.value <= 0;
    goto LABEL_106;
  }
LABEL_109:
  v51 = std::bitset<21>::operator[]((std::bitset<61> *)&this->systemFlag, &v77, 0x2Fui64);
  v53 = v51->_Mypos;
  if ( v53 >= 0x3E )
    std::_Xout_of_range("invalid bitset<N> position");
  v54 = v51->_Mypos & 0x3F;
  v55 = v51->_Pbitset[v53 >> 6]._Array[0];
  if ( _bittest64((const __int64 *)&v55, v54) )
  {
    this->iExEffectLoopCount = 3;
    *(_QWORD *)&this->xExEffectFrame.value = 196608i64;
    if ( this->bActionNewFrame )
    {
      v56 = (char *)operator new(0x60ui64);
      *(_QWORD *)v56 = 1i64;
      *((_WORD *)v56 + 4) = 1;
      *(_QWORD *)(v56 + 12) = 0i64;
      *(_QWORD *)(v56 + 20) = 0i64;
      *((_DWORD *)v56 + 7) = 1120403456;
      *((_QWORD *)v56 + 11) = 0i64;
      o.m_runtimeEffector.m_ptr = (extension::exsound_detail::RuntimeEffector *)v56;
      SoundPanPosition = Actor::GetSoundPanPosition(this);
      if ( v56[8] || (v59 = 0, *((float *)v56 + 6) != SoundPanPosition) )
        v59 = 1;
      v56[8] = v59;
      *((float *)v56 + 6) = SoundPanPosition;
      v56[9] = 0;
      if ( *(_QWORD *)&AppMain::pApp != -2196904i64 )
        extension::SoundList::playSEByName(
          (extension::SoundList *)(*(_QWORD *)&AppMain::pApp + 2196904i64),
          &o,
          &s_soundIndex.m_keys[154],
          0i64);
      extension::RefCountablePtr<extension::exsound_detail::RuntimeEffector>::~RefCountablePtr<extension::exsound_detail::RuntimeEffector>(
        &o.m_runtimeEffector,
        v57);
      v52 = v78;
    }
  }
  if ( this->iCharNo == 39 && this->charaUniqueParam.shuneiArm.xFadeFrame.value > 0 )
  {
    this->charaUniqueParam.shuneiArm.xFadeFrame.value -= v52;
    if ( this->charaUniqueParam.shuneiArm.xFadeFrame.value < 0 )
      this->charaUniqueParam.shuneiArm.xFadeFrame.value = 0;
  }
LABEL_124:
  if ( this->xGuardPowerWaitCount.value <= 0 )
  {
    this->xGuardPower.value += v52;
    v60 = this->GetGuardRecoverMax(this) << 16;
    if ( this->xGuardPower.value >= v60 )
      this->xGuardPower.value = v60;
  }
  else
  {
    this->xGuardPowerWaitCount.value -= v52;
    if ( this->xGuardPowerWaitCount.value < 0 )
      this->xGuardPowerWaitCount.value = 0;
  }
  if ( !this->IsDamaged(this) )
  {
    if ( this->xStunWaitCount.value <= 0 )
    {
      this->xStunPower.value += v78;
      v61 = this->GetStunRecoverMax(this) << 16;
      if ( this->xStunPower.value >= v61 )
        this->xStunPower.value = v61;
    }
    else
    {
      this->xStunWaitCount.value -= v78;
      if ( this->xStunWaitCount.value < 0 )
        this->xStunWaitCount.value = 0;
    }
    v62 = std::bitset<21>::operator[]((std::bitset<61> *)&this->bsTrainingFlag, &v77, 0i64);
    v63 = v62->_Mypos;
    if ( v63 >= 0x15 )
      std::_Xout_of_range("invalid bitset<N> position");
    v64 = v62->_Mypos & 0x1F;
    v65 = *((_DWORD *)v62->_Pbitset->_Array + (v63 >> 5));
    if ( _bittest(&v65, v64) )
    {
      if ( !this->xGuardPowerWaitCount.value && this->xStunWaitCount.value <= 3932160 )
      {
        this->xVital.value += 1310720;
        v66 = this->GetMaxVital(this) << 16;
        if ( this->xVital.value >= v66 )
          this->xVital.value = v66;
      }
    }
  }
  v67 = std::bitset<21>::operator[]((std::bitset<61> *)&this->bsTrainingFlag, &v77, 1ui64);
  v68 = v67->_Mypos;
  if ( v68 >= 0x15 )
    std::_Xout_of_range("invalid bitset<N> position");
  v69 = v67->_Mypos & 0x1F;
  v70 = *((_DWORD *)v67->_Pbitset->_Array + (v68 >> 5));
  if ( _bittest(&v70, v69)
    && !this->IsSkillStatus(this)
    && (unsigned int)(this->iActorStat - 29) > 1
    && v7
    && v7->damageInfo.iCombo < 1
    && this->damageInfo.iCombo < 1 )
  {
    v71 = this->ActorCharaBase::ActorObject::Actor::__vftable;
    v72 = this->GetMaxExPower(this);
    v71->AddExPower(this, v72, 0);
  }
  if ( this->IsPoisonDamaged(this) )
  {
    this->xPoisonEffectFrame.value += v78;
    this->xPoisonEffectFrame.value -= 90 * ((this->xPoisonEffectFrame.value / 90) & 0xFFFF0000);
  }
  if ( this->IsClimaxMode(this) )
  {
    this->xClimaxEffectFrame.value += v78;
    this->xClimaxEffectFrame.value -= 60 * ((this->xClimaxEffectFrame.value / 60) & 0xFFFF0000);
    if ( this->iActorStat != 35 && !this->IsBlackStop(this) )
    {
      if ( !this->IsInfiniteClimaxMode(this) )
      {
        this->xClimaxTime.value -= (98304i64 * v78) >> 16;
        v73 = this->xClimaxTime.value == 0;
        if ( this->xClimaxTime.value >= 0 )
        {
LABEL_160:
          if ( v73 && !this->bHitStopFreeze )
            this->EndClimaxMode(this);
          goto LABEL_163;
        }
        this->xClimaxTime.value = 0;
      }
      v73 = this->xClimaxTime.value == 0;
      goto LABEL_160;
    }
  }
LABEL_163:
  if ( this->IsHitStopVibrate(this) )
  {
    v74 = this->ActorCharaBase::ActorObject::Actor::__vftable;
    if ( this->xHitStopFrame.value )
    {
      if ( v74->IsBlackStop(this) )
      {
        this->vBaseOff.x = this->vBaseOffPrev.x;
      }
      else
      {
        v75 = *(float *)&FLOAT_0_30000001;
        if ( this->vBaseOffPrev.x > 0.0 )
          v75 = FLOAT_N0_30000001;
        if ( !this->xHitStopTotal.value )
          this->xHitStopTotal.value = 0x10000;
        this->vBaseOff.x = sinf(
                             (float)((float)((float)((float)(unsigned __int16)this->xHitStopFrame.value * 0.000015258789)
                                           + (float)(this->xHitStopFrame.value >> 16))
                                   / (float)((float)((float)(unsigned __int16)this->xHitStopTotal.value * 0.000015258789)
                                           + (float)(this->xHitStopTotal.value >> 16)))
                           * 1.5707964)
                         * v75;
      }
    }
    else
    {
      v74->SetHitStopVibrate(this, 0);
    }
  }
  ActorChara::_autoEffectSet(this);
  if ( this->iActorStat == 47 )
  {
    this->faceAnimeLow.fBlend = 0.0;
    this->faceAnimeUp.fBlend = 0.0;
  }
  this->UpdatePosture(this);
}

void __fastcall ActorChara::ParamInit(
        ActorChara *this,
        const CharaDataUnify *pCharaData,
        const CharaDataUnify *pCommonData,
        InputKeyCheck *pKeyData)
{
  CommandCheck *v8; // rcx
  CommandData *pCmdData; // r8
  ActorChara_vtbl *v10; // rax
  ActorChara_vtbl *v11; // rax
  ActorChara *bsBranchFlgShotID; // rax
  __int64 v13; // r8
  __int64 v14; // rcx
  int iCharNo; // eax

  ActorCharaBase::ParamInit(this, pCharaData);
  v8 = &this->cmdCheck[1];
  if ( pCharaData )
  {
    CommandCheck::Init(v8, 1, pCharaData->pCmdData, pKeyData);
    this->pCpuSeqData = pCharaData->pCpuSeqData;
  }
  else
  {
    CommandCheck::Init(v8, 1, 0i64, pKeyData);
    this->pCpuSeqData = 0i64;
  }
  if ( pCommonData )
    pCmdData = pCommonData->pCmdData;
  else
    pCmdData = 0i64;
  CommandCheck::Init(this->cmdCheck, 0, pCmdData, pKeyData);
  *(_QWORD *)&this->cmdInfo.entry.iPriTag = 0i64;
  this->cmdInfo.entry.pCmdSet = 0i64;
  *(_QWORD *)&this->cmdInfo.hitStopReserve.iPriTag = 0i64;
  this->cmdInfo.hitStopReserve.pCmdSet = 0i64;
  *(_QWORD *)&this->cmdInfo.actionReserve.iPriTag = 0i64;
  this->cmdInfo.actionReserve.pCmdSet = 0i64;
  *(_QWORD *)&this->cmdInfo.iValidCount = 0i64;
  *(_QWORD *)&this->cmdInfo.CommandMove.fMoveX = 0i64;
  this->cmdInfo.iSuccessCount = 0;
  this->cmdInfo.hitStopInfo.uiDataSize = 0;
  *(_QWORD *)&this->cmdInfo.hitStopInfo.uiBeginIndex = 0i64;
  v10 = this->ActorCharaBase::ActorObject::Actor::__vftable;
  this->iActorStat = 0;
  this->iActorStatBase = 0;
  this->bNextStatCommandCheck = 0;
  this->xVital.value = v10->GetMaxVital(this) << 16;
  this->xGuardPower.value = this->GetMaxGuardPower(this) << 16;
  this->xStunPower.value = this->GetMaxStunPower(this) << 16;
  this->xGuardRecoverMax.value = this->xGuardPower.value;
  this->xStunRecoverMax.value = this->xStunPower.value;
  this->xExPower.value = 0;
  *(_QWORD *)&this->xStartExPower.value = 0i64;
  this->SetMaxGaugeStockExtend(this, 0);
  *(_QWORD *)&this->damageReserve.iCondition = 0i64;
  *(_QWORD *)&this->iDamageSkillType = 0i64;
  this->iDamageAttr = 0;
  *(_QWORD *)&this->xPoisonEffectFrame.value = 0i64;
  this->xStunWaitCount.value = 0;
  *(_QWORD *)&this->xGuardPowerWaitCount.value = 0i64;
  *(_QWORD *)&this->xThrowMutekiCount.value = 0i64;
  *(_QWORD *)&this->iExEffectLoopCount = 0i64;
  *(_QWORD *)&this->xExEffectFadeFrame.value = 0i64;
  v11 = this->ActorCharaBase::ActorObject::Actor::__vftable;
  *(_QWORD *)&this->damageInfo.iCombo = 0i64;
  *(_QWORD *)&this->damageInfo.iSkillBonusCount = 0i64;
  *(_QWORD *)&this->damageInfo.iOneHitDamage = 0i64;
  *(_QWORD *)&this->damageInfo.iOneHitStunDamage = 0i64;
  *(_QWORD *)&this->damageInfo.iMaxComboStunDamage = 0i64;
  this->damageInfo.iMaxComboDamage = 0;
  this->damageInfo.bEnableAdvantageFrame = 0;
  *(_QWORD *)&this->damageInfo.iAdvantageFrame = 0i64;
  *(_QWORD *)&this->damageInfo.iComboScore = 0i64;
  *(_WORD *)&this->damageInfo.bMaxModeComboAttack = 0;
  v11->ResetPoisonDamage(this);
  this->ResetThrowAttach(this, 0);
  this->systemFlag._Array[0] = 0i64;
  bsBranchFlgShotID = (ActorChara *)this->bsBranchFlgShotID;
  this->bsTrainingFlag._Array[0] = 0;
  *(_QWORD *)this->bsAliveShotID._Array = 0i64;
  for ( this->bsAttackGuardShotID._Array[0] = 0;
        bsBranchFlgShotID != (ActorChara *)&this->cmdInfo;
        bsBranchFlgShotID = (ActorChara *)((char *)bsBranchFlgShotID + 4) )
  {
    LODWORD(bsBranchFlgShotID->ActorCharaBase::ActorObject::Actor::__vftable) = 0;
  }
  *(_QWORD *)&this->headCtrl.vHeadPos.x = 0i64;
  *(_QWORD *)&this->headCtrl.vHeadPos.z = 0i64;
  *(_QWORD *)&this->headCtrl.fHeadAnglePrev = 0i64;
  *(_QWORD *)&this->headCtrl.fHeadAngleLimitLow = 0i64;
  v13 = 5i64;
  *(_QWORD *)&this->eyeCtrl.qLEyeQuat.x = 0i64;
  if ( this->extraEffectData.bCreated > &this->extraEffectData.bCreated[5] )
    v13 = 0i64;
  this->eyeCtrl.qLEyeQuat.z = 0.0;
  v14 = 0i64;
  *(_QWORD *)&this->eyeCtrl.qLEyeQuat.w = 1065353216i64;
  *(_QWORD *)&this->eyeCtrl.qREyeQuat.y = 0i64;
  *(_QWORD *)&this->eyeCtrl.qREyeQuat.w = 1065353216i64;
  *(_QWORD *)&this->eyeCtrl.leftEyeLimit.fLeft = 0i64;
  this->eyeCtrl.leftEyeLimit.fLow = 0.0;
  *(_QWORD *)&this->eyeCtrl.rightEyeLimit.fLeft = 0i64;
  *(_QWORD *)&this->eyeCtrl.rightEyeLimit.fUp = 0i64;
  this->eyeCtrl.iSettingType = 0;
  this->eyeCtrl.bControlMode = 0;
  *(_QWORD *)&this->eyeCtrl.fLAngleX = 0i64;
  *(_QWORD *)&this->eyeCtrl.fRAngleX = 0i64;
  this->iRivalTalkNextActionNo = -1;
  this->extraEffectData.iDataCount = 0;
  if ( this->extraEffectData.bCreated <= &this->extraEffectData.bCreated[5] )
  {
    do
      this->extraEffectData.bCreated[v14++] = 0;
    while ( v14 != v13 );
  }
  this->iBlurEffectCount = 0;
  this->iBlurFrameFlag = 15;
  this->damageMagnification.fAtkDamage = 1.0;
  this->damageMagnification.fAtkStun = 1.0;
  this->damageMagnification.fAtkGuard = 1.0;
  this->damageMagnification.fDefDamage = 1.0;
  this->damageMagnification.fDefStun = 1.0;
  this->damageMagnification.fDefGuard = 1.0;
  iCharNo = this->iCharNo;
  if ( iCharNo == 29 )
  {
    this->charaUniqueParam.iDrinkCount = 0;
  }
  else if ( iCharNo == 39 )
  {
    this->charaUniqueParam.iDrinkCount = -1;
    this->charaUniqueParam.shuneiArm.xFadeFrame.value = 0;
  }
  else
  {
    this->charaUniqueParam = 0i64;
  }
  *(_QWORD *)&this->charaOffsetParam.vPrevOff.x = 0i64;
  *(_QWORD *)&this->charaOffsetParam.vPrevOff.z = 0i64;
  *(_QWORD *)&this->charaOffsetParam.vNextOff.y = 0i64;
  *(_QWORD *)&this->charaOffsetParam.xNowFrame.value = 0i64;
  this->charaOffsetParam.iCharaID = -1;
  this->iExtraDamageValue = 0;
  *(_QWORD *)&this->cancelBonusType = 0i64;
}

void __fastcall ActorChara::PoisonDamageCalc(ActorChara *this)
{
  BattleSystem::BattleController *v2; // rax
  ActorChara *v3; // rax
  ActorChara *v4; // rax
  bool v5; // zf
  int v6; // eax
  int value; // ecx
  int v8; // eax
  int v9; // eax
  BattleSystem::BattleController *v10; // [rsp+40h] [rbp+8h] BYREF

  if ( this->IsPoisonDamaged(this) )
  {
    v2 = BattleSystem::BattleController::instance;
    if ( !BattleSystem::BattleController::instance )
    {
      v10 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
      BattleSystem::BattleController::BattleController(v10);
      BattleSystem::BattleController::instance = v2;
    }
    if ( v2->roundPhase != DIE )
      goto LABEL_23;
    if ( this->xVital.value <= 0 )
      goto LABEL_23;
    if ( (this->damageInfo.poisonDamage.uiOptionFlag & 1) != 0 )
    {
      v3 = this->GetTargetActor(this);
      if ( v3 )
      {
        if ( v3->IsDamaged(v3) )
          goto LABEL_23;
      }
    }
    if ( (this->damageInfo.poisonDamage.uiOptionFlag & 2) != 0 )
    {
      v4 = this->GetTargetActor(this);
      if ( v4 )
      {
        if ( v4->IsGuardDamaged(v4) )
          goto LABEL_23;
      }
    }
    if ( this->pActSys->actBlack.data[this->pActSys->actBlack.iPriTarget].attr < CLIMAX_CANCEL )
    {
      this->damageInfo.xPoisonIntervalFrame.value -= this->GetActionSystemSpeedFix(this, &v10)->value;
      v5 = this->damageInfo.xPoisonIntervalFrame.value == 0;
      if ( this->damageInfo.xPoisonIntervalFrame.value < 0 )
      {
        this->damageInfo.xPoisonIntervalFrame.value = 0;
        v5 = this->damageInfo.xPoisonIntervalFrame.value == 0;
      }
      if ( v5 )
      {
        this->xVital.value -= this->damageInfo.poisonDamage.iDamage << 16;
        v6 = this->GetMaxVital(this);
        value = this->xVital.value;
        if ( value >= 0x10000 )
        {
          v8 = v6 << 16;
          if ( value >= v8 )
            this->xVital.value = v8;
        }
        else
        {
          this->xVital.value = 0x10000;
        }
        if ( --this->damageInfo.poisonDamage.iCount > 0 )
        {
          v9 = this->damageInfo.poisonDamage.iIntervalFrame << 16;
          this->damageInfo.xPoisonIntervalFrame.value = v9;
          if ( v9 < 0x10000 )
            this->damageInfo.xPoisonIntervalFrame.value = 0x10000;
          return;
        }
LABEL_23:
        this->ResetPoisonDamage(this);
      }
    }
  }
}

void __fastcall ActorChara::PreUpdate(ActorChara *this)
{
  BattleSystem::BattleController *v2; // r15
  BattleSystem::BattleController *v3; // rax
  std::bitset<61>::reference *v4; // rax
  unsigned __int64 Mypos; // rdx
  int v6; // ebx
  __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rax
  std::bitset<62>::reference *v10; // rax
  bool v11; // cl
  unsigned int v12; // ebp
  unsigned int v13; // ebp
  extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> *v14; // rcx
  extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> *v15; // rcx
  extension::AsyncAsset *v16; // rax
  int v17; // er8
  OGLModel *ModelFromType; // rdi
  __int64 iPlayerID; // rbx
  __int64 v20; // rax
  int v21; // er8
  OGLModel *pMotionChangeModel; // rdx
  std::bitset<61>::reference *v23; // rax
  unsigned __int64 v24; // rdx
  int v25; // edi
  __int64 v26; // rbx
  int *p_iOptionFlag; // r14
  std::bitset<61>::reference *v28; // rax
  unsigned __int64 v29; // rdx
  __int64 v30; // rcx
  unsigned __int64 v31; // rax
  char v32; // dl
  unsigned int v33; // ecx
  const CommandData *pCmdDat; // rcx
  const CommandData *v35; // r9
  __int64 v36; // rcx
  __int64 v37; // rax
  BattleSystem::CpuSequence *v38; // rbx
  std::_Func_base<CommandData::Setting const *,BattleSystem::CpuSequence &,int> *v39; // rcx
  int CancelRemainderFrame; // ebx
  std::bitset<61>::reference *v41; // rax
  unsigned __int64 v42; // rdx
  __int64 v43; // rcx
  unsigned __int64 v44; // rax
  std::bitset<61>::reference *v45; // rax
  unsigned __int64 v46; // rdx
  int iAddPreFrame; // [rsp+20h] [rbp-68h]
  std::bitset<61>::reference result; // [rsp+38h] [rbp-50h] BYREF
  std::bitset<61>::reference v49; // [rsp+48h] [rbp-40h] BYREF
  BattleSystem::BattleController *v50; // [rsp+90h] [rbp+8h] BYREF

  LODWORD(v50) = 0;
  v2 = BattleSystem::BattleController::instance;
  if ( !BattleSystem::BattleController::instance )
  {
    v50 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v50);
    v2 = v3;
    BattleSystem::BattleController::instance = v3;
  }
  this->ResetGuardInput(this);
  this->ResetCommandFlags(this);
  if ( this->IsKO(this) && this->iDamageSkillType >= 5 )
  {
    v4 = std::bitset<21>::operator[]((std::bitset<61> *)&this->systemFlag, &result, 0x3Aui64);
    Mypos = v4->_Mypos;
    if ( Mypos >= 0x3E )
      std::_Xout_of_range("invalid bitset<N> position");
    v6 = 1;
    v7 = v4->_Mypos & 0x3F;
    v8 = Mypos >> 6;
    v9 = v4->_Pbitset[v8]._Array[0];
    v11 = 0;
    if ( _bittest64((const __int64 *)&v9, v7) )
    {
      v6 = 3;
      v10 = (std::bitset<62>::reference *)std::bitset<21>::operator[](
                                            (std::bitset<61> *)&this->systemFlag,
                                            &v49,
                                            0x3Bui64);
      if ( !std::bitset<62>::reference::operator bool(v10) )
        v11 = 1;
    }
    v12 = v6 & 0xFFFFFFFD;
    if ( (v6 & 2) == 0 )
      v12 = v6;
    v13 = v12 & 0xFFFFFFFE;
    if ( v11 )
    {
      v14 = *(extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> **)(*(_QWORD *)&AppMain::pApp
                                                                                            + 11064i64);
      if ( this->iPlayerID )
        v15 = v14 + 3;
      else
        v15 = v14 + 2;
      v16 = (extension::AsyncAsset *)extension::BasicFutureObject<extension::GFXIMovieData,void>::operator->(
                                       v15,
                                       (extension::AsyncStatus::Step)v8);
      ModelFromType = extension::AsyncAsset::getModelFromType(v16, 2, v17);
      if ( ModelFromType )
      {
        iPlayerID = this->iPlayerID;
        BattleSystem::BattleController::GetActionSystem();
        this->pCharaBone = (const CharaBone *)(v20 + 1224 * iPlayerID + 250912);
        OGLModel::copyMotion(ModelFromType, this->pModel);
        pMotionChangeModel = this->pMotionChangeModel;
        if ( pMotionChangeModel )
          OGLModel::setExternalMotion(ModelFromType, pMotionChangeModel, v21);
        this->pModel = ModelFromType;
      }
      v23 = std::bitset<21>::operator[]((std::bitset<61> *)&this->systemFlag, &v49, 0x3Bui64);
      v24 = v23->_Mypos;
      if ( v24 >= 0x3E )
        std::_Xout_of_range("invalid bitset<N> position");
      v23->_Pbitset[v24 >> 6]._Array[0] |= 1i64 << (v23->_Mypos & 0x3F);
    }
    v25 = 0;
    if ( this->extraEffectData.iDataCount > 0 )
    {
      v26 = 0i64;
      p_iOptionFlag = &this->extraEffectData.effectDat[0].iOptionFlag;
      do
      {
        if ( (*p_iOptionFlag & 0x40000) != 0 && !this->extraEffectData.bCreated[v26] )
        {
          if ( ((this->iCharNo - 5) & 0xFFFFFFEF) != 0 )
            goto LABEL_32;
          v13 |= 4u;
          v28 = std::bitset<21>::operator[]((std::bitset<61> *)&this->systemFlag, &v49, 0x3Bui64);
          v29 = v28->_Mypos;
          if ( v29 >= 0x3E )
            std::_Xout_of_range("invalid bitset<N> position");
          v30 = v28->_Mypos & 0x3F;
          v31 = v28->_Pbitset[v29 >> 6]._Array[0];
          if ( _bittest64((const __int64 *)&v31, v30) )
LABEL_32:
            v32 = 1;
          else
            v32 = 0;
          v33 = v13 & 0xFFFFFFFB;
          if ( (v13 & 4) == 0 )
            v33 = v13;
          v13 = v33;
          if ( v32 )
            ActorEffect::CreateActorEffect(
              (const CharaActionData::Effect::Type::Set *)((char *)this->extraEffectData.effectDat + 16 * v25 + 8 * v25),
              this,
              this,
              this,
              iAddPreFrame);
          this->extraEffectData.bCreated[v26] = 1;
        }
        ++v25;
        ++v26;
        p_iOptionFlag += 6;
      }
      while ( v25 < this->extraEffectData.iDataCount );
    }
  }
  this->cmdInfo.iSuccessCount = 0;
  *(_QWORD *)&this->cmdInfo.entry.iPriTag = 0i64;
  this->cmdInfo.entry.pCmdSet = 0i64;
  *(_QWORD *)&this->cmdInfo.CommandMove.iOptionFlag = 0i64;
  this->cmdInfo.CommandMove.fMoveY = 0.0;
  if ( this->cmdInfo.hitStopReserve.pCmdSet )
  {
    this->cmdInfo.entry = this->cmdInfo.hitStopReserve;
    if ( !this->xHitStopFrame.value )
    {
      *(_QWORD *)&this->cmdInfo.hitStopReserve.iPriTag = 0i64;
      this->cmdInfo.hitStopReserve.pCmdSet = 0i64;
    }
  }
  if ( this->IsAutoUkemiMode(this) && this->IsValidEvadeCommand(this) )
  {
    pCmdDat = this->cmdCheck[0].pCmdDat;
    if ( pCmdDat )
    {
      if ( pCmdDat->CheckFileID(&pCmdDat->CharaFileBase) )
      {
        v35 = this->cmdCheck[0].pCmdDat;
        if ( v35->dataHeader.iCommandCount > 36 )
          ((void (__fastcall *)(CommandEventListener *, _QWORD, __int64, CommandData::Setting *, _DWORD, _DWORD, __int64))this->RecvCommandEvent)(
            &this->CommandEventListener,
            (unsigned int)this->cmdCheck[0].iCommandDataTag,
            36i64,
            &v35->pSetting[36],
            0,
            0,
            -2i64);
      }
    }
  }
  if ( (unsigned int)(v2->keyRecordMode - 1) > 4
    && (v36 = this->iPlayerID, v2->playerInfo[v36].playerType == CROUCH)
    && (v37 = v36, v2->cpuPlayer[v36].nowSeq.iType != 18)
    && v2->roundPhase == DIE )
  {
    v38 = &v2->cpuPlayer[v37];
    if ( v38->pOwner )
    {
      if ( v38->cmdCheckFunc._Mystorage._Ptrs[7] )
      {
        LODWORD(v50) = v38->iCmdFuncOption;
        v39 = v38->cmdCheckFunc._Mystorage._Ptrs[7];
        if ( !v39 )
          std::_Xbad_function_call();
        v38->pValidCommand = v39->_Do_call(v39, v38, (int *)&v50);
      }
      else
      {
        v38->pValidCommand = BattleSystem::CmdReady(&v2->cpuPlayer[v37], 0i64);
      }
    }
  }
  else
  {
    CancelRemainderFrame = ActorChara::_getCancelRemainderFrame(this);
    CommandCheck::CheckAll(
      this->cmdCheck,
      &this->CommandEventListener,
      this->iCAngleBuf,
      this->iCAngle,
      CancelRemainderFrame);
    CommandCheck::CheckAll(
      &this->cmdCheck[1],
      &this->CommandEventListener,
      this->iCAngleBuf,
      this->iCAngle,
      CancelRemainderFrame);
  }
  if ( this->xHitStopFrame.value && this->cmdInfo.entry.pCmdSet )
    this->cmdInfo.hitStopReserve = this->cmdInfo.entry;
  if ( this->iGuardInputCount > 0 || this->IsInputGuard(this) )
  {
    ++this->iGuardInputCount;
    v41 = std::bitset<21>::operator[]((std::bitset<61> *)&this->systemFlag, &v49, 0x25ui64);
    v42 = v41->_Mypos;
    if ( v42 >= 0x3E )
      std::_Xout_of_range("invalid bitset<N> position");
    v43 = v41->_Mypos & 0x3F;
    v44 = v41->_Pbitset[v42 >> 6]._Array[0];
    if ( !_bittest64((const __int64 *)&v44, v43) && this->iGuardInputCount > 30 && !this->IsInputGuard(this) )
      this->iGuardInputCount = 0;
  }
  if ( !this->IsBlackStop(this) )
  {
    v45 = std::bitset<21>::operator[]((std::bitset<61> *)&this->systemFlag, &v49, 0x38ui64);
    v46 = v45->_Mypos;
    if ( v46 >= 0x3E )
      std::_Xout_of_range("invalid bitset<N> position");
    v45->_Pbitset[v46 >> 6]._Array[0] &= ~(1i64 << (v45->_Mypos & 0x3F));
    this->CommonActionRequest(this);
    this->CommandActionRequest(this);
    ActorChara::_cancelBonusCheck(this);
  }
}

void __fastcall ActorChara::PrevDataSet(ActorChara *this)
{
  OGLVec3 *v2; // rax
  std::bitset<61>::reference *v3; // rax
  unsigned __int64 Mypos; // rcx
  std::bitset<61>::reference *v5; // rax
  unsigned __int64 v6; // rdx
  std::bitset<61>::reference result; // [rsp+28h] [rbp-20h] BYREF

  Actor::PrevDataSet(this);
  this->bCalledUpdatePostureCalc = 0;
  this->xVitalPrev.value = this->xVital.value;
  this->xExPowerPrev.value = this->xExPower.value;
  this->xClimaxTimePrev.value = this->xClimaxTime.value;
  this->xGuardPowerPrev.value = this->xGuardPower.value;
  this->xStunPowerPrev.value = this->xStunPower.value;
  v2 = this->GetBonePosition(this, &result, 11i64);
  *(_QWORD *)&this->headCtrl.vHeadPos.x = *(_QWORD *)&v2->x;
  this->headCtrl.vHeadPos.z = v2->z;
  this->headCtrl.fHeadAnglePrev = this->headCtrl.fHeadAngle;
  this->damageInfo.iReserveRecover = 0;
  v3 = std::bitset<21>::operator[]((std::bitset<61> *)&this->systemFlag, &result, 0xFui64);
  Mypos = v3->_Mypos;
  if ( Mypos >= 0x3E )
    std::_Xout_of_range("invalid bitset<N> position");
  v3->_Pbitset[Mypos >> 6]._Array[0] &= ~(1i64 << (v3->_Mypos & 0x3F));
  v5 = std::bitset<21>::operator[]((std::bitset<61> *)&this->systemFlag, &result, 0x10ui64);
  v6 = v5->_Mypos;
  if ( v6 >= 0x3E )
    std::_Xout_of_range("invalid bitset<N> position");
  v5->_Pbitset[v6 >> 6]._Array[0] &= ~(1i64 << (v5->_Mypos & 0x3F));
}

void __fastcall ActorChara::RecvCommandEvent(
        ActorChara *this,
        int tag,
        int id,
        const CommandData::Setting *cmdSet,
        int iExtendPriority,
        int iRemainderFrame)
{
  int v7; // er15
  int v10; // ebp
  int v11; // esi
  int v12; // er13
  std::bitset<61>::reference *v13; // rax
  __int64 v14; // r9
  unsigned __int64 Mypos; // rdx
  __int64 v16; // rcx
  unsigned __int64 v17; // rax
  std::bitset<62>::reference *v18; // rax
  bool v19; // al
  int iValidCountLimit; // eax
  int iValidTerms; // eax
  float fHeightLimit; // xmm1_4
  float fDistLimit; // xmm7_4
  int *p_id; // r14
  __int64 v25; // rdx
  int iShotCheck; // eax
  __int64 v27; // rcx
  CharaActionData::Position *p_positionReserve; // rax
  int v29; // esi
  std::bitset<13>::reference *v30; // rax
  unsigned int v31; // esi
  int v32; // esi
  std::bitset<13>::reference *v33; // rax
  int v34; // eax
  ActorChara *v35; // rcx
  bool v36; // al
  int v37; // er11
  const CommandData::Setting *v38; // r10
  __int64 v39; // r10
  std::bitset<62>::reference *v40; // rax
  bool v41; // r9
  __int64 iActFlg2; // rax
  std::bitset<61>::reference result; // [rsp+38h] [rbp-80h] BYREF

  v7 = id;
  v10 = 0;
  v11 = 0;
  v12 = this[-1].cmdInfo.CommandSuccess[243].tag;
  v13 = std::bitset<21>::operator[]((std::bitset<61> *)&this->vAdd, &result, 0x25ui64);
  Mypos = v13->_Mypos;
  if ( Mypos >= 0x3E )
    std::_Xout_of_range("invalid bitset<N> position");
  v16 = v13->_Mypos & 0x3F;
  v17 = v13->_Pbitset[Mypos >> 6]._Array[0];
  if ( !_bittest64((const __int64 *)&v17, v16) )
  {
    v19 = 0;
    if ( (*(_DWORD *)(v14 + 40) & 0x2000) != 0 )
    {
      if ( !(*(unsigned __int8 (__fastcall **)(int *))(*(_QWORD *)&this[-1].cmdInfo.CommandSuccess[185].id + 3120i64))(&this[-1].cmdInfo.CommandSuccess[185].id)
        || (v11 = 1,
            v18 = (std::bitset<62>::reference *)std::bitset<21>::operator[](
                                                  (std::bitset<61> *)&this->vAdd,
                                                  &result,
                                                  0x3Dui64),
            std::bitset<62>::reference::operator bool(v18)) )
      {
        v19 = 1;
      }
    }
    if ( (v11 & 1) != 0 )
      v11 &= ~1u;
    if ( !v19 )
    {
      iValidCountLimit = cmdSet->iValidCountLimit;
      if ( iValidCountLimit <= 0 || SLODWORD(this->faceAnimeLow.fBlend) < iValidCountLimit )
      {
        iValidTerms = cmdSet->iValidTerms;
        if ( ((iValidTerms & 1) == 0 || *(float *)&this[-1].cmdInfo.CommandSuccess[204].tag <= 0.0)
          && ((iValidTerms & 2) == 0 || *(float *)&this[-1].cmdInfo.CommandSuccess[204].tag > 0.0) )
        {
          fHeightLimit = cmdSet->fHeightLimit;
          if ( (fHeightLimit <= 0.0 || fHeightLimit <= *(float *)&this[-1].cmdInfo.CommandSuccess[204].tag)
            && (fHeightLimit >= 0.0
             || *(float *)&this[-1].cmdInfo.CommandSuccess[204].tag <= COERCE_FLOAT(LODWORD(fHeightLimit) ^ _xmm)) )
          {
            fDistLimit = cmdSet->fDistLimit;
            if ( (fDistLimit <= 0.0
               || (*(float (__fastcall **)(int *))(*(_QWORD *)&this[-1].cmdInfo.CommandSuccess[185].id + 840i64))(&this[-1].cmdInfo.CommandSuccess[185].id) <= fDistLimit)
              && (fDistLimit >= 0.0
               || COERCE_FLOAT(LODWORD(fDistLimit) ^ _xmm) <= (*(float (__fastcall **)(int *))(*(_QWORD *)&this[-1].cmdInfo.CommandSuccess[185].id
                                                                                             + 840i64))(&this[-1].cmdInfo.CommandSuccess[185].id))
              && ((cmdSet->iValidTerms & 4) == 0
               || (*(unsigned __int8 (__fastcall **)(int *))(*(_QWORD *)&this[-1].cmdInfo.CommandSuccess[185].id
                                                           + 3000i64))(&this[-1].cmdInfo.CommandSuccess[185].id))
              && ((cmdSet->iValidTerms & 8) == 0
               || (*(unsigned __int8 (__fastcall **)(int *))(*(_QWORD *)&this[-1].cmdInfo.CommandSuccess[185].id
                                                           + 1416i64))(&this[-1].cmdInfo.CommandSuccess[185].id)
               && *(float *)&this[-1].cmdInfo.CommandSuccess[206].id < 0.0)
              && ((cmdSet->iValidTerms & 0x10) == 0
               || (*(unsigned __int8 (__fastcall **)(int *))(*(_QWORD *)&this[-1].cmdInfo.CommandSuccess[185].id
                                                           + 1424i64))(&this[-1].cmdInfo.CommandSuccess[185].id)
               && *(float *)&this[-1].cmdInfo.CommandSuccess[206].id > 0.0) )
            {
              p_id = &this[-1].cmdInfo.CommandSuccess[185].id;
              if ( (*(int (__fastcall **)(int *))(*(_QWORD *)&this[-1].cmdInfo.CommandSuccess[185].id + 3424i64))(&this[-1].cmdInfo.CommandSuccess[185].id) >= cmdSet->iNeedPower
                && (*(int (__fastcall **)(int *))(*(_QWORD *)p_id + 3432i64))(&this[-1].cmdInfo.CommandSuccess[185].id) >= cmdSet->iNeedClimax )
              {
                if ( (cmdSet->iValidTerms & 0x40) == 0
                  || (LOBYTE(v25) = 1,
                      (*(unsigned __int8 (__fastcall **)(int *, __int64))(*(_QWORD *)p_id + 2512i64))(
                        &this[-1].cmdInfo.CommandSuccess[185].id,
                        v25)) )
                {
                  iShotCheck = cmdSet->iShotCheck;
                  if ( iShotCheck )
                  {
                    if ( (iShotCheck & 1) != 0 )
                    {
                      v27 = 0i64;
                      p_positionReserve = &this->positionReserve;
                      while ( !p_positionReserve->iSettingX )
                      {
                        p_positionReserve = (CharaActionData::Position *)((char *)p_positionReserve - 4);
                        if ( --v27 < 0 )
                          goto LABEL_43;
                      }
                    }
                    else
                    {
LABEL_43:
                      v29 = v11 | 2;
                      v30 = (std::bitset<13>::reference *)std::bitset<21>::operator[](
                                                            (std::bitset<61> *)&this->positionReserve,
                                                            &result,
                                                            0xCui64);
                      if ( !std::bitset<13>::reference::operator bool(v30) || (cmdSet->iShotCheck & 2) == 0 )
                      {
                        v31 = v29 & 0xFFFFFFFD;
                        while ( 1 )
                        {
                          v32 = v31 | 4;
                          v33 = (std::bitset<13>::reference *)std::bitset<21>::operator[](
                                                                (std::bitset<61> *)&this->positionReserve,
                                                                &result,
                                                                v10);
                          if ( std::bitset<13>::reference::operator bool(v33) )
                          {
                            v34 = cmdSet->iShotCheck;
                            if ( _bittest(&v34, (unsigned __int8)(v10 + 2)) )
                              break;
                          }
                          ++v10;
                          v31 = v32 & 0xFFFFFFFB;
                          if ( v10 >= 12 )
                          {
                            v7 = id;
                            goto LABEL_50;
                          }
                        }
                      }
                    }
                  }
                  else
                  {
LABEL_50:
                    if ( (cmdSet->iValidTerms & 0x400) == 0
                      || !(*(unsigned __int8 (__fastcall **)(int *))(*(_QWORD *)p_id + 3200i64))(&this[-1].cmdInfo.CommandSuccess[185].id) )
                    {
                      if ( LOBYTE(this->vAdd.z) )
                      {
                        if ( this[-1].cmdInfo.CommandSuccess[244].tag >= 0 )
                          v12 = this[-1].cmdInfo.CommandSuccess[244].tag;
                        else
                          LOBYTE(this->vAdd.z) = 0;
                      }
                      v35 = (ActorChara *)((char *)this - 904);
                      if ( tag )
                        v36 = ActorChara::_charaCommandCheck(v35, v12, v7, cmdSet, iRemainderFrame);
                      else
                        v36 = ActorChara::_commonCommandCheck(v35, v12, cmdSet, iRemainderFrame);
                      if ( v36 )
                      {
                        v37 = iExtendPriority;
                        if ( !*(_QWORD *)&this->baseAnime.fBlend
                          || (int)CommandCheck::CompGroupPriority(
                                    *(const CommandData::Setting **)&this->baseAnime.fBlend,
                                    cmdSet) > 0
                          || !(unsigned int)CommandCheck::CompGroupPriority(v38, cmdSet)
                          && LODWORD(this->baseAnime.fMotionFrame) + *(_DWORD *)(v39 + 16) <= v37 + cmdSet->iPriority )
                        {
                          *(_QWORD *)&this->baseAnime.fBlend = cmdSet;
                          this->baseAnime.iMotionID = tag;
                          LODWORD(this->baseAnime.fMotionFrame) = v37;
                          (*(void (__fastcall **)(int *))(*(_QWORD *)p_id + 3000i64))(&this[-1].cmdInfo.CommandSuccess[185].id);
                          v40 = (std::bitset<62>::reference *)std::bitset<21>::operator[](
                                                                (std::bitset<61> *)&this->vAdd,
                                                                &result,
                                                                0x32ui64);
                          std::bitset<62>::reference::operator=(v40, v41);
                        }
                        iActFlg2 = this->iActFlg2;
                        if ( (int)iActFlg2 < 256 )
                        {
                          *(&this->exclusiveParam.type.heidern.iExtraDamage + 2 * iActFlg2) = v7;
                          *(&this->exclusiveParam.iType + 2 * this->iActFlg2++) = tag;
                        }
                        if ( tag )
                        {
                          if ( (cmdSet->iValidTerms & 0x1000) == 0 )
                            (*(void (__fastcall **)(int *))(*(_QWORD *)p_id + 3920i64))(&this[-1].cmdInfo.CommandSuccess[185].id);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
}

void __fastcall ActorChara::ReserveRecoverCalc(ActorChara *this)
{
  BattleSystem::BattleController *v2; // rax
  int v3; // eax
  int value; // ecx
  int v5; // eax
  BattleSystem::BattleController *v6; // [rsp+40h] [rbp+8h]

  v2 = BattleSystem::BattleController::instance;
  if ( !BattleSystem::BattleController::instance )
  {
    v6 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v6);
    BattleSystem::BattleController::instance = v2;
  }
  if ( v2->roundPhase == DIE && this->xVital.value > 0 )
  {
    this->xVital.value += this->damageInfo.iReserveRecover << 16;
    v3 = this->GetMaxVital(this);
    value = this->xVital.value;
    if ( value >= 0x10000 )
    {
      v5 = v3 << 16;
      if ( value >= v5 )
        this->xVital.value = v5;
    }
    else
    {
      this->xVital.value = 0x10000;
    }
  }
  this->damageInfo.iReserveRecover = 0;
}

void __fastcall ActorChara::ResetCommandFlags(ActorChara *this)
{
  std::bitset<61>::reference *v1; // rax
  std::bitset<61> *v2; // r9
  unsigned __int64 Mypos; // rdx
  std::bitset<61>::reference *v4; // rax
  std::bitset<61> *v5; // r9
  unsigned __int64 v6; // rdx
  std::bitset<61>::reference *v7; // rax
  std::bitset<61> *v8; // r9
  unsigned __int64 v9; // rdx
  std::bitset<61>::reference *v10; // rax
  std::bitset<61> *v11; // r9
  unsigned __int64 v12; // rdx
  std::bitset<61>::reference *v13; // rax
  std::bitset<61> *v14; // r9
  unsigned __int64 v15; // rdx
  std::bitset<61>::reference *v16; // rax
  std::bitset<61> *v17; // r9
  unsigned __int64 v18; // rdx
  std::bitset<61>::reference *v19; // rax
  std::bitset<61> *v20; // r9
  unsigned __int64 v21; // rdx
  std::bitset<61>::reference *v22; // rax
  std::bitset<61> *v23; // r9
  unsigned __int64 v24; // rdx
  std::bitset<61>::reference *v25; // rax
  std::bitset<61> *v26; // r9
  unsigned __int64 v27; // rcx
  std::bitset<61>::reference *v28; // rax
  unsigned __int64 v29; // rdx
  std::bitset<61>::reference result; // [rsp+28h] [rbp-20h] BYREF

  v1 = std::bitset<21>::operator[]((std::bitset<61> *)&this->systemFlag, &result, 0x14ui64);
  Mypos = v1->_Mypos;
  if ( Mypos >= 0x3E )
    std::_Xout_of_range("invalid bitset<N> position");
  v1->_Pbitset[Mypos >> 6]._Array[0] &= ~(1i64 << (Mypos & 0x3F));
  v4 = std::bitset<21>::operator[](v2, &result, 0x1Fui64);
  v6 = v4->_Mypos;
  if ( v6 >= 0x3E )
    std::_Xout_of_range("invalid bitset<N> position");
  v4->_Pbitset[v6 >> 6]._Array[0] &= ~(1i64 << (v6 & 0x3F));
  v7 = std::bitset<21>::operator[](v5, &result, 0x20ui64);
  v9 = v7->_Mypos;
  if ( v9 >= 0x3E )
    std::_Xout_of_range("invalid bitset<N> position");
  v7->_Pbitset[v9 >> 6]._Array[0] &= ~(1i64 << (v9 & 0x3F));
  v10 = std::bitset<21>::operator[](v8, &result, 0x21ui64);
  v12 = v10->_Mypos;
  if ( v12 >= 0x3E )
    std::_Xout_of_range("invalid bitset<N> position");
  v10->_Pbitset[v12 >> 6]._Array[0] &= ~(1i64 << (v12 & 0x3F));
  v13 = std::bitset<21>::operator[](v11, &result, 0x2Aui64);
  v15 = v13->_Mypos;
  if ( v15 >= 0x3E )
    std::_Xout_of_range("invalid bitset<N> position");
  v13->_Pbitset[v15 >> 6]._Array[0] &= ~(1i64 << (v15 & 0x3F));
  v16 = std::bitset<21>::operator[](v14, &result, 0x2Bui64);
  v18 = v16->_Mypos;
  if ( v18 >= 0x3E )
    std::_Xout_of_range("invalid bitset<N> position");
  v16->_Pbitset[v18 >> 6]._Array[0] &= ~(1i64 << (v18 & 0x3F));
  v19 = std::bitset<21>::operator[](v17, &result, 0x2Cui64);
  v21 = v19->_Mypos;
  if ( v21 >= 0x3E )
    std::_Xout_of_range("invalid bitset<N> position");
  v19->_Pbitset[v21 >> 6]._Array[0] &= ~(1i64 << (v21 & 0x3F));
  v22 = std::bitset<21>::operator[](v20, &result, 0x2Dui64);
  v24 = v22->_Mypos;
  if ( v24 >= 0x3E )
    std::_Xout_of_range("invalid bitset<N> position");
  v22->_Pbitset[v24 >> 6]._Array[0] &= ~(1i64 << (v24 & 0x3F));
  v25 = std::bitset<21>::operator[](v23, &result, 0x2Fui64);
  v27 = v25->_Mypos;
  if ( v27 >= 0x3E )
    std::_Xout_of_range("invalid bitset<N> position");
  v25->_Pbitset[v27 >> 6]._Array[0] &= ~(1i64 << (v25->_Mypos & 0x3F));
  v28 = std::bitset<21>::operator[](v26, &result, 0x24ui64);
  v29 = v28->_Mypos;
  if ( v29 >= 0x3E )
    std::_Xout_of_range("invalid bitset<N> position");
  v28->_Pbitset[v29 >> 6]._Array[0] &= ~(1i64 << (v29 & 0x3F));
}

void __fastcall ActorChara::ResetDamageFlags(ActorChara *this)
{
  int v2; // esi
  ActorChara *v3; // r14
  BattleSystem::BattleController *v4; // rbx
  BattleSystem::BattleController *v5; // rax
  int v6; // eax
  ActorChara *v7; // rax
  PLAYER_ID v8; // ebx
  BattleEventHandler *Instance; // rax
  int v10; // esi
  ActorChara *v11; // r14
  BattleSystem::BattleController *v12; // rbx
  BattleSystem::BattleController *v13; // rax
  int v14; // eax
  ActorChara *v15; // rax
  PLAYER_ID v16; // ebx
  BattleEventHandler *v17; // rax
  std::bitset<61> *v18; // rcx
  std::bitset<62>::reference *v19; // rax
  const std::bitset<62>::reference *v20; // r9
  std::bitset<61>::reference *v21; // rax
  unsigned __int64 Mypos; // rdx
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
  unsigned __int64 v38; // rdx
  std::bitset<61>::reference *v39; // rax
  unsigned __int64 v40; // rdx
  std::bitset<61>::reference *v41; // rax
  unsigned __int64 v42; // rdx
  std::bitset<61>::reference *v43; // rax
  unsigned __int64 v44; // rcx
  std::bitset<61>::reference *v45; // rax
  unsigned __int64 v46; // rdx
  std::bitset<61>::reference result; // [rsp+28h] [rbp-30h] BYREF
  std::bitset<61>::reference v48; // [rsp+38h] [rbp-20h] BYREF
  BattleSystem::BattleController *v49; // [rsp+60h] [rbp+8h]
  BattleSystem::BattleController *v50; // [rsp+60h] [rbp+8h]

  if ( this->damageInfo.iCombo > 1 && this->GetTargetActor(this) )
  {
    v2 = 100 * this->damageInfo.iCombo;
    v3 = this->GetTargetActor(this);
    v4 = BattleSystem::BattleController::instance;
    if ( !BattleSystem::BattleController::instance )
    {
      v49 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
      BattleSystem::BattleController::BattleController(v49);
      v4 = v5;
      BattleSystem::BattleController::instance = v5;
    }
    v6 = v3->GetPlayerID(v3);
    BattleSystem::BattleController::AddBattleScore(v4, v6, v2);
    v7 = this->GetTargetActor(this);
    v8 = v7->GetPlayerID(v7);
    Instance = BattleEventHandler::getInstance();
    BattleEventHandler::CallEvent_CharacterActivity(Instance, v8, COMBO, v2);
  }
  if ( this->damageInfo.iSkillBonusCount > 0 && this->GetTargetActor(this) )
  {
    v10 = 100 * this->damageInfo.iSkillBonusCount;
    v11 = this->GetTargetActor(this);
    v12 = BattleSystem::BattleController::instance;
    if ( !BattleSystem::BattleController::instance )
    {
      v50 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
      BattleSystem::BattleController::BattleController(v50);
      v12 = v13;
      BattleSystem::BattleController::instance = v13;
    }
    v14 = v11->GetPlayerID(v11);
    BattleSystem::BattleController::AddBattleScore(v12, v14, v10);
    v15 = this->GetTargetActor(this);
    v16 = v15->GetPlayerID(v15);
    v17 = BattleEventHandler::getInstance();
    BattleEventHandler::CallEvent_CharacterActivity(v17, v16, TECHNICAL, v10);
  }
  std::bitset<21>::operator[]((std::bitset<61> *)&this->systemFlag, &result, 0xDui64);
  v19 = (std::bitset<62>::reference *)std::bitset<21>::operator[](v18, &v48, 0x3Dui64);
  std::bitset<62>::reference::operator=(v19, v20);
  this->damageInfo.iCombo = 0;
  *(_QWORD *)&this->damageInfo.iComboAdjust = 0i64;
  *(_QWORD *)&this->damageInfo.iSkillBonusCount = 0i64;
  *(_WORD *)&this->damageInfo.bMaxModeComboAttack = 0;
  this->xHitStopFrame.value = 0;
  *(_QWORD *)&this->xHitStopDelay.value = 0i64;
  *(_QWORD *)&this->xPursuitFrame.value = 0i64;
  this->iDamageAttr = 0;
  this->damageReserve.iAtkID = 0;
  this->iNextDamageID = 0;
  v21 = std::bitset<21>::operator[]((std::bitset<61> *)&this->systemFlag, &v48, 9ui64);
  Mypos = v21->_Mypos;
  if ( Mypos >= 0x3E )
    std::_Xout_of_range("invalid bitset<N> position");
  v21->_Pbitset[Mypos >> 6]._Array[0] &= ~(1i64 << (Mypos & 0x3F));
  v23 = std::bitset<21>::operator[]((std::bitset<61> *)&this->systemFlag, &v48, 0xAui64);
  v24 = v23->_Mypos;
  if ( v24 >= 0x3E )
    std::_Xout_of_range("invalid bitset<N> position");
  v23->_Pbitset[v24 >> 6]._Array[0] &= ~(1i64 << (v24 & 0x3F));
  v25 = std::bitset<21>::operator[]((std::bitset<61> *)&this->systemFlag, &v48, 0xBui64);
  v26 = v25->_Mypos;
  if ( v26 >= 0x3E )
    std::_Xout_of_range("invalid bitset<N> position");
  v25->_Pbitset[v26 >> 6]._Array[0] &= ~(1i64 << (v26 & 0x3F));
  v27 = std::bitset<21>::operator[]((std::bitset<61> *)&this->systemFlag, &v48, 0xCui64);
  v28 = v27->_Mypos;
  if ( v28 >= 0x3E )
    std::_Xout_of_range("invalid bitset<N> position");
  v27->_Pbitset[v28 >> 6]._Array[0] &= ~(1i64 << (v28 & 0x3F));
  v29 = std::bitset<21>::operator[]((std::bitset<61> *)&this->systemFlag, &v48, 0xDui64);
  v30 = v29->_Mypos;
  if ( v30 >= 0x3E )
    std::_Xout_of_range("invalid bitset<N> position");
  v29->_Pbitset[v30 >> 6]._Array[0] &= ~(1i64 << (v30 & 0x3F));
  v31 = std::bitset<21>::operator[]((std::bitset<61> *)&this->systemFlag, &v48, 0xEui64);
  v32 = v31->_Mypos;
  if ( v32 >= 0x3E )
    std::_Xout_of_range("invalid bitset<N> position");
  v31->_Pbitset[v32 >> 6]._Array[0] &= ~(1i64 << (v32 & 0x3F));
  v33 = std::bitset<21>::operator[]((std::bitset<61> *)&this->systemFlag, &v48, 0x11ui64);
  v34 = v33->_Mypos;
  if ( v34 >= 0x3E )
    std::_Xout_of_range("invalid bitset<N> position");
  v33->_Pbitset[v34 >> 6]._Array[0] &= ~(1i64 << (v34 & 0x3F));
  v35 = std::bitset<21>::operator[]((std::bitset<61> *)&this->systemFlag, &v48, 0x12ui64);
  v36 = v35->_Mypos;
  if ( v36 >= 0x3E )
    std::_Xout_of_range("invalid bitset<N> position");
  v35->_Pbitset[v36 >> 6]._Array[0] &= ~(1i64 << (v36 & 0x3F));
  v37 = std::bitset<21>::operator[]((std::bitset<61> *)&this->systemFlag, &v48, 0x13ui64);
  v38 = v37->_Mypos;
  if ( v38 >= 0x3E )
    std::_Xout_of_range("invalid bitset<N> position");
  v37->_Pbitset[v38 >> 6]._Array[0] &= ~(1i64 << (v38 & 0x3F));
  v39 = std::bitset<21>::operator[]((std::bitset<61> *)&this->systemFlag, &v48, 0x15ui64);
  v40 = v39->_Mypos;
  if ( v40 >= 0x3E )
    std::_Xout_of_range("invalid bitset<N> position");
  v39->_Pbitset[v40 >> 6]._Array[0] &= ~(1i64 << (v40 & 0x3F));
  v41 = std::bitset<21>::operator[]((std::bitset<61> *)&this->systemFlag, &v48, 0x16ui64);
  v42 = v41->_Mypos;
  if ( v42 >= 0x3E )
    std::_Xout_of_range("invalid bitset<N> position");
  v41->_Pbitset[v42 >> 6]._Array[0] &= ~(1i64 << (v42 & 0x3F));
  v43 = std::bitset<21>::operator[]((std::bitset<61> *)&this->systemFlag, &v48, 0x17ui64);
  v44 = v43->_Mypos;
  if ( v44 >= 0x3E )
    std::_Xout_of_range("invalid bitset<N> position");
  v43->_Pbitset[v44 >> 6]._Array[0] &= ~(1i64 << (v43->_Mypos & 0x3F));
  v45 = std::bitset<21>::operator[]((std::bitset<61> *)&this->systemFlag, &v48, 0x23ui64);
  v46 = v45->_Mypos;
  if ( v46 >= 0x3E )
    std::_Xout_of_range("invalid bitset<N> position");
  v45->_Pbitset[v46 >> 6]._Array[0] &= ~(1i64 << (v46 & 0x3F));
  this->SetHitStopVibrate(this, 0);
  *(_QWORD *)&this->xStunDamageFrame.value = 0i64;
  this->ResetInvalidAttackID(this);
}

void __fastcall ActorChara::ResetExPower(ActorChara *this)
{
  this->xExPower.value = this->xStartExPower.value;
}

void __fastcall ActorChara::ResetGuardPower(ActorChara *this)
{
  this->xGuardPower.value = this->GetGuardRecoverMax(this) << 16;
}

void __fastcall ActorChara::ResetPoisonDamage(ActorChara *this)
{
  *(_DWORD *)&this->damageInfo.poisonDamage.iCount = 0;
  *(_QWORD *)&this->damageInfo.poisonDamage.iDamage = 0i64;
  this->xPoisonEffectFrame.value = 0;
}

void __fastcall ActorChara::ResetStunDamageFlags(ActorChara *this)
{
  std::bitset<61>::reference *v2; // rax
  unsigned __int64 Mypos; // rcx
  std::bitset<61>::reference *v4; // rax
  unsigned __int64 v5; // rdx
  std::bitset<61>::reference result; // [rsp+28h] [rbp-20h] BYREF

  v2 = std::bitset<21>::operator[]((std::bitset<61> *)&this->systemFlag, &result, 0x15ui64);
  Mypos = v2->_Mypos;
  if ( Mypos >= 0x3E )
    std::_Xout_of_range("invalid bitset<N> position");
  v2->_Pbitset[Mypos >> 6]._Array[0] &= ~(1i64 << (v2->_Mypos & 0x3F));
  this->ResetStunPower(this);
  v4 = std::bitset<21>::operator[]((std::bitset<61> *)&this->systemFlag, &result, 0xCui64);
  v5 = v4->_Mypos;
  if ( v5 >= 0x3E )
    std::_Xout_of_range("invalid bitset<N> position");
  v4->_Pbitset[v5 >> 6]._Array[0] &= ~(1i64 << (v4->_Mypos & 0x3F));
  this->ResetInvalidAttackID(this);
}

void __fastcall ActorChara::ResetStunPower(ActorChara *this)
{
  this->xStunPower.value = this->GetStunRecoverMax(this) << 16;
}

void __fastcall ActorChara::ResetThrowAttach(ActorChara *this, bool bResetReserve)
{
  if ( bResetReserve )
  {
    this->throwAttach.bNextReset = 1;
  }
  else
  {
    *(_QWORD *)&this->throwAttach.iAtkBoneID = 0i64;
    this->throwAttach.iOptionFlag = 0;
    this->throwAttach.bNextReset = 0;
    *(_QWORD *)&this->throwAttach.reserveAttach.iAtkBoneID = 0i64;
    this->throwAttach.reserveAttach.iOptionFlag = 0;
  }
}

void __fastcall ActorChara::SetAliveShot(ActorChara *this, const ActorShot *pShot)
{
  std::bitset<61>::reference *v4; // rax
  unsigned __int64 Mypos; // rdx
  int v6; // eax
  std::bitset<61>::reference *v7; // rax
  unsigned __int64 v8; // rdx
  std::bitset<61>::reference result; // [rsp+28h] [rbp-20h] BYREF

  if ( !pShot->IsDeadShot((ActorShot *)pShot) )
  {
    if ( pShot->IsReflectShot((ActorShot *)pShot) )
    {
      v4 = std::bitset<21>::operator[]((std::bitset<61> *)&this->bsAliveShotID, &result, 0xCui64);
      Mypos = v4->_Mypos;
      if ( Mypos >= 0xD )
        std::_Xout_of_range("invalid bitset<N> position");
      *((_DWORD *)v4->_Pbitset->_Array + (Mypos >> 5)) |= 1 << (Mypos & 0x1F);
    }
    else if ( pShot->GetShotID((ActorShot *)pShot) < 12 )
    {
      v6 = pShot->GetShotID((ActorShot *)pShot);
      v7 = std::bitset<21>::operator[]((std::bitset<61> *)&this->bsAliveShotID, &result, v6);
      v8 = v7->_Mypos;
      if ( v8 >= 0xD )
        std::_Xout_of_range("invalid bitset<N> position");
      *((_DWORD *)v7->_Pbitset->_Array + (v8 >> 5)) |= 1 << (v8 & 0x1F);
    }
  }
}

void __fastcall ActorChara::SetAttackGuardShot(ActorChara *this, const ActorShot *pShot)
{
  std::bitset<61>::reference *v4; // rax
  unsigned __int64 Mypos; // rdx
  int v6; // eax
  std::bitset<61>::reference *v7; // rax
  unsigned __int64 v8; // rdx
  std::bitset<61>::reference result; // [rsp+28h] [rbp-20h] BYREF

  if ( pShot->IsReflectShot((ActorShot *)pShot) )
  {
    v4 = std::bitset<21>::operator[]((std::bitset<61> *)&this->bsAttackGuardShotID, &result, 0xCui64);
    Mypos = v4->_Mypos;
    if ( Mypos >= 0xD )
      std::_Xout_of_range("invalid bitset<N> position");
    *((_DWORD *)v4->_Pbitset->_Array + (Mypos >> 5)) |= 1 << (Mypos & 0x1F);
  }
  else if ( pShot->GetShotID((ActorShot *)pShot) < 12 )
  {
    v6 = pShot->GetShotID((ActorShot *)pShot);
    v7 = std::bitset<21>::operator[]((std::bitset<61> *)&this->bsAttackGuardShotID, &result, v6);
    v8 = v7->_Mypos;
    if ( v8 >= 0xD )
      std::_Xout_of_range("invalid bitset<N> position");
    *((_DWORD *)v7->_Pbitset->_Array + (v8 >> 5)) |= 1 << (v8 & 0x1F);
  }
}

void __fastcall ActorChara::SetAttackHitShot(ActorChara *this, const ActorShot *pShot)
{
  std::bitset<61>::reference *v4; // rax
  unsigned __int64 Mypos; // rdx
  int v6; // eax
  std::bitset<61>::reference *v7; // rax
  unsigned __int64 v8; // rdx
  std::bitset<61>::reference result; // [rsp+28h] [rbp-20h] BYREF

  if ( pShot->IsReflectShot((ActorShot *)pShot) )
  {
    v4 = std::bitset<21>::operator[]((std::bitset<61> *)&this->bsAttackHitShotID, &result, 0xCui64);
    Mypos = v4->_Mypos;
    if ( Mypos >= 0xD )
      std::_Xout_of_range("invalid bitset<N> position");
    *((_DWORD *)v4->_Pbitset->_Array + (Mypos >> 5)) |= 1 << (Mypos & 0x1F);
  }
  else if ( pShot->GetShotID((ActorShot *)pShot) < 12 )
  {
    v6 = pShot->GetShotID((ActorShot *)pShot);
    v7 = std::bitset<21>::operator[]((std::bitset<61> *)&this->bsAttackHitShotID, &result, v6);
    v8 = v7->_Mypos;
    if ( v8 >= 0xD )
      std::_Xout_of_range("invalid bitset<N> position");
    *((_DWORD *)v7->_Pbitset->_Array + (v8 >> 5)) |= 1 << (v8 & 0x1F);
  }
}

void __fastcall ActorChara::SetBranchFlgShot(ActorChara *this, const ActorShot *pShot, int branchKey)
{
  int v6; // edi
  std::bitset<61>::reference *v7; // rax
  unsigned __int64 Mypos; // rdx
  std::bitset<61>::reference result; // [rsp+28h] [rbp-20h] BYREF

  if ( pShot->IsReflectShot((ActorShot *)pShot) )
  {
    v6 = 12;
  }
  else
  {
    if ( pShot->GetShotID((ActorShot *)pShot) >= 12 )
      return;
    v6 = pShot->GetShotID((ActorShot *)pShot);
  }
  if ( pShot->IsActionBranchKey((Actor *)pShot, branchKey) )
  {
    v7 = std::bitset<21>::operator[]((std::bitset<61> *)&this->bsAttackGuardShotID._Array[branchKey], &result, v6);
    Mypos = v7->_Mypos;
    if ( Mypos >= 0xD )
      std::_Xout_of_range("invalid bitset<N> position");
    *((_DWORD *)v7->_Pbitset->_Array + (Mypos >> 5)) |= 1 << (Mypos & 0x1F);
  }
}

void __fastcall ActorChara::SetCharaOffsetData(
        ActorChara *this,
        const CharaActionData::Setting::Type::CharaOffset *charaOffset)
{
  __int64 v2; // rdx
  __int64 v3; // r10
  __int64 v4; // r10

  if ( charaOffset->iCharaID == this->iCharNo )
  {
    ActorChara::CharaOffsetParam::SetData(&this->charaOffsetParam, charaOffset);
    v4 = *(_QWORD *)(v3 + 104);
    if ( v4 )
    {
      if ( *(_DWORD *)(v2 + 20) == 1 )
      {
        *(_DWORD *)(v4 + 8544) &= ~0x800u;
      }
      else if ( *(_DWORD *)(v2 + 20) == 2 )
      {
        *(_DWORD *)(v4 + 8544) |= 0x800u;
      }
    }
  }
}

void __fastcall ActorChara::SetClimaxMode(ActorChara *this, bool bQuick)
{
  ActorChara_vtbl *v3; // rax
  ActorChara *v4; // rax
  std::bitset<61>::reference *v5; // rax
  unsigned __int64 Mypos; // rdx
  std::bitset<61>::reference result; // [rsp+28h] [rbp-20h] BYREF

  v3 = this->ActorCharaBase::ActorObject::Actor::__vftable;
  if ( bQuick )
  {
    this->xClimaxTime.value = (v3->GetMaxClimaxTime(this) / 2) << 16;
    if ( this->GetTargetActor(this) && this->GetTargetActor(this)->damageInfo.iCombo >= 1 )
    {
      v4 = this->GetTargetActor(this);
      v4->damageInfo.iNextComboAdjust += 2;
    }
  }
  else
  {
    this->xClimaxTime.value = v3->GetMaxClimaxTime(this) << 16;
  }
  this->xClimaxEffectFrame.value = 0;
  v5 = std::bitset<21>::operator[]((std::bitset<61> *)&this->systemFlag, &result, 0x1Eui64);
  Mypos = v5->_Mypos;
  if ( Mypos >= 0x3E )
    std::_Xout_of_range("invalid bitset<N> position");
  v5->_Pbitset[Mypos >> 6]._Array[0] |= 1i64 << (Mypos & 0x3F);
}

void __fastcall ActorChara::SetDamageActionDeclare(ActorChara *this)
{
  std::bitset<61>::reference *v1; // rax
  std::bitset<61> *v2; // r9
  unsigned __int64 Mypos; // rcx
  std::bitset<61>::reference *v4; // rax
  __int64 v5; // r9
  unsigned __int64 v6; // rdx
  std::bitset<61>::reference result; // [rsp+28h] [rbp-20h] BYREF

  v1 = std::bitset<21>::operator[]((std::bitset<61> *)&this->systemFlag, &result, 0x25ui64);
  Mypos = v1->_Mypos;
  if ( Mypos >= 0x3E )
    std::_Xout_of_range("invalid bitset<N> position");
  v1->_Pbitset[Mypos >> 6]._Array[0] |= 1i64 << (v1->_Mypos & 0x3F);
  v4 = std::bitset<21>::operator[](v2 + 137, &result, 0x32ui64);
  v6 = v4->_Mypos;
  if ( v6 >= 0x3E )
    std::_Xout_of_range("invalid bitset<N> position");
  v4->_Pbitset[v6 >> 6]._Array[0] &= ~(1i64 << (v6 & 0x3F));
  *(_QWORD *)(v5 + 1440) = 0i64;
  *(_QWORD *)(v5 + 1448) = 0i64;
}

void __fastcall ActorChara::CharaOffsetParam::SetData(
        ActorChara::CharaOffsetParam *this,
        const CharaActionData::Setting::Type::CharaOffset *data)
{
  int iMaxFrame; // er9
  float v3; // xmm2_4
  float z; // eax
  float fOffX; // eax
  float fOffZ; // xmm1_4

  iMaxFrame = this->iMaxFrame;
  if ( iMaxFrame <= 0 )
  {
    z = this->vNextOff.z;
    *(_QWORD *)&this->vPrevOff.x = *(_QWORD *)&this->vNextOff.x;
    this->vPrevOff.z = z;
  }
  else
  {
    v3 = (float)((float)((float)(unsigned __int16)this->xNowFrame.value * 0.000015258789)
               + (float)(this->xNowFrame.value >> 16))
       / (float)iMaxFrame;
    this->vPrevOff.x = (float)((float)(this->vNextOff.x - this->vPrevOff.x) * v3) + this->vPrevOff.x;
    this->vPrevOff.y = (float)((float)(this->vNextOff.y - this->vPrevOff.y) * v3) + this->vPrevOff.y;
    this->vPrevOff.z = (float)((float)(this->vNextOff.z - this->vPrevOff.z) * v3) + this->vPrevOff.z;
  }
  fOffX = data->fOffX;
  fOffZ = data->fOffZ;
  this->vNextOff.y = data->fOffY;
  this->vNextOff.z = fOffZ;
  this->vNextOff.x = fOffX;
  this->xNowFrame.value = -65536;
  this->iMaxFrame = data->iFrame;
  this->iCharaID = data->iCharaID;
}

void __fastcall ActorChara::SetEffectCreateData(ActorChara *this, const CharaActionData::Effect::Type::Set *setData)
{
  __int64 iDataCount; // rcx
  ActorChara *v5; // r8
  int v6; // [rsp+20h] [rbp-18h]

  if ( (!this->IsResultDemoSubActor(this) || this->iCharNo == 49)
    && (!this->IsResultDemoActor(this) || (setData->iOptionFlag & 0x80000) == 0)
    && this->_checkEffectSetTerm(this, setData) )
  {
    if ( (setData->iOptionFlag & 0x840000) != 0 )
    {
      if ( this->extraEffectData.iDataCount >= 5 )
        this->extraEffectData.iDataCount = 4;
      iDataCount = this->extraEffectData.iDataCount;
      *(_OWORD *)&this->extraEffectData.effectDat[iDataCount].fPosX = *(_OWORD *)&setData->fPosX;
      *(_QWORD *)&this->extraEffectData.effectDat[iDataCount].iTermFlag = *(_QWORD *)&setData->iTermFlag;
      ++this->extraEffectData.iDataCount;
    }
    else
    {
      if ( this->IsActionDataChanged(this) )
        v5 = this->GetTargetActor(this);
      else
        v5 = this;
      ActorEffect::CreateActorEffect(setData, this, v5, this, v6);
    }
  }
}

void __fastcall ActorChara::SetExPower(ActorChara *this, Fix32 exPow)
{
  if ( exPow.value >= 0 )
  {
    if ( exPow.value > this->xMaxExPower.value )
      exPow.value = this->xMaxExPower.value;
    this->xExPower = exPow;
  }
  else
  {
    this->xExPower.value = 0;
  }
}

void __fastcall ActorChara::SetExclusiveData(
        ActorChara *this,
        const CharaActionData::Exclusive *exclusive,
        bool bNextData)
{
  int iExtraDamage; // eax
  int iCharNo; // eax
  int iMamahahaAction; // eax
  int iDrinkCount; // eax
  CharaActionData::Exclusive::Type *p_type; // rbx
  MaterialShowControl *DefaultMaterialData; // rax

  if ( bNextData )
    return;
  this->exclusiveParam = *exclusive;
  if ( exclusive->iType == 2 )
  {
    p_type = &exclusive->type;
    DefaultMaterialData = ActionSystem::GetDefaultMaterialData(this->pActSys, this);
    MaterialShowControl::SetMianMaskChange(
      DefaultMaterialData,
      this->pModel,
      this->iCAngle,
      (const CharaActionData::Exclusive::Type::Mian *)p_type);
    return;
  }
  if ( exclusive->iType != 3 )
  {
    if ( exclusive->iType != 7 )
    {
      if ( exclusive->iType == 8 )
      {
        iExtraDamage = exclusive->type.heidern.iExtraDamage;
        if ( (*(_BYTE *)(&exclusive->type.gensai + 1) & 1) != 0 )
          this->iExtraDamageValue += iExtraDamage;
        else
          this->iExtraDamageValue = iExtraDamage;
      }
      return;
    }
    if ( exclusive->type.shunei.iFadeFrame > 0 )
    {
      this->charaUniqueParam.iDrinkCount = this->iActNo;
      this->charaUniqueParam.shuneiArm.xFadeFrame.value = exclusive->type.shunei.iFadeFrame << 16;
      return;
    }
    iCharNo = this->iCharNo;
    if ( iCharNo != 29 )
    {
      if ( iCharNo == 39 )
      {
        this->charaUniqueParam.iDrinkCount = -1;
        this->charaUniqueParam.shuneiArm.xFadeFrame.value = 0;
      }
      else
      {
        this->charaUniqueParam = 0i64;
      }
      return;
    }
LABEL_21:
    this->charaUniqueParam.iDrinkCount = 0;
    return;
  }
  iMamahahaAction = exclusive->type.nakoruru.iMamahahaAction;
  if ( (exclusive->type.nakoruru.iMamahahaOption & 1) != 0 )
    this->charaUniqueParam.iDrinkCount = iMamahahaAction;
  else
    this->charaUniqueParam.iDrinkCount += iMamahahaAction;
  iDrinkCount = this->charaUniqueParam.iDrinkCount;
  if ( iDrinkCount > 10 )
  {
    this->charaUniqueParam.iDrinkCount = 10;
    return;
  }
  if ( iDrinkCount < 0 )
    goto LABEL_21;
}

void __fastcall ActorChara::SetEyeAngle(ActorChara *this, bool bRightEye, float x, float y)
{
  float fLow; // xmm0_4
  float fLeft; // xmm0_4
  float v6; // xmm0_4
  float v7; // xmm0_4

  if ( bRightEye )
  {
    LODWORD(fLow) = LODWORD(this->eyeCtrl.rightEyeLimit.fUp) ^ _xmm;
    this->eyeCtrl.fRAngleX = x;
    this->eyeCtrl.fRAngleY = y;
    if ( fLow > x || (fLow = this->eyeCtrl.rightEyeLimit.fLow, x > fLow) )
      this->eyeCtrl.fRAngleX = fLow;
    LODWORD(fLeft) = LODWORD(this->eyeCtrl.rightEyeLimit.fRight) ^ _xmm;
    if ( fLeft > y || (fLeft = this->eyeCtrl.rightEyeLimit.fLeft, y > fLeft) )
      this->eyeCtrl.fRAngleY = fLeft;
  }
  else
  {
    LODWORD(v6) = LODWORD(this->eyeCtrl.leftEyeLimit.fUp) ^ _xmm;
    this->eyeCtrl.fLAngleX = x;
    this->eyeCtrl.fLAngleY = y;
    if ( v6 > x || (v6 = this->eyeCtrl.leftEyeLimit.fLow, x > v6) )
      this->eyeCtrl.fLAngleX = v6;
    LODWORD(v7) = LODWORD(this->eyeCtrl.leftEyeLimit.fRight) ^ _xmm;
    if ( v7 > y || (v7 = this->eyeCtrl.leftEyeLimit.fLeft, y > v7) )
      this->eyeCtrl.fLAngleY = v7;
  }
}

void __fastcall ActorChara::SetEyeControlData(
        ActorChara *this,
        const CharaActionData::Setting::Type::EyeControl *eyeCtrl)
{
  int iSettingType; // eax

  iSettingType = eyeCtrl->iSettingType;
  if ( eyeCtrl->iSettingType )
  {
    if ( iSettingType == 5 )
    {
      this->eyeCtrl.leftEyeLimit = *(CharaBaseStatus::EyeLimitAngle *)&eyeCtrl->fAngleUp;
      this->eyeCtrl.rightEyeLimit = *(CharaBaseStatus::EyeLimitAngle *)&eyeCtrl->fAngleUp;
    }
    else
    {
      this->eyeCtrl.iSettingType = iSettingType;
    }
  }
}

void __fastcall ActorChara::SetGuardActionDeclare(ActorChara *this)
{
  std::bitset<61>::reference *v1; // rax
  std::bitset<61> *v2; // r9
  unsigned __int64 Mypos; // rcx
  std::bitset<61>::reference *v4; // rax
  unsigned __int64 v5; // rdx
  std::bitset<61>::reference result; // [rsp+28h] [rbp-20h] BYREF

  v1 = std::bitset<21>::operator[]((std::bitset<61> *)&this->systemFlag, &result, 0x32ui64);
  Mypos = v1->_Mypos;
  if ( Mypos >= 0x3E )
    std::_Xout_of_range("invalid bitset<N> position");
  v1->_Pbitset[Mypos >> 6]._Array[0] &= ~(1i64 << (v1->_Mypos & 0x3F));
  v4 = std::bitset<21>::operator[](v2, &result, 7ui64);
  v5 = v4->_Mypos;
  if ( v5 >= 0x3E )
    std::_Xout_of_range("invalid bitset<N> position");
  v4->_Pbitset[v5 >> 6]._Array[0] |= 1i64 << (v5 & 0x3F);
}

void __fastcall ActorChara::SetGuardPowerDamage(ActorChara *this, int damage)
{
  BattleSystem::BattleController *v4; // rax
  int v5; // eax
  int value; // ecx
  int v7; // eax
  BattleSystem::BattleController *v8; // [rsp+50h] [rbp+18h]

  v4 = BattleSystem::BattleController::instance;
  if ( !BattleSystem::BattleController::instance )
  {
    v8 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v8);
    BattleSystem::BattleController::instance = v4;
  }
  if ( v4->roundPhase == DIE
    && (damage < 0 || !this->IsInvalidGuardCrashStatus(this) && !this->IsNoGuardCrashMode(this)) )
  {
    this->xGuardPower.value -= damage << 16;
    v5 = this->GetGuardRecoverMax(this);
    value = this->xGuardPower.value;
    if ( value >= 0 )
    {
      v7 = v5 << 16;
      if ( value >= v7 )
        this->xGuardPower.value = v7;
    }
    else
    {
      this->xGuardPower.value = 0;
    }
  }
}

void __fastcall ActorChara::SetGuardRecoverMaxPer(ActorChara *this, int maxPer)
{
  ActorChara_vtbl *v3; // rax
  int v4; // eax
  int v5; // eax

  v3 = this->ActorCharaBase::ActorObject::Actor::__vftable;
  if ( (unsigned int)(maxPer - 1) > 0x62 )
    v4 = ((__int64 (*)(void))v3->GetMaxGuardPower)();
  else
    v4 = (int)(maxPer * ((__int64 (*)(void))v3->GetMaxGuardPower)()) / 100;
  v5 = v4 << 16;
  if ( v5 != this->xGuardRecoverMax.value || this->xGuardPower.value > v5 )
    this->xGuardPower.value = v5;
  this->xGuardRecoverMax.value = v5;
}

void __fastcall ActorChara::SetHeadControlData(
        ActorChara *this,
        const CharaActionData::Setting::Type::HeadControl *headCtrl)
{
  int iSettingType; // eax

  iSettingType = headCtrl->iSettingType;
  if ( headCtrl->iSettingType )
  {
    if ( iSettingType == 5 )
    {
      this->headCtrl.fHeadAngleLimitLow = headCtrl->fAngleLow;
      this->headCtrl.fHeadAngleLimitUp = headCtrl->fAngleUp;
    }
    else
    {
      this->headCtrl.iSettingType = iSettingType;
    }
  }
}

void __fastcall ActorChara::SetKOVoice(ActorChara *this, bool bFinalKO, bool bAkebonoKO)
{
  std::bitset<61>::reference *v4; // rax
  unsigned __int64 Mypos; // r9
  __int64 v6; // rcx
  unsigned __int64 v7; // rax
  std::bitset<61>::reference *v8; // rax
  char v9; // r10
  char v10; // r11
  unsigned __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned __int64 v13; // rax
  __int64 v14; // rbx
  extension::SoundManager *v15; // rax
  bool v16; // cl
  int v17; // eax
  extension::SoundList *v18; // rcx
  std::bitset<61>::reference *v19; // rax
  unsigned __int64 v20; // rdx
  std::bitset<61>::reference result; // [rsp+28h] [rbp-40h] BYREF
  extension::SoundOneshotParameters optionParams; // [rsp+38h] [rbp-30h] BYREF
  extension::SoundManager *v23; // [rsp+70h] [rbp+8h]

  v4 = std::bitset<21>::operator[]((std::bitset<61> *)&this->systemFlag, &result, 0x1Aui64);
  Mypos = v4->_Mypos;
  if ( Mypos >= 0x3E )
    std::_Xout_of_range("invalid bitset<N> position");
  v6 = v4->_Mypos & 0x3F;
  v7 = v4->_Pbitset[Mypos >> 6]._Array[0];
  if ( !_bittest64((const __int64 *)&v7, v6) )
  {
    v8 = std::bitset<21>::operator[]((std::bitset<61> *)&this->systemFlag, &result, 0x19ui64);
    v11 = v8->_Mypos;
    if ( v11 >= 0x3E )
      std::_Xout_of_range("invalid bitset<N> position");
    v12 = v8->_Mypos & 0x3F;
    v13 = v8->_Pbitset[v11 >> 6]._Array[0];
    if ( _bittest64((const __int64 *)&v13, v12) )
    {
      v14 = 169i64;
    }
    else
    {
      v14 = 168i64;
      if ( v9 )
        v14 = 170i64;
    }
    LODWORD(optionParams.expressionVolume) = FLOAT_1_0;
    optionParams.userTag = 0;
    optionParams.audioSelect = -1;
    optionParams.pitchBendCent = 0;
    *(_QWORD *)&optionParams.pitchBendRandomRange = 200i64;
    optionParams.priority = 100;
    if ( this->iCharNo != 49 )
    {
      optionParams.forceReverb = v10 | v9;
      v15 = extension::SoundManager::the_instance;
      if ( !extension::SoundManager::the_instance )
      {
        v23 = (extension::SoundManager *)operator new(0x310ui64);
        extension::SoundManager::SoundManager(v23);
        extension::SoundManager::the_instance = v15;
      }
      v16 = v15->m_rtState.reverb.Attenuation != 0.60000002
         || v15->m_rtState.reverb.DelayTimeMsec != 640
         || v15->m_rtState.reverb.RepeatCount != 8
         || v15->m_rtState.reverb.ReflectionAttenuation != 0.40000001
         || v15->m_rtState.reverb.FluctuationTimeMsec;
      v15->m_rtState.reverb.Dirty = v16;
      v15->m_rtState.reverb.Attenuation = 0.60000002;
      v15->m_rtState.reverb.DelayTimeMsec = 640;
      v15->m_rtState.reverb.RepeatCount = 8;
      *(_QWORD *)&v15->m_rtState.reverb.ReflectionAttenuation = 1053609165i64;
    }
    v17 = this->iPlayerID + 1;
    if ( (unsigned int)v17 <= 8 )
    {
      v18 = (extension::SoundList *)(48i64 * v17 + *(_QWORD *)&AppMain::pApp + 2196904i64);
      if ( v18 )
        extension::SoundList::playSEByName(v18, &s_soundIndex.m_keys[v14], &optionParams);
    }
    v19 = std::bitset<21>::operator[]((std::bitset<61> *)&this->systemFlag, &result, 0x1Aui64);
    v20 = v19->_Mypos;
    if ( v20 >= 0x3E )
      std::_Xout_of_range("invalid bitset<N> position");
    v19->_Pbitset[v20 >> 6]._Array[0] |= 1i64 << (v19->_Mypos & 0x3F);
  }
}

void __fastcall ActorChara::SetMaxClimaxTimeStockBase(ActorChara *this, int extendCount)
{
  if ( extendCount >= 0 )
  {
    if ( extendCount >= 3 )
      extendCount = 2;
  }
  else
  {
    extendCount = 0;
  }
  this->SetMaxClimaxTime(this, ciMaxClimaxGaugeStock[extendCount]);
}

void __fastcall ActorChara::SetMaxGaugeStockExtend(ActorChara *this, int extendCount)
{
  __int64 v3; // rbx

  if ( extendCount >= 0 )
  {
    if ( extendCount >= 3 )
      extendCount = 2;
  }
  else
  {
    extendCount = 0;
  }
  v3 = extendCount;
  this->SetMaxExPower(this, ciMaxPowerGaugeStock[v3]);
  this->SetMaxClimaxTime(this, ciMaxClimaxGaugeStock[v3]);
}

void __fastcall ActorChara::SetPoisonDamage(ActorChara *this, const CharaAttackData::PoisonDamageData *poison)
{
  __int16 iCount; // r8
  __int16 iDamage; // r9
  unsigned __int16 uiOptionFlag; // ax

  iCount = poison->iCount;
  if ( poison->iCount > 0 )
  {
    iDamage = poison->iDamage;
    if ( iDamage )
    {
      if ( this->xVital.value > 0 )
      {
        if ( poison->iIntervalFrame == this->damageInfo.poisonDamage.iIntervalFrame
          && iDamage == this->damageInfo.poisonDamage.iDamage
          && (uiOptionFlag = poison->uiOptionFlag, uiOptionFlag == this->damageInfo.poisonDamage.uiOptionFlag) )
        {
          if ( (uiOptionFlag & 4) != 0 )
            this->damageInfo.poisonDamage.iCount += iCount;
          else
            this->damageInfo.poisonDamage.iCount = iCount;
        }
        else
        {
          this->damageInfo.poisonDamage = *poison;
          this->damageInfo.xPoisonIntervalFrame.value = poison->iIntervalFrame << 16;
          if ( poison->iIntervalFrame <= 0 )
            this->damageInfo.xPoisonIntervalFrame.value = 0x10000;
          this->xPoisonEffectFrame.value = 0;
        }
      }
    }
  }
}

void __fastcall ActorChara::SetReady(ActorChara *this, bool bCrouch, bool bInit, _BOOL8 a4)
{
  LOBYTE(a4) = 1;
  this->ActionChangeReqBase(this, bCrouch ? 2 : 0, 0, a4);
  this->ResetSpeed(this);
  this->SetReadyFlags(this);
  ((void (__fastcall *)(ActorChara *))this->RequestPositionY)(this);
  if ( bInit )
    this->bIgnoreMotionBlend = 1;
}

void __fastcall ActorChara::SetReadyFlags(ActorChara *this)
{
  std::bitset<61>::reference *v2; // rax
  unsigned __int64 Mypos; // rdx
  std::bitset<61>::reference *v4; // rax
  unsigned __int64 v5; // rcx
  std::bitset<61>::reference *v6; // rax
  unsigned __int64 v7; // rdx
  std::bitset<61>::reference result; // [rsp+28h] [rbp-20h] BYREF

  this->ResetDamageFlags(this);
  v2 = std::bitset<21>::operator[]((std::bitset<61> *)&this->systemFlag, &result, 0x31ui64);
  Mypos = v2->_Mypos;
  if ( Mypos >= 0x3E )
    std::_Xout_of_range("invalid bitset<N> position");
  v2->_Pbitset[Mypos >> 6]._Array[0] &= ~(1i64 << (Mypos & 0x3F));
  v4 = std::bitset<21>::operator[]((std::bitset<61> *)&this->systemFlag, &result, 0x38ui64);
  v5 = v4->_Mypos;
  if ( v5 >= 0x3E )
    std::_Xout_of_range("invalid bitset<N> position");
  v4->_Pbitset[v5 >> 6]._Array[0] &= ~(1i64 << (v4->_Mypos & 0x3F));
  v6 = std::bitset<21>::operator[]((std::bitset<61> *)&this->systemFlag, &result, 0x33ui64);
  v7 = v6->_Mypos;
  if ( v7 >= 0x3E )
    std::_Xout_of_range("invalid bitset<N> position");
  v6->_Pbitset[v7 >> 6]._Array[0] &= ~(1i64 << (v7 & 0x3F));
  this->cmdInfo.iValidCount = 0;
}

void __fastcall ActorChara::SetReserveRecoverValue(ActorChara *this, int recover)
{
  BattleSystem::BattleController *v4; // rax
  BattleSystem::BattleController *v5; // [rsp+50h] [rbp+18h]

  v4 = BattleSystem::BattleController::instance;
  if ( !BattleSystem::BattleController::instance )
  {
    v5 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v5);
    BattleSystem::BattleController::instance = v4;
  }
  if ( v4->roundPhase == DIE )
    this->damageInfo.iReserveRecover += recover;
}

void __fastcall ActorChara::SetResultDemoAction(ActorChara *this)
{
  __int64 v2; // rsi
  const CharaBaseStatus *pBaseStat; // rdi
  _BOOL8 v4; // rdx
  int iActionID; // edi
  _BOOL8 v6; // r9
  __int64 v7; // rdx
  const CharaBaseStatus *v8; // rdi
  _BOOL8 v9; // rdx
  _BOOL8 v10; // r8
  int v11; // edi
  _BOOL8 v12; // rdx

  v2 = (unsigned int)this->IsResultDemoSubActor(this) + 231;
  if ( !this->IsResultDemoSubActor(this) && this->IsSpecialWinDirection(this) )
  {
    pBaseStat = this->pBaseStat;
    if ( pBaseStat->CheckFileID(&pBaseStat->CharaFileBase) && pBaseStat->dataHeader.uiCommonActionCount > 0xF0 )
    {
      iActionID = pBaseStat->pCommonAct[240].iActionID;
      if ( iActionID > 0 )
      {
        LOBYTE(v4) = 1;
        if ( iActionID < this->GetActionCount(this, v4) )
        {
          v7 = 240i64;
LABEL_13:
          LOBYTE(v6) = 1;
          this->ActionChangeReqBase(this, v7, 0, v6);
          this->bNextStatCommandCheck = 1;
          return;
        }
      }
    }
  }
  v8 = this->pBaseStat;
  if ( v8->CheckFileID(&v8->CharaFileBase) && (unsigned int)v2 < v8->dataHeader.uiCommonActionCount )
  {
    v11 = v8->pCommonAct[v2].iActionID;
    if ( v11 > 0 )
    {
      LOBYTE(v9) = 1;
      if ( v11 < this->GetActionCount(this, v9) )
      {
        v7 = (unsigned int)v2;
        goto LABEL_13;
      }
    }
  }
  LOBYTE(v10) = 1;
  this->SetReady(this, 0, v10);
  LOBYTE(v12) = 1;
  this->SetResultDemoEnd(this, v12);
}

void __fastcall ActorChara::SetRivalDemoAction(ActorChara *this, int charID)
{
  _BOOL8 v3; // rdx
  int RivalDemoActionID; // edi
  _BOOL8 v5; // r8

  if ( charID < 0 )
  {
    if ( this->pTarget )
      goto $CHECK_READY_ACT;
    charID = MEMORY[0x180];
  }
  RivalDemoActionID = CharaBaseStatus::GetRivalDemoActionID((CharaBaseStatus *)this->pBaseStat, charID);
  if ( RivalDemoActionID > 0 )
  {
    LOBYTE(v3) = 1;
    if ( RivalDemoActionID < this->GetActionCount(this, v3) )
    {
      this->ActionChangeReq(this, RivalDemoActionID, 0);
      this->StateChangeReq(this, 62);
      this->bNextStatCommandCheck = 1;
      return;
    }
  }
$CHECK_READY_ACT:
  if ( this->GetBaseActionID(this) )
  {
    LOBYTE(v5) = 1;
    this->SetReady(this, 0, v5);
  }
}

void __fastcall ActorChara::SetRoundEndAction(ActorChara *this)
{
  BattleSystem::BattleController *v2; // rsi
  BattleSystem::BattleController *v3; // rax
  int iPlayerID; // eax
  const CharaBaseStatus *pBaseStat; // r14
  _BOOL8 v6; // rdx
  int v7; // edi
  int iActionID; // ebp
  Actor *pTarget; // rax
  int iCharNo; // edx
  _BOOL8 v11; // rdx
  int RivalRoundWinActionID; // edi
  const CharaBaseStatus *v13; // rsi
  _BOOL8 v14; // rdx
  int v15; // esi
  _BOOL8 v16; // r9
  std::bitset<61>::reference *v17; // rax
  unsigned __int64 Mypos; // rdx
  std::bitset<61>::reference result; // [rsp+28h] [rbp-30h] BYREF
  BattleSystem::BattleController *v20; // [rsp+60h] [rbp+8h]

  if ( !this->IsReady(this) )
    return;
  v2 = BattleSystem::BattleController::instance;
  if ( !BattleSystem::BattleController::instance )
  {
    v20 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v20);
    v2 = v3;
    BattleSystem::BattleController::instance = v3;
  }
  iPlayerID = this->iPlayerID;
  if ( iPlayerID )
  {
    if ( iPlayerID != 1 || v2->battleInfo.roundWinnerID != GUARD_CRASH )
      goto LABEL_24;
  }
  else if ( v2->battleInfo.roundWinnerID != COUNTER_HIT )
  {
LABEL_24:
    if ( v2->battleInfo.roundWinnerID == REVERSAL )
      v7 = 235;
    else
      v7 = (v2->battleInfo.roundFinishType == REVERSAL) + 233;
    goto LABEL_27;
  }
  if ( !this->IsSpecialWinDirection(this) )
  {
    pTarget = this->pTarget;
    if ( pTarget )
      iCharNo = pTarget->iCharNo;
    else
      iCharNo = -1;
    RivalRoundWinActionID = CharaBaseStatus::GetRivalRoundWinActionID((CharaBaseStatus *)this->pBaseStat, iCharNo);
    if ( RivalRoundWinActionID > 0 )
    {
      LOBYTE(v11) = 1;
      if ( RivalRoundWinActionID < this->GetActionCount(this, v11) )
      {
        this->ActionChangeReq(this, RivalRoundWinActionID, 0);
        this->StateChangeReq(this, 63);
        this->bNextStatCommandCheck = 1;
        return;
      }
    }
    goto LABEL_21;
  }
  pBaseStat = this->pBaseStat;
  if ( !pBaseStat->CheckFileID(&pBaseStat->CharaFileBase)
    || (v7 = 239, pBaseStat->dataHeader.uiCommonActionCount <= 0xEF)
    || (iActionID = pBaseStat->pCommonAct[239].iActionID, iActionID <= 0)
    || (LOBYTE(v6) = 1, iActionID >= this->GetActionCount(this, v6)) )
  {
LABEL_21:
    v7 = 229;
    if ( (v2->playerInfo[this->iPlayerID].iStraightSetCount & 1) != 0
      && (int)CharaBaseStatus::GetCommonActionID((CharaBaseStatus *)this->pBaseStat, 230) > 0 )
    {
      v7 = 230;
    }
  }
LABEL_27:
  v13 = this->pBaseStat;
  if ( v13->CheckFileID(&v13->CharaFileBase)
    && v7 < v13->dataHeader.uiCommonActionCount
    && (v15 = v13->pCommonAct[v7].iActionID, v15 > 0)
    && (LOBYTE(v14) = 1, v15 < this->GetActionCount(this, v14)) )
  {
    LOBYTE(v16) = 1;
    this->ActionChangeReqBase(this, v7, 0, v16);
    this->bNextStatCommandCheck = 1;
  }
  else
  {
    v17 = std::bitset<21>::operator[]((std::bitset<61> *)&this->systemFlag, &result, 0x35ui64);
    Mypos = v17->_Mypos;
    if ( Mypos >= 0x3E )
      std::_Xout_of_range("invalid bitset<N> position");
    v17->_Pbitset[Mypos >> 6]._Array[0] |= 1i64 << (Mypos & 0x3F);
  }
}

void __fastcall ActorChara::SetRoundStartEntryAction(ActorChara *this)
{
  Actor *pTarget; // rax
  int iCharNo; // edx
  int RivalRoundStartAcitonID; // eax
  _BOOL8 v5; // rdx
  int v6; // edi
  const CharaBaseStatus *pBaseStat; // rdi
  _BOOL8 v8; // rdx
  int iActionID; // edi
  _BOOL8 v10; // r9
  _BOOL8 v11; // r8

  pTarget = this->pTarget;
  if ( pTarget )
    iCharNo = pTarget->iCharNo;
  else
    iCharNo = -1;
  RivalRoundStartAcitonID = CharaBaseStatus::GetRivalRoundStartAcitonID((CharaBaseStatus *)this->pBaseStat, iCharNo);
  if ( RivalRoundStartAcitonID <= 0
    || (v6 = RivalRoundStartAcitonID + 1, LOBYTE(v5) = 1, RivalRoundStartAcitonID + 1 >= this->GetActionCount(this, v5)) )
  {
    pBaseStat = this->pBaseStat;
    if ( pBaseStat->CheckFileID(&pBaseStat->CharaFileBase)
      && pBaseStat->dataHeader.uiCommonActionCount > 0xED
      && (iActionID = pBaseStat->pCommonAct[237].iActionID, iActionID > 0)
      && (LOBYTE(v8) = 1, iActionID < this->GetActionCount(this, v8)) )
    {
      LOBYTE(v10) = 1;
      this->ActionChangeReqBase(this, 237, 0, v10);
      this->bNextStatCommandCheck = 1;
    }
    else if ( this->GetBaseActionID(this) )
    {
      LOBYTE(v11) = 1;
      this->SetReady(this, 0, v11);
    }
  }
  else
  {
    this->ActionChangeReq(this, v6, 0);
    this->StateChangeReq(this, 61);
    this->bNextStatCommandCheck = 1;
  }
}

void __fastcall ActorChara::SetRoundStartWaitAction(ActorChara *this)
{
  Actor *pTarget; // rax
  int iCharNo; // edx
  _BOOL8 v4; // rdx
  int RivalRoundStartAcitonID; // edi
  const CharaBaseStatus *pBaseStat; // rdi
  _BOOL8 v7; // rdx
  int iActionID; // edi
  _BOOL8 v9; // r9
  _BOOL8 v10; // r8

  pTarget = this->pTarget;
  if ( pTarget )
    iCharNo = pTarget->iCharNo;
  else
    iCharNo = -1;
  RivalRoundStartAcitonID = CharaBaseStatus::GetRivalRoundStartAcitonID((CharaBaseStatus *)this->pBaseStat, iCharNo);
  if ( RivalRoundStartAcitonID > 0 )
  {
    LOBYTE(v4) = 1;
    if ( RivalRoundStartAcitonID < this->GetActionCount(this, v4) )
    {
      this->ActionChangeReq(this, RivalRoundStartAcitonID, 0);
      this->StateChangeReq(this, 61);
LABEL_7:
      this->bNextStatCommandCheck = 1;
LABEL_8:
      this->ResetSpeed(this);
      this->SetReadyFlags(this);
      ((void (__fastcall *)(ActorChara *))this->RequestPositionY)(this);
      return;
    }
  }
  pBaseStat = this->pBaseStat;
  if ( pBaseStat->CheckFileID(&pBaseStat->CharaFileBase) && pBaseStat->dataHeader.uiCommonActionCount > 0xEC )
  {
    iActionID = pBaseStat->pCommonAct[236].iActionID;
    if ( iActionID > 0 )
    {
      LOBYTE(v7) = 1;
      if ( iActionID < this->GetActionCount(this, v7) )
      {
        LOBYTE(v9) = 1;
        this->ActionChangeReqBase(this, 236, 0, v9);
        goto LABEL_7;
      }
    }
  }
  if ( !this->GetBaseActionID(this) )
    goto LABEL_8;
  LOBYTE(v10) = 1;
  this->SetReady(this, 0, v10);
}

void __fastcall ActorChara::SetShotFireData(ActorChara *this, const CharaActionData::Shot::Type::Fire *fireData)
{
  ActorShot::CreateActorShot(fireData, this, this, this);
}

void __fastcall ActorChara::SetSpecialEffectSettingData(
        ActorChara *this,
        const CharaActionData::Setting::Type::SpEffect *spEffect)
{
  int v3; // ebx
  int iBlurSetting; // ecx
  int iBlurFlag; // eax
  __int16 iShadowPass; // ax
  __int64 iPlayerID; // rcx
  int iCameraLight; // edx
  int iCAngle; // er11
  __int64 v11; // rax
  char *v12; // r10
  OGLModel *pModel; // rcx

  v3 = 0;
  iBlurSetting = spEffect->iBlurSetting;
  if ( !spEffect->iBlurSetting )
  {
    this->iBlurEffectCount = 0;
LABEL_6:
    this->iBlurFrameFlag = 15;
    goto LABEL_7;
  }
  if ( (unsigned int)(iBlurSetting - 1) <= 3 )
  {
    this->iBlurEffectCount = iBlurSetting + 1;
    iBlurFlag = spEffect->iBlurFlag;
    this->iBlurFrameFlag = iBlurFlag;
    if ( !iBlurFlag )
      goto LABEL_6;
  }
LABEL_7:
  iShadowPass = spEffect->iShadowPass;
  if ( iShadowPass == 1 )
  {
    if ( this->iPlayerID <= 1u )
      this->pActSys->iShadowPassSetting[this->iPlayerID] = 0;
  }
  else if ( iShadowPass > 1 )
  {
    iPlayerID = this->iPlayerID;
    if ( (unsigned int)iPlayerID <= 1 )
      this->pActSys->iShadowPassSetting[iPlayerID] = iShadowPass;
  }
  iCameraLight = spEffect->iCameraLight;
  iCAngle = this->iCAngle;
  v11 = this->iPlayerID;
  if ( iCameraLight > 0 && (unsigned int)v11 <= 3 )
  {
    v12 = (char *)this->pActSys + 3 * v11;
    if ( (char)iCameraLight >= 6 )
    {
      LOBYTE(iCameraLight) = iCameraLight - 4;
      LOBYTE(v3) = iCAngle == 0;
      iCAngle = v3;
    }
    if ( v12[241048] != (char)iCameraLight - 1 || v12[241049] != iCAngle )
    {
      v12[241049] = iCAngle;
      v12[241048] = iCameraLight - 1;
      v12[241050] = 1;
    }
  }
  pModel = this->pModel;
  if ( pModel )
  {
    if ( spEffect->iRimLight == 1 )
    {
      pModel->m_uiModeFlg &= ~0x800u;
    }
    else if ( spEffect->iRimLight == 2 )
    {
      pModel->m_uiModeFlg |= 0x800u;
    }
  }
}

void __fastcall ActorChara::SetStandUpVoice(ActorChara *this)
{
  BattleSystem::BattleController *v2; // r9
  BattleSystem::BattleController *v3; // rax
  std::bitset<61>::reference *v4; // rax
  __int64 v5; // r9
  unsigned __int64 Mypos; // rdx
  __int64 v7; // rcx
  unsigned __int64 v8; // rax
  std::bitset<61>::reference *v9; // rax
  unsigned __int64 v10; // rdx
  std::bitset<62>::reference *v11; // rax
  std::bitset<61>::reference *v12; // rax
  int v13; // er9
  unsigned __int64 v14; // rdx
  __int64 v15; // rbx
  char *v16; // rax
  int v17; // eax
  __int64 v18; // rdx
  extension::SoundList *v19; // rcx
  std::bitset<61>::reference result; // [rsp+28h] [rbp-31h] BYREF
  extension::SoundOneshotParameters v21; // [rsp+38h] [rbp-21h] BYREF
  std::function<float __cdecl(void)> v22; // [rsp+58h] [rbp-1h] BYREF
  extension::SoundObject o; // [rsp+C8h] [rbp+6Fh] BYREF

  v2 = BattleSystem::BattleController::instance;
  if ( !BattleSystem::BattleController::instance )
  {
    o.m_runtimeEffector.m_ptr = (extension::exsound_detail::RuntimeEffector *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController((BattleSystem::BattleController *)o.m_runtimeEffector.m_ptr);
    v2 = v3;
    BattleSystem::BattleController::instance = v3;
  }
  if ( v2->roundPhase == DIE && this->damageInfo.iComboDamage >= 150 )
  {
    v4 = std::bitset<21>::operator[]((std::bitset<61> *)&this->systemFlag, &result, 0x1Dui64);
    Mypos = v4->_Mypos;
    if ( Mypos >= 0x3E )
      std::_Xout_of_range("invalid bitset<N> position");
    v7 = v4->_Mypos & 0x3F;
    v8 = v4->_Pbitset[Mypos >> 6]._Array[0];
    if ( _bittest64((const __int64 *)&v8, v7) )
    {
      v9 = std::bitset<21>::operator[](
             (std::bitset<61> *)&this->systemFlag,
             (std::bitset<61>::reference *)&v21,
             0x1Cui64);
      v10 = v9->_Mypos;
      if ( v10 >= 0x3E )
        std::_Xout_of_range("invalid bitset<N> position");
      v9->_Pbitset[v10 >> 6]._Array[0] &= ~(1i64 << (v9->_Mypos & 0x3F));
    }
    if ( (RandomMT::getRand32((RandomMT *)(v5 + 252596)) & 4) != 0 )
    {
      v15 = 164i64;
      if ( this->damageInfo.iComboDamage >= 250 )
        v15 = 165i64;
    }
    else
    {
      v11 = (std::bitset<62>::reference *)std::bitset<21>::operator[](
                                            (std::bitset<61> *)&this->systemFlag,
                                            (std::bitset<61>::reference *)&v21,
                                            0x1Cui64);
      if ( std::bitset<62>::reference::operator bool(v11) || (BattleSystem::BattleController::GetRand32() & 4) == 0 )
        return;
      v12 = std::bitset<21>::operator[](
              (std::bitset<61> *)&this->systemFlag,
              (std::bitset<61>::reference *)&v21,
              0x1Cui64);
      v14 = v12->_Mypos;
      if ( v14 >= 0x3E )
        std::_Xout_of_range("invalid bitset<N> position");
      v12->_Pbitset[v14 >> 6]._Array[0] |= 1i64 << (v12->_Mypos & 0x3F);
      v15 = (v13 >= 250) + 166i64;
    }
    LODWORD(v21.expressionVolume) = FLOAT_1_0;
    *(_QWORD *)&v21.userTag = 0xFFFFFFFF00000000ui64;
    v21.pitchBendCent = 0;
    *(_QWORD *)&v21.pitchBendRandomRange = 200i64;
    v21.priority = 3;
    v16 = (char *)operator new(0x60ui64);
    *(_QWORD *)v16 = 1i64;
    *((_WORD *)v16 + 4) = 1;
    *(_QWORD *)(v16 + 12) = 0i64;
    *(_QWORD *)(v16 + 20) = 0i64;
    *((_DWORD *)v16 + 7) = 1120403456;
    *((_QWORD *)v16 + 11) = 0i64;
    o.m_runtimeEffector.m_ptr = (extension::exsound_detail::RuntimeEffector *)v16;
    v22._Mystorage._Ptrs[0] = (std::_Func_base<float> *)&std::_Func_impl<std::_Binder<std::_Unforced,float (Actor::*)(void)const,ActorChara * const>,std::allocator<int>,float,>::`vftable';
    v22._Mystorage._Ptrs[1] = (std::_Func_base<float> *) Actor::`vcall'{1536,{flat}};
    v22._Mystorage._Ptrs[2] = (std::_Func_base<float> *)this;
    v22._Mystorage._Ptrs[7] = (std::_Func_base<float> *)&v22;
    extension::SoundObject::setPanPositionFunc(&o, &v22);
    v17 = this->iPlayerID + 1;
    v18 = *(_QWORD *)&AppMain::pApp;
    if ( (unsigned int)v17 <= 8 )
    {
      v19 = (extension::SoundList *)(*(_QWORD *)&AppMain::pApp + 48i64 * v17 + 2196904);
      if ( v19 )
        extension::SoundList::playSEByName(v19, &o, &s_soundIndex.m_keys[v15], &v21);
    }
    extension::RefCountablePtr<extension::exsound_detail::RuntimeEffector>::~RefCountablePtr<extension::exsound_detail::RuntimeEffector>(
      &o.m_runtimeEffector,
      v18);
  }
}

void __fastcall ActorChara::SetStartExPower(ActorChara *this, Fix32 exPow)
{
  int value; // er9
  int v4; // eax
  int v5; // ecx

  value = this->xStartExPower.value;
  if ( exPow.value >= 0 )
  {
    v5 = this->xMaxExPower.value;
    v4 = exPow.value;
    if ( exPow.value > v5 )
      v4 = v5;
  }
  else
  {
    v4 = 0;
  }
  this->xStartExPower.value = v4;
  if ( value != exPow.value )
    this->ResetExPower(this);
}

void __fastcall ActorChara::SetStunPowerDamage(ActorChara *this, int damage)
{
  BattleSystem::BattleController *v4; // rax
  int v5; // eax
  int value; // ecx
  int v7; // eax
  BattleSystem::BattleController *v8; // [rsp+50h] [rbp+18h]

  v4 = BattleSystem::BattleController::instance;
  if ( !BattleSystem::BattleController::instance )
  {
    v8 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v8);
    BattleSystem::BattleController::instance = v4;
  }
  if ( v4->roundPhase == DIE && (damage < 0 || !this->IsInvalidStunStatus(this) && !this->IsNoStunMode(this)) )
  {
    this->xStunPower.value -= damage << 16;
    v5 = this->GetStunRecoverMax(this);
    value = this->xStunPower.value;
    if ( value >= 0 )
    {
      v7 = v5 << 16;
      if ( value >= v7 )
        this->xStunPower.value = v7;
    }
    else
    {
      this->xStunPower.value = 0;
    }
  }
}

void __fastcall ActorChara::SetStunRecoverMaxPer(ActorChara *this, int maxPer)
{
  ActorChara_vtbl *v3; // rax
  int v4; // eax
  int v5; // eax

  v3 = this->ActorCharaBase::ActorObject::Actor::__vftable;
  if ( (unsigned int)(maxPer - 1) > 0x62 )
    v4 = ((__int64 (*)(void))v3->GetMaxStunPower)();
  else
    v4 = (int)(maxPer * ((__int64 (*)(void))v3->GetMaxStunPower)()) / 100;
  v5 = v4 << 16;
  if ( v5 != this->xStunRecoverMax.value || this->xStunPower.value > v5 )
    this->xStunPower.value = v5;
  this->xStunRecoverMax.value = v5;
}

void __fastcall ActorChara::SetTalkSettingData(ActorChara *this, const CharaActionData::Setting::Type::Talk *talk)
{
  const CharaActionData *pAct; // r10
  ActionSystem::RivalTalkData *p_rivalTalkData; // r8
  int iPlayerID; // er11
  __int16 iNextAction; // ax

  if ( this->iActorStat == 62 )
  {
    pAct = this->pAct;
    p_rivalTalkData = &this->pActSys->rivalTalkData;
    iPlayerID = this->iPlayerID;
    if ( talk->iTextShow == 1 )
    {
      *(_QWORD *)&this->pActSys->rivalTalkData.iTextID = -1i64;
    }
    else if ( talk->iTextShow == 2 )
    {
      this->pActSys->rivalTalkData.iTextID = talk->iTextID;
      p_rivalTalkData->iTextID2 = talk->iTextID2;
      p_rivalTalkData->pActDat = pAct;
    }
    switch ( talk->iWindowShow )
    {
      case 1:
        p_rivalTalkData->iWindowActive = 0;
        break;
      case 2:
        p_rivalTalkData->iWindowActive = 1 << iPlayerID;
        break;
      case 3:
        p_rivalTalkData->iWindowActive = 3;
        break;
    }
    iNextAction = talk->iNextAction;
    if ( iNextAction > 0 )
      this->iRivalTalkNextActionNo = iNextAction;
  }
}

void __fastcall ActorChara::SetThrowAttach(ActorChara *this, const CharaActionData::ThrowAttach *throwAttach)
{
  ActorChara *v4; // rax
  _BOOL8 v5; // rdx

  v4 = this->GetThrowLockTarget(this);
  if ( v4 )
  {
    if ( this->pActSys->iThrowChildPlayerID == this->iPlayerID )
    {
      v4->ResetThrowAttach(v4, 0);
      this->throwAttach.iAtkBoneID = throwAttach->iAtkBoneID;
      this->throwAttach.iPsvBoneID = throwAttach->iPsvBoneID;
      this->throwAttach.iOptionFlag = throwAttach->iOptionFlag;
      this->throwAttach.bNextReset = 0;
    }
    else
    {
      LOBYTE(v5) = 1;
      v4->ResetThrowAttach(v4, v5);
      *(_QWORD *)&this->throwAttach.reserveAttach.iAtkBoneID = *(_QWORD *)&throwAttach->iAtkBoneID;
      this->throwAttach.reserveAttach.iOptionFlag = throwAttach->iOptionFlag;
    }
  }
}

void __fastcall ActorChara::SetThrowEscapePermit(ActorChara *this)
{
  int iActorStat; // er8
  std::bitset<61>::reference *v2; // rax
  unsigned __int64 Mypos; // rdx
  std::bitset<61>::reference result; // [rsp+28h] [rbp-20h] BYREF

  iActorStat = this->iActorStat;
  switch ( iActorStat )
  {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
    case 21:
    case 23:
    case 24:
    case 25:
      goto $LN3;
    default:
      if ( iActorStat == 36 && this->iActFrame <= 0 )
      {
$LN3:
        v2 = std::bitset<21>::operator[]((std::bitset<61> *)&this->systemFlag, &result, 0x23ui64);
        Mypos = v2->_Mypos;
        if ( Mypos >= 0x3E )
          std::_Xout_of_range("invalid bitset<N> position");
        v2->_Pbitset[Mypos >> 6]._Array[0] |= 1i64 << (Mypos & 0x3F);
      }
      return;
  }
}

void __fastcall ActorChara::SetVital(ActorChara *this, Fix32 vital)
{
  if ( vital.value >= 0 )
  {
    if ( SHIWORD(vital.value) <= this->GetMaxVital(this) )
      this->xVital = vital;
    else
      this->xVital.value = this->GetMaxVital(this) << 16;
  }
  else
  {
    this->xVital.value = 0;
  }
}

void __fastcall ActorChara::SetVitalDamage(ActorChara *this, int damage)
{
  BattleSystem::BattleController *v4; // rax
  int v5; // eax
  int value; // ecx
  int v7; // eax
  BattleSystem::BattleController *v8; // [rsp+50h] [rbp+18h]

  v4 = BattleSystem::BattleController::instance;
  if ( !BattleSystem::BattleController::instance )
  {
    v8 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v8);
    BattleSystem::BattleController::instance = v4;
  }
  if ( v4->roundPhase == DIE )
  {
    this->xVital.value -= damage << 16;
    v5 = this->GetMaxVital(this);
    value = this->xVital.value;
    if ( value >= 0 )
    {
      v7 = v5 << 16;
      if ( value >= v7 )
        this->xVital.value = v7;
    }
    else
    {
      this->xVital.value = 0;
    }
  }
}

void __fastcall ActorChara::SetupAction(ActorChara *this, bool bResultDemo, int subType)
{
  const CharaBaseStatus *pBaseStat; // rdi
  _BOOL8 v7; // rdx
  int iActionID; // edi
  _BOOL8 v9; // r9

  pBaseStat = this->pBaseStat;
  if ( pBaseStat->CheckFileID(&pBaseStat->CharaFileBase)
    && pBaseStat->dataHeader.uiCommonActionCount > 0xEE
    && (iActionID = pBaseStat->pCommonAct[238].iActionID, iActionID > 0)
    && (LOBYTE(v7) = 1, iActionID < this->GetActionCount(this, v7)) )
  {
    LOBYTE(v9) = 1;
    this->ActionChangeReqBase(this, 238, 0, v9);
    this->bNextStatCommandCheck = 1;
  }
  else
  {
    LOBYTE(v7) = 1;
    this->SetEndSetupFlag(this, v7);
  }
  this->SetResultDemoActor(this, bResultDemo, subType);
}

void __fastcall ActorChara::StateChanged(ActorChara *this, _BOOL8 a2)
{
  int iActorStat; // eax
  int v4; // ecx
  bool v5; // sf
  int iDrinkCount; // eax

  iActorStat = this->iActorStat;
  this->bNextStatCommandCheck = 0;
  if ( iActorStat == 62 )
  {
    this->vAngle.y = 35.0;
    LOBYTE(a2) = 1;
  }
  else
  {
    if ( iActorStat == 65 )
      goto LABEL_6;
    this->vAngle.y = 0.0;
    a2 = 0i64;
  }
  this->SetDisableBlendSave(this, a2);
LABEL_6:
  v4 = this->iActorStat;
  if ( (unsigned int)(v4 - 35) > 6 )
    this->iActorStatBase = v4;
  if ( v4 != 38 )
  {
    *(_QWORD *)&this->iExEffectLoopCount = 0i64;
    this->xExEffectFadeFrame.value = 0;
  }
  if ( this->iCharNo == 29 && (v4 == 32 || v4 == 47) )
  {
    v5 = this->charaUniqueParam.iDrinkCount - 2 < 0;
    this->charaUniqueParam.iDrinkCount -= 2;
    iDrinkCount = this->charaUniqueParam.iDrinkCount;
    if ( v5 )
      iDrinkCount = 0;
    this->charaUniqueParam.iDrinkCount = iDrinkCount;
  }
  if ( (unsigned int)(v4 - 27) <= 1 )
    this->xThrowMutekiCount.value = 0;
  if ( v4 == 65 )
    this->pModel->m_SecondaryForce[this->pModel->m_iSecondaryForceCount++].uiOpt = 136;
  *(_QWORD *)&this->cmdInfo.actionReserve.iPriTag = 0i64;
  this->cmdInfo.actionReserve.pCmdSet = 0i64;
}

void __fastcall ActorChara::UpdateFaceAngle(ActorChara *this)
{
  ActorChara *v2; // r13
  int v3; // ebx
  int v4; // eax
  __int64 v5; // rdi
  __int64 v6; // r12
  unsigned __int8 v7; // r9
  __int64 v8; // r15
  __int128 *BoneRot; // rax
  unsigned __int8 v10; // r9
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  const CharaBaseStatus *pBaseStat; // rax
  float v14; // xmm0_4
  ActorChara_vtbl *v15; // rax
  __int64 iActNo; // rdx
  float v17; // xmm9_4
  float v18; // xmm10_4
  int v19; // eax
  bool v20; // al
  int iSettingType; // er13
  float v22; // xmm0_4
  float v23; // xmm6_4
  OGLMatrix *m_pBindPose; // rbx
  float v25; // xmm7_4
  float v26; // xmm0_4
  float v27; // xmm6_4
  float v28; // xmm7_4
  unsigned __int8 v29; // r9
  OGLModel *v30; // rcx
  float v31; // xmm6_4
  float v32; // xmm0_4
  OGLModel *v33; // rcx
  OGLModel *pModel; // rcx
  OGLModel *v35; // rcx
  int v36; // eax
  OGLModel *v37; // rdx
  _OGLModelBone *m_pBoneInfo; // rax
  __int64 v39; // rcx
  OGLModel *v40; // rdx
  _OGLModelBone *v41; // rax
  __int64 v42; // rcx
  OGLModel *v43; // rdx
  _OGLModelBone *v44; // rax
  __int64 v45; // rcx
  unsigned __int8 v46; // r9
  OGLModel *v47; // rcx
  OGLModel *v48; // rcx
  OGLModel *v49; // rcx
  OGLModel *v50; // rdx
  _OGLModelBone *v51; // rax
  __int64 v52; // rcx
  OGLModel *v53; // rdx
  _OGLModelBone *v54; // rax
  __int64 v55; // rcx
  __int64 v56; // xmm0_8
  ActorChara_vtbl *v57; // rax
  OGLModel *v58; // rdx
  _OGLModelBone *v59; // rax
  __int64 v60; // rcx
  unsigned __int8 v61; // r9
  OGLModel *v62; // rcx
  OGLModel *v63; // rcx
  OGLModel *v64; // rcx
  OGLModel *v65; // rdx
  _OGLModelBone *v66; // rax
  __int64 v67; // rcx
  OGLModel *v68; // rcx
  OGLModel *v69; // rdx
  _OGLModelBone *v70; // rax
  __int64 v71; // rcx
  OGLModel *v72; // rcx
  float fBlend; // [rsp+38h] [rbp-C8h]
  float fBlenda; // [rsp+38h] [rbp-C8h]
  OGLVec3 axis; // [rsp+40h] [rbp-C0h] BYREF
  OGLVec3 vTargetPos; // [rsp+50h] [rbp-B0h] BYREF
  OGLMatrix mtx; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v78; // [rsp+A0h] [rbp-60h]
  __int128 v79; // [rsp+B0h] [rbp-50h]
  __int128 v80; // [rsp+C0h] [rbp-40h]
  int v81; // [rsp+1A0h] [rbp+A0h]
  int v82; // [rsp+1A8h] [rbp+A8h]
  ActorChara *v83; // [rsp+1B0h] [rbp+B0h]

  v83 = this->GetTargetActor(this);
  v2 = v83;
  v81 = ((__int64 (__fastcall *)(ActorChara *, __int64))this->GetBoneIndex)(this, 11i64);
  v3 = v81;
  v4 = ((__int64 (__fastcall *)(ActorChara *, __int64))this->GetBoneIndex)(this, 12i64);
  v5 = v4;
  v82 = v4;
  v6 = ((int (__fastcall *)(ActorChara *, __int64))this->GetBoneIndex)(this, 96i64);
  v8 = ((int (__fastcall *)(ActorChara *, __int64))this->GetBoneIndex)(this, 97i64);
  if ( this->pModel
    && v83
    && v83->pModel
    && this->pBaseStat
    && !this->IsResultDemoActor(this)
    && !this->IsSetupState(this) )
  {
    *(_QWORD *)&vTargetPos.x = 0i64;
    vTargetPos.z = 0.0;
    memset(&mtx, 0, sizeof(mtx));
    if ( v81 < 0 )
      return;
    BoneRot = (__int128 *)OGLModel::getBoneRot(this->pModel, v81);
    v11 = BoneRot[1];
    v78 = *BoneRot;
    v12 = BoneRot[2];
    pBaseStat = this->pBaseStat;
    v79 = v11;
    v80 = v12;
    if ( (pBaseStat->status.iFlag & 4) == 0 )
    {
      if ( (int)v5 < 0 )
        return;
      v14 = v83->headCtrl.vHeadPos.x - this->headCtrl.vHeadPos.x;
      v15 = this->ActorCharaBase::ActorObject::Actor::__vftable;
      iActNo = (unsigned int)this->iActNo;
      v17 = v83->headCtrl.vHeadPos.y - this->headCtrl.vHeadPos.y;
      *(_QWORD *)&axis.x = 0i64;
      axis.z = 0.0;
      vTargetPos.x = 0.0;
      vTargetPos.y = v17;
      v18 = fmaxf(10.0, COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v14) & _xmm));
      vTargetPos.z = v18;
      v19 = v15->GetActionSubCategoryID(this, iActNo, 0);
      v20 = this->iActorStat > 25 || v19 && v19 != 3;
      if ( this->headCtrl.iSettingType == 2 && this->headCtrl.fHeadAnglePrev == 0.0 )
        this->headCtrl.iSettingType = 4;
      iSettingType = this->headCtrl.iSettingType;
      if ( iSettingType == 4 || !iSettingType && v20 )
      {
        pModel = this->pModel;
        if ( pModel->m_pFigure )
          OGLModel::setTrans(pModel, 0i64, v81, v10);
        v35 = this->pModel;
        if ( v35->m_pFigure )
          OGLModel::setTrans(v35, 0i64, v5, v10);
        this->headCtrl.fHeadAngle = 0.0;
      }
      else
      {
        LODWORD(axis.x) = v78;
        LODWORD(axis.y) = v79;
        LODWORD(axis.z) = v80;
        v22 = sqrtf(
                (float)((float)(*(float *)&v79 * *(float *)&v79) + (float)(*(float *)&v78 * *(float *)&v78))
              + (float)(*(float *)&v80 * *(float *)&v80));
        if ( v22 != 0.0 )
        {
          axis.x = *(float *)&v78 / v22;
          axis.y = *(float *)&v79 / v22;
          axis.z = *(float *)&v80 / v22;
        }
        if ( iSettingType == 2 )
        {
          v23 = 0.0;
        }
        else
        {
          m_pBindPose = this->pModel->m_pFigure->m_pBindPose;
          v25 = (float)(atan2f(v17, v18) * 180.0) / 3.1415927;
          v26 = atan2f(m_pBindPose[v5].m[6], m_pBindPose[v5].m[10]);
          LODWORD(v27) = LODWORD(this->headCtrl.fHeadAngleLimitLow) ^ _xmm;
          v28 = v25 - (float)((float)(v26 * 180.0) / 3.1415927);
          if ( v27 <= v28 )
            v27 = fminf(this->headCtrl.fHeadAngleLimitUp, v28);
          v3 = v81;
          LODWORD(v5) = v82;
          v23 = (float)(v27 * 3.1415927) / 180.0;
        }
        if ( iSettingType == 3 )
          this->headCtrl.iSettingType = 1;
        else
          v23 = (float)((float)(v23 - this->headCtrl.fHeadAnglePrev) * (float)(this->GetActionSystemSpeed(this) * 0.12))
              + this->headCtrl.fHeadAnglePrev;
        this->headCtrl.fHeadAngle = v23;
        *(_QWORD *)mtx.m = 1065353216i64;
        mtx.m[4] = 0.0;
        *(_QWORD *)&mtx.m[8] = 0i64;
        *(_QWORD *)&mtx.m[12] = 0i64;
        *(_QWORD *)&mtx.m[5] = 1065353216i64;
        *(_QWORD *)&mtx.m[2] = 0i64;
        *(_QWORD *)&mtx.m[10] = 1065353216i64;
        mtx.m[14] = 0.0;
        mtx.m[7] = 0.0;
        mtx.m[15] = 1.0;
        OGLMatrix::rotateV(&mtx, &axis, v23 * 0.30000001);
        v30 = this->pModel;
        if ( v30->m_pFigure )
          OGLModel::setTrans(v30, &mtx, v5, v29);
        v31 = this->headCtrl.fHeadAngle * 0.69999999;
        sinf(v31);
        v32 = cosf(v31);
        v33 = this->pModel;
        mtx.m[7] = 0.0;
        mtx.m[6] = v31;
        mtx.m[1] = 0.0;
        mtx.m[4] = 0.0;
        mtx.m[8] = 0.0;
        mtx.m[11] = 0.0;
        mtx.m[14] = 0.0;
        mtx.m[5] = v32;
        LODWORD(mtx.m[9]) = LODWORD(v31) ^ _xmm;
        mtx.m[10] = v32;
        *(_QWORD *)&mtx.m[2] = 0i64;
        *(_QWORD *)&mtx.m[12] = 0i64;
        mtx.m[0] = 1.0;
        mtx.m[15] = 1.0;
        if ( v33->m_pFigure )
          OGLModel::setTrans(v33, &mtx, v3, v10);
      }
      v2 = v83;
    }
    if ( (this->pBaseStat->status.iFlag & 8) == 0 && (int)v8 >= 0 && (int)v6 >= 0 )
    {
      if ( this->eyeCtrl.bControlMode )
        goto LABEL_57;
      v36 = this->eyeCtrl.iSettingType;
      if ( v36 != 4
        && (v36 || !this->IsDamaged(this) && !this->IsStunDamaged(this) && !this->IsKO(this) && this->iActorStat < 61) )
      {
        if ( this->eyeCtrl.iSettingType == 2 )
        {
          v37 = this->pModel;
          if ( v37->m_pFigure )
          {
            m_pBoneInfo = v37->m_pBoneInfo;
            v39 = v6;
            *(_QWORD *)&m_pBoneInfo[v39].boneTarget.qPrevRot.x = 0i64;
            m_pBoneInfo[v39].boneTarget.qPrevRot.z = 0.0;
            m_pBoneInfo[v39].boneTarget.qPrevRot.w = 1.0;
            v37->m_pBoneInfo[v39].boneTarget.bUseFlg = 0;
          }
          v40 = this->pModel;
          if ( v40->m_pFigure )
          {
            v41 = v40->m_pBoneInfo;
            v42 = v8;
            *(_QWORD *)&v41[v42].boneTarget.qPrevRot.x = 0i64;
            v41[v42].boneTarget.qPrevRot.z = 0.0;
            v41[v42].boneTarget.qPrevRot.w = 1.0;
            v40->m_pBoneInfo[v42].boneTarget.bUseFlg = 0;
          }
        }
        if ( !this->eyeCtrl.bControlMode )
        {
          v56 = *(_QWORD *)&v2->headCtrl.vHeadPos.x;
          vTargetPos.z = v2->headCtrl.vHeadPos.z;
          v57 = this->ActorCharaBase::ActorObject::Actor::__vftable;
          *(_QWORD *)&vTargetPos.x = v56;
          fBlend = v57->GetActionSystemSpeed(this) * 0.30000001;
          OGLModel::setTransTarget(
            this->pModel,
            &vTargetPos,
            v6,
            this->eyeCtrl.leftEyeLimit.fUp,
            this->eyeCtrl.leftEyeLimit.fLow,
            this->eyeCtrl.leftEyeLimit.fLeft,
            this->eyeCtrl.leftEyeLimit.fRight,
            fBlend);
LABEL_71:
          if ( this->eyeCtrl.bControlMode )
          {
            v58 = this->pModel;
            if ( v58->m_pFigure )
            {
              v59 = v58->m_pBoneInfo;
              v60 = v8;
              *(_QWORD *)&v59[v60].boneTarget.qPrevRot.x = 0i64;
              v59[v60].boneTarget.qPrevRot.z = 0.0;
              v59[v60].boneTarget.qPrevRot.w = 1.0;
              v58->m_pBoneInfo[v60].boneTarget.bUseFlg = 0;
            }
            OGLQuat::setRotateEuler(
              &this->eyeCtrl.qREyeQuat,
              (float)(this->eyeCtrl.fRAngleX * 3.1415927) / 180.0,
              (float)(this->eyeCtrl.fRAngleY * 3.1415927) / 180.0,
              0.0);
            OGLMatrix::rotationQuaternion(&mtx, &this->eyeCtrl.qREyeQuat);
            v62 = this->pModel;
            if ( v62->m_pFigure )
              OGLModel::setTrans(v62, &mtx, v8, v61);
          }
          else
          {
            fBlenda = this->GetActionSystemSpeed(this) * 0.30000001;
            OGLModel::setTransTarget(
              this->pModel,
              &vTargetPos,
              v8,
              this->eyeCtrl.rightEyeLimit.fUp,
              this->eyeCtrl.rightEyeLimit.fLow,
              this->eyeCtrl.rightEyeLimit.fLeft,
              this->eyeCtrl.rightEyeLimit.fRight,
              fBlenda);
          }
          return;
        }
LABEL_57:
        v43 = this->pModel;
        if ( v43->m_pFigure )
        {
          v44 = v43->m_pBoneInfo;
          v45 = v6;
          *(_QWORD *)&v44[v45].boneTarget.qPrevRot.x = 0i64;
          v44[v45].boneTarget.qPrevRot.z = 0.0;
          v44[v45].boneTarget.qPrevRot.w = 1.0;
          v43->m_pBoneInfo[v45].boneTarget.bUseFlg = 0;
        }
        OGLQuat::setRotateEuler(
          &this->eyeCtrl.qLEyeQuat,
          (float)(this->eyeCtrl.fLAngleX * 3.1415927) / 180.0,
          (float)(this->eyeCtrl.fLAngleY * 3.1415927) / 180.0,
          0.0);
        OGLMatrix::rotationQuaternion(&mtx, &this->eyeCtrl.qLEyeQuat);
        v47 = this->pModel;
        if ( v47->m_pFigure )
          OGLModel::setTrans(v47, &mtx, v6, v46);
        goto LABEL_71;
      }
      v48 = this->pModel;
      if ( v48->m_pFigure )
        OGLModel::setTrans(v48, 0i64, v6, v10);
      v49 = this->pModel;
      if ( v49->m_pFigure )
        OGLModel::setTrans(v49, 0i64, v8, v10);
      *(_QWORD *)&this->eyeCtrl.qLEyeQuat.x = 0i64;
      this->eyeCtrl.qLEyeQuat.z = 0.0;
      *(_QWORD *)&this->eyeCtrl.qLEyeQuat.w = 1065353216i64;
      *(_QWORD *)&this->eyeCtrl.qREyeQuat.y = 0i64;
      this->eyeCtrl.qREyeQuat.w = 1.0;
      v50 = this->pModel;
      if ( v50->m_pFigure )
      {
        v51 = v50->m_pBoneInfo;
        v52 = v6;
        *(_QWORD *)&v51[v52].boneTarget.qPrevRot.x = 0i64;
        v51[v52].boneTarget.qPrevRot.z = 0.0;
        v51[v52].boneTarget.qPrevRot.w = 1.0;
        v50->m_pBoneInfo[v52].boneTarget.bUseFlg = 0;
      }
      v53 = this->pModel;
      if ( v53->m_pFigure )
      {
        v54 = v53->m_pBoneInfo;
        v55 = v8;
        *(_QWORD *)&v54[v55].boneTarget.qPrevRot.x = 0i64;
        v54[v55].boneTarget.qPrevRot.z = 0.0;
        v54[v55].boneTarget.qPrevRot.w = 1.0;
        v53->m_pBoneInfo[v55].boneTarget.bUseFlg = 0;
      }
    }
  }
  else
  {
    v63 = this->pModel;
    if ( v63 )
    {
      if ( v81 >= 0 && v63->m_pFigure )
        OGLModel::setTrans(v63, 0i64, v81, v7);
      if ( (int)v5 >= 0 )
      {
        v64 = this->pModel;
        if ( v64->m_pFigure )
          OGLModel::setTrans(v64, 0i64, v5, v7);
      }
      if ( (int)v6 >= 0 )
      {
        v65 = this->pModel;
        if ( v65->m_pFigure )
        {
          v66 = v65->m_pBoneInfo;
          v67 = v6;
          *(_QWORD *)&v66[v67].boneTarget.qPrevRot.x = 0i64;
          v66[v67].boneTarget.qPrevRot.z = 0.0;
          v66[v67].boneTarget.qPrevRot.w = 1.0;
          v65->m_pBoneInfo[v67].boneTarget.bUseFlg = 0;
        }
        v68 = this->pModel;
        if ( v68->m_pFigure )
          OGLModel::setTrans(v68, 0i64, v6, v7);
      }
      if ( (int)v8 >= 0 )
      {
        v69 = this->pModel;
        if ( v69->m_pFigure )
        {
          v70 = v69->m_pBoneInfo;
          v71 = v8;
          *(_QWORD *)&v70[v71].boneTarget.qPrevRot.x = 0i64;
          v70[v71].boneTarget.qPrevRot.z = 0.0;
          v70[v71].boneTarget.qPrevRot.w = 1.0;
          v69->m_pBoneInfo[v71].boneTarget.bUseFlg = 0;
        }
        v72 = this->pModel;
        if ( v72->m_pFigure )
          OGLModel::setTrans(v72, 0i64, v8, v7);
      }
    }
    *(_QWORD *)&this->eyeCtrl.qLEyeQuat.x = 0i64;
    this->eyeCtrl.qLEyeQuat.z = 0.0;
    *(_QWORD *)&this->eyeCtrl.qLEyeQuat.w = 1065353216i64;
    *(_QWORD *)&this->eyeCtrl.qREyeQuat.y = 0i64;
    this->eyeCtrl.qREyeQuat.w = 1.0;
    this->headCtrl.fHeadAngle = 0.0;
  }
}

void __fastcall ActorChara::UpdateMotionMove(ActorChara *this)
{
  ActorChara *v2; // rax
  _BOOL8 v3; // r9
  ActorChara *v4; // rdi
  _BOOL8 v5; // r9
  __int64 iAtkBoneID; // rax
  ActorChara_vtbl *v7; // r10
  __int64 v8; // rax
  __int64 v9; // xmm0_8
  float z; // eax
  __int64 iPsvBoneID; // rax
  ActorChara_vtbl *v12; // r10
  __int64 v13; // rax
  __int64 v14; // xmm0_8
  float v15; // eax
  float v16; // xmm5_4
  float v17; // xmm4_4
  float v18; // xmm1_4
  float v19; // xmm2_4
  unsigned int v20; // xmm3_4
  OGLModel *pModel; // rax
  float v22; // xmm5_4
  float v23; // xmm0_4
  __int64 *v24; // rax
  float x; // xmm3_4
  float v26; // xmm2_4
  float y; // xmm4_4
  float v28; // xmm0_4
  float v29; // xmm4_4
  float v30; // xmm3_4
  float v31; // xmm2_4
  float v32; // xmm1_4
  float v33; // xmm3_4
  float v34; // xmm2_4
  float v35; // xmm1_4
  unsigned int v36; // xmm3_4
  unsigned int v37; // xmm2_4
  OGLModel *v38; // rax
  float v39; // xmm1_4
  float v40; // xmm2_4
  float v41; // xmm1_4
  __int64 v42; // [rsp+20h] [rbp-59h] BYREF
  float v43; // [rsp+28h] [rbp-51h]
  __int64 v44; // [rsp+30h] [rbp-49h] BYREF
  float v45; // [rsp+38h] [rbp-41h]
  __int128 v46; // [rsp+40h] [rbp-39h]
  __int128 v47; // [rsp+50h] [rbp-29h]
  __int128 v48; // [rsp+60h] [rbp-19h]
  __int128 v49; // [rsp+70h] [rbp-9h]
  OGLVec3 v50; // [rsp+80h] [rbp+7h] BYREF
  __m128i si128; // [rsp+90h] [rbp+17h]
  int v52; // [rsp+A0h] [rbp+27h]
  int v53; // [rsp+A4h] [rbp+2Bh]
  int v54; // [rsp+A8h] [rbp+2Fh]

  v2 = this->GetThrowLockTarget(this);
  v4 = v2;
  if ( v2
    && this->pActSys->iThrowChildPlayerID == this->iPlayerID
    && (this->throwAttach.iAtkBoneID || this->throwAttach.iPsvBoneID) )
  {
    if ( this->throwAttach.iAtkBoneID <= 0 )
    {
      v9 = *(_QWORD *)&v2->vBasePos.x;
      z = v2->vBasePos.z;
    }
    else
    {
      Actor::WaitUpdatePosutre(v2);
      if ( (this->throwAttach.iOptionFlag & 2) != 0 || !v4->iCAngle )
        v5 = 0i64;
      else
        LOBYTE(v5) = 1;
      iAtkBoneID = this->throwAttach.iAtkBoneID;
      v7 = v4->ActorCharaBase::ActorObject::Actor::__vftable;
      si128 = _mm_load_si128((const __m128i *)&_xmm);
      v52 = 8;
      v53 = 9;
      v54 = 10;
      v8 = (__int64)v7->GetBonePosition(v4, (OGLVec3 *)&v44, (CharaBone::NAME_INDEX)si128.m128i_i32[iAtkBoneID], v5);
      v9 = *(_QWORD *)v8;
      z = *(float *)(v8 + 8);
    }
    v43 = z;
    iPsvBoneID = this->throwAttach.iPsvBoneID;
    v42 = v9;
    if ( (int)iPsvBoneID <= 0 )
    {
      v14 = *(_QWORD *)&this->vBasePos.x;
      v15 = this->vBasePos.z;
    }
    else
    {
      if ( (this->throwAttach.iOptionFlag & 4) != 0 || !this->iCAngle )
        v3 = 0i64;
      else
        LOBYTE(v3) = 1;
      v12 = this->ActorCharaBase::ActorObject::Actor::__vftable;
      si128 = _mm_load_si128((const __m128i *)&_xmm);
      v52 = 8;
      v53 = 9;
      v54 = 10;
      v13 = (__int64)v12->GetBonePosition(this, &v50, (CharaBone::NAME_INDEX)si128.m128i_i32[iPsvBoneID], v3);
      v14 = *(_QWORD *)v13;
      v15 = *(float *)(v13 + 8);
    }
    v44 = v14;
    v16 = *((float *)&v42 + 1) - *((float *)&v14 + 1);
    v17 = *(float *)&v42 - *(float *)&v14;
    v45 = v15;
    v49 = 0ui64;
    v18 = (float)(*((float *)&v42 + 1) - *((float *)&v14 + 1)) + this->vPos.y;
    v46 = 0ui64;
    v19 = (float)(*(float *)&v42 - *(float *)&v14) + this->vPos.x;
    *(float *)&v20 = (float)(v43 - v15) + this->vPos.z;
    v47 = 0ui64;
    v48 = 0ui64;
    pModel = this->pModel;
    *((float *)&v49 + 1) = v18;
    LODWORD(v46) = 1065353216;
    *(_OWORD *)pModel->m_mWorld.m = v46;
    DWORD1(v47) = 1065353216;
    pModel->m_vPosition.y = v18;
    *(_OWORD *)&pModel->m_mWorld.m[4] = v47;
    DWORD2(v48) = 1065353216;
    *(_OWORD *)&pModel->m_mWorld.m[8] = v48;
    *(float *)&v49 = v19;
    *((_QWORD *)&v49 + 1) = v20 | 0x3F80000000000000i64;
    *(_OWORD *)&pModel->m_mWorld.m[12] = v49;
    pModel->m_bPostureChange = 1;
    pModel->m_vPosition.x = v19;
    pModel->m_vPosition.z = *(float *)&v20;
    if ( (this->iActFlg1 & 0x40) == 0 )
    {
      v22 = v16 + this->vPos.y;
      v23 = this->vPos.z + 0.0;
      this->vPos.x = v17 + this->vPos.x;
      this->vPos.y = v22;
      this->vPos.z = v23;
    }
    if ( (this->throwAttach.iOptionFlag & 1) == 0 )
    {
      v24 = (__int64 *)this->GetMotionMovePos(this, &v50);
      x = this->vPos.x;
      v26 = this->vBasePos.z + 0.0;
      y = this->vPos.y;
      v44 = *v24;
      v28 = (float)(this->vPos.z - v26) + this->vBasePos.z;
      v29 = (float)(y - (float)(*((float *)&v44 + 1) + this->vBasePos.y)) + this->vBasePos.y;
      this->vBasePos.x = (float)(x - (float)(*(float *)&v44 + this->vBasePos.x)) + this->vBasePos.x;
      this->vBasePos.z = v28;
      this->vBasePos.y = v29;
    }
  }
  else if ( (this->iActFlg1 & 0x240) != 0 || (this->iMoveOption & 4) != 0 )
  {
    this->CheckBasePositionAnchor(this);
    this->GetMotionMovePosOpt(this, (OGLVec3 *)&v42);
    v30 = *(float *)&v42 + this->vBasePos.x;
    v31 = *((float *)&v42 + 1) + this->vBasePos.y;
    v32 = (float)(v43 + this->vBasePos.z) + this->vOff.z;
    v49 = 0ui64;
    v33 = v30 + this->vOff.x;
    v34 = v31 + this->vOff.y;
    v35 = v32 + this->vBaseOff.z;
    v46 = 0ui64;
    *(float *)&v36 = v33 + this->vBaseOff.x;
    v47 = 0ui64;
    *(float *)&v37 = v34 + this->vBaseOff.y;
    v48 = 0ui64;
    v38 = this->pModel;
    *((float *)&v49 + 2) = v35;
    LODWORD(v46) = 1065353216;
    *(_OWORD *)v38->m_mWorld.m = v46;
    DWORD1(v47) = 1065353216;
    v38->m_vPosition.z = v35;
    *(_OWORD *)&v38->m_mWorld.m[4] = v47;
    DWORD2(v48) = 1065353216;
    *(_OWORD *)&v38->m_mWorld.m[8] = v48;
    HIDWORD(v49) = 1065353216;
    *(_QWORD *)&v49 = __PAIR64__(v37, v36);
    *(_OWORD *)&v38->m_mWorld.m[12] = v49;
    v38->m_bPostureChange = 1;
    LODWORD(v38->m_vPosition.x) = v36;
    LODWORD(v38->m_vPosition.y) = v37;
    if ( (this->iActFlg1 & 0x200) != 0 )
    {
      v39 = *((float *)&v42 + 1);
      if ( *((float *)&v42 + 1) <= 0.0000099999997 && *((float *)&v42 + 1) >= -0.0000099999997 )
        v39 = 0.0;
      v40 = *(float *)&v42;
      if ( *(float *)&v42 <= 0.000001 && *(float *)&v42 >= -0.000001 )
        v40 = 0.0;
      this->vPos.x = v40 + this->vBasePos.x;
      this->vPos.y = v39 + this->vBasePos.y;
      this->vPos.z = this->vBasePos.z + 0.0;
    }
    else if ( (this->iMoveOption & 4) != 0 )
    {
      v41 = *((float *)&v42 + 1);
      this->vColOff.x = *(float *)&v42 + this->vColOffBase.x;
      this->vColOff.y = v41 + this->vColOffBase.y;
      this->vColOff.z = this->vColOffBase.z + 0.0;
    }
  }
}

void __fastcall ActorChara::UpdatePartsMotion(ActorChara *this, float fBlendRate)
{
  OGLModel *pModel; // rax
  OGLMotion *v5; // rcx
  OGLModel *v6; // rax
  OGLModel *v7; // r9
  OGLModel *v8; // r9
  float v9; // xmm1_4
  __int64 v10; // rcx
  OGLMotion *v11; // rdx
  float *v12; // r10
  float *p_m_fTotalFrame; // rcx
  float v14; // xmm0_4
  OGLModel *v15; // rax

  pModel = this->pModel;
  v5 = pModel->m_pMotion[4];
  if ( v5 && (int)v5->m_usMotionCount > 0 )
  {
    if ( (this->iActFlg2 & 0x40000) == 0 && (pModel->m_pExternalMotion || pModel->m_iCurrentMotion > 0) )
    {
      pModel->m_uiUseMotionFlg |= 0x10u;
      v7 = this->pModel;
      if ( v7->m_pMotion[4] )
      {
        v7->m_iMotionIndex[4] = 0;
        v7->m_iMotionIndex[4] = 0;
        v7->m_bMotionEnd = 0;
      }
      v8 = this->pModel;
      v9 = *(float *)&FLOAT_1_0;
      if ( v8->m_pMotion[4] )
      {
        v10 = v8->m_iMotionIndex[4];
        v8->m_fMotionFrame[4] = 0.0;
        v11 = v8->m_pMotion[4];
        if ( !v11->m_ppMotionData
          || (int)v10 < 0
          || (int)v10 >= (signed int)v11->m_usMotionCount
          || (v12 = &v11->m_ppMotionData[v10]->m_fTotalFrame) == 0i64
          || *v12 <= 0.0 )
        {
          if ( v11->m_ppMotionData
            && (int)v10 >= 0
            && (int)v10 < (signed int)v11->m_usMotionCount
            && (p_m_fTotalFrame = &v11->m_ppMotionData[v10]->m_fTotalFrame) != 0i64 )
          {
            v14 = *p_m_fTotalFrame;
          }
          else
          {
            v14 = 0.0;
          }
          v8->m_fMotionFrame[4] = v14 - 1.0;
        }
      }
      v15 = this->pModel;
      if ( v15->m_pMotion[4] )
      {
        if ( fBlendRate <= 1.0 )
          v9 = fmaxf(0.0, fBlendRate);
        v15->m_fMotionBlend[4] = v9;
      }
    }
    else
    {
      pModel->m_uiUseMotionFlg &= ~0x10u;
      v6 = this->pModel;
      if ( v6->m_pMotion[4] )
        v6->m_fMotionBlend[4] = 0.0;
    }
  }
}

void __fastcall ActorChara::UpdatePosition(ActorChara *this)
{
  float v2; // xmm4_4
  float v3; // xmm5_4
  float v4; // xmm4_4
  float v5; // xmm5_4
  _BOOL8 v6; // r8
  float v7; // xmm1_4
  OGLModel *pModel; // r11
  float v9; // xmm5_4
  float v10; // xmm4_4
  float z; // xmm6_4
  float v12; // xmm4_4
  float v13; // xmm5_4
  __int128 v14; // xmm1
  OGLVec3 result; // [rsp+20h] [rbp-60h] BYREF
  __int128 v16; // [rsp+40h] [rbp-40h]
  __int128 v17; // [rsp+50h] [rbp-30h]
  __int128 v18; // [rsp+60h] [rbp-20h]

  if ( !this->pModel || this->baseAnime.iMotionID < 0 )
    return;
  if ( ((__int64 (*)(void))this->GetThrowLockTarget)()
    && this->pActSys->iThrowChildPlayerID == this->iPlayerID
    && (this->throwAttach.iAtkBoneID || this->throwAttach.iPsvBoneID) )
  {
    if ( (this->throwAttach.iOptionFlag & 1) != 0 )
    {
      v4 = this->vPos.x + 0.0;
      v5 = this->vPos.y + 0.0;
      goto LABEL_17;
    }
    this->GetMotionMovePos(this, &result);
    v2 = result.x + 0.0;
    v3 = result.y + 0.0;
  }
  else
  {
    if ( this->IsAirDamaged(this) )
    {
      LOBYTE(v6) = this->iCAngle != 0;
      this->GetCameraPosition(this, &result, v6, 0);
      if ( result.y <= 0.0 )
      {
        v7 = this->vPos.y - result.y;
        this->vBasePos.y = this->vBasePos.y - result.y;
        this->vPos.y = v7;
      }
    }
    if ( (this->iActFlg1 & 0x240) == 0 )
    {
      v4 = this->vPos.x + 0.0;
      v5 = this->vPos.y + 0.0;
      goto LABEL_17;
    }
    this->GetMotionMovePosOpt(this, &result);
    v2 = result.x + 0.0;
    v3 = result.y + 0.0;
  }
  v4 = v2 + this->vBasePos.x;
  v5 = v3 + this->vBasePos.y;
LABEL_17:
  pModel = this->pModel;
  v9 = (float)(v5 + this->vOff.y) + this->vBaseOff.y;
  v10 = (float)(v4 + this->vOff.x) + this->vBaseOff.x;
  z = pModel->m_vPosition.z;
  if ( this->charaOffsetParam.iCharaID == this->iCharNo )
  {
    ActorChara::CharaOffsetParam::GetOffset(&this->charaOffsetParam, &result, this->iCAngle);
    v10 = v12 + result.x;
    v9 = v13 + result.y;
    z = z + result.z;
  }
  pModel->m_vPosition.z = z;
  LODWORD(v16) = 0;
  HIDWORD(v17) = 0;
  *((float *)&v18 + 2) = z;
  *(_OWORD *)pModel->m_mWorld.m = 0x3F800000ui64;
  DWORD1(v16) = 1065353216;
  *(_OWORD *)&pModel->m_mWorld.m[4] = (unsigned __int64)v16;
  *(_QWORD *)&v17 = 0i64;
  DWORD2(v17) = 1065353216;
  *(_QWORD *)&v18 = __PAIR64__(LODWORD(v9), LODWORD(v10));
  HIDWORD(v18) = 1065353216;
  v14 = v18;
  *(_OWORD *)&pModel->m_mWorld.m[8] = v17;
  pModel->m_bPostureChange = 1;
  *(_OWORD *)&pModel->m_mWorld.m[12] = v14;
  pModel->m_vPosition.x = v10;
  pModel->m_vPosition.y = v9;
}

std::_Func_base<float> *__fastcall std::_Func_impl<std::_Binder<std::_Unforced,float (Actor::*)(void)const,ActorChara * const>,std::allocator<int>,float,>::_Move(
        std::_Func_impl<std::_Binder<std::_Unforced,float (__cdecl Actor::*)(void)const ,ActorChara * const>,std::allocator<int>,float> *this,
        void *_Where)
{
  if ( _Where )
  {
    *(_QWORD *)_Where = &std::_Func_impl<std::_Binder<std::_Unforced,float (Actor::*)(void)const,ActorChara * const>,std::allocator<int>,float,>::`vftable';
    *(std::_Compressed_pair<std::allocator<int>,std::_Binder<std::_Unforced,float (__cdecl Actor::*)(void)const ,ActorChara * const>,1> *)((char *)_Where + 8) = this->_Mypair;
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

void ***__fastcall std::_Func_impl<std::_Binder<std::_Unforced,float (Actor::*)(void)const,ActorChara * const>,std::allocator<int>,float,>::_Target_type(
        std::_Func_impl<std::_Binder<std::_Unforced,float (__cdecl Actor::*)(void)const ,ActorChara * const>,std::allocator<int>,float> *this)
{
  return &std::_Binder<std::_Unforced,float (Actor::*)(void)const,ActorChara * const> `RTTI Type Descriptor';
}

void __fastcall ActorChara::_autoEffectSet(ActorChara *this)
{
  int v2; // eax
  extension::RefCountableWeakSupportBase::WeakProxy *v3; // rcx
  __int64 v4; // r14
  int v5; // esi
  ActionSystem *v6; // rax
  std::bitset<61>::reference *v7; // rax
  unsigned __int64 Mypos; // rdx
  extension::exsound_detail::SoundNameRegistry::NameBuffer *m_ptr; // rbx
  extension::exsound_detail::SoundNameRegistry::NameBuffer *v10; // rcx
  char *v11; // rbx
  float SoundPanPosition; // xmm0_4
  char v13; // al
  extension::SoundList *v14; // rbx
  ActionSystem *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rbx
  int *p_iOptionFlag; // r14
  int priority; // [rsp+28h] [rbp-69h]
  int prioritya; // [rsp+28h] [rbp-69h]
  extension::SoundHashKey hash; // [rsp+48h] [rbp-49h] BYREF
  extension::SoundHashKey name; // [rsp+50h] [rbp-41h] BYREF
  extension::SoundObject o; // [rsp+58h] [rbp-39h] BYREF
  __int64 v24; // [rsp+60h] [rbp-31h]
  extension::SoundSource v25; // [rsp+68h] [rbp-29h] BYREF
  std::bitset<61>::reference result; // [rsp+98h] [rbp+7h] BYREF
  CharaActionData::Effect::Type::Set setData; // [rsp+A8h] [rbp+17h] BYREF

  v24 = -2i64;
  if ( this->bActionNewFrame && !this->IsActionDataChanged(this) )
  {
    v2 = this->GetBaseActionID(this);
    if ( v2 >= 0 )
    {
      setData.iActFileID = 1;
      v4 = *(_QWORD *)&AppMain::pApp;
      v5 = 0;
      switch ( v2 )
      {
        case 154:
        case 155:
        case 156:
        case 157:
        case 177:
        case 178:
        case 179:
        case 180:
        case 181:
        case 182:
          if ( this->iActFrame == 1 && this->bActionNewFrame )
          {
            v6 = this->GetActionSystem(this);
            CameraControl::RequestQuakeCamera(&v6->cameraCtrl, 40, 7);
            v7 = std::bitset<21>::operator[]((std::bitset<61> *)&this->systemFlag, &result, 0x10ui64);
            Mypos = v7->_Mypos;
            if ( Mypos >= 0x3E )
              std::_Xout_of_range("invalid bitset<N> position");
            v3 = (extension::RefCountableWeakSupportBase::WeakProxy *)(Mypos >> 6);
            v7->_Pbitset[Mypos >> 6]._Array[0] |= 1i64 << (v7->_Mypos & 0x3F);
          }
          goto $LN49_6;
        case 158:
        case 159:
        case 160:
        case 161:
        case 162:
        case 163:
        case 165:
        case 166:
        case 204:
        case 205:
        case 206:
        case 207:
$LN49_6:
          if ( this->iActFrame != 1 || !this->bActionNewFrame )
            goto LABEL_35;
          m_ptr = s_soundIndex.m_keys[143].m_sharedBuffer.m_ptr;
          hash.m_sharedBuffer.m_ptr = s_soundIndex.m_keys[143].m_sharedBuffer.m_ptr;
          if ( s_soundIndex.m_keys[143].m_sharedBuffer.m_ptr )
          {
            v3 = s_soundIndex.m_keys[143].m_sharedBuffer.m_ptr->m_refCount.m_ptr;
            _InterlockedExchangeAdd64((volatile signed __int64 *)&v3->m_sharedCount, 1ui64);
            m_ptr = hash.m_sharedBuffer.m_ptr;
          }
          ActionSystem::CheckDependSound((ActionSystem *)v3, this->pBaseStat, &hash, this, 0, 1.0, 0);
          *(_QWORD *)&setData.fPosX = 0i64;
          setData.fPosZ = 0.0;
          *(_DWORD *)&setData.iTermFlag = 458752;
          setData.iPosBase = 11;
          setData.iOptionFlag = 24576;
          ActorEffect::CreateActorEffect(&setData, this, this, this, prioritya);
          if ( !m_ptr
            || _InterlockedExchangeAdd64(
                 (volatile signed __int64 *)&m_ptr->m_refCount.m_ptr->m_sharedCount,
                 0xFFFFFFFFFFFFFFFFui64) != 1 )
          {
            goto LABEL_35;
          }
          v10 = hash.m_sharedBuffer.m_ptr;
          break;
        case 171:
        case 173:
          if ( this->iActFrame != 1 || !this->bActionNewFrame )
            goto LABEL_35;
          name.m_sharedBuffer.m_ptr = s_soundIndex.m_keys[151].m_sharedBuffer.m_ptr;
          if ( s_soundIndex.m_keys[151].m_sharedBuffer.m_ptr )
            _InterlockedExchangeAdd64(
              (volatile signed __int64 *)&s_soundIndex.m_keys[151].m_sharedBuffer.m_ptr->m_refCount.m_ptr->m_sharedCount,
              1ui64);
          v11 = (char *)operator new(0x60ui64);
          *(_QWORD *)v11 = 1i64;
          *((_WORD *)v11 + 4) = 1;
          *(_QWORD *)(v11 + 12) = 0i64;
          *(_QWORD *)(v11 + 20) = 0i64;
          *((_DWORD *)v11 + 7) = 1120403456;
          *((_QWORD *)v11 + 11) = 0i64;
          o.m_runtimeEffector.m_ptr = (extension::exsound_detail::RuntimeEffector *)v11;
          SoundPanPosition = Actor::GetSoundPanPosition(this);
          if ( v11[8] || (v13 = 0, *((float *)v11 + 6) != SoundPanPosition) )
            v13 = 1;
          v11[8] = v13;
          *((float *)v11 + 6) = SoundPanPosition;
          v11[9] = 0;
          v14 = (extension::SoundList *)(v4 + 2196904);
          if ( v4 != -2196904 )
          {
            extension::SoundList::createSoundSource(
              v14,
              &v25,
              &name,
              *(int *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[2][244]);
            extension::SoundList::playSEImpl(
              v14,
              &v25,
              (const extension::SoundOneshotParameters *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[2][232],
              &o);
            if ( v25.m_sound.m_body.m_ptr
              && _InterlockedExchangeAdd64(
                   (volatile signed __int64 *)&v25.m_sound.m_body.m_ptr->m_refCount.m_ptr->m_sharedCount,
                   0xFFFFFFFFFFFFFFFFui64) == 1 )
            {
              ((void (__fastcall *)(extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body *, __int64))v25.m_sound.m_body.m_ptr->~RefCountableWeakSupportBase)(
                v25.m_sound.m_body.m_ptr,
                1i64);
            }
            if ( v25.m_elementDef.m_ptr
              && _InterlockedExchangeAdd64((volatile signed __int64 *)v25.m_elementDef.m_ptr, 0xFFFFFFFFFFFFFFFFui64) == 1 )
            {
              extension::exsound_detail::SoundBankElementDefinition::~SoundBankElementDefinition((extension::exsound_detail::SoundBankElementDefinition *)v25.m_elementDef.m_ptr);
              operator delete((void *)v25.m_elementDef.m_ptr, 0x68ui64);
            }
          }
          setData.fPosX = this->pBaseStat->status.fBoneScale * -2.5;
          *(_QWORD *)&setData.fPosY = 0i64;
          *(_DWORD *)&setData.iTermFlag = 0x80000;
          setData.iPosBase = 14;
          setData.iOptionFlag = 0x4000;
          ActorEffect::CreateActorEffect(&setData, this, this, this, priority);
          v15 = this->GetActionSystem(this);
          CameraControl::RequestQuakeCamera(&v15->cameraCtrl, 40, 4);
          extension::RefCountablePtr<extension::exsound_detail::RuntimeEffector>::~RefCountablePtr<extension::exsound_detail::RuntimeEffector>(
            &o.m_runtimeEffector,
            v16);
          if ( !name.m_sharedBuffer.m_ptr
            || _InterlockedExchangeAdd64(
                 (volatile signed __int64 *)&name.m_sharedBuffer.m_ptr->m_refCount.m_ptr->m_sharedCount,
                 0xFFFFFFFFFFFFFFFFui64) != 1 )
          {
            goto LABEL_35;
          }
          v10 = name.m_sharedBuffer.m_ptr;
          break;
        default:
          goto LABEL_35;
      }
      ((void (__fastcall *)(extension::exsound_detail::SoundNameRegistry::NameBuffer *, __int64))v10->~RefCountableWeakSupportBase)(
        v10,
        1i64);
LABEL_35:
      if ( !this->IsActionDataChanged(this)
        && !this->baseAnime.iMotionFileID
        && !this->bPrevMotionNotUnique
        && this->extraEffectData.iDataCount > 0 )
      {
        v17 = 0i64;
        p_iOptionFlag = &this->extraEffectData.effectDat[0].iOptionFlag;
        do
        {
          if ( (*p_iOptionFlag & 0x800000) != 0 && !this->extraEffectData.bCreated[v17] )
          {
            ActorEffect::CreateActorEffect(
              (const CharaActionData::Effect::Type::Set *)((char *)this->extraEffectData.effectDat + 16 * v5 + 8 * v5),
              this,
              this,
              this,
              priority);
            this->extraEffectData.bCreated[v17] = 1;
          }
          ++v5;
          ++v17;
          p_iOptionFlag += 6;
        }
        while ( v5 < this->extraEffectData.iDataCount );
      }
    }
  }
}

bool __fastcall ActorChara::_branchIsCommandCountOver(ActorChara *this, float param)
{
  return this->cmdInfo.iValidCount >= (int)param;
}

bool __fastcall ActorChara::_branchIsCommandCountUnder(ActorChara *this, float param)
{
  return this->cmdInfo.iValidCount <= (int)param;
}

unsigned __int8 __fastcall ActorChara::_branchIsShotAlive(ActorChara *this, float param)
{
  unsigned int v2; // eax

  if ( (unsigned int)(int)param > 0xB )
    return 0;
  v2 = this->bsAliveShotID._Array[(unsigned __int64)(int)param >> 5];
  return _bittest((const int *)&v2, (int)param & 0x1F);
}

unsigned __int8 __fastcall ActorChara::_branchIsShotAttackGuard(ActorChara *this, float param)
{
  unsigned int v2; // eax

  if ( (unsigned int)(int)param > 0xB )
    return 0;
  v2 = this->bsAttackGuardShotID._Array[(unsigned __int64)(int)param >> 5];
  return _bittest((const int *)&v2, (int)param & 0x1F);
}

unsigned __int8 __fastcall ActorChara::_branchIsShotAttackHit(ActorChara *this, float param)
{
  unsigned int v2; // eax

  if ( (unsigned int)(int)param > 0xB )
    return 0;
  v2 = this->bsAttackHitShotID._Array[(unsigned __int64)(int)param >> 5];
  return _bittest((const int *)&v2, (int)param & 0x1F);
}

char __fastcall ActorChara::_branchIsShotAttackHitOrGuard(ActorChara *this, float param)
{
  int v2; // eax
  char v3; // dl
  unsigned __int64 v4; // r8
  int v5; // er9

  v2 = (int)param;
  if ( (unsigned int)(int)param > 0xB )
    return 0;
  v3 = 1;
  v4 = (unsigned __int64)v2 >> 5;
  v5 = 1 << (v2 & 0x1F);
  if ( (v5 & this->bsAttackHitShotID._Array[v4]) == 0 && (v5 & this->bsAttackGuardShotID._Array[v4]) == 0 )
    return 0;
  return v3;
}

unsigned __int8 __fastcall ActorChara::_branchIsShotFlag1(ActorChara *this, float param)
{
  unsigned int v2; // eax

  if ( (unsigned int)(int)param > 0xB )
    return 0;
  v2 = this->bsBranchFlgShotID[(unsigned __int64)(int)param >> 5]._Array[0];
  return _bittest((const int *)&v2, (int)param & 0x1F);
}

unsigned __int8 __fastcall ActorChara::_branchIsShotFlag2(ActorChara *this, float param)
{
  unsigned int v2; // eax

  if ( (unsigned int)(int)param > 0xB )
    return 0;
  v2 = this->bsBranchFlgShotID[((unsigned __int64)(int)param >> 5) + 1]._Array[0];
  return _bittest((const int *)&v2, (int)param & 0x1F);
}

unsigned __int8 __fastcall ActorChara::_branchIsShotFlag3(ActorChara *this, float param)
{
  unsigned int v2; // eax

  if ( (unsigned int)(int)param > 0xB )
    return 0;
  v2 = this->bsBranchFlgShotID[((unsigned __int64)(int)param >> 5) + 2]._Array[0];
  return _bittest((const int *)&v2, (int)param & 0x1F);
}

unsigned __int8 __fastcall ActorChara::_branchIsShotFlag4(ActorChara *this, float param)
{
  unsigned int v2; // eax

  if ( (unsigned int)(int)param > 0xB )
    return 0;
  v2 = this->bsBranchFlgShotID[((unsigned __int64)(int)param >> 5) + 3]._Array[0];
  return _bittest((const int *)&v2, (int)param & 0x1F);
}

bool __fastcall ActorChara::_branchIsShotNotAlive(ActorChara *this, float param)
{
  unsigned int v2; // eax

  if ( (unsigned int)(int)param > 0xB )
    return 0;
  v2 = this->bsAliveShotID._Array[(unsigned __int64)(int)param >> 5];
  return !_bittest((const int *)&v2, (int)param & 0x1F);
}

void __fastcall ActorChara::_cancelBonusCheck(ActorChara *this)
{
  std::bitset<62> *p_systemFlag; // rdi
  std::bitset<61>::reference *v3; // rax
  unsigned __int64 Mypos; // rdx
  __int64 v5; // rcx
  unsigned __int64 v6; // rax
  std::bitset<61>::reference *v7; // rax
  unsigned __int64 v8; // rdx
  std::bitset<61>::reference *v9; // rax
  unsigned __int64 v10; // rdx
  BattleSystem::BattleController *v11; // rax
  BattleEventHandler *v12; // rax
  ActionSystem *v13; // rcx
  std::bitset<61>::reference *v14; // rax
  unsigned __int64 v15; // rdx
  std::bitset<61>::reference *v16; // rax
  unsigned __int64 v17; // rdx
  BattleSystem::BattleController *v18; // rax
  BattleEventHandler *v19; // rax
  ActionSystem *v20; // rcx
  std::bitset<61>::reference *v21; // rax
  unsigned __int64 v22; // rdx
  std::bitset<61>::reference *v23; // rax
  unsigned __int64 v24; // rdx
  BattleSystem::BattleController *v25; // rax
  BattleEventHandler *Instance; // rax
  ActionSystem *v27; // rcx
  std::bitset<61>::reference *v28; // rax
  unsigned __int64 v29; // rdx
  std::bitset<61>::reference result; // [rsp+28h] [rbp-20h] BYREF

  p_systemFlag = &this->systemFlag;
  v3 = std::bitset<21>::operator[]((std::bitset<61> *)&this->systemFlag, &result, 0x30ui64);
  Mypos = v3->_Mypos;
  if ( Mypos >= 0x3E )
    std::_Xout_of_range("invalid bitset<N> position");
  v5 = v3->_Mypos & 0x3F;
  v6 = v3->_Pbitset[Mypos >> 6]._Array[0];
  if ( _bittest64((const __int64 *)&v6, v5) )
  {
    switch ( this->cancelBonusType )
    {
      case COUNTER_HIT:
        v21 = std::bitset<21>::operator[]((std::bitset<61> *)p_systemFlag, &result, 0x2Bui64);
        v22 = v21->_Mypos;
        if ( v22 >= 0x3E )
          std::_Xout_of_range("invalid bitset<N> position");
        v21->_Pbitset[v22 >> 6]._Array[0] |= 1i64 << (v22 & 0x3F);
        v23 = std::bitset<21>::operator[]((std::bitset<61> *)p_systemFlag, &result, 0x2Eui64);
        v24 = v23->_Mypos;
        if ( v24 >= 0x3E )
          std::_Xout_of_range("invalid bitset<N> position");
        v23->_Pbitset[v24 >> 6]._Array[0] |= 1i64 << (v23->_Mypos & 0x3F);
        BattleSystem::BattleController::GetActionSystem();
        BattleSystem::BattleController::AddBattleScore(v25, this->iPlayerID, 2500);
        Instance = BattleEventHandler::getInstance();
        BattleEventHandler::CallEvent_CharacterActivity(Instance, (PLAYER_ID)this->iPlayerID, SUPER_CANCEL, 2500);
        ActionSystem::RequestSoundStopSuperCancel(v27, this);
        if ( IsEnableGameMode4TorophyCntup() && this->iPlayerID == (unsigned int)getTrophyPlayerID() )
          ++*(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2205256i64);
        break;
      case GUARD_CRASH:
        v14 = std::bitset<21>::operator[]((std::bitset<61> *)p_systemFlag, &result, 0x2Cui64);
        v15 = v14->_Mypos;
        if ( v15 >= 0x3E )
          std::_Xout_of_range("invalid bitset<N> position");
        v14->_Pbitset[v15 >> 6]._Array[0] |= 1i64 << (v15 & 0x3F);
        v16 = std::bitset<21>::operator[]((std::bitset<61> *)p_systemFlag, &result, 0x2Eui64);
        v17 = v16->_Mypos;
        if ( v17 >= 0x3E )
          std::_Xout_of_range("invalid bitset<N> position");
        v16->_Pbitset[v17 >> 6]._Array[0] |= 1i64 << (v16->_Mypos & 0x3F);
        BattleSystem::BattleController::GetActionSystem();
        BattleSystem::BattleController::AddBattleScore(v18, this->iPlayerID, 5000);
        v19 = BattleEventHandler::getInstance();
        BattleEventHandler::CallEvent_CharacterActivity(v19, (PLAYER_ID)this->iPlayerID, ADVANCED_CANCEL, 5000);
        ActionSystem::RequestSoundStopSuperCancel(v20, this);
        if ( IsEnableGameMode4TorophyCntup() && this->iPlayerID == (unsigned int)getTrophyPlayerID() )
          ++*(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2205260i64);
        break;
      case REVERSAL:
        v7 = std::bitset<21>::operator[]((std::bitset<61> *)p_systemFlag, &result, 0x2Dui64);
        v8 = v7->_Mypos;
        if ( v8 >= 0x3E )
          std::_Xout_of_range("invalid bitset<N> position");
        v7->_Pbitset[v8 >> 6]._Array[0] |= 1i64 << (v8 & 0x3F);
        v9 = std::bitset<21>::operator[]((std::bitset<61> *)p_systemFlag, &result, 0x2Eui64);
        v10 = v9->_Mypos;
        if ( v10 >= 0x3E )
          std::_Xout_of_range("invalid bitset<N> position");
        v9->_Pbitset[v10 >> 6]._Array[0] |= 1i64 << (v9->_Mypos & 0x3F);
        BattleSystem::BattleController::GetActionSystem();
        BattleSystem::BattleController::AddBattleScore(v11, this->iPlayerID, 10000);
        v12 = BattleEventHandler::getInstance();
        BattleEventHandler::CallEvent_CharacterActivity(v12, (PLAYER_ID)this->iPlayerID, CLIMAX_CANCEL, 10000);
        ActionSystem::RequestSoundStopSuperCancel(v13, this);
        if ( IsEnableGameMode4TorophyCntup() && this->iPlayerID == (unsigned int)getTrophyPlayerID() )
          ++*(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2205264i64);
        break;
    }
    *(_QWORD *)&this->cancelBonusType = 0i64;
    v28 = std::bitset<21>::operator[]((std::bitset<61> *)p_systemFlag, &result, 0x30ui64);
    v29 = v28->_Mypos;
    if ( v29 >= 0x3E )
      std::_Xout_of_range("invalid bitset<N> position");
    v28->_Pbitset[v29 >> 6]._Array[0] &= ~(1i64 << (v29 & 0x3F));
  }
}

bool __fastcall ActorChara::_charaCommandCheck(
        ActorChara *this,
        int stat,
        int id,
        const CommandData::Setting *cmdSet,
        int remainderFrame)
{
  int v5; // er14
  int iGroup; // edx
  ActorChara *v11; // rcx

  v5 = id + 37;
  if ( !this->IsValidCommandCheck(this)
    && ((unsigned int)(cmdSet->iGroup - 14) <= 5 || !this->IsValidDerivedCommandCheck(this)) )
  {
    return 0;
  }
  if ( this->IsCancel(this, v5, cmdSet->iPrecedeFrame, remainderFrame) )
    return 1;
  iGroup = cmdSet->iGroup;
  if ( (unsigned int)(iGroup - 14) > 5 )
    return 0;
  if ( this->IsCancel(this, iGroup + 7, cmdSet->iPrecedeFrame, remainderFrame) )
    return 1;
  return (this->iActorStatReserve != 21 || this->iActorStat == 54) && ActorChara::_isCommandReadyStat(v11, stat);
}

__int64 __fastcall ActorChara::_checkCancelTerm(ActorChara *this, __int64 term, __int64 a3)
{
  bool v4; // zf

  LOBYTE(a3) = 0;
  switch ( (int)term )
  {
    case 0:
      return 1i64;
    case 1:
      return (this->bsAttackFlag._Array[0] & 6) != 0;
    case 2:
      return (this->bsAttackFlag._Array[0] & 4) != 0;
    case 3:
      return (this->bsAttackFlag._Array[0] & 2) != 0;
    case 4:
      return ((__int64 (__fastcall *)(ActorChara *, __int64, __int64))this->IsActionBranchKey)(this, 1i64, a3);
    case 5:
      return ((__int64 (__fastcall *)(ActorChara *, __int64, __int64))this->IsActionBranchKey)(this, 2i64, a3);
    case 6:
      return ((__int64 (__fastcall *)(ActorChara *, __int64, __int64))this->IsActionBranchKey)(this, 3i64, a3);
    case 7:
      return ((__int64 (__fastcall *)(ActorChara *, __int64, __int64))this->IsActionBranchKey)(this, 4i64, a3);
    case 8:
      if ( (this->systemFlag._Array[0] & 0x2000000000000i64) == 0 )
        return 0i64;
      v4 = ((unsigned __int8 (__fastcall *)(ActorChara *, __int64, __int64))this->IsNormalThrowInputAction)(
             this,
             term,
             a3) == 0;
      break;
    case 9:
      return (this->bsAttackFlag._Array[0] & 0x20) != 0;
    case 10:
      if ( (this->bsAttackFlag._Array[0] & 6) == 0 )
        return 0i64;
      v4 = this->uiActionBranchKey == 0;
      break;
    default:
      return 0i64;
  }
  return v4;
}

char __fastcall ActorChara::_commonCommandCheck(
        ActorChara *this,
        int stat,
        const CommandData::Setting *cmdSet,
        int remainderFrame)
{
  char isDashCancelEnable; // bl
  ActorChara_vtbl *v9; // rax
  int iActionID; // ecx
  int v12; // esi
  bool v13; // cc
  __int64 v14; // rdx
  char v15; // al
  unsigned int iPrecedeFrame; // ebx
  bool v17; // cc
  int v18; // esi
  __int64 v19; // rdx
  __int64 v20; // rdx
  bool v21; // cc
  std::bitset<62> *p_systemFlag; // r14
  std::bitset<61>::reference *v23; // rax
  bool v24; // r8
  unsigned __int64 Mypos; // rdx
  std::bitset<61> *v26; // rcx
  __int64 v27; // rdx
  std::bitset<62>::reference *v28; // rax
  bool v29; // r9
  std::bitset<62>::reference *v30; // rax
  int v31; // edx
  bool v32; // r8
  std::bitset<62> *v33; // r14
  std::bitset<61>::reference *v34; // rax
  bool v35; // r8
  unsigned __int64 v36; // rdx
  std::bitset<61> *v37; // rcx
  __int64 v38; // rdx
  std::bitset<62>::reference *v39; // rax
  bool v40; // r9
  std::bitset<62>::reference *v41; // rax
  std::bitset<61>::reference result; // [rsp+28h] [rbp-40h] BYREF

  isDashCancelEnable = 0;
  v9 = this->ActorCharaBase::ActorObject::Actor::__vftable;
  if ( cmdSet->iActionID == 43 )
  {
    if ( v9->IsValidCommandCheck(this) )
      return 0;
  }
  else if ( !v9->IsValidCommandCheck(this) )
  {
    return 0;
  }
  iActionID = cmdSet->iActionID;
  switch ( iActionID )
  {
    case 0:
    case 43:
      if ( stat >= 0 )
      {
        if ( stat <= 3 )
          return 1;
        if ( stat == 4 )
        {
          return ActorChara::_isDashCancelEnable(this);
        }
        else if ( (unsigned int)(stat - 23) <= 2 )
        {
          return 1;
        }
      }
      return isDashCancelEnable;
    case 1:
      if ( ((unsigned __int8 (__fastcall *)(ActorChara *, _QWORD, _QWORD, _QWORD, __int64))this->IsCancel)(
             this,
             0i64,
             (unsigned int)cmdSet->iPrecedeFrame,
             (unsigned int)remainderFrame,
             -2i64) )
      {
        return 1;
      }
      switch ( stat )
      {
        case 0:
        case 1:
        case 2:
        case 3:
        case 21:
        case 23:
        case 24:
        case 25:
          goto $LN38_12;
        case 4:
          goto $LN39_9;
        default:
          goto LABEL_16;
      }
      goto LABEL_16;
    case 2:
      if ( ((unsigned __int8 (__fastcall *)(ActorChara *, _QWORD, _QWORD, _QWORD, __int64))this->IsCancel)(
             this,
             0i64,
             (unsigned int)cmdSet->iPrecedeFrame,
             (unsigned int)remainderFrame,
             -2i64) )
      {
        return 1;
      }
      switch ( stat )
      {
        case 0:
        case 1:
        case 21:
        case 23:
        case 24:
        case 25:
          goto $LN38_12;
        case 3:
          goto $LN44_8;
        case 4:
          goto $LN39_9;
        default:
          goto LABEL_16;
      }
      goto LABEL_16;
    case 3:
      if ( ((unsigned __int8 (__fastcall *)(ActorChara *, _QWORD, _QWORD, _QWORD, __int64))this->IsCancel)(
             this,
             0i64,
             (unsigned int)cmdSet->iPrecedeFrame,
             (unsigned int)remainderFrame,
             -2i64) )
      {
        return 1;
      }
      switch ( stat )
      {
        case 0:
        case 1:
        case 21:
        case 23:
        case 24:
        case 25:
          goto $LN38_12;
        case 2:
$LN44_8:
          isDashCancelEnable = this->iCAngle == this->iCAngleBuf;
          break;
        case 4:
          goto $LN39_9;
        default:
          goto LABEL_16;
      }
      goto LABEL_16;
    case 4:
      if ( ((unsigned __int8 (__fastcall *)(ActorChara *, __int64, _QWORD, _QWORD, __int64))this->IsCancel)(
             this,
             1i64,
             (unsigned int)cmdSet->iPrecedeFrame,
             (unsigned int)remainderFrame,
             -2i64) )
      {
        return 1;
      }
      if ( stat < 0 )
        goto LABEL_16;
      v13 = stat <= 3;
      goto LABEL_28;
    case 5:
      if ( stat == 4 && !this->iCAngle )
        return 1;
      return isDashCancelEnable;
    case 6:
      v12 = 2;
      if ( ((unsigned __int8 (__fastcall *)(ActorChara *, __int64, _QWORD, _QWORD, __int64))this->IsCancel)(
             this,
             2i64,
             (unsigned int)cmdSet->iPrecedeFrame,
             (unsigned int)remainderFrame,
             -2i64) )
      {
        return 1;
      }
      switch ( stat )
      {
        case 0:
        case 1:
        case 2:
        case 3:
        case 21:
        case 23:
        case 24:
        case 25:
          isDashCancelEnable = 1;
          break;
        case 4:
          isDashCancelEnable = ActorChara::_isDashCancelEnable(this);
          break;
        default:
          goto LABEL_17;
      }
      goto LABEL_17;
    case 7:
    case 8:
    case 9:
      if ( ((unsigned __int8 (__fastcall *)(ActorChara *, __int64, _QWORD, _QWORD, __int64))this->IsCancel)(
             this,
             3i64,
             (unsigned int)cmdSet->iPrecedeFrame,
             (unsigned int)remainderFrame,
             -2i64) )
      {
        return 1;
      }
      switch ( stat )
      {
        case 0:
        case 1:
        case 2:
        case 3:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 21:
        case 23:
        case 24:
        case 25:
          goto $LN38_12;
        case 4:
          if ( cmdSet->iActionID == 7 )
            goto $LN38_12;
          goto $LN39_9;
        default:
          goto LABEL_16;
      }
      goto LABEL_16;
    case 10:
    case 11:
      if ( ((unsigned __int8 (__fastcall *)(ActorChara *, __int64, _QWORD, _QWORD, __int64))this->IsCancel)(
             this,
             4i64,
             (unsigned int)cmdSet->iPrecedeFrame,
             (unsigned int)remainderFrame,
             -2i64) )
      {
        return 1;
      }
      switch ( stat )
      {
        case 0:
        case 1:
        case 2:
        case 3:
        case 21:
        case 23:
        case 24:
        case 25:
          goto $LN38_12;
        case 4:
          if ( cmdSet->iActionID == 10 )
            goto $LN38_12;
$LN39_9:
          isDashCancelEnable = ActorChara::_isDashCancelEnable(this);
          break;
        default:
          goto LABEL_16;
      }
      goto LABEL_16;
    case 12:
    case 13:
    case 14:
      v14 = 5i64;
      goto LABEL_51;
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
    case 21:
    case 22:
    case 27:
      iPrecedeFrame = cmdSet->iPrecedeFrame;
      if ( ((unsigned __int8 (__fastcall *)(ActorChara *, _QWORD, _QWORD, _QWORD, __int64))this->IsCancel)(
             this,
             (unsigned int)ciAttackCancelID[iActionID - 15],
             iPrecedeFrame,
             (unsigned int)remainderFrame,
             -2i64) )
      {
        return 1;
      }
      if ( stat < 0 )
        goto LABEL_63;
      if ( stat <= 4 || stat == 21 )
        goto LABEL_60;
      v17 = (unsigned int)(stat - 23) <= 2;
      goto LABEL_59;
    case 23:
    case 24:
    case 25:
    case 26:
    case 28:
      iPrecedeFrame = cmdSet->iPrecedeFrame;
      if ( ((unsigned __int8 (__fastcall *)(ActorChara *, _QWORD, _QWORD, _QWORD, __int64))this->IsCancel)(
             this,
             (unsigned int)ciAttackCancelID[iActionID - 15],
             iPrecedeFrame,
             (unsigned int)remainderFrame,
             -2i64) )
      {
        return 1;
      }
      v17 = (unsigned int)(stat - 11) <= 9;
      goto LABEL_59;
    case 29:
      v19 = 30i64;
      goto LABEL_69;
    case 30:
      v19 = 31i64;
      goto LABEL_69;
    case 31:
      if ( this->IsClimaxMode(this) )
        return isDashCancelEnable;
      v19 = 35i64;
LABEL_69:
      if ( ((unsigned __int8 (__fastcall *)(ActorChara *, __int64, _QWORD, _QWORD, __int64))this->IsCancel)(
             this,
             v19,
             (unsigned int)cmdSet->iPrecedeFrame,
             (unsigned int)remainderFrame,
             -2i64) )
      {
        return 1;
      }
      if ( stat < 0 )
        goto LABEL_16;
      v13 = stat <= 4;
LABEL_28:
      if ( v13 || stat == 21 || (unsigned int)(stat - 23) <= 2 )
$LN38_12:
        isDashCancelEnable = 1;
LABEL_16:
      v12 = 2;
LABEL_17:
      if ( cmdSet->iPrecedeFrame >= 0 )
        v12 = cmdSet->iPrecedeFrame;
      return (v12 >= remainderFrame) & isDashCancelEnable;
    case 32:
      v20 = 32i64;
      goto LABEL_78;
    case 33:
      v20 = 33i64;
LABEL_78:
      isDashCancelEnable = ((unsigned __int8 (__fastcall *)(ActorChara *, __int64, _QWORD, _QWORD, __int64))this->IsCancel)(
                             this,
                             v20,
                             (unsigned int)cmdSet->iPrecedeFrame,
                             (unsigned int)remainderFrame,
                             -2i64) != 0;
      if ( stat != 26 )
        return isDashCancelEnable;
      v21 = this->xHitBackFrame.value < 393216;
      goto LABEL_80;
    case 34:
      isDashCancelEnable = ((unsigned __int8 (__fastcall *)(ActorChara *, __int64, _QWORD, _QWORD, __int64))this->IsCancel)(
                             this,
                             34i64,
                             (unsigned int)cmdSet->iPrecedeFrame,
                             (unsigned int)remainderFrame,
                             -2i64) != 0;
      if ( stat != 26 )
        return isDashCancelEnable;
      v21 = this->xHitBackFrame.value < 0x80000;
LABEL_80:
      if ( !v21 )
        return isDashCancelEnable;
      v18 = 2;
      if ( cmdSet->iPrecedeFrame >= 0 )
        v18 = cmdSet->iPrecedeFrame;
      goto LABEL_83;
    case 35:
      v15 = this->IsValidEvadeCommand(this);
      goto LABEL_52;
    case 36:
      v15 = this->IsValidThrowEscapeCommand(this);
      goto LABEL_52;
    case 37:
      if ( stat == 4 && this->iCAngle )
        return 1;
      return isDashCancelEnable;
    case 38:
      p_systemFlag = &this->systemFlag;
      v23 = std::bitset<21>::operator[]((std::bitset<61> *)p_systemFlag, &result, 5ui64);
      Mypos = v23->_Mypos;
      if ( Mypos >= 0x3E )
        std::_Xout_of_range("invalid bitset<N> position");
      v26 = &v23->_Pbitset[Mypos >> 6];
      v27 = v23->_Mypos & 0x3F;
      v26->_Array[0] |= 1i64 << v27;
      if ( (unsigned int)stat <= 0x1A )
        ActorChara::_isGuardInputStat((ActorChara *)(unsigned int)stat, v27, v24);
      v28 = (std::bitset<62>::reference *)std::bitset<21>::operator[]((std::bitset<61> *)p_systemFlag, &result, 4ui64);
      std::bitset<62>::reference::operator=(v28, v29);
      v30 = (std::bitset<62>::reference *)std::bitset<21>::operator[]((std::bitset<61> *)p_systemFlag, &result, 8ui64);
      if ( !std::bitset<62>::reference::operator bool(v30) && stat != 26 )
        return isDashCancelEnable;
      if ( (unsigned int)stat <= 0x1A )
        goto LABEL_96;
      goto LABEL_63;
    case 39:
      v33 = &this->systemFlag;
      v34 = std::bitset<21>::operator[]((std::bitset<61> *)v33, &result, 6ui64);
      v36 = v34->_Mypos;
      if ( v36 >= 0x3E )
        std::_Xout_of_range("invalid bitset<N> position");
      v37 = &v34->_Pbitset[v36 >> 6];
      v38 = v34->_Mypos & 0x3F;
      v37->_Array[0] |= 1i64 << v38;
      if ( (unsigned int)stat <= 0x1A )
        ActorChara::_isGuardInputStat((ActorChara *)(unsigned int)stat, v38, v35);
      v39 = (std::bitset<62>::reference *)std::bitset<21>::operator[]((std::bitset<61> *)v33, &result, 4ui64);
      std::bitset<62>::reference::operator=(v39, v40);
      v41 = (std::bitset<62>::reference *)std::bitset<21>::operator[]((std::bitset<61> *)v33, &result, 8ui64);
      if ( !std::bitset<62>::reference::operator bool(v41) && stat != 26 )
        return isDashCancelEnable;
      if ( (unsigned int)stat > 0x1A )
        goto LABEL_63;
LABEL_96:
      isDashCancelEnable = ActorChara::_isGuardInputStat((ActorChara *)(unsigned int)stat, v31, v32);
      break;
    case 40:
    case 41:
      if ( !this->xNormalThrowDisableCount.value
        && stat >= 0
        && (stat <= 3 || stat == 21 || (unsigned int)(stat - 23) <= 2) )
      {
        return 1;
      }
      return isDashCancelEnable;
    case 42:
      if ( this->IsClimaxMode(this) )
        return isDashCancelEnable;
      v14 = 20i64;
LABEL_51:
      v15 = ((__int64 (__fastcall *)(ActorChara *, __int64, _QWORD, _QWORD, __int64))this->IsCancel)(
              this,
              v14,
              (unsigned int)cmdSet->iPrecedeFrame,
              (unsigned int)remainderFrame,
              -2i64);
LABEL_52:
      if ( v15 )
        return 1;
      return isDashCancelEnable;
    case 44:
    case 45:
      iPrecedeFrame = cmdSet->iPrecedeFrame;
      if ( ((unsigned __int8 (__fastcall *)(ActorChara *, __int64, _QWORD, _QWORD, __int64))this->IsCancel)(
             this,
             128i64,
             iPrecedeFrame,
             (unsigned int)remainderFrame,
             -2i64) )
      {
        return 1;
      }
      v17 = (unsigned int)(stat - 11) <= 9;
LABEL_59:
      if ( v17 )
      {
LABEL_60:
        v18 = 2;
        if ( (iPrecedeFrame & 0x80000000) == 0 )
          v18 = iPrecedeFrame;
LABEL_83:
        isDashCancelEnable = v18 >= remainderFrame;
      }
      else
      {
LABEL_63:
        isDashCancelEnable = 0;
      }
      break;
    default:
      return isDashCancelEnable;
  }
  return isDashCancelEnable;
}

__int64 __fastcall ActorChara::_getCancelHitStopRemainderFrame(ActorChara *this, int iBasePrecedeFrame)
{
  int iActFrame; // edi
  unsigned int uiDataSize; // ebx
  int v4; // er10
  unsigned int v6; // er8
  ActorChara::CommandInfo::HitStopInfo *v7; // rcx
  int v8; // eax
  int iHitStopFrame; // ecx

  iActFrame = this->iActFrame;
  uiDataSize = this->cmdInfo.hitStopInfo.uiDataSize;
  v4 = iActFrame - iBasePrecedeFrame;
  v6 = 0;
  if ( iActFrame - iBasePrecedeFrame < 0 )
    v4 = 0;
  if ( uiDataSize )
  {
    do
    {
      v7 = &this->cmdInfo.hitStopInfo.pBuffer[this->cmdInfo.hitStopInfo.uiBufferMask & (this->cmdInfo.hitStopInfo.uiEndIndex
                                                                                      - v6
                                                                                      - 1)];
      v8 = v7->iActFrame;
      if ( v4 > v8 )
        break;
      iHitStopFrame = v7->iHitStopFrame;
      if ( iActFrame == v8 )
        iHitStopFrame -= SHIWORD(this->xHitStopFrame.value);
      ++v6;
      iBasePrecedeFrame += iHitStopFrame;
    }
    while ( v6 < uiDataSize );
  }
  return (unsigned int)iBasePrecedeFrame;
}

__int64 __fastcall ActorChara::_getCancelRemainderFrame(ActorChara *this)
{
  int v2; // edi
  int v3; // esi
  const CharaActionData::ActionLineFrame *v4; // rax
  __int64 v5; // r8
  const CharaActionData::ActionLineFrame *v6; // rbp
  unsigned int v7; // edx
  unsigned int uiDataSize; // er10
  int v9; // er8
  ActorChara::CommandInfo::HitStopInfo *v10; // rcx
  int iActFrame; // eax
  int iHitStopFrame; // ecx

  v2 = 0;
  v3 = 0;
  if ( this->iCancelDataCount > 0 )
  {
    do
    {
      v4 = this->GetKeyFrame(this, (unsigned int)this->iActNo, 6i64, (unsigned int)this->iActFrame, v3);
      v6 = v4;
      if ( v4
        && (unsigned __int8)ActorChara::_checkCancelTerm(this, (unsigned int)v4->iBase[3], v5)
        && v2 < v6->iBase[5] )
      {
        v2 = v6->iBase[5];
      }
      ++v3;
    }
    while ( v3 < this->iCancelDataCount );
    if ( v2 > 0 )
    {
      v7 = 0;
      uiDataSize = this->cmdInfo.hitStopInfo.uiDataSize;
      v9 = this->iActFrame - v2;
      if ( v9 < 0 )
        v9 = 0;
      if ( uiDataSize )
      {
        do
        {
          v10 = &this->cmdInfo.hitStopInfo.pBuffer[this->cmdInfo.hitStopInfo.uiBufferMask & (this->cmdInfo.hitStopInfo.uiEndIndex
                                                                                           - v7
                                                                                           - 1)];
          iActFrame = v10->iActFrame;
          if ( v9 > iActFrame )
            break;
          iHitStopFrame = v10->iHitStopFrame;
          if ( this->iActFrame == iActFrame )
            iHitStopFrame -= SHIWORD(this->xHitStopFrame.value);
          ++v7;
          v2 += iHitStopFrame;
        }
        while ( v7 < uiDataSize );
      }
    }
  }
  return (unsigned int)v2;
}

bool __fastcall ActorChara::_isCommandReadyStat(ActorChara *this, int stat)
{
  bool result; // al

  switch ( 0x40000000u )
  {
    case 0u:
    case 1u:
    case 2u:
    case 3u:
    case 4u:
    case 6u:
    case 7u:
    case 8u:
    case 9u:
    case 0xAu:
    case 0xBu:
    case 0xCu:
    case 0xDu:
    case 0xEu:
    case 0xFu:
    case 0x10u:
    case 0x11u:
    case 0x12u:
    case 0x13u:
    case 0x14u:
    case 0x15u:
    case 0x17u:
    case 0x18u:
    case 0x19u:
      result = 1;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}

bool __fastcall ActorChara::_isDashCancelEnable(ActorChara *this)
{
  const CharaBaseStatus *pBaseStat; // rbx
  __int64 iActNo; // rsi

  pBaseStat = this->pBaseStat;
  if ( !pBaseStat )
    return 1;
  iActNo = this->iActNo;
  return !pBaseStat->CheckFileID(&pBaseStat->CharaFileBase)
      || (unsigned int)iActNo >= pBaseStat->dataHeader.uiCommonActionCount
      || pBaseStat->pCommonAct[iActNo].iActionID != 6
      || this->iActFrame >= 13;
}

bool __fastcall ActorChara::_isGuardInputStat(ActorChara *this, int stat, bool bPermitPause)
{
  bool result; // al

  switch ( byte_14018B8FC[(int)this] )
  {
    case 0:
      result = 1;
      break;
    case 1:
      result = 0;
      break;
  }
  return result;
}

