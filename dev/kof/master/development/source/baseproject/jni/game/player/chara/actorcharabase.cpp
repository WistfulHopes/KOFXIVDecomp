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
#include "dev/kof/master/development/source/baseproject/jni/game/define/charabonedefine.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglvec3.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmodel.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actorobject.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmaterial.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actionsystem.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actor.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/math.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmatrix.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmotion.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmotiondata.cpp"

ActorCharaBase::~ActorCharaBase(); // 0x140193400
void ActorCharaBase::CreateInit(); // 0x140193410
void ActorCharaBase::Dispose(); // 0x1401934A0
void ActorCharaBase::EnableFollowBone(bool flag); // 0x140193500
OGLVec3 ActorCharaBase::GetMotionMovePos(); // 0x1401935A0
OGLVec3 ActorCharaBase::GetMotionMovePosOpt(); // 0x1401936E0
void ActorCharaBase::CheckBasePositionAnchor(); // 0x140193730
long ActorCharaBase::GetBoneIndex(CharaBone::NAME_INDEX nameIndex, bool bMirror); // 0x1401937A0
OGLVec3 ActorCharaBase::GetBonePosition(CharaBone::NAME_INDEX nameIndex, bool bMirror); // 0x1401937D0
OGLVec3 ActorCharaBase::GetBonePositionNoScale(CharaBone::NAME_INDEX nameIndex, bool bMirror); // 0x140193840
OGLVec3 ActorCharaBase::GetBonePositionLocal(CharaBone::NAME_INDEX nameIndex, bool bMirror, bool bNoScale); // 0x1401939A0
OGLVec3 ActorCharaBase::GetCameraPositionOrigin(bool bMirror); // 0x140193A70
OGLVec3 ActorCharaBase::GetCameraPosition(bool bMirror, bool bNoScale); // 0x140193B10
void ActorCharaBase::CheckMotionScale(); // 0x140193B60
void ActorCharaBase::SetOffsetScaleFigure(OGLFigure * pFigure); // 0x140193BB0
void ActorCharaBase::ParamInit(const CharaDataUnify * pCharaData); // 0x140193C00
void ActorCharaBase::ActionFlagCheck(); // 0x140193CD0
void ActorCharaBase::PrevDataSet(); // 0x140193D30
void ActorCharaBase::ActionChanged(); // 0x140193D50
void ActorCharaBase::ActionParamInit(); // 0x140193E20
void ActorCharaBase::UpdatePostureCalc(const CharaActionData::BaseAnime & locBaseAnime, bool bBlend); // 0x140193E90
void ActorCharaBase::UpdatePosture(); // 0x140194230
void ActorCharaBase::SyncPosture(); // 0x140194DA0
void ActorCharaBase::CheckWeaponLine(); // 0x140194ED0
class ActorCharaBase::CheckWeaponLine::__l4::<lambda_974527dfb5af11aa521a5466f2f11999>
{
public:
	void operator()(Actor &);
	<lambda_974527dfb5af11aa521a5466f2f11999>(ActorCharaBase::CheckWeaponLine::__l4::<lambda_974527dfb5af11aa521a5466f2f11999> &);
	<lambda_974527dfb5af11aa521a5466f2f11999>();
	<lambda_974527dfb5af11aa521a5466f2f11999>(const CharaActionData::ActionLineFrame * &, ActorCharaBase *);
private:
	const CharaActionData::ActionLineFrame * & pFrame; // 0x0
	ActorCharaBase * __this; // 0x8
public:
	ActorCharaBase::CheckWeaponLine::__l4::<lambda_974527dfb5af11aa521a5466f2f11999> & operator=(const ActorCharaBase::CheckWeaponLine::__l4::<lambda_974527dfb5af11aa521a5466f2f11999> &);
};
std::piecewise_construct_t std::piecewise_construct; // 0x1408A05BC
void ActorCharaBase::CheckSettingLine(); // 0x140194FA0
void ActorCharaBase::SetCharaColorChange(const CharaActionData::Setting::Type::CharaColor & color); // 0x1401950F0
void ActorCharaBase::SetFadeOutColor(const ColorHolder & color, long fadeFrame, long option); // 0x140195100
void ActorCharaBase::SetSecondarySettingData(const CharaActionData::Setting::Type::Secondary & secondary); // 0x140195150
void ActorCharaBase::SetMaterialSettingData(const CharaActionData::Setting::Type::Material & material); // 0x1401951A0
void ActorCharaBase::ColorChange::SetSettingData(const CharaActionData::Setting::Type::CharaColor & dat); // 0x140195200
ColorHolder ActorCharaBase::ColorChange::GetFadeColorValue(); // 0x1401952B0
void ActorCharaBase::ColorChange::CheckCharaMaterialColorChange(OGLModel * pModel, long iDrinkCount); // 0x1401953B0//decompilation failure at 1408A05BC!
void __fastcall ActorShot::~ActorShot(ActorWeapon *this)
{
  this->__vftable = (ActorWeapon_vtbl *)&Actor::`vftable';
}

void __fastcall ActorCharaBase::ActionChanged(ActorCharaBase *this)
{
  __int64 iActNo; // rdx
  int iCAngleReserve; // edi
  ActionSystem *pActSys; // rsi
  int v5; // eax
  ActionSystem *v6; // rcx

  ActorObject::ActionChanged(this);
  if ( (this->colorChangeData.iOptionFlag & 0x40000000) == 0 )
  {
    *(_QWORD *)&this->colorChangeData.iColorType = 0i64;
    this->colorChangeData.xFadeFrame.value = 0;
    this->colorChangeData.iOptionFlag = 0;
    *(_WORD *)&this->colorChangeData.bFadeOut = 0;
  }
  iActNo = (unsigned int)this->iActNo;
  if ( *(_QWORD *)&this->iActNoPrev != __PAIR64__(this->iActFramePrev, iActNo)
    && (((__int64 (__fastcall *)(ActorCharaBase *, __int64, _QWORD))this->GetActionOptionFlag)(this, iActNo, 0i64) & 0x400) == 0 )
  {
    iCAngleReserve = this->iCAngleReserve;
    if ( iCAngleReserve < 0 )
      iCAngleReserve = this->iCAngle;
    pActSys = this->pActSys;
    v5 = this->GetAssetID(this);
    if ( (unsigned int)v5 > 3 )
      v6 = pActSys;
    else
      v6 = (ActionSystem *)((char *)pActSys + 1240 * v5);
    MaterialShowControl::SetDefaultMaterialAll(v6->defaultMaterialData, iCAngleReserve);
  }
}

void __fastcall ActorCharaBase::ActionFlagCheck(ActorCharaBase *this)
{
  bool ModelMirrorLightFlag; // al

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
}

void __fastcall ActorCharaBase::ActionParamInit(ActorCharaBase *this)
{
  std::bitset<61>::reference *v2; // rax
  unsigned __int64 Mypos; // rdx
  std::bitset<61>::reference result; // [rsp+28h] [rbp-20h] BYREF

  Actor::ActionParamInit(this);
  this->bsCollisionFlag._Array[0] = 0;
  v2 = std::bitset<21>::operator[]((std::bitset<61> *)&this->charaBaseFlag, &result, 1ui64);
  Mypos = v2->_Mypos;
  if ( Mypos >= 6 )
    std::_Xout_of_range("invalid bitset<N> position");
  *((_DWORD *)v2->_Pbitset->_Array + (Mypos >> 5)) &= ~(1 << (Mypos & 0x1F));
}

void __fastcall ActorCharaBase::CheckBasePositionAnchor(ActorCharaBase *this)
{
  int iActFlg1; // eax
  int v3[6]; // [rsp+20h] [rbp-18h] BYREF

  if ( this->bActionNewFrame )
  {
    this->GetMotionMovePos(this, (OGLVec3 *)v3);
    iActFlg1 = this->iActFlg1;
    if ( (iActFlg1 & 0x2000) != 0 )
      this->vBasePos.x = this->vPos.x - *(float *)v3;
    if ( (iActFlg1 & 0x4000) != 0 )
      this->vBasePos.y = this->vPos.y - *(float *)&v3[1];
  }
}

void __fastcall ActorCharaBase::ColorChange::CheckCharaMaterialColorChange(
        ActorCharaBase::ColorChange *this,
        OGLModel *pModel,
        int iDrinkCount)
{
  int v3; // esi
  int v6; // er9
  __int64 v7; // rdx
  OGLMaterial *v8; // rcx
  float v9; // xmm0_4
  float v10; // xmm1_4
  float v11; // xmm2_4
  int v12; // er8
  __int64 v13; // rdx
  OGLMaterial *v14; // rcx
  int v15; // er10
  int *v16; // r11
  float a; // xmm6_4
  float b; // xmm7_4
  float g; // xmm8_4
  float r; // xmm9_4
  int v21; // er9
  int v22; // er8
  __int64 v23; // rdx
  OGLMaterial *v24; // rcx
  int v25; // ebp
  __int64 v26; // r14
  OGLMaterial *v27; // rdi
  ColorHolder result; // [rsp+20h] [rbp-58h] BYREF

  v3 = 0;
  pModel->m_fillColourType = 0;
  v6 = 0;
  if ( pModel->m_ucMaterialCount )
  {
    v7 = 0i64;
    do
    {
      v8 = &pModel->m_pMaterial[v7];
      if ( v8 )
        v8->m_fillColourType = 0;
      ++v6;
      ++v7;
    }
    while ( v6 < pModel->m_ucMaterialCount );
  }
  if ( iDrinkCount > 0 )
  {
    v9 = (float)iDrinkCount * 0.050000001;
    v10 = 0.74000001 - v9;
    v11 = 0.60000002 - v9;
    if ( (float)(0.74000001 - v9) < 0.23999999 )
      v10 = FLOAT_0_23999999;
    if ( v11 < 0.1 )
      v10 = *(float *)&FLOAT_0_1;
    v12 = 0;
    if ( pModel->m_ucMaterialCount )
    {
      v13 = 0i64;
      do
      {
        v14 = &pModel->m_pMaterial[v13];
        if ( v14 && (v14->m_ucEffectFlg & 0x8000) != 0 )
        {
          v14->m_fillColourType = 2;
          v14->m_fillColour[0] = 1.0;
          v14->m_fillColour[1] = v10;
          v14->m_fillColour[2] = v11;
          v14->m_fillColour[3] = 1.0;
        }
        ++v12;
        ++v13;
      }
      while ( v12 < pModel->m_ucMaterialCount );
    }
  }
  if ( this->iColorType > 0 )
  {
    ActorCharaBase::ColorChange::GetFadeColorValue(this, &result);
    a = result.a;
    b = result.b;
    g = result.g;
    r = result.r;
    v21 = ((v16[7] & 4) << 17) | 0x8000;
    if ( (v16[7] & 0x10) == 0 )
      v21 = (v16[7] & 4) << 17;
    if ( v21 )
    {
      v22 = 0;
      if ( pModel->m_ucMaterialCount )
      {
        v23 = 0i64;
        do
        {
          v24 = &pModel->m_pMaterial[v23];
          if ( v24 && (v21 & v24->m_ucEffectFlg) != 0 )
          {
            v24->m_fillColourType = v15;
            v24->m_fillColour[0] = r;
            v24->m_fillColour[1] = g;
            v24->m_fillColour[2] = b;
            v24->m_fillColour[3] = a;
          }
          ++v22;
          ++v23;
        }
        while ( v22 < pModel->m_ucMaterialCount );
      }
    }
    if ( (v16[7] & 8) != 0 )
    {
      v25 = *v16;
      if ( pModel->m_ucMaterialCount )
      {
        v26 = 0i64;
        do
        {
          v27 = &pModel->m_pMaterial[v26];
          if ( v27 )
          {
            if ( strstr((const char *)v27->m_cName, "M_EYE") )
            {
              v27->m_fillColourType = v25;
              v27->m_fillColour[0] = r;
              v27->m_fillColour[1] = g;
              v27->m_fillColour[2] = b;
              v27->m_fillColour[3] = a;
            }
          }
          ++v3;
          ++v26;
        }
        while ( v3 < pModel->m_ucMaterialCount );
      }
    }
  }
}

void __fastcall ActorCharaBase::CheckMotionScale(ActorCharaBase *this)
{
  const CharaBaseStatus *pBaseStat; // rax
  float fBoneScale; // xmm0_4
  OGLModel *pModel; // rax

  if ( this->bEnableOffsetScaleFigure )
  {
    pBaseStat = this->pBaseStat;
    if ( pBaseStat )
    {
      fBoneScale = pBaseStat->status.fBoneScale;
      pModel = this->pModel;
      if ( pModel->m_pFigure )
      {
        pModel->m_bMotOffScaleFlg = 0;
        pModel->m_fMotOffScaleCommon[1] = fBoneScale;
        pModel->m_iMotOffScaleBoneNo[1] = -1;
      }
    }
  }
}

void __fastcall ActorCharaBase::CheckSettingLine(ActorCharaBase *this)
{
  int i; // edi
  const CharaActionData::ActionLineFrame *v3; // rax

  for ( i = 0; i < this->iSettingDataCount; ++i )
  {
    v3 = this->GetKeyFrame(this, (unsigned int)this->iActNo, 27i64, (unsigned int)this->iActFrame, i);
    if ( v3 )
    {
      switch ( v3->iBase[0] )
      {
        case 0:
          this->SetCharaColorChange(this, (const CharaActionData::Setting::Type::CharaColor *)&v3->hit.iRectAttr);
          break;
        case 1:
          this->SetEyeControlData(this, (const CharaActionData::Setting::Type::EyeControl *)&v3->hit.iRectAttr);
          break;
        case 2:
          this->SetHeadControlData(this, (const CharaActionData::Setting::Type::HeadControl *)&v3->hit.iRectAttr);
          break;
        case 3:
          this->SetMaterialSettingData(this, (const CharaActionData::Setting::Type::Material *)&v3->hit.iRectAttr);
          break;
        case 4:
          this->SetTalkSettingData(this, (const CharaActionData::Setting::Type::Talk *)&v3->hit.iRectAttr);
          break;
        case 5:
          this->SetSecondarySettingData(this, (const CharaActionData::Setting::Type::Secondary *)&v3->hit.iRectAttr);
          break;
        case 6:
          this->SetSpecialEffectSettingData(this, (const CharaActionData::Setting::Type::SpEffect *)&v3->hit.iRectAttr);
          break;
        case 7:
          this->SetCharaOffsetData(this, (const CharaActionData::Setting::Type::CharaOffset *)&v3->hit.iRectAttr);
          break;
        default:
          continue;
      }
    }
  }
}

void __fastcall ActorCharaBase::CheckWeaponLine(ActorCharaBase *this)
{
  int i; // edi
  const CharaActionData::ActionLineFrame *v3; // rax
  ActionSystem *pActSys; // rcx
  __int128 v5; // [rsp+30h] [rbp-58h]
  std::function<void __cdecl(Actor &)> v6; // [rsp+40h] [rbp-48h] BYREF
  const CharaActionData::ActionLineFrame *v7; // [rsp+90h] [rbp+8h] BYREF

  for ( i = 0; i < this->iWeaponDataCount; ++i )
  {
    v3 = this->GetKeyFrame(this, (unsigned int)this->iActNo, 26i64, (unsigned int)this->iActFrame, i);
    v7 = v3;
    if ( v3 )
    {
      if ( v3->cam.iType > 0 )
      {
        pActSys = this->pActSys;
        *(_QWORD *)&v5 = &v7;
        *((_QWORD *)&v5 + 1) = this;
        v6._Mystorage._Ptrs[0] = (std::_Func_base<void,Actor &> *)&std::_Func_impl<_lambda_974527dfb5af11aa521a5466f2f11999_,std::allocator<int>,void,Actor &>::`vftable';
        v6._Mystorage._Ptrs[7] = (std::_Func_base<void,Actor &> *)&v6;
        *(_OWORD *)&v6._Mystorage._Ptrs[1] = v5;
        ActionSystem::FuncCallRequest(pActSys, (Actor *)4, &v6);
      }
    }
  }
}

void __fastcall ActorCharaBase::CreateInit(ActorCharaBase *this)
{
  this->ParamInit(this, 0i64, 0i64, 0i64, 0i64);
  *(_QWORD *)this->bsAttackFlag._Array = 0i64;
  this->pBaseStat = 0i64;
  this->pDataUnify = 0i64;
  this->pCharaBone = 0i64;
  *(_WORD *)&this->bEnableFollowBone = 0;
  this->bMotionMoveSlowAdjValue = 0;
  *(_QWORD *)&this->vMotionMoveAdj.x = 0i64;
  *(_QWORD *)&this->vMotionMoveAdj.z = 0i64;
  *(_QWORD *)&this->iResultSubType = 0i64;
  this->charaBaseFlag._Array[0] = 0;
  *(_QWORD *)&this->colorChangeData.xMaxFadeFrame.value = 0i64;
  this->colorChangeData.iOptionFlag = 0;
  *(_WORD *)&this->colorChangeData.bFadeOut = 0;
}

void __fastcall ActorCharaBase::Dispose(ActorCharaBase *this)
{
  this->pDataUnify = 0i64;
  *(_QWORD *)&this->iResultSubType = 0i64;
  this->charaBaseFlag._Array[0] = 0;
  *(_QWORD *)&this->colorChangeData.xMaxFadeFrame.value = 0i64;
  this->colorChangeData.iOptionFlag = 0;
  *(_WORD *)&this->colorChangeData.bFadeOut = 0;
  this->bCalledUpdatePostureCalc = 0;
  this->bPrevMotionNotUnique = 0;
  *(_QWORD *)this->bsAttackFlag._Array = 0i64;
  ActionSystem::RequestSoundStopActionChange((ActionSystem *)this, this);
  this->CreateInit(this);
}

void __fastcall ActorCharaBase::EnableFollowBone(ActorCharaBase *this, unsigned __int64 flag)
{
  bool v2; // di
  OGLModel *pModel; // rbx
  char *m_cFollowBone; // rcx
  char *m_cFollowTargetBone; // rcx

  v2 = flag;
  if ( this->bEnableFollowBone != (_BYTE)flag )
  {
    pModel = this->pModel;
    if ( pModel )
    {
      if ( (_BYTE)flag )
      {
        OGLModel::setFollowBone(this->pModel, "C_Hips", "Hip_Follow");
      }
      else
      {
        m_cFollowBone = pModel->m_cFollowBone;
        if ( m_cFollowBone )
        {
          operator delete(m_cFollowBone, flag);
          pModel->m_cFollowBone = 0i64;
        }
        m_cFollowTargetBone = pModel->m_cFollowTargetBone;
        if ( m_cFollowTargetBone )
        {
          operator delete(m_cFollowTargetBone, flag);
          pModel->m_cFollowTargetBone = 0i64;
        }
      }
      this->bEnableFollowBone = v2;
    }
  }
}

__int64 __fastcall ActorCharaBase::GetBoneIndex(ActorCharaBase *this, CharaBone::NAME_INDEX nameIndex, bool bMirror)
{
  __int64 result; // rax
  const CharaBone *pCharaBone; // rcx

  result = 0xFFFFFFFFi64;
  if ( this->pModel )
  {
    pCharaBone = this->pCharaBone;
    if ( pCharaBone )
    {
      if ( bMirror )
        nameIndex = ciMirrorNameIndex[nameIndex];
      return (unsigned int)pCharaBone->iBoneIndex[nameIndex];
    }
  }
  return result;
}

OGLVec3 *__fastcall ActorCharaBase::GetBonePosition(
        ActorCharaBase *this,
        OGLVec3 *result,
        CharaBone::NAME_INDEX nameIndex,
        bool bMirror)
{
  __int64 v4; // rax
  OGLVec3 *v5; // r8
  OGLModel *pModel; // rcx
  const CharaBone *pCharaBone; // rdx
  int v9; // edx

  v4 = nameIndex;
  v5 = result;
  *(_QWORD *)&v5->x = 0i64;
  v5->z = 0.0;
  pModel = this->pModel;
  if ( pModel )
  {
    pCharaBone = this->pCharaBone;
    if ( pCharaBone )
    {
      if ( bMirror )
        SLODWORD(v4) = ciMirrorNameIndex[v4];
      v9 = pCharaBone->iBoneIndex[(int)v4];
      if ( v9 >= 0 && pModel->m_pFigure )
        OGLModel::getBoneTrans(pModel, v9, v5, &pModel->m_mWorld);
    }
  }
  return v5;
}

OGLVec3 *__fastcall ActorCharaBase::GetBonePositionLocal(
        ActorCharaBase *this,
        OGLVec3 *result,
        CharaBone::NAME_INDEX nameIndex,
        bool bMirror,
        bool bNoScale)
{
  ActorCharaBase *v5; // r11
  __int64 v6; // rax
  OGLVec3 *v7; // r8
  OGLModel *pModel; // rcx
  const CharaBone *pCharaBone; // rdx
  int v10; // edx
  float m_fMotOffScaleTemp; // xmm2_4
  float v12; // xmm1_4
  float z; // xmm0_4

  v5 = this;
  v6 = nameIndex;
  v7 = result;
  *(_QWORD *)&result->x = 0i64;
  result->z = 0.0;
  pModel = this->pModel;
  if ( pModel )
  {
    pCharaBone = v5->pCharaBone;
    if ( pCharaBone )
    {
      if ( bMirror )
        SLODWORD(v6) = ciMirrorNameIndex[v6];
      v10 = pCharaBone->iBoneIndex[(int)v6];
      if ( v10 >= 0 )
      {
        if ( pModel->m_pFigure )
          OGLModel::getBoneTrans(pModel, v10, v7, 0i64);
        m_fMotOffScaleTemp = v5->pModel->m_fMotOffScaleTemp;
        if ( bNoScale && v5->bEnableOffsetScaleFigure && m_fMotOffScaleTemp > 0.0 )
        {
          v12 = v7->y / m_fMotOffScaleTemp;
          v7->x = v7->x / m_fMotOffScaleTemp;
          z = v7->z / m_fMotOffScaleTemp;
          v7->y = v12;
        }
        else
        {
          z = v7->z;
        }
        LODWORD(v7->z) = LODWORD(z) ^ _xmm;
      }
    }
  }
  return v7;
}

OGLVec3 *__fastcall ActorCharaBase::GetBonePositionNoScale(
        ActorCharaBase *this,
        OGLVec3 *result,
        CharaBone::NAME_INDEX nameIndex,
        bool bMirror)
{
  ActorCharaBase *v4; // r11
  __int64 v5; // rax
  OGLVec3 *v6; // r8
  OGLModel *pModel; // rcx
  const CharaBone *pCharaBone; // rdx
  int v9; // edx
  float m_fMotOffScaleTemp; // xmm2_4
  float v11; // xmm1_4
  float z; // xmm0_4
  float x; // xmm3_4
  float y; // xmm5_4
  float v15; // xmm6_4
  float v16; // xmm2_4

  v4 = this;
  v5 = nameIndex;
  v6 = result;
  *(_QWORD *)&result->x = 0i64;
  result->z = 0.0;
  pModel = this->pModel;
  if ( pModel )
  {
    pCharaBone = v4->pCharaBone;
    if ( pCharaBone )
    {
      if ( bMirror )
        SLODWORD(v5) = ciMirrorNameIndex[v5];
      v9 = pCharaBone->iBoneIndex[(int)v5];
      if ( v9 >= 0 )
      {
        if ( pModel->m_pFigure )
          OGLModel::getBoneTrans(pModel, v9, v6, 0i64);
        m_fMotOffScaleTemp = v4->pModel->m_fMotOffScaleTemp;
        if ( v4->bEnableOffsetScaleFigure && m_fMotOffScaleTemp > 0.0 )
        {
          v11 = v6->y / m_fMotOffScaleTemp;
          v6->x = v6->x / m_fMotOffScaleTemp;
          z = v6->z / m_fMotOffScaleTemp;
          v6->y = v11;
        }
        else
        {
          z = v6->z;
        }
        x = v6->x;
        y = v6->y;
        LODWORD(v6->z) = LODWORD(z) ^ _xmm;
        v15 = (float)((float)((float)(y * v4->pModel->m_mWorld.m[4]) + (float)(x * v4->pModel->m_mWorld.m[0]))
                    + (float)(COERCE_FLOAT(LODWORD(z) ^ _xmm) * v4->pModel->m_mWorld.m[8]))
            + v4->pModel->m_mWorld.m[12];
        v16 = (float)((float)((float)(y * v4->pModel->m_mWorld.m[6]) + (float)(x * v4->pModel->m_mWorld.m[2]))
                    + (float)(COERCE_FLOAT(LODWORD(z) ^ _xmm) * v4->pModel->m_mWorld.m[10]))
            + v4->pModel->m_mWorld.m[14];
        v6->y = (float)((float)((float)(y * v4->pModel->m_mWorld.m[5]) + (float)(x * v4->pModel->m_mWorld.m[1]))
                      + (float)(COERCE_FLOAT(LODWORD(z) ^ _xmm) * v4->pModel->m_mWorld.m[9]))
              + v4->pModel->m_mWorld.m[13];
        v6->x = v15;
        v6->z = v16;
      }
    }
  }
  return v6;
}

OGLVec3 *__fastcall ActorCharaBase::GetCameraPosition(
        ActorCharaBase *this,
        OGLVec3 *result,
        bool bMirror,
        bool bNoScale)
{
  ActorCharaBase_vtbl *v5; // rax
  __int64 v6; // rax
  __int64 v7; // xmm0_8
  float v8; // eax
  char v10[24]; // [rsp+20h] [rbp-18h] BYREF

  *(_QWORD *)&result->x = 0i64;
  result->z = 0.0;
  v5 = this->__vftable;
  if ( bNoScale )
    v6 = (__int64)v5->GetBonePositionNoScale(this, (OGLVec3 *)v10, CAM_POSITION, bMirror);
  else
    v6 = (__int64)v5->GetBonePosition(this, (OGLVec3 *)v10, CAM_POSITION, bMirror);
  v7 = *(_QWORD *)v6;
  v8 = *(float *)(v6 + 8);
  *(_QWORD *)&result->x = v7;
  result->z = v8;
  return result;
}

OGLVec3 *__fastcall ActorCharaBase::GetCameraPositionOrigin(ActorCharaBase *this, OGLVec3 *result, bool bMirror)
{
  OGLVec3 *v5; // rax
  __int64 v6; // xmm0_8
  OGLVec3 *v7; // rax
  float y; // xmm1_4
  __int64 v9; // xmm0_8
  float v10; // xmm1_4
  OGLVec3 *v11; // rax
  __int64 v12; // [rsp+20h] [rbp-28h] BYREF
  float v13; // [rsp+28h] [rbp-20h]
  char v14[24]; // [rsp+30h] [rbp-18h] BYREF

  *(_QWORD *)&result->x = 0i64;
  result->z = 0.0;
  v5 = this->GetBonePosition(this, &v12, 2i64, bMirror);
  v6 = *(_QWORD *)&v5->x;
  *(float *)&v5 = v5->z;
  *(_QWORD *)&result->x = v6;
  LODWORD(result->z) = (_DWORD)v5;
  v7 = this->GetMotionMovePos(this, v14);
  y = result->y;
  v9 = *(_QWORD *)&v7->x;
  *(float *)&v7 = v7->z;
  v12 = v9;
  *(float *)&v9 = result->x - *(float *)&v9;
  v10 = y - *((float *)&v12 + 1);
  v13 = *(float *)&v7;
  v11 = result;
  LODWORD(result->x) = v9;
  *(float *)&v9 = result->z - v13;
  result->y = v10;
  LODWORD(result->z) = v9;
  return v11;
}

ColorHolder *__fastcall ActorCharaBase::ColorChange::GetFadeColorValue(
        ActorCharaBase::ColorChange *this,
        ColorHolder *result)
{
  int value; // er9
  float v3; // xmm3_4
  ColorHolder *v4; // rax
  float v5; // xmm1_4
  float v6; // xmm0_4
  float v7; // xmm4_4
  float v8; // xmm4_4

  value = this->xMaxFadeFrame.value;
  *result = this->color;
  if ( !value )
    return result;
  v3 = (float)((float)((float)(unsigned __int16)this->xFadeFrame.value * 0.000015258789)
             + (float)(this->xFadeFrame.value >> 16))
     / (float)((float)((float)(unsigned __int16)value * 0.000015258789) + (float)(value >> 16));
  if ( this->iColorType != 2 )
  {
    if ( this->bFadeOut )
      v3 = 1.0 - v3;
    result->a = v3 * result->a;
    return result;
  }
  if ( !this->bFadeOut )
    v3 = 1.0 - v3;
  v4 = result;
  v5 = (float)((float)(1.0 - result->a) * v3) + result->a;
  result->r = (float)((float)(1.0 - result->r) * v3) + result->r;
  v6 = 1.0 - result->g;
  v7 = 1.0 - result->b;
  result->a = v5;
  v8 = (float)(v7 * v3) + result->b;
  result->g = (float)(v6 * v3) + result->g;
  result->b = v8;
  return v4;
}

OGLVec3 *__fastcall ActorCharaBase::GetMotionMovePos(ActorCharaBase *this, OGLVec3 *result)
{
  bool v2; // zf
  float x; // xmm7_4
  float z; // xmm6_4
  float y; // xmm8_4
  const CharaBone *pCharaBone; // rax
  int v9; // esi
  OGLModel *pModel; // r11
  float m_fMotOffScaleTemp; // xmm0_4
  OGLVec3 trans; // [rsp+20h] [rbp-58h] BYREF

  v2 = this->pModel == 0i64;
  x = 0.0;
  trans.y = 0.0;
  z = 0.0;
  trans.x = 0.0;
  trans.z = 0.0;
  y = 0.0;
  if ( v2 )
  {
LABEL_12:
    result->x = x;
    result->y = y;
    result->z = z;
    return result;
  }
  if ( !this->bMotionMoveSlowAdjValue )
  {
    pCharaBone = this->pCharaBone;
    if ( pCharaBone )
    {
      v9 = pCharaBone->iBoneIndex[1];
      if ( v9 >= 0 )
      {
        Actor::WaitUpdatePosutre(this);
        pModel = this->pModel;
        if ( pModel->m_pFigure )
        {
          OGLModel::getBoneTrans(this->pModel, v9, &trans, 0i64);
          z = trans.z;
          y = trans.y;
          x = trans.x;
        }
        m_fMotOffScaleTemp = pModel->m_fMotOffScaleTemp;
        if ( this->bEnableOffsetScaleFigure && m_fMotOffScaleTemp > 0.0 )
        {
          x = x / m_fMotOffScaleTemp;
          y = y / m_fMotOffScaleTemp;
          z = z / m_fMotOffScaleTemp;
        }
        LODWORD(z) ^= _xmm;
      }
    }
    goto LABEL_12;
  }
  *result = this->vMotionMoveAdj;
  return result;
}

OGLVec3 *__fastcall ActorCharaBase::GetMotionMovePosOpt(ActorCharaBase *this, OGLVec3 *result)
{
  ((void (__fastcall *)(ActorCharaBase *))this->GetMotionMovePos)(this);
  if ( (this->iActFlg1 & 0x8000) != 0 )
    result->x = 0.0;
  if ( (this->iActFlg1 & 0x10000) != 0 )
    result->y = 0.0;
  return result;
}

void __fastcall ActorCharaBase::ParamInit(ActorCharaBase *this, const CharaDataUnify *pCharaData)
{
  if ( pCharaData )
  {
    Actor::ParamInit(
      this,
      pCharaData->pActData,
      pCharaData->pHitRectData,
      pCharaData->pAtkData,
      pCharaData->pDmgSetting);
    this->pBaseStat = pCharaData->pBaseStatus;
    this->pDataUnify = pCharaData;
  }
  else
  {
    Actor::ParamInit(this, 0i64, 0i64, 0i64, 0i64);
    this->pBaseStat = 0i64;
    this->pDataUnify = 0i64;
  }
  this->pCharaBone = 0i64;
  *(_WORD *)&this->bEnableFollowBone = 0;
  this->bMotionMoveSlowAdjValue = 0;
  *(_QWORD *)&this->vMotionMoveAdj.x = 0i64;
  this->vMotionMoveAdj.z = 0.0;
  this->bSavePrevBone = 0;
  this->charaBaseFlag._Array[0] = 0;
  *(_QWORD *)&this->colorChangeData.iColorType = 0i64;
  this->colorChangeData.xFadeFrame.value = 0;
  this->colorChangeData.iOptionFlag = 0;
  *(_WORD *)&this->colorChangeData.bFadeOut = 0;
  this->bPrevMotionNotUnique = 0;
}

void __fastcall ActorCharaBase::PrevDataSet(ActorCharaBase *this)
{
  Actor::PrevDataSet(this);
  this->bCalledUpdatePostureCalc = 0;
}

void __fastcall ActorCharaBase::SetCharaColorChange(
        ActorCharaBase *this,
        const CharaActionData::Setting::Type::CharaColor *color)
{
  ActorCharaBase::ColorChange::SetSettingData(&this->colorChangeData, color);
}

void __fastcall ActorCharaBase::SetFadeOutColor(
        ActorCharaBase *this,
        const ColorHolder *color,
        int fadeFrame,
        int option)
{
  ColorHolder v4; // xmm0

  if ( fadeFrame > 0 && color->a != 0.0 )
  {
    this->colorChangeData.iColorType = 1;
    *(_QWORD *)&this->colorChangeData.xMaxFadeFrame.value = (unsigned int)(fadeFrame << 16);
    this->colorChangeData.iOptionFlag = option;
    v4 = *color;
    *(_WORD *)&this->colorChangeData.bFadeOut = 257;
    this->colorChangeData.color = v4;
  }
}

void __fastcall ActorCharaBase::SetMaterialSettingData(
        ActorCharaBase *this,
        const CharaActionData::Setting::Type::Material *material)
{
  ActionSystem *pActSys; // rdi
  int v5; // eax
  ActionSystem *v6; // rcx

  pActSys = this->pActSys;
  v5 = this->GetAssetID(this);
  if ( (unsigned int)v5 > 3 )
    v6 = pActSys;
  else
    v6 = (ActionSystem *)((char *)pActSys + 1240 * v5);
  MaterialShowControl::SetMaterialVisible(v6->defaultMaterialData, material, this->iCAngle);
}

void __fastcall ActorCharaBase::SetOffsetScaleFigure(ActorCharaBase *this, OGLFigure *pFigure, int a3)
{
  OGLModel *pModel; // rcx
  OGLModel *v5; // rax

  pModel = this->pModel;
  if ( pModel )
  {
    OGLModel::setOffsetScaleInit(pModel, pFigure, a3);
    v5 = this->pModel;
    if ( v5->m_pFigure )
    {
      v5->m_bMotOffScaleFlg = 0;
      v5->m_iMotOffScaleBoneNo[1] = -1;
      v5->m_fMotOffScaleCommon[1] = 1.0;
    }
    this->bEnableOffsetScaleFigure = 1;
  }
}

void __fastcall ActorCharaBase::SetSecondarySettingData(
        ActorCharaBase *this,
        const CharaActionData::Setting::Type::Secondary *secondary)
{
  OGLModel *pModel; // rcx
  float fForceVecY; // xmm1_4
  unsigned int uiOptionFlag; // er9
  float fForceVecZ; // xmm0_4
  float fBlend; // xmm1_4
  int iTargetBone; // edx
  OGLVec3 v8; // [rsp+30h] [rbp-18h] BYREF

  pModel = this->pModel;
  if ( pModel )
  {
    fForceVecY = secondary->fForceVecY;
    uiOptionFlag = secondary->uiOptionFlag;
    v8.x = secondary->fForceVecX;
    fForceVecZ = secondary->fForceVecZ;
    v8.y = fForceVecY;
    fBlend = secondary->fBlend;
    iTargetBone = secondary->iTargetBone;
    v8.z = fForceVecZ;
    OGLModel::setBoneForce(pModel, iTargetBone, &v8, uiOptionFlag, fBlend);
  }
}

void __fastcall ActorCharaBase::ColorChange::SetSettingData(
        ActorCharaBase::ColorChange *this,
        const CharaActionData::Setting::Type::CharaColor *dat)
{
  int iColorType; // eax
  int iFadeFrame; // eax
  bool v4; // zf
  __int64 v5; // r11
  __int64 v6; // r10

  iColorType = dat->iColorType;
  if ( !dat->iColorType )
  {
    iFadeFrame = dat->iFadeFrame;
    if ( iFadeFrame > 0 && this->iColorType )
    {
      this->xMaxFadeFrame.value = iFadeFrame << 16;
      this->xFadeFrame.value = 0;
      *(_WORD *)&this->bFadeOut = 257;
      return;
    }
    goto LABEL_11;
  }
  if ( iColorType == 2 )
  {
    if ( dat->rgba.a != 0xFF || dat->rgba.b != 0xFF || dat->rgba.g != 0xFF )
      goto LABEL_13;
    v4 = dat->rgba.r == 0xFF;
  }
  else
  {
    v4 = dat->rgba.a == 0;
  }
  if ( v4 )
  {
LABEL_11:
    *(_QWORD *)&this->iColorType = 0i64;
    this->xFadeFrame.value = 0;
    this->iOptionFlag = 0;
    *(_WORD *)&this->bFadeOut = 0;
    return;
  }
LABEL_13:
  this->iColorType = iColorType;
  this->xMaxFadeFrame.value = dat->iFadeFrame << 16;
  this->xFadeFrame.value = 0;
  ColorHolder::SetColor(&this->color, dat->rgba.r, dat->rgba.g, dat->rgba.b, dat->rgba.a);
  *(_DWORD *)(v6 + 28) = *(_DWORD *)(v5 + 12);
  *(_WORD *)(v6 + 32) = 256;
}

void __fastcall ActorCharaBase::SyncPosture(ActorCharaBase *this)
{
  OGLModel *pModel; // rcx
  OGLModel *v3; // rcx
  OGLModel *v4; // r8
  int v5; // ecx
  __int64 v6; // rdx
  __int64 v7; // rcx
  _OGLModelBone *m_pBoneInfo; // rax

  this->bSkipSyncPosture = 1;
  pModel = this->pModel;
  if ( pModel )
  {
    if ( this->bUpdatePostureAsync )
    {
      OGLModel::syncPosture(pModel);
      v3 = this->pModel;
      this->bUpdatePostureAsync = 0;
      this->bEnablePrevBoneInfoMirror = v3->m_bPrevBoneMirrorFlg != 0;
      v3->m_bPrevBoneMirrorFlg = 0;
      if ( !this->IsDisableBlendSave(this)
        && this->baseAnime.fBlend > 0.0
        && (this->baseAnimePrev.fBlend <= 0.0 || this->bSavePrevBone) )
      {
        v4 = this->pModel;
        v5 = v4->m_pFigure->m_uiBoneCount - 1;
        v6 = v5;
        if ( v5 >= 0 )
        {
          v7 = v5;
          do
          {
            --v6;
            m_pBoneInfo = v4->m_pBoneInfo;
            --v7;
            *(_OWORD *)&m_pBoneInfo[v7 + 1].pPrevStack[1].m_vPrevTrans.x = *(_OWORD *)&m_pBoneInfo[v7 + 1].pPrevStack[0].m_vPrevTrans.x;
            *(_OWORD *)&m_pBoneInfo[v7 + 1].pPrevStack[1].m_vPrevScale.y = *(_OWORD *)&m_pBoneInfo[v7 + 1].pPrevStack[0].m_vPrevScale.y;
            *(_QWORD *)&m_pBoneInfo[v7 + 1].pPrevStack[1].m_vPrevRot.z = *(_QWORD *)&m_pBoneInfo[v7 + 1].pPrevStack[0].m_vPrevRot.z;
          }
          while ( v6 >= 0 );
        }
        this->pModel->m_iBoneStackIndex = 1;
        this->bSavePrevBone = 0;
      }
    }
    this->UpdateMotionMove(this);
  }
  else
  {
    this->bUpdatePostureAsync = 0;
  }
}

void __fastcall ActorCharaBase::UpdatePosture(ActorCharaBase *this)
{
  OGLModel *pModel; // rax
  ActorCharaBase *v2; // rsi
  float v3; // xmm1_4
  float v4; // xmm3_4
  float v5; // xmm2_4
  int iActorStat; // eax
  OGLModel *v7; // rdi
  ActorCharaBase_vtbl *v8; // rax
  char *v9; // rdx
  const CharaActionData::ActionLineFrame *v10; // rax
  __int64 v11; // rax
  OGLModel *v12; // rcx
  OGLModel *v13; // rax
  float v14; // xmm7_4
  float v15; // xmm10_4
  float v16; // xmm11_4
  float v17; // xmm12_4
  int v18; // xmm13_4
  float v19; // xmm7_4
  float v20; // xmm6_4
  float v21; // xmm0_4
  float x; // xmm9_4
  float v23; // xmm7_4
  float v24; // xmm9_4
  ActorCharaBase_vtbl *v25; // rax
  unsigned __int8 v26; // r9
  OGLModel *v27; // rax
  OGLModel *v28; // rdx
  int iMotionID; // ecx
  OGLModel *v30; // rcx
  OGLMotion *v31; // r8
  __int64 v32; // rdx
  OGLMotionData **m_ppMotionData; // rax
  float m_fTotalFrame; // xmm1_4
  OGLMotionData **v35; // rax
  float v36; // xmm0_4
  OGLModel *v37; // rcx
  OGLMatrix *p_In2; // rdx
  float v39; // xmm0_4
  float y; // xmm1_4
  float z; // xmm0_4
  OGLModel *v42; // rax
  OGLModel *v43; // rax
  float v44; // xmm1_4
  int v45; // ecx
  OGLModel *v46; // rdx
  OGLModel *v47; // rax
  float fBlend; // xmm3_4
  OGLModel *v49; // rax
  OGLModel *v50; // rax
  OGLModel *v51; // rax
  float v52; // xmm1_4
  int v53; // ecx
  OGLModel *v54; // rdx
  OGLModel *v55; // rax
  float v56; // xmm3_4
  OGLModel *v57; // rax
  OGLModel *v58; // rax
  float v59; // xmm0_4
  OGLModel *v60; // rdi
  bool bPrevMotionNotUnique; // al
  MaterialShowControl *DefaultMaterialData; // rax
  bool v63; // dl
  OGLModel *v64; // r14
  __int128 v65; // xmm1
  __int128 v66; // xmm0
  __int128 v67; // xmm1
  int threadName; // [rsp+20h] [rbp-E0h]
  OGLMatrix posture; // [rsp+30h] [rbp-D0h] BYREF
  OGLMatrix In2; // [rsp+70h] [rbp-90h] BYREF
  OGLMatrix In; // [rsp+B0h] [rbp-50h] BYREF
  OGLMatrix In1; // [rsp+F0h] [rbp-10h] BYREF
  char v73; // [rsp+130h] [rbp+30h] BYREF
  char v74; // [rsp+13Ch] [rbp+3Ch] BYREF

  pModel = this->pModel;
  v2 = this;
  if ( !pModel )
    return;
  if ( this->baseAnime.iMotionID < 0 )
  {
    pModel->m_bPrevBoneMirrorFlg = 0;
    return;
  }
  if ( this->bActionFreeze )
  {
    v3 = (float)(this->vPos.z + this->vOff.z) + this->vBaseOff.z;
    v4 = (float)(this->vPos.x + this->vOff.x) + this->vBaseOff.x;
    v5 = (float)(this->vPos.y + this->vOff.y) + this->vBaseOff.y;
    pModel->m_vPosition.z = v3;
    posture.m[1] = 0.0;
    posture.m[4] = 0.0;
    posture.m[14] = v3;
    posture.m[11] = 0.0;
    *(_QWORD *)&posture.m[2] = 0i64;
    posture.m[0] = 1.0;
    *(_OWORD *)pModel->m_mWorld.m = 0x3F800000u;
    *(_QWORD *)&posture.m[6] = 0i64;
    posture.m[5] = 1.0;
    *(_OWORD *)&pModel->m_mWorld.m[4] = *(unsigned __int64 *)&posture.m[4];
    *(_QWORD *)&posture.m[8] = 0i64;
    posture.m[10] = 1.0;
    *(_OWORD *)&pModel->m_mWorld.m[8] = *(_OWORD *)&posture.m[8];
    posture.m[15] = 1.0;
    posture.m[12] = v4;
    posture.m[13] = v5;
    *(_OWORD *)&pModel->m_mWorld.m[12] = *(_OWORD *)&posture.m[12];
    pModel->m_bPostureChange = 1;
    pModel->m_vPosition.x = v4;
    pModel->m_vPosition.y = v5;
    iActorStat = this->iActorStat;
    if ( iActorStat == 65 || (unsigned int)(iActorStat - 42) <= 0xC )
    {
      v7 = this->pModel;
      OGLModel::syncPosture(v7);
      v7->bWakeThread._My_val = 1;
      EnterCriticalSection((LPCRITICAL_SECTION)&v7->m_postureReadyCond);
      WakeConditionVariable((PCONDITION_VARIABLE)&v7->m_postureReadyCond.m_conditionVariable.m_data);
      LeaveCriticalSection((LPCRITICAL_SECTION)&v7->m_postureReadyCond);
      OGLModel::updatePostureExe(v7, &posture, v5);
      *(_WORD *)&v2->bUpdatePostureAsync = 256;
    }
    v2->pModel->m_bTrans = 1;
    v2->pModel->m_bChange = 1;
    return;
  }
  if ( this->fActFrameFraction > 0.0
    && !this->bMotionMoveSlowAdjValue
    && (this->iActFlg1 & 0x240) != 0
    && (this->iActFlg1Next & 0x240) == 0 )
  {
    if ( this->fActFrameFractionPrev == 0.0
      && this->iActNo == this->iActNoPrev
      && this->iActFrame == this->iActFramePrev )
    {
      v8 = this->__vftable;
      v9 = &v73;
    }
    else
    {
      v10 = this->GetKeyFrame(this, 0i64, 0i64);
      if ( !v10 )
        goto LABEL_20;
      v2->UpdatePostureCalc(v2, (const CharaActionData::BaseAnime *)&v10->4, 0);
      v8 = v2->__vftable;
      v9 = &v74;
      this = v2;
    }
    v11 = (__int64)v8->GetMotionMovePos(this, (OGLVec3 *)v9);
    *(_QWORD *)&v2->vMotionMoveAdj.x = *(_QWORD *)v11;
    LODWORD(v11) = *(_DWORD *)(v11 + 8);
    v2->bMotionMoveSlowAdjValue = 1;
    LODWORD(v2->vMotionMoveAdj.z) = v11;
  }
LABEL_20:
  v12 = v2->pModel;
  if ( (v2->iActFlg2 & 0x8000) != 0 )
    v12->m_uiModeFlg |= 0x10u;
  else
    v12->m_uiModeFlg &= ~0x10u;
  v2->CheckMotionScale(v2);
  v13 = v2->pModel;
  v14 = (float)((float)(v2->vAngle.y * 3.1415927) / 180.0) + 1.5707964;
  v15 = (float)(v2->vPos.x + v2->vOff.x) + v2->vBaseOff.x;
  v16 = (float)(v2->vOff.y + v2->vPos.y) + v2->vBaseOff.y;
  v17 = (float)(v2->vOff.z + v2->vPos.z) + v2->vBaseOff.z;
  if ( v2->iCAngle )
  {
    v13->m_MirrorEnable = 1;
    sinf(v14);
    v20 = v14;
    v21 = cosf(v14);
    v18 = _xmm;
  }
  else
  {
    v18 = _xmm;
    LODWORD(v19) = LODWORD(v14) ^ _xmm;
    v13->m_MirrorEnable = 0;
    sinf(v19);
    v20 = v19;
    v21 = cosf(v19);
  }
  x = v2->vAngle.x;
  In2.m[9] = 0.0;
  In2.m[14] = 0.0;
  In2.m[11] = 0.0;
  In2.m[3] = 0.0;
  In2.m[4] = 0.0;
  In2.m[1] = 0.0;
  In2.m[15] = 1.0;
  v23 = *(float *)&FLOAT_1_0;
  In2.m[8] = v20;
  LODWORD(In2.m[2]) = LODWORD(v20) ^ v18;
  In2.m[10] = v21;
  In2.m[0] = v21;
  In2.m[5] = 1.0;
  *(_QWORD *)&In2.m[12] = 0i64;
  *(_QWORD *)&In2.m[6] = 0i64;
  if ( x != 0.0 )
  {
    v24 = (float)(x * 3.1415927) / 180.0;
    sinf(v24);
    In.m[1] = 0.0;
    In.m[4] = 0.0;
    In.m[7] = 0.0;
    In.m[8] = 0.0;
    In.m[11] = 0.0;
    In.m[14] = 0.0;
    LODWORD(In.m[9]) = LODWORD(v24) ^ v18;
    In.m[5] = cosf(v24);
    In.m[6] = v24;
    In.m[10] = In.m[5];
    *(_QWORD *)&In.m[2] = 0i64;
    *(_QWORD *)&In.m[12] = 0i64;
    In.m[0] = 1.0;
    In.m[15] = 1.0;
    OGLMatrix::multiplyRotate(&In2, &In);
  }
  memset(&posture, 0, sizeof(posture));
  v2->bSavePrevBone = 0;
  v25 = v2->__vftable;
  posture.m[12] = v15;
  posture.m[13] = v16;
  posture.m[14] = v17;
  posture.m[0] = 1.0;
  posture.m[5] = 1.0;
  posture.m[10] = 1.0;
  posture.m[15] = 1.0;
  if ( !v25->IsDisableBlendSave(v2)
    && (v2->baseAnime.fBlend <= 0.0
     || v2->baseAnime.iMotionID != v2->baseAnimePrev.iMotionID
     || v2->baseAnime.iMotionFileID != v2->baseAnimePrev.iMotionFileID) )
  {
    v27 = v2->pModel;
    v2->bSavePrevBone = 1;
    v27->m_iBoneStackIndex = 0;
  }
  if ( !v2->pMotionChangeModel )
    OGLModel::setMotion(v2->pModel, v2->baseAnime.iMotionFileID);
  v28 = v2->pModel;
  if ( v28->m_pMotion[0] )
  {
    iMotionID = v2->baseAnime.iMotionID;
    v28->m_iMotionIndex[0] = iMotionID;
    if ( iMotionID >= (signed int)v28->m_pMotion[0]->m_usMotionCount )
      iMotionID = 0;
    v28->m_iMotionIndex[0] = iMotionID;
    v28->m_bMotionEnd = 0;
  }
  v30 = v2->pModel;
  if ( v30->m_pMotion[0] )
  {
    v30->m_fMotionFrame[0] = v2->baseAnime.fMotionFrame;
    v31 = v30->m_pMotion[0];
    v30->m_bMotionEnd = 0;
    v32 = v30->m_iMotionIndex[0];
    m_ppMotionData = v31->m_ppMotionData;
    if ( v31->m_ppMotionData && (int)v32 >= 0 && (int)v32 < (signed int)v31->m_usMotionCount && m_ppMotionData[v32] )
      m_fTotalFrame = m_ppMotionData[v32]->m_fTotalFrame;
    else
      m_fTotalFrame = 0.0;
    if ( v30->m_fMotionFrame[0] >= m_fTotalFrame )
    {
      v35 = v31->m_ppMotionData;
      if ( v31->m_ppMotionData && (int)v32 >= 0 && (int)v32 < (signed int)v31->m_usMotionCount && v35[v32] )
        v36 = v35[v32]->m_fTotalFrame;
      else
        v36 = 0.0;
      v30->m_fMotionFrame[0] = v36 - 1.0;
      v30->m_bMotionEnd = 1;
    }
  }
  if ( v2->vScale.x == 1.0 && v2->vScale.y == 1.0 && v2->vScale.z == 1.0 )
  {
    v37 = v2->pModel;
    if ( !v37->m_pFigure )
      goto LABEL_62;
    p_In2 = &In2;
  }
  else
  {
    v39 = v2->vScale.x;
    y = v2->vScale.y;
    In1.m[1] = 0.0;
    In1.m[0] = v39;
    z = v2->vScale.z;
    In1.m[4] = 0.0;
    In1.m[11] = 0.0;
    In1.m[14] = 0.0;
    In1.m[10] = z;
    In1.m[5] = y;
    *(_QWORD *)&In1.m[2] = 0i64;
    *(_QWORD *)&In1.m[6] = 0i64;
    *(_QWORD *)&In1.m[8] = 0i64;
    *(_QWORD *)&In1.m[12] = 0i64;
    In1.m[15] = 1.0;
    OGLMatrix::multiplyFastRotate(&In1, &In1, &In2);
    v37 = v2->pModel;
    if ( !v37->m_pFigure )
      goto LABEL_62;
    p_In2 = &In1;
  }
  OGLModel::setTrans(v37, p_In2, 1, v26);
LABEL_62:
  v42 = v2->pModel;
  if ( v2->faceAnimeLow.iMotionID )
  {
    v42->m_uiUseMotionFlg |= 8u;
    v45 = v2->faceAnimeLow.iMotionID;
    v46 = v2->pModel;
    if ( v45 <= 0 )
    {
      if ( v46->m_pMotion[3] )
      {
        v46->m_iMotionIndex[3] = 1;
        v46->m_iMotionIndex[3] = (signed int)v46->m_pMotion[3]->m_usMotionCount > 1;
        v46->m_bMotionEnd = 0;
      }
      OGLModel::setMotionFrame(v2->pModel, 0.0, 3);
      v49 = v2->pModel;
      if ( v49->m_pMotion[3] )
        v49->m_fMotionBlend[3] = 0.0;
    }
    else
    {
      if ( v46->m_pMotion[3] )
      {
        v46->m_iMotionIndex[3] = v45;
        if ( v45 >= (signed int)v46->m_pMotion[3]->m_usMotionCount )
          v45 = 0;
        v46->m_iMotionIndex[3] = v45;
        v46->m_bMotionEnd = 0;
      }
      OGLModel::setMotionFrame(v2->pModel, v2->faceAnimeLow.fMotionFrame, 3);
      v47 = v2->pModel;
      fBlend = v2->faceAnimeLow.fBlend;
      if ( v47->m_pMotion[3] )
      {
        if ( fBlend <= 1.0 )
          v47->m_fMotionBlend[3] = fmaxf(0.0, fBlend);
        else
          LODWORD(v47->m_fMotionBlend[3]) = FLOAT_1_0;
      }
    }
  }
  else
  {
    v42->m_uiUseMotionFlg &= ~8u;
    v43 = v2->pModel;
    v44 = v2->faceAnimeLow.fBlend;
    if ( v43->m_pMotion[3] )
    {
      if ( v44 <= 1.0 )
        v43->m_fMotionBlend[3] = fmaxf(0.0, v44);
      else
        LODWORD(v43->m_fMotionBlend[3]) = FLOAT_1_0;
    }
  }
  v50 = v2->pModel;
  if ( v2->faceAnimeUp.iMotionID )
  {
    v50->m_uiUseMotionFlg |= 4u;
    v53 = v2->faceAnimeUp.iMotionID;
    v54 = v2->pModel;
    if ( v53 <= 0 )
    {
      if ( v54->m_pMotion[2] )
      {
        v54->m_iMotionIndex[2] = 1;
        v54->m_iMotionIndex[2] = (signed int)v54->m_pMotion[2]->m_usMotionCount > 1;
        v54->m_bMotionEnd = 0;
      }
      OGLModel::setMotionFrame(v2->pModel, 0.0, 2);
      v57 = v2->pModel;
      if ( v57->m_pMotion[2] )
        v57->m_fMotionBlend[2] = 0.0;
    }
    else
    {
      if ( v54->m_pMotion[2] )
      {
        v54->m_iMotionIndex[2] = v53;
        if ( v53 >= (signed int)v54->m_pMotion[2]->m_usMotionCount )
          v53 = 0;
        v54->m_iMotionIndex[2] = v53;
        v54->m_bMotionEnd = 0;
      }
      OGLModel::setMotionFrame(v2->pModel, v2->faceAnimeUp.fMotionFrame, 2);
      v55 = v2->pModel;
      v56 = v2->faceAnimeUp.fBlend;
      if ( v55->m_pMotion[2] )
      {
        if ( v56 <= 1.0 )
          v55->m_fMotionBlend[2] = fmaxf(0.0, v56);
        else
          LODWORD(v55->m_fMotionBlend[2]) = FLOAT_1_0;
      }
    }
  }
  else
  {
    v50->m_uiUseMotionFlg &= ~4u;
    v51 = v2->pModel;
    v52 = v2->faceAnimeLow.fBlend;
    if ( v51->m_pMotion[2] )
    {
      if ( v52 <= 1.0 )
        v51->m_fMotionBlend[2] = fmaxf(0.0, v52);
      else
        LODWORD(v51->m_fMotionBlend[2]) = FLOAT_1_0;
    }
  }
  ((void (__fastcall *)(ActorCharaBase *))v2->UpdatePartsMotion)(v2);
  v2->UpdateFaceAngle(v2);
  v58 = v2->pModel;
  v59 = v2->baseAnime.fBlend;
  if ( v58->m_pMotion[0] )
  {
    if ( v59 <= 1.0 )
      v23 = fmaxf(0.0, v59);
    v58->m_fMotionBlend[0] = v23;
  }
  v60 = v2->pModel;
  bPrevMotionNotUnique = v2->bPrevMotionNotUnique;
  if ( v60->m_pExternalMotion || v60->m_iCurrentMotion )
  {
    v2->bPrevMotionNotUnique = 1;
  }
  else if ( v2->baseAnime.fBlend <= 0.0 )
  {
    v2->bPrevMotionNotUnique = 0;
  }
  if ( v2->bPrevMotionNotUnique )
  {
    DefaultMaterialData = ActionSystem::GetDefaultMaterialData(v2->pActSys, v2);
    v63 = 0;
LABEL_111:
    MaterialShowControl::ChangeMaterialVisible(DefaultMaterialData, v63, v60, v2->iCAngle, threadName);
    goto LABEL_112;
  }
  if ( bPrevMotionNotUnique )
  {
    DefaultMaterialData = ActionSystem::GetDefaultMaterialData(v2->pActSys, v2);
    v63 = 1;
    goto LABEL_111;
  }
LABEL_112:
  v64 = v2->pModel;
  OGLModel::syncPosture(v64);
  if ( v64->m_pMotion[0] )
  {
    v65 = *(_OWORD *)&posture.m[4];
    *(_OWORD *)v64->m_mTmpMatrix.m = *(_OWORD *)posture.m;
    v64->m_fTmpBlend = 0.0;
    v66 = *(_OWORD *)&posture.m[8];
    *(_OWORD *)&v64->m_mTmpMatrix.m[4] = v65;
    v64->m_uiTmpCalcTarget = 1;
    v67 = *(_OWORD *)&posture.m[12];
    *(_OWORD *)&v64->m_mTmpMatrix.m[8] = v66;
    *(_OWORD *)&v64->m_mTmpMatrix.m[12] = v67;
    if ( v64->bCreateUpdateThread )
    {
      v64->bWakeThread._My_val = 0;
      EnterCriticalSection((LPCRITICAL_SECTION)&v64->updateCondMutex);
      EnterCriticalSection((LPCRITICAL_SECTION)&v64->updataCond);
      WakeConditionVariable((PCONDITION_VARIABLE)&v64->updataCond.m_conditionVariable.m_data);
      LeaveCriticalSection((LPCRITICAL_SECTION)&v64->updataCond);
      LeaveCriticalSection((LPCRITICAL_SECTION)&v64->updateCondMutex);
    }
    else
    {
      v64->bCreateUpdateThread = 1;
      v64->bWakeThread._My_val = 0;
      AgThread::join(&v64->m_updateThread);
      AgThread::start(&v64->m_updateThread, v64, 0x100000ui64, 0, "ModelPosture");
    }
  }
  *(_WORD *)&v2->bUpdatePostureAsync = 1;
}

void __fastcall ActorCharaBase::UpdatePostureCalc(
        ActorCharaBase *this,
        const CharaActionData::BaseAnime *locBaseAnime,
        bool bBlend)
{
  float v3; // xmm2_4
  OGLModel *pModel; // rax
  float v8; // xmm8_4
  float v9; // xmm6_4
  float v10; // xmm0_4
  OGLModel *v11; // rcx
  float v12; // xmm8_4
  OGLFigure *m_pFigure; // rax
  _OGLModelBone *m_pBoneInfo; // rax
  OGLModel *v15; // rdx
  int iMotionID; // ecx
  OGLModel *v17; // rcx
  OGLMotion *v18; // r8
  __int64 v19; // rdx
  float *p_m_fTotalFrame; // r9
  float v21; // xmm1_4
  float *v22; // rdx
  float v23; // xmm0_4
  ActorCharaBase_vtbl *v24; // rax
  OGLModel *v25; // rax
  float fBlend; // xmm0_4
  OGLModel *v27; // rdi
  OGLMatrix *v28; // rdx
  OGLModel *v29; // rax
  OGLModel *v30; // rdi
  OGLMatrix *v31; // rdx
  __int128 v32; // [rsp+20h] [rbp-60h]
  __int128 v33; // [rsp+30h] [rbp-50h]
  __int128 v34; // [rsp+40h] [rbp-40h]
  __int128 v35; // [rsp+50h] [rbp-30h]

  if ( this->pModel && locBaseAnime->iMotionID >= 0 )
  {
    this->CheckMotionScale(this);
    pModel = this->pModel;
    v8 = (float)((float)(this->vAngle.y * 3.1415927) / 180.0) + 1.5707964;
    if ( this->iCAngle )
    {
      pModel->m_MirrorEnable = 1;
    }
    else
    {
      LODWORD(v8) ^= _xmm;
      pModel->m_MirrorEnable = 0;
    }
    v9 = sinf(v8);
    v10 = cosf(v8);
    v11 = this->pModel;
    v12 = *(float *)&FLOAT_1_0;
    v34 = LODWORD(v9);
    v33 = 0ui64;
    DWORD1(v32) = 0;
    v35 = 0ui64;
    m_pFigure = v11->m_pFigure;
    *((_QWORD *)&v32 + 1) = LODWORD(v9) ^ (unsigned int)_xmm;
    *((float *)&v34 + 2) = v10;
    *(float *)&v32 = v10;
    HIDWORD(v35) = 1065353216;
    DWORD1(v33) = 1065353216;
    if ( m_pFigure && (int)m_pFigure->m_uiBoneCount > 1 )
    {
      m_pBoneInfo = v11->m_pBoneInfo;
      *(_OWORD *)m_pBoneInfo[1].mTrans.m = v32;
      *(_OWORD *)&m_pBoneInfo[1].mTrans.m[4] = v33;
      *(_OWORD *)&m_pBoneInfo[1].mTrans.m[8] = v34;
      *(_OWORD *)&m_pBoneInfo[1].mTrans.m[12] = v35;
      v11->m_pBoneInfo[1].bChangeFlg = 1;
      v11->m_pBoneInfo[1].bTransFlg = 1;
    }
    if ( !this->pMotionChangeModel )
      OGLModel::setMotion(this->pModel, locBaseAnime->iMotionFileID);
    v15 = this->pModel;
    if ( v15->m_pMotion[0] )
    {
      iMotionID = locBaseAnime->iMotionID;
      v15->m_iMotionIndex[0] = iMotionID;
      if ( iMotionID >= (signed int)v15->m_pMotion[0]->m_usMotionCount )
        iMotionID = 0;
      v15->m_iMotionIndex[0] = iMotionID;
      v15->m_bMotionEnd = 0;
    }
    v17 = this->pModel;
    if ( v17->m_pMotion[0] )
    {
      v17->m_fMotionFrame[0] = locBaseAnime->fMotionFrame;
      v18 = v17->m_pMotion[0];
      v17->m_bMotionEnd = 0;
      v19 = v17->m_iMotionIndex[0];
      if ( v18->m_ppMotionData
        && (int)v19 >= 0
        && (int)v19 < (signed int)v18->m_usMotionCount
        && (p_m_fTotalFrame = &v18->m_ppMotionData[v19]->m_fTotalFrame) != 0i64 )
      {
        v21 = *p_m_fTotalFrame;
      }
      else
      {
        v21 = 0.0;
      }
      if ( v17->m_fMotionFrame[0] >= v21 )
      {
        if ( v18->m_ppMotionData
          && (int)v19 >= 0
          && (int)v19 < (signed int)v18->m_usMotionCount
          && (v22 = &v18->m_ppMotionData[v19]->m_fTotalFrame) != 0i64 )
        {
          v23 = *v22;
        }
        else
        {
          v23 = 0.0;
        }
        v17->m_fMotionFrame[0] = v23 - 1.0;
        v17->m_bMotionEnd = 1;
      }
    }
    v24 = this->__vftable;
    if ( bBlend )
    {
      ((void (__fastcall *)(ActorCharaBase *))v24->UpdatePartsMotion)(this);
      v25 = this->pModel;
      fBlend = locBaseAnime->fBlend;
      if ( v25->m_pMotion[0] )
      {
        if ( fBlend <= 1.0 )
          v12 = fmaxf(0.0, fBlend);
        v25->m_fMotionBlend[0] = v12;
      }
      v27 = this->pModel;
      OGLModel::syncPosture(v27);
      v27->bWakeThread._My_val = 1;
      EnterCriticalSection((LPCRITICAL_SECTION)&v27->m_postureReadyCond);
      WakeConditionVariable((PCONDITION_VARIABLE)&v27->m_postureReadyCond.m_conditionVariable.m_data);
      LeaveCriticalSection((LPCRITICAL_SECTION)&v27->m_postureReadyCond);
      OGLModel::updatePostureExe(v27, 0i64, v3);
      OGLModel::updatePostureSecExe(v27, v28, v3);
      this->pModel->m_bPrevBoneMirrorFlg = 0;
    }
    else
    {
      if ( !v24->IsDisableBlendSave(this) )
        this->pModel->m_iBoneStackIndex = 0;
      this->pModel->m_bPrevBoneMirrorFlg = 0;
      ((void (__fastcall *)(ActorCharaBase *))this->UpdatePartsMotion)(this);
      v29 = this->pModel;
      if ( v29->m_pMotion[0] )
        v29->m_fMotionBlend[0] = 0.0;
      v30 = this->pModel;
      OGLModel::syncPosture(v30);
      v30->bWakeThread._My_val = 1;
      EnterCriticalSection((LPCRITICAL_SECTION)&v30->m_postureReadyCond);
      WakeConditionVariable((PCONDITION_VARIABLE)&v30->m_postureReadyCond.m_conditionVariable.m_data);
      LeaveCriticalSection((LPCRITICAL_SECTION)&v30->m_postureReadyCond);
      OGLModel::updatePostureExe(v30, 0i64, v3);
      OGLModel::updatePostureSecExe(v30, v31, v3);
    }
    this->bCalledUpdatePostureCalc = 1;
  }
}

std::_Func_base<void,Actor &> *__fastcall std::_Func_impl<_lambda_974527dfb5af11aa521a5466f2f11999_,std::allocator<int>,void,Actor &>::_Copy(
        std::_Func_impl<<lambda_974527dfb5af11aa521a5466f2f11999>,std::allocator<int>,void,Actor &> *this,
        void *_Where)
{
  if ( _Where )
  {
    *(_QWORD *)_Where = &std::_Func_impl<_lambda_974527dfb5af11aa521a5466f2f11999_,std::allocator<int>,void,Actor &>::`vftable';
    *(std::_Compressed_pair<std::allocator<int>,<lambda_974527dfb5af11aa521a5466f2f11999>,1> *)((char *)_Where + 8) = this->_Mypair;
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

void __fastcall std::_Func_impl<_lambda_974527dfb5af11aa521a5466f2f11999_,std::allocator<int>,void,Actor &>::_Do_call(
        std::_Func_impl<<lambda_974527dfb5af11aa521a5466f2f11999>,std::allocator<int>,void,Actor &> *this,
        Actor *<_Args_0>)
{
  ActorCharaBase *v4; // rdx
  const CharaActionData::ActionLineFrame *v5; // rdx

  if ( <_Args_0>->GetActorType(<_Args_0>) == WEAPON )
  {
    v4 = this->_Mypair._Myval2.__this;
    if ( v4->iPlayerID == <_Args_0>->iPlayerID && v4 == (ActorCharaBase *)<_Args_0>[1].__vftable )
    {
      v5 = *this->_Mypair._Myval2.pFrame;
      if ( v5->cam.iType == <_Args_0>[1].iDrawPriSub )
        ((void (__fastcall *)(Actor *, $FDE819AA8FD4FE0CD927010514BE7533 *))<_Args_0>->__vftable[1]._MovePos)(
          <_Args_0>,
          &v5->4);
    }
  }
}

std::_Align_type<double,64> *__fastcall __Get____Func_impl_U_unnamed_type_nothing___1__InstallGFxInterface_extension__YAXXZ_V__allocator_H_std__VValue_GFx_Scaleform__AEAVGFXIMovieContext_3_PEBV678_I_std__EEBAPEBXXZ(
        _Mtx_internal_imp_t *mtx)
{
  return &mtx->cs;
}

const type_info *__fastcall std::_Func_impl<_lambda_974527dfb5af11aa521a5466f2f11999_,std::allocator<int>,void,Actor &>::_Target_type(
        std::_Func_impl<<lambda_974527dfb5af11aa521a5466f2f11999>,std::allocator<int>,void,Actor &> *this)
{
  return (const type_info *)&_lambda_974527dfb5af11aa521a5466f2f11999_ `RTTI Type Descriptor';
}

