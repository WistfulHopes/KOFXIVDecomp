#include "dev/silverware/git/sdk/agsingleton.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/cameracheck.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector4unaligned.h"
#include "dev/silverware/git/sdk/agmutex.inl"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/stdexcept"
#include "dev/kof/master/development/source/baseproject/jni/game/check/freecameracheck.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/utility"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threadcheck.h"
#include "dev/silverware/git/sdk/agcondition.inl"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textlayout.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_image.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/vecidx_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/iosfwd"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/map"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdata/effectdata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "program files (x86)/windows kits/8.1/include/um/winuser.h"
#include "dev/silverware/git/sdk/memory/agallocators.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/floatinvec.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtree"
#include "dev/silverware/git/sdk/input/agcontrollercomponent.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/savedatadefine.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/chartdata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogleffect.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/texstring.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steam_api.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/tuple"
#include "dev/kof/master/development/source/ps4project/baseproject/pcutil/pcdummy.h"
#include "dev/silverware/git/sdk/util/agdelegate.h"
#include "dev/silverware/git/sdk/agreferencecount.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_new.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestageutil.h"
#include "dev/kof/master/development/source/baseproject/jni/game/cpuseq/battlecpu.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdata/effectappdata.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_movie.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/quat_aos.h"
#include "dev/kof/master/development/source/baseproject/jni/game/cpuseq/sequencecontroller.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_operation.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogllight.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/bitset"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/floatinvec.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "dev/silverware/git/sdk/agrectangle.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestage.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/translate_table.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstddef"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/tkndata.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/shared_lua_context.h"
#include "dev/kof/master/development/source/baseproject/jni/game/system/battlesysteminfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_screentoworld.h"
#include "dev/silverware/git/sdk/util/agservicecommand.h"
#include "dev/silverware/git/sdk/agvector2.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/type_traits"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_vec64.h"
#include "dev/silverware/git/sdk/agmath.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/silverware/git/sdk/input/agcontroller.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_strokeraa.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_scale9grid.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exwaitcondition.h"
#include "dev/silverware/git/sdk/system/aguser.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraystaticbuff.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/cameramotionpreviewsettings.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/stageprojectdata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "dev/silverware/git/sdk/agstring.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/combomissionjudge.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cxform.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_math.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/mutex"
#include "dev/silverware/git/sdk/util/agdebugchannels.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/string"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/chrono"
#include "dev/kof/master/development/source/baseproject/jni/game/network/chkdiscononlinesv.h"
#include "dev/silverware/git/sdk/util/agperformancecounter.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/libcommon.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/vec_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/limits"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestagedatas.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/matchingsystem.h"
#include "dev/silverware/git/sdk/agclock.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/tkndatas.h"
#include "dev/silverware/git/sdk/3rdparty/steam/matchmakingtypes.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/ios"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/tween.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaprojectdataformat.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocnum"
#include "dev/silverware/git/sdk/system/agsysteminfo.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charabasestatusformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_event.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xiosbase"
#include "dev/kof/master/development/source/baseproject/jni/game/check/inputkeyrecord.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/png_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_keycodes.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocale"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "program files (x86)/windows kits/8.1/include/um/winbase.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocinfo"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/mat_aos.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_hashkey.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshkey.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixstate.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_gradients.h"
#include "dev/silverware/git/sdk/agmovieplayer.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/debug/logging.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vector"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_rasterizer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_viewport.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/heapmemory.h"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/bodypush.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_missiondataloading.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_drawableimage.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/mutex.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thread"
#include "dev/kof/master/development/source/baseproject/jni/game/network/netmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hal.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_buffer.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/memory"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory"
#include "dev/kof/master/development/source/baseproject/jni/game/network/leaderboard.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thr/xthread"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_characterdef.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_manager.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/globalheapmemory.h"
#include "dev/silverware/git/sdk/filesystem/agmount.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/fixmemory.h"
#include "dev/silverware/git/sdk/filesystem/agdirectory.h"
#include "dev/silverware/git/sdk/input/agsdlmappingparser.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/operationmapper.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/matrix4unaligned.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/particledata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filters.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/quat_aos.h"
#include "dev/silverware/git/sdk/platforms/pc/system/agpcsysteminfo.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/easingnumber.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/weapon/actorweapon.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filterparams.h"
#include "dev/kof/master/development/source/baseproject/jni/game/system/battlecontroller.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_font.h"
#include "dev/silverware/git/sdk/agreferencecountinl.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleonlinewatching.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actionsystem.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaactiondataformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessdefs.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charafilebase.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatapacked.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_pathdatapacker.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleloading.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_linebuffer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_highlight.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/commanddataformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_profiler.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exthread.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_sse.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/bilinkable.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_states.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steamclientpublic.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/tga_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_statebag.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/titlestoragesystem.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_ps4modelroom.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic0.h"
#include "dev/kof/master/development/source/baseproject/jni/game/appmain.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_simplemeshcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/fontprovider/render_fontproviderwinapi.h"
#include "dev/silverware/git/sdk/agdisplay.h"
#include "dev/silverware/git/sdk/agvector4.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/variableheapmemorybase.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/asynccharafileload.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/future_asset.h"
#include "dev/silverware/git/sdk/agvector3.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/math.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/asyncjob.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_bundle.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector2unaligned.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/atomic_int.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestageresourcecontainer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloatmp.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/atomic"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestageshader.h"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/hitrectcollection.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapemeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/jpeg_imagefile.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic.h"
#include "dev/silverware/git/sdk/agmemorystream.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treetext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefileutil.h"
#include "dev/silverware/git/sdk/agmemorypool.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_functions.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/trainingsetting.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/combomissionattackeventlistener.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charamaterialsettingformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_docview.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/rapper/graphicsopt.h"
#include "dev/silverware/git/sdk/input/agcontrollerbuttoncomponent.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "dev/silverware/git/sdk/agpointerinl.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/fix32.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_range.h"
#include "dev/silverware/git/sdk/agstream.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actorcharabase.h"
#include "dev/silverware/git/sdk/system/agusermanager.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/physicalheapmemory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlehud.h"
#include "dev/kof/master/development/source/baseproject/jni/game/define/charabonedefine.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "dev/silverware/git/sdk/agsemaphore.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_hash.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battleeventhandler.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/colorholder.h"
#include "dev/silverware/git/sdk/agsemaphore.inl"
#include "dev/silverware/git/sdk/agconditionvariable.h"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/damagesetting.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/condition_variable"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix4x4.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/battleplayerinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixpool.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shader.h"
#include "dev/silverware/git/sdk/util/agservice.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_sgmlparser.h"
#include "dev/silverware/git/sdk/agthreadpool.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/deque"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actionblackout.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_context.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_constants.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessgen.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treeshape.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessellator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmodel.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/cpusequencedataformat.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglcurve.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/refcountable.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/shot/actorshot.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actorchara.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/boolinvec.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/time.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/commandcheck.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "dev/kof/master/development/source/baseproject/jni/game/util/restrictringbuffer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitivebundle.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treecachenode.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/jobmanager.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/materialshowcontrol.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treenode.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_loader.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cacheeffect.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_system.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphfitter.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglsprite.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/syncmenuimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefile.h"
#include "program files (x86)/windows kits/8.1/include/shared/guiddef.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/savedata.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/moviedatadefine.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_player.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charahitrectformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_types.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglrender.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector3unaligned.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_resource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/silverware/git/sdk/aghash.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/mediamanager.h"
#include "program files (x86)/windows kits/8.1/include/shared/stralign.h"
#include "dev/silverware/git/sdk/agstringutils.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglfog.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglbone.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_stroker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/dds_imagefile.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/audiopresenter.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleonline.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_typeinfo.h"
#include "dev/silverware/git/sdk/agcondition.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textmeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/input/imesystem.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/resourcemanager.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actor.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphparam.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xxatomic"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xfacet"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xutility"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charadataunify.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcache.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/unordered_map"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaattackdataformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcacheconfig.h"
#include "dev/silverware/git/sdk/3rdparty/steam/isteamhtmlsurface.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/vec_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/list"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charadamagesettingformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hairliner.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xhash"
#include "dev/silverware/git/sdk/filesystem/agfile.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/boolinvec.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_filterdesc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_styledtext.h"
#include "dev/silverware/git/sdk/filesystem/agpath.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix3x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_core.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_queue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "dev/silverware/git/sdk/agreferenceinl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_fontmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitive.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_prefightfaceoff.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocaddr.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmirror.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/vectormath_aos.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_radixtree.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdatalistmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_twips.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectcommon.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_containers.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_wwhelper.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/mediasound.h"
#include "program files (x86)/windows kits/8.1/include/um/winnt.h"
#include "dev/silverware/git/sdk/agreferencedobjectinl.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/functional"
#include "dev/silverware/git/sdk/agpointer.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/hidpad/hidpadsystem.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exlockable.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/drawhelper/drawhelper_vertexbuffer.h"
#include "program files (x86)/windows kits/8.1/include/shared/basetsd.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstring"
#include "dev/kof/master/development/source/baseproject/jni/game/util/soundutil.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/drawhelper/drawhelper.h"
#include "dev/silverware/git/sdk/agreferencedobject.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/combomissiondataformat.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/sounddata.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/soundgroupdataformat.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/effect.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory0"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/errorchecker.h"
#include "dev/kof/master/development/source/baseproject/jni/game/network/playtogether.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_bank.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/exception"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_vertex.h"
#include "dev/silverware/git/sdk/agconditionvariable.inl"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/fontprovider/render_fontproviderhud.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_wstring.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglshader.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_exception.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/mat_aos.h"
#include "dev/silverware/git/sdk/agthread.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/shaderfxhelper.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/randommt.h"
#include "dev/silverware/git/sdk/agmutex.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/array"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlecall/battlecall.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/effect/actoreffect.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actorobject.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "dev/silverware/git/sdk/agscopedlock.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_debug.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steam_api_internal.h"
#include "dev/kof/master/development/source/ps4project/baseproject/pcutil/pccontrolsmanager.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/algorithm"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actoroption.h"
#include "dev/silverware/git/sdk/input/aginputmanager.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/system_error"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/drawhelper/drawhelper.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/appmain.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/rapper/graphicsopt.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/image/graphics.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/core/glstate.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogltexture.cpp"

std::piecewise_construct_t std::piecewise_construct; // 0x14088C4FF
void DrawHelperVertexBuffer::releaseImpl(); // 0x1400D1D10
void DrawHelperVertexBuffer::changeBufferSize(long imageIndex, DrawHelper::ERenderMode::Type renderMode, long size); // 0x1400D1E20
void DrawHelperVertexBuffer::draw(long imageID, long _rx, long _ry, const _C_CONV & rect, const DrawHelper::DrawParams & params, bool nonNeoScaleUp); // 0x1400D2010
void DrawHelperVertexBuffer::drawStack(); // 0x1400D2530
void DrawHelperVertexBuffer::setClip(long x, long y, long width, long height); // 0x1400D27F0
void DrawHelperVertexBuffer::clearClip(); // 0x1400D1750
long DrawHelperVertexBuffer::getImageID(Image * pImage); // 0x1400D2880
void DrawHelperVertexBuffer::drawConv(long imageID, long _rx, long _ry, const _C_CONV & rect, const DrawHelper::DrawParams & params, bool nonNeoScaleUp); // 0x1400D28E0
DrawHelper::ImageInfo * DrawHelperVertexBuffer::createImageInfo(long imageID); // 0x1400D2C10
DrawHelper::ImageInfo * DrawHelperVertexBuffer::getImageInfo(long imageID); // 0x1400D2D80
void DrawHelperVertexBuffer::draw(DrawHelper::ERenderMode::Type renderMode, DrawHelperVertexBuffer::RenderInfo & renderInfo); // 0x1400D2DD0//decompilation failure at 14088C4FF!
void __fastcall DrawHelperVertexBuffer::changeBufferSize(
        DrawHelperVertexBuffer *this,
        int imageIndex,
        DrawHelper::ERenderMode::Type renderMode,
        int size)
{
  __int64 v5; // rsi
  __int64 v7; // rdi
  char *v8; // rsi
  void *v9; // rdi
  void *v10; // rbp
  void *v11; // rax
  void *v12; // rax
  unsigned __int64 v13; // rdx
  __int64 v14; // rax
  unsigned __int64 v15; // rdx
  unsigned int *m_pIndexBuffer; // rcx
  int v17; // edi
  int v18; // ecx
  unsigned int *v19; // rax
  __int64 v20; // r8
  int v21; // edx
  unsigned int *v22; // rcx
  int v23; // eax

  v5 = renderMode;
  v7 = imageIndex;
  if ( !this->isError(this) && (int)v7 >= 0 && this->m_renderInfoCount > (int)v7 )
  {
    v8 = (char *)&this->m_pRenderInfos[v7] + 32 * v5;
    if ( *((_DWORD *)v8 + 6) < size && size > 0 )
    {
      v9 = (void *)*((_QWORD *)v8 + 2);
      *((_DWORD *)v8 + 6) = size;
      v10 = (void *)*((_QWORD *)v8 + 1);
      v11 = operator new[](saturated_mul(12 * size, 4ui64));
      *((_QWORD *)v8 + 1) = v11;
      if ( !v11 )
        this->m_bError = 1;
      v12 = operator new[](saturated_mul(8 * *((_DWORD *)v8 + 6), 4ui64));
      *((_QWORD *)v8 + 2) = v12;
      if ( !v12 )
        this->m_bError = 1;
      if ( !this->isError(this) )
      {
        v14 = *((int *)v8 + 9);
        if ( (int)v14 > 0 )
        {
          memmove(*((void **)v8 + 1), v10, 48 * v14);
          memmove(*((void **)v8 + 2), v9, 32i64 * *((int *)v8 + 9));
        }
      }
      if ( v10 )
        operator delete(v10, v13);
      if ( v9 )
        operator delete(v9, v13);
      if ( !this->isError(this) && this->m_indexBufferSize <= *((_DWORD *)v8 + 6) )
      {
        m_pIndexBuffer = this->m_pIndexBuffer;
        v17 = 0;
        if ( m_pIndexBuffer )
        {
          operator delete(m_pIndexBuffer, v15);
          this->m_pIndexBuffer = 0i64;
        }
        v18 = *((_DWORD *)v8 + 6);
        this->m_indexBufferSize = v18;
        v19 = (unsigned int *)operator new[](saturated_mul(6 * v18, 4ui64));
        this->m_pIndexBuffer = v19;
        if ( v19 )
        {
          if ( this->m_indexBufferSize > 0 )
          {
            v20 = 0i64;
            v21 = 2;
            do
            {
              v22 = &this->m_pIndexBuffer[v20];
              ++v17;
              v20 += 6i64;
              *v22 = v21 - 2;
              v22[3] = v21 - 1;
              v22[1] = v21 - 1;
              v23 = v21 + 1;
              v22[5] = v21;
              v22[2] = v21;
              v21 += 4;
              v22[4] = v23;
            }
            while ( v17 < this->m_indexBufferSize );
          }
        }
        else
        {
          this->m_bError = 1;
        }
      }
    }
  }
}

void __fastcall DrawHelperVertexBuffer::clearClip(DrawHelperVertexBuffer *this)
{
  this->m_clip.bClip = 0;
}

DrawHelperVertexBuffer::RenderInfo *__fastcall DrawHelperVertexBuffer::createImageInfo(
        DrawHelperVertexBuffer *this,
        int imageID)
{
  __int64 v2; // rbp
  unsigned __int64 m_renderInfoCount; // r14
  DrawHelperVertexBuffer::RenderInfo *m_pRenderInfos; // rbx
  unsigned __int64 v6; // rsi
  DrawHelperVertexBuffer::RenderInfo *v7; // rax
  unsigned __int64 v8; // rdx
  __int64 v9; // rcx
  DrawHelperVertexBuffer::RenderInfo *v10; // r9
  DrawHelperVertexBuffer::RenderInfo::Stack **p_pStacks; // r8
  DrawHelperVertexBuffer::RenderInfo::Stack **v12; // rax
  DrawHelperVertexBuffer::RenderInfo *v13; // rax
  __int128 v14; // xmm0

  v2 = imageID;
  if ( imageID < 0 )
    return 0i64;
  m_renderInfoCount = this->m_renderInfoCount;
  if ( (int)m_renderInfoCount <= imageID )
  {
    m_pRenderInfos = this->m_pRenderInfos;
    this->m_renderInfoCount = imageID + 8;
    v6 = imageID + 8;
    v7 = (DrawHelperVertexBuffer::RenderInfo *)operator new[](saturated_mul(v6, 0x58ui64));
    v9 = 0i64;
    v10 = v7;
    if ( v7 )
    {
      if ( (_DWORD)v2 != -8 )
      {
        p_pStacks = &v7->pStacks;
        do
        {
          --v6;
          *(p_pStacks - 9) = 0i64;
          v8 = 2i64;
          v12 = p_pStacks - 8;
          do
          {
            *v12 = 0i64;
            v12[1] = 0i64;
            *((_DWORD *)v12 + 4) = 0;
            *((_DWORD *)v12 + 5) = -1;
            v12[3] = (DrawHelperVertexBuffer::RenderInfo::Stack *)1065353216;
            v12 += 4;
            --v8;
          }
          while ( v8 );
          *p_pStacks = 0i64;
          p_pStacks[1] = 0i64;
          p_pStacks += 11;
        }
        while ( v6 );
      }
    }
    else
    {
      v10 = 0i64;
    }
    this->m_pRenderInfos = v10;
    if ( v10 )
    {
      v8 = m_renderInfoCount;
      if ( (int)m_renderInfoCount > 0 )
      {
        do
        {
          v13 = this->m_pRenderInfos;
          v14 = *(_OWORD *)&m_pRenderInfos[v9++].image.pImage;
          *(_OWORD *)&v13[v9 - 1].image.pImage = v14;
          *(_OWORD *)&v13[v9 - 1].buffers[0].pTextures = *(_OWORD *)&m_pRenderInfos[v9 - 1].buffers[0].pTextures;
          *(_OWORD *)&v13[v9 - 1].buffers[0].renderAlpha = *(_OWORD *)&m_pRenderInfos[v9 - 1].buffers[0].renderAlpha;
          *(_OWORD *)&v13[v9 - 1].buffers[1].pTextures = *(_OWORD *)&m_pRenderInfos[v9 - 1].buffers[1].pTextures;
          *(_OWORD *)&v13[v9 - 1].buffers[1].renderAlpha = *(_OWORD *)&m_pRenderInfos[v9 - 1].buffers[1].renderAlpha;
          *(_QWORD *)&v13[v9 - 1].stackCount = *(_QWORD *)&m_pRenderInfos[v9 - 1].stackCount;
          --v8;
        }
        while ( v8 );
      }
    }
    else
    {
      this->m_bError = 1;
    }
    if ( m_pRenderInfos )
      operator delete(m_pRenderInfos, v8);
  }
  if ( this->isError(this) )
    return 0i64;
  else
    return &this->m_pRenderInfos[v2];
}

void __fastcall DrawHelperVertexBuffer::draw(
        DrawHelperVertexBuffer *this,
        DrawHelper::ERenderMode::Type renderMode,
        DrawHelperVertexBuffer::RenderInfo *renderInfo)
{
  __int64 v5; // rbx
  int v6; // er8
  int v7; // esi
  int v8; // er9
  unsigned int renderColor; // ecx
  GraphicsOpt *v10; // rbp
  OGLRender *v11; // r15
  Graphics *g; // rax
  unsigned int v13; // [rsp+30h] [rbp-38h]

  if ( renderInfo->image.pImage )
  {
    v5 = renderMode;
    if ( renderInfo->buffers[v5].renderSize > 0 )
    {
      v6 = (unsigned __int8)(int)(float)(renderInfo->buffers[v5].renderAlpha * 255.0);
      v7 = (v6 << 24) | 0xFFFFFF;
      if ( renderMode )
        v8 = renderMode == VISIBLE;
      else
        v8 = 3;
      renderColor = renderInfo->buffers[v5].renderColor;
      v10 = *(GraphicsOpt **)(*(_QWORD *)&AppMain::pApp + 112i64);
      v11 = *(OGLRender **)(*(_QWORD *)&AppMain::pApp + 80i64);
      if ( renderColor != -1 )
        GraphicsOpt::setSpriteFog(
          *(GraphicsOpt **)(*(_QWORD *)&AppMain::pApp + 112i64),
          (float)BYTE2(renderColor) / 255.0,
          (float)BYTE1(renderColor) / 255.0,
          (float)(unsigned __int8)renderColor / 255.0,
          (float)HIBYTE(renderColor) / 255.0);
      Graphics::setRenderMode(v10->g, v8, v6);
      v10->g->m_FlipMode = 0;
      OGLRender::drawImage(
        v11,
        renderInfo->image.pImage,
        renderInfo->buffers[v5].pVertexes,
        renderInfo->buffers[v5].pTextures,
        v7,
        this->m_pIndexBuffer,
        v13,
        4 * renderInfo->buffers[v5].renderSize,
        6 * renderInfo->buffers[v5].renderSize);
      g = v10->g;
      g->m_Operator = 0;
      g->m_SrcRatio = 255;
      g->m_DstRatio = 255;
      if ( !g->m_bPreDrawMode )
      {
        if ( m_DepthMask != 1 )
        {
          m_DepthMask = 1;
          glDepthMask(1u);
        }
        if ( m_Mode != 32774 )
        {
          m_Mode = 32774;
          m_ModeAlpha = 32774;
          _glewBlendEquation(0x8006u);
        }
        if ( dword_140A9605C )
        {
          dword_140A9605C = 0;
          glDisable(0xBE2u);
        }
        if ( m_dMode != 515 )
        {
          m_dMode = 515;
          glDepthFunc(0x203u);
        }
      }
      GraphicsOpt::resetFog(v10);
      renderInfo->buffers[v5].renderColor = -1;
      *(_QWORD *)&renderInfo->buffers[v5].renderAlpha = 1065353216i64;
    }
  }
}

void __fastcall DrawHelperVertexBuffer::draw(
        DrawHelperVertexBuffer *this,
        int imageID,
        int _rx,
        int _ry,
        const _C_CONV *rect,
        const DrawHelper::DrawParams *params,
        bool nonNeoScaleUp)
{
  __int64 v9; // r14
  DrawHelperVertexBuffer::RenderInfo *v11; // rbx
  __int64 renderMode; // rcx
  __int64 v13; // rbp
  int size; // er9
  float v15; // xmm5_4
  float v16; // xmm8_4
  int w; // edx
  float v18; // xmm1_4
  float v19; // xmm8_4
  float v20; // xmm10_4
  float h; // xmm11_4
  float v22; // xmm3_4
  float v23; // xmm7_4
  float v24; // xmm2_4
  float v25; // xmm5_4
  float cx; // xmm4_4
  float cy; // xmm0_4
  bool bMirror; // cl
  float v29; // xmm1_4
  DrawHelper::ERenderAlign::Type align; // eax
  float v31; // xmm7_4
  float v32; // xmm3_4
  float v33; // xmm2_4
  float m_Width; // xmm13_4
  float m_Height; // xmm14_4
  float v36; // xmm11_4
  float v37; // xmm10_4
  float v38; // xmm9_4
  float v39; // xmm12_4
  float ex; // xmm6_4
  float sx; // xmm4_4
  float ey; // xmm8_4
  float sy; // xmm5_4
  float v44; // xmm0_4
  float v45; // xmm3_4
  float v46; // xmm0_4
  float v47; // xmm2_4
  int renderSize; // ecx
  float *pVertexes; // rdx
  __int64 v50; // r8
  __int64 v51; // rcx
  float *pTextures; // rax
  float m_depth; // xmm0_4

  v9 = imageID;
  if ( !this->isError(this)
    && (int)v9 >= 0
    && this->m_renderInfoCount > (int)v9
    && (float)rect->w != 0.0
    && (float)rect->h != 0.0
    && params->scaleW > 0.0
    && params->scaleH > 0.0 )
  {
    v11 = &this->m_pRenderInfos[v9];
    if ( v11->image.pImage )
    {
      renderMode = params->renderMode;
      v13 = renderMode;
      if ( v11->buffers[renderMode].renderColor != params->colorARGB || v11->buffers[v13].renderAlpha != params->alpha )
      {
        if ( v11->buffers[v13].renderSize > 0 )
        {
          if ( (_DWORD)renderMode == 1 )
            DrawHelperVertexBuffer::draw(this, DEFAULT, v11);
          DrawHelperVertexBuffer::draw(this, params->renderMode, v11);
        }
        v11->buffers[v13].renderColor = params->colorARGB;
        v11->buffers[v13].renderAlpha = params->alpha;
      }
      size = v11->buffers[v13].size;
      if ( size <= v11->buffers[v13].renderSize )
        this->changeBufferSize(this, v9, params->renderMode, size + 5);
      v15 = *(float *)&FLOAT_1_0;
      v16 = *(float *)&FLOAT_1_0;
      if ( !nonNeoScaleUp )
      {
        v15 = (float)*(int *)(*(_QWORD *)&AppMain::pApp + 28i64) / 1920.0;
        v16 = (float)*(int *)(*(_QWORD *)&AppMain::pApp + 32i64) / 1080.0;
      }
      w = rect->w;
      v18 = (float)_rx * v16;
      v19 = v16 * params->scaleW;
      v20 = (float)w;
      h = (float)rect->h;
      v22 = (float)w;
      v23 = (float)_ry * v15;
      v24 = h;
      v25 = v15 * params->scaleH;
      cx = (float)rect->cx;
      cy = (float)rect->cy;
      if ( v19 != 1.0 )
      {
        v22 = v20 * v19;
        if ( cx != 0.0 )
          cx = (float)(cx / v20) * v22;
      }
      if ( v25 != 1.0 )
      {
        v24 = h * v25;
        if ( cy != 0.0 )
          cy = (float)(cy / h) * v24;
      }
      bMirror = params->bMirror;
      if ( bMirror )
        v29 = v18 + cx;
      else
        v29 = v18 - cx;
      align = params->align;
      v31 = v23 - cy;
      if ( align == Right )
      {
        v29 = v29 - v22;
      }
      else if ( align == Center )
      {
        v29 = v29 - (float)(v22 * 0.5);
      }
      v32 = v22 + v29;
      v33 = v24 + v31;
      m_Width = (float)v11->image.pImage->m_Width;
      m_Height = (float)v11->image.pImage->m_Height;
      v36 = (float)(rect->h + rect->sy) / m_Height;
      v37 = (float)rect->sx / m_Width;
      v38 = (float)(w + rect->sx) / m_Width;
      v39 = (float)rect->sy / m_Height;
      if ( bMirror )
      {
        v37 = (float)(w + rect->sx) / (float)v11->image.pImage->m_Width;
        v38 = (float)rect->sx / m_Width;
      }
      if ( !this->m_clip.bClip )
        goto LABEL_60;
      ex = (float)this->m_clip.ex;
      if ( v29 < ex )
      {
        sx = (float)this->m_clip.sx;
        if ( sx < v32 )
        {
          ey = (float)this->m_clip.ey;
          if ( v31 < ey )
          {
            sy = (float)this->m_clip.sy;
            if ( sy < v33 )
            {
              if ( sx > v29 )
              {
                if ( bMirror )
                  v44 = v29 - sx;
                else
                  v44 = sx - v29;
                v29 = (float)this->m_clip.sx;
                v37 = v37 + (float)(v44 / m_Width);
              }
              if ( v32 > ex )
              {
                if ( bMirror )
                  v45 = ex - v32;
                else
                  v45 = v32 - ex;
                v38 = v38 - (float)(v45 / m_Width);
                v32 = (float)this->m_clip.ex;
              }
              if ( sy > v31 )
              {
                if ( bMirror )
                  v46 = v31 - sy;
                else
                  v46 = sy - v31;
                v31 = (float)this->m_clip.sy;
                v39 = v39 + (float)(v46 / m_Height);
              }
              if ( v33 > ey )
              {
                if ( bMirror )
                  v47 = ey - v33;
                else
                  v47 = v33 - ey;
                v36 = v36 - (float)(v47 / m_Height);
                v33 = (float)this->m_clip.ey;
              }
LABEL_60:
              renderSize = v11->buffers[v13].renderSize;
              pVertexes = v11->buffers[v13].pVertexes;
              v50 = 12 * renderSize;
              v51 = 8 * renderSize;
              pTextures = v11->buffers[v13].pTextures;
              pVertexes[v50 + 3] = v29;
              pVertexes[v50] = v29;
              pVertexes[v50 + 7] = v31;
              pVertexes[v50 + 1] = v31;
              pVertexes[v50 + 10] = v33;
              pVertexes[v50 + 4] = v33;
              pVertexes[v50 + 9] = v32;
              pVertexes[v50 + 6] = v32;
              m_depth = this->m_depth;
              pVertexes[v50 + 11] = m_depth;
              pVertexes[v50 + 8] = m_depth;
              pVertexes[v50 + 5] = m_depth;
              pVertexes[v50 + 2] = m_depth;
              pTextures[v51 + 2] = v37;
              pTextures[v51] = v37;
              pTextures[v51 + 5] = v39;
              pTextures[v51 + 1] = v39;
              pTextures[v51 + 6] = v38;
              pTextures[v51 + 4] = v38;
              pTextures[v51 + 7] = v36;
              pTextures[v51 + 3] = v36;
              ++v11->buffers[v13].renderSize;
              this->m_depth = this->m_depth + 0.000099999997;
            }
          }
        }
      }
    }
  }
}

void __fastcall DrawHelperVertexBuffer::drawConv(
        DrawHelperVertexBuffer *this,
        int imageID,
        int _rx,
        int _ry,
        const _C_CONV *rect,
        const DrawHelper::DrawParams *params)
{
  float w; // xmm1_4
  float scaleW; // xmm0_4
  float scaleH; // xmm2_4
  DrawHelperVertexBuffer::RenderInfo *v9; // rdi
  float v10; // xmm7_4
  float v11; // xmm9_4
  float v12; // xmm6_4
  float scalX; // xmm7_4
  float v14; // xmm10_4
  float scalY; // xmm9_4
  DrawHelper::ERenderAlign::Type align; // ecx
  GraphicsOpt *v17; // rsi
  __int64 v18; // r14
  int v19; // er8
  int v20; // er9
  unsigned int colorARGB; // ecx
  Graphics *g; // rax
  bool v23; // zf

  if ( imageID < 0 )
    return;
  if ( this->m_renderInfoCount <= imageID )
    return;
  w = (float)rect->w;
  if ( w == 0.0 )
    return;
  if ( (float)rect->h == 0.0 )
    return;
  scaleW = params->scaleW;
  if ( scaleW <= 0.0 )
    return;
  scaleH = params->scaleH;
  if ( scaleH <= 0.0 )
    return;
  v9 = &this->m_pRenderInfos[imageID];
  if ( !v9->image.pImage )
    return;
  v10 = (float)*(int *)(*(_QWORD *)&AppMain::pApp + 32i64) / 1080.0;
  v11 = (float)*(int *)(*(_QWORD *)&AppMain::pApp + 28i64) / 1920.0;
  v12 = (float)_rx * v10;
  scalX = v10 * scaleW;
  v14 = (float)_ry * v11;
  scalY = v11 * scaleH;
  if ( scalX != 1.0 )
    w = w * scalX;
  align = params->align;
  if ( align == Right )
    goto LABEL_13;
  if ( align == Center )
  {
    w = w * 0.5;
LABEL_13:
    v12 = v12 - w;
  }
  v17 = *(GraphicsOpt **)(*(_QWORD *)&AppMain::pApp + 112i64);
  v18 = *(_QWORD *)(*(_QWORD *)&AppMain::pApp + 104i64);
  v19 = (unsigned __int8)(int)(float)(params->alpha * 255.0);
  if ( params->renderMode )
    v20 = params->renderMode == VISIBLE;
  else
    v20 = 3;
  colorARGB = params->colorARGB;
  if ( colorARGB != -1 )
    GraphicsOpt::setSpriteFog(
      v17,
      (float)BYTE2(colorARGB) / 255.0,
      (float)BYTE1(colorARGB) / 255.0,
      (float)(unsigned __int8)colorARGB / 255.0,
      (float)HIBYTE(colorARGB) / 255.0);
  Graphics::setRenderMode(v17->g, v20, v19);
  *(_DWORD *)(v18 + 48) = -1;
  GraphicsOpt::drawConv(v17, v9->image.pImage, v12, v14, rect, scalX, scalY, 0.0, params->bMirror);
  g = v17->g;
  v23 = g->m_bPreDrawMode == 0;
  g->m_Operator = 0;
  g->m_SrcRatio = 255;
  g->m_DstRatio = 255;
  if ( v23 )
  {
    if ( m_DepthMask != 1 )
    {
      m_DepthMask = 1;
      glDepthMask(1u);
    }
    if ( m_Mode != 32774 )
    {
      m_Mode = 32774;
      m_ModeAlpha = 32774;
      _glewBlendEquation(0x8006u);
    }
    if ( dword_140A9605C )
    {
      dword_140A9605C = 0;
      glDisable(0xBE2u);
    }
    if ( m_dMode != 515 )
    {
      m_dMode = 515;
      glDepthFunc(0x203u);
    }
  }
  GraphicsOpt::resetFog(v17);
}

void __fastcall DrawHelperVertexBuffer::drawStack(DrawHelperVertexBuffer *this)
{
  int v2; // ecx
  __int64 v3; // rdi
  int v4; // er15
  __int64 v5; // r14
  DrawHelperVertexBuffer::RenderInfo *v6; // rbx
  int v7; // er8
  int v8; // esi
  int v9; // er9
  unsigned int v10; // ecx
  GraphicsOpt *v11; // rbp
  OGLRender *v12; // r13
  Graphics *g; // rax
  unsigned int v14; // [rsp+30h] [rbp-58h]
  int v15; // [rsp+90h] [rbp+8h]

  if ( !this->isError(this) )
  {
    v2 = 0;
    v3 = 8i64;
    v15 = 0;
    do
    {
      v4 = 0;
      if ( this->m_renderInfoCount > 0 )
      {
        v5 = 0i64;
        do
        {
          v6 = &this->m_pRenderInfos[v5];
          if ( v6->image.pImage && *(int *)((char *)&v6->buffers[0].renderColor + v3) > 0 )
          {
            v7 = (unsigned __int8)(int)(float)(*(float *)((char *)&v6->buffers[0].size + v3) * 255.0);
            v8 = (v7 << 24) | 0xFFFFFF;
            if ( v2 )
              v9 = v2 == 1;
            else
              v9 = 3;
            v10 = *(_DWORD *)((char *)&v6->buffers[0].pTextures + v3 + 4);
            v11 = *(GraphicsOpt **)(*(_QWORD *)&AppMain::pApp + 112i64);
            v12 = *(OGLRender **)(*(_QWORD *)&AppMain::pApp + 80i64);
            if ( v10 != -1 )
              GraphicsOpt::setSpriteFog(
                *(GraphicsOpt **)(*(_QWORD *)&AppMain::pApp + 112i64),
                (float)BYTE2(v10) / 255.0,
                (float)BYTE1(v10) / 255.0,
                (float)(unsigned __int8)v10 / 255.0,
                (float)HIBYTE(v10) / 255.0);
            Graphics::setRenderMode(v11->g, v9, v7);
            v11->g->m_FlipMode = 0;
            OGLRender::drawImage(
              v12,
              v6->image.pImage,
              *(float **)((char *)&v6->image.pImage + v3),
              *(float **)((char *)&v6->buffers[0].pVertexes + v3),
              v8,
              this->m_pIndexBuffer,
              v14,
              4 * *(unsigned int *)((char *)&v6->buffers[0].renderColor + v3),
              6 * *(unsigned int *)((char *)&v6->buffers[0].renderColor + v3));
            g = v11->g;
            g->m_Operator = 0;
            g->m_SrcRatio = 255;
            g->m_DstRatio = 255;
            if ( !g->m_bPreDrawMode )
            {
              if ( m_DepthMask != 1 )
              {
                m_DepthMask = 1;
                glDepthMask(1u);
              }
              if ( m_Mode != 32774 )
              {
                m_Mode = 32774;
                m_ModeAlpha = 32774;
                _glewBlendEquation(0x8006u);
              }
              if ( dword_140A9605C )
              {
                dword_140A9605C = 0;
                glDisable(0xBE2u);
              }
              if ( m_dMode != 515 )
              {
                m_dMode = 515;
                glDepthFunc(0x203u);
              }
            }
            GraphicsOpt::resetFog(v11);
            v2 = v15;
            *(_DWORD *)((char *)&v6->buffers[0].pTextures + v3 + 4) = -1;
            *(_QWORD *)((char *)&v6->buffers[0].size + v3) = 1065353216i64;
          }
          ++v4;
          ++v5;
        }
        while ( v4 < this->m_renderInfoCount );
      }
      ++v2;
      v3 += 32i64;
      v15 = v2;
    }
    while ( v2 < 2 );
    this->m_depth = 0.0;
  }
}

__int64 __fastcall DrawHelperVertexBuffer::getImageID(DrawHelperVertexBuffer *this, Image *pImage)
{
  unsigned int v4; // edx
  DrawHelperVertexBuffer::RenderInfo *m_pRenderInfos; // rax
  __int64 v6; // rcx

  if ( this->isError(this) )
    return 0xFFFFFFFFi64;
  v4 = 0;
  if ( this->m_renderInfoCount <= 0 )
    return 0xFFFFFFFFi64;
  m_pRenderInfos = this->m_pRenderInfos;
  v6 = 0i64;
  while ( m_pRenderInfos->image.pImage != pImage )
  {
    ++v4;
    ++v6;
    ++m_pRenderInfos;
    if ( v6 >= this->m_renderInfoCount )
      return 0xFFFFFFFFi64;
  }
  return v4;
}

DrawHelperVertexBuffer::RenderInfo *__fastcall DrawHelperVertexBuffer::getImageInfo(
        DrawHelperVertexBuffer *this,
        int imageID)
{
  __int64 v3; // rbx
  DrawHelperVertexBuffer::RenderInfo *result; // rax

  v3 = imageID;
  if ( this->isError(this) || (int)v3 < 0 || this->m_renderInfoCount <= (int)v3 )
    return 0i64;
  result = &this->m_pRenderInfos[v3];
  if ( !result->image.pImage )
    return 0i64;
  return result;
}

void __fastcall DrawHelperVertexBuffer::releaseImpl(DrawHelperVertexBuffer *this, unsigned __int64 a2)
{
  int v3; // ebp
  __int64 v4; // r15
  __int64 v5; // rdi
  DrawHelperVertexBuffer::RenderInfo *v6; // rsi
  float **p_pTextures; // rbx
  void *v8; // rcx
  DrawHelperVertexBuffer::RenderInfo::Stack *pStacks; // rcx
  DrawHelperVertexBuffer::RenderInfo *m_pRenderInfos; // rcx
  unsigned int *m_pIndexBuffer; // rcx
  DrawHelperVertexBuffer_vtbl *v12; // rax

  if ( this->m_pRenderInfos )
  {
    v3 = 0;
    if ( this->m_renderInfoCount > 0 )
    {
      v4 = 0i64;
      do
      {
        v5 = 2i64;
        v6 = &this->m_pRenderInfos[v4];
        v6->image.pImage = 0i64;
        p_pTextures = &v6->buffers[0].pTextures;
        do
        {
          v8 = *(p_pTextures - 1);
          if ( v8 )
          {
            operator delete(v8, a2);
            *(p_pTextures - 1) = 0i64;
          }
          if ( *p_pTextures )
          {
            operator delete(*p_pTextures, a2);
            *p_pTextures = 0i64;
          }
          *((_DWORD *)p_pTextures + 2) = 0;
          *((_DWORD *)p_pTextures + 5) = 0;
          p_pTextures += 4;
          --v5;
        }
        while ( v5 );
        pStacks = v6->pStacks;
        if ( pStacks )
        {
          operator delete(pStacks, a2);
          v6->pStacks = 0i64;
        }
        ++v3;
        *(_QWORD *)&v6->stackCount = 0i64;
        ++v4;
      }
      while ( v3 < this->m_renderInfoCount );
    }
    m_pRenderInfos = this->m_pRenderInfos;
    if ( m_pRenderInfos )
    {
      operator delete(m_pRenderInfos, a2);
      this->m_pRenderInfos = 0i64;
    }
    this->m_renderInfoCount = 0;
  }
  m_pIndexBuffer = this->m_pIndexBuffer;
  if ( m_pIndexBuffer )
  {
    operator delete(m_pIndexBuffer, a2);
    this->m_pIndexBuffer = 0i64;
  }
  v12 = this->__vftable;
  this->m_indexBufferSize = 0;
  v12->clearClip(this);
}

void __fastcall DrawHelperVertexBuffer::setClip(DrawHelperVertexBuffer *this, int x, int y, int width, int height)
{
  __m128i v5; // xmm3
  float v6; // xmm2_4
  float v7; // xmm2_4

  v5 = _mm_cvtsi32_si128(*(_DWORD *)(*(_QWORD *)&AppMain::pApp + 28i64));
  v6 = (float)*(int *)(*(_QWORD *)&AppMain::pApp + 32i64);
  this->m_clip.bClip = 1;
  v7 = v6 / 1080.0;
  *(float *)v5.m128i_i32 = _mm_cvtepi32_ps(v5).m128_f32[0] / 1920.0;
  this->m_clip.sx = (int)(float)((float)x * v7);
  this->m_clip.sy = (int)(float)((float)y * *(float *)v5.m128i_i32);
  this->m_clip.ex = (int)(float)((float)(x + width) * v7);
  this->m_clip.ey = (int)(float)((float)(y + height) * *(float *)v5.m128i_i32);
}

