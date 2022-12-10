#include "program files (x86)/microsoft visual studio 14.0/vc/include/deque"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/asynccharafileload.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_wwhelper.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/vec_aos.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/silverware/git/sdk/util/agservice.h"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/hitrectcollection.h"
#include "dev/silverware/git/sdk/agthreadpool.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglshader.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_missiondataloading.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/trainingsetting.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/combomissionattackeventlistener.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charamaterialsettingformat.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/mat_aos.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/fix32.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actorcharabase.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/jobmanager.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlehud.h"
#include "dev/kof/master/development/source/baseproject/jni/game/define/charabonedefine.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/texstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_vertex.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/unordered_map"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battleeventhandler.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/colorholder.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/fontprovider/render_fontproviderhud.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_wstring.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thr/xthread"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/damagesetting.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xhash"
#include "program files (x86)/windows kits/8.1/include/shared/guiddef.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/battleplayerinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "program files (x86)/windows kits/8.1/include/shared/stralign.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/easingnumber.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/errorchecker.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/functional"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actionblackout.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleonlinewatching.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/matrix4unaligned.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threadcheck.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/quat_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_new.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/cpusequencedataformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textlayout.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_image.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/resourcemanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exlockable.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/algorithm"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleloading.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/shot/actorshot.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actorchara.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/commandcheck.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "dev/silverware/git/sdk/3rdparty/steam/isteamhtmlsurface.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/string"
#include "dev/kof/master/development/source/baseproject/jni/game/util/restrictringbuffer.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/matchingsystem.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/emitterformstate/emitterformstatecurve.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/materialshowcontrol.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/future_asset.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_movie.h"
#include "dev/kof/master/development/source/ps4project/baseproject/pcutil/pcdummy.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_operation.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/asyncjob.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdata/effectdata.h"
#include "dev/silverware/git/sdk/agreferencedobjectinl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/bitset"
#include "dev/kof/master/development/source/baseproject/jni/game/util/syncmenuimage.h"
#include "dev/silverware/git/sdk/agpointer.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_ps4modelroom.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/moviedatadefine.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/atomic_int.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/chartdata.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charahitrectformat.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_sse.h"
#include "dev/silverware/git/sdk/agreferencedobject.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_screentoworld.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_types.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thread"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/silverware/git/sdk/agmovieplayer.h"
#include "program files (x86)/windows kits/8.1/include/um/winnt.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/memory"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_strokeraa.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_scale9grid.h"
#include "program files (x86)/windows kits/8.1/include/shared/basetsd.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraystaticbuff.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmodel.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cxform.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/atomic"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestageresourcecontainer.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestageshader.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actor.h"
#include "dev/silverware/git/sdk/agthread.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charadataunify.h"
#include "dev/silverware/git/sdk/agmutex.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/tuple"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaattackdataformat.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/libcommon.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector2unaligned.h"
#include "dev/silverware/git/sdk/agscopedlock.h"
#include "dev/silverware/git/sdk/agreferenceinl.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charadamagesettingformat.h"
#include "dev/silverware/git/sdk/agconditionvariable.inl"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xfacet"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_event.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/png_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_keycodes.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_functions.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/ios"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocnum"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshkey.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixstate.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_gradients.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steam_api_internal.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_exception.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_rasterizer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_viewport.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xiosbase"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglbone.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocale"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/array"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_drawableimage.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/time.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_typeinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hal.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_buffer.h"
#include "dev/silverware/git/sdk/agreferencecount.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/combomissiondataformat.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/sounddata.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/soundgroupdataformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_characterdef.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exwaitcondition.h"
#include "program files (x86)/windows kits/8.1/include/um/winuser.h"
#include "dev/silverware/git/sdk/memory/agallocators.h"
#include "dev/kof/master/development/source/baseproject/jni/game/network/playtogether.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steam_api.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_bank.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/operationmapper.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/mutex"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/map"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/titlestoragesystem.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filters.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/chrono"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtree"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filterparams.h"
#include "dev/silverware/git/sdk/input/agcontrollercomponent.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphqueue.h"
#include "dev/kof/master/development/source/baseproject/jni/game/appmain.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/shaderfxhelper.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_font.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmirror.h"
#include "dev/silverware/git/sdk/util/agdelegate.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/boolinvec.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/effect/actoreffect.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actorobject.h"
#include "dev/silverware/git/sdk/agdisplay.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/savedata.h"
#include "dev/silverware/git/sdk/agvector4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessdefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/list"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actoroption.h"
#include "dev/silverware/git/sdk/agvector3.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/randommt.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatapacked.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/cameracheck.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/system_error"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_pathdatapacker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_linebuffer.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/freecameracheck.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_highlight.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloat.h"
#include "dev/silverware/git/sdk/system/agsysteminfo.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleonline.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_profiler.h"
#include "dev/silverware/git/sdk/util/agservicecommand.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector3unaligned.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_states.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/rapper/graphicsopt.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/tga_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_statebag.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/mediamanager.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xxatomic"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/stdexcept"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstring"
#include "dev/kof/master/development/source/baseproject/jni/game/data/savedatadefine.h"
#include "dev/silverware/git/sdk/3rdparty/steam/matchmakingtypes.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_simplemeshcache.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/audiopresenter.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "dev/kof/master/development/source/baseproject/jni/game/cpuseq/battlecpu.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/fontprovider/render_fontproviderwinapi.h"
#include "dev/silverware/git/sdk/util/agdebugchannels.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/kof/master/development/source/baseproject/jni/game/cpuseq/sequencecontroller.h"
#include "dev/silverware/git/sdk/agrectangle.h"
#include "dev/silverware/git/sdk/util/agperformancecounter.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/silverware/git/sdk/agclock.h"
#include "program files (x86)/windows kits/8.1/include/um/winbase.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/debug/logging.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_prefightfaceoff.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/translate_table.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_bundle.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/vec_aos.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/shared_lua_context.h"
#include "dev/kof/master/development/source/baseproject/jni/game/system/battlesysteminfo.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/heapmemory.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/boolinvec.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloatmp.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapemeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/jpeg_imagefile.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/mutex.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/limits"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treetext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefileutil.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_docview.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/vectormath_aos.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/hidpad/hidpadsystem.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/combomissionjudge.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_range.h"
#include "dev/silverware/git/sdk/agcondition.h"
#include "dev/silverware/git/sdk/platforms/pc/system/agpcsysteminfo.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/soundutil.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/globalheapmemory.h"
#include "dev/kof/master/development/source/baseproject/jni/game/network/chkdiscononlinesv.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdata/effectappdata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/fixmemory.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocinfo"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_hash.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exthread.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogleffect.h"
#include "dev/silverware/git/sdk/agreferencecountinl.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xutility"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/utility"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/bilinkable.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/mediasound.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaprojectdataformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "dev/silverware/git/sdk/filesystem/agfile.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/iosfwd"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix4x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixpool.h"
#include "dev/silverware/git/sdk/filesystem/agpath.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charabasestatusformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shader.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogllight.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/inputkeyrecord.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_sgmlparser.h"
#include "dev/silverware/git/sdk/filesystem/agmount.h"
#include "dev/silverware/git/sdk/input/agsdlmappingparser.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_context.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglcurve.h"
#include "dev/silverware/git/sdk/filesystem/agdirectory.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_hashkey.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_constants.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlecall/battlecall.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessgen.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_debug.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treeshape.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessellator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/bodypush.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/mat_aos.h"
#include "dev/kof/master/development/source/baseproject/jni/game/network/netmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglsprite.h"
#include "dev/kof/master/development/source/baseproject/jni/game/network/leaderboard.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/input/imesystem.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitivebundle.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steamclientpublic.h"
#include "dev/kof/master/development/source/ps4project/baseproject/pcutil/pccontrolsmanager.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_manager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treecachenode.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglrender.h"
#include "dev/silverware/git/sdk/input/aginputmanager.h"
#include "dev/silverware/git/sdk/agsingleton.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treenode.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_loader.h"
#include "dev/silverware/git/sdk/aghash.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector4unaligned.h"
#include "dev/silverware/git/sdk/agmutex.inl"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cacheeffect.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_system.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphfitter.h"
#include "dev/silverware/git/sdk/agstringutils.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglfog.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic0.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_player.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/math.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/weapon/actorweapon.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_types.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/variableheapmemorybase.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/vecidx_aos.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "dev/kof/master/development/source/baseproject/jni/game/system/battlecontroller.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_resource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/floatinvec.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actionsystem.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_stroker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "dev/silverware/git/sdk/agpointerinl.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaactiondataformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/dds_imagefile.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/effect.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestage.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charafilebase.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/particledata.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/tkndata.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectcommon.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/quat_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vector"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textmeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphparam.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/floatinvec.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcache.h"
#include "dev/silverware/git/sdk/agcondition.inl"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory0"
#include "dev/kof/master/development/source/baseproject/jni/game/util/cameramotionpreviewsettings.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/stageprojectdata.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/commanddataformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcacheconfig.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/refcountable.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/physicalheapmemory.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/emitter.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hairliner.h"
#include "dev/silverware/git/sdk/agsemaphore.h"
#include "dev/silverware/git/sdk/agmemorystream.h"
#include "dev/silverware/git/sdk/agvector2.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_filterdesc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_styledtext.h"
#include "dev/silverware/git/sdk/agsemaphore.inl"
#include "dev/silverware/git/sdk/agconditionvariable.h"
#include "dev/silverware/git/sdk/agmemorypool.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_vec64.h"
#include "dev/silverware/git/sdk/agmath.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix3x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_core.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_queue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/condition_variable"
#include "dev/silverware/git/sdk/input/agcontrollerbuttoncomponent.h"
#include "dev/silverware/git/sdk/input/agcontroller.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestagedatas.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_fontmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitive.h"
#include "dev/silverware/git/sdk/agstream.h"
#include "dev/silverware/git/sdk/system/aguser.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstddef"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/tkndatas.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocaddr.h"
#include "dev/silverware/git/sdk/agstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_radixtree.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/tween.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdatalistmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_twips.h"
#include "dev/silverware/git/sdk/system/agusermanager.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_math.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/exception"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/type_traits"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_containers.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/randomnumbers.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglvec3.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmatrix.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectmanager/effecttaskmanager.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/randommt.cpp"

std::piecewise_construct_t std::piecewise_construct; // 0x14089E383
Effect::Effect(); // 0x140137730
Effect::~Effect(); // 0x140137920
void Effect::initialize(); // 0x140137940
void Effect::mainInitialize(); // 0x140137950
void Effect::ownInitialize(); // 0x140137990
void Effect::terminate(); // 0x1401379A0
void Effect::ownTerminate(); // 0x1401379E0
void Effect::update(bool mirrorFlag, const OGLMatrix & actMat, float frame, float colorAlpha); // 0x1401379F0
void Effect::udpateExe(ActionArgument & actArg); // 0x140137A60
void Effect::mainUpdate(ActionArgument & actArg); // 0x140137A90
void Effect::postUpdate(ActionArgument & actArg); // 0x140137B60
void Effect::ownUpdate(bool mirrorFlag, const OGLMatrix & actMat, float frame); // 0x140137BC0
void Effect::cleanup(float setAge, bool initFlag); // 0x140137BE0
void Effect::ownCleanup(float setAge, bool initflag); // 0x140137C50
void Effect::mainUpdateVertexBuffer(); // 0x140137C60
void Effect::postUpdateVertexBuffer(); // 0x140137CD0
void Effect::mainUpdateVertexBufferInBT(); // 0x140137D20
void Effect::postUpdateVertexBufferInBT(); // 0x140137D90
void Effect::renderSetting(); // 0x140137DE0
void Effect::render(long renderOpt, float zOffset, long priority); // 0x140137E30
void Effect::setRenderArg(long renderOpt, float zOffset, long priority); // 0x140137E60
void Effect::mainRender(long renderOpt, float zOffset, long priority, EffectRenderArgument * pRenderArg); // 0x140137EE0
void Effect::ownMainUpdateVertexBufferInBT(); // 0x14002E7C0
void Effect::setEffectData(EffectData * emitterData); // 0x140137F80
EffectData * Effect::getSettingData(); // 0x140137F90
void Effect::setEmitFlag(bool flag); // 0x140137FA0
bool Effect::getEmitFlag(); // 0x140137FF0
bool Effect::getSurviveParticleFlag(); // 0x140138000
void Effect::getSurviveParticleFlag(bool * surviveFlag); // 0x140138030
bool Effect::getNaturalDeathFlag(); // 0x1400B8180
bool Effect::getLifeUnlimitedFlag(); // 0x140138080
long Effect::countChild(Effect * pEffect, long count); // 0x140138130
void Effect::setEffectDataListManager(EffectDataListManager * pEffectDataListManager); // 0x140138150
void Effect::setBlendProjection(); // 0x1401381A0
void Effect::setBlendProjection(bool flag); // 0x1401384A0
void Effect::setBlendProjection(float projNormalAngOffset, const OGLVec3 & BlendProjectionCenterPos, const OGLMatrix & OrthoView, const OGLMatrix & OrthoProj); // 0x1401384E0
void Effect::setJobNum(long setNum); // 0x1401385C0//decompilation failure at 14089E383!
void __fastcall Effect::Effect(Effect *this)
{
  __int64 v2; // rax

  this->__vftable = (Effect_vtbl *)&Effect::`vftable';
  BlendProjData::BlendProjData(&this->m_BlendProjData);
  *(_QWORD *)&this->m_ActArg.actMat.m[4] = 0i64;
  *(_QWORD *)&this->m_ActArg.actMat.m[6] = 0i64;
  *(_QWORD *)&this->m_ActArg.actMat.m[14] = 0i64;
  this->m_ActArg.mirrorFlag = 0;
  *(_QWORD *)this->m_ActArg.actMat.m = 1065353216i64;
  this->m_ActArg.actMat.m[4] = 0.0;
  *(_QWORD *)&this->m_ActArg.actMat.m[8] = 0i64;
  *(_QWORD *)&this->m_ActArg.actMat.m[12] = 0i64;
  *(_QWORD *)&this->m_ActArg.actMat.m[5] = 1065353216i64;
  *(_QWORD *)&this->m_ActArg.actMat.m[2] = 0i64;
  *(_QWORD *)&this->m_ActArg.actMat.m[10] = 1065353216i64;
  this->m_ActArg.actMat.m[14] = 0.0;
  this->m_ActArg.actMat.m[7] = 0.0;
  *(_QWORD *)&this->m_ActArg.actMat.m[15] = 1065353216i64;
  this->m_ActArg.alpha = 0.0;
  this->m_UpdateArg.mirrorFlag = 0;
  this->m_UpdateArg.pParticleDataVec = 0i64;
  this->m_UpdateArg.frame = 0.0;
  this->m_UpdateBufferArg.pParticleDataVec = 0i64;
  this->m_UpdateBufferArg.pEffectData = 0i64;
  this->m_RenderArg.pParticleDataVec = 0i64;
  this->m_RenderArg.pEffectData = 0i64;
  *(_QWORD *)&this->m_RenderArg.renderOpt = 0i64;
  RandomMT::RandomMT(&this->m_RandomNumbers.RandomMT);
  this->m_RandomNumbers.__vftable = (RandomNumbers_vtbl *)&RandomNumbers::`vftable';
  v2 = *(_QWORD *)&AppMain::pApp;
  this->child = 0i64;
  this->siblingBack = 0i64;
  this->siblingFront = 0i64;
  this->parent = 0i64;
  this->age = 0.0;
  this->m_SettingData = 0i64;
  this->m_pBindModel = 0i64;
  this->m_pGpuMemory = 0i64;
  this->m_pMemoryVertexReal[0] = 0i64;
  this->m_pMemoryUVAnimeReal[0] = 0i64;
  this->m_pMemoryInstancingReal[0] = 0i64;
  this->m_pMemoryIndexReal[0] = 0i64;
  this->m_pMemoryCrossVertexReal[0] = 0i64;
  this->m_pMemoryVertexReal[1] = 0i64;
  this->m_pMemoryUVAnimeReal[1] = 0i64;
  this->m_pMemoryInstancingReal[1] = 0i64;
  this->m_pMemoryIndexReal[1] = 0i64;
  this->m_pMemoryCrossVertexReal[1] = 0i64;
  this->jobNum = -1;
  this->m_RandomNumbers.mt[0] = (unsigned int)RandomMT::getRand32((RandomMT *)(*(_QWORD *)(v2 + 2507504) + 2260i64)) >> 1;
  this->m_RandomNumbers.mti = 1;
  do
  {
    this->m_RandomNumbers.mt[this->m_RandomNumbers.mti] = this->m_RandomNumbers.mti
                                                        + 1812433253
                                                        * (*((_DWORD *)&this->m_RandomNumbers.__vftable
                                                           + this->m_RandomNumbers.mti
                                                           + 1) ^ (*((_DWORD *)&this->m_RandomNumbers.__vftable
                                                                   + this->m_RandomNumbers.mti
                                                                   + 1) >> 30));
    ++this->m_RandomNumbers.mti;
  }
  while ( this->m_RandomNumbers.mti < 624 );
}

void __fastcall Effect::~Effect(Effect *this)
{
  this->__vftable = (Effect_vtbl *)&Effect::`vftable';
  this->m_RandomNumbers.__vftable = (RandomNumbers_vtbl *)&RandomNumbers::`vftable';
}

void __fastcall Effect::cleanup(Effect *this, float setAge, bool initFlag)
{
  __int64 v5; // rdx
  Effect *siblingFront; // rcx
  Effect *child; // rcx

  ((void (__fastcall *)(Effect *))this->ownCleanup)(this);
  siblingFront = this->siblingFront;
  if ( siblingFront )
    ((void (__fastcall *)(Effect *, __int64, bool))siblingFront->cleanup)(siblingFront, v5, initFlag);
  child = this->child;
  if ( child )
    ((void (__fastcall *)(Effect *, __int64, bool))child->cleanup)(child, v5, initFlag);
}

__int64 __fastcall Effect::countChild(Effect *this, Effect *pEffect, int count)
{
  do
  {
    pEffect = pEffect->siblingFront;
    ++count;
  }
  while ( pEffect );
  return (unsigned int)count;
}

_BOOL8 __fastcall Effect::getEmitFlag(Effect *this)
{
  return this->m_EmitFlag;
}

bool __fastcall Effect::getLifeUnlimitedFlag(Effect *this)
{
  Effect *child; // rcx
  Effect *siblingFront; // rcx
  DialogData *v5; // rax
  int *Myfirst; // rdx

  child = this->child;
  if ( child && child->getLifeUnlimitedFlag(child) )
    return 1;
  siblingFront = this->siblingFront;
  if ( siblingFront )
  {
    if ( siblingFront->getLifeUnlimitedFlag(siblingFront) )
      return 1;
  }
  if ( (unsigned int)this->m_SettingData->getEffectType(this->m_SettingData) > 1 )
    return 0;
  v5 = std::vector<DialogData>::at(&this->m_SettingData->AllDialogData, 2ui64);
  Myfirst = v5->allButtonIndexData._Mypair._Myval2._Myfirst;
  if ( !(v5->allButtonIndexData._Mypair._Myval2._Mylast - Myfirst) )
    std::_Xout_of_range("invalid vector<T> subscript");
  return *Myfirst != 0;
}

char __fastcall Scaleform::Render::BlendModeEffect::canCacheAcrossTransform(const bool __formal)
{
  return 1;
}

EffectData *__fastcall Effect::getSettingData(Effect *this)
{
  return this->m_SettingData;
}

void __fastcall Effect::getSurviveParticleFlag(Effect *this, bool *surviveFlag)
{
  Effect *child; // rcx
  Effect *siblingFront; // rcx

  child = this->child;
  if ( child )
    ((void (__fastcall *)(Effect *))child->getSurviveParticleFlag)(child);
  siblingFront = this->siblingFront;
  if ( siblingFront )
    siblingFront->getSurviveParticleFlag(siblingFront, surviveFlag);
}

__int64 __fastcall Effect::getSurviveParticleFlag(Effect *this)
{
  Effect_vtbl *v1; // rax
  unsigned __int8 v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = this->__vftable;
  v3 = 0;
  v1->getSurviveParticleFlag(this, (bool *)&v3);
  return v3;
}

void __fastcall Effect::initialize(Effect *this)
{
  this->mainInitialize(this);
}

void __fastcall Effect::mainInitialize(Effect *this)
{
  Effect *siblingFront; // rcx
  Effect *child; // rcx

  this->ownInitialize(this);
  siblingFront = this->siblingFront;
  if ( siblingFront )
    siblingFront->mainInitialize(siblingFront);
  child = this->child;
  if ( child )
    child->mainInitialize(child);
}

void __fastcall Effect::mainRender(
        Effect *this,
        int renderOpt,
        float zOffset,
        int priority,
        EffectRenderArgument *pRenderArg)
{
  __int64 v5; // r8
  Effect *siblingFront; // rcx
  Effect *child; // rcx
  __int64 v11; // r8

  siblingFront = this->siblingFront;
  if ( siblingFront )
    ((void (__fastcall *)(Effect *))siblingFront->mainRender)(siblingFront);
  child = this->child;
  if ( child )
    ((void (__fastcall *)(Effect *, _QWORD, __int64, _QWORD, EffectRenderArgument *))child->mainRender)(
      child,
      (unsigned int)renderOpt,
      v5,
      (unsigned int)priority,
      pRenderArg);
  Effect::setBlendProjection(this);
  ((void (__fastcall *)(Effect *, _QWORD, __int64, _QWORD, EffectRenderArgument *))this->ownRender)(
    this,
    (unsigned int)renderOpt,
    v11,
    (unsigned int)priority,
    pRenderArg);
}

void __fastcall Effect::mainUpdate(Effect *this, ActionArgument *actArg)
{
  Effect *siblingFront; // rcx
  Effect *child; // rcx

  this->m_ActArg = *actArg;
  this->m_mirrorFlag = actArg->mirrorFlag;
  siblingFront = this->siblingFront;
  if ( siblingFront )
  {
    siblingFront->m_pGpuMemory = this->m_pGpuMemory;
    ((void (__fastcall *)(Effect *))this->siblingFront->mainUpdate)(this->siblingFront);
  }
  ((void (__fastcall *)(Effect *, bool, OGLMatrix *))this->ownUpdate)(this, actArg->mirrorFlag, &actArg->actMat);
  child = this->child;
  if ( child )
  {
    child->m_pGpuMemory = this->m_pGpuMemory;
    this->child->mainUpdate(this->child, actArg);
  }
}

void __fastcall Effect::mainUpdateVertexBuffer(Effect *this)
{
  Effect *siblingFront; // rcx
  Effect *child; // rcx

  siblingFront = this->siblingFront;
  if ( siblingFront )
  {
    siblingFront->m_pGpuMemory = this->m_pGpuMemory;
    this->siblingFront->mainUpdateVertexBuffer(this->siblingFront);
  }
  child = this->child;
  if ( child )
  {
    child->m_pGpuMemory = this->m_pGpuMemory;
    this->child->mainUpdateVertexBuffer(this->child);
  }
  this->ownUpdateVertexBuffer(this);
}

void __fastcall Effect::mainUpdateVertexBufferInBT(Effect *this)
{
  Effect *siblingFront; // rcx
  Effect *child; // rcx

  siblingFront = this->siblingFront;
  if ( siblingFront )
  {
    siblingFront->m_pGpuMemory = this->m_pGpuMemory;
    this->siblingFront->mainUpdateVertexBufferInBT(this->siblingFront);
  }
  child = this->child;
  if ( child )
  {
    child->m_pGpuMemory = this->m_pGpuMemory;
    this->child->mainUpdateVertexBufferInBT(this->child);
  }
  this->ownMainUpdateVertexBufferInBT(this);
}

void __fastcall Effect::ownCleanup(Effect *this, float setAge, bool initflag)
{
  this->age = setAge;
}

void __fastcall Effect::ownInitialize(TurbulenceField *this)
{
  *(_WORD *)&this->m_EffectDeleteFlag = 256;
}

void __fastcall ActorWeapon::ActionFlagCheck(_SETJMP_FLOAT128 *JumpBuffer)
{
  ;
}

void __fastcall Effect::ownTerminate(Effect *this)
{
  this->m_EffectDeleteFlag = 1;
}

void __fastcall Effect::ownUpdate(Effect *this, bool mirrorFlag, const OGLMatrix *actMat, float frame)
{
  this->age = frame + this->age;
}

void __fastcall Effect::postUpdate(Effect *this, ActionArgument *actArg)
{
  Effect *siblingFront; // rcx
  Effect *child; // rcx

  ((void (__fastcall *)(Effect *, bool))this->ownPostUpdate)(this, actArg->mirrorFlag);
  siblingFront = this->siblingFront;
  if ( siblingFront )
    siblingFront->postUpdate(siblingFront, actArg);
  child = this->child;
  if ( child )
    child->postUpdate(child, actArg);
}

void __fastcall Effect::postUpdateVertexBuffer(Effect *this)
{
  Effect *siblingFront; // rcx
  Effect *child; // rcx

  siblingFront = this->siblingFront;
  if ( siblingFront )
    siblingFront->postUpdateVertexBuffer(siblingFront);
  child = this->child;
  if ( child )
    child->postUpdateVertexBuffer(child);
  this->ownPostUpdateVertexBuffer(this);
}

void __fastcall Effect::postUpdateVertexBufferInBT(Effect *this)
{
  Effect *siblingFront; // rcx
  Effect *child; // rcx

  siblingFront = this->siblingFront;
  if ( siblingFront )
    siblingFront->postUpdateVertexBufferInBT(siblingFront);
  child = this->child;
  if ( child )
    child->postUpdateVertexBufferInBT(child);
  this->ownPostUpdateVertexBufferInBT(this);
}

void __fastcall Effect::render(Effect *this, __int64 renderOpt, float zOffset, __int64 priority)
{
  __int64 v4; // r8

  ((void (__fastcall *)(Effect *, __int64, __int64, __int64))this->setRenderArg)(this, renderOpt, v4, priority);
  EffectTaskManager::addRenderStack(*(EffectTaskManager **)(*(_QWORD *)&AppMain::pApp + 2507504i64), this);
}

void __fastcall Effect::renderSetting(Effect *this)
{
  Effect *siblingFront; // rcx
  Effect *child; // rcx

  siblingFront = this->siblingFront;
  if ( siblingFront )
    siblingFront->renderSetting(siblingFront);
  child = this->child;
  if ( child )
    child->renderSetting(child);
  this->ownRenderSetting(this);
}

void __fastcall Effect::setBlendProjection(
        Effect *this,
        float projNormalAngOffset,
        const OGLVec3 *BlendProjectionCenterPos,
        const OGLMatrix *OrthoView,
        const OGLMatrix *OrthoProj)
{
  Effect *child; // rcx

  do
  {
    this->m_BlendProjData.projNormalAngLightOffset = projNormalAngOffset;
    this->m_BlendProjData.blendProjectionCenterPos.x = BlendProjectionCenterPos->x;
    this->m_BlendProjData.blendProjectionCenterPos.y = BlendProjectionCenterPos->y;
    this->m_BlendProjData.blendProjectionCenterPos.z = BlendProjectionCenterPos->z;
    child = this->child;
    *(_OWORD *)this->m_BlendProjData.orthoView.m = *(_OWORD *)OrthoView->m;
    *(_OWORD *)&this->m_BlendProjData.orthoView.m[4] = *(_OWORD *)&OrthoView->m[4];
    *(_OWORD *)&this->m_BlendProjData.orthoView.m[8] = *(_OWORD *)&OrthoView->m[8];
    *(_OWORD *)&this->m_BlendProjData.orthoView.m[12] = *(_OWORD *)&OrthoView->m[12];
    this->m_BlendProjData.orthoProj = *OrthoProj;
    if ( child )
      Effect::setBlendProjection(child, projNormalAngOffset, BlendProjectionCenterPos, OrthoView, OrthoProj);
    this = this->siblingFront;
  }
  while ( this );
}

void __fastcall Effect::setBlendProjection(Effect *this)
{
  __int64 v2; // rdi
  float y; // xmm7_4
  float x; // xmm8_4
  float z; // xmm9_4
  float v6; // xmm3_4
  float v7; // xmm1_4
  float v8; // xmm0_4
  float v9; // xmm3_4
  float v10; // xmm0_4
  float v11; // xmm8_4
  float v12; // xmm7_4
  float v13; // xmm9_4
  float v14; // xmm11_4
  float v15; // xmm12_4
  float v16; // xmm13_4
  float v17; // xmm0_4
  const OGLMatrix *v18; // r10
  Effect *child; // rcx
  Effect *siblingFront; // rcx

  if ( this->m_BlendProjData.blendProjectionFlag )
  {
    v2 = *(_QWORD *)&AppMain::pApp;
    y = this->m_BlendProjData.blendProjectionCenterPos.y;
    x = this->m_BlendProjData.blendProjectionCenterPos.x;
    z = this->m_BlendProjData.blendProjectionCenterPos.z;
    LODWORD(v6) = COERCE_UNSIGNED_INT(
                    COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                   (float)((float)(y * *(float *)(*(_QWORD *)&AppMain::pApp + 1551764i64))
                                         + (float)(x * *(float *)(*(_QWORD *)&AppMain::pApp + 1551760i64)))
                                 + (float)(z * *(float *)(*(_QWORD *)&AppMain::pApp + 1551768i64))) ^ _xmm)
                  + (float)((float)((float)(*(float *)(*(_QWORD *)&AppMain::pApp + 1551740i64)
                                          * *(float *)(*(_QWORD *)&AppMain::pApp + 1551764i64))
                                  + (float)(*(float *)(*(_QWORD *)&AppMain::pApp + 1551736i64)
                                          * *(float *)(*(_QWORD *)&AppMain::pApp + 1551760i64)))
                          + (float)(*(float *)(*(_QWORD *)&AppMain::pApp + 1551744i64)
                                  * *(float *)(*(_QWORD *)&AppMain::pApp + 1551768i64)))) ^ _xmm;
    v7 = v6 * *(float *)(*(_QWORD *)&AppMain::pApp + 1551760i64);
    v8 = (float)(v6 * *(float *)(*(_QWORD *)&AppMain::pApp + 1551764i64))
       + *(float *)(*(_QWORD *)&AppMain::pApp + 1551740i64);
    v9 = (float)((float)(v6 * *(float *)(*(_QWORD *)&AppMain::pApp + 1551768i64))
               + *(float *)(*(_QWORD *)&AppMain::pApp + 1551744i64))
       - z;
    v10 = sqrtf(
            (float)((float)((float)(v8 - y) * (float)(v8 - y))
                  + (float)((float)((float)(v7 + *(float *)(*(_QWORD *)&AppMain::pApp + 1551736i64)) - x)
                          * (float)((float)(v7 + *(float *)(*(_QWORD *)&AppMain::pApp + 1551736i64)) - x)))
          + (float)(v9 * v9));
    v11 = x - *(float *)(v2 + 1550924);
    v12 = y - *(float *)(v2 + 1550928);
    v13 = z - *(float *)(v2 + 1550932);
    v14 = v10 * 0.5;
    LODWORD(v15) = COERCE_UNSIGNED_INT(v10 * 0.5) ^ _xmm;
    LODWORD(v16) = COERCE_UNSIGNED_INT((float)((float)(v10 * 0.5) * 0.0625) * 9.0) ^ _xmm;
    v17 = sqrtf((float)((float)(v12 * v12) + (float)(v11 * v11)) + (float)(v13 * v13));
    if ( v17 != 0.0 )
    {
      v11 = v11 / v17;
      v12 = v12 / v17;
      v13 = v13 / v17;
    }
    this->m_BlendProjData.projNormalAngLightOffset = acosf(
                                                       (float)((float)(v12 * *(float *)(v2 + 1551752))
                                                             + (float)(v11 * *(float *)(v2 + 1551748)))
                                                     + (float)(v13 * *(float *)(v2 + 1551756)));
    *(_OWORD *)this->m_BlendProjData.orthoView.m = *(_OWORD *)(v2 + 1551288);
    *(_OWORD *)&this->m_BlendProjData.orthoView.m[4] = *(_OWORD *)(v2 + 1551304);
    *(_OWORD *)&this->m_BlendProjData.orthoView.m[8] = *(_OWORD *)(v2 + 1551320);
    *(_OWORD *)&this->m_BlendProjData.orthoView.m[12] = *(_OWORD *)(v2 + 1551336);
    OGLMatrix::ortho(&this->m_BlendProjData.orthoProj, v15, v14, v16, (float)(v14 * 0.0625) * 9.0, 1.0, 2048.0);
    child = this->child;
    if ( child )
      Effect::setBlendProjection(
        child,
        this->m_BlendProjData.projNormalAngLightOffset,
        &this->m_BlendProjData.blendProjectionCenterPos,
        &this->m_BlendProjData.orthoView,
        v18);
    siblingFront = this->siblingFront;
    if ( siblingFront )
      Effect::setBlendProjection(
        siblingFront,
        this->m_BlendProjData.projNormalAngLightOffset,
        &this->m_BlendProjData.blendProjectionCenterPos,
        &this->m_BlendProjData.orthoView,
        v18);
  }
}

void __fastcall Effect::setBlendProjection(Effect *this, bool flag)
{
  Effect *child; // rcx

  do
  {
    child = this->child;
    this->m_BlendProjData.blendProjectionFlag = flag;
    if ( child )
      Effect::setBlendProjection(child, flag);
    this = this->siblingFront;
  }
  while ( this );
}

void __fastcall Effect::setEffectData(Effect *this, EffectData *emitterData)
{
  this->m_SettingData = emitterData;
}

void __fastcall Effect::setEffectDataListManager(Effect *this, EffectDataListManager *pEffectDataListManager)
{
  Effect *child; // rcx

  do
  {
    child = this->child;
    this->m_pEffectDataListManager = pEffectDataListManager;
    if ( child )
      Effect::setEffectDataListManager(child, pEffectDataListManager);
    this = this->siblingFront;
  }
  while ( this );
}

void __fastcall Effect::setEmitFlag(Effect *this, bool flag)
{
  Effect *child; // rcx
  Effect *siblingFront; // rcx

  child = this->child;
  if ( child )
    ((void (__fastcall *)(Effect *))child->setEmitFlag)(child);
  siblingFront = this->siblingFront;
  if ( siblingFront )
    siblingFront->setEmitFlag(siblingFront, flag);
  this->m_EmitFlag = flag;
}

void __fastcall Effect::setJobNum(Effect *this, int setNum)
{
  Effect *child; // rcx

  do
  {
    child = this->child;
    this->jobNum = setNum;
    if ( child )
      Effect::setJobNum(child, setNum);
    this = this->siblingFront;
  }
  while ( this );
}

void __fastcall Effect::setRenderArg(Effect *this, int renderOpt, float zOffset, int priority)
{
  __int64 v4; // r8
  Effect *siblingFront; // rcx
  Effect *child; // rcx

  this->m_RenderArg.renderOpt = renderOpt;
  this->m_RenderArg.zOffset = zOffset;
  this->m_RenderArg.priority = priority;
  siblingFront = this->siblingFront;
  if ( siblingFront )
    ((void (__fastcall *)(Effect *))siblingFront->setRenderArg)(siblingFront);
  child = this->child;
  if ( child )
    ((void (__fastcall *)(Effect *, _QWORD, __int64, _QWORD))child->setRenderArg)(
      child,
      (unsigned int)renderOpt,
      v4,
      (unsigned int)priority);
}

void __fastcall Effect::terminate(Effect *this)
{
  Effect *siblingFront; // rcx
  Effect *child; // rcx

  this->ownTerminate(this);
  siblingFront = this->siblingFront;
  if ( siblingFront )
    siblingFront->terminate(siblingFront);
  child = this->child;
  if ( child )
    child->terminate(child);
}

void __fastcall Effect::udpateExe(Effect *this, ActionArgument *actArg)
{
  ((void (__fastcall *)(Effect *))this->mainUpdate)(this);
  this->postUpdate(this, actArg);
}

void __fastcall Effect::update(Effect *this, bool mirrorFlag, const OGLMatrix *actMat, float frame, float colorAlpha)
{
  this->m_ActArg.mirrorFlag = mirrorFlag;
  this->m_ActArg.frame = frame;
  this->m_ActArg.actMat = *actMat;
  this->m_ActArg.alpha = colorAlpha;
  EffectTaskManager::addUpdateStack(*(EffectTaskManager **)(*(_QWORD *)&AppMain::pApp + 2507504i64), this);
}

