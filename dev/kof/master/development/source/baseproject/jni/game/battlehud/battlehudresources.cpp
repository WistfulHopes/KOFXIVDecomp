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
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlehudresources.h"
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
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/drawhelper/drawhelper.h"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/damagesetting.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "program files (x86)/windows kits/8.1/include/um/winnt.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix4x4.h"
#include "dev/kof/master/development/source/baseproject/jni/game/onlineui/imagestring.h"
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
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestageutil.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitivebundle.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treecachenode.h"
#include "dev/silverware/git/sdk/system/agsysteminfo.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/materialshowcontrol.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treenode.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_loader.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steam_api_internal.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/mat_aos.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/imagerects/hud_playerid.bc3"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cacheeffect.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_system.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphfitter.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglsprite.h"
#include "dev/silverware/git/sdk/input/agsdlmappingparser.h"
#include "dev/silverware/git/sdk/agmutex.inl"
#include "dev/kof/master/development/source/baseproject/jni/game/util/syncmenuimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefile.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/imagerects/hud_playerid_rect.bc3"
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
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/imagerects/hud_fixedphrase.bc3"
#include "dev/silverware/git/sdk/3rdparty/steam/steam_api.h"
#include "dev/silverware/git/sdk/agcondition.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/limits"
#include "dev/silverware/git/sdk/agvector2.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/imagerects/hud_fixedphrase_rect.bc3"
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
#include "dev/kof/master/development/source/baseproject/jni/game/data/savedata.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlehudlocalize.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/onlineui/imagestring.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/asyncjob.cpp"

enum `anonymous-namespace'::GlyphRect
{
	GlyphRectX = 0,
	GlyphRectY = 1,
	GlyphRectW = 2,
	GlyphRectH = 3,
	GlyphRectSize = 4,
};
std::piecewise_construct_t std::piecewise_construct; // 0x14088C4FA
const _C_CONV ImageRects_FixedPhrase_JP[536]; // 0x14088C7B0
const _C_CONV ImageRects_FixedPhrase_CN[536]; // 0x14088D010
const _C_CONV ImageRects_FixedPhrase_TW[536]; // 0x14088D870
const _C_CONV ImageRects_FixedPhrase_IT[536]; // 0x14088E0D0
const _C_CONV ImageRects_Strings_DE[616]; // 0x14088E930
const _C_CONV ImageRects_FixedPhrase_ES[536]; // 0x14088F2D0
const _C_CONV ImageRects_FixedPhrase_MX[536]; // 0x14088FB30
const _C_CONV ImageRects_Strings_FR[616]; // 0x140890390
const _C_CONV ImageRects_Strings_CN[616]; // 0x140890D30
const _C_CONV ImageRects_FixedPhrase_DE[536]; // 0x1408916D0
const _C_CONV ImageRects_FixedPhrase_FR[536]; // 0x140891F30
const _C_CONV ImageRects_Strings_JP[616]; // 0x140892790
const _C_CONV ImageRects_Strings_KR[616]; // 0x140893130
const _C_CONV ImageRects_Strings_MX[616]; // 0x140893AD0
const _C_CONV ImageRects_Strings_IT[616]; // 0x140894470
const _C_CONV ImageRects_Commons[1228]; // 0x140894E10
const _C_CONV ImageRects_FixedPhrase_US[536]; // 0x140896140
const _C_CONV ImageRects_Strings_ES[608]; // 0x1408969A0
const _C_CONV ImageRects_Strings_US[616]; // 0x140897320
const _C_CONV ImageRects_FixedPhrase_BR[536]; // 0x140897CC0
const _C_CONV ImageRects_Strings_BR[616]; // 0x140898520
const _C_CONV ImageRects_FixedPhrase_KR[536]; // 0x140898EC0
const _C_CONV ImageRects_Strings_TW[616]; // 0x140899720
const _C_CONV ImageRects_PlayerID[1140]; // 0x14089A0C0
BattleHudResources::BattleHudResources(); // 0x1400CF4C0
BattleHudResources::~BattleHudResources(); // 0x1400CF660
BattleHudResources::ImageResource::~ImageResource(); // 0x1400C0620
BattleHudResources::errorWorkaround::~errorWorkaround(); // 0x1400CF620
void BattleHudResources::readCommonsImages(); // 0x1400CF770
void BattleHudResources::readOnlineCommonsImages(); // 0x1400CFB60
void BattleHudResources::readCharacterFaceImage(extension::BasicFutureObject<Image,extension::FutureImageOption> * pImage, PLAYER_ID playerID, CHARACTER_NO characterNo); // 0x1400CFD60
void BattleHudResources::readPlayerTitleImage(extension::BasicFutureObject<Image,extension::FutureImageOption> * pInOutImage, long titleID); // 0x1400CFF50
void BattleHudResources::readPlayerRankImage(extension::BasicFutureObject<Image,extension::FutureImageOption> * pInOutImage, long playerRank); // 0x1400D0170
bool BattleHudResources::isDetermineLoadingFiles(); // 0x1400D0340
void BattleHudResources::strationImagesByDrawHelper(DrawHelper * pDrawHelper); // 0x1400D0450
Image * BattleHudResources::getImage(BattleHudResources::EImage::Type imageType); // 0x1400D0510
const _C_CONV * BattleHudResources::getImageRect(BattleHudResources::EImage::Type imageType, long imageIndex); // 0x1400D0580
bool BattleHudResources::createStringByChatPlayerID(ImageString & string, const char * pString); // 0x1400D07A0
bool BattleHudResources::createStringFixedPhrase(ImageString & string, const char * pString); // 0x1400D0940//decompilation failure at 14088C4FA!
//decompilation failure at 14088C7B0!
//decompilation failure at 14088D010!
//decompilation failure at 14088D870!
//decompilation failure at 14088E0D0!
//decompilation failure at 14088E930!
//decompilation failure at 14088F2D0!
//decompilation failure at 14088FB30!
//decompilation failure at 140890390!
//decompilation failure at 140890D30!
//decompilation failure at 1408916D0!
//decompilation failure at 140891F30!
//decompilation failure at 140892790!
//decompilation failure at 140893130!
//decompilation failure at 140893AD0!
//decompilation failure at 140894470!
//decompilation failure at 140894E10!
//decompilation failure at 140896140!
//decompilation failure at 1408969A0!
//decompilation failure at 140897320!
//decompilation failure at 140897CC0!
//decompilation failure at 140898520!
//decompilation failure at 140898EC0!
//decompilation failure at 140899720!
//decompilation failure at 14089A0C0!
void __fastcall BattleHudResources::BattleHudResources(BattleHudResources *this)
{
  _QWORD *v2; // rax
  BattleHudResources::ImageResource *v3; // rdi

  this->m_bError = 0;
  this->__vftable = (BattleHudResources_vtbl *)&BattleHudResources::`vftable';
  this->m_bLoading = 0;
  this->m_pCommons = 0i64;
  this->m_pImageFontGlypsPlayerID = anonymous_namespace_::createImageFontGlyphPlayerID();
  this->m_pImageFontGlypsChatPlayerID = anonymous_namespace_::createImageFontGlyphChatPlayerID();
  this->m_errorWorkaround.string.m_bError = 0;
  this->m_errorWorkaround.string.__vftable = (ImageString_vtbl *)&ImageString::`vftable';
  *(_QWORD *)&this->m_errorWorkaround.string.m_type = 0i64;
  this->m_errorWorkaround.string.m_height = 0;
  this->m_errorWorkaround.string.m_pImage = 0i64;
  this->m_errorWorkaround.string.m_imageIndex = -1;
  this->m_errorWorkaround.string.m_pDrawHelper = 0i64;
  this->m_errorWorkaround.string.m_freeMessage.pMessage = 0i64;
  this->m_errorWorkaround.string.m_freeMessage.messageLength = 0;
  this->m_errorWorkaround.string.m_freeMessage.pImage = 0i64;
  this->m_errorWorkaround.string.m_freeMessage.pTexuteBuffer = 0i64;
  this->m_errorWorkaround.string.m_freeMessage.textureBufferSize = 0;
  this->m_errorWorkaround.string.m_combination.pRects = 0i64;
  this->m_errorWorkaround.string.m_combination.pGlyphs = 0i64;
  this->m_errorWorkaround.string.m_combination.pImageIndexes = 0i64;
  this->m_errorWorkaround.string.m_combination.imageIndexCount = 0;
  v2 = operator new[](0x68ui64);
  if ( v2 )
  {
    *v2 = 4i64;
    v3 = (BattleHudResources::ImageResource *)(v2 + 1);
    `eh vector constructor iterator'(
      v2 + 1,
      0x18ui64,
      4ui64,
      (void (__fastcall *)(void *))BattleHudResources::ImageResource::ImageResource,
      (void (__fastcall *)(void *))BattleHudResources::ImageResource::~ImageResource);
  }
  else
  {
    v3 = 0i64;
  }
  this->m_pCommons = v3;
  if ( !v3 )
    this->m_bError = 1;
  *(_QWORD *)&this->m_errorWorkaround.rect.w = 65537i64;
  *(_DWORD *)&this->m_errorWorkaround.rect.sx = 0;
  *(_DWORD *)&this->m_errorWorkaround.rect.Flip = 0;
}

void __fastcall BattleHudResources::ImageResource::ImageResource(BattleHudResources::ImageResource *this)
{
  this->imageID = -1;
  this->image.m_isNoCache = 0;
  extension::BasicFutureObject<Image,extension::FutureImageOption>::Body::GetSharedEmpty(&this->image.m_body);
}

void __fastcall BattleHudResources::~BattleHudResources(BattleHudResources *this, unsigned __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rsi
  BattleHudResources::ImageResource *v5; // rcx
  BattleHudResources::ImageResource *m_pCommons; // rcx
  extension::RefCountablePtr<extension::BasicFutureObject<Image,extension::FutureImageOption>::Body> *p_m_body; // rbx
  ImageString::CombinationGlyph *m_pImageFontGlypsPlayerID; // rcx
  ImageString::CombinationGlyph *m_pImageFontGlypsChatPlayerID; // rcx

  this->__vftable = (BattleHudResources_vtbl *)&BattleHudResources::`vftable';
  if ( this->m_pCommons )
  {
    v3 = 0i64;
    v4 = 4i64;
    do
    {
      v5 = &this->m_pCommons[v3];
      if ( v5 )
        extension::BasicFutureObject<Image,extension::FutureImageOption>::reset(&v5->image);
      ++v3;
      --v4;
    }
    while ( v4 );
  }
  this->m_bError = 0;
  m_pCommons = this->m_pCommons;
  if ( m_pCommons )
  {
    p_m_body = &m_pCommons[-1].image.m_body;
    `eh vector destructor iterator'(
      m_pCommons,
      0x18ui64,
      (unsigned __int64)m_pCommons[-1].image.m_body.m_ptr,
      (void (__fastcall *)(void *))BattleHudResources::ImageResource::~ImageResource);
    operator delete[](p_m_body, 24 * (__int64)p_m_body->m_ptr + 8);
    this->m_pCommons = 0i64;
  }
  m_pImageFontGlypsPlayerID = this->m_pImageFontGlypsPlayerID;
  if ( m_pImageFontGlypsPlayerID )
  {
    operator delete(m_pImageFontGlypsPlayerID, a2);
    this->m_pImageFontGlypsPlayerID = 0i64;
  }
  m_pImageFontGlypsChatPlayerID = this->m_pImageFontGlypsChatPlayerID;
  if ( m_pImageFontGlypsChatPlayerID )
  {
    operator delete(m_pImageFontGlypsChatPlayerID, a2);
    this->m_pImageFontGlypsChatPlayerID = 0i64;
  }
  this->m_errorWorkaround.string.__vftable = (ImageString_vtbl *)&ImageString::`vftable';
  ImageString::dispose(&this->m_errorWorkaround.string);
  this->m_errorWorkaround.string.m_pDrawHelper = 0i64;
  this->m_errorWorkaround.string.__vftable = (ImageString_vtbl *)&ErrorChecker::`vftable';
  this->__vftable = (BattleHudResources_vtbl *)&ErrorChecker::`vftable';
}

void __fastcall BattleHudResources::ImageResource::~ImageResource(BattleHudResources::ImageResource *this)
{
  extension::BasicFutureObject<Image,extension::FutureImageOption>::Body *m_ptr; // rcx

  m_ptr = this->image.m_body.m_ptr;
  if ( m_ptr )
  {
    if ( _InterlockedExchangeAdd64(
           (volatile signed __int64 *)&m_ptr->m_refCount.m_ptr->m_sharedCount,
           0xFFFFFFFFFFFFFFFFui64) == 1 )
      ((void (__fastcall *)(extension::BasicFutureObject<Image,extension::FutureImageOption>::Body *, __int64))m_ptr->~RefCountableWeakSupportBase)(
        m_ptr,
        1i64);
  }
}

void __fastcall BattleHudResources::errorWorkaround::~errorWorkaround(RoomMembers::Member *this)
{
  ImageString *p_strOnlineID; // rbx

  p_strOnlineID = &this->strOnlineID;
  this->strOnlineID.__vftable = (ImageString_vtbl *)&ImageString::`vftable';
  ImageString::dispose(&this->strOnlineID);
  p_strOnlineID->m_pDrawHelper = 0i64;
  p_strOnlineID->__vftable = (ImageString_vtbl *)&ErrorChecker::`vftable';
}

bool __fastcall BattleHudResources::createStringByChatPlayerID(
        BattleHudResources *this,
        ImageString *string,
        const char *pString)
{
  extension::AsyncStatus::Step v6; // edx
  extension::AsyncContent<Image> *m_ptr; // rbx
  Image *Myval2; // rsi
  const _C_CONV *v9; // rbx
  ImageString::CombinationGlyph *pGlyphs; // rdi
  ImageString::CombinationSetupParams setupParams; // [rsp+30h] [rbp-28h] BYREF

  if ( this->isError(this) )
    return 0;
  m_ptr = this->m_pCommons[3].image.m_body.m_ptr->m_content.m_ptr;
  if ( !m_ptr || m_ptr->m_isDataReleased )
    return 0;
  if ( (m_ptr->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
    extension::AsyncStatus::waitFor(&m_ptr->m_status, v6);
  Myval2 = m_ptr->m_data._Mypair._Myval2;
  if ( !Myval2 )
    return 0;
  switch ( *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2197384i64) )
  {
    case 0:
      v9 = ImageRects_FixedPhrase_JP;
      break;
    case 1:
      v9 = ImageRects_FixedPhrase_US;
      break;
    case 2:
      v9 = ImageRects_FixedPhrase_CN;
      break;
    case 3:
      v9 = ImageRects_FixedPhrase_TW;
      break;
    case 4:
      v9 = ImageRects_FixedPhrase_KR;
      break;
    case 5:
      v9 = ImageRects_FixedPhrase_FR;
      break;
    case 6:
      v9 = ImageRects_FixedPhrase_IT;
      break;
    case 7:
      v9 = ImageRects_FixedPhrase_DE;
      break;
    case 8:
      v9 = ImageRects_FixedPhrase_ES;
      break;
    case 9:
      v9 = ImageRects_FixedPhrase_MX;
      break;
    case 0xA:
      v9 = ImageRects_FixedPhrase_BR;
      break;
    default:
      return 0;
  }
  pGlyphs = this->m_pImageFontGlypsChatPlayerID;
  setupParams.imageID_0 = 70;
  setupParams.imageID_A = 82;
  setupParams.imageID_a = 108;
  setupParams.imageID_hyphen = 81;
  setupParams.imageID_underscore = 80;
  ImageString::dispose(string);
  return pString && ImageString::createCombination(string, pString, Myval2, v9, pGlyphs, &setupParams);
}

bool __fastcall BattleHudResources::createStringFixedPhrase(
        BattleHudResources *this,
        ImageString *string,
        const char *pString)
{
  Image *Image; // rax
  char *v6; // rax
  char *v7; // rdi
  char *v8; // rax
  int v9; // edx
  unsigned int v10; // er9
  int v11; // edx
  int v12; // edx
  int v13; // edx
  int v14; // er8
  ImageString::FixedPhrase *ImageRect; // rsi
  Image *v16; // rdi
  ImageString::FixedPhrase v17; // xmm0

  if ( !pString )
  {
    LOBYTE(Image) = 0;
    return (char)Image;
  }
  v6 = strstr(pString, "_");
  v7 = v6;
  if ( !v6 )
    goto LABEL_17;
  v8 = strstr(v6 + 1, "_");
  if ( !v8 )
    goto LABEL_17;
  v9 = v7[2] + 2 * (5 * v7[1] - 264);
  v10 = v8[2] + 10 * v8[1] - 529;
  if ( v9 )
  {
    switch ( v9 )
    {
      case 1:
        if ( v10 > 0xE )
          goto LABEL_17;
        break;
      case 2:
        if ( v10 > 0xF )
        {
          LOBYTE(Image) = 0;
          return (char)Image;
        }
        break;
      case 3:
        if ( v10 > 9 )
        {
          LOBYTE(Image) = 0;
          return (char)Image;
        }
        break;
      default:
        if ( v9 == 4 && v10 > 8 )
        {
          LOBYTE(Image) = 0;
          return (char)Image;
        }
        break;
    }
  }
  else if ( v10 > 0xD )
  {
    goto LABEL_17;
  }
  if ( v9 )
  {
    v11 = v9 - 1;
    if ( v11 )
    {
      v12 = v11 - 1;
      if ( !v12 )
      {
        v14 = v10 + 34;
        if ( (int)v10 >= 14 )
          v14 = v10 + 35;
        goto LABEL_30;
      }
      v13 = v12 - 1;
      if ( v13 )
      {
        if ( v13 == 1 )
        {
          v14 = v10 + 61;
          goto LABEL_30;
        }
LABEL_17:
        LOBYTE(Image) = 0;
        return (char)Image;
      }
      v14 = v10 + 51;
    }
    else
    {
      v14 = v10 + 5;
    }
  }
  else
  {
    v14 = v10 + 20;
  }
LABEL_30:
  ImageRect = (ImageString::FixedPhrase *)BattleHudResources::getImageRect(
                                            this,
                                            (BattleHudResources::EImage::Type)3,
                                            v14);
  Image = BattleHudResources::getImage(this, (BattleHudResources::EImage::Type)3);
  v16 = Image;
  if ( Image )
  {
    ImageString::dispose(string);
    string->m_type = OutQuad;
    v17 = *ImageRect;
    string->m_pImage = v16;
    string->m_fixedPhrase = v17;
    string->m_width = string->m_fixedPhrase.rect.w;
    string->m_height = string->m_fixedPhrase.rect.h;
    LOBYTE(Image) = 1;
  }
  return (char)Image;
}

Image *__fastcall BattleHudResources::getImage(BattleHudResources *this, BattleHudResources::EImage::Type imageType)
{
  __int64 v3; // rdi
  extension::AsyncStatus::Step v4; // edx
  extension::AsyncContent<Image> *m_ptr; // rbx

  v3 = imageType;
  if ( this->isError(this) )
    return 0i64;
  m_ptr = this->m_pCommons[v3].image.m_body.m_ptr->m_content.m_ptr;
  if ( !m_ptr || m_ptr->m_isDataReleased )
    return 0i64;
  if ( (m_ptr->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
    extension::AsyncStatus::waitFor(&m_ptr->m_status, v4);
  return m_ptr->m_data._Mypair._Myval2;
}

BattleHudResources::errorWorkaround *__fastcall BattleHudResources::getImageRect(
        BattleHudResources *this,
        BattleHudResources::EImage::Type imageType,
        int imageIndex)
{
  __int64 v4; // rbx
  __int32 v7; // edi
  __int32 v8; // edi
  const _C_CONV *v9; // rcx

  v4 = imageIndex;
  if ( this->isError(this) )
    return &this->m_errorWorkaround;
  if ( imageType )
  {
    v7 = imageType - 1;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( !v8 )
      {
        switch ( *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2197384i64) )
        {
          case 0:
            v9 = ImageRects_Strings_JP;
            return (BattleHudResources::errorWorkaround *)&v9[v4];
          case 1:
            v9 = ImageRects_Strings_US;
            return (BattleHudResources::errorWorkaround *)&v9[v4];
          case 2:
            v9 = ImageRects_Strings_CN;
            return (BattleHudResources::errorWorkaround *)&v9[v4];
          case 3:
            v9 = ImageRects_Strings_TW;
            return (BattleHudResources::errorWorkaround *)&v9[v4];
          case 4:
            v9 = ImageRects_Strings_KR;
            return (BattleHudResources::errorWorkaround *)&v9[v4];
          case 5:
            v9 = ImageRects_Strings_FR;
            return (BattleHudResources::errorWorkaround *)&v9[v4];
          case 6:
            v9 = ImageRects_Strings_IT;
            return (BattleHudResources::errorWorkaround *)&v9[v4];
          case 7:
            v9 = ImageRects_Strings_DE;
            return (BattleHudResources::errorWorkaround *)&v9[v4];
          case 8:
            v9 = ImageRects_Strings_ES;
            return (BattleHudResources::errorWorkaround *)&v9[v4];
          case 9:
            v9 = ImageRects_Strings_MX;
            return (BattleHudResources::errorWorkaround *)&v9[v4];
          case 0xA:
            v9 = ImageRects_Strings_BR;
            return (BattleHudResources::errorWorkaround *)&v9[v4];
          default:
            return &this->m_errorWorkaround;
        }
      }
      if ( v8 == 1 )
      {
        switch ( *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2197384i64) )
        {
          case 0:
            v9 = ImageRects_FixedPhrase_JP;
            return (BattleHudResources::errorWorkaround *)&v9[v4];
          case 1:
            v9 = ImageRects_FixedPhrase_US;
            return (BattleHudResources::errorWorkaround *)&v9[v4];
          case 2:
            v9 = ImageRects_FixedPhrase_CN;
            return (BattleHudResources::errorWorkaround *)&v9[v4];
          case 3:
            v9 = ImageRects_FixedPhrase_TW;
            return (BattleHudResources::errorWorkaround *)&v9[v4];
          case 4:
            v9 = ImageRects_FixedPhrase_KR;
            return (BattleHudResources::errorWorkaround *)&v9[v4];
          case 5:
            v9 = ImageRects_FixedPhrase_FR;
            return (BattleHudResources::errorWorkaround *)&v9[v4];
          case 6:
            v9 = ImageRects_FixedPhrase_IT;
            return (BattleHudResources::errorWorkaround *)&v9[v4];
          case 7:
            v9 = ImageRects_FixedPhrase_DE;
            return (BattleHudResources::errorWorkaround *)&v9[v4];
          case 8:
            v9 = ImageRects_FixedPhrase_ES;
            return (BattleHudResources::errorWorkaround *)&v9[v4];
          case 9:
            v9 = ImageRects_FixedPhrase_MX;
            return (BattleHudResources::errorWorkaround *)&v9[v4];
          case 0xA:
            v9 = ImageRects_FixedPhrase_BR;
            return (BattleHudResources::errorWorkaround *)&v9[v4];
          default:
            return &this->m_errorWorkaround;
        }
      }
      return &this->m_errorWorkaround;
    }
    v9 = ImageRects_PlayerID;
  }
  else
  {
    v9 = ImageRects_Commons;
  }
  return (BattleHudResources::errorWorkaround *)&v9[v4];
}

char __fastcall BattleHudResources::isDetermineLoadingFiles(BattleHudResources *this)
{
  __int64 i; // rcx
  BattleHudResources::ImageResource *v3; // rdx
  extension::AsyncContent<Image> *m_ptr; // rax
  __int64 v5; // rdi
  BattleHudResources::ImageResource *m_pCommons; // rax
  extension::BasicFutureObject<Image,extension::FutureImageOption>::Body *v7; // rbx
  extension::AsyncContent<Image> *v8; // rax
  extension::AsyncContent<Image> *v9; // rbx
  int m_errorCode; // eax

  if ( this->m_bLoading && (!this->isError(this) || this->m_pCommons) )
  {
    for ( i = 0i64; i < 4; ++i )
    {
      v3 = &this->m_pCommons[i];
      if ( v3 )
      {
        m_ptr = v3->image.m_body.m_ptr->m_content.m_ptr;
        if ( m_ptr )
        {
          if ( !m_ptr->m_isDataReleased && (m_ptr->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
            return 1;
        }
      }
    }
    v5 = 0i64;
    this->m_bLoading = 0;
    while ( 1 )
    {
      m_pCommons = this->m_pCommons;
      if ( &m_pCommons[v5] )
      {
        v7 = m_pCommons[v5].image.m_body.m_ptr;
        v8 = v7->m_content.m_ptr;
        if ( v8 )
        {
          if ( !v8->m_isDataReleased )
          {
            v9 = v7->m_content.m_ptr;
            if ( v8->m_isDataReleased )
            {
              m_errorCode = 0;
            }
            else
            {
              if ( (v8->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
                extension::AsyncStatus::waitFor(&v8->m_status, (extension::AsyncStatus::Step)v3);
              m_errorCode = v9->m_errorCode;
            }
            if ( m_errorCode )
              break;
          }
        }
      }
      if ( ++v5 >= 4 )
        return 0;
    }
    this->m_bError = 1;
  }
  return 0;
}

void __fastcall BattleHudResources::readCharacterFaceImage(
        BattleHudResources *this,
        extension::BasicFutureObject<Image,extension::FutureImageOption> *pImage,
        PLAYER_ID playerID,
        CHARACTER_NO characterNo)
{
  __int64 v6; // r9
  extension::AsyncContent<Image> *m_ptr; // rcx
  unsigned __int64 v8; // r8
  extension::BasicFutureObject<Image,extension::FutureImageOption>::AssetCache *v9; // rcx
  extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body *v10; // rcx
  char *Ptr; // rcx
  char *v12; // rax
  extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> other; // [rsp+30h] [rbp-178h] BYREF
  std::string v14; // [rsp+40h] [rbp-168h] BYREF
  __int64 v15; // [rsp+60h] [rbp-148h]
  std::string _Right; // [rsp+70h] [rbp-138h] BYREF
  char _Buffer[256]; // [rsp+90h] [rbp-118h] BYREF

  if ( pImage )
  {
    v15 = -2i64;
    if ( characterNo != CHARACTER_NO_NONE )
    {
      v6 = 82i64;
      if ( playerID == PLAYER_ID_1P )
        v6 = 76i64;
      sprintf_s(_Buffer, 0x100ui64, "ui/battle_ui/_EN/hud/characterFace/08_HUD_Player_%c_%03d.obm", v6, characterNo);
      m_ptr = pImage->m_body.m_ptr->m_content.m_ptr;
      if ( !m_ptr || m_ptr->m_isDataReleased )
        extension::BasicFutureObject<Image,extension::FutureImageOption>::reset(pImage);
      _Right._Mypair._Myval2._Myres = 15i64;
      _Right._Mypair._Myval2._Mysize = 0i64;
      _Right._Mypair._Myval2._Bx._Buf[0] = 0;
      if ( _Buffer[0] )
      {
        v8 = -1i64;
        do
          ++v8;
        while ( _Buffer[v8] );
      }
      else
      {
        v8 = 0i64;
      }
      std::string::assign(&_Right, _Buffer, v8);
      other.m_isNoCache = 0;
      v14._Mypair._Myval2._Myres = 15i64;
      v14._Mypair._Myval2._Mysize = 0i64;
      v14._Mypair._Myval2._Bx._Buf[0] = 0;
      std::string::assign(&v14, &_Right, 0i64, 0xFFFFFFFFFFFFFFFFui64);
      extension::BasicFutureObject<Image,extension::FutureImageOption>::AssetCache::getCachedOrLoadStart(
        v9,
        (extension::RefCountablePtr<extension::BasicFutureObject<Image,extension::FutureImageOption>::Body> *)&other.m_body,
        &v14,
        0i64);
      extension::BasicFutureObject<OGLSecondary,void>::operator=(
        (extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> *)pImage,
        &other);
      v10 = other.m_body.m_ptr;
      if ( other.m_body.m_ptr
        && _InterlockedExchangeAdd64(
             (volatile signed __int64 *)&other.m_body.m_ptr->m_refCount.m_ptr->m_sharedCount,
             0xFFFFFFFFFFFFFFFFui64) == 1 )
      {
        ((void (__fastcall *)(extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body *, __int64))v10->~RefCountableWeakSupportBase)(
          v10,
          1i64);
      }
      if ( _Right._Mypair._Myval2._Myres >= 0x10 )
      {
        Ptr = _Right._Mypair._Myval2._Bx._Ptr;
        if ( _Right._Mypair._Myval2._Myres + 1 >= 0x1000 )
        {
          if ( (_Right._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
            invalid_parameter_noinfo_noreturn();
          v12 = (char *)*((_QWORD *)_Right._Mypair._Myval2._Bx._Ptr - 1);
          if ( v12 >= _Right._Mypair._Myval2._Bx._Ptr )
            invalid_parameter_noinfo_noreturn();
          if ( (char *)(_Right._Mypair._Myval2._Bx._Ptr - v12) < (char *)8 )
            invalid_parameter_noinfo_noreturn();
          if ( (char *)(_Right._Mypair._Myval2._Bx._Ptr - v12) > (char *)0x27 )
            invalid_parameter_noinfo_noreturn();
          Ptr = (char *)*((_QWORD *)_Right._Mypair._Myval2._Bx._Ptr - 1);
        }
        operator delete(Ptr);
      }
    }
  }
}

void __fastcall BattleHudResources::readCommonsImages(BattleHudResources *this)
{
  extension::AsyncContent<Image> *m_ptr; // rax
  extension::BasicFutureObject<Image,extension::FutureImageOption>::AssetCache *v3; // rcx
  extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body *v4; // rcx
  extension::AsyncContent<Image> *v5; // rax
  extension::BasicFutureObject<Image,extension::FutureImageOption>::AssetCache *v6; // rcx
  extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body *v7; // rcx
  char *Ptr; // rcx
  char *v9; // rax
  extension::AsyncContent<Image> *v10; // rax
  const char *v11; // rdx
  unsigned __int64 v12; // r8
  extension::BasicFutureObject<Image,extension::FutureImageOption>::AssetCache *v13; // rcx
  extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body *v14; // rcx
  extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> other; // [rsp+30h] [rbp-D8h] BYREF
  extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> v16; // [rsp+40h] [rbp-C8h] BYREF
  extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> v17; // [rsp+50h] [rbp-B8h] BYREF
  std::string v18; // [rsp+60h] [rbp-A8h] BYREF
  std::string v19; // [rsp+80h] [rbp-88h] BYREF
  std::string v20; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v21; // [rsp+C0h] [rbp-48h]
  std::string v22; // [rsp+C8h] [rbp-40h] BYREF
  std::string _Right; // [rsp+E8h] [rbp-20h] BYREF
  std::string v24; // [rsp+108h] [rbp+0h] BYREF

  v21 = -2i64;
  if ( !this->isError(this) )
  {
    m_ptr = this->m_pCommons->image.m_body.m_ptr->m_content.m_ptr;
    if ( !m_ptr || m_ptr->m_isDataReleased )
    {
      _Right._Mypair._Myval2._Myres = 15i64;
      _Right._Mypair._Myval2._Mysize = 0i64;
      _Right._Mypair._Myval2._Bx._Buf[0] = 0;
      std::string::assign(&_Right, "ui/battle_ui/_EN/hud/HUD_Common.obm", 0x23ui64);
      other.m_isNoCache = 0;
      v18._Mypair._Myval2._Myres = 15i64;
      v18._Mypair._Myval2._Mysize = 0i64;
      v18._Mypair._Myval2._Bx._Buf[0] = 0;
      std::string::assign(&v18, &_Right, 0i64, 0xFFFFFFFFFFFFFFFFui64);
      extension::BasicFutureObject<Image,extension::FutureImageOption>::AssetCache::getCachedOrLoadStart(
        v3,
        (extension::RefCountablePtr<extension::BasicFutureObject<Image,extension::FutureImageOption>::Body> *)&other.m_body,
        &v18,
        0i64);
      extension::BasicFutureObject<OGLSecondary,void>::operator=(
        (extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> *)&this->m_pCommons->image,
        &other);
      v4 = other.m_body.m_ptr;
      if ( other.m_body.m_ptr
        && _InterlockedExchangeAdd64(
             (volatile signed __int64 *)&other.m_body.m_ptr->m_refCount.m_ptr->m_sharedCount,
             0xFFFFFFFFFFFFFFFFui64) == 1 )
      {
        ((void (__fastcall *)(extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body *, __int64))v4->~RefCountableWeakSupportBase)(
          v4,
          1i64);
      }
      std::string::~string(&_Right);
      this->m_bLoading = 1;
    }
    v5 = this->m_pCommons[1].image.m_body.m_ptr->m_content.m_ptr;
    if ( !v5 || v5->m_isDataReleased )
    {
      v22._Mypair._Myval2._Myres = 15i64;
      v22._Mypair._Myval2._Mysize = 0i64;
      v22._Mypair._Myval2._Bx._Buf[0] = 0;
      std::string::assign(&v22, "ui/battle_ui/hud/HUD_PlayerID.obm", 0x21ui64);
      v16.m_isNoCache = 0;
      v19._Mypair._Myval2._Myres = 15i64;
      v19._Mypair._Myval2._Mysize = 0i64;
      v19._Mypair._Myval2._Bx._Buf[0] = 0;
      std::string::assign(&v19, &v22, 0i64, 0xFFFFFFFFFFFFFFFFui64);
      extension::BasicFutureObject<Image,extension::FutureImageOption>::AssetCache::getCachedOrLoadStart(
        v6,
        (extension::RefCountablePtr<extension::BasicFutureObject<Image,extension::FutureImageOption>::Body> *)&v16.m_body,
        &v19,
        0i64);
      extension::BasicFutureObject<OGLSecondary,void>::operator=(
        (extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> *)&this->m_pCommons[1].image,
        &v16);
      v7 = v16.m_body.m_ptr;
      if ( v16.m_body.m_ptr
        && _InterlockedExchangeAdd64(
             (volatile signed __int64 *)&v16.m_body.m_ptr->m_refCount.m_ptr->m_sharedCount,
             0xFFFFFFFFFFFFFFFFui64) == 1 )
      {
        ((void (__fastcall *)(extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body *, __int64))v7->~RefCountableWeakSupportBase)(
          v7,
          1i64);
      }
      if ( v22._Mypair._Myval2._Myres >= 0x10 )
      {
        Ptr = v22._Mypair._Myval2._Bx._Ptr;
        if ( v22._Mypair._Myval2._Myres + 1 >= 0x1000 )
        {
          if ( (v22._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
            invalid_parameter_noinfo_noreturn();
          v9 = (char *)*((_QWORD *)v22._Mypair._Myval2._Bx._Ptr - 1);
          if ( v9 >= v22._Mypair._Myval2._Bx._Ptr )
            invalid_parameter_noinfo_noreturn();
          if ( (char *)(v22._Mypair._Myval2._Bx._Ptr - v9) < (char *)8 )
            invalid_parameter_noinfo_noreturn();
          if ( (char *)(v22._Mypair._Myval2._Bx._Ptr - v9) > (char *)0x27 )
            invalid_parameter_noinfo_noreturn();
          Ptr = (char *)*((_QWORD *)v22._Mypair._Myval2._Bx._Ptr - 1);
        }
        operator delete(Ptr);
      }
      v22._Mypair._Myval2._Myres = 15i64;
      v22._Mypair._Myval2._Mysize = 0i64;
      v22._Mypair._Myval2._Bx._Buf[0] = 0;
      this->m_bLoading = 1;
    }
    v10 = this->m_pCommons[2].image.m_body.m_ptr->m_content.m_ptr;
    if ( !v10 || v10->m_isDataReleased )
    {
      switch ( *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2197384i64) )
      {
        case 0:
          v11 = "ui/battle_ui/localizeStrings/JP/HUD_Strings.obm";
          goto LABEL_40;
        case 1:
          v11 = "ui/battle_ui/localizeStrings/US/HUD_Strings.obm";
          goto LABEL_40;
        case 2:
          v11 = "ui/battle_ui/localizeStrings/CN/HUD_Strings.obm";
          goto LABEL_40;
        case 3:
          v11 = "ui/battle_ui/localizeStrings/TW/HUD_Strings.obm";
          goto LABEL_40;
        case 4:
          v11 = "ui/battle_ui/localizeStrings/KR/HUD_Strings.obm";
          goto LABEL_40;
        case 5:
          v11 = "ui/battle_ui/localizeStrings/FR/HUD_Strings.obm";
          goto LABEL_40;
        case 6:
          v11 = "ui/battle_ui/localizeStrings/IT/HUD_Strings.obm";
          goto LABEL_40;
        case 7:
          v11 = "ui/battle_ui/localizeStrings/DE/HUD_Strings.obm";
          goto LABEL_40;
        case 8:
          v11 = "ui/battle_ui/localizeStrings/ES/HUD_Strings.obm";
          goto LABEL_40;
        case 9:
          v11 = "ui/battle_ui/localizeStrings/MX/HUD_Strings.obm";
          goto LABEL_40;
        case 0xA:
          v11 = "ui/battle_ui/localizeStrings/BR/HUD_Strings.obm";
LABEL_40:
          v24._Mypair._Myval2._Myres = 15i64;
          v24._Mypair._Myval2._Mysize = 0i64;
          v24._Mypair._Myval2._Bx._Buf[0] = 0;
          if ( *v11 )
          {
            v12 = -1i64;
            do
              ++v12;
            while ( v11[v12] );
          }
          else
          {
            v12 = 0i64;
          }
          std::string::assign(&v24, v11, v12);
          v17.m_isNoCache = 0;
          v20._Mypair._Myval2._Myres = 15i64;
          v20._Mypair._Myval2._Mysize = 0i64;
          v20._Mypair._Myval2._Bx._Buf[0] = 0;
          std::string::assign(&v20, &v24, 0i64, 0xFFFFFFFFFFFFFFFFui64);
          extension::BasicFutureObject<Image,extension::FutureImageOption>::AssetCache::getCachedOrLoadStart(
            v13,
            (extension::RefCountablePtr<extension::BasicFutureObject<Image,extension::FutureImageOption>::Body> *)&v17.m_body,
            &v20,
            0i64);
          extension::BasicFutureObject<OGLSecondary,void>::operator=(
            (extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> *)&this->m_pCommons[2].image,
            &v17);
          v14 = v17.m_body.m_ptr;
          if ( v17.m_body.m_ptr )
          {
            if ( _InterlockedExchangeAdd64(
                   (volatile signed __int64 *)&v17.m_body.m_ptr->m_refCount.m_ptr->m_sharedCount,
                   0xFFFFFFFFFFFFFFFFui64) == 1 )
              ((void (__fastcall *)(extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body *, __int64))v14->~RefCountableWeakSupportBase)(
                v14,
                1i64);
          }
          std::string::~string(&v24);
          this->m_bLoading = 1;
          break;
        default:
          return;
      }
    }
  }
}

void __fastcall BattleHudResources::readOnlineCommonsImages(BattleHudResources *this)
{
  extension::AsyncContent<Image> *m_ptr; // rax
  const char *v3; // rdx
  unsigned __int64 v4; // r8
  extension::BasicFutureObject<Image,extension::FutureImageOption>::AssetCache *v5; // rcx
  extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body *v6; // rcx
  extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> other; // [rsp+20h] [rbp-78h] BYREF
  std::string v8; // [rsp+30h] [rbp-68h] BYREF
  __int64 v9; // [rsp+50h] [rbp-48h]
  std::string _Right; // [rsp+60h] [rbp-38h] BYREF

  v9 = -2i64;
  if ( !this->isError(this) )
  {
    m_ptr = this->m_pCommons[3].image.m_body.m_ptr->m_content.m_ptr;
    if ( !m_ptr || m_ptr->m_isDataReleased )
    {
      switch ( *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2197384i64) )
      {
        case 0:
          v3 = "ui/battle_ui/localizeStrings/JP/HUD_FixedPhrase.obm";
          goto LABEL_16;
        case 1:
          v3 = "ui/battle_ui/localizeStrings/US/HUD_FixedPhrase.obm";
          goto LABEL_16;
        case 2:
          v3 = "ui/battle_ui/localizeStrings/CN/HUD_FixedPhrase.obm";
          goto LABEL_16;
        case 3:
          v3 = "ui/battle_ui/localizeStrings/TW/HUD_FixedPhrase.obm";
          goto LABEL_16;
        case 4:
          v3 = "ui/battle_ui/localizeStrings/KR/HUD_FixedPhrase.obm";
          goto LABEL_16;
        case 5:
          v3 = "ui/battle_ui/localizeStrings/FR/HUD_FixedPhrase.obm";
          goto LABEL_16;
        case 6:
          v3 = "ui/battle_ui/localizeStrings/IT/HUD_FixedPhrase.obm";
          goto LABEL_16;
        case 7:
          v3 = "ui/battle_ui/localizeStrings/DE/HUD_FixedPhrase.obm";
          goto LABEL_16;
        case 8:
          v3 = "ui/battle_ui/localizeStrings/ES/HUD_FixedPhrase.obm";
          goto LABEL_16;
        case 9:
          v3 = "ui/battle_ui/localizeStrings/MX/HUD_FixedPhrase.obm";
          goto LABEL_16;
        case 0xA:
          v3 = "ui/battle_ui/localizeStrings/BR/HUD_FixedPhrase.obm";
LABEL_16:
          _Right._Mypair._Myval2._Myres = 15i64;
          _Right._Mypair._Myval2._Mysize = 0i64;
          _Right._Mypair._Myval2._Bx._Buf[0] = 0;
          if ( *v3 )
          {
            v4 = -1i64;
            do
              ++v4;
            while ( v3[v4] );
          }
          else
          {
            v4 = 0i64;
          }
          std::string::assign(&_Right, v3, v4);
          other.m_isNoCache = 0;
          v8._Mypair._Myval2._Myres = 15i64;
          v8._Mypair._Myval2._Mysize = 0i64;
          v8._Mypair._Myval2._Bx._Buf[0] = 0;
          std::string::assign(&v8, &_Right, 0i64, 0xFFFFFFFFFFFFFFFFui64);
          extension::BasicFutureObject<Image,extension::FutureImageOption>::AssetCache::getCachedOrLoadStart(
            v5,
            (extension::RefCountablePtr<extension::BasicFutureObject<Image,extension::FutureImageOption>::Body> *)&other.m_body,
            &v8,
            0i64);
          extension::BasicFutureObject<OGLSecondary,void>::operator=(
            (extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> *)&this->m_pCommons[3].image,
            &other);
          v6 = other.m_body.m_ptr;
          if ( other.m_body.m_ptr )
          {
            if ( _InterlockedExchangeAdd64(
                   (volatile signed __int64 *)&other.m_body.m_ptr->m_refCount.m_ptr->m_sharedCount,
                   0xFFFFFFFFFFFFFFFFui64) == 1 )
              ((void (__fastcall *)(extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body *, __int64))v6->~RefCountableWeakSupportBase)(
                v6,
                1i64);
          }
          std::string::~string(&_Right);
          this->m_bLoading = 1;
          break;
        default:
          return;
      }
    }
  }
}

void __fastcall BattleHudResources::readPlayerRankImage(
        BattleHudResources *this,
        extension::BasicFutureObject<Image,extension::FutureImageOption> *pInOutImage,
        int playerRank)
{
  const char *LocalizeForder; // rax
  int v5; // er8
  unsigned __int64 v6; // r8
  extension::BasicFutureObject<Image,extension::FutureImageOption>::AssetCache *v7; // rcx
  extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body *m_ptr; // rcx
  char *Ptr; // rcx
  char *v10; // rax
  extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> other; // [rsp+30h] [rbp-178h] BYREF
  std::string v12; // [rsp+40h] [rbp-168h] BYREF
  __int64 v13; // [rsp+60h] [rbp-148h]
  std::string _Right; // [rsp+70h] [rbp-138h] BYREF
  char _Buffer[256]; // [rsp+90h] [rbp-118h] BYREF

  if ( pInOutImage )
  {
    v13 = -2i64;
    if ( playerRank )
    {
      LocalizeForder = anonymous_namespace_::getLocalizeForder((LANGUAGE_MODE)*(_DWORD *)(*(_QWORD *)&AppMain::pApp
                                                                                        + 2197384i64));
      sprintf_s(_Buffer, 0x100ui64, "ui/loadData/localize/%s08_HUD_rank/08_HUD_rank_%03d.gnf", LocalizeForder, v5);
      _Right._Mypair._Myval2._Myres = 15i64;
      _Right._Mypair._Myval2._Mysize = 0i64;
      _Right._Mypair._Myval2._Bx._Buf[0] = 0;
      if ( _Buffer[0] )
      {
        v6 = -1i64;
        do
          ++v6;
        while ( _Buffer[v6] );
      }
      else
      {
        v6 = 0i64;
      }
      std::string::assign(&_Right, _Buffer, v6);
      other.m_isNoCache = 0;
      v12._Mypair._Myval2._Myres = 15i64;
      v12._Mypair._Myval2._Mysize = 0i64;
      v12._Mypair._Myval2._Bx._Buf[0] = 0;
      std::string::assign(&v12, &_Right, 0i64, 0xFFFFFFFFFFFFFFFFui64);
      extension::BasicFutureObject<Image,extension::FutureImageOption>::AssetCache::getCachedOrLoadStart(
        v7,
        (extension::RefCountablePtr<extension::BasicFutureObject<Image,extension::FutureImageOption>::Body> *)&other.m_body,
        &v12,
        0i64);
      extension::BasicFutureObject<OGLSecondary,void>::operator=(
        (extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> *)pInOutImage,
        &other);
      m_ptr = other.m_body.m_ptr;
      if ( other.m_body.m_ptr
        && _InterlockedExchangeAdd64(
             (volatile signed __int64 *)&other.m_body.m_ptr->m_refCount.m_ptr->m_sharedCount,
             0xFFFFFFFFFFFFFFFFui64) == 1 )
      {
        ((void (__fastcall *)(extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body *, __int64))m_ptr->~RefCountableWeakSupportBase)(
          m_ptr,
          1i64);
      }
      if ( _Right._Mypair._Myval2._Myres >= 0x10 )
      {
        Ptr = _Right._Mypair._Myval2._Bx._Ptr;
        if ( _Right._Mypair._Myval2._Myres + 1 >= 0x1000 )
        {
          if ( (_Right._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
            invalid_parameter_noinfo_noreturn();
          v10 = (char *)*((_QWORD *)_Right._Mypair._Myval2._Bx._Ptr - 1);
          if ( v10 >= _Right._Mypair._Myval2._Bx._Ptr )
            invalid_parameter_noinfo_noreturn();
          if ( (char *)(_Right._Mypair._Myval2._Bx._Ptr - v10) < (char *)8 )
            invalid_parameter_noinfo_noreturn();
          if ( (char *)(_Right._Mypair._Myval2._Bx._Ptr - v10) > (char *)0x27 )
            invalid_parameter_noinfo_noreturn();
          Ptr = (char *)*((_QWORD *)_Right._Mypair._Myval2._Bx._Ptr - 1);
        }
        operator delete(Ptr);
      }
    }
  }
}

void __fastcall BattleHudResources::readPlayerTitleImage(
        BattleHudResources *this,
        extension::BasicFutureObject<Image,extension::FutureImageOption> *pInOutImage,
        int titleID)
{
  const char *LocalizeForder; // rax
  int v5; // er8
  const char *v6; // rcx
  unsigned __int64 v7; // r8
  extension::BasicFutureObject<Image,extension::FutureImageOption>::AssetCache *v8; // rcx
  extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body *m_ptr; // rcx
  char *Ptr; // rcx
  char *v11; // rax
  extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> other; // [rsp+30h] [rbp-178h] BYREF
  std::string v13; // [rsp+40h] [rbp-168h] BYREF
  __int64 v14; // [rsp+60h] [rbp-148h]
  std::string _Right; // [rsp+70h] [rbp-138h] BYREF
  char _Buffer[256]; // [rsp+90h] [rbp-118h] BYREF

  if ( pInOutImage )
  {
    v14 = -2i64;
    if ( titleID )
    {
      LocalizeForder = anonymous_namespace_::getLocalizeForder((LANGUAGE_MODE)*(_DWORD *)(*(_QWORD *)&AppMain::pApp
                                                                                        + 2197384i64));
      if ( v5 >= 63 )
      {
        v5 -= 63;
        if ( v5 >= 99 )
        {
          v5 -= 99;
          if ( v5 >= 38 )
          {
            v5 -= 38;
            v6 = "08_HUD_title_rankS/08_HUD_title_s_";
          }
          else
          {
            v6 = "08_HUD_title_rankA/08_HUD_title_a_";
          }
        }
        else
        {
          v6 = "08_HUD_title_rankB/08_HUD_title_b_";
        }
      }
      else
      {
        v6 = "08_HUD_title_rankC/08_HUD_title_c_";
      }
      sprintf_s(_Buffer, 0x100ui64, "ui/loadData/localize/%s%s%03d.gnf", LocalizeForder, v6, v5);
      _Right._Mypair._Myval2._Myres = 15i64;
      _Right._Mypair._Myval2._Mysize = 0i64;
      _Right._Mypair._Myval2._Bx._Buf[0] = 0;
      if ( _Buffer[0] )
      {
        v7 = -1i64;
        do
          ++v7;
        while ( _Buffer[v7] );
      }
      else
      {
        v7 = 0i64;
      }
      std::string::assign(&_Right, _Buffer, v7);
      other.m_isNoCache = 0;
      v13._Mypair._Myval2._Myres = 15i64;
      v13._Mypair._Myval2._Mysize = 0i64;
      v13._Mypair._Myval2._Bx._Buf[0] = 0;
      std::string::assign(&v13, &_Right, 0i64, 0xFFFFFFFFFFFFFFFFui64);
      extension::BasicFutureObject<Image,extension::FutureImageOption>::AssetCache::getCachedOrLoadStart(
        v8,
        (extension::RefCountablePtr<extension::BasicFutureObject<Image,extension::FutureImageOption>::Body> *)&other.m_body,
        &v13,
        0i64);
      extension::BasicFutureObject<OGLSecondary,void>::operator=(
        (extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> *)pInOutImage,
        &other);
      m_ptr = other.m_body.m_ptr;
      if ( other.m_body.m_ptr
        && _InterlockedExchangeAdd64(
             (volatile signed __int64 *)&other.m_body.m_ptr->m_refCount.m_ptr->m_sharedCount,
             0xFFFFFFFFFFFFFFFFui64) == 1 )
      {
        ((void (__fastcall *)(extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body *, __int64))m_ptr->~RefCountableWeakSupportBase)(
          m_ptr,
          1i64);
      }
      if ( _Right._Mypair._Myval2._Myres >= 0x10 )
      {
        Ptr = _Right._Mypair._Myval2._Bx._Ptr;
        if ( _Right._Mypair._Myval2._Myres + 1 >= 0x1000 )
        {
          if ( (_Right._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
            invalid_parameter_noinfo_noreturn();
          v11 = (char *)*((_QWORD *)_Right._Mypair._Myval2._Bx._Ptr - 1);
          if ( v11 >= _Right._Mypair._Myval2._Bx._Ptr )
            invalid_parameter_noinfo_noreturn();
          if ( (char *)(_Right._Mypair._Myval2._Bx._Ptr - v11) < (char *)8 )
            invalid_parameter_noinfo_noreturn();
          if ( (char *)(_Right._Mypair._Myval2._Bx._Ptr - v11) > (char *)0x27 )
            invalid_parameter_noinfo_noreturn();
          Ptr = (char *)*((_QWORD *)_Right._Mypair._Myval2._Bx._Ptr - 1);
        }
        operator delete(Ptr);
      }
    }
  }
}

void __fastcall BattleHudResources::strationImagesByDrawHelper(BattleHudResources *this, DrawHelper *pDrawHelper)
{
  __int64 i; // rdi
  BattleHudResources::ImageResource *v5; // rsi
  extension::BasicFutureObject<Image,extension::FutureImageOption>::Body *m_ptr; // rbx
  extension::AsyncContent<Image> *v7; // rax
  extension::AsyncContent<Image> *v8; // rbx

  if ( pDrawHelper )
  {
    for ( i = 0i64; i < 4; ++i )
    {
      v5 = &this->m_pCommons[i];
      if ( v5 )
      {
        m_ptr = v5->image.m_body.m_ptr;
        v7 = m_ptr->m_content.m_ptr;
        if ( !v7 || v7->m_isDataReleased )
        {
          v5->imageID = -1;
        }
        else
        {
          v8 = m_ptr->m_content.m_ptr;
          if ( v7->m_isDataReleased )
          {
            v5->imageID = DrawHelper::setupImage(pDrawHelper, 0i64);
          }
          else
          {
            if ( (v7->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
              extension::AsyncStatus::waitFor(&v7->m_status, (extension::AsyncStatus::Step)pDrawHelper);
            v5->imageID = DrawHelper::setupImage(pDrawHelper, v8->m_data._Mypair._Myval2);
          }
        }
      }
    }
  }
}

