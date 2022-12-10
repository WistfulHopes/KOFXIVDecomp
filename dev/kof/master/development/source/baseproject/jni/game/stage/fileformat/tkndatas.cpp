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
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglvec3.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/fileutil.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglinputstream.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/tknfileutil.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/collisionmodel.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmatrix.cpp"

std::piecewise_construct_t std::piecewise_construct; // 0x1408A0B45
TknData::~TknData(); // 0x140224870
TknDataScene::~TknDataScene(); // 0x1402248E0
TknDataScene::TknDataScene(TknDataScene & src); // 0x140224950
TknDataScene * TknDataScene::create(OGLInputStream & stream, long dataVersion); // 0x140224A80
TknDataEventConditions::~TknDataEventConditions(); // 0x140224DD0
TknDataEventConditions::TknDataEventConditions(TknDataEventConditions & src); // 0x140224E40
TknDataEventConditions * TknDataEventConditions::create(OGLInputStream & stream, long dataVersion); // 0x140224FB0
TknData::SceneTrigger2 TknDataEventConditions::timeToTorigger(long time); // 0x1402256A0
TknDataModel::~TknDataModel(); // 0x140225770
TknDataModel::TknDataModel(TknDataModel & src); // 0x140225960
TknDataModel * TknDataModel::create(OGLInputStream & stream, long dataVersion); // 0x140225DD0
TknDataUVAnimation::~TknDataUVAnimation(); // 0x140226800
TknDataUVAnimation::TknDataUVAnimation(TknDataUVAnimation & src); // 0x1402268A0
TknDataUVAnimation * TknDataUVAnimation::create(OGLInputStream & stream, long dataVersion); // 0x140226AB0
TknDataMotion * TknDataMotion::create(OGLInputStream & stream, long dataVersion); // 0x1402275C0
TknDataObject::~TknDataObject(); // 0x140227790
TknDataObject::TknDataObject(TknDataObject & src); // 0x140227910
TknDataObject * TknDataObject::create(OGLInputStream & stream, long dataVersion); // 0x140227D60
TknDataEvent::~TknDataEvent(); // 0x140228760
TknDataEvent::TknDataEvent(TknDataEvent & src); // 0x1402287F0
TknDataEvent * TknDataEvent::create(OGLInputStream & stream, long dataVersion); // 0x1402289F0
TknDataEventModelAnimation * TknDataEventModelAnimation::create(OGLInputStream & stream, long dataVersion); // 0x140229280
TknDataEventEffectAnimation * TknDataEventEffectAnimation::create(OGLInputStream & stream, long dataVersion); // 0x140229790
TknDataEventTranslation::TknDataEventTranslation(TknDataEventTranslation & src); // 0x140229A40
TknDataEventTranslation * TknDataEventTranslation::create(OGLInputStream & stream, long dataVersion); // 0x140229C30
TknDataEventScript * TknDataEventScript::create(OGLInputStream & stream, long dataVersion); // 0x14022A980
TknDataLight::TknDataLight(TknDataLight & src); // 0x14022AC40
TknDataLight * TknDataLight::create(OGLInputStream & stream, long dataVersion); // 0x14022AD20
TknDataEffect::~TknDataEffect(); // 0x14022B2C0
TknDataEffect::TknDataEffect(TknDataEffect & src); // 0x14022B350
TknDataEffect * TknDataEffect::create(OGLInputStream & stream, long dataVersion); // 0x14022B3F0
TknDataBillboard::~TknDataBillboard(); // 0x14022B670
TknDataBillboard::TknDataBillboard(TknDataBillboard & src); // 0x14022B760
TknDataBillboard * TknDataBillboard::create(OGLInputStream & stream, long dataVersion); // 0x14022B990
TknDataEventBillboardAnimation * TknDataEventBillboardAnimation::create(OGLInputStream & stream, long dataVersion); // 0x14022C040
TknDataEventSound * TknDataEventSound::create(OGLInputStream & stream, long dataVersion); // 0x14022C290//decompilation failure at 1408A0B45!
void __fastcall TknDataBillboard::TknDataBillboard(TknDataBillboard *this, TknDataBillboard *src)
{
  unsigned __int64 m_rectsCount; // rax
  __int64 v5; // rbp
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // kr00_8
  void *v8; // r14
  int v9; // er13
  __int64 v10; // rbx
  TknDataBillboard::BillboardRect *m_pRects; // r12
  TknDataBillboard::BillboardRect *v12; // rsi
  unsigned __int64 imagesPanelIndexCount; // rax
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // kr10_8
  int v16; // er8
  __int64 v17; // rdx
  const char *m_pTextureFileName; // rsi
  void *v19; // r12
  __int64 v20; // rax
  unsigned __int64 v21; // rbx
  CollisionModel *v22; // rax
  const char *m_pUserName; // rsi
  int v24; // ebp
  CollisionModel *v25; // [rsp+78h] [rbp+10h]

  this->__vftable = (TknDataBillboard_vtbl *)&TknData::`vftable';
  this->m_uniqueID = src->m_uniqueID;
  this->m_parentUniqueID = src->m_parentUniqueID;
  this->m_dataType = src->m_dataType;
  this->TknData::m_pUserName = FileUtil::copyString(src->TknData::m_pUserName);
  this->__vftable = (TknDataBillboard_vtbl *)&TknDataBillboard::`vftable';
  m_rectsCount = src->m_rectsCount;
  this->m_rectsCount = m_rectsCount;
  v5 = -1i64;
  if ( (int)m_rectsCount <= 0 )
  {
    v8 = 0i64;
    this->m_pRects = 0i64;
  }
  else
  {
    v7 = m_rectsCount;
    v6 = 24 * m_rectsCount;
    if ( !is_mul_ok(v7, 0x18ui64) )
      v6 = -1i64;
    this->m_pRects = (TknDataBillboard::BillboardRect *)operator new[](v6);
    v8 = 0i64;
    v9 = 0;
    if ( this->m_rectsCount > 0 )
    {
      v10 = 0i64;
      do
      {
        m_pRects = src->m_pRects;
        v12 = this->m_pRects;
        v12[v10].angle = m_pRects[v10].angle;
        imagesPanelIndexCount = m_pRects[v10].imagesPanelIndexCount;
        v12[v10].imagesPanelIndexCount = imagesPanelIndexCount;
        v15 = imagesPanelIndexCount;
        v14 = 4 * imagesPanelIndexCount;
        if ( !is_mul_ok(v15, 4ui64) )
          v14 = -1i64;
        v12[v10].pImagesPanelIndex = (int *)operator new[](v14);
        v16 = 0;
        if ( v12[v10].imagesPanelIndexCount > 0 )
        {
          v17 = 0i64;
          do
          {
            v12[v10].pImagesPanelIndex[v17] = m_pRects[v10].pImagesPanelIndex[v17];
            ++v16;
            ++v17;
          }
          while ( v16 < v12[v10].imagesPanelIndexCount );
        }
        ++v9;
        ++v10;
      }
      while ( v9 < this->m_rectsCount );
    }
  }
  this->m_animationCount = src->m_animationCount;
  this->m_imageAnimationFrame = src->m_imageAnimationFrame;
  this->m_imageRenderSize = src->m_imageRenderSize;
  this->m_textureModelUID = src->m_textureModelUID;
  this->m_textureIndex = src->m_textureIndex;
  this->m_materialIndex = src->m_materialIndex;
  this->m_textureType = src->m_textureType;
  this->m_multiTextureIndex = src->m_multiTextureIndex;
  m_pTextureFileName = src->m_pTextureFileName;
  if ( m_pTextureFileName )
  {
    v20 = -1i64;
    do
      ++v20;
    while ( m_pTextureFileName[v20] );
    if ( (int)v20 >= 0 )
    {
      v21 = (int)v20 + 1;
      v19 = operator new[](v21);
      memmove(v19, m_pTextureFileName, v21);
    }
    else
    {
      v19 = 0i64;
    }
  }
  else
  {
    v19 = 0i64;
  }
  this->m_pTextureFileName = (const char *)v19;
  this->m_textureWidth = src->m_textureWidth;
  this->m_textureHeight = src->m_textureHeight;
  v25 = (CollisionModel *)operator new(0xA8ui64);
  CollisionModel::CollisionModel(v25, src->m_pCullingModel);
  this->m_pCullingModel = v22;
  m_pUserName = src->m_pUserName;
  if ( m_pUserName )
  {
    do
      ++v5;
    while ( m_pUserName[v5] );
    if ( (int)v5 >= 0 )
    {
      v24 = v5 + 1;
      v8 = operator new[](v24);
      memmove(v8, m_pUserName, v24);
    }
  }
  this->m_pUserName = (const char *)v8;
}

void __fastcall TknDataEffect::TknDataEffect(TknDataEffect *this, TknDataEffect *src)
{
  CollisionModel *v4; // rax
  CollisionModel *v5; // [rsp+48h] [rbp+10h]

  this->__vftable = (TknDataEffect_vtbl *)&TknData::`vftable';
  this->m_uniqueID = src->m_uniqueID;
  this->m_parentUniqueID = src->m_parentUniqueID;
  this->m_dataType = src->m_dataType;
  this->TknData::m_pUserName = FileUtil::copyString(src->TknData::m_pUserName);
  this->__vftable = (TknDataEffect_vtbl *)&TknDataEffect::`vftable';
  this->m_pSearchKey = FileUtil::copyString(src->m_pSearchKey);
  this->m_effectIndex = src->m_effectIndex;
  this->m_pUserName = FileUtil::copyString(src->m_pUserName);
  v5 = (CollisionModel *)operator new(0xA8ui64);
  CollisionModel::CollisionModel(v5, src->m_pCullingModel);
  this->m_pCullingModel = v4;
}

void __fastcall TknDataEvent::TknDataEvent(TknDataEvent *this, TknDataEvent *src)
{
  void *v4; // rbp
  unsigned __int64 m_animationCount; // rax
  __int64 v6; // rbx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // kr00_8
  int v9; // er8
  __int64 v10; // rdx
  unsigned __int64 m_translationCount; // rax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // kr10_8
  int v14; // er8
  __int64 v15; // rdx
  unsigned __int64 m_scriptCount; // rcx
  unsigned __int64 v17; // rax
  int v18; // er8
  __int64 v19; // rdx
  const char *m_pCullingReferenceBoneName; // r14
  int v21; // ebx

  this->__vftable = (TknDataEvent_vtbl *)&TknData::`vftable';
  this->m_uniqueID = src->m_uniqueID;
  this->m_parentUniqueID = src->m_parentUniqueID;
  this->m_dataType = src->m_dataType;
  this->m_pUserName = FileUtil::copyString(src->m_pUserName);
  this->__vftable = (TknDataEvent_vtbl *)&TknDataEvent::`vftable';
  v4 = 0i64;
  this->m_pAnimationUIDs = 0i64;
  this->m_pTranslationUIDs = 0i64;
  this->m_pScriptUIDs = 0i64;
  this->m_totalFrame = src->m_totalFrame;
  this->m_startFrame = src->m_startFrame;
  this->m_objectUID = src->m_objectUID;
  this->m_finishAction = src->m_finishAction;
  this->m_nextSceneUID = src->m_nextSceneUID;
  this->m_bFinishActionInitParams = src->m_bFinishActionInitParams;
  this->m_animationType = src->m_animationType;
  m_animationCount = src->m_animationCount;
  this->m_animationCount = m_animationCount;
  v6 = -1i64;
  if ( (int)m_animationCount > 0 )
  {
    v8 = m_animationCount;
    v7 = 4 * m_animationCount;
    if ( !is_mul_ok(v8, 4ui64) )
      v7 = -1i64;
    this->m_pAnimationUIDs = (int *)operator new[](v7);
    v9 = 0;
    if ( this->m_animationCount > 0 )
    {
      v10 = 0i64;
      do
      {
        this->m_pAnimationUIDs[v10] = src->m_pAnimationUIDs[v10];
        ++v9;
        ++v10;
      }
      while ( v9 < this->m_animationCount );
    }
  }
  m_translationCount = src->m_translationCount;
  this->m_translationCount = m_translationCount;
  if ( (int)m_translationCount > 0 )
  {
    v13 = m_translationCount;
    v12 = 4 * m_translationCount;
    if ( !is_mul_ok(v13, 4ui64) )
      v12 = -1i64;
    this->m_pTranslationUIDs = (int *)operator new[](v12);
    v14 = 0;
    if ( this->m_translationCount > 0 )
    {
      v15 = 0i64;
      do
      {
        this->m_pTranslationUIDs[v15] = src->m_pTranslationUIDs[v15];
        ++v14;
        ++v15;
      }
      while ( v14 < this->m_translationCount );
    }
  }
  m_scriptCount = src->m_scriptCount;
  this->m_scriptCount = m_scriptCount;
  if ( (int)m_scriptCount > 0 )
  {
    v17 = 4 * m_scriptCount;
    if ( !is_mul_ok(m_scriptCount, 4ui64) )
      v17 = -1i64;
    this->m_pScriptUIDs = (int *)operator new[](v17);
    v18 = 0;
    if ( this->m_scriptCount > 0 )
    {
      v19 = 0i64;
      do
      {
        this->m_pScriptUIDs[v19] = src->m_pScriptUIDs[v19];
        ++v18;
        ++v19;
      }
      while ( v18 < this->m_scriptCount );
    }
  }
  this->m_bCullingEnable = src->m_bCullingEnable;
  this->m_bCullingUseReferenceBone = src->m_bCullingUseReferenceBone;
  m_pCullingReferenceBoneName = src->m_pCullingReferenceBoneName;
  if ( m_pCullingReferenceBoneName )
  {
    do
      ++v6;
    while ( m_pCullingReferenceBoneName[v6] );
    if ( (int)v6 >= 0 )
    {
      v21 = v6 + 1;
      v4 = operator new[](v21);
      memmove(v4, m_pCullingReferenceBoneName, v21);
    }
  }
  this->m_pCullingReferenceBoneName = (const char *)v4;
  this->m_bindEventUID = src->m_bindEventUID;
  this->m_bActive = src->m_bActive;
}

void __fastcall TknDataEventConditions::TknDataEventConditions(
        TknDataEventConditions *this,
        TknDataEventConditions *src)
{
  int v4; // esi
  unsigned __int64 m_skipCallCharacterIDCount; // rax
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // kr00_8
  int v8; // er8
  __int64 v9; // rdx
  unsigned __int64 m_skipPairCharacterIDCount; // rcx
  unsigned __int64 v11; // rax
  __int64 v12; // rdx

  this->__vftable = (TknDataEventConditions_vtbl *)&TknData::`vftable';
  this->m_uniqueID = src->m_uniqueID;
  this->m_parentUniqueID = src->m_parentUniqueID;
  this->m_dataType = src->m_dataType;
  this->m_pUserName = FileUtil::copyString(src->m_pUserName);
  this->__vftable = (TknDataEventConditions_vtbl *)&TknDataEventConditions::`vftable';
  this->m_sceneUID = src->m_sceneUID;
  this->m_triggerEvent = src->m_triggerEvent;
  this->m_triggerCondition = src->m_triggerCondition;
  this->m_bNeutral = src->m_bNeutral;
  v4 = 0;
  this->m_pSkipCallCharacterIDs = 0i64;
  m_skipCallCharacterIDCount = src->m_skipCallCharacterIDCount;
  this->m_skipCallCharacterIDCount = m_skipCallCharacterIDCount;
  if ( (int)m_skipCallCharacterIDCount > 0 )
  {
    v7 = m_skipCallCharacterIDCount;
    v6 = 4 * m_skipCallCharacterIDCount;
    if ( !is_mul_ok(v7, 4ui64) )
      v6 = -1i64;
    this->m_pSkipCallCharacterIDs = (int *)operator new[](v6);
    v8 = 0;
    if ( this->m_skipCallCharacterIDCount > 0 )
    {
      v9 = 0i64;
      do
      {
        this->m_pSkipCallCharacterIDs[v9] = src->m_pSkipCallCharacterIDs[v9];
        ++v8;
        ++v9;
      }
      while ( v8 < this->m_skipCallCharacterIDCount );
    }
  }
  this->m_pSkipPairCharacterIDs = 0i64;
  m_skipPairCharacterIDCount = src->m_skipPairCharacterIDCount;
  this->m_skipPairCharacterIDCount = m_skipPairCharacterIDCount;
  if ( (int)m_skipPairCharacterIDCount > 0 )
  {
    v11 = 4 * m_skipPairCharacterIDCount;
    if ( !is_mul_ok(m_skipPairCharacterIDCount, 4ui64) )
      v11 = -1i64;
    this->m_pSkipPairCharacterIDs = (int *)operator new[](v11);
    if ( this->m_skipPairCharacterIDCount > 0 )
    {
      v12 = 0i64;
      do
      {
        this->m_pSkipPairCharacterIDs[v12] = src->m_pSkipPairCharacterIDs[v12];
        ++v4;
        ++v12;
      }
      while ( v4 < this->m_skipPairCharacterIDCount );
    }
  }
  this->m_permitAreaSX = src->m_permitAreaSX;
  this->m_permitAreaEX = src->m_permitAreaEX;
  this->m_valueOperationType = src->m_valueOperationType;
  this->m_valueOperatinParam1 = src->m_valueOperatinParam1;
  this->m_valueOperatinParam2 = src->m_valueOperatinParam2;
  this->m_valueCheckType = src->m_valueCheckType;
  this->m_valueCheckNum = src->m_valueCheckNum;
  this->m_actionRate = src->m_actionRate;
}

void __fastcall TknDataEventTranslation::TknDataEventTranslation(
        TknDataEventTranslation *this,
        TknDataEventTranslation *src)
{
  this->__vftable = (TknDataEventTranslation_vtbl *)&TknData::`vftable';
  this->m_uniqueID = src->m_uniqueID;
  this->m_parentUniqueID = src->m_parentUniqueID;
  this->m_dataType = src->m_dataType;
  this->m_pUserName = FileUtil::copyString(src->m_pUserName);
  this->__vftable = (TknDataEventTranslation_vtbl *)&TknDataEventTranslation::`vftable';
  *(_QWORD *)&this->m_position.x = 0i64;
  *(_QWORD *)&this->m_position.z = 0i64;
  *(_QWORD *)&this->m_direction.y = 0i64;
  *(_QWORD *)&this->m_scale.x = 0i64;
  *(_QWORD *)&this->m_scale.z = 0i64;
  *(_QWORD *)&this->m_startPosition.y = 0i64;
  *(_QWORD *)&this->m_startDirection.x = 0i64;
  *(_QWORD *)&this->m_startDirection.z = 0i64;
  *(_QWORD *)&this->m_startScale.y = 0i64;
  *(_QWORD *)&this->m_startCurvePower.x = 0i64;
  this->m_startCurvePower.z = 0.0;
  *(_QWORD *)&this->m_endCurvePower.x = 0i64;
  this->m_endCurvePower.z = 0.0;
  this->m_endFrame = src->m_endFrame;
  this->m_bAnimationNonTrans = src->m_bAnimationNonTrans;
  this->m_bAnimationErase = src->m_bAnimationErase;
  this->m_totalFrame = src->m_totalFrame;
  this->m_position = src->m_position;
  this->m_direction = src->m_direction;
  this->m_scale = src->m_scale;
  this->m_startPosition = src->m_startPosition;
  this->m_startDirection = src->m_startDirection;
  this->m_startScale = src->m_startScale;
  this->m_easingTransX = src->m_easingTransX;
  this->m_easingTransY = src->m_easingTransY;
  this->m_easingTransZ = src->m_easingTransZ;
  this->m_easingRotateX = src->m_easingRotateX;
  this->m_easingRotateY = src->m_easingRotateY;
  this->m_easingRotateZ = src->m_easingRotateZ;
  this->m_bStartCurveEnabled = src->m_bStartCurveEnabled;
  this->m_startCurvePower = src->m_startCurvePower;
  this->m_bEndCurveEnabled = src->m_bEndCurveEnabled;
  this->m_endCurvePower = src->m_endCurvePower;
  this->m_bRotateAutoSetting = src->m_bRotateAutoSetting;
  this->m_bRotateAutoSettingYOnly = src->m_bRotateAutoSettingYOnly;
  this->m_bRotateAutoSettingFree = src->m_bRotateAutoSettingFree;
  this->m_bTransEasingDifferentSetting = src->m_bTransEasingDifferentSetting;
  this->m_bRotateEasingDifferentSetting = src->m_bRotateEasingDifferentSetting;
  this->m_calculationVersion = src->m_calculationVersion;
}

void __fastcall TknDataLight::TknDataLight(TknDataLight *this, TknDataLight *src)
{
  this->__vftable = (TknDataLight_vtbl *)&TknData::`vftable';
  this->m_uniqueID = src->m_uniqueID;
  this->m_parentUniqueID = src->m_parentUniqueID;
  this->m_dataType = src->m_dataType;
  this->m_pUserName = FileUtil::copyString(src->m_pUserName);
  this->__vftable = (TknDataLight_vtbl *)&TknDataLight::`vftable';
  *(_QWORD *)&this->m_position.x = 0i64;
  this->m_position.z = 0.0;
  *(_QWORD *)&this->m_direction.x = 0i64;
  this->m_direction.z = 0.0;
  this->m_type = src->m_type;
  this->m_position = src->m_position;
  this->m_ambient = src->m_ambient;
  this->m_diffuse = src->m_diffuse;
  this->m_specular = src->m_specular;
  this->m_shininess = src->m_shininess;
  this->m_bCastsShadows = src->m_bCastsShadows;
  this->m_constantAtt = src->m_constantAtt;
  this->m_linearAtt = src->m_linearAtt;
  this->m_quadraticAtt = src->m_quadraticAtt;
  this->m_direction = src->m_direction;
  this->m_soptCutOff = src->m_soptCutOff;
  this->m_spotExponent = src->m_spotExponent;
}

void __fastcall TknDataModel::TknDataModel(TknDataModel *this, TknDataModel *src)
{
  unsigned __int64 m_materialCount; // rax
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // kr00_8
  int v7; // er12
  __int64 v8; // r14
  const char *pMaterialName; // rbp
  void *v10; // r15
  __int64 v11; // rax
  unsigned __int64 v12; // rbx
  const char *pUserName; // rbp
  void *v14; // r15
  __int64 v15; // rax
  unsigned __int64 v16; // rbx
  unsigned __int64 m_uvAnimationCount; // rax
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // kr10_8
  int v20; // er8
  __int64 v21; // rdx
  unsigned __int64 m_uvAnimationModelCount; // rax
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // kr20_8
  int v25; // ebp
  __int64 v26; // rbx
  unsigned __int64 textureCount; // rcx
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rcx
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rcx
  unsigned __int64 v34; // rax
  int v35; // er9
  __int64 v36; // r8
  TknDataUVAnimationModelInfo *v37; // rcx
  CollisionModel *v38; // rax
  CollisionModel *v39; // [rsp+78h] [rbp+10h]

  this->__vftable = (TknDataModel_vtbl *)&TknData::`vftable';
  this->m_uniqueID = src->m_uniqueID;
  this->m_parentUniqueID = src->m_parentUniqueID;
  this->m_dataType = src->m_dataType;
  this->m_pUserName = FileUtil::copyString(src->m_pUserName);
  this->__vftable = (TknDataModel_vtbl *)&TknDataModel::`vftable';
  this->m_pModelName = 0i64;
  this->m_pMaterials = 0i64;
  this->m_pUvAnimationUIDs = 0i64;
  this->m_uvAnimationModelCount = 0;
  this->m_pUvAnimationModelInfos = 0i64;
  this->m_pCullingModel = 0i64;
  this->m_stageModelIndex = src->m_stageModelIndex;
  this->m_pModelName = FileUtil::copyString(src->m_pModelName);
  this->m_pCastFileName = FileUtil::copyString(src->m_pCastFileName);
  this->m_castFileIndex = src->m_castFileIndex;
  m_materialCount = src->m_materialCount;
  this->m_materialCount = m_materialCount;
  if ( (int)m_materialCount > 0 )
  {
    v6 = m_materialCount;
    v5 = 24 * m_materialCount;
    if ( !is_mul_ok(v6, 0x18ui64) )
      v5 = -1i64;
    this->m_pMaterials = (TknDataModelMaterial *)operator new[](v5);
    v7 = 0;
    if ( this->m_materialCount > 0 )
    {
      v8 = 0i64;
      do
      {
        pMaterialName = src->m_pMaterials[v8].pMaterialName;
        if ( pMaterialName )
        {
          v11 = -1i64;
          do
            ++v11;
          while ( pMaterialName[v11] );
          if ( (int)v11 >= 0 )
          {
            v12 = (int)v11 + 1;
            v10 = operator new[](v12);
            memmove(v10, pMaterialName, v12);
          }
          else
          {
            v10 = 0i64;
          }
        }
        else
        {
          v10 = 0i64;
        }
        this->m_pMaterials[v8].pMaterialName = (const char *)v10;
        pUserName = src->m_pMaterials[v8].pUserName;
        if ( pUserName )
        {
          v15 = -1i64;
          do
            ++v15;
          while ( pUserName[v15] );
          if ( (int)v15 >= 0 )
          {
            v16 = (int)v15 + 1;
            v14 = operator new[](v16);
            memmove(v14, pUserName, v16);
          }
          else
          {
            v14 = 0i64;
          }
        }
        else
        {
          v14 = 0i64;
        }
        this->m_pMaterials[v8].pUserName = (const char *)v14;
        this->m_pMaterials[v8].textureDivisionCountRow = src->m_pMaterials[v8].textureDivisionCountRow;
        this->m_pMaterials[v8].textureDivisionCountCol = src->m_pMaterials[v8].textureDivisionCountCol;
        ++v7;
        ++v8;
      }
      while ( v7 < this->m_materialCount );
    }
  }
  m_uvAnimationCount = src->m_uvAnimationCount;
  this->m_uvAnimationCount = m_uvAnimationCount;
  if ( (int)m_uvAnimationCount > 0 )
  {
    v19 = m_uvAnimationCount;
    v18 = 4 * m_uvAnimationCount;
    if ( !is_mul_ok(v19, 4ui64) )
      v18 = -1i64;
    this->m_pUvAnimationUIDs = (int *)operator new[](v18);
    v20 = 0;
    if ( this->m_uvAnimationCount > 0 )
    {
      v21 = 0i64;
      do
      {
        this->m_pUvAnimationUIDs[v21] = src->m_pUvAnimationUIDs[v21];
        ++v20;
        ++v21;
      }
      while ( v20 < this->m_uvAnimationCount );
    }
  }
  m_uvAnimationModelCount = src->m_uvAnimationModelCount;
  this->m_uvAnimationModelCount = m_uvAnimationModelCount;
  if ( (int)m_uvAnimationModelCount > 0 )
  {
    v24 = m_uvAnimationModelCount;
    v23 = m_uvAnimationModelCount << 6;
    if ( !is_mul_ok(v24, 0x40ui64) )
      v23 = -1i64;
    this->m_pUvAnimationModelInfos = (TknDataUVAnimationModelInfo *)operator new[](v23);
    v25 = 0;
    if ( this->m_uvAnimationModelCount > 0 )
    {
      v26 = 0i64;
      do
      {
        this->m_pUvAnimationModelInfos[v26].uvAnimationTransRateX = src->m_pUvAnimationModelInfos[v26].uvAnimationTransRateX;
        this->m_pUvAnimationModelInfos[v26].uvAnimationTransRateY = src->m_pUvAnimationModelInfos[v26].uvAnimationTransRateY;
        this->m_pUvAnimationModelInfos[v26].textureCount = src->m_pUvAnimationModelInfos[v26].textureCount;
        textureCount = this->m_pUvAnimationModelInfos[v26].textureCount;
        v28 = 4 * textureCount;
        if ( !is_mul_ok(textureCount, 4ui64) )
          v28 = -1i64;
        this->m_pUvAnimationModelInfos[v26].pCenterU = (float *)operator new[](v28);
        v29 = this->m_pUvAnimationModelInfos[v26].textureCount;
        v30 = 4 * v29;
        if ( !is_mul_ok(v29, 4ui64) )
          v30 = -1i64;
        this->m_pUvAnimationModelInfos[v26].pCenterV = (float *)operator new[](v30);
        this->m_pUvAnimationModelInfos[v26].pMirrorFlagsU = (bool *)operator new[](this->m_pUvAnimationModelInfos[v26].textureCount);
        this->m_pUvAnimationModelInfos[v26].pMirrorFlagsV = (bool *)operator new[](this->m_pUvAnimationModelInfos[v26].textureCount);
        v31 = this->m_pUvAnimationModelInfos[v26].textureCount;
        v32 = 4 * v31;
        if ( !is_mul_ok(v31, 4ui64) )
          v32 = -1i64;
        this->m_pUvAnimationModelInfos[v26].pTransDefaultPositionU = (float *)operator new[](v32);
        v33 = this->m_pUvAnimationModelInfos[v26].textureCount;
        v34 = 4 * v33;
        if ( !is_mul_ok(v33, 4ui64) )
          v34 = -1i64;
        this->m_pUvAnimationModelInfos[v26].pTransDefaultPositionV = (float *)operator new[](v34);
        v35 = 0;
        v36 = 0i64;
        v37 = &src->m_pUvAnimationModelInfos[v26];
        if ( v37->textureCount > 0 )
        {
          do
          {
            this->m_pUvAnimationModelInfos[v26].pCenterU[v36] = v37->pCenterU[v36];
            this->m_pUvAnimationModelInfos[v26].pCenterV[v36] = src->m_pUvAnimationModelInfos[v26].pCenterV[v36];
            this->m_pUvAnimationModelInfos[v26].pMirrorFlagsU[v36] = src->m_pUvAnimationModelInfos[v26].pMirrorFlagsU[v36];
            this->m_pUvAnimationModelInfos[v26].pMirrorFlagsV[v36] = src->m_pUvAnimationModelInfos[v26].pMirrorFlagsV[v36];
            this->m_pUvAnimationModelInfos[v26].pTransDefaultPositionU[v36] = src->m_pUvAnimationModelInfos[v26].pTransDefaultPositionU[v36];
            this->m_pUvAnimationModelInfos[v26].pTransDefaultPositionV[v36] = src->m_pUvAnimationModelInfos[v26].pTransDefaultPositionV[v36];
            ++v35;
            ++v36;
            v37 = &src->m_pUvAnimationModelInfos[v26];
          }
          while ( v35 < v37->textureCount );
        }
        ++v25;
        ++v26;
      }
      while ( v25 < this->m_uvAnimationModelCount );
    }
  }
  v39 = (CollisionModel *)operator new(0xA8ui64);
  CollisionModel::CollisionModel(v39, src->m_pCullingModel);
  this->m_pCullingModel = v38;
  this->m_bUseLocalLight = src->m_bUseLocalLight;
}

void __fastcall TknDataObject::TknDataObject(TknDataObject *this, TknDataObject *src)
{
  int m_shadowBindBoneCount; // eax
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rax
  int v9; // er12
  __int64 v10; // r15
  const char *v11; // rsi
  void *v12; // rbp
  __int64 v13; // rax
  unsigned __int64 v14; // rbx
  const char *v15; // rsi
  void *v16; // rbp
  __int64 v17; // rax
  unsigned __int64 v18; // rbx
  bool m_bUseEyeControl; // al
  unsigned __int64 m_eyeControlCount; // rax
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // kr00_8
  int v23; // er12
  __int64 v24; // rsi
  const char *pBoneName; // rbp
  void *v26; // r15
  __int64 v27; // rax
  unsigned __int64 v28; // rbx

  this->__vftable = (TknDataObject_vtbl *)&TknData::`vftable';
  this->m_uniqueID = src->m_uniqueID;
  this->m_parentUniqueID = src->m_parentUniqueID;
  this->m_dataType = src->m_dataType;
  this->m_pUserName = FileUtil::copyString(src->m_pUserName);
  this->__vftable = (TknDataObject_vtbl *)&TknDataObject::`vftable';
  *(_QWORD *)&this->m_position.x = 0i64;
  *(_QWORD *)&this->m_position.z = 0i64;
  *(_QWORD *)&this->m_direction.y = 0i64;
  *(_QWORD *)&this->m_scale.x = 0i64;
  this->m_scale.z = 0.0;
  *(_QWORD *)&this->m_shadowPositionCorrection.x = 0i64;
  this->m_shadowPositionCorrection.z = 0.0;
  this->m_bUseEyeControl = 0;
  this->m_pEyeControlParams = 0i64;
  this->m_eyeControlCount = 0;
  this->m_sceneRegistCategory = src->m_sceneRegistCategory;
  this->m_type = src->m_type;
  this->m_renderPriority = src->m_renderPriority;
  this->m_position = src->m_position;
  this->m_direction = src->m_direction;
  this->m_scale = src->m_scale;
  this->m_modelUID = src->m_modelUID;
  this->m_bUseGroup = src->m_bUseGroup;
  this->m_groupObjectCount = src->m_groupObjectCount;
  this->m_groupIdealDistance = src->m_groupIdealDistance;
  this->m_groupIdealDistanceAdd = src->m_groupIdealDistanceAdd;
  this->m_groupObjectBodySize = src->m_groupObjectBodySize;
  this->m_groupObjectSpeedMaxRate = src->m_groupObjectSpeedMaxRate;
  this->m_groupObjectSpeedMinRate = src->m_groupObjectSpeedMinRate;
  this->m_groupDestinationSpeedRate = src->m_groupDestinationSpeedRate;
  this->m_groupSverageSpeedApproachRate = src->m_groupSverageSpeedApproachRate;
  this->m_bGroupRandomAnimationStartFlag = src->m_bGroupRandomAnimationStartFlag;
  this->m_bUseBindObject = src->m_bUseBindObject;
  this->m_bindObjectUID = src->m_bindObjectUID;
  this->m_bBindModelBone = src->m_bBindModelBone;
  this->m_pBindModelBoneName = FileUtil::copyString(src->m_pBindModelBoneName);
  this->m_shadowModelUID = src->m_shadowModelUID;
  this->m_shadowSubBoneEffectRate = src->m_shadowSubBoneEffectRate;
  this->m_shadowEraseDistance = src->m_shadowEraseDistance;
  this->m_shadowPositionCorrection = src->m_shadowPositionCorrection;
  this->m_shadowScaleW = src->m_shadowScaleW;
  this->m_shadowScaleH = src->m_shadowScaleH;
  m_shadowBindBoneCount = src->m_shadowBindBoneCount;
  this->m_shadowBindBoneCount = m_shadowBindBoneCount;
  if ( m_shadowBindBoneCount > 0 )
  {
    v5 = src->m_shadowBindBoneCount;
    v6 = 8 * v5;
    if ( !is_mul_ok(v5, 8ui64) )
      v6 = -1i64;
    this->m_shadowBindBoneNames = (const char **)operator new[](v6);
    v7 = src->m_shadowBindBoneCount;
    v8 = 8 * v7;
    if ( !is_mul_ok(v7, 8ui64) )
      v8 = -1i64;
    this->m_shadowBindBoneNamesSub = (const char **)operator new[](v8);
    v9 = 0;
    if ( this->m_shadowBindBoneCount > 0 )
    {
      v10 = 0i64;
      do
      {
        v11 = src->m_shadowBindBoneNames[v10];
        if ( v11 )
        {
          v13 = -1i64;
          do
            ++v13;
          while ( v11[v13] );
          if ( (int)v13 >= 0 )
          {
            v14 = (int)v13 + 1;
            v12 = operator new[](v14);
            memmove(v12, v11, v14);
          }
          else
          {
            v12 = 0i64;
          }
        }
        else
        {
          v12 = 0i64;
        }
        this->m_shadowBindBoneNames[v10] = (const char *)v12;
        v15 = src->m_shadowBindBoneNamesSub[v10];
        if ( v15 )
        {
          v17 = -1i64;
          do
            ++v17;
          while ( v15[v17] );
          if ( (int)v17 >= 0 )
          {
            v18 = (int)v17 + 1;
            v16 = operator new[](v18);
            memmove(v16, v15, v18);
          }
          else
          {
            v16 = 0i64;
          }
        }
        else
        {
          v16 = 0i64;
        }
        this->m_shadowBindBoneNamesSub[v10] = (const char *)v16;
        ++v9;
        ++v10;
      }
      while ( v9 < this->m_shadowBindBoneCount );
    }
  }
  m_bUseEyeControl = src->m_bUseEyeControl;
  this->m_bUseEyeControl = m_bUseEyeControl;
  if ( m_bUseEyeControl )
  {
    m_eyeControlCount = src->m_eyeControlCount;
    this->m_eyeControlCount = m_eyeControlCount;
    v22 = m_eyeControlCount;
    v21 = 24 * m_eyeControlCount;
    if ( !is_mul_ok(v22, 0x18ui64) )
      v21 = -1i64;
    this->m_pEyeControlParams = (TknDataObject::EyeControlParams *)operator new[](v21);
    v23 = 0;
    if ( this->m_eyeControlCount > 0 )
    {
      v24 = 0i64;
      do
      {
        pBoneName = src->m_pEyeControlParams[v24].pBoneName;
        if ( pBoneName )
        {
          v27 = -1i64;
          do
            ++v27;
          while ( pBoneName[v27] );
          if ( (int)v27 >= 0 )
          {
            v28 = (int)v27 + 1;
            v26 = operator new[](v28);
            memmove(v26, pBoneName, v28);
          }
          else
          {
            v26 = 0i64;
          }
        }
        else
        {
          v26 = 0i64;
        }
        this->m_pEyeControlParams[v24].pBoneName = (const char *)v26;
        this->m_pEyeControlParams[v24].rate = src->m_pEyeControlParams[v24].rate;
        this->m_pEyeControlParams[v24].rotateMax = src->m_pEyeControlParams[v24].rotateMax;
        this->m_pEyeControlParams[v24].rotateMin = src->m_pEyeControlParams[v24].rotateMin;
        ++v23;
        ++v24;
      }
      while ( v23 < this->m_eyeControlCount );
    }
  }
}

void __fastcall TknDataScene::TknDataScene(TknDataScene *this, TknDataScene *src)
{
  int v4; // edi
  unsigned __int64 m_localEventCount; // rax
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // kr00_8
  int v8; // er8
  __int64 v9; // rdx
  unsigned __int64 m_globalEventCount; // rcx
  unsigned __int64 v11; // rax
  __int64 v12; // rax

  this->__vftable = (TknDataScene_vtbl *)&TknData::`vftable';
  this->m_uniqueID = src->m_uniqueID;
  this->m_parentUniqueID = src->m_parentUniqueID;
  this->m_dataType = src->m_dataType;
  this->m_pUserName = FileUtil::copyString(src->m_pUserName);
  this->__vftable = (TknDataScene_vtbl *)&TknDataScene::`vftable';
  v4 = 0;
  this->m_pGlobalEventUIDs = 0i64;
  this->m_pLocalEventUIDs = 0i64;
  m_localEventCount = src->m_localEventCount;
  this->m_localEventCount = m_localEventCount;
  if ( (int)m_localEventCount > 0 )
  {
    v7 = m_localEventCount;
    v6 = 4 * m_localEventCount;
    if ( !is_mul_ok(v7, 4ui64) )
      v6 = -1i64;
    this->m_pLocalEventUIDs = (int *)operator new[](v6);
    v8 = 0;
    if ( this->m_localEventCount > 0 )
    {
      v9 = 0i64;
      do
      {
        this->m_pLocalEventUIDs[v9] = src->m_pLocalEventUIDs[v9];
        ++v8;
        ++v9;
      }
      while ( v8 < this->m_localEventCount );
    }
  }
  m_globalEventCount = src->m_globalEventCount;
  this->m_globalEventCount = m_globalEventCount;
  if ( (int)m_globalEventCount > 0 )
  {
    v11 = 4 * m_globalEventCount;
    if ( !is_mul_ok(m_globalEventCount, 4ui64) )
      v11 = -1i64;
    this->m_pGlobalEventUIDs = (int *)operator new[](v11);
    if ( this->m_globalEventCount > 0 )
    {
      v12 = 0i64;
      do
      {
        this->m_pGlobalEventUIDs[v12] = src->m_pGlobalEventUIDs[v12];
        ++v4;
        ++v12;
      }
      while ( v4 < this->m_globalEventCount );
    }
  }
}

void __fastcall TknDataUVAnimation::TknDataUVAnimation(TknDataUVAnimation *this, TknDataUVAnimation *src)
{
  unsigned __int64 m_animationCount; // rax
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // kr00_8
  int v7; // er15
  __int64 v8; // rbx
  TknDataUVAnimation::UVAnimation *m_pAnimations; // rdi
  TknDataUVAnimation::UVAnimation *v10; // rsi
  TknDataUVAnimation::UVAnimationType uvAnimationType; // eax
  unsigned __int64 animationListCount; // rax
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // kr10_8
  int v15; // er9
  __int64 v16; // r8
  TknDataUVAnimation::UVAnimationFrame *pAnimationList; // rdx
  TknDataUVAnimation::UVAnimationFrame *v18; // rcx
  TknDataUVAnimation::ModelAnimationType m_modelAnimationType; // eax

  this->__vftable = (TknDataUVAnimation_vtbl *)&TknData::`vftable';
  this->m_uniqueID = src->m_uniqueID;
  this->m_parentUniqueID = src->m_parentUniqueID;
  this->m_dataType = src->m_dataType;
  this->m_pUserName = FileUtil::copyString(src->m_pUserName);
  this->__vftable = (TknDataUVAnimation_vtbl *)&TknDataUVAnimation::`vftable';
  this->m_pAnimations = 0i64;
  this->m_animationFrameMax = src->m_animationFrameMax;
  m_animationCount = src->m_animationCount;
  this->m_animationCount = m_animationCount;
  if ( (int)m_animationCount > 0 )
  {
    v6 = m_animationCount;
    v5 = m_animationCount << 6;
    if ( !is_mul_ok(v6, 0x40ui64) )
      v5 = -1i64;
    this->m_pAnimations = (TknDataUVAnimation::UVAnimation *)operator new[](v5);
    v7 = 0;
    if ( this->m_animationCount > 0 )
    {
      v8 = 0i64;
      do
      {
        m_pAnimations = this->m_pAnimations;
        v10 = src->m_pAnimations;
        m_pAnimations[v8].materialIndex = v10[v8].materialIndex;
        m_pAnimations[v8].textureType = v10[v8].textureType;
        m_pAnimations[v8].multiTextureIndex = v10[v8].multiTextureIndex;
        m_pAnimations[v8].pAnimationList = 0i64;
        m_pAnimations[v8].textureUID = v10[v8].textureUID;
        uvAnimationType = v10[v8].uvAnimationType;
        m_pAnimations[v8].uvAnimationType = uvAnimationType;
        if ( uvAnimationType == UV_ANIMTYPE_ANIMATION )
        {
          animationListCount = v10[v8].animationListCount;
          m_pAnimations[v8].animationListCount = animationListCount;
          if ( (int)animationListCount > 0 )
          {
            v14 = animationListCount;
            v13 = 8 * animationListCount;
            if ( !is_mul_ok(v14, 8ui64) )
              v13 = -1i64;
            m_pAnimations[v8].pAnimationList = (TknDataUVAnimation::UVAnimationFrame *)operator new[](v13);
            v15 = 0;
            if ( m_pAnimations[v8].animationListCount > 0 )
            {
              v16 = 0i64;
              do
              {
                pAnimationList = m_pAnimations[v8].pAnimationList;
                v18 = v10[v8].pAnimationList;
                pAnimationList[v16].texturePanelIndex = v18[v16].texturePanelIndex;
                pAnimationList[v16].waitFrame = v18[v16].waitFrame;
                ++v15;
                ++v16;
              }
              while ( v15 < m_pAnimations[v8].animationListCount );
            }
          }
        }
        else if ( uvAnimationType == UV_ANIMTYPE_SCROLL )
        {
          m_pAnimations[v8].scrollSpeedX = v10[v8].scrollSpeedX;
          m_pAnimations[v8].scrollSpeedY = v10[v8].scrollSpeedY;
          m_pAnimations[v8].scrollEasingX = v10[v8].scrollEasingX;
          m_pAnimations[v8].scrollEasingY = v10[v8].scrollEasingY;
          m_pAnimations[v8].scrollEasingFrameX = v10[v8].scrollEasingFrameX;
          m_pAnimations[v8].scrollEasingFrameY = v10[v8].scrollEasingFrameY;
        }
        ++v7;
        ++v8;
      }
      while ( v7 < this->m_animationCount );
    }
  }
  m_modelAnimationType = src->m_modelAnimationType;
  this->m_modelAnimationType = m_modelAnimationType;
  if ( m_modelAnimationType == MODEL_ANIMTYPE_TRANS )
  {
    this->m_modelAnimeTransSpeedX = src->m_modelAnimeTransSpeedX;
    this->m_modelAnimeTransMaxValueX = src->m_modelAnimeTransMaxValueX;
    this->m_modelAnimeTransSpeedY = src->m_modelAnimeTransSpeedY;
    this->m_modelAnimeTransMaxValueY = src->m_modelAnimeTransMaxValueY;
  }
  else if ( m_modelAnimationType == MODEL_ANIMTYPE_ROTATE )
  {
    this->m_modelAnimeRotateSpeed = src->m_modelAnimeRotateSpeed;
  }
  this->m_modelAnimeRotateType[0] = src->m_modelAnimeRotateType[0];
  this->m_modelAnimeRotateType[1] = src->m_modelAnimeRotateType[1];
}

void __fastcall TknData::~TknData(TknData *this, unsigned __int64 a2)
{
  char *m_pUserName; // rcx

  this->__vftable = (TknData_vtbl *)&TknData::`vftable';
  m_pUserName = (char *)this->m_pUserName;
  if ( m_pUserName )
  {
    operator delete(m_pUserName, a2);
    this->m_pUserName = 0i64;
  }
}

void __fastcall TknDataBillboard::~TknDataBillboard(TknDataBillboard *this, unsigned __int64 a2)
{
  char *m_pTextureFileName; // rcx
  CollisionModel *m_pCullingModel; // rdi
  char *m_pUserName; // rcx
  int v6; // esi
  __int64 v7; // rdi
  int *pImagesPanelIndex; // rcx
  TknDataBillboard::BillboardRect *m_pRects; // rcx
  char *v10; // rcx

  this->__vftable = (TknDataBillboard_vtbl *)&TknDataBillboard::`vftable';
  m_pTextureFileName = (char *)this->m_pTextureFileName;
  if ( m_pTextureFileName )
  {
    operator delete(m_pTextureFileName, a2);
    this->m_pTextureFileName = 0i64;
  }
  m_pCullingModel = this->m_pCullingModel;
  if ( m_pCullingModel )
  {
    CollisionModel::release(this->m_pCullingModel, a2);
    operator delete(m_pCullingModel, 0xA8ui64);
    this->m_pCullingModel = 0i64;
  }
  m_pUserName = (char *)this->m_pUserName;
  if ( m_pUserName )
  {
    operator delete(m_pUserName, a2);
    this->m_pUserName = 0i64;
  }
  if ( this->m_pRects )
  {
    v6 = 0;
    if ( this->m_rectsCount > 0 )
    {
      v7 = 0i64;
      do
      {
        pImagesPanelIndex = this->m_pRects[v7].pImagesPanelIndex;
        if ( pImagesPanelIndex )
        {
          operator delete(pImagesPanelIndex, a2);
          this->m_pRects[v7].pImagesPanelIndex = 0i64;
        }
        ++v6;
        ++v7;
      }
      while ( v6 < this->m_rectsCount );
    }
    m_pRects = this->m_pRects;
    if ( m_pRects )
    {
      operator delete(m_pRects, a2);
      this->m_pRects = 0i64;
    }
  }
  v10 = (char *)this->TknData::m_pUserName;
  this->__vftable = (TknDataBillboard_vtbl *)&TknData::`vftable';
  if ( v10 )
  {
    operator delete(v10, a2);
    this->TknData::m_pUserName = 0i64;
  }
}

void __fastcall TknDataEffect::~TknDataEffect(TknDataEffect *this, unsigned __int64 a2)
{
  char *m_pSearchKey; // rcx
  char *m_pUserName; // rcx
  CollisionModel *m_pCullingModel; // rdi
  char *v6; // rcx

  this->__vftable = (TknDataEffect_vtbl *)&TknDataEffect::`vftable';
  m_pSearchKey = (char *)this->m_pSearchKey;
  if ( m_pSearchKey )
  {
    operator delete(m_pSearchKey, a2);
    this->m_pSearchKey = 0i64;
  }
  m_pUserName = (char *)this->m_pUserName;
  if ( m_pUserName )
  {
    operator delete(m_pUserName, a2);
    this->m_pUserName = 0i64;
  }
  m_pCullingModel = this->m_pCullingModel;
  if ( m_pCullingModel )
  {
    CollisionModel::release(this->m_pCullingModel, a2);
    operator delete(m_pCullingModel, 0xA8ui64);
    this->m_pCullingModel = 0i64;
  }
  v6 = (char *)this->TknData::m_pUserName;
  this->__vftable = (TknDataEffect_vtbl *)&TknData::`vftable';
  if ( v6 )
  {
    operator delete(v6, a2);
    this->TknData::m_pUserName = 0i64;
  }
}

void __fastcall TknDataEvent::~TknDataEvent(TknDataEvent *this, unsigned __int64 a2)
{
  int *m_pAnimationUIDs; // rcx
  int *m_pTranslationUIDs; // rcx
  int *m_pScriptUIDs; // rcx
  char *m_pCullingReferenceBoneName; // rcx
  char *m_pUserName; // rcx

  this->__vftable = (TknDataEvent_vtbl *)&TknDataEvent::`vftable';
  m_pAnimationUIDs = this->m_pAnimationUIDs;
  if ( m_pAnimationUIDs )
  {
    operator delete(m_pAnimationUIDs, a2);
    this->m_pAnimationUIDs = 0i64;
  }
  m_pTranslationUIDs = this->m_pTranslationUIDs;
  if ( m_pTranslationUIDs )
  {
    operator delete(m_pTranslationUIDs, a2);
    this->m_pTranslationUIDs = 0i64;
  }
  m_pScriptUIDs = this->m_pScriptUIDs;
  if ( m_pScriptUIDs )
  {
    operator delete(m_pScriptUIDs, a2);
    this->m_pScriptUIDs = 0i64;
  }
  m_pCullingReferenceBoneName = (char *)this->m_pCullingReferenceBoneName;
  if ( m_pCullingReferenceBoneName )
  {
    operator delete(m_pCullingReferenceBoneName, a2);
    this->m_pCullingReferenceBoneName = 0i64;
  }
  m_pUserName = (char *)this->m_pUserName;
  this->__vftable = (TknDataEvent_vtbl *)&TknData::`vftable';
  if ( m_pUserName )
  {
    operator delete(m_pUserName, a2);
    this->m_pUserName = 0i64;
  }
}

void __fastcall TknDataEventConditions::~TknDataEventConditions(TknDataEventConditions *this, unsigned __int64 a2)
{
  int *m_pSkipCallCharacterIDs; // rcx
  int *m_pSkipPairCharacterIDs; // rcx
  char *m_pUserName; // rcx

  this->__vftable = (TknDataEventConditions_vtbl *)&TknDataEventConditions::`vftable';
  m_pSkipCallCharacterIDs = this->m_pSkipCallCharacterIDs;
  if ( m_pSkipCallCharacterIDs )
  {
    operator delete(m_pSkipCallCharacterIDs, a2);
    this->m_pSkipCallCharacterIDs = 0i64;
  }
  m_pSkipPairCharacterIDs = this->m_pSkipPairCharacterIDs;
  if ( m_pSkipPairCharacterIDs )
  {
    operator delete(m_pSkipPairCharacterIDs, a2);
    this->m_pSkipPairCharacterIDs = 0i64;
  }
  m_pUserName = (char *)this->m_pUserName;
  this->__vftable = (TknDataEventConditions_vtbl *)&TknData::`vftable';
  if ( m_pUserName )
  {
    operator delete(m_pUserName, a2);
    this->m_pUserName = 0i64;
  }
}

void __fastcall TknDataModel::~TknDataModel(TknDataModel *this, unsigned __int64 a2)
{
  char *m_pModelName; // rcx
  char *m_pCastFileName; // rcx
  int v5; // esi
  __int64 v6; // rdi
  char *pMaterialName; // rcx
  char *pUserName; // rcx
  TknDataModelMaterial *m_pMaterials; // rcx
  int *m_pUvAnimationUIDs; // rcx
  int v11; // esi
  __int64 v12; // rdi
  float *pCenterU; // rcx
  float *pCenterV; // rcx
  bool *pMirrorFlagsU; // rcx
  bool *pMirrorFlagsV; // rcx
  float *pTransDefaultPositionU; // rcx
  float *pTransDefaultPositionV; // rcx
  TknDataUVAnimationModelInfo *m_pUvAnimationModelInfos; // rcx
  CollisionModel *m_pCullingModel; // rdi
  char *m_pUserName; // rcx

  this->__vftable = (TknDataModel_vtbl *)&TknDataModel::`vftable';
  m_pModelName = (char *)this->m_pModelName;
  if ( m_pModelName )
  {
    operator delete(m_pModelName, a2);
    this->m_pModelName = 0i64;
  }
  m_pCastFileName = (char *)this->m_pCastFileName;
  if ( m_pCastFileName )
  {
    operator delete(m_pCastFileName, a2);
    this->m_pCastFileName = 0i64;
  }
  v5 = 0;
  if ( this->m_materialCount > 0 )
  {
    v6 = 0i64;
    do
    {
      pMaterialName = (char *)this->m_pMaterials[v6].pMaterialName;
      if ( pMaterialName )
      {
        operator delete(pMaterialName, a2);
        this->m_pMaterials[v6].pMaterialName = 0i64;
      }
      pUserName = (char *)this->m_pMaterials[v6].pUserName;
      if ( pUserName )
      {
        operator delete(pUserName, a2);
        this->m_pMaterials[v6].pUserName = 0i64;
      }
      ++v5;
      ++v6;
    }
    while ( v5 < this->m_materialCount );
  }
  m_pMaterials = this->m_pMaterials;
  if ( m_pMaterials )
  {
    operator delete(m_pMaterials, a2);
    this->m_pMaterials = 0i64;
  }
  m_pUvAnimationUIDs = this->m_pUvAnimationUIDs;
  if ( m_pUvAnimationUIDs )
  {
    operator delete(m_pUvAnimationUIDs, a2);
    this->m_pUvAnimationUIDs = 0i64;
  }
  if ( this->m_uvAnimationModelCount > 0 )
  {
    v11 = 0;
    v12 = 0i64;
    do
    {
      pCenterU = this->m_pUvAnimationModelInfos[v12].pCenterU;
      if ( pCenterU )
      {
        operator delete(pCenterU, a2);
        this->m_pUvAnimationModelInfos[v12].pCenterU = 0i64;
      }
      pCenterV = this->m_pUvAnimationModelInfos[v12].pCenterV;
      if ( pCenterV )
      {
        operator delete(pCenterV, a2);
        this->m_pUvAnimationModelInfos[v12].pCenterV = 0i64;
      }
      pMirrorFlagsU = this->m_pUvAnimationModelInfos[v12].pMirrorFlagsU;
      if ( pMirrorFlagsU )
      {
        operator delete(pMirrorFlagsU, a2);
        this->m_pUvAnimationModelInfos[v12].pMirrorFlagsU = 0i64;
      }
      pMirrorFlagsV = this->m_pUvAnimationModelInfos[v12].pMirrorFlagsV;
      if ( pMirrorFlagsV )
      {
        operator delete(pMirrorFlagsV, a2);
        this->m_pUvAnimationModelInfos[v12].pMirrorFlagsV = 0i64;
      }
      pTransDefaultPositionU = this->m_pUvAnimationModelInfos[v12].pTransDefaultPositionU;
      if ( pTransDefaultPositionU )
      {
        operator delete(pTransDefaultPositionU, a2);
        this->m_pUvAnimationModelInfos[v12].pTransDefaultPositionU = 0i64;
      }
      pTransDefaultPositionV = this->m_pUvAnimationModelInfos[v12].pTransDefaultPositionV;
      if ( pTransDefaultPositionV )
      {
        operator delete(pTransDefaultPositionV, a2);
        this->m_pUvAnimationModelInfos[v12].pTransDefaultPositionV = 0i64;
      }
      ++v11;
      ++v12;
    }
    while ( v11 < this->m_uvAnimationModelCount );
  }
  m_pUvAnimationModelInfos = this->m_pUvAnimationModelInfos;
  if ( m_pUvAnimationModelInfos )
  {
    operator delete(m_pUvAnimationModelInfos, a2);
    this->m_pUvAnimationModelInfos = 0i64;
  }
  m_pCullingModel = this->m_pCullingModel;
  if ( m_pCullingModel )
  {
    CollisionModel::release(this->m_pCullingModel, a2);
    operator delete(m_pCullingModel, 0xA8ui64);
    this->m_pCullingModel = 0i64;
  }
  m_pUserName = (char *)this->m_pUserName;
  this->__vftable = (TknDataModel_vtbl *)&TknData::`vftable';
  if ( m_pUserName )
  {
    operator delete(m_pUserName, a2);
    this->m_pUserName = 0i64;
  }
}

void __fastcall TknDataObject::~TknDataObject(TknDataObject *this, unsigned __int64 a2)
{
  char *m_pBindModelBoneName; // rcx
  int v4; // esi
  __int64 v5; // rdi
  char *v6; // rcx
  char *v7; // rcx
  const char **m_shadowBindBoneNames; // rcx
  const char **m_shadowBindBoneNamesSub; // rcx
  int v10; // esi
  __int64 v11; // rdi
  char *pBoneName; // rcx
  TknDataObject::EyeControlParams *m_pEyeControlParams; // rcx
  char *m_pUserName; // rcx

  this->__vftable = (TknDataObject_vtbl *)&TknDataObject::`vftable';
  m_pBindModelBoneName = (char *)this->m_pBindModelBoneName;
  if ( m_pBindModelBoneName )
  {
    operator delete(m_pBindModelBoneName, a2);
    this->m_pBindModelBoneName = 0i64;
  }
  if ( this->m_shadowBindBoneCount > 0 )
  {
    v4 = 0;
    v5 = 0i64;
    do
    {
      v6 = (char *)this->m_shadowBindBoneNames[v5];
      if ( v6 )
      {
        operator delete(v6, a2);
        this->m_shadowBindBoneNames[v5] = 0i64;
      }
      v7 = (char *)this->m_shadowBindBoneNamesSub[v5];
      if ( v7 )
      {
        operator delete(v7, a2);
        this->m_shadowBindBoneNamesSub[v5] = 0i64;
      }
      ++v4;
      ++v5;
    }
    while ( v4 < this->m_shadowBindBoneCount );
    m_shadowBindBoneNames = this->m_shadowBindBoneNames;
    if ( m_shadowBindBoneNames )
    {
      operator delete(m_shadowBindBoneNames, a2);
      this->m_shadowBindBoneNames = 0i64;
    }
    m_shadowBindBoneNamesSub = this->m_shadowBindBoneNamesSub;
    if ( m_shadowBindBoneNamesSub )
    {
      operator delete(m_shadowBindBoneNamesSub, a2);
      this->m_shadowBindBoneNamesSub = 0i64;
    }
  }
  if ( this->m_pEyeControlParams )
  {
    v10 = 0;
    if ( this->m_eyeControlCount > 0 )
    {
      v11 = 0i64;
      do
      {
        pBoneName = (char *)this->m_pEyeControlParams[v11].pBoneName;
        if ( pBoneName )
        {
          operator delete(pBoneName, a2);
          this->m_pEyeControlParams[v11].pBoneName = 0i64;
        }
        ++v10;
        ++v11;
      }
      while ( v10 < this->m_eyeControlCount );
    }
    m_pEyeControlParams = this->m_pEyeControlParams;
    if ( m_pEyeControlParams )
    {
      operator delete(m_pEyeControlParams, a2);
      this->m_pEyeControlParams = 0i64;
    }
  }
  m_pUserName = (char *)this->m_pUserName;
  this->m_bUseEyeControl = 0;
  this->m_eyeControlCount = 0;
  this->__vftable = (TknDataObject_vtbl *)&TknData::`vftable';
  if ( m_pUserName )
  {
    operator delete(m_pUserName, a2);
    this->m_pUserName = 0i64;
  }
}

void __fastcall TknDataScene::~TknDataScene(TknDataScene *this, unsigned __int64 a2)
{
  int *m_pGlobalEventUIDs; // rcx
  int *m_pLocalEventUIDs; // rcx
  char *m_pUserName; // rcx

  this->__vftable = (TknDataScene_vtbl *)&TknDataScene::`vftable';
  m_pGlobalEventUIDs = this->m_pGlobalEventUIDs;
  if ( m_pGlobalEventUIDs )
  {
    operator delete(m_pGlobalEventUIDs, a2);
    this->m_pGlobalEventUIDs = 0i64;
  }
  m_pLocalEventUIDs = this->m_pLocalEventUIDs;
  if ( m_pLocalEventUIDs )
  {
    operator delete(m_pLocalEventUIDs, a2);
    this->m_pLocalEventUIDs = 0i64;
  }
  m_pUserName = (char *)this->m_pUserName;
  this->__vftable = (TknDataScene_vtbl *)&TknData::`vftable';
  if ( m_pUserName )
  {
    operator delete(m_pUserName, a2);
    this->m_pUserName = 0i64;
  }
}

void __fastcall TknDataUVAnimation::~TknDataUVAnimation(TknDataUVAnimation *this, unsigned __int64 a2)
{
  int v3; // esi
  __int64 v4; // rdi
  TknDataUVAnimation::UVAnimationFrame *pAnimationList; // rcx
  TknDataUVAnimation::UVAnimation *m_pAnimations; // rcx
  char *m_pUserName; // rcx

  this->__vftable = (TknDataUVAnimation_vtbl *)&TknDataUVAnimation::`vftable';
  if ( this->m_pAnimations )
  {
    v3 = 0;
    if ( this->m_animationCount > 0 )
    {
      v4 = 0i64;
      do
      {
        pAnimationList = this->m_pAnimations[v4].pAnimationList;
        if ( pAnimationList )
        {
          operator delete(pAnimationList, a2);
          this->m_pAnimations[v4].pAnimationList = 0i64;
        }
        ++v3;
        ++v4;
      }
      while ( v3 < this->m_animationCount );
    }
    m_pAnimations = this->m_pAnimations;
    if ( m_pAnimations )
    {
      operator delete(m_pAnimations, a2);
      this->m_pAnimations = 0i64;
    }
  }
  m_pUserName = (char *)this->m_pUserName;
  this->__vftable = (TknDataUVAnimation_vtbl *)&TknData::`vftable';
  if ( m_pUserName )
  {
    operator delete(m_pUserName, a2);
    this->m_pUserName = 0i64;
  }
}

TknDataBillboard *__fastcall TknDataBillboard::create(OGLInputStream *stream, int dataVersion)
{
  __int64 m_uiPoint; // r8
  unsigned int m_uiSize; // er9
  int v6; // esi
  __int64 v7; // r8
  int v8; // edi
  char *v9; // r14
  __int64 v10; // r9
  int v11; // er8
  __int64 v12; // r9
  int v13; // er8
  __int64 v14; // r9
  int v15; // er8
  __int64 v16; // r9
  int v17; // er8
  __int64 v18; // r9
  int v19; // er8
  __int64 v20; // r9
  int v21; // er8
  unsigned __int64 v22; // rax
  int v23; // ebp
  __int64 v24; // rdi
  __int64 v25; // r9
  __int64 v26; // rsi
  int v27; // er8
  __int64 v28; // r9
  int v29; // er8
  void *v30; // rax
  int v31; // er11
  __int64 v32; // r10
  __int64 v33; // r9
  int v34; // er8
  __int64 v35; // r9
  int v36; // er8
  unsigned int v37; // ecx
  unsigned int v38; // eax
  __int64 v39; // rdx
  int v40; // xmm0_4
  int v41; // xmm1_4
  __int64 v42; // rdx
  __int64 v43; // r9
  int v44; // er8
  __int64 v45; // r9
  int v46; // er8
  _QWORD *v48; // [rsp+60h] [rbp+8h]

  m_uiPoint = stream->m_uiPoint;
  m_uiSize = stream->m_uiSize;
  if ( m_uiSize > (unsigned int)m_uiPoint )
  {
    v6 = stream->m_pucData[m_uiPoint] | ((stream->m_pucData[(unsigned int)(m_uiPoint + 1)] | ((stream->m_pucData[(unsigned int)(m_uiPoint + 2)] | (stream->m_pucData[(unsigned int)(m_uiPoint + 3)] << 8)) << 8)) << 8);
    stream->m_uiPoint = m_uiPoint + 4;
  }
  else
  {
    v6 = 0;
  }
  v7 = stream->m_uiPoint;
  if ( m_uiSize > (unsigned int)v7 )
  {
    v8 = stream->m_pucData[v7] | ((stream->m_pucData[(unsigned int)(v7 + 1)] | ((stream->m_pucData[(unsigned int)(v7 + 2)] | (stream->m_pucData[(unsigned int)(v7 + 3)] << 8)) << 8)) << 8);
    stream->m_uiPoint = v7 + 4;
  }
  else
  {
    v8 = 0;
  }
  v9 = (char *)operator new(0x70ui64);
  *((_DWORD *)v9 + 2) = v6;
  *((_DWORD *)v9 + 3) = v8;
  *((_DWORD *)v9 + 4) = 13;
  *((_QWORD *)v9 + 3) = 0i64;
  *(_QWORD *)v9 = &TknDataBillboard::`vftable';
  *((_QWORD *)v9 + 4) = 0i64;
  *((_QWORD *)v9 + 10) = 0i64;
  *((_QWORD *)v9 + 12) = 0i64;
  *((_QWORD *)v9 + 13) = 0i64;
  if ( dataVersion >= 131 )
    *((_QWORD *)v9 + 13) = FileUtil::readString(stream);
  v10 = stream->m_uiPoint;
  if ( stream->m_uiSize > (unsigned int)v10 )
  {
    v11 = stream->m_pucData[v10] | ((stream->m_pucData[(unsigned int)(v10 + 1)] | ((stream->m_pucData[(unsigned int)(v10 + 2)] | (stream->m_pucData[(unsigned int)(v10 + 3)] << 8)) << 8)) << 8);
    stream->m_uiPoint = v10 + 4;
  }
  else
  {
    v11 = 0;
  }
  *((_DWORD *)v9 + 14) = v11;
  v12 = stream->m_uiPoint;
  if ( stream->m_uiSize > (unsigned int)v12 )
  {
    v13 = stream->m_pucData[v12] | ((stream->m_pucData[(unsigned int)(v12 + 1)] | ((stream->m_pucData[(unsigned int)(v12 + 2)] | (stream->m_pucData[(unsigned int)(v12 + 3)] << 8)) << 8)) << 8);
    stream->m_uiPoint = v12 + 4;
  }
  else
  {
    v13 = 0;
  }
  *((_DWORD *)v9 + 15) = v13;
  if ( dataVersion < 118 )
  {
    *((_DWORD *)v9 + 16) = -1;
    *(_QWORD *)(v9 + 68) = 0i64;
  }
  else
  {
    v14 = stream->m_uiPoint;
    if ( stream->m_uiSize > (unsigned int)v14 )
    {
      v15 = stream->m_pucData[v14] | ((stream->m_pucData[(unsigned int)(v14 + 1)] | ((stream->m_pucData[(unsigned int)(v14 + 2)] | (stream->m_pucData[(unsigned int)(v14 + 3)] << 8)) << 8)) << 8);
      stream->m_uiPoint = v14 + 4;
    }
    else
    {
      v15 = 0;
    }
    *((_DWORD *)v9 + 16) = v15;
    v16 = stream->m_uiPoint;
    if ( stream->m_uiSize > (unsigned int)v16 )
    {
      v17 = stream->m_pucData[v16] | ((stream->m_pucData[(unsigned int)(v16 + 1)] | ((stream->m_pucData[(unsigned int)(v16 + 2)] | (stream->m_pucData[(unsigned int)(v16 + 3)] << 8)) << 8)) << 8);
      stream->m_uiPoint = v16 + 4;
    }
    else
    {
      v17 = 0;
    }
    *((_DWORD *)v9 + 17) = TknFileUtil::convertTextureType((TknData::ToolTextureType)v17);
    v18 = stream->m_uiPoint;
    if ( stream->m_uiSize > (unsigned int)v18 )
    {
      v19 = stream->m_pucData[v18] | ((stream->m_pucData[(unsigned int)(v18 + 1)] | ((stream->m_pucData[(unsigned int)(v18 + 2)] | (stream->m_pucData[(unsigned int)(v18 + 3)] << 8)) << 8)) << 8);
      stream->m_uiPoint = v18 + 4;
      *((_DWORD *)v9 + 18) = v19;
    }
    else
    {
      *((_DWORD *)v9 + 18) = 0;
    }
  }
  v20 = stream->m_uiPoint;
  if ( stream->m_uiSize > (unsigned int)v20 )
  {
    v21 = stream->m_pucData[v20] | ((stream->m_pucData[(unsigned int)(v20 + 1)] | ((stream->m_pucData[(unsigned int)(v20 + 2)] | (stream->m_pucData[(unsigned int)(v20 + 3)] << 8)) << 8)) << 8);
    stream->m_uiPoint = v20 + 4;
  }
  else
  {
    v21 = 0;
  }
  v22 = 24i64 * v21;
  *((_DWORD *)v9 + 10) = v21;
  if ( !is_mul_ok(v21, 0x18ui64) )
    v22 = -1i64;
  v23 = 0;
  *((_QWORD *)v9 + 4) = operator new[](v22);
  if ( *((int *)v9 + 10) > 0 )
  {
    v24 = 0i64;
    do
    {
      v25 = stream->m_uiPoint;
      v26 = *((_QWORD *)v9 + 4);
      if ( stream->m_uiSize > (unsigned int)v25 )
      {
        v27 = stream->m_pucData[v25] | ((stream->m_pucData[(unsigned int)(v25 + 1)] | ((stream->m_pucData[(unsigned int)(v25 + 2)] | (stream->m_pucData[(unsigned int)(v25 + 3)] << 8)) << 8)) << 8);
        stream->m_uiPoint = v25 + 4;
      }
      else
      {
        v27 = 0;
      }
      *(_DWORD *)(v24 + v26) = v27;
      v28 = stream->m_uiPoint;
      if ( stream->m_uiSize > (unsigned int)v28 )
      {
        v29 = stream->m_pucData[v28] | ((stream->m_pucData[(unsigned int)(v28 + 1)] | ((stream->m_pucData[(unsigned int)(v28 + 2)] | (stream->m_pucData[(unsigned int)(v28 + 3)] << 8)) << 8)) << 8);
        stream->m_uiPoint = v28 + 4;
      }
      else
      {
        v29 = 0;
      }
      *(_DWORD *)(v24 + v26 + 16) = v29;
      v30 = operator new[](saturated_mul(v29, 4ui64));
      v31 = 0;
      *(_QWORD *)(v24 + v26 + 8) = v30;
      if ( *(int *)(v24 + v26 + 16) > 0 )
      {
        v32 = 0i64;
        do
        {
          v33 = stream->m_uiPoint;
          if ( stream->m_uiSize > (unsigned int)v33 )
          {
            v34 = stream->m_pucData[v33] | ((stream->m_pucData[(unsigned int)(v33 + 1)] | ((stream->m_pucData[(unsigned int)(v33 + 2)] | (stream->m_pucData[(unsigned int)(v33 + 3)] << 8)) << 8)) << 8);
            stream->m_uiPoint = v33 + 4;
          }
          else
          {
            v34 = 0;
          }
          ++v31;
          *(_DWORD *)(v32 + *(_QWORD *)(v24 + v26 + 8)) = v34;
          v32 += 4i64;
        }
        while ( v31 < *(_DWORD *)(v24 + v26 + 16) );
      }
      ++v23;
      v24 += 24i64;
    }
    while ( v23 < *((_DWORD *)v9 + 10) );
  }
  v35 = stream->m_uiPoint;
  if ( stream->m_uiSize > (unsigned int)v35 )
  {
    v36 = stream->m_pucData[v35] | ((stream->m_pucData[(unsigned int)(v35 + 1)] | ((stream->m_pucData[(unsigned int)(v35 + 2)] | (stream->m_pucData[(unsigned int)(v35 + 3)] << 8)) << 8)) << 8);
    stream->m_uiPoint = v35 + 4;
  }
  else
  {
    v36 = 0;
  }
  *((_DWORD *)v9 + 11) = v36;
  v37 = stream->m_uiSize;
  v38 = stream->m_uiPoint;
  if ( v37 > v38 )
    stream->m_uiPoint = v38 + 4;
  v39 = stream->m_uiPoint;
  v40 = 0;
  if ( v37 > (unsigned int)v39 )
  {
    v41 = *(_DWORD *)&stream->m_pucData[v39];
    stream->m_uiPoint = v39 + 4;
  }
  else
  {
    v41 = 0;
  }
  *((_DWORD *)v9 + 12) = v41;
  v42 = stream->m_uiPoint;
  if ( stream->m_uiSize > (unsigned int)v42 )
  {
    v40 = *(_DWORD *)&stream->m_pucData[v42];
    stream->m_uiPoint = v42 + 4;
  }
  *((_DWORD *)v9 + 13) = v40;
  *((_QWORD *)v9 + 10) = FileUtil::readString(stream);
  v43 = stream->m_uiPoint;
  if ( stream->m_uiSize > (unsigned int)v43 )
  {
    v44 = stream->m_pucData[v43] | ((stream->m_pucData[(unsigned int)(v43 + 1)] | ((stream->m_pucData[(unsigned int)(v43 + 2)] | (stream->m_pucData[(unsigned int)(v43 + 3)] << 8)) << 8)) << 8);
    stream->m_uiPoint = v43 + 4;
  }
  else
  {
    v44 = 0;
  }
  *((_DWORD *)v9 + 22) = v44;
  v45 = stream->m_uiPoint;
  if ( stream->m_uiSize > (unsigned int)v45 )
  {
    v46 = stream->m_pucData[v45] | ((stream->m_pucData[(unsigned int)(v45 + 1)] | ((stream->m_pucData[(unsigned int)(v45 + 2)] | (stream->m_pucData[(unsigned int)(v45 + 3)] << 8)) << 8)) << 8);
    stream->m_uiPoint = v45 + 4;
  }
  else
  {
    v46 = 0;
  }
  *((_DWORD *)v9 + 23) = v46;
  v48 = operator new(0xA8ui64);
  v48[4] = 0i64;
  v48[5] = 0i64;
  v48[9] = 0i64;
  v48[16] = 0i64;
  *((_DWORD *)v48 + 34) = 0;
  v48[19] = 0i64;
  *((_DWORD *)v48 + 40) = 0;
  *(_DWORD *)v48 = 0;
  v48[11] = 0i64;
  *((_DWORD *)v48 + 24) = 0;
  *(_QWORD *)((char *)v48 + 76) = 1065353216i64;
  *((_BYTE *)v48 + 84) = 0;
  v48[14] = 0i64;
  v48[15] = 0i64;
  v48[2] = 1065353216i64;
  *((_DWORD *)v48 + 8) = 0;
  v48[6] = 0i64;
  v48[8] = 0i64;
  *(_QWORD *)((char *)v48 + 36) = 1065353216i64;
  v48[3] = 0i64;
  v48[7] = 1065353216i64;
  *((_DWORD *)v48 + 18) = 0;
  *((_DWORD *)v48 + 11) = 0;
  v48[13] = 0i64;
  v48[18] = 0i64;
  v48[1] = 0i64;
  *((_QWORD *)v9 + 12) = anonymous_namespace_::readCollisionModel(stream, dataVersion, (CollisionModel *)v48);
  if ( dataVersion >= 131 )
    *((_QWORD *)v9 + 13) = 0i64;
  else
    *((_QWORD *)v9 + 13) = FileUtil::readString(stream);
  return (TknDataBillboard *)v9;
}

TknDataEffect *__fastcall TknDataEffect::create(OGLInputStream *stream, int dataVersion)
{
  __int64 m_uiPoint; // r8
  unsigned int m_uiSize; // er9
  int v6; // ebp
  int v7; // esi
  __int64 v8; // r8
  _DWORD *v9; // rbx
  __int64 v10; // r9
  int v11; // er8
  _QWORD *v13; // [rsp+40h] [rbp+8h]

  m_uiPoint = stream->m_uiPoint;
  m_uiSize = stream->m_uiSize;
  if ( m_uiSize > (unsigned int)m_uiPoint )
  {
    v6 = stream->m_pucData[m_uiPoint] | ((stream->m_pucData[(unsigned int)(m_uiPoint + 1)] | ((stream->m_pucData[(unsigned int)(m_uiPoint + 2)] | (stream->m_pucData[(unsigned int)(m_uiPoint + 3)] << 8)) << 8)) << 8);
    stream->m_uiPoint = m_uiPoint + 4;
  }
  else
  {
    v6 = 0;
  }
  v7 = 0;
  if ( dataVersion >= 106 )
  {
    v8 = stream->m_uiPoint;
    if ( m_uiSize > (unsigned int)v8 )
    {
      v7 = stream->m_pucData[v8] | ((stream->m_pucData[(unsigned int)(v8 + 1)] | ((stream->m_pucData[(unsigned int)(v8 + 2)] | (stream->m_pucData[(unsigned int)(v8 + 3)] << 8)) << 8)) << 8);
      stream->m_uiPoint = v8 + 4;
    }
  }
  v9 = operator new(0x40ui64);
  v9[2] = v6;
  v9[3] = v7;
  v9[4] = 11;
  *((_QWORD *)v9 + 3) = 0i64;
  *(_QWORD *)v9 = &TknDataEffect::`vftable';
  *((_QWORD *)v9 + 4) = 0i64;
  v9[10] = 0;
  *((_QWORD *)v9 + 6) = 0i64;
  *((_QWORD *)v9 + 7) = 0i64;
  if ( dataVersion >= 131 )
    *((_QWORD *)v9 + 7) = FileUtil::readString(stream);
  *((_QWORD *)v9 + 4) = FileUtil::readString(stream);
  if ( dataVersion >= 104 )
  {
    v10 = stream->m_uiPoint;
    if ( stream->m_uiSize > (unsigned int)v10 )
    {
      v11 = stream->m_pucData[v10] | ((stream->m_pucData[(unsigned int)(v10 + 1)] | ((stream->m_pucData[(unsigned int)(v10 + 2)] | (stream->m_pucData[(unsigned int)(v10 + 3)] << 8)) << 8)) << 8);
      stream->m_uiPoint = v10 + 4;
    }
    else
    {
      v11 = 0;
    }
    v9[10] = v11;
  }
  v13 = operator new(0xA8ui64);
  v13[4] = 0i64;
  v13[5] = 0i64;
  v13[9] = 0i64;
  v13[16] = 0i64;
  *((_DWORD *)v13 + 34) = 0;
  v13[19] = 0i64;
  *((_DWORD *)v13 + 40) = 0;
  *(_DWORD *)v13 = 0;
  v13[11] = 0i64;
  *((_DWORD *)v13 + 24) = 0;
  *(_QWORD *)((char *)v13 + 76) = 1065353216i64;
  *((_BYTE *)v13 + 84) = 0;
  v13[14] = 0i64;
  v13[15] = 0i64;
  v13[2] = 1065353216i64;
  *((_DWORD *)v13 + 8) = 0;
  v13[6] = 0i64;
  v13[8] = 0i64;
  *(_QWORD *)((char *)v13 + 36) = 1065353216i64;
  v13[3] = 0i64;
  v13[7] = 1065353216i64;
  *((_DWORD *)v13 + 18) = 0;
  *((_DWORD *)v13 + 11) = 0;
  v13[13] = 0i64;
  v13[18] = 0i64;
  v13[1] = 0i64;
  *((_QWORD *)v9 + 6) = anonymous_namespace_::readCollisionModel(stream, dataVersion, (CollisionModel *)v13);
  if ( dataVersion < 131 )
    *((_QWORD *)v9 + 7) = FileUtil::readString(stream);
  return (TknDataEffect *)v9;
}

TknDataEvent *__fastcall TknDataEvent::create(OGLInputStream *stream, int dataVersion)
{
  __int64 m_uiPoint; // r8
  int v3; // esi
  unsigned int m_uiSize; // er9
  int v7; // er14
  int v8; // ebp
  __int64 v9; // r8
  _DWORD *v10; // rdi
  __int64 v11; // r9
  int v12; // er8
  __int64 v13; // r9
  int v14; // er8
  __int64 v15; // r9
  int v16; // er8
  __int64 v17; // r9
  int v18; // er8
  __int64 v19; // r9
  int v20; // er8
  __int64 v21; // r9
  int v22; // er8
  __int64 v23; // r9
  int v24; // er8
  void *v25; // rax
  int v26; // er11
  __int64 v27; // r10
  __int64 v28; // r9
  int v29; // er8
  __int64 v30; // r9
  int v31; // er8
  void *v32; // rax
  int v33; // er11
  __int64 v34; // r10
  __int64 v35; // r9
  int v36; // er8
  __int64 v37; // r9
  int v38; // er8
  void *v39; // rax
  int v40; // er11
  __int64 v41; // r10
  __int64 v42; // r9
  int v43; // er8
  __int64 v44; // r9
  int v45; // er8
  __int64 v46; // r9
  int v47; // er8
  __int64 v48; // r9
  int v49; // er8
  unsigned int v50; // ecx
  unsigned int v51; // eax
  __int64 v52; // r9
  bool v53; // zf
  char *String; // rax
  unsigned __int64 v55; // rdx
  unsigned int v56; // ecx
  unsigned int v57; // eax
  __int64 v58; // r9
  int v59; // er8
  __int64 v60; // r9

  m_uiPoint = stream->m_uiPoint;
  v3 = 0;
  m_uiSize = stream->m_uiSize;
  if ( m_uiSize > (unsigned int)m_uiPoint )
  {
    v7 = stream->m_pucData[m_uiPoint] | ((stream->m_pucData[(unsigned int)(m_uiPoint + 1)] | ((stream->m_pucData[(unsigned int)(m_uiPoint + 2)] | (stream->m_pucData[(unsigned int)(m_uiPoint + 3)] << 8)) << 8)) << 8);
    stream->m_uiPoint = m_uiPoint + 4;
  }
  else
  {
    v7 = 0;
  }
  v8 = 0;
  if ( dataVersion >= 106 )
  {
    v9 = stream->m_uiPoint;
    if ( m_uiSize > (unsigned int)v9 )
    {
      v8 = stream->m_pucData[v9] | ((stream->m_pucData[(unsigned int)(v9 + 1)] | ((stream->m_pucData[(unsigned int)(v9 + 2)] | (stream->m_pucData[(unsigned int)(v9 + 3)] << 8)) << 8)) << 8);
      stream->m_uiPoint = v9 + 4;
    }
  }
  v10 = operator new(0x80ui64);
  v10[2] = v7;
  v10[3] = v8;
  v10[4] = 7;
  *((_QWORD *)v10 + 3) = 0i64;
  *(_QWORD *)v10 = &TknDataEvent::`vftable';
  v10[14] = 0;
  *((_QWORD *)v10 + 8) = 0i64;
  v10[18] = 0;
  *((_QWORD *)v10 + 10) = 0i64;
  v10[22] = 0;
  *((_QWORD *)v10 + 12) = 0i64;
  *((_WORD *)v10 + 54) = 0;
  *((_QWORD *)v10 + 14) = 0i64;
  v10[30] = 0;
  *((_BYTE *)v10 + 124) = 0;
  if ( dataVersion >= 131 )
    *((_QWORD *)v10 + 3) = FileUtil::readString(stream);
  v11 = stream->m_uiPoint;
  if ( stream->m_uiSize > (unsigned int)v11 )
  {
    v12 = stream->m_pucData[v11] | ((stream->m_pucData[(unsigned int)(v11 + 1)] | ((stream->m_pucData[(unsigned int)(v11 + 2)] | (stream->m_pucData[(unsigned int)(v11 + 3)] << 8)) << 8)) << 8);
    stream->m_uiPoint = v11 + 4;
  }
  else
  {
    v12 = 0;
  }
  v10[8] = v12;
  v13 = stream->m_uiPoint;
  if ( stream->m_uiSize > (unsigned int)v13 )
  {
    v14 = stream->m_pucData[v13] | ((stream->m_pucData[(unsigned int)(v13 + 1)] | ((stream->m_pucData[(unsigned int)(v13 + 2)] | (stream->m_pucData[(unsigned int)(v13 + 3)] << 8)) << 8)) << 8);
    stream->m_uiPoint = v13 + 4;
  }
  else
  {
    v14 = 0;
  }
  v10[9] = v14;
  if ( dataVersion < 106 )
  {
    v15 = stream->m_uiPoint;
    if ( stream->m_uiSize > (unsigned int)v15 )
    {
      v16 = stream->m_pucData[v15] | ((stream->m_pucData[(unsigned int)(v15 + 1)] | ((stream->m_pucData[(unsigned int)(v15 + 2)] | (stream->m_pucData[(unsigned int)(v15 + 3)] << 8)) << 8)) << 8);
      stream->m_uiPoint = v15 + 4;
    }
    else
    {
      v16 = 0;
    }
    v10[3] = v16;
  }
  v17 = stream->m_uiPoint;
  if ( stream->m_uiSize > (unsigned int)v17 )
  {
    v18 = stream->m_pucData[v17] | ((stream->m_pucData[(unsigned int)(v17 + 1)] | ((stream->m_pucData[(unsigned int)(v17 + 2)] | (stream->m_pucData[(unsigned int)(v17 + 3)] << 8)) << 8)) << 8);
    stream->m_uiPoint = v17 + 4;
  }
  else
  {
    v18 = 0;
  }
  v10[10] = v18;
  v19 = stream->m_uiPoint;
  if ( stream->m_uiSize > (unsigned int)v19 )
  {
    v20 = stream->m_pucData[v19] | ((stream->m_pucData[(unsigned int)(v19 + 1)] | ((stream->m_pucData[(unsigned int)(v19 + 2)] | (stream->m_pucData[(unsigned int)(v19 + 3)] << 8)) << 8)) << 8);
    stream->m_uiPoint = v19 + 4;
  }
  else
  {
    v20 = 0;
  }
  v10[11] = v20;
  v21 = stream->m_uiPoint;
  if ( stream->m_uiSize > (unsigned int)v21 )
  {
    v22 = stream->m_pucData[v21] | ((stream->m_pucData[(unsigned int)(v21 + 1)] | ((stream->m_pucData[(unsigned int)(v21 + 2)] | (stream->m_pucData[(unsigned int)(v21 + 3)] << 8)) << 8)) << 8);
    stream->m_uiPoint = v21 + 4;
  }
  else
  {
    v22 = 0;
  }
  v10[12] = v22;
  *((_BYTE *)v10 + 52) = dataVersion < 122 || FileUtil::readBool(stream);
  v23 = stream->m_uiPoint;
  if ( stream->m_uiSize > (unsigned int)v23 )
  {
    v24 = stream->m_pucData[v23] | ((stream->m_pucData[(unsigned int)(v23 + 1)] | ((stream->m_pucData[(unsigned int)(v23 + 2)] | (stream->m_pucData[(unsigned int)(v23 + 3)] << 8)) << 8)) << 8);
    stream->m_uiPoint = v23 + 4;
  }
  else
  {
    v24 = 0;
  }
  v10[14] = v24;
  if ( v24 > 0 )
  {
    v25 = operator new[](saturated_mul(v24, 4ui64));
    v26 = 0;
    *((_QWORD *)v10 + 8) = v25;
    if ( (int)v10[14] > 0 )
    {
      v27 = 0i64;
      do
      {
        v28 = stream->m_uiPoint;
        if ( stream->m_uiSize > (unsigned int)v28 )
        {
          v29 = stream->m_pucData[v28] | ((stream->m_pucData[(unsigned int)(v28 + 1)] | ((stream->m_pucData[(unsigned int)(v28 + 2)] | (stream->m_pucData[(unsigned int)(v28 + 3)] << 8)) << 8)) << 8);
          stream->m_uiPoint = v28 + 4;
        }
        else
        {
          v29 = 0;
        }
        ++v26;
        *(_DWORD *)(v27 + *((_QWORD *)v10 + 8)) = v29;
        v27 += 4i64;
      }
      while ( v26 < v10[14] );
    }
  }
  v30 = stream->m_uiPoint;
  if ( stream->m_uiSize > (unsigned int)v30 )
  {
    v31 = stream->m_pucData[v30] | ((stream->m_pucData[(unsigned int)(v30 + 1)] | ((stream->m_pucData[(unsigned int)(v30 + 2)] | (stream->m_pucData[(unsigned int)(v30 + 3)] << 8)) << 8)) << 8);
    stream->m_uiPoint = v30 + 4;
  }
  else
  {
    v31 = 0;
  }
  v10[18] = v31;
  if ( v31 > 0 )
  {
    v32 = operator new[](saturated_mul(v31, 4ui64));
    v33 = 0;
    *((_QWORD *)v10 + 10) = v32;
    if ( (int)v10[18] > 0 )
    {
      v34 = 0i64;
      do
      {
        v35 = stream->m_uiPoint;
        if ( stream->m_uiSize > (unsigned int)v35 )
        {
          v36 = stream->m_pucData[v35] | ((stream->m_pucData[(unsigned int)(v35 + 1)] | ((stream->m_pucData[(unsigned int)(v35 + 2)] | (stream->m_pucData[(unsigned int)(v35 + 3)] << 8)) << 8)) << 8);
          stream->m_uiPoint = v35 + 4;
        }
        else
        {
          v36 = 0;
        }
        ++v33;
        *(_DWORD *)(v34 + *((_QWORD *)v10 + 10)) = v36;
        v34 += 4i64;
      }
      while ( v33 < v10[18] );
    }
  }
  if ( dataVersion >= 119 )
  {
    v37 = stream->m_uiPoint;
    if ( stream->m_uiSize > (unsigned int)v37 )
    {
      v38 = stream->m_pucData[v37] | ((stream->m_pucData[(unsigned int)(v37 + 1)] | ((stream->m_pucData[(unsigned int)(v37 + 2)] | (stream->m_pucData[(unsigned int)(v37 + 3)] << 8)) << 8)) << 8);
      stream->m_uiPoint = v37 + 4;
    }
    else
    {
      v38 = 0;
    }
    v10[22] = v38;
    if ( v38 > 0 )
    {
      v39 = operator new[](saturated_mul(v38, 4ui64));
      v40 = 0;
      *((_QWORD *)v10 + 12) = v39;
      if ( (int)v10[22] > 0 )
      {
        v41 = 0i64;
        do
        {
          v42 = stream->m_uiPoint;
          if ( stream->m_uiSize > (unsigned int)v42 )
          {
            v43 = stream->m_pucData[v42] | ((stream->m_pucData[(unsigned int)(v42 + 1)] | ((stream->m_pucData[(unsigned int)(v42 + 2)] | (stream->m_pucData[(unsigned int)(v42 + 3)] << 8)) << 8)) << 8);
            stream->m_uiPoint = v42 + 4;
          }
          else
          {
            v43 = 0;
          }
          ++v40;
          *(_DWORD *)(v41 + *((_QWORD *)v10 + 12)) = v43;
          v41 += 4i64;
        }
        while ( v40 < v10[22] );
      }
    }
  }
  if ( dataVersion >= 114 )
  {
    v44 = stream->m_uiPoint;
    if ( stream->m_uiSize > (unsigned int)v44 )
    {
      v45 = stream->m_pucData[v44] | ((stream->m_pucData[(unsigned int)(v44 + 1)] | ((stream->m_pucData[(unsigned int)(v44 + 2)] | (stream->m_pucData[(unsigned int)(v44 + 3)] << 8)) << 8)) << 8);
      stream->m_uiPoint = v44 + 4;
    }
    else
    {
      v45 = 0;
    }
    *((_BYTE *)v10 + 108) = v45 != 0;
  }
  if ( dataVersion >= 133 )
  {
    v46 = stream->m_uiPoint;
    if ( stream->m_uiSize > (unsigned int)v46 )
    {
      v47 = stream->m_pucData[v46] | ((stream->m_pucData[(unsigned int)(v46 + 1)] | ((stream->m_pucData[(unsigned int)(v46 + 2)] | (stream->m_pucData[(unsigned int)(v46 + 3)] << 8)) << 8)) << 8);
      stream->m_uiPoint = v46 + 4;
    }
    else
    {
      v47 = 0;
    }
    *((_BYTE *)v10 + 109) = v47 != 0;
    if ( v47 )
      *((_QWORD *)v10 + 14) = FileUtil::readString(stream);
  }
  v10[30] = 0;
  if ( dataVersion < 123 )
  {
    if ( dataVersion >= 116 )
    {
      v50 = stream->m_uiSize;
      v51 = stream->m_uiPoint;
      if ( v50 > v51 )
        stream->m_uiPoint = v51 + 4;
      v52 = stream->m_uiPoint;
      if ( v50 > (unsigned int)v52 )
      {
        v53 = (stream->m_pucData[v52] | ((stream->m_pucData[(unsigned int)(v52 + 1)] | ((stream->m_pucData[(unsigned int)(v52 + 2)] | (stream->m_pucData[(unsigned int)(v52 + 3)] << 8)) << 8)) << 8)) == 0;
        stream->m_uiPoint = v52 + 4;
        if ( !v53 )
        {
          String = FileUtil::readString(stream);
          if ( String )
            operator delete(String, v55);
        }
      }
    }
  }
  else
  {
    v48 = stream->m_uiPoint;
    if ( stream->m_uiSize > (unsigned int)v48 )
    {
      v49 = stream->m_pucData[v48] | ((stream->m_pucData[(unsigned int)(v48 + 1)] | ((stream->m_pucData[(unsigned int)(v48 + 2)] | (stream->m_pucData[(unsigned int)(v48 + 3)] << 8)) << 8)) << 8);
      stream->m_uiPoint = v48 + 4;
      v10[30] = v49;
    }
    else
    {
      v10[30] = 0;
    }
  }
  if ( dataVersion >= 202 )
  {
    v56 = stream->m_uiSize;
    v57 = stream->m_uiPoint;
    if ( v56 > v57 )
      stream->m_uiPoint = v57 + 4;
    v58 = stream->m_uiPoint;
    if ( v56 > (unsigned int)v58 )
    {
      v59 = stream->m_pucData[v58] | ((stream->m_pucData[(unsigned int)(v58 + 1)] | ((stream->m_pucData[(unsigned int)(v58 + 2)] | (stream->m_pucData[(unsigned int)(v58 + 3)] << 8)) << 8)) << 8);
      stream->m_uiPoint = v58 + 4;
    }
    else
    {
      v59 = 0;
    }
    *((_BYTE *)v10 + 124) = v59 != 0;
  }
  if ( dataVersion < 103 )
  {
    v10[26] = 1;
  }
  else
  {
    v60 = stream->m_uiPoint;
    if ( stream->m_uiSize > (unsigned int)v60 )
    {
      v3 = stream->m_pucData[v60] | ((stream->m_pucData[(unsigned int)(v60 + 1)] | ((stream->m_pucData[(unsigned int)(v60 + 2)] | (stream->m_pucData[(unsigned int)(v60 + 3)] << 8)) << 8)) << 8);
      stream->m_uiPoint = v60 + 4;
    }
    v10[26] = v3;
  }
  return (TknDataEvent *)v10;
}

TknDataEventBillboardAnimation *__fastcall TknDataEventBillboardAnimation::create(
        OGLInputStream *stream,
        int dataVersion)
{
  __int64 m_uiPoint; // r8
  unsigned int m_uiSize; // er9
  int v6; // ebp
  __int64 v7; // r8
  int v8; // esi
  _DWORD *v9; // rdi
  __int64 v10; // r9
  int v11; // er8
  __int64 v12; // r9
  int v13; // er8
  __int64 v14; // r9
  int v15; // er8
  __int64 v16; // r9
  int v17; // er8

  m_uiPoint = stream->m_uiPoint;
  m_uiSize = stream->m_uiSize;
  if ( m_uiSize > (unsigned int)m_uiPoint )
  {
    v6 = stream->m_pucData[m_uiPoint] | ((stream->m_pucData[(unsigned int)(m_uiPoint + 1)] | ((stream->m_pucData[(unsigned int)(m_uiPoint + 2)] | (stream->m_pucData[(unsigned int)(m_uiPoint + 3)] << 8)) << 8)) << 8);
    stream->m_uiPoint = m_uiPoint + 4;
  }
  else
  {
    v6 = 0;
  }
  v7 = stream->m_uiPoint;
  if ( m_uiSize > (unsigned int)v7 )
  {
    v8 = stream->m_pucData[v7] | ((stream->m_pucData[(unsigned int)(v7 + 1)] | ((stream->m_pucData[(unsigned int)(v7 + 2)] | (stream->m_pucData[(unsigned int)(v7 + 3)] << 8)) << 8)) << 8);
    stream->m_uiPoint = v7 + 4;
  }
  else
  {
    v8 = 0;
  }
  v9 = operator new(0x48ui64);
  v9[2] = v6;
  v9[3] = v8;
  v9[4] = 14;
  *((_QWORD *)v9 + 3) = 0i64;
  *(_QWORD *)v9 = &TknDataEventBillboardAnimation::`vftable';
  if ( dataVersion >= 131 )
    *((_QWORD *)v9 + 3) = FileUtil::readString(stream);
  v10 = stream->m_uiPoint;
  if ( stream->m_uiSize > (unsigned int)v10 )
  {
    v11 = stream->m_pucData[v10] | ((stream->m_pucData[(unsigned int)(v10 + 1)] | ((stream->m_pucData[(unsigned int)(v10 + 2)] | (stream->m_pucData[(unsigned int)(v10 + 3)] << 8)) << 8)) << 8);
    stream->m_uiPoint = v10 + 4;
  }
  else
  {
    v11 = 0;
  }
  v9[8] = v11;
  v12 = stream->m_uiPoint;
  if ( stream->m_uiSize > (unsigned int)v12 )
  {
    v13 = stream->m_pucData[v12] | ((stream->m_pucData[(unsigned int)(v12 + 1)] | ((stream->m_pucData[(unsigned int)(v12 + 2)] | (stream->m_pucData[(unsigned int)(v12 + 3)] << 8)) << 8)) << 8);
    stream->m_uiPoint = v12 + 4;
  }
  else
  {
    v13 = 0;
  }
  v9[11] = v13;
  v14 = stream->m_uiPoint;
  if ( stream->m_uiSize > (unsigned int)v14 )
  {
    v15 = stream->m_pucData[v14] | ((stream->m_pucData[(unsigned int)(v14 + 1)] | ((stream->m_pucData[(unsigned int)(v14 + 2)] | (stream->m_pucData[(unsigned int)(v14 + 3)] << 8)) << 8)) << 8);
    stream->m_uiPoint = v14 + 4;
  }
  else
  {
    v15 = 0;
  }
  v9[12] = v15;
  v16 = stream->m_uiPoint;
  if ( stream->m_uiSize > (unsigned int)v16 )
  {
    v17 = stream->m_pucData[v16] | ((stream->m_pucData[(unsigned int)(v16 + 1)] | ((stream->m_pucData[(unsigned int)(v16 + 2)] | (stream->m_pucData[(unsigned int)(v16 + 3)] << 8)) << 8)) << 8);
    stream->m_uiPoint = v16 + 4;
    v9[9] = v17;
  }
  else
  {
    v9[9] = 0;
  }
  return (TknDataEventBillboardAnimation *)v9;
}

TknDataEventConditions *__fastcall TknDataEventConditions::create(OGLInputStream *stream, int dataVersion)
{
  __int64 m_uiPoint; // r8
  int v3; // esi
  unsigned int m_uiSize; // er9
  int v7; // er14
  int v8; // ebp
  __int64 v9; // r8
  char *v10; // rdi
  __int64 v11; // r9
  int v12; // er8
  __int64 v13; // r9
  int v14; // er8
  __int64 v15; // r9
  int v16; // er8
  __int64 v17; // r9
  int v18; // er8
  __int64 v19; // r9
  int v20; // er8
  void *v21; // rax
  int v22; // er11
  __int64 v23; // r10
  __int64 v24; // r9
  int v25; // er8
  __int64 v26; // r9
  int v27; // er8
  void *v28; // rax
  int v29; // er11
  __int64 v30; // r10
  __int64 v31; // r9
  int v32; // er8
  __int64 v33; // rdx
  int v34; // xmm1_4
  int v35; // xmm0_4
  __int64 v36; // rdx
  float v37; // xmm3_4
  float v38; // xmm2_4
  __int64 v39; // r9
  int v40; // er8
  __int64 v41; // r9
  int v42; // er8
  bool v43; // zf
  __int64 v44; // r9
  int v45; // er8
  __int64 v46; // r9
  int v47; // er8
  __int64 v48; // r9
  __int64 v49; // rdx

  m_uiPoint = stream->m_uiPoint;
  v3 = 0;
  m_uiSize = stream->m_uiSize;
  if ( m_uiSize > (unsigned int)m_uiPoint )
  {
    v7 = stream->m_pucData[m_uiPoint] | ((stream->m_pucData[(unsigned int)(m_uiPoint + 1)] | ((stream->m_pucData[(unsigned int)(m_uiPoint + 2)] | (stream->m_pucData[(unsigned int)(m_uiPoint + 3)] << 8)) << 8)) << 8);
    stream->m_uiPoint = m_uiPoint + 4;
  }
  else
  {
    v7 = 0;
  }
  v8 = 0;
  if ( dataVersion >= 106 )
  {
    v9 = stream->m_uiPoint;
    if ( m_uiSize > (unsigned int)v9 )
    {
      v8 = stream->m_pucData[v9] | ((stream->m_pucData[(unsigned int)(v9 + 1)] | ((stream->m_pucData[(unsigned int)(v9 + 2)] | (stream->m_pucData[(unsigned int)(v9 + 3)] << 8)) << 8)) << 8);
      stream->m_uiPoint = v9 + 4;
    }
  }
  v10 = (char *)operator new(0x68ui64);
  *((_DWORD *)v10 + 2) = v7;
  *((_DWORD *)v10 + 3) = v8;
  *((_DWORD *)v10 + 4) = 2;
  *((_QWORD *)v10 + 3) = 0i64;
  *(_QWORD *)v10 = &TknDataEventConditions::`vftable';
  v10[44] = 0;
  *((_QWORD *)v10 + 6) = 0i64;
  *((_QWORD *)v10 + 7) = 0i64;
  *((_QWORD *)v10 + 8) = 0i64;
  *((_DWORD *)v10 + 18) = -1029701632;
  *(_QWORD *)(v10 + 76) = 1117782016i64;
  *(_QWORD *)(v10 + 84) = 0i64;
  *(_QWORD *)(v10 + 92) = 0i64;
  *((_DWORD *)v10 + 25) = 1120403456;
  if ( dataVersion >= 131 )
    *((_QWORD *)v10 + 3) = FileUtil::readString(stream);
  v11 = stream->m_uiPoint;
  if ( stream->m_uiSize > (unsigned int)v11 )
  {
    v12 = stream->m_pucData[v11] | ((stream->m_pucData[(unsigned int)(v11 + 1)] | ((stream->m_pucData[(unsigned int)(v11 + 2)] | (stream->m_pucData[(unsigned int)(v11 + 3)] << 8)) << 8)) << 8);
    stream->m_uiPoint = v11 + 4;
  }
  else
  {
    v12 = 0;
  }
  *((_DWORD *)v10 + 9) = v12;
  v13 = stream->m_uiPoint;
  if ( stream->m_uiSize > (unsigned int)v13 )
  {
    v14 = stream->m_pucData[v13] | ((stream->m_pucData[(unsigned int)(v13 + 1)] | ((stream->m_pucData[(unsigned int)(v13 + 2)] | (stream->m_pucData[(unsigned int)(v13 + 3)] << 8)) << 8)) << 8);
    stream->m_uiPoint = v13 + 4;
  }
  else
  {
    v14 = 0;
  }
  *((_DWORD *)v10 + 10) = v14;
  v15 = stream->m_uiPoint;
  if ( stream->m_uiSize > (unsigned int)v15 )
  {
    v16 = stream->m_pucData[v15] | ((stream->m_pucData[(unsigned int)(v15 + 1)] | ((stream->m_pucData[(unsigned int)(v15 + 2)] | (stream->m_pucData[(unsigned int)(v15 + 3)] << 8)) << 8)) << 8);
    stream->m_uiPoint = v15 + 4;
  }
  else
  {
    v16 = 0;
  }
  *((_DWORD *)v10 + 8) = v16;
  v17 = stream->m_uiPoint;
  if ( stream->m_uiSize > (unsigned int)v17 )
  {
    v18 = stream->m_pucData[v17] | ((stream->m_pucData[(unsigned int)(v17 + 1)] | ((stream->m_pucData[(unsigned int)(v17 + 2)] | (stream->m_pucData[(unsigned int)(v17 + 3)] << 8)) << 8)) << 8);
    stream->m_uiPoint = v17 + 4;
  }
  else
  {
    v18 = 0;
  }
  v10[44] = v18 != 0;
  if ( dataVersion >= 200 )
  {
    v19 = stream->m_uiPoint;
    if ( stream->m_uiSize > (unsigned int)v19 )
    {
      v20 = stream->m_pucData[v19] | ((stream->m_pucData[(unsigned int)(v19 + 1)] | ((stream->m_pucData[(unsigned int)(v19 + 2)] | (stream->m_pucData[(unsigned int)(v19 + 3)] << 8)) << 8)) << 8);
      stream->m_uiPoint = v19 + 4;
    }
    else
    {
      v20 = 0;
    }
    *((_DWORD *)v10 + 16) = v20;
    if ( v20 > 0 )
    {
      v21 = operator new[](saturated_mul(v20, 4ui64));
      v22 = 0;
      *((_QWORD *)v10 + 6) = v21;
      if ( *((int *)v10 + 16) > 0 )
      {
        v23 = 0i64;
        do
        {
          v24 = stream->m_uiPoint;
          if ( stream->m_uiSize > (unsigned int)v24 )
          {
            v25 = stream->m_pucData[v24] | ((stream->m_pucData[(unsigned int)(v24 + 1)] | ((stream->m_pucData[(unsigned int)(v24 + 2)] | (stream->m_pucData[(unsigned int)(v24 + 3)] << 8)) << 8)) << 8);
            stream->m_uiPoint = v24 + 4;
          }
          else
          {
            v25 = 0;
          }
          ++v22;
          *(_DWORD *)(v23 + *((_QWORD *)v10 + 6)) = v25;
          v23 += 4i64;
        }
        while ( v22 < *((_DWORD *)v10 + 16) );
      }
    }
    v26 = stream->m_uiPoint;
    if ( stream->m_uiSize > (unsigned int)v26 )
    {
      v27 = stream->m_pucData[v26] | ((stream->m_pucData[(unsigned int)(v26 + 1)] | ((stream->m_pucData[(unsigned int)(v26 + 2)] | (stream->m_pucData[(unsigned int)(v26 + 3)] << 8)) << 8)) << 8);
      stream->m_uiPoint = v26 + 4;
    }
    else
    {
      v27 = 0;
    }
    *((_DWORD *)v10 + 17) = v27;
    if ( v27 > 0 )
    {
      v28 = operator new[](saturated_mul(v27, 4ui64));
      v29 = 0;
      *((_QWORD *)v10 + 7) = v28;
      if ( *((int *)v10 + 17) > 0 )
      {
        v30 = 0i64;
        do
        {
          v31 = stream->m_uiPoint;
          if ( stream->m_uiSize > (unsigned int)v31 )
          {
            v32 = stream->m_pucData[v31] | ((stream->m_pucData[(unsigned int)(v31 + 1)] | ((stream->m_pucData[(unsigned int)(v31 + 2)] | (stream->m_pucData[(unsigned int)(v31 + 3)] << 8)) << 8)) << 8);
            stream->m_uiPoint = v31 + 4;
          }
          else
          {
            v32 = 0;
          }
          ++v29;
          *(_DWORD *)(v30 + *((_QWORD *)v10 + 7)) = v32;
          v30 += 4i64;
        }
        while ( v29 < *((_DWORD *)v10 + 17) );
      }
    }
    v33 = stream->m_uiPoint;
    v34 = 0;
    if ( stream->m_uiSize > (unsigned int)v33 )
    {
      v35 = *(_DWORD *)&stream->m_pucData[v33];
      stream->m_uiPoint = v33 + 4;
    }
    else
    {
      v35 = 0;
    }
    *((_DWORD *)v10 + 18) = v35;
    v36 = stream->m_uiPoint;
    if ( stream->m_uiSize > (unsigned int)v36 )
    {
      v37 = *(float *)&stream->m_pucData[v36];
      stream->m_uiPoint = v36 + 4;
    }
    else
    {
      v37 = 0.0;
    }
    v38 = *((float *)v10 + 18);
    *((float *)v10 + 19) = v38 + v37;
    if ( v38 > (float)(v38 + v37) )
    {
      *((float *)v10 + 18) = v38 + v37;
      *((float *)v10 + 19) = v38;
    }
    v39 = stream->m_uiPoint;
    if ( stream->m_uiSize > (unsigned int)v39 )
    {
      v40 = stream->m_pucData[v39] | ((stream->m_pucData[(unsigned int)(v39 + 1)] | ((stream->m_pucData[(unsigned int)(v39 + 2)] | (stream->m_pucData[(unsigned int)(v39 + 3)] << 8)) << 8)) << 8);
      stream->m_uiPoint = v39 + 4;
    }
    else
    {
      v40 = 0;
    }
    *((_DWORD *)v10 + 20) = v40;
    if ( v40 )
    {
      v41 = stream->m_uiPoint;
      if ( stream->m_uiSize > (unsigned int)v41 )
      {
        v42 = stream->m_pucData[v41] | ((stream->m_pucData[(unsigned int)(v41 + 1)] | ((stream->m_pucData[(unsigned int)(v41 + 2)] | (stream->m_pucData[(unsigned int)(v41 + 3)] << 8)) << 8)) << 8);
        stream->m_uiPoint = v41 + 4;
      }
      else
      {
        v42 = 0;
      }
      v43 = *((_DWORD *)v10 + 20) == 4;
      *((_DWORD *)v10 + 21) = v42;
      if ( v43 )
      {
        v44 = stream->m_uiPoint;
        if ( stream->m_uiSize > (unsigned int)v44 )
        {
          v45 = stream->m_pucData[v44] | ((stream->m_pucData[(unsigned int)(v44 + 1)] | ((stream->m_pucData[(unsigned int)(v44 + 2)] | (stream->m_pucData[(unsigned int)(v44 + 3)] << 8)) << 8)) << 8);
          stream->m_uiPoint = v44 + 4;
        }
        else
        {
          v45 = 0;
        }
        *((_DWORD *)v10 + 22) = v45;
      }
    }
    v46 = stream->m_uiPoint;
    if ( stream->m_uiSize > (unsigned int)v46 )
    {
      v47 = stream->m_pucData[v46] | ((stream->m_pucData[(unsigned int)(v46 + 1)] | ((stream->m_pucData[(unsigned int)(v46 + 2)] | (stream->m_pucData[(unsigned int)(v46 + 3)] << 8)) << 8)) << 8);
      stream->m_uiPoint = v46 + 4;
    }
    else
    {
      v47 = 0;
    }
    *((_DWORD *)v10 + 23) = v47;
    v48 = stream->m_uiPoint;
    if ( stream->m_uiSize > (unsigned int)v48 )
    {
      v3 = stream->m_pucData[v48] | ((stream->m_pucData[(unsigned int)(v48 + 1)] | ((stream->m_pucData[(unsigned int)(v48 + 2)] | (stream->m_pucData[(unsigned int)(v48 + 3)] << 8)) << 8)) << 8);
      stream->m_uiPoint = v48 + 4;
    }
    *((_DWORD *)v10 + 24) = v3;
    v49 = stream->m_uiPoint;
    if ( stream->m_uiSize > (unsigned int)v49 )
    {
      v34 = *(_DWORD *)&stream->m_pucData[v49];
      stream->m_uiPoint = v49 + 4;
    }
    *((_DWORD *)v10 + 25) = v34;
  }
  if ( dataVersion < 129 )
  {
    switch ( *((_DWORD *)v10 + 10) )
    {
      case 5:
        *((_DWORD *)v10 + 10) = 6;
        break;
      case 6:
        *((_DWORD *)v10 + 10) = 7;
        break;
      case 7:
        *((_DWORD *)v10 + 10) = 8;
        break;
      case 8:
        *((_DWORD *)v10 + 10) = 9;
        break;
      case 9:
        *((_DWORD *)v10 + 10) = 10;
        break;
      case 0xA:
        *((_DWORD *)v10 + 10) = 11;
        break;
      case 0xB:
        *((_DWORD *)v10 + 10) = 12;
        break;
      default:
        return (TknDataEventConditions *)v10;
    }
  }
  return (TknDataEventConditions *)v10;
}

TknDataEventEffectAnimation *__fastcall TknDataEventEffectAnimation::create(OGLInputStream *stream, int dataVersion)
{
  __int64 m_uiPoint; // r8
  unsigned int m_uiSize; // er9
  int v6; // ebp
  int v7; // esi
  __int64 v8; // r8
  _DWORD *v9; // rdi
  __int64 v10; // r9
  int v11; // er8
  __int64 v12; // r9
  int v13; // er8
  __int64 v14; // r9
  int v15; // er8
  __int64 v16; // r9
  int v17; // er8
  unsigned int v18; // ecx
  unsigned int v19; // eax
  __int64 v20; // r9
  int v21; // er8

  m_uiPoint = stream->m_uiPoint;
  m_uiSize = stream->m_uiSize;
  if ( m_uiSize > (unsigned int)m_uiPoint )
  {
    v6 = stream->m_pucData[m_uiPoint] | ((stream->m_pucData[(unsigned int)(m_uiPoint + 1)] | ((stream->m_pucData[(unsigned int)(m_uiPoint + 2)] | (stream->m_pucData[(unsigned int)(m_uiPoint + 3)] << 8)) << 8)) << 8);
    stream->m_uiPoint = m_uiPoint + 4;
  }
  else
  {
    v6 = 0;
  }
  v7 = 0;
  if ( dataVersion >= 106 )
  {
    v8 = stream->m_uiPoint;
    if ( m_uiSize > (unsigned int)v8 )
    {
      v7 = stream->m_pucData[v8] | ((stream->m_pucData[(unsigned int)(v8 + 1)] | ((stream->m_pucData[(unsigned int)(v8 + 2)] | (stream->m_pucData[(unsigned int)(v8 + 3)] << 8)) << 8)) << 8);
      stream->m_uiPoint = v8 + 4;
    }
  }
  v9 = operator new(0x30ui64);
  v9[2] = v6;
  v9[3] = v7;
  v9[4] = 12;
  *((_QWORD *)v9 + 3) = 0i64;
  *(_QWORD *)v9 = &TknDataEventEffectAnimation::`vftable';
  if ( dataVersion >= 131 )
    *((_QWORD *)v9 + 3) = FileUtil::readString(stream);
  if ( dataVersion < 106 )
  {
    v10 = stream->m_uiPoint;
    if ( stream->m_uiSize > (unsigned int)v10 )
    {
      v11 = stream->m_pucData[v10] | ((stream->m_pucData[(unsigned int)(v10 + 1)] | ((stream->m_pucData[(unsigned int)(v10 + 2)] | (stream->m_pucData[(unsigned int)(v10 + 3)] << 8)) << 8)) << 8);
      stream->m_uiPoint = v10 + 4;
    }
    else
    {
      v11 = 0;
    }
    v9[3] = v11;
  }
  v12 = stream->m_uiPoint;
  if ( stream->m_uiSize > (unsigned int)v12 )
  {
    v13 = stream->m_pucData[v12] | ((stream->m_pucData[(unsigned int)(v12 + 1)] | ((stream->m_pucData[(unsigned int)(v12 + 2)] | (stream->m_pucData[(unsigned int)(v12 + 3)] << 8)) << 8)) << 8);
    stream->m_uiPoint = v12 + 4;
  }
  else
  {
    v13 = 0;
  }
  v9[8] = v13;
  v14 = stream->m_uiPoint;
  if ( stream->m_uiSize > (unsigned int)v14 )
  {
    v15 = stream->m_pucData[v14] | ((stream->m_pucData[(unsigned int)(v14 + 1)] | ((stream->m_pucData[(unsigned int)(v14 + 2)] | (stream->m_pucData[(unsigned int)(v14 + 3)] << 8)) << 8)) << 8);
    stream->m_uiPoint = v14 + 4;
  }
  else
  {
    v15 = 0;
  }
  v9[10] = v15;
  v16 = stream->m_uiPoint;
  if ( stream->m_uiSize > (unsigned int)v16 )
  {
    v17 = stream->m_pucData[v16] | ((stream->m_pucData[(unsigned int)(v16 + 1)] | ((stream->m_pucData[(unsigned int)(v16 + 2)] | (stream->m_pucData[(unsigned int)(v16 + 3)] << 8)) << 8)) << 8);
    stream->m_uiPoint = v16 + 4;
  }
  else
  {
    v17 = 0;
  }
  v9[11] = v17;
  v18 = stream->m_uiSize;
  v19 = stream->m_uiPoint;
  if ( v18 > v19 )
    stream->m_uiPoint = v19 + 4;
  v20 = stream->m_uiPoint;
  if ( v18 > (unsigned int)v20 )
  {
    v21 = stream->m_pucData[v20] | ((stream->m_pucData[(unsigned int)(v20 + 1)] | ((stream->m_pucData[(unsigned int)(v20 + 2)] | (stream->m_pucData[(unsigned int)(v20 + 3)] << 8)) << 8)) << 8);
    stream->m_uiPoint = v20 + 4;
    v9[9] = v21;
  }
  else
  {
    v9[9] = 0;
  }
  return (TknDataEventEffectAnimation *)v9;
}

TknDataEventModelAnimation *__fastcall TknDataEventModelAnimation::create(OGLInputStream *stream, int dataVersion)
{
  __int64 m_uiPoint; // r8
  int v3; // esi
  unsigned int m_uiSize; // er9
  int v7; // er14
  int v8; // ebp
  __int64 v9; // r8
  char *v10; // rdi
  __int64 v11; // r9
  int v12; // er8
  __int64 v13; // r9
  int v14; // er8
  __int64 v15; // r9
  int v16; // er8
  __int64 v17; // r9
  int v18; // er8
  __int64 v19; // r9
  int v20; // er8
  __int64 v21; // r9
  int v22; // er8
  __int64 v23; // r9
  int v24; // er8
  __int64 v25; // r9
  int v26; // er8
  __int64 v27; // r9
  int v28; // er8
  __int64 v29; // r9
  int Int; // eax
  __int64 v31; // rsi
  char *String; // rax
  unsigned __int64 v33; // rdx
  char *v34; // r8
  unsigned int v35; // ecx
  unsigned int v36; // ecx
  unsigned int v37; // eax

  m_uiPoint = stream->m_uiPoint;
  v3 = 0;
  m_uiSize = stream->m_uiSize;
  if ( m_uiSize > (unsigned int)m_uiPoint )
  {
    v7 = stream->m_pucData[m_uiPoint] | ((stream->m_pucData[(unsigned int)(m_uiPoint + 1)] | ((stream->m_pucData[(unsigned int)(m_uiPoint + 2)] | (stream->m_pucData[(unsigned int)(m_uiPoint + 3)] << 8)) << 8)) << 8);
    stream->m_uiPoint = m_uiPoint + 4;
  }
  else
  {
    v7 = 0;
  }
  v8 = 0;
  if ( dataVersion >= 106 )
  {
    v9 = stream->m_uiPoint;
    if ( m_uiSize > (unsigned int)v9 )
    {
      v8 = stream->m_pucData[v9] | ((stream->m_pucData[(unsigned int)(v9 + 1)] | ((stream->m_pucData[(unsigned int)(v9 + 2)] | (stream->m_pucData[(unsigned int)(v9 + 3)] << 8)) << 8)) << 8);
      stream->m_uiPoint = v9 + 4;
    }
  }
  v10 = (char *)operator new(0x48ui64);
  *((_DWORD *)v10 + 2) = v7;
  *((_DWORD *)v10 + 3) = v8;
  *((_DWORD *)v10 + 4) = 8;
  *((_QWORD *)v10 + 3) = 0i64;
  *(_QWORD *)v10 = &TknDataEventModelAnimation::`vftable';
  if ( dataVersion >= 131 )
    *((_QWORD *)v10 + 3) = FileUtil::readString(stream);
  if ( dataVersion < 106 )
  {
    v11 = stream->m_uiPoint;
    if ( stream->m_uiSize > (unsigned int)v11 )
    {
      v12 = stream->m_pucData[v11] | ((stream->m_pucData[(unsigned int)(v11 + 1)] | ((stream->m_pucData[(unsigned int)(v11 + 2)] | (stream->m_pucData[(unsigned int)(v11 + 3)] << 8)) << 8)) << 8);
      stream->m_uiPoint = v11 + 4;
    }
    else
    {
      v12 = 0;
    }
    *((_DWORD *)v10 + 3) = v12;
  }
  v13 = stream->m_uiPoint;
  if ( stream->m_uiSize > (unsigned int)v13 )
  {
    v14 = stream->m_pucData[v13] | ((stream->m_pucData[(unsigned int)(v13 + 1)] | ((stream->m_pucData[(unsigned int)(v13 + 2)] | (stream->m_pucData[(unsigned int)(v13 + 3)] << 8)) << 8)) << 8);
    stream->m_uiPoint = v13 + 4;
  }
  else
  {
    v14 = 0;
  }
  *((_DWORD *)v10 + 8) = v14;
  v15 = stream->m_uiPoint;
  if ( stream->m_uiSize > (unsigned int)v15 )
  {
    v16 = stream->m_pucData[v15] | ((stream->m_pucData[(unsigned int)(v15 + 1)] | ((stream->m_pucData[(unsigned int)(v15 + 2)] | (stream->m_pucData[(unsigned int)(v15 + 3)] << 8)) << 8)) << 8);
    stream->m_uiPoint = v15 + 4;
  }
  else
  {
    v16 = 0;
  }
  *((_DWORD *)v10 + 11) = v16;
  v17 = stream->m_uiPoint;
  if ( stream->m_uiSize > (unsigned int)v17 )
  {
    v18 = stream->m_pucData[v17] | ((stream->m_pucData[(unsigned int)(v17 + 1)] | ((stream->m_pucData[(unsigned int)(v17 + 2)] | (stream->m_pucData[(unsigned int)(v17 + 3)] << 8)) << 8)) << 8);
    stream->m_uiPoint = v17 + 4;
  }
  else
  {
    v18 = 0;
  }
  *((_DWORD *)v10 + 12) = v18;
  v19 = stream->m_uiPoint;
  if ( stream->m_uiSize > (unsigned int)v19 )
  {
    v20 = stream->m_pucData[v19] | ((stream->m_pucData[(unsigned int)(v19 + 1)] | ((stream->m_pucData[(unsigned int)(v19 + 2)] | (stream->m_pucData[(unsigned int)(v19 + 3)] << 8)) << 8)) << 8);
    stream->m_uiPoint = v19 + 4;
  }
  else
  {
    v20 = 0;
  }
  *((_DWORD *)v10 + 9) = v20;
  v21 = stream->m_uiPoint;
  if ( stream->m_uiSize > (unsigned int)v21 )
  {
    v22 = stream->m_pucData[v21] | ((stream->m_pucData[(unsigned int)(v21 + 1)] | ((stream->m_pucData[(unsigned int)(v21 + 2)] | (stream->m_pucData[(unsigned int)(v21 + 3)] << 8)) << 8)) << 8);
    stream->m_uiPoint = v21 + 4;
  }
  else
  {
    v22 = 0;
  }
  v10[40] = v22 != 0;
  if ( dataVersion < 101 )
  {
    *(_QWORD *)(v10 + 52) = 0i64;
    *(_QWORD *)(v10 + 60) = 0i64;
  }
  else
  {
    v23 = stream->m_uiPoint;
    if ( stream->m_uiSize > (unsigned int)v23 )
    {
      v24 = stream->m_pucData[v23] | ((stream->m_pucData[(unsigned int)(v23 + 1)] | ((stream->m_pucData[(unsigned int)(v23 + 2)] | (stream->m_pucData[(unsigned int)(v23 + 3)] << 8)) << 8)) << 8);
      stream->m_uiPoint = v23 + 4;
    }
    else
    {
      v24 = 0;
    }
    *((_DWORD *)v10 + 13) = v24;
    v25 = stream->m_uiPoint;
    if ( stream->m_uiSize > (unsigned int)v25 )
    {
      v26 = stream->m_pucData[v25] | ((stream->m_pucData[(unsigned int)(v25 + 1)] | ((stream->m_pucData[(unsigned int)(v25 + 2)] | (stream->m_pucData[(unsigned int)(v25 + 3)] << 8)) << 8)) << 8);
      stream->m_uiPoint = v25 + 4;
    }
    else
    {
      v26 = 0;
    }
    *((_DWORD *)v10 + 14) = v26;
    v27 = stream->m_uiPoint;
    if ( stream->m_uiSize > (unsigned int)v27 )
    {
      v28 = stream->m_pucData[v27] | ((stream->m_pucData[(unsigned int)(v27 + 1)] | ((stream->m_pucData[(unsigned int)(v27 + 2)] | (stream->m_pucData[(unsigned int)(v27 + 3)] << 8)) << 8)) << 8);
      stream->m_uiPoint = v27 + 4;
    }
    else
    {
      v28 = 0;
    }
    *((_DWORD *)v10 + 15) = v28;
    v29 = stream->m_uiPoint;
    if ( stream->m_uiSize > (unsigned int)v29 )
    {
      v3 = stream->m_pucData[v29] | ((stream->m_pucData[(unsigned int)(v29 + 1)] | ((stream->m_pucData[(unsigned int)(v29 + 2)] | (stream->m_pucData[(unsigned int)(v29 + 3)] << 8)) << 8)) << 8);
      stream->m_uiPoint = v29 + 4;
    }
    *((_DWORD *)v10 + 16) = v3;
  }
  if ( (unsigned int)(dataVersion - 132) <= 2 && FileUtil::readBool(stream) )
  {
    Int = OGLInputStream::getInt(stream);
    if ( Int > 0 )
    {
      v31 = (unsigned int)Int;
      do
      {
        String = FileUtil::readString(stream);
        v33 = stream->m_uiSize;
        v34 = String;
        v35 = stream->m_uiPoint;
        if ( (unsigned int)v33 > v35 )
          stream->m_uiPoint = v35 + 4;
        v36 = stream->m_uiPoint;
        if ( (unsigned int)v33 > v36 )
          stream->m_uiPoint = v36 + 4;
        v37 = stream->m_uiPoint;
        if ( (unsigned int)v33 > v37 )
          stream->m_uiPoint = v37 + 4;
        if ( v34 )
          operator delete(v34, v33);
        --v31;
      }
      while ( v31 );
    }
  }
  return (TknDataEventModelAnimation *)v10;
}

TknDataEventScript *__fastcall TknDataEventScript::create(OGLInputStream *stream, int dataVersion)
{
  __int64 m_uiPoint; // r8
  unsigned int m_uiSize; // er9
  int v6; // ebp
  __int64 v7; // r8
  int v8; // esi
  _DWORD *v9; // rdi
  __int64 v10; // r9
  int v11; // er8
  __int64 v12; // r9
  int v13; // er8
  __int64 v14; // r9
  int v15; // er8
  int v16; // xmm0_4
  __int64 v17; // rdx
  int v18; // xmm1_4
  __int64 v19; // rdx
  int v20; // xmm1_4
  __int64 v21; // rdx
  __int64 v22; // r9
  int v23; // er8

  m_uiPoint = stream->m_uiPoint;
  m_uiSize = stream->m_uiSize;
  if ( m_uiSize > (unsigned int)m_uiPoint )
  {
    v6 = stream->m_pucData[m_uiPoint] | ((stream->m_pucData[(unsigned int)(m_uiPoint + 1)] | ((stream->m_pucData[(unsigned int)(m_uiPoint + 2)] | (stream->m_pucData[(unsigned int)(m_uiPoint + 3)] << 8)) << 8)) << 8);
    stream->m_uiPoint = m_uiPoint + 4;
  }
  else
  {
    v6 = 0;
  }
  v7 = stream->m_uiPoint;
  if ( m_uiSize > (unsigned int)v7 )
  {
    v8 = stream->m_pucData[v7] | ((stream->m_pucData[(unsigned int)(v7 + 1)] | ((stream->m_pucData[(unsigned int)(v7 + 2)] | (stream->m_pucData[(unsigned int)(v7 + 3)] << 8)) << 8)) << 8);
    stream->m_uiPoint = v7 + 4;
  }
  else
  {
    v8 = 0;
  }
  v9 = operator new(0x40ui64);
  v9[2] = v6;
  v9[3] = v8;
  v9[4] = 15;
  *((_QWORD *)v9 + 3) = 0i64;
  *(_QWORD *)v9 = &TknDataEventScript::`vftable';
  if ( dataVersion >= 131 )
    *((_QWORD *)v9 + 3) = FileUtil::readString(stream);
  v10 = stream->m_uiPoint;
  if ( stream->m_uiSize > (unsigned int)v10 )
  {
    v11 = stream->m_pucData[v10] | ((stream->m_pucData[(unsigned int)(v10 + 1)] | ((stream->m_pucData[(unsigned int)(v10 + 2)] | (stream->m_pucData[(unsigned int)(v10 + 3)] << 8)) << 8)) << 8);
    stream->m_uiPoint = v10 + 4;
  }
  else
  {
    v11 = 0;
  }
  v9[8] = v11;
  v12 = stream->m_uiPoint;
  if ( stream->m_uiSize > (unsigned int)v12 )
  {
    v13 = stream->m_pucData[v12] | ((stream->m_pucData[(unsigned int)(v12 + 1)] | ((stream->m_pucData[(unsigned int)(v12 + 2)] | (stream->m_pucData[(unsigned int)(v12 + 3)] << 8)) << 8)) << 8);
    stream->m_uiPoint = v12 + 4;
  }
  else
  {
    v13 = 0;
  }
  v9[9] = v13;
  v14 = stream->m_uiPoint;
  if ( stream->m_uiSize > (unsigned int)v14 )
  {
    v15 = stream->m_pucData[v14] | ((stream->m_pucData[(unsigned int)(v14 + 1)] | ((stream->m_pucData[(unsigned int)(v14 + 2)] | (stream->m_pucData[(unsigned int)(v14 + 3)] << 8)) << 8)) << 8);
    stream->m_uiPoint = v14 + 4;
  }
  else
  {
    v15 = 0;
  }
  v9[10] = v15;
  v16 = 0;
  v17 = stream->m_uiPoint;
  if ( stream->m_uiSize > (unsigned int)v17 )
  {
    v18 = *(_DWORD *)&stream->m_pucData[v17];
    stream->m_uiPoint = v17 + 4;
  }
  else
  {
    v18 = 0;
  }
  v9[11] = v18;
  v19 = stream->m_uiPoint;
  if ( stream->m_uiSize > (unsigned int)v19 )
  {
    v20 = *(_DWORD *)&stream->m_pucData[v19];
    stream->m_uiPoint = v19 + 4;
  }
  else
  {
    v20 = 0;
  }
  v9[12] = v20;
  v21 = stream->m_uiPoint;
  if ( stream->m_uiSize > (unsigned int)v21 )
  {
    v16 = *(_DWORD *)&stream->m_pucData[v21];
    stream->m_uiPoint = v21 + 4;
  }
  v9[13] = v16;
  v22 = stream->m_uiPoint;
  if ( stream->m_uiSize > (unsigned int)v22 )
  {
    v23 = stream->m_pucData[v22] | ((stream->m_pucData[(unsigned int)(v22 + 1)] | ((stream->m_pucData[(unsigned int)(v22 + 2)] | (stream->m_pucData[(unsigned int)(v22 + 3)] << 8)) << 8)) << 8);
    stream->m_uiPoint = v22 + 4;
    v9[14] = v23;
  }
  else
  {
    v9[14] = 0;
  }
  return (TknDataEventScript *)v9;
}

TknDataEventSound *__fastcall TknDataEventSound::create(OGLInputStream *stream, int dataVersion)
{
  __int64 m_uiPoint; // r8
  unsigned int m_uiSize; // er9
  int v6; // ebp
  __int64 v7; // r8
  int v8; // esi
  _DWORD *v9; // rdi
  __int64 v10; // r9
  int v11; // er8
  __int64 v12; // r9
  int v13; // er8
  __int64 v14; // r9
  int v15; // er8
  __int64 v16; // r9
  int v17; // er8
  __int64 v18; // rdx
  int v19; // xmm0_4
  __int64 v20; // r9
  int v21; // er8

  m_uiPoint = stream->m_uiPoint;
  m_uiSize = stream->m_uiSize;
  if ( m_uiSize > (unsigned int)m_uiPoint )
  {
    v6 = stream->m_pucData[m_uiPoint] | ((stream->m_pucData[(unsigned int)(m_uiPoint + 1)] | ((stream->m_pucData[(unsigned int)(m_uiPoint + 2)] | (stream->m_pucData[(unsigned int)(m_uiPoint + 3)] << 8)) << 8)) << 8);
    stream->m_uiPoint = m_uiPoint + 4;
  }
  else
  {
    v6 = 0;
  }
  v7 = stream->m_uiPoint;
  if ( m_uiSize > (unsigned int)v7 )
  {
    v8 = stream->m_pucData[v7] | ((stream->m_pucData[(unsigned int)(v7 + 1)] | ((stream->m_pucData[(unsigned int)(v7 + 2)] | (stream->m_pucData[(unsigned int)(v7 + 3)] << 8)) << 8)) << 8);
    stream->m_uiPoint = v7 + 4;
  }
  else
  {
    v8 = 0;
  }
  v9 = operator new(0x48ui64);
  v9[2] = v6;
  v9[3] = v8;
  v9[4] = 16;
  *((_QWORD *)v9 + 3) = 0i64;
  *(_QWORD *)v9 = &TknDataEventSound::`vftable';
  *((_QWORD *)v9 + 6) = 0i64;
  if ( dataVersion >= 131 )
    *((_QWORD *)v9 + 3) = FileUtil::readString(stream);
  v10 = stream->m_uiPoint;
  if ( stream->m_uiSize > (unsigned int)v10 )
  {
    v11 = stream->m_pucData[v10] | ((stream->m_pucData[(unsigned int)(v10 + 1)] | ((stream->m_pucData[(unsigned int)(v10 + 2)] | (stream->m_pucData[(unsigned int)(v10 + 3)] << 8)) << 8)) << 8);
    stream->m_uiPoint = v10 + 4;
  }
  else
  {
    v11 = 0;
  }
  v9[8] = v11;
  v12 = stream->m_uiPoint;
  if ( stream->m_uiSize > (unsigned int)v12 )
  {
    v13 = stream->m_pucData[v12] | ((stream->m_pucData[(unsigned int)(v12 + 1)] | ((stream->m_pucData[(unsigned int)(v12 + 2)] | (stream->m_pucData[(unsigned int)(v12 + 3)] << 8)) << 8)) << 8);
    stream->m_uiPoint = v12 + 4;
  }
  else
  {
    v13 = 0;
  }
  v9[9] = v13;
  v14 = stream->m_uiPoint;
  if ( stream->m_uiSize > (unsigned int)v14 )
  {
    v15 = stream->m_pucData[v14] | ((stream->m_pucData[(unsigned int)(v14 + 1)] | ((stream->m_pucData[(unsigned int)(v14 + 2)] | (stream->m_pucData[(unsigned int)(v14 + 3)] << 8)) << 8)) << 8);
    stream->m_uiPoint = v14 + 4;
  }
  else
  {
    v15 = 0;
  }
  v9[10] = v15;
  v16 = stream->m_uiPoint;
  if ( stream->m_uiSize > (unsigned int)v16 )
  {
    v17 = stream->m_pucData[v16] | ((stream->m_pucData[(unsigned int)(v16 + 1)] | ((stream->m_pucData[(unsigned int)(v16 + 2)] | (stream->m_pucData[(unsigned int)(v16 + 3)] << 8)) << 8)) << 8);
    stream->m_uiPoint = v16 + 4;
  }
  else
  {
    v17 = 0;
  }
  v9[11] = v17;
  *((_QWORD *)v9 + 6) = FileUtil::readString(stream);
  if ( dataVersion < 133 )
  {
    v9[14] = 1128792064;
    *((_BYTE *)v9 + 60) = 0;
  }
  else
  {
    v18 = stream->m_uiPoint;
    if ( stream->m_uiSize > (unsigned int)v18 )
    {
      v19 = *(_DWORD *)&stream->m_pucData[v18];
      stream->m_uiPoint = v18 + 4;
    }
    else
    {
      v19 = 0;
    }
    v9[14] = v19;
    *((_BYTE *)v9 + 60) = FileUtil::readBool(stream);
  }
  v20 = stream->m_uiPoint;
  if ( stream->m_uiSize > (unsigned int)v20 )
  {
    v21 = stream->m_pucData[v20] | ((stream->m_pucData[(unsigned int)(v20 + 1)] | ((stream->m_pucData[(unsigned int)(v20 + 2)] | (stream->m_pucData[(unsigned int)(v20 + 3)] << 8)) << 8)) << 8);
    stream->m_uiPoint = v20 + 4;
    v9[16] = v21;
  }
  else
  {
    v9[16] = 0;
  }
  return (TknDataEventSound *)v9;
}

TknDataEventTranslation *__fastcall TknDataEventTranslation::create(OGLInputStream *stream, int dataVersion)
{
  __int64 m_uiPoint; // r8
  int v3; // esi
  unsigned int m_uiSize; // er9
  int v7; // er15
  int v8; // er14
  __int64 v9; // r8
  char *v10; // rdi
  __int64 v11; // r9
  int v12; // er8
  __int64 v13; // r9
  int v14; // er8
  __int64 v15; // r9
  int v16; // er8
  __int64 v17; // r9
  int v18; // er8
  __int64 v19; // r9
  int v20; // er8
  __int64 v21; // rdx
  int v22; // xmm1_4
  __int64 v23; // rdx
  int v24; // xmm1_4
  __int64 v25; // rdx
  int v26; // xmm1_4
  __int64 v27; // rdx
  int v28; // xmm1_4
  __int64 v29; // rdx
  int v30; // xmm1_4
  __int64 v31; // rdx
  int v32; // xmm1_4
  __int64 v33; // rdx
  int v34; // xmm1_4
  __int64 v35; // rdx
  int v36; // xmm1_4
  __int64 v37; // rdx
  int v38; // xmm1_4
  unsigned int v39; // ecx
  unsigned int v40; // eax
  unsigned int v41; // eax
  unsigned int v42; // eax
  unsigned int v43; // eax
  unsigned int v44; // eax
  unsigned int v45; // eax
  __int64 v46; // r9
  int v47; // er8
  __int64 v48; // r9
  int v49; // er8
  __int64 v50; // r9
  int v51; // er8
  __int64 v52; // r9
  int v53; // er8
  __int64 v54; // r9
  int v55; // er8
  __int64 v56; // r9
  int v57; // er8
  __int64 v58; // r9
  int v59; // er8
  __int64 v60; // rdx
  unsigned int v61; // er8
  float v62; // xmm3_4
  __int64 v63; // rdx
  float v64; // xmm1_4
  __int64 v65; // rdx
  float v66; // xmm1_4
  __int64 v67; // rdx
  float v68; // xmm1_4
  __int64 v69; // r9
  int v70; // er8
  __int64 v71; // rdx
  unsigned int v72; // er8
  float v73; // xmm2_4
  __int64 v74; // rdx
  float v75; // xmm1_4
  __int64 v76; // rdx
  float v77; // xmm1_4
  __int64 v78; // rdx
  float v79; // xmm1_4
  __int64 v80; // r9
  int v81; // er8
  __int64 v82; // r9
  int v83; // er8
  __int64 v84; // r9
  int v85; // er8
  __int64 v86; // rdx
  int v87; // xmm1_4
  __int64 v88; // rdx
  int v89; // xmm1_4
  __int64 v90; // rdx
  int v91; // xmm1_4
  __int64 v92; // rdx
  int v93; // xmm1_4
  __int64 v94; // rdx
  int v95; // xmm1_4
  __int64 v96; // rdx
  int v97; // xmm1_4
  __int64 v98; // rdx
  int v99; // xmm1_4
  __int64 v100; // rdx
  int v101; // xmm1_4
  __int64 v102; // rdx
  int v103; // xmm1_4
  __int64 v104; // rdx
  int v105; // xmm1_4
  __int64 v106; // rdx
  int v107; // xmm1_4
  __int64 v108; // rdx
  int v109; // xmm1_4
  __int64 v110; // rdx
  int v111; // xmm1_4
  __int64 v112; // rdx
  int v113; // xmm1_4
  __int64 v114; // rdx
  int v115; // xmm1_4
  __int64 v116; // r9
  int v117; // er8
  __int64 v118; // r9
  int v119; // er8
  char v120; // al
  char v121; // al
  TknDataEventTranslation *result; // rax

  m_uiPoint = stream->m_uiPoint;
  v3 = 0;
  m_uiSize = stream->m_uiSize;
  if ( m_uiSize > (unsigned int)m_uiPoint )
  {
    v7 = stream->m_pucData[m_uiPoint] | ((stream->m_pucData[(unsigned int)(m_uiPoint + 1)] | ((stream->m_pucData[(unsigned int)(m_uiPoint + 2)] | (stream->m_pucData[(unsigned int)(m_uiPoint + 3)] << 8)) << 8)) << 8);
    stream->m_uiPoint = m_uiPoint + 4;
  }
  else
  {
    v7 = 0;
  }
  v8 = 0;
  if ( dataVersion >= 106 )
  {
    v9 = stream->m_uiPoint;
    if ( m_uiSize > (unsigned int)v9 )
    {
      v8 = stream->m_pucData[v9] | ((stream->m_pucData[(unsigned int)(v9 + 1)] | ((stream->m_pucData[(unsigned int)(v9 + 2)] | (stream->m_pucData[(unsigned int)(v9 + 3)] << 8)) << 8)) << 8);
      stream->m_uiPoint = v9 + 4;
    }
  }
  v10 = (char *)operator new(0xB8ui64);
  *((_DWORD *)v10 + 2) = v7;
  *((_DWORD *)v10 + 3) = v8;
  *((_DWORD *)v10 + 4) = 9;
  *((_QWORD *)v10 + 3) = 0i64;
  *(_QWORD *)v10 = &TknDataEventTranslation::`vftable';
  *((_QWORD *)v10 + 5) = 0i64;
  *((_QWORD *)v10 + 6) = 0i64;
  *((_QWORD *)v10 + 7) = 0i64;
  *((_QWORD *)v10 + 8) = 0i64;
  *((_QWORD *)v10 + 9) = 0i64;
  *((_QWORD *)v10 + 10) = 0i64;
  *((_QWORD *)v10 + 11) = 0i64;
  *((_QWORD *)v10 + 12) = 0i64;
  *((_QWORD *)v10 + 13) = 0i64;
  *(_QWORD *)(v10 + 140) = 0i64;
  *((_DWORD *)v10 + 37) = 0;
  *(_QWORD *)(v10 + 156) = 0i64;
  *((_DWORD *)v10 + 41) = 0;
  if ( dataVersion >= 131 )
    *((_QWORD *)v10 + 3) = FileUtil::readString(stream);
  *(_QWORD *)(v10 + 76) = 0i64;
  *(_QWORD *)(v10 + 84) = 0i64;
  *(_QWORD *)(v10 + 92) = 0i64;
  *((_DWORD *)v10 + 25) = 1065353216;
  *((_DWORD *)v10 + 26) = 1065353216;
  *((_DWORD *)v10 + 27) = 1065353216;
  if ( dataVersion < 106 )
  {
    v11 = stream->m_uiPoint;
    if ( stream->m_uiSize > (unsigned int)v11 )
    {
      v12 = stream->m_pucData[v11] | ((stream->m_pucData[(unsigned int)(v11 + 1)] | ((stream->m_pucData[(unsigned int)(v11 + 2)] | (stream->m_pucData[(unsigned int)(v11 + 3)] << 8)) << 8)) << 8);
      stream->m_uiPoint = v11 + 4;
    }
    else
    {
      v12 = 0;
    }
    *((_DWORD *)v10 + 3) = v12;
  }
  v13 = stream->m_uiPoint;
  if ( stream->m_uiSize > (unsigned int)v13 )
  {
    v14 = stream->m_pucData[v13] | ((stream->m_pucData[(unsigned int)(v13 + 1)] | ((stream->m_pucData[(unsigned int)(v13 + 2)] | (stream->m_pucData[(unsigned int)(v13 + 3)] << 8)) << 8)) << 8);
    stream->m_uiPoint = v13 + 4;
  }
  else
  {
    v14 = 0;
  }
  *((_DWORD *)v10 + 8) = v14;
  v15 = stream->m_uiPoint;
  if ( stream->m_uiSize > (unsigned int)v15 )
  {
    v16 = stream->m_pucData[v15] | ((stream->m_pucData[(unsigned int)(v15 + 1)] | ((stream->m_pucData[(unsigned int)(v15 + 2)] | (stream->m_pucData[(unsigned int)(v15 + 3)] << 8)) << 8)) << 8);
    stream->m_uiPoint = v15 + 4;
  }
  else
  {
    v16 = 0;
  }
  v10[168] = v16 != 0;
  v17 = stream->m_uiPoint;
  if ( stream->m_uiSize > (unsigned int)v17 )
  {
    v18 = stream->m_pucData[v17] | ((stream->m_pucData[(unsigned int)(v17 + 1)] | ((stream->m_pucData[(unsigned int)(v17 + 2)] | (stream->m_pucData[(unsigned int)(v17 + 3)] << 8)) << 8)) << 8);
    stream->m_uiPoint = v17 + 4;
  }
  else
  {
    v18 = 0;
  }
  v10[169] = v18 != 0;
  v19 = stream->m_uiPoint;
  if ( stream->m_uiSize > (unsigned int)v19 )
  {
    v20 = stream->m_pucData[v19] | ((stream->m_pucData[(unsigned int)(v19 + 1)] | ((stream->m_pucData[(unsigned int)(v19 + 2)] | (stream->m_pucData[(unsigned int)(v19 + 3)] << 8)) << 8)) << 8);
    stream->m_uiPoint = v19 + 4;
  }
  else
  {
    v20 = 0;
  }
  *((_DWORD *)v10 + 9) = v20;
  v21 = stream->m_uiPoint;
  if ( stream->m_uiSize > (unsigned int)v21 )
  {
    v22 = *(_DWORD *)&stream->m_pucData[v21];
    stream->m_uiPoint = v21 + 4;
  }
  else
  {
    v22 = 0;
  }
  *((_DWORD *)v10 + 10) = v22;
  v23 = stream->m_uiPoint;
  if ( stream->m_uiSize > (unsigned int)v23 )
  {
    v24 = *(_DWORD *)&stream->m_pucData[v23];
    stream->m_uiPoint = v23 + 4;
  }
  else
  {
    v24 = 0;
  }
  *((_DWORD *)v10 + 11) = v24;
  v25 = stream->m_uiPoint;
  if ( stream->m_uiSize > (unsigned int)v25 )
  {
    v26 = *(_DWORD *)&stream->m_pucData[v25];
    stream->m_uiPoint = v25 + 4;
  }
  else
  {
    v26 = 0;
  }
  *((_DWORD *)v10 + 12) = v26;
  v27 = stream->m_uiPoint;
  if ( stream->m_uiSize > (unsigned int)v27 )
  {
    v28 = *(_DWORD *)&stream->m_pucData[v27];
    stream->m_uiPoint = v27 + 4;
  }
  else
  {
    v28 = 0;
  }
  *((_DWORD *)v10 + 13) = v28;
  v29 = stream->m_uiPoint;
  if ( stream->m_uiSize > (unsigned int)v29 )
  {
    v30 = *(_DWORD *)&stream->m_pucData[v29];
    stream->m_uiPoint = v29 + 4;
  }
  else
  {
    v30 = 0;
  }
  *((_DWORD *)v10 + 14) = v30;
  v31 = stream->m_uiPoint;
  if ( stream->m_uiSize > (unsigned int)v31 )
  {
    v32 = *(_DWORD *)&stream->m_pucData[v31];
    stream->m_uiPoint = v31 + 4;
  }
  else
  {
    v32 = 0;
  }
  *((_DWORD *)v10 + 15) = v32;
  if ( (unsigned int)(dataVersion - 118) <= 8 )
  {
    v33 = stream->m_uiPoint;
    if ( stream->m_uiSize > (unsigned int)v33 )
    {
      v34 = *(_DWORD *)&stream->m_pucData[v33];
      stream->m_uiPoint = v33 + 4;
    }
    else
    {
      v34 = 0;
    }
    *((_DWORD *)v10 + 19) = v34;
    v35 = stream->m_uiPoint;
    if ( stream->m_uiSize > (unsigned int)v35 )
    {
      v36 = *(_DWORD *)&stream->m_pucData[v35];
      stream->m_uiPoint = v35 + 4;
    }
    else
    {
      v36 = 0;
    }
    *((_DWORD *)v10 + 20) = v36;
    v37 = stream->m_uiPoint;
    if ( stream->m_uiSize > (unsigned int)v37 )
    {
      v38 = *(_DWORD *)&stream->m_pucData[v37];
      stream->m_uiPoint = v37 + 4;
    }
    else
    {
      v38 = 0;
    }
    *((_DWORD *)v10 + 21) = v38;
    v39 = stream->m_uiSize;
    v40 = stream->m_uiPoint;
    if ( dataVersion >= 121 )
    {
      if ( v39 > v40 )
        stream->m_uiPoint = v40 + 4;
      v43 = stream->m_uiPoint;
      if ( v39 > v43 )
        stream->m_uiPoint = v43 + 4;
      v44 = stream->m_uiPoint;
      if ( v39 > v44 )
        stream->m_uiPoint = v44 + 4;
      v45 = stream->m_uiPoint;
      if ( v39 > v45 )
        stream->m_uiPoint = v45 + 4;
      *((_DWORD *)v10 + 22) = *((_DWORD *)v10 + 13);
      *((_DWORD *)v10 + 23) = *((_DWORD *)v10 + 14);
      *((_DWORD *)v10 + 24) = *((_DWORD *)v10 + 15);
    }
    else
    {
      if ( v39 > v40 )
        stream->m_uiPoint = v40 + 4;
      v41 = stream->m_uiPoint;
      if ( v39 > v41 )
        stream->m_uiPoint = v41 + 4;
      v42 = stream->m_uiPoint;
      if ( v39 > v42 )
        stream->m_uiPoint = v42 + 4;
    }
  }
  v46 = stream->m_uiPoint;
  if ( stream->m_uiSize > (unsigned int)v46 )
  {
    v47 = stream->m_pucData[v46] | ((stream->m_pucData[(unsigned int)(v46 + 1)] | ((stream->m_pucData[(unsigned int)(v46 + 2)] | (stream->m_pucData[(unsigned int)(v46 + 3)] << 8)) << 8)) << 8);
    stream->m_uiPoint = v46 + 4;
  }
  else
  {
    v47 = 0;
  }
  *((_DWORD *)v10 + 28) = v47;
  v48 = stream->m_uiPoint;
  if ( stream->m_uiSize > (unsigned int)v48 )
  {
    v49 = stream->m_pucData[v48] | ((stream->m_pucData[(unsigned int)(v48 + 1)] | ((stream->m_pucData[(unsigned int)(v48 + 2)] | (stream->m_pucData[(unsigned int)(v48 + 3)] << 8)) << 8)) << 8);
    stream->m_uiPoint = v48 + 4;
  }
  else
  {
    v49 = 0;
  }
  *((_DWORD *)v10 + 29) = v49;
  v50 = stream->m_uiPoint;
  if ( stream->m_uiSize > (unsigned int)v50 )
  {
    v51 = stream->m_pucData[v50] | ((stream->m_pucData[(unsigned int)(v50 + 1)] | ((stream->m_pucData[(unsigned int)(v50 + 2)] | (stream->m_pucData[(unsigned int)(v50 + 3)] << 8)) << 8)) << 8);
    stream->m_uiPoint = v50 + 4;
  }
  else
  {
    v51 = 0;
  }
  *((_DWORD *)v10 + 30) = v51;
  v52 = stream->m_uiPoint;
  if ( stream->m_uiSize > (unsigned int)v52 )
  {
    v53 = stream->m_pucData[v52] | ((stream->m_pucData[(unsigned int)(v52 + 1)] | ((stream->m_pucData[(unsigned int)(v52 + 2)] | (stream->m_pucData[(unsigned int)(v52 + 3)] << 8)) << 8)) << 8);
    stream->m_uiPoint = v52 + 4;
  }
  else
  {
    v53 = 0;
  }
  *((_DWORD *)v10 + 31) = v53;
  v54 = stream->m_uiPoint;
  if ( stream->m_uiSize > (unsigned int)v54 )
  {
    v55 = stream->m_pucData[v54] | ((stream->m_pucData[(unsigned int)(v54 + 1)] | ((stream->m_pucData[(unsigned int)(v54 + 2)] | (stream->m_pucData[(unsigned int)(v54 + 3)] << 8)) << 8)) << 8);
    stream->m_uiPoint = v54 + 4;
  }
  else
  {
    v55 = 0;
  }
  *((_DWORD *)v10 + 32) = v55;
  v56 = stream->m_uiPoint;
  if ( stream->m_uiSize > (unsigned int)v56 )
  {
    v57 = stream->m_pucData[v56] | ((stream->m_pucData[(unsigned int)(v56 + 1)] | ((stream->m_pucData[(unsigned int)(v56 + 2)] | (stream->m_pucData[(unsigned int)(v56 + 3)] << 8)) << 8)) << 8);
    stream->m_uiPoint = v56 + 4;
  }
  else
  {
    v57 = 0;
  }
  *((_DWORD *)v10 + 33) = v57;
  v58 = stream->m_uiPoint;
  if ( stream->m_uiSize > (unsigned int)v58 )
  {
    v59 = stream->m_pucData[v58] | ((stream->m_pucData[(unsigned int)(v58 + 1)] | ((stream->m_pucData[(unsigned int)(v58 + 2)] | (stream->m_pucData[(unsigned int)(v58 + 3)] << 8)) << 8)) << 8);
    stream->m_uiPoint = v58 + 4;
  }
  else
  {
    v59 = 0;
  }
  v10[138] = v59 != 0;
  v60 = stream->m_uiPoint;
  v61 = stream->m_uiSize;
  if ( v61 > (unsigned int)v60 )
  {
    v62 = *(float *)&stream->m_pucData[v60];
    stream->m_uiPoint = v60 + 4;
  }
  else
  {
    v62 = 0.0;
  }
  v63 = stream->m_uiPoint;
  if ( v61 > (unsigned int)v63 )
  {
    v64 = *(float *)&stream->m_pucData[v63];
    stream->m_uiPoint = v63 + 4;
  }
  else
  {
    v64 = 0.0;
  }
  *((float *)v10 + 35) = v64 * v62;
  v65 = stream->m_uiPoint;
  if ( stream->m_uiSize > (unsigned int)v65 )
  {
    v66 = *(float *)&stream->m_pucData[v65];
    stream->m_uiPoint = v65 + 4;
  }
  else
  {
    v66 = 0.0;
  }
  *((float *)v10 + 36) = v66 * v62;
  v67 = stream->m_uiPoint;
  if ( stream->m_uiSize > (unsigned int)v67 )
  {
    v68 = *(float *)&stream->m_pucData[v67];
    stream->m_uiPoint = v67 + 4;
  }
  else
  {
    v68 = 0.0;
  }
  *((float *)v10 + 37) = v68 * v62;
  v69 = stream->m_uiPoint;
  if ( stream->m_uiSize > (unsigned int)v69 )
  {
    v70 = stream->m_pucData[v69] | ((stream->m_pucData[(unsigned int)(v69 + 1)] | ((stream->m_pucData[(unsigned int)(v69 + 2)] | (stream->m_pucData[(unsigned int)(v69 + 3)] << 8)) << 8)) << 8);
    stream->m_uiPoint = v69 + 4;
  }
  else
  {
    v70 = 0;
  }
  v10[152] = v70 != 0;
  v71 = stream->m_uiPoint;
  v72 = stream->m_uiSize;
  if ( v72 > (unsigned int)v71 )
  {
    v73 = *(float *)&stream->m_pucData[v71];
    stream->m_uiPoint = v71 + 4;
  }
  else
  {
    v73 = 0.0;
  }
  v74 = stream->m_uiPoint;
  if ( v72 > (unsigned int)v74 )
  {
    v75 = *(float *)&stream->m_pucData[v74];
    stream->m_uiPoint = v74 + 4;
  }
  else
  {
    v75 = 0.0;
  }
  *((float *)v10 + 39) = v75 * v73;
  v76 = stream->m_uiPoint;
  if ( stream->m_uiSize > (unsigned int)v76 )
  {
    v77 = *(float *)&stream->m_pucData[v76];
    stream->m_uiPoint = v76 + 4;
  }
  else
  {
    v77 = 0.0;
  }
  *((float *)v10 + 40) = v77 * v73;
  v78 = stream->m_uiPoint;
  if ( stream->m_uiSize > (unsigned int)v78 )
  {
    v79 = *(float *)&stream->m_pucData[v78];
    stream->m_uiPoint = v78 + 4;
  }
  else
  {
    v79 = 0.0;
  }
  *((float *)v10 + 41) = v79 * v73;
  v80 = stream->m_uiPoint;
  if ( stream->m_uiSize > (unsigned int)v80 )
  {
    v81 = stream->m_pucData[v80] | ((stream->m_pucData[(unsigned int)(v80 + 1)] | ((stream->m_pucData[(unsigned int)(v80 + 2)] | (stream->m_pucData[(unsigned int)(v80 + 3)] << 8)) << 8)) << 8);
    stream->m_uiPoint = v80 + 4;
  }
  else
  {
    v81 = 0;
  }
  v10[170] = v81 != 0;
  v82 = stream->m_uiPoint;
  if ( stream->m_uiSize > (unsigned int)v82 )
  {
    v83 = stream->m_pucData[v82] | ((stream->m_pucData[(unsigned int)(v82 + 1)] | ((stream->m_pucData[(unsigned int)(v82 + 2)] | (stream->m_pucData[(unsigned int)(v82 + 3)] << 8)) << 8)) << 8);
    stream->m_uiPoint = v82 + 4;
  }
  else
  {
    v83 = 0;
  }
  v10[171] = v83 != 0;
  v84 = stream->m_uiPoint;
  if ( stream->m_uiSize > (unsigned int)v84 )
  {
    v85 = stream->m_pucData[v84] | ((stream->m_pucData[(unsigned int)(v84 + 1)] | ((stream->m_pucData[(unsigned int)(v84 + 2)] | (stream->m_pucData[(unsigned int)(v84 + 3)] << 8)) << 8)) << 8);
    stream->m_uiPoint = v84 + 4;
  }
  else
  {
    v85 = 0;
  }
  v10[172] = v85 != 0;
  if ( dataVersion < 126 )
  {
    *((_DWORD *)v10 + 16) = 1065353216;
    *((_DWORD *)v10 + 17) = 1065353216;
    *((_DWORD *)v10 + 18) = 1065353216;
  }
  else
  {
    v86 = stream->m_uiPoint;
    if ( stream->m_uiSize > (unsigned int)v86 )
    {
      v87 = *(_DWORD *)&stream->m_pucData[v86];
      stream->m_uiPoint = v86 + 4;
    }
    else
    {
      v87 = 0;
    }
    *((_DWORD *)v10 + 16) = v87;
    v88 = stream->m_uiPoint;
    if ( stream->m_uiSize > (unsigned int)v88 )
    {
      v89 = *(_DWORD *)&stream->m_pucData[v88];
      stream->m_uiPoint = v88 + 4;
    }
    else
    {
      v89 = 0;
    }
    *((_DWORD *)v10 + 17) = v89;
    v90 = stream->m_uiPoint;
    if ( stream->m_uiSize > (unsigned int)v90 )
    {
      v91 = *(_DWORD *)&stream->m_pucData[v90];
      stream->m_uiPoint = v90 + 4;
    }
    else
    {
      v91 = 0;
    }
    *((_DWORD *)v10 + 18) = v91;
    if ( dataVersion >= 127 )
    {
      v98 = stream->m_uiPoint;
      if ( stream->m_uiSize > (unsigned int)v98 )
      {
        v99 = *(_DWORD *)&stream->m_pucData[v98];
        stream->m_uiPoint = v98 + 4;
      }
      else
      {
        v99 = 0;
      }
      *((_DWORD *)v10 + 19) = v99;
      v100 = stream->m_uiPoint;
      if ( stream->m_uiSize > (unsigned int)v100 )
      {
        v101 = *(_DWORD *)&stream->m_pucData[v100];
        stream->m_uiPoint = v100 + 4;
      }
      else
      {
        v101 = 0;
      }
      *((_DWORD *)v10 + 20) = v101;
      v102 = stream->m_uiPoint;
      if ( stream->m_uiSize > (unsigned int)v102 )
      {
        v103 = *(_DWORD *)&stream->m_pucData[v102];
        stream->m_uiPoint = v102 + 4;
      }
      else
      {
        v103 = 0;
      }
      *((_DWORD *)v10 + 21) = v103;
      v104 = stream->m_uiPoint;
      if ( stream->m_uiSize > (unsigned int)v104 )
      {
        v105 = *(_DWORD *)&stream->m_pucData[v104];
        stream->m_uiPoint = v104 + 4;
      }
      else
      {
        v105 = 0;
      }
      *((_DWORD *)v10 + 22) = v105;
      v106 = stream->m_uiPoint;
      if ( stream->m_uiSize > (unsigned int)v106 )
      {
        v107 = *(_DWORD *)&stream->m_pucData[v106];
        stream->m_uiPoint = v106 + 4;
      }
      else
      {
        v107 = 0;
      }
      *((_DWORD *)v10 + 23) = v107;
      v108 = stream->m_uiPoint;
      if ( stream->m_uiSize > (unsigned int)v108 )
      {
        v109 = *(_DWORD *)&stream->m_pucData[v108];
        stream->m_uiPoint = v108 + 4;
      }
      else
      {
        v109 = 0;
      }
      *((_DWORD *)v10 + 24) = v109;
      v110 = stream->m_uiPoint;
      if ( stream->m_uiSize > (unsigned int)v110 )
      {
        v111 = *(_DWORD *)&stream->m_pucData[v110];
        stream->m_uiPoint = v110 + 4;
      }
      else
      {
        v111 = 0;
      }
      *((_DWORD *)v10 + 25) = v111;
      v112 = stream->m_uiPoint;
      if ( stream->m_uiSize > (unsigned int)v112 )
      {
        v113 = *(_DWORD *)&stream->m_pucData[v112];
        stream->m_uiPoint = v112 + 4;
      }
      else
      {
        v113 = 0;
      }
      *((_DWORD *)v10 + 26) = v113;
      v114 = stream->m_uiPoint;
      if ( stream->m_uiSize > (unsigned int)v114 )
      {
        v115 = *(_DWORD *)&stream->m_pucData[v114];
        stream->m_uiPoint = v114 + 4;
      }
      else
      {
        v115 = 0;
      }
      *((_DWORD *)v10 + 27) = v115;
    }
    else
    {
      v92 = stream->m_uiPoint;
      if ( stream->m_uiSize > (unsigned int)v92 )
      {
        v93 = *(_DWORD *)&stream->m_pucData[v92];
        stream->m_uiPoint = v92 + 4;
      }
      else
      {
        v93 = 0;
      }
      *((_DWORD *)v10 + 25) = v93;
      v94 = stream->m_uiPoint;
      if ( stream->m_uiSize > (unsigned int)v94 )
      {
        v95 = *(_DWORD *)&stream->m_pucData[v94];
        stream->m_uiPoint = v94 + 4;
      }
      else
      {
        v95 = 0;
      }
      *((_DWORD *)v10 + 26) = v95;
      v96 = stream->m_uiPoint;
      if ( stream->m_uiSize > (unsigned int)v96 )
      {
        v97 = *(_DWORD *)&stream->m_pucData[v96];
        stream->m_uiPoint = v96 + 4;
        *((_DWORD *)v10 + 27) = v97;
      }
      else
      {
        *((_DWORD *)v10 + 27) = 0;
      }
    }
  }
  v116 = stream->m_uiPoint;
  if ( stream->m_uiSize > (unsigned int)v116 )
  {
    v117 = stream->m_pucData[v116] | ((stream->m_pucData[(unsigned int)(v116 + 1)] | ((stream->m_pucData[(unsigned int)(v116 + 2)] | (stream->m_pucData[(unsigned int)(v116 + 3)] << 8)) << 8)) << 8);
    stream->m_uiPoint = v116 + 4;
  }
  else
  {
    v117 = 0;
  }
  v10[136] = v117 != 0;
  v118 = stream->m_uiPoint;
  if ( stream->m_uiSize > (unsigned int)v118 )
  {
    v119 = stream->m_pucData[v118] | ((stream->m_pucData[(unsigned int)(v118 + 1)] | ((stream->m_pucData[(unsigned int)(v118 + 2)] | (stream->m_pucData[(unsigned int)(v118 + 3)] << 8)) << 8)) << 8);
    stream->m_uiPoint = v118 + 4;
  }
  else
  {
    v119 = 0;
  }
  v10[137] = v119 != 0;
  v120 = v10[138];
  if ( v62 <= 0.0 )
    v120 = 0;
  v10[138] = v120;
  v121 = v10[152];
  if ( v73 <= 0.0 )
    v121 = 0;
  v10[152] = v121;
  result = (TknDataEventTranslation *)v10;
  LOBYTE(v3) = dataVersion >= 115;
  *((_DWORD *)v10 + 44) = v3;
  return result;
}

TknDataLight *__fastcall TknDataLight::create(OGLInputStream *stream, int dataVersion)
{
  __int64 m_uiPoint; // r8
  int v3; // esi
  unsigned int m_uiSize; // er9
  int v7; // er15
  int v8; // er14
  __int64 v9; // r8
  char *v10; // rdi
  __int64 v11; // r9
  int v12; // er8
  int v13; // xmm0_4
  __int64 v14; // rdx
  int v15; // xmm1_4
  __int64 v16; // rdx
  int v17; // xmm1_4
  __int64 v18; // rdx
  int v19; // xmm1_4
  __int64 v20; // rdx
  int v21; // xmm1_4
  __int64 v22; // rdx
  int v23; // xmm1_4
  __int64 v24; // rdx
  int v25; // xmm1_4
  __int64 v26; // rdx
  int v27; // xmm1_4
  __int64 v28; // rdx
  int v29; // xmm1_4
  __int64 v30; // rdx
  int v31; // xmm1_4
  __int64 v32; // rdx
  int v33; // xmm1_4
  __int64 v34; // rdx
  int v35; // xmm1_4
  __int64 v36; // rdx
  int v37; // xmm1_4
  __int64 v38; // rdx
  int v39; // xmm1_4
  __int64 v40; // rdx
  int v41; // xmm1_4
  __int64 v42; // rdx
  int v43; // xmm1_4
  __int64 v44; // rdx
  int v45; // xmm1_4
  __int64 v46; // rdx
  int v47; // xmm1_4
  __int64 v48; // rdx
  int v49; // xmm1_4
  __int64 v50; // rdx
  int v51; // xmm1_4
  __int64 v52; // r9
  __int64 v53; // rdx
  int v54; // xmm1_4
  __int64 v55; // rdx
  int v56; // xmm1_4
  __int64 v57; // rdx
  int v58; // xmm1_4
  __int64 v59; // rdx
  int v60; // xmm1_4
  __int64 v61; // rdx
  TknDataLight *result; // rax

  m_uiPoint = stream->m_uiPoint;
  v3 = 0;
  m_uiSize = stream->m_uiSize;
  if ( m_uiSize > (unsigned int)m_uiPoint )
  {
    v7 = stream->m_pucData[m_uiPoint] | ((stream->m_pucData[(unsigned int)(m_uiPoint + 1)] | ((stream->m_pucData[(unsigned int)(m_uiPoint + 2)] | (stream->m_pucData[(unsigned int)(m_uiPoint + 3)] << 8)) << 8)) << 8);
    stream->m_uiPoint = m_uiPoint + 4;
  }
  else
  {
    v7 = 0;
  }
  v8 = 0;
  if ( dataVersion >= 106 )
  {
    v9 = stream->m_uiPoint;
    if ( m_uiSize > (unsigned int)v9 )
    {
      v8 = stream->m_pucData[v9] | ((stream->m_pucData[(unsigned int)(v9 + 1)] | ((stream->m_pucData[(unsigned int)(v9 + 2)] | (stream->m_pucData[(unsigned int)(v9 + 3)] << 8)) << 8)) << 8);
      stream->m_uiPoint = v9 + 4;
    }
  }
  v10 = (char *)operator new(0x88ui64);
  *((_DWORD *)v10 + 2) = v7;
  *((_DWORD *)v10 + 3) = v8;
  *((_DWORD *)v10 + 4) = 10;
  *((_QWORD *)v10 + 3) = 0i64;
  *(_QWORD *)v10 = &TknDataLight::`vftable';
  *(_QWORD *)(v10 + 36) = 0i64;
  *((_DWORD *)v10 + 11) = 0;
  *(_QWORD *)(v10 + 116) = 0i64;
  *((_DWORD *)v10 + 31) = 0;
  if ( dataVersion >= 131 )
    *((_QWORD *)v10 + 3) = FileUtil::readString(stream);
  v11 = stream->m_uiPoint;
  if ( stream->m_uiSize > (unsigned int)v11 )
  {
    v12 = stream->m_pucData[v11] | ((stream->m_pucData[(unsigned int)(v11 + 1)] | ((stream->m_pucData[(unsigned int)(v11 + 2)] | (stream->m_pucData[(unsigned int)(v11 + 3)] << 8)) << 8)) << 8);
    stream->m_uiPoint = v11 + 4;
  }
  else
  {
    v12 = 0;
  }
  *((_DWORD *)v10 + 8) = v12;
  v13 = 0;
  v14 = stream->m_uiPoint;
  if ( stream->m_uiSize > (unsigned int)v14 )
  {
    v15 = *(_DWORD *)&stream->m_pucData[v14];
    stream->m_uiPoint = v14 + 4;
  }
  else
  {
    v15 = 0;
  }
  *((_DWORD *)v10 + 9) = v15;
  v16 = stream->m_uiPoint;
  if ( stream->m_uiSize > (unsigned int)v16 )
  {
    v17 = *(_DWORD *)&stream->m_pucData[v16];
    stream->m_uiPoint = v16 + 4;
  }
  else
  {
    v17 = 0;
  }
  *((_DWORD *)v10 + 10) = v17;
  v18 = stream->m_uiPoint;
  if ( stream->m_uiSize > (unsigned int)v18 )
  {
    v19 = *(_DWORD *)&stream->m_pucData[v18];
    stream->m_uiPoint = v18 + 4;
  }
  else
  {
    v19 = 0;
  }
  *((_DWORD *)v10 + 11) = v19;
  v20 = stream->m_uiPoint;
  if ( stream->m_uiSize > (unsigned int)v20 )
  {
    v21 = *(_DWORD *)&stream->m_pucData[v20];
    stream->m_uiPoint = v20 + 4;
  }
  else
  {
    v21 = 0;
  }
  *((_DWORD *)v10 + 12) = v21;
  v22 = stream->m_uiPoint;
  if ( stream->m_uiSize > (unsigned int)v22 )
  {
    v23 = *(_DWORD *)&stream->m_pucData[v22];
    stream->m_uiPoint = v22 + 4;
  }
  else
  {
    v23 = 0;
  }
  *((_DWORD *)v10 + 13) = v23;
  v24 = stream->m_uiPoint;
  if ( stream->m_uiSize > (unsigned int)v24 )
  {
    v25 = *(_DWORD *)&stream->m_pucData[v24];
    stream->m_uiPoint = v24 + 4;
  }
  else
  {
    v25 = 0;
  }
  *((_DWORD *)v10 + 14) = v25;
  v26 = stream->m_uiPoint;
  if ( stream->m_uiSize > (unsigned int)v26 )
  {
    v27 = *(_DWORD *)&stream->m_pucData[v26];
    stream->m_uiPoint = v26 + 4;
  }
  else
  {
    v27 = 0;
  }
  *((_DWORD *)v10 + 15) = v27;
  v28 = stream->m_uiPoint;
  if ( stream->m_uiSize > (unsigned int)v28 )
  {
    v29 = *(_DWORD *)&stream->m_pucData[v28];
    stream->m_uiPoint = v28 + 4;
  }
  else
  {
    v29 = 0;
  }
  *((_DWORD *)v10 + 16) = v29;
  v30 = stream->m_uiPoint;
  if ( stream->m_uiSize > (unsigned int)v30 )
  {
    v31 = *(_DWORD *)&stream->m_pucData[v30];
    stream->m_uiPoint = v30 + 4;
  }
  else
  {
    v31 = 0;
  }
  *((_DWORD *)v10 + 17) = v31;
  v32 = stream->m_uiPoint;
  if ( stream->m_uiSize > (unsigned int)v32 )
  {
    v33 = *(_DWORD *)&stream->m_pucData[v32];
    stream->m_uiPoint = v32 + 4;
  }
  else
  {
    v33 = 0;
  }
  *((_DWORD *)v10 + 18) = v33;
  v34 = stream->m_uiPoint;
  if ( stream->m_uiSize > (unsigned int)v34 )
  {
    v35 = *(_DWORD *)&stream->m_pucData[v34];
    stream->m_uiPoint = v34 + 4;
  }
  else
  {
    v35 = 0;
  }
  *((_DWORD *)v10 + 19) = v35;
  v36 = stream->m_uiPoint;
  if ( stream->m_uiSize > (unsigned int)v36 )
  {
    v37 = *(_DWORD *)&stream->m_pucData[v36];
    stream->m_uiPoint = v36 + 4;
  }
  else
  {
    v37 = 0;
  }
  *((_DWORD *)v10 + 20) = v37;
  v38 = stream->m_uiPoint;
  if ( stream->m_uiSize > (unsigned int)v38 )
  {
    v39 = *(_DWORD *)&stream->m_pucData[v38];
    stream->m_uiPoint = v38 + 4;
  }
  else
  {
    v39 = 0;
  }
  *((_DWORD *)v10 + 21) = v39;
  v40 = stream->m_uiPoint;
  if ( stream->m_uiSize > (unsigned int)v40 )
  {
    v41 = *(_DWORD *)&stream->m_pucData[v40];
    stream->m_uiPoint = v40 + 4;
  }
  else
  {
    v41 = 0;
  }
  *((_DWORD *)v10 + 22) = v41;
  v42 = stream->m_uiPoint;
  if ( stream->m_uiSize > (unsigned int)v42 )
  {
    v43 = *(_DWORD *)&stream->m_pucData[v42];
    stream->m_uiPoint = v42 + 4;
  }
  else
  {
    v43 = 0;
  }
  *((_DWORD *)v10 + 23) = v43;
  v44 = stream->m_uiPoint;
  if ( stream->m_uiSize > (unsigned int)v44 )
  {
    v45 = *(_DWORD *)&stream->m_pucData[v44];
    stream->m_uiPoint = v44 + 4;
  }
  else
  {
    v45 = 0;
  }
  *((_DWORD *)v10 + 26) = v45;
  v46 = stream->m_uiPoint;
  if ( stream->m_uiSize > (unsigned int)v46 )
  {
    v47 = *(_DWORD *)&stream->m_pucData[v46];
    stream->m_uiPoint = v46 + 4;
  }
  else
  {
    v47 = 0;
  }
  *((_DWORD *)v10 + 27) = v47;
  v48 = stream->m_uiPoint;
  if ( stream->m_uiSize > (unsigned int)v48 )
  {
    v49 = *(_DWORD *)&stream->m_pucData[v48];
    stream->m_uiPoint = v48 + 4;
  }
  else
  {
    v49 = 0;
  }
  *((_DWORD *)v10 + 28) = v49;
  v50 = stream->m_uiPoint;
  if ( stream->m_uiSize > (unsigned int)v50 )
  {
    v51 = *(_DWORD *)&stream->m_pucData[v50];
    stream->m_uiPoint = v50 + 4;
  }
  else
  {
    v51 = 0;
  }
  *((_DWORD *)v10 + 24) = v51;
  v52 = stream->m_uiPoint;
  if ( stream->m_uiSize > (unsigned int)v52 )
  {
    v3 = stream->m_pucData[v52] | ((stream->m_pucData[(unsigned int)(v52 + 1)] | ((stream->m_pucData[(unsigned int)(v52 + 2)] | (stream->m_pucData[(unsigned int)(v52 + 3)] << 8)) << 8)) << 8);
    stream->m_uiPoint = v52 + 4;
  }
  v10[100] = v3 != 0;
  v53 = stream->m_uiPoint;
  if ( stream->m_uiSize > (unsigned int)v53 )
  {
    v54 = *(_DWORD *)&stream->m_pucData[v53];
    stream->m_uiPoint = v53 + 4;
  }
  else
  {
    v54 = 0;
  }
  *((_DWORD *)v10 + 29) = v54;
  v55 = stream->m_uiPoint;
  if ( stream->m_uiSize > (unsigned int)v55 )
  {
    v56 = *(_DWORD *)&stream->m_pucData[v55];
    stream->m_uiPoint = v55 + 4;
  }
  else
  {
    v56 = 0;
  }
  *((_DWORD *)v10 + 30) = v56;
  v57 = stream->m_uiPoint;
  if ( stream->m_uiSize > (unsigned int)v57 )
  {
    v58 = *(_DWORD *)&stream->m_pucData[v57];
    stream->m_uiPoint = v57 + 4;
  }
  else
  {
    v58 = 0;
  }
  *((_DWORD *)v10 + 31) = v58;
  v59 = stream->m_uiPoint;
  if ( stream->m_uiSize > (unsigned int)v59 )
  {
    v60 = *(_DWORD *)&stream->m_pucData[v59];
    stream->m_uiPoint = v59 + 4;
  }
  else
  {
    v60 = 0;
  }
  *((_DWORD *)v10 + 32) = v60;
  v61 = stream->m_uiPoint;
  if ( stream->m_uiSize > (unsigned int)v61 )
  {
    v13 = *(_DWORD *)&stream->m_pucData[v61];
    stream->m_uiPoint = v61 + 4;
  }
  result = (TknDataLight *)v10;
  *((_DWORD *)v10 + 33) = v13;
  return result;
}

TknDataModel *__fastcall TknDataModel::create(OGLInputStream *stream, int dataVersion)
{
  __int64 m_uiPoint; // r8
  unsigned int m_uiSize; // er9
  int v5; // ebp
  int v7; // esi
  int v8; // edi
  __int64 v9; // r8
  _DWORD *v10; // r14
  __int64 v11; // r9
  int v12; // er8
  __int64 v13; // r9
  int v14; // er8
  __int64 v15; // r9
  int v16; // er8
  unsigned __int64 v17; // rax
  int v18; // esi
  __int64 v19; // rdi
  __int64 v20; // r9
  int v21; // er8
  __int64 v22; // r9
  int v23; // er8
  __int64 v24; // r9
  int v25; // er8
  void *v26; // rax
  int v27; // er11
  __int64 v28; // r10
  __int64 v29; // r9
  int v30; // er8
  __int64 v31; // r9
  int v32; // er8
  unsigned __int64 v33; // rax
  int v34; // er12
  __int64 v35; // rdi
  __int64 v36; // rdx
  __int64 v37; // rsi
  int v38; // xmm0_4
  __int64 v39; // rdx
  int v40; // xmm0_4
  __int64 v41; // r9
  int v42; // er8
  void *v43; // rax
  unsigned __int64 v44; // rcx
  void *v45; // rax
  unsigned __int64 v46; // rcx
  void *v47; // rax
  unsigned __int64 v48; // rcx
  void *v49; // rax
  unsigned __int64 v50; // rcx
  void *v51; // rax
  unsigned __int64 v52; // rcx
  void *v53; // rax
  int v54; // edx
  __int64 i; // rcx
  __int64 v56; // rdx
  int v57; // xmm0_4
  __int64 v58; // rdx
  int v59; // ecx
  int v60; // er11
  __int64 j; // r9
  __int64 v62; // rdx
  int v63; // xmm0_4
  __int64 v64; // rdx
  int v65; // xmm0_4
  __int64 v66; // r10
  int v67; // er8
  __int64 v68; // r10
  int v69; // er8
  __int64 v70; // rdx
  int v71; // xmm0_4
  __int64 v72; // rdx
  int v73; // xmm0_4
  unsigned int v74; // ecx
  unsigned int v75; // eax
  unsigned int v76; // eax
  __int64 v77; // r9
  _QWORD *v79; // [rsp+60h] [rbp+8h]

  m_uiPoint = stream->m_uiPoint;
  m_uiSize = stream->m_uiSize;
  v5 = 0;
  if ( m_uiSize > (unsigned int)m_uiPoint )
  {
    v7 = stream->m_pucData[m_uiPoint] | ((stream->m_pucData[(unsigned int)(m_uiPoint + 1)] | ((stream->m_pucData[(unsigned int)(m_uiPoint + 2)] | (stream->m_pucData[(unsigned int)(m_uiPoint + 3)] << 8)) << 8)) << 8);
    stream->m_uiPoint = m_uiPoint + 4;
  }
  else
  {
    v7 = 0;
  }
  v8 = 0;
  if ( dataVersion >= 106 )
  {
    v9 = stream->m_uiPoint;
    if ( m_uiSize > (unsigned int)v9 )
    {
      v8 = stream->m_pucData[v9] | ((stream->m_pucData[(unsigned int)(v9 + 1)] | ((stream->m_pucData[(unsigned int)(v9 + 2)] | (stream->m_pucData[(unsigned int)(v9 + 3)] << 8)) << 8)) << 8);
      stream->m_uiPoint = v9 + 4;
    }
  }
  v10 = operator new(0x78ui64);
  v10[2] = v7;
  v10[3] = v8;
  v10[4] = 3;
  *((_QWORD *)v10 + 3) = 0i64;
  *(_QWORD *)v10 = &TknDataModel::`vftable';
  *((_QWORD *)v10 + 5) = 0i64;
  *((_QWORD *)v10 + 6) = 0i64;
  *((_QWORD *)v10 + 8) = 0i64;
  *((_QWORD *)v10 + 10) = 0i64;
  v10[22] = 0;
  *((_QWORD *)v10 + 12) = 0i64;
  *((_QWORD *)v10 + 13) = 0i64;
  if ( dataVersion >= 131 )
    *((_QWORD *)v10 + 3) = FileUtil::readString(stream);
  v11 = stream->m_uiPoint;
  if ( stream->m_uiSize > (unsigned int)v11 )
  {
    v12 = stream->m_pucData[v11] | ((stream->m_pucData[(unsigned int)(v11 + 1)] | ((stream->m_pucData[(unsigned int)(v11 + 2)] | (stream->m_pucData[(unsigned int)(v11 + 3)] << 8)) << 8)) << 8);
    stream->m_uiPoint = v11 + 4;
  }
  else
  {
    v12 = 0;
  }
  v10[8] = v12;
  *((_QWORD *)v10 + 5) = FileUtil::readString(stream);
  *((_QWORD *)v10 + 6) = FileUtil::readString(stream);
  v13 = stream->m_uiPoint;
  if ( stream->m_uiSize > (unsigned int)v13 )
  {
    v14 = stream->m_pucData[v13] | ((stream->m_pucData[(unsigned int)(v13 + 1)] | ((stream->m_pucData[(unsigned int)(v13 + 2)] | (stream->m_pucData[(unsigned int)(v13 + 3)] << 8)) << 8)) << 8);
    stream->m_uiPoint = v13 + 4;
  }
  else
  {
    v14 = 0;
  }
  v10[14] = v14;
  v15 = stream->m_uiPoint;
  if ( stream->m_uiSize > (unsigned int)v15 )
  {
    v16 = stream->m_pucData[v15] | ((stream->m_pucData[(unsigned int)(v15 + 1)] | ((stream->m_pucData[(unsigned int)(v15 + 2)] | (stream->m_pucData[(unsigned int)(v15 + 3)] << 8)) << 8)) << 8);
    stream->m_uiPoint = v15 + 4;
  }
  else
  {
    v16 = 0;
  }
  v10[15] = v16;
  if ( v16 > 0 )
  {
    v17 = 24i64 * v16;
    if ( !is_mul_ok(v16, 0x18ui64) )
      v17 = -1i64;
    v18 = 0;
    *((_QWORD *)v10 + 8) = operator new[](v17);
    if ( (int)v10[15] > 0 )
    {
      v19 = 0i64;
      do
      {
        if ( dataVersion < 117 )
          *(_QWORD *)(v19 + *((_QWORD *)v10 + 8) + 8) = 0i64;
        else
          *(_QWORD *)(v19 + *((_QWORD *)v10 + 8) + 8) = FileUtil::readString(stream);
        if ( dataVersion >= 201 )
          *(_QWORD *)(v19 + *((_QWORD *)v10 + 8) + 16) = 0i64;
        else
          *(_QWORD *)(v19 + *((_QWORD *)v10 + 8) + 16) = FileUtil::readString(stream);
        v20 = stream->m_uiPoint;
        if ( stream->m_uiSize > (unsigned int)v20 )
        {
          v21 = stream->m_pucData[v20] | ((stream->m_pucData[(unsigned int)(v20 + 1)] | ((stream->m_pucData[(unsigned int)(v20 + 2)] | (stream->m_pucData[(unsigned int)(v20 + 3)] << 8)) << 8)) << 8);
          stream->m_uiPoint = v20 + 4;
        }
        else
        {
          v21 = 0;
        }
        *(_DWORD *)(v19 + *((_QWORD *)v10 + 8)) = v21;
        v22 = stream->m_uiPoint;
        if ( stream->m_uiSize > (unsigned int)v22 )
        {
          v23 = stream->m_pucData[v22] | ((stream->m_pucData[(unsigned int)(v22 + 1)] | ((stream->m_pucData[(unsigned int)(v22 + 2)] | (stream->m_pucData[(unsigned int)(v22 + 3)] << 8)) << 8)) << 8);
          stream->m_uiPoint = v22 + 4;
        }
        else
        {
          v23 = 0;
        }
        ++v18;
        *(_DWORD *)(v19 + *((_QWORD *)v10 + 8) + 4) = v23;
        v19 += 24i64;
      }
      while ( v18 < v10[15] );
    }
  }
  v24 = stream->m_uiPoint;
  if ( stream->m_uiSize > (unsigned int)v24 )
  {
    v25 = stream->m_pucData[v24] | ((stream->m_pucData[(unsigned int)(v24 + 1)] | ((stream->m_pucData[(unsigned int)(v24 + 2)] | (stream->m_pucData[(unsigned int)(v24 + 3)] << 8)) << 8)) << 8);
    stream->m_uiPoint = v24 + 4;
  }
  else
  {
    v25 = 0;
  }
  v10[18] = v25;
  if ( v25 > 0 )
  {
    v26 = operator new[](saturated_mul(v25, 4ui64));
    v27 = 0;
    *((_QWORD *)v10 + 10) = v26;
    if ( (int)v10[18] > 0 )
    {
      v28 = 0i64;
      do
      {
        v29 = stream->m_uiPoint;
        if ( stream->m_uiSize > (unsigned int)v29 )
        {
          v30 = stream->m_pucData[v29] | ((stream->m_pucData[(unsigned int)(v29 + 1)] | ((stream->m_pucData[(unsigned int)(v29 + 2)] | (stream->m_pucData[(unsigned int)(v29 + 3)] << 8)) << 8)) << 8);
          stream->m_uiPoint = v29 + 4;
        }
        else
        {
          v30 = 0;
        }
        ++v27;
        *(_DWORD *)(v28 + *((_QWORD *)v10 + 10)) = v30;
        v28 += 4i64;
      }
      while ( v27 < v10[18] );
    }
  }
  if ( dataVersion >= 107 )
  {
    v31 = stream->m_uiPoint;
    if ( stream->m_uiSize > (unsigned int)v31 )
    {
      v32 = stream->m_pucData[v31] | ((stream->m_pucData[(unsigned int)(v31 + 1)] | ((stream->m_pucData[(unsigned int)(v31 + 2)] | (stream->m_pucData[(unsigned int)(v31 + 3)] << 8)) << 8)) << 8);
      stream->m_uiPoint = v31 + 4;
    }
    else
    {
      v32 = 0;
    }
    v10[22] = v32;
    if ( v32 > 0 )
    {
      v33 = (__int64)v32 << 6;
      if ( !is_mul_ok(v32, 0x40ui64) )
        v33 = -1i64;
      v34 = 0;
      *((_QWORD *)v10 + 12) = operator new[](v33);
      if ( (int)v10[22] > 0 )
      {
        v35 = 0i64;
        do
        {
          v36 = stream->m_uiPoint;
          v37 = *((_QWORD *)v10 + 12);
          if ( stream->m_uiSize > (unsigned int)v36 )
          {
            v38 = *(_DWORD *)&stream->m_pucData[v36];
            stream->m_uiPoint = v36 + 4;
          }
          else
          {
            v38 = 0;
          }
          *(_DWORD *)(v35 + v37 + 24) = v38;
          v39 = stream->m_uiPoint;
          if ( stream->m_uiSize > (unsigned int)v39 )
          {
            v40 = *(_DWORD *)&stream->m_pucData[v39];
            stream->m_uiPoint = v39 + 4;
          }
          else
          {
            v40 = 0;
          }
          *(_DWORD *)(v35 + v37 + 28) = v40;
          if ( dataVersion < 113 )
          {
            *(_DWORD *)(v35 + v37) = 1;
          }
          else
          {
            v41 = stream->m_uiPoint;
            if ( stream->m_uiSize > (unsigned int)v41 )
            {
              v42 = stream->m_pucData[v41] | ((stream->m_pucData[(unsigned int)(v41 + 1)] | ((stream->m_pucData[(unsigned int)(v41 + 2)] | (stream->m_pucData[(unsigned int)(v41 + 3)] << 8)) << 8)) << 8);
              stream->m_uiPoint = v41 + 4;
              *(_DWORD *)(v35 + v37) = v42;
            }
            else
            {
              *(_DWORD *)(v35 + v37) = 0;
            }
          }
          v43 = operator new[](saturated_mul(*(int *)(v35 + v37), 4ui64));
          v44 = *(int *)(v35 + v37);
          *(_QWORD *)(v35 + v37 + 32) = v43;
          v45 = operator new[](saturated_mul(v44, 4ui64));
          v46 = *(int *)(v35 + v37);
          *(_QWORD *)(v35 + v37 + 40) = v45;
          v47 = operator new[](v46);
          v48 = *(int *)(v35 + v37);
          *(_QWORD *)(v35 + v37 + 48) = v47;
          v49 = operator new[](v48);
          v50 = *(int *)(v35 + v37);
          *(_QWORD *)(v35 + v37 + 56) = v49;
          v51 = operator new[](saturated_mul(v50, 4ui64));
          v52 = *(int *)(v35 + v37);
          *(_QWORD *)(v35 + v37 + 8) = v51;
          v53 = operator new[](saturated_mul(v52, 4ui64));
          v54 = 0;
          *(_QWORD *)(v35 + v37 + 16) = v53;
          for ( i = 0i64; v54 < *(_DWORD *)(v35 + v37); *(_DWORD *)(*(_QWORD *)(v35 + v37 + 8) + 4 * i - 4) = 0 )
          {
            ++i;
            ++v54;
            *(_DWORD *)(*(_QWORD *)(v35 + v37 + 40) + 4 * i - 4) = 0;
            *(_DWORD *)(*(_QWORD *)(v35 + v37 + 32) + 4 * i - 4) = 0;
            *(_BYTE *)(i + *(_QWORD *)(v35 + v37 + 56) - 1) = 1;
            *(_BYTE *)(i + *(_QWORD *)(v35 + v37 + 48) - 1) = 1;
            *(_DWORD *)(*(_QWORD *)(v35 + v37 + 16) + 4 * i - 4) = 0;
          }
          if ( dataVersion >= 113 )
          {
            v60 = 0;
            for ( j = 0i64; v60 < *(_DWORD *)(v35 + v37); ++j )
            {
              v62 = stream->m_uiPoint;
              if ( stream->m_uiSize > (unsigned int)v62 )
              {
                v63 = *(_DWORD *)&stream->m_pucData[v62];
                stream->m_uiPoint = v62 + 4;
              }
              else
              {
                v63 = 0;
              }
              *(_DWORD *)(*(_QWORD *)(v35 + v37 + 32) + 4 * j) = v63;
              v64 = stream->m_uiPoint;
              if ( stream->m_uiSize > (unsigned int)v64 )
              {
                v65 = *(_DWORD *)&stream->m_pucData[v64];
                stream->m_uiPoint = v64 + 4;
              }
              else
              {
                v65 = 0;
              }
              *(_DWORD *)(*(_QWORD *)(v35 + v37 + 40) + 4 * j) = v65;
              if ( dataVersion >= 115 )
              {
                v66 = stream->m_uiPoint;
                if ( stream->m_uiSize > (unsigned int)v66 )
                {
                  v67 = stream->m_pucData[v66] | ((stream->m_pucData[(unsigned int)(v66 + 1)] | ((stream->m_pucData[(unsigned int)(v66 + 2)] | (stream->m_pucData[(unsigned int)(v66 + 3)] << 8)) << 8)) << 8);
                  stream->m_uiPoint = v66 + 4;
                }
                else
                {
                  v67 = 0;
                }
                *(_BYTE *)(j + *(_QWORD *)(v35 + v37 + 48)) = v67 != 0;
                v68 = stream->m_uiPoint;
                if ( stream->m_uiSize > (unsigned int)v68 )
                {
                  v69 = stream->m_pucData[v68] | ((stream->m_pucData[(unsigned int)(v68 + 1)] | ((stream->m_pucData[(unsigned int)(v68 + 2)] | (stream->m_pucData[(unsigned int)(v68 + 3)] << 8)) << 8)) << 8);
                  stream->m_uiPoint = v68 + 4;
                }
                else
                {
                  v69 = 0;
                }
                *(_BYTE *)(j + *(_QWORD *)(v35 + v37 + 56)) = v69 != 0;
              }
              if ( dataVersion >= 116 )
              {
                v70 = stream->m_uiPoint;
                if ( stream->m_uiSize > (unsigned int)v70 )
                {
                  v71 = *(_DWORD *)&stream->m_pucData[v70];
                  stream->m_uiPoint = v70 + 4;
                }
                else
                {
                  v71 = 0;
                }
                *(_DWORD *)(*(_QWORD *)(v35 + v37 + 8) + 4 * j) = v71;
                v72 = stream->m_uiPoint;
                if ( stream->m_uiSize > (unsigned int)v72 )
                {
                  v73 = *(_DWORD *)&stream->m_pucData[v72];
                  stream->m_uiPoint = v72 + 4;
                }
                else
                {
                  v73 = 0;
                }
                *(_DWORD *)(*(_QWORD *)(v35 + v37 + 16) + 4 * j) = v73;
              }
              ++v60;
            }
          }
          else
          {
            v56 = stream->m_uiPoint;
            if ( stream->m_uiSize > (unsigned int)v56 )
            {
              v57 = *(_DWORD *)&stream->m_pucData[v56];
              stream->m_uiPoint = v56 + 4;
            }
            else
            {
              v57 = 0;
            }
            **(_DWORD **)(v35 + v37 + 32) = v57;
            v58 = stream->m_uiPoint;
            if ( stream->m_uiSize > (unsigned int)v58 )
            {
              v59 = *(_DWORD *)&stream->m_pucData[v58];
              stream->m_uiPoint = v58 + 4;
              **(_DWORD **)(v35 + v37 + 40) = v59;
            }
            else
            {
              **(_DWORD **)(v35 + v37 + 40) = 0;
            }
          }
          ++v34;
          v35 += 64i64;
        }
        while ( v34 < v10[22] );
      }
    }
  }
  v79 = operator new(0xA8ui64);
  v79[4] = 0i64;
  v79[5] = 0i64;
  v79[9] = 0i64;
  v79[16] = 0i64;
  *((_DWORD *)v79 + 34) = 0;
  v79[19] = 0i64;
  *((_DWORD *)v79 + 40) = 0;
  *(_DWORD *)v79 = 0;
  v79[11] = 0i64;
  *((_DWORD *)v79 + 24) = 0;
  *(_QWORD *)((char *)v79 + 76) = 1065353216i64;
  *((_BYTE *)v79 + 84) = 0;
  v79[14] = 0i64;
  v79[15] = 0i64;
  v79[2] = 1065353216i64;
  *((_DWORD *)v79 + 8) = 0;
  v79[6] = 0i64;
  v79[8] = 0i64;
  *(_QWORD *)((char *)v79 + 36) = 1065353216i64;
  v79[3] = 0i64;
  v79[7] = 1065353216i64;
  *((_DWORD *)v79 + 18) = 0;
  *((_DWORD *)v79 + 11) = 0;
  v79[13] = 0i64;
  v79[18] = 0i64;
  v79[1] = 0i64;
  *((_QWORD *)v10 + 13) = anonymous_namespace_::readCollisionModel(stream, dataVersion, (CollisionModel *)v79);
  *((_BYTE *)v10 + 112) = 0;
  if ( dataVersion >= 129 )
  {
    v74 = stream->m_uiSize;
    v75 = stream->m_uiPoint;
    if ( v74 > v75 )
      stream->m_uiPoint = v75 + 4;
    v76 = stream->m_uiPoint;
    if ( v74 > v76 )
      stream->m_uiPoint = v76 + 4;
  }
  if ( dataVersion >= 130 )
  {
    v77 = stream->m_uiPoint;
    if ( stream->m_uiSize > (unsigned int)v77 )
    {
      v5 = stream->m_pucData[v77] | ((stream->m_pucData[(unsigned int)(v77 + 1)] | ((stream->m_pucData[(unsigned int)(v77 + 2)] | (stream->m_pucData[(unsigned int)(v77 + 3)] << 8)) << 8)) << 8);
      stream->m_uiPoint = v77 + 4;
    }
    *((_BYTE *)v10 + 112) = v5 != 0;
  }
  if ( dataVersion < 131 )
    *((_QWORD *)v10 + 3) = FileUtil::readString(stream);
  return (TknDataModel *)v10;
}

TknDataMotion *__fastcall TknDataMotion::create(OGLInputStream *stream, int dataVersion)
{
  __int64 m_uiPoint; // r8
  int v3; // esi
  unsigned int m_uiSize; // er9
  int v7; // er15
  int v8; // ebp
  __int64 v9; // r8
  _DWORD *v10; // rbx
  __int64 v11; // r9

  m_uiPoint = stream->m_uiPoint;
  v3 = 0;
  m_uiSize = stream->m_uiSize;
  if ( m_uiSize > (unsigned int)m_uiPoint )
  {
    v7 = stream->m_pucData[m_uiPoint] | ((stream->m_pucData[(unsigned int)(m_uiPoint + 1)] | ((stream->m_pucData[(unsigned int)(m_uiPoint + 2)] | (stream->m_pucData[(unsigned int)(m_uiPoint + 3)] << 8)) << 8)) << 8);
    stream->m_uiPoint = m_uiPoint + 4;
  }
  else
  {
    v7 = 0;
  }
  v8 = 0;
  if ( dataVersion >= 106 )
  {
    v9 = stream->m_uiPoint;
    if ( m_uiSize > (unsigned int)v9 )
    {
      v8 = stream->m_pucData[v9] | ((stream->m_pucData[(unsigned int)(v9 + 1)] | ((stream->m_pucData[(unsigned int)(v9 + 2)] | (stream->m_pucData[(unsigned int)(v9 + 3)] << 8)) << 8)) << 8);
      stream->m_uiPoint = v9 + 4;
    }
  }
  v10 = operator new(0x30ui64);
  v10[2] = v7;
  v10[3] = v8;
  v10[4] = 5;
  *((_QWORD *)v10 + 3) = 0i64;
  *(_QWORD *)v10 = &TknDataMotion::`vftable';
  *((_QWORD *)v10 + 4) = 0i64;
  if ( dataVersion >= 131 )
    *((_QWORD *)v10 + 3) = FileUtil::readString(stream);
  *((_QWORD *)v10 + 4) = FileUtil::readString(stream);
  if ( dataVersion < 118 )
  {
    v10[10] = 255;
  }
  else
  {
    v11 = stream->m_uiPoint;
    if ( stream->m_uiSize > (unsigned int)v11 )
    {
      v3 = stream->m_pucData[v11] | ((stream->m_pucData[(unsigned int)(v11 + 1)] | ((stream->m_pucData[(unsigned int)(v11 + 2)] | (stream->m_pucData[(unsigned int)(v11 + 3)] << 8)) << 8)) << 8);
      stream->m_uiPoint = v11 + 4;
    }
    v10[10] = v3;
  }
  if ( dataVersion < 131 )
    *((_QWORD *)v10 + 3) = FileUtil::readString(stream);
  return (TknDataMotion *)v10;
}

TknDataObject *__fastcall TknDataObject::create(OGLInputStream *stream, int dataVersion)
{
  __int64 m_uiPoint; // r8
  unsigned int m_uiSize; // er9
  int v5; // esi
  int v7; // er15
  int v8; // er14
  __int64 v9; // r8
  char *v10; // rdi
  __int64 v11; // r9
  int v12; // er8
  __int64 v13; // r9
  int v14; // er8
  __int64 v15; // rdx
  int v16; // xmm0_4
  __int64 v17; // rdx
  int v18; // xmm0_4
  __int64 v19; // rdx
  int v20; // xmm0_4
  __int64 v21; // rdx
  int v22; // xmm0_4
  __int64 v23; // rdx
  int v24; // xmm0_4
  __int64 v25; // rdx
  int v26; // xmm0_4
  __int64 v27; // rdx
  int v28; // xmm0_4
  __int64 v29; // rdx
  int v30; // xmm0_4
  __int64 v31; // rdx
  int v32; // xmm0_4
  __int64 v33; // rdx
  int v34; // xmm0_4
  __int64 v35; // r9
  int v36; // er8
  bool Bool; // al
  __int64 v38; // rdx
  int v39; // xmm0_4
  __int64 v40; // rdx
  int v41; // xmm0_4
  __int64 v42; // rdx
  int v43; // xmm0_4
  __int64 v44; // rdx
  int v45; // xmm0_4
  __int64 v46; // rdx
  int v47; // xmm0_4
  __int64 v48; // rdx
  int v49; // xmm0_4
  __int64 v50; // rdx
  int v51; // xmm0_4
  bool v52; // al
  bool v53; // al
  __int64 v54; // r9
  int v55; // er8
  __int64 v56; // rdx
  int v57; // xmm0_4
  __int64 v58; // rdx
  int v59; // xmm0_4
  __int64 v60; // rdx
  int v61; // xmm0_4
  __int64 v62; // rdx
  int v63; // xmm0_4
  __int64 v64; // rdx
  int v65; // xmm0_4
  __int64 v66; // rdx
  int v67; // xmm0_4
  __int64 v68; // rdx
  int v69; // xmm0_4
  __int64 v70; // r9
  int v71; // er8
  void *v72; // rax
  unsigned __int64 v73; // rcx
  unsigned __int64 v74; // rax
  int v75; // er15
  __int64 v76; // r14
  __int64 v77; // r9
  int v78; // er8
  __int64 v79; // r9
  int v80; // er8
  unsigned __int64 v81; // rax
  __int64 v82; // r14
  __int64 v83; // r15
  __int64 v84; // rdx
  float v85; // xmm0_4
  __int64 v86; // rdx
  int v87; // xmm0_4
  __int64 v88; // rdx
  int v89; // xmm0_4

  m_uiPoint = stream->m_uiPoint;
  m_uiSize = stream->m_uiSize;
  v5 = 0;
  if ( m_uiSize > (unsigned int)m_uiPoint )
  {
    v7 = stream->m_pucData[m_uiPoint] | ((stream->m_pucData[(unsigned int)(m_uiPoint + 1)] | ((stream->m_pucData[(unsigned int)(m_uiPoint + 2)] | (stream->m_pucData[(unsigned int)(m_uiPoint + 3)] << 8)) << 8)) << 8);
    stream->m_uiPoint = m_uiPoint + 4;
  }
  else
  {
    v7 = 0;
  }
  v8 = 0;
  if ( dataVersion >= 106 )
  {
    v9 = stream->m_uiPoint;
    if ( m_uiSize > (unsigned int)v9 )
    {
      v8 = stream->m_pucData[v9] | ((stream->m_pucData[(unsigned int)(v9 + 1)] | ((stream->m_pucData[(unsigned int)(v9 + 2)] | (stream->m_pucData[(unsigned int)(v9 + 3)] << 8)) << 8)) << 8);
      stream->m_uiPoint = v9 + 4;
    }
  }
  v10 = (char *)operator new(0xD8ui64);
  *((_DWORD *)v10 + 2) = v7;
  *((_DWORD *)v10 + 3) = v8;
  *((_DWORD *)v10 + 4) = 6;
  *((_QWORD *)v10 + 3) = 0i64;
  *(_QWORD *)v10 = &TknDataObject::`vftable';
  *((_QWORD *)v10 + 5) = 0i64;
  *((_QWORD *)v10 + 6) = 0i64;
  *((_QWORD *)v10 + 7) = 0i64;
  *((_QWORD *)v10 + 8) = 0i64;
  *((_DWORD *)v10 + 18) = 0;
  *((_QWORD *)v10 + 16) = 0i64;
  *(_QWORD *)(v10 + 148) = 0i64;
  *((_DWORD *)v10 + 39) = 0;
  v10[192] = 0;
  *((_QWORD *)v10 + 25) = 0i64;
  *((_DWORD *)v10 + 52) = 0;
  *((_DWORD *)v10 + 34) = 0;
  *((_DWORD *)v10 + 42) = 0;
  *((_QWORD *)v10 + 22) = 0i64;
  *((_QWORD *)v10 + 23) = 0i64;
  if ( dataVersion >= 131 )
    *((_QWORD *)v10 + 3) = FileUtil::readString(stream);
  v11 = stream->m_uiPoint;
  if ( stream->m_uiSize > (unsigned int)v11 )
  {
    v12 = stream->m_pucData[v11] | ((stream->m_pucData[(unsigned int)(v11 + 1)] | ((stream->m_pucData[(unsigned int)(v11 + 2)] | (stream->m_pucData[(unsigned int)(v11 + 3)] << 8)) << 8)) << 8);
    stream->m_uiPoint = v11 + 4;
  }
  else
  {
    v12 = 0;
  }
  *((_DWORD *)v10 + 8) = v12;
  v13 = stream->m_uiPoint;
  if ( stream->m_uiSize > (unsigned int)v13 )
  {
    v14 = stream->m_pucData[v13] | ((stream->m_pucData[(unsigned int)(v13 + 1)] | ((stream->m_pucData[(unsigned int)(v13 + 2)] | (stream->m_pucData[(unsigned int)(v13 + 3)] << 8)) << 8)) << 8);
    stream->m_uiPoint = v13 + 4;
  }
  else
  {
    v14 = 0;
  }
  *((_DWORD *)v10 + 9) = v14;
  v15 = stream->m_uiPoint;
  if ( stream->m_uiSize > (unsigned int)v15 )
  {
    v16 = *(_DWORD *)&stream->m_pucData[v15];
    stream->m_uiPoint = v15 + 4;
  }
  else
  {
    v16 = 0;
  }
  *((_DWORD *)v10 + 53) = v16;
  v17 = stream->m_uiPoint;
  if ( stream->m_uiSize > (unsigned int)v17 )
  {
    v18 = *(_DWORD *)&stream->m_pucData[v17];
    stream->m_uiPoint = v17 + 4;
  }
  else
  {
    v18 = 0;
  }
  *((_DWORD *)v10 + 10) = v18;
  v19 = stream->m_uiPoint;
  if ( stream->m_uiSize > (unsigned int)v19 )
  {
    v20 = *(_DWORD *)&stream->m_pucData[v19];
    stream->m_uiPoint = v19 + 4;
  }
  else
  {
    v20 = 0;
  }
  *((_DWORD *)v10 + 11) = v20;
  v21 = stream->m_uiPoint;
  if ( stream->m_uiSize > (unsigned int)v21 )
  {
    v22 = *(_DWORD *)&stream->m_pucData[v21];
    stream->m_uiPoint = v21 + 4;
  }
  else
  {
    v22 = 0;
  }
  *((_DWORD *)v10 + 12) = v22;
  v23 = stream->m_uiPoint;
  if ( stream->m_uiSize > (unsigned int)v23 )
  {
    v24 = *(_DWORD *)&stream->m_pucData[v23];
    stream->m_uiPoint = v23 + 4;
  }
  else
  {
    v24 = 0;
  }
  *((_DWORD *)v10 + 13) = v24;
  v25 = stream->m_uiPoint;
  if ( stream->m_uiSize > (unsigned int)v25 )
  {
    v26 = *(_DWORD *)&stream->m_pucData[v25];
    stream->m_uiPoint = v25 + 4;
  }
  else
  {
    v26 = 0;
  }
  *((_DWORD *)v10 + 14) = v26;
  v27 = stream->m_uiPoint;
  if ( stream->m_uiSize > (unsigned int)v27 )
  {
    v28 = *(_DWORD *)&stream->m_pucData[v27];
    stream->m_uiPoint = v27 + 4;
  }
  else
  {
    v28 = 0;
  }
  *((_DWORD *)v10 + 15) = v28;
  v29 = stream->m_uiPoint;
  if ( stream->m_uiSize > (unsigned int)v29 )
  {
    v30 = *(_DWORD *)&stream->m_pucData[v29];
    stream->m_uiPoint = v29 + 4;
  }
  else
  {
    v30 = 0;
  }
  *((_DWORD *)v10 + 16) = v30;
  v31 = stream->m_uiPoint;
  if ( stream->m_uiSize > (unsigned int)v31 )
  {
    v32 = *(_DWORD *)&stream->m_pucData[v31];
    stream->m_uiPoint = v31 + 4;
  }
  else
  {
    v32 = 0;
  }
  *((_DWORD *)v10 + 17) = v32;
  v33 = stream->m_uiPoint;
  if ( stream->m_uiSize > (unsigned int)v33 )
  {
    v34 = *(_DWORD *)&stream->m_pucData[v33];
    stream->m_uiPoint = v33 + 4;
  }
  else
  {
    v34 = 0;
  }
  *((_DWORD *)v10 + 18) = v34;
  v35 = stream->m_uiPoint;
  if ( stream->m_uiSize > (unsigned int)v35 )
  {
    v36 = stream->m_pucData[v35] | ((stream->m_pucData[(unsigned int)(v35 + 1)] | ((stream->m_pucData[(unsigned int)(v35 + 2)] | (stream->m_pucData[(unsigned int)(v35 + 3)] << 8)) << 8)) << 8);
    stream->m_uiPoint = v35 + 4;
  }
  else
  {
    v36 = 0;
  }
  *((_DWORD *)v10 + 19) = v36;
  v10[80] = 0;
  if ( dataVersion >= 110 )
  {
    Bool = FileUtil::readBool(stream);
    v10[80] = Bool;
    if ( Bool )
    {
      *((_DWORD *)v10 + 21) = OGLInputStream::getInt(stream);
      v38 = stream->m_uiPoint;
      if ( stream->m_uiSize > (unsigned int)v38 )
      {
        v39 = *(_DWORD *)&stream->m_pucData[v38];
        stream->m_uiPoint = v38 + 4;
      }
      else
      {
        v39 = 0;
      }
      *((_DWORD *)v10 + 22) = v39;
      v40 = stream->m_uiPoint;
      if ( stream->m_uiSize > (unsigned int)v40 )
      {
        v41 = *(_DWORD *)&stream->m_pucData[v40];
        stream->m_uiPoint = v40 + 4;
      }
      else
      {
        v41 = 0;
      }
      *((_DWORD *)v10 + 23) = v41;
      v42 = stream->m_uiPoint;
      if ( stream->m_uiSize > (unsigned int)v42 )
      {
        v43 = *(_DWORD *)&stream->m_pucData[v42];
        stream->m_uiPoint = v42 + 4;
      }
      else
      {
        v43 = 0;
      }
      *((_DWORD *)v10 + 24) = v43;
      v44 = stream->m_uiPoint;
      if ( stream->m_uiSize > (unsigned int)v44 )
      {
        v45 = *(_DWORD *)&stream->m_pucData[v44];
        stream->m_uiPoint = v44 + 4;
      }
      else
      {
        v45 = 0;
      }
      *((_DWORD *)v10 + 25) = v45;
      v46 = stream->m_uiPoint;
      if ( stream->m_uiSize > (unsigned int)v46 )
      {
        v47 = *(_DWORD *)&stream->m_pucData[v46];
        stream->m_uiPoint = v46 + 4;
      }
      else
      {
        v47 = 0;
      }
      *((_DWORD *)v10 + 26) = v47;
      v48 = stream->m_uiPoint;
      if ( stream->m_uiSize > (unsigned int)v48 )
      {
        v49 = *(_DWORD *)&stream->m_pucData[v48];
        stream->m_uiPoint = v48 + 4;
      }
      else
      {
        v49 = 0;
      }
      *((_DWORD *)v10 + 27) = v49;
      v50 = stream->m_uiPoint;
      if ( stream->m_uiSize > (unsigned int)v50 )
      {
        v51 = *(_DWORD *)&stream->m_pucData[v50];
        stream->m_uiPoint = v50 + 4;
      }
      else
      {
        v51 = 0;
      }
      *((_DWORD *)v10 + 28) = v51;
      v10[116] = dataVersion >= 120 && FileUtil::readBool(stream);
    }
  }
  v10[117] = 0;
  if ( dataVersion >= 123 )
  {
    v52 = FileUtil::readBool(stream);
    v10[117] = v52;
    if ( v52 )
    {
      *((_DWORD *)v10 + 30) = OGLInputStream::getInt(stream);
      v53 = FileUtil::readBool(stream);
      v10[124] = v53;
      if ( v53 )
        *((_QWORD *)v10 + 16) = FileUtil::readString(stream);
    }
  }
  if ( dataVersion >= 129 )
  {
    v54 = stream->m_uiPoint;
    if ( stream->m_uiSize > (unsigned int)v54 )
    {
      v55 = stream->m_pucData[v54] | ((stream->m_pucData[(unsigned int)(v54 + 1)] | ((stream->m_pucData[(unsigned int)(v54 + 2)] | (stream->m_pucData[(unsigned int)(v54 + 3)] << 8)) << 8)) << 8);
      stream->m_uiPoint = v54 + 4;
    }
    else
    {
      v55 = 0;
    }
    *((_DWORD *)v10 + 34) = v55;
    v56 = stream->m_uiPoint;
    if ( stream->m_uiSize > (unsigned int)v56 )
    {
      v57 = *(_DWORD *)&stream->m_pucData[v56];
      stream->m_uiPoint = v56 + 4;
    }
    else
    {
      v57 = 0;
    }
    *((_DWORD *)v10 + 35) = v57;
    v58 = stream->m_uiPoint;
    if ( stream->m_uiSize > (unsigned int)v58 )
    {
      v59 = *(_DWORD *)&stream->m_pucData[v58];
      stream->m_uiPoint = v58 + 4;
    }
    else
    {
      v59 = 0;
    }
    *((_DWORD *)v10 + 36) = v59;
    v60 = stream->m_uiPoint;
    if ( stream->m_uiSize > (unsigned int)v60 )
    {
      v61 = *(_DWORD *)&stream->m_pucData[v60];
      stream->m_uiPoint = v60 + 4;
    }
    else
    {
      v61 = 0;
    }
    *((_DWORD *)v10 + 40) = v61;
    v62 = stream->m_uiPoint;
    if ( stream->m_uiSize > (unsigned int)v62 )
    {
      v63 = *(_DWORD *)&stream->m_pucData[v62];
      stream->m_uiPoint = v62 + 4;
    }
    else
    {
      v63 = 0;
    }
    *((_DWORD *)v10 + 41) = v63;
    if ( dataVersion >= 134 )
    {
      v64 = stream->m_uiPoint;
      if ( stream->m_uiSize > (unsigned int)v64 )
      {
        v65 = *(_DWORD *)&stream->m_pucData[v64];
        stream->m_uiPoint = v64 + 4;
      }
      else
      {
        v65 = 0;
      }
      *((_DWORD *)v10 + 37) = v65;
      v66 = stream->m_uiPoint;
      if ( stream->m_uiSize > (unsigned int)v66 )
      {
        v67 = *(_DWORD *)&stream->m_pucData[v66];
        stream->m_uiPoint = v66 + 4;
      }
      else
      {
        v67 = 0;
      }
      *((_DWORD *)v10 + 38) = v67;
      v68 = stream->m_uiPoint;
      if ( stream->m_uiSize > (unsigned int)v68 )
      {
        v69 = *(_DWORD *)&stream->m_pucData[v68];
        stream->m_uiPoint = v68 + 4;
      }
      else
      {
        v69 = 0;
      }
      *((_DWORD *)v10 + 39) = v69;
    }
    v70 = stream->m_uiPoint;
    if ( stream->m_uiSize > (unsigned int)v70 )
    {
      v71 = stream->m_pucData[v70] | ((stream->m_pucData[(unsigned int)(v70 + 1)] | ((stream->m_pucData[(unsigned int)(v70 + 2)] | (stream->m_pucData[(unsigned int)(v70 + 3)] << 8)) << 8)) << 8);
      stream->m_uiPoint = v70 + 4;
    }
    else
    {
      v71 = 0;
    }
    *((_DWORD *)v10 + 42) = v71;
    if ( v71 > 0 )
    {
      v72 = operator new[](saturated_mul(v71, 8ui64));
      v73 = *((int *)v10 + 42);
      *((_QWORD *)v10 + 22) = v72;
      v74 = 8 * v73;
      if ( !is_mul_ok(v73, 8ui64) )
        v74 = -1i64;
      v75 = 0;
      *((_QWORD *)v10 + 23) = operator new[](v74);
      if ( *((int *)v10 + 42) > 0 )
      {
        v76 = 0i64;
        do
        {
          *(_QWORD *)(v76 + *((_QWORD *)v10 + 22)) = FileUtil::readString(stream);
          v76 += 8i64;
          ++v75;
          *(_QWORD *)(v76 + *((_QWORD *)v10 + 23) - 8) = FileUtil::readString(stream);
        }
        while ( v75 < *((_DWORD *)v10 + 42) );
      }
    }
  }
  v10[192] = 0;
  if ( dataVersion >= 135 )
  {
    v77 = stream->m_uiPoint;
    if ( stream->m_uiSize > (unsigned int)v77 )
    {
      v78 = stream->m_pucData[v77] | ((stream->m_pucData[(unsigned int)(v77 + 1)] | ((stream->m_pucData[(unsigned int)(v77 + 2)] | (stream->m_pucData[(unsigned int)(v77 + 3)] << 8)) << 8)) << 8);
      stream->m_uiPoint = v77 + 4;
    }
    else
    {
      v78 = 0;
    }
    v10[192] = v78 != 0;
    if ( v78 )
    {
      v79 = stream->m_uiPoint;
      if ( stream->m_uiSize > (unsigned int)v79 )
      {
        v80 = stream->m_pucData[v79] | ((stream->m_pucData[(unsigned int)(v79 + 1)] | ((stream->m_pucData[(unsigned int)(v79 + 2)] | (stream->m_pucData[(unsigned int)(v79 + 3)] << 8)) << 8)) << 8);
        stream->m_uiPoint = v79 + 4;
      }
      else
      {
        v80 = 0;
      }
      v81 = 24i64 * v80;
      *((_DWORD *)v10 + 52) = v80;
      if ( !is_mul_ok(v80, 0x18ui64) )
        v81 = -1i64;
      *((_QWORD *)v10 + 25) = operator new[](v81);
      if ( *((int *)v10 + 52) > 0 )
      {
        v82 = 0i64;
        do
        {
          v83 = *((_QWORD *)v10 + 25);
          *(_QWORD *)(v82 + v83) = FileUtil::readString(stream);
          v84 = stream->m_uiPoint;
          if ( stream->m_uiSize > (unsigned int)v84 )
          {
            v85 = *(float *)&stream->m_pucData[v84];
            stream->m_uiPoint = v84 + 4;
          }
          else
          {
            v85 = 0.0;
          }
          *(float *)(v82 + v83 + 8) = v85 * 0.0099999998;
          v86 = stream->m_uiPoint;
          if ( stream->m_uiSize > (unsigned int)v86 )
          {
            v87 = *(_DWORD *)&stream->m_pucData[v86];
            stream->m_uiPoint = v86 + 4;
          }
          else
          {
            v87 = 0;
          }
          *(_DWORD *)(v82 + v83 + 12) = v87;
          v88 = stream->m_uiPoint;
          if ( stream->m_uiSize > (unsigned int)v88 )
          {
            v89 = *(_DWORD *)&stream->m_pucData[v88];
            stream->m_uiPoint = v88 + 4;
          }
          else
          {
            v89 = 0;
          }
          *(_DWORD *)(v82 + v83 + 16) = v89;
          ++v5;
          v82 += 24i64;
        }
        while ( v5 < *((_DWORD *)v10 + 52) );
      }
    }
  }
  if ( dataVersion < 131 )
    *((_QWORD *)v10 + 3) = FileUtil::readString(stream);
  return (TknDataObject *)v10;
}

TknDataScene *__fastcall TknDataScene::create(OGLInputStream *stream, int dataVersion)
{
  __int64 m_uiPoint; // r8
  unsigned int m_uiSize; // er9
  int v6; // ebp
  int v7; // esi
  __int64 v8; // r8
  _DWORD *v9; // rdi
  __int64 v10; // r9
  int v11; // er8
  void *v12; // rax
  int v13; // er11
  __int64 v14; // r10
  __int64 v15; // r9
  int v16; // er8
  __int64 v17; // r9
  int v18; // er8
  void *v19; // rax
  int v20; // er11
  __int64 v21; // r10
  __int64 v22; // r9
  int v23; // er8
  unsigned int v24; // ecx
  unsigned int v25; // eax
  unsigned int v26; // eax

  m_uiPoint = stream->m_uiPoint;
  m_uiSize = stream->m_uiSize;
  if ( m_uiSize > (unsigned int)m_uiPoint )
  {
    v6 = stream->m_pucData[m_uiPoint] | ((stream->m_pucData[(unsigned int)(m_uiPoint + 1)] | ((stream->m_pucData[(unsigned int)(m_uiPoint + 2)] | (stream->m_pucData[(unsigned int)(m_uiPoint + 3)] << 8)) << 8)) << 8);
    stream->m_uiPoint = m_uiPoint + 4;
  }
  else
  {
    v6 = 0;
  }
  v7 = 0;
  if ( dataVersion >= 106 )
  {
    v8 = stream->m_uiPoint;
    if ( m_uiSize > (unsigned int)v8 )
    {
      v7 = stream->m_pucData[v8] | ((stream->m_pucData[(unsigned int)(v8 + 1)] | ((stream->m_pucData[(unsigned int)(v8 + 2)] | (stream->m_pucData[(unsigned int)(v8 + 3)] << 8)) << 8)) << 8);
      stream->m_uiPoint = v8 + 4;
    }
  }
  v9 = operator new(0x40ui64);
  v9[2] = v6;
  v9[3] = v7;
  v9[4] = 1;
  *((_QWORD *)v9 + 3) = 0i64;
  *(_QWORD *)v9 = &TknDataScene::`vftable';
  *((_QWORD *)v9 + 5) = 0i64;
  *((_QWORD *)v9 + 7) = 0i64;
  if ( dataVersion >= 131 )
    *((_QWORD *)v9 + 3) = FileUtil::readString(stream);
  v10 = stream->m_uiPoint;
  if ( stream->m_uiSize > (unsigned int)v10 )
  {
    v11 = stream->m_pucData[v10] | ((stream->m_pucData[(unsigned int)(v10 + 1)] | ((stream->m_pucData[(unsigned int)(v10 + 2)] | (stream->m_pucData[(unsigned int)(v10 + 3)] << 8)) << 8)) << 8);
    stream->m_uiPoint = v10 + 4;
  }
  else
  {
    v11 = 0;
  }
  v9[12] = v11;
  if ( v11 > 0 )
  {
    v12 = operator new[](saturated_mul(v11, 4ui64));
    v13 = 0;
    *((_QWORD *)v9 + 7) = v12;
    if ( (int)v9[12] > 0 )
    {
      v14 = 0i64;
      do
      {
        v15 = stream->m_uiPoint;
        if ( stream->m_uiSize > (unsigned int)v15 )
        {
          v16 = stream->m_pucData[v15] | ((stream->m_pucData[(unsigned int)(v15 + 1)] | ((stream->m_pucData[(unsigned int)(v15 + 2)] | (stream->m_pucData[(unsigned int)(v15 + 3)] << 8)) << 8)) << 8);
          stream->m_uiPoint = v15 + 4;
        }
        else
        {
          v16 = 0;
        }
        ++v13;
        *(_DWORD *)(v14 + *((_QWORD *)v9 + 7)) = v16;
        v14 += 4i64;
      }
      while ( v13 < v9[12] );
    }
  }
  v17 = stream->m_uiPoint;
  if ( stream->m_uiSize > (unsigned int)v17 )
  {
    v18 = stream->m_pucData[v17] | ((stream->m_pucData[(unsigned int)(v17 + 1)] | ((stream->m_pucData[(unsigned int)(v17 + 2)] | (stream->m_pucData[(unsigned int)(v17 + 3)] << 8)) << 8)) << 8);
    stream->m_uiPoint = v17 + 4;
  }
  else
  {
    v18 = 0;
  }
  v9[8] = v18;
  if ( v18 > 0 )
  {
    v19 = operator new[](saturated_mul(v18, 4ui64));
    v20 = 0;
    *((_QWORD *)v9 + 5) = v19;
    if ( (int)v9[8] > 0 )
    {
      v21 = 0i64;
      do
      {
        v22 = stream->m_uiPoint;
        if ( stream->m_uiSize > (unsigned int)v22 )
        {
          v23 = stream->m_pucData[v22] | ((stream->m_pucData[(unsigned int)(v22 + 1)] | ((stream->m_pucData[(unsigned int)(v22 + 2)] | (stream->m_pucData[(unsigned int)(v22 + 3)] << 8)) << 8)) << 8);
          stream->m_uiPoint = v22 + 4;
        }
        else
        {
          v23 = 0;
        }
        ++v20;
        *(_DWORD *)(v21 + *((_QWORD *)v9 + 5)) = v23;
        v21 += 4i64;
      }
      while ( v20 < v9[8] );
    }
  }
  if ( dataVersion >= 104 )
  {
    v24 = stream->m_uiSize;
    v25 = stream->m_uiPoint;
    if ( v24 > v25 )
      stream->m_uiPoint = v25 + 4;
    v26 = stream->m_uiPoint;
    if ( v24 > v26 )
      stream->m_uiPoint = v26 + 4;
  }
  if ( dataVersion < 131 )
    *((_QWORD *)v9 + 3) = FileUtil::readString(stream);
  return (TknDataScene *)v9;
}

TknDataUVAnimation *__fastcall TknDataUVAnimation::create(OGLInputStream *stream, int dataVersion)
{
  __int64 m_uiPoint; // r8
  unsigned int m_uiSize; // er9
  int v5; // edi
  int v6; // er13
  int v7; // er15
  int v8; // esi
  __int64 v9; // r8
  _DWORD *v10; // r14
  __int64 v11; // r9
  int v12; // er8
  __int64 v13; // r9
  int v14; // er8
  __int64 v15; // r9
  int v16; // er8
  int v17; // xmm6_4
  __int64 v18; // r13
  unsigned __int64 v19; // rax
  __int64 v20; // r12
  __int64 v21; // r9
  __int64 v22; // rsi
  int v23; // er8
  __int64 v24; // r9
  int v25; // er8
  __int64 v26; // r9
  int v27; // er8
  __int64 v28; // r9
  int v29; // er8
  __int64 v30; // r9
  int v31; // er8
  __int64 v32; // r9
  int v33; // er8
  __int64 v34; // r15
  unsigned __int64 v35; // rax
  __int64 i; // r9
  __int64 v37; // r10
  __int64 v38; // r11
  int v39; // er8
  __int64 v40; // r10
  int v41; // er8
  __int64 v42; // rdx
  int v43; // xmm0_4
  __int64 v44; // rdx
  int v45; // xmm0_4
  __int64 v46; // r9
  int v47; // er8
  __int64 v48; // r9
  int v49; // er8
  __int64 v50; // rdx
  int v51; // xmm0_4
  __int64 v52; // rdx
  int v53; // xmm0_4
  __int64 v54; // r8
  int v55; // xmm3_4
  unsigned int v56; // edx
  int v57; // xmm2_4
  int v58; // xmm1_4
  int v59; // xmm0_4
  int v60; // xmm4_4
  int v61; // er10
  unsigned __int8 *m_pucData; // r9
  int v63; // ecx
  int v64; // er10
  int v65; // eax
  __int64 v66; // r8
  __int64 v67; // r8
  __int64 v68; // r8
  __int64 v69; // r9
  int v70; // er8
  __int64 v71; // rdx
  int v72; // xmm0_4
  __int64 v73; // rdx
  int v74; // xmm0_4
  __int64 v75; // rdx
  int v76; // xmm0_4
  __int64 v77; // rdx
  __int64 v78; // rdx
  __int64 v79; // r9
  int v80; // er8
  __int64 v81; // r9
  int v82; // er8
  __int64 v83; // r9
  int v84; // er8

  m_uiPoint = stream->m_uiPoint;
  m_uiSize = stream->m_uiSize;
  v5 = 0;
  v6 = dataVersion;
  if ( m_uiSize > (unsigned int)m_uiPoint )
  {
    v7 = stream->m_pucData[m_uiPoint] | ((stream->m_pucData[(unsigned int)(m_uiPoint + 1)] | ((stream->m_pucData[(unsigned int)(m_uiPoint + 2)] | (stream->m_pucData[(unsigned int)(m_uiPoint + 3)] << 8)) << 8)) << 8);
    stream->m_uiPoint = m_uiPoint + 4;
  }
  else
  {
    v7 = 0;
  }
  v8 = 0;
  if ( dataVersion >= 106 )
  {
    v9 = stream->m_uiPoint;
    if ( m_uiSize > (unsigned int)v9 )
    {
      v8 = stream->m_pucData[v9] | ((stream->m_pucData[(unsigned int)(v9 + 1)] | ((stream->m_pucData[(unsigned int)(v9 + 2)] | (stream->m_pucData[(unsigned int)(v9 + 3)] << 8)) << 8)) << 8);
      stream->m_uiPoint = v9 + 4;
    }
  }
  v10 = operator new(0x50ui64);
  v10[2] = v7;
  v10[3] = v8;
  v10[4] = 4;
  *((_QWORD *)v10 + 3) = 0i64;
  *(_QWORD *)v10 = &TknDataUVAnimation::`vftable';
  *((_QWORD *)v10 + 5) = 0i64;
  if ( v6 >= 131 )
    *((_QWORD *)v10 + 3) = FileUtil::readString(stream);
  if ( v6 < 106 )
  {
    v11 = stream->m_uiPoint;
    if ( stream->m_uiSize > (unsigned int)v11 )
    {
      v12 = stream->m_pucData[v11] | ((stream->m_pucData[(unsigned int)(v11 + 1)] | ((stream->m_pucData[(unsigned int)(v11 + 2)] | (stream->m_pucData[(unsigned int)(v11 + 3)] << 8)) << 8)) << 8);
      stream->m_uiPoint = v11 + 4;
    }
    else
    {
      v12 = 0;
    }
    v10[3] = v12;
  }
  v13 = stream->m_uiPoint;
  if ( stream->m_uiSize > (unsigned int)v13 )
  {
    v14 = stream->m_pucData[v13] | ((stream->m_pucData[(unsigned int)(v13 + 1)] | ((stream->m_pucData[(unsigned int)(v13 + 2)] | (stream->m_pucData[(unsigned int)(v13 + 3)] << 8)) << 8)) << 8);
    stream->m_uiPoint = v13 + 4;
  }
  else
  {
    v14 = 0;
  }
  v10[8] = v14;
  v15 = stream->m_uiPoint;
  if ( stream->m_uiSize > (unsigned int)v15 )
  {
    v16 = stream->m_pucData[v15] | ((stream->m_pucData[(unsigned int)(v15 + 1)] | ((stream->m_pucData[(unsigned int)(v15 + 2)] | (stream->m_pucData[(unsigned int)(v15 + 3)] << 8)) << 8)) << 8);
    stream->m_uiPoint = v15 + 4;
  }
  else
  {
    v16 = 0;
  }
  v10[9] = v16;
  v17 = 0;
  if ( v16 > 0 )
  {
    v18 = v16;
    v19 = (__int64)v16 << 6;
    if ( !is_mul_ok(v16, 0x40ui64) )
      v19 = -1i64;
    *((_QWORD *)v10 + 5) = operator new[](v19);
    v20 = 0i64;
    while ( 1 )
    {
      v21 = stream->m_uiPoint;
      v22 = *((_QWORD *)v10 + 5) + (v20 << 6);
      if ( stream->m_uiSize > (unsigned int)v21 )
      {
        v23 = stream->m_pucData[v21] | ((stream->m_pucData[(unsigned int)(v21 + 1)] | ((stream->m_pucData[(unsigned int)(v21 + 2)] | (stream->m_pucData[(unsigned int)(v21 + 3)] << 8)) << 8)) << 8);
        stream->m_uiPoint = v21 + 4;
      }
      else
      {
        v23 = 0;
      }
      *(_DWORD *)v22 = v23;
      v24 = stream->m_uiPoint;
      if ( stream->m_uiSize > (unsigned int)v24 )
      {
        v25 = stream->m_pucData[v24] | ((stream->m_pucData[(unsigned int)(v24 + 1)] | ((stream->m_pucData[(unsigned int)(v24 + 2)] | (stream->m_pucData[(unsigned int)(v24 + 3)] << 8)) << 8)) << 8);
        stream->m_uiPoint = v24 + 4;
      }
      else
      {
        v25 = 0;
      }
      *(_DWORD *)(v22 + 4) = TknFileUtil::convertTextureType((TknData::ToolTextureType)v25);
      v26 = stream->m_uiPoint;
      if ( stream->m_uiSize > (unsigned int)v26 )
      {
        v27 = stream->m_pucData[v26] | ((stream->m_pucData[(unsigned int)(v26 + 1)] | ((stream->m_pucData[(unsigned int)(v26 + 2)] | (stream->m_pucData[(unsigned int)(v26 + 3)] << 8)) << 8)) << 8);
        stream->m_uiPoint = v26 + 4;
      }
      else
      {
        v27 = 0;
      }
      *(_DWORD *)(v22 + 8) = v27;
      *(_QWORD *)(v22 + 24) = 0i64;
      v28 = stream->m_uiPoint;
      if ( stream->m_uiSize > (unsigned int)v28 )
      {
        v29 = stream->m_pucData[v28] | ((stream->m_pucData[(unsigned int)(v28 + 1)] | ((stream->m_pucData[(unsigned int)(v28 + 2)] | (stream->m_pucData[(unsigned int)(v28 + 3)] << 8)) << 8)) << 8);
        stream->m_uiPoint = v28 + 4;
      }
      else
      {
        v29 = 0;
      }
      *(_DWORD *)(v22 + 12) = v29;
      v30 = stream->m_uiPoint;
      if ( stream->m_uiSize > (unsigned int)v30 )
      {
        v31 = stream->m_pucData[v30] | ((stream->m_pucData[(unsigned int)(v30 + 1)] | ((stream->m_pucData[(unsigned int)(v30 + 2)] | (stream->m_pucData[(unsigned int)(v30 + 3)] << 8)) << 8)) << 8);
        stream->m_uiPoint = v30 + 4;
      }
      else
      {
        v31 = 0;
      }
      *(_DWORD *)(v22 + 16) = v31;
      if ( v31 == 1 )
      {
        v32 = stream->m_uiPoint;
        if ( stream->m_uiSize > (unsigned int)v32 )
        {
          v33 = stream->m_pucData[v32] | ((stream->m_pucData[(unsigned int)(v32 + 1)] | ((stream->m_pucData[(unsigned int)(v32 + 2)] | (stream->m_pucData[(unsigned int)(v32 + 3)] << 8)) << 8)) << 8);
          stream->m_uiPoint = v32 + 4;
        }
        else
        {
          v33 = 0;
        }
        *(_DWORD *)(v22 + 32) = v33;
        if ( v33 > 0 )
        {
          v34 = v33;
          v35 = 8i64 * v33;
          if ( !is_mul_ok(v33, 8ui64) )
            v35 = -1i64;
          *(_QWORD *)(v22 + 24) = operator new[](v35);
          for ( i = 0i64; i < v34; ++i )
          {
            v37 = stream->m_uiPoint;
            v38 = *(_QWORD *)(v22 + 24);
            if ( stream->m_uiSize > (unsigned int)v37 )
            {
              v39 = stream->m_pucData[v37] | ((stream->m_pucData[(unsigned int)(v37 + 1)] | ((stream->m_pucData[(unsigned int)(v37 + 2)] | (stream->m_pucData[(unsigned int)(v37 + 3)] << 8)) << 8)) << 8);
              stream->m_uiPoint = v37 + 4;
            }
            else
            {
              v39 = 0;
            }
            *(_DWORD *)(v38 + 8 * i) = v39;
            v40 = stream->m_uiPoint;
            if ( stream->m_uiSize > (unsigned int)v40 )
            {
              v41 = stream->m_pucData[v40] | ((stream->m_pucData[(unsigned int)(v40 + 1)] | ((stream->m_pucData[(unsigned int)(v40 + 2)] | (stream->m_pucData[(unsigned int)(v40 + 3)] << 8)) << 8)) << 8);
              stream->m_uiPoint = v40 + 4;
            }
            else
            {
              v41 = 0;
            }
            *(_DWORD *)(v38 + 8 * i + 4) = v41;
          }
        }
      }
      else if ( v31 == 2 )
      {
        v42 = stream->m_uiPoint;
        if ( stream->m_uiSize > (unsigned int)v42 )
        {
          v43 = *(_DWORD *)&stream->m_pucData[v42];
          stream->m_uiPoint = v42 + 4;
        }
        else
        {
          v43 = 0;
        }
        *(_DWORD *)(v22 + 36) = v43;
        v44 = stream->m_uiPoint;
        if ( stream->m_uiSize > (unsigned int)v44 )
        {
          v45 = *(_DWORD *)&stream->m_pucData[v44];
          stream->m_uiPoint = v44 + 4;
        }
        else
        {
          v45 = 0;
        }
        *(_DWORD *)(v22 + 40) = v45;
        v46 = stream->m_uiPoint;
        if ( stream->m_uiSize > (unsigned int)v46 )
        {
          v47 = stream->m_pucData[v46] | ((stream->m_pucData[(unsigned int)(v46 + 1)] | ((stream->m_pucData[(unsigned int)(v46 + 2)] | (stream->m_pucData[(unsigned int)(v46 + 3)] << 8)) << 8)) << 8);
          stream->m_uiPoint = v46 + 4;
        }
        else
        {
          v47 = 0;
        }
        *(_DWORD *)(v22 + 44) = v47;
        v48 = stream->m_uiPoint;
        if ( stream->m_uiSize > (unsigned int)v48 )
        {
          v49 = stream->m_pucData[v48] | ((stream->m_pucData[(unsigned int)(v48 + 1)] | ((stream->m_pucData[(unsigned int)(v48 + 2)] | (stream->m_pucData[(unsigned int)(v48 + 3)] << 8)) << 8)) << 8);
          stream->m_uiPoint = v48 + 4;
        }
        else
        {
          v49 = 0;
        }
        *(_DWORD *)(v22 + 48) = v49;
        v50 = stream->m_uiPoint;
        if ( stream->m_uiSize > (unsigned int)v50 )
        {
          v51 = *(_DWORD *)&stream->m_pucData[v50];
          stream->m_uiPoint = v50 + 4;
        }
        else
        {
          v51 = 0;
        }
        *(_DWORD *)(v22 + 52) = v51;
        v52 = stream->m_uiPoint;
        if ( stream->m_uiSize > (unsigned int)v52 )
        {
          v53 = *(_DWORD *)&stream->m_pucData[v52];
          stream->m_uiPoint = v52 + 4;
        }
        else
        {
          v53 = 0;
        }
        *(_DWORD *)(v22 + 56) = v53;
      }
      if ( (unsigned int)(dataVersion - 107) <= 4 )
        break;
      v10[12] = 0;
      *((_QWORD *)v10 + 9) = 0i64;
LABEL_99:
      if ( ++v20 >= v18 )
      {
        v6 = dataVersion;
        goto LABEL_101;
      }
    }
    v54 = stream->m_uiPoint;
    v55 = 0;
    v56 = stream->m_uiSize;
    v57 = 0;
    v58 = 0;
    v59 = 0;
    v60 = 0;
    if ( v56 <= (unsigned int)v54 )
    {
      v61 = 0;
      goto LABEL_96;
    }
    m_pucData = stream->m_pucData;
    v63 = stream->m_pucData[v54];
    v64 = stream->m_pucData[(unsigned int)(v54 + 2)] | (stream->m_pucData[(unsigned int)(v54 + 3)] << 8);
    v65 = stream->m_pucData[(unsigned int)(v54 + 1)];
    v66 = (unsigned int)(v54 + 4);
    stream->m_uiPoint = v66;
    v61 = v63 | ((v65 | (v64 << 8)) << 8);
    if ( v61 == 1 )
    {
      if ( v56 > (unsigned int)v66 )
      {
        v55 = *(_DWORD *)&m_pucData[v66];
        stream->m_uiPoint = v66 + 4;
      }
      else
      {
        v55 = 0;
      }
      v67 = stream->m_uiPoint;
      if ( v56 > (unsigned int)v67 )
      {
        v57 = *(_DWORD *)&m_pucData[v67];
        stream->m_uiPoint = v67 + 4;
      }
      else
      {
        v57 = 0;
      }
      v68 = stream->m_uiPoint;
      if ( v56 > (unsigned int)v68 )
      {
        v58 = *(_DWORD *)&m_pucData[v68];
        stream->m_uiPoint = v68 + 4;
      }
      else
      {
        v58 = 0;
      }
      v66 = stream->m_uiPoint;
      if ( v56 <= (unsigned int)v66 )
      {
        v59 = 0;
        goto LABEL_96;
      }
      v59 = *(_DWORD *)&m_pucData[v66];
    }
    else
    {
      if ( v61 != 2 )
        goto LABEL_96;
      if ( v56 <= (unsigned int)v66 )
      {
        v60 = 0;
        goto LABEL_96;
      }
      v60 = *(_DWORD *)&m_pucData[v66];
    }
    stream->m_uiPoint = v66 + 4;
LABEL_96:
    if ( !v20 )
    {
      v10[13] = v55;
      v10[14] = v57;
      v10[15] = v58;
      v10[16] = v59;
      v10[17] = v60;
      v10[12] = v61;
      v10[18] = 1;
      v10[19] = 1;
    }
    goto LABEL_99;
  }
LABEL_101:
  if ( v6 >= 112 )
  {
    v69 = stream->m_uiPoint;
    if ( stream->m_uiSize > (unsigned int)v69 )
    {
      v70 = stream->m_pucData[v69] | ((stream->m_pucData[(unsigned int)(v69 + 1)] | ((stream->m_pucData[(unsigned int)(v69 + 2)] | (stream->m_pucData[(unsigned int)(v69 + 3)] << 8)) << 8)) << 8);
      stream->m_uiPoint = v69 + 4;
    }
    else
    {
      v70 = 0;
    }
    v10[12] = v70;
    if ( v70 == 1 )
    {
      v71 = stream->m_uiPoint;
      if ( stream->m_uiSize > (unsigned int)v71 )
      {
        v72 = *(_DWORD *)&stream->m_pucData[v71];
        stream->m_uiPoint = v71 + 4;
      }
      else
      {
        v72 = 0;
      }
      v10[13] = v72;
      v73 = stream->m_uiPoint;
      if ( stream->m_uiSize > (unsigned int)v73 )
      {
        v74 = *(_DWORD *)&stream->m_pucData[v73];
        stream->m_uiPoint = v73 + 4;
      }
      else
      {
        v74 = 0;
      }
      v10[14] = v74;
      v75 = stream->m_uiPoint;
      if ( stream->m_uiSize > (unsigned int)v75 )
      {
        v76 = *(_DWORD *)&stream->m_pucData[v75];
        stream->m_uiPoint = v75 + 4;
      }
      else
      {
        v76 = 0;
      }
      v10[15] = v76;
      v77 = stream->m_uiPoint;
      if ( stream->m_uiSize > (unsigned int)v77 )
      {
        v17 = *(_DWORD *)&stream->m_pucData[v77];
        stream->m_uiPoint = v77 + 4;
      }
      v10[16] = v17;
    }
    else if ( v70 == 2 )
    {
      v78 = stream->m_uiPoint;
      if ( stream->m_uiSize > (unsigned int)v78 )
      {
        v17 = *(_DWORD *)&stream->m_pucData[v78];
        stream->m_uiPoint = v78 + 4;
      }
      v10[17] = v17;
    }
    v79 = stream->m_uiPoint;
    if ( v6 < 124 )
    {
      if ( stream->m_uiSize > (unsigned int)v79 )
      {
        v82 = stream->m_pucData[v79] | ((stream->m_pucData[(unsigned int)(v79 + 1)] | ((stream->m_pucData[(unsigned int)(v79 + 2)] | (stream->m_pucData[(unsigned int)(v79 + 3)] << 8)) << 8)) << 8);
        stream->m_uiPoint = v79 + 4;
      }
      else
      {
        v82 = 0;
      }
      v10[18] = v82 != 0;
      v83 = stream->m_uiPoint;
      if ( stream->m_uiSize > (unsigned int)v83 )
      {
        v84 = stream->m_pucData[v83] | ((stream->m_pucData[(unsigned int)(v83 + 1)] | ((stream->m_pucData[(unsigned int)(v83 + 2)] | (stream->m_pucData[(unsigned int)(v83 + 3)] << 8)) << 8)) << 8);
        stream->m_uiPoint = v83 + 4;
      }
      else
      {
        v84 = 0;
      }
      LOBYTE(v5) = v84 != 0;
    }
    else
    {
      if ( stream->m_uiSize > (unsigned int)v79 )
      {
        v80 = stream->m_pucData[v79] | ((stream->m_pucData[(unsigned int)(v79 + 1)] | ((stream->m_pucData[(unsigned int)(v79 + 2)] | (stream->m_pucData[(unsigned int)(v79 + 3)] << 8)) << 8)) << 8);
        stream->m_uiPoint = v79 + 4;
      }
      else
      {
        v80 = 0;
      }
      v10[18] = v80;
      v81 = stream->m_uiPoint;
      if ( stream->m_uiSize > (unsigned int)v81 )
      {
        v5 = stream->m_pucData[v81] | ((stream->m_pucData[(unsigned int)(v81 + 1)] | ((stream->m_pucData[(unsigned int)(v81 + 2)] | (stream->m_pucData[(unsigned int)(v81 + 3)] << 8)) << 8)) << 8);
        stream->m_uiPoint = v81 + 4;
      }
    }
    v10[19] = v5;
  }
  if ( v6 < 131 )
    *((_QWORD *)v10 + 3) = FileUtil::readString(stream);
  return (TknDataUVAnimation *)v10;
}

__int64 __fastcall TknDataEventConditions::timeToTorigger(int time)
{
  if ( time <= 1 )
    return 13i64;
  if ( time <= 2 )
    return 14i64;
  if ( time <= 3 )
    return 15i64;
  if ( time <= 4 )
    return 16i64;
  if ( time <= 5 )
    return 17i64;
  if ( time <= 6 )
    return 18i64;
  if ( time <= 7 )
    return 19i64;
  if ( time <= 8 )
    return 20i64;
  if ( time <= 9 )
    return 21i64;
  if ( time <= 10 )
    return 22i64;
  if ( time > 20 )
    return (unsigned int)(time > 30) + 24;
  return 23i64;
}

