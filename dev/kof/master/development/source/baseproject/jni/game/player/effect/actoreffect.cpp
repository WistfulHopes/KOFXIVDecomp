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
#include "dev/kof/master/development/source/baseproject/jni/game/player/actionblackout.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglvec3.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmatrix.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmodel.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/effect.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglquat.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/math.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actionsystem.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actor.cpp"

std::piecewise_construct_t std::piecewise_construct; // 0x1408A05BE
ActorEffect::~ActorEffect(); // 0x140199100
void ActorEffect::CreateInit(); // 0x140199150
void ActorEffect::Dispose(); // 0x140199250
void ActorEffect::ParamInit(const CharaDataUnify * pCharaData, const CharaActionData::Effect::Type::Set & setData, Actor * pParent, ActorCharaBase * pFounder, ActorCharaBase * pOwner, long iCAngle); // 0x140199290
void ActorEffect::_addOffset(OGLVec3 & off, const Actor * pActor); // 0x140199580
OGLVec3 ActorEffect::GetEffectSetPos(bool bDirectPos); // 0x140199640
OGLMatrix ActorEffect::GetEffectBindMatrix(); // 0x1401997E0
void ActorEffect::PrevDataSet(); // 0x140199940
void ActorEffect::PreUpdate(); // 0x1401999A0
void ActorEffect::BecomUpdate(); // 0x140199A10
void ActorEffect::ActionChanged(); // 0x140199ED0
void ActorEffect::CancelBlackout(); // 0x14002E7C0
void ActorEffect::ActionParamInit(); // 0x140199F10
void ActorEffect::ActionFlagCheck(); // 0x140199F30
void ActorEffect::MainUpdate(); // 0x14019A0F0
void ActorEffect::LateUpdate(); // 0x14019A440
void ActorEffect::Draw(); // 0x14019A5B0
void OGLMatrixRotateOnlyCalc(OGLMatrix & In1, const OGLMatrix & In2); // 0x14019A740
void ActorEffect::UpdatePosture(); // 0x14019A930
bool ActorEffect::IsBlackStop(); // 0x14019B580
OGLVec3 ActorEffect::GetCenterPosition(); // 0x14019B640
OGLVec3 ActorEffect::GetBindCenterPosition(); // 0x14019B660
long ActorEffect::GetFounderPlayerID(); // 0x14019B6C0
bool ActorEffect::IsMotionCameraInvisibleActor(); // 0x14019B6E0
bool ActorEffect::IsInvisible(); // 0x14019B720
bool ActorEffect::IsModelDraw(); // 0x14004BBE0
void ActorEffect::SetEffectCreateData(const CharaActionData::Effect::Type::Set & setData); // 0x14019B790
void ActorEffect::SetEffectAnime(const CharaActionData::EffectAnime & effectAnime); // 0x14019B7E0
void ActorEffect::RequestEffectControl(const CharaActionData::Effect::Type::Control & reqDat); // 0x14019B940
void ActorEffect::ImmediateKillEffect(); // 0x14019B9C0
void ActorEffect::KillEffect(); // 0x14019BA60
ActorEffect * ActorEffect::CreateActorEffect(const CharaActionData::Effect::Type::Set & setData, Actor * pParent, ActorCharaBase * pFounder, ActorCharaBase * pOwner, long iCAngle); // 0x14019BB50
ActorEffect * ActorEffect::CreateActorEffectSingle(const CharaActionData::Effect::Type::Set & setData, Actor * pOwner, long iCAngle); // 0x14019BC50
ActorEffect * ActorEffect::CreateActorEffectAkebono(long akebonoType); // 0x14019BDD0//decompilation failure at 1408A05BE!
void __fastcall ActorEffect::~ActorEffect(ActorEffect *this)
{
  Effect *pEffect; // rcx

  this->__vftable = (ActorEffect_vtbl *)&ActorEffect::`vftable';
  pEffect = this->pEffect;
  if ( pEffect )
    pEffect->terminate(pEffect);
  this->pEffect = 0i64;
  this->__vftable = (ActorEffect_vtbl *)&Actor::`vftable';
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

unsigned __int8 __fastcall std::bitset<9>::reference::operator bool(std::bitset<9>::reference *this)
{
  unsigned __int64 Mypos; // rdx
  unsigned int v2; // eax

  Mypos = this->_Mypos;
  if ( Mypos >= 9 )
    std::_Xout_of_range("invalid bitset<N> position");
  v2 = this->_Pbitset[Mypos >> 5]._Array[0];
  return _bittest((const int *)&v2, this->_Mypos & 0x1F);
}

void __fastcall ActorEffect::ActionChanged(ActorEffect *this)
{
  ActionSystem *v2; // rcx

  Actor::ActionChanged(this);
  this->bParticleReset = (((__int64 (__fastcall *)(ActorEffect *, _QWORD, _QWORD))this->GetActionOptionFlag)(
                            this,
                            (unsigned int)this->iActNo,
                            0i64) & 0x40) == 0;
  ActionSystem::RequestSoundStopActionChange(v2, this);
}

void __fastcall ActorEffect::ActionFlagCheck(ActorEffect *this)
{
  int iActFlg2; // eax
  Actor *pParent; // rdx
  Actor::SYSTEM_STAT systemStat; // eax
  bool v5; // zf
  ActorEffect_vtbl *v6; // rax
  float v7; // xmm1_4
  float x; // xmm0_4
  float v9; // xmm1_4
  float z; // xmm1_4
  float v11; // xmm0_4

  if ( (this->iActFlg1 & 0x10) != 0 )
    ((void (__fastcall *)(ActorEffect *))this->SetPositionY)(this);
  if ( (this->iActFlg1 & 0x20) != 0 )
    ((void (__fastcall *)(ActorEffect *))this->SetPositionZ)(this);
  iActFlg2 = this->iActFlg2;
  if ( (iActFlg2 & 0x20) != 0 )
    this->bParentBind = 0;
  if ( (iActFlg2 & 0x40) != 0 )
    this->effectData.iOptionFlag &= 0xFFDFFFEF;
  if ( (iActFlg2 & 0x80u) != 0 )
    this->effectData.iOptionFlag &= 0xFFBFFFDF;
  if ( this->bParentBind || this->bPositionInit )
  {
    pParent = this->pParent;
    if ( pParent )
    {
      systemStat = pParent->systemStat;
      if ( systemStat )
      {
        if ( systemStat != ERASE )
        {
          v5 = (this->effectData.iOptionFlag & 0x1000) == 0;
          this->iCAnglePrev = this->iCAngle;
          if ( v5 )
          {
            this->iCAngle = pParent->iCAngle;
            this->iCAngleBuf = pParent->iCAngleBuf;
          }
          else
          {
            this->iCAngle = pParent->iCAngle == 0;
            this->iCAngleBuf = pParent->iCAngleBuf == 0;
          }
          if ( this->iCAngle != this->iCAnglePrev )
          {
            v6 = this->__vftable;
            LODWORD(v7) = LODWORD(this->vBuf.x) ^ _xmm;
            LODWORD(this->vMov.x) ^= _xmm;
            x = this->vAdd.x;
            this->vBuf.x = v7;
            v9 = v7 + this->vBasePosPrev.x;
            LODWORD(this->vAdd.x) = LODWORD(x) ^ _xmm;
            this->vPos.x = v9;
            if ( v6->IsDirectionInfluenceZ(this) )
            {
              z = this->vAdd.z;
              LODWORD(this->vMov.z) ^= _xmm;
              LODWORD(v11) = LODWORD(this->vBuf.z) ^ _xmm;
              LODWORD(this->vAdd.z) = LODWORD(z) ^ _xmm;
              this->vBuf.z = v11;
              this->vPos.z = v11 + this->vBasePosPrev.z;
            }
          }
        }
      }
    }
  }
}

void __fastcall ActorEffect::ActionParamInit(ActorEffect *this)
{
  Actor::ActionParamInit(this);
  this->effectAnime.fFrame = -1.0;
}

void __fastcall ActorEffect::BecomUpdate(ActorEffect *this)
{
  std::bitset<61>::reference *v2; // rax
  unsigned __int64 Mypos; // rdx
  __int64 v4; // rcx
  int v5; // eax
  std::bitset<61>::reference *v6; // rax
  unsigned __int64 v7; // rcx
  __int64 v8; // rdx
  int v9; // eax
  std::bitset<61>::reference *v10; // rax
  unsigned __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // eax
  Actor *pParent; // rcx
  int v15; // eax
  Actor *v16; // rcx
  ActorCharaBase *v17; // rax
  char v18; // di
  Actor *v19; // rcx
  Actor *v20; // rcx
  int iOptionFlag; // eax
  ActorCharaBase *pOwner; // rcx
  int v23; // eax
  Actor *v24; // rcx
  Actor::SYSTEM_STAT systemStat; // eax
  ActorCharaBase *pFounder; // rcx
  ActorCharaBase *v27; // rax
  ActorCharaBase *v28; // rcx
  ActorCharaBase *v29; // rcx
  std::bitset<61>::reference *v30; // rax
  unsigned __int64 v31; // rcx
  __int64 v32; // rdx
  int v33; // eax
  std::bitset<9>::reference *v34; // rax
  std::bitset<9>::reference *v35; // rax
  Actor *v36; // rax
  Actor::SYSTEM_STAT v37; // ecx
  std::bitset<61>::reference result; // [rsp+28h] [rbp-30h] BYREF
  std::bitset<61>::reference v39; // [rsp+38h] [rbp-20h] BYREF

  if ( !this->IsDeadEffect(this) )
  {
    if ( this->ctrlReqData.bSetData )
    {
      *(_QWORD *)&this->ctrlData.bSetData = *(_QWORD *)&this->ctrlReqData.bSetData;
      this->ctrlData.iOptionFlag = this->ctrlReqData.iOptionFlag;
      this->ctrlReqData.bSetData = 0;
      v2 = std::bitset<21>::operator[]((std::bitset<61> *)&this->ctrlData.bsFuncFlag, &result, 5ui64);
      Mypos = v2->_Mypos;
      if ( Mypos >= 9 )
        std::_Xout_of_range("invalid bitset<N> position");
      v4 = v2->_Mypos & 0x1F;
      v5 = *((_DWORD *)v2->_Pbitset->_Array + (Mypos >> 5));
      if ( _bittest(&v5, v4) )
        this->bParentBind = 0;
      v6 = std::bitset<21>::operator[]((std::bitset<61> *)&this->ctrlData.bsFuncFlag, &result, 7ui64);
      v7 = v6->_Mypos;
      if ( v7 >= 9 )
        std::_Xout_of_range("invalid bitset<N> position");
      v8 = v6->_Mypos & 0x1F;
      v9 = *((_DWORD *)v6->_Pbitset->_Array + (v7 >> 5));
      if ( _bittest(&v9, v8) )
        this->effectData.iOptionFlag &= 0xFFDFFFEF;
      v10 = std::bitset<21>::operator[]((std::bitset<61> *)&this->ctrlData.bsFuncFlag, &result, 8ui64);
      v11 = v10->_Mypos;
      if ( v11 >= 9 )
        std::_Xout_of_range("invalid bitset<N> position");
      v12 = v10->_Mypos & 0x1F;
      v13 = *((_DWORD *)v10->_Pbitset->_Array + (v11 >> 5));
      if ( _bittest(&v13, v12) )
        this->effectData.iOptionFlag &= 0xFFBFFFDF;
    }
    if ( this->bParentBind )
    {
      pParent = this->pParent;
      if ( pParent )
      {
        v15 = ((__int64 (__fastcall *)(Actor *))pParent->GetActorType)(pParent) - 1;
        if ( !v15 || v15 == 1 )
        {
          v16 = this->pParent;
          v17 = *(ActorCharaBase **)&v16[1].iDrawPriSub;
          if ( v17 != this->pOwner )
            this->pOwner = v17;
          this->pTarget = v16->pTarget;
          this->iPlayerID = v16->iPlayerID;
        }
      }
    }
  }
  if ( this->iActorStat != 1 )
    goto LABEL_76;
  v18 = 0;
  v19 = this->pParent;
  if ( v19
    && (v19->iActNo != this->iParentInitActNo || v19->IsActionDataChanged(v19) != this->bParentInitActDataChanged) )
  {
    if ( (this->pParent->GetActionOptionFlag(this->pParent, this->pParent->iActNo, 0) & 0x80u) == 0 )
    {
      iOptionFlag = this->effectData.iOptionFlag;
      if ( (iOptionFlag & 0x10) != 0 )
      {
        v18 = 1;
      }
      else if ( (iOptionFlag & 0x200000) != 0 )
      {
        this->bParentBind = 0;
      }
    }
    else
    {
      v20 = this->pParent;
      this->iParentInitActNo = v20->iActNo;
      this->bParentInitActDataChanged = v20->IsActionDataChanged(v20);
    }
  }
  pOwner = this->pOwner;
  if ( pOwner
    && pOwner->GetActorType(pOwner) == CHARA
    && ((unsigned __int8 (__fastcall *)(ActorCharaBase *))this->pOwner->__vftable[1].GetActionOptionFlag)(this->pOwner) )
  {
    v23 = this->effectData.iOptionFlag;
    if ( (v23 & 0x20) != 0 )
    {
      v18 = 1;
    }
    else if ( (v23 & 0x400000) != 0 )
    {
      this->bParentBind = 0;
    }
  }
  if ( this->bParentBind || this->bPositionInit || (this->effectData.iOptionFlag & 0x40) != 0 )
  {
    v24 = this->pParent;
    if ( !v24
      || (systemStat = v24->systemStat) == INIT
      || systemStat == ERASE
      || v24->GetActorType(v24) == EFFECT
      && ((unsigned __int8 (__fastcall *)(Actor *))this->pParent->Actor::__vftable[1]._branchIsAttackHitOrGuard)(this->pParent) )
    {
      v18 = 1;
    }
  }
  if ( (this->effectData.iOptionFlag & 0x800000) != 0 )
  {
    pFounder = this->pFounder;
    if ( !pFounder
      || pFounder->GetActorType(pFounder)
      || this->pFounder->IsActionDataChanged(this->pFounder)
      || (v27 = this->pFounder, v27->baseAnime.iMotionFileID)
      || v27->bPrevMotionNotUnique )
    {
      v18 = 1;
    }
  }
  if ( this->GetEffectType(this) == STAND_GUARD )
  {
    v28 = this->pFounder;
    if ( !v28 )
      goto LABEL_68;
    if ( v28->GetActorType(v28) )
      goto LABEL_68;
    v29 = this->pFounder;
    if ( this->iDamageEffectAttr != v29[1].iActionCounter
      || !((unsigned __int8 (__fastcall *)(ActorCharaBase *))v29->__vftable[1].GetActionOptionFlag)(v29) )
    {
      goto LABEL_68;
    }
  }
  if ( v18 )
    goto LABEL_68;
  v30 = std::bitset<21>::operator[]((std::bitset<61> *)&this->ctrlData.bsFuncFlag, &result, 0i64);
  v31 = v30->_Mypos;
  if ( v31 >= 9 )
    std::_Xout_of_range("invalid bitset<N> position");
  v32 = v30->_Mypos & 0x1F;
  v33 = *((_DWORD *)v30->_Pbitset->_Array + (v31 >> 5));
  if ( _bittest(&v33, v32)
    || (v34 = (std::bitset<9>::reference *)std::bitset<21>::operator[](
                                             (std::bitset<61> *)&this->ctrlData.bsFuncFlag,
                                             &v39,
                                             6ui64),
        std::bitset<9>::reference::operator bool(v34))
    || this->bActionEnd && this->iActReserveNo < 0 && this->iActReserveFrame < 0 )
  {
LABEL_68:
    this->ResetHitStop(this);
    if ( SLOBYTE(this->effectData.iOptionFlag) < 0
      || (v35 = (std::bitset<9>::reference *)std::bitset<21>::operator[](
                                               (std::bitset<61> *)&this->ctrlData.bsFuncFlag,
                                               &v39,
                                               6ui64),
          std::bitset<9>::reference::operator bool(v35)) )
    {
      this->ImmediateKillEffect(this);
    }
    else
    {
      this->KillEffect(this);
    }
    this->bParentBind = 0;
  }
  else
  {
LABEL_76:
    if ( this->bBlackoutInvalid )
    {
      v36 = this->pParent;
      if ( !v36 || (v37 = v36->systemStat) == INIT || v37 == ERASE )
        this->bBlackoutInvalid = 0;
    }
  }
}

void __fastcall ActorWeapon::ActionFlagCheck(_SETJMP_FLOAT128 *JumpBuffer)
{
  ;
}

Actor *__fastcall ActorEffect::CreateActorEffect(
        const CharaActionData::Effect::Type::Set *setData,
        Actor *pParent,
        ActorCharaBase *pFounder,
        ActorCharaBase *pOwner)
{
  __int64 v8; // r14
  Actor::SYSTEM_STAT systemStat; // eax
  BattleSystem::BattleController *v11; // rax
  Actor *v12; // rax
  Actor *v13; // rbx
  const CharaDataUnify *pDataUnify; // rdx
  BattleSystem::BattleController *v15; // [rsp+78h] [rbp+10h]

  v8 = *(_QWORD *)&AppMain::pApp;
  if ( pParent )
  {
    systemStat = pParent->systemStat;
    if ( systemStat == INIT || systemStat == ERASE )
      return 0i64;
  }
  v11 = BattleSystem::BattleController::instance;
  if ( !BattleSystem::BattleController::instance )
  {
    v15 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v15);
    BattleSystem::BattleController::instance = v11;
  }
  v12 = ActionSystem::Entry(&v11->actSystem, EFFECT, 7);
  v13 = v12;
  if ( v12 )
  {
    pDataUnify = *(const CharaDataUnify **)(v8 + 2182576);
    if ( pFounder )
    {
      if ( setData->iActFileID != 1 )
      {
        pDataUnify = pFounder->pDataUnify;
        LODWORD(v12[1].vAdd.y) = pFounder->iResultSubType;
      }
    }
    ((void (__fastcall *)(Actor *, const CharaDataUnify *, const CharaActionData::Effect::Type::Set *, Actor *, ActorCharaBase *, ActorCharaBase *, int))v12->__vftable[1].SetSpeedDataSub)(
      v12,
      pDataUnify,
      setData,
      pParent,
      pFounder,
      pOwner,
      -1);
  }
  return v13;
}

ActorEffect *__fastcall ActorEffect::CreateActorEffectAkebono(int akebonoType)
{
  __int16 v1; // di
  __int64 v2; // rsi
  BattleSystem::BattleController *v3; // rax
  ActorEffect *result; // rax
  ActorEffect *v5; // rbx
  BattleSystem::BattleController *v6; // [rsp+48h] [rbp-40h]
  __int64 v7; // [rsp+50h] [rbp-38h] BYREF
  int v8; // [rsp+58h] [rbp-30h]
  __int16 v9; // [rsp+5Ch] [rbp-2Ch]
  int v10; // [rsp+5Eh] [rbp-2Ah]
  __int16 v11; // [rsp+62h] [rbp-26h]
  int v12; // [rsp+64h] [rbp-24h]

  v1 = akebonoType;
  v2 = *(_QWORD *)&AppMain::pApp;
  v3 = BattleSystem::BattleController::instance;
  if ( !BattleSystem::BattleController::instance )
  {
    v6 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v6);
    BattleSystem::BattleController::instance = v3;
  }
  result = (ActorEffect *)ActionSystem::Entry(&v3->actSystem, EFFECT, 7);
  v5 = result;
  if ( result )
  {
    v7 = 0i64;
    v8 = 0;
    v10 = 1;
    v12 = 1073873536;
    v9 = 2;
    v11 = v1 + 35;
    result->ParamInit(
      result,
      *(const CharaDataUnify **)(v2 + 2182576),
      (const CharaActionData::Effect::Type::Set *)&v7,
      0i64,
      0i64,
      0i64,
      0);
    v5->iDrawPri = 1;
    v5->SetEffectType(v5, CROUCH_GUARD);
    v5->bIgnoreSystemPlayRate = 1;
    return v5;
  }
  return result;
}

ActorEffect *__fastcall ActorEffect::CreateActorEffectSingle(
        const CharaActionData::Effect::Type::Set *setData,
        Actor *pOwner,
        int iCAngle)
{
  __int64 v6; // rbp
  BattleSystem::BattleController *v7; // rax
  ActorEffect *result; // rax
  ActorEffect *v9; // rsi
  const CharaDataUnify *v10; // rdx
  bool v11; // zf
  Actor_vtbl *v12; // rax
  ActorEffect_vtbl *v13; // rbx
  bool v14; // al
  ActorEffect_vtbl *v15; // rbx
  bool IsUseZOffset; // al
  BattleSystem::BattleController *v17; // [rsp+88h] [rbp+20h]

  v6 = *(_QWORD *)&AppMain::pApp;
  v7 = BattleSystem::BattleController::instance;
  if ( !BattleSystem::BattleController::instance )
  {
    v17 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v17);
    BattleSystem::BattleController::instance = v7;
  }
  result = (ActorEffect *)ActionSystem::Entry(&v7->actSystem, EFFECT, 7);
  v9 = result;
  if ( result )
  {
    v10 = *(const CharaDataUnify **)(v6 + 2182576);
    if ( pOwner && setData->iActFileID != 1 )
    {
      v11 = !pOwner->IsOptionAsset(pOwner);
      v12 = pOwner->__vftable;
      if ( v11 )
        v10 = *(const CharaDataUnify **)(v6 + 8i64 * v12->GetFounderPlayerID(pOwner) + 2182544);
      else
        v10 = *(const CharaDataUnify **)(v6 + 8i64 * v12->GetFounderPlayerID(pOwner) + 2182560);
    }
    v9->ParamInit(v9, v10, setData, 0i64, 0i64, 0i64, iCAngle);
    if ( pOwner )
    {
      if ( setData->iActFileID != 1 )
      {
        v9->iPlayerID = pOwner->GetFounderPlayerID(pOwner);
        v13 = v9->__vftable;
        v14 = pOwner->IsOptionAsset(pOwner);
        v13->SetOptionAsset(v9, v14);
        v9->iCharNo = pOwner->iCharNo;
        v9->iAssetID = pOwner->GetAssetID(pOwner);
        v9->iParentInitActNo = pOwner->iActNo;
        v15 = v9->__vftable;
        IsUseZOffset = Actor::IsUseZOffset(pOwner);
        v15->SetUseZOffset(v9, IsUseZOffset);
      }
    }
    return v9;
  }
  return result;
}

void __fastcall ActorEffect::CreateInit(ActorEffect *this)
{
  this->ParamInit(this, 0i64, 0i64, 0i64, 0i64);
  this->pEffect = 0i64;
  this->pFounder = 0i64;
  this->pOwner = 0i64;
  *(_QWORD *)this->mWorld.m = 1065353216i64;
  this->mWorld.m[4] = 0.0;
  *(_QWORD *)&this->mWorld.m[8] = 0i64;
  *(_QWORD *)&this->mWorld.m[12] = 0i64;
  *(_QWORD *)&this->mWorld.m[5] = 1065353216i64;
  *(_QWORD *)&this->mWorld.m[2] = 0i64;
  *(_QWORD *)&this->mWorld.m[10] = 1065353216i64;
  this->mWorld.m[14] = 0.0;
  this->mWorld.m[7] = 0.0;
  this->mWorld.m[15] = 1.0;
  *(_QWORD *)&this->bCleanupEffect = 0i64;
  this->ctrlData.bSetData = 0;
  this->ctrlReqData.bSetData = 0;
  *(_QWORD *)&this->effectType = 0i64;
  *(_QWORD *)&this->effectAnime.iListFileID = 0i64;
  *(_QWORD *)&this->effectAnime.fFrame = 0i64;
  *(_QWORD *)&this->effectAnimePrev.iListFileID = 0i64;
  *(_QWORD *)&this->effectAnimePrev.fFrame = 0i64;
  *(_QWORD *)&this->effectData.fPosX = 0i64;
  *(_QWORD *)&this->effectData.fPosZ = 0i64;
  *(_QWORD *)&this->effectData.iTermFlag = 0i64;
  *(_QWORD *)&this->xDelayCreateCount.value = 0i64;
  this->fEffectAlpha = 1.0;
  this->bParentInitActDataChanged = 0;
}

void __fastcall ActorEffect::Dispose(ActorEffect *this)
{
  Effect *pEffect; // rcx
  ActorEffect_vtbl *v3; // rax

  ActionSystem::RequestSoundStopActionChange((ActionSystem *)this, this);
  pEffect = this->pEffect;
  if ( pEffect )
    pEffect->terminate(pEffect);
  v3 = this->__vftable;
  this->pEffect = 0i64;
  v3->CreateInit(this);
}

void __fastcall ActorEffect::Draw(ActorEffect *this)
{
  ActionSystem *v2; // rax
  float fProjBlendBase; // xmm0_4
  __int64 v4; // r8
  Effect *pEffect; // rax
  __int64 v6; // rdx
  __int64 v7; // r9
  int v8[4]; // [rsp+20h] [rbp-38h] BYREF

  if ( this->pEffect
    && this->effectAnime.fFrame >= 0.0
    && !this->IsInvisible(this)
    && (this->GetActionSystem(this)->bsInvisibleFlag._Array[0] & 0x10) == 0 )
  {
    this->pEffect->updateVertexBuffer(this->pEffect);
    Actor::IsUseZOffset(this);
    if ( (this->effectData.iOptionFlag & 0x40000000) == 0 )
    {
      v2 = this->GetActionSystem(this);
      if ( v2->bFreeCameraMode )
      {
        fProjBlendBase = v2->freeCamera.fProjBlendBase;
      }
      else
      {
        if ( v2->bUseSubCamera )
          goto LABEL_13;
        fProjBlendBase = v2->cameraCtrl.fProjBlendValue;
      }
      if ( fProjBlendBase > 0.0 )
      {
        Effect::setBlendProjection(this->pEffect, 1);
        if ( !this->IsDeadEffect(this) )
        {
          this->GetBindCenterPosition(this, (OGLVec3 *)v8);
          pEffect = this->pEffect;
          LODWORD(pEffect->m_BlendProjData.blendProjectionCenterPos.x) = v8[0];
          LODWORD(pEffect->m_BlendProjData.blendProjectionCenterPos.y) = v8[1];
          LODWORD(pEffect->m_BlendProjData.blendProjectionCenterPos.z) = v8[2];
        }
LABEL_14:
        if ( (this->effectData.iOptionFlag & 0x20000000) != 0 )
        {
          v6 = 0i64;
          if ( this->iDrawPri == 1 )
          {
            v7 = 3i64;
LABEL_21:
            ((void (__fastcall *)(Effect *, __int64, __int64, __int64))this->pEffect->render)(this->pEffect, v6, v4, v7);
            return;
          }
        }
        else
        {
          if ( this->iDrawPri == 1 )
          {
            v7 = 3i64;
            v6 = 0i64;
            goto LABEL_21;
          }
          v6 = 1i64;
        }
        v7 = 4i64;
        goto LABEL_21;
      }
    }
LABEL_13:
    Effect::setBlendProjection(this->pEffect, 0);
    goto LABEL_14;
  }
}

OGLVec3 *__fastcall ActorEffect::GetBindCenterPosition(ActorEffect *this, OGLVec3 *result)
{
  Actor *pParent; // r8
  OGLVec3 *v4; // rax
  __int64 v5; // xmm0_8
  float z; // eax
  char v8[24]; // [rsp+20h] [rbp-18h] BYREF

  *(_QWORD *)&result->x = 0i64;
  result->z = 0.0;
  if ( this->bParentBind && (pParent = this->pParent) != 0i64 )
    v4 = pParent->GetBindCenterPosition(this->pParent, (OGLVec3 *)v8);
  else
    v4 = this->GetCenterPosition(this, v8);
  v5 = *(_QWORD *)&v4->x;
  z = v4->z;
  *(_QWORD *)&result->x = v5;
  result->z = z;
  return result;
}

OGLVec3 *__fastcall ActorEffect::GetCenterPosition(ActorEffect *this, OGLVec3 *result)
{
  *result = *(OGLVec3 *)&this->mWorld.m[12];
  return result;
}

OGLMatrix *__fastcall ActorEffect::GetEffectBindMatrix(ActorEffect *this, OGLMatrix *result)
{
  _OWORD *m; // rdi
  ActorCharaBase *pParent; // rsi
  _BOOL8 v6; // r8
  int v7; // eax
  OGLModel *pModel; // rdx

  m = 0i64;
  *(_QWORD *)&result->m[4] = 0i64;
  *(_QWORD *)&result->m[6] = 0i64;
  *(_QWORD *)&result->m[14] = 0i64;
  *(_QWORD *)result->m = 1065353216i64;
  result->m[4] = 0.0;
  *(_QWORD *)&result->m[8] = 0i64;
  *(_QWORD *)&result->m[12] = 0i64;
  *(_QWORD *)&result->m[5] = 1065353216i64;
  *(_QWORD *)&result->m[2] = 0i64;
  *(_QWORD *)&result->m[10] = 1065353216i64;
  result->m[14] = 0.0;
  result->m[7] = 0.0;
  result->m[15] = 1.0;
  pParent = (ActorCharaBase *)this->pParent;
  if ( this->effectData.iPosBase >= 3 )
  {
    if ( (this->effectData.iOptionFlag & 8) != 0 )
    {
      if ( !pParent->pTarget )
        return result;
      pParent = (ActorCharaBase *)this->pTarget;
    }
    if ( pParent->GetActorType(pParent) == CHARA
      || pParent->GetActorType(pParent) == OPTION
      || (pParent = this->pOwner) != 0i64 )
    {
      LOBYTE(v6) = (this->effectData.iOptionFlag & 2) == 0 && pParent->iCAngle != 0;
      v7 = pParent->GetBoneIndex(pParent, (CharaBone::NAME_INDEX)(this->effectData.iPosBase + 2), v6);
      if ( v7 >= 0 )
      {
        pModel = pParent->pModel;
        if ( v7 < (signed int)pModel->m_pFigure->m_uiBoneCount )
          m = (_OWORD *)pModel->m_pBoneInfo[v7].mRot.m;
        *(_OWORD *)result->m = *m;
        *(_OWORD *)&result->m[4] = m[1];
        *(_OWORD *)&result->m[8] = m[2];
        *(_OWORD *)&result->m[12] = m[3];
      }
    }
  }
  return result;
}

OGLVec3 *__fastcall ActorEffect::GetEffectSetPos(ActorEffect *this, OGLVec3 *result, __int64 bDirectPos, _BOOL8 a4)
{
  char v4; // bp
  __int16 iPosBase; // ax
  ActorCharaBase *pParent; // rdi
  __int64 v9; // rax
  float z; // eax
  float fPosZ; // xmm1_4
  float fPosX; // eax
  char v14; // [rsp+20h] [rbp-18h] BYREF

  LOBYTE(a4) = 0;
  *(_QWORD *)&result->x = 0i64;
  v4 = bDirectPos;
  result->z = 0.0;
  iPosBase = this->effectData.iPosBase;
  pParent = (ActorCharaBase *)this->pParent;
  if ( iPosBase != 2 )
  {
    if ( !pParent )
      return result;
    if ( (this->effectData.iOptionFlag & 8) != 0 )
    {
      if ( !pParent->pTarget )
        return result;
      pParent = (ActorCharaBase *)this->pTarget;
    }
    if ( iPosBase >= 3 )
    {
      if ( ((unsigned int (__fastcall *)(ActorCharaBase *, OGLVec3 *, __int64, _BOOL8))pParent->GetActorType)(
             pParent,
             result,
             bDirectPos,
             a4) )
      {
        if ( pParent->GetActorType(pParent) != OPTION )
        {
          pParent = this->pOwner;
          if ( !pParent )
            return result;
        }
      }
      LOBYTE(a4) = (this->effectData.iOptionFlag & 2) == 0 && pParent->iCAngle != 0;
    }
  }
  if ( !this->effectData.iPosBase )
  {
    *(_QWORD *)&result->x = *(_QWORD *)&pParent->vBasePos.x;
    z = pParent->vBasePos.z;
    goto LABEL_20;
  }
  if ( this->effectData.iPosBase == 1 )
  {
    *(_QWORD *)&result->x = *(_QWORD *)&pParent->vPos.x;
    z = pParent->vPos.z;
    goto LABEL_20;
  }
  if ( this->effectData.iPosBase != 2 )
  {
    v9 = (__int64)pParent->GetBonePosition(
                    pParent,
                    (OGLVec3 *)&v14,
                    (CharaBone::NAME_INDEX)(this->effectData.iPosBase + 2),
                    a4);
    *(_QWORD *)&result->x = *(_QWORD *)v9;
    z = *(float *)(v9 + 8);
LABEL_20:
    result->z = z;
    goto LABEL_21;
  }
  fPosZ = this->effectData.fPosZ;
  fPosX = this->effectData.fPosX;
  result->y = this->effectData.fPosY;
  result->z = fPosZ;
  result->x = fPosX;
LABEL_21:
  if ( !v4 && this->effectData.iPosBase != 2 )
  {
    if ( (this->effectData.iOptionFlag & 0x2000) != 0 )
      result->y = 0.0;
    if ( (this->effectData.iOptionFlag & 0x4000) != 0 )
      result->z = 0.0;
    ActorEffect::_addOffset(this, result, pParent);
  }
  return result;
}

__int64 __fastcall ActorEffect::GetFounderPlayerID(ActorShot *this)
{
  ActorCharaBase *pFounder; // rax

  pFounder = this->pFounder;
  if ( pFounder )
    return (unsigned int)pFounder->iPlayerID;
  else
    return (unsigned int)this->iPlayerID;
}

void __fastcall ActorEffect::ImmediateKillEffect(ActorEffect *this)
{
  ActorCharaBase *pFounder; // rcx
  Effect *pEffect; // rcx
  int iActorStat; // eax

  ActionSystem::RequestSoundStopActionChange((ActionSystem *)this, this);
  if ( (this->effectData.iOptionFlag & 0x800000) != 0 )
  {
    pFounder = this->pFounder;
    if ( pFounder )
    {
      if ( pFounder->GetActorType(pFounder) == CHARA )
      {
        ActorChara::ExtraEffectData::DeadEffectCheck(
          (ActorChara::ExtraEffectData *)((char *)&this->pFounder[4].pDmgSet + 4),
          &this->effectData);
        this->effectData.iOptionFlag &= ~0x800000u;
      }
    }
  }
  pEffect = this->pEffect;
  if ( pEffect )
    pEffect->terminate(pEffect);
  iActorStat = this->iActorStat;
  this->pEffect = 0i64;
  this->systemStat = INIT;
  this->iActorStatPrev = iActorStat;
  this->iActorStat = 3;
  this->iActorStatReserve = -1;
}

char __fastcall ActorEffect::IsBlackStop(ActorEffect *this)
{
  Actor *pParent; // rcx
  Actor *v4; // rcx
  __int64 iPlayerID; // rax

  if ( this->pActSys->actBlack.data[5].attr == COUNTER_HIT && this->GetEffectType(this) != CROUCH_GUARD )
    return 1;
  if ( (this->effectData.iOptionFlag & 0x200) != 0 )
    return 0;
  if ( this->bBlackoutInvalid )
  {
    pParent = this->pParent;
    if ( pParent )
      return pParent->IsBlackStop(pParent);
  }
  v4 = this->pParent;
  if ( v4 && v4->GetActorType(v4) )
  {
    pParent = this->pParent;
    return pParent->IsBlackStop(pParent);
  }
  iPlayerID = this->iPlayerID;
  if ( (int)iPlayerID < 0 )
    return 0;
  return this->pActSys->actBlack.data[ciEffectTargetID[iPlayerID]].bStop;
}

bool __fastcall ActorEffect::IsInvisible(ActorEffect *this)
{
  Actor *pParent; // rcx
  int v3; // eax

  pParent = this->pParent;
  if ( pParent && (this->effectData.iOptionFlag & 0x8000) != 0 && pParent->IsInvisible(pParent)
    || this->IsMotionCameraInvisibleActor(this)
    || this->fEffectAlpha <= 0.0 )
  {
    LOBYTE(v3) = 1;
  }
  else
  {
    return ((unsigned int)this->iActFlg2 >> 8) & 1;
  }
  return v3;
}

bool __fastcall Scaleform::GFx::InteractiveObject::OnCharEvent(
        Scaleform::Render::Texture *this,
        Scaleform::Render::RenderTargetData *__formal)
{
  return 0;
}

bool __fastcall ActorEffect::IsMotionCameraInvisibleActor(ActorEffect *this)
{
  ActionSystem *v3; // rax

  if ( this->GetEffectType(this) == CROUCH_GUARD )
    return 0;
  v3 = this->GetActionSystem(this);
  return CameraControl::IsInvisibleEffectActor(&v3->cameraCtrl, this);
}

void __fastcall ActorEffect::KillEffect(ActorEffect *this)
{
  Effect *pEffect; // rcx
  ActionSystem *v3; // rcx
  bool v4; // zf
  ActorCharaBase *pFounder; // rcx

  pEffect = this->pEffect;
  if ( pEffect && this->effectAnime.fFrame >= 0.0 && pEffect->getNaturalDeathFlag(pEffect) )
  {
    ActionSystem::RequestSoundStopActionChange(v3, this);
    this->pEffect->setEmitFlag(this->pEffect, 0);
    v4 = (this->effectData.iOptionFlag & 0x800000) == 0;
    this->iActorStatPrev = this->iActorStat;
    this->iActorStat = 2;
    this->iActorStatReserve = -1;
    this->bActionFreeze = 1;
    if ( !v4 )
    {
      pFounder = this->pFounder;
      if ( pFounder )
      {
        if ( pFounder->GetActorType(pFounder) == CHARA )
        {
          ActorChara::ExtraEffectData::DeadEffectCheck(
            (ActorChara::ExtraEffectData *)((char *)&this->pFounder[4].pDmgSet + 4),
            &this->effectData);
          this->effectData.iOptionFlag &= ~0x800000u;
        }
      }
    }
  }
  else
  {
    this->ImmediateKillEffect(this);
  }
}

void __fastcall ActorEffect::LateUpdate(ActorEffect *this, __int64 a2, float a3)
{
  ActorCharaBase *pFounder; // rcx
  Actor *pParent; // rcx
  __int64 v6; // rdx
  ActionSystem *pActSys; // rcx
  int iOptionFlag; // eax
  Actor *v9; // rcx
  ActorEffect_vtbl *v10; // rbx
  bool IsUseZOffset; // al

  pFounder = this->pFounder;
  if ( pFounder && pFounder->IsResultDemoEnd(pFounder) )
  {
    this->xHitStopFrame.value = 0x20000;
    this->xHitStopTotal.value = 0x20000;
  }
  if ( !this->IsDeadEffect(this) )
  {
    pParent = this->pParent;
    if ( pParent && (this->effectData.iOptionFlag & 0x800) != 0 )
    {
      this->xHitStopFrame.value = pParent->xHitStopFrame.value;
      this->xHitStopTotal.value = pParent->xHitStopTotal.value;
    }
    this->BranchCheck(this);
  }
  if ( this->GetEffectType(this) == CROUCH_GUARD && this->bActionEnd )
  {
    pActSys = this->pActSys;
    if ( (unsigned int)(pActSys->actBlack.data[0].type - 7) <= 1
      && pActSys->actBlack.data[0].attr
      && pActSys->actBlack.data[0].xNowFrame.value )
    {
      pActSys->actBlack.data[0].xNowFrame.value = 0;
    }
  }
  iOptionFlag = this->effectData.iOptionFlag;
  if ( (iOptionFlag & 0x10000) != 0 )
  {
    LOBYTE(v6) = 1;
    this->SetUseZOffset(this, v6);
  }
  else if ( (iOptionFlag & 0x20000) != 0 )
  {
    this->SetUseZOffset(this, 0);
  }
  else
  {
    v9 = this->pParent;
    if ( v9 )
    {
      v10 = this->__vftable;
      IsUseZOffset = Actor::IsUseZOffset(v9);
      v10->SetUseZOffset(this, IsUseZOffset);
    }
  }
  if ( (this->iActFlg2 & 0x10000) != 0 )
  {
    LOBYTE(v6) = 1;
    this->SetUseZOffset(this, v6);
  }
  if ( (this->iActFlg2 & 0x20000) != 0 )
    this->SetUseZOffset(this, 0);
  Actor::DrawRequest(this, v6, a3);
}

void __fastcall ActorEffect::MainUpdate(ActorEffect *this)
{
  _BOOL8 v2; // r9
  int v3; // edi
  std::bitset<61>::reference *v4; // rax
  unsigned __int64 Mypos; // rdx
  __int64 v6; // rcx
  int v7; // eax
  Actor *pParent; // rax
  Actor::SYSTEM_STAT systemStat; // ecx
  __int64 v10; // rdx
  __int64 v11; // rdx
  Effect *pEffect; // rcx
  ActorCharaBase *pFounder; // rcx
  std::bitset<61>::reference result; // [rsp+38h] [rbp-40h] BYREF
  int v15; // [rsp+80h] [rbp+8h] BYREF

  this->GetActionSystemSpeedFix(this, (Fix32 *)&v15);
  if ( this->ctrlData.bSetData )
  {
    v3 = 1;
    do
    {
      v4 = std::bitset<21>::operator[]((std::bitset<61> *)&this->ctrlData.bsFuncFlag, &result, v3);
      Mypos = v4->_Mypos;
      if ( Mypos >= 9 )
        std::_Xout_of_range("invalid bitset<N> position");
      v6 = v4->_Mypos & 0x1F;
      v7 = *((_DWORD *)v4->_Pbitset->_Array + (Mypos >> 5));
      if ( _bittest(&v7, v6) )
        this->SetActionBranchKey(this, v3);
      ++v3;
    }
    while ( v3 - 1 < 4 );
  }
  if ( this->bActionLooped
    && (((__int64 (__fastcall *)(ActorEffect *, _QWORD, _QWORD))this->GetActionOptionFlag)(
          this,
          (unsigned int)this->iActNo,
          0i64) & 0x20) != 0 )
  {
    *(_WORD *)&this->bCleanupEffect = 257;
  }
  if ( this->bParentBind || this->bPositionInit )
  {
    pParent = this->pParent;
    if ( !pParent || (systemStat = pParent->systemStat) != INIT && systemStat != ERASE )
    {
      this->vBuf.x = this->vPos.x - this->vBasePosPrev.x;
      this->vBuf.y = this->vPos.y - this->vBasePosPrev.y;
      this->vBuf.z = this->vPos.z - this->vBasePosPrev.z;
      this->vBasePos = *ActorEffect::GetEffectSetPos(this, (OGLVec3 *)&result, 0i64, v2);
      this->vPos.x = this->vBasePos.x + this->vBuf.x;
      this->vPos.y = this->vBasePos.y + this->vBuf.y;
      this->vPos.z = this->vBasePos.z + this->vBuf.z;
      if ( this->bPositionInit && !this->bParentBind )
      {
        *(_QWORD *)&this->vBasePos.x = *(_QWORD *)&this->vPos.x;
        this->vBasePos.z = this->vPos.z;
      }
      this->bPositionInit = 0;
    }
  }
  if ( !this->IsDeadEffect(this) )
  {
    this->UpdatePosture(this);
    pEffect = this->pEffect;
    if ( pEffect && this->bCleanupEffect && this->effectAnime.fFrame >= 0.0 )
      ((void (__fastcall *)(Effect *, __int64, bool))pEffect->cleanup)(pEffect, v11, this->bParticleReset);
    if ( this->GetEffectType(this) == STAND_GUARD )
    {
      pFounder = this->pFounder;
      if ( pFounder )
      {
        if ( pFounder->GetActorType(pFounder) == CHARA )
          ((void (__fastcall *)(ActorCharaBase *))this->pFounder->__vftable[1].UpdatePostureCalc)(this->pFounder);
      }
    }
  }
  if ( this->pEffect && this->effectAnime.fFrame >= 0.0 )
  {
    if ( !this->bHitStopFreeze )
      ((__int64 (__fastcall *)(ActorEffect *))this->IsBlackStop)(this);
    LOBYTE(v10) = this->iCAngle != 0;
    ((void (__fastcall *)(Effect *, __int64, OGLMatrix *))this->pEffect->update)(this->pEffect, v10, &this->mWorld);
    if ( this->IsDeadEffect(this) && !this->pEffect->getSurviveParticleFlag(this->pEffect) )
      this->ImmediateKillEffect(this);
  }
}

void __fastcall OGLMatrixRotateOnlyCalc(OGLMatrix *In1, const OGLMatrix *In2)
{
  float v2; // xmm6_4
  float v3; // xmm4_4
  float v4; // xmm3_4
  float v5; // xmm10_4
  float v6; // xmm8_4
  float v7; // xmm7_4
  float v8; // xmm2_4
  float v9; // xmm11_4
  float v10; // xmm4_4
  float v11; // xmm2_4
  float v12; // xmm7_4
  float v13; // xmm5_4
  float v14; // xmm1_4
  float v15; // xmm4_4
  float v16; // xmm6_4
  float v17; // xmm8_4
  float v18; // xmm12_4
  float v19; // [rsp+78h] [rbp+10h]
  float v20; // [rsp+80h] [rbp+18h]

  v2 = In1->m[8];
  v3 = In1->m[4];
  v4 = In1->m[5];
  v5 = In2->m[4];
  v6 = In2->m[8];
  v7 = v3 * In2->m[1];
  v19 = (float)((float)(In2->m[2] * In1->m[0]) + (float)(In2->m[6] * In1->m[1])) + (float)(In2->m[10] * In1->m[2]);
  v8 = In1->m[6];
  v9 = (float)((float)(In2->m[0] * v3) + (float)(v5 * v4)) + (float)(v6 * v8);
  v10 = (float)((float)(v3 * In2->m[2]) + (float)(v4 * In2->m[6])) + (float)(v8 * In2->m[10]);
  v11 = In1->m[9];
  v12 = (float)(v7 + (float)(v4 * In2->m[5])) + (float)(In1->m[6] * In2->m[9]);
  v20 = v10;
  v13 = (float)((float)(v2 * In2->m[0]) + (float)(v11 * v5)) + (float)(In1->m[10] * v6);
  v14 = In1->m[10];
  v15 = (float)((float)(v2 * In2->m[1]) + (float)(v11 * In2->m[5])) + (float)(v14 * In2->m[9]);
  v16 = (float)((float)(v2 * In2->m[2]) + (float)(v11 * In2->m[6])) + (float)(v14 * In2->m[10]);
  v17 = v6 * In1->m[2];
  v18 = (float)(In2->m[0] * In1->m[0]) + (float)(v5 * In1->m[1]);
  In1->m[1] = (float)((float)(In1->m[0] * In2->m[1]) + (float)(In2->m[5] * In1->m[1])) + (float)(In1->m[2] * In2->m[9]);
  In1->m[2] = v19;
  In1->m[4] = v9;
  In1->m[0] = v18 + v17;
  In1->m[5] = v12;
  In1->m[10] = v16;
  In1->m[6] = v20;
  In1->m[8] = v13;
  In1->m[9] = v15;
}

void __fastcall ActorEffect::ParamInit(
        ActorEffect *this,
        const CharaDataUnify *pCharaData,
        const CharaActionData::Effect::Type::Set *setData,
        Actor *pParent,
        ActorCharaBase *pFounder,
        ActorCharaBase *pOwner,
        int iCAngle)
{
  __int16 v10; // ax
  CharaActionData *pEffectAct; // rdx
  ActorCharaBase *v12; // rcx
  ActorEffect_vtbl *v13; // rbx
  int iPlayerID; // eax
  Actor *v15; // rcx
  bool v16; // al
  int iCAngleBuf; // eax
  int v18; // ecx
  ActorEffect_vtbl *v19; // rax
  __int64 iActNo; // rdx

  if ( pCharaData
    && (v10 = setData->iActNo, v10 >= 0)
    && setData->iActFileID >= 0
    && (pEffectAct = pCharaData->pEffectAct, v10 < pEffectAct->dataHeader.iActionCount) )
  {
    Actor::ParamInit(this, pEffectAct, 0i64, 0i64, 0i64);
    this->pFounder = pFounder;
    this->iDrawPri = 8;
    *(_OWORD *)&this->effectData.fPosX = *(_OWORD *)&setData->fPosX;
    *(_QWORD *)&this->effectData.iTermFlag = *(_QWORD *)&setData->iTermFlag;
    if ( (setData->iOptionFlag & 0x80000) != 0 )
      this->effectData.iOptionFlag |= 0x10A803u;
    this->bPositionInit = 1;
    if ( pOwner )
      this->pOwner = pOwner;
    else
      this->pOwner = pFounder;
    if ( pParent )
      this->pParent = pParent;
    else
      this->pParent = this->pOwner;
    v12 = this->pOwner;
    if ( v12 )
    {
      v13 = this->__vftable;
      this->pTarget = v12->pTarget;
      iPlayerID = v12->iPlayerID;
      v15 = this->pParent;
      this->iPlayerID = iPlayerID;
      this->iCharNo = pFounder->iCharNo;
      v16 = v15->IsOptionAsset(v15);
      v13->SetOptionAsset(this, v16);
      this->iAssetID = this->pParent->GetAssetID(this->pParent);
      iCAngleBuf = iCAngle;
      if ( iCAngle >= 0 )
      {
        this->iCAngle = iCAngle;
      }
      else if ( (this->effectData.iOptionFlag & 0x1000) != 0 )
      {
        this->iCAngle = pParent->iCAngle == 0;
        iCAngleBuf = pParent->iCAngleBuf == 0;
      }
      else
      {
        this->iCAngle = pParent->iCAngle;
        iCAngleBuf = pParent->iCAngleBuf;
      }
      this->iCAngleBuf = iCAngleBuf;
      this->bParentBind = this->effectData.iOptionFlag & 1;
      this->iParentInitActNo = pParent->iActNo;
      this->bParentInitActDataChanged = pParent->IsActionDataChanged(pParent);
      this->bBlackoutInvalid = 1;
    }
    else
    {
      v18 = 0;
      this->iPlayerID = -1;
      this->iCharNo = 999;
      if ( iCAngle >= 0 )
        v18 = iCAngle;
      this->iAssetID = -1;
      this->iCAngle = v18;
      this->iCAngleBuf = v18;
      this->bParentBind = 0;
      this->iParentInitActNo = 0;
      *(_WORD *)&this->bParentInitActDataChanged = 0;
    }
    this->pEffect = 0i64;
    *(_WORD *)&this->bCleanupEffect = 0;
    this->ctrlData.bSetData = 0;
    this->ctrlReqData.bSetData = 0;
    *(_QWORD *)this->mWorld.m = 1065353216i64;
    this->mWorld.m[4] = 0.0;
    *(_QWORD *)&this->mWorld.m[8] = 0i64;
    *(_QWORD *)&this->mWorld.m[12] = 0i64;
    *(_QWORD *)&this->mWorld.m[5] = 1065353216i64;
    *(_QWORD *)&this->mWorld.m[2] = 0i64;
    *(_QWORD *)&this->mWorld.m[10] = 1065353216i64;
    this->mWorld.m[14] = 0.0;
    this->mWorld.m[7] = 0.0;
    this->mWorld.m[15] = 1.0;
    this->iActorStat = 0;
    *(_QWORD *)&this->effectType = 0i64;
    this->xDelayCreateCount.value = 0;
    v19 = this->__vftable;
    iActNo = (unsigned int)this->effectData.iActNo;
    this->fEffectAlpha = 1.0;
    v19->ActionChangeReq(this, iActNo, 0);
    this->StateChangeReq(this, 1);
  }
  else
  {
    this->systemStat = INIT;
  }
}

void __fastcall ActorEffect::PreUpdate(ActorEffect *this)
{
  ActorEffect_vtbl *v2; // rax
  char v3; // [rsp+30h] [rbp+8h] BYREF

  this->bActionFreeze = this->IsDeadEffect(this);
  if ( this->IsDelayCreate(this) )
  {
    v2 = this->__vftable;
    this->bActionFreeze = 1;
    this->xDelayCreateCount.value -= v2->GetActionSystemSpeedFix(this, (Fix32 *)&v3)->value;
    if ( this->xDelayCreateCount.value < 0 )
      this->xDelayCreateCount.value = 0;
  }
}

void __fastcall ActorEffect::PrevDataSet(ActorEffect *this)
{
  Actor *pParent; // rax
  Actor::SYSTEM_STAT systemStat; // eax
  CharaActionData::EffectAnime effectAnime; // xmm0

  Actor::PrevDataSet(this);
  this->ctrlData.bSetData = 0;
  *(_QWORD *)this->ctrlData.bsFuncFlag._Array = 0i64;
  pParent = this->pParent;
  if ( pParent )
  {
    systemStat = pParent->systemStat;
    if ( systemStat == INIT || systemStat == ERASE )
      this->pParent = 0i64;
  }
  effectAnime = this->effectAnime;
  *(_WORD *)&this->bCleanupEffect = 0;
  this->bSkipSyncPosture = 1;
  this->effectAnimePrev = effectAnime;
}

void __fastcall ActorEffect::RequestEffectControl(
        ActorEffect *this,
        const CharaActionData::Effect::Type::Control *reqDat)
{
  std::bitset<61>::reference *v2; // rax
  __int64 v3; // r9
  unsigned __int64 Mypos; // rdx
  std::bitset<61>::reference result; // [rsp+28h] [rbp-20h] BYREF

  if ( !this->ctrlReqData.bSetData )
    *(_QWORD *)this->ctrlReqData.bsFuncFlag._Array = 0i64;
  v2 = std::bitset<21>::operator[]((std::bitset<61> *)&this->ctrlReqData.bsFuncFlag, &result, reqDat->iFuncID);
  Mypos = v2->_Mypos;
  if ( Mypos >= 9 )
    std::_Xout_of_range("invalid bitset<N> position");
  *((_DWORD *)v2->_Pbitset->_Array + (Mypos >> 5)) |= 1 << (Mypos & 0x1F);
  *(_BYTE *)(v3 + 964) = 1;
}

void __fastcall ActorEffect::SetEffectAnime(ActorEffect *this, const CharaActionData::EffectAnime *effectAnime)
{
  int v3; // esi
  Effect *pEffect; // rcx
  int iResultSubType; // eax
  bool v7; // zf
  ActorEffect_vtbl *v8; // rax
  EffectDataListManager *v9; // rcx
  ActionSystem *pActSys; // rbp
  ActorEffect_vtbl *v11; // rax
  Effect *Effect; // rax

  v3 = 0;
  this->effectAnime = *effectAnime;
  pEffect = this->pEffect;
  if ( pEffect
    && (this->effectAnimePrev.iEffectID != effectAnime->iEffectID
     || this->effectAnimePrev.iListFileID != effectAnime->iListFileID) )
  {
    pEffect->terminate(pEffect);
    this->pEffect = 0i64;
  }
  if ( effectAnime->iEffectID >= 0 && effectAnime->fFrame >= 0.0 && !this->pEffect )
  {
    iResultSubType = this->iResultSubType;
    if ( iResultSubType <= 0 )
    {
      pActSys = this->pActSys;
      if ( effectAnime->iListFileID != 1 )
      {
        v7 = !this->IsOptionAsset(this);
        v11 = this->__vftable;
        v3 = v7 ? ((__int64 (__fastcall *)(ActorEffect *))v11->GetFounderPlayerID)(this) + 1 : (unsigned int)v11->GetFounderPlayerID(this)
                                                                                             + 3;
        if ( v3 >= 5 )
          return;
      }
      v9 = pActSys->pEffectMgr[v3];
      goto LABEL_20;
    }
    if ( effectAnime->iListFileID != 1 )
    {
      v7 = iResultSubType == 1;
      v8 = this->__vftable;
      if ( v7 )
      {
        v9 = this->pActSys->pEffectMgr[2 - (unsigned int)(v8->GetFounderPlayerID(this) != 0)];
LABEL_20:
        if ( v9 )
        {
          Effect = EffectDataListManager::createEffect(v9, effectAnime->iEffectID);
          this->pEffect = Effect;
          if ( Effect )
          {
            if ( effectAnime->fFrame > 0.0 )
              this->bCleanupEffect = 1;
            Effect->initialize(Effect);
          }
        }
        return;
      }
      v3 = 4 - (v8->GetFounderPlayerID(this) != 0);
    }
    v9 = this->pActSys->pEffectMgr[v3];
    goto LABEL_20;
  }
}

void __fastcall ActorShot::SetEffectCreateData(ActorShot *this, const CharaActionData::Effect::Type::Set *setData)
{
  if ( ((unsigned __int8 (__fastcall *)(ActorShot *))this->_checkEffectSetTerm)(this) )
    ActorEffect::CreateActorEffect(setData, this, this->pFounder, this->pOwner);
}

void __fastcall ActorEffect::UpdatePosture(ActorEffect *this)
{
  __int64 v2; // r8
  _BOOL8 v3; // r9
  float v4; // xmm11_4
  float v5; // xmm13_4
  float v6; // xmm14_4
  float v7; // xmm13_4
  float v8; // xmm14_4
  float x; // xmm0_4
  float w; // xmm7_4
  float z; // xmm7_4
  float v12; // xmm8_4
  float y; // xmm13_4
  float v14; // xmm7_4
  float v15; // xmm10_4
  float v16; // xmm11_4
  float v17; // xmm14_4
  float v18; // xmm1_4
  float v19; // xmm8_4
  float v20; // xmm8_4
  float v21; // xmm10_4
  float v22; // xmm11_4
  float v23; // xmm0_4
  float v24; // xmm13_4
  float v25; // xmm8_4
  float v26; // xmm10_4
  float v27; // xmm11_4
  float v28; // xmm0_4
  bool bParentBind; // al
  bool v30; // zf
  float v31; // xmm2_4
  float v32; // xmm1_4
  float v33; // xmm3_4
  Tween::EasingType v34; // xmm7_4
  float v35; // xmm8_4
  float v36; // xmm10_4
  Actor *v37; // rcx
  float v38; // xmm0_4
  ActionSystem *v39; // rax
  ActionSystem *v40; // rax
  float v41; // xmm12_4
  float v42; // xmm12_4
  float v43; // xmm7_4
  float v44; // xmm8_4
  float v45; // xmm10_4
  float v46; // xmm11_4
  float v47; // xmm0_4
  ActorCharaBase *pOwner; // rax
  float v49; // xmm7_4
  float v50; // xmm7_4
  float v51; // xmm10_4
  float v52; // xmm11_4
  float v53; // xmm12_4
  float v54; // xmm7_4
  float v55; // xmm0_4
  Actor *pParent; // rcx
  __int64 v57; // rdx
  float v58; // xmm0_4
  float v59; // xmm13_4
  float v60; // xmm14_4
  OGLQuat q; // [rsp+20h] [rbp-E0h] BYREF
  OGLQuat v62; // [rsp+30h] [rbp-D0h] BYREF
  float rfX; // [rsp+40h] [rbp-C0h] BYREF
  float rfY; // [rsp+44h] [rbp-BCh] BYREF
  float rfZ; // [rsp+48h] [rbp-B8h] BYREF
  float v66; // [rsp+4Ch] [rbp-B4h]
  OGLMatrix In1; // [rsp+50h] [rbp-B0h] BYREF
  OGLQuat v68; // [rsp+90h] [rbp-70h] BYREF
  OGLMatrix result; // [rsp+A0h] [rbp-60h] BYREF

  memset(&In1, 0, sizeof(In1));
  if ( this->pEffect && this->effectAnime.fFrame >= 0.0 )
  {
    if ( this->GetEffectType(this) == CROUCH_GUARD )
    {
      *(_QWORD *)this->mWorld.m = 1065353216i64;
      this->mWorld.m[4] = 0.0;
      *(_QWORD *)&this->mWorld.m[8] = 0i64;
      *(_QWORD *)&this->mWorld.m[12] = 0i64;
      *(_QWORD *)&this->mWorld.m[2] = 0i64;
      this->mWorld.m[14] = 0.0;
      this->mWorld.m[7] = 0.0;
      *(_QWORD *)&this->mWorld.m[5] = 1065353216i64;
      *(_QWORD *)&this->mWorld.m[10] = 1065353216i64;
      this->mWorld.m[15] = 1.0;
      return;
    }
    v4 = FLOAT_0_5;
    v5 = this->vPos.x + this->vOff.x;
    v6 = this->vPos.y + this->vOff.y;
    v66 = (float)(this->vPos.z + this->vOff.z) + this->vBaseOff.z;
    v7 = v5 + this->vBaseOff.x;
    v62 = (OGLQuat)_xmm;
    v8 = v6 + this->vBaseOff.y;
    x = this->vAngle.x;
    rfY = v8;
    rfX = v7;
    if ( x == 0.0 && this->vAngle.y == 0.0 && this->vAngle.z == 0.0 )
    {
      w = v62.w;
    }
    else
    {
      z = this->vAngle.z;
      v12 = this->vAngle.x;
      y = this->vAngle.y;
      if ( z == 0.0 )
      {
        w = v62.w;
      }
      else
      {
        v14 = (float)((float)(z * -3.1415927) / 180.0) * 0.5;
        q.w = cosf(v14);
        *(_QWORD *)&q.x = 0i64;
        q.z = sinf(v14);
        OGLQuat::multiply(&v62, &q);
        v15 = v62.y;
        v16 = v62.x;
        v17 = v62.z;
        w = v62.w;
        v18 = sqrtf((float)((float)((float)(v15 * v15) + (float)(v16 * v16)) + (float)(v17 * v17)) + (float)(w * w));
        if ( v18 != 0.0 )
        {
          w = w * (float)(1.0 / v18);
          v62.x = v16 * (float)(1.0 / v18);
          v62.y = v15 * (float)(1.0 / v18);
          v62.z = v17 * (float)(1.0 / v18);
          v62.w = w;
        }
        v4 = FLOAT_0_5;
        v8 = rfY;
      }
      if ( v12 != 0.0 )
      {
        v19 = (float)((float)(v12 * -3.1415927) / 180.0) * v4;
        q.w = cosf(v19);
        q.x = sinf(v19);
        *(_QWORD *)&q.y = 0i64;
        OGLQuat::multiply(&v62, &q);
        v20 = v62.y;
        v21 = v62.x;
        v22 = v62.z;
        w = v62.w;
        v23 = sqrtf((float)((float)((float)(v20 * v20) + (float)(v21 * v21)) + (float)(v22 * v22)) + (float)(w * w));
        if ( v23 != 0.0 )
        {
          w = w * (float)(1.0 / v23);
          v62.x = v21 * (float)(1.0 / v23);
          v62.y = v20 * (float)(1.0 / v23);
          v62.z = v22 * (float)(1.0 / v23);
          v62.w = w;
        }
      }
      if ( y != 0.0 )
      {
        v24 = (float)((float)(y * -3.1415927) / 180.0) * 0.5;
        q.w = cosf(v24);
        q.x = 0.0;
        q.y = sinf(v24);
        q.z = 0.0;
        OGLQuat::multiply(&v62, &q);
        v25 = v62.y;
        v26 = v62.x;
        v27 = v62.z;
        w = v62.w;
        v28 = sqrtf((float)((float)((float)(v25 * v25) + (float)(v26 * v26)) + (float)(v27 * v27)) + (float)(w * w));
        if ( v28 != 0.0 )
        {
          v62.x = v26 * (float)(1.0 / v28);
          v62.y = v25 * (float)(1.0 / v28);
          v62.z = v27 * (float)(1.0 / v28);
          w = w * (float)(1.0 / v28);
        }
      }
      v7 = rfX;
      v4 = FLOAT_0_5;
    }
    bParentBind = this->bParentBind;
    v62.w = w * -1.0;
    if ( !bParentBind )
      goto LABEL_61;
    if ( (this->effectData.iOptionFlag & 0x100) != 0 )
    {
      OGLMatrix::rotationQuaternion(&In1, &v62);
      ActorEffect::GetEffectBindMatrix(this, &result);
      v30 = this->iCAngle == 0;
      v31 = result.m[0];
      v32 = result.m[2] * -1.0;
      v33 = result.m[10] * -1.0;
      result.m[2] = result.m[2] * -1.0;
      result.m[6] = result.m[6] * -1.0;
      result.m[10] = result.m[10] * -1.0;
      if ( !v30 )
      {
        v31 = result.m[0] * -1.0;
        result.m[1] = result.m[1] * -1.0;
        result.m[0] = result.m[0] * -1.0;
        result.m[2] = v32 * -1.0;
      }
      if ( v31 != 1.0
        || result.m[5] != 1.0
        || v33 != 1.0
        || result.m[12] != 0.0
        || result.m[13] != 0.0
        || result.m[14] != 0.0 )
      {
        OGLMatrixRotateOnlyCalc(&In1, &result);
      }
      In1.m[8] = In1.m[8] * -1.0;
      In1.m[9] = In1.m[9] * -1.0;
      In1.m[10] = In1.m[10] * -1.0;
LABEL_67:
      pParent = this->pParent;
      if ( pParent )
      {
        if ( (this->effectData.iOptionFlag & 0x8000) != 0 )
          this->fEffectAlpha = pParent->GetBaseAnimeAlpha(pParent);
      }
LABEL_70:
      *(_QWORD *)this->mWorld.m = 1065353216i64;
      *(_QWORD *)&this->mWorld.m[5] = 1065353216i64;
      *(_QWORD *)&this->mWorld.m[10] = 1065353216i64;
      this->mWorld.m[15] = 1.0;
      *(_QWORD *)this->mWorld.m = 0i64;
      *(_QWORD *)&this->mWorld.m[2] = 0i64;
      *(_QWORD *)&this->mWorld.m[4] = 0i64;
      *(_QWORD *)&this->mWorld.m[6] = 0i64;
      *(_QWORD *)&this->mWorld.m[8] = 0i64;
      *(_QWORD *)&this->mWorld.m[10] = 0i64;
      *(_QWORD *)&this->mWorld.m[12] = 0i64;
      *(_QWORD *)&this->mWorld.m[14] = 0i64;
      this->mWorld.m[0] = this->vScale.x;
      this->mWorld.m[5] = this->vScale.y;
      this->mWorld.m[10] = this->vScale.z;
      this->mWorld.m[15] = 1.0;
      OGLMatrix::multiplyFastRotate(&this->mWorld, &this->mWorld, &In1);
      v58 = v66 + *(float *)(v57 + 56);
      v59 = v7 + *(float *)(v57 + 48);
      v60 = v8 + *(float *)(v57 + 52);
      *(_DWORD *)(v57 + 60) = 1065353216;
      *(float *)(v57 + 56) = v58;
      *(float *)(v57 + 48) = v59;
      *(float *)(v57 + 52) = v60;
      return;
    }
    if ( (this->effectData.iOptionFlag & 0x80000) == 0 )
    {
LABEL_61:
      pOwner = this->pOwner;
      v49 = FLOAT_1_5707964;
      q = (OGLQuat)_xmm;
      if ( pOwner )
        v49 = (float)((float)(pOwner->vAngle.y * 3.1415927) / 180.0) + 1.5707964;
      v50 = v49 * v4;
      v68.w = cosf(v50);
      v68.x = 0.0;
      v68.y = sinf(v50);
      v68.z = 0.0;
      OGLQuat::multiply(&q, &v68);
      v51 = q.y;
      v52 = q.x;
      v53 = q.z;
      v54 = q.w;
      v55 = sqrtf((float)((float)((float)(v51 * v51) + (float)(v52 * v52)) + (float)(v53 * v53)) + (float)(v54 * v54));
      if ( v55 != 0.0 )
      {
        q.x = v52 * (float)(1.0 / v55);
        q.y = v51 * (float)(1.0 / v55);
        q.z = v53 * (float)(1.0 / v55);
        v54 = v54 * (float)(1.0 / v55);
      }
      q.w = v54 * -1.0;
      OGLQuat::multiply(&v62, &q);
      OGLMatrix::rotationQuaternion(&In1, &v62);
      if ( this->iCAngle )
      {
        In1.m[0] = In1.m[0] * -1.0;
        In1.m[4] = In1.m[4] * -1.0;
        In1.m[8] = In1.m[8] * -1.0;
      }
      goto LABEL_67;
    }
    LOBYTE(v2) = 1;
    ActorEffect::GetEffectSetPos(this, (OGLVec3 *)&v62, v2, v3);
    v34 = FLOAT_5_0;
    switch ( this->iCharNo )
    {
      case 0xE:
        v34 = FLOAT_7_0;
        break;
      case 0x18:
      case 0x23:
      case 0x27:
        v34 = FLOAT_6_0;
        break;
      case 0x2B:
        *(float *)&v34 = FLOAT_9_0;
        break;
      case 0x32:
      case 0x35:
        *(float *)&v34 = FLOAT_13_0;
        break;
      case 0x39:
        v34 = FLOAT_8_0;
        break;
      default:
        break;
    }
    ActorEffect::GetEffectBindMatrix(this, &result);
    OGLQuat::matrixToQuaternion(&q, &result);
    q.w = q.w * -1.0;
    OGLQuat::getRotateEulerFast(&q, &rfX, &rfY, &rfZ);
    v35 = (float)(rfX * 180.0) / 3.1415927;
    v36 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v35) & _xmm)
                                                    - (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)(rfZ * 180.0) / 3.1415927)) & _xmm))) & _xmm);
    this->GetFounderPlayerID(this);
    if ( v62.y >= 1.0 || v35 < 165.0 && v35 > 15.0 || v36 > *(float *)&v34 )
    {
      if ( v62.y >= 1.5 )
      {
LABEL_53:
        this->effectAnime.fFrame = -1.0;
        return;
      }
      v38 = this->fEffectAlpha - v4;
      this->fEffectAlpha = v38;
      if ( v38 <= 0.0 )
      {
LABEL_52:
        this->fEffectAlpha = 0.0;
        goto LABEL_53;
      }
    }
    else
    {
      v37 = this->pParent;
      if ( v37 )
        this->fEffectAlpha = v37->GetBaseAnimeAlpha(v37);
      else
        this->fEffectAlpha = 1.0;
    }
    v39 = this->GetActionSystem(this);
    if ( (unsigned int)(v39->actBlack.data[v39->actBlack.iPriTarget].type - 5) <= 1 )
    {
      v40 = this->GetActionSystem(this);
      this->fEffectAlpha = (float)((float)(v40->actBlack.data[v40->actBlack.iPriTarget].fFadeAlpha / 0.89999998)
                                 * (float)(0.0 - this->fEffectAlpha))
                         + this->fEffectAlpha;
    }
    if ( this->fEffectAlpha >= 0.1 )
    {
      if ( v35 < -90.099998 || v35 >= 90.0 )
        v41 = -3.1415927 - rfY;
      else
        v41 = rfY;
      v42 = v41 * v4;
      q = (OGLQuat)_xmm;
      v62.w = cosf(v42);
      v62.x = 0.0;
      v62.y = sinf(v42);
      v62.z = 0.0;
      OGLQuat::multiply(&q, &v62);
      v43 = q.y;
      v44 = q.x;
      v45 = q.z;
      v46 = q.w;
      v47 = sqrtf((float)((float)((float)(v43 * v43) + (float)(v44 * v44)) + (float)(v45 * v45)) + (float)(v46 * v46));
      if ( v47 != 0.0 )
      {
        q.x = v44 * (float)(1.0 / v47);
        q.y = v43 * (float)(1.0 / v47);
        q.z = v45 * (float)(1.0 / v47);
        q.w = v46 * (float)(1.0 / v47);
      }
      OGLMatrix::rotationQuaternion(&In1, &q);
      goto LABEL_70;
    }
    goto LABEL_52;
  }
}

void __fastcall ActorEffect::_addOffset(ActorEffect *this, OGLVec3 *off, const Actor *pActor)
{
  float fPosX; // xmm0_4
  float fPosZ; // xmm0_4

  if ( (this->effectData.iOptionFlag & 4) != 0 || !pActor )
  {
    fPosX = this->effectData.fPosX;
  }
  else
  {
    fPosX = this->effectData.fPosX;
    if ( pActor->iCAngle )
      LODWORD(fPosX) ^= _xmm;
  }
  off->x = fPosX + off->x;
  off->y = this->effectData.fPosY + off->y;
  if ( this->IsDirectionInfluenceZ(this) && pActor )
  {
    fPosZ = this->effectData.fPosZ;
    if ( pActor->iCAngle )
      LODWORD(fPosZ) ^= _xmm;
  }
  else
  {
    fPosZ = this->effectData.fPosZ;
  }
  off->z = fPosZ + off->z;
}

