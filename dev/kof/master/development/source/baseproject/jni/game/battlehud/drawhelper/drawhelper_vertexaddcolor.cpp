#include "dev/silverware/git/sdk/agsingleton.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestagedatas.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/matchingsystem.h"
#include "dev/silverware/git/sdk/util/agperformancecounter.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector4unaligned.h"
#include "dev/silverware/git/sdk/agmutex.inl"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/tkndatas.h"
#include "dev/silverware/git/sdk/agclock.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/stdexcept"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/tween.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaprojectdataformat.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/utility"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charabasestatusformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_event.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/vecidx_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/iosfwd"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/map"
#include "dev/kof/master/development/source/baseproject/jni/game/check/inputkeyrecord.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/png_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_keycodes.h"
#include "program files (x86)/windows kits/8.1/include/um/winuser.h"
#include "dev/silverware/git/sdk/memory/agallocators.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/floatinvec.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtree"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "dev/silverware/git/sdk/input/agcontrollercomponent.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_hashkey.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshkey.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixstate.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_gradients.h"
#include "dev/silverware/git/sdk/agmovieplayer.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steam_api.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/tuple"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_rasterizer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_viewport.h"
#include "dev/kof/master/development/source/ps4project/baseproject/pcutil/pcdummy.h"
#include "dev/silverware/git/sdk/util/agdelegate.h"
#include "dev/silverware/git/sdk/agreferencecount.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_new.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/bodypush.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/quat_aos.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_missiondataloading.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_drawableimage.h"
#include "dev/kof/master/development/source/baseproject/jni/game/network/netmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hal.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_buffer.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/floatinvec.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "dev/kof/master/development/source/baseproject/jni/game/network/leaderboard.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_characterdef.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstddef"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_manager.h"
#include "dev/silverware/git/sdk/agvector2.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/type_traits"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_vec64.h"
#include "dev/silverware/git/sdk/agmath.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/silverware/git/sdk/filesystem/agmount.h"
#include "dev/silverware/git/sdk/input/agcontroller.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/operationmapper.h"
#include "dev/silverware/git/sdk/filesystem/agdirectory.h"
#include "dev/silverware/git/sdk/system/aguser.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/particledata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filters.h"
#include "dev/silverware/git/sdk/agstring.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/easingnumber.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/weapon/actorweapon.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filterparams.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_math.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/mutex"
#include "dev/kof/master/development/source/baseproject/jni/game/system/battlecontroller.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphqueue.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/string"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/chrono"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_font.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/libcommon.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/vec_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/limits"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleonlinewatching.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actionsystem.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaactiondataformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessdefs.h"
#include "dev/silverware/git/sdk/3rdparty/steam/matchmakingtypes.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/ios"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charafilebase.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocnum"
#include "dev/silverware/git/sdk/system/agsysteminfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatapacked.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_pathdatapacker.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleloading.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_linebuffer.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xiosbase"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_highlight.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocale"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloat.h"
#include "program files (x86)/windows kits/8.1/include/um/winbase.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocinfo"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/mat_aos.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/commanddataformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_profiler.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exthread.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/debug/logging.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/bilinkable.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vector"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_states.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/tga_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_statebag.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/heapmemory.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/titlestoragesystem.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_ps4modelroom.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/mutex.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thread"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_simplemeshcache.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/memory"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory"
#include "dev/kof/master/development/source/baseproject/jni/game/appmain.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/fontprovider/render_fontproviderwinapi.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thr/xthread"
#include "dev/silverware/git/sdk/agdisplay.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/asynccharafileload.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/future_asset.h"
#include "dev/silverware/git/sdk/agvector4.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/globalheapmemory.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/asyncjob.h"
#include "dev/silverware/git/sdk/agvector3.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/fixmemory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_bundle.h"
#include "dev/silverware/git/sdk/input/agsdlmappingparser.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/atomic_int.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/matrix4unaligned.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestageresourcecontainer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloatmp.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/atomic"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/quat_aos.h"
#include "dev/silverware/git/sdk/platforms/pc/system/agpcsysteminfo.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestageshader.h"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/hitrectcollection.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapemeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/jpeg_imagefile.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treetext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefileutil.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/trainingsetting.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/combomissionattackeventlistener.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charamaterialsettingformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_docview.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/rapper/graphicsopt.h"
#include "dev/silverware/git/sdk/agreferencecountinl.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/fix32.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_range.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actorcharabase.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlehud.h"
#include "dev/kof/master/development/source/baseproject/jni/game/define/charabonedefine.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "dev/silverware/git/sdk/system/agusermanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_hash.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battleeventhandler.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/colorholder.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/damagesetting.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix4x4.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/battleplayerinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixpool.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shader.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_sse.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_sgmlparser.h"
#include "dev/silverware/git/sdk/util/agservice.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steamclientpublic.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_types.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actionblackout.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_context.h"
#include "dev/silverware/git/sdk/agthreadpool.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_constants.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessgen.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic0.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treeshape.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessellator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmodel.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/cpusequencedataformat.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglcurve.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/refcountable.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/variableheapmemorybase.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/shot/actorshot.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actorchara.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/math.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/commandcheck.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/restrictringbuffer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitivebundle.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector2unaligned.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treecachenode.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/materialshowcontrol.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treenode.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_loader.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cacheeffect.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_system.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphfitter.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglsprite.h"
#include "dev/silverware/git/sdk/agmemorystream.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/syncmenuimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefile.h"
#include "dev/silverware/git/sdk/agmemorypool.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_functions.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/savedata.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/moviedatadefine.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_player.h"
#include "dev/silverware/git/sdk/input/agcontrollerbuttoncomponent.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "dev/silverware/git/sdk/agpointerinl.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charahitrectformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_types.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglrender.h"
#include "dev/silverware/git/sdk/agstream.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_resource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/silverware/git/sdk/aghash.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/mediamanager.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/physicalheapmemory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "dev/silverware/git/sdk/agstringutils.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglfog.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglbone.h"
#include "dev/silverware/git/sdk/agsemaphore.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_stroker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "dev/silverware/git/sdk/agsemaphore.inl"
#include "dev/silverware/git/sdk/agconditionvariable.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/dds_imagefile.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/audiopresenter.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/condition_variable"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleonline.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textmeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/input/imesystem.h"
#include "dev/silverware/git/sdk/agcondition.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actor.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphparam.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xxatomic"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/deque"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charadataunify.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcache.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/unordered_map"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaattackdataformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcacheconfig.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charadamagesettingformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hairliner.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xhash"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_filterdesc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_styledtext.h"
#include "dev/silverware/git/sdk/filesystem/agfile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix3x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_core.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_queue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "dev/silverware/git/sdk/filesystem/agpath.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_fontmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitive.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "dev/silverware/git/sdk/agreferenceinl.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_prefightfaceoff.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocaddr.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmirror.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/boolinvec.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/time.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_radixtree.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdatalistmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_twips.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectcommon.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_containers.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_wwhelper.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/jobmanager.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/mediasound.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/hidpad/hidpadsystem.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exlockable.h"
#include "program files (x86)/windows kits/8.1/include/shared/guiddef.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/soundutil.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/combomissiondataformat.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/sounddata.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/soundgroupdataformat.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/effect.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector3unaligned.h"
#include "dev/kof/master/development/source/baseproject/jni/game/network/playtogether.h"
#include "program files (x86)/windows kits/8.1/include/shared/stralign.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_bank.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_vertex.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_typeinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/fontprovider/render_fontproviderhud.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_wstring.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglshader.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/resourcemanager.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/shaderfxhelper.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/randommt.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xfacet"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xutility"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlecall/battlecall.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/effect/actoreffect.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actorobject.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_debug.h"
#include "dev/silverware/git/sdk/3rdparty/steam/isteamhtmlsurface.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/vec_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/list"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actoroption.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/boolinvec.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/cameracheck.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/freecameracheck.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threadcheck.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/vectormath_aos.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textlayout.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_image.h"
#include "dev/silverware/git/sdk/agcondition.inl"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdata/effectdata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/savedatadefine.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/chartdata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogleffect.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/texstring.h"
#include "program files (x86)/windows kits/8.1/include/um/winnt.h"
#include "dev/silverware/git/sdk/agreferencedobjectinl.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/functional"
#include "dev/silverware/git/sdk/agpointer.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/drawhelper/drawhelper_vertexaddcolor.h"
#include "program files (x86)/windows kits/8.1/include/shared/basetsd.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstring"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestageutil.h"
#include "dev/kof/master/development/source/baseproject/jni/game/cpuseq/battlecpu.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdata/effectappdata.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_movie.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/drawhelper/drawhelper.h"
#include "dev/silverware/git/sdk/agreferencedobject.h"
#include "dev/kof/master/development/source/baseproject/jni/game/cpuseq/sequencecontroller.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_operation.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogllight.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory0"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/errorchecker.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/bitset"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestage.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/translate_table.h"
#include "dev/silverware/git/sdk/agrectangle.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/exception"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/tkndata.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/shared_lua_context.h"
#include "dev/kof/master/development/source/baseproject/jni/game/system/battlesysteminfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_screentoworld.h"
#include "dev/silverware/git/sdk/util/agservicecommand.h"
#include "dev/silverware/git/sdk/agconditionvariable.inl"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_exception.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_strokeraa.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_scale9grid.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exwaitcondition.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/mat_aos.h"
#include "dev/silverware/git/sdk/agthread.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraystaticbuff.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/cameramotionpreviewsettings.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/stageprojectdata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "dev/silverware/git/sdk/agmutex.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/array"
#include "dev/kof/master/development/source/baseproject/jni/game/check/combomissionjudge.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cxform.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "dev/silverware/git/sdk/agscopedlock.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steam_api_internal.h"
#include "dev/kof/master/development/source/ps4project/baseproject/pcutil/pccontrolsmanager.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/algorithm"
#include "dev/kof/master/development/source/baseproject/jni/game/network/chkdiscononlinesv.h"
#include "dev/silverware/git/sdk/util/agdebugchannels.h"
#include "dev/silverware/git/sdk/input/aginputmanager.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/system_error"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/drawhelper/drawhelper.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/appmain.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmatrix.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/rapper/graphicsopt.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/image/graphics.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/core/glstate.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/pcdummy.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglshader.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglrender.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/ag/kofshadermanager.cpp"

std::piecewise_construct_t std::piecewise_construct; // 0x14088C4FE
void DrawHelperVertexAddColor::releaseImpl(); // 0x1400D0BF0
void DrawHelperVertexAddColor::changeBufferSize(long imageIndex, DrawHelper::ERenderMode::Type renderMode, long size); // 0x1400D0CD0
void DrawHelperVertexAddColor::draw(long imageID, long rx, long ry, const _C_CONV & rect, const DrawHelper::DrawParams & params, bool nonNeoScaleUp); // 0x1400D0E40
void DrawHelperVertexAddColor::drawStack(); // 0x1400D13D0
void DrawHelperVertexAddColor::setClip(long x, long y, long width, long height); // 0x1400D1730
void DrawHelperVertexAddColor::clearClip(); // 0x1400D1750
long DrawHelperVertexAddColor::getImageID(Image * pImage); // 0x1400D1760
DrawHelper::ImageInfo * DrawHelperVertexAddColor::createImageInfo(long imageID); // 0x1400D17C0
DrawHelper::ImageInfo * DrawHelperVertexAddColor::getImageInfo(long imageID); // 0x1400D1900
void DrawHelperVertexAddColor::drawImage(OGLTexture * pTexture, MeshVertexInfo2D * pVertices, unsigned long * pIndexces, long vertexCount, long indexCount, const float * pModelViewProjection); // 0x1400D1950//decompilation failure at 14088C4FE!
void __fastcall DrawHelperVertexAddColor::changeBufferSize(
        DrawHelperVertexAddColor *this,
        int imageIndex,
        DrawHelper::ERenderMode::Type renderMode,
        int size)
{
  __int64 v5; // rbp
  __int64 v7; // rsi
  unsigned __int64 v8; // rdx
  char *v9; // rsi
  void *v10; // rcx
  int v11; // ebp
  int v12; // edi
  void *v13; // rax
  unsigned __int64 v14; // rdx
  unsigned int *m_pIndexces; // rcx
  int v16; // eax
  unsigned int *v17; // rax
  __int64 v18; // r8
  int v19; // eax
  unsigned int *v20; // rdx
  int v21; // ecx

  v5 = renderMode;
  v7 = imageIndex;
  if ( !this->isError(this) && (int)v7 >= 0 && this->m_renderInfoCount > (int)v7 )
  {
    v8 = 56 * v7;
    v9 = (char *)&this->m_pRenderInfos[v7] + 24 * v5;
    if ( *((_DWORD *)v9 + 4) < size && size > 0 )
    {
      v10 = (void *)*((_QWORD *)v9 + 1);
      v11 = 4 * size;
      *((_DWORD *)v9 + 4) = size;
      v12 = 0;
      if ( v10 )
      {
        operator delete(v10, v8);
        *((_QWORD *)v9 + 1) = 0i64;
      }
      v13 = operator new[](saturated_mul(v11, 0x40ui64));
      *((_QWORD *)v9 + 1) = v13;
      if ( !v13 )
        goto LABEL_13;
      memset(v13, 0, (__int64)v11 << 6);
      if ( this->m_indexSize > *((_DWORD *)v9 + 4) )
        return;
      m_pIndexces = this->m_pIndexces;
      if ( m_pIndexces )
      {
        operator delete(m_pIndexces, v14);
        this->m_pIndexces = 0i64;
      }
      v16 = *((_DWORD *)v9 + 4);
      this->m_indexSize = v16;
      v17 = (unsigned int *)operator new[](saturated_mul(6 * v16, 4ui64));
      this->m_pIndexces = v17;
      if ( v17 )
      {
        if ( this->m_indexSize > 0 )
        {
          v18 = 0i64;
          v19 = 2;
          do
          {
            v20 = &this->m_pIndexces[v18];
            ++v12;
            v18 += 6i64;
            *v20 = v19 - 2;
            v20[3] = v19 - 1;
            v20[1] = v19 - 1;
            v21 = v19 + 1;
            v20[5] = v19;
            v20[2] = v19;
            v19 += 4;
            v20[4] = v21;
          }
          while ( v12 < this->m_indexSize );
        }
      }
      else
      {
LABEL_13:
        this->m_bError = 1;
      }
    }
  }
}

void __fastcall DrawHelperVertexBuffer::clearClip(DrawHelperVertexBuffer *this)
{
  this->m_clip.bClip = 0;
}

DrawHelperVertexAddColor::RenderInfo *__fastcall DrawHelperVertexAddColor::createImageInfo(
        DrawHelperVertexAddColor *this,
        int imageID)
{
  __int64 v2; // rbp
  unsigned __int64 m_renderInfoCount; // r14
  unsigned __int64 v5; // rbx
  DrawHelperVertexAddColor::RenderInfo *m_pRenderInfos; // rsi
  DrawHelperVertexAddColor::RenderInfo *v7; // rax
  unsigned __int64 v8; // rdx
  __int64 v9; // rcx
  DrawHelperVertexAddColor::RenderInfo *v10; // r9
  DrawHelperVertexAddColor::RenderInfo *v11; // r8
  DrawHelperVertexAddColor::RenderInfo::Buffer *buffers; // rax
  DrawHelperVertexAddColor::RenderInfo *v13; // rax
  __int128 v14; // xmm0

  v2 = imageID;
  if ( imageID < 0 )
    return 0i64;
  m_renderInfoCount = this->m_renderInfoCount;
  if ( (int)m_renderInfoCount <= imageID )
  {
    this->m_renderInfoCount = imageID + 8;
    v5 = imageID + 8;
    m_pRenderInfos = this->m_pRenderInfos;
    v7 = (DrawHelperVertexAddColor::RenderInfo *)operator new[](saturated_mul(v5, 0x38ui64));
    v9 = 0i64;
    v10 = v7;
    if ( v7 )
    {
      v11 = v7;
      if ( (_DWORD)v2 != -8 )
      {
        do
        {
          --v5;
          v11->image.pImage = 0i64;
          v8 = 2i64;
          buffers = v11->buffers;
          do
          {
            buffers->pVertices = 0i64;
            *(_QWORD *)&buffers->size = 0i64;
            buffers->shortageSize = 0;
            ++buffers;
            --v8;
          }
          while ( v8 );
          ++v11;
        }
        while ( v5 );
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
          *(_OWORD *)&v13[v9 - 1].buffers[0].size = *(_OWORD *)&m_pRenderInfos[v9 - 1].buffers[0].size;
          *(_OWORD *)&v13[v9 - 1].buffers[1].pVertices = *(_OWORD *)&m_pRenderInfos[v9 - 1].buffers[1].pVertices;
          *(_QWORD *)&v13[v9 - 1].buffers[1].shortageSize = *(_QWORD *)&m_pRenderInfos[v9 - 1].buffers[1].shortageSize;
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

void __fastcall DrawHelperVertexAddColor::draw(
        DrawHelperVertexAddColor *this,
        int imageID,
        int rx,
        int ry,
        const _C_CONV *rect,
        const DrawHelper::DrawParams *params,
        bool nonNeoScaleUp)
{
  __int64 v9; // rdi
  int w; // esi
  float v12; // xmm5_4
  float h; // xmm7_4
  float scaleW; // xmm8_4
  float scaleH; // xmm9_4
  DrawHelperVertexAddColor::RenderInfo *v16; // rdx
  Image *pImage; // rdi
  __int64 renderMode; // rax
  __int64 v19; // r11
  int stackCount; // er12
  float v21; // xmm3_4
  float v22; // xmm4_4
  float v23; // xmm10_4
  float v24; // xmm0_4
  float v25; // xmm3_4
  float v26; // xmm9_4
  int v27; // ebp
  int v28; // er10
  float v29; // xmm4_4
  float cy; // xmm1_4
  float cx; // xmm0_4
  bool bMirror; // cl
  float v33; // xmm2_4
  float v34; // xmm2_4
  DrawHelper::ERenderAlign::Type align; // er10
  int v36; // eax
  int v37; // ebp
  float m_Width; // xmm11_4
  float m_Height; // xmm14_4
  float v40; // xmm8_4
  float v41; // xmm7_4
  float v42; // xmm3_4
  float v43; // xmm2_4
  float v44; // xmm10_4
  float v45; // xmm12_4
  float v46; // xmm9_4
  float v47; // xmm13_4
  float ex; // xmm4_4
  float sx; // xmm1_4
  float ey; // xmm6_4
  float sy; // xmm5_4
  float v52; // xmm0_4
  float v53; // xmm3_4
  float v54; // xmm0_4
  float v55; // xmm2_4
  __int64 v56; // rcx
  float m_depth; // xmm0_4
  float alpha; // xmm4_4
  float v59; // xmm3_4
  __m128i v60; // xmm2
  int colorARGB_low; // eax
  float v62; // xmm3_4
  float v63; // xmm1_4

  v9 = imageID;
  if ( !this->isError(this) && (int)v9 >= 0 && this->m_renderInfoCount > (int)v9 )
  {
    w = rect->w;
    v12 = (float)w;
    if ( (float)w != 0.0 )
    {
      h = (float)rect->h;
      if ( h != 0.0 )
      {
        scaleW = params->scaleW;
        if ( scaleW > 0.0 )
        {
          scaleH = params->scaleH;
          if ( scaleH > 0.0 )
          {
            v16 = &this->m_pRenderInfos[v9];
            pImage = v16->image.pImage;
            if ( v16->image.pImage )
            {
              renderMode = params->renderMode;
              v19 = renderMode;
              stackCount = v16->buffers[renderMode].stackCount;
              if ( v16->buffers[renderMode].size <= stackCount )
              {
                ++v16->buffers[renderMode].shortageSize;
                return;
              }
              v21 = *(float *)&FLOAT_1_0;
              v22 = *(float *)&FLOAT_1_0;
              if ( !nonNeoScaleUp )
              {
                v22 = (float)*(int *)(*(_QWORD *)&AppMain::pApp + 28i64) / 1920.0;
                v21 = (float)*(int *)(*(_QWORD *)&AppMain::pApp + 32i64) / 1080.0;
              }
              v23 = (float)rect->w;
              v24 = (float)ry * v21;
              v25 = v21 * scaleH;
              v26 = (float)rect->h;
              v27 = (int)v24;
              v28 = (int)(float)((float)rx * v22);
              v29 = v22 * scaleW;
              cy = (float)rect->cy;
              cx = (float)rect->cx;
              if ( v29 != 1.0 )
              {
                v23 = v12 * v29;
                if ( cx != 0.0 )
                  cx = (float)(cx / v12) * v23;
              }
              if ( v25 != 1.0 )
              {
                v26 = h * v25;
                if ( cy != 0.0 )
                  cy = (float)(cy / h) * v26;
              }
              bMirror = params->bMirror;
              v33 = (float)v28;
              if ( bMirror )
                v34 = v33 + cx;
              else
                v34 = v33 - cx;
              align = params->align;
              v36 = (int)v34;
              v37 = (int)(float)((float)v27 - cy);
              if ( align == Right )
              {
                v36 -= w;
              }
              else if ( align == Center )
              {
                v36 = (int)(float)((float)v36 - (float)(v12 * 0.5));
              }
              m_Width = (float)pImage->m_Width;
              m_Height = (float)pImage->m_Height;
              v40 = (float)v36;
              v41 = (float)v37;
              v42 = (float)v36 + v23;
              v43 = (float)v37 + v26;
              v44 = (float)rect->sx / m_Width;
              v45 = (float)(rect->h + rect->sy) / m_Height;
              v46 = (float)(w + rect->sx) / m_Width;
              v47 = (float)rect->sy / m_Height;
              if ( bMirror )
              {
                v44 = (float)(w + rect->sx) / m_Width;
                v46 = (float)rect->sx / m_Width;
              }
              if ( !this->m_clip.bClip )
                goto LABEL_53;
              ex = (float)this->m_clip.ex;
              if ( v40 < ex )
              {
                sx = (float)this->m_clip.sx;
                if ( sx < v42 )
                {
                  ey = (float)this->m_clip.ey;
                  if ( v41 < ey )
                  {
                    sy = (float)this->m_clip.sy;
                    if ( sy < v43 )
                    {
                      if ( sx > v40 )
                      {
                        if ( bMirror )
                          v52 = v40 - sx;
                        else
                          v52 = sx - v40;
                        v40 = (float)this->m_clip.sx;
                        v44 = v44 + (float)(v52 / m_Width);
                      }
                      if ( v42 > ex )
                      {
                        if ( bMirror )
                          v53 = ex - v42;
                        else
                          v53 = v42 - ex;
                        v46 = v46 - (float)(v53 / m_Width);
                        v42 = (float)this->m_clip.ex;
                      }
                      if ( sy > v41 )
                      {
                        if ( bMirror )
                          v54 = v41 - sy;
                        else
                          v54 = sy - v41;
                        v41 = (float)this->m_clip.sy;
                        v47 = v47 + (float)(v54 / m_Height);
                      }
                      if ( v43 > ey )
                      {
                        if ( bMirror )
                          v55 = ey - v43;
                        else
                          v55 = v43 - ey;
                        v45 = v45 - (float)(v55 / m_Height);
                        v43 = (float)this->m_clip.ey;
                      }
LABEL_53:
                      v56 = (__int64)&v16->buffers[v19].pVertices[(__int64)(4 * stackCount)];
                      *(float *)(v56 + 8) = this->m_depth;
                      *(float *)v56 = v40;
                      *(float *)(v56 + 4) = v41;
                      *(float *)(v56 + 72) = this->m_depth;
                      *(float *)(v56 + 68) = v43;
                      *(float *)(v56 + 64) = v40;
                      m_depth = this->m_depth;
                      *(float *)(v56 + 128) = v42;
                      *(float *)(v56 + 136) = m_depth;
                      *(float *)(v56 + 132) = v41;
                      *(float *)(v56 + 200) = this->m_depth;
                      *(float *)(v56 + 192) = v42;
                      *(float *)(v56 + 196) = v43;
                      *(float *)(v56 + 56) = v44;
                      *(float *)(v56 + 60) = v47;
                      *(float *)(v56 + 120) = v44;
                      *(float *)(v56 + 124) = v45;
                      *(float *)(v56 + 184) = v46;
                      *(float *)(v56 + 188) = v47;
                      *(float *)(v56 + 248) = v46;
                      *(float *)(v56 + 252) = v45;
                      alpha = params->alpha;
                      v59 = (float)BYTE2(params->colorARGB);
                      v60 = _mm_cvtsi32_si128(BYTE1(params->colorARGB));
                      colorARGB_low = LOBYTE(params->colorARGB);
                      *(float *)(v56 + 52) = alpha;
                      v62 = v59 / 255.0;
                      *(float *)(v56 + 40) = v62;
                      v63 = (float)colorARGB_low / 255.0;
                      *(float *)v60.m128i_i32 = _mm_cvtepi32_ps(v60).m128_f32[0] / 255.0;
                      *(float *)(v56 + 48) = v63;
                      *(_DWORD *)(v56 + 44) = v60.m128i_i32[0];
                      *(float *)(v56 + 116) = alpha;
                      *(float *)(v56 + 104) = v62;
                      *(_DWORD *)(v56 + 108) = v60.m128i_i32[0];
                      *(float *)(v56 + 112) = v63;
                      *(float *)(v56 + 180) = alpha;
                      *(float *)(v56 + 168) = v62;
                      *(_DWORD *)(v56 + 172) = v60.m128i_i32[0];
                      *(float *)(v56 + 176) = v63;
                      *(float *)(v56 + 244) = alpha;
                      *(float *)(v56 + 232) = v62;
                      *(_DWORD *)(v56 + 236) = v60.m128i_i32[0];
                      *(float *)(v56 + 240) = v63;
                      ++v16->buffers[v19].stackCount;
                      this->m_depth = this->m_depth + 0.000099999997;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
}

void __fastcall DrawHelperVertexAddColor::drawImage(
        DrawHelperVertexAddColor *this,
        OGLTexture *pTexture,
        MeshVertexInfo2D *pVertices,
        unsigned int *pIndexces,
        int vertexCount,
        int indexCount,
        const float *pModelViewProjection)
{
  Framework::GLManager *v10; // rax
  int v11; // edi
  __int64 v12; // rbp
  unsigned __int64 v13; // r8
  char *v14; // rsi
  unsigned __int64 v15; // r8
  void *v16; // r13
  unsigned __int8 v17; // r8
  Framework::GLManager *v18; // rbx
  signed int v19; // er11
  int renderSize; // ecx
  int v21; // eax
  __int64 v22; // r10
  const void *v23; // r11
  int v24; // eax
  signed int v25; // ecx
  int v26; // eax
  __int64 v27; // r10
  int v28; // eax
  signed int v29; // ecx
  __int64 v30; // rax
  Framework::GLManager *v31; // rdx

  if ( !pTexture )
    return;
  if ( !pTexture->m_TexID )
    return;
  v10 = Framework::GLManager::glm;
  v11 = 64;
  Framework::GLManager::glm->renderSize = 64;
  v10->m_vertexInfoCount = indexCount;
  v12 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)&AppMain::pApp + 80i64) + 65944i64);
  if ( !v12 || !*(_DWORD *)v12 )
    return;
  KOFShaderManager::useProgramSlot(
    (KOFShaderManager *)AgSingleton<KOFShaderManager>::ms_instance,
    *(_DWORD *)(v12 + 24));
  v14 = (char *)AgFrameAllocator<AgAllocator<1>>::allocate(
                  &Framework::GLManager::glm->m_agDrawAllocator,
                  vertexCount << 6,
                  v13);
  memmove(v14, pVertices, vertexCount << 6);
  v16 = AgFrameAllocator<AgAllocator<1>>::allocate(&Framework::GLManager::glm->m_agDrawAllocator, 4 * indexCount, v15);
  memmove(v16, pIndexces, 4 * indexCount);
  glUniformMatrix4fvAG(**(_DWORD **)(v12 + 40), 1, v17, pModelViewProjection);
  _glewBindBuffer(0x8892u, 0);
  glEnableVertexAttribArrayAG(0);
  v18 = Framework::GLManager::glm;
  v19 = *(_DWORD *)AgSingleton<KOFShaderManager>::ms_instance[11
                                                            * SLODWORD(AgSingleton<KOFShaderManager>::ms_instance[360450].__vftable)
                                                            + 7].onSingletonInit;
  renderSize = Framework::GLManager::glm->renderSize;
  switch ( renderSize )
  {
    case 64:
      v21 = 64;
      break;
    case 280:
      v21 = 136;
      break;
    case 208:
      v21 = 64;
      break;
    default:
      v21 = 88;
      if ( renderSize == 144 )
        v21 = 144;
      break;
  }
  if ( v19 >= 0 )
  {
    _glewVertexAttribPointer(v19, 3, 0x1406u, 0, v21, v14);
    v18 = Framework::GLManager::glm;
  }
  glEnableVertexAttribArrayAG(3u);
  v23 = v14;
  v24 = v18->renderSize;
  v25 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(88i64 * *(int *)(v22 + 2883600) + v22 + 56) + 8i64) + 12i64);
  switch ( v24 )
  {
    case 64:
      v26 = 64;
      break;
    case 280:
      v26 = 16;
      goto LABEL_25;
    case 208:
      v26 = 64;
      break;
    case 144:
      v26 = 144;
      goto LABEL_25;
    default:
      v26 = 88;
      break;
  }
  v23 = v14 + 40;
LABEL_25:
  if ( v25 >= 0 )
  {
    _glewVertexAttribPointer(v25, 4, 0x1406u, 0, v26, v23);
    v18 = Framework::GLManager::glm;
  }
  glEnableVertexAttribArrayAG(4u);
  v28 = v18->renderSize;
  v29 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(88i64 * *(int *)(v27 + 2883600) + v27 + 56) + 8i64) + 16i64);
  if ( v28 == 64 )
    goto LABEL_34;
  if ( v28 != 280 )
  {
    if ( v28 != 208 )
    {
      if ( v28 == 144 )
      {
        v11 = 144;
        goto LABEL_35;
      }
      v11 = 88;
    }
LABEL_34:
    v14 += 56;
    goto LABEL_35;
  }
  v11 = 8;
LABEL_35:
  if ( v29 >= 0 )
    _glewVertexAttribPointer(v29, 2, 0x1406u, 0, v11, v14);
  if ( m_ActiveTexture )
  {
    m_ActiveTexture = 0;
    _glewActiveTexture(0x84C0u);
  }
  glsBindTexture(0xDE1u, pTexture->m_TexID);
  glDrawElementsAG(4u, indexCount, 0x1405u, v16);
  v30 = m_ActiveTexture;
  if ( m_ActiveTexture )
  {
    m_ActiveTexture = 0;
    _glewActiveTexture(0x84C0u);
    v30 = m_ActiveTexture;
  }
  m_TexID[v30] = 0;
  v31 = Framework::GLManager::glm;
  Framework::GLManager::glm->m_textureID = 0;
  while ( v31->m_bOpenGLBlocked )
    ;
  glBindTexture(0xDE1u, 0);
}

void __fastcall DrawHelperVertexAddColor::drawStack(DrawHelperVertexAddColor *this)
{
  __int64 v2; // rdx
  __int64 v3; // r13
  int v4; // er12
  __int64 v5; // r15
  int v6; // edx
  int v7; // esi
  __int64 v8; // r14
  DrawHelperVertexAddColor::RenderInfo *v9; // rdi
  int v10; // eax
  __int64 v11; // rax
  int v12; // er15
  __int64 v13; // r12
  int v14; // esi
  __int64 v15; // rdi
  DrawHelperVertexAddColor::RenderInfo *m_pRenderInfos; // r14
  int v17; // ecx
  OGLMatrix v18; // [rsp+40h] [rbp-59h]
  OGLMatrix v19; // [rsp+80h] [rbp-19h] BYREF

  if ( !this->isError(this) )
  {
    v2 = *(_QWORD *)(*(_QWORD *)&AppMain::pApp + 80i64);
    v3 = *(_QWORD *)(*(_QWORD *)&AppMain::pApp + 112i64);
    memset(&v19, 0, sizeof(v19));
    OGLMatrix::multiply(&v19, (OGLMatrix *)(v2 + 148), (OGLMatrix *)(v2 + 20));
    v4 = 0;
    *(_QWORD *)&v18.m[4] = __PAIR64__(LODWORD(v19.m[5]), LODWORD(v19.m[1]));
    *(_QWORD *)v18.m = __PAIR64__(LODWORD(v19.m[4]), LODWORD(v19.m[0]));
    v5 = 8i64;
    *(_QWORD *)&v18.m[12] = __PAIR64__(LODWORD(v19.m[7]), LODWORD(v19.m[3]));
    *(_QWORD *)&v18.m[8] = __PAIR64__(LODWORD(v19.m[6]), LODWORD(v19.m[2]));
    *(_QWORD *)&v18.m[2] = __PAIR64__(LODWORD(v19.m[12]), LODWORD(v19.m[8]));
    *(_QWORD *)&v18.m[6] = __PAIR64__(LODWORD(v19.m[13]), LODWORD(v19.m[9]));
    *(_QWORD *)&v18.m[10] = __PAIR64__(LODWORD(v19.m[14]), LODWORD(v19.m[10]));
    *(_QWORD *)&v18.m[14] = __PAIR64__(LODWORD(v19.m[15]), LODWORD(v19.m[11]));
    v19 = v18;
    do
    {
      if ( v4 )
        v6 = v4 == 1;
      else
        v6 = 3;
      Graphics::setRenderMode(*(Graphics **)(v3 + 8), v6, 255);
      v7 = 0;
      if ( this->m_renderInfoCount > 0 )
      {
        v8 = 0i64;
        do
        {
          v9 = &this->m_pRenderInfos[v8];
          if ( v9->image.pImage )
          {
            v10 = *(_DWORD *)((char *)&v9->buffers[0].pVertices + v5 + 4);
            if ( v10 > 0 )
            {
              this->drawImage(
                this,
                v9->image.pImage,
                *(MeshVertexInfo2D **)((char *)&v9->image.pImage + v5),
                this->m_pIndexces,
                4 * v10,
                6 * v10,
                (const float *)&v19);
              *(_DWORD *)((char *)&v9->buffers[0].pVertices + v5 + 4) = 0;
            }
          }
          ++v7;
          ++v8;
        }
        while ( v7 < this->m_renderInfoCount );
      }
      ++v4;
      v5 += 24i64;
    }
    while ( v4 < 2 );
    v11 = *(_QWORD *)(v3 + 8);
    *(_DWORD *)(v11 + 60) = 0;
    *(_DWORD *)(v11 + 64) = 255;
    *(_DWORD *)(v11 + 68) = 255;
    if ( !*(_BYTE *)(v11 + 128) )
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
    this->m_depth = 0.0;
    v12 = 0;
    v13 = 0i64;
    do
    {
      v14 = 0;
      if ( this->m_renderInfoCount > 0 )
      {
        v15 = v13;
        do
        {
          m_pRenderInfos = this->m_pRenderInfos;
          v17 = *(int *)((char *)&m_pRenderInfos->buffers[0].shortageSize + v15);
          if ( v17 > 0 )
          {
            this->changeBufferSize(
              this,
              v14,
              (DrawHelper::ERenderMode::Type)v12,
              v17 + *(int *)((char *)&m_pRenderInfos->buffers[0].size + v15));
            *(int *)((char *)&m_pRenderInfos->buffers[0].shortageSize + v15) = 0;
          }
          ++v14;
          v15 += 56i64;
        }
        while ( v14 < this->m_renderInfoCount );
      }
      ++v12;
      v13 += 24i64;
    }
    while ( v12 < 2 );
  }
}

__int64 __fastcall DrawHelperVertexAddColor::getImageID(DrawHelperVertexAddColor *this, Image *pImage)
{
  unsigned int v4; // edx
  DrawHelperVertexAddColor::RenderInfo *m_pRenderInfos; // rax
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

DrawHelperVertexAddColor::RenderInfo *__fastcall DrawHelperVertexAddColor::getImageInfo(
        DrawHelperVertexAddColor *this,
        int imageID)
{
  __int64 v3; // rbx
  DrawHelperVertexAddColor::RenderInfo *result; // rax

  v3 = imageID;
  if ( this->isError(this) || (int)v3 < 0 || this->m_renderInfoCount <= (int)v3 )
    return 0i64;
  result = &this->m_pRenderInfos[v3];
  if ( !result->image.pImage )
    return 0i64;
  return result;
}

void __fastcall DrawHelperVertexAddColor::releaseImpl(DrawHelperVertexAddColor *this, unsigned __int64 a2)
{
  int v3; // ebp
  __int64 v4; // r14
  DrawHelperVertexAddColor::RenderInfo *m_pRenderInfos; // rax
  __int64 v6; // rdi
  DrawHelperVertexAddColor::RenderInfo::Buffer *buffers; // rbx
  DrawHelperVertexAddColor::RenderInfo *v8; // rcx
  unsigned int *m_pIndexces; // rcx
  DrawHelperVertexAddColor_vtbl *v10; // rax

  if ( this->m_pRenderInfos )
  {
    v3 = 0;
    if ( this->m_renderInfoCount > 0 )
    {
      v4 = 0i64;
      do
      {
        m_pRenderInfos = this->m_pRenderInfos;
        v6 = 2i64;
        m_pRenderInfos[v4].image.pImage = 0i64;
        buffers = m_pRenderInfos[v4].buffers;
        do
        {
          if ( buffers->pVertices )
          {
            operator delete(buffers->pVertices, a2);
            buffers->pVertices = 0i64;
          }
          *(_QWORD *)&buffers->size = 0i64;
          buffers->shortageSize = 0;
          ++buffers;
          --v6;
        }
        while ( v6 );
        ++v3;
        ++v4;
      }
      while ( v3 < this->m_renderInfoCount );
    }
    v8 = this->m_pRenderInfos;
    if ( v8 )
    {
      operator delete(v8, a2);
      this->m_pRenderInfos = 0i64;
    }
    this->m_renderInfoCount = 0;
  }
  m_pIndexces = this->m_pIndexces;
  if ( m_pIndexces )
  {
    operator delete(m_pIndexces, a2);
    this->m_pIndexces = 0i64;
  }
  v10 = this->__vftable;
  this->m_indexSize = 0;
  v10->clearClip(this);
}

void __fastcall DrawHelperVertexAddColor::setClip(DrawHelperVertexAddColor *this, int x, int y, int width, int height)
{
  this->m_clip.sx = x;
  this->m_clip.bClip = 1;
  this->m_clip.ey = y + height;
  this->m_clip.sy = y;
  this->m_clip.ex = x + width;
}

