#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_drawableimage.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thr/xthread"
#include "dev/kof/master/development/source/baseproject/jni/game/network/netmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hal.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_buffer.h"
#include "dev/kof/master/development/source/baseproject/jni/game/network/leaderboard.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/rapper/graphicsopt.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/globalheapmemory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_characterdef.h"
#include "dev/silverware/git/sdk/agcondition.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/fixmemory.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_manager.h"
#include "dev/silverware/git/sdk/input/agsdlmappingparser.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/matrix4unaligned.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogleffect.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/quat_aos.h"
#include "dev/silverware/git/sdk/platforms/pc/system/agpcsysteminfo.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/operationmapper.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/particledata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filters.h"
#include "dev/silverware/git/sdk/filesystem/agfile.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/weapon/actorweapon.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filterparams.h"
#include "dev/silverware/git/sdk/filesystem/agpath.h"
#include "dev/silverware/git/sdk/agreferencecountinl.h"
#include "dev/kof/master/development/source/baseproject/jni/game/system/battlecontroller.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphqueue.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogllight.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_font.h"
#include "dev/silverware/git/sdk/filesystem/agmount.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actionsystem.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglcurve.h"
#include "dev/silverware/git/sdk/filesystem/agdirectory.h"
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
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglsprite.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steamclientpublic.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_types.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/cameramotionpreviewsettings.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/stageprojectdata.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/commanddataformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_profiler.h"
#include "dev/silverware/git/sdk/memory/agframeallocator.inl"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_states.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/tga_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_statebag.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglrender.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic0.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exwaitcondition.h"
#include "dev/silverware/git/sdk/aghash.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestagedatas.h"
#include "dev/silverware/git/sdk/agstringutils.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglfog.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/tkndatas.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_simplemeshcache.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/variableheapmemorybase.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/tween.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/fontprovider/render_fontproviderwinapi.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/math.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/asynccharafileload.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector2unaligned.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_bundle.h"
#include "dev/silverware/git/sdk/agmemorystream.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloatmp.h"
#include "dev/silverware/git/sdk/agmemorypool.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_functions.h"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/hitrectcollection.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapemeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/jpeg_imagefile.h"
#include "dev/silverware/git/sdk/input/agcontrollerbuttoncomponent.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "dev/silverware/git/sdk/agpointerinl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treetext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefileutil.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/input/imesystem.h"
#include "dev/silverware/git/sdk/agstream.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_missiondataloading.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/trainingsetting.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/combomissionattackeventlistener.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charamaterialsettingformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_docview.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/physicalheapmemory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/fix32.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_range.h"
#include "dev/silverware/git/sdk/agcondition.inl"
#include "dev/silverware/git/sdk/agsemaphore.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actorcharabase.h"
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
#include "dev/silverware/git/sdk/system/agusermanager.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/easingnumber.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/errorchecker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_sgmlparser.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actionblackout.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_context.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_constants.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleonlinewatching.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessgen.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treeshape.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessellator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/cpusequencedataformat.h"
#include "dev/silverware/git/sdk/util/agservice.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/boolinvec.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/time.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "dev/silverware/git/sdk/agthreadpool.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleloading.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/shot/actorshot.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actorchara.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglshader.h"
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
#include "dev/kof/master/development/source/baseproject/jni/game/util/syncmenuimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefile.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector3unaligned.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_ps4modelroom.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/moviedatadefine.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_player.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exthread.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/randommt.h"
#include "program files (x86)/windows kits/8.1/include/shared/stralign.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/bilinkable.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charahitrectformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_resource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_stroker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_typeinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/dds_imagefile.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/resourcemanager.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xfacet"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xutility"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestageresourcecontainer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textmeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestageshader.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actor.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphparam.h"
#include "dev/silverware/git/sdk/3rdparty/steam/isteamhtmlsurface.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/vec_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/list"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charadataunify.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcache.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/boolinvec.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaattackdataformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcacheconfig.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/texstring.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charadamagesettingformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hairliner.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_filterdesc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_styledtext.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
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
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_radixtree.h"
#include "dev/kof/master/development/source/baseproject/jni/game/appmain.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdatalistmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_twips.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectcommon.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_containers.h"
#include "dev/silverware/git/sdk/agdisplay.h"
#include "program files (x86)/windows kits/8.1/include/um/winnt.h"
#include "dev/silverware/git/sdk/agreferencedobjectinl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_wwhelper.h"
#include "dev/silverware/git/sdk/agvector4.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/functional"
#include "dev/silverware/git/sdk/agpointer.h"
#include "dev/silverware/git/sdk/agvector3.h"
#include "program files (x86)/windows kits/8.1/include/shared/basetsd.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstring"
#include "dev/silverware/git/sdk/agreferencedobject.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory0"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmodel.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/combomissiondataformat.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/sounddata.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/soundgroupdataformat.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/effect.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/atomic"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/kof/master/development/source/baseproject/jni/game/network/playtogether.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/exception"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_bank.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/matchingsystem.h"
#include "dev/silverware/git/sdk/agconditionvariable.inl"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_exception.h"
#include "dev/silverware/git/sdk/agreferenceinl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_vertex.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/mat_aos.h"
#include "dev/silverware/git/sdk/agthread.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/fontprovider/render_fontproviderhud.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_wstring.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/refcountable.h"
#include "dev/silverware/git/sdk/agmutex.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/array"
#include "dev/silverware/git/sdk/agscopedlock.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/shaderfxhelper.h"
#include "dev/silverware/git/sdk/agrectangle.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steam_api_internal.h"
#include "dev/kof/master/development/source/ps4project/baseproject/pcutil/pccontrolsmanager.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/algorithm"
#include "dev/kof/master/development/source/baseproject/jni/game/player/effect/actoreffect.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actorobject.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "dev/silverware/git/sdk/input/aginputmanager.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/system_error"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "dev/silverware/git/sdk/agsingleton.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/savedata.h"
#include "dev/silverware/git/sdk/agmovieplayer.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector4unaligned.h"
#include "dev/silverware/git/sdk/agmutex.inl"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actoroption.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/stdexcept"
#include "dev/kof/master/development/source/baseproject/jni/game/check/cameracheck.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglbone.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/utility"
#include "dev/kof/master/development/source/baseproject/jni/game/check/freecameracheck.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/vecidx_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/iosfwd"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/map"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threadcheck.h"
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
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_new.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/quat_aos.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/mediamanager.h"
#include "dev/kof/master/development/source/baseproject/jni/game/cpuseq/battlecpu.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdata/effectappdata.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_movie.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/floatinvec.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "dev/kof/master/development/source/baseproject/jni/game/cpuseq/sequencecontroller.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_operation.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/bitset"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/audiopresenter.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstddef"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/unordered_map"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmirror.h"
#include "dev/silverware/git/sdk/agvector2.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/type_traits"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_prefightfaceoff.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/translate_table.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xhash"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_vec64.h"
#include "dev/silverware/git/sdk/agmath.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/shared_lua_context.h"
#include "dev/kof/master/development/source/baseproject/jni/game/system/battlesysteminfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_screentoworld.h"
#include "dev/silverware/git/sdk/input/agcontroller.h"
#include "dev/silverware/git/sdk/system/aguser.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/silverware/git/sdk/agstring.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_strokeraa.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_scale9grid.h"
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
#include "dev/silverware/git/sdk/util/agservicecommand.h"
#include "dev/kof/master/development/source/baseproject/jni/game/network/chkdiscononlinesv.h"
#include "dev/silverware/git/sdk/3rdparty/steam/matchmakingtypes.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/ios"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xxatomic"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocnum"
#include "dev/silverware/git/sdk/system/agsysteminfo.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exlockable.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/titlestoragesystem.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaprojectdataformat.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xiosbase"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocale"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charabasestatusformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_event.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/mediasound.h"
#include "dev/silverware/git/sdk/util/agdebugchannels.h"
#include "program files (x86)/windows kits/8.1/include/um/winbase.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocinfo"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/mat_aos.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/inputkeyrecord.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/png_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_keycodes.h"
#include "dev/silverware/git/sdk/util/agperformancecounter.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/debug/logging.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vector"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/future_asset.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "dev/silverware/git/sdk/agclock.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_hashkey.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshkey.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixstate.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_gradients.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/asyncjob.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/heapmemory.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlecall/battlecall.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_rasterizer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_viewport.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_debug.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/atomic_int.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/mutex.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thread"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/bodypush.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/memory"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglvec2.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmatrix.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglfog.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/core/glstate.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/pcdummy.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogllight.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogltexture.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/ag/kofshadermanager.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmodel.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmateriallight.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/main.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglshader.cpp"

struct SHADER_FILE_TBL
{
	const char * vertFile; // 0x0
	const char * fragFile; // 0x8
	unsigned char crypt; // 0x10
	long index; // 0x14
};
struct SHADER_FX_FILE_TBL
{
	long index; // 0x0
	const char * vertFile; // 0x8
	const char * fragFile; // 0x10
};
OGLRender::OGLRender(long capacity); // 0x14007A690
_OGLRenderTextures::_OGLRenderTextures(); // 0x140079F60
std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,unsigned int,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,unsigned int> > >::~map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,unsigned int,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,unsigned int> > >(); // 0x14007B9E0
std::map<AgHash,std::vector<OGLShader * __ptr64,std::allocator<OGLShader * __ptr64> >,std::less<AgHash>,std::allocator<std::pair<AgHash const ,std::vector<OGLShader * __ptr64,std::allocator<OGLShader * __ptr64> > > > >::~map<AgHash,std::vector<OGLShader * __ptr64,std::allocator<OGLShader * __ptr64> >,std::less<AgHash>,std::allocator<std::pair<AgHash const ,std::vector<OGLShader * __ptr64,std::allocator<OGLShader * __ptr64> > > > >(); // 0x140079F30
_OGLRenderTextures::~_OGLRenderTextures(); // 0x14007A400
void OGLRender::setConfig(long width, long height, float realw, float realh, unsigned char * pData); // 0x14007A9E0
void OGLRender::setConfigExtra(unsigned char * pData); // 0x14007AD40
class std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,unsigned int,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,unsigned int> > > :
	std::_Tree<std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,unsigned int,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,unsigned int> >,0> >
{
	class _Myt;
	class _Mybase;
	class key_type;
	typedef unsigned long mapped_type;
	struct key_compare;
	class value_compare;
	class allocator_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,unsigned int> pointer;
	typedef const std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,unsigned int> const_pointer;
	typedef std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,unsigned int> reference;
	typedef const std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,unsigned int> const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
	struct value_type;
	struct _Alty;
	struct _Pairib;
public:
	map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,unsigned int,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<cha(std::initializer_list<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,unsigned int> >, const std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &, const std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,unsigned int> > &);
	map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,unsigned int,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<cha(std::initializer_list<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,unsigned int> >, const std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &);
	map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,unsigned int,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<cha(std::initializer_list<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,unsigned int> >);
	map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,unsigned int,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<cha(std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,unsigned int,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,unsigned int> > > &, const std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,unsigned int> > &);
	map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,unsigned int,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<cha(std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,unsigned int,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,unsigned int> > > &);
	map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,unsigned int,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<cha(const std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &, const std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,unsigned int> > &);
	map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,unsigned int,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<cha(const std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &);
	map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,unsigned int,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<cha(const std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,unsigned int,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,unsigned int> > > &, const std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,unsigned int> > &);
	map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,unsigned int,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<cha(const std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,unsigned int,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,unsigned int> > > &);
	map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,unsigned int,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<cha(const std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,unsigned int> > &);
	map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,unsigned int,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<cha();
	std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,unsigned int,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,unsigned int> > > & operator=(std::initializer_list<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,unsigned int> >);
	std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,unsigned int,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,unsigned int> > > & operator=(std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,unsigned int,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,unsigned int> > > &);
	std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,unsigned int,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,unsigned int> > > & operator=(const std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,unsigned int,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,unsigned int> > > &);
	unsigned long & operator[](const std::string &);
	unsigned long & operator[](std::string &);
	void swap(std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,unsigned int,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,unsigned int> > > &);
	const unsigned long & at(const std::string &);
	unsigned long & at(const std::string &);
	~map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,unsigned int,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<ch();
};
void OGLRender::ensureShader(const char * fragFile); // 0x14007BA10
void OGLRender::initialize(long capacity); // 0x14007BB50
void OGLRender::begin(); // 0x14007C150
void OGLRender::setProjection(OGLMatrix * matrix); // 0x14007C230
void OGLRender::setViewTrans(OGLMatrix * matrix); // 0x14007C290
void OGLRender::setInvViewTrans(OGLMatrix * matrix); // 0x14007C320
void OGLRender::addStack(OGLModel * pModel, float aAlpha, long aBlendMode, long aEffectFlg, OGLVec3 * pVec3); // 0x14007C3B0
void QuickSort(OGLModelStackData * * pData, long left, long right); // 0x14007C690
void OGLRender::drawStack(unsigned char clear, unsigned char bNotUseMat); // 0x14007C810
void OGLRender::setFXShader(long & shader, OGLModel * pModel, OGLFigure * pFigure, OGLModelStackData * pStack, long * MatMapID, long EffectFlg); // 0x14007E970
void OGLRender::setupShaderVariables(OGLMatrix & modelViewProj, OGLMatrix & modelViewOrthoProj, OGLMatrix & prevModelViewProj, OGLModel * pModel, OGLFigure * pFigure, OGLShader * pShader, OGLModelStackData * pStack, long EffectFlg, long iChangeFlg); // 0x1400810C0
unsigned char OGLRender::shadowOnlyLighting(const OGLMaterial * pMate, long & matLights, long & worldLights); // 0x1400841B0
void OGLRender::addStack(long minCapacity); // 0x1400842C0
OGLModelStackData * OGLRender::getStack(); // 0x1400843A0
void OGLRender::drawPoly(float * vertex, unsigned long color, unsigned long type, long count); // 0x140084450
long OGLRender::selectEffectShader(long flag); // 0x140084B00
void OGLRender::setEffectConstant(BlendProjData * blendProjData, EffectConstantData * pEffectConstData, long shader); // 0x140084C60
void OGLRender::setEffectAttribArray(EffectMeshData * pEffectMeshData); // 0x140085FA0
void OGLRender::setEffectAttribArrayFigure(EffectMeshData * pEffectMeshData); // 0x140086370
void OGLRender::setEffectAttribArrayInstancing(EffectMeshData * pEffectMeshData); // 0x140086740
void OGLRender::setEffectBindTextrue(EffectTextureData * texture, long shader); // 0x140086F70
void OGLRender::drawEffectIndex(BlendProjData * blendProjData, EffectTextureData * texture, EffectMeshData * pEffectMeshData, EffectConstantData * pEffectConstData); // 0x140087430
void OGLRender::drawEffectIndexInstancesUVAnime(BlendProjData * blendProjData, EffectTextureData * texture, EffectMeshData * pEffectMeshData, EffectConstantData * pEffectConstData); // 0x1400878E0
void OGLRender::drawMovie(OGLTexture * pTextureY, OGLTexture * pTextureU, OGLTexture * pTextureV, MeshVertexInfo2D * pCoord, unsigned long color, unsigned long type, long count); // 0x140087A20
void OGLRender::drawCapture(OGLTexture * pTexture, MeshVertexInfo2D * pCoord, unsigned long color, unsigned long type, long count); // 0x140087FE0
void OGLRender::drawTexture(unsigned long textureId, MeshVertexInfo2D * pCoord, unsigned long color, unsigned long type, long count); // 0x140088490
void OGLRender::preDrawImage(OGLTexture * texture, float * vertex, float * texCoord, unsigned long color, unsigned long * index, unsigned long type, long vertexCount, long count, long renderType); // 0x140088920
void OGLRender::deferredDrawImage(); // 0x140088B60
void OGLRender::drawImage(OGLTexture * texture, float * vertex, float * texCoord, unsigned long color, unsigned long type, long count); // 0x140089620
void OGLRender::drawImage(OGLTexture * texture, float * vertex, float * texCoord, unsigned long color, unsigned long * index, unsigned long type, long vertexCount, long count); // 0x14008A010
void OGLRender::resetRenderTargets(); // 0x14008AA50
class OGLRender::resetRenderTargets::__l2::<lambda_ca41f03fc43bf906aedb3db4bc01afb4>
{
public:
	void operator()(unsigned long &);
private:
	static void <lambda_invoker_cdecl>(unsigned long &);
	typedef char16_t(*<lambda_typedef_cdecl>)(unsigned long &);
public:
	void(*)(unsigned long &) operator void (__cdecl *)(unsigned int &)();
private:
	static void <lambda_invoker_vectorcall>(unsigned long &);
	typedef char16_t(*<lambda_typedef_vectorcall>)(unsigned long &);
public:
	void(*)(unsigned long &) operator void (__vectorcall *)(unsigned int &)();
	<lambda_ca41f03fc43bf906aedb3db4bc01afb4>(OGLRender::resetRenderTargets::__l2::<lambda_ca41f03fc43bf906aedb3db4bc01afb4> &);
	<lambda_ca41f03fc43bf906aedb3db4bc01afb4>();
	OGLRender::resetRenderTargets::__l2::<lambda_ca41f03fc43bf906aedb3db4bc01afb4> & operator=(const OGLRender::resetRenderTargets::__l2::<lambda_ca41f03fc43bf906aedb3db4bc01afb4> &);
};
class OGLRender::resetRenderTargets::__l2::<lambda_4a34359072517888600625c0657f79cd>
{
public:
	void operator()(OGLTexture &);
private:
	static void <lambda_invoker_cdecl>(OGLTexture &);
	typedef char16_t(*<lambda_typedef_cdecl>)(OGLTexture &);
public:
	void(*)(OGLTexture &) operator void (__cdecl *)(class OGLTexture &)();
private:
	static void <lambda_invoker_vectorcall>(OGLTexture &);
	typedef char16_t(*<lambda_typedef_vectorcall>)(OGLTexture &);
public:
	void(*)(OGLTexture &) operator void (__vectorcall *)(class OGLTexture &)();
	<lambda_4a34359072517888600625c0657f79cd>(OGLRender::resetRenderTargets::__l2::<lambda_4a34359072517888600625c0657f79cd> &);
	<lambda_4a34359072517888600625c0657f79cd>();
	OGLRender::resetRenderTargets::__l2::<lambda_4a34359072517888600625c0657f79cd> & operator=(const OGLRender::resetRenderTargets::__l2::<lambda_4a34359072517888600625c0657f79cd> &);
};
AgSingleton<KOFShaderManager> * AgSingleton<KOFShaderManager>::ms_instance; // 0x140ACAB28
std::piecewise_construct_t std::piecewise_construct; // 0x1408895DB//decompilation failure at 140ACAB28!
//decompilation failure at 1408895DB!
std::_Tree_node<std::pair<unsigned int const ,std::vector<unsigned char> >,void *> *__fastcall std::_Tree_comp_alloc<std::_Tmap_traits<unsigned int,std::vector<unsigned char>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::vector<unsigned char>>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<unsigned int const &>,std::tuple<>>(
        std::_Tree_comp_alloc<std::_Tmap_traits<unsigned int,std::vector<unsigned char>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,std::vector<unsigned char> > >,0> > *this,
        const std::piecewise_construct_t *<_Val_0>,
        std::tuple<unsigned int const &> *<_Val_1>,
        std::tuple<> *<_Val_2>)
{
  std::_Tree_node<std::pair<unsigned int const ,std::vector<unsigned char> >,void *> *result; // rax

  result = std::_Tree_comp_alloc<std::_Tmap_traits<AgHash,std::vector<OGLShader *>,std::less<AgHash>,std::allocator<std::pair<AgHash const,std::vector<OGLShader *>>>,0>>::_Buynode0(this);
  *(_WORD *)&result->_Color = 0;
  if ( result != (std::_Tree_node<std::pair<unsigned int const ,std::vector<unsigned char> >,void *> *)-32i64 )
  {
    result->_Myval.first = *<_Val_1>->_Myfirst._Val;
    result->_Myval.second._Mypair._Myval2._Myfirst = 0i64;
    result->_Myval.second._Mypair._Myval2._Mylast = 0i64;
    result->_Myval.second._Mypair._Myval2._Myend = 0i64;
  }
  return result;
}

std::_Tree_node<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig>,void *> *__fastcall std::_Tree_comp_alloc<std::_Tmap_traits<std::string,unsigned int,std::less<std::string>,std::allocator<std::pair<std::string const,unsigned int>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<std::string const &>,std::tuple<>>(
        std::_Tree_comp_alloc<std::_Tmap_traits<std::string,unsigned int,std::less<std::string >,std::allocator<std::pair<std::string const ,unsigned int> >,0> > *this,
        const std::piecewise_construct_t *<_Val_0>,
        std::tuple<std::string const &> *<_Val_1>,
        std::tuple<> *<_Val_2>)
{
  std::_Tree_node<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig>,void *> *v5; // rax
  std::_Tree_node<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig>,void *> *v6; // rdi
  std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig> *p_Myval; // rbx
  const std::string *Val; // rdx
  std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig> *Ptr; // rax

  v5 = std::_Tree_comp_alloc<std::_Tmap_traits<std::string,CSteamID,std::less<void>,std::allocator<std::pair<std::string const,CSteamID>>,0>>::_Buynode0((std::_Tree_comp_alloc<std::_Tmap_traits<std::string,extension::GFXIFontManager::LanguageConfig,std::less<std::string >,std::allocator<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig> >,0> > *)this);
  v6 = v5;
  *(_WORD *)&v5->_Color = 0;
  p_Myval = &v5->_Myval;
  if ( v5 != (std::_Tree_node<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig>,void *> *)-32i64 )
  {
    Val = <_Val_1>->_Myfirst._Val;
    v5->_Myval.first._Mypair._Myval2._Myres = 15i64;
    v5->_Myval.first._Mypair._Myval2._Mysize = 0i64;
    if ( v5->_Myval.first._Mypair._Myval2._Myres < 0x10 )
      Ptr = &v5->_Myval;
    else
      Ptr = (std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig> *)p_Myval->first._Mypair._Myval2._Bx._Ptr;
    Ptr->first._Mypair._Myval2._Bx._Buf[0] = 0;
    std::string::assign((std::string *)&p_Myval->first, Val, 0i64, 0xFFFFFFFFFFFFFFFFui64);
    LODWORD(p_Myval->second.m_impl.m_ptr) = 0;
  }
  return v6;
}

std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const ,OGLModel *> > > > *__fastcall std::_Tree<std::_Tmap_traits<std::string,CSteamID,std::less<void>,std::allocator<std::pair<std::string const,CSteamID>>,0>>::_Insert_at<std::pair<std::string const,CSteamID> &,std::_Tree_node<std::pair<std::string const,CSteamID>,void *> *>(
        std::_Tree<std::_Tmap_traits<std::string,OGLModel *,std::less<std::string >,std::allocator<std::pair<std::string const ,OGLModel *> >,0> > *this,
        std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const ,OGLModel *> > > > *result,
        bool _Addleft,
        std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *_Wherenode,
        std::pair<std::string const ,OGLModel *> *_Val,
        std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *_Node)
{
  unsigned __int64 Mysize; // rax
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *Myhead; // rax
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *v10; // rax
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *Parent; // rcx
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *v12; // r8
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *Left; // rdx
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *Right; // rdx
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *v15; // rdx
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *v16; // rcx
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *v17; // rdx
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *v18; // r8
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *v19; // rcx
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *v20; // rcx
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *v21; // rdx
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *v22; // rcx
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *v23; // rcx
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *v24; // rcx
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *v25; // rax
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *v26; // rcx
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const ,OGLModel *> > > > *v27; // rax

  Mysize = this->_Mypair._Myval2._Myval2._Mysize;
  if ( Mysize >= 0x38E38E38E38E38Di64 )
  {
    std::string::~string((std::string *)&_Node->_Myval.first);
    operator delete(_Node);
    std::_Xlength_error("map/set<T> too long");
  }
  this->_Mypair._Myval2._Myval2._Mysize = Mysize + 1;
  _Node->_Parent = _Wherenode;
  if ( _Wherenode == this->_Mypair._Myval2._Myval2._Myhead )
  {
    this->_Mypair._Myval2._Myval2._Myhead->_Parent = _Node;
    this->_Mypair._Myval2._Myval2._Myhead->_Left = _Node;
    Myhead = this->_Mypair._Myval2._Myval2._Myhead;
LABEL_8:
    Myhead->_Right = _Node;
    goto LABEL_9;
  }
  if ( !_Addleft )
  {
    _Wherenode->_Right = _Node;
    Myhead = this->_Mypair._Myval2._Myval2._Myhead;
    if ( _Wherenode != this->_Mypair._Myval2._Myval2._Myhead->_Right )
      goto LABEL_9;
    goto LABEL_8;
  }
  _Wherenode->_Left = _Node;
  if ( _Wherenode == this->_Mypair._Myval2._Myval2._Myhead->_Left )
    this->_Mypair._Myval2._Myval2._Myhead->_Left = _Node;
LABEL_9:
  v10 = _Node;
  while ( !v10->_Parent->_Color )
  {
    Parent = v10->_Parent;
    v12 = Parent->_Parent;
    Left = v12->_Left;
    if ( Parent == v12->_Left )
    {
      Right = v12->_Right;
      if ( Right->_Color )
      {
        if ( v10 == Parent->_Right )
        {
          v15 = Parent->_Right;
          v10 = v10->_Parent;
          Parent->_Right = v15->_Left;
          if ( !v15->_Left->_Isnil )
            v15->_Left->_Parent = Parent;
          v15->_Parent = Parent->_Parent;
          if ( Parent == this->_Mypair._Myval2._Myval2._Myhead->_Parent )
          {
            this->_Mypair._Myval2._Myval2._Myhead->_Parent = v15;
          }
          else
          {
            v16 = Parent->_Parent;
            if ( v10 == v16->_Left )
              v16->_Left = v15;
            else
              v16->_Right = v15;
          }
          v15->_Left = v10;
          v10->_Parent = v15;
        }
        v10->_Parent->_Color = 1;
        v10->_Parent->_Parent->_Color = 0;
        v17 = v10->_Parent->_Parent;
        v18 = v17->_Left;
        v17->_Left = v17->_Left->_Right;
        v19 = v18->_Right;
        if ( !v19->_Isnil )
          v19->_Parent = v17;
        v18->_Parent = v17->_Parent;
        if ( v17 == this->_Mypair._Myval2._Myval2._Myhead->_Parent )
        {
          this->_Mypair._Myval2._Myval2._Myhead->_Parent = v18;
          v18->_Right = v17;
        }
        else
        {
          v20 = v17->_Parent;
          if ( v17 == v20->_Right )
            v20->_Right = v18;
          else
            v20->_Left = v18;
          v18->_Right = v17;
        }
LABEL_49:
        v17->_Parent = v18;
        continue;
      }
      Parent->_Color = 1;
      Right->_Color = 1;
      v10->_Parent->_Parent->_Color = 0;
      v10 = v10->_Parent->_Parent;
    }
    else
    {
      if ( Left->_Color )
      {
        if ( v10 == Parent->_Left )
        {
          v21 = Parent->_Left;
          v10 = v10->_Parent;
          Parent->_Left = Parent->_Left->_Right;
          v22 = v21->_Right;
          if ( !v22->_Isnil )
            v22->_Parent = v10;
          v21->_Parent = v10->_Parent;
          if ( v10 == this->_Mypair._Myval2._Myval2._Myhead->_Parent )
          {
            this->_Mypair._Myval2._Myval2._Myhead->_Parent = v21;
          }
          else
          {
            v23 = v10->_Parent;
            if ( v10 == v23->_Right )
              v23->_Right = v21;
            else
              v23->_Left = v21;
          }
          v21->_Right = v10;
          v10->_Parent = v21;
        }
        v10->_Parent->_Color = 1;
        v10->_Parent->_Parent->_Color = 0;
        v17 = v10->_Parent->_Parent;
        v18 = v17->_Right;
        v17->_Right = v18->_Left;
        if ( !v18->_Left->_Isnil )
          v18->_Left->_Parent = v17;
        v18->_Parent = v17->_Parent;
        if ( v17 == this->_Mypair._Myval2._Myval2._Myhead->_Parent )
        {
          this->_Mypair._Myval2._Myval2._Myhead->_Parent = v18;
        }
        else
        {
          v24 = v17->_Parent;
          if ( v17 == v24->_Left )
            v24->_Left = v18;
          else
            v24->_Right = v18;
        }
        v18->_Left = v17;
        goto LABEL_49;
      }
      Parent->_Color = 1;
      Left->_Color = 1;
      v10->_Parent->_Parent->_Color = 0;
      v10 = v10->_Parent->_Parent;
    }
  }
  v25 = this->_Mypair._Myval2._Myval2._Myhead;
  result->_Ptr = _Node;
  v26 = v25->_Parent;
  v27 = result;
  v26->_Color = 1;
  return v27;
}

std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgHash const ,std::vector<OGLShader *> > > > > *__fastcall std::_Tree<std::_Tmap_traits<AgHash,std::vector<OGLShader *>,std::less<AgHash>,std::allocator<std::pair<AgHash const,std::vector<OGLShader *>>>,0>>::_Insert_at<std::pair<AgHash const,std::vector<OGLShader *>> &,std::_Tree_node<std::pair<AgHash const,std::vector<OGLShader *>>,void *> *>(
        std::_Tree<std::_Tmap_traits<AgHash,std::vector<OGLShader *>,std::less<AgHash>,std::allocator<std::pair<AgHash const ,std::vector<OGLShader *> > >,0> > *this,
        std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgHash const ,std::vector<OGLShader *> > > > > *result,
        bool _Addleft,
        std::_Tree_node<std::pair<AgHash const ,std::vector<OGLShader *> >,void *> *_Wherenode,
        std::pair<AgHash const ,std::vector<OGLShader *> > *_Val,
        std::_Tree_node<std::pair<AgHash const ,std::vector<OGLShader *> >,void *> *_Node)
{
  unsigned __int64 Mysize; // rax
  AgLogger **Myfirst; // rdx
  std::_Tree_node<std::pair<AgHash const ,std::vector<OGLShader *> >,void *> *Myhead; // rax
  std::_Tree_node<std::pair<AgHash const ,std::vector<OGLShader *> >,void *> *v11; // rax
  std::_Tree_node<std::pair<AgHash const ,std::vector<OGLShader *> >,void *> *Parent; // rcx
  std::_Tree_node<std::pair<AgHash const ,std::vector<OGLShader *> >,void *> *v13; // r8
  std::_Tree_node<std::pair<AgHash const ,std::vector<OGLShader *> >,void *> *Left; // rdx
  std::_Tree_node<std::pair<AgHash const ,std::vector<OGLShader *> >,void *> *Right; // rdx
  std::_Tree_node<std::pair<AgHash const ,std::vector<OGLShader *> >,void *> *v16; // rdx
  std::_Tree_node<std::pair<AgHash const ,std::vector<OGLShader *> >,void *> *v17; // rcx
  std::_Tree_node<std::pair<AgHash const ,std::vector<OGLShader *> >,void *> *v18; // rdx
  std::_Tree_node<std::pair<AgHash const ,std::vector<OGLShader *> >,void *> *v19; // r8
  std::_Tree_node<std::pair<AgHash const ,std::vector<OGLShader *> >,void *> *v20; // rcx
  std::_Tree_node<std::pair<AgHash const ,std::vector<OGLShader *> >,void *> *v21; // rcx
  std::_Tree_node<std::pair<AgHash const ,std::vector<OGLShader *> >,void *> *v22; // rdx
  std::_Tree_node<std::pair<AgHash const ,std::vector<OGLShader *> >,void *> *v23; // rcx
  std::_Tree_node<std::pair<AgHash const ,std::vector<OGLShader *> >,void *> *v24; // rcx
  std::_Tree_node<std::pair<AgHash const ,std::vector<OGLShader *> >,void *> *v25; // rcx
  std::_Tree_node<std::pair<AgHash const ,std::vector<OGLShader *> >,void *> *v26; // rax
  std::_Tree_node<std::pair<AgHash const ,std::vector<OGLShader *> >,void *> *v27; // rcx
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgHash const ,std::vector<OGLShader *> > > > > *v28; // rax

  Mysize = this->_Mypair._Myval2._Myval2._Mysize;
  if ( Mysize >= 0x3FFFFFFFFFFFFFEi64 )
  {
    Myfirst = (AgLogger **)_Node->_Myval.second._Mypair._Myval2._Myfirst;
    if ( Myfirst )
    {
      std::_Wrap_alloc<std::allocator<OGLShader *>>::deallocate(
        (std::allocator<AgLogger *> *)0x3FFFFFFFFFFFFFEi64,
        Myfirst,
        ((char *)_Node->_Myval.second._Mypair._Myval2._Myend - (char *)Myfirst) >> 3);
      _Node->_Myval.second._Mypair._Myval2._Myfirst = 0i64;
      _Node->_Myval.second._Mypair._Myval2._Mylast = 0i64;
      _Node->_Myval.second._Mypair._Myval2._Myend = 0i64;
    }
    operator delete(_Node);
    std::_Xlength_error("map/set<T> too long");
  }
  this->_Mypair._Myval2._Myval2._Mysize = Mysize + 1;
  _Node->_Parent = _Wherenode;
  if ( _Wherenode == this->_Mypair._Myval2._Myval2._Myhead )
  {
    this->_Mypair._Myval2._Myval2._Myhead->_Parent = _Node;
    this->_Mypair._Myval2._Myval2._Myhead->_Left = _Node;
    Myhead = this->_Mypair._Myval2._Myval2._Myhead;
LABEL_10:
    Myhead->_Right = _Node;
    goto LABEL_11;
  }
  if ( !_Addleft )
  {
    _Wherenode->_Right = _Node;
    Myhead = this->_Mypair._Myval2._Myval2._Myhead;
    if ( _Wherenode != this->_Mypair._Myval2._Myval2._Myhead->_Right )
      goto LABEL_11;
    goto LABEL_10;
  }
  _Wherenode->_Left = _Node;
  if ( _Wherenode == this->_Mypair._Myval2._Myval2._Myhead->_Left )
    this->_Mypair._Myval2._Myval2._Myhead->_Left = _Node;
LABEL_11:
  v11 = _Node;
  while ( !v11->_Parent->_Color )
  {
    Parent = v11->_Parent;
    v13 = Parent->_Parent;
    Left = v13->_Left;
    if ( Parent == v13->_Left )
    {
      Right = v13->_Right;
      if ( Right->_Color )
      {
        if ( v11 == Parent->_Right )
        {
          v16 = Parent->_Right;
          v11 = v11->_Parent;
          Parent->_Right = v16->_Left;
          if ( !v16->_Left->_Isnil )
            v16->_Left->_Parent = Parent;
          v16->_Parent = Parent->_Parent;
          if ( Parent == this->_Mypair._Myval2._Myval2._Myhead->_Parent )
          {
            this->_Mypair._Myval2._Myval2._Myhead->_Parent = v16;
          }
          else
          {
            v17 = Parent->_Parent;
            if ( v11 == v17->_Left )
              v17->_Left = v16;
            else
              v17->_Right = v16;
          }
          v16->_Left = v11;
          v11->_Parent = v16;
        }
        v11->_Parent->_Color = 1;
        v11->_Parent->_Parent->_Color = 0;
        v18 = v11->_Parent->_Parent;
        v19 = v18->_Left;
        v18->_Left = v18->_Left->_Right;
        v20 = v19->_Right;
        if ( !v20->_Isnil )
          v20->_Parent = v18;
        v19->_Parent = v18->_Parent;
        if ( v18 == this->_Mypair._Myval2._Myval2._Myhead->_Parent )
        {
          this->_Mypair._Myval2._Myval2._Myhead->_Parent = v19;
          v19->_Right = v18;
        }
        else
        {
          v21 = v18->_Parent;
          if ( v18 == v21->_Right )
            v21->_Right = v19;
          else
            v21->_Left = v19;
          v19->_Right = v18;
        }
LABEL_51:
        v18->_Parent = v19;
        continue;
      }
      Parent->_Color = 1;
      Right->_Color = 1;
      v11->_Parent->_Parent->_Color = 0;
      v11 = v11->_Parent->_Parent;
    }
    else
    {
      if ( Left->_Color )
      {
        if ( v11 == Parent->_Left )
        {
          v22 = Parent->_Left;
          v11 = v11->_Parent;
          Parent->_Left = Parent->_Left->_Right;
          v23 = v22->_Right;
          if ( !v23->_Isnil )
            v23->_Parent = v11;
          v22->_Parent = v11->_Parent;
          if ( v11 == this->_Mypair._Myval2._Myval2._Myhead->_Parent )
          {
            this->_Mypair._Myval2._Myval2._Myhead->_Parent = v22;
          }
          else
          {
            v24 = v11->_Parent;
            if ( v11 == v24->_Right )
              v24->_Right = v22;
            else
              v24->_Left = v22;
          }
          v22->_Right = v11;
          v11->_Parent = v22;
        }
        v11->_Parent->_Color = 1;
        v11->_Parent->_Parent->_Color = 0;
        v18 = v11->_Parent->_Parent;
        v19 = v18->_Right;
        v18->_Right = v19->_Left;
        if ( !v19->_Left->_Isnil )
          v19->_Left->_Parent = v18;
        v19->_Parent = v18->_Parent;
        if ( v18 == this->_Mypair._Myval2._Myval2._Myhead->_Parent )
        {
          this->_Mypair._Myval2._Myval2._Myhead->_Parent = v19;
        }
        else
        {
          v25 = v18->_Parent;
          if ( v18 == v25->_Left )
            v25->_Left = v19;
          else
            v25->_Right = v19;
        }
        v19->_Left = v18;
        goto LABEL_51;
      }
      Parent->_Color = 1;
      Left->_Color = 1;
      v11->_Parent->_Parent->_Color = 0;
      v11 = v11->_Parent->_Parent;
    }
  }
  v26 = this->_Mypair._Myval2._Myval2._Myhead;
  result->_Ptr = _Node;
  v27 = v26->_Parent;
  v28 = result;
  v27->_Color = 1;
  return v28;
}

std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const ,OGLModel *> > > > *__fastcall std::_Tree<std::_Tmap_traits<std::string,unsigned int,std::less<std::string>,std::allocator<std::pair<std::string const,unsigned int>>,0>>::_Insert_hint<std::pair<std::string const,unsigned int> &,std::_Tree_node<std::pair<std::string const,unsigned int>,void *> *>(
        std::_Tree<std::_Tmap_traits<std::string,OGLModel *,std::less<std::string >,std::allocator<std::pair<std::string const ,OGLModel *> >,0> > *this,
        std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const ,OGLModel *> > > > *result,
        std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const ,OGLModel *> > > > _Where,
        std::pair<std::string const ,OGLModel *> *_Val,
        std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *_Newnode)
{
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *Myhead; // rsi
  bool v11; // r8
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *Right; // rbx
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *Ptr; // rax
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *Left; // rbx
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *j; // rax
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *i; // rcx
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *v17; // rbx
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *v18; // rax
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *m; // rax
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *k; // rax
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *v21; // [rsp+20h] [rbp-48h]
  std::pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const ,OGLModel *> > > >,bool> resulta; // [rsp+38h] [rbp-30h] BYREF

  if ( !this->_Mypair._Myval2._Myval2._Mysize )
  {
    std::_Tree<std::_Tmap_traits<std::string,CSteamID,std::less<void>,std::allocator<std::pair<std::string const,CSteamID>>,0>>::_Insert_at<std::pair<std::string const,CSteamID> &,std::_Tree_node<std::pair<std::string const,CSteamID>,void *> *>(
      this,
      result,
      1,
      this->_Mypair._Myval2._Myval2._Myhead,
      (std::pair<std::string const ,OGLModel *> *)v21,
      _Newnode);
    return result;
  }
  Myhead = this->_Mypair._Myval2._Myval2._Myhead;
  if ( _Where._Ptr == this->_Mypair._Myval2._Myval2._Myhead->_Left )
  {
    if ( std::string::compare((std::string *)&_Val->first, &_Where._Ptr->_Myval.first) < 0 )
    {
      std::_Tree<std::_Tmap_traits<std::string,CSteamID,std::less<void>,std::allocator<std::pair<std::string const,CSteamID>>,0>>::_Insert_at<std::pair<std::string const,CSteamID> &,std::_Tree_node<std::pair<std::string const,CSteamID>,void *> *>(
        this,
        result,
        1,
        _Where._Ptr,
        (std::pair<std::string const ,OGLModel *> *)v21,
        _Newnode);
      return result;
    }
    goto LABEL_42;
  }
  if ( _Where._Ptr == Myhead )
  {
    Right = Myhead->_Right;
    if ( std::string::compare((std::string *)&Right->_Myval.first, &_Val->first) < 0 )
    {
      std::_Tree<std::_Tmap_traits<std::string,CSteamID,std::less<void>,std::allocator<std::pair<std::string const,CSteamID>>,0>>::_Insert_at<std::pair<std::string const,CSteamID> &,std::_Tree_node<std::pair<std::string const,CSteamID>,void *> *>(
        this,
        result,
        0,
        Right,
        (std::pair<std::string const ,OGLModel *> *)v21,
        _Newnode);
      return result;
    }
    goto LABEL_42;
  }
  if ( std::string::compare((std::string *)&_Val->first, &_Where._Ptr->_Myval.first) >= 0 )
    goto LABEL_37;
  Ptr = _Where._Ptr;
  if ( _Where._Ptr->_Isnil )
  {
    Left = _Where._Ptr->_Right;
  }
  else
  {
    Left = _Where._Ptr->_Left;
    if ( _Where._Ptr->_Left->_Isnil )
    {
      for ( i = _Where._Ptr->_Parent; !i->_Isnil; i = i->_Parent )
      {
        if ( Ptr != i->_Left )
          break;
        Ptr = i;
      }
      Left = Ptr;
      if ( !Ptr->_Isnil )
        Left = i;
    }
    else
    {
      for ( j = Left->_Right; !j->_Isnil; j = j->_Right )
        Left = j;
    }
  }
  if ( std::string::compare((std::string *)&Left->_Myval.first, &_Val->first) >= 0 )
  {
LABEL_37:
    if ( std::string::compare((std::string *)&_Where._Ptr->_Myval.first, &_Val->first) >= 0 )
      goto LABEL_42;
    v17 = _Where._Ptr;
    if ( !_Where._Ptr->_Isnil )
    {
      v18 = _Where._Ptr->_Right;
      if ( v18->_Isnil )
      {
        for ( k = _Where._Ptr->_Parent; !k->_Isnil; k = k->_Parent )
        {
          if ( v17 != k->_Right )
            break;
          v17 = k;
        }
        v17 = k;
      }
      else
      {
        v17 = _Where._Ptr->_Right;
        for ( m = v18->_Left; !m->_Isnil; m = m->_Left )
          v17 = m;
      }
    }
    if ( v17 != Myhead && std::string::compare((std::string *)&_Val->first, &v17->_Myval.first) >= 0 )
    {
LABEL_42:
      result->_Ptr = (std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *)std::_Tree<std::_Tmap_traits<std::string,OGLModel *,std::less<std::string>,std::allocator<std::pair<std::string const,OGLModel *>>,0>>::_Insert_nohint<std::pair<std::string const,OGLModel *> &,std::_Tree_node<std::pair<std::string const,OGLModel *>,void *> *>(
                                                                                           this,
                                                                                           &resulta,
                                                                                           v11,
                                                                                           _Val,
                                                                                           _Newnode)->first;
      return result;
    }
    if ( _Where._Ptr->_Right->_Isnil )
      std::_Tree<std::_Tmap_traits<std::string,CSteamID,std::less<void>,std::allocator<std::pair<std::string const,CSteamID>>,0>>::_Insert_at<std::pair<std::string const,CSteamID> &,std::_Tree_node<std::pair<std::string const,CSteamID>,void *> *>(
        this,
        result,
        0,
        _Where._Ptr,
        (std::pair<std::string const ,OGLModel *> *)v21,
        _Newnode);
    else
      std::_Tree<std::_Tmap_traits<std::string,CSteamID,std::less<void>,std::allocator<std::pair<std::string const,CSteamID>>,0>>::_Insert_at<std::pair<std::string const,CSteamID> &,std::_Tree_node<std::pair<std::string const,CSteamID>,void *> *>(
        this,
        result,
        1,
        v17,
        (std::pair<std::string const ,OGLModel *> *)v21,
        _Newnode);
    return result;
  }
  else
  {
    if ( Left->_Right->_Isnil )
      std::_Tree<std::_Tmap_traits<std::string,CSteamID,std::less<void>,std::allocator<std::pair<std::string const,CSteamID>>,0>>::_Insert_at<std::pair<std::string const,CSteamID> &,std::_Tree_node<std::pair<std::string const,CSteamID>,void *> *>(
        this,
        result,
        0,
        Left,
        (std::pair<std::string const ,OGLModel *> *)v21,
        _Newnode);
    else
      std::_Tree<std::_Tmap_traits<std::string,CSteamID,std::less<void>,std::allocator<std::pair<std::string const,CSteamID>>,0>>::_Insert_at<std::pair<std::string const,CSteamID> &,std::_Tree_node<std::pair<std::string const,CSteamID>,void *> *>(
        this,
        result,
        1,
        _Where._Ptr,
        (std::pair<std::string const ,OGLModel *> *)v21,
        _Newnode);
    return result;
  }
}

std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgHash const ,std::vector<OGLShader *> > > > > *__fastcall std::_Tree<std::_Tmap_traits<AgHash,std::vector<OGLShader *>,std::less<AgHash>,std::allocator<std::pair<AgHash const,std::vector<OGLShader *>>>,0>>::_Insert_hint<std::pair<AgHash const,std::vector<OGLShader *>> &,std::_Tree_node<std::pair<AgHash const,std::vector<OGLShader *>>,void *> *>(
        std::_Tree<std::_Tmap_traits<AgHash,std::vector<OGLShader *>,std::less<AgHash>,std::allocator<std::pair<AgHash const ,std::vector<OGLShader *> > >,0> > *this,
        std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgHash const ,std::vector<OGLShader *> > > > > *result,
        std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgHash const ,std::vector<OGLShader *> > > > > _Where,
        std::pair<AgHash const ,std::vector<OGLShader *> > *_Val,
        std::_Tree_node<std::pair<AgHash const ,std::vector<OGLShader *> >,void *> *_Newnode)
{
  std::_Tree_node<std::pair<AgHash const ,std::vector<OGLShader *> >,void *> *Myhead; // rcx
  std::_Tree_node<std::pair<AgHash const ,std::vector<OGLShader *> >,void *> *Right; // r9
  unsigned int m_key; // edi
  unsigned int v12; // er11
  bool v13; // cf
  std::_Tree_node<std::pair<AgHash const ,std::vector<OGLShader *> >,void *> *Ptr; // rax
  std::_Tree_node<std::pair<AgHash const ,std::vector<OGLShader *> >,void *> *Left; // r9
  std::_Tree_node<std::pair<AgHash const ,std::vector<OGLShader *> >,void *> *j; // rax
  std::_Tree_node<std::pair<AgHash const ,std::vector<OGLShader *> >,void *> *i; // rdx
  std::_Tree_node<std::pair<AgHash const ,std::vector<OGLShader *> >,void *> *v18; // r9
  std::_Tree_node<std::pair<AgHash const ,std::vector<OGLShader *> >,void *> *v19; // rax
  std::_Tree_node<std::pair<AgHash const ,std::vector<OGLShader *> >,void *> *m; // rax
  std::_Tree_node<std::pair<AgHash const ,std::vector<OGLShader *> >,void *> *k; // rax
  std::_Tree_node<std::pair<AgHash const ,std::vector<OGLShader *> >,void *> *v22; // [rsp+20h] [rbp-38h]
  std::pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgHash const ,std::vector<OGLShader *> > > > >,bool> resulta; // [rsp+38h] [rbp-20h] BYREF

  if ( !this->_Mypair._Myval2._Myval2._Mysize )
  {
    std::_Tree<std::_Tmap_traits<AgHash,std::vector<OGLShader *>,std::less<AgHash>,std::allocator<std::pair<AgHash const,std::vector<OGLShader *>>>,0>>::_Insert_at<std::pair<AgHash const,std::vector<OGLShader *>> &,std::_Tree_node<std::pair<AgHash const,std::vector<OGLShader *>>,void *> *>(
      this,
      result,
      1,
      this->_Mypair._Myval2._Myval2._Myhead,
      (std::pair<AgHash const ,std::vector<OGLShader *> > *)v22,
      _Newnode);
    return result;
  }
  Myhead = this->_Mypair._Myval2._Myval2._Myhead;
  if ( _Where._Ptr == Myhead->_Left )
  {
    if ( _Val->first.m_key < _Where._Ptr->_Myval.first.m_key )
    {
      std::_Tree<std::_Tmap_traits<AgHash,std::vector<OGLShader *>,std::less<AgHash>,std::allocator<std::pair<AgHash const,std::vector<OGLShader *>>>,0>>::_Insert_at<std::pair<AgHash const,std::vector<OGLShader *>> &,std::_Tree_node<std::pair<AgHash const,std::vector<OGLShader *>>,void *> *>(
        this,
        result,
        1,
        _Where._Ptr,
        (std::pair<AgHash const ,std::vector<OGLShader *> > *)v22,
        _Newnode);
      return result;
    }
    goto LABEL_43;
  }
  if ( _Where._Ptr == Myhead )
  {
    Right = Myhead->_Right;
    if ( Right->_Myval.first.m_key < _Val->first.m_key )
    {
      std::_Tree<std::_Tmap_traits<AgHash,std::vector<OGLShader *>,std::less<AgHash>,std::allocator<std::pair<AgHash const,std::vector<OGLShader *>>>,0>>::_Insert_at<std::pair<AgHash const,std::vector<OGLShader *>> &,std::_Tree_node<std::pair<AgHash const,std::vector<OGLShader *>>,void *> *>(
        this,
        result,
        0,
        Right,
        (std::pair<AgHash const ,std::vector<OGLShader *> > *)v22,
        _Newnode);
      return result;
    }
    goto LABEL_43;
  }
  m_key = _Val->first.m_key;
  v12 = _Where._Ptr->_Myval.first.m_key;
  v13 = v12 < _Val->first.m_key;
  if ( v12 > _Val->first.m_key )
  {
    Ptr = _Where._Ptr;
    if ( _Where._Ptr->_Isnil )
    {
      Left = _Where._Ptr->_Right;
    }
    else
    {
      Left = _Where._Ptr->_Left;
      if ( _Where._Ptr->_Left->_Isnil )
      {
        for ( i = _Where._Ptr->_Parent; !i->_Isnil; i = i->_Parent )
        {
          if ( Ptr != i->_Left )
            break;
          Ptr = i;
        }
        Left = Ptr;
        if ( !Ptr->_Isnil )
          Left = i;
      }
      else
      {
        for ( j = Left->_Right; !j->_Isnil; j = j->_Right )
          Left = j;
      }
    }
    if ( Left->_Myval.first.m_key < m_key )
    {
      if ( Left->_Right->_Isnil )
        std::_Tree<std::_Tmap_traits<AgHash,std::vector<OGLShader *>,std::less<AgHash>,std::allocator<std::pair<AgHash const,std::vector<OGLShader *>>>,0>>::_Insert_at<std::pair<AgHash const,std::vector<OGLShader *>> &,std::_Tree_node<std::pair<AgHash const,std::vector<OGLShader *>>,void *> *>(
          this,
          result,
          0,
          Left,
          (std::pair<AgHash const ,std::vector<OGLShader *> > *)v22,
          _Newnode);
      else
        std::_Tree<std::_Tmap_traits<AgHash,std::vector<OGLShader *>,std::less<AgHash>,std::allocator<std::pair<AgHash const,std::vector<OGLShader *>>>,0>>::_Insert_at<std::pair<AgHash const,std::vector<OGLShader *>> &,std::_Tree_node<std::pair<AgHash const,std::vector<OGLShader *>>,void *> *>(
          this,
          result,
          1,
          _Where._Ptr,
          (std::pair<AgHash const ,std::vector<OGLShader *> > *)v22,
          _Newnode);
      return result;
    }
    v13 = v12 < m_key;
  }
  if ( !v13 )
    goto LABEL_43;
  v18 = _Where._Ptr;
  if ( !_Where._Ptr->_Isnil )
  {
    v19 = _Where._Ptr->_Right;
    if ( v19->_Isnil )
    {
      for ( k = _Where._Ptr->_Parent; !k->_Isnil; k = k->_Parent )
      {
        if ( v18 != k->_Right )
          break;
        v18 = k;
      }
      v18 = k;
    }
    else
    {
      v18 = _Where._Ptr->_Right;
      for ( m = v19->_Left; !m->_Isnil; m = m->_Left )
        v18 = m;
    }
  }
  if ( v18 != Myhead && m_key >= v18->_Myval.first.m_key )
  {
LABEL_43:
    result->_Ptr = (std::_Tree_node<std::pair<AgHash const ,std::vector<OGLShader *> >,void *> *)std::_Tree<std::_Tmap_traits<AgHash,std::vector<OGLShader *>,std::less<AgHash>,std::allocator<std::pair<AgHash const,std::vector<OGLShader *>>>,0>>::_Insert_nohint<std::pair<AgHash const,std::vector<OGLShader *>> &,std::_Tree_node<std::pair<AgHash const,std::vector<OGLShader *>>,void *> *>(
                                                                                                   this,
                                                                                                   &resulta,
                                                                                                   (bool)_Where._Ptr,
                                                                                                   _Val,
                                                                                                   _Newnode)->first;
    return result;
  }
  if ( _Where._Ptr->_Right->_Isnil )
    std::_Tree<std::_Tmap_traits<AgHash,std::vector<OGLShader *>,std::less<AgHash>,std::allocator<std::pair<AgHash const,std::vector<OGLShader *>>>,0>>::_Insert_at<std::pair<AgHash const,std::vector<OGLShader *>> &,std::_Tree_node<std::pair<AgHash const,std::vector<OGLShader *>>,void *> *>(
      this,
      result,
      0,
      _Where._Ptr,
      (std::pair<AgHash const ,std::vector<OGLShader *> > *)v22,
      _Newnode);
  else
    std::_Tree<std::_Tmap_traits<AgHash,std::vector<OGLShader *>,std::less<AgHash>,std::allocator<std::pair<AgHash const,std::vector<OGLShader *>>>,0>>::_Insert_at<std::pair<AgHash const,std::vector<OGLShader *>> &,std::_Tree_node<std::pair<AgHash const,std::vector<OGLShader *>>,void *> *>(
      this,
      result,
      1,
      v18,
      (std::pair<AgHash const ,std::vector<OGLShader *> > *)v22,
      _Newnode);
  return result;
}

std::pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const ,OGLModel *> > > >,bool> *__fastcall std::_Tree<std::_Tmap_traits<std::string,OGLModel *,std::less<std::string>,std::allocator<std::pair<std::string const,OGLModel *>>,0>>::_Insert_nohint<std::pair<std::string const,OGLModel *> &,std::_Tree_node<std::pair<std::string const,OGLModel *>,void *> *>(
        std::_Tree<std::_Tmap_traits<std::string,OGLModel *,std::less<std::string >,std::allocator<std::pair<std::string const ,OGLModel *> >,0> > *this,
        std::pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const ,OGLModel *> > > >,bool> *result,
        bool _Leftish,
        std::pair<std::string const ,OGLModel *> *_Val,
        std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *_Newnode)
{
  std::_Tree<std::_Tmap_traits<std::string,OGLModel *,std::less<std::string >,std::allocator<std::pair<std::string const ,OGLModel *> >,0> > *v7; // rsi
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *Myhead; // rax
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *Parent; // rbx
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *v10; // r14
  BOOL v11; // edi
  unsigned __int64 Mysize; // r15
  char **p_Myval; // rdx
  std::pair<std::string const ,OGLModel *> *Ptr; // rcx
  size_t v15; // rsi
  size_t v16; // r8
  unsigned int v17; // edi
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *Right; // rbx
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *j; // rax
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *i; // rax
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *v22; // rdi
  std::pair<std::string const ,OGLModel *> *v23; // [rsp+20h] [rbp-48h]
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *v24; // [rsp+30h] [rbp-38h]
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const ,OGLModel *> > > > resulta; // [rsp+70h] [rbp+8h] BYREF

  resulta._Ptr = (std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *)this;
  v7 = this;
  Myhead = this->_Mypair._Myval2._Myval2._Myhead;
  v24 = this->_Mypair._Myval2._Myval2._Myhead;
  Parent = this->_Mypair._Myval2._Myval2._Myhead->_Parent;
  v10 = this->_Mypair._Myval2._Myval2._Myhead;
  LOBYTE(v11) = 1;
  if ( !Parent->_Isnil )
  {
    Mysize = _Val->first._Mypair._Myval2._Mysize;
    do
    {
      v10 = Parent;
      p_Myval = (char **)&Parent->_Myval;
      if ( Parent->_Myval.first._Mypair._Myval2._Myres >= 0x10 )
        p_Myval = (char **)*p_Myval;
      if ( _Val->first._Mypair._Myval2._Myres < 0x10 )
        Ptr = _Val;
      else
        Ptr = (std::pair<std::string const ,OGLModel *> *)_Val->first._Mypair._Myval2._Bx._Ptr;
      v15 = Parent->_Myval.first._Mypair._Myval2._Mysize;
      v16 = v15;
      if ( Mysize < v15 )
        v16 = Mysize;
      if ( !v16 || (v17 = memcmp(Ptr, p_Myval, v16)) == 0 )
      {
        if ( Mysize >= v15 )
          v17 = Mysize > v15;
        else
          v17 = -1;
      }
      v11 = v17 >> 31;
      if ( v11 )
        Parent = Parent->_Left;
      else
        Parent = Parent->_Right;
    }
    while ( !Parent->_Isnil );
    Myhead = v24;
    v7 = (std::_Tree<std::_Tmap_traits<std::string,OGLModel *,std::less<std::string >,std::allocator<std::pair<std::string const ,OGLModel *> >,0> > *)resulta._Ptr;
  }
  Right = v10;
  if ( v11 )
  {
    if ( v10 == Myhead->_Left )
    {
      result->first = (std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const ,OGLModel *> > > >)std::_Tree<std::_Tmap_traits<std::string,CSteamID,std::less<void>,std::allocator<std::pair<std::string const,CSteamID>>,0>>::_Insert_at<std::pair<std::string const,CSteamID> &,std::_Tree_node<std::pair<std::string const,CSteamID>,void *> *>(v7, &resulta, 1, v10, v23, _Newnode)->_Ptr;
      result->second = 1;
      return result;
    }
    if ( v10->_Isnil )
    {
      Right = v10->_Right;
    }
    else if ( v10->_Left->_Isnil )
    {
      for ( i = v10->_Parent; !i->_Isnil; i = i->_Parent )
      {
        if ( Right != i->_Left )
          break;
        Right = i;
      }
      if ( !Right->_Isnil )
        Right = i;
    }
    else
    {
      Right = v10->_Left;
      for ( j = v10->_Left->_Right; !j->_Isnil; j = j->_Right )
        Right = j;
    }
  }
  if ( std::string::compare((std::string *)&Right->_Myval.first, &_Val->first) >= 0 )
  {
    v22 = _Newnode;
    std::string::~string((std::string *)&_Newnode->_Myval.first);
    operator delete(v22);
    result->first._Ptr = Right;
    result->second = 0;
  }
  else
  {
    result->first = (std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const ,OGLModel *> > > >)std::_Tree<std::_Tmap_traits<std::string,CSteamID,std::less<void>,std::allocator<std::pair<std::string const,CSteamID>>,0>>::_Insert_at<std::pair<std::string const,CSteamID> &,std::_Tree_node<std::pair<std::string const,CSteamID>,void *> *>(v7, &resulta, v11, v10, v23, _Newnode)->_Ptr;
    result->second = 1;
  }
  return result;
}

std::pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgHash const ,std::vector<OGLShader *> > > > >,bool> *__fastcall std::_Tree<std::_Tmap_traits<AgHash,std::vector<OGLShader *>,std::less<AgHash>,std::allocator<std::pair<AgHash const,std::vector<OGLShader *>>>,0>>::_Insert_nohint<std::pair<AgHash const,std::vector<OGLShader *>> &,std::_Tree_node<std::pair<AgHash const,std::vector<OGLShader *>>,void *> *>(
        std::_Tree<std::_Tmap_traits<AgHash,std::vector<OGLShader *>,std::less<AgHash>,std::allocator<std::pair<AgHash const ,std::vector<OGLShader *> > >,0> > *this,
        std::pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgHash const ,std::vector<OGLShader *> > > > >,bool> *result,
        bool _Leftish,
        std::pair<AgHash const ,std::vector<OGLShader *> > *_Val,
        std::_Tree_node<std::pair<AgHash const ,std::vector<OGLShader *> >,void *> *_Newnode)
{
  std::_Tree_node<std::pair<AgHash const ,std::vector<OGLShader *> >,void *> *Parent; // rax
  std::_Tree_node<std::pair<AgHash const ,std::vector<OGLShader *> >,void *> *Myhead; // r9
  bool v9; // r8
  unsigned int m_key; // edx
  std::_Tree_node<std::pair<AgHash const ,std::vector<OGLShader *> >,void *> *Right; // rbx
  std::_Tree_node<std::pair<AgHash const ,std::vector<OGLShader *> >,void *> *j; // rax
  std::_Tree_node<std::pair<AgHash const ,std::vector<OGLShader *> >,void *> *i; // rax
  std::_Tree_node<std::pair<AgHash const ,std::vector<OGLShader *> >,void *> *v15; // rsi
  AgLogger **Myfirst; // rdx
  std::pair<AgHash const ,std::vector<OGLShader *> > *v17; // [rsp+20h] [rbp-28h]
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgHash const ,std::vector<OGLShader *> > > > > resulta; // [rsp+50h] [rbp+8h] BYREF

  Parent = this->_Mypair._Myval2._Myval2._Myhead->_Parent;
  Myhead = this->_Mypair._Myval2._Myval2._Myhead;
  v9 = 1;
  if ( !Parent->_Isnil )
  {
    m_key = _Val->first.m_key;
    do
    {
      Myhead = Parent;
      v9 = m_key < Parent->_Myval.first.m_key;
      if ( m_key >= Parent->_Myval.first.m_key )
        Parent = Parent->_Right;
      else
        Parent = Parent->_Left;
    }
    while ( !Parent->_Isnil );
  }
  Right = Myhead;
  if ( v9 )
  {
    if ( Myhead == this->_Mypair._Myval2._Myval2._Myhead->_Left )
    {
      result->first = (std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgHash const ,std::vector<OGLShader *> > > > >)std::_Tree<std::_Tmap_traits<AgHash,std::vector<OGLShader *>,std::less<AgHash>,std::allocator<std::pair<AgHash const,std::vector<OGLShader *>>>,0>>::_Insert_at<std::pair<AgHash const,std::vector<OGLShader *>> &,std::_Tree_node<std::pair<AgHash const,std::vector<OGLShader *>>,void *> *>(this, &resulta, 1, Myhead, v17, _Newnode)->_Ptr;
      result->second = 1;
      return result;
    }
    if ( Myhead->_Isnil )
    {
      Right = Myhead->_Right;
    }
    else if ( Myhead->_Left->_Isnil )
    {
      for ( i = Myhead->_Parent; !i->_Isnil; i = i->_Parent )
      {
        if ( Right != i->_Left )
          break;
        Right = i;
      }
      if ( !Right->_Isnil )
        Right = i;
    }
    else
    {
      Right = Myhead->_Left;
      for ( j = Myhead->_Left->_Right; !j->_Isnil; j = j->_Right )
        Right = j;
    }
  }
  if ( Right->_Myval.first.m_key >= _Val->first.m_key )
  {
    v15 = _Newnode;
    Myfirst = (AgLogger **)_Newnode->_Myval.second._Mypair._Myval2._Myfirst;
    if ( Myfirst )
    {
      std::_Wrap_alloc<std::allocator<OGLShader *>>::deallocate(
        (std::allocator<AgLogger *> *)this,
        Myfirst,
        ((char *)_Newnode->_Myval.second._Mypair._Myval2._Myend - (char *)Myfirst) >> 3);
      v15->_Myval.second._Mypair._Myval2._Myfirst = 0i64;
      v15->_Myval.second._Mypair._Myval2._Mylast = 0i64;
      v15->_Myval.second._Mypair._Myval2._Myend = 0i64;
    }
    operator delete(v15);
    result->first._Ptr = Right;
    result->second = 0;
    return result;
  }
  else
  {
    result->first = (std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgHash const ,std::vector<OGLShader *> > > > >)std::_Tree<std::_Tmap_traits<AgHash,std::vector<OGLShader *>,std::less<AgHash>,std::allocator<std::pair<AgHash const,std::vector<OGLShader *>>>,0>>::_Insert_at<std::pair<AgHash const,std::vector<OGLShader *>> &,std::_Tree_node<std::pair<AgHash const,std::vector<OGLShader *>>,void *> *>(this, &resulta, v9, Myhead, v17, _Newnode)->_Ptr;
    result->second = 1;
    return result;
  }
}

std::_Tree_node<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig>,void *> *__fastcall std::_Tree<std::_Tmap_traits<std::string,unsigned int,std::less<std::string>,std::allocator<std::pair<std::string const,unsigned int>>,0>>::_Lbound<std::string>(
        std::_Tree<std::_Tmap_traits<std::string,extension::GFXIFontManager::LanguageConfig,std::less<std::string >,std::allocator<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig> >,0> > *this,
        const std::string *_Keyval)
{
  std::_Tree_node<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig>,void *> *Myhead; // r14
  std::_Tree_node<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig>,void *> *Parent; // rbx
  unsigned __int64 Mysize; // rbp
  unsigned __int64 Myres; // r15
  char **p_Myval; // rcx
  const std::string *Ptr; // rdx
  unsigned __int64 v9; // rdi
  size_t v10; // r8
  int v11; // eax

  Myhead = this->_Mypair._Myval2._Myval2._Myhead;
  Parent = this->_Mypair._Myval2._Myval2._Myhead->_Parent;
  if ( !Parent->_Isnil )
  {
    Mysize = _Keyval->_Mypair._Myval2._Mysize;
    Myres = _Keyval->_Mypair._Myval2._Myres;
    do
    {
      p_Myval = (char **)&Parent->_Myval;
      if ( Myres < 0x10 )
        Ptr = _Keyval;
      else
        Ptr = (const std::string *)_Keyval->_Mypair._Myval2._Bx._Ptr;
      if ( Parent->_Myval.first._Mypair._Myval2._Myres >= 0x10 )
        p_Myval = (char **)*p_Myval;
      v9 = Parent->_Myval.first._Mypair._Myval2._Mysize;
      v10 = Mysize;
      if ( v9 < Mysize )
        v10 = Parent->_Myval.first._Mypair._Myval2._Mysize;
      if ( v10 && (v11 = memcmp(p_Myval, Ptr, v10)) != 0 )
      {
        if ( v11 >= 0 )
          goto LABEL_17;
      }
      else if ( v9 >= Mysize )
      {
LABEL_17:
        Myhead = Parent;
        Parent = Parent->_Left;
        continue;
      }
      Parent = Parent->_Right;
    }
    while ( !Parent->_Isnil );
  }
  return Myhead;
}

void __fastcall OGLRender::OGLRender(OGLRender *this, int capacity)
{
  std::_Tree_comp_alloc<std::_Tmap_traits<unsigned int,std::vector<unsigned char>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,std::vector<unsigned char> > >,0> > *v3; // rcx
  __int64 v4; // r8
  _OGLRenderModelFXShaderSettings *m_modelFXShaderSettings; // rdx
  __int64 v6; // rcx
  _OGLRenderModelFXShaderSettings *v7; // rax

  *(_QWORD *)this->m_Proj.m = 0i64;
  *(_QWORD *)&this->m_Proj.m[2] = 0i64;
  *(_QWORD *)&this->m_Proj.m[4] = 0i64;
  *(_QWORD *)&this->m_Proj.m[6] = 0i64;
  *(_QWORD *)&this->m_Proj.m[8] = 0i64;
  *(_QWORD *)&this->m_Proj.m[10] = 0i64;
  *(_QWORD *)&this->m_Proj.m[12] = 0i64;
  *(_QWORD *)&this->m_Proj.m[14] = 0i64;
  *(_QWORD *)this->m_OrthoProj.m = 0i64;
  *(_QWORD *)&this->m_OrthoProj.m[2] = 0i64;
  *(_QWORD *)&this->m_OrthoProj.m[4] = 0i64;
  *(_QWORD *)&this->m_OrthoProj.m[6] = 0i64;
  *(_QWORD *)&this->m_OrthoProj.m[8] = 0i64;
  *(_QWORD *)&this->m_OrthoProj.m[10] = 0i64;
  *(_QWORD *)&this->m_OrthoProj.m[12] = 0i64;
  *(_QWORD *)&this->m_OrthoProj.m[14] = 0i64;
  *(_QWORD *)this->m_View.m = 0i64;
  *(_QWORD *)&this->m_View.m[2] = 0i64;
  *(_QWORD *)&this->m_View.m[4] = 0i64;
  *(_QWORD *)&this->m_View.m[6] = 0i64;
  *(_QWORD *)&this->m_View.m[8] = 0i64;
  *(_QWORD *)&this->m_View.m[10] = 0i64;
  *(_QWORD *)&this->m_View.m[12] = 0i64;
  *(_QWORD *)&this->m_View.m[14] = 0i64;
  *(_QWORD *)this->m_ViewProj.m = 0i64;
  *(_QWORD *)&this->m_ViewProj.m[2] = 0i64;
  *(_QWORD *)&this->m_ViewProj.m[4] = 0i64;
  *(_QWORD *)&this->m_ViewProj.m[6] = 0i64;
  *(_QWORD *)&this->m_ViewProj.m[8] = 0i64;
  *(_QWORD *)&this->m_ViewProj.m[10] = 0i64;
  *(_QWORD *)&this->m_ViewProj.m[12] = 0i64;
  *(_QWORD *)&this->m_ViewProj.m[14] = 0i64;
  *(_QWORD *)this->m_PrevViewProj.m = 0i64;
  *(_QWORD *)&this->m_PrevViewProj.m[2] = 0i64;
  *(_QWORD *)&this->m_PrevViewProj.m[4] = 0i64;
  *(_QWORD *)&this->m_PrevViewProj.m[6] = 0i64;
  *(_QWORD *)&this->m_PrevViewProj.m[8] = 0i64;
  *(_QWORD *)&this->m_PrevViewProj.m[10] = 0i64;
  *(_QWORD *)&this->m_PrevViewProj.m[12] = 0i64;
  *(_QWORD *)&this->m_PrevViewProj.m[14] = 0i64;
  *(_QWORD *)this->m_InvView.m = 0i64;
  *(_QWORD *)&this->m_InvView.m[2] = 0i64;
  *(_QWORD *)&this->m_InvView.m[4] = 0i64;
  *(_QWORD *)&this->m_InvView.m[6] = 0i64;
  *(_QWORD *)&this->m_InvView.m[8] = 0i64;
  *(_QWORD *)&this->m_InvView.m[10] = 0i64;
  *(_QWORD *)&this->m_InvView.m[12] = 0i64;
  *(_QWORD *)&this->m_InvView.m[14] = 0i64;
  *(_QWORD *)this->m_invModelViewProj.m = 0i64;
  *(_QWORD *)&this->m_invModelViewProj.m[2] = 0i64;
  *(_QWORD *)&this->m_invModelViewProj.m[4] = 0i64;
  *(_QWORD *)&this->m_invModelViewProj.m[6] = 0i64;
  *(_QWORD *)&this->m_invModelViewProj.m[8] = 0i64;
  *(_QWORD *)&this->m_invModelViewProj.m[10] = 0i64;
  *(_QWORD *)&this->m_invModelViewProj.m[12] = 0i64;
  *(_QWORD *)&this->m_invModelViewProj.m[14] = 0i64;
  *(_QWORD *)this->m_prevView.m = 0i64;
  *(_QWORD *)&this->m_prevView.m[2] = 0i64;
  *(_QWORD *)&this->m_prevView.m[4] = 0i64;
  *(_QWORD *)&this->m_prevView.m[6] = 0i64;
  *(_QWORD *)&this->m_prevView.m[8] = 0i64;
  *(_QWORD *)&this->m_prevView.m[10] = 0i64;
  *(_QWORD *)&this->m_prevView.m[12] = 0i64;
  *(_QWORD *)&this->m_prevView.m[14] = 0i64;
  this->m_GroundFog.m_Mode = 0;
  *(_QWORD *)this->m_GroundFog.m_Color = 0i64;
  *(_QWORD *)&this->m_GroundFog.m_Color[2] = 0i64;
  *(_QWORD *)&this->m_GroundFog.m_fStart = 0i64;
  *(_QWORD *)&this->m_GroundFog.m_fUpDistance = 0i64;
  *(_QWORD *)&this->m_GroundFog.m_fUpHeight = 0i64;
  *(_QWORD *)&this->m_GroundFog.m_fUpStrength = 0i64;
  *(_QWORD *)this->m_GroundFog.m_UpColour = 0i64;
  *(_QWORD *)&this->m_GroundFog.m_UpColour[2] = 0i64;
  *(_QWORD *)&this->m_GroundFog.m_fDownDistanceExp = 0i64;
  *(_QWORD *)&this->m_GroundFog.m_fDownHeightExp = 0i64;
  *(_QWORD *)this->m_GroundFog.m_DownColour = 0i64;
  *(_QWORD *)&this->m_GroundFog.m_DownColour[2] = 0i64;
  this->m_GroundFog.m_bOn = 0;
  this->m_GroundFog.m_calcType = CALC_ADD;
  *(_QWORD *)&this->m_GroundFog.m_fShaderDistDivisor = 0i64;
  *(_QWORD *)&this->m_GroundFog.m_fShaderUpHeight = 0i64;
  *(_QWORD *)&this->m_GroundFog.m_fShaderExtraHeightSetting = 0i64;
  *(_QWORD *)this->m_SkyFog.m_Color = 0i64;
  *(_QWORD *)&this->m_SkyFog.m_Color[2] = 0i64;
  *(_QWORD *)&this->m_SkyFog.m_fStart = 0i64;
  *(_QWORD *)&this->m_SkyFog.m_fUpDistance = 0i64;
  *(_QWORD *)&this->m_SkyFog.m_fUpHeight = 0i64;
  *(_QWORD *)&this->m_SkyFog.m_fUpStrength = 0i64;
  *(_QWORD *)this->m_SkyFog.m_UpColour = 0i64;
  *(_QWORD *)&this->m_SkyFog.m_UpColour[2] = 0i64;
  *(_QWORD *)&this->m_SkyFog.m_fDownDistanceExp = 0i64;
  *(_QWORD *)&this->m_SkyFog.m_fDownHeightExp = 0i64;
  *(_QWORD *)this->m_SkyFog.m_DownColour = 0i64;
  *(_QWORD *)&this->m_SkyFog.m_DownColour[2] = 0i64;
  this->m_SkyFog.m_bOn = 0;
  this->m_SkyFog.m_calcType = CALC_ADD;
  *(_QWORD *)&this->m_SkyFog.m_fShaderDistDivisor = 0i64;
  *(_QWORD *)&this->m_SkyFog.m_fShaderUpHeight = 0i64;
  this->m_SkyFog.m_fShaderExtraHeightSetting = 0.0;
  OGLLightManager::OGLLightManager(&this->m_WorldLightManager);
  OGLMaterialLight::initialize(&this->m_MaterialLight);
  this->m_shadersToLoad._Mypair._Myval2._Myval2._Myhead = 0i64;
  this->m_shadersToLoad._Mypair._Myval2._Myval2._Mysize = 0i64;
  this->m_shadersToLoad._Mypair._Myval2._Myval2._Myhead = (std::_Tree_node<std::pair<AgHash const ,std::vector<OGLShader *> >,void *> *)std::_Tree_comp_alloc<std::_Tset_traits<std::string,std::less<std::string>,std::allocator<std::string>,0>>::_Buyheadnode(v3);
  _OGLRenderTextures::_OGLRenderTextures(&this->m_renderTextures);
  v4 = 3i64;
  m_modelFXShaderSettings = this->m_modelFXShaderSettings;
  do
  {
    --v4;
    v6 = 2i64;
    v7 = m_modelFXShaderSettings;
    do
    {
      v7->fxTexCentre[0] = 0i64;
      v7 = (_OGLRenderModelFXShaderSettings *)((char *)v7 + 8);
      --v6;
    }
    while ( v6 );
    ++m_modelFXShaderSettings;
  }
  while ( v4 );
  this->m_BkgndShadLightAreaSettings.shadLightPos = 0i64;
  this->m_BkgndShadLightAreaSettings.shadLightMinMax = 0i64;
  OGLRender::initialize(this, (int)m_modelFXShaderSettings);
}

void __fastcall _OGLRenderTextures::_OGLRenderTextures(_OGLRenderTextures *this)
{
  `eh vector constructor iterator'(
    this->m_FullScreenTexture,
    0x50ui64,
    0xAui64,
    (void (__fastcall *)(void *))OGLTexture::OGLTexture,
    (void (__fastcall *)(void *))OGLTexture::~OGLTexture);
  `eh vector constructor iterator'(
    this->m_RenderDepthMapTexture,
    0x50ui64,
    0xAui64,
    (void (__fastcall *)(void *))OGLTexture::OGLTexture,
    (void (__fastcall *)(void *))OGLTexture::~OGLTexture);
  `eh vector constructor iterator'(
    this->m_DepthMapForAlphaTexture,
    0x50ui64,
    0xAui64,
    (void (__fastcall *)(void *))OGLTexture::OGLTexture,
    (void (__fastcall *)(void *))OGLTexture::~OGLTexture);
  `eh vector constructor iterator'(
    this->m_DepthMapTexture,
    0x50ui64,
    0xAui64,
    (void (__fastcall *)(void *))OGLTexture::OGLTexture,
    (void (__fastcall *)(void *))OGLTexture::~OGLTexture);
  `eh vector constructor iterator'(
    this->m_FullScreenMaskTexture,
    0x50ui64,
    0xAui64,
    (void (__fastcall *)(void *))OGLTexture::OGLTexture,
    (void (__fastcall *)(void *))OGLTexture::~OGLTexture);
  `eh vector constructor iterator'(
    this->m_CombinedMaskTexture,
    0x50ui64,
    4ui64,
    (void (__fastcall *)(void *))OGLTexture::OGLTexture,
    (void (__fastcall *)(void *))OGLTexture::~OGLTexture);
  `eh vector constructor iterator'(
    this->m_ShadowDepthMap,
    0x50ui64,
    5ui64,
    (void (__fastcall *)(void *))OGLTexture::OGLTexture,
    (void (__fastcall *)(void *))OGLTexture::~OGLTexture);
  `eh vector constructor iterator'(
    this->m_ShadowTransparencyMap,
    0x50ui64,
    5ui64,
    (void (__fastcall *)(void *))OGLTexture::OGLTexture,
    (void (__fastcall *)(void *))OGLTexture::~OGLTexture);
  `eh vector constructor iterator'(
    this->m_CharacterTexture,
    0x50ui64,
    2ui64,
    (void (__fastcall *)(void *))OGLTexture::OGLTexture,
    (void (__fastcall *)(void *))OGLTexture::~OGLTexture);
  this->m_RenderBufferBloomDepthMapTexture.__vftable = (OGLTexture_vtbl *)&OGLTexture::`vftable';
  *(_QWORD *)&this->m_RenderBufferBloomDepthMapTexture.m_Width = 0i64;
  *(_QWORD *)&this->m_RenderBufferBloomDepthMapTexture.m_TexID = 0i64;
  this->m_RenderBufferBloomDepthMapTexture.m_Transparent = 1;
  this->m_RenderBufferBloomDepthMapTexture.m_TexFormat = 0;
  *(_WORD *)&this->m_RenderBufferBloomDepthMapTexture.m_FileInfo.transparent = 1;
  this->m_RenderBufferBloomDepthMapTexture.m_FileInfo.option = 0;
  this->m_RenderBufferBloomDepthMapTexture.m_FileInfo.fileName = 0i64;
  *(_WORD *)&this->m_RenderBufferBloomDepthMapTexture.m_bResume = 0;
  *(_QWORD *)&this->m_RenderBufferBloomDepthMapTexture.m_FrameBufferID = 0i64;
  this->m_RenderBufferBloomDepthMapTexture.m_sync = 0i64;
  this->m_BloomMapTexture.__vftable = (OGLTexture_vtbl *)&OGLTexture::`vftable';
  *(_QWORD *)&this->m_BloomMapTexture.m_Width = 0i64;
  *(_QWORD *)&this->m_BloomMapTexture.m_TexID = 0i64;
  this->m_BloomMapTexture.m_Transparent = 1;
  this->m_BloomMapTexture.m_TexFormat = 0;
  *(_WORD *)&this->m_BloomMapTexture.m_FileInfo.transparent = 1;
  this->m_BloomMapTexture.m_FileInfo.option = 0;
  this->m_BloomMapTexture.m_FileInfo.fileName = 0i64;
  *(_WORD *)&this->m_BloomMapTexture.m_bResume = 0;
  *(_QWORD *)&this->m_BloomMapTexture.m_FrameBufferID = 0i64;
  this->m_BloomMapTexture.m_sync = 0i64;
  `eh vector constructor iterator'(
    this->m_CharacterHighlights,
    0x50ui64,
    2ui64,
    (void (__fastcall *)(void *))OGLTexture::OGLTexture,
    (void (__fastcall *)(void *))OGLTexture::~OGLTexture);
  this->m_BloomDepthMapTexture.__vftable = (OGLTexture_vtbl *)&OGLTexture::`vftable';
  *(_QWORD *)&this->m_BloomDepthMapTexture.m_Width = 0i64;
  *(_QWORD *)&this->m_BloomDepthMapTexture.m_TexID = 0i64;
  this->m_BloomDepthMapTexture.m_Transparent = 1;
  this->m_BloomDepthMapTexture.m_TexFormat = 0;
  *(_WORD *)&this->m_BloomDepthMapTexture.m_FileInfo.transparent = 1;
  this->m_BloomDepthMapTexture.m_FileInfo.option = 0;
  this->m_BloomDepthMapTexture.m_FileInfo.fileName = 0i64;
  *(_WORD *)&this->m_BloomDepthMapTexture.m_bResume = 0;
  *(_QWORD *)&this->m_BloomDepthMapTexture.m_FrameBufferID = 0i64;
  this->m_BloomDepthMapTexture.m_sync = 0i64;
  `eh vector constructor iterator'(
    this->m_BloomMapDownSampleTexture,
    0x50ui64,
    3ui64,
    (void (__fastcall *)(void *))OGLTexture::OGLTexture,
    (void (__fastcall *)(void *))OGLTexture::~OGLTexture);
  `eh vector constructor iterator'(
    this->m_ReflectionTexture,
    0x50ui64,
    2ui64,
    (void (__fastcall *)(void *))OGLTexture::OGLTexture,
    (void (__fastcall *)(void *))OGLTexture::~OGLTexture);
  `eh vector constructor iterator'(
    this->m_CharacterFrames,
    0x50ui64,
    0xAui64,
    (void (__fastcall *)(void *))OGLTexture::OGLTexture,
    (void (__fastcall *)(void *))OGLTexture::~OGLTexture);
  `eh vector constructor iterator'(
    this->m_CharacterFramesDepth,
    0x50ui64,
    0xAui64,
    (void (__fastcall *)(void *))OGLTexture::OGLTexture,
    (void (__fastcall *)(void *))OGLTexture::~OGLTexture);
  this->m_GameOutputTexture.__vftable = (OGLTexture_vtbl *)&OGLTexture::`vftable';
  *(_QWORD *)&this->m_GameOutputTexture.m_Width = 0i64;
  *(_QWORD *)&this->m_GameOutputTexture.m_TexID = 0i64;
  this->m_GameOutputTexture.m_Transparent = 1;
  this->m_GameOutputTexture.m_TexFormat = 0;
  *(_WORD *)&this->m_GameOutputTexture.m_FileInfo.transparent = 1;
  this->m_GameOutputTexture.m_FileInfo.option = 0;
  this->m_GameOutputTexture.m_FileInfo.fileName = 0i64;
  *(_WORD *)&this->m_GameOutputTexture.m_bResume = 0;
  *(_QWORD *)&this->m_GameOutputTexture.m_FrameBufferID = 0i64;
  this->m_GameOutputTexture.m_sync = 0i64;
  this->m_DownsampledTexture.__vftable = (OGLTexture_vtbl *)&OGLTexture::`vftable';
  *(_QWORD *)&this->m_DownsampledTexture.m_Width = 0i64;
  *(_QWORD *)&this->m_DownsampledTexture.m_TexID = 0i64;
  this->m_DownsampledTexture.m_Transparent = 1;
  this->m_DownsampledTexture.m_TexFormat = 0;
  *(_WORD *)&this->m_DownsampledTexture.m_FileInfo.transparent = 1;
  this->m_DownsampledTexture.m_FileInfo.option = 0;
  this->m_DownsampledTexture.m_FileInfo.fileName = 0i64;
  *(_WORD *)&this->m_DownsampledTexture.m_bResume = 0;
  *(_QWORD *)&this->m_DownsampledTexture.m_FrameBufferID = 0i64;
  this->m_DownsampledTexture.m_sync = 0i64;
  this->m_ScreenBlurTexture.__vftable = (OGLTexture_vtbl *)&OGLTexture::`vftable';
  *(_QWORD *)&this->m_ScreenBlurTexture.m_Width = 0i64;
  *(_QWORD *)&this->m_ScreenBlurTexture.m_TexID = 0i64;
  this->m_ScreenBlurTexture.m_Transparent = 1;
  this->m_ScreenBlurTexture.m_TexFormat = 0;
  *(_WORD *)&this->m_ScreenBlurTexture.m_FileInfo.transparent = 1;
  this->m_ScreenBlurTexture.m_FileInfo.option = 0;
  this->m_ScreenBlurTexture.m_FileInfo.fileName = 0i64;
  *(_WORD *)&this->m_ScreenBlurTexture.m_bResume = 0;
  *(_QWORD *)&this->m_ScreenBlurTexture.m_FrameBufferID = 0i64;
  this->m_ScreenBlurTexture.m_sync = 0i64;
  this->m_TempTexture.__vftable = (OGLTexture_vtbl *)&OGLTexture::`vftable';
  *(_QWORD *)&this->m_TempTexture.m_Width = 0i64;
  *(_QWORD *)&this->m_TempTexture.m_TexID = 0i64;
  this->m_TempTexture.m_Transparent = 1;
  this->m_TempTexture.m_TexFormat = 0;
  *(_WORD *)&this->m_TempTexture.m_FileInfo.transparent = 1;
  this->m_TempTexture.m_FileInfo.option = 0;
  this->m_TempTexture.m_FileInfo.fileName = 0i64;
  *(_WORD *)&this->m_TempTexture.m_bResume = 0;
  *(_QWORD *)&this->m_TempTexture.m_FrameBufferID = 0i64;
  this->m_TempTexture.m_sync = 0i64;
  `eh vector constructor iterator'(
    this->m_MergedTexture,
    0x50ui64,
    2ui64,
    (void (__fastcall *)(void *))OGLTexture::OGLTexture,
    (void (__fastcall *)(void *))OGLTexture::~OGLTexture);
  `eh vector constructor iterator'(
    this->m_MergedDepthTexture,
    0x50ui64,
    2ui64,
    (void (__fastcall *)(void *))OGLTexture::OGLTexture,
    (void (__fastcall *)(void *))OGLTexture::~OGLTexture);
  `eh vector constructor iterator'(
    this->m_BlendBufferTexture,
    0x50ui64,
    2ui64,
    (void (__fastcall *)(void *))OGLTexture::OGLTexture,
    (void (__fastcall *)(void *))OGLTexture::~OGLTexture);
}

void __fastcall std::map<std::string,unsigned int>::~map<std::string,unsigned int>(
        std::map<std::string,OGLModel *> *this)
{
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const ,OGLModel *> > > > result; // [rsp+30h] [rbp+8h] BYREF

  std::_Tree<std::_Tmap_traits<std::string,unsigned int,std::less<std::string>,std::allocator<std::pair<std::string const,unsigned int>>,0>>::erase(
    this,
    &result,
    (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const ,OGLModel *> > > >)this->_Mypair._Myval2._Myval2._Myhead->_Left,
    (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const ,OGLModel *> > > >)this->_Mypair._Myval2._Myval2._Myhead);
  operator delete(this->_Mypair._Myval2._Myval2._Myhead);
}

void __fastcall std::map<AgHash,std::vector<OGLShader *>>::~map<AgHash,std::vector<OGLShader *>>(
        std::map<AgHash,std::vector<OGLShader *>> *this)
{
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgHash const ,std::vector<OGLShader *> > > > > result; // [rsp+30h] [rbp+8h] BYREF

  std::_Tree<std::_Tmap_traits<AgHash,std::vector<OGLShader *>,std::less<AgHash>,std::allocator<std::pair<AgHash const,std::vector<OGLShader *>>>,0>>::erase(
    this,
    &result,
    (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgHash const ,std::vector<OGLShader *> > > > >)this->_Mypair._Myval2._Myval2._Myhead->_Left,
    (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgHash const ,std::vector<OGLShader *> > > > >)this->_Mypair._Myval2._Myval2._Myhead);
  operator delete(this->_Mypair._Myval2._Myval2._Myhead);
}

void __fastcall _OGLRenderTextures::~_OGLRenderTextures(_OGLRenderTextures *this)
{
  `eh vector destructor iterator'(
    this->m_BlendBufferTexture,
    0x50ui64,
    2ui64,
    (void (__fastcall *)(void *))OGLTexture::~OGLTexture);
  `eh vector destructor iterator'(
    this->m_MergedDepthTexture,
    0x50ui64,
    2ui64,
    (void (__fastcall *)(void *))OGLTexture::~OGLTexture);
  `eh vector destructor iterator'(
    this->m_MergedTexture,
    0x50ui64,
    2ui64,
    (void (__fastcall *)(void *))OGLTexture::~OGLTexture);
  this->m_TempTexture.__vftable = (OGLTexture_vtbl *)&OGLTexture::`vftable';
  OGLTexture::finalize(&this->m_TempTexture);
  this->m_ScreenBlurTexture.__vftable = (OGLTexture_vtbl *)&OGLTexture::`vftable';
  OGLTexture::finalize(&this->m_ScreenBlurTexture);
  this->m_DownsampledTexture.__vftable = (OGLTexture_vtbl *)&OGLTexture::`vftable';
  OGLTexture::finalize(&this->m_DownsampledTexture);
  this->m_GameOutputTexture.__vftable = (OGLTexture_vtbl *)&OGLTexture::`vftable';
  OGLTexture::finalize(&this->m_GameOutputTexture);
  `eh vector destructor iterator'(
    this->m_CharacterFramesDepth,
    0x50ui64,
    0xAui64,
    (void (__fastcall *)(void *))OGLTexture::~OGLTexture);
  `eh vector destructor iterator'(
    this->m_CharacterFrames,
    0x50ui64,
    0xAui64,
    (void (__fastcall *)(void *))OGLTexture::~OGLTexture);
  `eh vector destructor iterator'(
    this->m_ReflectionTexture,
    0x50ui64,
    2ui64,
    (void (__fastcall *)(void *))OGLTexture::~OGLTexture);
  `eh vector destructor iterator'(
    this->m_BloomMapDownSampleTexture,
    0x50ui64,
    3ui64,
    (void (__fastcall *)(void *))OGLTexture::~OGLTexture);
  this->m_BloomDepthMapTexture.__vftable = (OGLTexture_vtbl *)&OGLTexture::`vftable';
  OGLTexture::finalize(&this->m_BloomDepthMapTexture);
  `eh vector destructor iterator'(
    this->m_CharacterHighlights,
    0x50ui64,
    2ui64,
    (void (__fastcall *)(void *))OGLTexture::~OGLTexture);
  this->m_BloomMapTexture.__vftable = (OGLTexture_vtbl *)&OGLTexture::`vftable';
  OGLTexture::finalize(&this->m_BloomMapTexture);
  this->m_RenderBufferBloomDepthMapTexture.__vftable = (OGLTexture_vtbl *)&OGLTexture::`vftable';
  OGLTexture::finalize(&this->m_RenderBufferBloomDepthMapTexture);
  `eh vector destructor iterator'(
    this->m_CharacterTexture,
    0x50ui64,
    2ui64,
    (void (__fastcall *)(void *))OGLTexture::~OGLTexture);
  `eh vector destructor iterator'(
    this->m_ShadowTransparencyMap,
    0x50ui64,
    5ui64,
    (void (__fastcall *)(void *))OGLTexture::~OGLTexture);
  `eh vector destructor iterator'(
    this->m_ShadowDepthMap,
    0x50ui64,
    5ui64,
    (void (__fastcall *)(void *))OGLTexture::~OGLTexture);
  `eh vector destructor iterator'(
    this->m_CombinedMaskTexture,
    0x50ui64,
    4ui64,
    (void (__fastcall *)(void *))OGLTexture::~OGLTexture);
  `eh vector destructor iterator'(
    this->m_FullScreenMaskTexture,
    0x50ui64,
    0xAui64,
    (void (__fastcall *)(void *))OGLTexture::~OGLTexture);
  `eh vector destructor iterator'(
    this->m_DepthMapTexture,
    0x50ui64,
    0xAui64,
    (void (__fastcall *)(void *))OGLTexture::~OGLTexture);
  `eh vector destructor iterator'(
    this->m_DepthMapForAlphaTexture,
    0x50ui64,
    0xAui64,
    (void (__fastcall *)(void *))OGLTexture::~OGLTexture);
  `eh vector destructor iterator'(
    this->m_RenderDepthMapTexture,
    0x50ui64,
    0xAui64,
    (void (__fastcall *)(void *))OGLTexture::~OGLTexture);
  `eh vector destructor iterator'(
    this->m_FullScreenTexture,
    0x50ui64,
    0xAui64,
    (void (__fastcall *)(void *))OGLTexture::~OGLTexture);
}

std::vector<OGLShader *> *__fastcall std::map<AgHash,std::vector<OGLShader *>>::operator[](
        std::map<AgHash,std::vector<OGLShader *>> *this,
        AgHash *_Keyval,
        __int64 a3,
        std::tuple<> *m_key)
{
  std::_Tree_node<std::pair<AgHash const ,std::vector<OGLShader *> >,void *> *Myhead; // rbx
  std::_Tree_node<std::pair<AgHash const ,std::vector<OGLShader *> >,void *> *Parent; // r8
  std::_Tree_node<std::pair<AgHash const ,std::vector<OGLShader *> >,void *> *_Newnode; // rax
  std::tuple<unsigned int const &> v9; // [rsp+40h] [rbp+8h] BYREF

  Myhead = this->_Mypair._Myval2._Myval2._Myhead;
  Parent = this->_Mypair._Myval2._Myval2._Myhead->_Parent;
  if ( !Parent->_Isnil )
  {
    m_key = (std::tuple<> *)_Keyval->m_key;
    do
    {
      if ( Parent->_Myval.first.m_key >= (unsigned int)m_key )
      {
        Myhead = Parent;
        Parent = Parent->_Left;
      }
      else
      {
        Parent = Parent->_Right;
      }
    }
    while ( !Parent->_Isnil );
  }
  if ( Myhead != this->_Mypair._Myval2._Myval2._Myhead && _Keyval->m_key >= Myhead->_Myval.first.m_key )
    return &Myhead->_Myval.second;
  v9._Myfirst._Val = &_Keyval->m_key;
  _Newnode = (std::_Tree_node<std::pair<AgHash const ,std::vector<OGLShader *> >,void *> *)std::_Tree_comp_alloc<std::_Tmap_traits<unsigned int,std::vector<unsigned char>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::vector<unsigned char>>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<unsigned int const &>,std::tuple<>>(
                                                                                             (std::_Tree_comp_alloc<std::_Tmap_traits<unsigned int,std::vector<unsigned char>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,std::vector<unsigned char> > >,0> > *)this,
                                                                                             (const std::piecewise_construct_t *)_Keyval,
                                                                                             &v9,
                                                                                             m_key);
  std::_Tree<std::_Tmap_traits<AgHash,std::vector<OGLShader *>,std::less<AgHash>,std::allocator<std::pair<AgHash const,std::vector<OGLShader *>>>,0>>::_Insert_hint<std::pair<AgHash const,std::vector<OGLShader *>> &,std::_Tree_node<std::pair<AgHash const,std::vector<OGLShader *>>,void *> *>(
    this,
    (std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgHash const ,std::vector<OGLShader *> > > > > *)&v9,
    (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgHash const ,std::vector<OGLShader *> > > > >)Myhead,
    &_Newnode->_Myval,
    _Newnode);
  return (std::vector<OGLShader *> *)(v9._Myfirst._Val + 10);
}

void __fastcall QuickSort(OGLModelStackData **pData, int left, int right)
{
  __int64 v3; // r10
  int v5; // edi
  int v6; // esi
  __int64 v7; // r11
  OGLModelStackData *v8; // rax
  unsigned int BlendMode; // er9
  unsigned int v10; // ebx
  OGLModelStackData *v11; // rdx
  unsigned int v12; // er8
  OGLModelStackData *v13; // rax
  unsigned int v14; // er8
  OGLModelStackData *v15; // rcx
  int ThisID; // [rsp+50h] [rbp+8h]
  int lefta; // [rsp+58h] [rbp+10h]

  lefta = left;
  v3 = right;
  do
  {
    v5 = left;
    v6 = v3;
    v7 = left;
    v8 = pData[(__int64)(left + (int)v3) >> 1];
    BlendMode = v8->BlendMode;
    ThisID = v8->ThisID;
    v10 = v8->pModel->m_pFigure->m_iFormatType & 0x10;
    while ( 1 )
    {
      while ( 1 )
      {
        v11 = pData[v7];
        v12 = v11->BlendMode;
        if ( v12 >= BlendMode
          && (v12 != BlendMode
           || (v11->pModel->m_pFigure->m_iFormatType & 0x10u) >= v10
           && (v12 != BlendMode || (v11->pModel->m_pFigure->m_iFormatType & 0x10) != v10 || v11->ThisID >= ThisID)) )
        {
          break;
        }
        ++v5;
        ++v7;
      }
      while ( 1 )
      {
        v13 = pData[v3];
        v14 = v13->BlendMode;
        if ( v14 <= BlendMode
          && (v14 != BlendMode
           || (v13->pModel->m_pFigure->m_iFormatType & 0x10u) <= v10
           && (v14 != BlendMode || (v13->pModel->m_pFigure->m_iFormatType & 0x10) != v10 || v13->ThisID <= ThisID)) )
        {
          break;
        }
        --v6;
        --v3;
      }
      if ( v5 >= v6 )
        break;
      v15 = pData[v7];
      ++v5;
      pData[v7] = v13;
      --v6;
      ++v7;
      pData[v3--] = v15;
    }
    if ( lefta < v5 - 1 )
      QuickSort(pData, lefta, v5 - 1);
    v3 = right;
    left = v6 + 1;
    lefta = v6 + 1;
  }
  while ( v6 + 1 < right );
}

std::_Tree_node<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig>,void *> *__fastcall std::_Tree_comp_alloc<std::_Tmap_traits<std::string,CSteamID,std::less<void>,std::allocator<std::pair<std::string const,CSteamID>>,0>>::_Buyheadnode(
        std::_Tree_comp_alloc<std::_Tmap_traits<std::string,extension::GFXIFontManager::LanguageConfig,std::less<std::string >,std::allocator<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig> >,0> > *this)
{
  std::_Tree_node<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig>,void *> *result; // rax

  result = (std::_Tree_node<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig>,void *> *)operator new(0x48ui64);
  if ( result )
    result->_Left = result;
  if ( result != (std::_Tree_node<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig>,void *> *)-8i64 )
    result->_Parent = result;
  if ( result != (std::_Tree_node<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig>,void *> *)-16i64 )
    result->_Right = result;
  *(_WORD *)&result->_Color = 257;
  return result;
}

std::_Tree_node<std::pair<unsigned int const ,std::vector<unsigned char> >,void *> *__fastcall std::_Tree_comp_alloc<std::_Tset_traits<std::string,std::less<std::string>,std::allocator<std::string>,0>>::_Buyheadnode(
        std::_Tree_comp_alloc<std::_Tmap_traits<unsigned int,std::vector<unsigned char>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,std::vector<unsigned char> > >,0> > *this)
{
  std::_Tree_node<std::pair<unsigned int const ,std::vector<unsigned char> >,void *> *result; // rax

  result = (std::_Tree_node<std::pair<unsigned int const ,std::vector<unsigned char> >,void *> *)operator new(0x40ui64);
  if ( result )
    result->_Left = result;
  if ( result != (std::_Tree_node<std::pair<unsigned int const ,std::vector<unsigned char> >,void *> *)-8i64 )
    result->_Parent = result;
  if ( result != (std::_Tree_node<std::pair<unsigned int const ,std::vector<unsigned char> >,void *> *)-16i64 )
    result->_Right = result;
  *(_WORD *)&result->_Color = 257;
  return result;
}

std::_Tree_node<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig>,void *> *__fastcall std::_Tree_comp_alloc<std::_Tmap_traits<std::string,CSteamID,std::less<void>,std::allocator<std::pair<std::string const,CSteamID>>,0>>::_Buynode0(
        std::_Tree_comp_alloc<std::_Tmap_traits<std::string,extension::GFXIFontManager::LanguageConfig,std::less<std::string >,std::allocator<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig> >,0> > *this)
{
  std::_Tree_node<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig>,void *> *result; // rax

  result = (std::_Tree_node<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig>,void *> *)operator new(0x48ui64);
  if ( result )
    result->_Left = this->_Mypair._Myval2._Myval2._Myhead;
  if ( result != (std::_Tree_node<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig>,void *> *)-8i64 )
    result->_Parent = this->_Mypair._Myval2._Myval2._Myhead;
  if ( result != (std::_Tree_node<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig>,void *> *)-16i64 )
    result->_Right = this->_Mypair._Myval2._Myval2._Myhead;
  return result;
}

std::_Tree_node<std::pair<unsigned int const ,std::vector<unsigned char> >,void *> *__fastcall std::_Tree_comp_alloc<std::_Tmap_traits<AgHash,std::vector<OGLShader *>,std::less<AgHash>,std::allocator<std::pair<AgHash const,std::vector<OGLShader *>>>,0>>::_Buynode0(
        std::_Tree_comp_alloc<std::_Tmap_traits<unsigned int,std::vector<unsigned char>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,std::vector<unsigned char> > >,0> > *this)
{
  std::_Tree_node<std::pair<unsigned int const ,std::vector<unsigned char> >,void *> *result; // rax

  result = (std::_Tree_node<std::pair<unsigned int const ,std::vector<unsigned char> >,void *> *)operator new(0x40ui64);
  if ( result )
    result->_Left = this->_Mypair._Myval2._Myval2._Myhead;
  if ( result != (std::_Tree_node<std::pair<unsigned int const ,std::vector<unsigned char> >,void *> *)-8i64 )
    result->_Parent = this->_Mypair._Myval2._Myval2._Myhead;
  if ( result != (std::_Tree_node<std::pair<unsigned int const ,std::vector<unsigned char> >,void *> *)-16i64 )
    result->_Right = this->_Mypair._Myval2._Myval2._Myhead;
  return result;
}

void __fastcall std::_Tree<std::_Tmap_traits<AgHash,std::vector<OGLShader *>,std::less<AgHash>,std::allocator<std::pair<AgHash const,std::vector<OGLShader *>>>,0>>::_Destroy_if_not_nil(
        std::_Tree<std::_Tmap_traits<AgHash,std::vector<OGLShader *>,std::less<AgHash>,std::allocator<std::pair<AgHash const ,std::vector<OGLShader *> > >,0> > *this,
        std::_Tree_node<std::pair<AgHash const ,std::vector<OGLShader *> >,void *> *_Newnode)
{
  AgLogger **Myfirst; // rdx

  Myfirst = (AgLogger **)_Newnode->_Myval.second._Mypair._Myval2._Myfirst;
  if ( Myfirst )
  {
    std::_Wrap_alloc<std::allocator<OGLShader *>>::deallocate(
      (std::allocator<AgLogger *> *)this,
      Myfirst,
      ((char *)_Newnode->_Myval.second._Mypair._Myval2._Myend - (char *)Myfirst) >> 3);
    _Newnode->_Myval.second._Mypair._Myval2._Myfirst = 0i64;
    _Newnode->_Myval.second._Mypair._Myval2._Mylast = 0i64;
    _Newnode->_Myval.second._Mypair._Myval2._Myend = 0i64;
  }
  operator delete(_Newnode);
}

void __fastcall std::_Tree<std::_Tset_traits<std::string,std::less<std::string>,std::allocator<std::string>,0>>::_Erase(
        std::_Tree<std::_Tset_traits<std::string,std::less<std::string >,std::allocator<std::string >,0> > *this,
        std::_Tree_node<std::string,void *> *_Rootnode)
{
  std::_Tree_node<std::string,void *> *v2; // rsi
  std::_Tree_node<std::string,void *> *i; // rdi
  unsigned __int64 Myres; // rax
  void **p_Myval; // rbx
  char *v7; // rcx
  char *v8; // rax
  unsigned __int64 v9; // rcx
  bool v10; // cf

  v2 = _Rootnode;
  for ( i = _Rootnode; !i->_Isnil; v2 = i )
  {
    std::_Tree<std::_Tset_traits<std::string,std::less<std::string>,std::allocator<std::string>,0>>::_Erase(
      this,
      i->_Right);
    Myres = v2->_Myval._Mypair._Myval2._Myres;
    p_Myval = (void **)&v2->_Myval;
    i = i->_Left;
    if ( Myres >= 0x10 )
    {
      v7 = (char *)*p_Myval;
      if ( Myres + 1 >= 0x1000 )
      {
        if ( ((unsigned __int8)v7 & 0x1F) != 0 )
          invalid_parameter_noinfo_noreturn();
        v8 = (char *)*((_QWORD *)v7 - 1);
        if ( v8 >= v7 )
          invalid_parameter_noinfo_noreturn();
        v9 = v7 - v8;
        if ( v9 < 8 )
          invalid_parameter_noinfo_noreturn();
        if ( v9 > 0x27 )
          invalid_parameter_noinfo_noreturn();
        v7 = v8;
      }
      operator delete(v7);
    }
    v2->_Myval._Mypair._Myval2._Myres = 15i64;
    v10 = v2->_Myval._Mypair._Myval2._Myres < 0x10;
    v2->_Myval._Mypair._Myval2._Mysize = 0i64;
    if ( !v10 )
      p_Myval = (void **)*p_Myval;
    *(_BYTE *)p_Myval = 0;
    operator delete(v2);
  }
}

void __fastcall std::_Tree<std::_Tmap_traits<AgHash,std::vector<OGLShader *>,std::less<AgHash>,std::allocator<std::pair<AgHash const,std::vector<OGLShader *>>>,0>>::_Erase(
        std::_Tree<std::_Tmap_traits<AgHash,std::vector<OGLShader *>,std::less<AgHash>,std::allocator<std::pair<AgHash const ,std::vector<OGLShader *> > >,0> > *this,
        std::_Tree_node<std::pair<AgHash const ,std::vector<OGLShader *> >,void *> *_Rootnode)
{
  std::_Tree_node<std::pair<AgHash const ,std::vector<OGLShader *> >,void *> *v2; // rbx
  std::_Tree_node<std::pair<AgHash const ,std::vector<OGLShader *> >,void *> *i; // rdi
  char *Myfirst; // rcx
  unsigned __int64 v6; // rax
  char *v7; // rax
  unsigned __int64 v8; // rcx

  v2 = _Rootnode;
  for ( i = _Rootnode; !i->_Isnil; v2 = i )
  {
    std::_Tree<std::_Tmap_traits<AgHash,std::vector<OGLShader *>,std::less<AgHash>,std::allocator<std::pair<AgHash const,std::vector<OGLShader *>>>,0>>::_Erase(
      this,
      i->_Right);
    Myfirst = (char *)v2->_Myval.second._Mypair._Myval2._Myfirst;
    i = i->_Left;
    if ( Myfirst )
    {
      v6 = ((char *)v2->_Myval.second._Mypair._Myval2._Myend - Myfirst) >> 3;
      if ( v6 > 0x1FFFFFFFFFFFFFFFi64 )
        invalid_parameter_noinfo_noreturn();
      if ( 8 * v6 >= 0x1000 )
      {
        if ( ((unsigned __int8)Myfirst & 0x1F) != 0 )
          invalid_parameter_noinfo_noreturn();
        v7 = (char *)*((_QWORD *)Myfirst - 1);
        if ( v7 >= Myfirst )
          invalid_parameter_noinfo_noreturn();
        v8 = Myfirst - v7;
        if ( v8 < 8 )
          invalid_parameter_noinfo_noreturn();
        if ( v8 > 0x27 )
          invalid_parameter_noinfo_noreturn();
        Myfirst = v7;
      }
      operator delete(Myfirst);
      v2->_Myval.second._Mypair._Myval2._Myfirst = 0i64;
      v2->_Myval.second._Mypair._Myval2._Mylast = 0i64;
      v2->_Myval.second._Mypair._Myval2._Myend = 0i64;
    }
    operator delete(v2);
  }
}

void __fastcall std::_Tree<std::_Tmap_traits<AgControllerUID,FighterOperationMapper,std::less<AgControllerUID>,std::allocator<std::pair<AgControllerUID const,FighterOperationMapper>>,0>>::_Lrotate(
        std::_Tree<std::_Tmap_traits<AgStringRef,AgJsonNode,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const ,AgJsonNode> >,0> > *this,
        std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *_Wherenode)
{
  std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *Right; // r8
  std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *Parent; // rax

  Right = _Wherenode->_Right;
  _Wherenode->_Right = Right->_Left;
  if ( !Right->_Left->_Isnil )
    Right->_Left->_Parent = _Wherenode;
  Right->_Parent = _Wherenode->_Parent;
  if ( _Wherenode == this->_Mypair._Myval2._Myval2._Myhead->_Parent )
  {
    this->_Mypair._Myval2._Myval2._Myhead->_Parent = Right;
    Right->_Left = _Wherenode;
    _Wherenode->_Parent = Right;
  }
  else
  {
    Parent = _Wherenode->_Parent;
    if ( _Wherenode == Parent->_Left )
      Parent->_Left = Right;
    else
      Parent->_Right = Right;
    Right->_Left = _Wherenode;
    _Wherenode->_Parent = Right;
  }
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

void __fastcall std::_Tree<std::_Tmap_traits<enum AgControllerComponentType,std::list<AgControllerComponent *>,std::less<enum AgControllerComponentType>,std::allocator<std::pair<enum AgControllerComponentType const,std::list<AgControllerComponent *>>>,0>>::_Rrotate(
        std::_Tree<std::_Tmap_traits<AgStringRef,AgJsonNode,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const ,AgJsonNode> >,0> > *this,
        std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *_Wherenode)
{
  std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *Left; // r8
  std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *Right; // rax
  std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *Parent; // rax

  Left = _Wherenode->_Left;
  _Wherenode->_Left = _Wherenode->_Left->_Right;
  Right = Left->_Right;
  if ( !Right->_Isnil )
    Right->_Parent = _Wherenode;
  Left->_Parent = _Wherenode->_Parent;
  if ( _Wherenode == this->_Mypair._Myval2._Myval2._Myhead->_Parent )
  {
    this->_Mypair._Myval2._Myval2._Myhead->_Parent = Left;
    Left->_Right = _Wherenode;
    _Wherenode->_Parent = Left;
  }
  else
  {
    Parent = _Wherenode->_Parent;
    if ( _Wherenode == Parent->_Right )
      Parent->_Right = Left;
    else
      Parent->_Left = Left;
    Left->_Right = _Wherenode;
    _Wherenode->_Parent = Left;
  }
}

void __fastcall AgFrameAllocator<AgAllocator<1>>::_allocateBlock(AgFrameAllocator<AgAllocator<1> > *this)
{
  unsigned __int8 *v2; // rax
  unsigned __int8 **Myfirst; // rdx
  unsigned __int8 **Mylast; // rcx
  unsigned __int8 *v5; // rdi
  __int64 v6; // rdi
  unsigned __int8 **v7; // rdx
  unsigned __int8 **v8; // rax
  unsigned __int8 *v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = (unsigned __int8 *)AgAllocator<1>::allocate((AgAllocator<1> *)&v9, this->m_blockSize);
  Mylast = this->m_blocks._Mypair._Myval2._Mylast;
  v5 = v2;
  v9 = v2;
  if ( &v9 >= Mylast || (Myfirst = this->m_blocks._Mypair._Myval2._Myfirst, Myfirst > &v9) )
  {
    if ( Mylast == this->m_blocks._Mypair._Myval2._Myend )
      std::vector<BattleStageEvent *>::_Reserve(
        (std::vector<void (__cdecl*)(extension::exsound_detail::SoundBankParser::BinaryParseState &,extension::exsound_detail::SoundChannelDefinition &),std::allocator<void (__cdecl*)(extension::exsound_detail::SoundBankParser::BinaryParseState &,extension::exsound_detail::SoundChannelDefinition &)> > *)&this->m_blocks,
        (unsigned __int64)Myfirst);
    v8 = this->m_blocks._Mypair._Myval2._Mylast;
    if ( v8 )
      *v8 = v5;
  }
  else
  {
    v6 = &v9 - Myfirst;
    if ( Mylast == this->m_blocks._Mypair._Myval2._Myend )
      std::vector<BattleStageEvent *>::_Reserve(
        (std::vector<void (__cdecl*)(extension::exsound_detail::SoundBankParser::BinaryParseState &,extension::exsound_detail::SoundChannelDefinition &),std::allocator<void (__cdecl*)(extension::exsound_detail::SoundBankParser::BinaryParseState &,extension::exsound_detail::SoundChannelDefinition &)> > *)&this->m_blocks,
        (unsigned __int64)Myfirst);
    v7 = this->m_blocks._Mypair._Myval2._Mylast;
    if ( v7 )
    {
      *v7 = this->m_blocks._Mypair._Myval2._Myfirst[v6];
      ++this->m_blocks._Mypair._Myval2._Mylast;
      return;
    }
  }
  ++this->m_blocks._Mypair._Myval2._Mylast;
}

void __fastcall OGLRender::addStack(OGLRender *this, int minCapacity)
{
  __int64 m_RenderStackNo; // rax
  int v4; // edi
  int v5; // edi
  OGLModelStackData **v6; // rbp
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx

  m_RenderStackNo = this->m_RenderStackNo;
  v4 = this->m_sModelStackMax[m_RenderStackNo];
  if ( minCapacity >= v4 )
  {
    v5 = v4 + 10;
    v6 = this->m_pModelStack[m_RenderStackNo];
    if ( v5 < minCapacity )
      v5 = minCapacity;
    v7 = 8i64 * v5;
    if ( !is_mul_ok(v5, 8ui64) )
      v7 = -1i64;
    this->m_pModelStack[this->m_RenderStackNo] = (OGLModelStackData **)operator new[](v7);
    this->m_sModelStackMax[this->m_RenderStackNo] = v5;
    memset(this->m_pModelStack[this->m_RenderStackNo], 0, 8i64 * v5);
    memmove(this->m_pModelStack[this->m_RenderStackNo], v6, 8i64 * this->m_sModelStackCount[this->m_RenderStackNo]);
    if ( v6 )
      operator delete(v6, v8);
  }
}

void __fastcall OGLRender::addStack(OGLRender *this, OGLModel *pModel, float aAlpha, int aBlendMode)
{
  int v6; // ecx
  __int64 v7; // rsi
  OGLMaterial *m_pMaterial; // r12
  __int64 v9; // rax
  OGLTexture **v10; // r15
  int v11; // edi
  OGLTexture **v12; // r14
  __int128 *v13; // rsi
  OGLTexture *v14; // rbx
  struct __GLsync *m_sync; // rcx
  int m_TexID; // eax
  OGLTexture *m_ReflectionMapTexture; // rcx
  __int128 *v18; // rsi
  int v19; // edi
  OGLTexture *v20; // rbx
  struct __GLsync *v21; // rcx
  unsigned int v22; // edi
  unsigned int v23; // ebx
  OGLModelStackData *Stack; // rdx
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  unsigned int v27; // ecx
  __int128 v28; // xmm0
  float *v29; // rax
  int v30; // [rsp+20h] [rbp-98h]
  __int64 v31; // [rsp+28h] [rbp-90h]
  __int128 v32; // [rsp+30h] [rbp-88h] BYREF
  __int128 v33; // [rsp+40h] [rbp-78h] BYREF
  __int128 v34; // [rsp+50h] [rbp-68h]
  __int64 v35; // [rsp+60h] [rbp-58h]

  if ( !pModel )
    return;
  if ( !pModel->m_pFigure )
    return;
  v6 = pModel->m_ucMaterialCount - 1;
  v30 = v6;
  if ( v6 < 0 )
    return;
  v7 = 1128i64 * v6;
  v31 = v7;
  do
  {
    m_pMaterial = pModel->m_pMaterial;
    v32 = 0ui64;
    v33 = 0ui64;
    v9 = *(int *)((char *)&m_pMaterial->m_cTextureIndex + v7);
    v34 = 0ui64;
    v35 = 0i64;
    if ( (_DWORD)v9 == -1 )
      goto LABEL_26;
    v10 = pModel->m_pTexture[v9];
    if ( !*v10 )
      goto LABEL_26;
    v11 = 0;
    v12 = pModel->m_pMaterialMap[v9];
    v13 = &v33;
    do
    {
      v14 = *v12;
      if ( !*v12 )
        goto LABEL_19;
      m_sync = v14->m_sync;
      if ( m_sync )
      {
        _glewWaitSync(m_sync, 0, 0xFFFFFFFFFFFFFFFFui64);
        _glewDeleteSync(v14->m_sync);
        v14->m_sync = 0i64;
      }
      m_TexID = v14->m_TexID;
      *(_DWORD *)v13 = m_TexID;
      if ( v11 == 7 )
      {
        if ( m_TexID < 0 )
          goto LABEL_19;
        m_ReflectionMapTexture = this->m_renderTextures.m_ReflectionMapTexture;
      }
      else
      {
        if ( v11 != 9 || m_TexID < 0 )
          goto LABEL_19;
        m_ReflectionMapTexture = this->m_renderTextures.m_EnvironmentMapTexture;
      }
      if ( m_ReflectionMapTexture )
        *(_DWORD *)v13 = OGLTexture::getID(m_ReflectionMapTexture);
LABEL_19:
      ++v11;
      ++v12;
      v13 = (__int128 *)((char *)v13 + 4);
    }
    while ( v11 < 10 );
    v18 = &v32;
    v19 = 0;
    do
    {
      v20 = *v10;
      if ( !*v10 )
        break;
      v21 = v20->m_sync;
      if ( v21 )
      {
        _glewWaitSync(v21, 0, 0xFFFFFFFFFFFFFFFFui64);
        _glewDeleteSync(v20->m_sync);
        v20->m_sync = 0i64;
      }
      ++v19;
      *(_DWORD *)v18 = v20->m_TexID;
      ++v10;
      v18 = (__int128 *)((char *)v18 + 4);
    }
    while ( v19 < 4 );
    v7 = v31;
LABEL_26:
    v22 = *(unsigned int *)((char *)&m_pMaterial->m_ucEffectFlg + v7);
    v23 = *(unsigned int *)((char *)&m_pMaterial->m_uiBlendMode + v7);
    Stack = OGLRender::getStack(this);
    v25 = v32;
    v26 = v34;
    Stack->pIndex = *(unsigned int **)((char *)&m_pMaterial->m_psIndex + v7);
    Stack->pSIndex = *(unsigned __int16 **)((char *)&m_pMaterial->m_pssIndex + v7);
    v27 = *(unsigned int *)((char *)&m_pMaterial->m_usIndexCount + v7);
    *(_OWORD *)Stack->TexID = v25;
    Stack->sIndexCount = v27;
    v28 = v33;
    Stack->MatNo = v30;
    Stack->fAlpha = aAlpha;
    *(_OWORD *)Stack->MatMapID = v28;
    Stack->pVec3 = 0i64;
    *(_QWORD *)&v28 = v35;
    *(_OWORD *)&Stack->MatMapID[4] = v26;
    Stack->BlendMode = v23;
    *(_QWORD *)&Stack->MatMapID[8] = v28;
    Stack->EffectFlg = v22;
    Stack->Colors = 0i64;
    Stack->pModel = pModel;
    Stack->m_iRenderNo = *(int *)((char *)&m_pMaterial->m_iRenderNo + v7);
    Stack->work0 = *(float **)((char *)&m_pMaterial->m_shaderLightEyePosition[4].y + v7);
    Stack->work1 = *(float **)((char *)&m_pMaterial->work1 + v7);
    Stack->work2 = *(float **)((char *)&m_pMaterial->work2 + v7);
    v29 = *(float **)((char *)&m_pMaterial->work3 + v7);
    v7 -= 1128i64;
    Stack->work3 = v29;
    --v30;
    v31 = v7;
  }
  while ( v30 >= 0 );
}

void *__fastcall AgFrameAllocator<AgAllocator<1>>::allocate(
        AgFrameAllocator<AgAllocator<1> > *this,
        unsigned __int64 size,
        unsigned __int64 align)
{
  char *v5; // r9
  unsigned __int8 *v6; // r9
  unsigned __int8 *v7; // r8
  void *result; // rax

  v5 = (char *)((unsigned __int64)(this->m_frameStartOffset + 3) & 0xFFFFFFFFFFFFFFFCui64);
  if ( (unsigned __int8 *)&v5[size] > this->m_frameEndOffset )
  {
    if ( ++this->m_currentBlock >= (unsigned __int64)(this->m_blocks._Mypair._Myval2._Mylast
                                                    - this->m_blocks._Mypair._Myval2._Myfirst) )
      AgFrameAllocator<AgAllocator<1>>::_allocateBlock(this);
    v6 = &this->m_blocks._Mypair._Myval2._Myfirst[this->m_currentBlock][this->m_blockSize
                                                                      / this->m_frameCount
                                                                      * this->m_frameIndex];
    v7 = &v6[this->m_blockSize / this->m_frameCount];
    this->m_frameStartOffset = v6;
    this->m_frameEndOffset = v7;
    v5 = (char *)((unsigned __int64)(v6 + 3) & 0xFFFFFFFFFFFFFFFCui64);
  }
  result = v5;
  this->m_lastFrameStartOffset = this->m_frameStartOffset;
  this->m_frameStartOffset = (unsigned __int8 *)&v5[size];
  this->m_lastAllocation = (unsigned __int8 *)v5;
  return result;
}

void __fastcall OGLRender::begin(OGLRender *this)
{
  Framework::GLManager *v2; // rcx

  if ( dword_140A9606C != 1 )
  {
    dword_140A9606C = 1;
    glEnable(0xB71u);
  }
  glDepthFunc(0x203u);
  if ( m_DepthMask != 1 )
  {
    m_DepthMask = 1;
    glDepthMask(1u);
  }
  if ( dword_140A96054 != 1 )
  {
    dword_140A96054 = 1;
    glEnable(0xB44u);
  }
  glCullFace(0x405u);
  dword_140A96050 = 0;
  m_TexID[m_ActiveTexture] = 0;
  v2 = Framework::GLManager::glm;
  Framework::GLManager::glm->m_textureID = 0;
  while ( v2->m_bOpenGLBlocked )
    ;
  glBindTexture(0xDE1u, 0);
  this->m_RenderFlg = 0;
  this->m_CustomShaderNo2D = -1;
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

void __fastcall OGLRender::deferredDrawImage(OGLRender *this)
{
  int v2; // er8
  int v3; // ecx
  __int64 v4; // rax
  __int64 v5; // rdi
  OGLTexture *texture; // r14
  int v7; // edx
  float *vertex; // r12
  float *texCoord; // r15
  unsigned int color; // er13
  int renderType; // eax
  GLenum v12; // edx
  GLenum v13; // ecx
  unsigned int v14; // ecx
  __int64 v15; // rbx
  __int64 m_CustomShaderNo2D; // rax
  OGLShader *v17; // rdi
  struct __GLsync *m_sync; // rcx
  unsigned __int8 v19; // r8
  Framework::GLManager *v20; // rax
  int v21; // ebx
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  unsigned __int8 v25; // r8
  int UniformLocation; // eax
  AgSingleton<KOFShaderManager> *v27; // rbx
  __int64 v28; // rcx
  signed int v29; // er10
  int renderSize; // ecx
  int v31; // eax
  __int64 v32; // rcx
  int v33; // eax
  signed int v34; // ecx
  struct __GLsync *v35; // rcx
  GLuint m_TexID; // edx
  Framework::GLManager *v37; // rcx
  int v38; // [rsp+30h] [rbp-D0h]
  int count; // [rsp+34h] [rbp-CCh]
  int v40; // [rsp+38h] [rbp-C8h]
  __int64 i; // [rsp+40h] [rbp-C0h]
  OGLMatrix v42; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v43; // [rsp+90h] [rbp-70h]
  __int128 v44; // [rsp+A0h] [rbp-60h]
  __int128 v45; // [rsp+B0h] [rbp-50h]
  __int128 v46; // [rsp+C0h] [rbp-40h]
  void *indices; // [rsp+D0h] [rbp-30h]
  OGLMatrix v48; // [rsp+E0h] [rbp-20h] BYREF
  float value[4]; // [rsp+120h] [rbp+20h] BYREF
  __int128 v50; // [rsp+130h] [rbp+30h]
  __int128 v51; // [rsp+140h] [rbp+40h]
  __int128 v52; // [rsp+150h] [rbp+50h]

  memset(&v42, 0, sizeof(v42));
  OGLMatrix::multiply(&v42, &this->m_View, &this->m_Proj);
  v2 = -1;
  v3 = 0;
  v40 = -1;
  v38 = 0;
  if ( this->m_iRenderStackCount2D > 0 )
  {
    v4 = 0i64;
    for ( i = 0i64; ; ++i )
    {
      v5 = v4;
      texture = this->m_PreDrawParameter[v4].texture;
      v7 = this->m_PreDrawParameter[v4].count;
      vertex = this->m_PreDrawParameter[v4].vertex;
      texCoord = this->m_PreDrawParameter[v4].texCoord;
      color = this->m_PreDrawParameter[v4].color;
      indices = this->m_PreDrawParameter[v4].index;
      renderType = this->m_PreDrawParameter[v4].renderType;
      count = v7;
      if ( !texture )
        goto LABEL_116;
      if ( renderType != v2 )
      {
        v40 = renderType;
        switch ( renderType )
        {
          case 0:
            if ( m_DepthMask != 1 )
            {
              m_DepthMask = 1;
              glDepthMask(1u);
            }
            if ( dword_140A9605C )
            {
              dword_140A9605C = 0;
              glDisable(0xBE2u);
            }
            if ( m_Mode != 32774 )
            {
              m_Mode = 32774;
              m_ModeAlpha = 32774;
              _glewBlendEquation(0x8006u);
            }
            if ( m_Sfactor == 1 && !m_Dfactor )
              goto LABEL_63;
            v12 = 0;
            m_Sfactor = 1;
            m_Dfactor = 0;
            m_SfactorAlpha = 1;
            m_DfactorAlpha = 0;
            v13 = 1;
            goto LABEL_62;
          case 1:
            if ( m_DepthMask )
            {
              m_DepthMask = 0;
              glDepthMask(0);
            }
            if ( dword_140A9605C != 1 )
            {
              dword_140A9605C = 1;
              glEnable(0xBE2u);
            }
            if ( m_Mode == 32774 )
              goto LABEL_22;
            m_Mode = 32774;
            v14 = 32774;
            m_ModeAlpha = 32774;
            goto LABEL_21;
          case 2:
            if ( m_DepthMask )
            {
              m_DepthMask = 0;
              glDepthMask(0);
            }
            if ( dword_140A9605C != 1 )
            {
              dword_140A9605C = 1;
              glEnable(0xBE2u);
            }
            if ( m_Mode == 32779 )
              goto LABEL_22;
            m_Mode = 32779;
            v14 = 32779;
            m_ModeAlpha = 32779;
            goto LABEL_21;
          case 3:
            if ( m_DepthMask )
            {
              m_DepthMask = 0;
              glDepthMask(0);
            }
            if ( dword_140A9605C != 1 )
            {
              dword_140A9605C = 1;
              glEnable(0xBE2u);
            }
            if ( m_Mode != 32774 )
            {
              m_Mode = 32774;
              m_ModeAlpha = 32774;
              _glewBlendEquation(0x8006u);
            }
            goto LABEL_37;
          case 4:
            if ( m_DepthMask )
            {
              m_DepthMask = 0;
              glDepthMask(0);
            }
            if ( dword_140A9605C != 1 )
            {
              dword_140A9605C = 1;
              glEnable(0xBE2u);
            }
            if ( m_Mode == 32778 )
              goto LABEL_22;
            m_Mode = 32778;
            v14 = 32778;
            m_ModeAlpha = 32778;
LABEL_21:
            _glewBlendEquation(v14);
LABEL_22:
            if ( m_Sfactor == 770 && m_Dfactor == 1 )
              goto LABEL_63;
            m_Dfactor = 1;
            v12 = 1;
            m_DfactorAlpha = 1;
            break;
          case 5:
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
            if ( dword_140A9605C != 1 )
            {
              dword_140A9605C = 1;
              glEnable(0xBE2u);
            }
LABEL_37:
            if ( m_Sfactor == 770 && m_Dfactor == 771 )
              goto LABEL_63;
            m_Dfactor = 771;
            v12 = 771;
            m_DfactorAlpha = 771;
            break;
          case 6:
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
            if ( m_Sfactor == 770 && m_Dfactor == 32771 )
              goto LABEL_63;
            m_Dfactor = 32771;
            v12 = 32771;
            m_DfactorAlpha = 32771;
            break;
          default:
            goto LABEL_64;
        }
        m_SfactorAlpha = 770;
        v13 = 770;
        m_Sfactor = 770;
LABEL_62:
        glBlendFunc(v13, v12);
LABEL_63:
        v3 = v38;
      }
LABEL_64:
      v15 = 6528i64;
      if ( !texture->m_Transparent )
        v15 = 2432i64;
      if ( this->m_PreDrawParameter[v5].fogColor[3] > 0.0 )
        v15 = (unsigned int)v15 | 0x2406;
      m_CustomShaderNo2D = this->m_CustomShaderNo2D;
      LODWORD(v15) = v15 | 0x400;
      v17 = (int)m_CustomShaderNo2D < 0 ? this->m_ShaderTbl[v15] : this->m_pCustomShader2D[m_CustomShaderNo2D];
      if ( !v17 || !v17->m_Program )
        goto LABEL_116;
      m_sync = texture->m_sync;
      if ( m_sync )
      {
        _glewWaitSync(m_sync, 0, 0xFFFFFFFFFFFFFFFFui64);
        _glewDeleteSync(texture->m_sync);
        texture->m_sync = 0i64;
      }
      if ( glIsTexture(texture->m_TexID) )
        break;
      v3 = v38;
LABEL_116:
      ++v3;
      v2 = v40;
      v4 = i + 1;
      v38 = v3;
      if ( v3 >= this->m_iRenderStackCount2D )
      {
        this->m_iRenderStackCount2D = 0;
        return;
      }
    }
    KOFShaderManager::useProgramSlot((KOFShaderManager *)AgSingleton<KOFShaderManager>::ms_instance, v17->m_programSlot);
    _glewBindBuffer(0x8892u, 0);
    v20 = Framework::GLManager::glm;
    Framework::GLManager::glm->renderSize = 64;
    v20->m_vertexInfoCount = count;
    v21 = v15 & 0x2000;
    if ( v21 )
      glUniform4fvAG(v17->m_piGLUniform[3], 1, this->m_PreDrawParameter[v38].fogColor);
    *(_QWORD *)&v43 = __PAIR64__(LODWORD(v42.m[4]), LODWORD(v42.m[0]));
    *(_QWORD *)&v44 = __PAIR64__(LODWORD(v42.m[5]), LODWORD(v42.m[1]));
    *(_QWORD *)&v45 = __PAIR64__(LODWORD(v42.m[6]), LODWORD(v42.m[2]));
    *(_QWORD *)&v46 = __PAIR64__(LODWORD(v42.m[7]), LODWORD(v42.m[3]));
    *((_QWORD *)&v43 + 1) = __PAIR64__(LODWORD(v42.m[12]), LODWORD(v42.m[8]));
    *((_QWORD *)&v44 + 1) = __PAIR64__(LODWORD(v42.m[13]), LODWORD(v42.m[9]));
    *((_QWORD *)&v45 + 1) = __PAIR64__(LODWORD(v42.m[14]), LODWORD(v42.m[10]));
    *((_QWORD *)&v46 + 1) = __PAIR64__(LODWORD(v42.m[15]), LODWORD(v42.m[11]));
    *(_OWORD *)value = v43;
    v50 = v44;
    v51 = v45;
    v52 = v46;
    if ( v21 )
    {
      v22 = *(_OWORD *)&this->m_View.m[4];
      *(_OWORD *)v48.m = *(_OWORD *)this->m_View.m;
      v23 = *(_OWORD *)&this->m_View.m[8];
      *(_OWORD *)&v48.m[4] = v22;
      v24 = *(_OWORD *)&this->m_View.m[12];
      *(_OWORD *)&v48.m[8] = v23;
      *(_OWORD *)&v48.m[12] = v24;
      OGLMatrix::transpose(&v48);
      glUniformMatrix4fvAG(v17->m_piGLUniform[2], 1, v25, v48.m);
    }
    glUniformMatrix4fvAG(*v17->m_piGLUniform, 1, v19, value);
    UniformLocation = _glewGetUniformLocation(v17->m_Program, "brightness");
    _glewUniform1fv(UniformLocation, 1, &globalBrightness);
    v27 = AgSingleton<KOFShaderManager>::ms_instance;
    v28 = *(unsigned int *)AgSingleton<KOFShaderManager>::ms_instance[11
                                                                    * SLODWORD(AgSingleton<KOFShaderManager>::ms_instance[360450].__vftable)
                                                                    + 7].onSingletonInit;
    if ( (unsigned int)v28 < g_maxEnabledVertexAttribArrays )
    {
      g_pendingVertexAttribArrays |= 1 << v28;
      g_vertexAttribIndex[v28] = 0;
    }
    v29 = *(_DWORD *)v27[11 * SLODWORD(v27[360450].__vftable) + 7].onSingletonInit;
    renderSize = Framework::GLManager::glm->renderSize;
    switch ( renderSize )
    {
      case 64:
        v31 = 64;
        break;
      case 280:
        v31 = 136;
        break;
      case 208:
        v31 = 64;
        break;
      default:
        v31 = 88;
        if ( renderSize == 144 )
          v31 = 144;
        break;
    }
    if ( v29 >= 0 )
    {
      _glewVertexAttribPointer(v29, 3, 0x1406u, 0, v31, vertex);
      v27 = AgSingleton<KOFShaderManager>::ms_instance;
    }
    this->vColor[0] = (float)BYTE2(color) * 0.0038999999;
    this->vColor[1] = (float)BYTE1(color) * 0.0038999999;
    this->vColor[2] = (float)(unsigned __int8)color * 0.0038999999;
    this->vColor[3] = (float)HIBYTE(color) * 0.0038999999;
    glUniform4fvAG(v17->m_piGLUniform[1], 1, this->vColor);
    v32 = *((unsigned int *)v27[11 * SLODWORD(v27[360450].__vftable) + 7].onSingletonInit + 4);
    if ( (unsigned int)v32 < g_maxEnabledVertexAttribArrays )
    {
      g_pendingVertexAttribArrays |= 1 << v32;
      g_vertexAttribIndex[v32] = 4;
    }
    v33 = Framework::GLManager::glm->renderSize;
    v34 = *((_DWORD *)v27[11 * SLODWORD(v27[360450].__vftable) + 7].onSingletonInit + 4);
    if ( v33 != 64 )
    {
      switch ( v33 )
      {
        case 280:
          v33 = 8;
LABEL_103:
          if ( v34 >= 0 )
            _glewVertexAttribPointer(v34, 2, 0x1406u, 0, v33, texCoord);
          if ( m_ActiveTexture )
          {
            m_ActiveTexture = 0;
            _glewActiveTexture(0x84C0u);
          }
          v35 = texture->m_sync;
          if ( v35 )
          {
            _glewWaitSync(v35, 0, 0xFFFFFFFFFFFFFFFFui64);
            _glewDeleteSync(texture->m_sync);
            texture->m_sync = 0i64;
          }
          m_TexID = texture->m_TexID;
          if ( m_TexID != ::m_TexID[m_ActiveTexture] || !m_TexID )
          {
            v37 = Framework::GLManager::glm;
            ::m_TexID[m_ActiveTexture] = m_TexID;
            v37->m_textureID = m_TexID;
            while ( v37->m_bOpenGLBlocked )
              ;
            glBindTexture(0xDE1u, m_TexID);
          }
          glDrawElementsAG(this->m_PreDrawParameter[i].type, count, 0x1405u, indices);
          v3 = v38;
          goto LABEL_116;
        case 208:
          v33 = 64;
          break;
        case 144:
          v33 = 144;
          goto LABEL_103;
        default:
          v33 = 88;
          break;
      }
    }
    texCoord += 14;
    goto LABEL_103;
  }
  this->m_iRenderStackCount2D = 0;
}

void __fastcall OGLRender::drawCapture(
        OGLRender *this,
        OGLTexture *pTexture,
        MeshVertexInfo2D *pCoord,
        unsigned int color)
{
  OGLShader *v4; // r15
  Framework::GLManager *v8; // r12
  int v9; // edi
  AgFrameAllocator<AgAllocator<1> > *p_m_agDrawAllocator; // rcx
  unsigned __int64 v11; // r8
  char *v12; // rax
  unsigned __int8 v13; // r8
  char *v14; // rsi
  __int64 v15; // rcx
  __int128 v16; // xmm0
  float v17; // xmm0_4
  float v18; // xmm1_4
  int *m_piGLUniform; // rax
  int v20; // ecx
  int UniformLocation; // eax
  AgSingleton<KOFShaderManager> *v22; // rbx
  __int64 v23; // rcx
  signed int v24; // er10
  int renderSize; // ecx
  int v26; // eax
  __int64 v27; // rcx
  int v28; // eax
  signed int v29; // ecx
  struct __GLsync *m_sync; // rcx
  unsigned int m_TexID; // edx
  Framework::GLManager *v32; // rcx
  OGLMatrix v33; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v34; // [rsp+78h] [rbp-90h]
  __int128 v35; // [rsp+88h] [rbp-80h]
  __int128 v36; // [rsp+98h] [rbp-70h]
  __int128 v37; // [rsp+A8h] [rbp-60h]
  float value[4]; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v39; // [rsp+C8h] [rbp-40h]
  __int128 v40; // [rsp+D8h] [rbp-30h]
  __int128 v41; // [rsp+E8h] [rbp-20h]

  v4 = this->m_ShaderFXTbl[7999];
  if ( !v4 || !v4->m_Program )
    return;
  memset(&v33, 0, sizeof(v33));
  OGLMatrix::multiply(&v33, &this->m_View, &this->m_Proj);
  KOFShaderManager::useProgramSlot((KOFShaderManager *)AgSingleton<KOFShaderManager>::ms_instance, v4->m_programSlot);
  v8 = Framework::GLManager::glm;
  v9 = 64;
  p_m_agDrawAllocator = &Framework::GLManager::glm->m_agDrawAllocator;
  Framework::GLManager::glm->renderSize = 64;
  v12 = (char *)AgFrameAllocator<AgAllocator<1>>::allocate(p_m_agDrawAllocator, 0x100ui64, v11);
  v14 = v12;
  v15 = 2i64;
  do
  {
    v12 += 128;
    v16 = *(_OWORD *)&pCoord->m_position.x;
    pCoord += 2;
    *((_OWORD *)v12 - 8) = v16;
    *((_OWORD *)v12 - 7) = *(_OWORD *)&pCoord[-2].m_normal.y;
    *((_OWORD *)v12 - 6) = *(_OWORD *)&pCoord[-2].m_tangent.z;
    *((_OWORD *)v12 - 5) = *(_OWORD *)&pCoord[-2].m_color.z;
    *((_OWORD *)v12 - 4) = *(_OWORD *)&pCoord[-1].m_position.x;
    *((_OWORD *)v12 - 3) = *(_OWORD *)&pCoord[-1].m_normal.y;
    *((_OWORD *)v12 - 2) = *(_OWORD *)&pCoord[-1].m_tangent.z;
    *((_OWORD *)v12 - 1) = *(_OWORD *)&pCoord[-1].m_color.z;
    --v15;
  }
  while ( v15 );
  *(_QWORD *)&v34 = __PAIR64__(LODWORD(v33.m[4]), LODWORD(v33.m[0]));
  *(_QWORD *)&v35 = __PAIR64__(LODWORD(v33.m[5]), LODWORD(v33.m[1]));
  *(_QWORD *)&v36 = __PAIR64__(LODWORD(v33.m[6]), LODWORD(v33.m[2]));
  *(_QWORD *)&v37 = __PAIR64__(LODWORD(v33.m[7]), LODWORD(v33.m[3]));
  *((_QWORD *)&v34 + 1) = __PAIR64__(LODWORD(v33.m[12]), LODWORD(v33.m[8]));
  *((_QWORD *)&v35 + 1) = __PAIR64__(LODWORD(v33.m[13]), LODWORD(v33.m[9]));
  DWORD2(v36) = LODWORD(v33.m[10]);
  DWORD2(v37) = LODWORD(v33.m[11]);
  v17 = v33.m[14];
  v18 = v33.m[15];
  v8->m_vertexInfoCount = 4;
  m_piGLUniform = v4->m_piGLUniform;
  *((float *)&v36 + 3) = v17;
  *((float *)&v37 + 3) = v18;
  v20 = *m_piGLUniform;
  *(_OWORD *)value = v34;
  v39 = v35;
  v40 = v36;
  v41 = v37;
  glUniformMatrix4fvAG(v20, 1, v13, value);
  UniformLocation = _glewGetUniformLocation(v4->m_Program, "brightness");
  _glewUniform1fv(UniformLocation, 1, &globalBrightness);
  v22 = AgSingleton<KOFShaderManager>::ms_instance;
  v23 = *(unsigned int *)AgSingleton<KOFShaderManager>::ms_instance[11
                                                                  * SLODWORD(AgSingleton<KOFShaderManager>::ms_instance[360450].__vftable)
                                                                  + 7].onSingletonInit;
  if ( (unsigned int)v23 < g_maxEnabledVertexAttribArrays )
  {
    g_vertexAttribIndex[v23] = 0;
    g_pendingVertexAttribArrays |= 1 << v23;
  }
  v24 = *(_DWORD *)v22[11 * SLODWORD(v22[360450].__vftable) + 7].onSingletonInit;
  renderSize = Framework::GLManager::glm->renderSize;
  switch ( renderSize )
  {
    case 64:
      v26 = 64;
      break;
    case 280:
      v26 = 136;
      break;
    case 208:
      v26 = 64;
      break;
    default:
      v26 = 88;
      if ( renderSize == 144 )
        v26 = 144;
      break;
  }
  if ( v24 >= 0 )
  {
    _glewVertexAttribPointer(v24, 3, 0x1406u, 0, v26, v14);
    v22 = AgSingleton<KOFShaderManager>::ms_instance;
  }
  this->vColor[1] = 0.99449998;
  this->vColor[0] = 0.99449998;
  this->vColor[2] = 0.99449998;
  this->vColor[3] = 0.99449998;
  glUniform4fvAG(v4->m_piGLUniform[1], 1, this->vColor);
  v27 = *((unsigned int *)v22[11 * SLODWORD(v22[360450].__vftable) + 7].onSingletonInit + 4);
  if ( (unsigned int)v27 < g_maxEnabledVertexAttribArrays )
  {
    g_pendingVertexAttribArrays |= 1 << v27;
    g_vertexAttribIndex[v27] = 4;
  }
  v28 = Framework::GLManager::glm->renderSize;
  v29 = *((_DWORD *)v22[11 * SLODWORD(v22[360450].__vftable) + 7].onSingletonInit + 4);
  if ( v28 == 64 )
    goto LABEL_26;
  if ( v28 != 280 )
  {
    if ( v28 != 208 )
    {
      if ( v28 == 144 )
      {
        v9 = 144;
        goto LABEL_27;
      }
      v9 = 88;
    }
LABEL_26:
    v14 += 56;
    goto LABEL_27;
  }
  v9 = 8;
LABEL_27:
  if ( v29 >= 0 )
    _glewVertexAttribPointer(v29, 2, 0x1406u, 0, v9, v14);
  if ( m_ActiveTexture )
  {
    m_ActiveTexture = 0;
    _glewActiveTexture(0x84C0u);
  }
  m_sync = pTexture->m_sync;
  if ( m_sync )
  {
    _glewWaitSync(m_sync, 0, 0xFFFFFFFFFFFFFFFFui64);
    _glewDeleteSync(pTexture->m_sync);
    pTexture->m_sync = 0i64;
  }
  m_TexID = pTexture->m_TexID;
  if ( m_TexID != ::m_TexID[m_ActiveTexture] || !m_TexID )
  {
    v32 = Framework::GLManager::glm;
    ::m_TexID[m_ActiveTexture] = m_TexID;
    v32->m_textureID = m_TexID;
    while ( v32->m_bOpenGLBlocked )
      ;
    glBindTexture(0xDE1u, m_TexID);
  }
  glDrawArraysAG((unsigned int)m_sync, m_TexID, 4);
}

void __fastcall OGLRender::drawEffectIndex(
        OGLRender *this,
        BlendProjData *blendProjData,
        EffectTextureData *texture,
        EffectMeshData *pEffectMeshData)
{
  OGLShader *v7; // rbx
  Framework::GLManager *v8; // rcx
  unsigned __int8 v9; // r8
  AgSingleton<KOFShaderManager> *v10; // r8
  unsigned int v11; // er11
  __int64 v12; // rcx
  MeshVertexInfo2D **p_vertexBuffer; // rdi
  int v14; // ebx
  signed int v15; // er10
  int renderSize; // ecx
  int v17; // eax
  __int64 v18; // rcx
  MeshVertexInfo2D **v19; // r9
  int v20; // eax
  signed int v21; // ecx
  int v22; // eax
  __int64 v23; // rcx
  MeshVertexInfo2D **v24; // r9
  int v25; // eax
  signed int v26; // ecx
  int v27; // eax
  __int64 v28; // rcx
  int v29; // eax
  signed int v30; // ecx
  OGLTexture *ColorTexture1; // rbx
  struct __GLsync *m_sync; // rcx
  GLuint m_TexID; // edx
  Framework::GLManager *v34; // r8
  OGLMatrix v35; // [rsp+30h] [rbp-88h] BYREF

  v7 = this->m_pEffectShader[OGLRender::selectEffectShader(this, 1408)];
  if ( !v7 || !v7->m_Program )
    return;
  memset(&v35, 0, sizeof(v35));
  OGLMatrix::multiply(&v35, &this->m_View, &this->m_Proj);
  KOFShaderManager::useProgramSlot((KOFShaderManager *)AgSingleton<KOFShaderManager>::ms_instance, v7->m_programSlot);
  v8 = Framework::GLManager::glm;
  Framework::GLManager::glm->renderSize = 88;
  v8->m_vertexInfoCount = pEffectMeshData->renderVertexCount;
  glUniformMatrix4fvAG(v7->m_piGLUniform[1], 1, v9, v35.m);
  v10 = AgSingleton<KOFShaderManager>::ms_instance;
  v11 = g_maxEnabledVertexAttribArrays;
  v12 = *(unsigned int *)AgSingleton<KOFShaderManager>::ms_instance[11
                                                                  * SLODWORD(AgSingleton<KOFShaderManager>::ms_instance[360450].__vftable)
                                                                  + 7].onSingletonInit;
  if ( (unsigned int)v12 < g_maxEnabledVertexAttribArrays )
  {
    g_vertexAttribIndex[v12] = 0;
    g_pendingVertexAttribArrays |= 1 << v12;
  }
  p_vertexBuffer = &pEffectMeshData->vertexBuffer;
  v14 = 64;
  v15 = *(_DWORD *)v10[11 * SLODWORD(v10[360450].__vftable) + 7].onSingletonInit;
  renderSize = Framework::GLManager::glm->renderSize;
  switch ( renderSize )
  {
    case 64:
      v17 = 64;
      break;
    case 280:
      v17 = 136;
      break;
    case 208:
      v17 = 64;
      break;
    default:
      v17 = 88;
      if ( renderSize == 144 )
        v17 = 144;
      break;
  }
  if ( v15 >= 0 )
  {
    _glewVertexAttribPointer(v15, 3, 0x1406u, 0, v17, &pEffectMeshData->vertexBuffer);
    v10 = AgSingleton<KOFShaderManager>::ms_instance;
    v11 = g_maxEnabledVertexAttribArrays;
  }
  v18 = *((unsigned int *)v10[11 * SLODWORD(v10[360450].__vftable) + 7].onSingletonInit + 4);
  if ( (unsigned int)v18 < v11 )
  {
    g_vertexAttribIndex[v18] = 4;
    g_pendingVertexAttribArrays |= 1 << v18;
  }
  v19 = &pEffectMeshData->vertexBuffer;
  v20 = Framework::GLManager::glm->renderSize;
  v21 = *((_DWORD *)v10[11 * SLODWORD(v10[360450].__vftable) + 7].onSingletonInit + 4);
  switch ( v20 )
  {
    case 64:
      v22 = 64;
      break;
    case 280:
      v22 = 8;
      goto LABEL_27;
    case 208:
      v22 = 64;
      break;
    case 144:
      v22 = 144;
      goto LABEL_27;
    default:
      v22 = 88;
      break;
  }
  v19 = (MeshVertexInfo2D **)&pEffectMeshData->worldMat.m[10];
LABEL_27:
  if ( v21 >= 0 )
  {
    _glewVertexAttribPointer(v21, 2, 0x1406u, 0, v22, v19);
    v10 = AgSingleton<KOFShaderManager>::ms_instance;
    v11 = g_maxEnabledVertexAttribArrays;
  }
  v23 = *((unsigned int *)v10[11 * SLODWORD(v10[360450].__vftable) + 7].onSingletonInit + 3);
  if ( (unsigned int)v23 < v11 )
  {
    g_vertexAttribIndex[v23] = 3;
    g_pendingVertexAttribArrays |= 1 << v23;
  }
  v24 = &pEffectMeshData->vertexBuffer;
  v25 = Framework::GLManager::glm->renderSize;
  v26 = *((_DWORD *)v10[11 * SLODWORD(v10[360450].__vftable) + 7].onSingletonInit + 3);
  switch ( v25 )
  {
    case 64:
      v27 = 64;
LABEL_40:
      v24 = (MeshVertexInfo2D **)&pEffectMeshData->worldMat.m[6];
      break;
    case 280:
      v27 = 16;
      break;
    case 208:
      v27 = 64;
      goto LABEL_40;
    case 144:
      v27 = 144;
      break;
    default:
      v27 = 88;
      goto LABEL_40;
  }
  if ( v26 >= 0 )
  {
    _glewVertexAttribPointer(v26, 4, 0x1406u, 0, v27, v24);
    v10 = AgSingleton<KOFShaderManager>::ms_instance;
    v11 = g_maxEnabledVertexAttribArrays;
  }
  v28 = *((unsigned int *)v10[11 * SLODWORD(v10[360450].__vftable) + 7].onSingletonInit + 5);
  if ( (unsigned int)v28 < v11 )
  {
    g_pendingVertexAttribArrays |= 1 << v28;
    g_vertexAttribIndex[v28] = 5;
  }
  v29 = Framework::GLManager::glm->renderSize;
  v30 = *((_DWORD *)v10[11 * SLODWORD(v10[360450].__vftable) + 7].onSingletonInit + 5);
  if ( v29 != 64 )
  {
    if ( v29 == 280 )
    {
      v14 = 136;
    }
    else if ( v29 != 208 )
    {
      if ( v29 == 144 )
      {
        v14 = 144;
      }
      else
      {
        v14 = 88;
        p_vertexBuffer = (MeshVertexInfo2D **)&pEffectMeshData->worldMat.m[12];
      }
    }
  }
  if ( v30 >= 0 )
    _glewVertexAttribPointer(v30, 2, 0x1406u, 0, v14, p_vertexBuffer);
  if ( m_ActiveTexture )
  {
    m_ActiveTexture = 0;
    _glewActiveTexture(0x84C0u);
  }
  ColorTexture1 = texture->ColorTexture1;
  m_sync = texture->ColorTexture1->m_sync;
  if ( m_sync )
  {
    _glewWaitSync(m_sync, 0, 0xFFFFFFFFFFFFFFFFui64);
    _glewDeleteSync(ColorTexture1->m_sync);
    ColorTexture1->m_sync = 0i64;
  }
  m_TexID = ColorTexture1->m_TexID;
  if ( m_TexID != ::m_TexID[m_ActiveTexture] || !m_TexID )
  {
    v34 = Framework::GLManager::glm;
    ::m_TexID[m_ActiveTexture] = m_TexID;
    v34->m_textureID = m_TexID;
    while ( v34->m_bOpenGLBlocked )
      ;
    glBindTexture(0xDE1u, m_TexID);
  }
  glDrawElementsAG(pEffectMeshData->primitiveType, pEffectMeshData->renderIndexCount, 0x1405u, pEffectMeshData->index);
}

void __fastcall OGLRender::drawEffectIndexInstancesUVAnime(
        OGLRender *this,
        BlendProjData *blendProjData,
        EffectTextureData *texture,
        EffectMeshData *pEffectMeshData,
        EffectConstantData *pEffectConstData)
{
  int v9; // edi
  OGLShader *v10; // rax
  Framework::GLManager *v11; // rcx
  OGLRender *v12; // rcx
  int particleType; // eax
  OGLRender *v14; // rcx
  unsigned int v15; // er8

  v9 = pEffectConstData->renderOpt | 0x20000;
  v10 = this->m_pEffectShader[OGLRender::selectEffectShader(this, v9)];
  if ( !v10 || !v10->m_Program )
    return;
  KOFShaderManager::useProgramSlot((KOFShaderManager *)AgSingleton<KOFShaderManager>::ms_instance, v10->m_programSlot);
  v11 = Framework::GLManager::glm;
  Framework::GLManager::glm->m_vertexInfoCount = pEffectMeshData->renderVertexCount;
  v11->m_instanceCount = pEffectMeshData->instanceNum;
  OGLRender::setEffectConstant(this, blendProjData, pEffectConstData, v9);
  particleType = pEffectConstData->particleType;
  if ( particleType < 0 )
    goto LABEL_11;
  if ( particleType > 4 )
  {
    if ( particleType == 7 )
    {
      if ( !pEffectMeshData->index )
        return;
      goto LABEL_15;
    }
LABEL_11:
    if ( pEffectMeshData->instancingBuffer && pEffectMeshData->index )
    {
      OGLRender::setEffectAttribArray(v12, pEffectMeshData);
      goto LABEL_14;
    }
    return;
  }
  if ( pEffectMeshData->instancingBuffer && pEffectMeshData->index )
  {
    OGLRender::setEffectAttribArrayFigure(v12, pEffectMeshData);
LABEL_14:
    OGLRender::setEffectAttribArrayInstancing(v14, pEffectMeshData);
LABEL_15:
    OGLRender::setEffectBindTextrue(v12, texture, v9);
    glDrawElementsInstancedAG(
      pEffectMeshData->primitiveType,
      pEffectMeshData->renderIndexCount,
      v15,
      pEffectMeshData->index,
      pEffectMeshData->instanceNum);
  }
}

void __fastcall OGLRender::drawImage(
        OGLRender *this,
        OGLTexture *texture,
        float *vertex,
        float *texCoord,
        unsigned int color,
        unsigned int type)
{
  int v6; // edi
  unsigned int m_RenderFlg; // eax
  int v11; // edi
  __int64 m_CustomShaderNo2D; // rax
  OGLShader *v13; // r15
  Framework::GLManager *v14; // rcx
  int v15; // er12
  unsigned __int64 v16; // r8
  float *v17; // rax
  float *v18; // r14
  char *v19; // rcx
  float *v20; // rdx
  __int64 v21; // r8
  int v22; // xmm0_4
  __m128 v23; // xmm1
  int v24; // eax
  KOFShaderManager *v25; // rsi
  __int128 v26; // xmm6
  __int128 v27; // xmm7
  __int128 v28; // xmm8
  __int128 v29; // xmm9
  __m128 v30; // xmm2
  __m128 v31; // xmm3
  __m128 v32; // xmm4
  __int64 v33; // rax
  __m128 v34; // xmm5
  __int128 v35; // xmm10
  __int64 v36; // rcx
  AgSingleton<KOFShaderManager>_vtbl *v37; // rax
  __int128 v38; // xmm11
  __int128 v39; // xmm12
  const void *v40; // rcx
  __int128 v41; // xmm13
  __int128 *v42; // rax
  __int64 m_currentProgramSlot; // rdx
  __int128 *v44; // rax
  int UniformLocation; // eax
  __int64 v46; // rax
  __int64 v47; // r9
  int v48; // er14
  unsigned int v49; // edx
  struct __GLsync *m_sync; // rcx
  AgSingleton<KOFShaderManager> *v51; // r13
  __int64 v52; // rcx
  signed int v53; // er10
  int renderSize; // ecx
  int v55; // eax
  float *vColor; // r8
  __int64 v57; // rcx
  int v58; // eax
  signed int v59; // ecx
  __int64 v60; // rdi
  Framework::GLManager *v61; // rcx
  __int64 v62; // rax
  Framework::GLManager *v63; // rcx
  __int64 v64; // rax
  Framework::GLManager *v65; // rcx
  __int64 v66; // rax
  Framework::GLManager *v67; // rdx
  __int64 v68; // rax
  Framework::GLManager *v69; // rdx
  int locationa; // [rsp+38h] [rbp-C8h]
  int locationb; // [rsp+38h] [rbp-C8h]
  Framework::GLManager *v73; // [rsp+40h] [rbp-C0h]
  __int64 v74; // [rsp+40h] [rbp-C0h]
  void **v75; // [rsp+40h] [rbp-C0h]
  AgSingleton<KOFShaderManager>_vtbl *v76; // [rsp+48h] [rbp-B8h]
  __int64 index; // [rsp+48h] [rbp-B8h]
  OGLMatrix v78; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v79; // [rsp+A0h] [rbp-60h]
  __int128 v80; // [rsp+B0h] [rbp-50h]
  __int128 v81; // [rsp+C0h] [rbp-40h]
  __int128 v82; // [rsp+D0h] [rbp-30h]
  __int128 v83; // [rsp+E0h] [rbp-20h]
  __int128 v84; // [rsp+F0h] [rbp-10h]
  __int128 v85; // [rsp+100h] [rbp+0h]
  __int128 v86; // [rsp+110h] [rbp+10h]
  OGLTexture *v87; // [rsp+120h] [rbp+20h]
  __int128 Buf2[4]; // [rsp+130h] [rbp+30h] BYREF
  __int128 v89[4]; // [rsp+170h] [rbp+70h] BYREF

  v6 = 2432;
  if ( texture->m_Transparent )
    v6 = 6528;
  v87 = texture;
  if ( (_BYTE)dword_140A96048 )
    v6 |= 0x2406u;
  m_RenderFlg = this->m_RenderFlg;
  v11 = v6 | 0x400;
  if ( (m_RenderFlg & 8) != 0 )
  {
    v11 |= 0xEu;
  }
  else if ( (m_RenderFlg & 0x10) != 0 )
  {
    v11 |= 0xFu;
  }
  m_CustomShaderNo2D = this->m_CustomShaderNo2D;
  if ( (int)m_CustomShaderNo2D < 0 )
    v13 = this->m_ShaderTbl[v11];
  else
    v13 = this->m_pCustomShader2D[m_CustomShaderNo2D];
  if ( v13 && v13->m_Program )
  {
    memset(&v78, 0, sizeof(v78));
    OGLMatrix::multiply(&v78, &this->m_View, &this->m_Proj);
    KOFShaderManager::useProgramSlot((KOFShaderManager *)AgSingleton<KOFShaderManager>::ms_instance, v13->m_programSlot);
    v14 = Framework::GLManager::glm;
    v15 = 64;
    v73 = Framework::GLManager::glm;
    Framework::GLManager::glm->renderSize = 64;
    v17 = (float *)AgFrameAllocator<AgAllocator<1>>::allocate(&v14->m_agDrawAllocator, (int)(type << 6), v16);
    v18 = v17;
    if ( type )
    {
      v19 = (char *)(v17 + 14);
      v20 = vertex + 2;
      v21 = type;
      do
      {
        v22 = *(_DWORD *)v20;
        v19 += 64;
        v23 = (__m128)*((unsigned int *)v20 - 1);
        v20 += 3;
        texCoord += 2;
        *((_QWORD *)v19 - 15) = _mm_unpacklo_ps((__m128)*((unsigned int *)v20 - 5), v23).m128_u64[0];
        *((_DWORD *)v19 - 28) = v22;
        *((_OWORD *)v19 - 5) = _xmm;
        *((_QWORD *)v19 - 8) = _mm_unpacklo_ps(
                                 (__m128)*((unsigned int *)texCoord - 2),
                                 (__m128)*((unsigned int *)texCoord - 1)).m128_u64[0];
        --v21;
      }
      while ( v21 );
    }
    v73->m_vertexInfoCount = type;
    v24 = v11 & 0x2000;
    if ( (v11 & 0x2000) != 0 )
    {
      glUniform4fvAG(v13->m_piGLUniform[3], 1, this->m_GroundFog.m_Color);
      v24 = v11 & 0x2000;
    }
    v25 = (KOFShaderManager *)AgSingleton<KOFShaderManager>::ms_instance;
    *(_QWORD *)&v79 = __PAIR64__(LODWORD(v78.m[4]), LODWORD(v78.m[0]));
    *(_QWORD *)&v80 = __PAIR64__(LODWORD(v78.m[5]), LODWORD(v78.m[1]));
    *(_QWORD *)&v81 = __PAIR64__(LODWORD(v78.m[6]), LODWORD(v78.m[2]));
    *(_QWORD *)&v82 = __PAIR64__(LODWORD(v78.m[7]), LODWORD(v78.m[3]));
    *((_QWORD *)&v79 + 1) = __PAIR64__(LODWORD(v78.m[12]), LODWORD(v78.m[8]));
    *((_QWORD *)&v80 + 1) = __PAIR64__(LODWORD(v78.m[13]), LODWORD(v78.m[9]));
    *((_QWORD *)&v81 + 1) = __PAIR64__(LODWORD(v78.m[14]), LODWORD(v78.m[10]));
    *((_QWORD *)&v82 + 1) = __PAIR64__(LODWORD(v78.m[15]), LODWORD(v78.m[11]));
    v26 = v79;
    v27 = v80;
    v28 = v81;
    v29 = v82;
    v89[2] = v81;
    v89[3] = v82;
    v89[0] = v79;
    v89[1] = v80;
    if ( v24 )
    {
      v30 = *(__m128 *)this->m_View.m;
      v31 = *(__m128 *)&this->m_View.m[4];
      v32 = *(__m128 *)&this->m_View.m[8];
      v33 = SLODWORD(AgSingleton<KOFShaderManager>::ms_instance[360450].__vftable);
      v34 = *(__m128 *)&this->m_View.m[12];
      locationa = v13->m_piGLUniform[2];
      LODWORD(v84) = _mm_shuffle_ps(v30, v30, 85).m128_u32[0];
      LODWORD(v85) = _mm_shuffle_ps(v30, v30, 170).m128_u32[0];
      DWORD1(v84) = _mm_shuffle_ps(v31, v31, 85).m128_u32[0];
      DWORD1(v85) = _mm_shuffle_ps(v31, v31, 170).m128_u32[0];
      DWORD2(v84) = _mm_shuffle_ps(v32, v32, 85).m128_u32[0];
      DWORD2(v85) = _mm_shuffle_ps(v32, v32, 170).m128_u32[0];
      *(_QWORD *)&v83 = __PAIR64__(v31.m128_u32[0], v30.m128_u32[0]);
      *((_QWORD *)&v83 + 1) = __PAIR64__(v34.m128_u32[0], v32.m128_u32[0]);
      v35 = v83;
      v36 = *((int *)&AgSingleton<KOFShaderManager>::ms_instance[11 * v33 + 11].~AgSingleton<KOFShaderManager>
            + 4 * locationa);
      v37 = AgSingleton<KOFShaderManager>::ms_instance[SHIDWORD(AgSingleton<KOFShaderManager>::ms_instance[11 * v33 + 5].__vftable)
                                                     + 494188].__vftable;
      LODWORD(v86) = _mm_shuffle_ps(v30, v30, 255).m128_u32[0];
      DWORD1(v86) = _mm_shuffle_ps(v31, v31, 255).m128_u32[0];
      DWORD2(v86) = _mm_shuffle_ps(v32, v32, 255).m128_u32[0];
      HIDWORD(v84) = _mm_shuffle_ps(v34, v34, 85).m128_u32[0];
      v38 = v84;
      HIDWORD(v85) = _mm_shuffle_ps(v34, v34, 170).m128_u32[0];
      v39 = v85;
      HIDWORD(v86) = _mm_shuffle_ps(v34, v34, 255).m128_u32[0];
      v74 = v36;
      v40 = (const void *)*((_QWORD *)&v37->~AgSingleton<KOFShaderManager> + v36);
      v41 = v86;
      Buf2[0] = v83;
      Buf2[1] = v84;
      Buf2[2] = v85;
      Buf2[3] = v86;
      v76 = v37;
      if ( memcmp(v40, Buf2, 0x40ui64) )
      {
        v42 = (__int128 *)*((_QWORD *)&v76->~AgSingleton<KOFShaderManager> + v74);
        *v42 = v35;
        v42[1] = v38;
        v42[2] = v39;
        v42[3] = v41;
        KOFShaderManager::setUniformWriteMask(v25, locationa);
      }
    }
    m_currentProgramSlot = v25->m_currentProgramSlot;
    locationb = *v13->m_piGLUniform;
    index = v25->m_program[m_currentProgramSlot].m_uniformAttrib[locationb].index;
    v75 = v25->m_shaderUniformPtr[v25->m_program[m_currentProgramSlot].m_linkID];
    if ( memcmp(v75[index], v89, 0x40ui64) )
    {
      v44 = (__int128 *)v75[index];
      *v44 = v26;
      v44[1] = v27;
      v44[2] = v28;
      v44[3] = v29;
      KOFShaderManager::setUniformWriteMask(v25, locationb);
    }
    UniformLocation = _glewGetUniformLocation(v13->m_Program, "brightness");
    _glewUniform1fv(UniformLocation, 1, &globalBrightness);
    v46 = this->m_CustomShaderNo2D;
    if ( (int)v46 >= 0 )
    {
      v47 = this->m_CustomShaderNo2D;
      if ( this->m_pRenderFunc2D[v46] )
      {
        this->m_ParameterWork.vertex = v18;
        this->m_ParameterWork.texCoord = v18;
        v48 = type;
        this->m_ParameterWork.index = 0i64;
        this->m_ParameterWork.count = type;
        this->m_ParameterWork.texture = texture;
        this->m_ParameterWork.color = color;
        this->m_ParameterWork.type = 5;
        this->m_pRenderFunc2D[v47](this, v13, v11);
$DRAW_IMAGE_END_0:
        glDrawArraysAG((unsigned int)m_sync, v49, v48);
        if ( (this->m_RenderFlg & 0x38) != 0 )
        {
          v62 = m_ActiveTexture;
          if ( m_ActiveTexture != 3 )
          {
            m_ActiveTexture = 3;
            _glewActiveTexture(0x84C3u);
            v62 = m_ActiveTexture;
          }
          v63 = Framework::GLManager::glm;
          m_TexID[v62] = 0;
          v63->m_textureID = 0;
          while ( v63->m_bOpenGLBlocked )
            ;
          glBindTexture(0xDE1u, 0);
          v64 = m_ActiveTexture;
          if ( m_ActiveTexture != 2 )
          {
            m_ActiveTexture = 2;
            _glewActiveTexture(0x84C2u);
            v64 = m_ActiveTexture;
          }
          v65 = Framework::GLManager::glm;
          m_TexID[v64] = 0;
          v65->m_textureID = 0;
          while ( v65->m_bOpenGLBlocked )
            ;
          glBindTexture(0xDE1u, 0);
          v66 = m_ActiveTexture;
          if ( m_ActiveTexture != 1 )
          {
            m_ActiveTexture = 1;
            _glewActiveTexture(0x84C1u);
            v66 = m_ActiveTexture;
          }
          v67 = Framework::GLManager::glm;
          m_TexID[v66] = 0;
          v67->m_textureID = 0;
          while ( v67->m_bOpenGLBlocked )
            ;
          glBindTexture(0xDE1u, 0);
          v68 = m_ActiveTexture;
          if ( m_ActiveTexture )
          {
            m_ActiveTexture = 0;
            _glewActiveTexture(0x84C0u);
            v68 = m_ActiveTexture;
          }
          v69 = Framework::GLManager::glm;
          m_TexID[v68] = 0;
          v69->m_textureID = 0;
          while ( v69->m_bOpenGLBlocked )
            ;
          glBindTexture(0xDE1u, 0);
        }
        return;
      }
    }
    v51 = AgSingleton<KOFShaderManager>::ms_instance;
    v52 = *(unsigned int *)AgSingleton<KOFShaderManager>::ms_instance[11
                                                                    * SLODWORD(AgSingleton<KOFShaderManager>::ms_instance[360450].__vftable)
                                                                    + 7].onSingletonInit;
    if ( (unsigned int)v52 < g_maxEnabledVertexAttribArrays )
    {
      g_vertexAttribIndex[v52] = 0;
      g_pendingVertexAttribArrays |= 1 << v52;
    }
    v53 = *(_DWORD *)v51[11 * SLODWORD(v51[360450].__vftable) + 7].onSingletonInit;
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
      _glewVertexAttribPointer(v53, 3, 0x1406u, 0, v55, v18);
      v51 = AgSingleton<KOFShaderManager>::ms_instance;
    }
    vColor = this->vColor;
    if ( (v11 & 0x400) != 0 )
    {
      *vColor = (float)BYTE2(color) * 0.0038999999;
      this->vColor[1] = (float)BYTE1(color) * 0.0038999999;
      this->vColor[2] = (float)(unsigned __int8)color * 0.0038999999;
      this->vColor[3] = (float)HIBYTE(color) * 0.0038999999;
    }
    else
    {
      *vColor = 1.0;
      this->vColor[1] = 1.0;
      this->vColor[2] = 1.0;
      this->vColor[3] = 1.0;
    }
    glUniform4fvAG(v13->m_piGLUniform[1], 1, vColor);
    v57 = *((unsigned int *)v51[11 * SLODWORD(v51[360450].__vftable) + 7].onSingletonInit + 4);
    if ( (unsigned int)v57 < g_maxEnabledVertexAttribArrays )
    {
      g_vertexAttribIndex[v57] = 4;
      g_pendingVertexAttribArrays |= 1 << v57;
    }
    v58 = Framework::GLManager::glm->renderSize;
    v59 = *((_DWORD *)v51[11 * SLODWORD(v51[360450].__vftable) + 7].onSingletonInit + 4);
    if ( v58 != 64 )
    {
      if ( v58 == 280 )
      {
        v15 = 8;
LABEL_52:
        if ( v59 >= 0 )
          _glewVertexAttribPointer(v59, 2, 0x1406u, 0, v15, v18);
        if ( m_ActiveTexture )
        {
          m_ActiveTexture = 0;
          _glewActiveTexture(0x84C0u);
        }
        v60 = (__int64)v87;
        m_sync = v87->m_sync;
        if ( m_sync )
        {
          _glewWaitSync(m_sync, 0, 0xFFFFFFFFFFFFFFFFui64);
          _glewDeleteSync(*(struct __GLsync **)(v60 + 72));
          *(_QWORD *)(v60 + 72) = 0i64;
        }
        v49 = *(_DWORD *)(v60 + 16);
        if ( v49 != m_TexID[m_ActiveTexture] || !v49 )
        {
          v61 = Framework::GLManager::glm;
          m_TexID[m_ActiveTexture] = v49;
          v61->m_textureID = v49;
          while ( v61->m_bOpenGLBlocked )
            ;
          glBindTexture(0xDE1u, v49);
        }
        v48 = type;
        goto $DRAW_IMAGE_END_0;
      }
      if ( v58 != 208 )
      {
        if ( v58 == 144 )
        {
          v15 = 144;
          goto LABEL_52;
        }
        v15 = 88;
      }
    }
    v18 += 14;
    goto LABEL_52;
  }
}

void __fastcall OGLRender::drawImage(
        OGLRender *this,
        OGLTexture *texture,
        float *vertex,
        float *texCoord,
        unsigned int color,
        unsigned int *index,
        unsigned int type,
        int vertexCount,
        int count)
{
  unsigned int v12; // eax
  __int64 v13; // rdi
  unsigned int m_RenderFlg; // eax
  __int64 m_CustomShaderNo2D; // rax
  OGLShader *v16; // r12
  Framework::GLManager *v17; // rcx
  int v18; // er15
  unsigned __int64 v19; // r8
  float *v20; // r14
  unsigned __int64 v21; // r8
  unsigned int *v22; // rax
  float *v23; // rcx
  int *v24; // r8
  __int64 v25; // r9
  int v26; // xmm0_4
  __m128 v27; // xmm1
  int v28; // eax
  KOFShaderManager *v29; // rsi
  __int128 v30; // xmm6
  __int128 v31; // xmm7
  __int128 v32; // xmm8
  __int128 v33; // xmm9
  __m128 v34; // xmm2
  __m128 v35; // xmm3
  __m128 v36; // xmm4
  __int64 v37; // rax
  __m128 v38; // xmm5
  __int128 v39; // xmm10
  void *v40; // rcx
  AgSingleton<KOFShaderManager>_vtbl *v41; // rax
  __int128 v42; // xmm11
  __int128 v43; // xmm12
  const void *v44; // rcx
  __int128 v45; // xmm13
  __int128 *v46; // rax
  __int64 m_currentProgramSlot; // rdx
  __int128 *v48; // rax
  int UniformLocation; // eax
  __int64 v50; // rax
  __int64 v51; // r9
  unsigned int *v52; // rsi
  AgSingleton<KOFShaderManager> *v53; // rdi
  __int64 v54; // rcx
  signed int v55; // er10
  int renderSize; // ecx
  int v57; // eax
  __int64 v58; // rcx
  int v59; // eax
  signed int v60; // ecx
  struct __GLsync *m_sync; // rcx
  unsigned int m_TexID; // edx
  Framework::GLManager *v63; // r8
  __int64 v64; // rax
  Framework::GLManager *v65; // rcx
  __int64 v66; // rax
  Framework::GLManager *v67; // rcx
  __int64 v68; // rax
  Framework::GLManager *v69; // rdx
  __int64 v70; // rax
  Framework::GLManager *v71; // rdx
  int location; // [rsp+30h] [rbp-D0h]
  int locationa; // [rsp+30h] [rbp-D0h]
  Framework::GLManager *v74; // [rsp+38h] [rbp-C8h]
  AgSingleton<KOFShaderManager>_vtbl *v75; // [rsp+38h] [rbp-C8h]
  void **v76; // [rsp+38h] [rbp-C8h]
  void *Src; // [rsp+40h] [rbp-C0h]
  void *Srca; // [rsp+40h] [rbp-C0h]
  unsigned int *indices; // [rsp+48h] [rbp-B8h]
  OGLMatrix v80; // [rsp+50h] [rbp-B0h] BYREF
  float *v81; // [rsp+90h] [rbp-70h]
  int v82; // [rsp+98h] [rbp-68h]
  __int128 v83; // [rsp+A0h] [rbp-60h]
  __int128 v84; // [rsp+B0h] [rbp-50h]
  __int128 v85; // [rsp+C0h] [rbp-40h]
  __int128 v86; // [rsp+D0h] [rbp-30h]
  __int128 v87; // [rsp+E0h] [rbp-20h]
  __int128 v88; // [rsp+F0h] [rbp-10h]
  __int128 v89; // [rsp+100h] [rbp+0h]
  __int128 v90; // [rsp+110h] [rbp+10h]
  __int128 Buf2[4]; // [rsp+120h] [rbp+20h] BYREF
  __int128 v92[4]; // [rsp+160h] [rbp+60h] BYREF

  v12 = 6528;
  if ( !texture->m_Transparent )
    v12 = 2432;
  v81 = vertex;
  v13 = v12 | 0x2406;
  if ( !(_BYTE)dword_140A96048 )
    v13 = v12;
  m_RenderFlg = this->m_RenderFlg;
  LODWORD(v13) = v13 | 0x400;
  if ( (m_RenderFlg & 8) != 0 )
  {
    v13 = (unsigned int)v13 | 0xE;
  }
  else if ( (m_RenderFlg & 0x10) != 0 )
  {
    v13 = (unsigned int)v13 | 0xF;
  }
  m_CustomShaderNo2D = this->m_CustomShaderNo2D;
  if ( (int)m_CustomShaderNo2D < 0 )
    v16 = this->m_ShaderTbl[v13];
  else
    v16 = this->m_pCustomShader2D[m_CustomShaderNo2D];
  if ( v16 && v16->m_Program )
  {
    memset(&v80, 0, sizeof(v80));
    OGLMatrix::multiply(&v80, &this->m_View, &this->m_Proj);
    KOFShaderManager::useProgramSlot((KOFShaderManager *)AgSingleton<KOFShaderManager>::ms_instance, v16->m_programSlot);
    _glewBindBuffer(0x8892u, 0);
    v17 = Framework::GLManager::glm;
    v18 = 64;
    v74 = Framework::GLManager::glm;
    Framework::GLManager::glm->renderSize = 64;
    v20 = (float *)AgFrameAllocator<AgAllocator<1>>::allocate(&v17->m_agDrawAllocator, vertexCount << 6, v19);
    v22 = (unsigned int *)AgFrameAllocator<AgAllocator<1>>::allocate(
                            &Framework::GLManager::glm->m_agDrawAllocator,
                            4 * count,
                            v21);
    indices = v22;
    if ( vertexCount )
    {
      v23 = v20 + 14;
      v24 = (int *)(v81 + 2);
      v25 = (unsigned int)vertexCount;
      do
      {
        v26 = *v24;
        v23 += 16;
        v27 = (__m128)(unsigned int)*(v24 - 1);
        v24 += 3;
        v82 = v26;
        texCoord += 2;
        *((_QWORD *)v23 - 15) = _mm_unpacklo_ps((__m128)(unsigned int)*(v24 - 5), v27).m128_u64[0];
        *((_DWORD *)v23 - 28) = v26;
        *((_OWORD *)v23 - 5) = _xmm;
        *((_QWORD *)v23 - 8) = _mm_unpacklo_ps(
                                 (__m128)*((unsigned int *)texCoord - 2),
                                 (__m128)*((unsigned int *)texCoord - 1)).m128_u64[0];
        --v25;
      }
      while ( v25 );
    }
    v74->m_vertexInfoCount = count;
    memmove(v22, index, 4i64 * count);
    v28 = v13 & 0x2000;
    if ( (v13 & 0x2000) != 0 )
    {
      glUniform4fvAG(v16->m_piGLUniform[3], 1, this->m_GroundFog.m_Color);
      v28 = v13 & 0x2000;
    }
    v29 = (KOFShaderManager *)AgSingleton<KOFShaderManager>::ms_instance;
    *(_QWORD *)&v83 = __PAIR64__(LODWORD(v80.m[4]), LODWORD(v80.m[0]));
    *(_QWORD *)&v84 = __PAIR64__(LODWORD(v80.m[5]), LODWORD(v80.m[1]));
    *(_QWORD *)&v85 = __PAIR64__(LODWORD(v80.m[6]), LODWORD(v80.m[2]));
    *(_QWORD *)&v86 = __PAIR64__(LODWORD(v80.m[7]), LODWORD(v80.m[3]));
    *((_QWORD *)&v83 + 1) = __PAIR64__(LODWORD(v80.m[12]), LODWORD(v80.m[8]));
    *((_QWORD *)&v84 + 1) = __PAIR64__(LODWORD(v80.m[13]), LODWORD(v80.m[9]));
    *((_QWORD *)&v85 + 1) = __PAIR64__(LODWORD(v80.m[14]), LODWORD(v80.m[10]));
    *((_QWORD *)&v86 + 1) = __PAIR64__(LODWORD(v80.m[15]), LODWORD(v80.m[11]));
    v30 = v83;
    v31 = v84;
    v32 = v85;
    v33 = v86;
    v92[2] = v85;
    v92[3] = v86;
    v92[0] = v83;
    v92[1] = v84;
    if ( v28 )
    {
      v34 = *(__m128 *)this->m_View.m;
      v35 = *(__m128 *)&this->m_View.m[4];
      v36 = *(__m128 *)&this->m_View.m[8];
      v37 = SLODWORD(AgSingleton<KOFShaderManager>::ms_instance[360450].__vftable);
      v38 = *(__m128 *)&this->m_View.m[12];
      location = v16->m_piGLUniform[2];
      LODWORD(v88) = _mm_shuffle_ps(v34, v34, 85).m128_u32[0];
      LODWORD(v89) = _mm_shuffle_ps(v34, v34, 170).m128_u32[0];
      DWORD1(v88) = _mm_shuffle_ps(v35, v35, 85).m128_u32[0];
      DWORD1(v89) = _mm_shuffle_ps(v35, v35, 170).m128_u32[0];
      DWORD2(v88) = _mm_shuffle_ps(v36, v36, 85).m128_u32[0];
      DWORD2(v89) = _mm_shuffle_ps(v36, v36, 170).m128_u32[0];
      *(_QWORD *)&v87 = __PAIR64__(v35.m128_u32[0], v34.m128_u32[0]);
      *((_QWORD *)&v87 + 1) = __PAIR64__(v38.m128_u32[0], v36.m128_u32[0]);
      v39 = v87;
      v40 = (void *)*((int *)&AgSingleton<KOFShaderManager>::ms_instance[11 * v37 + 11].~AgSingleton<KOFShaderManager>
                    + 4 * location);
      v41 = AgSingleton<KOFShaderManager>::ms_instance[SHIDWORD(AgSingleton<KOFShaderManager>::ms_instance[11 * v37 + 5].__vftable)
                                                     + 494188].__vftable;
      LODWORD(v90) = _mm_shuffle_ps(v34, v34, 255).m128_u32[0];
      DWORD1(v90) = _mm_shuffle_ps(v35, v35, 255).m128_u32[0];
      DWORD2(v90) = _mm_shuffle_ps(v36, v36, 255).m128_u32[0];
      HIDWORD(v88) = _mm_shuffle_ps(v38, v38, 85).m128_u32[0];
      v42 = v88;
      HIDWORD(v89) = _mm_shuffle_ps(v38, v38, 170).m128_u32[0];
      v43 = v89;
      HIDWORD(v90) = _mm_shuffle_ps(v38, v38, 255).m128_u32[0];
      Src = v40;
      v44 = (const void *)*((_QWORD *)&v41->~AgSingleton<KOFShaderManager> + (_QWORD)v40);
      v45 = v90;
      Buf2[0] = v87;
      Buf2[1] = v88;
      Buf2[2] = v89;
      Buf2[3] = v90;
      v75 = v41;
      if ( memcmp(v44, Buf2, 0x40ui64) )
      {
        v46 = (__int128 *)*((_QWORD *)&v75->~AgSingleton<KOFShaderManager> + (_QWORD)Src);
        *v46 = v39;
        v46[1] = v42;
        v46[2] = v43;
        v46[3] = v45;
        KOFShaderManager::setUniformWriteMask(v29, location);
      }
    }
    m_currentProgramSlot = v29->m_currentProgramSlot;
    locationa = *v16->m_piGLUniform;
    Srca = (void *)v29->m_program[m_currentProgramSlot].m_uniformAttrib[locationa].index;
    v76 = v29->m_shaderUniformPtr[v29->m_program[m_currentProgramSlot].m_linkID];
    if ( memcmp(v76[(_QWORD)Srca], v92, 0x40ui64) )
    {
      v48 = (__int128 *)v76[(_QWORD)Srca];
      *v48 = v30;
      v48[1] = v31;
      v48[2] = v32;
      v48[3] = v33;
      KOFShaderManager::setUniformWriteMask(v29, locationa);
    }
    UniformLocation = _glewGetUniformLocation(v16->m_Program, "brightness");
    _glewUniform1fv(UniformLocation, 1, &globalBrightness);
    v50 = this->m_CustomShaderNo2D;
    if ( (int)v50 >= 0 )
    {
      v51 = this->m_CustomShaderNo2D;
      if ( this->m_pRenderFunc2D[v50] )
      {
        v52 = indices;
        this->m_ParameterWork.color = color;
        this->m_ParameterWork.count = count;
        this->m_ParameterWork.texture = texture;
        this->m_ParameterWork.vertex = v20;
        this->m_ParameterWork.texCoord = v20;
        this->m_ParameterWork.index = indices;
        this->m_ParameterWork.type = 4;
        this->m_pRenderFunc2D[v51](this, v16, v13);
$DRAW_IMAGE_END_1:
        glDrawElementsAG(4u, count, 0x1405u, v52);
        if ( (this->m_RenderFlg & 0x38) != 0 )
        {
          v64 = m_ActiveTexture;
          if ( m_ActiveTexture != 3 )
          {
            m_ActiveTexture = 3;
            _glewActiveTexture(0x84C3u);
            v64 = m_ActiveTexture;
          }
          v65 = Framework::GLManager::glm;
          ::m_TexID[v64] = 0;
          v65->m_textureID = 0;
          while ( v65->m_bOpenGLBlocked )
            ;
          glBindTexture(0xDE1u, 0);
          v66 = m_ActiveTexture;
          if ( m_ActiveTexture != 2 )
          {
            m_ActiveTexture = 2;
            _glewActiveTexture(0x84C2u);
            v66 = m_ActiveTexture;
          }
          v67 = Framework::GLManager::glm;
          ::m_TexID[v66] = 0;
          v67->m_textureID = 0;
          while ( v67->m_bOpenGLBlocked )
            ;
          glBindTexture(0xDE1u, 0);
          v68 = m_ActiveTexture;
          if ( m_ActiveTexture != 1 )
          {
            m_ActiveTexture = 1;
            _glewActiveTexture(0x84C1u);
            v68 = m_ActiveTexture;
          }
          v69 = Framework::GLManager::glm;
          ::m_TexID[v68] = 0;
          v69->m_textureID = 0;
          while ( v69->m_bOpenGLBlocked )
            ;
          glBindTexture(0xDE1u, 0);
          v70 = m_ActiveTexture;
          if ( m_ActiveTexture )
          {
            m_ActiveTexture = 0;
            _glewActiveTexture(0x84C0u);
            v70 = m_ActiveTexture;
          }
          v71 = Framework::GLManager::glm;
          ::m_TexID[v70] = 0;
          v71->m_textureID = 0;
          while ( v71->m_bOpenGLBlocked )
            ;
          glBindTexture(0xDE1u, 0);
        }
        return;
      }
    }
    v53 = AgSingleton<KOFShaderManager>::ms_instance;
    v54 = *(unsigned int *)AgSingleton<KOFShaderManager>::ms_instance[11
                                                                    * SLODWORD(AgSingleton<KOFShaderManager>::ms_instance[360450].__vftable)
                                                                    + 7].onSingletonInit;
    if ( (unsigned int)v54 < g_maxEnabledVertexAttribArrays )
    {
      g_vertexAttribIndex[v54] = 0;
      g_pendingVertexAttribArrays |= 1 << v54;
    }
    v55 = *(_DWORD *)v53[11 * SLODWORD(v53[360450].__vftable) + 7].onSingletonInit;
    renderSize = Framework::GLManager::glm->renderSize;
    switch ( renderSize )
    {
      case 64:
        v57 = 64;
        break;
      case 280:
        v57 = 136;
        break;
      case 208:
        v57 = 64;
        break;
      default:
        v57 = 88;
        if ( renderSize == 144 )
          v57 = 144;
        break;
    }
    if ( v55 >= 0 )
    {
      _glewVertexAttribPointer(v55, 3, 0x1406u, 0, v57, v20);
      v53 = AgSingleton<KOFShaderManager>::ms_instance;
    }
    this->vColor[0] = (float)BYTE2(color) * 0.0038999999;
    this->vColor[1] = (float)BYTE1(color) * 0.0038999999;
    this->vColor[2] = (float)(unsigned __int8)color * 0.0038999999;
    this->vColor[3] = (float)HIBYTE(color) * 0.0038999999;
    glUniform4fvAG(v16->m_piGLUniform[1], 1, this->vColor);
    v58 = *((unsigned int *)v53[11 * SLODWORD(v53[360450].__vftable) + 7].onSingletonInit + 4);
    if ( (unsigned int)v58 < g_maxEnabledVertexAttribArrays )
    {
      g_vertexAttribIndex[v58] = 4;
      g_pendingVertexAttribArrays |= 1 << v58;
    }
    v59 = Framework::GLManager::glm->renderSize;
    v60 = *((_DWORD *)v53[11 * SLODWORD(v53[360450].__vftable) + 7].onSingletonInit + 4);
    if ( v59 != 64 )
    {
      if ( v59 == 280 )
      {
        v18 = 8;
LABEL_49:
        if ( v60 >= 0 )
          _glewVertexAttribPointer(v60, 2, 0x1406u, 0, v18, v20);
        if ( m_ActiveTexture )
        {
          m_ActiveTexture = 0;
          _glewActiveTexture(0x84C0u);
        }
        m_sync = texture->m_sync;
        if ( m_sync )
        {
          _glewWaitSync(m_sync, 0, 0xFFFFFFFFFFFFFFFFui64);
          _glewDeleteSync(texture->m_sync);
          texture->m_sync = 0i64;
        }
        m_TexID = texture->m_TexID;
        if ( m_TexID != ::m_TexID[m_ActiveTexture] || !m_TexID )
        {
          v63 = Framework::GLManager::glm;
          ::m_TexID[m_ActiveTexture] = m_TexID;
          v63->m_textureID = m_TexID;
          while ( v63->m_bOpenGLBlocked )
            ;
          glBindTexture(0xDE1u, m_TexID);
        }
        v52 = indices;
        goto $DRAW_IMAGE_END_1;
      }
      if ( v59 != 208 )
      {
        if ( v59 == 144 )
        {
          v18 = 144;
          goto LABEL_49;
        }
        v18 = 88;
      }
    }
    v20 += 14;
    goto LABEL_49;
  }
}

void __fastcall OGLRender::drawMovie(
        OGLRender *this,
        OGLTexture *pTextureY,
        OGLTexture *pTextureU,
        OGLTexture *pTextureV,
        MeshVertexInfo2D *pCoord)
{
  OGLShader *v5; // r15
  int v10; // edi
  AgFrameAllocator<AgAllocator<1> > *p_m_agDrawAllocator; // rcx
  unsigned __int64 v12; // r8
  char *v13; // rax
  unsigned __int8 v14; // r8
  char *v15; // rsi
  __int64 v16; // rcx
  __int128 v17; // xmm0
  float v18; // xmm0_4
  float v19; // xmm1_4
  int *m_piGLUniform; // rax
  int v21; // ecx
  int UniformLocation; // eax
  AgSingleton<KOFShaderManager> *v23; // rbx
  __int64 v24; // rcx
  signed int v25; // er10
  int renderSize; // ecx
  int v27; // eax
  __int64 v28; // rcx
  int v29; // eax
  signed int v30; // ecx
  struct __GLsync *m_sync; // rcx
  unsigned int m_TexID; // edx
  Framework::GLManager *v33; // rcx
  struct __GLsync *v34; // rcx
  unsigned int v35; // edx
  Framework::GLManager *v36; // rcx
  __int64 v37; // rbx
  struct __GLsync *v38; // rcx
  unsigned int v39; // edx
  Framework::GLManager *v40; // r9
  OGLMatrix v41; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v42; // [rsp+78h] [rbp-90h]
  __int128 v43; // [rsp+88h] [rbp-80h]
  __int128 v44; // [rsp+98h] [rbp-70h]
  __int128 v45; // [rsp+A8h] [rbp-60h]
  Framework::GLManager *v46; // [rsp+B8h] [rbp-50h]
  OGLTexture *v47; // [rsp+C0h] [rbp-48h]
  float value[4]; // [rsp+C8h] [rbp-40h] BYREF
  __int128 v49; // [rsp+D8h] [rbp-30h]
  __int128 v50; // [rsp+E8h] [rbp-20h]
  __int128 v51; // [rsp+F8h] [rbp-10h]

  v5 = this->m_ShaderFXTbl[7998];
  v47 = pTextureV;
  if ( !v5 || !v5->m_Program )
    return;
  memset(&v41, 0, sizeof(v41));
  OGLMatrix::multiply(&v41, &this->m_View, &this->m_Proj);
  KOFShaderManager::useProgramSlot((KOFShaderManager *)AgSingleton<KOFShaderManager>::ms_instance, v5->m_programSlot);
  v10 = 64;
  v46 = Framework::GLManager::glm;
  p_m_agDrawAllocator = &Framework::GLManager::glm->m_agDrawAllocator;
  Framework::GLManager::glm->renderSize = 64;
  v13 = (char *)AgFrameAllocator<AgAllocator<1>>::allocate(p_m_agDrawAllocator, 0x100ui64, v12);
  v15 = v13;
  v16 = 2i64;
  do
  {
    v13 += 128;
    v17 = *(_OWORD *)&pCoord->m_position.x;
    pCoord += 2;
    *((_OWORD *)v13 - 8) = v17;
    *((_OWORD *)v13 - 7) = *(_OWORD *)&pCoord[-2].m_normal.y;
    *((_OWORD *)v13 - 6) = *(_OWORD *)&pCoord[-2].m_tangent.z;
    *((_OWORD *)v13 - 5) = *(_OWORD *)&pCoord[-2].m_color.z;
    *((_OWORD *)v13 - 4) = *(_OWORD *)&pCoord[-1].m_position.x;
    *((_OWORD *)v13 - 3) = *(_OWORD *)&pCoord[-1].m_normal.y;
    *((_OWORD *)v13 - 2) = *(_OWORD *)&pCoord[-1].m_tangent.z;
    *((_OWORD *)v13 - 1) = *(_OWORD *)&pCoord[-1].m_color.z;
    --v16;
  }
  while ( v16 );
  *(_QWORD *)&v42 = __PAIR64__(LODWORD(v41.m[4]), LODWORD(v41.m[0]));
  *(_QWORD *)&v43 = __PAIR64__(LODWORD(v41.m[5]), LODWORD(v41.m[1]));
  *(_QWORD *)&v44 = __PAIR64__(LODWORD(v41.m[6]), LODWORD(v41.m[2]));
  *(_QWORD *)&v45 = __PAIR64__(LODWORD(v41.m[7]), LODWORD(v41.m[3]));
  *((_QWORD *)&v42 + 1) = __PAIR64__(LODWORD(v41.m[12]), LODWORD(v41.m[8]));
  *((_QWORD *)&v43 + 1) = __PAIR64__(LODWORD(v41.m[13]), LODWORD(v41.m[9]));
  DWORD2(v44) = LODWORD(v41.m[10]);
  DWORD2(v45) = LODWORD(v41.m[11]);
  v18 = v41.m[14];
  v19 = v41.m[15];
  v46->m_vertexInfoCount = 4;
  m_piGLUniform = v5->m_piGLUniform;
  *((float *)&v44 + 3) = v18;
  *((float *)&v45 + 3) = v19;
  v21 = *m_piGLUniform;
  *(_OWORD *)value = v42;
  v49 = v43;
  v50 = v44;
  v51 = v45;
  glUniformMatrix4fvAG(v21, 1, v14, value);
  UniformLocation = _glewGetUniformLocation(v5->m_Program, "brightness");
  _glewUniform1fv(UniformLocation, 1, &globalBrightness);
  v23 = AgSingleton<KOFShaderManager>::ms_instance;
  v24 = *(unsigned int *)AgSingleton<KOFShaderManager>::ms_instance[11
                                                                  * SLODWORD(AgSingleton<KOFShaderManager>::ms_instance[360450].__vftable)
                                                                  + 7].onSingletonInit;
  if ( (unsigned int)v24 < g_maxEnabledVertexAttribArrays )
  {
    g_vertexAttribIndex[v24] = 0;
    g_pendingVertexAttribArrays |= 1 << v24;
  }
  v25 = *(_DWORD *)v23[11 * SLODWORD(v23[360450].__vftable) + 7].onSingletonInit;
  renderSize = Framework::GLManager::glm->renderSize;
  switch ( renderSize )
  {
    case 64:
      v27 = 64;
      break;
    case 280:
      v27 = 136;
      break;
    case 208:
      v27 = 64;
      break;
    default:
      v27 = 88;
      if ( renderSize == 144 )
        v27 = 144;
      break;
  }
  if ( v25 >= 0 )
  {
    _glewVertexAttribPointer(v25, 3, 0x1406u, 0, v27, v15);
    v23 = AgSingleton<KOFShaderManager>::ms_instance;
  }
  this->vColor[1] = 0.99449998;
  this->vColor[0] = 0.99449998;
  this->vColor[2] = 0.99449998;
  this->vColor[3] = 0.99449998;
  glUniform4fvAG(v5->m_piGLUniform[1], 1, this->vColor);
  v28 = *((unsigned int *)v23[11 * SLODWORD(v23[360450].__vftable) + 7].onSingletonInit + 4);
  if ( (unsigned int)v28 < g_maxEnabledVertexAttribArrays )
  {
    g_vertexAttribIndex[v28] = 4;
    g_pendingVertexAttribArrays |= 1 << v28;
  }
  v29 = Framework::GLManager::glm->renderSize;
  v30 = *((_DWORD *)v23[11 * SLODWORD(v23[360450].__vftable) + 7].onSingletonInit + 4);
  if ( v29 == 64 )
    goto LABEL_26;
  if ( v29 != 280 )
  {
    if ( v29 != 208 )
    {
      if ( v29 == 144 )
      {
        v10 = 144;
        goto LABEL_27;
      }
      v10 = 88;
    }
LABEL_26:
    v15 += 56;
    goto LABEL_27;
  }
  v10 = 8;
LABEL_27:
  if ( v30 >= 0 )
    _glewVertexAttribPointer(v30, 2, 0x1406u, 0, v10, v15);
  if ( m_ActiveTexture )
  {
    m_ActiveTexture = 0;
    _glewActiveTexture(0x84C0u);
  }
  m_sync = pTextureY->m_sync;
  if ( m_sync )
  {
    _glewWaitSync(m_sync, 0, 0xFFFFFFFFFFFFFFFFui64);
    _glewDeleteSync(pTextureY->m_sync);
    pTextureY->m_sync = 0i64;
  }
  m_TexID = pTextureY->m_TexID;
  if ( m_TexID != ::m_TexID[m_ActiveTexture] || !m_TexID )
  {
    v33 = Framework::GLManager::glm;
    ::m_TexID[m_ActiveTexture] = m_TexID;
    v33->m_textureID = m_TexID;
    while ( v33->m_bOpenGLBlocked )
      ;
    glBindTexture(0xDE1u, m_TexID);
  }
  if ( m_ActiveTexture != 1 )
  {
    m_ActiveTexture = 1;
    _glewActiveTexture(0x84C1u);
  }
  v34 = pTextureU->m_sync;
  if ( v34 )
  {
    _glewWaitSync(v34, 0, 0xFFFFFFFFFFFFFFFFui64);
    _glewDeleteSync(pTextureU->m_sync);
    pTextureU->m_sync = 0i64;
  }
  v35 = pTextureU->m_TexID;
  if ( v35 != ::m_TexID[m_ActiveTexture] || !v35 )
  {
    v36 = Framework::GLManager::glm;
    ::m_TexID[m_ActiveTexture] = v35;
    v36->m_textureID = v35;
    while ( v36->m_bOpenGLBlocked )
      ;
    glBindTexture(0xDE1u, v35);
  }
  if ( m_ActiveTexture != 2 )
  {
    m_ActiveTexture = 2;
    _glewActiveTexture(0x84C2u);
  }
  v37 = (__int64)v47;
  v38 = v47->m_sync;
  if ( v38 )
  {
    _glewWaitSync(v38, 0, 0xFFFFFFFFFFFFFFFFui64);
    _glewDeleteSync(*(struct __GLsync **)(v37 + 72));
    *(_QWORD *)(v37 + 72) = 0i64;
  }
  v39 = *(_DWORD *)(v37 + 16);
  if ( v39 != ::m_TexID[m_ActiveTexture] || !v39 )
  {
    v40 = Framework::GLManager::glm;
    ::m_TexID[m_ActiveTexture] = v39;
    v40->m_textureID = v39;
    while ( v40->m_bOpenGLBlocked )
      ;
    glBindTexture(0xDE1u, v39);
  }
  glDrawArraysAG((unsigned int)v38, v39, 4);
}

void __fastcall OGLRender::drawPoly(OGLRender *this, float *vertex, unsigned int color, unsigned int type)
{
  __int64 v5; // rax
  __int16 v8; // r12
  OGLShader *v9; // rdi
  Framework::GLManager *v10; // rbx
  int v11; // er14
  AgFrameAllocator<AgAllocator<1> > *p_m_agDrawAllocator; // rcx
  unsigned __int64 v13; // r8
  char *v14; // rdx
  int v15; // ecx
  int v16; // eax
  int v17; // er12
  KOFShaderManager *v18; // rbx
  __int128 v19; // xmm6
  __int128 v20; // xmm7
  __int128 v21; // xmm8
  __int128 v22; // xmm9
  __m128 v23; // xmm2
  __m128 v24; // xmm3
  __m128 v25; // xmm4
  int v26; // er12
  __m128 v27; // xmm5
  __int64 v28; // rax
  __int64 v29; // r13
  AgSingleton<KOFShaderManager>_vtbl *v30; // rax
  const void *v31; // rcx
  _OWORD *v32; // rax
  int v33; // er12
  __int64 m_currentProgramSlot; // rdx
  __int64 index; // r13
  __int128 *v36; // rax
  int UniformLocation; // eax
  AgSingleton<KOFShaderManager> *v38; // r8
  __int64 v39; // rcx
  signed int v40; // er10
  int renderSize; // ecx
  int v42; // edx
  unsigned int v43; // ecx
  AgSingleton<KOFShaderManager>_vtbl *v44; // [rsp+38h] [rbp-D0h]
  void **v45; // [rsp+38h] [rbp-D0h]
  int v46; // [rsp+40h] [rbp-C8h]
  int v47; // [rsp+40h] [rbp-C8h]
  __int128 v48; // [rsp+48h] [rbp-C0h]
  OGLMatrix v49; // [rsp+48h] [rbp-C0h]
  __int128 v50; // [rsp+58h] [rbp-B0h]
  __int128 v51; // [rsp+68h] [rbp-A0h]
  __int128 v52; // [rsp+78h] [rbp-90h]
  void *v53; // [rsp+88h] [rbp-80h]
  OGLMatrix Buf2; // [rsp+98h] [rbp-70h] BYREF
  __int128 v55[4]; // [rsp+D8h] [rbp-30h] BYREF

  v5 = 9606i64;
  if ( !(_BYTE)dword_140A96048 )
    v5 = 1408i64;
  v8 = v5;
  v9 = this->m_ShaderTbl[v5];
  if ( v9 && v9->m_Program )
  {
    memset(&Buf2, 0, sizeof(Buf2));
    OGLMatrix::multiply(&Buf2, &this->m_View, &this->m_Proj);
    KOFShaderManager::useProgramSlot((KOFShaderManager *)AgSingleton<KOFShaderManager>::ms_instance, v9->m_programSlot);
    v10 = Framework::GLManager::glm;
    v11 = 64;
    p_m_agDrawAllocator = &Framework::GLManager::glm->m_agDrawAllocator;
    Framework::GLManager::glm->renderSize = 64;
    v14 = (char *)AgFrameAllocator<AgAllocator<1>>::allocate(p_m_agDrawAllocator, 0x100ui64, v13);
    v15 = *((_DWORD *)vertex + 2);
    *(_QWORD *)v14 = _mm_unpacklo_ps((__m128)*(unsigned int *)vertex, (__m128)*((unsigned int *)vertex + 1)).m128_u64[0];
    *((_DWORD *)v14 + 2) = v15;
    v53 = v14;
    *(_OWORD *)(v14 + 40) = _xmm;
    v46 = *((_DWORD *)vertex + 5);
    *((_QWORD *)v14 + 8) = _mm_unpacklo_ps((__m128)*((unsigned int *)vertex + 3), (__m128)*((unsigned int *)vertex + 4)).m128_u64[0];
    *((_DWORD *)v14 + 18) = v46;
    *(_OWORD *)(v14 + 104) = _xmm;
    v16 = *((_DWORD *)vertex + 8);
    *((_QWORD *)v14 + 16) = _mm_unpacklo_ps(
                              (__m128)*((unsigned int *)vertex + 6),
                              (__m128)*((unsigned int *)vertex + 7)).m128_u64[0];
    *((_DWORD *)v14 + 34) = v16;
    *(_OWORD *)(v14 + 168) = _xmm;
    v47 = *((_DWORD *)vertex + 11);
    *((_QWORD *)v14 + 24) = _mm_unpacklo_ps(
                              (__m128)*((unsigned int *)vertex + 9),
                              (__m128)*((unsigned int *)vertex + 10)).m128_u64[0];
    *((_DWORD *)v14 + 50) = v47;
    *(_OWORD *)(v14 + 232) = _xmm;
    v10->m_vertexInfoCount = 4;
    v17 = v8 & 0x2000;
    if ( v17 )
      glUniform4fvAG(v9->m_piGLUniform[3], 1, this->m_GroundFog.m_Color);
    v18 = (KOFShaderManager *)AgSingleton<KOFShaderManager>::ms_instance;
    *(_QWORD *)&v48 = __PAIR64__(LODWORD(Buf2.m[4]), LODWORD(Buf2.m[0]));
    *(_QWORD *)&v50 = __PAIR64__(LODWORD(Buf2.m[5]), LODWORD(Buf2.m[1]));
    *(_QWORD *)&v51 = __PAIR64__(LODWORD(Buf2.m[6]), LODWORD(Buf2.m[2]));
    *(_QWORD *)&v52 = __PAIR64__(LODWORD(Buf2.m[7]), LODWORD(Buf2.m[3]));
    *((_QWORD *)&v48 + 1) = __PAIR64__(LODWORD(Buf2.m[12]), LODWORD(Buf2.m[8]));
    *((_QWORD *)&v50 + 1) = __PAIR64__(LODWORD(Buf2.m[13]), LODWORD(Buf2.m[9]));
    *((_QWORD *)&v51 + 1) = __PAIR64__(LODWORD(Buf2.m[14]), LODWORD(Buf2.m[10]));
    *((_QWORD *)&v52 + 1) = __PAIR64__(LODWORD(Buf2.m[15]), LODWORD(Buf2.m[11]));
    v19 = v48;
    v20 = v50;
    v21 = v51;
    v22 = v52;
    v55[2] = v51;
    v55[3] = v52;
    v55[0] = v48;
    v55[1] = v50;
    if ( v17 )
    {
      v23 = *(__m128 *)this->m_View.m;
      v24 = *(__m128 *)&this->m_View.m[4];
      v25 = *(__m128 *)&this->m_View.m[8];
      v26 = v9->m_piGLUniform[2];
      v27 = *(__m128 *)&this->m_View.m[12];
      v28 = SLODWORD(AgSingleton<KOFShaderManager>::ms_instance[360450].__vftable);
      LODWORD(v49.m[4]) = _mm_shuffle_ps(v23, v23, 85).m128_u32[0];
      LODWORD(v49.m[8]) = _mm_shuffle_ps(v23, v23, 170).m128_u32[0];
      LODWORD(v49.m[5]) = _mm_shuffle_ps(v24, v24, 85).m128_u32[0];
      LODWORD(v49.m[9]) = _mm_shuffle_ps(v24, v24, 170).m128_u32[0];
      LODWORD(v49.m[6]) = _mm_shuffle_ps(v25, v25, 85).m128_u32[0];
      LODWORD(v49.m[10]) = _mm_shuffle_ps(v25, v25, 170).m128_u32[0];
      *(_QWORD *)v49.m = __PAIR64__(v24.m128_u32[0], v23.m128_u32[0]);
      *(_QWORD *)&v49.m[2] = __PAIR64__(v27.m128_u32[0], v25.m128_u32[0]);
      v29 = *((int *)&AgSingleton<KOFShaderManager>::ms_instance[11 * v28 + 11].~AgSingleton<KOFShaderManager> + 4 * v26);
      v30 = AgSingleton<KOFShaderManager>::ms_instance[SHIDWORD(AgSingleton<KOFShaderManager>::ms_instance[11 * v28 + 5].__vftable)
                                                     + 494188].__vftable;
      v31 = (const void *)*((_QWORD *)&v30->~AgSingleton<KOFShaderManager> + v29);
      LODWORD(v49.m[12]) = _mm_shuffle_ps(v23, v23, 255).m128_u32[0];
      LODWORD(v49.m[13]) = _mm_shuffle_ps(v24, v24, 255).m128_u32[0];
      LODWORD(v49.m[14]) = _mm_shuffle_ps(v25, v25, 255).m128_u32[0];
      LODWORD(v49.m[7]) = _mm_shuffle_ps(v27, v27, 85).m128_u32[0];
      LODWORD(v49.m[11]) = _mm_shuffle_ps(v27, v27, 170).m128_u32[0];
      LODWORD(v49.m[15]) = _mm_shuffle_ps(v27, v27, 255).m128_u32[0];
      Buf2 = v49;
      v44 = v30;
      if ( memcmp(v31, &Buf2, 0x40ui64) )
      {
        v32 = (_OWORD *)*((_QWORD *)&v44->~AgSingleton<KOFShaderManager> + v29);
        *v32 = *(_OWORD *)v49.m;
        v32[1] = *(_OWORD *)&v49.m[4];
        v32[2] = *(_OWORD *)&v49.m[8];
        v32[3] = *(_OWORD *)&v49.m[12];
        KOFShaderManager::setUniformWriteMask(v18, v26);
      }
    }
    v33 = *v9->m_piGLUniform;
    m_currentProgramSlot = v18->m_currentProgramSlot;
    index = v18->m_program[m_currentProgramSlot].m_uniformAttrib[v33].index;
    v45 = v18->m_shaderUniformPtr[v18->m_program[m_currentProgramSlot].m_linkID];
    if ( memcmp(v45[index], v55, 0x40ui64) )
    {
      v36 = (__int128 *)v45[index];
      *v36 = v19;
      v36[1] = v20;
      v36[2] = v21;
      v36[3] = v22;
      KOFShaderManager::setUniformWriteMask(v18, v33);
    }
    UniformLocation = _glewGetUniformLocation(v9->m_Program, "brightness");
    _glewUniform1fv(UniformLocation, 1, &globalBrightness);
    v38 = AgSingleton<KOFShaderManager>::ms_instance;
    v39 = *(unsigned int *)AgSingleton<KOFShaderManager>::ms_instance[11
                                                                    * SLODWORD(AgSingleton<KOFShaderManager>::ms_instance[360450].__vftable)
                                                                    + 7].onSingletonInit;
    if ( (unsigned int)v39 < g_maxEnabledVertexAttribArrays )
    {
      g_pendingVertexAttribArrays |= 1 << v39;
      g_vertexAttribIndex[v39] = 0;
    }
    v40 = *(_DWORD *)v38[11 * SLODWORD(v38[360450].__vftable) + 7].onSingletonInit;
    renderSize = Framework::GLManager::glm->renderSize;
    if ( renderSize != 64 )
    {
      if ( renderSize == 280 )
      {
        v11 = 136;
      }
      else if ( renderSize != 208 )
      {
        v11 = 88;
        if ( renderSize == 144 )
          v11 = 144;
      }
    }
    if ( v40 >= 0 )
      _glewVertexAttribPointer(v40, 3, 0x1406u, 0, v11, v53);
    this->vColor[0] = (float)BYTE2(color) * 0.0038999999;
    this->vColor[1] = (float)BYTE1(color) * 0.0038999999;
    this->vColor[2] = (float)(unsigned __int8)color * 0.0038999999;
    this->vColor[3] = (float)HIBYTE(color) * 0.0038999999;
    glUniform4fvAG(v9->m_piGLUniform[1], 1, this->vColor);
    glDrawArraysAG(v43, v42, 4);
  }
}

void __fastcall OGLRender::drawStack(OGLRender *this, unsigned __int8 clear, unsigned __int8 bNotUseMat)
{
  __int64 m_RenderStackNo; // rcx
  unsigned __int8 v5; // r15
  unsigned __int8 v6; // r12
  unsigned int v7; // er8
  OGLMatrix *v8; // r8
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  int v12; // edx
  OGLVec3 *v13; // r8
  int v14; // esi
  signed int v15; // edi
  __int64 v16; // rax
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int64 v20; // rbx
  OGLModelStackData *v21; // rcx
  OGLModel *pModel; // rcx
  __int64 v23; // rax
  __int64 v24; // r10
  signed int v25; // edx
  OGLRender *v26; // rdi
  __int64 v27; // r8
  OGLModelStackData *v28; // r9
  OGLModel *v29; // r13
  int iChangeFlg; // ebx
  __int64 MatNo; // rcx
  OGLFigure *m_pFigure; // r14
  signed int v33; // er12
  __int128 v34; // xmm1
  unsigned int BlendMode; // eax
  int EffectFlg; // er15
  int v37; // esi
  GLboolean v38; // cl
  unsigned int v39; // ecx
  GLenum v40; // edx
  GLenum v41; // ecx
  GLenum v42; // ecx
  OGLFigure *v43; // r9
  __int64 m_iRenderNo; // rax
  OGLShader *v45; // rdi
  __int16 v46; // si
  bool v47; // zf
  int v48; // eax
  OGLMatrix *v49; // r9
  __int64 v50; // rax
  void (__fastcall *v51)(OGLRender *, OGLShader *, OGLModelStackData *, OGLModel *); // r10
  OGLModelStackData *v52; // rsi
  OGLShader *v53; // rdx
  AgSingleton<KOFShaderManager> *v54; // rbx
  signed int v55; // er11
  int renderSize; // ecx
  int v57; // eax
  signed int v58; // er10
  int v59; // ecx
  int v60; // eax
  __int64 m_pfNormalCoord; // r10
  int v62; // eax
  signed int v63; // ecx
  __int64 m_pfTangentCoord; // r10
  int v65; // eax
  signed int v66; // ecx
  int v67; // edx
  __int64 m_piVerColor; // r10
  int v69; // eax
  signed int v70; // ecx
  char v71; // al
  float *Colors; // r8
  int *v73; // rax
  int *m_piGLUniform; // rax
  signed int v75; // edi
  unsigned int *v76; // rbx
  unsigned int v77; // er8
  signed int v78; // esi
  unsigned int *v79; // rbx
  const void **m_pfTexCoord; // rdi
  unsigned int v81; // er8
  int v82; // er15
  unsigned int v83; // er8
  unsigned int v84; // er8
  unsigned int v85; // er8
  unsigned int v86; // er8
  __int64 v87; // r10
  int v88; // eax
  signed int v89; // ecx
  unsigned int v90; // edx
  unsigned int v91; // edx
  unsigned int v92; // eax
  unsigned int v93; // eax
  unsigned int v94; // eax
  OGLTexture *v95; // rcx
  unsigned int v96; // eax
  unsigned int v97; // eax
  unsigned int v98; // eax
  unsigned int v99; // eax
  unsigned int v100; // ebx
  unsigned int v101; // ebx
  unsigned int v102; // ebx
  unsigned int v103; // ebx
  unsigned int v104; // ebx
  unsigned int v105; // ebx
  unsigned int v106; // ebx
  unsigned int v107; // ebx
  signed int v108; // ebx
  OGLTexture *v109; // rax
  OGLTexture *v110; // rax
  unsigned int m_TexID; // edx
  OGLTexture *v112; // rax
  OGLTexture *v113; // rax
  unsigned int v114; // edx
  OGLTexture *v115; // rax
  OGLTexture *v116; // rax
  unsigned int v117; // edx
  OGLTexture *v118; // rax
  OGLTexture *v119; // rax
  unsigned int v120; // edx
  OGLTexture *v121; // rax
  OGLTexture *v122; // rax
  unsigned int v123; // edx
  OGLTexture *v124; // rax
  OGLTexture *v125; // rax
  unsigned int v126; // edx
  OGLTexture *v127; // rax
  OGLTexture *v128; // rax
  unsigned int v129; // edx
  OGLTexture *v130; // rax
  OGLTexture *v131; // rax
  unsigned int ID; // eax
  unsigned int v133; // eax
  unsigned int v134; // eax
  OGLTexture *v135; // rcx
  unsigned int v136; // eax
  unsigned int v137; // eax
  unsigned int v138; // eax
  unsigned int v139; // eax
  __int128 v140; // xmm1
  __int128 v141; // xmm0
  __int128 v142; // xmm1
  unsigned int *m_pusIndexShadow; // r9
  int m_usIndexShadowCount; // edx
  __int64 v145; // rax
  __int64 v146; // rax
  Framework::GLManager *v147; // rdx
  __int64 v148; // rax
  Framework::GLManager *v149; // rdx
  __int64 v150; // rax
  int pStack; // [rsp+28h] [rbp-E0h]
  int pStacka; // [rsp+28h] [rbp-E0h]
  int pStackb; // [rsp+28h] [rbp-E0h]
  OGLFigure *MatMapID; // [rsp+30h] [rbp-D8h]
  int shader; // [rsp+5Ch] [rbp-ACh] BYREF
  unsigned __int8 v157; // [rsp+60h] [rbp-A8h]
  signed int v158; // [rsp+64h] [rbp-A4h]
  OGLModelStackData *v159; // [rsp+68h] [rbp-A0h]
  OGLRender *v160; // [rsp+70h] [rbp-98h]
  __int64 v161; // [rsp+78h] [rbp-90h]
  int v162; // [rsp+80h] [rbp-88h]
  int v163; // [rsp+84h] [rbp-84h]
  int v164; // [rsp+88h] [rbp-80h]
  unsigned int texture[4]; // [rsp+90h] [rbp-78h] BYREF
  unsigned int v166[4]; // [rsp+A0h] [rbp-68h]
  unsigned int v167[2]; // [rsp+B0h] [rbp-58h]
  OGLMatrix modelViewOrthoProj; // [rsp+B8h] [rbp-50h] BYREF
  OGLModel *v169; // [rsp+F8h] [rbp-10h]
  OGLMatrix v170; // [rsp+108h] [rbp+0h] BYREF
  __int128 v171; // [rsp+148h] [rbp+40h]
  __int128 v172; // [rsp+158h] [rbp+50h]
  __int128 v173; // [rsp+168h] [rbp+60h]
  __int128 v174; // [rsp+178h] [rbp+70h]
  int v175[4]; // [rsp+188h] [rbp+80h] BYREF

  v160 = this;
  m_RenderStackNo = this->m_RenderStackNo;
  v5 = bNotUseMat;
  v6 = clear;
  v157 = clear;
  v7 = this->m_sModelStackCount[m_RenderStackNo];
  if ( v7 )
  {
    if ( !v5 )
      QuickSort(this->m_pModelStack[m_RenderStackNo], 0, v7 - 1);
    *(_QWORD *)modelViewOrthoProj.m = 1065353216i64;
    modelViewOrthoProj.m[4] = 0.0;
    *(_QWORD *)&modelViewOrthoProj.m[5] = 1065353216i64;
    modelViewOrthoProj.m[14] = 0.0;
    modelViewOrthoProj.m[7] = 0.0;
    modelViewOrthoProj.m[15] = 1.0;
    *(_QWORD *)&modelViewOrthoProj.m[8] = 0i64;
    *(_QWORD *)&modelViewOrthoProj.m[12] = 0i64;
    *(_QWORD *)&modelViewOrthoProj.m[2] = 0i64;
    *(_QWORD *)&modelViewOrthoProj.m[10] = 1065353216i64;
    OGLMatrix::multiply(&this->m_ViewProj, &this->m_View, &this->m_Proj);
    OGLMatrix::multiply(&this->m_PrevViewProj, &this->m_prevView, v8);
    v9 = *(_OWORD *)&this->m_ViewProj.m[4];
    *(_OWORD *)v170.m = *(_OWORD *)this->m_ViewProj.m;
    v10 = *(_OWORD *)&this->m_ViewProj.m[8];
    *(_OWORD *)&v170.m[4] = v9;
    v11 = *(_OWORD *)&this->m_ViewProj.m[12];
    *(_OWORD *)&v170.m[8] = v10;
    *(_OWORD *)&v170.m[12] = v11;
    OGLMatrix::inverse(&v170);
    v14 = 0;
    v15 = 0;
    v16 = this->m_RenderStackNo;
    *(_QWORD *)&v172 = __PAIR64__(LODWORD(v170.m[5]), LODWORD(v170.m[1]));
    *(_QWORD *)&v174 = __PAIR64__(LODWORD(v170.m[7]), LODWORD(v170.m[3]));
    *(_QWORD *)&v173 = __PAIR64__(LODWORD(v170.m[6]), LODWORD(v170.m[2]));
    *((_QWORD *)&v172 + 1) = __PAIR64__(LODWORD(v170.m[13]), LODWORD(v170.m[9]));
    *((_QWORD *)&v171 + 1) = __PAIR64__(LODWORD(v170.m[12]), LODWORD(v170.m[8]));
    *((_QWORD *)&v174 + 1) = __PAIR64__(LODWORD(v170.m[15]), LODWORD(v170.m[11]));
    *((_QWORD *)&v173 + 1) = __PAIR64__(LODWORD(v170.m[14]), LODWORD(v170.m[10]));
    v17 = v172;
    *(_QWORD *)&v171 = __PAIR64__(LODWORD(v170.m[4]), LODWORD(v170.m[0]));
    *(_OWORD *)this->m_invModelViewProj.m = v171;
    this->m_bWorldSetting = 0;
    v18 = v173;
    *(_OWORD *)&this->m_invModelViewProj.m[4] = v17;
    v19 = v174;
    *(_OWORD *)&this->m_invModelViewProj.m[8] = v18;
    *(_OWORD *)&this->m_invModelViewProj.m[12] = v19;
    if ( (int)this->m_sModelStackCount[v16] > 0 )
    {
      v20 = 0i64;
      do
      {
        v21 = this->m_pModelStack[this->m_RenderStackNo][v20];
        if ( v21->sIndexCount )
        {
          pModel = v21->pModel;
          pModel->m_uiModeFlg &= ~0x200u;
          v14 += OGLModel::applyPostureNormal(pModel, v12, v13);
        }
        ++v15;
        ++v20;
      }
      while ( v15 < (signed int)this->m_sModelStackCount[this->m_RenderStackNo] );
      if ( v14 > 0 )
        _glewMemoryBarrier(1u);
    }
    v23 = this->m_RenderStackNo;
    v24 = 0i64;
    v25 = 0;
    v169 = 0i64;
    v26 = this;
    v158 = 0;
    if ( (int)this->m_sModelStackCount[v23] > 0 )
    {
      v27 = 0i64;
      v161 = 0i64;
      do
      {
        v28 = v26->m_pModelStack[v26->m_RenderStackNo][v27];
        v159 = v28;
        if ( v28->sIndexCount )
        {
          v29 = v28->pModel;
          iChangeFlg = 0;
          v28->no = v25;
          if ( v29 )
          {
            v29->m_uiModeFlg &= 0xFFFFFE7F;
            MatNo = v28->MatNo;
            if ( (int)MatNo >= v29->m_ucMaterialCount || v29->m_bMaterialVisible[MatNo] )
            {
              if ( !v5 )
              {
                v169 = v29;
                LOBYTE(iChangeFlg) = v24 == (_QWORD)v29;
              }
              if ( v29->m_bProjectionBlend && v26->m_fOrthoProjRatio > 0.0 )
              {
                OGLMatrix::multiply(&modelViewOrthoProj, &v29->m_OrthoView, &v29->m_OrthoProj);
                v25 = v158;
                v27 = v161;
              }
              m_pFigure = v29->m_pFigure;
              v33 = v28->TexID[0];
              v34 = *(_OWORD *)&v28->MatMapID[4];
              *(_OWORD *)texture = *(_OWORD *)v28->MatMapID;
              *(_QWORD *)v167 = *(_QWORD *)&v28->MatMapID[8];
              *(_OWORD *)v166 = v34;
              if ( v5 )
              {
                BlendMode = 0;
                EffectFlg = 0;
              }
              else
              {
                BlendMode = v28->BlendMode;
                EffectFlg = v28->EffectFlg;
              }
              if ( (v29->m_uiModeFlg & 4) != 0
                || v26->m_ShadowMapFlg && !v29->m_createShadowFlg
                || v26->m_NormalMapFlg && !v29->m_normalMapCreateFlg
                || v26->m_MaskPassFlg && !v29->m_createMaskFlg
                || v26->m_BloomPassFlg && (EffectFlg & 0x800000) == 0 )
              {
LABEL_499:
                v5 = bNotUseMat;
              }
              else
              {
                v37 = 256;
                if ( (EffectFlg & 0x100) != 0 )
                  v37 = 256;
                shader = 256;
                switch ( BlendMode )
                {
                  case 0u:
                    if ( (EffectFlg & 0x20) == 0 )
                      v37 = 4352;
                    shader = v37;
                    if ( m_DepthMask != 1 )
                    {
                      m_DepthMask = 1;
                      glDepthMask(1u);
                    }
                    if ( dword_140A9605C )
                    {
                      dword_140A9605C = 0;
                      glDisable(0xBE2u);
                    }
                    goto LABEL_115;
                  case 1u:
                    if ( v26->m_NormalRenderPassFlg )
                    {
                      if ( m_DepthMask == 1 )
                        goto LABEL_49;
                      m_DepthMask = 1;
                      v38 = 1;
                    }
                    else
                    {
                      if ( !m_DepthMask )
                        goto LABEL_49;
                      m_DepthMask = 0;
                      v38 = 0;
                    }
                    glDepthMask(v38);
LABEL_49:
                    if ( dword_140A9605C != 1 )
                    {
                      dword_140A9605C = 1;
                      glEnable(0xBE2u);
                    }
                    if ( m_Mode != 32774 )
                    {
                      m_Mode = 32774;
                      m_ModeAlpha = 32774;
                      _glewBlendEquation(0x8006u);
                    }
                    if ( m_Sfactor != 770 || m_Dfactor != 771 || m_SfactorAlpha != 1 || m_DfactorAlpha != 1 )
                    {
                      m_Sfactor = 770;
                      m_Dfactor = 771;
                      m_SfactorAlpha = 1;
                      m_DfactorAlpha = 1;
                      _glewBlendFuncSeparate(0x302u, 0x303u, 1u, 1u);
                    }
LABEL_115:
                    if ( (m_pFigure->m_iFormatType & 0x100) != 0 )
                    {
                      v37 |= 0x400u;
                      shader = v37;
                    }
                    if ( !v29->m_pfNormalCoord || (EffectFlg & 0x200) != 0 )
                    {
                      v37 &= 0xFFFFBF0F;
                      shader = v37;
                    }
                    if ( v33 > 0 && (EffectFlg & 0x800) == 0 )
                    {
                      v37 |= 0x800u;
                      shader = v37;
                    }
                    if ( (int)texture[1] > 0 && (EffectFlg & 0x2000) == 0 )
                    {
                      v37 |= 0x8000u;
                      shader = v37;
                    }
                    v42 = 2304;
                    v163 = EffectFlg & 0x1000;
                    if ( (EffectFlg & 0x1000) != 0 )
                      v42 = 2305;
                    glFrontFace(v42);
                    v164 = EffectFlg & 0x10;
                    if ( (EffectFlg & 0x10) != 0 && dword_140A96054 )
                    {
                      dword_140A96054 = 0;
                      glDisable(0xB44u);
                    }
                    m_iRenderNo = v159->m_iRenderNo;
                    if ( (int)m_iRenderNo < 0 )
                    {
                      v47 = v29->m_useShaderFX == 0;
                      v162 = v37;
                      if ( v47 )
                      {
                        if ( (v29->m_uiModeFlg & 0x200) != 0 )
                        {
                          v48 = 5812;
                          if ( v26->m_ShadowMapFlg )
                            v48 = 7912;
                          if ( v26->m_NormalMapFlg )
                            v48 = 7915;
                          if ( v26->m_PosMapFlg )
                            v48 = 7917;
                          if ( v26->m_MaskPassFlg )
                            v48 = 7919;
                        }
                        else
                        {
                          v48 = 0;
                          if ( v26->m_ShadowMapFlg )
                            v48 = 7911;
                          if ( v26->m_NormalMapFlg )
                            v48 = 7913;
                          if ( v26->m_PosMapFlg )
                            v48 = 7916;
                          if ( v26->m_MaskPassFlg )
                            v48 = 7918;
                        }
                      }
                      else
                      {
                        OGLRender::setFXShader(v26, &shader, v29, v43, v159, (int *)texture, EffectFlg);
                        v48 = shader;
                      }
                      v46 = v37 | 0x200;
                      v45 = v26->m_ShaderFXTbl[v48];
                    }
                    else
                    {
                      v45 = v26->m_pCustomShader[m_iRenderNo];
                      v46 = v37 & 0x1FFF;
                    }
                    if ( !v45 || !v45->m_Program )
                    {
                      v27 = v161;
                      v25 = v158;
                      v26 = v160;
                      goto LABEL_499;
                    }
                    KOFShaderManager::useProgramSlot(
                      (KOFShaderManager *)AgSingleton<KOFShaderManager>::ms_instance,
                      v45->m_programSlot);
                    v50 = v159->m_iRenderNo;
                    if ( (int)v50 >= 0 )
                    {
                      v51 = v160->m_pRenderFunc[v50];
                      if ( v51 )
                      {
                        v52 = v159;
                        v53 = v45;
                        v26 = v160;
                        v51(v160, v53, v159, v29);
LABEL_474:
                        v108 = v167[0];
                        goto $START_RENDER_DRAW;
                      }
                    }
                    OGLRender::setupShaderVariables(
                      v160,
                      &v160->m_ViewProj,
                      &modelViewOrthoProj,
                      v49,
                      v29,
                      MatMapID,
                      v45,
                      v159,
                      EffectFlg,
                      iChangeFlg);
                    OGLModel::checkCreateBuffers(v29);
                    _glewBindVertexArray(v29->m_iVaoID);
                    OGLModel::checkCreateBuffers(v29);
                    _glewBindBuffer(0x8892u, v29->vertexBuffer);
                    if ( v29->m_bVaoFlg )
                    {
                      glEnableVertexAttribArrayAG(0);
                      v54 = AgSingleton<KOFShaderManager>::ms_instance;
                      v55 = *(_DWORD *)AgSingleton<KOFShaderManager>::ms_instance[11
                                                                                * SLODWORD(AgSingleton<KOFShaderManager>::ms_instance[360450].__vftable)
                                                                                + 7].onSingletonInit;
                      renderSize = Framework::GLManager::glm->renderSize;
                      switch ( renderSize )
                      {
                        case 64:
                          v57 = 64;
                          break;
                        case 280:
                          v57 = 136;
                          break;
                        case 208:
                          v57 = 64;
                          break;
                        default:
                          v57 = 88;
                          if ( renderSize == 144 )
                            v57 = 144;
                          break;
                      }
                      if ( v55 >= 0 )
                      {
                        _glewVertexAttribPointer(v55, 3, 0x1406u, 0, v57, 0i64);
LABEL_179:
                        v54 = AgSingleton<KOFShaderManager>::ms_instance;
                      }
                    }
                    else
                    {
                      glEnableVertexAttribArrayAG(0);
                      v54 = AgSingleton<KOFShaderManager>::ms_instance;
                      v58 = *(_DWORD *)AgSingleton<KOFShaderManager>::ms_instance[11
                                                                                * SLODWORD(AgSingleton<KOFShaderManager>::ms_instance[360450].__vftable)
                                                                                + 7].onSingletonInit;
                      v59 = Framework::GLManager::glm->renderSize;
                      switch ( v59 )
                      {
                        case 64:
                          v60 = 64;
                          break;
                        case 280:
                          v60 = 136;
                          break;
                        case 208:
                          v60 = 64;
                          break;
                        default:
                          v60 = 88;
                          if ( v59 == 144 )
                            v60 = 144;
                          break;
                      }
                      if ( v58 >= 0 )
                      {
                        _glewVertexAttribPointer(v58, 3, 0x1406u, 0, v60, v29->m_pfVertexCoord);
                        goto LABEL_179;
                      }
                    }
                    if ( v162 == 7920 )
                    {
                      v26 = v160;
LABEL_473:
                      v52 = v159;
                      goto LABEL_474;
                    }
                    if ( (v46 & 0x200) == 0 )
                      goto LABEL_203;
                    if ( v29->m_bVaoFlg )
                    {
                      glEnableVertexAttribArrayAG(1u);
                      m_pfNormalCoord = 0i64;
                      v62 = Framework::GLManager::glm->renderSize;
                      v63 = *((_DWORD *)v54[11 * SLODWORD(v54[360450].__vftable) + 7].onSingletonInit + 1);
                      switch ( v62 )
                      {
                        case 64:
                          m_pfNormalCoord = 12i64;
                          break;
                        case 280:
                          v62 = 136;
                          m_pfNormalCoord = 12i64;
                          break;
                        case 208:
                          v62 = 64;
                          m_pfNormalCoord = 12i64;
                          break;
                        case 144:
                          v62 = 144;
                          break;
                        default:
                          v62 = 88;
                          m_pfNormalCoord = 12i64;
                          break;
                      }
                    }
                    else
                    {
                      glEnableVertexAttribArrayAG(1u);
                      m_pfNormalCoord = (__int64)v29->m_pfNormalCoord;
                      v62 = Framework::GLManager::glm->renderSize;
                      v63 = *((_DWORD *)v54[11 * SLODWORD(v54[360450].__vftable) + 7].onSingletonInit + 1);
                      if ( v62 != 64 )
                      {
                        switch ( v62 )
                        {
                          case 280:
                            v62 = 136;
                            break;
                          case 208:
                            v62 = 64;
                            break;
                          case 144:
                            v62 = 144;
                            goto LABEL_201;
                          default:
                            v62 = 88;
                            break;
                        }
                      }
                      m_pfNormalCoord += 12i64;
                    }
LABEL_201:
                    if ( v63 >= 0 )
                    {
                      _glewVertexAttribPointer(v63, 3, 0x1406u, 0, v62, (const void *)m_pfNormalCoord);
                      v54 = AgSingleton<KOFShaderManager>::ms_instance;
                    }
LABEL_203:
                    if ( (v46 & 0x8000) == 0 )
                      goto LABEL_228;
                    if ( v29->m_bVaoFlg )
                    {
                      glEnableVertexAttribArrayAG(2u);
                      m_pfTangentCoord = 0i64;
                      v65 = Framework::GLManager::glm->renderSize;
                      v66 = *((_DWORD *)v54[11 * SLODWORD(v54[360450].__vftable) + 7].onSingletonInit + 2);
                      switch ( v65 )
                      {
                        case 64:
                          goto LABEL_213;
                        case 280:
                          v65 = 136;
                          goto LABEL_213;
                        case 208:
                          v65 = 64;
                          goto LABEL_213;
                        case 144:
                          v65 = 144;
                          break;
                        default:
                          v65 = 88;
LABEL_213:
                          m_pfTangentCoord = 24i64;
                          break;
                      }
                      if ( v66 < 0 )
                        goto LABEL_228;
                      v67 = 4;
                      goto LABEL_227;
                    }
                    glEnableVertexAttribArrayAG(2u);
                    m_pfTangentCoord = (__int64)v29->m_pfTangentCoord;
                    v65 = Framework::GLManager::glm->renderSize;
                    v66 = *((_DWORD *)v54[11 * SLODWORD(v54[360450].__vftable) + 7].onSingletonInit + 2);
                    switch ( v65 )
                    {
                      case 64:
                        break;
                      case 280:
                        v65 = 136;
                        break;
                      case 208:
                        v65 = 64;
                        break;
                      case 144:
                        v65 = 144;
                        goto LABEL_225;
                      default:
                        v65 = 88;
                        break;
                    }
                    m_pfTangentCoord += 24i64;
LABEL_225:
                    if ( v66 < 0 )
                      goto LABEL_228;
                    v67 = 3;
LABEL_227:
                    _glewVertexAttribPointer(v66, v67, 0x1406u, 0, v65, (const void *)m_pfTangentCoord);
                    v54 = AgSingleton<KOFShaderManager>::ms_instance;
LABEL_228:
                    if ( (m_pFigure->m_iFormatType & 0x100) == 0 )
                      goto LABEL_250;
                    if ( v29->m_bVaoFlg )
                    {
                      glEnableVertexAttribArrayAG(3u);
                      m_piVerColor = 0i64;
                      v69 = Framework::GLManager::glm->renderSize;
                      v70 = *((_DWORD *)v54[11 * SLODWORD(v54[360450].__vftable) + 7].onSingletonInit + 3);
                      switch ( v69 )
                      {
                        case 64:
                          m_piVerColor = 40i64;
                          break;
                        case 280:
                          v69 = 16;
                          break;
                        case 208:
                          v69 = 64;
                          m_piVerColor = 40i64;
                          break;
                        case 144:
                          v69 = 144;
                          break;
                        default:
                          v69 = 88;
                          m_piVerColor = 40i64;
                          break;
                      }
                    }
                    else
                    {
                      glEnableVertexAttribArrayAG(3u);
                      m_piVerColor = (__int64)v29->m_piVerColor;
                      v69 = Framework::GLManager::glm->renderSize;
                      v70 = *((_DWORD *)v54[11 * SLODWORD(v54[360450].__vftable) + 7].onSingletonInit + 3);
                      if ( v69 != 64 )
                      {
                        switch ( v69 )
                        {
                          case 280:
                            v69 = 16;
                            goto LABEL_248;
                          case 208:
                            v69 = 64;
                            break;
                          case 144:
                            v69 = 144;
                            goto LABEL_248;
                          default:
                            v69 = 88;
                            break;
                        }
                      }
                      m_piVerColor += 40i64;
                    }
LABEL_248:
                    if ( v70 >= 0 )
                    {
                      _glewVertexAttribPointer(v70, 4, 0x1406u, 0, v69, (const void *)m_piVerColor);
                      v54 = AgSingleton<KOFShaderManager>::ms_instance;
                    }
LABEL_250:
                    v71 = EffectFlg & 0x40;
                    Colors = v159->Colors;
                    if ( Colors )
                    {
                      v47 = v71 == 0;
                      m_piGLUniform = v45->m_piGLUniform;
                      if ( v47 )
                        glUniform4fvAG(m_piGLUniform[5], 1, Colors);
                      else
                        glUniform4fAG(m_piGLUniform[5], *Colors, Colors[1], Colors[2], v159->fAlpha);
                    }
                    else
                    {
                      v47 = v71 == 0;
                      v73 = v45->m_piGLUniform;
                      if ( v47 )
                        glUniform4fAG(v73[5], 1.0, 1.0, 1.0, 1.0);
                      else
                        glUniform4fAG(v73[5], 1.0, 1.0, 1.0, v159->fAlpha);
                    }
                    if ( (v46 & 0x800) == 0 )
                    {
                      v26 = v160;
                      if ( !v160->m_ShadowMapFlg )
                      {
                        if ( v29->m_shadowTextureId == 2 )
                        {
                          if ( m_ActiveTexture != 8 )
                          {
                            m_ActiveTexture = 8;
                            _glewActiveTexture(0x84C8u);
                          }
                          ID = OGLTexture::getID(v26->m_renderTextures.m_ShadowDepthMap);
                          glsBindTexture(0xDE1u, ID);
                          if ( m_ActiveTexture != 9 )
                          {
                            m_ActiveTexture = 9;
                            _glewActiveTexture(0x84C9u);
                          }
                          v133 = OGLTexture::getID(v26->m_renderTextures.m_ShadowTransparencyMap);
                          glsBindTexture(0xDE1u, v133);
                          if ( m_ActiveTexture != 12 )
                          {
                            m_ActiveTexture = 12;
                            _glewActiveTexture(0x84CCu);
                          }
                          v134 = OGLTexture::getID(&v26->m_renderTextures.m_ShadowDepthMap[1]);
                          glsBindTexture(0xDE1u, v134);
                          if ( m_ActiveTexture != 13 )
                          {
                            m_ActiveTexture = 13;
                            _glewActiveTexture(0x84CDu);
                          }
                          v135 = &v26->m_renderTextures.m_ShadowTransparencyMap[1];
                        }
                        else
                        {
                          if ( m_ActiveTexture != 8 )
                          {
                            m_ActiveTexture = 8;
                            _glewActiveTexture(0x84C8u);
                          }
                          v137 = OGLTexture::getID(&v26->m_renderTextures.m_ShadowDepthMap[v29->m_shadowTextureId]);
                          glsBindTexture(0xDE1u, v137);
                          if ( m_ActiveTexture != 9 )
                          {
                            m_ActiveTexture = 9;
                            _glewActiveTexture(0x84C9u);
                          }
                          v138 = OGLTexture::getID(&v26->m_renderTextures.m_ShadowTransparencyMap[v29->m_shadowTextureId]);
                          glsBindTexture(0xDE1u, v138);
                          if ( m_ActiveTexture != 12 )
                          {
                            m_ActiveTexture = 12;
                            _glewActiveTexture(0x84CCu);
                          }
                          v139 = OGLTexture::getID(&v26->m_renderTextures.m_ShadowDepthMap[v29->m_shadowTextureId]);
                          glsBindTexture(0xDE1u, v139);
                          if ( m_ActiveTexture != 13 )
                          {
                            m_ActiveTexture = 13;
                            _glewActiveTexture(0x84CDu);
                          }
                          v135 = &v26->m_renderTextures.m_ShadowTransparencyMap[v29->m_shadowTextureId];
                        }
                        v136 = OGLTexture::getID(v135);
                        glsBindTexture(0xDE1u, v136);
                      }
                      goto LABEL_473;
                    }
                    if ( (EffectFlg & 0x4000) != 0 )
                    {
                      v47 = v29->m_bVaoFlg == 0;
                      v175[0] = 4;
                      v175[1] = 5;
                      v175[2] = 6;
                      if ( v47 )
                      {
                        v78 = 0;
                        if ( (int)m_pFigure->m_uiMultiUvCount > 0 )
                        {
                          v79 = (unsigned int *)v175;
                          m_pfTexCoord = (const void **)v29->m_pfTexCoord;
                          do
                          {
                            glEnableVertexAttribArrayAG(*v79);
                            glVertexAttribPointerAG(*v79, 2, v81, 0, pStack, *m_pfTexCoord);
                            ++v78;
                            ++m_pfTexCoord;
                            ++v79;
                          }
                          while ( v78 < (signed int)m_pFigure->m_uiMultiUvCount );
                        }
                      }
                      else
                      {
                        v75 = 0;
                        if ( (int)m_pFigure->m_uiMultiUvCount > 0 )
                        {
                          v76 = (unsigned int *)v175;
                          do
                          {
                            glEnableVertexAttribArrayAG(*v76);
                            glVertexAttribPointerAG(*v76, 2, v77, 0, pStack, 0i64);
                            ++v75;
                            ++v76;
                          }
                          while ( v75 < (signed int)m_pFigure->m_uiMultiUvCount );
                        }
                      }
                      v52 = v159;
                      if ( v159->TexID[0] )
                      {
                        if ( m_ActiveTexture )
                        {
                          m_ActiveTexture = 0;
                          _glewActiveTexture(0x84C0u);
                        }
                        glsBindTexture(0xDE1u, v52->TexID[0]);
                        if ( m_ActiveTexture != 10 )
                        {
                          m_ActiveTexture = 10;
                          _glewActiveTexture(0x84CAu);
                        }
                        glsBindTexture(0xDE1u, v52->TexID[0]);
                        if ( m_ActiveTexture != 11 )
                        {
                          m_ActiveTexture = 11;
                          _glewActiveTexture(0x84CBu);
                        }
                        glsBindTexture(0xDE1u, v52->TexID[0]);
                      }
                      goto LABEL_314;
                    }
                    v82 = EffectFlg & 0x700000;
                    if ( v82 )
                    {
                      if ( v29->m_bVaoFlg )
                      {
                        glEnableVertexAttribArrayAG(4u);
                        glVertexAttribPointerAG(4u, 2, v83, 0, pStack, 0i64);
                        glEnableVertexAttribArrayAG(5u);
                        glVertexAttribPointerAG(5u, 2, v84, 0, pStacka, 0i64);
                      }
                      else
                      {
                        glEnableVertexAttribArrayAG(4u);
                        glVertexAttribPointerAG(4u, 2, v85, 0, pStack, v29->m_pfTexCoord[0]);
                        glEnableVertexAttribArrayAG(5u);
                        glVertexAttribPointerAG(5u, 2, v86, 0, pStackb, v29->m_pfTexCoord[1]);
                      }
                      goto LABEL_300;
                    }
                    if ( v29->m_bVaoFlg )
                    {
                      glEnableVertexAttribArrayAG(4u);
                      v87 = 0i64;
                      v88 = Framework::GLManager::glm->renderSize;
                      v89 = *((_DWORD *)v54[11 * SLODWORD(v54[360450].__vftable) + 7].onSingletonInit + 4);
                      switch ( v88 )
                      {
                        case 64:
                          v87 = 56i64;
                          break;
                        case 280:
                          v88 = 8;
                          break;
                        case 208:
                          v88 = 64;
                          v87 = 56i64;
                          break;
                        case 144:
                          v88 = 144;
                          break;
                        default:
                          v88 = 88;
                          v87 = 56i64;
                          break;
                      }
                    }
                    else
                    {
                      glEnableVertexAttribArrayAG(4u);
                      v87 = (__int64)v29->m_pfTexCoord[0];
                      v88 = Framework::GLManager::glm->renderSize;
                      v89 = *((_DWORD *)v54[11 * SLODWORD(v54[360450].__vftable) + 7].onSingletonInit + 4);
                      if ( v88 != 64 )
                      {
                        switch ( v88 )
                        {
                          case 280:
                            v88 = 8;
                            goto LABEL_298;
                          case 208:
                            v88 = 64;
                            break;
                          case 144:
                            v88 = 144;
                            goto LABEL_298;
                          default:
                            v88 = 88;
                            break;
                        }
                      }
                      v87 += 56i64;
                    }
LABEL_298:
                    if ( v89 >= 0 )
                      _glewVertexAttribPointer(v89, 2, 0x1406u, 0, v88, (const void *)v87);
LABEL_300:
                    if ( v82 )
                    {
                      if ( m_ActiveTexture )
                      {
                        m_ActiveTexture = 0;
                        _glewActiveTexture(0x84C0u);
                      }
                      v52 = v159;
                      glsBindTexture(0xDE1u, v159->TexID[0]);
                      if ( m_ActiveTexture != 10 )
                      {
                        m_ActiveTexture = 10;
                        _glewActiveTexture(0x84CAu);
                      }
                      v90 = v52->TexID[1];
                      if ( !v90 )
                        v90 = v52->TexID[0];
                      glsBindTexture(0xDE1u, v90);
                      if ( m_ActiveTexture != 11 )
                      {
                        m_ActiveTexture = 11;
                        _glewActiveTexture(0x84CBu);
                      }
                      v91 = v52->TexID[2];
                      if ( !v91 )
                        v91 = v52->TexID[0];
                      goto LABEL_322;
                    }
                    if ( m_ActiveTexture )
                    {
                      m_ActiveTexture = 0;
                      _glewActiveTexture(0x84C0u);
                    }
                    glsBindTexture(0xDE1u, v33);
                    v52 = v159;
LABEL_314:
                    if ( v52->TexID[1] )
                    {
                      if ( m_ActiveTexture != 10 )
                      {
                        m_ActiveTexture = 10;
                        _glewActiveTexture(0x84CAu);
                      }
                      glsBindTexture(0xDE1u, v52->TexID[1]);
                    }
                    if ( v52->TexID[2] )
                    {
                      if ( m_ActiveTexture != 11 )
                      {
                        m_ActiveTexture = 11;
                        _glewActiveTexture(0x84CBu);
                      }
                      v91 = v52->TexID[2];
LABEL_322:
                      glsBindTexture(0xDE1u, v91);
                    }
                    v26 = v160;
                    if ( !v160->m_ShadowMapFlg )
                    {
                      if ( v29->m_shadowTextureId == 2 )
                      {
                        if ( m_ActiveTexture != 8 )
                        {
                          m_ActiveTexture = 8;
                          _glewActiveTexture(0x84C8u);
                        }
                        v92 = OGLTexture::getID(v26->m_renderTextures.m_ShadowDepthMap);
                        glsBindTexture(0xDE1u, v92);
                        if ( m_ActiveTexture != 9 )
                        {
                          m_ActiveTexture = 9;
                          _glewActiveTexture(0x84C9u);
                        }
                        v93 = OGLTexture::getID(v26->m_renderTextures.m_ShadowTransparencyMap);
                        glsBindTexture(0xDE1u, v93);
                        if ( m_ActiveTexture != 12 )
                        {
                          m_ActiveTexture = 12;
                          _glewActiveTexture(0x84CCu);
                        }
                        v94 = OGLTexture::getID(&v26->m_renderTextures.m_ShadowDepthMap[1]);
                        glsBindTexture(0xDE1u, v94);
                        if ( m_ActiveTexture != 13 )
                        {
                          m_ActiveTexture = 13;
                          _glewActiveTexture(0x84CDu);
                        }
                        v95 = &v26->m_renderTextures.m_ShadowTransparencyMap[1];
                      }
                      else
                      {
                        if ( m_ActiveTexture != 8 )
                        {
                          m_ActiveTexture = 8;
                          _glewActiveTexture(0x84C8u);
                        }
                        v96 = OGLTexture::getID(&v26->m_renderTextures.m_ShadowDepthMap[v29->m_shadowTextureId]);
                        glsBindTexture(0xDE1u, v96);
                        if ( m_ActiveTexture != 9 )
                        {
                          m_ActiveTexture = 9;
                          _glewActiveTexture(0x84C9u);
                        }
                        v97 = OGLTexture::getID(&v26->m_renderTextures.m_ShadowTransparencyMap[v29->m_shadowTextureId]);
                        glsBindTexture(0xDE1u, v97);
                        if ( m_ActiveTexture != 12 )
                        {
                          m_ActiveTexture = 12;
                          _glewActiveTexture(0x84CCu);
                        }
                        v98 = OGLTexture::getID(&v26->m_renderTextures.m_ShadowDepthMap[v29->m_shadowTextureId]);
                        glsBindTexture(0xDE1u, v98);
                        if ( m_ActiveTexture != 13 )
                        {
                          m_ActiveTexture = 13;
                          _glewActiveTexture(0x84CDu);
                        }
                        v95 = &v26->m_renderTextures.m_ShadowTransparencyMap[v29->m_shadowTextureId];
                      }
                      v99 = OGLTexture::getID(v95);
                      glsBindTexture(0xDE1u, v99);
                    }
                    v100 = texture[1];
                    if ( (int)texture[1] > 0 )
                    {
                      if ( m_ActiveTexture != 1 )
                      {
                        m_ActiveTexture = 1;
                        _glewActiveTexture(0x84C1u);
                      }
                      glsBindTexture(0xDE1u, v100);
                    }
                    v101 = texture[2];
                    if ( (int)texture[2] > 0 )
                    {
                      if ( m_ActiveTexture != 2 )
                      {
                        m_ActiveTexture = 2;
                        _glewActiveTexture(0x84C2u);
                      }
                      glsBindTexture(0xDE1u, v101);
                    }
                    v102 = texture[3];
                    if ( (int)texture[3] > 0 )
                    {
                      if ( m_ActiveTexture != 3 )
                      {
                        m_ActiveTexture = 3;
                        _glewActiveTexture(0x84C3u);
                      }
                      glsBindTexture(0xDE1u, v102);
                    }
                    v103 = v166[0];
                    if ( (int)v166[0] > 0 )
                    {
                      if ( m_ActiveTexture != 4 )
                      {
                        m_ActiveTexture = 4;
                        _glewActiveTexture(0x84C4u);
                      }
                      glsBindTexture(0xDE1u, v103);
                    }
                    v104 = v166[1];
                    if ( (int)v166[1] > 0 )
                    {
                      if ( m_ActiveTexture != 5 )
                      {
                        m_ActiveTexture = 5;
                        _glewActiveTexture(0x84C5u);
                      }
                      glsBindTexture(0xDE1u, v104);
                    }
                    v105 = v166[2];
                    if ( (int)v166[2] > 0 )
                    {
                      if ( m_ActiveTexture != 6 )
                      {
                        m_ActiveTexture = 6;
                        _glewActiveTexture(0x84C6u);
                      }
                      glsBindTexture(0xDE1u, v105);
                    }
                    v106 = v166[3];
                    if ( (int)v166[3] > 0 )
                    {
                      if ( m_ActiveTexture != 7 )
                      {
                        m_ActiveTexture = 7;
                        _glewActiveTexture(0x84C7u);
                      }
                      glsBindTexture(0xDE1u, v106);
                    }
                    v107 = v167[1];
                    if ( (int)v167[1] > 0 )
                    {
                      if ( m_ActiveTexture != 14 )
                      {
                        m_ActiveTexture = 14;
                        _glewActiveTexture(0x84CEu);
                      }
                      glsBindTexture(0xDE1u, v107);
                    }
                    v108 = v167[0];
                    if ( (int)v167[0] > 0 )
                    {
                      if ( m_ActiveTexture != 13 )
                      {
                        m_ActiveTexture = 13;
                        _glewActiveTexture(0x84CDu);
                      }
                      glsBindTexture(0xDE1u, v108);
                    }
                    if ( v29->m_modelFXFlg == -10 )
                    {
                      v109 = v29->m_pEffectTexture[0];
                      if ( v109 )
                      {
                        if ( v109->m_TexID != -1 )
                        {
                          if ( m_ActiveTexture != 15 )
                          {
                            m_ActiveTexture = 15;
                            _glewActiveTexture(0x84CFu);
                          }
                          v110 = v29->m_pEffectTexture[0];
                          if ( v110 )
                            m_TexID = v110->m_TexID;
                          else
                            m_TexID = -1;
                          glsBindTexture(0xDE1u, m_TexID);
                        }
                      }
                    }
                    if ( v29->m_modelFXFlg == -20 )
                    {
                      v112 = v29->m_pEffectTexture[1];
                      if ( v112 )
                      {
                        if ( v112->m_TexID != -1 )
                        {
                          if ( m_ActiveTexture != 15 )
                          {
                            m_ActiveTexture = 15;
                            _glewActiveTexture(0x84CFu);
                          }
                          v113 = v29->m_pEffectTexture[1];
                          if ( v113 )
                            v114 = v113->m_TexID;
                          else
                            v114 = -1;
                          glsBindTexture(0xDE1u, v114);
                        }
                      }
                    }
                    if ( v29->m_modelFXFlg == -30 )
                    {
                      v115 = v29->m_pEffectTexture[2];
                      if ( v115 )
                      {
                        if ( v115->m_TexID != -1 )
                        {
                          if ( m_ActiveTexture != 15 )
                          {
                            m_ActiveTexture = 15;
                            _glewActiveTexture(0x84CFu);
                          }
                          v116 = v29->m_pEffectTexture[2];
                          if ( v116 )
                            v117 = v116->m_TexID;
                          else
                            v117 = -1;
                          glsBindTexture(0xDE1u, v117);
                        }
                      }
                    }
                    if ( v29->m_modelFXFlg == -40 )
                    {
                      v118 = v29->m_pEffectTexture[5];
                      if ( v118 )
                      {
                        if ( v118->m_TexID != -1 )
                        {
                          if ( m_ActiveTexture != 15 )
                          {
                            m_ActiveTexture = 15;
                            _glewActiveTexture(0x84CFu);
                          }
                          v119 = v29->m_pEffectTexture[5];
                          if ( v119 )
                            v120 = v119->m_TexID;
                          else
                            v120 = -1;
                          glsBindTexture(0xDE1u, v120);
                        }
                      }
                    }
                    if ( v29->m_modelFXFlg == 10 )
                    {
                      v121 = v29->m_pEffectTexture[3];
                      if ( v121 )
                      {
                        if ( v121->m_TexID != -1 )
                        {
                          if ( m_ActiveTexture != 15 )
                          {
                            m_ActiveTexture = 15;
                            _glewActiveTexture(0x84CFu);
                          }
                          v122 = v29->m_pEffectTexture[3];
                          if ( v122 )
                            v123 = v122->m_TexID;
                          else
                            v123 = -1;
                          glsBindTexture(0xDE1u, v123);
                        }
                      }
                    }
                    if ( v29->m_modelFXFlg == 11 )
                    {
                      v124 = v29->m_pEffectTexture[4];
                      if ( v124 )
                      {
                        if ( v124->m_TexID != -1 )
                        {
                          if ( m_ActiveTexture != 15 )
                          {
                            m_ActiveTexture = 15;
                            _glewActiveTexture(0x84CFu);
                          }
                          v125 = v29->m_pEffectTexture[4];
                          if ( v125 )
                            v126 = v125->m_TexID;
                          else
                            v126 = -1;
                          glsBindTexture(0xDE1u, v126);
                        }
                      }
                    }
                    if ( v29->m_modelFXFlg == 12 )
                    {
                      v127 = v29->m_pEffectTexture[7];
                      if ( v127 )
                      {
                        if ( v127->m_TexID != -1 )
                        {
                          if ( m_ActiveTexture != 15 )
                          {
                            m_ActiveTexture = 15;
                            _glewActiveTexture(0x84CFu);
                          }
                          v128 = v29->m_pEffectTexture[7];
                          if ( v128 )
                            v129 = v128->m_TexID;
                          else
                            v129 = -1;
                          glsBindTexture(0xDE1u, v129);
                        }
                      }
                    }
                    if ( v29->m_modelFXFlg == 1 )
                    {
                      v130 = v29->m_pEffectTexture[6];
                      if ( v130 )
                      {
                        if ( v130->m_TexID != -1 )
                        {
                          if ( m_ActiveTexture != 15 )
                          {
                            m_ActiveTexture = 15;
                            _glewActiveTexture(0x84CFu);
                          }
                          v131 = v29->m_pEffectTexture[6];
                          if ( v131 )
                            glsBindTexture(0xDE1u, v131->m_TexID);
                          else
                            glsBindTexture(0xDE1u, 0xFFFFFFFF);
                        }
                      }
                    }
$START_RENDER_DRAW:
                    if ( (v29->m_uiModeFlg & 0x20) != 0 && !v26->m_ShadowMapFlg && !v26->m_DepthPassFlg )
                      goto LABEL_480;
                    if ( v29->m_bVaoFlg )
                    {
                      OGLModel::checkCreateBuffers(v29);
                      _glewBindVertexArray(v29->m_iVaoID);
                      _glewBindBuffer(0x8893u, v29->indexBuffer[v52->MatNo]);
                      glDrawElementsAG(4u, v52->sIndexCount, 0x1405u, 0i64);
                      _glewBindBuffer(0x8893u, 0);
                      _glewBindBuffer(0x8892u, 0);
                      _glewBindVertexArray(0);
LABEL_480:
                      v5 = bNotUseMat;
                    }
                    else
                    {
                      v5 = bNotUseMat;
                      if ( bNotUseMat && v29->m_bMaterialShadowVisible[v52->MatNo] )
                      {
                        m_pusIndexShadow = v29->m_pusIndexShadow;
                        m_usIndexShadowCount = v29->m_usIndexShadowCount;
                        if ( m_pusIndexShadow )
                          goto LABEL_494;
                        glDrawElementsAG(4u, m_usIndexShadowCount, 0x1403u, v29->m_pussIndexShadow);
                      }
                      else
                      {
                        m_pusIndexShadow = v52->pIndex;
                        m_usIndexShadowCount = v52->sIndexCount;
                        if ( m_pusIndexShadow )
                        {
LABEL_494:
                          glDrawElementsAG(4u, m_usIndexShadowCount, 0x1405u, m_pusIndexShadow);
                          goto LABEL_481;
                        }
                        glDrawElementsAG(4u, m_usIndexShadowCount, 0x1403u, v52->pSIndex);
                      }
                    }
LABEL_481:
                    if ( v108 > 0 )
                    {
                      if ( m_ActiveTexture != 13 )
                      {
                        m_ActiveTexture = 13;
                        _glewActiveTexture(0x84CDu);
                      }
                      glsBindTexture(0xDE1u, 0);
                    }
                    if ( v163 )
                      glFrontFace(0x901u);
                    if ( v164 )
                    {
                      glsCheckFlg(0xB44u, 1);
                      glCullFace(0x405u);
                    }
                    v25 = v158;
                    v27 = v161;
                    if ( v26->m_NormalRenderPassFlg )
                    {
                      v140 = *(_OWORD *)&v26->m_View.m[4];
                      *(_OWORD *)v26->m_prevView.m = *(_OWORD *)v26->m_View.m;
                      v141 = *(_OWORD *)&v26->m_View.m[8];
                      *(_OWORD *)&v26->m_prevView.m[4] = v140;
                      v142 = *(_OWORD *)&v26->m_View.m[12];
                      *(_OWORD *)&v26->m_prevView.m[8] = v141;
                      *(_OWORD *)&v26->m_prevView.m[12] = v142;
                    }
                    break;
                  case 2u:
                    v37 = 256;
                    shader = 256;
                    if ( m_DepthMask )
                    {
                      m_DepthMask = 0;
                      glDepthMask(0);
                    }
                    if ( dword_140A9605C != 1 )
                    {
                      dword_140A9605C = 1;
                      glEnable(0xBE2u);
                    }
                    if ( m_Mode == 32774 )
                      goto LABEL_65;
                    m_Mode = 32774;
                    v39 = 32774;
                    m_ModeAlpha = 32774;
                    goto LABEL_64;
                  case 3u:
                    v37 = 256;
                    shader = 256;
                    if ( m_DepthMask )
                    {
                      m_DepthMask = 0;
                      glDepthMask(0);
                    }
                    if ( dword_140A9605C != 1 )
                    {
                      dword_140A9605C = 1;
                      glEnable(0xBE2u);
                    }
                    if ( m_Mode != 32778 )
                    {
                      m_Mode = 32778;
                      v39 = 32778;
                      m_ModeAlpha = 32778;
LABEL_64:
                      _glewBlendEquation(v39);
                    }
LABEL_65:
                    if ( m_Sfactor == 1 && m_Dfactor == 1 )
                      goto LABEL_115;
                    v40 = 1;
                    m_Sfactor = 1;
                    v41 = 1;
                    m_SfactorAlpha = 1;
                    goto LABEL_113;
                  case 4u:
                    v37 = 256;
                    shader = 256;
                    if ( m_DepthMask )
                    {
                      m_DepthMask = 0;
                      glDepthMask(0);
                    }
                    if ( dword_140A9605C != 1 )
                    {
                      dword_140A9605C = 1;
                      glEnable(0xBE2u);
                    }
                    if ( m_Mode != 32774 )
                    {
                      m_Mode = 32774;
                      m_ModeAlpha = 32774;
                      _glewBlendEquation(0x8006u);
                    }
                    if ( m_Sfactor == 770 && m_Dfactor == 1 )
                      goto LABEL_115;
                    m_Sfactor = 770;
                    v41 = 770;
                    m_SfactorAlpha = 770;
                    goto LABEL_112;
                  case 7u:
                    v37 = 256;
                    shader = 256;
                    if ( m_DepthMask )
                    {
                      m_DepthMask = 0;
                      glDepthMask(0);
                    }
                    if ( dword_140A9605C != 1 )
                    {
                      dword_140A9605C = 1;
                      glEnable(0xBE2u);
                    }
                    if ( m_Mode != 32778 )
                    {
                      m_Mode = 32778;
                      m_ModeAlpha = 32778;
                      _glewBlendEquation(0x800Au);
                    }
                    goto LABEL_89;
                  case 8u:
                    v37 = 256;
                    shader = 256;
                    if ( m_DepthMask )
                    {
                      m_DepthMask = 0;
                      glDepthMask(0);
                    }
                    if ( dword_140A9605C != 1 )
                    {
                      dword_140A9605C = 1;
                      glEnable(0xBE2u);
                    }
                    if ( m_Mode != 32774 )
                    {
                      m_Mode = 32774;
                      m_ModeAlpha = 32774;
                      _glewBlendEquation(0x8006u);
                    }
                    if ( m_Sfactor == 768 && m_Dfactor == 1 )
                      goto LABEL_115;
                    m_Sfactor = 768;
                    v41 = 768;
                    m_SfactorAlpha = 768;
LABEL_112:
                    v40 = 1;
LABEL_113:
                    m_Dfactor = 1;
                    m_DfactorAlpha = 1;
                    goto LABEL_114;
                  case 9u:
                    v37 = 256;
                    shader = 256;
                    if ( m_DepthMask )
                    {
                      m_DepthMask = 0;
                      glDepthMask(0);
                    }
                    if ( dword_140A9605C != 1 )
                    {
                      dword_140A9605C = 1;
                      glEnable(0xBE2u);
                    }
                    if ( m_Mode != 32774 )
                    {
                      m_Mode = 32774;
                      m_ModeAlpha = 32774;
                      _glewBlendEquation(0x8006u);
                    }
                    if ( m_blendColorR != 0.0 || m_blendColorG != 0.0 || m_blendColorB != 0.0 || 1.0 != m_blendColorA )
                    {
                      m_blendColorR = 0.0;
                      m_blendColorG = 0.0;
                      m_blendColorB = 0.0;
                      m_blendColorA = 1.0;
                      _glewBlendColor(0.0, 0.0, 0.0, 1.0);
                    }
LABEL_89:
                    if ( m_Sfactor == 770 && m_Dfactor == 32771 )
                      goto LABEL_115;
                    m_Sfactor = 770;
                    v40 = 32771;
                    m_Dfactor = 32771;
                    v41 = 770;
                    m_SfactorAlpha = 770;
                    m_DfactorAlpha = 32771;
LABEL_114:
                    glBlendFunc(v41, v40);
                    goto LABEL_115;
                  default:
                    goto LABEL_115;
                }
              }
            }
          }
        }
        v145 = v26->m_RenderStackNo;
        ++v25;
        v24 = (__int64)v169;
        ++v27;
        v158 = v25;
        v161 = v27;
      }
      while ( v25 < (signed int)v26->m_sModelStackCount[v145] );
      v6 = v157;
    }
    v146 = m_ActiveTexture;
    if ( m_ActiveTexture != 1 )
    {
      m_ActiveTexture = 1;
      _glewActiveTexture(0x84C1u);
      v146 = m_ActiveTexture;
    }
    v147 = Framework::GLManager::glm;
    ::m_TexID[v146] = 0;
    v147->m_textureID = 0;
    while ( v147->m_bOpenGLBlocked )
      ;
    glBindTexture(0xDE1u, 0);
    v148 = m_ActiveTexture;
    if ( m_ActiveTexture )
    {
      m_ActiveTexture = 0;
      _glewActiveTexture(0x84C0u);
      v148 = m_ActiveTexture;
    }
    v149 = Framework::GLManager::glm;
    ::m_TexID[v148] = 0;
    v149->m_textureID = 0;
    while ( v149->m_bOpenGLBlocked )
      ;
    glBindTexture(0xDE1u, 0);
    if ( m_DepthMask != 1 )
    {
      m_DepthMask = 1;
      glDepthMask(1u);
    }
    if ( v6 )
    {
      v150 = v26->m_RenderStackNo;
      if ( (int)v150 < 0 )
      {
        *(_QWORD *)v26->m_sModelStackCount = 0i64;
        *(_QWORD *)&v26->m_sModelStackCount[2] = 0i64;
        *(_QWORD *)&v26->m_sModelStackCount[4] = 0i64;
        *(_QWORD *)&v26->m_sModelStackCount[6] = 0i64;
      }
      else if ( (int)v150 < 8 )
      {
        v26->m_sModelStackCount[v150] = 0;
      }
    }
  }
}

void __fastcall OGLRender::drawTexture(
        OGLRender *this,
        unsigned int textureId,
        MeshVertexInfo2D *pCoord,
        unsigned int color)
{
  OGLShader *v4; // r12
  Framework::GLManager *v8; // r13
  int v9; // edi
  AgFrameAllocator<AgAllocator<1> > *p_m_agDrawAllocator; // rcx
  unsigned __int64 v11; // r8
  char *v12; // rax
  unsigned __int8 v13; // r8
  char *v14; // rsi
  __int64 v15; // rcx
  __int128 v16; // xmm0
  float v17; // xmm0_4
  float v18; // xmm1_4
  int *m_piGLUniform; // rax
  int v20; // ecx
  int UniformLocation; // eax
  AgSingleton<KOFShaderManager> *v22; // rbx
  __int64 v23; // rcx
  signed int v24; // er10
  int renderSize; // ecx
  int v26; // eax
  __int64 v27; // rcx
  int v28; // edx
  int v29; // eax
  signed int v30; // ecx
  unsigned int v31; // eax
  unsigned int v32; // ecx
  Framework::GLManager *v33; // rcx
  OGLMatrix v34; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v35; // [rsp+78h] [rbp-90h]
  __int128 v36; // [rsp+88h] [rbp-80h]
  __int128 v37; // [rsp+98h] [rbp-70h]
  __int128 v38; // [rsp+A8h] [rbp-60h]
  float value[4]; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v40; // [rsp+C8h] [rbp-40h]
  __int128 v41; // [rsp+D8h] [rbp-30h]
  __int128 v42; // [rsp+E8h] [rbp-20h]

  v4 = this->m_ShaderFXTbl[7999];
  if ( !v4 || !v4->m_Program )
    return;
  memset(&v34, 0, sizeof(v34));
  OGLMatrix::multiply(&v34, &this->m_View, &this->m_Proj);
  KOFShaderManager::useProgramSlot((KOFShaderManager *)AgSingleton<KOFShaderManager>::ms_instance, v4->m_programSlot);
  v8 = Framework::GLManager::glm;
  v9 = 64;
  p_m_agDrawAllocator = &Framework::GLManager::glm->m_agDrawAllocator;
  Framework::GLManager::glm->renderSize = 64;
  v12 = (char *)AgFrameAllocator<AgAllocator<1>>::allocate(p_m_agDrawAllocator, 0x100ui64, v11);
  v14 = v12;
  v15 = 2i64;
  do
  {
    v12 += 128;
    v16 = *(_OWORD *)&pCoord->m_position.x;
    pCoord += 2;
    *((_OWORD *)v12 - 8) = v16;
    *((_OWORD *)v12 - 7) = *(_OWORD *)&pCoord[-2].m_normal.y;
    *((_OWORD *)v12 - 6) = *(_OWORD *)&pCoord[-2].m_tangent.z;
    *((_OWORD *)v12 - 5) = *(_OWORD *)&pCoord[-2].m_color.z;
    *((_OWORD *)v12 - 4) = *(_OWORD *)&pCoord[-1].m_position.x;
    *((_OWORD *)v12 - 3) = *(_OWORD *)&pCoord[-1].m_normal.y;
    *((_OWORD *)v12 - 2) = *(_OWORD *)&pCoord[-1].m_tangent.z;
    *((_OWORD *)v12 - 1) = *(_OWORD *)&pCoord[-1].m_color.z;
    --v15;
  }
  while ( v15 );
  *(_QWORD *)&v35 = __PAIR64__(LODWORD(v34.m[4]), LODWORD(v34.m[0]));
  *(_QWORD *)&v36 = __PAIR64__(LODWORD(v34.m[5]), LODWORD(v34.m[1]));
  *(_QWORD *)&v37 = __PAIR64__(LODWORD(v34.m[6]), LODWORD(v34.m[2]));
  *(_QWORD *)&v38 = __PAIR64__(LODWORD(v34.m[7]), LODWORD(v34.m[3]));
  *((_QWORD *)&v35 + 1) = __PAIR64__(LODWORD(v34.m[12]), LODWORD(v34.m[8]));
  *((_QWORD *)&v36 + 1) = __PAIR64__(LODWORD(v34.m[13]), LODWORD(v34.m[9]));
  DWORD2(v37) = LODWORD(v34.m[10]);
  DWORD2(v38) = LODWORD(v34.m[11]);
  v17 = v34.m[14];
  v18 = v34.m[15];
  v8->m_vertexInfoCount = 4;
  m_piGLUniform = v4->m_piGLUniform;
  *((float *)&v37 + 3) = v17;
  *((float *)&v38 + 3) = v18;
  v20 = *m_piGLUniform;
  *(_OWORD *)value = v35;
  v40 = v36;
  v41 = v37;
  v42 = v38;
  glUniformMatrix4fvAG(v20, 1, v13, value);
  UniformLocation = _glewGetUniformLocation(v4->m_Program, "brightness");
  _glewUniform1fv(UniformLocation, 1, &globalBrightness);
  v22 = AgSingleton<KOFShaderManager>::ms_instance;
  v23 = *(unsigned int *)AgSingleton<KOFShaderManager>::ms_instance[11
                                                                  * SLODWORD(AgSingleton<KOFShaderManager>::ms_instance[360450].__vftable)
                                                                  + 7].onSingletonInit;
  if ( (unsigned int)v23 < g_maxEnabledVertexAttribArrays )
  {
    g_vertexAttribIndex[v23] = 0;
    g_pendingVertexAttribArrays |= 1 << v23;
  }
  v24 = *(_DWORD *)v22[11 * SLODWORD(v22[360450].__vftable) + 7].onSingletonInit;
  renderSize = Framework::GLManager::glm->renderSize;
  switch ( renderSize )
  {
    case 64:
      v26 = 64;
      break;
    case 280:
      v26 = 136;
      break;
    case 208:
      v26 = 64;
      break;
    default:
      v26 = 88;
      if ( renderSize == 144 )
        v26 = 144;
      break;
  }
  if ( v24 >= 0 )
  {
    _glewVertexAttribPointer(v24, 3, 0x1406u, 0, v26, v14);
    v22 = AgSingleton<KOFShaderManager>::ms_instance;
  }
  this->vColor[1] = 0.99449998;
  this->vColor[0] = 0.99449998;
  this->vColor[2] = 0.99449998;
  this->vColor[3] = 0.99449998;
  glUniform4fvAG(v4->m_piGLUniform[1], 1, this->vColor);
  v27 = *((unsigned int *)v22[11 * SLODWORD(v22[360450].__vftable) + 7].onSingletonInit + 4);
  if ( (unsigned int)v27 < g_maxEnabledVertexAttribArrays )
  {
    g_pendingVertexAttribArrays |= 1 << v27;
    g_vertexAttribIndex[v27] = 4;
  }
  v28 = (int)Framework::GLManager::glm;
  v29 = Framework::GLManager::glm->renderSize;
  v30 = *((_DWORD *)v22[11 * SLODWORD(v22[360450].__vftable) + 7].onSingletonInit + 4);
  if ( v29 == 64 )
    goto LABEL_26;
  if ( v29 != 280 )
  {
    if ( v29 != 208 )
    {
      if ( v29 == 144 )
      {
        v9 = 144;
        goto LABEL_27;
      }
      v9 = 88;
    }
LABEL_26:
    v14 += 56;
    goto LABEL_27;
  }
  v9 = 8;
LABEL_27:
  if ( v30 >= 0 )
    _glewVertexAttribPointer(v30, 2, 0x1406u, 0, v9, v14);
  v31 = m_ActiveTexture;
  if ( m_ActiveTexture )
  {
    m_ActiveTexture = 0;
    _glewActiveTexture(0x84C0u);
    v31 = m_ActiveTexture;
  }
  v32 = v31;
  if ( textureId != m_TexID[v31] || !textureId )
  {
    m_TexID[v31] = textureId;
    v33 = Framework::GLManager::glm;
    Framework::GLManager::glm->m_textureID = textureId;
    while ( v33->m_bOpenGLBlocked )
      ;
    glBindTexture(0xDE1u, textureId);
  }
  glDrawArraysAG(v32, v28, 4);
}

void __fastcall OGLRender::ensureShader(OGLRender *this, const char *fragFile)
{
  unsigned int IsStopping; // ebx
  const unsigned __int8 *CString; // rax
  unsigned int v5; // eax
  std::_Tree_node<std::pair<AgHash const ,std::vector<OGLShader *> >,void *> *Myhead; // rcx
  std::_Tree_node<std::pair<AgHash const ,std::vector<OGLShader *> >,void *> *v7; // rdi
  std::_Tree_node<std::pair<AgHash const ,std::vector<OGLShader *> >,void *> *Parent; // rdx
  OGLShader **Myfirst; // rbx
  KOFShaderManager *v10; // r14
  __int64 v11; // rsi
  unsigned __int64 v12; // rbp
  __int64 m_programSlot; // rcx
  _BYTE v14[40]; // [rsp+20h] [rbp-28h] BYREF
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgHash const ,std::vector<OGLShader *> > > > > result; // [rsp+50h] [rbp+8h] BYREF

  AgStringRef::AgStringRef((AgStringRef *)v14, fragFile);
  IsStopping = AgSimpleThreadHost::getThreadIsStopping((Concurrency::details::ThreadProxyFactory<Concurrency::details::FreeThreadProxy> *)v14);
  CString = (const unsigned __int8 *)AgStringRef::getCString((std::shared_ptr<__ExceptionPtr> *)v14);
  v5 = AgHash::_hashfunc(CString, IsStopping);
  Myhead = this->m_shadersToLoad._Mypair._Myval2._Myval2._Myhead;
  v7 = Myhead;
  Parent = Myhead->_Parent;
  while ( !Parent->_Isnil )
  {
    if ( Parent->_Myval.first.m_key >= v5 )
    {
      v7 = Parent;
      Parent = Parent->_Left;
    }
    else
    {
      Parent = Parent->_Right;
    }
  }
  if ( v7 == Myhead || v5 < v7->_Myval.first.m_key )
    v7 = this->m_shadersToLoad._Mypair._Myval2._Myval2._Myhead;
  if ( v7 != Myhead )
  {
    Myfirst = v7->_Myval.second._Mypair._Myval2._Myfirst;
    v10 = (KOFShaderManager *)AgSingleton<KOFShaderManager>::ms_instance;
    v11 = 0i64;
    v12 = (unsigned __int64)((char *)v7->_Myval.second._Mypair._Myval2._Mylast - (char *)Myfirst + 7) >> 3;
    if ( Myfirst > v7->_Myval.second._Mypair._Myval2._Mylast )
      v12 = 0i64;
    if ( v12 )
    {
      do
      {
        m_programSlot = (*Myfirst)->m_programSlot;
        if ( (int)m_programSlot >= 0 )
          KOFShaderManager::link(v10, &v10->m_program[m_programSlot]);
        ++Myfirst;
        ++v11;
      }
      while ( v11 != v12 );
    }
    if ( !*(_BYTE *)(*(_QWORD *)&AppMain::pApp + 2197496i64)
      && ((unsigned int (__fastcall *)(AgSingleton<AgSystemManager> *))AgSingleton<AgSystemManager>::ms_instance->__vftable[3].~AgSingleton<AgSystemManager>)(AgSingleton<AgSystemManager>::ms_instance)
       - 1 > 0x7FE )
    {
      std::_Tree<std::_Tmap_traits<AgHash,std::vector<OGLShader *>,std::less<AgHash>,std::allocator<std::pair<AgHash const,std::vector<OGLShader *>>>,0>>::erase(
        &this->m_shadersToLoad,
        &result,
        (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgHash const ,std::vector<OGLShader *> > > > >)v7);
    }
  }
}

std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const ,OGLModel *> > > > *__fastcall std::_Tree<std::_Tmap_traits<std::string,unsigned int,std::less<std::string>,std::allocator<std::pair<std::string const,unsigned int>>,0>>::erase(
        std::_Tree<std::_Tmap_traits<std::string,OGLModel *,std::less<std::string >,std::allocator<std::pair<std::string const ,OGLModel *> >,0> > *this,
        std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const ,OGLModel *> > > > *result,
        std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const ,OGLModel *> > > > _First,
        std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const ,OGLModel *> > > > _Last)
{
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *Myhead; // rdx
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *v7; // rax
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *Right; // rdx
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *j; // rcx
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *i; // rcx
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const ,OGLModel *> > > > resulta; // [rsp+40h] [rbp+8h] BYREF
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *v13; // [rsp+50h] [rbp+18h]
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *Ptr; // [rsp+58h] [rbp+20h]

  Ptr = _Last._Ptr;
  v13 = _First._Ptr;
  Myhead = this->_Mypair._Myval2._Myval2._Myhead;
  if ( _First._Ptr == this->_Mypair._Myval2._Myval2._Myhead->_Left && _Last._Ptr == Myhead )
  {
    std::_Tree<std::_Tset_traits<std::string,std::less<std::string>,std::allocator<std::string>,0>>::_Erase(
      (std::_Tree<std::_Tset_traits<std::string,std::less<std::string >,std::allocator<std::string >,0> > *)this,
      (std::_Tree_node<std::string,void *> *)Myhead->_Parent);
    this->_Mypair._Myval2._Myval2._Myhead->_Parent = this->_Mypair._Myval2._Myval2._Myhead;
    this->_Mypair._Myval2._Myval2._Myhead->_Left = this->_Mypair._Myval2._Myval2._Myhead;
    this->_Mypair._Myval2._Myval2._Myhead->_Right = this->_Mypair._Myval2._Myval2._Myhead;
    this->_Mypair._Myval2._Myval2._Mysize = 0i64;
    result->_Ptr = this->_Mypair._Myval2._Myval2._Myhead->_Left;
  }
  else
  {
    if ( _First._Ptr != _Last._Ptr )
    {
      do
      {
        v7 = _First._Ptr;
        if ( !_First._Ptr->_Isnil )
        {
          Right = _First._Ptr->_Right;
          if ( Right->_Isnil )
          {
            for ( i = _First._Ptr->_Parent; !i->_Isnil; i = i->_Parent )
            {
              if ( _First._Ptr != i->_Right )
                break;
              _First._Ptr = i;
              v13 = i;
            }
            v13 = i;
          }
          else
          {
            for ( j = Right->_Left; !j->_Isnil; j = j->_Left )
              Right = j;
            v13 = Right;
          }
        }
        std::_Tree<std::_Tmap_traits<std::string,CSteamID,std::less<void>,std::allocator<std::pair<std::string const,CSteamID>>,0>>::erase(
          this,
          &resulta,
          (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const ,OGLModel *> > > >)v7);
        _First._Ptr = v13;
      }
      while ( v13 != Ptr );
    }
    result->_Ptr = _First._Ptr;
  }
  return result;
}

std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const ,OGLModel *> > > > *__fastcall std::_Tree<std::_Tmap_traits<std::string,CSteamID,std::less<void>,std::allocator<std::pair<std::string const,CSteamID>>,0>>::erase(
        std::_Tree<std::_Tmap_traits<std::string,OGLModel *,std::less<std::string >,std::allocator<std::pair<std::string const ,OGLModel *> >,0> > *this,
        std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const ,OGLModel *> > > > *result,
        std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const ,OGLModel *> > > > _Where)
{
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *v5; // rdi
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *Right; // rax
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *j; // rax
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *i; // rax
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *v9; // r10
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *Parent; // r9
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *k; // rcx
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *Left; // rax
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *Myhead; // rdx
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *v14; // rax
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *m; // rcx
  std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const ,OGLModel *> > > > *v16; // rax
  char Color; // cl
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *v18; // r11
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *v19; // rbx
  std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *v20; // rdx
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *v21; // rcx
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *v22; // rax
  unsigned __int64 Myres; // rax
  void **p_Myval; // rbx
  char *v25; // rcx
  char *v26; // rax
  unsigned __int64 v27; // rcx
  bool v28; // cf
  unsigned __int64 Mysize; // rax
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *Ptr; // [rsp+50h] [rbp+18h]

  Ptr = _Where._Ptr;
  v5 = _Where._Ptr;
  if ( !_Where._Ptr->_Isnil )
  {
    Right = _Where._Ptr->_Right;
    if ( Right->_Isnil )
    {
      for ( i = _Where._Ptr->_Parent; !i->_Isnil; i = i->_Parent )
      {
        if ( _Where._Ptr != i->_Right )
          break;
        _Where._Ptr = i;
      }
      _Where._Ptr = i;
      Ptr = i;
    }
    else
    {
      _Where._Ptr = _Where._Ptr->_Right;
      for ( j = Right->_Left; !j->_Isnil; j = j->_Left )
        _Where._Ptr = j;
      Ptr = _Where._Ptr;
    }
  }
  if ( v5->_Left->_Isnil )
  {
    v9 = v5->_Right;
LABEL_15:
    Parent = v5->_Parent;
    if ( !v9->_Isnil )
      v9->_Parent = Parent;
    if ( this->_Mypair._Myval2._Myval2._Myhead->_Parent == v5 )
    {
      this->_Mypair._Myval2._Myval2._Myhead->_Parent = v9;
    }
    else if ( Parent->_Left == v5 )
    {
      Parent->_Left = v9;
    }
    else
    {
      Parent->_Right = v9;
    }
    if ( this->_Mypair._Myval2._Myval2._Myhead->_Left == v5 )
    {
      if ( v9->_Isnil )
      {
        k = Parent;
      }
      else
      {
        Left = v9->_Left;
        for ( k = v9; !Left->_Isnil; Left = Left->_Left )
          k = Left;
      }
      this->_Mypair._Myval2._Myval2._Myhead->_Left = k;
    }
    Myhead = this->_Mypair._Myval2._Myval2._Myhead;
    if ( this->_Mypair._Myval2._Myval2._Myhead->_Right == v5 )
    {
      if ( v9->_Isnil )
      {
        Myhead->_Right = Parent;
      }
      else
      {
        v14 = v9->_Right;
        for ( m = v9; !v14->_Isnil; v14 = v14->_Right )
          m = v14;
        Myhead->_Right = m;
      }
    }
    goto LABEL_45;
  }
  if ( v5->_Right->_Isnil )
  {
    v9 = v5->_Left;
    goto LABEL_15;
  }
  v9 = _Where._Ptr->_Right;
  if ( _Where._Ptr == v5 )
    goto LABEL_15;
  v5->_Left->_Parent = _Where._Ptr;
  _Where._Ptr->_Left = v5->_Left;
  if ( _Where._Ptr == v5->_Right )
  {
    Parent = _Where._Ptr;
  }
  else
  {
    Parent = _Where._Ptr->_Parent;
    if ( !v9->_Isnil )
      v9->_Parent = Parent;
    Parent->_Left = v9;
    _Where._Ptr->_Right = v5->_Right;
    v5->_Right->_Parent = _Where._Ptr;
  }
  if ( this->_Mypair._Myval2._Myval2._Myhead->_Parent == v5 )
  {
    this->_Mypair._Myval2._Myval2._Myhead->_Parent = _Where._Ptr;
  }
  else
  {
    v16 = (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const ,OGLModel *> > > > *)v5->_Parent;
    if ( v16->_Ptr == v5 )
      v16->_Ptr = _Where._Ptr;
    else
      v16[2]._Ptr = _Where._Ptr;
  }
  _Where._Ptr->_Parent = v5->_Parent;
  Color = _Where._Ptr->_Color;
  _Where._Ptr->_Color = v5->_Color;
  v5->_Color = Color;
LABEL_45:
  if ( v5->_Color == 1 )
  {
    if ( v9 != this->_Mypair._Myval2._Myval2._Myhead->_Parent )
    {
      do
      {
        v18 = Parent;
        v19 = Parent;
        if ( v9->_Color != 1 )
          break;
        v20 = (std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *)Parent->_Left;
        if ( v9 == Parent->_Left )
        {
          v20 = (std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *)Parent->_Right;
          if ( !v20->_Color )
          {
            v20->_Color = 1;
            v21 = Parent->_Right;
            Parent->_Color = 0;
            Parent->_Right = v21->_Left;
            if ( !v21->_Left->_Isnil )
              v21->_Left->_Parent = Parent;
            v21->_Parent = Parent->_Parent;
            if ( Parent == this->_Mypair._Myval2._Myval2._Myhead->_Parent )
            {
              this->_Mypair._Myval2._Myval2._Myhead->_Parent = v21;
            }
            else
            {
              v22 = Parent->_Parent;
              if ( Parent == v22->_Left )
                v22->_Left = v21;
              else
                v22->_Right = v21;
            }
            v21->_Left = Parent;
            v20 = (std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *)Parent->_Right;
            Parent->_Parent = v21;
          }
          if ( v20->_Isnil )
            goto LABEL_70;
          if ( v20->_Left->_Color != 1 || v20->_Right->_Color != 1 )
          {
            if ( v20->_Right->_Color == 1 )
            {
              v20->_Left->_Color = 1;
              v20->_Color = 0;
              std::_Tree<std::_Tmap_traits<enum AgControllerComponentType,std::list<AgControllerComponent *>,std::less<enum AgControllerComponentType>,std::allocator<std::pair<enum AgControllerComponentType const,std::list<AgControllerComponent *>>>,0>>::_Rrotate(
                (std::_Tree<std::_Tmap_traits<AgStringRef,AgJsonNode,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const ,AgJsonNode> >,0> > *)this,
                v20);
              v20 = (std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *)Parent->_Right;
            }
            v20->_Color = Parent->_Color;
            Parent->_Color = 1;
            v20->_Right->_Color = 1;
            std::_Tree<std::_Tmap_traits<AgControllerUID,FighterOperationMapper,std::less<AgControllerUID>,std::allocator<std::pair<AgControllerUID const,FighterOperationMapper>>,0>>::_Lrotate(
              (std::_Tree<std::_Tmap_traits<AgStringRef,AgJsonNode,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const ,AgJsonNode> >,0> > *)this,
              (std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *)Parent);
            break;
          }
        }
        else
        {
          if ( !v20->_Color )
          {
            v20->_Color = 1;
            Parent->_Color = 0;
            std::_Tree<std::_Tmap_traits<enum AgControllerComponentType,std::list<AgControllerComponent *>,std::less<enum AgControllerComponentType>,std::allocator<std::pair<enum AgControllerComponentType const,std::list<AgControllerComponent *>>>,0>>::_Rrotate(
              (std::_Tree<std::_Tmap_traits<AgStringRef,AgJsonNode,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const ,AgJsonNode> >,0> > *)this,
              (std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *)Parent);
            v20 = (std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *)Parent->_Left;
          }
          if ( v20->_Isnil )
            goto LABEL_70;
          if ( v20->_Right->_Color != 1 || v20->_Left->_Color != 1 )
          {
            if ( v20->_Left->_Color == 1 )
            {
              v20->_Right->_Color = 1;
              v20->_Color = 0;
              std::_Tree<std::_Tmap_traits<AgControllerUID,FighterOperationMapper,std::less<AgControllerUID>,std::allocator<std::pair<AgControllerUID const,FighterOperationMapper>>,0>>::_Lrotate(
                (std::_Tree<std::_Tmap_traits<AgStringRef,AgJsonNode,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const ,AgJsonNode> >,0> > *)this,
                v20);
              v20 = (std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *)Parent->_Left;
            }
            v20->_Color = Parent->_Color;
            Parent->_Color = 1;
            v20->_Left->_Color = 1;
            std::_Tree<std::_Tmap_traits<enum AgControllerComponentType,std::list<AgControllerComponent *>,std::less<enum AgControllerComponentType>,std::allocator<std::pair<enum AgControllerComponentType const,std::list<AgControllerComponent *>>>,0>>::_Rrotate(
              (std::_Tree<std::_Tmap_traits<AgStringRef,AgJsonNode,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const ,AgJsonNode> >,0> > *)this,
              (std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *)Parent);
            break;
          }
        }
        v20->_Color = 0;
LABEL_70:
        v9 = v19;
        Parent = Parent->_Parent;
      }
      while ( v18 != this->_Mypair._Myval2._Myval2._Myhead->_Parent );
    }
    v9->_Color = 1;
  }
  Myres = v5->_Myval.first._Mypair._Myval2._Myres;
  p_Myval = (void **)&v5->_Myval;
  if ( Myres >= 0x10 )
  {
    v25 = (char *)*p_Myval;
    if ( Myres + 1 >= 0x1000 )
    {
      if ( ((unsigned __int8)v25 & 0x1F) != 0 )
        invalid_parameter_noinfo_noreturn();
      v26 = (char *)*((_QWORD *)v25 - 1);
      if ( v26 >= v25 )
        invalid_parameter_noinfo_noreturn();
      v27 = v25 - v26;
      if ( v27 < 8 )
        invalid_parameter_noinfo_noreturn();
      if ( v27 > 0x27 )
        invalid_parameter_noinfo_noreturn();
      v25 = v26;
    }
    operator delete(v25);
  }
  v5->_Myval.first._Mypair._Myval2._Myres = 15i64;
  v28 = v5->_Myval.first._Mypair._Myval2._Myres < 0x10;
  v5->_Myval.first._Mypair._Myval2._Mysize = 0i64;
  if ( !v28 )
    p_Myval = (void **)*p_Myval;
  *(_BYTE *)p_Myval = 0;
  operator delete(v5);
  Mysize = this->_Mypair._Myval2._Myval2._Mysize;
  if ( Mysize )
    this->_Mypair._Myval2._Myval2._Mysize = Mysize - 1;
  result->_Ptr = Ptr;
  return result;
}

std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgHash const ,std::vector<OGLShader *> > > > > *__fastcall std::_Tree<std::_Tmap_traits<AgHash,std::vector<OGLShader *>,std::less<AgHash>,std::allocator<std::pair<AgHash const,std::vector<OGLShader *>>>,0>>::erase(
        std::_Tree<std::_Tmap_traits<AgHash,std::vector<OGLShader *>,std::less<AgHash>,std::allocator<std::pair<AgHash const ,std::vector<OGLShader *> > >,0> > *this,
        std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgHash const ,std::vector<OGLShader *> > > > > *result,
        std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgHash const ,std::vector<OGLShader *> > > > > _First,
        std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgHash const ,std::vector<OGLShader *> > > > > _Last)
{
  std::_Tree_node<std::pair<AgHash const ,std::vector<OGLShader *> >,void *> *Myhead; // rdx
  std::_Tree_node<std::pair<AgHash const ,std::vector<OGLShader *> >,void *> *v7; // rax
  std::_Tree_node<std::pair<AgHash const ,std::vector<OGLShader *> >,void *> *Right; // rdx
  std::_Tree_node<std::pair<AgHash const ,std::vector<OGLShader *> >,void *> *j; // rcx
  std::_Tree_node<std::pair<AgHash const ,std::vector<OGLShader *> >,void *> *i; // rcx
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgHash const ,std::vector<OGLShader *> > > > > resulta; // [rsp+40h] [rbp+8h] BYREF
  std::_Tree_node<std::pair<AgHash const ,std::vector<OGLShader *> >,void *> *v13; // [rsp+50h] [rbp+18h]
  std::_Tree_node<std::pair<AgHash const ,std::vector<OGLShader *> >,void *> *Ptr; // [rsp+58h] [rbp+20h]

  Ptr = _Last._Ptr;
  v13 = _First._Ptr;
  Myhead = this->_Mypair._Myval2._Myval2._Myhead;
  if ( _First._Ptr == this->_Mypair._Myval2._Myval2._Myhead->_Left && _Last._Ptr == Myhead )
  {
    std::_Tree<std::_Tmap_traits<AgHash,std::vector<OGLShader *>,std::less<AgHash>,std::allocator<std::pair<AgHash const,std::vector<OGLShader *>>>,0>>::_Erase(
      this,
      Myhead->_Parent);
    this->_Mypair._Myval2._Myval2._Myhead->_Parent = this->_Mypair._Myval2._Myval2._Myhead;
    this->_Mypair._Myval2._Myval2._Myhead->_Left = this->_Mypair._Myval2._Myval2._Myhead;
    this->_Mypair._Myval2._Myval2._Myhead->_Right = this->_Mypair._Myval2._Myval2._Myhead;
    this->_Mypair._Myval2._Myval2._Mysize = 0i64;
    result->_Ptr = this->_Mypair._Myval2._Myval2._Myhead->_Left;
  }
  else
  {
    if ( _First._Ptr != _Last._Ptr )
    {
      do
      {
        v7 = _First._Ptr;
        if ( !_First._Ptr->_Isnil )
        {
          Right = _First._Ptr->_Right;
          if ( Right->_Isnil )
          {
            for ( i = _First._Ptr->_Parent; !i->_Isnil; i = i->_Parent )
            {
              if ( _First._Ptr != i->_Right )
                break;
              _First._Ptr = i;
              v13 = i;
            }
            v13 = i;
          }
          else
          {
            for ( j = Right->_Left; !j->_Isnil; j = j->_Left )
              Right = j;
            v13 = Right;
          }
        }
        std::_Tree<std::_Tmap_traits<AgHash,std::vector<OGLShader *>,std::less<AgHash>,std::allocator<std::pair<AgHash const,std::vector<OGLShader *>>>,0>>::erase(
          this,
          &resulta,
          (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgHash const ,std::vector<OGLShader *> > > > >)v7);
        _First._Ptr = v13;
      }
      while ( v13 != Ptr );
    }
    result->_Ptr = _First._Ptr;
  }
  return result;
}

std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgHash const ,std::vector<OGLShader *> > > > > *__fastcall std::_Tree<std::_Tmap_traits<AgHash,std::vector<OGLShader *>,std::less<AgHash>,std::allocator<std::pair<AgHash const,std::vector<OGLShader *>>>,0>>::erase(
        std::_Tree<std::_Tmap_traits<AgHash,std::vector<OGLShader *>,std::less<AgHash>,std::allocator<std::pair<AgHash const ,std::vector<OGLShader *> > >,0> > *this,
        std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgHash const ,std::vector<OGLShader *> > > > > *result,
        std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgHash const ,std::vector<OGLShader *> > > > > _Where)
{
  std::_Tree_node<std::pair<AgHash const ,std::vector<OGLShader *> >,void *> *v5; // rbx
  std::_Tree_node<std::pair<AgHash const ,std::vector<OGLShader *> >,void *> *Right; // rax
  std::_Tree_node<std::pair<AgHash const ,std::vector<OGLShader *> >,void *> *j; // rax
  std::_Tree_node<std::pair<AgHash const ,std::vector<OGLShader *> >,void *> *i; // rax
  std::_Tree_node<std::pair<AgHash const ,std::vector<OGLShader *> >,void *> *v9; // r10
  std::_Tree_node<std::pair<AgHash const ,std::vector<OGLShader *> >,void *> *Parent; // r9
  std::_Tree_node<std::pair<AgHash const ,std::vector<OGLShader *> >,void *> *k; // rcx
  std::_Tree_node<std::pair<AgHash const ,std::vector<OGLShader *> >,void *> *Left; // rax
  std::_Tree_node<std::pair<AgHash const ,std::vector<OGLShader *> >,void *> *Myhead; // rdx
  std::_Tree_node<std::pair<AgHash const ,std::vector<OGLShader *> >,void *> *v14; // rax
  std::_Tree_node<std::pair<AgHash const ,std::vector<OGLShader *> >,void *> *m; // rcx
  std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgHash const ,std::vector<OGLShader *> > > > > *v16; // rax
  char Color; // cl
  std::_Tree_node<std::pair<AgHash const ,std::vector<OGLShader *> >,void *> *v18; // r11
  std::_Tree_node<std::pair<AgHash const ,std::vector<OGLShader *> >,void *> *v19; // rsi
  std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *v20; // rdx
  std::_Tree_node<std::pair<AgHash const ,std::vector<OGLShader *> >,void *> *v21; // rcx
  std::_Tree_node<std::pair<AgHash const ,std::vector<OGLShader *> >,void *> *v22; // rax
  char *Myfirst; // rcx
  unsigned __int64 v24; // rax
  char *v25; // rax
  unsigned __int64 v26; // rcx
  unsigned __int64 Mysize; // rax
  std::_Tree_node<std::pair<AgHash const ,std::vector<OGLShader *> >,void *> *Ptr; // [rsp+50h] [rbp+18h]

  Ptr = _Where._Ptr;
  v5 = _Where._Ptr;
  if ( !_Where._Ptr->_Isnil )
  {
    Right = _Where._Ptr->_Right;
    if ( Right->_Isnil )
    {
      for ( i = _Where._Ptr->_Parent; !i->_Isnil; i = i->_Parent )
      {
        if ( _Where._Ptr != i->_Right )
          break;
        _Where._Ptr = i;
      }
      _Where._Ptr = i;
      Ptr = i;
    }
    else
    {
      _Where._Ptr = _Where._Ptr->_Right;
      for ( j = Right->_Left; !j->_Isnil; j = j->_Left )
        _Where._Ptr = j;
      Ptr = _Where._Ptr;
    }
  }
  if ( v5->_Left->_Isnil )
  {
    v9 = v5->_Right;
LABEL_15:
    Parent = v5->_Parent;
    if ( !v9->_Isnil )
      v9->_Parent = Parent;
    if ( this->_Mypair._Myval2._Myval2._Myhead->_Parent == v5 )
    {
      this->_Mypair._Myval2._Myval2._Myhead->_Parent = v9;
    }
    else if ( Parent->_Left == v5 )
    {
      Parent->_Left = v9;
    }
    else
    {
      Parent->_Right = v9;
    }
    if ( this->_Mypair._Myval2._Myval2._Myhead->_Left == v5 )
    {
      if ( v9->_Isnil )
      {
        k = Parent;
      }
      else
      {
        Left = v9->_Left;
        for ( k = v9; !Left->_Isnil; Left = Left->_Left )
          k = Left;
      }
      this->_Mypair._Myval2._Myval2._Myhead->_Left = k;
    }
    Myhead = this->_Mypair._Myval2._Myval2._Myhead;
    if ( this->_Mypair._Myval2._Myval2._Myhead->_Right == v5 )
    {
      if ( v9->_Isnil )
      {
        Myhead->_Right = Parent;
      }
      else
      {
        v14 = v9->_Right;
        for ( m = v9; !v14->_Isnil; v14 = v14->_Right )
          m = v14;
        Myhead->_Right = m;
      }
    }
    goto LABEL_45;
  }
  if ( v5->_Right->_Isnil )
  {
    v9 = v5->_Left;
    goto LABEL_15;
  }
  v9 = _Where._Ptr->_Right;
  if ( _Where._Ptr == v5 )
    goto LABEL_15;
  v5->_Left->_Parent = _Where._Ptr;
  _Where._Ptr->_Left = v5->_Left;
  if ( _Where._Ptr == v5->_Right )
  {
    Parent = _Where._Ptr;
  }
  else
  {
    Parent = _Where._Ptr->_Parent;
    if ( !v9->_Isnil )
      v9->_Parent = Parent;
    Parent->_Left = v9;
    _Where._Ptr->_Right = v5->_Right;
    v5->_Right->_Parent = _Where._Ptr;
  }
  if ( this->_Mypair._Myval2._Myval2._Myhead->_Parent == v5 )
  {
    this->_Mypair._Myval2._Myval2._Myhead->_Parent = _Where._Ptr;
  }
  else
  {
    v16 = (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgHash const ,std::vector<OGLShader *> > > > > *)v5->_Parent;
    if ( v16->_Ptr == v5 )
      v16->_Ptr = _Where._Ptr;
    else
      v16[2]._Ptr = _Where._Ptr;
  }
  _Where._Ptr->_Parent = v5->_Parent;
  Color = _Where._Ptr->_Color;
  _Where._Ptr->_Color = v5->_Color;
  v5->_Color = Color;
LABEL_45:
  if ( v5->_Color == 1 )
  {
    if ( v9 != this->_Mypair._Myval2._Myval2._Myhead->_Parent )
    {
      do
      {
        v18 = Parent;
        v19 = Parent;
        if ( v9->_Color != 1 )
          break;
        v20 = (std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *)Parent->_Left;
        if ( v9 == Parent->_Left )
        {
          v20 = (std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *)Parent->_Right;
          if ( !v20->_Color )
          {
            v20->_Color = 1;
            v21 = Parent->_Right;
            Parent->_Color = 0;
            Parent->_Right = v21->_Left;
            if ( !v21->_Left->_Isnil )
              v21->_Left->_Parent = Parent;
            v21->_Parent = Parent->_Parent;
            if ( Parent == this->_Mypair._Myval2._Myval2._Myhead->_Parent )
            {
              this->_Mypair._Myval2._Myval2._Myhead->_Parent = v21;
            }
            else
            {
              v22 = Parent->_Parent;
              if ( Parent == v22->_Left )
                v22->_Left = v21;
              else
                v22->_Right = v21;
            }
            v21->_Left = Parent;
            v20 = (std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *)Parent->_Right;
            Parent->_Parent = v21;
          }
          if ( v20->_Isnil )
            goto LABEL_70;
          if ( v20->_Left->_Color != 1 || v20->_Right->_Color != 1 )
          {
            if ( v20->_Right->_Color == 1 )
            {
              v20->_Left->_Color = 1;
              v20->_Color = 0;
              std::_Tree<std::_Tmap_traits<enum AgControllerComponentType,std::list<AgControllerComponent *>,std::less<enum AgControllerComponentType>,std::allocator<std::pair<enum AgControllerComponentType const,std::list<AgControllerComponent *>>>,0>>::_Rrotate(
                (std::_Tree<std::_Tmap_traits<AgStringRef,AgJsonNode,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const ,AgJsonNode> >,0> > *)this,
                v20);
              v20 = (std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *)Parent->_Right;
            }
            v20->_Color = Parent->_Color;
            Parent->_Color = 1;
            v20->_Right->_Color = 1;
            std::_Tree<std::_Tmap_traits<AgControllerUID,FighterOperationMapper,std::less<AgControllerUID>,std::allocator<std::pair<AgControllerUID const,FighterOperationMapper>>,0>>::_Lrotate(
              (std::_Tree<std::_Tmap_traits<AgStringRef,AgJsonNode,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const ,AgJsonNode> >,0> > *)this,
              (std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *)Parent);
            break;
          }
        }
        else
        {
          if ( !v20->_Color )
          {
            v20->_Color = 1;
            Parent->_Color = 0;
            std::_Tree<std::_Tmap_traits<enum AgControllerComponentType,std::list<AgControllerComponent *>,std::less<enum AgControllerComponentType>,std::allocator<std::pair<enum AgControllerComponentType const,std::list<AgControllerComponent *>>>,0>>::_Rrotate(
              (std::_Tree<std::_Tmap_traits<AgStringRef,AgJsonNode,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const ,AgJsonNode> >,0> > *)this,
              (std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *)Parent);
            v20 = (std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *)Parent->_Left;
          }
          if ( v20->_Isnil )
            goto LABEL_70;
          if ( v20->_Right->_Color != 1 || v20->_Left->_Color != 1 )
          {
            if ( v20->_Left->_Color == 1 )
            {
              v20->_Right->_Color = 1;
              v20->_Color = 0;
              std::_Tree<std::_Tmap_traits<AgControllerUID,FighterOperationMapper,std::less<AgControllerUID>,std::allocator<std::pair<AgControllerUID const,FighterOperationMapper>>,0>>::_Lrotate(
                (std::_Tree<std::_Tmap_traits<AgStringRef,AgJsonNode,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const ,AgJsonNode> >,0> > *)this,
                v20);
              v20 = (std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *)Parent->_Left;
            }
            v20->_Color = Parent->_Color;
            Parent->_Color = 1;
            v20->_Left->_Color = 1;
            std::_Tree<std::_Tmap_traits<enum AgControllerComponentType,std::list<AgControllerComponent *>,std::less<enum AgControllerComponentType>,std::allocator<std::pair<enum AgControllerComponentType const,std::list<AgControllerComponent *>>>,0>>::_Rrotate(
              (std::_Tree<std::_Tmap_traits<AgStringRef,AgJsonNode,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const ,AgJsonNode> >,0> > *)this,
              (std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *)Parent);
            break;
          }
        }
        v20->_Color = 0;
LABEL_70:
        v9 = v19;
        Parent = Parent->_Parent;
      }
      while ( v18 != this->_Mypair._Myval2._Myval2._Myhead->_Parent );
    }
    v9->_Color = 1;
  }
  Myfirst = (char *)v5->_Myval.second._Mypair._Myval2._Myfirst;
  if ( Myfirst )
  {
    v24 = ((char *)v5->_Myval.second._Mypair._Myval2._Myend - Myfirst) >> 3;
    if ( v24 > 0x1FFFFFFFFFFFFFFFi64 )
      invalid_parameter_noinfo_noreturn();
    if ( 8 * v24 >= 0x1000 )
    {
      if ( ((unsigned __int8)Myfirst & 0x1F) != 0 )
        invalid_parameter_noinfo_noreturn();
      v25 = (char *)*((_QWORD *)Myfirst - 1);
      if ( v25 >= Myfirst )
        invalid_parameter_noinfo_noreturn();
      v26 = Myfirst - v25;
      if ( v26 < 8 )
        invalid_parameter_noinfo_noreturn();
      if ( v26 > 0x27 )
        invalid_parameter_noinfo_noreturn();
      Myfirst = v25;
    }
    operator delete(Myfirst);
    v5->_Myval.second._Mypair._Myval2._Myfirst = 0i64;
    v5->_Myval.second._Mypair._Myval2._Mylast = 0i64;
    v5->_Myval.second._Mypair._Myval2._Myend = 0i64;
  }
  operator delete(v5);
  Mysize = this->_Mypair._Myval2._Myval2._Mysize;
  if ( Mysize )
    this->_Mypair._Myval2._Myval2._Mysize = Mysize - 1;
  result->_Ptr = Ptr;
  return result;
}

OGLModelStackData *__fastcall OGLRender::getStack(OGLRender *this)
{
  OGLModelStackData *v2; // rdi
  OGLModelStackData *result; // rax

  OGLRender::addStack(this, this->m_sModelStackCount[this->m_RenderStackNo] + 1);
  v2 = this->m_pModelStack[this->m_RenderStackNo][this->m_sModelStackCount[this->m_RenderStackNo]];
  if ( !v2 )
  {
    v2 = (OGLModelStackData *)operator new(0x138ui64);
    memset(v2, 0, sizeof(OGLModelStackData));
    this->m_pModelStack[this->m_RenderStackNo][this->m_sModelStackCount[this->m_RenderStackNo]] = v2;
  }
  result = v2;
  v2->ThisID = this->m_sModelStackCount[this->m_RenderStackNo]++;
  return result;
}

void __fastcall OGLRender::initialize(OGLRender *this, int capacity)
{
  void **m_pModelStack; // rsi
  unsigned int *m_sModelStackMax; // r15
  __int64 v5; // rbp
  unsigned __int64 v6; // rax
  __int64 i; // rdi
  void *v8; // rbx
  unsigned int *m_RenderBufferDepthID; // rax
  __int64 v10; // rcx
  unsigned int *m_ShadowTransRenderBufferID; // rax
  __int64 v12; // rcx

  *(_QWORD *)&this->m_Width = 0i64;
  *(_QWORD *)&this->m_RenderFlg = 0i64;
  this->m_bWorldSetting = 0;
  *(_QWORD *)this->m_Proj.m = 1065353216i64;
  this->m_Proj.m[4] = 0.0;
  *(_QWORD *)&this->m_Proj.m[8] = 0i64;
  *(_QWORD *)&this->m_Proj.m[12] = 0i64;
  *(_QWORD *)&this->m_Proj.m[5] = 1065353216i64;
  *(_QWORD *)&this->m_Proj.m[2] = 0i64;
  *(_QWORD *)&this->m_Proj.m[10] = 1065353216i64;
  this->m_Proj.m[14] = 0.0;
  this->m_Proj.m[7] = 0.0;
  this->m_Proj.m[15] = 1.0;
  *(_QWORD *)this->m_OrthoProj.m = 1065353216i64;
  this->m_OrthoProj.m[4] = 0.0;
  *(_QWORD *)&this->m_OrthoProj.m[8] = 0i64;
  *(_QWORD *)&this->m_OrthoProj.m[12] = 0i64;
  *(_QWORD *)&this->m_OrthoProj.m[5] = 1065353216i64;
  *(_QWORD *)&this->m_OrthoProj.m[2] = 0i64;
  *(_QWORD *)&this->m_OrthoProj.m[10] = 1065353216i64;
  this->m_OrthoProj.m[14] = 0.0;
  this->m_OrthoProj.m[7] = 0.0;
  this->m_OrthoProj.m[15] = 1.0;
  *(_QWORD *)this->m_View.m = 1065353216i64;
  this->m_View.m[4] = 0.0;
  *(_QWORD *)&this->m_View.m[8] = 0i64;
  *(_QWORD *)&this->m_View.m[12] = 0i64;
  *(_QWORD *)&this->m_View.m[5] = 1065353216i64;
  *(_QWORD *)&this->m_View.m[2] = 0i64;
  *(_QWORD *)&this->m_View.m[10] = 1065353216i64;
  this->m_View.m[14] = 0.0;
  this->m_View.m[7] = 0.0;
  this->m_View.m[15] = 1.0;
  *(_QWORD *)this->m_InvView.m = 1065353216i64;
  this->m_InvView.m[4] = 0.0;
  *(_QWORD *)&this->m_InvView.m[8] = 0i64;
  *(_QWORD *)&this->m_InvView.m[12] = 0i64;
  *(_QWORD *)&this->m_InvView.m[5] = 1065353216i64;
  *(_QWORD *)&this->m_InvView.m[2] = 0i64;
  *(_QWORD *)&this->m_InvView.m[10] = 1065353216i64;
  this->m_InvView.m[14] = 0.0;
  this->m_InvView.m[7] = 0.0;
  this->m_InvView.m[15] = 1.0;
  *(_QWORD *)this->m_prevView.m = 1065353216i64;
  this->m_prevView.m[4] = 0.0;
  *(_QWORD *)&this->m_prevView.m[8] = 0i64;
  *(_QWORD *)&this->m_prevView.m[12] = 0i64;
  *(_QWORD *)&this->m_prevView.m[5] = 1065353216i64;
  *(_QWORD *)&this->m_prevView.m[2] = 0i64;
  *(_QWORD *)&this->m_prevView.m[10] = 1065353216i64;
  this->m_prevView.m[14] = 0.0;
  this->m_prevView.m[7] = 0.0;
  *(_QWORD *)&this->m_prevView.m[15] = 1065353216i64;
  *(_QWORD *)this->m_GroundFog.m_Color = 0i64;
  *(_QWORD *)&this->m_GroundFog.m_Color[2] = 0i64;
  *(_QWORD *)&this->m_GroundFog.m_fStart = 0i64;
  *(_QWORD *)&this->m_GroundFog.m_fUpDistance = 0i64;
  *(_QWORD *)&this->m_GroundFog.m_fUpHeight = 0i64;
  *(_QWORD *)&this->m_GroundFog.m_fUpStrength = 0i64;
  *(_QWORD *)this->m_GroundFog.m_UpColour = 0i64;
  *(_QWORD *)&this->m_GroundFog.m_UpColour[2] = 0i64;
  *(_QWORD *)&this->m_GroundFog.m_fDownDistanceExp = 0i64;
  *(_QWORD *)&this->m_GroundFog.m_fDownHeightExp = 0i64;
  *(_QWORD *)this->m_GroundFog.m_DownColour = 0i64;
  *(_QWORD *)&this->m_GroundFog.m_DownColour[2] = 0i64;
  this->m_GroundFog.m_bOn = 0;
  this->m_GroundFog.m_calcType = CALC_ADD;
  *(_QWORD *)&this->m_GroundFog.m_fShaderDistDivisor = 0i64;
  *(_QWORD *)&this->m_GroundFog.m_fShaderUpHeight = 0i64;
  *(_QWORD *)&this->m_GroundFog.m_fShaderExtraHeightSetting = 0i64;
  *(_QWORD *)this->m_SkyFog.m_Color = 0i64;
  *(_QWORD *)&this->m_SkyFog.m_Color[2] = 0i64;
  *(_QWORD *)&this->m_SkyFog.m_fStart = 0i64;
  *(_QWORD *)&this->m_SkyFog.m_fUpDistance = 0i64;
  *(_QWORD *)&this->m_SkyFog.m_fUpHeight = 0i64;
  *(_QWORD *)&this->m_SkyFog.m_fUpStrength = 0i64;
  *(_QWORD *)this->m_SkyFog.m_UpColour = 0i64;
  *(_QWORD *)&this->m_SkyFog.m_UpColour[2] = 0i64;
  *(_QWORD *)&this->m_SkyFog.m_fDownDistanceExp = 0i64;
  *(_QWORD *)&this->m_SkyFog.m_fDownHeightExp = 0i64;
  *(_QWORD *)this->m_SkyFog.m_DownColour = 0i64;
  *(_QWORD *)&this->m_SkyFog.m_DownColour[2] = 0i64;
  this->m_SkyFog.m_bOn = 0;
  this->m_SkyFog.m_calcType = CALC_ADD;
  *(_QWORD *)&this->m_SkyFog.m_fShaderDistDivisor = 0i64;
  *(_QWORD *)&this->m_SkyFog.m_fShaderUpHeight = 0i64;
  this->m_SkyFog.m_fShaderExtraHeightSetting = 0.0;
  this->m_LightningCol[0] = 1.0;
  this->m_LightningCol[1] = 1.0;
  *(_QWORD *)&this->m_LightningCol[2] = 1065353216i64;
  OGLLightManager::clear(&this->m_WorldLightManager);
  OGLMaterialLight::initialize(&this->m_MaterialLight);
  *(_WORD *)&this->m_NormalRenderPassFlg = 0;
  *(_DWORD *)&this->m_MaskPassFlg = 0;
  m_pModelStack = (void **)this->m_pModelStack;
  this->m_PosMapFlg = 0;
  m_sModelStackMax = this->m_sModelStackMax;
  *(_WORD *)&this->m_bDoShadowPass = 257;
  this->m_bDoDOFPass = 1;
  this->m_fBloomStrength = 1.0;
  this->m_fOrthoProjRatio = 0.5;
  this->m_renderTextures.m_ReflectionMapTexture = 0i64;
  this->m_renderTextures.m_EnvironmentMapTexture = 0i64;
  this->m_modelFXShaderSettings[0].fxTexCentre[0] = 0i64;
  this->m_modelFXShaderSettings[0].fxTexCentre[1] = 0i64;
  *(_QWORD *)this->m_modelFXShaderSettings[0].fxSpeed = 0i64;
  this->m_modelFXShaderSettings[1].fxTexCentre[0] = 0i64;
  this->m_modelFXShaderSettings[1].fxTexCentre[1] = 0i64;
  *(_QWORD *)this->m_modelFXShaderSettings[1].fxSpeed = 0i64;
  this->m_modelFXShaderSettings[2].fxTexCentre[0] = 0i64;
  this->m_modelFXShaderSettings[2].fxTexCentre[1] = 0i64;
  *(_QWORD *)this->m_modelFXShaderSettings[2].fxSpeed = 0i64;
  *(_QWORD *)this->m_sModelStackMax = 0i64;
  *(_QWORD *)&this->m_sModelStackMax[2] = 0i64;
  *(_QWORD *)&this->m_sModelStackMax[4] = 0i64;
  *(_QWORD *)&this->m_sModelStackMax[6] = 0i64;
  *(_QWORD *)this->m_sModelStackCount = 0i64;
  *(_QWORD *)&this->m_sModelStackCount[2] = 0i64;
  *(_QWORD *)&this->m_sModelStackCount[4] = 0i64;
  *(_QWORD *)&this->m_sModelStackCount[6] = 0i64;
  this->m_pModelStack[0] = 0i64;
  this->m_pModelStack[1] = 0i64;
  this->m_pModelStack[2] = 0i64;
  this->m_pModelStack[3] = 0i64;
  this->m_pModelStack[4] = 0i64;
  this->m_pModelStack[5] = 0i64;
  this->m_pModelStack[6] = 0i64;
  this->m_pModelStack[7] = 0i64;
  *(_QWORD *)this->vWork0 = 0i64;
  *(_QWORD *)&this->vWork0[2] = 0i64;
  *(_QWORD *)this->vWork1 = 0i64;
  *(_QWORD *)&this->vWork1[2] = 0i64;
  *(_QWORD *)this->vWork2 = 0i64;
  *(_QWORD *)&this->vWork2[2] = 0i64;
  this->m_CRITex[0] = 0i64;
  this->m_CRITex[1] = 0i64;
  this->m_CRITex[2] = 0i64;
  this->m_CRITex[3] = 0i64;
  memset(this->m_ShaderTbl, 0, 0x97FF8ui64);
  this->m_CustomShaderNo2D = -1;
  memset(this->m_pCustomShader, 0, 0x80ui64);
  this->m_pRenderFunc[0] = 0i64;
  this->m_pRenderFunc[1] = 0i64;
  this->m_pRenderFunc[2] = 0i64;
  this->m_pRenderFunc[3] = 0i64;
  this->m_pRenderFunc[4] = 0i64;
  this->m_pRenderFunc[5] = 0i64;
  this->m_pRenderFunc[6] = 0i64;
  this->m_pRenderFunc[7] = 0i64;
  this->m_pRenderFunc2D[0] = 0i64;
  this->m_pRenderFunc2D[1] = 0i64;
  this->m_pRenderFunc2D[2] = 0i64;
  this->m_pRenderFunc2D[3] = 0i64;
  this->m_pRenderFunc2D[4] = 0i64;
  this->m_pRenderFunc2D[5] = 0i64;
  this->m_pRenderFunc2D[6] = 0i64;
  this->m_pRenderFunc2D[7] = 0i64;
  memset(this->m_pEffectShader, 0, sizeof(this->m_pEffectShader));
  this->m_pEffectPPShader[0] = 0i64;
  this->m_pEffectPPShader[1] = 0i64;
  this->m_pEffectPPShader[2] = 0i64;
  this->m_pEffectPPShader[3] = 0i64;
  v5 = 8i64;
  this->m_pEffectPPShader[4] = 0i64;
  this->m_pEffectPPShader[5] = 0i64;
  do
  {
    v6 = 512i64;
    if ( !is_mul_ok(0x40ui64, 8ui64) )
      v6 = -1i64;
    *m_pModelStack = operator new[](v6);
    *m_sModelStackMax = 64;
    memset(*m_pModelStack, 0, 0x200ui64);
    for ( i = 0i64; i < 512; i += 8i64 )
    {
      v8 = operator new(0x138ui64);
      memset(v8, 0, 0x138ui64);
      *(_QWORD *)((char *)*m_pModelStack + i) = v8;
    }
    ++m_sModelStackMax;
    ++m_pModelStack;
    --v5;
  }
  while ( v5 );
  this->m_iRenderStackCount2D = 0;
  memset(this->m_PreDrawParameter, 0, sizeof(this->m_PreDrawParameter));
  m_RenderBufferDepthID = this->m_renderTextures.m_RenderBufferDepthID;
  v10 = 10i64;
  do
  {
    *(m_RenderBufferDepthID - 10) = 0;
    *m_RenderBufferDepthID++ = 0;
    --v10;
  }
  while ( v10 );
  m_ShadowTransRenderBufferID = this->m_renderTextures.m_ShadowTransRenderBufferID;
  v12 = 5i64;
  do
  {
    *(m_ShadowTransRenderBufferID - 106) = 0;
    *m_ShadowTransRenderBufferID++ = 0;
    --v12;
  }
  while ( v12 );
  *(_QWORD *)this->m_renderTextures.m_BlendRenderBufferId = 0i64;
  glGetFloatv(0x84FFu, &OGLRender::m_maxAnisotropy);
}

void __fastcall OGLRender::preDrawImage(
        OGLRender *this,
        OGLTexture *texture,
        float *vertex,
        float *texCoord,
        unsigned int color,
        unsigned int *index,
        unsigned int type,
        int vertexCount,
        int count,
        int renderType)
{
  float *v14; // r14
  unsigned __int64 v15; // r8
  void *v16; // r13
  float *v17; // rcx
  __int64 v18; // r8
  float *v19; // rdx
  int v20; // xmm0_4
  __m128 v21; // xmm1

  if ( this->m_iRenderStackCount2D < 512 )
  {
    v14 = (float *)AgFrameAllocator<AgAllocator<1>>::allocate(
                     &Framework::GLManager::glm->m_agDrawAllocator,
                     vertexCount << 6,
                     (unsigned __int64)vertex);
    v16 = AgFrameAllocator<AgAllocator<1>>::allocate(&Framework::GLManager::glm->m_agDrawAllocator, 4 * count, v15);
    if ( vertexCount )
    {
      v17 = v14 + 14;
      v18 = (unsigned int)vertexCount;
      v19 = vertex + 2;
      do
      {
        v20 = *(_DWORD *)v19;
        v17 += 16;
        v21 = (__m128)*((unsigned int *)v19 - 1);
        v19 += 3;
        texCoord += 2;
        *((_QWORD *)v17 - 15) = _mm_unpacklo_ps((__m128)*((unsigned int *)v19 - 5), v21).m128_u64[0];
        *((_DWORD *)v17 - 28) = v20;
        *((_OWORD *)v17 - 5) = _xmm;
        *((_QWORD *)v17 - 8) = _mm_unpacklo_ps(
                                 (__m128)*((unsigned int *)texCoord - 2),
                                 (__m128)*((unsigned int *)texCoord - 1)).m128_u64[0];
        --v18;
      }
      while ( v18 );
    }
    memmove(v16, index, 4i64 * count);
    this->m_PreDrawParameter[this->m_iRenderStackCount2D].texture = texture;
    this->m_PreDrawParameter[this->m_iRenderStackCount2D].vertex = v14;
    this->m_PreDrawParameter[this->m_iRenderStackCount2D].texCoord = v14;
    this->m_PreDrawParameter[this->m_iRenderStackCount2D].color = color;
    this->m_PreDrawParameter[this->m_iRenderStackCount2D].index = (unsigned int *)v16;
    this->m_PreDrawParameter[this->m_iRenderStackCount2D].count = count;
    this->m_PreDrawParameter[this->m_iRenderStackCount2D].type = 4;
    this->m_PreDrawParameter[this->m_iRenderStackCount2D].renderType = renderType;
    this->m_PreDrawParameter[this->m_iRenderStackCount2D].fogColor[0] = this->m_dummyFog[0];
    this->m_PreDrawParameter[this->m_iRenderStackCount2D].fogColor[1] = this->m_dummyFog[1];
    this->m_PreDrawParameter[this->m_iRenderStackCount2D].fogColor[2] = this->m_dummyFog[2];
    this->m_PreDrawParameter[this->m_iRenderStackCount2D++].fogColor[3] = this->m_dummyFog[3];
  }
}

void __fastcall std::vector<void (*)(extension::exsound_detail::SoundBankParser::BinaryParseState &,extension::exsound_detail::SoundChannelDefinition &)>::push_back(
        std::vector<void (__cdecl*)(extension::exsound_detail::SoundBankParser::BinaryParseState &,extension::exsound_detail::SoundChannelDefinition &),std::allocator<void (__cdecl*)(extension::exsound_detail::SoundBankParser::BinaryParseState &,extension::exsound_detail::SoundChannelDefinition &)> > *this,
        void (__fastcall *const *_Val)(extension::exsound_detail::SoundBankParser::BinaryParseState *, extension::exsound_detail::SoundChannelDefinition *))
{
  void (__fastcall **Mylast)(extension::exsound_detail::SoundBankParser::BinaryParseState *, extension::exsound_detail::SoundChannelDefinition *); // rax
  void (__fastcall **Myfirst)(extension::exsound_detail::SoundBankParser::BinaryParseState *, extension::exsound_detail::SoundChannelDefinition *); // rcx
  __int64 v6; // rdi
  void (__fastcall **v7)(extension::exsound_detail::SoundBankParser::BinaryParseState *, extension::exsound_detail::SoundChannelDefinition *); // rdx
  void (__fastcall **v8)(extension::exsound_detail::SoundBankParser::BinaryParseState *, extension::exsound_detail::SoundChannelDefinition *); // rcx

  Mylast = this->_Mypair._Myval2._Mylast;
  if ( _Val >= Mylast || (Myfirst = this->_Mypair._Myval2._Myfirst, Myfirst > _Val) )
  {
    if ( Mylast == this->_Mypair._Myval2._Myend )
      std::vector<BattleStageEvent *>::_Reserve(this, (unsigned __int64)_Val);
    v8 = this->_Mypair._Myval2._Mylast;
    if ( v8 )
      *v8 = *_Val;
  }
  else
  {
    v6 = _Val - Myfirst;
    if ( Mylast == this->_Mypair._Myval2._Myend )
      std::vector<BattleStageEvent *>::_Reserve(this, (unsigned __int64)_Val);
    v7 = this->_Mypair._Myval2._Mylast;
    if ( v7 )
    {
      *v7 = this->_Mypair._Myval2._Myfirst[v6];
      ++this->_Mypair._Myval2._Mylast;
      return;
    }
  }
  ++this->_Mypair._Myval2._Mylast;
}

void __fastcall OGLRender::resetRenderTargets(OGLRender *this)
{
  Framework::GLManager *v1; // r10
  __int64 i; // rsi
  int v4; // edx
  unsigned int v5; // eax
  unsigned int m_buffers; // er8
  unsigned int *systemRenderID; // rcx
  int v8; // edx
  unsigned int v9; // eax
  unsigned int v10; // er8
  unsigned int *v11; // rcx
  char *v12; // rdi
  int v13; // edx
  unsigned int v14; // ecx
  unsigned int v15; // er8
  unsigned int *v16; // rax
  int v17; // edx
  unsigned int *v18; // rax
  __int64 v19; // rcx
  int v20; // edx
  unsigned int v21; // ecx
  unsigned int v22; // er8
  unsigned int *v23; // rax
  int v24; // edx
  unsigned int *v25; // rax
  __int64 v26; // rcx
  int v27; // edx
  unsigned int v28; // ecx
  unsigned int v29; // er8
  unsigned int *v30; // rax
  int v31; // edx
  unsigned int *v32; // rax
  __int64 v33; // rcx
  int v34; // edx
  unsigned int v35; // ecx
  unsigned int v36; // er8
  unsigned int *v37; // rax
  int v38; // edx
  unsigned int *v39; // rax
  __int64 v40; // rcx
  int v41; // edx
  unsigned int v42; // ecx
  unsigned int v43; // er8
  unsigned int *v44; // rax
  int v45; // edx
  unsigned int *v46; // rax
  __int64 v47; // rcx
  unsigned int *m_ShadowTransRenderBufferID; // rsi
  __int64 v49; // rbp
  unsigned int *p_m_TexID; // rdi
  int v51; // edx
  unsigned int v52; // ecx
  unsigned int v53; // er8
  unsigned int *v54; // rax
  int v55; // edx
  unsigned int v56; // ecx
  unsigned int v57; // er8
  unsigned int *v58; // rax
  int v59; // edx
  unsigned int *v60; // rax
  __int64 v61; // rcx
  int v62; // edx
  unsigned int v63; // ecx
  unsigned int v64; // er8
  unsigned int *v65; // rax
  int v66; // edx
  unsigned int v67; // ecx
  unsigned int v68; // er8
  unsigned int *v69; // rax
  GLuint v70; // edx
  unsigned int *v71; // rax
  __int64 v72; // rcx
  unsigned int *v73; // rbx
  __int64 v74; // rdi
  int v75; // edx
  unsigned int v76; // ecx
  unsigned int v77; // er8
  unsigned int *v78; // rax
  GLuint v79; // edx
  unsigned int *v80; // rax
  __int64 v81; // rcx
  signed int m_FrameBufferID; // edx
  unsigned int v83; // ecx
  unsigned int v84; // er8
  unsigned int *v85; // rax
  unsigned int m_TexID; // edx
  unsigned int *v87; // rax
  __int64 v88; // rcx
  signed int v89; // edx
  unsigned int v90; // ecx
  unsigned int v91; // er8
  unsigned int *v92; // rax
  unsigned int v93; // edx
  unsigned int *v94; // rax
  __int64 v95; // rcx
  signed int v96; // edx
  unsigned int v97; // ecx
  unsigned int v98; // er8
  unsigned int *v99; // rax
  unsigned int v100; // edx
  unsigned int *v101; // rax
  __int64 v102; // rcx
  signed int v103; // edx
  unsigned int v104; // ecx
  unsigned int v105; // er8
  unsigned int *v106; // rax
  unsigned int v107; // edx
  unsigned int *v108; // rax
  __int64 v109; // rcx
  signed int v110; // edx
  unsigned int v111; // ecx
  unsigned int v112; // er8
  unsigned int *v113; // rax
  unsigned int v114; // edx
  unsigned int *v115; // rax
  __int64 v116; // rcx
  signed int v117; // edx
  unsigned int v118; // ecx
  unsigned int v119; // er8
  unsigned int *v120; // rax
  unsigned int v121; // edx
  unsigned int *v122; // rax
  __int64 v123; // rcx
  __int64 j; // r14
  OGLTexture *v125; // rdx
  int v126; // er8
  unsigned int v127; // ecx
  unsigned int v128; // er9
  unsigned int *v129; // rax
  const GLuint *v130; // rbx
  GLuint v131; // edx
  unsigned int *v132; // rax
  __int64 v133; // rcx
  OGLTexture *v134; // rdx
  int v135; // er8
  unsigned int v136; // ecx
  unsigned int v137; // er9
  unsigned int *v138; // rax
  const GLuint *v139; // rbx
  GLuint v140; // edx
  unsigned int *v141; // rax
  __int64 v142; // rcx
  char *v143; // rdi
  int v144; // edx
  unsigned int v145; // ecx
  unsigned int v146; // er8
  unsigned int *v147; // rax
  int v148; // edx
  unsigned int *v149; // rax
  __int64 v150; // rcx
  int v151; // edx
  unsigned int v152; // ecx
  unsigned int v153; // er8
  unsigned int *v154; // rax
  int v155; // edx
  unsigned int *v156; // rax
  __int64 v157; // rcx
  OGLTexture *v158; // rdx
  int v159; // er8
  unsigned int v160; // ecx
  unsigned int v161; // er9
  unsigned int *v162; // rax
  const GLuint *v163; // rbx
  GLuint v164; // edx
  unsigned int *v165; // rax
  __int64 v166; // rcx
  __int64 v167; // rsi
  unsigned int *v168; // rdi
  int v169; // edx
  unsigned int v170; // ecx
  unsigned int v171; // er8
  unsigned int *v172; // rax
  int v173; // edx
  unsigned int *v174; // rax
  __int64 v175; // rcx
  int v176; // edx
  unsigned int v177; // ecx
  unsigned int v178; // er8
  unsigned int *v179; // rax
  GLuint v180; // edx
  unsigned int *v181; // rax
  __int64 v182; // rcx
  signed int v183; // edx
  unsigned int v184; // eax
  unsigned int v185; // er8
  unsigned int *v186; // rcx
  unsigned int v187; // edx
  unsigned int *v188; // rax
  __int64 v189; // rcx
  signed int v190; // edx
  unsigned int v191; // eax
  unsigned int v192; // er8
  unsigned int *v193; // rcx
  unsigned int v194; // edx
  unsigned int *v195; // rax
  __int64 v196; // rcx
  signed int v197; // edx
  unsigned int v198; // eax
  unsigned int v199; // er8
  unsigned int *v200; // rcx
  unsigned int v201; // edx
  unsigned int *v202; // rax
  __int64 v203; // rcx
  signed int v204; // edx
  unsigned int v205; // eax
  unsigned int v206; // er8
  unsigned int *v207; // rcx
  unsigned int v208; // edx
  unsigned int *v209; // rax
  __int64 v210; // rcx
  unsigned int *m_BlendRenderBufferId; // rdi
  __int64 v212; // rsi
  unsigned int *v213; // rbx
  int v214; // edx
  unsigned int v215; // ecx
  unsigned int v216; // er8
  unsigned int *v217; // rax
  int v218; // edx
  unsigned int v219; // ecx
  unsigned int v220; // er8
  unsigned int *v221; // rax
  GLuint v222; // edx
  unsigned int *v223; // rax
  __int64 v224; // rcx

  v1 = Framework::GLManager::glm;
  for ( i = 0i64; i < 10; ++i )
  {
    if ( this->m_renderTextures.m_RenderBufferID[i] )
    {
      v4 = this->m_renderTextures.m_RenderBufferID[i];
      v5 = 0;
      if ( v4 > 0 )
      {
        m_buffers = v1->m_config.m_buffers;
        if ( m_buffers )
        {
          systemRenderID = v1->systemRenderID;
          do
          {
            if ( *systemRenderID == v4 )
              break;
            ++v5;
            ++systemRenderID;
          }
          while ( v5 < m_buffers );
        }
        if ( v5 == m_buffers )
          v1->m_buffer.m_freeIDs[v1->m_buffer.m_firstOccupiedIndex++] = v4;
      }
      this->m_renderTextures.m_RenderBufferID[i] = 0;
    }
    if ( this->m_renderTextures.m_RenderBufferDepthID[i] )
    {
      v8 = this->m_renderTextures.m_RenderBufferDepthID[i];
      v9 = 0;
      if ( v8 > 0 )
      {
        v10 = v1->m_config.m_buffers;
        if ( v10 )
        {
          v11 = v1->systemRenderID;
          do
          {
            if ( *v11 == v8 )
              break;
            ++v9;
            ++v11;
          }
          while ( v9 < v10 );
        }
        if ( v9 == v10 )
          v1->m_buffer.m_freeIDs[v1->m_buffer.m_firstOccupiedIndex++] = v8;
      }
      this->m_renderTextures.m_RenderBufferDepthID[i] = 0;
    }
    v12 = (char *)this + 80 * i;
    if ( *((_DWORD *)v12 + 194423) )
    {
      v13 = *((_DWORD *)v12 + 194423);
      v14 = 0;
      if ( v13 > 0 )
      {
        v15 = v1->m_config.m_buffers;
        if ( v15 )
        {
          v16 = v1->systemRenderID;
          do
          {
            if ( *v16 == v13 )
              break;
            ++v14;
            ++v16;
          }
          while ( v14 < v15 );
        }
        if ( v14 == v15 )
          v1->m_buffer.m_freeIDs[v1->m_buffer.m_firstOccupiedIndex++] = v13;
      }
      *((_DWORD *)v12 + 194423) = 0;
    }
    if ( *((_DWORD *)v12 + 194412) )
    {
      v17 = *((_DWORD *)v12 + 194412);
      v18 = ::m_TexID;
      v19 = 32i64;
      do
      {
        if ( v17 == *v18 )
          *v18 = 0;
        ++v18;
        --v19;
      }
      while ( v19 );
      glDeleteTextures(1, (const GLuint *)v12 + 194412);
      v1 = Framework::GLManager::glm;
      *((_DWORD *)v12 + 194412) = 0;
    }
    if ( *((_DWORD *)v12 + 194623) )
    {
      v20 = *((_DWORD *)v12 + 194623);
      v21 = 0;
      if ( v20 > 0 )
      {
        v22 = v1->m_config.m_buffers;
        if ( v22 )
        {
          v23 = v1->systemRenderID;
          do
          {
            if ( *v23 == v20 )
              break;
            ++v21;
            ++v23;
          }
          while ( v21 < v22 );
        }
        if ( v21 == v22 )
          v1->m_buffer.m_freeIDs[v1->m_buffer.m_firstOccupiedIndex++] = v20;
      }
      *((_DWORD *)v12 + 194623) = 0;
    }
    if ( *((_DWORD *)v12 + 194612) )
    {
      v24 = *((_DWORD *)v12 + 194612);
      v25 = ::m_TexID;
      v26 = 32i64;
      do
      {
        if ( v24 == *v25 )
          *v25 = 0;
        ++v25;
        --v26;
      }
      while ( v26 );
      glDeleteTextures(1, (const GLuint *)v12 + 194612);
      v1 = Framework::GLManager::glm;
      *((_DWORD *)v12 + 194612) = 0;
    }
    if ( *((_DWORD *)v12 + 194823) )
    {
      v27 = *((_DWORD *)v12 + 194823);
      v28 = 0;
      if ( v27 > 0 )
      {
        v29 = v1->m_config.m_buffers;
        if ( v29 )
        {
          v30 = v1->systemRenderID;
          do
          {
            if ( *v30 == v27 )
              break;
            ++v28;
            ++v30;
          }
          while ( v28 < v29 );
        }
        if ( v28 == v29 )
          v1->m_buffer.m_freeIDs[v1->m_buffer.m_firstOccupiedIndex++] = v27;
      }
      *((_DWORD *)v12 + 194823) = 0;
    }
    if ( *((_DWORD *)v12 + 194812) )
    {
      v31 = *((_DWORD *)v12 + 194812);
      v32 = ::m_TexID;
      v33 = 32i64;
      do
      {
        if ( v31 == *v32 )
          *v32 = 0;
        ++v32;
        --v33;
      }
      while ( v33 );
      glDeleteTextures(1, (const GLuint *)v12 + 194812);
      v1 = Framework::GLManager::glm;
      *((_DWORD *)v12 + 194812) = 0;
    }
    if ( *((_DWORD *)v12 + 195023) )
    {
      v34 = *((_DWORD *)v12 + 195023);
      v35 = 0;
      if ( v34 > 0 )
      {
        v36 = v1->m_config.m_buffers;
        if ( v36 )
        {
          v37 = v1->systemRenderID;
          do
          {
            if ( *v37 == v34 )
              break;
            ++v35;
            ++v37;
          }
          while ( v35 < v36 );
        }
        if ( v35 == v36 )
          v1->m_buffer.m_freeIDs[v1->m_buffer.m_firstOccupiedIndex++] = v34;
      }
      *((_DWORD *)v12 + 195023) = 0;
    }
    if ( *((_DWORD *)v12 + 195012) )
    {
      v38 = *((_DWORD *)v12 + 195012);
      v39 = ::m_TexID;
      v40 = 32i64;
      do
      {
        if ( v38 == *v39 )
          *v39 = 0;
        ++v39;
        --v40;
      }
      while ( v40 );
      glDeleteTextures(1, (const GLuint *)v12 + 195012);
      v1 = Framework::GLManager::glm;
      *((_DWORD *)v12 + 195012) = 0;
    }
    if ( *((_DWORD *)v12 + 195223) )
    {
      v41 = *((_DWORD *)v12 + 195223);
      v42 = 0;
      if ( v41 > 0 )
      {
        v43 = v1->m_config.m_buffers;
        if ( v43 )
        {
          v44 = v1->systemRenderID;
          do
          {
            if ( *v44 == v41 )
              break;
            ++v42;
            ++v44;
          }
          while ( v42 < v43 );
        }
        if ( v42 == v43 )
          v1->m_buffer.m_freeIDs[v1->m_buffer.m_firstOccupiedIndex++] = v41;
      }
      *((_DWORD *)v12 + 195223) = 0;
    }
    if ( *((_DWORD *)v12 + 195212) )
    {
      v45 = *((_DWORD *)v12 + 195212);
      v46 = ::m_TexID;
      v47 = 32i64;
      do
      {
        if ( v45 == *v46 )
          *v46 = 0;
        ++v46;
        --v47;
      }
      while ( v47 );
      glDeleteTextures(1, (const GLuint *)v12 + 195212);
      v1 = Framework::GLManager::glm;
      *((_DWORD *)v12 + 195212) = 0;
    }
  }
  m_ShadowTransRenderBufferID = this->m_renderTextures.m_ShadowTransRenderBufferID;
  v49 = 5i64;
  p_m_TexID = &this->m_renderTextures.m_ShadowTransparencyMap[0].m_TexID;
  do
  {
    v51 = *(m_ShadowTransRenderBufferID - 106);
    if ( v51 )
    {
      v52 = 0;
      if ( v51 > 0 )
      {
        v53 = v1->m_config.m_buffers;
        if ( v53 )
        {
          v54 = v1->systemRenderID;
          do
          {
            if ( *v54 == v51 )
              break;
            ++v52;
            ++v54;
          }
          while ( v52 < v53 );
        }
        if ( v52 == v53 )
          v1->m_buffer.m_freeIDs[v1->m_buffer.m_firstOccupiedIndex++] = v51;
      }
      *(m_ShadowTransRenderBufferID - 106) = 0;
    }
    v55 = *(p_m_TexID - 95);
    if ( v55 )
    {
      v56 = 0;
      if ( v55 > 0 )
      {
        v57 = v1->m_config.m_buffers;
        if ( v57 )
        {
          v58 = v1->systemRenderID;
          do
          {
            if ( *v58 == v55 )
              break;
            ++v56;
            ++v58;
          }
          while ( v56 < v57 );
        }
        if ( v56 == v57 )
          v1->m_buffer.m_freeIDs[v1->m_buffer.m_firstOccupiedIndex++] = v55;
      }
      *(p_m_TexID - 95) = 0;
    }
    v59 = *(p_m_TexID - 106);
    if ( v59 )
    {
      v60 = ::m_TexID;
      v61 = 32i64;
      do
      {
        if ( v59 == *v60 )
          *v60 = 0;
        ++v60;
        --v61;
      }
      while ( v61 );
      glDeleteTextures(1, p_m_TexID - 106);
      v1 = Framework::GLManager::glm;
      *(p_m_TexID - 106) = 0;
    }
    v62 = *m_ShadowTransRenderBufferID;
    if ( *m_ShadowTransRenderBufferID )
    {
      v63 = 0;
      if ( v62 > 0 )
      {
        v64 = v1->m_config.m_buffers;
        if ( v64 )
        {
          v65 = v1->systemRenderID;
          do
          {
            if ( *v65 == v62 )
              break;
            ++v63;
            ++v65;
          }
          while ( v63 < v64 );
        }
        if ( v63 == v64 )
          v1->m_buffer.m_freeIDs[v1->m_buffer.m_firstOccupiedIndex++] = v62;
      }
      *m_ShadowTransRenderBufferID = 0;
    }
    v66 = p_m_TexID[11];
    if ( v66 )
    {
      v67 = 0;
      if ( v66 > 0 )
      {
        v68 = v1->m_config.m_buffers;
        if ( v68 )
        {
          v69 = v1->systemRenderID;
          do
          {
            if ( *v69 == v66 )
              break;
            ++v67;
            ++v69;
          }
          while ( v67 < v68 );
        }
        if ( v67 == v68 )
          v1->m_buffer.m_freeIDs[v1->m_buffer.m_firstOccupiedIndex++] = v66;
      }
      p_m_TexID[11] = 0;
    }
    v70 = *p_m_TexID;
    if ( *p_m_TexID )
    {
      v71 = ::m_TexID;
      v72 = 32i64;
      do
      {
        if ( v70 == *v71 )
          *v71 = 0;
        ++v71;
        --v72;
      }
      while ( v72 );
      glDeleteTextures(1, p_m_TexID);
      v1 = Framework::GLManager::glm;
      *p_m_TexID = 0;
    }
    ++m_ShadowTransRenderBufferID;
    p_m_TexID += 20;
    --v49;
  }
  while ( v49 );
  v73 = &this->m_renderTextures.m_CombinedMaskTexture[0].m_TexID;
  v74 = 4i64;
  do
  {
    v75 = v73[11];
    if ( v75 )
    {
      v76 = 0;
      if ( v75 > 0 )
      {
        v77 = v1->m_config.m_buffers;
        if ( v77 )
        {
          v78 = v1->systemRenderID;
          do
          {
            if ( *v78 == v75 )
              break;
            ++v76;
            ++v78;
          }
          while ( v76 < v77 );
        }
        if ( v76 == v77 )
          v1->m_buffer.m_freeIDs[v1->m_buffer.m_firstOccupiedIndex++] = v75;
      }
      v73[11] = 0;
    }
    v79 = *v73;
    if ( *v73 )
    {
      v80 = ::m_TexID;
      v81 = 32i64;
      do
      {
        if ( v79 == *v80 )
          *v80 = 0;
        ++v80;
        --v81;
      }
      while ( v81 );
      glDeleteTextures(1, v73);
      v1 = Framework::GLManager::glm;
      *v73 = 0;
    }
    v73 += 20;
    --v74;
  }
  while ( v74 );
  if ( this->m_renderTextures.m_RenderBufferBloomDepthMapTexture.m_FrameBufferID )
  {
    m_FrameBufferID = this->m_renderTextures.m_RenderBufferBloomDepthMapTexture.m_FrameBufferID;
    v83 = 0;
    if ( m_FrameBufferID > 0 )
    {
      v84 = v1->m_config.m_buffers;
      if ( v84 )
      {
        v85 = v1->systemRenderID;
        do
        {
          if ( *v85 == m_FrameBufferID )
            break;
          ++v83;
          ++v85;
        }
        while ( v83 < v84 );
      }
      if ( v83 == v84 )
        v1->m_buffer.m_freeIDs[v1->m_buffer.m_firstOccupiedIndex++] = m_FrameBufferID;
    }
    this->m_renderTextures.m_RenderBufferBloomDepthMapTexture.m_FrameBufferID = 0;
  }
  if ( this->m_renderTextures.m_RenderBufferBloomDepthMapTexture.m_TexID )
  {
    m_TexID = this->m_renderTextures.m_RenderBufferBloomDepthMapTexture.m_TexID;
    v87 = ::m_TexID;
    v88 = 32i64;
    do
    {
      if ( m_TexID == *v87 )
        *v87 = 0;
      ++v87;
      --v88;
    }
    while ( v88 );
    glDeleteTextures(1, &this->m_renderTextures.m_RenderBufferBloomDepthMapTexture.m_TexID);
    v1 = Framework::GLManager::glm;
    this->m_renderTextures.m_RenderBufferBloomDepthMapTexture.m_TexID = 0;
  }
  if ( this->m_renderTextures.m_BloomMapTexture.m_FrameBufferID )
  {
    v89 = this->m_renderTextures.m_BloomMapTexture.m_FrameBufferID;
    v90 = 0;
    if ( v89 > 0 )
    {
      v91 = v1->m_config.m_buffers;
      if ( v91 )
      {
        v92 = v1->systemRenderID;
        do
        {
          if ( *v92 == v89 )
            break;
          ++v90;
          ++v92;
        }
        while ( v90 < v91 );
      }
      if ( v90 == v91 )
        v1->m_buffer.m_freeIDs[v1->m_buffer.m_firstOccupiedIndex++] = v89;
    }
    this->m_renderTextures.m_BloomMapTexture.m_FrameBufferID = 0;
  }
  if ( this->m_renderTextures.m_BloomMapTexture.m_TexID )
  {
    v93 = this->m_renderTextures.m_BloomMapTexture.m_TexID;
    v94 = ::m_TexID;
    v95 = 32i64;
    do
    {
      if ( v93 == *v94 )
        *v94 = 0;
      ++v94;
      --v95;
    }
    while ( v95 );
    glDeleteTextures(1, &this->m_renderTextures.m_BloomMapTexture.m_TexID);
    v1 = Framework::GLManager::glm;
    this->m_renderTextures.m_BloomMapTexture.m_TexID = 0;
  }
  if ( this->m_renderTextures.m_BloomDepthMapTexture.m_FrameBufferID )
  {
    v96 = this->m_renderTextures.m_BloomDepthMapTexture.m_FrameBufferID;
    v97 = 0;
    if ( v96 > 0 )
    {
      v98 = v1->m_config.m_buffers;
      if ( v98 )
      {
        v99 = v1->systemRenderID;
        do
        {
          if ( *v99 == v96 )
            break;
          ++v97;
          ++v99;
        }
        while ( v97 < v98 );
      }
      if ( v97 == v98 )
        v1->m_buffer.m_freeIDs[v1->m_buffer.m_firstOccupiedIndex++] = v96;
    }
    this->m_renderTextures.m_BloomDepthMapTexture.m_FrameBufferID = 0;
  }
  if ( this->m_renderTextures.m_BloomDepthMapTexture.m_TexID )
  {
    v100 = this->m_renderTextures.m_BloomDepthMapTexture.m_TexID;
    v101 = ::m_TexID;
    v102 = 32i64;
    do
    {
      if ( v100 == *v101 )
        *v101 = 0;
      ++v101;
      --v102;
    }
    while ( v102 );
    glDeleteTextures(1, &this->m_renderTextures.m_BloomDepthMapTexture.m_TexID);
    v1 = Framework::GLManager::glm;
    this->m_renderTextures.m_BloomDepthMapTexture.m_TexID = 0;
  }
  if ( this->m_renderTextures.m_BloomMapDownSampleTexture[0].m_FrameBufferID )
  {
    v103 = this->m_renderTextures.m_BloomMapDownSampleTexture[0].m_FrameBufferID;
    v104 = 0;
    if ( v103 > 0 )
    {
      v105 = v1->m_config.m_buffers;
      if ( v105 )
      {
        v106 = v1->systemRenderID;
        do
        {
          if ( *v106 == v103 )
            break;
          ++v104;
          ++v106;
        }
        while ( v104 < v105 );
      }
      if ( v104 == v105 )
        v1->m_buffer.m_freeIDs[v1->m_buffer.m_firstOccupiedIndex++] = v103;
    }
    this->m_renderTextures.m_BloomMapDownSampleTexture[0].m_FrameBufferID = 0;
  }
  if ( this->m_renderTextures.m_BloomMapDownSampleTexture[0].m_TexID )
  {
    v107 = this->m_renderTextures.m_BloomMapDownSampleTexture[0].m_TexID;
    v108 = ::m_TexID;
    v109 = 32i64;
    do
    {
      if ( v107 == *v108 )
        *v108 = 0;
      ++v108;
      --v109;
    }
    while ( v109 );
    glDeleteTextures(1, &this->m_renderTextures.m_BloomMapDownSampleTexture[0].m_TexID);
    v1 = Framework::GLManager::glm;
    this->m_renderTextures.m_BloomMapDownSampleTexture[0].m_TexID = 0;
  }
  if ( this->m_renderTextures.m_BloomMapDownSampleTexture[1].m_FrameBufferID )
  {
    v110 = this->m_renderTextures.m_BloomMapDownSampleTexture[1].m_FrameBufferID;
    v111 = 0;
    if ( v110 > 0 )
    {
      v112 = v1->m_config.m_buffers;
      if ( v112 )
      {
        v113 = v1->systemRenderID;
        do
        {
          if ( *v113 == v110 )
            break;
          ++v111;
          ++v113;
        }
        while ( v111 < v112 );
      }
      if ( v111 == v112 )
        v1->m_buffer.m_freeIDs[v1->m_buffer.m_firstOccupiedIndex++] = v110;
    }
    this->m_renderTextures.m_BloomMapDownSampleTexture[1].m_FrameBufferID = 0;
  }
  if ( this->m_renderTextures.m_BloomMapDownSampleTexture[1].m_TexID )
  {
    v114 = this->m_renderTextures.m_BloomMapDownSampleTexture[1].m_TexID;
    v115 = ::m_TexID;
    v116 = 32i64;
    do
    {
      if ( v114 == *v115 )
        *v115 = 0;
      ++v115;
      --v116;
    }
    while ( v116 );
    glDeleteTextures(1, &this->m_renderTextures.m_BloomMapDownSampleTexture[1].m_TexID);
    v1 = Framework::GLManager::glm;
    this->m_renderTextures.m_BloomMapDownSampleTexture[1].m_TexID = 0;
  }
  if ( this->m_renderTextures.m_BloomMapDownSampleTexture[2].m_FrameBufferID )
  {
    v117 = this->m_renderTextures.m_BloomMapDownSampleTexture[2].m_FrameBufferID;
    v118 = 0;
    if ( v117 > 0 )
    {
      v119 = v1->m_config.m_buffers;
      if ( v119 )
      {
        v120 = v1->systemRenderID;
        do
        {
          if ( *v120 == v117 )
            break;
          ++v118;
          ++v120;
        }
        while ( v118 < v119 );
      }
      if ( v118 == v119 )
        v1->m_buffer.m_freeIDs[v1->m_buffer.m_firstOccupiedIndex++] = v117;
    }
    this->m_renderTextures.m_BloomMapDownSampleTexture[2].m_FrameBufferID = 0;
  }
  if ( this->m_renderTextures.m_BloomMapDownSampleTexture[2].m_TexID )
  {
    v121 = this->m_renderTextures.m_BloomMapDownSampleTexture[2].m_TexID;
    v122 = ::m_TexID;
    v123 = 32i64;
    do
    {
      if ( v121 == *v122 )
        *v122 = 0;
      ++v122;
      --v123;
    }
    while ( v123 );
    glDeleteTextures(1, &this->m_renderTextures.m_BloomMapDownSampleTexture[2].m_TexID);
    v1 = Framework::GLManager::glm;
    this->m_renderTextures.m_BloomMapDownSampleTexture[2].m_TexID = 0;
  }
  for ( j = 0i64; j < 2; ++j )
  {
    v125 = &this->m_renderTextures.m_CharacterTexture[j];
    if ( v125->m_FrameBufferID )
    {
      v126 = v125->m_FrameBufferID;
      v127 = 0;
      if ( v126 > 0 )
      {
        v128 = v1->m_config.m_buffers;
        if ( v128 )
        {
          v129 = v1->systemRenderID;
          do
          {
            if ( *v129 == v126 )
              break;
            ++v127;
            ++v129;
          }
          while ( v127 < v128 );
        }
        if ( v127 == v128 )
          v1->m_buffer.m_freeIDs[v1->m_buffer.m_firstOccupiedIndex++] = v126;
      }
      v125->m_FrameBufferID = 0;
    }
    v130 = &v125->m_TexID;
    if ( v125->m_TexID )
    {
      v131 = *v130;
      v132 = ::m_TexID;
      v133 = 32i64;
      do
      {
        if ( v131 == *v132 )
          *v132 = 0;
        ++v132;
        --v133;
      }
      while ( v133 );
      glDeleteTextures(1, v130);
      v1 = Framework::GLManager::glm;
      *v130 = 0;
    }
    v134 = &this->m_renderTextures.m_ReflectionTexture[j];
    if ( v134->m_FrameBufferID )
    {
      v135 = v134->m_FrameBufferID;
      v136 = 0;
      if ( v135 > 0 )
      {
        v137 = v1->m_config.m_buffers;
        if ( v137 )
        {
          v138 = v1->systemRenderID;
          do
          {
            if ( *v138 == v135 )
              break;
            ++v136;
            ++v138;
          }
          while ( v136 < v137 );
        }
        if ( v136 == v137 )
          v1->m_buffer.m_freeIDs[v1->m_buffer.m_firstOccupiedIndex++] = v135;
      }
      v134->m_FrameBufferID = 0;
    }
    v139 = &v134->m_TexID;
    if ( v134->m_TexID )
    {
      v140 = *v139;
      v141 = ::m_TexID;
      v142 = 32i64;
      do
      {
        if ( v140 == *v141 )
          *v141 = 0;
        ++v141;
        --v142;
      }
      while ( v142 );
      glDeleteTextures(1, v139);
      v1 = Framework::GLManager::glm;
      *v139 = 0;
    }
    v143 = (char *)this + 80 * j;
    if ( *((_DWORD *)v143 + 196439) )
    {
      v144 = *((_DWORD *)v143 + 196439);
      v145 = 0;
      if ( v144 > 0 )
      {
        v146 = v1->m_config.m_buffers;
        if ( v146 )
        {
          v147 = v1->systemRenderID;
          do
          {
            if ( *v147 == v144 )
              break;
            ++v145;
            ++v147;
          }
          while ( v145 < v146 );
        }
        if ( v145 == v146 )
          v1->m_buffer.m_freeIDs[v1->m_buffer.m_firstOccupiedIndex++] = v144;
      }
      *((_DWORD *)v143 + 196439) = 0;
    }
    if ( *((_DWORD *)v143 + 196428) )
    {
      v148 = *((_DWORD *)v143 + 196428);
      v149 = ::m_TexID;
      v150 = 32i64;
      do
      {
        if ( v148 == *v149 )
          *v149 = 0;
        ++v149;
        --v150;
      }
      while ( v150 );
      glDeleteTextures(1, (const GLuint *)v143 + 196428);
      v1 = Framework::GLManager::glm;
      *((_DWORD *)v143 + 196428) = 0;
    }
    if ( *((_DWORD *)v143 + 196479) )
    {
      v151 = *((_DWORD *)v143 + 196479);
      v152 = 0;
      if ( v151 > 0 )
      {
        v153 = v1->m_config.m_buffers;
        if ( v153 )
        {
          v154 = v1->systemRenderID;
          do
          {
            if ( *v154 == v151 )
              break;
            ++v152;
            ++v154;
          }
          while ( v152 < v153 );
        }
        if ( v152 == v153 )
          v1->m_buffer.m_freeIDs[v1->m_buffer.m_firstOccupiedIndex++] = v151;
      }
      *((_DWORD *)v143 + 196479) = 0;
    }
    if ( *((_DWORD *)v143 + 196468) )
    {
      v155 = *((_DWORD *)v143 + 196468);
      v156 = ::m_TexID;
      v157 = 32i64;
      do
      {
        if ( v155 == *v156 )
          *v156 = 0;
        ++v156;
        --v157;
      }
      while ( v157 );
      glDeleteTextures(1, (const GLuint *)v143 + 196468);
      v1 = Framework::GLManager::glm;
      *((_DWORD *)v143 + 196468) = 0;
    }
    v158 = &this->m_renderTextures.m_CharacterHighlights[j];
    if ( v158->m_FrameBufferID )
    {
      v159 = v158->m_FrameBufferID;
      v160 = 0;
      if ( v159 > 0 )
      {
        v161 = v1->m_config.m_buffers;
        if ( v161 )
        {
          v162 = v1->systemRenderID;
          do
          {
            if ( *v162 == v159 )
              break;
            ++v160;
            ++v162;
          }
          while ( v160 < v161 );
        }
        if ( v160 == v161 )
          v1->m_buffer.m_freeIDs[v1->m_buffer.m_firstOccupiedIndex++] = v159;
      }
      v158->m_FrameBufferID = 0;
    }
    v163 = &v158->m_TexID;
    if ( v158->m_TexID )
    {
      v164 = *v163;
      v165 = ::m_TexID;
      v166 = 32i64;
      do
      {
        if ( v164 == *v165 )
          *v165 = 0;
        ++v165;
        --v166;
      }
      while ( v166 );
      glDeleteTextures(1, v163);
      v1 = Framework::GLManager::glm;
      *v163 = 0;
    }
    v167 = 5i64;
    v168 = &this->m_renderTextures.m_CharacterFramesDepth[j][0].m_TexID;
    do
    {
      v169 = *(v168 - 189);
      if ( v169 )
      {
        v170 = 0;
        if ( v169 > 0 )
        {
          v171 = v1->m_config.m_buffers;
          if ( v171 )
          {
            v172 = v1->systemRenderID;
            do
            {
              if ( *v172 == v169 )
                break;
              ++v170;
              ++v172;
            }
            while ( v170 < v171 );
          }
          if ( v170 == v171 )
            v1->m_buffer.m_freeIDs[v1->m_buffer.m_firstOccupiedIndex++] = v169;
        }
        *(v168 - 189) = 0;
      }
      v173 = *(v168 - 200);
      if ( v173 )
      {
        v174 = ::m_TexID;
        v175 = 32i64;
        do
        {
          if ( v173 == *v174 )
            *v174 = 0;
          ++v174;
          --v175;
        }
        while ( v175 );
        glDeleteTextures(1, v168 - 200);
        v1 = Framework::GLManager::glm;
        *(v168 - 200) = 0;
      }
      v176 = v168[11];
      if ( v176 )
      {
        v177 = 0;
        if ( v176 > 0 )
        {
          v178 = v1->m_config.m_buffers;
          if ( v178 )
          {
            v179 = v1->systemRenderID;
            do
            {
              if ( *v179 == v176 )
                break;
              ++v177;
              ++v179;
            }
            while ( v177 < v178 );
          }
          if ( v177 == v178 )
            v1->m_buffer.m_freeIDs[v1->m_buffer.m_firstOccupiedIndex++] = v176;
        }
        v168[11] = 0;
      }
      v180 = *v168;
      if ( *v168 )
      {
        v181 = ::m_TexID;
        v182 = 32i64;
        do
        {
          if ( v180 == *v181 )
            *v181 = 0;
          ++v181;
          --v182;
        }
        while ( v182 );
        glDeleteTextures(1, v168);
        v1 = Framework::GLManager::glm;
        *v168 = 0;
      }
      v168 += 20;
      --v167;
    }
    while ( v167 );
  }
  if ( this->m_renderTextures.m_GameOutputTexture.m_FrameBufferID )
  {
    v183 = this->m_renderTextures.m_GameOutputTexture.m_FrameBufferID;
    v184 = 0;
    if ( v183 > 0 )
    {
      v185 = v1->m_config.m_buffers;
      if ( v185 )
      {
        v186 = v1->systemRenderID;
        do
        {
          if ( *v186 == v183 )
            break;
          ++v184;
          ++v186;
        }
        while ( v184 < v185 );
      }
      if ( v184 == v185 )
        v1->m_buffer.m_freeIDs[v1->m_buffer.m_firstOccupiedIndex++] = v183;
    }
    this->m_renderTextures.m_GameOutputTexture.m_FrameBufferID = 0;
  }
  if ( this->m_renderTextures.m_GameOutputTexture.m_TexID )
  {
    v187 = this->m_renderTextures.m_GameOutputTexture.m_TexID;
    v188 = ::m_TexID;
    v189 = 32i64;
    do
    {
      if ( v187 == *v188 )
        *v188 = 0;
      ++v188;
      --v189;
    }
    while ( v189 );
    glDeleteTextures(1, &this->m_renderTextures.m_GameOutputTexture.m_TexID);
    v1 = Framework::GLManager::glm;
    this->m_renderTextures.m_GameOutputTexture.m_TexID = 0;
  }
  if ( this->m_renderTextures.m_DownsampledTexture.m_FrameBufferID )
  {
    v190 = this->m_renderTextures.m_DownsampledTexture.m_FrameBufferID;
    v191 = 0;
    if ( v190 > 0 )
    {
      v192 = v1->m_config.m_buffers;
      if ( v192 )
      {
        v193 = v1->systemRenderID;
        do
        {
          if ( *v193 == v190 )
            break;
          ++v191;
          ++v193;
        }
        while ( v191 < v192 );
      }
      if ( v191 == v192 )
        v1->m_buffer.m_freeIDs[v1->m_buffer.m_firstOccupiedIndex++] = v190;
    }
    this->m_renderTextures.m_DownsampledTexture.m_FrameBufferID = 0;
  }
  if ( this->m_renderTextures.m_DownsampledTexture.m_TexID )
  {
    v194 = this->m_renderTextures.m_DownsampledTexture.m_TexID;
    v195 = ::m_TexID;
    v196 = 32i64;
    do
    {
      if ( v194 == *v195 )
        *v195 = 0;
      ++v195;
      --v196;
    }
    while ( v196 );
    glDeleteTextures(1, &this->m_renderTextures.m_DownsampledTexture.m_TexID);
    v1 = Framework::GLManager::glm;
    this->m_renderTextures.m_DownsampledTexture.m_TexID = 0;
  }
  if ( this->m_renderTextures.m_ScreenBlurTexture.m_FrameBufferID )
  {
    v197 = this->m_renderTextures.m_ScreenBlurTexture.m_FrameBufferID;
    v198 = 0;
    if ( v197 > 0 )
    {
      v199 = v1->m_config.m_buffers;
      if ( v199 )
      {
        v200 = v1->systemRenderID;
        do
        {
          if ( *v200 == v197 )
            break;
          ++v198;
          ++v200;
        }
        while ( v198 < v199 );
      }
      if ( v198 == v199 )
        v1->m_buffer.m_freeIDs[v1->m_buffer.m_firstOccupiedIndex++] = v197;
    }
    this->m_renderTextures.m_ScreenBlurTexture.m_FrameBufferID = 0;
  }
  if ( this->m_renderTextures.m_ScreenBlurTexture.m_TexID )
  {
    v201 = this->m_renderTextures.m_ScreenBlurTexture.m_TexID;
    v202 = ::m_TexID;
    v203 = 32i64;
    do
    {
      if ( v201 == *v202 )
        *v202 = 0;
      ++v202;
      --v203;
    }
    while ( v203 );
    glDeleteTextures(1, &this->m_renderTextures.m_ScreenBlurTexture.m_TexID);
    v1 = Framework::GLManager::glm;
    this->m_renderTextures.m_ScreenBlurTexture.m_TexID = 0;
  }
  if ( this->m_renderTextures.m_TempTexture.m_FrameBufferID )
  {
    v204 = this->m_renderTextures.m_TempTexture.m_FrameBufferID;
    v205 = 0;
    if ( v204 > 0 )
    {
      v206 = v1->m_config.m_buffers;
      if ( v206 )
      {
        v207 = v1->systemRenderID;
        do
        {
          if ( *v207 == v204 )
            break;
          ++v205;
          ++v207;
        }
        while ( v205 < v206 );
      }
      if ( v205 == v206 )
        v1->m_buffer.m_freeIDs[v1->m_buffer.m_firstOccupiedIndex++] = v204;
    }
    this->m_renderTextures.m_TempTexture.m_FrameBufferID = 0;
  }
  if ( this->m_renderTextures.m_TempTexture.m_TexID )
  {
    v208 = this->m_renderTextures.m_TempTexture.m_TexID;
    v209 = ::m_TexID;
    v210 = 32i64;
    do
    {
      if ( v208 == *v209 )
        *v209 = 0;
      ++v209;
      --v210;
    }
    while ( v210 );
    glDeleteTextures(1, &this->m_renderTextures.m_TempTexture.m_TexID);
    v1 = Framework::GLManager::glm;
    this->m_renderTextures.m_TempTexture.m_TexID = 0;
  }
  m_BlendRenderBufferId = this->m_renderTextures.m_BlendRenderBufferId;
  v212 = 2i64;
  v213 = &this->m_renderTextures.m_BlendBufferTexture[0].m_TexID;
  do
  {
    v214 = *m_BlendRenderBufferId;
    if ( *m_BlendRenderBufferId )
    {
      v215 = 0;
      if ( v214 > 0 )
      {
        v216 = v1->m_config.m_buffers;
        if ( v216 )
        {
          v217 = v1->systemRenderID;
          do
          {
            if ( *v217 == v214 )
              break;
            ++v215;
            ++v217;
          }
          while ( v215 < v216 );
        }
        if ( v215 == v216 )
          v1->m_buffer.m_freeIDs[v1->m_buffer.m_firstOccupiedIndex++] = v214;
      }
      *m_BlendRenderBufferId = 0;
    }
    v218 = v213[11];
    if ( v218 )
    {
      v219 = 0;
      if ( v218 > 0 )
      {
        v220 = v1->m_config.m_buffers;
        if ( v220 )
        {
          v221 = v1->systemRenderID;
          do
          {
            if ( *v221 == v218 )
              break;
            ++v219;
            ++v221;
          }
          while ( v219 < v220 );
        }
        if ( v219 == v220 )
          v1->m_buffer.m_freeIDs[v1->m_buffer.m_firstOccupiedIndex++] = v218;
      }
      v213[11] = 0;
    }
    v222 = *v213;
    if ( *v213 )
    {
      v223 = ::m_TexID;
      v224 = 32i64;
      do
      {
        if ( v222 == *v223 )
          *v223 = 0;
        ++v223;
        --v224;
      }
      while ( v224 );
      glDeleteTextures(1, v213);
      v1 = Framework::GLManager::glm;
      *v213 = 0;
    }
    ++m_BlendRenderBufferId;
    v213 += 20;
    --v212;
  }
  while ( v212 );
}

__int64 __fastcall OGLRender::selectEffectShader(OGLRender *this, int flag)
{
  int v3; // ecx
  int v4; // edx
  int v5; // er9
  int v6; // eax

  v3 = 1;
  if ( (flag & 0x100000) != 0 )
  {
    v4 = 1;
  }
  else
  {
    v4 = 0;
    if ( (flag & 0x200000) != 0 )
      v4 = 2;
  }
  if ( (flag & 3) == 3 )
  {
    v5 = 3;
  }
  else if ( (flag & 1) != 0 )
  {
    v5 = 1;
  }
  else if ( (flag & 2) != 0 )
  {
    v5 = 2;
  }
  else if ( (flag & 4) != 0 )
  {
    v5 = 4;
  }
  else
  {
    v5 = 0;
    if ( (flag & 8) != 0 )
      v5 = 5;
  }
  if ( (flag & 0x20) != 0 )
  {
    v6 = 1;
  }
  else if ( (flag & 0x40) != 0 )
  {
    v6 = 2;
  }
  else if ( (flag & 0x80u) == 0 )
  {
    v6 = 0;
    if ( (flag & 0x10) != 0 )
      v6 = 4;
  }
  else
  {
    v6 = 3;
  }
  if ( (flag & 0x100) == 0 )
  {
    if ( (flag & 0x200) != 0 )
    {
      v3 = 2;
    }
    else if ( (flag & 0x400) != 0 )
    {
      v3 = 3;
    }
    else
    {
      v3 = 0;
      if ( (flag & 0x800) != 0 )
        v3 = 4;
    }
  }
  return v5
       + ((flag & 0x4000) != 0 ? 0x258 : 0)
       + 30 * (v3 + 40 * (v4 + ((flag & 0x10000000) != 0 ? 6 : 0) + ((flag & 0x1000000) != 0 ? 3 : 0)))
       + 6 * v6
       + ((flag & 0x2000) != 0 ? 0x12C : 0)
       + ((flag & 0x1000) != 0 ? 0x96 : 0);
}

void __fastcall OGLRender::setConfig(OGLRender *this, int width, unsigned __int8 *height, float realw, float realh)
{
  unsigned int v6; // er15
  unsigned int v7; // er14
  unsigned __int8 *p_crypt; // rdi
  __int64 VertShader; // rbp
  unsigned __int8 *v10; // r9
  OGLShader *v11; // rbx
  unsigned int v12; // esi
  unsigned __int8 v13; // r9
  unsigned __int8 v14; // r9
  unsigned int v15; // esi
  unsigned __int8 *v16; // r9
  unsigned int v17; // edi
  unsigned __int8 *v18; // r8
  unsigned int v19; // er14
  unsigned __int8 *v20; // r9
  unsigned int v21; // ebp
  OGLShader *v22; // rbx
  unsigned __int8 v23; // r9
  OGLShader *v24; // rbx
  unsigned __int8 v25; // r9
  KOFShaderManager *v26; // rcx
  int Program; // eax
  KOFShaderManager *v28; // r11
  KOFShaderManager *v29; // rcx
  int v30; // eax
  KOFShaderManager *v31; // r11
  __int64 *v32; // rbx
  int v33; // [rsp+20h] [rbp-88h]
  int v34; // [rsp+20h] [rbp-88h]
  const _SHADER_INFO *v35; // [rsp+28h] [rbp-80h]
  const _SHADER_INFO *v36; // [rsp+28h] [rbp-80h]
  unsigned int shader; // [rsp+50h] [rbp-58h] BYREF
  OGLShader *v38; // [rsp+58h] [rbp-50h]
  __int64 v39; // [rsp+60h] [rbp-48h]
  OGLShader *v40; // [rsp+68h] [rbp-40h] BYREF
  unsigned int v41; // [rsp+70h] [rbp-38h]
  unsigned int v42; // [rsp+74h] [rbp-34h]

  v39 = -2i64;
  this->m_Width = width;
  this->m_Height = (int)height;
  this->m_RealWidth = realw;
  this->m_RealHeight = realh;
  v6 = 0;
  v7 = 0;
  p_crypt = &ShaderFileTbl[0].crypt;
  do
  {
    VertShader = KOFShaderManager::loadVertShader(*((const char **)p_crypt - 2), *p_crypt, height);
    shader = 0;
    KOFShaderManager::loadFragShader(&shader, *((const char **)p_crypt - 1), *p_crypt, v10);
    if ( (*((_DWORD *)p_crypt + 1) & 0x2000) != 0 )
    {
      v11 = (OGLShader *)operator new(0x40ui64);
      v38 = v11;
      v11->m_Program = 0;
      v11->m_piGLAttrib.glValue = 0i64;
      v11->m_iGLAttribNum = 0;
      v11->m_piGLUniform = 0i64;
      v11->m_piGLAttrib.divisor = 0i64;
      v11->m_fragFile = 0i64;
      v11->m_programSlot = -1;
      v12 = shader;
      OGLShader::createShader(v11, (unsigned int)VertShader, shader, v14, v33, v35, 6, commonUniform2DFog);
    }
    else
    {
      v11 = (OGLShader *)operator new(0x40ui64);
      v40 = v11;
      v11->m_Program = 0;
      v11->m_piGLAttrib.glValue = 0i64;
      v11->m_iGLAttribNum = 0;
      v11->m_piGLUniform = 0i64;
      v11->m_piGLAttrib.divisor = 0i64;
      v11->m_fragFile = 0i64;
      v11->m_programSlot = -1;
      v12 = shader;
      OGLShader::createShader(v11, (unsigned int)VertShader, shader, v13, v33, v35, 2, commonUniform2D);
    }
    this->m_ShaderTbl[*((int *)p_crypt + 1)] = v11;
    _glewDeleteShader((unsigned int)AgSingleton<KOFShaderManager>::ms_instance[4 * VertShader + 360451].__vftable);
    _glewDeleteShader((unsigned int)AgSingleton<KOFShaderManager>::ms_instance[4 * v12 + 360451].__vftable);
    ++v7;
    p_crypt += 24;
  }
  while ( v7 < 0x12 );
  v15 = KOFShaderManager::loadVertShader("shader/v_ctsMovie_vv.sb", 0, height);
  LODWORD(v40) = v15;
  shader = 0;
  KOFShaderManager::loadFragShader(&shader, "shader/v_ctsMovie_p.sb", 0, v16);
  v17 = shader;
  HIDWORD(v40) = shader;
  v19 = KOFShaderManager::loadVertShader("shader/v_ctsCapture_vv.sb", 0, v18);
  v41 = v19;
  shader = 0;
  KOFShaderManager::loadFragShader(&shader, "shader/v_ctsCapture_p.sb", 0, v20);
  v21 = shader;
  v42 = shader;
  v22 = (OGLShader *)operator new(0x40ui64);
  v38 = v22;
  v22->m_Program = 0;
  v22->m_piGLAttrib.glValue = 0i64;
  v22->m_iGLAttribNum = 0;
  v22->m_piGLUniform = 0i64;
  v22->m_piGLAttrib.divisor = 0i64;
  v22->m_fragFile = 0i64;
  v22->m_programSlot = -1;
  OGLShader::createShader(v22, v15, v17, v23, v33, v35, 2, commonUniform2D);
  this->m_ShaderFXTbl[7998] = v22;
  v24 = (OGLShader *)operator new(0x40ui64);
  v38 = v24;
  v24->m_Program = 0;
  v24->m_piGLAttrib.glValue = 0i64;
  v24->m_iGLAttribNum = 0;
  v24->m_piGLUniform = 0i64;
  v24->m_piGLAttrib.divisor = 0i64;
  v24->m_fragFile = 0i64;
  v24->m_programSlot = -1;
  OGLShader::createShader(v24, v19, v21, v25, v34, v36, 2, commonUniform2D);
  this->m_ShaderFXTbl[7999] = v24;
  Program = KOFShaderManager::findProgram(v26, this->m_ShaderFXTbl[7998]->m_Program);
  KOFShaderManager::link(v28, &v28->m_program[Program]);
  v30 = KOFShaderManager::findProgram(v29, this->m_ShaderFXTbl[7999]->m_Program);
  KOFShaderManager::link(v31, &v31->m_program[v30]);
  v32 = (__int64 *)&v40;
  do
  {
    _glewDeleteShader((unsigned int)AgSingleton<KOFShaderManager>::ms_instance[4 * *(unsigned int *)v32 + 360451].__vftable);
    ++v6;
    v32 = (__int64 *)((char *)v32 + 4);
  }
  while ( v6 < 4 );
  OGLRender::begin(this);
}

void __fastcall OGLRender::setConfigExtra(OGLRender *this, unsigned __int8 *pData, bool a3)
{
  std::_Tree_comp_alloc<std::_Tmap_traits<std::string,extension::GFXIFontManager::LanguageConfig,std::less<std::string >,std::allocator<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig> >,0> > *v3; // rcx
  std::_Tree_comp_alloc<std::_Tmap_traits<std::string,extension::GFXIFontManager::LanguageConfig,std::less<std::string >,std::allocator<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig> >,0> > *v4; // rcx
  unsigned __int64 Mysize; // rsi
  unsigned __int64 v6; // r14
  unsigned int second; // er12
  unsigned int m_ptr; // er13
  __int64 v9; // rax
  std::_Tree_node<std::pair<std::string const ,unsigned int>,void *> *Myhead; // r15
  const char *vertFile; // rdi
  unsigned __int64 v12; // rbx
  std::string *p_Buf1; // rcx
  size_t v14; // r8
  unsigned __int64 v15; // r8
  unsigned __int8 *v16; // r8
  std::_Tree_node<std::pair<std::string const ,unsigned int>,void *> *Parent; // rdi
  std::_Tree_node<std::pair<std::string const ,unsigned int>,void *> *v18; // rbx
  char **p_Myval; // rcx
  std::string *Ptr; // rdx
  unsigned __int64 v21; // r14
  int v22; // eax
  char **v23; // rdx
  std::string *v24; // rcx
  unsigned __int8 *v25; // rdi
  int v26; // eax
  const std::piecewise_construct_t *v27; // rdx
  std::tuple<> *v28; // r9
  std::_Tree_node<std::pair<std::string const ,unsigned int>,void *> *v29; // r13
  std::_Tree_node<std::pair<std::string const ,unsigned int>,void *> *v30; // rdi
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *v31; // rbx
  unsigned __int64 Myres; // r15
  unsigned __int64 v33; // rsi
  char *v34; // r12
  char **v35; // rcx
  unsigned __int64 v36; // r14
  size_t v37; // r8
  int v38; // eax
  std::string *v39; // rcx
  unsigned __int64 v40; // rdi
  size_t v41; // r8
  int v42; // eax
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *v43; // rax
  const char *fragFile; // rdi
  unsigned __int64 v45; // rbx
  std::string *p_Keyval; // rcx
  size_t v47; // r8
  unsigned __int64 v48; // r8
  std::_Tree_node<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig>,void *> *v49; // r15
  std::_Tree_node<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig>,void *> *v50; // rdi
  std::_Tree_node<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig>,void *> *v51; // rbx
  char **v52; // rcx
  std::string *v53; // rdx
  unsigned __int64 v54; // rsi
  size_t v55; // r8
  int v56; // eax
  const char *Buf; // r8
  std::string *v58; // rcx
  AgSingleton<KOFShaderManager> *v59; // rcx
  std::_Tree_node<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig>,void *> *v60; // rax
  const std::piecewise_construct_t *v61; // rdx
  std::tuple<> *v62; // r9
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *v63; // rbx
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *v64; // rax
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *v65; // rbx
  unsigned __int64 v66; // rdi
  const char *v67; // r9
  const unsigned __int8 *CString; // rax
  __int64 v69; // rdi
  std::vector<void (__cdecl*)(extension::exsound_detail::SoundBankParser::BinaryParseState &,extension::exsound_detail::SoundChannelDefinition &),std::allocator<void (__cdecl*)(extension::exsound_detail::SoundBankParser::BinaryParseState &,extension::exsound_detail::SoundChannelDefinition &)> > *v70; // rax
  std::_Tree_node<std::pair<std::string const ,unsigned int>,void *> *Left; // rbx
  std::_Tree_node<std::pair<std::string const ,unsigned int>,void *> *Right; // rax
  std::_Tree_node<std::pair<std::string const ,unsigned int>,void *> *j; // rax
  std::_Tree_node<std::pair<std::string const ,unsigned int>,void *> *i; // rax
  OGLShader *v75; // rbx
  unsigned __int8 v76; // r8
  int v77; // er9
  OGLShader *v78; // rbx
  unsigned __int8 v79; // r8
  int v80; // er9
  OGLShader *v81; // rbx
  unsigned __int8 v82; // r8
  int v83; // er9
  OGLShader *v84; // rbx
  unsigned __int8 v85; // r8
  int v86; // er9
  OGLShader *v87; // rbx
  unsigned __int8 v88; // r8
  int v89; // er9
  OGLShader *v90; // rbx
  unsigned __int8 v91; // r8
  int v92; // er9
  OGLShader *v93; // rbx
  unsigned __int8 v94; // r8
  int v95; // er9
  OGLShader *v96; // rbx
  unsigned __int8 v97; // r8
  int v98; // er9
  OGLShader *v99; // rbx
  unsigned __int8 v100; // r8
  int v101; // er9
  OGLShader *v102; // rbx
  unsigned __int8 v103; // r8
  int v104; // er9
  OGLShader *v105; // rbx
  unsigned __int8 v106; // r8
  int v107; // er9
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *v108; // rbx
  unsigned __int8 v109; // r8
  int v110; // er9
  KOFShaderManager *v111; // rcx
  int Program; // eax
  KOFShaderManager *v113; // r11
  KOFShaderManager *v114; // rcx
  int v115; // eax
  KOFShaderManager *v116; // r11
  KOFShaderManager *v117; // rcx
  int v118; // eax
  KOFShaderManager *v119; // r11
  KOFShaderManager *v120; // rcx
  int v121; // eax
  KOFShaderManager *v122; // r11
  KOFShaderManager *v123; // rcx
  int v124; // eax
  KOFShaderManager *v125; // r11
  bool v126; // r8
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *_Newnode; // [rsp+28h] [rbp-E0h]
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *_Newnodea; // [rsp+28h] [rbp-E0h]
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *_Newnodeb; // [rsp+28h] [rbp-E0h]
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *_Newnodec; // [rsp+28h] [rbp-E0h]
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *_Newnoded; // [rsp+28h] [rbp-E0h]
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *_Newnodee; // [rsp+28h] [rbp-E0h]
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *_Newnodef; // [rsp+28h] [rbp-E0h]
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *_Newnodeg; // [rsp+28h] [rbp-E0h]
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *_Newnodeh; // [rsp+28h] [rbp-E0h]
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *_Newnodei; // [rsp+28h] [rbp-E0h]
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *_Newnodej; // [rsp+28h] [rbp-E0h]
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *_Newnodek; // [rsp+28h] [rbp-E0h]
  int uniformNum; // [rsp+30h] [rbp-D8h]
  _SHADER_INFO *uniformAttrib; // [rsp+38h] [rbp-D0h]
  unsigned __int8 *v141; // [rsp+40h] [rbp-C8h]
  unsigned __int8 *v142; // [rsp+40h] [rbp-C8h]
  unsigned __int8 *v143; // [rsp+40h] [rbp-C8h]
  unsigned __int8 *v144; // [rsp+40h] [rbp-C8h]
  unsigned __int8 *v145; // [rsp+40h] [rbp-C8h]
  unsigned __int8 *v146; // [rsp+40h] [rbp-C8h]
  unsigned __int8 *v147; // [rsp+40h] [rbp-C8h]
  unsigned __int8 *v148; // [rsp+40h] [rbp-C8h]
  unsigned __int8 *v149; // [rsp+40h] [rbp-C8h]
  unsigned __int8 *v150; // [rsp+40h] [rbp-C8h]
  unsigned __int8 *v151; // [rsp+40h] [rbp-C8h]
  unsigned __int8 *v152; // [rsp+40h] [rbp-C8h]
  const _SHADER_INFO *v153; // [rsp+48h] [rbp-C0h]
  unsigned __int8 *v154; // [rsp+50h] [rbp-B8h]
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const ,OGLModel *> > > > v155; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v156; // [rsp+60h] [rbp-A8h]
  std::_Tree_comp_alloc<std::_Tmap_traits<std::string,unsigned int,std::less<std::string >,std::allocator<std::pair<std::string const ,unsigned int> >,0> > v157; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v158; // [rsp+78h] [rbp-90h]
  std::tuple<std::string const &> v159; // [rsp+80h] [rbp-88h] BYREF
  std::_Tree<std::_Tmap_traits<std::string,extension::GFXIFontManager::LanguageConfig,std::less<std::string >,std::allocator<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig> >,0> > v160; // [rsp+88h] [rbp-80h] BYREF
  OGLRender *v161; // [rsp+98h] [rbp-70h]
  unsigned int VertShader; // [rsp+A0h] [rbp-68h]
  AgHash v163; // [rsp+A4h] [rbp-64h] BYREF
  unsigned __int64 v164; // [rsp+A8h] [rbp-60h]
  __int64 v165; // [rsp+B0h] [rbp-58h]
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const ,OGLModel *> > > > result; // [rsp+B8h] [rbp-50h] BYREF
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const ,OGLModel *> > > > v167; // [rsp+C0h] [rbp-48h] BYREF
  Framework::GLManager *v168; // [rsp+C8h] [rbp-40h]
  AgStringRef v169; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v170; // [rsp+E0h] [rbp-28h]
  std::string Buf1; // [rsp+E8h] [rbp-20h] BYREF
  std::string _Keyval; // [rsp+108h] [rbp+0h] BYREF

  v170 = -2i64;
  v161 = this;
  v168 = Framework::GLManager::glm;
  Framework::GLManager::LoadingLock(Framework::GLManager::glm, 1, a3);
  v157._Mypair._Myval2._Myval2._Mysize = 0i64;
  v157._Mypair._Myval2._Myval2._Myhead = (std::_Tree_node<std::pair<std::string const ,unsigned int>,void *> *)std::_Tree_comp_alloc<std::_Tmap_traits<std::string,CSteamID,std::less<void>,std::allocator<std::pair<std::string const,CSteamID>>,0>>::_Buyheadnode(v3);
  v160._Mypair._Myval2._Myval2._Mysize = 0i64;
  v160._Mypair._Myval2._Myval2._Myhead = std::_Tree_comp_alloc<std::_Tmap_traits<std::string,CSteamID,std::less<void>,std::allocator<std::pair<std::string const,CSteamID>>,0>>::_Buyheadnode(v4);
  Buf1._Mypair._Myval2._Myres = 15i64;
  Mysize = 0i64;
  Buf1._Mypair._Myval2._Mysize = 0i64;
  Buf1._Mypair._Myval2._Bx._Buf[0] = 0;
  _Keyval._Mypair._Myval2._Myres = 15i64;
  v6 = 0i64;
  _Keyval._Mypair._Myval2._Mysize = 0i64;
  _Keyval._Mypair._Myval2._Bx._Buf[0] = 0;
  second = 0;
  m_ptr = 0;
  LODWORD(v156) = 0;
  LODWORD(v158) = 0;
  v9 = 0i64;
  v165 = 0i64;
  Myhead = v157._Mypair._Myval2._Myval2._Myhead;
  do
  {
    v164 = 24 * v9;
    vertFile = ShaderFxFileTbl[v9].vertFile;
    if ( *vertFile )
    {
      v12 = -1i64;
      do
        ++v12;
      while ( vertFile[v12] );
    }
    else
    {
      v12 = 0i64;
    }
    p_Buf1 = &Buf1;
    if ( Buf1._Mypair._Myval2._Myres >= 0x10 )
      p_Buf1 = (std::string *)Buf1._Mypair._Myval2._Bx._Ptr;
    v14 = v12;
    if ( Mysize < v12 )
      v14 = Mysize;
    if ( v14 && memcmp(p_Buf1, vertFile, v14) || Mysize < v12 || Mysize > v12 )
    {
      if ( *vertFile )
      {
        v15 = -1i64;
        do
          ++v15;
        while ( vertFile[v15] );
      }
      else
      {
        v15 = 0i64;
      }
      std::string::assign(&Buf1, vertFile, v15);
      Myhead = v157._Mypair._Myval2._Myval2._Myhead;
      Parent = v157._Mypair._Myval2._Myval2._Myhead->_Parent;
      v18 = v157._Mypair._Myval2._Myval2._Myhead;
      Mysize = Buf1._Mypair._Myval2._Mysize;
      if ( Parent->_Isnil )
        goto LABEL_47;
      do
      {
        p_Myval = (char **)&Parent->_Myval;
        Ptr = &Buf1;
        if ( Buf1._Mypair._Myval2._Myres >= 0x10 )
          Ptr = (std::string *)Buf1._Mypair._Myval2._Bx._Ptr;
        if ( Parent->_Myval.first._Mypair._Myval2._Myres >= 0x10 )
          p_Myval = (char **)*p_Myval;
        v21 = Parent->_Myval.first._Mypair._Myval2._Mysize;
        v16 = (unsigned __int8 *)Mysize;
        if ( v21 < Mysize )
          v16 = (unsigned __int8 *)Parent->_Myval.first._Mypair._Myval2._Mysize;
        if ( !v16 || (v22 = memcmp(p_Myval, Ptr, (size_t)v16)) == 0 )
        {
          if ( v21 >= Mysize )
            v22 = v21 > Mysize;
          else
            v22 = -1;
        }
        if ( v22 >= 0 )
        {
          v18 = Parent;
          Parent = Parent->_Left;
        }
        else
        {
          Parent = Parent->_Right;
        }
      }
      while ( !Parent->_Isnil );
      if ( v18 == Myhead )
        goto LABEL_47;
      v23 = (char **)&v18->_Myval;
      if ( v18->_Myval.first._Mypair._Myval2._Myres >= 0x10 )
        v23 = (char **)*v23;
      v24 = &Buf1;
      if ( Buf1._Mypair._Myval2._Myres >= 0x10 )
        v24 = (std::string *)Buf1._Mypair._Myval2._Bx._Ptr;
      v25 = (unsigned __int8 *)v18->_Myval.first._Mypair._Myval2._Mysize;
      v16 = v25;
      if ( Mysize < (unsigned __int64)v25 )
        v16 = (unsigned __int8 *)Mysize;
      if ( !v16 || (v26 = memcmp(v24, v23, (size_t)v16)) == 0 )
      {
        if ( Mysize >= (unsigned __int64)v25 )
          v26 = Mysize > (unsigned __int64)v25;
        else
          v26 = -1;
      }
      if ( v26 < 0 )
LABEL_47:
        v18 = Myhead;
      if ( v18 == Myhead )
      {
        VertShader = KOFShaderManager::loadVertShader(ShaderFxFileTbl[v164 / 0x18].vertFile, 0, v16);
        v29 = v157._Mypair._Myval2._Myval2._Myhead;
        v30 = v157._Mypair._Myval2._Myval2._Myhead->_Parent;
        v31 = (std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *)v157._Mypair._Myval2._Myval2._Myhead;
        if ( v30->_Isnil )
          goto LABEL_80;
        Myres = Buf1._Mypair._Myval2._Myres;
        v33 = Buf1._Mypair._Myval2._Mysize;
        v34 = Buf1._Mypair._Myval2._Bx._Ptr;
        do
        {
          v35 = (char **)&v30->_Myval;
          v27 = (const std::piecewise_construct_t *)&Buf1;
          if ( Myres >= 0x10 )
            v27 = (const std::piecewise_construct_t *)v34;
          if ( v30->_Myval.first._Mypair._Myval2._Myres >= 0x10 )
            v35 = (char **)*v35;
          v36 = v30->_Myval.first._Mypair._Myval2._Mysize;
          v37 = v33;
          if ( v36 < v33 )
            v37 = v30->_Myval.first._Mypair._Myval2._Mysize;
          if ( !v37 || (v38 = memcmp(v35, v27, v37)) == 0 )
          {
            if ( v36 >= v33 )
              v38 = v36 > v33;
            else
              v38 = -1;
          }
          if ( v38 >= 0 )
          {
            v31 = (std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *)v30;
            v30 = v30->_Left;
          }
          else
          {
            v30 = v30->_Right;
          }
        }
        while ( !v30->_Isnil );
        if ( v31 == (std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *)v29 )
          goto LABEL_80;
        v27 = (const std::piecewise_construct_t *)&v31->_Myval;
        if ( v31->_Myval.first._Mypair._Myval2._Myres >= 0x10 )
          v27 = *(const std::piecewise_construct_t **)v27;
        v39 = &Buf1;
        if ( Myres >= 0x10 )
          v39 = (std::string *)v34;
        v40 = v31->_Myval.first._Mypair._Myval2._Mysize;
        v41 = v40;
        if ( v33 < v40 )
          v41 = v33;
        if ( !v41 || (v42 = memcmp(v39, v27, v41)) == 0 )
        {
          if ( v33 >= v40 )
            v42 = v33 > v40;
          else
            v42 = -1;
        }
        if ( v42 < 0 )
        {
LABEL_80:
          v159._Myfirst._Val = &Buf1;
          v43 = (std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *)std::_Tree_comp_alloc<std::_Tmap_traits<std::string,unsigned int,std::less<std::string>,std::allocator<std::pair<std::string const,unsigned int>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<std::string const &>,std::tuple<>>(
                                                                                      &v157,
                                                                                      v27,
                                                                                      &v159,
                                                                                      v28);
          std::_Tree<std::_Tmap_traits<std::string,unsigned int,std::less<std::string>,std::allocator<std::pair<std::string const,unsigned int>>,0>>::_Insert_hint<std::pair<std::string const,unsigned int> &,std::_Tree_node<std::pair<std::string const,unsigned int>,void *> *>(
            (std::_Tree<std::_Tmap_traits<std::string,OGLModel *,std::less<std::string >,std::allocator<std::pair<std::string const ,OGLModel *> >,0> > *)&v157,
            &result,
            (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const ,OGLModel *> > > >)v31,
            &v43->_Myval,
            v43);
          v31 = result._Ptr;
        }
        second = VertShader;
        LODWORD(v31->_Myval.second) = VertShader;
        Myhead = v157._Mypair._Myval2._Myval2._Myhead;
        Mysize = Buf1._Mypair._Myval2._Mysize;
        m_ptr = v156;
      }
      else
      {
        second = v18->_Myval.second;
      }
      v6 = _Keyval._Mypair._Myval2._Mysize;
    }
    fragFile = ShaderFxFileTbl[v164 / 0x18].fragFile;
    if ( *fragFile )
    {
      v45 = -1i64;
      do
        ++v45;
      while ( fragFile[v45] );
    }
    else
    {
      v45 = 0i64;
    }
    p_Keyval = &_Keyval;
    if ( _Keyval._Mypair._Myval2._Myres >= 0x10 )
      p_Keyval = (std::string *)_Keyval._Mypair._Myval2._Bx._Ptr;
    v47 = v45;
    if ( v6 < v45 )
      v47 = v6;
    if ( v47 && memcmp(p_Keyval, ShaderFxFileTbl[v164 / 0x18].fragFile, v47) || v6 < v45 || v6 > v45 )
    {
      if ( *fragFile )
      {
        v48 = -1i64;
        do
          ++v48;
        while ( fragFile[v48] );
      }
      else
      {
        v48 = 0i64;
      }
      std::string::assign(&_Keyval, fragFile, v48);
      v49 = v160._Mypair._Myval2._Myval2._Myhead;
      v50 = v160._Mypair._Myval2._Myval2._Myhead->_Parent;
      v51 = v160._Mypair._Myval2._Myval2._Myhead;
      v6 = _Keyval._Mypair._Myval2._Mysize;
      if ( v50->_Isnil )
        goto LABEL_121;
      do
      {
        v52 = (char **)&v50->_Myval;
        v53 = &_Keyval;
        if ( _Keyval._Mypair._Myval2._Myres >= 0x10 )
          v53 = (std::string *)_Keyval._Mypair._Myval2._Bx._Ptr;
        if ( v50->_Myval.first._Mypair._Myval2._Myres >= 0x10 )
          v52 = (char **)*v52;
        v54 = v50->_Myval.first._Mypair._Myval2._Mysize;
        v55 = v6;
        if ( v54 < v6 )
          v55 = v50->_Myval.first._Mypair._Myval2._Mysize;
        if ( !v55 || (v56 = memcmp(v52, v53, v55)) == 0 )
        {
          if ( v54 >= v6 )
            v56 = v54 > v6;
          else
            v56 = -1;
        }
        if ( v56 >= 0 )
        {
          v51 = v50;
          v50 = v50->_Left;
        }
        else
        {
          v50 = v50->_Right;
        }
      }
      while ( !v50->_Isnil );
      if ( v51 == v49 )
        goto LABEL_121;
      Buf = v51->_Myval.first._Mypair._Myval2._Bx._Buf;
      if ( v51->_Myval.first._Mypair._Myval2._Myres >= 0x10 )
        Buf = *(const char **)Buf;
      v58 = &_Keyval;
      if ( _Keyval._Mypair._Myval2._Myres >= 0x10 )
        v58 = (std::string *)_Keyval._Mypair._Myval2._Bx._Ptr;
      if ( std::string::_Traits_compare(
             v58->_Mypair._Myval2._Bx._Buf,
             v6,
             Buf,
             v51->_Myval.first._Mypair._Myval2._Mysize) < 0 )
LABEL_121:
        v51 = v49;
      if ( v51 == v49 )
      {
        v59 = AgSingleton<KOFShaderManager>::ms_instance;
        LODWORD(AgSingleton<KOFShaderManager>::ms_instance[4
                                                         * SLODWORD(AgSingleton<KOFShaderManager>::ms_instance[491523].__vftable)
                                                         + 360451].__vftable) = 0;
        HIDWORD(v59[4 * SLODWORD(v59[491523].__vftable) + 360451].__vftable) = 1;
        m_ptr = (unsigned int)v59[491523].__vftable;
        LODWORD(v156) = m_ptr;
        LODWORD(v59[491523].__vftable) = m_ptr + 1;
        v60 = std::_Tree<std::_Tmap_traits<std::string,unsigned int,std::less<std::string>,std::allocator<std::pair<std::string const,unsigned int>>,0>>::_Lbound<std::string>(
                &v160,
                &_Keyval);
        v63 = (std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *)v60;
        if ( v60 == v160._Mypair._Myval2._Myval2._Myhead || std::string::compare(&_Keyval, &v60->_Myval.first) < 0 )
        {
          v159._Myfirst._Val = &_Keyval;
          v64 = (std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *)std::_Tree_comp_alloc<std::_Tmap_traits<std::string,unsigned int,std::less<std::string>,std::allocator<std::pair<std::string const,unsigned int>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<std::string const &>,std::tuple<>>(
                                                                                      (std::_Tree_comp_alloc<std::_Tmap_traits<std::string,unsigned int,std::less<std::string >,std::allocator<std::pair<std::string const ,unsigned int> >,0> > *)&v160,
                                                                                      v61,
                                                                                      &v159,
                                                                                      v62);
          std::_Tree<std::_Tmap_traits<std::string,unsigned int,std::less<std::string>,std::allocator<std::pair<std::string const,unsigned int>>,0>>::_Insert_hint<std::pair<std::string const,unsigned int> &,std::_Tree_node<std::pair<std::string const,unsigned int>,void *> *>(
            (std::_Tree<std::_Tmap_traits<std::string,OGLModel *,std::less<std::string >,std::allocator<std::pair<std::string const ,OGLModel *> >,0> > *)&v160,
            &v167,
            (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const ,OGLModel *> > > >)v63,
            &v64->_Myval,
            v64);
          v63 = v167._Ptr;
        }
        LODWORD(v63->_Myval.second) = m_ptr;
        v6 = _Keyval._Mypair._Myval2._Mysize;
      }
      else
      {
        m_ptr = (unsigned int)v51->_Myval.second.m_impl.m_ptr;
        LODWORD(v156) = m_ptr;
      }
      Mysize = Buf1._Mypair._Myval2._Mysize;
      Myhead = v157._Mypair._Myval2._Myval2._Myhead;
    }
    if ( m_ptr && second )
    {
      v65 = (std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *)operator new(0x40ui64);
      v155._Ptr = v65;
      v66 = v164;
      v67 = ShaderFxFileTbl[v164 / 0x18].fragFile;
      LODWORD(v65->_Left) = 0;
      v65->_Parent = 0i64;
      *(_DWORD *)v65->_Myval.first._Mypair._Myval2._Bx._Buf = 0;
      *(_QWORD *)&v65->_Myval.first._Mypair._Myval2._Bx._Alias[8] = 0i64;
      v65->_Right = 0i64;
      v65->_Myval.first._Mypair._Myval2._Myres = 0i64;
      *(_DWORD *)&v65->_Color = -1;
      OGLShader::createShader(
        (OGLShader *)v65,
        second,
        m_ptr,
        v67,
        (unsigned __int8)_Newnode,
        uniformNum,
        uniformAttrib,
        (int)v141,
        v153,
        v154);
      v159._Myfirst._Val = (const std::string *)v65;
      v161->m_ShaderFXTbl[*(int *)((char *)&ShaderFxFileTbl[0].index + v66)] = (OGLShader *)v65;
      AgStringRef::AgStringRef(&v169, *(const char **)((char *)&ShaderFxFileTbl[0].fragFile + v66));
      LODWORD(v65) = AgSimpleThreadHost::getThreadIsStopping((Concurrency::details::ThreadProxyFactory<Concurrency::details::FreeThreadProxy> *)&v169);
      CString = (const unsigned __int8 *)AgStringRef::getCString((std::shared_ptr<__ExceptionPtr> *)&v169);
      v163.m_key = AgHash::_hashfunc(CString, (unsigned int)v65);
      v69 = (__int64)v161;
      v70 = (std::vector<void (__cdecl*)(extension::exsound_detail::SoundBankParser::BinaryParseState &,extension::exsound_detail::SoundChannelDefinition &),std::allocator<void (__cdecl*)(extension::exsound_detail::SoundBankParser::BinaryParseState &,extension::exsound_detail::SoundChannelDefinition &)> > *)std::map<AgHash,std::vector<OGLShader *>>::operator[](&v161->m_shadersToLoad, &v163);
      std::vector<void (*)(extension::exsound_detail::SoundBankParser::BinaryParseState &,extension::exsound_detail::SoundChannelDefinition &)>::push_back(
        v70,
        (void (__fastcall *const *)(extension::exsound_detail::SoundBankParser::BinaryParseState *, extension::exsound_detail::SoundChannelDefinition *))&v159);
      Myhead = v157._Mypair._Myval2._Myval2._Myhead;
      Mysize = Buf1._Mypair._Myval2._Mysize;
      v6 = _Keyval._Mypair._Myval2._Mysize;
    }
    else
    {
      v69 = (__int64)v161;
    }
    LODWORD(v158) = v158 + 1;
    v9 = ++v165;
  }
  while ( (unsigned int)v158 < 0x1F49 );
  Left = Myhead->_Left;
  if ( Myhead->_Left != Myhead )
  {
    do
    {
      _glewDeleteShader((unsigned int)AgSingleton<KOFShaderManager>::ms_instance[4 * Left->_Myval.second + 360451].__vftable);
      if ( !Left->_Isnil )
      {
        Right = Left->_Right;
        if ( Right->_Isnil )
        {
          for ( i = Left->_Parent; !i->_Isnil; i = i->_Parent )
          {
            if ( Left != i->_Right )
              break;
            Left = i;
          }
          Left = i;
        }
        else
        {
          Left = Left->_Right;
          for ( j = Right->_Left; !j->_Isnil; j = j->_Left )
            Left = j;
        }
      }
    }
    while ( Left != v157._Mypair._Myval2._Myval2._Myhead );
  }
  v75 = (OGLShader *)operator new(0x40ui64);
  v75->m_Program = 0;
  v75->m_piGLAttrib.glValue = 0i64;
  v75->m_iGLAttribNum = 0;
  v75->m_piGLUniform = 0i64;
  v75->m_piGLAttrib.divisor = 0i64;
  v75->m_fragFile = 0i64;
  v75->m_programSlot = -1;
  OGLShader::createComputeShader(
    v75,
    "shader/texture_copy_shader_c.sb",
    v76,
    v77,
    (const _SHADER_INFO *)_Newnode,
    173,
    commonUniform,
    v141);
  *(_QWORD *)(v69 + 624528) = v75;
  v78 = (OGLShader *)operator new(0x40ui64);
  v78->m_Program = 0;
  v78->m_piGLAttrib.glValue = 0i64;
  v78->m_iGLAttribNum = 0;
  v78->m_piGLUniform = 0i64;
  v78->m_piGLAttrib.divisor = 0i64;
  v78->m_fragFile = 0i64;
  v78->m_programSlot = -1;
  OGLShader::createComputeShader(
    v78,
    "shader/texture_copy_depth_shader_c.sb",
    v79,
    v80,
    (const _SHADER_INFO *)_Newnodea,
    173,
    commonUniform,
    v142);
  *(_QWORD *)(v69 + 624536) = v78;
  v81 = (OGLShader *)operator new(0x40ui64);
  v81->m_Program = 0;
  v81->m_piGLAttrib.glValue = 0i64;
  v81->m_iGLAttribNum = 0;
  v81->m_piGLUniform = 0i64;
  v81->m_piGLAttrib.divisor = 0i64;
  v81->m_fragFile = 0i64;
  v81->m_programSlot = -1;
  OGLShader::createComputeShader(
    v81,
    "shader/texture_copy_two_shader_c.sb",
    v82,
    v83,
    (const _SHADER_INFO *)_Newnodeb,
    173,
    commonUniform,
    v143);
  *(_QWORD *)(v69 + 624544) = v81;
  v84 = (OGLShader *)operator new(0x40ui64);
  v84->m_Program = 0;
  v84->m_piGLAttrib.glValue = 0i64;
  v84->m_iGLAttribNum = 0;
  v84->m_piGLUniform = 0i64;
  v84->m_piGLAttrib.divisor = 0i64;
  v84->m_fragFile = 0i64;
  v84->m_programSlot = -1;
  OGLShader::createComputeShader(
    v84,
    "shader/texture_copy_two_depth_shader_c.sb",
    v85,
    v86,
    (const _SHADER_INFO *)_Newnodec,
    173,
    commonUniform,
    v144);
  *(_QWORD *)(v69 + 624552) = v84;
  v87 = (OGLShader *)operator new(0x40ui64);
  v87->m_Program = 0;
  v87->m_piGLAttrib.glValue = 0i64;
  v87->m_iGLAttribNum = 0;
  v87->m_piGLUniform = 0i64;
  v87->m_piGLAttrib.divisor = 0i64;
  v87->m_fragFile = 0i64;
  v87->m_programSlot = -1;
  OGLShader::createComputeShader(
    v87,
    "shader/depth_map_render_shader_c.sb",
    v88,
    v89,
    (const _SHADER_INFO *)_Newnoded,
    173,
    commonUniform,
    v145);
  *(_QWORD *)(v69 + 624616) = v87;
  v90 = (OGLShader *)operator new(0x40ui64);
  v90->m_Program = 0;
  v90->m_piGLAttrib.glValue = 0i64;
  v90->m_iGLAttribNum = 0;
  v90->m_piGLUniform = 0i64;
  v90->m_piGLAttrib.divisor = 0i64;
  v90->m_fragFile = 0i64;
  v90->m_programSlot = -1;
  OGLShader::createComputeShader(
    v90,
    "shader/screen_filter_shader_c.sb",
    v91,
    v92,
    (const _SHADER_INFO *)_Newnodee,
    173,
    commonUniform,
    v146);
  *(_QWORD *)(v69 + 624560) = v90;
  v93 = (OGLShader *)operator new(0x40ui64);
  v93->m_Program = 0;
  v93->m_piGLAttrib.glValue = 0i64;
  v93->m_iGLAttribNum = 0;
  v93->m_piGLUniform = 0i64;
  v93->m_piGLAttrib.divisor = 0i64;
  v93->m_fragFile = 0i64;
  v93->m_programSlot = -1;
  OGLShader::createComputeShader(
    v93,
    "shader/combine_two_depth_textures_shader_c.sb",
    v94,
    v95,
    (const _SHADER_INFO *)_Newnodef,
    173,
    commonUniform,
    v147);
  *(_QWORD *)(v69 + 624568) = v93;
  v96 = (OGLShader *)operator new(0x40ui64);
  v96->m_Program = 0;
  v96->m_piGLAttrib.glValue = 0i64;
  v96->m_iGLAttribNum = 0;
  v96->m_piGLUniform = 0i64;
  v96->m_piGLAttrib.divisor = 0i64;
  v96->m_fragFile = 0i64;
  v96->m_programSlot = -1;
  OGLShader::createComputeShader(
    v96,
    "shader/combine_three_masks_two_out_shader_c.sb",
    v97,
    v98,
    (const _SHADER_INFO *)_Newnodeg,
    173,
    commonUniform,
    v148);
  *(_QWORD *)(v69 + 624576) = v96;
  v99 = (OGLShader *)operator new(0x40ui64);
  v99->m_Program = 0;
  v99->m_piGLAttrib.glValue = 0i64;
  v99->m_iGLAttribNum = 0;
  v99->m_piGLUniform = 0i64;
  v99->m_piGLAttrib.divisor = 0i64;
  v99->m_fragFile = 0i64;
  v99->m_programSlot = -1;
  OGLShader::createComputeShader(
    v99,
    "shader/combine_two_masks_two_out_shader_c.sb",
    v100,
    v101,
    (const _SHADER_INFO *)_Newnodeh,
    173,
    commonUniform,
    v149);
  *(_QWORD *)(v69 + 624584) = v99;
  v102 = (OGLShader *)operator new(0x40ui64);
  v102->m_Program = 0;
  v102->m_piGLAttrib.glValue = 0i64;
  v102->m_iGLAttribNum = 0;
  v102->m_piGLUniform = 0i64;
  v102->m_piGLAttrib.divisor = 0i64;
  v102->m_fragFile = 0i64;
  v102->m_programSlot = -1;
  OGLShader::createComputeShader(
    v102,
    "shader/gaussian_blur_horiz_c.sb",
    v103,
    v104,
    (const _SHADER_INFO *)_Newnodei,
    173,
    commonUniform,
    v150);
  *(_QWORD *)(v69 + 624592) = v102;
  v105 = (OGLShader *)operator new(0x40ui64);
  v105->m_Program = 0;
  v105->m_piGLAttrib.glValue = 0i64;
  v105->m_iGLAttribNum = 0;
  v105->m_piGLUniform = 0i64;
  v105->m_piGLAttrib.divisor = 0i64;
  v105->m_fragFile = 0i64;
  v105->m_programSlot = -1;
  OGLShader::createComputeShader(
    v105,
    "shader/gaussian_blur_vert_c.sb",
    v106,
    v107,
    (const _SHADER_INFO *)_Newnodej,
    173,
    commonUniform,
    v151);
  *(_QWORD *)(v69 + 624600) = v105;
  v108 = (std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *)operator new(0x40ui64);
  v155._Ptr = v108;
  LODWORD(v108->_Left) = 0;
  v108->_Parent = 0i64;
  *(_DWORD *)v108->_Myval.first._Mypair._Myval2._Bx._Buf = 0;
  *(_QWORD *)&v108->_Myval.first._Mypair._Myval2._Bx._Alias[8] = 0i64;
  v108->_Right = 0i64;
  v108->_Myval.first._Mypair._Myval2._Myres = 0i64;
  *(_DWORD *)&v108->_Color = -1;
  OGLShader::createComputeShader(
    (OGLShader *)v108,
    "shader/bloom_depth_filter_c.sb",
    v109,
    v110,
    (const _SHADER_INFO *)_Newnodek,
    173,
    commonUniform,
    v152);
  *(_QWORD *)(v69 + 624608) = v108;
  Program = KOFShaderManager::findProgram(v111, **(_DWORD **)(v69 + 589912));
  KOFShaderManager::link(v113, &v113->m_program[Program]);
  v115 = KOFShaderManager::findProgram(v114, **(_DWORD **)(v69 + 589680));
  KOFShaderManager::link(v116, &v116->m_program[v115]);
  v118 = KOFShaderManager::findProgram(v117, **(_DWORD **)(v69 + 590128));
  KOFShaderManager::link(v119, &v119->m_program[v118]);
  v121 = KOFShaderManager::findProgram(v120, **(_DWORD **)(v69 + 589944));
  KOFShaderManager::link(v122, &v122->m_program[v121]);
  v124 = KOFShaderManager::findProgram(v123, **(_DWORD **)(v69 + 590184));
  KOFShaderManager::link(v125, &v125->m_program[v124]);
  Framework::GLManager::LoadingUnlock(v168, 1, v126);
  std::string::~string(&_Keyval);
  std::string::~string(&Buf1);
  std::_Tree<std::_Tmap_traits<std::string,unsigned int,std::less<std::string>,std::allocator<std::pair<std::string const,unsigned int>>,0>>::erase(
    (std::_Tree<std::_Tmap_traits<std::string,OGLModel *,std::less<std::string >,std::allocator<std::pair<std::string const ,OGLModel *> >,0> > *)&v160,
    &v155,
    (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const ,OGLModel *> > > >)v160._Mypair._Myval2._Myval2._Myhead->_Left,
    (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const ,OGLModel *> > > >)v160._Mypair._Myval2._Myval2._Myhead);
  std::_Deallocate(v160._Mypair._Myval2._Myval2._Myhead, 1ui64, 0x48ui64);
  std::_Tree<std::_Tmap_traits<std::string,unsigned int,std::less<std::string>,std::allocator<std::pair<std::string const,unsigned int>>,0>>::erase(
    (std::_Tree<std::_Tmap_traits<std::string,OGLModel *,std::less<std::string >,std::allocator<std::pair<std::string const ,OGLModel *> >,0> > *)&v157,
    &v155,
    (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const ,OGLModel *> > > >)v157._Mypair._Myval2._Myval2._Myhead->_Left,
    (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const ,OGLModel *> > > >)v157._Mypair._Myval2._Myval2._Myhead);
  std::_Deallocate(v157._Mypair._Myval2._Myval2._Myhead, 1ui64, 0x48ui64);
}

void __fastcall OGLRender::setEffectAttribArray(OGLRender *this, EffectMeshData *pEffectMeshData)
{
  AgSingleton<KOFShaderManager> *v2; // r8
  Framework::GLManager *v3; // r11
  unsigned int v5; // er9
  __int64 v6; // rcx
  int v7; // edi
  MeshVertexInfo2D *vertexBuffer; // rdx
  int v9; // ebx
  signed int v10; // er10
  int renderSize; // ecx
  int v12; // eax
  __int64 v13; // rcx
  MeshVertexInfo2D *v14; // rdx
  int v15; // eax
  signed int v16; // ecx
  int v17; // eax
  __int64 v18; // rcx
  MeshVertexInfo2D *v19; // rdx
  int v20; // eax
  signed int v21; // ecx
  __int64 v22; // rcx
  MeshVertexInfo2D *v23; // rdx
  int v24; // eax
  signed int v25; // ecx
  int v26; // eax
  __int64 v27; // rcx
  MeshVertexInfo2D *v28; // rdx
  int v29; // eax
  signed int v30; // ecx

  v2 = AgSingleton<KOFShaderManager>::ms_instance;
  v3 = Framework::GLManager::glm;
  Framework::GLManager::glm->renderSize = 208;
  v5 = g_maxEnabledVertexAttribArrays;
  v6 = *(unsigned int *)v2[11 * SLODWORD(v2[360450].__vftable) + 7].onSingletonInit;
  if ( (unsigned int)v6 < g_maxEnabledVertexAttribArrays )
  {
    g_vertexAttribIndex[v6] = 0;
    g_pendingVertexAttribArrays |= 1 << v6;
  }
  v7 = 136;
  vertexBuffer = pEffectMeshData->vertexBuffer;
  v9 = 64;
  v10 = *(_DWORD *)v2[11 * SLODWORD(v2[360450].__vftable) + 7].onSingletonInit;
  renderSize = v3->renderSize;
  switch ( renderSize )
  {
    case 64:
      v12 = 64;
      break;
    case 280:
      v12 = 136;
      break;
    case 208:
      v12 = 64;
      break;
    default:
      v12 = 88;
      if ( renderSize == 144 )
        v12 = 144;
      break;
  }
  if ( v10 >= 0 )
  {
    _glewVertexAttribPointer(v10, 3, 0x1406u, 0, v12, vertexBuffer);
    v3 = Framework::GLManager::glm;
    v2 = AgSingleton<KOFShaderManager>::ms_instance;
    v5 = g_maxEnabledVertexAttribArrays;
  }
  v13 = *((unsigned int *)v2[11 * SLODWORD(v2[360450].__vftable) + 7].onSingletonInit + 1);
  if ( (unsigned int)v13 < v5 )
  {
    g_vertexAttribIndex[v13] = 1;
    g_pendingVertexAttribArrays |= 1 << v13;
  }
  v14 = pEffectMeshData->vertexBuffer;
  v15 = v3->renderSize;
  v16 = *((_DWORD *)v2[11 * SLODWORD(v2[360450].__vftable) + 7].onSingletonInit + 1);
  switch ( v15 )
  {
    case 64:
      v17 = 64;
      break;
    case 280:
      v17 = 136;
      break;
    case 208:
      v17 = 64;
      break;
    case 144:
      v17 = 144;
      goto LABEL_25;
    default:
      v17 = 88;
      break;
  }
  v14 = (MeshVertexInfo2D *)((char *)v14 + 12);
LABEL_25:
  if ( v16 >= 0 )
  {
    _glewVertexAttribPointer(v16, 3, 0x1406u, 0, v17, v14);
    v3 = Framework::GLManager::glm;
    v2 = AgSingleton<KOFShaderManager>::ms_instance;
    v5 = g_maxEnabledVertexAttribArrays;
  }
  v18 = *((unsigned int *)v2[11 * SLODWORD(v2[360450].__vftable) + 7].onSingletonInit + 2);
  if ( (unsigned int)v18 < v5 )
  {
    g_vertexAttribIndex[v18] = 2;
    g_pendingVertexAttribArrays |= 1 << v18;
  }
  v19 = pEffectMeshData->vertexBuffer;
  v20 = v3->renderSize;
  v21 = *((_DWORD *)v2[11 * SLODWORD(v2[360450].__vftable) + 7].onSingletonInit + 2);
  if ( v20 == 64 )
  {
    v7 = 64;
  }
  else if ( v20 != 280 )
  {
    if ( v20 == 208 )
    {
      v7 = 64;
    }
    else
    {
      if ( v20 == 144 )
      {
        v7 = 144;
        goto LABEL_38;
      }
      v7 = 88;
    }
  }
  v19 = (MeshVertexInfo2D *)((char *)v19 + 24);
LABEL_38:
  if ( v21 >= 0 )
  {
    _glewVertexAttribPointer(v21, 4, 0x1406u, 0, v7, v19);
    v3 = Framework::GLManager::glm;
    v2 = AgSingleton<KOFShaderManager>::ms_instance;
    v5 = g_maxEnabledVertexAttribArrays;
  }
  v22 = *((unsigned int *)v2[11 * SLODWORD(v2[360450].__vftable) + 7].onSingletonInit + 3);
  if ( (unsigned int)v22 < v5 )
  {
    g_vertexAttribIndex[v22] = 3;
    g_pendingVertexAttribArrays |= 1 << v22;
  }
  v23 = pEffectMeshData->vertexBuffer;
  v24 = v3->renderSize;
  v25 = *((_DWORD *)v2[11 * SLODWORD(v2[360450].__vftable) + 7].onSingletonInit + 3);
  switch ( v24 )
  {
    case 64:
      v26 = 64;
LABEL_51:
      v23 = (MeshVertexInfo2D *)((char *)v23 + 40);
      break;
    case 280:
      v26 = 16;
      break;
    case 208:
      v26 = 64;
      goto LABEL_51;
    case 144:
      v26 = 144;
      break;
    default:
      v26 = 88;
      goto LABEL_51;
  }
  if ( v25 >= 0 )
  {
    _glewVertexAttribPointer(v25, 4, 0x1406u, 0, v26, v23);
    v3 = Framework::GLManager::glm;
    v2 = AgSingleton<KOFShaderManager>::ms_instance;
    v5 = g_maxEnabledVertexAttribArrays;
  }
  v27 = *((unsigned int *)v2[11 * SLODWORD(v2[360450].__vftable) + 7].onSingletonInit + 4);
  if ( (unsigned int)v27 < v5 )
  {
    g_pendingVertexAttribArrays |= 1 << v27;
    g_vertexAttribIndex[v27] = 4;
  }
  v28 = pEffectMeshData->vertexBuffer;
  v29 = v3->renderSize;
  v30 = *((_DWORD *)v2[11 * SLODWORD(v2[360450].__vftable) + 7].onSingletonInit + 4);
  if ( v29 != 64 )
  {
    if ( v29 == 280 )
    {
      v9 = 8;
      goto LABEL_64;
    }
    if ( v29 != 208 )
    {
      if ( v29 == 144 )
      {
        v9 = 144;
        goto LABEL_64;
      }
      v9 = 88;
    }
  }
  v28 = (MeshVertexInfo2D *)((char *)v28 + 56);
LABEL_64:
  if ( v30 >= 0 )
    _glewVertexAttribPointer(v30, 2, 0x1406u, 0, v9, v28);
}

void __fastcall OGLRender::setEffectAttribArrayFigure(OGLRender *this, EffectMeshData *pEffectMeshData)
{
  AgSingleton<KOFShaderManager> *v2; // r8
  Framework::GLManager *v3; // r11
  unsigned int v5; // er9
  __int64 v6; // rcx
  int v7; // edi
  MeshVertexInfoComp *vertexCompBuffer; // rdx
  int v9; // ebx
  signed int v10; // er10
  int renderSize; // ecx
  int v12; // eax
  __int64 v13; // rcx
  MeshVertexInfoComp *v14; // rdx
  int v15; // eax
  signed int v16; // ecx
  int v17; // eax
  __int64 v18; // rcx
  MeshVertexInfoComp *v19; // rdx
  int v20; // eax
  signed int v21; // ecx
  __int64 v22; // rcx
  float *vColor; // rdx
  int v24; // eax
  signed int v25; // ecx
  int v26; // eax
  __int64 v27; // rcx
  float *vTexCoord; // rdx
  int v29; // eax
  signed int v30; // ecx

  v2 = AgSingleton<KOFShaderManager>::ms_instance;
  v3 = Framework::GLManager::glm;
  Framework::GLManager::glm->renderSize = 280;
  v5 = g_maxEnabledVertexAttribArrays;
  v6 = *(unsigned int *)v2[11 * SLODWORD(v2[360450].__vftable) + 7].onSingletonInit;
  if ( (unsigned int)v6 < g_maxEnabledVertexAttribArrays )
  {
    g_vertexAttribIndex[v6] = 0;
    g_pendingVertexAttribArrays |= 1 << v6;
  }
  v7 = 136;
  vertexCompBuffer = pEffectMeshData->vertexCompBuffer;
  v9 = 64;
  v10 = *(_DWORD *)v2[11 * SLODWORD(v2[360450].__vftable) + 7].onSingletonInit;
  renderSize = v3->renderSize;
  switch ( renderSize )
  {
    case 64:
      v12 = 64;
      break;
    case 280:
      v12 = 136;
      break;
    case 208:
      v12 = 64;
      break;
    default:
      v12 = 88;
      if ( renderSize == 144 )
        v12 = 144;
      break;
  }
  if ( v10 >= 0 )
  {
    _glewVertexAttribPointer(v10, 3, 0x1406u, 0, v12, vertexCompBuffer);
    v3 = Framework::GLManager::glm;
    v2 = AgSingleton<KOFShaderManager>::ms_instance;
    v5 = g_maxEnabledVertexAttribArrays;
  }
  v13 = *((unsigned int *)v2[11 * SLODWORD(v2[360450].__vftable) + 7].onSingletonInit + 1);
  if ( (unsigned int)v13 < v5 )
  {
    g_vertexAttribIndex[v13] = 1;
    g_pendingVertexAttribArrays |= 1 << v13;
  }
  v14 = pEffectMeshData->vertexCompBuffer;
  v15 = v3->renderSize;
  v16 = *((_DWORD *)v2[11 * SLODWORD(v2[360450].__vftable) + 7].onSingletonInit + 1);
  switch ( v15 )
  {
    case 64:
      v17 = 64;
      break;
    case 280:
      v17 = 136;
      break;
    case 208:
      v17 = 64;
      break;
    case 144:
      v17 = 144;
      goto LABEL_25;
    default:
      v17 = 88;
      break;
  }
  v14 = (MeshVertexInfoComp *)((char *)v14 + 12);
LABEL_25:
  if ( v16 >= 0 )
  {
    _glewVertexAttribPointer(v16, 3, 0x1406u, 0, v17, v14);
    v3 = Framework::GLManager::glm;
    v2 = AgSingleton<KOFShaderManager>::ms_instance;
    v5 = g_maxEnabledVertexAttribArrays;
  }
  v18 = *((unsigned int *)v2[11 * SLODWORD(v2[360450].__vftable) + 7].onSingletonInit + 2);
  if ( (unsigned int)v18 < v5 )
  {
    g_vertexAttribIndex[v18] = 2;
    g_pendingVertexAttribArrays |= 1 << v18;
  }
  v19 = pEffectMeshData->vertexCompBuffer;
  v20 = v3->renderSize;
  v21 = *((_DWORD *)v2[11 * SLODWORD(v2[360450].__vftable) + 7].onSingletonInit + 2);
  if ( v20 == 64 )
  {
    v7 = 64;
  }
  else if ( v20 != 280 )
  {
    if ( v20 == 208 )
    {
      v7 = 64;
    }
    else
    {
      if ( v20 == 144 )
      {
        v7 = 144;
        goto LABEL_38;
      }
      v7 = 88;
    }
  }
  v19 = (MeshVertexInfoComp *)((char *)v19 + 24);
LABEL_38:
  if ( v21 >= 0 )
  {
    _glewVertexAttribPointer(v21, 4, 0x1406u, 0, v7, v19);
    v3 = Framework::GLManager::glm;
    v2 = AgSingleton<KOFShaderManager>::ms_instance;
    v5 = g_maxEnabledVertexAttribArrays;
  }
  v22 = *((unsigned int *)v2[11 * SLODWORD(v2[360450].__vftable) + 7].onSingletonInit + 3);
  if ( (unsigned int)v22 < v5 )
  {
    g_vertexAttribIndex[v22] = 3;
    g_pendingVertexAttribArrays |= 1 << v22;
  }
  vColor = pEffectMeshData->vColor;
  v24 = v3->renderSize;
  v25 = *((_DWORD *)v2[11 * SLODWORD(v2[360450].__vftable) + 7].onSingletonInit + 3);
  switch ( v24 )
  {
    case 64:
      v26 = 64;
LABEL_51:
      vColor += 10;
      break;
    case 280:
      v26 = 16;
      break;
    case 208:
      v26 = 64;
      goto LABEL_51;
    case 144:
      v26 = 144;
      break;
    default:
      v26 = 88;
      goto LABEL_51;
  }
  if ( v25 >= 0 )
  {
    _glewVertexAttribPointer(v25, 4, 0x1406u, 0, v26, vColor);
    v3 = Framework::GLManager::glm;
    v2 = AgSingleton<KOFShaderManager>::ms_instance;
    v5 = g_maxEnabledVertexAttribArrays;
  }
  v27 = *((unsigned int *)v2[11 * SLODWORD(v2[360450].__vftable) + 7].onSingletonInit + 4);
  if ( (unsigned int)v27 < v5 )
  {
    g_pendingVertexAttribArrays |= 1 << v27;
    g_vertexAttribIndex[v27] = 4;
  }
  vTexCoord = pEffectMeshData->vTexCoord;
  v29 = v3->renderSize;
  v30 = *((_DWORD *)v2[11 * SLODWORD(v2[360450].__vftable) + 7].onSingletonInit + 4);
  if ( v29 != 64 )
  {
    if ( v29 == 280 )
    {
      v9 = 8;
      goto LABEL_64;
    }
    if ( v29 != 208 )
    {
      if ( v29 == 144 )
      {
        v9 = 144;
        goto LABEL_64;
      }
      v9 = 88;
    }
  }
  vTexCoord += 14;
LABEL_64:
  if ( v30 >= 0 )
    _glewVertexAttribPointer(v30, 2, 0x1406u, 0, v9, vTexCoord);
}

void __fastcall OGLRender::setEffectAttribArrayInstancing(OGLRender *this, EffectMeshData *pEffectMeshData)
{
  AgSingleton<KOFShaderManager> *v2; // r8
  Framework::GLManager *v3; // rdi
  unsigned int v5; // edx
  unsigned int v6; // er11
  __int64 v7; // rcx
  int v8; // ebx
  MeshVertexInfoEffectInstancing *instancingBuffer; // r9
  int renderSize; // eax
  signed int v11; // ecx
  __int64 v12; // rcx
  MeshVertexInfoEffectInstancing *v13; // r9
  int v14; // eax
  signed int v15; // ecx
  __int64 v16; // rcx
  MeshVertexInfoEffectInstancing *v17; // r9
  int v18; // eax
  signed int v19; // ecx
  __int64 v20; // rcx
  MeshVertexInfoEffectInstancing *v21; // r9
  int v22; // eax
  signed int v23; // ecx
  __int64 v24; // rcx
  MeshVertexInfoEffectInstancing *v25; // r9
  int v26; // eax
  signed int v27; // ecx
  __int64 v28; // rcx
  MeshVertexInfoEffectInstancing *v29; // r9
  int v30; // eax
  signed int v31; // ecx
  __int64 v32; // rcx
  MeshVertexInfoEffectInstancing *v33; // r9
  int v34; // eax
  signed int v35; // ecx
  __int64 v36; // rcx
  MeshVertexInfoEffectInstancing *v37; // r10
  int v38; // eax
  __int64 v39; // rcx
  int v40; // er9
  __int64 v41; // rcx
  MeshVertexInfoEffectInstancing *v42; // r10
  int v43; // eax
  __int64 v44; // rcx
  int v45; // er9
  __int64 v46; // rcx
  MeshVertexInfoEffectInstancing *v47; // r9
  int v48; // eax
  __int64 v49; // rcx

  v2 = AgSingleton<KOFShaderManager>::ms_instance;
  v3 = Framework::GLManager::glm;
  v5 = g_pendingVertexAttribArrays;
  Framework::GLManager::glm->renderSize = 144;
  v6 = g_maxEnabledVertexAttribArrays;
  v7 = *((unsigned int *)v2[11 * SLODWORD(v2[360450].__vftable) + 7].onSingletonInit + 5);
  if ( (unsigned int)v7 < g_maxEnabledVertexAttribArrays )
  {
    g_vertexAttribIndex[v7] = 5;
    v5 |= 1 << v7;
    g_pendingVertexAttribArrays = v5;
  }
  v8 = 64;
  instancingBuffer = pEffectMeshData->instancingBuffer;
  renderSize = v3->renderSize;
  v11 = *((_DWORD *)v2[11 * SLODWORD(v2[360450].__vftable) + 7].onSingletonInit + 5);
  switch ( renderSize )
  {
    case 64:
      renderSize = 64;
      break;
    case 280:
      renderSize = 136;
      break;
    case 208:
      renderSize = 64;
      break;
    default:
      if ( renderSize != 144 )
      {
        renderSize = 88;
        instancingBuffer = (MeshVertexInfoEffectInstancing *)((char *)instancingBuffer + 64);
      }
      break;
  }
  if ( v11 >= 0 )
  {
    _glewVertexAttribPointer(v11, 4, 0x1406u, 0, renderSize, instancingBuffer);
    v2 = AgSingleton<KOFShaderManager>::ms_instance;
    v6 = g_maxEnabledVertexAttribArrays;
    v5 = g_pendingVertexAttribArrays;
    v3 = Framework::GLManager::glm;
  }
  v12 = *((unsigned int *)v2[11 * SLODWORD(v2[360450].__vftable) + 7].onSingletonInit + 6);
  if ( (unsigned int)v12 < v6 )
  {
    g_vertexAttribIndex[v12] = 6;
    v5 |= 1 << v12;
    g_pendingVertexAttribArrays = v5;
  }
  v13 = pEffectMeshData->instancingBuffer;
  v14 = v3->renderSize;
  v15 = *((_DWORD *)v2[11 * SLODWORD(v2[360450].__vftable) + 7].onSingletonInit + 6);
  switch ( v14 )
  {
    case 64:
      v14 = 64;
      break;
    case 280:
      v14 = 136;
      break;
    case 208:
      v14 = 64;
      break;
    case 144:
      v13 = (MeshVertexInfoEffectInstancing *)((char *)v13 + 16);
      break;
    default:
      v14 = 88;
      v13 = (MeshVertexInfoEffectInstancing *)((char *)v13 + 72);
      break;
  }
  if ( v15 >= 0 )
  {
    _glewVertexAttribPointer(v15, 2, 0x1406u, 0, v14, v13);
    v2 = AgSingleton<KOFShaderManager>::ms_instance;
    v6 = g_maxEnabledVertexAttribArrays;
    v5 = g_pendingVertexAttribArrays;
    v3 = Framework::GLManager::glm;
  }
  v16 = *((unsigned int *)v2[11 * SLODWORD(v2[360450].__vftable) + 7].onSingletonInit + 7);
  if ( (unsigned int)v16 < v6 )
  {
    g_vertexAttribIndex[v16] = 7;
    v5 |= 1 << v16;
    g_pendingVertexAttribArrays = v5;
  }
  v17 = pEffectMeshData->instancingBuffer;
  v18 = v3->renderSize;
  v19 = *((_DWORD *)v2[11 * SLODWORD(v2[360450].__vftable) + 7].onSingletonInit + 7);
  switch ( v18 )
  {
    case 64:
      v18 = 64;
      break;
    case 280:
      v18 = 136;
      break;
    case 208:
      v18 = 64;
      break;
    case 144:
      v17 = (MeshVertexInfoEffectInstancing *)((char *)v17 + 24);
      break;
    default:
      v18 = 88;
      v17 = (MeshVertexInfoEffectInstancing *)((char *)v17 + 80);
      break;
  }
  if ( v19 >= 0 )
  {
    _glewVertexAttribPointer(v19, 4, 0x1406u, 0, v18, v17);
    v2 = AgSingleton<KOFShaderManager>::ms_instance;
    v6 = g_maxEnabledVertexAttribArrays;
    v5 = g_pendingVertexAttribArrays;
    v3 = Framework::GLManager::glm;
  }
  v20 = *((unsigned int *)v2[11 * SLODWORD(v2[360450].__vftable) + 7].onSingletonInit + 8);
  if ( (unsigned int)v20 < v6 )
  {
    g_vertexAttribIndex[v20] = 8;
    v5 |= 1 << v20;
    g_pendingVertexAttribArrays = v5;
  }
  v21 = pEffectMeshData->instancingBuffer;
  v22 = v3->renderSize;
  v23 = *((_DWORD *)v2[11 * SLODWORD(v2[360450].__vftable) + 7].onSingletonInit + 8);
  switch ( v22 )
  {
    case 64:
      v22 = 64;
      break;
    case 280:
      v22 = 136;
      break;
    case 208:
      v22 = 64;
      break;
    case 144:
      v21 = (MeshVertexInfoEffectInstancing *)((char *)v21 + 40);
      break;
    default:
      v22 = 88;
      break;
  }
  if ( v23 >= 0 )
  {
    _glewVertexAttribPointer(v23, 4, 0x1406u, 0, v22, v21);
    v2 = AgSingleton<KOFShaderManager>::ms_instance;
    v6 = g_maxEnabledVertexAttribArrays;
    v5 = g_pendingVertexAttribArrays;
    v3 = Framework::GLManager::glm;
  }
  v24 = *((unsigned int *)v2[11 * SLODWORD(v2[360450].__vftable) + 7].onSingletonInit + 9);
  if ( (unsigned int)v24 < v6 )
  {
    g_vertexAttribIndex[v24] = 9;
    v5 |= 1 << v24;
    g_pendingVertexAttribArrays = v5;
  }
  v25 = pEffectMeshData->instancingBuffer;
  v26 = v3->renderSize;
  v27 = *((_DWORD *)v2[11 * SLODWORD(v2[360450].__vftable) + 7].onSingletonInit + 9);
  switch ( v26 )
  {
    case 64:
      v26 = 64;
      break;
    case 280:
      v26 = 136;
      break;
    case 208:
      v26 = 64;
      break;
    case 144:
      v25 = (MeshVertexInfoEffectInstancing *)((char *)v25 + 56);
      break;
    default:
      v26 = 88;
      break;
  }
  if ( v27 >= 0 )
  {
    _glewVertexAttribPointer(v27, 2, 0x1406u, 0, v26, v25);
    v2 = AgSingleton<KOFShaderManager>::ms_instance;
    v6 = g_maxEnabledVertexAttribArrays;
    v5 = g_pendingVertexAttribArrays;
    v3 = Framework::GLManager::glm;
  }
  v28 = *((unsigned int *)v2[11 * SLODWORD(v2[360450].__vftable) + 7].onSingletonInit + 10);
  if ( (unsigned int)v28 < v6 )
  {
    g_vertexAttribIndex[v28] = 10;
    v5 |= 1 << v28;
    g_pendingVertexAttribArrays = v5;
  }
  v29 = pEffectMeshData->instancingBuffer;
  v30 = v3->renderSize;
  v31 = *((_DWORD *)v2[11 * SLODWORD(v2[360450].__vftable) + 7].onSingletonInit + 10);
  switch ( v30 )
  {
    case 64:
      v30 = 64;
      break;
    case 280:
      v30 = 136;
      break;
    case 208:
      v30 = 64;
      break;
    case 144:
      v29 = (MeshVertexInfoEffectInstancing *)((char *)v29 + 64);
      break;
    default:
      v30 = 88;
      break;
  }
  if ( v31 >= 0 )
  {
    _glewVertexAttribPointer(v31, 4, 0x1406u, 0, v30, v29);
    v2 = AgSingleton<KOFShaderManager>::ms_instance;
    v6 = g_maxEnabledVertexAttribArrays;
    v5 = g_pendingVertexAttribArrays;
    v3 = Framework::GLManager::glm;
  }
  v32 = *((unsigned int *)v2[11 * SLODWORD(v2[360450].__vftable) + 7].onSingletonInit + 11);
  if ( (unsigned int)v32 < v6 )
  {
    g_vertexAttribIndex[v32] = 11;
    v5 |= 1 << v32;
    g_pendingVertexAttribArrays = v5;
  }
  v33 = pEffectMeshData->instancingBuffer;
  v34 = v3->renderSize;
  v35 = *((_DWORD *)v2[11 * SLODWORD(v2[360450].__vftable) + 7].onSingletonInit + 11);
  switch ( v34 )
  {
    case 64:
      v34 = 64;
      break;
    case 280:
      v34 = 136;
      break;
    case 208:
      v34 = 64;
      break;
    case 144:
      v33 = (MeshVertexInfoEffectInstancing *)((char *)v33 + 80);
      break;
    default:
      v34 = 88;
      break;
  }
  if ( v35 >= 0 )
  {
    _glewVertexAttribPointer(v35, 4, 0x1406u, 0, v34, v33);
    v2 = AgSingleton<KOFShaderManager>::ms_instance;
    v6 = g_maxEnabledVertexAttribArrays;
    v5 = g_pendingVertexAttribArrays;
    v3 = Framework::GLManager::glm;
  }
  v36 = *((unsigned int *)v2[11 * SLODWORD(v2[360450].__vftable) + 7].onSingletonInit + 12);
  if ( (unsigned int)v36 < v6 )
  {
    g_vertexAttribIndex[v36] = 12;
    v5 |= 1 << v36;
    g_pendingVertexAttribArrays = v5;
  }
  v37 = pEffectMeshData->instancingBuffer;
  v38 = v3->renderSize;
  LODWORD(v39) = *((_DWORD *)v2[11 * SLODWORD(v2[360450].__vftable) + 7].onSingletonInit + 12);
  switch ( v38 )
  {
    case 64:
      v40 = 64;
      break;
    case 280:
      v40 = 136;
      break;
    case 208:
      v40 = 64;
      break;
    case 144:
      v39 = (unsigned int)(v39 + 1);
      v40 = 144;
      if ( (unsigned int)v39 < v6 )
      {
        g_vertexAttribIndex[v39] = 12;
        v5 |= 1 << v39;
        g_pendingVertexAttribArrays = v5;
      }
      v37 = (MeshVertexInfoEffectInstancing *)((char *)v37 + 96);
      break;
    default:
      v40 = 88;
      break;
  }
  if ( (int)v39 >= 0 )
  {
    _glewVertexAttribPointer(v39, 4, 0x1406u, 0, v40, v37);
    v2 = AgSingleton<KOFShaderManager>::ms_instance;
    v6 = g_maxEnabledVertexAttribArrays;
    v5 = g_pendingVertexAttribArrays;
    v3 = Framework::GLManager::glm;
  }
  v41 = *((unsigned int *)v2[11 * SLODWORD(v2[360450].__vftable) + 7].onSingletonInit + 13);
  if ( (unsigned int)v41 < v6 )
  {
    g_vertexAttribIndex[v41] = 13;
    v5 |= 1 << v41;
    g_pendingVertexAttribArrays = v5;
  }
  v42 = pEffectMeshData->instancingBuffer;
  v43 = v3->renderSize;
  LODWORD(v44) = *((_DWORD *)v2[11 * SLODWORD(v2[360450].__vftable) + 7].onSingletonInit + 13);
  switch ( v43 )
  {
    case 64:
      v45 = 64;
      break;
    case 280:
      v45 = 136;
      break;
    case 208:
      v45 = 64;
      break;
    case 144:
      v44 = (unsigned int)(v44 + 2);
      v45 = 144;
      if ( (unsigned int)v44 < v6 )
      {
        g_vertexAttribIndex[v44] = 13;
        v5 |= 1 << v44;
        g_pendingVertexAttribArrays = v5;
      }
      v42 = (MeshVertexInfoEffectInstancing *)((char *)v42 + 112);
      break;
    default:
      v45 = 88;
      break;
  }
  if ( (int)v44 >= 0 )
  {
    _glewVertexAttribPointer(v44, 4, 0x1406u, 0, v45, v42);
    v2 = AgSingleton<KOFShaderManager>::ms_instance;
    v6 = g_maxEnabledVertexAttribArrays;
    v5 = g_pendingVertexAttribArrays;
    v3 = Framework::GLManager::glm;
  }
  v46 = *((unsigned int *)v2[11 * SLODWORD(v2[360450].__vftable) + 7].onSingletonInit + 14);
  if ( (unsigned int)v46 < v6 )
  {
    g_vertexAttribIndex[v46] = 14;
    v5 |= 1 << v46;
    g_pendingVertexAttribArrays = v5;
  }
  v47 = pEffectMeshData->instancingBuffer;
  v48 = v3->renderSize;
  LODWORD(v49) = *((_DWORD *)v2[11 * SLODWORD(v2[360450].__vftable) + 7].onSingletonInit + 14);
  if ( v48 != 64 )
  {
    if ( v48 == 280 )
    {
      v8 = 136;
    }
    else if ( v48 != 208 )
    {
      if ( v48 == 144 )
      {
        v49 = (unsigned int)(v49 + 3);
        v8 = 144;
        if ( (unsigned int)v49 < v6 )
        {
          g_vertexAttribIndex[v49] = 14;
          g_pendingVertexAttribArrays = (1 << v49) | v5;
        }
        v47 = (MeshVertexInfoEffectInstancing *)((char *)v47 + 128);
      }
      else
      {
        v8 = 88;
      }
    }
  }
  if ( (int)v49 >= 0 )
    _glewVertexAttribPointer(v49, 4, 0x1406u, 0, v8, v47);
}

void __fastcall OGLRender::setEffectBindTextrue(OGLRender *this, EffectTextureData *texture, int shader)
{
  __int16 v3; // si
  OGLTexture *ColorTexture1; // rdi
  struct __GLsync *m_sync; // rcx
  GLuint m_TexID; // edx
  Framework::GLManager *v8; // rcx
  OGLTexture *AlphaTexture1; // rcx
  int ID; // eax
  GLuint v11; // edx
  Framework::GLManager *v12; // rcx
  int v13; // eax
  Framework::GLManager *v14; // rcx
  OGLTexture *ColorTexture2; // rcx
  int v16; // eax
  Framework::GLManager *v17; // rcx
  OGLTexture *AlphaTexture2; // rcx
  unsigned int v19; // eax
  OGLTexture *CharasDepthTex; // rdi
  struct __GLsync *v21; // rcx
  GLuint v22; // edx
  Framework::GLManager *v23; // rcx
  GLuint v24; // edx
  unsigned int v25; // eax
  Framework::GLManager *v26; // rcx
  unsigned int v27; // eax
  unsigned int v28; // eax
  unsigned int v29; // eax
  unsigned int v30; // eax
  unsigned int v31; // eax
  unsigned int v32; // eax
  unsigned int v33; // eax

  v3 = shader;
  if ( m_ActiveTexture )
  {
    m_ActiveTexture = 0;
    _glewActiveTexture(0x84C0u);
  }
  ColorTexture1 = texture->ColorTexture1;
  if ( !texture->ColorTexture1 )
    return;
  m_sync = ColorTexture1->m_sync;
  if ( m_sync )
  {
    _glewWaitSync(m_sync, 0, 0xFFFFFFFFFFFFFFFFui64);
    _glewDeleteSync(ColorTexture1->m_sync);
    ColorTexture1->m_sync = 0i64;
  }
  m_TexID = ColorTexture1->m_TexID;
  if ( m_TexID != ::m_TexID[m_ActiveTexture] || !m_TexID )
  {
    v8 = Framework::GLManager::glm;
    ::m_TexID[m_ActiveTexture] = m_TexID;
    v8->m_textureID = m_TexID;
    while ( v8->m_bOpenGLBlocked )
      ;
    glBindTexture(0xDE1u, m_TexID);
  }
  if ( (v3 & 0x1000) != 0 )
  {
    if ( m_ActiveTexture != 2 )
    {
      m_ActiveTexture = 2;
      _glewActiveTexture(0x84C2u);
    }
    AlphaTexture1 = texture->AlphaTexture1;
    if ( AlphaTexture1 )
    {
      ID = OGLTexture::getID(AlphaTexture1);
      v11 = ID;
      if ( ID != ::m_TexID[m_ActiveTexture] || !ID )
      {
        ::m_TexID[m_ActiveTexture] = ID;
        v12 = Framework::GLManager::glm;
        Framework::GLManager::glm->m_textureID = ID;
        while ( v12->m_bOpenGLBlocked )
          ;
LABEL_24:
        glBindTexture(0xDE1u, v11);
      }
    }
    else
    {
      v13 = OGLTexture::getID(texture->ColorTexture1);
      v11 = v13;
      if ( v13 != ::m_TexID[m_ActiveTexture] || !v13 )
      {
        ::m_TexID[m_ActiveTexture] = v13;
        v14 = Framework::GLManager::glm;
        Framework::GLManager::glm->m_textureID = v13;
        while ( v14->m_bOpenGLBlocked )
          ;
        goto LABEL_24;
      }
    }
  }
  if ( (v3 & 0xF00) != 0 )
  {
    if ( m_ActiveTexture != 1 )
    {
      m_ActiveTexture = 1;
      _glewActiveTexture(0x84C1u);
    }
    ColorTexture2 = texture->ColorTexture2;
    if ( ColorTexture2 )
    {
      v16 = OGLTexture::getID(ColorTexture2);
      if ( v16 != ::m_TexID[m_ActiveTexture] || !v16 )
      {
        ::m_TexID[m_ActiveTexture] = v16;
        v17 = Framework::GLManager::glm;
        Framework::GLManager::glm->m_textureID = v16;
        while ( v17->m_bOpenGLBlocked )
          ;
        glBindTexture(0xDE1u, v16);
      }
    }
    if ( (v3 & 0x1000) != 0 )
    {
      if ( m_ActiveTexture != 3 )
      {
        m_ActiveTexture = 3;
        _glewActiveTexture(0x84C3u);
      }
      AlphaTexture2 = texture->AlphaTexture2;
      if ( AlphaTexture2 || (AlphaTexture2 = texture->ColorTexture2) != 0i64 )
      {
        v19 = OGLTexture::getID(AlphaTexture2);
        glsBindTexture(0xDE1u, v19);
      }
    }
  }
  if ( texture->CharasDepthTex )
  {
    if ( m_ActiveTexture != 5 )
    {
      m_ActiveTexture = 5;
      _glewActiveTexture(0x84C5u);
    }
    CharasDepthTex = texture->CharasDepthTex;
    v21 = CharasDepthTex->m_sync;
    if ( v21 )
    {
      _glewWaitSync(v21, 0, 0xFFFFFFFFFFFFFFFFui64);
      _glewDeleteSync(CharasDepthTex->m_sync);
      CharasDepthTex->m_sync = 0i64;
    }
    v22 = CharasDepthTex->m_TexID;
    if ( v22 != ::m_TexID[m_ActiveTexture] || !v22 )
    {
      v23 = Framework::GLManager::glm;
      ::m_TexID[m_ActiveTexture] = v22;
      v23->m_textureID = v22;
      while ( v23->m_bOpenGLBlocked )
        ;
      glBindTexture(0xDE1u, v22);
    }
    if ( texture->Chara1DepthTex )
    {
      if ( m_ActiveTexture != 6 )
      {
        m_ActiveTexture = 6;
        _glewActiveTexture(0x84C6u);
      }
      v24 = OGLTexture::getID(texture->Chara1DepthTex);
      v25 = m_ActiveTexture;
      if ( v24 != ::m_TexID[m_ActiveTexture] || !v24 )
      {
        v26 = Framework::GLManager::glm;
        ::m_TexID[m_ActiveTexture] = v24;
        v26->m_textureID = v24;
        while ( v26->m_bOpenGLBlocked )
          ;
        glBindTexture(0xDE1u, v24);
        v25 = m_ActiveTexture;
      }
      if ( texture->Chara2DepthTex )
      {
        if ( v25 != 7 )
        {
          m_ActiveTexture = 7;
          _glewActiveTexture(0x84C7u);
        }
        v27 = OGLTexture::getID(texture->Chara2DepthTex);
        glsBindTexture(0xDE1u, v27);
        if ( texture->StageDepthTex )
        {
          if ( m_ActiveTexture != 8 )
          {
            m_ActiveTexture = 8;
            _glewActiveTexture(0x84C8u);
          }
          v28 = OGLTexture::getID(texture->StageDepthTex);
          glsBindTexture(0xDE1u, v28);
          if ( (v3 & 0xE0) != 0 )
          {
            if ( !texture->NormalTexture )
              return;
            if ( m_ActiveTexture != 4 )
            {
              m_ActiveTexture = 4;
              _glewActiveTexture(0x84C4u);
            }
            v29 = OGLTexture::getID(texture->NormalTexture);
            glsBindTexture(0xDE1u, v29);
            if ( m_ActiveTexture != 9 )
            {
              m_ActiveTexture = 9;
              _glewActiveTexture(0x84C9u);
            }
            v30 = OGLTexture::getID(texture->DistortionChara1Tex);
            glsBindTexture(0xDE1u, v30);
            if ( m_ActiveTexture != 10 )
            {
              m_ActiveTexture = 10;
              _glewActiveTexture(0x84CAu);
            }
            v31 = OGLTexture::getID(texture->DistortionChara2Tex);
            glsBindTexture(0xDE1u, v31);
            if ( m_ActiveTexture != 11 )
            {
              m_ActiveTexture = 11;
              _glewActiveTexture(0x84CBu);
            }
            v32 = OGLTexture::getID(texture->DistortionStageTex);
            glsBindTexture(0xDE1u, v32);
          }
          if ( (v3 & 0x10) != 0 )
          {
            if ( m_ActiveTexture != 13 )
            {
              m_ActiveTexture = 13;
              _glewActiveTexture(0x84CDu);
            }
            v33 = OGLTexture::getID(texture->CharaBlurTex);
            glsBindTexture(0xDE1u, v33);
          }
        }
      }
    }
  }
}

void __fastcall OGLRender::setEffectConstant(
        OGLRender *this,
        BlendProjData *blendProjData,
        EffectConstantData *pEffectConstData,
        int shader)
{
  __m128 v8; // xmm2
  __m128 v9; // xmm3
  __m128 v10; // xmm4
  __m128 v11; // xmm5
  float v12; // xmm9_4
  float v13; // xmm10_4
  float v14; // xmm11_4
  float v15; // xmm6_4
  float v16; // xmm14_4
  float v17; // xmm15_4
  float v18; // xmm12_4
  float v19; // xmm7_4
  float v20; // xmm13_4
  float v21; // xmm8_4
  OGLRender *v22; // rcx
  OGLShader *v23; // rsi
  KOFShaderManager *v24; // rbx
  int v25; // er15
  __int64 v26; // rdx
  __int64 v27; // r12
  AgSingleton<KOFShaderManager>_vtbl *v28; // r13
  _OWORD *v29; // rax
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  int v33; // er15
  __int64 m_currentProgramSlot; // rdx
  __int64 index; // r12
  void **v36; // r13
  _OWORD *v37; // rax
  __int128 v38; // xmm1
  __int128 v39; // xmm0
  __int128 v40; // xmm1
  int v41; // er15
  __int64 v42; // rdx
  __int64 v43; // r12
  void **v44; // r13
  _OWORD *v45; // rax
  __int128 v46; // xmm1
  __int128 v47; // xmm0
  __int128 v48; // xmm1
  float z; // eax
  float v50; // xmm4_4
  float v51; // xmm1_4
  float v52; // xmm2_4
  float v53; // xmm3_4
  __int64 v54; // r8
  unsigned int v55; // xmm10_4
  unsigned __int64 *v56; // rcx
  unsigned __int64 v57; // rax
  unsigned int v58; // xmm9_4
  int v59; // er8
  unsigned __int64 *v60; // rcx
  unsigned int v61; // xmm7_4
  unsigned int v62; // xmm6_4
  unsigned __int64 v63; // rax
  int blendProjectionFlag; // er10
  int v65; // edx
  _DWORD *v66; // rax
  int v67; // edx
  float *v68; // rax
  float fixBlendRatio; // xmm0_4
  OGLRender *v70; // r11
  float projNormalAngLightOffset; // xmm0_4
  int v72; // edx
  float *v73; // rax
  int v74; // edx
  float *v75; // rax
  float zOffset; // xmm0_4
  int v77; // edx
  float *v78; // rax
  int v79; // er8
  _DWORD *v80; // rcx
  float *uvColor1Size; // r9
  int v82; // edx
  __int64 v83; // r8
  __int64 v84; // r10
  void **v85; // rcx
  float *uvColor2Size; // r9
  int v87; // edx
  __int64 v88; // r8
  __int64 v89; // r10
  void **v90; // rcx
  float *uvAlpha1Size; // r9
  int v92; // edx
  __int64 v93; // r8
  __int64 v94; // r10
  void **v95; // rcx
  float *uvAlpha2Size; // r9
  int v97; // edx
  __int64 v98; // r8
  __int64 v99; // r10
  void **v100; // rcx
  float *uvNormalSize; // r9
  int v102; // edx
  __int64 v103; // r8
  __int64 v104; // r10
  void **v105; // rcx
  int v106; // er8
  _QWORD *v107; // rcx
  int v108; // er8
  _QWORD *v109; // rcx
  int v110; // er8
  _QWORD *v111; // rcx
  int v112; // er8
  _QWORD *v113; // rcx
  int v114; // er8
  _QWORD *v115; // rcx
  int v116; // edx
  __int64 v117; // r8
  __int64 v118; // r9
  void **v119; // rcx
  float falloffParam; // xmm0_4
  int v121; // edx
  float *v122; // rax
  int v123; // er8
  _QWORD *v124; // rcx
  int v125; // er8
  _QWORD *v126; // rcx
  int v127; // edx
  float *v128; // rax
  int v129; // edx
  float *v130; // rax
  float bufferscale; // xmm0_4
  int v132; // edx
  float *v133; // rax
  int v134; // er8
  _DWORD *v135; // rcx
  int v136; // er8
  _QWORD *v137; // rcx
  int v138; // er8
  _QWORD *v139; // rcx
  int v140; // er8
  _QWORD *v141; // rcx
  int v142; // er8
  _QWORD *v143; // rcx
  float influenceOfLight; // xmm0_4
  int v145; // edx
  float *v146; // rax
  float ignoreUvMirror; // xmm0_4
  int v148; // edx
  float *v149; // rax
  unsigned int v150; // xmm0_4
  unsigned int v151; // xmm1_4
  __int64 v152; // rdx
  unsigned __int64 *v153; // rax
  bool v154; // zf
  float m_fOrthoProjRatio; // xmm0_4
  unsigned __int64 v157; // [rsp+28h] [rbp-E0h]
  OGLMatrix v158; // [rsp+38h] [rbp-D0h] BYREF
  int v159; // [rsp+78h] [rbp-90h]
  OGLMatrix v160; // [rsp+88h] [rbp-80h] BYREF
  __int128 v161; // [rsp+C8h] [rbp-40h]
  __int128 v162; // [rsp+D8h] [rbp-30h]
  __int128 v163; // [rsp+E8h] [rbp-20h]
  __int128 v164; // [rsp+F8h] [rbp-10h]
  __int128 v165; // [rsp+108h] [rbp+0h]
  __int128 v166; // [rsp+118h] [rbp+10h]
  __int128 v167; // [rsp+128h] [rbp+20h]
  __int128 v168; // [rsp+138h] [rbp+30h]
  __int128 v169; // [rsp+148h] [rbp+40h]
  __int128 v170; // [rsp+158h] [rbp+50h]
  __int128 v171; // [rsp+168h] [rbp+60h]
  __int128 v172; // [rsp+178h] [rbp+70h]
  OGLMatrix v173; // [rsp+188h] [rbp+80h] BYREF
  __int128 Buf2[4]; // [rsp+1C8h] [rbp+C0h] BYREF
  __int128 v175[4]; // [rsp+208h] [rbp+100h] BYREF
  __int128 v176[4]; // [rsp+248h] [rbp+140h] BYREF
  __int128 v177; // [rsp+288h] [rbp+180h]

  v159 = shader;
  memset(&v158, 0, sizeof(v158));
  memset(&v160, 0, sizeof(v160));
  OGLMatrix::multiply(&v158, &this->m_View, &this->m_Proj);
  OGLMatrix::multiply(&v160, &blendProjData->orthoView, &blendProjData->orthoProj);
  v8 = *(__m128 *)this->m_View.m;
  v9 = *(__m128 *)&this->m_View.m[4];
  v10 = *(__m128 *)&this->m_View.m[8];
  v11 = *(__m128 *)&this->m_View.m[12];
  *(_QWORD *)&v161 = __PAIR64__(v9.m128_u32[0], v8.m128_u32[0]);
  LODWORD(v162) = _mm_shuffle_ps(v8, v8, 85).m128_u32[0];
  DWORD1(v162) = _mm_shuffle_ps(v9, v9, 85).m128_u32[0];
  LODWORD(v163) = _mm_shuffle_ps(v8, v8, 170).m128_u32[0];
  DWORD2(v162) = _mm_shuffle_ps(v10, v10, 85).m128_u32[0];
  DWORD1(v163) = _mm_shuffle_ps(v9, v9, 170).m128_u32[0];
  HIDWORD(v162) = _mm_shuffle_ps(v11, v11, 85).m128_u32[0];
  DWORD2(v163) = _mm_shuffle_ps(v10, v10, 170).m128_u32[0];
  *((_QWORD *)&v161 + 1) = __PAIR64__(v11.m128_u32[0], v10.m128_u32[0]);
  Buf2[0] = v161;
  Buf2[1] = v162;
  HIDWORD(v163) = _mm_shuffle_ps(v11, v11, 170).m128_u32[0];
  Buf2[2] = v163;
  LODWORD(v164) = _mm_shuffle_ps(v8, v8, 255).m128_u32[0];
  DWORD1(v164) = _mm_shuffle_ps(v9, v9, 255).m128_u32[0];
  DWORD2(v164) = _mm_shuffle_ps(v10, v10, 255).m128_u32[0];
  HIDWORD(v164) = _mm_shuffle_ps(v11, v11, 255).m128_u32[0];
  Buf2[3] = v164;
  *(float *)&v165 = v158.m[0];
  v12 = v158.m[4];
  v13 = v158.m[5];
  v14 = v158.m[6];
  v15 = v160.m[0];
  v16 = v160.m[4];
  v17 = v160.m[8];
  v18 = v160.m[1];
  v19 = v160.m[5];
  v20 = v160.m[2];
  v21 = v160.m[6];
  *(float *)&v168 = v158.m[3];
  *(float *)&v167 = v158.m[2];
  *(_QWORD *)((char *)&v168 + 4) = __PAIR64__(LODWORD(v158.m[11]), LODWORD(v158.m[7]));
  HIDWORD(v166) = LODWORD(v158.m[13]);
  HIDWORD(v168) = LODWORD(v158.m[15]);
  *(float *)&v166 = v158.m[1];
  HIDWORD(v165) = LODWORD(v158.m[12]);
  HIDWORD(v167) = LODWORD(v158.m[14]);
  *(_QWORD *)((char *)&v165 + 4) = __PAIR64__(LODWORD(v158.m[8]), LODWORD(v158.m[4]));
  v175[0] = v165;
  *(_QWORD *)((char *)&v166 + 4) = __PAIR64__(LODWORD(v158.m[9]), LODWORD(v158.m[5]));
  v175[1] = v166;
  HIDWORD(v171) = LODWORD(v160.m[14]);
  *(_QWORD *)((char *)&v167 + 4) = __PAIR64__(LODWORD(v158.m[10]), LODWORD(v158.m[6]));
  v175[2] = v167;
  v175[3] = v168;
  *(_QWORD *)&v172 = __PAIR64__(LODWORD(v160.m[7]), LODWORD(v160.m[3]));
  *((_QWORD *)&v172 + 1) = __PAIR64__(LODWORD(v160.m[15]), LODWORD(v160.m[11]));
  HIDWORD(v170) = LODWORD(v160.m[13]);
  *(_QWORD *)&v169 = __PAIR64__(LODWORD(v160.m[4]), LODWORD(v160.m[0]));
  *((_QWORD *)&v169 + 1) = __PAIR64__(LODWORD(v160.m[12]), LODWORD(v160.m[8]));
  v176[0] = v169;
  *(float *)&v170 = v160.m[1];
  *(_QWORD *)((char *)&v170 + 4) = __PAIR64__(LODWORD(v160.m[9]), LODWORD(v160.m[5]));
  v176[1] = v170;
  *(float *)&v171 = v160.m[2];
  *(_QWORD *)((char *)&v171 + 4) = __PAIR64__(LODWORD(v160.m[10]), LODWORD(v160.m[6]));
  v176[2] = v171;
  v176[3] = v172;
  v173 = v158;
  OGLMatrix::inverse(&v173);
  v23 = this->m_pEffectShader[(int)OGLRender::selectEffectShader(v22, shader)];
  v24 = (KOFShaderManager *)AgSingleton<KOFShaderManager>::ms_instance;
  v25 = *v23->m_piGLUniform;
  v26 = 11i64 * SLODWORD(AgSingleton<KOFShaderManager>::ms_instance[360450].__vftable);
  v27 = *((int *)&AgSingleton<KOFShaderManager>::ms_instance[v26 + 11].~AgSingleton<KOFShaderManager> + 4 * v25);
  v28 = AgSingleton<KOFShaderManager>::ms_instance[SHIDWORD(AgSingleton<KOFShaderManager>::ms_instance[v26 + 5].__vftable)
                                                 + 494188].__vftable;
  if ( memcmp(*((const void **)&v28->~AgSingleton<KOFShaderManager> + v27), Buf2, 0x40ui64) )
  {
    v29 = (_OWORD *)*((_QWORD *)&v28->~AgSingleton<KOFShaderManager> + v27);
    v30 = v162;
    *v29 = v161;
    v31 = v163;
    v29[1] = v30;
    v32 = v164;
    v29[2] = v31;
    v29[3] = v32;
    KOFShaderManager::setUniformWriteMask(v24, v25);
  }
  v33 = v23->m_piGLUniform[1];
  m_currentProgramSlot = v24->m_currentProgramSlot;
  index = v24->m_program[m_currentProgramSlot].m_uniformAttrib[v33].index;
  v36 = v24->m_shaderUniformPtr[v24->m_program[m_currentProgramSlot].m_linkID];
  if ( memcmp(v36[index], v175, 0x40ui64) )
  {
    v37 = v36[index];
    v38 = v166;
    *v37 = v165;
    v39 = v167;
    v37[1] = v38;
    v40 = v168;
    v37[2] = v39;
    v37[3] = v40;
    KOFShaderManager::setUniformWriteMask(v24, v33);
  }
  v41 = v23->m_piGLUniform[2];
  v42 = v24->m_currentProgramSlot;
  v43 = v24->m_program[v42].m_uniformAttrib[v41].index;
  v44 = v24->m_shaderUniformPtr[v24->m_program[v42].m_linkID];
  if ( memcmp(v44[v43], v176, 0x40ui64) )
  {
    v45 = v44[v43];
    v46 = v170;
    *v45 = v169;
    v47 = v171;
    v45[1] = v46;
    v48 = v172;
    v45[2] = v47;
    v45[3] = v48;
    KOFShaderManager::setUniformWriteMask(v24, v41);
  }
  z = blendProjData->blendProjectionCenterPos.z;
  v50 = *(float *)&FLOAT_1_0;
  *(_QWORD *)&v177 = *(_QWORD *)&blendProjData->blendProjectionCenterPos.x;
  v51 = *((float *)&v177 + 1);
  v52 = *(float *)&v177;
  *((_QWORD *)&v177 + 1) = LODWORD(z) | 0x3F80000000000000i64;
  v53 = z;
  v54 = v23->m_piGLUniform[3];
  *(float *)&v55 = (float)((float)((float)(v13 * *((float *)&v177 + 1)) + (float)(v158.m[1] * *(float *)&v177))
                         + (float)(v158.m[9] * z))
                 + v158.m[13];
  v56 = (unsigned __int64 *)v24->m_shaderUniformPtr[v24->m_program[v24->m_currentProgramSlot].m_linkID][v24->m_program[v24->m_currentProgramSlot].m_uniformAttrib[v54].index];
  *((float *)&v177 + 2) = (float)((float)((float)(v14 * *((float *)&v177 + 1)) + (float)(v158.m[2] * *(float *)&v177))
                                + (float)(v158.m[10] * z))
                        + v158.m[14];
  v57 = *v56;
  *(float *)&v58 = (float)((float)((float)(v12 * *((float *)&v177 + 1)) + (float)(v158.m[0] * *(float *)&v177))
                         + (float)(v158.m[8] * v53))
                 + v158.m[12];
  *(_QWORD *)&v177 = __PAIR64__(v55, v58);
  if ( __PAIR128__(v56[1], v57) != __PAIR128__(*((unsigned __int64 *)&v177 + 1), __PAIR64__(v55, v58)) )
  {
    *(_OWORD *)v56 = v177;
    KOFShaderManager::setUniformWriteMask(v24, v54);
  }
  v59 = v23->m_piGLUniform[4];
  v60 = (unsigned __int64 *)v24->m_shaderUniformPtr[v24->m_program[v24->m_currentProgramSlot].m_linkID][v24->m_program[v24->m_currentProgramSlot].m_uniformAttrib[v59].index];
  *(float *)&v61 = (float)((float)((float)(v19 * v51) + (float)(v18 * v52)) + (float)(v160.m[9] * v53)) + v160.m[13];
  *(float *)&v62 = (float)((float)((float)(v15 * v52) + (float)(v16 * v51)) + (float)(v17 * v53)) + v160.m[12];
  v63 = *v60;
  *(_QWORD *)&v177 = __PAIR64__(v61, v62);
  *((float *)&v177 + 2) = (float)((float)((float)(v21 * v51) + (float)(v20 * v52)) + (float)(v160.m[10] * v53))
                        + v160.m[14];
  if ( __PAIR128__(v60[1], v63) != __PAIR128__(*((unsigned __int64 *)&v177 + 1), __PAIR64__(v61, v62)) )
  {
    *(_OWORD *)v60 = v177;
    KOFShaderManager::setUniformWriteMask(v24, v59);
  }
  blendProjectionFlag = blendProjData->blendProjectionFlag;
  v65 = v23->m_piGLUniform[145];
  v66 = v24->m_shaderUniformPtr[v24->m_program[v24->m_currentProgramSlot].m_linkID][v24->m_program[v24->m_currentProgramSlot].m_uniformAttrib[v65].index];
  if ( blendProjectionFlag != *v66 )
  {
    *v66 = blendProjectionFlag;
    KOFShaderManager::setUniformWriteMask(v24, v65);
  }
  v67 = v23->m_piGLUniform[147];
  v68 = (float *)v24->m_shaderUniformPtr[v24->m_program[v24->m_currentProgramSlot].m_linkID][v24->m_program[v24->m_currentProgramSlot].m_uniformAttrib[v67].index];
  if ( blendProjData->fixBlendRatioFlag )
  {
    fixBlendRatio = blendProjData->fixBlendRatio;
    if ( fixBlendRatio != *v68 )
    {
      *v68 = fixBlendRatio;
      KOFShaderManager::setUniformWriteMask(v24, v67);
    }
    v70 = this;
  }
  else
  {
    v70 = this;
    m_fOrthoProjRatio = this->m_fOrthoProjRatio;
    if ( m_fOrthoProjRatio != *v68 )
    {
      *v68 = m_fOrthoProjRatio;
      KOFShaderManager::setUniformWriteMask(v24, v67);
    }
  }
  projNormalAngLightOffset = blendProjData->projNormalAngLightOffset;
  v72 = v23->m_piGLUniform[146];
  v73 = (float *)v24->m_shaderUniformPtr[v24->m_program[v24->m_currentProgramSlot].m_linkID][v24->m_program[v24->m_currentProgramSlot].m_uniformAttrib[v72].index];
  if ( projNormalAngLightOffset != *v73 )
  {
    *v73 = projNormalAngLightOffset;
    KOFShaderManager::setUniformWriteMask(v24, v72);
  }
  v74 = v23->m_piGLUniform[149];
  v75 = (float *)v24->m_shaderUniformPtr[v24->m_program[v24->m_currentProgramSlot].m_linkID][v24->m_program[v24->m_currentProgramSlot].m_uniformAttrib[v74].index];
  if ( pEffectConstData->actionZOffset != *v75 )
  {
    *v75 = pEffectConstData->actionZOffset;
    KOFShaderManager::setUniformWriteMask(v24, v74);
  }
  zOffset = pEffectConstData->zOffset;
  v77 = v23->m_piGLUniform[138];
  v78 = (float *)v24->m_shaderUniformPtr[v24->m_program[v24->m_currentProgramSlot].m_linkID][v24->m_program[v24->m_currentProgramSlot].m_uniformAttrib[v77].index];
  if ( zOffset != *v78 )
  {
    *v78 = zOffset;
    KOFShaderManager::setUniformWriteMask(v24, v77);
  }
  v79 = v23->m_piGLUniform[150];
  v80 = v24->m_shaderUniformPtr[v24->m_program[v24->m_currentProgramSlot].m_linkID][v24->m_program[v24->m_currentProgramSlot].m_uniformAttrib[v79].index];
  if ( *(_QWORD *)v80 != *(_QWORD *)pEffectConstData->posOffset || v80[2] != LODWORD(pEffectConstData->posOffset[2]) )
  {
    *(_QWORD *)v80 = *(_QWORD *)pEffectConstData->posOffset;
    v80[2] = LODWORD(pEffectConstData->posOffset[2]);
    KOFShaderManager::setUniformWriteMask(v24, v79);
  }
  uvColor1Size = pEffectConstData->uvColor1Size;
  v82 = v23->m_piGLUniform[127];
  v83 = v24->m_currentProgramSlot;
  v84 = v24->m_program[v83].m_uniformAttrib[v82].index;
  v85 = v24->m_shaderUniformPtr[v24->m_program[v83].m_linkID];
  if ( *(_QWORD *)v85[v84] != *(_QWORD *)uvColor1Size )
  {
    *(_QWORD *)v85[v84] = *(_QWORD *)uvColor1Size;
    KOFShaderManager::setUniformWriteMask(v24, v82);
  }
  uvColor2Size = pEffectConstData->uvColor2Size;
  v87 = v23->m_piGLUniform[128];
  v88 = v24->m_currentProgramSlot;
  v89 = v24->m_program[v88].m_uniformAttrib[v87].index;
  v90 = v24->m_shaderUniformPtr[v24->m_program[v88].m_linkID];
  if ( *(_QWORD *)v90[v89] != *(_QWORD *)uvColor2Size )
  {
    *(_QWORD *)v90[v89] = *(_QWORD *)uvColor2Size;
    KOFShaderManager::setUniformWriteMask(v24, v87);
  }
  uvAlpha1Size = pEffectConstData->uvAlpha1Size;
  v92 = v23->m_piGLUniform[129];
  v93 = v24->m_currentProgramSlot;
  v94 = v24->m_program[v93].m_uniformAttrib[v92].index;
  v95 = v24->m_shaderUniformPtr[v24->m_program[v93].m_linkID];
  if ( *(_QWORD *)v95[v94] != *(_QWORD *)uvAlpha1Size )
  {
    *(_QWORD *)v95[v94] = *(_QWORD *)uvAlpha1Size;
    KOFShaderManager::setUniformWriteMask(v24, v92);
  }
  uvAlpha2Size = pEffectConstData->uvAlpha2Size;
  v97 = v23->m_piGLUniform[130];
  v98 = v24->m_currentProgramSlot;
  v99 = v24->m_program[v98].m_uniformAttrib[v97].index;
  v100 = v24->m_shaderUniformPtr[v24->m_program[v98].m_linkID];
  if ( *(_QWORD *)v100[v99] != *(_QWORD *)uvAlpha2Size )
  {
    *(_QWORD *)v100[v99] = *(_QWORD *)uvAlpha2Size;
    KOFShaderManager::setUniformWriteMask(v24, v97);
  }
  uvNormalSize = pEffectConstData->uvNormalSize;
  v102 = v23->m_piGLUniform[131];
  v103 = v24->m_currentProgramSlot;
  v104 = v24->m_program[v103].m_uniformAttrib[v102].index;
  v105 = v24->m_shaderUniformPtr[v24->m_program[v103].m_linkID];
  if ( *(_QWORD *)v105[v104] != *(_QWORD *)uvNormalSize )
  {
    *(_QWORD *)v105[v104] = *(_QWORD *)uvNormalSize;
    KOFShaderManager::setUniformWriteMask(v24, v102);
  }
  v106 = v23->m_piGLUniform[133];
  v107 = v24->m_shaderUniformPtr[v24->m_program[v24->m_currentProgramSlot].m_linkID][v24->m_program[v24->m_currentProgramSlot].m_uniformAttrib[v106].index];
  if ( *v107 != *(_QWORD *)pEffectConstData->color1TexCoord
    || v107[1] != *(_QWORD *)&pEffectConstData->color1TexCoord[2] )
  {
    *(_OWORD *)v107 = *(_OWORD *)pEffectConstData->color1TexCoord;
    KOFShaderManager::setUniformWriteMask(v24, v106);
  }
  v108 = v23->m_piGLUniform[134];
  v109 = v24->m_shaderUniformPtr[v24->m_program[v24->m_currentProgramSlot].m_linkID][v24->m_program[v24->m_currentProgramSlot].m_uniformAttrib[v108].index];
  if ( *v109 != *(_QWORD *)pEffectConstData->color2TexCoord
    || v109[1] != *(_QWORD *)&pEffectConstData->color2TexCoord[2] )
  {
    *(_OWORD *)v109 = *(_OWORD *)pEffectConstData->color2TexCoord;
    KOFShaderManager::setUniformWriteMask(v24, v108);
  }
  v110 = v23->m_piGLUniform[135];
  v111 = v24->m_shaderUniformPtr[v24->m_program[v24->m_currentProgramSlot].m_linkID][v24->m_program[v24->m_currentProgramSlot].m_uniformAttrib[v110].index];
  if ( *v111 != *(_QWORD *)pEffectConstData->alpha1TexCoord
    || v111[1] != *(_QWORD *)&pEffectConstData->alpha1TexCoord[2] )
  {
    *(_OWORD *)v111 = *(_OWORD *)pEffectConstData->alpha1TexCoord;
    KOFShaderManager::setUniformWriteMask(v24, v110);
  }
  v112 = v23->m_piGLUniform[136];
  v113 = v24->m_shaderUniformPtr[v24->m_program[v24->m_currentProgramSlot].m_linkID][v24->m_program[v24->m_currentProgramSlot].m_uniformAttrib[v112].index];
  if ( *v113 != *(_QWORD *)pEffectConstData->alpha2TexCoord
    || v113[1] != *(_QWORD *)&pEffectConstData->alpha2TexCoord[2] )
  {
    *(_OWORD *)v113 = *(_OWORD *)pEffectConstData->alpha2TexCoord;
    KOFShaderManager::setUniformWriteMask(v24, v112);
  }
  v114 = v23->m_piGLUniform[137];
  v115 = v24->m_shaderUniformPtr[v24->m_program[v24->m_currentProgramSlot].m_linkID][v24->m_program[v24->m_currentProgramSlot].m_uniformAttrib[v114].index];
  if ( *v115 != *(_QWORD *)pEffectConstData->normalTexCoord
    || v115[1] != *(_QWORD *)&pEffectConstData->normalTexCoord[2] )
  {
    *(_OWORD *)v115 = *(_OWORD *)pEffectConstData->normalTexCoord;
    KOFShaderManager::setUniformWriteMask(v24, v114);
  }
  v116 = v23->m_piGLUniform[139];
  v117 = v24->m_currentProgramSlot;
  v118 = v24->m_program[v117].m_uniformAttrib[v116].index;
  v119 = v24->m_shaderUniformPtr[v24->m_program[v117].m_linkID];
  if ( *(_QWORD *)v119[v118] != *(_QWORD *)pEffectConstData->distortionScale )
  {
    *(_QWORD *)v119[v118] = *(_QWORD *)pEffectConstData->distortionScale;
    KOFShaderManager::setUniformWriteMask(v24, v116);
  }
  falloffParam = pEffectConstData->falloffParam;
  v121 = v23->m_piGLUniform[140];
  v122 = (float *)v24->m_shaderUniformPtr[v24->m_program[v24->m_currentProgramSlot].m_linkID][v24->m_program[v24->m_currentProgramSlot].m_uniformAttrib[v121].index];
  if ( falloffParam != *v122 )
  {
    *v122 = falloffParam;
    KOFShaderManager::setUniformWriteMask(v24, v121);
  }
  v123 = v23->m_piGLUniform[141];
  v124 = v24->m_shaderUniformPtr[v24->m_program[v24->m_currentProgramSlot].m_linkID][v24->m_program[v24->m_currentProgramSlot].m_uniformAttrib[v123].index];
  if ( *v124 != *(_QWORD *)pEffectConstData->blurUV || v124[1] != *(_QWORD *)&pEffectConstData->blurUV[2] )
  {
    *(_OWORD *)v124 = *(_OWORD *)pEffectConstData->blurUV;
    KOFShaderManager::setUniformWriteMask(v24, v123);
  }
  v125 = v23->m_piGLUniform[142];
  v126 = v24->m_shaderUniformPtr[v24->m_program[v24->m_currentProgramSlot].m_linkID][v24->m_program[v24->m_currentProgramSlot].m_uniformAttrib[v125].index];
  if ( *v126 != *(_QWORD *)pEffectConstData->fillColor || v126[1] != *(_QWORD *)&pEffectConstData->fillColor[2] )
  {
    *(_OWORD *)v126 = *(_OWORD *)pEffectConstData->fillColor;
    KOFShaderManager::setUniformWriteMask(v24, v125);
  }
  v127 = v23->m_piGLUniform[143];
  v128 = (float *)v24->m_shaderUniformPtr[v24->m_program[v24->m_currentProgramSlot].m_linkID][v24->m_program[v24->m_currentProgramSlot].m_uniformAttrib[v127].index];
  if ( v50 != *v128 )
  {
    *v128 = 1.0;
    KOFShaderManager::setUniformWriteMask(v24, v127);
  }
  v129 = v23->m_piGLUniform[144];
  v130 = (float *)v24->m_shaderUniformPtr[v24->m_program[v24->m_currentProgramSlot].m_linkID][v24->m_program[v24->m_currentProgramSlot].m_uniformAttrib[v129].index];
  if ( 4096.0 != *v130 )
  {
    *v130 = 4096.0;
    KOFShaderManager::setUniformWriteMask(v24, v129);
  }
  bufferscale = pEffectConstData->bufferscale;
  v132 = v23->m_piGLUniform[155];
  v133 = (float *)v24->m_shaderUniformPtr[v24->m_program[v24->m_currentProgramSlot].m_linkID][v24->m_program[v24->m_currentProgramSlot].m_uniformAttrib[v132].index];
  if ( bufferscale != *v133 )
  {
    *v133 = bufferscale;
    KOFShaderManager::setUniformWriteMask(v24, v132);
  }
  v134 = v23->m_piGLUniform[148];
  v135 = v24->m_shaderUniformPtr[v24->m_program[v24->m_currentProgramSlot].m_linkID][v24->m_program[v24->m_currentProgramSlot].m_uniformAttrib[v134].index];
  if ( *(_QWORD *)v135 != *(_QWORD *)pEffectConstData->cameraPos || v135[2] != LODWORD(pEffectConstData->cameraPos[2]) )
  {
    *(_QWORD *)v135 = *(_QWORD *)pEffectConstData->cameraPos;
    v135[2] = LODWORD(pEffectConstData->cameraPos[2]);
    KOFShaderManager::setUniformWriteMask(v24, v134);
  }
  v136 = v23->m_piGLUniform[151];
  v137 = v24->m_shaderUniformPtr[v24->m_program[v24->m_currentProgramSlot].m_linkID][v24->m_program[v24->m_currentProgramSlot].m_uniformAttrib[v136].index];
  if ( *v137 != *(_QWORD *)pEffectConstData->lightDiffuse || v137[1] != *(_QWORD *)&pEffectConstData->lightDiffuse[2] )
  {
    *(_OWORD *)v137 = *(_OWORD *)pEffectConstData->lightDiffuse;
    KOFShaderManager::setUniformWriteMask(v24, v136);
  }
  v138 = v23->m_piGLUniform[152];
  v139 = v24->m_shaderUniformPtr[v24->m_program[v24->m_currentProgramSlot].m_linkID][v24->m_program[v24->m_currentProgramSlot].m_uniformAttrib[v138].index];
  if ( *v139 != *(_QWORD *)pEffectConstData->lightPosition || v139[1] != *(_QWORD *)&pEffectConstData->lightPosition[2] )
  {
    *(_OWORD *)v139 = *(_OWORD *)pEffectConstData->lightPosition;
    KOFShaderManager::setUniformWriteMask(v24, v138);
  }
  v140 = v23->m_piGLUniform[153];
  v141 = v24->m_shaderUniformPtr[v24->m_program[v24->m_currentProgramSlot].m_linkID][v24->m_program[v24->m_currentProgramSlot].m_uniformAttrib[v140].index];
  if ( *v141 != *(_QWORD *)pEffectConstData->lightAttenuation
    || v141[1] != *(_QWORD *)&pEffectConstData->lightAttenuation[2] )
  {
    *(_OWORD *)v141 = *(_OWORD *)pEffectConstData->lightAttenuation;
    KOFShaderManager::setUniformWriteMask(v24, v140);
  }
  v142 = v23->m_piGLUniform[154];
  v143 = v24->m_shaderUniformPtr[v24->m_program[v24->m_currentProgramSlot].m_linkID][v24->m_program[v24->m_currentProgramSlot].m_uniformAttrib[v142].index];
  if ( *v143 != *(_QWORD *)pEffectConstData->lightIntensity
    || v143[1] != *(_QWORD *)&pEffectConstData->lightIntensity[2] )
  {
    *(_OWORD *)v143 = *(_OWORD *)pEffectConstData->lightIntensity;
    KOFShaderManager::setUniformWriteMask(v24, v142);
  }
  influenceOfLight = pEffectConstData->influenceOfLight;
  v145 = v23->m_piGLUniform[156];
  v146 = (float *)v24->m_shaderUniformPtr[v24->m_program[v24->m_currentProgramSlot].m_linkID][v24->m_program[v24->m_currentProgramSlot].m_uniformAttrib[v145].index];
  if ( influenceOfLight != *v146 )
  {
    *v146 = influenceOfLight;
    KOFShaderManager::setUniformWriteMask(v24, v145);
  }
  ignoreUvMirror = pEffectConstData->ignoreUvMirror;
  v148 = v23->m_piGLUniform[157];
  v149 = (float *)v24->m_shaderUniformPtr[v24->m_program[v24->m_currentProgramSlot].m_linkID][v24->m_program[v24->m_currentProgramSlot].m_uniformAttrib[v148].index];
  if ( ignoreUvMirror != *v149 )
  {
    *v149 = ignoreUvMirror;
    KOFShaderManager::setUniformWriteMask(v24, v148);
  }
  if ( (v159 & 0x2000) != 0 )
  {
    *(float *)&v150 = (float)v70->m_GroundFog.m_bOn;
    *(float *)&v151 = (float)v70->m_SkyFog.m_bOn;
    LODWORD(v152) = v23->m_piGLUniform[41];
    v157 = __PAIR64__(v151, v150);
    v153 = (unsigned __int64 *)v24->m_shaderUniformPtr[v24->m_program[v24->m_currentProgramSlot].m_linkID][v24->m_program[v24->m_currentProgramSlot].m_uniformAttrib[(int)v152].index];
    v154 = *v153 == __PAIR64__(v151, v150);
  }
  else
  {
    v157 = 0i64;
    v152 = v23->m_piGLUniform[41];
    v153 = (unsigned __int64 *)v24->m_shaderUniformPtr[v24->m_program[v24->m_currentProgramSlot].m_linkID][v24->m_program[v24->m_currentProgramSlot].m_uniformAttrib[v152].index];
    v154 = *v153 == 0;
  }
  if ( !v154 )
  {
    *v153 = v157;
    KOFShaderManager::setUniformWriteMask(v24, v152);
  }
}

void __fastcall OGLRender::setFXShader(
        OGLRender *this,
        int *shader,
        OGLModel *pModel,
        OGLFigure *pFigure,
        OGLModelStackData *pStack,
        int *MatMapID,
        int EffectFlg)
{
  OGLModelStackData *v7; // rax
  OGLMaterial *v11; // rsi
  unsigned __int8 v12; // al
  unsigned int m_uiModeFlg; // er9
  unsigned __int8 v14; // dl
  int m_shaderType; // eax
  int *v16; // rax
  int v17; // ecx
  int v18; // eax
  int v19; // er8
  int *v20; // rax
  int v21; // ecx
  int v22; // eax
  int v23; // edx
  int *v24; // rax
  int v25; // ecx
  int v26; // eax
  int *v27; // rcx
  int *v28; // rax
  int *v29; // rax
  int v30; // ecx
  int *v31; // rax
  int v32; // ecx
  int v33; // eax
  int *v34; // rax
  int v35; // ecx
  int v36; // eax
  int v37; // ecx
  bool v38; // zf
  int *v39; // rcx
  int v40; // eax
  int v41; // er8
  int v42; // edx
  int *v43; // rcx
  int v44; // eax
  int v45; // er8
  int v46; // edx
  int v47; // eax
  int v48; // eax
  int *v49; // rcx
  int v50; // eax
  int *v51; // rax
  int v52; // ecx
  int *v53; // rax
  int *v54; // rcx
  int v55; // eax
  int v56; // er8
  int *v57; // rcx
  int v58; // eax
  int v59; // er8
  int *v60; // rcx
  int v61; // eax
  int *v62; // rcx
  int v63; // er8
  int v64; // eax
  int v65; // edx
  bool v66; // zf
  int v67; // er8
  int v68; // edx
  int v69; // eax
  int *v70; // rax
  int v71; // ecx
  int v72; // er8
  int v73; // edx
  int *v74; // rcx
  int v75; // eax
  int v76; // edx
  int *v77; // rax
  int *v78; // rax
  int *v79; // rcx
  int *v80; // rcx
  int *v81; // rax
  int *v82; // rcx
  int v83; // eax
  int *v84; // rcx
  int v85; // eax
  int *v86; // rcx
  int v87; // er8
  int v88; // eax
  int *v89; // rcx
  int v90; // eax
  int *v91; // rax
  int v92; // ecx
  int v93; // er8
  int *v94; // rax
  int v95; // ecx
  int v96; // eax
  int v97; // ecx
  int v98; // eax
  int *v99; // rax
  int v100; // ecx
  int *v101; // rax
  int v102; // ecx
  int *v103; // rax
  int v104; // ecx
  int v105; // er8
  int v106; // er8
  int v107; // ecx
  int *v108; // rax
  int v109; // ecx
  int v110; // edx
  int v111; // er8
  int v112; // eax
  int *v113; // rcx
  int v114; // eax
  int *v115; // rcx
  int v116; // eax
  int v117; // eax
  int v118; // edx
  int v119; // eax
  int v120; // edx
  int v121; // eax
  int v122; // eax
  int *v123; // rax
  int v124; // ecx
  int v125; // eax
  int v126; // er8
  int *v127; // rax
  int v128; // ecx
  int v129; // eax
  int v130; // edx
  int *v131; // rax
  int v132; // ecx
  int v133; // eax
  int *v134; // rcx
  int *v135; // rax
  int *v136; // rax
  int v137; // ecx
  int *v138; // rax
  int v139; // ecx
  int v140; // eax
  int *v141; // rax
  int v142; // ecx
  int v143; // er8
  bool v144; // cc
  int v145; // eax
  bool v146; // zf
  int *v147; // rcx
  int v148; // eax
  int v149; // er8
  int v150; // edx
  int *v151; // rcx
  int v152; // eax
  int v153; // er8
  int v154; // edx
  int v155; // eax
  int v156; // eax
  int *v157; // rcx
  int v158; // eax
  int *v159; // rax
  int v160; // ecx
  int *v161; // rax
  int *v162; // rcx
  int v163; // eax
  int v164; // er8
  int *v165; // rcx
  int v166; // eax
  int v167; // er8
  int *v168; // rcx
  int v169; // eax
  int *v170; // rcx
  int v171; // er8
  int v172; // eax
  int v173; // edx
  bool v174; // zf
  int v175; // er8
  int v176; // edx
  int v177; // ecx
  int v178; // eax
  int *v179; // rcx
  int v180; // eax
  int v181; // edx
  int *v182; // rax
  int *v183; // rax
  int *v184; // rcx
  int *v185; // rcx
  int *v186; // rax
  int *v187; // rcx
  int v188; // eax
  int *v189; // rcx
  int *v190; // rcx
  int v191; // er8
  int v192; // eax
  int *v193; // rcx
  int v194; // eax
  int *v195; // rax
  int v196; // ecx
  int v197; // er8
  int *v198; // rax
  int v199; // ecx
  int v200; // eax
  int v201; // ecx
  int v202; // eax
  int *v203; // rax
  int v204; // ecx
  int *v205; // rax
  int v206; // ecx
  int *v207; // rax
  int v208; // ecx
  int v209; // er8
  int v210; // er8
  int v211; // eax
  int *v212; // rcx
  int v213; // eax
  int *v214; // rcx
  int v215; // eax
  int v216; // eax
  int v217; // edx
  int v218; // eax
  int v219; // edx
  int v220; // eax
  int v221; // eax
  int v222; // eax
  int worldLights; // [rsp+58h] [rbp+38h] BYREF
  int v224; // [rsp+5Ch] [rbp+3Ch]

  v224 = HIDWORD(pFigure);
  v7 = pStack;
  worldLights = 0;
  LODWORD(pStack) = 0;
  v11 = &pModel->m_pMaterial[v7->MatNo];
  v12 = OGLRender::shadowOnlyLighting(this, v11, (int *)&pStack, &worldLights);
  m_uiModeFlg = pModel->m_uiModeFlg;
  v14 = v12;
  m_shaderType = v11->m_shaderType;
  if ( (m_uiModeFlg & 0x200) != 0 )
  {
    switch ( m_shaderType )
    {
      case 1:
        *shader = 4642;
        if ( pModel->m_bProjectionBlend && this->m_fOrthoProjRatio > 0.0 )
          *shader = 4643;
        goto LABEL_520;
      case 2:
        v115 = MatMapID;
        *shader = 5812;
        v116 = v115[4];
        if ( v116 <= 0 )
          goto LABEL_489;
        if ( v115[1] <= 0 || v115[6] <= 0 || v115[7] <= 0 )
        {
          if ( v115[1] <= 0 || v115[6] <= 0 )
          {
            if ( v115[1] > 0 && v115[7] > 0 )
            {
              *shader = 4980;
              goto LABEL_499;
            }
            if ( v115[1] > 0 )
            {
              *shader = 4884;
              goto LABEL_499;
            }
            if ( v115[7] > 0 )
            {
              *shader = 4932;
              goto LABEL_499;
            }
LABEL_489:
            v118 = v115[1];
            if ( v118 > 0 && v115[7] > 0 )
            {
              *shader = 4788;
              goto LABEL_499;
            }
            if ( v116 > 0 )
            {
              *shader = 4836;
              goto LABEL_499;
            }
            if ( v118 > 0 )
            {
              *shader = 4692;
              goto LABEL_499;
            }
            v117 = *shader;
            if ( v115[7] > 0 )
              v117 = 4740;
          }
          else
          {
            v117 = 4888;
            if ( v11->m_useTransparency )
              v117 = 4892;
          }
        }
        else
        {
          v117 = 4984;
          if ( v11->m_useTransparency )
            v117 = 4988;
        }
        *shader = v117;
LABEL_499:
        if ( pModel->m_bProjectionBlend && this->m_fOrthoProjRatio > 0.0 )
          *shader += 12;
        v119 = EffectFlg;
        if ( (EffectFlg & 0x80000) != 0 )
          *shader += 2;
        if ( (v119 & 0x704000) != 0 )
          ++*shader;
        if ( pModel->m_receiveShadowsFlg )
          *shader += 24;
        if ( (_DWORD)pStack + worldLights == 3 )
        {
          *shader += 384;
        }
        else if ( (_DWORD)pStack + worldLights == 4 )
        {
          *shader += 768;
        }
        goto LABEL_520;
      case 3:
        v120 = (_DWORD)pStack + worldLights;
        *shader = 5796;
        v121 = *shader;
        if ( v120 == 3 )
          v121 = 5798;
        *shader = v121;
        if ( v11->m_useMatcap )
          ++*shader;
        if ( pModel->m_bProjectionBlend && this->m_fOrthoProjRatio > 0.0 )
          *shader += 8;
        goto LABEL_520;
      case 4:
        v16 = MatMapID;
        *shader = 5816;
        v17 = v16[4];
        if ( v17 <= 0 || v16[7] <= 0 )
        {
          v18 = *shader;
          if ( v17 > 0 )
            v18 = 5824;
          *shader = v18;
        }
        else
        {
          *shader = 5832;
        }
        v19 = EffectFlg;
        if ( (EffectFlg & 0x80000) != 0 )
          *shader += 24;
        if ( v14 )
        {
          *shader += 2;
        }
        else if ( (_DWORD)pStack + worldLights == 2 )
        {
          *shader += 4;
        }
        else if ( (_DWORD)pStack + worldLights == 3 )
        {
          *shader += 6;
        }
        if ( pModel->m_receiveShadowsFlg && (v19 & 0x20000000) != 0 )
          ++*shader;
        if ( (v19 & 0x8000000) != 0 && this->m_LightningCol[3] != 0.0 )
          *shader += 48;
        goto LABEL_520;
      case 5:
        v20 = MatMapID;
        *shader = 5912;
        v21 = v20[4];
        if ( v21 <= 0 || v20[7] <= 0 )
        {
          v22 = *shader;
          if ( v21 > 0 )
            v22 = 5917;
          *shader = v22;
        }
        else
        {
          *shader = 5922;
        }
        if ( (EffectFlg & 0x80000) != 0 )
          *shader += 15;
        if ( v14 )
          goto LABEL_90;
        v23 = (_DWORD)pStack + worldLights;
        goto LABEL_33;
      case 6:
        v24 = MatMapID;
        *shader = 5942;
        v25 = v24[4];
        if ( v25 <= 0 || v24[7] <= 0 )
        {
          v26 = *shader;
          if ( v25 > 0 )
            v26 = 5944;
          *shader = v26;
        }
        else
        {
          *shader = 5946;
        }
        if ( worldLights + (_DWORD)pStack == 3 )
          ++*shader;
        goto LABEL_520;
      case 7:
        v28 = MatMapID;
        *shader = 6249;
        if ( v28[4] <= 0 )
        {
          if ( v28[7] > 0 )
            *shader = 6250;
        }
        else if ( v28[7] > 0 )
        {
          *shader = 6251;
        }
        goto LABEL_520;
      case 8:
        v29 = MatMapID;
        *shader = 6252;
        v30 = v29[4];
        if ( v30 <= 0 )
        {
          if ( v29[7] > 0 )
          {
            *shader = 6253;
            goto LABEL_520;
          }
        }
        else if ( v29[7] > 0 )
        {
          *shader = 6255;
          goto LABEL_520;
        }
        if ( v30 > 0 )
          *shader = 6254;
        goto LABEL_520;
      case 9:
        v31 = MatMapID;
        *shader = 6256;
        v32 = v31[4];
        if ( v32 <= 0 )
        {
          if ( v31[7] > 0 )
          {
            *shader = 6259;
            goto LABEL_71;
          }
        }
        else if ( v31[7] > 0 )
        {
          *shader = 6265;
          goto LABEL_71;
        }
        v33 = *shader;
        if ( v32 > 0 )
          v33 = 6262;
        *shader = v33;
LABEL_71:
        if ( v14 )
          goto LABEL_90;
        if ( worldLights + (_DWORD)pStack == 3 )
          *shader += 2;
        goto LABEL_520;
      case 10:
        v34 = MatMapID;
        *shader = 6268;
        v35 = v34[4];
        if ( v35 <= 0 )
        {
          if ( v34[7] > 0 )
          {
            *shader = 6274;
            goto LABEL_82;
          }
        }
        else if ( v34[7] > 0 )
        {
          *shader = 6286;
          goto LABEL_82;
        }
        v36 = *shader;
        if ( v35 > 0 )
          v36 = 6280;
        *shader = v36;
LABEL_82:
        if ( v14 )
        {
          *shader += 2;
          goto LABEL_87;
        }
        v37 = worldLights + (_DWORD)pStack;
        goto LABEL_85;
      case 11:
        v27 = MatMapID;
        *shader = 6295;
        if ( v27[4] > 0 )
        {
          if ( v27[7] <= 0 )
            *shader = 6296;
          else
            *shader = 6297;
        }
        goto LABEL_520;
      case 12:
        v38 = (EffectFlg & 0x10000) == 0;
        *shader = 6298;
        if ( v38 )
        {
          if ( v14 )
            *shader = 6300;
        }
        else
        {
          *shader = 6299;
        }
        goto LABEL_520;
      case 13:
        v53 = MatMapID;
        *shader = 6301;
        if ( v53[4] > 0 )
          *shader = 6302;
        goto LABEL_520;
      case 14:
        v80 = MatMapID;
        *shader = 6292;
        if ( v80[4] > 0 )
        {
          if ( v80[7] <= 0 )
            *shader = 6293;
          else
            *shader = 6294;
        }
        goto LABEL_520;
      case 15:
        v81 = MatMapID;
        *shader = 6303;
        if ( v81[4] <= 0 )
        {
          if ( v81[7] > 0 )
            *shader = 6304;
        }
        else if ( v81[7] > 0 )
        {
          *shader = 6305;
        }
        goto LABEL_520;
      case 16:
        v82 = MatMapID;
        *shader = 6306;
        if ( v82[4] <= 0 || v82[7] <= 0 )
        {
          v83 = *shader;
          if ( v82[7] > 0 )
            v83 = 6308;
          v66 = (EffectFlg & 0x10000) == 0;
          *shader = v83;
        }
        else
        {
          v66 = (EffectFlg & 0x10000) == 0;
          *shader = 6310;
        }
        goto LABEL_241;
      case 17:
        v84 = MatMapID;
        *shader = 6312;
        if ( v84[4] <= 0 || v84[7] <= 0 )
        {
          v85 = *shader;
          if ( v84[7] > 0 )
            v85 = 6318;
          *shader = v85;
        }
        else
        {
          *shader = 6324;
        }
        if ( v14 )
        {
          *shader += 2;
        }
        else
        {
          v37 = (_DWORD)pStack + worldLights;
LABEL_85:
          if ( v37 == 2 )
            *shader += 4;
        }
LABEL_87:
        if ( pModel->m_receiveShadowsFlg )
        {
          v38 = (EffectFlg & 0x20000000) == 0;
LABEL_89:
          if ( !v38 )
            goto LABEL_90;
        }
        goto LABEL_520;
      case 18:
        v86 = MatMapID;
        *shader = 6330;
        if ( v86[4] > 0 && v86[7] > 0 )
        {
          *shader = 6336;
          goto LABEL_350;
        }
        v87 = 6333;
        goto LABEL_347;
      case 19:
        v86 = MatMapID;
        *shader = 6339;
        if ( v86[4] <= 0 || v86[7] <= 0 )
        {
          v87 = 6342;
LABEL_347:
          v88 = *shader;
          if ( v86[7] > 0 )
            v88 = v87;
          *shader = v88;
        }
        else
        {
          *shader = 6345;
        }
LABEL_350:
        if ( (EffectFlg & 0x10000) != 0 )
        {
LABEL_90:
          ++*shader;
        }
        else if ( v14 )
        {
          *shader += 2;
        }
        goto LABEL_520;
      case 20:
        v51 = MatMapID;
        *shader = 5948;
        v52 = *shader;
        if ( v51[4] > 0 )
          v52 = 5953;
        v38 = (EffectFlg & 0x10000) == 0;
        *shader = v52;
        if ( !v38 )
          goto LABEL_90;
        if ( v14 )
        {
          *shader += 2;
        }
        else if ( (_DWORD)pStack + worldLights == 2 )
        {
          *shader += 3;
        }
        else if ( (_DWORD)pStack + worldLights == 3 )
        {
          *shader += 4;
        }
        goto LABEL_520;
      case 21:
        v38 = (EffectFlg & 0x10000) == 0;
        *shader = 5958;
        if ( v38 )
        {
          if ( v14 )
            *shader = 5960;
        }
        else
        {
          *shader = 5959;
        }
        goto LABEL_520;
      case 22:
        v39 = MatMapID;
        *shader = 5961;
        if ( v39[4] <= 0 )
        {
          v40 = *shader;
          if ( v39[7] > 0 )
            v40 = 6005;
          *shader = v40;
        }
        else if ( v39[7] <= 0 )
        {
          *shader = 5983;
        }
        else
        {
          *shader = 6027;
        }
        v41 = EffectFlg;
        if ( (EffectFlg & 0x80000) != 0 )
          *shader += 11;
        if ( (v41 & 0x10000) != 0 )
        {
          *shader += 2;
        }
        else if ( v14 )
        {
          *shader += 3;
        }
        else
        {
          v42 = (_DWORD)pStack + worldLights;
          if ( (_DWORD)pStack + worldLights == 2 )
          {
            *shader += 5;
          }
          else if ( v42 == 3 )
          {
            *shader += 7;
          }
          else if ( v42 == 4 )
          {
            *shader += 9;
          }
        }
        if ( pModel->m_receiveShadowsFlg && (v41 & 0x20010000) == 0x20000000 )
          ++*shader;
        if ( (v41 & 0x8000000) != 0 && this->m_LightningCol[3] != 0.0 )
          *shader += 88;
        goto LABEL_520;
      case 23:
        v43 = MatMapID;
        *shader = 6137;
        if ( v43[4] <= 0 )
        {
          v44 = *shader;
          if ( v43[7] > 0 )
            v44 = 6181;
          *shader = v44;
        }
        else if ( v43[7] <= 0 )
        {
          *shader = 6159;
        }
        else
        {
          *shader = 6203;
        }
        v45 = EffectFlg;
        if ( (EffectFlg & 0x80000) != 0 )
          *shader += 11;
        if ( (v45 & 0x10000) != 0 )
        {
          *shader += 2;
        }
        else if ( v14 )
        {
          *shader += 3;
        }
        else
        {
          v46 = (_DWORD)pStack + worldLights;
          if ( (_DWORD)pStack + worldLights == 2 )
          {
            *shader += 5;
          }
          else if ( v46 == 3 )
          {
            *shader += 7;
          }
          else if ( v46 == 4 )
          {
            *shader += 9;
          }
        }
        if ( pModel->m_receiveShadowsFlg && (v45 & 0x20010000) == 0x20000000 )
          ++*shader;
        goto LABEL_520;
      case 24:
        v38 = (EffectFlg & 0x80000) == 0;
        *shader = 6225;
        v47 = *shader;
        if ( !v38 )
          v47 = 6227;
        *shader = v47;
        if ( v14 )
          ++*shader;
        goto LABEL_520;
      case 25:
        v38 = (EffectFlg & 0x80000) == 0;
        *shader = 6229;
        v48 = *shader;
        if ( !v38 )
          v48 = 6231;
        *shader = v48;
        if ( v14 )
          ++*shader;
        goto LABEL_520;
      case 26:
        v49 = MatMapID;
        *shader = 6233;
        if ( v49[4] <= 0 )
        {
          v50 = *shader;
          if ( v49[7] > 0 )
            v50 = 6241;
          *shader = v50;
        }
        else if ( v49[7] <= 0 )
        {
          *shader = 6237;
        }
        else
        {
          *shader = 6245;
        }
        if ( (EffectFlg & 0x80000) != 0 )
          *shader += 2;
        if ( v14 )
          ++*shader;
        goto LABEL_520;
      case 27:
        v38 = (EffectFlg & 0x10000) == 0;
        *shader = 6348;
        if ( v38 )
        {
          if ( v14 )
            *shader = 6350;
        }
        else
        {
          *shader = 6349;
        }
        goto LABEL_520;
      case 28:
        v38 = (EffectFlg & 0x10000) == 0;
        *shader = 6351;
        if ( v38 )
        {
          if ( v14 )
            *shader = 6353;
        }
        else
        {
          *shader = 6352;
        }
        goto LABEL_520;
      case 29:
        *shader = 6354;
        goto LABEL_520;
      case 30:
        *shader = 6355;
        goto LABEL_520;
      case 31:
        v89 = MatMapID;
        *shader = 6356;
        if ( v89[4] <= 0 )
        {
          v90 = *shader;
          if ( v89[7] > 0 )
            v90 = 6366;
          *shader = v90;
        }
        else if ( v89[7] <= 0 )
        {
          *shader = 6361;
        }
        else
        {
          *shader = 6371;
        }
        v23 = (_DWORD)pStack + worldLights;
        if ( (_DWORD)pStack + worldLights == 1 )
        {
          ++*shader;
        }
        else
        {
LABEL_33:
          switch ( v23 )
          {
            case 2:
              *shader += 2;
              break;
            case 3:
              *shader += 3;
              break;
            case 4:
              *shader += 4;
              break;
          }
        }
        goto LABEL_520;
      case 32:
        v91 = MatMapID;
        *shader = 6376;
        v92 = *shader;
        if ( v91[4] > 0 )
          v92 = 6390;
        v93 = EffectFlg;
        *shader = v92;
        if ( (v93 & 0x80000) != 0 )
        {
          *shader += 7;
        }
        else if ( (v93 & 0x800000) != 0 )
        {
          *shader += 28;
        }
        if ( (v93 & 0x10000) != 0 )
        {
          *shader += 2;
        }
        else if ( v14 )
        {
          *shader += 3;
        }
        else if ( worldLights + (_DWORD)pStack == 2 )
        {
          *shader += 5;
        }
        if ( (v93 & 0x8000000) != 0 && this->m_LightningCol[3] != 0.0 )
          *shader += 42;
        if ( !pModel->m_receiveShadowsFlg )
          goto LABEL_520;
        v38 = (v93 & 0x20000000) == 0;
        goto LABEL_89;
      case 33:
        v94 = MatMapID;
        *shader = 6460;
        v95 = v94[4];
        if ( v95 <= 0 || v94[7] <= 0 )
        {
          v96 = *shader;
          if ( v95 > 0 )
            v96 = 6466;
          *shader = v96;
        }
        else
        {
          *shader = 6472;
        }
        if ( (EffectFlg & 0x80000) != 0 )
          *shader += 3;
        if ( !v14 )
          goto LABEL_398;
        goto LABEL_90;
      case 34:
        v97 = EffectFlg;
        *shader = 6478;
        v98 = *shader;
        if ( (v97 & 0x80000) != 0 )
          v98 = 6483;
        *shader = v98;
        if ( (v97 & 0x10000) != 0 )
        {
          *shader += 2;
        }
        else if ( v14 )
        {
          *shader += 3;
        }
        if ( pModel->m_receiveShadowsFlg && (v97 & 0x20010000) == 0x20000000 )
          ++*shader;
        goto LABEL_520;
      case 35:
        v99 = MatMapID;
        *shader = 6488;
        v100 = *shader;
        if ( v99[4] > 0 )
          v100 = 6491;
        *shader = v100;
        goto LABEL_350;
      case 36:
        v101 = MatMapID;
        *shader = 6494;
        v102 = *shader;
        if ( v101[4] > 0 )
          v102 = 6498;
        *shader = v102;
        if ( v14 )
          *shader += 2;
        if ( pModel->m_receiveShadowsFlg && (EffectFlg & 0x20010000) == 0x20000000 )
          ++*shader;
        goto LABEL_520;
      case 37:
        v86 = MatMapID;
        *shader = 6502;
        if ( v86[4] <= 0 )
          goto LABEL_350;
        v87 = 6505;
        goto LABEL_347;
      case 38:
        v103 = MatMapID;
        *shader = 6824;
        v104 = *shader;
        if ( v103[4] > 0 )
          v104 = 6836;
        v105 = EffectFlg;
        *shader = v104;
        if ( (v105 & 0x80000) != 0 )
          *shader += 2;
        if ( v14 )
        {
          *shader += 4;
        }
        else if ( worldLights + (_DWORD)pStack == 2 )
        {
          *shader += 8;
        }
        if ( !pModel->m_receiveShadowsFlg )
          goto LABEL_520;
        v38 = (v105 & 0x20000000) == 0;
        goto LABEL_89;
      case 39:
        *shader = 6855;
        v106 = 6858;
        goto LABEL_432;
      case 40:
        v108 = MatMapID;
        *shader = 6861;
        v109 = *shader;
        if ( v108[4] > 0 )
          v109 = 6864;
        v110 = (_DWORD)pStack + worldLights;
        *shader = v109;
        if ( v110 == 2 )
          goto LABEL_90;
        if ( v110 == 3 )
          *shader += 2;
        goto LABEL_520;
      case 41:
        *shader = 6867;
        v106 = 6870;
LABEL_432:
        v107 = *shader;
        if ( MatMapID[4] > 0 )
          v107 = v106;
        *shader = v107;
        if ( v14 )
        {
          ++*shader;
        }
        else
        {
LABEL_398:
          if ( worldLights + (_DWORD)pStack == 2 )
            *shader += 2;
        }
        goto LABEL_520;
      case 42:
        v111 = EffectFlg;
        *shader = 6889;
        if ( (v111 & 0x10000) != 0 )
        {
          *shader = 6891;
        }
        else if ( v14 )
        {
          *shader = 6892;
        }
        else
        {
          v112 = *shader;
          if ( (_DWORD)pStack + worldLights == 2 )
            v112 = 6894;
          *shader = v112;
        }
        if ( pModel->m_receiveShadowsFlg && (v111 & 0x20010000) == 0x20000000 )
          ++*shader;
        goto LABEL_520;
      case 43:
        v38 = (EffectFlg & 0x10000) == 0;
        *shader = 6848;
        if ( v38 )
        {
          if ( v14 )
          {
            *shader = 6850;
          }
          else if ( worldLights + (_DWORD)pStack == 2 )
          {
            *shader = 6851;
          }
        }
        else
        {
          *shader = 6849;
        }
        goto LABEL_520;
      case 44:
        v38 = (EffectFlg & 0x10000) == 0;
        *shader = 6852;
        if ( v38 )
        {
          if ( v14 )
            *shader = 6854;
        }
        else
        {
          *shader = 6853;
        }
        goto LABEL_520;
      case 45:
        v54 = MatMapID;
        *shader = 6508;
        if ( v54[4] <= 0 )
        {
          v55 = *shader;
          if ( v54[7] > 0 )
            v55 = 6540;
          *shader = v55;
        }
        else if ( v54[7] <= 0 )
        {
          *shader = 6524;
        }
        else
        {
          *shader = 6556;
        }
        v56 = EffectFlg;
        if ( (EffectFlg & 0x80000) != 0 )
          *shader += 8;
        if ( v14 )
        {
          *shader += 2;
        }
        else if ( (_DWORD)pStack + worldLights == 2 )
        {
          *shader += 4;
        }
        else if ( (_DWORD)pStack + worldLights == 3 )
        {
          *shader += 6;
        }
        if ( pModel->m_receiveShadowsFlg && (v56 & 0x20000000) != 0 )
          ++*shader;
        goto LABEL_520;
      case 46:
        v57 = MatMapID;
        *shader = 6572;
        if ( v57[4] <= 0 )
        {
          v58 = *shader;
          if ( v57[7] > 0 )
            v58 = 6596;
          *shader = v58;
        }
        else if ( v57[7] <= 0 )
        {
          *shader = 6584;
        }
        else
        {
          *shader = 6608;
        }
        v59 = EffectFlg;
        if ( (EffectFlg & 0x80000) != 0 )
          *shader += 6;
        if ( v14 )
        {
          *shader += 2;
        }
        else if ( worldLights + (_DWORD)pStack == 2 )
        {
          *shader += 4;
        }
        if ( pModel->m_receiveShadowsFlg && (v59 & 0x20000000) != 0 )
          ++*shader;
        goto LABEL_520;
      case 47:
        v60 = MatMapID;
        *shader = 6620;
        if ( v60[4] <= 0 )
        {
          v61 = *shader;
          if ( v60[7] > 0 )
            v61 = 6624;
          *shader = v61;
        }
        else if ( v60[7] <= 0 )
        {
          *shader = 6622;
        }
        else
        {
          *shader = 6626;
        }
        if ( (EffectFlg & 0x80000) != 0 )
          ++*shader;
        goto LABEL_520;
      case 48:
        v62 = MatMapID;
        *shader = 6628;
        if ( v62[4] <= 0 )
        {
          v63 = 6648;
          goto LABEL_228;
        }
        if ( v62[7] <= 0 )
          *shader = 6638;
        else
          *shader = 6658;
        break;
      case 49:
        v62 = MatMapID;
        *shader = 6668;
        if ( v62[4] <= 0 )
        {
          v63 = 6688;
          goto LABEL_228;
        }
        if ( v62[7] <= 0 )
          *shader = 6678;
        else
          *shader = 6698;
        break;
      case 50:
        v67 = EffectFlg;
        *shader = 6708;
        if ( (v67 & 0x10000) != 0 )
        {
          *shader = 6710;
        }
        else if ( v14 )
        {
          *shader = 6711;
        }
        else
        {
          v68 = (_DWORD)pStack + worldLights;
          if ( (_DWORD)pStack + worldLights == 2 )
          {
            *shader = 6713;
          }
          else if ( v68 == 3 )
          {
            *shader = 6715;
          }
          else
          {
            v69 = *shader;
            if ( v68 == 4 )
              v69 = 6717;
            *shader = v69;
          }
        }
        if ( !pModel->m_receiveShadowsFlg )
          goto LABEL_520;
        v66 = (v67 & 0x20000000) == 0;
        goto LABEL_241;
      case 51:
        v70 = MatMapID;
        *shader = 6719;
        v71 = *shader;
        if ( v70[7] > 0 )
          v71 = 6730;
        v72 = EffectFlg;
        *shader = v71;
        if ( (v72 & 0x10000) != 0 )
        {
          *shader += 2;
        }
        else if ( v14 )
        {
          *shader += 3;
        }
        else
        {
          v73 = (_DWORD)pStack + worldLights;
          if ( (_DWORD)pStack + worldLights == 2 )
          {
            *shader += 5;
          }
          else if ( v73 == 3 )
          {
            *shader += 7;
          }
          else if ( v73 == 4 )
          {
            *shader += 9;
          }
        }
        if ( !pModel->m_receiveShadowsFlg )
          goto LABEL_520;
        v66 = (v72 & 0x20000000) == 0;
        goto LABEL_241;
      case 52:
        v74 = MatMapID;
        *shader = 6741;
        if ( v74[4] <= 0 )
        {
          v75 = *shader;
          if ( v74[7] > 0 )
            v75 = 6757;
          *shader = v75;
        }
        else if ( v74[7] <= 0 )
        {
          *shader = 6749;
        }
        else
        {
          *shader = 6765;
        }
        v76 = (_DWORD)pStack + worldLights;
        if ( (_DWORD)pStack + worldLights == 2 )
        {
          *shader += 2;
        }
        else if ( v76 == 3 )
        {
          *shader += 4;
        }
        else if ( v76 == 4 )
        {
          *shader += 6;
        }
        goto LABEL_239;
      case 53:
        v62 = MatMapID;
        *shader = 6773;
        if ( v62[4] <= 0 )
        {
          v63 = 6793;
LABEL_228:
          v64 = *shader;
          if ( v62[7] > 0 )
            v64 = v63;
          *shader = v64;
        }
        else if ( v62[7] <= 0 )
        {
          *shader = 6783;
        }
        else
        {
          *shader = 6803;
        }
        break;
      case 54:
        v77 = MatMapID;
        *shader = 6813;
        if ( v77[4] <= 0 )
        {
          if ( v77[7] > 0 )
            *shader = 6815;
        }
        else if ( v77[7] <= 0 )
        {
          *shader = 6814;
        }
        else
        {
          *shader = 6816;
        }
        goto LABEL_520;
      case 55:
        v78 = MatMapID;
        *shader = 6817;
        if ( v78[4] <= 0 )
        {
          if ( v78[7] > 0 )
            *shader = 6819;
        }
        else if ( v78[7] <= 0 )
        {
          *shader = 6818;
        }
        else
        {
          *shader = 6820;
        }
        goto LABEL_520;
      case 56:
        v79 = MatMapID;
        *shader = 6821;
        if ( v79[4] > 0 )
        {
          if ( v79[7] <= 0 )
            *shader = 6822;
          else
            *shader = 6823;
        }
        goto LABEL_520;
      case 57:
        v113 = MatMapID;
        *shader = 6873;
        if ( v113[1] <= 0 )
          goto LABEL_460;
        if ( v113[4] <= 0 || v113[7] <= 0 )
        {
          if ( v113[4] <= 0 )
          {
            if ( v113[7] <= 0 )
            {
LABEL_460:
              if ( v113[4] <= 0 )
              {
                v114 = *shader;
                if ( v113[7] > 0 )
                  v114 = 6877;
                v38 = (EffectFlg & 0x80000) == 0;
                *shader = v114;
              }
              else
              {
                v38 = (EffectFlg & 0x80000) == 0;
                if ( v113[7] <= 0 )
                  *shader = 6875;
                else
                  *shader = 6879;
              }
            }
            else
            {
              v38 = (EffectFlg & 0x80000) == 0;
              *shader = 6885;
            }
          }
          else
          {
            v38 = (EffectFlg & 0x80000) == 0;
            *shader = 6883;
          }
        }
        else
        {
          v38 = (EffectFlg & 0x80000) == 0;
          *shader = 6887;
        }
        goto LABEL_89;
      default:
        *shader = 5812;
        goto LABEL_520;
    }
    if ( v14 )
    {
      *shader += 2;
    }
    else
    {
      v65 = (_DWORD)pStack + worldLights;
      if ( (_DWORD)pStack + worldLights == 2 )
      {
        *shader += 4;
      }
      else if ( v65 == 3 )
      {
        *shader += 6;
      }
      else if ( v65 == 4 )
      {
        *shader += 8;
      }
    }
LABEL_239:
    if ( pModel->m_receiveShadowsFlg )
    {
      v66 = (EffectFlg & 0x20000000) == 0;
LABEL_241:
      if ( !v66 )
        ++*shader;
    }
LABEL_520:
    v122 = *shader;
    if ( this->m_ShadowMapFlg )
      v122 = 7912;
    if ( this->m_NormalMapFlg )
      v122 = 7915;
    if ( this->m_PosMapFlg )
      v122 = 7917;
    *shader = v122;
    if ( this->m_MaskPassFlg )
      *shader = 7919;
  }
  else
  {
    switch ( m_shaderType )
    {
      case 1:
        *shader = 8;
        if ( pModel->m_bProjectionBlend && this->m_fOrthoProjRatio > 0.0 )
          *shader = 9;
        goto LABEL_1034;
      case 2:
        v214 = MatMapID;
        *shader = 10;
        v215 = v214[4];
        if ( v215 <= 0 )
          goto LABEL_993;
        if ( v214[1] <= 0 || v214[6] <= 0 || v214[7] <= 0 )
        {
          if ( v214[1] <= 0 || v214[6] <= 0 )
          {
            if ( v214[1] > 0 && v214[7] > 0 )
            {
              *shader = 1354;
              goto LABEL_1003;
            }
            if ( v214[1] > 0 )
            {
              *shader = 970;
              goto LABEL_1003;
            }
            if ( v214[7] > 0 )
            {
              *shader = 1162;
              goto LABEL_1003;
            }
LABEL_993:
            v217 = v214[1];
            if ( v217 > 0 && v214[7] > 0 )
            {
              *shader = 586;
              goto LABEL_1003;
            }
            if ( v215 > 0 )
            {
              *shader = 778;
              goto LABEL_1003;
            }
            if ( v217 > 0 )
            {
              *shader = 202;
              goto LABEL_1003;
            }
            v216 = *shader;
            if ( v214[7] > 0 )
              v216 = 394;
          }
          else
          {
            v216 = 974;
            if ( v11->m_useTransparency )
              v216 = 978;
          }
        }
        else
        {
          v216 = 1358;
          if ( v11->m_useTransparency )
            v216 = 1362;
        }
        *shader = v216;
LABEL_1003:
        if ( (m_uiModeFlg & 0x800) != 0 )
          goto LABEL_1008;
        if ( pModel->m_modelFXFlg < 0 )
          goto LABEL_1009;
        if ( (v11->m_ucEffectFlg & 0x40000) != 0 && pModel->m_rimLightStrength > 0.0 )
          *shader += 48;
LABEL_1008:
        if ( pModel->m_modelFXFlg )
LABEL_1009:
          *shader += 24;
        if ( pModel->m_bProjectionBlend && this->m_fOrthoProjRatio > 0.0 )
          *shader += 12;
        v218 = EffectFlg;
        if ( (EffectFlg & 0x80000) != 0 )
          *shader += 2;
        if ( (v218 & 0x704000) != 0 )
          ++*shader;
        if ( pModel->m_receiveShadowsFlg )
          *shader += 96;
        if ( (_DWORD)pStack + worldLights == 3 )
        {
          *shader += 1536;
        }
        else if ( (_DWORD)pStack + worldLights == 4 )
        {
          *shader += 3072;
        }
        goto LABEL_1034;
      case 3:
        v219 = (_DWORD)pStack + worldLights;
        *shader = 4618;
        if ( v219 == 3 )
        {
          *shader = 4620;
        }
        else
        {
          v220 = *shader;
          if ( v219 == 4 )
            v220 = 4622;
          *shader = v220;
        }
        if ( v11->m_useMatcap )
          ++*shader;
        if ( pModel->m_bProjectionBlend && this->m_fOrthoProjRatio > 0.0 )
          *shader += 12;
        goto LABEL_1034;
      case 4:
        v123 = MatMapID;
        *shader = 6896;
        v124 = v123[4];
        if ( v124 <= 0 || v123[7] <= 0 )
        {
          v125 = *shader;
          if ( v124 > 0 )
            v125 = 6904;
          *shader = v125;
        }
        else
        {
          *shader = 6912;
        }
        v126 = EffectFlg;
        if ( (EffectFlg & 0x80000) != 0 )
          *shader += 24;
        if ( v14 )
        {
          *shader += 2;
        }
        else if ( (_DWORD)pStack + worldLights == 2 )
        {
          *shader += 4;
        }
        else if ( (_DWORD)pStack + worldLights == 3 )
        {
          *shader += 6;
        }
        if ( pModel->m_receiveShadowsFlg && (v126 & 0x20000000) != 0 )
          ++*shader;
        if ( (v126 & 0x8000000) != 0 && this->m_LightningCol[3] != 0.0 )
          *shader += 48;
        goto LABEL_1034;
      case 5:
        v127 = MatMapID;
        *shader = 6992;
        v128 = v127[4];
        if ( v128 <= 0 || v127[7] <= 0 )
        {
          v129 = *shader;
          if ( v128 > 0 )
            v129 = 6997;
          *shader = v129;
        }
        else
        {
          *shader = 7002;
        }
        if ( (EffectFlg & 0x80000) != 0 )
          *shader += 15;
        if ( v14 )
          goto LABEL_616;
        v130 = (_DWORD)pStack + worldLights;
        goto LABEL_559;
      case 6:
        v131 = MatMapID;
        *shader = 7022;
        v132 = v131[4];
        if ( v132 <= 0 || v131[7] <= 0 )
        {
          v133 = *shader;
          if ( v132 > 0 )
            v133 = 7024;
          *shader = v133;
        }
        else
        {
          *shader = 7026;
        }
        if ( worldLights + (_DWORD)pStack == 3 )
          ++*shader;
        goto LABEL_1034;
      case 7:
        v135 = MatMapID;
        *shader = 7329;
        if ( v135[4] <= 0 )
        {
          if ( v135[7] > 0 )
            *shader = 7330;
        }
        else if ( v135[7] > 0 )
        {
          *shader = 7331;
        }
        goto LABEL_1034;
      case 8:
        v136 = MatMapID;
        *shader = 7332;
        v137 = v136[4];
        if ( v137 <= 0 )
        {
          if ( v136[7] > 0 )
          {
            *shader = 7333;
            goto LABEL_1034;
          }
        }
        else if ( v136[7] > 0 )
        {
          *shader = 7335;
          goto LABEL_1034;
        }
        if ( v137 > 0 )
          *shader = 7334;
        goto LABEL_1034;
      case 9:
        v138 = MatMapID;
        *shader = 7336;
        v139 = v138[4];
        if ( v139 <= 0 )
        {
          if ( v138[7] > 0 )
          {
            *shader = 7339;
            goto LABEL_597;
          }
        }
        else if ( v138[7] > 0 )
        {
          *shader = 7345;
          goto LABEL_597;
        }
        v140 = *shader;
        if ( v139 > 0 )
          v140 = 7342;
        *shader = v140;
LABEL_597:
        if ( v14 )
          goto LABEL_616;
        if ( worldLights + (_DWORD)pStack == 3 )
          *shader += 2;
        goto LABEL_1034;
      case 10:
        v141 = MatMapID;
        *shader = 7348;
        v142 = v141[4];
        if ( v142 <= 0 )
        {
          if ( v141[7] > 0 )
          {
            *shader = 7354;
            goto LABEL_609;
          }
        }
        else if ( v141[7] > 0 )
        {
          *shader = 7366;
          goto LABEL_609;
        }
        v143 = 7360;
        v144 = v142 <= 0;
        goto LABEL_606;
      case 11:
        v134 = MatMapID;
        *shader = 7375;
        if ( v134[4] > 0 )
        {
          if ( v134[7] <= 0 )
            *shader = 7376;
          else
            *shader = 7377;
        }
        goto LABEL_1034;
      case 12:
        v38 = (EffectFlg & 0x10000) == 0;
        *shader = 7378;
        if ( v38 )
        {
          if ( v14 )
            *shader = 7380;
        }
        else
        {
          *shader = 7379;
        }
        goto LABEL_1034;
      case 13:
        v161 = MatMapID;
        *shader = 7381;
        if ( v161[4] > 0 )
          *shader = 7382;
        goto LABEL_1034;
      case 14:
        v185 = MatMapID;
        *shader = 7372;
        if ( v185[4] > 0 )
        {
          if ( v185[7] <= 0 )
            *shader = 7373;
          else
            *shader = 7374;
        }
        goto LABEL_1034;
      case 15:
        v186 = MatMapID;
        *shader = 7383;
        if ( v186[4] <= 0 )
        {
          if ( v186[7] > 0 )
            *shader = 7384;
        }
        else if ( v186[7] > 0 )
        {
          *shader = 7385;
        }
        goto LABEL_1034;
      case 16:
        v187 = MatMapID;
        *shader = 7386;
        if ( v187[4] <= 0 || v187[7] <= 0 )
        {
          v188 = *shader;
          if ( v187[7] > 0 )
            v188 = 7388;
          v174 = (EffectFlg & 0x10000) == 0;
          *shader = v188;
        }
        else
        {
          v174 = (EffectFlg & 0x10000) == 0;
          *shader = 7390;
        }
        goto LABEL_767;
      case 17:
        v189 = MatMapID;
        *shader = 7392;
        if ( v189[4] <= 0 || v189[7] <= 0 )
        {
          v144 = v189[7] <= 0;
          v143 = 7398;
LABEL_606:
          v145 = *shader;
          if ( !v144 )
            v145 = v143;
          *shader = v145;
        }
        else
        {
          *shader = 7404;
        }
LABEL_609:
        if ( v14 )
        {
          *shader += 2;
        }
        else if ( worldLights + (_DWORD)pStack == 2 )
        {
          *shader += 4;
        }
        if ( pModel->m_receiveShadowsFlg )
        {
          v146 = (EffectFlg & 0x20000000) == 0;
LABEL_615:
          if ( !v146 )
            goto LABEL_616;
        }
        goto LABEL_1034;
      case 18:
        v190 = MatMapID;
        *shader = 7410;
        if ( v190[4] > 0 && v190[7] > 0 )
        {
          *shader = 7416;
          goto LABEL_867;
        }
        v191 = 7413;
        goto LABEL_864;
      case 19:
        v190 = MatMapID;
        *shader = 7419;
        if ( v190[4] <= 0 || v190[7] <= 0 )
        {
          v191 = 7422;
LABEL_864:
          v192 = *shader;
          if ( v190[7] > 0 )
            v192 = v191;
          *shader = v192;
        }
        else
        {
          *shader = 7425;
        }
LABEL_867:
        if ( (EffectFlg & 0x10000) != 0 )
        {
LABEL_616:
          ++*shader;
        }
        else if ( v14 )
        {
          *shader += 2;
        }
        goto LABEL_1034;
      case 20:
        v159 = MatMapID;
        *shader = 7028;
        v160 = *shader;
        if ( v159[4] > 0 )
          v160 = 7033;
        v38 = (EffectFlg & 0x10000) == 0;
        *shader = v160;
        if ( !v38 )
          goto LABEL_616;
        if ( v14 )
        {
          *shader += 2;
        }
        else if ( (_DWORD)pStack + worldLights == 2 )
        {
          *shader += 3;
        }
        else if ( (_DWORD)pStack + worldLights == 3 )
        {
          *shader += 4;
        }
        goto LABEL_1034;
      case 21:
        v38 = (EffectFlg & 0x10000) == 0;
        *shader = 7038;
        if ( v38 )
        {
          if ( v14 )
            *shader = 7040;
        }
        else
        {
          *shader = 7039;
        }
        goto LABEL_1034;
      case 22:
        v147 = MatMapID;
        *shader = 7041;
        if ( v147[4] <= 0 )
        {
          v148 = *shader;
          if ( v147[7] > 0 )
            v148 = 7085;
          *shader = v148;
        }
        else if ( v147[7] <= 0 )
        {
          *shader = 7063;
        }
        else
        {
          *shader = 7107;
        }
        v149 = EffectFlg;
        if ( (EffectFlg & 0x80000) != 0 )
          *shader += 11;
        if ( (v149 & 0x10000) != 0 )
        {
          *shader += 2;
        }
        else if ( v14 )
        {
          *shader += 3;
        }
        else
        {
          v150 = (_DWORD)pStack + worldLights;
          if ( (_DWORD)pStack + worldLights == 2 )
          {
            *shader += 5;
          }
          else if ( v150 == 3 )
          {
            *shader += 7;
          }
          else if ( v150 == 4 )
          {
            *shader += 9;
          }
        }
        if ( pModel->m_receiveShadowsFlg && (v149 & 0x20010000) == 0x20000000 )
          ++*shader;
        if ( (v149 & 0x8000000) != 0 && this->m_LightningCol[3] != 0.0 )
          *shader += 88;
        goto LABEL_1034;
      case 23:
        v151 = MatMapID;
        *shader = 7217;
        if ( v151[4] <= 0 )
        {
          v152 = *shader;
          if ( v151[7] > 0 )
            v152 = 7261;
          *shader = v152;
        }
        else if ( v151[7] <= 0 )
        {
          *shader = 7239;
        }
        else
        {
          *shader = 7283;
        }
        v153 = EffectFlg;
        if ( (EffectFlg & 0x80000) != 0 )
          *shader += 11;
        if ( (v153 & 0x10000) != 0 )
        {
          *shader += 2;
        }
        else if ( v14 )
        {
          *shader += 3;
        }
        else
        {
          v154 = (_DWORD)pStack + worldLights;
          if ( (_DWORD)pStack + worldLights == 2 )
          {
            *shader += 5;
          }
          else if ( v154 == 3 )
          {
            *shader += 7;
          }
          else if ( v154 == 4 )
          {
            *shader += 9;
          }
        }
        if ( pModel->m_receiveShadowsFlg && (v153 & 0x20010000) == 0x20000000 )
          ++*shader;
        goto LABEL_1034;
      case 24:
        v38 = (EffectFlg & 0x80000) == 0;
        *shader = 7305;
        v155 = *shader;
        if ( !v38 )
          v155 = 7307;
        *shader = v155;
        if ( v14 )
          ++*shader;
        goto LABEL_1034;
      case 25:
        v38 = (EffectFlg & 0x80000) == 0;
        *shader = 7309;
        v156 = *shader;
        if ( !v38 )
          v156 = 7311;
        *shader = v156;
        if ( v14 )
          ++*shader;
        goto LABEL_1034;
      case 26:
        v157 = MatMapID;
        *shader = 7313;
        if ( v157[4] <= 0 )
        {
          v158 = *shader;
          if ( v157[7] > 0 )
            v158 = 7321;
          *shader = v158;
        }
        else if ( v157[7] <= 0 )
        {
          *shader = 7317;
        }
        else
        {
          *shader = 7325;
        }
        if ( (EffectFlg & 0x80000) != 0 )
          *shader += 2;
        if ( v14 )
          ++*shader;
        goto LABEL_1034;
      case 27:
        v38 = (EffectFlg & 0x10000) == 0;
        *shader = 7428;
        if ( v38 )
        {
          if ( v14 )
            *shader = 7430;
        }
        else
        {
          *shader = 7429;
        }
        goto LABEL_1034;
      case 28:
        v38 = (EffectFlg & 0x10000) == 0;
        *shader = 7431;
        if ( v38 )
        {
          if ( v14 )
            *shader = 7433;
        }
        else
        {
          *shader = 7432;
        }
        goto LABEL_1034;
      case 29:
        *shader = 7434;
        goto LABEL_1034;
      case 30:
        *shader = 7435;
        goto LABEL_1034;
      case 31:
        v193 = MatMapID;
        *shader = 7436;
        if ( v193[4] <= 0 )
        {
          v194 = *shader;
          if ( v193[7] > 0 )
            v194 = 7446;
          *shader = v194;
        }
        else if ( v193[7] <= 0 )
        {
          *shader = 7441;
        }
        else
        {
          *shader = 7451;
        }
        v130 = (_DWORD)pStack + worldLights;
        if ( (_DWORD)pStack + worldLights == 1 )
        {
          ++*shader;
        }
        else
        {
LABEL_559:
          switch ( v130 )
          {
            case 2:
              *shader += 2;
              break;
            case 3:
              *shader += 3;
              break;
            case 4:
              *shader += 4;
              break;
          }
        }
        goto LABEL_1034;
      case 32:
        v195 = MatMapID;
        *shader = 7456;
        v196 = *shader;
        if ( v195[4] > 0 )
          v196 = 7464;
        v197 = EffectFlg;
        *shader = v196;
        if ( (v197 & 0x80000) != 0 )
        {
          *shader += 4;
        }
        else if ( (v197 & 0x800000) != 0 )
        {
          *shader += 16;
        }
        if ( (v197 & 0x10000) != 0 )
        {
          ++*shader;
        }
        else if ( v14 )
        {
          *shader += 2;
        }
        else if ( (_DWORD)pStack + worldLights == 2 )
        {
          *shader += 3;
        }
        if ( (v197 & 0x8000000) != 0 && this->m_LightningCol[3] != 0.0 )
          *shader += 24;
        goto LABEL_1034;
      case 33:
        v198 = MatMapID;
        *shader = 7504;
        v199 = v198[4];
        if ( v199 <= 0 || v198[7] <= 0 )
        {
          v200 = *shader;
          if ( v199 > 0 )
            v200 = 7510;
          *shader = v200;
        }
        else
        {
          *shader = 7516;
        }
        if ( (EffectFlg & 0x80000) != 0 )
          *shader += 3;
        if ( v14 )
          goto LABEL_616;
        if ( worldLights + (_DWORD)pStack == 2 )
          *shader += 2;
        goto LABEL_1034;
      case 34:
        v201 = EffectFlg;
        *shader = 7522;
        v202 = *shader;
        if ( (v201 & 0x80000) != 0 )
          v202 = 7527;
        *shader = v202;
        if ( (v201 & 0x10000) != 0 )
        {
          *shader += 2;
        }
        else if ( v14 )
        {
          *shader += 3;
        }
        if ( pModel->m_receiveShadowsFlg && (v201 & 0x20010000) == 0x20000000 )
          ++*shader;
        goto LABEL_1034;
      case 35:
        v203 = MatMapID;
        *shader = 7532;
        v204 = *shader;
        if ( v203[4] > 0 )
          v204 = 7535;
        *shader = v204;
        goto LABEL_867;
      case 36:
        v205 = MatMapID;
        *shader = 7538;
        v206 = *shader;
        if ( v205[4] > 0 )
          v206 = 7542;
        *shader = v206;
        if ( v14 )
          *shader += 2;
        if ( pModel->m_receiveShadowsFlg && (EffectFlg & 0x20010000) == 0x20000000 )
          ++*shader;
        goto LABEL_1034;
      case 37:
        v190 = MatMapID;
        *shader = 7546;
        if ( v190[4] <= 0 )
          goto LABEL_867;
        v191 = 7549;
        goto LABEL_864;
      case 38:
        v207 = MatMapID;
        *shader = 7857;
        v208 = *shader;
        if ( v207[4] > 0 )
          v208 = 7869;
        v209 = EffectFlg;
        *shader = v208;
        if ( (v209 & 0x80000) != 0 )
          *shader += 2;
        if ( v14 )
        {
          *shader += 4;
        }
        else if ( worldLights + (_DWORD)pStack == 2 )
        {
          *shader += 8;
        }
        if ( !pModel->m_receiveShadowsFlg )
          goto LABEL_1034;
        v146 = (v209 & 0x20000000) == 0;
        goto LABEL_615;
      case 42:
        v210 = EffectFlg;
        *shader = 7904;
        if ( (v210 & 0x10000) != 0 )
        {
          *shader = 7906;
        }
        else if ( v14 )
        {
          *shader = 7907;
        }
        else
        {
          v211 = *shader;
          if ( (_DWORD)pStack + worldLights == 2 )
            v211 = 7909;
          *shader = v211;
        }
        if ( pModel->m_receiveShadowsFlg && (v210 & 0x20010000) == 0x20000000 )
          ++*shader;
        goto LABEL_1034;
      case 43:
        v38 = (EffectFlg & 0x10000) == 0;
        *shader = 7881;
        if ( v38 )
        {
          if ( v14 )
          {
            *shader = 7883;
          }
          else if ( worldLights + (_DWORD)pStack == 2 )
          {
            *shader = 7884;
          }
        }
        else
        {
          *shader = 7882;
        }
        goto LABEL_1034;
      case 44:
        v38 = (EffectFlg & 0x10000) == 0;
        *shader = 7885;
        if ( v38 )
        {
          if ( v14 )
            *shader = 7887;
        }
        else
        {
          *shader = 7886;
        }
        goto LABEL_1034;
      case 45:
        v162 = MatMapID;
        *shader = 7552;
        if ( v162[4] <= 0 )
        {
          v163 = *shader;
          if ( v162[7] > 0 )
            v163 = 7584;
          *shader = v163;
        }
        else if ( v162[7] <= 0 )
        {
          *shader = 7568;
        }
        else
        {
          *shader = 7600;
        }
        v164 = EffectFlg;
        if ( (EffectFlg & 0x80000) != 0 )
          *shader += 8;
        if ( v14 )
        {
          *shader += 2;
        }
        else if ( (_DWORD)pStack + worldLights == 2 )
        {
          *shader += 4;
        }
        else if ( (_DWORD)pStack + worldLights == 3 )
        {
          *shader += 6;
        }
        if ( pModel->m_receiveShadowsFlg && (v164 & 0x20000000) != 0 )
          ++*shader;
        goto LABEL_1034;
      case 46:
        v165 = MatMapID;
        *shader = 7616;
        if ( v165[4] <= 0 )
        {
          v166 = *shader;
          if ( v165[7] > 0 )
            v166 = 7640;
          *shader = v166;
        }
        else if ( v165[7] <= 0 )
        {
          *shader = 7628;
        }
        else
        {
          *shader = 7652;
        }
        v167 = EffectFlg;
        if ( (EffectFlg & 0x80000) != 0 )
          *shader += 6;
        if ( v14 )
        {
          *shader += 2;
        }
        else if ( worldLights + (_DWORD)pStack == 2 )
        {
          *shader += 4;
        }
        if ( pModel->m_receiveShadowsFlg && (v167 & 0x20000000) != 0 )
          ++*shader;
        goto LABEL_1034;
      case 47:
        v168 = MatMapID;
        *shader = 7664;
        if ( v168[4] <= 0 )
        {
          v169 = *shader;
          if ( v168[7] > 0 )
            v169 = 7668;
          *shader = v169;
        }
        else if ( v168[7] <= 0 )
        {
          *shader = 7666;
        }
        else
        {
          *shader = 7670;
        }
        if ( (EffectFlg & 0x80000) != 0 )
          ++*shader;
        goto LABEL_1034;
      case 48:
        v170 = MatMapID;
        *shader = 7672;
        if ( v170[4] <= 0 )
        {
          v171 = 7692;
          goto LABEL_754;
        }
        if ( v170[7] <= 0 )
          *shader = 7682;
        else
          *shader = 7702;
        goto LABEL_757;
      case 49:
        v170 = MatMapID;
        *shader = 7712;
        if ( v170[4] <= 0 )
        {
          v171 = 7732;
          goto LABEL_754;
        }
        if ( v170[7] <= 0 )
          *shader = 7722;
        else
          *shader = 7742;
        goto LABEL_757;
      case 50:
        v175 = EffectFlg;
        *shader = 7752;
        if ( (v175 & 0x10000) != 0 )
        {
          *shader = 7754;
          goto LABEL_786;
        }
        if ( v14 )
        {
          *shader = 7755;
          goto LABEL_786;
        }
        v176 = (_DWORD)pStack + worldLights;
        if ( (_DWORD)pStack + worldLights == 2 )
        {
          *shader = 7757;
          goto LABEL_786;
        }
        if ( v176 == 3 )
        {
          *shader = 7759;
          goto LABEL_786;
        }
        v177 = 7761;
        goto LABEL_783;
      case 51:
        v175 = EffectFlg;
        *shader = 7763;
        if ( (v175 & 0x10000) != 0 )
        {
          *shader = 7765;
        }
        else if ( v14 )
        {
          *shader = 7766;
        }
        else
        {
          v176 = (_DWORD)pStack + worldLights;
          if ( (_DWORD)pStack + worldLights == 2 )
          {
            *shader = 7768;
          }
          else if ( v176 == 3 )
          {
            *shader = 7770;
          }
          else
          {
            v177 = 7772;
LABEL_783:
            v178 = *shader;
            if ( v176 == 4 )
              v178 = v177;
            *shader = v178;
          }
        }
LABEL_786:
        if ( pModel->m_receiveShadowsFlg )
        {
          v174 = (v175 & 0x20000000) == 0;
LABEL_767:
          if ( !v174 )
            ++*shader;
        }
LABEL_1034:
        v221 = *shader;
        if ( this->m_ShadowMapFlg )
          v221 = 7911;
        *shader = v221;
        if ( this->m_NormalMapFlg )
        {
          if ( pModel->m_bProjectionBlend && this->m_fOrthoProjRatio > 0.0 )
            *shader = 7914;
          else
            *shader = 7913;
        }
        v222 = *shader;
        if ( this->m_PosMapFlg )
          v222 = 7916;
        if ( this->m_MaskPassFlg )
          v222 = 7918;
        *shader = v222;
        if ( this->m_DepthPassFlg )
        {
          if ( pModel->m_bProjectionBlend && this->m_fOrthoProjRatio > 0.0 )
            *shader = 7921;
          else
            *shader = 7920;
        }
        break;
      case 52:
        v179 = MatMapID;
        *shader = 7774;
        if ( v179[4] <= 0 )
        {
          v180 = *shader;
          if ( v179[7] > 0 )
            v180 = 7790;
          *shader = v180;
        }
        else if ( v179[7] <= 0 )
        {
          *shader = 7782;
        }
        else
        {
          *shader = 7798;
        }
        v181 = (_DWORD)pStack + worldLights;
        if ( (_DWORD)pStack + worldLights == 2 )
        {
          *shader += 2;
        }
        else if ( v181 == 3 )
        {
          *shader += 4;
        }
        else if ( v181 == 4 )
        {
          *shader += 6;
        }
        goto LABEL_765;
      case 53:
        v170 = MatMapID;
        *shader = 7806;
        if ( v170[4] <= 0 )
        {
          v171 = 7826;
LABEL_754:
          v172 = *shader;
          if ( v170[7] > 0 )
            v172 = v171;
          *shader = v172;
        }
        else if ( v170[7] <= 0 )
        {
          *shader = 7816;
        }
        else
        {
          *shader = 7836;
        }
LABEL_757:
        if ( v14 )
        {
          *shader += 2;
        }
        else
        {
          v173 = (_DWORD)pStack + worldLights;
          if ( (_DWORD)pStack + worldLights == 2 )
          {
            *shader += 4;
          }
          else if ( v173 == 3 )
          {
            *shader += 6;
          }
          else if ( v173 == 4 )
          {
            *shader += 8;
          }
        }
LABEL_765:
        if ( !pModel->m_receiveShadowsFlg )
          goto LABEL_1034;
        v174 = (EffectFlg & 0x20000000) == 0;
        goto LABEL_767;
      case 54:
        v182 = MatMapID;
        *shader = 7846;
        if ( v182[4] <= 0 )
        {
          if ( v182[7] > 0 )
            *shader = 7848;
        }
        else if ( v182[7] <= 0 )
        {
          *shader = 7847;
        }
        else
        {
          *shader = 7849;
        }
        goto LABEL_1034;
      case 55:
        v183 = MatMapID;
        *shader = 7850;
        if ( v183[4] <= 0 )
        {
          if ( v183[7] > 0 )
            *shader = 7852;
        }
        else if ( v183[7] <= 0 )
        {
          *shader = 7851;
        }
        else
        {
          *shader = 7853;
        }
        goto LABEL_1034;
      case 56:
        v184 = MatMapID;
        *shader = 7854;
        if ( v184[4] > 0 )
        {
          if ( v184[7] <= 0 )
            *shader = 7855;
          else
            *shader = 7856;
        }
        goto LABEL_1034;
      case 57:
        v212 = MatMapID;
        *shader = 7888;
        if ( v212[1] <= 0 )
          goto LABEL_964;
        if ( v212[4] <= 0 || v212[7] <= 0 )
        {
          if ( v212[4] <= 0 )
          {
            if ( v212[7] <= 0 )
            {
LABEL_964:
              if ( v212[4] <= 0 )
              {
                v213 = *shader;
                if ( v212[7] > 0 )
                  v213 = 7892;
                v146 = (EffectFlg & 0x80000) == 0;
                *shader = v213;
              }
              else
              {
                v146 = (EffectFlg & 0x80000) == 0;
                if ( v212[7] <= 0 )
                  *shader = 7890;
                else
                  *shader = 7894;
              }
            }
            else
            {
              v146 = (EffectFlg & 0x80000) == 0;
              *shader = 7900;
            }
          }
          else
          {
            v146 = (EffectFlg & 0x80000) == 0;
            *shader = 7898;
          }
        }
        else
        {
          v146 = (EffectFlg & 0x80000) == 0;
          *shader = 7902;
        }
        goto LABEL_615;
      default:
        *shader = 0;
        goto LABEL_1034;
    }
  }
}

void __fastcall OGLRender::setInvViewTrans(OGLRender *this, OGLMatrix *matrix)
{
  if ( matrix )
  {
    this->m_InvView = *matrix;
  }
  else
  {
    *(_QWORD *)this->m_InvView.m = 1065353216i64;
    this->m_InvView.m[4] = 0.0;
    *(_QWORD *)&this->m_InvView.m[8] = 0i64;
    *(_QWORD *)&this->m_InvView.m[12] = 0i64;
    *(_QWORD *)&this->m_InvView.m[2] = 0i64;
    this->m_InvView.m[14] = 0.0;
    this->m_InvView.m[7] = 0.0;
    *(_QWORD *)&this->m_InvView.m[5] = 1065353216i64;
    *(_QWORD *)&this->m_InvView.m[10] = 1065353216i64;
    this->m_InvView.m[15] = 1.0;
  }
}

void __fastcall OGLRender::setProjection(OGLRender *this, OGLMatrix *matrix)
{
  if ( matrix )
  {
    this->m_Proj = *matrix;
  }
  else
  {
    *(_QWORD *)this->m_Proj.m = 1065353216i64;
    this->m_Proj.m[4] = 0.0;
    *(_QWORD *)&this->m_Proj.m[8] = 0i64;
    *(_QWORD *)&this->m_Proj.m[12] = 0i64;
    *(_QWORD *)&this->m_Proj.m[2] = 0i64;
    this->m_Proj.m[14] = 0.0;
    this->m_Proj.m[7] = 0.0;
    *(_QWORD *)&this->m_Proj.m[5] = 1065353216i64;
    *(_QWORD *)&this->m_Proj.m[10] = 1065353216i64;
    this->m_Proj.m[15] = 1.0;
  }
}

void __fastcall OGLRender::setViewTrans(OGLRender *this, OGLMatrix *matrix)
{
  if ( matrix )
  {
    this->m_View = *matrix;
  }
  else
  {
    *(_QWORD *)this->m_View.m = 1065353216i64;
    this->m_View.m[4] = 0.0;
    *(_QWORD *)&this->m_View.m[8] = 0i64;
    *(_QWORD *)&this->m_View.m[12] = 0i64;
    *(_QWORD *)&this->m_View.m[2] = 0i64;
    this->m_View.m[14] = 0.0;
    this->m_View.m[7] = 0.0;
    *(_QWORD *)&this->m_View.m[5] = 1065353216i64;
    *(_QWORD *)&this->m_View.m[10] = 1065353216i64;
    this->m_View.m[15] = 1.0;
  }
}

void __fastcall OGLRender::setupShaderVariables(
        OGLRender *this,
        OGLMatrix *modelViewProj,
        OGLMatrix *modelViewOrthoProj,
        OGLMatrix *prevModelViewProj,
        OGLModel *pModel,
        OGLFigure *pFigure,
        OGLShader *pShader,
        OGLModelStackData *pStack,
        int EffectFlg,
        int iChangeFlg)
{
  __m128 *v11; // r13
  OGLMatrix *v12; // rbx
  OGLFigure *m_pFigure; // rax
  OGLMaterial *v14; // r14
  OGLMaterialLight *p_m_MaterialLight; // r12
  __m128 v16; // xmm2
  __m128 v17; // xmm3
  __m128 v18; // xmm4
  __m128 v19; // xmm5
  __m128 v20; // xmm6
  __m128 v21; // xmm7
  __m128 v22; // xmm8
  __m128 v23; // xmm9
  __m128 v24; // xmm10
  __m128 v25; // xmm11
  __m128 v26; // xmm12
  __m128 v27; // xmm13
  int *m_piGLUniform; // rax
  int v29; // ecx
  unsigned __int8 v30; // r8
  unsigned __int8 v31; // r8
  float z; // eax
  __m128 v33; // xmm3
  __m128 v34; // xmm7
  int *v35; // rax
  __m128 v36; // xmm4
  __m128 v37; // xmm5
  int v38; // ecx
  __m128 v39; // xmm7
  __m128 v40; // xmm4
  __m128 v41; // xmm5
  int v42; // ecx
  __m128 v43; // xmm2
  KOFShaderManager *v44; // rbx
  __m128 v45; // xmm3
  __m128 v46; // xmm4
  __m128 v47; // xmm5
  int v48; // edx
  __int64 v49; // rax
  __int64 v50; // r9
  AgSingleton<KOFShaderManager>_vtbl *v51; // rax
  __int128 v52; // xmm10
  float m_zOffset; // xmm0_4
  __int128 v54; // xmm11
  float *v55; // rax
  bool v56; // zf
  __int128 v57; // xmm12
  __int128 v58; // xmm13
  KOFShaderManager *v59; // rcx
  int m_bProjectionBlend; // er10
  int v61; // edx
  _DWORD *v62; // rax
  float m_fOrthoProjRatio; // xmm0_4
  int v64; // edx
  float *v65; // rax
  float m_projNormalAngLightOffset; // xmm8_4
  float v67; // xmm9_4
  float v68; // xmm0_4
  float m_projNormalAngRimLightOffset; // xmm6_4
  float v70; // xmm6_4
  int v71; // er8
  _OWORD *v72; // rcx
  int v73; // er13
  __int64 m_currentProgramSlot; // rdx
  __int64 m_linkID; // rax
  _OWORD *v76; // rax
  OGLLightManager *m_pLightManager; // r8
  int v78; // eax
  int v79; // er9
  int m_lightCount; // er13
  unsigned __int8 m_ShadowMapFlg; // cl
  int m_shadowTextureId; // er11
  float *v83; // rcx
  int i; // edx
  float *p_m_BodySelfShadowColIntensity; // rax
  __int128 v86; // xmm1
  __int128 v87; // xmm0
  __int128 v88; // xmm1
  OGLLightNode *m_pLightNodeList; // rax
  __int64 v90; // rax
  __int128 v91; // xmm1
  __int128 v92; // xmm0
  __int128 v93; // xmm1
  int v94; // edx
  OGLLightNode *v95; // r8
  OGLLightNode *v96; // rax
  __int64 v97; // rcx
  unsigned __int8 m_bOn; // cl
  int v99; // eax
  int v100; // er13
  __int64 v101; // rdx
  __int64 v102; // rax
  __int128 v103; // xmm1
  int v104; // edx
  _OWORD *v105; // rax
  __int128 v106; // xmm0
  __int128 v107; // xmm1
  __int64 v108; // rdx
  __int64 v109; // rax
  __int128 v110; // xmm1
  int v111; // edx
  _OWORD *v112; // rax
  __int128 v113; // xmm0
  __int128 v114; // xmm1
  __int128 v115; // xmm0
  __int128 v116; // xmm1
  __int128 v117; // xmm0
  __int128 v118; // xmm1
  float m_multiUVLerpBlend; // xmm0_4
  int v120; // edx
  float *v121; // rax
  float v122; // xmm1_4
  int v123; // edx
  _QWORD *v124; // rax
  __int128 v125; // xmm0
  int *v126; // rax
  __int64 v127; // r8
  _OWORD *v128; // rcx
  int v129; // er8
  _OWORD *v130; // rcx
  int v131; // er8
  __int64 v132; // rdx
  _OWORD *v133; // rcx
  int v134; // er8
  _OWORD *v135; // rcx
  int *v136; // rax
  float m_fDownStrength; // xmm1_4
  __int64 v138; // r8
  float m_fUpStrength; // xmm0_4
  __int64 v140; // rdx
  float v141; // xmm1_4
  _OWORD *v142; // rcx
  int v143; // er8
  __int64 v144; // rdx
  _OWORD *v145; // rcx
  int v146; // er8
  _OWORD *v147; // rcx
  int v148; // er8
  __int64 v149; // rdx
  _OWORD *v150; // rcx
  int v151; // er8
  _OWORD *v152; // rcx
  int *v153; // rax
  __int64 v154; // rdx
  _QWORD *v155; // rax
  int v156; // er8
  __int64 v157; // rdx
  _OWORD *v158; // rcx
  int v159; // er8
  __int64 v160; // rdx
  _OWORD *v161; // rcx
  int *v162; // rax
  float m_fShaderExtraHeightSetting; // xmm1_4
  __int64 v164; // rdx
  __int64 v165; // r8
  _QWORD *v166; // rax
  unsigned int v167; // xmm0_4
  int v168; // edx
  __int64 v169; // r8
  unsigned int v170; // xmm1_4
  _QWORD *v171; // rax
  int BriSatConOn; // er10
  float v173; // eax
  float Contrast; // xmm1_4
  int FilterOn; // edx
  int PSLevelsOn; // er11
  float Brightness; // xmm2_4
  float PSLevelsInWhite; // xmm1_4
  float v179; // xmm2_4
  __int64 v180; // rcx
  float PSLevelsInGamma; // xmm3_4
  __int64 v182; // r9
  float PSLevelsOutBlack; // xmm0_4
  float v184; // xmm2_4
  float PSLevelsOutWhite; // xmm1_4
  float GradientOverlayOpacity; // xmm0_4
  const _SHADER_INFO *m_uniformAttrib; // rax
  __int64 index; // r8
  __int64 v189; // rax
  float v190; // xmm1_4
  void **v191; // rcx
  __m128i v192; // xmm6
  _DWORD *v193; // rax
  __m128i v194; // xmm7
  int v195; // edx
  int *v196; // rax
  int v197; // edx
  _DWORD *v198; // rax
  int v199; // edx
  float *v200; // rax
  int v201; // er9
  int v202; // ecx
  _DWORD *v203; // r8
  int v204; // edx
  float *v205; // rax
  int v206; // edx
  _QWORD *v207; // rax
  int v208; // edx
  _QWORD *v209; // rax
  int v210; // er8
  _OWORD *v211; // rcx
  int v212; // er8
  __m128i *v213; // rcx
  int v214; // er8
  __m128i *v215; // rcx
  int v216; // edx
  float *v217; // rax
  char *v218; // rax
  int v219; // er8
  __int64 v220; // rax
  float m_SkinSelfShadowMaxStrength; // xmm1_4
  __int64 v222; // rcx
  int v223; // er8
  __int64 v224; // rdx
  _OWORD *v225; // rcx
  float m_SkinSelfShadowVisibility; // xmm0_4
  int v227; // edx
  float *v228; // rax
  float m_SkinSelfShadowHardEdge; // xmm0_4
  int v230; // edx
  float *v231; // rax
  float v232; // xmm0_4
  float v233; // xmm1_4
  int *v234; // rax
  __int64 v235; // rdx
  _QWORD *v236; // rax
  float m_BodySelfShadowMaxStrength; // xmm1_4
  __int64 v238; // rcx
  int v239; // er8
  __int64 v240; // rdx
  _OWORD *v241; // rcx
  float m_BodySelfShadowVisibility; // xmm0_4
  int v243; // edx
  float *v244; // rax
  float m_BodySelfShadowHardEdge; // xmm0_4
  int v246; // edx
  float *v247; // rax
  int *v248; // rax
  float m_GroundShadowMaxStrength; // xmm1_4
  __int64 v250; // r8
  __int64 v251; // rdx
  _OWORD *v252; // rcx
  int v253; // er8
  __int64 v254; // rdx
  _OWORD *v255; // rcx
  int *v256; // rax
  __int64 v257; // rdx
  _QWORD *v258; // rax
  float m_GroundShadowVisibility; // xmm0_4
  float *v260; // rax
  float m_opacity; // xmm0_4
  int v262; // edx
  float *v263; // rax
  char *v264; // rax
  KOFShaderManager *v265; // rbx
  int v266; // edx
  __int64 v267; // rax
  float m_shaderEyeDiffuseEmiStrength; // xmm0_4
  float *v269; // rax
  float *v270; // rax
  float m_shaderLightDiffuseEmiStrength; // xmm0_4
  int v272; // edx
  float *v273; // rax
  int v274; // edx
  _DWORD *v275; // rax
  int v276; // er8
  _DWORD *v277; // rcx
  int v278; // edx
  float m_Width; // xmm2_4
  int v280; // er9
  float m_Height; // xmm1_4
  float *v282; // rax
  int *v283; // rax
  float v284; // xmm1_4
  __int64 v285; // r8
  float v286; // xmm0_4
  __int64 v287; // rdx
  float m_fDiffuseFactor; // xmm1_4
  _OWORD *v289; // rcx
  unsigned int m_UseDiffuseColour2; // eax
  float v291; // xmm0_4
  __m128i v292; // xmm1
  int *v293; // rax
  __int64 v294; // r8
  __int64 v295; // rdx
  _OWORD *v296; // rcx
  int *v297; // rax
  float v298; // xmm1_4
  __int64 v299; // r8
  float v300; // xmm0_4
  __int64 v301; // rdx
  float m_fSpecularFactor; // xmm1_4
  _OWORD *v303; // rcx
  float v304; // xmm1_4
  float v305; // xmm0_4
  int *v306; // rax
  float m_ReflectionIntensity; // xmm0_4
  __int64 v308; // r8
  __int64 v309; // rdx
  _OWORD *v310; // rcx
  float m_ReflectionMultiplier; // xmm0_4
  int v312; // edx
  float *v313; // rax
  float m_Pinching; // xmm0_4
  int v315; // edx
  float *v316; // rax
  int *v317; // rax
  float v318; // xmm1_4
  __int64 v319; // r8
  float v320; // xmm0_4
  __int64 v321; // rdx
  float m_fEmissionFactor; // xmm1_4
  _OWORD *v323; // rcx
  int v324; // er8
  _DWORD *v325; // rcx
  int v326; // er8
  __int64 v327; // rdx
  _OWORD *v328; // rcx
  int v329; // er8
  __int64 v330; // rdx
  _OWORD *v331; // rcx
  int *v332; // rax
  float v333; // xmm1_4
  __int64 v334; // r8
  float v335; // xmm0_4
  __int64 v336; // rdx
  _OWORD *v337; // rcx
  float m_SpecularMultiplier; // xmm0_4
  int v339; // edx
  float *v340; // rax
  float m_SpecularPower; // xmm0_4
  float m_fShininess; // xmm1_4
  int v343; // edx
  float *v344; // rax
  float *v345; // rax
  float m_NormalHeight; // xmm0_4
  int v347; // edx
  float *v348; // rax
  unsigned int v349; // eax
  int *v350; // rax
  float m_rimLightMax; // xmm1_4
  int v352; // ecx
  int *v353; // rax
  float v354; // xmm2_4
  float v355; // xmm0_4
  float m_rimLightStrength; // xmm1_4
  int v357; // ecx
  int v358; // eax
  int v359; // er10
  int v360; // edx
  __int64 v361; // r8
  __int64 v362; // r9
  void **v363; // rcx
  float m_secondsElapsedApparent; // xmm0_4
  int v365; // edx
  float *v366; // rax
  int v367; // edx
  __int64 v368; // r8
  __int64 v369; // r9
  void **v370; // rcx
  int v371; // edx
  __int64 v372; // r8
  __int64 v373; // r9
  void **v374; // rcx
  int v375; // edx
  _QWORD *v376; // r9
  int m_fillColourType; // er11
  int v378; // edx
  int *v379; // rax
  int v380; // er11
  int v381; // edx
  int *v382; // rax
  int v383; // er11
  _OWORD *v384; // r9
  int v385; // er12
  int m_modelFXFlg; // eax
  float y; // xmm1_4
  float v388; // xmm0_4
  int v389; // ecx
  int v390; // eax
  float v391; // xmm1_4
  float v392; // xmm0_4
  unsigned int m_ucEffectFlg; // edx
  int v394; // ecx
  float m_emissiveMultiplier; // xmm1_4
  int *v396; // rax
  int v397; // er10
  __int64 v398; // rdx
  _QWORD *v399; // r9
  float m_textureAddPercentage; // xmm0_4
  int v401; // edx
  float *v402; // rax
  int *v403; // rax
  float v404; // xmm1_4
  __int64 v405; // r11
  float v406; // xmm0_4
  __int64 v407; // rdx
  float m_vertexColMult; // xmm1_4
  _OWORD *v409; // r9
  int *v410; // rax
  float v411; // xmm1_4
  __int64 v412; // r11
  float v413; // xmm0_4
  __int64 v414; // rdx
  _OWORD *v415; // r9
  float m_causticLerp; // xmm0_4
  int v417; // edx
  float *v418; // rax
  int shadLightType; // er11
  int v420; // edx
  int *v421; // rax
  float shadLightRadius; // xmm0_4
  int v423; // edx
  float *v424; // rax
  int v425; // er11
  __int64 v426; // rdx
  _OWORD *v427; // r9
  int v428; // eax
  int v429; // ecx
  int v430; // er8
  int *v431; // rdx
  float m_matcapVal; // xmm0_4
  float *v433; // rdx
  float m_ambientLightMultiplier; // xmm0_4
  float *v435; // rdx
  float m_matOpacity; // xmm0_4
  __int64 v437; // r10
  float *v438; // rax
  float v439[2]; // [rsp+28h] [rbp-E0h] BYREF
  void **location; // [rsp+30h] [rbp-D8h]
  __m128i location_8; // [rsp+38h] [rbp-D0h]
  Framework::GLManager *v442; // [rsp+48h] [rbp-C0h]
  __int128 v443; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v444; // [rsp+68h] [rbp-A0h]
  __int128 v445; // [rsp+78h] [rbp-90h]
  __int128 v446; // [rsp+88h] [rbp-80h]
  float value[4]; // [rsp+98h] [rbp-70h] BYREF
  __int128 v448; // [rsp+A8h] [rbp-60h]
  __int128 v449; // [rsp+B8h] [rbp-50h]
  __int128 v450; // [rsp+C8h] [rbp-40h]
  float v451[4]; // [rsp+D8h] [rbp-30h] BYREF
  __int128 v452; // [rsp+E8h] [rbp-20h]
  __int128 v453; // [rsp+F8h] [rbp-10h]
  __int128 v454; // [rsp+108h] [rbp+0h]
  float v[4]; // [rsp+118h] [rbp+10h] BYREF
  float Buf2[4]; // [rsp+128h] [rbp+20h] BYREF
  __int128 v457; // [rsp+138h] [rbp+30h]
  __int128 v458; // [rsp+148h] [rbp+40h]
  __int128 v459; // [rsp+158h] [rbp+50h]
  __int128 v460; // [rsp+168h] [rbp+60h]
  __int128 v461; // [rsp+178h] [rbp+70h]
  __int128 v462; // [rsp+188h] [rbp+80h]
  __int128 v463; // [rsp+198h] [rbp+90h]

  v11 = (__m128 *)modelViewOrthoProj;
  v12 = modelViewProj;
  m_pFigure = pModel->m_pFigure;
  v442 = Framework::GLManager::glm;
  LODWORD(modelViewOrthoProj) = m_pFigure->m_usVertexCoordCount;
  Framework::GLManager::glm->m_vertexInfoCount = (int)modelViewOrthoProj;
  if ( (iChangeFlg & 7) == 7 )
    goto LABEL_289;
  v14 = &pModel->m_pMaterial[pStack->MatNo];
  p_m_MaterialLight = &v14->m_MaterialLight;
  if ( !v14->m_bUseLightMaterial )
    p_m_MaterialLight = &this->m_MaterialLight;
  if ( (iChangeFlg & 1) == 0 )
  {
    v16 = *(__m128 *)this->m_View.m;
    v17 = *(__m128 *)&this->m_View.m[4];
    v18 = *(__m128 *)&this->m_View.m[8];
    v19 = *(__m128 *)&this->m_View.m[12];
    v20 = *(__m128 *)modelViewProj->m;
    v21 = *(__m128 *)&modelViewProj->m[4];
    v22 = *(__m128 *)&modelViewProj->m[8];
    v23 = *(__m128 *)&modelViewProj->m[12];
    v24 = *v11;
    v25 = v11[1];
    v26 = v11[2];
    v27 = v11[3];
    LODWORD(v444) = _mm_shuffle_ps(v16, v16, 85).m128_u32[0];
    LODWORD(v445) = _mm_shuffle_ps(v16, v16, 170).m128_u32[0];
    DWORD1(v444) = _mm_shuffle_ps(v17, v17, 85).m128_u32[0];
    DWORD1(v445) = _mm_shuffle_ps(v17, v17, 170).m128_u32[0];
    DWORD2(v444) = _mm_shuffle_ps(v18, v18, 85).m128_u32[0];
    DWORD2(v445) = _mm_shuffle_ps(v18, v18, 170).m128_u32[0];
    HIDWORD(v444) = _mm_shuffle_ps(v19, v19, 85).m128_u32[0];
    HIDWORD(v445) = _mm_shuffle_ps(v19, v19, 170).m128_u32[0];
    v448 = v444;
    *(_QWORD *)&v443 = __PAIR64__(v17.m128_u32[0], v16.m128_u32[0]);
    *((_QWORD *)&v443 + 1) = __PAIR64__(v19.m128_u32[0], v18.m128_u32[0]);
    *(_OWORD *)value = v443;
    v449 = v445;
    LODWORD(v444) = _mm_shuffle_ps(v20, v20, 85).m128_u32[0];
    DWORD1(v444) = _mm_shuffle_ps(v21, v21, 85).m128_u32[0];
    LODWORD(v446) = _mm_shuffle_ps(v16, v16, 255).m128_u32[0];
    DWORD1(v446) = _mm_shuffle_ps(v17, v17, 255).m128_u32[0];
    DWORD2(v446) = _mm_shuffle_ps(v18, v18, 255).m128_u32[0];
    HIDWORD(v446) = _mm_shuffle_ps(v19, v19, 255).m128_u32[0];
    v450 = v446;
    LODWORD(v445) = _mm_shuffle_ps(v20, v20, 170).m128_u32[0];
    DWORD1(v445) = _mm_shuffle_ps(v21, v21, 170).m128_u32[0];
    *(_QWORD *)&v443 = __PAIR64__(v21.m128_u32[0], v20.m128_u32[0]);
    DWORD2(v444) = _mm_shuffle_ps(v22, v22, 85).m128_u32[0];
    DWORD2(v445) = _mm_shuffle_ps(v22, v22, 170).m128_u32[0];
    LODWORD(v446) = _mm_shuffle_ps(v20, v20, 255).m128_u32[0];
    DWORD1(v446) = _mm_shuffle_ps(v21, v21, 255).m128_u32[0];
    *((_QWORD *)&v443 + 1) = __PAIR64__(v23.m128_u32[0], v22.m128_u32[0]);
    m_piGLUniform = pShader->m_piGLUniform;
    HIDWORD(v444) = _mm_shuffle_ps(v23, v23, 85).m128_u32[0];
    v29 = *m_piGLUniform;
    HIDWORD(v445) = _mm_shuffle_ps(v23, v23, 170).m128_u32[0];
    *(_OWORD *)v451 = v443;
    v452 = v444;
    v453 = v445;
    LODWORD(v444) = _mm_shuffle_ps(v24, v24, 85).m128_u32[0];
    DWORD1(v444) = _mm_shuffle_ps(v25, v25, 85).m128_u32[0];
    DWORD2(v444) = _mm_shuffle_ps(v26, v26, 85).m128_u32[0];
    HIDWORD(v444) = _mm_shuffle_ps(v27, v27, 85).m128_u32[0];
    *(_QWORD *)&v443 = __PAIR64__(v25.m128_u32[0], v24.m128_u32[0]);
    *((_QWORD *)&v443 + 1) = __PAIR64__(v27.m128_u32[0], v26.m128_u32[0]);
    *(_OWORD *)Buf2 = v443;
    DWORD2(v446) = _mm_shuffle_ps(v22, v22, 255).m128_u32[0];
    HIDWORD(v446) = _mm_shuffle_ps(v23, v23, 255).m128_u32[0];
    v454 = v446;
    LODWORD(v445) = _mm_shuffle_ps(v24, v24, 170).m128_u32[0];
    DWORD1(v445) = _mm_shuffle_ps(v25, v25, 170).m128_u32[0];
    DWORD2(v445) = _mm_shuffle_ps(v26, v26, 170).m128_u32[0];
    HIDWORD(v445) = _mm_shuffle_ps(v27, v27, 170).m128_u32[0];
    v457 = v444;
    LODWORD(v446) = _mm_shuffle_ps(v24, v24, 255).m128_u32[0];
    DWORD1(v446) = _mm_shuffle_ps(v25, v25, 255).m128_u32[0];
    DWORD2(v446) = _mm_shuffle_ps(v26, v26, 255).m128_u32[0];
    HIDWORD(v446) = _mm_shuffle_ps(v27, v27, 255).m128_u32[0];
    v458 = v445;
    v459 = v446;
    glUniformMatrix4fvAG(v29, 1, (unsigned __int8)modelViewOrthoProj, value);
    glUniformMatrix4fvAG(pShader->m_piGLUniform[1], 1, v30, v451);
    glUniformMatrix4fvAG(pShader->m_piGLUniform[2], 1, v31, Buf2);
    z = pModel->m_vPosition.z;
    location_8.m128i_i64[0] = *(_QWORD *)&pModel->m_vPosition.x;
    v33 = *(__m128 *)v12->m;
    *(float *)&location_8.m128i_i32[2] = z;
    v34 = *(__m128 *)&v12->m[4];
    v35 = pShader->m_piGLUniform;
    v36 = *(__m128 *)&v12->m[8];
    v[3] = 1.0;
    v37 = *(__m128 *)&v12->m[12];
    v38 = v35[3];
    v[1] = (float)((float)((float)(_mm_shuffle_ps(v34, v34, 85).m128_f32[0] * *(float *)&location_8.m128i_i32[1])
                         + (float)(_mm_shuffle_ps(v33, v33, 85).m128_f32[0] * *(float *)location_8.m128i_i32))
                 + (float)(_mm_shuffle_ps(v36, v36, 85).m128_f32[0] * *(float *)&location_8.m128i_i32[2]))
         + _mm_shuffle_ps(v37, v37, 85).m128_f32[0];
    v[2] = (float)((float)((float)(_mm_shuffle_ps(v34, v34, 170).m128_f32[0] * *(float *)&location_8.m128i_i32[1])
                         + (float)(_mm_shuffle_ps(v33, v33, 170).m128_f32[0] * *(float *)location_8.m128i_i32))
                 + (float)(_mm_shuffle_ps(v36, v36, 170).m128_f32[0] * *(float *)&location_8.m128i_i32[2]))
         + _mm_shuffle_ps(v37, v37, 170).m128_f32[0];
    v[0] = (float)((float)((float)(v34.m128_f32[0] * *(float *)&location_8.m128i_i32[1])
                         + (float)(v33.m128_f32[0] * *(float *)location_8.m128i_i32))
                 + (float)(v36.m128_f32[0] * *(float *)&location_8.m128i_i32[2]))
         + v37.m128_f32[0];
    glUniform4fvAG(v38, 1, v);
    v39 = v11[1];
    v40 = v11[2];
    v41 = v11[3];
    v33.m128_f32[0] = COERCE_FLOAT(*v11) * *(float *)location_8.m128i_i32;
    v42 = pShader->m_piGLUniform[4];
    v16.m128_f32[0] = (float)((float)((float)(_mm_shuffle_ps(v39, v39, 170).m128_f32[0]
                                            * *(float *)&location_8.m128i_i32[1])
                                    + (float)(_mm_shuffle_ps(*v11, *v11, 170).m128_f32[0]
                                            * *(float *)location_8.m128i_i32))
                            + (float)(_mm_shuffle_ps(v40, v40, 170).m128_f32[0] * *(float *)&location_8.m128i_i32[2]))
                    + _mm_shuffle_ps(v41, v41, 170).m128_f32[0];
    v[1] = (float)((float)((float)(_mm_shuffle_ps(v39, v39, 85).m128_f32[0] * *(float *)&location_8.m128i_i32[1])
                         + (float)(_mm_shuffle_ps(*v11, *v11, 85).m128_f32[0] * *(float *)location_8.m128i_i32))
                 + (float)(_mm_shuffle_ps(v40, v40, 85).m128_f32[0] * *(float *)&location_8.m128i_i32[2]))
         + _mm_shuffle_ps(v41, v41, 85).m128_f32[0];
    v[2] = v16.m128_f32[0];
    v[0] = (float)((float)((float)(v39.m128_f32[0] * *(float *)&location_8.m128i_i32[1]) + v33.m128_f32[0])
                 + (float)(v40.m128_f32[0] * *(float *)&location_8.m128i_i32[2]))
         + v41.m128_f32[0];
    glUniform4fvAG(v42, 1, v);
  }
  v43 = *(__m128 *)this->m_InvView.m;
  v44 = (KOFShaderManager *)AgSingleton<KOFShaderManager>::ms_instance;
  v45 = *(__m128 *)&this->m_InvView.m[4];
  v46 = *(__m128 *)&this->m_InvView.m[8];
  v47 = *(__m128 *)&this->m_InvView.m[12];
  v48 = pShader->m_piGLUniform[7];
  v49 = SLODWORD(AgSingleton<KOFShaderManager>::ms_instance[360450].__vftable);
  LODWORD(v444) = _mm_shuffle_ps(v43, v43, 85).m128_u32[0];
  LODWORD(v445) = _mm_shuffle_ps(v43, v43, 170).m128_u32[0];
  DWORD1(v444) = _mm_shuffle_ps(v45, v45, 85).m128_u32[0];
  DWORD1(v445) = _mm_shuffle_ps(v45, v45, 170).m128_u32[0];
  v50 = 11 * v49;
  DWORD2(v444) = _mm_shuffle_ps(v46, v46, 85).m128_u32[0];
  DWORD2(v445) = _mm_shuffle_ps(v46, v46, 170).m128_u32[0];
  *(_QWORD *)&v443 = __PAIR64__(v45.m128_u32[0], v43.m128_u32[0]);
  *((_QWORD *)&v443 + 1) = __PAIR64__(v47.m128_u32[0], v46.m128_u32[0]);
  v51 = AgSingleton<KOFShaderManager>::ms_instance[11 * v49 + 11].__vftable;
  v52 = v443;
  HIDWORD(v444) = _mm_shuffle_ps(v47, v47, 85).m128_u32[0];
  m_zOffset = pModel->m_zOffset;
  v54 = v444;
  v55 = (float *)*((_QWORD *)&AgSingleton<KOFShaderManager>::ms_instance[SHIDWORD(AgSingleton<KOFShaderManager>::ms_instance[v50 + 5].__vftable)
                                                                       + 494188].~AgSingleton<KOFShaderManager>
                 + *((int *)&v51->~AgSingleton<KOFShaderManager> + 4 * v48));
  LODWORD(v446) = _mm_shuffle_ps(v43, v43, 255).m128_u32[0];
  DWORD1(v446) = _mm_shuffle_ps(v45, v45, 255).m128_u32[0];
  DWORD2(v446) = _mm_shuffle_ps(v46, v46, 255).m128_u32[0];
  v56 = m_zOffset == *v55;
  HIDWORD(v445) = _mm_shuffle_ps(v47, v47, 170).m128_u32[0];
  v57 = v445;
  HIDWORD(v446) = _mm_shuffle_ps(v47, v47, 255).m128_u32[0];
  v58 = v446;
  *(_OWORD *)Buf2 = v443;
  v457 = v444;
  v458 = v445;
  v459 = v446;
  if ( !v56 )
  {
    v59 = (KOFShaderManager *)AgSingleton<KOFShaderManager>::ms_instance;
    *v55 = m_zOffset;
    KOFShaderManager::setUniformWriteMask(v59, v48);
  }
  m_bProjectionBlend = pModel->m_bProjectionBlend;
  v61 = pShader->m_piGLUniform[66];
  v62 = v44->m_shaderUniformPtr[v44->m_program[v44->m_currentProgramSlot].m_linkID][v44->m_program[v44->m_currentProgramSlot].m_uniformAttrib[v61].index];
  if ( m_bProjectionBlend != *v62 )
  {
    *v62 = m_bProjectionBlend;
    KOFShaderManager::setUniformWriteMask(v44, v61);
  }
  m_fOrthoProjRatio = this->m_fOrthoProjRatio;
  v64 = pShader->m_piGLUniform[6];
  v65 = (float *)v44->m_shaderUniformPtr[v44->m_program[v44->m_currentProgramSlot].m_linkID][v44->m_program[v44->m_currentProgramSlot].m_uniformAttrib[v64].index];
  if ( m_fOrthoProjRatio != *v65 )
  {
    *v65 = m_fOrthoProjRatio;
    KOFShaderManager::setUniformWriteMask(v44, v64);
  }
  m_projNormalAngLightOffset = pModel->m_projNormalAngLightOffset;
  v67 = this->m_fOrthoProjRatio;
  cosf(m_projNormalAngLightOffset * v67);
  v[0] = m_projNormalAngLightOffset * v67;
  v68 = sinf(m_projNormalAngLightOffset * v67);
  v[2] = m_projNormalAngLightOffset * v67;
  m_projNormalAngRimLightOffset = pModel->m_projNormalAngRimLightOffset;
  v[1] = v68;
  v[3] = v68;
  if ( m_projNormalAngRimLightOffset != m_projNormalAngLightOffset )
  {
    v70 = m_projNormalAngRimLightOffset * v67;
    v[2] = cosf(v70);
    v[3] = sinf(v70);
  }
  v71 = pShader->m_piGLUniform[9];
  v72 = v44->m_shaderUniformPtr[v44->m_program[v44->m_currentProgramSlot].m_linkID][v44->m_program[v44->m_currentProgramSlot].m_uniformAttrib[v71].index];
  if ( *v72 != *(_OWORD *)v )
  {
    *v72 = *(_OWORD *)v;
    KOFShaderManager::setUniformWriteMask(v44, v71);
  }
  v73 = pShader->m_piGLUniform[22];
  m_currentProgramSlot = v44->m_currentProgramSlot;
  m_linkID = v44->m_program[m_currentProgramSlot].m_linkID;
  *(_QWORD *)v439 = v44->m_program[m_currentProgramSlot].m_uniformAttrib[v73].index;
  location = v44->m_shaderUniformPtr[m_linkID];
  if ( memcmp(location[*(_QWORD *)v439], Buf2, 0x40ui64) )
  {
    v76 = location[*(_QWORD *)v439];
    *v76 = v52;
    v76[1] = v54;
    v76[2] = v57;
    v76[3] = v58;
    KOFShaderManager::setUniformWriteMask(v44, v73);
  }
  m_pLightManager = v14->m_pLightManager;
  v78 = 0;
  v79 = 0;
  m_lightCount = m_pLightManager->m_lightCount;
  LODWORD(location) = 0;
  if ( !this->m_DepthPassFlg )
  {
    m_ShadowMapFlg = this->m_ShadowMapFlg;
    if ( !m_ShadowMapFlg )
    {
      m_shadowTextureId = pModel->m_shadowTextureId;
      v83 = Buf2;
      for ( i = 0; i < 2; ++i )
      {
        if ( m_shadowTextureId == 1 )
          p_m_BodySelfShadowColIntensity = &this->m_WorldLightManager.m_BodySelfShadowColIntensity;
        else
          p_m_BodySelfShadowColIntensity = (float *)(&this->m_WorldLightManager.m_lightCount + 16 * (__int64)i);
        v86 = *(_OWORD *)(p_m_BodySelfShadowColIntensity + 150);
        *(_OWORD *)v83 = *(_OWORD *)(p_m_BodySelfShadowColIntensity + 146);
        v87 = *(_OWORD *)(p_m_BodySelfShadowColIntensity + 154);
        *((_OWORD *)v83 + 1) = v86;
        v88 = *(_OWORD *)(p_m_BodySelfShadowColIntensity + 158);
        *((_OWORD *)v83 + 2) = v87;
        *((_OWORD *)v83 + 3) = v88;
        if ( m_shadowTextureId != 2 )
          break;
        v83 += 16;
      }
      m_ShadowMapFlg = this->m_ShadowMapFlg;
      v78 = 0;
      m_pLightManager = v14->m_pLightManager;
    }
    if ( this->m_WorldLightManager.m_lightCount )
    {
      m_pLightNodeList = this->m_WorldLightManager.m_pLightNodeList;
      if ( m_pLightNodeList && m_pLightNodeList->m_light.m_bOn )
      {
        if ( m_ShadowMapFlg )
        {
          v90 = 114i64;
          if ( pModel->m_shadowTextureId == 1 )
            v90 = 130i64;
          v91 = *(_OWORD *)&this->m_WorldLightManager.m_RimColour[v90 + 1];
          v443 = *(_OWORD *)((char *)&this->m_WorldLightManager.m_lightCount + v90 * 4);
          v92 = *(_OWORD *)((char *)&this->m_WorldLightManager.m_RimMultiplier + v90 * 4);
          v444 = v91;
          v93 = *(_OWORD *)&this->m_WorldLightManager.m_GroundShadowColour[v90 + 3];
          v445 = v92;
          v446 = v93;
        }
        v78 = 1;
        LODWORD(location) = 1;
      }
      else
      {
        v78 = 0;
      }
    }
    v94 = 0;
    if ( m_lightCount > 0 )
    {
      v95 = m_pLightManager->m_pLightNodeList;
      do
      {
        if ( !v95 )
          goto LABEL_44;
        v96 = v95;
        if ( v94 > 0 )
        {
          v97 = (unsigned int)v94;
          do
          {
            v96 = v96->next;
            --v97;
          }
          while ( v97 );
        }
        if ( v96 )
          m_bOn = v96->m_light.m_bOn;
        else
LABEL_44:
          m_bOn = 0;
        ++v94;
        v99 = v79 + 1;
        if ( !m_bOn )
          v99 = v79;
        v79 = v99;
      }
      while ( v94 < m_lightCount );
      v78 = (int)location;
    }
  }
  v100 = v78 + v79;
  if ( v78 + v79 > 4 )
    v100 = 4;
  v101 = v44->m_currentProgramSlot;
  LODWORD(location) = pShader->m_piGLUniform[89];
  v102 = v44->m_program[v101].m_linkID;
  *(_QWORD *)v439 = v44->m_program[v101].m_uniformAttrib[(int)location].index;
  location_8.m128i_i64[0] = (__int64)v44->m_shaderUniformPtr[v102];
  if ( memcmp(*(const void **)(location_8.m128i_i64[0] + 8i64 * *(_QWORD *)v439), &v443, 0x40ui64) )
  {
    v103 = v444;
    v104 = (int)location;
    v105 = *(_OWORD **)(location_8.m128i_i64[0] + 8i64 * *(_QWORD *)v439);
    *v105 = v443;
    v106 = v445;
    v105[1] = v103;
    v107 = v446;
    v105[2] = v106;
    v105[3] = v107;
    KOFShaderManager::setUniformWriteMask(v44, v104);
  }
  v108 = v44->m_currentProgramSlot;
  LODWORD(location) = pShader->m_piGLUniform[90];
  v109 = v44->m_program[v108].m_linkID;
  location_8.m128i_i64[0] = v44->m_program[v108].m_uniformAttrib[(int)location].index;
  *(_QWORD *)v439 = v44->m_shaderUniformPtr[v109];
  if ( memcmp(*(const void **)(*(_QWORD *)v439 + 8 * location_8.m128i_i64[0]), Buf2, 0x80ui64) )
  {
    v110 = v457;
    v111 = (int)location;
    v112 = *(_OWORD **)(*(_QWORD *)v439 + 8 * location_8.m128i_i64[0]);
    *v112 = *(_OWORD *)Buf2;
    v113 = v458;
    v112[1] = v110;
    v114 = v459;
    v112[2] = v113;
    v115 = v460;
    v112[3] = v114;
    v116 = v461;
    v112[4] = v115;
    v117 = v462;
    v112[5] = v116;
    v118 = v463;
    v112[6] = v117;
    v112[7] = v118;
    KOFShaderManager::setUniformWriteMask(v44, v111);
  }
  m_multiUVLerpBlend = v14->m_multiUVLerpBlend;
  v120 = pShader->m_piGLUniform[51];
  v121 = (float *)v44->m_shaderUniformPtr[v44->m_program[v44->m_currentProgramSlot].m_linkID][v44->m_program[v44->m_currentProgramSlot].m_uniformAttrib[v120].index];
  if ( m_multiUVLerpBlend != *v121 )
  {
    *v121 = m_multiUVLerpBlend;
    KOFShaderManager::setUniformWriteMask(v44, v120);
  }
  if ( this->m_NormalRenderPassFlg )
  {
    v122 = (float)this->m_SkyFog.m_bOn;
    v439[0] = (float)this->m_GroundFog.m_bOn;
    v439[1] = v122;
    if ( (EffectFlg & 0x100) != 0 )
      *(_QWORD *)v439 = 0i64;
    v123 = pShader->m_piGLUniform[41];
    v124 = v44->m_shaderUniformPtr[v44->m_program[v44->m_currentProgramSlot].m_linkID][v44->m_program[v44->m_currentProgramSlot].m_uniformAttrib[v123].index];
    if ( *v124 != *(_QWORD *)v439 )
    {
      *v124 = *(_QWORD *)v439;
      KOFShaderManager::setUniformWriteMask(v44, v123);
    }
    if ( !this->m_bWorldSetting )
    {
      v125 = *(_OWORD *)&this->m_GroundFog.m_fUpDistance;
      this->m_bWorldSetting = 1;
      v126 = pShader->m_piGLUniform;
      *(_OWORD *)v = v125;
      v127 = v126[28];
      v128 = v44->m_shaderUniformPtr[v44->m_program[v44->m_currentProgramSlot].m_linkID][v44->m_program[v44->m_currentProgramSlot].m_uniformAttrib[v127].index];
      if ( *v128 != v125 )
      {
        *v128 = *(_OWORD *)v;
        KOFShaderManager::setUniformWriteMask(v44, v127);
      }
      v129 = pShader->m_piGLUniform[35];
      v130 = v44->m_shaderUniformPtr[v44->m_program[v44->m_currentProgramSlot].m_linkID][v44->m_program[v44->m_currentProgramSlot].m_uniformAttrib[v129].index];
      if ( *v130 != *(_OWORD *)this->m_GroundFog.m_UpColour )
      {
        *v130 = *(_OWORD *)this->m_GroundFog.m_UpColour;
        KOFShaderManager::setUniformWriteMask(v44, v129);
      }
      v131 = pShader->m_piGLUniform[29];
      v132 = v44->m_currentProgramSlot;
      *(_OWORD *)v = *(_OWORD *)&this->m_GroundFog.m_fDownDistance;
      v133 = v44->m_shaderUniformPtr[v44->m_program[v132].m_linkID][v44->m_program[v132].m_uniformAttrib[v131].index];
      if ( *v133 != *(_OWORD *)v )
      {
        *v133 = *(_OWORD *)v;
        KOFShaderManager::setUniformWriteMask(v44, v131);
      }
      v134 = pShader->m_piGLUniform[36];
      v135 = v44->m_shaderUniformPtr[v44->m_program[v44->m_currentProgramSlot].m_linkID][v44->m_program[v44->m_currentProgramSlot].m_uniformAttrib[v134].index];
      if ( *v135 != *(_OWORD *)this->m_GroundFog.m_DownColour )
      {
        *v135 = *(_OWORD *)this->m_GroundFog.m_DownColour;
        KOFShaderManager::setUniformWriteMask(v44, v134);
      }
      v136 = pShader->m_piGLUniform;
      m_fDownStrength = this->m_GroundFog.m_fDownStrength;
      v[0] = this->m_GroundFog.m_fUpStrength;
      v138 = v136[34];
      m_fUpStrength = this->m_SkyFog.m_fUpStrength;
      v140 = v44->m_currentProgramSlot;
      v[1] = m_fDownStrength;
      v141 = this->m_SkyFog.m_fDownStrength;
      v[2] = m_fUpStrength;
      v[3] = v141;
      v142 = v44->m_shaderUniformPtr[v44->m_program[v140].m_linkID][v44->m_program[v140].m_uniformAttrib[v138].index];
      if ( *v142 != *(_OWORD *)v )
      {
        *v142 = *(_OWORD *)v;
        KOFShaderManager::setUniformWriteMask(v44, v138);
      }
      v143 = pShader->m_piGLUniform[30];
      v144 = v44->m_currentProgramSlot;
      *(_OWORD *)v = *(_OWORD *)&this->m_SkyFog.m_fUpDistance;
      v145 = v44->m_shaderUniformPtr[v44->m_program[v144].m_linkID][v44->m_program[v144].m_uniformAttrib[v143].index];
      if ( *v145 != *(_OWORD *)v )
      {
        *v145 = *(_OWORD *)v;
        KOFShaderManager::setUniformWriteMask(v44, v143);
      }
      v146 = pShader->m_piGLUniform[37];
      v147 = v44->m_shaderUniformPtr[v44->m_program[v44->m_currentProgramSlot].m_linkID][v44->m_program[v44->m_currentProgramSlot].m_uniformAttrib[v146].index];
      if ( *v147 != *(_OWORD *)this->m_SkyFog.m_UpColour )
      {
        *v147 = *(_OWORD *)this->m_SkyFog.m_UpColour;
        KOFShaderManager::setUniformWriteMask(v44, v146);
      }
      v148 = pShader->m_piGLUniform[31];
      v149 = v44->m_currentProgramSlot;
      *(_OWORD *)v = *(_OWORD *)&this->m_SkyFog.m_fDownDistance;
      v150 = v44->m_shaderUniformPtr[v44->m_program[v149].m_linkID][v44->m_program[v149].m_uniformAttrib[v148].index];
      if ( *v150 != *(_OWORD *)v )
      {
        *v150 = *(_OWORD *)v;
        KOFShaderManager::setUniformWriteMask(v44, v148);
      }
      v151 = pShader->m_piGLUniform[38];
      v152 = v44->m_shaderUniformPtr[v44->m_program[v44->m_currentProgramSlot].m_linkID][v44->m_program[v44->m_currentProgramSlot].m_uniformAttrib[v151].index];
      if ( *v152 != *(_OWORD *)this->m_SkyFog.m_DownColour )
      {
        *v152 = *(_OWORD *)this->m_SkyFog.m_DownColour;
        KOFShaderManager::setUniformWriteMask(v44, v151);
      }
      v153 = pShader->m_piGLUniform;
      v439[1] = FLOAT_4096_0;
      v439[0] = 1.0;
      v154 = v153[55];
      v155 = v44->m_shaderUniformPtr[v44->m_program[v44->m_currentProgramSlot].m_linkID][v44->m_program[v44->m_currentProgramSlot].m_uniformAttrib[v154].index];
      if ( *v155 != *(_QWORD *)v439 )
      {
        *v155 = *(_QWORD *)v439;
        KOFShaderManager::setUniformWriteMask(v44, v154);
      }
      v156 = pShader->m_piGLUniform[32];
      v157 = v44->m_currentProgramSlot;
      *(_OWORD *)v = *(_OWORD *)&this->m_GroundFog.m_fShaderDistDivisor;
      v158 = v44->m_shaderUniformPtr[v44->m_program[v157].m_linkID][v44->m_program[v157].m_uniformAttrib[v156].index];
      if ( *v158 != *(_OWORD *)v )
      {
        *v158 = *(_OWORD *)v;
        KOFShaderManager::setUniformWriteMask(v44, v156);
      }
      v159 = pShader->m_piGLUniform[33];
      v160 = v44->m_currentProgramSlot;
      *(_OWORD *)v = *(_OWORD *)&this->m_SkyFog.m_fShaderDistDivisor;
      v161 = v44->m_shaderUniformPtr[v44->m_program[v160].m_linkID][v44->m_program[v160].m_uniformAttrib[v159].index];
      if ( *v161 != *(_OWORD *)v )
      {
        *v161 = *(_OWORD *)v;
        KOFShaderManager::setUniformWriteMask(v44, v159);
      }
      v162 = pShader->m_piGLUniform;
      m_fShaderExtraHeightSetting = this->m_SkyFog.m_fShaderExtraHeightSetting;
      v439[0] = this->m_GroundFog.m_fShaderExtraHeightSetting;
      v164 = v162[40];
      v165 = v44->m_currentProgramSlot;
      v439[1] = m_fShaderExtraHeightSetting;
      v166 = v44->m_shaderUniformPtr[v44->m_program[v165].m_linkID][v44->m_program[v165].m_uniformAttrib[v164].index];
      if ( *v166 != *(_QWORD *)v439 )
      {
        *v166 = *(_QWORD *)v439;
        KOFShaderManager::setUniformWriteMask(v44, v164);
      }
      *(float *)&v167 = (float)this->m_GroundFog.m_calcType;
      v168 = pShader->m_piGLUniform[39];
      v169 = v44->m_currentProgramSlot;
      *(float *)&v170 = (float)this->m_SkyFog.m_calcType;
      *(_QWORD *)v439 = __PAIR64__(v170, v167);
      v171 = v44->m_shaderUniformPtr[v44->m_program[v169].m_linkID][v44->m_program[v169].m_uniformAttrib[v168].index];
      if ( *v171 != __PAIR64__(v170, v167) )
      {
        *v171 = *(_QWORD *)v439;
        KOFShaderManager::setUniformWriteMask(v44, v168);
      }
      BriSatConOn = this->m_BkgndScreenFilterSettings.BriSatConOn;
      LODWORD(v173) = this->m_BkgndScreenFilterSettings.GradientOn;
      Contrast = this->m_BkgndScreenFilterSettings.Contrast;
      FilterOn = this->m_BkgndScreenFilterSettings.FilterOn;
      PSLevelsOn = this->m_BkgndScreenFilterSettings.PSLevelsOn;
      Brightness = this->m_BkgndScreenFilterSettings.Brightness;
      DWORD1(v457) = LODWORD(this->m_BkgndScreenFilterSettings.Saturation);
      *((float *)&v457 + 2) = Contrast;
      v439[0] = v173;
      if ( BriSatConOn )
      {
        *(float *)&v457 = Brightness * globalBrightness;
      }
      else
      {
        BriSatConOn = 1;
        *(float *)&v457 = globalBrightness;
        *(_QWORD *)((char *)&v457 + 4) = 0x3F8000003F800000i64;
      }
      PSLevelsInWhite = this->m_BkgndScreenFilterSettings.PSLevelsInWhite;
      v179 = this->m_BkgndScreenFilterSettings.GradientStartColour[1];
      v180 = pShader->m_piGLUniform[115];
      PSLevelsInGamma = this->m_BkgndScreenFilterSettings.PSLevelsInGamma;
      v182 = v44->m_currentProgramSlot;
      *(float *)&v458 = this->m_BkgndScreenFilterSettings.PSLevelsInBlack;
      PSLevelsOutBlack = this->m_BkgndScreenFilterSettings.PSLevelsOutBlack;
      *(float *)&location_8.m128i_i32[1] = v179;
      v184 = this->m_BkgndScreenFilterSettings.GradientEndColour[2];
      *(_QWORD *)((char *)&v458 + 4) = __PAIR64__(LODWORD(PSLevelsOutBlack), LODWORD(PSLevelsInWhite));
      PSLevelsOutWhite = this->m_BkgndScreenFilterSettings.PSLevelsOutWhite;
      GradientOverlayOpacity = this->m_BkgndScreenFilterSettings.GradientOverlayOpacity;
      m_uniformAttrib = v44->m_program[v182].m_uniformAttrib;
      LODWORD(location) = v180;
      *((float *)&v458 + 3) = PSLevelsOutWhite;
      location_8.m128i_i32[0] = LODWORD(this->m_BkgndScreenFilterSettings.GradientStartColour[0]);
      index = m_uniformAttrib[v180].index;
      v189 = v44->m_program[v182].m_linkID;
      v190 = this->m_BkgndScreenFilterSettings.GradientEndColour[1];
      *((float *)&v461 + 3) = GradientOverlayOpacity;
      v191 = v44->m_shaderUniformPtr[v189];
      location_8.m128i_i64[1] = LODWORD(this->m_BkgndScreenFilterSettings.GradientStartColour[2]);
      v192 = location_8;
      v193 = v191[index];
      location_8.m128i_i32[0] = LODWORD(this->m_BkgndScreenFilterSettings.GradientEndColour[0]);
      *(float *)&location_8.m128i_i32[1] = v190;
      location_8.m128i_i64[1] = LODWORD(v184);
      v194 = location_8;
      if ( FilterOn != *v193 )
      {
        *v193 = FilterOn;
        KOFShaderManager::setUniformWriteMask(v44, (int)location);
      }
      v195 = pShader->m_piGLUniform[116];
      v196 = (int *)v44->m_shaderUniformPtr[v44->m_program[v44->m_currentProgramSlot].m_linkID][v44->m_program[v44->m_currentProgramSlot].m_uniformAttrib[v195].index];
      if ( BriSatConOn != *v196 )
      {
        *v196 = BriSatConOn;
        KOFShaderManager::setUniformWriteMask(v44, v195);
      }
      v197 = pShader->m_piGLUniform[117];
      v198 = v44->m_shaderUniformPtr[v44->m_program[v44->m_currentProgramSlot].m_linkID][v44->m_program[v44->m_currentProgramSlot].m_uniformAttrib[v197].index];
      if ( PSLevelsOn != *v198 )
      {
        *v198 = PSLevelsOn;
        KOFShaderManager::setUniformWriteMask(v44, v197);
      }
      v199 = pShader->m_piGLUniform[118];
      v200 = (float *)v44->m_shaderUniformPtr[v44->m_program[v44->m_currentProgramSlot].m_linkID][v44->m_program[v44->m_currentProgramSlot].m_uniformAttrib[v199].index];
      if ( LODWORD(v439[0]) != *(_DWORD *)v200 )
      {
        *v200 = v439[0];
        KOFShaderManager::setUniformWriteMask(v44, v199);
      }
      v201 = pShader->m_piGLUniform[119];
      v202 = DWORD2(v457);
      v203 = v44->m_shaderUniformPtr[v44->m_program[v44->m_currentProgramSlot].m_linkID][v44->m_program[v44->m_currentProgramSlot].m_uniformAttrib[v201].index];
      if ( *(_QWORD *)v203 != (_QWORD)v457 || v203[2] != DWORD2(v457) )
      {
        *(_QWORD *)v203 = v457;
        v203[2] = v202;
        KOFShaderManager::setUniformWriteMask(v44, v201);
      }
      v204 = pShader->m_piGLUniform[120];
      v205 = (float *)v44->m_shaderUniformPtr[v44->m_program[v44->m_currentProgramSlot].m_linkID][v44->m_program[v44->m_currentProgramSlot].m_uniformAttrib[v204].index];
      if ( PSLevelsInGamma != *v205 )
      {
        *v205 = PSLevelsInGamma;
        KOFShaderManager::setUniformWriteMask(v44, v204);
      }
      v206 = pShader->m_piGLUniform[121];
      v207 = v44->m_shaderUniformPtr[v44->m_program[v44->m_currentProgramSlot].m_linkID][v44->m_program[v44->m_currentProgramSlot].m_uniformAttrib[v206].index];
      if ( *v207 != (_QWORD)v458 )
      {
        *v207 = v458;
        KOFShaderManager::setUniformWriteMask(v44, v206);
      }
      v208 = pShader->m_piGLUniform[122];
      v209 = v44->m_shaderUniformPtr[v44->m_program[v44->m_currentProgramSlot].m_linkID][v44->m_program[v44->m_currentProgramSlot].m_uniformAttrib[v208].index];
      if ( *v209 != *((_QWORD *)&v458 + 1) )
      {
        *v209 = *((_QWORD *)&v458 + 1);
        KOFShaderManager::setUniformWriteMask(v44, v208);
      }
      v210 = pShader->m_piGLUniform[125];
      v211 = v44->m_shaderUniformPtr[v44->m_program[v44->m_currentProgramSlot].m_linkID][v44->m_program[v44->m_currentProgramSlot].m_uniformAttrib[v210].index];
      if ( *v211 != v461 )
      {
        *v211 = v461;
        KOFShaderManager::setUniformWriteMask(v44, v210);
      }
      v212 = pShader->m_piGLUniform[123];
      v213 = (__m128i *)v44->m_shaderUniformPtr[v44->m_program[v44->m_currentProgramSlot].m_linkID][v44->m_program[v44->m_currentProgramSlot].m_uniformAttrib[v212].index];
      if ( *v213 != __PAIR128__(_mm_srli_si128(v192, 8).m128i_u64[0], v192.m128i_u64[0]) )
      {
        *v213 = v192;
        KOFShaderManager::setUniformWriteMask(v44, v212);
      }
      v214 = pShader->m_piGLUniform[124];
      v215 = (__m128i *)v44->m_shaderUniformPtr[v44->m_program[v44->m_currentProgramSlot].m_linkID][v44->m_program[v44->m_currentProgramSlot].m_uniformAttrib[v214].index];
      if ( *v215 != __PAIR128__(_mm_srli_si128(v194, 8).m128i_u64[0], v194.m128i_u64[0]) )
      {
        *v215 = v194;
        KOFShaderManager::setUniformWriteMask(v44, v214);
      }
    }
  }
  v216 = pShader->m_piGLUniform[85];
  v217 = (float *)v44->m_shaderUniformPtr[v44->m_program[v44->m_currentProgramSlot].m_linkID][v44->m_program[v44->m_currentProgramSlot].m_uniformAttrib[v216].index];
  if ( (float)v100 != *v217 )
  {
    *v217 = (float)v100;
    KOFShaderManager::setUniformWriteMask(v44, v216);
  }
  if ( pModel->m_lowAccuracyShadowBias )
  {
    v218 = strstr((const char *)v14->m_cName, "_SKN_");
    v44 = (KOFShaderManager *)AgSingleton<KOFShaderManager>::ms_instance;
    v56 = v218 == 0i64;
    v219 = pShader->m_piGLUniform[88];
    v220 = SLODWORD(AgSingleton<KOFShaderManager>::ms_instance[360450].__vftable);
    if ( v56 )
    {
      m_BodySelfShadowMaxStrength = this->m_WorldLightManager.m_BodySelfShadowMaxStrength;
      v[0] = this->m_WorldLightManager.m_BodySelfShadowBias;
      v[1] = m_BodySelfShadowMaxStrength;
      v238 = *((_QWORD *)&AgSingleton<KOFShaderManager>::ms_instance[SHIDWORD(AgSingleton<KOFShaderManager>::ms_instance[11 * v220 + 5].__vftable)
                                                                   + 494188].~AgSingleton<KOFShaderManager>
             + *((int *)&AgSingleton<KOFShaderManager>::ms_instance[11 * v220 + 11].~AgSingleton<KOFShaderManager>
               + 4 * v219));
      if ( *(_QWORD *)v238 != *(_QWORD *)v || *(_QWORD *)(v238 + 8) != *(_QWORD *)&v[2] )
      {
        *(_OWORD *)v238 = *(_OWORD *)v;
        KOFShaderManager::setUniformWriteMask(v44, v219);
      }
      v239 = pShader->m_piGLUniform[83];
      v240 = v44->m_currentProgramSlot;
      *(_OWORD *)v = *(_OWORD *)this->m_WorldLightManager.m_BodySelfShadowColour;
      v241 = v44->m_shaderUniformPtr[v44->m_program[v240].m_linkID][v44->m_program[v240].m_uniformAttrib[v239].index];
      if ( *v241 != *(_OWORD *)v )
      {
        *v241 = *(_OWORD *)v;
        KOFShaderManager::setUniformWriteMask(v44, v239);
      }
      m_BodySelfShadowVisibility = this->m_WorldLightManager.m_BodySelfShadowVisibility;
      v243 = pShader->m_piGLUniform[86];
      v244 = (float *)v44->m_shaderUniformPtr[v44->m_program[v44->m_currentProgramSlot].m_linkID][v44->m_program[v44->m_currentProgramSlot].m_uniformAttrib[v243].index];
      if ( m_BodySelfShadowVisibility != *v244 )
      {
        *v244 = m_BodySelfShadowVisibility;
        KOFShaderManager::setUniformWriteMask(v44, v243);
      }
      m_BodySelfShadowHardEdge = this->m_WorldLightManager.m_BodySelfShadowHardEdge;
      v246 = pShader->m_piGLUniform[87];
      v247 = (float *)v44->m_shaderUniformPtr[v44->m_program[v44->m_currentProgramSlot].m_linkID][v44->m_program[v44->m_currentProgramSlot].m_uniformAttrib[v246].index];
      if ( m_BodySelfShadowHardEdge != *v247 )
      {
        *v247 = m_BodySelfShadowHardEdge;
        KOFShaderManager::setUniformWriteMask(v44, v246);
      }
      v232 = pModel->m_bodySelfShadowDotRangeMinMax[0];
      v233 = pModel->m_bodySelfShadowDotRangeMinMax[1];
    }
    else
    {
      m_SkinSelfShadowMaxStrength = this->m_WorldLightManager.m_SkinSelfShadowMaxStrength;
      v[0] = this->m_WorldLightManager.m_SkinSelfShadowBias;
      v[1] = m_SkinSelfShadowMaxStrength;
      v222 = *((_QWORD *)&AgSingleton<KOFShaderManager>::ms_instance[SHIDWORD(AgSingleton<KOFShaderManager>::ms_instance[11 * v220 + 5].__vftable)
                                                                   + 494188].~AgSingleton<KOFShaderManager>
             + *((int *)&AgSingleton<KOFShaderManager>::ms_instance[11 * v220 + 11].~AgSingleton<KOFShaderManager>
               + 4 * v219));
      if ( *(_QWORD *)v222 != *(_QWORD *)v || *(_QWORD *)(v222 + 8) != *(_QWORD *)&v[2] )
      {
        *(_OWORD *)v222 = *(_OWORD *)v;
        KOFShaderManager::setUniformWriteMask(v44, v219);
      }
      v223 = pShader->m_piGLUniform[83];
      v224 = v44->m_currentProgramSlot;
      *(_OWORD *)v = *(_OWORD *)this->m_WorldLightManager.m_SkinSelfShadowColour;
      v225 = v44->m_shaderUniformPtr[v44->m_program[v224].m_linkID][v44->m_program[v224].m_uniformAttrib[v223].index];
      if ( *v225 != *(_OWORD *)v )
      {
        *v225 = *(_OWORD *)v;
        KOFShaderManager::setUniformWriteMask(v44, v223);
      }
      m_SkinSelfShadowVisibility = this->m_WorldLightManager.m_SkinSelfShadowVisibility;
      v227 = pShader->m_piGLUniform[86];
      v228 = (float *)v44->m_shaderUniformPtr[v44->m_program[v44->m_currentProgramSlot].m_linkID][v44->m_program[v44->m_currentProgramSlot].m_uniformAttrib[v227].index];
      if ( m_SkinSelfShadowVisibility != *v228 )
      {
        *v228 = m_SkinSelfShadowVisibility;
        KOFShaderManager::setUniformWriteMask(v44, v227);
      }
      m_SkinSelfShadowHardEdge = this->m_WorldLightManager.m_SkinSelfShadowHardEdge;
      v230 = pShader->m_piGLUniform[87];
      v231 = (float *)v44->m_shaderUniformPtr[v44->m_program[v44->m_currentProgramSlot].m_linkID][v44->m_program[v44->m_currentProgramSlot].m_uniformAttrib[v230].index];
      if ( m_SkinSelfShadowHardEdge != *v231 )
      {
        *v231 = m_SkinSelfShadowHardEdge;
        KOFShaderManager::setUniformWriteMask(v44, v230);
      }
      v232 = pModel->m_skinSelfShadowDotRangeMinMax[0];
      v233 = pModel->m_skinSelfShadowDotRangeMinMax[1];
    }
    v234 = pShader->m_piGLUniform;
    *(_QWORD *)v439 = __PAIR64__(LODWORD(v233), LODWORD(v232));
    v235 = v234[93];
    v236 = v44->m_shaderUniformPtr[v44->m_program[v44->m_currentProgramSlot].m_linkID][v44->m_program[v44->m_currentProgramSlot].m_uniformAttrib[v235].index];
    if ( *v236 != __PAIR64__(LODWORD(v233), LODWORD(v232)) )
    {
      *v236 = *(_QWORD *)v439;
LABEL_151:
      KOFShaderManager::setUniformWriteMask(v44, v235);
    }
  }
  else
  {
    v248 = pShader->m_piGLUniform;
    m_GroundShadowMaxStrength = this->m_WorldLightManager.m_GroundShadowMaxStrength;
    v[0] = this->m_WorldLightManager.m_GroundShadowBias;
    v250 = v248[88];
    v251 = v44->m_currentProgramSlot;
    v[1] = m_GroundShadowMaxStrength;
    v252 = v44->m_shaderUniformPtr[v44->m_program[v251].m_linkID][v44->m_program[v251].m_uniformAttrib[v250].index];
    if ( *v252 != *(_OWORD *)v )
    {
      *v252 = *(_OWORD *)v;
      KOFShaderManager::setUniformWriteMask(v44, v250);
    }
    v253 = pShader->m_piGLUniform[83];
    v254 = v44->m_currentProgramSlot;
    *(_OWORD *)v = *(_OWORD *)this->m_WorldLightManager.m_GroundShadowColour;
    v255 = v44->m_shaderUniformPtr[v44->m_program[v254].m_linkID][v44->m_program[v254].m_uniformAttrib[v253].index];
    if ( *v255 != *(_OWORD *)v )
    {
      *v255 = *(_OWORD *)v;
      KOFShaderManager::setUniformWriteMask(v44, v253);
    }
    v256 = pShader->m_piGLUniform;
    *(_QWORD *)v439 = 0x3F80000000000000i64;
    v257 = v256[93];
    v258 = v44->m_shaderUniformPtr[v44->m_program[v44->m_currentProgramSlot].m_linkID][v44->m_program[v44->m_currentProgramSlot].m_uniformAttrib[v257].index];
    if ( *v258 != 0x3F80000000000000i64 )
    {
      *v258 = *(_QWORD *)v439;
      KOFShaderManager::setUniformWriteMask(v44, v257);
    }
    m_GroundShadowVisibility = this->m_WorldLightManager.m_GroundShadowVisibility;
    LODWORD(v235) = pShader->m_piGLUniform[86];
    v260 = (float *)v44->m_shaderUniformPtr[v44->m_program[v44->m_currentProgramSlot].m_linkID][v44->m_program[v44->m_currentProgramSlot].m_uniformAttrib[(int)v235].index];
    if ( m_GroundShadowVisibility != *v260 )
    {
      *v260 = m_GroundShadowVisibility;
      goto LABEL_151;
    }
  }
  m_opacity = pModel->m_opacity;
  v262 = pShader->m_piGLUniform[165];
  v263 = (float *)v44->m_shaderUniformPtr[v44->m_program[v44->m_currentProgramSlot].m_linkID][v44->m_program[v44->m_currentProgramSlot].m_uniformAttrib[v262].index];
  if ( m_opacity != *v263 )
  {
    *v263 = m_opacity;
    KOFShaderManager::setUniformWriteMask(v44, v262);
  }
  v264 = strstr((const char *)v14->m_cName, "_EYE_");
  v265 = (KOFShaderManager *)AgSingleton<KOFShaderManager>::ms_instance;
  v56 = v264 == 0i64;
  v266 = pShader->m_piGLUniform[91];
  v267 = SLODWORD(AgSingleton<KOFShaderManager>::ms_instance[360450].__vftable);
  if ( v56 )
  {
    v270 = (float *)*((_QWORD *)&AgSingleton<KOFShaderManager>::ms_instance[SHIDWORD(AgSingleton<KOFShaderManager>::ms_instance[11 * v267 + 5].__vftable)
                                                                          + 494188].~AgSingleton<KOFShaderManager>
                    + *((int *)&AgSingleton<KOFShaderManager>::ms_instance[11 * v267 + 11].~AgSingleton<KOFShaderManager>
                      + 4 * v266));
    if ( *v270 == 0.0 )
      goto LABEL_160;
    *v270 = 0.0;
  }
  else
  {
    m_shaderEyeDiffuseEmiStrength = pModel->m_shaderEyeDiffuseEmiStrength;
    v269 = (float *)*((_QWORD *)&AgSingleton<KOFShaderManager>::ms_instance[SHIDWORD(AgSingleton<KOFShaderManager>::ms_instance[11 * v267 + 5].__vftable)
                                                                          + 494188].~AgSingleton<KOFShaderManager>
                    + *((int *)&AgSingleton<KOFShaderManager>::ms_instance[11 * v267 + 11].~AgSingleton<KOFShaderManager>
                      + 4 * v266));
    if ( m_shaderEyeDiffuseEmiStrength == *v269 )
      goto LABEL_160;
    *v269 = m_shaderEyeDiffuseEmiStrength;
  }
  KOFShaderManager::setUniformWriteMask(v265, v266);
LABEL_160:
  m_shaderLightDiffuseEmiStrength = pModel->m_shaderLightDiffuseEmiStrength;
  v272 = pShader->m_piGLUniform[92];
  v273 = (float *)v265->m_shaderUniformPtr[v265->m_program[v265->m_currentProgramSlot].m_linkID][v265->m_program[v265->m_currentProgramSlot].m_uniformAttrib[v272].index];
  if ( m_shaderLightDiffuseEmiStrength != *v273 )
  {
    *v273 = m_shaderLightDiffuseEmiStrength;
    KOFShaderManager::setUniformWriteMask(v265, v272);
  }
  v274 = pShader->m_piGLUniform[84];
  v275 = v265->m_shaderUniformPtr[v265->m_program[v265->m_currentProgramSlot].m_linkID][v265->m_program[v265->m_currentProgramSlot].m_uniformAttrib[v274].index];
  if ( (EffectFlg & 0x10000) != 0 )
  {
    if ( *v275 != 1 )
    {
      *v275 = 1;
LABEL_167:
      KOFShaderManager::setUniformWriteMask(v265, v274);
    }
  }
  else if ( *v275 )
  {
    *v275 = 0;
    goto LABEL_167;
  }
  glUniform4fvAG(pShader->m_piGLUniform[78], v100, &v14->m_shaderLightPosition[0].x);
  glUniform4fvAG(pShader->m_piGLUniform[77], v100, &v14->m_shaderLightDiffuseCol[0].x);
  glUniform4fvAG(pShader->m_piGLUniform[79], v100, &v14->m_shaderLightDirection[0].x);
  v276 = pShader->m_piGLUniform[10];
  v277 = v265->m_shaderUniformPtr[v265->m_program[v265->m_currentProgramSlot].m_linkID][v265->m_program[v265->m_currentProgramSlot].m_uniformAttrib[v276].index];
  if ( *(_QWORD *)v277 != *(_QWORD *)&v14->m_shaderLightEyePosition[0].x
    || v277[2] != LODWORD(v14->m_shaderLightEyePosition[0].z) )
  {
    *(_QWORD *)v277 = *(_QWORD *)&v14->m_shaderLightEyePosition[0].x;
    v277[2] = LODWORD(v14->m_shaderLightEyePosition[0].z);
    KOFShaderManager::setUniformWriteMask(v265, v276);
  }
  v278 = v100;
  if ( v100 < 2 )
    v278 = 2;
  glUniform4fvAG(pShader->m_piGLUniform[80], v278, &v14->m_shaderLightShadowData[0].x);
  glUniform4fvAG(pShader->m_piGLUniform[81], v100, &v14->m_shaderLightTypeAndSpotSettings[0].x);
  glUniform4fvAG(pShader->m_piGLUniform[82], v100, &v14->m_shaderLightIntensityAndDecayRate[0].x);
  m_Width = (float)this->m_Width;
  v280 = pShader->m_piGLUniform[17];
  m_Height = (float)this->m_Height;
  v282 = (float *)v265->m_shaderUniformPtr[v265->m_program[v265->m_currentProgramSlot].m_linkID][v265->m_program[v265->m_currentProgramSlot].m_uniformAttrib[v280].index];
  if ( *v282 != m_Width || v282[1] != m_Height )
  {
    *v282 = m_Width;
    v282[1] = m_Height;
    KOFShaderManager::setUniformWriteMask(v265, v280);
  }
  v283 = pShader->m_piGLUniform;
  v284 = p_m_MaterialLight->m_fDiffuse[1];
  v[0] = p_m_MaterialLight->m_fDiffuse[0];
  v285 = v283[18];
  v286 = p_m_MaterialLight->m_fDiffuse[2];
  v287 = v265->m_currentProgramSlot;
  v[1] = v284;
  m_fDiffuseFactor = p_m_MaterialLight->m_fDiffuseFactor;
  v[2] = v286;
  v[3] = m_fDiffuseFactor;
  v289 = v265->m_shaderUniformPtr[v265->m_program[v287].m_linkID][v265->m_program[v287].m_uniformAttrib[v285].index];
  if ( *v289 != *(_OWORD *)v )
  {
    *v289 = *(_OWORD *)v;
    KOFShaderManager::setUniformWriteMask(v265, v285);
  }
  m_UseDiffuseColour2 = v14->m_UseDiffuseColour2;
  v291 = v14->m_DiffuseColour2[0];
  v[1] = v14->m_DiffuseColour2[1];
  v292 = _mm_cvtsi32_si128(m_UseDiffuseColour2);
  v293 = pShader->m_piGLUniform;
  v[0] = v291;
  v294 = v293[171];
  v295 = v265->m_currentProgramSlot;
  v[2] = v14->m_DiffuseColour2[2];
  LODWORD(v[3]) = _mm_cvtepi32_ps(v292).m128_u32[0];
  v296 = v265->m_shaderUniformPtr[v265->m_program[v295].m_linkID][v265->m_program[v295].m_uniformAttrib[v294].index];
  if ( *v296 != *(_OWORD *)v )
  {
    *v296 = *(_OWORD *)v;
    KOFShaderManager::setUniformWriteMask(v265, v294);
  }
  v297 = pShader->m_piGLUniform;
  v298 = p_m_MaterialLight->m_fSpecular[1];
  v[0] = p_m_MaterialLight->m_fSpecular[0];
  v299 = v297[19];
  v300 = p_m_MaterialLight->m_fSpecular[2];
  v301 = v265->m_currentProgramSlot;
  v[1] = v298;
  m_fSpecularFactor = p_m_MaterialLight->m_fSpecularFactor;
  v[2] = v300;
  v[3] = m_fSpecularFactor;
  v303 = v265->m_shaderUniformPtr[v265->m_program[v301].m_linkID][v265->m_program[v301].m_uniformAttrib[v299].index];
  if ( *v303 != *(_OWORD *)v )
  {
    *v303 = *(_OWORD *)v;
    KOFShaderManager::setUniformWriteMask(v265, v299);
  }
  if ( pModel->m_useShaderFX )
  {
    v304 = v14->m_ReflectionColour[1];
    v[0] = v14->m_ReflectionColour[0];
    v305 = v14->m_ReflectionColour[2];
  }
  else
  {
    v304 = p_m_MaterialLight->m_fReflection[1];
    v[0] = p_m_MaterialLight->m_fReflection[0];
    v305 = p_m_MaterialLight->m_fReflection[2];
  }
  v306 = pShader->m_piGLUniform;
  v[2] = v305;
  m_ReflectionIntensity = v14->m_ReflectionIntensity;
  v[1] = v304;
  v308 = v306[21];
  v309 = v265->m_currentProgramSlot;
  v[3] = m_ReflectionIntensity;
  v310 = v265->m_shaderUniformPtr[v265->m_program[v309].m_linkID][v265->m_program[v309].m_uniformAttrib[v308].index];
  if ( *v310 != *(_OWORD *)v )
  {
    *v310 = *(_OWORD *)v;
    KOFShaderManager::setUniformWriteMask(v265, v308);
  }
  m_ReflectionMultiplier = v14->m_ReflectionMultiplier;
  v312 = pShader->m_piGLUniform[52];
  v313 = (float *)v265->m_shaderUniformPtr[v265->m_program[v265->m_currentProgramSlot].m_linkID][v265->m_program[v265->m_currentProgramSlot].m_uniformAttrib[v312].index];
  if ( m_ReflectionMultiplier != *v313 )
  {
    *v313 = m_ReflectionMultiplier;
    KOFShaderManager::setUniformWriteMask(v265, v312);
  }
  m_Pinching = v14->m_Pinching;
  v315 = pShader->m_piGLUniform[72];
  v316 = (float *)v265->m_shaderUniformPtr[v265->m_program[v265->m_currentProgramSlot].m_linkID][v265->m_program[v265->m_currentProgramSlot].m_uniformAttrib[v315].index];
  if ( m_Pinching != *v316 )
  {
    *v316 = m_Pinching;
    KOFShaderManager::setUniformWriteMask(v265, v315);
  }
  v317 = pShader->m_piGLUniform;
  v318 = p_m_MaterialLight->m_fEmission[1];
  v[0] = p_m_MaterialLight->m_fEmission[0];
  v319 = v317[20];
  v320 = p_m_MaterialLight->m_fEmission[2];
  v321 = v265->m_currentProgramSlot;
  v[1] = v318;
  m_fEmissionFactor = p_m_MaterialLight->m_fEmissionFactor;
  v[2] = v320;
  v[3] = m_fEmissionFactor;
  v323 = v265->m_shaderUniformPtr[v265->m_program[v321].m_linkID][v265->m_program[v321].m_uniformAttrib[v319].index];
  if ( *v323 != *(_OWORD *)v )
  {
    *v323 = *(_OWORD *)v;
    KOFShaderManager::setUniformWriteMask(v265, v319);
  }
  v324 = pShader->m_piGLUniform[44];
  v325 = v265->m_shaderUniformPtr[v265->m_program[v265->m_currentProgramSlot].m_linkID][v265->m_program[v265->m_currentProgramSlot].m_uniformAttrib[v324].index];
  if ( *(_QWORD *)v325 != *(_QWORD *)v14->m_HemiLightSkyCol || v325[2] != LODWORD(v14->m_HemiLightSkyCol[2]) )
  {
    *(_QWORD *)v325 = *(_QWORD *)v14->m_HemiLightSkyCol;
    v325[2] = LODWORD(v14->m_HemiLightSkyCol[2]);
    KOFShaderManager::setUniformWriteMask(v265, v324);
  }
  v326 = pShader->m_piGLUniform[45];
  v327 = v265->m_currentProgramSlot;
  *(_OWORD *)v = *(_OWORD *)v14->m_HemiLightGroundCol;
  v328 = v265->m_shaderUniformPtr[v265->m_program[v327].m_linkID][v265->m_program[v327].m_uniformAttrib[v326].index];
  if ( *v328 != *(_OWORD *)v )
  {
    *v328 = *(_OWORD *)v;
    KOFShaderManager::setUniformWriteMask(v265, v326);
  }
  v329 = pShader->m_piGLUniform[46];
  v330 = v265->m_currentProgramSlot;
  *(_OWORD *)v = *(_OWORD *)&v14->m_TranslucencyMultiplier;
  v331 = v265->m_shaderUniformPtr[v265->m_program[v330].m_linkID][v265->m_program[v330].m_uniformAttrib[v329].index];
  if ( *v331 != *(_OWORD *)v )
  {
    *v331 = *(_OWORD *)v;
    KOFShaderManager::setUniformWriteMask(v265, v329);
  }
  v332 = pShader->m_piGLUniform;
  v333 = v14->m_TranslucencyOuterCol[1];
  v[0] = v14->m_TranslucencyOuterCol[0];
  v334 = v332[47];
  v335 = v14->m_TranslucencyOuterCol[2];
  v336 = v265->m_currentProgramSlot;
  v[1] = v333;
  v[2] = v335;
  v[3] = 1.0;
  v337 = v265->m_shaderUniformPtr[v265->m_program[v336].m_linkID][v265->m_program[v336].m_uniformAttrib[v334].index];
  if ( *v337 != *(_OWORD *)v )
  {
    *v337 = *(_OWORD *)v;
    KOFShaderManager::setUniformWriteMask(v265, v334);
  }
  glUniform4fvAG(pShader->m_piGLUniform[48], 1, v14->m_TranslucencyMiddleCol);
  glUniform4fvAG(pShader->m_piGLUniform[49], 1, v14->m_TranslucencyInnerCol);
  m_SpecularMultiplier = v14->m_SpecularMultiplier;
  v339 = pShader->m_piGLUniform[69];
  v340 = (float *)v265->m_shaderUniformPtr[v265->m_program[v265->m_currentProgramSlot].m_linkID][v265->m_program[v265->m_currentProgramSlot].m_uniformAttrib[v339].index];
  if ( m_SpecularMultiplier != *v340 )
  {
    *v340 = m_SpecularMultiplier;
    KOFShaderManager::setUniformWriteMask(v265, v339);
  }
  m_SpecularPower = v14->m_SpecularPower;
  if ( m_SpecularPower == 0.0 )
  {
    m_fShininess = p_m_MaterialLight->m_fShininess;
    v343 = pShader->m_piGLUniform[64];
    v344 = (float *)v265->m_shaderUniformPtr[v265->m_program[v265->m_currentProgramSlot].m_linkID][v265->m_program[v265->m_currentProgramSlot].m_uniformAttrib[v343].index];
    if ( m_fShininess != *v344 )
    {
      *v344 = m_fShininess;
LABEL_209:
      KOFShaderManager::setUniformWriteMask(v265, v343);
    }
  }
  else
  {
    v343 = pShader->m_piGLUniform[64];
    v345 = (float *)v265->m_shaderUniformPtr[v265->m_program[v265->m_currentProgramSlot].m_linkID][v265->m_program[v265->m_currentProgramSlot].m_uniformAttrib[v343].index];
    if ( m_SpecularPower != *v345 )
    {
      *v345 = m_SpecularPower;
      goto LABEL_209;
    }
  }
  m_NormalHeight = v14->m_NormalHeight;
  v347 = pShader->m_piGLUniform[68];
  v348 = (float *)v265->m_shaderUniformPtr[v265->m_program[v265->m_currentProgramSlot].m_linkID][v265->m_program[v265->m_currentProgramSlot].m_uniformAttrib[v347].index];
  if ( m_NormalHeight != *v348 )
  {
    *v348 = m_NormalHeight;
    KOFShaderManager::setUniformWriteMask(v265, v347);
  }
  v349 = pModel->m_uiModeFlg >> 11;
  *(_QWORD *)v439 = 0i64;
  if ( (v349 & 1) == 0 && (v14->m_ucEffectFlg & 0x40000) != 0 && pModel->m_modelFXFlg >= 0 )
  {
    v350 = pShader->m_piGLUniform;
    m_rimLightMax = pModel->m_rimLightMax;
    v439[0] = pModel->m_rimLightMin;
    v352 = v350[42];
    v439[1] = m_rimLightMax;
    glUniform2fvAG(v352, v347, v439);
    v353 = pShader->m_piGLUniform;
    v354 = pModel->m_rimLightColour[1];
    v355 = pModel->m_rimLightColour[2];
    v[0] = pModel->m_rimLightColour[0];
    m_rimLightStrength = pModel->m_rimLightStrength;
    v357 = v353[11];
    v[1] = v354;
    v[2] = v355;
    v[3] = m_rimLightStrength;
    glUniform4fvAG(v357, 1, v);
  }
  v358 = (v14->m_DiffuseFunction != 0 ? 0x80 : 0) | 0x100;
  if ( !v14->m_SpecularFunction )
    v358 = v14->m_DiffuseFunction != 0 ? 0x80 : 0;
  v359 = v358 | 0x40;
  if ( !v14->m_useAnisotropicDirection )
    v359 = v358;
  v360 = pShader->m_piGLUniform[50];
  v361 = v265->m_currentProgramSlot;
  v362 = v265->m_program[v361].m_uniformAttrib[v360].index;
  v363 = v265->m_shaderUniformPtr[v265->m_program[v361].m_linkID];
  if ( *(_QWORD *)v363[v362] != *(_QWORD *)v14->m_anisotropicSpread )
  {
    *(_QWORD *)v363[v362] = *(_QWORD *)v14->m_anisotropicSpread;
    KOFShaderManager::setUniformWriteMask(v265, v360);
  }
  m_secondsElapsedApparent = v442->m_secondsElapsedApparent;
  v365 = pShader->m_piGLUniform[70];
  v366 = (float *)v265->m_shaderUniformPtr[v265->m_program[v265->m_currentProgramSlot].m_linkID][v265->m_program[v265->m_currentProgramSlot].m_uniformAttrib[v365].index];
  if ( m_secondsElapsedApparent != *v366 )
  {
    *v366 = m_secondsElapsedApparent;
    KOFShaderManager::setUniformWriteMask(v265, v365);
  }
  v367 = pShader->m_piGLUniform[168];
  v368 = v265->m_currentProgramSlot;
  v369 = v265->m_program[v368].m_uniformAttrib[v367].index;
  v370 = v265->m_shaderUniformPtr[v265->m_program[v368].m_linkID];
  if ( *(_QWORD *)v370[v369] != *(_QWORD *)v14->m_texturePan1 )
  {
    *(_QWORD *)v370[v369] = *(_QWORD *)v14->m_texturePan1;
    KOFShaderManager::setUniformWriteMask(v265, v367);
  }
  v371 = pShader->m_piGLUniform[169];
  v372 = v265->m_currentProgramSlot;
  v373 = v265->m_program[v372].m_uniformAttrib[v371].index;
  v374 = v265->m_shaderUniformPtr[v265->m_program[v372].m_linkID];
  if ( *(_QWORD *)v374[v373] != *(_QWORD *)v14->m_texturePan2 )
  {
    *(_QWORD *)v374[v373] = *(_QWORD *)v14->m_texturePan2;
    KOFShaderManager::setUniformWriteMask(v265, v371);
  }
  v375 = pShader->m_piGLUniform[167];
  v376 = v265->m_shaderUniformPtr[v265->m_program[v265->m_currentProgramSlot].m_linkID][v265->m_program[v265->m_currentProgramSlot].m_uniformAttrib[v375].index];
  if ( *v376 != *(_QWORD *)v14->m_alphaPan )
  {
    *v376 = *(_QWORD *)v14->m_alphaPan;
    KOFShaderManager::setUniformWriteMask(v265, v375);
  }
  m_fillColourType = pModel->m_fillColourType;
  v378 = pShader->m_piGLUniform[67];
  v379 = (int *)v265->m_shaderUniformPtr[v265->m_program[v265->m_currentProgramSlot].m_linkID][v265->m_program[v265->m_currentProgramSlot].m_uniformAttrib[v378].index];
  if ( m_fillColourType != *v379 )
  {
    *v379 = m_fillColourType;
    KOFShaderManager::setUniformWriteMask(v265, v378);
  }
  v380 = v14->m_fillColourType;
  *(_OWORD *)v = *(_OWORD *)pModel->m_fillColour;
  if ( v380 )
  {
    v381 = pShader->m_piGLUniform[67];
    v382 = (int *)v265->m_shaderUniformPtr[v265->m_program[v265->m_currentProgramSlot].m_linkID][v265->m_program[v265->m_currentProgramSlot].m_uniformAttrib[v381].index];
    if ( v380 != *v382 )
    {
      *v382 = v380;
      KOFShaderManager::setUniformWriteMask(v265, v381);
    }
    *(_OWORD *)v = *(_OWORD *)v14->m_fillColour;
  }
  v383 = pShader->m_piGLUniform[59];
  v384 = v265->m_shaderUniformPtr[v265->m_program[v265->m_currentProgramSlot].m_linkID][v265->m_program[v265->m_currentProgramSlot].m_uniformAttrib[v383].index];
  if ( *v384 != *(_OWORD *)v )
  {
    *v384 = *(_OWORD *)v;
    KOFShaderManager::setUniformWriteMask(v265, v383);
  }
  v385 = v359;
  if ( (EffectFlg & 0x800000) != 0 && *(_BYTE *)(*(_QWORD *)&AppMain::pApp + 2197488i64) )
    v385 = v359 | 4;
  *(_OWORD *)v = 0i64;
  if ( (EffectFlg & 0x8000000) != 0 )
    *(_OWORD *)v = *(_OWORD *)this->m_LightningCol;
  glUniform4fvAG(pShader->m_piGLUniform[60], 1, v);
  m_modelFXFlg = pModel->m_modelFXFlg;
  if ( m_modelFXFlg == -30 || m_modelFXFlg == -40 )
  {
    y = this->m_modelFXShaderSettings[1].fxTexCentre[0].y;
    v[0] = this->m_modelFXShaderSettings[1].fxTexCentre[0].x;
    v388 = this->m_modelFXShaderSettings[1].fxSpeed[0];
  }
  else
  {
    y = this->m_modelFXShaderSettings[0].fxTexCentre[0].y;
    v[0] = this->m_modelFXShaderSettings[0].fxTexCentre[0].x;
    v388 = this->m_modelFXShaderSettings[0].fxSpeed[0];
  }
  v[2] = v388;
  v389 = pShader->m_piGLUniform[56];
  v[1] = y;
  v[3] = (float)m_modelFXFlg;
  glUniform4fvAG(v389, 1, v);
  v390 = pModel->m_modelFXFlg;
  if ( v390 )
  {
    if ( v390 == -30 || v390 == -40 )
    {
      v391 = this->m_modelFXShaderSettings[1].fxTexCentre[1].y;
      v[0] = this->m_modelFXShaderSettings[1].fxTexCentre[1].x;
      v392 = this->m_modelFXShaderSettings[1].fxSpeed[1];
    }
    else
    {
      v391 = this->m_modelFXShaderSettings[0].fxTexCentre[1].y;
      v[0] = this->m_modelFXShaderSettings[0].fxTexCentre[1].x;
      v392 = this->m_modelFXShaderSettings[0].fxSpeed[1];
    }
    v[2] = v392;
    v[1] = v391;
    v[3] = 0.0;
    if ( (unsigned int)(v390 - 10) <= 2 )
      v[3] = pModel->m_modelFXEXStrength;
    glUniform4fvAG(pShader->m_piGLUniform[57], 1, v);
  }
  m_ucEffectFlg = v14->m_ucEffectFlg;
  v394 = v385 | 1;
  m_emissiveMultiplier = v14->m_emissiveMultiplier;
  v439[0] = v14->m_emissiveAddition;
  v396 = pShader->m_piGLUniform;
  if ( (m_ucEffectFlg & 0x2000000) == 0 )
    v394 = v385;
  v439[1] = m_emissiveMultiplier;
  v397 = v394 | 2;
  v56 = (m_ucEffectFlg & 0x10000000) == 0;
  v398 = v396[74];
  if ( v56 )
    v397 = v394;
  v399 = v265->m_shaderUniformPtr[v265->m_program[v265->m_currentProgramSlot].m_linkID][v265->m_program[v265->m_currentProgramSlot].m_uniformAttrib[v398].index];
  if ( *v399 != *(_QWORD *)v439 )
  {
    *v399 = *(_QWORD *)v439;
    KOFShaderManager::setUniformWriteMask(v265, v398);
  }
  m_textureAddPercentage = v14->m_textureAddPercentage;
  v401 = pShader->m_piGLUniform[65];
  v402 = (float *)v265->m_shaderUniformPtr[v265->m_program[v265->m_currentProgramSlot].m_linkID][v265->m_program[v265->m_currentProgramSlot].m_uniformAttrib[v401].index];
  if ( m_textureAddPercentage != *v402 )
  {
    *v402 = m_textureAddPercentage;
    KOFShaderManager::setUniformWriteMask(v265, v401);
  }
  v403 = pShader->m_piGLUniform;
  v404 = v14->m_vertexColAdj[1];
  v[0] = v14->m_vertexColAdj[0];
  v405 = v403[58];
  v406 = v14->m_vertexColAdj[2];
  v407 = v265->m_currentProgramSlot;
  v[1] = v404;
  m_vertexColMult = v14->m_vertexColMult;
  v[2] = v406;
  v[3] = m_vertexColMult;
  v409 = v265->m_shaderUniformPtr[v265->m_program[v407].m_linkID][v265->m_program[v407].m_uniformAttrib[v405].index];
  if ( *v409 != *(_OWORD *)v )
  {
    *v409 = *(_OWORD *)v;
    KOFShaderManager::setUniformWriteMask(v265, v405);
  }
  v410 = pShader->m_piGLUniform;
  v411 = v14->m_vertexCol1Adj[1];
  v[0] = v14->m_vertexCol1Adj[0];
  v412 = v410[170];
  v413 = v14->m_vertexCol1Adj[2];
  v414 = v265->m_currentProgramSlot;
  v[1] = v411;
  v[2] = v413;
  v[3] = 0.0;
  v415 = v265->m_shaderUniformPtr[v265->m_program[v414].m_linkID][v265->m_program[v414].m_uniformAttrib[v412].index];
  if ( *v415 != *(_OWORD *)v )
  {
    *v415 = *(_OWORD *)v;
    KOFShaderManager::setUniformWriteMask(v265, v412);
  }
  m_causticLerp = v14->m_causticLerp;
  v417 = pShader->m_piGLUniform[71];
  v418 = (float *)v265->m_shaderUniformPtr[v265->m_program[v265->m_currentProgramSlot].m_linkID][v265->m_program[v265->m_currentProgramSlot].m_uniformAttrib[v417].index];
  if ( m_causticLerp != *v418 )
  {
    *v418 = m_causticLerp;
    KOFShaderManager::setUniformWriteMask(v265, v417);
  }
  shadLightType = this->m_BkgndShadLightAreaSettings.shadLightType;
  v420 = pShader->m_piGLUniform[62];
  v421 = (int *)v265->m_shaderUniformPtr[v265->m_program[v265->m_currentProgramSlot].m_linkID][v265->m_program[v265->m_currentProgramSlot].m_uniformAttrib[v420].index];
  if ( shadLightType != *v421 )
  {
    *v421 = shadLightType;
    KOFShaderManager::setUniformWriteMask(v265, v420);
  }
  shadLightRadius = this->m_BkgndShadLightAreaSettings.shadLightRadius;
  v423 = pShader->m_piGLUniform[63];
  v424 = (float *)v265->m_shaderUniformPtr[v265->m_program[v265->m_currentProgramSlot].m_linkID][v265->m_program[v265->m_currentProgramSlot].m_uniformAttrib[v423].index];
  if ( shadLightRadius != *v424 )
  {
    *v424 = shadLightRadius;
    KOFShaderManager::setUniformWriteMask(v265, v423);
  }
  v425 = pShader->m_piGLUniform[61];
  v426 = v265->m_currentProgramSlot;
  *(_OWORD *)v = *(_OWORD *)&this->m_BkgndShadLightAreaSettings.shadLightPos.x;
  v427 = v265->m_shaderUniformPtr[v265->m_program[v426].m_linkID][v265->m_program[v426].m_uniformAttrib[v425].index];
  if ( *v427 != *(_OWORD *)v )
  {
    *v427 = *(_OWORD *)v;
    KOFShaderManager::setUniformWriteMask(v265, v425);
  }
  v428 = v397 | 8;
  if ( !v14->m_useMatcap )
    v428 = v397;
  v429 = v428 | 0x10;
  if ( !v14->m_useMatcapMul )
    v429 = v428;
  v430 = v429 | 0x20;
  if ( !v14->m_useEmissiveAlpha )
    v430 = v429;
  v431 = (int *)v265->m_shaderUniformPtr[v265->m_program[v265->m_currentProgramSlot].m_linkID][v265->m_program[v265->m_currentProgramSlot].m_uniformAttrib[73].index];
  if ( v430 != *v431 )
  {
    *v431 = v430;
    v265->m_uniformBufferWriteMask |= 8u;
  }
  m_matcapVal = v14->m_matcapVal;
  v433 = (float *)v265->m_shaderUniformPtr[v265->m_program[v265->m_currentProgramSlot].m_linkID][v265->m_program[v265->m_currentProgramSlot].m_uniformAttrib[53].index];
  if ( m_matcapVal != *v433 )
  {
    *v433 = m_matcapVal;
    v265->m_uniformBufferWriteMask |= 8u;
  }
  m_ambientLightMultiplier = v14->m_ambientLightMultiplier;
  v435 = (float *)v265->m_shaderUniformPtr[v265->m_program[v265->m_currentProgramSlot].m_linkID][v265->m_program[v265->m_currentProgramSlot].m_uniformAttrib[43].index];
  if ( m_ambientLightMultiplier != *v435 )
  {
    *v435 = m_ambientLightMultiplier;
    v265->m_uniformBufferWriteMask |= 8u;
  }
  m_matOpacity = pModel->m_matOpacity;
  LODWORD(modelViewProj) = pShader->m_piGLUniform[75];
  v437 = v265->m_currentProgramSlot;
  modelViewOrthoProj = (OGLMatrix *)v265->m_shaderUniformPtr[v265->m_program[v437].m_linkID];
  v438 = *(float **)&modelViewOrthoProj->m[2 * v265->m_program[v437].m_uniformAttrib[(int)modelViewProj].index];
  if ( m_matOpacity != *v438 )
  {
    *v438 = m_matOpacity;
    KOFShaderManager::setUniformWriteMask(v265, (int)modelViewProj);
  }
LABEL_289:
  if ( (pModel->m_uiModeFlg & 0x200) != 0 )
    glUniformMatrix4fvMatrixClassBoneAG(
      pShader->m_piGLUniform[172],
      (int)modelViewProj,
      (unsigned __int8)modelViewOrthoProj,
      &pModel->m_mPBoneWorld);
}

bool __fastcall OGLRender::shadowOnlyLighting(
        OGLRender *this,
        const OGLMaterial *pMate,
        int *matLights,
        int *worldLights)
{
  OGLLightManager *m_pLightManager; // rax
  int v5; // ebx
  int v7; // edi
  int v8; // edx
  int m_lightCount; // er11
  OGLLightNode *m_pLightNodeList; // r10
  OGLLightNode *v11; // rax
  __int64 v12; // rcx
  unsigned __int8 m_bOn; // cl
  int v14; // eax
  int v15; // er10
  int v16; // edx
  int i; // er8
  OGLLightNode *v18; // rax
  __int64 v19; // rcx

  m_pLightManager = pMate->m_pLightManager;
  v5 = 0;
  v7 = 0;
  v8 = 0;
  m_lightCount = m_pLightManager->m_lightCount;
  if ( m_pLightManager->m_lightCount > 0 )
  {
    m_pLightNodeList = m_pLightManager->m_pLightNodeList;
    do
    {
      if ( !m_pLightNodeList )
        goto LABEL_9;
      v11 = m_pLightNodeList;
      if ( v8 > 0 )
      {
        v12 = (unsigned int)v8;
        do
        {
          v11 = v11->next;
          --v12;
        }
        while ( v12 );
      }
      if ( v11 )
        m_bOn = v11->m_light.m_bOn;
      else
LABEL_9:
        m_bOn = 0;
      ++v8;
      v14 = v7 + 1;
      if ( !m_bOn )
        v14 = v7;
      v7 = v14;
    }
    while ( v8 < m_lightCount );
  }
  v15 = this->m_WorldLightManager.m_lightCount;
  v16 = 0;
  *matLights = v7;
  for ( i = 0; v16 < v15; ++v16 )
  {
    if ( this->m_WorldLightManager.m_pLightNodeList && v16 < v15 )
    {
      v18 = this->m_WorldLightManager.m_pLightNodeList;
      if ( v16 > 0 )
      {
        v19 = (unsigned int)v16;
        do
        {
          v18 = v18->next;
          --v19;
        }
        while ( v19 );
      }
      if ( v18 )
      {
        if ( v18->m_light.m_bOn )
        {
          ++v5;
          if ( v18->m_light.m_fIntensity == 0.0 )
            ++i;
        }
      }
    }
  }
  *worldLights = v5;
  return i == 1 && !v7;
}

