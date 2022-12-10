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
#include "dev/kof/master/development/source/baseproject/jni/game/player/actor.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actionblackout.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/check/cameracheck.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglvec3.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actorobject.cpp"

ActorShot::~ActorShot(); // 0x140193400
void ActorShot::CreateInit(); // 0x14019C9E0
void ActorShot::Dispose(); // 0x14019CA90
void ActorShot::ParamInit(const CharaActionData::Shot::Type::Fire & shotData, Actor * pParent, ActorCharaBase * pFounder, ActorChara * pOwner); // 0x14019CAC0
OGLVec3 ActorShot::GetShotFirePos(); // 0x14019CD30
void ActorShot::PrevDataSet(); // 0x14019CF70
void ActorShot::PreUpdate(); // 0x14019CFC0
void ActorShot::BecomUpdate(); // 0x14019D0C0
void ActorShot::ActionChanged(); // 0x14019D7D0
void ActorShot::ActionParamInit(); // 0x14019D7E0
void ActorShot::ActionFlagCheck(); // 0x14019D8E0
void ActorShot::MainUpdate(); // 0x14019D9C0
void ActorShot::LateUpdate(); // 0x14019DC40
void ActorShot::CancelBlackout(); // 0x14002E7C0
bool ActorShot::_branchIsShotAttackHitOrGuard(float param); // 0x14019DD50
bool ActorShot::_branchIsShotAttackHit(float param); // 0x14019DE10
bool ActorShot::_branchIsShotAttackGuard(float param); // 0x14019DE80
bool ActorShot::_branchIsShotFlag1(float param); // 0x14019DEF0
bool ActorShot::_branchIsShotFlag2(float param); // 0x14019DF60
bool ActorShot::_branchIsShotFlag3(float param); // 0x14019DFD0
bool ActorShot::_branchIsShotFlag4(float param); // 0x14019E040
bool ActorShot::_branchIsShotAlive(float param); // 0x14019E0B0
bool ActorShot::_branchIsShotNotAlive(float param); // 0x14019E120
void ActorShot::BranchCheck(); // 0x14019E190
bool ActorShot::IsBlackStop(); // 0x14019E260
OGLVec3 ActorShot::GetCenterPosition(); // 0x14019E300
OGLVec3 ActorShot::GetBindCenterPosition(); // 0x14019E320
void ActorShot::SetActionBranchKey(long branchKey); // 0x14019E380
long ActorShot::GetFounderPlayerID(); // 0x14019B6C0
bool ActorShot::IsMotionCameraInvisibleActor(); // 0x14019E3F0
bool ActorShot::IsInvisible(); // 0x14019E490
bool ActorShot::IsModelDraw(); // 0x14004BBE0
void ActorShot::SetShotFireData(const CharaActionData::Shot::Type::Fire & fireData); // 0x14019E4C0
void ActorShot::SetEffectCreateData(const CharaActionData::Effect::Type::Set & setData); // 0x14019B790
void ActorShot::SetAttackGuard(bool flag); // 0x14019E4E0
void ActorShot::SetAttackHit(bool flag); // 0x14019E520
bool ActorShot::IsDisableReflectShot(); // 0x14019E560
bool ActorShot::IsShotDeadOutRange(); // 0x14019E590
bool ActorShot::IsShotEraseOutRange(); // 0x14019E660
void ActorShot::CheckWeaponLine(); // 0x14019E730
void <lambda_0b22e2e50bb6c6f88b870c015c48df93>::operator()(Actor & actor); // 0x14019E800
class ActorShot::CheckWeaponLine::__l4::<lambda_0b22e2e50bb6c6f88b870c015c48df93>
{
public:
	void operator()(Actor &);
	<lambda_0b22e2e50bb6c6f88b870c015c48df93>(ActorShot::CheckWeaponLine::__l4::<lambda_0b22e2e50bb6c6f88b870c015c48df93> &);
	<lambda_0b22e2e50bb6c6f88b870c015c48df93>();
	<lambda_0b22e2e50bb6c6f88b870c015c48df93>(ActorShot *, const CharaActionData::ActionLineFrame * &);
private:
	ActorShot * __this; // 0x0
	const CharaActionData::ActionLineFrame * & pFrame; // 0x8
public:
	ActorShot::CheckWeaponLine::__l4::<lambda_0b22e2e50bb6c6f88b870c015c48df93> & operator=(const ActorShot::CheckWeaponLine::__l4::<lambda_0b22e2e50bb6c6f88b870c015c48df93> &);
};
std::piecewise_construct_t std::piecewise_construct; // 0x1408A061C
void ActorShot::RequestShotControl(const CharaActionData::Shot::Type::Control & reqDat); // 0x14019E880
void ActorShot::SetHitStop(long hitStop, bool bDelay); // 0x14019E910
OGLVec3 ActorShot::GetPerentMoveValue(); // 0x14019E9B0
OGLVec3 ActorShot::GetPerentAddValue(); // 0x14019EA50
ActorShot * ActorShot::CreateActorShot(const CharaActionData::Shot::Type::Fire & shotData, Actor * pParent, ActorCharaBase * pFounder, ActorChara * pOwner); // 0x14019EAF0
ActorShot * ActorShot::CreateEraseShot(ActorShot * pParentShot, long iEraseActNo, long iEraseStat); // 0x14019EB90
void ActorShot::EraseShotInit(ActorShot * pParentShot, long iEraseActNo, long iEraseStat); // 0x14019EC20//decompilation failure at 1408A061C!
void __fastcall ActorShot::~ActorShot(ActorWeapon *this)
{
  this->__vftable = (ActorWeapon_vtbl *)&Actor::`vftable';
}

void __fastcall lambda_0b22e2e50bb6c6f88b870c015c48df93_::operator()(Actor *actor, _DWORD *a2)
{
  __int64 v4; // rdx

  if ( (*(unsigned int (__fastcall **)(_DWORD *))(*(_QWORD *)a2 + 440i64))(a2) == 3
    && HIDWORD(actor->ModelSyncPosture) == a2[97]
    && actor->IsAngleChangePostureCalc == (bool (__fastcall *)(Actor *))*((_QWORD *)a2 + 101) )
  {
    v4 = **(_QWORD **)&actor->iPriority;
    if ( *(__int16 *)(v4 + 6) == a2[206] )
    {
      (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)a2 + 1552i64))(a2, v4 + 4);
      (*(void (__fastcall **)(_DWORD *, Actor_vtbl *))(*(_QWORD *)a2 + 1560i64))(a2, actor->__vftable);
    }
  }
}

// attributes: thunk
void __fastcall ActorShot::ActionChanged(ActorShot *this)
{
  ActorObject::ActionChanged(this);
}

void __fastcall ActorShot::ActionFlagCheck(ActorShot *this)
{
  int iActFlg2; // eax
  Actor *pParent; // rax
  Actor::SYSTEM_STAT systemStat; // ecx
  int iCAngle; // ecx
  int v6; // eax
  float v7; // xmm1_4
  float x; // xmm0_4
  float v9; // xmm1_4

  ActorObject::ActionFlagCheck(this);
  iActFlg2 = this->iActFlg2;
  if ( (iActFlg2 & 0x20) != 0 )
    this->bParentBind = 0;
  if ( (iActFlg2 & 0x40) != 0 )
    this->shotData.iOptionFlag &= ~0x10u;
  if ( (iActFlg2 & 0x80u) != 0 )
    this->shotData.iOptionFlag &= ~0x20u;
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
          iCAngle = this->iCAngle;
          this->iCAnglePrev = iCAngle;
          v6 = pParent->iCAngle;
          this->iCAngle = v6;
          if ( v6 != iCAngle )
          {
            LODWORD(v7) = LODWORD(this->vBuf.x) ^ _xmm;
            LODWORD(this->vMov.x) ^= _xmm;
            x = this->vAdd.x;
            this->vBuf.x = v7;
            v9 = v7 + this->vBasePosPrev.x;
            LODWORD(this->vAdd.x) = LODWORD(x) ^ _xmm;
            this->vPos.x = v9;
          }
        }
      }
    }
  }
}

void __fastcall ActorShot::ActionParamInit(ActorShot *this)
{
  std::bitset<61>::reference *v2; // rax
  unsigned __int64 Mypos; // rcx
  std::bitset<61>::reference *v4; // rax
  unsigned __int64 v5; // rdx
  std::bitset<61>::reference result; // [rsp+28h] [rbp-20h] BYREF

  Actor::ActionParamInit(this);
  this->bsCollisionFlag._Array[0] = 0;
  if ( this->iShotVital > 0 )
  {
    this->SetAttackGuard(this, 0);
    this->SetAttackHit(this, 0);
    v2 = std::bitset<21>::operator[]((std::bitset<61> *)&this->bsAttackFlag, &result, 3ui64);
    Mypos = v2->_Mypos;
    if ( Mypos >= 6 )
      std::_Xout_of_range("invalid bitset<N> position");
    *((_DWORD *)v2->_Pbitset->_Array + (Mypos >> 5)) &= ~(1 << (v2->_Mypos & 0x1F));
    v4 = std::bitset<21>::operator[]((std::bitset<61> *)&this->bsAttackFlag, &result, 5ui64);
    v5 = v4->_Mypos;
    if ( v5 >= 6 )
      std::_Xout_of_range("invalid bitset<N> position");
    *((_DWORD *)v4->_Pbitset->_Array + (v5 >> 5)) &= ~(1 << (v5 & 0x1F));
    this->bNextHitWait = 0;
    this->iShotVitalPrev = this->iShotVital;
  }
}

void __fastcall ActorShot::BecomUpdate(ActorShot *this)
{
  bool v2; // si
  std::bitset<61>::reference *v3; // rax
  unsigned __int64 Mypos; // rdx
  __int64 v5; // rcx
  int v6; // eax
  std::bitset<61>::reference *v7; // rax
  unsigned __int64 v8; // rcx
  __int64 v9; // rdx
  int v10; // eax
  std::bitset<61>::reference *v11; // rax
  unsigned __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // eax
  Actor *pParent; // rcx
  Actor *v16; // rcx
  ActorChara *v17; // rax
  int iShotVital; // eax
  unsigned int v19; // ecx
  int iFastDieActNo; // edi
  __int64 v21; // rdx
  unsigned int v22; // eax
  int iHitActNo; // edx
  int v24; // er8
  unsigned int v25; // eax
  Actor *v26; // rcx
  Actor *v27; // rcx
  __int64 v28; // rdx
  int iOptionFlag; // eax
  Actor *v30; // rcx
  Actor::SYSTEM_STAT systemStat; // eax
  std::bitset<9>::reference *v32; // rax
  std::bitset<9>::reference *v33; // rax
  __int64 iRestHitCountActNo; // rdx
  Actor *v35; // rcx
  Actor::SYSTEM_STAT v36; // eax
  std::bitset<61>::reference result; // [rsp+28h] [rbp-20h] BYREF

  v2 = 0;
  if ( this->ctrlReqData.bSetData )
  {
    this->ctrlData = this->ctrlReqData;
    this->ctrlReqData.bSetData = 0;
    v3 = std::bitset<21>::operator[]((std::bitset<61> *)&this->ctrlData.bsFuncFlag, &result, 5ui64);
    Mypos = v3->_Mypos;
    if ( Mypos >= 9 )
      std::_Xout_of_range("invalid bitset<N> position");
    v5 = v3->_Mypos & 0x1F;
    v6 = *((_DWORD *)v3->_Pbitset->_Array + (Mypos >> 5));
    if ( _bittest(&v6, v5) )
      this->bParentBind = 0;
    v7 = std::bitset<21>::operator[]((std::bitset<61> *)&this->ctrlData.bsFuncFlag, &result, 7ui64);
    v8 = v7->_Mypos;
    if ( v8 >= 9 )
      std::_Xout_of_range("invalid bitset<N> position");
    v9 = v7->_Mypos & 0x1F;
    v10 = *((_DWORD *)v7->_Pbitset->_Array + (v8 >> 5));
    if ( _bittest(&v10, v9) )
      this->shotData.iOptionFlag &= ~0x10u;
    v11 = std::bitset<21>::operator[]((std::bitset<61> *)&this->ctrlData.bsFuncFlag, &result, 8ui64);
    v12 = v11->_Mypos;
    if ( v12 >= 9 )
      std::_Xout_of_range("invalid bitset<N> position");
    v13 = v11->_Mypos & 0x1F;
    v14 = *((_DWORD *)v11->_Pbitset->_Array + (v12 >> 5));
    if ( _bittest(&v14, v13) )
      this->shotData.iOptionFlag &= ~0x20u;
  }
  if ( this->bParentBind )
  {
    pParent = this->pParent;
    if ( pParent )
    {
      if ( pParent->GetActorType(pParent) == SHOT )
      {
        v16 = this->pParent;
        v17 = *(ActorChara **)&v16[1].iDrawPriSub;
        if ( v17 != this->pOwner )
          this->pOwner = v17;
        this->pTarget = v16->pTarget;
        if ( (HIDWORD(v16[1].__vftable) & 0x20) != 0 )
        {
          this->bReflectShot = 1;
          this->iPlayerID = v16->iPlayerID;
        }
      }
    }
  }
  if ( this->IsDeadShot(this) || !this->iActorStat )
  {
    if ( this->iActorStat == 2
      && (this->IsShotEraseOutRange(this) || SLOBYTE(this->shotData.iOptionFlag) < 0 && this->vPos.y <= 0.0) )
    {
      goto LABEL_109;
    }
    goto LABEL_106;
  }
  iShotVital = this->iShotVital;
  if ( iShotVital >= 1 )
  {
    if ( iShotVital >= this->iShotVitalPrev || (this->shotData.iOptionFlag & 0x1000) == 0 )
    {
LABEL_47:
      v25 = this->bsCollisionFlag._Array[0];
      if ( (v25 & 0xF) != 0 )
      {
        if ( (v25 & 0x4000) != 0 )
        {
          iFastDieActNo = this->eventData.iFastDieActNo;
          v28 = 6i64;
        }
        else
        {
          iFastDieActNo = this->eventData.iEraseActNo;
          v28 = 3i64;
        }
        goto LABEL_77;
      }
      v26 = this->pParent;
      if ( !v26
        || (this->shotData.iOptionFlag & 0x10) == 0
        || v26->iActNo == this->iParentInitActNo && v26->IsActionDataChanged(v26) == this->bParentInitActDataChanged )
      {
        if ( (this->shotData.iOptionFlag & 0x20) == 0 || !this->pOwner->IsDamaged(this->pOwner) )
        {
          iOptionFlag = this->shotData.iOptionFlag;
          if ( (iOptionFlag & 0x80u) != 0 && this->vPos.y <= 0.0 )
          {
            iFastDieActNo = this->eventData.iGroundDieActNo;
            v28 = 7i64;
            goto LABEL_77;
          }
          if ( (iOptionFlag & 0x100) != 0 && this->IsWallHit(this) )
          {
            iFastDieActNo = this->eventData.iWallDieActNo;
            v28 = 8i64;
            goto LABEL_77;
          }
          if ( !this->bParentBind && !this->bPositionInit
            || (v30 = this->pParent) != 0i64
            && (systemStat = v30->systemStat) != INIT
            && systemStat != ERASE
            && (v30->GetActorType(v30) != SHOT
             || !((unsigned __int8 (__fastcall *)(Actor *))this->pParent->ActorObject::Actor::__vftable[1].GetActionPlayRateFix)(this->pParent)) )
          {
            if ( !this->bActionEnd || this->iActReserveNo >= 0 || this->iActReserveFrame >= 0 )
              goto LABEL_83;
            iFastDieActNo = this->eventData.iDieActNo;
            v28 = 6i64;
            goto LABEL_77;
          }
        }
      }
      else if ( (((__int64 (__fastcall *)(Actor *, _QWORD, _QWORD))this->pParent->GetActionOptionFlag)(
                   this->pParent,
                   (unsigned int)this->pParent->iActNo,
                   0i64) & 0x10) != 0 )
      {
        v27 = this->pParent;
        this->iParentInitActNo = v27->iActNo;
        this->bParentInitActDataChanged = v27->IsActionDataChanged(v27);
        goto LABEL_83;
      }
      iFastDieActNo = this->eventData.iDieActNo;
      v28 = 6i64;
LABEL_77:
      this->StateChangeReq(this, v28);
      goto LABEL_78;
    }
    if ( (this->bsCollisionFlag._Array[0] & 0x4000) == 0 )
    {
      v22 = this->bsAttackFlag._Array[0];
      if ( (v22 & 0xC) != 0 )
      {
        iHitActNo = this->eventData.iHitActNo;
        if ( iHitActNo <= 0 )
        {
          iHitActNo = this->eventData.iEraseActNo;
          if ( iHitActNo <= 0 )
            goto LABEL_46;
        }
        v24 = 4;
      }
      else
      {
        if ( (v22 & 2) == 0 )
          goto LABEL_46;
        iHitActNo = this->eventData.iGuardActNo;
        if ( iHitActNo <= 0 )
        {
          iHitActNo = this->eventData.iEraseActNo;
          if ( iHitActNo <= 0 )
            goto LABEL_46;
        }
        v24 = 5;
      }
      ActorShot::CreateEraseShot(this, iHitActNo, v24);
    }
LABEL_46:
    this->iShotVitalPrev = this->iShotVital;
    goto LABEL_47;
  }
  v19 = this->bsCollisionFlag._Array[0];
  if ( (v19 & 0x4000) != 0 )
  {
    iFastDieActNo = this->eventData.iFastDieActNo;
    this->StateChangeReq(this, 6);
  }
  else
  {
    if ( (v19 & 0x80) != 0 )
    {
      LOWORD(iFastDieActNo) = this->eventData.iEraseActNo;
      v21 = 3i64;
    }
    else if ( (this->bsAttackFlag._Array[0] & 0xC) != 0 )
    {
      LOWORD(iFastDieActNo) = this->eventData.iHitActNo;
      v21 = 4i64;
    }
    else
    {
      LOWORD(iFastDieActNo) = this->eventData.iGuardActNo;
      v21 = 5i64;
    }
    this->StateChangeReq(this, v21);
    iFastDieActNo = (__int16)iFastDieActNo;
    if ( (__int16)iFastDieActNo <= 0 )
      iFastDieActNo = this->eventData.iEraseActNo;
  }
  this->iShotVitalPrev = this->iShotVital;
LABEL_78:
  if ( iFastDieActNo >= 0 )
  {
    if ( iFastDieActNo )
    {
      this->ResetHitStop(this);
      this->ActionChangeReq(this, iFastDieActNo, 0);
    }
    else
    {
      v2 = 1;
    }
    this->bDeadShot = 1;
LABEL_96:
    this->bParentBind = 0;
    goto LABEL_97;
  }
LABEL_83:
  v32 = (std::bitset<9>::reference *)std::bitset<21>::operator[](
                                       (std::bitset<61> *)&this->ctrlData.bsFuncFlag,
                                       &result,
                                       6ui64);
  if ( !std::bitset<9>::reference::operator bool(v32) )
  {
    v33 = (std::bitset<9>::reference *)std::bitset<21>::operator[](
                                         (std::bitset<61> *)&this->ctrlData.bsFuncFlag,
                                         &result,
                                         0i64);
    if ( std::bitset<9>::reference::operator bool(v33) )
    {
      if ( this->eventData.iDieActNo <= 0 )
      {
        v2 = 1;
      }
      else
      {
        this->ResetHitStop(this);
        this->ActionChangeReq(this, this->eventData.iDieActNo, 0);
      }
      this->StateChangeReq(this, 6);
      this->bDeadShot = 1;
    }
    else
    {
      if ( (this->shotData.iOptionFlag & 0x40) != 0 || !this->IsShotDeadOutRange(this) )
      {
        iRestHitCountActNo = (unsigned int)this->eventData.iRestHitCountActNo;
        if ( (int)iRestHitCountActNo > 0 && this->eventData.iRestHitCount >= this->iShotVital )
        {
          this->ActionChangeReq(this, iRestHitCountActNo, 0);
          *(_QWORD *)&this->eventData.iRestHitCountActNo = 0i64;
        }
        goto LABEL_106;
      }
      this->bDeadShot = 1;
      this->StateChangeReq(this, 2);
      v2 = this->IsShotEraseOutRange(this);
    }
    goto LABEL_96;
  }
  if ( this->eventData.iFastDieActNo <= 0 )
  {
    v2 = 1;
  }
  else
  {
    this->ResetHitStop(this);
    this->ActionChangeReq(this, this->eventData.iFastDieActNo, 0);
    this->bDeadShot = 1;
    this->bParentBind = 0;
  }
  this->StateChangeReq(this, 6);
LABEL_97:
  if ( v2 )
  {
LABEL_109:
    this->systemStat = INIT;
    return;
  }
LABEL_106:
  if ( this->bActionEnd && this->iActReserveNo < 0 && this->iActReserveFrame < 0 )
    goto LABEL_109;
  if ( this->bBlackoutInvalid
    && (this->IsDeadShot(this)
     || (v35 = this->pParent) == 0i64
     || (v36 = v35->systemStat) == INIT
     || v36 == ERASE
     || this->iParentInitActNo != v35->iActNo
     || this->bParentInitActDataChanged != v35->IsActionDataChanged(v35)) )
  {
    this->bBlackoutInvalid = 0;
  }
  this->pOwner->SetAliveShot(this->pOwner, this);
}

void __fastcall ActorShot::BranchCheck(ActorShot *this)
{
  $FDE819AA8FD4FE0CD927010514BE7533 *v2; // rax

  if ( !this->xHitStopFrame.value && !this->IsBlackStop(this) )
  {
    v2 = Actor::_branchConfirm(this);
    if ( v2 )
    {
      this->ActionChangeReq(this, v2->iBase[2], v2->iBase[3]);
      if ( this->IsActionDataChanged(this) )
        this->ChangeActionDataReq(this, this->pAct, this->pMotionChangeModel, this->pHitRect);
      if ( (this->iMoveOption & 2) != 0 )
      {
        ((void (__fastcall *)(ActorShot *))this->RequestPositionX)(this);
        ((void (__fastcall *)(ActorShot *))this->RequestPositionY)(this);
      }
    }
  }
}

void __fastcall ActorWeapon::ActionFlagCheck(_SETJMP_FLOAT128 *JumpBuffer)
{
  ;
}

void __fastcall ActorShot::CheckWeaponLine(ActorShot *this)
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
        *((_QWORD *)&v5 + 1) = &v7;
        *(_QWORD *)&v5 = this;
        v6._Mystorage._Ptrs[0] = (std::_Func_base<void,Actor &> *)&std::_Func_impl<_lambda_0b22e2e50bb6c6f88b870c015c48df93_,std::allocator<int>,void,Actor &>::`vftable';
        v6._Mystorage._Ptrs[7] = (std::_Func_base<void,Actor &> *)&v6;
        *(_OWORD *)&v6._Mystorage._Ptrs[1] = v5;
        ActionSystem::FuncCallRequest(pActSys, (Actor *)4, &v6);
      }
    }
  }
}

Actor *__fastcall ActorShot::CreateActorShot(
        const CharaActionData::Shot::Type::Fire *shotData,
        Actor *pParent,
        ActorCharaBase *pFounder,
        ActorChara *pOwner)
{
  Actor::SYSTEM_STAT systemStat; // eax
  Actor *v10; // rax
  Actor *v11; // rbx

  if ( !pFounder )
    return 0i64;
  if ( pParent )
  {
    systemStat = pParent->systemStat;
    if ( systemStat == INIT || systemStat == ERASE )
      return 0i64;
  }
  v10 = ActionSystem::Entry(pFounder->pActSys, SHOT, 6);
  v11 = v10;
  if ( v10 )
    ((void (__fastcall *)(Actor *, const CharaActionData::Shot::Type::Fire *, Actor *, ActorCharaBase *, ActorChara *))v10->__vftable[1].ActionParamInit)(
      v10,
      shotData,
      pParent,
      pFounder,
      pOwner);
  return v11;
}

Actor *__fastcall ActorShot::CreateEraseShot(ActorShot *pParentShot, int iEraseActNo, int iEraseStat)
{
  Actor *v7; // rax
  Actor *v8; // rdi

  if ( !pParentShot || !pParentShot->pFounder || iEraseActNo <= 0 )
    return 0i64;
  v7 = ActionSystem::Entry(pParentShot->pActSys, SHOT, 6);
  v8 = v7;
  if ( v7 )
    ((void (__fastcall *)(Actor *, ActorShot *, _QWORD, _QWORD))v7->__vftable[1].ParamInit)(
      v7,
      pParentShot,
      (unsigned int)iEraseActNo,
      (unsigned int)iEraseStat);
  return v8;
}

void __fastcall ActorShot::CreateInit(ActorShot *this)
{
  this->ParamInit(this, 0i64, 0i64, 0i64, 0i64);
  *(_QWORD *)this->bsAttackFlag._Array = 0i64;
  this->pFounder = 0i64;
  this->pOwner = 0i64;
  this->pReflectOwner = 0i64;
  *(_WORD *)&this->bReflectShot = 0;
  this->bParentBind = 0;
  this->iShotVital = 0;
  this->bNextHitWait = 0;
  this->ctrlData.bSetData = 0;
  this->ctrlReqData.bSetData = 0;
  *(_QWORD *)&this->shotData.iPosBase = 0i64;
  *(_QWORD *)&this->shotData.fPosY = 0i64;
  *(_QWORD *)&this->shotData.iHitCount = 0i64;
  *(_QWORD *)&this->eventData.iRestHitCountActNo = 0i64;
  *(_QWORD *)&this->eventData.iFastDieActNo = 0i64;
  *(_QWORD *)&this->eventData.iDieActNo = 0i64;
}

void __fastcall ActorShot::Dispose(ActorShot *this)
{
  *(_QWORD *)this->bsAttackFlag._Array = 0i64;
  ActionSystem::RequestSoundStopActionChange((ActionSystem *)this, this);
  this->CreateInit(this);
}

void __fastcall ActorShot::EraseShotInit(ActorShot *this, ActorShot *pParentShot, int iEraseActNo, int iEraseStat)
{
  ActorCharaBase *pFounder; // rcx
  bool v9; // al
  ActorCharaBase *v10; // rdx
  const CharaAttackData *pAtkData; // r9
  const CharaHitRect *pHitRectBuf; // r8
  const CharaActionData *pActBuf; // rdx
  ActorShot_vtbl *v14; // rbx
  bool v15; // al
  int v16; // eax
  Actor *pParent; // rcx
  bool v18; // al
  ActorShot_vtbl *v19; // rax
  CharaDamageSetting *pDmg; // [rsp+20h] [rbp-18h]

  if ( pParentShot && iEraseActNo > 0 )
  {
    pFounder = pParentShot->pFounder;
    this->pFounder = pFounder;
    this->pReflectOwner = 0i64;
    v9 = pFounder->IsActionDataChanged(pFounder);
    v10 = this->pFounder;
    pAtkData = v10->pAtkData;
    pDmg = (CharaDamageSetting *)v10->pDmgSet;
    if ( v9 )
    {
      pHitRectBuf = v10->pHitRectBuf;
      pActBuf = v10->pActBuf;
    }
    else
    {
      pHitRectBuf = v10->pHitRect;
      pActBuf = v10->pAct;
    }
    Actor::ParamInit(this, pActBuf, pHitRectBuf, pAtkData, pDmg);
    v14 = this->__vftable;
    this->iDrawPri = pParentShot->iDrawPri;
    *(_WORD *)&this->bReflectShot = 0;
    this->ctrlData.bSetData = 0;
    this->ctrlReqData.bSetData = 0;
    this->pOwner = pParentShot->pOwner;
    this->pTarget = pParentShot->pTarget;
    this->pParent = pParentShot->pParent;
    this->iPlayerID = pParentShot->iPlayerID;
    this->iCharNo = pParentShot->iCharNo;
    v15 = pParentShot->IsOptionAsset(pParentShot);
    v14->SetOptionAsset(this, v15);
    v16 = pParentShot->GetAssetID(pParentShot);
    pParent = this->pParent;
    this->iAssetID = v16;
    this->iCAngle = pParentShot->iCAngle;
    this->iCAngleBuf = pParentShot->iCAngleBuf;
    this->bParentBind = 0;
    this->iShotVital = 0;
    this->bNextHitWait = 0;
    this->iParentInitActNo = pParent->iActNo;
    v18 = pParent->IsActionDataChanged(pParent);
    *(_WORD *)&this->bDeadShot = 1;
    this->bParentInitActDataChanged = v18;
    this->iActorStat = iEraseStat;
    *(_QWORD *)&this->vPos.x = *(_QWORD *)&pParentShot->vPos.x;
    this->vPos.z = pParentShot->vPos.z;
    *(_QWORD *)&this->vBasePos.x = *(_QWORD *)&pParentShot->vBasePos.x;
    this->vBasePos.z = pParentShot->vBasePos.z;
    v19 = this->__vftable;
    *(_OWORD *)&this->shotData.iPosBase = *(_OWORD *)&pParentShot->shotData.iPosBase;
    *(_QWORD *)&this->shotData.iHitCount = *(_QWORD *)&pParentShot->shotData.iHitCount;
    v19->ActionChangeReq(this, iEraseActNo, 0);
  }
  else
  {
    this->systemStat = INIT;
  }
}

OGLVec3 *__fastcall ActorShot::GetBindCenterPosition(ActorShot *this, OGLVec3 *result)
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

OGLVec3 *__fastcall ActorShot::GetCenterPosition(ActorShot *this, OGLVec3 *result)
{
  *result = this->vPos;
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

OGLVec3 *__fastcall ActorShot::GetPerentAddValue(ActorShot *this, OGLVec3 *result)
{
  Actor *pParent; // rcx

  pParent = this->pParent;
  if ( pParent )
  {
    if ( pParent->GetActorType(pParent) == SHOT )
    {
      ((void (__fastcall *)(Actor *, OGLVec3 *))this->pParent->ActorObject::Actor::__vftable[1].GetActionOptionFlag)(
        this->pParent,
        result);
    }
    else
    {
      result->x = this->vAdd.x;
      result->y = this->vAdd.y;
      result->z = this->vAdd.z;
    }
    return result;
  }
  else
  {
    *result = this->vAdd;
    return result;
  }
}

OGLVec3 *__fastcall ActorShot::GetPerentMoveValue(ActorShot *this, OGLVec3 *result)
{
  Actor *pParent; // rcx

  pParent = this->pParent;
  if ( pParent )
  {
    if ( pParent->GetActorType(pParent) == SHOT )
    {
      ((void (__fastcall *)(Actor *, OGLVec3 *))this->pParent->ActorObject::Actor::__vftable[1].GetActionSubCategoryID)(
        this->pParent,
        result);
    }
    else
    {
      result->x = this->vMov.x;
      result->y = this->vMov.y;
      result->z = this->vMov.z;
    }
    return result;
  }
  else
  {
    *result = this->vMov;
    return result;
  }
}

OGLVec3 *__fastcall ActorShot::GetShotFirePos(ActorShot *this, OGLVec3 *result, __int64 a3, __int64 a4)
{
  int iPosBase; // eax
  Actor *pParent; // rsi
  __int64 v8; // rdx
  Actor_vtbl *v9; // r10
  __int64 v10; // rax
  float z; // eax
  float fPosX; // eax
  float v13; // xmm0_4
  char v15[16]; // [rsp+20h] [rbp-A8h] BYREF
  __int128 v16[6]; // [rsp+30h] [rbp-98h]
  int v17; // [rsp+90h] [rbp-38h]
  int v18; // [rsp+94h] [rbp-34h]
  int v19; // [rsp+98h] [rbp-30h]

  LOBYTE(a4) = 0;
  *(_QWORD *)&result->x = 0i64;
  result->z = 0.0;
  iPosBase = this->shotData.iPosBase;
  pParent = this->pParent;
  if ( iPosBase != 2 )
  {
    if ( !pParent )
      return result;
    if ( (this->shotData.iOptionFlag & 8) != 0 )
    {
      if ( !pParent->pTarget )
        return result;
      pParent = this->pTarget;
    }
    if ( iPosBase >= 3 )
    {
      if ( ((unsigned int (__fastcall *)(Actor *, OGLVec3 *, __int64, __int64))pParent->GetActorType)(
             pParent,
             result,
             a3,
             a4)
        && pParent->GetActorType(pParent) != OPTION )
      {
        return result;
      }
      LOBYTE(a4) = (this->shotData.iOptionFlag & 2) == 0 && pParent->iCAngle != 0;
    }
  }
  v8 = this->shotData.iPosBase;
  if ( (_DWORD)v8 )
  {
    if ( (_DWORD)v8 == 1 )
    {
      *(_QWORD *)&result->x = *(_QWORD *)&pParent->vPos.x;
      z = pParent->vPos.z;
    }
    else
    {
      if ( (_DWORD)v8 == 2 )
      {
        fPosX = this->shotData.fPosX;
        result->y = this->shotData.fPosY;
        result->x = fPosX;
        result->z = 0.0;
        goto LABEL_20;
      }
      v9 = pParent->__vftable;
      v16[0] = (__int128)_mm_load_si128((const __m128i *)&_xmm);
      v16[1] = (__int128)_mm_load_si128((const __m128i *)&_xmm);
      v16[2] = (__int128)_mm_load_si128((const __m128i *)&_xmm);
      v16[3] = (__int128)_mm_load_si128((const __m128i *)&_xmm);
      v16[4] = (__int128)_mm_load_si128((const __m128i *)&_xmm);
      v16[5] = (__int128)_mm_load_si128((const __m128i *)&_xmm);
      v17 = 30;
      v18 = 79;
      v19 = 80;
      v10 = ((__int64 (__fastcall *)(Actor *, char *, _QWORD, __int64))v9[1].LateUpdate)(
              pParent,
              v15,
              *((unsigned int *)v16 + v8),
              a4);
      *(_QWORD *)&result->x = *(_QWORD *)v10;
      z = *(float *)(v10 + 8);
    }
  }
  else
  {
    *(_QWORD *)&result->x = *(_QWORD *)&pParent->vBasePos.x;
    z = pParent->vBasePos.z;
  }
  result->z = z;
LABEL_20:
  if ( this->shotData.iPosBase != 2 )
  {
    if ( (this->shotData.iOptionFlag & 0x2000) != 0 )
      result->y = 0.0;
    result->y = this->shotData.fPosY + result->y;
    if ( (this->shotData.iOptionFlag & 4) != 0 || !pParent )
    {
      v13 = this->shotData.fPosX;
    }
    else
    {
      v13 = this->shotData.fPosX;
      if ( pParent->iCAngle )
        LODWORD(v13) ^= _xmm;
    }
    result->x = v13 + result->x;
  }
  return result;
}

__int64 __fastcall ActorShot::IsBlackStop(ActorShot *this)
{
  Actor *pParent; // rcx
  Actor *v3; // rcx
  ActionSystem *pActSys; // rdx

  if ( this->bBlackoutInvalid )
  {
    pParent = this->pParent;
    if ( pParent )
      return ((__int64 (__fastcall *)(Actor *))pParent->IsBlackStop)(pParent);
  }
  v3 = this->pParent;
  if ( v3 && v3->GetActorType(v3) )
  {
    pParent = this->pParent;
    return ((__int64 (__fastcall *)(Actor *))pParent->IsBlackStop)(pParent);
  }
  pActSys = this->pActSys;
  return pActSys->actBlack.data[5].attr == COUNTER_HIT
      || pActSys->actBlack.data[ciEffectTargetID[this->iPlayerID]].bStop;
}

bool __fastcall ActorShot::IsDisableReflectShot(ActorShot *this)
{
  return this->shotData.iShotType == 1 || this->bParentBind || (this->shotData.iOptionFlag & 0x30) != 0;
}

bool __fastcall ActorShot::IsInvisible(ActorShot *this)
{
  int v2; // eax

  if ( this->IsMotionCameraInvisibleActor(this) )
    LOBYTE(v2) = 1;
  else
    return ((unsigned int)this->iActFlg2 >> 8) & 1;
  return v2;
}

bool __fastcall Scaleform::GFx::InteractiveObject::OnCharEvent(
        Scaleform::Render::Texture *this,
        Scaleform::Render::RenderTargetData *__formal)
{
  return 0;
}

bool __fastcall ActorShot::IsMotionCameraInvisibleActor(ActorShot *this)
{
  CameraControl *p_cameraCtrl; // rax
  Actor *pParent; // rcx
  ActorChara *v5; // rcx

  p_cameraCtrl = &this->GetActionSystem(this)->cameraCtrl;
  if ( (p_cameraCtrl->offset.iOptionFlag & 1) == 0 || p_cameraCtrl->offset.pActor == this )
    return 0;
  pParent = this->pParent;
  if ( !pParent )
    return 1;
  if ( pParent->IsMotionCameraInvisibleActor(pParent) )
    return 1;
  v5 = (ActorChara *)this->pParent;
  if ( v5 != this->pOwner )
    return 1;
  return this->iParentInitActNo != v5->iActNo || this->bParentInitActDataChanged != v5->IsActionDataChanged(v5);
}

bool __fastcall ActorShot::IsShotDeadOutRange(ActorShot *this)
{
  float x; // xmm7_4
  float v2; // xmm2_4
  bool result; // al
  float y; // xmm1_4

  x = this->vMov.x;
  v2 = this->pActSys->cameraCtrl.vBasePos.x;
  result = 1;
  if ( (x > 0.0 || (float)((float)(v2 - 26.25) - 10.0) <= (float)(this->vColOff.x + this->vPos.x))
    && (x < 0.0 || (float)(this->vColOff.x + this->vPos.x) <= (float)((float)(v2 + 26.25) + 10.0)) )
  {
    y = this->vMov.y;
    if ( (y >= 0.0 || this->vPos.y >= -5.0)
      && (y < 0.0 || this->vPos.y <= (float)(this->pActSys->cameraCtrl.vBasePos.y + 20.0)) )
    {
      return 0;
    }
  }
  return result;
}

bool __fastcall ActorShot::IsShotEraseOutRange(ActorShot *this)
{
  float x; // xmm7_4
  float v2; // xmm2_4
  bool result; // al
  float y; // xmm1_4

  x = this->vMov.x;
  v2 = this->pActSys->cameraCtrl.vBasePos.x;
  result = 1;
  if ( (x > 0.0 || (float)((float)(v2 - 26.25) - 20.0) <= (float)(this->vColOff.x + this->vPos.x))
    && (x < 0.0 || (float)(this->vColOff.x + this->vPos.x) <= (float)((float)(v2 + 26.25) + 20.0)) )
  {
    y = this->vMov.y;
    if ( (y >= 0.0 || this->vPos.y >= -20.0)
      && (y < 0.0 || this->vPos.y <= (float)(this->pActSys->cameraCtrl.vBasePos.y + 30.0)) )
    {
      return 0;
    }
  }
  return result;
}

void __fastcall ActorShot::LateUpdate(ActorShot *this)
{
  Actor *pParent; // rax
  int value; // ecx
  Actor *v4; // rdx
  int iOptionFlag; // eax
  ActionSystem *pActSys; // rcx

  if ( !this->IsDeadShot(this) )
  {
    pParent = this->pParent;
    if ( pParent )
    {
      if ( (this->shotData.iOptionFlag & 0x400) != 0 )
      {
        value = pParent->xHitStopFrame.value;
        if ( value )
        {
          this->xHitStopFrame.value = value;
          this->xHitStopTotal.value = pParent->xHitStopTotal.value;
        }
      }
    }
  }
  this->BranchCheck(this);
  iOptionFlag = this->shotData.iOptionFlag;
  if ( (iOptionFlag & 0x4000) != 0 )
  {
    v4 = this->pParent;
    if ( !v4 )
      goto LABEL_19;
    pActSys = v4->pActSys;
    if ( (unsigned int)(pActSys->cameraCtrl.offset.type - 3) <= 1
      || pActSys->bUseSubCamera
      || pActSys->bInvalidZOffset
      || (unsigned int)(pActSys->cameraCtrl.offset.type - 3) <= 1
      || pActSys->bFreeCameraMode )
    {
      LOBYTE(v4) = 0;
    }
    else
    {
      v4 = (Actor *)v4->bUseZOffset;
    }
  }
  else if ( (iOptionFlag & 0x8000) != 0 )
  {
    v4 = 0i64;
  }
  else
  {
    LOBYTE(v4) = 1;
  }
  this->SetUseZOffset(this, (bool)v4);
LABEL_19:
  if ( (this->iActFlg2 & 0x10000) != 0 )
  {
    LOBYTE(v4) = 1;
    this->SetUseZOffset(this, (bool)v4);
  }
  if ( (this->iActFlg2 & 0x20000) != 0 )
    this->SetUseZOffset(this, 0);
}

void __fastcall ActorShot::MainUpdate(ActorShot *this)
{
  __int64 v2; // r8
  __int64 v3; // r9
  int v4; // edi
  __int64 *v5; // rax
  unsigned __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // eax
  Actor *pParent; // rax
  Actor::SYSTEM_STAT systemStat; // ecx
  std::bitset<61>::reference *v11; // rax
  unsigned __int64 Mypos; // rdx
  Collision::HitRectCollection *Instance; // rax
  std::bitset<61>::reference result; // [rsp+28h] [rbp-20h] BYREF

  if ( this->GetActionCategoryID(this, this->iActNo, 0) == 6 )
  {
    if ( this->ctrlData.bSetData )
    {
      v4 = 1;
      do
      {
        v5 = (__int64 *)std::bitset<21>::operator[]((std::bitset<61> *)&this->ctrlData.bsFuncFlag, &result, v4);
        v6 = v5[1];
        v2 = *v5;
        if ( v6 >= 9 )
          std::_Xout_of_range("invalid bitset<N> position");
        v7 = v5[1] & 0x1F;
        v8 = *(_DWORD *)(v2 + 4 * (v6 >> 5));
        if ( _bittest(&v8, v7) )
          this->SetActionBranchKey(this, v4);
        ++v4;
      }
      while ( v4 - 1 < 4 );
    }
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
            this->vBuf.x = this->vPos.x - this->vBasePosPrev.x;
            this->vBuf.y = this->vPos.y - this->vBasePosPrev.y;
            this->vBuf.z = this->vPos.z - this->vBasePosPrev.z;
            this->vBasePos = *ActorShot::GetShotFirePos(this, (OGLVec3 *)&result, v2, v3);
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
      }
    }
    if ( SLOBYTE(this->shotData.iOptionFlag) < 0 && this->vPos.y < 0.0 )
      this->vPos.y = 0.0;
    if ( !this->IsDeadShot(this) )
    {
      if ( this->iAtkDataCount > 0 )
      {
        v11 = std::bitset<21>::operator[]((std::bitset<61> *)&this->bsAttackFlag, &result, 0i64);
        Mypos = v11->_Mypos;
        if ( Mypos >= 6 )
          std::_Xout_of_range("invalid bitset<N> position");
        *((_DWORD *)v11->_Pbitset->_Array + (Mypos >> 5)) |= 1 << (v11->_Mypos & 0x1F);
      }
      Instance = Collision::HitRectCollection::GetInstance(this->iPlayerID);
      Collision::HitRectCollection::EntryShot(Instance, this);
    }
  }
  else
  {
    this->systemStat = INIT;
  }
}

void __fastcall ActorShot::ParamInit(
        ActorShot *this,
        const CharaActionData::Shot::Type::Fire *shotData,
        Actor *pParent,
        ActorCharaBase *pFounder,
        ActorChara *pOwner)
{
  const CharaHitRect *pHitRectBuf; // r8
  const CharaActionData *pActBuf; // rdx
  ActorChara *v11; // rcx
  ActorShot_vtbl *v12; // rbx
  bool v13; // al
  int iCAngleBuf; // eax
  int iHitCount; // eax
  ActorShot_vtbl *v16; // rax

  if ( pFounder && pOwner && shotData->iActNo >= 0 )
  {
    if ( pFounder->IsActionDataChanged(pFounder) )
    {
      pHitRectBuf = pFounder->pHitRectBuf;
      pActBuf = pFounder->pActBuf;
    }
    else
    {
      pHitRectBuf = pFounder->pHitRect;
      pActBuf = pFounder->pAct;
    }
    Actor::ParamInit(this, pActBuf, pHitRectBuf, pFounder->pAtkData, pFounder->pDmgSet);
    this->iDrawPri = 7;
    this->pFounder = pFounder;
    this->pReflectOwner = 0i64;
    *(_OWORD *)&this->shotData.iPosBase = *(_OWORD *)&shotData->iPosBase;
    *(_QWORD *)&this->shotData.iHitCount = *(_QWORD *)&shotData->iHitCount;
    *(_WORD *)&this->bReflectShot = 256;
    this->ctrlData.bSetData = 0;
    this->ctrlReqData.bSetData = 0;
    this->pOwner = pOwner;
    if ( pParent )
    {
      this->pParent = pParent;
      if ( pParent->GetActorType(pParent) == SHOT
        && ((unsigned __int8 (__fastcall *)(Actor *))pParent->__vftable[1].GetActionSystemSpeedFix)(pParent) )
      {
        this->bReflectShot = 1;
      }
    }
    else
    {
      this->pParent = pOwner;
    }
    v11 = this->pOwner;
    v12 = this->__vftable;
    this->pTarget = v11->pTarget;
    this->iPlayerID = v11->iPlayerID;
    this->iCharNo = this->pFounder->iCharNo;
    v13 = this->pParent->IsOptionAsset(this->pParent);
    v12->SetOptionAsset(this, v13);
    this->iAssetID = this->pParent->GetAssetID(this->pParent);
    if ( (shotData->iOptionFlag & 0x200) != 0 )
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
    this->bParentBind = shotData->iOptionFlag & 1;
    iHitCount = shotData->iHitCount;
    this->bNextHitWait = 0;
    if ( iHitCount < 1 )
      iHitCount = 1;
    this->iShotVital = iHitCount;
    this->iShotVitalPrev = iHitCount;
    this->iParentInitActNo = pParent->iActNo;
    this->bParentInitActDataChanged = pParent->IsActionDataChanged(pParent);
    *(_WORD *)&this->bDeadShot = 256;
    if ( shotData->iShotType == 1 )
      this->shotData.iOptionFlag |= 0x30u;
    v16 = this->__vftable;
    this->iActorStat = 0;
    v16->ActionChangeReq(this, shotData->iActNo, 0);
    this->StateChangeReq(this, 1);
  }
  else
  {
    this->systemStat = INIT;
  }
}

void __fastcall ActorShot::PreUpdate(ActorShot *this)
{
  unsigned int v2; // ecx
  __int64 v3; // rdx
  ActorChara *pReflectOwner; // rcx
  float v5; // xmm0_4
  bool v6; // zf
  int iPlayerID; // eax
  float v8; // xmm0_4
  ActorShot_vtbl *v9; // rax

  if ( !this->bNextHitWait )
  {
    v2 = this->bsAttackFlag._Array[0];
    v3 = 0i64;
    if ( (v2 & 6) != 0 || (this->bsCollisionFlag._Array[0] & 0x80) != 0 )
    {
      this->xMoveWaitFrame.value = 0x10000;
    }
    else if ( (v2 & 8) != 0 )
    {
      this->xMoveWaitFrame.value = 0x10000;
      this->iShotVital = 0;
    }
    if ( (this->bsCollisionFlag._Array[0] & 0x20) != 0 )
    {
      pReflectOwner = this->pReflectOwner;
      if ( pReflectOwner )
      {
        LODWORD(v5) = LODWORD(this->vMov.x) ^ _xmm;
        v6 = this->iCAngle == 0;
        this->pOwner = pReflectOwner;
        this->pParent = pReflectOwner;
        this->bReflectShot = 1;
        this->pTarget = pReflectOwner->pTarget;
        iPlayerID = pReflectOwner->iPlayerID;
        this->vMov.x = v5;
        LODWORD(v8) = LODWORD(this->vAdd.x) ^ _xmm;
        this->iPlayerID = iPlayerID;
        v9 = this->__vftable;
        this->pReflectOwner = 0i64;
        LOBYTE(v3) = v6;
        this->vAdd.x = v8;
        v9->CAngleChangeReq(this, v3);
      }
    }
  }
  if ( this->xHitStopFrame.value )
    this->bNextHitWait = 1;
}

void __fastcall ActorShot::PrevDataSet(ActorShot *this)
{
  Actor *pParent; // rax
  Actor::SYSTEM_STAT systemStat; // eax

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
  this->bSkipSyncPosture = 1;
}

void __fastcall ActorShot::RequestShotControl(ActorShot *this, const CharaActionData::Shot::Type::Control *reqDat)
{
  std::bitset<61>::reference *v2; // rax
  __int64 v3; // r9
  __int64 v4; // r10
  unsigned __int64 Mypos; // rdx
  std::bitset<61>::reference result; // [rsp+28h] [rbp-20h] BYREF

  if ( !this->ctrlReqData.bSetData )
    *(_QWORD *)this->ctrlReqData.bsFuncFlag._Array = 0i64;
  v2 = std::bitset<21>::operator[]((std::bitset<61> *)&this->ctrlReqData.bsFuncFlag, &result, reqDat->iFuncID);
  Mypos = v2->_Mypos;
  if ( Mypos >= 9 )
    std::_Xout_of_range("invalid bitset<N> position");
  *((_DWORD *)v2->_Pbitset->_Array + (Mypos >> 5)) |= 1 << (Mypos & 0x1F);
  *(_DWORD *)(v3 + 908) |= *(_DWORD *)(v4 + 20);
  *(_BYTE *)(v3 + 900) = 1;
}

void __fastcall ActorShot::SetActionBranchKey(ActorShot *this, int branchKey)
{
  Actor *pParent; // rcx

  if ( branchKey > 0 )
  {
    if ( branchKey <= 4 )
    {
      this->uiActionBranchKey |= 1 << branchKey;
    }
    else if ( branchKey - 4 <= 4 )
    {
      pParent = this->pParent;
      if ( pParent )
        ((void (__fastcall *)(Actor *))pParent->SetActionBranchKey)(pParent);
    }
  }
  this->pOwner->SetBranchFlgShot(this->pOwner, this, branchKey);
}

void __fastcall ActorShot::SetAttackGuard(ActorShot *this, bool flag)
{
  ActorObject::SetAttackGuard(this, flag);
  if ( flag )
    this->pOwner->SetAttackGuardShot(this->pOwner, this);
}

void __fastcall ActorShot::SetAttackHit(ActorShot *this, bool flag)
{
  ActorObject::SetAttackHit(this, flag);
  if ( flag )
    this->pOwner->SetAttackHitShot(this->pOwner, this);
}

void __fastcall ActorShot::SetEffectCreateData(ActorShot *this, const CharaActionData::Effect::Type::Set *setData)
{
  if ( ((unsigned __int8 (__fastcall *)(ActorShot *))this->_checkEffectSetTerm)(this) )
    ActorEffect::CreateActorEffect(setData, this, this->pFounder, this->pOwner);
}

void __fastcall ActorShot::SetHitStop(ActorShot *this, int hitStop, bool bDelay)
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
  if ( this->pParent )
  {
    if ( this->IsTransmitHitStop(this) )
      this->pParent->SetHitStop(this->pParent, hitStop, bDelay);
  }
}

void __fastcall ActorShot::SetShotFireData(ActorShot *this, const CharaActionData::Shot::Type::Fire *fireData)
{
  ActorShot::CreateActorShot(fireData, this, this->pFounder, this->pOwner);
}

std::_Func_base<void,Actor &> *__fastcall std::_Func_impl<_lambda_0b22e2e50bb6c6f88b870c015c48df93_,std::allocator<int>,void,Actor &>::_Move(
        std::_Func_impl<<lambda_0b22e2e50bb6c6f88b870c015c48df93>,std::allocator<int>,void,Actor &> *this,
        void *_Where)
{
  if ( _Where )
  {
    *(_QWORD *)_Where = &std::_Func_impl<_lambda_0b22e2e50bb6c6f88b870c015c48df93_,std::allocator<int>,void,Actor &>::`vftable';
    *(std::_Compressed_pair<std::allocator<int>,<lambda_0b22e2e50bb6c6f88b870c015c48df93>,1> *)((char *)_Where + 8) = this->_Mypair;
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

void __fastcall std::_Func_impl<_lambda_0b22e2e50bb6c6f88b870c015c48df93_,std::allocator<int>,void,Actor &>::_Do_call(
        std::_Func_impl<<lambda_0b22e2e50bb6c6f88b870c015c48df93>,std::allocator<int>,void,Actor &> *this,
        Actor *<_Args_0>)
{
  lambda_0b22e2e50bb6c6f88b870c015c48df93_::operator()((Actor *)&this->_Mypair, <_Args_0>);
}

std::_Align_type<double,64> *__fastcall __Get____Func_impl_U_unnamed_type_nothing___1__InstallGFxInterface_extension__YAXXZ_V__allocator_H_std__VValue_GFx_Scaleform__AEAVGFXIMovieContext_3_PEBV678_I_std__EEBAPEBXXZ(
        _Mtx_internal_imp_t *mtx)
{
  return &mtx->cs;
}

const type_info *__fastcall std::_Func_impl<_lambda_0b22e2e50bb6c6f88b870c015c48df93_,std::allocator<int>,void,Actor &>::_Target_type(
        std::_Func_impl<<lambda_0b22e2e50bb6c6f88b870c015c48df93>,std::allocator<int>,void,Actor &> *this)
{
  return (const type_info *)&_lambda_0b22e2e50bb6c6f88b870c015c48df93_ `RTTI Type Descriptor';
}

unsigned __int8 __fastcall ActorShot::_branchIsShotAlive(ActorShot *this, float param)
{
  std::bitset<13>::reference *v3; // rax
  std::bitset<61>::reference result; // [rsp+20h] [rbp-28h] BYREF

  if ( this->IsReflectShot(this) || (unsigned int)(int)param > 0xB )
    return 0;
  v3 = (std::bitset<13>::reference *)std::bitset<21>::operator[](
                                       (std::bitset<61> *)&this->pOwner->bsAliveShotID,
                                       &result,
                                       (int)param);
  return std::bitset<13>::reference::operator bool(v3);
}

unsigned __int8 __fastcall ActorShot::_branchIsShotAttackGuard(ActorShot *this, float param)
{
  std::bitset<13>::reference *v3; // rax
  std::bitset<61>::reference result; // [rsp+20h] [rbp-28h] BYREF

  if ( this->IsReflectShot(this) || (unsigned int)(int)param > 0xB )
    return 0;
  v3 = (std::bitset<13>::reference *)std::bitset<21>::operator[](
                                       (std::bitset<61> *)&this->pOwner->bsAttackGuardShotID,
                                       &result,
                                       (int)param);
  return std::bitset<13>::reference::operator bool(v3);
}

unsigned __int8 __fastcall ActorShot::_branchIsShotAttackHit(ActorShot *this, float param)
{
  std::bitset<13>::reference *v3; // rax
  std::bitset<61>::reference result; // [rsp+20h] [rbp-28h] BYREF

  if ( this->IsReflectShot(this) || (unsigned int)(int)param > 0xB )
    return 0;
  v3 = (std::bitset<13>::reference *)std::bitset<21>::operator[](
                                       (std::bitset<61> *)&this->pOwner->bsAttackHitShotID,
                                       &result,
                                       (int)param);
  return std::bitset<13>::reference::operator bool(v3);
}

unsigned __int8 __fastcall ActorShot::_branchIsShotAttackHitOrGuard(ActorShot *this, float param)
{
  int v3; // eax
  unsigned __int64 v4; // rdi
  std::bitset<13>::reference *v5; // rax
  std::bitset<13>::reference *v6; // rax
  unsigned __int8 v7; // al
  std::bitset<61>::reference result; // [rsp+20h] [rbp-38h] BYREF
  std::bitset<61>::reference v9; // [rsp+30h] [rbp-28h] BYREF

  if ( this->IsReflectShot(this) )
    return 0;
  v3 = (int)param;
  if ( (unsigned int)(int)param > 0xB )
    return 0;
  v4 = v3;
  v5 = (std::bitset<13>::reference *)std::bitset<21>::operator[](
                                       (std::bitset<61> *)&this->pOwner->bsAttackHitShotID,
                                       &result,
                                       v3);
  if ( std::bitset<13>::reference::operator bool(v5) )
    return 1;
  v6 = (std::bitset<13>::reference *)std::bitset<21>::operator[](
                                       (std::bitset<61> *)&this->pOwner->bsAttackGuardShotID,
                                       &v9,
                                       v4);
  v7 = std::bitset<13>::reference::operator bool(v6);
  if ( v7 )
    return 1;
  return v7;
}

unsigned __int8 __fastcall ActorShot::_branchIsShotFlag1(ActorShot *this, float param)
{
  std::bitset<13>::reference *v3; // rax
  std::bitset<61>::reference result; // [rsp+20h] [rbp-28h] BYREF

  if ( this->IsReflectShot(this) || (unsigned int)(int)param > 0xB )
    return 0;
  v3 = (std::bitset<13>::reference *)std::bitset<21>::operator[](
                                       (std::bitset<61> *)this->pOwner->bsBranchFlgShotID,
                                       &result,
                                       (int)param);
  return std::bitset<13>::reference::operator bool(v3);
}

unsigned __int8 __fastcall ActorShot::_branchIsShotFlag2(ActorShot *this, float param)
{
  std::bitset<13>::reference *v3; // rax
  std::bitset<61>::reference result; // [rsp+20h] [rbp-28h] BYREF

  if ( this->IsReflectShot(this) || (unsigned int)(int)param > 0xB )
    return 0;
  v3 = (std::bitset<13>::reference *)std::bitset<21>::operator[](
                                       (std::bitset<61> *)&this->pOwner->bsBranchFlgShotID[1],
                                       &result,
                                       (int)param);
  return std::bitset<13>::reference::operator bool(v3);
}

unsigned __int8 __fastcall ActorShot::_branchIsShotFlag3(ActorShot *this, float param)
{
  std::bitset<13>::reference *v3; // rax
  std::bitset<61>::reference result; // [rsp+20h] [rbp-28h] BYREF

  if ( this->IsReflectShot(this) || (unsigned int)(int)param > 0xB )
    return 0;
  v3 = (std::bitset<13>::reference *)std::bitset<21>::operator[](
                                       (std::bitset<61> *)&this->pOwner->bsBranchFlgShotID[2],
                                       &result,
                                       (int)param);
  return std::bitset<13>::reference::operator bool(v3);
}

unsigned __int8 __fastcall ActorShot::_branchIsShotFlag4(ActorShot *this, float param)
{
  std::bitset<13>::reference *v3; // rax
  std::bitset<61>::reference result; // [rsp+20h] [rbp-28h] BYREF

  if ( this->IsReflectShot(this) || (unsigned int)(int)param > 0xB )
    return 0;
  v3 = (std::bitset<13>::reference *)std::bitset<21>::operator[](
                                       (std::bitset<61> *)&this->pOwner->bsBranchFlgShotID[3],
                                       &result,
                                       (int)param);
  return std::bitset<13>::reference::operator bool(v3);
}

bool __fastcall ActorShot::_branchIsShotNotAlive(ActorShot *this, float param)
{
  std::bitset<13>::reference *v3; // rax
  std::bitset<61>::reference result; // [rsp+20h] [rbp-28h] BYREF

  if ( this->IsReflectShot(this) || (unsigned int)(int)param > 0xB )
    return 0;
  v3 = (std::bitset<13>::reference *)std::bitset<21>::operator[](
                                       (std::bitset<61> *)&this->pOwner->bsAliveShotID,
                                       &result,
                                       (int)param);
  return std::bitset<13>::reference::operator bool(v3) == 0;
}

