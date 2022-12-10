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
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/image/font.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/texstring.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/image/image.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/core/glstate.cpp"

std::piecewise_construct_t std::piecewise_construct; // 0x1408A0D28
void AppMain::createFont(long font_20, long font_22, long font_24, long font_26, long font_28, long font_30, long font_32, long font_34, long font_36, long font_40, long font_44, long font_64); // 0x140238490
void AppMain::clearTexString(); // 0x1402386D0
void AppMain::removeTexString(); // 0x140238840
void AppMain::createMenuImage(long iTexNo, const ImageDataInfo * pInfo); // 0x140238980
void AppMain::drawString2(unsigned char * str, long x, long y, float Priority, unsigned long Color, long Angle, float ScaleX, float ScaleY, long EffectFlg); // 0x140238B90//decompilation failure at 1408A0D28!
void __fastcall AppMain::clearTexString(AppMain *this, unsigned __int64 a2, bool a3)
{
  float v3; // xmm2_4
  TexString **m_TexStr; // r14
  __int64 v5; // rbp
  TexString *v6; // rdi
  char **p_str; // rbx
  __int64 v8; // rsi
  char *v9; // rcx
  OGLTexture *m_Image; // rcx
  Image *v11; // rcx
  unsigned __int8 *strBuffer; // rcx

  m_TexStr = this->m_TexStr;
  v5 = 12i64;
  do
  {
    v6 = *m_TexStr;
    if ( *m_TexStr )
    {
      p_str = &v6->m_StrData[0].str;
      v8 = 256i64;
      do
      {
        v9 = *p_str;
        if ( *p_str )
        {
          operator delete(v9, a2);
          *p_str = 0i64;
        }
        if ( defaultFont )
          defaultFont = Font::createFont((int)v9, 14, v3);
        *(p_str - 1) = (char *)defaultFont;
        *((_DWORD *)p_str + 2) = 0;
        *(char **)((char *)p_str + 12) = (char *)-1i64;
        *(char **)((char *)p_str + 20) = (char *)-1i64;
        *((_BYTE *)p_str + 28) = 0;
        p_str += 5;
        --v8;
      }
      while ( v8 );
      m_Image = v6->m_Image;
      *(_QWORD *)&v6->m_sx = -1i64;
      *(_QWORD *)&v6->m_sx2 = 0i64;
      v6->m_maxH = 0;
      *(_QWORD *)&v6->m_w = 0i64;
      *(_QWORD *)&v6->m_OriginX = 0i64;
      *(_QWORD *)&v6->m_ClipX = 0i64;
      *(_QWORD *)&v6->m_ClipW = 0i64;
      v6->m_Color = -1;
      *(_QWORD *)&v6->m_FlipMode = 0i64;
      v6->m_SrcRatio = 255;
      v6->m_DstRatio = 255;
      v6->m_ImageChFlg = 1;
      if ( m_Image )
      {
        OGLTexture::finalize(m_Image, a2, a3);
        v11 = v6->m_Image;
        if ( v11 )
          ((void (__fastcall *)(Image *, __int64))v11->~OGLTexture)(v11, 1i64);
        v6->m_Image = 0i64;
      }
      strBuffer = v6->strBuffer;
      if ( strBuffer )
      {
        operator delete(strBuffer, a2);
        v6->strBuffer = 0i64;
      }
    }
    ++m_TexStr;
    --v5;
  }
  while ( v5 );
}

void __fastcall AppMain::createFont(AppMain *this, int font_20, __int64 font_22, __int64 font_24)
{
  float v4; // xmm2_4
  Font *v6; // rcx
  Font *v7; // rcx
  Font *v8; // rcx
  Font *v9; // rcx
  Font *v10; // rcx
  Font *v11; // rcx
  Font *v12; // rcx
  Font *v13; // rcx
  Font *v14; // rcx
  Font *v15; // rcx
  Font *v16; // rcx
  Font *v17; // rcx
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  int v24; // ecx
  int v25; // ecx
  int v26; // ecx
  int v27; // ecx
  int v28; // ecx

  v6 = this->m_pFontTmp[20];
  if ( v6 )
  {
    ((void (__fastcall *)(Font *, __int64, __int64, __int64))v6->~Font)(v6, 1i64, font_22, font_24);
    this->m_pFontTmp[20] = 0i64;
  }
  v7 = this->m_pFontTmp[22];
  if ( v7 )
  {
    ((void (__fastcall *)(Font *, __int64, __int64, __int64))v7->~Font)(v7, 1i64, font_22, font_24);
    this->m_pFontTmp[22] = 0i64;
  }
  v8 = this->m_pFontTmp[24];
  if ( v8 )
  {
    ((void (__fastcall *)(Font *, __int64, __int64, __int64))v8->~Font)(v8, 1i64, font_22, font_24);
    this->m_pFontTmp[24] = 0i64;
  }
  v9 = this->m_pFontTmp[26];
  if ( v9 )
  {
    ((void (__fastcall *)(Font *, __int64, __int64, __int64))v9->~Font)(v9, 1i64, font_22, font_24);
    this->m_pFontTmp[26] = 0i64;
  }
  v10 = this->m_pFontTmp[28];
  if ( v10 )
  {
    ((void (__fastcall *)(Font *, __int64, __int64, __int64))v10->~Font)(v10, 1i64, font_22, font_24);
    this->m_pFontTmp[28] = 0i64;
  }
  v11 = this->m_pFontTmp[30];
  if ( v11 )
  {
    ((void (__fastcall *)(Font *, __int64, __int64, __int64))v11->~Font)(v11, 1i64, font_22, font_24);
    this->m_pFontTmp[30] = 0i64;
  }
  v12 = this->m_pFontTmp[32];
  if ( v12 )
  {
    ((void (__fastcall *)(Font *, __int64, __int64, __int64))v12->~Font)(v12, 1i64, font_22, font_24);
    this->m_pFontTmp[32] = 0i64;
  }
  v13 = this->m_pFontTmp[34];
  if ( v13 )
  {
    ((void (__fastcall *)(Font *, __int64, __int64, __int64))v13->~Font)(v13, 1i64, font_22, font_24);
    this->m_pFontTmp[34] = 0i64;
  }
  v14 = this->m_pFontTmp[36];
  if ( v14 )
  {
    ((void (__fastcall *)(Font *, __int64, __int64, __int64))v14->~Font)(v14, 1i64, font_22, font_24);
    this->m_pFontTmp[36] = 0i64;
  }
  v15 = this->m_pFontTmp[40];
  if ( v15 )
  {
    ((void (__fastcall *)(Font *, __int64, __int64, __int64))v15->~Font)(v15, 1i64, font_22, font_24);
    this->m_pFontTmp[40] = 0i64;
  }
  v16 = this->m_pFontTmp[48];
  if ( v16 )
  {
    ((void (__fastcall *)(Font *, __int64, __int64, __int64))v16->~Font)(v16, 1i64, font_22, font_24);
    this->m_pFontTmp[48] = 0i64;
  }
  v17 = this->m_pFontTmp[64];
  if ( v17 )
  {
    ((void (__fastcall *)(Font *, __int64, __int64, __int64))v17->~Font)(v17, 1i64, font_22, font_24);
    this->m_pFontTmp[64] = 0i64;
  }
  this->m_pFontTmp[20] = Font::createFont((int)v17, 10, v4);
  this->m_pFontTmp[22] = Font::createFont(v18, 11, v4);
  this->m_pFontTmp[24] = Font::createFont(v19, 12, v4);
  this->m_pFontTmp[26] = Font::createFont(v20, 13, v4);
  this->m_pFontTmp[28] = Font::createFont(v21, 14, v4);
  this->m_pFontTmp[30] = Font::createFont(v22, 15, v4);
  this->m_pFontTmp[32] = Font::createFont(v23, 16, v4);
  this->m_pFontTmp[34] = Font::createFont(v24, 17, v4);
  this->m_pFontTmp[36] = Font::createFont(v25, 18, v4);
  this->m_pFontTmp[40] = Font::createFont(v26, 20, v4);
  this->m_pFontTmp[48] = Font::createFont(v27, 22, v4);
  this->m_pFontTmp[64] = Font::createFont(v28, 64, v4);
}

void __fastcall AppMain::createMenuImage(AppMain *this, int iTexNo, const ImageDataInfo *pInfo)
{
  unsigned __int8 filter; // al
  int v5; // er9
  __int64 v6; // rdi
  extension::AsyncContent<Image> *m_ptr; // rax
  const char *fileName; // rdx
  unsigned __int64 v9; // r8
  extension::BasicFutureObject<Image,extension::FutureImageOption>::AssetCache *v10; // rcx
  extension::BasicFutureObject<Image,extension::FutureImageOption> *m_MenuImgTbl; // rdx
  extension::BasicFutureObject<Image,extension::FutureImageOption>::Body *v12; // r8
  extension::BasicFutureObject<Image,extension::FutureImageOption>::Body *v13; // rcx
  extension::BasicFutureObject<Image,extension::FutureImageOption>::Body *v14; // rcx
  char *Ptr; // rcx
  char *v16; // rax
  extension::FutureImageOption v17; // [rsp+20h] [rbp-39h] BYREF
  bool v18; // [rsp+31h] [rbp-28h]
  extension::RefCountablePtr<extension::BasicFutureObject<Image,extension::FutureImageOption>::Body> v19; // [rsp+38h] [rbp-21h] BYREF
  std::string v20; // [rsp+40h] [rbp-19h] BYREF
  __int64 v21; // [rsp+60h] [rbp+7h]
  std::string _Right; // [rsp+70h] [rbp+17h] BYREF

  v21 = -2i64;
  filter = pInfo->filter;
  v5 = 1285;
  if ( filter )
    v5 = 1290;
  v17.transparent = pInfo->transparent != 0;
  v17.filter = filter != 0;
  v17.option = pInfo->option;
  v6 = iTexNo;
  m_ptr = this->m_MenuImgTbl[iTexNo].m_body.m_ptr->m_content.m_ptr;
  if ( !m_ptr || m_ptr->m_isDataReleased )
  {
    if ( GAME_SCREEN_HEIGHT != 1080 )
      v5 = 1290;
    v17.texParam = v5;
    fileName = pInfo->fileName;
    _Right._Mypair._Myval2._Myres = 15i64;
    _Right._Mypair._Myval2._Mysize = 0i64;
    _Right._Mypair._Myval2._Bx._Buf[0] = 0;
    if ( *fileName )
    {
      v9 = -1i64;
      do
        ++v9;
      while ( fileName[v9] );
    }
    else
    {
      v9 = 0i64;
    }
    std::string::assign(&_Right, fileName, v9);
    v18 = 0;
    v20._Mypair._Myval2._Myres = 15i64;
    v20._Mypair._Myval2._Mysize = 0i64;
    v20._Mypair._Myval2._Bx._Buf[0] = 0;
    std::string::assign(&v20, &_Right, 0i64, 0xFFFFFFFFFFFFFFFFui64);
    extension::BasicFutureObject<Image,extension::FutureImageOption>::AssetCache::getCachedOrLoadStart(
      v10,
      &v19,
      &v20,
      &v17);
    m_MenuImgTbl = this->m_MenuImgTbl;
    m_MenuImgTbl[v6].m_isNoCache = v18;
    v12 = v19.m_ptr;
    if ( v19.m_ptr )
      _InterlockedExchangeAdd64((volatile signed __int64 *)&v19.m_ptr->m_refCount.m_ptr->m_sharedCount, 1ui64);
    v13 = m_MenuImgTbl[v6].m_body.m_ptr;
    m_MenuImgTbl[v6].m_body.m_ptr = v12;
    if ( v13
      && _InterlockedExchangeAdd64(
           (volatile signed __int64 *)&v13->m_refCount.m_ptr->m_sharedCount,
           0xFFFFFFFFFFFFFFFFui64) == 1 )
    {
      ((void (__fastcall *)(extension::BasicFutureObject<Image,extension::FutureImageOption>::Body *, __int64))v13->~RefCountableWeakSupportBase)(
        v13,
        1i64);
    }
    v14 = v19.m_ptr;
    if ( v19.m_ptr
      && _InterlockedExchangeAdd64(
           (volatile signed __int64 *)&v19.m_ptr->m_refCount.m_ptr->m_sharedCount,
           0xFFFFFFFFFFFFFFFFui64) == 1 )
    {
      ((void (__fastcall *)(extension::BasicFutureObject<Image,extension::FutureImageOption>::Body *, __int64))v14->~RefCountableWeakSupportBase)(
        v14,
        1i64);
    }
    if ( _Right._Mypair._Myval2._Myres >= 0x10 )
    {
      Ptr = _Right._Mypair._Myval2._Bx._Ptr;
      if ( _Right._Mypair._Myval2._Myres + 1 >= 0x1000 )
      {
        if ( (_Right._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
          invalid_parameter_noinfo_noreturn();
        v16 = (char *)*((_QWORD *)_Right._Mypair._Myval2._Bx._Ptr - 1);
        if ( v16 >= _Right._Mypair._Myval2._Bx._Ptr )
          invalid_parameter_noinfo_noreturn();
        if ( (char *)(_Right._Mypair._Myval2._Bx._Ptr - v16) < (char *)8 )
          invalid_parameter_noinfo_noreturn();
        if ( (char *)(_Right._Mypair._Myval2._Bx._Ptr - v16) > (char *)0x27 )
          invalid_parameter_noinfo_noreturn();
        Ptr = (char *)*((_QWORD *)_Right._Mypair._Myval2._Bx._Ptr - 1);
      }
      operator delete(Ptr);
    }
  }
}

void __fastcall AppMain::drawString2(
        AppMain *this,
        unsigned __int8 *str,
        int x,
        int y,
        float Priority,
        unsigned int Color,
        int Angle,
        float ScaleX,
        float ScaleY)
{
  unsigned __int8 *v9; // rdi
  AppMain *v10; // r14
  int v11; // er15
  __int64 v12; // rbx
  int v13; // esi
  GraphicsOpt *g; // rax
  float m_PosScale; // xmm1_4
  float v16; // xmm0_4
  float v17; // xmm2_4
  float v18; // xmm11_4
  unsigned int v19; // edx
  float v20; // xmm1_4
  float *v21; // r12
  float *v22; // r13
  float *v23; // r8
  float *v24; // r9
  char *v25; // r10
  float *v26; // r11
  float *v27; // r14
  unsigned __int8 v28; // al
  int v29; // eax
  char v30; // dl
  int v31; // edx
  int v32; // ecx
  int v33; // eax
  int v34; // ecx
  float v35; // xmm3_4
  float v36; // xmm6_4
  float v37; // xmm5_4
  float v38; // xmm4_4
  float v39; // xmm1_4
  float v40; // xmm7_4
  float *v41; // rax
  char *v42; // rcx
  float v43; // xmm0_4
  float v44; // xmm1_4
  float v45; // eax
  float *v46; // rdx
  float *v47; // rax
  float *v48; // rcx
  char count; // [rsp+30h] [rbp-D0h]
  int v50; // [rsp+34h] [rbp-CCh]
  unsigned int v51; // [rsp+38h] [rbp-C8h]
  float *v52; // [rsp+40h] [rbp-C0h]
  float *v53; // [rsp+48h] [rbp-B8h]
  float *v54; // [rsp+50h] [rbp-B0h]
  float *v55; // [rsp+58h] [rbp-A8h]
  char *v56; // [rsp+60h] [rbp-A0h]
  char *v57; // [rsp+68h] [rbp-98h]
  char *v58; // [rsp+70h] [rbp-90h]
  char *v59; // [rsp+78h] [rbp-88h]
  char *v60; // [rsp+80h] [rbp-80h]
  char *v61; // [rsp+88h] [rbp-78h]
  float *p_vertex; // [rsp+90h] [rbp-70h]
  float *v63; // [rsp+98h] [rbp-68h]
  float *p_texCoord; // [rsp+A0h] [rbp-60h]
  float *v65; // [rsp+A8h] [rbp-58h]
  float *v66; // [rsp+B0h] [rbp-50h]
  char *v67; // [rsp+B8h] [rbp-48h]
  char *v68; // [rsp+C0h] [rbp-40h]
  char *v69; // [rsp+C8h] [rbp-38h]
  int v70; // [rsp+D0h] [rbp-30h]
  float texCoord; // [rsp+E0h] [rbp-20h] BYREF
  char v73; // [rsp+E4h] [rbp-1Ch] BYREF
  char v74; // [rsp+E8h] [rbp-18h] BYREF
  char v75; // [rsp+ECh] [rbp-14h] BYREF
  char v76; // [rsp+F0h] [rbp-10h] BYREF
  char v77; // [rsp+F4h] [rbp-Ch] BYREF
  char v78; // [rsp+F8h] [rbp-8h] BYREF
  char v79; // [rsp+FCh] [rbp-4h] BYREF
  char v80; // [rsp+100h] [rbp+0h] BYREF
  char v81; // [rsp+104h] [rbp+4h] BYREF
  float vertex; // [rsp+FE0h] [rbp+EE0h] BYREF
  char v83; // [rsp+FE4h] [rbp+EE4h] BYREF
  char v84; // [rsp+FE8h] [rbp+EE8h] BYREF
  char v85; // [rsp+FECh] [rbp+EECh] BYREF
  char v86; // [rsp+FF0h] [rbp+EF0h] BYREF
  char v87; // [rsp+FF4h] [rbp+EF4h] BYREF
  char v88; // [rsp+FF8h] [rbp+EF8h] BYREF
  char v89; // [rsp+FFCh] [rbp+EFCh] BYREF
  char v90; // [rsp+1000h] [rbp+F00h] BYREF
  char v91; // [rsp+1004h] [rbp+F04h] BYREF
  char v92; // [rsp+1008h] [rbp+F08h] BYREF
  char v93; // [rsp+100Ch] [rbp+F0Ch] BYREF
  char v94; // [rsp+1010h] [rbp+F10h] BYREF
  char v95; // [rsp+1014h] [rbp+F14h] BYREF
  char v96; // [rsp+1018h] [rbp+F18h] BYREF

  if ( str )
  {
    v9 = str;
    v10 = this;
    v11 = 1500;
    v12 = -1i64;
    v50 = 1000;
    do
      ++v12;
    while ( str[v12] );
    v13 = 0;
    v70 = v12;
    count = 0;
    dword_140A96050 = 1;
    dword_140A960B8 = 1;
    dword_140A960B4 = 0;
    dword_140A960AC = 1;
    dword_140A96058 = 1;
    if ( m_DepthMask )
    {
      m_DepthMask = 0;
      glDepthMask(0);
    }
    if ( dword_140A9605C != 1 )
    {
      dword_140A9605C = 1;
      glEnable(0xBE2u);
    }
    if ( m_Sfactor != 770 || m_Dfactor != 771 )
    {
      m_Sfactor = 770;
      m_Dfactor = 771;
      m_SfactorAlpha = 770;
      m_DfactorAlpha = 771;
      glBlendFunc(0x302u, 0x303u);
    }
    g = v10->g;
    m_PosScale = g->m_PosScale;
    v16 = m_PosScale / g->m_DrawScale;
    v17 = ScaleX * v16;
    v18 = ScaleY * v16;
    if ( m_PosScale != 1.0 )
    {
      v11 = (int)(float)(g->m_PosScale * 1500.0);
      v50 = (int)(float)(m_PosScale * 1000.0);
    }
    v19 = 0;
    v51 = 0;
    if ( (_DWORD)v12 )
    {
      v20 = FLOAT_0_00390625;
      p_texCoord = &texCoord;
      p_vertex = &vertex;
      v21 = (float *)&v81;
      v69 = &v79;
      v22 = (float *)&v80;
      v67 = &v77;
      v23 = (float *)&v75;
      v24 = (float *)&v74;
      v66 = (float *)&v76;
      v25 = &v84;
      v26 = (float *)&v86;
      v65 = (float *)&v73;
      v27 = (float *)&v85;
      v61 = &v96;
      v60 = &v93;
      v59 = &v90;
      v58 = &v87;
      v57 = &v95;
      v56 = &v92;
      v55 = (float *)&v94;
      v54 = (float *)&v91;
      v53 = (float *)&v89;
      v52 = (float *)&v88;
      v63 = (float *)&v83;
      v68 = &v78;
      while ( 1 )
      {
        if ( v19 >= 0x50 )
        {
LABEL_27:
          v10 = this;
          goto LABEL_28;
        }
        v28 = *v9;
        if ( *v9 == 32 )
          goto LABEL_25;
        if ( v28 != 9 )
          break;
LABEL_26:
        ++v19;
        ++v9;
        v51 = v19;
        if ( v19 >= (unsigned int)v12 )
          goto LABEL_27;
      }
      v30 = (v28 - 32) >> 31;
      v29 = v28 - 32;
      v31 = v30 & 0xF;
      v32 = v31 + v29;
      v33 = 16 * (((v31 + v29) & 0xF) - v31);
      v34 = 32 * (v32 >> 4) + 1;
      v35 = (float)v33 * v20;
      v36 = (float)(v34 + 32) * v20;
      v37 = (float)(v33 + 16) * v20;
      v38 = (float)v34 * v20;
      v39 = (float)v11 - (float)(v17 * 0.0);
      v40 = (float)v50 - (float)(v18 * 0.0);
      *p_vertex = v39;
      *v63 = v40;
      if ( count )
      {
        v52 += 3;
        v53 += 3;
        v54 += 3;
        v55 += 3;
        v57 += 12;
        v13 += 3;
        v58 += 12;
        v59 += 12;
        v60 += 12;
        p_vertex += 3;
        v63 += 3;
        v41 = (float *)(v56 + 12);
        *(_DWORD *)v25 = LODWORD(Priority) ^ _xmm;
        v25 += 12;
        *v27 = v39;
        v27 += 3;
        *v26 = v40;
        v26 += 3;
        v42 = v61 + 12;
        v56 += 12;
        v61 += 12;
      }
      else
      {
        v41 = (float *)v56;
        v42 = v61;
      }
      *v27 = v39;
      v43 = (float)((float)(v17 * 16.0) - (float)(v17 * 0.0)) + (float)v11;
      v44 = (float)((float)(v18 * 32.0) - (float)(v18 * 0.0)) + (float)v50;
      *v52 = v43;
      *v41 = v44;
      *v26 = v44;
      *v53 = v40;
      *v54 = v43;
      v45 = *v41;
      *v55 = v43;
      *(_DWORD *)v42 = LODWORD(Priority) ^ _xmm;
      *(_DWORD *)v25 = LODWORD(Priority) ^ _xmm;
      *(float *)v57 = v45;
      v46 = (float *)v68;
      *v65 = v38;
      *(_DWORD *)v58 = LODWORD(Priority) ^ _xmm;
      *(_DWORD *)v59 = LODWORD(Priority) ^ _xmm;
      *(_DWORD *)v60 = LODWORD(Priority) ^ _xmm;
      *p_texCoord = v35;
      if ( count )
      {
        v66 += 2;
        p_texCoord += 2;
        v46 = (float *)(v68 + 8);
        v65 += 2;
        v47 = (float *)(v67 + 8);
        v22 += 2;
        *v24 = v35;
        v48 = (float *)(v69 + 8);
        *v23 = v38;
        v24 += 2;
        v23 += 2;
        v21 += 2;
      }
      else
      {
        v48 = (float *)v69;
        v47 = (float *)v67;
      }
      v13 += 15;
      p_vertex += 15;
      v27 += 15;
      v63 += 15;
      v26 += 15;
      v52 += 15;
      v25 += 60;
      v53 += 15;
      v54 += 15;
      v55 += 15;
      v56 += 60;
      v57 += 60;
      v58 += 60;
      v59 += 60;
      v60 += 60;
      v61 += 60;
      p_texCoord += 10;
      v65 += 10;
      v20 = FLOAT_0_00390625;
      *v66 = v37;
      *v46 = v37;
      *v47 = v38;
      *v24 = v35;
      v24 += 10;
      *v23 = v36;
      v23 += 10;
      *v48 = v36;
      *v22 = v37;
      v22 += 10;
      v66 += 10;
      LODWORD(v12) = v70;
      *v21 = v36;
      v21 += 10;
      v68 = (char *)(v46 + 10);
      v19 = v51;
      v67 = (char *)(v47 + 10);
      v69 = (char *)(v48 + 10);
      count = 1;
LABEL_25:
      v11 += (int)(float)(v17 * 14.0);
      goto LABEL_26;
    }
LABEL_28:
    OGLRender::drawImage(v10->m_pRender, v10->pSystemTex, &vertex, &texCoord, 0xFFFFFFFF, v13 / 3);
    if ( m_DepthMask != 1 )
    {
      m_DepthMask = 1;
      glDepthMask(1u);
    }
  }
}

void __fastcall AppMain::removeTexString(AppMain *this, unsigned __int64 a2, float a3)
{
  Font *Font; // rax
  TexString **m_TexStr; // r14
  __int64 v5; // rbp
  TexString *v6; // rdi
  char **p_str; // rbx
  __int64 v8; // rsi
  char *v9; // rcx
  unsigned __int8 *strBuffer; // rcx

  Font = defaultFont;
  m_TexStr = this->m_TexStr;
  v5 = 12i64;
  do
  {
    v6 = *m_TexStr;
    if ( *m_TexStr )
    {
      p_str = &v6->m_StrData[0].str;
      v8 = 256i64;
      do
      {
        v9 = *p_str;
        if ( *p_str )
        {
          operator delete(v9, a2);
          Font = defaultFont;
          *p_str = 0i64;
        }
        if ( Font )
        {
          Font = Font::createFont((int)v9, 14, a3);
          defaultFont = Font;
        }
        *(p_str - 1) = (char *)Font;
        *((_DWORD *)p_str + 2) = 0;
        *(char **)((char *)p_str + 12) = (char *)-1i64;
        *(char **)((char *)p_str + 20) = (char *)-1i64;
        *((_BYTE *)p_str + 28) = 0;
        p_str += 5;
        --v8;
      }
      while ( v8 );
      strBuffer = v6->strBuffer;
      *(_QWORD *)&v6->m_sx = -1i64;
      *(_QWORD *)&v6->m_sx2 = 0i64;
      v6->m_maxH = 0;
      *(_QWORD *)&v6->m_w = 0i64;
      *(_QWORD *)&v6->m_OriginX = 0i64;
      *(_QWORD *)&v6->m_ClipX = 0i64;
      *(_QWORD *)&v6->m_ClipW = 0i64;
      v6->m_Color = -1;
      *(_QWORD *)&v6->m_FlipMode = 0i64;
      v6->m_SrcRatio = 255;
      v6->m_DstRatio = 255;
      v6->m_ImageChFlg = 1;
      if ( strBuffer )
      {
        operator delete(strBuffer, a2);
        Font = defaultFont;
        v6->strBuffer = 0i64;
      }
    }
    ++m_TexStr;
    --v5;
  }
  while ( v5 );
}

