#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_drawableimage.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thr/xthread"
#include "dev/kof/master/development/source/baseproject/jni/game/network/netmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hal.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_buffer.h"
#include "dev/kof/master/development/source/baseproject/jni/game/network/leaderboard.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/globalheapmemory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_characterdef.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/fixmemory.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_manager.h"
#include "dev/silverware/git/sdk/input/agsdlmappingparser.h"
#include "dev/silverware/git/sdk/filesystem/agmount.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/matrix4unaligned.h"
#include "dev/silverware/git/sdk/filesystem/agdirectory.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/quat_aos.h"
#include "dev/silverware/git/sdk/platforms/pc/system/agpcsysteminfo.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/operationmapper.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/particledata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filters.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/weapon/actorweapon.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filterparams.h"
#include "dev/silverware/git/sdk/agreferencecountinl.h"
#include "dev/kof/master/development/source/baseproject/jni/game/system/battlecontroller.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_font.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actionsystem.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaactiondataformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessdefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestage.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charafilebase.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatapacked.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/tkndata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_pathdatapacker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_linebuffer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_highlight.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_sse.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloat.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steamclientpublic.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_types.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/cameramotionpreviewsettings.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/stageprojectdata.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/commanddataformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_profiler.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exthread.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/bilinkable.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_states.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/tga_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_statebag.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic0.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/titlestoragesystem.h"
#include "dev/kof/master/development/source/baseproject/jni/game/appmain.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestagedatas.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/math.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/tkndatas.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_simplemeshcache.h"
#include "dev/silverware/git/sdk/agdisplay.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/variableheapmemorybase.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/tween.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/fontprovider/render_fontproviderwinapi.h"
#include "dev/silverware/git/sdk/agvector4.h"
#include "dev/silverware/git/sdk/agvector3.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/asynccharafileload.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/future_asset.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector2unaligned.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/asyncjob.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_bundle.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/atomic_int.h"
#include "dev/silverware/git/sdk/agmemorystream.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloatmp.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/atomic"
#include "dev/silverware/git/sdk/agmemorypool.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_functions.h"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/hitrectcollection.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapemeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/jpeg_imagefile.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic.h"
#include "dev/silverware/git/sdk/input/agcontrollerbuttoncomponent.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "dev/silverware/git/sdk/agpointerinl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treetext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefileutil.h"
#include "dev/silverware/git/sdk/agstream.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_missiondataloading.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/trainingsetting.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/combomissionattackeventlistener.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charamaterialsettingformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_docview.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/rapper/graphicsopt.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/physicalheapmemory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/fix32.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_range.h"
#include "dev/silverware/git/sdk/agsemaphore.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actorcharabase.h"
#include "dev/silverware/git/sdk/system/agusermanager.h"
#include "dev/silverware/git/sdk/agsemaphore.inl"
#include "dev/silverware/git/sdk/agconditionvariable.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlehud.h"
#include "dev/kof/master/development/source/baseproject/jni/game/define/charabonedefine.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/condition_variable"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_hash.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battleeventhandler.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/colorholder.h"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/damagesetting.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix4x4.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/battleplayerinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixpool.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/deque"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shader.h"
#include "dev/silverware/git/sdk/util/agservice.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/easingnumber.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/errorchecker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_sgmlparser.h"
#include "dev/silverware/git/sdk/agthreadpool.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actionblackout.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_context.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_constants.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleonlinewatching.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessgen.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treeshape.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessellator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmodel.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/cpusequencedataformat.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/boolinvec.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/time.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglcurve.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/refcountable.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleloading.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/shot/actorshot.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actorchara.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/commandcheck.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/jobmanager.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/restrictringbuffer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitivebundle.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treecachenode.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/materialshowcontrol.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treenode.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_loader.h"
#include "program files (x86)/windows kits/8.1/include/shared/guiddef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cacheeffect.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_system.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphfitter.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglsprite.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/syncmenuimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefile.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector3unaligned.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_ps4modelroom.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/moviedatadefine.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_player.h"
#include "program files (x86)/windows kits/8.1/include/shared/stralign.h"
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
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_typeinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/dds_imagefile.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/audiopresenter.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/resourcemanager.h"
#include "dev/silverware/git/sdk/agcondition.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xfacet"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xutility"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestageresourcecontainer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textmeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/input/imesystem.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestageshader.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actor.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphparam.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xxatomic"
#include "dev/silverware/git/sdk/3rdparty/steam/isteamhtmlsurface.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/vec_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/list"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charadataunify.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcache.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/boolinvec.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/unordered_map"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaattackdataformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcacheconfig.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charadamagesettingformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hairliner.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xhash"
#include "dev/silverware/git/sdk/filesystem/agfile.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_filterdesc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_styledtext.h"
#include "dev/silverware/git/sdk/filesystem/agpath.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/silverware/git/sdk/agreferenceinl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix3x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_core.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_queue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/vectormath_aos.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_fontmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitive.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocaddr.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmirror.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_radixtree.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdatalistmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_twips.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectcommon.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_containers.h"
#include "program files (x86)/windows kits/8.1/include/um/winnt.h"
#include "dev/silverware/git/sdk/agreferencedobjectinl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_wwhelper.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/functional"
#include "dev/silverware/git/sdk/agpointer.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/mediasound.h"
#include "program files (x86)/windows kits/8.1/include/shared/basetsd.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstring"
#include "dev/silverware/git/sdk/agreferencedobject.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exlockable.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory0"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/combomissiondataformat.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/sounddata.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/soundgroupdataformat.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/effect.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/kof/master/development/source/baseproject/jni/game/network/playtogether.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/exception"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_bank.h"
#include "dev/silverware/git/sdk/agconditionvariable.inl"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_exception.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_vertex.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/mat_aos.h"
#include "dev/silverware/git/sdk/agthread.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/fontprovider/render_fontproviderhud.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_wstring.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglshader.h"
#include "dev/silverware/git/sdk/agmutex.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/array"
#include "dev/silverware/git/sdk/agscopedlock.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/shaderfxhelper.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/randommt.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steam_api_internal.h"
#include "dev/kof/master/development/source/ps4project/baseproject/pcutil/pccontrolsmanager.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/algorithm"
#include "dev/kof/master/development/source/baseproject/jni/game/player/effect/actoreffect.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actorobject.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "dev/silverware/git/sdk/input/aginputmanager.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/system_error"
#include "dev/silverware/git/sdk/agsingleton.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/savedata.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector4unaligned.h"
#include "dev/silverware/git/sdk/agmutex.inl"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actoroption.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/stdexcept"
#include "dev/kof/master/development/source/baseproject/jni/game/check/cameracheck.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/utility"
#include "dev/kof/master/development/source/baseproject/jni/game/check/freecameracheck.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/vecidx_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/iosfwd"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/map"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threadcheck.h"
#include "dev/silverware/git/sdk/agcondition.inl"
#include "program files (x86)/windows kits/8.1/include/um/winuser.h"
#include "dev/silverware/git/sdk/memory/agallocators.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/floatinvec.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtree"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleonline.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textlayout.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_image.h"
#include "dev/silverware/git/sdk/input/agcontrollercomponent.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdata/effectdata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steam_api.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/tuple"
#include "dev/kof/master/development/source/ps4project/baseproject/pcutil/pcdummy.h"
#include "dev/silverware/git/sdk/util/agdelegate.h"
#include "dev/silverware/git/sdk/agreferencecount.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/savedatadefine.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/chartdata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogleffect.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/texstring.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_new.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/quat_aos.h"
#include "dev/kof/master/development/source/baseproject/jni/game/cpuseq/battlecpu.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdata/effectappdata.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_movie.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/floatinvec.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "dev/kof/master/development/source/baseproject/jni/game/cpuseq/sequencecontroller.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_operation.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogllight.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/bitset"
#include "dev/silverware/git/sdk/agrectangle.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstddef"
#include "dev/silverware/git/sdk/agvector2.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/type_traits"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_prefightfaceoff.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/translate_table.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_vec64.h"
#include "dev/silverware/git/sdk/agmath.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/shared_lua_context.h"
#include "dev/kof/master/development/source/baseproject/jni/game/system/battlesysteminfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_screentoworld.h"
#include "dev/silverware/git/sdk/util/agservicecommand.h"
#include "dev/silverware/git/sdk/input/agcontroller.h"
#include "dev/silverware/git/sdk/system/aguser.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/silverware/git/sdk/agstring.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_strokeraa.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_scale9grid.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exwaitcondition.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_math.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/mutex"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraystaticbuff.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/string"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/chrono"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/hidpad/hidpadsystem.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/combomissionjudge.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cxform.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/libcommon.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/vec_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/limits"
#include "dev/kof/master/development/source/baseproject/jni/game/util/soundutil.h"
#include "dev/silverware/git/sdk/util/agdebugchannels.h"
#include "dev/kof/master/development/source/baseproject/jni/game/network/chkdiscononlinesv.h"
#include "dev/silverware/git/sdk/util/agperformancecounter.h"
#include "dev/silverware/git/sdk/3rdparty/steam/matchmakingtypes.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/ios"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/matchingsystem.h"
#include "dev/silverware/git/sdk/agclock.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocnum"
#include "dev/silverware/git/sdk/system/agsysteminfo.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaprojectdataformat.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xiosbase"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocale"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charabasestatusformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_event.h"
#include "program files (x86)/windows kits/8.1/include/um/winbase.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocinfo"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/mat_aos.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/inputkeyrecord.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/png_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_keycodes.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/debug/logging.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vector"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_hashkey.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshkey.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixstate.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_gradients.h"
#include "dev/silverware/git/sdk/agmovieplayer.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/heapmemory.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlecall/battlecall.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_rasterizer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_viewport.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_debug.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/mutex.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thread"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/bodypush.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/memory"
#include "dev/kof/master/development/source/ps4project/baseproject/pcdummy.cpp"

enum <unnamed-enum-GL_CLIP_PLANE0_>
{
	GL_CLIP_PLANE0_ = 0,
	GL_CLIP_PLANE1_ = 1,
	GL_CLIP_PLANE2_ = 2,
	GL_CLIP_PLANE3_ = 3,
	GL_CLIP_PLANE4_ = 4,
	GL_CLIP_PLANE5_ = 5,
	GL_FOG_ = 6,
	GL_LIGHTING_ = 7,
	GL_TEXTURE_2D_ = 8,
	GL_CULL_FACE_ = 9,
	GL_ALPHA_TEST_ = 10,
	GL_BLEND_ = 11,
	GL_COLOR_LOGIC_OP_ = 12,
	GL_DITHER_ = 13,
	GL_STENCIL_TEST_ = 14,
	GL_DEPTH_TEST_ = 15,
	GL_LIGHT0_ = 16,
	GL_LIGHT1_ = 17,
	GL_LIGHT2_ = 18,
	GL_LIGHT3_ = 19,
	GL_LIGHT4_ = 20,
	GL_LIGHT5_ = 21,
	GL_LIGHT6_ = 22,
	GL_LIGHT7_ = 23,
	GL_POINT_SMOOTH_ = 24,
	GL_LINE_SMOOTH_ = 25,
	GL_SCISSOR_TEST_ = 26,
	GL_COLOR_MATERIAL_ = 27,
	GL_NORMALIZE_ = 28,
	GL_RESCALE_NORMAL_ = 29,
	GL_POLYGON_OFFSET_FILL_ = 30,
	GL_VERTEX_ARRAY_ = 31,
	GL_NORMAL_ARRAY_ = 32,
	GL_COLOR_ARRAY_ = 33,
	GL_TEXTURE_COORD_ARRAY_ = 34,
	GL_MULTISAMPLE_ = 35,
	GL_SAMPLE_ALPHA_TO_COVERAGE_ = 36,
	GL_SAMPLE_ALPHA_TO_ONE_ = 37,
	GL_SAMPLE_COVERAGE_ = 38,
	GL_MATRIX_PALETTE_OES_ = 39,
	GL_POINT_SPRITE_OES_ = 40,
	GL_FLG_MAX = 41,
};
Scaleform::Render::Matrix2x4<float> Scaleform::Render::Matrix2x4<float>::Identity; // 0x140A61480
void(*??m_IMEPad$initializer$@ImeTarget@Fw@@0P6AXXZEA@@3P6AXXZEA)(); // 0x140740718
void(*g_mutex_fixbuf$initializer$)(); // 0x140740720
void(*g_achievements$initializer$)(); // 0x140740728
void(*??m_NpId$initializer$@NetworkCommon@Fw@@2P6AXXZEA@@3P6AXXZEA)(); // 0x140740730
typedef long Fw::FW_USER_ID;
void(*instance$initializer$)(); // 0x140740738
void(*??m_SessionId$initializer$@InvitationCommon@Fw@@0P6AXXZEA@@3P6AXXZEA)(); // 0x140740748
void(*??m_InviteRoomID$initializer$@InvitationCommon@Fw@@0P6AXXZEA@@3P6AXXZEA)(); // 0x140740740
void(*??m_RoomId$initializer$@MatchingTarget@Fw@@0P6AXXZEA@@3P6AXXZEA)(); // 0x140740750
void(*??m_RoomAttr$initializer$@MatchingTarget@Fw@@0P6AXXZEA@@3P6AXXZEA)(); // 0x140740770
Fw::MatchingTarget::earchRoomInfo$initializer$::operator~(); // 0x140740768
void(*??m_MemberMutex$initializer$@MatchingTarget@Fw@@2P6AXXZEA@@3P6AXXZEA)(); // 0x140740760
void(*??m_RoomMember$initializer$@MatchingTarget@Fw@@0P6AXXZEA@@3P6AXXZEA)(); // 0x140740758
typedef unsigned long * LPDWORD;
void(*??m_UserInfo$initializer$@NetTransceiver@Fw@@0P6AXXZEA@@3P6AXXZEA)(); // 0x140740780
void(*??m_SendMutex$initializer$@NetTransceiver@Fw@@0P6AXXZEA@@3P6AXXZEA)(); // 0x140740778
void(*??m_pWork$initializer$@RankingWrite@Fw@@0P6AXXZEA@@3P6AXXZEA)(); // 0x140740788
void(*??m_VoiceQos$initializer$@VoiceChat@Fw@@0P6AXXZEA@@3P6AXXZEA)(); // 0x140740790
void(*??m_VoiceChatMutex$initializer$@VoiceChat@Fw@@0P6AXXZEA@@3P6AXXZEA)(); // 0x140740798
void(*??m_Mutex$initializer$@ThreadSystem@Fw@@0P6AXXZEA@@3P6AXXZEA)(); // 0x1407407A0
void(*g_ResourceMutex$initializer$)(); // 0x1407407A8
void(*??s_stageProjData$initializer$@AppMain@@0P6AXXZEA@@3P6AXXZEA)(); // 0x1407407B8
void(*??s_charaProjData$initializer$@AppMain@@0P6AXXZEA@@3P6AXXZEA)(); // 0x1407407B0
void(*??s_keyboardRepeatTimerSourceTable$initializer$@UserSlot@UserGameOperation@@2P6AXXZEA@@3P6AXXZEA)(); // 0x1407407C8
void(*s_soundIndex$initializer$)(); // 0x1407407D8
void(*BtlNet$initializer$)(); // 0x1407407F8
void(*g_NetworkManager$initializer$)(); // 0x140740800
void(*tusResult$initializer$)(); // 0x140740810
void(*argID$initializer$)(); // 0x140740828
void(*g_EffectHeap0$initializer$)(); // 0x140740840
void(*g_GlobalHeap$initializer$)(); // 0x140740838
void(*g_NetworkHeap$initializer$)(); // 0x140740850
void(*g_EffectHeap1$initializer$)(); // 0x140740848
void(*s_PadSoundOutputSelector$initializer$)(); // 0x140740858
void(*shaderLookup$initializer$)(); // 0x140740860
void(*??s_mutex$initializer$@GraphicsLock@extension@@0P6AXXZEA@@3P6AXXZEA)(); // 0x140740868
void(*??s_mutex$initializer$@AsyncStatus@extension@@0P6AXXZEA@@3P6AXXZEA)(); // 0x140740878
void(*??s_instance$initializer$@AsyncWorker@extension@@0P6AXXZEA@@3P6AXXZEA)(); // 0x140740870
void(*??s_signalCondition$initializer$@AsyncStatus@extension@@0P6AXXZEA@@3P6AXXZEA)(); // 0x140740880
void(*??s_defaultOption$initializer$@AsyncSaveDataJobFactory@savedata_detail@extension@@0P6AXXZEA@@3P6AXXZEA)(); // 0x140740888
void(*extension::gfxi_detail::s_refleshableListEnd$initializer$)(); // 0x1407408A0
void(*??s_functionNameSet$initializer$@FunctionTable@gfxi_detail@extension@@0P6AXXZEA@@3P6AXXZEA)(); // 0x1407408A8
void(*??s_instanceListEnd$initializer$@MovieProxy@gfxi_detail@extension@@0P6AXXZEA@@3P6AXXZEA)(); // 0x1407408B0
void(*extension::m_glhal$initializer$)(); // 0x1407408B8
void(*??s_emptyTable$initializer$@KeyValueTable@extension@@0P6AXXZEA@@3P6AXXZEA)(); // 0x1407408C0
void(*gs_program$initializer$)(); // 0x1407408C8
void(*m_renderBuffers$initializer$)(); // 0x1407408E8
void(*s_TusResult$initializer$)(); // 0x1407408F0
std::piecewise_construct_t std::piecewise_construct; // 0x140888A9E
void glsCheckFlg(unsigned long cap, long flg); // 0x14002E060
void glsInitialize(); // 0x14002E4C0
void glsActiveTexture(unsigned long texture); // 0x14002E580
void glsBindTexture(unsigned long target, unsigned long texture); // 0x14002E5A0
void glsGenTextures(long n, unsigned long * textures); // 0x14002E5F0
void glsDeleteTextures(long n, unsigned long * textures); // 0x14002E600
void glsBlendFunc(unsigned long sfactor, unsigned long dfactor); // 0x14002E660
void glsBlendFuncSeparate(unsigned long sfactorRGB, unsigned long dfactorRGB, unsigned long sfactorAlpha, unsigned long dfactorAlpha); // 0x14002E690
void glsDepthFunc(unsigned long mode); // 0x14002E6E0
void glsBlendEquationOES(unsigned long mode); // 0x14002E700
void glsBlendEquationSeparate(unsigned long modeRGB, unsigned long modeAlpha); // 0x14002E720
void glsScissor(long x, long y, long width, long height); // 0x14002E750
void glsDepthMask(unsigned char flag); // 0x14002E7A0
void __empty_global_delete(void * __formal, unsigned long long __formal); // 0x14002E7C0//decompilation failure at 140A61480!
//decompilation failure at 140740718!
//decompilation failure at 140740720!
//decompilation failure at 140740728!
//decompilation failure at 140740730!
//decompilation failure at 140740738!
//decompilation failure at 140740748!
//decompilation failure at 140740740!
//decompilation failure at 140740750!
//decompilation failure at 140740770!
//decompilation failure at 140740768!
//decompilation failure at 140740760!
//decompilation failure at 140740758!
//decompilation failure at 140740780!
//decompilation failure at 140740778!
//decompilation failure at 140740788!
//decompilation failure at 140740790!
//decompilation failure at 140740798!
//decompilation failure at 1407407A0!
//decompilation failure at 1407407A8!
//decompilation failure at 1407407B8!
//decompilation failure at 1407407B0!
//decompilation failure at 1407407C8!
//decompilation failure at 1407407D8!
//decompilation failure at 1407407F8!
//decompilation failure at 140740800!
//decompilation failure at 140740810!
//decompilation failure at 140740828!
//decompilation failure at 140740840!
//decompilation failure at 140740838!
//decompilation failure at 140740850!
//decompilation failure at 140740848!
//decompilation failure at 140740858!
//decompilation failure at 140740860!
//decompilation failure at 140740868!
//decompilation failure at 140740878!
//decompilation failure at 140740870!
//decompilation failure at 140740880!
//decompilation failure at 140740888!
//decompilation failure at 1407408A0!
//decompilation failure at 1407408A8!
//decompilation failure at 1407408B0!
//decompilation failure at 1407408B8!
//decompilation failure at 1407408C0!
//decompilation failure at 1407408C8!
//decompilation failure at 1407408E8!
//decompilation failure at 1407408F0!
//decompilation failure at 140888A9E!
void __fastcall std::unique_ptr<Collision::HitRectList>::~unique_ptr<Collision::HitRectList>(
        std::unique_ptr<Collision::HitRectList> *this)
{
  if ( this->_Mypair._Myval2 )
    std::default_delete<Collision::HitRectList>::operator()(
      (std::default_delete<Collision::HitRectList> *)this,
      this->_Mypair._Myval2);
}

void __fastcall std::vector<Collision::HitRectWork>::~vector<Collision::HitRectWork>(
        std::vector<Collision::HitRectWork> *this)
{
  Collision::HitRectWork *Myfirst; // rcx

  Myfirst = this->_Mypair._Myval2._Myfirst;
  if ( Myfirst )
  {
    std::_Wrap_alloc<std::allocator<Collision::HitRectWork>>::deallocate(
      (std::_Wrap_alloc<std::allocator<Collision::HitRectWork> > *)Myfirst,
      Myfirst,
      this->_Mypair._Myval2._Myend - Myfirst);
    this->_Mypair._Myval2._Myfirst = 0i64;
    this->_Mypair._Myval2._Mylast = 0i64;
    this->_Mypair._Myval2._Myend = 0i64;
  }
}

void __fastcall Collision::HitRectCollection::~HitRectCollection(Collision::HitRectCollection *this)
{
  __int64 i; // rdi
  Collision::HitRectList *Myval2; // rbx
  Collision::HitRectWork *Myfirst; // r9

  for ( i = 0i64; i < 15; ++i )
  {
    Myval2 = this->pRectList[i]._Mypair._Myval2;
    this->pRectList[i]._Mypair._Myval2 = 0i64;
    if ( Myval2 )
    {
      Myfirst = Myval2->rectList._Mypair._Myval2._Myfirst;
      if ( Myfirst )
      {
        std::_Wrap_alloc<std::allocator<Collision::HitRectWork>>::deallocate(
          (std::_Wrap_alloc<std::allocator<Collision::HitRectWork> > *)((char *)Myval2->rectList._Mypair._Myval2._Myend
                                                                      - (char *)Myfirst),
          Myval2->rectList._Mypair._Myval2._Myfirst,
          Myval2->rectList._Mypair._Myval2._Myend - Myfirst);
        Myval2->rectList._Mypair._Myval2._Myfirst = 0i64;
        Myval2->rectList._Mypair._Myval2._Mylast = 0i64;
        Myval2->rectList._Mypair._Myval2._Myend = 0i64;
      }
      operator delete(Myval2, 0x20ui64);
    }
  }
  `eh vector destructor iterator'(
    this,
    8ui64,
    0xFui64,
    (void (__fastcall *)(void *))std::unique_ptr<Collision::HitRectList>::~unique_ptr<Collision::HitRectList>);
}

void __fastcall std::default_delete<Collision::HitRectList>::operator()(
        std::default_delete<Collision::HitRectList> *this,
        Collision::HitRectList *_Ptr)
{
  Collision::HitRectWork *Myfirst; // r9

  if ( _Ptr )
  {
    Myfirst = _Ptr->rectList._Mypair._Myval2._Myfirst;
    if ( Myfirst )
    {
      std::_Wrap_alloc<std::allocator<Collision::HitRectWork>>::deallocate(
        (std::_Wrap_alloc<std::allocator<Collision::HitRectWork> > *)((char *)_Ptr->rectList._Mypair._Myval2._Myend
                                                                    - (char *)Myfirst),
        Myfirst,
        _Ptr->rectList._Mypair._Myval2._Myend - Myfirst);
      _Ptr->rectList._Mypair._Myval2._Myfirst = 0i64;
      _Ptr->rectList._Mypair._Myval2._Mylast = 0i64;
      _Ptr->rectList._Mypair._Myval2._Myend = 0i64;
    }
    operator delete(_Ptr, 0x20ui64);
  }
}

void __fastcall std::_Deallocate(void *_Ptr, unsigned __int64 _Count, unsigned __int64 _Sz)
{
  _BYTE *v3; // rax
  char *v4; // rcx

  if ( _Count > 0xFFFFFFFFFFFFFFFFui64 / _Sz )
    invalid_parameter_noinfo_noreturn();
  if ( _Sz * _Count >= 0x1000 )
  {
    if ( ((unsigned __int8)_Ptr & 0x1F) != 0 )
      invalid_parameter_noinfo_noreturn();
    v3 = (_BYTE *)*((_QWORD *)_Ptr - 1);
    if ( v3 >= _Ptr )
      invalid_parameter_noinfo_noreturn();
    v4 = (char *)((_BYTE *)_Ptr - v3);
    if ( (unsigned __int64)v4 < 8 )
      invalid_parameter_noinfo_noreturn();
    if ( (unsigned __int64)v4 > 0x27 )
      invalid_parameter_noinfo_noreturn();
    _Ptr = v3;
  }
  operator delete(_Ptr);
}

void __fastcall ActorWeapon::ActionFlagCheck(_SETJMP_FLOAT128 *JumpBuffer)
{
  ;
}

void __fastcall std::_Wrap_alloc<std::allocator<Collision::HitRectWork>>::deallocate(
        std::_Wrap_alloc<std::allocator<Collision::HitRectWork> > *this,
        Collision::HitRectWork *_Ptr,
        unsigned __int64 _Count)
{
  Collision::HitRectWork *v3; // rax
  char *v4; // rdx

  if ( _Count > 0x82082082082082i64 )
    invalid_parameter_noinfo_noreturn();
  if ( 504 * _Count >= 0x1000 )
  {
    if ( ((unsigned __int8)_Ptr & 0x1F) != 0 )
      invalid_parameter_noinfo_noreturn();
    v3 = (Collision::HitRectWork *)*((_QWORD *)&_Ptr[-1].data.hit + 56);
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

void __fastcall glsActiveTexture(unsigned int texture)
{
  if ( texture - 33984 != m_ActiveTexture )
  {
    m_ActiveTexture = texture - 33984;
    _glewActiveTexture(texture);
  }
}

void __fastcall glsBindTexture(unsigned int target, unsigned int texture)
{
  Framework::GLManager *v2; // r8

  if ( texture != m_TexID[m_ActiveTexture] || !texture )
  {
    m_TexID[m_ActiveTexture] = texture;
    v2 = Framework::GLManager::glm;
    Framework::GLManager::glm->m_textureID = texture;
    while ( v2->m_bOpenGLBlocked )
      ;
    glBindTexture(target, texture);
  }
}

void __fastcall glsBlendEquationOES(unsigned int mode)
{
  if ( mode != m_Mode )
  {
    m_Mode = mode;
    m_ModeAlpha = mode;
    _glewBlendEquation(mode);
  }
}

void __fastcall glsBlendEquationSeparate(unsigned int modeRGB, unsigned int modeAlpha)
{
  if ( modeRGB != m_Mode || modeAlpha != m_ModeAlpha )
  {
    m_Mode = modeRGB;
    m_ModeAlpha = modeAlpha;
    _glewBlendEquationSeparate(modeRGB, modeAlpha);
  }
}

void __fastcall glsBlendFunc(unsigned int sfactor, unsigned int dfactor)
{
  if ( sfactor != m_Sfactor || dfactor != m_Dfactor )
  {
    m_Sfactor = sfactor;
    m_Dfactor = dfactor;
    m_SfactorAlpha = sfactor;
    m_DfactorAlpha = dfactor;
    glBlendFunc(sfactor, dfactor);
  }
}

void __fastcall glsBlendFuncSeparate(
        unsigned int sfactorRGB,
        unsigned int dfactorRGB,
        unsigned int sfactorAlpha,
        unsigned int dfactorAlpha)
{
  if ( sfactorRGB != m_Sfactor
    || dfactorRGB != m_Dfactor
    || sfactorAlpha != m_SfactorAlpha
    || dfactorAlpha != m_DfactorAlpha )
  {
    m_Sfactor = sfactorRGB;
    m_Dfactor = dfactorRGB;
    m_SfactorAlpha = sfactorAlpha;
    m_DfactorAlpha = dfactorAlpha;
    _glewBlendFuncSeparate(sfactorRGB, dfactorRGB, sfactorAlpha, dfactorAlpha);
  }
}

void __fastcall glsCheckFlg(unsigned int cap, int flg)
{
  GLenum v2; // ecx
  unsigned int v3; // ecx
  unsigned int v4; // ecx
  unsigned int v5; // ecx
  unsigned int v6; // ecx
  unsigned int v7; // ecx
  unsigned int v8; // ecx
  unsigned int v9; // ecx
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  unsigned int v14; // ecx

  if ( cap <= 0xC11 )
  {
    if ( cap != 3089 )
    {
      switch ( cap )
      {
        case 0xB10u:
          dword_140A96090 = flg;
          break;
        case 0xB20u:
          dword_140A96094 = flg;
          break;
        case 0xB44u:
          if ( flg != dword_140A96054 )
          {
            dword_140A96054 = flg;
            v2 = 2884;
            if ( !flg )
              goto LABEL_87;
            goto LABEL_8;
          }
          break;
        case 0xB50u:
          dword_140A9604C = flg;
          break;
        case 0xB57u:
          dword_140A9609C = flg;
          break;
        case 0xB60u:
          dword_140A96048 = flg;
          break;
        case 0xB71u:
          if ( flg != dword_140A9606C )
          {
            dword_140A9606C = flg;
            v2 = 2929;
            if ( !flg )
              goto LABEL_87;
            goto LABEL_8;
          }
          break;
        case 0xB90u:
          if ( flg != dword_140A96068 )
          {
            dword_140A96068 = flg;
            v2 = 2960;
            if ( !flg )
              goto LABEL_87;
            goto LABEL_8;
          }
          break;
        case 0xBA1u:
          dword_140A960A0 = flg;
          break;
        case 0xBC0u:
          dword_140A96058 = flg;
          break;
        case 0xBD0u:
          if ( flg != dword_140A96064 )
          {
            dword_140A96064 = flg;
            v2 = 3024;
            if ( !flg )
              goto LABEL_87;
            goto LABEL_8;
          }
          break;
        case 0xBE2u:
          if ( flg != dword_140A9605C )
          {
            dword_140A9605C = flg;
            v2 = 3042;
            if ( !flg )
              goto LABEL_87;
            goto LABEL_8;
          }
          break;
        case 0xBF2u:
          dword_140A96060 = flg;
          break;
        default:
          return;
      }
      return;
    }
    if ( flg == dword_140A96098 )
      return;
    dword_140A96098 = flg;
    v2 = 3089;
    if ( flg )
    {
LABEL_8:
      glEnable(v2);
      return;
    }
LABEL_87:
    glDisable(v2);
    return;
  }
  if ( cap > 0x4000 )
  {
    if ( cap > 0x8037 )
    {
      if ( cap > 0x809D )
      {
        v11 = cap - 32926;
        if ( !v11 )
        {
          if ( flg == dword_140A960C0 )
            return;
          dword_140A960C0 = flg;
          v2 = 32926;
          if ( flg )
            goto LABEL_8;
          goto LABEL_87;
        }
        v12 = v11 - 1;
        if ( !v12 )
        {
          dword_140A960C4 = flg;
          return;
        }
        v13 = v12 - 1;
        if ( !v13 )
        {
          if ( flg == dword_140A960C8 )
            return;
          dword_140A960C8 = flg;
          v2 = 32928;
          if ( flg )
            goto LABEL_8;
          goto LABEL_87;
        }
        v14 = v13 - 1952;
        if ( v14 )
        {
          if ( v14 == 33 )
            dword_140A960D0 = flg;
        }
        else
        {
          dword_140A960CC = flg;
        }
      }
      else if ( cap == 32925 )
      {
        dword_140A960BC = flg;
      }
      else
      {
        v7 = cap - 32826;
        if ( v7 )
        {
          v8 = v7 - 58;
          if ( v8 )
          {
            v9 = v8 - 1;
            if ( v9 )
            {
              v10 = v9 - 1;
              if ( v10 )
              {
                if ( v10 == 2 )
                  dword_140A960B8 = flg;
              }
              else
              {
                dword_140A960B4 = flg;
              }
            }
            else
            {
              dword_140A960B0 = flg;
            }
          }
          else
          {
            dword_140A960AC = flg;
          }
        }
        else
        {
          dword_140A960A4 = flg;
        }
      }
    }
    else
    {
      if ( cap == 32823 )
      {
        if ( flg == dword_140A960A8 )
          return;
        dword_140A960A8 = flg;
        v2 = 32823;
        if ( flg )
          goto LABEL_8;
        goto LABEL_87;
      }
      switch ( cap )
      {
        case 0x4001u:
          dword_140A96074 = flg;
          break;
        case 0x4002u:
          dword_140A96078 = flg;
          break;
        case 0x4003u:
          dword_140A9607C = flg;
          break;
        case 0x4004u:
          dword_140A96080 = flg;
          break;
        case 0x4005u:
          dword_140A96084 = flg;
          break;
        case 0x4006u:
          dword_140A96088 = flg;
          break;
        case 0x4007u:
          dword_140A9608C = flg;
          break;
        default:
          return;
      }
    }
  }
  else if ( cap == 0x4000 )
  {
    dword_140A96070 = flg;
  }
  else if ( cap > 0x3000 )
  {
    v3 = cap - 12289;
    if ( v3 )
    {
      v4 = v3 - 1;
      if ( v4 )
      {
        v5 = v4 - 1;
        if ( v5 )
        {
          v6 = v5 - 1;
          if ( v6 )
          {
            if ( v6 == 1 )
              dword_140A96044 = flg;
          }
          else
          {
            dword_140A96040 = flg;
          }
        }
        else
        {
          dword_140A9603C = flg;
        }
      }
      else
      {
        dword_140A96038 = flg;
      }
    }
    else
    {
      dword_140A96034 = flg;
    }
  }
  else if ( cap == 12288 )
  {
    m_Flg[0] = flg;
  }
  else if ( cap == 3553 )
  {
    dword_140A96050 = flg;
  }
}

void __fastcall glsDeleteTextures(int n, unsigned int *textures)
{
  __int64 v2; // r11
  __int64 i; // r8
  unsigned int v4; // er9
  unsigned int *v5; // rax
  __int64 v6; // rcx

  v2 = n;
  for ( i = 0i64; i < v2; ++i )
  {
    v4 = textures[i];
    v5 = m_TexID;
    v6 = 32i64;
    do
    {
      if ( v4 == *v5 )
        *v5 = 0;
      ++v5;
      --v6;
    }
    while ( v6 );
  }
  glDeleteTextures(v2, textures);
}

void __fastcall glsDepthFunc(unsigned int mode)
{
  if ( m_dMode != mode )
  {
    m_dMode = mode;
    glDepthFunc(mode);
  }
}

void __fastcall glsDepthMask(unsigned __int8 flag)
{
  if ( flag != m_DepthMask )
  {
    m_DepthMask = flag;
    glDepthMask(flag);
  }
}

// attributes: thunk
void __fastcall glsGenTextures(int n, unsigned int *textures)
{
  glGenTexturesAG(n, textures);
}

void glsInitialize(void)
{
  unsigned int *v0; // rdi
  __int64 v1; // rcx

  memset(m_Flg, -1, sizeof(m_Flg));
  if ( dword_140A96064 != 1 )
  {
    dword_140A96064 = 1;
    glEnable(0xBD0u);
  }
  dword_140A960BC = 1;
  m_ActiveTexture = 0;
  v0 = m_TexID;
  m_Sfactor = -1;
  v1 = 32i64;
  m_Dfactor = -1;
  while ( v1 )
  {
    *v0++ = 0;
    --v1;
  }
  m_SfactorAlpha = -1;
  m_DfactorAlpha = -1;
  m_ModeAlpha = -1;
  m_Mode = -1;
  m_ScissorX = 0;
  m_ScissorY = 0;
  m_ScissorW = 0;
  m_ScissorH = 0;
  m_DepthMask = -1;
}

void __fastcall glsScissor(int x, int y, int width, int height)
{
  if ( x != m_ScissorX || y != m_ScissorY || width != m_ScissorW || height != m_ScissorH )
  {
    m_ScissorX = x;
    m_ScissorY = y;
    m_ScissorW = width;
    m_ScissorH = height;
    glScissor(x, y, width, height);
  }
}

