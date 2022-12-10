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
#include "dev/silverware/git/sdk/agpointerinl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_pathdatapacker.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/type_traits"
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
#include "dev/kof/master/development/source/ps4project/baseproject/extension/asyncjob.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_bank.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_manager.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/data/sounddata.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/check/operationmapper.cpp"

class std::unique_ptr<FighterOperation::FighterOperationAssignListener,std::default_delete<FighterOperation::FighterOperationAssignListener> > :
	std::_Unique_ptr_base<FighterOperation::FighterOperationAssignListener,std::default_delete<FighterOperation::FighterOperationAssignListener> >
{
	class _Myt;
	class _Mybase;
	typedef FighterOperation::FighterOperationAssignListener pointer;
	class element_type;
	struct deleter_type;
public:
	unique_ptr<FighterOperation::FighterOperationAssignListener,std::default_delete<FighterOperation::FighterOperationAssignListener> >(const std::unique_ptr<FighterOperation::FighterOperationAssignListener,std::default_delete<FighterOperation::FighterOperationAssignListener> > &);
	unique_ptr<FighterOperation::FighterOperationAssignListener,std::default_delete<FighterOperation::FighterOperationAssignListener> >(std::unique_ptr<FighterOperation::FighterOperationAssignListener,std::default_delete<FighterOperation::FighterOperationAssignListener> > &);
	unique_ptr<FighterOperation::FighterOperationAssignListener,std::default_delete<FighterOperation::FighterOperationAssignListener> >(FighterOperation::FighterOperationAssignListener *, std::default_delete<FighterOperation::FighterOperationAssignListener> &);
	unique_ptr<FighterOperation::FighterOperationAssignListener,std::default_delete<FighterOperation::FighterOperationAssignListener> >(FighterOperation::FighterOperationAssignListener *, const std::default_delete<FighterOperation::FighterOperationAssignListener> &);
	unique_ptr<FighterOperation::FighterOperationAssignListener,std::default_delete<FighterOperation::FighterOperationAssignListener> >(FighterOperation::FighterOperationAssignListener *);
	unique_ptr<FighterOperation::FighterOperationAssignListener,std::default_delete<FighterOperation::FighterOperationAssignListener> >(void *);
	unique_ptr<FighterOperation::FighterOperationAssignListener,std::default_delete<FighterOperation::FighterOperationAssignListener> >();
	std::unique_ptr<FighterOperation::FighterOperationAssignListener,std::default_delete<FighterOperation::FighterOperationAssignListener> > & operator=(const std::unique_ptr<FighterOperation::FighterOperationAssignListener,std::default_delete<FighterOperation::FighterOperationAssignListener> > &);
	std::unique_ptr<FighterOperation::FighterOperationAssignListener,std::default_delete<FighterOperation::FighterOperationAssignListener> > & operator=(std::unique_ptr<FighterOperation::FighterOperationAssignListener,std::default_delete<FighterOperation::FighterOperationAssignListener> > &);
	std::unique_ptr<FighterOperation::FighterOperationAssignListener,std::default_delete<FighterOperation::FighterOperationAssignListener> > & operator=(void *);
	void swap(std::unique_ptr<FighterOperation::FighterOperationAssignListener,std::default_delete<FighterOperation::FighterOperationAssignListener> > &);
	~unique_ptr<FighterOperation::FighterOperationAssignListener,std::default_delete<FighterOperation::FighterOperationAssignListener> >();
	FighterOperation::FighterOperationAssignListener & operator*();
	FighterOperation::FighterOperationAssignListener * operator->();
	FighterOperation::FighterOperationAssignListener * get();
	bool operator bool();
	FighterOperation::FighterOperationAssignListener * release();
	void reset(FighterOperation::FighterOperationAssignListener *);
};
class `anonymous-namespace'::SoundVolumeModulation
{
private:
	static `anonymous-namespace'::SoundVolumeModulation * instance; // 0xFFFFFFFFFFFFFFFF
	enum VOLUME_GROUP
	{
		GROUP_BGM = 0,
		GROUP_PAD = 1,
		GROUP_NORMAL_SE = 2,
		GROUP_AMBIENCE = 3,
		GROUP_CHARA_VOICE = 4,
		GROUP_SYSTEM_VOICE = 5,
		GROUP_SYSTEM_SE = 6,
		GROUP_MAX = 7,
	};
public:
	~SoundVolumeModulation();
	static `anonymous-namespace'::SoundVolumeModulation & GetInstance();
	static float ConvSaveDataVolume(long);
	static void SetVolumeModulation(`anonymous-namespace'::SoundVolumeModulation::VOLUME_GROUP, float, float);
	static void Update();
	static float * GetOutputVolumeRef(`anonymous-namespace'::SoundVolumeModulation::VOLUME_GROUP);
	static void DisableVolumeOutput(`anonymous-namespace'::SoundVolumeModulation::VOLUME_GROUP, bool);
	static bool GetDisableVolumeOutput(`anonymous-namespace'::SoundVolumeModulation::VOLUME_GROUP);
	void setVolumeModulation(`anonymous-namespace'::SoundVolumeModulation::VOLUME_GROUP, float, float);
	void update();
	float * getOutputVolumeRef(`anonymous-namespace'::SoundVolumeModulation::VOLUME_GROUP);
	void disableVolumeOutput(`anonymous-namespace'::SoundVolumeModulation::VOLUME_GROUP, bool);
	bool getDisableVolumeOutput(`anonymous-namespace'::SoundVolumeModulation::VOLUME_GROUP);
	struct ModulationParam;
private:
	`anonymous-namespace'::SoundVolumeModulation::ModulationParam modulationParam[7]; // 0x0
	long long lastFrameTimePoint; // 0xA8
	bool lastFrameTimePointIsValid; // 0xB0
	SoundVolumeModulation(const `anonymous-namespace'::SoundVolumeModulation &);
	SoundVolumeModulation();
	`anonymous-namespace'::SoundVolumeModulation & operator=(const `anonymous-namespace'::SoundVolumeModulation &);
};
class `anonymous-namespace'::SoundVolumeModulation
{
private:
	static `anonymous-namespace'::SoundVolumeModulation * instance; // 0xFFFFFFFFFFFFFFFF
	enum VOLUME_GROUP
	{
		GROUP_BGM = 0,
		GROUP_PAD = 1,
		GROUP_NORMAL_SE = 2,
		GROUP_AMBIENCE = 3,
		GROUP_CHARA_VOICE = 4,
		GROUP_SYSTEM_VOICE = 5,
		GROUP_SYSTEM_SE = 6,
		GROUP_MAX = 7,
	};
public:
	~SoundVolumeModulation();
	static `anonymous-namespace'::SoundVolumeModulation & GetInstance();
	static float ConvSaveDataVolume(long);
	static void SetVolumeModulation(`anonymous-namespace'::SoundVolumeModulation::VOLUME_GROUP, float, float);
	static void Update();
	static float * GetOutputVolumeRef(`anonymous-namespace'::SoundVolumeModulation::VOLUME_GROUP);
	static void DisableVolumeOutput(`anonymous-namespace'::SoundVolumeModulation::VOLUME_GROUP, bool);
	static bool GetDisableVolumeOutput(`anonymous-namespace'::SoundVolumeModulation::VOLUME_GROUP);
	void setVolumeModulation(`anonymous-namespace'::SoundVolumeModulation::VOLUME_GROUP, float, float);
	void update();
	float * getOutputVolumeRef(`anonymous-namespace'::SoundVolumeModulation::VOLUME_GROUP);
	void disableVolumeOutput(`anonymous-namespace'::SoundVolumeModulation::VOLUME_GROUP, bool);
	bool getDisableVolumeOutput(`anonymous-namespace'::SoundVolumeModulation::VOLUME_GROUP);
	struct ModulationParam;
private:
	`anonymous-namespace'::SoundVolumeModulation::ModulationParam modulationParam[7]; // 0x0
	long long lastFrameTimePoint; // 0xA8
	bool lastFrameTimePointIsValid; // 0xB0
	SoundVolumeModulation(const `anonymous-namespace'::SoundVolumeModulation &);
	SoundVolumeModulation();
	`anonymous-namespace'::SoundVolumeModulation & operator=(const `anonymous-namespace'::SoundVolumeModulation &);
};
class `anonymous-namespace'::SoundVolumeModulation
{
private:
	static `anonymous-namespace'::SoundVolumeModulation * instance; // 0xFFFFFFFFFFFFFFFF
	enum VOLUME_GROUP
	{
		GROUP_BGM = 0,
		GROUP_PAD = 1,
		GROUP_NORMAL_SE = 2,
		GROUP_AMBIENCE = 3,
		GROUP_CHARA_VOICE = 4,
		GROUP_SYSTEM_VOICE = 5,
		GROUP_SYSTEM_SE = 6,
		GROUP_MAX = 7,
	};
public:
	~SoundVolumeModulation();
	static `anonymous-namespace'::SoundVolumeModulation & GetInstance();
	static float ConvSaveDataVolume(long);
	static void SetVolumeModulation(`anonymous-namespace'::SoundVolumeModulation::VOLUME_GROUP, float, float);
	static void Update();
	static float * GetOutputVolumeRef(`anonymous-namespace'::SoundVolumeModulation::VOLUME_GROUP);
	static void DisableVolumeOutput(`anonymous-namespace'::SoundVolumeModulation::VOLUME_GROUP, bool);
	static bool GetDisableVolumeOutput(`anonymous-namespace'::SoundVolumeModulation::VOLUME_GROUP);
	void setVolumeModulation(`anonymous-namespace'::SoundVolumeModulation::VOLUME_GROUP, float, float);
	void update();
	float * getOutputVolumeRef(`anonymous-namespace'::SoundVolumeModulation::VOLUME_GROUP);
	void disableVolumeOutput(`anonymous-namespace'::SoundVolumeModulation::VOLUME_GROUP, bool);
	bool getDisableVolumeOutput(`anonymous-namespace'::SoundVolumeModulation::VOLUME_GROUP);
	struct ModulationParam;
private:
	`anonymous-namespace'::SoundVolumeModulation::ModulationParam modulationParam[7]; // 0x0
	long long lastFrameTimePoint; // 0xA8
	bool lastFrameTimePointIsValid; // 0xB0
	SoundVolumeModulation(const `anonymous-namespace'::SoundVolumeModulation &);
	SoundVolumeModulation();
	`anonymous-namespace'::SoundVolumeModulation & operator=(const `anonymous-namespace'::SoundVolumeModulation &);
};
class `anonymous-namespace'::SoundVolumeModulation
{
private:
	static `anonymous-namespace'::SoundVolumeModulation * instance; // 0xFFFFFFFFFFFFFFFF
	enum VOLUME_GROUP
	{
		GROUP_BGM = 0,
		GROUP_PAD = 1,
		GROUP_NORMAL_SE = 2,
		GROUP_AMBIENCE = 3,
		GROUP_CHARA_VOICE = 4,
		GROUP_SYSTEM_VOICE = 5,
		GROUP_SYSTEM_SE = 6,
		GROUP_MAX = 7,
	};
public:
	~SoundVolumeModulation();
	static `anonymous-namespace'::SoundVolumeModulation & GetInstance();
	static float ConvSaveDataVolume(long);
	static void SetVolumeModulation(`anonymous-namespace'::SoundVolumeModulation::VOLUME_GROUP, float, float);
	static void Update();
	static float * GetOutputVolumeRef(`anonymous-namespace'::SoundVolumeModulation::VOLUME_GROUP);
	static void DisableVolumeOutput(`anonymous-namespace'::SoundVolumeModulation::VOLUME_GROUP, bool);
	static bool GetDisableVolumeOutput(`anonymous-namespace'::SoundVolumeModulation::VOLUME_GROUP);
	void setVolumeModulation(`anonymous-namespace'::SoundVolumeModulation::VOLUME_GROUP, float, float);
	void update();
	float * getOutputVolumeRef(`anonymous-namespace'::SoundVolumeModulation::VOLUME_GROUP);
	void disableVolumeOutput(`anonymous-namespace'::SoundVolumeModulation::VOLUME_GROUP, bool);
	bool getDisableVolumeOutput(`anonymous-namespace'::SoundVolumeModulation::VOLUME_GROUP);
	struct ModulationParam;
private:
	`anonymous-namespace'::SoundVolumeModulation::ModulationParam modulationParam[7]; // 0x0
	long long lastFrameTimePoint; // 0xA8
	bool lastFrameTimePointIsValid; // 0xB0
	SoundVolumeModulation(const `anonymous-namespace'::SoundVolumeModulation &);
	SoundVolumeModulation();
	`anonymous-namespace'::SoundVolumeModulation & operator=(const `anonymous-namespace'::SoundVolumeModulation &);
};
void(*s_PadSoundOutputSelector$initializer$)(); // 0x140740858
std::unique_ptr<FighterOperation::FighterOperationAssignListener,std::default_delete<FighterOperation::FighterOperationAssignListener> > s_PadSoundOutputSelector; // 0x140AC6608
std::piecewise_construct_t std::piecewise_construct; // 0x1408AECC0
const char s_menu_bank_path[16]; // 0x1408AECC8
const char s_bgm_bank_path[15]; // 0x1408AECD8
const char s_common_bank_path[18]; // 0x1408AECE8
`anonymous-namespace'::SoundVolumeModulation * SoundVolumeModulation::instance; // 0x140A9B688
const char s_network_bank_path[19]; // 0x1408AED00
class std::chrono::duration<float,std::ratio<1,1> >
{
	class _Myt;
	typedef float rep;
	struct period;
public:
	float count();
	std::chrono::duration<float,std::ratio<1,1> > operator+();
	std::chrono::duration<float,std::ratio<1,1> > operator-();
	std::chrono::duration<float,std::ratio<1,1> > operator++(long);
	std::chrono::duration<float,std::ratio<1,1> > & operator++();
	std::chrono::duration<float,std::ratio<1,1> > operator--(long);
	std::chrono::duration<float,std::ratio<1,1> > & operator--();
	std::chrono::duration<float,std::ratio<1,1> > & operator+=(const std::chrono::duration<float,std::ratio<1,1> > &);
	std::chrono::duration<float,std::ratio<1,1> > & operator-=(const std::chrono::duration<float,std::ratio<1,1> > &);
	std::chrono::duration<float,std::ratio<1,1> > & operator*=(const float &);
	std::chrono::duration<float,std::ratio<1,1> > & operator/=(const float &);
	std::chrono::duration<float,std::ratio<1,1> > & operator%=(const std::chrono::duration<float,std::ratio<1,1> > &);
	std::chrono::duration<float,std::ratio<1,1> > & operator%=(const float &);
	static std::chrono::duration<float,std::ratio<1,1> > zero();
	static std::chrono::duration<float,std::ratio<1,1> > min();
	static std::chrono::duration<float,std::ratio<1,1> > max();
private:
	float _MyRep; // 0x0
};
struct `anonymous-namespace'::SoundVolumeModulation::ModulationParam
{
	float fOutput; // 0x0
	float fMaster; // 0x4
	float fCurrent; // 0x8
	float fTo; // 0xC
	float fStep; // 0x10
	bool bDisable; // 0x14
	ModulationParam();
};
void AppMain::Sound_Create(); // 0x14023F8F0
class AppMain::Sound_Create::__l2::PadOutputSelector :
	FighterOperation::FighterOperationAssignListener
{
public:
	virtual void OnFighterOperationAssignChanged(long, long, long);
	PadOutputSelector();
	virtual ~PadOutputSelector();
};
bool AppMain::Sound_IsLoadComplete(); // 0x1402402C0
void AppMain::Sound_LoadCommon(); // 0x140240360
void AppMain::Sound_LoadStage(const char * bank_file_path); // 0x1402404A0
void AppMain::Sound_LoadPCharacter(long playerIndex, const char * bank_file_path); // 0x140240530
void AppMain::Sound_LoadAppendPCharacter(long playerIndex, const char * bank_file_path); // 0x1402405F0
void AppMain::Sound_UnloadPCharacter(); // 0x1402406A0
class UnloadSoundJob :
	extension::ExThread::Runnable,
	extension::AsyncContentConstants,
	extension::FutureObjectSpec
{
public:
	UnloadSoundJob(UnloadSoundJob &);
	UnloadSoundJob(const UnloadSoundJob &);
	UnloadSoundJob();
	virtual long run();
protected:
	AppMain * instance; // 0x18
public:
	virtual ~UnloadSoundJob();
	UnloadSoundJob & operator=(UnloadSoundJob &);
	UnloadSoundJob & operator=(const UnloadSoundJob &);
};
long UnloadSoundJob::run(); // 0x1402407F0
void AppMain::Sound_UnloadAll(bool keep_resident); // 0x140240820
void AppMain::RequestPlayBGM(SoundId no, float pos, float fadeSeconds, bool bNonStop); // 0x1402408D0
void AppMain::RequestPlaySE(SoundId no); // 0x140240970
extension::SoundHashKey AppMain::Sound_GetName(AppMain::SoundListIndex soundList, long soundIndex); // 0x1402409E0
void AppMain::Sound_PlayBGMByName(const extension::SoundHashKey & soundName, float fadeSeconds, float pos, bool bNonStop); // 0x140240AE0
void AppMain::Sound_PlaySEByName(const char * soundName, const extension::SoundOneshotParameters * optionParams); // 0x140240B60
void AppMain::Sound_PlaySEByName(const extension::SoundHashKey & soundName, const extension::SoundObject * obj, const extension::SoundOneshotParameters * optionParams); // 0x140240BF0
void AppMain::Sound_PlaySEByName(AppMain::SoundListIndex soundList, const char * soundName, const extension::SoundOneshotParameters * optionParams); // 0x140240C90
void AppMain::Sound_PlaySEByName(AppMain::SoundListIndex soundList, const char * soundName, const extension::SoundObject * obj, const extension::SoundOneshotParameters * optionParams); // 0x140240D20
bool AppMain::Sound_IsPlayingSEByName(AppMain::SoundListIndex soundList, const char * name); // 0x140240DE0
bool AppMain::Sound_IsPlayingSEByName(AppMain::SoundListIndex soundList, const char * soundName, const extension::SoundObject * obj); // 0x140240E50
bool AppMain::Sound_IsPlaying(); // 0x140240EE0
void AppMain::Sound_StopBattleSE(float fadeSeconds); // 0x1402410A0
void AppMain::Sound_PauseBattleSE(bool pause); // 0x140241110
void AppMain::Sound_Volume_Commit(); // 0x140241180
void AppMain::Sound_Volume_SE_Modulation(float modulation, float time); // 0x1402411F0
bool AppMain::Sound_BGMPlay_IsActive(); // 0x140241340
float AppMain::Sound_BGMPlay_GetPosition(); // 0x1402413A0
extension::SoundHashKey AppMain::Sound_BGMPlay_GetSoundHashKey(); // 0x1402413F0
void AppMain::RequestPlayBGMUtil(SoundId soundID, AppMain::BGM_MODE mode, float fadeSeconds, float pos, bool bNonStop); // 0x1402414A0
void AppMain::RequestPlayBGMUtil(extension::SoundHashKey reqBGM, AppMain::BGM_MODE mode, float fadeSeconds, float pos, bool bNonStop); // 0x140241510
void AppMain::Sound_StopBGM(float fadeSeconds); // 0x140241040//decompilation failure at 140740858!
//decompilation failure at 140AC6608!
//decompilation failure at 1408AECC0!
//decompilation failure at 1408AECC8!
//decompilation failure at 1408AECD8!
//decompilation failure at 1408AECE8!
//decompilation failure at 140A9B688!
//decompilation failure at 1408AED00!
void __fastcall std::_Destroy_range<std::allocator<extension::SoundManager::PlayInfo>,extension::SoundManager::PlayInfo *>(
        extension::SoundManager::PlayInfo *_First,
        extension::SoundManager::PlayInfo *_Last,
        std::_Wrap_alloc<std::allocator<extension::SoundManager::PlayInfo> > *_Al)
{
  extension::SoundHashKey *p_SoundKey; // rbx
  extension::exsound_detail::SoundNameRegistry::NameBuffer *m_ptr; // rcx

  if ( _First != _Last )
  {
    p_SoundKey = &_First->SoundKey;
    do
    {
      m_ptr = p_SoundKey->m_sharedBuffer.m_ptr;
      if ( p_SoundKey->m_sharedBuffer.m_ptr )
      {
        if ( _InterlockedExchangeAdd64(
               (volatile signed __int64 *)&m_ptr->m_refCount.m_ptr->m_sharedCount,
               0xFFFFFFFFFFFFFFFFui64) == 1 )
          ((void (__fastcall *)(extension::exsound_detail::SoundNameRegistry::NameBuffer *, __int64, std::_Wrap_alloc<std::allocator<extension::SoundManager::PlayInfo> > *))m_ptr->~RefCountableWeakSupportBase)(
            m_ptr,
            1i64,
            _Al);
      }
      p_SoundKey += 4;
    }
    while ( &p_SoundKey[-3] != (extension::SoundHashKey *)_Last );
  }
}

// attributes: thunk
void __fastcall std::vector<extension::SoundManager::PlayInfo>::~vector<extension::SoundManager::PlayInfo>(
        std::vector<extension::SoundManager::PlayInfo> *this)
{
  std::vector<extension::SoundManager::PlayInfo>::_Tidy(this);
}

void __fastcall CMediaManager::~CMediaManager(CMediaManager *this)
{
  CMediaManager::finalize(this);
  this->m_sound_bgm_host.__vftable = (CMediaManager::ThreadHost_vtbl *)&AgIThreadHost::`vftable';
  this->m_sound_reverb2_host.__vftable = (CMediaManager::ThreadHost_vtbl *)&AgIThreadHost::`vftable';
  this->m_sound_reverb_host.__vftable = (CMediaManager::ThreadHost_vtbl *)&AgIThreadHost::`vftable';
  this->m_sound_host.__vftable = (CMediaManager::ThreadHost_vtbl *)&AgIThreadHost::`vftable';
  AgThread::~AgThread(&this->m_thread_sound_bgm);
  AgThread::~AgThread(&this->m_thread_sound_reverb2);
  AgThread::~AgThread(&this->m_thread_sound_reverb);
  AgThread::~AgThread(&this->m_thread_sound);
}

_BOOL8 __fastcall extension::SoundManager::Debug_IsDisableAllRequest()
{
  extension::SoundManager *v0; // rax
  extension::SoundManager *v2; // [rsp+40h] [rbp+8h]

  v0 = extension::SoundManager::the_instance;
  if ( !extension::SoundManager::the_instance )
  {
    v2 = (extension::SoundManager *)operator new(0x310ui64);
    extension::SoundManager::SoundManager(v2);
    extension::SoundManager::the_instance = v0;
  }
  return v0->m_debugIsDisableAllRequest;
}

void __fastcall AppMain::RequestPlayBGM(AppMain *this, SoundId no, float pos, float fadeSeconds)
{
  extension::SoundManager *v4; // rax
  SoundIndex *v5; // rdx
  extension::SoundManager *v6; // [rsp+38h] [rbp-20h]

  if ( no >= SND_BGM_CHARACTER_SELECT )
  {
    if ( (unsigned __int64)(int)no >= SND_MAX )
      v5 = &s_soundIndex;
    else
      v5 = (SoundIndex *)&s_soundIndex.m_keys[no];
    AppMain::Sound_PlayBGMByName(this, &v5->m_nullKey, fadeSeconds, pos, 0);
  }
  else
  {
    v4 = extension::SoundManager::the_instance;
    if ( !extension::SoundManager::the_instance )
    {
      v6 = (extension::SoundManager *)operator new(0x310ui64);
      extension::SoundManager::SoundManager(v6);
      extension::SoundManager::the_instance = v4;
    }
    extension::SoundManager::stopBGM(v4, fadeSeconds);
  }
}

void __fastcall AppMain::RequestPlayBGMUtil(
        AppMain *this,
        extension::SoundHashKey reqBGM,
        AppMain::BGM_MODE mode,
        float fadeSeconds,
        float pos,
        bool bNonStop)
{
  extension::exsound_detail::SoundNameRegistry::NameBuffer *v9; // rdx
  extension::exsound_detail::SoundNameRegistry::NameBuffer *v10; // rcx
  bool v11; // zf
  extension::exsound_detail::SoundNameRegistry::NameBuffer *m_ptr; // rbx
  extension::exsound_detail::SoundNameRegistry::NameBuffer_vtbl *v13; // r8
  char *m_str; // rax
  signed __int64 v15; // r8
  int v16; // ecx
  int v17; // edx
  extension::exsound_detail::SoundNameRegistry::NameBuffer_vtbl *v18; // rcx
  extension::SoundHashKey result; // [rsp+30h] [rbp-28h] BYREF
  __int64 v20; // [rsp+38h] [rbp-20h]

  v20 = -2i64;
  AppMain::Sound_BGMPlay_GetSoundHashKey(this, &result);
  if ( mode != BGM_MODE_ACTIVE )
  {
    v11 = mode == BGM_MODE_PASSIVE;
    m_ptr = result.m_sharedBuffer.m_ptr;
    if ( v11 )
    {
      if ( result.m_sharedBuffer.m_ptr )
      {
LABEL_20:
        if ( !m_ptr )
          goto LABEL_24;
        v11 = _InterlockedExchangeAdd64(
                (volatile signed __int64 *)&m_ptr->m_refCount.m_ptr->m_sharedCount,
                0xFFFFFFFFFFFFFFFFui64) == 1;
        goto LABEL_22;
      }
    }
    else if ( result.m_sharedBuffer.m_ptr )
    {
      v13 = reqBGM.m_sharedBuffer.m_ptr->__vftable;
      if ( reqBGM.m_sharedBuffer.m_ptr->__vftable )
        v13 += 3;
      m_str = result.m_sharedBuffer.m_ptr->m_str;
      v15 = (char *)v13 - result.m_sharedBuffer.m_ptr->m_str;
      do
      {
        v16 = (unsigned __int8)m_str[v15];
        v17 = (unsigned __int8)*m_str - v16;
        if ( v17 )
          break;
        ++m_str;
      }
      while ( v16 );
      if ( !v17 )
        goto LABEL_20;
    }
    AppMain::Sound_PlayBGMByName(
      this,
      (const extension::SoundHashKey *)reqBGM.m_sharedBuffer.m_ptr,
      fadeSeconds,
      pos,
      bNonStop);
    extension::SoundHashKey::operator=(
      &this->m_nowPlayBGM,
      (const extension::SoundHashKey *)reqBGM.m_sharedBuffer.m_ptr);
    goto LABEL_20;
  }
  AppMain::Sound_PlayBGMByName(
    this,
    (const extension::SoundHashKey *)reqBGM.m_sharedBuffer.m_ptr,
    fadeSeconds,
    pos,
    bNonStop);
  v9 = (extension::exsound_detail::SoundNameRegistry::NameBuffer *)reqBGM.m_sharedBuffer.m_ptr->__vftable;
  if ( reqBGM.m_sharedBuffer.m_ptr->__vftable )
    _InterlockedExchangeAdd64((volatile signed __int64 *)&v9->m_refCount.m_ptr->m_sharedCount, 1ui64);
  v10 = this->m_nowPlayBGM.m_sharedBuffer.m_ptr;
  this->m_nowPlayBGM.m_sharedBuffer.m_ptr = v9;
  if ( v10
    && _InterlockedExchangeAdd64(
         (volatile signed __int64 *)&v10->m_refCount.m_ptr->m_sharedCount,
         0xFFFFFFFFFFFFFFFFui64) == 1 )
  {
    ((void (__fastcall *)(extension::exsound_detail::SoundNameRegistry::NameBuffer *, __int64))v10->~RefCountableWeakSupportBase)(
      v10,
      1i64);
  }
  if ( result.m_sharedBuffer.m_ptr )
  {
    v11 = _InterlockedExchangeAdd64(
            (volatile signed __int64 *)&result.m_sharedBuffer.m_ptr->m_refCount.m_ptr->m_sharedCount,
            0xFFFFFFFFFFFFFFFFui64) == 1;
LABEL_22:
    if ( v11 )
      ((void (__fastcall *)(extension::exsound_detail::SoundNameRegistry::NameBuffer *, __int64))result.m_sharedBuffer.m_ptr->~RefCountableWeakSupportBase)(
        result.m_sharedBuffer.m_ptr,
        1i64);
  }
LABEL_24:
  v18 = reqBGM.m_sharedBuffer.m_ptr->__vftable;
  if ( reqBGM.m_sharedBuffer.m_ptr->__vftable )
  {
    if ( _InterlockedExchangeAdd64(
           (volatile signed __int64 *)v18[1].~RefCountableWeakSupportBase + 2,
           0xFFFFFFFFFFFFFFFFui64) == 1 )
      (*(void (__fastcall **)(extension::exsound_detail::SoundNameRegistry::NameBuffer_vtbl *, __int64))v18->~RefCountableWeakSupportBase)(
        v18,
        1i64);
  }
}

void __fastcall AppMain::RequestPlayBGMUtil(
        AppMain *this,
        SoundId soundID,
        AppMain::BGM_MODE mode,
        float fadeSeconds,
        float pos,
        bool bNonStop)
{
  SoundIndex *v6; // rdx
  extension::exsound_detail::SoundNameRegistry::NameBuffer *m_ptr; // rax
  extension::SoundHashKey reqBGM; // [rsp+30h] [rbp-18h] BYREF

  if ( (unsigned __int64)(int)soundID >= SND_MAX )
    v6 = &s_soundIndex;
  else
    v6 = (SoundIndex *)&s_soundIndex.m_keys[soundID];
  m_ptr = v6->m_nullKey.m_sharedBuffer.m_ptr;
  reqBGM.m_sharedBuffer.m_ptr = m_ptr;
  if ( m_ptr )
    _InterlockedExchangeAdd64((volatile signed __int64 *)&m_ptr->m_refCount.m_ptr->m_sharedCount, 1ui64);
  AppMain::RequestPlayBGMUtil(this, (extension::SoundHashKey)&reqBGM, mode, fadeSeconds, pos, bNonStop);
}

void __fastcall AppMain::RequestPlaySE(AppMain *this, SoundId no)
{
  SoundIndex *v3; // rbx

  if ( (unsigned __int64)(int)no >= SND_MAX )
    v3 = &s_soundIndex;
  else
    v3 = (SoundIndex *)&s_soundIndex.m_keys[no];
  if ( v3->m_nullKey.m_sharedBuffer.m_ptr )
  {
    if ( !extension::SoundList::playSEByName(&this->m_Snd_Lists[5], &v3->m_nullKey, 0i64) )
      extension::SoundList::playSEByName(this->m_Snd_Lists, &v3->m_nullKey, 0i64);
  }
}

void __fastcall extension::SoundManager::SetMasterVolumeBGM(float vol)
{
  extension::SoundManager *v1; // rdx
  extension::SoundManager *v2; // rax
  float *v3; // rcx
  int *v4; // rax
  float v5; // [rsp+50h] [rbp+8h] BYREF
  extension::SoundManager *v6; // [rsp+58h] [rbp+10h] BYREF
  int v7; // [rsp+60h] [rbp+18h] BYREF

  v1 = extension::SoundManager::the_instance;
  if ( !extension::SoundManager::the_instance )
  {
    v6 = (extension::SoundManager *)operator new(0x310ui64);
    extension::SoundManager::SoundManager(v6);
    v1 = v2;
    extension::SoundManager::the_instance = v2;
  }
  v5 = vol;
  LODWORD(v6) = 1065353216;
  v7 = 0;
  v3 = &v5;
  if ( vol >= 1.0 )
    v3 = (float *)&v6;
  v4 = &v7;
  if ( *v3 > 0.0 )
    v4 = (int *)v3;
  LODWORD(v1->m_masterVolumeBGM) = *v4;
}

void __fastcall extension::SoundManager::SetMasterVolumePad(float vol)
{
  extension::SoundManager *v1; // rdx
  extension::SoundManager *v2; // rax
  float *v3; // rcx
  int *v4; // rax
  float v5; // [rsp+50h] [rbp+8h] BYREF
  extension::SoundManager *v6; // [rsp+58h] [rbp+10h] BYREF
  int v7; // [rsp+60h] [rbp+18h] BYREF

  v1 = extension::SoundManager::the_instance;
  if ( !extension::SoundManager::the_instance )
  {
    v6 = (extension::SoundManager *)operator new(0x310ui64);
    extension::SoundManager::SoundManager(v6);
    v1 = v2;
    extension::SoundManager::the_instance = v2;
  }
  v5 = vol;
  LODWORD(v6) = 1065353216;
  v7 = 0;
  v3 = &v5;
  if ( vol >= 1.0 )
    v3 = (float *)&v6;
  v4 = &v7;
  if ( *v3 > 0.0 )
    v4 = (int *)v3;
  LODWORD(v1->m_padMasterVolume) = *v4;
}

void __fastcall extension::SoundManager::SetMasterVolumeSE(float vol)
{
  extension::SoundManager *v1; // rdx
  extension::SoundManager *v2; // rax
  float *v3; // rcx
  int *v4; // rax
  float v5; // [rsp+50h] [rbp+8h] BYREF
  extension::SoundManager *v6; // [rsp+58h] [rbp+10h] BYREF
  int v7; // [rsp+60h] [rbp+18h] BYREF

  v1 = extension::SoundManager::the_instance;
  if ( !extension::SoundManager::the_instance )
  {
    v6 = (extension::SoundManager *)operator new(0x310ui64);
    extension::SoundManager::SoundManager(v6);
    v1 = v2;
    extension::SoundManager::the_instance = v2;
  }
  v5 = vol;
  LODWORD(v6) = 1065353216;
  v7 = 0;
  v3 = &v5;
  if ( vol >= 1.0 )
    v3 = (float *)&v6;
  v4 = &v7;
  if ( *v3 > 0.0 )
    v4 = (int *)v3;
  LODWORD(v1->m_masterVolumeSE) = *v4;
}

void __fastcall extension::SoundManager::SetStageReverbParameter(
        int attenuationPercent,
        int delayTimeMsec,
        int repeatCount,
        int reflectionAttenuationPercent,
        int fluctuationDelayTimeMsec)
{
  extension::SoundManager *v9; // rax
  extension::SoundManager *v10; // [rsp+38h] [rbp-10h]

  v9 = extension::SoundManager::the_instance;
  if ( !extension::SoundManager::the_instance )
  {
    v10 = (extension::SoundManager *)operator new(0x310ui64);
    extension::SoundManager::SoundManager(v10);
    extension::SoundManager::the_instance = v9;
  }
  extension::SoundManager::ReverbState::set(
    &v9->m_rtState.stageReverb,
    attenuationPercent,
    delayTimeMsec,
    repeatCount,
    reflectionAttenuationPercent,
    fluctuationDelayTimeMsec);
}

double __fastcall AppMain::Sound_BGMPlay_GetPosition(AppMain *this)
{
  extension::SoundManager *v1; // rax
  double result; // xmm0_8
  extension::SoundManager *v3; // [rsp+40h] [rbp+8h]

  v1 = extension::SoundManager::the_instance;
  if ( !extension::SoundManager::the_instance )
  {
    v3 = (extension::SoundManager *)operator new(0x310ui64);
    extension::SoundManager::SoundManager(v3);
    extension::SoundManager::the_instance = v1;
  }
  *(float *)&result = extension::SoundManager::BGMPlay_getPosition(v1);
  return result;
}

extension::SoundHashKey *__fastcall AppMain::Sound_BGMPlay_GetSoundHashKey(
        AppMain *this,
        extension::SoundHashKey *result)
{
  extension::SoundManager *v3; // rax
  extension::SoundHashKey *SoundHashKey; // rax
  extension::exsound_detail::SoundNameRegistry::NameBuffer *m_ptr; // rcx
  extension::exsound_detail::SoundNameRegistry::NameBuffer *v6; // rcx
  extension::SoundManager *v8; // [rsp+40h] [rbp+8h]
  extension::SoundHashKey resulta; // [rsp+48h] [rbp+10h] BYREF

  resulta.m_sharedBuffer.m_ptr = (extension::exsound_detail::SoundNameRegistry::NameBuffer *)result;
  v3 = extension::SoundManager::the_instance;
  if ( !extension::SoundManager::the_instance )
  {
    v8 = (extension::SoundManager *)operator new(0x310ui64);
    extension::SoundManager::SoundManager(v8);
    extension::SoundManager::the_instance = v3;
  }
  SoundHashKey = extension::SoundManager::BGMPlay_getSoundHashKey(v3, &resulta);
  m_ptr = SoundHashKey->m_sharedBuffer.m_ptr;
  result->m_sharedBuffer.m_ptr = SoundHashKey->m_sharedBuffer.m_ptr;
  if ( m_ptr )
    _InterlockedExchangeAdd64((volatile signed __int64 *)&m_ptr->m_refCount.m_ptr->m_sharedCount, 1ui64);
  v6 = resulta.m_sharedBuffer.m_ptr;
  if ( resulta.m_sharedBuffer.m_ptr
    && _InterlockedExchangeAdd64(
         (volatile signed __int64 *)&resulta.m_sharedBuffer.m_ptr->m_refCount.m_ptr->m_sharedCount,
         0xFFFFFFFFFFFFFFFFui64) == 1 )
  {
    ((void (__fastcall *)(extension::exsound_detail::SoundNameRegistry::NameBuffer *, __int64))v6->~RefCountableWeakSupportBase)(
      v6,
      1i64);
  }
  return result;
}

bool __fastcall AppMain::Sound_BGMPlay_IsActive(AppMain *this)
{
  extension::SoundManager *v1; // rax
  extension::SoundManager *v3; // [rsp+40h] [rbp+8h]

  v1 = extension::SoundManager::the_instance;
  if ( !extension::SoundManager::the_instance )
  {
    v3 = (extension::SoundManager *)operator new(0x310ui64);
    extension::SoundManager::SoundManager(v3);
    extension::SoundManager::the_instance = v1;
  }
  return v1->m_bgmRequest.m_reserved && v1->m_bgmRequest.m_soundSource.m_elementDef.m_ptr || v1->m_lastBGMPlayer;
}

void __fastcall AppMain::Sound_Create(AppMain *this)
{
  CMediaManager *v2; // rax
  CMediaManager *v3; // rdi
  extension::SoundManager *v4; // rax
  SoundVolumeModulation *Instance; // rdi
  extension::SoundManager *v6; // rax
  SoundVolumeModulation *v7; // rdi
  extension::SoundManager *v8; // rax
  SoundVolumeModulation *v9; // rdi
  extension::SoundManager *v10; // rax
  SoundVolumeModulation *v11; // rdi
  extension::SoundManager *v12; // rax
  SoundVolumeModulation *v13; // rdi
  extension::SoundManager *v14; // rax
  SoundVolumeModulation *v15; // rdi
  extension::SoundManager *v16; // rax
  SoundVolumeModulation *v17; // rdi
  extension::SoundManager *v18; // rax
  SoundVolumeModulation *v19; // rdi
  extension::SoundManager *v20; // rax
  SoundVolumeModulation *v21; // rdi
  extension::SoundManager *v22; // rax
  SoundVolumeModulation *v23; // rdi
  extension::SoundManager *v24; // rax
  SoundVolumeModulation *v25; // rdi
  extension::SoundManager *v26; // rax
  SoundVolumeModulation *v27; // rdi
  extension::SoundManager *v28; // rax
  SoundVolumeModulation *v29; // rdi
  extension::SoundManager *v30; // rax
  SoundVolumeModulation *v31; // rdi
  extension::SoundManager *v32; // rax
  SoundVolumeModulation *v33; // rdi
  extension::SoundManager *v34; // rax
  SoundVolumeModulation *v35; // rdi
  extension::SoundManager *v36; // rax
  SoundVolumeModulation *v37; // rdi
  extension::SoundManager *v38; // rax
  SoundVolumeModulation *v39; // rdi
  extension::SoundManager *v40; // rax
  SoundVolumeModulation *v41; // rdi
  extension::SoundManager *v42; // rax
  SoundVolumeModulation *v43; // rdi
  extension::SoundManager *v44; // rax
  FighterOperation::FighterOperationAssignListener *Myval2; // rcx
  FighterOperation *v46; // rax
  FighterOperation *v47; // rbx
  __int64 userIndex; // r8
  __int64 v49; // r8
  FighterOperation::ListenerNode *v50; // r9
  FighterOperation::ListenerNode *v51; // r8
  bool v52; // zf
  CMediaManager *v53; // [rsp+40h] [rbp+8h]
  extension::SoundManager *v54; // [rsp+40h] [rbp+8h]
  extension::SoundManager *v55; // [rsp+40h] [rbp+8h]
  extension::SoundManager *v56; // [rsp+40h] [rbp+8h]
  extension::SoundManager *v57; // [rsp+40h] [rbp+8h]
  extension::SoundManager *v58; // [rsp+40h] [rbp+8h]
  extension::SoundManager *v59; // [rsp+40h] [rbp+8h]
  extension::SoundManager *v60; // [rsp+40h] [rbp+8h]
  extension::SoundManager *v61; // [rsp+40h] [rbp+8h]
  extension::SoundManager *v62; // [rsp+40h] [rbp+8h]
  extension::SoundManager *v63; // [rsp+40h] [rbp+8h]
  extension::SoundManager *v64; // [rsp+40h] [rbp+8h]
  extension::SoundManager *v65; // [rsp+40h] [rbp+8h]
  extension::SoundManager *v66; // [rsp+40h] [rbp+8h]
  extension::SoundManager *v67; // [rsp+40h] [rbp+8h]
  extension::SoundManager *v68; // [rsp+40h] [rbp+8h]
  extension::SoundManager *v69; // [rsp+40h] [rbp+8h]
  extension::SoundManager *v70; // [rsp+40h] [rbp+8h]
  extension::SoundManager *v71; // [rsp+40h] [rbp+8h]
  extension::SoundManager *v72; // [rsp+40h] [rbp+8h]
  extension::SoundManager *v73; // [rsp+40h] [rbp+8h]
  extension::SoundManager *v74; // [rsp+40h] [rbp+8h]
  FighterOperation::FighterOperationAssignListener *v75; // [rsp+40h] [rbp+8h]

  v53 = (CMediaManager *)operator new(0x938ui64);
  CMediaManager::CMediaManager(v53);
  v3 = v2;
  this->pMediaManager = v2;
  v4 = extension::SoundManager::the_instance;
  if ( !extension::SoundManager::the_instance )
  {
    v54 = (extension::SoundManager *)operator new(0x310ui64);
    extension::SoundManager::SoundManager(v54);
    extension::SoundManager::the_instance = v4;
  }
  extension::SoundManager::initialize(v4, v3);
  Instance = anonymous_namespace_::SoundVolumeModulation::GetInstance();
  v6 = extension::SoundManager::the_instance;
  if ( !extension::SoundManager::the_instance )
  {
    v55 = (extension::SoundManager *)operator new(0x310ui64);
    extension::SoundManager::SoundManager(v55);
    extension::SoundManager::the_instance = v6;
  }
  v6->m_bgmVolumeModulationRef = (float *)Instance;
  v7 = anonymous_namespace_::SoundVolumeModulation::GetInstance();
  v8 = extension::SoundManager::the_instance;
  if ( !extension::SoundManager::the_instance )
  {
    v56 = (extension::SoundManager *)operator new(0x310ui64);
    extension::SoundManager::SoundManager(v56);
    extension::SoundManager::the_instance = v8;
  }
  v8->m_padVolumeModulationRef = &v7->modulationParam[1].fOutput;
  *(_QWORD *)v8->m_groupPlayerLimits = 0i64;
  v8->m_groupPlayerLimits[2] = 0;
  v8->m_groupPlayerLimits[3] = 1;
  v8->m_groupPlayerLimits[4] = 1;
  v8->m_groupPlayerLimits[5] = 1;
  v8->m_groupPlayerLimits[6] = 1;
  v8->m_groupPlayerLimits[7] = 1;
  v8->m_groupPlayerLimits[8] = 2;
  v8->m_groupPlayerLimits[9] = 1;
  v8->m_groupPlayerLimits[10] = 1;
  v8->m_groupPlayerLimits[11] = 6;
  *(_QWORD *)&v8->m_groupPlayerLimits[12] = 4i64;
  *(_QWORD *)&v8->m_groupPlayerLimits[14] = 0i64;
  *(_QWORD *)&v8->m_groupPlayerLimits[16] = 0i64;
  v9 = anonymous_namespace_::SoundVolumeModulation::GetInstance();
  v10 = extension::SoundManager::the_instance;
  if ( !extension::SoundManager::the_instance )
  {
    v57 = (extension::SoundManager *)operator new(0x310ui64);
    extension::SoundManager::SoundManager(v57);
    extension::SoundManager::the_instance = v10;
  }
  v10->m_groupSEVolumeRefs[0] = &v9->modulationParam[2].fOutput;
  v11 = anonymous_namespace_::SoundVolumeModulation::GetInstance();
  v12 = extension::SoundManager::the_instance;
  if ( !extension::SoundManager::the_instance )
  {
    v58 = (extension::SoundManager *)operator new(0x310ui64);
    extension::SoundManager::SoundManager(v58);
    extension::SoundManager::the_instance = v12;
  }
  v12->m_groupSEVolumeRefs[1] = &v11->modulationParam[3].fOutput;
  v13 = anonymous_namespace_::SoundVolumeModulation::GetInstance();
  v14 = extension::SoundManager::the_instance;
  if ( !extension::SoundManager::the_instance )
  {
    v59 = (extension::SoundManager *)operator new(0x310ui64);
    extension::SoundManager::SoundManager(v59);
    extension::SoundManager::the_instance = v14;
  }
  v14->m_groupSEVolumeRefs[2] = &v13->modulationParam[3].fOutput;
  v15 = anonymous_namespace_::SoundVolumeModulation::GetInstance();
  v16 = extension::SoundManager::the_instance;
  if ( !extension::SoundManager::the_instance )
  {
    v60 = (extension::SoundManager *)operator new(0x310ui64);
    extension::SoundManager::SoundManager(v60);
    extension::SoundManager::the_instance = v16;
  }
  v16->m_groupSEVolumeRefs[3] = &v15->modulationParam[2].fOutput;
  v17 = anonymous_namespace_::SoundVolumeModulation::GetInstance();
  v18 = extension::SoundManager::the_instance;
  if ( !extension::SoundManager::the_instance )
  {
    v61 = (extension::SoundManager *)operator new(0x310ui64);
    extension::SoundManager::SoundManager(v61);
    extension::SoundManager::the_instance = v18;
  }
  v18->m_groupSEVolumeRefs[4] = &v17->modulationParam[4].fOutput;
  v19 = anonymous_namespace_::SoundVolumeModulation::GetInstance();
  v20 = extension::SoundManager::the_instance;
  if ( !extension::SoundManager::the_instance )
  {
    v62 = (extension::SoundManager *)operator new(0x310ui64);
    extension::SoundManager::SoundManager(v62);
    extension::SoundManager::the_instance = v20;
  }
  v20->m_groupSEVolumeRefs[5] = &v19->modulationParam[4].fOutput;
  v21 = anonymous_namespace_::SoundVolumeModulation::GetInstance();
  v22 = extension::SoundManager::the_instance;
  if ( !extension::SoundManager::the_instance )
  {
    v63 = (extension::SoundManager *)operator new(0x310ui64);
    extension::SoundManager::SoundManager(v63);
    extension::SoundManager::the_instance = v22;
  }
  v22->m_groupSEVolumeRefs[6] = &v21->modulationParam[4].fOutput;
  v23 = anonymous_namespace_::SoundVolumeModulation::GetInstance();
  v24 = extension::SoundManager::the_instance;
  if ( !extension::SoundManager::the_instance )
  {
    v64 = (extension::SoundManager *)operator new(0x310ui64);
    extension::SoundManager::SoundManager(v64);
    extension::SoundManager::the_instance = v24;
  }
  v24->m_groupSEVolumeRefs[7] = &v23->modulationParam[4].fOutput;
  v25 = anonymous_namespace_::SoundVolumeModulation::GetInstance();
  v26 = extension::SoundManager::the_instance;
  if ( !extension::SoundManager::the_instance )
  {
    v65 = (extension::SoundManager *)operator new(0x310ui64);
    extension::SoundManager::SoundManager(v65);
    extension::SoundManager::the_instance = v26;
  }
  v26->m_groupSEVolumeRefs[8] = &v25->modulationParam[5].fOutput;
  v27 = anonymous_namespace_::SoundVolumeModulation::GetInstance();
  v28 = extension::SoundManager::the_instance;
  if ( !extension::SoundManager::the_instance )
  {
    v66 = (extension::SoundManager *)operator new(0x310ui64);
    extension::SoundManager::SoundManager(v66);
    extension::SoundManager::the_instance = v28;
  }
  v28->m_groupSEVolumeRefs[9] = &v27->modulationParam[5].fOutput;
  v29 = anonymous_namespace_::SoundVolumeModulation::GetInstance();
  v30 = extension::SoundManager::the_instance;
  if ( !extension::SoundManager::the_instance )
  {
    v67 = (extension::SoundManager *)operator new(0x310ui64);
    extension::SoundManager::SoundManager(v67);
    extension::SoundManager::the_instance = v30;
  }
  v30->m_groupSEVolumeRefs[10] = &v29->modulationParam[5].fOutput;
  v31 = anonymous_namespace_::SoundVolumeModulation::GetInstance();
  v32 = extension::SoundManager::the_instance;
  if ( !extension::SoundManager::the_instance )
  {
    v68 = (extension::SoundManager *)operator new(0x310ui64);
    extension::SoundManager::SoundManager(v68);
    extension::SoundManager::the_instance = v32;
  }
  v32->m_groupSEVolumeRefs[11] = &v31->modulationParam[2].fOutput;
  v33 = anonymous_namespace_::SoundVolumeModulation::GetInstance();
  v34 = extension::SoundManager::the_instance;
  if ( !extension::SoundManager::the_instance )
  {
    v69 = (extension::SoundManager *)operator new(0x310ui64);
    extension::SoundManager::SoundManager(v69);
    extension::SoundManager::the_instance = v34;
  }
  v34->m_groupSEVolumeRefs[12] = &v33->modulationParam[2].fOutput;
  v35 = anonymous_namespace_::SoundVolumeModulation::GetInstance();
  v36 = extension::SoundManager::the_instance;
  if ( !extension::SoundManager::the_instance )
  {
    v70 = (extension::SoundManager *)operator new(0x310ui64);
    extension::SoundManager::SoundManager(v70);
    extension::SoundManager::the_instance = v36;
  }
  v36->m_groupSEVolumeRefs[13] = &v35->modulationParam[2].fOutput;
  v37 = anonymous_namespace_::SoundVolumeModulation::GetInstance();
  v38 = extension::SoundManager::the_instance;
  if ( !extension::SoundManager::the_instance )
  {
    v71 = (extension::SoundManager *)operator new(0x310ui64);
    extension::SoundManager::SoundManager(v71);
    extension::SoundManager::the_instance = v38;
  }
  v38->m_groupSEVolumeRefs[14] = &v37->modulationParam[2].fOutput;
  v39 = anonymous_namespace_::SoundVolumeModulation::GetInstance();
  v40 = extension::SoundManager::the_instance;
  if ( !extension::SoundManager::the_instance )
  {
    v72 = (extension::SoundManager *)operator new(0x310ui64);
    extension::SoundManager::SoundManager(v72);
    extension::SoundManager::the_instance = v40;
  }
  v40->m_groupSEVolumeRefs[15] = &v39->modulationParam[2].fOutput;
  v41 = anonymous_namespace_::SoundVolumeModulation::GetInstance();
  v42 = extension::SoundManager::the_instance;
  if ( !extension::SoundManager::the_instance )
  {
    v73 = (extension::SoundManager *)operator new(0x310ui64);
    extension::SoundManager::SoundManager(v73);
    extension::SoundManager::the_instance = v42;
  }
  v42->m_groupSEVolumeRefs[16] = &v41->modulationParam[2].fOutput;
  v43 = anonymous_namespace_::SoundVolumeModulation::GetInstance();
  v44 = extension::SoundManager::the_instance;
  if ( !extension::SoundManager::the_instance )
  {
    v74 = (extension::SoundManager *)operator new(0x310ui64);
    extension::SoundManager::SoundManager(v74);
    extension::SoundManager::the_instance = v44;
  }
  v44->m_groupSEVolumeRefs[17] = &v43->modulationParam[6].fOutput;
  extension::SoundBank::load(&this->m_Snd_Bank_Common, "Chara/common.sbnk");
  extension::SoundBank::load(&this->m_Snd_Bank_Network, "Chara/network.sbnk");
  extension::SoundBank::load(&this->m_Snd_Bank_BGM, "Chara/bgm.sbnk");
  extension::SoundBank::load(&this->m_Snd_Bank_Menu, "Chara/menu.sbnk");
  this->m_Snd_Lists[0].m_playGroupMapping[1] = 8;
  this->m_Snd_Lists[0].m_playGroupMapping[3] = 4;
  this->m_Snd_Lists[0].m_playGroupMapping[4] = 12;
  this->m_Snd_Lists[0].m_playGroupMapping[0] = 17;
  this->m_Snd_Lists[6].m_playGroupMapping[1] = 9;
  this->m_Snd_Lists[6].m_playGroupMapping[3] = 4;
  this->m_Snd_Lists[6].m_playGroupMapping[4] = 12;
  this->m_Snd_Lists[6].m_playGroupMapping[0] = 17;
  this->m_Snd_Lists[7].m_playGroupMapping[1] = 10;
  this->m_Snd_Lists[7].m_playGroupMapping[3] = 5;
  this->m_Snd_Lists[7].m_playGroupMapping[4] = 12;
  this->m_Snd_Lists[7].m_playGroupMapping[0] = 17;
  this->m_Snd_Lists[8].m_playGroupMapping[3] = 11;
  this->m_Snd_Lists[8].m_playGroupMapping[0] = 11;
  this->m_Snd_Lists[5].m_playGroupMapping[0] = 1;
  *(_QWORD *)&this->m_Snd_Lists[5].m_playGroupMapping[1] = 8i64;
  this->m_Snd_Lists[5].m_playGroupMapping[3] = 1;
  this->m_Snd_Lists[5].m_playGroupMapping[5] = 2;
  this->m_Snd_Lists[1].m_playGroupMapping[1] = 9;
  this->m_Snd_Lists[1].m_playGroupMapping[3] = 4;
  this->m_Snd_Lists[1].m_playGroupMapping[5] = 3;
  this->m_Snd_Lists[1].m_playGroupMapping[4] = 12;
  this->m_Snd_Lists[1].m_playGroupMapping[2] = 13;
  this->m_Snd_Lists[2].m_playGroupMapping[1] = 10;
  this->m_Snd_Lists[2].m_playGroupMapping[3] = 5;
  this->m_Snd_Lists[2].m_playGroupMapping[5] = 3;
  this->m_Snd_Lists[2].m_playGroupMapping[4] = 12;
  this->m_Snd_Lists[2].m_playGroupMapping[2] = 14;
  this->m_Snd_Lists[3].m_playGroupMapping[1] = 9;
  this->m_Snd_Lists[3].m_playGroupMapping[3] = 6;
  this->m_Snd_Lists[3].m_playGroupMapping[5] = 3;
  this->m_Snd_Lists[3].m_playGroupMapping[4] = 12;
  this->m_Snd_Lists[3].m_playGroupMapping[2] = 15;
  this->m_Snd_Lists[4].m_playGroupMapping[1] = 10;
  this->m_Snd_Lists[4].m_playGroupMapping[3] = 7;
  this->m_Snd_Lists[4].m_playGroupMapping[5] = 3;
  this->m_Snd_Lists[4].m_playGroupMapping[4] = 12;
  this->m_Snd_Lists[4].m_playGroupMapping[2] = 16;
  v75 = (FighterOperation::FighterOperationAssignListener *)operator new(0x18ui64);
  v75->m_Prev = &v75->FighterOperation::ListenerNode;
  v75->m_Next = &v75->FighterOperation::ListenerNode;
  v75->__vftable = (FighterOperation::FighterOperationAssignListener_vtbl *)&`AppMain::Sound_Create'::`2'::PadOutputSelector::`vftable';
  Myval2 = s_PadSoundOutputSelector._Mypair._Myval2;
  s_PadSoundOutputSelector._Mypair._Myval2 = v75;
  if ( Myval2 )
    ((void (__fastcall *)(FighterOperation::FighterOperationAssignListener *, __int64))Myval2->~FighterOperationAssignListener)(
      Myval2,
      1i64);
  v46 = FighterOperation::Instance();
  v47 = v46;
  if ( v46 == (FighterOperation *)-8i64 )
    userIndex = 0i64;
  else
    userIndex = (unsigned int)v46->m_slots[0].userIndex;
  ((void (__fastcall *)(FighterOperation::FighterOperationAssignListener *, __int64, __int64))s_PadSoundOutputSelector._Mypair._Myval2->OnFighterOperationAssignChanged)(
    s_PadSoundOutputSelector._Mypair._Myval2,
    1i64,
    userIndex);
  if ( v47 == (FighterOperation *)-1488i64 )
    v49 = 0i64;
  else
    v49 = (unsigned int)v47->m_slots[1].userIndex;
  ((void (__fastcall *)(FighterOperation::FighterOperationAssignListener *, __int64, __int64))s_PadSoundOutputSelector._Mypair._Myval2->OnFighterOperationAssignChanged)(
    s_PadSoundOutputSelector._Mypair._Myval2,
    2i64,
    v49);
  v50 = &s_PadSoundOutputSelector._Mypair._Myval2->FighterOperation::ListenerNode;
  v51 = &s_PadSoundOutputSelector._Mypair._Myval2->FighterOperation::ListenerNode;
  v52 = s_PadSoundOutputSelector._Mypair._Myval2 == 0i64;
  if ( !s_PadSoundOutputSelector._Mypair._Myval2 )
    v51 = 0i64;
  v51->m_Next->extension::BiLinkable<FighterOperation::ListenerNode>::m_Prev = v51->m_Prev;
  v51->m_Prev->m_Next = v51->m_Next;
  v51->m_Next = v51;
  v51->m_Prev = v51;
  if ( v52 )
    v50 = 0i64;
  v50->m_Next->extension::BiLinkable<FighterOperation::ListenerNode>::m_Prev = v47->m_assignListenerListEnd.m_Prev;
  v47->m_assignListenerListEnd.m_Prev->m_Next = v50->m_Next;
  v50->m_Next = &v47->m_assignListenerListEnd;
  v47->m_assignListenerListEnd.m_Prev = v50;
}

extension::SoundHashKey *__fastcall AppMain::Sound_GetName(
        AppMain *this,
        extension::SoundHashKey *result,
        AppMain::SoundListIndex soundList,
        int soundIndex)
{
  extension::SoundHashKey *v4; // rax
  extension::SoundList *v6; // rcx
  extension::SoundHashKey *NameKey; // rcx
  char v8; // bl
  extension::exsound_detail::SoundNameRegistry::NameBuffer *m_ptr; // rcx
  char v10; // bl
  extension::exsound_detail::SoundNameRegistry::NameBuffer *v11; // rcx
  extension::SoundHashKey resulta; // [rsp+28h] [rbp-10h] BYREF
  extension::SoundHashKey *v14; // [rsp+48h] [rbp+10h] BYREF

  v14 = result;
  v4 = 0i64;
  if ( (unsigned int)soundList <= SoundList_Network_Gaya && (v6 = &this->m_Snd_Lists[soundList]) != 0i64 )
  {
    NameKey = extension::SoundList::getNameKey(v6, &resulta, soundIndex);
    v8 = 1;
    v4 = v14;
  }
  else
  {
    v14 = 0i64;
    NameKey = (extension::SoundHashKey *)&v14;
    v8 = 2;
  }
  m_ptr = NameKey->m_sharedBuffer.m_ptr;
  result->m_sharedBuffer.m_ptr = m_ptr;
  if ( m_ptr )
  {
    _InterlockedExchangeAdd64((volatile signed __int64 *)&m_ptr->m_refCount.m_ptr->m_sharedCount, 1ui64);
    v4 = v14;
  }
  v10 = v8 | 4;
  if ( (v10 & 2) != 0 )
  {
    v10 &= ~2u;
    if ( v4 )
    {
      if ( _InterlockedExchangeAdd64(
             (volatile signed __int64 *)&v4[1].m_sharedBuffer.m_ptr->m_hash,
             0xFFFFFFFFFFFFFFFFui64) == 1 )
        ((void (__fastcall *)(extension::SoundHashKey *, __int64))v14->m_sharedBuffer.m_ptr->__vftable)(v14, 1i64);
    }
  }
  if ( (v10 & 1) != 0 )
  {
    v11 = resulta.m_sharedBuffer.m_ptr;
    if ( resulta.m_sharedBuffer.m_ptr )
    {
      if ( _InterlockedExchangeAdd64(
             (volatile signed __int64 *)&resulta.m_sharedBuffer.m_ptr->m_refCount.m_ptr->m_sharedCount,
             0xFFFFFFFFFFFFFFFFui64) == 1 )
        ((void (__fastcall *)(extension::exsound_detail::SoundNameRegistry::NameBuffer *, __int64))v11->~RefCountableWeakSupportBase)(
          v11,
          1i64);
    }
  }
  return result;
}

char __fastcall AppMain::Sound_IsLoadComplete(AppMain *this)
{
  extension::SoundList *m_Snd_Lists; // rsi
  extension::SoundHashKey *p_m_nowPlayBGM; // rbp
  extension::SoundList::BankContent *Myfirst; // rbx
  extension::SoundList::PreloadedSound *m_ptr; // rdi
  extension::exsound_detail::PreloadedAudioSet **p_m_ptr; // rax

  m_Snd_Lists = this->m_Snd_Lists;
  p_m_nowPlayBGM = &this->m_nowPlayBGM;
  if ( this->m_Snd_Lists == (extension::SoundList *)&this->m_nowPlayBGM )
    return 1;
  while ( 1 )
  {
    Myfirst = m_Snd_Lists->m_bankContents._Mypair._Myval2._Myfirst;
    if ( m_Snd_Lists->m_bankContents._Mypair._Myval2._Myfirst != m_Snd_Lists->m_bankContents._Mypair._Myval2._Mylast )
      break;
LABEL_10:
    if ( ++m_Snd_Lists == (extension::SoundList *)p_m_nowPlayBGM )
      return 1;
  }
  while ( 1 )
  {
    m_ptr = Myfirst->m_preloadSounds.m_ptr;
    if ( m_ptr )
    {
      if ( m_ptr->m_flgNil.m_value._My_val )
        return 0;
      p_m_ptr = &m_ptr->m_loadedPoint._Ptr->m_ptr;
      if ( p_m_ptr != (extension::exsound_detail::PreloadedAudioSet **)m_ptr->m_mediaSets._Mypair._Myval2._Mylast )
        break;
    }
LABEL_9:
    if ( ++Myfirst == m_Snd_Lists->m_bankContents._Mypair._Myval2._Mylast )
      goto LABEL_10;
  }
  while ( !*p_m_ptr || extension::exsound_detail::PreloadedAudioSet::isLoadComplete(*p_m_ptr) )
  {
    ++m_ptr->m_loadedPoint._Ptr;
    p_m_ptr = &m_ptr->m_loadedPoint._Ptr->m_ptr;
    if ( p_m_ptr == (extension::exsound_detail::PreloadedAudioSet **)m_ptr->m_mediaSets._Mypair._Myval2._Mylast )
      goto LABEL_9;
  }
  return 0;
}

__int64 __fastcall AppMain::Sound_IsPlaying(AppMain *this)
{
  extension::SoundManager *v1; // rax
  extension::exsound_detail::SoundNameRegistry::NameBuffer *Myfirst; // rcx
  extension::SoundManager::PlayInfo *v3; // rax
  extension::SoundManager::PlayInfo *Mylast; // rdx
  unsigned __int8 v5; // di
  extension::SoundHashKey *p_SoundKey; // rbx
  extension::exsound_detail::SoundNameRegistry::NameBuffer *m_ptr; // rcx
  unsigned __int64 v8; // rax
  extension::exsound_detail::SoundNameRegistry::NameBuffer *v9; // rax
  unsigned __int64 v10; // rcx
  std::vector<extension::SoundManager::PlayInfo> result; // [rsp+28h] [rbp-20h] BYREF
  extension::SoundManager *v13; // [rsp+50h] [rbp+8h]

  memset(&result, 0, sizeof(result));
  v1 = extension::SoundManager::the_instance;
  if ( !extension::SoundManager::the_instance )
  {
    v13 = (extension::SoundManager *)operator new(0x310ui64);
    extension::SoundManager::SoundManager(v13);
    extension::SoundManager::the_instance = v1;
  }
  extension::SoundManager::Debug_dumpPlayInfo(v1, &result);
  Myfirst = (extension::exsound_detail::SoundNameRegistry::NameBuffer *)result._Mypair._Myval2._Myfirst;
  v3 = result._Mypair._Myval2._Myfirst;
  Mylast = result._Mypair._Myval2._Mylast;
  if ( result._Mypair._Myval2._Myfirst == result._Mypair._Myval2._Mylast )
  {
LABEL_8:
    v5 = 0;
  }
  else
  {
    while ( !v3->IsPlaying )
    {
      if ( ++v3 == result._Mypair._Myval2._Mylast )
        goto LABEL_8;
    }
    v5 = 1;
  }
  if ( result._Mypair._Myval2._Myfirst )
  {
    if ( result._Mypair._Myval2._Myfirst != result._Mypair._Myval2._Mylast )
    {
      p_SoundKey = &result._Mypair._Myval2._Myfirst->SoundKey;
      do
      {
        m_ptr = p_SoundKey->m_sharedBuffer.m_ptr;
        if ( p_SoundKey->m_sharedBuffer.m_ptr )
        {
          if ( _InterlockedExchangeAdd64(
                 (volatile signed __int64 *)&m_ptr->m_refCount.m_ptr->m_sharedCount,
                 0xFFFFFFFFFFFFFFFFui64) == 1 )
            ((void (__fastcall *)(extension::exsound_detail::SoundNameRegistry::NameBuffer *, __int64))m_ptr->~RefCountableWeakSupportBase)(
              m_ptr,
              1i64);
          Mylast = result._Mypair._Myval2._Mylast;
        }
        p_SoundKey += 4;
      }
      while ( &p_SoundKey[-3] != (extension::SoundHashKey *)Mylast );
      Myfirst = (extension::exsound_detail::SoundNameRegistry::NameBuffer *)result._Mypair._Myval2._Myfirst;
    }
    v8 = ((char *)result._Mypair._Myval2._Myend - (char *)Myfirst) >> 5;
    if ( v8 > 0x7FFFFFFFFFFFFFFi64 )
      invalid_parameter_noinfo_noreturn();
    if ( 32 * v8 >= 0x1000 )
    {
      if ( ((unsigned __int8)Myfirst & 0x1F) != 0 )
        invalid_parameter_noinfo_noreturn();
      v9 = *(extension::exsound_detail::SoundNameRegistry::NameBuffer **)Myfirst[-1].m_str;
      if ( v9 >= Myfirst )
        invalid_parameter_noinfo_noreturn();
      v10 = (char *)Myfirst - (char *)v9;
      if ( v10 < 8 )
        invalid_parameter_noinfo_noreturn();
      if ( v10 > 0x27 )
        invalid_parameter_noinfo_noreturn();
      Myfirst = v9;
    }
    operator delete(Myfirst);
  }
  return v5;
}

bool __fastcall AppMain::Sound_IsPlayingSEByName(AppMain *this, AppMain::SoundListIndex soundList, const char *name)
{
  extension::SoundList *v3; // rbx
  const extension::SoundHashKey *IfExist; // rax
  bool isPlayingSEByName; // bl
  extension::exsound_detail::SoundNameRegistry::NameBuffer *m_ptr; // rcx
  extension::SoundHashKey result; // [rsp+58h] [rbp+20h] BYREF

  v3 = &this->m_Snd_Lists[5];
  if ( this == (AppMain *)-2197144i64 )
    return 0;
  IfExist = extension::SoundHashKey::MakeIfExist(&result, name);
  isPlayingSEByName = extension::SoundList::isPlayingSEByName(v3, IfExist);
  m_ptr = result.m_sharedBuffer.m_ptr;
  if ( result.m_sharedBuffer.m_ptr )
  {
    if ( _InterlockedExchangeAdd64(
           (volatile signed __int64 *)&result.m_sharedBuffer.m_ptr->m_refCount.m_ptr->m_sharedCount,
           0xFFFFFFFFFFFFFFFFui64) == 1 )
      m_ptr->~RefCountableWeakSupportBase(m_ptr);
  }
  return isPlayingSEByName;
}

char __fastcall AppMain::Sound_IsPlayingSEByName(
        AppMain *this,
        AppMain::SoundListIndex soundList,
        const char *soundName,
        const extension::SoundObject *obj)
{
  extension::SoundList *v6; // rbx
  const extension::SoundHashKey *IfExist; // rax
  bool isPlayingSEByName; // di
  char v9; // bl
  extension::exsound_detail::SoundNameRegistry::NameBuffer *m_ptr; // rcx
  extension::SoundHashKey result; // [rsp+58h] [rbp+20h] BYREF

  if ( !obj )
    return 0;
  v6 = &this->m_Snd_Lists[5];
  if ( this == (AppMain *)-2197144i64 )
    return 0;
  IfExist = extension::SoundHashKey::MakeIfExist(&result, soundName);
  isPlayingSEByName = extension::SoundList::isPlayingSEByName(v6, obj, IfExist);
  v9 = 1;
  m_ptr = result.m_sharedBuffer.m_ptr;
  if ( result.m_sharedBuffer.m_ptr )
  {
    if ( !_InterlockedDecrement64((volatile signed __int64 *)&result.m_sharedBuffer.m_ptr->m_refCount.m_ptr->m_sharedCount) )
      ((void (__fastcall *)(extension::exsound_detail::SoundNameRegistry::NameBuffer *, __int64))m_ptr->~RefCountableWeakSupportBase)(
        m_ptr,
        1i64);
  }
  if ( !isPlayingSEByName )
    return 0;
  return v9;
}

void __fastcall AppMain::Sound_LoadAppendPCharacter(AppMain *this, int playerIndex, const char *bank_file_path)
{
  __int64 v4; // rdi
  extension::SoundList::MediaSetLoadOption v6; // er8
  extension::SoundBank bank; // [rsp+28h] [rbp-20h] BYREF

  v4 = playerIndex;
  bank.m_bankImpl.m_isNoCache = 0;
  extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body::GetSharedEmpty(&bank.m_bankImpl.m_body);
  extension::SoundBank::load(&bank, bank_file_path);
  if ( (unsigned int)(v4 - 1) <= 3 )
    extension::SoundList::appendBankToListImpl(&this->m_Snd_Lists[v4], &bank, v6);
  if ( bank.m_bankImpl.m_body.m_ptr )
  {
    if ( _InterlockedExchangeAdd64(
           (volatile signed __int64 *)&bank.m_bankImpl.m_body.m_ptr->m_refCount.m_ptr->m_sharedCount,
           0xFFFFFFFFFFFFFFFFui64) == 1 )
      ((void (__fastcall *)(extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body *, __int64))bank.m_bankImpl.m_body.m_ptr->~RefCountableWeakSupportBase)(
        bank.m_bankImpl.m_body.m_ptr,
        1i64);
  }
}

void __fastcall AppMain::Sound_LoadCommon(AppMain *this)
{
  extension::AsyncContent<extension::exsound_detail::SoundBankImpl> *m_ptr; // rcx
  extension::AsyncContent<extension::exsound_detail::SoundBankImpl> *v3; // rcx
  extension::AsyncContent<extension::exsound_detail::SoundBankImpl> *v4; // rcx
  extension::AsyncContent<extension::exsound_detail::SoundBankImpl> *v5; // rcx
  extension::SoundList::MediaSetLoadOption v6; // er8
  extension::SoundList::MediaSetLoadOption v7; // er8
  extension::SoundList::MediaSetLoadOption v8; // er8
  extension::SoundList::MediaSetLoadOption v9; // er8

  m_ptr = this->m_Snd_Bank_Common.m_bankImpl.m_body.m_ptr->m_content.m_ptr;
  if ( !m_ptr || m_ptr->m_isDataReleased )
    extension::SoundBank::load(&this->m_Snd_Bank_Common, "Chara/common.sbnk");
  v3 = this->m_Snd_Bank_Network.m_bankImpl.m_body.m_ptr->m_content.m_ptr;
  if ( !v3 || v3->m_isDataReleased )
    extension::SoundBank::load(&this->m_Snd_Bank_Network, "Chara/network.sbnk");
  v4 = this->m_Snd_Bank_BGM.m_bankImpl.m_body.m_ptr->m_content.m_ptr;
  if ( !v4 || v4->m_isDataReleased )
    extension::SoundBank::load(&this->m_Snd_Bank_BGM, "Chara/bgm.sbnk");
  v5 = this->m_Snd_Bank_Menu.m_bankImpl.m_body.m_ptr->m_content.m_ptr;
  if ( !v5 || v5->m_isDataReleased )
    extension::SoundBank::load(&this->m_Snd_Bank_Menu, "Chara/menu.sbnk");
  extension::SoundList::dispose(this->m_Snd_Lists);
  extension::SoundList::appendBankToListImpl(this->m_Snd_Lists, &this->m_Snd_Bank_Common, v6);
  extension::SoundList::appendBankToListImpl(this->m_Snd_Lists, &this->m_Snd_Bank_BGM, v7);
  extension::SoundList::appendBankToListImpl(this->m_Snd_Lists, &this->m_Snd_Bank_Menu, v8);
  std::vector<extension::SoundList::BankContent>::operator=(
    &this->m_Snd_Lists[6].m_bankContents,
    &this->m_Snd_Lists[0].m_bankContents);
  std::vector<extension::SoundList::BankContent>::operator=(
    &this->m_Snd_Lists[7].m_bankContents,
    &this->m_Snd_Lists[0].m_bankContents);
  extension::SoundList::dispose(&this->m_Snd_Lists[8]);
  extension::SoundList::appendBankToListImpl(&this->m_Snd_Lists[8], &this->m_Snd_Bank_Network, v9);
}

void __fastcall AppMain::Sound_LoadPCharacter(AppMain *this, int playerIndex, const char *bank_file_path)
{
  __int64 v4; // rdi
  extension::SoundList::MediaSetLoadOption v6; // er8
  extension::SoundBank bank; // [rsp+28h] [rbp-20h] BYREF

  v4 = playerIndex;
  bank.m_bankImpl.m_isNoCache = 0;
  extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body::GetSharedEmpty(&bank.m_bankImpl.m_body);
  extension::SoundBank::load(&bank, bank_file_path);
  if ( (unsigned int)(v4 - 1) <= 3 )
  {
    extension::SoundList::dispose(&this->m_Snd_Lists[v4]);
    extension::SoundList::appendBankToListImpl(&this->m_Snd_Lists[v4], &bank, v6);
  }
  if ( bank.m_bankImpl.m_body.m_ptr )
  {
    if ( _InterlockedExchangeAdd64(
           (volatile signed __int64 *)&bank.m_bankImpl.m_body.m_ptr->m_refCount.m_ptr->m_sharedCount,
           0xFFFFFFFFFFFFFFFFui64) == 1 )
      ((void (__fastcall *)(extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body *, __int64))bank.m_bankImpl.m_body.m_ptr->~RefCountableWeakSupportBase)(
        bank.m_bankImpl.m_body.m_ptr,
        1i64);
  }
}

void __fastcall AppMain::Sound_LoadStage(AppMain *this, const char *bank_file_path)
{
  extension::SoundList::MediaSetLoadOption v4; // er8
  extension::SoundBank bank; // [rsp+28h] [rbp-20h] BYREF

  bank.m_bankImpl.m_isNoCache = 0;
  extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body::GetSharedEmpty(&bank.m_bankImpl.m_body);
  extension::SoundBank::load(&bank, bank_file_path);
  extension::SoundList::dispose(&this->m_Snd_Lists[5]);
  extension::SoundList::appendBankToListImpl(&this->m_Snd_Lists[5], &bank, v4);
  if ( bank.m_bankImpl.m_body.m_ptr )
  {
    if ( _InterlockedExchangeAdd64(
           (volatile signed __int64 *)&bank.m_bankImpl.m_body.m_ptr->m_refCount.m_ptr->m_sharedCount,
           0xFFFFFFFFFFFFFFFFui64) == 1 )
      ((void (__fastcall *)(extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body *, __int64))bank.m_bankImpl.m_body.m_ptr->~RefCountableWeakSupportBase)(
        bank.m_bankImpl.m_body.m_ptr,
        1i64);
  }
}

void __fastcall AppMain::Sound_PauseBattleSE(AppMain *this, bool pause)
{
  unsigned int i; // ebx
  extension::SoundManager *v4; // rax
  extension::SoundManager *v5; // [rsp+40h] [rbp+8h]

  for ( i = 0; i < 0x11; ++i )
  {
    v4 = extension::SoundManager::the_instance;
    if ( !extension::SoundManager::the_instance )
    {
      v5 = (extension::SoundManager *)operator new(0x310ui64);
      extension::SoundManager::SoundManager(v5);
      extension::SoundManager::the_instance = v4;
    }
    extension::SoundManager::pauseGroupSE(v4, i, pause);
  }
}

void __fastcall AppMain::Sound_PlayBGMByName(
        AppMain *this,
        const extension::SoundHashKey *soundName,
        float fadeSeconds,
        float pos,
        bool bNonStop)
{
  if ( soundName->m_sharedBuffer.m_ptr )
  {
    if ( !extension::SoundList::playBGMByName(&this->m_Snd_Lists[5], soundName, fadeSeconds, pos, bNonStop) )
      extension::SoundList::playBGMByName(this->m_Snd_Lists, soundName, fadeSeconds, pos, bNonStop);
  }
}

void __fastcall AppMain::Sound_PlaySEByName(
        AppMain *this,
        const extension::SoundHashKey *soundName,
        const extension::SoundObject *obj,
        const extension::SoundOneshotParameters *optionParams)
{
  if ( obj )
  {
    if ( soundName->m_sharedBuffer.m_ptr
      && !extension::SoundList::playSEByName(&this->m_Snd_Lists[5], obj, soundName, 0i64) )
    {
      extension::SoundList::playSEByName(this->m_Snd_Lists, obj, soundName, 0i64);
    }
  }
  else if ( soundName->m_sharedBuffer.m_ptr )
  {
    if ( !extension::SoundList::playSEByName(&this->m_Snd_Lists[5], soundName, 0i64) )
      extension::SoundList::playSEByName(this->m_Snd_Lists, soundName, 0i64);
  }
}

void __fastcall AppMain::Sound_PlaySEByName(
        AppMain *this,
        const char *soundName,
        const extension::SoundOneshotParameters *optionParams)
{
  extension::SoundHashKey *IfExist; // rax
  const extension::SoundHashKey *v5; // rbx
  extension::exsound_detail::SoundNameRegistry::NameBuffer *m_ptr; // rcx
  extension::SoundHashKey result; // [rsp+50h] [rbp+18h] BYREF

  result.m_sharedBuffer.m_ptr = (extension::exsound_detail::SoundNameRegistry::NameBuffer *)optionParams;
  IfExist = extension::SoundHashKey::MakeIfExist(&result, soundName);
  v5 = IfExist;
  if ( IfExist->m_sharedBuffer.m_ptr && !extension::SoundList::playSEByName(&this->m_Snd_Lists[5], IfExist, 0i64) )
    extension::SoundList::playSEByName(this->m_Snd_Lists, v5, 0i64);
  m_ptr = result.m_sharedBuffer.m_ptr;
  if ( result.m_sharedBuffer.m_ptr )
  {
    if ( _InterlockedExchangeAdd64(
           (volatile signed __int64 *)&result.m_sharedBuffer.m_ptr->m_refCount.m_ptr->m_sharedCount,
           0xFFFFFFFFFFFFFFFFui64) == 1 )
      ((void (__fastcall *)(extension::exsound_detail::SoundNameRegistry::NameBuffer *, __int64))m_ptr->~RefCountableWeakSupportBase)(
        m_ptr,
        1i64);
  }
}

void __fastcall AppMain::Sound_PlaySEByName(
        AppMain *this,
        AppMain::SoundListIndex soundList,
        const char *soundName,
        const extension::SoundOneshotParameters *optionParams)
{
  __int64 v5; // rbx
  const extension::SoundHashKey *IfExist; // rax
  extension::SoundList *v8; // rcx
  extension::exsound_detail::SoundNameRegistry::NameBuffer *m_ptr; // rcx
  extension::SoundHashKey result; // [rsp+20h] [rbp-18h] BYREF
  __int64 v11; // [rsp+28h] [rbp-10h]

  v11 = -2i64;
  v5 = soundList;
  IfExist = extension::SoundHashKey::MakeIfExist(&result, soundName);
  if ( (unsigned int)v5 <= 8 )
  {
    v8 = &this->m_Snd_Lists[v5];
    if ( v8 )
      extension::SoundList::playSEByName(v8, IfExist, optionParams);
  }
  m_ptr = result.m_sharedBuffer.m_ptr;
  if ( result.m_sharedBuffer.m_ptr )
  {
    if ( _InterlockedExchangeAdd64(
           (volatile signed __int64 *)&result.m_sharedBuffer.m_ptr->m_refCount.m_ptr->m_sharedCount,
           0xFFFFFFFFFFFFFFFFui64) == 1 )
      ((void (__fastcall *)(extension::exsound_detail::SoundNameRegistry::NameBuffer *, __int64))m_ptr->~RefCountableWeakSupportBase)(
        m_ptr,
        1i64);
  }
}

void __fastcall AppMain::Sound_PlaySEByName(
        AppMain *this,
        AppMain::SoundListIndex soundList,
        const char *soundName,
        const extension::SoundObject *obj,
        const extension::SoundOneshotParameters *optionParams)
{
  __int64 v6; // rbx
  const extension::SoundHashKey *IfExist; // rax
  extension::SoundList *v9; // rcx
  extension::SoundList *v10; // rcx
  extension::exsound_detail::SoundNameRegistry::NameBuffer *m_ptr; // rcx
  extension::SoundHashKey result; // [rsp+58h] [rbp+20h] BYREF

  v6 = soundList;
  IfExist = extension::SoundHashKey::MakeIfExist(&result, soundName);
  if ( obj )
  {
    if ( (unsigned int)v6 <= 8 )
    {
      v10 = &this->m_Snd_Lists[v6];
      if ( v10 )
        extension::SoundList::playSEByName(v10, obj, IfExist, optionParams);
    }
  }
  else if ( (unsigned int)v6 <= 8 )
  {
    v9 = &this->m_Snd_Lists[v6];
    if ( v9 )
      extension::SoundList::playSEByName(v9, IfExist, optionParams);
  }
  m_ptr = result.m_sharedBuffer.m_ptr;
  if ( result.m_sharedBuffer.m_ptr )
  {
    if ( _InterlockedExchangeAdd64(
           (volatile signed __int64 *)&result.m_sharedBuffer.m_ptr->m_refCount.m_ptr->m_sharedCount,
           0xFFFFFFFFFFFFFFFFui64) == 1 )
      ((void (__fastcall *)(extension::exsound_detail::SoundNameRegistry::NameBuffer *, __int64))m_ptr->~RefCountableWeakSupportBase)(
        m_ptr,
        1i64);
  }
}

void __fastcall AppMain::StopBGMUtil(AppMain *this, float fadeSeconds)
{
  extension::SoundManager *v2; // rax
  extension::SoundManager *v3; // [rsp+50h] [rbp+8h]

  v2 = extension::SoundManager::the_instance;
  if ( !extension::SoundManager::the_instance )
  {
    v3 = (extension::SoundManager *)operator new(0x310ui64);
    extension::SoundManager::SoundManager(v3);
    extension::SoundManager::the_instance = v2;
  }
  extension::SoundManager::stopBGM(v2, fadeSeconds);
}

void __fastcall AppMain::Sound_StopBattleSE(AppMain *this, float fadeSeconds)
{
  unsigned int i; // ebx
  extension::SoundManager *v3; // rax
  extension::SoundManager *v4; // [rsp+40h] [rbp+8h]

  for ( i = 0; i < 0x11; ++i )
  {
    v3 = extension::SoundManager::the_instance;
    if ( !extension::SoundManager::the_instance )
    {
      v4 = (extension::SoundManager *)operator new(0x310ui64);
      extension::SoundManager::SoundManager(v4);
      extension::SoundManager::the_instance = v3;
    }
    extension::SoundManager::stopGroupSE(v3, i);
  }
}

void __fastcall AppMain::Sound_UnloadAll(AppMain *this, bool keep_resident)
{
  extension::ExThread::Runnable *v2; // rax
  std::unique_ptr<extension::ExThread::Runnable> obj; // [rsp+68h] [rbp+20h] BYREF

  v2 = (extension::ExThread::Runnable *)operator new(0x20ui64);
  v2->__vftable = (extension::ExThread::Runnable_vtbl *)&AgSimpleThreadHost::`vftable';
  v2->m_abort = 0;
  v2->m_running = 1;
  v2->__vftable = (extension::ExThread::Runnable_vtbl *)&UnloadSoundJob::`vftable';
  obj._Mypair._Myval2 = v2;
  extension::SynchronizedQueue<extension::ExThread::Runnable>::enqueue(
    &extension::AsyncWorker::s_instance.m_loadJobConsumer.m_jobQueue,
    (std::unique_ptr<extension::ExThread::Runnable>)&obj);
}

void __fastcall AppMain::Sound_UnloadPCharacter(
        AppMain *this,
        __int64 a2,
        std::_Wrap_alloc<std::allocator<extension::SoundList::BankContent> > *a3,
        std::integral_constant<bool,0> a4)
{
  __m128i *v4; // rdi
  extension::SoundList *v6; // rax
  extension::SoundList::BankContent *Myfirst; // rbx
  extension::SoundList::BankContent *Mylast; // rdx
  extension::SoundList::BankContent *Myend; // rsi
  unsigned __int64 v10; // rdx
  extension::SoundList::PreloadedSound *m_ptr; // rax
  unsigned __int64 v12; // rbx
  char v13; // [rsp+20h] [rbp-58h] BYREF
  __m128i si128; // [rsp+38h] [rbp-40h] BYREF
  __int64 v15; // [rsp+48h] [rbp-30h] BYREF

  v4 = &si128;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  do
  {
    v6 = &this->m_Snd_Lists[v4->m128i_i32[0]];
    if ( &v13 != (char *)v6 )
    {
      Myfirst = v6->m_bankContents._Mypair._Myval2._Myfirst;
      v6->m_bankContents._Mypair._Myval2._Myfirst = 0i64;
      Mylast = v6->m_bankContents._Mypair._Myval2._Mylast;
      v6->m_bankContents._Mypair._Myval2._Mylast = 0i64;
      Myend = v6->m_bankContents._Mypair._Myval2._Myend;
      v6->m_bankContents._Mypair._Myval2._Myend = 0i64;
      if ( Myfirst )
      {
        std::_Destroy_range1<std::allocator<extension::SoundList::BankContent>,extension::SoundList::BankContent *>(
          Myfirst,
          Mylast,
          a3,
          a4);
        v10 = Myend - Myfirst;
        if ( v10 > 0xAAAAAAAAAAAAAAAi64 )
          invalid_parameter_noinfo_noreturn();
        if ( 24 * v10 >= 0x1000 )
        {
          if ( ((unsigned __int8)Myfirst & 0x1F) != 0 )
            invalid_parameter_noinfo_noreturn();
          m_ptr = Myfirst[-1].m_preloadSounds.m_ptr;
          if ( m_ptr >= (extension::SoundList::PreloadedSound *)Myfirst )
            invalid_parameter_noinfo_noreturn();
          v12 = (char *)Myfirst - (char *)m_ptr;
          if ( v12 < 8 )
            invalid_parameter_noinfo_noreturn();
          if ( v12 > 0x27 )
            invalid_parameter_noinfo_noreturn();
          Myfirst = (extension::SoundList::BankContent *)m_ptr;
        }
        operator delete(Myfirst);
      }
    }
    v4 = (__m128i *)((char *)v4 + 4);
  }
  while ( v4 != (__m128i *)&v15 );
}

void __fastcall AppMain::Sound_Volume_Commit(AppMain *this)
{
  SaveRecord_SoundOption *p_SoundOptionData; // rbx

  p_SoundOptionData = &this->SaveDataMain.SoundOptionData;
  extension::SoundManager::SetMasterVolumeBGM(
    (float)((float)this->SaveDataMain.SoundOptionData.iSoundVolumeBGM / 100.0)
  * (float)((float)this->SaveDataMain.SoundOptionData.iSoundVolumeMaster / 100.0));
  extension::SoundManager::SetMasterVolumeSE((float)p_SoundOptionData->iSoundVolumeMaster / 100.0);
  extension::SoundManager::SetMasterVolumePad((float)p_SoundOptionData->iSoundVolumeMaster / 100.0);
  anonymous_namespace_::SoundVolumeModulation::CommitGroupSEVolumeFromSaveData_SaveRecord_SoundOption_(p_SoundOptionData);
}

void __fastcall AppMain::Sound_Volume_SE_Modulation(AppMain *this, float modulation, float time)
{
  __int64 v3; // rbx
  SoundVolumeModulation *v6; // rax
  __int64 v7; // rdx
  float *p_fCurrent; // rcx
  float v9; // xmm2_4
  float v10; // xmm1_4

  v3 = 2i64;
  v6 = `anonymous namespace'::SoundVolumeModulation::instance;
  do
  {
    if ( !v6 )
    {
      v6 = (SoundVolumeModulation *)operator new(0xB8ui64);
      v7 = 7i64;
      p_fCurrent = &v6->modulationParam[0].fCurrent;
      do
      {
        *(p_fCurrent - 2) = 1.0;
        *(p_fCurrent - 1) = 1.0;
        *p_fCurrent = 1.0;
        *(_QWORD *)(p_fCurrent + 1) = 1065353216i64;
        *((_BYTE *)p_fCurrent + 12) = 0;
        p_fCurrent += 6;
        --v7;
      }
      while ( v7 );
      v6->lastFrameTimePoint = 0i64;
      v6->lastFrameTimePointIsValid = 0;
      `anonymous namespace'::SoundVolumeModulation::instance = v6;
    }
    v6->modulationParam[v3].fTo = modulation;
    v9 = 0.0;
    if ( time > 0.00000011920929 )
    {
      v9 = (float)(modulation - v6->modulationParam[v3].fCurrent) * (float)(1.0 / time);
      v10 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v9) & _xmm);
      if ( v10 <= 0.00000011920929 )
        v9 = 0.0;
    }
    v6->modulationParam[v3].fStep = v9;
    if ( v9 == 0.0 )
      v6->modulationParam[v3].fCurrent = modulation;
    ++v3;
  }
  while ( v3 < 6 );
}

void __fastcall std::vector<extension::SoundManager::PlayInfo>::_Tidy(
        std::vector<extension::SoundManager::PlayInfo> *this)
{
  extension::SoundManager::PlayInfo *Myfirst; // rbx
  std::vector<extension::SoundManager::PlayInfo> *v2; // rdi
  extension::SoundManager::PlayInfo *i; // rsi

  Myfirst = this->_Mypair._Myval2._Myfirst;
  v2 = this;
  if ( this->_Mypair._Myval2._Myfirst )
  {
    for ( i = this->_Mypair._Myval2._Mylast; Myfirst != i; ++Myfirst )
    {
      this = (std::vector<extension::SoundManager::PlayInfo> *)Myfirst->SoundKey.m_sharedBuffer.m_ptr;
      if ( this )
      {
        if ( _InterlockedExchangeAdd64(
               (volatile signed __int64 *)&this->_Mypair._Myval2._Mylast->Group,
               0xFFFFFFFFFFFFFFFFui64) == 1 )
          (*(void (__fastcall **)(std::vector<extension::SoundManager::PlayInfo> *, __int64))this->_Mypair._Myval2._Myfirst)(
            this,
            1i64);
      }
    }
    std::_Wrap_alloc<std::allocator<AgDirectory::DirectoryEntry>>::deallocate(
      (std::_Wrap_alloc<std::allocator<AgDirectory::DirectoryEntry> > *)this,
      (AgDirectory::DirectoryEntry *)v2->_Mypair._Myval2._Myfirst,
      v2->_Mypair._Myval2._Myend - v2->_Mypair._Myval2._Myfirst);
    v2->_Mypair._Myval2._Myfirst = 0i64;
    v2->_Mypair._Myval2._Mylast = 0i64;
    v2->_Mypair._Myval2._Myend = 0i64;
  }
}

void __fastcall std::_Wrap_alloc<std::allocator<AgDirectory::DirectoryEntry>>::deallocate(
        std::_Wrap_alloc<std::allocator<AgDirectory::DirectoryEntry> > *this,
        AgDirectory::DirectoryEntry *_Ptr,
        unsigned __int64 _Count)
{
  AgDirectory::DirectoryEntry *m_internalData; // rax
  char *v4; // rdx

  if ( _Count > 0x7FFFFFFFFFFFFFFi64 )
    invalid_parameter_noinfo_noreturn();
  if ( 32 * _Count >= 0x1000 )
  {
    if ( ((unsigned __int8)_Ptr & 0x1F) != 0 )
      invalid_parameter_noinfo_noreturn();
    m_internalData = (AgDirectory::DirectoryEntry *)_Ptr[-1].m_internalData;
    if ( m_internalData >= _Ptr )
      invalid_parameter_noinfo_noreturn();
    v4 = (char *)((char *)_Ptr - (char *)m_internalData);
    if ( (unsigned __int64)v4 < 8 )
      invalid_parameter_noinfo_noreturn();
    if ( (unsigned __int64)v4 > 0x27 )
      invalid_parameter_noinfo_noreturn();
    _Ptr = m_internalData;
  }
  operator delete(_Ptr);
}

__int64 __fastcall UnloadSoundJob::run(
        UnloadSoundJob *this,
        __int64 a2,
        std::_Wrap_alloc<std::allocator<extension::SoundList::BankContent> > *a3,
        std::integral_constant<bool,0> a4)
{
  AppMain::Sound_UnloadPCharacter(*(AppMain **)&AppMain::pApp, a2, a3, a4);
  extension::SoundList::dispose((extension::SoundList *)(*(_QWORD *)&AppMain::pApp + 2197144i64));
  return 0i64;
}

