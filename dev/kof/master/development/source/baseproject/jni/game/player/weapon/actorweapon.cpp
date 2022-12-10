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
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmodel.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglvec3.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actionblackout.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/math.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmatrix.cpp"

std::piecewise_construct_t std::piecewise_construct; // 0x1408A061D
ActorWeapon::~ActorWeapon(); // 0x140193400
void ActorWeapon::CreateInit(); // 0x14019EE70
void ActorWeapon::Dispose(); // 0x140178ED0
void ActorWeapon::_checkAttachBoneID(); // 0x14019EF10
void ActorWeapon::_setDefaultSetting(); // 0x14019F0C0
void ActorWeapon::_setParentCenterPos(Actor * pBind, bool bCalcOnly); // 0x14019F140
void ActorWeapon::ParamInit(ActorCharaBase * pOwner); // 0x14019F4A0
void ActorWeapon::PrevDataSet(); // 0x14019F5F0
void ActorWeapon::PreUpdate(); // 0x14019F600
void ActorWeapon::ActionChanged(); // 0x14002E7C0
void ActorWeapon::ActionParamInit(); // 0x14019F620
void ActorWeapon::MainUpdate(); // 0x14019F630
void ActorWeapon::LateUpdate(); // 0x14019F7F0
void ActorWeapon::Draw(); // 0x14019F870
void ActorWeapon::UpdatePostureCalc(const CharaActionData::BaseAnime & locBaseAnime, bool bBlend); // 0x14019FBD0
void ActorWeapon::UpdatePosture(); // 0x14019FDE0
void ActorWeapon::SyncPosture(); // 0x1401A0460
bool ActorWeapon::IsBlackStop(); // 0x1401A05F0
OGLVec3 ActorWeapon::GetCenterPosition(); // 0x1401A0610
OGLVec3 ActorWeapon::GetBindCenterPosition(); // 0x14018BEB0
bool ActorWeapon::IsMotionCameraInvisibleActor(); // 0x1401A0670
bool ActorWeapon::IsInvisible(); // 0x1401A0690
bool ActorWeapon::IsModelDraw(); // 0x1401A06E0
void ActorWeapon::SetWeaponParam(const CharaActionData::Weapon & weapon); // 0x1401A0760
void ActorWeapon::SetBindActor(Actor * pActor); // 0x1401A0810
ActorWeapon * ActorWeapon::CreateActorWeapon(ActorCharaBase * pOwner, OGLModel * pWeaponModel, long weaponID); // 0x1401A0820//decompilation failure at 1408A061D!
void __fastcall ActorShot::~ActorShot(ActorWeapon *this)
{
  this->__vftable = (ActorWeapon_vtbl *)&Actor::`vftable';
}

void __fastcall ActorWeapon::ActionFlagCheck(_SETJMP_FLOAT128 *JumpBuffer)
{
  ;
}

// attributes: thunk
void __fastcall ActorWeapon::ActionParamInit(ActorWeapon *this)
{
  Actor::ActionParamInit(this);
}

Actor *__fastcall ActorWeapon::CreateActorWeapon(ActorCharaBase *pOwner, OGLModel *pWeaponModel, int weaponID)
{
  BattleSystem::BattleController *v6; // rax
  Actor::SYSTEM_STAT systemStat; // ecx
  Actor *v8; // rax
  Actor *v9; // rbx
  BattleSystem::BattleController *v11; // [rsp+40h] [rbp+8h]
  BattleSystem::BattleController *v12; // [rsp+40h] [rbp+8h]

  v6 = BattleSystem::BattleController::instance;
  if ( !BattleSystem::BattleController::instance )
  {
    v11 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v11);
    BattleSystem::BattleController::instance = v6;
    if ( !v6 )
    {
      v12 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
      BattleSystem::BattleController::BattleController(v12);
      BattleSystem::BattleController::instance = v6;
    }
  }
  if ( !pOwner )
    return 0i64;
  systemStat = pOwner->systemStat;
  if ( systemStat == INIT || systemStat == ERASE || !pWeaponModel )
    return 0i64;
  v8 = ActionSystem::Entry(&v6->actSystem, WEAPON, 4);
  v9 = v8;
  if ( v8 )
  {
    ((void (__fastcall *)(Actor *, ActorCharaBase *))v8->__vftable[1].SetSpeedDataSub)(v8, pOwner);
    v9->pModel = pWeaponModel;
    v9[1].iDrawPriSub = weaponID;
  }
  return v9;
}

void __fastcall ActorWeapon::CreateInit(ActorWeapon *this)
{
  this->ParamInit(this, 0i64, 0i64, 0i64, 0i64);
  this->pOwner = 0i64;
  this->pBindActor = 0i64;
  this->iWeaponID = -1;
  this->bUpdateWeaponParam = 0;
  this->fMotionFrame = 0.0;
  *(_WORD *)&this->bSavePrevBone = 0;
  this->bInvisible = 0;
  this->bSetUpEnd = 0;
  *(_QWORD *)&this->defaultWeaponParam.iSettingFlag = 0i64;
  *(_QWORD *)&this->defaultWeaponParam.fStartFrame = 0i64;
  *(_QWORD *)&this->defaultWeaponParam.fLoopFrame = 0i64;
  *(_QWORD *)&this->defaultWeaponParam.iOptionFlag = 0i64;
  *(_QWORD *)&this->weaponParam.iMotionID = 0i64;
  *(_QWORD *)&this->weaponParam.fPlayRate = 0i64;
  *(_QWORD *)&this->weaponParam.fReserve = 0i64;
}

void __fastcall Actor::Dispose(ActorWeapon *this)
{
  this->CreateInit(this);
}

void __fastcall ActorWeapon::Draw(ActorWeapon *this)
{
  ActionSystem *pActSys; // rcx
  ActionSystem *v3; // rax
  float fFadeAlpha; // xmm6_4
  float fProjBlendBase; // xmm0_4
  OGLModel *pModel; // rcx
  ActionSystem *v7; // rax
  ActionSystem *v8; // rax
  __int64 iPriTarget; // rcx
  OGLModel *v10; // rax
  ActorCharaBase *pOwner; // r10
  int iColorType; // eax
  __int64 v13; // r10
  ColorHolder v14; // xmm0
  int v15; // er9
  ActorCharaBase *v16; // rdx
  __int16 iFadeFrame; // r8
  ActorCharaBase *v18; // rax
  OGLModel *v19; // rdx
  OGLModel *v20; // rcx
  __int64 v21; // [rsp+30h] [rbp-38h] BYREF
  float v22; // [rsp+38h] [rbp-30h]
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
  this->GetBindCenterPosition(this, (OGLVec3 *)&v21);
  pModel = this->pModel;
  *(_QWORD *)&pModel->m_vCenterPosition.x = v21;
  pModel->m_vCenterPosition.z = v22;
  v7 = this->GetActionSystem(this);
  if ( v7->actBlack.data[v7->actBlack.iPriTarget].type == CLIMAX_CANCEL )
  {
    v8 = this->GetActionSystem(this);
    iPriTarget = v8->actBlack.iPriTarget;
    if ( v8->actBlack.data[iPriTarget].type == CLIMAX_CANCEL )
      fFadeAlpha = v8->actBlack.data[iPriTarget].fFadeAlpha;
    this->pModel->m_fillColourType = 1;
    v10 = this->pModel;
    v10->m_fillColour[3] = fFadeAlpha;
    *(_QWORD *)v10->m_fillColour = 0i64;
    v10->m_fillColour[2] = 0.0;
  }
  else
  {
    pOwner = this->pOwner;
    iColorType = pOwner->colorChangeData.iColorType;
    if ( iColorType <= 0 || iColorType == 3 || (pOwner->colorChangeData.iOptionFlag & 0xD) != 0 )
    {
      this->pModel->m_fillColourType = 0;
    }
    else
    {
      ActorCharaBase::ColorChange::GetFadeColorValue(&pOwner->colorChangeData, &result);
      v14 = result;
      this->pModel->m_fillColourType = *(_DWORD *)(v13 + 868);
      *(ColorHolder *)this->pModel->m_fillColour = v14;
    }
  }
  if ( !this->pBindActor )
  {
    this->pModel->m_modelFXFlg = this->pOwner->pModel->m_modelFXFlg;
    this->pModel->m_modelFXEXStrength = this->pOwner->pModel->m_modelFXEXStrength;
  }
  this->pModel->m_opacity = this->pOwner->GetBaseAnimeAlpha(this->pOwner);
  if ( this->pOwner->GetActorType(this->pOwner) == CHARA )
  {
    v16 = this->pOwner;
    if ( v16->iCharNo == 39 )
    {
      if ( v16[4].vBaseOff.x < 0.0 || (iFadeFrame = v16->exclusiveParam.type.shunei.iFadeFrame, iFadeFrame <= 0) )
        this->pModel->m_matOpacity = 1.0;
      else
        this->pModel->m_matOpacity = (float)((float)((float)((float)((float)(unsigned __int16)LODWORD(v16[4].vBaseOff.y)
                                                                   * 0.000015258789)
                                                           + (float)(SLODWORD(v16[4].vBaseOff.y) >> 16))
                                                   / (float)iFadeFrame)
                                           * (float)(v16->exclusiveParam.type.shunei.fStart
                                                   - v16->exclusiveParam.type.mamahaha.fHomingParam))
                                   + v16->exclusiveParam.type.mamahaha.fHomingParam;
    }
  }
  v18 = this->pOwner;
  if ( v18 && (v19 = v18->pModel) != 0i64 )
  {
    v20 = this->pModel;
    if ( (v19->m_uiModeFlg & 0x800) != 0 )
      v20->m_uiModeFlg |= 0x800u;
    else
      v20->m_uiModeFlg &= ~0x800u;
  }
  else
  {
    this->pModel->m_uiModeFlg &= ~0x800u;
  }
  OGLRender::addStack(*(OGLRender **)(*(_QWORD *)&AppMain::pApp + 80i64), this->pModel, 1.0, v15);
}

OGLVec3 *__fastcall ActorChara::GetBindCenterPosition(ActorWeapon *this, OGLVec3 *result)
{
  ((void (__fastcall *)(ActorWeapon *))this->GetCenterPosition)(this);
  return result;
}

OGLVec3 *__fastcall ActorWeapon::GetCenterPosition(ActorWeapon *this, OGLVec3 *result)
{
  ActorCharaBase *pOwner; // rax
  unsigned int *pModel; // rax
  __m128 v4; // xmm1
  __m128 v5; // xmm0
  float v6; // eax

  *(_QWORD *)&result->x = 0i64;
  result->z = 0.0;
  pOwner = this->pOwner;
  if ( pOwner )
  {
    pModel = (unsigned int *)pOwner->pModel;
    if ( pModel )
    {
      v4 = (__m128)pModel[56];
      v5 = (__m128)pModel[55];
      v6 = *((float *)pModel + 57);
      *(_QWORD *)&result->x = _mm_unpacklo_ps(v5, v4).m128_u64[0];
      result->z = v6;
    }
  }
  return result;
}

__int64 __fastcall ActorWeapon::IsBlackStop(ActorWeapon *this)
{
  return ((__int64 (__fastcall *)(ActorCharaBase *))this->pOwner->IsBlackStop)(this->pOwner);
}

bool __fastcall ActorWeapon::IsInvisible(ActorWeapon *this)
{
  return this->bInvisible
      || this->pOwner->IsInvisible(this->pOwner) && (this->weaponParam.iOptionFlag & 0x20) == 0
      || this->IsMotionCameraInvisibleActor(this);
}

bool __fastcall ActorWeapon::IsModelDraw(ActorWeapon *this)
{
  unsigned __int64 iPlayerID; // rbx
  unsigned int v4; // eax

  if ( !this->pModel )
    return 0;
  if ( !this->pOwner->pModel )
    return 0;
  if ( this->IsInvisible(this) )
    return 0;
  iPlayerID = this->iPlayerID;
  v4 = this->GetActionSystem(this)->bsInvisibleFlag._Array[iPlayerID >> 5];
  return !_bittest((const int *)&v4, iPlayerID & 0x1F) && this->bDrawCalled;
}

__int64 __fastcall ActorWeapon::IsMotionCameraInvisibleActor(ActorWeapon *this)
{
  return ((__int64 (__fastcall *)(ActorCharaBase *))this->pOwner->IsMotionCameraInvisibleActor)(this->pOwner);
}

void __fastcall ActorWeapon::LateUpdate(ActorWeapon *this, __int64 a2, float a3)
{
  ActorCharaBase *pOwner; // rcx
  ActionSystem *pActSys; // rdx
  __int64 v6; // rdx

  if ( this->pModel )
  {
    pOwner = this->pOwner;
    pActSys = pOwner->pActSys;
    if ( (unsigned int)(pActSys->cameraCtrl.offset.type - 3) <= 1
      || pActSys->bUseSubCamera
      || pActSys->bInvalidZOffset
      || (unsigned int)(pActSys->cameraCtrl.offset.type - 3) <= 1
      || pActSys->bFreeCameraMode )
    {
      LOBYTE(pActSys) = 0;
    }
    else
    {
      pActSys = (ActionSystem *)pOwner->bUseZOffset;
    }
    this->SetUseZOffset(this, (bool)pActSys);
    Actor::DrawRequest(this, v6, a3);
  }
}

void __fastcall ActorWeapon::MainUpdate(ActorWeapon *this)
{
  ActorCharaBase *pBindActor; // rcx
  __int64 iActNo; // rdx
  ActorCharaBase *pOwner; // rax
  OGLModel *pModel; // rcx
  int iMotionID; // eax
  float v7; // xmm1_4
  OGLMotion *v8; // rdx
  float m_fTotalFrame; // xmm0_4
  float fLoopFrame; // xmm3_4
  int v11; // [rsp+30h] [rbp+8h] BYREF

  this->GetActionSystemSpeedFix(this, (Fix32 *)&v11);
  if ( this->pOwner->IsEndSetup(this->pOwner) && !this->bSetUpEnd )
    this->bSetUpEnd = 1;
  if ( this->pModel )
  {
    pBindActor = (ActorCharaBase *)this->pBindActor;
    if ( !pBindActor )
      pBindActor = this->pOwner;
    iActNo = (unsigned int)pBindActor->iActNo;
    if ( (_DWORD)iActNo != pBindActor->iActNoPrev
      && !pBindActor->bActionFreeze
      && !this->bUpdateWeaponParam
      && (((__int64 (__fastcall *)(ActorCharaBase *, __int64, _QWORD))pBindActor->GetActionOptionFlag)(
            pBindActor,
            iActNo,
            0i64) & 0x200) == 0 )
    {
      ActorWeapon::_setDefaultSetting(this);
    }
    if ( this->pOwner->IsCalledUpdatePostureCalc(this->pOwner) )
      this->UpdatePostureCalc(this, &this->baseAnimePrev, 0);
    this->UpdatePosture(this);
    if ( !this->bInvisible && (this->weaponParam.iOptionFlag & 0xC) == 0 )
    {
      pOwner = (ActorCharaBase *)this->pBindActor;
      if ( !pOwner )
        pOwner = this->pOwner;
      if ( !pOwner->bActionFreeze )
      {
        pModel = this->pModel;
        iMotionID = this->weaponParam.iMotionID;
        v7 = (float)((float)((float)((float)(unsigned __int16)v11 * 0.000015258789) + (float)(v11 >> 16))
                   * this->weaponParam.fPlayRate)
           + this->fMotionFrame;
        this->fMotionFrame = v7;
        v8 = pModel->m_pMotion[0];
        if ( v8
          && (iMotionID >= 0 || (iMotionID = pModel->m_iMotionIndex[0], iMotionID >= 0))
          && iMotionID < (signed int)v8->m_usMotionCount )
        {
          m_fTotalFrame = v8->m_ppMotionData[iMotionID]->m_fTotalFrame;
        }
        else
        {
          m_fTotalFrame = 0.0;
        }
        if ( v7 >= m_fTotalFrame )
        {
          fLoopFrame = this->weaponParam.fLoopFrame;
          if ( fLoopFrame < 0.0 )
            this->fMotionFrame = m_fTotalFrame;
          else
            this->fMotionFrame = v7 - (float)(m_fTotalFrame - fLoopFrame);
        }
      }
    }
    this->bUpdateWeaponParam = 0;
    this->bUpdateMaterialData = 0;
  }
}

void __fastcall ActorWeapon::ParamInit(ActorWeapon *this, ActorCharaBase *pOwner)
{
  ActorWeapon_vtbl *v4; // rbx
  bool v5; // al
  int v6; // eax
  __int128 v7; // xmm0
  __int64 v8; // xmm1_8

  if ( pOwner )
  {
    Actor::ParamInit(this, 0i64, 0i64, 0i64, 0i64);
    v4 = this->__vftable;
    this->pBindActor = 0i64;
    this->iDrawPri = pOwner->iDrawPri;
    this->pOwner = pOwner;
    this->pParent = pOwner;
    this->pTarget = pOwner->pTarget;
    this->iPlayerID = pOwner->iPlayerID;
    this->iCharNo = pOwner->iCharNo;
    this->iCAngle = pOwner->iCAngle;
    this->iCAngleBuf = pOwner->iCAngleBuf;
    v5 = pOwner->IsOptionAsset(pOwner);
    v4->SetOptionAsset(this, v5);
    v6 = pOwner->GetAssetID(pOwner);
    this->defaultWeaponParam.iAttach = 0;
    this->defaultWeaponParam.iMotionID = 0;
    *(_QWORD *)&this->defaultWeaponParam.fStartFrame = 0i64;
    this->defaultWeaponParam.iOptionFlag = 0;
    *(_WORD *)&this->defaultWeaponParam.iSettingFlag = 257;
    this->defaultWeaponParam.fLoopFrame = -1.0;
    v7 = *(_OWORD *)&this->defaultWeaponParam.iSettingFlag;
    this->bUpdateWeaponParam = 0;
    v8 = *(_QWORD *)&this->defaultWeaponParam.fLoopFrame;
    *(_OWORD *)&this->weaponParam.iSettingFlag = v7;
    this->fMotionFrame = 0.0;
    *(_QWORD *)&this->weaponParam.fLoopFrame = v8;
    this->weaponParam.iOptionFlag = 0;
    this->bInvisible = 0;
    *(_WORD *)&this->bUpdateMaterialData = 0;
    this->iAssetID = v6;
  }
  else
  {
    this->systemStat = INIT;
  }
}

void __fastcall ActorWeapon::PreUpdate(ActorWeapon *this)
{
  if ( !this->pOwner )
    this->systemStat = INIT;
}

// attributes: thunk
void __fastcall ActorWeapon::PrevDataSet(ActorWeapon *this)
{
  Actor::PrevDataSet(this);
}

void __fastcall ActorWeapon::SetBindActor(ActorWeapon *this, Actor *pActor)
{
  this->pBindActor = pActor;
}

void __fastcall ActorWeapon::SetWeaponParam(ActorWeapon *this, const CharaActionData::Weapon *weapon)
{
  char iShow; // al
  int iAttach; // er9
  int iChildAttach; // er8

  this->bUpdateWeaponParam = 1;
  iShow = weapon->iShow;
  if ( iShow )
  {
    if ( weapon->iSettingFlag )
    {
      iAttach = this->weaponParam.iAttach;
      iChildAttach = this->weaponParam.iChildAttach;
      this->weaponParam = *weapon;
      if ( !weapon->iAttach && iAttach )
        this->weaponParam.iAttach = iAttach;
      if ( !weapon->iChildAttach && iChildAttach )
        this->weaponParam.iChildAttach = iChildAttach;
      this->fMotionFrame = weapon->fStartFrame;
      if ( (weapon->iOptionFlag & 1) != 0 )
        this->defaultWeaponParam = *weapon;
      this->pBindActor = 0i64;
    }
    else
    {
      this->weaponParam.iShow = iShow;
    }
  }
  else
  {
    ActorWeapon::_setDefaultSetting(this);
  }
}

void __fastcall ActorWeapon::SyncPosture(ActorWeapon *this)
{
  OGLModel *pModel; // rcx
  bool v3; // zf
  ActorCharaBase *pOwner; // rax
  OGLModel *v5; // r8
  int v6; // ecx
  __int64 v7; // rdx
  __int64 v8; // rcx
  _OGLModelBone *m_pBoneInfo; // rax
  OGLVec3 *p_vPos; // r8
  OGLModel *v11; // rcx
  float z; // eax

  this->bSkipSyncPosture = 1;
  pModel = this->pModel;
  if ( pModel )
  {
    if ( this->bUpdatePostureAsync )
    {
      OGLModel::syncPosture(pModel);
      v3 = (this->weaponParam.iOptionFlag & 8) == 0;
      this->bUpdatePostureAsync = 0;
      if ( !v3 && !this->pOwner->IsDisableBlendSave(this->pOwner) && !this->IsIgnoreMotionBlend(this) )
      {
        pOwner = this->pOwner;
        if ( pOwner->baseAnime.fBlend > 0.0 && (pOwner->baseAnimePrev.fBlend <= 0.0 || this->bSavePrevBone) )
        {
          v5 = this->pModel;
          v6 = v5->m_pFigure->m_uiBoneCount - 1;
          v7 = v6;
          if ( v6 >= 0 )
          {
            v8 = v6;
            do
            {
              --v7;
              m_pBoneInfo = v5->m_pBoneInfo;
              --v8;
              *(_OWORD *)&m_pBoneInfo[v8 + 1].pPrevStack[1].m_vPrevTrans.x = *(_OWORD *)&m_pBoneInfo[v8 + 1].pPrevStack[0].m_vPrevTrans.x;
              *(_OWORD *)&m_pBoneInfo[v8 + 1].pPrevStack[1].m_vPrevScale.y = *(_OWORD *)&m_pBoneInfo[v8 + 1].pPrevStack[0].m_vPrevScale.y;
              *(_QWORD *)&m_pBoneInfo[v8 + 1].pPrevStack[1].m_vPrevRot.z = *(_QWORD *)&m_pBoneInfo[v8 + 1].pPrevStack[0].m_vPrevRot.z;
            }
            while ( v7 >= 0 );
          }
          this->pModel->m_iBoneStackIndex = 1;
          this->bSavePrevBone = 0;
        }
      }
    }
    if ( this->pModel->m_iParentBone >= 0 )
    {
      p_vPos = &this->vPos;
      *(_QWORD *)&this->vPos.x = 0i64;
      this->vPos.z = 0.0;
      v11 = this->pOwner->pModel;
      if ( v11->m_pFigure )
        OGLModel::getBoneTrans(v11, this->pModel->m_iParentBone, p_vPos, &v11->m_mWorld);
      z = p_vPos->z;
      *(_QWORD *)&this->vBasePos.x = *(_QWORD *)&p_vPos->x;
      this->vBasePos.z = z;
    }
  }
  else
  {
    this->bUpdatePostureAsync = 0;
  }
}

void __fastcall ActorWeapon::UpdatePosture(ActorWeapon *this)
{
  OGLModel *pModel; // rcx
  ActorCharaBase *pOwner; // rax
  OGLModel *v4; // rdx
  unsigned int v5; // xmm1_4
  unsigned int v6; // xmm3_4
  unsigned int v7; // xmm2_4
  __int128 v8; // xmm1
  bool ModelMirrorLightFlag; // al
  bool ModelMoveLightFlag; // dl
  OGLModel *v11; // rax
  int m_iParentBoneDef; // ecx
  OGLModel *v13; // rcx
  int iOptionFlag; // eax
  ActorCharaBase *v15; // rcx
  ActorCharaBase *v16; // rcx
  OGLModel *v17; // rax
  ActorCharaBase *v18; // rcx
  OGLModel *v19; // rax
  OGLModel *v20; // rdx
  int iMotionID; // ecx
  float fBlend; // xmm1_4
  OGLModel *v23; // rax
  float v24; // xmm0_4
  OGLModel *v25; // rdx
  float v26; // xmm0_4
  OGLModel *v27; // rax
  OGLModel *v28; // rax
  OGLModel *v29; // rdx
  signed int v30; // ecx
  float fMotionFrame; // xmm1_4
  __int16 v32; // ax
  OGLModel *v33; // rdx
  int v34; // ecx
  OGLModel *v35; // rax
  ActorCharaBase *v36; // rcx
  __int64 v37; // xmm0_8
  float z; // eax
  int v39; // ecx
  __int128 v40; // [rsp+40h] [rbp-38h]
  __int128 v41; // [rsp+50h] [rbp-28h]

  this->bInvisible = 1;
  pModel = this->pModel;
  if ( !pModel )
    return;
  pOwner = this->pOwner;
  v4 = pOwner->pModel;
  if ( !v4
    || this->weaponParam.iShow == 2
    || pOwner->baseAnime.iMotionID < 0 && (this->weaponParam.iOptionFlag & 0x20) == 0 )
  {
    return;
  }
  if ( (pOwner->iActFlg2 & 0x40000) != 0
    || (this->weaponParam.iOptionFlag & 0x40) != 0 && (v4->m_pExternalMotion || v4->m_iCurrentMotion > 0) )
  {
    return;
  }
  if ( pOwner->bActionFreeze )
  {
    if ( pModel->m_pParentModel )
    {
      pModel->m_vPosition.x = v4->m_mWorld.m[12];
      pModel->m_vPosition.y = v4->m_mWorld.m[13];
      pModel->m_vPosition.z = v4->m_mWorld.m[14];
      *(_OWORD *)pModel->m_mWorld.m = *(_OWORD *)v4->m_mWorld.m;
      *(_OWORD *)&pModel->m_mWorld.m[4] = *(_OWORD *)&v4->m_mWorld.m[4];
      *(_OWORD *)&pModel->m_mWorld.m[8] = *(_OWORD *)&v4->m_mWorld.m[8];
      v8 = *(_OWORD *)&v4->m_mWorld.m[12];
    }
    else
    {
      *(float *)&v5 = (float)(pOwner->vPos.z + pOwner->vOff.z) + pOwner->vBaseOff.z;
      *(float *)&v6 = (float)(pOwner->vPos.x + pOwner->vOff.x) + pOwner->vBaseOff.x;
      *(float *)&v7 = (float)(pOwner->vPos.y + pOwner->vOff.y) + pOwner->vBaseOff.y;
      pModel->m_vPosition.z = *(float *)&v5;
      *((_QWORD *)&v41 + 1) = v5 | 0x3F80000000000000i64;
      *(_OWORD *)pModel->m_mWorld.m = 0x3F800000ui64;
      *(_OWORD *)&pModel->m_mWorld.m[4] = 0x3F80000000000000ui64;
      *(_QWORD *)&v40 = 0i64;
      *((_QWORD *)&v40 + 1) = 1065353216i64;
      *(_QWORD *)&v41 = __PAIR64__(v7, v6);
      v8 = v41;
      *(_OWORD *)&pModel->m_mWorld.m[8] = v40;
      LODWORD(pModel->m_vPosition.x) = v6;
      LODWORD(pModel->m_vPosition.y) = v7;
    }
    pModel->m_bPostureChange = 1;
    *(_OWORD *)&pModel->m_mWorld.m[12] = v8;
    this->pModel->m_bTrans = 1;
    this->pModel->m_bChange = 1;
    goto LABEL_68;
  }
  ActorWeapon::_checkAttachBoneID(this);
  if ( (this->weaponParam.iOptionFlag & 2) != 0 )
  {
    v11 = this->pModel;
    if ( v11->m_pParentModel )
    {
      if ( v11->m_pmParentPosture )
      {
        m_iParentBoneDef = v11->m_iParentBoneDef;
        if ( m_iParentBoneDef >= 0 )
          v11->m_iParentBone = m_iParentBoneDef;
      }
    }
    Actor::SetModelMirrorLightFlag(this, 0);
    ModelMoveLightFlag = 0;
  }
  else
  {
    OGLModel::changeParentMirror(this->pModel, this->pOwner->pModel->m_MirrorEnable);
    ModelMirrorLightFlag = Actor::GetModelMirrorLightFlag(this->pOwner);
    Actor::SetModelMirrorLightFlag(this, ModelMirrorLightFlag);
    ModelMoveLightFlag = Actor::GetModelMoveLightFlag(this->pOwner);
  }
  Actor::SetModelMoveLightFlag(this, ModelMoveLightFlag);
  v13 = this->pModel;
  if ( (this->weaponParam.iOptionFlag & 0x200) != 0 )
    v13->m_uiModeFlg |= 0x10u;
  else
    v13->m_uiModeFlg &= ~0x10u;
  iOptionFlag = this->weaponParam.iOptionFlag;
  if ( (iOptionFlag & 8) != 0 )
  {
    this->pModel->m_bPrevBoneMirrorFlg = this->pOwner->IsPrevBoneInfoMirror(this->pOwner);
    v15 = this->pOwner;
    this->bSavePrevBone = 0;
    if ( !v15->IsDisableBlendSave(v15) && !this->IsIgnoreMotionBlend(this) )
    {
      v16 = this->pOwner;
      if ( v16->baseAnime.fBlend <= 0.0
        || v16->baseAnime.iMotionID != v16->baseAnimePrev.iMotionID
        || v16->baseAnime.iMotionFileID != v16->baseAnimePrev.iMotionFileID )
      {
        v17 = this->pModel;
        this->bSavePrevBone = 1;
        v17->m_iBoneStackIndex = 0;
      }
    }
    v18 = this->pOwner;
    v19 = v18->pModel;
    if ( v19->m_pExternalMotion || v19->m_iCurrentMotion > 0 )
    {
      v25 = this->pModel;
      if ( v25->m_pMotion[0] )
      {
        v25->m_iMotionIndex[0] = 0;
        v25->m_iMotionIndex[0] = 0;
        v25->m_bMotionEnd = 0;
      }
      v26 = fmodf(this->pOwner->baseAnime.fMotionFrame, 2.0);
      OGLModel::setMotionFrame(this->pModel, v26, 0);
    }
    else
    {
      v20 = this->pModel;
      if ( v20->m_pMotion[0] )
      {
        iMotionID = v18->baseAnime.iMotionID;
        v20->m_iMotionIndex[0] = iMotionID;
        if ( iMotionID >= (signed int)v20->m_pMotion[0]->m_usMotionCount )
          iMotionID = 0;
        v20->m_iMotionIndex[0] = iMotionID;
        v20->m_bMotionEnd = 0;
      }
      OGLModel::setMotionFrame(this->pModel, this->pOwner->baseAnime.fMotionFrame, 0);
      if ( !this->IsIgnoreMotionBlend(this) )
      {
        fBlend = this->pOwner->baseAnime.fBlend;
        v23 = this->pModel;
        if ( v23->m_pMotion[0] )
        {
          v24 = *(float *)&FLOAT_1_0;
          if ( fBlend <= 1.0 )
            v24 = fmaxf(0.0, fBlend);
          v23->m_fMotionBlend[0] = v24;
        }
        goto LABEL_48;
      }
    }
    v27 = this->pModel;
    if ( v27->m_pMotion[0] )
      v27->m_fMotionBlend[0] = 0.0;
LABEL_48:
    v28 = this->pModel;
    if ( v28->m_pParentModel )
    {
      if ( v28->m_pFigure )
        v28->m_pBoneInfo[1].bChangeFlg = 0;
LABEL_67:
      this->pModel->m_MirrorEnable = this->pOwner->pModel->m_MirrorEnable;
      Actor::ModelUpdatePosture(this, &this->pOwner->pModel->m_mWorld);
      goto LABEL_68;
    }
LABEL_64:
    ActorWeapon::_setParentCenterPos(this, this->pOwner, 0);
    goto LABEL_68;
  }
  if ( (iOptionFlag & 4) != 0 )
  {
    v29 = this->pModel;
    if ( v29->m_pMotion[0] )
    {
      v30 = this->weaponParam.iMotionID;
      v29->m_iMotionIndex[0] = v30;
      if ( v30 >= (signed int)v29->m_pMotion[0]->m_usMotionCount )
        v30 = 0;
      v29->m_iMotionIndex[0] = v30;
      v29->m_bMotionEnd = 0;
    }
    fMotionFrame = this->pOwner->baseAnime.fMotionFrame;
    goto LABEL_63;
  }
  v32 = this->weaponParam.iMotionID;
  if ( v32 >= 0 )
  {
    v33 = this->pModel;
    if ( v33->m_pMotion[0] )
    {
      v34 = v32;
      v33->m_iMotionIndex[0] = v32;
      if ( v32 >= (signed int)v33->m_pMotion[0]->m_usMotionCount )
        v34 = 0;
      v33->m_iMotionIndex[0] = v34;
      v33->m_bMotionEnd = 0;
    }
    fMotionFrame = this->fMotionFrame;
LABEL_63:
    OGLModel::setMotionFrame(this->pModel, fMotionFrame, 0);
    v35 = this->pModel;
    if ( v35->m_pParentModel )
    {
      if ( v35->m_pFigure )
        v35->m_pBoneInfo[1].bChangeFlg = 0;
      goto LABEL_67;
    }
    goto LABEL_64;
  }
LABEL_68:
  if ( !this->pModel->m_pParentModel )
  {
    v36 = this->pOwner;
    *(_QWORD *)&this->vPos.x = *(_QWORD *)&v36->vPos.x;
    this->vPos.z = v36->vPos.z;
    *(_QWORD *)&this->vOff.x = *(_QWORD *)&v36->vOff.x;
    this->vOff.z = v36->vOff.z;
    *(_QWORD *)&this->vBaseOff.x = *(_QWORD *)&v36->vBaseOff.x;
    v37 = *(_QWORD *)&this->vPos.x;
    this->vBaseOff.z = v36->vBaseOff.z;
    z = this->vPos.z;
    *(_QWORD *)&this->vBasePos.x = v37;
    this->vBasePos.z = z;
  }
  v39 = this->weaponParam.iOptionFlag;
  if ( ((v39 & 0x80u) == 0 || !this->pOwner->iCAngle) && ((v39 & 0x100) == 0 || this->pOwner->iCAngle) )
    this->bInvisible = 0;
}

void __fastcall ActorWeapon::UpdatePostureCalc(
        ActorWeapon *this,
        const CharaActionData::BaseAnime *locBaseAnime,
        bool bBlend)
{
  float v3; // xmm2_4
  ActorCharaBase *pOwner; // rax
  OGLModel *pModel; // rcx
  bool ModelMirrorLightFlag; // al
  bool ModelMoveLightFlag; // dl
  OGLModel *v9; // rax
  int m_iParentBoneDef; // ecx
  OGLModel *v11; // rax
  ActorCharaBase *v12; // rax
  OGLModel *v13; // rsi
  OGLModel *v14; // rdi
  OGLMatrix *v15; // rdx

  if ( this->pModel )
  {
    pOwner = this->pOwner;
    pModel = pOwner->pModel;
    if ( pModel )
    {
      if ( this->weaponParam.iShow != 2
        && (pOwner->baseAnime.iMotionID >= 0 || (this->weaponParam.iOptionFlag & 0x20) != 0)
        && (pOwner->iActFlg2 & 0x40000) == 0
        && ((this->weaponParam.iOptionFlag & 0x40) == 0 || !pModel->m_pExternalMotion && pModel->m_iCurrentMotion <= 0) )
      {
        ActorWeapon::_checkAttachBoneID(this);
        if ( (this->weaponParam.iOptionFlag & 2) != 0 )
        {
          v9 = this->pModel;
          if ( v9->m_pParentModel )
          {
            if ( v9->m_pmParentPosture )
            {
              m_iParentBoneDef = v9->m_iParentBoneDef;
              if ( m_iParentBoneDef >= 0 )
                v9->m_iParentBone = m_iParentBoneDef;
            }
          }
          Actor::SetModelMirrorLightFlag(this, 0);
          ModelMoveLightFlag = 0;
        }
        else
        {
          OGLModel::changeParentMirror(this->pModel, this->pOwner->pModel->m_MirrorEnable);
          ModelMirrorLightFlag = Actor::GetModelMirrorLightFlag(this->pOwner);
          Actor::SetModelMirrorLightFlag(this, ModelMirrorLightFlag);
          ModelMoveLightFlag = Actor::GetModelMoveLightFlag(this->pOwner);
        }
        Actor::SetModelMoveLightFlag(this, ModelMoveLightFlag);
        if ( !this->pOwner->IsDisableBlendSave(this->pOwner) )
          this->pModel->m_iBoneStackIndex = 0;
        this->pModel->m_bPrevBoneMirrorFlg = 0;
        v11 = this->pModel;
        if ( v11->m_pParentModel )
        {
          if ( v11->m_pFigure )
            v11->m_pBoneInfo[1].bChangeFlg = 0;
          this->pModel->m_MirrorEnable = this->pOwner->pModel->m_MirrorEnable;
          v12 = this->pOwner;
          v13 = this->pModel;
          v14 = v12->pModel;
          OGLModel::syncPosture(v13);
          v13->bWakeThread._My_val = 1;
          EnterCriticalSection((LPCRITICAL_SECTION)&v13->m_postureReadyCond);
          WakeConditionVariable((PCONDITION_VARIABLE)&v13->m_postureReadyCond.m_conditionVariable.m_data);
          LeaveCriticalSection((LPCRITICAL_SECTION)&v13->m_postureReadyCond);
          OGLModel::updatePostureExe(v13, &v14->m_mWorld, v3);
          OGLModel::updatePostureSecExe(v13, v15, v3);
        }
        else
        {
          ActorWeapon::_setParentCenterPos(this, this->pOwner, 1);
        }
      }
    }
  }
}

void __fastcall ActorWeapon::_checkAttachBoneID(ActorWeapon *this)
{
  char iAttach; // dl
  OGLModel *pModel; // rax
  ActorCharaBase *pOwner; // rcx
  int v5; // eax
  char iChildAttach; // dl
  int v7; // edi
  int v8; // eax
  OGLModel *v9; // r10
  OGLModel *v10; // rdx
  int v11[4]; // [rsp+20h] [rbp-98h]
  __int128 v12[6]; // [rsp+30h] [rbp-88h]
  int v13; // [rsp+90h] [rbp-28h]
  int v14; // [rsp+94h] [rbp-24h]
  int v15; // [rsp+98h] [rbp-20h]

  iAttach = this->weaponParam.iAttach;
  v12[0] = (__int128)_mm_load_si128((const __m128i *)&_xmm);
  v12[1] = (__int128)_mm_load_si128((const __m128i *)&_xmm);
  v12[2] = (__int128)_mm_load_si128((const __m128i *)&_xmm);
  v12[3] = (__int128)_mm_load_si128((const __m128i *)&_xmm);
  v12[4] = (__int128)_mm_load_si128((const __m128i *)&_xmm);
  v12[5] = (__int128)_mm_load_si128((const __m128i *)&_xmm);
  v13 = 91;
  v14 = 92;
  v15 = 93;
  v11[0] = 0;
  v11[1] = 98;
  v11[2] = 99;
  if ( iAttach )
  {
    pModel = this->pModel;
    if ( pModel )
    {
      pOwner = this->pOwner;
      if ( pOwner )
      {
        if ( pOwner->pModel )
        {
          if ( iAttach == 17 )
          {
            pModel->m_pParentModel = 0i64;
            this->pModel->m_iParentBoneDef = -1;
          }
          else
          {
            v5 = pOwner->GetBoneIndex(pOwner, (CharaBone::NAME_INDEX)*((_DWORD *)v12 + iAttach), 0);
            iChildAttach = this->weaponParam.iChildAttach;
            v7 = v5;
            v8 = 0;
            if ( iChildAttach )
              v8 = this->pOwner->GetBoneIndex(this->pOwner, (CharaBone::NAME_INDEX)v11[iChildAttach], 0);
            v9 = this->pModel;
            if ( v7 != v9->m_iParentBoneDef || v8 != v9->m_iChildBone )
            {
              v10 = this->pOwner->pModel;
              if ( v10 )
                OGLModel::setParent(this->pModel, v10, v7, v8);
              else
                v9->m_pParentModel = 0i64;
            }
          }
        }
      }
    }
  }
}

void __fastcall ActorWeapon::_setDefaultSetting(ActorWeapon *this)
{
  int iOptionFlag; // edx
  bool v2; // r8
  __int64 v3; // xmm1_8
  int v4; // eax

  iOptionFlag = this->weaponParam.iOptionFlag;
  v2 = 1;
  if ( (iOptionFlag & 0xC) == 0
    && (((unsigned __int8)iOptionFlag | LOBYTE(this->defaultWeaponParam.iOptionFlag)) & 0x10) != 0 )
  {
    v2 = this->weaponParam.iMotionID != this->defaultWeaponParam.iMotionID;
  }
  v3 = *(_QWORD *)&this->defaultWeaponParam.fLoopFrame;
  v4 = this->defaultWeaponParam.iOptionFlag;
  this->pBindActor = 0i64;
  *(_OWORD *)&this->weaponParam.iSettingFlag = *(_OWORD *)&this->defaultWeaponParam.iSettingFlag;
  *(_QWORD *)&this->weaponParam.fLoopFrame = v3;
  this->weaponParam.iOptionFlag = v4;
  if ( v2 )
    this->fMotionFrame = this->weaponParam.fStartFrame;
}

void __fastcall ActorWeapon::_setParentCenterPos(ActorWeapon *this, Actor *pBind, bool bCalcOnly)
{
  float v3; // xmm2_4
  OGLModel *pModel; // rax
  float v8; // xmm8_4
  float v9; // xmm6_4
  float v10; // xmm0_4
  OGLModel *v11; // rcx
  OGLFigure *m_pFigure; // rax
  _OGLModelBone *m_pBoneInfo; // rax
  OGLModel *v14; // rdi
  OGLMatrix *v15; // rdx
  OGLModel *v16; // rsi
  __int128 v17; // [rsp+38h] [rbp-49h]
  __int128 v18; // [rsp+48h] [rbp-39h]
  __int128 v19; // [rsp+58h] [rbp-29h]
  __int128 v20; // [rsp+68h] [rbp-19h]
  __int128 v21; // [rsp+98h] [rbp+17h]
  float v22[6]; // [rsp+A8h] [rbp+27h]

  pModel = this->pModel;
  v8 = (float)((float)(pBind->vAngle.y * 3.1415927) / 180.0) + 1.5707964;
  if ( pBind->iCAngle )
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
  v19 = LODWORD(v9);
  v18 = 0ui64;
  DWORD1(v17) = 0;
  v20 = 0ui64;
  m_pFigure = v11->m_pFigure;
  *((_QWORD *)&v17 + 1) = LODWORD(v9) ^ (unsigned int)_xmm;
  *((float *)&v19 + 2) = v10;
  *(float *)&v17 = v10;
  HIDWORD(v20) = 1065353216;
  DWORD1(v18) = 1065353216;
  if ( m_pFigure && (int)m_pFigure->m_uiBoneCount > 1 )
  {
    m_pBoneInfo = v11->m_pBoneInfo;
    *(_OWORD *)m_pBoneInfo[1].mTrans.m = v17;
    *(_OWORD *)&m_pBoneInfo[1].mTrans.m[4] = v18;
    *(_OWORD *)&m_pBoneInfo[1].mTrans.m[8] = v19;
    *(_OWORD *)&m_pBoneInfo[1].mTrans.m[12] = v20;
    v11->m_pBoneInfo[1].bChangeFlg = 1;
    v11->m_pBoneInfo[1].bTransFlg = 1;
  }
  if ( bCalcOnly )
  {
    v14 = this->pModel;
    OGLModel::syncPosture(v14);
    v14->bWakeThread._My_val = 1;
    EnterCriticalSection((LPCRITICAL_SECTION)&v14->m_postureReadyCond);
    WakeConditionVariable((PCONDITION_VARIABLE)&v14->m_postureReadyCond.m_conditionVariable.m_data);
    LeaveCriticalSection((LPCRITICAL_SECTION)&v14->m_postureReadyCond);
    OGLModel::updatePostureExe(v14, 0i64, v3);
    OGLModel::updatePostureSecExe(v14, v15, v3);
  }
  else
  {
    v16 = this->pModel;
    v22[0] = (float)(pBind->vPos.x + pBind->vOff.x) + pBind->vBaseOff.x;
    v22[1] = (float)(pBind->vPos.y + pBind->vOff.y) + pBind->vBaseOff.y;
    v22[2] = (float)(pBind->vPos.z + pBind->vOff.z) + pBind->vBaseOff.z;
    *(_QWORD *)&v21 = 0i64;
    *((_QWORD *)&v21 + 1) = 1065353216i64;
    v22[3] = 1.0;
    OGLModel::syncPosture(v16);
    if ( v16->m_pMotion[0] )
    {
      *(_OWORD *)v16->m_mTmpMatrix.m = 0x3F800000ui64;
      v16->m_fTmpBlend = 0.0;
      *(_OWORD *)&v16->m_mTmpMatrix.m[4] = 0x3F80000000000000ui64;
      v16->m_uiTmpCalcTarget = 1;
      *(_OWORD *)&v16->m_mTmpMatrix.m[8] = v21;
      *(_OWORD *)&v16->m_mTmpMatrix.m[12] = *(_OWORD *)v22;
      if ( v16->bCreateUpdateThread )
      {
        v16->bWakeThread._My_val = 0;
        EnterCriticalSection((LPCRITICAL_SECTION)&v16->updateCondMutex);
        EnterCriticalSection((LPCRITICAL_SECTION)&v16->updataCond);
        WakeConditionVariable((PCONDITION_VARIABLE)&v16->updataCond.m_conditionVariable.m_data);
        LeaveCriticalSection((LPCRITICAL_SECTION)&v16->updataCond);
        LeaveCriticalSection((LPCRITICAL_SECTION)&v16->updateCondMutex);
      }
      else
      {
        v16->bCreateUpdateThread = 1;
        v16->bWakeThread._My_val = 0;
        AgThread::join(&v16->m_updateThread);
        AgThread::start(&v16->m_updateThread, v16, 0x100000ui64, 0, "ModelPosture");
      }
    }
    *(_WORD *)&this->bUpdatePostureAsync = 1;
  }
}

