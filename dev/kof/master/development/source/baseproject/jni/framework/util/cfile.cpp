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
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/lzss.h"
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
#include "dev/kof/master/development/source/baseproject/jni/framework/util/cfile.h"
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
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/fixmemory.cpp"

AgSingleton<AgFileSystem> * AgSingleton<AgFileSystem>::ms_instance; // 0x140ACAB30
const long ciFileSearchOrder[3][3]; // 0x14088A4F0
std::piecewise_construct_t std::piecewise_construct; // 0x14088A4E4
AgPath::~AgPath(); // 0x1400477E0
CFile::~CFile(); // 0x1400955B0
unsigned char CFile::_readOpenLocal(const char * pFileName); // 0x1400955E0
unsigned char CFile::_readOpenSDCard(const char * pFileName); // 0x1400956B0
unsigned char CFile::_writeOpenSDCard(const char * pFileName); // 0x140095780
unsigned char CFile::copen(const char * _pFileName, long fileLoc, long aFileMode); // 0x140095850
void CFile::decrypt(unsigned char * pDst, long offset, long size, const char * mask); // 0x140095F20
long CFile::ResourceDataLoaderNew(const char * aFileName, long searchType, long seek, long size, unsigned char * * buf); // 0x140095F80
unsigned char CFile::exists(const char * aFileName); // 0x1400960C0
long CFile::loadDataFixKeep(const char * aFileName, CFixMemoryPara * pPara, long searchType); // 0x140096190//decompilation failure at 140ACAB30!
//decompilation failure at 14088A4F0!
//decompilation failure at 14088A4E4!
std::string *__fastcall std::operator+<char>(std::string *result, std::string *_Left, const char *_Right)
{
  unsigned __int64 v5; // r8
  std::string *v6; // rax

  if ( *_Right )
  {
    v5 = -1i64;
    do
      ++v5;
    while ( _Right[v5] );
  }
  else
  {
    v5 = 0i64;
  }
  v6 = std::string::append(_Left, _Right, v5);
  result->_Mypair._Myval2._Myres = 15i64;
  result->_Mypair._Myval2._Mysize = 0i64;
  result->_Mypair._Myval2._Bx._Buf[0] = 0;
  std::string::_Assign_rv(result, v6);
  return result;
}

void __fastcall AgPointer<AgUser>::AgPointer<AgUser>(AgPointer<AgUser> *this, AgUser *t)
{
  int ReferenceCounter; // eax
  AgReferenceCount *m_refCount; // rbx

  this->m_ref = 0i64;
  this->m_ptr = 0i64;
  if ( t )
  {
    ReferenceCounter = AgReferencedObject::createReferenceCounter(&t->AgReferencedObject, t);
    m_refCount = t->m_refCount;
    if ( !ReferenceCounter )
      AgReferenceCount::incRef(t->m_refCount);
    this->m_ref = m_refCount;
    this->m_ptr = t;
  }
}

void __fastcall AgPointer<AgUser>::~AgPointer<AgUser>(AgPointer<KOFApplication> *this)
{
  KOFApplication *m_ptr; // rdi
  AgReferenceCount *m_ref; // rbx
  int v3; // esi

  m_ptr = this->m_ptr;
  this->m_ptr = 0i64;
  m_ref = this->m_ref;
  if ( this->m_ref )
  {
    this->m_ref = 0i64;
    v3 = 0;
    if ( !AgAtomicDecrement(&m_ref->m_strongCount) )
    {
      if ( !AgAtomicDecrement(&m_ref->m_weakCount) )
        v3 = 1;
      m_ref->m_data = 0i64;
      if ( m_ptr )
        ((void (__fastcall *)(KOFApplication *, __int64))m_ptr->~AgIThreadHost)(m_ptr, 1i64);
      if ( v3 )
        AgReferenceCount::operator delete(m_ref);
    }
  }
}

// attributes: thunk
void __fastcall AgUtilities::captureScreenshot(AgString *filename)
{
  AgString::~AgString(filename);
}

void __fastcall CFile::~CFile(CFile *this, unsigned __int64 a2)
{
  char **fNameIndex; // rcx

  fNameIndex = this->fNameIndex;
  if ( fNameIndex )
  {
    operator delete(fNameIndex, a2);
    this->fNameIndex = 0i64;
  }
  AgPointer<AgUser>::~AgPointer<AgUser>((AgPointer<KOFApplication> *)this);
}

AgPointer<AgFile> *__fastcall AgPointer<AgAudioChannel>::operator=(AgPointer<AgFile> *this, AgPointer<AgFile> *rhs)
{
  AgReferenceCount *m_ref; // r9
  AgFile *m_ptr; // r8
  AgReferenceCount *v5; // rdx
  AgFile *v6; // rax
  AgPointer<KOFApplication> v8; // [rsp+20h] [rbp-18h] BYREF

  m_ref = rhs->m_ref;
  m_ptr = rhs->m_ptr;
  rhs->m_ref = 0i64;
  rhs->m_ptr = 0i64;
  v5 = this->m_ref;
  v6 = this->m_ptr;
  this->m_ref = m_ref;
  this->m_ptr = m_ptr;
  v8.m_ref = v5;
  v8.m_ptr = (KOFApplication *)v6;
  AgPointer<AgUser>::~AgPointer<AgUser>(&v8);
  return this;
}

AgPointer<AgController> *__fastcall AgPointer<AgThread>::operator=(AgPointer<AgController> *this, AgController *t)
{
  AgController *m_ptr; // rdi
  int ReferenceCounter; // eax
  AgReferenceCount *m_refCount; // rbx
  AgController *v6; // rax
  AgPointer<KOFApplication> v8; // [rsp+20h] [rbp-18h] BYREF

  m_ptr = t;
  v8 = 0i64;
  if ( t )
  {
    ReferenceCounter = AgReferencedObject::createReferenceCounter(&t->AgReferencedObject, t);
    m_refCount = m_ptr->m_refCount;
    if ( !ReferenceCounter )
      AgReferenceCount::incRef(m_ptr->m_refCount);
  }
  else
  {
    m_ptr = (AgController *)v8.m_ptr;
    m_refCount = v8.m_ref;
  }
  v6 = this->m_ptr;
  v8.m_ref = this->m_ref;
  this->m_ref = m_refCount;
  this->m_ptr = m_ptr;
  v8.m_ptr = (KOFApplication *)v6;
  AgPointer<AgUser>::~AgPointer<AgUser>(&v8);
  return this;
}

std::string *__fastcall std::string::assign(std::string *this, std::string *_Right)
{
  unsigned __int64 Myres; // rax
  char *Ptr; // rcx
  char *v6; // rax
  unsigned __int64 v7; // rcx
  std::string *v8; // rax

  if ( this != _Right )
  {
    Myres = this->_Mypair._Myval2._Myres;
    if ( Myres >= 0x10 )
    {
      Ptr = this->_Mypair._Myval2._Bx._Ptr;
      if ( Myres + 1 >= 0x1000 )
      {
        if ( ((unsigned __int8)Ptr & 0x1F) != 0 )
          invalid_parameter_noinfo_noreturn();
        v6 = (char *)*((_QWORD *)Ptr - 1);
        if ( v6 >= Ptr )
          invalid_parameter_noinfo_noreturn();
        v7 = Ptr - v6;
        if ( v7 < 8 )
          invalid_parameter_noinfo_noreturn();
        if ( v7 > 0x27 )
          invalid_parameter_noinfo_noreturn();
        Ptr = v6;
      }
      operator delete(Ptr);
    }
    this->_Mypair._Myval2._Myres = 15i64;
    this->_Mypair._Myval2._Mysize = 0i64;
    if ( this->_Mypair._Myval2._Myres < 0x10 )
      v8 = this;
    else
      v8 = (std::string *)this->_Mypair._Myval2._Bx._Ptr;
    v8->_Mypair._Myval2._Bx._Buf[0] = 0;
    std::string::_Assign_rv(this, _Right);
  }
  return this;
}

__int64 __fastcall CFile::ResourceDataLoaderNew(
        const char *aFileName,
        int searchType,
        int seek,
        int size,
        unsigned __int8 **buf)
{
  unsigned __int64 v6; // rdx
  AgFile *m_ptr; // rdi
  int v8; // eax
  unsigned int v9; // esi
  AgReferenceCount *v10; // rax
  AgReferenceCount *m_ref; // rax
  AgPointer<KOFApplication> v13; // [rsp+28h] [rbp-70h] BYREF
  CFile v14; // [rsp+40h] [rbp-58h] BYREF

  memset(&v14.pFileName, 0, 28);
  memset(&v14, 0, 28);
  v13 = 0i64;
  AgPointer<AgUser>::~AgPointer<AgUser>(&v13);
  if ( CFile::copen(&v14, aFileName, 0, 1) )
  {
    m_ptr = v14.m_file.m_ptr;
    if ( v14.m_file.m_ptr )
    {
      v8 = v14.m_file.m_ptr->getSize(v14.m_file.m_ptr);
      v9 = v8;
      if ( v8 > 0 )
      {
        *buf = (unsigned __int8 *)operator new[](v8);
        m_ptr->setPosition(m_ptr, 0i64);
        v14.m_iSeekPos = 0;
        m_ptr->read(m_ptr, *buf, v9);
        m_ref = v14.m_file.m_ref;
        v14.m_file = 0i64;
        v13.m_ref = m_ref;
        v13.m_ptr = (KOFApplication *)m_ptr;
        AgPointer<AgUser>::~AgPointer<AgUser>(&v13);
        *(_QWORD *)&v14.m_iSeekPos = 0i64;
        goto LABEL_8;
      }
      v10 = v14.m_file.m_ref;
      v14.m_file = 0i64;
      v13.m_ref = v10;
      v13.m_ptr = (KOFApplication *)m_ptr;
      AgPointer<AgUser>::~AgPointer<AgUser>(&v13);
    }
    *(_QWORD *)&v14.m_iSeekPos = 0i64;
  }
  v9 = 0;
LABEL_8:
  if ( v14.fNameIndex )
  {
    operator delete(v14.fNameIndex, v6);
    v14.fNameIndex = 0i64;
  }
  AgPointer<AgUser>::~AgPointer<AgUser>((AgPointer<KOFApplication> *)&v14);
  return v9;
}

bool __fastcall CFile::_readOpenLocal(CFile *this, const char *pFileName)
{
  AgPointer<AgFile> *v3; // rax
  AgReferenceCount *m_ref; // r8
  AgFile *m_ptr; // rdx
  AgReferenceCount *v6; // rcx
  AgFile *v7; // rax
  AgFile *v8; // rcx
  AgReferenceCount *v9; // rax
  AgString v11; // [rsp+28h] [rbp-40h] BYREF
  AgPointer<KOFApplication> v12; // [rsp+38h] [rbp-30h] BYREF
  AgPointer<AgFile> result; // [rsp+48h] [rbp-20h] BYREF

  AgString::AgString(&v11, pFileName, -1);
  AgPath::clean((AgPath *)&v11);
  v3 = AgFile::open(&result, (const AgPath *)&v11, 1u, 1);
  m_ref = v3->m_ref;
  m_ptr = v3->m_ptr;
  v3->m_ref = 0i64;
  v3->m_ptr = 0i64;
  v6 = this->m_file.m_ref;
  v7 = this->m_file.m_ptr;
  this->m_file.m_ref = m_ref;
  this->m_file.m_ptr = m_ptr;
  v12.m_ref = v6;
  v12.m_ptr = (KOFApplication *)v7;
  AgPointer<AgUser>::~AgPointer<AgUser>(&v12);
  AgPointer<AgUser>::~AgPointer<AgUser>((AgPointer<KOFApplication> *)&result);
  AgString::~AgString(&v11);
  v8 = this->m_file.m_ptr;
  if ( v8 && !v8->m_open )
  {
    v9 = this->m_file.m_ref;
    this->m_file.m_ref = 0i64;
    this->m_file.m_ptr = 0i64;
    v12.m_ref = v9;
    v12.m_ptr = (KOFApplication *)v8;
    AgPointer<AgUser>::~AgPointer<AgUser>(&v12);
  }
  return this->m_file.m_ptr != 0i64;
}

bool __fastcall CFile::_readOpenSDCard(CFile *this, const char *pFileName)
{
  AgPointer<AgFile> *v3; // rax
  AgReferenceCount *m_ref; // r8
  AgFile *m_ptr; // rdx
  AgReferenceCount *v6; // rcx
  AgFile *v7; // rax
  AgFile *v8; // rcx
  AgReferenceCount *v9; // rax
  AgString v11; // [rsp+28h] [rbp-40h] BYREF
  AgPointer<KOFApplication> v12; // [rsp+38h] [rbp-30h] BYREF
  AgPointer<AgFile> result; // [rsp+48h] [rbp-20h] BYREF

  AgString::AgString(&v11, pFileName, -1);
  AgPath::clean((AgPath *)&v11);
  v3 = AgFile::open(&result, (const AgPath *)&v11, 1u, 1);
  m_ref = v3->m_ref;
  m_ptr = v3->m_ptr;
  v3->m_ref = 0i64;
  v3->m_ptr = 0i64;
  v6 = this->m_file.m_ref;
  v7 = this->m_file.m_ptr;
  this->m_file.m_ref = m_ref;
  this->m_file.m_ptr = m_ptr;
  v12.m_ref = v6;
  v12.m_ptr = (KOFApplication *)v7;
  AgPointer<AgUser>::~AgPointer<AgUser>(&v12);
  AgPointer<AgUser>::~AgPointer<AgUser>((AgPointer<KOFApplication> *)&result);
  AgString::~AgString(&v11);
  v8 = this->m_file.m_ptr;
  if ( !v8->m_open )
  {
    v9 = this->m_file.m_ref;
    this->m_file.m_ref = 0i64;
    this->m_file.m_ptr = 0i64;
    v12.m_ref = v9;
    v12.m_ptr = (KOFApplication *)v8;
    AgPointer<AgUser>::~AgPointer<AgUser>(&v12);
  }
  return this->m_file.m_ptr != 0i64;
}

bool __fastcall CFile::_writeOpenSDCard(CFile *this, const char *pFileName)
{
  AgPointer<AgFile> *v3; // rax
  AgReferenceCount *m_ref; // r8
  AgFile *m_ptr; // rdx
  AgReferenceCount *v6; // rcx
  AgFile *v7; // rax
  AgFile *v8; // rcx
  AgReferenceCount *v9; // rax
  AgString v11; // [rsp+28h] [rbp-40h] BYREF
  AgPointer<KOFApplication> v12; // [rsp+38h] [rbp-30h] BYREF
  AgPointer<AgFile> result; // [rsp+48h] [rbp-20h] BYREF

  AgString::AgString(&v11, pFileName, -1);
  AgPath::clean((AgPath *)&v11);
  v3 = AgFile::open(&result, (const AgPath *)&v11, 2u, 1);
  m_ref = v3->m_ref;
  m_ptr = v3->m_ptr;
  v3->m_ref = 0i64;
  v3->m_ptr = 0i64;
  v6 = this->m_file.m_ref;
  v7 = this->m_file.m_ptr;
  this->m_file.m_ref = m_ref;
  this->m_file.m_ptr = m_ptr;
  v12.m_ref = v6;
  v12.m_ptr = (KOFApplication *)v7;
  AgPointer<AgUser>::~AgPointer<AgUser>(&v12);
  AgPointer<AgUser>::~AgPointer<AgUser>((AgPointer<KOFApplication> *)&result);
  AgString::~AgString(&v11);
  v8 = this->m_file.m_ptr;
  if ( !v8->m_open )
  {
    v9 = this->m_file.m_ref;
    this->m_file.m_ref = 0i64;
    this->m_file.m_ptr = 0i64;
    v12.m_ref = v9;
    v12.m_ptr = (KOFApplication *)v8;
    AgPointer<AgUser>::~AgPointer<AgUser>(&v12);
  }
  return this->m_file.m_ptr != 0i64;
}

std::string *__fastcall std::string::append(
        std::string *this,
        const std::string *_Right,
        unsigned __int64 _Roff,
        unsigned __int64 _Count)
{
  unsigned __int64 Mysize; // rax
  unsigned __int64 v5; // rsi
  const std::string *Ptr; // r14
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rdi
  std::string *v12; // rcx
  bool v13; // cf
  std::string *v14; // rax

  Mysize = _Right->_Mypair._Myval2._Mysize;
  v5 = _Count;
  Ptr = _Right;
  if ( Mysize < _Roff )
    std::_Xout_of_range("invalid string position");
  v9 = Mysize - _Roff;
  v10 = this->_Mypair._Myval2._Mysize;
  if ( _Count > v9 )
    v5 = v9;
  if ( ~v10 <= v5 )
    std::_Xlength_error("string too long");
  v11 = v10 + v5;
  if ( v5 )
  {
    if ( v11 == -1i64 )
      std::_Xlength_error("string too long");
    if ( this->_Mypair._Myval2._Myres >= v11 )
    {
      if ( !v11 )
      {
        this->_Mypair._Myval2._Mysize = 0i64;
        if ( this->_Mypair._Myval2._Myres < 0x10 )
          this->_Mypair._Myval2._Bx._Buf[0] = 0;
        else
          *this->_Mypair._Myval2._Bx._Ptr = 0;
        return this;
      }
    }
    else
    {
      std::string::_Copy(this, v10 + v5, v10);
      if ( !v11 )
        return this;
    }
    if ( Ptr->_Mypair._Myval2._Myres >= 0x10 )
      Ptr = (const std::string *)Ptr->_Mypair._Myval2._Bx._Ptr;
    if ( this->_Mypair._Myval2._Myres < 0x10 )
      v12 = this;
    else
      v12 = (std::string *)this->_Mypair._Myval2._Bx._Ptr;
    memmove(&v12->_Mypair._Myval2._Bx._Buf[this->_Mypair._Myval2._Mysize], &Ptr->_Mypair._Myval2._Bx._Buf[_Roff], v5);
    v13 = this->_Mypair._Myval2._Myres < 0x10;
    this->_Mypair._Myval2._Mysize = v11;
    if ( v13 )
      v14 = this;
    else
      v14 = (std::string *)this->_Mypair._Myval2._Bx._Ptr;
    v14->_Mypair._Myval2._Bx._Buf[v11] = 0;
  }
  return this;
}

std::string *__fastcall std::string::append(std::string *this, const char *_Ptr, unsigned __int64 _Count)
{
  std::string *v5; // rbx
  unsigned __int64 Myres; // r9
  std::string *v7; // rax
  std::string *v8; // rax
  unsigned __int64 Mysize; // r8
  unsigned __int64 v11; // rdi
  std::string *Ptr; // rcx
  bool v13; // cf
  std::string *v14; // rax

  v5 = this;
  if ( !_Ptr )
    goto LABEL_13;
  Myres = this->_Mypair._Myval2._Myres;
  v7 = Myres < 0x10 ? this : (std::string *)this->_Mypair._Myval2._Bx._Ptr;
  if ( _Ptr < (const char *)v7 )
    goto LABEL_13;
  if ( Myres >= 0x10 )
    this = (std::string *)this->_Mypair._Myval2._Bx._Ptr;
  if ( (char *)this + v5->_Mypair._Myval2._Mysize <= _Ptr )
  {
LABEL_13:
    Mysize = v5->_Mypair._Myval2._Mysize;
    if ( ~Mysize <= _Count )
      std::_Xlength_error("string too long");
    v11 = Mysize + _Count;
    if ( !_Count )
      return v5;
    if ( v11 == -1i64 )
      std::_Xlength_error("string too long");
    if ( v5->_Mypair._Myval2._Myres >= v11 )
    {
      if ( v11 )
        goto LABEL_18;
      v5->_Mypair._Myval2._Mysize = 0i64;
      if ( v5->_Mypair._Myval2._Myres < 0x10 )
        v5->_Mypair._Myval2._Bx._Buf[0] = 0;
      else
        *v5->_Mypair._Myval2._Bx._Ptr = 0;
    }
    else
    {
      std::string::_Copy(v5, Mysize + _Count, Mysize);
      if ( v11 )
      {
LABEL_18:
        if ( v5->_Mypair._Myval2._Myres < 0x10 )
          Ptr = v5;
        else
          Ptr = (std::string *)v5->_Mypair._Myval2._Bx._Ptr;
        memmove(&Ptr->_Mypair._Myval2._Bx._Buf[v5->_Mypair._Myval2._Mysize], _Ptr, _Count);
        v13 = v5->_Mypair._Myval2._Myres < 0x10;
        v5->_Mypair._Myval2._Mysize = v11;
        if ( v13 )
          v14 = v5;
        else
          v14 = (std::string *)v5->_Mypair._Myval2._Bx._Ptr;
        v14->_Mypair._Myval2._Bx._Buf[v11] = 0;
      }
    }
    return v5;
  }
  if ( Myres < 0x10 )
    v8 = v5;
  else
    v8 = (std::string *)v5->_Mypair._Myval2._Bx._Ptr;
  return std::string::append(v5, v5, _Ptr - (const char *)v8, _Count);
}

__int64 __fastcall CFile::copen(CFile *this, const char *_pFileName, int fileLoc, int aFileMode)
{
  int v4; // er15
  __int64 v5; // r14
  int v7; // er12
  unsigned __int64 v8; // r8
  std::string *Ptr; // rax
  unsigned __int64 *p_Mysize; // rsi
  unsigned __int64 v11; // rsi
  size_t v12; // r8
  int v13; // ebx
  char *v14; // rcx
  char *v15; // rax
  std::string *v16; // rax
  std::string *v17; // rax
  char *v18; // rcx
  char *v19; // rax
  char *v20; // rcx
  char *v21; // rax
  std::string *v22; // rcx
  std::string *v23; // rax
  std::string *v24; // rax
  char *v25; // rcx
  char *v26; // rax
  char *v27; // rcx
  char *v28; // rax
  std::string *v29; // rsi
  unsigned __int8 v30; // bl
  AgFile *m_ptr; // rcx
  AgReferenceCount *m_ref; // rax
  __int64 v33; // r13
  __int64 v34; // r15
  const int *v35; // r14
  bool OpenSDCard; // al
  __int64 v37; // r15
  const int *v38; // r14
  AgMount *v39; // rbx
  bool OpenLocal; // al
  AgMount *v41; // rbx
  char *v42; // rcx
  AgPointer<KOFApplication> v45; // [rsp+28h] [rbp-D8h] BYREF
  AgString v46; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v47; // [rsp+48h] [rbp-B8h]
  std::string v48; // [rsp+50h] [rbp-B0h] BYREF
  std::string result; // [rsp+70h] [rbp-90h] BYREF
  std::string v50; // [rsp+90h] [rbp-70h] BYREF
  char _Buffer[256]; // [rsp+B0h] [rbp-50h] BYREF

  v47 = -2i64;
  v4 = aFileMode;
  v5 = fileLoc;
  v48._Mypair._Myval2._Myres = 15i64;
  v7 = 0;
  v48._Mypair._Myval2._Mysize = 0i64;
  v48._Mypair._Myval2._Bx._Buf[0] = 0;
  if ( *_pFileName )
  {
    v8 = -1i64;
    do
      ++v8;
    while ( _pFileName[v8] );
  }
  else
  {
    v8 = 0i64;
  }
  std::string::assign(&v48, _pFileName, v8);
  Ptr = std::string::substr(&v48, &result, v48._Mypair._Myval2._Mysize - 3, 0xFFFFFFFFFFFFFFFFui64);
  p_Mysize = &Ptr->_Mypair._Myval2._Mysize;
  if ( Ptr->_Mypair._Myval2._Myres >= 0x10 )
    Ptr = (std::string *)Ptr->_Mypair._Myval2._Bx._Ptr;
  v11 = *p_Mysize;
  v12 = 3i64;
  if ( v11 < 3 )
    v12 = v11;
  if ( !v12 || (v13 = memcmp(Ptr, "obm", v12)) == 0 )
  {
    if ( v11 >= 3 )
      v13 = v11 > 3;
    else
      v13 = -1;
  }
  if ( result._Mypair._Myval2._Myres >= 0x10 )
  {
    v14 = result._Mypair._Myval2._Bx._Ptr;
    if ( result._Mypair._Myval2._Myres + 1 >= 0x1000 )
    {
      if ( (result._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
        invalid_parameter_noinfo_noreturn();
      v15 = (char *)*((_QWORD *)result._Mypair._Myval2._Bx._Ptr - 1);
      if ( v15 >= result._Mypair._Myval2._Bx._Ptr )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(result._Mypair._Myval2._Bx._Ptr - v15) < (char *)8 )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(result._Mypair._Myval2._Bx._Ptr - v15) > (char *)0x27 )
        invalid_parameter_noinfo_noreturn();
      v14 = (char *)*((_QWORD *)result._Mypair._Myval2._Bx._Ptr - 1);
    }
    operator delete(v14);
  }
  if ( !v13 )
  {
    v16 = std::string::substr(&v48, &v50, 0i64, v48._Mypair._Myval2._Mysize - 3);
    v17 = std::operator+<char>(&result, v16, "dds");
    std::string::assign(&v48, v17);
    if ( result._Mypair._Myval2._Myres >= 0x10 )
    {
      v18 = result._Mypair._Myval2._Bx._Ptr;
      if ( result._Mypair._Myval2._Myres + 1 >= 0x1000 )
      {
        if ( (result._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
          invalid_parameter_noinfo_noreturn();
        v19 = (char *)*((_QWORD *)result._Mypair._Myval2._Bx._Ptr - 1);
        if ( v19 >= result._Mypair._Myval2._Bx._Ptr )
          invalid_parameter_noinfo_noreturn();
        if ( (char *)(result._Mypair._Myval2._Bx._Ptr - v19) < (char *)8 )
          invalid_parameter_noinfo_noreturn();
        if ( (char *)(result._Mypair._Myval2._Bx._Ptr - v19) > (char *)0x27 )
          invalid_parameter_noinfo_noreturn();
        v18 = (char *)*((_QWORD *)result._Mypair._Myval2._Bx._Ptr - 1);
      }
      operator delete(v18);
    }
    result._Mypair._Myval2._Myres = 15i64;
    result._Mypair._Myval2._Mysize = 0i64;
    result._Mypair._Myval2._Bx._Buf[0] = 0;
    if ( v50._Mypair._Myval2._Myres >= 0x10 )
    {
      v20 = v50._Mypair._Myval2._Bx._Ptr;
      if ( v50._Mypair._Myval2._Myres + 1 >= 0x1000 )
      {
        if ( (v50._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
          invalid_parameter_noinfo_noreturn();
        v21 = (char *)*((_QWORD *)v50._Mypair._Myval2._Bx._Ptr - 1);
        if ( v21 >= v50._Mypair._Myval2._Bx._Ptr )
          invalid_parameter_noinfo_noreturn();
        if ( (char *)(v50._Mypair._Myval2._Bx._Ptr - v21) < (char *)8 )
          invalid_parameter_noinfo_noreturn();
        if ( (char *)(v50._Mypair._Myval2._Bx._Ptr - v21) > (char *)0x27 )
          invalid_parameter_noinfo_noreturn();
        v20 = (char *)*((_QWORD *)v50._Mypair._Myval2._Bx._Ptr - 1);
      }
      operator delete(v20);
    }
    v22 = &v48;
    if ( v48._Mypair._Myval2._Myres >= 0x10 )
      v22 = (std::string *)v48._Mypair._Myval2._Bx._Ptr;
    if ( !CFile::exists(v22->_Mypair._Myval2._Bx._Buf) )
    {
      v23 = std::string::substr(&v48, &v50, 0i64, v48._Mypair._Myval2._Mysize - 3);
      v24 = std::operator+<char>(&result, v23, "png");
      std::string::assign(&v48, v24);
      if ( result._Mypair._Myval2._Myres >= 0x10 )
      {
        v25 = result._Mypair._Myval2._Bx._Ptr;
        if ( result._Mypair._Myval2._Myres + 1 >= 0x1000 )
        {
          if ( (result._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
            invalid_parameter_noinfo_noreturn();
          v26 = (char *)*((_QWORD *)result._Mypair._Myval2._Bx._Ptr - 1);
          if ( v26 >= result._Mypair._Myval2._Bx._Ptr )
            invalid_parameter_noinfo_noreturn();
          if ( (char *)(result._Mypair._Myval2._Bx._Ptr - v26) < (char *)8 )
            invalid_parameter_noinfo_noreturn();
          if ( (char *)(result._Mypair._Myval2._Bx._Ptr - v26) > (char *)0x27 )
            invalid_parameter_noinfo_noreturn();
          v25 = (char *)*((_QWORD *)result._Mypair._Myval2._Bx._Ptr - 1);
        }
        operator delete(v25);
      }
      result._Mypair._Myval2._Myres = 15i64;
      result._Mypair._Myval2._Mysize = 0i64;
      result._Mypair._Myval2._Bx._Buf[0] = 0;
      if ( v50._Mypair._Myval2._Myres >= 0x10 )
      {
        v27 = v50._Mypair._Myval2._Bx._Ptr;
        if ( v50._Mypair._Myval2._Myres + 1 >= 0x1000 )
        {
          if ( (v50._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
            invalid_parameter_noinfo_noreturn();
          v28 = (char *)*((_QWORD *)v50._Mypair._Myval2._Bx._Ptr - 1);
          if ( v28 >= v50._Mypair._Myval2._Bx._Ptr )
            invalid_parameter_noinfo_noreturn();
          if ( (char *)(v50._Mypair._Myval2._Bx._Ptr - v28) < (char *)8 )
            invalid_parameter_noinfo_noreturn();
          if ( (char *)(v50._Mypair._Myval2._Bx._Ptr - v28) > (char *)0x27 )
            invalid_parameter_noinfo_noreturn();
          v27 = (char *)*((_QWORD *)v50._Mypair._Myval2._Bx._Ptr - 1);
        }
        operator delete(v27);
      }
    }
  }
  v29 = &v48;
  if ( v48._Mypair._Myval2._Myres >= 0x10 )
    v29 = (std::string *)v48._Mypair._Myval2._Bx._Ptr;
  v30 = 0;
  m_ptr = this->m_file.m_ptr;
  if ( m_ptr )
  {
    m_ref = this->m_file.m_ref;
    this->m_file.m_ref = 0i64;
    this->m_file.m_ptr = 0i64;
    v45.m_ref = m_ref;
    v45.m_ptr = (KOFApplication *)m_ptr;
    AgPointer<AgUser>::~AgPointer<AgUser>(&v45);
  }
  *(_QWORD *)&this->m_iSeekPos = 0i64;
  if ( ((v4 - 1) & 0xFFFFFFFB) == 0 )
  {
    if ( (int)v5 < 0 )
    {
      if ( (_DWORD)v5 == -3 )
      {
        OpenSDCard = CFile::_readOpenSDCard(this, v29->_Mypair._Myval2._Bx._Buf);
      }
      else
      {
        if ( (_DWORD)v5 != -2 )
          goto LABEL_117;
        AgString::AgString((AgString *)&v50, "archive", -1);
        v41 = AgFileSystem::getMount(
                (AgFileSystem *)AgSingleton<AgFileSystem>::ms_instance,
                (AgPointer<AgMount> *)&result,
                (const AgString *)&v50)->m_ptr;
        AgPointer<AgUser>::~AgPointer<AgUser>((AgPointer<KOFApplication> *)&result);
        AgString::~AgString((AgString *)&v50);
        if ( v41 )
        {
          sprintf(_Buffer, "archive:%s", v29->_Mypair._Myval2._Bx._Buf);
          OpenSDCard = CFile::_readOpenLocal(this, _Buffer);
        }
        else
        {
          OpenSDCard = CFile::_readOpenLocal(this, v29->_Mypair._Myval2._Bx._Buf);
        }
      }
      goto LABEL_114;
    }
    v33 = v5;
    v37 = 0i64;
    v38 = ciFileSearchOrder[v5];
    while ( *v38 != -3 )
    {
      if ( *v38 == -2 )
      {
        AgString::AgString((AgString *)&v50, "archive", -1);
        v39 = AgFileSystem::getMount(
                (AgFileSystem *)AgSingleton<AgFileSystem>::ms_instance,
                (AgPointer<AgMount> *)&result,
                (const AgString *)&v50)->m_ptr;
        AgPointer<AgUser>::~AgPointer<AgUser>((AgPointer<KOFApplication> *)&result);
        AgString::~AgString((AgString *)&v50);
        if ( v39 )
        {
          sprintf(_Buffer, "archive:%s", v29->_Mypair._Myval2._Bx._Buf);
          if ( aFileMode == 1 )
          {
            OpenLocal = CFile::_readOpenLocal(this, _Buffer);
            goto LABEL_103;
          }
          AgString::AgString(&v46, _Buffer, -1);
          AgPath::clean((AgPath *)&v46);
          v30 = AgFile::exists((const AgPath *)&v46);
          AgString::~AgString(&v46);
LABEL_104:
          if ( v30 )
            goto LABEL_107;
          goto LABEL_105;
        }
        if ( aFileMode != 1 )
        {
          AgString::AgString((AgString *)&v45, v29->_Mypair._Myval2._Bx._Buf, -1);
          AgPath::clean((AgPath *)&v45);
          v30 = AgFile::exists((const AgPath *)&v45);
          AgString::~AgString((AgString *)&v45);
          goto LABEL_104;
        }
        OpenLocal = CFile::_readOpenLocal(this, v29->_Mypair._Myval2._Bx._Buf);
LABEL_103:
        v30 = OpenLocal;
        goto LABEL_104;
      }
LABEL_105:
      ++v7;
      ++v37;
      ++v38;
      if ( v37 >= 3 )
        goto LABEL_117;
    }
    OpenLocal = CFile::_readOpenSDCard(this, v29->_Mypair._Myval2._Bx._Buf);
    goto LABEL_103;
  }
  if ( (int)v5 >= 0 )
  {
    v33 = v5;
    v34 = 0i64;
    v35 = ciFileSearchOrder[v5];
    while ( 1 )
    {
      if ( *v35 == -3 )
      {
        v30 = CFile::_writeOpenSDCard(this, v29->_Mypair._Myval2._Bx._Buf);
        if ( v30 )
          break;
      }
      ++v7;
      ++v34;
      ++v35;
      if ( v34 >= 3 )
        goto LABEL_117;
    }
LABEL_107:
    LODWORD(v5) = ciFileSearchOrder[v33][v7];
    v4 = aFileMode;
    goto LABEL_115;
  }
  if ( (_DWORD)v5 != -3 )
    goto LABEL_117;
  OpenSDCard = CFile::_writeOpenSDCard(this, v29->_Mypair._Myval2._Bx._Buf);
LABEL_114:
  v30 = OpenSDCard;
LABEL_115:
  if ( v30 )
  {
    this->m_iFileLocation = v5;
    this->m_iFileMode = v4;
    this->m_iSeekPos = 0;
  }
LABEL_117:
  if ( v48._Mypair._Myval2._Myres >= 0x10 )
  {
    v42 = v48._Mypair._Myval2._Bx._Ptr;
    if ( v48._Mypair._Myval2._Myres + 1 >= 0x1000 )
    {
      if ( (v48._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
        invalid_parameter_noinfo_noreturn();
      v42 = (char *)*((_QWORD *)v48._Mypair._Myval2._Bx._Ptr - 1);
      if ( v42 >= v48._Mypair._Myval2._Bx._Ptr )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(v48._Mypair._Myval2._Bx._Ptr - v42) < (char *)8 )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(v48._Mypair._Myval2._Bx._Ptr - v42) > (char *)0x27 )
        invalid_parameter_noinfo_noreturn();
    }
    operator delete(v42);
  }
  return v30;
}

void __fastcall CFile::decrypt(unsigned __int8 *pDst, int offset, int size, const char *mask)
{
  int v4; // er9
  __int64 v5; // r10
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // rcx
  char v10; // al
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rax

  v4 = 0;
  v5 = size;
  if ( size > 0 )
  {
    v7 = -1i64;
    do
      ++v7;
    while ( a3t1ii2sm9krxow[v7] );
    v8 = (int)v7;
    v9 = 0i64;
    do
    {
      v10 = a3t1ii2sm9krxow[v9];
      v11 = v9 + 1;
      *pDst++ ^= v10;
      v12 = v4 + 1;
      v4 = 0;
      if ( v11 < v8 )
        v4 = v12;
      v13 = 0i64;
      if ( v11 < v8 )
        v13 = v11;
      v9 = v13;
      --v5;
    }
    while ( v5 );
  }
}

__int64 __fastcall CFile::exists(const char *aFileName)
{
  unsigned __int64 v2; // rdx
  unsigned __int8 v3; // bl
  AgFile *m_ptr; // rcx
  AgReferenceCount *m_ref; // rax
  AgPointer<KOFApplication> v7; // [rsp+28h] [rbp-70h] BYREF
  CFile v8; // [rsp+40h] [rbp-58h] BYREF

  memset(&v8.pFileName, 0, 28);
  memset(&v8, 0, 28);
  v7 = 0i64;
  AgPointer<AgUser>::~AgPointer<AgUser>(&v7);
  if ( (unsigned __int8)CFile::copen(&v8, aFileName, 0, 5) )
  {
    m_ptr = v8.m_file.m_ptr;
    if ( v8.m_file.m_ptr )
    {
      m_ref = v8.m_file.m_ref;
      v8.m_file = 0i64;
      v7.m_ref = m_ref;
      v7.m_ptr = (KOFApplication *)m_ptr;
      AgPointer<AgUser>::~AgPointer<AgUser>(&v7);
    }
    *(_QWORD *)&v8.m_iSeekPos = 0i64;
    v3 = 1;
  }
  else
  {
    v3 = 0;
  }
  if ( v8.fNameIndex )
  {
    operator delete(v8.fNameIndex, v2);
    v8.fNameIndex = 0i64;
  }
  AgPointer<AgUser>::~AgPointer<AgUser>((AgPointer<KOFApplication> *)&v8);
  return v3;
}

__int64 __fastcall CFile::loadDataFixKeep(const char *aFileName, CFixMemoryPara *pPara, int searchType)
{
  unsigned __int64 v5; // rdx
  AgFile *m_ptr; // rdi
  unsigned int v7; // esi
  char **fNameIndex; // rbx
  void *v9; // rbx
  unsigned __int64 v10; // rdx
  AgReferenceCount *m_ref; // rax
  AgPointer<KOFApplication> v13; // [rsp+30h] [rbp-21h] BYREF
  CFile v14; // [rsp+48h] [rbp-9h] BYREF

  memset(&v14.pFileName, 0, 28);
  memset(&v14, 0, 28);
  v13 = 0i64;
  AgPointer<AgUser>::~AgPointer<AgUser>(&v13);
  if ( !(unsigned __int8)CFile::copen(&v14, aFileName, 0, 1) )
  {
    v14.m_iSeek = 0;
LABEL_6:
    v7 = 0;
    fNameIndex = v14.fNameIndex;
    goto LABEL_10;
  }
  m_ptr = v14.m_file.m_ptr;
  if ( !v14.m_file.m_ptr )
  {
    v14.m_iSeek = 0;
    goto LABEL_6;
  }
  v7 = v14.m_file.m_ptr->getSize(v14.m_file.m_ptr);
  v14.m_iSeek = 0;
  if ( (int)v7 <= 0 )
    goto LABEL_6;
  CFixMemory::GetInstance();
  v9 = operator new[](v7);
  pPara->pData = v9;
  m_ptr->setPosition(m_ptr, 0i64);
  v14.m_iSeekPos = 0;
  m_ptr->read(m_ptr, (unsigned __int8 *)v9, v7);
  v14.m_iSeek = v7;
  fNameIndex = v14.fNameIndex;
  if ( v14.fNameIndex )
  {
    operator delete(v14.fNameIndex, v10);
    fNameIndex = 0i64;
    v14.fNameIndex = 0i64;
  }
  m_ref = v14.m_file.m_ref;
  v14.m_file = 0i64;
  v13.m_ref = m_ref;
  v13.m_ptr = (KOFApplication *)m_ptr;
  AgPointer<AgUser>::~AgPointer<AgUser>(&v13);
  *(_QWORD *)&v14.m_iSeekPos = 0i64;
LABEL_10:
  if ( fNameIndex )
  {
    operator delete(fNameIndex, v5);
    v14.fNameIndex = 0i64;
  }
  AgPointer<AgUser>::~AgPointer<AgUser>((AgPointer<KOFApplication> *)&v14);
  return v7;
}

std::string *__fastcall std::string::replace(
        std::string *this,
        unsigned __int64 _Off,
        unsigned __int64 _N0,
        const std::string *_Right,
        unsigned __int64 _Roff,
        unsigned __int64 _Count)
{
  const std::string *v7; // rsi
  unsigned __int64 Mysize; // r8
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rcx
  size_t v15; // r15
  unsigned __int64 v16; // r13
  std::string *Ptr; // rax
  std::string *v18; // rax
  char *v19; // rdx
  size_t v20; // r8
  char *v21; // rcx
  unsigned __int64 v22; // rax
  std::string *v23; // rcx
  std::string *v24; // rax
  std::string *v25; // rax
  unsigned __int64 v26; // rax
  std::string *v27; // rcx
  std::string *v28; // rax
  unsigned __int64 v29; // rax
  std::string *v30; // rcx
  std::string *v31; // rax
  unsigned __int64 v32; // rax
  std::string *v33; // rcx
  std::string *v34; // rax
  unsigned __int64 v35; // rax
  std::string *v36; // rcx
  std::string *v37; // rax
  unsigned __int64 Myres; // rax
  std::string *v39; // rcx
  std::string *v40; // rax
  unsigned __int64 v41; // rax
  std::string *v42; // rdx
  std::string *v43; // rax
  std::string *v44; // rcx
  std::string *v45; // rax
  unsigned __int64 v46; // rax
  std::string *v47; // rcx
  std::string *v48; // rax
  unsigned __int64 v49; // rax
  std::string *v50; // rcx
  std::string *v51; // rax
  bool v52; // cf
  std::string *v53; // rax

  v7 = _Right;
  Mysize = this->_Mypair._Myval2._Mysize;
  if ( Mysize < _Off )
    std::_Xout_of_range("invalid string position");
  v11 = _Right->_Mypair._Myval2._Mysize;
  if ( v11 < _Roff )
    std::_Xout_of_range("invalid string position");
  v12 = _Count;
  if ( _N0 > Mysize - _Off )
    _N0 = Mysize - _Off;
  v13 = v11 - _Roff;
  if ( _Count > v13 )
    v12 = v13;
  v14 = Mysize - _N0;
  if ( ~v12 <= Mysize - _N0 )
    std::_Xlength_error("string too long");
  v15 = Mysize - _Off - _N0;
  v16 = v14 + v12;
  if ( Mysize < v14 + v12 )
  {
    if ( v16 == -1i64 )
      std::_Xlength_error("string too long");
    if ( this->_Mypair._Myval2._Myres >= v16 )
    {
      if ( !v16 )
      {
        this->_Mypair._Myval2._Mysize = 0i64;
        if ( this->_Mypair._Myval2._Myres < 0x10 )
          Ptr = this;
        else
          Ptr = (std::string *)this->_Mypair._Myval2._Bx._Ptr;
        Ptr->_Mypair._Myval2._Bx._Buf[0] = 0;
      }
    }
    else
    {
      std::string::_Copy(this, v14 + v12, Mysize);
    }
  }
  if ( v12 == _N0 )
  {
    if ( v7->_Mypair._Myval2._Myres >= 0x10 )
      v7 = (const std::string *)v7->_Mypair._Myval2._Bx._Ptr;
    if ( this->_Mypair._Myval2._Myres < 0x10 )
      v18 = this;
    else
      v18 = (std::string *)this->_Mypair._Myval2._Bx._Ptr;
    if ( v12 )
    {
      v19 = &v7->_Mypair._Myval2._Bx._Buf[_Roff];
      v20 = v12;
      v21 = &v18->_Mypair._Myval2._Bx._Buf[_Off];
LABEL_116:
      memmove(v21, v19, v20);
    }
  }
  else if ( this == v7 )
  {
    if ( v12 >= _N0 )
    {
      if ( _Roff > _Off )
      {
        Myres = this->_Mypair._Myval2._Myres;
        if ( _Off + _N0 > _Roff )
        {
          if ( Myres < 0x10 )
            v44 = this;
          else
            v44 = (std::string *)this->_Mypair._Myval2._Bx._Ptr;
          if ( Myres < 0x10 )
            v45 = this;
          else
            v45 = (std::string *)this->_Mypair._Myval2._Bx._Ptr;
          if ( _N0 )
            memmove(&v45->_Mypair._Myval2._Bx._Buf[_Off], &v44->_Mypair._Myval2._Bx._Buf[_Roff], _N0);
          v46 = this->_Mypair._Myval2._Myres;
          if ( v46 < 0x10 )
            v47 = this;
          else
            v47 = (std::string *)this->_Mypair._Myval2._Bx._Ptr;
          if ( v46 < 0x10 )
            v48 = this;
          else
            v48 = (std::string *)this->_Mypair._Myval2._Bx._Ptr;
          if ( v15 )
            memmove(&v48->_Mypair._Myval2._Bx._Buf[_Off + v12], &v47->_Mypair._Myval2._Bx._Buf[_Off + _N0], v15);
          v49 = this->_Mypair._Myval2._Myres;
          if ( v49 < 0x10 )
            v50 = this;
          else
            v50 = (std::string *)this->_Mypair._Myval2._Bx._Ptr;
          if ( v49 < 0x10 )
            v51 = this;
          else
            v51 = (std::string *)this->_Mypair._Myval2._Bx._Ptr;
          v20 = v12 - _N0;
          if ( v12 != _N0 )
          {
            v19 = &v50->_Mypair._Myval2._Bx._Buf[_Roff + v12];
            v21 = &v51->_Mypair._Myval2._Bx._Buf[_Off + _N0];
            goto LABEL_116;
          }
        }
        else
        {
          if ( Myres < 0x10 )
            v39 = this;
          else
            v39 = (std::string *)this->_Mypair._Myval2._Bx._Ptr;
          if ( Myres < 0x10 )
            v40 = this;
          else
            v40 = (std::string *)this->_Mypair._Myval2._Bx._Ptr;
          if ( v15 )
            memmove(&v40->_Mypair._Myval2._Bx._Buf[_Off + v12], &v39->_Mypair._Myval2._Bx._Buf[_Off + _N0], v15);
          v41 = this->_Mypair._Myval2._Myres;
          if ( v41 < 0x10 )
            v42 = this;
          else
            v42 = (std::string *)this->_Mypair._Myval2._Bx._Ptr;
          if ( v41 < 0x10 )
            v43 = this;
          else
            v43 = (std::string *)this->_Mypair._Myval2._Bx._Ptr;
          if ( v12 )
          {
            v21 = &v43->_Mypair._Myval2._Bx._Buf[_Off];
            v20 = v12;
            v19 = &v42->_Mypair._Myval2._Bx._Buf[_Roff - _N0 + v12];
            goto LABEL_116;
          }
        }
      }
      else
      {
        v32 = this->_Mypair._Myval2._Myres;
        if ( v32 < 0x10 )
          v33 = this;
        else
          v33 = (std::string *)this->_Mypair._Myval2._Bx._Ptr;
        if ( v32 < 0x10 )
          v34 = this;
        else
          v34 = (std::string *)this->_Mypair._Myval2._Bx._Ptr;
        if ( v15 )
          memmove(&v34->_Mypair._Myval2._Bx._Buf[_Off + v12], &v33->_Mypair._Myval2._Bx._Buf[_Off + _N0], v15);
        v35 = this->_Mypair._Myval2._Myres;
        if ( v35 < 0x10 )
          v36 = this;
        else
          v36 = (std::string *)this->_Mypair._Myval2._Bx._Ptr;
        if ( v35 < 0x10 )
          v37 = this;
        else
          v37 = (std::string *)this->_Mypair._Myval2._Bx._Ptr;
        if ( v12 )
        {
          v19 = &v36->_Mypair._Myval2._Bx._Buf[_Roff];
          v20 = v12;
          v21 = &v37->_Mypair._Myval2._Bx._Buf[_Off];
          goto LABEL_116;
        }
      }
    }
    else
    {
      v26 = this->_Mypair._Myval2._Myres;
      if ( v26 < 0x10 )
        v27 = this;
      else
        v27 = (std::string *)this->_Mypair._Myval2._Bx._Ptr;
      if ( v26 < 0x10 )
        v28 = this;
      else
        v28 = (std::string *)this->_Mypair._Myval2._Bx._Ptr;
      if ( v12 )
        memmove(&v28->_Mypair._Myval2._Bx._Buf[_Off], &v27->_Mypair._Myval2._Bx._Buf[_Roff], v12);
      v29 = this->_Mypair._Myval2._Myres;
      if ( v29 < 0x10 )
        v30 = this;
      else
        v30 = (std::string *)this->_Mypair._Myval2._Bx._Ptr;
      if ( v29 < 0x10 )
        v31 = this;
      else
        v31 = (std::string *)this->_Mypair._Myval2._Bx._Ptr;
      if ( v15 )
      {
        v20 = v15;
        v19 = &v30->_Mypair._Myval2._Bx._Buf[_Off + _N0];
        v21 = &v31->_Mypair._Myval2._Bx._Buf[_Off + v12];
        goto LABEL_116;
      }
    }
  }
  else
  {
    v22 = this->_Mypair._Myval2._Myres;
    if ( v22 < 0x10 )
      v23 = this;
    else
      v23 = (std::string *)this->_Mypair._Myval2._Bx._Ptr;
    if ( v22 < 0x10 )
      v24 = this;
    else
      v24 = (std::string *)this->_Mypair._Myval2._Bx._Ptr;
    if ( v15 )
      memmove(&v24->_Mypair._Myval2._Bx._Buf[_Off + v12], &v23->_Mypair._Myval2._Bx._Buf[_Off + _N0], v15);
    if ( v7->_Mypair._Myval2._Myres >= 0x10 )
      v7 = (const std::string *)v7->_Mypair._Myval2._Bx._Ptr;
    if ( this->_Mypair._Myval2._Myres < 0x10 )
      v25 = this;
    else
      v25 = (std::string *)this->_Mypair._Myval2._Bx._Ptr;
    if ( v12 )
      memmove(&v25->_Mypair._Myval2._Bx._Buf[_Off], &v7->_Mypair._Myval2._Bx._Buf[_Roff], v12);
  }
  v52 = this->_Mypair._Myval2._Myres < 0x10;
  this->_Mypair._Myval2._Mysize = v16;
  if ( v52 )
    v53 = this;
  else
    v53 = (std::string *)this->_Mypair._Myval2._Bx._Ptr;
  v53->_Mypair._Myval2._Bx._Buf[v16] = 0;
  return this;
}

std::string *__fastcall std::string::substr(
        std::string *this,
        std::string *result,
        unsigned __int64 _Off,
        unsigned __int64 _Count)
{
  result->_Mypair._Myval2._Myres = 15i64;
  result->_Mypair._Myval2._Mysize = 0i64;
  result->_Mypair._Myval2._Bx._Buf[0] = 0;
  std::string::assign(result, this, _Off, _Count);
  return result;
}

