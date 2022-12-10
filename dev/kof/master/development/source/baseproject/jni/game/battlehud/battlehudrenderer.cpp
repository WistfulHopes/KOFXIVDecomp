#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actoroption.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_functions.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlehudgauge.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/cameracheck.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xfacet"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battleui.h"
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
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlehudnico2chat.h"
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
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_drawtext.h"
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
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlehudrenderer.h"
#include "dev/kof/master/development/source/baseproject/jni/game/system/battlecontroller.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/drawhelper/drawhelper_vertexbuffer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_font.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocinfo"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/array"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/drawhelper/drawhelper.h"
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
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlehudresources.h"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/damagesetting.h"
#include "dev/kof/master/development/source/baseproject/jni/game/onlineui/imagestring.h"
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
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestageutil.h"
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
#include "dev/kof/master/development/source/baseproject/jni/game/data/gamedatainfo.h"
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
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/easingutil.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/effect/actoreffect.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actorobject.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/mutex.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocnum"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/savedata.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/drawhelper/drawhelper.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlehudgauge.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/drawhelper/drawhelper_vertexbuffer.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlehudresources.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/appmain.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/data/savedata.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlehudlocalize.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/math.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/rapper/graphicsopt.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglrender.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/pcdummy.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/core/glstate.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglshader.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/image/graphics.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmatrix.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/ag/kofshadermanager.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/asyncjob.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlecall/battlecallshader.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_drawtext.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/ag/kofanticheat.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/onlineui/imagestring.cpp"

enum `anonymous-namespace'::IMAGE_TYPE
{
	IMAGE_COMMON = 0,
	IMAGE_PLAYER_ID = 1,
	IMAGE_STRINGS = 2,
	IMAGE_FIXED_PHRASE = 3,
	IMAGE_MAX = 4,
};
void BattleHudRenderer::renderHpGauge(const BattleHudGauge & gauge, const BattleHudRenderer::RenderParams & params); // 0x1400C3400
void BattleHudRenderer::renderGuardGauge(const BattleHudGauge & gauge, const BattleHudRenderer::RenderParams & params); // 0x1400C3D80
void BattleHudRenderer::renderSetCount(const BattleHudGauge & gauge, const BattleHudRenderer::RenderParams & params); // 0x1400C4560
void BattleHudRenderer::renderCharacterFace(const BattleHudGauge & gauge, const BattleHudRenderer::RenderParams & params); // 0x1400C47D0
void BattleHudRenderer::renderMemberInfo(BattleHudGauge & gauge, const BattleHudRenderer::RenderParams & params); // 0x1400C4B30
long BattleHudRenderer::renderMemberNameWindow(const BattleHudGauge & gauge, long slot, long renderX, long renderY, const BattleHudRenderer::RenderParams & params); // 0x1400C4C60
void BattleHudRenderer::renderMemberName(const BattleHudGauge & gauge, long slot, long renderX, long renderY, const BattleHudRenderer::RenderParams & params); // 0x1400C4E80
void BattleHudRenderer::renderActivityBonus(const BattleHudGauge & gauge, const BattleHudRenderer::RenderParams & params); // 0x1400C5080
void BattleHudRenderer::renderPowerGauge(const BattleHudGauge & gauge, const BattleHudRenderer::RenderParams & params); // 0x1400C52E0
void BattleHudRenderer::renderMaxmodeGauge(const BattleHudGauge & gauge, const BattleHudRenderer::RenderParams & params); // 0x1400C63C0
void BattleHudRenderer::renderSakeCount(const BattleHudGauge & gauge, const BattleHudRenderer::RenderParams & params); // 0x1400C71D0
void BattleHudRenderer::renderComboCount(const BattleHudGauge & gauge, const BattleHudRenderer::RenderParams & params); // 0x1400C7420
void BattleHudRenderer::renderComboNumber(long number, long renderX, long renderY, const DrawHelper::DrawParams & drawParams); // 0x1400C7AE0
void BattleHudRenderer::renderMessage(const BattleHudGauge & gauge, const BattleHudRenderer::RenderParams & params); // 0x1400C7DE0
void BattleHudRenderer::renderTimer(long time, float timerAnimationFrame, float animationFrame, const BattleHudRenderer::RenderParams & params); // 0x1400C8D00
void BattleHudRenderer::renderStageNo(long stageNo, const BattleHudRenderer::RenderParams & params); // 0x1400C94E0
void BattleHudRenderer::renderKeyRecording(long frame, long slot, const BattleHudRenderer::RenderParams & params); // 0x1400C9740
void BattleHudRenderer::renderKeyPlaying(long frame, long totalFrame, long slot, const BattleHudRenderer::RenderParams & params); // 0x1400C99A0
void BattleHudRenderer::renderKeyReady(long sec, long msec, long slot, const BattleHudRenderer::RenderParams & params); // 0x1400C9D70
void BattleHudRenderer::renderEntering(const BattleHudRenderer::RenderParams & params); // 0x1400CA040
void BattleHudRenderer::renderReversalReplay(const BattleHudRenderer::RenderParams & params, long imageType); // 0x1400CA120
void BattleHudRenderer::renderReplayDescription(long renderX, long renderY, float alpha); // 0x1400CA1F0
class BattleHudRenderer::renderReplayDescription::__l2::<lambda_12f345e3d0cc5ae5ea4cba773cc39826>
{
public:
	<lambda_12f345e3d0cc5ae5ea4cba773cc39826>(BattleHudRenderer::renderReplayDescription::__l2::<lambda_12f345e3d0cc5ae5ea4cba773cc39826> &);
	<lambda_12f345e3d0cc5ae5ea4cba773cc39826>();
	<lambda_12f345e3d0cc5ae5ea4cba773cc39826>(const AgControllerType &, const AgControllerHardwareType &);
private:
	const AgControllerType & type; // 0x0
	const AgControllerHardwareType & hwType; // 0x8
public:
	BattleHudRenderer::renderReplayDescription::__l2::<lambda_12f345e3d0cc5ae5ea4cba773cc39826> & operator=(const BattleHudRenderer::renderReplayDescription::__l2::<lambda_12f345e3d0cc5ae5ea4cba773cc39826> &);
};
void BattleHudRenderer::renderReplayOperateIcon(long renderX, long renderY, BattleHudCommonNumbers::EReplayIcon::Type type); // 0x1400CA910
void BattleHudRenderer::renderAttackData(PLAYER_ID playerID, long oneHitDamage, long comboDamage, long oneHitStun, long totalStun); // 0x1400CAA00
void BattleHudRenderer::renderUserInfoStoryMode(long totalScore, const BattleHudRenderer::RenderParams & params); // 0x1400CAD50
void BattleHudRenderer::renderUserInfoVersus(long winCountP1, long winCountP2, bool bPlayerCpuP1, bool bPlayerCpuP2, const BattleHudRenderer::RenderParams & params); // 0x1400CAE60
class BattleHudRenderer::renderUserInfoVersus::__l11::<lambda_647a72f1a3a664645329e2cb20b82c01>
{
public:
	`anonymous-namespace'::<unnamed-enum-HUD_STR_PLAYER_1> operator()();
	<lambda_647a72f1a3a664645329e2cb20b82c01>(BattleHudRenderer::renderUserInfoVersus::__l11::<lambda_647a72f1a3a664645329e2cb20b82c01> &);
	<lambda_647a72f1a3a664645329e2cb20b82c01>();
	<lambda_647a72f1a3a664645329e2cb20b82c01>(const AgControllerType &, const AgControllerHardwareType &);
private:
	const AgControllerType & type; // 0x0
	const AgControllerHardwareType & hwType; // 0x8
public:
	BattleHudRenderer::renderUserInfoVersus::__l11::<lambda_647a72f1a3a664645329e2cb20b82c01> & operator=(const BattleHudRenderer::renderUserInfoVersus::__l11::<lambda_647a72f1a3a664645329e2cb20b82c01> &);
};
const _C_CONV ImageRects_CharacterFace[12]; // 0x14088C780
std::piecewise_construct_t std::piecewise_construct; // 0x14088C4F9
void BattleHudRenderer::renderUserInfoTimeattackMode(unsigned long totalBattleFrame, const BattleHudRenderer::RenderParams & params); // 0x1400CB120
void BattleHudRenderer::renderUserInfoSurvivalMode(long winCount, const BattleHudRenderer::RenderParams & params); // 0x1400CB3A0
void BattleHudRenderer::renderUserInfoPlayerSymbol(const BattleHudRenderer::RenderParams & params); // 0x1400CB4D0
void BattleHudRenderer::renderUserInfoOnlineMode(const BattleHudGauge & gaugeP1, const BattleHudGauge & gaugeP2, const BattleHudRenderer::RenderParams & params); // 0x1400CB5E0
long BattleHudRenderer::renderMemberChatLog(BattleHudGauge & gauge, long slot, long renderX, long renderY, const BattleHudRenderer::RenderParams & params); // 0x1400CBBF0
long BattleHudRenderer::renderMemberChatLogWindow(PLAYER_ID playerID, long renderX, long renderY, float width, float animationFrame); // 0x1400CBE00
void BattleHudRenderer::renderSEShortcutKey(long rx, long ry, BattleHudCommonNumbers::ESESelectorPage::Type page, BattleHudCommonNumbers::ESESelectorSelectKey::Type selectKey, float alpha); // 0x1400CC000
class BattleHudRenderer::renderSEShortcutKey::__l2::<lambda_4b7f76e8ccb5e5a9b43e6682c2667618>
{
public:
	<lambda_4b7f76e8ccb5e5a9b43e6682c2667618>(BattleHudRenderer::renderSEShortcutKey::__l2::<lambda_4b7f76e8ccb5e5a9b43e6682c2667618> &);
	<lambda_4b7f76e8ccb5e5a9b43e6682c2667618>();
	<lambda_4b7f76e8ccb5e5a9b43e6682c2667618>(const AgControllerType &, const AgControllerHardwareType &);
private:
	const AgControllerType & type; // 0x0
	const AgControllerHardwareType & hwType; // 0x8
public:
	BattleHudRenderer::renderSEShortcutKey::__l2::<lambda_4b7f76e8ccb5e5a9b43e6682c2667618> & operator=(const BattleHudRenderer::renderSEShortcutKey::__l2::<lambda_4b7f76e8ccb5e5a9b43e6682c2667618> &);
};
void BattleHudRenderer::renderOperateDescription(long ry, BattleHudCommonNumbers::EOperateDescription::Type type, float alpha); // 0x1400CC5F0
class BattleHudRenderer::renderOperateDescription::__l2::<lambda_e3457c033967f89a2164c0a22de68812>
{
public:
	<lambda_e3457c033967f89a2164c0a22de68812>(BattleHudRenderer::renderOperateDescription::__l2::<lambda_e3457c033967f89a2164c0a22de68812> &);
	<lambda_e3457c033967f89a2164c0a22de68812>();
	<lambda_e3457c033967f89a2164c0a22de68812>(const AgControllerType &, const AgControllerHardwareType &);
private:
	const AgControllerType & ctype; // 0x0
	const AgControllerHardwareType & hwType; // 0x8
public:
	BattleHudRenderer::renderOperateDescription::__l2::<lambda_e3457c033967f89a2164c0a22de68812> & operator=(const BattleHudRenderer::renderOperateDescription::__l2::<lambda_e3457c033967f89a2164c0a22de68812> &);
};
void BattleHudRenderer::renderOperateCharacterSymbol(PLAYER_ID playerID, long rx, long ry, float alpha); // 0x1400CCA30
long BattleHudRenderer::renderImage(Image * pImage, long rx, long ry, const DrawHelper::DrawParams & drawParams); // 0x1400CCB50
long BattleHudRenderer::renderImage(long imageType, long imageIndex, long rx, long ry, const DrawHelper::DrawParams & drawParams); // 0x1400CCC70
long BattleHudRenderer::renderImageNmber(long imageIndex, long num, long numCount, long rx, long ry, const DrawHelper::DrawParams & drawParama, BattleHudResources::EImage::Type type); // 0x1400CCD20
long BattleHudRenderer::renderImageConvNmber(long imageIndex, long num, long numCount, long rx, long ry, const DrawHelper::DrawParams & drawParama, BattleHudResources::EImage::Type type); // 0x1400CCEC0
long BattleHudRenderer::renderImageTitle(Image * pImage, long rx, long ry, const DrawHelper::DrawParams & drawParams); // 0x1400CD060//decompilation failure at 14088C780!
//decompilation failure at 14088C4F9!
__int64 __fastcall Framework::GLManager::getGenericMapping(Framework::GLManager *this, AgGamepadButton button)
{
  std::_Tree_node<std::pair<enum AgGamepadButton const ,int>,void *> *Myhead; // rcx
  std::_Tree_node<std::pair<enum AgGamepadButton const ,int>,void *> *v3; // rax
  std::_Tree_node<std::pair<enum AgGamepadButton const ,int>,void *> *Parent; // r8

  Myhead = this->m_controllerContext.m_genericMappings.m_buttonIdLUT._Mypair._Myval2._Myval2._Myhead;
  v3 = Myhead;
  Parent = Myhead->_Parent;
  while ( !Parent->_Isnil )
  {
    if ( Parent->_Myval.first >= button )
    {
      v3 = Parent;
      Parent = Parent->_Left;
    }
    else
    {
      Parent = Parent->_Right;
    }
  }
  if ( v3 == Myhead || button < v3->_Myval.first )
    v3 = Myhead;
  if ( v3 == Myhead )
    return 0xFFFFFFFFi64;
  else
    return (unsigned int)v3->_Myval.second;
}

void __fastcall BattleHudRenderer::renderActivityBonus(
        BattleHudRenderer *this,
        const BattleHudGauge *gauge,
        const BattleHudRenderer::RenderParams *params)
{
  unsigned int v5; // ebp
  int ry; // esi
  __int64 v7; // r14
  BattleHudGauge::ActivityScoreParams *v8; // rbx
  BattleEventHandler::EActivity::Type type; // eax
  int v10; // edi
  BattleHudResources *m_pResources; // r15
  int imageID; // er15
  const _C_CONV *ImageRect; // rax
  int v14; // edx
  int v15; // er9
  int score; // er8
  int i; // ecx
  BOOL drawParama; // [rsp+30h] [rbp-78h]
  BattleHudResources::EImage::Type v19; // [rsp+38h] [rbp-70h]
  DrawHelper::DrawParams v20; // [rsp+40h] [rbp-68h] BYREF
  DrawHelper::DrawParams v21; // [rsp+60h] [rbp-48h] BYREF

  *(_QWORD *)&v20.renderMode = 0i64;
  *(_QWORD *)&v20.scaleW = 0x3F8000003F800000i64;
  v5 = 0;
  v20.alpha = 1.0;
  ry = 128;
  v20.bMirror = 0;
  v7 = 0i64;
  v20.colorARGB = -1;
  do
  {
    if ( v5 <= 2 )
    {
      v8 = &gauge->m_pActivites[v7];
      if ( v8 )
      {
        if ( v8->bVisible )
        {
          type = v8->type;
          if ( type )
          {
            switch ( type )
            {
              case COUNTER_HIT:
                v10 = 3;
                goto LABEL_19;
              case GUARD_CRASH:
                v10 = 5;
                goto LABEL_19;
              case REVERSAL:
                v10 = 8;
                goto LABEL_19;
              case SUPER_CANCEL:
                v10 = 10;
                goto LABEL_19;
              case ADVANCED_CANCEL:
                v10 = 11;
                goto LABEL_19;
              case CLIMAX_CANCEL:
                v10 = 12;
                goto LABEL_19;
              case THROW_ESCAPE:
                v10 = 13;
                goto LABEL_19;
              case GUARD_CANCEL:
                v10 = 14;
                goto LABEL_19;
              case JUST_GUARD:
                v10 = 15;
                goto LABEL_19;
              case STUN:
                v10 = 16;
                goto LABEL_19;
              case COMBO:
                v10 = 17;
                goto LABEL_19;
              case TECHNICAL:
                v10 = 18;
LABEL_19:
                m_pResources = this->m_pResources;
                if ( ((unsigned __int64 (__fastcall *)(BattleHudResources *, unsigned __int64, const BattleHudRenderer::RenderParams *))m_pResources->isError)(
                       m_pResources,
                       0x140000000ui64,
                       params) )
                {
                  imageID = -1;
                }
                else
                {
                  imageID = m_pResources->m_pCommons[2].imageID;
                }
                ImageRect = BattleHudResources::getImageRect(
                              this->m_pResources,
                              (BattleHudResources::EImage::Type)2,
                              v10);
                LOBYTE(drawParama) = 0;
                this->draw(this, imageID, 182, ry, ImageRect, &v20, drawParama);
                v15 = 0;
                score = v8->score;
                v21 = v20;
                v21.align = Right;
                if ( score )
                {
                  for ( i = score; i > 0; i /= 10 )
                  {
                    ++v15;
                    v14 = (unsigned __int64)(1717986919i64 * i) >> 32;
                  }
                }
                else
                {
                  v15 = 1;
                }
                BattleHudRenderer::renderImageNmber(this, v14, score, v15, 530, ry, &v21, v19);
                break;
              default:
                break;
            }
          }
        }
      }
    }
    ++v5;
    ++v7;
    ry += 30;
  }
  while ( ry < 218 );
}

void __fastcall BattleHudRenderer::renderAttackData(
        BattleHudRenderer *this,
        PLAYER_ID playerID,
        int oneHitDamage,
        int comboDamage,
        int oneHitStun,
        int totalStun)
{
  BattleHudResources *m_pResources; // rsi
  int v8; // er14
  int v11; // ebx
  int imageID; // ebp
  BattleHudResources *v13; // rsi
  const _C_CONV *rect; // rsi
  BattleHudResources *v15; // rsi
  int v16; // esi
  const _C_CONV *ImageRect; // r15
  BattleHudResources *v18; // rsi
  int v19; // esi
  const _C_CONV *v20; // r15
  BattleHudResources *v21; // rsi
  int v22; // esi
  const _C_CONV *v23; // r15
  BattleHudResources *v24; // rsi
  const _C_CONV *v25; // rsi
  bool drawParama; // [rsp+30h] [rbp-58h]
  DrawHelper::DrawParams params; // [rsp+40h] [rbp-48h] BYREF

  m_pResources = this->m_pResources;
  *(_QWORD *)&params.renderMode = 0i64;
  params.bMirror = 0;
  params.scaleW = 1.0;
  v8 = 1656;
  params.scaleH = 1.0;
  params.alpha = 1.0;
  params.colorARGB = -1;
  if ( playerID == PLAYER_ID_1P )
    v8 = 30;
  v11 = -1;
  if ( m_pResources->isError(m_pResources) )
    imageID = -1;
  else
    imageID = m_pResources->m_pCommons->imageID;
  v13 = this->m_pResources;
  if ( v13->isError(v13) )
    rect = &v13->m_errorWorkaround.rect;
  else
    rect = &ImageRects_Commons[293];
  if ( !this->isError(this) )
    DrawHelperVertexBuffer::drawConv(this, imageID, v8, 132, rect, &params, drawParama);
  v15 = this->m_pResources;
  params.align = Left;
  if ( v15->isError(v15) )
    v16 = -1;
  else
    v16 = v15->m_pCommons[2].imageID;
  ImageRect = BattleHudResources::getImageRect(this->m_pResources, (BattleHudResources::EImage::Type)2, 53);
  if ( !this->isError(this) )
    DrawHelperVertexBuffer::drawConv(this, v16, v8 + 2, 135, ImageRect, &params, drawParama);
  v18 = this->m_pResources;
  if ( v18->isError(v18) )
    v19 = -1;
  else
    v19 = v18->m_pCommons[2].imageID;
  v20 = BattleHudResources::getImageRect(this->m_pResources, (BattleHudResources::EImage::Type)2, 54);
  if ( !this->isError(this) )
    DrawHelperVertexBuffer::drawConv(this, v19, v8 + 2, 179, v20, &params, drawParama);
  v21 = this->m_pResources;
  if ( v21->isError(v21) )
    v22 = -1;
  else
    v22 = v21->m_pCommons[2].imageID;
  v23 = BattleHudResources::getImageRect(this->m_pResources, (BattleHudResources::EImage::Type)2, 55);
  if ( !this->isError(this) )
    DrawHelperVertexBuffer::drawConv(this, v22, v8 + 2, 223, v23, &params, drawParama);
  v24 = this->m_pResources;
  if ( !v24->isError(v24) )
    v11 = v24->m_pCommons[2].imageID;
  v25 = BattleHudResources::getImageRect(this->m_pResources, (BattleHudResources::EImage::Type)2, 56);
  if ( !this->isError(this) )
    DrawHelperVertexBuffer::drawConv(this, v11, v8 + 2, 267, v25, &params, drawParama);
  params.align = Right;
  BattleHudRenderer::renderImageConvNmber(this, 3, oneHitDamage, 4, v8 + 232, 153, &params, COMMON);
  BattleHudRenderer::renderImageConvNmber(this, 3, comboDamage, 4, v8 + 232, 197, &params, COMMON);
  BattleHudRenderer::renderImageConvNmber(this, 3, oneHitStun, 4, v8 + 232, 241, &params, COMMON);
  BattleHudRenderer::renderImageConvNmber(this, 3, totalStun, 4, v8 + 232, 285, &params, COMMON);
}

void __fastcall BattleHudRenderer::renderCharacterFace(
        BattleHudRenderer *this,
        const BattleHudGauge *gauge,
        const BattleHudRenderer::RenderParams *params)
{
  PLAYER_ID m_playerID; // ebx
  BattleHudRenderer_vtbl *v7; // rax
  float v8; // xmm1_4
  float v9; // xmm2_4
  __int64 v10; // rax
  unsigned int imageID; // ebx
  unsigned int gaugeRenderColor; // er14
  BattleHudRenderer_vtbl *v13; // rax
  unsigned int v14; // er15
  unsigned int v15; // er12
  __int128 v16; // xmm10
  unsigned int v17; // xmm11_4^4
  float v18; // xmm7_4
  float m_stunAnimationCounter; // xmm6_4
  float v20; // xmm1_4
  float v21; // xmm1_4
  BattleHudRenderer_vtbl *v22; // rax
  float v23; // xmm1_4
  float v24; // xmm0_4
  float v25; // xmm6_4
  BattleHudRenderer_vtbl *v26; // rax
  BOOL v27; // [rsp+38h] [rbp-69h]
  BOOL v28; // [rsp+38h] [rbp-69h]
  __int128 v29; // [rsp+48h] [rbp-59h] BYREF
  unsigned __int64 v30; // [rsp+58h] [rbp-49h]
  unsigned int v31; // [rsp+60h] [rbp-41h]
  __int128 v32; // [rsp+68h] [rbp-39h]
  unsigned __int64 v33; // [rsp+78h] [rbp-29h]
  __int128 v34; // [rsp+80h] [rbp-21h]

  m_playerID = gauge->m_playerID;
  *(_QWORD *)&v32 = 0i64;
  BYTE4(v33) = 0;
  *(_QWORD *)&v29 = 0i64;
  BYTE4(v30) = 0;
  v7 = this->__vftable;
  *((_QWORD *)&v32 + 1) = 0x3F8000003F800000i64;
  LODWORD(v33) = 1065353216;
  LODWORD(v34) = -1;
  *((_QWORD *)&v29 + 1) = 0x3F8000003F800000i64;
  LODWORD(v30) = 1065353216;
  v31 = -1;
  v7->setClip(this, 0, 0, 1920, 1080);
  v8 = *(float *)&FLOAT_70_0;
  v9 = (float)(params->positionPlusY + 49);
  if ( m_playerID == PLAYER_ID_2P )
  {
    v8 = FLOAT_1850_0;
    if ( (float)((float)*(int *)(*(_QWORD *)&AppMain::pApp + 28i64) / 1920.0) != 1.0 )
      v8 = FLOAT_1851_0;
  }
  v10 = gauge->m_topOrderIndex % 3;
  if ( gauge->m_memberInfos[v10].characterNo != CHARACTER_NO_NONE )
  {
    imageID = gauge->m_memberInfos[v10].imageFace.imageID;
    gaugeRenderColor = params->gaugeRenderColor;
    v13 = this->__vftable;
    v14 = (int)v9;
    v31 = gaugeRenderColor;
    v15 = (int)v8;
    v16 = v32;
    v17 = HIDWORD(v33);
    v29 = v32;
    v30 = v33;
    v13->draw(this, imageID, (int)v8, (int)v9, &ImageRects_CharacterFace[1], (const DrawHelper::DrawParams *)&v29, 0);
    if ( !gauge->m_bEnabledSpEffects || !gauge->m_bStunEnableAnimation )
      goto LABEL_22;
    v18 = 0.0;
    m_stunAnimationCounter = (float)(int)gauge->m_stunAnimationCounter;
    if ( m_stunAnimationCounter < 0.0 || m_stunAnimationCounter <= 4.0 )
      goto LABEL_14;
    if ( m_stunAnimationCounter > 24.0
      || (v20 = 1.0 - (float)((float)(m_stunAnimationCounter - 4.0) / 20.0), v20 <= 0.0) )
    {
      v21 = 0.0;
      goto LABEL_15;
    }
    if ( v20 >= 1.0 )
LABEL_14:
      LODWORD(v21) = FLOAT_1_0;
    else
      v21 = v20 + 0.0;
LABEL_15:
    v22 = this->__vftable;
    LOBYTE(v27) = 0;
    v30 = __PAIR64__(v17, LODWORD(v21));
    v31 = gaugeRenderColor;
    v29 = v16;
    v22->draw(this, imageID, v15, v14, ImageRects_CharacterFace, (const DrawHelper::DrawParams *)&v29, v27);
    if ( m_stunAnimationCounter >= 2.0 )
    {
      if ( m_stunAnimationCounter <= 4.0 )
      {
        v23 = *(float *)&FLOAT_1_0;
        v24 = 0.0;
        v25 = (float)(m_stunAnimationCounter - 2.0) * 0.5;
LABEL_20:
        v18 = Tween::easing(v24, v23, v25, Linear);
        goto LABEL_21;
      }
      if ( m_stunAnimationCounter <= 44.0 )
      {
        v23 = 0.0;
        v24 = *(float *)&FLOAT_1_0;
        v25 = (float)(m_stunAnimationCounter - 4.0) / 40.0;
        goto LABEL_20;
      }
    }
LABEL_21:
    v26 = this->__vftable;
    LOBYTE(v28) = 0;
    v29 = v16;
    v30 = __PAIR64__(v17, LODWORD(v18));
    v31 = gaugeRenderColor;
    LODWORD(v29) = 1;
    v26->draw(this, imageID, v15, v14, ImageRects_CharacterFace, (const DrawHelper::DrawParams *)&v29, v28);
LABEL_22:
    this->clearClip(this);
    this->drawStack(this);
  }
}

void __fastcall BattleHudRenderer::renderComboCount(
        BattleHudRenderer *this,
        const BattleHudGauge *gauge,
        const BattleHudRenderer::RenderParams *params)
{
  int m_comboCount; // er13
  float v7; // xmm6_4
  float v8; // xmm7_4
  float v9; // xmm8_4
  float m_comboAnimationCounter; // xmm9_4
  float v11; // xmm12_4
  int v12; // ecx
  float v13; // xmm14_4
  float v14; // xmm2_4
  float v15; // xmm0_4
  float v16; // xmm0_4
  float m_comboEraseFrame; // xmm2_4
  float v18; // xmm13_4
  float v19; // xmm1_4
  int v20; // er15
  int v21; // eax
  __int128 v22; // xmm11
  int v23; // esi
  int v24; // ebx
  __int64 v25; // xmm9_8
  float v26; // xmm0_4
  float v27; // xmm0_4
  float v28; // xmm12_4
  float v29; // xmm0_4
  int v30; // edx
  float v31; // xmm1_4
  float v32; // xmm0_4
  float v33; // xmm2_4
  int v34; // edx
  BattleHudResources *m_pResources; // rbx
  unsigned int v36; // er12
  unsigned int v37; // esi
  unsigned int imageID; // ebx
  const _C_CONV *ImageRect; // r14
  BattleHudRenderer_vtbl *v40; // rax
  __int64 v41; // r9
  __int64 v42; // r8
  BattleHudRenderer *v43; // rcx
  __int64 v44; // rdx
  float v45; // [rsp+48h] [rbp-C0h]
  float v46; // [rsp+4Ch] [rbp-BCh]
  int v47; // [rsp+50h] [rbp-B8h]
  int v48; // [rsp+54h] [rbp-B4h]
  DrawHelper::DrawParams drawParams; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v50; // [rsp+78h] [rbp-90h]
  __int64 v51; // [rsp+88h] [rbp-80h]
  int v52; // [rsp+170h] [rbp+68h]
  float t; // [rsp+180h] [rbp+78h]

  m_comboCount = gauge->m_comboCount;
  if ( m_comboCount <= 1 )
    return;
  v7 = *(float *)&FLOAT_1_0;
  v8 = *(float *)&FLOAT_1_0;
  v9 = *(float *)&FLOAT_1_0;
  m_comboAnimationCounter = gauge->m_comboAnimationCounter;
  v11 = *(float *)&FLOAT_1_0;
  v12 = (int)m_comboAnimationCounter;
  *((_QWORD *)&v50 + 1) = 0x3F8000003F800000i64;
  LODWORD(v51) = 1065353216;
  v46 = *(float *)&FLOAT_1_0;
  v13 = *(float *)&FLOAT_1_0;
  v45 = *(float *)&FLOAT_1_0;
  *(_QWORD *)&v50 = 0i64;
  BYTE4(v51) = 0;
  v52 = (int)m_comboAnimationCounter;
  if ( (int)m_comboAnimationCounter <= 14 )
  {
    if ( v12 <= 3 )
    {
      v14 = m_comboAnimationCounter / 3.0;
      if ( (float)(m_comboAnimationCounter / 3.0) > 0.0 )
      {
        if ( v14 < 1.0 )
          v8 = (float)((float)((float)(v14 * 0.60000002) / 0.60000002) * 0.60000002) + 1.0;
        else
          v8 = FLOAT_1_6;
      }
      if ( v14 > 0.0 )
      {
        if ( v14 < 1.0 )
          v9 = (float)((float)((float)(v14 * 0.030000001) / 0.030000001) * 0.030000001) + 0.02;
        else
          v9 = *(float *)&FLOAT_0_050000001;
      }
      else
      {
        v9 = FLOAT_0_02;
      }
      v15 = Tween::easing(0.0, 1.0, v14, Linear);
      v12 = (int)m_comboAnimationCounter;
      v11 = v15;
      v45 = v15;
    }
    if ( v12 > 4 )
    {
      v16 = Tween::easing(1.0, 0.0, (float)(m_comboAnimationCounter - 4.0) / 10.0, Linear);
      v12 = (int)m_comboAnimationCounter;
      v13 = v16;
      v46 = v16;
    }
  }
  m_comboEraseFrame = gauge->m_comboEraseFrame;
  v18 = *(float *)&FLOAT_1_0;
  if ( m_comboAnimationCounter >= m_comboEraseFrame )
  {
    v19 = (float)(m_comboAnimationCounter - m_comboEraseFrame) - 60.0;
    if ( v19 > 0.0 )
      v18 = 1.0 - (float)(v19 / 12.0);
  }
  v20 = params->positionPlusY + 315;
  v21 = params->positionPlusX + 230;
  v22 = v50;
  v23 = 1920 - v21;
  v24 = (int)(float)(m_comboAnimationCounter - gauge->m_comboChangeFrame);
  if ( gauge->m_playerID != PLAYER_ID_2P )
    v23 = v21;
  v25 = v51;
  if ( (unsigned int)v24 > 0xC )
  {
    *(_QWORD *)&drawParams.alpha = v51;
    v34 = m_comboCount;
    *(_OWORD *)&drawParams.renderMode = v50;
    if ( v12 > 14 )
    {
      drawParams.alpha = v18;
    }
    else
    {
      drawParams.scaleW = v8;
      drawParams.scaleH = v9;
      drawParams.alpha = v11;
      drawParams.colorARGB = -1;
      BattleHudRenderer::renderComboNumber(this, m_comboCount, v23, v20, &drawParams);
      v34 = gauge->m_comboCount;
      drawParams.align = DWORD1(v22);
      drawParams.renderMode = VISIBLE;
      *(_DWORD *)&drawParams.bMirror = HIDWORD(v25);
      drawParams.scaleW = v8;
      drawParams.scaleH = v9;
      drawParams.alpha = v13;
    }
    goto LABEL_46;
  }
  if ( v24 <= 8 )
  {
    t = (float)v24 * 0.125;
    v48 = v23 + (int)Tween::easing(0.0, 20.0, t, Linear);
    v47 = v20 + (int)Tween::easing(0.0, -30.0, t, Linear);
    if ( v24 > 4 )
      v26 = *(float *)&FLOAT_0_80000001;
    else
      v26 = Tween::easing(1.0, 0.80000001, (float)v24 * 0.25, Linear);
    *(_QWORD *)&drawParams.renderMode = v50;
    drawParams.colorARGB = -1;
    drawParams.scaleH = v26;
    drawParams.scaleW = v26;
    *(_DWORD *)&drawParams.bMirror = HIDWORD(v51);
    drawParams.alpha = Tween::easing(1.0, 0.0, t, Linear);
    BattleHudRenderer::renderComboNumber(this, m_comboCount - 1, v48, v47, &drawParams);
    v27 = Tween::easing(20.0, 0.0, (float)v24 * 0.125, Linear);
    v23 -= (int)v27;
    v20 += (int)v27;
  }
  if ( v24 > 4 )
  {
    if ( v24 > 8 )
      v28 = *(float *)&FLOAT_1_0;
    else
      v28 = Tween::easing(1.3, 1.0, (float)(v24 - 4) * 0.25, Linear);
  }
  else
  {
    v28 = *(float *)&FLOAT_1_3;
  }
  if ( v24 < 4 )
    goto LABEL_38;
  v29 = v24 < 8 ? Tween::easing(0.0, 1.0, (float)(v24 - 4) * 0.25, Linear) : *(float *)&FLOAT_1_0;
  v30 = gauge->m_comboCount;
  *(_QWORD *)&drawParams.renderMode = v22;
  *(_DWORD *)&drawParams.bMirror = HIDWORD(v25);
  drawParams.scaleH = v28;
  drawParams.scaleW = v28;
  drawParams.alpha = v29;
  drawParams.colorARGB = -1;
  BattleHudRenderer::renderComboNumber(this, v30, v23, v20, &drawParams);
  if ( v24 <= 4 )
  {
LABEL_38:
    v31 = *(float *)&FLOAT_1_0;
    v32 = 0.0;
    v33 = (float)v24 * 0.25;
LABEL_41:
    v7 = Tween::easing(v32, v31, v33, Linear);
    goto LABEL_42;
  }
  if ( v24 > 8 )
  {
    v31 = 0.0;
    v32 = *(float *)&FLOAT_1_0;
    v33 = (float)(v24 - 8) / 5.0;
    goto LABEL_41;
  }
LABEL_42:
  v34 = gauge->m_comboCount;
  drawParams.align = DWORD1(v22);
  drawParams.renderMode = VISIBLE;
  *(_DWORD *)&drawParams.bMirror = HIDWORD(v25);
  drawParams.scaleH = v28;
  drawParams.scaleW = v28;
  drawParams.alpha = v7;
LABEL_46:
  drawParams.colorARGB = -1;
  BattleHudRenderer::renderComboNumber(this, v34, v23, v20, &drawParams);
  m_pResources = this->m_pResources;
  v36 = 1920 - (params->positionPlusX + 233);
  v37 = params->positionPlusY + 403;
  if ( gauge->m_playerID != PLAYER_ID_2P )
    v36 = params->positionPlusX + 233;
  if ( m_pResources->isError(this->m_pResources) )
    imageID = -1;
  else
    imageID = m_pResources->m_pCommons->imageID;
  ImageRect = BattleHudResources::getImageRect(this->m_pResources, UNIQUE, 59);
  v40 = this->__vftable;
  v41 = v37;
  v42 = v36;
  v43 = this;
  *(_OWORD *)&drawParams.renderMode = v22;
  v44 = imageID;
  drawParams.colorARGB = -1;
  *(_QWORD *)&drawParams.alpha = v25;
  if ( v52 > 14 )
  {
    drawParams.alpha = v18;
  }
  else
  {
    drawParams.alpha = v45;
    drawParams.scaleW = v8;
    drawParams.scaleH = v9;
    v40->draw(this, imageID, v36, v37, ImageRect, &drawParams, 0);
    v40 = this->__vftable;
    v41 = v37;
    drawParams.align = DWORD1(v22);
    v42 = v36;
    v44 = imageID;
    *(_DWORD *)&drawParams.bMirror = HIDWORD(v25);
    v43 = this;
    drawParams.alpha = v46;
    drawParams.scaleW = v8;
    drawParams.scaleH = v9;
    drawParams.colorARGB = -1;
    drawParams.renderMode = VISIBLE;
  }
  ((void (__fastcall *)(BattleHudRenderer *, __int64, __int64, __int64))v40->draw)(v43, v44, v42, v41);
}

void __fastcall BattleHudRenderer::renderComboNumber(
        BattleHudRenderer *this,
        int number,
        int renderX,
        int renderY,
        const DrawHelper::DrawParams *drawParams)
{
  BattleHudResources *m_pResources; // rsi
  int imageID; // er15
  BattleHudResources *v11; // rsi
  const _C_CONV *v12; // r12
  BattleHudResources *v13; // r13
  const _C_CONV *v14; // rax
  BattleHudResources *v15; // r13
  const _C_CONV *v16; // rsi
  BattleHudResources *v17; // r13
  const _C_CONV *v18; // r13
  BattleHudResources *v19; // r12
  const _C_CONV *v20; // rsi
  BattleHudResources *v21; // rsi
  const _C_CONV *p_rect; // rcx
  BOOL v23; // [rsp+30h] [rbp-48h]
  BOOL v24; // [rsp+30h] [rbp-48h]
  BOOL v25; // [rsp+30h] [rbp-48h]
  const _C_CONV *v26; // [rsp+80h] [rbp+8h]

  m_pResources = this->m_pResources;
  if ( m_pResources->isError(m_pResources) )
    imageID = -1;
  else
    imageID = m_pResources->m_pCommons->imageID;
  if ( number < 100 )
  {
    if ( number < 10 )
    {
      v21 = this->m_pResources;
      if ( v21->isError(v21) )
        p_rect = &v21->m_errorWorkaround.rect;
      else
        p_rect = &ImageRects_Commons[number % 10 + 49];
      this->draw(this, imageID, renderX, renderY, p_rect, drawParams, 0);
    }
    else
    {
      v17 = this->m_pResources;
      if ( v17->isError(v17) )
        v18 = &v17->m_errorWorkaround.rect;
      else
        v18 = &ImageRects_Commons[number / 10 % 10 + 49];
      v19 = this->m_pResources;
      if ( v19->isError(v19) )
        v20 = &v19->m_errorWorkaround.rect;
      else
        v20 = &ImageRects_Commons[number % 10 + 49];
      this->draw(this, imageID, renderX - 39, renderY, v18, drawParams, 0);
      LOBYTE(v25) = 0;
      this->draw(this, imageID, renderX + 36, renderY, v20, drawParams, v25);
    }
  }
  else
  {
    v11 = this->m_pResources;
    if ( v11->isError(v11) )
      v12 = &v11->m_errorWorkaround.rect;
    else
      v12 = &ImageRects_Commons[((int)((unsigned __int64)(1374389535i64 * number) >> 32) >> 5)
                              + ((unsigned int)((unsigned __int64)(1374389535i64 * number) >> 32) >> 31)
                              + 49];
    v13 = this->m_pResources;
    if ( v13->isError(v13) )
      v14 = &v13->m_errorWorkaround.rect;
    else
      v14 = &ImageRects_Commons[number / 10 % 10 + 49];
    v15 = this->m_pResources;
    v26 = v14;
    if ( v15->isError(v15) )
      v16 = &v15->m_errorWorkaround.rect;
    else
      v16 = &ImageRects_Commons[number % 10 + 49];
    this->draw(this, imageID, renderX - 75, renderY, v12, drawParams, 0);
    LOBYTE(v23) = 0;
    this->draw(this, imageID, renderX, renderY, v26, drawParams, v23);
    LOBYTE(v24) = 0;
    this->draw(this, imageID, renderX + 75, renderY, v16, drawParams, v24);
  }
}

void __fastcall BattleHudRenderer::renderEntering(
        BattleHudRenderer *this,
        const BattleHudRenderer::RenderParams *params)
{
  BattleHudResources *m_pResources; // rdi
  int imageID; // edi
  const _C_CONV *ImageRect; // rax
  const _C_CONV *rect; // rsi
  int positionPlusY; // er14
  int v9; // ebp
  BattleHudRenderer_vtbl *v10; // rax
  DrawHelper::DrawParams v11; // [rsp+30h] [rbp-28h] BYREF

  m_pResources = this->m_pResources;
  if ( m_pResources->isError(m_pResources) )
    imageID = -1;
  else
    imageID = m_pResources->m_pCommons[2].imageID;
  ImageRect = BattleHudResources::getImageRect(this->m_pResources, (BattleHudResources::EImage::Type)2, 6);
  rect = ImageRect;
  if ( ImageRect )
  {
    positionPlusY = params->positionPlusY;
    v9 = 960 - ImageRect->w / 2;
    v11.scaleW = 1.0;
    v11.scaleH = 1.0;
    *(_QWORD *)&v11.renderMode = 0i64;
    v11.bMirror = 0;
    v10 = this->__vftable;
    v11.alpha = 1.0;
    v11.colorARGB = -1;
    if ( !v10->isError(this) )
      DrawHelperVertexBuffer::drawConv(this, imageID, v9, positionPlusY + 145, rect, &v11, v11.renderMode);
  }
}

void __fastcall BattleHudRenderer::renderGuardGauge(
        BattleHudRenderer *this,
        const BattleHudGauge *gauge,
        const BattleHudRenderer::RenderParams *params)
{
  BattleHudResources *m_pResources; // rdi
  __int64 v7; // r13
  PLAYER_ID m_playerID; // eax
  BattleHudResources *v9; // rdi
  unsigned int gaugeRenderColor; // esi
  int v11; // er12
  float v12; // xmm6_4
  bool v13; // zf
  BattleHudResources_vtbl *v14; // rax
  float v15; // xmm14_4
  const _C_CONV *p_rect; // rcx
  bool v17; // al
  BattleHudRenderer_vtbl *v18; // rax
  int v19; // esi
  BattleHudResources *v20; // rdi
  float m_guardRate; // xmm0_4
  BattleHudResources_vtbl *v22; // rax
  const _C_CONV *v23; // rdi
  __int128 v24; // xmm0
  BattleHudResources *v25; // rdi
  const _C_CONV *v26; // rdi
  const _C_CONV *v27; // rdi
  __int128 v28; // xmm0
  BattleHudResources *v29; // rdi
  float v30; // xmm10_4
  float v31; // xmm8_4
  float v32; // xmm8_4
  int v33; // er14
  int v34; // edi
  BattleHudRenderer_vtbl *v35; // r10
  float v36; // xmm2_4
  __int64 v37; // r9
  int v38; // eax
  float v39; // xmm1_4
  float v40; // xmm8_4
  int v41; // esi
  BattleHudResources *v42; // rdi
  BattleHudResources_vtbl *v43; // rax
  const _C_CONV *v44; // rdi
  float v45; // xmm1_4
  float v46; // xmm7_4
  float v47; // xmm2_4
  float v48; // xmm1_4
  PLAYER_ID v49; // er13
  float v50; // xmm6_4
  float v51; // xmm6_4
  float v52; // xmm1_4
  float v53; // xmm0_4
  float v54; // xmm2_4
  __int64 v55; // rdx
  BattleHudRenderer_vtbl *v56; // rax
  float v57; // xmm0_4
  float w; // xmm0_4
  int v59; // er8
  const _C_CONV *ImageRect; // rcx
  BattleHudRenderer_vtbl *v61; // rax
  BOOL v62; // [rsp+30h] [rbp-D0h]
  BOOL v63; // [rsp+30h] [rbp-D0h]
  PLAYER_ID v64; // [rsp+40h] [rbp-C0h]
  unsigned int imageID; // [rsp+44h] [rbp-BCh]
  __int128 v66; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v67; // [rsp+58h] [rbp-A8h]
  unsigned int v68; // [rsp+60h] [rbp-A0h]
  __int128 v69; // [rsp+68h] [rbp-98h] BYREF
  __int64 v70; // [rsp+78h] [rbp-88h]
  unsigned int barRenderColor; // [rsp+80h] [rbp-80h]
  __int128 v72; // [rsp+88h] [rbp-78h]
  __int64 v73; // [rsp+98h] [rbp-68h]
  _C_CONV v74; // [rsp+A8h] [rbp-58h] BYREF
  __int128 v75; // [rsp+B8h] [rbp-48h] BYREF

  m_pResources = this->m_pResources;
  if ( m_pResources->isError(m_pResources) )
    imageID = -1;
  else
    imageID = m_pResources->m_pCommons->imageID;
  v7 = *(_QWORD *)&AppMain::pApp;
  this->clearClip(this);
  *(_QWORD *)&v69 = 0i64;
  BYTE4(v70) = 0;
  *(_QWORD *)&v72 = 0i64;
  BYTE4(v73) = 0;
  *(_QWORD *)&v66 = 0i64;
  BYTE4(v67) = 0;
  m_playerID = gauge->m_playerID;
  *((_QWORD *)&v69 + 1) = 0x3F8000003F800000i64;
  LODWORD(v70) = 1065353216;
  *((_QWORD *)&v72 + 1) = 0x3F8000003F800000i64;
  LODWORD(v73) = 1065353216;
  *((_QWORD *)&v66 + 1) = 0x3F8000003F800000i64;
  LODWORD(v67) = 1065353216;
  v68 = -1;
  v64 = m_playerID;
  if ( m_playerID == PLAYER_ID_2P )
  {
    BYTE4(v70) = 1;
    DWORD1(v69) = 1;
  }
  v9 = this->m_pResources;
  gaugeRenderColor = params->gaugeRenderColor;
  v11 = params->positionPlusY + 115;
  v12 = FLOAT_563_0;
  v13 = m_playerID == PLAYER_ID_2P;
  barRenderColor = gaugeRenderColor;
  v14 = v9->__vftable;
  v15 = (float)v11;
  if ( v13 )
  {
    v17 = v14->isError(v9);
    p_rect = &v9->m_errorWorkaround.rect;
    if ( !v17 )
      p_rect = &ImageRects_Commons[190];
    v12 = FLOAT_1357_0;
  }
  else if ( v14->isError(v9) )
  {
    p_rect = &v9->m_errorWorkaround.rect;
  }
  else
  {
    p_rect = &ImageRects_Commons[189];
  }
  v18 = this->__vftable;
  v68 = gaugeRenderColor;
  v19 = imageID;
  v66 = v72;
  v67 = v73;
  v18->draw(this, imageID, (int)v12, (int)v15, p_rect, (const DrawHelper::DrawParams *)&v66, 0);
  v20 = this->m_pResources;
  m_guardRate = gauge->m_guardRate;
  barRenderColor = params->barRenderColor;
  v22 = v20->__vftable;
  if ( m_guardRate < 0.30000001 )
  {
    if ( v22->isError(v20) )
      v27 = &v20->m_errorWorkaround.rect;
    else
      v27 = &ImageRects_Commons[192];
    v28 = (__int128)*v27;
    v29 = this->m_pResources;
    v75 = v28;
    if ( v29->isError(v29) )
      v26 = &v29->m_errorWorkaround.rect;
    else
      v26 = &ImageRects_Commons[306];
  }
  else
  {
    if ( v22->isError(v20) )
      v23 = &v20->m_errorWorkaround.rect;
    else
      v23 = &ImageRects_Commons[191];
    v24 = (__int128)*v23;
    v25 = this->m_pResources;
    v75 = v24;
    if ( v25->isError(v25) )
      v26 = &v25->m_errorWorkaround.rect;
    else
      v26 = &ImageRects_Commons[305];
  }
  v30 = FLOAT_632_0;
  v74 = *v26;
  if ( v64 == PLAYER_ID_2P )
    v31 = FLOAT_1288_0;
  else
    v31 = FLOAT_632_0;
  v32 = v31 + 1.0;
  v33 = (int)(float)((float)(params->barLengthRate * gauge->m_guardRate) * (float)SWORD2(v75));
  v34 = SWORD2(v75) - v33;
  if ( *(_DWORD *)(v7 + 2507512) )
  {
    v35 = this->__vftable;
    LOBYTE(v62) = 1;
    v36 = (float)*(int *)(*(_QWORD *)&AppMain::pApp + 28i64) / 1920.0;
    v37 = (unsigned int)(int)(float)((float)((float)*(int *)(*(_QWORD *)&AppMain::pApp + 32i64) / 1080.0) * v15);
    v38 = (int)(float)((float)v34 * v36);
    v74.sx += v38;
    v74.w -= v38;
    v39 = v32 * v36;
    if ( gauge->m_playerID == PLAYER_ID_2P )
    {
      v35->draw(
        this,
        imageID,
        (int)(float)(v39 - (float)(v38 + 2)),
        v37,
        &v74,
        (const DrawHelper::DrawParams *)&v69,
        v62);
      v40 = v32 - (float)(v34 + 1);
    }
    else
    {
      v35->draw(
        this,
        imageID,
        (int)(float)(v39 + (float)(v38 - 1)),
        v37,
        &v74,
        (const DrawHelper::DrawParams *)&v69,
        v62);
      v40 = (float)(v34 - 1) + v32;
    }
  }
  else
  {
    LOWORD(v75) = v34 + v75;
    if ( gauge->m_playerID == PLAYER_ID_2P )
    {
      WORD2(v75) = v33;
      v40 = v32 - (float)(v34 + 1);
    }
    else
    {
      WORD2(v75) = v33;
      v40 = (float)(v34 - 1) + v32;
    }
    LOBYTE(v62) = 0;
    this->draw(this, imageID, (int)v40, (int)v15, (const _C_CONV *)&v75, (const DrawHelper::DrawParams *)&v69, v62);
  }
  if ( !gauge->m_bEnabledSpEffects )
    goto LABEL_72;
  v41 = (int)gauge->m_animationCounter % 160;
  if ( v41 > 39 )
  {
    v19 = imageID;
LABEL_72:
    v49 = v64;
    goto LABEL_73;
  }
  v42 = this->m_pResources;
  v43 = v42->__vftable;
  if ( gauge->m_guardRate < 0.30000001 )
  {
    if ( v43->isError(v42) )
      v44 = &v42->m_errorWorkaround.rect;
    else
      v44 = &ImageRects_Commons[61];
  }
  else if ( v43->isError(v42) )
  {
    v44 = &v42->m_errorWorkaround.rect;
  }
  else
  {
    v44 = &ImageRects_Commons[60];
  }
  v45 = FLOAT_632_0;
  v46 = (float)(v44->w + 632);
  v47 = (float)v41 / 39.0;
  if ( v46 != 632.0 )
  {
    if ( v46 > 632.0 )
    {
      v45 = (float)(v44->w + 632);
      v46 = FLOAT_632_0;
      v47 = 1.0 - v47;
    }
    if ( v47 > 0.0 )
    {
      if ( v47 < 1.0 )
      {
        v48 = v45 - v46;
        if ( v48 < 0.0 )
          LODWORD(v48) ^= _xmm;
        v46 = (float)((float)((float)(v48 * v47) / v48) * v48) + v46;
      }
      else
      {
        v46 = v45;
      }
    }
  }
  v49 = v64;
  if ( v64 == PLAYER_ID_2P )
    v46 = 1920.0 - v46;
  if ( v41 > 10 )
  {
    if ( v41 > 33 )
    {
      v53 = FLOAT_3_5;
      v52 = 0.0;
      v54 = (float)(v41 - 33) / 6.0;
    }
    else
    {
      v52 = FLOAT_3_5;
      v53 = *(float *)&FLOAT_3_0;
      v54 = (float)(v41 - 10) / 23.0;
    }
    v51 = Tween::easing(v53, v52, v54, Linear);
  }
  else
  {
    v50 = (float)v41 / 10.0;
    if ( v50 > 0.0 )
    {
      if ( v50 < 1.0 )
        v51 = (float)((float)((float)(v50 * 3.0) / 3.0) * 3.0) + 0.0;
      else
        v51 = *(float *)&FLOAT_3_0;
    }
    else
    {
      v51 = 0.0;
    }
  }
  if ( v64 == PLAYER_ID_2P )
    v55 = (unsigned int)(int)(float)(v40 - (float)v33);
  else
    v55 = (unsigned int)(int)v40;
  this->setClip(this, v55, v11 - v44->cy, v33, v44->h);
  v19 = imageID;
  v68 = barRenderColor;
  v56 = this->__vftable;
  LOBYTE(v63) = 0;
  v66 = v69;
  LODWORD(v66) = 1;
  *((float *)&v66 + 2) = v51 / 14.0;
  v67 = v70;
  v56->draw(this, imageID, (int)v46, (int)v15, v44, (const DrawHelper::DrawParams *)&v66, v63);
  this->clearClip(this);
LABEL_73:
  v57 = gauge->m_guardRate;
  if ( v57 > 0.0 && v57 < 1.0 )
  {
    w = (float)BattleHudResources::getImageRect(this->m_pResources, UNIQUE, 191)->w;
    if ( v49 == PLAYER_ID_2P )
      v30 = 1288.0 - w;
    this->setClip(this, (int)v30, 0, (int)w, 1080);
    v59 = 195;
    if ( gauge->m_guardRate < 0.30000001 )
      v59 = 198;
    ImageRect = BattleHudResources::getImageRect(this->m_pResources, UNIQUE, v59);
    v68 = barRenderColor;
    v61 = this->__vftable;
    LOBYTE(v63) = 0;
    v66 = v69;
    LODWORD(v66) = 1;
    v67 = v70;
    v61->draw(this, v19, (int)v40, (int)v15, ImageRect, (const DrawHelper::DrawParams *)&v66, v63);
    this->clearClip(this);
  }
}

void __fastcall BattleHudRenderer::renderHpGauge(
        BattleHudRenderer *this,
        const BattleHudGauge *gauge,
        const BattleHudRenderer::RenderParams *params)
{
  BattleHudResources *m_pResources; // rbx
  BattleHudResources_vtbl *v7; // rax
  unsigned int imageID; // er13
  PLAYER_ID m_playerID; // er12
  __int64 v10; // r15
  BattleHudResources *v11; // rbx
  int v12; // edi
  const _C_CONV *p_rect; // rbx
  float v14; // xmm0_4
  float v15; // xmm12_4
  BattleHudResources *v16; // rbx
  const BattleHudRenderer::RenderParams *v17; // rdi
  float m_hpRate; // xmm0_4
  BattleHudResources_vtbl *v19; // rax
  const _C_CONV *v20; // rbx
  __int128 v21; // xmm0
  BattleHudResources *v22; // rbx
  const _C_CONV *v23; // rbx
  const _C_CONV *v24; // rbx
  __int128 v25; // xmm0
  BattleHudResources *v26; // rbx
  float v27; // xmm9_4
  int v28; // ecx
  int v29; // ebx
  BattleHudRenderer_vtbl *v30; // r10
  float v31; // xmm6_4
  float v32; // xmm1_4
  __int64 v33; // r9
  int v34; // eax
  float v35; // xmm0_4
  float v36; // xmm9_4
  int v37; // edi
  float v38; // xmm9_4
  float v39; // xmm9_4
  BattleHudResources *v40; // rdi
  const _C_CONV *v41; // rdi
  __int128 v42; // xmm0
  float v43; // xmm3_4
  float v44; // xmm4_4
  float m_hpRateRed; // xmm2_4
  int v46; // ecx
  float m_hpRateRedStart; // xmm0_4
  float v48; // xmm1_4
  BattleHudRenderer_vtbl *v49; // rax
  int v50; // ebx
  BattleHudResources *v51; // rdi
  BattleHudResources_vtbl *v52; // rax
  const _C_CONV *v53; // rdi
  float v54; // xmm2_4
  float v55; // xmm3_4
  float v56; // xmm7_4
  float v57; // xmm2_4
  float v58; // xmm6_4
  float v59; // xmm6_4
  float v60; // xmm1_4
  float v61; // xmm2_4
  float v62; // xmm0_4
  __int64 v63; // rdx
  BattleHudRenderer_vtbl *v64; // rax
  float v65; // xmm0_4
  float w; // xmm1_4
  float v67; // xmm0_4
  int v68; // er8
  const _C_CONV *ImageRect; // rcx
  BattleHudRenderer_vtbl *v70; // rax
  float m_hpLostAnimationCounter; // xmm0_4
  const _C_CONV *v72; // rsi
  BattleHudRenderer_vtbl *v73; // r10
  BOOL v74; // [rsp+38h] [rbp-D0h]
  BOOL v75; // [rsp+38h] [rbp-D0h]
  BOOL v76; // [rsp+38h] [rbp-D0h]
  int v77; // [rsp+48h] [rbp-C0h]
  __int128 v78; // [rsp+50h] [rbp-B8h] BYREF
  unsigned __int64 v79; // [rsp+60h] [rbp-A8h]
  unsigned int v80; // [rsp+68h] [rbp-A0h]
  __int128 v81; // [rsp+70h] [rbp-98h] BYREF
  unsigned __int64 v82; // [rsp+80h] [rbp-88h]
  unsigned int gaugeRenderColor; // [rsp+88h] [rbp-80h]
  int v84; // [rsp+90h] [rbp-78h]
  int v85; // [rsp+94h] [rbp-74h]
  const BattleHudRenderer::RenderParams *v86; // [rsp+98h] [rbp-70h]
  __int128 v87; // [rsp+A0h] [rbp-68h] BYREF
  _C_CONV v88; // [rsp+B0h] [rbp-58h] BYREF

  m_pResources = this->m_pResources;
  v7 = m_pResources->__vftable;
  v86 = params;
  if ( v7->isError(m_pResources) )
    imageID = -1;
  else
    imageID = m_pResources->m_pCommons->imageID;
  m_playerID = gauge->m_playerID;
  v10 = *(_QWORD *)&AppMain::pApp;
  *(_QWORD *)&v81 = 0i64;
  *((_QWORD *)&v81 + 1) = 0x3F8000003F800000i64;
  LODWORD(v82) = 1065353216;
  BYTE4(v82) = 0;
  *(_QWORD *)&v78 = 0i64;
  *((_QWORD *)&v78 + 1) = 0x3F8000003F800000i64;
  LODWORD(v79) = 1065353216;
  BYTE4(v79) = 0;
  v80 = -1;
  if ( m_playerID == PLAYER_ID_2P )
  {
    BYTE4(v82) = 1;
    DWORD1(v81) = 1;
  }
  gaugeRenderColor = params->gaugeRenderColor;
  this->clearClip(this);
  v11 = this->m_pResources;
  v12 = params->positionPlusY + 85;
  v77 = 115;
  v84 = v12;
  if ( v11->isError(v11) )
    p_rect = &v11->m_errorWorkaround.rect;
  else
    p_rect = &ImageRects_Commons[200];
  v14 = FLOAT_107_0;
  v15 = (float)v12;
  if ( m_playerID == PLAYER_ID_2P )
    v14 = FLOAT_1813_0;
  this->draw(this, imageID, (int)v14, (int)v15, p_rect, (const DrawHelper::DrawParams *)&v81, 0);
  v16 = this->m_pResources;
  v17 = v86;
  m_hpRate = gauge->m_hpRate;
  gaugeRenderColor = v86->barRenderColor;
  v19 = v16->__vftable;
  if ( m_hpRate < 0.30000001 )
  {
    if ( v19->isError(v16) )
      v24 = &v16->m_errorWorkaround.rect;
    else
      v24 = &ImageRects_Commons[203];
    v25 = (__int128)*v24;
    v26 = this->m_pResources;
    v87 = v25;
    if ( v26->isError(v26) )
      v23 = &v26->m_errorWorkaround.rect;
    else
      v23 = &ImageRects_Commons[304];
  }
  else
  {
    if ( v19->isError(v16) )
      v20 = &v16->m_errorWorkaround.rect;
    else
      v20 = &ImageRects_Commons[202];
    v21 = (__int128)*v20;
    v22 = this->m_pResources;
    v87 = v21;
    if ( v22->isError(v22) )
      v23 = &v22->m_errorWorkaround.rect;
    else
      v23 = &ImageRects_Commons[303];
  }
  v27 = FLOAT_115_0;
  v88 = *v23;
  if ( m_playerID == PLAYER_ID_2P )
    v27 = FLOAT_1805_0;
  v28 = (int)(float)((float)(v17->barLengthRate * gauge->m_hpRate) * (float)SWORD2(v87));
  v29 = SWORD2(v87) - v28;
  v85 = v28;
  if ( *(_DWORD *)(v10 + 2507512) )
  {
    v30 = this->__vftable;
    v31 = (float)v29;
    LOBYTE(v74) = 1;
    v32 = (float)*(int *)(*(_QWORD *)&AppMain::pApp + 28i64) / 1920.0;
    v33 = (unsigned int)(int)(float)((float)((float)*(int *)(*(_QWORD *)&AppMain::pApp + 32i64) / 1080.0) * v15);
    v34 = (int)(float)((float)v29 * v32);
    v88.sx += v34;
    v88.w -= v34;
    v35 = (float)(v34 + 1);
    if ( gauge->m_playerID == PLAYER_ID_2P )
    {
      v36 = v27 + -1.0;
      v30->draw(
        this,
        imageID,
        (int)(float)((float)(v32 * v36) - v35),
        v33,
        &v88,
        (const DrawHelper::DrawParams *)&v81,
        v74);
      v37 = 116;
      v38 = v36 - v31;
    }
    else
    {
      v39 = v27 + 1.0;
      v30->draw(
        this,
        imageID,
        (int)(float)((float)(v32 * v39) + v35),
        v33,
        &v88,
        (const DrawHelper::DrawParams *)&v81,
        v74);
      v37 = 116;
      v38 = v39 + v31;
    }
    v77 = 116;
  }
  else
  {
    LOWORD(v87) = v29 + v87;
    if ( gauge->m_playerID == PLAYER_ID_2P )
    {
      WORD2(v87) = v28;
      v38 = v27 - (float)(v29 + 1);
    }
    else
    {
      WORD2(v87) = v28;
      v38 = v27 + (float)(v29 + 1);
    }
    LOBYTE(v74) = 0;
    this->draw(this, imageID, (int)v38, (int)v15, (const _C_CONV *)&v87, (const DrawHelper::DrawParams *)&v81, v74);
    v37 = 115;
  }
  if ( gauge->m_bEnabledSpEffects && gauge->m_hpRateRed > gauge->m_hpRate )
  {
    v40 = this->m_pResources;
    if ( v40->isError(v40) )
      v41 = &v40->m_errorWorkaround.rect;
    else
      v41 = &ImageRects_Commons[204];
    v42 = (__int128)*v41;
    v37 = v77;
    v43 = v15;
    v87 = v42;
    v44 = (float)(v77 + 1);
    if ( *(_DWORD *)(v10 + 2507512) )
      v43 = v15 + 1.0;
    if ( m_playerID == PLAYER_ID_2P )
      v44 = 1920.0 - v44;
    m_hpRateRed = gauge->m_hpRateRed;
    v46 = (int)(float)((float)SWORD2(v87) - (float)((float)SWORD2(v87) * m_hpRateRed));
    LOWORD(v87) = v46 + v87;
    WORD2(v87) = v29 - v46 - 1;
    if ( m_playerID == PLAYER_ID_2P )
      v46 = -v46;
    v78 = v81;
    LOBYTE(v75) = 0;
    m_hpRateRedStart = gauge->m_hpRateRedStart;
    v79 = v82;
    v48 = gauge->m_hpRate;
    v80 = gaugeRenderColor;
    v49 = this->__vftable;
    *(float *)&v79 = (float)(m_hpRateRed - v48) / (float)(m_hpRateRedStart - v48);
    v49->draw(
      this,
      imageID,
      (int)(float)((float)v46 + v44),
      (int)v43,
      (const _C_CONV *)&v87,
      (const DrawHelper::DrawParams *)&v78,
      v75);
  }
  if ( gauge->m_bEnabledSpEffects )
  {
    v50 = (int)gauge->m_animationCounter % 240;
    if ( v50 <= 39 )
    {
      v51 = this->m_pResources;
      v52 = v51->__vftable;
      if ( gauge->m_hpRate >= 0.30000001 )
      {
        if ( v52->isError(v51) )
          v53 = &v51->m_errorWorkaround.rect;
        else
          v53 = &ImageRects_Commons[62];
      }
      else if ( v52->isError(v51) )
      {
        v53 = &v51->m_errorWorkaround.rect;
      }
      else
      {
        v53 = &ImageRects_Commons[63];
      }
      v54 = (float)v77;
      v55 = (float)v50 / 39.0;
      v56 = (float)(v77 + 740);
      if ( v56 != (float)v77 )
      {
        if ( v56 > v54 )
        {
          v56 = (float)v77;
          v54 = (float)(v77 + 740);
          v55 = 1.0 - v55;
        }
        if ( v55 > 0.0 )
        {
          if ( v55 < 1.0 )
          {
            v57 = v54 - v56;
            if ( v57 < 0.0 )
              LODWORD(v57) ^= _xmm;
            v56 = (float)((float)((float)(v57 * v55) / v57) * v57) + v56;
          }
          else
          {
            v56 = v54;
          }
        }
      }
      if ( m_playerID == PLAYER_ID_2P )
        v56 = 1920.0 - v56;
      if ( v50 <= 6 )
      {
        v58 = (float)v50 / 6.0;
        if ( v58 > 0.0 )
        {
          if ( v58 < 1.0 )
            v59 = (float)((float)((float)(v58 * 8.0) * 0.125) * 8.0) + 0.0;
          else
            v59 = *(float *)&FLOAT_8_0;
        }
        else
        {
          v59 = 0.0;
        }
LABEL_80:
        if ( m_playerID == PLAYER_ID_2P )
          v63 = (unsigned int)(int)(float)(v38 - (float)v85);
        else
          v63 = (unsigned int)(int)v38;
        ((void (__fastcall *)(BattleHudRenderer *, __int64, _QWORD))this->setClip)(
          this,
          v63,
          (unsigned int)(v84 - v53->cy));
        v80 = gaugeRenderColor;
        v64 = this->__vftable;
        LOBYTE(v75) = 0;
        v78 = v81;
        LODWORD(v78) = 1;
        *((float *)&v78 + 2) = v59 / 14.0;
        v79 = __PAIR64__(HIDWORD(v82), FLOAT_0_69999999);
        v64->draw(this, imageID, (int)v56, (int)v15, v53, (const DrawHelper::DrawParams *)&v78, v75);
        this->clearClip(this);
        v37 = v77;
        goto LABEL_84;
      }
      if ( v50 > 22 )
      {
        if ( v50 <= 34 )
        {
          v60 = *(float *)&FLOAT_8_0;
          v62 = FLOAT_16_0;
          v61 = (float)(v50 - 22) / 12.0;
LABEL_79:
          v59 = Tween::easing(v62, v60, v61, Linear);
          goto LABEL_80;
        }
        v60 = 0.0;
        v61 = (float)(v50 - 34) / 5.0;
      }
      else
      {
        v60 = FLOAT_16_0;
        v61 = (float)(v50 - 6) * 0.0625;
      }
      v62 = *(float *)&FLOAT_8_0;
      goto LABEL_79;
    }
  }
LABEL_84:
  v65 = gauge->m_hpRate;
  if ( v65 > 0.0 && v65 < 1.0 )
  {
    w = (float)BattleHudResources::getImageRect(this->m_pResources, UNIQUE, 202)->w;
    if ( m_playerID == PLAYER_ID_2P )
      v67 = (float)(1920 - v37) - w;
    else
      v67 = (float)v37;
    this->setClip(this, (int)v67, 0, (int)w, 1080);
    v68 = 196;
    if ( gauge->m_hpRate < 0.30000001 )
      v68 = 197;
    ImageRect = BattleHudResources::getImageRect(this->m_pResources, UNIQUE, v68);
    v80 = gaugeRenderColor;
    v70 = this->__vftable;
    LOBYTE(v75) = 0;
    v78 = v81;
    LODWORD(v78) = 1;
    v79 = v82;
    v70->draw(this, imageID, (int)v38, (int)v15, ImageRect, (const DrawHelper::DrawParams *)&v78, v75);
    this->clearClip(this);
  }
  m_hpLostAnimationCounter = gauge->m_hpLostAnimationCounter;
  gaugeRenderColor = v86->gaugeRenderColor;
  if ( m_hpLostAnimationCounter > 0.0 )
  {
    v72 = BattleHudResources::getImageRect(this->m_pResources, UNIQUE, 141 - (int)m_hpLostAnimationCounter);
    v73 = this->__vftable;
    v80 = gaugeRenderColor;
    LOBYTE(v75) = 0;
    v78 = v81;
    LODWORD(v78) = 1;
    v79 = v82;
    v73->draw(this, imageID, (int)v38, (int)v15, v72, (const DrawHelper::DrawParams *)&v78, v75);
    LOBYTE(v76) = 0;
    this->draw(this, imageID, (int)v38, (int)v15, v72, (const DrawHelper::DrawParams *)&v78, v76);
  }
}

__int64 __fastcall BattleHudRenderer::renderImage(
        BattleHudRenderer *this,
        int imageType,
        int imageIndex,
        int rx,
        int ry,
        const DrawHelper::DrawParams *drawParams)
{
  BattleHudResources *m_pResources; // rbx
  __int64 v8; // rbp
  int imageID; // edi
  const _C_CONV *ImageRect; // rbx
  bool v14; // [rsp+30h] [rbp-28h]

  m_pResources = this->m_pResources;
  v8 = imageType;
  if ( m_pResources->isError(m_pResources) )
    imageID = -1;
  else
    imageID = m_pResources->m_pCommons[v8].imageID;
  ImageRect = BattleHudResources::getImageRect(this->m_pResources, (BattleHudResources::EImage::Type)v8, imageIndex);
  v14 = 0;
  this->draw(this, imageID, rx, ry, ImageRect, drawParams, v14);
  return (unsigned int)ImageRect->w;
}

__int64 __fastcall BattleHudRenderer::renderImage(BattleHudRenderer *this, Image *pImage, int rx, __int64 ry)
{
  int v5; // ebx
  GraphicsOpt *v7; // rsi
  float scaleX; // xmm6_4
  float scaleY; // xmm7_4
  int v10; // edx

  v5 = (int)pImage;
  if ( *(_DWORD *)(ry + 4) == 1 )
    v5 = (_DWORD)pImage - *(_DWORD *)&this->m_bError;
  v7 = *(GraphicsOpt **)(*(_QWORD *)&AppMain::pApp + 112i64);
  scaleX = (float)*(int *)(*(_QWORD *)&AppMain::pApp + 28i64) / 1920.0;
  scaleY = (float)*(int *)(*(_QWORD *)&AppMain::pApp + 32i64) / 1080.0;
  if ( *(_DWORD *)ry )
    v10 = *(_DWORD *)ry == 1;
  else
    v10 = 3;
  Graphics::setRenderMode(v7->g, v10, (int)(float)(*(float *)(ry + 16) * 255.0));
  GraphicsOpt::drawImage(
    v7,
    (Image *)this,
    (float)v5 * scaleX,
    (float)rx * scaleY,
    0.0,
    0.0,
    (float)*(int *)&this->m_bError,
    (float)*((int *)&this->m_bError + 1),
    scaleX,
    scaleY,
    0.0);
  return *(unsigned int *)&this->m_bError;
}

__int64 __fastcall BattleHudRenderer::renderImageConvNmber(
        BattleHudRenderer *this,
        int imageIndex,
        int num,
        int numCount,
        int rx,
        int ry,
        const DrawHelper::DrawParams *drawParama,
        BattleHudResources::EImage::Type type)
{
  BattleHudResources *m_pResources; // rdi
  __int64 v10; // rsi
  char v12; // r15
  __int64 v13; // rbp
  char *v14; // r8
  __int64 v15; // r9
  unsigned int v16; // esi
  __int64 v17; // rdi
  int v18; // ebx
  const _C_CONV *ImageRect; // rax
  __int64 v20; // rdi
  unsigned int colorARGB; // eax
  const _C_CONV *rect; // r15
  int w; // ecx
  int imageID; // [rsp+30h] [rbp-78h]
  DrawHelper::DrawParams params; // [rsp+38h] [rbp-70h] BYREF
  char v27[17]; // [rsp+57h] [rbp-51h] BYREF

  m_pResources = this->m_pResources;
  v10 = numCount;
  v12 = imageIndex;
  if ( m_pResources->isError(m_pResources) )
    imageID = -1;
  else
    imageID = m_pResources->m_pCommons[type].imageID;
  v13 = v10;
  if ( (int)v10 > 0 )
  {
    v14 = &v27[v10];
    v15 = v10;
    do
    {
      *v14-- = v12 + num % 10;
      num /= 10;
      --v15;
    }
    while ( v15 );
  }
  v16 = 0;
  if ( drawParama->align == Right && (v17 = 0i64, v13 > 0) )
  {
    v18 = rx;
    do
    {
      ImageRect = BattleHudResources::getImageRect(this->m_pResources, type, (unsigned __int8)v27[++v17]);
      v18 -= ImageRect->w;
    }
    while ( v17 < v13 );
  }
  else
  {
    v18 = rx;
  }
  v20 = 0i64;
  colorARGB = drawParama->colorARGB;
  *(_QWORD *)&params.alpha = *(_QWORD *)&drawParama->alpha;
  params.colorARGB = colorARGB;
  *(_OWORD *)&params.renderMode = *(_OWORD *)&drawParama->renderMode;
  for ( params.align = Left; v20 < v13; v16 += w )
  {
    rect = BattleHudResources::getImageRect(this->m_pResources, type, (unsigned __int8)v27[v20 + 1]);
    if ( !this->isError(this) )
      DrawHelperVertexBuffer::drawConv(this, imageID, v18, ry, rect, &params, imageID);
    w = rect->w;
    ++v20;
    v18 += w;
  }
  return v16;
}

__int64 __fastcall BattleHudRenderer::renderImageNmber(
        BattleHudRenderer *this,
        __int64 imageIndex,
        int num,
        int numCount,
        int rx,
        int ry,
        const DrawHelper::DrawParams *drawParama)
{
  BattleHudResources *m_pResources; // rdi
  __int64 v9; // rsi
  int imageID; // er13
  char *v12; // r8
  __int64 v13; // r9
  unsigned int v14; // ebp
  __int64 v15; // rbx
  int v16; // edi
  const _C_CONV *ImageRect; // rax
  unsigned int colorARGB; // eax
  __int64 v19; // r15
  const _C_CONV *v20; // rbx
  int w; // ecx
  BOOL v23; // [rsp+30h] [rbp-88h]
  __int128 v24; // [rsp+40h] [rbp-78h] BYREF
  __int64 v25; // [rsp+50h] [rbp-68h]
  unsigned int v26; // [rsp+58h] [rbp-60h]
  char v27[17]; // [rsp+5Fh] [rbp-59h] BYREF

  m_pResources = this->m_pResources;
  v9 = numCount;
  if ( ((unsigned __int64 (__fastcall *)(BattleHudResources *, __int64))m_pResources->isError)(m_pResources, imageIndex) )
    imageID = -1;
  else
    imageID = m_pResources->m_pCommons[1].imageID;
  if ( v9 > 0 )
  {
    v12 = &v27[v9];
    v13 = v9;
    do
    {
      *v12-- = num % 10 + 3;
      num /= 10;
      --v13;
    }
    while ( v13 );
  }
  v14 = 0;
  if ( drawParama->align == Right && (v15 = 0i64, v9 > 0) )
  {
    v16 = rx;
    do
    {
      ImageRect = BattleHudResources::getImageRect(this->m_pResources, COMMON, (unsigned __int8)v27[++v15]);
      v16 -= ImageRect->w;
    }
    while ( v15 < v9 );
  }
  else
  {
    v16 = rx;
  }
  colorARGB = drawParama->colorARGB;
  v25 = *(_QWORD *)&drawParama->alpha;
  v26 = colorARGB;
  v19 = 0i64;
  v24 = *(_OWORD *)&drawParama->renderMode;
  for ( DWORD1(v24) = 0; v19 < v9; v14 += w )
  {
    v20 = BattleHudResources::getImageRect(this->m_pResources, COMMON, (unsigned __int8)v27[v19 + 1]);
    LOBYTE(v23) = 0;
    this->draw(this, imageID, v16, ry, v20, (const DrawHelper::DrawParams *)&v24, v23);
    w = v20->w;
    ++v19;
    v16 += w;
  }
  return v14;
}

__int64 __fastcall BattleHudRenderer::renderImageTitle(BattleHudRenderer *this, Image *pImage, int rx, float *ry)
{
  int v5; // ebx
  int v7; // edx
  __m128i v8; // xmm6
  __m128i v9; // xmm7
  GraphicsOpt *v10; // rbp
  __int16 v11; // ax
  float v12; // ecx
  float scalX; // xmm6_4
  float scalY; // xmm7_4
  _C_CONV pConv; // [rsp+50h] [rbp-38h] BYREF

  v5 = (int)pImage;
  if ( *((_DWORD *)ry + 1) == 1 )
    v5 = (_DWORD)pImage - *(_DWORD *)&this->m_bError;
  v7 = 0;
  *(_DWORD *)&pConv.sx = 65537;
  *(_QWORD *)&pConv.cx = 0i64;
  v8 = _mm_cvtsi32_si128(*(_DWORD *)(*(_QWORD *)&AppMain::pApp + 28i64));
  v9 = _mm_cvtsi32_si128(*(_DWORD *)(*(_QWORD *)&AppMain::pApp + 32i64));
  v10 = *(GraphicsOpt **)(*(_QWORD *)&AppMain::pApp + 112i64);
  pConv.w = *(_WORD *)&this->m_bError - 2;
  v11 = *((_WORD *)&this->m_bError + 2);
  v12 = *ry;
  *(_QWORD *)&pConv.h = (unsigned __int16)(v11 - 2);
  scalX = _mm_cvtepi32_ps(v8).m128_f32[0] / 1920.0;
  scalY = _mm_cvtepi32_ps(v9).m128_f32[0] / 1080.0;
  if ( v12 == 0.0 )
  {
    v7 = 3;
  }
  else if ( LODWORD(v12) == 1 )
  {
    v7 = 1;
  }
  Graphics::setRenderMode(v10->g, v7, (int)(float)(ry[4] * 255.0));
  GraphicsOpt::drawImage(
    v10,
    (Image *)this,
    (float)(v5 + 1) * scalX,
    (float)(rx + 1) * scalY,
    &pConv,
    scalX,
    scalY,
    0.0);
  return *(unsigned int *)&this->m_bError;
}

void __fastcall BattleHudRenderer::renderKeyPlaying(BattleHudRenderer *this, int frame, int totalFrame, int slot)
{
  const _C_CONV *ImageRect; // rax
  BattleHudResources *m_pResources; // rdi
  int w; // er14
  bool v9; // zf
  const _C_CONV *v10; // rsi
  const _C_CONV *p_rect; // rax
  BattleHudResources *v12; // rdi
  int v13; // er15
  int v14; // er8
  int i; // ecx
  BattleHudResources *v16; // rdi
  int v17; // esi
  int v18; // er12
  BattleHudResources *v19; // rdi
  const _C_CONV *v20; // r13
  int v21; // eax
  BattleHudResources *v22; // rdi
  int v23; // edx
  int v24; // eax
  int v25; // ecx
  BattleHudResources_vtbl *v26; // rax
  int v27; // esi
  int v28; // edi
  const _C_CONV *rect; // r14
  int v30; // edi
  int v31; // eax
  int v32; // esi
  int v33; // er8
  int v34; // er9
  int j; // ecx
  BattleHudRenderer_vtbl *v36; // rax
  int v37; // esi
  int v38; // er9
  int k; // ecx
  const _C_CONV *v40; // rax
  BattleHudResources *v41; // rdi
  int v42; // ebp
  const _C_CONV *v43; // rdi
  bool drawParama; // [rsp+30h] [rbp-78h]
  bool drawParamaa; // [rsp+30h] [rbp-78h]
  DrawHelper::DrawParams v46; // [rsp+40h] [rbp-68h] BYREF
  int v47; // [rsp+B0h] [rbp+8h]
  int imageID; // [rsp+C0h] [rbp+18h]

  ImageRect = BattleHudResources::getImageRect(this->m_pResources, (BattleHudResources::EImage::Type)2, 64);
  m_pResources = this->m_pResources;
  w = ImageRect->w;
  v9 = m_pResources->isError(m_pResources) == 0;
  v10 = &ImageRects_PlayerID[274];
  p_rect = &m_pResources->m_errorWorkaround.rect;
  if ( v9 )
    p_rect = &ImageRects_PlayerID[274];
  v12 = this->m_pResources;
  v13 = 4 * p_rect->w;
  if ( v12->isError(v12) )
    v10 = &v12->m_errorWorkaround.rect;
  v14 = 0;
  if ( totalFrame )
  {
    for ( i = totalFrame; i > 0; i /= 10 )
      ++v14;
  }
  else
  {
    v14 = 1;
  }
  v16 = this->m_pResources;
  v17 = v14 * v10->w;
  v18 = -1;
  if ( v16->isError(v16) )
    imageID = -1;
  else
    imageID = v16->m_pCommons[1].imageID;
  v19 = this->m_pResources;
  v20 = &v19->m_errorWorkaround.rect;
  if ( !v19->isError(v19) )
    v20 = &ImageRects_PlayerID[284];
  v21 = v20->w;
  v22 = this->m_pResources;
  v23 = 0;
  *(_QWORD *)&v46.renderMode = 0i64;
  if ( totalFrame >= 0 )
    v23 = v21;
  v46.scaleW = 1.0;
  v24 = 0;
  v47 = v23;
  if ( totalFrame >= 0 )
    v24 = v17;
  v46.scaleH = 1.0;
  v46.alpha = 1.0;
  v25 = 1920 - v24;
  v46.bMirror = 0;
  v26 = v22->__vftable;
  v46.colorARGB = -1;
  v27 = (int)(float)((float)(v25 - v23 - v13 - w) * 0.5);
  if ( v26->isError(v22) )
    v28 = -1;
  else
    v28 = v22->m_pCommons[2].imageID;
  rect = BattleHudResources::getImageRect(this->m_pResources, (BattleHudResources::EImage::Type)2, 64);
  if ( !this->isError(this) )
    DrawHelperVertexBuffer::drawConv(this, v28, v27, 176, rect, &v46, drawParama);
  v30 = 9999;
  v31 = v13 + rect->w;
  v46.align = Right;
  v32 = v31 + v27;
  v33 = 9999;
  if ( frame < 9999 )
    v33 = frame;
  if ( v33 >= 0 )
  {
    v34 = 0;
    if ( v33 )
    {
      for ( j = v33; j > 0; j /= 10 )
        ++v34;
    }
    else
    {
      v34 = 1;
    }
  }
  else
  {
    v33 = 0;
    v34 = 1;
  }
  BattleHudRenderer::renderImageConvNmber(this, 3, v33, v34, v32, 179, &v46, COMMON);
  if ( totalFrame >= 0 )
  {
    v36 = this->__vftable;
    v46.align = Left;
    if ( !v36->isError(this) )
      DrawHelperVertexBuffer::drawConv(this, imageID, v32, 178, v20, &v46, drawParamaa);
    v37 = v47 + v32;
    if ( totalFrame < 9999 )
      v30 = totalFrame;
    v38 = 0;
    if ( v30 )
    {
      for ( k = v30; k > 0; k /= 10 )
        ++v38;
    }
    else
    {
      v38 = 1;
    }
    BattleHudRenderer::renderImageConvNmber(this, 3, v30, v38, v37, 179, &v46, COMMON);
  }
  if ( slot > 0 )
  {
    v40 = BattleHudResources::getImageRect(this->m_pResources, (BattleHudResources::EImage::Type)2, slot + 85);
    v41 = this->m_pResources;
    v46.align = Left;
    v42 = (int)(float)((float)(1920 - v40->w) * 0.5);
    if ( !v41->isError(v41) )
      v18 = v41->m_pCommons[2].imageID;
    v43 = BattleHudResources::getImageRect(this->m_pResources, (BattleHudResources::EImage::Type)2, slot + 85);
    if ( !this->isError(this) )
      DrawHelperVertexBuffer::drawConv(this, v18, v42, 206, v43, &v46, drawParamaa);
  }
}

void __fastcall BattleHudRenderer::renderKeyReady(BattleHudRenderer *this, int sec, int msec, int slot)
{
  const _C_CONV *ImageRect; // rax
  BattleHudResources *m_pResources; // rbx
  int v9; // er14
  const _C_CONV *p_rect; // rsi
  BattleHudResources *v11; // rbx
  const _C_CONV *v12; // rbx
  int v13; // ecx
  int w; // eax
  BattleHudResources *v15; // rbx
  int v16; // ebp
  int v17; // esi
  int imageID; // ebx
  const _C_CONV *rect; // r15
  int v20; // ebp
  int v21; // eax
  BattleHudResources *v22; // rbx
  int v23; // ebp
  int v24; // er14
  const _C_CONV *v25; // rbx
  const _C_CONV *v26; // rax
  BattleHudResources *v27; // rbx
  int v28; // er14
  const _C_CONV *v29; // rbx
  bool drawParama; // [rsp+30h] [rbp-58h]
  BOOL drawParamaa; // [rsp+30h] [rbp-58h]
  bool drawParamab; // [rsp+30h] [rbp-58h]
  DrawHelper::DrawParams v33; // [rsp+40h] [rbp-48h] BYREF

  ImageRect = BattleHudResources::getImageRect(this->m_pResources, (BattleHudResources::EImage::Type)2, 98);
  m_pResources = this->m_pResources;
  v9 = ImageRect->w + 15;
  p_rect = &m_pResources->m_errorWorkaround.rect;
  if ( !m_pResources->isError(m_pResources) )
    p_rect = &ImageRects_PlayerID[274];
  v11 = this->m_pResources;
  if ( v11->isError(v11) )
    v12 = &v11->m_errorWorkaround.rect;
  else
    v12 = &ImageRects_PlayerID[2];
  v13 = 640 - p_rect->w;
  w = v12->w;
  v15 = this->m_pResources;
  v33.scaleW = 1.0;
  v33.scaleH = 1.0;
  v33.alpha = 1.0;
  v33.colorARGB = -1;
  *(_QWORD *)&v33.renderMode = 0i64;
  v33.bMirror = 0;
  v16 = (int)(float)((float)(3 * v13 - w - v9) * 0.5);
  v17 = -1;
  if ( v15->isError(v15) )
    imageID = -1;
  else
    imageID = v15->m_pCommons[2].imageID;
  rect = BattleHudResources::getImageRect(this->m_pResources, (BattleHudResources::EImage::Type)2, 98);
  if ( !this->isError(this) )
    DrawHelperVertexBuffer::drawConv(this, imageID, v16, 176, rect, &v33, drawParama);
  v20 = v9 + v16;
  v21 = BattleHudRenderer::renderImageConvNmber(this, 99, sec, 1, v20, 179, &v33, (BattleHudResources::EImage::Type)2);
  v22 = this->m_pResources;
  v23 = v21 + v20;
  if ( v22->isError(v22) )
    v24 = -1;
  else
    v24 = v22->m_pCommons[2].imageID;
  v25 = BattleHudResources::getImageRect(this->m_pResources, (BattleHudResources::EImage::Type)2, 109);
  LOBYTE(drawParamaa) = 0;
  this->draw(this, v24, v23, 179, v25, &v33, drawParamaa);
  BattleHudRenderer::renderImageConvNmber(
    this,
    99,
    msec,
    2,
    v23 + v25->w,
    179,
    &v33,
    (BattleHudResources::EImage::Type)2);
  if ( slot > 0 )
  {
    v26 = BattleHudResources::getImageRect(this->m_pResources, (BattleHudResources::EImage::Type)2, slot + 85);
    v27 = this->m_pResources;
    LODWORD(v26) = 1920 - v26->w;
    v33.align = Left;
    v28 = (int)(float)((float)(int)v26 * 0.5);
    if ( !v27->isError(v27) )
      v17 = v27->m_pCommons[2].imageID;
    v29 = BattleHudResources::getImageRect(this->m_pResources, (BattleHudResources::EImage::Type)2, slot + 85);
    if ( !this->isError(this) )
      DrawHelperVertexBuffer::drawConv(this, v17, v28, 206, v29, &v33, drawParamab);
  }
}

void __fastcall BattleHudRenderer::renderKeyRecording(
        BattleHudRenderer *this,
        int frame,
        int slot,
        const BattleHudRenderer::RenderParams *params)
{
  const _C_CONV *ImageRect; // rax
  BattleHudResources *m_pResources; // rdi
  int w; // esi
  bool v9; // zf
  const _C_CONV *p_rect; // rax
  BattleHudResources *v11; // rdi
  int v12; // ebp
  int v13; // er15
  int v14; // er14
  int imageID; // edi
  const _C_CONV *rect; // rsi
  int v17; // er8
  int v18; // eax
  int v19; // er15
  int v20; // er9
  int i; // ecx
  const _C_CONV *v22; // rax
  BattleHudResources *v23; // rdi
  int v24; // esi
  const _C_CONV *v25; // rdi
  bool drawParama; // [rsp+30h] [rbp-58h]
  bool drawParamaa; // [rsp+30h] [rbp-58h]
  DrawHelper::DrawParams v28; // [rsp+40h] [rbp-48h] BYREF

  ImageRect = BattleHudResources::getImageRect(this->m_pResources, (BattleHudResources::EImage::Type)2, 62);
  m_pResources = this->m_pResources;
  w = ImageRect->w;
  v9 = m_pResources->isError(m_pResources) == 0;
  p_rect = &m_pResources->m_errorWorkaround.rect;
  if ( v9 )
    p_rect = &ImageRects_PlayerID[274];
  v11 = this->m_pResources;
  v12 = 4 * p_rect->w;
  v28.scaleW = 1.0;
  v28.scaleH = 1.0;
  v28.alpha = 1.0;
  v28.colorARGB = -1;
  *(_QWORD *)&v28.renderMode = 0i64;
  v28.bMirror = 0;
  v13 = (int)(float)((float)(1920 - v12 - w) * 0.5);
  v14 = -1;
  if ( v11->isError(v11) )
    imageID = -1;
  else
    imageID = v11->m_pCommons[2].imageID;
  rect = BattleHudResources::getImageRect(this->m_pResources, (BattleHudResources::EImage::Type)2, 62);
  if ( !this->isError(this) )
    DrawHelperVertexBuffer::drawConv(this, imageID, v13, 176, rect, &v28, drawParama);
  v17 = 9999;
  v18 = v12 + rect->w;
  v28.align = Right;
  v19 = v18 + v13;
  if ( frame < 9999 )
    v17 = frame;
  if ( v17 >= 0 )
  {
    v20 = 0;
    if ( v17 )
    {
      for ( i = v17; i > 0; i /= 10 )
        ++v20;
    }
    else
    {
      v20 = 1;
    }
  }
  else
  {
    v17 = 0;
    v20 = 1;
  }
  BattleHudRenderer::renderImageConvNmber(this, 3, v17, v20, v19, 179, &v28, COMMON);
  if ( slot > 0 )
  {
    v22 = BattleHudResources::getImageRect(this->m_pResources, (BattleHudResources::EImage::Type)2, slot + 85);
    v23 = this->m_pResources;
    v28.align = Left;
    v24 = (int)(float)((float)(1920 - v22->w) * 0.5);
    if ( !v23->isError(v23) )
      v14 = v23->m_pCommons[2].imageID;
    v25 = BattleHudResources::getImageRect(this->m_pResources, (BattleHudResources::EImage::Type)2, slot + 85);
    if ( !this->isError(this) )
      DrawHelperVertexBuffer::drawConv(this, v14, v24, 206, v25, &v28, drawParamaa);
  }
}

void __fastcall BattleHudRenderer::renderMaxmodeGauge(
        BattleHudRenderer *this,
        const BattleHudGauge *gauge,
        const BattleHudRenderer::RenderParams *params)
{
  BattleHudResources *m_pResources; // rdi
  unsigned int imageID; // er12
  PLAYER_ID m_playerID; // er15
  int v9; // er14
  float v10; // xmm7_4
  float v11; // xmm8_4
  const _C_CONV *p_rect; // rdi
  int positionPlusY; // eax
  float v14; // xmm6_4
  float v15; // xmm14_4
  BattleHudResources *v16; // rsi
  BattleHudRenderer_vtbl *v17; // rax
  float v18; // xmm13_4
  float v19; // xmm9_4
  BattleHudResources *v20; // rdi
  int v21; // esi
  __int128 *p_sx; // rax
  __int128 v23; // xmm6
  float v24; // xmm11_4
  unsigned __int64 v25; // xmm8_8
  float v26; // xmm11_4
  float v27; // xmm0_4
  float v28; // xmm9_4
  int v29; // edi
  BattleHudResources *v30; // rsi
  const _C_CONV *v31; // rsi
  float v32; // xmm12_4
  float v33; // xmm6_4
  float v34; // xmm6_4
  float v35; // xmm6_4
  float v36; // xmm1_4
  float v37; // xmm0_4
  float v38; // xmm2_4
  float v39; // xmm8_4
  __int64 v40; // rdx
  BattleHudRenderer_vtbl *v41; // rax
  float m_climaxRate; // xmm0_4
  float w; // xmm0_4
  const _C_CONV *ImageRect; // rax
  BattleHudRenderer_vtbl *v45; // r10
  float m_maxModeStartAnimationCounter; // xmm0_4
  int v47; // esi
  float v48; // xmm6_4
  const _C_CONV *v49; // rcx
  float v50; // xmm0_4
  float v51; // xmm8_4
  __int128 v52; // xmm9
  BattleHudRenderer_vtbl *v53; // rax
  unsigned __int64 v54; // xmm10_8
  const _C_CONV *v55; // rax
  __int64 v56; // r9
  __int64 v57; // r8
  int v58; // edi
  const _C_CONV *v59; // r14
  float v60; // xmm13_4
  float v61; // xmm9_4
  float v62; // xmm6_4
  float aniFrame3; // xmm12_4
  float v64; // xmm0_4
  float v65; // xmm1_4
  BattleHudRenderer_vtbl *v66; // rax
  const _C_CONV *v67; // r14
  float v68; // xmm9_4
  float v69; // xmm15_4
  float v70; // xmm0_4
  float v71; // xmm14_4
  __int128 v72; // xmm8
  BattleHudRenderer_vtbl *v73; // rax
  const _C_CONV *v74; // rsi
  float v75; // xmm0_4
  BattleHudRenderer_vtbl *v76; // rax
  const _C_CONV *v77; // rsi
  float v78; // xmm8_4
  float v79; // xmm13_4
  float v80; // xmm10_4
  float v81; // xmm11_4
  float v82; // xmm0_4
  __int64 v83; // xmm12_8
  BattleHudRenderer_vtbl *v84; // rax
  const _C_CONV *v85; // rdi
  float v86; // xmm8_4
  float v87; // xmm10_4
  BattleHudRenderer_vtbl *v88; // rax
  const _C_CONV *p11; // [rsp+28h] [rbp-F0h]
  BOOL type1; // [rsp+38h] [rbp-E0h]
  Tween::EasingType type1a; // [rsp+38h] [rbp-E0h]
  Tween::EasingType type1b; // [rsp+38h] [rbp-E0h]
  Tween::EasingType type1d; // [rsp+38h] [rbp-E0h]
  Tween::EasingType type1c; // [rsp+38h] [rbp-E0h]
  Tween::EasingType type2; // [rsp+58h] [rbp-C0h]
  float p32; // [rsp+70h] [rbp-A8h]
  Tween::EasingType type3; // [rsp+78h] [rbp-A0h]
  float p41; // [rsp+88h] [rbp-90h]
  float p42; // [rsp+90h] [rbp-88h]
  __int128 v100; // [rsp+98h] [rbp-80h] BYREF
  unsigned __int64 v101; // [rsp+A8h] [rbp-70h]
  int v102; // [rsp+B0h] [rbp-68h]
  float outParams2; // [rsp+B8h] [rbp-60h] BYREF
  float outParams1; // [rsp+BCh] [rbp-5Ch] BYREF
  float v105; // [rsp+C0h] [rbp-58h]
  __int128 v106; // [rsp+C8h] [rbp-50h]
  unsigned __int64 v107; // [rsp+D8h] [rbp-40h]
  __int128 v108; // [rsp+E8h] [rbp-30h]
  unsigned __int64 v109; // [rsp+F8h] [rbp-20h]
  __int128 v110; // [rsp+108h] [rbp-10h] BYREF

  m_pResources = this->m_pResources;
  if ( m_pResources->isError(m_pResources) )
    imageID = -1;
  else
    imageID = m_pResources->m_pCommons->imageID;
  m_playerID = gauge->m_playerID;
  v9 = 0;
  *(_QWORD *)&v106 = 0i64;
  *((_QWORD *)&v106 + 1) = 0x3F8000003F800000i64;
  LODWORD(v107) = 1065353216;
  BYTE4(v107) = 0;
  *(_QWORD *)&v108 = 0i64;
  *((_QWORD *)&v108 + 1) = 0x3F8000003F800000i64;
  LODWORD(v109) = 1065353216;
  BYTE4(v109) = 0;
  *(_QWORD *)&v100 = 0i64;
  *((_QWORD *)&v100 + 1) = 0x3F8000003F800000i64;
  LODWORD(v101) = 1065353216;
  BYTE4(v101) = 0;
  v102 = -1;
  if ( m_playerID == PLAYER_ID_2P )
  {
    BYTE4(v107) = 1;
    DWORD1(v106) = 1;
  }
  v10 = 0.0;
  if ( gauge->m_climaxGaugeSize == CLIMAX_GAUGE_SIZE_M )
  {
    v11 = FLOAT_N71_0;
    p_rect = &ImageRects_Commons[210];
  }
  else if ( gauge->m_climaxGaugeSize == CLIMAX_GAUGE_SIZE_L )
  {
    v11 = 0.0;
    p_rect = &ImageRects_Commons[209];
  }
  else
  {
    v11 = FLOAT_N142_0;
    p_rect = &ImageRects_Commons[211];
  }
  positionPlusY = params->positionPlusY;
  v14 = FLOAT_205_0;
  LODWORD(v105) = positionPlusY + 963;
  v15 = (float)(positionPlusY + 992);
  if ( m_playerID == PLAYER_ID_2P )
    v14 = FLOAT_1715_0;
  v16 = this->m_pResources;
  if ( v16->isError(v16) )
    p_rect = &v16->m_errorWorkaround.rect;
  v17 = this->__vftable;
  v102 = -1;
  v100 = v106;
  v101 = v107;
  v17->draw(this, imageID, (int)v14, (int)v15, p_rect, (const DrawHelper::DrawParams *)&v100, 0);
  v18 = FLOAT_214_0;
  v19 = FLOAT_214_0;
  if ( m_playerID == PLAYER_ID_2P )
    v19 = FLOAT_1706_0;
  v20 = this->m_pResources;
  v21 = 168 - (int)(float)((float)((int)gauge->m_animationCounter % 20) * -0.5);
  if ( v20->isError(v20) )
    p_sx = (__int128 *)&v20->m_errorWorkaround.rect.sx;
  else
    p_sx = (__int128 *)&ImageRects_Commons[v21].sx;
  LOBYTE(type1) = 0;
  v23 = v106;
  v110 = *p_sx;
  v102 = -1;
  v24 = (float)SWORD2(v110) + v11;
  v25 = v107;
  v100 = v106;
  v101 = v107;
  v26 = v24 * gauge->m_climaxRate;
  WORD2(v110) = (int)v26;
  this->draw(this, imageID, (int)v19, (int)v15, (const _C_CONV *)&v110, (const DrawHelper::DrawParams *)&v100, type1);
  v27 = (float)SWORD2(v110);
  if ( m_playerID == PLAYER_ID_2P )
    v28 = v19 - v27;
  else
    v28 = v27 + v19;
  v29 = (int)gauge->m_animationCounter % 120;
  if ( v29 > 39 )
  {
    v32 = *(float *)&FLOAT_1_0;
  }
  else
  {
    v30 = this->m_pResources;
    if ( v30->isError(v30) )
      v31 = &v30->m_errorWorkaround.rect;
    else
      v31 = &ImageRects_Commons[60];
    v32 = *(float *)&FLOAT_1_0;
    if ( v29 > 31 )
    {
      v35 = (float)(v29 - 31) * 0.125;
      if ( v35 > 0.0 )
      {
        if ( v35 < 1.0 )
          v34 = (float)((float)((float)(v35 * 86.0) / 86.0) * 86.0) + 551.0;
        else
          v34 = FLOAT_637_0;
      }
      else
      {
        v34 = FLOAT_551_0;
      }
    }
    else
    {
      v33 = (float)v29 / 31.0;
      if ( v33 > 0.0 )
      {
        if ( v33 < 1.0 )
          v34 = (float)((float)((float)(v33 * 337.0) / 337.0) * 337.0) + 214.0;
        else
          v34 = FLOAT_551_0;
      }
      else
      {
        v34 = FLOAT_214_0;
      }
    }
    if ( m_playerID == PLAYER_ID_2P )
      v34 = 1920.0 - v34;
    if ( v29 > 10 )
    {
      if ( v29 > 25 )
      {
        if ( v29 > 35 )
        {
          v37 = *(float *)&FLOAT_6_0;
          v36 = 0.0;
          v38 = (float)(v29 - 35) * 0.25;
        }
        else
        {
          v37 = FLOAT_10_0;
          v36 = *(float *)&FLOAT_6_0;
          v38 = (float)(v29 - 25) / 10.0;
        }
      }
      else
      {
        v36 = FLOAT_10_0;
        v37 = *(float *)&FLOAT_7_0;
        v38 = (float)(v29 - 10) / 15.0;
      }
    }
    else
    {
      v36 = *(float *)&FLOAT_7_0;
      v37 = 0.0;
      v38 = (float)v29 / 10.0;
    }
    v39 = Tween::easing(v37, v36, v38, Linear);
    if ( m_playerID == PLAYER_ID_2P )
      v40 = (unsigned int)(int)(float)(1706.0 - v26);
    else
      v40 = 214i64;
    this->setClip(this, v40, 0, (int)v26, 1080);
    LOBYTE(type1a) = 0;
    v102 = -1;
    v100 = v106;
    LODWORD(v100) = 1;
    v101 = v107;
    *((float *)&v100 + 2) = v39 / 14.0;
    BYTE4(v101) = BYTE4(v107) ^ 1;
    v41 = this->__vftable;
    LOBYTE(v9) = BYTE4(v107) != 1;
    HIDWORD(v100) = 1065353216;
    DWORD1(v100) = v9;
    v41->draw(this, imageID, (int)v34, (int)v15, v31, (const DrawHelper::DrawParams *)&v100, type1a);
    this->clearClip(this);
    v23 = v106;
    v25 = v107;
  }
  m_climaxRate = gauge->m_climaxRate;
  if ( m_climaxRate > 0.0 && v32 > m_climaxRate )
  {
    w = (float)BattleHudResources::getImageRect(this->m_pResources, UNIQUE, 168)->w;
    if ( m_playerID == PLAYER_ID_2P )
      v18 = 1706.0 - w;
    this->setClip(this, (int)v18, 0, (int)w, 1080);
    ImageRect = BattleHudResources::getImageRect(this->m_pResources, UNIQUE, 217);
    v45 = this->__vftable;
    LOBYTE(type1a) = 0;
    v102 = -1;
    v100 = v23;
    v101 = v25;
    v45->draw(this, imageID, (int)v28, (int)v15, ImageRect, (const DrawHelper::DrawParams *)&v100, type1a);
    this->clearClip(this);
  }
  m_maxModeStartAnimationCounter = gauge->m_maxModeStartAnimationCounter;
  v47 = 73 - (int)(float)((float)((int)gauge->m_animationCounter % 30) * -0.5);
  if ( m_maxModeStartAnimationCounter == 0.0 )
  {
    v48 = FLOAT_331_0;
    v49 = BattleHudResources::getImageRect(this->m_pResources, UNIQUE, 265);
    v50 = FLOAT_331_0;
    v51 = (float)SLODWORD(v105);
    if ( m_playerID == PLAYER_ID_2P )
      v50 = FLOAT_1589_0;
    v52 = v108;
    v53 = this->__vftable;
    v54 = v109;
    LOBYTE(type1a) = 0;
    v102 = -1;
    v100 = v108;
    v101 = v109;
    v53->draw(this, imageID, (int)v50, (int)v51, v49, (const DrawHelper::DrawParams *)&v100, type1a);
    v55 = BattleHudResources::getImageRect(this->m_pResources, UNIQUE, v47);
    if ( m_playerID == PLAYER_ID_2P )
      v48 = FLOAT_1589_0;
    LOBYTE(type1b) = 0;
    p11 = v55;
    v100 = v52;
    v101 = v54;
    v56 = (unsigned int)(int)v51;
    v57 = (unsigned int)(int)v48;
LABEL_106:
    v88 = this->__vftable;
    v102 = -1;
    LODWORD(v100) = 1;
    v88->draw(this, imageID, v57, v56, p11, (const DrawHelper::DrawParams *)&v100, type1b);
    return;
  }
  v58 = 12 - (int)m_maxModeStartAnimationCounter;
  v59 = BattleHudResources::getImageRect(this->m_pResources, UNIQUE, 265);
  v60 = FLOAT_331_0;
  v61 = FLOAT_331_0;
  v105 = (float)SLODWORD(v105);
  if ( m_playerID == PLAYER_ID_2P )
    v61 = FLOAT_1589_0;
  v62 = (float)v58;
  if ( (float)v58 < 0.0 )
  {
    aniFrame3 = FLOAT_0_5;
    LODWORD(v64) = FLOAT_0_050000001;
    v65 = FLOAT_0_5;
    LODWORD(outParams2) = FLOAT_0_050000001;
    outParams1 = FLOAT_0_5;
  }
  else
  {
    p42 = v32;
    p41 = v32;
    p32 = v32;
    type1d = LODWORD(v32);
    aniFrame3 = FLOAT_0_5;
    easing(
      &outParams1,
      &outParams2,
      v62,
      0.0,
      0.5,
      0.050000001,
      type1d,
      0.69999999,
      0.25,
      2.0,
      FLOAT_1_1,
      0.050000001,
      3.0,
      p32,
      FLOAT_0_94999999,
      4.0,
      p41,
      p42);
    v64 = outParams2;
    v65 = outParams1;
  }
  v66 = this->__vftable;
  LOBYTE(type1a) = 0;
  v102 = -1;
  *(_QWORD *)&v100 = v108;
  *((_QWORD *)&v100 + 1) = __PAIR64__(LODWORD(v64), LODWORD(v65));
  v101 = v109;
  ((void (__fastcall *)(BattleHudRenderer *, _QWORD, _QWORD, _QWORD, const _C_CONV *, __int128 *))v66->draw)(
    this,
    imageID,
    (unsigned int)(int)v61,
    (unsigned int)(int)v105,
    v59,
    &v100);
  if ( v58 > 4 )
  {
    v71 = v105;
    v69 = *(float *)&FLOAT_1_0;
    v72 = v108;
  }
  else
  {
    v67 = BattleHudResources::getImageRect(this->m_pResources, UNIQUE, v47);
    v68 = FLOAT_331_0;
    if ( m_playerID == PLAYER_ID_2P )
      v68 = FLOAT_1589_0;
    v69 = *(float *)&FLOAT_1_0;
    easing(
      &outParams1,
      &outParams2,
      v62,
      0.0,
      aniFrame3,
      0.050000001,
      type1a,
      1.0,
      0.69999999,
      0.25,
      type2,
      2.0,
      1.1,
      0.050000001,
      type3,
      4.0,
      1.2,
      0.050000001);
    if ( v62 < 2.0 )
    {
      LODWORD(v70) = FLOAT_1_0;
    }
    else if ( v62 > 4.0 )
    {
      v70 = 0.0;
    }
    else
    {
      v70 = Tween::easing(1.0, 0.0, (float)(v62 - 2.0) * aniFrame3, Linear);
    }
    v71 = v105;
    v72 = v108;
    v73 = this->__vftable;
    *(_QWORD *)((char *)&v100 + 4) = __PAIR64__(LODWORD(outParams1), DWORD1(v108));
    LOBYTE(type1c) = 0;
    v101 = __PAIR64__(HIDWORD(v109), LODWORD(v70));
    v102 = -1;
    LODWORD(v100) = 1;
    *((float *)&v100 + 3) = outParams2;
    v73->draw(this, imageID, (int)v68, (int)v105, v67, (const DrawHelper::DrawParams *)&v100, type1c);
  }
  v74 = BattleHudResources::getImageRect(this->m_pResources, UNIQUE, v47);
  if ( m_playerID == PLAYER_ID_2P )
    v60 = FLOAT_1589_0;
  if ( v62 < 2.0 )
  {
    v75 = 0.0;
  }
  else if ( v62 > 5.0 )
  {
    v75 = v69;
  }
  else
  {
    v75 = Tween::easing(0.0, v69, (float)(v62 - 2.0) / 3.0, Linear);
  }
  v76 = this->__vftable;
  LOBYTE(type1a) = 0;
  v100 = v72;
  v102 = -1;
  LODWORD(v100) = 1;
  v101 = __PAIR64__(HIDWORD(v109), LODWORD(v75));
  v76->draw(this, imageID, (int)v60, (int)v71, v74, (const DrawHelper::DrawParams *)&v100, type1a);
  if ( v58 > 8 )
  {
    v79 = *(float *)&FLOAT_6_0;
    v83 = v106;
  }
  else
  {
    v77 = BattleHudResources::getImageRect(this->m_pResources, UNIQUE, 68);
    v78 = Tween::easing(0.0, 80.0, v62 * 0.125, Linear) + 305.0;
    if ( m_playerID == PLAYER_ID_2P )
      v78 = 1920.0 - v78;
    v79 = *(float *)&FLOAT_6_0;
    if ( v62 < 0.0 )
    {
      LODWORD(v81) = FLOAT_1_3;
      v80 = *(float *)&FLOAT_0_1;
    }
    else
    {
      easing(
        &outParams1,
        &outParams2,
        v62,
        0.0,
        1.3,
        0.1,
        FLOAT_4_0,
        1.3,
        0.2,
        5.0,
        FLOAT_1_3,
        aniFrame3,
        6.0,
        1.3,
        FLOAT_0_1,
        8.0,
        2.0,
        0.1);
      v80 = outParams2;
      v81 = outParams1;
    }
    if ( v62 < 6.0 )
    {
      v82 = v69;
    }
    else if ( v62 > 8.0 )
    {
      v82 = 0.0;
    }
    else
    {
      v82 = Tween::easing(v69, 0.0, (float)(v62 - 6.0) * aniFrame3, Linear);
    }
    v83 = v106;
    v84 = this->__vftable;
    LOBYTE(type1b) = 0;
    *(_QWORD *)((char *)&v100 + 4) = __PAIR64__(LODWORD(v81), DWORD1(v106));
    v102 = -1;
    LODWORD(v100) = 1;
    v101 = __PAIR64__(HIDWORD(v107), LODWORD(v82));
    *((float *)&v100 + 3) = v80;
    v84->draw(this, imageID, (int)v78, (int)v71, v77, (const DrawHelper::DrawParams *)&v100, type1b);
  }
  if ( v58 <= 12 )
  {
    v85 = BattleHudResources::getImageRect(this->m_pResources, UNIQUE, 66);
    v86 = Tween::easing(0.0, 290.0, v62 * 0.125, Linear) + 211.0;
    if ( m_playerID == PLAYER_ID_2P )
      v86 = 1920.0 - v86;
    v87 = Tween::easing(2.5, 1.8, v62 / 12.0, Linear);
    if ( v62 < v79 )
    {
      v10 = v69;
    }
    else if ( v62 <= 12.0 )
    {
      v10 = Tween::easing(v69, 0.0, (float)(v62 - v79) / v79, Linear);
    }
    LOBYTE(type1b) = 0;
    *(_QWORD *)&v100 = v83;
    v101 = __PAIR64__(HIDWORD(v107), LODWORD(v10));
    p11 = v85;
    *((float *)&v100 + 2) = v87;
    *((float *)&v100 + 3) = v87;
    v56 = (unsigned int)(int)v71;
    v57 = (unsigned int)(int)v86;
    goto LABEL_106;
  }
}

__int64 __fastcall BattleHudRenderer::renderMemberChatLog(
        BattleHudRenderer *this,
        BattleHudGauge *gauge,
        int slot,
        int renderX,
        int renderY)
{
  PLAYER_ID m_playerID; // er15
  BattleHudGauge::MemberInfo *p_m_errorMember; // r10
  BattleHudGauge::MemberInfo::OnlineParams *pOnlineParams; // rbx
  float animationFrame; // xmm6_4
  int v10; // ebp
  int m_width; // edi
  int v12; // ecx
  int v13; // eax
  unsigned int v14; // er12
  int v15; // ebp
  int v16; // edi
  bool width; // [rsp+20h] [rbp-78h]
  __int64 v19; // [rsp+40h] [rbp-58h]
  DrawHelper::DrawParams drawParams; // [rsp+50h] [rbp-48h] BYREF

  m_playerID = gauge->m_playerID;
  if ( (unsigned int)slot > 2 )
    p_m_errorMember = &gauge->m_errorMember;
  else
    p_m_errorMember = &gauge->m_memberInfos[(gauge->m_topOrderIndex + slot) % 3];
  pOnlineParams = p_m_errorMember->pOnlineParams;
  if ( p_m_errorMember->characterNo == CHARACTER_NO_NONE )
    return 0i64;
  if ( !pOnlineParams )
    return 0i64;
  if ( pOnlineParams->chatMessageRenderCounter <= 0 )
    return 0i64;
  animationFrame = pOnlineParams->chatWindowScaleSize;
  if ( animationFrame <= 0.0 )
    return 0i64;
  v10 = 1920 - renderX;
  if ( m_playerID != PLAYER_ID_2P )
    v10 = renderX;
  m_width = pOnlineParams->stringChatMessage.m_width;
  v12 = (int)pOnlineParams->textPlayerID->m_body.m_ptr->m_size.Width + 180;
  if ( v12 <= m_width + 52 )
    v12 = m_width + 52;
  v13 = 710;
  if ( v12 <= 426 )
    v13 = 426;
  v14 = BattleHudRenderer::renderMemberChatLogWindow(this, m_playerID, v10, renderY, (float)v13, animationFrame);
  LODWORD(v19) = 1065353216;
  BYTE4(v19) = 0;
  if ( m_playerID )
  {
    v15 = v10 - 46;
    v16 = -m_width;
  }
  else
  {
    v15 = v10 + 20;
    v16 = 26;
  }
  drawParams.colorARGB = -1;
  *(_QWORD *)&drawParams.alpha = v19;
  *(_QWORD *)&drawParams.renderMode = 0i64;
  drawParams.scaleH = animationFrame;
  drawParams.scaleW = animationFrame;
  if ( pOnlineParams->stringChatMessage.m_type )
    ImageString::draw(
      &pOnlineParams->stringChatMessage,
      v15 + (int)(float)((float)v16 * animationFrame),
      renderY - (int)(float)(animationFrame * -4.0) + 24,
      &drawParams,
      width);
  this->drawStack(this);
  return v14;
}

__int64 __fastcall BattleHudRenderer::renderMemberChatLogWindow(
        BattleHudRenderer *this,
        PLAYER_ID playerID,
        int renderX,
        int renderY,
        float width,
        float animationFrame)
{
  BattleHudResources *m_pResources; // rdi
  unsigned int imageID; // ebp
  float v12; // xmm6_4
  BattleHudResources *v13; // rdi
  const _C_CONV *p_rect; // rsi
  BattleHudResources *v15; // rdi
  const _C_CONV *v16; // rdi
  BattleHudRenderer_vtbl *v17; // rax
  int h; // er15
  BattleHudResources *v19; // rsi
  int v20; // er15
  const _C_CONV *v21; // rsi
  BattleHudResources *v22; // rdi
  const _C_CONV *v23; // rdi
  BattleHudRenderer_vtbl *v24; // rax
  BOOL v26; // [rsp+30h] [rbp-78h]
  __int64 v27; // [rsp+40h] [rbp-68h] BYREF
  int v28; // [rsp+48h] [rbp-60h]
  int v29; // [rsp+4Ch] [rbp-5Ch]
  int v30; // [rsp+50h] [rbp-58h]
  char v31; // [rsp+54h] [rbp-54h]
  int v32; // [rsp+58h] [rbp-50h]

  m_pResources = this->m_pResources;
  if ( m_pResources->isError(m_pResources) )
    imageID = -1;
  else
    imageID = m_pResources->m_pCommons->imageID;
  v28 = 1065353216;
  v27 = 0i64;
  v29 = 1065353216;
  v30 = 1065353216;
  v31 = 0;
  v32 = -1;
  if ( playerID == PLAYER_ID_2P )
  {
    v31 = 1;
    HIDWORD(v27) = 1;
  }
  v12 = fminf(animationFrame, 1.0);
  if ( v12 < 0.0 )
    v12 = 0.0;
  v13 = this->m_pResources;
  p_rect = &v13->m_errorWorkaround.rect;
  if ( !v13->isError(v13) )
    p_rect = &ImageRects_Commons[294];
  v15 = this->m_pResources;
  if ( v15->isError(v15) )
    v16 = &v15->m_errorWorkaround.rect;
  else
    v16 = &ImageRects_Commons[295];
  this->m_pResources->isError(this->m_pResources);
  v17 = this->__vftable;
  v28 = LODWORD(v12);
  if ( width <= 426.0 )
    v16 = p_rect;
  v17->draw(this, imageID, renderX, renderY, v16, (const DrawHelper::DrawParams *)&v27, 0);
  h = p_rect->h;
  v19 = this->m_pResources;
  v20 = renderY + h;
  if ( v19->isError(v19) )
    v21 = &v19->m_errorWorkaround.rect;
  else
    v21 = &ImageRects_Commons[297];
  v22 = this->m_pResources;
  if ( v22->isError(v22) )
    v23 = &v22->m_errorWorkaround.rect;
  else
    v23 = &ImageRects_Commons[298];
  this->m_pResources->isError(this->m_pResources);
  v24 = this->__vftable;
  LOBYTE(v26) = 0;
  v29 = LODWORD(v12);
  if ( width <= 426.0 )
    v23 = v21;
  v24->draw(this, imageID, renderX, v20, v23, (const DrawHelper::DrawParams *)&v27, v26);
  return (unsigned int)(int)(float)((float)((float)v21->h * v12) + 0.0);
}

void __fastcall BattleHudRenderer::renderMemberInfo(
        BattleHudRenderer *this,
        BattleHudGauge *gauge,
        const BattleHudRenderer::RenderParams *params)
{
  int v3; // er15
  const BattleHudRenderer::RenderParams *v4; // rax
  int v5; // er14
  __int64 v6; // r12
  BattleHudGauge *v7; // rbx
  int v9; // ebp
  int renderY; // esi
  int v11; // edi
  int v12; // ebx
  int renderX[4]; // [rsp+40h] [rbp-68h]
  int v16[4]; // [rsp+50h] [rbp-58h]

  v3 = 0;
  v4 = params;
  renderX[0] = 106;
  v5 = 0;
  v6 = 0i64;
  renderX[1] = 106;
  v7 = gauge;
  renderX[2] = 106;
  v16[0] = 118;
  v16[1] = 148;
  v16[2] = 178;
  do
  {
    v9 = renderX[v6];
    renderY = v3 + v4->positionPlusY + v16[v6];
    v11 = BattleHudRenderer::renderMemberChatLog(this, v7, v5, v9 - 75, renderY - 11);
    v12 = BattleHudRenderer::renderMemberNameWindow(this, v7, v5, v9, renderY, params);
    BattleHudRenderer::renderMemberName(this, gauge, v5, v9, renderY, params);
    v4 = params;
    ++v6;
    if ( v11 > v12 )
      v12 = v11;
    ++v5;
    v3 += v12;
    v7 = gauge;
  }
  while ( v5 < 3 );
}

void __fastcall BattleHudRenderer::renderMemberName(
        BattleHudRenderer *this,
        const BattleHudGauge *gauge,
        int slot,
        int renderX,
        int renderY,
        const BattleHudRenderer::RenderParams *params)
{
  BattleHudGauge::MemberInfo *p_m_errorMember; // rax
  int imageID; // ebp
  int v10; // er8
  int v11; // er9
  int v12; // er11
  unsigned int gaugeRenderColor; // ebx
  float v14; // xmm2_4
  int v15; // ecx
  __int64 v16; // r8
  BattleHudRenderer_vtbl *v17; // rax
  bool v18; // zf
  __int128 v19; // [rsp+40h] [rbp-48h]
  __int64 v20; // [rsp+50h] [rbp-38h]
  __int128 v21; // [rsp+60h] [rbp-28h] BYREF
  __int64 v22; // [rsp+70h] [rbp-18h]
  unsigned int v23; // [rsp+78h] [rbp-10h]

  if ( (unsigned int)slot > 2 )
    p_m_errorMember = &gauge->m_errorMember;
  else
    p_m_errorMember = &gauge->m_memberInfos[(gauge->m_topOrderIndex + slot) % 3];
  if ( p_m_errorMember->characterNo != CHARACTER_NO_NONE )
  {
    imageID = p_m_errorMember->imageFace.imageID;
    if ( p_m_errorMember->bAlive )
    {
      if ( gauge->m_playerID )
      {
        LOBYTE(v10) = 112;
        LOBYTE(v11) = -38;
        LOBYTE(v12) = 21;
      }
      else
      {
        LOBYTE(v10) = 0;
        LOBYTE(v11) = -72;
        LOBYTE(v12) = -29;
      }
    }
    else
    {
      LOBYTE(v10) = -126;
      LOBYTE(v11) = -126;
      LOBYTE(v12) = -126;
    }
    gaugeRenderColor = params->gaugeRenderColor;
    if ( HIBYTE(gaugeRenderColor) )
    {
      v14 = (float)HIBYTE(params->gaugeRenderColor) / 255.0;
      v10 = (int)(float)((float)((float)(BYTE2(gaugeRenderColor) - (unsigned __int8)v10) * v14)
                       + (float)(unsigned __int8)v10);
      v11 = (int)(float)((float)((float)(BYTE1(gaugeRenderColor) - (unsigned __int8)v11) * v14)
                       + (float)(unsigned __int8)v11);
      v12 = (int)(float)((float)((float)((unsigned __int8)gaugeRenderColor - (unsigned __int8)v12) * v14)
                       + (float)(unsigned __int8)v12);
    }
    v15 = (unsigned __int8)v10 << 8;
    *(_QWORD *)&v19 = 0i64;
    v16 = (unsigned int)(1920 - renderX);
    BYTE4(v20) = 0;
    v17 = this->__vftable;
    v18 = gauge->m_playerID == PLAYER_ID_2P;
    v23 = (unsigned __int8)v12 | (((unsigned __int8)v11 | v15) << 8) | 0xFF000000;
    if ( !v18 )
      v16 = (unsigned int)renderX;
    *((_QWORD *)&v19 + 1) = 0x3F8000003F800000i64;
    LODWORD(v20) = 1065353216;
    v21 = v19;
    v22 = v20;
    v17->draw(this, imageID, v16, renderY, &ImageRects_CharacterFace[2], (const DrawHelper::DrawParams *)&v21, 0);
  }
}

__int64 __fastcall BattleHudRenderer::renderMemberNameWindow(
        BattleHudRenderer *this,
        const BattleHudGauge *gauge,
        int slot,
        int renderX,
        int renderY,
        const BattleHudRenderer::RenderParams *params)
{
  BattleHudGauge::MemberInfo *p_m_errorMember; // rsi
  BattleHudResources *m_pResources; // rdi
  unsigned int imageID; // er12
  PLAYER_ID m_playerID; // ebp
  int v14; // edi
  unsigned int gaugeRenderColor; // eax
  __int64 v16; // rbx
  float v17; // xmm6_4
  BattleHudResources *v18; // rsi
  const _C_CONV *p_rect; // rbx
  BattleHudRenderer_vtbl *v20; // rax
  int v22; // [rsp+40h] [rbp-98h]
  __int128 v23; // [rsp+48h] [rbp-90h] BYREF
  __int64 v24; // [rsp+58h] [rbp-80h]
  int v25; // [rsp+60h] [rbp-78h]
  __int128 v26; // [rsp+68h] [rbp-70h]
  __int64 v27; // [rsp+78h] [rbp-60h]

  if ( (unsigned int)slot > 2 )
    p_m_errorMember = &gauge->m_errorMember;
  else
    p_m_errorMember = &gauge->m_memberInfos[(slot + gauge->m_topOrderIndex) % 3];
  if ( p_m_errorMember->characterNo != CHARACTER_NO_NONE )
  {
    m_pResources = this->m_pResources;
    if ( m_pResources->isError(m_pResources) )
      imageID = -1;
    else
      imageID = m_pResources->m_pCommons->imageID;
    m_playerID = gauge->m_playerID;
    *((_QWORD *)&v26 + 1) = 0x3F8000003F800000i64;
    v14 = 0;
    *(_QWORD *)&v26 = 0i64;
    gaugeRenderColor = params->gaugeRenderColor;
    LODWORD(v27) = 1065353216;
    BYTE4(v27) = 0;
    *(_QWORD *)&v23 = 0i64;
    *((_QWORD *)&v23 + 1) = 0x3F8000003F800000i64;
    LODWORD(v24) = 1065353216;
    BYTE4(v24) = 0;
    v25 = -1;
    v22 = gaugeRenderColor;
    if ( slot )
      v16 = 231i64 - p_m_errorMember->bAlive;
    else
      v16 = (m_playerID == PLAYER_ID_2P) + 228i64;
    v17 = (float)renderX;
    if ( m_playerID == PLAYER_ID_2P )
      v17 = 1920.0 - v17;
    v18 = this->m_pResources;
    if ( v18->isError(v18) )
      p_rect = &v18->m_errorWorkaround.rect;
    else
      p_rect = &ImageRects_Commons[v16];
    v25 = v22;
    LOBYTE(v14) = m_playerID == PLAYER_ID_2P;
    v24 = v27;
    BYTE4(v24) = m_playerID == PLAYER_ID_2P;
    v20 = this->__vftable;
    v23 = v26;
    DWORD1(v23) = v14;
    v20->draw(this, imageID, (int)v17, (int)(float)renderY, p_rect, (const DrawHelper::DrawParams *)&v23, 0);
  }
  return 0i64;
}

void __fastcall BattleHudRenderer::renderMessage(
        BattleHudRenderer *this,
        const BattleHudGauge *gauge,
        const BattleHudRenderer::RenderParams *params)
{
  BattleHudResources *m_pResources; // rbx
  __int64 v5; // rsi
  const BattleHudRenderer::RenderParams *v6; // r15
  BattleHudRenderer_vtbl *v8; // r10
  int v9; // eax
  unsigned __int64 v10; // rdx
  const _C_CONV *v11; // r8
  int m_messageInfoIndexTop; // ecx
  int v13; // xmm14_4^4
  __int128 v14; // xmm15
  __int64 v15; // rbx
  const _C_CONV *p_rect; // r14
  const _C_CONV *v17; // r12
  BattleHudResources *v18; // rsi
  BattleHudResources *v19; // rsi
  BattleHudResources *v20; // rsi
  const _C_CONV *v21; // rsi
  float v22; // xmm7_4
  float v23; // xmm6_4
  int w; // ecx
  float v25; // xmm1_4
  float visibleCounter; // xmm8_4
  int v27; // eax
  int v28; // esi
  int positionPlusX; // esi
  int v30; // ebx
  float v31; // xmm2_4
  float v32; // xmm1_4
  int v33; // esi
  float v34; // xmm6_4
  BattleHudRenderer_vtbl *v35; // rax
  int v36; // er15
  int v37; // er15
  BattleHudRenderer_vtbl *v38; // rax
  int v39; // er14
  float v40; // xmm7_4
  float v41; // xmm6_4
  float v42; // xmm8_4
  BattleHudRenderer_vtbl *v43; // rax
  const _C_CONV *v44; // [rsp+20h] [rbp-E0h]
  BOOL v45; // [rsp+30h] [rbp-D0h]
  BOOL v46; // [rsp+30h] [rbp-D0h]
  unsigned int v47; // [rsp+40h] [rbp-C0h]
  __int128 v48; // [rsp+48h] [rbp-B8h] BYREF
  int v49; // [rsp+58h] [rbp-A8h]
  int v50; // [rsp+5Ch] [rbp-A4h]
  int v51; // [rsp+60h] [rbp-A0h]
  __int128 v52; // [rsp+68h] [rbp-98h]
  int v53; // [rsp+78h] [rbp-88h]
  int v54; // [rsp+7Ch] [rbp-84h]
  unsigned int imageID; // [rsp+150h] [rbp+50h]
  int v56; // [rsp+158h] [rbp+58h]
  int v58; // [rsp+168h] [rbp+68h]

  m_pResources = this->m_pResources;
  v5 = *(_QWORD *)&AppMain::pApp;
  v6 = params;
  if ( m_pResources->isError(m_pResources) )
    imageID = -1;
  else
    imageID = m_pResources->m_pCommons->imageID;
  v8 = this->__vftable;
  *(_QWORD *)&v52 = 0i64;
  LOBYTE(v54) = 0;
  *(_QWORD *)&v48 = 0i64;
  LOBYTE(v50) = 0;
  v9 = *(_DWORD *)(v5 + 32);
  *((_QWORD *)&v52 + 1) = 0x3F8000003F800000i64;
  v53 = 1065353216;
  *((_QWORD *)&v48 + 1) = 0x3F8000003F800000i64;
  v49 = 1065353216;
  v51 = -1;
  v8->setClip(this, 0, 0, 1920, v9);
  m_messageInfoIndexTop = gauge->m_messageInfoIndexTop;
  v56 = m_messageInfoIndexTop;
  if ( m_messageInfoIndexTop != gauge->m_messageInfoIndexBottom )
  {
    v13 = v54;
    v14 = v52;
    while ( 2 )
    {
      v15 = m_messageInfoIndexTop;
      switch ( gauge->m_messageInfo[m_messageInfoIndexTop].messageId )
      {
        case SYSTEM_MES_ADVANCED_CANCEL:
          p_rect = ImageRects_Commons;
          v17 = &ImageRects_Commons[69];
          goto LABEL_14;
        case SYSTEM_MES_COUNTER:
          p_rect = &ImageRects_Commons[1];
          v17 = &ImageRects_Commons[68];
          goto LABEL_14;
        case SYSTEM_MES_GUARD_CRASH:
          p_rect = &ImageRects_Commons[2];
          v17 = &ImageRects_Commons[68];
          goto LABEL_14;
        case SYSTEM_MES_REVERSAL:
          p_rect = &ImageRects_Commons[3];
          v17 = &ImageRects_Commons[71];
          goto LABEL_14;
        case SYSTEM_MES_STUN:
          p_rect = &ImageRects_Commons[4];
          v17 = &ImageRects_Commons[68];
          goto LABEL_14;
        case SYSTEM_MES_SUPER_CANCEL:
          p_rect = &ImageRects_Commons[5];
          v17 = &ImageRects_Commons[70];
          goto LABEL_14;
        case SYSTEM_MES_CLIMAX_CANCEL:
          p_rect = &ImageRects_Commons[6];
          v17 = &ImageRects_Commons[72];
LABEL_14:
          v18 = this->m_pResources;
          if ( ((unsigned __int64 (__fastcall *)(BattleHudResources *, unsigned __int64, const _C_CONV *))v18->isError)(
                 v18,
                 0x140000000ui64,
                 &ImageRects_Commons[68]) )
          {
            p_rect = &v18->m_errorWorkaround.rect;
          }
          v19 = this->m_pResources;
          if ( v19->isError(v19) )
            v17 = &v19->m_errorWorkaround.rect;
          v20 = this->m_pResources;
          if ( v20->isError(v20) )
            v21 = &v20->m_errorWorkaround.rect;
          else
            v21 = &ImageRects_Commons[5];
          v22 = *(float *)&FLOAT_1_0;
          v23 = *(float *)&FLOAT_1_0;
          w = p_rect->w;
          v25 = gauge->m_messageInfo[v15].pos + 460.0;
          visibleCounter = gauge->m_messageInfo[v15].visibleCounter;
          v27 = (v21->w - w) / 2;
          v28 = (v21->w - w) / -2;
          if ( gauge->m_playerID != PLAYER_ID_2P )
            v28 = v27;
          v58 = v28;
          positionPlusX = v6->positionPlusX;
          v30 = (int)visibleCounter;
          v47 = (int)(float)(v25 + (float)v6->positionPlusY);
          if ( (int)visibleCounter > 4 )
          {
            if ( v30 > 6 )
            {
              if ( v30 < 74 )
              {
                v33 = positionPlusX + 316;
              }
              else
              {
                v34 = (float)(visibleCounter - 74.0) * 0.25;
                v33 = (int)(float)(Tween::easing(196.0, 420.0, v34, Linear) + (float)positionPlusX);
                v22 = Tween::easing(1.0, 0.1, v34, Linear);
                v23 = Tween::easing(1.0, 0.0, v34, Linear);
              }
            }
            else
            {
              v33 = (int)(float)(Tween::easing(380.0, 316.0, (float)(visibleCounter - 4.0) * 0.5, Linear)
                               + (float)positionPlusX);
            }
          }
          else
          {
            v31 = visibleCounter / 5.0;
            if ( (float)(visibleCounter / 5.0) > 0.0 )
            {
              if ( v31 < 1.0 )
                v32 = (float)((float)((float)(v31 * 352.0) / 352.0) * 352.0) + 28.0;
              else
                v32 = FLOAT_380_0;
            }
            else
            {
              v32 = FLOAT_28_0;
            }
            v33 = (int)(float)((float)positionPlusX + v32);
            if ( v31 > 0.0 )
            {
              if ( v31 < 1.0 )
                v22 = (float)((float)((float)(v31 * 0.72000003) / 0.72000003) * 0.72000003) + 0.28;
              else
                v22 = *(float *)&FLOAT_1_0;
            }
            else
            {
              v22 = FLOAT_0_28;
            }
            v23 = Tween::easing(0.0, 1.0, v31, Linear);
          }
          v35 = this->__vftable;
          v36 = 1920 - v33;
          LOBYTE(v45) = 0;
          if ( gauge->m_playerID != PLAYER_ID_2P )
            v36 = v33;
          v50 = v13;
          v37 = v36 - v58;
          v48 = v14;
          v51 = -1;
          v49 = LODWORD(v23);
          *((float *)&v48 + 3) = v22;
          v35->draw(this, imageID, v37, v47, p_rect, (const DrawHelper::DrawParams *)&v48, v45);
          if ( v30 < 4 )
          {
            v39 = imageID;
          }
          else
          {
            if ( v30 < 74 )
              v23 = Tween::easing(0.0, 1.0, (float)(visibleCounter - 4.0) / 70.0, Linear);
            v38 = this->__vftable;
            v48 = v14;
            LOBYTE(v46) = 0;
            v50 = v13;
            v44 = p_rect;
            v39 = imageID;
            v49 = LODWORD(v23);
            *((float *)&v48 + 3) = v22;
            v51 = -1;
            LODWORD(v48) = 1;
            v38->draw(this, imageID, v37, v47, v44, (const DrawHelper::DrawParams *)&v48, v46);
          }
          v40 = *(float *)&FLOAT_1_0;
          if ( v30 > 4 )
          {
            if ( v30 > 69 )
            {
              if ( v30 > 74 )
              {
                v42 = (float)(visibleCounter - 74.0) * 0.25;
                v41 = Tween::easing(1.0, 0.0, v42, Linear);
                v40 = Tween::easing(1.0, 0.1, v42, Linear);
              }
              else
              {
                v41 = Tween::easing(0.0, 1.0, (float)(visibleCounter - 69.0) / 5.0, Linear);
              }
            }
            else
            {
              v41 = 0.0;
            }
          }
          else
          {
            v41 = Tween::easing(0.80000001, 0.0, visibleCounter / 5.0, Linear);
          }
          v43 = this->__vftable;
          v48 = v14;
          LOBYTE(v46) = 0;
          v50 = v13;
          v49 = LODWORD(v41);
          *((float *)&v48 + 3) = v40;
          v51 = -1;
          LODWORD(v48) = 1;
          v43->draw(this, v39, v37, v47, v17, (const DrawHelper::DrawParams *)&v48, v46);
          v11 = &ImageRects_Commons[68];
          v6 = params;
          v10 = 0x140000000ui64;
          m_messageInfoIndexTop = (v56 + 1) % 10;
          v56 = m_messageInfoIndexTop;
          if ( m_messageInfoIndexTop == gauge->m_messageInfoIndexBottom )
            break;
          continue;
        default:
          return;
      }
      break;
    }
  }
  ((void (__fastcall *)(BattleHudRenderer *, unsigned __int64, const _C_CONV *))this->clearClip)(this, v10, v11);
}

void __fastcall BattleHudRenderer::renderOperateCharacterSymbol(
        BattleHudRenderer *this,
        PLAYER_ID playerID,
        int rx,
        int ry,
        float alpha)
{
  BattleHudResources *m_pResources; // rbx
  unsigned int imageID; // edi
  BattleHudResources *v11; // rbx
  const _C_CONV *p_rect; // rcx
  __int64 v13; // rcx
  BattleHudRenderer_vtbl *v14; // rax
  __int64 v15; // [rsp+40h] [rbp-38h] BYREF
  float v16; // [rsp+48h] [rbp-30h]
  float v17; // [rsp+4Ch] [rbp-2Ch]
  float v18; // [rsp+50h] [rbp-28h]
  char v19; // [rsp+54h] [rbp-24h]
  int v20; // [rsp+58h] [rbp-20h]

  m_pResources = this->m_pResources;
  if ( m_pResources->isError(m_pResources) )
    imageID = -1;
  else
    imageID = m_pResources->m_pCommons->imageID;
  v11 = this->m_pResources;
  if ( v11->isError(v11) )
  {
    p_rect = &v11->m_errorWorkaround.rect;
  }
  else
  {
    v13 = 233i64;
    if ( playerID == PLAYER_ID_1P )
      v13 = 232i64;
    p_rect = &ImageRects_Commons[v13];
  }
  v18 = alpha;
  v15 = 0i64;
  v19 = 0;
  v16 = 1.0;
  v17 = 1.0;
  v20 = -1;
  v17 = (float)*(int *)(*(_QWORD *)&AppMain::pApp + 28i64) / 1920.0;
  v14 = this->__vftable;
  v16 = (float)*(int *)(*(_QWORD *)&AppMain::pApp + 32i64) / 1080.0;
  v14->draw(this, imageID, rx, ry, p_rect, (const DrawHelper::DrawParams *)&v15, 1);
}

void __fastcall BattleHudRenderer::renderOperateDescription(
        BattleHudRenderer *this,
        __int64 ry,
        BattleHudCommonNumbers::EOperateDescription::Type type,
        float alpha)
{
  BattleHudResources *m_pResources; // rsi
  int v7; // ebx
  int v8; // er14
  int imageID; // er13
  __int64 v10; // rbp
  unsigned int v11; // ecx
  int v12; // eax
  int v13; // edx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx
  int v17; // edx
  __int64 v18; // rax
  int v19; // edi
  __int64 v20; // rcx
  int h; // esi
  __int64 v22; // rbx
  __int64 v23; // r14
  int v24; // er8
  const _C_CONV *ImageRect; // rax
  int v26; // er12
  __int64 v27; // rdi
  int w; // eax
  BattleHudResources *v29; // rbx
  const _C_CONV *p_rect; // rbx
  BOOL v31; // [rsp+30h] [rbp-128h]
  __int64 v32; // [rsp+40h] [rbp-118h] BYREF
  int v33; // [rsp+48h] [rbp-110h]
  int v34; // [rsp+4Ch] [rbp-10Ch]
  float v35; // [rsp+50h] [rbp-108h]
  char v36; // [rsp+54h] [rbp-104h]
  int v37; // [rsp+58h] [rbp-100h]
  int imageIndex[32]; // [rsp+60h] [rbp-F8h]

  if ( type == Linear )
    return;
  m_pResources = this->m_pResources;
  v7 = *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2507556i64);
  v8 = *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2507552i64);
  if ( ((unsigned __int64 (__fastcall *)(BattleHudResources *, __int64))m_pResources->isError)(m_pResources, ry) )
    imageID = -1;
  else
    imageID = m_pResources->m_pCommons[2].imageID;
  v10 = 0i64;
  v11 = 0;
  if ( type == OutQuad )
  {
    if ( v8 == 3 )
    {
      v12 = 150;
    }
    else if ( (unsigned int)(v7 - 1) <= 1 )
    {
      v12 = 137;
    }
    else
    {
      v12 = 73;
      if ( v7 == 5 )
        v12 = 128;
    }
    imageIndex[0] = v12;
    v11 = 3;
    imageIndex[1] = 58;
    imageIndex[2] = -1;
    goto LABEL_15;
  }
  if ( type == InOutQuad )
  {
LABEL_15:
    if ( v8 == 3 )
    {
      v13 = 152;
    }
    else if ( (unsigned int)(v7 - 1) <= 1 )
    {
      v13 = 133;
    }
    else if ( v7 == 5 )
    {
      v13 = 132;
    }
    else
    {
      v13 = 76;
    }
    v14 = v11;
    v15 = v11 + 1;
    imageIndex[v14] = v13;
    imageIndex[v15] = 60;
    v16 = (unsigned int)(v15 + 1);
    imageIndex[v16] = -1;
    v11 = v16 + 1;
  }
  if ( v8 == 3 )
  {
    v17 = 151;
  }
  else if ( (unsigned int)(v7 - 1) <= 1 )
  {
    v17 = 135;
  }
  else if ( v7 == 5 )
  {
    v17 = 130;
  }
  else
  {
    v17 = 75;
  }
  v18 = v11;
  v19 = 0;
  v20 = v11 + 1;
  h = 0x7FFFFFFF;
  v22 = 0i64;
  imageIndex[v18] = v17;
  imageIndex[v20] = 84;
  v23 = (unsigned int)(v20 + 1);
  if ( (_DWORD)v20 != -1 )
  {
    do
    {
      v24 = imageIndex[v22];
      if ( v24 >= 0 )
      {
        ImageRect = BattleHudResources::getImageRect(this->m_pResources, (BattleHudResources::EImage::Type)2, v24);
        v19 += ImageRect->w;
        if ( h >= ImageRect->h )
          h = ImageRect->h;
      }
      else
      {
        v19 += 32;
      }
      ++v22;
    }
    while ( v22 < v23 );
  }
  v35 = alpha;
  v32 = 0i64;
  v33 = 1065353216;
  v34 = 1065353216;
  v36 = 0;
  v37 = -1;
  v26 = (int)(float)((float)(1920 - v19) * 0.5);
  if ( v23 )
  {
    do
    {
      v27 = imageIndex[v10];
      if ( (int)v27 >= 0 )
      {
        v29 = this->m_pResources;
        if ( v29->isError(v29) )
        {
LABEL_52:
          p_rect = &v29->m_errorWorkaround.rect;
        }
        else
        {
          switch ( *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2197384i64) )
          {
            case 0:
              p_rect = &ImageRects_Strings_JP[v27];
              break;
            case 1:
              p_rect = &ImageRects_Strings_US[v27];
              break;
            case 2:
              p_rect = &ImageRects_Strings_CN[v27];
              break;
            case 3:
              p_rect = &ImageRects_Strings_TW[v27];
              break;
            case 4:
              p_rect = &ImageRects_Strings_KR[v27];
              break;
            case 5:
              p_rect = &ImageRects_Strings_FR[v27];
              break;
            case 6:
              p_rect = &ImageRects_Strings_IT[v27];
              break;
            case 7:
              p_rect = &ImageRects_Strings_DE[v27];
              break;
            case 8:
              p_rect = &ImageRects_Strings_ES[v27];
              break;
            case 9:
              p_rect = &ImageRects_Strings_MX[v27];
              break;
            case 0xA:
              p_rect = &ImageRects_Strings_BR[v27];
              break;
            default:
              goto LABEL_52;
          }
        }
        LOBYTE(v31) = 0;
        this->draw(
          this,
          imageID,
          v26,
          (int)(float)((float)((float)((float)(h - p_rect->h) * 0.5) + 928.0) + 2.0),
          p_rect,
          (const DrawHelper::DrawParams *)&v32,
          v31);
        w = p_rect->w;
      }
      else
      {
        w = 32;
      }
      ++v10;
      v26 += w;
    }
    while ( v10 < v23 );
  }
  this->drawStack(this);
}

void __fastcall BattleHudRenderer::renderPowerGauge(
        BattleHudRenderer *this,
        const BattleHudGauge *gauge,
        const BattleHudRenderer::RenderParams *params)
{
  BattleHudResources *m_pResources; // rbx
  unsigned int imageID; // er12
  PLAYER_ID m_playerID; // ebx
  int v9; // er14
  unsigned int gaugeRenderColor; // eax
  BattleHudResources *v11; // rdi
  float v12; // xmm6_4
  float v13; // xmm7_4
  char v14; // al
  const _C_CONV *p_rect; // rcx
  __int128 v16; // xmm13
  BattleHudRenderer_vtbl *v17; // rax
  unsigned __int64 v18; // xmm14_8
  unsigned int barRenderColor; // er13
  float v20; // xmm11_4
  float v21; // xmm10_4
  float v22; // xmm9_4
  float v23; // xmm6_4
  BattleHudResources *v24; // rdi
  BattleHudResources_vtbl *v25; // rax
  const _C_CONV *v26; // rdi
  __int128 v27; // xmm15
  BattleHudRenderer_vtbl *v28; // rax
  float v29; // xmm6_4
  BattleHudResources *v30; // rdi
  __int128 *p_sx; // rdi
  float v32; // xmm2_4
  float v33; // xmm0_4
  float v34; // xmm6_4
  int v35; // edi
  const _C_CONV *v36; // rax
  float v37; // xmm0_4
  float v38; // xmm11_4
  float v39; // xmm1_4
  float v40; // xmm0_4
  float v41; // xmm2_4
  float v42; // xmm0_4
  __int64 v43; // rdx
  const BattleHudRenderer::RenderParams *v44; // rdi
  BattleHudRenderer_vtbl *v45; // rax
  float m_powerRate; // xmm0_4
  float w; // xmm0_4
  int v48; // eax
  BattleHudResources *v49; // rcx
  const _C_CONV *ImageRect; // rax
  int v51; // edi
  int v52; // er14
  bool v53; // zf
  float m_powerMaxStockAnimationCounter; // xmm0_4
  float v55; // xmm6_4
  const _C_CONV *v56; // rcx
  float v57; // xmm0_4
  float v58; // xmm10_4
  BattleHudRenderer_vtbl *v59; // rax
  const _C_CONV *v60; // rcx
  BattleHudRenderer_vtbl *v61; // rax
  int v62; // er14
  const _C_CONV *v63; // rax
  float v64; // xmm13_4
  float v65; // xmm15_4
  float v66; // xmm6_4
  Tween::EasingType v67; // xmm0_4
  float v68; // xmm1_4
  BattleHudRenderer_vtbl *v69; // rax
  const _C_CONV *v70; // rax
  const _C_CONV *v71; // rdi
  float v72; // xmm2_4
  BattleHudRenderer_vtbl *v73; // rax
  __int128 v74; // xmm9
  const _C_CONV *v75; // rdi
  float v76; // xmm0_4
  BattleHudRenderer_vtbl *v77; // rax
  float v78; // xmm9_4
  const _C_CONV *v79; // rdi
  float v80; // xmm9_4
  Tween::EasingType v81; // xmm10_4
  Tween::EasingType v82; // xmm14_4
  float v83; // xmm0_4
  unsigned int v84; // xmm13_4^4
  BattleHudRenderer_vtbl *v85; // rax
  const _C_CONV *v86; // rdi
  float v87; // xmm9_4
  float v88; // xmm11_4
  float v89; // xmm0_4
  BattleHudRenderer_vtbl *v90; // rax
  float v91; // xmm9_4
  float v92; // xmm10_4
  float m_powerStockAnimationCounter; // xmm0_4
  const _C_CONV *v94; // rax
  BattleHudRenderer_vtbl *v95; // r10
  int m_powerStock; // edi
  float v97; // xmm6_4
  const _C_CONV *v98; // rbx
  BattleHudRenderer_vtbl *v99; // rax
  BattleHudRenderer_vtbl *v100; // rax
  const _C_CONV *v101; // rax
  BattleHudRenderer_vtbl *v102; // r10
  const _C_CONV *v103; // rbx
  BattleHudRenderer_vtbl *v104; // rax
  const _C_CONV *v105; // rax
  const _C_CONV *v106; // rbx
  Image *Image; // rax
  BOOL type1; // [rsp+38h] [rbp-E0h]
  BOOL type1a; // [rsp+38h] [rbp-E0h]
  Tween::EasingType type1b; // [rsp+38h] [rbp-E0h]
  Tween::EasingType type1c; // [rsp+38h] [rbp-E0h]
  Tween::EasingType type1d; // [rsp+38h] [rbp-E0h]
  Tween::EasingType type1e; // [rsp+38h] [rbp-E0h]
  Tween::EasingType type1f; // [rsp+38h] [rbp-E0h]
  Tween::EasingType type2; // [rsp+58h] [rbp-C0h]
  Tween::EasingType type3; // [rsp+78h] [rbp-A0h]
  __int128 v117; // [rsp+98h] [rbp-80h] BYREF
  unsigned __int64 v118; // [rsp+A8h] [rbp-70h]
  int v119; // [rsp+B0h] [rbp-68h]
  int v120; // [rsp+B8h] [rbp-60h]
  unsigned __int64 outParams1; // [rsp+BCh] [rbp-5Ch] BYREF
  int imageIndex; // [rsp+C4h] [rbp-54h]
  BattleHudResources *v123; // [rsp+C8h] [rbp-50h]
  const BattleHudRenderer::RenderParams *v124; // [rsp+D0h] [rbp-48h]
  __int128 v125; // [rsp+D8h] [rbp-40h]
  unsigned __int64 v126; // [rsp+E8h] [rbp-30h]
  __int128 v127; // [rsp+F8h] [rbp-20h]
  unsigned __int64 v128; // [rsp+108h] [rbp-10h]
  __int128 v129; // [rsp+118h] [rbp+0h] BYREF

  m_pResources = this->m_pResources;
  v124 = params;
  if ( m_pResources->isError(m_pResources) )
    imageID = -1;
  else
    imageID = m_pResources->m_pCommons->imageID;
  m_playerID = gauge->m_playerID;
  v9 = 0;
  gaugeRenderColor = params->gaugeRenderColor;
  *(_QWORD *)&v125 = 0i64;
  *((_QWORD *)&v125 + 1) = 0x3F8000003F800000i64;
  LODWORD(v126) = 1065353216;
  BYTE4(v126) = 0;
  *(_QWORD *)&v127 = 0i64;
  *((_QWORD *)&v127 + 1) = 0x3F8000003F800000i64;
  LODWORD(v128) = 1065353216;
  BYTE4(v128) = 0;
  *(_QWORD *)&v117 = 0i64;
  *((_QWORD *)&v117 + 1) = 0x3F8000003F800000i64;
  LODWORD(v118) = 1065353216;
  BYTE4(v118) = 0;
  v119 = -1;
  v120 = gaugeRenderColor;
  if ( m_playerID == PLAYER_ID_2P )
  {
    BYTE4(v126) = 1;
    DWORD1(v125) = 1;
  }
  v11 = this->m_pResources;
  v12 = FLOAT_204_0;
  v13 = (float)(params->positionPlusY + 1022);
  v14 = v11->isError(v11);
  if ( m_playerID == PLAYER_ID_2P )
  {
    p_rect = &v11->m_errorWorkaround.rect;
    if ( !v14 )
      p_rect = &ImageRects_Commons[220];
    v12 = FLOAT_1715_0;
  }
  else if ( v14 )
  {
    p_rect = &v11->m_errorWorkaround.rect;
  }
  else
  {
    p_rect = &ImageRects_Commons[219];
  }
  v16 = v127;
  v119 = v120;
  v17 = this->__vftable;
  v18 = v128;
  v117 = v127;
  v118 = v128;
  v17->draw(this, imageID, (int)v12, (int)v13, p_rect, (const DrawHelper::DrawParams *)&v117, 0);
  barRenderColor = params->barRenderColor;
  v20 = FLOAT_N0_5;
  if ( gauge->m_bEnabledSpEffects && gauge->m_bPowerMax )
  {
    v21 = FLOAT_214_0;
    v22 = FLOAT_1706_0;
    v23 = FLOAT_214_0;
    if ( m_playerID == PLAYER_ID_2P )
      v23 = FLOAT_1706_0;
    v24 = this->m_pResources;
    v25 = v24->__vftable;
    v120 = 178 - (int)(float)((float)((int)gauge->m_animationCounter % 20) * -0.5);
    if ( v25->isError(v24) )
      v26 = &v24->m_errorWorkaround.rect;
    else
      v26 = &ImageRects_Commons[v120];
    v27 = v125;
    v28 = this->__vftable;
    LOBYTE(type1) = 0;
    v119 = barRenderColor;
    v120 = (int)v23;
    v118 = v126;
    HIDWORD(outParams1) = (int)v13;
    v117 = v125;
    v28->draw(this, imageID, (int)v23, (int)v13, v26, (const DrawHelper::DrawParams *)&v117, type1);
    imageIndex = (int)v13;
    LODWORD(outParams1) = v26->w;
  }
  else
  {
    v21 = FLOAT_214_0;
    v22 = FLOAT_1706_0;
    v29 = FLOAT_214_0;
    if ( m_playerID == PLAYER_ID_2P )
      v29 = FLOAT_1706_0;
    v30 = this->m_pResources;
    if ( v30->isError(v30) )
      p_sx = (__int128 *)&v30->m_errorWorkaround.rect.sx;
    else
      p_sx = (__int128 *)&ImageRects_Commons[221].sx;
    v27 = v125;
    LOBYTE(type1) = 0;
    v32 = v124->barLengthRate * gauge->m_powerRate;
    v129 = *p_sx;
    HIDWORD(outParams1) = (int)v13;
    v117 = v125;
    v118 = v126;
    LODWORD(outParams1) = (int)(float)(v32 * (float)SWORD2(v129));
    WORD2(v129) = outParams1;
    v119 = v124->barRenderColor;
    this->draw(this, imageID, (int)v29, (int)v13, (const _C_CONV *)&v129, (const DrawHelper::DrawParams *)&v117, type1);
    v33 = (float)SWORD2(v129);
    if ( m_playerID == PLAYER_ID_2P )
      v34 = v29 - v33;
    else
      v34 = v33 + v29;
    imageIndex = (int)v13;
    v120 = (int)v34;
  }
  if ( gauge->m_bEnabledSpEffects && (v35 = (int)gauge->m_animationCounter % 120, v35 <= 39) )
  {
    v123 = this->m_pResources;
    if ( ((__int64 (*)(void))v123->isError)() )
      v36 = &v123->m_errorWorkaround.rect;
    else
      v36 = &ImageRects_Commons[63];
    v123 = (BattleHudResources *)v36;
    v37 = Tween::easing(v21, (float)v36->w + v21, (float)v35 / 31.0, Linear);
    v38 = v37;
    if ( m_playerID == PLAYER_ID_2P )
      v38 = 1920.0 - v37;
    if ( v35 > 10 )
    {
      if ( v35 > 25 )
      {
        if ( v35 > 35 )
        {
          v39 = 0.0;
          v40 = *(float *)&FLOAT_6_0;
          v41 = (float)(v35 - 35) * 0.25;
        }
        else
        {
          v40 = FLOAT_10_0;
          v39 = *(float *)&FLOAT_6_0;
          v41 = (float)(v35 - 25) / 10.0;
        }
      }
      else
      {
        v39 = FLOAT_10_0;
        v40 = *(float *)&FLOAT_7_0;
        v41 = (float)(v35 - 10) / 15.0;
      }
    }
    else
    {
      v39 = *(float *)&FLOAT_7_0;
      v40 = 0.0;
      v41 = (float)v35 / 10.0;
    }
    v42 = Tween::easing(v40, v39, v41, Linear);
    if ( m_playerID == PLAYER_ID_2P )
      v43 = (unsigned int)(int)(float)(v22 - (float)(int)outParams1);
    else
      v43 = 214i64;
    ((void (__fastcall *)(BattleHudRenderer *, __int64, _QWORD))this->setClip)(this, v43, 0i64);
    v44 = v124;
    LOBYTE(type1a) = 0;
    v117 = v27;
    LODWORD(v117) = 1;
    v118 = v126;
    *((float *)&v117 + 2) = v42 / 14.0;
    BYTE4(v118) = BYTE4(v126) ^ 1;
    LOBYTE(v9) = BYTE4(v126) != 1;
    v119 = v124->barRenderColor;
    v45 = this->__vftable;
    HIDWORD(v117) = 1065353216;
    DWORD1(v117) = v9;
    v45->draw(
      this,
      imageID,
      (int)v38,
      HIDWORD(outParams1),
      (const _C_CONV *)v123,
      (const DrawHelper::DrawParams *)&v117,
      type1a);
    this->clearClip(this);
    v20 = FLOAT_N0_5;
  }
  else
  {
    v44 = v124;
  }
  m_powerRate = gauge->m_powerRate;
  if ( m_powerRate > 0.0 && m_powerRate < 1.0 )
  {
    w = (float)BattleHudResources::getImageRect(this->m_pResources, UNIQUE, 221)->w;
    if ( m_playerID == PLAYER_ID_2P )
      v21 = v22 - w;
    this->setClip(this, (int)v21, 0, (int)w, 1080);
    v48 = v44->barRenderColor;
    v49 = this->m_pResources;
    v117 = v27;
    LODWORD(v117) = 1;
    v118 = v126;
    v119 = v48;
    ImageRect = BattleHudResources::getImageRect(v49, UNIQUE, 224);
    LOBYTE(type1a) = 0;
    this->draw(this, imageID, v120, imageIndex, ImageRect, (const DrawHelper::DrawParams *)&v117, type1a);
    this->clearClip(this);
  }
  v51 = v44->positionPlusY + 989;
  v52 = 103 - (int)(float)((float)((int)gauge->m_animationCounter % 60) * v20);
  v53 = !gauge->m_bEnabledSpEffects;
  imageIndex = v52;
  if ( !v53 && gauge->m_bPowerMax )
  {
    m_powerMaxStockAnimationCounter = gauge->m_powerMaxStockAnimationCounter;
    if ( m_powerMaxStockAnimationCounter == 0.0 )
    {
      v55 = FLOAT_325_0;
      v56 = BattleHudResources::getImageRect(this->m_pResources, UNIQUE, 264);
      v57 = FLOAT_325_0;
      v58 = (float)v51;
      if ( m_playerID == PLAYER_ID_2P )
        v57 = FLOAT_1595_0;
      v59 = this->__vftable;
      LOBYTE(type1a) = 0;
      v119 = barRenderColor;
      v117 = v16;
      v118 = v18;
      v59->draw(this, imageID, (int)v57, (int)v58, v56, (const DrawHelper::DrawParams *)&v117, type1a);
      v60 = BattleHudResources::getImageRect(this->m_pResources, UNIQUE, v52);
      if ( m_playerID == PLAYER_ID_2P )
        v55 = FLOAT_1595_0;
      v61 = this->__vftable;
      LOBYTE(type1b) = 0;
      v117 = v16;
      v119 = barRenderColor;
      LODWORD(v117) = 1;
      v118 = v18;
      v61->draw(this, imageID, (int)v55, (int)v58, v60, (const DrawHelper::DrawParams *)&v117, type1b);
    }
    else
    {
      v62 = 20 - (int)m_powerMaxStockAnimationCounter;
      v63 = BattleHudResources::getImageRect(this->m_pResources, UNIQUE, 264);
      v64 = FLOAT_325_0;
      *(float *)&v120 = FLOAT_325_0;
      v123 = (BattleHudResources *)v63;
      v65 = (float)v51;
      if ( m_playerID == PLAYER_ID_2P )
        *(float *)&v120 = FLOAT_1595_0;
      v66 = (float)v62;
      if ( (float)v62 < 0.0 )
      {
        v68 = FLOAT_0_5;
        v67 = FLOAT_0_050000001;
        outParams1 = __PAIR64__(FLOAT_0_050000001, LODWORD(FLOAT_0_5));
      }
      else
      {
        easing(
          (float *)&outParams1,
          (float *)&outParams1 + 1,
          v66,
          0.0,
          0.5,
          0.050000001,
          FLOAT_1_0,
          0.69999999,
          0.25,
          2.0,
          FLOAT_1_1,
          0.050000001,
          3.0,
          1.0,
          FLOAT_0_94999999,
          4.0,
          1.0,
          1.0);
        v67 = HIDWORD(outParams1);
        LODWORD(v68) = outParams1;
      }
      v69 = this->__vftable;
      LOBYTE(type1a) = 0;
      v119 = barRenderColor;
      *(_QWORD *)&v117 = v127;
      *((_QWORD *)&v117 + 1) = __PAIR64__(v67, LODWORD(v68));
      v118 = v128;
      ((void (__fastcall *)(BattleHudRenderer *, _QWORD, _QWORD, _QWORD, BattleHudResources *, __int128 *))v69->draw)(
        this,
        imageID,
        (unsigned int)(int)*(float *)&v120,
        (unsigned int)(int)v65,
        v123,
        &v117);
      if ( v62 > 4 )
      {
        v74 = v127;
      }
      else
      {
        v70 = BattleHudResources::getImageRect(this->m_pResources, UNIQUE, 72);
        *(float *)&v120 = FLOAT_325_0;
        v71 = v70;
        if ( m_playerID == PLAYER_ID_2P )
          *(float *)&v120 = FLOAT_1595_0;
        easing(
          (float *)&outParams1,
          (float *)&outParams1 + 1,
          v66,
          0.0,
          0.5,
          0.050000001,
          (Tween::EasingType)type1a,
          1.0,
          0.69999999,
          0.25,
          type2,
          2.0,
          1.1,
          0.050000001,
          type3,
          4.0,
          1.2,
          0.050000001);
        if ( v66 < 2.0 )
        {
          LODWORD(v72) = FLOAT_1_0;
        }
        else if ( v66 > 4.0 )
        {
          v72 = 0.0;
        }
        else
        {
          v72 = Tween::easing(1.0, 0.0, (float)(v66 - 2.0) * 0.5, Linear);
        }
        v73 = this->__vftable;
        LOBYTE(type1c) = 0;
        v119 = barRenderColor;
        v74 = v127;
        DWORD1(v117) = DWORD1(v127);
        LODWORD(v117) = 1;
        *((_QWORD *)&v117 + 1) = outParams1;
        v118 = __PAIR64__(HIDWORD(v128), LODWORD(v72));
        v73->draw(this, imageID, (int)*(float *)&v120, (int)v65, v71, (const DrawHelper::DrawParams *)&v117, type1c);
      }
      v75 = BattleHudResources::getImageRect(this->m_pResources, UNIQUE, imageIndex);
      if ( m_playerID == PLAYER_ID_2P )
        v64 = FLOAT_1595_0;
      if ( v66 < 2.0 )
      {
        v76 = 0.0;
      }
      else if ( v66 > 5.0 )
      {
        LODWORD(v76) = FLOAT_1_0;
      }
      else
      {
        v76 = Tween::easing(0.0, 1.0, (float)(v66 - 2.0) / 3.0, Linear);
      }
      v77 = this->__vftable;
      LOBYTE(type1a) = 0;
      v117 = v74;
      v119 = barRenderColor;
      LODWORD(v117) = 1;
      v118 = __PAIR64__(HIDWORD(v128), LODWORD(v76));
      v77->draw(this, imageID, (int)v64, (int)v65, v75, (const DrawHelper::DrawParams *)&v117, type1a);
      v78 = FLOAT_0_125;
      if ( v62 > 8 )
      {
        v84 = DWORD1(v125);
      }
      else
      {
        v79 = BattleHudResources::getImageRect(this->m_pResources, UNIQUE, 72);
        v80 = Tween::easing(0.0, 80.0, v66 * 0.125, Linear) + 299.0;
        if ( m_playerID == PLAYER_ID_2P )
          v80 = 1920.0 - v80;
        if ( v66 < 0.0 )
        {
          v82 = FLOAT_1_3;
          v81 = FLOAT_0_1;
        }
        else
        {
          easing(
            (float *)&outParams1,
            (float *)&outParams1 + 1,
            v66,
            0.0,
            1.3,
            0.1,
            FLOAT_4_0,
            1.3,
            0.2,
            5.0,
            FLOAT_1_3,
            0.5,
            6.0,
            1.3,
            FLOAT_0_1,
            8.0,
            2.0,
            0.1);
          v81 = HIDWORD(outParams1);
          v82 = (int)outParams1;
        }
        if ( v66 < 6.0 )
        {
          LODWORD(v83) = FLOAT_1_0;
        }
        else if ( v66 > 8.0 )
        {
          v83 = 0.0;
        }
        else
        {
          v83 = Tween::easing(1.0, 0.0, (float)(v66 - 6.0) * 0.5, Linear);
        }
        v84 = DWORD1(v125);
        v85 = this->__vftable;
        LOBYTE(type1a) = 0;
        *(_QWORD *)((char *)&v117 + 4) = __PAIR64__(v82, DWORD1(v125));
        v119 = barRenderColor;
        LODWORD(v117) = 1;
        HIDWORD(v117) = v81;
        v118 = __PAIR64__(HIDWORD(v126), LODWORD(v83));
        v85->draw(this, imageID, (int)v80, (int)v65, v79, (const DrawHelper::DrawParams *)&v117, type1a);
        v78 = FLOAT_0_125;
      }
      if ( v62 <= 12 )
      {
        v86 = BattleHudResources::getImageRect(this->m_pResources, UNIQUE, 67);
        v87 = Tween::easing(0.0, 370.0, v66 * v78, Linear) + 205.0;
        if ( m_playerID == PLAYER_ID_2P )
          v87 = 1920.0 - v87;
        v88 = Tween::easing(2.5, 1.8, v66 / 12.0, Linear);
        if ( v66 < 6.0 )
        {
          LODWORD(v89) = FLOAT_1_0;
        }
        else if ( v66 > 12.0 )
        {
          v89 = 0.0;
        }
        else
        {
          v89 = Tween::easing(1.0, 0.0, (float)(v66 - 6.0) / 6.0, Linear);
        }
        v90 = this->__vftable;
        *(_QWORD *)((char *)&v117 + 4) = __PAIR64__(LODWORD(v88), v84);
        LOBYTE(type1a) = 0;
        v119 = barRenderColor;
        LODWORD(v117) = 1;
        *((float *)&v117 + 3) = v88;
        v118 = __PAIR64__(HIDWORD(v126), LODWORD(v89));
        v90->draw(this, imageID, (int)v87, (int)v65, v86, (const DrawHelper::DrawParams *)&v117, type1a);
      }
      v20 = FLOAT_N0_5;
      v18 = v128;
      v16 = v127;
    }
  }
  v91 = FLOAT_147_0;
  v92 = (float)(v124->positionPlusY + 998);
  if ( m_playerID == PLAYER_ID_2P )
    v91 = FLOAT_1774_0;
  m_powerStockAnimationCounter = gauge->m_powerStockAnimationCounter;
  if ( m_powerStockAnimationCounter > 0.0 )
  {
    m_powerStock = gauge->m_powerStock;
    v97 = (float)(22 - (int)m_powerStockAnimationCounter);
    v98 = BattleHudResources::getImageRect(this->m_pResources, UNIQUE, m_powerStock + 19);
    LOBYTE(type1a) = 0;
    v99 = this->__vftable;
    v119 = barRenderColor;
    HIDWORD(v118) = HIDWORD(v18);
    *(float *)&v118 = 1.0 - (float)(v97 / 22.0);
    v117 = v16;
    v99->draw(this, imageID, (int)v91, (int)v92, v98, (const DrawHelper::DrawParams *)&v117, type1a);
    v100 = this->__vftable;
    LOBYTE(type1d) = 0;
    v117 = v16;
    HIDWORD(v118) = HIDWORD(v18);
    *(float *)&v118 = 1.0 - (float)(v97 / 22.0);
    v119 = barRenderColor;
    LODWORD(v117) = 1;
    v100->draw(this, imageID, (int)v91, (int)v92, v98, (const DrawHelper::DrawParams *)&v117, type1d);
    this->drawStack(this);
    v101 = BattleHudResources::getImageRect(this->m_pResources, UNIQUE, m_powerStock + 20);
    v102 = this->__vftable;
    v103 = v101;
    LOBYTE(type1e) = 0;
    HIDWORD(v118) = HIDWORD(v18);
    *(float *)&v118 = v97 / 22.0;
    v117 = v16;
    v119 = barRenderColor;
    v102->draw(this, imageID, (int)v91, (int)v92, v101, (const DrawHelper::DrawParams *)&v117, type1e);
    v104 = this->__vftable;
    LOBYTE(type1f) = 0;
    v117 = v16;
    HIDWORD(v118) = HIDWORD(v18);
    *(float *)&v118 = 1.0 - (float)(v97 / 22.0);
    v119 = barRenderColor;
    LODWORD(v117) = 1;
    v104->draw(this, imageID, (int)v91, (int)v92, v103, (const DrawHelper::DrawParams *)&v117, type1f);
    v105 = BattleHudResources::getImageRect(this->m_pResources, UNIQUE, 141 - (int)(float)(v97 * v20));
    `anonymous namespace'::g_graphicsOpt = 1;
    v106 = v105;
    `anonymous namespace'::g_srcRatio = 1.0;
    Graphics::setRenderMode(*(Graphics **)(*(_QWORD *)(*(_QWORD *)&AppMain::pApp + 112i64) + 8i64), 1, 255);
    Image = BattleHudResources::getImage(this->m_pResources, UNIQUE);
    drawConvAA(Image, v91, v92, v106, 1.2, 1.2);
  }
  else
  {
    v94 = BattleHudResources::getImageRect(this->m_pResources, UNIQUE, gauge->m_powerStock + 20);
    v95 = this->__vftable;
    LOBYTE(type1a) = 0;
    v119 = barRenderColor;
    v117 = v16;
    v118 = v18;
    v95->draw(this, imageID, (int)v91, (int)v92, v94, (const DrawHelper::DrawParams *)&v117, type1a);
  }
}

void __fastcall BattleHudRenderer::renderReplayDescription(
        BattleHudRenderer *this,
        int renderX,
        int renderY,
        float alpha)
{
  BattleHudResources *m_pResources; // rdi
  BattleHudResources_vtbl *v8; // rax
  int imageID; // esi
  int v10; // eax
  BattleHudResources *v11; // rcx
  int v12; // er10
  const _C_CONV *rect; // rdi
  const _C_CONV *ImageRect; // r12
  int v15; // er13
  int v16; // edi
  int v17; // edi
  int v18; // eax
  const _C_CONV *v19; // r15
  const _C_CONV *v20; // r12
  int v21; // er13
  int v22; // er15
  int v23; // edi
  const _C_CONV *v24; // r15
  const _C_CONV *v25; // r12
  int v26; // er13
  int v27; // er15
  int v28; // eax
  const _C_CONV *v29; // r15
  const _C_CONV *v30; // r12
  int v31; // er13
  int v32; // er15
  int v33; // edi
  int v34; // eax
  const _C_CONV *v35; // r15
  const _C_CONV *v36; // r12
  int v37; // er13
  int v38; // er15
  int v39; // eax
  const _C_CONV *v40; // r15
  const _C_CONV *v41; // r12
  int v42; // er13
  int v43; // er15
  $90572C87075547CF5C208C90D0DCC171 icon[2]; // [rsp+38h] [rbp-29h] BYREF
  int *v45; // [rsp+40h] [rbp-21h]
  DrawHelper::DrawParams params; // [rsp+48h] [rbp-19h] BYREF
  int v47; // [rsp+D0h] [rbp+6Fh] BYREF
  int v48; // [rsp+D8h] [rbp+77h] BYREF
  int imageIndex; // [rsp+E0h] [rbp+7Fh]

  m_pResources = this->m_pResources;
  *(_QWORD *)&params.renderMode = 0i64;
  params.bMirror = 0;
  v8 = m_pResources->__vftable;
  params.alpha = alpha;
  params.scaleW = 1.0;
  params.scaleH = 1.0;
  params.colorARGB = -1;
  if ( v8->isError(m_pResources) )
    imageID = -1;
  else
    imageID = m_pResources->m_pCommons[2].imageID;
  v47 = *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2507552i64);
  v48 = *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2507556i64);
  *(_QWORD *)icon = &v47;
  v45 = &v48;
  lambda_12f345e3d0cc5ae5ea4cba773cc39826_::operator()_enum__anonymous_namespace_::_unnamed_enum_HUD_STR_PLAYER_1___(($90572C87075547CF5C208C90D0DCC171)icon);
  v10 = lambda_12f345e3d0cc5ae5ea4cba773cc39826_::operator()_enum__anonymous_namespace_::_unnamed_enum_HUD_STR_PLAYER_1___(($90572C87075547CF5C208C90D0DCC171)icon);
  v11 = this->m_pResources;
  imageIndex = v10;
  rect = BattleHudResources::getImageRect(v11, (BattleHudResources::EImage::Type)2, v12);
  ImageRect = BattleHudResources::getImageRect(this->m_pResources, (BattleHudResources::EImage::Type)2, 82);
  v15 = (int)(float)((float)((float)(rect->h - ImageRect->h) * 0.5) - 2.0);
  if ( !this->isError(this) )
    DrawHelperVertexBuffer::drawConv(this, imageID, renderX, renderY - v15, rect, &params, icon[0]);
  v16 = renderX + rect->w;
  if ( !this->isError(this) )
    DrawHelperVertexBuffer::drawConv(this, imageID, v16, renderY, ImageRect, &params, icon[0]);
  v17 = renderY + 37;
  v18 = lambda_12f345e3d0cc5ae5ea4cba773cc39826_::operator()_enum__anonymous_namespace_::_unnamed_enum_HUD_STR_PLAYER_1___(($90572C87075547CF5C208C90D0DCC171)icon);
  v19 = BattleHudResources::getImageRect(this->m_pResources, (BattleHudResources::EImage::Type)2, v18);
  v20 = BattleHudResources::getImageRect(this->m_pResources, (BattleHudResources::EImage::Type)2, 83);
  v21 = (int)(float)((float)((float)(v19->h - v20->h) * 0.5) - 2.0);
  if ( !this->isError(this) )
    DrawHelperVertexBuffer::drawConv(this, imageID, renderX, v17 - v21, v19, &params, icon[0]);
  v22 = renderX + v19->w;
  if ( !this->isError(this) )
    DrawHelperVertexBuffer::drawConv(this, imageID, v22, v17, v20, &params, icon[0]);
  v23 = v17 + 37;
  v24 = BattleHudResources::getImageRect(this->m_pResources, (BattleHudResources::EImage::Type)2, imageIndex);
  v25 = BattleHudResources::getImageRect(this->m_pResources, (BattleHudResources::EImage::Type)2, 78);
  v26 = (int)(float)((float)((float)(v24->h - v25->h) * 0.5) - 2.0);
  if ( !this->isError(this) )
    DrawHelperVertexBuffer::drawConv(this, imageID, renderX, v23 - v26, v24, &params, icon[0]);
  v27 = renderX + v24->w;
  if ( !this->isError(this) )
    DrawHelperVertexBuffer::drawConv(this, imageID, v27, v23, v25, &params, icon[0]);
  v28 = lambda_12f345e3d0cc5ae5ea4cba773cc39826_::operator()_enum__anonymous_namespace_::_unnamed_enum_HUD_STR_PLAYER_1___(($90572C87075547CF5C208C90D0DCC171)icon);
  v29 = BattleHudResources::getImageRect(this->m_pResources, (BattleHudResources::EImage::Type)2, v28);
  v30 = BattleHudResources::getImageRect(this->m_pResources, (BattleHudResources::EImage::Type)2, 79);
  v31 = (int)(float)((float)((float)(v29->h - v30->h) * 0.5) - 2.0);
  if ( !this->isError(this) )
    DrawHelperVertexBuffer::drawConv(this, imageID, renderX, v23 + 37 - v31, v29, &params, icon[0]);
  v32 = renderX + v29->w;
  if ( !this->isError(this) )
    DrawHelperVertexBuffer::drawConv(this, imageID, v32, v23 + 37, v30, &params, icon[0]);
  v33 = v23 + 74;
  v34 = lambda_12f345e3d0cc5ae5ea4cba773cc39826_::operator()_enum__anonymous_namespace_::_unnamed_enum_HUD_STR_PLAYER_1___(($90572C87075547CF5C208C90D0DCC171)icon);
  v35 = BattleHudResources::getImageRect(this->m_pResources, (BattleHudResources::EImage::Type)2, v34);
  v36 = BattleHudResources::getImageRect(this->m_pResources, (BattleHudResources::EImage::Type)2, 80);
  v37 = (int)(float)((float)((float)(v35->h - v36->h) * 0.5) - 2.0);
  if ( !this->isError(this) )
    DrawHelperVertexBuffer::drawConv(this, imageID, renderX, v33 - v37, v35, &params, icon[0]);
  v38 = renderX + v35->w;
  if ( !this->isError(this) )
    DrawHelperVertexBuffer::drawConv(this, imageID, v38, v33, v36, &params, icon[0]);
  v39 = lambda_12f345e3d0cc5ae5ea4cba773cc39826_::operator()_enum__anonymous_namespace_::_unnamed_enum_HUD_STR_PLAYER_1___(($90572C87075547CF5C208C90D0DCC171)icon);
  v40 = BattleHudResources::getImageRect(this->m_pResources, (BattleHudResources::EImage::Type)2, v39);
  v41 = BattleHudResources::getImageRect(this->m_pResources, (BattleHudResources::EImage::Type)2, 81);
  v42 = (int)(float)((float)((float)(v40->h - v41->h) * 0.5) - 2.0);
  if ( !this->isError(this) )
    DrawHelperVertexBuffer::drawConv(this, imageID, renderX, v33 + 37 - v42, v40, &params, icon[0]);
  v43 = renderX + v40->w;
  if ( !this->isError(this) )
    DrawHelperVertexBuffer::drawConv(this, imageID, v43, v33 + 37, v41, &params, icon[0]);
}

void __fastcall BattleHudRenderer::renderReplayOperateIcon(
        BattleHudRenderer *this,
        __int64 renderX,
        __int64 renderY,
        BattleHudCommonNumbers::EReplayIcon::Type type)
{
  __int32 v5; // er9
  const _C_CONV *rect; // rbx
  BattleHudResources *m_pResources; // rsi
  int imageID; // ebp
  BattleHudResources *v9; // rsi
  BattleHudRenderer_vtbl *v10; // rax
  DrawHelper::DrawParams params; // [rsp+30h] [rbp-28h] BYREF

  if ( type )
  {
    v5 = type - 1;
    if ( v5 )
    {
      if ( v5 != 1 )
        return;
      rect = &ImageRects_Commons[302];
    }
    else
    {
      rect = &ImageRects_Commons[301];
    }
  }
  else
  {
    rect = &ImageRects_Commons[300];
  }
  m_pResources = this->m_pResources;
  if ( ((unsigned __int64 (__fastcall *)(BattleHudResources *, __int64, __int64))m_pResources->isError)(
         m_pResources,
         renderX,
         renderY) )
  {
    imageID = -1;
  }
  else
  {
    imageID = m_pResources->m_pCommons->imageID;
  }
  v9 = this->m_pResources;
  if ( v9->isError(v9) )
    rect = &v9->m_errorWorkaround.rect;
  params.scaleW = 1.0;
  *(_QWORD *)&params.renderMode = 0i64;
  params.bMirror = 0;
  v10 = this->__vftable;
  params.scaleH = 1.0;
  params.alpha = 1.0;
  params.colorARGB = -1;
  if ( !v10->isError(this) )
    DrawHelperVertexBuffer::drawConv(this, imageID, 960, 1023, rect, &params, params.renderMode);
}

void __fastcall BattleHudRenderer::renderReversalReplay(
        BattleHudRenderer *this,
        const BattleHudRenderer::RenderParams *params,
        int imageType)
{
  BattleHudResources *m_pResources; // rdi
  int imageID; // edi
  const _C_CONV *ImageRect; // rax
  const _C_CONV *rect; // rsi
  int w; // eax
  int v10; // ebp
  BattleHudRenderer_vtbl *v11; // rax
  DrawHelper::DrawParams v12; // [rsp+30h] [rbp-28h] BYREF

  m_pResources = this->m_pResources;
  if ( ((unsigned __int64 (__fastcall *)(BattleHudResources *, const BattleHudRenderer::RenderParams *))m_pResources->isError)(
         m_pResources,
         params) )
  {
    imageID = -1;
  }
  else
  {
    imageID = m_pResources->m_pCommons[2].imageID;
  }
  ImageRect = BattleHudResources::getImageRect(this->m_pResources, (BattleHudResources::EImage::Type)2, imageType);
  rect = ImageRect;
  if ( ImageRect )
  {
    w = ImageRect->w;
    v12.scaleW = 1.0;
    v10 = 960 - w / 2;
    v12.scaleH = 1.0;
    v12.alpha = 1.0;
    *(_QWORD *)&v12.renderMode = 0i64;
    v12.bMirror = 0;
    v11 = this->__vftable;
    v12.colorARGB = -1;
    if ( !v11->isError(this) )
      DrawHelperVertexBuffer::drawConv(this, imageID, v10, 176, rect, &v12, v12.renderMode);
  }
}

void __fastcall BattleHudRenderer::renderSEShortcutKey(
        BattleHudRenderer *this,
        __int64 rx,
        __int64 ry,
        BattleHudCommonNumbers::ESESelectorPage::Type page,
        BattleHudCommonNumbers::ESESelectorSelectKey::Type selectKey,
        float alpha)
{
  _DWORD *v6; // rdi
  int v9; // er12
  int v10; // esi
  int v11; // ebp
  BattleHudResources *m_pResources; // r14
  unsigned int v13; // er15
  unsigned int imageID; // er14
  int v15; // ebp
  BattleHudResources *v16; // r14
  unsigned int v17; // er14
  int v18; // ebp
  BattleHudResources *v19; // r14
  int v20; // er14
  const _C_CONV *ImageRect; // rax
  int v22; // esi
  BattleHudResources *v23; // r14
  int v24; // ebp
  const _C_CONV *v25; // rax
  int v26; // esi
  int v27; // er14
  int v28; // ebp
  int v29; // er12
  __int32 v30; // er13
  __int32 v31; // er13
  __int32 v32; // er13
  bool v33; // zf
  int v34; // eax
  BattleHudResources *v35; // rdi
  int v36; // edi
  const _C_CONV *v37; // rax
  BattleHudResources *v38; // rdi
  unsigned int v39; // edi
  BattleHudResources *v40; // rdi
  int v41; // edi
  const _C_CONV *v42; // rax
  BattleHudResources *v43; // rdi
  BOOL v44; // [rsp+30h] [rbp-58h]
  BOOL v45; // [rsp+30h] [rbp-58h]
  BOOL v46; // [rsp+30h] [rbp-58h]
  int v47; // [rsp+40h] [rbp-48h] BYREF
  int v48; // [rsp+44h] [rbp-44h]
  int v49; // [rsp+48h] [rbp-40h]
  int v50; // [rsp+4Ch] [rbp-3Ch]
  float v51; // [rsp+50h] [rbp-38h]
  char v52; // [rsp+54h] [rbp-34h]
  int v53; // [rsp+58h] [rbp-30h]

  v6 = *(_DWORD **)&AppMain::pApp;
  v51 = alpha;
  v47 = 0;
  v9 = *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2507552i64);
  v10 = *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2507556i64);
  v49 = 1065353216;
  v50 = 1065353216;
  v52 = 0;
  v53 = -1;
  v48 = 2;
  if ( v9 == 3 )
  {
    v11 = 144;
  }
  else if ( (unsigned int)(v10 - 1) <= 1 )
  {
    v11 = 141;
  }
  else if ( v10 == 5 )
  {
    v11 = Framework::GLManager::getGenericMapping(Framework::GLManager::glm, AgGamepadButton_A) + 112;
  }
  else
  {
    v11 = 72;
  }
  m_pResources = this->m_pResources;
  v13 = -1;
  if ( ((unsigned __int64 (__fastcall *)(BattleHudResources *, __int64, __int64))m_pResources->isError)(
         m_pResources,
         rx,
         ry) )
  {
    imageID = -1;
  }
  else
  {
    imageID = m_pResources->m_pCommons[2].imageID;
  }
  BattleHudResources::getImageRect(this->m_pResources, (BattleHudResources::EImage::Type)2, v11);
  ((void (__fastcall *)(BattleHudRenderer *, _QWORD, __int64))this->draw)(this, imageID, 960i64);
  v48 = 0;
  if ( v9 == 3 )
  {
    v15 = 145;
  }
  else if ( (unsigned int)(v10 - 1) <= 1 )
  {
    v15 = 138;
  }
  else if ( v10 == 5 )
  {
    v15 = Framework::GLManager::getGenericMapping(Framework::GLManager::glm, AgGamepadButton_X) + 112;
  }
  else
  {
    v15 = 69;
  }
  v16 = this->m_pResources;
  if ( v16->isError(v16) )
    v17 = -1;
  else
    v17 = v16->m_pCommons[2].imageID;
  BattleHudResources::getImageRect(this->m_pResources, (BattleHudResources::EImage::Type)2, v15);
  ((void (__fastcall *)(BattleHudRenderer *, _QWORD, __int64))this->draw)(this, v17, 910i64);
  v48 = 2;
  if ( v9 == 3 )
  {
    v18 = 142;
  }
  else if ( (unsigned int)(v10 - 1) <= 1 )
  {
    v18 = 139;
  }
  else if ( v10 == 5 )
  {
    v18 = Framework::GLManager::getGenericMapping(Framework::GLManager::glm, AgGamepadButton_Y) + 112;
  }
  else
  {
    v18 = 70;
  }
  v19 = this->m_pResources;
  if ( v19->isError(v19) )
    v20 = -1;
  else
    v20 = v19->m_pCommons[2].imageID;
  ImageRect = BattleHudResources::getImageRect(this->m_pResources, (BattleHudResources::EImage::Type)2, v18);
  this->draw(this, v20, 960, 776, ImageRect, (const DrawHelper::DrawParams *)&v47, 0);
  v48 = 1;
  if ( v9 == 3 )
  {
    v22 = 143;
  }
  else if ( (unsigned int)(v10 - 1) <= 1 )
  {
    v22 = 140;
  }
  else if ( v10 == 5 )
  {
    v22 = Framework::GLManager::getGenericMapping(Framework::GLManager::glm, AgGamepadButton_B) + 112;
  }
  else
  {
    v22 = 71;
  }
  v23 = this->m_pResources;
  if ( v23->isError(v23) )
    v24 = -1;
  else
    v24 = v23->m_pCommons[2].imageID;
  v25 = BattleHudResources::getImageRect(this->m_pResources, (BattleHudResources::EImage::Type)2, v22);
  LOBYTE(v44) = 0;
  this->draw(this, v24, 1010, 812, v25, (const DrawHelper::DrawParams *)&v47, v44);
  v26 = -1;
  v27 = -1;
  v28 = -1;
  v29 = -1;
  v30 = page - 1;
  if ( v30 )
  {
    v31 = v30 - 1;
    if ( v31 )
    {
      v32 = v31 - 1;
      if ( v32 )
      {
        if ( v32 != 1 )
          goto LABEL_75;
        v29 = 52;
        v26 = 49;
        if ( v6[548100] )
          v26 = 33;
        v27 = 50;
        v28 = 51;
        if ( v6[548099] )
          v27 = 34;
        if ( v6[548101] )
          v28 = 35;
        v33 = v6[548102] == 0;
        v34 = 36;
      }
      else
      {
        v26 = 45;
        v27 = 46;
        if ( v6[548094] )
          v26 = 29;
        v28 = 47;
        if ( v6[548093] )
          v27 = 30;
        if ( v6[548091] )
          v28 = 31;
        v33 = v6[548092] == 0;
        v34 = 32;
        v29 = 48;
      }
    }
    else
    {
      v26 = 41;
      v27 = 42;
      if ( v6[548095] )
        v26 = 25;
      v28 = 43;
      if ( v6[548097] )
        v27 = 26;
      if ( v6[548096] )
        v28 = 27;
      v33 = v6[548098] == 0;
      v34 = 28;
      v29 = 44;
    }
  }
  else
  {
    v26 = 39;
    v27 = 37;
    if ( v6[548088] )
      v26 = 23;
    v28 = 40;
    v29 = 38;
    if ( v6[548087] )
      v27 = 21;
    if ( v6[548090] )
      v28 = 24;
    v33 = v6[548089] == 0;
    v34 = 22;
  }
  if ( !v33 )
    v29 = v34;
LABEL_75:
  v35 = this->m_pResources;
  v48 = 2;
  if ( v35->isError(v35) )
    v36 = -1;
  else
    v36 = v35->m_pCommons[2].imageID;
  v37 = BattleHudResources::getImageRect(this->m_pResources, (BattleHudResources::EImage::Type)2, v26);
  LOBYTE(v45) = 0;
  this->draw(this, v36, 960, 763, v37, (const DrawHelper::DrawParams *)&v47, v45);
  v38 = this->m_pResources;
  v48 = 1;
  if ( v38->isError(v38) )
    v39 = -1;
  else
    v39 = v38->m_pCommons[2].imageID;
  BattleHudResources::getImageRect(this->m_pResources, (BattleHudResources::EImage::Type)2, v28);
  ((void (__fastcall *)(BattleHudRenderer *, _QWORD, __int64))this->draw)(this, v39, 908i64);
  v40 = this->m_pResources;
  v48 = 0;
  if ( v40->isError(v40) )
    v41 = -1;
  else
    v41 = v40->m_pCommons[2].imageID;
  v42 = BattleHudResources::getImageRect(this->m_pResources, (BattleHudResources::EImage::Type)2, v29);
  LOBYTE(v46) = 0;
  this->draw(this, v41, 1012, 829, v42, (const DrawHelper::DrawParams *)&v47, v46);
  v43 = this->m_pResources;
  v48 = 2;
  if ( !v43->isError(v43) )
    v13 = v43->m_pCommons[2].imageID;
  BattleHudResources::getImageRect(this->m_pResources, (BattleHudResources::EImage::Type)2, v27);
  ((void (__fastcall *)(BattleHudRenderer *, _QWORD, __int64))this->draw)(this, v13, 960i64);
}

void __fastcall BattleHudRenderer::renderSakeCount(
        BattleHudRenderer *this,
        const BattleHudGauge *gauge,
        const BattleHudRenderer::RenderParams *params)
{
  BattleHudResources *m_pResources; // rdi
  int imageID; // edi
  int m_drinkCount; // er15
  int v9; // er14
  int v10; // er15
  int v11; // eax
  bool v12; // zf
  BattleHudResources *v13; // rsi
  float v14; // xmm6_4
  float v15; // xmm7_4
  char v16; // al
  const _C_CONV *p_rect; // rcx
  BattleHudResources *v18; // rsi
  float v19; // xmm6_4
  float v20; // xmm7_4
  char v21; // al
  const _C_CONV *v22; // rcx
  int v23; // ebp
  BattleHudResources *v24; // rsi
  float v25; // xmm6_4
  const _C_CONV *v26; // rcx
  BattleHudResources *v27; // rsi
  float v28; // xmm6_4
  const _C_CONV *v29; // rcx
  BOOL v30; // [rsp+30h] [rbp-68h]
  BOOL v31; // [rsp+30h] [rbp-68h]
  BOOL v32; // [rsp+30h] [rbp-68h]
  __int64 v33; // [rsp+40h] [rbp-58h] BYREF
  int v34; // [rsp+48h] [rbp-50h]
  int v35; // [rsp+4Ch] [rbp-4Ch]
  int v36; // [rsp+50h] [rbp-48h]
  char v37; // [rsp+54h] [rbp-44h]
  int v38; // [rsp+58h] [rbp-40h]

  m_pResources = this->m_pResources;
  if ( m_pResources->isError(m_pResources) )
    imageID = -1;
  else
    imageID = m_pResources->m_pCommons->imageID;
  m_drinkCount = gauge->m_drinkCount;
  v33 = 0i64;
  v37 = 0;
  v34 = 1065353216;
  v35 = 1065353216;
  v36 = 1065353216;
  v9 = m_drinkCount / 10;
  v38 = -1;
  v10 = m_drinkCount % 10;
  v11 = 754;
  v12 = gauge->m_playerID == PLAYER_ID_2P;
  v13 = this->m_pResources;
  if ( v12 )
    v11 = 1074;
  v14 = (float)v11;
  v15 = (float)(params->positionPlusY + 1004);
  v16 = v13->isError(this->m_pResources);
  p_rect = &v13->m_errorWorkaround.rect;
  if ( !v16 )
    p_rect = &ImageRects_Commons[268];
  this->draw(this, imageID, (int)v14, (int)v15, p_rect, (const DrawHelper::DrawParams *)&v33, 0);
  v18 = this->m_pResources;
  v19 = v14 + 40.0;
  v20 = (float)(params->positionPlusY + 1025);
  v21 = v18->isError(v18);
  v22 = &v18->m_errorWorkaround.rect;
  if ( !v21 )
    v22 = &ImageRects_Commons[279];
  LOBYTE(v30) = 0;
  v23 = (int)v20;
  this->draw(this, imageID, (int)v19, (int)v20, v22, (const DrawHelper::DrawParams *)&v33, v30);
  v24 = this->m_pResources;
  v25 = v19 + 36.0;
  if ( v24->isError(v24) )
    v26 = &v24->m_errorWorkaround.rect;
  else
    v26 = &ImageRects_Commons[v9 + 269];
  LOBYTE(v31) = 0;
  this->draw(this, imageID, (int)v25, v23, v26, (const DrawHelper::DrawParams *)&v33, v31);
  v27 = this->m_pResources;
  v28 = v25 + 32.0;
  if ( v27->isError(v27) )
    v29 = &v27->m_errorWorkaround.rect;
  else
    v29 = &ImageRects_Commons[v10 + 269];
  LOBYTE(v32) = 0;
  this->draw(this, imageID, (int)v28, v23, v29, (const DrawHelper::DrawParams *)&v33, v32);
}

void __fastcall BattleHudRenderer::renderSetCount(
        BattleHudRenderer *this,
        const BattleHudGauge *gauge,
        const BattleHudRenderer::RenderParams *params)
{
  int v6; // ebx
  BattleHudResources *m_pResources; // r14
  BattleHudResources_vtbl *v8; // rax
  int imageID; // er15
  float v10; // xmm6_4
  float v11; // xmm7_4
  float v12; // xmm8_4
  BattleHudResources *v13; // r12
  __int128 v14; // xmm9
  __int64 v15; // xmm10_8
  const _C_CONV *p_rect; // r12
  int i; // er14
  BattleHudResources *v18; // r14
  const _C_CONV *v19; // r14
  BOOL v20; // [rsp+38h] [rbp-69h]
  __int128 v21; // [rsp+48h] [rbp-59h] BYREF
  __int64 v22; // [rsp+58h] [rbp-49h]
  unsigned int v23; // [rsp+60h] [rbp-41h]
  __int128 v24; // [rsp+68h] [rbp-39h]
  __int64 v25; // [rsp+78h] [rbp-29h]
  unsigned int gaugeRenderColor; // [rsp+110h] [rbp+6Fh]

  if ( gauge->m_setCount > 0 )
  {
    v6 = 0;
    m_pResources = this->m_pResources;
    *(_QWORD *)&v21 = 0i64;
    *((_QWORD *)&v21 + 1) = 0x3F8000003F800000i64;
    LODWORD(v22) = 1065353216;
    BYTE4(v22) = 0;
    v23 = -1;
    v8 = m_pResources->__vftable;
    *(_QWORD *)&v24 = 0i64;
    *((_QWORD *)&v24 + 1) = 0x3F8000003F800000i64;
    LODWORD(v25) = 1065353216;
    BYTE4(v25) = 0;
    if ( v8->isError(m_pResources) )
      imageID = -1;
    else
      imageID = m_pResources->m_pCommons->imageID;
    v10 = FLOAT_840_0;
    v11 = FLOAT_N45_0;
    v12 = (float)(params->positionPlusY + 143);
    gaugeRenderColor = params->gaugeRenderColor;
    if ( gauge->m_playerID == PLAYER_ID_2P )
    {
      v10 = FLOAT_1080_0;
      v11 = FLOAT_45_0;
    }
    v13 = this->m_pResources;
    v14 = v24;
    v23 = params->gaugeRenderColor;
    v15 = v25;
    v21 = v24;
    v22 = v25;
    if ( v13->isError(v13) )
      p_rect = &v13->m_errorWorkaround.rect;
    else
      p_rect = &ImageRects_Commons[226];
    for ( i = 0; i < gauge->m_setCount; ++i )
    {
      LOBYTE(v20) = 0;
      this->draw(
        this,
        imageID,
        (int)(float)((float)((float)i * v11) + v10),
        (int)v12,
        p_rect,
        (const DrawHelper::DrawParams *)&v21,
        v20);
    }
    v18 = this->m_pResources;
    v21 = v14;
    v23 = gaugeRenderColor;
    v22 = v15;
    LODWORD(v21) = 1;
    if ( v18->isError(v18) )
      v19 = &v18->m_errorWorkaround.rect;
    else
      v19 = &ImageRects_Commons[227];
    if ( gauge->m_setWinCount > 0 )
    {
      do
      {
        LOBYTE(v20) = 0;
        this->draw(
          this,
          imageID,
          (int)(float)((float)((float)v6++ * v11) + v10),
          (int)v12,
          v19,
          (const DrawHelper::DrawParams *)&v21,
          v20);
      }
      while ( v6 < gauge->m_setWinCount );
    }
  }
}

void __fastcall BattleHudRenderer::renderStageNo(
        BattleHudRenderer *this,
        int stageNo,
        const BattleHudRenderer::RenderParams *params)
{
  BattleHudResources *m_pResources; // rdi
  int imageID; // esi
  BattleHudResources *v8; // rdi
  float v9; // xmm6_4
  const _C_CONV *p_rect; // rdi
  BattleHudResources *v11; // rdi
  float v12; // xmm6_4
  const _C_CONV *v13; // rcx
  int v14; // er14
  int v15; // ebp
  bool v16; // zf
  const _C_CONV *v17; // rax
  BattleHudResources *v18; // r15
  int v19; // er12
  const _C_CONV *v20; // rcx
  BattleHudResources *v21; // r14
  const _C_CONV *v22; // rcx
  BOOL v23; // [rsp+30h] [rbp-58h]
  BOOL v24; // [rsp+30h] [rbp-58h]
  __int64 v25; // [rsp+40h] [rbp-48h] BYREF
  int v26; // [rsp+48h] [rbp-40h]
  int v27; // [rsp+4Ch] [rbp-3Ch]
  int v28; // [rsp+50h] [rbp-38h]
  char v29; // [rsp+54h] [rbp-34h]
  int v30; // [rsp+58h] [rbp-30h]

  m_pResources = this->m_pResources;
  v25 = 0i64;
  v26 = 1065353216;
  v27 = 1065353216;
  v28 = 1065353216;
  v29 = 0;
  v30 = -1;
  if ( m_pResources->isError(m_pResources) )
    imageID = -1;
  else
    imageID = m_pResources->m_pCommons->imageID;
  v8 = this->m_pResources;
  v9 = (float)(params->positionPlusY + 145);
  if ( v8->isError(v8) )
    p_rect = &v8->m_errorWorkaround.rect;
  else
    p_rect = &ImageRects_Commons[9];
  this->draw(this, imageID, 960, (int)v9, p_rect, (const DrawHelper::DrawParams *)&v25, 0);
  v11 = this->m_pResources;
  v12 = (float)(params->positionPlusY + 162);
  if ( stageNo >= 10 )
  {
    v14 = stageNo / 10;
    v15 = stageNo % 10;
    v16 = v11->isError(v11) == 0;
    v17 = &v11->m_errorWorkaround.rect;
    if ( v16 )
      v17 = &ImageRects_Commons[10];
    v18 = this->m_pResources;
    v19 = v17->w / 2;
    if ( v18->isError(v18) )
      v20 = &v18->m_errorWorkaround.rect;
    else
      v20 = &ImageRects_Commons[v14 + 10];
    LOBYTE(v23) = 0;
    this->draw(
      this,
      imageID,
      (int)(float)(960.0 - (float)v19),
      (int)v12,
      v20,
      (const DrawHelper::DrawParams *)&v25,
      v23);
    v21 = this->m_pResources;
    if ( v21->isError(v21) )
      v22 = &v21->m_errorWorkaround.rect;
    else
      v22 = &ImageRects_Commons[v15 + 10];
    LOBYTE(v24) = 0;
    this->draw(
      this,
      imageID,
      (int)(float)((float)v19 + 960.0),
      (int)v12,
      v22,
      (const DrawHelper::DrawParams *)&v25,
      v24);
  }
  else
  {
    if ( v11->isError(v11) )
      v13 = &v11->m_errorWorkaround.rect;
    else
      v13 = &ImageRects_Commons[stageNo + 10];
    LOBYTE(v23) = 0;
    this->draw(this, imageID, 960, (int)v12, v13, (const DrawHelper::DrawParams *)&v25, v23);
  }
}

void __fastcall BattleHudRenderer::renderTimer(
        BattleHudRenderer *this,
        int time,
        float timerAnimationFrame,
        float animationFrame,
        const BattleHudRenderer::RenderParams *params)
{
  BattleHudResources *m_pResources; // rbx
  unsigned int imageID; // er12
  const BattleHudRenderer::RenderParams *v9; // r13
  Image *Myval2; // rbx
  int positionPlusY; // ecx
  int v12; // er15
  float v13; // xmm8_4
  BattleHudResources *v14; // rsi
  const _C_CONV *p_rect; // rsi
  BattleHudResources *v16; // r14
  const _C_CONV *v17; // r15
  BattleHudResources *v18; // r14
  float v19; // xmm6_4
  extension::AsyncStatus::Step v20; // edx
  extension::AsyncContent<Image> *m_ptr; // r14
  BattleHudResources *v22; // rsi
  __int128 v23; // xmm6
  unsigned __int64 v24; // xmm7_8
  const _C_CONV *v25; // rbx
  const _C_CONV *v26; // rsi
  BattleHudResources *v27; // rsi
  int v28; // er13
  int v29; // eax
  int v30; // er13
  bool v31; // cc
  BattleHudResources *v32; // rsi
  float v33; // xmm7_4
  _C_CONV *v34; // rax
  BattleHudResources *v35; // rsi
  const _C_CONV *v36; // rsi
  BattleHudResources *v37; // r15
  extension::AsyncStatus::Step v38; // edx
  extension::AsyncContent<Image> *v39; // r15
  Image *v40; // rcx
  BattleHudResources *v41; // rsi
  const _C_CONV *v42; // rsi
  BattleHudResources *v43; // r15
  extension::AsyncStatus::Step v44; // edx
  extension::AsyncContent<Image> *v45; // r15
  BattleHudResources *v46; // rbx
  unsigned int v47; // xmm10_4^4
  unsigned __int64 v48; // xmm11_8
  char v49; // al
  int v50; // er15
  const _C_CONV *v51; // rcx
  unsigned int v52; // esi
  BattleHudResources *v53; // rbx
  const _C_CONV *v54; // rcx
  int v55; // ebx
  float v56; // xmm7_4
  float v57; // xmm7_4
  float v58; // xmm1_4
  float v59; // xmm1_4
  BattleHudResources *v60; // rcx
  const _C_CONV *v61; // rax
  float v62; // xmm7_4
  BattleHudResources *v63; // rcx
  const _C_CONV *ImageRect; // rax
  signed int pConvMask; // [rsp+28h] [rbp-C1h]
  BOOL masky; // [rsp+38h] [rbp-B1h]
  BOOL maskya; // [rsp+38h] [rbp-B1h]
  BOOL maskyb; // [rsp+38h] [rbp-B1h]
  BOOL maskyc; // [rsp+38h] [rbp-B1h]
  BOOL maskyd; // [rsp+38h] [rbp-B1h]
  Tween::EasingType v71; // [rsp+40h] [rbp-A9h]
  _C_CONV pConv_8; // [rsp+58h] [rbp-91h] BYREF
  __int128 v73; // [rsp+68h] [rbp-81h] BYREF
  unsigned __int64 v74; // [rsp+78h] [rbp-71h]
  int v75; // [rsp+80h] [rbp-69h]
  __int128 v76; // [rsp+88h] [rbp-61h]
  unsigned __int64 v77; // [rsp+98h] [rbp-51h]
  float outParam; // [rsp+148h] [rbp+5Fh] BYREF
  int v79; // [rsp+150h] [rbp+67h]
  int v80; // [rsp+160h] [rbp+77h]

  v79 = time;
  m_pResources = this->m_pResources;
  if ( m_pResources->isError(m_pResources) )
    imageID = -1;
  else
    imageID = m_pResources->m_pCommons->imageID;
  v9 = params;
  Myval2 = 0i64;
  *(_QWORD *)&v76 = 0i64;
  *((_QWORD *)&v76 + 1) = 0x3F8000003F800000i64;
  LODWORD(v77) = 1065353216;
  BYTE4(v77) = 0;
  *(_QWORD *)&v73 = 0i64;
  *((_QWORD *)&v73 + 1) = 0x3F8000003F800000i64;
  LODWORD(v74) = 1065353216;
  BYTE4(v74) = 0;
  v75 = -1;
  positionPlusY = params->positionPlusY;
  v12 = 234 - (int)(float)((float)((int)animationFrame % 56) * -0.5);
  v13 = (float)(positionPlusY + 91);
  if ( time < 0 )
  {
    v14 = this->m_pResources;
    if ( v14->isError(v14) )
      p_rect = &v14->m_errorWorkaround.rect;
    else
      p_rect = &ImageRects_Commons[v12];
    v16 = this->m_pResources;
    v17 = &v16->m_errorWorkaround.rect;
    if ( !v16->isError(v16) )
      v17 = &ImageRects_Commons[47];
    v18 = this->m_pResources;
    v19 = (float)(v9->positionPlusY + 121);
    if ( !v18->isError(v18) )
    {
      m_ptr = v18->m_pCommons->image.m_body.m_ptr->m_content.m_ptr;
      if ( m_ptr )
      {
        if ( !m_ptr->m_isDataReleased )
        {
          if ( (m_ptr->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
            extension::AsyncStatus::waitFor(&m_ptr->m_status, v20);
          Myval2 = m_ptr->m_data._Mypair._Myval2;
        }
      }
    }
    anonymous_namespace_::drawConvMask(Myval2, p_rect, 960.0, v19, v17, 960.0, v13);
    v22 = this->m_pResources;
    v23 = v76;
    v75 = -1;
    v24 = v77;
    v73 = v76;
    v74 = v77;
    v25 = &ImageRects_Commons[46];
    if ( v22->isError(v22) )
      v26 = &v22->m_errorWorkaround.rect;
    else
      v26 = &ImageRects_Commons[46];
    LOBYTE(masky) = 0;
    this->draw(this, imageID, 960, (int)v13, v26, (const DrawHelper::DrawParams *)&v73, masky);
    v27 = this->m_pResources;
    v73 = v23;
    v75 = -1;
    v74 = v24;
    LODWORD(v73) = 1;
    if ( v27->isError(v27) )
      v25 = &v27->m_errorWorkaround.rect;
    LOBYTE(maskya) = 0;
    this->draw(this, imageID, 960, (int)v13, v25, (const DrawHelper::DrawParams *)&v73, maskya);
    return;
  }
  v28 = time;
  if ( time >= 99 )
    v28 = 99;
  v80 = 2 * (v28 / 10);
  v29 = 61;
  v30 = 2 * (v28 % 10);
  v31 = time <= 10;
  v32 = this->m_pResources;
  if ( !v31 )
    v29 = 121;
  v33 = (float)(positionPlusY + v29);
  if ( v32->isError(this->m_pResources) )
    v34 = &v32->m_errorWorkaround.rect;
  else
    v34 = (_C_CONV *)&ImageRects_Commons[v12];
  v35 = this->m_pResources;
  pConv_8 = *v34;
  pConv_8.w = 100;
  pConv_8.cx = 50;
  if ( v35->isError(v35) )
    v36 = &v35->m_errorWorkaround.rect;
  else
    v36 = &ImageRects_Commons[v80 + 27];
  v37 = this->m_pResources;
  if ( v37->isError(v37)
    || (v39 = v37->m_pCommons->image.m_body.m_ptr->m_content.m_ptr) == 0i64
    || v39->m_isDataReleased )
  {
    v40 = 0i64;
  }
  else
  {
    if ( (v39->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
      extension::AsyncStatus::waitFor(&v39->m_status, v38);
    v40 = v39->m_data._Mypair._Myval2;
  }
  anonymous_namespace_::drawConvMask(v40, &pConv_8, 916.0, v33, v36, 916.0, v13);
  v41 = this->m_pResources;
  pConv_8.sx += 100;
  if ( v41->isError(v41) )
    v42 = &v41->m_errorWorkaround.rect;
  else
    v42 = &ImageRects_Commons[v30 + 27];
  v43 = this->m_pResources;
  if ( !v43->isError(v43) )
  {
    v45 = v43->m_pCommons->image.m_body.m_ptr->m_content.m_ptr;
    if ( v45 )
    {
      if ( !v45->m_isDataReleased )
      {
        if ( (v45->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
          extension::AsyncStatus::waitFor(&v45->m_status, v44);
        Myval2 = v45->m_data._Mypair._Myval2;
      }
    }
  }
  anonymous_namespace_::drawConvMask(Myval2, &pConv_8, 1004.0, v33, v42, 1004.0, v13);
  v46 = this->m_pResources;
  v47 = DWORD1(v76);
  v75 = -1;
  v48 = v77;
  v73 = v76;
  v74 = v77;
  v49 = v46->isError(v46);
  v50 = v80;
  if ( v49 )
    v51 = &v46->m_errorWorkaround.rect;
  else
    v51 = &ImageRects_Commons[v80 + 26];
  LOBYTE(maskyb) = 0;
  v52 = (int)v13;
  this->draw(this, imageID, 916, (int)v13, v51, (const DrawHelper::DrawParams *)&v73, maskyb);
  v53 = this->m_pResources;
  if ( v53->isError(v53) )
    LODWORD(v54) = (_DWORD)v53 + 48;
  else
    v54 = &ImageRects_Commons[v30 + 26];
  pConvMask = (int)v54;
  ((void (__fastcall *)(BattleHudRenderer *, _QWORD, __int64, _QWORD))this->draw)(this, imageID, 1004i64, v52);
  v55 = v79;
  if ( v79 <= 10 )
  {
    if ( timerAnimationFrame > 15.0 )
    {
LABEL_70:
      if ( v55 == 10 && timerAnimationFrame <= 28.0 )
      {
        if ( timerAnimationFrame < 0.0 )
        {
          v62 = FLOAT_150_0;
        }
        else if ( timerAnimationFrame > 30.0 )
        {
          v62 = FLOAT_40_0;
        }
        else
        {
          v62 = Tween::easing(150.0, 40.0, timerAnimationFrame / 30.0, Linear);
        }
        easing(&outParam, timerAnimationFrame, 0.0, 0.2, (Tween::EasingType)pConvMask, 10.0, 1.5, v71, 30.0, 2.0);
        v63 = this->m_pResources;
        *(_QWORD *)((char *)&v73 + 4) = __PAIR64__(LODWORD(outParam), v47);
        v75 = -1;
        LODWORD(v73) = 1;
        *((float *)&v73 + 3) = outParam;
        v74 = v48;
        ImageRect = BattleHudResources::getImageRect(v63, UNIQUE, 153 - (int)(float)(timerAnimationFrame * -0.5));
        LOBYTE(maskyd) = 0;
        this->draw(
          this,
          153 - (int)(float)(timerAnimationFrame * -0.5),
          956,
          (int)(float)((float)params->positionPlusY + v62),
          ImageRect,
          (const DrawHelper::DrawParams *)&v73,
          maskyd);
      }
      return;
    }
    v56 = 1.0 - (float)(timerAnimationFrame / 15.0);
    if ( v56 > 0.0 )
    {
      if ( v56 < 1.0 )
        v57 = v56 + 0.0;
      else
        LODWORD(v57) = FLOAT_1_0;
    }
    else
    {
      v57 = 0.0;
    }
    if ( timerAnimationFrame >= 0.0 )
    {
      if ( timerAnimationFrame > 3.0 )
      {
        v59 = Tween::easing(1.3, 1.4, (float)(timerAnimationFrame - 3.0) / 12.0, Linear);
LABEL_69:
        v60 = this->m_pResources;
        *(_QWORD *)((char *)&v73 + 4) = __PAIR64__(LODWORD(v59), v47);
        LODWORD(v73) = 1;
        v74 = __PAIR64__(HIDWORD(v48), LODWORD(v57));
        *((float *)&v73 + 3) = v59;
        v75 = -1;
        v61 = BattleHudResources::getImageRect(v60, UNIQUE, v50 + 26);
        LOBYTE(maskyc) = 0;
        this->draw(this, imageID, 916, v52, v61, (const DrawHelper::DrawParams *)&v73, maskyc);
        pConvMask = (unsigned int)BattleHudResources::getImageRect(this->m_pResources, UNIQUE, v30 + 26);
        ((void (__fastcall *)(BattleHudRenderer *, _QWORD, __int64, _QWORD))this->draw)(this, imageID, 1004i64, v52);
        goto LABEL_70;
      }
      v58 = timerAnimationFrame / 3.0;
      if ( (float)(timerAnimationFrame / 3.0) > 0.0 )
      {
        if ( v58 < 1.0 )
          v59 = (float)((float)((float)(v58 * 0.099999905) / 0.099999905) * 0.099999905) + 1.2;
        else
          LODWORD(v59) = FLOAT_1_3;
        goto LABEL_69;
      }
    }
    LODWORD(v59) = FLOAT_1_2;
    goto LABEL_69;
  }
}

void __fastcall BattleHudRenderer::renderUserInfoOnlineMode(
        BattleHudRenderer *this,
        const BattleHudGauge *gaugeP1,
        const BattleHudGauge *gaugeP2,
        const BattleHudRenderer::RenderParams *params)
{
  __int64 v4; // r15
  int m_topOrderIndex; // ecx
  BattleHudGauge::MemberInfo::OnlineParams *pOnlineParams; // rsi
  int v9; // edx
  BattleHudGauge::MemberInfo::OnlineParams *v10; // rdi
  int positionPlusY; // er14
  extension::AsyncContent<Image> *m_ptr; // rbx
  BattleHudRenderer *Myval2; // rcx
  extension::AsyncContent<Image> *v14; // rbx
  BattleHudRenderer *v15; // rcx
  int v16; // er14
  bool v17; // bl
  extension::GFXIText *textPlayerID; // rcx
  extension::gfxi_detail::TextProxy *v19; // rax
  Scaleform::GFx::DrawText *pObject; // rcx
  extension::GFXIText *v21; // rcx
  extension::gfxi_detail::TextProxy *v22; // rax
  Scaleform::GFx::DrawText *v23; // rcx
  extension::GFXIText *v24; // rcx
  extension::GFXIText *v25; // rcx
  extension::GFXIText *v26; // rcx
  extension::gfxi_detail::TextProxy *v27; // rax
  Scaleform::GFx::DrawText *v28; // rcx
  extension::GFXIText *v29; // rcx
  extension::gfxi_detail::TextProxy *v30; // rax
  Scaleform::GFx::DrawText *v31; // rcx
  extension::GFXIText *v32; // rcx
  extension::gfxi_detail::TextProxy *v33; // rax
  Scaleform::GFx::DrawText *v34; // rcx
  extension::GFXIText *v35; // rcx
  extension::gfxi_detail::TextProxy *v36; // rax
  Scaleform::GFx::DrawText *v37; // rcx
  extension::GFXIText *v38; // rcx
  int v39; // ebx
  extension::gfxi_detail::TextProxy *v40; // rax
  Scaleform::GFx::DrawText *v41; // rcx
  extension::GFXIText *v42; // rcx
  extension::gfxi_detail::TextProxy *v43; // rax
  Scaleform::GFx::DrawText *v44; // rcx
  float v45; // xmm9_4
  float v46; // xmm8_4
  extension::AsyncStatus::Step v47; // edx
  int v48; // er15
  extension::AsyncContent<Image> *v49; // rbx
  BattleHudRenderer *v50; // rcx
  extension::AsyncContent<Image> *v51; // rbx
  BattleHudRenderer *v52; // rcx
  int v53; // er14
  unsigned int v54; // edx
  unsigned int v55; // ecx
  int v56; // er8
  __int64 v57; // rdx
  int v58; // edi
  int v59; // eax
  int v60; // eax
  __int64 v61; // rdx
  unsigned int pImage; // [rsp+40h] [rbp-59h]
  DrawHelper::DrawParams drawParama; // [rsp+48h] [rbp-51h] BYREF
  DrawHelper::DrawParams ry; // [rsp+68h] [rbp-31h] BYREF
  int v65; // [rsp+108h] [rbp+6Fh] BYREF
  int v66; // [rsp+110h] [rbp+77h] BYREF

  v4 = *(_QWORD *)&AppMain::pApp;
  m_topOrderIndex = gaugeP2->m_topOrderIndex;
  pOnlineParams = gaugeP1->m_memberInfos[gaugeP1->m_topOrderIndex % 3].pOnlineParams;
  v9 = m_topOrderIndex / 3;
  v10 = gaugeP2->m_memberInfos[m_topOrderIndex % 3].pOnlineParams;
  if ( pOnlineParams && v10 )
  {
    positionPlusY = params->positionPlusY;
    *(_QWORD *)&ry.renderMode = 0i64;
    ry.bMirror = 0;
    drawParama.renderMode = DEFAULT;
    drawParama.bMirror = 0;
    ry.colorARGB = params->gaugeRenderColor;
    drawParama.colorARGB = ry.colorARGB;
    ry.scaleW = 1.0;
    ry.scaleH = 1.0;
    ry.alpha = 1.0;
    drawParama.scaleW = 1.0;
    drawParama.scaleH = 1.0;
    drawParama.alpha = 1.0;
    drawParama.align = Right;
    m_ptr = pOnlineParams->imageTitle.m_body.m_ptr->m_content.m_ptr;
    if ( m_ptr && !m_ptr->m_isDataReleased )
    {
      if ( (m_ptr->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
        extension::AsyncStatus::waitFor(&m_ptr->m_status, (extension::AsyncStatus::Step)v9);
      Myval2 = (BattleHudRenderer *)m_ptr->m_data._Mypair._Myval2;
      if ( Myval2 )
        BattleHudRenderer::renderImageTitle(Myval2, (Image *)0x6E, positionPlusY + 20, (float *)&ry);
    }
    v14 = v10->imageTitle.m_body.m_ptr->m_content.m_ptr;
    if ( v14 && !v14->m_isDataReleased )
    {
      if ( (v14->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
        extension::AsyncStatus::waitFor(&v14->m_status, (extension::AsyncStatus::Step)v9);
      v15 = (BattleHudRenderer *)v14->m_data._Mypair._Myval2;
      if ( v15 )
        BattleHudRenderer::renderImageTitle(v15, (Image *)0x712, positionPlusY + 20, (float *)&drawParama);
    }
    v16 = params->positionPlusY + 52;
    v17 = *(_DWORD *)(v4 + 7352) == 179 && !*(_DWORD *)(v4 + 7368);
    textPlayerID = pOnlineParams->textPlayerID;
    if ( textPlayerID->m_body.m_ptr->m_isVisible != v17 )
    {
      v19 = extension::GFXIText::cloneIfShared(textPlayerID);
      pObject = v19->m_gtext.pObject;
      v19->m_isVisible = v17;
      if ( pObject )
        pObject->SetVisible(pObject, v17);
    }
    v21 = v10->textPlayerID;
    if ( v21->m_body.m_ptr->m_isVisible != v17 )
    {
      v22 = extension::GFXIText::cloneIfShared(v21);
      v23 = v22->m_gtext.pObject;
      v22->m_isVisible = v17;
      if ( v23 )
        v23->SetVisible(v23, v17);
    }
    v24 = pOnlineParams->textPlayerID;
    if ( v24->m_body.m_ptr->m_recommendWidth != 0.0 )
      extension::GFXIText::cloneIfShared(v24)->m_recommendWidth = 0.0;
    v25 = v10->textPlayerID;
    if ( v25->m_body.m_ptr->m_recommendWidth != 0.0 )
      extension::GFXIText::cloneIfShared(v25)->m_recommendWidth = 0.0;
    v26 = pOnlineParams->textPlayerID;
    if ( v26->m_body.m_ptr->m_textParams.HAlignment )
    {
      v27 = extension::GFXIText::cloneIfShared(v26);
      v28 = v27->m_gtext.pObject;
      v27->m_textParams.HAlignment = Align_BaseLine;
      if ( v28 )
        v28->SetAlignment(v28, Align_BaseLine);
    }
    v29 = v10->textPlayerID;
    if ( v29->m_body.m_ptr->m_textParams.HAlignment != Align_Left )
    {
      v30 = extension::GFXIText::cloneIfShared(v29);
      v31 = v30->m_gtext.pObject;
      v30->m_textParams.HAlignment = Align_Right;
      if ( v31 )
        v31->SetAlignment(v31, Align_Right);
    }
    v32 = pOnlineParams->textPlayerID;
    if ( v32->m_body.m_ptr->m_textParams.VAlignment )
    {
      v33 = extension::GFXIText::cloneIfShared(v32);
      v34 = v33->m_gtext.pObject;
      v33->m_textParams.VAlignment = VAlign_Top;
      if ( v34 )
        v34->SetVAlignment(v34, VAlign_Top);
    }
    v35 = v10->textPlayerID;
    if ( v35->m_body.m_ptr->m_textParams.VAlignment )
    {
      v36 = extension::GFXIText::cloneIfShared(v35);
      v37 = v36->m_gtext.pObject;
      v36->m_textParams.VAlignment = VAlign_Top;
      if ( v37 )
        v37->SetVAlignment(v37, VAlign_Top);
    }
    v38 = pOnlineParams->textPlayerID;
    v39 = (-1 - (HIBYTE(params->gaugeRenderColor) << 24)) | 0xFFFFFF;
    if ( v38->m_body.m_ptr->m_textParams.TextColor.Raw != v39 )
    {
      v40 = extension::GFXIText::cloneIfShared(v38);
      v41 = v40->m_gtext.pObject;
      v40->m_textParams.TextColor.Raw = v39;
      if ( v41 )
      {
        v65 = v39;
        ((void (__fastcall *)(Scaleform::GFx::DrawText *, int *, _QWORD, __int64))v41->SetColor)(v41, &v65, 0i64, -1i64);
      }
    }
    v42 = v10->textPlayerID;
    if ( v42->m_body.m_ptr->m_textParams.TextColor.Raw != v39 )
    {
      v43 = extension::GFXIText::cloneIfShared(v42);
      v44 = v43->m_gtext.pObject;
      v43->m_textParams.TextColor.Raw = v39;
      if ( v44 )
      {
        v66 = v39;
        ((void (__fastcall *)(Scaleform::GFx::DrawText *, int *, _QWORD, __int64))v44->SetColor)(v44, &v66, 0i64, -1i64);
      }
    }
    v45 = (float)*(int *)(*(_QWORD *)&AppMain::pApp + 28i64) / 1920.0;
    v46 = (float)((float)*(int *)(*(_QWORD *)&AppMain::pApp + 32i64) / 1080.0) * (float)v16;
    extension::GFXIText::setPosition(
      pOnlineParams->textPlayerID,
      v45 * 110.0,
      v46 - (float)(pOnlineParams->textPlayerID->m_body.m_ptr->m_size.Height * 0.5));
    extension::GFXIText::setPosition(
      v10->textPlayerID,
      v45 * 1810.0,
      v46 - (float)(pOnlineParams->textPlayerID->m_body.m_ptr->m_size.Height * 0.5));
    v48 = (int)(float)(pOnlineParams->textPlayerID->m_body.m_ptr->m_size.Width + 110.0);
    pImage = -10 - (int)(float)(v10->textPlayerID->m_body.m_ptr->m_size.Width + -1810.0);
    v49 = pOnlineParams->imageRank.m_body.m_ptr->m_content.m_ptr;
    if ( v49 && !v49->m_isDataReleased )
    {
      if ( (v49->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
        extension::AsyncStatus::waitFor(&v49->m_status, v47);
      v50 = (BattleHudRenderer *)v49->m_data._Mypair._Myval2;
      if ( v50 )
        BattleHudRenderer::renderImage(v50, (Image *)(unsigned int)(v48 + 10), v16 - 1, (__int64)&ry);
    }
    v51 = v10->imageRank.m_body.m_ptr->m_content.m_ptr;
    if ( v51 && !v51->m_isDataReleased )
    {
      if ( (v51->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
        extension::AsyncStatus::waitFor(&v51->m_status, v47);
      v52 = (BattleHudRenderer *)v51->m_data._Mypair._Myval2;
      if ( v52 )
        BattleHudRenderer::renderImage(v52, (Image *)pImage, v16 - 1, (__int64)&drawParama);
    }
    v53 = params->positionPlusY + 52;
    v54 = pOnlineParams->battleWins ^ 0x7B48A35E ^ (LOWORD(pOnlineParams->battleWins) ^ 0xA35E ^ (unsigned __int16)((pOnlineParams->battleWins ^ 0x7B48A35Eu) >> 14)) & 0xCCCC ^ (((LOWORD(pOnlineParams->battleWins) ^ 0xA35E ^ (unsigned __int16)((pOnlineParams->battleWins ^ 0x7B48A35Eu) >> 14)) & 0xCCCC) << 14);
    v55 = v10->battleWins ^ 0x7B48A35E;
    v56 = v54 ^ (v54 ^ (v54 >> 7)) & 0x550055 ^ (((v54 ^ (v54 >> 7)) & 0x550055) << 7);
    v57 = v55 ^ (LOWORD(v10->battleWins) ^ 0xA35E ^ (unsigned __int16)(v55 >> 14)) & 0xCCCC ^ (((LOWORD(v10->battleWins) ^ 0xA35E ^ (unsigned __int16)(v55 >> 14)) & 0xCCCC) << 14);
    v58 = (v57 ^ ((v55 ^ (LOWORD(v10->battleWins) ^ 0xA35E ^ (unsigned __int16)(v55 >> 14)) & 0xCCCC ^ (((LOWORD(v10->battleWins) ^ 0xA35E ^ (unsigned __int16)(v55 >> 14)) & 0xCCCC) << 14)) >> 7)) & 0x550055 ^ v57 ^ ((((unsigned int)v57 ^ ((v55 ^ (LOWORD(v10->battleWins) ^ 0xA35E ^ (unsigned __int16)(v55 >> 14)) & 0xCCCC ^ (((LOWORD(v10->battleWins) ^ 0xA35E ^ (unsigned __int16)(v55 >> 14)) & 0xCCCC) << 14)) >> 7)) & 0x550055) << 7);
    if ( v56 > 0 )
    {
      v59 = BattleHudRenderer::renderImageNmber(this, v57, v56, 2, 862, v53, &drawParama);
      BattleHudRenderer::renderImage(this, 2, 2, 862 - v59, v53, &drawParama);
    }
    if ( v58 > 0 )
    {
      v60 = BattleHudRenderer::renderImage(this, 2, 2, 1058, v53, &ry);
      BattleHudRenderer::renderImageNmber(this, v61, v58, 2, v60 + 1058, v53, &ry);
    }
  }
}

void __fastcall BattleHudRenderer::renderUserInfoPlayerSymbol(
        BattleHudRenderer *this,
        const BattleHudRenderer::RenderParams *params)
{
  BattleHudResources *m_pResources; // rsi
  int positionPlusY; // ebp
  int v5; // edi
  int imageID; // esi
  const _C_CONV *ImageRect; // rax
  BattleHudResources *v8; // rsi
  const _C_CONV *v9; // rax
  bool v10; // [rsp+30h] [rbp-38h]
  BOOL v11; // [rsp+30h] [rbp-38h]
  __int64 v12; // [rsp+40h] [rbp-28h] BYREF
  int v13; // [rsp+48h] [rbp-20h]
  int v14; // [rsp+4Ch] [rbp-1Ch]
  int v15; // [rsp+50h] [rbp-18h]
  char v16; // [rsp+54h] [rbp-14h]
  int v17; // [rsp+58h] [rbp-10h]

  m_pResources = this->m_pResources;
  positionPlusY = params->positionPlusY;
  v12 = 0i64;
  v13 = 1065353216;
  v14 = 1065353216;
  v15 = 1065353216;
  v16 = 0;
  v17 = -1;
  v5 = -1;
  if ( m_pResources->isError(m_pResources) )
    imageID = -1;
  else
    imageID = m_pResources->m_pCommons[2].imageID;
  ImageRect = BattleHudResources::getImageRect(this->m_pResources, (BattleHudResources::EImage::Type)2, 0);
  v10 = 0;
  this->draw(this, imageID, 110, positionPlusY + 52, ImageRect, (const DrawHelper::DrawParams *)&v12, v10);
  v8 = this->m_pResources;
  HIDWORD(v12) = 1;
  if ( !v8->isError(v8) )
    v5 = v8->m_pCommons[2].imageID;
  v9 = BattleHudResources::getImageRect(this->m_pResources, (BattleHudResources::EImage::Type)2, 1);
  LOBYTE(v11) = 0;
  this->draw(this, v5, 1810, positionPlusY + 52, v9, (const DrawHelper::DrawParams *)&v12, v11);
}

void __fastcall BattleHudRenderer::renderUserInfoStoryMode(
        BattleHudRenderer *this,
        int totalScore,
        const BattleHudRenderer::RenderParams *params)
{
  int ry; // ebp
  __int64 v7; // rdx
  int v8; // eax
  BattleHudResources *m_pResources; // rbx
  int v10; // er14
  int imageID; // ebx
  const _C_CONV *ImageRect; // rax
  BOOL drawParama; // [rsp+30h] [rbp-38h]
  DrawHelper::DrawParams v14; // [rsp+40h] [rbp-28h] BYREF

  BattleHudRenderer::renderUserInfoPlayerSymbol(this, params);
  ry = params->positionPlusY + 52;
  v14.renderMode = DEFAULT;
  v14.scaleW = 1.0;
  v14.scaleH = 1.0;
  v14.alpha = 1.0;
  v14.bMirror = 0;
  v14.colorARGB = -1;
  v14.align = Right;
  v8 = BattleHudRenderer::renderImageNmber(this, v7, totalScore, 8, 862, ry, &v14);
  m_pResources = this->m_pResources;
  v10 = 862 - v8;
  if ( m_pResources->isError(m_pResources) )
    imageID = -1;
  else
    imageID = m_pResources->m_pCommons[2].imageID;
  ImageRect = BattleHudResources::getImageRect(this->m_pResources, (BattleHudResources::EImage::Type)2, 7);
  LOBYTE(drawParama) = 0;
  this->draw(this, imageID, v10, ry, ImageRect, &v14, drawParama);
}

void __fastcall BattleHudRenderer::renderUserInfoSurvivalMode(
        BattleHudRenderer *this,
        int winCount,
        const BattleHudRenderer::RenderParams *params)
{
  int v4; // esi
  __int64 v7; // rdx
  int v8; // er8
  int ry; // ebp
  int v10; // er9
  int i; // ecx
  int v12; // eax
  BattleHudResources *m_pResources; // rdi
  int v14; // ebx
  int imageID; // edi
  const _C_CONV *ImageRect; // rax
  BOOL drawParama; // [rsp+30h] [rbp-38h]
  DrawHelper::DrawParams v18; // [rsp+40h] [rbp-28h] BYREF

  v18.scaleW = 1.0;
  v4 = 0;
  v18.scaleH = 1.0;
  v18.renderMode = DEFAULT;
  v18.bMirror = 0;
  v18.alpha = 1.0;
  v18.colorARGB = -1;
  v18.align = Right;
  BattleHudRenderer::renderUserInfoPlayerSymbol(this, params);
  v8 = 9999;
  if ( winCount < 9999 )
    v8 = winCount;
  ry = params->positionPlusY + 52;
  if ( v8 >= 100 )
  {
    for ( i = v8; i > 0; i /= 10 )
    {
      ++v4;
      LODWORD(v7) = (unsigned __int64)(1717986919i64 * i) >> 32;
    }
    v10 = v4;
  }
  else
  {
    v10 = 2;
  }
  v12 = BattleHudRenderer::renderImageNmber(this, v7, v8, v10, 862, ry, &v18);
  m_pResources = this->m_pResources;
  v14 = 862 - v12;
  if ( m_pResources->isError(m_pResources) )
    imageID = -1;
  else
    imageID = m_pResources->m_pCommons[2].imageID;
  ImageRect = BattleHudResources::getImageRect(this->m_pResources, (BattleHudResources::EImage::Type)2, 2);
  LOBYTE(drawParama) = 0;
  this->draw(this, imageID, v14, ry, ImageRect, &v18, drawParama);
}

void __fastcall BattleHudRenderer::renderUserInfoTimeattackMode(
        BattleHudRenderer *this,
        unsigned int totalBattleFrame,
        const BattleHudRenderer::RenderParams *params)
{
  int ry; // er14
  int v7; // er12
  int v8; // er13
  int v9; // eax
  BattleHudResources *m_pResources; // rdi
  int v11; // ebx
  int v12; // ebp
  int imageID; // er15
  BattleHudResources *v14; // rdi
  const _C_CONV *p_rect; // rdi
  int rx; // ebx
  __int64 v17; // rdx
  int v18; // eax
  BattleHudResources *v19; // rdi
  int v20; // ebx
  int v21; // er15
  BattleHudResources *v22; // rdi
  const _C_CONV *v23; // rdi
  int v24; // ebx
  __int64 v25; // rdx
  int v26; // eax
  BattleHudResources *v27; // rdi
  int v28; // ebx
  const _C_CONV *ImageRect; // rax
  BOOL drawParama; // [rsp+30h] [rbp-58h]
  BOOL drawParamaa; // [rsp+30h] [rbp-58h]
  BOOL drawParamab; // [rsp+30h] [rbp-58h]
  DrawHelper::DrawParams v33; // [rsp+40h] [rbp-48h] BYREF

  v33.renderMode = DEFAULT;
  v33.scaleW = 1.0;
  v33.scaleH = 1.0;
  v33.alpha = 1.0;
  v33.bMirror = 0;
  v33.colorARGB = -1;
  v33.align = Right;
  BattleHudRenderer::renderUserInfoPlayerSymbol(this, params);
  ry = params->positionPlusY + 52;
  v7 = totalBattleFrame / 0x3C % 0x3C;
  v8 = totalBattleFrame / 0xE10 % 0x3C;
  v9 = BattleHudRenderer::renderImageNmber(
         this,
         (int)(float)((float)(totalBattleFrame % 0x3C) * 16.666666) / 0xAu,
         (int)(float)((float)(totalBattleFrame % 0x3C) * 16.666666) / 0xAu,
         2,
         862,
         ry,
         &v33);
  m_pResources = this->m_pResources;
  v11 = 862 - v9;
  v12 = -1;
  if ( m_pResources->isError(m_pResources) )
    imageID = -1;
  else
    imageID = m_pResources->m_pCommons[1].imageID;
  v14 = this->m_pResources;
  if ( v14->isError(v14) )
    p_rect = &v14->m_errorWorkaround.rect;
  else
    p_rect = &ImageRects_PlayerID[2];
  LOBYTE(drawParama) = 0;
  this->draw(this, imageID, v11, ry, p_rect, &v33, drawParama);
  rx = v11 - p_rect->w;
  v18 = BattleHudRenderer::renderImageNmber(this, v17, v7, 2, rx, ry, &v33);
  v19 = this->m_pResources;
  v20 = rx - v18;
  if ( v19->isError(v19) )
    v21 = -1;
  else
    v21 = v19->m_pCommons[1].imageID;
  v22 = this->m_pResources;
  if ( v22->isError(v22) )
    v23 = &v22->m_errorWorkaround.rect;
  else
    v23 = &ImageRects_PlayerID[1];
  LOBYTE(drawParamaa) = 0;
  this->draw(this, v21, v20, ry, v23, &v33, drawParamaa);
  v24 = v20 - v23->w;
  v26 = BattleHudRenderer::renderImageNmber(this, v25, v8, 2, v24, ry, &v33);
  v27 = this->m_pResources;
  v28 = v24 - v26;
  if ( !v27->isError(v27) )
    v12 = v27->m_pCommons[2].imageID;
  ImageRect = BattleHudResources::getImageRect(this->m_pResources, (BattleHudResources::EImage::Type)2, 4);
  LOBYTE(drawParamab) = 0;
  this->draw(this, v12, v28, ry, ImageRect, &v33, drawParamab);
}

void __fastcall BattleHudRenderer::renderUserInfoVersus(
        BattleHudRenderer *this,
        int winCountP1,
        int winCountP2,
        bool bPlayerCpuP1,
        bool bPlayerCpuP2,
        const BattleHudRenderer::RenderParams *params)
{
  __int64 v10; // rdx
  int v11; // esi
  int ry; // ebp
  int v13; // eax
  BattleHudResources *m_pResources; // rbx
  int v15; // er14
  int imageID; // ebx
  const _C_CONV *ImageRect; // rax
  BattleHudResources *v18; // rbx
  int v19; // er14
  const _C_CONV *v20; // rbx
  __int64 v21; // rdx
  BattleHudResources *v22; // rbx
  int v23; // ecx
  int v24; // er8
  const _C_CONV *v25; // rbx
  int v26; // er15
  BOOL drawParama; // [rsp+30h] [rbp-78h]
  BOOL drawParamaa; // [rsp+30h] [rbp-78h]
  DrawHelper::DrawParams v29; // [rsp+40h] [rbp-68h] BYREF
  DrawHelper::DrawParams v30; // [rsp+60h] [rbp-48h] BYREF

  *(_QWORD *)&v29.renderMode = 0i64;
  v29.bMirror = 0;
  v30.renderMode = DEFAULT;
  v30.bMirror = 0;
  v29.colorARGB = params->gaugeRenderColor;
  v30.colorARGB = v29.colorARGB;
  v29.scaleW = 1.0;
  v29.scaleH = 1.0;
  v29.alpha = 1.0;
  v30.scaleW = 1.0;
  v30.scaleH = 1.0;
  v30.alpha = 1.0;
  v30.align = Right;
  BattleHudRenderer::renderUserInfoPlayerSymbol(this, params);
  v11 = -1;
  ry = params->positionPlusY + 52;
  if ( winCountP1 > 0 )
  {
    v13 = BattleHudRenderer::renderImageNmber(this, v10, winCountP1, 2, 862, ry, &v30);
    m_pResources = this->m_pResources;
    v15 = 862 - v13;
    if ( m_pResources->isError(m_pResources) )
      imageID = -1;
    else
      imageID = m_pResources->m_pCommons[2].imageID;
    ImageRect = BattleHudResources::getImageRect(this->m_pResources, (BattleHudResources::EImage::Type)2, 2);
    LOBYTE(drawParamaa) = 0;
    this->draw(this, imageID, v15, ry, ImageRect, &v30, drawParamaa);
  }
  if ( winCountP2 > 0 )
  {
    v18 = this->m_pResources;
    if ( v18->isError(v18) )
      v19 = -1;
    else
      v19 = v18->m_pCommons[2].imageID;
    v20 = BattleHudResources::getImageRect(this->m_pResources, (BattleHudResources::EImage::Type)2, 2);
    LOBYTE(drawParama) = 0;
    this->draw(this, v19, 1058, ry, v20, &v29, drawParama);
    BattleHudRenderer::renderImageNmber(this, v21, winCountP2, 2, v20->w + 1058, ry, &v29);
  }
  if ( !bPlayerCpuP1 || !bPlayerCpuP2 )
  {
    v22 = this->m_pResources;
    if ( !v22->isError(v22) )
      v11 = v22->m_pCommons[2].imageID;
    v23 = *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2507556i64);
    if ( *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2507552i64) == 3 )
    {
      v24 = 111;
    }
    else if ( ((v23 - 1) & 0xFFFFFFFA) != 0 || (v24 = 110, v23 == 6) )
    {
      v24 = 9;
    }
    v25 = BattleHudResources::getImageRect(this->m_pResources, (BattleHudResources::EImage::Type)2, v24);
    v26 = (int)(float)((float)(752 - v25->w) * 0.5);
    if ( bPlayerCpuP1 )
    {
      LOBYTE(drawParama) = 0;
      this->draw(this, v11, v26 + 110, ry, v25, &v29, drawParama);
    }
    if ( bPlayerCpuP2 )
    {
      LOBYTE(drawParama) = 0;
      this->draw(this, v11, v26 + 1058, ry, v25, &v29, drawParama);
    }
  }
}

void __fastcall extension::GFXIText::setPosition(extension::GFXIText *this, float x, float y)
{
  extension::gfxi_detail::TextProxy *v3; // rax
  Scaleform::GFx::DrawText *pObject; // rdx

  if ( this->m_body.m_ptr->m_position.x != x || this->m_body.m_ptr->m_position.y != y )
  {
    v3 = extension::GFXIText::cloneIfShared(this);
    pObject = v3->m_gtext.pObject;
    v3->m_position.x = x;
    v3->m_position.y = y;
    if ( pObject )
      extension::gfxi_detail::TextProxy::applyTextRect(v3, pObject);
  }
}

