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
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglrender.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/main.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/ag/kofshadermanager.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglshader.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/filemerge.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/pcdummy.cpp"

std::piecewise_construct_t std::piecewise_construct; // 0x1408A137F
void AppMain::createOriginalShader(); // 0x14023DCE0
void AppMain::ensureCommonShaders(); // 0x14023EAE0
void AppMain::ensureStageShaders(STAGE_ID stage); // 0x14023EC30
void AppMain::ensureCharacterShaders(CHARACTER_NO chara); // 0x14023EDE0
void AppMain::unloadStageShaders(STAGE_ID stage); // 0x14023EFB0
void AppMain::unloadCharacterShaders(CHARACTER_NO chara); // 0x14023F150//decompilation failure at 1408A137F!
void __fastcall AppMain::createOriginalShader(AppMain *this, __int64 a2, bool a3)
{
  AppMain *v3; // r15
  const unsigned __int8 *v4; // r13
  unsigned __int8 *v5; // r8
  unsigned __int64 *p_Region; // rdi
  const char **v7; // rbx
  unsigned int v8; // edi
  __int64 v9; // r8
  AgSingleton<KOFShaderManager> *v10; // rdx
  int v11; // ecx
  __int64 v12; // rax
  __int64 v13; // rbx
  const char **v14; // r14
  unsigned __int64 *v15; // r12
  OGLShader *v16; // rsi
  unsigned int IsStopping; // ebx
  const unsigned __int8 *CString; // rax
  unsigned int v19; // eax
  std::tuple<> *v20; // r9
  OGLRender *m_pRender; // r15
  std::_Tree_node<std::pair<AgHash const ,std::vector<OGLShader *> >,void *> *Myhead; // rcx
  std::_Tree_node<std::pair<AgHash const ,std::vector<OGLShader *> >,void *> *Parent; // rdx
  std::_Tree_node<std::pair<AgHash const ,std::vector<OGLShader *> >,void *> *Ptr; // rbx
  std::_Tree_node<std::pair<AgHash const ,std::vector<OGLShader *> >,void *> *v25; // rax
  OGLShader **Mylast; // r8
  OGLShader **v27; // rcx
  __int64 v28; // rsi
  OGLShader **v29; // r9
  __int64 v30; // r8
  unsigned __int64 v31; // r8
  unsigned __int64 v32; // r9
  unsigned __int64 v33; // rdx
  OGLShader **v34; // rcx
  OGLShader **Myend; // r9
  OGLShader **Myfirst; // rcx
  __int64 v37; // r8
  unsigned __int64 v38; // r8
  unsigned __int64 v39; // r9
  unsigned __int64 v40; // rdx
  OGLShader **v41; // rax
  __int64 i; // rbx
  unsigned __int8 *v43; // r8
  __int64 v44; // rdx
  char v45; // cl
  unsigned __int8 *v46; // rsi
  char *v47; // rax
  char *v48; // rbx
  const char *v49; // rbx
  __int64 v50; // rcx
  unsigned int v51; // er15
  __int64 v52; // r12
  const char *v53; // r14
  unsigned int v54; // esi
  const unsigned __int8 *v55; // rdx
  int v56; // eax
  __int64 v57; // rcx
  char v58; // al
  unsigned __int8 *v59; // rsi
  char *v60; // rax
  char *v61; // rbx
  const char *v62; // rbx
  __int64 v63; // rcx
  unsigned int v64; // er15
  __int64 v65; // r12
  const char *v66; // r14
  unsigned int v67; // esi
  const unsigned __int8 *v68; // rdx
  unsigned int v69; // eax
  __int64 v70; // rcx
  char v71; // al
  unsigned __int8 *v72; // rsi
  char *v73; // rax
  char *v74; // rbx
  const char *v75; // rbx
  __int64 v76; // rcx
  unsigned int v77; // er15
  __int64 v78; // r12
  const char *v79; // r14
  unsigned int v80; // esi
  const unsigned __int8 *v81; // rdx
  unsigned int v82; // eax
  __int64 v83; // rcx
  char v84; // al
  unsigned __int8 *v85; // rsi
  char *v86; // rax
  char *v87; // rbx
  const char *v88; // rbx
  __int64 v89; // rcx
  unsigned int v90; // er15
  __int64 v91; // r12
  const char *v92; // r14
  unsigned int v93; // esi
  const unsigned __int8 *v94; // rdx
  unsigned int v95; // er12
  __int64 v96; // rcx
  char v97; // al
  unsigned __int8 *v98; // rsi
  char *v99; // rax
  char *v100; // rbx
  const char *v101; // rbx
  __int64 v102; // rcx
  unsigned int v103; // er15
  const char *v104; // r14
  unsigned int v105; // esi
  const unsigned __int8 *v106; // rdx
  unsigned int v107; // esi
  OGLShader *v108; // rbx
  unsigned int v109; // er15
  unsigned __int8 v110; // r9
  AppMain *v111; // r14
  OGLShader *v112; // rbx
  unsigned __int8 v113; // r9
  OGLShader *v114; // rbx
  unsigned __int8 v115; // r9
  OGLShader *v116; // rbx
  unsigned __int8 v117; // r9
  OGLShader *v118; // rbx
  unsigned __int8 v119; // r9
  KOFShaderManager *v120; // rcx
  int Program; // eax
  KOFShaderManager *v122; // r11
  KOFShaderManager *v123; // rcx
  int v124; // eax
  KOFShaderManager *v125; // r11
  KOFShaderManager *v126; // rcx
  int v127; // eax
  KOFShaderManager *v128; // r11
  KOFShaderManager *v129; // rcx
  int v130; // eax
  KOFShaderManager *v131; // r11
  KOFShaderManager *v132; // rcx
  int v133; // eax
  KOFShaderManager *v134; // r11
  Concurrency::details::ThreadProxyFactory<Concurrency::details::FreeThreadProxy> *v135; // rbx
  bool v136; // r8
  bool _Newnode; // [rsp+20h] [rbp-E0h]
  int _Newnodea; // [rsp+20h] [rbp-E0h]
  int _Newnodeb; // [rsp+20h] [rbp-E0h]
  int _Newnodec; // [rsp+20h] [rbp-E0h]
  int _Newnoded; // [rsp+20h] [rbp-E0h]
  int _Newnodee; // [rsp+20h] [rbp-E0h]
  int fileSize; // [rsp+28h] [rbp-D8h]
  const _SHADER_INFO *fileSizea; // [rsp+28h] [rbp-D8h]
  const _SHADER_INFO *fileSizeb; // [rsp+28h] [rbp-D8h]
  const _SHADER_INFO *fileSizec; // [rsp+28h] [rbp-D8h]
  const _SHADER_INFO *fileSized; // [rsp+28h] [rbp-D8h]
  const _SHADER_INFO *fileSizee; // [rsp+28h] [rbp-D8h]
  const _SHADER_INFO *uniformNum; // [rsp+30h] [rbp-D0h]
  int uniformAttrib; // [rsp+38h] [rbp-C8h]
  const _SHADER_INFO *v151; // [rsp+40h] [rbp-C0h]
  unsigned int v152; // [rsp+60h] [rbp-A0h] BYREF
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgHash const ,std::vector<OGLShader *> > > > > result; // [rsp+68h] [rbp-98h] BYREF
  unsigned int _vertShader; // [rsp+70h] [rbp-90h]
  int instancing[3]; // [rsp+78h] [rbp-88h] BYREF
  __int16 v156; // [rsp+84h] [rbp-7Ch]
  char v157; // [rsp+86h] [rbp-7Ah]
  unsigned int fragShader[2]; // [rsp+88h] [rbp-78h]
  std::tuple<unsigned int const &> v159; // [rsp+90h] [rbp-70h] BYREF
  __int64 v160; // [rsp+98h] [rbp-68h]
  unsigned int vertShader[2]; // [rsp+A0h] [rbp-60h] BYREF
  OGLShader *v162; // [rsp+A8h] [rbp-58h]
  AppMain *v163; // [rsp+B0h] [rbp-50h]
  Framework::GLManager *v164; // [rsp+B8h] [rbp-48h]
  __int64 v165; // [rsp+C0h] [rbp-40h]
  Concurrency::details::ThreadProxyFactory<Concurrency::details::FreeThreadProxy> v166[2]; // [rsp+C8h] [rbp-38h] BYREF
  char str1[35]; // [rsp+13D0h] [rbp+12D0h] BYREF
  char v168[221]; // [rsp+13F3h] [rbp+12F3h] BYREF

  v165 = -2i64;
  v3 = this;
  v163 = this;
  v4 = pShaderPack;
  v164 = Framework::GLManager::glm;
  Framework::GLManager::LoadingLock(Framework::GLManager::glm, 1, a3);
  instancing[0] = 0;
  instancing[1] = 16843008;
  instancing[2] = 16843009;
  v156 = 257;
  v157 = 1;
  p_Region = &v166[0].m_proxyPool[0].m_head.Region;
  v7 = vsName;
  do
  {
    *(_DWORD *)p_Region = KOFShaderManager::loadVertShader(*v7++, 0, v5);
    p_Region = (unsigned __int64 *)((char *)p_Region + 4);
  }
  while ( (__int64)v7 < (__int64)s_stageShaders );
  v8 = 0;
  v9 = 0i64;
  v10 = AgSingleton<KOFShaderManager>::ms_instance;
  do
  {
    LODWORD(v10[4 * SLODWORD(v10[491523].__vftable) + 360451].__vftable) = 0;
    HIDWORD(v10[4 * SLODWORD(v10[491523].__vftable) + 360451].__vftable) = 1;
    v11 = (int)v10[491523].__vftable;
    LODWORD(v10[491523].__vftable) = v11 + 1;
    *((_DWORD *)&v166[0].m_proxyPool[3].m_head.HeaderX64 + v9++ + 2) = v11;
  }
  while ( v9 < 1200 );
  v12 = 0i64;
  *(_QWORD *)fragShader = 0i64;
  v13 = 625320i64 - (_QWORD)psName;
  v160 = 625320i64 - (_QWORD)psName;
  do
  {
    _vertShader = *((_DWORD *)&v166[0].m_proxyPool[0].m_head.HeaderX64 + v12 + 2);
    v14 = psName;
    v15 = &v166[0].m_proxyPool[3].m_head.Region;
    do
    {
      v16 = (OGLShader *)operator new(0x40ui64);
      v162 = v16;
      v16->m_Program = 0;
      v16->m_piGLAttrib.glValue = 0i64;
      v16->m_iGLAttribNum = 0;
      v16->m_piGLUniform = 0i64;
      v16->m_piGLAttrib.divisor = 0i64;
      v16->m_fragFile = 0i64;
      v16->m_programSlot = -1;
      OGLShader::createShader(
        v16,
        _vertShader,
        *(_DWORD *)v15,
        *v14,
        _Newnode,
        fileSize,
        uniformNum,
        uniformAttrib,
        v151,
        instancing);
      *(_QWORD *)vertShader = v16;
      *(const char **)((char *)v14 + v13 + (unsigned __int64)v3->m_pRender) = (const char *)v16;
      AgStringRef::AgStringRef((AgStringRef *)v166, *v14);
      IsStopping = AgSimpleThreadHost::getThreadIsStopping(v166);
      CString = (const unsigned __int8 *)AgStringRef::getCString((std::shared_ptr<__ExceptionPtr> *)v166);
      v19 = AgHash::_hashfunc(CString, IsStopping);
      v152 = v19;
      m_pRender = v3->m_pRender;
      Myhead = m_pRender->m_shadersToLoad._Mypair._Myval2._Myval2._Myhead;
      Parent = Myhead->_Parent;
      Ptr = Myhead;
      while ( !Parent->_Isnil )
      {
        if ( Parent->_Myval.first.m_key >= v19 )
        {
          Ptr = Parent;
          Parent = Parent->_Left;
        }
        else
        {
          Parent = Parent->_Right;
        }
      }
      if ( Ptr == Myhead || v19 < Ptr->_Myval.first.m_key )
      {
        v159._Myfirst._Val = &v152;
        v25 = (std::_Tree_node<std::pair<AgHash const ,std::vector<OGLShader *> >,void *> *)std::_Tree_comp_alloc<std::_Tmap_traits<unsigned int,std::vector<unsigned char>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::vector<unsigned char>>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<unsigned int const &>,std::tuple<>>(
                                                                                              (std::_Tree_comp_alloc<std::_Tmap_traits<unsigned int,std::vector<unsigned char>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,std::vector<unsigned char> > >,0> > *)&m_pRender->m_shadersToLoad,
                                                                                              (const std::piecewise_construct_t *)Parent,
                                                                                              &v159,
                                                                                              v20);
        std::_Tree<std::_Tmap_traits<AgHash,std::vector<OGLShader *>,std::less<AgHash>,std::allocator<std::pair<AgHash const,std::vector<OGLShader *>>>,0>>::_Insert_hint<std::pair<AgHash const,std::vector<OGLShader *>> &,std::_Tree_node<std::pair<AgHash const,std::vector<OGLShader *>>,void *> *>(
          &m_pRender->m_shadersToLoad,
          &result,
          (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgHash const ,std::vector<OGLShader *> > > > >)Ptr,
          &v25->_Myval,
          v25);
        Ptr = result._Ptr;
      }
      Mylast = Ptr->_Myval.second._Mypair._Myval2._Mylast;
      if ( vertShader >= (unsigned int *)Mylast
        || (v27 = Ptr->_Myval.second._Mypair._Myval2._Myfirst, v27 > (OGLShader **)vertShader) )
      {
        Myend = Ptr->_Myval.second._Mypair._Myval2._Myend;
        if ( Mylast == Myend && !(Myend - Mylast) )
        {
          Myfirst = Ptr->_Myval.second._Mypair._Myval2._Myfirst;
          v37 = Mylast - Myfirst;
          if ( v37 == 0x1FFFFFFFFFFFFFFFi64 )
            std::_Xlength_error("vector<T> too long");
          v38 = v37 + 1;
          v39 = Myend - Myfirst;
          v40 = 0i64;
          if ( 0x1FFFFFFFFFFFFFFFi64 - (v39 >> 1) >= v39 )
            v40 = v39 + (v39 >> 1);
          if ( v40 >= v38 )
            v38 = v40;
          std::vector<extension::exsound_detail::PreloadedAudioSet *>::_Reallocate(
            (std::vector<extension::exsound_detail::PreloadedAudioSet *> *)&Ptr->_Myval.second,
            v38);
        }
        v41 = Ptr->_Myval.second._Mypair._Myval2._Mylast;
        if ( v41 )
          *v41 = v16;
      }
      else
      {
        v28 = ((char *)vertShader - (char *)v27) >> 3;
        v29 = Ptr->_Myval.second._Mypair._Myval2._Myend;
        if ( Mylast == v29 && !(v29 - Mylast) )
        {
          v30 = Mylast - v27;
          if ( v30 == 0x1FFFFFFFFFFFFFFFi64 )
            std::_Xlength_error("vector<T> too long");
          v31 = v30 + 1;
          v32 = v29 - v27;
          v33 = 0i64;
          if ( 0x1FFFFFFFFFFFFFFFi64 - (v32 >> 1) >= v32 )
            v33 = v32 + (v32 >> 1);
          if ( v33 >= v31 )
            v31 = v33;
          std::vector<extension::exsound_detail::PreloadedAudioSet *>::_Reallocate(
            (std::vector<extension::exsound_detail::PreloadedAudioSet *> *)&Ptr->_Myval.second,
            v31);
        }
        v34 = Ptr->_Myval.second._Mypair._Myval2._Mylast;
        if ( v34 )
          *v34 = Ptr->_Myval.second._Mypair._Myval2._Myfirst[v28];
      }
      ++Ptr->_Myval.second._Mypair._Myval2._Mylast;
      v15 = (unsigned __int64 *)((char *)v15 + 4);
      ++v14;
      v13 = v160;
      v3 = v163;
    }
    while ( (__int64)v14 < (__int64)s_commonShaders );
    v12 = *(_QWORD *)fragShader + 1i64;
    *(_QWORD *)fragShader = v12;
    v13 = v160 + 9600;
    v160 += 9600i64;
  }
  while ( v12 < 12 );
  for ( i = 0i64; i < 12; ++i )
    _glewDeleteShader((unsigned int)AgSingleton<KOFShaderManager>::ms_instance[4
                                                                             * *((unsigned int *)&v166[0].m_proxyPool[0].m_head.HeaderX64
                                                                               + i
                                                                               + 2)
                                                                             + 360451].__vftable);
  vertShader[0] = KOFShaderManager::loadVertShader("shader/basic_texture_shader_vv.sb", 0, v43);
  LODWORD(result._Ptr) = 0;
  v44 = 0i64;
  do
  {
    v45 = aShaderEffPeCom[v44];
    str1[v44++] = v45;
  }
  while ( v45 );
  strcpy(v168, "frag");
  v152 = 0;
  v46 = 0i64;
  if ( v4 )
  {
    v47 = strstr(str1, ".");
    v48 = v47;
    if ( v47 )
    {
      if ( *v47 != 47 )
      {
        do
        {
          if ( v48 == str1 )
            break;
          --v48;
        }
        while ( *v48 != 47 );
      }
      v49 = v48 + 1;
      if ( v49 )
      {
        v50 = *((unsigned int *)v4 + 5);
        v51 = *((_DWORD *)v4 + 2);
        v52 = *(unsigned int *)&v4[v50];
        v53 = (const char *)&v4[(unsigned int)(v50 + 4)];
        v54 = 0;
        if ( !v51 )
          goto LABEL_60;
        while ( stricmp(v49, v53) )
        {
          ++v54;
          v53 += v52;
          if ( v54 >= v51 )
            goto LABEL_60;
        }
        if ( v54 != -1
          && v54 < *((_DWORD *)v4 + 2)
          && (v55 = &v4[*((unsigned int *)v4 + 3)], *(_DWORD *)&v4[4 * v54 + *((unsigned int *)v4 + 4)]) )
        {
          v152 = *(_DWORD *)&v4[4 * v54 + *((unsigned int *)v4 + 4)];
          v46 = (unsigned __int8 *)&v4[*(unsigned int *)&v55[4 * v54]];
        }
        else
        {
LABEL_60:
          v46 = 0i64;
        }
      }
    }
  }
  if ( OGLShader::compileShader((unsigned int *)&result, 0x8B30u, str1, 0i64, v46, v152) )
  {
    v56 = (int)result._Ptr;
  }
  else
  {
    v56 = (int)result._Ptr;
    LODWORD(v159._Myfirst._Val) = result._Ptr;
    if ( !LODWORD(result._Ptr) )
      goto LABEL_66;
    _glewDeleteShader((unsigned int)AgSingleton<KOFShaderManager>::ms_instance[4 * LODWORD(result._Ptr) + 360451].__vftable);
    v56 = 0;
  }
  LODWORD(v159._Myfirst._Val) = v56;
LABEL_66:
  LODWORD(v166[0].__vftable) = v56;
  LODWORD(result._Ptr) = 0;
  v57 = 0i64;
  do
  {
    v58 = aShaderEffPeCom_1[v57];
    str1[v57++] = v58;
  }
  while ( v58 );
  strcpy(v168, "frag");
  v152 = 0;
  v59 = 0i64;
  if ( v4 )
  {
    v60 = strstr(str1, ".");
    v61 = v60;
    if ( v60 )
    {
      if ( *v60 != 47 )
      {
        do
        {
          if ( v61 == str1 )
            break;
          --v61;
        }
        while ( *v61 != 47 );
      }
      v62 = v61 + 1;
      if ( v62 )
      {
        v63 = *((unsigned int *)v4 + 5);
        v64 = *((_DWORD *)v4 + 2);
        v65 = *(unsigned int *)&v4[v63];
        v66 = (const char *)&v4[(unsigned int)(v63 + 4)];
        v67 = 0;
        if ( !v64 )
          goto LABEL_82;
        while ( stricmp(v62, v66) )
        {
          ++v67;
          v66 += v65;
          if ( v67 >= v64 )
            goto LABEL_82;
        }
        if ( v67 != -1
          && v67 < *((_DWORD *)v4 + 2)
          && (v68 = &v4[*((unsigned int *)v4 + 3)], *(_DWORD *)&v4[4 * v67 + *((unsigned int *)v4 + 4)]) )
        {
          v152 = *(_DWORD *)&v4[4 * v67 + *((unsigned int *)v4 + 4)];
          v59 = (unsigned __int8 *)&v4[*(unsigned int *)&v68[4 * v67]];
        }
        else
        {
LABEL_82:
          v59 = 0i64;
        }
      }
    }
  }
  if ( OGLShader::compileShader((unsigned int *)&result, 0x8B30u, str1, 0i64, v59, v152) )
  {
    v69 = (unsigned int)result._Ptr;
  }
  else
  {
    v69 = (unsigned int)result._Ptr;
    fragShader[0] = (unsigned int)result._Ptr;
    if ( !LODWORD(result._Ptr) )
      goto LABEL_88;
    _glewDeleteShader((unsigned int)AgSingleton<KOFShaderManager>::ms_instance[4 * LODWORD(result._Ptr) + 360451].__vftable);
    v69 = 0;
  }
  fragShader[0] = v69;
LABEL_88:
  HIDWORD(v166[0].__vftable) = v69;
  LODWORD(result._Ptr) = 0;
  v70 = 0i64;
  do
  {
    v71 = aShaderEffPeCom_2[v70];
    str1[v70++] = v71;
  }
  while ( v71 );
  strcpy(&v168[6], "frag");
  v152 = 0;
  v72 = 0i64;
  if ( v4 )
  {
    v73 = strstr(str1, ".");
    v74 = v73;
    if ( v73 )
    {
      if ( *v73 != 47 )
      {
        do
        {
          if ( v74 == str1 )
            break;
          --v74;
        }
        while ( *v74 != 47 );
      }
      v75 = v74 + 1;
      if ( v75 )
      {
        v76 = *((unsigned int *)v4 + 5);
        v77 = *((_DWORD *)v4 + 2);
        v78 = *(unsigned int *)&v4[v76];
        v79 = (const char *)&v4[(unsigned int)(v76 + 4)];
        v80 = 0;
        if ( !v77 )
          goto LABEL_104;
        while ( stricmp(v75, v79) )
        {
          ++v80;
          v79 += v78;
          if ( v80 >= v77 )
            goto LABEL_104;
        }
        if ( v80 != -1
          && v80 < *((_DWORD *)v4 + 2)
          && (v81 = &v4[*((unsigned int *)v4 + 3)], *(_DWORD *)&v4[4 * v80 + *((unsigned int *)v4 + 4)]) )
        {
          v152 = *(_DWORD *)&v4[4 * v80 + *((unsigned int *)v4 + 4)];
          v72 = (unsigned __int8 *)&v4[*(unsigned int *)&v81[4 * v80]];
        }
        else
        {
LABEL_104:
          v72 = 0i64;
        }
      }
    }
  }
  if ( OGLShader::compileShader((unsigned int *)&result, 0x8B30u, str1, 0i64, v72, v152) )
  {
    v82 = (unsigned int)result._Ptr;
  }
  else
  {
    v82 = (unsigned int)result._Ptr;
    v152 = (unsigned int)result._Ptr;
    if ( !LODWORD(result._Ptr) )
      goto LABEL_110;
    _glewDeleteShader((unsigned int)AgSingleton<KOFShaderManager>::ms_instance[4 * LODWORD(result._Ptr) + 360451].__vftable);
    v82 = 0;
  }
  v152 = v82;
LABEL_110:
  v166[0].m_executionResourceTlsIndex = v82;
  LODWORD(result._Ptr) = 0;
  v83 = 0i64;
  do
  {
    v84 = aShaderEffPeCom_3[v83];
    str1[v83++] = v84;
  }
  while ( v84 );
  strcpy(&v168[3], "frag");
  _vertShader = 0;
  v85 = 0i64;
  if ( v4 )
  {
    v86 = strstr(str1, ".");
    v87 = v86;
    if ( v86 )
    {
      if ( *v86 != 47 )
      {
        do
        {
          if ( v87 == str1 )
            break;
          --v87;
        }
        while ( *v87 != 47 );
      }
      v88 = v87 + 1;
      if ( v88 )
      {
        v89 = *((unsigned int *)v4 + 5);
        v90 = *((_DWORD *)v4 + 2);
        v91 = *(unsigned int *)&v4[v89];
        v92 = (const char *)&v4[(unsigned int)(v89 + 4)];
        v93 = 0;
        if ( !v90 )
          goto LABEL_126;
        while ( stricmp(v88, v92) )
        {
          ++v93;
          v92 += v91;
          if ( v93 >= v90 )
            goto LABEL_126;
        }
        if ( v93 != -1
          && v93 < *((_DWORD *)v4 + 2)
          && (v94 = &v4[*((unsigned int *)v4 + 3)], *(_DWORD *)&v4[4 * v93 + *((unsigned int *)v4 + 4)]) )
        {
          _vertShader = *(_DWORD *)&v4[4 * v93 + *((unsigned int *)v4 + 4)];
          v85 = (unsigned __int8 *)&v4[*(unsigned int *)&v94[4 * v93]];
        }
        else
        {
LABEL_126:
          v85 = 0i64;
        }
      }
    }
  }
  if ( OGLShader::compileShader((unsigned int *)&result, 0x8B30u, str1, 0i64, v85, _vertShader) )
  {
    v95 = (unsigned int)result._Ptr;
  }
  else
  {
    v95 = (unsigned int)result._Ptr;
    if ( LODWORD(result._Ptr) )
    {
      _glewDeleteShader((unsigned int)AgSingleton<KOFShaderManager>::ms_instance[4 * LODWORD(result._Ptr) + 360451].__vftable);
      v95 = 0;
    }
  }
  *(&v166[0].m_executionResourceTlsIndex + 1) = v95;
  LODWORD(result._Ptr) = 0;
  v96 = 0i64;
  do
  {
    v97 = aShaderEffPeCom_0[v96];
    str1[v96++] = v97;
  }
  while ( v97 );
  strcpy(&v168[9], "frag");
  _vertShader = 0;
  v98 = 0i64;
  if ( v4 )
  {
    v99 = strstr(str1, ".");
    v100 = v99;
    if ( v99 )
    {
      if ( *v99 != 47 )
      {
        do
        {
          if ( v100 == str1 )
            break;
          --v100;
        }
        while ( *v100 != 47 );
      }
      v101 = v100 + 1;
      if ( v101 )
      {
        v102 = *((unsigned int *)v4 + 5);
        v103 = *((_DWORD *)v4 + 2);
        LODWORD(v160) = *(_DWORD *)&v4[v102];
        v104 = (const char *)&v4[(unsigned int)(v102 + 4)];
        v105 = 0;
        if ( !v103 )
          goto LABEL_147;
        while ( stricmp(v101, v104) )
        {
          ++v105;
          v104 += (unsigned int)v160;
          if ( v105 >= v103 )
            goto LABEL_147;
        }
        if ( v105 != -1
          && v105 < *((_DWORD *)v4 + 2)
          && (v106 = &v4[*((unsigned int *)v4 + 3)], *(_DWORD *)&v4[4 * v105 + *((unsigned int *)v4 + 4)]) )
        {
          _vertShader = *(_DWORD *)&v4[4 * v105 + *((unsigned int *)v4 + 4)];
          v98 = (unsigned __int8 *)&v4[*(unsigned int *)&v106[4 * v105]];
        }
        else
        {
LABEL_147:
          v98 = 0i64;
        }
      }
    }
  }
  if ( OGLShader::compileShader((unsigned int *)&result, 0x8B30u, str1, 0i64, v98, _vertShader) )
  {
    v107 = (unsigned int)result._Ptr;
  }
  else
  {
    v107 = (unsigned int)result._Ptr;
    if ( LODWORD(result._Ptr) )
    {
      _glewDeleteShader((unsigned int)AgSingleton<KOFShaderManager>::ms_instance[4 * LODWORD(result._Ptr) + 360451].__vftable);
      v107 = 0;
    }
  }
  LODWORD(v166[0].m_proxyPool[0].m_head.Alignment) = v107;
  v108 = (OGLShader *)operator new(0x40ui64);
  v162 = v108;
  v108->m_Program = 0;
  v108->m_piGLAttrib.glValue = 0i64;
  v108->m_iGLAttribNum = 0;
  v108->m_piGLUniform = 0i64;
  v108->m_piGLAttrib.divisor = 0i64;
  v108->m_fragFile = 0i64;
  v108->m_programSlot = -1;
  v109 = vertShader[0];
  OGLShader::createShader(
    v108,
    vertShader[0],
    (unsigned int)v159._Myfirst._Val,
    v110,
    _Newnodea,
    fileSizea,
    173,
    commonUniform);
  v111 = v163;
  v163->m_pRender->m_pEffectPPShader[1] = v108;
  v112 = (OGLShader *)operator new(0x40ui64);
  v162 = v112;
  v112->m_Program = 0;
  v112->m_piGLAttrib.glValue = 0i64;
  v112->m_iGLAttribNum = 0;
  v112->m_piGLUniform = 0i64;
  v112->m_piGLAttrib.divisor = 0i64;
  v112->m_fragFile = 0i64;
  v112->m_programSlot = -1;
  OGLShader::createShader(v112, v109, fragShader[0], v113, _Newnodeb, fileSizeb, 173, commonUniform);
  v111->m_pRender->m_pEffectPPShader[2] = v112;
  v114 = (OGLShader *)operator new(0x40ui64);
  v162 = v114;
  v114->m_Program = 0;
  v114->m_piGLAttrib.glValue = 0i64;
  v114->m_iGLAttribNum = 0;
  v114->m_piGLUniform = 0i64;
  v114->m_piGLAttrib.divisor = 0i64;
  v114->m_fragFile = 0i64;
  v114->m_programSlot = -1;
  OGLShader::createShader(v114, v109, v152, v115, _Newnodec, fileSizec, 173, commonUniform);
  v111->m_pRender->m_pEffectPPShader[3] = v114;
  v116 = (OGLShader *)operator new(0x40ui64);
  v162 = v116;
  v116->m_Program = 0;
  v116->m_piGLAttrib.glValue = 0i64;
  v116->m_iGLAttribNum = 0;
  v116->m_piGLUniform = 0i64;
  v116->m_piGLAttrib.divisor = 0i64;
  v116->m_fragFile = 0i64;
  v116->m_programSlot = -1;
  OGLShader::createShader(v116, v109, v95, v117, _Newnoded, fileSized, 173, commonUniform);
  v111->m_pRender->m_pEffectPPShader[4] = v116;
  v118 = (OGLShader *)operator new(0x40ui64);
  v162 = v118;
  v118->m_Program = 0;
  v118->m_piGLAttrib.glValue = 0i64;
  v118->m_iGLAttribNum = 0;
  v118->m_piGLUniform = 0i64;
  v118->m_piGLAttrib.divisor = 0i64;
  v118->m_fragFile = 0i64;
  v118->m_programSlot = -1;
  OGLShader::createShader(v118, v109, v107, v119, _Newnodee, fileSizee, 173, commonUniform);
  v111->m_pRender->m_pEffectPPShader[5] = v118;
  Program = KOFShaderManager::findProgram(v120, v111->m_pRender->m_pEffectPPShader[1]->m_Program);
  KOFShaderManager::link(v122, &v122->m_program[Program]);
  v124 = KOFShaderManager::findProgram(v123, v111->m_pRender->m_pEffectPPShader[2]->m_Program);
  KOFShaderManager::link(v125, &v125->m_program[v124]);
  v127 = KOFShaderManager::findProgram(v126, v111->m_pRender->m_pEffectPPShader[3]->m_Program);
  KOFShaderManager::link(v128, &v128->m_program[v127]);
  v130 = KOFShaderManager::findProgram(v129, v111->m_pRender->m_pEffectPPShader[4]->m_Program);
  KOFShaderManager::link(v131, &v131->m_program[v130]);
  v133 = KOFShaderManager::findProgram(v132, v111->m_pRender->m_pEffectPPShader[5]->m_Program);
  KOFShaderManager::link(v134, &v134->m_program[v133]);
  _glewDeleteShader((unsigned int)AgSingleton<KOFShaderManager>::ms_instance[4 * v109 + 360451].__vftable);
  v135 = v166;
  do
  {
    _glewDeleteShader((unsigned int)AgSingleton<KOFShaderManager>::ms_instance[4 * LODWORD(v135->__vftable) + 360451].__vftable);
    ++v8;
    v135 = (Concurrency::details::ThreadProxyFactory<Concurrency::details::FreeThreadProxy> *)((char *)v135 + 4);
  }
  while ( v8 < 5 );
  Framework::GLManager::LoadingUnlock(v164, 1, v136);
}

void __fastcall AppMain::ensureCharacterShaders(AppMain *this, CHARACTER_NO chara)
{
  const char **v3; // r15
  const char **v4; // rdx
  __int64 v5; // rsi
  OGLRender *m_pRender; // r12
  unsigned int IsStopping; // ebx
  const unsigned __int8 *CString; // rax
  unsigned int v9; // eax
  std::_Tree_node<std::pair<AgHash const ,std::vector<OGLShader *> >,void *> *Myhead; // rcx
  std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgHash const ,std::vector<OGLShader *> > > > > v11; // rdi
  std::_Tree_node<std::pair<AgHash const ,std::vector<OGLShader *> >,void *> *Parent; // rdx
  OGLShader **Myfirst; // rbx
  KOFShaderManager *v14; // r14
  unsigned __int64 v15; // rbp
  __int64 m_programSlot; // rcx
  const char *v17; // rax
  _BYTE v18[56]; // [rsp+20h] [rbp-38h] BYREF
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgHash const ,std::vector<OGLShader *> > > > > result; // [rsp+70h] [rbp+18h] BYREF

  if ( (unsigned int)(chara - 500) > 0x3C )
  {
    if ( (unsigned int)(chara - 148) <= 1 )
      chara -= 100;
  }
  else
  {
    chara -= 500;
  }
  if ( (unsigned int)chara <= CHARACTER_NO_NJD )
  {
    v3 = s_characterShaders[(__int64)(int)chara];
    if ( **v3 )
    {
      v4 = s_characterShaders[(__int64)(int)chara];
      v5 = 0i64;
      do
      {
        m_pRender = this->m_pRender;
        AgStringRef::AgStringRef((AgStringRef *)v18, *v4);
        IsStopping = AgSimpleThreadHost::getThreadIsStopping((Concurrency::details::ThreadProxyFactory<Concurrency::details::FreeThreadProxy> *)v18);
        CString = (const unsigned __int8 *)AgStringRef::getCString((std::shared_ptr<__ExceptionPtr> *)v18);
        v9 = AgHash::_hashfunc(CString, IsStopping);
        Myhead = m_pRender->m_shadersToLoad._Mypair._Myval2._Myval2._Myhead;
        v11._Ptr = Myhead;
        Parent = Myhead->_Parent;
        while ( !Parent->_Isnil )
        {
          if ( Parent->_Myval.first.m_key >= v9 )
          {
            v11._Ptr = Parent;
            Parent = Parent->_Left;
          }
          else
          {
            Parent = Parent->_Right;
          }
        }
        if ( v11._Ptr == Myhead || v9 < v11._Ptr->_Myval.first.m_key )
          v11._Ptr = m_pRender->m_shadersToLoad._Mypair._Myval2._Myval2._Myhead;
        if ( v11._Ptr != Myhead )
        {
          Myfirst = v11._Ptr->_Myval.second._Mypair._Myval2._Myfirst;
          v14 = (KOFShaderManager *)AgSingleton<KOFShaderManager>::ms_instance;
          v15 = (unsigned __int64)((char *)v11._Ptr->_Myval.second._Mypair._Myval2._Mylast - (char *)Myfirst + 7) >> 3;
          if ( Myfirst > v11._Ptr->_Myval.second._Mypair._Myval2._Mylast )
            v15 = 0i64;
          if ( v15 )
          {
            do
            {
              m_programSlot = (*Myfirst)->m_programSlot;
              if ( (int)m_programSlot >= 0 )
                KOFShaderManager::link(v14, &v14->m_program[m_programSlot]);
              ++Myfirst;
              ++v5;
            }
            while ( v5 != v15 );
          }
          if ( !*(_BYTE *)(*(_QWORD *)&AppMain::pApp + 2197496i64)
            && ((unsigned int (__fastcall *)(AgSingleton<AgSystemManager> *))AgSingleton<AgSystemManager>::ms_instance->__vftable[3].~AgSingleton<AgSystemManager>)(AgSingleton<AgSystemManager>::ms_instance)
             - 1 > 0x7FE )
          {
            std::_Tree<std::_Tmap_traits<AgHash,std::vector<OGLShader *>,std::less<AgHash>,std::allocator<std::pair<AgHash const,std::vector<OGLShader *>>>,0>>::erase(
              &m_pRender->m_shadersToLoad,
              &result,
              v11);
          }
          v5 = 0i64;
        }
        v17 = v3[1];
        v4 = ++v3;
      }
      while ( *v17 );
    }
  }
}

void __fastcall AppMain::ensureCommonShaders(AppMain *this, __int64 a2, bool a3)
{
  Framework::GLManager *v4; // rsi
  const char *v5; // rax
  __int64 v6; // rbx
  _DWORD *v7; // rsi
  AgPointer<AgDisplay> *DisplayByIndex; // rax
  AgDisplayPlatformImplementation *Log; // rax
  AgDisplay *m_ptr; // rdi
  AgReferenceCount *m_ref; // rbx
  int v12; // ebp
  AgPointer<AgDisplay> result; // [rsp+28h] [rbp-30h] BYREF

  v4 = Framework::GLManager::glm;
  Framework::GLManager::LoadingLock(Framework::GLManager::glm, 1, a3);
  v5 = s_commonShaders[0];
  if ( *s_commonShaders[0] )
  {
    v6 = 0i64;
    do
    {
      OGLRender::ensureShader(this->m_pRender, v5);
      v5 = s_commonShaders[++v6];
    }
    while ( *v5 );
  }
  if ( v4->mainGraphicsPthread != Concurrency::details::platform::GetCurrentThreadId() )
  {
    v7 = (_DWORD *)(*(_QWORD *)NtCurrentTeb()->Reserved1[11] + 8i64);
    if ( *v7 == 2 )
    {
      glFlush();
      DisplayByIndex = AgDisplayManager::getDisplayByIndex(
                         (AgDisplayManager *)AgSingleton<AgDisplayManager>::ms_instance,
                         &result,
                         0);
      Log = Scaleform::GFx::Stream::GetLog(DisplayByIndex->m_ptr);
      AgDisplayPlatformImplementation::loadingUnlock(Log, 1u);
      m_ptr = result.m_ptr;
      result.m_ptr = 0i64;
      m_ref = result.m_ref;
      if ( result.m_ref )
      {
        result.m_ref = 0i64;
        v12 = 0;
        if ( !AgAtomicDecrement(&m_ref->m_strongCount) )
        {
          if ( !AgAtomicDecrement(&m_ref->m_weakCount) )
            v12 = 1;
          m_ref->m_data = 0i64;
          if ( m_ptr )
          {
            AgDisplay::~AgDisplay(m_ptr);
            operator delete(m_ptr, 0x70ui64);
          }
          if ( v12 )
            AgReferenceCount::operator delete(m_ref);
        }
      }
      *v7 = 0;
    }
  }
}

void __fastcall AppMain::ensureStageShaders(AppMain *this, STAGE_ID stage)
{
  const char **v3; // r15
  const char **v4; // rdx
  __int64 v5; // rsi
  OGLRender *m_pRender; // r12
  unsigned int IsStopping; // ebx
  const unsigned __int8 *CString; // rax
  unsigned int v9; // eax
  std::_Tree_node<std::pair<AgHash const ,std::vector<OGLShader *> >,void *> *Myhead; // rcx
  std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgHash const ,std::vector<OGLShader *> > > > > v11; // rdi
  std::_Tree_node<std::pair<AgHash const ,std::vector<OGLShader *> >,void *> *Parent; // rdx
  OGLShader **Myfirst; // rbx
  KOFShaderManager *v14; // r14
  unsigned __int64 v15; // rbp
  __int64 m_programSlot; // rcx
  const char *v17; // rax
  _BYTE v18[56]; // [rsp+20h] [rbp-38h] BYREF
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgHash const ,std::vector<OGLShader *> > > > > result; // [rsp+70h] [rbp+18h] BYREF

  if ( (unsigned int)stage <= STAGE_ID_MAS )
  {
    v3 = s_stageShaders[(__int64)(int)stage];
    if ( **v3 )
    {
      v4 = s_stageShaders[(__int64)(int)stage];
      v5 = 0i64;
      do
      {
        m_pRender = this->m_pRender;
        AgStringRef::AgStringRef((AgStringRef *)v18, *v4);
        IsStopping = AgSimpleThreadHost::getThreadIsStopping((Concurrency::details::ThreadProxyFactory<Concurrency::details::FreeThreadProxy> *)v18);
        CString = (const unsigned __int8 *)AgStringRef::getCString((std::shared_ptr<__ExceptionPtr> *)v18);
        v9 = AgHash::_hashfunc(CString, IsStopping);
        Myhead = m_pRender->m_shadersToLoad._Mypair._Myval2._Myval2._Myhead;
        v11._Ptr = Myhead;
        Parent = Myhead->_Parent;
        while ( !Parent->_Isnil )
        {
          if ( Parent->_Myval.first.m_key >= v9 )
          {
            v11._Ptr = Parent;
            Parent = Parent->_Left;
          }
          else
          {
            Parent = Parent->_Right;
          }
        }
        if ( v11._Ptr == Myhead || v9 < v11._Ptr->_Myval.first.m_key )
          v11._Ptr = m_pRender->m_shadersToLoad._Mypair._Myval2._Myval2._Myhead;
        if ( v11._Ptr != Myhead )
        {
          Myfirst = v11._Ptr->_Myval.second._Mypair._Myval2._Myfirst;
          v14 = (KOFShaderManager *)AgSingleton<KOFShaderManager>::ms_instance;
          v15 = (unsigned __int64)((char *)v11._Ptr->_Myval.second._Mypair._Myval2._Mylast - (char *)Myfirst + 7) >> 3;
          if ( Myfirst > v11._Ptr->_Myval.second._Mypair._Myval2._Mylast )
            v15 = 0i64;
          if ( v15 )
          {
            do
            {
              m_programSlot = (*Myfirst)->m_programSlot;
              if ( (int)m_programSlot >= 0 )
                KOFShaderManager::link(v14, &v14->m_program[m_programSlot]);
              ++Myfirst;
              ++v5;
            }
            while ( v5 != v15 );
          }
          if ( !*(_BYTE *)(*(_QWORD *)&AppMain::pApp + 2197496i64)
            && ((unsigned int (__fastcall *)(AgSingleton<AgSystemManager> *))AgSingleton<AgSystemManager>::ms_instance->__vftable[3].~AgSingleton<AgSystemManager>)(AgSingleton<AgSystemManager>::ms_instance)
             - 1 > 0x7FE )
          {
            std::_Tree<std::_Tmap_traits<AgHash,std::vector<OGLShader *>,std::less<AgHash>,std::allocator<std::pair<AgHash const,std::vector<OGLShader *>>>,0>>::erase(
              &m_pRender->m_shadersToLoad,
              &result,
              v11);
          }
          v5 = 0i64;
        }
        v17 = v3[1];
        v4 = ++v3;
      }
      while ( *v17 );
    }
  }
}

void __fastcall AppMain::unloadCharacterShaders(AppMain *this, CHARACTER_NO chara)
{
  const char **v3; // r15
  const char **v4; // rdx
  __int64 v5; // rsi
  OGLRender *m_pRender; // r12
  unsigned int IsStopping; // ebx
  const unsigned __int8 *CString; // rax
  unsigned int v9; // eax
  std::_Tree_node<std::pair<AgHash const ,std::vector<OGLShader *> >,void *> *Myhead; // rcx
  std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgHash const ,std::vector<OGLShader *> > > > > v11; // rdi
  std::_Tree_node<std::pair<AgHash const ,std::vector<OGLShader *> >,void *> *Parent; // rdx
  OGLShader **Myfirst; // rbx
  KOFShaderManager *v14; // r14
  unsigned __int64 v15; // rbp
  const char *v16; // rax
  _BYTE v17[56]; // [rsp+20h] [rbp-38h] BYREF
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgHash const ,std::vector<OGLShader *> > > > > result; // [rsp+70h] [rbp+18h] BYREF

  if ( (unsigned int)(chara - 500) > 0x3C )
  {
    if ( (unsigned int)(chara - 148) <= 1 )
      chara -= 100;
  }
  else
  {
    chara -= 500;
  }
  if ( (unsigned int)chara <= CHARACTER_NO_NJD )
  {
    v3 = s_characterShaders[(__int64)(int)chara];
    if ( **v3 )
    {
      v4 = s_characterShaders[(__int64)(int)chara];
      v5 = 0i64;
      do
      {
        m_pRender = this->m_pRender;
        AgStringRef::AgStringRef((AgStringRef *)v17, *v4);
        IsStopping = AgSimpleThreadHost::getThreadIsStopping((Concurrency::details::ThreadProxyFactory<Concurrency::details::FreeThreadProxy> *)v17);
        CString = (const unsigned __int8 *)AgStringRef::getCString((std::shared_ptr<__ExceptionPtr> *)v17);
        v9 = AgHash::_hashfunc(CString, IsStopping);
        Myhead = m_pRender->m_shadersToLoad._Mypair._Myval2._Myval2._Myhead;
        v11._Ptr = Myhead;
        Parent = Myhead->_Parent;
        while ( !Parent->_Isnil )
        {
          if ( Parent->_Myval.first.m_key >= v9 )
          {
            v11._Ptr = Parent;
            Parent = Parent->_Left;
          }
          else
          {
            Parent = Parent->_Right;
          }
        }
        if ( v11._Ptr == Myhead || v9 < v11._Ptr->_Myval.first.m_key )
          v11._Ptr = m_pRender->m_shadersToLoad._Mypair._Myval2._Myval2._Myhead;
        if ( v11._Ptr != Myhead )
        {
          Myfirst = v11._Ptr->_Myval.second._Mypair._Myval2._Myfirst;
          v14 = (KOFShaderManager *)AgSingleton<KOFShaderManager>::ms_instance;
          v15 = (unsigned __int64)((char *)v11._Ptr->_Myval.second._Mypair._Myval2._Mylast - (char *)Myfirst + 7) >> 3;
          if ( Myfirst > v11._Ptr->_Myval.second._Mypair._Myval2._Mylast )
            v15 = 0i64;
          if ( v15 )
          {
            do
            {
              KOFShaderManager::unloadSlot(v14, (*Myfirst)->m_programSlot);
              ++v5;
              ++Myfirst;
            }
            while ( v5 != v15 );
          }
          if ( !*(_BYTE *)(*(_QWORD *)&AppMain::pApp + 2197496i64)
            && ((unsigned int (__fastcall *)(AgSingleton<AgSystemManager> *))AgSingleton<AgSystemManager>::ms_instance->__vftable[3].~AgSingleton<AgSystemManager>)(AgSingleton<AgSystemManager>::ms_instance)
             - 1 > 0x7FE )
          {
            std::_Tree<std::_Tmap_traits<AgHash,std::vector<OGLShader *>,std::less<AgHash>,std::allocator<std::pair<AgHash const,std::vector<OGLShader *>>>,0>>::erase(
              &m_pRender->m_shadersToLoad,
              &result,
              v11);
          }
          v5 = 0i64;
        }
        v16 = v3[1];
        v4 = ++v3;
      }
      while ( *v16 );
    }
  }
}

void __fastcall AppMain::unloadStageShaders(AppMain *this, STAGE_ID stage)
{
  const char **v3; // r15
  const char **v4; // rdx
  __int64 v5; // rsi
  OGLRender *m_pRender; // r12
  unsigned int IsStopping; // ebx
  const unsigned __int8 *CString; // rax
  unsigned int v9; // eax
  std::_Tree_node<std::pair<AgHash const ,std::vector<OGLShader *> >,void *> *Myhead; // rcx
  std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgHash const ,std::vector<OGLShader *> > > > > v11; // rdi
  std::_Tree_node<std::pair<AgHash const ,std::vector<OGLShader *> >,void *> *Parent; // rdx
  OGLShader **Myfirst; // rbx
  KOFShaderManager *v14; // r14
  unsigned __int64 v15; // rbp
  const char *v16; // rax
  _BYTE v17[56]; // [rsp+20h] [rbp-38h] BYREF
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgHash const ,std::vector<OGLShader *> > > > > result; // [rsp+70h] [rbp+18h] BYREF

  if ( (unsigned int)g_stage <= STAGE_ID_MAS )
  {
    v3 = s_stageShaders[(__int64)(int)g_stage];
    if ( **v3 )
    {
      v4 = s_stageShaders[(__int64)(int)g_stage];
      v5 = 0i64;
      do
      {
        m_pRender = this->m_pRender;
        AgStringRef::AgStringRef((AgStringRef *)v17, *v4);
        IsStopping = AgSimpleThreadHost::getThreadIsStopping((Concurrency::details::ThreadProxyFactory<Concurrency::details::FreeThreadProxy> *)v17);
        CString = (const unsigned __int8 *)AgStringRef::getCString((std::shared_ptr<__ExceptionPtr> *)v17);
        v9 = AgHash::_hashfunc(CString, IsStopping);
        Myhead = m_pRender->m_shadersToLoad._Mypair._Myval2._Myval2._Myhead;
        v11._Ptr = Myhead;
        Parent = Myhead->_Parent;
        while ( !Parent->_Isnil )
        {
          if ( Parent->_Myval.first.m_key >= v9 )
          {
            v11._Ptr = Parent;
            Parent = Parent->_Left;
          }
          else
          {
            Parent = Parent->_Right;
          }
        }
        if ( v11._Ptr == Myhead || v9 < v11._Ptr->_Myval.first.m_key )
          v11._Ptr = m_pRender->m_shadersToLoad._Mypair._Myval2._Myval2._Myhead;
        if ( v11._Ptr != Myhead )
        {
          Myfirst = v11._Ptr->_Myval.second._Mypair._Myval2._Myfirst;
          v14 = (KOFShaderManager *)AgSingleton<KOFShaderManager>::ms_instance;
          v15 = (unsigned __int64)((char *)v11._Ptr->_Myval.second._Mypair._Myval2._Mylast - (char *)Myfirst + 7) >> 3;
          if ( Myfirst > v11._Ptr->_Myval.second._Mypair._Myval2._Mylast )
            v15 = 0i64;
          if ( v15 )
          {
            do
            {
              KOFShaderManager::unloadSlot(v14, (*Myfirst)->m_programSlot);
              ++v5;
              ++Myfirst;
            }
            while ( v5 != v15 );
          }
          if ( !*(_BYTE *)(*(_QWORD *)&AppMain::pApp + 2197496i64)
            && ((unsigned int (__fastcall *)(AgSingleton<AgSystemManager> *))AgSingleton<AgSystemManager>::ms_instance->__vftable[3].~AgSingleton<AgSystemManager>)(AgSingleton<AgSystemManager>::ms_instance)
             - 1 > 0x7FE )
          {
            std::_Tree<std::_Tmap_traits<AgHash,std::vector<OGLShader *>,std::less<AgHash>,std::allocator<std::pair<AgHash const,std::vector<OGLShader *>>>,0>>::erase(
              &m_pRender->m_shadersToLoad,
              &result,
              v11);
          }
          v5 = 0i64;
        }
        v16 = v3[1];
        v4 = ++v3;
      }
      while ( *v16 );
    }
  }
}

