#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_drawableimage.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/mutex.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thread"
#include "dev/kof/master/development/source/baseproject/jni/game/network/netmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hal.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_buffer.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/memory"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory"
#include "dev/kof/master/development/source/baseproject/jni/game/network/leaderboard.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/rapper/graphicsopt.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thr/xthread"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_characterdef.h"
#include "dev/silverware/git/sdk/agcondition.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_manager.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/globalheapmemory.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/fixmemory.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogleffect.h"
#include "dev/silverware/git/sdk/input/agsdlmappingparser.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectsystem/effectps4system/effectps4system.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/operationmapper.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/matrix4unaligned.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/particledata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filters.h"
#include "dev/silverware/git/sdk/filesystem/agfile.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/quat_aos.h"
#include "dev/silverware/git/sdk/platforms/pc/system/agpcsysteminfo.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/weapon/actorweapon.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filterparams.h"
#include "dev/silverware/git/sdk/filesystem/agpath.h"
#include "dev/kof/master/development/source/baseproject/jni/game/system/battlecontroller.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphqueue.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogllight.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_font.h"
#include "dev/silverware/git/sdk/filesystem/agmount.h"
#include "dev/silverware/git/sdk/agreferencecountinl.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actionsystem.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglcurve.h"
#include "dev/silverware/git/sdk/filesystem/agdirectory.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaactiondataformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessdefs.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestage.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charafilebase.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatapacked.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/tkndata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_pathdatapacker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_linebuffer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_highlight.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloat.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglsprite.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/cameramotionpreviewsettings.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/stageprojectdata.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/commanddataformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_profiler.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_sse.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_states.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steamclientpublic.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/tga_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_statebag.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglrender.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exwaitcondition.h"
#include "dev/silverware/git/sdk/aghash.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestagedatas.h"
#include "dev/silverware/git/sdk/agstringutils.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglfog.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic0.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/tkndatas.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_simplemeshcache.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/tween.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/fontprovider/render_fontproviderwinapi.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/math.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/variableheapmemorybase.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/asynccharafileload.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_bundle.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector2unaligned.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloatmp.h"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/hitrectcollection.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapemeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/jpeg_imagefile.h"
#include "dev/silverware/git/sdk/agmemorystream.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treetext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefileutil.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/input/imesystem.h"
#include "dev/silverware/git/sdk/agmemorypool.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_functions.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_missiondataloading.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/trainingsetting.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/combomissionattackeventlistener.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charamaterialsettingformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_docview.h"
#include "dev/silverware/git/sdk/input/agcontrollerbuttoncomponent.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "dev/silverware/git/sdk/agpointerinl.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/fix32.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_range.h"
#include "dev/silverware/git/sdk/agcondition.inl"
#include "dev/silverware/git/sdk/agstream.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actorcharabase.h"
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
#include "dev/silverware/git/sdk/system/agusermanager.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/easingnumber.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/errorchecker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_sgmlparser.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/deque"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actionblackout.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_context.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_constants.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleonlinewatching.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessgen.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treeshape.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessellator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/cpusequencedataformat.h"
#include "dev/silverware/git/sdk/util/agservice.h"
#include "dev/silverware/git/sdk/agthreadpool.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleloading.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/shot/actorshot.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actorchara.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglshader.h"
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
#include "dev/kof/master/development/source/baseproject/jni/game/util/syncmenuimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefile.h"
#include "program files (x86)/windows kits/8.1/include/shared/guiddef.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_ps4modelroom.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/moviedatadefine.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_player.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exthread.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/randommt.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/bilinkable.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charahitrectformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_types.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector3unaligned.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_resource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "program files (x86)/windows kits/8.1/include/shared/stralign.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_stroker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/dds_imagefile.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_typeinfo.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestageresourcecontainer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textmeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/resourcemanager.h"
#include "dev/kof/master/development/source/baseproject/jni/game/appmain.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestageshader.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actor.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphparam.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xfacet"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xutility"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charadataunify.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcache.h"
#include "dev/silverware/git/sdk/agdisplay.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaattackdataformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcacheconfig.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/texstring.h"
#include "dev/silverware/git/sdk/agvector4.h"
#include "dev/silverware/git/sdk/3rdparty/steam/isteamhtmlsurface.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/vec_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/list"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charadamagesettingformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hairliner.h"
#include "dev/silverware/git/sdk/agvector3.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/boolinvec.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_filterdesc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_styledtext.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix3x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_core.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_queue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_fontmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitive.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocaddr.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/vectormath_aos.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_radixtree.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdatalistmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_twips.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectcommon.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_containers.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_wwhelper.h"
#include "program files (x86)/windows kits/8.1/include/um/winnt.h"
#include "dev/silverware/git/sdk/agreferencedobjectinl.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/functional"
#include "dev/silverware/git/sdk/agpointer.h"
#include "program files (x86)/windows kits/8.1/include/shared/basetsd.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstring"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmodel.h"
#include "dev/silverware/git/sdk/agreferencedobject.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/combomissiondataformat.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/sounddata.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/soundgroupdataformat.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/effect.h"
#include "dev/silverware/git/sdk/agrectangle.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/atomic"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory0"
#include "dev/kof/master/development/source/baseproject/jni/game/network/playtogether.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_bank.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/matchingsystem.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/exception"
#include "dev/silverware/git/sdk/agreferenceinl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_vertex.h"
#include "dev/silverware/git/sdk/agconditionvariable.inl"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/fontprovider/render_fontproviderhud.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_wstring.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/refcountable.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_exception.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/mat_aos.h"
#include "dev/silverware/git/sdk/agthread.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/shaderfxhelper.h"
#include "dev/silverware/git/sdk/agmutex.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/array"
#include "dev/kof/master/development/source/baseproject/jni/game/player/effect/actoreffect.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actorobject.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "dev/silverware/git/sdk/agscopedlock.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/savedata.h"
#include "dev/silverware/git/sdk/agmovieplayer.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steam_api_internal.h"
#include "dev/kof/master/development/source/ps4project/baseproject/pcutil/pccontrolsmanager.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/algorithm"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actoroption.h"
#include "dev/silverware/git/sdk/input/aginputmanager.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/system_error"
#include "dev/silverware/git/sdk/agsingleton.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/cameracheck.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglbone.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector4unaligned.h"
#include "dev/silverware/git/sdk/agmutex.inl"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/stdexcept"
#include "dev/kof/master/development/source/baseproject/jni/game/check/freecameracheck.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/utility"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threadcheck.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleonline.h"
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
#include "dev/silverware/git/sdk/3rdparty/steam/steam_api.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/tuple"
#include "dev/kof/master/development/source/ps4project/baseproject/pcutil/pcdummy.h"
#include "dev/silverware/git/sdk/util/agdelegate.h"
#include "dev/silverware/git/sdk/agreferencecount.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/mediamanager.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_new.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/baseproject/jni/game/cpuseq/battlecpu.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdata/effectappdata.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_movie.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/quat_aos.h"
#include "dev/kof/master/development/source/baseproject/jni/game/cpuseq/sequencecontroller.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_operation.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/bitset"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/audiopresenter.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/floatinvec.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/unordered_map"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmirror.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_prefightfaceoff.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/translate_table.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xhash"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstddef"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/shared_lua_context.h"
#include "dev/kof/master/development/source/baseproject/jni/game/system/battlesysteminfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_screentoworld.h"
#include "dev/silverware/git/sdk/agvector2.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/type_traits"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_vec64.h"
#include "dev/silverware/git/sdk/agmath.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/silverware/git/sdk/input/agcontroller.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_strokeraa.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_scale9grid.h"
#include "dev/silverware/git/sdk/system/aguser.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraystaticbuff.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "dev/silverware/git/sdk/agstring.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/hidpad/hidpadsystem.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/combomissionjudge.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cxform.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_math.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/mutex"
#include "dev/kof/master/development/source/baseproject/jni/game/util/soundutil.h"
#include "dev/silverware/git/sdk/util/agservicecommand.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/string"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/chrono"
#include "dev/kof/master/development/source/baseproject/jni/game/network/chkdiscononlinesv.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/libcommon.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/vec_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/limits"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xxatomic"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exlockable.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/titlestoragesystem.h"
#include "dev/silverware/git/sdk/3rdparty/steam/matchmakingtypes.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/ios"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaprojectdataformat.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocnum"
#include "dev/silverware/git/sdk/system/agsysteminfo.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charabasestatusformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_event.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/mediasound.h"
#include "dev/silverware/git/sdk/util/agdebugchannels.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xiosbase"
#include "dev/kof/master/development/source/baseproject/jni/game/check/inputkeyrecord.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/png_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_keycodes.h"
#include "dev/silverware/git/sdk/util/agperformancecounter.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocale"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/future_asset.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "dev/silverware/git/sdk/agclock.h"
#include "program files (x86)/windows kits/8.1/include/um/winbase.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocinfo"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/mat_aos.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_hashkey.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshkey.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixstate.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_gradients.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/asyncjob.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/debug/logging.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vector"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlecall/battlecall.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_rasterizer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_viewport.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_debug.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/atomic_int.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/heapmemory.h"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/bodypush.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/core/glstate.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglrender.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/appmain.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/pcdummy.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/rapper/graphicsopt.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogltexture.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/image/graphics.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglshader.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmatrix.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/ag/kofshadermanager.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectmanager/effecttaskmanager.cpp"

std::piecewise_construct_t std::piecewise_construct; // 0x14089E37F
EffectPs4System::~EffectPs4System(); // 0x1401343E0
void EffectPs4System::initialize(); // 0x1401343F0
void EffectPs4System::terminate(); // 0x140134460
void EffectPs4System::setRenderTarget(); // 0x1401344A0
void EffectPs4System::upSample(); // 0x1401346C0
void EffectPs4System::bilinearUpSampling(); // 0x14002E7C0
void EffectPs4System::combineBlendBuffer(bool mirrorFlag); // 0x140134870
void EffectPs4System::combineBlendBufferPixcel(long shader, OGLTexture * pSrcTexture, OGLTexture * pDestTexture); // 0x140134A70
void EffectPs4System::renderEffectBuffer(); // 0x1401352A0
void EffectPs4System::setBufferDownScale(float setDownScale); // 0x140135400
float EffectPs4System::getBufferDownScale(); // 0x140135410//decompilation failure at 14089E37F!
void __fastcall EffectPs4System::~EffectPs4System(EffectPs4System *this)
{
  this->__vftable = (EffectPs4System_vtbl *)&EffectPs4System::`vftable';
}

void __fastcall ActorWeapon::ActionFlagCheck(_SETJMP_FLOAT128 *JumpBuffer)
{
  ;
}

void __fastcall EffectPs4System::combineBlendBuffer(EffectPs4System *this, bool mirrorFlag)
{
  __int64 v2; // rbx
  __int64 v5; // rsi
  GraphicsOpt *v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  void (*v9)(void); // rax

  v2 = *(_QWORD *)&AppMain::pApp;
  v5 = *(_QWORD *)(*(_QWORD *)&AppMain::pApp + 80i64);
  if ( _glewPushGroupMarkerEXT )
    _glewPushGroupMarkerEXT(0, "Combine Effect Blend Buffer");
  if ( _glewPushDebugGroup )
    _glewPushDebugGroup(0x824Au, 1u, 27, "Combine Effect Blend Buffer");
  v6 = *(GraphicsOpt **)(v2 + 112);
  ++markerCount;
  GraphicsOpt::lock(v6);
  if ( m_DepthMask )
  {
    m_DepthMask = 0;
    glDepthMask(0);
  }
  if ( m_Mode != 32774 )
  {
    m_Mode = 32774;
    m_ModeAlpha = 32774;
    _glewBlendEquation(0x8006u);
  }
  if ( dword_140A9605C != 1 )
  {
    dword_140A9605C = 1;
    glEnable(0xBE2u);
  }
  if ( m_Sfactor != 1 || m_Dfactor != 770 || m_SfactorAlpha != 1 || m_DfactorAlpha != 770 )
  {
    m_Sfactor = 1;
    m_Dfactor = 770;
    m_SfactorAlpha = 1;
    m_DfactorAlpha = 770;
    _glewBlendFuncSeparate(1u, 0x302u, 1u, 0x302u);
  }
  if ( m_dMode != 519 )
  {
    m_dMode = 519;
    glDepthFunc(0x207u);
  }
  if ( mirrorFlag )
  {
    v7 = 5i64;
    if ( !*(_DWORD *)(v2 + 2507512) )
      v7 = 3i64;
  }
  else if ( *(_DWORD *)(v2 + 2507512) )
  {
    v7 = 4i64;
  }
  else
  {
    v7 = 2i64;
  }
  this->combineBlendBufferPixcel(this, v7, (OGLTexture *)(v5 + 786024), (OGLTexture *)(v5 + 777632));
  Graphics::drawStack(*(Graphics **)(*(_QWORD *)(v2 + 112) + 8i64));
  v8 = *(_QWORD *)(v2 + 2507504);
  *(_QWORD *)(v8 + 1632) = *(_QWORD *)(v8 + 1624);
  v9 = _glewPopGroupMarkerEXT;
  *(_BYTE *)(v8 + 1808) = 0;
  if ( v9 )
    v9();
  if ( _glewPopDebugGroup )
    _glewPopDebugGroup();
  --markerCount;
}

void __fastcall EffectPs4System::combineBlendBufferPixcel(
        EffectPs4System *this,
        int shader,
        OGLTexture *pSrcTexture,
        OGLTexture *pDestTexture)
{
  __int64 v4; // rdi
  Framework::GLManager *v6; // rsi
  __int64 v8; // r13
  __int64 v9; // r12
  __m128i v10; // xmm2
  __m128i v11; // xmm1
  unsigned int v12; // eax
  unsigned int m_TexID; // edx
  Framework::GLManager *v14; // rcx
  __int64 v15; // r14
  unsigned __int64 v16; // r8
  int v17; // edi
  MeshVertexInfo2D *v18; // rax
  int *v19; // r9
  __int64 *v20; // r8
  __int64 v21; // rdx
  __int64 v22; // r10
  MeshVertexInfo2D *ppVertexInfo; // rcx
  float v24; // xmm0_4
  __m128 v25; // xmm1
  float v26; // eax
  unsigned __int64 v27; // xmm0_8
  __m128 v28; // xmm1
  __m128 v29; // xmm0
  __m128 v30; // xmm2
  MeshVertexInfo2D *v31; // rsi
  __m128 v32; // xmm3
  __m128 v33; // xmm4
  __m128 v34; // xmm5
  __m128 v35; // xmm6
  __m128 v36; // xmm7
  __m128 v37; // xmm8
  __m128 v38; // xmm9
  KOFShaderManager *v39; // rbx
  __int64 v40; // r12
  __int64 v41; // rdx
  AgSingleton<KOFShaderManager>_vtbl *v42; // rax
  __int64 v43; // r13
  __int128 *v44; // rax
  int v45; // er12
  __int64 m_currentProgramSlot; // rdx
  __int64 index; // r13
  __int128 *v48; // rax
  int v49; // er8
  _QWORD *v50; // rcx
  __int64 v51; // rcx
  Framework::GLManager *v52; // r9
  signed int v53; // er10
  int renderSize; // ecx
  int v55; // eax
  int v56; // er8
  __int64 v57; // rdx
  __int64 v58; // r10
  void **v59; // rdx
  _QWORD *v60; // rcx
  __int64 v61; // rcx
  int v62; // eax
  signed int v63; // ecx
  AgSingleton<KOFShaderManager>_vtbl *v64; // [rsp+30h] [rbp-D0h]
  void **v65; // [rsp+30h] [rbp-D0h]
  __int128 v66; // [rsp+40h] [rbp-C0h]
  __int128 v67; // [rsp+50h] [rbp-B0h]
  __int128 v68; // [rsp+60h] [rbp-A0h]
  __int128 v69; // [rsp+70h] [rbp-90h]
  __int128 v70; // [rsp+80h] [rbp-80h]
  __int128 v71; // [rsp+90h] [rbp-70h]
  __int128 v72; // [rsp+A0h] [rbp-60h]
  __int128 v73; // [rsp+B0h] [rbp-50h]
  __int128 Buf2[4]; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v75[4]; // [rsp+100h] [rbp+0h] BYREF
  int v76; // [rsp+140h] [rbp+40h] BYREF
  __int64 v77; // [rsp+144h] [rbp+44h]
  int v78; // [rsp+14Ch] [rbp+4Ch]
  int v79; // [rsp+150h] [rbp+50h]
  int v80; // [rsp+154h] [rbp+54h]
  int v81; // [rsp+158h] [rbp+58h]
  int v82; // [rsp+15Ch] [rbp+5Ch]
  __int64 v83; // [rsp+168h] [rbp+68h]
  __int64 v84; // [rsp+170h] [rbp+70h] BYREF
  unsigned int v85; // [rsp+178h] [rbp+78h]
  int v86; // [rsp+17Ch] [rbp+7Ch]
  unsigned int v87; // [rsp+180h] [rbp+80h]
  __int64 v88; // [rsp+184h] [rbp+84h]
  unsigned int v89; // [rsp+18Ch] [rbp+8Ch]
  unsigned int v90; // [rsp+190h] [rbp+90h]
  int v91; // [rsp+194h] [rbp+94h]

  v4 = *(_QWORD *)&AppMain::pApp;
  v6 = Framework::GLManager::glm;
  v8 = shader;
  v9 = *(_QWORD *)(*(_QWORD *)&AppMain::pApp + 80i64);
  if ( dword_140A9606C != 1 )
  {
    dword_140A9606C = 1;
    glEnable(0xB71u);
  }
  if ( dword_140A96054 )
  {
    dword_140A96054 = 0;
    glDisable(0xB44u);
  }
  if ( dword_140A96068 )
  {
    dword_140A96068 = 0;
    glDisable(0xB90u);
  }
  v10 = _mm_cvtsi32_si128(*(_DWORD *)(v4 + 28));
  v11 = _mm_cvtsi32_si128(*(_DWORD *)(v4 + 32));
  v12 = m_ActiveTexture;
  v84 = 0i64;
  v83 = 0i64;
  v88 = 0i64;
  v91 = 0;
  v86 = 0;
  v77 = 0i64;
  v76 = 0;
  v80 = 0;
  v81 = 1065353216;
  v79 = 1065353216;
  v82 = 1065353216;
  v78 = 1065353216;
  v89 = _mm_cvtepi32_ps(v10).m128_u32[0];
  v90 = _mm_cvtepi32_ps(v11).m128_u32[0];
  v85 = v90;
  v87 = v89;
  if ( m_ActiveTexture )
  {
    m_ActiveTexture = 0;
    _glewActiveTexture(0x84C0u);
    v12 = m_ActiveTexture;
  }
  m_TexID = pSrcTexture->m_TexID;
  if ( m_TexID != ::m_TexID[v12] || !m_TexID )
  {
    ::m_TexID[v12] = m_TexID;
    v14 = Framework::GLManager::glm;
    Framework::GLManager::glm->m_textureID = m_TexID;
    while ( v14->m_bOpenGLBlocked )
      ;
    glBindTexture(0xDE1u, m_TexID);
  }
  v15 = *(_QWORD *)(v9 + 8 * v8 + 740616);
  if ( v15 && *(_DWORD *)v15 )
  {
    KOFShaderManager::useProgramSlot(
      (KOFShaderManager *)AgSingleton<KOFShaderManager>::ms_instance,
      *(_DWORD *)(v15 + 24));
    v17 = 64;
    v6->renderSize = 64;
    if ( !this->ppVertexInfo )
    {
      v18 = (MeshVertexInfo2D *)Framework::MemoryManager::allocate(&v6->allocateStaticBuffersEffect[5], 0x100ui64, v16);
      v19 = &v76;
      this->ppVertexInfo = v18;
      v20 = &v84;
      v21 = 0i64;
      v22 = 4i64;
      do
      {
        ppVertexInfo = this->ppVertexInfo;
        ++v21;
        v24 = *(float *)v20;
        v19 += 2;
        v25 = (__m128)*((unsigned int *)v20 - 1);
        v20 = (__int64 *)((char *)v20 + 12);
        v26 = v24;
        v27 = _mm_unpacklo_ps((__m128)*((unsigned int *)v20 - 5), v25).m128_u64[0];
        v28 = (__m128)(unsigned int)*(v19 - 1);
        *(_QWORD *)&ppVertexInfo[v21 - 1].m_position.x = v27;
        v29 = (__m128)(unsigned int)*(v19 - 2);
        ppVertexInfo[v21 - 1].m_position.z = v26;
        this->ppVertexInfo[v21 - 1].m_color = (Vector4Unaligned)_xmm;
        this->ppVertexInfo[v21 - 1].m_texture = (Vector2Unaligned)_mm_unpacklo_ps(v29, v28).m128_u64[0];
        --v22;
      }
      while ( v22 );
    }
    v6->m_vertexInfoCount = 4;
    v30 = *(__m128 *)(v9 + 148);
    v31 = this->ppVertexInfo;
    v32 = *(__m128 *)(v9 + 164);
    v33 = *(__m128 *)(v9 + 180);
    v34 = *(__m128 *)(v9 + 196);
    v35 = *(__m128 *)(v9 + 20);
    v36 = *(__m128 *)(v9 + 36);
    v37 = *(__m128 *)(v9 + 52);
    v38 = *(__m128 *)(v9 + 68);
    *(_QWORD *)&v66 = __PAIR64__(v32.m128_u32[0], v30.m128_u32[0]);
    LODWORD(v67) = _mm_shuffle_ps(v30, v30, 85).m128_u32[0];
    LODWORD(v68) = _mm_shuffle_ps(v30, v30, 170).m128_u32[0];
    DWORD1(v67) = _mm_shuffle_ps(v32, v32, 85).m128_u32[0];
    DWORD1(v68) = _mm_shuffle_ps(v32, v32, 170).m128_u32[0];
    DWORD2(v67) = _mm_shuffle_ps(v33, v33, 85).m128_u32[0];
    DWORD2(v68) = _mm_shuffle_ps(v33, v33, 170).m128_u32[0];
    HIDWORD(v67) = _mm_shuffle_ps(v34, v34, 85).m128_u32[0];
    HIDWORD(v68) = _mm_shuffle_ps(v34, v34, 170).m128_u32[0];
    LODWORD(v71) = _mm_shuffle_ps(v35, v35, 85).m128_u32[0];
    LODWORD(v72) = _mm_shuffle_ps(v35, v35, 170).m128_u32[0];
    DWORD1(v71) = _mm_shuffle_ps(v36, v36, 85).m128_u32[0];
    DWORD1(v72) = _mm_shuffle_ps(v36, v36, 170).m128_u32[0];
    *((_QWORD *)&v66 + 1) = __PAIR64__(v34.m128_u32[0], v33.m128_u32[0]);
    LODWORD(v69) = _mm_shuffle_ps(v30, v30, 255).m128_u32[0];
    DWORD1(v69) = _mm_shuffle_ps(v32, v32, 255).m128_u32[0];
    DWORD2(v69) = _mm_shuffle_ps(v33, v33, 255).m128_u32[0];
    HIDWORD(v69) = _mm_shuffle_ps(v34, v34, 255).m128_u32[0];
    *(_QWORD *)&v70 = __PAIR64__(v36.m128_u32[0], v35.m128_u32[0]);
    *((_QWORD *)&v70 + 1) = __PAIR64__(v38.m128_u32[0], v37.m128_u32[0]);
    DWORD2(v73) = _mm_shuffle_ps(v37, v37, 255).m128_u32[0];
    LODWORD(v73) = _mm_shuffle_ps(v35, v35, 255).m128_u32[0];
    DWORD1(v73) = _mm_shuffle_ps(v36, v36, 255).m128_u32[0];
    DWORD2(v71) = _mm_shuffle_ps(v37, v37, 85).m128_u32[0];
    DWORD2(v72) = _mm_shuffle_ps(v37, v37, 170).m128_u32[0];
    Buf2[0] = v66;
    Buf2[1] = v67;
    Buf2[2] = v68;
    Buf2[3] = v69;
    v39 = (KOFShaderManager *)AgSingleton<KOFShaderManager>::ms_instance;
    v40 = **(int **)(v15 + 40);
    v41 = 11i64 * SLODWORD(AgSingleton<KOFShaderManager>::ms_instance[360450].__vftable);
    HIDWORD(v71) = _mm_shuffle_ps(v38, v38, 85).m128_u32[0];
    HIDWORD(v72) = _mm_shuffle_ps(v38, v38, 170).m128_u32[0];
    HIDWORD(v73) = _mm_shuffle_ps(v38, v38, 255).m128_u32[0];
    v75[0] = v70;
    v42 = AgSingleton<KOFShaderManager>::ms_instance[v41 + 11].__vftable;
    v75[1] = v71;
    v75[2] = v72;
    v75[3] = v73;
    v43 = *((int *)&v42->~AgSingleton<KOFShaderManager> + 4 * v40);
    v64 = AgSingleton<KOFShaderManager>::ms_instance[SHIDWORD(AgSingleton<KOFShaderManager>::ms_instance[v41 + 5].__vftable)
                                                   + 494188].__vftable;
    if ( memcmp(*((const void **)&v64->~AgSingleton<KOFShaderManager> + v43), Buf2, 0x40ui64) )
    {
      v44 = (__int128 *)*((_QWORD *)&v64->~AgSingleton<KOFShaderManager> + v43);
      *v44 = v66;
      v44[1] = v67;
      v44[2] = v68;
      v44[3] = v69;
      KOFShaderManager::setUniformWriteMask(v39, v40);
    }
    v45 = *(_DWORD *)(*(_QWORD *)(v15 + 40) + 4i64);
    m_currentProgramSlot = v39->m_currentProgramSlot;
    index = v39->m_program[m_currentProgramSlot].m_uniformAttrib[v45].index;
    v65 = v39->m_shaderUniformPtr[v39->m_program[m_currentProgramSlot].m_linkID];
    if ( memcmp(v65[index], v75, 0x40ui64) )
    {
      v48 = (__int128 *)v65[index];
      *v48 = v70;
      v48[1] = v71;
      v48[2] = v72;
      v48[3] = v73;
      KOFShaderManager::setUniformWriteMask(v39, v45);
    }
    v49 = *(_DWORD *)(*(_QWORD *)(v15 + 40) + 20i64);
    v50 = v39->m_shaderUniformPtr[v39->m_program[v39->m_currentProgramSlot].m_linkID][v39->m_program[v39->m_currentProgramSlot].m_uniformAttrib[v49].index];
    if ( *v50 != (_QWORD)_xmm || v50[1] != _mm_srli_si128((__m128i)_xmm, 8).m128i_u64[0] )
    {
      *(_OWORD *)v50 = _xmm;
      KOFShaderManager::setUniformWriteMask(v39, v49);
    }
    v51 = *(unsigned int *)v39->m_program[v39->m_currentProgramSlot].m_pOglShader->m_piGLAttrib.glValue;
    if ( (unsigned int)v51 < g_maxEnabledVertexAttribArrays )
    {
      g_vertexAttribIndex[v51] = 0;
      g_pendingVertexAttribArrays |= 1 << v51;
    }
    v52 = Framework::GLManager::glm;
    v53 = *v39->m_program[v39->m_currentProgramSlot].m_pOglShader->m_piGLAttrib.glValue;
    renderSize = Framework::GLManager::glm->renderSize;
    switch ( renderSize )
    {
      case 64:
        v55 = 64;
        break;
      case 280:
        v55 = 136;
        break;
      case 208:
        v55 = 64;
        break;
      default:
        v55 = 88;
        if ( renderSize == 144 )
          v55 = 144;
        break;
    }
    if ( v53 >= 0 )
    {
      _glewVertexAttribPointer(v53, 3, 0x1406u, 0, v55, v31);
      v52 = Framework::GLManager::glm;
      v39 = (KOFShaderManager *)AgSingleton<KOFShaderManager>::ms_instance;
    }
    v56 = *(_DWORD *)(*(_QWORD *)(v15 + 40) + 20i64);
    v57 = v39->m_currentProgramSlot;
    v58 = v39->m_program[v57].m_uniformAttrib[v56].index;
    v59 = v39->m_shaderUniformPtr[v39->m_program[v57].m_linkID];
    v60 = v59[v58];
    if ( *v60 != (_QWORD)_xmm || v60[1] != _mm_srli_si128((__m128i)_xmm, 8).m128i_u64[0] )
    {
      *(_OWORD *)v60 = _xmm;
      KOFShaderManager::setUniformWriteMask(v39, v56);
    }
    v61 = *((unsigned int *)v39->m_program[v39->m_currentProgramSlot].m_pOglShader->m_piGLAttrib.glValue + 4);
    if ( (unsigned int)v61 < g_maxEnabledVertexAttribArrays )
    {
      g_pendingVertexAttribArrays |= 1 << v61;
      g_vertexAttribIndex[v61] = 4;
    }
    v62 = v52->renderSize;
    v63 = v39->m_program[v39->m_currentProgramSlot].m_pOglShader->m_piGLAttrib.glValue[4];
    if ( v62 != 64 )
    {
      if ( v62 == 280 )
      {
        v17 = 8;
LABEL_51:
        if ( v63 >= 0 )
          _glewVertexAttribPointer(v63, 2, 0x1406u, 0, v17, v31);
        glDrawArraysAG(v63, (int)v59, 4);
        return;
      }
      if ( v62 != 208 )
      {
        if ( v62 == 144 )
        {
          v17 = 144;
          goto LABEL_51;
        }
        v17 = 88;
      }
    }
    v31 = (MeshVertexInfo2D *)((char *)v31 + 56);
    goto LABEL_51;
  }
}

float __fastcall EffectPs4System::getBufferDownScale(EffectPs4System *this)
{
  return this->m_bufferDownScale;
}

void __fastcall EffectPs4System::initialize(EffectPs4System *this)
{
  float v1; // xmm1_4
  float v2; // xmm3_4
  float v3; // xmm0_4

  v1 = (float)*(int *)(*(_QWORD *)&AppMain::pApp + 28i64);
  v2 = (float)*(int *)(*(_QWORD *)&AppMain::pApp + 32i64);
  if ( *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2507512i64) )
  {
    v3 = v1 / 1.4142;
    this->blendTexWidth = v3;
    this->blendTexHeight = v2 / 1.4142;
  }
  else
  {
    this->blendTexWidth = v1 * 0.5;
    this->blendTexHeight = v2 * 0.5;
  }
}

void __fastcall EffectPs4System::renderEffectBuffer(EffectPs4System *this)
{
  __int64 v1; // rsi
  Framework::GLManager *v2; // rbp
  __int64 v4; // rbx
  _OWORD *v5; // rax
  OGLRender *v6; // rcx

  v1 = *(_QWORD *)&AppMain::pApp;
  v2 = Framework::GLManager::glm;
  v4 = *(_QWORD *)(*(_QWORD *)&AppMain::pApp + 80i64);
  *(_QWORD *)(v4 + 1700) = 0i64;
  *(_QWORD *)(v4 + 1708) = 0i64;
  *(_QWORD *)(v4 + 1716) = 0i64;
  *(_QWORD *)(v4 + 1724) = 0i64;
  this->setRenderTarget(this);
  GraphicsOpt::lock(*(GraphicsOpt **)(v1 + 112), (int)this->blendTexWidth, (int)this->blendTexHeight);
  v5 = (_OWORD *)(v1 + 1551608);
  if ( v1 == -1551608 )
  {
    *(_QWORD *)(v4 + 20) = 1065353216i64;
    *(_DWORD *)(v4 + 36) = (_DWORD)v5;
    *(_QWORD *)(v4 + 52) = v5;
    *(_QWORD *)(v4 + 68) = v5;
    *(_QWORD *)(v4 + 40) = 1065353216i64;
    *(_QWORD *)(v4 + 28) = v5;
    *(_QWORD *)(v4 + 60) = 1065353216i64;
    *(_DWORD *)(v4 + 76) = (_DWORD)v5;
    *(_DWORD *)(v4 + 48) = (_DWORD)v5;
    *(_DWORD *)(v4 + 80) = 1065353216;
  }
  else
  {
    *(_OWORD *)(v4 + 20) = *v5;
    *(_OWORD *)(v4 + 36) = *(_OWORD *)(v1 + 1551624);
    *(_OWORD *)(v4 + 52) = *(_OWORD *)(v1 + 1551640);
    *(_OWORD *)(v4 + 68) = *(_OWORD *)(v1 + 1551656);
  }
  OGLRender::setViewTrans((OGLRender *)v4, (OGLMatrix *)(v1 + 1551288));
  OGLRender::setInvViewTrans(v6, (OGLMatrix *)(v1 + 1551352));
  ((void (__fastcall *)(EffectPs4System *))this->setBufferDownScale)(this);
  EffectTaskManager::renderStack(*(EffectTaskManager **)(v1 + 2507504), 4);
  OGLRender::drawStack((OGLRender *)v4, 1u, 0);
  Graphics::drawStack(*(Graphics **)(*(_QWORD *)(v1 + 112) + 8i64));
  Framework::GLManager::glm->currentFramebufferID = v2->systemBufferID[v2->m_backBufferIndex];
}

void __fastcall EffectPs4System::setBufferDownScale(EffectPs4System *this, float setDownScale)
{
  this->m_bufferDownScale = setDownScale;
}

void __fastcall EffectPs4System::setRenderTarget(EffectPs4System *this)
{
  __int64 v1; // rsi
  __int64 v2; // r15
  __int64 v3; // r14
  _DWORD *v4; // rdi
  GLuint *v5; // rbx
  unsigned int *v6; // rbp
  GLuint v7; // edx
  Framework::GLManager *v8; // rcx
  unsigned int v9; // eax
  Framework::GLManager *v10; // rbx
  __int64 v11; // rcx
  unsigned int *v12; // r12
  unsigned int v13; // er8
  int v14; // [rsp+20h] [rbp-78h]
  unsigned int v15; // [rsp+38h] [rbp-60h]
  unsigned int v16; // [rsp+A8h] [rbp+10h] BYREF
  unsigned int *v17; // [rsp+B0h] [rbp+18h]

  v1 = 0i64;
  v2 = *(_QWORD *)(*(_QWORD *)&AppMain::pApp + 80i64);
  v3 = 2i64;
  v17 = (unsigned int *)(v2 + 786040);
  v4 = (_DWORD *)(v2 + 786016);
  v5 = (GLuint *)(v2 + 786040);
  v6 = (unsigned int *)(v2 + 786040);
  do
  {
    if ( !*v4 )
      glGenRenderbuffersAG(1, (unsigned int *)(v1 + v2 + 786016));
    if ( !*v5 )
    {
      glGenTexturesAG(1, v6);
      v7 = *v5;
      if ( *v5 != m_TexID[m_ActiveTexture] || !v7 )
      {
        v8 = Framework::GLManager::glm;
        m_TexID[m_ActiveTexture] = v7;
        v8->m_textureID = v7;
        while ( v8->m_bOpenGLBlocked )
          ;
        glBindTexture(0xDE1u, v7);
      }
      glTexParameterf(0xDE1u, 0x2801u, 9729.0);
      glTexParameterf(0xDE1u, 0x2800u, 9729.0);
      glTexParameterf(0xDE1u, 0x2802u, 33071.0);
      glTexParameterf(0xDE1u, 0x2803u, 33071.0);
      v5[1] = 1290;
    }
    v1 += 4i64;
    v6 += 20;
    ++v4;
    v5 += 20;
    --v3;
  }
  while ( v3 );
  v9 = *(_DWORD *)(v2 + 786016);
  v10 = Framework::GLManager::glm;
  Framework::GLManager::glm->currentRenderID = v9;
  v10->m_bOpenGLBlocked = 1;
  _glewBindFramebuffer(0x8D40u, *(_DWORD *)&v10->m_buffer.m_freeIDs[12 * (unsigned __int8)v9 + 15]);
  v10->m_bOpenGLBlocked = 0;
  v16 = 36064;
  _glewDrawBuffers(1, &v16);
  v11 = *(_QWORD *)&AppMain::pApp;
  v12 = v17;
  v10->m_outputMask = 1;
  glsFramebufferTexture2D(v11, 0x8CE0u, v13, *v12, v14, *(_DWORD *)(v11 + 28), *(_DWORD *)(v11 + 32), v15);
  if ( m_DepthMask != 1 )
  {
    m_DepthMask = 1;
    glDepthMask(1u);
  }
  glClearColor(0.0, 0.0, 0.0, 0.99449998);
  glClearAG(0x4500u);
}

void __fastcall EffectPs4System::terminate(EffectPs4System *this)
{
  MeshVertexInfo2D *ppVertexInfo; // rdx

  ppVertexInfo = this->ppVertexInfo;
  if ( ppVertexInfo )
  {
    Framework::MemoryManager::release(&Framework::GLManager::glm->allocateStaticBuffersEffect[5], ppVertexInfo);
    this->ppVertexInfo = 0i64;
  }
}

void __fastcall EffectPs4System::upSample(EffectPs4System *this)
{
  __int64 v2; // rbx
  GLsizei v3; // er9
  GLsizei v4; // er8
  unsigned int v5; // er8
  Graphics *v6; // rcx
  int v7; // [rsp+20h] [rbp-28h]
  unsigned int v8; // [rsp+38h] [rbp-10h]

  v2 = *(_QWORD *)(*(_QWORD *)&AppMain::pApp + 80i64);
  v3 = *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 32i64);
  v4 = *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 28i64);
  if ( __PAIR64__(m_viewportX, m_viewportY) || v4 != m_viewportW || v3 != m_viewportH )
  {
    m_viewportX = 0;
    m_viewportY = 0;
    m_viewportW = v4;
    m_viewportH = v3;
    glViewport(0, 0, v4, v3);
  }
  glBindRenderbufferAG((unsigned int)this, *(_DWORD *)(v2 + 786020));
  glsFramebufferTexture2D(
    AppMain::pApp,
    0x8CE0u,
    v5,
    *(_DWORD *)(v2 + 786120),
    v7,
    *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 28i64),
    *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 32i64),
    v8);
  Graphics::clearScreen(v6, -16777216);
  if ( m_DepthMask )
  {
    m_DepthMask = 0;
    glDepthMask(0);
  }
  if ( m_Mode != 32774 )
  {
    m_Mode = 32774;
    m_ModeAlpha = 32774;
    _glewBlendEquation(0x8006u);
  }
  if ( dword_140A9605C != 1 )
  {
    dword_140A9605C = 1;
    glEnable(0xBE2u);
  }
  if ( m_Sfactor != 1 || m_Dfactor || m_SfactorAlpha != 1 || m_DfactorAlpha )
  {
    m_Sfactor = 1;
    m_Dfactor = 0;
    m_SfactorAlpha = 1;
    m_DfactorAlpha = 0;
    _glewBlendFuncSeparate(1u, 0, 1u, 0);
  }
  if ( m_dMode != 519 )
  {
    m_dMode = 519;
    glDepthFunc(0x207u);
  }
  this->combineBlendBufferPixcel(this, 2, (OGLTexture *)(v2 + 786024), (OGLTexture *)(v2 + 786104));
}

