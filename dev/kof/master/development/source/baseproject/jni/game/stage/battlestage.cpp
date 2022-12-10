#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actoroption.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_functions.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/cameracheck.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/globalheapmemory.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/freecameracheck.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/fixmemory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threadcheck.h"
#include "dev/silverware/git/sdk/agcondition.inl"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleonline.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textlayout.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_image.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdata/effectdata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/savedatadefine.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/chartdata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogleffect.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/texstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xiosbase"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocale"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocinfo"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/kof/master/development/source/baseproject/jni/game/cpuseq/battlecpu.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdata/effectappdata.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_movie.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "dev/kof/master/development/source/baseproject/jni/game/cpuseq/sequencecontroller.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_operation.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogllight.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/bitset"
#include "dev/kof/master/development/source/baseproject/jni/game/appmain.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/map"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtree"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_prefightfaceoff.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/translate_table.h"
#include "dev/silverware/git/sdk/input/agcontrollercomponent.h"
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
#include "dev/silverware/git/sdk/agreferencedobjectinl.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/list"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraystaticbuff.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/hidpad/hidpadsystem.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/combomissionjudge.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cxform.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "dev/silverware/git/sdk/agthread.h"
#include "dev/silverware/git/sdk/agdisplay.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "dev/kof/master/development/source/baseproject/jni/game/util/soundutil.h"
#include "dev/silverware/git/sdk/util/agdebugchannels.h"
#include "dev/silverware/git/sdk/agmutex.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "dev/silverware/git/sdk/agreferencedobject.h"
#include "dev/kof/master/development/source/baseproject/jni/game/network/chkdiscononlinesv.h"
#include "dev/silverware/git/sdk/util/agperformancecounter.h"
#include "dev/silverware/git/sdk/agscopedlock.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_exception.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/matchingsystem.h"
#include "dev/silverware/git/sdk/agclock.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/variableheapmemorybase.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector3unaligned.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaprojectdataformat.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/limits"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestageutil.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charabasestatusformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_event.h"
#include "dev/silverware/git/sdk/agmath.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vector"
#include "dev/kof/master/development/source/baseproject/jni/game/check/inputkeyrecord.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/png_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_keycodes.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_hashkey.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshkey.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixstate.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_gradients.h"
#include "dev/silverware/git/sdk/agmovieplayer.h"
#include "dev/silverware/git/sdk/agvector4.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlecall/battlecall.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_rasterizer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_viewport.h"
#include "dev/silverware/git/sdk/agvector3.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_debug.h"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/bodypush.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/physicalheapmemory.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/libcommon.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_drawableimage.h"
#include "dev/silverware/git/sdk/agsemaphore.h"
#include "dev/kof/master/development/source/ps4project/baseproject/pcutil/pcdummy.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/vec_aos.h"
#include "dev/kof/master/development/source/baseproject/jni/game/network/netmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hal.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_buffer.h"
#include "dev/silverware/git/sdk/agsemaphore.inl"
#include "dev/silverware/git/sdk/agconditionvariable.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/boolinvec.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thr/xthread"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "dev/kof/master/development/source/baseproject/jni/game/network/leaderboard.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/condition_variable"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_characterdef.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_manager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "dev/silverware/git/sdk/filesystem/agmount.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/vectormath_aos.h"
#include "dev/silverware/git/sdk/filesystem/agdirectory.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/functional"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/deque"
#include "dev/kof/master/development/source/baseproject/jni/game/check/operationmapper.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/particledata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filters.h"
#include "dev/silverware/git/sdk/agreferencecount.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/weapon/actorweapon.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filterparams.h"
#include "dev/silverware/git/sdk/agpointer.h"
#include "dev/kof/master/development/source/baseproject/jni/game/system/battlecontroller.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_font.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/mutex"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/array"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actionsystem.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/chrono"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaactiondataformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessdefs.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/algorithm"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/string"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic0.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestage.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charafilebase.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatapacked.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/tkndata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_pathdatapacker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_linebuffer.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/jobmanager.h"
#include "dev/silverware/git/sdk/system/agsysteminfo.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/ios"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_highlight.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocnum"
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
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/tga_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_statebag.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/titlestoragesystem.h"
#include "program files (x86)/windows kits/8.1/include/shared/stralign.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thread"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestagedatas.h"
#include "dev/kof/master/development/source/ps4project/baseproject/pcutil/pccontrolsmanager.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/memory"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/tkndatas.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_simplemeshcache.h"
#include "dev/silverware/git/sdk/input/aginputmanager.h"
#include "dev/silverware/git/sdk/agsingleton.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/tween.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/fontprovider/render_fontproviderwinapi.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector4unaligned.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/asynccharafileload.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/future_asset.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestageevent.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/asyncjob.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/resourcemanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_bundle.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/vecidx_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xutility"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/utility"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/atomic_int.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/floatinvec.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/tuple"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloatmp.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/atomic"
#include "dev/silverware/git/sdk/3rdparty/steam/isteamhtmlsurface.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/iosfwd"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/hitrectcollection.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapemeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/jpeg_imagefile.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treetext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefileutil.h"
#include "dev/silverware/git/sdk/platforms/pc/system/agpcsysteminfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_missiondataloading.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/trainingsetting.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/combomissionattackeventlistener.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charamaterialsettingformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_docview.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/rapper/graphicsopt.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/fix32.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_range.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/quat_aos.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actorcharabase.h"
#include "dev/silverware/git/sdk/system/agusermanager.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlehud.h"
#include "dev/kof/master/development/source/baseproject/jni/game/define/charabonedefine.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/floatinvec.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_hash.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battleeventhandler.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/colorholder.h"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/damagesetting.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "program files (x86)/windows kits/8.1/include/um/winnt.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix4x4.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/battleplayerinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixpool.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_vec64.h"
#include "dev/silverware/git/sdk/agreferenceinl.h"
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
#include "dev/silverware/git/sdk/agreferencecountinl.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleonlinewatching.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessgen.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treeshape.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessellator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmodel.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/vec_aos.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/cpusequencedataformat.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglcurve.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/refcountable.h"
#include "dev/silverware/git/sdk/agconditionvariable.inl"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleloading.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/shot/actorshot.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actorchara.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/commandcheck.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/restrictringbuffer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitivebundle.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treecachenode.h"
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
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xfacet"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_ps4modelroom.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/moviedatadefine.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_player.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charahitrectformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_types.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglrender.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_resource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/silverware/git/sdk/aghash.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/mediamanager.h"
#include "dev/silverware/git/sdk/agstringutils.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglfog.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglbone.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_stroker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "program files (x86)/windows kits/8.1/include/um/winuser.h"
#include "dev/silverware/git/sdk/memory/agallocators.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/dds_imagefile.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/audiopresenter.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steam_api.h"
#include "dev/silverware/git/sdk/agcondition.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_typeinfo.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestageresourcecontainer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textmeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/input/imesystem.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestageshader.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actor.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphparam.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xxatomic"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/matrix4unaligned.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charadataunify.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcache.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/math.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/quat_aos.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/unordered_map"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaattackdataformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcacheconfig.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/stdexcept"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charadamagesettingformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hairliner.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xhash"
#include "dev/silverware/git/sdk/filesystem/agfile.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/exception"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/type_traits"
#include "dev/silverware/git/sdk/agpointerinl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_filterdesc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_styledtext.h"
#include "dev/silverware/git/sdk/filesystem/agpath.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix3x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_core.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_queue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstddef"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_fontmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitive.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocaddr.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmirror.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_radixtree.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdatalistmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_twips.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectcommon.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_containers.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_wwhelper.h"
#include "dev/silverware/git/sdk/agrectangle.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/mediasound.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_sse.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/time.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exlockable.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_types.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/system_error"
#include "dev/silverware/git/sdk/3rdparty/steam/matchmakingtypes.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/combomissiondataformat.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/sounddata.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/soundgroupdataformat.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/effect.h"
#include "dev/silverware/git/sdk/agmemorystream.h"
#include "dev/kof/master/development/source/baseproject/jni/game/network/playtogether.h"
#include "dev/silverware/git/sdk/agmemorypool.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_bank.h"
#include "program files (x86)/windows kits/8.1/include/um/winbase.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_vertex.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/debug/logging.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/fontprovider/render_fontproviderhud.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_wstring.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglshader.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_new.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstring"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/heapmemory.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector2unaligned.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/shaderfxhelper.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/randommt.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory0"
#include "dev/kof/master/development/source/baseproject/jni/game/player/effect/actoreffect.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actorobject.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/mutex.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/savedata.h"
#include "dev/silverware/git/sdk/agvector2.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglvec3.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestageevent.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestagedatas.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/additionalfunctions/stageadditionalfunction_mobshadow.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmatrix.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/collisionmodel.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestageresourcecontainer.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestagesound.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battleeventhandler.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/asyncjob.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglrender.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/math.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmodel.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestageutil.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/tkndatas.cpp"

std::piecewise_construct_t std::piecewise_construct; // 0x1408A0B35
BattleStage::BattleStage(); // 0x14020A4F0
BattleStage::~BattleStage(); // 0x14020A6E0
void BattleStage::dispose(); // 0x14020A7F0
bool BattleStage::loadResources(const StageProjectData & stageProj, STAGE_ID stageID); // 0x14020A900
bool BattleStage::setupParameters(extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> stageModels); // 0x14020A970
BattleStageEvent * BattleStage::createEvent(BSDataEvent * pDataEvent, long triggerPriority); // 0x14020AC50
bool BattleStage::notifyEvent(TknData::SceneTrigger1 trigger1, TknData::SceneTrigger2 trigger2, const TknDataEventConditions::CheckParams * pParams, bool bPriorityCheck); // 0x14020B1C0
void BattleStage::update(float advanceFrame); // 0x14020B4C0
void BattleStage::cullingTest(const OGLMatrix & matProjection, const OGLMatrix & matView); // 0x14020B810
void BattleStage::draw(); // 0x14020B8F0
void BattleStage::drawDirectRendring(); // 0x14020BA20
void BattleStage::setAuroraVisionMessage(const char * pMessage); // 0x14020BAA0
void BattleStage::callEffectManagers(std::function<void __cdecl(EffectDataListManager &)> func); // 0x14020BB30
long BattleStage::getGimmickOGLModelCount(); // 0x14020BC10
OGLModel * BattleStage::getGimmickOGLModel(long index); // 0x14020BCC0
bool BattleStage::isGimmickOGLModelLocalLight(long index); // 0x14020BDC0
void BattleStage::resoucesInitialize(); // 0x14020BE60
void BattleStage::OnEventCharacterDamage(BattleEventHandler::Listener::SkillType skillType, PLAYER_ID playerID, long maxHp, long hp, long damage, long comboCount, const BattleEventHandler::Listener::CharacterStatus * pStatus); // 0x14020BEC0
void BattleStage::OnEventCharacterStun(PLAYER_ID playerID, const BattleEventHandler::Listener::CharacterStatus * pStatus); // 0x14020C090
void BattleStage::OnEventCharacterBound(PLAYER_ID playerID, const BattleEventHandler::Listener::CharacterStatus * pStatus); // 0x14002E7C0
void BattleStage::OnEventRoundStartRound(STAGE_ID stageID, long round, const BattleEventHandler::Listener::CharacterStatus * pStatus); // 0x14020C0E0
void BattleStage::OnEventRoundStartGO(STAGE_ID stageID, long round, const BattleEventHandler::Listener::CharacterStatus * pStatus); // 0x14020C150
void BattleStage::OnEventRoundStartFadeIn(STAGE_ID stageID, long round); // 0x14020C1C0
void BattleStage::OnEventRoundStartTalkStart(STAGE_ID stageID, long round); // 0x14020C2E0
void BattleStage::OnEventRoundStartTalkOut(STAGE_ID stageID, long round); // 0x14020C320
void BattleStage::OnEventRoundEnd(BattleEventHandler::Listener::BattleResult battleResult, long time, const BattleEventHandler::Listener::CharacterStatus * pStatus); // 0x14020C360
void BattleStage::OnEventTimeup(const BattleEventHandler::Listener::CharacterStatus * pStatus); // 0x14020C500
TknData::SceneTrigger2 BattleStage::roundToTrigger(long round); // 0x14020C5A0
void BattleStage::OnEventWallHit(const BattleEventHandler::Listener::CharacterStatus * pStatus); // 0x14020C600
void BattleStage::OnEventGroundHit(const BattleEventHandler::Listener::CharacterStatus * pStatus); // 0x14020C650
void BattleStage::OnEventAkebonoKO(); // 0x14020C6A0//decompilation failure at 1408A0B35!
void __fastcall BattleStage::BattleStage(BattleStage *this)
{
  _WORD *v2; // rax
  BattleEventHandler *Instance; // rax
  __int64 v4; // rcx
  BattleStage::BattleCharacterInfo *m_characterInfos; // rax
  BattleEventHandler *v6; // rax
  BattleStageSound *v7; // [rsp+48h] [rbp+10h]

  this->__vftable = (BattleStage_vtbl *)&BattleStage::`vftable';
  this->m_pGlobalEvents._Mypair._Myval2._Myfirst = 0i64;
  this->m_pGlobalEvents._Mypair._Myval2._Mylast = 0i64;
  this->m_pGlobalEvents._Mypair._Myval2._Myend = 0i64;
  this->m_pLocalEvents._Mypair._Myval2._Myfirst = 0i64;
  this->m_pLocalEvents._Mypair._Myval2._Mylast = 0i64;
  this->m_pLocalEvents._Mypair._Myval2._Myend = 0i64;
  *(_QWORD *)&this->m_cullingViewModel.m_transform.m[4] = 0i64;
  *(_QWORD *)&this->m_cullingViewModel.m_transform.m[6] = 0i64;
  *(_QWORD *)&this->m_cullingViewModel.m_transform.m[14] = 0i64;
  *(_QWORD *)&this->m_cullingViewModel.m_obbCenter.x = 0i64;
  this->m_cullingViewModel.m_obbCenter.z = 0.0;
  *(_QWORD *)&this->m_cullingViewModel.m_obbDistance.x = 0i64;
  this->m_cullingViewModel.m_obbDistance.z = 0.0;
  this->m_cullingViewModel.m_modelType = MODELTYPE_NONE;
  this->m_cullingViewModel.m_pPoints = 0i64;
  this->m_cullingViewModel.m_pointCount = 0;
  *(_QWORD *)&this->m_cullingViewModel.m_transform.m[15] = 1065353216i64;
  this->m_cullingViewModel.m_bRefreshTransVertex = 0;
  this->m_cullingViewModel.m_pFaceCenters = 0i64;
  this->m_cullingViewModel.m_pFaceNormals = 0i64;
  *(_QWORD *)this->m_cullingViewModel.m_transform.m = 1065353216i64;
  this->m_cullingViewModel.m_transform.m[4] = 0.0;
  *(_QWORD *)&this->m_cullingViewModel.m_transform.m[8] = 0i64;
  *(_QWORD *)&this->m_cullingViewModel.m_transform.m[12] = 0i64;
  *(_QWORD *)&this->m_cullingViewModel.m_transform.m[5] = 1065353216i64;
  *(_QWORD *)&this->m_cullingViewModel.m_transform.m[2] = 0i64;
  *(_QWORD *)&this->m_cullingViewModel.m_transform.m[10] = 1065353216i64;
  this->m_cullingViewModel.m_transform.m[14] = 0.0;
  this->m_cullingViewModel.m_transform.m[7] = 0.0;
  this->m_cullingViewModel.m_pTransVertex = 0i64;
  this->m_cullingViewModel.m_pObbVectors = 0i64;
  this->m_cullingViewModel.m_pCubeParams = 0i64;
  v2 = operator new(0x30ui64);
  *(_DWORD *)v2 = -1;
  v2[2] = 0;
  *((_QWORD *)v2 + 1) = 0i64;
  *((_QWORD *)v2 + 3) = 0i64;
  *((_QWORD *)v2 + 5) = 0i64;
  this->m_pResourceContainer = (BattleStageResourceContainer *)v2;
  v7 = (BattleStageSound *)operator new(0x10ui64);
  v7->__vftable = (BattleStageSound_vtbl *)&BattleStageSound::`vftable';
  v7->m_playingStageId = STAGE_ID_NONE;
  Instance = BattleEventHandler::getInstance();
  BattleListenerList::add(Instance->m_pListenerList, v7);
  this->m_pSound = v7;
  this->m_pAuroraVisionMessage = 0i64;
  v4 = 2i64;
  m_characterInfos = this->m_characterInfos;
  do
  {
    m_characterInfos->characterNo = CHARACTER_NO_NONE;
    *(_QWORD *)&m_characterInfos->playerType = 0i64;
    ++m_characterInfos;
    --v4;
  }
  while ( v4 );
  this->m_pAdditionalFuncton_MobShadow = 0i64;
  this->m_bResourcesInitialized = 0;
  v6 = BattleEventHandler::getInstance();
  BattleListenerList::add(v6->m_pListenerList, this);
}

void __fastcall std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLCamera,void>::Body>>>>>,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLCamera,void>::Body>>>>>>>>::~vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLCamera,void>::Body>>>>>,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLCamera,void>::Body>>>>>>>>(
        std::vector<unsigned char *> *this)
{
  if ( this->_Mypair._Myval2._Myfirst )
  {
    std::_Wrap_alloc<std::allocator<OGLShader *>>::deallocate(
      (std::allocator<AgLogger *> *)this,
      (AgLogger **)this->_Mypair._Myval2._Myfirst,
      this->_Mypair._Myval2._Myend - this->_Mypair._Myval2._Myfirst);
    this->_Mypair._Myval2._Myfirst = 0i64;
    this->_Mypair._Myval2._Mylast = 0i64;
    this->_Mypair._Myval2._Myend = 0i64;
  }
}

void __fastcall BattleStage::~BattleStage(BattleStage *this)
{
  BattleEventHandler *Instance; // rax
  unsigned __int64 v3; // rdx
  BattleStageSound *m_pSound; // rcx
  BattleStageResourceContainer *m_pResourceContainer; // rdi
  char *m_pAuroraVisionMessage; // rcx
  std::allocator<AgLogger *> *v7; // rcx
  AgLogger **Myfirst; // rdx
  AgLogger **v9; // rdx

  this->__vftable = (BattleStage_vtbl *)&BattleStage::`vftable';
  Instance = BattleEventHandler::getInstance();
  BattleListenerList::remove(Instance->m_pListenerList, this);
  BattleStage::dispose(this);
  m_pSound = this->m_pSound;
  if ( m_pSound )
  {
    ((void (__fastcall *)(BattleStageSound *, __int64))m_pSound->~BattleStageSound)(m_pSound, 1i64);
    this->m_pSound = 0i64;
  }
  m_pResourceContainer = this->m_pResourceContainer;
  if ( m_pResourceContainer )
  {
    BattleStageResourceContainer::dispose(this->m_pResourceContainer);
    operator delete(m_pResourceContainer, 0x30ui64);
    this->m_pResourceContainer = 0i64;
  }
  m_pAuroraVisionMessage = this->m_pAuroraVisionMessage;
  if ( m_pAuroraVisionMessage )
  {
    operator delete(m_pAuroraVisionMessage, v3);
    this->m_pAuroraVisionMessage = 0i64;
  }
  CollisionModel::release(&this->m_cullingViewModel);
  Myfirst = (AgLogger **)this->m_pLocalEvents._Mypair._Myval2._Myfirst;
  if ( Myfirst )
  {
    std::_Wrap_alloc<std::allocator<OGLShader *>>::deallocate(
      v7,
      Myfirst,
      ((char *)this->m_pLocalEvents._Mypair._Myval2._Myend - (char *)Myfirst) >> 3);
    this->m_pLocalEvents._Mypair._Myval2._Myfirst = 0i64;
    this->m_pLocalEvents._Mypair._Myval2._Mylast = 0i64;
    this->m_pLocalEvents._Mypair._Myval2._Myend = 0i64;
  }
  v9 = (AgLogger **)this->m_pGlobalEvents._Mypair._Myval2._Myfirst;
  if ( v9 )
  {
    std::_Wrap_alloc<std::allocator<OGLShader *>>::deallocate(
      v7,
      v9,
      ((char *)this->m_pGlobalEvents._Mypair._Myval2._Myend - (char *)v9) >> 3);
    this->m_pGlobalEvents._Mypair._Myval2._Myfirst = 0i64;
    this->m_pGlobalEvents._Mypair._Myval2._Mylast = 0i64;
    this->m_pGlobalEvents._Mypair._Myval2._Myend = 0i64;
  }
}

void __fastcall BattleStage::OnEventAkebonoKO(BattleStage *this)
{
  BattleStageResourceContainer *m_pResourceContainer; // rax

  m_pResourceContainer = this->m_pResourceContainer;
  if ( (!m_pResourceContainer || m_pResourceContainer->m_stageID != STAGE_ID_MAS)
    && !BattleStage::notifyEvent(this, TRIGGER1_AKEBONO_KO, TRIGGER2_NONE, 0i64, 1) )
  {
    BattleStage::notifyEvent(this, TRIGGER1_NEUTRAL, TRIGGER2_NONE, 0i64, 0);
  }
}

void __fastcall ActorWeapon::ActionFlagCheck(_SETJMP_FLOAT128 *JumpBuffer)
{
  ;
}

void __fastcall BattleStage::OnEventCharacterDamage(
        BattleStage *this,
        BattleEventHandler::Listener::SkillType skillType,
        PLAYER_ID playerID,
        int maxHp,
        int hp,
        int damage,
        int comboCount,
        const BattleEventHandler::Listener::CharacterStatus *pStatus)
{
  float characterPositionX; // xmm1_4
  float pairCharacterPositionX; // xmm0_4
  int characterNo; // er9
  int pairCharacterNo; // er10
  int v14; // ebx
  BattleStageResourceContainer *m_pResourceContainer; // rax
  int v16; // ecx
  __int64 v17; // r11
  __int64 v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // rcx
  _DWORD *v21; // rax
  __int64 v22; // rcx
  _DWORD *v23; // rax
  __int64 v24; // rax
  TknData::SceneTrigger2 v25; // ebx
  TknDataEventConditions::CheckParams pParams; // [rsp+30h] [rbp-38h] BYREF

  if ( skillType )
  {
    if ( pStatus )
    {
      characterPositionX = pStatus->characterPositionX;
      pairCharacterPositionX = pStatus->pairCharacterPositionX;
      characterNo = pStatus->characterNo;
      pairCharacterNo = pStatus->pairCharacterNo;
      pParams.eventCallCaracterPositionX = characterPositionX;
      pParams.pairCharacterPositionX = pairCharacterPositionX;
      pParams.eventCallCharacterID = characterNo;
      pParams.pairCharacterID = pairCharacterNo;
    }
    else
    {
      pairCharacterNo = pParams.pairCharacterID;
      characterPositionX = pParams.eventCallCaracterPositionX;
      characterNo = pParams.eventCallCharacterID;
    }
    v14 = 0;
    if ( hp <= 0 )
    {
      m_pResourceContainer = this->m_pResourceContainer;
      if ( m_pResourceContainer->m_bActived )
      {
        v16 = m_pResourceContainer->m_SceneTriggerCount - 1;
        if ( v16 >= 0 )
        {
          v17 = v16;
          v18 = (__int64)&m_pResourceContainer->m_pSceneTriggers[v16];
          do
          {
            v19 = *(_QWORD *)v18;
            if ( *(_DWORD *)(*(_QWORD *)v18 + 36i64) == 9 )
            {
              v20 = 0i64;
              if ( *(int *)(v19 + 64) <= 0 )
              {
LABEL_14:
                v22 = 0i64;
                if ( *(int *)(v19 + 68) <= 0 )
                {
LABEL_18:
                  if ( *(float *)(v19 + 72) <= characterPositionX && characterPositionX <= *(float *)(v19 + 76) )
                    return;
                }
                else
                {
                  v23 = *(_DWORD **)(v19 + 56);
                  while ( *v23 != pairCharacterNo )
                  {
                    ++v22;
                    ++v23;
                    if ( v22 >= *(int *)(v19 + 68) )
                      goto LABEL_18;
                  }
                }
              }
              else
              {
                v21 = *(_DWORD **)(v19 + 48);
                while ( *v21 != characterNo )
                {
                  ++v20;
                  ++v21;
                  if ( v20 >= *(int *)(v19 + 64) )
                    goto LABEL_14;
                }
              }
            }
            v18 -= 8i64;
            --v17;
          }
          while ( v17 >= 0 );
        }
      }
    }
    v24 = ((int)playerID ^ 1i64) + 21;
    if ( *((_DWORD *)&this->m_pGlobalEvents._Mypair._Myval2._Myfirst + 3 * v24) == 2 )
    {
      v25 = TRIGGER2_TEAMSELECT_HOST;
    }
    else
    {
      LOBYTE(v14) = *((_DWORD *)&this->__vftable + 3 * v24 + 1) != 1;
      v25 = v14 + 3;
    }
    if ( skillType > SKILLTYPE_NORMAL )
    {
      if ( skillType > SKILLTYPE_EX_SPECIAL )
      {
        if ( skillType != SKILLTYPE_SUPER_SP )
        {
          if ( skillType != SKILLTYPE_MAX_SUPER_SP )
          {
            if ( skillType != SKILLTYPE_CLIMAX_SP )
              return;
            BattleStage::notifyEvent(this, TRIGGER1_CLIMAX_SKILL_ATTACK_HIT, v25, &pParams, 1);
          }
          BattleStage::notifyEvent(this, TRIGGER1_MAX_SKILL_ATTACK_HIT, v25, &pParams, 1);
        }
        BattleStage::notifyEvent(this, TRIGGER1_SP_SKILL_ATACK_HIT, v25, &pParams, 1);
      }
      BattleStage::notifyEvent(this, TRIGGER1_SKILL_ATACK_HIT, v25, &pParams, 1);
    }
  }
}

void __fastcall BattleStage::OnEventCharacterStun(
        BattleStage *this,
        PLAYER_ID playerID,
        const BattleEventHandler::Listener::CharacterStatus *pStatus)
{
  int characterNo; // eax
  float pairCharacterPositionX; // xmm0_4
  int pairCharacterNo; // eax
  TknDataEventConditions::CheckParams pParams; // [rsp+30h] [rbp-28h] BYREF

  if ( pStatus )
  {
    characterNo = pStatus->characterNo;
    pParams.eventCallCaracterPositionX = pStatus->characterPositionX;
    pairCharacterPositionX = pStatus->pairCharacterPositionX;
    pParams.eventCallCharacterID = characterNo;
    pairCharacterNo = pStatus->pairCharacterNo;
    pParams.pairCharacterPositionX = pairCharacterPositionX;
    pParams.pairCharacterID = pairCharacterNo;
  }
  BattleStage::notifyEvent(this, TRIGGER1_CHARACTER_STUN, TRIGGER2_TEAMSELECT_NONE, &pParams, 1);
}

void __fastcall BattleStage::OnEventGroundHit(
        BattleStage *this,
        const BattleEventHandler::Listener::CharacterStatus *pStatus)
{
  int characterNo; // eax
  float pairCharacterPositionX; // xmm0_4
  int pairCharacterNo; // eax
  TknDataEventConditions::CheckParams pParams; // [rsp+30h] [rbp-28h] BYREF

  if ( pStatus )
  {
    characterNo = pStatus->characterNo;
    pParams.eventCallCaracterPositionX = pStatus->characterPositionX;
    pairCharacterPositionX = pStatus->pairCharacterPositionX;
    pParams.eventCallCharacterID = characterNo;
    pairCharacterNo = pStatus->pairCharacterNo;
    pParams.pairCharacterPositionX = pairCharacterPositionX;
    pParams.pairCharacterID = pairCharacterNo;
  }
  BattleStage::notifyEvent(this, TRIGGER1_CRASH_GROUND, TRIGGER2_NONE, &pParams, 1);
}

void __fastcall BattleStage::OnEventRoundEnd(
        BattleStage *this,
        BattleEventHandler::Listener::BattleResult battleResult,
        int time,
        const BattleEventHandler::Listener::CharacterStatus *pStatus)
{
  float characterPositionX; // xmm1_4
  float pairCharacterPositionX; // xmm0_4
  int characterNo; // er11
  int pairCharacterNo; // er10
  unsigned int v11; // ecx
  __int32 v12; // edx
  __int32 v13; // edx
  __int32 v14; // edx
  BattleStage::CharacterType characterType; // esi
  BattleStage::CharacterType v16; // edi
  TknData::SceneTrigger1 v17; // edx
  __int64 v18; // rdi
  TknData::SceneTrigger2 v19; // er8
  TknData::SceneTrigger2 v20; // eax
  TknDataEventConditions::CheckParams pParams; // [rsp+30h] [rbp-28h] BYREF

  if ( pStatus )
  {
    characterPositionX = pStatus->characterPositionX;
    pairCharacterPositionX = pStatus->pairCharacterPositionX;
    characterNo = pStatus->characterNo;
    pairCharacterNo = pStatus->pairCharacterNo;
    pParams.eventCallCaracterPositionX = characterPositionX;
    pParams.pairCharacterPositionX = pairCharacterPositionX;
    pParams.eventCallCharacterID = characterNo;
    pParams.pairCharacterID = pairCharacterNo;
  }
  else
  {
    pairCharacterPositionX = pParams.pairCharacterPositionX;
    pairCharacterNo = pParams.pairCharacterID;
    characterPositionX = pParams.eventCallCaracterPositionX;
    characterNo = pParams.eventCallCharacterID;
  }
  v11 = 0;
  if ( battleResult )
  {
    v12 = battleResult - 1;
    if ( v12 )
    {
      v13 = v12 - 1;
      if ( v13 )
      {
        v14 = v13 - 1;
        if ( v14 )
        {
          if ( v14 == 1 )
          {
            pParams.eventCallCaracterPositionX = pairCharacterPositionX;
            v11 = 1;
            pParams.pairCharacterPositionX = characterPositionX;
            pParams.eventCallCharacterID = pairCharacterNo;
            pParams.pairCharacterID = characterNo;
          }
        }
      }
    }
    else
    {
      LOBYTE(v11) = this->m_characterInfos[0].playerType == PLAYER_TYPE_PLAYER;
    }
  }
  else
  {
    LOBYTE(v11) = this->m_characterInfos[0].playerType != PLAYER_TYPE_PLAYER;
  }
  characterType = this->m_characterInfos[0].characterType;
  v16 = this->m_characterInfos[1].characterType;
  if ( battleResult == BATTLERESULT_DRAW_GAME )
  {
    BattleStage::notifyEvent(this, TRIGGER1_DRAW, TRIGGER2_TEAMSELECT_NONE, &pParams, 1);
    if ( characterType == CHARACTER_TYPE_HOST || v16 == CHARACTER_TYPE_HOST )
    {
      v17 = TRIGGER1_DRAW;
LABEL_22:
      BattleStage::notifyEvent(this, v17, TRIGGER2_TEADSELECT_NOT_HOST, &pParams, 1);
    }
  }
  else
  {
    v18 = v11;
    v19 = TRIGGER2_TEAMSELECT_PLAYER;
    if ( this->m_characterInfos[v11].playerType != PLAYER_TYPE_PLAYER )
      v19 = TRIGGER2_TEAMSELECT_ENEMY;
    BattleStage::notifyEvent(this, TRIGGER1_KO, v19, &pParams, 1);
    if ( this->m_characterInfos[v18].characterType == CHARACTER_TYPE_HOST )
      BattleStage::notifyEvent(this, TRIGGER1_KO, TRIGGER2_TEAMSELECT_HOST, &pParams, 1);
    if ( this->m_characterInfos[v18 ^ 1].characterType == CHARACTER_TYPE_HOST )
    {
      v17 = TRIGGER1_KO;
      goto LABEL_22;
    }
  }
  v20 = TknDataEventConditions::timeToTorigger(time);
  BattleStage::notifyEvent(this, TRIGGER1_KO_TIME, v20, &pParams, 1);
}

void __fastcall BattleStage::OnEventRoundStartFadeIn(BattleStage *this, STAGE_ID stageID, int round)
{
  TknData::SceneTrigger2 v4; // eax
  AppMain::SoundListIndex v5; // edx
  BattleStageEvent **Mylast; // rax
  BattleStageEvent **Myfirst; // rbx
  __int64 v8; // rdi
  unsigned __int64 v9; // r15
  const char *pSoundName; // rsi
  const extension::SoundObject *m_pSoundOptionParams; // rbp
  AppMain *v12; // r14

  if ( !this->m_bRestart )
  {
    v4 = BattleStage::roundToTrigger(this, round);
    if ( !BattleStage::notifyEvent(this, TRIGGER1_FADE_IN, v4, 0i64, 1) )
    {
      BattleStage::notifyEvent(this, TRIGGER1_NEUTRAL, TRIGGER2_NONE, 0i64, 0);
      Mylast = this->m_pGlobalEvents._Mypair._Myval2._Mylast;
      Myfirst = this->m_pGlobalEvents._Mypair._Myval2._Myfirst;
      v8 = 0i64;
      v9 = (unsigned __int64)((char *)Mylast - (char *)Myfirst + 7) >> 3;
      if ( Myfirst > Mylast )
        v9 = 0i64;
      if ( v9 )
      {
        do
        {
          pSoundName = (*Myfirst)->m_roundStartParams.pSoundName;
          if ( pSoundName )
          {
            m_pSoundOptionParams = (*Myfirst)->m_scriptParams.m_pSoundOptionParams;
            v12 = *(AppMain **)&AppMain::pApp;
            if ( !AppMain::Sound_IsPlayingSEByName(
                    *(AppMain **)&AppMain::pApp,
                    v5,
                    (*Myfirst)->m_roundStartParams.pSoundName,
                    m_pSoundOptionParams) )
              AppMain::Sound_PlaySEByName(v12, SoundList_Stage, pSoundName, m_pSoundOptionParams, 0i64);
          }
          ++Myfirst;
          ++v8;
        }
        while ( v8 != v9 );
      }
    }
  }
}

void __fastcall BattleStage::OnEventRoundStartGO(
        BattleStage *this,
        STAGE_ID stageID,
        int round,
        const BattleEventHandler::Listener::CharacterStatus *pStatus)
{
  int characterNo; // eax
  float pairCharacterPositionX; // xmm0_4
  int pairCharacterNo; // eax
  TknData::SceneTrigger2 v7; // eax
  BattleStage *v8; // r10
  TknDataEventConditions::CheckParams pParams; // [rsp+30h] [rbp-28h] BYREF

  if ( !this->m_bRestart )
  {
    if ( pStatus )
    {
      characterNo = pStatus->characterNo;
      pParams.eventCallCaracterPositionX = pStatus->characterPositionX;
      pairCharacterPositionX = pStatus->pairCharacterPositionX;
      pParams.eventCallCharacterID = characterNo;
      pairCharacterNo = pStatus->pairCharacterNo;
      pParams.pairCharacterPositionX = pairCharacterPositionX;
      pParams.pairCharacterID = pairCharacterNo;
    }
    v7 = BattleStage::roundToTrigger(this, round);
    BattleStage::notifyEvent(v8, TRIGGER1_GO, v7, &pParams, 1);
  }
}

void __fastcall BattleStage::OnEventRoundStartRound(
        BattleStage *this,
        STAGE_ID stageID,
        int round,
        const BattleEventHandler::Listener::CharacterStatus *pStatus)
{
  int characterNo; // eax
  float pairCharacterPositionX; // xmm0_4
  int pairCharacterNo; // eax
  TknData::SceneTrigger2 v7; // eax
  BattleStage *v8; // r10
  TknDataEventConditions::CheckParams pParams; // [rsp+30h] [rbp-28h] BYREF

  if ( !this->m_bRestart )
  {
    if ( pStatus )
    {
      characterNo = pStatus->characterNo;
      pParams.eventCallCaracterPositionX = pStatus->characterPositionX;
      pairCharacterPositionX = pStatus->pairCharacterPositionX;
      pParams.eventCallCharacterID = characterNo;
      pairCharacterNo = pStatus->pairCharacterNo;
      pParams.pairCharacterPositionX = pairCharacterPositionX;
      pParams.pairCharacterID = pairCharacterNo;
    }
    v7 = BattleStage::roundToTrigger(this, round);
    BattleStage::notifyEvent(v8, TRIGGER1_ROUND_START, v7, &pParams, 1);
  }
}

void __fastcall BattleStage::OnEventRoundStartTalkOut(BattleStage *this, STAGE_ID stageID, int round)
{
  TknData::SceneTrigger2 v3; // eax
  BattleStage *v4; // r10

  if ( !this->m_bRestart )
  {
    v3 = BattleStage::roundToTrigger(this, round);
    BattleStage::notifyEvent(v4, TRIGGER1_TALK_OUT, v3, 0i64, 1);
  }
}

void __fastcall BattleStage::OnEventRoundStartTalkStart(BattleStage *this, STAGE_ID stageID, int round)
{
  TknData::SceneTrigger2 v3; // eax
  BattleStage *v4; // r10

  if ( !this->m_bRestart )
  {
    v3 = BattleStage::roundToTrigger(this, round);
    BattleStage::notifyEvent(v4, TRIGGER1_TALK_START, v3, 0i64, 1);
  }
}

void __fastcall BattleStage::OnEventTimeup(
        BattleStage *this,
        const BattleEventHandler::Listener::CharacterStatus *pStatus)
{
  int characterNo; // eax
  float pairCharacterPositionX; // xmm0_4
  int pairCharacterNo; // eax
  TknDataEventConditions::CheckParams pParams; // [rsp+30h] [rbp-28h] BYREF

  if ( pStatus )
  {
    characterNo = pStatus->characterNo;
    pParams.eventCallCaracterPositionX = pStatus->characterPositionX;
    pairCharacterPositionX = pStatus->pairCharacterPositionX;
    pParams.eventCallCharacterID = characterNo;
    pairCharacterNo = pStatus->pairCharacterNo;
    pParams.pairCharacterPositionX = pairCharacterPositionX;
    pParams.pairCharacterID = pairCharacterNo;
  }
  BattleStage::notifyEvent(this, TRIGGER1_TIME_UP, TRIGGER2_NONE, &pParams, 1);
  if ( this->m_characterInfos[0].characterType == CHARACTER_TYPE_HOST
    || this->m_characterInfos[1].characterType == CHARACTER_TYPE_HOST )
  {
    BattleStage::notifyEvent(this, TRIGGER1_TIME_UP, TRIGGER2_TEAMSELECT_HOST, &pParams, 1);
    BattleStage::notifyEvent(this, TRIGGER1_TIME_UP, TRIGGER2_TEADSELECT_NOT_HOST, &pParams, 1);
  }
}

void __fastcall BattleStage::OnEventWallHit(
        BattleStage *this,
        const BattleEventHandler::Listener::CharacterStatus *pStatus)
{
  int characterNo; // eax
  float pairCharacterPositionX; // xmm0_4
  int pairCharacterNo; // eax
  TknDataEventConditions::CheckParams pParams; // [rsp+30h] [rbp-28h] BYREF

  if ( pStatus )
  {
    characterNo = pStatus->characterNo;
    pParams.eventCallCaracterPositionX = pStatus->characterPositionX;
    pairCharacterPositionX = pStatus->pairCharacterPositionX;
    pParams.eventCallCharacterID = characterNo;
    pairCharacterNo = pStatus->pairCharacterNo;
    pParams.pairCharacterPositionX = pairCharacterPositionX;
    pParams.pairCharacterID = pairCharacterNo;
  }
  BattleStage::notifyEvent(this, TRIGGER1_CRASH_WALL, TRIGGER2_NONE, &pParams, 1);
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

void __fastcall BattleStage::callEffectManagers(
        BattleStage *this,
        std::function<void __cdecl(EffectDataListManager &)> *func)
{
  std::function<void __cdecl(EffectDataListManager &)> *v2; // rbx
  BattleStageResourceContainer *m_pResourceContainer; // rcx
  __int64 v5; // rdx
  EffectDataListManager **EffectManager; // rsi
  int EffectManagerCount; // eax
  __int64 v8; // rbp
  __int64 i; // rdi
  std::_Func_base<void,EffectDataListManager &> *v10; // rcx
  std::function<void __cdecl(EffectDataListManager &)> *v11; // rcx
  std::function<void __cdecl(EffectDataListManager &)> *v12; // rcx

  v2 = func;
  m_pResourceContainer = this->m_pResourceContainer;
  if ( m_pResourceContainer && m_pResourceContainer->m_bActived )
  {
    EffectManager = BattleStageResourceContainer::getEffectManager(m_pResourceContainer);
    if ( EffectManager )
    {
      EffectManagerCount = BattleStageResourceContainer::getEffectManagerCount(this->m_pResourceContainer);
      v8 = EffectManagerCount;
      for ( i = 0i64; i < v8; v10->_Do_call(v10, EffectManager[i++]) )
      {
        v10 = v2->_Mystorage._Ptrs[7];
        if ( !v10 )
          std::_Xbad_function_call();
      }
    }
    v11 = (std::function<void __cdecl(EffectDataListManager &)> *)v2->_Mystorage._Ptrs[7];
    if ( v11 )
    {
      LOBYTE(v5) = v11 != v2;
      ((void (__fastcall *)(std::function<void __cdecl(EffectDataListManager &)> *, __int64))v11->_Mystorage._Ptrs[0][4].__vftable)(
        v11,
        v5);
      v2->_Mystorage._Ptrs[7] = 0i64;
    }
  }
  else
  {
    v12 = (std::function<void __cdecl(EffectDataListManager &)> *)func->_Mystorage._Ptrs[7];
    if ( v12 )
    {
      LOBYTE(func) = v12 != func;
      ((void (__fastcall *)(std::function<void __cdecl(EffectDataListManager &)> *, std::function<void __cdecl(EffectDataListManager &)> *))v12->_Mystorage._Ptrs[0][4].__vftable)(
        v12,
        func);
      v2->_Mystorage._Ptrs[7] = 0i64;
    }
  }
}

BattleStageEvent *__fastcall BattleStage::createEvent(BattleStage *this, BSDataEvent *pDataEvent, int triggerPriority)
{
  BSDataObject *m_pObject; // r14
  float x; // xmm12_4
  float y; // xmm13_4
  float z; // xmm14_4
  float v10; // xmm11_4
  float v11; // xmm10_4
  float v12; // xmm7_4
  float v13; // xmm2_4
  float v14; // xmm3_4
  float v15; // xmm4_4
  float v16; // xmm7_4
  float v17; // xmm6_4
  float v18; // xmm0_4
  float v19; // xmm10_4
  float v20; // xmm6_4
  float v21; // xmm0_4
  float v22; // xmm11_4
  float v23; // xmm6_4
  float v24; // xmm0_4
  __int64 v25; // rax
  __int64 v26; // rdi
  TknData::OjectAnimationType m_animationType; // eax
  __m128 v28; // xmm6
  __int128 v29; // xmm7
  __int128 v30; // xmm8
  __int128 v31; // xmm9
  BSDataModel *m_pModel; // rbx
  TknData::SceneRegistCategory m_sceneRegistCategory; // eax
  bool v34; // r14
  OGLModel *StageModel; // rax
  OGLModel *v36; // rax
  int EffectManagerCount; // ebx
  __int64 v38; // rdx
  OGLMatrix In; // [rsp+38h] [rbp-D0h] BYREF
  OGLMatrix v41; // [rsp+78h] [rbp-90h] BYREF
  __int64 v42; // [rsp+B8h] [rbp-50h]
  BattleStageEvent *v43; // [rsp+188h] [rbp+80h]
  OGLModel *v44; // [rsp+188h] [rbp+80h]

  v42 = -2i64;
  m_pObject = pDataEvent->m_pObject;
  x = m_pObject->m_position.x;
  y = m_pObject->m_position.y;
  z = m_pObject->m_position.z;
  v10 = m_pObject->m_direction.x;
  v11 = m_pObject->m_direction.y;
  v12 = m_pObject->m_direction.z;
  v13 = m_pObject->m_scale.x;
  v14 = m_pObject->m_scale.y;
  v15 = m_pObject->m_scale.z;
  *(_QWORD *)v41.m = 1065353216i64;
  v41.m[4] = 0.0;
  *(_QWORD *)&v41.m[8] = 0i64;
  *(_QWORD *)&v41.m[12] = 0i64;
  *(_QWORD *)&v41.m[5] = 1065353216i64;
  *(_QWORD *)&v41.m[2] = 0i64;
  *(_QWORD *)&v41.m[10] = 1065353216i64;
  v41.m[14] = 0.0;
  v41.m[7] = 0.0;
  v41.m[15] = 1.0;
  In.m[1] = 0.0;
  *(_QWORD *)&In.m[2] = 0i64;
  In.m[4] = 0.0;
  *(_QWORD *)&In.m[6] = 0i64;
  *(_QWORD *)&In.m[8] = 0i64;
  In.m[11] = 0.0;
  *(_QWORD *)&In.m[12] = 0i64;
  In.m[14] = 0.0;
  In.m[0] = v13;
  In.m[5] = v14;
  In.m[10] = v15;
  In.m[15] = 1.0;
  OGLMatrix::multiplyFast(&v41, &In);
  v16 = (float)(v12 * 3.1415927) / 180.0;
  v17 = sinf(v16);
  v18 = cosf(v16);
  *(_QWORD *)&In.m[2] = 0i64;
  *(_QWORD *)&In.m[6] = 0i64;
  *(_QWORD *)&In.m[8] = 0i64;
  In.m[11] = 0.0;
  *(_QWORD *)&In.m[12] = 0i64;
  In.m[14] = 0.0;
  In.m[0] = v18;
  LODWORD(In.m[4]) = LODWORD(v17) ^ _xmm;
  In.m[1] = v17;
  In.m[5] = v18;
  In.m[10] = 1.0;
  In.m[15] = 1.0;
  OGLMatrix::multiplyFast(&v41, &In);
  v19 = (float)(v11 * 3.1415927) / 180.0;
  v20 = sinf(v19);
  v21 = cosf(v19);
  In.m[1] = 0.0;
  In.m[3] = 0.0;
  In.m[4] = 0.0;
  *(_QWORD *)&In.m[6] = 0i64;
  In.m[9] = 0.0;
  In.m[11] = 0.0;
  *(_QWORD *)&In.m[12] = 0i64;
  In.m[14] = 0.0;
  In.m[0] = v21;
  In.m[8] = v20;
  In.m[5] = 1.0;
  LODWORD(In.m[2]) = LODWORD(v20) ^ _xmm;
  In.m[10] = v21;
  In.m[15] = 1.0;
  OGLMatrix::multiplyFast(&v41, &In);
  v22 = (float)(v10 * 3.1415927) / 180.0;
  v23 = sinf(v22);
  v24 = cosf(v22);
  In.m[1] = 0.0;
  *(_QWORD *)&In.m[2] = 0i64;
  In.m[4] = 0.0;
  In.m[7] = 0.0;
  In.m[8] = 0.0;
  In.m[11] = 0.0;
  *(_QWORD *)&In.m[12] = 0i64;
  In.m[14] = 0.0;
  In.m[0] = 1.0;
  In.m[5] = v24;
  LODWORD(In.m[9]) = LODWORD(v23) ^ _xmm;
  In.m[6] = v23;
  In.m[10] = v24;
  In.m[15] = 1.0;
  OGLMatrix::multiplyFast(&v41, &In);
  In.m[1] = 0.0;
  *(_QWORD *)&In.m[2] = 0i64;
  In.m[4] = 0.0;
  *(_QWORD *)&In.m[6] = 0i64;
  *(_QWORD *)&In.m[8] = 0i64;
  In.m[11] = 0.0;
  In.m[0] = 1.0;
  In.m[12] = x;
  In.m[5] = 1.0;
  In.m[13] = y;
  In.m[10] = 1.0;
  In.m[14] = z;
  In.m[15] = 1.0;
  OGLMatrix::multiplyFast(&v41, &In);
  v43 = (BattleStageEvent *)operator new(0x270ui64);
  BattleStageEvent::BattleStageEvent(v43, this->m_pResourceContainer, this->m_pSound, m_pObject);
  v26 = v25;
  m_animationType = pDataEvent->m_animationType;
  v28 = *(__m128 *)&v41.m[12];
  v29 = *(_OWORD *)&v41.m[8];
  v30 = *(_OWORD *)&v41.m[4];
  v31 = *(_OWORD *)v41.m;
  switch ( m_animationType )
  {
    case OBJECT_ANIMATION_MODEL:
      m_pModel = m_pObject->m_pModel;
      m_sceneRegistCategory = m_pObject->m_sceneRegistCategory;
      v34 = m_sceneRegistCategory == SCENE_REGIST_STAGE;
      if ( m_sceneRegistCategory )
      {
        v44 = (OGLModel *)operator new(0x2498ui64);
        OGLModel::OGLModel(v44);
        StageModel = BSUtil::cloneOGLModel(m_pModel->m_pOGLModel, v36);
        if ( StageModel )
        {
          LODWORD(StageModel->m_vPosition.x) = v28.m128_i32[0];
          LODWORD(StageModel->m_vPosition.y) = _mm_shuffle_ps(v28, v28, 85).m128_u32[0];
          LODWORD(StageModel->m_vPosition.z) = _mm_shuffle_ps(v28, v28, 170).m128_u32[0];
          *(_OWORD *)StageModel->m_mWorld.m = v31;
          *(_OWORD *)&StageModel->m_mWorld.m[4] = v30;
          *(_OWORD *)&StageModel->m_mWorld.m[8] = v29;
          *(__m128 *)&StageModel->m_mWorld.m[12] = v28;
          StageModel->m_bPostureChange = 1;
          *(_DWORD *)&StageModel->m_createShadowFlg = 0;
          StageModel->m_lowAccuracyShadowBias = 0;
          StageModel->m_bPrevBoneMirrorFlg = 0;
        }
      }
      else
      {
        StageModel = BattleStageResourceContainer::getStageModel(
                       this->m_pResourceContainer,
                       m_pModel->m_stageModelIndex - 1);
      }
      BattleStageEvent::setupModel((BattleStageEvent *)v26, StageModel, v34);
      goto LABEL_13;
    case OBJECT_ANIMATION_EFFECT:
      EffectManagerCount = BattleStageResourceContainer::getEffectManagerCount(this->m_pResourceContainer);
      BattleStageResourceContainer::getEffectManager(this->m_pResourceContainer);
      BattleStageEvent::clear((BattleStageEvent *)v26);
      *(_BYTE *)(v26 + 44) = 1;
      *(_DWORD *)(v26 + 80) = 2;
      *(_QWORD *)(v26 + 112) = v38;
      *(_DWORD *)(v26 + 120) = EffectManagerCount;
      goto LABEL_13;
    case OBJECT_ANIMATION_BILLBOARD:
      BattleStageEvent::clear((BattleStageEvent *)v26);
      *(_BYTE *)(v26 + 44) = 1;
      *(_DWORD *)(v26 + 80) = 3;
      goto LABEL_13;
    case OBJECT_ANIMATION_SOUND:
      BattleStageEvent::setupSound((BattleStageEvent *)v26);
LABEL_13:
      if ( v26 )
      {
        *(_OWORD *)(v26 + 144) = v31;
        *(_OWORD *)(v26 + 160) = v30;
        *(_OWORD *)(v26 + 176) = v29;
        *(__m128 *)(v26 + 192) = v28;
        BattleStageEvent::changeEvent((BattleStageEvent *)v26, pDataEvent, triggerPriority, 0, 0);
      }
      return (BattleStageEvent *)v26;
  }
  if ( v26 )
  {
    (**(void (__fastcall ***)(__int64, __int64))v26)(v26, 1i64);
    return 0i64;
  }
  return (BattleStageEvent *)v26;
}

void __fastcall BattleStage::cullingTest(BattleStage *this, const OGLMatrix *matProjection, const OGLMatrix *matView)
{
  BattleStageResourceContainer *m_pResourceContainer; // rax
  BattleStageEvent **i; // rbx
  BattleStageEvent *v6; // rdi
  BattleStageEvent **j; // rbx
  BattleStageEvent *v8; // rdi

  m_pResourceContainer = this->m_pResourceContainer;
  if ( m_pResourceContainer && m_pResourceContainer->m_bActived )
  {
    CollisionModel::setupFrustumModel(&this->m_cullingViewModel, matProjection, matView);
    for ( i = this->m_pGlobalEvents._Mypair._Myval2._Myfirst; i != this->m_pGlobalEvents._Mypair._Myval2._Mylast; ++i )
    {
      v6 = *i;
      v6->m_bCullingVisible = !(*i)->m_bUseCulling
                           || CollisionModel::collisionTest(&this->m_cullingViewModel, &v6->m_cullingModel);
    }
    for ( j = this->m_pLocalEvents._Mypair._Myval2._Myfirst; j != this->m_pLocalEvents._Mypair._Myval2._Mylast; ++j )
    {
      v8 = *j;
      v8->m_bCullingVisible = !(*j)->m_bUseCulling
                           || CollisionModel::collisionTest(&this->m_cullingViewModel, &v8->m_cullingModel);
    }
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

void __fastcall BattleStage::dispose(BattleStage *this)
{
  StageAdditionalFunction_MobShadow *m_pAdditionalFuncton_MobShadow; // rcx
  BattleStageEvent **Myfirst; // rbx
  BattleStageEvent *v4; // rsi
  BattleStageEvent **v5; // rbx
  BattleStageEvent *v6; // rsi

  m_pAdditionalFuncton_MobShadow = this->m_pAdditionalFuncton_MobShadow;
  if ( m_pAdditionalFuncton_MobShadow )
  {
    ((void (__fastcall *)(StageAdditionalFunction_MobShadow *, __int64))m_pAdditionalFuncton_MobShadow->~StageAdditionalFunction_MobShadow)(
      m_pAdditionalFuncton_MobShadow,
      1i64);
    this->m_pAdditionalFuncton_MobShadow = 0i64;
  }
  Myfirst = this->m_pGlobalEvents._Mypair._Myval2._Myfirst;
  while ( Myfirst != this->m_pGlobalEvents._Mypair._Myval2._Mylast )
  {
    v4 = *Myfirst;
    memmove(Myfirst, Myfirst + 1, (char *)this->m_pGlobalEvents._Mypair._Myval2._Mylast - (char *)(Myfirst + 1));
    --this->m_pGlobalEvents._Mypair._Myval2._Mylast;
    if ( v4 )
      ((void (__fastcall *)(BattleStageEvent *, __int64))v4->~BattleStageShader)(v4, 1i64);
  }
  this->m_pGlobalEvents._Mypair._Myval2._Mylast = this->m_pGlobalEvents._Mypair._Myval2._Myfirst;
  v5 = this->m_pLocalEvents._Mypair._Myval2._Myfirst;
  while ( v5 != this->m_pLocalEvents._Mypair._Myval2._Mylast )
  {
    v6 = *v5;
    memmove(v5, v5 + 1, (char *)this->m_pLocalEvents._Mypair._Myval2._Mylast - (char *)(v5 + 1));
    --this->m_pLocalEvents._Mypair._Myval2._Mylast;
    if ( v6 )
      ((void (__fastcall *)(BattleStageEvent *, __int64))v6->~BattleStageShader)(v6, 1i64);
  }
  this->m_pLocalEvents._Mypair._Myval2._Mylast = this->m_pLocalEvents._Mypair._Myval2._Myfirst;
  BattleStageResourceContainer::dispose(this->m_pResourceContainer);
  this->m_bResourcesInitialized = 0;
}

void __fastcall BattleStage::draw(BattleStage *this)
{
  BattleStageResourceContainer *m_pResourceContainer; // rax
  BattleStage *v3; // rdx
  __int64 v4; // r8
  int v5; // er9
  BattleStageEvent **i; // rbx
  BattleStageEvent *v7; // rdi
  BattleStageEvent **j; // rbx
  BattleStageEvent *v9; // rdi
  StageAdditionalFunction_MobShadow *m_pAdditionalFuncton_MobShadow; // rcx

  m_pResourceContainer = this->m_pResourceContainer;
  if ( m_pResourceContainer && m_pResourceContainer->m_bActived && this->m_bResourcesInitialized )
  {
    BattleStageShader::setShaderParams(m_pResourceContainer->m_stageID);
    for ( i = this->m_pGlobalEvents._Mypair._Myval2._Myfirst; i != this->m_pGlobalEvents._Mypair._Myval2._Mylast; ++i )
    {
      v7 = *i;
      if ( (*i)->m_bCullingVisible
        && v7->m_bPermissionDrawCall
        && v7->m_bActive
        && v7->m_bVisible
        && v7->m_selectAnimationIndex >= 0
        && v7->m_contentsType == CONTENTS_TYPE_MODEL )
      {
        BattleStageEvent::setupRenderParams(*i);
        BattleStageEvent::renderModel(v7);
      }
    }
    for ( j = this->m_pLocalEvents._Mypair._Myval2._Myfirst; j != this->m_pLocalEvents._Mypair._Myval2._Mylast; ++j )
    {
      v9 = *j;
      if ( (*j)->m_bCullingVisible
        && v9->m_bPermissionDrawCall
        && v9->m_bActive
        && v9->m_bVisible
        && v9->m_selectAnimationIndex >= 0
        && v9->m_contentsType == CONTENTS_TYPE_MODEL )
      {
        BattleStageEvent::setupRenderParams(*j);
        BattleStageEvent::renderModel(v9);
      }
    }
    m_pAdditionalFuncton_MobShadow = this->m_pAdditionalFuncton_MobShadow;
    if ( m_pAdditionalFuncton_MobShadow )
      StageAdditionalFunction_MobShadow::draw(m_pAdditionalFuncton_MobShadow, v3, v4, v5);
  }
}

void __fastcall BattleStage::drawDirectRendring(BattleStage *this)
{
  BattleStageResourceContainer *m_pResourceContainer; // rax
  BattleStageEvent **i; // rbx
  BattleStageEvent **j; // rbx

  m_pResourceContainer = this->m_pResourceContainer;
  if ( m_pResourceContainer && m_pResourceContainer->m_bActived && this->m_bResourcesInitialized )
  {
    BattleStageShader::setShaderParams(m_pResourceContainer->m_stageID);
    for ( i = this->m_pGlobalEvents._Mypair._Myval2._Myfirst; i != this->m_pGlobalEvents._Mypair._Myval2._Mylast; ++i )
      BattleStageEvent::drawDirectRendring(*i);
    for ( j = this->m_pLocalEvents._Mypair._Myval2._Myfirst; j != this->m_pLocalEvents._Mypair._Myval2._Mylast; ++j )
      BattleStageEvent::drawDirectRendring(*j);
  }
}

OGLModel *__fastcall BattleStage::getGimmickOGLModel(BattleStage *this, int index)
{
  BattleStageEvent **Myfirst; // rax
  BattleStageEvent **Mylast; // r8
  BattleStageEvent *v6; // rdx
  int v7; // ecx
  BattleStageEvent **i; // rax
  BattleStageEvent *v10; // r8
  int v11; // edx
  StageAdditionalFunction_MobShadow *m_pAdditionalFuncton_MobShadow; // r8
  __int64 m_shadowModelCount; // rdx
  __int64 v14; // r10
  int v15; // ecx
  StageAdditionalFunction_MobShadow::ShadowParams **p_pShadows; // rax
  StageAdditionalFunction_MobShadow::ShadowModelParams *m_pShadowModels; // rcx
  __int64 v18; // rdx
  __int64 v19; // r8
  int v20; // eax

  Myfirst = this->m_pGlobalEvents._Mypair._Myval2._Myfirst;
  Mylast = this->m_pGlobalEvents._Mypair._Myval2._Mylast;
  while ( Myfirst != Mylast )
  {
    v6 = *Myfirst;
    if ( (*Myfirst)->m_pOGLModel )
    {
      if ( !v6->m_bStageModel )
      {
        v7 = index--;
        if ( v7 <= 0 )
          return v6->m_pOGLModel;
      }
    }
    ++Myfirst;
  }
  for ( i = this->m_pLocalEvents._Mypair._Myval2._Myfirst; i != this->m_pLocalEvents._Mypair._Myval2._Mylast; ++i )
  {
    v10 = *i;
    if ( (*i)->m_pOGLModel )
    {
      if ( !v10->m_bStageModel )
      {
        v11 = index--;
        if ( v11 <= 0 )
          return v10->m_pOGLModel;
      }
    }
  }
  m_pAdditionalFuncton_MobShadow = this->m_pAdditionalFuncton_MobShadow;
  if ( !m_pAdditionalFuncton_MobShadow || !m_pAdditionalFuncton_MobShadow->m_bEnable )
    return 0i64;
  m_shadowModelCount = m_pAdditionalFuncton_MobShadow->m_shadowModelCount;
  v14 = 0i64;
  v15 = 0;
  if ( m_shadowModelCount > 0 )
  {
    p_pShadows = &m_pAdditionalFuncton_MobShadow->m_pShadowModels->pShadows;
    do
    {
      if ( *(p_pShadows - 2) && *p_pShadows )
        ++v15;
      p_pShadows += 5;
      --m_shadowModelCount;
    }
    while ( m_shadowModelCount );
  }
  if ( v15 <= index )
    return 0i64;
  if ( m_pAdditionalFuncton_MobShadow->m_shadowModelCount > 0 )
  {
    m_pShadowModels = m_pAdditionalFuncton_MobShadow->m_pShadowModels;
    v18 = 0i64;
    v19 = m_pAdditionalFuncton_MobShadow->m_shadowModelCount;
    while ( 1 )
    {
      if ( m_pShadowModels->pOGLModelShadow )
      {
        if ( m_pShadowModels->pShadows )
        {
          v20 = index--;
          if ( v20 <= 0 )
            break;
        }
      }
      ++v18;
      ++m_pShadowModels;
      if ( v18 >= v19 )
        return (OGLModel *)v14;
    }
    return m_pShadowModels->pOGLModelShadow;
  }
  return (OGLModel *)v14;
}

__int64 __fastcall BattleStage::getGimmickOGLModelCount(BattleStage *this)
{
  BattleStageEvent **Myfirst; // rax
  int v2; // er10
  BattleStageEvent **Mylast; // rdx
  unsigned int i; // er8
  BattleStageEvent **v6; // rax
  BattleStageEvent **j; // rcx
  StageAdditionalFunction_MobShadow *m_pAdditionalFuncton_MobShadow; // rax
  __int64 m_shadowModelCount; // rcx
  StageAdditionalFunction_MobShadow::ShadowParams **p_pShadows; // rax

  Myfirst = this->m_pGlobalEvents._Mypair._Myval2._Myfirst;
  v2 = 0;
  Mylast = this->m_pGlobalEvents._Mypair._Myval2._Mylast;
  for ( i = 0; Myfirst != Mylast; ++Myfirst )
  {
    if ( (*Myfirst)->m_pOGLModel && !(*Myfirst)->m_bStageModel )
      ++i;
  }
  v6 = this->m_pLocalEvents._Mypair._Myval2._Myfirst;
  for ( j = this->m_pLocalEvents._Mypair._Myval2._Mylast; v6 != j; ++v6 )
  {
    if ( (*v6)->m_pOGLModel && !(*v6)->m_bStageModel )
      ++i;
  }
  m_pAdditionalFuncton_MobShadow = this->m_pAdditionalFuncton_MobShadow;
  if ( !m_pAdditionalFuncton_MobShadow || !m_pAdditionalFuncton_MobShadow->m_bEnable )
    return i;
  m_shadowModelCount = m_pAdditionalFuncton_MobShadow->m_shadowModelCount;
  if ( m_shadowModelCount > 0 )
  {
    p_pShadows = &m_pAdditionalFuncton_MobShadow->m_pShadowModels->pShadows;
    do
    {
      if ( *(p_pShadows - 2) )
      {
        if ( *p_pShadows )
          ++v2;
      }
      p_pShadows += 5;
      --m_shadowModelCount;
    }
    while ( m_shadowModelCount );
  }
  return v2 + i;
}

bool __fastcall BattleStage::isGimmickOGLModelLocalLight(BattleStage *this, int index)
{
  BattleStageEvent **Myfirst; // rax
  BattleStageEvent **Mylast; // r8
  BattleStageEvent *v6; // rdx
  int v7; // ecx
  BSDataEvent *m_pEvent; // rax
  BSDataObject *m_pObject; // rax
  BSDataModel *m_pModel; // rax
  BattleStageEvent **i; // rax
  BattleStageEvent *v13; // r8
  int v14; // edx

  Myfirst = this->m_pGlobalEvents._Mypair._Myval2._Myfirst;
  Mylast = this->m_pGlobalEvents._Mypair._Myval2._Mylast;
  while ( 1 )
  {
    if ( Myfirst == Mylast )
    {
      for ( i = this->m_pLocalEvents._Mypair._Myval2._Myfirst; i != this->m_pLocalEvents._Mypair._Myval2._Mylast; ++i )
      {
        v13 = *i;
        if ( (*i)->m_pOGLModel )
        {
          if ( !v13->m_bStageModel )
          {
            v14 = index--;
            if ( v14 <= 0 )
            {
              m_pEvent = v13->m_pEvent;
              goto LABEL_8;
            }
          }
        }
      }
      return 0;
    }
    v6 = *Myfirst;
    if ( (*Myfirst)->m_pOGLModel )
    {
      if ( !v6->m_bStageModel )
      {
        v7 = index--;
        if ( v7 <= 0 )
          break;
      }
    }
    ++Myfirst;
  }
  m_pEvent = v6->m_pEvent;
LABEL_8:
  if ( m_pEvent )
  {
    m_pObject = m_pEvent->m_pObject;
    if ( m_pObject )
    {
      m_pModel = m_pObject->m_pModel;
      if ( m_pModel )
        return m_pModel->m_bUseLocalLight;
    }
  }
  return 0;
}

bool __fastcall BattleStage::loadResources(BattleStage *this, const StageProjectData *stageProj, STAGE_ID stageID)
{
  int v7; // eax
  BattleStageResourceContainer *m_pResourceContainer; // rcx

  if ( !this->m_pResourceContainer )
    return 1;
  BattleStage::dispose(this);
  v7 = clock();
  m_pResourceContainer = this->m_pResourceContainer;
  BSUtil::g_randomSeed = v7;
  return BattleStageResourceContainer::loadResources(m_pResourceContainer, stageProj, stageID);
}

bool __fastcall BattleStage::notifyEvent(
        BattleStage *this,
        TknData::SceneTrigger1 trigger1,
        TknData::SceneTrigger2 trigger2,
        const TknDataEventConditions::CheckParams *pParams,
        bool bPriorityCheck)
{
  BattleStageResourceContainer *m_pResourceContainer; // rcx
  bool result; // al
  __int64 v8; // rbx
  BSDataScene *v9; // r14
  int v10; // er15
  __int64 m_globalEventCount; // rdi
  bool v12; // si
  BattleStageEvent **Myfirst; // rcx
  BSDataEvent *v14; // r10
  BattleStageEvent **Mylast; // rax
  BSDataEvent *m_pEvent; // rdx
  int v17; // edx
  __int64 m_localEventCount; // rbp
  __int64 i; // rsi
  BattleStageEvent *Event; // rax
  BattleStageEvent **v21; // rdx
  BattleStageEvent *v22; // rdi
  BattleStageEvent **v23; // rcx
  __int64 v24; // rdi
  BattleStageEvent **v25; // rdx
  BattleStageEvent **v26; // rax
  BattleStageEvent **j; // rdx
  BattleStageEvent *v28; // r11
  BSDataEvent *v29; // rbx
  BattleStageEvent **v30; // rcx
  BattleStageEvent **v31; // rax
  BattleStageEvent *v32; // r8
  const char *m_pBindModelBoneName; // rdi
  OGLFigure *m_pFigure; // rax
  int m_uiBoneCount; // ecx
  __int64 v36; // r11
  __int64 v37; // rbx
  unsigned __int8 **p_m_cName; // r10
  const char *v39; // rax
  signed __int64 v40; // r9
  int v41; // ecx
  int v42; // er8
  BSDataScene *v43; // [rsp+30h] [rbp-38h] BYREF
  BattleStageEvent *triggerPriority; // [rsp+70h] [rbp+8h] BYREF

  m_pResourceContainer = this->m_pResourceContainer;
  if ( !m_pResourceContainer || !m_pResourceContainer->m_bActived )
    return 0;
  v43 = 0i64;
  LODWORD(triggerPriority) = 0;
  result = BattleStageResourceContainer::findScene(
             m_pResourceContainer,
             &v43,
             (int *)&triggerPriority,
             trigger1,
             trigger2,
             pParams);
  if ( result )
  {
    v8 = 0i64;
    v9 = v43;
    v10 = (int)triggerPriority;
    m_globalEventCount = v43->m_globalEventCount;
    if ( m_globalEventCount > 0 )
    {
      v12 = bPriorityCheck;
      do
      {
        Myfirst = this->m_pGlobalEvents._Mypair._Myval2._Myfirst;
        v14 = v9->m_pGlobalEvent[v8];
        Mylast = this->m_pGlobalEvents._Mypair._Myval2._Mylast;
        if ( Myfirst != Mylast )
        {
          while ( 1 )
          {
            m_pEvent = (*Myfirst)->m_pEvent;
            v17 = m_pEvent ? m_pEvent->m_pObject->m_uniqueID : 0;
            if ( v17 == v14->m_objectUID )
              break;
            if ( ++Myfirst == Mylast )
              goto LABEL_14;
          }
          BattleStageEvent::changeEvent(*Myfirst, v14, v10, v12, 0);
        }
LABEL_14:
        ++v8;
      }
      while ( v8 < m_globalEventCount );
    }
    m_localEventCount = v9->m_localEventCount;
    for ( i = 0i64; i < m_localEventCount; ++i )
    {
      Event = BattleStage::createEvent(this, v9->m_pLocalEvent[i], v10);
      v21 = this->m_pLocalEvents._Mypair._Myval2._Mylast;
      v22 = Event;
      triggerPriority = Event;
      if ( &triggerPriority >= v21 || (v23 = this->m_pLocalEvents._Mypair._Myval2._Myfirst, v23 > &triggerPriority) )
      {
        if ( v21 == this->m_pLocalEvents._Mypair._Myval2._Myend )
          std::vector<BattleStageEvent *>::_Reserve(
            (std::vector<void (__cdecl*)(extension::exsound_detail::SoundBankParser::BinaryParseState &,extension::exsound_detail::SoundChannelDefinition &),std::allocator<void (__cdecl*)(extension::exsound_detail::SoundBankParser::BinaryParseState &,extension::exsound_detail::SoundChannelDefinition &)> > *)&this->m_pLocalEvents,
            (unsigned __int64)v21);
        v26 = this->m_pLocalEvents._Mypair._Myval2._Mylast;
        if ( v26 )
          *v26 = v22;
      }
      else
      {
        v24 = &triggerPriority - v23;
        if ( v21 == this->m_pLocalEvents._Mypair._Myval2._Myend )
          std::vector<BattleStageEvent *>::_Reserve(
            (std::vector<void (__cdecl*)(extension::exsound_detail::SoundBankParser::BinaryParseState &,extension::exsound_detail::SoundChannelDefinition &),std::allocator<void (__cdecl*)(extension::exsound_detail::SoundBankParser::BinaryParseState &,extension::exsound_detail::SoundChannelDefinition &)> > *)&this->m_pLocalEvents,
            (unsigned __int64)v21);
        v25 = this->m_pLocalEvents._Mypair._Myval2._Mylast;
        if ( v25 )
          *v25 = this->m_pLocalEvents._Mypair._Myval2._Myfirst[v24];
      }
      ++this->m_pLocalEvents._Mypair._Myval2._Mylast;
    }
    for ( j = this->m_pGlobalEvents._Mypair._Myval2._Myfirst; j != this->m_pGlobalEvents._Mypair._Myval2._Mylast; ++j )
    {
      v28 = *j;
      v29 = (*j)->m_pEvent;
      if ( v29->m_pObject->m_bUseBindObject )
      {
        v28->m_pBindEvent = 0i64;
        v30 = this->m_pGlobalEvents._Mypair._Myval2._Mylast;
        v31 = this->m_pGlobalEvents._Mypair._Myval2._Myfirst;
        if ( v31 != v30 )
        {
          while ( 1 )
          {
            v32 = *v31;
            if ( (*v31)->m_pEvent->m_objectUID == v29->m_pObject->m_bindObjectUID )
              break;
            if ( ++v31 == v30 )
              goto LABEL_45;
          }
          v28->m_pBindEvent = v32;
          if ( v32 )
          {
            m_pBindModelBoneName = v29->m_pObject->m_pBindModelBoneName;
            if ( m_pBindModelBoneName )
            {
              m_pFigure = v32->m_pOGLModel->m_pFigure;
              if ( m_pFigure )
              {
                m_uiBoneCount = m_pFigure->m_uiBoneCount;
                if ( m_uiBoneCount )
                {
                  v36 = 0i64;
                  if ( m_uiBoneCount > 0 )
                  {
                    v37 = (int)m_pFigure->m_uiBoneCount;
                    p_m_cName = &m_pFigure->m_pBone->m_cName;
                    do
                    {
                      v39 = (const char *)*p_m_cName;
                      if ( *p_m_cName )
                      {
                        v40 = m_pBindModelBoneName - v39;
                        do
                        {
                          v41 = (unsigned __int8)v39[v40];
                          v42 = *(unsigned __int8 *)v39 - v41;
                          if ( v42 )
                            break;
                          ++v39;
                        }
                        while ( v41 );
                        if ( !v42 )
                          break;
                      }
                      ++v36;
                      p_m_cName += 29;
                    }
                    while ( v36 < v37 );
                  }
                }
              }
            }
          }
        }
      }
LABEL_45:
      ;
    }
    return 1;
  }
  return result;
}

void __fastcall BattleStage::resoucesInitialize(BattleStage *this)
{
  char *m_pAuroraVisionMessage; // rdx
  unsigned __int64 v3; // rdx
  char *v4; // rcx

  if ( !this->m_bResourcesInitialized )
  {
    m_pAuroraVisionMessage = this->m_pAuroraVisionMessage;
    this->m_bResourcesInitialized = 1;
    if ( m_pAuroraVisionMessage )
    {
      BattleStageResourceContainer::setAuroraVisionMessage(this->m_pResourceContainer, m_pAuroraVisionMessage);
      v4 = this->m_pAuroraVisionMessage;
      if ( v4 )
      {
        operator delete(v4, v3);
        this->m_pAuroraVisionMessage = 0i64;
      }
    }
  }
}

__int64 __fastcall BattleStage::roundToTrigger(BattleStage *this, int round)
{
  __int64 result; // rax

  switch ( round )
  {
    case -2:
      result = 12i64;
      break;
    case -1:
      result = 8i64;
      break;
    case 0:
      result = 7i64;
      break;
    case 1:
      result = 9i64;
      break;
    case 2:
      result = 10i64;
      break;
    case 3:
      result = 11i64;
      break;
    default:
      result = 0i64;
      break;
  }
  return result;
}

void __fastcall BattleStage::setAuroraVisionMessage(BattleStage *this, const char *pMessage)
{
  const char *v3; // rbx
  char *m_pAuroraVisionMessage; // rcx
  __int64 v5; // rax
  int v6; // eax
  char *v7; // rax
  char v8; // cl

  v3 = pMessage;
  m_pAuroraVisionMessage = this->m_pAuroraVisionMessage;
  if ( m_pAuroraVisionMessage )
  {
    operator delete(m_pAuroraVisionMessage, (unsigned __int64)pMessage);
    this->m_pAuroraVisionMessage = 0i64;
  }
  this->m_pAuroraVisionMessage = 0i64;
  if ( v3 )
  {
    v5 = -1i64;
    do
      ++v5;
    while ( v3[v5] );
    v6 = v5 + 1;
    if ( v6 > 0 )
    {
      v7 = (char *)operator new[](v6);
      this->m_pAuroraVisionMessage = v7;
      if ( v7 )
      {
        do
        {
          v8 = *v3++;
          *v7++ = v8;
        }
        while ( v8 );
      }
    }
  }
}

char __fastcall BattleStage::setupParameters(
        BattleStage *this,
        extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> *stageModels)
{
  extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body *m_ptr; // rcx
  extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body *v6; // rcx
  extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body *v7; // rcx
  extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body *v8; // rcx
  BattleStageResourceContainer *m_pResourceContainer; // rax
  int v10; // er14
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r13
  __int64 v14; // r12
  __int64 i; // rbp
  BattleStageEvent *Event; // rdi
  BattleStageEvent **Mylast; // rdx
  BattleStageEvent **Myfirst; // rcx
  __int64 v19; // rdi
  BattleStageEvent **v20; // rcx
  BattleStageEvent **v21; // rax
  extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> v22; // [rsp+38h] [rbp-60h] BYREF
  extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> v23; // [rsp+48h] [rbp-50h] BYREF
  StageAdditionalFunction_MobShadow *v24; // [rsp+A0h] [rbp+8h]
  BattleStageEvent *v25; // [rsp+B0h] [rbp+18h] BYREF

  if ( !this->m_pResourceContainer )
  {
    m_ptr = stageModels->m_body.m_ptr;
    goto LABEL_3;
  }
  v22.m_isNoCache = stageModels->m_isNoCache;
  v6 = stageModels->m_body.m_ptr;
  v22.m_body.m_ptr = v6;
  if ( v6 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)&v6->m_refCount.m_ptr->m_sharedCount, 1ui64);
  if ( !BattleStageResourceContainer::isCheckResource(this->m_pResourceContainer, &v22) )
  {
    m_ptr = stageModels->m_body.m_ptr;
LABEL_3:
    if ( m_ptr )
    {
      if ( _InterlockedExchangeAdd64(
             (volatile signed __int64 *)&m_ptr->m_refCount.m_ptr->m_sharedCount,
             0xFFFFFFFFFFFFFFFFui64) == 1 )
        ((void (__fastcall *)(extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body *, __int64))m_ptr->~RefCountableWeakSupportBase)(
          m_ptr,
          1i64);
    }
    return 1;
  }
  v23.m_isNoCache = stageModels->m_isNoCache;
  v7 = stageModels->m_body.m_ptr;
  v23.m_body.m_ptr = v7;
  if ( v7 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)&v7->m_refCount.m_ptr->m_sharedCount, 1ui64);
  if ( BattleStageResourceContainer::setupParameters(this->m_pResourceContainer, &v23) )
  {
    m_pResourceContainer = this->m_pResourceContainer;
    if ( !m_pResourceContainer->m_bActived )
    {
      extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::~BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>((extension::exsound_detail::SoundBankParser *)stageModels);
      return 1;
    }
    this->m_bChangeColor = 0;
    this->m_bResourcesInitialized = 0;
    this->m_updateCount = 0;
    this->m_bRestart = 0;
    if ( m_pResourceContainer->m_bActived )
    {
      v10 = m_pResourceContainer->m_SceneTriggerCount - 1;
      if ( v10 >= 0 )
      {
        v11 = v10;
        v12 = (__int64)&m_pResourceContainer->m_pSceneTriggers[v10];
        while ( *(_DWORD *)(*(_QWORD *)v12 + 36i64) )
        {
          --v10;
          v12 -= 8i64;
          if ( --v11 < 0 )
            goto LABEL_40;
        }
        v13 = *(_QWORD *)(*(_QWORD *)v12 + 104i64);
        v14 = *(int *)(v13 + 32);
        for ( i = 0i64; i < v14; ++i )
        {
          Event = BattleStage::createEvent(this, *(BSDataEvent **)(*(_QWORD *)(v13 + 64) + 8 * i), v10);
          v25 = Event;
          Mylast = this->m_pGlobalEvents._Mypair._Myval2._Mylast;
          if ( &v25 >= Mylast || (Myfirst = this->m_pGlobalEvents._Mypair._Myval2._Myfirst, Myfirst > &v25) )
          {
            if ( Mylast == this->m_pGlobalEvents._Mypair._Myval2._Myend )
              std::vector<BattleStageEvent *>::_Reserve(
                (std::vector<void (__cdecl*)(extension::exsound_detail::SoundBankParser::BinaryParseState &,extension::exsound_detail::SoundChannelDefinition &),std::allocator<void (__cdecl*)(extension::exsound_detail::SoundBankParser::BinaryParseState &,extension::exsound_detail::SoundChannelDefinition &)> > *)&this->m_pGlobalEvents,
                (unsigned __int64)Mylast);
            v21 = this->m_pGlobalEvents._Mypair._Myval2._Mylast;
            if ( v21 )
              *v21 = Event;
          }
          else
          {
            v19 = &v25 - Myfirst;
            if ( Mylast == this->m_pGlobalEvents._Mypair._Myval2._Myend )
              std::vector<BattleStageEvent *>::_Reserve(
                (std::vector<void (__cdecl*)(extension::exsound_detail::SoundBankParser::BinaryParseState &,extension::exsound_detail::SoundChannelDefinition &),std::allocator<void (__cdecl*)(extension::exsound_detail::SoundBankParser::BinaryParseState &,extension::exsound_detail::SoundChannelDefinition &)> > *)&this->m_pGlobalEvents,
                (unsigned __int64)Mylast);
            v20 = this->m_pGlobalEvents._Mypair._Myval2._Mylast;
            if ( v20 )
              *v20 = this->m_pGlobalEvents._Mypair._Myval2._Myfirst[v19];
          }
          ++this->m_pGlobalEvents._Mypair._Myval2._Mylast;
        }
        BattleStageSound::changePlayingStage(this->m_pSound, this->m_pResourceContainer->m_stageID);
        BattleStage::notifyEvent(this, TRIGGER1_NEUTRAL, TRIGGER2_NONE, 0i64, 1);
        if ( !this->m_pAdditionalFuncton_MobShadow )
        {
          v24 = (StageAdditionalFunction_MobShadow *)operator new(0x20ui64);
          v24->__vftable = (StageAdditionalFunction_MobShadow_vtbl *)&StageAdditionalFunction_MobShadow::`vftable';
          v24->m_bEnable = 0;
          v24->m_pShadowModels = 0i64;
          v24->m_shadowModelCount = 0;
          this->m_pAdditionalFuncton_MobShadow = v24;
        }
        StageAdditionalFunction_MobShadow::setup(this->m_pAdditionalFuncton_MobShadow, this);
        m_ptr = stageModels->m_body.m_ptr;
        goto LABEL_3;
      }
    }
LABEL_40:
    extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::~BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>((extension::exsound_detail::SoundBankParser *)stageModels);
  }
  else
  {
    v8 = stageModels->m_body.m_ptr;
    if ( v8
      && _InterlockedExchangeAdd64(
           (volatile signed __int64 *)&v8->m_refCount.m_ptr->m_sharedCount,
           0xFFFFFFFFFFFFFFFFui64) == 1 )
    {
      ((void (__fastcall *)(extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body *, __int64))v8->~RefCountableWeakSupportBase)(
        v8,
        1i64);
    }
  }
  return 0;
}

void __fastcall BattleStage::update(BattleStage *this, float advanceFrame)
{
  extension::AsyncStatus::Step v2; // edx
  BattleStageResourceContainer *m_pResourceContainer; // rax
  BattleStageEvent **i; // rbx
  BattleStageEvent **Myfirst; // rbx
  char *v7; // rbp
  BattleStageEvent *v8; // rsi
  BattleStageResourcePack *m_pResourcPack; // rcx
  extension::AsyncContent<StageResources> *m_ptr; // rax
  extension::AsyncContent<StageResources> *v11; // rbx
  StageResources *Myval2; // r14
  EffectDataListManager **pEffectManagers; // r14
  BattleStageResourcePack *v14; // rcx
  extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body *v15; // rbx
  extension::AsyncContent<StageResources> *v16; // rax
  extension::AsyncContent<StageResources> *v17; // rbx
  int effectManagerCount; // ecx
  __int64 v19; // rbx
  __int64 v20; // rsi
  BattleStageEvent **v21; // rax
  BattleStageEvent **Mylast; // rcx
  int v23; // er8
  float v24; // xmm2_4
  float v25; // xmm3_4
  float j; // xmm4_4
  float *v27; // rdx
  BattleStageEvent **v28; // rax
  BattleStageEvent **k; // rcx
  float *v30; // rdx
  __int64 v31; // rcx
  StageAdditionalFunction_MobShadow *m_pAdditionalFuncton_MobShadow; // rbx

  m_pResourceContainer = this->m_pResourceContainer;
  if ( m_pResourceContainer && m_pResourceContainer->m_bActived )
  {
    ++this->m_updateCount;
    for ( i = this->m_pGlobalEvents._Mypair._Myval2._Myfirst; i != this->m_pGlobalEvents._Mypair._Myval2._Mylast; ++i )
      BattleStageEvent::update(*i, this->m_updateCount, advanceFrame);
    Myfirst = this->m_pLocalEvents._Mypair._Myval2._Myfirst;
    if ( Myfirst != this->m_pLocalEvents._Mypair._Myval2._Mylast )
    {
      v7 = (char *)(Myfirst + 1);
      do
      {
        v8 = *Myfirst;
        BattleStageEvent::update(*Myfirst, this->m_updateCount, advanceFrame);
        if ( v8->m_bActive )
        {
          ++Myfirst;
          v7 += 8;
        }
        else
        {
          memmove(Myfirst, v7, (char *)this->m_pLocalEvents._Mypair._Myval2._Mylast - v7);
          --this->m_pLocalEvents._Mypair._Myval2._Mylast;
          ((void (__fastcall *)(BattleStageEvent *, __int64))v8->~BattleStageShader)(v8, 1i64);
        }
      }
      while ( Myfirst != this->m_pLocalEvents._Mypair._Myval2._Mylast );
    }
    m_pResourcPack = this->m_pResourceContainer->m_pResourcPack;
    if ( m_pResourcPack )
    {
      m_ptr = m_pResourcPack->datas.m_body.m_ptr->m_content.m_ptr;
      if ( m_ptr )
      {
        if ( !m_ptr->m_isDataReleased )
        {
          v11 = m_pResourcPack->datas.m_body.m_ptr->m_content.m_ptr;
          if ( m_ptr->m_isDataReleased )
          {
            Myval2 = 0i64;
          }
          else
          {
            if ( (m_ptr->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
              extension::AsyncStatus::waitFor(&m_ptr->m_status, v2);
            Myval2 = v11->m_data._Mypair._Myval2;
          }
          pEffectManagers = Myval2->pEffectManagers;
          if ( pEffectManagers )
          {
            v14 = this->m_pResourceContainer->m_pResourcPack;
            if ( v14 && (v15 = v14->datas.m_body.m_ptr, (v16 = v15->m_content.m_ptr) != 0i64) && !v16->m_isDataReleased )
            {
              v17 = v15->m_content.m_ptr;
              if ( v16->m_isDataReleased )
              {
                effectManagerCount = MEMORY[0x1A8];
              }
              else
              {
                if ( (v16->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
                  extension::AsyncStatus::waitFor(&v16->m_status, v2);
                effectManagerCount = v17->m_data._Mypair._Myval2->effectManagerCount;
              }
            }
            else
            {
              effectManagerCount = 0;
            }
            v19 = 0i64;
            v20 = effectManagerCount;
            while ( v19 < v20 )
              EffectDataListManager::update(pEffectManagers[v19++]);
          }
        }
      }
    }
    v21 = this->m_pGlobalEvents._Mypair._Myval2._Myfirst;
    Mylast = this->m_pGlobalEvents._Mypair._Myval2._Mylast;
    v23 = 0;
    v24 = 0.0;
    v25 = 0.0;
    for ( j = 0.0; v21 != Mylast; ++v21 )
    {
      v27 = (float *)*v21;
      if ( (*v21)->m_scriptColorR != 0.0 || v27[145] != 0.0 || v27[146] != 0.0 )
      {
        j = j + v27[144];
        v25 = v25 + v27[145];
        v24 = v24 + v27[146];
        ++v23;
      }
    }
    v28 = this->m_pLocalEvents._Mypair._Myval2._Myfirst;
    for ( k = this->m_pLocalEvents._Mypair._Myval2._Mylast; v28 != k; ++v28 )
    {
      v30 = (float *)*v28;
      if ( (*v28)->m_scriptColorR != 0.0 || v30[145] != 0.0 || v30[146] != 0.0 )
      {
        j = j + v30[144];
        v25 = v25 + v30[145];
        v24 = v24 + v30[146];
        ++v23;
      }
    }
    if ( v23 <= 0 )
    {
      if ( this->m_bChangeColor )
      {
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)&AppMain::pApp + 80i64) + 800i64) = 0;
        this->m_bChangeColor = 0;
      }
    }
    else
    {
      v31 = *(_QWORD *)(*(_QWORD *)&AppMain::pApp + 80i64);
      *(_DWORD *)(v31 + 800) = 1065353216;
      *(float *)(v31 + 788) = j / (float)v23;
      *(float *)(v31 + 792) = v25 / (float)v23;
      *(float *)(v31 + 796) = v24 / (float)v23;
      this->m_bChangeColor = 1;
    }
    m_pAdditionalFuncton_MobShadow = this->m_pAdditionalFuncton_MobShadow;
    if ( m_pAdditionalFuncton_MobShadow )
    {
      if ( m_pAdditionalFuncton_MobShadow->m_bEnable )
      {
        StageAdditionalFunction_MobShadow::updateShadowTransform(this->m_pAdditionalFuncton_MobShadow);
        StageAdditionalFunction_MobShadow::updateVertex(m_pAdditionalFuncton_MobShadow);
      }
    }
  }
}

