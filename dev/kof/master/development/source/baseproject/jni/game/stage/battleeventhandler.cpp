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

class BattleListenerList
{
	class Items_t;
private:
	std::vector<BattleEventHandler::Listener *,std::allocator<BattleEventHandler::Listener *> > m_items; // 0x0
public:
	BattleListenerList(const BattleListenerList &);
	BattleListenerList();
	~BattleListenerList();
	void add(BattleEventHandler::Listener *);
	void remove(BattleEventHandler::Listener *);
	long size();
	long indexOf(BattleEventHandler::Listener *);
	BattleEventHandler::Listener * operator[](long);
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<BattleEventHandler::Listener *> > > begin();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<BattleEventHandler::Listener *> > > begin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<BattleEventHandler::Listener *> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<BattleEventHandler::Listener *> > > end();
private:
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<BattleEventHandler::Listener *> > > find(BattleEventHandler::Listener *);
	bool isEntry(BattleEventHandler::Listener *);
public:
	BattleListenerList & operator=(const BattleListenerList &);
};
class std::vector<BattleEventHandler::Listener *,std::allocator<BattleEventHandler::Listener *> > :
	std::_Vector_alloc<std::_Vec_base_types<BattleEventHandler::Listener *,std::allocator<BattleEventHandler::Listener *> > >
{
	class _Myt;
	class _Mybase;
	class allocator_type;
	struct _Alty;
	typedef BattleEventHandler::Listener value_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef BattleEventHandler::Listener * pointer;
	typedef BattleEventHandler::Listener * const_pointer;
	typedef BattleEventHandler::Listener * reference;
	typedef BattleEventHandler::Listener * const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
public:
	vector<BattleEventHandler::Listener *,std::allocator<BattleEventHandler::Listener *> >(std::initializer_list<BattleEventHandler::Listener *>, const std::allocator<BattleEventHandler::Listener *> &);
	vector<BattleEventHandler::Listener *,std::allocator<BattleEventHandler::Listener *> >(std::vector<BattleEventHandler::Listener *,std::allocator<BattleEventHandler::Listener *> > &, const std::allocator<BattleEventHandler::Listener *> &);
	vector<BattleEventHandler::Listener *,std::allocator<BattleEventHandler::Listener *> >(std::vector<BattleEventHandler::Listener *,std::allocator<BattleEventHandler::Listener *> > &);
	vector<BattleEventHandler::Listener *,std::allocator<BattleEventHandler::Listener *> >(const std::vector<BattleEventHandler::Listener *,std::allocator<BattleEventHandler::Listener *> > &, const std::allocator<BattleEventHandler::Listener *> &);
	vector<BattleEventHandler::Listener *,std::allocator<BattleEventHandler::Listener *> >(const std::vector<BattleEventHandler::Listener *,std::allocator<BattleEventHandler::Listener *> > &);
	vector<BattleEventHandler::Listener *,std::allocator<BattleEventHandler::Listener *> >(unsigned long long, BattleEventHandler::Listener * &, const std::allocator<BattleEventHandler::Listener *> &);
	vector<BattleEventHandler::Listener *,std::allocator<BattleEventHandler::Listener *> >(unsigned long long, BattleEventHandler::Listener * &);
	vector<BattleEventHandler::Listener *,std::allocator<BattleEventHandler::Listener *> >(unsigned long long);
	vector<BattleEventHandler::Listener *,std::allocator<BattleEventHandler::Listener *> >(const std::allocator<BattleEventHandler::Listener *> &);
	vector<BattleEventHandler::Listener *,std::allocator<BattleEventHandler::Listener *> >();
	void _Construct_n(unsigned long long, BattleEventHandler::Listener * *);
	std::vector<BattleEventHandler::Listener *,std::allocator<BattleEventHandler::Listener *> > & operator=(const std::vector<BattleEventHandler::Listener *,std::allocator<BattleEventHandler::Listener *> > &);
	std::vector<BattleEventHandler::Listener *,std::allocator<BattleEventHandler::Listener *> > & operator=(std::initializer_list<BattleEventHandler::Listener *>);
	std::vector<BattleEventHandler::Listener *,std::allocator<BattleEventHandler::Listener *> > & operator=(std::vector<BattleEventHandler::Listener *,std::allocator<BattleEventHandler::Listener *> > &);
	void _Assign_rv(std::vector<BattleEventHandler::Listener *,std::allocator<BattleEventHandler::Listener *> > &);
	void _Assign_rv(std::vector<BattleEventHandler::Listener *,std::allocator<BattleEventHandler::Listener *> > &, std::integral_constant<bool,0>);
	void _Assign_rv(std::vector<BattleEventHandler::Listener *,std::allocator<BattleEventHandler::Listener *> > &, std::integral_constant<bool,1>);
	void push_back(BattleEventHandler::Listener * &);
	void push_back(BattleEventHandler::Listener * &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<BattleEventHandler::Listener *> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<BattleEventHandler::Listener *> > >, unsigned long long, BattleEventHandler::Listener * &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<BattleEventHandler::Listener *> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<BattleEventHandler::Listener *> > >, BattleEventHandler::Listener * &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<BattleEventHandler::Listener *> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<BattleEventHandler::Listener *> > >, std::initializer_list<BattleEventHandler::Listener *>);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<BattleEventHandler::Listener *> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<BattleEventHandler::Listener *> > >, BattleEventHandler::Listener * &);
	void assign(unsigned long long, BattleEventHandler::Listener * &);
	void assign(std::initializer_list<BattleEventHandler::Listener *>);
	~vector<BattleEventHandler::Listener *,std::allocator<BattleEventHandler::Listener *> >();
	void reserve(unsigned long long);
	unsigned long long capacity();
	unsigned long long _Unused_capacity();
	unsigned long long _Has_unused_capacity();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<BattleEventHandler::Listener *> > > begin();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<BattleEventHandler::Listener *> > > begin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<BattleEventHandler::Listener *> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<BattleEventHandler::Listener *> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<BattleEventHandler::Listener *> > > _Make_iter(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<BattleEventHandler::Listener *> > >);
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<BattleEventHandler::Listener *> > > > rbegin();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<BattleEventHandler::Listener *> > > > rbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<BattleEventHandler::Listener *> > > > rend();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<BattleEventHandler::Listener *> > > > rend();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<BattleEventHandler::Listener *> > > cbegin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<BattleEventHandler::Listener *> > > cend();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<BattleEventHandler::Listener *> > > > crbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<BattleEventHandler::Listener *> > > > crend();
	void shrink_to_fit();
	void resize(unsigned long long, BattleEventHandler::Listener * &);
	void resize(unsigned long long);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	std::allocator<BattleEventHandler::Listener *> get_allocator();
	BattleEventHandler::Listener * & at(unsigned long long);
	BattleEventHandler::Listener * & at(unsigned long long);
	BattleEventHandler::Listener * & operator[](unsigned long long);
	BattleEventHandler::Listener * & operator[](unsigned long long);
	BattleEventHandler::Listener * * data();
	BattleEventHandler::Listener * * data();
	BattleEventHandler::Listener * & front();
	BattleEventHandler::Listener * & front();
	BattleEventHandler::Listener * & back();
	BattleEventHandler::Listener * & back();
	void pop_back();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<BattleEventHandler::Listener *> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<BattleEventHandler::Listener *> > >, std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<BattleEventHandler::Listener *> > >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<BattleEventHandler::Listener *> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<BattleEventHandler::Listener *> > >);
	void _Pop_back_n(unsigned long long);
	void clear();
	void swap(std::vector<BattleEventHandler::Listener *,std::allocator<BattleEventHandler::Listener *> > &);
protected:
	bool _Buy(unsigned long long);
	void _Destroy(BattleEventHandler::Listener * *, BattleEventHandler::Listener * *);
	unsigned long long _Grow_to(unsigned long long);
	bool _Inside(BattleEventHandler::Listener * *);
	void _Reallocate(unsigned long long);
	void _Reserve(unsigned long long);
	void _Tidy();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<BattleEventHandler::Listener *> > > _Insert_n(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<BattleEventHandler::Listener *> > >, unsigned long long, BattleEventHandler::Listener * &);
	BattleEventHandler::Listener * * _Ufill(BattleEventHandler::Listener * *, unsigned long long, BattleEventHandler::Listener * *);
	void _Xlen();
	void _Xran();
	void _Orphan_range(BattleEventHandler::Listener * *, BattleEventHandler::Listener * *);
};
std::piecewise_construct_t std::piecewise_construct; // 0x1408A0B34
void BattleListenerList::add(BattleEventHandler::Listener * pItem); // 0x14020A1F0
void BattleListenerList::remove(BattleEventHandler::Listener * pItem); // 0x14020A2B0
BattleEventHandler & BattleEventHandler::getInstance(); // 0x14020A380
void BattleEventHandler::CallEvent_RoundStartTalkOut(STAGE_ID stageID, long round); // 0x14020A410
void BattleEventHandler::CallEvent_CharacterActivity(PLAYER_ID playerID, BattleEventHandler::EActivity::Type activity, long score); // 0x14020A470//decompilation failure at 1408A0B34!
void __fastcall BattleEventHandler::CallEvent_CharacterActivity(
        BattleEventHandler *this,
        PLAYER_ID playerID,
        BattleEventHandler::EActivity::Type activity,
        int score)
{
  BattleEventHandler::Listener **i; // rbx

  for ( i = this->m_pListenerList->m_items._Mypair._Myval2._Myfirst;
        i != this->m_pListenerList->m_items._Mypair._Myval2._Mylast;
        ++i )
  {
    (*i)->OnEventCharacterActivity(*i, playerID, activity, score);
  }
}

void __fastcall BattleEventHandler::CallEvent_RoundStartTalkOut(BattleEventHandler *this, STAGE_ID stageID, int round)
{
  BattleEventHandler::Listener **i; // rbx

  for ( i = this->m_pListenerList->m_items._Mypair._Myval2._Myfirst;
        i != this->m_pListenerList->m_items._Mypair._Myval2._Mylast;
        ++i )
  {
    (*i)->OnEventRoundStartTalkOut(*i, stageID, round);
  }
}

void __fastcall ActorWeapon::ActionFlagCheck(_SETJMP_FLOAT128 *JumpBuffer)
{
  ;
}

void __fastcall std::vector<extension::exsound_detail::PreloadedAudioSet *>::_Reallocate(
        std::vector<extension::exsound_detail::PreloadedAudioSet *> *this,
        unsigned __int64 _Count)
{
  _QWORD *v4; // rbx
  unsigned __int64 v5; // rcx
  void *v6; // rax
  std::allocator<AgLogger *> *v7; // rcx
  signed __int64 v8; // r14

  if ( _Count )
  {
    if ( _Count > 0x1FFFFFFFFFFFFFFFi64 )
      std::_Xbad_alloc();
    v5 = 8 * _Count;
    if ( 8 * _Count < 0x1000 )
    {
      v4 = operator new(v5);
    }
    else
    {
      if ( v5 + 39 <= v5 )
        std::_Xbad_alloc();
      v6 = operator new(v5 + 39);
      v4 = (_QWORD *)(((unsigned __int64)v6 + 39) & 0xFFFFFFFFFFFFFFE0ui64);
      *(v4 - 1) = v6;
    }
  }
  else
  {
    v4 = 0i64;
  }
  memmove(
    v4,
    this->_Mypair._Myval2._Myfirst,
    (char *)this->_Mypair._Myval2._Mylast - (char *)this->_Mypair._Myval2._Myfirst);
  v8 = this->_Mypair._Myval2._Mylast - this->_Mypair._Myval2._Myfirst;
  if ( this->_Mypair._Myval2._Myfirst )
    std::_Wrap_alloc<std::allocator<OGLShader *>>::deallocate(
      v7,
      (AgLogger **)this->_Mypair._Myval2._Myfirst,
      this->_Mypair._Myval2._Myend - this->_Mypair._Myval2._Myfirst);
  this->_Mypair._Myval2._Myend = (extension::exsound_detail::PreloadedAudioSet **)&v4[_Count];
  this->_Mypair._Myval2._Mylast = (extension::exsound_detail::PreloadedAudioSet **)&v4[v8];
  this->_Mypair._Myval2._Myfirst = (extension::exsound_detail::PreloadedAudioSet **)v4;
}

void __fastcall std::vector<BattleStageEvent *>::_Reserve(
        std::vector<void (__cdecl*)(extension::exsound_detail::SoundBankParser::BinaryParseState &,extension::exsound_detail::SoundChannelDefinition &),std::allocator<void (__cdecl*)(extension::exsound_detail::SoundBankParser::BinaryParseState &,extension::exsound_detail::SoundChannelDefinition &)> > *this,
        unsigned __int64 _Count)
{
  void (__fastcall **Myend)(extension::exsound_detail::SoundBankParser::BinaryParseState *, extension::exsound_detail::SoundChannelDefinition *); // r9
  void (__fastcall **Mylast)(extension::exsound_detail::SoundBankParser::BinaryParseState *, extension::exsound_detail::SoundChannelDefinition *); // rdx
  void (__fastcall **Myfirst)(extension::exsound_detail::SoundBankParser::BinaryParseState *, extension::exsound_detail::SoundChannelDefinition *); // rcx
  __int64 v6; // rdx
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // rcx

  Myend = this->_Mypair._Myval2._Myend;
  Mylast = this->_Mypair._Myval2._Mylast;
  if ( !(Myend - Mylast) )
  {
    Myfirst = this->_Mypair._Myval2._Myfirst;
    v6 = Mylast - Myfirst;
    if ( v6 == 0x1FFFFFFFFFFFFFFFi64 )
      std::_Xlength_error("vector<T> too long");
    v7 = v6 + 1;
    v8 = Myend - Myfirst;
    v9 = 0i64;
    if ( 0x1FFFFFFFFFFFFFFFi64 - (v8 >> 1) >= v8 )
      v9 = v8 + (v8 >> 1);
    if ( v9 >= v7 )
      v7 = v9;
    std::vector<extension::exsound_detail::PreloadedAudioSet *>::_Reallocate(
      (std::vector<extension::exsound_detail::PreloadedAudioSet *> *)this,
      v7);
  }
}

void __fastcall BattleListenerList::add(BattleListenerList *this, BattleEventHandler::Listener *pItem)
{
  BattleEventHandler::Listener **Mylast; // rax
  BattleEventHandler::Listener **Myfirst; // r8
  BattleEventHandler::Listener **i; // rcx
  __int64 v7; // rdi
  BattleEventHandler::Listener **v8; // rdx
  BattleEventHandler::Listener **v9; // rax
  BattleEventHandler::Listener *v10; // [rsp+38h] [rbp+10h] BYREF

  v10 = pItem;
  Mylast = this->m_items._Mypair._Myval2._Mylast;
  Myfirst = this->m_items._Mypair._Myval2._Myfirst;
  for ( i = Myfirst; i != Mylast; ++i )
  {
    if ( *i == pItem )
      break;
  }
  if ( i == Mylast )
  {
    if ( &v10 >= Mylast || Myfirst > &v10 )
    {
      if ( Mylast == this->m_items._Mypair._Myval2._Myend )
        std::vector<BattleStageEvent *>::_Reserve(
          (std::vector<void (__cdecl*)(extension::exsound_detail::SoundBankParser::BinaryParseState &,extension::exsound_detail::SoundChannelDefinition &),std::allocator<void (__cdecl*)(extension::exsound_detail::SoundBankParser::BinaryParseState &,extension::exsound_detail::SoundChannelDefinition &)> > *)this,
          (unsigned __int64)pItem);
      v9 = this->m_items._Mypair._Myval2._Mylast;
      if ( v9 )
        *v9 = pItem;
    }
    else
    {
      v7 = &v10 - Myfirst;
      if ( Mylast == this->m_items._Mypair._Myval2._Myend )
        std::vector<BattleStageEvent *>::_Reserve(
          (std::vector<void (__cdecl*)(extension::exsound_detail::SoundBankParser::BinaryParseState &,extension::exsound_detail::SoundChannelDefinition &),std::allocator<void (__cdecl*)(extension::exsound_detail::SoundBankParser::BinaryParseState &,extension::exsound_detail::SoundChannelDefinition &)> > *)this,
          (unsigned __int64)pItem);
      v8 = this->m_items._Mypair._Myval2._Mylast;
      if ( v8 )
      {
        *v8 = this->m_items._Mypair._Myval2._Myfirst[v7];
        ++this->m_items._Mypair._Myval2._Mylast;
        return;
      }
    }
    ++this->m_items._Mypair._Myval2._Mylast;
  }
}

void __fastcall std::_Wrap_alloc<std::allocator<OGLShader *>>::deallocate(
        std::allocator<AgLogger *> *this,
        AgLogger **_Ptr,
        unsigned __int64 _Count)
{
  AgLogger **v3; // rax
  char *v4; // rdx

  if ( _Count > 0x1FFFFFFFFFFFFFFFi64 )
    invalid_parameter_noinfo_noreturn();
  if ( 8 * _Count >= 0x1000 )
  {
    if ( ((unsigned __int8)_Ptr & 0x1F) != 0 )
      invalid_parameter_noinfo_noreturn();
    v3 = (AgLogger **)*(_Ptr - 1);
    if ( v3 >= _Ptr )
      invalid_parameter_noinfo_noreturn();
    v4 = (char *)((char *)_Ptr - (char *)v3);
    if ( (unsigned __int64)v4 < 8 )
      invalid_parameter_noinfo_noreturn();
    if ( (unsigned __int64)v4 > 0x27 )
      invalid_parameter_noinfo_noreturn();
    _Ptr = v3;
  }
  operator delete(_Ptr);
}

BattleEventHandler *__fastcall BattleEventHandler::getInstance()
{
  BattleListenerList *v1; // [rsp+40h] [rbp+8h]

  if ( dword_140ACDA50 > *(_DWORD *)(*(_QWORD *)NtCurrentTeb()->Reserved1[11] + 40i64) )
  {
    Init_thread_header(&dword_140ACDA50);
    if ( dword_140ACDA50 == -1 )
    {
      v1 = (BattleListenerList *)operator new(0x18ui64);
      v1->m_items._Mypair._Myval2._Myfirst = 0i64;
      v1->m_items._Mypair._Myval2._Mylast = 0i64;
      v1->m_items._Mypair._Myval2._Myend = 0i64;
      g_impl.m_pListenerList = v1;
      atexit(BattleEventHandler::getInstance_::_2_::_dynamic_atexit_destructor_for__g_impl__);
      Init_thread_footer(&dword_140ACDA50);
    }
  }
  return &g_impl;
}

void __fastcall BattleListenerList::remove(BattleListenerList *this, BattleEventHandler::Listener *pItem)
{
  BattleEventHandler::Listener **Myfirst; // rbx
  BattleEventHandler::Listener **Mylast; // rdx
  BattleEventHandler::Listener **i; // rax
  __int64 v7; // rcx
  BattleEventHandler::Listener **v8; // rax
  unsigned __int64 v9; // r10
  BattleEventHandler::Listener **v10; // rax
  char *v11; // rdi

  Myfirst = this->m_items._Mypair._Myval2._Myfirst;
  Mylast = this->m_items._Mypair._Myval2._Mylast;
  for ( i = this->m_items._Mypair._Myval2._Myfirst; i != Mylast; ++i )
  {
    if ( *i == pItem )
      break;
  }
  if ( i != Mylast )
  {
    if ( Myfirst != Mylast )
    {
      do
      {
        if ( *Myfirst == pItem )
          break;
        ++Myfirst;
      }
      while ( Myfirst != Mylast );
      if ( Myfirst != Mylast )
      {
        v7 = 0i64;
        v8 = Myfirst + 1;
        v9 = (unsigned __int64)((char *)Mylast - (char *)(Myfirst + 1) + 7) >> 3;
        if ( Myfirst + 1 > Mylast )
          v9 = 0i64;
        if ( v9 )
        {
          do
          {
            if ( *v8 != pItem )
              *Myfirst++ = *v8;
            ++v8;
            ++v7;
          }
          while ( v7 != v9 );
        }
      }
    }
    v10 = this->m_items._Mypair._Myval2._Myfirst;
    if ( Myfirst != this->m_items._Mypair._Myval2._Myfirst || Mylast != this->m_items._Mypair._Myval2._Mylast )
    {
      if ( Myfirst == Mylast )
        return;
      v11 = (char *)((char *)this->m_items._Mypair._Myval2._Mylast - (char *)Mylast);
      memmove(Myfirst, Mylast, (size_t)v11);
      v10 = (BattleEventHandler::Listener **)((char *)Myfirst + (_QWORD)v11);
    }
    this->m_items._Mypair._Myval2._Mylast = v10;
  }
}

