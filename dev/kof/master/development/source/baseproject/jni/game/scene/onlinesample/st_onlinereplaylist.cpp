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
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/heapmemory.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/system/ctasksystem.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/replace.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/rtc.cpp"

struct REPLAY_SAVE_WORK
{
	char * m_pBuffer; // 0x0
};
std::piecewise_construct_t std::piecewise_construct; // 0x1408B00E2
long GT_ReplaySaveWait(GENERAL_TASK * pGT); // 0x1402C9DA0
void ComvertBestBattleReplay_FORMAT_000_To_FORMAT_002(BestBattleReplay * pDestReplay, BestBattleReplay_FORMAT_000 * pFromReplay); // 0x1402C9DF0
void ComvertBestBattleReplay_FORMAT_001_To_FORMAT_002(BestBattleReplay * pDestReplay, BestBattleReplay_FORMAT_001 * pFromReplay); // 0x1402CA0E0
void AppMain::ConvertLeaderBoardReplaytoSaveReplay(Fw::cRankingReadResult * pResult, Fw::ScoreGameInfo * pGameInfo, Fw::ScoreRankData * pRankData); // 0x1402CA3D0//decompilation failure at 1408B00E2!
void __fastcall ComvertBestBattleReplay_FORMAT_000_To_FORMAT_002(
        BestBattleReplay *pDestReplay,
        BestBattleReplay_FORMAT_000 *pFromReplay)
{
  ROUND_INFO *m_RoundInfo; // rax
  __int128 v5; // xmm0
  ROUND_INFO *v6; // rdx
  __int64 v7; // rcx
  __int128 v8; // xmm0
  __int64 v9; // r9
  ROUNDEND_PLAYER_INFO (*m_RoundEndInfo)[2]; // rcx
  ROUNDEND_PLAYER_INFO (*v11)[2]; // rax
  __int64 v12; // rdx
  __int128 v13; // xmm0
  unsigned __int8 *p_grade; // rdx
  unsigned __int8 *v15; // rax
  __int64 v16; // r8
  unsigned __int8 v17; // cl

  pDestReplay->m_Date = pFromReplay->m_Date;
  pDestReplay->m_UploadDate = pFromReplay->m_UploadDate;
  m_RoundInfo = pFromReplay->m_RoundInfo;
  *(_OWORD *)&pDestReplay->m_BufferSize[0][0] = *(_OWORD *)&pFromReplay->m_BufferSize[0][0];
  *(_OWORD *)&pDestReplay->m_BufferSize[2][0] = *(_OWORD *)&pFromReplay->m_BufferSize[2][0];
  v5 = *(_OWORD *)&pFromReplay->m_BufferSize[4][0];
  v6 = pDestReplay->m_RoundInfo;
  *(_OWORD *)&pDestReplay->m_BufferSize[4][0] = v5;
  v7 = 3i64;
  do
  {
    v6 = (ROUND_INFO *)((char *)v6 + 128);
    v8 = *(_OWORD *)&m_RoundInfo->player[0].iMemberReferIndex;
    m_RoundInfo = (ROUND_INFO *)((char *)m_RoundInfo + 128);
    *(_OWORD *)&v6[-2].player[0].xGuardPower = v8;
    *(_OWORD *)&v6[-2].player[1].iMaxExPowerExtend = *(_OWORD *)&m_RoundInfo[-2].player[1].iMaxExPowerExtend;
    *(_OWORD *)&v6[-2].player[1].xClimaxTime = *(_OWORD *)&m_RoundInfo[-2].player[1].xClimaxTime;
    *(_OWORD *)&v6[-2].iRoundCount = *(_OWORD *)&m_RoundInfo[-2].iRoundCount;
    *(_OWORD *)&v6[-1].player[0].xVital = *(_OWORD *)&m_RoundInfo[-1].player[0].xVital;
    *(_OWORD *)&v6[-1].player[0].xStunPower = *(_OWORD *)&m_RoundInfo[-1].player[0].xStunPower;
    *(_OWORD *)&v6[-1].player[1].iFinishSkill[3] = *(_OWORD *)&m_RoundInfo[-1].player[1].iFinishSkill[3];
    *(_OWORD *)&v6[-1].player[1].xGuardPower = *(_OWORD *)&m_RoundInfo[-1].player[1].xGuardPower;
    --v7;
  }
  while ( v7 );
  v9 = 2i64;
  m_RoundEndInfo = pFromReplay->m_RoundEndInfo;
  *(_OWORD *)&v6->player[0].iMemberReferIndex = *(_OWORD *)&m_RoundInfo->player[0].iMemberReferIndex;
  *(_OWORD *)&v6->player[0].xExPower = *(_OWORD *)&m_RoundInfo->player[0].xExPower;
  *(_OWORD *)&v6->player[0].xRecoveryVital = *(_OWORD *)&m_RoundInfo->player[0].xRecoveryVital;
  *(_OWORD *)&v6->player[1].xVital = *(_OWORD *)&m_RoundInfo->player[1].xVital;
  *(_QWORD *)&v6->player[1].xStunPower = *(_QWORD *)&m_RoundInfo->player[1].xStunPower;
  v11 = pDestReplay->m_RoundEndInfo;
  v12 = 2i64;
  do
  {
    v11 = (ROUNDEND_PLAYER_INFO (*)[2])((char *)v11 + 128);
    v13 = *(_OWORD *)m_RoundEndInfo;
    m_RoundEndInfo = (ROUNDEND_PLAYER_INFO (*)[2])((char *)m_RoundEndInfo + 128);
    *((_OWORD *)&(*v11)[-4] - 1) = v13;
    *(_OWORD *)&(*v11)[-4].xVital = *(_OWORD *)&(*m_RoundEndInfo)[-4].xVital;
    *(_OWORD *)&(*v11)[-4].xStunPower = *(_OWORD *)&(*m_RoundEndInfo)[-4].xStunPower;
    *(_OWORD *)&(*v11)[-3].xExPower = *(_OWORD *)&(*m_RoundEndInfo)[-3].xExPower;
    *(_OWORD *)&(*v11)[-3].xRecoveryVital = *(_OWORD *)&(*m_RoundEndInfo)[-3].xRecoveryVital;
    *(_OWORD *)&(*v11)[-2].xClimaxTime = *(_OWORD *)&(*m_RoundEndInfo)[-2].xClimaxTime;
    *(_OWORD *)&(*v11)[-2].bTakeOverActor = *(_OWORD *)&(*m_RoundEndInfo)[-2].bTakeOverActor;
    *((_OWORD *)&(*v11)[0] - 1) = *((_OWORD *)&(*m_RoundEndInfo)[0] - 1);
    --v12;
  }
  while ( v12 );
  p_grade = &pFromReplay->m_UserInfo[0][0].grade;
  *(_OWORD *)v11 = *(_OWORD *)m_RoundEndInfo;
  *(_OWORD *)&(*v11)[0].xStunPower = *(_OWORD *)&(*m_RoundEndInfo)[0].xStunPower;
  *(_OWORD *)&(*v11)[1].xExPower = *(_OWORD *)&(*m_RoundEndInfo)[1].xExPower;
  *(_OWORD *)&(*v11)[1].xRecoveryVital = *(_OWORD *)&(*m_RoundEndInfo)[1].xRecoveryVital;
  *(_OWORD *)&(*v11)[2].xClimaxTime = *(_OWORD *)&(*m_RoundEndInfo)[2].xClimaxTime;
  *(_OWORD *)pDestReplay->m_RandSeed = *(_OWORD *)pFromReplay->m_RandSeed;
  *(_QWORD *)&pDestReplay->m_RandSeed[4] = *(_QWORD *)&pFromReplay->m_RandSeed[4];
  *(_DWORD *)pDestReplay->m_RoundResult = *(_DWORD *)pFromReplay->m_RoundResult;
  *(_WORD *)&pDestReplay->m_RoundResult[4] = *(_WORD *)&pFromReplay->m_RoundResult[4];
  pDestReplay->m_GameMode = pFromReplay->m_GameMode;
  pDestReplay->m_GameRule = pFromReplay->m_GameRule;
  pDestReplay->m_Stage = pFromReplay->m_Stage;
  pDestReplay->m_RoundTimerType = pFromReplay->m_RoundTimerType;
  pDestReplay->m_Result = pFromReplay->m_Result;
  *(_WORD *)pDestReplay->m_Handicap = *(_WORD *)pFromReplay->m_Handicap;
  pDestReplay->m_DelayFrame = pFromReplay->m_DelayFrame;
  pDestReplay->m_Ver = pFromReplay->m_Ver;
  pDestReplay->m_WinRoundCount = pFromReplay->m_WinRoundCount;
  *(_OWORD *)pDestReplay->m_StageTelop = *(_OWORD *)pFromReplay->m_StageTelop;
  *(_OWORD *)&pDestReplay->m_StageTelop[16] = *(_OWORD *)&pFromReplay->m_StageTelop[16];
  *(_OWORD *)&pDestReplay->m_StageTelop[32] = *(_OWORD *)&pFromReplay->m_StageTelop[32];
  *(_QWORD *)&pDestReplay->m_StageTelop[48] = *(_QWORD *)&pFromReplay->m_StageTelop[48];
  *(_DWORD *)&pDestReplay->m_StageTelop[56] = *(_DWORD *)&pFromReplay->m_StageTelop[56];
  pDestReplay->m_StageTelop[60] = pFromReplay->m_StageTelop[60];
  v15 = &pDestReplay->m_UserInfo[0][0].grade;
  do
  {
    v16 = 3i64;
    do
    {
      *(_QWORD *)(v15 - 9) = *(_QWORD *)(p_grade - 9);
      *(v15 - 1) = *(p_grade - 1);
      *v15 = *p_grade;
      *(_WORD *)(v15 + 1) = p_grade[1];
      v15[3] = p_grade[2];
      v15[4] = p_grade[3];
      v15[5] = p_grade[4];
      v17 = p_grade[5];
      p_grade += 16;
      *((_WORD *)v15 + 3) = v17;
      v15 += 24;
      --v16;
    }
    while ( v16 );
    --v9;
  }
  while ( v9 );
}

void __fastcall ComvertBestBattleReplay_FORMAT_001_To_FORMAT_002(
        BestBattleReplay *pDestReplay,
        BestBattleReplay_FORMAT_001 *pFromReplay)
{
  ROUND_INFO *m_RoundInfo; // rax
  __int128 v5; // xmm0
  ROUND_INFO *v6; // rdx
  __int64 v7; // rcx
  __int128 v8; // xmm0
  __int64 v9; // r9
  ROUNDEND_PLAYER_INFO (*m_RoundEndInfo)[2]; // rcx
  ROUNDEND_PLAYER_INFO (*v11)[2]; // rax
  __int64 v12; // rdx
  __int128 v13; // xmm0
  unsigned __int8 *p_grade; // rdx
  unsigned __int8 *v15; // rax
  __int64 v16; // r8
  unsigned __int8 v17; // cl

  pDestReplay->m_Date = pFromReplay->m_Date;
  pDestReplay->m_UploadDate = pFromReplay->m_UploadDate;
  m_RoundInfo = pFromReplay->m_RoundInfo;
  *(_OWORD *)&pDestReplay->m_BufferSize[0][0] = *(_OWORD *)&pFromReplay->m_BufferSize[0][0];
  *(_OWORD *)&pDestReplay->m_BufferSize[2][0] = *(_OWORD *)&pFromReplay->m_BufferSize[2][0];
  v5 = *(_OWORD *)&pFromReplay->m_BufferSize[4][0];
  v6 = pDestReplay->m_RoundInfo;
  *(_OWORD *)&pDestReplay->m_BufferSize[4][0] = v5;
  v7 = 3i64;
  do
  {
    v6 = (ROUND_INFO *)((char *)v6 + 128);
    v8 = *(_OWORD *)&m_RoundInfo->player[0].iMemberReferIndex;
    m_RoundInfo = (ROUND_INFO *)((char *)m_RoundInfo + 128);
    *(_OWORD *)&v6[-2].player[0].xGuardPower = v8;
    *(_OWORD *)&v6[-2].player[1].iMaxExPowerExtend = *(_OWORD *)&m_RoundInfo[-2].player[1].iMaxExPowerExtend;
    *(_OWORD *)&v6[-2].player[1].xClimaxTime = *(_OWORD *)&m_RoundInfo[-2].player[1].xClimaxTime;
    *(_OWORD *)&v6[-2].iRoundCount = *(_OWORD *)&m_RoundInfo[-2].iRoundCount;
    *(_OWORD *)&v6[-1].player[0].xVital = *(_OWORD *)&m_RoundInfo[-1].player[0].xVital;
    *(_OWORD *)&v6[-1].player[0].xStunPower = *(_OWORD *)&m_RoundInfo[-1].player[0].xStunPower;
    *(_OWORD *)&v6[-1].player[1].iFinishSkill[3] = *(_OWORD *)&m_RoundInfo[-1].player[1].iFinishSkill[3];
    *(_OWORD *)&v6[-1].player[1].xGuardPower = *(_OWORD *)&m_RoundInfo[-1].player[1].xGuardPower;
    --v7;
  }
  while ( v7 );
  v9 = 2i64;
  m_RoundEndInfo = pFromReplay->m_RoundEndInfo;
  *(_OWORD *)&v6->player[0].iMemberReferIndex = *(_OWORD *)&m_RoundInfo->player[0].iMemberReferIndex;
  *(_OWORD *)&v6->player[0].xExPower = *(_OWORD *)&m_RoundInfo->player[0].xExPower;
  *(_OWORD *)&v6->player[0].xRecoveryVital = *(_OWORD *)&m_RoundInfo->player[0].xRecoveryVital;
  *(_OWORD *)&v6->player[1].xVital = *(_OWORD *)&m_RoundInfo->player[1].xVital;
  *(_QWORD *)&v6->player[1].xStunPower = *(_QWORD *)&m_RoundInfo->player[1].xStunPower;
  v11 = pDestReplay->m_RoundEndInfo;
  v12 = 2i64;
  do
  {
    v11 = (ROUNDEND_PLAYER_INFO (*)[2])((char *)v11 + 128);
    v13 = *(_OWORD *)m_RoundEndInfo;
    m_RoundEndInfo = (ROUNDEND_PLAYER_INFO (*)[2])((char *)m_RoundEndInfo + 128);
    *((_OWORD *)&(*v11)[-4] - 1) = v13;
    *(_OWORD *)&(*v11)[-4].xVital = *(_OWORD *)&(*m_RoundEndInfo)[-4].xVital;
    *(_OWORD *)&(*v11)[-4].xStunPower = *(_OWORD *)&(*m_RoundEndInfo)[-4].xStunPower;
    *(_OWORD *)&(*v11)[-3].xExPower = *(_OWORD *)&(*m_RoundEndInfo)[-3].xExPower;
    *(_OWORD *)&(*v11)[-3].xRecoveryVital = *(_OWORD *)&(*m_RoundEndInfo)[-3].xRecoveryVital;
    *(_OWORD *)&(*v11)[-2].xClimaxTime = *(_OWORD *)&(*m_RoundEndInfo)[-2].xClimaxTime;
    *(_OWORD *)&(*v11)[-2].bTakeOverActor = *(_OWORD *)&(*m_RoundEndInfo)[-2].bTakeOverActor;
    *((_OWORD *)&(*v11)[0] - 1) = *((_OWORD *)&(*m_RoundEndInfo)[0] - 1);
    --v12;
  }
  while ( v12 );
  p_grade = &pDestReplay->m_UserInfo[0][0].grade;
  *(_OWORD *)v11 = *(_OWORD *)m_RoundEndInfo;
  *(_OWORD *)&(*v11)[0].xStunPower = *(_OWORD *)&(*m_RoundEndInfo)[0].xStunPower;
  *(_OWORD *)&(*v11)[1].xExPower = *(_OWORD *)&(*m_RoundEndInfo)[1].xExPower;
  *(_OWORD *)&(*v11)[1].xRecoveryVital = *(_OWORD *)&(*m_RoundEndInfo)[1].xRecoveryVital;
  *(_OWORD *)&(*v11)[2].xClimaxTime = *(_OWORD *)&(*m_RoundEndInfo)[2].xClimaxTime;
  *(_OWORD *)pDestReplay->m_RandSeed = *(_OWORD *)pFromReplay->m_RandSeed;
  *(_QWORD *)&pDestReplay->m_RandSeed[4] = *(_QWORD *)&pFromReplay->m_RandSeed[4];
  *(_DWORD *)pDestReplay->m_RoundResult = *(_DWORD *)pFromReplay->m_RoundResult;
  *(_WORD *)&pDestReplay->m_RoundResult[4] = *(_WORD *)&pFromReplay->m_RoundResult[4];
  pDestReplay->m_GameMode = pFromReplay->m_GameMode;
  pDestReplay->m_GameRule = pFromReplay->m_GameRule;
  pDestReplay->m_Stage = pFromReplay->m_Stage;
  pDestReplay->m_RoundTimerType = pFromReplay->m_RoundTimerType;
  pDestReplay->m_Result = pFromReplay->m_Result;
  *(_WORD *)pDestReplay->m_Handicap = *(_WORD *)pFromReplay->m_Handicap;
  pDestReplay->m_DelayFrame = pFromReplay->m_DelayFrame;
  pDestReplay->m_Ver = pFromReplay->m_Ver;
  pDestReplay->m_WinRoundCount = pFromReplay->m_WinRoundCount;
  *(_OWORD *)pDestReplay->m_StageTelop = *(_OWORD *)pFromReplay->m_StageTelop;
  *(_OWORD *)&pDestReplay->m_StageTelop[16] = *(_OWORD *)&pFromReplay->m_StageTelop[16];
  *(_OWORD *)&pDestReplay->m_StageTelop[32] = *(_OWORD *)&pFromReplay->m_StageTelop[32];
  *(_QWORD *)&pDestReplay->m_StageTelop[48] = *(_QWORD *)&pFromReplay->m_StageTelop[48];
  *(_DWORD *)&pDestReplay->m_StageTelop[56] = *(_DWORD *)&pFromReplay->m_StageTelop[56];
  pDestReplay->m_StageTelop[60] = pFromReplay->m_StageTelop[60];
  v15 = &pFromReplay->m_UserInfo[0][0].grade;
  do
  {
    v16 = 3i64;
    do
    {
      *(_QWORD *)(p_grade - 9) = *(_QWORD *)(v15 - 9);
      *(p_grade - 1) = *(v15 - 1);
      *p_grade = *v15;
      *(_WORD *)(p_grade + 1) = v15[1];
      p_grade[3] = v15[2];
      p_grade[4] = v15[3];
      p_grade[5] = v15[4];
      p_grade[6] = v15[5];
      v17 = v15[6];
      v15 += 16;
      p_grade[7] = v17;
      p_grade += 24;
      --v16;
    }
    while ( v16 );
    --v9;
  }
  while ( v9 );
}

void __fastcall AppMain::ConvertLeaderBoardReplaytoSaveReplay(
        AppMain *this,
        Fw::cRankingReadResult *pResult,
        Fw::ScoreGameInfo *pGameInfo,
        Fw::ScoreRankData *pRankData)
{
  int infoSize; // ecx
  int v9; // ebx
  __int64 v10; // r14
  int v11; // ebx
  Fw::sRankingAttachData *m_pAttachDataArray; // rcx
  BattleReplay *p_pReplay; // rax
  __int64 v14; // rdx
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  Fw::sRankingAttachData *v27; // rcx
  BestBattleReplay_FORMAT_001 *p_pFromReplay; // rax
  __int64 v29; // rdx
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  __int128 v37; // xmm1
  __int128 v38; // xmm1
  __int128 v39; // xmm0
  __int128 v40; // xmm1
  REPLAY_USER_INFO_FORMAT_001 v41; // xmm0
  BattleReplay *v42; // rax
  __int64 v43; // rdx
  BestBattleReplay *p_pDestReplay; // rcx
  __int128 v45; // xmm0
  __int128 v46; // xmm1
  __int128 v47; // xmm0
  __int128 v48; // xmm1
  __int128 v49; // xmm0
  __int128 v50; // xmm1
  __int128 v51; // xmm0
  __int128 v52; // xmm1
  Fw::sRankingAttachData *v53; // rcx
  BestBattleReplay_FORMAT_001 *v54; // rax
  __int64 v55; // rdx
  __int128 v56; // xmm0
  __int128 v57; // xmm1
  __int128 v58; // xmm0
  __int128 v59; // xmm1
  __int128 v60; // xmm0
  __int128 v61; // xmm1
  __int128 v62; // xmm0
  __int128 v63; // xmm1
  __int128 v64; // xmm1
  __int128 v65; // xmm0
  __int128 v66; // xmm1
  REPLAY_USER_INFO_FORMAT_001 v67; // xmm0
  BattleReplay *v68; // rax
  __int64 v69; // rdx
  BestBattleReplay *v70; // rcx
  __int128 v71; // xmm0
  __int128 v72; // xmm1
  __int128 v73; // xmm0
  __int128 v74; // xmm1
  __int128 v75; // xmm0
  __int128 v76; // xmm1
  __int128 v77; // xmm0
  __int128 v78; // xmm1
  unsigned int v79; // er8
  __int64 i; // rdx
  char *v81; // r15
  __int64 j; // rdi
  size_t v83; // rsi
  char *v84; // rbx
  int v85; // edx
  __int64 result; // [rsp+30h] [rbp-D0h] BYREF
  GENERAL_TASK *v87; // [rsp+38h] [rbp-C8h]
  BattleReplay pReplay; // [rsp+40h] [rbp-C0h] BYREF
  BestBattleReplay_FORMAT_001 pFromReplay; // [rsp+4E0h] [rbp+3E0h] BYREF
  BestBattleReplay pDestReplay; // [rsp+930h] [rbp+830h] BYREF

  result = (__int64)pRankData;
  v87 = CTaskSystem::Entry(&this->m_TS, GT_ReplaySaveWait, (int)pGameInfo, (int)pRankData);
  if ( v87 )
  {
    infoSize = pGameInfo->infoSize;
    v9 = 3;
    v10 = 0i64;
    if ( pGameInfo->infoSize == 84 )
    {
      v9 = 0;
    }
    else if ( infoSize == 90 )
    {
      v9 = 1;
    }
    else if ( infoSize == 96 )
    {
      v9 = 2;
    }
    else
    {
      printf(&pnewText);
    }
    memset(&pReplay, 0, sizeof(pReplay));
    if ( v9 )
    {
      v11 = v9 - 1;
      if ( v11 )
      {
        if ( v11 != 1 )
          return;
        m_pAttachDataArray = pResult->m_pAttachDataArray;
        p_pReplay = &pReplay;
        v14 = 8i64;
        do
        {
          p_pReplay = (BattleReplay *)((char *)p_pReplay + 128);
          v15 = *(_OWORD *)m_pAttachDataArray->m_Buf;
          v16 = *(_OWORD *)&m_pAttachDataArray->m_Buf[16];
          m_pAttachDataArray = (Fw::sRankingAttachData *)((char *)m_pAttachDataArray + 128);
          *(_OWORD *)&p_pReplay[-1].m_StageTelop[16] = v15;
          v17 = *(_OWORD *)&m_pAttachDataArray[-1].m_Buf[1048480];
          *(_OWORD *)&p_pReplay[-1].m_StageTelop[32] = v16;
          v18 = *(_OWORD *)&m_pAttachDataArray[-1].m_Buf[1048496];
          *(_OWORD *)&p_pReplay[-1].m_StageTelop[48] = v17;
          v19 = *(_OWORD *)&m_pAttachDataArray[-1].m_Buf[1048512];
          *(_OWORD *)p_pReplay[-1].m_pBuffer = v18;
          v20 = *(_OWORD *)&m_pAttachDataArray[-1].m_Buf[1048528];
          *(_OWORD *)&p_pReplay[-1].m_pBuffer[2] = v19;
          v21 = *(_OWORD *)&m_pAttachDataArray[-1].m_Buf[1048544];
          *(_OWORD *)&p_pReplay[-1].m_pBuffer[4] = v20;
          v22 = *(_OWORD *)&m_pAttachDataArray[-1].m_Buf[1048560];
          *(_OWORD *)&p_pReplay[-1].m_UploadOnlineId.data = v21;
          *(_OWORD *)&p_pReplay[-1].m_Lock = v22;
          --v14;
        }
        while ( v14 );
        v23 = *(_OWORD *)&m_pAttachDataArray->m_Buf[16];
        *(_OWORD *)&p_pReplay->m_Date = *(_OWORD *)m_pAttachDataArray->m_Buf;
        v24 = *(_OWORD *)&m_pAttachDataArray->m_Buf[32];
        *(_OWORD *)&p_pReplay->m_BufferSize[0][0] = v23;
        v25 = *(_OWORD *)&m_pAttachDataArray->m_Buf[48];
        *(_OWORD *)&p_pReplay->m_BufferSize[2][0] = v24;
        v26 = *(_OWORD *)&m_pAttachDataArray->m_Buf[64];
        *(_OWORD *)&p_pReplay->m_BufferSize[4][0] = v25;
        *(_OWORD *)&p_pReplay->m_UserInfo[0][0].onlineId.data = v26;
      }
      else
      {
        v27 = pResult->m_pAttachDataArray;
        p_pFromReplay = &pFromReplay;
        v29 = 8i64;
        do
        {
          p_pFromReplay = (BestBattleReplay_FORMAT_001 *)((char *)p_pFromReplay + 128);
          v30 = *(_OWORD *)v27->m_Buf;
          v31 = *(_OWORD *)&v27->m_Buf[16];
          v27 = (Fw::sRankingAttachData *)((char *)v27 + 128);
          *(_OWORD *)p_pFromReplay[-1].m_RoundResult = v30;
          v32 = *(_OWORD *)&v27[-1].m_Buf[1048480];
          *(_OWORD *)p_pFromReplay[-1].m_StageTelop = v31;
          v33 = *(_OWORD *)&v27[-1].m_Buf[1048496];
          *(_OWORD *)&p_pFromReplay[-1].m_StageTelop[16] = v32;
          v34 = *(_OWORD *)&v27[-1].m_Buf[1048512];
          *(_OWORD *)&p_pFromReplay[-1].m_StageTelop[32] = v33;
          v35 = *(_OWORD *)&v27[-1].m_Buf[1048528];
          *(_OWORD *)&p_pFromReplay[-1].m_StageTelop[48] = v34;
          v36 = *(_OWORD *)&v27[-1].m_Buf[1048544];
          *(_OWORD *)p_pFromReplay[-1].m_pBuffer = v35;
          v37 = *(_OWORD *)&v27[-1].m_Buf[1048560];
          *(_OWORD *)&p_pFromReplay[-1].m_pBuffer[2] = v36;
          *(_OWORD *)&p_pFromReplay[-1].m_pBuffer[4] = v37;
          --v29;
        }
        while ( v29 );
        v38 = *(_OWORD *)&v27->m_Buf[16];
        *(_OWORD *)&p_pFromReplay->m_Date = *(_OWORD *)v27->m_Buf;
        v39 = *(_OWORD *)&v27->m_Buf[32];
        *(_OWORD *)&p_pFromReplay->m_BufferSize[0][0] = v38;
        v40 = *(_OWORD *)&v27->m_Buf[48];
        *(_OWORD *)&p_pFromReplay->m_BufferSize[2][0] = v39;
        v41 = *(REPLAY_USER_INFO_FORMAT_001 *)&v27->m_Buf[64];
        *(_OWORD *)&p_pFromReplay->m_BufferSize[4][0] = v40;
        p_pFromReplay->m_UserInfo[0][0] = v41;
        ComvertBestBattleReplay_FORMAT_001_To_FORMAT_002(&pDestReplay, &pFromReplay);
        v42 = &pReplay;
        v43 = 9i64;
        p_pDestReplay = &pDestReplay;
        do
        {
          v42 = (BattleReplay *)((char *)v42 + 128);
          v45 = *(_OWORD *)&p_pDestReplay->m_Date;
          v46 = *(_OWORD *)&p_pDestReplay->m_BufferSize[0][0];
          p_pDestReplay = (BestBattleReplay *)((char *)p_pDestReplay + 128);
          *(_OWORD *)&v42[-1].m_StageTelop[16] = v45;
          v47 = *(_OWORD *)&p_pDestReplay[-1].m_StageTelop[16];
          *(_OWORD *)&v42[-1].m_StageTelop[32] = v46;
          v48 = *(_OWORD *)&p_pDestReplay[-1].m_StageTelop[32];
          *(_OWORD *)&v42[-1].m_StageTelop[48] = v47;
          v49 = *(_OWORD *)&p_pDestReplay[-1].m_StageTelop[48];
          *(_OWORD *)v42[-1].m_pBuffer = v48;
          v50 = *(_OWORD *)p_pDestReplay[-1].m_pBuffer;
          *(_OWORD *)&v42[-1].m_pBuffer[2] = v49;
          v51 = *(_OWORD *)&p_pDestReplay[-1].m_pBuffer[2];
          *(_OWORD *)&v42[-1].m_pBuffer[4] = v50;
          v52 = *(_OWORD *)&p_pDestReplay[-1].m_pBuffer[4];
          *(_OWORD *)&v42[-1].m_UploadOnlineId.data = v51;
          *(_OWORD *)&v42[-1].m_Lock = v52;
          --v43;
        }
        while ( v43 );
      }
    }
    else
    {
      v53 = pResult->m_pAttachDataArray;
      v54 = &pFromReplay;
      v55 = 8i64;
      do
      {
        v54 = (BestBattleReplay_FORMAT_001 *)((char *)v54 + 128);
        v56 = *(_OWORD *)v53->m_Buf;
        v57 = *(_OWORD *)&v53->m_Buf[16];
        v53 = (Fw::sRankingAttachData *)((char *)v53 + 128);
        *(_OWORD *)v54[-1].m_RoundResult = v56;
        v58 = *(_OWORD *)&v53[-1].m_Buf[1048480];
        *(_OWORD *)v54[-1].m_StageTelop = v57;
        v59 = *(_OWORD *)&v53[-1].m_Buf[1048496];
        *(_OWORD *)&v54[-1].m_StageTelop[16] = v58;
        v60 = *(_OWORD *)&v53[-1].m_Buf[1048512];
        *(_OWORD *)&v54[-1].m_StageTelop[32] = v59;
        v61 = *(_OWORD *)&v53[-1].m_Buf[1048528];
        *(_OWORD *)&v54[-1].m_StageTelop[48] = v60;
        v62 = *(_OWORD *)&v53[-1].m_Buf[1048544];
        *(_OWORD *)v54[-1].m_pBuffer = v61;
        v63 = *(_OWORD *)&v53[-1].m_Buf[1048560];
        *(_OWORD *)&v54[-1].m_pBuffer[2] = v62;
        *(_OWORD *)&v54[-1].m_pBuffer[4] = v63;
        --v55;
      }
      while ( v55 );
      v64 = *(_OWORD *)&v53->m_Buf[16];
      *(_OWORD *)&v54->m_Date = *(_OWORD *)v53->m_Buf;
      v65 = *(_OWORD *)&v53->m_Buf[32];
      *(_OWORD *)&v54->m_BufferSize[0][0] = v64;
      v66 = *(_OWORD *)&v53->m_Buf[48];
      *(_OWORD *)&v54->m_BufferSize[2][0] = v65;
      v67 = *(REPLAY_USER_INFO_FORMAT_001 *)&v53->m_Buf[64];
      *(_OWORD *)&v54->m_BufferSize[4][0] = v66;
      v54->m_UserInfo[0][0] = v67;
      ComvertBestBattleReplay_FORMAT_000_To_FORMAT_002(&pDestReplay, (BestBattleReplay_FORMAT_000 *)&pFromReplay);
      v68 = &pReplay;
      v69 = 9i64;
      v70 = &pDestReplay;
      do
      {
        v68 = (BattleReplay *)((char *)v68 + 128);
        v71 = *(_OWORD *)&v70->m_Date;
        v72 = *(_OWORD *)&v70->m_BufferSize[0][0];
        v70 = (BestBattleReplay *)((char *)v70 + 128);
        *(_OWORD *)&v68[-1].m_StageTelop[16] = v71;
        v73 = *(_OWORD *)&v70[-1].m_StageTelop[16];
        *(_OWORD *)&v68[-1].m_StageTelop[32] = v72;
        v74 = *(_OWORD *)&v70[-1].m_StageTelop[32];
        *(_OWORD *)&v68[-1].m_StageTelop[48] = v73;
        v75 = *(_OWORD *)&v70[-1].m_StageTelop[48];
        *(_OWORD *)v68[-1].m_pBuffer = v74;
        v76 = *(_OWORD *)v70[-1].m_pBuffer;
        *(_OWORD *)&v68[-1].m_pBuffer[2] = v75;
        v77 = *(_OWORD *)&v70[-1].m_pBuffer[2];
        *(_OWORD *)&v68[-1].m_pBuffer[4] = v76;
        v78 = *(_OWORD *)&v70[-1].m_pBuffer[4];
        *(_OWORD *)&v68[-1].m_UploadOnlineId.data = v77;
        *(_OWORD *)&v68[-1].m_Lock = v78;
        --v69;
      }
      while ( v69 );
    }
    v79 = 0;
    pReplay.m_UploadDate = pRankData->scoreValue;
    for ( i = 0i64; i < 6; ++i )
      v79 += pReplay.m_BufferSize[i][1] + pReplay.m_BufferSize[i][0];
    v81 = (char *)aligned_malloc(v79, 0x20ui64);
    if ( v81 )
    {
      for ( j = 0i64; j < 6; ++j )
      {
        v83 = pReplay.m_BufferSize[j][0] + (unsigned __int64)pReplay.m_BufferSize[j][1];
        if ( v83 )
        {
          v84 = &v81[v10];
          memmove(&v81[v10], &pResult->m_pAttachDataArray->m_Buf[v10 + 1104], v83);
          v10 += v83;
          pReplay.m_pBuffer[j] = v84;
        }
      }
      pReplay.m_UploadOnlineId.data = *(_QWORD *)result;
      time64(&result);
      pReplay.m_DownloadDate = result;
      pReplay.m_Download = 1;
      AppMain::SetReplaySaveData(this, &pReplay);
      *(_QWORD *)v87->pBuffer = v81;
      AppMain::SaveDataAsyncSave(this, v85);
    }
  }
}

__int64 __fastcall GT_ReplaySaveWait(GENERAL_TASK *pGT)
{
  void **pBuffer; // rdi
  int iStat; // eax

  pBuffer = (void **)pGT->pBuffer;
  if ( pBuffer && AppMain::SaveDataIsSaveReady((AppMain *)pGT) )
  {
    if ( *pBuffer )
    {
      aligned_free(*pBuffer);
      *pBuffer = 0i64;
    }
    iStat = pGT->iStat;
    if ( (iStat & 1) != 0 )
      pGT->iStat = iStat | 6;
  }
  return 0i64;
}

int printf(const char *const _Format, ...)
{
  _iobuf *v2; // rbx
  unsigned __int64 *v3; // rax
  va_list va; // [rsp+58h] [rbp+10h] BYREF

  va_start(va, _Format);
  v2 = _acrt_iob_func(1u);
  v3 = _local_stdio_printf_options();
  return _stdio_common_vfprintf(*v3, v2, _Format, 0i64, va);
}

