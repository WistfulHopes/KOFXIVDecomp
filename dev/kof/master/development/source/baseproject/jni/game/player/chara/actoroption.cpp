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
#include "dev/kof/master/development/source/baseproject/jni/game/player/actor.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actionsystem.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/check/cameracheck.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglvec3.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actionblackout.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actorobject.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actorcharabase.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmatrix.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmodel.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmaterial.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaprojectdataformat.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/future_asset.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/math.cpp"

std::piecewise_construct_t std::piecewise_construct; // 0x1408A05BD
ActorOption::~ActorOption(); // 0x140193400
void ActorOption::CreateInit(); // 0x140195710
void ActorOption::Dispose(); // 0x1401957A0
void ActorOption::ParamInit(const CharaDataUnify * pCharaData, ActorChara * pOwner); // 0x140195810
void ActorOption::ActionChangeReqBase(const long baseActID, const long frame, const bool bState); // 0x140195970
void ActorOption::PrevDataSet(); // 0x140195D30
void ActorOption::PreUpdate(); // 0x140195DF0
void ActorOption::ActionChanged(); // 0x1401963B0
void ActorOption::BecomUpdate(); // 0x14002E7C0
void ActorOption::ActionParamInit(); // 0x140196420
void ActorOption::ActionFlagCheck(); // 0x140196430
void ActorOption::MainUpdate(); // 0x1401964A0
void ActorOption::LateUpdate(); // 0x140196C30
void ActorOption::Draw(); // 0x140196C80
void ActorOption::CheckUseZOffset(); // 0x140196F50
void ActorOption::UpdateMotionMove(); // 0x140197030
void ActorOption::UpdatePosition(); // 0x140197730
bool ActorOption::_branchIsShotAttackHitOrGuard(float param); // 0x140197970
bool ActorOption::_branchIsShotAttackHit(float param); // 0x140197A10
bool ActorOption::_branchIsShotAttackGuard(float param); // 0x140197A80
bool ActorOption::_branchIsShotFlag1(float param); // 0x140197AF0
bool ActorOption::_branchIsShotFlag2(float param); // 0x140197B60
bool ActorOption::_branchIsShotFlag3(float param); // 0x140197BD0
bool ActorOption::_branchIsShotFlag4(float param); // 0x140197C40
bool ActorOption::_branchIsShotAlive(float param); // 0x140197CB0
bool ActorOption::_branchIsShotNotAlive(float param); // 0x140197D20
void ActorOption::BranchCheck(); // 0x140197D90
void ActorOption::DefaultBranchCheck(); // 0x140197F30
bool ActorOption::IsBlackStop(); // 0x1401985B0
OGLVec3 ActorOption::GetCenterPosition(); // 0x14018BE80
OGLVec3 ActorOption::GetBindCenterPosition(); // 0x140198640
void ActorOption::SetActionBranchKey(long branchKey); // 0x1401986A0
bool ActorOption::IsMotionCameraInvisibleActor(); // 0x1401986E0
long ActorOption::GetFounderPlayerID(); // 0x140198760
bool ActorOption::IsInvisible(); // 0x140198780
bool ActorOption::IsModelDraw(); // 0x140198800
void ActorOption::SetShotFireData(const CharaActionData::Shot::Type::Fire & fireData); // 0x140198880
void ActorOption::SetEffectCreateData(const CharaActionData::Effect::Type::Set & setData); // 0x1401988A0
void ActorOption::SetExclusiveData(const CharaActionData::Exclusive & exclusive, bool bNextData); // 0x1401988F0
void ActorOption::SetSpecialEffectSettingData(const CharaActionData::Setting::Type::SpEffect & spEffect); // 0x140198C00
void ActorOption::SetAttackGuard(bool flag); // 0x140198C80
void ActorOption::SetAttackHit(bool flag); // 0x140198C90
void ActorOption::SetReady(bool bInit); // 0x140198CA0
void ActorOption::SetupAction(bool bResultDemo, long subType); // 0x140198CF0
bool ActorOption::IsTransmitHitStop(); // 0x140198D90
void ActorOption::SetHitStop(long hitStop, bool bDelay); // 0x140198DB0
bool ActorOption::IsMamahahaReady(); // 0x140198E50
bool ActorOption::IsMamahahaWaitingScreenOut(); // 0x140198E80
ActorOption * ActorOption::CreateActorOption(const CharaDataUnify * pCharaData, ActorChara * pOwner); // 0x140198ED0//decompilation failure at 1408A05BD!
void __fastcall ActorShot::~ActorShot(ActorWeapon *this)
{
  this->__vftable = (ActorWeapon_vtbl *)&Actor::`vftable';
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

unsigned __int8 __fastcall std::bitset<4>::reference::operator bool(std::bitset<4>::reference *this)
{
  unsigned __int64 Mypos; // rdx
  unsigned int v2; // eax

  Mypos = this->_Mypos;
  if ( Mypos >= 4 )
    std::_Xout_of_range("invalid bitset<N> position");
  v2 = this->_Pbitset[Mypos >> 5]._Array[0];
  return _bittest((const int *)&v2, this->_Mypos & 0x1F);
}

void __fastcall ActorOption::ActionChangeReqBase(
        ActorOption *this,
        const int baseActID,
        const int frame,
        const bool bState)
{
  const CharaBaseStatus *pBaseStat; // rdi
  __int64 v6; // rsi
  __int64 iActionID; // rdx
  __int64 v10; // rdx
  ActorChara *v11; // rax
  unsigned __int8 v12; // di
  __int64 v13; // rdx
  ActorChara *pOwner; // rcx

  pBaseStat = this->pBaseStat;
  v6 = baseActID;
  if ( pBaseStat->CheckFileID(&pBaseStat->CharaFileBase) && (unsigned int)v6 < pBaseStat->dataHeader.uiCommonActionCount )
  {
    iActionID = (unsigned int)pBaseStat->pCommonAct[v6].iActionID;
    if ( (int)iActionID >= 0 )
    {
      this->ActionChangeReq(this, iActionID, frame);
      if ( bState )
      {
        switch ( this->iCharNo )
        {
          case 0x320:
            v12 = 0;
            switch ( (int)v6 )
            {
              case 4:
                v13 = 3i64;
                break;
              case 5:
                v13 = 4i64;
                break;
              case 6:
                v13 = 5i64;
                break;
              case 7:
                v13 = 6i64;
                break;
              case 9:
                v13 = 15i64;
                v12 = 1;
                break;
              case 10:
              case 52:
              case 59:
              case 62:
              case 73:
                v13 = 9i64;
                v12 = 1;
                break;
              case 11:
              case 12:
              case 13:
              case 14:
                v13 = 16i64;
                v12 = 1;
                break;
              case 30:
                v13 = 7i64;
                break;
              case 49:
              case 50:
              case 51:
                v13 = 8i64;
                v12 = 1;
                break;
              case 53:
                v13 = 19i64;
                v12 = 1;
                break;
              case 57:
              case 58:
                v13 = 10i64;
                v12 = 1;
                break;
              case 61:
                v13 = 11i64;
                v12 = 1;
                break;
              case 71:
                v13 = 17i64;
                v12 = 1;
                break;
              case 72:
                v13 = 18i64;
                v12 = 1;
                break;
              case 212:
                v13 = 12i64;
                v12 = 1;
                break;
              case 213:
                v13 = 13i64;
                v12 = 1;
                break;
              case 229:
              case 230:
              case 231:
                v13 = 14i64;
                v12 = 1;
                break;
              case 238:
                v13 = 1i64;
                break;
              default:
                v13 = 0i64;
                break;
            }
            this->StateChangeReq(this, v13);
            pOwner = this->pOwner;
            if ( pOwner )
              pOwner->SetMamahahaBusy(pOwner, v12);
            break;
          case 0x321:
            if ( (int)v6 >= 9 )
            {
              if ( (int)v6 <= 18 )
              {
                v10 = 21i64;
              }
              else
              {
                if ( (unsigned int)(v6 - 229) > 2 )
                  goto LABEL_13;
                v10 = 22i64;
              }
LABEL_11:
              v11 = this->pOwner;
              if ( v11 )
              {
                this->iOwnerActionNo = v11->iActNo;
                this->StateChangeReq(this, v10);
                return;
              }
              goto LABEL_14;
            }
LABEL_13:
            v10 = 0i64;
LABEL_14:
            this->StateChangeReq(this, v10);
            return;
          case 0x322:
            switch ( (int)v6 )
            {
              case 4:
              case 5:
              case 6:
              case 7:
              case 9:
              case 10:
              case 14:
              case 15:
                v10 = 20i64;
                goto LABEL_11;
              default:
                goto LABEL_13;
            }
          case 0x323:
            if ( (unsigned int)(v6 - 4) <= 1 )
            {
              v10 = 23i64;
              goto LABEL_11;
            }
            goto LABEL_13;
        }
      }
    }
  }
}

void __fastcall ActorOption::ActionChanged(ActorOption *this)
{
  __int64 v2; // rcx
  int iCAngle; // er8
  char *v4; // rcx

  ActorCharaBase::ActionChanged(this);
  this->bShotErased = 0;
  v2 = 9i64;
  this->mamahahaParam.bsOptionFlag._Array[0] = 0;
  iCAngle = this->iCAngle;
  if ( !this->iPlayerID )
    v2 = 6i64;
  v4 = (char *)this->pActSys + v2;
  if ( v4[241048] || v4[241049] != iCAngle )
  {
    v4[241048] = 0;
    v4[241049] = iCAngle;
    v4[241050] = 1;
  }
}

void __fastcall ActorOption::ActionFlagCheck(ActorOption *this)
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
  if ( (this->iActFlg2 & 0x20) != 0 )
    this->bParentBind = 0;
}

// attributes: thunk
void __fastcall ActorOption::ActionParamInit(ActorOption *this)
{
  ActorCharaBase::ActionParamInit(this);
}

void __fastcall ActorWeapon::ActionFlagCheck(_SETJMP_FLOAT128 *JumpBuffer)
{
  ;
}

void __fastcall ActorOption::BranchCheck(ActorOption *this)
{
  ActorChara *pOwner; // r9
  int iCharNo; // er10
  std::bitset<61>::reference *v4; // rax
  unsigned __int64 Mypos; // rcx
  __int64 v6; // rdx
  int v7; // eax
  ActorChara *v8; // rax
  int value; // ecx
  $FDE819AA8FD4FE0CD927010514BE7533 *v10; // rax
  _BOOL8 v11; // rdx
  std::bitset<61>::reference result; // [rsp+28h] [rbp-20h] BYREF

  pOwner = this->pOwner;
  if ( pOwner )
  {
    iCharNo = this->iCharNo;
    if ( iCharNo == 800 )
    {
      v4 = std::bitset<21>::operator[]((std::bitset<61> *)&this->mamahahaParam.bsOptionFlag, &result, 2ui64);
      Mypos = v4->_Mypos;
      if ( Mypos >= 4 )
        std::_Xout_of_range("invalid bitset<N> position");
      v6 = v4->_Mypos & 0x1F;
      v7 = *((_DWORD *)v4->_Pbitset->_Array + (Mypos >> 5));
      if ( _bittest(&v7, v6) )
        goto LABEL_21;
    }
    if ( iCharNo == 802 )
    {
LABEL_21:
      if ( pOwner->IsDamaged(pOwner) )
      {
        *(_QWORD *)&this->xHitStopFrame.value = 0i64;
        return;
      }
      v8 = this->pOwner;
      value = v8->xHitStopFrame.value;
      if ( value )
      {
        this->xHitStopFrame.value = value;
        this->xHitStopTotal.value = v8->xHitStopTotal.value;
      }
    }
  }
  if ( !this->xHitStopFrame.value && !this->IsBlackStop(this) )
  {
    v10 = Actor::_branchConfirm(this);
    if ( v10 )
    {
      this->ActionChangeReq(this, v10->iBase[2], v10->iBase[3]);
      if ( this->IsActionDataChanged(this) )
        ((void (__fastcall *)(ActorOption *, const CharaActionData *, OGLModel *, const CharaHitRect *, __int64))this->ChangeActionDataReq)(
          this,
          this->pAct,
          this->pMotionChangeModel,
          this->pHitRect,
          -2i64);
      if ( (this->iMoveOption & 2) != 0 )
      {
        ((void (__fastcall *)(ActorOption *))this->RequestPositionX)(this);
        ((void (__fastcall *)(ActorOption *))this->RequestPositionY)(this);
      }
      LOBYTE(v11) = 1;
      this->SetInvalidDefaultBranch(this, v11);
    }
  }
}

void __fastcall ActorOption::CheckUseZOffset(ActorOption *this, _BOOL8 a2)
{
  int iActFlg2; // eax
  ActorOption *v3; // rbx
  _BOOL8 v4; // rdx
  bool v5; // cf
  ActorOption_vtbl *v6; // rax
  int iCharNo; // eax
  std::bitset<4>::reference *v8; // rax
  Actor *pOwner; // rcx
  Actor *v10; // rcx
  std::bitset<61>::reference result; // [rsp+20h] [rbp-18h] BYREF

  iActFlg2 = this->iActFlg2;
  v3 = this;
  if ( (iActFlg2 & 0x10000) != 0 )
  {
    LOBYTE(a2) = 1;
    this->SetUseZOffset(this, a2);
    return;
  }
  v4 = 0i64;
  v5 = (iActFlg2 & 0x20000) != 0;
  v6 = this->__vftable;
  if ( v5 )
    goto LABEL_15;
  v6->SetUseZOffset(this, 0);
  iCharNo = v3->iCharNo;
  if ( iCharNo == 800 )
  {
    v8 = (std::bitset<4>::reference *)std::bitset<21>::operator[](
                                        (std::bitset<61> *)&v3->mamahahaParam.bsOptionFlag,
                                        &result,
                                        0i64);
    if ( !std::bitset<4>::reference::operator bool(v8) )
      return;
LABEL_9:
    pOwner = v3->pOwner;
    if ( !pOwner || !Actor::IsUseZOffset(pOwner) )
      return;
    goto LABEL_14;
  }
  if ( (unsigned int)(iCharNo - 801) > 2 )
  {
    if ( v3->GetActionSubCategoryID(v3, v3->iActNo, 0) != 1 )
      goto LABEL_9;
LABEL_14:
    v6 = v3->__vftable;
    this = v3;
    LOBYTE(v4) = 1;
LABEL_15:
    v6->SetUseZOffset(this, v4);
    return;
  }
  v10 = v3->pOwner;
  if ( v10 && Actor::IsUseZOffset(v10) )
    goto LABEL_14;
}

ActorOption *__fastcall ActorOption::CreateActorOption(const CharaDataUnify *pCharaData, ActorChara *pOwner)
{
  BattleSystem::BattleController *v4; // rbx
  BattleSystem::BattleController *v5; // rax
  ActorOption *v6; // rdi
  SimpleQueue<ActorOption,4>::Queue *pFront; // rcx
  ActorOption *pData; // r14
  SimpleQueue<ActorOption,4>::Queue *pNext; // rax
  ActionSystem::ActorList *pEmpty; // rsi
  ActionSystem::ActorList **ppPriEnd; // rax
  ActionSystem::ActorList *v12; // rcx
  ActionSystem::ActorList *v13; // rax
  ActionSystem::ActorList *v14; // rdx
  _BOOL8 v15; // rdx
  BattleSystem::BattleController *v17; // [rsp+58h] [rbp+10h]

  if ( !pOwner || !pCharaData )
    return 0i64;
  v4 = BattleSystem::BattleController::instance;
  if ( !BattleSystem::BattleController::instance )
  {
    v17 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v17);
    v4 = v5;
    BattleSystem::BattleController::instance = v5;
  }
  if ( !v4->actSystem.pRealiz || v4->actSystem.iMaxPriority <= 5 )
    return 0i64;
  v6 = 0i64;
  if ( v4->actSystem.pEmpty && v4->actSystem.actorOptionQue.uiRestCount )
  {
    pFront = v4->actSystem.actorOptionQue.pFront;
    pData = pFront->pData;
    pNext = pFront->pNext;
    v4->actSystem.actorOptionQue.pFront = pNext;
    if ( !pNext )
      v4->actSystem.actorOptionQue.pBack = 0i64;
    if ( v4->actSystem.actorOptionQue.pUseFront )
      v4->actSystem.actorOptionQue.pUseBack->pNext = pFront;
    else
      v4->actSystem.actorOptionQue.pUseFront = pFront;
    v4->actSystem.actorOptionQue.pUseBack = pFront;
    pFront->pNext = 0i64;
    --v4->actSystem.actorOptionQue.uiRestCount;
    if ( pData )
    {
      pData->CreateInit(pData);
      pData->pActSys = &v4->actSystem;
      pEmpty = v4->actSystem.pEmpty;
      ppPriEnd = v4->actSystem.ppPriEnd;
      v12 = ppPriEnd[5];
      ppPriEnd[5] = pEmpty;
      v13 = v4->actSystem.pEmpty;
      v14 = v13->pNext;
      v4->actSystem.pEmpty = v13->pNext;
      if ( v14 )
        v14->pBefore = 0i64;
      if ( v12 )
      {
        v12->pNext = pEmpty;
        pEmpty->pBefore = v12;
      }
      else
      {
        *((_QWORD *)v4->actSystem.ppPriStart + 5) = pEmpty;
        pEmpty->pBefore = 0i64;
      }
      pEmpty->pNext = 0i64;
      pData->iPriority = 5;
      pData->systemStat = SCREEN_OUT;
      pData->uiActorID = v4->actSystem.uiActorID;
      pData->ActionParamInit(pData);
      pEmpty->pActor = pData;
      ++v4->actSystem.pAliveNum[5];
      ++v4->actSystem.iAliveTotal;
      ++v4->actSystem.uiActorID;
      v6 = pData;
      pData->ParamInit(pData, pCharaData, pOwner);
      LOBYTE(v15) = 1;
      pData->SetOptionAsset(pData, v15);
    }
  }
  return v6;
}

void __fastcall ActorOption::CreateInit(ActorOption *this)
{
  ActorCharaBase::CreateInit(this);
  this->iOwnerActionNo = -1;
  this->pOwner = 0i64;
  *(_WORD *)&this->bPositionInit = 0;
  *(_WORD *)&this->bExistExtraModel = 0;
  this->bShotErased = 0;
  *(_QWORD *)&this->mamahahaParam.vInitOffsetPos.x = 0i64;
  *(_QWORD *)&this->mamahahaParam.vInitOffsetPos.z = 0i64;
  *(_QWORD *)&this->mamahahaParam.vStartPos.y = 0i64;
  *(_QWORD *)&this->mamahahaParam.vEndPos.x = 0i64;
  this->mamahahaParam.vEndPos.z = 0.0;
  strcpy((char *)&this->mamahahaParam.fMoveCount, "ÍÌL=");
  this->mamahahaParam.iOffsetMirrorOwnerAct = -1;
  *(_QWORD *)this->mamahahaParam.bsOptionFlag._Array = 0i64;
  *(_QWORD *)&this->mamahahaParam.xMergeCountMax.value = 0i64;
  *(_QWORD *)&this->mamahahaParam.vMergePos.y = 0i64;
}

void __fastcall ActorOption::DefaultBranchCheck(ActorOption *this)
{
  float v2; // xmm6_4
  _BOOL8 v3; // rdx
  _BOOL8 v4; // r9
  float v5; // xmm0_4
  int iCAngle; // eax
  ActorOption_vtbl *v7; // rax
  ActorOption *v8; // rcx
  ActorOption_vtbl *v9; // rax
  ActorOption *v10; // rcx
  _BOOL8 v11; // r9
  __int64 v12; // rdx
  MaterialShowControl *DefaultMaterialData; // rax
  bool v14; // zf
  float v15; // xmm0_4
  __int64 v16; // rax
  _BOOL8 v17; // r9
  _BOOL8 v18; // r9

  if ( !this->IsInvalidDefaultBranch(this) && !this->xHitStopFrame.value && !this->IsBlackStop(this) )
  {
    v2 = this->mamahahaParam.vEndPos.x - this->mamahahaParam.vStartPos.x;
    v5 = sqrtf(
           (float)((float)(this->mamahahaParam.vEndPos.y - this->mamahahaParam.vStartPos.y)
                 * (float)(this->mamahahaParam.vEndPos.y - this->mamahahaParam.vStartPos.y))
         + (float)(v2 * v2));
    iCAngle = this->iCAngle;
    if ( iCAngle )
      LODWORD(v2) ^= _xmm;
    LOBYTE(v3) = iCAngle != this->iCAngleBuf && (this->iActFlg2 & 0x400) == 0;
    switch ( this->iActorStat )
    {
      case 0:
        if ( this->iCharNo == 800 )
        {
          if ( v3 )
            goto LABEL_51;
          if ( v5 >= 15.0 && v2 >= 10.0 )
            goto LABEL_55;
          if ( v5 >= 5.0 && v2 >= 3.0 )
            goto LABEL_58;
          goto LABEL_17;
        }
        return;
      case 1:
        if ( this->bActionEnd || this->iActionLoopCount > 0 )
        {
          LOBYTE(v3) = 1;
          this->SetEndSetupFlag(this, v3);
          DefaultMaterialData = ActionSystem::GetDefaultMaterialData(this->pActSys, this);
          MaterialShowControl::CreateBaseModelShadow(DefaultMaterialData);
          this->ActionChangeReq(this, -1, 0);
          if ( this->iCharNo == 800 )
          {
            v14 = this->iCAngle == 0;
            v15 = this->vPos.x - this->pOwner->vPos.x;
            this->mamahahaParam.vInitOffsetPos.x = v15;
            if ( !v14 )
              LODWORD(this->mamahahaParam.vInitOffsetPos.x) = LODWORD(v15) ^ _xmm;
            this->mamahahaParam.vInitOffsetPos.y = this->vPos.y;
            this->vPos.z = -10.0;
            this->vBasePos.z = -10.0;
            this->mamahahaParam.vInitOffsetPos.z = -10.0;
            this->mamahahaParam.fMoveCount = 0.050000001;
          }
        }
        return;
      case 3:
        if ( v3 )
          goto LABEL_51;
        if ( v5 >= 15.0 && v2 >= 10.0 )
          goto LABEL_55;
        if ( v5 >= 4.0 && v2 <= -2.0 )
          goto LABEL_61;
        if ( v2 < 3.0 )
          goto LABEL_20;
        return;
      case 4:
        if ( v3 )
          goto LABEL_51;
        if ( v5 >= 15.0 && v2 >= 10.0 )
          goto LABEL_55;
        if ( v5 >= 5.0 && v2 >= 3.0 )
          goto LABEL_58;
        if ( v2 > -2.0 )
          goto LABEL_20;
        return;
      case 5:
        if ( v5 < 4.0 || v2 > -2.0 )
        {
          if ( v5 < 10.0 && v2 < 8.0 )
          {
            v9 = this->__vftable;
            LOBYTE(v4) = 1;
            v10 = this;
            if ( v3 )
              goto LABEL_52;
            ((void (__fastcall *)(ActorOption *, __int64))v9->ActionChangeReqBase)(this, 7i64);
          }
        }
        else
        {
          v9 = this->__vftable;
          LOBYTE(v4) = 1;
          v10 = this;
          if ( v3 )
            goto LABEL_52;
          ((void (__fastcall *)(ActorOption *, __int64))v9->ActionChangeReqBase)(this, 5i64);
        }
        return;
      case 6:
        if ( v3 )
          goto LABEL_51;
        if ( v5 >= 15.0 && v2 >= 10.0 )
          goto LABEL_55;
LABEL_17:
        if ( v5 >= 4.0 && v2 <= -2.0 )
          goto LABEL_61;
        goto $LN97_3;
      case 7:
        if ( !this->bActionEnd )
          return;
        if ( v3 )
        {
LABEL_51:
          v9 = this->__vftable;
          LOBYTE(v4) = 1;
          v10 = this;
LABEL_52:
          v9->ActionChangeReqBase(v10, 30, 0, v4);
          this->CAngleChangeReq(this);
        }
        else if ( v5 < 15.0 || v2 < 10.0 )
        {
          if ( v5 < 5.0 || v2 < 3.0 )
          {
            if ( v5 < 4.0 || v2 > -2.0 )
            {
LABEL_20:
              v7 = this->__vftable;
              v8 = this;
LABEL_21:
              v7->SetReady(v8, 0);
            }
            else
            {
LABEL_61:
              LOBYTE(v4) = 1;
              this->ActionChangeReqBase(this, 5, 0, v4);
            }
          }
          else
          {
LABEL_58:
            LOBYTE(v4) = 1;
            this->ActionChangeReqBase(this, 4, 0, v4);
          }
        }
        else
        {
LABEL_55:
          LOBYTE(v4) = 1;
          this->ActionChangeReqBase(this, 6, 0, v4);
        }
        break;
      case 8:
        if ( !this->bActionEnd )
          return;
        ((void (__fastcall *)(ActorOption *, _BOOL8))this->ResetSpeed)(this, v3);
        v12 = 52i64;
        goto LABEL_88;
      case 9:
      case 0xD:
        v8 = this;
        v7 = this->__vftable;
        if ( this->bActionEnd )
          goto LABEL_21;
        this->mamahahaParam.fMoveCount = (float)((float)((float)this->iActFrame
                                                       / (float)v7->GetActionEndFrame(this, this->iActNo, 0))
                                               * 0.039999999)
                                       + 0.0099999998;
        return;
      case 0xA:
        if ( !this->bActionEnd )
          return;
        ((void (__fastcall *)(ActorOption *, _BOOL8))this->ResetSpeed)(this, v3);
        v12 = 59i64;
        goto LABEL_88;
      case 0xB:
        if ( !this->bActionEnd )
          return;
        ((void (__fastcall *)(ActorOption *, _BOOL8))this->ResetSpeed)(this, v3);
        v12 = 62i64;
        goto LABEL_88;
      case 0xC:
        v16 = ((__int64 (__fastcall *)(ActorOption *, _BOOL8))this->GetTargetActor)(this, v3);
        if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v16 + 3048i64))(v16) )
          goto LABEL_20;
        if ( !this->bActionEnd )
          return;
        this->ResetSpeed(this);
        v12 = 213i64;
        goto LABEL_88;
      case 0xE:
      case 0x16:
        return;
      case 0xF:
        if ( ((unsigned __int8 (__fastcall *)(ActorChara *, _BOOL8))this->pOwner->IsDamaged)(this->pOwner, v3) )
          goto LABEL_20;
        if ( this->bActionEnd )
        {
          this->ResetSpeed(this);
          LOBYTE(v17) = 1;
          this->ActionChangeReqBase(this, 11, 0, v17);
        }
        return;
      case 0x10:
        if ( ((unsigned __int8 (__fastcall *)(ActorChara *, _BOOL8))this->pOwner->IsDamaged)(this->pOwner, v3) )
          goto LABEL_83;
        return;
      case 0x11:
        if ( !((unsigned __int8 (__fastcall *)(ActorChara *, _BOOL8))this->pOwner->IsDamaged)(this->pOwner, v3) )
          goto $LN97_3;
LABEL_83:
        this->ResetSpeed(this);
        LOBYTE(v18) = 1;
        this->ActionChangeReqBase(this, 53, 0, v18);
        return;
      case 0x12:
        if ( !this->bActionEnd )
          return;
        ((void (__fastcall *)(ActorOption *, _BOOL8))this->ResetSpeed)(this, v3);
        v12 = 73i64;
LABEL_88:
        LOBYTE(v11) = 1;
        this->ActionChangeReqBase(this, v12, 0, v11);
        this->mamahahaParam.fMoveCount = 0.0099999998;
        return;
      default:
$LN97_3:
        if ( this->bActionEnd )
          goto LABEL_20;
        return;
    }
  }
}

void __fastcall ActorOption::Dispose(ActorOption *this)
{
  *(_QWORD *)&this->mamahahaParam.vInitOffsetPos.x = 0i64;
  *(_QWORD *)&this->mamahahaParam.vInitOffsetPos.z = 0i64;
  *(_QWORD *)&this->mamahahaParam.vStartPos.y = 0i64;
  *(_QWORD *)&this->mamahahaParam.vEndPos.x = 0i64;
  this->mamahahaParam.vEndPos.z = 0.0;
  strcpy((char *)&this->mamahahaParam.fMoveCount, "ÍÌL=");
  this->mamahahaParam.iOffsetMirrorOwnerAct = -1;
  *(_QWORD *)this->mamahahaParam.bsOptionFlag._Array = 0i64;
  *(_QWORD *)&this->mamahahaParam.xMergeCountMax.value = 0i64;
  *(_QWORD *)&this->mamahahaParam.vMergePos.y = 0i64;
  *(_WORD *)&this->bExistExtraModel = 0;
  this->bShotErased = 0;
  this->iOwnerActionNo = -1;
  ActorCharaBase::Dispose(this);
}

void __fastcall ActorOption::Draw(ActorOption *this)
{
  ActionSystem *pActSys; // rcx
  ActionSystem *v3; // rax
  float fFadeAlpha; // xmm6_4
  float fProjBlendBase; // xmm0_4
  OGLModel *pModel; // rcx
  ActionSystem *v7; // rax
  ActionSystem *v8; // rax
  __int64 iPriTarget; // rcx
  __int64 v10; // rdx
  OGLModel *v11; // rax
  OGLModel *v12; // r9
  __int64 v13; // rcx
  OGLMaterial *v14; // r8
  int iColorType; // eax
  ColorHolder v16; // xmm0
  int v17; // edx
  ActorOption_vtbl **pOwner; // rcx
  ActorOption_vtbl *v19; // rax
  int v20; // er9
  ActorChara *v21; // rax
  OGLModel *v22; // rdx
  OGLModel *v23; // rcx
  __int64 v24; // [rsp+30h] [rbp-38h] BYREF
  float v25; // [rsp+38h] [rbp-30h]
  ColorHolder result; // [rsp+40h] [rbp-28h] BYREF

  if ( !this->IsModelDraw(this) )
    return;
  pActSys = this->pActSys;
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
  v3 = this->GetActionSystem(this);
  fFadeAlpha = 0.0;
  if ( v3->bFreeCameraMode )
  {
    fProjBlendBase = v3->freeCamera.fProjBlendBase;
  }
  else
  {
    if ( v3->bUseSubCamera )
    {
LABEL_16:
      this->pModel->m_bProjectionBlend = 0;
      goto LABEL_17;
    }
    fProjBlendBase = v3->cameraCtrl.fProjBlendValue;
  }
  if ( fProjBlendBase <= 0.0 )
    goto LABEL_16;
  this->pModel->m_bProjectionBlend = 1;
LABEL_17:
  this->GetCenterPosition(this, (OGLVec3 *)&v24);
  pModel = this->pModel;
  *(_QWORD *)&pModel->m_vCenterPosition.x = v24;
  pModel->m_vCenterPosition.z = v25;
  v7 = this->GetActionSystem(this);
  if ( v7->actBlack.data[v7->actBlack.iPriTarget].type == CLIMAX_CANCEL )
  {
    v8 = this->GetActionSystem(this);
    iPriTarget = v8->actBlack.iPriTarget;
    if ( v8->actBlack.data[iPriTarget].type == CLIMAX_CANCEL )
      fFadeAlpha = v8->actBlack.data[iPriTarget].fFadeAlpha;
    v10 = 0i64;
    this->pModel->m_fillColourType = 1;
    v11 = this->pModel;
    v11->m_fillColour[3] = fFadeAlpha;
    *(_QWORD *)v11->m_fillColour = 0i64;
    v11->m_fillColour[2] = 0.0;
    v12 = this->pModel;
    if ( v12->m_ucMaterialCount )
    {
      v13 = 0i64;
      do
      {
        v14 = &v12->m_pMaterial[v13];
        if ( v14 )
          v14->m_fillColourType = 0;
        v10 = (unsigned int)(v10 + 1);
        ++v13;
      }
      while ( (int)v10 < v12->m_ucMaterialCount );
    }
  }
  else
  {
    iColorType = this->colorChangeData.iColorType;
    if ( iColorType <= 0 || iColorType == 3 || (this->colorChangeData.iOptionFlag & 0xE) != 0 )
    {
      ActorCharaBase::ColorChange::CheckCharaMaterialColorChange(&this->colorChangeData, this->pModel, 0);
    }
    else
    {
      ActorCharaBase::ColorChange::GetFadeColorValue(&this->colorChangeData, &result);
      v16 = result;
      this->pModel->m_fillColourType = this->colorChangeData.iColorType;
      *(ColorHolder *)this->pModel->m_fillColour = v16;
      OGLModel::resetMaterialFillColour(this->pModel, v17);
    }
  }
  pOwner = (ActorOption_vtbl **)this->pOwner;
  if ( pOwner )
  {
    v19 = *pOwner;
  }
  else
  {
    v19 = this->__vftable;
    pOwner = (ActorOption_vtbl **)this;
  }
  this->pModel->m_opacity = ((float (__fastcall *)(ActorOption_vtbl **, __int64))v19->GetBaseAnimeAlpha)(pOwner, v10);
  v21 = this->pOwner;
  if ( v21 && (v22 = v21->pModel) != 0i64 )
  {
    v23 = this->pModel;
    if ( (v22->m_uiModeFlg & 0x800) != 0 )
      v23->m_uiModeFlg |= 0x800u;
    else
      v23->m_uiModeFlg &= ~0x800u;
  }
  else
  {
    this->pModel->m_uiModeFlg &= ~0x800u;
  }
  OGLRender::addStack(*(OGLRender **)(*(_QWORD *)&AppMain::pApp + 80i64), this->pModel, 1.0, v20);
}

OGLVec3 *__fastcall ActorOption::GetBindCenterPosition(ActorOption *this, OGLVec3 *result)
{
  ActorChara *pOwner; // r8
  OGLVec3 *v4; // rax
  __int64 v5; // xmm0_8
  float z; // eax
  char v8[24]; // [rsp+20h] [rbp-18h] BYREF

  *(_QWORD *)&result->x = 0i64;
  result->z = 0.0;
  if ( this->bParentBind && (pOwner = this->pOwner) != 0i64 )
    v4 = pOwner->GetBindCenterPosition(this->pOwner, (OGLVec3 *)v8);
  else
    v4 = this->GetCenterPosition(this, v8);
  v5 = *(_QWORD *)&v4->x;
  z = v4->z;
  *(_QWORD *)&result->x = v5;
  result->z = z;
  return result;
}

OGLVec3 *__fastcall ActorOption::GetCenterPosition(ActorOption *this, OGLVec3 *result)
{
  this->GetBonePosition(this, result, C_HIPS);
  return result;
}

__int64 __fastcall ActorOption::GetFounderPlayerID(ActorOption *this)
{
  ActorChara *pOwner; // rax

  pOwner = this->pOwner;
  if ( pOwner )
    return (unsigned int)pOwner->iPlayerID;
  else
    return (unsigned int)this->iPlayerID;
}

__int64 __fastcall ActorOption::IsBlackStop(ActorOption *this)
{
  ActorChara *pOwner; // rdx
  bool v2; // zf
  ActionSystem *pActSys; // rdx

  if ( this->iCharNo == 800 )
  {
    if ( (this->mamahahaParam.bsOptionFlag._Array[0] & 2) != 0 || !this->bBlackoutInvalid )
      goto LABEL_9;
    pOwner = this->pOwner;
    v2 = pOwner == 0i64;
  }
  else
  {
    pOwner = this->pOwner;
    if ( !pOwner )
      goto LABEL_9;
    v2 = !this->bBlackoutInvalid;
  }
  if ( !v2 )
    return ((__int64 (__fastcall *)(ActorChara *))pOwner->IsBlackStop)(pOwner);
LABEL_9:
  pActSys = this->pActSys;
  return pActSys->actBlack.data[5].attr == COUNTER_HIT
      || pActSys->actBlack.data[ciEffectTargetID[this->iPlayerID]].bStop;
}

bool __fastcall ActorOption::IsInvisible(ActorOption *this)
{
  int v2; // eax
  ActorChara *pOwner; // rcx

  if ( this->baseAnime.fTransparent >= 1.0
    || (unsigned int)(this->iCharNo - 801) <= 2
    && (this->IsReady(this) || (pOwner = this->pOwner) != 0i64 && pOwner->IsInvisible(pOwner))
    || this->IsMotionCameraInvisibleActor(this) )
  {
    LOBYTE(v2) = 1;
  }
  else
  {
    return ((unsigned int)this->iActFlg2 >> 8) & 1;
  }
  return v2;
}

bool __fastcall ActorOption::IsMamahahaReady(ActorOption *this)
{
  int iActorStat; // edx

  iActorStat = this->iActorStat;
  if ( this->iActorStatReserve >= 0 )
    iActorStat = this->iActorStatReserve;
  return !iActorStat || (unsigned int)(iActorStat - 3) <= 4;
}

bool __fastcall ActorOption::IsMamahahaWaitingScreenOut(ActorOption *this)
{
  ActorChara *pOwner; // rcx

  pOwner = this->pOwner;
  return pOwner
      && pOwner->IsThrowDamaged(pOwner)
      && (unsigned int)(this->GetActionSystem(this)->cameraCtrl.offset.type - 3) <= 1;
}

bool __fastcall ActorOption::IsModelDraw(ActorOption *this)
{
  int v3; // ebx
  unsigned int v4; // eax

  if ( !this->pModel )
    return 0;
  if ( this->baseAnime.iMotionID < 0 )
    return 0;
  if ( this->IsInvisible(this) )
    return 0;
  v3 = this->iPlayerID + 2;
  v4 = this->GetActionSystem(this)->bsInvisibleFlag._Array[(unsigned __int64)v3 >> 5];
  return !_bittest((const int *)&v4, v3 & 0x1F) && this->bDrawCalled;
}

bool __fastcall ActorOption::IsMotionCameraInvisibleActor(ActorOption *this)
{
  CameraControl *p_cameraCtrl; // rax
  ActorChara *pOwner; // rcx

  if ( this->iCharNo == 800 && this->IsMamahahaWaitingScreenOut(this) )
    return 1;
  p_cameraCtrl = &this->GetActionSystem(this)->cameraCtrl;
  if ( (p_cameraCtrl->offset.iOptionFlag & 1) == 0 || p_cameraCtrl->offset.pActor == this )
    return 0;
  pOwner = this->pOwner;
  if ( !pOwner )
    return 1;
  return pOwner->IsMotionCameraInvisibleActor(pOwner);
}

bool __fastcall ActorOption::IsTransmitHitStop(ActorOption *this)
{
  return (unsigned int)(this->iCharNo - 801) <= 2;
}

void __fastcall ActorOption::LateUpdate(ActorOption *this, __int64 a2, float a3)
{
  __int64 v4; // rdx

  this->BranchCheck(this);
  this->DefaultBranchCheck(this);
  this->UpdatePosition(this);
  this->CheckUseZOffset(this);
  Actor::DrawRequest(this, v4, a3);
}

void __fastcall ActorOption::MainUpdate(ActorOption *this)
{
  extension::AsyncStatus::Step v2; // edx
  extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> *v3; // rcx
  extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> *v4; // rcx
  extension::AsyncAsset *v5; // rax
  int v6; // er8
  OGLModel *ModelFromType; // rsi
  __int64 v8; // rbx
  __int64 v9; // rax
  extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> *v10; // rcx
  extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> *v11; // rcx
  extension::exsound_detail::SoundBankImpl *v12; // rax
  OGLModel *v13; // rsi
  __int64 iPlayerID; // rbx
  __int64 v15; // rax
  int value; // eax
  int iCharNo; // eax
  float x; // xmm6_4
  float y; // xmm8_4
  float z; // xmm9_4
  ActorChara *pOwner; // rax
  float v22; // xmm6_4
  float v23; // xmm8_4
  float v24; // xmm9_4
  float v25; // xmm2_4
  float v26; // xmm0_4
  float v27; // xmm1_4
  ActorChara *v28; // rax
  float v29; // xmm4_4
  float v30; // xmm3_4
  float v31; // xmm1_4
  float v32; // xmm2_4
  float v33; // xmm1_4
  float v34; // xmm3_4
  float v35; // xmm1_4
  float v36; // xmm2_4
  float v37; // xmm1_4
  ActorChara *v38; // rax
  float v39; // xmm2_4
  float v40; // xmm3_4
  float v41; // xmm0_4
  float v42; // xmm1_4
  float v43; // xmm1_4
  ActorChara *v44; // rcx
  std::bitset<61>::reference *v45; // rax
  unsigned __int64 Mypos; // rdx
  Collision::HitRectCollection *Instance; // rax
  int v48; // eax
  ActorOption *v49; // rcx
  ActorOption_vtbl *v50; // rax
  float v51; // xmm6_4
  bool v52; // al
  bool v53; // cc
  ActorOption_vtbl *v54; // rax
  std::bitset<61>::reference result; // [rsp+28h] [rbp-60h] BYREF
  int v56; // [rsp+90h] [rbp+8h] BYREF

  this->GetActionSystemSpeedFix(this, (Fix32 *)&v56);
  if ( this->bActionNewFrame )
    this->bMotionMoveSlowAdjValue = 0;
  if ( this->bExistExtraModel )
  {
    if ( (this->iActFlg2 & 0x40000000) == 0 || this->bChangedExtraModel )
    {
      if ( (this->iActFlg2 & 0x40000000) == 0 && this->bChangedExtraModel )
      {
        v10 = *(extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> **)(*(_QWORD *)&AppMain::pApp
                                                                                              + 11064i64);
        if ( this->iPlayerID )
          v11 = v10 + 5;
        else
          v11 = v10 + 4;
        v12 = extension::BasicFutureObject<extension::GFXIMovieData,void>::operator->(v11, v2);
        if ( (int)(v12->m_preloadedAudioWeakTable._Mypair._Myval2._Myend
                 - v12->m_preloadedAudioWeakTable._Mypair._Myval2._Mylast) <= 0 )
          v13 = 0i64;
        else
          v13 = (OGLModel *)*v12->m_preloadedAudioWeakTable._Mypair._Myval2._Mylast;
        if ( v13 )
        {
          iPlayerID = this->iPlayerID;
          BattleSystem::BattleController::GetActionSystem();
          this->pCharaBone = (const CharaBone *)(1224 * iPlayerID + 250504 + v15);
          OGLModel::copyMotion(v13, this->pModel);
          this->pModel = v13;
        }
        this->bChangedExtraModel = 0;
      }
    }
    else
    {
      v3 = *(extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> **)(*(_QWORD *)&AppMain::pApp
                                                                                           + 11064i64);
      if ( this->iPlayerID )
        v4 = v3 + 5;
      else
        v4 = v3 + 4;
      v5 = (extension::AsyncAsset *)extension::BasicFutureObject<extension::GFXIMovieData,void>::operator->(v4, v2);
      ModelFromType = extension::AsyncAsset::getModelFromType(v5, 3, v6);
      if ( ModelFromType )
      {
        v8 = this->iPlayerID;
        BattleSystem::BattleController::GetActionSystem();
        this->pCharaBone = (const CharaBone *)(1224 * v8 + v9 + 250912);
        OGLModel::copyMotion(ModelFromType, this->pModel);
        this->pModel = ModelFromType;
      }
      this->bChangedExtraModel = 1;
    }
  }
  if ( this->colorChangeData.iColorType
    && (!this->bActionFreeze || (this->colorChangeData.iOptionFlag & 0x20000000) != 0) )
  {
    if ( !this->colorChangeData.bInitial )
    {
      this->colorChangeData.xFadeFrame.value += v56;
      value = this->colorChangeData.xMaxFadeFrame.value;
      if ( this->colorChangeData.xFadeFrame.value >= value )
      {
        if ( this->colorChangeData.bFadeOut )
        {
          *(_QWORD *)&this->colorChangeData.iColorType = 0i64;
          this->colorChangeData.xFadeFrame.value = 0;
          this->colorChangeData.iOptionFlag = 0;
          *(_WORD *)&this->colorChangeData.bFadeOut = 0;
          goto LABEL_32;
        }
        this->colorChangeData.xFadeFrame.value = value;
      }
    }
    this->colorChangeData.bInitial = 0;
  }
LABEL_32:
  iCharNo = this->iCharNo;
  if ( iCharNo == 800 )
  {
    if ( !this->bActionFreeze )
    {
      if ( this->IsMamahahaCanMove(this) )
      {
        x = this->mamahahaParam.vInitOffsetPos.x;
        y = this->mamahahaParam.vInitOffsetPos.y;
        z = this->mamahahaParam.vInitOffsetPos.z;
        if ( this->iCAngleBuf )
          LODWORD(x) ^= _xmm;
        pOwner = this->pOwner;
        v22 = x + pOwner->vPos.x;
        *(float *)&result._Pbitset = v22;
        v23 = y + pOwner->vPos.y;
        *((float *)&result._Pbitset + 1) = v23;
        v24 = z + pOwner->vPos.z;
        *(float *)&result._Mypos = v24;
        if ( this->IsMamahahaWaitingScreenOut(this) )
        {
          v25 = this->mamahahaParam.vInitOffsetPos.z;
          v26 = this->mamahahaParam.vInitOffsetPos.y + 10.0;
          v27 = FLOAT_N50_0;
          if ( this->iCAngleBuf )
            v27 = FLOAT_50_0;
          v28 = this->pOwner;
          this->vPos.x = v27 + v28->vPos.x;
          this->vPos.y = v26 + v28->vPos.y;
          this->vPos.z = v25 + v28->vPos.z;
        }
        if ( v22 != this->mamahahaParam.vEndPos.x
          || v23 != this->mamahahaParam.vEndPos.y
          || v24 != this->mamahahaParam.vEndPos.z )
        {
          *(_QWORD *)&this->mamahahaParam.vEndPos.x = result._Pbitset;
          this->mamahahaParam.vEndPos.z = *(float *)&result._Mypos;
        }
        *(_QWORD *)&this->mamahahaParam.vStartPos.x = *(_QWORD *)&this->vPos.x;
        this->mamahahaParam.vStartPos.z = this->vPos.z;
        v29 = (float)((float)((float)(unsigned __int16)v56 * 0.000015258789) + (float)(v56 >> 16))
            * this->mamahahaParam.fMoveCount;
        v30 = v29;
        v31 = this->mamahahaParam.vEndPos.x;
        v32 = this->mamahahaParam.vStartPos.x;
        if ( v32 != v31 )
        {
          if ( v32 > v31 )
          {
            v32 = this->mamahahaParam.vEndPos.x;
            v31 = this->mamahahaParam.vStartPos.x;
            v30 = 1.0 - v29;
          }
          if ( v30 > 0.0 )
          {
            if ( v30 < 1.0 )
            {
              v33 = v31 - v32;
              if ( v33 < 0.0 )
                LODWORD(v33) ^= _xmm;
              v32 = (float)((float)((float)(v33 * v30) / v33) * v33) + v32;
            }
            else
            {
              v32 = v31;
            }
          }
        }
        this->vPos.x = v32;
        v34 = v29;
        v35 = this->mamahahaParam.vEndPos.y;
        v36 = this->mamahahaParam.vStartPos.y;
        if ( v36 != v35 )
        {
          if ( v36 > v35 )
          {
            v36 = this->mamahahaParam.vEndPos.y;
            v35 = this->mamahahaParam.vStartPos.y;
            v34 = 1.0 - v29;
          }
          if ( v34 > 0.0 )
          {
            if ( v34 < 1.0 )
            {
              v37 = v35 - v36;
              if ( v37 < 0.0 )
                LODWORD(v37) ^= _xmm;
              v36 = (float)((float)((float)(v37 * v34) / v37) * v37) + v36;
            }
            else
            {
              v36 = v35;
            }
          }
        }
        this->vPos.y = v36;
        this->vPos.z = Tween::easing(this->mamahahaParam.vStartPos.z, this->mamahahaParam.vEndPos.z, v29, Linear);
        *(_QWORD *)&this->vBasePos.x = *(_QWORD *)&this->vPos.x;
        this->vBasePos.z = this->vPos.z;
      }
      if ( this->vMov.z != 0.0 )
      {
        v38 = this->pOwner;
        v39 = v38->vPos.z;
        v40 = this->vPos.z;
        if ( v40 < v39 )
        {
          v42 = this->mamahahaParam.vInitOffsetPos.z;
          if ( (float)(v42 + v39) >= v40 )
          {
            this->vMov.z = 0.0;
            v43 = v42 + v38->vPos.z;
            this->vPos.z = v43;
            this->vBasePos.z = v43;
          }
        }
        else
        {
          this->vMov.z = 0.0;
          v41 = v38->vPos.z;
          this->vPos.z = v41;
          this->vBasePos.z = v41;
        }
      }
    }
    if ( this->vPos.y < 0.0 )
      this->vPos.y = 0.0;
  }
  else if ( (unsigned int)(iCharNo - 801) <= 2 )
  {
    v44 = this->pOwner;
    if ( v44 )
    {
      *(_QWORD *)&this->vBasePos.x = *(_QWORD *)&v44->vBasePos.x;
      this->vBasePos.z = v44->vBasePos.z;
      *(_QWORD *)&this->vBaseOff.x = *(_QWORD *)&v44->vBaseOff.x;
      this->vBaseOff.z = v44->vBaseOff.z;
      *(_QWORD *)&this->vPos.x = *(_QWORD *)&v44->vPos.x;
      this->vPos.z = v44->vPos.z;
      *(_QWORD *)&this->vOff.x = *(_QWORD *)&v44->vOff.x;
      this->vOff.z = v44->vOff.z;
    }
  }
  if ( this->iAtkDataCount > 0 )
  {
    v45 = std::bitset<21>::operator[]((std::bitset<61> *)&this->bsAttackFlag, &result, 0i64);
    Mypos = v45->_Mypos;
    if ( Mypos >= 6 )
      std::_Xout_of_range("invalid bitset<N> position");
    *((_DWORD *)v45->_Pbitset->_Array + (Mypos >> 5)) |= 1 << (v45->_Mypos & 0x1F);
  }
  Instance = Collision::HitRectCollection::GetInstance(this->iPlayerID);
  Collision::HitRectCollection::EntryOption(Instance, this);
  v48 = this->iCharNo;
  v49 = this;
  if ( v48 == 800 )
  {
    if ( this->IsHitStopVibrate(this) )
    {
      v50 = this->__vftable;
      if ( this->xHitStopFrame.value )
      {
        if ( v50->IsBlackStop(this) )
        {
          this->vBaseOff.x = this->vBaseOffPrev.x;
        }
        else
        {
          v51 = *(float *)&FLOAT_0_30000001;
          if ( this->vBaseOffPrev.x > 0.0 )
            v51 = FLOAT_N0_30000001;
          if ( !this->xHitStopTotal.value )
            this->xHitStopTotal.value = 0x10000;
          this->vBaseOff.x = sinf(
                               (float)((float)((float)((float)(unsigned __int16)this->xHitStopFrame.value
                                                     * 0.000015258789)
                                             + (float)(this->xHitStopFrame.value >> 16))
                                     / (float)((float)((float)(unsigned __int16)this->xHitStopTotal.value
                                                     * 0.000015258789)
                                             + (float)(this->xHitStopTotal.value >> 16)))
                             * 1.5707964)
                           * v51;
        }
      }
      else
      {
        v50->SetHitStopVibrate(this, 0);
      }
    }
    v52 = this->IsMamahahaWaitingScreenOut(this);
  }
  else
  {
    v53 = (unsigned int)(v48 - 801) <= 2;
    v54 = this->__vftable;
    if ( !v53 )
      goto LABEL_94;
    v52 = v54->IsReady(this);
  }
  if ( v52 )
    return;
  v54 = this->__vftable;
  v49 = this;
LABEL_94:
  v54->UpdatePosture(v49);
}

void __fastcall ActorOption::ParamInit(ActorOption *this, const CharaDataUnify *pCharaData, ActorChara *pOwner)
{
  int iPlayerID; // eax
  int iCharaID; // ebp
  int v8; // edx
  CharaProjectData *pProjData; // rsi
  int CharaDataIndex; // eax
  int iBaseCharaID; // eax

  if ( pCharaData && pOwner )
  {
    ActorCharaBase::ParamInit(this, pCharaData);
    iPlayerID = pOwner->iPlayerID;
    this->bPositionInit = 0;
    this->iDrawPri = iPlayerID + 2;
    this->pOwner = pOwner;
    this->pParent = pOwner;
    this->pTarget = pOwner->pTarget;
    this->iPlayerID = pOwner->iPlayerID;
    iCharaID = pCharaData->iCharaID;
    v8 = pCharaData->iCharaID;
    pProjData = (CharaProjectData *)pCharaData->pProjData;
    CharaDataIndex = CharaProjectData::GetCharaDataIndex(pProjData, v8);
    if ( CharaDataIndex >= 0 )
    {
      iBaseCharaID = pProjData->pCharaData[CharaDataIndex].iBaseCharaID;
      if ( iBaseCharaID < 0 )
        iBaseCharaID = iCharaID;
    }
    else
    {
      iBaseCharaID = -1;
    }
    this->iCharNo = iBaseCharaID;
    this->iCAngle = pOwner->iCAngle;
    this->iCAngleBuf = pOwner->iCAngleBuf;
    *(_DWORD *)&this->bParentBind = 256;
    this->bShotErased = 0;
    *(_QWORD *)&this->mamahahaParam.vInitOffsetPos.x = 0i64;
    *(_QWORD *)&this->mamahahaParam.vInitOffsetPos.z = 0i64;
    *(_QWORD *)&this->mamahahaParam.vStartPos.y = 0i64;
    *(_QWORD *)&this->mamahahaParam.vEndPos.x = 0i64;
    this->mamahahaParam.vEndPos.z = 0.0;
    strcpy((char *)&this->mamahahaParam.fMoveCount, "ÍÌL=");
    this->mamahahaParam.iOffsetMirrorOwnerAct = -1;
    *(_QWORD *)this->mamahahaParam.bsOptionFlag._Array = 0i64;
    *(_QWORD *)&this->mamahahaParam.xMergeCountMax.value = 0i64;
    *(_QWORD *)&this->mamahahaParam.vMergePos.y = 0i64;
    this->iOwnerActionNo = -1;
  }
  else
  {
    this->systemStat = INIT;
  }
}

void __fastcall ActorOption::PreUpdate(ActorOption *this)
{
  ActorChara *pOwner; // r9
  ActorOption_vtbl *v3; // rbx
  bool v4; // al
  int iCharNo; // eax
  std::bitset<61>::reference *v6; // rax
  __int64 v7; // r9
  unsigned __int64 Mypos; // rdx
  __int64 v9; // rcx
  int v10; // eax
  int value; // eax
  ActorChara *v12; // rax
  std::bitset<61>::reference *v13; // rax
  unsigned __int64 v14; // rdx
  ActorChara *v15; // rdx
  bool bOffsetMirror; // cl
  int iCAngle; // eax
  __m128 x_low; // xmm0
  __m128 y_low; // xmm1
  unsigned __int64 v20; // xmm0_8
  float v21; // eax
  __int64 v22; // rdx
  ActorChara *v23; // rax
  bool v24; // zf
  ActorChara *v25; // rcx
  std::bitset<61>::reference result; // [rsp+28h] [rbp-20h] BYREF
  char v27; // [rsp+50h] [rbp+8h] BYREF

  pOwner = this->pOwner;
  if ( pOwner )
  {
    v3 = this->__vftable;
    v4 = pOwner->IsDisableBlendSave(this->pOwner);
    v3->SetDisableBlendSave(this, v4);
    pOwner = this->pOwner;
    *(_QWORD *)&this->vAngle.x = *(_QWORD *)&pOwner->vAngle.x;
    this->vAngle.z = pOwner->vAngle.z;
  }
  if ( (this->bsCollisionFlag._Array[0] & 8) != 0 )
    this->bShotErased = 1;
  iCharNo = this->iCharNo;
  if ( iCharNo == 800 )
  {
    v6 = std::bitset<21>::operator[]((std::bitset<61> *)&this->mamahahaParam.bsOptionFlag, &result, 2ui64);
    Mypos = v6->_Mypos;
    if ( Mypos >= 4 )
      std::_Xout_of_range("invalid bitset<N> position");
    v9 = v6->_Mypos & 0x1F;
    v10 = *((_DWORD *)v6->_Pbitset->_Array + (Mypos >> 5));
    if ( _bittest(&v10, v9) && (!v7 || !*(_BYTE *)(v7 + 484)) )
    {
      this->mamahahaParam.xMergeCount.value += this->GetActionSystemSpeedFix(this, &v27)->value;
      value = this->mamahahaParam.xMergeCountMax.value;
      if ( this->mamahahaParam.xMergeCount.value >= value )
        this->mamahahaParam.xMergeCount.value = value;
    }
    v12 = this->pOwner;
    if ( v12 && v12->bActionNewFrame && !v12->exclusiveParam.iType )
    {
      v13 = std::bitset<21>::operator[]((std::bitset<61> *)&this->mamahahaParam.bsOptionFlag, &result, 1ui64);
      v14 = v13->_Mypos;
      if ( v14 >= 4 )
        std::_Xout_of_range("invalid bitset<N> position");
      *((_DWORD *)v13->_Pbitset->_Array + (v14 >> 5)) &= ~(1 << (v13->_Mypos & 0x1F));
      v15 = this->pOwner;
      if ( (v15->exclusiveParam.type.nakoruru.iMamahahaOption & 4) != 0 )
      {
        bOffsetMirror = this->mamahahaParam.bOffsetMirror;
        this->mamahahaParam.bOffsetMirror = !bOffsetMirror;
        this->mamahahaParam.iOffsetMirrorOwnerAct = v15->iActNo;
        if ( bOffsetMirror )
          iCAngle = v15->iCAngle;
        else
          iCAngle = v15->iCAngle == 0;
        this->iCAngleBuf = iCAngle;
      }
      if ( (v15->exclusiveParam.type.nakoruru.iMamahahaOption & 2) != 0 )
      {
        x_low = (__m128)LODWORD(this->mamahahaParam.vInitOffsetPos.x);
        y_low = (__m128)LODWORD(this->mamahahaParam.vInitOffsetPos.y);
        if ( this->iCAngleBuf )
          x_low = _mm_xor_ps(x_low, (__m128)_xmm);
        x_low.m128_f32[0] = x_low.m128_f32[0] + v15->vPos.x;
        y_low.m128_f32[0] = y_low.m128_f32[0] + v15->vPos.y;
        *(float *)&result._Mypos = this->mamahahaParam.vInitOffsetPos.z + v15->vPos.z;
        v20 = _mm_unpacklo_ps(x_low, y_low).m128_u64[0];
        *(_QWORD *)&this->vPos.x = v20;
        v21 = *(float *)&result._Mypos;
        this->vPos.z = *(float *)&result._Mypos;
        *(_QWORD *)&this->vBasePos.x = v20;
        this->vBasePos.z = v21;
      }
      if ( (v15->exclusiveParam.type.nakoruru.iMamahahaOption & 8) != 0 )
        this->bIgnoreMotionBlend = 1;
      if ( (v15->exclusiveParam.type.nakoruru.iMamahahaOption & 1) == 0 || this->IsMamahahaReady(this) )
      {
        switch ( this->pOwner->exclusiveParam.type.nakoruru.iMamahahaAction )
        {
          case 1:
            goto $LN90_5;
          case 2:
            v22 = 49i64;
            goto LABEL_50;
          case 3:
            v22 = 50i64;
            goto LABEL_50;
          case 4:
            v22 = 51i64;
            goto LABEL_50;
          case 5:
            v22 = 212i64;
            goto LABEL_50;
          case 6:
            v22 = 229i64;
            goto LABEL_50;
          case 7:
            v22 = 57i64;
            goto LABEL_50;
          case 8:
            v22 = 58i64;
            goto LABEL_50;
          case 9:
            v22 = 61i64;
            goto LABEL_50;
          case 0xA:
            goto $LN36_14;
          case 0xB:
            goto $LN37_20;
          case 0xC:
            goto $LN38_15;
          case 0xD:
            goto $LN39_10;
          case 0xE:
            goto $LN40_13;
          case 0xF:
            goto $LN41_11;
          case 0x10:
          case 0x11:
            v22 = 53i64;
            goto LABEL_50;
          case 0x12:
            v22 = 71i64;
            goto LABEL_50;
          case 0x13:
            v22 = 72i64;
            goto LABEL_50;
          case 0x14:
            goto $LN45_6;
          default:
            return;
        }
      }
    }
    return;
  }
  if ( iCharNo == 802 )
  {
    if ( !pOwner )
      return;
    if ( pOwner->bActionNewFrame && pOwner->exclusiveParam.iType == 4 )
    {
      switch ( pOwner->exclusiveParam.type.nakoruru.iMamahahaAction )
      {
        case 1:
          goto $LN90_5;
        case 2:
          goto $LN52_5;
        case 3:
          goto $LN53_8;
        case 4:
          v22 = 6i64;
          goto LABEL_50;
        case 5:
          v22 = 7i64;
          goto LABEL_50;
        case 6:
          goto $LN36_14;
        case 7:
          goto $LN37_20;
        case 8:
          goto $LN41_11;
        case 9:
          goto $LN76_7;
        default:
          return;
      }
      return;
    }
LABEL_81:
    if ( this->IsReady(this) )
      return;
    v25 = this->pOwner;
    if ( this->iOwnerActionNo == v25->iActNo )
    {
      v24 = !v25->IsActionDataChanged(v25);
      goto LABEL_84;
    }
    goto $LN90_5;
  }
  if ( iCharNo != 801 )
  {
    if ( iCharNo != 803 || !pOwner )
      return;
    if ( pOwner->bActionNewFrame && pOwner->exclusiveParam.iType == 6 )
    {
      if ( pOwner->exclusiveParam.type.nakoruru.iMamahahaAction != 1 )
      {
        if ( pOwner->exclusiveParam.type.nakoruru.iMamahahaAction == 2 )
        {
$LN52_5:
          v22 = 4i64;
        }
        else
        {
          if ( pOwner->exclusiveParam.type.nakoruru.iMamahahaAction != 3 )
            return;
$LN53_8:
          v22 = 5i64;
        }
LABEL_50:
        LOBYTE(pOwner) = 1;
        ((void (__fastcall *)(ActorOption *, __int64, _QWORD, ActorChara *, __int64))this->ActionChangeReqBase)(
          this,
          v22,
          0i64,
          pOwner,
          -2i64);
        this->CAngleChangeReq(this, this->iCAngleBuf);
        return;
      }
      goto $LN90_5;
    }
    goto LABEL_81;
  }
  if ( !pOwner )
    return;
  if ( !pOwner->bActionNewFrame || pOwner->exclusiveParam.iType != 5 )
  {
    if ( this->IsReady(this) )
      return;
    if ( !this->pOwner->IsActionDataChanged(this->pOwner) )
    {
      v23 = this->pOwner;
      if ( v23->iActorStat == 62 )
        return;
      v24 = this->iOwnerActionNo == v23->iActNo;
LABEL_84:
      if ( v24 )
        return;
    }
$LN90_5:
    this->SetReady(this, 0);
    return;
  }
  switch ( pOwner->exclusiveParam.type.nakoruru.iMamahahaAction )
  {
    case 1:
      goto $LN90_5;
    case 2:
      v22 = 230i64;
      goto LABEL_50;
    case 3:
$LN45_6:
      v22 = 231i64;
      goto LABEL_50;
    case 4:
$LN36_14:
      v22 = 9i64;
      goto LABEL_50;
    case 5:
$LN37_20:
      v22 = 10i64;
      goto LABEL_50;
    case 6:
$LN38_15:
      v22 = 11i64;
      goto LABEL_50;
    case 7:
$LN39_10:
      v22 = 12i64;
      goto LABEL_50;
    case 8:
$LN40_13:
      v22 = 13i64;
      goto LABEL_50;
    case 9:
$LN41_11:
      v22 = 14i64;
      goto LABEL_50;
    case 0xA:
$LN76_7:
      v22 = 15i64;
      goto LABEL_50;
    case 0xB:
      v22 = 16i64;
      goto LABEL_50;
    case 0xC:
      v22 = 17i64;
      goto LABEL_50;
    case 0xD:
      v22 = 18i64;
      goto LABEL_50;
    default:
      return;
  }
}

void __fastcall ActorOption::PrevDataSet(ActorOption *this)
{
  ActorChara *pOwner; // rcx
  int iCharNo; // eax

  Actor::PrevDataSet(this);
  pOwner = this->pOwner;
  this->bCalledUpdatePostureCalc = 0;
  if ( pOwner )
  {
    iCharNo = this->iCharNo;
    if ( iCharNo == 800 )
    {
      if ( this->mamahahaParam.bOffsetMirror )
      {
        if ( this->mamahahaParam.iOffsetMirrorOwnerAct == pOwner->iActNo )
        {
          this->iCAngleBuf = pOwner->iCAngle == 0;
          return;
        }
        this->mamahahaParam.bOffsetMirror = 0;
        this->mamahahaParam.iOffsetMirrorOwnerAct = -1;
      }
      this->iCAngleBuf = pOwner->iCAngle;
    }
    else if ( (unsigned int)(iCharNo - 801) <= 2 )
    {
      this->iCAngleBuf = pOwner->iCAngleBuf;
      this->iCAngle = pOwner->iCAngle;
      this->bParentBind = 1;
    }
  }
}

void __fastcall ActorOption::SetActionBranchKey(ActorOption *this, int branchKey)
{
  __int64 v3; // rdx
  Actor *pParent; // rcx

  if ( branchKey > 0 )
  {
    if ( branchKey <= 4 )
    {
      this->uiActionBranchKey |= 1 << branchKey;
    }
    else
    {
      v3 = (unsigned int)(branchKey - 4);
      if ( (int)v3 <= 4 )
      {
        pParent = this->pParent;
        if ( pParent )
          ((void (__fastcall *)(Actor *, __int64, ActorOption *))pParent->SetActionBranchKey)(pParent, v3, this);
      }
    }
  }
}

// attributes: thunk
void __fastcall ActorOption::SetAttackGuard(ActorOption *this, bool flag)
{
  ActorObject::SetAttackGuard(this, flag);
}

// attributes: thunk
void __fastcall ActorOption::SetAttackHit(ActorOption *this, bool flag)
{
  ActorObject::SetAttackHit(this, flag);
}

void __fastcall ActorOption::SetEffectCreateData(ActorOption *this, const CharaActionData::Effect::Type::Set *setData)
{
  int v4; // [rsp+20h] [rbp-18h]

  if ( !this->IsResultDemoSubActor(this) && this->_checkEffectSetTerm(this, setData) )
    ActorEffect::CreateActorEffect(setData, this, this, this, v4);
}

void __fastcall ActorOption::SetExclusiveData(
        ActorOption *this,
        const CharaActionData::Exclusive *exclusive,
        bool bNextData)
{
  const CharaActionData::Exclusive *v3; // r10
  ActorOption *v4; // r9
  ActorChara *pOwner; // rcx
  __int16 iMamahahaAction; // ax
  __int16 iMamahahaOption; // ax
  __int16 v8; // ax
  std::bitset<61>::reference *v9; // rax
  unsigned __int64 Mypos; // rdx
  std::bitset<61>::reference *v11; // rax
  unsigned __int64 v12; // rdx
  std::bitset<61>::reference *v13; // rax
  unsigned __int64 v14; // rdx
  std::bitset<61>::reference *v15; // rax
  unsigned __int64 v16; // rdx
  std::bitset<61>::reference *v17; // rax
  unsigned __int64 v18; // rdx
  std::bitset<61>::reference result; // [rsp+28h] [rbp-20h] BYREF

  v3 = exclusive;
  v4 = this;
  if ( this->iCharNo != 800 || exclusive->iType != 1 )
    return;
  pOwner = this->pOwner;
  if ( !pOwner )
    goto LABEL_15;
  iMamahahaAction = exclusive->type.nakoruru.iMamahahaAction;
  if ( (iMamahahaAction & 0x40) != 0 )
    goto LABEL_15;
  if ( (iMamahahaAction & 1) != 0 )
  {
    iMamahahaOption = exclusive->type.nakoruru.iMamahahaOption;
    if ( iMamahahaOption <= 0 )
    {
      if ( !bNextData )
        v4->vPos.z = pOwner->vPos.z;
    }
    else
    {
      v4->vMov.z = (float)(pOwner->vPos.z - v4->vPos.z) / (float)iMamahahaOption;
    }
  }
  if ( (exclusive->type.mamahaha.iOptionFlag & 2) == 0 )
    goto LABEL_15;
  v8 = exclusive->type.nakoruru.iMamahahaOption;
  if ( v8 > 0 )
  {
    v4->vMov.z = (float)((float)(pOwner->vPos.z + v4->mamahahaParam.vInitOffsetPos.z) - v4->vPos.z) / (float)v8;
LABEL_15:
    if ( bNextData )
      return;
    goto LABEL_16;
  }
  if ( bNextData )
    return;
  v4->vPos.z = pOwner->vPos.z + v4->mamahahaParam.vInitOffsetPos.z;
LABEL_16:
  if ( (exclusive->type.mamahaha.iOptionFlag & 0x40) != 0 )
  {
    *(_QWORD *)&v4->mamahahaParam.vStartPos.x = *(_QWORD *)&v4->vPos.x;
    v4->mamahahaParam.vStartPos.z = v4->vPos.z;
    if ( exclusive->type.nakoruru.iMamahahaOption > 0 )
    {
      v4->mamahahaParam.xMergeCount.value = 0;
      v4->mamahahaParam.xMergeCountMax.value = exclusive->type.nakoruru.iMamahahaOption << 16;
    }
    else
    {
      v4->mamahahaParam.xMergeCount.value = 0x10000;
      v4->mamahahaParam.xMergeCountMax.value = 0x10000;
    }
    v9 = std::bitset<21>::operator[]((std::bitset<61> *)&v4->mamahahaParam.bsOptionFlag, &result, 2ui64);
    Mypos = v9->_Mypos;
    if ( Mypos >= 4 )
      std::_Xout_of_range("invalid bitset<N> position");
    *((_DWORD *)v9->_Pbitset->_Array + (Mypos >> 5)) |= 1 << (v9->_Mypos & 0x1F);
  }
  if ( (v3->type.mamahaha.iOptionFlag & 4) != 0 )
    LODWORD(v4->mamahahaParam.fMoveCount) = v3->type.heidern.iOptionFlag;
  if ( (v3->type.mamahaha.iOptionFlag & 8) != 0 )
    v4->mamahahaParam.fMoveCount = 0.050000001;
  if ( (v3->type.mamahaha.iOptionFlag & 0x10) != 0 )
  {
    v11 = std::bitset<21>::operator[]((std::bitset<61> *)&v4->mamahahaParam.bsOptionFlag, &result, 0i64);
    v12 = v11->_Mypos;
    if ( v12 >= 4 )
      std::_Xout_of_range("invalid bitset<N> position");
    *((_DWORD *)v11->_Pbitset->_Array + (v12 >> 5)) |= 1 << (v11->_Mypos & 0x1F);
  }
  if ( (v3->type.mamahaha.iOptionFlag & 0x20) != 0 )
  {
    v13 = std::bitset<21>::operator[]((std::bitset<61> *)&v4->mamahahaParam.bsOptionFlag, &result, 1ui64);
    v14 = v13->_Mypos;
    if ( v14 >= 4 )
      std::_Xout_of_range("invalid bitset<N> position");
    *((_DWORD *)v13->_Pbitset->_Array + (v14 >> 5)) |= 1 << (v13->_Mypos & 0x1F);
  }
  if ( SLOBYTE(v3->type.mamahaha.iOptionFlag) < 0 )
  {
    v15 = std::bitset<21>::operator[]((std::bitset<61> *)&v4->mamahahaParam.bsOptionFlag, &result, 3ui64);
    v16 = v15->_Mypos;
    if ( v16 >= 4 )
      std::_Xout_of_range("invalid bitset<N> position");
    *((_DWORD *)v15->_Pbitset->_Array + (v16 >> 5)) |= 1 << (v15->_Mypos & 0x1F);
  }
  if ( (v3->type.nakoruru.iMamahahaAction & 0x100) != 0 )
  {
    v17 = std::bitset<21>::operator[]((std::bitset<61> *)&v4->mamahahaParam.bsOptionFlag, &result, 3ui64);
    v18 = v17->_Mypos;
    if ( v18 >= 4 )
      std::_Xout_of_range("invalid bitset<N> position");
    *((_DWORD *)v17->_Pbitset->_Array + (v18 >> 5)) &= ~(1 << (v17->_Mypos & 0x1F));
  }
}

void __fastcall ActorOption::SetHitStop(ActorOption *this, int hitStop, bool bDelay)
{
  if ( SHIWORD(this->xHitStopFrame.value) < hitStop )
  {
    this->xHitStopFrame.value = hitStop << 16;
    this->xHitStopTotal.value = hitStop << 16;
  }
  if ( bDelay && this->xHitStopFrame.value > 0 )
  {
    this->xHitStopDelay.value = 0x10000;
    this->xMoveWaitFrame.value = 0x10000;
  }
  if ( this->pOwner )
  {
    if ( this->IsTransmitHitStop(this) )
      this->pOwner->SetHitStop(this->pOwner, hitStop, bDelay);
  }
}

void __fastcall ActorOption::SetReady(ActorOption *this, bool bInit, __int64 a3, _BOOL8 a4)
{
  LOBYTE(a4) = 1;
  this->ActionChangeReqBase(this, 0, 0, a4);
  this->ResetSpeed(this);
  this->mamahahaParam.fMoveCount = 0.050000001;
  if ( bInit )
    this->bIgnoreMotionBlend = 1;
}

void __fastcall ActorOption::SetShotFireData(ActorOption *this, const CharaActionData::Shot::Type::Fire *fireData)
{
  ActorShot::CreateActorShot(fireData, this, this, this->pOwner);
}

void __fastcall ActorOption::SetSpecialEffectSettingData(
        ActorOption *this,
        const CharaActionData::Setting::Type::SpEffect *spEffect)
{
  int iCameraLight; // er8
  int iCAngle; // er10
  __int64 v4; // r9
  char *v5; // r9

  iCameraLight = spEffect->iCameraLight;
  iCAngle = this->iCAngle;
  if ( iCameraLight > 0 )
  {
    v4 = 9i64;
    if ( !this->iPlayerID )
      v4 = 6i64;
    v5 = (char *)this->pActSys + v4;
    if ( (char)iCameraLight >= 6 )
    {
      LOBYTE(iCameraLight) = iCameraLight - 4;
      iCAngle = iCAngle == 0;
    }
    if ( v5[241048] != (char)iCameraLight - 1 || v5[241049] != iCAngle )
    {
      v5[241049] = iCAngle;
      v5[241048] = iCameraLight - 1;
      v5[241050] = 1;
    }
  }
}

void __fastcall ActorOption::SetupAction(ActorOption *this, bool bResultDemo, int subType)
{
  const CharaBaseStatus *pBaseStat; // rdi
  _BOOL8 v7; // rdx
  _BOOL8 v8; // r9

  pBaseStat = this->pBaseStat;
  if ( pBaseStat->CheckFileID(&pBaseStat->CharaFileBase)
    && pBaseStat->dataHeader.uiCommonActionCount > 0xEE
    && pBaseStat->pCommonAct[238].iActionID > 0 )
  {
    LOBYTE(v8) = 1;
    this->ActionChangeReqBase(this, 238, 0, v8);
  }
  else
  {
    LOBYTE(v7) = 1;
    this->SetEndSetupFlag(this, v7);
  }
  this->SetResultDemoActor(this, bResultDemo, subType);
}

void __fastcall ActorOption::UpdateMotionMove(ActorOption *this)
{
  ActorChara *pOwner; // rcx
  __int64 v3; // rax
  bool v4; // zf
  __int64 v5; // r8
  __int64 v6; // xmm0_8
  ActorOption_vtbl *v7; // rax
  __int64 v8; // rax
  __int64 v9; // xmm0_8
  float v10; // xmm4_4
  float v11; // xmm5_4
  float v12; // xmm6_4
  unsigned int v13; // xmm3_4
  unsigned int v14; // xmm2_4
  float v15; // xmm1_4
  OGLModel *pModel; // rax
  float v17; // xmm5_4
  float v18; // xmm6_4
  std::bitset<4>::reference *v19; // rax
  ActorChara *v20; // rax
  float v21; // xmm1_4
  float v22; // xmm0_4
  float v23; // xmm0_4
  int value; // edx
  float v25; // xmm6_4
  float v26; // xmm0_4
  float y; // xmm1_4
  float v28; // xmm7_4
  float v29; // xmm0_4
  float z; // xmm1_4
  float v31; // xmm8_4
  float v32; // xmm1_4
  float v33; // eax
  __int64 v34; // xmm0_8
  float v35; // xmm1_4
  float v36; // xmm7_4
  float v37; // xmm8_4
  unsigned int v38; // xmm1_4
  float v39; // xmm7_4
  unsigned int v40; // xmm8_4
  OGLModel *v41; // rax
  float v42; // eax
  float v43; // xmm1_4
  float v44; // xmm2_4
  float v45; // xmm2_4
  float v46; // xmm3_4
  float v47; // xmm2_4
  float v48; // xmm1_4
  float v49; // xmm3_4
  float v50; // xmm2_4
  float v51; // xmm1_4
  unsigned int v52; // xmm3_4
  unsigned int v53; // xmm2_4
  OGLModel *v54; // rax
  float v55; // xmm2_4
  float v56; // xmm1_4
  __int64 v57; // [rsp+20h] [rbp-49h] BYREF
  float v58; // [rsp+28h] [rbp-41h]
  __int64 v59; // [rsp+30h] [rbp-39h]
  float v60; // [rsp+38h] [rbp-31h]
  std::bitset<61>::reference result; // [rsp+40h] [rbp-29h] BYREF
  __int128 v62; // [rsp+50h] [rbp-19h]
  __int128 v63; // [rsp+60h] [rbp-9h]
  __int128 v64; // [rsp+70h] [rbp+7h]
  __int128 v65; // [rsp+80h] [rbp+17h]

  pOwner = this->pOwner;
  if ( pOwner && ((this->iActorStat - 16) & 0xFFFFFFFB) == 0 )
  {
    v3 = (__int64)pOwner->GetBonePosition(pOwner, (OGLVec3 *)&v57, C_HIPS_ATTACH);
    v4 = this->iCharNo == 802;
    v5 = 5i64;
    v6 = *(_QWORD *)v3;
    v60 = *(float *)(v3 + 8);
    v7 = this->__vftable;
    v59 = v6;
    if ( !v4 )
      v5 = 16i64;
    v8 = (__int64)v7->GetBonePosition(this, (OGLVec3 *)&result, (CharaBone::NAME_INDEX)v5);
    v9 = *(_QWORD *)v8;
    LODWORD(v8) = *(_DWORD *)(v8 + 8);
    v57 = v9;
    v10 = *(float *)&v59 - *(float *)&v9;
    v11 = *((float *)&v59 + 1) - *((float *)&v9 + 1);
    v58 = *(float *)&v8;
    v12 = v60 - *(float *)&v8;
    v65 = 0ui64;
    *(float *)&v13 = (float)(*(float *)&v59 - *(float *)&v9) + this->vPos.x;
    v62 = 0ui64;
    *(float *)&v14 = (float)(*((float *)&v59 + 1) - *((float *)&v9 + 1)) + this->vPos.y;
    v63 = 0ui64;
    v15 = (float)(v60 - *(float *)&v8) + this->vPos.z;
    v64 = 0ui64;
    pModel = this->pModel;
    *((float *)&v65 + 2) = v15;
    LODWORD(v62) = 1065353216;
    *(_OWORD *)pModel->m_mWorld.m = v62;
    pModel->m_bPostureChange = 1;
    pModel->m_vPosition.z = v15;
    LODWORD(pModel->m_vPosition.x) = v13;
    LODWORD(pModel->m_vPosition.y) = v14;
    DWORD1(v63) = 1065353216;
    *(_OWORD *)&pModel->m_mWorld.m[4] = v63;
    DWORD2(v64) = 1065353216;
    *(_OWORD *)&pModel->m_mWorld.m[8] = v64;
    HIDWORD(v65) = 1065353216;
    *(_QWORD *)&v65 = __PAIR64__(v14, v13);
    *(_OWORD *)&pModel->m_mWorld.m[12] = v65;
    v17 = v11 + this->vPos.y;
    v18 = v12 + this->vPos.z;
    this->vPos.x = v10 + this->vPos.x;
    this->vPos.y = v17;
    this->vPos.z = v18;
    *(float *)&pModel = this->vPos.z;
    *(_QWORD *)&this->vBasePos.x = *(_QWORD *)&this->vPos.x;
    LODWORD(this->vBasePos.z) = (_DWORD)pModel;
    return;
  }
  if ( (this->iActFlg1 & 0x240) == 0 && (this->iMoveOption & 4) == 0 )
    return;
  this->CheckBasePositionAnchor(this);
  this->GetMotionMovePosOpt(this, (OGLVec3 *)&v57);
  if ( this->iCharNo == 800
    && this->pOwner
    && (v19 = (std::bitset<4>::reference *)std::bitset<21>::operator[](
                                             (std::bitset<61> *)&this->mamahahaParam.bsOptionFlag,
                                             &result,
                                             2ui64),
        std::bitset<4>::reference::operator bool(v19)) )
  {
    v20 = this->pOwner;
    v21 = *((float *)&v57 + 1);
    *(_QWORD *)&this->vBasePos.x = *(_QWORD *)&v20->vBasePos.x;
    v22 = *(float *)&v57;
    this->vBasePos.z = v20->vBasePos.z;
    this->mamahahaParam.vEndPos.x = v22 + this->vBasePos.x;
    v23 = v58;
    this->mamahahaParam.vEndPos.y = v21 + this->vBasePos.y;
    this->mamahahaParam.vEndPos.z = v23 + this->vBasePos.z;
    value = this->mamahahaParam.xMergeCountMax.value;
    if ( value )
    {
      v25 = (float)((float)((float)(unsigned __int16)this->mamahahaParam.xMergeCount.value * 0.000015258789)
                  + (float)(this->mamahahaParam.xMergeCount.value >> 16))
          / (float)((float)((float)(unsigned __int16)value * 0.000015258789) + (float)(value >> 16));
      v26 = Tween::easing(this->mamahahaParam.vStartPos.x, this->mamahahaParam.vEndPos.x, v25, InOutQuad);
      y = this->mamahahaParam.vEndPos.y;
      v28 = v26;
      *(float *)&v57 = v26;
      v29 = Tween::easing(this->mamahahaParam.vStartPos.y, y, v25, InOutQuad);
      z = this->mamahahaParam.vEndPos.z;
      v31 = v29;
      *((float *)&v57 + 1) = v29;
      v58 = Tween::easing(this->mamahahaParam.vStartPos.z, z, v25, InOutQuad);
      v32 = v58;
      v33 = v58;
      v34 = v57;
    }
    else
    {
      v34 = *(_QWORD *)&this->mamahahaParam.vEndPos.x;
      v33 = this->mamahahaParam.vEndPos.z;
      v57 = v34;
      v31 = *((float *)&v34 + 1);
      v28 = *(float *)&v34;
      v58 = v33;
      v32 = v33;
    }
    *(_QWORD *)&this->mamahahaParam.vMergePos.x = v34;
    this->mamahahaParam.vMergePos.z = v33;
    v35 = v32 + this->vOff.z;
    v36 = v28 + this->vOff.x;
    v37 = v31 + this->vOff.y;
    v65 = 0ui64;
    *(float *)&v38 = v35 + this->vBaseOff.z;
    v39 = v36 + this->vBaseOff.x;
    *(float *)&v40 = v37 + this->vBaseOff.y;
    v62 = 0ui64;
    v63 = 0ui64;
    v64 = 0ui64;
    v41 = this->pModel;
    *(float *)&v65 = v39;
    *(_QWORD *)((char *)&v65 + 4) = __PAIR64__(v38, v40);
    LODWORD(v41->m_vPosition.z) = v38;
    v41->m_vPosition.x = v39;
    LODWORD(v41->m_vPosition.y) = v40;
    LODWORD(v62) = 1065353216;
    *(_OWORD *)v41->m_mWorld.m = v62;
    DWORD1(v63) = 1065353216;
    *(_OWORD *)&v41->m_mWorld.m[4] = v63;
    DWORD2(v64) = 1065353216;
    *(_OWORD *)&v41->m_mWorld.m[8] = v64;
    HIDWORD(v65) = 1065353216;
    *(_OWORD *)&v41->m_mWorld.m[12] = v65;
    v41->m_bPostureChange = 1;
    if ( (this->iActFlg1 & 0x200) != 0 )
    {
      v42 = this->mamahahaParam.vMergePos.z;
      *(_QWORD *)&this->vPos.x = *(_QWORD *)&this->mamahahaParam.vMergePos.x;
      this->vPos.z = v42;
      return;
    }
    if ( (this->iMoveOption & 4) != 0 )
    {
      v43 = *((float *)&v57 + 1) - this->vBasePos.y;
      v44 = v58 - this->vBasePos.z;
      this->vColOff.x = (float)(*(float *)&v57 - this->vBasePos.x) + this->vColOffBase.x;
      this->vColOff.y = v43 + this->vColOffBase.y;
      v45 = v44 + this->vColOffBase.z;
LABEL_25:
      this->vColOff.z = v45;
    }
  }
  else
  {
    v46 = *(float *)&v57 + this->vBasePos.x;
    v47 = *((float *)&v57 + 1) + this->vBasePos.y;
    v48 = (float)(v58 + this->vBasePos.z) + this->vOff.z;
    v65 = 0ui64;
    v49 = v46 + this->vOff.x;
    v50 = v47 + this->vOff.y;
    v51 = v48 + this->vBaseOff.z;
    v62 = 0ui64;
    *(float *)&v52 = v49 + this->vBaseOff.x;
    v63 = 0ui64;
    *(float *)&v53 = v50 + this->vBaseOff.y;
    v64 = 0ui64;
    v54 = this->pModel;
    *((float *)&v65 + 2) = v51;
    LODWORD(v62) = 1065353216;
    *(_OWORD *)v54->m_mWorld.m = v62;
    DWORD1(v63) = 1065353216;
    v54->m_vPosition.z = v51;
    *(_OWORD *)&v54->m_mWorld.m[4] = v63;
    DWORD2(v64) = 1065353216;
    *(_OWORD *)&v54->m_mWorld.m[8] = v64;
    HIDWORD(v65) = 1065353216;
    *(_QWORD *)&v65 = __PAIR64__(v53, v52);
    *(_OWORD *)&v54->m_mWorld.m[12] = v65;
    v54->m_bPostureChange = 1;
    LODWORD(v54->m_vPosition.x) = v52;
    LODWORD(v54->m_vPosition.y) = v53;
    if ( (this->iActFlg1 & 0x200) == 0 )
    {
      if ( (this->iMoveOption & 4) == 0 )
        return;
      v56 = *((float *)&v57 + 1);
      this->vColOff.x = *(float *)&v57 + this->vColOffBase.x;
      this->vColOff.y = v56 + this->vColOffBase.y;
      v45 = this->vColOffBase.z + 0.0;
      goto LABEL_25;
    }
    v55 = *((float *)&v57 + 1);
    if ( *((float *)&v57 + 1) <= 0.00001 && *((float *)&v57 + 1) >= -0.00001 )
      v55 = 0.0;
    this->vPos.x = *(float *)&v57 + this->vBasePos.x;
    this->vPos.y = v55 + this->vBasePos.y;
    this->vPos.z = this->vBasePos.z + 0.0;
  }
}

void __fastcall ActorOption::UpdatePosition(ActorOption *this)
{
  float v2; // eax
  float v3; // xmm2_4
  float v4; // xmm3_4
  float v5; // xmm1_4
  std::bitset<4>::reference *v6; // rax
  float z; // eax
  float v8; // xmm3_4
  float v9; // xmm2_4
  float v10; // xmm1_4
  OGLModel *pModel; // rax
  __int128 v12; // xmm1
  std::bitset<61>::reference result; // [rsp+20h] [rbp-50h] BYREF
  __int128 v14; // [rsp+30h] [rbp-40h]
  __int128 v15; // [rsp+40h] [rbp-30h]
  __int128 v16; // [rsp+50h] [rbp-20h]
  __int128 v17; // [rsp+60h] [rbp-10h]

  if ( this->pModel && this->baseAnime.iMotionID >= 0 )
  {
    if ( !this->pOwner || ((this->iActorStat - 16) & 0xFFFFFFFB) != 0 )
    {
      if ( (this->iActFlg1 & 0x240) != 0 )
      {
        if ( this->iCharNo == 800
          && (v6 = (std::bitset<4>::reference *)std::bitset<21>::operator[](
                                                  (std::bitset<61> *)&this->mamahahaParam.bsOptionFlag,
                                                  &result,
                                                  2ui64),
              std::bitset<4>::reference::operator bool(v6)) )
        {
          z = this->mamahahaParam.vMergePos.z;
          result._Pbitset = *(std::bitset<61> **)&this->mamahahaParam.vMergePos.x;
          v8 = *(float *)&result._Pbitset;
          v9 = *((float *)&result._Pbitset + 1);
          *(float *)&result._Mypos = z;
          v10 = z;
        }
        else
        {
          this->GetMotionMovePosOpt(this, (OGLVec3 *)&result);
          v8 = *(float *)&result._Pbitset + this->vBasePos.x;
          v9 = *((float *)&result._Pbitset + 1) + this->vBasePos.y;
          v10 = *(float *)&result._Mypos + this->vBasePos.z;
        }
        v3 = (float)(v9 + this->vOff.y) + this->vBaseOff.y;
        v4 = (float)(v8 + this->vOff.x) + this->vBaseOff.x;
        v5 = (float)(v10 + this->vOff.z) + this->vBaseOff.z;
      }
      else
      {
        v4 = (float)(this->vPos.x + this->vOff.x) + this->vBaseOff.x;
        v3 = (float)(this->vPos.y + this->vOff.y) + this->vBaseOff.y;
        v5 = (float)(this->vPos.z + this->vOff.z) + this->vBaseOff.z;
      }
    }
    else
    {
      v2 = this->vPos.z;
      result._Pbitset = *(std::bitset<61> **)&this->vPos.x;
      v3 = *((float *)&result._Pbitset + 1);
      v4 = *(float *)&result._Pbitset;
      *(float *)&result._Mypos = v2;
      v5 = v2;
    }
    v17 = 0ui64;
    v14 = 0ui64;
    v15 = 0ui64;
    v16 = 0ui64;
    pModel = this->pModel;
    *((float *)&v17 + 2) = v5;
    LODWORD(v14) = 1065353216;
    *(_OWORD *)pModel->m_mWorld.m = v14;
    DWORD1(v15) = 1065353216;
    pModel->m_vPosition.z = v5;
    *(_OWORD *)&pModel->m_mWorld.m[4] = v15;
    DWORD2(v16) = 1065353216;
    *(_QWORD *)&v17 = __PAIR64__(LODWORD(v3), LODWORD(v4));
    HIDWORD(v17) = 1065353216;
    v12 = v17;
    *(_OWORD *)&pModel->m_mWorld.m[8] = v16;
    pModel->m_bPostureChange = 1;
    *(_OWORD *)&pModel->m_mWorld.m[12] = v12;
    pModel->m_vPosition.x = v4;
    pModel->m_vPosition.y = v3;
  }
}

unsigned __int8 __fastcall ActorOption::_branchIsShotAlive(ActorOption *this, float param)
{
  std::bitset<61>::reference *v2; // rax
  unsigned __int64 Mypos; // rdx
  __int64 v4; // rcx
  int v5; // eax
  std::bitset<61>::reference result; // [rsp+28h] [rbp-20h] BYREF

  if ( (unsigned int)(int)param > 0xB )
    return 0;
  v2 = std::bitset<21>::operator[]((std::bitset<61> *)&this->pOwner->bsAliveShotID, &result, (int)param);
  Mypos = v2->_Mypos;
  if ( Mypos >= 0xD )
    std::_Xout_of_range("invalid bitset<N> position");
  v4 = v2->_Mypos & 0x1F;
  v5 = *((_DWORD *)v2->_Pbitset->_Array + (Mypos >> 5));
  return _bittest(&v5, v4);
}

unsigned __int8 __fastcall ActorOption::_branchIsShotAttackGuard(ActorOption *this, float param)
{
  std::bitset<61>::reference *v2; // rax
  unsigned __int64 Mypos; // rdx
  __int64 v4; // rcx
  int v5; // eax
  std::bitset<61>::reference result; // [rsp+28h] [rbp-20h] BYREF

  if ( (unsigned int)(int)param > 0xB )
    return 0;
  v2 = std::bitset<21>::operator[]((std::bitset<61> *)&this->pOwner->bsAttackGuardShotID, &result, (int)param);
  Mypos = v2->_Mypos;
  if ( Mypos >= 0xD )
    std::_Xout_of_range("invalid bitset<N> position");
  v4 = v2->_Mypos & 0x1F;
  v5 = *((_DWORD *)v2->_Pbitset->_Array + (Mypos >> 5));
  return _bittest(&v5, v4);
}

unsigned __int8 __fastcall ActorOption::_branchIsShotAttackHit(ActorOption *this, float param)
{
  std::bitset<61>::reference *v2; // rax
  unsigned __int64 Mypos; // rdx
  __int64 v4; // rcx
  int v5; // eax
  std::bitset<61>::reference result; // [rsp+28h] [rbp-20h] BYREF

  if ( (unsigned int)(int)param > 0xB )
    return 0;
  v2 = std::bitset<21>::operator[]((std::bitset<61> *)&this->pOwner->bsAttackHitShotID, &result, (int)param);
  Mypos = v2->_Mypos;
  if ( Mypos >= 0xD )
    std::_Xout_of_range("invalid bitset<N> position");
  v4 = v2->_Mypos & 0x1F;
  v5 = *((_DWORD *)v2->_Pbitset->_Array + (Mypos >> 5));
  return _bittest(&v5, v4);
}

bool __fastcall ActorOption::_branchIsShotAttackHitOrGuard(ActorOption *this, float param)
{
  std::bitset<61>::reference *v2; // rax
  unsigned __int64 v3; // r8
  __int64 v4; // r9
  unsigned __int64 Mypos; // rdx
  __int64 v6; // rcx
  int v7; // eax
  std::bitset<13>::reference *v8; // rax
  std::bitset<61>::reference result; // [rsp+28h] [rbp-30h] BYREF
  std::bitset<61>::reference v11; // [rsp+38h] [rbp-20h] BYREF

  if ( (unsigned int)(int)param > 0xB )
    return 0;
  v2 = std::bitset<21>::operator[]((std::bitset<61> *)&this->pOwner->bsAttackHitShotID, &result, (int)param);
  Mypos = v2->_Mypos;
  if ( Mypos >= 0xD )
    std::_Xout_of_range("invalid bitset<N> position");
  v6 = v2->_Mypos & 0x1F;
  v7 = *((_DWORD *)v2->_Pbitset->_Array + (Mypos >> 5));
  if ( _bittest(&v7, v6) )
    return 1;
  v8 = (std::bitset<13>::reference *)std::bitset<21>::operator[]((std::bitset<61> *)(v4 + 1404), &v11, v3);
  return std::bitset<13>::reference::operator bool(v8) != 0;
}

unsigned __int8 __fastcall ActorOption::_branchIsShotFlag1(ActorOption *this, float param)
{
  std::bitset<61>::reference *v2; // rax
  unsigned __int64 Mypos; // rdx
  __int64 v4; // rcx
  int v5; // eax
  std::bitset<61>::reference result; // [rsp+28h] [rbp-20h] BYREF

  if ( (unsigned int)(int)param > 0xB )
    return 0;
  v2 = std::bitset<21>::operator[]((std::bitset<61> *)this->pOwner->bsBranchFlgShotID, &result, (int)param);
  Mypos = v2->_Mypos;
  if ( Mypos >= 0xD )
    std::_Xout_of_range("invalid bitset<N> position");
  v4 = v2->_Mypos & 0x1F;
  v5 = *((_DWORD *)v2->_Pbitset->_Array + (Mypos >> 5));
  return _bittest(&v5, v4);
}

unsigned __int8 __fastcall ActorOption::_branchIsShotFlag2(ActorOption *this, float param)
{
  std::bitset<61>::reference *v2; // rax
  unsigned __int64 Mypos; // rdx
  __int64 v4; // rcx
  int v5; // eax
  std::bitset<61>::reference result; // [rsp+28h] [rbp-20h] BYREF

  if ( (unsigned int)(int)param > 0xB )
    return 0;
  v2 = std::bitset<21>::operator[]((std::bitset<61> *)&this->pOwner->bsBranchFlgShotID[1], &result, (int)param);
  Mypos = v2->_Mypos;
  if ( Mypos >= 0xD )
    std::_Xout_of_range("invalid bitset<N> position");
  v4 = v2->_Mypos & 0x1F;
  v5 = *((_DWORD *)v2->_Pbitset->_Array + (Mypos >> 5));
  return _bittest(&v5, v4);
}

unsigned __int8 __fastcall ActorOption::_branchIsShotFlag3(ActorOption *this, float param)
{
  std::bitset<61>::reference *v2; // rax
  unsigned __int64 Mypos; // rdx
  __int64 v4; // rcx
  int v5; // eax
  std::bitset<61>::reference result; // [rsp+28h] [rbp-20h] BYREF

  if ( (unsigned int)(int)param > 0xB )
    return 0;
  v2 = std::bitset<21>::operator[]((std::bitset<61> *)&this->pOwner->bsBranchFlgShotID[2], &result, (int)param);
  Mypos = v2->_Mypos;
  if ( Mypos >= 0xD )
    std::_Xout_of_range("invalid bitset<N> position");
  v4 = v2->_Mypos & 0x1F;
  v5 = *((_DWORD *)v2->_Pbitset->_Array + (Mypos >> 5));
  return _bittest(&v5, v4);
}

unsigned __int8 __fastcall ActorOption::_branchIsShotFlag4(ActorOption *this, float param)
{
  std::bitset<61>::reference *v2; // rax
  unsigned __int64 Mypos; // rdx
  __int64 v4; // rcx
  int v5; // eax
  std::bitset<61>::reference result; // [rsp+28h] [rbp-20h] BYREF

  if ( (unsigned int)(int)param > 0xB )
    return 0;
  v2 = std::bitset<21>::operator[]((std::bitset<61> *)&this->pOwner->bsBranchFlgShotID[3], &result, (int)param);
  Mypos = v2->_Mypos;
  if ( Mypos >= 0xD )
    std::_Xout_of_range("invalid bitset<N> position");
  v4 = v2->_Mypos & 0x1F;
  v5 = *((_DWORD *)v2->_Pbitset->_Array + (Mypos >> 5));
  return _bittest(&v5, v4);
}

bool __fastcall ActorOption::_branchIsShotNotAlive(ActorOption *this, float param)
{
  std::bitset<61>::reference *v2; // rax
  unsigned __int64 Mypos; // rdx
  __int64 v4; // rcx
  int v5; // eax
  std::bitset<61>::reference result; // [rsp+28h] [rbp-20h] BYREF

  if ( (unsigned int)(int)param > 0xB )
    return 0;
  v2 = std::bitset<21>::operator[]((std::bitset<61> *)&this->pOwner->bsAliveShotID, &result, (int)param);
  Mypos = v2->_Mypos;
  if ( Mypos >= 0xD )
    std::_Xout_of_range("invalid bitset<N> position");
  v4 = v2->_Mypos & 0x1F;
  v5 = *((_DWORD *)v2->_Pbitset->_Array + (Mypos >> 5));
  return !_bittest(&v5, v4);
}

