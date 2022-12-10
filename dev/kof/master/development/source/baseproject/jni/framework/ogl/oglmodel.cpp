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
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglvec3.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglquat.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmatrix.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmaterial.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmotion.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/math.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglsecondary.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/pcdummy.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglshader.cpp"

void multiplyDXGL(Matrix4Unaligned * Out, OGLMatrix * In0, OGLMatrix * In1); // 0x1400639A0
void * updatetask(void * ModelClass); // 0x140063BF0
OGLModel::OGLModel(); // 0x140063D80
_OGLModelBone::_OGLModelBone(); // 0x140068AE0
std::_LaunchPad<std::unique_ptr<std::tuple<<lambda_fd381105a0b1a60e3289d5f824c9282b> >,std::default_delete<std::tuple<<lambda_fd381105a0b1a60e3289d5f824c9282b> > > > >::~_LaunchPad<std::unique_ptr<std::tuple<<lambda_fd381105a0b1a60e3289d5f824c9282b> >,std::default_delete<std::tuple<<lambda_fd381105a0b1a60e3289d5f824c9282b> > > > >(); // 0x140078090
OGLModel::~OGLModel(); // 0x140063FD0
_OGLModelBone::~_OGLModelBone(); // 0x1400652F0
void OGLModel::initialize(); // 0x140064050
void OGLModel::finalize(); // 0x140064D60
void OGLModel::createIndex(); // 0x140065320
void OGLModel::createFigureIndex(OGLModel * pModel); // 0x140065960
void OGLModel::createExternalIndex(OGLModel * pModel); // 0x140065AE0
OGLAnimationBone * OGLModel::searchMotionBoneID(long iBoneNo, long * iMotionNo, long * iAniboneNo, unsigned char bParts); // 0x140065E30
void OGLModel::searchMotionBoneIDLight(long iBoneNo, long * iMotionNo, unsigned char bParts); // 0x140066000
long OGLModel::searchBoneFigureToSecondary(long no); // 0x140066160
void OGLModel::copyModel(OGLModel * pModel); // 0x1400661E0
void OGLModel::copyMotion(OGLModel * pModel); // 0x140066350
OGLMatrix * OGLModel::getBoneRot(long boneNo); // 0x140066850
unsigned char OGLModel::getBoneTrans(long boneNo, OGLVec3 * trans, OGLMatrix * posture); // 0x140066880
void OGLModel::getBoneMatrix(OGLMatrix * pOutMat, float * pLen, long boneNo, float fSizeY, float fOffset, OGLMatrix * pBoneMat); // 0x140066AC0
void OGLModel::getBoneMatrix(OGLMatrix * pOutMat, long boneNo, float fOffset, OGLMatrix * pBoneMat, float fSizeY2, OGLVec3 * vLine, float * fLen); // 0x140066F70
void OGLModel::setParent(OGLModel * model, long parentBone, long childBone); // 0x1400674B0
void OGLModel::changeParentMirror(unsigned char bMirror); // 0x140067510
long OGLModel::getBoneNoFromName(const char * boneName, long searchMode); // 0x1400675F0
void OGLModel::setTrans(OGLMatrix * mtx, long boneNo, unsigned char trans); // 0x140067670
void OGLModel::setTransTarget(OGLVec3 * vTargetPos, long boneNo, float fUp, float fDown, float fLeft, float fRight, float fBlend); // 0x140067700
void OGLModel::resetBoneChange(); // 0x140067810
void OGLModel::setFigure(OGLFigure * figure, unsigned char vaoFlg); // 0x1400679D0
void <lambda_fd381105a0b1a60e3289d5f824c9282b>::operator()(); // 0x1400686B0
class OGLModel::setFigure::__l2::<lambda_fd381105a0b1a60e3289d5f824c9282b>
{
public:
	void operator()();
	<lambda_fd381105a0b1a60e3289d5f824c9282b>(OGLModel::setFigure::__l2::<lambda_fd381105a0b1a60e3289d5f824c9282b> &);
	<lambda_fd381105a0b1a60e3289d5f824c9282b>();
	<lambda_fd381105a0b1a60e3289d5f824c9282b>(OGLFigure * &, MeshVertexInfo * &, MeshVertexInfoComp * &);
private:
	OGLFigure * figure; // 0x0
	MeshVertexInfo * outV; // 0x8
	MeshVertexInfoComp * inV; // 0x10
public:
	OGLModel::setFigure::__l2::<lambda_fd381105a0b1a60e3289d5f824c9282b> & operator=(const OGLModel::setFigure::__l2::<lambda_fd381105a0b1a60e3289d5f824c9282b> &);
};
std::piecewise_construct_t std::piecewise_construct; // 0x14088956F
void OGLModel::setOffsetScaleInit(OGLFigure * figure, long index); // 0x140068BA0
unsigned char OGLModel::setMotion(long index); // 0x1400690A0
unsigned char OGLModel::setExternalMotion(OGLModel * pModel, long index); // 0x140069140
unsigned char OGLModel::setTexture(OGLTexture * texture, long index, long index2); // 0x1400691F0
unsigned char OGLModel::setMaterialMap(long type, OGLTexture * texture, long index); // 0x140069250
unsigned char OGLModel::checkMotionMirror(unsigned char * bMirrorFlg); // 0x1400692D0
void OGLModel::syncPosture(); // 0x1400693E0
void OGLModel::updatePosture(OGLMatrix * posture, float blendRate, unsigned char bSync, unsigned long calcTarget); // 0x140069460
void OGLModel::updatePostureExe(OGLMatrix * posture, float blendRate); // 0x1400695E0
void OGLModel::updatePostureSecExe(OGLMatrix * posture, float blendRate); // 0x14006AD10
void OGLModel::updatePostureTPose(OGLMatrix * posture, float blendRate); // 0x14006B010
void OGLModel::setBoneTrans(OGLBone * parent, long iTransSec); // 0x14006B610
class Spline
{
private:
	long num; // 0x0
	double a[21]; // 0x8
	double b[21]; // 0xB0
	double c[21]; // 0x158
	double d[21]; // 0x200
public:
	Spline();
	void init(double *, long);
	double calc(double);
};
void calcSpline(OGLVec3 * pos, double * x, double * y, double * z, long num, float xt, float yt, float zt); // 0x14006BD70
void Spline::init(double * sp, long spnum); // 0x14006BF60
void OGLModel::setBoneForce(long iBoneNo, OGLVec3 vForce, unsigned long opt, float blend); // 0x14006C1F0
unsigned long OGLModel::getSecondaryState(long iBoneNo); // 0x14006C380
void OGLModel::setBoneTransNotSecOnce(long iChildNo, unsigned char bMirror); // 0x14006C3C0
void OGLModel::setBoneTransSecOnce(long iChildNo, unsigned char bMirror); // 0x14006D420
void OGLModel::checkFollowBone(); // 0x140072470
void OGLModel::setFollowBone(const char * followTargetBone, const char * followBone); // 0x140072550
OGLAnimationBone * OGLModel::searchMotionAnibone(long iBoneNo, long * iMotionNo, long * iAniboneNo); // 0x140072630
void OGLModel::searchMotionAniboneLight(long iBoneNo, long * iMotionNo); // 0x1400727C0
long OGLModel::searchMotionBoneFromName(const char * cBoneName); // 0x140072930
long OGLModel::searchMotionBoneFromNameReverse(const char * cBoneName); // 0x1400729D0
long OGLModel::convertBoneMirrorToFigure(long iBoneNo); // 0x140072A70
long OGLModel::convertBoneFigureToMirror(long iBoneNo); // 0x140072B30
long OGLModel::convertBoneFigureToSecondary(long iBoneNo); // 0x140072C00
long OGLModel::convertBoneSecondaryToFigure(long iBoneNo); // 0x140072CF0
long OGLModel::applyPostureNormal(long materialNo, OGLVec3 * pVec3); // 0x140072DD0
void OGLModel::changeUV(OGLMotionData * motion, float frame); // 0x140073140
void OGLModel::changeTilingUV(OGLMotionData * motion, float frame); // 0x1400734C0
void OGLModel::createBaseModelShadow(unsigned char * visible); // 0x1400737C0
void OGLModel::setSecondary(OGLSecondary * secondary); // 0x140073910
void OGLModel::setMotionFrame(float frame, long index); // 0x140073C40
void OGLModel::changeBoneToWorld(); // 0x140073CF0
void OGLModel::setOrthoViewTrans(OGLMatrix * matrix); // 0x140074000
void OGLModel::resetMaterialFillColour(long effectFlg); // 0x140074090
void OGLModel::setBoneTransSecOnceNew(long iChildNo, unsigned char bMirror); // 0x1400740D0
bool OGLModel::checkCreateBuffers(); // 0x140077800
void OGLModel::rebuildVertexBuffer(); // 0x140077CF0
void OGLModel::freeBuffers(bool freeVertexBuffer); // 0x140077D60
void OGLModel::onExecuteThread(); // 0x140077E80
void OGLModel::onJoinThread(); // 0x14002E7C0
long OGLModel::getThreadIsRunning(); // 0x140077EB0//decompilation failure at 14088956F!
void __fastcall std::_Launch<std::unique_ptr<std::tuple<_lambda_fd381105a0b1a60e3289d5f824c9282b_>>>(
        _Thrd_imp_t *_Thr,
        std::unique_ptr<std::tuple<<lambda_fd381105a0b1a60e3289d5f824c9282b> >> *_Tg)
{
  int v4; // eax
  int v5; // ebx
  int v6; // eax
  int v7; // eax
  std::tuple<<lambda_fd381105a0b1a60e3289d5f824c9282b> > *Myval2; // rax
  int v9; // eax
  int v10; // eax
  _Cnd_internal_imp_t *v11; // rdi
  _Mtx_internal_imp_t *v12; // rbx
  int v13; // eax
  void **b; // [rsp+48h] [rbp-30h] BYREF
  _Cnd_internal_imp_t *cond; // [rsp+50h] [rbp-28h] BYREF
  _Mtx_internal_imp_t *mtx; // [rsp+58h] [rbp-20h] BYREF
  char v17; // [rsp+60h] [rbp-18h]
  void *block; // [rsp+68h] [rbp-10h]

  b = &std::_Pad::`vftable';
  v4 = Cnd_init(&cond);
  if ( v4 )
    std::_Throw_C_error(v4);
  v5 = 1;
  v6 = Mtx_init(&mtx, 1);
  if ( v6 )
    std::_Throw_C_error(v6);
  v17 = 0;
  v7 = Mtx_lock(mtx);
  if ( v7 )
    std::_Throw_C_error(v7);
  b = &std::_LaunchPad<std::unique_ptr<std::tuple<_lambda_fd381105a0b1a60e3289d5f824c9282b_>>>::`vftable';
  Myval2 = _Tg->_Mypair._Myval2;
  _Tg->_Mypair._Myval2 = 0i64;
  block = Myval2;
  v9 = Thrd_start(_Thr, (unsigned int (__fastcall *)(void *))std::_Pad::_Call_func, &b);
  if ( v9 != 4 )
    v5 = v9;
  if ( v5 )
    std::_Throw_C_error(v5);
  while ( !v17 )
  {
    v10 = Cnd_wait(cond, mtx);
    if ( v10 )
      std::_Throw_C_error(v10);
  }
  if ( block )
    operator delete(block, 0x18ui64);
  b = &std::_Pad::`vftable';
  v11 = cond;
  v12 = mtx;
  v13 = Mtx_unlock(mtx);
  if ( v13 )
    std::_Throw_C_error(v13);
  Mtx_destroy(v12);
  Cnd_destroy(v11);
}

std::unique_ptr<std::tuple<<lambda_fd381105a0b1a60e3289d5f824c9282b> >> *__fastcall std::make_unique<std::tuple<_lambda_fd381105a0b1a60e3289d5f824c9282b_>,_lambda_fd381105a0b1a60e3289d5f824c9282b_>(
        std::unique_ptr<std::tuple<<lambda_fd381105a0b1a60e3289d5f824c9282b> >> *result,
        OGLModel::setFigure::__l2::<lambda_fd381105a0b1a60e3289d5f824c9282b> *<_Args_0>)
{
  std::tuple<<lambda_fd381105a0b1a60e3289d5f824c9282b> > *v5; // [rsp+40h] [rbp+8h]

  v5 = (std::tuple<<lambda_fd381105a0b1a60e3289d5f824c9282b> > *)operator new(0x18ui64);
  *v5 = *(std::tuple<<lambda_fd381105a0b1a60e3289d5f824c9282b> > *)<_Args_0>;
  result->_Mypair._Myval2 = v5;
  return result;
}

void __fastcall OGLModel::OGLModel(OGLModel *this)
{
  __int64 v2; // rcx
  float *p_z; // rax

  this->__vftable = (OGLModel_vtbl *)&OGLModel::`vftable';
  *(_QWORD *)&this->m_vPosition.x = 0i64;
  *(_QWORD *)&this->m_vPosition.z = 0i64;
  *(_QWORD *)&this->m_vPosition2.y = 0i64;
  *(_QWORD *)&this->m_vCenterPosition.x = 0i64;
  this->m_vCenterPosition.z = 0.0;
  *(_QWORD *)this->m_mWorld.m = 0i64;
  *(_QWORD *)&this->m_mWorld.m[2] = 0i64;
  *(_QWORD *)&this->m_mWorld.m[4] = 0i64;
  *(_QWORD *)&this->m_mWorld.m[6] = 0i64;
  *(_QWORD *)&this->m_mWorld.m[8] = 0i64;
  *(_QWORD *)&this->m_mWorld.m[10] = 0i64;
  *(_QWORD *)&this->m_mWorld.m[12] = 0i64;
  *(_QWORD *)&this->m_mWorld.m[14] = 0i64;
  *(_QWORD *)this->m_mPreWorld.m = 0i64;
  *(_QWORD *)&this->m_mPreWorld.m[2] = 0i64;
  *(_QWORD *)&this->m_mPreWorld.m[4] = 0i64;
  *(_QWORD *)&this->m_mPreWorld.m[6] = 0i64;
  *(_QWORD *)&this->m_mPreWorld.m[8] = 0i64;
  *(_QWORD *)&this->m_mPreWorld.m[10] = 0i64;
  *(_QWORD *)&this->m_mPreWorld.m[12] = 0i64;
  *(_QWORD *)&this->m_mPreWorld.m[14] = 0i64;
  v2 = 12i64;
  p_z = &this->m_SecondaryForce[0].vForce.z;
  do
  {
    *((_QWORD *)p_z - 1) = 0i64;
    *p_z = 0.0;
    p_z += 6;
    --v2;
  }
  while ( v2 );
  *(_QWORD *)this->m_OrthoProj.m = 0i64;
  *(_QWORD *)&this->m_OrthoProj.m[2] = 0i64;
  *(_QWORD *)&this->m_OrthoProj.m[4] = 0i64;
  *(_QWORD *)&this->m_OrthoProj.m[6] = 0i64;
  *(_QWORD *)&this->m_OrthoProj.m[8] = 0i64;
  *(_QWORD *)&this->m_OrthoProj.m[10] = 0i64;
  *(_QWORD *)&this->m_OrthoProj.m[12] = 0i64;
  *(_QWORD *)&this->m_OrthoProj.m[14] = 0i64;
  *(_QWORD *)this->m_OrthoView.m = 0i64;
  *(_QWORD *)&this->m_OrthoView.m[2] = 0i64;
  *(_QWORD *)&this->m_OrthoView.m[4] = 0i64;
  *(_QWORD *)&this->m_OrthoView.m[6] = 0i64;
  *(_QWORD *)&this->m_OrthoView.m[8] = 0i64;
  *(_QWORD *)&this->m_OrthoView.m[10] = 0i64;
  *(_QWORD *)&this->m_OrthoView.m[12] = 0i64;
  *(_QWORD *)&this->m_OrthoView.m[14] = 0i64;
  *(_QWORD *)this->m_mTmpMatrix.m = 0i64;
  *(_QWORD *)&this->m_mTmpMatrix.m[2] = 0i64;
  *(_QWORD *)&this->m_mTmpMatrix.m[4] = 0i64;
  *(_QWORD *)&this->m_mTmpMatrix.m[6] = 0i64;
  *(_QWORD *)&this->m_mTmpMatrix.m[8] = 0i64;
  *(_QWORD *)&this->m_mTmpMatrix.m[10] = 0i64;
  *(_QWORD *)&this->m_mTmpMatrix.m[12] = 0i64;
  *(_QWORD *)&this->m_mTmpMatrix.m[14] = 0i64;
  this->m_threadRunning = 0;
  AgThread::AgThread(&this->m_updateThread, NotRunning);
  InitializeCriticalSection((LPCRITICAL_SECTION)&this->updataCond);
  this->updataCond.m_conditionVariable.m_mutex = &this->updataCond.m_mutex;
  InitializeConditionVariable((PCONDITION_VARIABLE)&this->updataCond.m_conditionVariable.m_data);
  InitializeCriticalSection((LPCRITICAL_SECTION)&this->m_postureReadyCond);
  this->m_postureReadyCond.m_conditionVariable.m_mutex = &this->m_postureReadyCond.m_mutex;
  InitializeConditionVariable((PCONDITION_VARIABLE)&this->m_postureReadyCond.m_conditionVariable.m_data);
  InitializeCriticalSection((LPCRITICAL_SECTION)&this->updateCondMutex);
  InitializeCriticalSection((LPCRITICAL_SECTION)&this->m_postureCondMutex);
  OGLModel::initialize(this);
}

void __fastcall _OGLModelBone::_OGLModelBone(_OGLModelBone *this)
{
  `eh vector constructor iterator'(
    this,
    0x28ui64,
    3ui64,
    (void (__fastcall *)(void *))OGLPrevAnimationBone::OGLPrevAnimationBone,
    (void (__fastcall *)(void *))OGLPrevAnimationBone::~OGLPrevAnimationBone);
  *(_QWORD *)this->mTrans.m = 0i64;
  *(_QWORD *)&this->mTrans.m[2] = 0i64;
  *(_QWORD *)&this->mTrans.m[4] = 0i64;
  *(_QWORD *)&this->mTrans.m[6] = 0i64;
  *(_QWORD *)&this->mTrans.m[8] = 0i64;
  *(_QWORD *)&this->mTrans.m[10] = 0i64;
  *(_QWORD *)&this->mTrans.m[12] = 0i64;
  *(_QWORD *)&this->mTrans.m[14] = 0i64;
  *(_QWORD *)&this->vScale.x = 0i64;
  this->vScale.z = 0.0;
  memset(&this->mRot, 0, 0x80ui64);
  *(_QWORD *)&this->boneTarget.vTargetPos.x = 0i64;
  this->boneTarget.vTargetPos.z = 0.0;
  memset(this->fMotOffRotate, 0, sizeof(this->fMotOffRotate));
}

void __fastcall std::_LaunchPad<std::unique_ptr<std::tuple<_lambda_fd381105a0b1a60e3289d5f824c9282b_>>>::~_LaunchPad<std::unique_ptr<std::tuple<_lambda_fd381105a0b1a60e3289d5f824c9282b_>>>(
        std::_LaunchPad<std::unique_ptr<std::tuple<<lambda_fd381105a0b1a60e3289d5f824c9282b> >> > *this)
{
  std::tuple<<lambda_fd381105a0b1a60e3289d5f824c9282b> > *Myval2; // rcx
  _Cnd_internal_imp_t *Cond; // rdi
  _Mtx_internal_imp_t *Mtx; // rbx
  int v5; // eax

  Myval2 = this->_MyTarget._Mypair._Myval2;
  if ( Myval2 )
    operator delete(Myval2, 0x18ui64);
  this->__vftable = (std::_LaunchPad<std::unique_ptr<std::tuple<<lambda_fd381105a0b1a60e3289d5f824c9282b> >> >_vtbl *)&std::_Pad::`vftable';
  Cond = this->_Cond;
  Mtx = this->_Mtx;
  v5 = Mtx_unlock(Mtx);
  if ( v5 )
    std::_Throw_C_error(v5);
  Mtx_destroy(Mtx);
  Cnd_destroy(Cond);
}

void __fastcall std::unique_ptr<std::tuple<_lambda_fd381105a0b1a60e3289d5f824c9282b_>>::~unique_ptr<std::tuple<_lambda_fd381105a0b1a60e3289d5f824c9282b_>>(
        std::unique_ptr<std::tuple<<lambda_fd381105a0b1a60e3289d5f824c9282b> >> *this)
{
  std::tuple<<lambda_fd381105a0b1a60e3289d5f824c9282b> > *Myval2; // rcx

  Myval2 = this->_Mypair._Myval2;
  if ( Myval2 )
    operator delete(Myval2, 0x18ui64);
}

// attributes: thunk
void __stdcall AgMutex::~AgMutex(LPCRITICAL_SECTION lpCriticalSection)
{
  DeleteCriticalSection(lpCriticalSection);
}

void __fastcall OGLModel::~OGLModel(OGLModel *this)
{
  this->__vftable = (OGLModel_vtbl *)&OGLModel::`vftable';
  OGLModel::finalize(this);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->m_postureCondMutex);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->updateCondMutex);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->m_postureReadyCond);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->updataCond);
  AgThread::~AgThread(&this->m_updateThread);
  this->__vftable = (OGLModel_vtbl *)&AgIThreadHost::`vftable';
}

void __fastcall _OGLModelBone::~_OGLModelBone(_OGLModelBone *this)
{
  `eh vector destructor iterator'(
    this,
    0x28ui64,
    3ui64,
    (void (__fastcall *)(void *))OGLPrevAnimationBone::~OGLPrevAnimationBone);
}

__int64 __fastcall lambda_fd381105a0b1a60e3289d5f824c9282b_::operator()(_QWORD *a1)
{
  int v2; // eax
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // r9
  __int64 v6; // r10
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  unsigned int v10; // ebx
  __int64 v11; // r11
  __int64 v12; // rdi
  int v13; // eax
  int v14; // eax
  __int64 v15; // r9
  __int64 v16; // r10
  int v17; // eax
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // r9
  __int64 v21; // r10
  __int64 v22; // rax
  __int64 v23; // rcx
  int v24; // eax
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // r9
  __int64 v28; // r10
  int v29; // ecx
  __int64 result; // rax
  __int64 v31; // rdx
  __int64 v32; // r10
  __int64 v33; // r9
  __int64 v34; // rdx
  unsigned __int64 v35; // r9
  __int64 v36; // rcx
  __int64 v37; // rcx

  v2 = *(_DWORD *)(*a1 + 16i64);
  if ( v2 )
  {
    v3 = v2 - 1;
    v4 = v3;
    if ( v3 >= 0 )
    {
      v5 = 88i64 * v3;
      v6 = 136i64 * v3;
      do
      {
        --v4;
        v7 = a1[2];
        v8 = a1[1];
        v5 -= 88i64;
        v6 -= 136i64;
        *(_QWORD *)(v8 + v5 + 88) = *(_QWORD *)(v7 + v6 + 136);
        *(_DWORD *)(v8 + v5 + 96) = *(_DWORD *)(v7 + v6 + 144);
      }
      while ( v4 >= 0 );
    }
  }
  v9 = *a1;
  v10 = 0;
  if ( *(_DWORD *)(*a1 + 52i64) )
  {
    v11 = 56i64;
    v12 = 88i64;
    do
    {
      v13 = *(_DWORD *)(v9 + v12);
      if ( v13 )
      {
        v14 = v13 - 1;
        v15 = v14;
        if ( v14 >= 0 )
        {
          v16 = 88i64 * v14;
          do
          {
            if ( v10 )
            {
              switch ( v10 )
              {
                case 1u:
                  *(_DWORD *)(a1[1] + v16 + 64) = *(_DWORD *)(*(_QWORD *)(v11 + *a1) + 8 * v15);
                  *(_DWORD *)(a1[1] + v16 + 68) = *(_DWORD *)(*(_QWORD *)(v11 + *a1) + 8 * v15 + 4);
                  break;
                case 2u:
                  *(_DWORD *)(a1[1] + v16 + 72) = *(_DWORD *)(*(_QWORD *)(v11 + *a1) + 8 * v15);
                  *(_DWORD *)(a1[1] + v16 + 76) = *(_DWORD *)(*(_QWORD *)(v11 + *a1) + 8 * v15 + 4);
                  break;
                case 3u:
                  *(_DWORD *)(a1[1] + v16 + 80) = *(_DWORD *)(*(_QWORD *)(v11 + *a1) + 8 * v15);
                  *(_DWORD *)(a1[1] + v16 + 84) = *(_DWORD *)(*(_QWORD *)(v11 + *a1) + 8 * v15 + 4);
                  break;
              }
            }
            else
            {
              *(_DWORD *)(a1[1] + v16 + 56) = *(_DWORD *)(*(_QWORD *)(v11 + *a1) + 8 * v15);
              *(_DWORD *)(a1[1] + v16 + 60) = *(_DWORD *)(*(_QWORD *)(v11 + *a1) + 8 * v15 + 4);
            }
            v16 -= 88i64;
            --v15;
          }
          while ( v15 >= 0 );
        }
      }
      v9 = *a1;
      ++v10;
      v12 += 4i64;
      v11 += 8i64;
    }
    while ( v10 < *(_DWORD *)(*a1 + 52i64) );
  }
  v17 = *(_DWORD *)(*a1 + 32i64);
  if ( v17 )
  {
    v18 = v17 - 1;
    v19 = v18;
    if ( v18 >= 0 )
    {
      v20 = 88i64 * v18;
      v21 = 136i64 * v18;
      do
      {
        --v19;
        v22 = a1[2];
        v23 = a1[1];
        v20 -= 88i64;
        v21 -= 136i64;
        *(_QWORD *)(v20 + v23 + 100) = *(_QWORD *)(v21 + v22 + 148);
        *(_DWORD *)(v20 + v23 + 108) = *(_DWORD *)(v21 + v22 + 156);
      }
      while ( v19 >= 0 );
    }
  }
  v24 = *(_DWORD *)(*a1 + 216i64);
  if ( v24 )
  {
    v25 = v24 - 1;
    v26 = v25;
    if ( v25 >= 0 )
    {
      v27 = 88i64 * v25;
      v28 = 136i64 * v25;
      do
      {
        --v26;
        v27 -= 88i64;
        v28 -= 136i64;
        *(_OWORD *)(v27 + a1[1] + 112) = *(_OWORD *)(v28 + a1[2] + 160);
      }
      while ( v26 >= 0 );
    }
  }
  v29 = *(_DWORD *)(*a1 + 48i64);
  if ( v29 )
  {
    result = (unsigned int)(v29 - 1);
    v31 = (int)result;
    if ( (int)result >= 0 )
    {
      v32 = 88i64 * (int)result;
      v33 = 16i64 * (int)result;
      do
      {
        --v31;
        v32 -= 88i64;
        v33 -= 16i64;
        result = a1[1];
        *(_OWORD *)(v32 + result + 128) = *(_OWORD *)(*(_QWORD *)(*a1 + 40i64) + v33 + 16);
      }
      while ( v31 >= 0 );
    }
  }
  else
  {
    result = *(unsigned int *)(*a1 + 16i64);
    if ( (_DWORD)result )
    {
      result = (unsigned int)(result - 1);
      v34 = (int)result;
      if ( (int)result >= 0 )
      {
        if ( (int)result + 1i64 >= 4 )
        {
          v35 = (unsigned __int64)((int)result + 1i64) >> 2;
          v36 = 88i64 * (int)result;
          v34 = (int)result - 4 * v35;
          do
          {
            v36 -= 352i64;
            *(_DWORD *)(v36 + a1[1] + 392) = 1065353216;
            *(_DWORD *)(v36 + a1[1] + 396) = 1065353216;
            *(_DWORD *)(v36 + a1[1] + 400) = 1065353216;
            *(_DWORD *)(v36 + a1[1] + 404) = 1065353216;
            *(_DWORD *)(v36 + a1[1] + 304) = 1065353216;
            *(_DWORD *)(v36 + a1[1] + 308) = 1065353216;
            *(_DWORD *)(v36 + a1[1] + 312) = 1065353216;
            *(_DWORD *)(v36 + a1[1] + 316) = 1065353216;
            *(_DWORD *)(v36 + a1[1] + 216) = 1065353216;
            *(_DWORD *)(v36 + a1[1] + 220) = 1065353216;
            *(_DWORD *)(v36 + a1[1] + 224) = 1065353216;
            *(_DWORD *)(v36 + a1[1] + 228) = 1065353216;
            *(_DWORD *)(v36 + a1[1] + 128) = 1065353216;
            *(_DWORD *)(v36 + a1[1] + 132) = 1065353216;
            *(_DWORD *)(v36 + a1[1] + 136) = 1065353216;
            result = a1[1];
            *(_DWORD *)(v36 + result + 140) = 1065353216;
            --v35;
          }
          while ( v35 );
        }
        if ( v34 >= 0 )
        {
          v37 = 88 * v34;
          do
          {
            --v34;
            v37 -= 88i64;
            *(_DWORD *)(v37 + a1[1] + 128) = 1065353216;
            *(_DWORD *)(v37 + a1[1] + 132) = 1065353216;
            *(_DWORD *)(v37 + a1[1] + 136) = 1065353216;
            result = a1[1];
            *(_DWORD *)(v37 + result + 140) = 1065353216;
          }
          while ( v34 >= 0 );
        }
      }
    }
  }
  return result;
}

// attributes: thunk
void __fastcall std::_LaunchPad<std::unique_ptr<std::tuple<_lambda_fd381105a0b1a60e3289d5f824c9282b_>>>::_Go(
        std::_LaunchPad<std::unique_ptr<std::tuple<<lambda_fd381105a0b1a60e3289d5f824c9282b> >> > *this)
{
  std::_LaunchPad<std::unique_ptr<std::tuple<_lambda_fd381105a0b1a60e3289d5f824c9282b_>>>::_Run(this);
}

void __fastcall std::_LaunchPad<std::unique_ptr<std::tuple<_lambda_fd381105a0b1a60e3289d5f824c9282b_>>>::_Run(
        std::_LaunchPad<std::unique_ptr<std::tuple<<lambda_fd381105a0b1a60e3289d5f824c9282b> >> > *_Ln)
{
  std::tuple<<lambda_fd381105a0b1a60e3289d5f824c9282b> > *Myval2; // rdi
  int v3; // eax
  int v4; // eax
  int v5; // eax

  Myval2 = _Ln->_MyTarget._Mypair._Myval2;
  _Ln->_MyTarget._Mypair._Myval2 = 0i64;
  v3 = Mtx_lock(_Ln->_Mtx);
  if ( v3 )
    std::_Throw_C_error(v3);
  _Ln->_Started = 1;
  v4 = Cnd_signal(_Ln->_Cond);
  if ( v4 )
    std::_Throw_C_error(v4);
  v5 = Mtx_unlock(_Ln->_Mtx);
  if ( v5 )
    std::_Throw_C_error(v5);
  lambda_fd381105a0b1a60e3289d5f824c9282b_::operator()(Myval2);
  if ( Myval2 )
    operator delete(Myval2, 0x18ui64);
}

__int64 __fastcall OGLModel::applyPostureNormal(OGLModel *this, int materialNo, OGLVec3 *pVec3)
{
  __int64 result; // rax
  int m_iInfluenceMax; // eax
  OGLShader *v6; // rcx
  OGLFigure *m_pFigure; // rcx
  void *m_pfWorldBuffer; // rbx
  Vector4Unaligned *m_pmBoneWorld; // rdx
  Framework::GLManager *v10; // r14
  size_t v11; // rdi
  __int64 v12; // rdi
  OGLModel *m_pParentModel; // rdx
  OGLMatrix In0; // [rsp+30h] [rbp-48h] BYREF
  unsigned int m_usVertexCoordCount; // [rsp+98h] [rbp+20h] BYREF

  m_usVertexCoordCount = materialNo;
  this->m_iMotionPostureCount = 0;
  OGLModel::checkCreateBuffers(this);
  if ( !this->m_bTrans )
  {
    this->bUseCompute = 0;
    OGLModel::syncPosture(this);
    m_pParentModel = this->m_pParentModel;
    this->m_uiModeFlg |= 0x200u;
    if ( m_pParentModel )
    {
      multiplyDXGL(&this->m_mPBoneWorld, &m_pParentModel->m_pBoneInfo[this->m_iParentBone].mRot, &this->m_mWorld);
      return 0i64;
    }
    if ( this->m_bPostureChange )
    {
      *(_QWORD *)In0.m = 1065353216i64;
      In0.m[4] = 0.0;
      *(_QWORD *)&In0.m[5] = 1065353216i64;
      In0.m[14] = 0.0;
      In0.m[7] = 0.0;
      In0.m[15] = 1.0;
      *(_QWORD *)&In0.m[8] = 0i64;
      *(_QWORD *)&In0.m[12] = 0i64;
      *(_QWORD *)&In0.m[2] = 0i64;
      *(_QWORD *)&In0.m[10] = 1065353216i64;
      multiplyDXGL(&this->m_mPBoneWorld, &In0, &this->m_mWorld);
      this->m_bPostureChange = 0;
    }
    return 0i64;
  }
  if ( (this->m_uiModeFlg & 0x180) == 128 )
  {
    memmove(this->m_pfVertexBuffer, this->m_pfPreVertexBuffer, 88i64 * this->m_pFigure->m_usVertexCoordCount);
    this->m_uiModeFlg |= 0x100u;
    return 0i64;
  }
  if ( !this->m_bChange )
    return 0i64;
  OGLModel::syncPosture(this);
  m_iInfluenceMax = this->m_pFigure->m_iInfluenceMax;
  v6 = *OGLModel::m_ComputeShaderTbl;
  if ( m_iInfluenceMax )
  {
    if ( m_iInfluenceMax >= 4 )
    {
      if ( m_iInfluenceMax < 15 )
        v6 = OGLModel::m_ComputeShaderTbl[m_iInfluenceMax - 2];
    }
    else
    {
      v6 = OGLModel::m_ComputeShaderTbl[1];
    }
  }
  KOFShaderManager::useProgramSlot((KOFShaderManager *)AgSingleton<KOFShaderManager>::ms_instance, v6->m_programSlot);
  OGLModel::changeBoneToWorld(this);
  m_pFigure = this->m_pFigure;
  m_pfWorldBuffer = this->m_pfWorldBuffer;
  m_pmBoneWorld = this->m_pmBoneWorld;
  v10 = Framework::GLManager::glm;
  m_usVertexCoordCount = m_pFigure->m_usVertexCoordCount;
  v11 = 48 * m_pFigure->m_uiBoneCount;
  memmove(m_pfWorldBuffer, m_pmBoneWorld, v11);
  _glewBindBuffer(0x90D2u, this->bonesBuffer);
  _glewBufferData(0x90D2u, v11, m_pfWorldBuffer, 0x88E8u);
  _glewBindBuffer(0x90D2u, 0);
  _glewBindBufferBase(0x90D2u, 2u, this->bonesBuffer);
  _glewBindBuffer(0x90D2u, this->numVerticesBuffer);
  _glewBufferData(0x90D2u, 4i64, &m_usVertexCoordCount, 0x88E8u);
  _glewBindBuffer(0x90D2u, 0);
  _glewBindBufferBase(0x90D2u, 3u, this->numVerticesBuffer);
  v12 = (int)m_usVertexCoordCount;
  _glewBindBufferRange(0x90D2u, 0, this->m_pFigure->vertexBuffer, 0i64, 136i64 * (int)m_usVertexCoordCount);
  _glewBindBufferRange(0x90D2u, 1u, this->vertexBuffer, 0i64, 88 * v12);
  while ( v10->m_bOpenGLBlocked )
    ;
  _glewDispatchCompute(((int)v12 + 63) / 64, 1u, 1u);
  _glewBindBufferBase(0x90D2u, 0, 0);
  _glewBindBufferBase(0x90D2u, 1u, 0);
  _glewBindBufferBase(0x90D2u, 2u, 0);
  result = 1i64;
  this->m_bChange = 0;
  return result;
}

void __fastcall calcSpline(
        OGLVec3 *pos,
        long double *x,
        long double *y,
        long double *z,
        int num,
        float xt,
        float yt,
        float zt)
{
  int v11; // er8
  int v12; // er8
  int v13; // eax
  float v14; // xmm0_4
  int v15; // eax
  float v16; // xmm0_4
  int v17; // eax
  Spline v18; // [rsp+20h] [rbp-848h] BYREF
  Spline v19; // [rsp+2D0h] [rbp-598h] BYREF
  Spline v20; // [rsp+580h] [rbp-2E8h] BYREF

  v18.num = 0;
  v19.num = 0;
  v20.num = 0;
  Spline::init(&v18, x, (int)y);
  Spline::init(&v19, y, v11);
  Spline::init(&v20, z, v12);
  v13 = (int)floor(xt);
  if ( v13 >= 0 )
  {
    if ( v13 >= v18.num )
      v13 = v18.num - 1;
  }
  else
  {
    v13 = 0;
  }
  v14 = (((xt - (double)v13) * v18.d[v13] + v18.c[v13]) * (xt - (double)v13) + v18.b[v13]) * (xt - (double)v13)
      + v18.b[v13 - 21];
  pos->x = v14;
  v15 = (int)floor(yt);
  if ( v15 >= 0 )
  {
    if ( v15 >= v19.num )
      v15 = v19.num - 1;
  }
  else
  {
    v15 = 0;
  }
  v16 = (((yt - (double)v15) * v19.d[v15] + v19.c[v15]) * (yt - (double)v15) + v19.b[v15]) * (yt - (double)v15)
      + v19.b[v15 - 21];
  pos->y = v16;
  v17 = (int)floor(zt);
  if ( v17 >= 0 )
  {
    if ( v17 >= v20.num )
      v17 = v20.num - 1;
  }
  else
  {
    v17 = 0;
  }
  pos->z = (((zt - (double)v17) * v20.d[v17] + v20.c[v17]) * (zt - (double)v17) + v20.b[v17]) * (zt - (double)v17)
         + v20.b[v17 - 21];
}

void __fastcall OGLModel::changeBoneToWorld(OGLModel *this)
{
  signed int v1; // edx
  __int64 v2; // r10
  Vector4Unaligned *v3; // r9
  float *v4; // r8
  float v5; // xmm2_4
  float v6; // xmm0_4
  float v7; // xmm1_4

  v1 = this->m_pFigure->m_uiBoneCount - 1;
  v2 = v1;
  if ( v1 >= 0 )
  {
    v3 = &this->m_pmBoneWorld[3 * v1];
    v4 = &this->m_pBoneInfo[v1].mBone.m[2];
    do
    {
      v3->x = (float)((float)(*(v4 - 1) * this->m_mWorld.m[4]) + (float)(*(v4 - 2) * this->m_mWorld.m[0]))
            - (float)(*v4 * this->m_mWorld.m[8]);
      v3[1].x = (float)((float)(*(v4 - 1) * this->m_mWorld.m[5]) + (float)(*(v4 - 2) * this->m_mWorld.m[1]))
              - (float)(this->m_mWorld.m[9] * *v4);
      v3[2].x = (float)((float)(*(v4 - 1) * this->m_mWorld.m[6]) + (float)(*(v4 - 2) * this->m_mWorld.m[2]))
              - (float)(this->m_mWorld.m[10] * *v4);
      v3->y = (float)((float)(v4[3] * this->m_mWorld.m[4]) + (float)(v4[2] * this->m_mWorld.m[0]))
            - (float)(v4[4] * this->m_mWorld.m[8]);
      v3[1].y = (float)((float)(v4[3] * this->m_mWorld.m[5]) + (float)(v4[2] * this->m_mWorld.m[1]))
              - (float)(v4[4] * this->m_mWorld.m[9]);
      v3[2].y = (float)((float)(v4[3] * this->m_mWorld.m[6]) + (float)(v4[2] * this->m_mWorld.m[2]))
              - (float)(v4[4] * this->m_mWorld.m[10]);
      v3->z = (float)((float)(v4[7] * this->m_mWorld.m[4]) + (float)(v4[6] * this->m_mWorld.m[0]))
            - (float)(v4[8] * this->m_mWorld.m[8]);
      v3[1].z = (float)((float)(v4[7] * this->m_mWorld.m[5]) + (float)(v4[6] * this->m_mWorld.m[1]))
              - (float)(v4[8] * this->m_mWorld.m[9]);
      v3[2].z = (float)((float)(v4[7] * this->m_mWorld.m[6]) + (float)(v4[6] * this->m_mWorld.m[2]))
              - (float)(v4[8] * this->m_mWorld.m[10]);
      v3->w = (float)((float)((float)(v4[11] * this->m_mWorld.m[4]) + (float)(v4[10] * this->m_mWorld.m[0]))
                    - (float)(v4[12] * this->m_mWorld.m[8]))
            + this->m_mWorld.m[12];
      v3[1].w = (float)((float)((float)(v4[11] * this->m_mWorld.m[5]) + (float)(v4[10] * this->m_mWorld.m[1]))
                      - (float)(v4[12] * this->m_mWorld.m[9]))
              + this->m_mWorld.m[13];
      v5 = v4[11];
      v6 = v4[10];
      v7 = v4[12];
      v4 -= 134;
      v3[2].w = (float)((float)((float)(v5 * this->m_mWorld.m[6]) + (float)(v6 * this->m_mWorld.m[2]))
                      - (float)(v7 * this->m_mWorld.m[10]))
              + this->m_mWorld.m[14];
      v3 -= 3;
      --v2;
    }
    while ( v2 >= 0 );
  }
}

void __fastcall OGLModel::changeParentMirror(OGLModel *this, unsigned __int8 bMirror)
{
  OGLModel *m_pParentModel; // rsi
  __int64 m_iParentBoneDef; // rbx
  int *m_iMirrorBoneIdx; // rcx
  int v6; // ecx
  __int64 boneID; // r8
  int *m_iMirrorBoneRIdx; // rcx

  m_pParentModel = this->m_pParentModel;
  if ( m_pParentModel )
  {
    if ( this->m_pmParentPosture )
    {
      m_iParentBoneDef = this->m_iParentBoneDef;
      if ( (int)m_iParentBoneDef >= 0 )
      {
        if ( bMirror )
        {
          m_iMirrorBoneIdx = m_pParentModel->m_iMirrorBoneIdx;
          if ( m_iMirrorBoneIdx )
            v6 = m_iMirrorBoneIdx[m_iParentBoneDef];
          else
            v6 = OGLModel::convertBoneFigureToMirror(m_pParentModel, m_iParentBoneDef);
          if ( v6 >= 0 )
          {
            boneID = m_pParentModel->m_pMirror->m_MirrorData[v6].boneID;
            if ( (int)boneID >= 0 )
            {
              m_iMirrorBoneRIdx = m_pParentModel->m_iMirrorBoneRIdx;
              if ( !m_iMirrorBoneRIdx )
              {
                this->m_iParentBone = OGLModel::convertBoneMirrorToFigure(m_pParentModel, boneID);
                return;
              }
              LODWORD(m_iParentBoneDef) = m_iMirrorBoneRIdx[boneID];
            }
          }
          this->m_iParentBone = m_iParentBoneDef;
        }
        else
        {
          this->m_iParentBone = m_iParentBoneDef;
        }
      }
    }
  }
}

void __fastcall OGLModel::changeTilingUV(OGLModel *this, OGLMotionData *motion, float frame)
{
  __int64 m_iKeyUvCount; // r10
  int v4; // er9
  OGLKeyUV *m_pKeyUv; // r11
  __int64 v7; // rdx
  char *m_pfVertexBuffer; // r12
  float *v9; // r8
  float *p_m_fFrame; // rax
  int v11; // ecx
  OGLFigure *m_pFigure; // rax
  signed int v13; // er13
  OGLKeyUV *v14; // rsi
  __int64 v15; // rbp
  int v16; // er11
  OGLMaterial *m_pMaterial; // r14
  __int64 v18; // r10
  OGLUVData *m_pUvData; // rdx
  float Scal; // xmm2_4
  float x; // xmm3_4
  float y; // xmm4_4
  int v23; // ebx
  float *v24; // rdi
  OGLFigure *v25; // r8
  float *v26; // r9
  int v27; // edx
  float v28; // xmm1_4
  int v29; // edx
  float v30; // xmm1_4
  int v31; // edx
  float v32; // xmm1_4
  unsigned int vertexBuffer; // edx

  m_iKeyUvCount = motion->m_iKeyUvCount;
  v4 = 0;
  m_pKeyUv = motion->m_pKeyUv;
  v7 = 0i64;
  m_pfVertexBuffer = (char *)this->m_pfVertexBuffer;
  if ( m_iKeyUvCount < 4 )
  {
LABEL_8:
    if ( v7 < m_iKeyUvCount )
    {
      p_m_fFrame = &m_pKeyUv[v7].m_fFrame;
      do
      {
        if ( *p_m_fFrame > frame )
          break;
        ++v4;
        ++v7;
        p_m_fFrame += 4;
      }
      while ( v7 < m_iKeyUvCount );
    }
  }
  else
  {
    v9 = &m_pKeyUv[2].m_fFrame;
    while ( *(v9 - 8) <= frame )
    {
      if ( *(v9 - 4) > frame )
      {
        ++v4;
        break;
      }
      if ( *v9 > frame )
      {
        v4 += 2;
        break;
      }
      if ( v9[4] > frame )
      {
        v4 += 3;
        break;
      }
      v4 += 4;
      v7 += 4i64;
      v9 += 16;
      if ( v7 >= m_iKeyUvCount - 3 )
        goto LABEL_8;
    }
  }
  v11 = 0;
  if ( v4 )
    v11 = v4 - 1;
  m_pFigure = this->m_pFigure;
  v13 = 0;
  v14 = &m_pKeyUv[v11];
  if ( (int)m_pFigure->m_uiMultiUvCount > 0 )
  {
    v15 = 0i64;
    do
    {
      v16 = 0;
      if ( v14->m_iUvCount > 0 )
      {
        m_pMaterial = this->m_pMaterial;
        v18 = 0i64;
        do
        {
          m_pUvData = v14->m_pUvData;
          Scal = m_pUvData[v18].Scal;
          x = m_pUvData[v18].uv.x;
          y = m_pUvData[v18].uv.y;
          v23 = m_pUvData[v18].Index + m_pMaterial[m_pUvData[v18].Material].m_usIndex;
          if ( !v15 )
          {
            v24 = (float *)&m_pfVertexBuffer[88 * ((__int64)v16 >> 1) + 56];
            if ( v24 )
            {
              v25 = this->m_pFigure;
              v26 = v25->m_pfTexCoord[0];
              v27 = 2 * v25->m_pusIndex[v23];
              v28 = (float)(v26[v27 + 1] * Scal) + y;
              *v24 = (float)(Scal * v26[v27]) + x;
              v24[1] = v28;
              v29 = 2 * v25->m_pusIndex[v23 + 1];
              v30 = (float)(v26[v29 + 1] * Scal) + y;
              *v24 = (float)(Scal * v26[v29]) + x;
              v24[1] = v30;
              v31 = 2 * v25->m_pusIndex[v23 + 2];
              v32 = (float)(v26[v31 + 1] * Scal) + y;
              *v24 = (float)(Scal * v26[v31]) + x;
              v24[1] = v32;
            }
          }
          ++v16;
          ++v18;
        }
        while ( v16 < v14->m_iUvCount );
        m_pFigure = this->m_pFigure;
      }
      ++v13;
      ++v15;
    }
    while ( v13 < (signed int)m_pFigure->m_uiMultiUvCount );
  }
  if ( !OGLModel::checkCreateBuffers(this) )
  {
    vertexBuffer = this->vertexBuffer;
    if ( vertexBuffer )
    {
      if ( this->m_pFigure )
      {
        _glewBindBuffer(0x8892u, vertexBuffer);
        _glewBufferData(0x8892u, 88i64 * this->m_pFigure->m_usVertexCoordCount, this->m_pfVertexBuffer, 0x88E4u);
        _glewBindBuffer(0x8892u, 0);
      }
    }
  }
}

void __fastcall OGLModel::changeUV(OGLModel *this, OGLMotionData *motion, float frame)
{
  __int64 m_iKeyUvCount; // r10
  char *m_pfVertexBuffer; // rdi
  signed int v6; // er12
  int v7; // er9
  OGLKeyUV *m_pKeyUv; // r15
  __int64 v9; // rdx
  float *v10; // r8
  float *p_m_fFrame; // rax
  int v12; // ecx
  OGLFigure *m_pFigure; // rax
  __int64 v14; // rbp
  int v15; // er10
  OGLMaterial *m_pMaterial; // r8
  __int64 v17; // r11
  __int64 v18; // r9
  OGLUVData *m_pUvData; // rdx
  float Scal; // xmm3_4
  float x; // xmm4_4
  float y; // xmm5_4
  int v23; // ebx
  float *v24; // r8
  OGLFigure *v25; // rsi
  float *v26; // rdi
  int v27; // edx
  float v28; // xmm2_4
  float v29; // xmm1_4
  int v30; // edx
  float v31; // xmm2_4
  float v32; // xmm1_4
  int v33; // edx
  float v34; // xmm2_4
  float v35; // xmm1_4
  unsigned int vertexBuffer; // edx

  m_iKeyUvCount = motion->m_iKeyUvCount;
  m_pfVertexBuffer = (char *)this->m_pfVertexBuffer;
  v6 = 0;
  v7 = 0;
  m_pKeyUv = motion->m_pKeyUv;
  v9 = 0i64;
  if ( m_iKeyUvCount < 4 )
  {
LABEL_8:
    if ( v9 < m_iKeyUvCount )
    {
      p_m_fFrame = &m_pKeyUv[v9].m_fFrame;
      do
      {
        if ( *p_m_fFrame > frame )
          break;
        ++v7;
        ++v9;
        p_m_fFrame += 4;
      }
      while ( v9 < m_iKeyUvCount );
    }
  }
  else
  {
    v10 = &m_pKeyUv[2].m_fFrame;
    while ( *(v10 - 8) <= frame )
    {
      if ( *(v10 - 4) > frame )
      {
        ++v7;
        break;
      }
      if ( *v10 > frame )
      {
        v7 += 2;
        break;
      }
      if ( v10[4] > frame )
      {
        v7 += 3;
        break;
      }
      v7 += 4;
      v9 += 4i64;
      v10 += 16;
      if ( v9 >= m_iKeyUvCount - 3 )
        goto LABEL_8;
    }
  }
  if ( (int)this->m_pFigure->m_uiMultiUvCount > 0 )
  {
    v12 = 0;
    if ( v7 )
      v12 = v7 - 1;
    m_pFigure = this->m_pFigure;
    v14 = 0i64;
    do
    {
      v15 = m_pKeyUv[v12].m_iUvCount - 1;
      if ( v15 >= 0 )
      {
        m_pMaterial = this->m_pMaterial;
        v17 = v15;
        v18 = v15;
        do
        {
          m_pUvData = m_pKeyUv[v12].m_pUvData;
          Scal = m_pUvData[v18].Scal;
          x = m_pUvData[v18].uv.x;
          y = m_pUvData[v18].uv.y;
          v23 = m_pUvData[v18].Index + m_pMaterial[m_pUvData[v18].Material].m_usIndex;
          if ( !v14 )
          {
            v24 = (float *)&m_pfVertexBuffer[88 * (v17 >> 1) + 56];
            if ( v24 )
            {
              v25 = this->m_pFigure;
              v26 = v25->m_pfTexCoord[0];
              v27 = 2 * v25->m_pusIndex[v23];
              v28 = (float)(Scal * v26[v27]) + x;
              v29 = (float)(v26[v27 + 1] * Scal) + y;
              v24[1] = v29;
              *v24 = v28;
              if ( v28 > 1.0 )
                *v24 = v28 - 1.0;
              if ( v29 > 1.0 )
                v24[1] = v29 - 1.0;
              v30 = 2 * v25->m_pusIndex[v23 + 1];
              v31 = (float)(Scal * v26[v30]) + x;
              v32 = (float)(v26[v30 + 1] * Scal) + y;
              v24[1] = v32;
              *v24 = v31;
              if ( v31 > 1.0 )
                *v24 = v31 - 1.0;
              if ( v32 > 1.0 )
                v24[1] = v32 - 1.0;
              v33 = 2 * v25->m_pusIndex[v23 + 2];
              v34 = (float)(Scal * v26[v33]) + x;
              v35 = (float)(v26[v33 + 1] * Scal) + y;
              v24[1] = v35;
              *v24 = v34;
              if ( v34 > 1.0 )
                *v24 = v34 - 1.0;
              m_pfVertexBuffer = (char *)this->m_pfVertexBuffer;
              if ( v35 > 1.0 )
                v24[1] = v35 - 1.0;
            }
            m_pMaterial = this->m_pMaterial;
          }
          --v17;
          --v18;
          --v15;
        }
        while ( v15 >= 0 );
        m_pFigure = this->m_pFigure;
      }
      ++v6;
      ++v14;
    }
    while ( v6 < (signed int)m_pFigure->m_uiMultiUvCount );
  }
  if ( !OGLModel::checkCreateBuffers(this) )
  {
    vertexBuffer = this->vertexBuffer;
    if ( vertexBuffer )
    {
      if ( this->m_pFigure )
      {
        _glewBindBuffer(0x8892u, vertexBuffer);
        _glewBufferData(0x8892u, 88i64 * this->m_pFigure->m_usVertexCoordCount, this->m_pfVertexBuffer, 0x88E4u);
        _glewBindBuffer(0x8892u, 0);
      }
    }
  }
}

char __fastcall OGLModel::checkCreateBuffers(OGLModel *this)
{
  OGLModel::CreateBuffersRequest m_createBuffersReq; // ecx
  __int32 v3; // ecx
  Framework::GLManager *v4; // r13
  _DWORD *v5; // rdi
  AgPointer<AgDisplay> *v6; // rax
  unsigned int *v7; // rax
  signed int v8; // ebp
  __int64 v9; // rsi
  __int64 v10; // r14
  OGLMaterial *v11; // rdi
  __int64 v12; // rbx
  _DWORD *v13; // rdi
  _DWORD *v14; // rdi
  AgPointer<AgDisplay> *DisplayByIndex; // rax
  unsigned __int64 m_ucMaterialCount; // rcx
  unsigned int *v17; // rax
  signed int v18; // ebp
  __int64 v19; // rsi
  __int64 v20; // r14
  OGLMaterial *m_pMaterial; // rdi
  AgPointer<AgDisplay> *v22; // rax
  bool v23; // r8
  int v24; // edx
  AgPointer<AgDisplay> result; // [rsp+28h] [rbp-30h] BYREF

  m_createBuffersReq = this->m_createBuffersReq;
  if ( m_createBuffersReq )
  {
    v3 = m_createBuffersReq - 1;
    if ( !v3 )
    {
      v4 = Framework::GLManager::glm;
      if ( v4->mainGraphicsPthread != Concurrency::details::platform::GetCurrentThreadId() )
      {
        v14 = (_DWORD *)(*(_QWORD *)NtCurrentTeb()->Reserved1[11] + 12i64);
        if ( !*v14 )
        {
          DisplayByIndex = AgDisplayManager::getDisplayByIndex(
                             (AgDisplayManager *)AgSingleton<AgDisplayManager>::ms_instance,
                             &result,
                             0);
          AgDisplay::lock(DisplayByIndex->m_ptr);
          AgPointer<AgDisplay>::~AgPointer<AgDisplay>(&result);
          *v14 = 1;
        }
      }
      this->m_bVaoFlg = 1;
      OGLModel::freeBuffers(this, this->m_ownsVertexBuffer != 0);
      this->m_ownsVertexBuffer = 0;
      this->vertexBuffer = this->m_pFigure->vertexBuffer;
      _glewGenVertexArrays(1, &this->m_iVaoID);
      _glewBindVertexArray(this->m_iVaoID);
      m_ucMaterialCount = this->m_pFigure->m_ucMaterialCount;
      if ( (_DWORD)m_ucMaterialCount )
      {
        v17 = (unsigned int *)operator new[](saturated_mul(m_ucMaterialCount, 4ui64));
        this->indexBuffer = v17;
        _glewGenBuffers(this->m_pFigure->m_ucMaterialCount, v17);
        v18 = 0;
        if ( (int)this->m_pFigure->m_ucMaterialCount > 0 )
        {
          v19 = 0i64;
          v20 = 0i64;
          do
          {
            m_pMaterial = this->m_pFigure->m_pMaterial;
            _glewBindBuffer(0x8893u, this->indexBuffer[v19]);
            _glewBufferData(0x8893u, 4i64 * m_pMaterial[v20].m_usIndexCount, m_pMaterial[v20].m_psIndex, 0x88E4u);
            ++v18;
            ++v20;
            ++v19;
          }
          while ( v18 < (signed int)this->m_pFigure->m_ucMaterialCount );
        }
        _glewBindBuffer(0x8893u, 0);
      }
      _glewBindVertexArray(0);
      this->m_createBuffersReq = CreateBuffersRequest_None;
      if ( v4->mainGraphicsPthread == Concurrency::details::platform::GetCurrentThreadId() )
        return 1;
      v12 = *(_QWORD *)NtCurrentTeb()->Reserved1[11];
      v13 = (_DWORD *)(v12 + 12);
      if ( !*(_DWORD *)(v12 + 12) )
        return 1;
LABEL_23:
      v22 = AgDisplayManager::getDisplayByIndex(
              (AgDisplayManager *)AgSingleton<AgDisplayManager>::ms_instance,
              &result,
              0);
      AgDisplay::unlock(v22->m_ptr);
      AgPointer<AgDisplay>::~AgPointer<AgDisplay>(&result);
      *v13 = 0;
      v24 = *(_DWORD *)(v12 + 8);
      if ( v24 > 0 )
        Framework::GLManager::LoadingLock(v4, v24 - 1, v23);
      return 1;
    }
    if ( v3 == 1 )
    {
      v4 = Framework::GLManager::glm;
      if ( v4->mainGraphicsPthread != Concurrency::details::platform::GetCurrentThreadId() )
      {
        v5 = (_DWORD *)(*(_QWORD *)NtCurrentTeb()->Reserved1[11] + 12i64);
        if ( !*v5 )
        {
          v6 = AgDisplayManager::getDisplayByIndex(
                 (AgDisplayManager *)AgSingleton<AgDisplayManager>::ms_instance,
                 &result,
                 0);
          AgDisplay::lock(v6->m_ptr);
          AgPointer<AgDisplay>::~AgPointer<AgDisplay>(&result);
          *v5 = 1;
        }
      }
      this->m_bVaoFlg = 1;
      OGLModel::freeBuffers(this, this->m_ownsVertexBuffer != 0);
      this->m_ownsVertexBuffer = 1;
      _glewGenBuffers(1, &this->vertexBuffer);
      _glewBindBuffer(0x8892u, this->vertexBuffer);
      _glewBufferData(0x8892u, 88i64 * this->m_pFigure->m_usVertexCoordCount, this->m_pfVertexBuffer, 0x88EAu);
      _glewGenBuffers(1, &this->bonesBuffer);
      _glewBindBuffer(0x8892u, this->bonesBuffer);
      _glewBufferData(0x8892u, 48i64 * this->m_pFigure->m_uiBoneCount, this->m_pfWorldBuffer, 0x88E8u);
      _glewGenBuffers(1, &this->numVerticesBuffer);
      _glewBindBuffer(0x8892u, 0);
      _glewGenVertexArrays(1, &this->m_iVaoID);
      _glewBindVertexArray(this->m_iVaoID);
      v7 = (unsigned int *)operator new[](saturated_mul(this->m_pFigure->m_ucMaterialCount, 4ui64));
      this->indexBuffer = v7;
      _glewGenBuffers(this->m_pFigure->m_ucMaterialCount, v7);
      v8 = 0;
      if ( (int)this->m_pFigure->m_ucMaterialCount > 0 )
      {
        v9 = 0i64;
        v10 = 0i64;
        do
        {
          v11 = this->m_pFigure->m_pMaterial;
          _glewBindBuffer(0x8893u, this->indexBuffer[v9]);
          _glewBufferData(0x8893u, 4i64 * v11[v10].m_usIndexCount, v11[v10].m_psIndex, 0x88E4u);
          ++v8;
          ++v10;
          ++v9;
        }
        while ( v8 < (signed int)this->m_pFigure->m_ucMaterialCount );
      }
      _glewBindBuffer(0x8893u, 0);
      _glewBindVertexArray(0);
      this->m_createBuffersReq = CreateBuffersRequest_None;
      if ( v4->mainGraphicsPthread == Concurrency::details::platform::GetCurrentThreadId() )
        return 1;
      v12 = *(_QWORD *)NtCurrentTeb()->Reserved1[11];
      v13 = (_DWORD *)(v12 + 12);
      if ( !*(_DWORD *)(v12 + 12) )
        return 1;
      goto LABEL_23;
    }
  }
  return 0;
}

void __fastcall OGLModel::checkFollowBone(OGLModel *this)
{
  char *m_cFollowBone; // rdx
  int v3; // eax
  __int64 v4; // rsi
  int v5; // eax
  _OGLModelBone *m_pBoneInfo; // r8
  __int64 v7; // rcx
  float v8; // xmm1_4
  float v9; // xmm0_4
  float v10; // xmm0_4

  m_cFollowBone = this->m_cFollowBone;
  if ( m_cFollowBone )
  {
    if ( this->m_cFollowTargetBone )
    {
      v3 = OGLModel::searchMotionBoneFromNameReverse(this, m_cFollowBone);
      v4 = v3;
      if ( v3 >= 0 )
      {
        v5 = OGLModel::searchMotionBoneFromName(this, this->m_cFollowTargetBone);
        if ( v5 >= 0 )
        {
          m_pBoneInfo = this->m_pBoneInfo;
          v7 = v5;
          v8 = m_pBoneInfo[v7].mRot.m[13];
          m_pBoneInfo[v7].mRot.m[12] = m_pBoneInfo[v7].mRot.m[12] - m_pBoneInfo[v4].mRot.m[12];
          v9 = m_pBoneInfo[v7].mRot.m[14];
          m_pBoneInfo[v7].mRot.m[13] = v8 - m_pBoneInfo[v4].mRot.m[13];
          v10 = v9 - m_pBoneInfo[v4].mRot.m[14];
          m_pBoneInfo[v7].mRot.m[15] = 1.0;
          m_pBoneInfo[v7].mRot.m[14] = v10;
        }
      }
    }
  }
}

unsigned __int8 __fastcall OGLModel::checkMotionMirror(OGLModel *this, unsigned __int8 *bMirrorFlg)
{
  OGLMotion *v3; // r8
  __int64 v4; // rdx
  OGLMirror *m_pMirror; // rax
  int *m_iMotionIndex; // r10
  __int64 v8; // rbx
  OGLMotion **m_pMotion; // r9
  unsigned __int8 *v10; // r8
  __int64 v11; // rdx
  OGLMirror *v12; // rax

  if ( !bMirrorFlg )
  {
    v3 = this->m_pMotion[0];
    if ( v3 )
    {
      v4 = this->m_iMotionIndex[0];
      if ( (int)v4 >= 0 )
      {
        m_pMirror = this->m_pMirror;
        if ( m_pMirror )
        {
          if ( m_pMirror->m_MirrorData )
          {
            if ( (v3->m_ppMotionData[v4]->m_uiInfoFlg & 1) != 0 )
            {
              if ( !this->m_MirrorEnable && (this->m_uiModeFlg & 8) == 0 )
                return 1;
            }
            else if ( this->m_MirrorEnable || (this->m_uiModeFlg & 8) != 0 )
            {
              return 1;
            }
          }
        }
      }
    }
    return 0;
  }
  m_iMotionIndex = this->m_iMotionIndex;
  v8 = 5i64;
  m_pMotion = this->m_pMotion;
  v10 = bMirrorFlg;
  do
  {
    *v10 = 0;
    if ( *m_pMotion )
    {
      v11 = *m_iMotionIndex;
      if ( (int)v11 >= 0 )
      {
        v12 = this->m_pMirror;
        if ( v12 )
        {
          if ( v12->m_MirrorData )
          {
            if ( ((*m_pMotion)->m_ppMotionData[v11]->m_uiInfoFlg & 1) != 0 )
            {
              if ( !this->m_MirrorEnable && (this->m_uiModeFlg & 8) == 0 )
                goto LABEL_24;
            }
            else if ( this->m_MirrorEnable || (this->m_uiModeFlg & 8) != 0 )
            {
LABEL_24:
              *v10 = 1;
            }
          }
        }
      }
    }
    ++m_pMotion;
    ++m_iMotionIndex;
    ++v10;
    --v8;
  }
  while ( v8 );
  return *bMirrorFlg;
}

__int64 __fastcall OGLModel::convertBoneFigureToMirror(OGLModel *this, int iBoneNo)
{
  OGLFigure *m_pFigure; // r9
  OGLMirror *m_pMirror; // r8
  unsigned int m_uiBoneCount; // er10
  unsigned __int8 *m_cName; // rbx
  int v7; // er10
  unsigned __int8 **m_cBoneName; // r11
  __int64 v9; // r9
  unsigned __int8 *v10; // rax
  signed __int64 v11; // r8
  int v12; // ecx
  int v13; // edx

  m_pFigure = this->m_pFigure;
  if ( !m_pFigure )
    return (unsigned int)iBoneNo;
  m_pMirror = this->m_pMirror;
  if ( !m_pMirror )
    return (unsigned int)iBoneNo;
  if ( iBoneNo < 0 )
    return (unsigned int)iBoneNo;
  if ( !m_pFigure->m_uiBoneCount )
    return (unsigned int)iBoneNo;
  m_uiBoneCount = m_pMirror->m_uiBoneCount;
  if ( !m_uiBoneCount )
    return (unsigned int)iBoneNo;
  m_cName = m_pFigure->m_pBone[iBoneNo].m_cName;
  if ( !m_cName )
    return (unsigned int)iBoneNo;
  v7 = m_uiBoneCount - 1;
  if ( v7 < 0 )
    return 0xFFFFFFFFi64;
  m_cBoneName = m_pMirror->m_cBoneName;
  v9 = v7;
  while ( 1 )
  {
    v10 = m_cBoneName[v9];
    if ( v10 )
    {
      v11 = m_cName - v10;
      do
      {
        v12 = v10[v11];
        v13 = *v10 - v12;
        if ( v13 )
          break;
        ++v10;
      }
      while ( v12 );
      if ( !v13 )
        break;
    }
    --v7;
    if ( --v9 < 0 )
      return 0xFFFFFFFFi64;
  }
  return (unsigned int)v7;
}

__int64 __fastcall OGLModel::convertBoneFigureToSecondary(OGLModel *this, int iBoneNo)
{
  OGLFigure *m_pFigure; // r11
  OGLSecondary *m_pSecondary; // rax
  int m_uiBoneListCount; // ecx
  unsigned int v5; // er10
  unsigned __int8 **m_cBoneName; // rdi
  __int64 v7; // rbx
  __int64 v8; // r9
  __int64 v9; // rsi
  unsigned __int8 *v10; // rax
  signed __int64 v11; // r8
  int v12; // ecx
  int v13; // edx

  m_pFigure = this->m_pFigure;
  if ( !m_pFigure )
    return 0xFFFFFFFFi64;
  m_pSecondary = this->m_pSecondary;
  if ( !m_pSecondary )
    return 0xFFFFFFFFi64;
  if ( iBoneNo < 0 )
    return 0xFFFFFFFFi64;
  if ( !m_pFigure->m_uiBoneCount )
    return 0xFFFFFFFFi64;
  m_uiBoneListCount = m_pSecondary->m_uiBoneListCount;
  if ( !m_uiBoneListCount )
    return 0xFFFFFFFFi64;
  v5 = 0;
  if ( m_uiBoneListCount <= 0 )
    return 0xFFFFFFFFi64;
  m_cBoneName = m_pSecondary->m_cBoneName;
  v7 = (int)m_pSecondary->m_uiBoneListCount;
  v8 = 0i64;
  v9 = iBoneNo;
  while ( 1 )
  {
    v10 = m_cBoneName[v8];
    if ( v10 )
    {
      v11 = m_pFigure->m_pBone[v9].m_cName - v10;
      do
      {
        v12 = v10[v11];
        v13 = *v10 - v12;
        if ( v13 )
          break;
        ++v10;
      }
      while ( v12 );
      if ( !v13 )
        break;
    }
    ++v5;
    if ( ++v8 >= v7 )
      return 0xFFFFFFFFi64;
  }
  return v5;
}

__int64 __fastcall OGLModel::convertBoneMirrorToFigure(OGLModel *this, int iBoneNo)
{
  OGLFigure *m_pFigure; // r8
  OGLMirror *m_pMirror; // rax
  unsigned int m_uiBoneCount; // er11
  const char *v6; // rdi
  int v7; // er11
  __int64 v8; // r9
  const char **i; // r10

  m_pFigure = this->m_pFigure;
  if ( !m_pFigure )
    return (unsigned int)iBoneNo;
  m_pMirror = this->m_pMirror;
  if ( !m_pMirror )
    return (unsigned int)iBoneNo;
  if ( iBoneNo < 0 )
    return (unsigned int)iBoneNo;
  m_uiBoneCount = m_pFigure->m_uiBoneCount;
  if ( !m_uiBoneCount || !m_pMirror->m_uiBoneCount )
    return (unsigned int)iBoneNo;
  v6 = (const char *)m_pMirror->m_cBoneName[iBoneNo];
  if ( !v6 )
    return (unsigned int)iBoneNo;
  v7 = m_uiBoneCount - 1;
  if ( v7 < 0 )
    return (unsigned int)iBoneNo;
  v8 = v7;
  for ( i = (const char **)&m_pFigure->m_pBone[v7].m_cName; !*i || strcmp(v6, *i); i -= 29 )
  {
    --v7;
    if ( --v8 < 0 )
      return (unsigned int)iBoneNo;
  }
  return (unsigned int)v7;
}

__int64 __fastcall OGLModel::convertBoneSecondaryToFigure(OGLModel *this, int iBoneNo)
{
  OGLFigure *m_pFigure; // rcx
  OGLSecondary *m_pSecondary; // rbx
  int m_uiBoneCount; // er8
  unsigned int v6; // er11
  __int64 v7; // rdi
  __int64 v8; // r9
  unsigned __int8 **p_m_cName; // r10
  __int64 v10; // rsi
  unsigned __int8 *v11; // rax
  signed __int64 v12; // r8
  int v13; // ecx
  int v14; // edx

  m_pFigure = this->m_pFigure;
  if ( !m_pFigure )
    return 0xFFFFFFFFi64;
  m_pSecondary = this->m_pSecondary;
  if ( !m_pSecondary )
    return 0xFFFFFFFFi64;
  if ( iBoneNo < 0 )
    return 0xFFFFFFFFi64;
  m_uiBoneCount = m_pFigure->m_uiBoneCount;
  if ( !m_uiBoneCount || !m_pSecondary->m_uiBoneListCount )
    return 0xFFFFFFFFi64;
  v6 = 0;
  if ( m_uiBoneCount <= 0 )
    return 0xFFFFFFFFi64;
  v7 = (int)m_pFigure->m_uiBoneCount;
  v8 = 0i64;
  p_m_cName = &m_pFigure->m_pBone->m_cName;
  v10 = iBoneNo;
  while ( 1 )
  {
    if ( *p_m_cName )
    {
      v11 = m_pSecondary->m_cBoneName[v10];
      v12 = *p_m_cName - v11;
      do
      {
        v13 = v11[v12];
        v14 = *v11 - v13;
        if ( v14 )
          break;
        ++v11;
      }
      while ( v13 );
      if ( !v14 )
        break;
    }
    ++v6;
    ++v8;
    p_m_cName += 29;
    if ( v8 >= v7 )
      return 0xFFFFFFFFi64;
  }
  return v6;
}

void __fastcall OGLModel::copyModel(OGLModel *this, OGLModel *pModel, unsigned __int8 a3)
{
  OGLTexture *(*m_pTexture)[4]; // r9
  __int64 v6; // r10
  __int64 v7; // rsi
  __int64 i; // rdx
  unsigned __int64 v9; // r8
  __int64 v10; // rcx
  OGLTexture *(*v11)[4]; // rax

  OGLModel::setFigure(this, pModel->m_pFigure, a3);
  m_pTexture = pModel->m_pTexture;
  v6 = 0i64;
  this->m_iPriority = pModel->m_iPriority;
  v7 = 64i64;
  do
  {
    for ( i = 0i64; i < 4; ++i )
    {
      v9 = v6;
      if ( v6 < 0 )
      {
        v10 = 0i64;
        v11 = this->m_pTexture;
        while ( (*v11)[0] )
        {
          ++v10;
          ++v11;
          if ( v10 >= 64 )
            goto LABEL_10;
        }
        v9 = v10;
      }
LABEL_10:
      if ( v9 <= 0x3F && i >= 0 )
        this->m_pTexture[v9][i] = (*m_pTexture)[0];
      m_pTexture = (OGLTexture *(*)[4])((char *)m_pTexture + 8);
    }
    ++v6;
    --v7;
  }
  while ( v7 );
  if ( (pModel->m_uiModeFlg & 0x400) == 0 )
  {
    if ( (this->m_uiModeFlg & 0x400) == 0 )
    {
      this->m_pMotion[0] = pModel->m_pMotion[0];
      if ( (this->m_uiModeFlg & 0x400) == 0 )
      {
        this->m_pMotion[1] = pModel->m_pMotion[1];
        if ( (this->m_uiModeFlg & 0x400) == 0 )
        {
          this->m_pMotion[2] = pModel->m_pMotion[2];
          if ( (this->m_uiModeFlg & 0x400) == 0 )
          {
            this->m_pMotion[3] = pModel->m_pMotion[3];
            if ( (this->m_uiModeFlg & 0x400) == 0 )
              this->m_pMotion[4] = pModel->m_pMotion[4];
          }
        }
      }
    }
    this->m_pMirror = pModel->m_pMirror;
    this->m_pCamera = pModel->m_pCamera;
    OGLModel::createIndex(this);
  }
}

void __fastcall OGLModel::copyMotion(OGLModel *this, OGLModel *pModel)
{
  signed int v3; // er15
  __int64 v4; // r11
  __int64 v5; // r14
  __int64 v6; // rbp
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // rcx
  _OGLModelBone *v10; // r8
  _OGLModelBone *v11; // rax
  __int128 v12; // xmm0
  __int64 v13; // rcx
  _SECONDARY_BONE_INFO *v14; // r8
  _SECONDARY_BONE_INFO *v15; // rax
  __int128 v16; // xmm0

  if ( this != pModel && this->m_iFigureBoneIdx && (pModel->m_uiModeFlg & 0x400) == 0 )
  {
    *(_OWORD *)this->m_iMotionIndex = *(_OWORD *)pModel->m_iMotionIndex;
    this->m_iMotionIndex[4] = pModel->m_iMotionIndex[4];
    *(_OWORD *)this->m_fMotionFrame = *(_OWORD *)pModel->m_fMotionFrame;
    this->m_fMotionFrame[4] = pModel->m_fMotionFrame[4];
    *(_OWORD *)this->m_fMotionBlend = *(_OWORD *)pModel->m_fMotionBlend;
    this->m_fMotionBlend[4] = pModel->m_fMotionBlend[4];
    *(_OWORD *)this->m_iPreMotionIndex = *(_OWORD *)pModel->m_iPreMotionIndex;
    this->m_iPreMotionIndex[4] = pModel->m_iPreMotionIndex[4];
    *(_OWORD *)this->m_fPreMotionFrame = *(_OWORD *)pModel->m_fPreMotionFrame;
    this->m_fPreMotionFrame[4] = pModel->m_fPreMotionFrame[4];
    *(_OWORD *)this->m_fPreMotionBlend = *(_OWORD *)pModel->m_fPreMotionBlend;
    this->m_fPreMotionBlend[4] = pModel->m_fPreMotionBlend[4];
    this->m_bMotionEnd = pModel->m_bMotionEnd;
    this->m_vPosition = pModel->m_vPosition;
    this->m_mWorld = pModel->m_mWorld;
    *(_OWORD *)&this->m_pAniboneStr[0][0] = *(_OWORD *)&pModel->m_pAniboneStr[0][0];
    *(_OWORD *)&this->m_pAniboneStr[0][16] = *(_OWORD *)&pModel->m_pAniboneStr[0][16];
    *(_OWORD *)&this->m_pAniboneStr[1][0] = *(_OWORD *)&pModel->m_pAniboneStr[1][0];
    *(_OWORD *)&this->m_pAniboneStr[1][16] = *(_OWORD *)&pModel->m_pAniboneStr[1][16];
    *(_OWORD *)&this->m_pAniboneStr[2][0] = *(_OWORD *)&pModel->m_pAniboneStr[2][0];
    *(_OWORD *)&this->m_pAniboneStr[2][16] = *(_OWORD *)&pModel->m_pAniboneStr[2][16];
    *(_OWORD *)&this->m_pAniboneStr[3][0] = *(_OWORD *)&pModel->m_pAniboneStr[3][0];
    *(_OWORD *)&this->m_pAniboneStr[3][16] = *(_OWORD *)&pModel->m_pAniboneStr[3][16];
    *(_OWORD *)&this->m_pAniboneStr[4][0] = *(_OWORD *)&pModel->m_pAniboneStr[4][0];
    *(_OWORD *)&this->m_pAniboneStr[4][16] = *(_OWORD *)&pModel->m_pAniboneStr[4][16];
    this->m_pmParentPosture = pModel->m_pmParentPosture;
    this->m_pParentModel = pModel->m_pParentModel;
    this->m_iParentBone = pModel->m_iParentBone;
    v3 = pModel->m_pFigure->m_uiBoneCount - 1;
    v4 = v3;
    if ( v3 >= 0 )
    {
      v5 = v3;
      v6 = v3;
      v7 = v3;
      do
      {
        if ( pModel->m_pFigure->m_pBone[v7].m_cName )
        {
          v8 = this->m_iFigureBoneIdx[v4];
          if ( (int)v8 >= 0 )
          {
            v9 = 4i64;
            v10 = &this->m_pBoneInfo[v8];
            v11 = &pModel->m_pBoneInfo[v6];
            do
            {
              v10 = (_OGLModelBone *)((char *)v10 + 128);
              v12 = *(_OWORD *)&v11->pPrevStack[0].m_vPrevTrans.x;
              v11 = (_OGLModelBone *)((char *)v11 + 128);
              *(_OWORD *)v10[-1].fMotOffRotate[0].m = v12;
              *(_OWORD *)&v10[-1].fMotOffRotate[0].m[4] = *(_OWORD *)&v11[-1].fMotOffRotate[0].m[4];
              *(_OWORD *)&v10[-1].fMotOffRotate[0].m[8] = *(_OWORD *)&v11[-1].fMotOffRotate[0].m[8];
              *(_OWORD *)&v10[-1].fMotOffRotate[0].m[12] = *(_OWORD *)&v11[-1].fMotOffRotate[0].m[12];
              *(_OWORD *)v10[-1].fMotOffRotate[1].m = *(_OWORD *)v11[-1].fMotOffRotate[1].m;
              *(_OWORD *)&v10[-1].fMotOffRotate[1].m[4] = *(_OWORD *)&v11[-1].fMotOffRotate[1].m[4];
              *(_OWORD *)&v10[-1].fMotOffRotate[1].m[8] = *(_OWORD *)&v11[-1].fMotOffRotate[1].m[8];
              *(_OWORD *)&v10[-1].fMotOffRotate[1].m[12] = *(_OWORD *)&v11[-1].fMotOffRotate[1].m[12];
              --v9;
            }
            while ( v9 );
            v13 = 4i64;
            *(_OWORD *)&v10->pPrevStack[0].m_vPrevTrans.x = *(_OWORD *)&v11->pPrevStack[0].m_vPrevTrans.x;
            *(_QWORD *)&v10->pPrevStack[0].m_vPrevScale.y = *(_QWORD *)&v11->pPrevStack[0].m_vPrevScale.y;
            v14 = &this->m_SecondaryInfo[v8];
            v15 = &pModel->m_SecondaryInfo[v5];
            do
            {
              v14 = (_SECONDARY_BONE_INFO *)((char *)v14 + 128);
              v16 = *(_OWORD *)&v15->vPrevAxis.x;
              v15 = (_SECONDARY_BONE_INFO *)((char *)v15 + 128);
              *(_OWORD *)&v14[-1].mBaseMat.m[12] = v16;
              *(_OWORD *)&v14[-1].vScale.x = *(_OWORD *)&v15[-1].vScale.x;
              *(_OWORD *)&v14[-1].mBaseMat2.m[1] = *(_OWORD *)&v15[-1].mBaseMat2.m[1];
              *(_OWORD *)&v14[-1].mBaseMat2.m[5] = *(_OWORD *)&v15[-1].mBaseMat2.m[5];
              *(_OWORD *)&v14[-1].mBaseMat2.m[9] = *(_OWORD *)&v15[-1].mBaseMat2.m[9];
              *(_OWORD *)&v14[-1].mBaseMat2.m[13] = *(_OWORD *)&v15[-1].mBaseMat2.m[13];
              *(_OWORD *)&v14[-1].vScale2.y = *(_OWORD *)&v15[-1].vScale2.y;
              *(_OWORD *)&v14[-1].vRebound.y = *(_OWORD *)&v15[-1].vRebound.y;
              --v13;
            }
            while ( v13 );
            *(_OWORD *)&v14->vPrevAxis.x = *(_OWORD *)&v15->vPrevAxis.x;
            *(_OWORD *)v14->mPrevPosWorldX = *(_OWORD *)v15->mPrevPosWorldX;
            *(_OWORD *)&v14->mPrevPosWorldX[2] = *(_OWORD *)&v15->mPrevPosWorldX[2];
            *(_OWORD *)&v14->mPrevPosWorldX[4] = *(_OWORD *)&v15->mPrevPosWorldX[4];
            *(_OWORD *)&v14->mPrevPosWorldX[6] = *(_OWORD *)&v15->mPrevPosWorldX[6];
            this->m_pbBoneMirrorFlg[v8] = pModel->m_pbBoneMirrorFlg[v4];
            this->m_pbBoneMirrorFlg2[v8] = pModel->m_pbBoneMirrorFlg2[v4];
            if ( v3 == pModel->m_iMirrorBaseBoneNo )
              this->m_iMirrorBaseBoneNo = v8;
          }
        }
        --v3;
        --v7;
        --v6;
        --v5;
        --v4;
      }
      while ( v4 >= 0 );
    }
    this->m_iBoneStackIndex = 0;
    this->m_bPrevBoneMirrorFlg = pModel->m_bPrevBoneMirrorFlg;
    this->m_SecondaryEnable = pModel->m_SecondaryEnable;
    this->m_SecondaryCollisionEnable = pModel->m_SecondaryCollisionEnable;
    this->m_bTrans = pModel->m_bTrans;
    this->m_bChange = pModel->m_bChange;
    this->m_bPostureChange = pModel->m_bPostureChange;
    this->m_bMotOffScaleFlg = pModel->m_bMotOffScaleFlg;
    this->m_fMotOffScaleTemp = pModel->m_fMotOffScaleTemp;
    this->m_fMotOffScale[0] = pModel->m_fMotOffScale[0];
    this->m_iMotOffScaleBoneNo[0] = pModel->m_iMotOffScaleBoneNo[0];
    this->m_fMotOffScaleCommon[0] = pModel->m_fMotOffScaleCommon[0];
    this->m_fMotOffScale[1] = pModel->m_fMotOffScale[1];
    this->m_iMotOffScaleBoneNo[1] = pModel->m_iMotOffScaleBoneNo[1];
    this->m_fMotOffScaleCommon[1] = pModel->m_fMotOffScaleCommon[1];
    this->m_bBaseOffScaleFlg = pModel->m_bBaseOffScaleFlg;
    this->m_iCurrentMotion = pModel->m_iCurrentMotion;
    this->m_iCurrentExternalMotion = pModel->m_iCurrentExternalMotion;
    this->m_uiUseMotionFlg = pModel->m_uiUseMotionFlg;
  }
}

void __fastcall OGLModel::createBaseModelShadow(OGLModel *this, unsigned __int8 *visible)
{
  OGLFigure *m_pFigure; // rax
  int v4; // edi
  __int64 v5; // rsi
  __int64 v6; // r14
  OGLMaterial *v7; // rbp
  __int64 v8; // rsi
  __int64 v9; // r14
  OGLMaterial *m_pMaterial; // rbp

  memmove(this->m_bMaterialShadowVisible, visible, this->m_ucMaterialCount);
  m_pFigure = this->m_pFigure;
  v4 = 0;
  this->m_usIndexShadowCount = 0;
  if ( SLOBYTE(m_pFigure->m_iFormatType) < 0 )
  {
    if ( this->m_ucMaterialCount )
    {
      v8 = 0i64;
      v9 = 0i64;
      do
      {
        m_pMaterial = this->m_pMaterial;
        if ( this->m_bMaterialShadowVisible[v8] )
        {
          memmove(
            &this->m_pussIndexShadow[this->m_usIndexShadowCount],
            m_pMaterial[v9].m_pssIndex,
            4i64 * m_pMaterial[v9].m_usIndexCount);
          this->m_usIndexShadowCount += m_pMaterial[v9].m_usIndexCount;
        }
        ++v4;
        ++v8;
        ++v9;
      }
      while ( v4 < this->m_ucMaterialCount );
    }
  }
  else if ( this->m_ucMaterialCount )
  {
    v5 = 0i64;
    v6 = 0i64;
    do
    {
      v7 = this->m_pMaterial;
      if ( this->m_bMaterialShadowVisible[v5] )
      {
        memmove(&this->m_pusIndexShadow[this->m_usIndexShadowCount], v7[v6].m_psIndex, 4i64 * v7[v6].m_usIndexCount);
        this->m_usIndexShadowCount += v7[v6].m_usIndexCount;
      }
      ++v4;
      ++v5;
      ++v6;
    }
    while ( v4 < this->m_ucMaterialCount );
  }
}

void __fastcall OGLModel::createExternalIndex(OGLModel *this, OGLModel *pModel)
{
  int *m_iExternalMotionCount; // rbp
  void **m_iExternalMotionBoneIdx; // rsi
  __int64 v6; // r14
  int v7; // edi
  __int64 v8; // rbx
  void *v9; // rcx
  char *v10; // r12
  int v11; // esi
  int *v12; // rbx
  int ***v13; // rbp
  signed __int64 v14; // r14
  const char *v15; // rdi
  __int64 v16; // rax
  unsigned __int64 v17; // rcx
  int **v18; // rax
  int v19; // er15
  __int64 v20; // r14
  unsigned __int64 v21; // rax
  signed int v22; // ecx
  __int64 v23; // rsi
  __int64 v24; // rbx
  unsigned __int8 *m_cName; // rcx
  _QWORD *v26; // rcx
  __int64 v27; // rax
  int v28; // er11
  __int64 v29; // rdi
  __int64 v30; // r9
  int *v31; // r10
  unsigned __int8 *v32; // rax
  unsigned __int8 *v33; // r8
  int v34; // ecx
  int v35; // edx
  signed __int64 v36; // [rsp+20h] [rbp-48h]
  int *v37; // [rsp+28h] [rbp-40h]
  int v38; // [rsp+78h] [rbp+10h]
  int v39; // [rsp+80h] [rbp+18h]
  char *v40; // [rsp+88h] [rbp+20h]

  if ( pModel->m_pMotion[0] )
  {
    m_iExternalMotionCount = this->m_iExternalMotionCount;
    m_iExternalMotionBoneIdx = (void **)this->m_iExternalMotionBoneIdx;
    v6 = 5i64;
    do
    {
      if ( *m_iExternalMotionBoneIdx )
      {
        v7 = 0;
        if ( *m_iExternalMotionCount > 0 )
        {
          v8 = 0i64;
          do
          {
            v9 = *(void **)((char *)*m_iExternalMotionBoneIdx + v8);
            if ( v9 )
            {
              operator delete(v9, (unsigned __int64)pModel);
              *(_QWORD *)((char *)*m_iExternalMotionBoneIdx + v8) = 0i64;
            }
            ++v7;
            v8 += 8i64;
          }
          while ( v7 < *m_iExternalMotionCount );
        }
        if ( *m_iExternalMotionBoneIdx )
        {
          operator delete(*m_iExternalMotionBoneIdx, (unsigned __int64)pModel);
          *m_iExternalMotionBoneIdx = 0i64;
        }
      }
      ++m_iExternalMotionCount;
      ++m_iExternalMotionBoneIdx;
      --v6;
    }
    while ( v6 );
    v10 = this->m_pAniboneStr[4];
    *(_QWORD *)this->m_iExternalMotionCount = 0i64;
    v11 = 4;
    *(_QWORD *)&this->m_iExternalMotionCount[2] = 0i64;
    v12 = &this->m_iExternalMotionCount[4];
    this->m_iExternalMotionCount[4] = 0;
    v39 = 4;
    v13 = &this->m_iExternalMotionBoneIdx[4];
    v14 = (char *)pModel - (char *)this - 8408;
    v37 = &this->m_iExternalMotionCount[4];
    v36 = v14;
    v15 = this->m_pAniboneStr[4];
    v40 = this->m_pAniboneStr[4];
    do
    {
      v16 = *(__int64 *)((char *)v13 + v14);
      if ( v16 )
      {
        v17 = *(int *)(v16 + 8);
        *v12 = v17;
        v18 = (int **)operator new[](saturated_mul(v17, 8ui64));
        *v13 = v18;
        memset(v18, 0, 4i64 * (*(unsigned int **)((char *)v13 + v14))[2]);
        if ( *v12 > 0 )
        {
          if ( this->m_pFigure )
          {
            v19 = 0;
            v38 = 0;
            v20 = 0i64;
            do
            {
              v21 = 4i64 * this->m_pFigure->m_uiBoneCount;
              if ( !is_mul_ok(this->m_pFigure->m_uiBoneCount, 4ui64) )
                v21 = -1i64;
              (*v13)[v20] = (int *)operator new[](v21);
              memset((*v13)[v20], -1, 4i64 * this->m_pFigure->m_uiBoneCount);
              v22 = this->m_pFigure->m_uiBoneCount - 1;
              v23 = v22;
              if ( v22 >= 0 )
              {
                v24 = v22;
                do
                {
                  m_cName = this->m_pFigure->m_pBone[v24].m_cName;
                  if ( m_cName && (!*v10 || !strstr((const char *)m_cName, v15)) )
                  {
                    v26 = *(int ***)((char *)v13 + v36);
                    v27 = *(_QWORD *)(v20 * 8 + *v26);
                    v28 = *(_DWORD *)(v27 + 16) - 1;
                    if ( v28 >= 0 )
                    {
                      v29 = v26[2];
                      v30 = v28;
                      v31 = (int *)(56i64 * v28 + *(_QWORD *)(v27 + 8) + 4i64);
                      while ( 1 )
                      {
                        v32 = *(unsigned __int8 **)(v29 + 8i64 * *v31);
                        if ( v32 )
                        {
                          v33 = (unsigned __int8 *)(this->m_pFigure->m_pBone[v24].m_cName - v32);
                          do
                          {
                            v34 = v33[(_QWORD)v32];
                            v35 = *v32 - v34;
                            if ( v35 )
                              break;
                            ++v32;
                          }
                          while ( v34 );
                          if ( !v35 )
                            break;
                        }
                        --v28;
                        v31 -= 14;
                        if ( --v30 < 0 )
                          goto LABEL_34;
                      }
                      (*v13)[v20][v23] = v28;
LABEL_34:
                      v15 = v40;
                    }
                  }
                  --v24;
                  --v23;
                }
                while ( v23 >= 0 );
                v19 = v38;
                v12 = v37;
              }
              ++v19;
              ++v20;
              v38 = v19;
            }
            while ( v19 < *v12 );
            v11 = v39;
            v14 = v36;
          }
        }
      }
      --v11;
      v15 -= 32;
      --v12;
      v39 = v11;
      --v13;
      v40 = (char *)v15;
      v10 -= 32;
      v37 = v12;
    }
    while ( v11 >= 0 );
  }
}

void __fastcall OGLModel::createFigureIndex(OGLModel *this, OGLModel *pModel)
{
  int *m_iFigureBoneIdx; // rcx
  int *v5; // rax
  OGLFigure *m_pFigure; // rcx
  signed int v7; // ecx
  __int64 v8; // rsi
  __int64 v9; // rbx
  OGLFigure *v10; // rdi
  OGLFigure *v11; // rcx
  int v12; // er10
  __int64 v13; // r9
  unsigned __int8 **p_m_cName; // r11
  unsigned __int8 *m_cName; // rax
  signed __int64 v16; // r8
  int v17; // ecx
  int v18; // edx

  if ( this->m_pFigure && pModel->m_pFigure )
  {
    m_iFigureBoneIdx = pModel->m_iFigureBoneIdx;
    if ( m_iFigureBoneIdx )
    {
      operator delete(m_iFigureBoneIdx, (unsigned __int64)pModel);
      pModel->m_iFigureBoneIdx = 0i64;
    }
    v5 = (int *)operator new[](saturated_mul(pModel->m_pFigure->m_uiBoneCount, 4ui64));
    m_pFigure = pModel->m_pFigure;
    pModel->m_iFigureBoneIdx = v5;
    memset(v5, -1, 4i64 * m_pFigure->m_uiBoneCount);
    v7 = pModel->m_pFigure->m_uiBoneCount - 1;
    v8 = v7;
    if ( v7 >= 0 )
    {
      v9 = v7;
      do
      {
        v10 = pModel->m_pFigure;
        if ( v10->m_pBone[v9].m_cName )
        {
          v11 = this->m_pFigure;
          v12 = v11->m_uiBoneCount - 1;
          if ( v12 >= 0 )
          {
            v13 = v12;
            p_m_cName = &v11->m_pBone[v12].m_cName;
            while ( 1 )
            {
              if ( *p_m_cName )
              {
                m_cName = v10->m_pBone[v9].m_cName;
                v16 = *p_m_cName - m_cName;
                do
                {
                  v17 = m_cName[v16];
                  v18 = *m_cName - v17;
                  if ( v18 )
                    break;
                  ++m_cName;
                }
                while ( v17 );
                if ( !v18 )
                  break;
              }
              --v12;
              p_m_cName -= 29;
              if ( --v13 < 0 )
                goto LABEL_18;
            }
            pModel->m_iFigureBoneIdx[v8] = v12;
          }
        }
LABEL_18:
        --v9;
        --v8;
      }
      while ( v8 >= 0 );
    }
  }
}

void __fastcall OGLModel::createIndex(OGLModel *this, unsigned __int64 a2)
{
  OGLModel *v2; // r13
  OGLMotion **m_pMotion; // r15
  int *m_iMotionCount; // rbp
  int ***m_iMotionBoneIdx; // r13
  void **v6; // rsi
  __int64 v7; // r14
  int v9; // edi
  __int64 v10; // rbx
  void *v11; // rcx
  int v12; // edi
  char *v13; // rbx
  int *v14; // r12
  int ***v15; // rbp
  __int64 v16; // rax
  char *v17; // rsi
  __int64 v18; // rax
  unsigned __int64 v19; // rcx
  int **v20; // rax
  int v21; // er14
  unsigned __int64 v22; // r12
  unsigned __int64 v23; // rax
  int v24; // ecx
  __int64 v25; // r15
  __int64 v26; // rsi
  OGLBone **p_m_pBone; // r14
  const char *m_cName; // rcx
  const char *v29; // rbx
  __int64 v30; // rcx
  unsigned __int64 v31; // rax
  __int64 v32; // rdi
  int v33; // er10
  __int64 v34; // r9
  __int64 v35; // r11
  unsigned __int8 *v36; // rax
  __int64 v37; // r8
  int v38; // ecx
  int *m_iMirrorBoneIdx; // rcx
  int *m_iMirrorBoneRIdx; // rcx
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // rax
  int v43; // ebx
  __int64 v44; // rsi
  int v45; // eax
  __int64 boneID; // rdi
  unsigned int v47; // eax
  int *m_iSecondaryBoneIdx; // rcx
  int *m_iSecondaryBoneRIdx; // rcx
  int *v50; // rax
  OGLSecondary *m_pSecondary; // rcx
  unsigned __int64 v52; // rax
  int v53; // ebx
  __int64 v54; // rdi
  int v55; // eax
  char *v56; // [rsp+20h] [rbp-68h]
  __int64 v57; // [rsp+28h] [rbp-60h]
  __int64 v58; // [rsp+30h] [rbp-58h]
  int v60; // [rsp+90h] [rbp+8h]
  int v61; // [rsp+98h] [rbp+10h]
  char *str2; // [rsp+A0h] [rbp+18h]
  int *v63; // [rsp+A8h] [rbp+20h]

  v2 = this;
  if ( this->m_pFigure )
  {
    m_pMotion = this->m_pMotion;
    if ( this->m_pMotion[0] )
    {
      m_iMotionCount = this->m_iMotionCount;
      m_iMotionBoneIdx = this->m_iMotionBoneIdx;
      v6 = (void **)this->m_iMotionBoneIdx;
      v7 = 5i64;
      do
      {
        if ( *v6 )
        {
          v9 = 0;
          if ( *m_iMotionCount > 0 )
          {
            v10 = 0i64;
            do
            {
              v11 = *(void **)((char *)*v6 + v10);
              if ( v11 )
              {
                operator delete(v11, a2);
                *(_QWORD *)((char *)*v6 + v10) = 0i64;
              }
              ++v9;
              v10 += 8i64;
            }
            while ( v9 < *m_iMotionCount );
          }
          if ( *v6 )
          {
            operator delete(*v6, a2);
            *v6 = 0i64;
          }
        }
        ++m_iMotionCount;
        ++v6;
        --v7;
      }
      while ( v7 );
      v12 = 4;
      *(_QWORD *)this->m_iMotionCount = 0i64;
      *(_QWORD *)&this->m_iMotionCount[2] = 0i64;
      this->m_iMotionCount[4] = 0;
      v61 = 4;
      v13 = this->m_pAniboneStr[4];
      v14 = &this->m_iMotionCount[4];
      v56 = this->m_pAniboneStr[4];
      v15 = &this->m_iMotionBoneIdx[4];
      v63 = &this->m_iMotionCount[4];
      v16 = (char *)m_iMotionBoneIdx - (char *)this - 8736;
      str2 = this->m_pAniboneStr[4];
      v2 = this;
      v17 = this->m_pAniboneStr[4];
      v57 = v16;
      v58 = (char *)m_pMotion - (char *)this - 8736;
      do
      {
        v18 = (__int64)*(v15 - 1046);
        if ( v18 )
        {
          v19 = *(int *)(v18 + 8);
          *v14 = v19;
          v20 = (int **)operator new[](saturated_mul(v19, 8ui64));
          *v15 = v20;
          memset(v20, 0, 4i64 * *((unsigned int *)*(v15 - 1046) + 2));
          if ( *v14 > 0 )
          {
            v21 = 0;
            v60 = 0;
            v22 = 0i64;
            do
            {
              v23 = 4i64 * v2->m_pFigure->m_uiBoneCount;
              if ( !is_mul_ok(v2->m_pFigure->m_uiBoneCount, 4ui64) )
                v23 = -1i64;
              (*v15)[v22 / 8] = (int *)operator new[](v23);
              memset((*v15)[v22 / 8], -1, 4i64 * v2->m_pFigure->m_uiBoneCount);
              v24 = v2->m_pFigure->m_uiBoneCount - 1;
              v25 = v24;
              if ( v24 >= 0 )
              {
                v26 = v24;
                do
                {
                  p_m_pBone = &v2->m_pFigure->m_pBone;
                  m_cName = (const char *)(*p_m_pBone)[v26].m_cName;
                  if ( m_cName )
                  {
                    if ( !v12 )
                      goto LABEL_33;
                    if ( !*v13 || strstr(m_cName, str2) )
                    {
                      p_m_pBone = &v2->m_pFigure->m_pBone;
                      v29 = (const char *)(*p_m_pBone)[v26].m_cName;
                      if ( strcmp(v29, "R_Eye_FbU") )
                      {
                        if ( strcmp(v29, "L_Eye_FbU") )
                          goto LABEL_33;
                      }
                      v30 = *(_QWORD *)(*(_QWORD *)&(**(v15 - 1046))[v22 / 4] + 24i64);
                      if ( v12 >= 2 )
                      {
                        v31 = -1i64;
                        do
                          ++v31;
                        while ( *(_BYTE *)(v30 + v31) );
                        if ( v31 >= 0xF
                          && *(_DWORD *)(v30 + 10) == *(_DWORD *)"_DAM_"
                          && *(_BYTE *)(v30 + 14) == aDam[4] )
                        {
LABEL_33:
                          v32 = *(_QWORD *)&(**(v15 - 1046))[v22 / 4];
                          v33 = *(_DWORD *)(v32 + 16) - 1;
                          if ( v33 >= 0 )
                          {
                            v34 = v33;
                            v35 = 56i64 * v33;
                            while ( 1 )
                            {
                              if ( (*(int ***)((char *)v15 + v57))[v22 / 8][v25] < 0 )
                              {
                                a2 = *(int *)(v35 + *(_QWORD *)(v32 + 8) + 4);
                                v36 = *(unsigned __int8 **)&(*(int ***)((char *)v15 + v58))[2][2 * a2];
                                if ( v36 )
                                {
                                  v37 = (*p_m_pBone)[v26].m_cName - v36;
                                  do
                                  {
                                    v38 = v36[v37];
                                    a2 = (unsigned int)*v36 - v38;
                                    if ( (_DWORD)a2 )
                                      break;
                                    ++v36;
                                  }
                                  while ( v38 );
                                  if ( !(_DWORD)a2 )
                                    break;
                                }
                              }
                              --v33;
                              v35 -= 56i64;
                              if ( --v34 < 0 )
                                goto LABEL_44;
                            }
                            (*v15)[v22 / 8][v25] = v33;
                          }
LABEL_44:
                          v12 = v61;
                        }
                      }
                    }
                  }
                  v13 = v56;
                  --v26;
                  --v25;
                }
                while ( v25 >= 0 );
                v21 = v60;
              }
              ++v21;
              v22 += 8i64;
              v60 = v21;
            }
            while ( v21 < *v63 );
            v17 = str2;
            v14 = v63;
          }
        }
        --v12;
        v17 -= 32;
        --v14;
        v61 = v12;
        v13 -= 32;
        str2 = v17;
        --v15;
        v63 = v14;
        v56 = v13;
      }
      while ( v12 >= 0 );
    }
    if ( v2->m_pMirror )
    {
      m_iMirrorBoneIdx = v2->m_iMirrorBoneIdx;
      if ( m_iMirrorBoneIdx )
      {
        operator delete(m_iMirrorBoneIdx, a2);
        v2->m_iMirrorBoneIdx = 0i64;
      }
      m_iMirrorBoneRIdx = v2->m_iMirrorBoneRIdx;
      if ( m_iMirrorBoneRIdx )
      {
        operator delete(m_iMirrorBoneRIdx, a2);
        v2->m_iMirrorBoneRIdx = 0i64;
      }
      v41 = 4i64 * v2->m_pFigure->m_uiBoneCount;
      if ( !is_mul_ok(v2->m_pFigure->m_uiBoneCount, 4ui64) )
        v41 = -1i64;
      v2->m_iMirrorBoneIdx = (int *)operator new[](v41);
      v42 = 4i64 * v2->m_pMirror->m_uiBoneCount;
      if ( !is_mul_ok(v2->m_pMirror->m_uiBoneCount, 4ui64) )
        v42 = -1i64;
      v2->m_iMirrorBoneRIdx = (int *)operator new[](v42);
      v43 = v2->m_pFigure->m_uiBoneCount - 1;
      if ( v43 >= 0 )
      {
        v44 = v43;
        do
        {
          v45 = OGLModel::convertBoneFigureToMirror(v2, v43);
          v2->m_iMirrorBoneIdx[v44] = v45;
          if ( v45 >= 0 )
          {
            a2 = v45;
            boneID = v2->m_pMirror->m_MirrorData[v45].boneID;
            if ( (int)boneID >= 0 )
            {
              v47 = OGLModel::convertBoneMirrorToFigure(v2, boneID);
              a2 = v47;
              v2->m_iMirrorBoneRIdx[boneID] = v47;
            }
          }
          --v44;
          --v43;
        }
        while ( v43 >= 0 );
      }
    }
    if ( v2->m_pSecondary )
    {
      m_iSecondaryBoneIdx = v2->m_iSecondaryBoneIdx;
      if ( m_iSecondaryBoneIdx )
      {
        operator delete(m_iSecondaryBoneIdx, a2);
        v2->m_iSecondaryBoneIdx = 0i64;
      }
      m_iSecondaryBoneRIdx = v2->m_iSecondaryBoneRIdx;
      if ( m_iSecondaryBoneRIdx )
      {
        operator delete(m_iSecondaryBoneRIdx, a2);
        v2->m_iSecondaryBoneRIdx = 0i64;
      }
      v50 = (int *)operator new[](saturated_mul(v2->m_pFigure->m_uiBoneCount, 4ui64));
      m_pSecondary = v2->m_pSecondary;
      v2->m_iSecondaryBoneIdx = v50;
      v52 = 4i64 * m_pSecondary->m_uiBoneListCount;
      if ( !is_mul_ok(m_pSecondary->m_uiBoneListCount, 4ui64) )
        v52 = -1i64;
      v2->m_iSecondaryBoneRIdx = (int *)operator new[](v52);
      v53 = v2->m_pFigure->m_uiBoneCount - 1;
      if ( v53 >= 0 )
      {
        v54 = v53;
        do
        {
          v55 = OGLModel::convertBoneFigureToSecondary(v2, v53);
          v2->m_iSecondaryBoneIdx[v54] = v55;
          if ( v55 >= 0 )
            v2->m_iSecondaryBoneRIdx[v55] = v53;
          --v54;
          --v53;
        }
        while ( v53 >= 0 );
      }
    }
  }
}

void __fastcall OGLModel::finalize(OGLModel *this)
{
  Framework::GLManager *v2; // rdi
  void *m_pfVertexBuffer; // rdx
  int v4; // esi
  void *m_pfPreVertexBuffer; // rdx
  void *m_pfWorldBuffer; // rdx
  void *m_pfPrevWorldBuffer; // rdx
  void *m_pfIndexBuffer; // rdx
  Vector4Unaligned *m_pmPrevBoneWorld; // rcx
  Vector4Unaligned *m_pmBoneWorld; // rcx
  char *m_pbBoneMirrorFlg; // rcx
  char *m_pbBoneMirrorFlg2; // rcx
  _OGLModelBone *m_pBoneInfo; // rcx
  _QWORD *v14; // rdi
  int v15; // edi
  OGLMaterial *m_pMaterial; // rcx
  int *p_m_iRenderNo; // rdi
  unsigned __int8 *m_bMaterialVisible; // rcx
  unsigned __int8 *m_bMaterialShadowVisible; // rcx
  char *m_cFollowBone; // rcx
  char *m_cFollowTargetBone; // rcx
  int *m_iMirrorBoneIdx; // rcx
  int *m_iMirrorBoneRIdx; // rcx
  int *m_iSecondaryBoneIdx; // rcx
  int *m_iSecondaryBoneRIdx; // rcx
  int *m_iFigureBoneIdx; // rcx
  void **m_iMotionBoneIdx; // r14
  int *m_iMotionCount; // rbp
  __int64 v29; // r13
  __int64 v30; // r15
  __int64 v31; // rdi
  void *v32; // rcx
  void **m_iExternalMotionBoneIdx; // r14
  int *m_iExternalMotionCount; // rbp
  __int64 v35; // rdi
  void *v36; // rcx
  _SECONDARY_BONE_INFO *m_SecondaryInfo; // rcx
  unsigned __int64 v38; // rdx
  char *m_cModelName; // rcx

  OGLModel::freeBuffers(this, this->m_ownsVertexBuffer != 0);
  v2 = Framework::GLManager::glm;
  m_pfVertexBuffer = this->m_pfVertexBuffer;
  v4 = 0;
  if ( m_pfVertexBuffer )
  {
    if ( this->m_bAllocatedVertexPointer )
      Framework::MemoryManager::release(&Framework::GLManager::glm->allocateStaticBuffers, m_pfVertexBuffer);
    this->m_pfVertexBuffer = 0i64;
    this->m_bAllocatedVertexPointer = 0;
  }
  m_pfPreVertexBuffer = this->m_pfPreVertexBuffer;
  if ( m_pfPreVertexBuffer )
  {
    Framework::MemoryManager::release(&v2->allocateStaticBuffers, m_pfPreVertexBuffer);
    this->m_pfPreVertexBuffer = 0i64;
  }
  m_pfWorldBuffer = this->m_pfWorldBuffer;
  if ( m_pfWorldBuffer )
  {
    Framework::MemoryManager::release(&v2->allocateStaticBuffers, m_pfWorldBuffer);
    this->m_pfWorldBuffer = 0i64;
  }
  m_pfPrevWorldBuffer = this->m_pfPrevWorldBuffer;
  if ( m_pfPrevWorldBuffer )
  {
    Framework::MemoryManager::release(&v2->allocateStaticBuffers, m_pfPrevWorldBuffer);
    this->m_pfPrevWorldBuffer = 0i64;
  }
  m_pfIndexBuffer = this->m_pfIndexBuffer;
  if ( m_pfIndexBuffer )
  {
    Framework::MemoryManager::release(&v2->allocateStaticBuffers, m_pfIndexBuffer);
    this->m_pfIndexBuffer = 0i64;
  }
  m_pmPrevBoneWorld = this->m_pmPrevBoneWorld;
  if ( m_pmPrevBoneWorld )
  {
    operator delete(m_pmPrevBoneWorld, (unsigned __int64)m_pfIndexBuffer);
    this->m_pmPrevBoneWorld = 0i64;
  }
  if ( this->bCreateUpdateThread )
  {
    OGLModel::syncPosture(this);
    this->bWakeThread._My_val = 0;
    this->bCreateUpdateThread = 0;
    EnterCriticalSection((LPCRITICAL_SECTION)&this->updateCondMutex);
    EnterCriticalSection((LPCRITICAL_SECTION)&this->updataCond);
    WakeConditionVariable((PCONDITION_VARIABLE)&this->updataCond.m_conditionVariable.m_data);
    LeaveCriticalSection((LPCRITICAL_SECTION)&this->updataCond);
    LeaveCriticalSection((LPCRITICAL_SECTION)&this->updateCondMutex);
    OGLModel::syncPosture(this);
  }
  this->m_iBoneStackIndex = 0;
  this->m_bPrevBoneMirrorFlg = 0;
  m_pmBoneWorld = this->m_pmBoneWorld;
  if ( m_pmBoneWorld )
  {
    operator delete(m_pmBoneWorld, (unsigned __int64)m_pfIndexBuffer);
    this->m_pmBoneWorld = 0i64;
  }
  m_pbBoneMirrorFlg = this->m_pbBoneMirrorFlg;
  if ( m_pbBoneMirrorFlg )
  {
    operator delete(m_pbBoneMirrorFlg, (unsigned __int64)m_pfIndexBuffer);
    this->m_pbBoneMirrorFlg = 0i64;
  }
  m_pbBoneMirrorFlg2 = this->m_pbBoneMirrorFlg2;
  if ( m_pbBoneMirrorFlg2 )
  {
    operator delete(m_pbBoneMirrorFlg2, (unsigned __int64)m_pfIndexBuffer);
    this->m_pbBoneMirrorFlg2 = 0i64;
  }
  m_pBoneInfo = this->m_pBoneInfo;
  if ( m_pBoneInfo )
  {
    v14 = (_QWORD *)&m_pBoneInfo[-1].fMotOffRotate[1].m[14];
    `eh vector destructor iterator'(
      m_pBoneInfo,
      0x218ui64,
      *(_QWORD *)&m_pBoneInfo[-1].fMotOffRotate[1].m[14],
      (void (__fastcall *)(void *))_OGLModelBone::~_OGLModelBone);
    operator delete[](v14, 536i64 * *v14 + 8);
    this->m_pBoneInfo = 0i64;
  }
  if ( this->m_pMaterial )
  {
    v15 = 0;
    if ( this->m_ucMaterialCount )
    {
      do
        OGLMaterial::finalize(&this->m_pMaterial[v15++]);
      while ( v15 < this->m_ucMaterialCount );
    }
    m_pMaterial = this->m_pMaterial;
    if ( m_pMaterial )
    {
      p_m_iRenderNo = &m_pMaterial[-1].m_iRenderNo;
      `eh vector destructor iterator'(
        m_pMaterial,
        0x468ui64,
        *(_QWORD *)&m_pMaterial[-1].m_iRenderNo,
        (void (__fastcall *)(void *))OGLMaterial::~OGLMaterial);
      operator delete[](p_m_iRenderNo, 1128i64 * *(_QWORD *)p_m_iRenderNo + 8);
      this->m_pMaterial = 0i64;
    }
  }
  this->m_ucMaterialCount = 0;
  m_bMaterialVisible = this->m_bMaterialVisible;
  if ( m_bMaterialVisible )
  {
    operator delete(m_bMaterialVisible, (unsigned __int64)m_pfIndexBuffer);
    this->m_bMaterialVisible = 0i64;
  }
  m_bMaterialShadowVisible = this->m_bMaterialShadowVisible;
  if ( m_bMaterialShadowVisible )
  {
    operator delete(m_bMaterialShadowVisible, (unsigned __int64)m_pfIndexBuffer);
    this->m_bMaterialShadowVisible = 0i64;
  }
  this->m_piVerColor = 0i64;
  m_cFollowBone = this->m_cFollowBone;
  if ( m_cFollowBone )
  {
    operator delete(m_cFollowBone, (unsigned __int64)m_pfIndexBuffer);
    this->m_cFollowBone = 0i64;
  }
  m_cFollowTargetBone = this->m_cFollowTargetBone;
  if ( m_cFollowTargetBone )
  {
    operator delete(m_cFollowTargetBone, (unsigned __int64)m_pfIndexBuffer);
    this->m_cFollowTargetBone = 0i64;
  }
  this->m_iMirrorBaseBoneNo = -1;
  m_iMirrorBoneIdx = this->m_iMirrorBoneIdx;
  if ( m_iMirrorBoneIdx )
  {
    operator delete(m_iMirrorBoneIdx, (unsigned __int64)m_pfIndexBuffer);
    this->m_iMirrorBoneIdx = 0i64;
  }
  m_iMirrorBoneRIdx = this->m_iMirrorBoneRIdx;
  if ( m_iMirrorBoneRIdx )
  {
    operator delete(m_iMirrorBoneRIdx, (unsigned __int64)m_pfIndexBuffer);
    this->m_iMirrorBoneRIdx = 0i64;
  }
  m_iSecondaryBoneIdx = this->m_iSecondaryBoneIdx;
  if ( m_iSecondaryBoneIdx )
  {
    operator delete(m_iSecondaryBoneIdx, (unsigned __int64)m_pfIndexBuffer);
    this->m_iSecondaryBoneIdx = 0i64;
  }
  m_iSecondaryBoneRIdx = this->m_iSecondaryBoneRIdx;
  if ( m_iSecondaryBoneRIdx )
  {
    operator delete(m_iSecondaryBoneRIdx, (unsigned __int64)m_pfIndexBuffer);
    this->m_iSecondaryBoneRIdx = 0i64;
  }
  m_iFigureBoneIdx = this->m_iFigureBoneIdx;
  if ( m_iFigureBoneIdx )
  {
    operator delete(m_iFigureBoneIdx, (unsigned __int64)m_pfIndexBuffer);
    this->m_iFigureBoneIdx = 0i64;
  }
  m_iMotionBoneIdx = (void **)this->m_iMotionBoneIdx;
  m_iMotionCount = this->m_iMotionCount;
  v29 = 5i64;
  v30 = 5i64;
  do
  {
    if ( *m_iMotionBoneIdx )
    {
      if ( *m_iMotionCount > 0 )
      {
        v31 = 0i64;
        do
        {
          v32 = *(void **)((char *)*m_iMotionBoneIdx + v31);
          if ( v32 )
          {
            operator delete(v32, (unsigned __int64)m_pfIndexBuffer);
            *(_QWORD *)((char *)*m_iMotionBoneIdx + v31) = 0i64;
          }
          ++v4;
          v31 += 8i64;
        }
        while ( v4 < *m_iMotionCount );
      }
      if ( *m_iMotionBoneIdx )
      {
        operator delete(*m_iMotionBoneIdx, (unsigned __int64)m_pfIndexBuffer);
        v4 = 0;
        *m_iMotionBoneIdx = 0i64;
      }
      else
      {
        v4 = 0;
      }
    }
    ++m_iMotionCount;
    ++m_iMotionBoneIdx;
    --v30;
  }
  while ( v30 );
  *(_QWORD *)this->m_iMotionCount = 0i64;
  *(_QWORD *)&this->m_iMotionCount[2] = 0i64;
  this->m_iMotionCount[4] = 0;
  m_iExternalMotionBoneIdx = (void **)this->m_iExternalMotionBoneIdx;
  m_iExternalMotionCount = this->m_iExternalMotionCount;
  do
  {
    if ( this->m_pFigure )
    {
      if ( !*m_iExternalMotionBoneIdx )
        goto LABEL_70;
      if ( *m_iExternalMotionCount > 0 )
      {
        v35 = 0i64;
        do
        {
          v36 = *(void **)((char *)*m_iExternalMotionBoneIdx + v35);
          if ( v36 )
          {
            operator delete(v36, (unsigned __int64)m_pfIndexBuffer);
            *(_QWORD *)((char *)*m_iExternalMotionBoneIdx + v35) = 0i64;
          }
          ++v4;
          v35 += 8i64;
        }
        while ( v4 < *m_iExternalMotionCount );
      }
    }
    if ( *m_iExternalMotionBoneIdx )
    {
      operator delete(*m_iExternalMotionBoneIdx, (unsigned __int64)m_pfIndexBuffer);
      v4 = 0;
      *m_iExternalMotionBoneIdx = 0i64;
    }
    else
    {
      v4 = 0;
    }
LABEL_70:
    ++m_iExternalMotionCount;
    ++m_iExternalMotionBoneIdx;
    --v29;
  }
  while ( v29 );
  *(_QWORD *)this->m_iExternalMotionCount = 0i64;
  *(_QWORD *)&this->m_iExternalMotionCount[2] = 0i64;
  this->m_iExternalMotionCount[4] = 0;
  this->m_pFigure = 0i64;
  this->m_pExternalMotion = 0i64;
  this->m_pMotion[0] = 0i64;
  this->m_pMotion[1] = 0i64;
  this->m_pMotion[2] = 0i64;
  this->m_pMotion[3] = 0i64;
  this->m_pMotion[4] = 0i64;
  this->m_pmParentPosture = 0i64;
  this->m_pParentModel = 0i64;
  *(_QWORD *)&this->m_iCurrentMotion = 0i64;
  this->m_pMirror = 0i64;
  this->m_MirrorEnable = 0;
  this->m_SecondaryEnable = 0;
  this->m_SecondaryCollisionEnable = 0;
  this->m_pCamera = 0i64;
  this->m_iPriority = 0;
  this->m_pSecondary = 0i64;
  m_SecondaryInfo = this->m_SecondaryInfo;
  if ( m_SecondaryInfo )
  {
    operator delete(m_SecondaryInfo, (unsigned __int64)m_pfIndexBuffer);
    this->m_SecondaryInfo = 0i64;
  }
  memset(this->m_pTexture, 0, 0x1C00ui64);
  m_cModelName = this->m_cModelName;
  if ( m_cModelName )
  {
    operator delete(m_cModelName, v38);
    this->m_cModelName = 0i64;
  }
  this->m_pEffectTexture[0] = 0i64;
  this->m_pEffectTexture[1] = 0i64;
  this->m_pEffectTexture[2] = 0i64;
  this->m_pEffectTexture[3] = 0i64;
  this->m_pEffectTexture[4] = 0i64;
  this->m_pEffectTexture[5] = 0i64;
  this->m_pEffectTexture[6] = 0i64;
  this->m_pEffectTexture[7] = 0i64;
}

void __fastcall OGLModel::freeBuffers(OGLModel *this, unsigned __int64 freeVertexBuffer)
{
  int v3; // esi
  __int64 v4; // rdi
  unsigned int *indexBuffer; // rcx
  unsigned int *v6; // rcx

  if ( this->vertexBuffer )
  {
    if ( (_BYTE)freeVertexBuffer )
      _glewDeleteBuffers(1, &this->vertexBuffer);
    this->vertexBuffer = 0;
  }
  if ( this->bonesBuffer )
  {
    _glewDeleteBuffers(1, &this->bonesBuffer);
    this->bonesBuffer = 0;
  }
  if ( this->numVerticesBuffer )
  {
    _glewDeleteBuffers(1, &this->numVerticesBuffer);
    this->numVerticesBuffer = 0;
  }
  if ( this->indexBuffer )
  {
    v3 = 0;
    if ( this->m_ucMaterialCount )
    {
      v4 = 0i64;
      do
      {
        indexBuffer = this->indexBuffer;
        if ( indexBuffer[v4] )
        {
          _glewDeleteBuffers(1, &indexBuffer[v3]);
          this->indexBuffer[v4] = 0;
        }
        ++v3;
        ++v4;
      }
      while ( v3 < this->m_ucMaterialCount );
    }
    v6 = this->indexBuffer;
    if ( v6 )
    {
      operator delete(v6, freeVertexBuffer);
      this->indexBuffer = 0i64;
    }
  }
  if ( this->m_iVaoID )
  {
    _glewDeleteVertexArrays(1, &this->m_iVaoID);
    this->m_iVaoID = 0;
  }
}

void __fastcall OGLModel::getBoneMatrix(
        OGLModel *this,
        OGLMatrix *pOutMat,
        int boneNo,
        float fOffset,
        OGLMatrix *pBoneMat,
        float fSizeY2,
        OGLVec3 *vLine,
        float *fLen)
{
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // rdx
  float *p_z; // rax
  OGLBone *v14; // rdx
  float v15; // xmm5_4
  float v16; // xmm1_4
  float v17; // xmm10_4
  float v18; // xmm13_4
  float v19; // xmm12_4
  __int64 m_sParents; // rcx
  _OGLModelBone *m_pBoneInfo; // rax
  float v22; // xmm9_4
  float v23; // xmm5_4
  float v24; // xmm4_4
  float v25; // xmm2_4
  float v26; // xmm4_4
  float v27; // xmm5_4
  float v28; // xmm1_4
  float v29; // xmm6_4
  float v30; // xmm7_4
  float v31; // xmm9_4
  float v32; // xmm10_4
  float v33; // xmm9_4
  float v34; // xmm6_4
  float v35; // xmm12_4
  float v36; // xmm13_4
  float v37; // xmm2_4
  float v38; // xmm4_4
  float v39; // xmm4_4
  float v40; // xmm1_4
  float v41; // xmm3_4
  float v42; // xmm0_4
  float v43; // xmm4_4
  float v44; // xmm2_4
  float v45; // xmm0_4
  OGLVec3 vIn2; // [rsp+20h] [rbp-D8h] BYREF
  OGLVec3 vIn1; // [rsp+30h] [rbp-C8h] BYREF
  OGLQuat q; // [rsp+40h] [rbp-B8h] BYREF
  float v49; // [rsp+50h] [rbp-A8h]
  float v50; // [rsp+54h] [rbp-A4h]

  v10 = boneNo;
  v11 = 2i64;
  v12 = v10;
  p_z = &q.z;
  v14 = &this->m_pFigure->m_pBone[v12];
  do
  {
    *((_QWORD *)p_z - 1) = 0i64;
    *p_z = 0.0;
    p_z += 3;
    --v11;
  }
  while ( v11 );
  v15 = (float)((float)((float)(q.y * pBoneMat->m[4]) + (float)(q.x * pBoneMat->m[0])) + (float)(q.z * pBoneMat->m[8]))
      + pBoneMat->m[12];
  LODWORD(v16) = COERCE_UNSIGNED_INT(
                   (float)((float)((float)(q.y * pBoneMat->m[6]) + (float)(q.x * pBoneMat->m[2]))
                         + (float)(q.z * pBoneMat->m[10]))
                 + pBoneMat->m[14]) ^ _xmm;
  v17 = (float)((float)((float)(v15 * this->m_mWorld.m[1])
                      + (float)((float)((float)((float)((float)(q.y * pBoneMat->m[5]) + (float)(q.x * pBoneMat->m[1]))
                                              + (float)(q.z * pBoneMat->m[9]))
                                      + pBoneMat->m[13])
                              * this->m_mWorld.m[5]))
              + (float)(v16 * this->m_mWorld.m[9]))
      + this->m_mWorld.m[13];
  v18 = (float)((float)((float)(v15 * this->m_mWorld.m[2])
                      + (float)((float)((float)((float)((float)(q.y * pBoneMat->m[5]) + (float)(q.x * pBoneMat->m[1]))
                                              + (float)(q.z * pBoneMat->m[9]))
                                      + pBoneMat->m[13])
                              * this->m_mWorld.m[6]))
              + (float)(v16 * this->m_mWorld.m[10]))
      + this->m_mWorld.m[14];
  v19 = (float)((float)((float)((float)((float)((float)((float)(q.y * pBoneMat->m[5]) + (float)(q.x * pBoneMat->m[1]))
                                              + (float)(q.z * pBoneMat->m[9]))
                                      + pBoneMat->m[13])
                              * this->m_mWorld.m[4])
                      + (float)(v15 * this->m_mWorld.m[0]))
              + (float)(v16 * this->m_mWorld.m[8]))
      + this->m_mWorld.m[12];
  m_sParents = v14->m_sParents;
  m_pBoneInfo = this->m_pBoneInfo;
  v22 = (float)((float)((float)(v49 * m_pBoneInfo[m_sParents].mRot.m[5])
                      + (float)(q.w * m_pBoneInfo[m_sParents].mRot.m[1]))
              + (float)(v50 * m_pBoneInfo[m_sParents].mRot.m[9]))
      + m_pBoneInfo[m_sParents].mRot.m[13];
  v23 = (float)(v49 * m_pBoneInfo[m_sParents].mRot.m[4]) + (float)(q.w * m_pBoneInfo[m_sParents].mRot.m[0]);
  v24 = (float)((float)((float)(v49 * m_pBoneInfo[m_sParents].mRot.m[6])
                      + (float)(q.w * m_pBoneInfo[m_sParents].mRot.m[2]))
              + (float)(v50 * m_pBoneInfo[m_sParents].mRot.m[10]))
      + m_pBoneInfo[m_sParents].mRot.m[14];
  v25 = v50 * m_pBoneInfo[m_sParents].mRot.m[8];
  *(_QWORD *)&vIn1.x = 0i64;
  LODWORD(v26) = LODWORD(v24) ^ _xmm;
  v27 = (float)(v23 + v25) + m_pBoneInfo[m_sParents].mRot.m[12];
  v28 = v26 * this->m_mWorld.m[10];
  v29 = (float)(v27 * this->m_mWorld.m[2]) + (float)(v22 * this->m_mWorld.m[6]);
  v30 = (float)((float)((float)(v27 * this->m_mWorld.m[1]) + (float)(v22 * this->m_mWorld.m[5]))
              + (float)(v26 * this->m_mWorld.m[9]))
      + this->m_mWorld.m[13];
  v31 = (float)((float)(v22 * this->m_mWorld.m[4]) + (float)(v27 * this->m_mWorld.m[0]))
      + (float)(v26 * this->m_mWorld.m[8]);
  LODWORD(vIn1.z) = FLOAT_1_0;
  v32 = v17 - v30;
  v33 = v31 + this->m_mWorld.m[12];
  v34 = (float)(v29 + v28) + this->m_mWorld.m[14];
  vIn2.y = v32;
  v35 = v19 - v33;
  v36 = v18 - v34;
  vIn2.x = v35;
  vIn2.z = v36;
  OGLQuat::set(&q, &vIn1, &vIn2);
  LODWORD(q.z) ^= _xmm;
  LODWORD(q.w) ^= _xmm;
  OGLMatrix::rotationQuaternion(pOutMat, &q);
  v37 = (float)((float)(pOutMat->m[6] * 0.0) + (float)(pOutMat->m[2] * 0.0))
      + (float)((float)(fOffset + 0.0) * pOutMat->m[10]);
  v38 = (float)((float)((float)((float)(pOutMat->m[5] * 0.0) + (float)(pOutMat->m[1] * 0.0))
                      + (float)((float)(fOffset + 0.0) * pOutMat->m[9]))
              + v30)
      + pOutMat->m[13];
  pOutMat->m[12] = (float)(v33
                         + (float)((float)((float)(pOutMat->m[4] * 0.0) + (float)(pOutMat->m[0] * 0.0))
                                 + (float)((float)(fOffset + 0.0) * pOutMat->m[8])))
                 + pOutMat->m[12];
  pOutMat->m[13] = v38;
  pOutMat->m[14] = (float)(v37 + v34) + pOutMat->m[14];
  if ( vLine )
  {
    v39 = fSizeY2;
    if ( fSizeY2 < 0.0 )
      v39 = sqrtf((float)((float)(v32 * v32) + (float)(v35 * v35)) + (float)(v36 * v36)) - fOffset;
    if ( fLen )
      *fLen = v39;
    *(_QWORD *)&vLine->x = 0i64;
    vLine->z = v39;
    v40 = pOutMat->m[4];
    v41 = (float)((float)(pOutMat->m[5] * 0.0) + (float)(pOutMat->m[1] * 0.0)) + (float)(v39 * pOutMat->m[9]);
    v42 = v39 * pOutMat->m[10];
    v43 = v39 * pOutMat->m[8];
    v44 = (float)((float)(pOutMat->m[6] * 0.0) + (float)(pOutMat->m[2] * 0.0)) + v42;
    v45 = pOutMat->m[0] * 0.0;
    vLine->y = v41;
    vLine->z = v44;
    vLine->x = (float)((float)(v40 * 0.0) + v45) + v43;
  }
}

void __fastcall OGLModel::getBoneMatrix(
        OGLModel *this,
        OGLMatrix *pOutMat,
        float *pLen,
        int boneNo,
        float fSizeY,
        float fOffset,
        OGLMatrix *pBoneMat)
{
  __int64 v10; // rax
  __int64 v11; // r9
  __int64 v12; // rdx
  float *p_z; // rax
  OGLBone *v14; // rdx
  float v15; // xmm5_4
  __int64 m_sParents; // rcx
  float v17; // xmm7_4
  _OGLModelBone *m_pBoneInfo; // rax
  float v19; // xmm1_4
  float v20; // xmm8_4
  float v21; // xmm6_4
  float v22; // xmm10_4
  float v23; // xmm9_4
  float v24; // xmm5_4
  float v25; // xmm0_4
  float v26; // xmm1_4
  float v27; // xmm14_4
  float v28; // xmm7_4
  float v29; // xmm10_4
  float v30; // xmm15_4
  float v31; // xmm6_4
  float v32; // xmm8_4
  float v33; // xmm9_4
  float v34; // xmm1_4
  float v35; // xmm2_4
  float v36; // xmm0_4
  float v37; // xmm3_4
  OGLVec3 vIn2; // [rsp+20h] [rbp-D8h] BYREF
  OGLVec3 vIn1; // [rsp+30h] [rbp-C8h] BYREF
  OGLQuat q; // [rsp+40h] [rbp-B8h] BYREF
  float v41; // [rsp+50h] [rbp-A8h]
  float v42; // [rsp+54h] [rbp-A4h]

  v10 = boneNo;
  v11 = 2i64;
  v12 = v10;
  p_z = &q.z;
  v14 = &this->m_pFigure->m_pBone[v12];
  do
  {
    *((_QWORD *)p_z - 1) = 0i64;
    *p_z = 0.0;
    p_z += 3;
    --v11;
  }
  while ( v11 );
  v15 = (float)((float)((float)(q.y * pBoneMat->m[4]) + (float)(q.x * pBoneMat->m[0])) + (float)(q.z * pBoneMat->m[8]))
      + pBoneMat->m[12];
  m_sParents = v14->m_sParents;
  v17 = v15 * this->m_mWorld.m[1];
  m_pBoneInfo = this->m_pBoneInfo;
  LODWORD(v19) = COERCE_UNSIGNED_INT(
                   (float)((float)((float)(q.y * pBoneMat->m[6]) + (float)(q.x * pBoneMat->m[2]))
                         + (float)(q.z * pBoneMat->m[10]))
                 + pBoneMat->m[14]) ^ _xmm;
  v20 = (float)((float)((float)(v15 * this->m_mWorld.m[2])
                      + (float)((float)((float)((float)((float)(q.y * pBoneMat->m[5]) + (float)(q.x * pBoneMat->m[1]))
                                              + (float)(q.z * pBoneMat->m[9]))
                                      + pBoneMat->m[13])
                              * this->m_mWorld.m[6]))
              + (float)(v19 * this->m_mWorld.m[10]))
      + this->m_mWorld.m[14];
  v21 = (float)((float)((float)((float)((float)((float)((float)(q.y * pBoneMat->m[5]) + (float)(q.x * pBoneMat->m[1]))
                                              + (float)(q.z * pBoneMat->m[9]))
                                      + pBoneMat->m[13])
                              * this->m_mWorld.m[4])
                      + (float)(v15 * this->m_mWorld.m[0]))
              + (float)(v19 * this->m_mWorld.m[8]))
      + this->m_mWorld.m[12];
  v22 = (float)((float)((float)(v41 * m_pBoneInfo[m_sParents].mRot.m[5])
                      + (float)(q.w * m_pBoneInfo[m_sParents].mRot.m[1]))
              + (float)(v42 * m_pBoneInfo[m_sParents].mRot.m[9]))
      + m_pBoneInfo[m_sParents].mRot.m[13];
  v23 = fSizeY;
  v24 = (float)((float)((float)(v41 * m_pBoneInfo[m_sParents].mRot.m[4])
                      + (float)(q.w * m_pBoneInfo[m_sParents].mRot.m[0]))
              + (float)(v42 * m_pBoneInfo[m_sParents].mRot.m[8]))
      + m_pBoneInfo[m_sParents].mRot.m[12];
  v25 = v22 * this->m_mWorld.m[6];
  LODWORD(v26) = COERCE_UNSIGNED_INT(
                   (float)((float)((float)(v41 * m_pBoneInfo[m_sParents].mRot.m[6])
                                 + (float)(q.w * m_pBoneInfo[m_sParents].mRot.m[2]))
                         + (float)(v42 * m_pBoneInfo[m_sParents].mRot.m[10]))
                 + m_pBoneInfo[m_sParents].mRot.m[14]) ^ _xmm;
  v27 = (float)((float)((float)(v24 * this->m_mWorld.m[1]) + (float)(v22 * this->m_mWorld.m[5]))
              + (float)(v26 * this->m_mWorld.m[9]))
      + this->m_mWorld.m[13];
  v28 = (float)((float)((float)(v17
                              + (float)((float)((float)((float)((float)(q.y * pBoneMat->m[5])
                                                              + (float)(q.x * pBoneMat->m[1]))
                                                      + (float)(q.z * pBoneMat->m[9]))
                                              + pBoneMat->m[13])
                                      * this->m_mWorld.m[5]))
                      + (float)(COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                               (float)((float)((float)(q.y * pBoneMat->m[6])
                                                             + (float)(q.x * pBoneMat->m[2]))
                                                     + (float)(q.z * pBoneMat->m[10]))
                                             + pBoneMat->m[14]) ^ _xmm)
                              * this->m_mWorld.m[9]))
              + this->m_mWorld.m[13])
      - v27;
  v29 = (float)((float)((float)(v22 * this->m_mWorld.m[4]) + (float)(v24 * this->m_mWorld.m[0]))
              + (float)(v26 * this->m_mWorld.m[8]))
      + this->m_mWorld.m[12];
  v30 = (float)((float)((float)(v24 * this->m_mWorld.m[2]) + v25) + (float)(v26 * this->m_mWorld.m[10]))
      + this->m_mWorld.m[14];
  vIn2.y = v28;
  v31 = v21 - v29;
  v32 = v20 - v30;
  vIn2.x = v31;
  vIn2.z = v32;
  if ( fSizeY < 0.0 )
    v23 = sqrtf((float)((float)(v31 * v31) + (float)(v28 * v28)) + (float)(v32 * v32)) - fOffset;
  v33 = v23 * 0.5;
  *(_QWORD *)&vIn1.x = 0i64;
  vIn1.z = v33;
  OGLQuat::set(&q, &vIn1, &vIn2);
  LODWORD(q.z) ^= _xmm;
  LODWORD(q.w) ^= _xmm;
  OGLMatrix::rotationQuaternion(pOutMat, &q);
  v34 = pOutMat->m[4] * 0.0;
  v35 = (float)(v33 + fOffset) * pOutMat->m[8];
  v36 = pOutMat->m[0] * 0.0;
  v37 = (float)((float)((float)(pOutMat->m[6] * 0.0) + (float)(pOutMat->m[2] * 0.0))
              + (float)((float)(v33 + fOffset) * pOutMat->m[10]))
      + v30;
  pOutMat->m[13] = (float)((float)((float)((float)(pOutMat->m[5] * 0.0) + (float)(pOutMat->m[1] * 0.0))
                                 + (float)((float)(v33 + fOffset) * pOutMat->m[9]))
                         + v27)
                 + pOutMat->m[13];
  pOutMat->m[14] = v37 + pOutMat->m[14];
  pOutMat->m[12] = (float)(v29 + (float)((float)(v34 + v36) + v35)) + pOutMat->m[12];
  *pLen = v33;
}

__int64 __fastcall OGLModel::getBoneNoFromName(OGLModel *this, const char *boneName, int searchMode)
{
  OGLFigure *m_pFigure; // r10
  int m_uiBoneCount; // er11
  unsigned int v6; // er9
  unsigned __int8 **i; // r10
  const char *v8; // rax
  const char *v9; // r8
  int v10; // ecx
  int v11; // edx

  m_pFigure = this->m_pFigure;
  if ( !m_pFigure )
    return 0xFFFFFFFFi64;
  m_uiBoneCount = m_pFigure->m_uiBoneCount;
  if ( !m_uiBoneCount )
    return 0xFFFFFFFFi64;
  if ( !boneName )
    return 0xFFFFFFFFi64;
  v6 = 0;
  if ( m_uiBoneCount <= 0 )
    return 0xFFFFFFFFi64;
  for ( i = &m_pFigure->m_pBone->m_cName; ; i += 29 )
  {
    v8 = (const char *)*i;
    if ( *i )
    {
      v9 = (const char *)(boneName - v8);
      do
      {
        v10 = (unsigned __int8)v9[(_QWORD)v8];
        v11 = *(unsigned __int8 *)v8 - v10;
        if ( v11 )
          break;
        ++v8;
      }
      while ( v10 );
      if ( !v11 )
        break;
    }
    if ( (int)++v6 >= m_uiBoneCount )
      return 0xFFFFFFFFi64;
  }
  return v6;
}

OGLMatrix *__fastcall OGLModel::getBoneRot(OGLModel *this, int boneNo)
{
  if ( boneNo < (signed int)this->m_pFigure->m_uiBoneCount )
    return &this->m_pBoneInfo[boneNo].mRot;
  else
    return 0i64;
}

unsigned __int8 __fastcall OGLModel::getBoneTrans(OGLModel *this, int boneNo, OGLVec3 *trans, OGLMatrix *posture)
{
  unsigned __int8 result; // al
  float x; // xmm3_4
  float v7; // xmm5_4
  __int64 v8; // rcx
  _OGLModelBone *m_pBoneInfo; // rax
  float v10; // xmm6_4
  float v11; // xmm2_4
  float z; // xmm1_4
  float v13; // xmm6_4
  float v14; // xmm5_4
  float v15; // xmm4_4
  float v16; // xmm5_4
  float v17; // xmm3_4
  float v18; // xmm0_4

  if ( boneNo >= (signed int)this->m_pFigure->m_uiBoneCount )
    return 0;
  x = trans->x;
  v7 = trans->x;
  v8 = boneNo;
  m_pBoneInfo = this->m_pBoneInfo;
  if ( posture )
  {
    z = trans->z;
    v13 = (float)((float)((float)(x * m_pBoneInfo[v8].mRot.m[1]) + (float)(m_pBoneInfo[v8].mRot.m[5] * trans->y))
                + (float)(z * m_pBoneInfo[v8].mRot.m[9]))
        + m_pBoneInfo[v8].mRot.m[13];
    v14 = (float)((float)((float)(v7 * m_pBoneInfo[v8].mRot.m[2]) + (float)(trans->y * m_pBoneInfo[v8].mRot.m[6]))
                + (float)(z * m_pBoneInfo[v8].mRot.m[10]))
        + m_pBoneInfo[v8].mRot.m[14];
    v15 = (float)((float)((float)(trans->y * m_pBoneInfo[v8].mRot.m[4]) + (float)(x * m_pBoneInfo[v8].mRot.m[0]))
                + (float)(m_pBoneInfo[v8].mRot.m[8] * z))
        + m_pBoneInfo[v8].mRot.m[12];
    trans->y = v13;
    LODWORD(v16) = LODWORD(v14) ^ _xmm;
    trans->x = v15;
    trans->z = v16;
    v17 = (float)(v15 * posture->m[1]) + (float)(v13 * posture->m[5]);
    v18 = v13 * posture->m[6];
    v10 = (float)((float)((float)(v13 * posture->m[4]) + (float)(v15 * posture->m[0])) + (float)(v16 * posture->m[8]))
        + posture->m[12];
    v11 = (float)((float)((float)(v15 * posture->m[2]) + v18) + (float)(v16 * posture->m[10])) + posture->m[14];
    trans->y = (float)(v17 + (float)(v16 * posture->m[9])) + posture->m[13];
  }
  else
  {
    v10 = (float)((float)((float)(trans->y * m_pBoneInfo[v8].mRot.m[4]) + (float)(x * m_pBoneInfo[v8].mRot.m[0]))
                + (float)(trans->z * m_pBoneInfo[v8].mRot.m[8]))
        + m_pBoneInfo[v8].mRot.m[12];
    v11 = (float)((float)((float)(x * m_pBoneInfo[v8].mRot.m[2]) + (float)(trans->y * m_pBoneInfo[v8].mRot.m[6]))
                + (float)(trans->z * m_pBoneInfo[v8].mRot.m[10]))
        + m_pBoneInfo[v8].mRot.m[14];
    trans->y = (float)((float)((float)(v7 * m_pBoneInfo[v8].mRot.m[1]) + (float)(trans->y * m_pBoneInfo[v8].mRot.m[5]))
                     + (float)(trans->z * m_pBoneInfo[v8].mRot.m[9]))
             + m_pBoneInfo[v8].mRot.m[13];
  }
  trans->x = v10;
  result = 1;
  trans->z = v11;
  return result;
}

__int64 __fastcall OGLModel::getSecondaryState(OGLModel *this, int iBoneNo)
{
  _SECONDARY_BONE_INFO *m_SecondaryInfo; // r8

  m_SecondaryInfo = this->m_SecondaryInfo;
  if ( m_SecondaryInfo )
    return m_SecondaryInfo[iBoneNo].iStateFlg | (unsigned int)(m_SecondaryInfo[iBoneNo].iStateWorkFlg | m_SecondaryInfo[iBoneNo].iStateTakeOverFlg);
  else
    return 0i64;
}

__int64 __fastcall OGLModel::getThreadIsRunning(OGLModel *this)
{
  return (unsigned int)this->m_threadRunning;
}

void __fastcall Spline::init(Spline *this, long double *sp, int spnum)
{
  int v3; // er8
  int v4; // er9
  signed __int64 v5; // r10
  int v6; // er9
  int v7; // edx
  long double *v8; // rax
  double *v9; // rax
  double v10; // xmm0_8
  double v11; // xmm1_8
  int v12; // eax
  __int64 v13; // rdx
  unsigned __int64 v14; // r10
  long double *v15; // r9
  signed __int64 v16; // r11
  long double v17; // xmm1_8
  double v18; // xmm0_8
  long double v19; // xmm0_8
  double v20; // xmm1_8
  long double v21; // xmm1_8
  double v22; // xmm0_8
  long double *v23; // rax
  long double *v24; // rax
  long double v25; // xmm0_8
  long double v26; // xmm2_8
  __int64 v27; // [rsp+0h] [rbp-C8h] BYREF
  char v28; // [rsp+8h] [rbp-C0h] BYREF

  v3 = 0;
  this->num = 15;
  v4 = 0;
  v5 = (char *)this - (char *)sp;
  do
  {
    ++v4;
    *(long double *)((char *)sp + v5 + 8) = *sp;
    ++sp;
  }
  while ( v4 <= this->num );
  v6 = 1;
  v7 = 1;
  this->c[this->num] = 0.0;
  this->c[0] = 0.0;
  if ( this->num > 1 )
  {
    v8 = &this->a[2];
    do
    {
      ++v7;
      v8[41] = (*(v8 - 2) - (*(v8 - 1) + *(v8 - 1)) + *v8) * 3.0;
      ++v8;
    }
    while ( v7 < this->num );
  }
  v27 = 0i64;
  if ( this->num > 1 )
  {
    v9 = &this->c[1];
    do
    {
      v10 = 4.0 - *(double *)((char *)v9 + (char *)&v27 - (char *)this - 352);
      ++v6;
      v11 = (*v9 - *(v9 - 1)) * (1.0 / v10);
      *(double *)((char *)v9 + &v28 - (char *)this - 352) = 1.0 / v10;
      *v9++ = v11;
    }
    while ( v6 < this->num );
  }
  v12 = this->num - 1;
  v13 = v12;
  if ( v12 >= 4i64 )
  {
    v14 = ((unsigned __int64)(v12 - 4i64) >> 2) + 1;
    v15 = &this->c[v12];
    v16 = (char *)&v27 - (char *)this;
    v13 = v12 - 4 * v14;
    do
    {
      v17 = *v15 - *(long double *)((char *)v15 + v16 - 344) * v15[1];
      v18 = *(v15 - 1);
      *v15 = v17;
      v19 = v18 - v17 * *(long double *)((char *)v15 + v16 - 352);
      v20 = *(v15 - 2);
      *(v15 - 1) = v19;
      v21 = v20 - v19 * *(long double *)((char *)v15 + v16 - 360);
      v22 = *(v15 - 3);
      *(v15 - 2) = v21;
      *(v15 - 3) = v22 - v21 * *(long double *)((char *)v15 + v16 - 368);
      v15 -= 4;
      --v14;
    }
    while ( v14 );
  }
  if ( v13 > 0 )
  {
    v23 = &this->c[v13];
    do
    {
      --v13;
      *v23 = *v23 - *(long double *)((char *)v23 + (char *)&v27 - (char *)this - 344) * v23[1];
      --v23;
    }
    while ( v13 > 0 );
  }
  this->d[this->num] = 0.0;
  this->b[this->num] = 0.0;
  if ( this->num > 0 )
  {
    v24 = &this->c[1];
    do
    {
      ++v3;
      v25 = *(v24 - 42) - *(v24 - 43) - *(v24 - 1);
      v26 = (*v24 - *(v24 - 1)) * 0.3333333333333333;
      v24[20] = v26;
      *(v24 - 22) = v25 - v26;
      ++v24;
    }
    while ( v3 < this->num );
  }
}

void __fastcall _OGLModelBone::init(_OGLModelBone *this)
{
  __int64 v2; // rdx
  float *v3; // rax
  float *fMotOffScale; // rcx

  *(_QWORD *)this->mTrans.m = 1065353216i64;
  this->mTrans.m[4] = 0.0;
  *(_QWORD *)&this->mTrans.m[8] = 0i64;
  *(_QWORD *)&this->mTrans.m[12] = 0i64;
  *(_QWORD *)&this->mTrans.m[2] = 0i64;
  v2 = 2i64;
  this->mTrans.m[14] = 0.0;
  v3 = &this->fMotOffRotate[0].m[8];
  this->mTrans.m[7] = 0.0;
  *(_QWORD *)&this->mTrans.m[5] = 1065353216i64;
  *(_QWORD *)&this->mTrans.m[10] = 1065353216i64;
  this->mTrans.m[15] = 1.0;
  *(_QWORD *)this->mBone.m = 1065353216i64;
  this->mBone.m[4] = 0.0;
  *(_QWORD *)&this->mBone.m[8] = 0i64;
  *(_QWORD *)&this->mBone.m[12] = 0i64;
  *(_QWORD *)&this->mBone.m[5] = 1065353216i64;
  *(_QWORD *)&this->mBone.m[2] = 0i64;
  *(_QWORD *)&this->mBone.m[10] = 1065353216i64;
  this->mBone.m[14] = 0.0;
  this->mBone.m[7] = 0.0;
  this->mBone.m[15] = 1.0;
  this->vScale.x = 1.0;
  this->vScale.y = 1.0;
  *(_QWORD *)&this->vScale.z = 1065353216i64;
  *(_QWORD *)this->mRot.m = 1065353216i64;
  this->mRot.m[4] = 0.0;
  *(_QWORD *)&this->mRot.m[8] = 0i64;
  *(_QWORD *)&this->mRot.m[12] = 0i64;
  *(_QWORD *)&this->mRot.m[5] = 1065353216i64;
  *(_QWORD *)&this->mRot.m[2] = 0i64;
  *(_QWORD *)&this->mRot.m[10] = 1065353216i64;
  this->mRot.m[14] = 0.0;
  this->mRot.m[7] = 0.0;
  this->mRot.m[15] = 1.0;
  *(_QWORD *)&this->vRotQuat.y = 0i64;
  this->vRotQuat.w = 1.0;
  *(_WORD *)&this->bChangedFlg = 1;
  this->bChangeFlg = 0;
  this->iTargetBoneTensionNo = -1;
  fMotOffScale = this->fMotOffScale;
  do
  {
    *fMotOffScale++ = 1.0;
    *((_QWORD *)v3 - 4) = 1065353216i64;
    *(v3 - 4) = 0.0;
    *(_QWORD *)v3 = 0i64;
    *((_QWORD *)v3 + 2) = 0i64;
    *(_QWORD *)(v3 - 3) = 1065353216i64;
    *((_QWORD *)v3 - 3) = 0i64;
    *((_QWORD *)v3 + 1) = 1065353216i64;
    v3[6] = 0.0;
    *(v3 - 1) = 0.0;
    v3[7] = 1.0;
    v3 += 16;
    --v2;
  }
  while ( v2 );
  memset(this, 0, 0x78ui64);
  *(_QWORD *)&this->boneTarget.bUseFlg = 0i64;
  *(_QWORD *)&this->boneTarget.qPrevRot.y = 0i64;
  *(_QWORD *)&this->boneTarget.qPrevRot.w = 0i64;
  *(_QWORD *)&this->boneTarget.vTargetPos.y = 0i64;
  *(_QWORD *)&this->boneTarget.fLimitUp = 0i64;
  *(_QWORD *)&this->boneTarget.fLimitLeft = 0i64;
  this->boneTarget.fBlend = 0.0;
  *(_QWORD *)&this->boneTarget.qPrevRot.x = 0i64;
  this->boneTarget.qPrevRot.z = 0.0;
  this->boneTarget.qPrevRot.w = 1.0;
}

void __fastcall OGLModel::initialize(OGLModel *this)
{
  int v2; // edx
  char (*m_pAniboneStr)[32]; // rcx
  __int64 v4; // r8
  Framework::GLManager *v5; // r15
  __int64 v6; // rbp
  AgPointer<AgDisplay> *DisplayByIndex; // rax
  AgDisplayPlatformImplementation *Log; // rax
  AgDisplay *m_ptr; // r14
  AgReferenceCount *m_ref; // rbx
  int v11; // er15
  OGLShader *v12; // rbx
  unsigned __int8 v13; // r8
  int v14; // er9
  OGLShader *v15; // rbx
  unsigned __int8 v16; // r8
  int v17; // er9
  OGLShader *v18; // rbx
  unsigned __int8 v19; // r8
  int v20; // er9
  OGLShader *v21; // rbx
  unsigned __int8 v22; // r8
  int v23; // er9
  OGLShader *v24; // rbx
  unsigned __int8 v25; // r8
  int v26; // er9
  OGLShader *v27; // rbx
  unsigned __int8 v28; // r8
  int v29; // er9
  OGLShader *v30; // rbx
  unsigned __int8 v31; // r8
  int v32; // er9
  OGLShader *v33; // rbx
  unsigned __int8 v34; // r8
  int v35; // er9
  OGLShader *v36; // rbx
  unsigned __int8 v37; // r8
  int v38; // er9
  OGLShader *v39; // rbx
  unsigned __int8 v40; // r8
  int v41; // er9
  OGLShader *v42; // rbx
  unsigned __int8 v43; // r8
  int v44; // er9
  OGLShader *v45; // rbx
  unsigned __int8 v46; // r8
  int v47; // er9
  unsigned __int8 v48; // r8
  int v49; // er9
  __int64 *v50; // rax
  __int64 v51; // r12
  AgPointer<AgDisplay> *v52; // rax
  AgDisplayPlatformImplementation *v53; // rax
  AgDisplay *v54; // rbp
  AgReferenceCount *v55; // rbx
  int v56; // er14
  const _SHADER_INFO *v57; // [rsp+20h] [rbp-78h]
  const _SHADER_INFO *v58; // [rsp+20h] [rbp-78h]
  const _SHADER_INFO *v59; // [rsp+20h] [rbp-78h]
  const _SHADER_INFO *v60; // [rsp+20h] [rbp-78h]
  const _SHADER_INFO *v61; // [rsp+20h] [rbp-78h]
  const _SHADER_INFO *v62; // [rsp+20h] [rbp-78h]
  const _SHADER_INFO *v63; // [rsp+20h] [rbp-78h]
  const _SHADER_INFO *v64; // [rsp+20h] [rbp-78h]
  const _SHADER_INFO *v65; // [rsp+20h] [rbp-78h]
  const _SHADER_INFO *v66; // [rsp+20h] [rbp-78h]
  const _SHADER_INFO *v67; // [rsp+20h] [rbp-78h]
  const _SHADER_INFO *v68; // [rsp+20h] [rbp-78h]
  const _SHADER_INFO *v69; // [rsp+20h] [rbp-78h]
  unsigned __int8 *v70; // [rsp+38h] [rbp-60h]
  unsigned __int8 *v71; // [rsp+38h] [rbp-60h]
  unsigned __int8 *v72; // [rsp+38h] [rbp-60h]
  unsigned __int8 *v73; // [rsp+38h] [rbp-60h]
  unsigned __int8 *v74; // [rsp+38h] [rbp-60h]
  unsigned __int8 *v75; // [rsp+38h] [rbp-60h]
  unsigned __int8 *v76; // [rsp+38h] [rbp-60h]
  unsigned __int8 *v77; // [rsp+38h] [rbp-60h]
  unsigned __int8 *v78; // [rsp+38h] [rbp-60h]
  unsigned __int8 *v79; // [rsp+38h] [rbp-60h]
  unsigned __int8 *v80; // [rsp+38h] [rbp-60h]
  unsigned __int8 *v81; // [rsp+38h] [rbp-60h]
  unsigned __int8 *v82; // [rsp+38h] [rbp-60h]
  AgPointer<AgDisplay> result; // [rsp+48h] [rbp-50h] BYREF
  AgPointer<AgDisplay> v84; // [rsp+58h] [rbp-40h] BYREF
  Framework::GLManager *v85; // [rsp+A0h] [rbp+8h]
  OGLShader *v86; // [rsp+A0h] [rbp+8h]

  *(_QWORD *)this->m_iMotionIndex = -1i64;
  *(_QWORD *)&this->m_iMotionIndex[2] = -1i64;
  this->m_iMotionIndex[4] = -1;
  this->m_iMotionIndex[0] = 0;
  *(_QWORD *)this->m_fMotionFrame = 0i64;
  *(_QWORD *)&this->m_fMotionFrame[2] = 0i64;
  this->m_fMotionFrame[4] = 0.0;
  *(_QWORD *)this->m_iPreMotionIndex = -1i64;
  *(_QWORD *)&this->m_iPreMotionIndex[2] = -1i64;
  this->m_iPreMotionIndex[4] = -1;
  *(_QWORD *)this->m_fPreMotionFrame = 0i64;
  *(_QWORD *)&this->m_fPreMotionFrame[2] = 0i64;
  this->m_fPreMotionFrame[4] = 0.0;
  *(_QWORD *)this->m_fMotionBlend = 0i64;
  *(_QWORD *)&this->m_fMotionBlend[2] = 0i64;
  this->m_fMotionBlend[4] = 0.0;
  *(_QWORD *)this->m_fPreMotionBlend = 0i64;
  *(_QWORD *)&this->m_fPreMotionBlend[2] = 0i64;
  this->m_fPreMotionBlend[4] = 0.0;
  v2 = 1;
  m_pAniboneStr = this->m_pAniboneStr;
  v4 = 5i64;
  do
  {
    this->m_uiUseMotionFlg &= ~v2;
    *(_QWORD *)m_pAniboneStr = 0i64;
    *(_QWORD *)&(*m_pAniboneStr)[8] = 0i64;
    *(_QWORD *)&(*m_pAniboneStr)[16] = 0i64;
    *(_QWORD *)&(*m_pAniboneStr++)[24] = 0i64;
    v2 = __ROL4__(v2, 1);
    --v4;
  }
  while ( v4 );
  this->m_bMotionEnd = 0;
  *(_QWORD *)&this->m_vPosition.x = 0i64;
  *(_QWORD *)&this->m_vPosition.z = 0i64;
  *(_QWORD *)&this->m_vPosition2.y = 0i64;
  *(_QWORD *)&this->m_vCenterPosition.x = 0i64;
  this->m_vCenterPosition.z = 0.0;
  *(_QWORD *)this->m_mWorld.m = 1065353216i64;
  this->m_mWorld.m[4] = 0.0;
  *(_QWORD *)&this->m_mWorld.m[8] = 0i64;
  *(_QWORD *)&this->m_mWorld.m[12] = 0i64;
  *(_QWORD *)&this->m_mWorld.m[5] = 1065353216i64;
  *(_QWORD *)&this->m_mWorld.m[2] = 0i64;
  *(_QWORD *)&this->m_mWorld.m[10] = 1065353216i64;
  this->m_mWorld.m[14] = 0.0;
  this->m_mWorld.m[7] = 0.0;
  this->m_mWorld.m[15] = 1.0;
  *(_QWORD *)this->m_mPreWorld.m = 1065353216i64;
  this->m_mPreWorld.m[4] = 0.0;
  *(_QWORD *)&this->m_mPreWorld.m[8] = 0i64;
  *(_QWORD *)&this->m_mPreWorld.m[12] = 0i64;
  *(_QWORD *)&this->m_mPreWorld.m[5] = 1065353216i64;
  *(_QWORD *)&this->m_mPreWorld.m[2] = 0i64;
  *(_QWORD *)&this->m_mPreWorld.m[10] = 1065353216i64;
  this->m_mPreWorld.m[14] = 0.0;
  this->m_mPreWorld.m[7] = 0.0;
  this->m_mPreWorld.m[15] = 1.0;
  this->m_pFigure = 0i64;
  this->m_pExternalMotion = 0i64;
  this->m_pMotion[0] = 0i64;
  this->m_pMotion[1] = 0i64;
  this->m_pMotion[2] = 0i64;
  this->m_pMotion[3] = 0i64;
  this->m_pMotion[4] = 0i64;
  this->m_pmParentPosture = 0i64;
  this->m_pParentModel = 0i64;
  *(_QWORD *)&this->m_iParentBone = -1i64;
  *(_QWORD *)&this->m_iChildBone = 0i64;
  this->m_iSecCount = 0;
  this->m_bPrevBoneMirrorFlg = 0;
  this->m_pmBoneWorld = 0i64;
  this->m_pfVertexBuffer = 0i64;
  this->m_pfPreVertexBuffer = 0i64;
  this->m_pfWorldBuffer = 0i64;
  this->m_pfPrevWorldBuffer = 0i64;
  this->m_pmPrevBoneWorld = 0i64;
  this->m_pfIndexBuffer = 0i64;
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
  *(_QWORD *)this->m_OrthoView.m = 1065353216i64;
  this->m_OrthoView.m[4] = 0.0;
  *(_QWORD *)&this->m_OrthoView.m[8] = 0i64;
  *(_QWORD *)&this->m_OrthoView.m[12] = 0i64;
  *(_QWORD *)&this->m_OrthoView.m[5] = 1065353216i64;
  *(_QWORD *)&this->m_OrthoView.m[2] = 0i64;
  *(_QWORD *)&this->m_OrthoView.m[10] = 1065353216i64;
  this->m_OrthoView.m[14] = 0.0;
  this->m_OrthoView.m[7] = 0.0;
  this->m_OrthoView.m[15] = 1.0;
  this->m_bProjectionBlend = 0;
  this->m_pusIndexShadow = 0i64;
  this->m_usIndexShadowCount = 0;
  this->m_pfVertexCoord = 0i64;
  this->m_pfTexCoord[0] = 0i64;
  this->m_pfTexCoord[1] = 0i64;
  this->m_pfTexCoord[2] = 0i64;
  this->m_pfTexCoord[3] = 0i64;
  this->m_pfNormalCoord = 0i64;
  this->m_piVerColor = 0i64;
  this->m_pfTangentCoord = 0i64;
  this->m_pbBoneMirrorFlg = 0i64;
  this->m_pbBoneMirrorFlg2 = 0i64;
  this->m_pBoneInfo = 0i64;
  memset(this->m_pTexture, 0, 0x1C00ui64);
  *(_DWORD *)&this->m_bTrans = 0;
  this->m_bMaterialVisible = 0i64;
  this->m_bMaterialShadowVisible = 0i64;
  this->m_pMaterial = 0i64;
  this->m_ucMaterialCount = 0;
  this->m_pMirror = 0i64;
  this->m_MirrorEnable = 0;
  this->m_pSecondary = 0i64;
  this->m_SecondaryInfo = 0i64;
  *(_WORD *)&this->m_SecondaryEnable = 0;
  this->m_SecondaryCollisionEnable = 1;
  this->m_iSecondaryForceCount = 0;
  this->m_pCamera = 0i64;
  this->m_iPriority = 0;
  this->m_bMotOffScaleFlg = 0;
  *(_QWORD *)&this->m_fMotOffScaleTemp = 1065353216i64;
  *(_QWORD *)this->m_iMotOffScaleBoneNo = -1i64;
  this->m_fMotOffScale[0] = 1.0;
  this->m_fMotOffScaleCommon[0] = 1.0;
  this->m_fMotOffScale[1] = 1.0;
  this->m_fMotOffScaleCommon[1] = 1.0;
  this->m_bBaseOffScaleFlg = 0;
  *(_QWORD *)&this->vertexBuffer = 0i64;
  *(_QWORD *)&this->numVerticesBuffer = 0i64;
  *(_WORD *)&this->m_ownsVertexBuffer = 0;
  this->m_createBuffersReq = CreateBuffersRequest_None;
  this->indexBuffer = 0i64;
  this->m_bVaoFlg = 0;
  this->m_cFollowBone = 0i64;
  this->m_cFollowTargetBone = 0i64;
  this->m_iMirrorBaseBoneNo = -1;
  this->m_iMirrorBoneIdx = 0i64;
  this->m_iMirrorBoneRIdx = 0i64;
  this->m_iSecondaryBoneIdx = 0i64;
  this->m_iSecondaryBoneRIdx = 0i64;
  this->m_iFigureBoneIdx = 0i64;
  this->m_iMotionBoneIdx[0] = 0i64;
  this->m_iMotionBoneIdx[1] = 0i64;
  this->m_iMotionBoneIdx[2] = 0i64;
  this->m_iMotionBoneIdx[3] = 0i64;
  this->m_iMotionBoneIdx[4] = 0i64;
  *(_QWORD *)this->m_iMotionCount = 0i64;
  *(_QWORD *)&this->m_iMotionCount[2] = 0i64;
  this->m_iMotionCount[4] = 0;
  this->m_iExternalMotionBoneIdx[0] = 0i64;
  this->m_iExternalMotionBoneIdx[1] = 0i64;
  this->m_iExternalMotionBoneIdx[2] = 0i64;
  this->m_iExternalMotionBoneIdx[3] = 0i64;
  this->m_iExternalMotionBoneIdx[4] = 0i64;
  *(_QWORD *)this->m_iExternalMotionCount = 0i64;
  *(_QWORD *)&this->m_iExternalMotionCount[2] = 0i64;
  this->m_iExternalMotionCount[4] = 0;
  *(_QWORD *)&this->m_iCurrentMotion = 0i64;
  this->m_uiModeFlg = 0;
  this->m_uiUseCommonObac = 0;
  this->m_cModelName = 0i64;
  this->m_uiUseMotionFlg = 1;
  this->m_modelFXFlg = 0;
  this->m_modelFXEXStrength = 1.0;
  this->m_pEffectTexture[0] = 0i64;
  this->m_pEffectTexture[1] = 0i64;
  this->m_pEffectTexture[2] = 0i64;
  this->m_pEffectTexture[3] = 0i64;
  this->m_pEffectTexture[4] = 0i64;
  this->m_pEffectTexture[5] = 0i64;
  this->m_pEffectTexture[6] = 0i64;
  this->m_pEffectTexture[7] = 0i64;
  this->m_iMotionPostureCount = 0;
  *(_DWORD *)&this->m_useShaderFX = 16843008;
  *(_WORD *)&this->m_createMaskFlg = 0;
  this->m_skipSelfShadowLightId = -1;
  this->m_shadowTextureId = 0;
  *(_QWORD *)&this->m_zOffset = 0i64;
  this->m_opacity = 1.0;
  *(_QWORD *)&this->m_matOpacity = 1065353216i64;
  this->m_fillColourType = 0;
  *(_QWORD *)this->m_fillColour = 0i64;
  *(_QWORD *)&this->m_fillColour[2] = 0i64;
  *(_QWORD *)&this->m_rimLightMin = 0i64;
  this->m_rimLightStrength = 0.0;
  *(_QWORD *)this->m_rimLightColour = 0i64;
  *(_QWORD *)&this->m_rimLightColour[2] = 0i64;
  *(_QWORD *)&this->m_shaderEyeDiffuseEmiStrength = 1065353216i64;
  this->m_fSkinWrap = 0.003;
  this->m_fSkinScatterWidth = 0.30000001;
  *(_QWORD *)this->m_fSkinScatterCol = 1041865114i64;
  *(_QWORD *)&this->m_fSkinScatterCol[2] = 0i64;
  this->m_nSkinShininess = 4;
  if ( !OGLModel::m_ComputeShaderTbl )
  {
    OGLModel::m_ComputeShaderTbl = (OGLShader **)operator new[](0x68ui64);
    v5 = Framework::GLManager::glm;
    v85 = Framework::GLManager::glm;
    if ( v5->mainGraphicsPthread != Concurrency::details::platform::GetCurrentThreadId() )
    {
      v6 = *(_QWORD *)NtCurrentTeb()->Reserved1[11];
      if ( !*(_DWORD *)(v6 + 12) && *(int *)(v6 + 8) <= 1 )
      {
        DisplayByIndex = AgDisplayManager::getDisplayByIndex(
                           (AgDisplayManager *)AgSingleton<AgDisplayManager>::ms_instance,
                           &result,
                           0);
        Log = Scaleform::GFx::Stream::GetLog(DisplayByIndex->m_ptr);
        AgDisplayPlatformImplementation::loadingLock(Log, 1u);
        m_ptr = result.m_ptr;
        result.m_ptr = 0i64;
        m_ref = result.m_ref;
        if ( result.m_ref )
        {
          result.m_ref = 0i64;
          v11 = 0;
          if ( !AgAtomicDecrement(&m_ref->m_strongCount) )
          {
            if ( !AgAtomicDecrement(&m_ref->m_weakCount) )
              v11 = 1;
            m_ref->m_data = 0i64;
            if ( m_ptr )
            {
              AgDisplay::~AgDisplay(m_ptr);
              operator delete(m_ptr, 0x70ui64);
            }
            if ( v11 )
              AgReferenceCount::operator delete(m_ref);
          }
          v5 = v85;
        }
        *(_DWORD *)(v6 + 8) = 2;
      }
    }
    v12 = (OGLShader *)operator new(0x40ui64);
    v12->m_Program = 0;
    v12->m_piGLAttrib.glValue = 0i64;
    v12->m_iGLAttribNum = 0;
    v12->m_piGLUniform = 0i64;
    v12->m_piGLAttrib.divisor = 0i64;
    v12->m_fragFile = 0i64;
    v12->m_programSlot = -1;
    OGLShader::createComputeShader(v12, transformShaderStr[0], v13, v14, v57, 0, 0i64, v70);
    *OGLModel::m_ComputeShaderTbl = v12;
    v15 = (OGLShader *)operator new(0x40ui64);
    v15->m_Program = 0;
    v15->m_piGLAttrib.glValue = 0i64;
    v15->m_iGLAttribNum = 0;
    v15->m_piGLUniform = 0i64;
    v15->m_piGLAttrib.divisor = 0i64;
    v15->m_fragFile = 0i64;
    v15->m_programSlot = -1;
    OGLShader::createComputeShader(v15, transformShaderStr[1], v16, v17, v58, 0, 0i64, v71);
    OGLModel::m_ComputeShaderTbl[1] = v15;
    v18 = (OGLShader *)operator new(0x40ui64);
    v18->m_Program = 0;
    v18->m_piGLAttrib.glValue = 0i64;
    v18->m_iGLAttribNum = 0;
    v18->m_piGLUniform = 0i64;
    v18->m_piGLAttrib.divisor = 0i64;
    v18->m_fragFile = 0i64;
    v18->m_programSlot = -1;
    OGLShader::createComputeShader(v18, transformShaderStr[2], v19, v20, v59, 0, 0i64, v72);
    OGLModel::m_ComputeShaderTbl[2] = v18;
    v21 = (OGLShader *)operator new(0x40ui64);
    v21->m_Program = 0;
    v21->m_piGLAttrib.glValue = 0i64;
    v21->m_iGLAttribNum = 0;
    v21->m_piGLUniform = 0i64;
    v21->m_piGLAttrib.divisor = 0i64;
    v21->m_fragFile = 0i64;
    v21->m_programSlot = -1;
    OGLShader::createComputeShader(v21, transformShaderStr[3], v22, v23, v60, 0, 0i64, v73);
    OGLModel::m_ComputeShaderTbl[3] = v21;
    v24 = (OGLShader *)operator new(0x40ui64);
    v24->m_Program = 0;
    v24->m_piGLAttrib.glValue = 0i64;
    v24->m_iGLAttribNum = 0;
    v24->m_piGLUniform = 0i64;
    v24->m_piGLAttrib.divisor = 0i64;
    v24->m_fragFile = 0i64;
    v24->m_programSlot = -1;
    OGLShader::createComputeShader(v24, transformShaderStr[4], v25, v26, v61, 0, 0i64, v74);
    OGLModel::m_ComputeShaderTbl[4] = v24;
    v27 = (OGLShader *)operator new(0x40ui64);
    v27->m_Program = 0;
    v27->m_piGLAttrib.glValue = 0i64;
    v27->m_iGLAttribNum = 0;
    v27->m_piGLUniform = 0i64;
    v27->m_piGLAttrib.divisor = 0i64;
    v27->m_fragFile = 0i64;
    v27->m_programSlot = -1;
    OGLShader::createComputeShader(v27, transformShaderStr[5], v28, v29, v62, 0, 0i64, v75);
    OGLModel::m_ComputeShaderTbl[5] = v27;
    v30 = (OGLShader *)operator new(0x40ui64);
    v30->m_Program = 0;
    v30->m_piGLAttrib.glValue = 0i64;
    v30->m_iGLAttribNum = 0;
    v30->m_piGLUniform = 0i64;
    v30->m_piGLAttrib.divisor = 0i64;
    v30->m_fragFile = 0i64;
    v30->m_programSlot = -1;
    OGLShader::createComputeShader(v30, transformShaderStr[6], v31, v32, v63, 0, 0i64, v76);
    OGLModel::m_ComputeShaderTbl[6] = v30;
    v33 = (OGLShader *)operator new(0x40ui64);
    v33->m_Program = 0;
    v33->m_piGLAttrib.glValue = 0i64;
    v33->m_iGLAttribNum = 0;
    v33->m_piGLUniform = 0i64;
    v33->m_piGLAttrib.divisor = 0i64;
    v33->m_fragFile = 0i64;
    v33->m_programSlot = -1;
    OGLShader::createComputeShader(v33, transformShaderStr[7], v34, v35, v64, 0, 0i64, v77);
    OGLModel::m_ComputeShaderTbl[7] = v33;
    v36 = (OGLShader *)operator new(0x40ui64);
    v36->m_Program = 0;
    v36->m_piGLAttrib.glValue = 0i64;
    v36->m_iGLAttribNum = 0;
    v36->m_piGLUniform = 0i64;
    v36->m_piGLAttrib.divisor = 0i64;
    v36->m_fragFile = 0i64;
    v36->m_programSlot = -1;
    OGLShader::createComputeShader(v36, transformShaderStr[8], v37, v38, v65, 0, 0i64, v78);
    OGLModel::m_ComputeShaderTbl[8] = v36;
    v39 = (OGLShader *)operator new(0x40ui64);
    v39->m_Program = 0;
    v39->m_piGLAttrib.glValue = 0i64;
    v39->m_iGLAttribNum = 0;
    v39->m_piGLUniform = 0i64;
    v39->m_piGLAttrib.divisor = 0i64;
    v39->m_fragFile = 0i64;
    v39->m_programSlot = -1;
    OGLShader::createComputeShader(v39, transformShaderStr[9], v40, v41, v66, 0, 0i64, v79);
    OGLModel::m_ComputeShaderTbl[9] = v39;
    v42 = (OGLShader *)operator new(0x40ui64);
    v42->m_Program = 0;
    v42->m_piGLAttrib.glValue = 0i64;
    v42->m_iGLAttribNum = 0;
    v42->m_piGLUniform = 0i64;
    v42->m_piGLAttrib.divisor = 0i64;
    v42->m_fragFile = 0i64;
    v42->m_programSlot = -1;
    OGLShader::createComputeShader(v42, transformShaderStr[10], v43, v44, v67, 0, 0i64, v80);
    OGLModel::m_ComputeShaderTbl[10] = v42;
    v45 = (OGLShader *)operator new(0x40ui64);
    v45->m_Program = 0;
    v45->m_piGLAttrib.glValue = 0i64;
    v45->m_iGLAttribNum = 0;
    v45->m_piGLUniform = 0i64;
    v45->m_piGLAttrib.divisor = 0i64;
    v45->m_fragFile = 0i64;
    v45->m_programSlot = -1;
    OGLShader::createComputeShader(v45, transformShaderStr[11], v46, v47, v68, 0, 0i64, v81);
    OGLModel::m_ComputeShaderTbl[11] = v45;
    v86 = (OGLShader *)operator new(0x40ui64);
    v86->m_Program = 0;
    v86->m_piGLAttrib.glValue = 0i64;
    v86->m_iGLAttribNum = 0;
    v86->m_piGLUniform = 0i64;
    v86->m_piGLAttrib.divisor = 0i64;
    v86->m_fragFile = 0i64;
    v86->m_programSlot = -1;
    OGLShader::createComputeShader(v86, transformShaderStr[12], v48, v49, v69, 0, 0i64, v82);
    OGLModel::m_ComputeShaderTbl[12] = v86;
    if ( v5->mainGraphicsPthread != Concurrency::details::platform::GetCurrentThreadId() )
    {
      v50 = (__int64 *)NtCurrentTeb()->Reserved1[11];
      v51 = *v50;
      if ( *(_DWORD *)(*v50 + 8) == 2 )
      {
        glFlush();
        v52 = AgDisplayManager::getDisplayByIndex(
                (AgDisplayManager *)AgSingleton<AgDisplayManager>::ms_instance,
                &v84,
                0);
        v53 = Scaleform::GFx::Stream::GetLog(v52->m_ptr);
        AgDisplayPlatformImplementation::loadingUnlock(v53, 1u);
        v54 = v84.m_ptr;
        v84.m_ptr = 0i64;
        v55 = v84.m_ref;
        if ( v84.m_ref )
        {
          v84.m_ref = 0i64;
          v56 = 0;
          if ( !AgAtomicDecrement(&v55->m_strongCount) )
          {
            if ( !AgAtomicDecrement(&v55->m_weakCount) )
              v56 = 1;
            v55->m_data = 0i64;
            if ( v54 )
            {
              AgDisplay::~AgDisplay(v54);
              operator delete(v54, 0x70ui64);
            }
            if ( v56 )
              AgReferenceCount::operator delete(v55);
          }
        }
        *(_DWORD *)(v51 + 8) = 0;
      }
    }
  }
  *(_QWORD *)this->cIdentifyStr = 0i64;
  *(_QWORD *)&this->cIdentifyStr[8] = 0i64;
  *(_QWORD *)&this->cIdentifyStr[16] = 0i64;
  *(_QWORD *)&this->cIdentifyStr[24] = 0i64;
  *(_QWORD *)&this->cIdentifyStr[32] = 0i64;
  *(_QWORD *)&this->cIdentifyStr[40] = 0i64;
  *(_QWORD *)&this->cIdentifyStr[48] = 0i64;
  *(_QWORD *)&this->cIdentifyStr[56] = 0i64;
  sprintf(this->cIdentifyStr, "model0%llx", this);
  this->bCreateUpdateThread = 0;
  this->bWakeThread._My_val = 1;
  EnterCriticalSection((LPCRITICAL_SECTION)&this->m_postureCondMutex);
  EnterCriticalSection((LPCRITICAL_SECTION)&this->m_postureReadyCond);
  WakeConditionVariable((PCONDITION_VARIABLE)&this->m_postureReadyCond.m_conditionVariable.m_data);
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->m_postureReadyCond);
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->m_postureCondMutex);
  this->bUseCompute = 0;
}

void __fastcall multiplyDXGL(Matrix4Unaligned *Out, OGLMatrix *In0, OGLMatrix *In1)
{
  float v3; // xmm2_4
  float v4; // xmm0_4
  float v5; // xmm1_4
  float v6; // xmm2_4
  float v7; // xmm0_4
  float v8; // xmm1_4
  float v9; // xmm2_4
  float v10; // xmm1_4
  float v11; // xmm2_4

  Out->x.x = (float)((float)(In0->m[0] * In1->m[0]) + (float)(In1->m[4] * In0->m[1])) - (float)(In0->m[2] * In1->m[8]);
  Out->y.x = (float)((float)(In1->m[5] * In0->m[1]) + (float)(In1->m[1] * In0->m[0])) - (float)(In1->m[9] * In0->m[2]);
  v3 = In1->m[6] * In0->m[1];
  v4 = In1->m[2] * In0->m[0];
  v5 = In1->m[10] * In0->m[2];
  Out->w.x = 0.0;
  Out->z.x = (float)(v3 + v4) - v5;
  Out->x.y = (float)((float)(In1->m[4] * In0->m[5]) + (float)(In1->m[0] * In0->m[4])) - (float)(In0->m[6] * In1->m[8]);
  Out->y.y = (float)((float)(In1->m[5] * In0->m[5]) + (float)(In1->m[1] * In0->m[4])) - (float)(In1->m[9] * In0->m[6]);
  v6 = In1->m[6] * In0->m[5];
  v7 = In1->m[2] * In0->m[4];
  v8 = In1->m[10] * In0->m[6];
  Out->w.y = 0.0;
  Out->z.y = (float)(v6 + v7) - v8;
  Out->x.z = (float)((float)(In1->m[4] * In0->m[9]) + (float)(In1->m[0] * In0->m[8])) - (float)(In0->m[10] * In1->m[8]);
  Out->y.z = (float)((float)(In1->m[5] * In0->m[9]) + (float)(In1->m[1] * In0->m[8])) - (float)(In1->m[9] * In0->m[10]);
  v9 = (float)(In1->m[6] * In0->m[9]) + (float)(In1->m[2] * In0->m[8]);
  v10 = In1->m[10] * In0->m[10];
  Out->w.z = 0.0;
  Out->z.z = v9 - v10;
  Out->x.w = (float)((float)((float)(In1->m[4] * In0->m[13]) + (float)(In1->m[0] * In0->m[12]))
                   - (float)(In0->m[14] * In1->m[8]))
           + In1->m[12];
  Out->y.w = (float)((float)((float)(In1->m[5] * In0->m[13]) + (float)(In1->m[1] * In0->m[12]))
                   - (float)(In1->m[9] * In0->m[14]))
           + In1->m[13];
  v11 = (float)((float)((float)(In1->m[6] * In0->m[13]) + (float)(In1->m[2] * In0->m[12]))
              - (float)(In1->m[10] * In0->m[14]))
      + In1->m[14];
  Out->w.w = 1.0;
  Out->z.w = v11;
}

void __fastcall OGLModel::onExecuteThread(OGLModel *this)
{
  this->m_threadRunning = 1;
  updatetask(this);
  this->m_threadRunning = 0;
}

void __fastcall ActorWeapon::ActionFlagCheck(_SETJMP_FLOAT128 *JumpBuffer)
{
  ;
}

void __fastcall OGLModel::rebuildVertexBuffer(OGLModel *this)
{
  unsigned int vertexBuffer; // edx

  if ( !OGLModel::checkCreateBuffers(this) )
  {
    vertexBuffer = this->vertexBuffer;
    if ( vertexBuffer )
    {
      if ( this->m_pFigure )
      {
        _glewBindBuffer(0x8892u, vertexBuffer);
        _glewBufferData(0x8892u, 88i64 * this->m_pFigure->m_usVertexCoordCount, this->m_pfVertexBuffer, 0x88E4u);
        _glewBindBuffer(0x8892u, 0);
      }
    }
  }
}

void __fastcall OGLModel::resetBoneChange(OGLModel *this)
{
  OGLFigure *m_pFigure; // rax
  int v3; // eax
  __int64 v4; // r8
  unsigned __int64 v5; // r9
  unsigned __int64 v6; // rcx
  _OGLModelBone *m_pBoneInfo; // rax
  _OGLModelBone *v8; // rax
  _OGLModelBone *v9; // rax
  _OGLModelBone *v10; // rax
  __int64 v11; // rcx
  _OGLModelBone *v12; // rax

  m_pFigure = this->m_pFigure;
  if ( m_pFigure )
  {
    v3 = m_pFigure->m_uiBoneCount - 1;
    v4 = v3;
    if ( v3 >= 0 )
    {
      if ( v3 + 1i64 >= 4 )
      {
        v5 = (unsigned __int64)(v3 + 1i64) >> 2;
        v6 = v3;
        v4 = v3 - 4 * v5;
        do
        {
          v6 -= 4i64;
          this->m_pBoneInfo[v6 + 4].bChangeFlg = 0;
          this->m_pBoneInfo[v6 + 4].boneTarget.bUseFlg = 0;
          m_pBoneInfo = this->m_pBoneInfo;
          *(_QWORD *)&m_pBoneInfo[v6 + 4].boneTarget.qPrevRot.x = 0i64;
          m_pBoneInfo[v6 + 4].boneTarget.qPrevRot.z = 0.0;
          m_pBoneInfo[v6 + 4].boneTarget.qPrevRot.w = 1.0;
          this->m_pBoneInfo[v6 + 3].bChangeFlg = 0;
          this->m_pBoneInfo[v6 + 3].boneTarget.bUseFlg = 0;
          v8 = this->m_pBoneInfo;
          *(_QWORD *)&v8[v6 + 3].boneTarget.qPrevRot.x = 0i64;
          v8[v6 + 3].boneTarget.qPrevRot.z = 0.0;
          v8[v6 + 3].boneTarget.qPrevRot.w = 1.0;
          this->m_pBoneInfo[v6 + 2].bChangeFlg = 0;
          this->m_pBoneInfo[v6 + 2].boneTarget.bUseFlg = 0;
          v9 = this->m_pBoneInfo;
          *(_QWORD *)&v9[v6 + 2].boneTarget.qPrevRot.x = 0i64;
          v9[v6 + 2].boneTarget.qPrevRot.z = 0.0;
          v9[v6 + 2].boneTarget.qPrevRot.w = 1.0;
          this->m_pBoneInfo[v6 + 1].bChangeFlg = 0;
          this->m_pBoneInfo[v6 + 1].boneTarget.bUseFlg = 0;
          v10 = this->m_pBoneInfo;
          *(_QWORD *)&v10[v6 + 1].boneTarget.qPrevRot.x = 0i64;
          v10[v6 + 1].boneTarget.qPrevRot.z = 0.0;
          v10[v6 + 1].boneTarget.qPrevRot.w = 1.0;
          --v5;
        }
        while ( v5 );
      }
      if ( v4 >= 0 )
      {
        v11 = v4;
        do
        {
          --v4;
          this->m_pBoneInfo[v11--].bChangeFlg = 0;
          this->m_pBoneInfo[v11 + 1].boneTarget.bUseFlg = 0;
          v12 = this->m_pBoneInfo;
          *(_QWORD *)&v12[v11 + 1].boneTarget.qPrevRot.x = 0i64;
          v12[v11 + 1].boneTarget.qPrevRot.z = 0.0;
          v12[v11 + 1].boneTarget.qPrevRot.w = 1.0;
        }
        while ( v4 >= 0 );
      }
    }
  }
}

void __fastcall OGLModel::resetMaterialFillColour(OGLModel *this, int effectFlg)
{
  int v3; // edx
  __int64 v4; // r8
  OGLMaterial *v5; // rcx

  v3 = 0;
  if ( this->m_ucMaterialCount )
  {
    v4 = 0i64;
    do
    {
      v5 = &this->m_pMaterial[v4];
      if ( v5 )
        v5->m_fillColourType = 0;
      ++v3;
      ++v4;
    }
    while ( v3 < this->m_ucMaterialCount );
  }
}

__int64 __fastcall OGLModel::searchBoneFigureToSecondary(OGLModel *this, int no)
{
  int *m_iSecondaryBoneIdx; // rcx
  int v4; // er8
  OGLSecondary *m_pSecondary; // rax
  __int64 m_uiBoneCount; // rcx
  unsigned int v7; // edx
  _SECONDARY_BONE_BASE_INFO2 *m_pSecondaryBoneInfo2; // rax
  __int64 v9; // r9
  __int64 v10; // rcx

  m_iSecondaryBoneIdx = this->m_iSecondaryBoneIdx;
  if ( m_iSecondaryBoneIdx )
    v4 = m_iSecondaryBoneIdx[no];
  else
    v4 = OGLModel::convertBoneFigureToSecondary(this, no);
  m_pSecondary = this->m_pSecondary;
  if ( !m_pSecondary )
    return 0xFFFFFFFFi64;
  if ( v4 < 0 )
    return 0xFFFFFFFFi64;
  m_uiBoneCount = (int)m_pSecondary->m_uiBoneCount;
  if ( !(_DWORD)m_uiBoneCount )
    return 0xFFFFFFFFi64;
  v7 = 0;
  if ( (int)m_uiBoneCount <= 0 )
    return 0xFFFFFFFFi64;
  m_pSecondaryBoneInfo2 = m_pSecondary->m_pSecondaryBoneInfo2;
  v9 = m_uiBoneCount;
  v10 = 0i64;
  while ( m_pSecondaryBoneInfo2->iBoneNo != v4 )
  {
    ++v7;
    ++v10;
    ++m_pSecondaryBoneInfo2;
    if ( v10 >= v9 )
      return 0xFFFFFFFFi64;
  }
  return v7;
}

OGLAnimationBone *__fastcall OGLModel::searchMotionAnibone(
        OGLModel *this,
        int iBoneNo,
        int *iMotionNo,
        int *iAniboneNo)
{
  OGLFigure *m_pFigure; // r10
  OGLMotion *v8; // rax
  OGLAnimationBone *result; // rax
  __int64 v10; // r15
  int v11; // ebx
  int *v12; // rbp
  __int64 v13; // rdi
  OGLMotion **i; // r14
  const char *v15; // rdx
  OGLMotionData *v16; // r8
  int v17; // eax
  __int64 v18; // r10
  OGLAnimationBone *v19; // r9
  unsigned __int8 *v20; // rax
  unsigned __int8 *v21; // r8
  int v22; // ecx
  int v23; // edx

  m_pFigure = this->m_pFigure;
  if ( !m_pFigure )
    return 0i64;
  v8 = this->m_pMotion[0];
  if ( !v8 || !v8->m_cBoneName )
    return 0i64;
  v10 = iBoneNo;
  if ( !m_pFigure->m_pBone[v10].m_cName )
    return 0i64;
  v11 = 4;
  v12 = &this->m_iMotionIndex[4];
  v13 = 4i64;
  for ( i = &this->m_pMotion[4]; ; --i )
  {
    if ( *i )
    {
      if ( !v11
        || (v15 = this->m_pAniboneStr[v11]) != 0i64 && !strstr((const char *)this->m_pFigure->m_pBone[v10].m_cName, v15) )
      {
        v16 = (*i)->m_ppMotionData[*v12];
        v17 = v16->m_iAnimBoneCount - 1;
        if ( v17 >= 0 )
          break;
      }
    }
LABEL_22:
    --v13;
    --v12;
    if ( --v11 < 0 )
      return 0i64;
  }
  v18 = v17;
  v19 = &v16->m_pAnimBone[v17];
  while ( 1 )
  {
    v20 = (*i)->m_cBoneName[v19->m_iBoneID];
    if ( v20 && ((v19->m_uiInfoFlg & 1) == 0 || !v13) )
    {
      v21 = (unsigned __int8 *)(this->m_pFigure->m_pBone[v10].m_cName - v20);
      do
      {
        v22 = v21[(_QWORD)v20];
        v23 = *v20 - v22;
        if ( v23 )
          break;
        ++v20;
      }
      while ( v22 );
      if ( !v23 )
        break;
    }
    --v19;
    if ( --v18 < 0 )
      goto LABEL_22;
  }
  *iMotionNo = v11;
  result = v19;
  *iAniboneNo = v19->m_iBoneID;
  return result;
}

void __fastcall OGLModel::searchMotionAniboneLight(OGLModel *this, int iBoneNo, int *iMotionNo)
{
  OGLFigure *m_pFigure; // r9
  OGLMotion *v6; // rax
  __int64 v7; // r12
  int v8; // ebx
  const char *v9; // rsi
  OGLMotion **v10; // rdi
  int *v11; // r15
  OGLMotionData *v12; // r8
  int v13; // eax
  __int64 v14; // r10
  unsigned __int8 **m_cBoneName; // r11
  __int64 v16; // r9
  unsigned __int8 *v17; // rax
  unsigned __int8 *v18; // r8
  int v19; // ecx
  int v20; // edx

  m_pFigure = this->m_pFigure;
  if ( m_pFigure )
  {
    v6 = this->m_pMotion[0];
    if ( v6 )
    {
      if ( v6->m_cBoneName )
      {
        v7 = iBoneNo;
        if ( m_pFigure->m_pBone[v7].m_cName )
        {
          v8 = 4;
          v9 = this->m_pAniboneStr[4];
          v10 = &this->m_pMotion[4];
          v11 = &this->m_iMotionIndex[4];
          do
          {
            if ( *v10 && (!v8 || v9 && !strstr((const char *)this->m_pFigure->m_pBone[v7].m_cName, v9)) )
            {
              v12 = (*v10)->m_ppMotionData[*v11];
              v13 = v12->m_iAnimBoneCount - 1;
              v14 = v13;
              if ( v13 >= 0 )
              {
                m_cBoneName = (*v10)->m_cBoneName;
                v16 = (__int64)&v12->m_pAnimBone[v13];
                do
                {
                  v17 = m_cBoneName[*(int *)(v16 + 4)];
                  if ( v17 && ((*(_BYTE *)v16 & 1) == 0 || !v8) )
                  {
                    v18 = (unsigned __int8 *)(this->m_pFigure->m_pBone[v7].m_cName - v17);
                    do
                    {
                      v19 = v18[(_QWORD)v17];
                      v20 = *v17 - v19;
                      if ( v20 )
                        break;
                      ++v17;
                    }
                    while ( v19 );
                    if ( !v20 )
                      *iMotionNo = v8;
                  }
                  v16 -= 56i64;
                  --v14;
                }
                while ( v14 >= 0 );
              }
            }
            v9 -= 32;
            --v11;
            --v10;
            --v8;
          }
          while ( v8 >= 0 );
        }
      }
    }
  }
}

__int64 __fastcall OGLModel::searchMotionBoneFromName(OGLModel *this, const char *cBoneName)
{
  OGLFigure *m_pFigure; // rcx
  int v5; // er9
  __int64 v6; // r10
  const char **i; // r11

  m_pFigure = this->m_pFigure;
  if ( !m_pFigure )
    return 0xFFFFFFFFi64;
  if ( !this->m_pMotion[0] )
    return 0xFFFFFFFFi64;
  if ( !cBoneName )
    return 0xFFFFFFFFi64;
  v5 = m_pFigure->m_uiBoneCount - 1;
  if ( v5 < 0 )
    return 0xFFFFFFFFi64;
  v6 = v5;
  for ( i = (const char **)&m_pFigure->m_pBone[v5].m_cName; !*i || strcmp(cBoneName, *i); i -= 29 )
  {
    --v5;
    if ( --v6 < 0 )
      return 0xFFFFFFFFi64;
  }
  return (unsigned int)v5;
}

__int64 __fastcall OGLModel::searchMotionBoneFromNameReverse(OGLModel *this, const char *cBoneName)
{
  OGLFigure *m_pFigure; // rcx
  int v5; // er9
  __int64 v6; // r10
  const char **i; // r11

  m_pFigure = this->m_pFigure;
  if ( !m_pFigure )
    return 0xFFFFFFFFi64;
  if ( !this->m_pMotion[0] )
    return 0xFFFFFFFFi64;
  if ( !cBoneName )
    return 0xFFFFFFFFi64;
  v5 = m_pFigure->m_uiBoneCount - 1;
  if ( v5 <= 0 )
    return 0xFFFFFFFFi64;
  v6 = v5;
  for ( i = (const char **)&m_pFigure->m_pBone[v5].m_cName; !*i || strcmp(cBoneName, *i); i -= 29 )
  {
    --v5;
    if ( --v6 <= 0 )
      return 0xFFFFFFFFi64;
  }
  return (unsigned int)v5;
}

OGLAnimationBone *__fastcall OGLModel::searchMotionBoneID(
        OGLModel *this,
        int iBoneNo,
        int *iMotionNo,
        int *iAniboneNo,
        unsigned __int8 bParts)
{
  __int64 v7; // rbx
  OGLAnimationBone *result; // rax
  int v10; // er8
  __int64 v11; // rsi
  int *v12; // rdi
  OGLMotion **v13; // r14
  unsigned int m_uiUseMotionFlg; // er15
  __int64 v15; // rcx
  int **v16; // r9
  int *v17; // rcx
  OGLAnimationBone *v18; // r9
  __int64 v19; // rax
  int **v20; // rdx
  __int64 v21; // r9
  int *v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  OGLAnimationBone *m_pAnimBone; // rax
  OGLAnimationBone *v26; // r9
  int m_iBoneID; // ecx

  v7 = iBoneNo;
  if ( !this->m_iMotionBoneIdx[0] )
    return OGLModel::searchMotionAnibone(this, iBoneNo, iMotionNo, iAniboneNo);
  v10 = 4;
  v11 = 4i64;
  v12 = &this->m_iMotionIndex[4];
  v13 = &this->m_pMotion[4];
  m_uiUseMotionFlg = this->m_uiUseMotionFlg;
  while ( 1 )
  {
    if ( _bittest((const int *)&m_uiUseMotionFlg, v10) )
    {
      v15 = *v12;
      if ( (int)v15 >= 0 && (bParts || v10 != 4) )
      {
        if ( !v10 )
        {
          if ( this->m_pExternalMotion )
            v16 = this->m_iExternalMotionBoneIdx[this->m_iCurrentExternalMotion];
          else
            v16 = this->m_iMotionBoneIdx[this->m_iCurrentMotion];
          if ( v16 )
          {
            v17 = v16[v15];
            if ( v17 )
            {
              if ( v17[v7] >= 0 )
              {
                v18 = &this->m_pMotion[0]->m_ppMotionData[this->m_iMotionIndex[0]]->m_pAnimBone[v16[this->m_iMotionIndex[0]][v7]];
                *iMotionNo = 0;
                result = v18;
                *iAniboneNo = v18->m_iBoneID;
                return result;
              }
            }
          }
          goto LABEL_23;
        }
        v19 = v11;
        if ( v10 == this->m_iCurrentMotion )
          v19 = 0i64;
        v20 = this->m_iMotionBoneIdx[v19];
        if ( v20 )
        {
          v21 = v15;
          v22 = v20[v15];
          if ( v22 )
          {
            v23 = v22[v7];
            if ( (int)v23 >= 0 )
            {
              v24 = v23;
              m_pAnimBone = (*v13)->m_ppMotionData[v21]->m_pAnimBone;
              if ( (m_pAnimBone[v23].m_uiInfoFlg & 1) == 0 && (int)v7 > 1 )
                break;
            }
          }
        }
      }
    }
LABEL_23:
    --v11;
    --v12;
    --v13;
    if ( --v10 < 0 )
      return 0i64;
  }
  v26 = &m_pAnimBone[v24];
  *iMotionNo = v10;
  m_iBoneID = m_pAnimBone[v24].m_iBoneID;
  result = v26;
  *iAniboneNo = m_iBoneID;
  return result;
}

void __fastcall OGLModel::searchMotionBoneIDLight(OGLModel *this, int iBoneNo, int *iMotionNo, unsigned __int8 bParts)
{
  __int64 v6; // rdi
  unsigned int m_uiUseMotionFlg; // er14
  OGLMotion **v9; // rsi
  int v10; // eax
  int *v11; // r10
  __int64 v12; // r11
  __int64 v13; // r8
  int **v14; // rdx
  int *v15; // r8
  __int64 v16; // rcx
  int **v17; // rdx
  __int64 v18; // r8
  int *v19; // rdx
  __int64 v20; // r9

  v6 = iBoneNo;
  if ( !this->m_iMotionBoneIdx[0] )
    OGLModel::searchMotionAniboneLight(this, iBoneNo, iMotionNo);
  v9 = &this->m_pMotion[4];
  v10 = 4;
  v11 = &this->m_iMotionIndex[4];
  v12 = 4i64;
  while ( 1 )
  {
    m_uiUseMotionFlg = this->m_uiUseMotionFlg;
    if ( !_bittest((const int *)&m_uiUseMotionFlg, v10) )
      goto LABEL_23;
    v13 = *v11;
    if ( (int)v13 < 0 || !bParts && v10 == 4 )
      goto LABEL_23;
    if ( v10 )
      break;
    if ( this->m_pExternalMotion )
      v14 = this->m_iExternalMotionBoneIdx[this->m_iCurrentExternalMotion];
    else
      v14 = this->m_iMotionBoneIdx[this->m_iCurrentMotion];
    if ( v14 )
    {
      v15 = v14[v13];
      if ( v15 )
      {
        if ( v15[v6] >= 0 )
          goto LABEL_15;
      }
    }
LABEL_23:
    --v12;
    --v11;
    --v9;
    if ( --v10 < 0 )
      return;
  }
  v16 = v12;
  if ( v10 == this->m_iCurrentMotion )
    v16 = 0i64;
  v17 = this->m_iMotionBoneIdx[v16];
  if ( !v17 )
    goto LABEL_23;
  v18 = v13;
  v19 = v17[v18];
  if ( !v19 )
    goto LABEL_23;
  v20 = v19[v6];
  if ( (int)v20 < 0 || ((*v9)->m_ppMotionData[v18]->m_pAnimBone[v20].m_uiInfoFlg & 1) != 0 || (int)v6 <= 1 )
    goto LABEL_23;
LABEL_15:
  *iMotionNo = v10;
}

void __fastcall OGLModel::setBoneForce(OGLModel *this, int iBoneNo, OGLVec3 *vForce, unsigned int opt, float blend)
{
  __int64 m_iSecondaryForceCount; // rcx
  int v7; // er11
  __int64 v8; // rax
  __int64 v9; // rax

  m_iSecondaryForceCount = this->m_iSecondaryForceCount;
  if ( (int)m_iSecondaryForceCount < 12 )
  {
    v7 = HIWORD(iBoneNo);
    iBoneNo = (unsigned __int16)iBoneNo;
    if ( v7 == (unsigned __int16)iBoneNo )
      iBoneNo = -1;
    if ( (opt & 1) != 0 )
    {
      if ( v7 )
      {
        this->m_SecondaryForce[m_iSecondaryForceCount].iNo = v7;
        this->m_SecondaryForce[this->m_iSecondaryForceCount].uiOpt = opt;
        this->m_SecondaryForce[this->m_iSecondaryForceCount++].fBlend = blend;
      }
      v8 = this->m_iSecondaryForceCount;
      if ( (int)v8 < 12 && iBoneNo > 0 )
      {
        this->m_SecondaryForce[v8].iNo = iBoneNo;
LABEL_15:
        this->m_SecondaryForce[this->m_iSecondaryForceCount].uiOpt = opt;
        this->m_SecondaryForce[this->m_iSecondaryForceCount++].fBlend = blend;
      }
    }
    else
    {
      if ( v7 )
      {
        this->m_SecondaryForce[m_iSecondaryForceCount].iNo = v7;
        this->m_SecondaryForce[this->m_iSecondaryForceCount].vForce = *vForce;
        this->m_SecondaryForce[this->m_iSecondaryForceCount].uiOpt = opt;
        this->m_SecondaryForce[this->m_iSecondaryForceCount++].fBlend = blend;
      }
      v9 = this->m_iSecondaryForceCount;
      if ( (int)v9 < 12 && iBoneNo > 0 )
      {
        this->m_SecondaryForce[v9].iNo = iBoneNo;
        this->m_SecondaryForce[this->m_iSecondaryForceCount].vForce = *vForce;
        goto LABEL_15;
      }
    }
  }
}

void __fastcall OGLModel::setBoneTrans(OGLModel *this, OGLBone *parent, int iTransSec)
{
  OGLModel *v3; // rbx
  OGLBone *v4; // rsi
  int m_sChild; // ecx
  __int64 v6; // rdi
  OGLAnimationBone *v7; // rax
  __int64 m_iNo; // r10
  _OGLModelBone *m_pBoneInfo; // rax
  float v10; // xmm1_4
  float v11; // xmm0_4
  __int64 v12; // rdi
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int64 v16; // r9
  __int64 v17; // r10
  _OGLModelBone *v18; // rsi
  float v19; // xmm7_4
  float v20; // xmm14_4
  float v21; // xmm15_4
  float v22; // xmm11_4
  float v23; // xmm13_4
  float v24; // xmm6_4
  float v25; // xmm0_4
  float v26; // xmm8_4
  float v27; // xmm9_4
  float v28; // xmm10_4
  float v29; // xmm0_4
  float v30; // xmm6_4
  float v31; // xmm0_4
  float fLimitDown; // xmm0_4
  float v33; // xmm1_4
  float v34; // xmm2_4
  float fLimitLeft; // xmm0_4
  float fBlend; // xmm3_4
  _OGLModelBone *v37; // rax
  __int128 v38; // xmm1
  OGLBone *v39; // rsi
  __int128 v40; // xmm0
  __int128 v41; // xmm1
  float rfY; // [rsp+38h] [rbp-D0h] BYREF
  int v43; // [rsp+3Ch] [rbp-CCh]
  int iMotionNo; // [rsp+40h] [rbp-C8h] BYREF
  OGLQuat iMotionNo_8; // [rsp+48h] [rbp-C0h] BYREF
  OGLMatrix In1; // [rsp+58h] [rbp-B0h] BYREF
  OGLMatrix In2; // [rsp+98h] [rbp-70h] BYREF
  OGLMatrix v48; // [rsp+D8h] [rbp-30h] BYREF
  int iAniboneNo; // [rsp+118h] [rbp+10h] BYREF
  OGLBone *parenta; // [rsp+120h] [rbp+18h]
  OGLMatrix v51; // [rsp+128h] [rbp+20h] BYREF
  OGLMatrix v52; // [rsp+168h] [rbp+60h] BYREF
  OGLQuat q2; // [rsp+1A8h] [rbp+A0h] BYREF
  float rfX; // [rsp+2A0h] [rbp+198h] BYREF

  v3 = this;
  v4 = parent;
  memset(&v48, 0, sizeof(v48));
  m_sChild = parent->m_sChild;
  if ( m_sChild != -1 )
  {
    v43 = iTransSec & 1;
    do
    {
      v6 = m_sChild;
      parenta = &v3->m_pFigure->m_pBone[m_sChild];
      v7 = OGLModel::searchMotionBoneID(v3, m_sChild, &iMotionNo, &iAniboneNo, 1u);
      if ( v7 && (v7->m_uiInfoFlg & 4) != 0 )
      {
        *(_QWORD *)In2.m = 1065353216i64;
        memset(&In2.m[5], 0, 20);
        In2.m[15] = 0.0;
        In2.m[4] = 0.0;
        In2.m[14] = 0.0;
        *(_QWORD *)&In2.m[12] = 0i64;
        *(_QWORD *)&In2.m[2] = 0i64;
        m_iNo = v4->m_iNo;
        m_pBoneInfo = v3->m_pBoneInfo;
        *(_QWORD *)&In2.m[5] = 1065353216i64;
        *(_QWORD *)&In2.m[10] = 1065353216i64;
        In2.m[15] = 1.0;
        if ( m_pBoneInfo[m_iNo].vScale.x != 1.0
          || m_pBoneInfo[m_iNo].vScale.y != 1.0
          || m_pBoneInfo[m_iNo].vScale.z != 1.0 )
        {
          v10 = 1.0 / m_pBoneInfo[m_iNo].vScale.y;
          In2.m[0] = 1.0 / m_pBoneInfo[m_iNo].vScale.x;
          v11 = 1.0 / m_pBoneInfo[m_iNo].vScale.z;
          In2.m[5] = v10;
          In2.m[10] = v11;
        }
        *(_QWORD *)In1.m = 1065353216i64;
        v12 = v6;
        *(_QWORD *)&In1.m[12] = 0i64;
        *(_QWORD *)&In1.m[14] = 0i64;
        v13 = *(_OWORD *)&m_pBoneInfo[v12].mRot.m[4];
        *(_OWORD *)v51.m = *(_OWORD *)m_pBoneInfo[v12].mRot.m;
        v14 = *(_OWORD *)&m_pBoneInfo[v12].mRot.m[8];
        memset(&In1.m[2], 0, 32);
        *(_OWORD *)&v51.m[4] = v13;
        v15 = *(_OWORD *)&m_pBoneInfo[v12].mRot.m[12];
        *(_OWORD *)&v51.m[8] = v14;
        *(float *)&v14 = m_pBoneInfo[v12].mRot.m[12];
        *(_OWORD *)&v51.m[12] = v15;
        *(float *)&v15 = m_pBoneInfo[v12].mRot.m[13];
        LODWORD(In1.m[12]) = v14;
        *(float *)&v14 = m_pBoneInfo[v12].mRot.m[14];
        *(_QWORD *)&v51.m[12] = 0i64;
        v51.m[14] = 0.0;
        LODWORD(In1.m[14]) = v14;
        LODWORD(In1.m[13]) = v15;
        *(_QWORD *)&In1.m[5] = 1065353216i64;
        *(_QWORD *)&In1.m[10] = 1065353216i64;
        In1.m[15] = 1.0;
        OGLMatrix::multiplyFast(&In1, &In1, &m_pBoneInfo[m_iNo].mRot);
        OGLMatrix::multiplyFast(&v51, &v51, &In2);
        OGLMatrix::multiplyFast(&v48, &v51, (OGLMatrix *)(v16 + 212));
        v48.m[15] = 1.0;
        v48.m[12] = In1.m[12] + 0.0;
        v48.m[13] = In1.m[13] + 0.0;
        v48.m[14] = In1.m[14] + 0.0;
      }
      else
      {
        v12 = v6;
        OGLMatrix::multiplyFast(&v48, &v3->m_pBoneInfo[v12].mRot, &v3->m_pBoneInfo[v4->m_iNo].mRot);
      }
      v18 = v3->m_pBoneInfo;
      if ( v18[v12].bChangeFlg )
      {
        if ( v18[v12].bTransFlg )
          OGLMatrix::multiplyFast(&v48, &v18[v12].mTrans, &v48);
        else
          OGLMatrix::multiplyRotate(&v48, &v48, &v18[v12].mTrans);
      }
      if ( v18[v12].boneTarget.bUseFlg )
      {
        v19 = v18[v12].boneTarget.vTargetPos.y - (float)(v48.m[13] + v3->m_vPosition2.y);
        v20 = *(float *)((char *)&v18->mRot.m[2] + v17);
        v21 = *(float *)((char *)&v18->mRot.m[6] + v17);
        v22 = v18[v12].boneTarget.vTargetPos.x - (float)(v48.m[12] + v3->m_vPosition2.x);
        v23 = *(float *)((char *)&v18->mRot.m[10] + v17);
        v24 = (float)(v18[v12].boneTarget.vTargetPos.z - (float)(v48.m[14] + v3->m_vPosition2.z)) * 0.5;
        v25 = sqrtf((float)((float)(v19 * v19) + (float)(v22 * v22)) + (float)(v24 * v24));
        if ( v25 != 0.0 )
        {
          v22 = v22 / v25;
          v19 = v19 / v25;
          v24 = v24 / v25;
        }
        v26 = (float)(v21 * v24) - (float)(v19 * v23);
        v27 = (float)(v22 * v23) - (float)(v20 * v24);
        v28 = (float)(v19 * v20) - (float)(v22 * v21);
        v29 = sqrtf((float)((float)(v27 * v27) + (float)(v26 * v26)) + (float)(v28 * v28));
        if ( v29 != 0.0 )
        {
          v26 = v26 / v29;
          v27 = v27 / v29;
          v28 = v28 / v29;
        }
        v30 = acosf((float)((float)(v19 * v21) + (float)(v22 * v20)) + (float)(v23 * v24)) * 0.5;
        v31 = sinf(v30);
        iMotionNo_8.x = v26 * v31;
        iMotionNo_8.y = v27 * v31;
        iMotionNo_8.z = v28 * v31;
        iMotionNo_8.w = cosf(v30);
        OGLQuat::getRotateEuler(&iMotionNo_8, &rfX, &rfY, (float *)&iMotionNo);
        LODWORD(fLimitDown) = LODWORD(v18[v12].boneTarget.fLimitUp) ^ _xmm;
        v33 = (float)(rfX * 180.0) / 3.1415927;
        v34 = (float)(rfY * 180.0) / 3.1415927;
        if ( fLimitDown > v33 || (fLimitDown = v18[v12].boneTarget.fLimitDown, v33 > fLimitDown) )
          v33 = fLimitDown;
        LODWORD(fLimitLeft) = LODWORD(v18[v12].boneTarget.fLimitRight) ^ _xmm;
        if ( fLimitLeft > v34 || (fLimitLeft = v18[v12].boneTarget.fLimitLeft, v34 > fLimitLeft) )
          v34 = fLimitLeft;
        rfX = (float)(v33 * 3.1415927) / 180.0;
        rfY = (float)(v34 * 3.1415927) / 180.0;
        OGLQuat::setRotateEuler(&q2, rfX, rfY, 0.0);
        fBlend = v18[v12].boneTarget.fBlend;
        memset(&v52, 0, sizeof(v52));
        OGLQuat::slerp(&iMotionNo_8, &v18[v12].boneTarget.qPrevRot, &q2, fBlend, 1.0);
        v18[v12].boneTarget.qPrevRot = iMotionNo_8;
        OGLMatrix::rotationQuaternion(&v52, &iMotionNo_8);
        OGLMatrix::multiplyFast(&v48, &v52, &v48);
        v3 = this;
      }
      v37 = v3->m_pBoneInfo;
      v38 = *(_OWORD *)&v48.m[4];
      v39 = parenta;
      *(_OWORD *)v37[v12].mRot.m = *(_OWORD *)v48.m;
      v40 = *(_OWORD *)&v48.m[8];
      *(_OWORD *)&v37[v12].mRot.m[4] = v38;
      v41 = *(_OWORD *)&v48.m[12];
      *(_OWORD *)&v37[v12].mRot.m[8] = v40;
      *(_OWORD *)&v37[v12].mRot.m[12] = v41;
      OGLMatrix::multiplyFast(&v3->m_pBoneInfo[v12].mBone, &v39->m_mOffset, &v48);
      v3->m_pBoneInfo[v12].bChangedFlg = 0;
      if ( !v43 )
        break;
      if ( v39->m_sChild != -1 )
        OGLModel::setBoneTrans(v3, v39, iTransSec);
      m_sChild = v39->m_sBrother;
      v4 = parent;
    }
    while ( m_sChild != -1 );
  }
}

void __fastcall OGLModel::setBoneTransNotSecOnce(OGLModel *this, int iChildNo, unsigned __int8 bMirror)
{
  __int64 v4; // r12
  OGLBone *m_pBone; // rcx
  unsigned __int64 v6; // r15
  OGLBone *v7; // r13
  __int64 m_sParents; // rax
  OGLBone *v9; // rbx
  _SECONDARY_BONE_INFO *m_SecondaryInfo; // rdx
  OGLAnimationBone *v11; // rax
  _OGLModelBone *m_pBoneInfo; // rdx
  __int64 m_iNo; // rax
  __int64 v14; // rdx
  float *v15; // rcx
  __int64 v16; // r8
  float v17; // xmm1_4
  float v18; // xmm0_4
  unsigned __int64 v19; // rsi
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int64 v23; // r9
  _OGLModelBone *v24; // r14
  float v25; // xmm7_4
  float v26; // xmm8_4
  float v27; // xmm6_4
  float v28; // xmm0_4
  float v29; // xmm12_4
  float v30; // xmm15_4
  float v31; // xmm9_4
  float v32; // xmm10_4
  float v33; // xmm11_4
  float v34; // xmm0_4
  float v35; // xmm6_4
  float v36; // xmm0_4
  float fLimitDown; // xmm0_4
  float v38; // xmm1_4
  float v39; // xmm2_4
  float fLimitLeft; // xmm0_4
  float fBlend; // xmm3_4
  OGLSecondary *m_pSecondary; // rbx
  int v43; // eax
  _SECONDARY_BONE_BASE_INFO2 *m_pSecondaryBoneInfo2; // rbx
  float v45; // xmm3_4
  __int64 v46; // r10
  float v47; // xmm4_4
  float v48; // xmm5_4
  unsigned __int64 v49; // r8
  __int64 v50; // rdx
  __int64 v51; // rcx
  unsigned __int64 v52; // r9
  __int64 v53; // r11
  __int64 v54; // r8
  __int64 v55; // r10
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r11
  __int64 v59; // r8
  _OGLModelBone *v60; // rax
  __int128 v61; // xmm1
  __int128 v62; // xmm0
  __int128 v63; // xmm1
  OGLMatrix v64; // [rsp+30h] [rbp-D0h] BYREF
  OGLQuat q; // [rsp+70h] [rbp-90h] BYREF
  OGLMatrix In1; // [rsp+80h] [rbp-80h] BYREF
  OGLMatrix In2; // [rsp+C0h] [rbp-40h] BYREF
  OGLMatrix v68; // [rsp+100h] [rbp+0h] BYREF
  OGLQuat q2; // [rsp+140h] [rbp+40h] BYREF
  float rfZ; // [rsp+230h] [rbp+130h] BYREF
  int iMotionNo; // [rsp+238h] [rbp+138h] BYREF
  int iAniboneNo; // [rsp+240h] [rbp+140h] BYREF

  LOBYTE(iAniboneNo) = bMirror;
  v4 = iChildNo;
  m_pBone = this->m_pFigure->m_pBone;
  v6 = iChildNo;
  v7 = &m_pBone[iChildNo];
  m_sParents = v7->m_sParents;
  if ( (int)m_sParents >= 0 )
  {
    v9 = &m_pBone[m_sParents];
    memset(&v64, 0, sizeof(v64));
    if ( (v7->m_uiBoneInfoFlg & 2) == 0
      || (m_SecondaryInfo = this->m_SecondaryInfo) != 0i64
      && ((m_SecondaryInfo[v6].iStateFlg | m_SecondaryInfo[v6].iStateWorkFlg | m_SecondaryInfo[v6].iStateTakeOverFlg) & 0x1000) != 0 )
    {
      v11 = OGLModel::searchMotionBoneID(this, v4, &iMotionNo, &iAniboneNo, 1u);
      if ( v11 && (v11->m_uiInfoFlg & 4) != 0 )
      {
        m_pBoneInfo = this->m_pBoneInfo;
        memset(&In2.m[5], 0, 20);
        In2.m[15] = 0.0;
        In2.m[4] = 0.0;
        In2.m[14] = 0.0;
        *(_QWORD *)&In2.m[12] = 0i64;
        *(_QWORD *)&In2.m[2] = 0i64;
        m_iNo = v9->m_iNo;
        *(_QWORD *)In2.m = 1065353216i64;
        *(_QWORD *)&In2.m[5] = 1065353216i64;
        *(_QWORD *)&In2.m[10] = 1065353216i64;
        In2.m[15] = 1.0;
        if ( !OGLVec3::isOne(&m_pBoneInfo[m_iNo].vScale) )
        {
          v17 = 1.0 / *(float *)(v16 + v14 + 188);
          In2.m[0] = 1.0 / *v15;
          v18 = 1.0 / *(float *)(v16 + v14 + 192);
          In2.m[5] = v17;
          In2.m[10] = v18;
        }
        *(_QWORD *)In1.m = 1065353216i64;
        v19 = v6;
        *(_QWORD *)&In1.m[12] = 0i64;
        memset(&In1.m[4], 0, 24);
        *(_QWORD *)&In1.m[14] = 0i64;
        v20 = *(_OWORD *)(536 * v6 + v14 + 228);
        *(_OWORD *)v68.m = *(_OWORD *)(536 * v6 + v14 + 212);
        v21 = *(_OWORD *)(536 * v6 + v14 + 244);
        *(_QWORD *)&In1.m[5] = 1065353216i64;
        *(_OWORD *)&v68.m[4] = v20;
        v22 = *(_OWORD *)(536 * v6 + v14 + 260);
        *(_QWORD *)&In1.m[2] = 0i64;
        *(_OWORD *)&v68.m[8] = v21;
        LODWORD(v21) = *(_DWORD *)(536 * v6 + v14 + 260);
        *(_OWORD *)&v68.m[12] = v22;
        LODWORD(v22) = *(_DWORD *)(536 * v6 + v14 + 264);
        LODWORD(In1.m[12]) = v21;
        In1.m[14] = *(float *)(536 * v6 + v14 + 268);
        LODWORD(In1.m[13]) = v22;
        *(_QWORD *)&v68.m[12] = 0i64;
        v68.m[14] = 0.0;
        *(_QWORD *)&In1.m[10] = 1065353216i64;
        In1.m[15] = 1.0;
        OGLMatrix::multiplyFast(&In1, &In1, (OGLMatrix *)(v16 + v14 + 212));
        OGLMatrix::multiplyFast(&v68, &v68, &In2);
        OGLMatrix::multiplyFast(&v64, &v68, (OGLMatrix *)(v23 + 212));
        v64.m[15] = 1.0;
        v64.m[12] = In1.m[12] + 0.0;
        v64.m[13] = In1.m[13] + 0.0;
        v64.m[14] = In1.m[14] + 0.0;
      }
      else
      {
        v19 = v6;
        OGLMatrix::multiplyFast(&v64, &this->m_pBoneInfo[v6].mRot, &this->m_pBoneInfo[v9->m_iNo].mRot);
      }
      v24 = this->m_pBoneInfo;
      if ( v24[v19].bChangeFlg )
      {
        if ( v24[v19].bTransFlg )
          OGLMatrix::multiplyFast(&v64, &v24[v19].mTrans, &v64);
        else
          OGLMatrix::multiplyRotate(&v64, &v64, &v24[v19].mTrans);
      }
      if ( v24[v19].boneTarget.bUseFlg )
      {
        v25 = v24[v19].boneTarget.vTargetPos.x - (float)(v64.m[12] + this->m_vPosition2.x);
        v26 = v24[v19].boneTarget.vTargetPos.y - (float)(v64.m[13] + this->m_vPosition2.y);
        v27 = (float)(v24[v19].boneTarget.vTargetPos.z - (float)(v64.m[14] + this->m_vPosition2.z)) * 0.5;
        v28 = sqrtf((float)((float)(v26 * v26) + (float)(v25 * v25)) + (float)(v27 * v27));
        if ( v28 != 0.0 )
        {
          v25 = v25 / v28;
          v26 = v26 / v28;
          v27 = v27 / v28;
        }
        v29 = v64.m[6];
        v30 = v64.m[10];
        v31 = (float)(v64.m[6] * v27) - (float)(v64.m[10] * v26);
        v32 = (float)(v64.m[10] * v25) - (float)(v64.m[2] * v27);
        v33 = (float)(v64.m[2] * v26) - (float)(v64.m[6] * v25);
        v34 = sqrtf((float)((float)(v32 * v32) + (float)(v31 * v31)) + (float)(v33 * v33));
        if ( v34 != 0.0 )
        {
          v31 = v31 / v34;
          v32 = v32 / v34;
          v33 = v33 / v34;
        }
        v35 = acosf((float)((float)(v29 * v26) + (float)(v64.m[2] * v25)) + (float)(v30 * v27)) * 0.5;
        v36 = sinf(v35);
        q.x = v31 * v36;
        q.y = v32 * v36;
        q.z = v33 * v36;
        q.w = cosf(v35);
        OGLQuat::getRotateEuler(&q, (float *)&iAniboneNo, (float *)&iMotionNo, &rfZ);
        LODWORD(fLimitDown) = LODWORD(v24[v19].boneTarget.fLimitUp) ^ _xmm;
        v38 = (float)(*(float *)&iAniboneNo * 180.0) / 3.1415927;
        v39 = (float)(*(float *)&iMotionNo * 180.0) / 3.1415927;
        if ( fLimitDown > v38 || (fLimitDown = v24[v19].boneTarget.fLimitDown, v38 > fLimitDown) )
          v38 = fLimitDown;
        LODWORD(fLimitLeft) = LODWORD(v24[v19].boneTarget.fLimitRight) ^ _xmm;
        if ( fLimitLeft > v39 || (fLimitLeft = v24[v19].boneTarget.fLimitLeft, v39 > fLimitLeft) )
          v39 = fLimitLeft;
        OGLQuat::setRotateEuler(&q2, (float)(v38 * 3.1415927) / 180.0, (float)(v39 * 3.1415927) / 180.0, 0.0);
        fBlend = v24[v19].boneTarget.fBlend;
        memset(&v68, 0, sizeof(v68));
        OGLQuat::slerp(&q, &v24[v19].boneTarget.qPrevRot, &q2, fBlend, 1.0);
        v24[v19].boneTarget.qPrevRot = q;
        OGLMatrix::rotationQuaternion(&v68, &q);
        OGLMatrix::multiplyFast(&v64, &v68, &v64);
      }
      if ( (v7->m_uiBoneInfoFlg & 2) == 0 || !this->m_SecondaryInfo )
        goto LABEL_44;
      m_pSecondary = this->m_pSecondary;
      if ( m_pSecondary->m_uiFormatVer < 0xA )
      {
        v45 = (float)(v64.m[13] + this->m_vPosition2.y)
            - (float)(m_pSecondary->m_pSecondaryBoneInfo[v4].fGravity * 0.016666669);
        if ( (OGLModel::getSecondaryState(this, v4) & 1) != 0 )
        {
          v49 = v6;
          v56 = 2i64;
          v57 = 592 * v6 + 144;
          do
          {
            *(double *)((char *)this->m_SecondaryInfo + v57 - 128) = v47;
            *(double *)((char *)&this->m_SecondaryInfo->vPrevAxis.x + v57) = v45;
            *(double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldX[14] + v57) = v48;
            *(double *)((char *)this->m_SecondaryInfo + v57 - 120) = v47;
            *(double *)((char *)&this->m_SecondaryInfo->vPrevAxis.z + v57) = v45;
            *(double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldX[15] + v57) = v48;
            *(double *)((char *)this->m_SecondaryInfo + v57 - 112) = v47;
            *(double *)((char *)this->m_SecondaryInfo->mPrevPosWorldX + v57) = v45;
            *(double *)((char *)this->m_SecondaryInfo->mPrevPosWorldY + v57) = v48;
            *(double *)((char *)this->m_SecondaryInfo + v57 - 104) = v47;
            *(double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldX[1] + v57) = v45;
            *(double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldY[1] + v57) = v48;
            *(double *)((char *)this->m_SecondaryInfo + v57 - 96) = v47;
            *(double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldX[2] + v57) = v45;
            *(double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldY[2] + v57) = v48;
            *(double *)((char *)this->m_SecondaryInfo + v57 - 88) = v47;
            *(double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldX[3] + v57) = v45;
            *(double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldY[3] + v57) = v48;
            *(double *)((char *)this->m_SecondaryInfo + v57 - 80) = v47;
            *(double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldX[4] + v57) = v45;
            v57 += 64i64;
            *(double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldX[12] + v57) = v48;
            *(double *)((char *)this->m_SecondaryInfo + v57 - 136) = v47;
            *(double *)((char *)this->m_SecondaryInfo + v57 - 8) = v45;
            *(double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldX[13] + v57) = v48;
            --v56;
          }
          while ( v56 );
          goto LABEL_40;
        }
        v52 = v6;
        v58 = 3i64;
        v59 = 592 * v6 + 144;
        do
        {
          *(_QWORD *)((char *)this->m_SecondaryInfo + v59 - 128) = *(_QWORD *)((char *)this->m_SecondaryInfo + v59 - 120);
          *(double *)((char *)&this->m_SecondaryInfo->vPrevAxis.x + v59) = *(double *)((char *)&this->m_SecondaryInfo->vPrevAxis.z
                                                                                     + v59)
                                                                         - (float)(*(float *)(v55 + 72 * v4 + 28)
                                                                                 * 0.016666669);
          *(long double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldX[14] + v59) = *(long double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldX[15] + v59);
          *(_QWORD *)((char *)this->m_SecondaryInfo + v59 - 120) = *(_QWORD *)((char *)this->m_SecondaryInfo + v59 - 112);
          *(double *)((char *)&this->m_SecondaryInfo->vPrevAxis.z + v59) = *(double *)((char *)this->m_SecondaryInfo->mPrevPosWorldX
                                                                                     + v59)
                                                                         - (float)(*(float *)(v55 + 72 * v4 + 28)
                                                                                 * 0.016666669);
          *(long double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldX[15] + v59) = *(long double *)((char *)this->m_SecondaryInfo->mPrevPosWorldY + v59);
          *(_QWORD *)((char *)this->m_SecondaryInfo + v59 - 112) = *(_QWORD *)((char *)this->m_SecondaryInfo + v59 - 104);
          *(double *)((char *)this->m_SecondaryInfo->mPrevPosWorldX + v59) = *(double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldX[1]
                                                                                       + v59)
                                                                           - (float)(*(float *)(v55 + 72 * v4 + 28)
                                                                                   * 0.016666669);
          *(long double *)((char *)this->m_SecondaryInfo->mPrevPosWorldY + v59) = *(long double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldY[1]
                                                                                                 + v59);
          *(_QWORD *)((char *)this->m_SecondaryInfo + v59 - 104) = *(_QWORD *)((char *)this->m_SecondaryInfo + v59 - 96);
          *(double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldX[1] + v59) = *(double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldX[2]
                                                                                           + v59)
                                                                               - (float)(*(float *)(v55 + 72 * v4 + 28)
                                                                                       * 0.016666669);
          *(long double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldY[1] + v59) = *(long double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldY[2] + v59);
          *(_QWORD *)((char *)this->m_SecondaryInfo + v59 - 96) = *(_QWORD *)((char *)this->m_SecondaryInfo + v59 - 88);
          *(double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldX[2] + v59) = *(double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldX[3]
                                                                                           + v59)
                                                                               - (float)(*(float *)(v55 + 72 * v4 + 28)
                                                                                       * 0.016666669);
          *(long double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldY[2] + v59) = *(long double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldY[3] + v59);
          v59 += 40i64;
          --v58;
        }
        while ( v58 );
      }
      else
      {
        v43 = OGLModel::searchBoneFigureToSecondary(this, v4);
        m_pSecondaryBoneInfo2 = m_pSecondary->m_pSecondaryBoneInfo2;
        v45 = (float)(v64.m[13] + this->m_vPosition2.y) - (float)(m_pSecondaryBoneInfo2[v43].fGravity * 0.016666669);
        if ( (OGLModel::getSecondaryState(this, v4) & 1) != 0 )
        {
          v49 = v6;
          v50 = 2i64;
          v51 = 592 * v6 + 144;
          do
          {
            *(double *)((char *)this->m_SecondaryInfo + v51 - 128) = v47;
            *(double *)((char *)&this->m_SecondaryInfo->vPrevAxis.x + v51) = v45;
            *(double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldX[14] + v51) = v48;
            *(double *)((char *)this->m_SecondaryInfo + v51 - 120) = v47;
            *(double *)((char *)&this->m_SecondaryInfo->vPrevAxis.z + v51) = v45;
            *(double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldX[15] + v51) = v48;
            *(double *)((char *)this->m_SecondaryInfo + v51 - 112) = v47;
            *(double *)((char *)this->m_SecondaryInfo->mPrevPosWorldX + v51) = v45;
            *(double *)((char *)this->m_SecondaryInfo->mPrevPosWorldY + v51) = v48;
            *(double *)((char *)this->m_SecondaryInfo + v51 - 104) = v47;
            *(double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldX[1] + v51) = v45;
            *(double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldY[1] + v51) = v48;
            *(double *)((char *)this->m_SecondaryInfo + v51 - 96) = v47;
            *(double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldX[2] + v51) = v45;
            *(double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldY[2] + v51) = v48;
            *(double *)((char *)this->m_SecondaryInfo + v51 - 88) = v47;
            *(double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldX[3] + v51) = v45;
            *(double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldY[3] + v51) = v48;
            *(double *)((char *)this->m_SecondaryInfo + v51 - 80) = v47;
            *(double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldX[4] + v51) = v45;
            v51 += 64i64;
            *(double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldX[12] + v51) = v48;
            *(double *)((char *)this->m_SecondaryInfo + v51 - 136) = v47;
            *(double *)((char *)this->m_SecondaryInfo + v51 - 8) = v45;
            *(double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldX[13] + v51) = v48;
            --v50;
          }
          while ( v50 );
LABEL_40:
          this->m_SecondaryInfo[v49].iStateFlg &= ~1u;
LABEL_44:
          v60 = this->m_pBoneInfo;
          v61 = *(_OWORD *)&v64.m[4];
          *(_OWORD *)v60[v19].mRot.m = *(_OWORD *)v64.m;
          v62 = *(_OWORD *)&v64.m[8];
          *(_OWORD *)&v60[v19].mRot.m[4] = v61;
          v63 = *(_OWORD *)&v64.m[12];
          *(_OWORD *)&v60[v19].mRot.m[8] = v62;
          *(_OWORD *)&v60[v19].mRot.m[12] = v63;
          OGLMatrix::multiplyFast(&this->m_pBoneInfo[v19].mBone, &v7->m_mOffset, &v64);
          this->m_pBoneInfo[v19].bChangedFlg = 0;
          return;
        }
        v52 = v6;
        v53 = 3i64;
        v54 = 592 * v6 + 144;
        do
        {
          *(_QWORD *)((char *)this->m_SecondaryInfo + v54 - 128) = *(_QWORD *)((char *)this->m_SecondaryInfo + v54 - 120);
          *(double *)((char *)&this->m_SecondaryInfo->vPrevAxis.x + v54) = *(double *)((char *)&this->m_SecondaryInfo->vPrevAxis.z
                                                                                     + v54)
                                                                         - (float)(*(&m_pSecondaryBoneInfo2->fGravity
                                                                                   + 2 * v46)
                                                                                 * 0.016666669);
          *(long double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldX[14] + v54) = *(long double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldX[15] + v54);
          *(_QWORD *)((char *)this->m_SecondaryInfo + v54 - 120) = *(_QWORD *)((char *)this->m_SecondaryInfo + v54 - 112);
          *(double *)((char *)&this->m_SecondaryInfo->vPrevAxis.z + v54) = *(double *)((char *)this->m_SecondaryInfo->mPrevPosWorldX
                                                                                     + v54)
                                                                         - (float)(*(&m_pSecondaryBoneInfo2->fGravity
                                                                                   + 2 * v46)
                                                                                 * 0.016666669);
          *(long double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldX[15] + v54) = *(long double *)((char *)this->m_SecondaryInfo->mPrevPosWorldY + v54);
          *(_QWORD *)((char *)this->m_SecondaryInfo + v54 - 112) = *(_QWORD *)((char *)this->m_SecondaryInfo + v54 - 104);
          *(double *)((char *)this->m_SecondaryInfo->mPrevPosWorldX + v54) = *(double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldX[1]
                                                                                       + v54)
                                                                           - (float)(*(&m_pSecondaryBoneInfo2->fGravity
                                                                                     + 2 * v46)
                                                                                   * 0.016666669);
          *(long double *)((char *)this->m_SecondaryInfo->mPrevPosWorldY + v54) = *(long double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldY[1]
                                                                                                 + v54);
          *(_QWORD *)((char *)this->m_SecondaryInfo + v54 - 104) = *(_QWORD *)((char *)this->m_SecondaryInfo + v54 - 96);
          *(double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldX[1] + v54) = *(double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldX[2]
                                                                                           + v54)
                                                                               - (float)(*(&m_pSecondaryBoneInfo2->fGravity
                                                                                         + 2 * v46)
                                                                                       * 0.016666669);
          *(long double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldY[1] + v54) = *(long double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldY[2] + v54);
          *(_QWORD *)((char *)this->m_SecondaryInfo + v54 - 96) = *(_QWORD *)((char *)this->m_SecondaryInfo + v54 - 88);
          *(double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldX[2] + v54) = *(double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldX[3]
                                                                                           + v54)
                                                                               - (float)(*(&m_pSecondaryBoneInfo2->fGravity
                                                                                         + 2 * v46)
                                                                                       * 0.016666669);
          *(long double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldY[2] + v54) = *(long double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldY[3] + v54);
          v54 += 40i64;
          --v53;
        }
        while ( v53 );
      }
      this->m_SecondaryInfo[v52].mPrevPosWorldX[15] = v47;
      this->m_SecondaryInfo[v52].mPrevPosWorldY[15] = v45;
      this->m_SecondaryInfo[v52].mPrevPosWorldZ[15] = v48;
      goto LABEL_44;
    }
  }
}

void __fastcall OGLModel::setBoneTransSecOnce(OGLModel *this, int iChildNo, unsigned __int8 bMirror)
{
  OGLFigure *m_pFigure; // rax
  __int64 v5; // r15
  __int64 v6; // rdx
  __int64 m_pBone; // rcx
  __int64 v8; // rax
  unsigned int v9; // eax
  float v10; // er13
  _SECONDARY_BONE_INFO *m_SecondaryInfo; // r14
  int v12; // edx
  __int64 v13; // r9
  __int64 v14; // r10
  __int64 v15; // rsi
  _OGLModelBone *m_pBoneInfo; // rdi
  float v17; // xmm15_4
  __int64 p_mRot; // rdi
  bool v19; // cf
  __int64 v20; // r13
  int v21; // eax
  unsigned __int8 v22; // r8
  int v23; // edx
  OGLModel *v24; // rcx
  __int64 v25; // r14
  __int64 v26; // r12
  float v27; // xmm7_4
  float v28; // xmm7_4
  int v29; // xmm10_4
  float v30; // xmm7_4
  float v31; // xmm7_4
  float v32; // xmm0_4
  float v33; // xmm7_4
  float v34; // xmm7_4
  float v35; // xmm0_4
  OGLAnimationBone *v36; // rax
  _OGLModelBone *v37; // rdx
  __int64 v38; // rax
  __int64 v39; // rdx
  float *v40; // rcx
  __int64 v41; // r10
  float v42; // xmm1_4
  float v43; // xmm0_4
  __int128 v44; // xmm0
  __int128 v45; // xmm1
  __int128 v46; // xmm0
  __int128 v47; // xmm1
  __int64 v48; // r9
  __int64 v49; // r10
  float v50; // xmm0_4
  float v51; // xmm10_4
  float v52; // xmm11_4
  _OGLModelBone *v53; // r15
  float v54; // xmm7_4
  float v55; // xmm6_4
  float v56; // xmm8_4
  int v57; // xmm0_4
  float v58; // xmm12_4
  float v59; // xmm14_4
  float v60; // xmm9_4
  int v61; // edx
  __int64 v62; // rdx
  float v63; // xmm3_4
  float v64; // xmm14_4
  OGLBone *v65; // rcx
  float v66; // xmm15_4
  float v67; // xmm13_4
  float v68; // xmm8_4
  float v69; // xmm9_4
  float v70; // xmm7_4
  float v71; // xmm6_4
  float v72; // xmm0_4
  float v73; // xmm1_4
  float v74; // xmm0_4
  int v75; // ecx
  float v76; // xmm13_4
  float v77; // xmm12_4
  float v78; // xmm10_4
  float v79; // xmm11_4
  int v80; // er12
  float v81; // xmm12_4
  OGLModel *v82; // rcx
  int *v83; // rax
  int v84; // eax
  __int64 v85; // r13
  __int64 v86; // rax
  int *v87; // rcx
  int v88; // eax
  float v89; // xmm3_4
  __int64 v90; // rdx
  int v91; // eax
  __int64 v92; // r15
  int v93; // edx
  __int16 v94; // ax
  float v95; // xmm4_4
  float v96; // xmm5_4
  float v97; // xmm8_4
  __int64 v98; // rdx
  float v99; // xmm14_4
  float v100; // xmm9_4
  __int64 v101; // r13
  __int64 v102; // rcx
  __int64 v103; // rdi
  float v104; // xmm6_4
  __int64 v105; // r8
  unsigned __int64 v106; // r15
  __int64 v107; // rdx
  int v108; // er14
  float *v109; // rdi
  float v110; // xmm8_4
  float v111; // xmm0_4
  float v112; // xmm0_4
  float v113; // xmm2_4
  float v114; // xmm1_4
  float v115; // xmm3_4
  __int64 v116; // rcx
  __int64 v117; // rdx
  float v118; // xmm0_4
  float v119; // xmm5_4
  float v120; // xmm4_4
  float yt; // xmm6_4
  double v122; // xmm2_8
  _SECONDARY_BONE_INFO *v123; // rax
  float v124; // xmm14_4
  float v125; // xmm9_4
  _SECONDARY_BONE_INFO *v126; // rax
  unsigned int v127; // er14
  int v128; // er15
  bool v129; // r12
  double v130; // xmm0_8
  float v131; // xmm11_4
  float v132; // xmm7_4
  float v133; // xmm15_4
  _SECONDARY_BONE_INFO *v134; // rax
  __m128 v135; // xmm12
  __int64 v136; // rdi
  __m128 v137; // xmm10
  char v138; // dl
  float v139; // xmm5_4
  float v140; // xmm4_4
  float v141; // xmm0_4
  float v142; // xmm8_4
  float v143; // xmm4_4
  float v144; // xmm2_4
  double v145; // xmm10_8
  float v146; // xmm1_4
  float v147; // xmm4_4
  float v148; // xmm3_4
  float v149; // xmm0_4
  __m128 v150; // xmm0
  float v151; // xmm6_4
  __m128 v152; // xmm6
  __m128d v153; // xmm2
  float v154; // xmm1_4
  float v155; // xmm1_4
  float v156; // xmm10_4
  float v157; // xmm1_4
  float v158; // xmm14_4
  float v159; // xmm8_4
  float v160; // xmm10_4
  float v161; // xmm0_4
  float v162; // xmm1_4
  __int64 v163; // rdx
  int v164; // er9
  float v165; // xmm9_4
  _OGLModelBone *v166; // rax
  __int128 v167; // xmm1
  __int128 v168; // xmm1
  float v169; // xmm0_4
  float v170; // xmm0_4
  float v171; // xmm0_4
  _SECONDARY_BONE_INFO *v172; // rax
  float v173; // xmm2_4
  int *v174; // r10
  _SECONDARY_BONE_INFO *v175; // rdi
  int v176; // eax
  int v177; // eax
  float v178; // xmm0_4
  bool v179; // cc
  int v180; // er9
  __int64 v181; // rcx
  float *v182; // rax
  char v183; // r12
  __int64 v184; // rcx
  float *v185; // rax
  float v186; // xmm8_4
  int v187; // eax
  float v188; // xmm9_4
  float v189; // xmm10_4
  __int64 v190; // rdi
  int *m_iSecondaryBoneRIdx; // rcx
  __int64 v192; // rax
  int v193; // er15
  int v194; // eax
  unsigned __int8 v195; // al
  int v196; // ecx
  OGLVec3 *p_pos; // r9
  OGLVec3 *p_Line2E; // r8
  OGLVec3 *p_Line1E; // rdx
  OGLVec3 *p_Line1S; // rcx
  float v201; // xmm0_4
  OGLVec3 *p_Line2S; // rax
  float v203; // xmm2_4
  float v204; // xmm1_4
  _SECONDARY_BONE_INFO *v205; // rax
  __int128 v206; // xmm1
  __int128 v207; // xmm0
  __int128 v208; // xmm1
  _SECONDARY_BONE_INFO *v209; // rcx
  int v210; // ecx
  int v211; // ecx
  _SECONDARY_BONE_INFO *v212; // rax
  __int64 v213; // rdx
  __int128 v214; // xmm1
  __int64 v215; // r8
  __int128 v216; // xmm0
  __int128 v217; // xmm1
  _SECONDARY_BONE_INFO *v218; // rcx
  int v219; // eax
  __int64 v220; // r12
  float v221; // xmm14_4
  float v222; // xmm7_4
  float v223; // xmm7_4
  int v224; // xmm9_4
  float v225; // xmm7_4
  float v226; // xmm7_4
  float v227; // xmm0_4
  float v228; // xmm7_4
  float v229; // xmm7_4
  float v230; // xmm0_4
  OGLAnimationBone *v231; // rax
  _OGLModelBone *v232; // rdx
  __int64 v233; // rax
  __int64 v234; // rdx
  float *v235; // rcx
  __int64 v236; // r10
  float v237; // xmm1_4
  float v238; // xmm0_4
  __int128 v239; // xmm0
  __int128 v240; // xmm1
  __int128 v241; // xmm0
  __int128 v242; // xmm1
  __int64 v243; // r9
  __int64 v244; // r10
  float v245; // xmm10_4
  float v246; // xmm12_4
  float v247; // xmm11_4
  _OGLModelBone *v248; // rax
  float v249; // xmm2_4
  float v250; // xmm3_4
  float v251; // xmm0_4
  bool v252; // zf
  float v253; // xmm6_4
  float v254; // xmm13_4
  float v255; // xmm12_4
  float x; // xmm10_4
  float z; // xmm11_4
  int v258; // er14
  int v259; // er9
  float v260; // xmm0_4
  int v261; // er12
  float y; // xmm12_4
  int *m_iMirrorBoneIdx; // rax
  int v264; // ecx
  __int64 boneID; // rax
  int *m_iMirrorBoneRIdx; // rcx
  int v267; // eax
  float v268; // xmm3_4
  int v269; // edx
  int v270; // edx
  __int16 SecondaryState; // ax
  int v272; // er9
  float v273; // xmm4_4
  float v274; // xmm5_4
  __m128 v275; // xmm15
  __int64 v276; // r12
  OGLQuat v277; // xmm3
  float v278; // xmm9_4
  float v279; // xmm8_4
  unsigned __int64 v280; // r8
  __int64 v281; // r15
  __int64 v282; // rcx
  __int64 v283; // rdx
  _SECONDARY_BONE_INFO *v284; // rax
  unsigned __int64 v285; // rdi
  unsigned __int64 v286; // r9
  __int64 v287; // rdx
  __int64 v288; // r8
  int v289; // er14
  float *p_z; // rdi
  float v291; // xmm8_4
  float v292; // xmm0_4
  float v293; // xmm0_4
  float v294; // xmm2_4
  float v295; // xmm1_4
  __int64 v296; // r9
  float v297; // xmm3_4
  _SECONDARY_BONE_INFO *v298; // rax
  float v299; // xmm5_4
  float v300; // xmm6_4
  float v301; // xmm0_4
  float v302; // xmm4_4
  double v303; // xmm2_8
  _SECONDARY_BONE_INFO *v304; // rax
  float v305; // xmm9_4
  float v306; // xmm8_4
  _SECONDARY_BONE_INFO *v307; // rax
  int v308; // er13
  bool v309; // r14
  long double v310; // xmm0_8
  float v311; // xmm11_4
  float v312; // xmm7_4
  __m128 v313; // xmm12
  _SECONDARY_BONE_INFO *v314; // rax
  unsigned int v315; // edi
  __m128 v316; // xmm10
  char v317; // dl
  float v318; // xmm5_4
  float v319; // xmm3_4
  float v320; // xmm4_4
  float v321; // xmm2_4
  OGLQuat v322; // xmm5
  double v323; // xmm10_8
  float v324; // xmm1_4
  float v325; // xmm5_4
  float v326; // xmm4_4
  float v327; // xmm0_4
  OGLQuat v328; // xmm3
  float v329; // xmm6_4
  __m128 v330; // xmm0
  __m128 v331; // xmm6
  __m128d v332; // xmm2
  float v333; // xmm1_4
  float v334; // xmm1_4
  float v335; // xmm10_4
  float v336; // xmm15_4
  OGLQuat v337; // xmm14
  float v338; // xmm0_4
  float v339; // xmm1_4
  float v340; // xmm8_4
  __int64 v341; // r12
  float v342; // xmm9_4
  _OGLModelBone *v343; // rax
  __int128 v344; // xmm1
  __int128 v345; // xmm1
  float v346; // xmm0_4
  float v347; // xmm0_4
  float v348; // xmm0_4
  _SECONDARY_BONE_INFO *v349; // rax
  float v350; // xmm2_4
  int v351; // edx
  int *v352; // r9
  _SECONDARY_BONE_INFO *v353; // r14
  int v354; // eax
  int v355; // eax
  __int128 v356; // xmm6
  float v357; // xmm0_4
  bool v358; // al
  bool v359; // cc
  int v360; // edx
  __int64 v361; // rcx
  float *v362; // rax
  char v363; // r12
  __int64 v364; // rcx
  float *v365; // rax
  float v366; // xmm8_4
  int v367; // er14
  float v368; // xmm9_4
  __int64 v369; // rcx
  float v370; // xmm10_4
  __int64 v371; // rdx
  float v372; // xmm14_4
  float *v373; // rsi
  OGLFigure *v374; // rax
  int v375; // eax
  int v376; // ecx
  float v377; // xmm0_4
  float v378; // xmm0_4
  float v379; // xmm0_4
  float v380; // xmm2_4
  float v381; // xmm1_4
  int v382; // ecx
  int v383; // ecx
  _SECONDARY_BONE_INFO *v384; // rax
  __int128 v385; // xmm1
  __int128 v386; // xmm0
  __int128 v387; // xmm1
  _SECONDARY_BONE_INFO *v388; // rcx
  _SECONDARY_BONE_INFO *v389; // rax
  __int128 v390; // xmm1
  unsigned __int64 v391; // rcx
  __int64 v392; // r8
  __int128 v393; // xmm0
  __int128 v394; // xmm1
  __int64 v395; // rax
  _SECONDARY_BONE_INFO *v396; // rdx
  int *v397; // rsi
  int v398; // eax
  __int64 v399; // r10
  _OGLModelBone *v400; // r9
  float v401; // xmm1_4
  float v402; // xmm0_4
  float v403; // xmm1_4
  float v404; // xmm0_4
  float v405; // xmm1_4
  float v406; // xmm0_4
  float v407; // xmm1_4
  unsigned __int64 v408; // r14
  __int64 v409; // r9
  float v410; // xmm1_4
  float v411; // xmm0_4
  float v412; // xmm1_4
  float v413; // xmm0_4
  float v414; // xmm1_4
  float v415; // xmm0_4
  float v416; // xmm1_4
  __int64 v417; // r10
  __int64 v418; // r11
  __int64 v419; // rdi
  OGLBone *v420; // rcx
  float v421; // xmm7_4
  float v422; // xmm8_4
  float v423; // xmm6_4
  char v424; // r15
  float v425; // xmm1_4
  float v426; // xmm2_4
  float v427; // xmm3_4
  __int64 v428; // rcx
  __int64 v429; // r9
  __int64 v430; // rdx
  OGLBone *v431; // r8
  _OGLModelBone *v432; // rcx
  _OGLModelBone *v433; // rcx
  _OGLModelBone *v434; // rax
  __int128 v435; // xmm10
  __int64 v436; // rcx
  __int128 v437; // xmm0
  int bParts; // [rsp+20h] [rbp-E0h]
  int bPartsa; // [rsp+20h] [rbp-E0h]
  float xt; // [rsp+28h] [rbp-D8h]
  float xta; // [rsp+28h] [rbp-D8h]
  bool v442; // [rsp+40h] [rbp-C0h]
  bool v443; // [rsp+40h] [rbp-C0h]
  float sz1; // [rsp+44h] [rbp-BCh] BYREF
  float pLen; // [rsp+48h] [rbp-B8h] BYREF
  float v446; // [rsp+4Ch] [rbp-B4h]
  int iBoneNo; // [rsp+50h] [rbp-B0h]
  int iAniboneNo[3]; // [rsp+54h] [rbp-ACh] BYREF
  OGLMatrix In2; // [rsp+60h] [rbp-A0h] BYREF
  float v450; // [rsp+A0h] [rbp-60h]
  float v451; // [rsp+A4h] [rbp-5Ch]
  int iMotionNo; // [rsp+A8h] [rbp-58h] BYREF
  unsigned __int8 v453; // [rsp+ACh] [rbp-54h]
  float v454; // [rsp+B0h] [rbp-50h]
  float v455; // [rsp+B4h] [rbp-4Ch]
  float v456; // [rsp+B8h] [rbp-48h]
  float rfY; // [rsp+BCh] [rbp-44h] BYREF
  float v458; // [rsp+C0h] [rbp-40h]
  OGLVec3 pos; // [rsp+C8h] [rbp-38h] BYREF
  OGLQuat x_low; // [rsp+E0h] [rbp-20h] BYREF
  float v461; // [rsp+F0h] [rbp-10h]
  float v462; // [rsp+F4h] [rbp-Ch]
  float rfZ; // [rsp+100h] [rbp+0h] BYREF
  __int64 m_MirrorData; // [rsp+108h] [rbp+8h]
  OGLVec3 axis; // [rsp+110h] [rbp+10h] BYREF
  __int64 v466; // [rsp+120h] [rbp+20h]
  int *v467; // [rsp+128h] [rbp+28h]
  int v468[2]; // [rsp+130h] [rbp+30h]
  unsigned __int64 v469; // [rsp+138h] [rbp+38h]
  unsigned __int64 v470; // [rsp+140h] [rbp+40h]
  OGLMatrix pOutMat; // [rsp+150h] [rbp+50h] BYREF
  __int64 v472; // [rsp+190h] [rbp+90h]
  OGLVec3 Line2S; // [rsp+198h] [rbp+98h] BYREF
  OGLMatrix pBoneMat; // [rsp+1B0h] [rbp+B0h] BYREF
  __int64 v475; // [rsp+1F0h] [rbp+F0h]
  int v476; // [rsp+1F8h] [rbp+F8h]
  OGLVec3 Line1E; // [rsp+200h] [rbp+100h] BYREF
  OGLVec3 Line1S; // [rsp+210h] [rbp+110h] BYREF
  OGLVec3 v479; // [rsp+220h] [rbp+120h] BYREF
  OGLVec3 v480; // [rsp+230h] [rbp+130h] BYREF
  OGLVec3 v481; // [rsp+240h] [rbp+140h] BYREF
  OGLVec3 v482; // [rsp+250h] [rbp+150h] BYREF
  OGLVec3 Line2E; // [rsp+260h] [rbp+160h] BYREF
  OGLVec3 v484; // [rsp+270h] [rbp+170h] BYREF
  OGLVec3 vec1; // [rsp+280h] [rbp+180h] BYREF
  __int64 v486; // [rsp+290h] [rbp+190h]
  __int64 v487; // [rsp+298h] [rbp+198h]
  OGLMatrix mIn; // [rsp+2A0h] [rbp+1A0h] BYREF
  OGLMatrix In1; // [rsp+2E0h] [rbp+1E0h] BYREF
  OGLVec3 vLine; // [rsp+320h] [rbp+220h] BYREF
  OGLVec3 v491; // [rsp+32Ch] [rbp+22Ch] BYREF

  m_pFigure = this->m_pFigure;
  v5 = iChildNo;
  v6 = 232i64 * iChildNo;
  v453 = bMirror;
  m_pBone = (__int64)m_pFigure->m_pBone;
  iBoneNo = v5;
  v487 = m_pBone;
  *(_QWORD *)v468 = v5;
  v8 = 232i64 * *(int *)(v6 + m_pBone + 96);
  v486 = v6;
  v467 = (int *)(m_pBone + v8);
  memset(&pBoneMat, 0, sizeof(pBoneMat));
  v9 = *(_DWORD *)(v6 + m_pBone + 100);
  LODWORD(v10) = v9 >> 3;
  LOBYTE(v10) = (v9 & 8) != 0;
  rfY = v10;
  m_SecondaryInfo = this->m_SecondaryInfo;
  if ( !m_SecondaryInfo || !this->m_pSecondary || (v9 & 2) == 0 || (OGLModel::getSecondaryState(this, v5) & 0x1000) != 0 )
    return;
  v15 = 0i64;
  m_pBoneInfo = this->m_pBoneInfo;
  v17 = 0.0;
  rfZ = 0.0;
  p_mRot = (__int64)&m_pBoneInfo[v14].mRot;
  v476 = 0;
  v19 = *(_DWORD *)v13 < 0xAu;
  memset(&mIn, 0, sizeof(mIn));
  *(_QWORD *)&axis.x = 0i64;
  axis.z = 0.0;
  *(_QWORD *)&pos.x = 0i64;
  pos.z = 0.0;
  v470 = 536 * v14;
  if ( v19 )
  {
    v220 = *(_QWORD *)(v13 + 16);
    v221 = *(float *)&FLOAT_1_0;
    v222 = *(float *)(v220 + 72 * v5 + 68);
    m_MirrorData = v220;
    *(_QWORD *)In2.m = 1065353216i64;
    In2.m[4] = 0.0;
    *(_QWORD *)&In2.m[8] = 0i64;
    *(_QWORD *)&In2.m[12] = 0i64;
    *(_QWORD *)&In2.m[5] = 1065353216i64;
    *(_QWORD *)&In2.m[2] = 0i64;
    *(_QWORD *)&In2.m[10] = 1065353216i64;
    In2.m[14] = 0.0;
    In2.m[7] = 0.0;
    In2.m[15] = 1.0;
    if ( v222 == 0.0 )
    {
      v224 = _xmm;
    }
    else
    {
      v223 = (float)(v222 * 3.1415927) / 180.0;
      sinf(v223);
      v224 = _xmm;
      In1.m[11] = 0.0;
      In1.m[14] = 0.0;
      LODWORD(In1.m[4]) = LODWORD(v223) ^ _xmm;
      In1.m[0] = cosf(v223);
      In1.m[1] = v223;
      In1.m[5] = In1.m[0];
      *(_QWORD *)&In1.m[2] = 0i64;
      *(_QWORD *)&In1.m[6] = 0i64;
      *(_QWORD *)&In1.m[8] = 0i64;
      *(_QWORD *)&In1.m[12] = 0i64;
      In1.m[10] = 1.0;
      In1.m[15] = 1.0;
      OGLMatrix::multiplyFastRotate(&In2, &In1, &In2);
    }
    v225 = *(float *)(v220 + 72 * v5 + 60);
    if ( v225 != 0.0 )
    {
      v226 = (float)(v225 * 3.1415927) / 180.0;
      sinf(v226);
      v227 = cosf(v226);
      In1.m[1] = 0.0;
      In1.m[4] = 0.0;
      In1.m[7] = 0.0;
      In1.m[8] = 0.0;
      In1.m[11] = 0.0;
      In1.m[14] = 0.0;
      LODWORD(In1.m[9]) = LODWORD(v226) ^ v224;
      In1.m[5] = v227;
      In1.m[6] = v226;
      In1.m[10] = v227;
      *(_QWORD *)&In1.m[2] = 0i64;
      *(_QWORD *)&In1.m[12] = 0i64;
      In1.m[0] = 1.0;
      In1.m[15] = 1.0;
      OGLMatrix::multiplyFastRotate(&In2, &In1, &In2);
    }
    v228 = *(float *)(v220 + 72 * v5 + 64);
    if ( v228 != 0.0 )
    {
      v229 = (float)(v228 * 3.1415927) / 180.0;
      sinf(v229);
      v230 = cosf(v229);
      In1.m[9] = 0.0;
      In1.m[8] = v229;
      In1.m[1] = 0.0;
      In1.m[3] = 0.0;
      In1.m[4] = 0.0;
      In1.m[11] = 0.0;
      In1.m[14] = 0.0;
      LODWORD(In1.m[2]) = LODWORD(v229) ^ v224;
      In1.m[0] = v230;
      In1.m[10] = v230;
      *(_QWORD *)&In1.m[6] = 0i64;
      *(_QWORD *)&In1.m[12] = 0i64;
      In1.m[5] = 1.0;
      In1.m[15] = 1.0;
      OGLMatrix::multiplyFastRotate(&In2, &In1, &In2);
    }
    OGLMatrix::multiplyFast((OGLMatrix *)p_mRot, (OGLMatrix *)p_mRot, &In2);
    v231 = OGLModel::searchMotionBoneID(this, v5, (int *)&rfY, iAniboneNo, 1u);
    if ( v231 && (v231->m_uiInfoFlg & 4) != 0 )
    {
      v232 = this->m_pBoneInfo;
      In1.m[15] = 0.0;
      In1.m[4] = 0.0;
      In1.m[14] = 0.0;
      In1.m[7] = 0.0;
      *(_QWORD *)&In1.m[8] = 0i64;
      *(_QWORD *)&In1.m[12] = 0i64;
      *(_QWORD *)&In1.m[2] = 0i64;
      *(_QWORD *)In1.m = 1065353216i64;
      *(_QWORD *)&In1.m[5] = 1065353216i64;
      *(_QWORD *)&In1.m[10] = 1065353216i64;
      v233 = *v467;
      In1.m[15] = 1.0;
      if ( !OGLVec3::isOne(&v232[v233].vScale) )
      {
        v237 = 1.0 / *(float *)(v236 + v234 + 188);
        In1.m[0] = 1.0 / *v235;
        v238 = 1.0 / *(float *)(v236 + v234 + 192);
        In1.m[5] = v237;
        In1.m[10] = v238;
      }
      *(_QWORD *)In2.m = 1065353216i64;
      In2.m[7] = 0.0;
      *(_QWORD *)&In2.m[12] = 0i64;
      *(_QWORD *)&In2.m[14] = 0i64;
      In2.m[4] = 0.0;
      *(_QWORD *)&In2.m[8] = 0i64;
      *(_QWORD *)&In2.m[5] = 1065353216i64;
      v239 = *(_OWORD *)(v470 + v234 + 212);
      *(_QWORD *)&In2.m[2] = 0i64;
      v240 = *(_OWORD *)(v470 + v234 + 228);
      *(_QWORD *)&In2.m[10] = 1065353216i64;
      *(_OWORD *)pOutMat.m = v239;
      v241 = *(_OWORD *)(v470 + v234 + 244);
      In2.m[7] = 0.0;
      *(_OWORD *)&pOutMat.m[4] = v240;
      v242 = *(_OWORD *)(v470 + v234 + 260);
      In2.m[15] = 1.0;
      *(_OWORD *)&pOutMat.m[8] = v241;
      LODWORD(v241) = *(_DWORD *)(v470 + v234 + 260);
      *(_OWORD *)&pOutMat.m[12] = v242;
      LODWORD(v242) = *(_DWORD *)(v470 + v234 + 264);
      LODWORD(In2.m[12]) = v241;
      In2.m[14] = *(float *)(v470 + v234 + 268);
      LODWORD(In2.m[13]) = v242;
      *(_QWORD *)&pOutMat.m[12] = 0i64;
      pOutMat.m[14] = 0.0;
      OGLMatrix::multiplyFast(&In2, &In2, (OGLMatrix *)(v236 + v234 + 212));
      OGLMatrix::multiplyFast(&pOutMat, &pOutMat, &In1);
      OGLMatrix::multiplyFast(&pBoneMat, &pOutMat, (OGLMatrix *)(v243 + 212));
      v245 = In2.m[12] + 0.0;
      v246 = In2.m[13] + 0.0;
      v247 = In2.m[14] + 0.0;
      pBoneMat.m[15] = 1.0;
      pBoneMat.m[12] = In2.m[12] + 0.0;
      pBoneMat.m[13] = In2.m[13] + 0.0;
      pBoneMat.m[14] = In2.m[14] + 0.0;
    }
    else
    {
      OGLMatrix::multiplyFast(&pBoneMat, &this->m_pBoneInfo[v470 / 0x218].mRot, &this->m_pBoneInfo[*v467].mRot);
      v247 = pBoneMat.m[14];
      v246 = pBoneMat.m[13];
      v245 = pBoneMat.m[12];
    }
    v248 = this->m_pBoneInfo;
    v458 = v246;
    v249 = v245 - *(float *)((char *)&v248->mRot.m[12] + v244);
    v250 = v247 - *(float *)((char *)&v248->mRot.m[14] + v244);
    v456 = v246 - *(float *)((char *)&v248->mRot.m[13] + v244);
    v454 = v249;
    v455 = v250;
    v251 = sqrtf((float)((float)(v456 * v456) + (float)(v249 * v249)) + (float)(v250 * v250));
    v252 = (*(_DWORD *)(v220 + 72 * v5 + 24) & 0x2000) == 0;
    v253 = v251;
    v254 = FLOAT_0_016666669;
    v255 = v246 + this->m_vPosition2.y;
    x = v245 + this->m_vPosition2.x;
    z = v247 + this->m_vPosition2.z;
    memset(&In2, 0, sizeof(In2));
    v258 = 64;
    v259 = v468[0];
    if ( !v252 )
      v258 = 30;
    *(float *)iAniboneNo = v251;
    pos.x = x;
    v260 = *(float *)(v220 + 72i64 * *(_QWORD *)v468 + 28);
    v261 = v468[0];
    pos.z = z;
    y = v255 - (float)(v260 * 0.016666669);
    pos.y = y;
    if ( v453 )
    {
      m_iMirrorBoneIdx = this->m_iMirrorBoneIdx;
      if ( m_iMirrorBoneIdx )
      {
        v264 = m_iMirrorBoneIdx[*(_QWORD *)v468];
      }
      else
      {
        v264 = OGLModel::convertBoneFigureToMirror(this, v468[0]);
        v259 = v261;
      }
      if ( v264 >= 0 )
      {
        boneID = this->m_pMirror->m_MirrorData[v264].boneID;
        if ( (int)boneID >= 0 )
        {
          m_iMirrorBoneRIdx = this->m_iMirrorBoneRIdx;
          if ( m_iMirrorBoneRIdx )
          {
            v261 = m_iMirrorBoneRIdx[boneID];
          }
          else
          {
            v267 = OGLModel::convertBoneMirrorToFigure(this, boneID);
            v259 = iBoneNo;
            v261 = v267;
          }
          if ( v261 < 0 )
            v261 = v259;
        }
      }
    }
    v268 = 0.0;
    if ( (OGLModel::getSecondaryState(this, v259) & 0x4000) != 0 )
      v258 = 64;
    iMotionNo = v258;
    if ( (OGLModel::getSecondaryState(this, v269) & 0x100) != 0 )
      v268 = this->m_mWorld.m[12] - this->m_mPreWorld.m[12];
    SecondaryState = OGLModel::getSecondaryState(this, v270);
    v24 = this;
    if ( (SecondaryState & 0x1000) != 0 )
      goto LABEL_8;
    v275 = (__m128)LODWORD(FLOAT_N1_0);
    if ( (OGLModel::getSecondaryState(this, v23) & 1) != 0 )
    {
      v276 = m_MirrorData;
      v277.x = *(float *)(p_mRot + 52);
      v278 = *(float *)(p_mRot + 48);
      v279 = *(float *)(p_mRot + 56);
      v280 = v272;
      x_low = (OGLQuat)LODWORD(v277.x);
      v466 = 592i64 * v272;
      v281 = m_MirrorData + 72i64 * v272;
      v282 = v466 + 144;
      v283 = 2i64;
      do
      {
        *(double *)((char *)this->m_SecondaryInfo + v282 - 128) = x;
        *(double *)((char *)&this->m_SecondaryInfo->vPrevAxis.x + v282) = (float)(y
                                                                                - (float)(*(float *)(v281 + 28)
                                                                                        * 0.016666669));
        *(double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldX[14] + v282) = z;
        *(double *)((char *)this->m_SecondaryInfo + v282 - 120) = x;
        *(double *)((char *)&this->m_SecondaryInfo->vPrevAxis.z + v282) = (float)(y
                                                                                - (float)(*(float *)(v281 + 28)
                                                                                        * 0.016666669));
        *(double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldX[15] + v282) = z;
        *(double *)((char *)this->m_SecondaryInfo + v282 - 112) = x;
        *(double *)((char *)this->m_SecondaryInfo->mPrevPosWorldX + v282) = (float)(y
                                                                                  - (float)(*(float *)(v281 + 28)
                                                                                          * 0.016666669));
        *(double *)((char *)this->m_SecondaryInfo->mPrevPosWorldY + v282) = z;
        *(double *)((char *)this->m_SecondaryInfo + v282 - 104) = x;
        *(double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldX[1] + v282) = (float)(y
                                                                                      - (float)(*(float *)(v281 + 28)
                                                                                              * 0.016666669));
        *(double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldY[1] + v282) = z;
        *(double *)((char *)this->m_SecondaryInfo + v282 - 96) = x;
        *(double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldX[2] + v282) = (float)(y
                                                                                      - (float)(*(float *)(v281 + 28)
                                                                                              * 0.016666669));
        *(double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldY[2] + v282) = z;
        *(double *)((char *)this->m_SecondaryInfo + v282 - 88) = x;
        *(double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldX[3] + v282) = (float)(y
                                                                                      - (float)(*(float *)(v281 + 28)
                                                                                              * 0.016666669));
        *(double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldY[3] + v282) = z;
        *(double *)((char *)this->m_SecondaryInfo + v282 - 80) = x;
        *(double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldX[4] + v282) = (float)(y
                                                                                      - (float)(*(float *)(v281 + 28)
                                                                                              * 0.016666669));
        *(double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldY[4] + v282) = z;
        *(double *)((char *)this->m_SecondaryInfo + v282 - 72) = x;
        *(double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldX[5] + v282) = (float)(y
                                                                                      - (float)(*(float *)(v281 + 28)
                                                                                              * 0.016666669));
        *(double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldY[5] + v282) = z;
        v282 += 64i64;
        --v283;
      }
      while ( v283 );
      v284 = this->m_SecondaryInfo;
      v285 = v272;
      v469 = v285 * 592;
      v284[v285].iStateFlg &= ~1u;
    }
    else
    {
      v286 = *(_QWORD *)v468;
      v466 = 592i64 * *(_QWORD *)v468;
      v281 = m_MirrorData + 72i64 * *(_QWORD *)v468;
      v287 = 592i64 * *(_QWORD *)v468 + 144;
      v288 = 3i64;
      do
      {
        *(double *)((char *)this->m_SecondaryInfo + v287 - 128) = v268
                                                                + *(double *)((char *)this->m_SecondaryInfo + v287 - 120);
        *(double *)((char *)&this->m_SecondaryInfo->vPrevAxis.x + v287) = *(double *)((char *)&this->m_SecondaryInfo->vPrevAxis.z
                                                                                    + v287)
                                                                        - (float)(*(float *)(v281 + 28) * 0.016666669)
                                                                        + v273;
        *(double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldX[14] + v287) = v274
                                                                               + *(double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldX[15]
                                                                                           + v287);
        *(double *)((char *)this->m_SecondaryInfo + v287 - 120) = v268
                                                                + *(double *)((char *)this->m_SecondaryInfo + v287 - 112);
        *(double *)((char *)&this->m_SecondaryInfo->vPrevAxis.z + v287) = *(double *)((char *)this->m_SecondaryInfo->mPrevPosWorldX
                                                                                    + v287)
                                                                        - (float)(*(float *)(v281 + 28) * 0.016666669)
                                                                        + v273;
        *(double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldX[15] + v287) = v274
                                                                               + *(double *)((char *)this->m_SecondaryInfo->mPrevPosWorldY
                                                                                           + v287);
        *(double *)((char *)this->m_SecondaryInfo + v287 - 112) = v268
                                                                + *(double *)((char *)this->m_SecondaryInfo + v287 - 104);
        *(double *)((char *)this->m_SecondaryInfo->mPrevPosWorldX + v287) = *(double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldX[1]
                                                                                      + v287)
                                                                          - (float)(*(float *)(v281 + 28) * 0.016666669)
                                                                          + v273;
        *(double *)((char *)this->m_SecondaryInfo->mPrevPosWorldY + v287) = v274
                                                                          + *(double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldY[1]
                                                                                      + v287);
        *(double *)((char *)this->m_SecondaryInfo + v287 - 104) = v268
                                                                + *(double *)((char *)this->m_SecondaryInfo + v287 - 96);
        *(double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldX[1] + v287) = *(double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldX[2]
                                                                                          + v287)
                                                                              - (float)(*(float *)(v281 + 28)
                                                                                      * 0.016666669)
                                                                              + v273;
        *(double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldY[1] + v287) = v274
                                                                              + *(double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldY[2]
                                                                                          + v287);
        *(double *)((char *)this->m_SecondaryInfo + v287 - 96) = v268
                                                               + *(double *)((char *)this->m_SecondaryInfo + v287 - 88);
        *(double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldX[2] + v287) = *(double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldX[3]
                                                                                          + v287)
                                                                              - (float)(*(float *)(v281 + 28)
                                                                                      * 0.016666669)
                                                                              + v273;
        *(double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldY[2] + v287) = v274
                                                                              + *(double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldY[3]
                                                                                          + v287);
        v287 += 40i64;
        --v288;
      }
      while ( v288 );
      v289 = 0;
      if ( this->m_iSecondaryForceCount > 0 )
      {
        p_z = &this->m_SecondaryForce[0].vForce.z;
        do
        {
          if ( (*((char *)p_z + 4) < 0 || v261 == *((_DWORD *)p_z - 3)) && ((_DWORD)p_z[1] & 1) == 0 )
          {
            if ( OGLModel::checkMotionMirror(this, 0i64) )
            {
              sinf(-1.5707964);
              v291 = FLOAT_N1_5707964;
              v292 = FLOAT_N1_5707964;
            }
            else
            {
              sinf(1.5707964);
              v291 = FLOAT_1_5707964;
              v292 = FLOAT_1_5707964;
            }
            v293 = cosf(v292);
            v294 = *(p_z - 2);
            v295 = *(p_z - 1);
            v296 = v466;
            v297 = *p_z * -1.0;
            memset(&In2, 0, sizeof(In2));
            *(double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldX[14] + v466) = (float)((float)((float)(0.0 * v295) + (float)(v293 * v294))
                                                                                           + (float)(v291 * v297))
                                                                                   + *(double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldX[14]
                                                                                               + v466);
            *(double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldY[14] + v296) = (float)((float)((float)(0.0 * v294) + v295)
                                                                                           + (float)(0.0 * v297))
                                                                                   + *(double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldY[14]
                                                                                               + v296);
            *(double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldZ[14] + v296) = (float)((float)((float)(0.0 * v295) + (float)(COERCE_FLOAT(LODWORD(v291) ^ _xmm) * v294))
                                                                                           + (float)(v293 * v297))
                                                                                   + *(double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldZ[14]
                                                                                               + v296);
          }
          ++v289;
          p_z += 6;
        }
        while ( v289 < this->m_iSecondaryForceCount );
        v254 = FLOAT_0_016666669;
        v221 = *(float *)&FLOAT_1_0;
        v275 = (__m128)LODWORD(FLOAT_N1_0);
        v286 = *(_QWORD *)v468;
      }
      v298 = this->m_SecondaryInfo;
      v276 = m_MirrorData;
      v285 = v286;
      v469 = v285 * 592;
      v298[v285].mPrevPosWorldX[15] = x;
      this->m_SecondaryInfo[v285].mPrevPosWorldY[15] = y;
      this->m_SecondaryInfo[v285].mPrevPosWorldZ[15] = z;
      v299 = *(float *)(v276 + 72 * v286 + 16);
      v300 = 15.0 - v299;
      if ( LOBYTE(v10) )
      {
        v301 = *(float *)(v276 + 72 * v286 + 48);
        v302 = fminf(6.0, v301);
        if ( v301 >= 2.0 )
        {
          v303 = this->m_SecondaryInfo[v285].mPrevPosWorldY[14] - y;
          if ( v303 <= 0.0 )
            *(_QWORD *)&v303 ^= _xmm;
          if ( v303 > (float)((float)((float)(*(float *)(v276 + 72 * v286 + 28) * v254) * 8.0) * (float)(7.0 - v302))
            && v299 > 0.30000001 )
          {
            v300 = FLOAT_14_7;
          }
        }
      }
      calcSpline(
        &pos,
        this->m_SecondaryInfo[v285].mPrevPosWorldX,
        this->m_SecondaryInfo[v285].mPrevPosWorldY,
        this->m_SecondaryInfo[v285].mPrevPosWorldZ,
        bPartsa,
        15.0 - v299,
        v300,
        15.0 - v299);
      v304 = this->m_SecondaryInfo;
      y = pos.y;
      x = pos.x;
      z = pos.z;
      v253 = *(float *)iAniboneNo;
      v280 = *(_QWORD *)v468;
      v277 = (OGLQuat)_mm_cvtpd_ps((__m128d)*(unsigned __int64 *)&v304[v285].mPrevPosWorldY[14]);
      v305 = v304[v285].mPrevPosWorldX[14];
      v306 = v304[v285].mPrevPosWorldZ[14];
      v277.x = v277.x - pos.y;
      rfZ = v221;
      v278 = v305 - pos.x;
      v279 = v306 - pos.z;
      x_low = v277;
    }
    if ( v277.x == 0.0 )
    {
      v277.x = FLOAT_N0_001;
      x_low = (OGLQuat)LODWORD(FLOAT_N0_001);
    }
    v307 = this->m_SecondaryInfo;
    *(float *)&v308 = 0.0;
    v446 = 0.0;
    v307[v285].mPrevPosWorldX[15] = x;
    v309 = v277.x <= 0.0;
    v443 = v277.x <= 0.0;
    v310 = z;
    v311 = FLOAT_0_125;
    v312 = 0.0;
    this->m_SecondaryInfo[v285].mPrevPosWorldY[15] = y;
    v313 = 0i64;
    v314 = this->m_SecondaryInfo;
    rfY = FLOAT_0_125;
    v450 = FLOAT_0_125;
    pLen = 0.0;
    v314[v285].mPrevPosWorldZ[15] = v310;
    v315 = 0;
    if ( (*(_DWORD *)(v276 + 72 * v280 + 24) & 0xE) != 0 )
    {
      v316 = *(__m128 *)&pBoneMat.m[8];
      pOutMat = pBoneMat;
      OGLMatrix::transpose(&pOutMat);
      v319 = (float)((float)(pOutMat.m[5] * v318) + (float)(pOutMat.m[1] * v278)) + (float)(pOutMat.m[9] * v279);
      v320 = (float)((float)(pOutMat.m[6] * v318) + (float)(pOutMat.m[2] * v278)) + (float)(pOutMat.m[10] * v279);
      v321 = (float)((float)(pOutMat.m[4] * v318) + (float)(pOutMat.m[0] * v278)) + (float)(pOutMat.m[8] * v279);
      if ( (v317 & 2) != 0 )
      {
        v321 = 0.0;
      }
      else if ( (v317 & 8) != 0 )
      {
        v320 = 0.0;
      }
      else if ( (v317 & 4) != 0 )
      {
        v319 = 0.0;
      }
      v322 = (OGLQuat)_mm_shuffle_ps(*(__m128 *)&pBoneMat.m[4], *(__m128 *)&pBoneMat.m[4], 85);
      v322.x = (float)((float)(v322.x * v319) + (float)(pBoneMat.m[1] * v321))
             + (float)(_mm_shuffle_ps(v316, v316, 85).m128_f32[0] * v320);
      x_low = v322;
      v279 = (float)((float)(_mm_shuffle_ps(*(__m128 *)&pBoneMat.m[4], *(__m128 *)&pBoneMat.m[4], 170).m128_f32[0] * v319)
                   + (float)(pBoneMat.m[2] * v321))
           + (float)(_mm_shuffle_ps(v316, v316, 170).m128_f32[0] * v320);
      v278 = (float)((float)(pBoneMat.m[4] * v319) + (float)(pBoneMat.m[0] * v321)) + (float)(v316.m128_f32[0] * v320);
    }
    else
    {
      v322.x = x_low.x;
    }
    v323 = sqrtf((float)((float)(v278 * v278) + (float)(v322.x * v322.x)) + (float)(v279 * v279));
    if ( v253 == 0.0 )
    {
      v324 = v454;
      v326 = v455;
      v325 = v456;
    }
    else
    {
      v324 = v454 / v253;
      v325 = v456 / v253;
      v326 = v455 / v253;
      v454 = v454 / v253;
      v456 = v456 / v253;
      v455 = v455 / v253;
    }
    v327 = v323;
    v328 = x_low;
    if ( v327 != 0.0 )
    {
      v328.x = x_low.x / v327;
      v278 = v278 / v327;
      x_low = v328;
      v279 = v279 / v327;
    }
    v329 = *(float *)(v276 + 72i64 * *(_QWORD *)v468 + 48);
    v330 = v275;
    v330.m128_f32[0] = fmaxf(
                         v275.m128_f32[0],
                         fminf(v221, (float)((float)(v328.x * v325) + (float)(v278 * v324)) + (float)(v279 * v326)));
    if ( v329 == v275.m128_f32[0] )
    {
      v330.m128_f32[0] = acosf(v330.m128_f32[0]);
      v331 = v330;
    }
    else
    {
      v332 = 0i64;
      v332.m128d_f64[0] = acosf(v330.m128_f32[0]) * v323 * v329;
      v331 = _mm_cvtpd_ps(v332);
    }
    v333 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v331.m128_f32[0]) & _xmm);
    if ( v333 < 0.0000099999997 )
      v331 = 0i64;
    v334 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v331.m128_f32[0]) & _xmm);
    if ( v334 > 2.0943952 )
    {
      if ( v331.m128_f32[0] <= 0.0 )
      {
        if ( v331.m128_f32[0] < 0.0 )
          v331 = (__m128)LODWORD(FLOAT_N2_0943952);
      }
      else
      {
        v331 = (__m128)LODWORD(FLOAT_2_0943952);
      }
    }
    v337 = x_low;
    v335 = (float)(v279 * v456) - (float)(x_low.x * v455);
    v451 = v335;
    v336 = (float)(v278 * v455) - (float)(v279 * v454);
    v337.x = (float)(x_low.x * v454) - (float)(v278 * v456);
    axis.x = v335;
    axis.y = v336;
    axis.z = v337.x;
    x_low = v337;
    v338 = sqrtf((float)((float)(v336 * v336) + (float)(v335 * v335)) + (float)(v337.x * v337.x));
    if ( v338 != 0.0 )
    {
      v335 = v335 / v338;
      v337.x = v337.x / v338;
      v336 = v336 / v338;
      v451 = v335;
      axis.x = v335;
      axis.y = v336;
      axis.z = v337.x;
      x_low = v337;
    }
    v339 = FLOAT_0_5;
    v340 = 0.0;
LABEL_306:
    v341 = v466;
LABEL_307:
    v342 = v450;
    while ( 1 )
    {
      while ( 1 )
      {
        if ( v331.m128_f32[0] == 0.0 )
        {
          v350 = v458;
        }
        else
        {
          v343 = this->m_pBoneInfo;
          v344 = *(_OWORD *)&v343[*(_QWORD *)v468].mRot.m[4];
          *(_OWORD *)pBoneMat.m = *(_OWORD *)v343[*(_QWORD *)v468].mRot.m;
          *(_OWORD *)&pBoneMat.m[4] = v344;
          v345 = *(_OWORD *)&v343[*(_QWORD *)v468].mRot.m[12];
          *(_OWORD *)&pBoneMat.m[8] = *(_OWORD *)&v343[*(_QWORD *)v468].mRot.m[8];
          *(_OWORD *)&pBoneMat.m[12] = v345;
          if ( (v315 & 0xF0) == 0 && ((*(_DWORD *)(v281 + 24) & 0x2000) == 0 || (v315 & 0xF) == 0) )
          {
            v346 = *(float *)(v281 + 8);
            if ( v309 )
            {
              v347 = fminf(v346, v331.m128_f32[0]);
              v331 = (__m128)*(unsigned int *)(v281 + 12);
              v331.m128_f32[0] = fmaxf(v331.m128_f32[0], v347);
            }
            else
            {
              v348 = fmaxf(COERCE_FLOAT(LODWORD(v346) ^ _xmm), v331.m128_f32[0]);
              v331 = _mm_xor_ps((__m128)*(unsigned int *)(v281 + 12), (__m128)_xmm);
              v331.m128_f32[0] = fminf(v331.m128_f32[0], v348);
            }
          }
          if ( *(float *)&v308 == 0.0 )
            v313 = v331;
          *(_DWORD *)((char *)&this->m_SecondaryInfo->fPrevRadian + v341) = v331.m128_i32[0];
          v349 = this->m_SecondaryInfo;
          *(float *)((char *)&v349->vPrevAxis.x + v341) = v335;
          *(float *)((char *)&v349->vPrevAxis.y + v341) = v336;
          *(float *)((char *)&v349->vPrevAxis.z + v341) = v337.x;
          OGLMatrix::rotateV(&mIn, &axis, v331.m128_f32[0]);
          OGLMatrix::multiplyFastRotate(&mIn, &this->m_pBoneInfo[*v467].mRot, &mIn);
          OGLMatrix::multiplyFast(&pBoneMat, &pBoneMat, &mIn);
          v350 = pBoneMat.m[13];
          v339 = FLOAT_0_5;
          v458 = pBoneMat.m[13];
        }
        if ( (OGLModel::getSecondaryState(this, iBoneNo) & 0x400) != 0 || (v315 & 0x40) != 0 )
        {
LABEL_357:
          if ( (OGLModel::getSecondaryState(this, v351) & 0x800) != 0
            || !this->m_SecondaryCollisionEnable
            || !*(_QWORD *)v281
            || (v315 & 0x40) != 0 )
          {
            goto LABEL_425;
          }
          v361 = 4i64;
          v362 = &In1.m[2];
          do
          {
            *((_QWORD *)v362 - 1) = 0i64;
            *v362 = 0.0;
            v362 += 3;
            --v361;
          }
          while ( v361 );
          memset(&pOutMat, 0, sizeof(pOutMat));
          v363 = 0;
          v364 = 2i64;
          memset(&In2, 0, sizeof(In2));
          sz1 = 0.0;
          v365 = &vLine.z;
          do
          {
            *((_QWORD *)v365 - 1) = 0i64;
            *v365 = 0.0;
            v365 += 3;
            --v364;
          }
          while ( v364 );
          if ( (*(_DWORD *)(v281 + 24) & 0x210) != 0 )
            OGLModel::getBoneMatrix(
              this,
              &pOutMat,
              v360,
              *(float *)(v281 + 44),
              &pBoneMat,
              *(float *)(v281 + 36),
              &vLine,
              (float *)iAniboneNo);
          else
            OGLModel::getBoneMatrix(
              this,
              &pOutMat,
              (float *)iAniboneNo,
              v360,
              *(float *)(v281 + 36),
              *(float *)(v281 + 44),
              &pBoneMat);
          v366 = pOutMat.m[14];
          v367 = 0;
          v368 = pOutMat.m[13];
          v369 = 0i64;
          v370 = pOutMat.m[12];
          v371 = 0i64;
          v372 = *(float *)iAniboneNo;
          v373 = (float *)(m_MirrorData + 36);
          while ( 2 )
          {
            v374 = this->m_pFigure;
            v472 = v371;
            v475 = v369;
            if ( v367 >= (signed int)v374->m_uiBoneCount )
            {
              v389 = this->m_SecondaryInfo;
              v213 = v469;
              v390 = *(_OWORD *)&pOutMat.m[4];
              v391 = *(_QWORD *)v468;
              v392 = m_MirrorData;
              *(_OWORD *)((char *)v389->mBaseMat.m + v469) = *(_OWORD *)pOutMat.m;
              v393 = *(_OWORD *)&pOutMat.m[8];
              *(_OWORD *)((char *)&v389->mBaseMat.m[4] + v213) = v390;
              v394 = *(_OWORD *)&pOutMat.m[12];
              *(_OWORD *)((char *)&v389->mBaseMat.m[8] + v213) = v393;
              *(_OWORD *)((char *)&v389->mBaseMat.m[12] + v213) = v394;
              v395 = 9 * v391;
              v218 = this->m_SecondaryInfo;
              LODWORD(v393) = *(_DWORD *)(v392 + 8 * v395 + 40);
              v219 = *(_DWORD *)(v392 + 8 * v395 + 32);
              *(_DWORD *)((char *)&v218->vScale.y + v213) = v393;
              *(float *)((char *)&v218->vScale.z + v213) = v372;
LABEL_424:
              *(_DWORD *)((char *)&v218->vScale.x + v213) = v219;
              goto LABEL_425;
            }
            if ( *(_BYTE *)(v369 + *(_QWORD *)v281) )
            {
              v375 = *((_DWORD *)v373 - 3);
              if ( (v375 & 0x210) != 0 || (*(_DWORD *)(v281 + 24) & 0x210) != 0 )
              {
                v376 = *(_DWORD *)(v281 + 24);
                if ( (v376 & 0x10) != 0 )
                {
                  Line2S.x = v370;
                  Line2S.y = v368;
                  Line2S.z = v366;
                  if ( (v375 & 0x10) != 0 )
                  {
                    OGLModel::getBoneMatrix(this, &In2, v367, v373[2], &this->m_pBoneInfo[v367].mRot, 0.0, 0i64, 0i64);
                    *(float *)&v308 = v446;
                    if ( (float)((float)(*(float *)(v281 + 32) + *(v373 - 1))
                               * (float)(*(float *)(v281 + 32) + *(v373 - 1))) > (float)((float)((float)((float)(v370 - In2.m[12]) * (float)(v370 - In2.m[12]))
                                                                                               + (float)((float)(v368 - In2.m[13]) * (float)(v368 - In2.m[13])))
                                                                                       + (float)((float)(v366 - In2.m[14])
                                                                                               * (float)(v366 - In2.m[14]))) )
                      v363 = 1;
                  }
                  else if ( (v375 & 0x200) != 0 )
                  {
                    OGLModel::getBoneMatrix(
                      this,
                      &In2,
                      v367,
                      v373[2],
                      &this->m_pBoneInfo[v367].mRot,
                      *v373,
                      &v491,
                      &sz1);
                    vLine.x = vLine.x * 0.0099999998;
                    vLine.y = vLine.y * 0.0099999998;
                    vLine.z = vLine.z * 0.0099999998;
                    v484 = *(OGLVec3 *)&In2.m[12];
                    vec1.y = v491.y + In2.m[13];
                    vec1.x = v491.x + In2.m[12];
                    vec1.z = v491.z + In2.m[14];
                    v377 = OGLSecondary::calcDistSegmentSegment(&v484, &vec1, &Line2S, &Line2S);
                    if ( (float)((float)(*(float *)(v281 + 32) + *(v373 - 1))
                               * (float)(*(float *)(v281 + 32) + *(v373 - 1))) >= (float)(v377 * v377) )
                      v363 = 1;
                  }
                  else
                  {
                    OGLModel::getBoneMatrix(this, &In2, &sz1, v367, *v373, v373[2], &this->m_pBoneInfo[v367].mRot);
                    if ( OGLSecondary::checkOBBSphereCollision(
                           &In2,
                           *(v373 - 1),
                           v373[1],
                           sz1,
                           &Line2S,
                           *(float *)(v281 + 32)) )
                    {
                      v363 = 1;
                    }
                  }
                }
                else if ( (v376 & 0x200) != 0 )
                {
                  pos.x = v370;
                  pos.y = v368;
                  pos.z = v366;
                  if ( (v375 & 0x10) != 0 )
                  {
                    OGLModel::getBoneMatrix(
                      this,
                      &In2,
                      v367,
                      v373[2],
                      &this->m_pBoneInfo[v367].mRot,
                      *v373,
                      &v491,
                      0i64);
                    v481.y = vLine.y + v368;
                    v481.x = vLine.x + v370;
                    v491.x = v491.x * 0.0099999998;
                    v491.z = v491.z * 0.0099999998;
                    v482 = *(OGLVec3 *)&In2.m[12];
                    v481.z = vLine.z + v366;
                    Line2E.x = v491.x + In2.m[12];
                    Line2E.z = v491.z + In2.m[14];
                    v491.y = v491.y * 0.0099999998;
                    Line2E.y = v491.y + In2.m[13];
                    v378 = OGLSecondary::calcDistSegmentSegment(&pos, &v481, &v482, &Line2E);
                    if ( (float)((float)(*(float *)(v281 + 32) + *(v373 - 1))
                               * (float)(*(float *)(v281 + 32) + *(v373 - 1))) >= (float)(v378 * v378) )
                      v363 = 1;
                  }
                  else if ( (v375 & 0x200) != 0 )
                  {
                    OGLModel::getBoneMatrix(
                      this,
                      &In2,
                      v367,
                      v373[2],
                      &this->m_pBoneInfo[v367].mRot,
                      *v373,
                      &v491,
                      &sz1);
                    v479 = *(OGLVec3 *)&In2.m[12];
                    Line1S.y = vLine.y + v368;
                    Line1S.x = vLine.x + v370;
                    v480.x = v491.x + In2.m[12];
                    Line1S.z = vLine.z + v366;
                    v480.z = v491.z + In2.m[14];
                    v480.y = v491.y + In2.m[13];
                    v379 = OGLSecondary::calcDistSegmentSegment(&pos, &Line1S, &v479, &v480);
                    if ( (float)((float)(*(float *)(v281 + 32) + *(v373 - 1))
                               * (float)(*(float *)(v281 + 32) + *(v373 - 1))) >= (float)(v379 * v379) )
                      v363 = 1;
                  }
                  else
                  {
                    OGLModel::getBoneMatrix(this, &In2, &sz1, v367, *v373, v373[2], &this->m_pBoneInfo[v367].mRot);
                    if ( OGLSecondary::checkOBBSphereCollision(
                           &In2,
                           *(v373 - 1),
                           v373[1],
                           sz1,
                           &pos,
                           *(float *)(v281 + 32)) )
                    {
                      v363 = 1;
                    }
                  }
                }
                else
                {
                  OGLModel::getBoneMatrix(this, &In2, v367, v373[2], &this->m_pBoneInfo[v367].mRot, 0.0, 0i64, 0i64);
                  v380 = *(float *)(v281 + 40);
                  Line1E.y = In2.m[13];
                  xta = *(v373 - 1);
                  v381 = *(float *)(v281 + 32);
                  Line1E.x = In2.m[12];
                  Line1E.z = In2.m[14];
                  if ( OGLSecondary::checkOBBSphereCollision(&pOutMat, v381, v380, v372, &Line1E, xta) )
                    v363 = 1;
                }
              }
              else
              {
                OGLModel::getBoneMatrix(this, &In2, &sz1, v367, *v373, v373[2], &this->m_pBoneInfo[v367].mRot);
                if ( OGLSecondary::checkOBBCollision(
                       &pOutMat,
                       *(float *)(v281 + 32),
                       *(float *)(v281 + 40),
                       v372,
                       &In2,
                       *(v373 - 1),
                       v373[1],
                       sz1) )
                {
                  v363 = 1;
                }
              }
              if ( (v315 & 0x44) == 0 )
              {
                if ( v363 )
                {
                  v382 = v315 | 1;
                  if ( (v315 & 0xF) != 0 )
                    v382 = v315;
                  v315 = v382;
                  if ( (v382 & 2) != 0 )
                  {
                    v339 = FLOAT_0_5;
                    rfY = rfY * 0.5;
                    if ( rfY >= 0.00019999999 )
                      v315 = v382 & 0xFFFFFFFD;
                    else
                      v315 = v382 | 4;
                    if ( v313.m128_f32[0] >= 0.0 )
                      v312 = v312 - v311;
                    else
                      v312 = v312 + v311;
                    v383 = iMotionNo;
                    ++v308;
                    v446 = *(float *)&v308;
                    v331 = v313;
                    v331.m128_f32[0] = v313.m128_f32[0] + v312;
                    if ( v308 < iMotionNo )
                      goto LABEL_305;
                    goto LABEL_413;
                  }
                  if ( v313.m128_f32[0] <= 0.0 )
                    v312 = v312 + v311;
                  else
                    v312 = v312 - v311;
                  ++v308;
                  v331 = v313;
                  v331.m128_f32[0] = v313.m128_f32[0] + v312;
                  v446 = *(float *)&v308;
                  if ( v308 < iMotionNo )
                  {
                    v341 = v466;
                    v340 = pLen;
                    v335 = v451;
                    v337.x = x_low.x;
                    *(int *)((char *)&this->m_SecondaryInfo->iStateWorkFlg + v466) |= 0x40u;
                    v339 = FLOAT_0_5;
                    v309 = v443;
                    goto LABEL_307;
                  }
                }
                v383 = iMotionNo;
                v339 = FLOAT_0_5;
LABEL_413:
                if ( (v315 & 3) == 1 )
                {
                  v311 = v311 * v339;
                  v315 |= 2u;
                }
                if ( (v315 & 6) == 2 )
                {
                  v312 = v313.m128_f32[0] >= 0.0 ? v312 + v311 : v312 - v311;
                  ++v308;
                  v331 = v313;
                  v446 = *(float *)&v308;
                  v331.m128_f32[0] = v313.m128_f32[0] + v312;
                  if ( v308 < v383 )
                  {
LABEL_305:
                    v309 = v443;
                    v337.x = x_low.x;
                    v335 = v451;
                    v340 = pLen;
                    goto LABEL_306;
                  }
                }
              }
              v384 = this->m_SecondaryInfo;
              v371 = v472;
              v385 = *(_OWORD *)&In2.m[4];
              *(_OWORD *)((char *)v384->mBaseMat.m + v472) = *(_OWORD *)In2.m;
              v386 = *(_OWORD *)&In2.m[8];
              *(_OWORD *)((char *)&v384->mBaseMat.m[4] + v371) = v385;
              v387 = *(_OWORD *)&In2.m[12];
              *(_OWORD *)((char *)&v384->mBaseMat.m[8] + v371) = v386;
              *(_OWORD *)((char *)&v384->mBaseMat.m[12] + v371) = v387;
              v388 = this->m_SecondaryInfo;
              *(float *)&v384 = *(v373 - 1);
              *(float *)((char *)&v388->vScale.y + v371) = v373[1];
              *(float *)((char *)&v388->vScale.z + v371) = sz1;
              *(_DWORD *)((char *)&v388->vScale.x + v371) = (_DWORD)v384;
              v369 = v475;
            }
            ++v367;
            ++v369;
            v371 += 592i64;
            v373 += 18;
            continue;
          }
        }
        v353 = this->m_SecondaryInfo;
        if ( v353 )
          v354 = v353[*v352].iStateFlg | v353[*v352].iStateWorkFlg | v353[*v352].iStateTakeOverFlg;
        else
          LOBYTE(v354) = 0;
        if ( (v354 & 0x20) != 0 && this->m_pBoneInfo[*v352].mRot.m[13] > v350 )
          break;
        if ( *(float *)(v281 + 52) > v350 )
        {
          if ( v353 )
            v355 = v353[*v352].iStateFlg | v353[*v352].iStateWorkFlg | v353[*v352].iStateTakeOverFlg;
          else
            LOBYTE(v355) = 0;
          if ( (v355 & 0x20) == 0 )
            break;
        }
        if ( (v315 & 0x30) == 16 )
        {
          v342 = v342 * v339;
          v315 |= 0x20u;
          v450 = v342;
        }
        if ( (v315 & 0x60) != 32 )
          goto LABEL_357;
        v309 = v443;
        if ( v443 )
          v340 = v340 + v342;
        else
          v340 = v340 - v342;
        v359 = ++v308 < 128;
LABEL_356:
        v331 = v313;
        pLen = v340;
        v331.m128_f32[0] = v313.m128_f32[0] + v340;
        v446 = *(float *)&v308;
        if ( !v359 )
          goto LABEL_357;
      }
      if ( (v315 & 0xF0) != 0 )
      {
        v358 = v443;
      }
      else
      {
        v315 |= 0x10u;
        v356 = LODWORD(rfZ);
        v335 = (float)(v456 * 0.0) - (float)(rfZ * v455);
        *(float *)&v356 = (float)(rfZ * v454) - (float)(v456 * 0.0);
        v451 = v335;
        v336 = (float)(v455 * 0.0) - (float)(v454 * 0.0);
        v357 = sqrtf((float)((float)(v336 * v336) + (float)(v335 * v335)) + (float)(*(float *)&v356 * *(float *)&v356));
        if ( v357 != 0.0 )
        {
          v335 = v335 / v357;
          v336 = v336 / v357;
          v451 = v335;
          *(float *)&v356 = *(float *)&v356 / v357;
        }
        v351 = iBoneNo;
        v358 = 0;
        v443 = 0;
        LODWORD(v337.x) = v356;
        axis.x = v335;
        axis.y = v336;
        LODWORD(axis.z) = v356;
        x_low = (OGLQuat)v356;
      }
      if ( (v315 & 0x20) != 0 )
      {
        v339 = FLOAT_0_5;
        v342 = v342 * 0.5;
        v450 = v342;
        if ( v342 >= 0.00019999999 )
          v315 &= ~0x20u;
        else
          v315 |= 0x40u;
        v309 = v443;
        if ( v358 )
          v340 = v340 - v342;
        else
          v340 = v340 + v342;
        v359 = ++v308 < 30;
        goto LABEL_356;
      }
      if ( v358 )
        v340 = v340 - v342;
      else
        v340 = v340 + v342;
      ++v308;
      pLen = v340;
      v446 = *(float *)&v308;
      v331 = v313;
      v331.m128_f32[0] = v313.m128_f32[0] + v340;
      if ( v308 >= 30 )
        goto LABEL_357;
      *(int *)((char *)&v353->iStateWorkFlg + v341) |= 0x20u;
      v309 = v443;
      v339 = FLOAT_0_5;
    }
  }
  v20 = *(_QWORD *)(v13 + 24);
  v466 = v20;
  v21 = OGLModel::searchBoneFigureToSecondary(this, v12);
  if ( v21 < 0 )
  {
    v23 = v5;
    v24 = this;
LABEL_8:
    OGLModel::setBoneTransNotSecOnce(v24, v23, v22);
    return;
  }
  In2.m[7] = 0.0;
  In2.m[15] = 0.0;
  *(_QWORD *)In2.m = 1065353216i64;
  m_SecondaryInfo[v5].iHitNo = -1;
  v25 = v21;
  In2.m[4] = 0.0;
  *(_QWORD *)&In2.m[8] = 0i64;
  *(_QWORD *)&In2.m[12] = 0i64;
  *(_QWORD *)&In2.m[5] = 1065353216i64;
  v26 = 80i64 * v21;
  *(_QWORD *)&In2.m[2] = 0i64;
  *(_QWORD *)&In2.m[10] = 1065353216i64;
  In2.m[14] = 0.0;
  v27 = *(float *)(v26 + v20 + 24);
  In2.m[7] = 0.0;
  In2.m[15] = 1.0;
  v472 = 592 * v5;
  v475 = v26;
  if ( v27 == 0.0 )
  {
    v29 = _xmm;
  }
  else
  {
    v28 = (float)(v27 * 3.1415927) / 180.0;
    sinf(v28);
    v29 = _xmm;
    In1.m[11] = 0.0;
    In1.m[14] = 0.0;
    LODWORD(In1.m[4]) = LODWORD(v28) ^ _xmm;
    In1.m[0] = cosf(v28);
    In1.m[1] = v28;
    In1.m[5] = In1.m[0];
    *(_QWORD *)&In1.m[2] = 0i64;
    *(_QWORD *)&In1.m[6] = 0i64;
    *(_QWORD *)&In1.m[8] = 0i64;
    *(_QWORD *)&In1.m[12] = 0i64;
    In1.m[10] = 1.0;
    In1.m[15] = 1.0;
    OGLMatrix::multiplyFastRotate(&In2, &In1, &In2);
  }
  v30 = *(float *)(v26 + v20 + 16);
  if ( v30 != 0.0 )
  {
    v31 = (float)(v30 * 3.1415927) / 180.0;
    sinf(v31);
    v32 = cosf(v31);
    In1.m[1] = 0.0;
    In1.m[4] = 0.0;
    In1.m[7] = 0.0;
    In1.m[8] = 0.0;
    In1.m[11] = 0.0;
    In1.m[14] = 0.0;
    LODWORD(In1.m[9]) = LODWORD(v31) ^ v29;
    In1.m[5] = v32;
    In1.m[6] = v31;
    In1.m[10] = v32;
    *(_QWORD *)&In1.m[2] = 0i64;
    *(_QWORD *)&In1.m[12] = 0i64;
    In1.m[0] = 1.0;
    In1.m[15] = 1.0;
    OGLMatrix::multiplyFastRotate(&In2, &In1, &In2);
  }
  v33 = *(float *)(v26 + v20 + 20);
  if ( v33 != 0.0 )
  {
    v34 = (float)(v33 * 3.1415927) / 180.0;
    sinf(v34);
    v35 = cosf(v34);
    In1.m[9] = 0.0;
    In1.m[8] = v34;
    In1.m[1] = 0.0;
    In1.m[3] = 0.0;
    In1.m[4] = 0.0;
    In1.m[11] = 0.0;
    In1.m[14] = 0.0;
    LODWORD(In1.m[2]) = LODWORD(v34) ^ v29;
    In1.m[0] = v35;
    In1.m[10] = v35;
    *(_QWORD *)&In1.m[6] = 0i64;
    *(_QWORD *)&In1.m[12] = 0i64;
    In1.m[5] = 1.0;
    In1.m[15] = 1.0;
    OGLMatrix::multiplyFastRotate(&In2, &In1, &In2);
  }
  OGLMatrix::multiplyFast(&this->m_pBoneInfo[v470 / 0x218].mRot, &this->m_pBoneInfo[v470 / 0x218].mRot, &In2);
  v36 = OGLModel::searchMotionBoneID(this, v5, &iMotionNo, iAniboneNo, 1u);
  if ( v36 && (v36->m_uiInfoFlg & 4) != 0 )
  {
    v37 = this->m_pBoneInfo;
    In1.m[15] = 0.0;
    In1.m[4] = 0.0;
    In1.m[14] = 0.0;
    In1.m[7] = 0.0;
    *(_QWORD *)&In1.m[8] = 0i64;
    *(_QWORD *)&In1.m[12] = 0i64;
    *(_QWORD *)&In1.m[2] = 0i64;
    *(_QWORD *)In1.m = 1065353216i64;
    *(_QWORD *)&In1.m[5] = 1065353216i64;
    *(_QWORD *)&In1.m[10] = 1065353216i64;
    v38 = *v467;
    In1.m[15] = 1.0;
    if ( !OGLVec3::isOne(&v37[v38].vScale) )
    {
      v42 = 1.0 / *(float *)(v41 + v39 + 188);
      In1.m[0] = 1.0 / *v40;
      v43 = 1.0 / *(float *)(v41 + v39 + 192);
      In1.m[5] = v42;
      In1.m[10] = v43;
    }
    *(_QWORD *)In2.m = 1065353216i64;
    In2.m[7] = 0.0;
    *(_QWORD *)&In2.m[12] = 0i64;
    *(_QWORD *)&In2.m[14] = 0i64;
    In2.m[4] = 0.0;
    *(_QWORD *)&In2.m[8] = 0i64;
    *(_QWORD *)&In2.m[5] = 1065353216i64;
    v44 = *(_OWORD *)(v470 + v39 + 212);
    *(_QWORD *)&In2.m[2] = 0i64;
    v45 = *(_OWORD *)(v470 + v39 + 228);
    *(_QWORD *)&In2.m[10] = 1065353216i64;
    *(_OWORD *)pOutMat.m = v44;
    v46 = *(_OWORD *)(v470 + v39 + 244);
    In2.m[7] = 0.0;
    *(_OWORD *)&pOutMat.m[4] = v45;
    v47 = *(_OWORD *)(v470 + v39 + 260);
    In2.m[15] = 1.0;
    *(_OWORD *)&pOutMat.m[8] = v46;
    LODWORD(v46) = *(_DWORD *)(v470 + v39 + 260);
    *(_OWORD *)&pOutMat.m[12] = v47;
    LODWORD(v47) = *(_DWORD *)(v470 + v39 + 264);
    LODWORD(In2.m[12]) = v46;
    In2.m[14] = *(float *)(v470 + v39 + 268);
    LODWORD(In2.m[13]) = v47;
    *(_QWORD *)&pOutMat.m[12] = 0i64;
    pOutMat.m[14] = 0.0;
    OGLMatrix::multiplyFast(&In2, &In2, (OGLMatrix *)(v41 + v39 + 212));
    OGLMatrix::multiplyFast(&pOutMat, &pOutMat, &In1);
    OGLMatrix::multiplyFast(&pBoneMat, &pOutMat, (OGLMatrix *)(v48 + 212));
    v50 = In2.m[13] + 0.0;
    v51 = In2.m[12] + 0.0;
    v52 = In2.m[14] + 0.0;
    pBoneMat.m[15] = 1.0;
    pBoneMat.m[13] = In2.m[13] + 0.0;
    pBoneMat.m[12] = In2.m[12] + 0.0;
    pBoneMat.m[14] = In2.m[14] + 0.0;
  }
  else
  {
    OGLMatrix::multiplyFast(&pBoneMat, &this->m_pBoneInfo[v470 / 0x218].mRot, &this->m_pBoneInfo[*v467].mRot);
    v50 = pBoneMat.m[13];
    v52 = pBoneMat.m[14];
    v51 = pBoneMat.m[12];
  }
  v53 = this->m_pBoneInfo;
  v458 = v50;
  v54 = *(float *)((char *)&v53->mRot.m[13] + v49);
  v55 = *(float *)((char *)&v53->mRot.m[12] + v49);
  v56 = *(float *)((char *)&v53->mRot.m[14] + v49);
  v454 = v50 - v54;
  v456 = v51 - v55;
  v455 = v52 - v56;
  *(float *)&v57 = sqrtf(
                     (float)((float)(v454 * v454) + (float)((float)(v51 - v55) * (float)(v51 - v55)))
                   + (float)((float)(v52 - v56) * (float)(v52 - v56)));
  v58 = *(float *)(v26 + v20 + 60);
  iMotionNo = v57;
  memset(&In2, 0, sizeof(In2));
  v59 = 0.0;
  v60 = 0.0;
  if ( v58 != 0.0 )
  {
    v61 = *(_DWORD *)(v26 + v20 + 64);
    if ( v61 > 1 )
    {
      v62 = (int)OGLModel::convertBoneSecondaryToFigure(this, v61);
      v63 = v53[v62].mRot.m[14];
      v64 = v53[v62].mRot.m[12] - v55;
      v65 = this->m_pFigure->m_pBone;
      v66 = v53[v62].mRot.m[13] - v54;
      v67 = v63 - v56;
      v68 = *(float *)((char *)&v65->m_mOffset.m[12] + v486) - v65[v62].m_mOffset.m[12];
      v69 = *(float *)((char *)&v65->m_mOffset.m[13] + v486) - v65[v62].m_mOffset.m[13];
      v70 = *(float *)((char *)&v65->m_mOffset.m[14] + v486) - v65[v62].m_mOffset.m[14];
      v71 = sqrtf(
              (float)((float)((float)(v458 - v53[v62].mRot.m[13]) * (float)(v458 - v53[v62].mRot.m[13]))
                    + (float)((float)(v51 - v53[v62].mRot.m[12]) * (float)(v51 - v53[v62].mRot.m[12])))
            + (float)((float)(v52 - v63) * (float)(v52 - v63)));
      v72 = sqrtf((float)((float)(v69 * v69) + (float)(v68 * v68)) + (float)(v70 * v70));
      v73 = fmaxf(
              0.0,
              (float)((float)((float)(v71 / v72) * 0.40000001) * (float)((float)(v71 / v72) * 0.40000001)) * v58);
      v59 = (float)(v64 * v73) * 0.1;
      v60 = (float)(v67 * v73) * 0.1;
      v17 = (float)(v66 * v73) * 0.1;
    }
  }
  v74 = *(float *)(v26 + v20 + 44);
  v75 = 64;
  v76 = FLOAT_0_016666669;
  if ( (*(_DWORD *)(v26 + v20 + 40) & 0x2000) != 0 )
    v75 = 30;
  v77 = v458 + this->m_vPosition2.y;
  v78 = v51 + this->m_vPosition2.x;
  v79 = v52 + this->m_vPosition2.z;
  v80 = iBoneNo;
  LODWORD(v469) = v75;
  pos.x = v78;
  pos.z = v79;
  v81 = v77 - (float)(v74 * 0.016666669);
  pos.y = v81;
  if ( this->m_pMirror && OGLModel::checkMotionMirror(this, 0i64) )
  {
    v83 = this->m_iMirrorBoneIdx;
    v84 = v83 ? v83[*(_QWORD *)v468] : OGLModel::convertBoneFigureToMirror(v82, iBoneNo);
    if ( v84 >= 0 )
    {
      v85 = v84;
      m_MirrorData = (__int64)this->m_pMirror->m_MirrorData;
      v86 = *(int *)(m_MirrorData + 8i64 * v84);
      if ( (int)v86 >= 0 )
      {
        v87 = this->m_iMirrorBoneRIdx;
        if ( v87 )
          v88 = v87[v86];
        else
          v88 = OGLModel::convertBoneMirrorToFigure(this, v86);
        if ( v88 >= 0 )
          v80 = v88;
        v476 = *(_DWORD *)(m_MirrorData + 8 * v85 + 4);
      }
      v20 = v466;
    }
  }
  v89 = 0.0;
  v19 = (OGLModel::getSecondaryState(this, iBoneNo) & 0x4000) != 0;
  v91 = v469;
  if ( v19 )
    v91 = 64;
  v92 = v90;
  LODWORD(v469) = v91;
  if ( (OGLModel::getSecondaryState(this, v90) & 0x100) != 0 )
    v89 = this->m_mWorld.m[12] - this->m_mPreWorld.m[12];
  v94 = OGLModel::getSecondaryState(this, v93);
  v24 = this;
  if ( (v94 & 0x1000) != 0 )
    goto LABEL_8;
  if ( (OGLModel::getSecondaryState(this, v23) & 1) != 0 )
  {
    v97 = *(float *)(p_mRot + 48);
    v98 = 2i64;
    v99 = *(float *)(p_mRot + 52);
    v100 = *(float *)(p_mRot + 56);
    v101 = 80 * v25 + v20;
    m_MirrorData = 592 * v92;
    v102 = 592 * v92 + 144;
    do
    {
      *(double *)((char *)this->m_SecondaryInfo + v102 - 128) = v78;
      *(double *)((char *)&this->m_SecondaryInfo->vPrevAxis.x + v102) = (float)(v81
                                                                              - (float)(*(float *)(v101 + 44)
                                                                                      * 0.016666669));
      *(double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldX[14] + v102) = v79;
      *(double *)((char *)this->m_SecondaryInfo + v102 - 120) = v78;
      *(double *)((char *)&this->m_SecondaryInfo->vPrevAxis.z + v102) = (float)(v81
                                                                              - (float)(*(float *)(v101 + 44)
                                                                                      * 0.016666669));
      *(double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldX[15] + v102) = v79;
      *(double *)((char *)this->m_SecondaryInfo + v102 - 112) = v78;
      *(double *)((char *)this->m_SecondaryInfo->mPrevPosWorldX + v102) = (float)(v81
                                                                                - (float)(*(float *)(v101 + 44)
                                                                                        * 0.016666669));
      *(double *)((char *)this->m_SecondaryInfo->mPrevPosWorldY + v102) = v79;
      *(double *)((char *)this->m_SecondaryInfo + v102 - 104) = v78;
      *(double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldX[1] + v102) = (float)(v81
                                                                                    - (float)(*(float *)(v101 + 44)
                                                                                            * 0.016666669));
      *(double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldY[1] + v102) = v79;
      *(double *)((char *)this->m_SecondaryInfo + v102 - 96) = v78;
      *(double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldX[2] + v102) = (float)(v81
                                                                                    - (float)(*(float *)(v101 + 44)
                                                                                            * 0.016666669));
      *(double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldY[2] + v102) = v79;
      *(double *)((char *)this->m_SecondaryInfo + v102 - 88) = v78;
      *(double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldX[3] + v102) = (float)(v81
                                                                                    - (float)(*(float *)(v101 + 44)
                                                                                            * 0.016666669));
      *(double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldY[3] + v102) = v79;
      *(double *)((char *)this->m_SecondaryInfo + v102 - 80) = v78;
      *(double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldX[4] + v102) = (float)(v81
                                                                                    - (float)(*(float *)(v101 + 44)
                                                                                            * 0.016666669));
      *(double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldY[4] + v102) = v79;
      *(double *)((char *)this->m_SecondaryInfo + v102 - 72) = v78;
      *(double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldX[5] + v102) = (float)(v81
                                                                                    - (float)(*(float *)(v101 + 44)
                                                                                            * 0.016666669));
      *(double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldY[5] + v102) = v79;
      v102 += 64i64;
      --v98;
    }
    while ( v98 );
    v103 = v472;
    v104 = *(float *)&FLOAT_1_0;
    *(_DWORD *)((char *)&this->m_SecondaryInfo->mPrevPosWorldZ[16] + v472) &= ~1u;
  }
  else
  {
    v105 = 3i64;
    v101 = 80 * v25 + v20;
    v106 = *(_QWORD *)v468;
    m_MirrorData = 592i64 * *(_QWORD *)v468;
    v107 = 592i64 * *(_QWORD *)v468 + 144;
    do
    {
      *(double *)((char *)this->m_SecondaryInfo + v107 - 128) = v89
                                                              + *(double *)((char *)this->m_SecondaryInfo + v107 - 120);
      *(double *)((char *)&this->m_SecondaryInfo->vPrevAxis.x + v107) = *(double *)((char *)&this->m_SecondaryInfo->vPrevAxis.z
                                                                                  + v107)
                                                                      - (float)(*(float *)(v101 + 44) * 0.016666669)
                                                                      + v95;
      *(double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldX[14] + v107) = v96
                                                                             + *(double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldX[15]
                                                                                         + v107);
      *(double *)((char *)this->m_SecondaryInfo + v107 - 120) = v89
                                                              + *(double *)((char *)this->m_SecondaryInfo + v107 - 112);
      *(double *)((char *)&this->m_SecondaryInfo->vPrevAxis.z + v107) = *(double *)((char *)this->m_SecondaryInfo->mPrevPosWorldX
                                                                                  + v107)
                                                                      - (float)(*(float *)(v101 + 44) * 0.016666669)
                                                                      + v95;
      *(double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldX[15] + v107) = v96
                                                                             + *(double *)((char *)this->m_SecondaryInfo->mPrevPosWorldY
                                                                                         + v107);
      *(double *)((char *)this->m_SecondaryInfo + v107 - 112) = v89
                                                              + *(double *)((char *)this->m_SecondaryInfo + v107 - 104);
      *(double *)((char *)this->m_SecondaryInfo->mPrevPosWorldX + v107) = *(double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldX[1]
                                                                                    + v107)
                                                                        - (float)(*(float *)(v101 + 44) * 0.016666669)
                                                                        + v95;
      *(double *)((char *)this->m_SecondaryInfo->mPrevPosWorldY + v107) = v96
                                                                        + *(double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldY[1]
                                                                                    + v107);
      *(double *)((char *)this->m_SecondaryInfo + v107 - 104) = v89
                                                              + *(double *)((char *)this->m_SecondaryInfo + v107 - 96);
      *(double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldX[1] + v107) = *(double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldX[2]
                                                                                        + v107)
                                                                            - (float)(*(float *)(v101 + 44) * 0.016666669)
                                                                            + v95;
      *(double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldY[1] + v107) = v96
                                                                            + *(double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldY[2]
                                                                                        + v107);
      *(double *)((char *)this->m_SecondaryInfo + v107 - 96) = v89
                                                             + *(double *)((char *)this->m_SecondaryInfo + v107 - 88);
      *(double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldX[2] + v107) = *(double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldX[3]
                                                                                        + v107)
                                                                            - (float)(*(float *)(v101 + 44) * 0.016666669)
                                                                            + v95;
      *(double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldY[2] + v107) = v96
                                                                            + *(double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldY[3]
                                                                                        + v107);
      v107 += 40i64;
      --v105;
    }
    while ( v105 );
    v103 = v472;
    v108 = 0;
    *(double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldX[14] + v472) = v59
                                                                           + *(double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldX[14]
                                                                                       + v472);
    *(double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldY[14] + v103) = v17
                                                                           + *(double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldY[14]
                                                                                       + v103);
    *(double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldZ[14] + v103) = v60
                                                                           + *(double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldZ[14]
                                                                                       + v103);
    if ( this->m_iSecondaryForceCount > 0 )
    {
      v109 = &this->m_SecondaryForce[0].vForce.z;
      do
      {
        if ( (*((char *)v109 + 4) < 0 || v80 == *((_DWORD *)v109 - 3)) && ((_DWORD)v109[1] & 1) == 0 )
        {
          if ( OGLModel::checkMotionMirror(this, 0i64) )
          {
            sinf(-1.5707964);
            v110 = FLOAT_N1_5707964;
            v111 = FLOAT_N1_5707964;
          }
          else
          {
            sinf(1.5707964);
            v110 = FLOAT_1_5707964;
            v111 = FLOAT_1_5707964;
          }
          v112 = cosf(v111);
          v113 = *(v109 - 2);
          v114 = *(v109 - 1);
          v115 = *v109 * -1.0;
          memset(&In2, 0, sizeof(In2));
          this->m_SecondaryInfo[v106].mPrevPosWorldX[14] = (float)((float)((float)(0.0 * v114) + (float)(v112 * v113))
                                                                 + (float)(v110 * v115))
                                                         + this->m_SecondaryInfo[v106].mPrevPosWorldX[14];
          this->m_SecondaryInfo[v106].mPrevPosWorldY[14] = (float)((float)((float)(0.0 * v113) + v114)
                                                                 + (float)(0.0 * v115))
                                                         + this->m_SecondaryInfo[v106].mPrevPosWorldY[14];
          this->m_SecondaryInfo[v106].mPrevPosWorldZ[14] = (float)((float)((float)(0.0 * v114)
                                                                         + (float)(COERCE_FLOAT(LODWORD(v110) ^ _xmm)
                                                                                 * v113))
                                                                 + (float)(v112 * v115))
                                                         + this->m_SecondaryInfo[v106].mPrevPosWorldZ[14];
        }
        ++v108;
        v109 += 6;
      }
      while ( v108 < this->m_iSecondaryForceCount );
      v76 = FLOAT_0_016666669;
      v103 = v472;
    }
    v116 = v475;
    v117 = v466;
    *(double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldX[15] + v103) = v78;
    *(double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldY[15] + v103) = v81;
    *(double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldZ[15] + v103) = v79;
    v118 = *(float *)(v116 + v117 + 52);
    v119 = *(float *)(v116 + v117 + 36);
    v120 = fminf(6.0, v118);
    yt = 15.0 - v119;
    if ( v118 >= 2.0 )
    {
      v122 = *(double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldY[14] + v103) - v81;
      if ( v122 <= 0.0 )
        *(_QWORD *)&v122 ^= _xmm;
      if ( v122 > (float)((float)((float)(*(float *)(v116 + v117 + 44) * v76) * 8.0) * (float)(7.0 - v120))
        && LOBYTE(rfY)
        && v119 > 0.30000001 )
      {
        yt = FLOAT_14_7;
      }
    }
    calcSpline(
      &pos,
      (long double *)((char *)this->m_SecondaryInfo->mPrevPosWorldX + v103),
      (long double *)((char *)this->m_SecondaryInfo->mPrevPosWorldY + v103),
      (long double *)((char *)this->m_SecondaryInfo->mPrevPosWorldZ + v103),
      bParts,
      15.0 - v119,
      yt,
      15.0 - v119);
    v123 = this->m_SecondaryInfo;
    v78 = pos.x;
    v81 = pos.y;
    v79 = pos.z;
    v104 = *(float *)&FLOAT_1_0;
    v124 = *(double *)((char *)&v123->mPrevPosWorldY[14] + v103);
    v125 = *(double *)((char *)&v123->mPrevPosWorldZ[14] + v103);
    v97 = (float)*(double *)((char *)&v123->mPrevPosWorldX[14] + v103) - pos.x;
    rfZ = *(float *)&FLOAT_1_0;
    v99 = v124 - pos.y;
    v100 = v125 - pos.z;
  }
  if ( v99 == 0.0 )
    v99 = FLOAT_N0_001;
  v126 = this->m_SecondaryInfo;
  v127 = 0;
  v128 = 0;
  sz1 = 0.0;
  *(double *)((char *)&v126->mPrevPosWorldX[15] + v103) = v78;
  v129 = v99 <= 0.0;
  v442 = v99 <= 0.0;
  v130 = v79;
  v131 = FLOAT_0_125;
  v132 = 0.0;
  *(double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldY[15] + v103) = v81;
  v133 = 0.0;
  v134 = this->m_SecondaryInfo;
  v135 = 0i64;
  rfY = FLOAT_0_125;
  v451 = FLOAT_0_125;
  *(double *)((char *)&v134->mPrevPosWorldZ[15] + v103) = v130;
  v136 = v475;
  if ( (*(_DWORD *)(v475 + v466 + 40) & 0xE) != 0 )
  {
    v137 = *(__m128 *)&pBoneMat.m[8];
    pOutMat = pBoneMat;
    OGLMatrix::transpose(&pOutMat);
    v140 = (float)(pOutMat.m[6] * v139) + (float)(pOutMat.m[2] * v97);
    v141 = pOutMat.m[0] * v97;
    v142 = (float)((float)(pOutMat.m[5] * v139) + (float)(pOutMat.m[1] * v97)) + (float)(pOutMat.m[9] * v100);
    v143 = v140 + (float)(pOutMat.m[10] * v100);
    v144 = (float)((float)(pOutMat.m[4] * v139) + v141) + (float)(pOutMat.m[8] * v100);
    if ( (v138 & 2) != 0 )
    {
      v144 = 0.0;
    }
    else if ( (v138 & 8) != 0 )
    {
      v143 = 0.0;
    }
    else if ( (v138 & 4) != 0 )
    {
      v142 = 0.0;
    }
    v99 = (float)((float)(v142 * _mm_shuffle_ps(*(__m128 *)&pBoneMat.m[4], *(__m128 *)&pBoneMat.m[4], 85).m128_f32[0])
                + (float)(_mm_shuffle_ps(*(__m128 *)pBoneMat.m, *(__m128 *)pBoneMat.m, 85).m128_f32[0] * v144))
        + (float)(_mm_shuffle_ps(v137, v137, 85).m128_f32[0] * v143);
    v100 = (float)((float)(v142 * _mm_shuffle_ps(*(__m128 *)&pBoneMat.m[4], *(__m128 *)&pBoneMat.m[4], 170).m128_f32[0])
                 + (float)(_mm_shuffle_ps(*(__m128 *)pBoneMat.m, *(__m128 *)pBoneMat.m, 170).m128_f32[0] * v144))
         + (float)(_mm_shuffle_ps(v137, v137, 170).m128_f32[0] * v143);
    v97 = (float)((float)(v142 * pBoneMat.m[4]) + (float)(pBoneMat.m[0] * v144)) + (float)(v137.m128_f32[0] * v143);
  }
  v145 = sqrtf((float)((float)(v97 * v97) + (float)(v99 * v99)) + (float)(v100 * v100));
  if ( *(float *)&iMotionNo == 0.0 )
  {
    v146 = v456;
    v148 = v455;
    v147 = v454;
  }
  else
  {
    v146 = v456 / *(float *)&iMotionNo;
    v147 = v454 / *(float *)&iMotionNo;
    v148 = v455 / *(float *)&iMotionNo;
    v456 = v456 / *(float *)&iMotionNo;
    v454 = v454 / *(float *)&iMotionNo;
    v455 = v455 / *(float *)&iMotionNo;
  }
  v149 = v145;
  if ( v149 != 0.0 )
  {
    v97 = v97 / v149;
    v99 = v99 / v149;
    v100 = v100 / v149;
  }
  v150 = (__m128)LODWORD(FLOAT_N1_0);
  v150.m128_f32[0] = fmaxf(-1.0, fminf(v104, (float)((float)(v99 * v147) + (float)(v97 * v146)) + (float)(v100 * v148)));
  v151 = *(float *)(v136 + v466 + 52);
  if ( v151 == -1.0 )
  {
    v150.m128_f32[0] = acosf(v150.m128_f32[0]);
    v152 = v150;
  }
  else
  {
    v153 = 0i64;
    v153.m128d_f64[0] = acosf(v150.m128_f32[0]) * v145 * v151;
    v152 = _mm_cvtpd_ps(v153);
  }
  v154 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v152.m128_f32[0]) & _xmm);
  if ( v154 < 0.0000099999997 )
    v152 = 0i64;
  v155 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v152.m128_f32[0]) & _xmm);
  if ( v155 > 2.0943952 )
  {
    if ( v152.m128_f32[0] <= 0.0 )
    {
      if ( v152.m128_f32[0] < 0.0 )
        v152 = (__m128)LODWORD(FLOAT_N2_0943952);
    }
    else
    {
      v152 = (__m128)LODWORD(FLOAT_2_0943952);
    }
  }
  v156 = v97 * v455;
  v157 = (float)(v100 * v454) - (float)(v99 * v455);
  v158 = (float)(v99 * v456) - (float)(v97 * v454);
  v446 = v157;
  axis.x = v157;
  v159 = v157;
  v160 = v156 - (float)(v100 * v456);
  axis.z = v158;
  v450 = v160;
  axis.y = v160;
  v161 = sqrtf((float)((float)(v160 * v160) + (float)(v157 * v157)) + (float)(v158 * v158));
  if ( v161 != 0.0 )
  {
    v159 = v157 / v161;
    v160 = v160 / v161;
    v158 = v158 / v161;
    v446 = v157 / v161;
    axis.x = v157 / v161;
    v450 = v160;
    axis.y = v160;
    axis.z = v158;
  }
  v162 = FLOAT_0_5;
  v163 = m_MirrorData;
  v164 = iBoneNo;
  while ( 2 )
  {
    v165 = v451;
    while ( 1 )
    {
      if ( v152.m128_f32[0] == 0.0 )
      {
        v173 = v458;
      }
      else
      {
        v166 = this->m_pBoneInfo;
        v167 = *(_OWORD *)&v166[*(_QWORD *)v468].mRot.m[4];
        *(_OWORD *)pBoneMat.m = *(_OWORD *)v166[*(_QWORD *)v468].mRot.m;
        *(_OWORD *)&pBoneMat.m[4] = v167;
        v168 = *(_OWORD *)&v166[*(_QWORD *)v468].mRot.m[12];
        *(_OWORD *)&pBoneMat.m[8] = *(_OWORD *)&v166[*(_QWORD *)v468].mRot.m[8];
        *(_OWORD *)&pBoneMat.m[12] = v168;
        if ( (v127 & 0xF0) == 0 && ((*(_DWORD *)(v101 + 40) & 0x2000) == 0 || (v127 & 0xF) == 0) )
        {
          v169 = *(float *)(v101 + 28);
          if ( v129 )
          {
            v170 = fminf(v169, v152.m128_f32[0]);
            v152 = (__m128)*(unsigned int *)(v101 + 32);
            v152.m128_f32[0] = fmaxf(v152.m128_f32[0], v170);
          }
          else
          {
            v171 = fmaxf(COERCE_FLOAT(LODWORD(v169) ^ _xmm), v152.m128_f32[0]);
            v152 = _mm_xor_ps((__m128)*(unsigned int *)(v101 + 32), (__m128)_xmm);
            v152.m128_f32[0] = fminf(v152.m128_f32[0], v171);
          }
        }
        if ( !v128 )
          v135 = v152;
        *(_DWORD *)((char *)&this->m_SecondaryInfo->fPrevRadian + v163) = v152.m128_i32[0];
        v172 = this->m_SecondaryInfo;
        *(float *)((char *)&v172->vPrevAxis.x + v163) = v159;
        *(float *)((char *)&v172->vPrevAxis.y + v163) = v160;
        *(float *)((char *)&v172->vPrevAxis.z + v163) = v158;
        OGLMatrix::rotateV(&mIn, &axis, v152.m128_f32[0]);
        OGLMatrix::multiplyFastRotate(&mIn, &this->m_pBoneInfo[*v467].mRot, &mIn);
        OGLMatrix::multiplyFast(&pBoneMat, &pBoneMat, &mIn);
        v173 = pBoneMat.m[13];
        v162 = FLOAT_0_5;
        v164 = iBoneNo;
        v458 = pBoneMat.m[13];
      }
      if ( (OGLModel::getSecondaryState(this, v164) & 0x400) != 0 || (v127 & 0x40) != 0 )
        break;
      v175 = this->m_SecondaryInfo;
      if ( v175 )
        v176 = v175[*v174].iStateFlg | v175[*v174].iStateWorkFlg | v175[*v174].iStateTakeOverFlg;
      else
        LOBYTE(v176) = 0;
      if ( ((v176 & 0x20) == 0 || this->m_pBoneInfo[*v174].mRot.m[13] <= v173)
        && (*(float *)(v101 + 56) <= v173
         || (v175 ? (v177 = v175[*v174].iStateFlg | v175[*v174].iStateWorkFlg | v175[*v174].iStateTakeOverFlg) : (LOBYTE(v177) = 0),
             (v177 & 0x20) != 0)) )
      {
        if ( (v127 & 0x30) == 16 )
        {
          v165 = v165 * v162;
          v127 |= 0x20u;
          v451 = v165;
        }
        if ( (v127 & 0x60) != 32 )
          break;
        if ( v129 )
          v133 = v133 + v165;
        else
          v133 = v133 - v165;
        v179 = ++v128 < 128;
LABEL_148:
        v163 = m_MirrorData;
        v152 = v135;
        v152.m128_f32[0] = v135.m128_f32[0] + v133;
        LODWORD(sz1) = v128;
        if ( !v179 )
          break;
      }
      else
      {
        if ( (v127 & 0xF0) == 0 )
        {
          v127 |= 0x10u;
          v159 = (float)(v454 * 0.0) - (float)(rfZ * v455);
          v158 = (float)(rfZ * v456) - (float)(v454 * 0.0);
          v446 = v159;
          v160 = (float)(v455 * 0.0) - (float)(v456 * 0.0);
          v450 = v160;
          v178 = sqrtf((float)((float)(v160 * v160) + (float)(v159 * v159)) + (float)(v158 * v158));
          if ( v178 != 0.0 )
          {
            v159 = v159 / v178;
            v160 = v160 / v178;
            v446 = v159;
            v450 = v160;
            v158 = v158 / v178;
          }
          v164 = iBoneNo;
          v129 = 0;
          v442 = 0;
          axis.x = v159;
          axis.y = v160;
          axis.z = v158;
        }
        if ( (v127 & 0x20) != 0 )
        {
          v162 = FLOAT_0_5;
          v165 = v165 * 0.5;
          v451 = v165;
          if ( v165 >= 0.00019999999 )
            v127 &= ~0x20u;
          else
            v127 |= 0x40u;
          ++v128;
          if ( v129 )
            v133 = v133 - v165;
          else
            v133 = v133 + v165;
          v179 = v128 < 30;
          goto LABEL_148;
        }
        if ( v129 )
          v133 = v133 - v165;
        else
          v133 = v133 + v165;
        ++v128;
        v152 = v135;
        LODWORD(sz1) = v128;
        v152.m128_f32[0] = v135.m128_f32[0] + v133;
        if ( v128 >= 30 )
          break;
        v163 = m_MirrorData;
        v162 = FLOAT_0_5;
        *(int *)((char *)&v175->iStateWorkFlg + m_MirrorData) |= 0x20u;
      }
    }
    if ( (OGLModel::getSecondaryState(this, v164) & 0x800) == 0
      && this->m_SecondaryCollisionEnable
      && *(_DWORD *)(v101 + 68)
      && (v127 & 0x40) == 0 )
    {
      v181 = 4i64;
      v182 = &vLine.z;
      do
      {
        *((_QWORD *)v182 - 1) = 0i64;
        v182 += 3;
        --v181;
      }
      while ( v181 );
      memset(&In2, 0, sizeof(In2));
      v183 = 0;
      v184 = 2i64;
      memset(&In1, 0, sizeof(In1));
      v185 = &x_low.z;
      do
      {
        *((_QWORD *)v185 - 1) = 0i64;
        *v185 = 0.0;
        v185 += 3;
        --v184;
      }
      while ( v184 );
      if ( (*(_DWORD *)(v101 + 40) & 0x210) != 0 )
        OGLModel::getBoneMatrix(
          this,
          &In2,
          v180,
          *(float *)(v101 + 48),
          &pBoneMat,
          *(float *)(v101 + 8),
          (OGLVec3 *)&x_low,
          (float *)&iMotionNo);
      else
        OGLModel::getBoneMatrix(
          this,
          &In2,
          (float *)&iMotionNo,
          v180,
          *(float *)(v101 + 8),
          *(float *)(v101 + 48),
          &pBoneMat);
      v186 = In2.m[14];
      v187 = 0;
      v188 = In2.m[13];
      v189 = In2.m[12];
LABEL_161:
      iAniboneNo[0] = v187;
      if ( v187 >= *(_DWORD *)(v101 + 68) )
      {
        v212 = this->m_SecondaryInfo;
        v213 = v472;
        v214 = *(_OWORD *)&In2.m[4];
        v215 = v466;
        *(_OWORD *)((char *)v212->mBaseMat.m + v472) = *(_OWORD *)In2.m;
        v216 = *(_OWORD *)&In2.m[8];
        *(_OWORD *)((char *)&v212->mBaseMat.m[4] + v213) = v214;
        v217 = *(_OWORD *)&In2.m[12];
        *(_OWORD *)((char *)&v212->mBaseMat.m[8] + v213) = v216;
        *(_OWORD *)((char *)&v212->mBaseMat.m[12] + v213) = v217;
        v218 = this->m_SecondaryInfo;
        v219 = *(_DWORD *)(v475 + v215 + 4);
        *(float *)((char *)&v218->vScale.y + v213) = *(float *)(v475 + v215 + 12);
        *(float *)((char *)&v218->vScale.z + v213) = *(float *)&iMotionNo;
        goto LABEL_424;
      }
      v190 = *(_QWORD *)(v101 + 72);
      m_iSecondaryBoneRIdx = this->m_iSecondaryBoneRIdx;
      v192 = *(int *)(v190 + v15);
      if ( m_iSecondaryBoneRIdx )
        v193 = m_iSecondaryBoneRIdx[v192];
      else
        v193 = OGLModel::convertBoneSecondaryToFigure(this, v192);
      v194 = *(_DWORD *)(v190 + v15 + 20);
      if ( (v194 & 0x210) == 0 && (*(_DWORD *)(v101 + 40) & 0x210) == 0 )
      {
        OGLModel::getBoneMatrix(
          this,
          &In1,
          &pLen,
          v193,
          *(float *)(v190 + v15 + 8),
          *(float *)(v190 + v15 + 16),
          &this->m_pBoneInfo[v193].mRot);
        v195 = OGLSecondary::checkOBBCollision(
                 &In2,
                 *(float *)(v101 + 4),
                 *(float *)(v101 + 12),
                 *(float *)&iMotionNo,
                 &In1,
                 *(float *)(v190 + v15 + 4),
                 *(float *)(v190 + v15 + 12),
                 pLen);
LABEL_184:
        if ( v195 )
          v183 = 1;
LABEL_188:
        v164 = iBoneNo;
        v163 = m_MirrorData;
        if ( iBoneNo == this->m_iBoneNo )
        {
          v205 = this->m_SecondaryInfo;
          v206 = *(_OWORD *)&In1.m[4];
          *(_OWORD *)((char *)v205->mBaseMat.m + m_MirrorData) = *(_OWORD *)In1.m;
          v207 = *(_OWORD *)&In1.m[8];
          *(_OWORD *)((char *)&v205->mBaseMat.m[4] + v163) = v206;
          v208 = *(_OWORD *)&In1.m[12];
          *(_OWORD *)((char *)&v205->mBaseMat.m[8] + v163) = v207;
          *(_OWORD *)((char *)&v205->mBaseMat.m[12] + v163) = v208;
          v209 = this->m_SecondaryInfo;
          LODWORD(v205) = *(_DWORD *)(v190 + v15 + 4);
          *(float *)((char *)&v209->vScale.y + v163) = *(float *)(v190 + v15 + 12);
          *(float *)((char *)&v209->vScale.z + v163) = pLen;
          *(_DWORD *)((char *)&v209->vScale.x + v163) = (_DWORD)v205;
          if ( v183 )
            *(int *)((char *)&this->m_SecondaryInfo->iHitNo + v163) = v193;
        }
        if ( (v127 & 0x44) == 0 )
        {
          if ( v183 )
          {
            v210 = v127 | 1;
            if ( (v127 & 0xF) != 0 )
              v210 = v127;
            v127 = v210;
            if ( (v210 & 2) != 0 )
            {
              v162 = FLOAT_0_5;
              rfY = rfY * 0.5;
              if ( rfY >= 0.00019999999 )
                v127 = v210 & 0xFFFFFFFD;
              else
                v127 = v210 | 4;
              if ( v135.m128_f32[0] >= 0.0 )
                v132 = v132 - v131;
              else
                v132 = v132 + v131;
              v152 = v135;
              v211 = v469;
              v152.m128_f32[0] = v135.m128_f32[0] + v132;
              v128 = LODWORD(sz1) + 1;
              LODWORD(sz1) = v128;
              if ( v128 < (int)v469 )
                goto LABEL_99;
              goto LABEL_211;
            }
            if ( v135.m128_f32[0] <= 0.0 )
              v132 = v132 + v131;
            else
              v132 = v132 - v131;
            v152 = v135;
            v128 = LODWORD(sz1) + 1;
            v152.m128_f32[0] = v135.m128_f32[0] + v132;
            LODWORD(sz1) = v128;
            if ( v128 < (int)v469 )
            {
              v162 = FLOAT_0_5;
              *(int *)((char *)&this->m_SecondaryInfo->iStateWorkFlg + v163) |= 0x40u;
LABEL_99:
              v160 = v450;
              v15 = 0i64;
              v159 = v446;
              v129 = v442;
              continue;
            }
          }
          else
          {
            v128 = LODWORD(sz1);
          }
          v211 = v469;
          v162 = FLOAT_0_5;
LABEL_211:
          if ( (v127 & 3) == 1 )
          {
            v131 = v131 * v162;
            v127 |= 2u;
          }
          if ( (v127 & 6) == 2 )
          {
            v132 = v135.m128_f32[0] >= 0.0 ? v132 + v131 : v132 - v131;
            ++v128;
            v152 = v135;
            LODWORD(sz1) = v128;
            v152.m128_f32[0] = v135.m128_f32[0] + v132;
            if ( v128 < v211 )
              goto LABEL_99;
          }
        }
        v187 = iAniboneNo[0] + 1;
        v15 += 24i64;
        goto LABEL_161;
      }
      v196 = *(_DWORD *)(v101 + 40);
      if ( (v196 & 0x10) != 0 )
      {
        pos.x = v189;
        pos.y = v188;
        pos.z = v186;
        if ( (v194 & 0x10) != 0 )
        {
          OGLModel::getBoneMatrix(
            this,
            &In1,
            v193,
            *(float *)(v190 + v15 + 16),
            &this->m_pBoneInfo[v193].mRot,
            0.0,
            0i64,
            0i64);
          if ( (float)((float)(*(float *)(v101 + 4) + *(float *)(v190 + v15 + 4))
                     * (float)(*(float *)(v101 + 4) + *(float *)(v190 + v15 + 4))) > (float)((float)((float)((float)(v189 - In1.m[12]) * (float)(v189 - In1.m[12])) + (float)((float)(v188 - In1.m[13]) * (float)(v188 - In1.m[13])))
                                                                                           + (float)((float)(v186 - In1.m[14]) * (float)(v186 - In1.m[14]))) )
            v183 = 1;
          goto LABEL_188;
        }
        if ( (v194 & 0x200) != 0 )
        {
          OGLModel::getBoneMatrix(
            this,
            &In1,
            v193,
            *(float *)(v190 + v15 + 16),
            &this->m_pBoneInfo[v193].mRot,
            *(float *)(v190 + v15 + 8),
            (OGLVec3 *)&x_low.w,
            &pLen);
          p_pos = &pos;
          p_Line2E = &pos;
          p_Line1E = &Line1E;
          p_Line1S = &Line1S;
          x_low.x = x_low.x * 0.0099999998;
          x_low.y = x_low.y * 0.0099999998;
          x_low.z = x_low.z * 0.0099999998;
          Line1S = *(OGLVec3 *)&In1.m[12];
          Line1E.y = v461 + In1.m[13];
          Line1E.x = x_low.w + In1.m[12];
          Line1E.z = v462 + In1.m[14];
          goto LABEL_174;
        }
        OGLModel::getBoneMatrix(
          this,
          &In1,
          &pLen,
          v193,
          *(float *)(v190 + v15 + 8),
          *(float *)(v190 + v15 + 16),
          &this->m_pBoneInfo[v193].mRot);
        p_Line2S = &pos;
LABEL_183:
        v195 = OGLSecondary::checkOBBSphereCollision(
                 &In1,
                 *(float *)(v190 + v15 + 4),
                 *(float *)(v190 + v15 + 12),
                 pLen,
                 p_Line2S,
                 *(float *)(v101 + 4));
        goto LABEL_184;
      }
      if ( (v196 & 0x200) == 0 )
      {
        OGLModel::getBoneMatrix(
          this,
          &In1,
          v193,
          *(float *)(v190 + v15 + 16),
          &this->m_pBoneInfo[v193].mRot,
          0.0,
          0i64,
          0i64);
        v203 = *(float *)(v101 + 12);
        vec1.y = In1.m[13];
        xt = *(float *)(v190 + v15 + 4);
        v204 = *(float *)(v101 + 4);
        vec1.x = In1.m[12];
        vec1.z = In1.m[14];
        if ( OGLSecondary::checkOBBSphereCollision(&In2, v204, v203, *(float *)&iMotionNo, &vec1, xt) )
          v183 = 1;
        goto LABEL_188;
      }
      Line2S.x = v189;
      Line2S.y = v188;
      Line2S.z = v186;
      if ( (v194 & 0x10) != 0 )
      {
        OGLModel::getBoneMatrix(
          this,
          &In1,
          v193,
          *(float *)(v190 + v15 + 16),
          &this->m_pBoneInfo[v193].mRot,
          *(float *)(v190 + v15 + 8),
          (OGLVec3 *)&x_low.w,
          0i64);
        p_pos = &v479;
        p_Line2E = &v480;
        p_Line1E = &v481;
        p_Line1S = &Line2S;
        v481.x = x_low.x + v189;
        v481.y = x_low.y + v188;
        v481.z = x_low.z + v186;
        x_low.w = x_low.w * 0.0099999998;
        v462 = v462 * 0.0099999998;
        v461 = v461 * 0.0099999998;
        v480 = *(OGLVec3 *)&In1.m[12];
        v479.x = x_low.w + In1.m[12];
        v479.y = v461 + In1.m[13];
        v479.z = v462 + In1.m[14];
      }
      else
      {
        if ( (v194 & 0x200) == 0 )
        {
          OGLModel::getBoneMatrix(
            this,
            &In1,
            &pLen,
            v193,
            *(float *)(v190 + v15 + 8),
            *(float *)(v190 + v15 + 16),
            &this->m_pBoneInfo[v193].mRot);
          p_Line2S = &Line2S;
          goto LABEL_183;
        }
        OGLModel::getBoneMatrix(
          this,
          &In1,
          v193,
          *(float *)(v190 + v15 + 16),
          &this->m_pBoneInfo[v193].mRot,
          *(float *)(v190 + v15 + 8),
          (OGLVec3 *)&x_low.w,
          &pLen);
        p_pos = &v482;
        p_Line2E = &Line2E;
        p_Line1E = &v484;
        Line2E = *(OGLVec3 *)&In1.m[12];
        p_Line1S = &Line2S;
        v484.x = x_low.x + v189;
        v484.y = x_low.y + v188;
        v484.z = x_low.z + v186;
        v482.x = x_low.w + In1.m[12];
        v482.y = v461 + In1.m[13];
        v482.z = v462 + In1.m[14];
      }
LABEL_174:
      v201 = OGLSecondary::calcDistSegmentSegment(p_Line1S, p_Line1E, p_Line2E, p_pos);
      if ( (float)((float)(*(float *)(v101 + 4) + *(float *)(v190 + v15 + 4))
                 * (float)(*(float *)(v101 + 4) + *(float *)(v190 + v15 + 4))) >= (float)(v201 * v201) )
        v183 = 1;
      goto LABEL_188;
    }
    break;
  }
LABEL_425:
  v396 = this->m_SecondaryInfo;
  v397 = v467;
  if ( v396 )
    v398 = v396[*v467].iStateFlg | v396[*v467].iStateWorkFlg | v396[*v467].iStateTakeOverFlg;
  else
    LOWORD(v398) = 0;
  if ( (v398 & 0x1000) != 0 || (v399 = *v467, (this->m_pFigure->m_pBone[v399].m_uiBoneInfoFlg & 0x10) != 0) )
  {
    v408 = v470;
  }
  else
  {
    v400 = this->m_pBoneInfo;
    memset(&In1, 0, sizeof(In1));
    memset(&mIn, 0, sizeof(mIn));
    v401 = v400[v399].mRot.m[1];
    In1.m[0] = v400[v399].mRot.m[0];
    In1.m[8] = v400[v399].mRot.m[2];
    v402 = v400[v399].mRot.m[5];
    In1.m[4] = v401;
    v403 = v400[v399].mRot.m[4];
    In1.m[5] = v402;
    v404 = v400[v399].mRot.m[8];
    In1.m[1] = v403;
    v405 = v400[v399].mRot.m[6];
    In1.m[2] = v404;
    v406 = v400[v399].mRot.m[10];
    In1.m[9] = v405;
    v407 = v400[v399].mRot.m[9];
    In1.m[10] = v406;
    In1.m[6] = v407;
    In1.m[15] = 1.0;
    OGLMatrix::multiplyFastRotate(&mIn, &pBoneMat, &In1);
    v408 = v470;
    *(_QWORD *)&In1.m[12] = 0i64;
    In1.m[14] = 0.0;
    In1.m[3] = 0.0;
    v410 = *(float *)(v470 + v409 + 216);
    In1.m[0] = *(float *)(v470 + v409 + 212);
    In1.m[8] = *(float *)(v470 + v409 + 220);
    v411 = *(float *)(v470 + v409 + 232);
    In1.m[4] = v410;
    v412 = *(float *)(v470 + v409 + 228);
    In1.m[5] = v411;
    v413 = *(float *)(v470 + v409 + 244);
    In1.m[1] = v412;
    v414 = *(float *)(v470 + v409 + 236);
    In1.m[2] = v413;
    v415 = *(float *)(v470 + v409 + 252);
    In1.m[9] = v414;
    v416 = *(float *)(v470 + v409 + 248);
    In1.m[10] = v415;
    In1.m[6] = v416;
    In1.m[7] = 0.0;
    In1.m[11] = 0.0;
    In1.m[15] = 1.0;
    OGLMatrix::multiplyFastRotate(&mIn, &mIn, &In1);
    OGLMatrix::multiplyFastRotate(&mIn, &mIn, (OGLMatrix *)(*(_QWORD *)(v418 + 104) + (v417 << 6)));
    OGLQuat::matrixToQuaternion(&x_low, &mIn);
    v419 = *v397;
    v420 = this->m_pFigure->m_pBone;
    v421 = v420[v419].m_aBindPose.m_vPrevTrans.x;
    v422 = v420[v419].m_aBindPose.m_vPrevTrans.y;
    v423 = v420[v419].m_aBindPose.m_vPrevTrans.z;
    if ( v453 )
    {
      OGLQuat::getRotateEulerFast(&x_low, (float *)iAniboneNo, &rfY, &rfZ);
      v424 = v476;
      v425 = *(float *)iAniboneNo;
      if ( (v476 & 0x10) != 0 )
        LODWORD(v425) = iAniboneNo[0] ^ _xmm;
      if ( (v476 & 0x100) != 0 )
        v425 = 3.1415927 - v425;
      if ( (v476 & 0x1000) != 0 )
        v425 = -3.1415927 - v425;
      v426 = rfY;
      if ( (v476 & 0x20) != 0 )
        LODWORD(v426) = LODWORD(rfY) ^ _xmm;
      if ( (v476 & 0x200) != 0 )
        v426 = 3.1415927 - v426;
      if ( (v476 & 0x2000) != 0 )
        v426 = -3.1415927 - v426;
      v427 = rfZ;
      if ( (v476 & 0x40) != 0 )
        LODWORD(v427) = LODWORD(rfZ) ^ _xmm;
      if ( (v476 & 0x400) != 0 )
        v427 = 3.1415927 - v427;
      if ( (v476 & 0x4000) != 0 )
        v427 = -3.1415927 - v427;
      OGLQuat::setRotateEuler(&x_low, v425, v426, v427);
      if ( (v424 & 1) != 0 )
        LODWORD(v421) ^= _xmm;
      if ( (v424 & 2) != 0 )
        LODWORD(v422) ^= _xmm;
      if ( (v424 & 4) != 0 )
        LODWORD(v423) ^= _xmm;
    }
    this->m_pBoneInfo[v419].pPrevStack[0].m_vPrevRot = x_low;
    v428 = *v397;
    v429 = v428;
    v430 = v428;
    v431 = this->m_pFigure->m_pBone;
    v432 = this->m_pBoneInfo;
    v432[v430].pPrevStack[0].m_vPrevScale.x = v431[v429].m_aBindPose.m_vPrevScale.x;
    v432[v430].pPrevStack[0].m_vPrevScale.y = v431[v429].m_aBindPose.m_vPrevScale.y;
    v432[v430].pPrevStack[0].m_vPrevScale.z = v431[v429].m_aBindPose.m_vPrevScale.z;
    v433 = &this->m_pBoneInfo[*v397];
    v433->pPrevStack[0].m_vPrevTrans.x = v421;
    v433->pPrevStack[0].m_vPrevTrans.y = v422;
    v433->pPrevStack[0].m_vPrevTrans.z = v423;
  }
  v434 = this->m_pBoneInfo;
  v435 = *(_OWORD *)&pBoneMat.m[8];
  v436 = v486;
  *(_OWORD *)((char *)v434->mRot.m + v408) = *(_OWORD *)pBoneMat.m;
  *(_OWORD *)((char *)&v434->mRot.m[4] + v408) = *(_OWORD *)&pBoneMat.m[4];
  v437 = *(_OWORD *)&pBoneMat.m[12];
  *(_OWORD *)((char *)&v434->mRot.m[8] + v408) = v435;
  *(_OWORD *)((char *)&v434->mRot.m[12] + v408) = v437;
  if ( *(_DWORD *)(v436 + v487 + 4) )
  {
    OGLMatrix::multiplyFast(
      (OGLMatrix *)((char *)&this->m_pBoneInfo->mBone + v408),
      (OGLMatrix *)(v436 + v487 + 32),
      &pBoneMat);
    *(&this->m_pBoneInfo->bChangedFlg + v408) = 0;
  }
}

void __fastcall OGLModel::setBoneTransSecOnceNew(OGLModel *this, int iChildNo, unsigned __int8 bMirror)
{
  OGLFigure *m_pFigure; // rax
  int v5; // er11
  __int64 v6; // r15
  OGLBone *m_pBone; // rcx
  _SECONDARY_BONE_INFO *m_SecondaryInfo; // rdi
  __int64 v9; // r13
  int m_iSecCount; // er12
  __int64 v11; // r14
  OGLBone *v12; // r14
  float v13; // xmm9_4
  float v14; // xmm10_4
  __m128 v15; // xmm12
  __int64 v16; // r9
  int v17; // er11
  __int16 v18; // si
  bool v19; // cf
  __int64 v20; // r13
  int v21; // eax
  unsigned __int8 v22; // r8
  __int64 v23; // r14
  __int64 v24; // r12
  float v25; // xmm9_4
  __int64 v26; // r15
  float v27; // xmm7_4
  float v28; // xmm7_4
  float v29; // xmm0_4
  float v30; // xmm7_4
  float v31; // xmm7_4
  float v32; // xmm0_4
  float v33; // xmm7_4
  float v34; // xmm7_4
  float v35; // xmm0_4
  __int64 v36; // rdi
  OGLMatrix *p_mRot; // rcx
  int v38; // esi
  OGLAnimationBone *v39; // rax
  _OGLModelBone *m_pBoneInfo; // rcx
  float v41; // xmm1_4
  float v42; // xmm0_4
  __int64 v43; // r9
  float v44; // xmm11_4
  float v45; // xmm10_4
  float v46; // xmm12_4
  _OGLModelBone *v47; // rdi
  float v48; // xmm7_4
  float v49; // xmm6_4
  float v50; // xmm8_4
  float v51; // xmm0_4
  float v52; // xmm13_4
  float v53; // xmm14_4
  float v54; // xmm15_4
  int v55; // edx
  __int64 v56; // r8
  float v57; // xmm0_4
  float v58; // xmm1_4
  float v59; // xmm3_4
  float v60; // xmm14_4
  float v61; // xmm15_4
  __int64 v62; // rdi
  OGLBone *v63; // rdx
  float v64; // xmm8_4
  float v65; // xmm9_4
  float v66; // xmm7_4
  float v67; // xmm6_4
  float v68; // xmm0_4
  __m128 v69; // xmm7
  float v70; // xmm0_4
  float v71; // xmm0_4
  int v72; // edx
  float v73; // xmm8_4
  float v74; // xmm10_4
  float v75; // xmm11_4
  float v76; // xmm12_4
  int v77; // er15
  float v78; // xmm10_4
  OGLModel *v79; // rcx
  int *m_iMirrorBoneIdx; // rax
  int v81; // eax
  __int64 v82; // rdi
  OGLMirrorData *m_MirrorData; // rsi
  __int64 boneID; // rax
  int *m_iMirrorBoneRIdx; // rcx
  int v86; // eax
  int mirrorType; // ecx
  _SECONDARY_BONE_INFO *v88; // rax
  float v89; // xmm3_4
  int v90; // ecx
  int v91; // ecx
  int v92; // ecx
  int v93; // edx
  OGLModel *v94; // rcx
  float v95; // xmm4_4
  float v96; // xmm5_4
  int v97; // er8
  __int64 v98; // rcx
  int v99; // eax
  __int64 v100; // r8
  __int64 v101; // r9
  __int64 v102; // rdi
  __int64 v103; // rdx
  int v104; // er14
  float *p_z; // rsi
  OGLMotion *v106; // rdx
  __int64 v107; // rcx
  OGLMirror *m_pMirror; // rax
  float v109; // xmm6_4
  float v110; // xmm0_4
  float v111; // xmm1_4
  float v112; // xmm2_4
  float v113; // xmm3_4
  float v114; // xmm3_4
  _SECONDARY_BONE_INFO *v115; // rcx
  int v116; // eax
  int v117; // ecx
  __int64 v118; // rdx
  int v119; // eax
  char v120; // cl
  __int64 v121; // rdi
  float v122; // xmm2_4
  double v123; // xmm1_8
  float v124; // xmm0_4
  float v125; // xmm5_4
  float v126; // xmm4_4
  float yt; // xmm6_4
  double v128; // xmm2_8
  _SECONDARY_BONE_INFO *v129; // rax
  float y; // xmm5_4
  float z; // xmm6_4
  float v132; // xmm12_4
  float v133; // xmm8_4
  float v134; // xmm15_4
  float v135; // xmm9_4
  float v136; // xmm1_4
  float v137; // xmm2_4
  __m128 v138; // xmm14
  int v139; // esi
  int v140; // er12
  int v141; // edx
  float v142; // xmm13_4
  int v143; // er14
  __int64 m_iNo; // rcx
  _OGLModelBone *v145; // rax
  __m128 v146; // xmm1
  __m128 v147; // xmm2
  __m128 v148; // xmm3
  float v149; // xmm6_4
  float v150; // xmm4_4
  float v151; // xmm0_4
  float v152; // xmm8_4
  float v153; // xmm4_4
  float v154; // xmm5_4
  double v155; // xmm10_8
  float v156; // xmm1_4
  float v157; // xmm2_4
  float v158; // xmm0_4
  float v159; // xmm6_4
  __m128 v160; // xmm0
  __m128 v161; // xmm6
  __m128d v162; // xmm2
  float v163; // xmm1_4
  float v164; // xmm0_4
  __int64 v165; // r15
  _OGLModelBone *v166; // rax
  char v167; // di
  __m128 v168; // xmm2
  __m128 v169; // xmm10
  float v170; // xmm12_4
  float v171; // xmm11_4
  float v172; // xmm10_4
  float v173; // xmm12_4
  float v174; // xmm11_4
  __m128 v175; // xmm4
  __m128 v176; // xmm5
  __m128 v177; // xmm2
  float v178; // xmm0_4
  float v179; // xmm9_4
  float v180; // xmm15_4
  float v181; // xmm0_4
  float v182; // xmm2_4
  int v183; // eax
  float v184; // xmm10_4
  float v185; // xmm11_4
  __int64 v186; // r9
  int v187; // er11
  _OGLModelBone *v188; // rax
  __int128 v189; // xmm1
  __int128 v190; // xmm0
  __int128 v191; // xmm1
  int v192; // edx
  __int64 v193; // r10
  __int64 v194; // r10
  bool v195; // zf
  float v196; // xmm0_4
  float v197; // xmm0_4
  float v198; // xmm0_4
  _SECONDARY_BONE_INFO *v199; // rax
  _OGLModelBone *v200; // r14
  __int64 v201; // r9
  __int64 v202; // r10
  _SECONDARY_BONE_INFO *v203; // rdi
  int v204; // ecx
  int v205; // ecx
  char v206; // cl
  float v207; // xmm6_4
  float v208; // xmm0_4
  __int64 v209; // r10
  int v210; // er11
  __int64 v211; // rcx
  char *v212; // rax
  __int64 v213; // rcx
  float *v214; // rax
  __int64 v215; // r10
  float v216; // xmm8_4
  __int64 v217; // r14
  float v218; // xmm9_4
  float v219; // xmm10_4
  float v220; // xmm11_4
  float v221; // xmm12_4
  float v222; // xmm15_4
  int *m_iSecondaryBoneRIdx; // rcx
  int v224; // er15
  __int64 v225; // rdi
  __int64 v226; // rax
  int v227; // eax
  int v228; // er12
  int v229; // eax
  unsigned __int8 v230; // al
  int v231; // ecx
  float v232; // xmm1_4
  OGLVec3 *p_Line2S; // r9
  OGLVec3 *v234; // r8
  OGLVec3 *p_Line1E; // rdx
  OGLVec3 *p_Line1S; // rcx
  float v237; // xmm0_4
  unsigned int v238; // xmm2_4
  char *v239; // rax
  int v240; // xmm3_4
  __int64 v241; // rcx
  float v242; // xmm0_4
  char *v243; // rax
  __int64 v244; // rcx
  float v245; // xmm2_4
  char *v246; // rax
  __int64 v247; // rcx
  unsigned int v248; // xmm0_4
  unsigned int v249; // xmm1_4
  float v250; // xmm2_4
  _SECONDARY_BONE_INFO *v251; // rax
  __int128 v252; // xmm1
  __int128 v253; // xmm0
  __int128 v254; // xmm1
  _SECONDARY_BONE_INFO *v255; // rcx
  unsigned int v256; // esi
  char v257; // al
  int v258; // ecx
  int v259; // edx
  int v260; // eax
  int v261; // er8
  int v262; // ecx
  int v263; // eax
  bool v264; // dl
  int v265; // er8
  bool v266; // cl
  _SECONDARY_BONE_INFO *v267; // rax
  __int64 v268; // r12
  __int128 v269; // xmm1
  __int128 v270; // xmm0
  __int128 v271; // xmm1
  _SECONDARY_BONE_INFO *v272; // rcx
  _SECONDARY_BONE_INFO *v273; // rdx
  int v274; // eax
  __int64 v275; // r10
  _OGLModelBone *v276; // r9
  float v277; // xmm1_4
  float v278; // xmm0_4
  float v279; // xmm1_4
  float v280; // xmm0_4
  float v281; // xmm1_4
  float v282; // xmm0_4
  float v283; // xmm1_4
  __int64 v284; // r9
  float v285; // xmm1_4
  float v286; // xmm0_4
  float v287; // xmm1_4
  float v288; // xmm0_4
  float v289; // xmm1_4
  float v290; // xmm0_4
  float v291; // xmm1_4
  __int64 v292; // r10
  __int64 v293; // r11
  __int64 v294; // rdi
  OGLBone *v295; // rcx
  float x; // xmm7_4
  float v297; // xmm8_4
  float v298; // xmm6_4
  float v299; // xmm1_4
  float v300; // xmm2_4
  float v301; // xmm3_4
  __int64 v302; // rcx
  __int64 v303; // r9
  __int64 v304; // rdx
  OGLBone *v305; // r8
  _OGLModelBone *v306; // rcx
  _OGLModelBone *v307; // rcx
  _OGLModelBone *v308; // rax
  __int128 v309; // xmm1
  unsigned __int64 v310; // r9
  __int128 v311; // xmm0
  __int128 v312; // xmm1
  __int64 v313; // r9
  int bParts; // [rsp+20h] [rbp-E0h]
  bool v315; // [rsp+40h] [rbp-C0h]
  bool v316; // [rsp+41h] [rbp-BFh]
  int v317; // [rsp+44h] [rbp-BCh]
  float v318; // [rsp+48h] [rbp-B8h]
  float v319; // [rsp+4Ch] [rbp-B4h]
  int v320; // [rsp+50h] [rbp-B0h]
  int v321; // [rsp+50h] [rbp-B0h]
  float v322; // [rsp+54h] [rbp-ACh]
  float v323; // [rsp+54h] [rbp-ACh]
  float v324; // [rsp+58h] [rbp-A8h]
  __int64 v326; // [rsp+60h] [rbp-A0h]
  float v327; // [rsp+68h] [rbp-98h]
  float pLen; // [rsp+6Ch] [rbp-94h] BYREF
  unsigned __int8 v329; // [rsp+70h] [rbp-90h]
  OGLVec3 Line1S; // [rsp+78h] [rbp-88h] BYREF
  float v331; // [rsp+88h] [rbp-78h]
  int v332; // [rsp+8Ch] [rbp-74h]
  int v333; // [rsp+90h] [rbp-70h]
  int v334; // [rsp+94h] [rbp-6Ch]
  float v335; // [rsp+98h] [rbp-68h]
  float v336; // [rsp+9Ch] [rbp-64h]
  float rfX; // [rsp+A0h] [rbp-60h] BYREF
  float rfY; // [rsp+A4h] [rbp-5Ch] BYREF
  float rfZ; // [rsp+A8h] [rbp-58h] BYREF
  int iAniboneNo; // [rsp+ACh] [rbp-54h] BYREF
  __int64 v341; // [rsp+B0h] [rbp-50h]
  OGLVec3 axis; // [rsp+B8h] [rbp-48h] BYREF
  float fLen; // [rsp+C8h] [rbp-38h] BYREF
  int iMotionNo; // [rsp+CCh] [rbp-34h] BYREF
  __int64 v345; // [rsp+D0h] [rbp-30h]
  OGLBone *v346; // [rsp+D8h] [rbp-28h]
  int v347; // [rsp+E0h] [rbp-20h]
  OGLVec3 Line2S; // [rsp+E8h] [rbp-18h] BYREF
  OGLVec3 vLine; // [rsp+F8h] [rbp-8h] BYREF
  OGLVec3 v350; // [rsp+104h] [rbp+4h] BYREF
  __int64 v351; // [rsp+110h] [rbp+10h]
  OGLMatrix mat1; // [rsp+120h] [rbp+20h] BYREF
  OGLVec3 pos; // [rsp+160h] [rbp+60h] BYREF
  __int64 v354; // [rsp+170h] [rbp+70h]
  OGLMatrix In1; // [rsp+180h] [rbp+80h] BYREF
  OGLMatrix v356; // [rsp+1C0h] [rbp+C0h] BYREF
  int v357; // [rsp+200h] [rbp+100h]
  __int64 v358; // [rsp+208h] [rbp+108h]
  OGLMatrix In2; // [rsp+210h] [rbp+110h] BYREF
  OGLMatrix v360; // [rsp+250h] [rbp+150h] BYREF
  OGLQuat v361; // [rsp+290h] [rbp+190h] BYREF
  __int64 v362; // [rsp+2A0h] [rbp+1A0h]
  __int64 v363; // [rsp+2B0h] [rbp+1B0h]
  __int64 v364; // [rsp+2B8h] [rbp+1B8h]
  __int64 v365; // [rsp+2C0h] [rbp+1C0h]
  OGLMatrix pOutMat; // [rsp+2E0h] [rbp+1E0h] BYREF
  OGLMatrix pBoneMat; // [rsp+320h] [rbp+220h] BYREF
  OGLVec3 Line1E; // [rsp+360h] [rbp+260h] BYREF
  int v369[4]; // [rsp+370h] [rbp+270h] BYREF
  int v370[4]; // [rsp+380h] [rbp+280h] BYREF
  OGLVec3 Line2E; // [rsp+390h] [rbp+290h] BYREF
  OGLVec3 v372; // [rsp+3A0h] [rbp+2A0h] BYREF
  OGLMatrix v373; // [rsp+3B0h] [rbp+2B0h] BYREF
  char obb[64]; // [rsp+3F0h] [rbp+2F0h] BYREF
  OGLMatrix mIn; // [rsp+430h] [rbp+330h] BYREF

  m_pFigure = this->m_pFigure;
  v5 = iChildNo;
  v329 = bMirror;
  v6 = iChildNo;
  m_pBone = m_pFigure->m_pBone;
  m_SecondaryInfo = this->m_SecondaryInfo;
  v9 = (__int64)&m_pBone[iChildNo];
  m_iSecCount = this->m_iSecCount;
  v351 = iChildNo;
  v11 = *(int *)(v9 + 96);
  v354 = v9;
  memset(&pBoneMat, 0, sizeof(pBoneMat));
  v12 = &m_pBone[v11];
  LODWORD(m_pFigure) = *(_DWORD *)(v9 + 100) >> 3;
  LOBYTE(m_pFigure) = (*(_DWORD *)(v9 + 100) & 8) != 0;
  v346 = v12;
  v357 = (int)m_pFigure;
  v334 = m_iSecCount;
  if ( !m_SecondaryInfo )
    return;
  v13 = FLOAT_N3_1415927;
  v14 = FLOAT_3_1415927;
  v15.m128_i32[0] = _xmm;
LABEL_3:
  if ( !this->m_pSecondary || (*(_BYTE *)(v9 + 100) & 2) == 0 || (OGLModel::getSecondaryState(this, v5) & 0x1000) != 0 )
    return;
  v18 = 0;
  v19 = *(_DWORD *)v16 < 0xAu;
  v333 = 0;
  memset(&v373, 0, sizeof(v373));
  *(_QWORD *)&axis.x = 0i64;
  axis.z = 0.0;
  *(_QWORD *)&pos.x = 0i64;
  pos.z = 0.0;
  if ( v19 )
    goto LABEL_314;
  v20 = *(_QWORD *)(v16 + 24);
  if ( !v20 )
    return;
  v21 = OGLModel::searchBoneFigureToSecondary(this, v17);
  if ( v21 >= 0 )
  {
    v23 = v21;
    v24 = v6;
    v25 = 0.0;
    *(_QWORD *)&In2.m[4] = 0i64;
    v26 = 80i64 * v21;
    *(_QWORD *)&In2.m[6] = 0i64;
    *(_QWORD *)&In2.m[14] = 0i64;
    m_SecondaryInfo[v24].iHitNo = -1;
    v27 = *(float *)(v26 + v20 + 24);
    *(_QWORD *)In2.m = 1065353216i64;
    In2.m[4] = 0.0;
    *(_QWORD *)&In2.m[8] = 0i64;
    *(_QWORD *)&In2.m[12] = 0i64;
    *(_QWORD *)&In2.m[5] = 1065353216i64;
    *(_QWORD *)&In2.m[2] = 0i64;
    *(_QWORD *)&In2.m[10] = 1065353216i64;
    In2.m[14] = 0.0;
    In2.m[7] = 0.0;
    In2.m[15] = 1.0;
    v341 = v24 * 592;
    v358 = v26;
    if ( v27 != 0.0 )
    {
      v28 = (float)(v27 * v14) / 180.0;
      sinf(v28);
      v29 = cosf(v28);
      In1.m[11] = 0.0;
      In1.m[14] = 0.0;
      LODWORD(In1.m[4]) = LODWORD(v28) ^ v15.m128_i32[0];
      In1.m[0] = v29;
      In1.m[1] = v28;
      In1.m[5] = v29;
      *(_QWORD *)&In1.m[2] = 0i64;
      *(_QWORD *)&In1.m[6] = 0i64;
      *(_QWORD *)&In1.m[8] = 0i64;
      *(_QWORD *)&In1.m[12] = 0i64;
      In1.m[10] = 1.0;
      In1.m[15] = 1.0;
      OGLMatrix::multiplyFastRotate(&In2, &In1, &In2);
    }
    v30 = *(float *)(v26 + v20 + 16);
    if ( v30 != 0.0 )
    {
      v31 = (float)(v30 * v14) / 180.0;
      sinf(v31);
      v32 = cosf(v31);
      In1.m[1] = 0.0;
      In1.m[4] = 0.0;
      In1.m[7] = 0.0;
      In1.m[8] = 0.0;
      In1.m[11] = 0.0;
      In1.m[14] = 0.0;
      LODWORD(In1.m[9]) = LODWORD(v31) ^ v15.m128_i32[0];
      In1.m[5] = v32;
      In1.m[6] = v31;
      In1.m[10] = v32;
      *(_QWORD *)&In1.m[2] = 0i64;
      *(_QWORD *)&In1.m[12] = 0i64;
      In1.m[0] = 1.0;
      In1.m[15] = 1.0;
      OGLMatrix::multiplyFastRotate(&In2, &In1, &In2);
    }
    v33 = *(float *)(v26 + v20 + 20);
    if ( v33 != 0.0 )
    {
      v34 = (float)(v33 * v14) / 180.0;
      sinf(v34);
      v35 = cosf(v34);
      In1.m[9] = 0.0;
      In1.m[8] = v34;
      In1.m[1] = 0.0;
      In1.m[3] = 0.0;
      In1.m[4] = 0.0;
      In1.m[11] = 0.0;
      In1.m[14] = 0.0;
      LODWORD(In1.m[2]) = LODWORD(v34) ^ v15.m128_i32[0];
      In1.m[0] = v35;
      In1.m[10] = v35;
      *(_QWORD *)&In1.m[6] = 0i64;
      *(_QWORD *)&In1.m[12] = 0i64;
      In1.m[5] = 1.0;
      In1.m[15] = 1.0;
      OGLMatrix::multiplyFastRotate(&In2, &In1, &In2);
    }
    v36 = v351;
    p_mRot = &this->m_pBoneInfo[v351].mRot;
    OGLMatrix::multiplyFast(p_mRot, p_mRot, &In2);
    v38 = iChildNo;
    v39 = OGLModel::searchMotionBoneID(this, iChildNo, &iMotionNo, &iAniboneNo, 1u);
    if ( v39 && (v39->m_uiInfoFlg & 4) != 0 )
    {
      m_pBoneInfo = this->m_pBoneInfo;
      *(_QWORD *)v360.m = 1065353216i64;
      *(_QWORD *)&v360.m[12] = 0i64;
      v360.m[14] = 0.0;
      v360.m[4] = 0.0;
      v360.m[7] = 0.0;
      *(_QWORD *)&v360.m[8] = 0i64;
      *(_QWORD *)&v360.m[2] = 0i64;
      *(_QWORD *)&v360.m[5] = 1065353216i64;
      *(_QWORD *)&v360.m[10] = 1065353216i64;
      v360.m[15] = 1.0;
      v41 = m_pBoneInfo[iChildNo].mRot.m[13];
      v360.m[12] = m_pBoneInfo[iChildNo].mRot.m[12];
      v42 = m_pBoneInfo[iChildNo].mRot.m[14];
      v360.m[13] = v41;
      v360.m[14] = v42;
      OGLMatrix::multiplyFast(&v360, &v360, &m_pBoneInfo[v346->m_iNo].mRot);
      v44 = v360.m[12] + 0.0;
      v45 = v360.m[13] + 0.0;
      v46 = v360.m[14] + 0.0;
    }
    else
    {
      OGLMatrix::multiplyFast(&pBoneMat, &this->m_pBoneInfo[v36].mRot, &this->m_pBoneInfo[v346->m_iNo].mRot);
      v46 = pBoneMat.m[14];
      v45 = pBoneMat.m[13];
      v44 = pBoneMat.m[12];
    }
    v47 = this->m_pBoneInfo;
    v48 = *(float *)((char *)&v47->mRot.m[13] + v43);
    v49 = *(float *)((char *)&v47->mRot.m[12] + v43);
    v50 = *(float *)((char *)&v47->mRot.m[14] + v43);
    v331 = v45 - v48;
    v335 = v44 - v49;
    v336 = v46 - v50;
    v51 = sqrtf(
            (float)((float)((float)(v45 - v48) * (float)(v45 - v48)) + (float)((float)(v44 - v49) * (float)(v44 - v49)))
          + (float)((float)(v46 - v50) * (float)(v46 - v50)));
    v52 = *(float *)(v26 + v20 + 60);
    v362 = 0i64;
    v363 = 0i64;
    v364 = 0i64;
    v365 = 0i64;
    v322 = v51;
    v53 = 0.0;
    v54 = 0.0;
    if ( v52 == 0.0 || (v55 = *(_DWORD *)(v26 + v20 + 64), v55 <= 1) )
    {
      v62 = iChildNo;
      v69 = 0i64;
    }
    else
    {
      v56 = (int)OGLModel::convertBoneSecondaryToFigure(this, v55);
      v57 = v47[v56].mRot.m[12];
      v58 = v47[v56].mRot.m[13];
      v59 = v47[v56].mRot.m[14];
      v60 = v57 - v49;
      v61 = v58 - v48;
      v62 = iChildNo;
      v63 = this->m_pFigure->m_pBone;
      *(float *)&iAniboneNo = v59 - v50;
      v64 = v63[iChildNo].m_mOffset.m[12] - v63[v56].m_mOffset.m[12];
      v65 = v63[iChildNo].m_mOffset.m[13] - v63[v56].m_mOffset.m[13];
      v66 = v63[iChildNo].m_mOffset.m[14] - v63[v56].m_mOffset.m[14];
      v67 = sqrtf(
              (float)((float)((float)(v45 - v58) * (float)(v45 - v58)) + (float)((float)(v44 - v57) * (float)(v44 - v57)))
            + (float)((float)(v46 - v59) * (float)(v46 - v59)));
      v68 = sqrtf((float)((float)(v65 * v65) + (float)(v64 * v64)) + (float)(v66 * v66));
      v69 = 0i64;
      v70 = fmaxf(
              0.0,
              (float)((float)((float)(v67 / v68) * 0.40000001) * (float)((float)(v67 / v68) * 0.40000001)) * v52);
      v53 = (float)(v60 * v70) * 0.1;
      v54 = (float)(v61 * v70) * 0.1;
      v25 = (float)(*(float *)&iAniboneNo * v70) * 0.1;
    }
    v22 = 64;
    v71 = *(float *)(v26 + v20 + 44);
    v72 = 64;
    v73 = FLOAT_0_016666669;
    v74 = v45 + this->m_vPosition2.y;
    v75 = v44 + this->m_vPosition2.x;
    v76 = v46 + this->m_vPosition2.z;
    if ( (*(_DWORD *)(v26 + v20 + 40) & 0x2000) == 0 )
      v72 = 60;
    v195 = this->m_pMirror == 0i64;
    v77 = iChildNo;
    v320 = v72;
    pos.x = v75;
    v78 = v74 - (float)(v71 * 0.016666669);
    pos.z = v76;
    pos.y = v78;
    if ( !v195 )
    {
      if ( OGLModel::checkMotionMirror(this, 0i64) )
      {
        m_iMirrorBoneIdx = this->m_iMirrorBoneIdx;
        v81 = m_iMirrorBoneIdx ? m_iMirrorBoneIdx[v62] : OGLModel::convertBoneFigureToMirror(v79, iChildNo);
        if ( v81 >= 0 )
        {
          v82 = v81;
          m_MirrorData = this->m_pMirror->m_MirrorData;
          boneID = m_MirrorData[v81].boneID;
          if ( (int)boneID < 0 )
          {
            v38 = iChildNo;
          }
          else
          {
            m_iMirrorBoneRIdx = this->m_iMirrorBoneRIdx;
            if ( m_iMirrorBoneRIdx )
              v86 = m_iMirrorBoneRIdx[boneID];
            else
              v86 = OGLModel::convertBoneMirrorToFigure(this, boneID);
            mirrorType = m_MirrorData[v82].mirrorType;
            v38 = iChildNo;
            v77 = iChildNo;
            if ( v86 >= 0 )
              v77 = v86;
            v333 = mirrorType;
          }
        }
      }
      v72 = v320;
      v22 = 64;
    }
    v88 = this->m_SecondaryInfo;
    v89 = v69.m128_f32[0];
    if ( v88 )
      v90 = v88[v24].iStateFlg | v88[v24].iStateWorkFlg | v88[v24].iStateTakeOverFlg;
    else
      LOWORD(v90) = 0;
    if ( (v90 & 0x4000) != 0 )
      v72 = 64;
    v321 = v72;
    if ( v88 )
      v91 = v88[v24].iStateFlg | v88[v24].iStateWorkFlg | v88[v24].iStateTakeOverFlg;
    else
      LOWORD(v91) = 0;
    if ( (v91 & 0x100) != 0 )
      v89 = this->m_mWorld.m[12] - this->m_mPreWorld.m[12];
    if ( v88 )
      v92 = v88[v24].iStateFlg | v88[v24].iStateWorkFlg | v88[v24].iStateTakeOverFlg;
    else
      LOWORD(v92) = 0;
    v19 = (v92 & 0x1000) != 0;
    v93 = v38;
    v94 = this;
    if ( v19 )
      goto LABEL_349;
    if ( (OGLModel::getSecondaryState(this, v38) & 1) != 0 )
    {
      v97 = 2;
      v98 = v24 * 592 + 144;
      do
      {
        *(double *)((char *)this->m_SecondaryInfo + v98 - 128) = v75;
        *(double *)((char *)&this->m_SecondaryInfo->vPrevAxis.x + v98) = (float)((float)((float)(v97 - 2)
                                                                                       * (float)(*(float *)(v20 + 80 * v23 + 44)
                                                                                               * 0.016666669))
                                                                               + v78);
        *(double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldX[14] + v98) = v76;
        *(double *)((char *)this->m_SecondaryInfo + v98 - 120) = v75;
        *(double *)((char *)&this->m_SecondaryInfo->vPrevAxis.z + v98) = (float)((float)((float)(v97 - 1)
                                                                                       * (float)(*(float *)(v20 + 80 * v23 + 44)
                                                                                               * 0.016666669))
                                                                               + v78);
        *(double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldX[15] + v98) = v76;
        *(double *)((char *)this->m_SecondaryInfo + v98 - 112) = v75;
        *(double *)((char *)this->m_SecondaryInfo->mPrevPosWorldX + v98) = (float)((float)((float)(*(float *)(v20 + 80 * v23 + 44)
                                                                                                 * 0.016666669)
                                                                                         * (float)v97)
                                                                                 + v78);
        *(double *)((char *)this->m_SecondaryInfo->mPrevPosWorldY + v98) = v76;
        *(double *)((char *)this->m_SecondaryInfo + v98 - 104) = v75;
        *(double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldX[1] + v98) = (float)((float)((float)(v97 + 1)
                                                                                             * (float)(*(float *)(v20 + 80 * v23 + 44) * 0.016666669))
                                                                                     + v78);
        *(double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldY[1] + v98) = v76;
        *(double *)((char *)this->m_SecondaryInfo + v98 - 96) = v75;
        *(double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldX[2] + v98) = (float)((float)((float)(v97 + 2)
                                                                                             * (float)(*(float *)(v20 + 80 * v23 + 44) * 0.016666669))
                                                                                     + v78);
        *(double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldY[2] + v98) = v76;
        *(double *)((char *)this->m_SecondaryInfo + v98 - 88) = v75;
        *(double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldX[3] + v98) = (float)((float)((float)(v97 + 3)
                                                                                             * (float)(*(float *)(v20 + 80 * v23 + 44) * 0.016666669))
                                                                                     + v78);
        *(double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldY[3] + v98) = v76;
        *(double *)((char *)this->m_SecondaryInfo + v98 - 80) = v75;
        *(double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldX[4] + v98) = (float)((float)((float)(v97 + 4)
                                                                                             * (float)(*(float *)(v20 + 80 * v23 + 44) * 0.016666669))
                                                                                     + v78);
        *(double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldY[4] + v98) = v76;
        *(double *)((char *)this->m_SecondaryInfo + v98 - 72) = v75;
        v99 = v97 + 5;
        v97 += 8;
        *(double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldX[5] + v98) = (float)((float)((float)v99
                                                                                             * (float)(*(float *)(v20 + 80 * v23 + 44) * 0.016666669))
                                                                                     + v78);
        *(double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldY[5] + v98) = v76;
        v98 += 64i64;
      }
      while ( v97 - 2 < 16 );
      this->m_SecondaryInfo[v24].iStateFlg &= ~1u;
    }
    v100 = 3i64;
    v101 = 80 * v23;
    v102 = v24 * 592 + 144;
    v326 = 80 * v23;
    v103 = v24 * 592 + 144;
    do
    {
      *(double *)((char *)this->m_SecondaryInfo + v103 - 128) = v89
                                                              + *(double *)((char *)this->m_SecondaryInfo + v103 - 120);
      *(double *)((char *)&this->m_SecondaryInfo->vPrevAxis.x + v103) = *(double *)((char *)&this->m_SecondaryInfo->vPrevAxis.z
                                                                                  + v103)
                                                                      - (float)(*(float *)(v101 + v20 + 44) * 0.016666669)
                                                                      + v95;
      *(double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldX[14] + v103) = v96
                                                                             + *(double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldX[15]
                                                                                         + v103);
      *(double *)((char *)this->m_SecondaryInfo + v103 - 120) = v89
                                                              + *(double *)((char *)this->m_SecondaryInfo + v103 - 112);
      *(double *)((char *)&this->m_SecondaryInfo->vPrevAxis.z + v103) = *(double *)((char *)this->m_SecondaryInfo->mPrevPosWorldX
                                                                                  + v103)
                                                                      - (float)(*(float *)(v101 + v20 + 44) * 0.016666669)
                                                                      + v95;
      *(double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldX[15] + v103) = v96
                                                                             + *(double *)((char *)this->m_SecondaryInfo->mPrevPosWorldY
                                                                                         + v103);
      *(double *)((char *)this->m_SecondaryInfo + v103 - 112) = v89
                                                              + *(double *)((char *)this->m_SecondaryInfo + v103 - 104);
      *(double *)((char *)this->m_SecondaryInfo->mPrevPosWorldX + v103) = *(double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldX[1]
                                                                                    + v103)
                                                                        - (float)(*(float *)(v101 + v20 + 44)
                                                                                * 0.016666669)
                                                                        + v95;
      *(double *)((char *)this->m_SecondaryInfo->mPrevPosWorldY + v103) = v96
                                                                        + *(double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldY[1]
                                                                                    + v103);
      *(double *)((char *)this->m_SecondaryInfo + v103 - 104) = v89
                                                              + *(double *)((char *)this->m_SecondaryInfo + v103 - 96);
      *(double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldX[1] + v103) = *(double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldX[2]
                                                                                        + v103)
                                                                            - (float)(*(float *)(v101 + v20 + 44)
                                                                                    * 0.016666669)
                                                                            + v95;
      *(double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldY[1] + v103) = v96
                                                                            + *(double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldY[2]
                                                                                        + v103);
      *(double *)((char *)this->m_SecondaryInfo + v103 - 96) = v89
                                                             + *(double *)((char *)this->m_SecondaryInfo + v103 - 88);
      *(double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldX[2] + v103) = *(double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldX[3]
                                                                                        + v103)
                                                                            - (float)(*(float *)(v101 + v20 + 44)
                                                                                    * 0.016666669)
                                                                            + v95;
      *(double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldY[2] + v103) = v96
                                                                            + *(double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldY[3]
                                                                                        + v103);
      v103 += 40i64;
      --v100;
    }
    while ( v100 );
    v104 = 0;
    this->m_SecondaryInfo[v24].mPrevPosWorldX[14] = v53 + this->m_SecondaryInfo[v24].mPrevPosWorldX[14];
    this->m_SecondaryInfo[v24].mPrevPosWorldY[14] = v54 + this->m_SecondaryInfo[v24].mPrevPosWorldY[14];
    this->m_SecondaryInfo[v24].mPrevPosWorldZ[14] = v25 + this->m_SecondaryInfo[v24].mPrevPosWorldZ[14];
    if ( this->m_iSecondaryForceCount > 0 )
    {
      p_z = &this->m_SecondaryForce[0].vForce.z;
      while ( 2 )
      {
        if ( *((char *)p_z + 4) >= 0 && v77 != *((_DWORD *)p_z - 3) || ((_DWORD)p_z[1] & 1) != 0 )
          goto LABEL_74;
        v106 = this->m_pMotion[0];
        if ( v106 )
        {
          v107 = this->m_iMotionIndex[0];
          if ( (int)v107 >= 0 )
          {
            m_pMirror = this->m_pMirror;
            if ( m_pMirror )
            {
              if ( m_pMirror->m_MirrorData )
              {
                if ( (v106->m_ppMotionData[v107]->m_uiInfoFlg & 1) != 0 )
                {
                  if ( this->m_MirrorEnable || (this->m_uiModeFlg & 8) != 0 )
                    break;
LABEL_80:
                  v109 = FLOAT_N1_5707964;
LABEL_73:
                  sinf(v109);
                  v110 = cosf(v109);
                  v111 = *(p_z - 2);
                  v112 = *(p_z - 1);
                  v113 = *p_z;
                  v362 = 0i64;
                  v365 = 0i64;
                  v364 = 0i64;
                  v363 = 0i64;
                  v114 = v113 * -1.0;
                  this->m_SecondaryInfo[v24].mPrevPosWorldX[14] = (float)((float)((float)(v110 * v111)
                                                                                + (float)(0.0 * v112))
                                                                        + (float)(v109 * v114))
                                                                + this->m_SecondaryInfo[v24].mPrevPosWorldX[14];
                  this->m_SecondaryInfo[v24].mPrevPosWorldY[14] = (float)((float)((float)(0.0 * v111) + v112)
                                                                        + (float)(0.0 * v114))
                                                                + this->m_SecondaryInfo[v24].mPrevPosWorldY[14];
                  this->m_SecondaryInfo[v24].mPrevPosWorldZ[14] = (float)((float)((float)(COERCE_FLOAT(LODWORD(v109) ^ _xmm)
                                                                                        * v111)
                                                                                + (float)(0.0 * v112))
                                                                        + (float)(v110 * v114))
                                                                + this->m_SecondaryInfo[v24].mPrevPosWorldZ[14];
LABEL_74:
                  ++v104;
                  p_z += 6;
                  if ( v104 >= this->m_iSecondaryForceCount )
                  {
                    v73 = FLOAT_0_016666669;
                    v69 = 0i64;
                    v101 = v326;
                    goto $SEC_RECALC2_0;
                  }
                  continue;
                }
                if ( this->m_MirrorEnable || (this->m_uiModeFlg & 8) != 0 )
                  goto LABEL_80;
              }
            }
          }
        }
        break;
      }
      v109 = FLOAT_1_5707964;
      goto LABEL_73;
    }
$SEC_RECALC2_0:
    v115 = this->m_SecondaryInfo;
    if ( v115 )
      v116 = v115[v24].iStateFlg | v115[v24].iStateWorkFlg | v115[v24].iStateTakeOverFlg;
    else
      v116 = 0;
    if ( (v116 & 0x20000) != 0 )
    {
      v115[v24].iStateFlg &= ~0x20000u;
      v117 = 15;
      v118 = 3i64;
      do
      {
        *(double *)((char *)this->m_SecondaryInfo + v102 - 128) = v75;
        *(double *)((char *)&this->m_SecondaryInfo->vPrevAxis.x + v102) = (float)(v78
                                                                                - (float)((float)(v117 + 1)
                                                                                        * (float)(*(float *)(v101 + v20 + 44)
                                                                                                * v73)));
        *(double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldX[14] + v102) = v76;
        *(double *)((char *)this->m_SecondaryInfo + v102 - 120) = v75;
        *(double *)((char *)&this->m_SecondaryInfo->vPrevAxis.z + v102) = (float)(v78
                                                                                - (float)((float)(*(float *)(v101 + v20 + 44)
                                                                                                * v73)
                                                                                        * (float)v117));
        *(double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldX[15] + v102) = v76;
        *(double *)((char *)this->m_SecondaryInfo + v102 - 112) = v75;
        *(double *)((char *)this->m_SecondaryInfo->mPrevPosWorldX + v102) = (float)(v78
                                                                                  - (float)((float)(v117 - 1)
                                                                                          * (float)(*(float *)(v101 + v20 + 44)
                                                                                                  * v73)));
        *(double *)((char *)this->m_SecondaryInfo->mPrevPosWorldY + v102) = v76;
        *(double *)((char *)this->m_SecondaryInfo + v102 - 104) = v75;
        *(double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldX[1] + v102) = (float)(v78
                                                                                      - (float)((float)(v117 - 2)
                                                                                              * (float)(*(float *)(v101 + v20 + 44) * v73)));
        *(double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldY[1] + v102) = v76;
        *(double *)((char *)this->m_SecondaryInfo + v102 - 96) = v75;
        v119 = v117 - 3;
        v117 -= 5;
        *(double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldX[2] + v102) = (float)(v78
                                                                                      - (float)((float)v119
                                                                                              * (float)(*(float *)(v101 + v20 + 44) * v73)));
        *(double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldY[2] + v102) = v76;
        v102 += 40i64;
        --v118;
      }
      while ( v118 );
    }
    v120 = v357;
    v121 = v358;
    if ( (_BYTE)v357 )
    {
      v122 = *(float *)(v358 + v20 + 44) * v73;
      v123 = v78 - this->m_SecondaryInfo[v24].mPrevPosWorldY[14];
      if ( v123 > v122 )
      {
        v78 = v78 - (float)((float)(v123 - v122) * 0.5);
        pos.y = v78;
      }
    }
    this->m_SecondaryInfo[v24].mPrevPosWorldX[15] = v75;
    this->m_SecondaryInfo[v24].mPrevPosWorldY[15] = v78;
    this->m_SecondaryInfo[v24].mPrevPosWorldZ[15] = v76;
    v124 = *(float *)(v121 + v20 + 52);
    v125 = *(float *)(v121 + v20 + 36);
    v126 = fminf(6.0, v124);
    yt = 15.0 - v125;
    if ( v124 >= 2.0 )
    {
      v128 = this->m_SecondaryInfo[v24].mPrevPosWorldY[14] - v78;
      if ( v128 <= 0.0 )
        *(_QWORD *)&v128 ^= _xmm;
      if ( v128 > (float)((float)((float)(*(float *)(v121 + v20 + 44) * v73) * 8.0) * (float)(7.0 - v126))
        && v120
        && v125 > 0.30000001 )
      {
        yt = FLOAT_14_7;
      }
    }
    calcSpline(
      &pos,
      this->m_SecondaryInfo[v24].mPrevPosWorldX,
      this->m_SecondaryInfo[v24].mPrevPosWorldY,
      this->m_SecondaryInfo[v24].mPrevPosWorldZ,
      bParts,
      15.0 - v125,
      yt,
      15.0 - v125);
    v129 = this->m_SecondaryInfo;
    y = pos.y;
    z = pos.z;
    v132 = v335;
    v133 = (float)v129[v24].mPrevPosWorldX[14] - pos.x;
    v134 = (float)v129[v24].mPrevPosWorldY[14] - pos.y;
    v135 = (float)v129[v24].mPrevPosWorldZ[14] - pos.z;
    if ( (*(_DWORD *)(v121 + v20 + 40) & 0x80000) != 0
      && (float)((float)(v134 * v331) + (float)(v133 * v335)) < -0.0099999998 )
    {
      LODWORD(v136) = LODWORD(v133) & _xmm;
      LODWORD(v137) = LODWORD(v134) & _xmm;
      if ( COERCE_FLOAT(LODWORD(v133) & _xmm) > COERCE_FLOAT(LODWORD(v134) & _xmm)
        && v136 > COERCE_FLOAT(LODWORD(v135) & _xmm)
        && v69.m128_f32[0] > (float)(v133 * v335)
        && v137 >= 0.001 )
      {
        v134 = v134 * (float)((float)(v136 / v137) + 0.1);
      }
    }
    iMotionNo = 12;
    v129[v24].mPrevPosWorldX[15] = pos.x;
    v138 = 0i64;
    v315 = v69.m128_f32[0] >= v134;
    v319 = 0.0;
    v139 = 0;
    this->m_SecondaryInfo[v24].mPrevPosWorldY[15] = y;
    this->m_SecondaryInfo[v24].mPrevPosWorldZ[15] = z;
    v140 = 0;
    v141 = *(_DWORD *)(v121 + v20 + 40);
    v142 = FLOAT_0_125;
    v327 = FLOAT_0_125;
    v317 = 0;
    v332 = 0;
    LOBYTE(v347) = 0;
    v143 = v141 & 0xE;
    if ( (v141 & 0xE) != 0 )
    {
      m_iNo = v346->m_iNo;
      v145 = this->m_pBoneInfo;
      v146 = *(__m128 *)&v145[m_iNo].mRot.m[4];
      v147 = *(__m128 *)&v145[m_iNo].mRot.m[8];
      v148 = *(__m128 *)v145[m_iNo].mRot.m;
      *(_OWORD *)&obb[48] = *(_OWORD *)&v145[m_iNo].mRot.m[12];
      v149 = (float)((float)(_mm_shuffle_ps(v146, v146, 85).m128_f32[0] * v134) + (float)(v146.m128_f32[0] * v133))
           + (float)(_mm_shuffle_ps(v146, v146, 170).m128_f32[0] * v135);
      v150 = (float)(_mm_shuffle_ps(v147, v147, 85).m128_f32[0] * v134) + (float)(v147.m128_f32[0] * v133);
      v151 = v148.m128_f32[0] * v133;
      v152 = v149;
      v153 = v150 + (float)(_mm_shuffle_ps(v147, v147, 170).m128_f32[0] * v135);
      v154 = (float)((float)(_mm_shuffle_ps(v148, v148, 85).m128_f32[0] * v134) + v151)
           + (float)(_mm_shuffle_ps(v148, v148, 170).m128_f32[0] * v135);
      if ( (v141 & 2) != 0 )
      {
        v154 = v154 * 0.000099999997;
      }
      else if ( (v141 & 8) != 0 )
      {
        v153 = v153 * 0.000099999997;
      }
      else if ( (v141 & 4) != 0 )
      {
        v152 = v149 * 0.000099999997;
      }
      v134 = (float)((float)(v152 * v145[m_iNo].mRot.m[5]) + (float)(v154 * v145[m_iNo].mRot.m[1]))
           + (float)(v153 * v145[m_iNo].mRot.m[9]);
      v135 = (float)((float)(v152 * v145[m_iNo].mRot.m[6]) + (float)(v154 * v145[m_iNo].mRot.m[2]))
           + (float)(v153 * v145[m_iNo].mRot.m[10]);
      v133 = (float)((float)(v152 * v145[m_iNo].mRot.m[4]) + (float)(v154 * v145[m_iNo].mRot.m[0]))
           + (float)(v153 * v145[m_iNo].mRot.m[8]);
    }
    v155 = sqrtf((float)((float)(v134 * v134) + (float)(v133 * v133)) + (float)(v135 * v135));
    if ( v322 == 0.0 )
    {
      v156 = v331;
      v157 = v336;
    }
    else
    {
      v156 = v331 / v322;
      v157 = v336 / v322;
      v132 = v132 / v322;
      v331 = v331 / v322;
      v336 = v336 / v322;
      v335 = v132;
    }
    v158 = v155;
    if ( v158 != 0.0 )
    {
      v133 = v133 / v158;
      v134 = v134 / v158;
      v135 = v135 / v158;
    }
    v159 = *(float *)(v121 + v20 + 52);
    v160 = (__m128)LODWORD(FLOAT_N1_0);
    v160.m128_f32[0] = fmaxf(
                         -1.0,
                         fminf(1.0, (float)((float)(v134 * v156) + (float)(v133 * v132)) + (float)(v135 * v157)));
    if ( v159 == -1.0 )
    {
      v160.m128_f32[0] = acosf(v160.m128_f32[0]);
      v161 = v160;
    }
    else
    {
      v162 = 0i64;
      v162.m128d_f64[0] = acosf(v160.m128_f32[0]) * v155 * v159;
      v161 = _mm_cvtpd_ps(v162);
    }
    v163 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v161.m128_f32[0]) & _xmm);
    if ( v163 < 0.0000099999997 )
      v161 = 0i64;
    v164 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v161.m128_f32[0]) & _xmm);
    if ( v164 > 2.0943952 )
    {
      if ( v161.m128_f32[0] <= 0.0 )
      {
        if ( v161.m128_f32[0] < 0.0 )
          v161 = (__m128)LODWORD(FLOAT_N2_0943952);
      }
      else
      {
        v161 = (__m128)LODWORD(FLOAT_2_0943952);
      }
    }
    v165 = 536 * v351;
    v166 = this->m_pBoneInfo;
    v167 = 0;
    v345 = 536 * v351;
    v168 = *(__m128 *)&v166[v351].mRot.m[8];
    v169 = *(__m128 *)v166[v351].mRot.m;
    *(_OWORD *)&obb[48] = *(_OWORD *)&v166[v351].mRot.m[12];
    v170 = _mm_shuffle_ps(v169, v169, 85).m128_f32[0];
    v171 = _mm_shuffle_ps(v169, v169, 170).m128_f32[0];
    v172 = (float)((float)(v169.m128_f32[0] * 0.0) - (float)(COERCE_FLOAT(*(_OWORD *)&v166[v351].mRot.m[4]) * 1.0))
         + (float)(v168.m128_f32[0] * 0.0);
    v173 = (float)((float)(v170 * 0.0)
                 - (float)(_mm_shuffle_ps(*(__m128 *)&v166[v351].mRot.m[4], *(__m128 *)&v166[v351].mRot.m[4], 85).m128_f32[0]
                         * 1.0))
         + (float)(_mm_shuffle_ps(v168, v168, 85).m128_f32[0] * 0.0);
    v174 = (float)((float)(v171 * 0.0) - (float)(v168.m128_f32[0] * 1.0))
         + (float)(_mm_shuffle_ps(v168, v168, 170).m128_f32[0] * 0.0);
    if ( !v143 && v172 == 0.0 && v174 == 0.0 )
    {
      v175 = *(__m128 *)((char *)v166->mRot.m + v165);
      v167 = 1;
      v176 = *(__m128 *)((char *)&v166->mRot.m[8] + v165);
      v177 = *(__m128 *)((char *)&v166->mRot.m[4] + v165);
      *(_OWORD *)&obb[48] = *(_OWORD *)((char *)&v166->mRot.m[12] + v165);
      v172 = (float)((float)(v177.m128_f32[0] * 0.0) - (float)(v175.m128_f32[0] * 1.0))
           + (float)(v176.m128_f32[0] * 0.0);
      v173 = (float)((float)(_mm_shuffle_ps(v177, v177, 85).m128_f32[0] * 0.0)
                   - (float)(_mm_shuffle_ps(v175, v175, 85).m128_f32[0] * 1.0))
           + (float)(_mm_shuffle_ps(v176, v176, 85).m128_f32[0] * 0.0);
      v174 = (float)((float)(v176.m128_f32[0] * 0.0) - (float)(_mm_shuffle_ps(v175, v175, 170).m128_f32[0] * 1.0))
           + (float)(_mm_shuffle_ps(v176, v176, 170).m128_f32[0] * 0.0);
    }
    v178 = sqrtf((float)((float)(v173 * v173) + (float)(v172 * v172)) + (float)(v174 * v174));
    if ( v178 != 0.0 )
    {
      v172 = v172 / v178;
      v173 = v173 / v178;
      v174 = v174 / v178;
    }
    v318 = (float)(v135 * v331) - (float)(v134 * v336);
    axis.x = v318;
    v179 = (float)(v133 * v336) - (float)(v135 * v335);
    v324 = v179;
    axis.y = v179;
    v180 = (float)(v134 * v335) - (float)(v331 * v133);
    v323 = v180;
    axis.z = v180;
    v181 = sqrtf((float)((float)(v179 * v179) + (float)(v318 * v318)) + (float)(v180 * v180));
    if ( v181 == 0.0 )
    {
      v182 = v318;
    }
    else
    {
      v182 = v318 / v181;
      v179 = v179 / v181;
      v180 = v180 / v181;
      v318 = v182;
      axis.x = v182;
      v324 = v179;
      axis.y = v179;
      v323 = v180;
      axis.z = v180;
    }
    v316 = 0;
    if ( v172 == 0.0 )
    {
      if ( v173 != 0.0 )
        goto LABEL_136;
    }
    else if ( v173 != 0.0 || v174 != 0.0 || v167 != 1 )
    {
LABEL_136:
      if ( v143 )
      {
        v183 = (unsigned __int8)v347;
        if ( COERCE_FLOAT(LODWORD(v172) & _xmm) < 0.0000099999997 )
          v183 = 1;
        v347 = v183;
      }
      goto LABEL_140;
    }
    LOBYTE(v347) = 1;
LABEL_140:
    v184 = 0.0;
    v185 = FLOAT_0_125;
    v186 = v341;
    v187 = iChildNo;
    while ( 1 )
    {
      v188 = this->m_pBoneInfo;
      v189 = *(_OWORD *)((char *)&v188->mRot.m[4] + v165);
      *(_OWORD *)pBoneMat.m = *(_OWORD *)((char *)v188->mRot.m + v165);
      v190 = *(_OWORD *)((char *)&v188->mRot.m[8] + v165);
      *(_OWORD *)&pBoneMat.m[4] = v189;
      v191 = *(_OWORD *)((char *)&v188->mRot.m[12] + v165);
      *(_OWORD *)&pBoneMat.m[8] = v190;
      *(_OWORD *)&pBoneMat.m[12] = v191;
      if ( (v139 & 0xF0) != 0 )
        break;
      if ( (OGLModel::getSecondaryState(this, v187) & 0x40000) != 0 )
      {
        if ( (*(_DWORD *)(v193 + v20 + 40) & 0x2000) != 0 )
          break;
        v15 = (__m128)(unsigned int)_xmm;
        if ( (OGLModel::getSecondaryState(this, v192) & 0x4000) == 0 )
        {
          v195 = !v315;
LABEL_155:
          v197 = *(float *)(v194 + v20 + 28);
          if ( v195 )
          {
            v196 = fmaxf(COERCE_FLOAT(LODWORD(v197) ^ v15.m128_i32[0]), v161.m128_f32[0]);
            v161 = _mm_xor_ps((__m128)*(unsigned int *)(v194 + v20 + 32), v15);
            v161.m128_f32[0] = fminf(v161.m128_f32[0], v196);
          }
          else
          {
            v198 = fminf(v197, v161.m128_f32[0]);
            v161 = (__m128)*(unsigned int *)(v194 + v20 + 32);
            v161.m128_f32[0] = fmaxf(v161.m128_f32[0], v198);
          }
        }
      }
      else
      {
        if ( (*(_DWORD *)(v193 + v20 + 40) & 0x2000) != 0 || (OGLModel::getSecondaryState(this, v192) & 0x4000) != 0 )
          break;
        v15 = (__m128)(unsigned int)_xmm;
        if ( (v139 & 0xF) == 0 )
        {
          v195 = !v315;
          goto LABEL_155;
        }
      }
LABEL_158:
      if ( !v140 )
        v138 = v161;
      *(_DWORD *)((char *)&this->m_SecondaryInfo->fPrevRadian + v186) = v161.m128_i32[0];
      v199 = this->m_SecondaryInfo;
      *(float *)((char *)&v199->vPrevAxis.x + v186) = v182;
      *(float *)((char *)&v199->vPrevAxis.y + v186) = v179;
      *(float *)((char *)&v199->vPrevAxis.z + v186) = v180;
      OGLMatrix::rotateV(&v373, &axis, v161.m128_f32[0]);
      v200 = this->m_pBoneInfo;
      OGLMatrix::multiplyFastRotate(&v373, &v200[v346->m_iNo].mRot, &v373);
      OGLMatrix::multiplyFast(&pBoneMat, &pBoneMat, &v373);
      if ( (OGLModel::getSecondaryState(this, iChildNo) & 0x400) != 0 || (v139 & 0x40) != 0 )
        goto LABEL_201;
      v203 = this->m_SecondaryInfo;
      if ( v203 )
        v204 = v203[v201].iStateFlg | v203[v201].iStateWorkFlg | v203[v201].iStateTakeOverFlg;
      else
        LOBYTE(v204) = 0;
      if ( ((v204 & 0x20) == 0 || *(float *)((char *)&v200->mRot.m[13] + v202) <= pBoneMat.m[13])
        && (*(float *)(v326 + v20 + 56) <= pBoneMat.m[13]
         || (v203 ? (v205 = v203[v201].iStateFlg | v203[v201].iStateWorkFlg | v203[v201].iStateTakeOverFlg) : (LOBYTE(v205) = 0),
             (v205 & 0x20) != 0)) )
      {
        if ( (v139 & 0x30) == 16 )
        {
          v185 = v185 * 0.5;
          v139 |= 0x20u;
          v327 = v185;
        }
        if ( (v139 & 0x60) != 32 )
          goto LABEL_201;
        v184 = v315 ? v184 + v185 : v184 - v185;
        v182 = v318;
        ++v140;
        v186 = v341;
        v161 = v138;
        v165 = v345;
        v161.m128_f32[0] = v138.m128_f32[0] + v184;
        v319 = v184;
        v317 = v140;
        if ( v140 >= 128 )
          goto LABEL_201;
      }
      else
      {
        if ( (v139 & 0xF0) != 0 )
        {
          v206 = v315;
LABEL_179:
          v182 = v318;
          goto LABEL_180;
        }
        v139 |= 0x10u;
        if ( (float)((float)((float)(v335 * 0.0) + v331) + (float)(v336 * 0.0)) != 0.0 )
        {
          v179 = (float)(v336 * 0.0) - (float)(v335 * 0.0);
          v180 = v335 - (float)(v331 * 0.0);
          v324 = v179;
          v207 = (float)(v331 * 0.0) - v336;
          v323 = v180;
          v318 = v207;
          v208 = sqrtf((float)((float)(v179 * v179) + (float)(v207 * v207)) + (float)(v180 * v180));
          if ( v208 != 0.0 )
          {
            v207 = v207 / v208;
            v179 = v179 / v208;
            v180 = v180 / v208;
            v318 = v207;
            v324 = v179;
            v323 = v180;
          }
          v187 = iChildNo;
          v206 = 0;
          v315 = 0;
          axis.x = v207;
          axis.y = v179;
          axis.z = v180;
          goto LABEL_179;
        }
        v182 = *(float *)&FLOAT_1_0;
        v206 = 1;
        v318 = *(float *)&FLOAT_1_0;
        v179 = 0.0;
        LODWORD(axis.x) = FLOAT_1_0;
        v180 = 0.0;
        v315 = 1;
        v324 = 0.0;
        axis.y = 0.0;
        v323 = 0.0;
        axis.z = 0.0;
LABEL_180:
        if ( (v139 & 0x20) != 0 )
        {
          v185 = v185 * 0.5;
          v327 = v185;
          if ( v185 >= 0.00019999999 )
            v139 &= ~0x20u;
          else
            v139 |= 0x40u;
          if ( v206 )
            v184 = v184 - v185;
          else
            v184 = v184 + v185;
          ++v140;
          v186 = v341;
          v161 = v138;
          v165 = v345;
          v161.m128_f32[0] = v138.m128_f32[0] + v184;
          v319 = v184;
          v317 = v140;
          if ( v140 >= 30 )
          {
LABEL_201:
            if ( (OGLModel::getSecondaryState(this, v187) & 0x800) != 0
              || !this->m_SecondaryCollisionEnable
              || !*(_DWORD *)(v209 + v20 + 68)
              || (v139 & 0x40) != 0 )
            {
              goto LABEL_313;
            }
            v211 = 4i64;
            v212 = &obb[8];
            do
            {
              *((_QWORD *)v212 - 1) = 0i64;
              *(_DWORD *)v212 = 0;
              v212 += 12;
              --v211;
            }
            while ( v211 );
            memset(&pOutMat, 0, sizeof(pOutMat));
            v213 = 2i64;
            memset(&mat1, 0, sizeof(mat1));
            v214 = &vLine.z;
            do
            {
              *((_QWORD *)v214 - 1) = 0i64;
              *v214 = 0.0;
              v214 += 3;
              --v213;
            }
            while ( v213 );
            if ( (*(_DWORD *)(v209 + v20 + 40) & 0x210) != 0 )
              OGLModel::getBoneMatrix(
                this,
                &pOutMat,
                v210,
                *(float *)(v209 + v20 + 48),
                &pBoneMat,
                *(float *)(v209 + v20 + 8),
                &vLine,
                &fLen);
            else
              OGLModel::getBoneMatrix(
                this,
                &pOutMat,
                &fLen,
                v210,
                *(float *)(v209 + v20 + 8),
                *(float *)(v209 + v20 + 48),
                &pBoneMat);
            v215 = v326;
            *(float *)&iAniboneNo = 0.0;
            if ( *(int *)(v326 + v20 + 68) <= 0 )
            {
              v187 = iChildNo;
LABEL_282:
              if ( (v139 & 4) != 0 )
              {
LABEL_312:
                v267 = this->m_SecondaryInfo;
                v268 = v341;
                v269 = *(_OWORD *)&pOutMat.m[4];
                v15.m128_i32[0] = _xmm;
                *(_OWORD *)((char *)v267->mBaseMat.m + v341) = *(_OWORD *)pOutMat.m;
                v270 = *(_OWORD *)&pOutMat.m[8];
                *(_OWORD *)((char *)&v267->mBaseMat.m[4] + v268) = v269;
                v271 = *(_OWORD *)&pOutMat.m[12];
                *(_OWORD *)((char *)&v267->mBaseMat.m[8] + v268) = v270;
                *(_OWORD *)((char *)&v267->mBaseMat.m[12] + v268) = v271;
                v272 = this->m_SecondaryInfo;
                LODWORD(v267) = *(_DWORD *)(v358 + v20 + 4);
                *(float *)((char *)&v272->vScale.y + v268) = *(float *)(v358 + v20 + 12);
                *(float *)((char *)&v272->vScale.z + v268) = fLen;
                *(_DWORD *)((char *)&v272->vScale.x + v268) = (_DWORD)v267;
LABEL_313:
                v14 = FLOAT_3_1415927;
                v13 = FLOAT_N3_1415927;
                v18 = v333;
                v12 = v346;
                v6 = v351;
                v9 = v354;
                m_iSecCount = v334;
LABEL_314:
                v273 = this->m_SecondaryInfo;
                if ( v273 )
                  v274 = v273[v12->m_iNo].iStateFlg | v273[v12->m_iNo].iStateWorkFlg | v273[v12->m_iNo].iStateTakeOverFlg;
                else
                  LOWORD(v274) = 0;
                if ( (v274 & 0x1000) == 0 )
                {
                  v275 = v12->m_iNo;
                  if ( (this->m_pFigure->m_pBone[v275].m_uiBoneInfoFlg & 0x10) == 0 )
                  {
                    v276 = this->m_pBoneInfo;
                    memset(&v356, 0, sizeof(v356));
                    memset(&mIn, 0, sizeof(mIn));
                    v277 = v276[v275].mRot.m[1];
                    v356.m[0] = v276[v275].mRot.m[0];
                    v356.m[8] = v276[v275].mRot.m[2];
                    v278 = v276[v275].mRot.m[5];
                    v356.m[4] = v277;
                    v279 = v276[v275].mRot.m[4];
                    v356.m[5] = v278;
                    v280 = v276[v275].mRot.m[8];
                    v356.m[1] = v279;
                    v281 = v276[v275].mRot.m[6];
                    v356.m[2] = v280;
                    v282 = v276[v275].mRot.m[10];
                    v356.m[9] = v281;
                    v283 = v276[v275].mRot.m[9];
                    v356.m[10] = v282;
                    v356.m[6] = v283;
                    v356.m[15] = 1.0;
                    OGLMatrix::multiplyFastRotate(&mIn, &pBoneMat, &v356);
                    *(_QWORD *)&v356.m[12] = 0i64;
                    v356.m[14] = 0.0;
                    v356.m[3] = 0.0;
                    v356.m[7] = 0.0;
                    v285 = *(float *)(536 * v6 + v284 + 216);
                    v356.m[0] = *(float *)(536 * v6 + v284 + 212);
                    v356.m[8] = *(float *)(536 * v6 + v284 + 220);
                    v286 = *(float *)(536 * v6 + v284 + 232);
                    v356.m[4] = v285;
                    v287 = *(float *)(536 * v6 + v284 + 228);
                    v356.m[5] = v286;
                    v288 = *(float *)(536 * v6 + v284 + 244);
                    v356.m[1] = v287;
                    v289 = *(float *)(536 * v6 + v284 + 236);
                    v356.m[2] = v288;
                    v290 = *(float *)(536 * v6 + v284 + 252);
                    v356.m[9] = v289;
                    v291 = *(float *)(536 * v6 + v284 + 248);
                    v356.m[10] = v290;
                    v356.m[6] = v291;
                    v356.m[11] = 0.0;
                    v356.m[15] = 1.0;
                    OGLMatrix::multiplyFastRotate(&mIn, &mIn, &v356);
                    OGLMatrix::multiplyFastRotate(&mIn, &mIn, (OGLMatrix *)(*(_QWORD *)(v293 + 104) + (v292 << 6)));
                    OGLQuat::matrixToQuaternion(&v361, &mIn);
                    v294 = v12->m_iNo;
                    v295 = this->m_pFigure->m_pBone;
                    x = v295[v294].m_aBindPose.m_vPrevTrans.x;
                    v297 = v295[v294].m_aBindPose.m_vPrevTrans.y;
                    v298 = v295[v294].m_aBindPose.m_vPrevTrans.z;
                    if ( v329 )
                    {
                      OGLQuat::getRotateEulerFast(&v361, &rfX, &rfY, &rfZ);
                      v299 = rfX;
                      if ( (v18 & 0x10) != 0 )
                      {
                        LODWORD(v299) = LODWORD(rfX) ^ v15.m128_i32[0];
                        LODWORD(rfX) ^= v15.m128_i32[0];
                      }
                      if ( (v18 & 0x100) != 0 )
                      {
                        rfX = v14 - v299;
                        v299 = v14 - v299;
                      }
                      if ( (v18 & 0x1000) != 0 )
                      {
                        rfX = v13 - v299;
                        v299 = v13 - v299;
                      }
                      v300 = rfY;
                      if ( (v18 & 0x20) != 0 )
                      {
                        LODWORD(v300) = LODWORD(rfY) ^ v15.m128_i32[0];
                        LODWORD(rfY) ^= v15.m128_i32[0];
                      }
                      if ( (v18 & 0x200) != 0 )
                      {
                        rfY = v14 - v300;
                        v300 = v14 - v300;
                      }
                      if ( (v18 & 0x2000) != 0 )
                      {
                        rfY = v13 - v300;
                        v300 = v13 - v300;
                      }
                      v301 = rfZ;
                      if ( (v18 & 0x40) != 0 )
                      {
                        LODWORD(v301) = LODWORD(rfZ) ^ v15.m128_i32[0];
                        LODWORD(rfZ) ^= v15.m128_i32[0];
                      }
                      if ( (v18 & 0x400) != 0 )
                      {
                        rfZ = v14 - v301;
                        v301 = v14 - v301;
                      }
                      if ( (v18 & 0x4000) != 0 )
                      {
                        rfZ = v13 - v301;
                        v301 = v13 - v301;
                      }
                      OGLQuat::setRotateEuler(&v361, v299, v300, v301);
                      if ( (v18 & 1) != 0 )
                        LODWORD(x) ^= v15.m128_i32[0];
                      if ( (v18 & 2) != 0 )
                        LODWORD(v297) ^= v15.m128_i32[0];
                      if ( (v18 & 4) != 0 )
                        LODWORD(v298) ^= v15.m128_i32[0];
                    }
                    this->m_pBoneInfo[v294].pPrevStack[0].m_vPrevRot = v361;
                    v302 = v12->m_iNo;
                    v303 = v302;
                    v304 = v302;
                    v305 = this->m_pFigure->m_pBone;
                    v306 = this->m_pBoneInfo;
                    v306[v304].pPrevStack[0].m_vPrevScale.x = v305[v303].m_aBindPose.m_vPrevScale.x;
                    v306[v304].pPrevStack[0].m_vPrevScale.y = v305[v303].m_aBindPose.m_vPrevScale.y;
                    v306[v304].pPrevStack[0].m_vPrevScale.z = v305[v303].m_aBindPose.m_vPrevScale.z;
                    v307 = &this->m_pBoneInfo[v12->m_iNo];
                    v307->pPrevStack[0].m_vPrevTrans.x = x;
                    v307->pPrevStack[0].m_vPrevTrans.y = v297;
                    v307->pPrevStack[0].m_vPrevTrans.z = v298;
                  }
                }
                if ( m_iSecCount <= 0 )
                {
                  v308 = this->m_pBoneInfo;
                  v309 = *(_OWORD *)&pBoneMat.m[4];
                  v310 = v6;
                  *(_OWORD *)v308[v310].mRot.m = *(_OWORD *)pBoneMat.m;
                  v311 = *(_OWORD *)&pBoneMat.m[8];
                  *(_OWORD *)&v308[v310].mRot.m[4] = v309;
                  v312 = *(_OWORD *)&pBoneMat.m[12];
                  *(_OWORD *)&v308[v310].mRot.m[8] = v311;
                  *(_OWORD *)&v308[v310].mRot.m[12] = v312;
                  if ( *(_DWORD *)(v9 + 4) )
                  {
                    OGLMatrix::multiplyFast(&this->m_pBoneInfo[v310].mBone, (OGLMatrix *)(v9 + 32), &pBoneMat);
                    *(&this->m_pBoneInfo->bChangedFlg + v313) = 0;
                  }
                  return;
                }
                m_SecondaryInfo = this->m_SecondaryInfo;
                v334 = --m_iSecCount;
                if ( !m_SecondaryInfo )
                  return;
                v5 = iChildNo;
                goto LABEL_3;
              }
              if ( (v139 & 2) != 0 )
              {
                v142 = v142 * 0.125;
                if ( (v139 & 8) != 0 )
                {
                  if ( v142 >= 0.00019999999 )
                    v139 &= ~2u;
                  else
                    v139 |= 4u;
                  v264 = v316;
                  if ( v316 )
                    v69.m128_f32[0] = v69.m128_f32[0] + v142;
                  else
                    v69.m128_f32[0] = v69.m128_f32[0] - v142;
                  v265 = v321;
                  ++v140;
                  v180 = v323;
                  v161 = v138;
                  v179 = v324;
                  v161.m128_f32[0] = v138.m128_f32[0] + v69.m128_f32[0];
                  v184 = v319;
                  v182 = v318;
                  v185 = v327;
                  v186 = v341;
                  v165 = v345;
                  v317 = v140;
                  if ( v140 >= v321 )
                    goto LABEL_303;
                }
                else
                {
                  if ( v142 >= 0.00019999999 )
                    v139 &= ~2u;
                  else
                    v139 |= 4u;
                  if ( v138.m128_f32[0] >= 0.0 )
                    v69.m128_f32[0] = v69.m128_f32[0] - v142;
                  else
                    v69.m128_f32[0] = v69.m128_f32[0] + v142;
                  v265 = v321;
                  ++v140;
                  v180 = v323;
                  v161 = v138;
                  v179 = v324;
                  v161.m128_f32[0] = v138.m128_f32[0] + v69.m128_f32[0];
                  v184 = v319;
                  v182 = v318;
                  v185 = v327;
                  v186 = v341;
                  v165 = v345;
                  v317 = v140;
                  if ( v140 >= v321 )
                    goto LABEL_302;
                }
              }
              else
              {
                v265 = v321;
LABEL_302:
                v264 = v316;
LABEL_303:
                if ( (v139 & 3) == 1 )
                {
                  v142 = v142 * 0.25;
                  v139 |= 2u;
                  v332 = -1;
                }
                if ( (v139 & 6) != 2 )
                  goto LABEL_312;
                v266 = v138.m128_f32[0] < 0.0;
                if ( (v139 & 8) != 0 )
                  v266 = v264;
                v69.m128_f32[0] = v266 ? v69.m128_f32[0] - v142 : v69.m128_f32[0] + v142;
                v180 = v323;
                ++v140;
                v179 = v324;
                v161 = v138;
                v184 = v319;
                v161.m128_f32[0] = v138.m128_f32[0] + v69.m128_f32[0];
                v182 = v318;
                v185 = v327;
                v186 = v341;
                v165 = v345;
                v317 = v140;
                if ( v140 >= v265 )
                  goto LABEL_312;
              }
            }
            else
            {
              v216 = pOutMat.m[14];
              v217 = 0i64;
              v218 = pOutMat.m[13];
              v219 = pOutMat.m[12];
              v220 = pOutMat.m[10];
              v221 = pOutMat.m[9];
              v222 = pOutMat.m[8];
              while ( 1 )
              {
                m_iSecondaryBoneRIdx = this->m_iSecondaryBoneRIdx;
                v224 = 0;
                v225 = *(_QWORD *)(v215 + v20 + 72);
                v226 = *(int *)(v217 + v225);
                if ( m_iSecondaryBoneRIdx )
                {
                  v228 = m_iSecondaryBoneRIdx[v226];
                }
                else
                {
                  v227 = OGLModel::convertBoneSecondaryToFigure(this, v226);
                  v215 = v326;
                  v228 = v227;
                }
                v229 = *(_DWORD *)(v217 + v225 + 20);
                *(_QWORD *)&Line2S.x = 0i64;
                Line2S.z = 0.0;
                *(_QWORD *)&Line1S.x = 0i64;
                Line1S.z = 0.0;
                if ( (v229 & 0x210) == 0 && (*(_DWORD *)(v215 + v20 + 40) & 0x210) == 0 )
                {
                  OGLModel::getBoneMatrix(
                    this,
                    &mat1,
                    &pLen,
                    v228,
                    *(float *)(v217 + v225 + 8),
                    *(float *)(v217 + v225 + 16),
                    &this->m_pBoneInfo[v228].mRot);
                  v230 = OGLSecondary::checkOBBCollision(
                           &pOutMat,
                           *(float *)(v326 + v20 + 4),
                           *(float *)(v326 + v20 + 12),
                           fLen,
                           &mat1,
                           *(float *)(v217 + v225 + 4),
                           *(float *)(v217 + v225 + 12),
                           pLen);
                  v215 = v326;
                  goto LABEL_239;
                }
                v231 = *(_DWORD *)(v215 + v20 + 40);
                if ( (v231 & 0x10) != 0 )
                {
                  Line2S.x = v219;
                  Line2S.y = v218;
                  Line2S.z = v216;
                  if ( (v229 & 0x10) != 0 )
                  {
                    v224 = 0;
                    OGLModel::getBoneMatrix(
                      this,
                      &mat1,
                      v228,
                      *(float *)(v217 + v225 + 16),
                      &this->m_pBoneInfo[v228].mRot,
                      0.0,
                      0i64,
                      0i64);
                    v215 = v326;
                    Line1S.z = mat1.m[14];
                    v232 = (float)(*(float *)(v326 + v20 + 4) + *(float *)(v217 + v225 + 4))
                         * (float)(*(float *)(v326 + v20 + 4) + *(float *)(v217 + v225 + 4));
                    *(_QWORD *)&Line1S.x = *(_QWORD *)&mat1.m[12];
                    LOBYTE(v224) = v232 > (float)((float)((float)((float)(v219 - mat1.m[12]) * (float)(v219 - mat1.m[12]))
                                                        + (float)((float)(v218 - mat1.m[13]) * (float)(v218 - mat1.m[13])))
                                                + (float)((float)(v216 - mat1.m[14]) * (float)(v216 - mat1.m[14])));
                    goto LABEL_245;
                  }
                  if ( (v229 & 0x200) != 0 )
                  {
                    OGLModel::getBoneMatrix(
                      this,
                      &mat1,
                      v228,
                      *(float *)(v217 + v225 + 16),
                      &this->m_pBoneInfo[v228].mRot,
                      *(float *)(v217 + v225 + 8),
                      &v350,
                      &pLen);
                    p_Line2S = &Line2S;
                    v234 = &Line2S;
                    p_Line1E = &Line1E;
                    p_Line1S = &Line1S;
                    vLine.x = vLine.x * 0.0099999998;
                    vLine.y = vLine.y * 0.0099999998;
                    vLine.z = vLine.z * 0.0099999998;
                    Line1S = *(OGLVec3 *)&mat1.m[12];
                    Line1E.y = v350.y + mat1.m[13];
                    Line1E.x = v350.x + mat1.m[12];
                    Line1E.z = v350.z + mat1.m[14];
LABEL_225:
                    v237 = OGLSecondary::calcDistSegmentSegment(p_Line1S, p_Line1E, v234, p_Line2S);
                    v215 = v326;
                    v224 = (float)((float)(*(float *)(v326 + v20 + 4) + *(float *)(v217 + v225 + 4))
                                 * (float)(*(float *)(v326 + v20 + 4) + *(float *)(v217 + v225 + 4))) >= (float)(v237 * v237);
                    goto LABEL_245;
                  }
                  OGLModel::getBoneMatrix(
                    this,
                    &mat1,
                    &pLen,
                    v228,
                    *(float *)(v217 + v225 + 8),
                    *(float *)(v217 + v225 + 16),
                    &this->m_pBoneInfo[v228].mRot);
                  v238 = *(_DWORD *)(v217 + v225 + 12);
                  v239 = &obb[20];
                  v240 = *(_DWORD *)(v217 + v225 + 4);
                  v241 = 3i64;
                  do
                  {
                    *((_QWORD *)v239 - 1) = 0i64;
                    *(_DWORD *)v239 = 0;
                    v239 += 12;
                    --v241;
                  }
                  while ( v241 );
LABEL_238:
                  *(float *)&obb[12] = mat1.m[0];
                  *(float *)&obb[20] = mat1.m[2];
                  *(float *)&obb[16] = mat1.m[1];
                  *(float *)&obb[28] = mat1.m[5];
                  *(float *)&obb[24] = mat1.m[4];
                  *(float *)&obb[36] = mat1.m[8];
                  *(float *)&obb[32] = mat1.m[6];
                  *(float *)&obb[44] = mat1.m[10];
                  *(float *)&obb[40] = mat1.m[9];
                  *(float *)obb = mat1.m[12];
                  *(_QWORD *)&obb[52] = __PAIR64__(LODWORD(pLen), v238);
                  v245 = *(float *)(v326 + v20 + 4);
                  *(float *)&obb[4] = mat1.m[13];
                  *(_DWORD *)&obb[48] = v240;
                  *(float *)&obb[8] = mat1.m[14];
                  v230 = OGLSecondary::ColObbSphere((OBB *)obb, &Line2S, v245);
LABEL_239:
                  if ( v230 )
                    v224 = 1;
                  goto LABEL_245;
                }
                if ( (v231 & 0x200) != 0 )
                {
                  Line2S.x = v219;
                  Line2S.y = v218;
                  Line2S.z = v216;
                  if ( (v229 & 0x10) != 0 )
                  {
                    OGLModel::getBoneMatrix(
                      this,
                      &mat1,
                      v228,
                      *(float *)(v217 + v225 + 16),
                      &this->m_pBoneInfo[v228].mRot,
                      *(float *)(v217 + v225 + 8),
                      &v350,
                      0i64);
                    p_Line2S = (OGLVec3 *)v369;
                    v234 = &Line1S;
                    p_Line1E = (OGLVec3 *)v370;
                    p_Line1S = &Line2S;
                    *(float *)v370 = vLine.x + v219;
                    *(float *)&v370[1] = vLine.y + v218;
                    *(float *)&v370[2] = vLine.z + v216;
                    v350.x = v350.x * 0.0099999998;
                    v350.z = v350.z * 0.0099999998;
                    v350.y = v350.y * 0.0099999998;
                    Line1S = *(OGLVec3 *)&mat1.m[12];
                    *(float *)v369 = v350.x + mat1.m[12];
                    *(float *)&v369[1] = v350.y + mat1.m[13];
                    *(float *)&v369[2] = v350.z + mat1.m[14];
                    goto LABEL_225;
                  }
                  if ( (v229 & 0x200) == 0 )
                  {
                    OGLModel::getBoneMatrix(
                      this,
                      &mat1,
                      &pLen,
                      v228,
                      *(float *)(v217 + v225 + 8),
                      *(float *)(v217 + v225 + 16),
                      &this->m_pBoneInfo[v228].mRot);
                    v238 = *(_DWORD *)(v217 + v225 + 12);
                    v243 = &obb[20];
                    v240 = *(_DWORD *)(v217 + v225 + 4);
                    v244 = 3i64;
                    do
                    {
                      *((_QWORD *)v243 - 1) = 0i64;
                      *(_DWORD *)v243 = 0;
                      v243 += 12;
                      --v244;
                    }
                    while ( v244 );
                    goto LABEL_238;
                  }
                  OGLModel::getBoneMatrix(
                    this,
                    &mat1,
                    v228,
                    *(float *)(v217 + v225 + 16),
                    &this->m_pBoneInfo[v228].mRot,
                    *(float *)(v217 + v225 + 8),
                    &v350,
                    &pLen);
                  Line1S = *(OGLVec3 *)&mat1.m[12];
                  v372.y = vLine.y + v218;
                  v372.x = vLine.x + v219;
                  Line2E.x = v350.x + mat1.m[12];
                  v372.z = vLine.z + v216;
                  Line2E.z = v350.z + mat1.m[14];
                  Line2E.y = v350.y + mat1.m[13];
                  v242 = OGLSecondary::calcDistSegmentSegment(&Line2S, &v372, &Line1S, &Line2E);
                  v215 = v326;
                  v224 = 0;
                  if ( (float)((float)(*(float *)(v326 + v20 + 4) + *(float *)(v217 + v225 + 4))
                             * (float)(*(float *)(v326 + v20 + 4) + *(float *)(v217 + v225 + 4))) >= (float)(v242 * v242) )
                    v224 = 2;
                }
                else
                {
                  OGLModel::getBoneMatrix(
                    this,
                    &mat1,
                    v228,
                    *(float *)(v217 + v225 + 16),
                    &this->m_pBoneInfo[v228].mRot,
                    0.0,
                    0i64,
                    0i64);
                  v246 = &obb[20];
                  v247 = 3i64;
                  Line1S.x = mat1.m[12];
                  Line1S.z = mat1.m[14];
                  v248 = *(_DWORD *)(v326 + v20 + 12);
                  Line1S.y = mat1.m[13];
                  v249 = *(_DWORD *)(v326 + v20 + 4);
                  do
                  {
                    *((_QWORD *)v246 - 1) = 0i64;
                    *(_DWORD *)v246 = 0;
                    v246 += 12;
                    --v247;
                  }
                  while ( v247 );
                  *(float *)&obb[12] = pOutMat.m[0];
                  *(float *)&obb[16] = pOutMat.m[1];
                  *(float *)&obb[20] = pOutMat.m[2];
                  *(float *)&obb[24] = pOutMat.m[4];
                  *(float *)&obb[28] = pOutMat.m[5];
                  *(float *)&obb[32] = pOutMat.m[6];
                  v250 = *(float *)(v217 + v225 + 4);
                  *(float *)&obb[36] = v222;
                  *(float *)&obb[40] = v221;
                  *(float *)&obb[44] = v220;
                  *(_QWORD *)&obb[48] = __PAIR64__(v248, v249);
                  *(float *)&obb[56] = fLen;
                  *(float *)obb = v219;
                  *(float *)&obb[4] = v218;
                  *(float *)&obb[8] = v216;
                  if ( OGLSecondary::ColObbSphere((OBB *)obb, &Line1S, v250) )
                    v224 = 1;
                }
LABEL_245:
                v187 = iChildNo;
                v186 = v341;
                if ( iChildNo == this->m_iBoneNo )
                {
                  v251 = this->m_SecondaryInfo;
                  v252 = *(_OWORD *)&mat1.m[4];
                  *(_OWORD *)((char *)v251->mBaseMat.m + v341) = *(_OWORD *)mat1.m;
                  v253 = *(_OWORD *)&mat1.m[8];
                  *(_OWORD *)((char *)&v251->mBaseMat.m[4] + v186) = v252;
                  v254 = *(_OWORD *)&mat1.m[12];
                  *(_OWORD *)((char *)&v251->mBaseMat.m[8] + v186) = v253;
                  *(_OWORD *)((char *)&v251->mBaseMat.m[12] + v186) = v254;
                  v255 = this->m_SecondaryInfo;
                  LODWORD(v251) = *(_DWORD *)(v217 + v225 + 4);
                  *(float *)((char *)&v255->vScale.y + v186) = *(float *)(v217 + v225 + 12);
                  *(float *)((char *)&v255->vScale.z + v186) = pLen;
                  *(_DWORD *)((char *)&v255->vScale.x + v186) = (_DWORD)v251;
                  if ( !v224 )
                    goto LABEL_278;
                  *(int *)((char *)&this->m_SecondaryInfo->iHitNo + v186) = v228;
                }
                if ( !v224 || (v139 & 0x44) != 0 )
                {
LABEL_278:
                  v140 = v317;
                  goto LABEL_279;
                }
                if ( v224 == 1 )
                {
                  v256 = v139 & 0xFFFFFFF7;
                  v257 = v256;
                  v258 = v256;
                  v139 = v256 | 1;
                  if ( (v257 & 0xF) != 0 )
                    v139 = v258;
                  if ( v138.m128_f32[0] <= 0.0 )
                    v69.m128_f32[0] = v69.m128_f32[0] + v142;
                  else
                    v69.m128_f32[0] = v69.m128_f32[0] - v142;
                  v161 = v138;
                  v140 = v317 + 1;
                  v161.m128_f32[0] = v138.m128_f32[0] + v69.m128_f32[0];
                  v317 = v140;
                  if ( v140 < v321 )
                    goto LABEL_276;
                  goto LABEL_279;
                }
                if ( v224 != 2 )
                  goto LABEL_278;
                v259 = v332;
                v139 |= 8u;
                if ( (_BYTE)v347 && v332 == iMotionNo )
                {
                  v161 = v138;
                  v316 = !v316;
                  v259 = v332 + 1;
                  v139 |= 2u;
                  ++v332;
                  if ( (*(_BYTE *)(v215 + v20 + 40) & 0xE) != 0 )
                    v69.m128_f32[0] = v69.m128_f32[0] * 0.75;
                  else
                    v69.m128_f32[0] = v69.m128_f32[0] * 0.60000002;
                  v140 = v317;
                  v260 = iMotionNo + 16;
                  v261 = v321;
                  v69 = _mm_xor_ps(v69, (__m128)_xmm);
                  iMotionNo += 16;
                  if ( v317 < v321 )
                  {
                    iMotionNo = v260;
                    goto LABEL_277;
                  }
                }
                else
                {
                  v261 = v321;
                  v140 = v317;
                }
                v262 = v139 | 1;
                if ( (v139 & 7) != 0 )
                  v262 = v139;
                v139 = v262;
                if ( v316 )
                  v69.m128_f32[0] = v69.m128_f32[0] + v142;
                else
                  v69.m128_f32[0] = v69.m128_f32[0] - v142;
                ++v140;
                v263 = v259 + 1;
                v317 = v140;
                v161 = v138;
                if ( v259 < 0 )
                  v263 = v259;
                v161.m128_f32[0] = v138.m128_f32[0] + v69.m128_f32[0];
                v332 = v263;
                if ( v140 < v261 )
                  break;
LABEL_279:
                v217 += 24i64;
                if ( ++iAniboneNo >= *(_DWORD *)(v215 + v20 + 68) )
                  goto LABEL_282;
              }
              v332 = v263;
LABEL_276:
              *(int *)((char *)&this->m_SecondaryInfo->iStateWorkFlg + v186) |= 0x40u;
LABEL_277:
              v180 = v323;
              v179 = v324;
              v184 = v319;
              v182 = v318;
              v185 = v327;
              v165 = v345;
            }
          }
        }
        else
        {
          if ( v206 )
            v184 = v184 - v185;
          else
            v184 = v184 + v185;
          ++v140;
          v319 = v184;
          v161 = v138;
          v317 = v140;
          v161.m128_f32[0] = v138.m128_f32[0] + v184;
          if ( v140 >= 30 )
            goto LABEL_201;
          v186 = v341;
          v165 = v345;
          *(int *)((char *)&v203->iStateWorkFlg + v341) |= 0x20u;
        }
      }
    }
    v15.m128_i32[0] = _xmm;
    goto LABEL_158;
  }
  v93 = iChildNo;
  v94 = this;
LABEL_349:
  OGLModel::setBoneTransNotSecOnce(v94, v93, v22);
}

unsigned __int8 __fastcall OGLModel::setExternalMotion(OGLModel *this, OGLModel *pModel, int index)
{
  OGLMotion *m_pExternalMotion; // rax
  __int64 m_iCurrentMotion; // rax
  OGLMotion *v6; // rdx
  bool v7; // zf
  unsigned __int8 result; // al

  m_pExternalMotion = this->m_pExternalMotion;
  if ( m_pExternalMotion )
  {
    this->m_pMotion[0] = m_pExternalMotion;
    this->m_pExternalMotion = 0i64;
    this->m_iCurrentExternalMotion = 0;
  }
  else
  {
    m_iCurrentMotion = this->m_iCurrentMotion;
    if ( (_DWORD)m_iCurrentMotion )
    {
      v6 = this->m_pMotion[0];
      this->m_pMotion[0] = this->m_pMotion[m_iCurrentMotion];
      this->m_pMotion[this->m_iCurrentMotion] = v6;
    }
  }
  v7 = pModel->m_iCurrentMotion == 0;
  this->m_pExternalMotion = this->m_pMotion[0];
  if ( v7 )
  {
    this->m_pMotion[0] = pModel->m_pMotion[0];
    result = 1;
  }
  else
  {
    result = 1;
    this->m_pMotion[0] = pModel->m_pMotion[this->m_iCurrentMotion];
  }
  this->m_iCurrentExternalMotion = 0;
  return result;
}

void __fastcall OGLModel::setFigure(OGLModel *this, OGLFigure *figure, unsigned __int64 vaoFlg)
{
  unsigned int v5; // eax
  void *m_pfVertexBuffer; // rdx
  _OGLModelBone *v7; // rsi
  Framework::GLManager *v8; // rbp
  void *m_pfWorldBuffer; // rdx
  int v10; // ebx
  OGLMaterial *m_pMaterial; // rcx
  unsigned __int8 *m_bMaterialVisible; // rcx
  unsigned __int8 *m_bMaterialShadowVisible; // rcx
  void *v14; // rax
  float *v15; // rax
  std::tuple<<lambda_fd381105a0b1a60e3289d5f824c9282b> > *m_ucMaterialCount_low; // rax
  __int64 v17; // rbx
  __int64 v18; // rax
  unsigned __int64 v19; // kr00_8
  bool v20; // cf
  unsigned __int64 v21; // rax
  _QWORD *v22; // rax
  OGLMaterial *v23; // rbp
  unsigned int v24; // ebx
  int v25; // ebp
  __int64 v26; // r14
  _OGLModelBone *m_pBoneInfo; // rcx
  _QWORD *v28; // rbx
  unsigned __int64 m_uiBoneCount; // rbx
  __int64 v30; // rax
  unsigned __int64 v31; // rax
  unsigned __int64 *v32; // rax
  signed int v33; // ebp
  __int64 v34; // rbx
  __int64 v35; // rsi
  __int64 v36; // r14
  OGLBone *m_pBone; // rcx
  _OGLModelBone *v38; // rdx
  Framework::GLManager *v39; // rbx
  void *m_pfPreVertexBuffer; // rdx
  void *v41; // rdx
  void *m_pfPrevWorldBuffer; // rdx
  void *m_pfIndexBuffer; // rdx
  Vector4Unaligned *m_pmPrevBoneWorld; // rcx
  __int64 v45; // rbx
  Vector4Unaligned *m_pmBoneWorld; // rcx
  char *m_pbBoneMirrorFlg; // rcx
  char *m_pbBoneMirrorFlg2; // rcx
  _OGLModelBone *v49; // rcx
  _QWORD *v50; // rbx
  int v51; // ebx
  OGLMaterial *v52; // rcx
  int *p_m_iRenderNo; // rbx
  unsigned __int8 *v54; // rcx
  unsigned __int8 *v55; // rcx
  char *m_cFollowBone; // rcx
  char *m_cFollowTargetBone; // rcx
  int *m_iMirrorBoneIdx; // rcx
  int *m_iMirrorBoneRIdx; // rcx
  int *m_iSecondaryBoneIdx; // rcx
  int *m_iSecondaryBoneRIdx; // rcx
  int *m_iFigureBoneIdx; // rcx
  void **m_iMotionBoneIdx; // r14
  int *m_iMotionCount; // r12
  __int64 v65; // r13
  int v66; // ebp
  __int64 v67; // rbx
  void *v68; // rcx
  Framework::MemoryManager *p_inV; // rbx
  MeshVertexInfo *v70; // rax
  MeshVertexInfoComp *v71; // rcx
  std::unique_ptr<std::tuple<<lambda_fd381105a0b1a60e3289d5f824c9282b> >> *v72; // rax
  unsigned __int64 v73; // r8
  float *v74; // rax
  float *v75; // rax
  signed int v76; // eax
  unsigned __int64 v77; // rdx
  unsigned __int64 v78; // r8
  unsigned int m_usIndexCount; // eax
  void *v80; // rax
  void *v81; // rax
  unsigned __int64 v82; // rax
  unsigned __int64 v83; // rbp
  __int64 v84; // rax
  unsigned __int64 v85; // rax
  OGLFigure *v86; // rax
  _OGLModelBone *p_m_pfVertexCoord; // rbx
  signed int v88; // er14
  __int64 v89; // rbx
  __int64 v90; // rbp
  __int64 v91; // r12
  OGLBone *v92; // rcx
  _OGLModelBone *v93; // rdx
  __int64 v94; // rax
  __int64 v95; // rbx
  __int64 v96; // rax
  unsigned __int64 v97; // kr10_8
  unsigned __int64 v98; // rax
  OGLFigure *v99; // rax
  OGLMaterial *v100; // rbp
  unsigned int v101; // ebx
  __int64 v102; // r14
  OGLModel::setFigure::__l2::<lambda_fd381105a0b1a60e3289d5f824c9282b> v103; // [rsp+40h] [rbp-68h] BYREF
  _Thrd_imp_t _Thr; // [rsp+60h] [rbp-48h] BYREF
  std::unique_ptr<std::tuple<<lambda_fd381105a0b1a60e3289d5f824c9282b> >> result; // [rsp+B8h] [rbp+10h] BYREF
  unsigned __int64 *v106; // [rsp+C8h] [rbp+20h]

  if ( figure )
  {
    v5 = figure->m_uiStateFlg & 8;
    m_pfVertexBuffer = this->m_pfVertexBuffer;
    v7 = 0i64;
    if ( (_BYTE)v5 )
    {
      v8 = Framework::GLManager::glm;
      this->m_uiModeFlg |= 0x400u;
      if ( m_pfVertexBuffer )
      {
        if ( this->m_bAllocatedVertexPointer )
          Framework::MemoryManager::release(&v8->allocateStaticBuffers, m_pfVertexBuffer);
        this->m_bAllocatedVertexPointer = 0;
        this->m_pfVertexBuffer = 0i64;
      }
      m_pfWorldBuffer = this->m_pfWorldBuffer;
      if ( m_pfWorldBuffer )
      {
        Framework::MemoryManager::release(&v8->allocateStaticBuffers, m_pfWorldBuffer);
        this->m_pfWorldBuffer = 0i64;
      }
      if ( this->m_pMaterial )
      {
        v10 = 0;
        if ( this->m_ucMaterialCount )
        {
          do
            OGLMaterial::finalize(&this->m_pMaterial[v10++]);
          while ( v10 < this->m_ucMaterialCount );
        }
        m_pMaterial = this->m_pMaterial;
        if ( m_pMaterial )
        {
          OGLMaterial::`vector deleting destructor'(m_pMaterial, (unsigned int)m_pfWorldBuffer);
          this->m_pMaterial = 0i64;
        }
      }
      this->m_ucMaterialCount = 0;
      m_bMaterialVisible = this->m_bMaterialVisible;
      if ( m_bMaterialVisible )
      {
        operator delete(m_bMaterialVisible, (unsigned __int64)m_pfWorldBuffer);
        this->m_bMaterialVisible = 0i64;
      }
      m_bMaterialShadowVisible = this->m_bMaterialShadowVisible;
      if ( m_bMaterialShadowVisible )
      {
        operator delete(m_bMaterialShadowVisible, (unsigned __int64)m_pfWorldBuffer);
        this->m_bMaterialShadowVisible = 0i64;
      }
      this->m_bAllocatedVertexPointer = 0;
      v14 = figure->m_pfVertexBuffer;
      this->m_pfVertexBuffer = v14;
      this->m_pfVertexCoord = (float *)v14;
      this->m_pfTexCoord[0] = (float *)v14;
      this->m_pfTexCoord[1] = (float *)this->m_pfVertexBuffer;
      this->m_pfTexCoord[2] = (float *)this->m_pfVertexBuffer;
      this->m_pfTexCoord[3] = (float *)this->m_pfVertexBuffer;
      v15 = (float *)this->m_pfVertexBuffer;
      this->m_pfNormalCoord = v15;
      this->m_pfTangentCoord = v15;
      this->m_piVerColor = (unsigned int *)v15;
      this->m_pfWorldBuffer = Framework::MemoryManager::allocate(&v8->allocateStaticBuffers, 0x40ui64, vaoFlg);
      if ( figure->m_ucMaterialCount )
      {
        m_ucMaterialCount_low = (std::tuple<<lambda_fd381105a0b1a60e3289d5f824c9282b> > *)LOBYTE(figure->m_ucMaterialCount);
        this->m_ucMaterialCount = (unsigned __int8)m_ucMaterialCount_low;
        v17 = (unsigned int)m_ucMaterialCount_low;
        result._Mypair._Myval2 = m_ucMaterialCount_low;
        v19 = (unsigned int)m_ucMaterialCount_low;
        v18 = 1128i64 * (unsigned int)m_ucMaterialCount_low;
        if ( !is_mul_ok(v19, 0x468ui64) )
          v18 = -1i64;
        v20 = __CFADD__(v18, 8i64);
        v21 = v18 + 8;
        if ( v20 )
          v21 = -1i64;
        v22 = operator new[](v21);
        v106 = v22;
        if ( v22 )
        {
          *v22 = v17;
          v23 = (OGLMaterial *)(v22 + 1);
          `eh vector constructor iterator'(
            v22 + 1,
            0x468ui64,
            (unsigned int)v17,
            (void (__fastcall *)(void *))OGLMaterial::OGLMaterial,
            (void (__fastcall *)(void *))OGLMaterial::~OGLMaterial);
        }
        else
        {
          v23 = 0i64;
        }
        this->m_pMaterial = v23;
        this->m_bMaterialVisible = (unsigned __int8 *)operator new[](this->m_ucMaterialCount);
        this->m_bMaterialShadowVisible = (unsigned __int8 *)operator new[](this->m_ucMaterialCount);
        v24 = 32;
        if ( SLOBYTE(figure->m_iFormatType) < 0 )
          v24 = 16;
        v25 = 0;
        if ( this->m_ucMaterialCount )
        {
          v26 = 0i64;
          do
          {
            this->m_bMaterialShadowVisible[v26] = 1;
            this->m_bMaterialVisible[v26] = 1;
            OGLMaterial::copy(&this->m_pMaterial[v25], &figure->m_pMaterial[v25], v24, v24);
            ++v25;
            ++v26;
          }
          while ( v25 < this->m_ucMaterialCount );
        }
      }
      m_pBoneInfo = this->m_pBoneInfo;
      if ( m_pBoneInfo )
      {
        v28 = (_QWORD *)&m_pBoneInfo[-1].fMotOffRotate[1].m[14];
        `eh vector destructor iterator'(
          m_pBoneInfo,
          0x218ui64,
          *(_QWORD *)&m_pBoneInfo[-1].fMotOffRotate[1].m[14],
          (void (__fastcall *)(void *))_OGLModelBone::~_OGLModelBone);
        operator delete[](v28, 536i64 * *v28 + 8);
        this->m_pBoneInfo = 0i64;
      }
      m_uiBoneCount = figure->m_uiBoneCount;
      result._Mypair._Myval2 = (std::tuple<<lambda_fd381105a0b1a60e3289d5f824c9282b> > *)m_uiBoneCount;
      v30 = 536 * m_uiBoneCount;
      if ( !is_mul_ok(m_uiBoneCount, 0x218ui64) )
        v30 = -1i64;
      v20 = __CFADD__(v30, 8i64);
      v31 = v30 + 8;
      if ( v20 )
        v31 = -1i64;
      v32 = (unsigned __int64 *)operator new[](v31);
      v106 = v32;
      if ( v32 )
      {
        *v32 = m_uiBoneCount;
        v7 = (_OGLModelBone *)(v32 + 1);
        `eh vector constructor iterator'(
          v32 + 1,
          0x218ui64,
          (unsigned int)m_uiBoneCount,
          (void (__fastcall *)(void *))_OGLModelBone::_OGLModelBone,
          (void (__fastcall *)(void *))_OGLModelBone::~_OGLModelBone);
      }
      this->m_pBoneInfo = v7;
      v33 = figure->m_uiBoneCount - 1;
      if ( v33 >= 0 )
      {
        v34 = v33;
        v35 = v33;
        v36 = v34 * 536;
        do
        {
          _OGLModelBone::init((_OGLModelBone *)((char *)this->m_pBoneInfo + v36));
          m_pBone = figure->m_pBone;
          v38 = this->m_pBoneInfo;
          *(_QWORD *)v38[v34].mRot.m = 0i64;
          *(_QWORD *)&v38[v34].mRot.m[2] = 0i64;
          *(_QWORD *)&v38[v34].mRot.m[4] = 0i64;
          *(_QWORD *)&v38[v34].mRot.m[6] = 0i64;
          *(_QWORD *)&v38[v34].mRot.m[8] = 0i64;
          *(_QWORD *)&v38[v34].mRot.m[10] = 0i64;
          *(_QWORD *)&v38[v34].mRot.m[12] = 0i64;
          *(_QWORD *)&v38[v34].mRot.m[14] = 0i64;
          v38[v34].mRot.m[0] = 1.0;
          v38[v34].mRot.m[12] = m_pBone[v35].m_vTransform.x;
          v38[v34].mRot.m[5] = 1.0;
          v38[v34].mRot.m[13] = m_pBone[v35].m_vTransform.y;
          v38[v34].mRot.m[10] = 1.0;
          v38[v34].mRot.m[14] = m_pBone[v35].m_vTransform.z;
          v38[v34].mRot.m[15] = 1.0;
          v36 -= 536i64;
          --v35;
          --v34;
          --v33;
        }
        while ( v33 >= 0 );
      }
      this->m_pFigure = figure;
      this->m_createBuffersReq = CreateBuffersRequest_NoMotion;
    }
    else
    {
      v39 = Framework::GLManager::glm;
      result._Mypair._Myval2 = (std::tuple<<lambda_fd381105a0b1a60e3289d5f824c9282b> > *)Framework::GLManager::glm;
      if ( m_pfVertexBuffer )
      {
        if ( this->m_bAllocatedVertexPointer )
          Framework::MemoryManager::release(&Framework::GLManager::glm->allocateStaticBuffers, m_pfVertexBuffer);
        this->m_bAllocatedVertexPointer = 0;
        this->m_pfVertexBuffer = 0i64;
      }
      m_pfPreVertexBuffer = this->m_pfPreVertexBuffer;
      if ( m_pfPreVertexBuffer )
      {
        Framework::MemoryManager::release(&v39->allocateStaticBuffers, m_pfPreVertexBuffer);
        this->m_pfPreVertexBuffer = 0i64;
      }
      v41 = this->m_pfWorldBuffer;
      if ( v41 )
      {
        Framework::MemoryManager::release(&v39->allocateStaticBuffers, v41);
        this->m_pfWorldBuffer = 0i64;
      }
      m_pfPrevWorldBuffer = this->m_pfPrevWorldBuffer;
      if ( m_pfPrevWorldBuffer )
      {
        Framework::MemoryManager::release(&v39->allocateStaticBuffers, m_pfPrevWorldBuffer);
        this->m_pfPrevWorldBuffer = 0i64;
      }
      m_pfIndexBuffer = this->m_pfIndexBuffer;
      if ( m_pfIndexBuffer )
      {
        Framework::MemoryManager::release(&v39->allocateStaticBuffers, m_pfIndexBuffer);
        this->m_pfIndexBuffer = 0i64;
      }
      m_pmPrevBoneWorld = this->m_pmPrevBoneWorld;
      if ( m_pmPrevBoneWorld )
      {
        operator delete(m_pmPrevBoneWorld, (unsigned __int64)m_pfIndexBuffer);
        this->m_pmPrevBoneWorld = 0i64;
      }
      this->m_iBoneStackIndex = 0;
      this->m_bPrevBoneMirrorFlg = 0;
      v45 = 3i64;
      do
      {
        m_pmBoneWorld = this->m_pmBoneWorld;
        if ( m_pmBoneWorld )
        {
          operator delete(m_pmBoneWorld, (unsigned __int64)m_pfIndexBuffer);
          this->m_pmBoneWorld = 0i64;
        }
        --v45;
      }
      while ( v45 );
      m_pbBoneMirrorFlg = this->m_pbBoneMirrorFlg;
      if ( m_pbBoneMirrorFlg )
      {
        operator delete(m_pbBoneMirrorFlg, (unsigned __int64)m_pfIndexBuffer);
        this->m_pbBoneMirrorFlg = 0i64;
      }
      m_pbBoneMirrorFlg2 = this->m_pbBoneMirrorFlg2;
      if ( m_pbBoneMirrorFlg2 )
      {
        operator delete(m_pbBoneMirrorFlg2, (unsigned __int64)m_pfIndexBuffer);
        this->m_pbBoneMirrorFlg2 = 0i64;
      }
      v49 = this->m_pBoneInfo;
      if ( v49 )
      {
        v50 = (_QWORD *)&v49[-1].fMotOffRotate[1].m[14];
        `eh vector destructor iterator'(
          v49,
          0x218ui64,
          *(_QWORD *)&v49[-1].fMotOffRotate[1].m[14],
          (void (__fastcall *)(void *))_OGLModelBone::~_OGLModelBone);
        operator delete[](v50, 536i64 * *v50 + 8);
        this->m_pBoneInfo = 0i64;
      }
      if ( this->m_pMaterial )
      {
        v51 = 0;
        if ( this->m_ucMaterialCount )
        {
          do
            OGLMaterial::finalize(&this->m_pMaterial[v51++]);
          while ( v51 < this->m_ucMaterialCount );
        }
        v52 = this->m_pMaterial;
        if ( v52 )
        {
          p_m_iRenderNo = &v52[-1].m_iRenderNo;
          `eh vector destructor iterator'(
            v52,
            0x468ui64,
            *(_QWORD *)&v52[-1].m_iRenderNo,
            (void (__fastcall *)(void *))OGLMaterial::~OGLMaterial);
          operator delete[](p_m_iRenderNo, 1128i64 * *(_QWORD *)p_m_iRenderNo + 8);
          this->m_pMaterial = 0i64;
        }
      }
      this->m_ucMaterialCount = 0;
      v54 = this->m_bMaterialVisible;
      if ( v54 )
      {
        operator delete(v54, (unsigned __int64)m_pfIndexBuffer);
        this->m_bMaterialVisible = 0i64;
      }
      v55 = this->m_bMaterialShadowVisible;
      if ( v55 )
      {
        operator delete(v55, (unsigned __int64)m_pfIndexBuffer);
        this->m_bMaterialShadowVisible = 0i64;
      }
      this->m_piVerColor = 0i64;
      m_cFollowBone = this->m_cFollowBone;
      if ( m_cFollowBone )
      {
        operator delete(m_cFollowBone, (unsigned __int64)m_pfIndexBuffer);
        this->m_cFollowBone = 0i64;
      }
      m_cFollowTargetBone = this->m_cFollowTargetBone;
      if ( m_cFollowTargetBone )
      {
        operator delete(m_cFollowTargetBone, (unsigned __int64)m_pfIndexBuffer);
        this->m_cFollowTargetBone = 0i64;
      }
      this->m_iMirrorBaseBoneNo = -1;
      m_iMirrorBoneIdx = this->m_iMirrorBoneIdx;
      if ( m_iMirrorBoneIdx )
      {
        operator delete(m_iMirrorBoneIdx, (unsigned __int64)m_pfIndexBuffer);
        this->m_iMirrorBoneIdx = 0i64;
      }
      m_iMirrorBoneRIdx = this->m_iMirrorBoneRIdx;
      if ( m_iMirrorBoneRIdx )
      {
        operator delete(m_iMirrorBoneRIdx, (unsigned __int64)m_pfIndexBuffer);
        this->m_iMirrorBoneRIdx = 0i64;
      }
      m_iSecondaryBoneIdx = this->m_iSecondaryBoneIdx;
      if ( m_iSecondaryBoneIdx )
      {
        operator delete(m_iSecondaryBoneIdx, (unsigned __int64)m_pfIndexBuffer);
        this->m_iSecondaryBoneIdx = 0i64;
      }
      m_iSecondaryBoneRIdx = this->m_iSecondaryBoneRIdx;
      if ( m_iSecondaryBoneRIdx )
      {
        operator delete(m_iSecondaryBoneRIdx, (unsigned __int64)m_pfIndexBuffer);
        this->m_iSecondaryBoneRIdx = 0i64;
      }
      m_iFigureBoneIdx = this->m_iFigureBoneIdx;
      if ( m_iFigureBoneIdx )
      {
        operator delete(m_iFigureBoneIdx, (unsigned __int64)m_pfIndexBuffer);
        this->m_iFigureBoneIdx = 0i64;
      }
      m_iMotionBoneIdx = (void **)this->m_iMotionBoneIdx;
      m_iMotionCount = this->m_iMotionCount;
      v65 = 5i64;
      do
      {
        if ( *m_iMotionBoneIdx )
        {
          v66 = 0;
          if ( *m_iMotionCount > 0 )
          {
            v67 = 0i64;
            do
            {
              v68 = *(void **)((char *)*m_iMotionBoneIdx + v67);
              if ( v68 )
              {
                operator delete(v68, (unsigned __int64)m_pfIndexBuffer);
                *(_QWORD *)((char *)*m_iMotionBoneIdx + v67) = 0i64;
              }
              ++v66;
              v67 += 8i64;
            }
            while ( v66 < *m_iMotionCount );
          }
          if ( *m_iMotionBoneIdx )
          {
            operator delete(*m_iMotionBoneIdx, (unsigned __int64)m_pfIndexBuffer);
            *m_iMotionBoneIdx = 0i64;
          }
        }
        ++m_iMotionCount;
        ++m_iMotionBoneIdx;
        --v65;
      }
      while ( v65 );
      p_inV = (Framework::MemoryManager *)&result._Mypair._Myval2[369]._Myfirst._Val.inV;
      v70 = (MeshVertexInfo *)Framework::MemoryManager::allocate(
                                (Framework::MemoryManager *)&result._Mypair._Myval2[369]._Myfirst._Val.inV,
                                88i64 * figure->m_usVertexCoordCount,
                                vaoFlg);
      this->m_pfVertexBuffer = v70;
      this->m_bAllocatedVertexPointer = 1;
      v71 = (MeshVertexInfoComp *)figure->m_pfVertexBuffer;
      if ( v70 )
      {
        v103.figure = figure;
        v103.outV = v70;
        v103.inV = v71;
        v72 = std::make_unique<std::tuple<_lambda_fd381105a0b1a60e3289d5f824c9282b_>,_lambda_fd381105a0b1a60e3289d5f824c9282b_>(
                &result,
                &v103);
        std::_Launch<std::unique_ptr<std::tuple<_lambda_fd381105a0b1a60e3289d5f824c9282b_>>>(&_Thr, v72);
        if ( result._Mypair._Myval2 )
          operator delete(result._Mypair._Myval2, 0x18ui64);
        v74 = (float *)this->m_pfVertexBuffer;
        this->m_pfVertexCoord = v74;
        this->m_pfTexCoord[0] = v74;
        this->m_pfTexCoord[1] = (float *)this->m_pfVertexBuffer;
        this->m_pfTexCoord[2] = (float *)this->m_pfVertexBuffer;
        this->m_pfTexCoord[3] = (float *)this->m_pfVertexBuffer;
        v75 = (float *)this->m_pfVertexBuffer;
        this->m_pfNormalCoord = v75;
        this->m_pfTangentCoord = v75;
        this->m_piVerColor = (unsigned int *)v75;
        v76 = figure->m_uiBoneCount;
        if ( v76 >= 1 )
          v77 = 16i64 * (unsigned int)(3 * v76);
        else
          v77 = 64i64;
        this->m_pfWorldBuffer = Framework::MemoryManager::allocate(p_inV, v77, v73);
        m_usIndexCount = figure->m_usIndexCount;
        this->m_usIndexShadowCount = m_usIndexCount;
        this->m_pusIndexShadow = 0i64;
        this->m_pussIndexShadow = 0i64;
        if ( SLOBYTE(figure->m_iFormatType) < 0 )
        {
          v81 = Framework::MemoryManager::allocate(p_inV, 2i64 * m_usIndexCount, v78);
          this->m_pfIndexBuffer = v81;
          memmove(v81, figure->m_pfIndexBuffer, 2i64 * this->m_usIndexShadowCount);
          this->m_pussIndexShadow = (unsigned __int16 *)this->m_pfIndexBuffer;
        }
        else
        {
          v80 = Framework::MemoryManager::allocate(p_inV, 4i64 * m_usIndexCount, v78);
          this->m_pfIndexBuffer = v80;
          memmove(v80, figure->m_pfIndexBuffer, 4i64 * this->m_usIndexShadowCount);
          this->m_pusIndexShadow = (unsigned int *)this->m_pfIndexBuffer;
        }
        v82 = 48i64 * figure->m_uiBoneCount;
        if ( !is_mul_ok(3 * figure->m_uiBoneCount, 0x10ui64) )
          v82 = -1i64;
        this->m_pmBoneWorld = (Vector4Unaligned *)operator new[](v82);
        this->m_pbBoneMirrorFlg = (char *)operator new[](figure->m_uiBoneCount);
        this->m_pbBoneMirrorFlg2 = (char *)operator new[](figure->m_uiBoneCount);
        v83 = figure->m_uiBoneCount;
        v106 = (unsigned __int64 *)v83;
        v84 = 536 * v83;
        if ( !is_mul_ok(v83, 0x218ui64) )
          v84 = -1i64;
        v20 = __CFADD__(v84, 8i64);
        v85 = v84 + 8;
        if ( v20 )
          v85 = -1i64;
        v86 = (OGLFigure *)operator new[](v85);
        v103.figure = v86;
        if ( v86 )
        {
          *(_QWORD *)&v86->m_uiStateFlg = v83;
          p_m_pfVertexCoord = (_OGLModelBone *)&v86->m_pfVertexCoord;
          `eh vector constructor iterator'(
            &v86->m_pfVertexCoord,
            0x218ui64,
            (unsigned int)v83,
            (void (__fastcall *)(void *))_OGLModelBone::_OGLModelBone,
            (void (__fastcall *)(void *))_OGLModelBone::~_OGLModelBone);
        }
        else
        {
          p_m_pfVertexCoord = 0i64;
        }
        this->m_pBoneInfo = p_m_pfVertexCoord;
        v88 = figure->m_uiBoneCount - 1;
        if ( v88 >= 0 )
        {
          v89 = v88;
          v90 = v88;
          v91 = v89 * 536;
          do
          {
            _OGLModelBone::init((_OGLModelBone *)((char *)this->m_pBoneInfo + v91));
            v92 = figure->m_pBone;
            v93 = this->m_pBoneInfo;
            *(_QWORD *)v93[v89].mRot.m = 0i64;
            *(_QWORD *)&v93[v89].mRot.m[2] = 0i64;
            *(_QWORD *)&v93[v89].mRot.m[4] = 0i64;
            *(_QWORD *)&v93[v89].mRot.m[6] = 0i64;
            *(_QWORD *)&v93[v89].mRot.m[8] = 0i64;
            *(_QWORD *)&v93[v89].mRot.m[10] = 0i64;
            *(_QWORD *)&v93[v89].mRot.m[12] = 0i64;
            *(_QWORD *)&v93[v89].mRot.m[14] = 0i64;
            v93[v89].mRot.m[0] = 1.0;
            v93[v89].mRot.m[12] = v92[v90].m_vTransform.x;
            v93[v89].mRot.m[5] = 1.0;
            v93[v89].mRot.m[13] = v92[v90].m_vTransform.y;
            v93[v89].mRot.m[10] = 1.0;
            v93[v89].mRot.m[14] = v92[v90].m_vTransform.z;
            v93[v89].mRot.m[15] = 1.0;
            v91 -= 536i64;
            --v90;
            --v89;
            --v88;
          }
          while ( v88 >= 0 );
        }
        if ( figure->m_ucMaterialCount )
        {
          v94 = LOBYTE(figure->m_ucMaterialCount);
          this->m_ucMaterialCount = v94;
          v95 = (unsigned int)v94;
          v106 = (unsigned __int64 *)v94;
          v97 = (unsigned int)v94;
          v96 = 1128i64 * (unsigned int)v94;
          if ( !is_mul_ok(v97, 0x468ui64) )
            v96 = -1i64;
          v20 = __CFADD__(v96, 8i64);
          v98 = v96 + 8;
          if ( v20 )
            v98 = -1i64;
          v99 = (OGLFigure *)operator new[](v98);
          v103.figure = v99;
          if ( v99 )
          {
            *(_QWORD *)&v99->m_uiStateFlg = v95;
            v100 = (OGLMaterial *)&v99->m_pfVertexCoord;
            `eh vector constructor iterator'(
              &v99->m_pfVertexCoord,
              0x468ui64,
              (unsigned int)v95,
              (void (__fastcall *)(void *))OGLMaterial::OGLMaterial,
              (void (__fastcall *)(void *))OGLMaterial::~OGLMaterial);
          }
          else
          {
            v100 = 0i64;
          }
          this->m_pMaterial = v100;
          this->m_bMaterialVisible = (unsigned __int8 *)operator new[](this->m_ucMaterialCount);
          this->m_bMaterialShadowVisible = (unsigned __int8 *)operator new[](this->m_ucMaterialCount);
          v101 = 32;
          if ( SLOBYTE(figure->m_iFormatType) < 0 )
            v101 = 16;
          if ( this->m_ucMaterialCount )
          {
            v102 = 0i64;
            do
            {
              this->m_bMaterialShadowVisible[v102] = 1;
              this->m_bMaterialVisible[v102] = 1;
              OGLMaterial::copy(&this->m_pMaterial[(int)v7], &figure->m_pMaterial[(int)v7], v101, v101);
              LODWORD(v7) = (_DWORD)v7 + 1;
              ++v102;
            }
            while ( (int)v7 < this->m_ucMaterialCount );
          }
        }
        if ( !_Thr._Id )
          std::_Throw_Cpp_error(1);
        if ( _Thr._Id == Concurrency::details::platform::GetCurrentThreadId() )
          std::_Throw_Cpp_error(5);
        *(_Thrd_imp_t *)&v103.figure = _Thr;
        if ( Thrd_join((_Thrd_imp_t *)&v103, 0i64) )
          std::_Throw_Cpp_error(2);
        this->m_pFigure = figure;
        this->m_createBuffersReq = CreateBuffersRequest_Normal;
      }
    }
  }
}

void __fastcall OGLModel::setFollowBone(OGLModel *this, const char *followTargetBone, const char *followBone)
{
  char *m_cFollowBone; // rcx
  char *m_cFollowTargetBone; // rcx
  __int64 v8; // rbx
  __int64 v9; // rax
  unsigned __int64 v10; // rdi
  char *v11; // rax
  int v12; // ebx
  char *v13; // rax

  m_cFollowBone = this->m_cFollowBone;
  if ( m_cFollowBone )
  {
    operator delete(m_cFollowBone, (unsigned __int64)followTargetBone);
    this->m_cFollowBone = 0i64;
  }
  m_cFollowTargetBone = this->m_cFollowTargetBone;
  if ( m_cFollowTargetBone )
  {
    operator delete(m_cFollowTargetBone, (unsigned __int64)followTargetBone);
    this->m_cFollowTargetBone = 0i64;
  }
  if ( followTargetBone && followBone )
  {
    v8 = -1i64;
    v9 = -1i64;
    do
      ++v9;
    while ( followBone[v9] );
    v10 = (int)v9 + 1;
    v11 = (char *)operator new[](v10);
    this->m_cFollowBone = v11;
    strcpy_s(v11, v10, followBone);
    do
      ++v8;
    while ( followTargetBone[v8] );
    v12 = v8 + 1;
    v13 = (char *)operator new[](v12);
    this->m_cFollowTargetBone = v13;
    strcpy_s(v13, v12, followTargetBone);
  }
}

unsigned __int8 __fastcall OGLModel::setMaterialMap(OGLModel *this, int type, OGLTexture *texture, int index)
{
  int v4; // er10
  OGLTexture *(*m_pTexture)[4]; // rax
  __int64 v6; // rdx
  unsigned __int8 result; // al

  if ( type )
  {
    if ( (unsigned int)index <= 0x3F )
    {
      result = 1;
      this->m_pMaterialMap[index][type] = texture;
      return result;
    }
  }
  else
  {
    if ( index < 0 )
    {
      v4 = 0;
      m_pTexture = this->m_pTexture;
      v6 = 0i64;
      while ( (*m_pTexture)[0] )
      {
        ++v4;
        ++v6;
        ++m_pTexture;
        if ( v6 >= 64 )
          goto LABEL_8;
      }
      index = v4;
    }
LABEL_8:
    if ( (unsigned int)index <= 0x3F )
    {
      this->m_pTexture[index][0] = texture;
      return 1;
    }
  }
  return 0;
}

unsigned __int8 __fastcall OGLModel::setMotion(OGLModel *this, int index)
{
  OGLMotion *m_pExternalMotion; // rax
  __int64 v4; // r9
  unsigned __int8 result; // al
  __int64 m_iCurrentMotion; // rax
  OGLMotion *v7; // rdx
  OGLMotion *v8; // rdx
  OGLModel_vtbl **v9; // rcx

  m_pExternalMotion = this->m_pExternalMotion;
  v4 = index;
  if ( !m_pExternalMotion && this->m_iCurrentMotion == index || index >= 2 )
    return 0;
  if ( m_pExternalMotion )
  {
    this->m_pMotion[0] = m_pExternalMotion;
    this->m_pExternalMotion = 0i64;
    this->m_iCurrentExternalMotion = 0;
  }
  else
  {
    m_iCurrentMotion = this->m_iCurrentMotion;
    if ( (_DWORD)m_iCurrentMotion )
    {
      v7 = this->m_pMotion[0];
      this->m_pMotion[0] = this->m_pMotion[m_iCurrentMotion];
      this->m_pMotion[this->m_iCurrentMotion] = v7;
    }
  }
  v8 = this->m_pMotion[0];
  v9 = &this->__vftable + v4;
  this->m_pMotion[0] = (OGLMotion *)v9[46];
  result = 1;
  v9[46] = (OGLModel_vtbl *)v8;
  this->m_iCurrentMotion = v4;
  return result;
}

void __fastcall OGLModel::setMotionFrame(OGLModel *this, float frame, int index)
{
  __int64 v3; // r11
  OGLMotion *v4; // r8
  float v5; // xmm1_4
  __int64 v6; // rdx
  float *p_m_fTotalFrame; // r10
  float v8; // xmm2_4
  float *v9; // rdx

  v3 = index;
  if ( this->m_pMotion[index] )
  {
    this->m_fMotionFrame[index] = frame;
    if ( !index )
      this->m_bMotionEnd = 0;
    v4 = this->m_pMotion[index];
    v5 = 0.0;
    v6 = this->m_iMotionIndex[v3];
    if ( v4->m_ppMotionData
      && (int)v6 >= 0
      && (int)v6 < (signed int)v4->m_usMotionCount
      && (p_m_fTotalFrame = &v4->m_ppMotionData[v6]->m_fTotalFrame) != 0i64 )
    {
      v8 = *p_m_fTotalFrame;
    }
    else
    {
      v8 = 0.0;
    }
    if ( this->m_fMotionFrame[v3] >= v8 )
    {
      if ( v4->m_ppMotionData )
      {
        if ( (int)v6 >= 0 && (int)v6 < (signed int)v4->m_usMotionCount )
        {
          v9 = &v4->m_ppMotionData[v6]->m_fTotalFrame;
          if ( v9 )
            v5 = *v9;
        }
      }
      this->m_fMotionFrame[v3] = v5 - 1.0;
      if ( !(_DWORD)v3 )
        this->m_bMotionEnd = 1;
    }
  }
}

void __fastcall OGLModel::setOffsetScaleInit(OGLModel *this, OGLFigure *figure, int index)
{
  OGLFigure *m_pFigure; // rdx
  unsigned int m_uiUseCommonObac; // ecx
  signed int v7; // er13
  __int64 v8; // rdx
  __int64 v9; // rdi
  __int64 v10; // r12
  __int64 v11; // r15
  OGLBone *m_pBone; // rcx
  _OGLModelBone *m_pBoneInfo; // rax
  __int64 v14; // rbx
  OGLBone *v15; // rsi
  OGLMatrix *m_pBindPose; // rcx
  float v17; // xmm0_4
  float v18; // xmm1_4
  OGLFigure *v19; // rax
  __int64 v20; // rbx
  OGLMatrix *v21; // rcx
  OGLMatrix *v22; // rax
  float v23; // xmm11_4
  float v24; // xmm9_4
  float v25; // xmm10_4
  float v26; // xmm7_4
  float v27; // xmm6_4
  float v28; // xmm8_4
  float v29; // xmm0_4
  float v30; // xmm0_4
  float v31; // xmm15_4
  float v32; // xmm13_4
  float v33; // xmm14_4
  float v34; // xmm6_4
  float v35; // xmm0_4
  OGLVec3 axis; // [rsp+20h] [rbp-D8h] BYREF
  __int64 v37; // [rsp+100h] [rbp+8h]

  m_pFigure = this->m_pFigure;
  if ( m_pFigure && figure )
  {
    m_uiUseCommonObac = this->m_uiUseCommonObac;
    if ( (m_uiUseCommonObac & 2) == 0 )
    {
      this->m_uiUseCommonObac = m_uiUseCommonObac | 2;
      v7 = 0;
      if ( (int)m_pFigure->m_uiBoneCount > 0 )
      {
        v8 = 0i64;
        v9 = 0i64;
        v10 = 0i64;
        v11 = 0i64;
        v37 = 0i64;
        do
        {
          m_pBone = this->m_pFigure->m_pBone;
          m_pBoneInfo = this->m_pBoneInfo;
          *(_QWORD *)m_pBoneInfo[v9].fMotOffRotate[1].m = 1065353216i64;
          m_pBoneInfo[v9].fMotOffRotate[1].m[4] = 0.0;
          *(_QWORD *)&m_pBoneInfo[v9].fMotOffRotate[1].m[8] = 0i64;
          *(_QWORD *)&m_pBoneInfo[v9].fMotOffRotate[1].m[12] = 0i64;
          *(_QWORD *)&m_pBoneInfo[v9].fMotOffRotate[1].m[5] = 1065353216i64;
          *(_QWORD *)&m_pBoneInfo[v9].fMotOffRotate[1].m[2] = 0i64;
          *(_QWORD *)&m_pBoneInfo[v9].fMotOffRotate[1].m[10] = 1065353216i64;
          m_pBoneInfo[v9].fMotOffRotate[1].m[14] = 0.0;
          m_pBoneInfo[v9].fMotOffRotate[1].m[7] = 0.0;
          m_pBoneInfo[v9].fMotOffRotate[1].m[15] = 1.0;
          if ( *(unsigned __int8 **)((char *)&m_pBone->m_cName + v8) )
          {
            v14 = 0i64;
            if ( (int)figure->m_uiBoneCount > 0 )
            {
              v15 = figure->m_pBone;
              while ( !v15->m_cName || this->m_pFigure->m_iBoneHash[v10] != figure->m_iBoneHash[v14] )
              {
                ++v14;
                ++v15;
                if ( v14 >= (int)figure->m_uiBoneCount )
                  goto LABEL_30;
              }
              m_pBindPose = this->m_pFigure->m_pBindPose;
              v17 = sqrtf(
                      (float)((float)(m_pBindPose[v11].m[13] * m_pBindPose[v11].m[13])
                            + (float)(m_pBindPose[v11].m[12] * m_pBindPose[v11].m[12]))
                    + (float)(m_pBindPose[v11].m[14] * m_pBindPose[v11].m[14]));
              v18 = v15->m_mOffset.m[15];
              if ( v18 < 0.000099999997 || v17 < 0.000099999997 )
                this->m_pBoneInfo[v9].fMotOffScale[1] = -1.0;
              else
                this->m_pBoneInfo[v9].fMotOffScale[1] = v17 / v18;
              v19 = this->m_pFigure;
              v20 = v14 << 6;
              *(_QWORD *)&axis.x = 0i64;
              axis.z = 0.0;
              v21 = v19->m_pBindPose;
              v22 = figure->m_pBindPose;
              v23 = v21[v11].m[12];
              v24 = v21[v11].m[13];
              v25 = v21[v11].m[14];
              v26 = *(float *)((char *)&v22->m[12] + v20);
              v27 = *(float *)((char *)&v22->m[13] + v20);
              v28 = *(float *)((char *)&v22->m[14] + v20);
              if ( (v23 != 0.0 || v24 != 0.0 || v25 != 0.0) && (v26 != 0.0 || v27 != 0.0 || v28 != 0.0) )
              {
                v29 = sqrtf((float)((float)(v24 * v24) + (float)(v23 * v23)) + (float)(v25 * v25));
                if ( v29 != 0.0 )
                {
                  v23 = v23 / v29;
                  v24 = v24 / v29;
                  v25 = v25 / v29;
                }
                v30 = sqrtf((float)((float)(v27 * v27) + (float)(v26 * v26)) + (float)(v28 * v28));
                if ( v30 != 0.0 )
                {
                  v26 = v26 / v30;
                  v27 = v27 / v30;
                  v28 = v28 / v30;
                }
                v31 = acosf(fmaxf(-1.0, fminf(1.0, (float)((float)(v27 * v24) + (float)(v26 * v23)) + (float)(v28 * v25))));
                v32 = (float)(v28 * v24) - (float)(v27 * v25);
                axis.x = v32;
                v33 = (float)(v26 * v25) - (float)(v28 * v23);
                v34 = (float)(v27 * v23) - (float)(v26 * v24);
                axis.y = v33;
                axis.z = v34;
                v35 = sqrtf((float)((float)(v33 * v33) + (float)(v32 * v32)) + (float)(v34 * v34));
                if ( v35 != 0.0 )
                {
                  axis.x = v32 / v35;
                  axis.y = v33 / v35;
                  axis.z = v34 / v35;
                }
                OGLMatrix::rotateV(&this->m_pBoneInfo[v7].fMotOffRotate[1], &axis, COERCE_FLOAT(LODWORD(v31) ^ _xmm));
              }
            }
          }
LABEL_30:
          v37 += 232i64;
          ++v7;
          ++v10;
          v8 = v37;
          ++v9;
          ++v11;
        }
        while ( v7 < (signed int)this->m_pFigure->m_uiBoneCount );
      }
    }
  }
  else
  {
    this->m_uiUseCommonObac &= ~2u;
  }
}

void __fastcall OGLModel::setOrthoViewTrans(OGLModel *this, OGLMatrix *matrix)
{
  if ( matrix )
  {
    this->m_OrthoView = *matrix;
  }
  else
  {
    *(_QWORD *)this->m_OrthoView.m = 1065353216i64;
    this->m_OrthoView.m[4] = 0.0;
    *(_QWORD *)&this->m_OrthoView.m[8] = 0i64;
    *(_QWORD *)&this->m_OrthoView.m[12] = 0i64;
    *(_QWORD *)&this->m_OrthoView.m[2] = 0i64;
    this->m_OrthoView.m[14] = 0.0;
    this->m_OrthoView.m[7] = 0.0;
    *(_QWORD *)&this->m_OrthoView.m[5] = 1065353216i64;
    *(_QWORD *)&this->m_OrthoView.m[10] = 1065353216i64;
    this->m_OrthoView.m[15] = 1.0;
  }
}

void __fastcall OGLModel::setParent(OGLModel *this, OGLModel *model, int parentBone, int childBone)
{
  OGLFigure *m_pFigure; // r10
  OGLFigure *v5; // rax

  m_pFigure = model->m_pFigure;
  if ( m_pFigure )
  {
    v5 = this->m_pFigure;
    if ( v5 )
    {
      if ( parentBone >= 0
        && parentBone < (signed int)m_pFigure->m_uiBoneCount
        && childBone >= 0
        && childBone < (signed int)v5->m_uiBoneCount )
      {
        this->m_pParentModel = model;
        this->m_pmParentPosture = &model->m_mWorld;
        this->m_iParentBone = parentBone;
        this->m_iParentBoneDef = parentBone;
        this->m_iChildBone = childBone;
      }
    }
  }
}

void __fastcall OGLModel::setSecondary(OGLModel *this, OGLSecondary *secondary)
{
  _SECONDARY_BONE_INFO *m_SecondaryInfo; // rcx
  unsigned __int64 m_uiBoneCount; // rcx
  __int64 v5; // rdi
  _SECONDARY_BONE_INFO *v6; // rax
  float *p_z; // rcx
  signed int v8; // er8
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r9
  _SECONDARY_BONE_INFO *v12; // rax

  if ( this->m_pFigure )
  {
    this->m_pSecondary = secondary;
    m_SecondaryInfo = this->m_SecondaryInfo;
    if ( m_SecondaryInfo )
    {
      operator delete(m_SecondaryInfo, (unsigned __int64)secondary);
      this->m_SecondaryInfo = 0i64;
    }
    m_uiBoneCount = this->m_pFigure->m_uiBoneCount;
    if ( (_DWORD)m_uiBoneCount )
    {
      v5 = (unsigned int)m_uiBoneCount;
      v6 = (_SECONDARY_BONE_INFO *)operator new[](saturated_mul(m_uiBoneCount, 0x250ui64));
      if ( v6 )
      {
        p_z = &v6->vScale.z;
        do
        {
          *((_QWORD *)p_z - 61) = 0i64;
          *(p_z - 120) = 0.0;
          *((_QWORD *)p_z - 9) = 0i64;
          *((_QWORD *)p_z - 8) = 0i64;
          *((_QWORD *)p_z - 7) = 0i64;
          *((_QWORD *)p_z - 6) = 0i64;
          *((_QWORD *)p_z - 5) = 0i64;
          *((_QWORD *)p_z - 4) = 0i64;
          *((_QWORD *)p_z - 3) = 0i64;
          *((_QWORD *)p_z - 2) = 0i64;
          *((_QWORD *)p_z - 1) = 0i64;
          *p_z = 0.0;
          *(_QWORD *)(p_z + 1) = 0i64;
          *(_QWORD *)(p_z + 3) = 0i64;
          *(_QWORD *)(p_z + 5) = 0i64;
          *(_QWORD *)(p_z + 7) = 0i64;
          *(_QWORD *)(p_z + 9) = 0i64;
          *(_QWORD *)(p_z + 11) = 0i64;
          *(_QWORD *)(p_z + 13) = 0i64;
          *(_QWORD *)(p_z + 15) = 0i64;
          *(_QWORD *)(p_z + 17) = 0i64;
          p_z[19] = 0.0;
          *(_QWORD *)(p_z + 21) = 0i64;
          p_z[23] = 0.0;
          p_z += 148;
          --v5;
        }
        while ( v5 );
      }
      else
      {
        v6 = 0i64;
      }
      v8 = 0;
      this->m_SecondaryInfo = v6;
      if ( (int)this->m_pFigure->m_uiBoneCount > 0 )
      {
        v9 = 0i64;
        do
        {
          v10 = v9 * 592 + 144;
          v11 = 2i64;
          do
          {
            v10 += 64i64;
            *(_QWORD *)((char *)this->m_SecondaryInfo + v10 - 192) = 0xC0C3880000000000ui64;
            *(_QWORD *)((char *)this->m_SecondaryInfo + v10 - 64) = 0xC0C3880000000000ui64;
            *(long double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldX[6] + v10) = -10000.0;
            *(_QWORD *)((char *)this->m_SecondaryInfo + v10 - 184) = 0xC0C3880000000000ui64;
            *(_QWORD *)((char *)this->m_SecondaryInfo + v10 - 56) = 0xC0C3880000000000ui64;
            *(long double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldX[7] + v10) = -10000.0;
            *(_QWORD *)((char *)this->m_SecondaryInfo + v10 - 176) = 0xC0C3880000000000ui64;
            *(_QWORD *)((char *)this->m_SecondaryInfo + v10 - 48) = 0xC0C3880000000000ui64;
            *(long double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldX[8] + v10) = -10000.0;
            *(_QWORD *)((char *)this->m_SecondaryInfo + v10 - 168) = 0xC0C3880000000000ui64;
            *(_QWORD *)((char *)this->m_SecondaryInfo + v10 - 40) = 0xC0C3880000000000ui64;
            *(long double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldX[9] + v10) = -10000.0;
            *(_QWORD *)((char *)this->m_SecondaryInfo + v10 - 160) = 0xC0C3880000000000ui64;
            *(_QWORD *)((char *)this->m_SecondaryInfo + v10 - 32) = 0xC0C3880000000000ui64;
            *(long double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldX[10] + v10) = -10000.0;
            *(_QWORD *)((char *)this->m_SecondaryInfo + v10 - 152) = 0xC0C3880000000000ui64;
            *(_QWORD *)((char *)this->m_SecondaryInfo + v10 - 24) = 0xC0C3880000000000ui64;
            *(long double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldX[11] + v10) = -10000.0;
            *(_QWORD *)((char *)this->m_SecondaryInfo + v10 - 144) = 0xC0C3880000000000ui64;
            *(_QWORD *)((char *)this->m_SecondaryInfo + v10 - 16) = 0xC0C3880000000000ui64;
            *(long double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldX[12] + v10) = -10000.0;
            *(_QWORD *)((char *)this->m_SecondaryInfo + v10 - 136) = 0xC0C3880000000000ui64;
            *(_QWORD *)((char *)this->m_SecondaryInfo + v10 - 8) = 0xC0C3880000000000ui64;
            *(long double *)((char *)&this->m_SecondaryInfo->mPrevPosWorldX[13] + v10) = -10000.0;
            --v11;
          }
          while ( v11 );
          ++v8;
          this->m_SecondaryInfo[v9].iStateFlg = 0;
          this->m_SecondaryInfo[v9].iStateWorkFlg = 0;
          this->m_SecondaryInfo[v9].iStateTakeOverFlg = 0;
          this->m_SecondaryInfo[v9].iStateFlg |= 1u;
          this->m_SecondaryInfo[v9].fPosY = 0.0;
          v12 = this->m_SecondaryInfo;
          *(_QWORD *)&v12[v9].vRebound.x = 0i64;
          v12[v9++].vRebound.z = 0.0;
        }
        while ( v8 < (signed int)this->m_pFigure->m_uiBoneCount );
      }
    }
  }
}

unsigned __int8 __fastcall OGLModel::setTexture(OGLModel *this, OGLTexture *texture, int index, int index2)
{
  int v6; // edx
  OGLTexture *(*m_pTexture)[4]; // rax
  __int64 v8; // rcx
  unsigned __int8 result; // al

  if ( index2 >= 4 )
    return 0;
  if ( index < 0 )
  {
    v6 = 0;
    m_pTexture = this->m_pTexture;
    v8 = 0i64;
    while ( (*m_pTexture)[0] )
    {
      ++v6;
      ++v8;
      ++m_pTexture;
      if ( v8 >= 64 )
        goto LABEL_8;
    }
    index = v6;
  }
LABEL_8:
  if ( (unsigned int)index > 0x3F || index2 < 0 )
    return 0;
  result = 1;
  this->m_pTexture[index][index2] = texture;
  return result;
}

void __fastcall OGLModel::setTrans(OGLModel *this, OGLMatrix *mtx, int boneNo, unsigned __int8 trans)
{
  __int64 v5; // rcx

  if ( mtx )
  {
    if ( boneNo < (signed int)this->m_pFigure->m_uiBoneCount )
    {
      v5 = boneNo;
      this->m_pBoneInfo[v5].mTrans = *mtx;
      this->m_pBoneInfo[v5].bChangeFlg = 1;
      this->m_pBoneInfo[v5].bTransFlg = 1;
    }
  }
  else
  {
    this->m_pBoneInfo[boneNo].bChangeFlg = 0;
  }
}

void __fastcall OGLModel::setTransTarget(
        OGLModel *this,
        OGLVec3 *vTargetPos,
        int boneNo,
        float fUp,
        float fDown,
        float fLeft,
        float fRight,
        float fBlend)
{
  OGLFigure *m_pFigure; // rax
  unsigned __int64 v11; // rdx
  _OGLModelBone *v12; // rax
  _OGLModelBone *m_pBoneInfo; // rcx
  __int64 v14; // rdx

  m_pFigure = this->m_pFigure;
  if ( m_pFigure )
  {
    if ( vTargetPos )
    {
      if ( boneNo < (signed int)m_pFigure->m_uiBoneCount )
      {
        m_pBoneInfo = this->m_pBoneInfo;
        v14 = boneNo;
        *(_QWORD *)&m_pBoneInfo[v14].boneTarget.vTargetPos.x = *(_QWORD *)&vTargetPos->x;
        m_pBoneInfo[v14].boneTarget.vTargetPos.z = vTargetPos->z;
        this->m_pBoneInfo[v14].boneTarget.bUseFlg = 1;
        this->m_pBoneInfo[v14].boneTarget.fLimitUp = fUp;
        this->m_pBoneInfo[v14].boneTarget.fLimitDown = fDown;
        this->m_pBoneInfo[v14].boneTarget.fLimitLeft = fLeft;
        this->m_pBoneInfo[v14].boneTarget.fLimitRight = fRight;
        this->m_pBoneInfo[v14].boneTarget.fBlend = fBlend;
      }
    }
    else
    {
      v11 = boneNo;
      v12 = this->m_pBoneInfo;
      *(_QWORD *)&v12[v11].boneTarget.qPrevRot.x = 0i64;
      v12[v11].boneTarget.qPrevRot.z = 0.0;
      v12[v11].boneTarget.qPrevRot.w = 1.0;
      this->m_pBoneInfo[v11].boneTarget.bUseFlg = 0;
    }
  }
}

void __fastcall OGLModel::syncPosture(OGLModel *this)
{
  AgMutex *p_m_postureCondMutex; // rdi
  int v3; // er8
  AgMutex *v4; // [rsp+30h] [rbp-18h]

  p_m_postureCondMutex = &this->m_postureCondMutex;
  v4 = &this->m_postureCondMutex;
  EnterCriticalSection((LPCRITICAL_SECTION)&this->m_postureCondMutex);
  while ( !this->bWakeThread._My_val && AgThread::getIsRunning(&this->m_updateThread) )
    AgCondition::wait(&this->m_postureReadyCond, p_m_postureCondMutex, v3);
  LeaveCriticalSection((LPCRITICAL_SECTION)v4);
}

void __fastcall OGLModel::updatePosture(
        OGLModel *this,
        OGLMatrix *posture,
        float blendRate,
        unsigned __int8 bSync,
        unsigned int calcTarget)
{
  OGLMatrix *v8; // rdx

  OGLModel::syncPosture(this);
  if ( bSync )
  {
    this->bWakeThread._My_val = 1;
    EnterCriticalSection((LPCRITICAL_SECTION)&this->m_postureReadyCond);
    WakeConditionVariable((PCONDITION_VARIABLE)&this->m_postureReadyCond.m_conditionVariable.m_data);
    LeaveCriticalSection((LPCRITICAL_SECTION)&this->m_postureReadyCond);
    if ( (calcTarget & 1) != 0 )
      OGLModel::updatePostureExe(this, posture, blendRate);
    if ( (calcTarget & 2) != 0 )
      OGLModel::updatePostureSecExe(this, v8, blendRate);
  }
  else if ( this->m_pMotion[0] )
  {
    if ( posture )
    {
      *(_OWORD *)this->m_mTmpMatrix.m = *(_OWORD *)posture->m;
      *(_OWORD *)&this->m_mTmpMatrix.m[4] = *(_OWORD *)&posture->m[4];
      *(_OWORD *)&this->m_mTmpMatrix.m[8] = *(_OWORD *)&posture->m[8];
      *(_OWORD *)&this->m_mTmpMatrix.m[12] = *(_OWORD *)&posture->m[12];
    }
    this->m_uiTmpCalcTarget = calcTarget;
    this->m_fTmpBlend = blendRate;
    if ( this->bCreateUpdateThread )
    {
      this->bWakeThread._My_val = 0;
      EnterCriticalSection((LPCRITICAL_SECTION)&this->updateCondMutex);
      EnterCriticalSection((LPCRITICAL_SECTION)&this->updataCond);
      WakeConditionVariable((PCONDITION_VARIABLE)&this->updataCond.m_conditionVariable.m_data);
      LeaveCriticalSection((LPCRITICAL_SECTION)&this->updataCond);
      LeaveCriticalSection((LPCRITICAL_SECTION)&this->updateCondMutex);
    }
    else
    {
      this->bCreateUpdateThread = 1;
      this->bWakeThread._My_val = 0;
      AgThread::join(&this->m_updateThread);
      AgThread::start(&this->m_updateThread, this, 0x100000ui64, 0, "ModelPosture");
    }
  }
}

void __fastcall OGLModel::updatePostureExe(OGLModel *this, OGLMatrix *posture, float blendRate)
{
  OGLMotion *v3; // rax
  OGLMotion **v6; // rsi
  OGLMotion *v7; // rax
  int m_usMotionCount; // eax
  OGLMotion *v9; // rax
  int v10; // eax
  OGLMotion *v11; // rax
  int v12; // eax
  OGLMotion *v13; // rax
  int v14; // eax
  float v15; // xmm0_4
  OGLMotionData *v16; // r9
  __int64 v17; // rcx
  float m_fTotalFrame; // xmm1_4
  OGLMotion *v19; // rdx
  float v20; // xmm1_4
  OGLMotion *v21; // rdx
  float v22; // xmm1_4
  OGLMotion *v23; // rdx
  float v24; // xmm1_4
  int mirrorType; // er13
  _OWORD *v26; // rcx
  __int64 v27; // r8
  __int64 m_iMotOffSceleIndex; // rcx
  unsigned int m_uiUseCommonObac; // eax
  signed int v30; // ecx
  __int64 v31; // r9
  unsigned __int64 v32; // r10
  __int64 v33; // rdx
  __int64 v34; // r8
  OGLMatrix *m_pBindPose; // rcx
  _OGLModelBone *m_pBoneInfo; // rax
  _OGLModelBone *v37; // rax
  OGLMatrix *v38; // rcx
  _OGLModelBone *v39; // rax
  _OGLModelBone *v40; // rax
  OGLMatrix *v41; // rcx
  _OGLModelBone *v42; // rax
  _OGLModelBone *v43; // rax
  OGLMatrix *v44; // rcx
  _OGLModelBone *v45; // rax
  _OGLModelBone *v46; // rax
  __int64 v47; // rdx
  __int64 v48; // r8
  OGLMatrix *v49; // rcx
  _OGLModelBone *v50; // rax
  _OGLModelBone *v51; // rax
  int v52; // er8
  int v53; // er12
  __int64 v54; // r14
  __int64 v55; // rdi
  __int64 v56; // rdx
  int v57; // ebp
  unsigned int m_uiUseMotionFlg; // er15
  int *v59; // r10
  unsigned int v60; // er8
  __int64 v61; // r11
  __int64 v62; // rcx
  int **v63; // rax
  char v64; // cl
  char v65; // dl
  _SECONDARY_BONE_INFO *m_SecondaryInfo; // rdx
  OGLAnimationBone *v67; // r8
  __int64 v68; // rsi
  int v69; // er11
  unsigned int *p_uiOpt; // r9
  unsigned int v71; // er10
  int v72; // edx
  int v73; // ecx
  int v74; // edx
  int v75; // ecx
  int v76; // edx
  int v77; // ecx
  int v78; // edx
  int v79; // er8
  _SECONDARY_BONE_INFO *v80; // rcx
  __int64 v81; // rdx
  OGLSecondary *m_pSecondary; // rsi
  int *m_iSecondaryBoneIdx; // rax
  int v84; // er9
  __int64 v85; // rax
  int **v86; // rax
  __int64 v87; // r9
  int m_uiBoneCount; // er8
  int v89; // ecx
  __int64 v90; // rdx
  _SECONDARY_BONE_BASE_INFO2 *m_pSecondaryBoneInfo2; // r10
  _SECONDARY_BONE_BASE_INFO2 *v92; // rax
  int v93; // ecx
  int v94; // esi
  __int64 v95; // r12
  __int64 v96; // rdi
  unsigned __int8 v97; // al
  OGLAnimationBone *v98; // rax
  __int64 v99; // r15
  _SECONDARY_BONE_INFO *v100; // rdi
  OGLMirror *m_pMirror; // r11
  int v102; // er14
  int v103; // ebp
  int *m_iMirrorBoneIdx; // rax
  int v105; // eax
  bool v106; // zf
  _SECONDARY_BONE_BASE_INFO *m_pSecondaryBoneInfo; // rax
  OGLMirrorData *m_MirrorData; // r13
  __int64 v109; // r12
  __int64 boneID; // rax
  int *m_iMirrorBoneRIdx; // rcx
  int v112; // eax
  unsigned __int8 v113; // r9
  __int64 v114; // r12
  char *v115; // rdx
  int v116; // ecx
  int v117; // eax
  bool v118; // dl
  float v119; // xmm1_4
  __int64 v120; // rcx
  __int64 v121; // r8
  _OGLModelBone *v122; // r9
  int iMirrorType; // er15
  int *v124; // rax
  int v125; // eax
  _OGLModelBone *v126; // rdx
  __int64 m_iBoneStackIndex; // rax
  unsigned int m_uiModeFlg; // er13
  unsigned __int64 v129; // r9
  __int64 v130; // rbp
  __int64 v131; // rcx
  OGLPrevAnimationBone *pPrev; // r11
  _OGLModelBone *v133; // r10
  OGLPrevAnimationBone *p_m_aBindPose; // r9
  OGLMotionData *v135; // r14
  signed int v136; // esi
  __int64 v137; // rdi
  __int64 v138; // rbp
  float v139; // xmm2_4
  OGLFigure *v140; // rax
  OGLBone *m_pBone; // rdx
  OGLBone *v142; // r15
  unsigned __int64 v143; // r8
  unsigned int m_uiBoneInfoFlg; // edx
  bool v145; // r12
  int v146; // ecx
  float fBlend; // xmm0_4
  __int64 v148; // rax
  OGLBone *v149; // rcx
  __int64 m_sChild; // rax
  int j; // eax
  __int64 v152; // rcx
  _SECONDARY_BONE_INFO *v153; // rdx
  OGLBone *v154; // rcx
  __int64 v155; // rax
  float v156; // xmm3_4
  _OGLModelBone *v157; // rax
  OGLVec3 *p_vScale; // r8
  OGLMatrix *p_mRot; // rdx
  _OGLModelBone *v160; // rax
  OGLVec3 *v161; // r8
  OGLMatrix *v162; // rdx
  OGLModel *m_pParentModel; // r9
  unsigned __int8 v164; // r8
  float v165; // xmm1_4
  float v166; // xmm11_4
  float v167; // eax
  float v168; // xmm8_4
  float v169; // xmm2_4
  float v170; // xmm10_4
  float v171; // xmm1_4
  float v172; // xmm11_4
  float v173; // xmm8_4
  float v174; // xmm2_4
  float x; // xmm3_4
  float v176; // xmm5_4
  float v177; // xmm3_4
  float y; // xmm0_4
  float v179; // xmm6_4
  float v180; // xmm5_4
  float v181; // xmm1_4
  float v182; // xmm4_4
  float v183; // xmm2_4
  OGLFigure *m_pFigure; // rax
  int v185; // ecx
  __int64 v186; // rdi
  __int64 v187; // rsi
  OGLBone *v188; // rdx
  int v189; // edi
  __int64 v190; // rsi
  signed int v191; // er8
  __int64 v192; // r10
  bool isZero; // al
  __int64 v194; // r9
  int v195; // er8
  __int64 v196; // r10
  __int64 v197; // rdx
  unsigned __int8 bParts; // [rsp+20h] [rbp-158h]
  OGLMatrix *iPrevMirrorType; // [rsp+38h] [rbp-140h]
  int i; // [rsp+60h] [rbp-118h]
  int v201; // [rsp+60h] [rbp-118h]
  char v202; // [rsp+64h] [rbp-114h]
  int iMotionNo[2]; // [rsp+68h] [rbp-110h] BYREF
  bool v204; // [rsp+70h] [rbp-108h]
  __int64 v205; // [rsp+78h] [rbp-100h]
  __int64 v206; // [rsp+80h] [rbp-F8h]
  OGLAnimationBone *v207; // [rsp+88h] [rbp-F0h]
  int v208; // [rsp+90h] [rbp-E8h]
  int iAniboneNo; // [rsp+94h] [rbp-E4h] BYREF
  OGLMatrix *pOffsetMat; // [rsp+98h] [rbp-E0h]
  OGLMotionData *motion; // [rsp+A0h] [rbp-D8h]
  unsigned __int8 bMirrorFlg[8]; // [rsp+A8h] [rbp-D0h] BYREF

  v3 = this->m_pMotion[0];
  if ( v3 && this->m_iMotionIndex[0] < (signed int)v3->m_usMotionCount )
  {
    v6 = &this->m_pMotion[4];
    v7 = this->m_pMotion[4];
    if ( v7 )
    {
      m_usMotionCount = v7->m_usMotionCount;
      if ( this->m_iMotionIndex[4] >= m_usMotionCount )
        this->m_iMotionIndex[4] = m_usMotionCount - 1;
    }
    v9 = this->m_pMotion[3];
    if ( v9 )
    {
      v10 = v9->m_usMotionCount;
      if ( this->m_iMotionIndex[3] >= v10 )
        this->m_iMotionIndex[3] = v10 - 1;
    }
    v11 = this->m_pMotion[2];
    if ( v11 )
    {
      v12 = v11->m_usMotionCount;
      if ( this->m_iMotionIndex[2] >= v12 )
        this->m_iMotionIndex[2] = v12 - 1;
    }
    v13 = this->m_pMotion[1];
    if ( v13 )
    {
      v14 = v13->m_usMotionCount;
      if ( this->m_iMotionIndex[1] >= v14 )
        this->m_iMotionIndex[1] = v14 - 1;
    }
    v15 = this->m_fMotionFrame[0];
    v16 = this->m_pMotion[0]->m_ppMotionData[this->m_iMotionIndex[0]];
    this->m_fMotionBlend[1] = this->m_fMotionBlend[0];
    motion = v16;
    if ( v15 < v16->m_fTotalFrame )
    {
      if ( *v6 )
      {
        v17 = this->m_iMotionIndex[4];
        if ( (int)v17 >= 0 )
        {
          m_fTotalFrame = (*v6)->m_ppMotionData[v17]->m_fTotalFrame;
          if ( this->m_fMotionFrame[4] > m_fTotalFrame )
            this->m_fMotionFrame[4] = m_fTotalFrame - 1.0;
        }
      }
      v19 = this->m_pMotion[3];
      if ( v19 )
      {
        if ( this->m_iMotionIndex[3] >= 0 )
        {
          v20 = v19->m_ppMotionData[this->m_iMotionIndex[3]]->m_fTotalFrame;
          if ( this->m_fMotionFrame[3] > v20 )
            this->m_fMotionFrame[3] = v20 - 1.0;
        }
      }
      v21 = this->m_pMotion[2];
      if ( v21 )
      {
        if ( this->m_iMotionIndex[2] >= 0 )
        {
          v22 = v21->m_ppMotionData[this->m_iMotionIndex[2]]->m_fTotalFrame;
          if ( this->m_fMotionFrame[2] > v22 )
            this->m_fMotionFrame[2] = v22 - 1.0;
        }
      }
      v23 = this->m_pMotion[1];
      if ( v23 )
      {
        if ( this->m_iMotionIndex[1] >= 0 )
        {
          v24 = v23->m_ppMotionData[this->m_iMotionIndex[1]]->m_fTotalFrame;
          if ( this->m_fMotionFrame[1] > v24 )
            this->m_fMotionFrame[1] = v24 - 1.0;
        }
      }
      mirrorType = 0;
      *(_WORD *)&this->m_bTrans = 257;
      this->m_bPostureChange = 1;
      if ( posture )
      {
        if ( !OGLMatrix::equal(&this->m_mWorld, posture) )
        {
          this->m_vPosition.x = *(float *)(v27 + 48);
          this->m_vPosition.y = *(float *)(v27 + 52);
          this->m_vPosition.z = *(float *)(v27 + 56);
          *v26 = *(_OWORD *)v27;
          v26[1] = *(_OWORD *)(v27 + 16);
          v26[2] = *(_OWORD *)(v27 + 32);
          v26[3] = *(_OWORD *)(v27 + 48);
        }
        this->m_bPostureChange = 1;
      }
      else
      {
        *(_QWORD *)&this->m_vPosition.x = 0i64;
        this->m_vPosition.z = 0.0;
      }
      this->m_iMotOffSceleIndex = (v16->m_uiInfoFlg & 4) != 0;
      m_iMotOffSceleIndex = this->m_iMotOffSceleIndex;
      m_uiUseCommonObac = this->m_uiUseCommonObac;
      if ( _bittest((const int *)&m_uiUseCommonObac, m_iMotOffSceleIndex) )
      {
        this->m_fMotOffScale[m_iMotOffSceleIndex] = this->m_fMotOffScaleCommon[m_iMotOffSceleIndex];
        this->m_bBaseOffScaleFlg = 1;
      }
      else
      {
        this->m_fMotOffScale[m_iMotOffSceleIndex] = 1.0;
        this->m_bBaseOffScaleFlg = 0;
      }
      v30 = this->m_pFigure->m_uiBoneCount - 1;
      v31 = v30;
      if ( v30 >= 0 )
      {
        if ( v30 + 1i64 >= 4 )
        {
          v32 = (unsigned __int64)(v30 + 1i64) >> 2;
          v33 = v30;
          v34 = (__int64)v30 << 6;
          v31 = v30 - 4 * v32;
          do
          {
            v33 -= 4i64;
            v34 -= 256i64;
            m_pBindPose = this->m_pFigure->m_pBindPose;
            m_pBoneInfo = this->m_pBoneInfo;
            *(_OWORD *)m_pBoneInfo[v33 + 4].mRot.m = *(_OWORD *)((char *)m_pBindPose[4].m + v34);
            *(_OWORD *)&m_pBoneInfo[v33 + 4].mRot.m[4] = *(_OWORD *)((char *)&m_pBindPose[4].m[4] + v34);
            *(_OWORD *)&m_pBoneInfo[v33 + 4].mRot.m[8] = *(_OWORD *)((char *)&m_pBindPose[4].m[8] + v34);
            *(_OWORD *)&m_pBoneInfo[v33 + 4].mRot.m[12] = *(_OWORD *)((char *)&m_pBindPose[4].m[12] + v34);
            v37 = this->m_pBoneInfo;
            v37[v33 + 4].vScale.x = 1.0;
            v37[v33 + 4].vScale.y = 1.0;
            v37[v33 + 4].vScale.z = 1.0;
            v38 = this->m_pFigure->m_pBindPose;
            v39 = this->m_pBoneInfo;
            *(_OWORD *)v39[v33 + 3].mRot.m = *(_OWORD *)((char *)v38[3].m + v34);
            *(_OWORD *)&v39[v33 + 3].mRot.m[4] = *(_OWORD *)((char *)&v38[3].m[4] + v34);
            *(_OWORD *)&v39[v33 + 3].mRot.m[8] = *(_OWORD *)((char *)&v38[3].m[8] + v34);
            *(_OWORD *)&v39[v33 + 3].mRot.m[12] = *(_OWORD *)((char *)&v38[3].m[12] + v34);
            v40 = this->m_pBoneInfo;
            v40[v33 + 3].vScale.x = 1.0;
            v40[v33 + 3].vScale.y = 1.0;
            v40[v33 + 3].vScale.z = 1.0;
            v41 = this->m_pFigure->m_pBindPose;
            v42 = this->m_pBoneInfo;
            *(_OWORD *)v42[v33 + 2].mRot.m = *(_OWORD *)((char *)v41[2].m + v34);
            *(_OWORD *)&v42[v33 + 2].mRot.m[4] = *(_OWORD *)((char *)&v41[2].m[4] + v34);
            *(_OWORD *)&v42[v33 + 2].mRot.m[8] = *(_OWORD *)((char *)&v41[2].m[8] + v34);
            *(_OWORD *)&v42[v33 + 2].mRot.m[12] = *(_OWORD *)((char *)&v41[2].m[12] + v34);
            v43 = this->m_pBoneInfo;
            v43[v33 + 2].vScale.x = 1.0;
            v43[v33 + 2].vScale.y = 1.0;
            v43[v33 + 2].vScale.z = 1.0;
            v44 = this->m_pFigure->m_pBindPose;
            v45 = this->m_pBoneInfo;
            *(_OWORD *)v45[v33 + 1].mRot.m = *(_OWORD *)((char *)v44[1].m + v34);
            *(_OWORD *)&v45[v33 + 1].mRot.m[4] = *(_OWORD *)((char *)&v44[1].m[4] + v34);
            *(_OWORD *)&v45[v33 + 1].mRot.m[8] = *(_OWORD *)((char *)&v44[1].m[8] + v34);
            *(_OWORD *)&v45[v33 + 1].mRot.m[12] = *(_OWORD *)((char *)&v44[1].m[12] + v34);
            v46 = this->m_pBoneInfo;
            v46[v33 + 1].vScale.x = 1.0;
            v46[v33 + 1].vScale.y = 1.0;
            v46[v33 + 1].vScale.z = 1.0;
            --v32;
          }
          while ( v32 );
        }
        if ( v31 >= 0 )
        {
          v47 = v31;
          v48 = v31 << 6;
          do
          {
            --v31;
            --v47;
            v48 -= 64i64;
            v49 = this->m_pFigure->m_pBindPose;
            v50 = this->m_pBoneInfo;
            *(_OWORD *)v50[v47 + 1].mRot.m = *(_OWORD *)((char *)v49[1].m + v48);
            *(_OWORD *)&v50[v47 + 1].mRot.m[4] = *(_OWORD *)((char *)&v49[1].m[4] + v48);
            *(_OWORD *)&v50[v47 + 1].mRot.m[8] = *(_OWORD *)((char *)&v49[1].m[8] + v48);
            *(_OWORD *)&v50[v47 + 1].mRot.m[12] = *(_OWORD *)((char *)&v49[1].m[12] + v48);
            v51 = this->m_pBoneInfo;
            v51[v47 + 1].vScale.x = 1.0;
            v51[v47 + 1].vScale.y = 1.0;
            v51[v47 + 1].vScale.z = 1.0;
          }
          while ( v31 >= 0 );
        }
      }
      memset(this->m_pbBoneMirrorFlg, 0, this->m_pFigure->m_uiBoneCount);
      memset(this->m_pbBoneMirrorFlg2, 0, this->m_pFigure->m_uiBoneCount);
      if ( this->m_pMotion[0]->m_cBoneName )
      {
        OGLModel::checkMotionMirror(this, bMirrorFlg);
        if ( !this->m_iMotionPostureCount )
          this->m_fMotOffScaleTemp = (float)((float)(1.0 - this->m_fMotionBlend[0])
                                           * this->m_fMotOffScale[this->m_iMotOffSceleIndex])
                                   + (float)(this->m_fMotionBlend[0] * this->m_fMotOffScaleTemp);
        v52 = 1;
        for ( i = 1; v52 < this->m_pFigure->m_iNodeLevelMax; i = ++v52 )
        {
          v53 = this->m_pFigure->m_uiBoneCount - 1;
          if ( v53 < 0 )
            continue;
          v54 = v53;
          v55 = v53;
          v56 = 232i64 * v53;
          v205 = 72i64 * v53;
          v207 = (OGLAnimationBone *)v56;
          do
          {
            if ( *(_DWORD *)&this->m_pFigure->m_pBone->m_cNameOrigin[v56 + 64] != v52 )
              goto LABEL_128;
            v57 = 0;
            iMotionNo[0] = 0;
            if ( !this->m_iMotionBoneIdx[0] )
            {
              OGLModel::searchMotionAniboneLight(this, v53, iMotionNo);
              v57 = iMotionNo[0];
            }
            v59 = &this->m_iMotionIndex[4];
            v60 = 4;
            v61 = 4i64;
            while ( 1 )
            {
              m_uiUseMotionFlg = this->m_uiUseMotionFlg;
              if ( !_bittest((const int *)&m_uiUseMotionFlg, v60) )
                goto LABEL_118;
              v62 = *v59;
              if ( (int)v62 < 0 )
                goto LABEL_118;
              if ( v60 )
                break;
              if ( this->m_pExternalMotion )
                v63 = this->m_iExternalMotionBoneIdx[this->m_iCurrentExternalMotion];
              else
                v63 = this->m_iMotionBoneIdx[this->m_iCurrentMotion];
              if ( v63 && v63[v62] && v63[v62][v54] >= 0 )
                goto LABEL_69;
LABEL_118:
              --v61;
              --v59;
              --v6;
              if ( (--v60 & 0x80000000) != 0 )
                goto LABEL_70;
            }
            v85 = v61;
            if ( v60 == this->m_iCurrentMotion )
              v85 = 0i64;
            v86 = this->m_iMotionBoneIdx[v85];
            if ( !v86 )
              goto LABEL_118;
            if ( !v86[v62] )
              goto LABEL_118;
            v87 = v86[v62][v54];
            if ( (int)v87 < 0 || ((*v6)->m_ppMotionData[v62]->m_pAnimBone[v87].m_uiInfoFlg & 1) != 0 || v54 <= 1 )
              goto LABEL_118;
LABEL_69:
            v57 = v60;
            iMotionNo[0] = v60;
LABEL_70:
            v64 = 16;
            if ( bMirrorFlg[v57] )
              v64 = 32;
            this->m_pbBoneMirrorFlg[v54] = (v57 + 1) | v64;
            OGLModel::searchMotionBoneIDLight(this, v53, iMotionNo, 0);
            v65 = 16;
            if ( bMirrorFlg[iMotionNo[0]] )
              v65 = 32;
            this->m_pbBoneMirrorFlg2[v54] = (LOBYTE(iMotionNo[0]) + 1) | v65;
            m_SecondaryInfo = this->m_SecondaryInfo;
            if ( m_SecondaryInfo )
            {
              v67 = v207;
              v68 = *(int *)((char *)&this->m_pFigure->m_pBone->m_sParents + (unsigned __int64)v207);
              m_SecondaryInfo[v55].iStateWorkFlg = 0;
              this->m_SecondaryInfo[v55].iStateTakeOverFlg = 0;
              this->m_SecondaryInfo[v55].fBlend = 0.0;
              if ( (*((_BYTE *)&this->m_pFigure->m_pBone->m_uiBoneInfoFlg + (unsigned __int64)v67) & 6) != 0 )
              {
                v69 = 0;
                if ( this->m_iSecondaryForceCount > 0 )
                {
                  p_uiOpt = &this->m_SecondaryForce[0].uiOpt;
                  do
                  {
                    v71 = *p_uiOpt;
                    if ( *(char *)p_uiOpt < 0 || v53 == *(p_uiOpt - 4) )
                    {
                      v72 = ((*p_uiOpt & 2) << 9) | 0x800;
                      if ( (v71 & 4) == 0 )
                        v72 = (*p_uiOpt & 2) << 9;
                      v73 = v72 | 1;
                      if ( (v71 & 8) == 0 )
                        v73 = v72;
                      v74 = v73 | 0x1000;
                      if ( (v71 & 0x100) == 0 )
                        v74 = v73;
                      v75 = v74 | 0x20000;
                      if ( (v71 & 0x400) == 0 )
                        v75 = v74;
                      v76 = v75 | 0x40000;
                      if ( (v71 & 0x1000) == 0 )
                        v76 = v75;
                      v77 = v76 | 0x4000;
                      if ( (v71 & 0x200) == 0 )
                        v77 = v76;
                      v78 = v77 | 0x100;
                      if ( (v71 & 0x10) == 0 )
                        v78 = v77;
                      v79 = v78 | 0x100000;
                      if ( (v71 & 0x2000) == 0 )
                        v79 = v78;
                      if ( (v71 & 0x4000) != 0 )
                      {
                        v79 |= 0x200000u;
                        LODWORD(this->m_SecondaryInfo[v55].fBlend) = p_uiOpt[1];
                      }
                      if ( (*(_BYTE *)p_uiOpt & 0x20) != 0 )
                      {
                        v79 |= 0x80u;
                        this->m_SecondaryInfo[v55].iStateTakeOverFlg |= v79;
                      }
                      this->m_SecondaryInfo[v55].iStateWorkFlg |= v79;
                    }
                    ++v69;
                    p_uiOpt += 6;
                  }
                  while ( v69 < this->m_iSecondaryForceCount );
                }
                if ( (int)v68 >= 0 )
                {
                  v80 = this->m_SecondaryInfo;
                  v81 = v68;
                  if ( SLOBYTE(v80[v68].iStateTakeOverFlg) < 0 )
                  {
                    if ( (v80[v68].iStateTakeOverFlg & 0x200000) != 0 )
                      v80[v55].fBlend = v80[v81].fBlend;
                    this->m_SecondaryInfo[v55].iStateTakeOverFlg = this->m_SecondaryInfo[v81].iStateTakeOverFlg;
                  }
                }
              }
            }
            m_pSecondary = this->m_pSecondary;
            if ( !m_pSecondary )
              goto LABEL_127;
            if ( m_pSecondary->m_uiFormatVer < 0xA )
            {
              m_pSecondaryBoneInfo = m_pSecondary->m_pSecondaryBoneInfo;
              if ( m_pSecondaryBoneInfo )
              {
                v106 = (*(int *)((_BYTE *)&m_pSecondaryBoneInfo->iSettingFlg + v205) & 0x1000) == 0;
                goto LABEL_146;
              }
LABEL_127:
              v52 = i;
              v6 = &this->m_pMotion[4];
              goto LABEL_128;
            }
            m_iSecondaryBoneIdx = this->m_iSecondaryBoneIdx;
            if ( m_iSecondaryBoneIdx )
              v84 = m_iSecondaryBoneIdx[v54];
            else
              v84 = OGLModel::convertBoneFigureToSecondary(this, v53);
            if ( v84 < 0 )
              goto LABEL_127;
            m_uiBoneCount = m_pSecondary->m_uiBoneCount;
            if ( !m_uiBoneCount )
              goto LABEL_127;
            v89 = 0;
            v90 = 0i64;
            if ( m_uiBoneCount <= 0 )
              goto LABEL_127;
            m_pSecondaryBoneInfo2 = m_pSecondary->m_pSecondaryBoneInfo2;
            v92 = m_pSecondaryBoneInfo2;
            while ( v92->iBoneNo != v84 )
            {
              ++v89;
              ++v90;
              ++v92;
              if ( v89 >= m_uiBoneCount )
                goto LABEL_127;
            }
            if ( v90 < 0 || !m_pSecondaryBoneInfo2 )
              goto LABEL_127;
            v106 = (m_pSecondaryBoneInfo2[v90].iSettingFlg & 0x1000) == 0;
LABEL_146:
            v52 = i;
            v6 = &this->m_pMotion[4];
            if ( !v106 )
              this->m_SecondaryInfo[v55].iStateFlg |= 0x1000u;
LABEL_128:
            v207 = (OGLAnimationBone *)((char *)v207 - 232);
            --v54;
            v205 -= 72i64;
            --v55;
            --v53;
            v56 = (__int64)v207;
          }
          while ( v53 >= 0 );
        }
        v93 = 0;
        v208 = 0;
LABEL_131:
        v94 = this->m_pFigure->m_uiBoneCount - 1;
        if ( v94 < 0 )
          goto LABEL_204;
        v95 = v94;
        v96 = v93;
        v97 = v93 == 1;
        v205 = v94;
        v204 = v93 == 1;
        v206 = v93;
        while ( 1 )
        {
          iMotionNo[0] = 0;
          v98 = OGLModel::searchMotionBoneID(this, v94, iMotionNo, &iAniboneNo, v97);
          v99 = iMotionNo[0];
          v207 = v98;
          if ( v96 == 1 && iMotionNo[0] != 4 )
            goto LABEL_202;
          v100 = this->m_SecondaryInfo;
          if ( (!v100 || (this->m_pFigure->m_pBone[v95].m_uiBoneInfoFlg & 2) == 0 || (this->m_uiModeFlg & 0x10) == 0)
            && (v98 || (this->m_pFigure->m_pBone[v95].m_uiBoneInfoFlg & 6) == 0) )
          {
            break;
          }
LABEL_201:
          v96 = v206;
LABEL_202:
          --v205;
          --v94;
          v95 = v205;
          v97 = v204;
          if ( v94 < 0 )
          {
            v93 = v208;
LABEL_204:
            v208 = ++v93;
            if ( v93 >= 2 )
            {
              v135 = motion;
              if ( motion->m_iKeyUvCount > 0 )
              {
                v136 = 0;
                if ( (int)this->m_pFigure->m_uiMultiUvCount > 0 )
                {
                  v137 = 14i64;
                  v138 = 88i64;
                  do
                  {
                    memmove(
                      *(void **)&this->m_OrthoView.m[v137 + 5],
                      *(const void **)((char *)&this->m_pFigure->m_uiStateFlg + v137 * 4),
                      8i64 * *(unsigned int *)((char *)&this->m_pFigure->m_uiStateFlg + v138));
                    v139 = this->m_fMotionFrame[0];
                    if ( (this->m_pFigure->m_iFormatType & 0x200) != 0 )
                      OGLModel::changeTilingUV(this, v135, v139);
                    else
                      OGLModel::changeUV(this, v135, v139);
                    ++v136;
                    v138 += 4i64;
                    v137 += 2i64;
                  }
                  while ( v136 < (signed int)this->m_pFigure->m_uiMultiUvCount );
                }
              }
              m_pParentModel = this->m_pParentModel;
              if ( m_pParentModel )
                OGLMatrix::multiplyFast(
                  &this->m_pBoneInfo[this->m_iChildBone].mRot,
                  &m_pParentModel->m_pBoneInfo[this->m_iParentBone].mRot,
                  &this->m_pBoneInfo[this->m_iChildBone].mRot);
              OGLModel::checkFollowBone(this);
              v165 = this->m_mWorld.m[14];
              v166 = this->m_mWorld.m[13];
              v167 = this->m_mWorld.m[12];
              this->m_vPosition2.y = v166;
              v168 = v165;
              this->m_vPosition2.z = v165;
              this->m_vPosition2.x = v167;
              v169 = (float)(v166 * this->m_mWorld.m[9]) + (float)(this->m_vPosition2.x * this->m_mWorld.m[8]);
              v170 = (float)((float)(v166 * this->m_mWorld.m[5]) + (float)(this->m_vPosition2.x * this->m_mWorld.m[4]))
                   + (float)(v165 * this->m_mWorld.m[6]);
              v171 = v165 * this->m_mWorld.m[10];
              v172 = (float)(v166 * this->m_mWorld.m[1]) + (float)(this->m_vPosition2.x * this->m_mWorld.m[0]);
              v173 = v168 * this->m_mWorld.m[2];
              this->m_vPosition2.y = v170;
              v174 = v169 + v171;
              this->m_vPosition2.z = v174;
              this->m_vPosition2.x = v172 + v173;
              this->m_vPosition2.z = v174 * -1.0;
              x = this->m_vPosition2.x;
              v176 = x * this->m_mWorld.m[1];
              v177 = x * this->m_mWorld.m[0];
              y = this->m_vPosition2.y;
              v179 = y * this->m_mWorld.m[4];
              v180 = (float)(v176 + (float)(y * this->m_mWorld.m[5]))
                   + (float)((float)(v174 * -1.0) * this->m_mWorld.m[9]);
              v181 = (float)(v174 * -1.0) * this->m_mWorld.m[10];
              v182 = (float)(v174 * -1.0) * this->m_mWorld.m[8];
              v183 = (float)(this->m_vPosition2.x * this->m_mWorld.m[2]) + (float)(y * this->m_mWorld.m[6]);
              this->m_vPosition2.y = v180;
              this->m_vPosition2.x = (float)(v179 + v177) + v182;
              this->m_vPosition2.z = v183 + v181;
              m_pFigure = this->m_pFigure;
              if ( this->m_SecondaryEnable )
              {
                if ( m_pFigure->m_iNodeLevelMax > 0 )
                {
                  do
                  {
                    v189 = this->m_pFigure->m_uiBoneCount - 1;
                    if ( v189 >= 0 )
                    {
                      v190 = v189;
                      do
                      {
                        if ( this->m_pFigure->m_pBone[v190].m_iNodeLevel == mirrorType )
                          OGLModel::setBoneTransNotSecOnce(this, v189, v164);
                        --v190;
                        --v189;
                      }
                      while ( v189 >= 0 );
                    }
                    ++mirrorType;
                  }
                  while ( mirrorType < this->m_pFigure->m_iNodeLevelMax );
                }
              }
              else
              {
                v185 = m_pFigure->m_uiBoneCount - 1;
                v186 = v185;
                if ( v185 >= 0 )
                {
                  v187 = v185;
                  do
                  {
                    v188 = &this->m_pFigure->m_pBone[v187];
                    if ( v188->m_sParents < 0 )
                      OGLModel::setBoneTrans(this, v188, 3);
                    --v187;
                    --v186;
                  }
                  while ( v186 >= 0 );
                }
              }
              v191 = this->m_pFigure->m_uiBoneCount - 1;
              if ( v191 > 0 )
              {
                v192 = 536i64 * v191;
                do
                {
                  isZero = OGLMatrix::isZero((OGLMatrix *)((char *)&this->m_pBoneInfo->mRot + v192));
                  v192 = v196 - 536;
                  *(_BYTE *)(v197 + v194 - 536 + 933) = isZero;
                }
                while ( v195 - 1 > 0 );
              }
              this->m_iPreMotionIndex[0] = this->m_iMotionIndex[0];
              this->m_fPreMotionFrame[0] = this->m_fMotionFrame[0];
              this->m_iPreMotionIndex[1] = this->m_iMotionIndex[1];
              this->m_fPreMotionFrame[1] = this->m_fMotionFrame[1];
              this->m_iPreMotionIndex[2] = this->m_iMotionIndex[2];
              this->m_fPreMotionFrame[2] = this->m_fMotionFrame[2];
              this->m_iPreMotionIndex[3] = this->m_iMotionIndex[3];
              this->m_fPreMotionFrame[3] = this->m_fMotionFrame[3];
              this->m_iPreMotionIndex[4] = this->m_iMotionIndex[4];
              this->m_fPreMotionFrame[4] = this->m_fMotionFrame[4];
              ++this->m_iMotionPostureCount;
              return;
            }
            goto LABEL_131;
          }
        }
        m_pMirror = this->m_pMirror;
        v102 = 0;
        v201 = 0;
        v103 = v94;
        if ( m_pMirror )
        {
          m_iMirrorBoneIdx = this->m_iMirrorBoneIdx;
          if ( m_iMirrorBoneIdx )
          {
            v105 = m_iMirrorBoneIdx[v95];
          }
          else
          {
            v105 = OGLModel::convertBoneFigureToMirror(this, v94);
            m_pMirror = this->m_pMirror;
          }
          if ( v105 >= 0 )
          {
            m_MirrorData = m_pMirror->m_MirrorData;
            v109 = v105;
            boneID = m_pMirror->m_MirrorData[v105].boneID;
            if ( (int)boneID < 0 )
            {
              mirrorType = 0;
            }
            else
            {
              m_iMirrorBoneRIdx = this->m_iMirrorBoneRIdx;
              if ( m_iMirrorBoneRIdx )
              {
                v103 = m_iMirrorBoneRIdx[boneID];
                mirrorType = m_MirrorData[v109].mirrorType;
                if ( v103 < 0 )
                  v103 = v94;
              }
              else
              {
                v112 = OGLModel::convertBoneMirrorToFigure(this, boneID);
                m_pMirror = this->m_pMirror;
                mirrorType = m_MirrorData[v109].mirrorType;
                v103 = v112;
                if ( v112 < 0 )
                  v103 = v94;
              }
            }
          }
        }
        v113 = bMirrorFlg[v99];
        *(_QWORD *)iMotionNo = v99;
        v114 = v99;
        if ( v206 )
          v115 = &this->m_pbBoneMirrorFlg[v103];
        else
          v115 = &this->m_pbBoneMirrorFlg2[v103];
        v116 = *v115 & 0xF;
        v117 = (unsigned __int8)*v115 >> 4;
        v118 = 0;
        if ( (_DWORD)v99 == v116 - 1 )
        {
          v118 = v113 != 0;
        }
        else if ( v116 == 2 || (_DWORD)v99 == 4 )
        {
          v118 = v113 != 0;
        }
        else if ( (v113 != 0) + 1 == v117 && v113 )
        {
          v118 = 1;
        }
        v106 = this->m_bBaseOffScaleFlg == 0;
        v119 = *(float *)&FLOAT_1_0;
        pOffsetMat = 0i64;
        if ( !v106 && !this->m_iMotionPostureCount )
        {
          v120 = v205;
          if ( (int)v99 >= 2 )
            goto LABEL_178;
          v121 = this->m_iMotOffSceleIndex;
          v122 = this->m_pBoneInfo;
          v119 = v122[v205].fMotOffScale[v121];
          if ( v119 < 0.0 )
          {
            v119 = this->m_fMotOffScale[v121];
LABEL_178:
            if ( v118 )
            {
              iMirrorType = mirrorType;
              v201 = mirrorType;
            }
            else
            {
              iMirrorType = 0;
              v103 = v94;
            }
            if ( m_pMirror && this->m_bPrevBoneMirrorFlg )
            {
              v124 = this->m_iMirrorBoneIdx;
              if ( v124 )
              {
                v125 = v124[v120];
              }
              else
              {
                v125 = OGLModel::convertBoneFigureToMirror(this, v94);
                m_pMirror = this->m_pMirror;
              }
              if ( v125 >= 0 && m_pMirror->m_MirrorData[v125].boneID >= 0 )
              {
                v102 = m_pMirror->m_MirrorData[v125].mirrorType;
                if ( v94 == this->m_iMirrorBaseBoneNo )
                  v102 = (v102 | 0x8000) ^ 1;
              }
            }
            v126 = this->m_pBoneInfo;
            m_iBoneStackIndex = this->m_iBoneStackIndex;
            m_uiModeFlg = this->m_uiModeFlg;
            v129 = v103;
            v130 = v103;
            v131 = 5 * m_iBoneStackIndex;
            pPrev = (OGLPrevAnimationBone *)((char *)&v126->pPrevStack[m_iBoneStackIndex] + v130 * 536);
            v133 = &v126[v130];
            if ( (m_uiModeFlg & 0x10) != 0
              || (v100 ? (v131 = v100[v205].iStateFlg | (unsigned int)(v100[v205].iStateWorkFlg | v100[v205].iStateTakeOverFlg)) : (v131 = 0i64),
                  v202 = 0,
                  (v131 & 0x100000) != 0) )
            {
              v202 = 1;
            }
            if ( !v207 )
            {
              p_m_aBindPose = &this->m_pFigure->m_pBone[v94].m_aBindPose;
              goto LABEL_199;
            }
            v140 = this->m_pFigure;
            if ( (v207->m_uiInfoFlg & 1) != 0 )
            {
              m_pBone = v140->m_pBone;
              if ( (m_pBone[v129].m_uiBoneInfoFlg & 6) != 0 )
                goto LABEL_200;
              v131 = 232i64 * v94;
              p_m_aBindPose = (OGLPrevAnimationBone *)((char *)&m_pBone->m_aBindPose + v131);
LABEL_199:
              OGLAnimationBone::getBoneMatrixBindPose(
                (OGLAnimationBone *)v131,
                &v133->mRot,
                &v133->vScale,
                p_m_aBindPose,
                v133->pPrevStack,
                pPrev,
                iMirrorType,
                v102,
                this->m_fMotionBlend[v114]);
LABEL_200:
              mirrorType = 0;
              goto LABEL_201;
            }
            v142 = v140->m_pBone;
            v143 = v129;
            m_uiBoneInfoFlg = v142[v129].m_uiBoneInfoFlg;
            v145 = (m_uiBoneInfoFlg & 0x10) == 0 && (m_uiModeFlg & 0x1000) == 0;
            if ( v100 )
              v146 = v100[v129].iStateFlg | v100[v129].iStateWorkFlg | v100[v129].iStateTakeOverFlg;
            else
              v146 = 0;
            if ( (v146 & 0x200000) != 0 && (fBlend = v100[v129].fBlend, fBlend != 1.0) )
            {
              v148 = *(_QWORD *)iMotionNo;
            }
            else
            {
              v148 = *(_QWORD *)iMotionNo;
              fBlend = this->m_fMotionBlend[*(_QWORD *)iMotionNo];
            }
            if ( (m_uiBoneInfoFlg & 6) != 0 )
            {
              if ( v202 )
              {
                OGLAnimationBone::getBoneMatrixBindPose(
                  (OGLAnimationBone *)(232i64 * v94),
                  &v133->mRot,
                  &v133->vScale,
                  &v142[v94].m_aBindPose,
                  v133->pPrevStack,
                  pPrev,
                  v201,
                  v102,
                  this->m_fMotionBlend[*(_QWORD *)iMotionNo]);
                goto LABEL_200;
              }
              if ( v145 )
              {
                if ( v100 )
                {
                  v100[v129].iStateWorkFlg |= 0x1000u;
                  v149 = this->m_pFigure->m_pBone;
                  if ( (v149[v143].m_uiBoneInfoFlg & 4) != 0 )
                  {
                    m_sChild = v149[v143].m_sChild;
                    if ( (int)m_sChild >= 0 )
                    {
                      this->m_SecondaryInfo[m_sChild].iStateWorkFlg |= 0x1000u;
                      for ( j = this->m_pFigure->m_pBone[m_sChild].m_sBrother;
                            j >= 0;
                            j = this->m_pFigure->m_pBone[j].m_sBrother )
                      {
                        this->m_SecondaryInfo[j].iStateWorkFlg |= 0x1000u;
                      }
                    }
                  }
                }
                if ( (this->m_pFigure->m_pBone[v143].m_uiBoneInfoFlg & 2) != 0 )
                  fBlend = 0.0;
              }
              else
              {
                if ( (m_uiBoneInfoFlg & 4) != 0 && (m_uiModeFlg & 0x2000) != 0 )
                {
                  v152 = v142[v143].m_sChild;
                  v100[v152].iStateWorkFlg |= 0x1000u;
                }
                v153 = this->m_SecondaryInfo;
                if ( v153 )
                {
                  v154 = this->m_pFigure->m_pBone;
                  if ( (v154[v143].m_uiBoneInfoFlg & 4) != 0 )
                  {
                    v155 = v154[v143].m_sChild;
                    if ( (int)v155 >= 0 )
                      v153[v155].iStateWorkFlg |= 0x1000u;
                  }
                }
              }
              v156 = this->m_fMotionFrame[*(_QWORD *)iMotionNo];
              if ( !this->m_bMotOffScaleFlg && !this->m_bBaseOffScaleFlg )
              {
                v157 = this->m_pBoneInfo;
                p_vScale = &v157[v130].vScale;
                p_mRot = &v157[v130].mRot;
LABEL_245:
                OGLAnimationBone::getBoneMatrix(
                  v207,
                  p_mRot,
                  p_vScale,
                  v156,
                  v133->pPrevStack,
                  pPrev,
                  v119,
                  iPrevMirrorType,
                  v201,
                  v102,
                  fBlend);
                goto LABEL_200;
              }
              v160 = this->m_pBoneInfo;
              v161 = &v160[v130].vScale;
              v162 = &v160[v130].mRot;
            }
            else
            {
              v156 = this->m_fMotionFrame[v148];
              if ( !this->m_bMotOffScaleFlg && !this->m_bBaseOffScaleFlg )
              {
                p_vScale = &v133->vScale;
                p_mRot = &v133->mRot;
                goto LABEL_245;
              }
              v161 = &v133->vScale;
              v162 = &v133->mRot;
            }
            OGLAnimationBone::getBoneMatrix(
              v207,
              v162,
              v161,
              v156,
              bParts,
              v133->pPrevStack,
              pPrev,
              v119,
              pOffsetMat,
              v201,
              v102,
              fBlend);
            goto LABEL_200;
          }
          pOffsetMat = &v122[v94].fMotOffRotate[v121];
        }
        v120 = v205;
        goto LABEL_178;
      }
    }
  }
}

void __fastcall OGLModel::updatePostureSecExe(OGLModel *this, OGLMatrix *posture, float blendRate)
{
  int v4; // esi
  bool v5; // r14
  OGLMatrix *p_m_mWorld; // rdx
  float v7; // xmm0_4
  float v8; // xmm8_4
  float v9; // xmm2_4
  OGLVec3 *p_m_vPosition2; // rcx
  float v11; // xmm13_4
  float v12; // xmm12_4
  float v13; // xmm14_4
  float v14; // xmm3_4
  float v15; // xmm4_4
  float v16; // xmm5_4
  float v17; // xmm6_4
  float v18; // xmm9_4
  float v19; // eax
  float v20; // xmm10_4
  float x; // xmm2_4
  OGLFigure *m_pFigure; // rcx
  int v23; // edi
  __int64 v24; // rbp
  int v25; // edi
  __int64 v26; // rbp

  if ( this->m_pMotion[0] && this->m_iMotionPostureCount )
  {
    if ( this->m_SecondaryEnable )
    {
      v4 = 1;
      v5 = 0;
      if ( this->m_pMirror )
        v5 = OGLModel::checkMotionMirror(this, 0i64) != 0;
      p_m_mWorld = &this->m_mWorld;
      v7 = this->m_mWorld.m[13];
      v8 = this->m_mWorld.m[14];
      v9 = this->m_mWorld.m[4];
      p_m_vPosition2 = &this->m_vPosition2;
      v11 = p_m_mWorld->m[0];
      v12 = p_m_mWorld->m[1];
      v13 = p_m_mWorld->m[2];
      v14 = p_m_mWorld->m[5];
      v15 = p_m_mWorld->m[6];
      v16 = p_m_mWorld->m[8];
      v17 = p_m_mWorld->m[9];
      v18 = p_m_mWorld->m[10];
      v19 = this->m_mWorld.m[12];
      p_m_vPosition2->y = v7;
      p_m_vPosition2->z = v8;
      p_m_vPosition2->x = v19;
      v20 = p_m_vPosition2->x * v9;
      x = p_m_vPosition2->x;
      p_m_vPosition2->y = (float)(v20 + (float)(v7 * v14)) + (float)(v8 * v15);
      p_m_vPosition2->z = (float)((float)(x * v16) + (float)(v7 * v17)) + (float)(v8 * v18);
      p_m_vPosition2->x = (float)((float)(v7 * v12) + (float)(x * v11)) + (float)(v8 * v13);
      this->m_vPosition2.z = this->m_vPosition2.z * -1.0;
      OGLVec3::transPoint(p_m_vPosition2, p_m_mWorld);
      m_pFigure = this->m_pFigure;
      if ( (m_pFigure->m_iFormatType & 1) != 0 )
      {
        if ( m_pFigure->m_iNodeLevelMax > 1 )
        {
          do
          {
            v23 = this->m_pFigure->m_uiBoneCount - 1;
            if ( v23 >= 0 )
            {
              v24 = v23;
              do
              {
                if ( this->m_pFigure->m_pBone[v24].m_iNodeLevel == v4 )
                  OGLModel::setBoneTransSecOnceNew(this, v23, v5);
                --v24;
                --v23;
              }
              while ( v23 >= 0 );
            }
            ++v4;
          }
          while ( v4 < this->m_pFigure->m_iNodeLevelMax );
        }
      }
      else if ( m_pFigure->m_iNodeLevelMax > 1 )
      {
        do
        {
          v25 = this->m_pFigure->m_uiBoneCount - 1;
          if ( v25 >= 0 )
          {
            v26 = v25;
            do
            {
              if ( this->m_pFigure->m_pBone[v26].m_iNodeLevel == v4 )
                OGLModel::setBoneTransSecOnce(this, v25, v5);
              --v26;
              --v25;
            }
            while ( v25 >= 0 );
          }
          ++v4;
        }
        while ( v4 < this->m_pFigure->m_iNodeLevelMax );
      }
    }
    this->m_iSecondaryForceCount = 0;
  }
}

void __fastcall OGLModel::updatePostureTPose(OGLModel *this, OGLMatrix *posture, float blendRate)
{
  OGLMotion *v3; // rax
  OGLMotion *v6; // rax
  int m_usMotionCount; // eax
  OGLMotion *v8; // rax
  int v9; // eax
  OGLMotion *v10; // rax
  int v11; // eax
  OGLMotion *v12; // rax
  int v13; // eax
  float v14; // xmm0_4
  OGLMotionData *v15; // r8
  OGLMotion *v16; // rdx
  float m_fTotalFrame; // xmm1_4
  OGLMotion *v18; // rdx
  float v19; // xmm1_4
  OGLMotion *v20; // rdx
  float v21; // xmm1_4
  OGLMotion *v22; // rdx
  float v23; // xmm1_4
  __int64 v24; // r11
  _OWORD *v25; // rcx
  __int64 v26; // r9
  signed int v27; // ecx
  __int64 v28; // r9
  unsigned __int64 v29; // r10
  __int64 v30; // r8
  __int64 v31; // rdx
  OGLMatrix *m_pBindPose; // rcx
  _OGLModelBone *m_pBoneInfo; // rax
  _OGLModelBone *v34; // rax
  OGLMatrix *v35; // rcx
  _OGLModelBone *v36; // rax
  _OGLModelBone *v37; // rax
  OGLMatrix *v38; // rcx
  _OGLModelBone *v39; // rax
  _OGLModelBone *v40; // rax
  OGLMatrix *v41; // rcx
  _OGLModelBone *v42; // rax
  _OGLModelBone *v43; // rax
  __int64 v44; // rdx
  __int64 v45; // r8
  OGLMatrix *v46; // rcx
  _OGLModelBone *v47; // rax
  _OGLModelBone *v48; // rax
  OGLMatrix *p_mRot; // rax
  OGLModel *m_pParentModel; // r9
  signed int v51; // ecx
  __int64 v52; // rdi
  __int64 v53; // rsi
  OGLBone *v54; // rdx

  v3 = this->m_pMotion[0];
  if ( v3 && this->m_iMotionIndex[0] < (signed int)v3->m_usMotionCount )
  {
    v6 = this->m_pMotion[4];
    if ( v6 )
    {
      m_usMotionCount = v6->m_usMotionCount;
      if ( this->m_iMotionIndex[4] >= m_usMotionCount )
        this->m_iMotionIndex[4] = m_usMotionCount - 1;
    }
    v8 = this->m_pMotion[3];
    if ( v8 )
    {
      v9 = v8->m_usMotionCount;
      if ( this->m_iMotionIndex[3] >= v9 )
        this->m_iMotionIndex[3] = v9 - 1;
    }
    v10 = this->m_pMotion[2];
    if ( v10 )
    {
      v11 = v10->m_usMotionCount;
      if ( this->m_iMotionIndex[2] >= v11 )
        this->m_iMotionIndex[2] = v11 - 1;
    }
    v12 = this->m_pMotion[1];
    if ( v12 )
    {
      v13 = v12->m_usMotionCount;
      if ( this->m_iMotionIndex[1] >= v13 )
        this->m_iMotionIndex[1] = v13 - 1;
    }
    v14 = this->m_fMotionFrame[0];
    v15 = this->m_pMotion[0]->m_ppMotionData[this->m_iMotionIndex[0]];
    this->m_fMotionBlend[1] = this->m_fMotionBlend[0];
    if ( v14 < v15->m_fTotalFrame )
    {
      v16 = this->m_pMotion[4];
      if ( v16 )
      {
        if ( this->m_iMotionIndex[4] >= 0 )
        {
          m_fTotalFrame = v16->m_ppMotionData[this->m_iMotionIndex[4]]->m_fTotalFrame;
          if ( this->m_fMotionFrame[4] > m_fTotalFrame )
            this->m_fMotionFrame[4] = m_fTotalFrame - 1.0;
        }
      }
      v18 = this->m_pMotion[3];
      if ( v18 )
      {
        if ( this->m_iMotionIndex[3] >= 0 )
        {
          v19 = v18->m_ppMotionData[this->m_iMotionIndex[3]]->m_fTotalFrame;
          if ( this->m_fMotionFrame[3] > v19 )
            this->m_fMotionFrame[3] = v19 - 1.0;
        }
      }
      v20 = this->m_pMotion[2];
      if ( v20 )
      {
        if ( this->m_iMotionIndex[2] >= 0 )
        {
          v21 = v20->m_ppMotionData[this->m_iMotionIndex[2]]->m_fTotalFrame;
          if ( this->m_fMotionFrame[2] > v21 )
            this->m_fMotionFrame[2] = v21 - 1.0;
        }
      }
      v22 = this->m_pMotion[1];
      if ( v22 )
      {
        if ( this->m_iMotionIndex[1] >= 0 )
        {
          v23 = v22->m_ppMotionData[this->m_iMotionIndex[1]]->m_fTotalFrame;
          if ( this->m_fMotionFrame[1] > v23 )
            this->m_fMotionFrame[1] = v23 - 1.0;
        }
      }
      v24 = 0i64;
      *(_WORD *)&this->m_bTrans = 257;
      this->m_bPostureChange = 1;
      if ( posture )
      {
        if ( !OGLMatrix::equal(&this->m_mWorld, posture) )
        {
          this->m_vPosition.x = *(float *)(v26 + 48);
          this->m_vPosition.y = *(float *)(v26 + 52);
          this->m_vPosition.z = *(float *)(v26 + 56);
          *v25 = *(_OWORD *)v26;
          v25[1] = *(_OWORD *)(v26 + 16);
          v25[2] = *(_OWORD *)(v26 + 32);
          v25[3] = *(_OWORD *)(v26 + 48);
        }
        this->m_bPostureChange = 1;
      }
      else
      {
        *(_QWORD *)&this->m_vPosition.x = 0i64;
        this->m_vPosition.z = 0.0;
      }
      v27 = this->m_pFigure->m_uiBoneCount - 1;
      v28 = v27;
      if ( v27 >= 4i64 )
      {
        v29 = ((unsigned __int64)(v27 - 4i64) >> 2) + 1;
        v30 = (__int64)v27 << 6;
        v31 = v27;
        v28 = v27 - 4 * v29;
        do
        {
          v31 -= 4i64;
          v30 -= 256i64;
          m_pBindPose = this->m_pFigure->m_pBindPose;
          m_pBoneInfo = this->m_pBoneInfo;
          *(_OWORD *)m_pBoneInfo[v31 + 4].mRot.m = *(_OWORD *)((char *)m_pBindPose[4].m + v30);
          *(_OWORD *)&m_pBoneInfo[v31 + 4].mRot.m[4] = *(_OWORD *)((char *)&m_pBindPose[4].m[4] + v30);
          *(_OWORD *)&m_pBoneInfo[v31 + 4].mRot.m[8] = *(_OWORD *)((char *)&m_pBindPose[4].m[8] + v30);
          *(_OWORD *)&m_pBoneInfo[v31 + 4].mRot.m[12] = *(_OWORD *)((char *)&m_pBindPose[4].m[12] + v30);
          v34 = this->m_pBoneInfo;
          v34[v31 + 4].vScale.x = 1.0;
          v34[v31 + 4].vScale.y = 1.0;
          v34[v31 + 4].vScale.z = 1.0;
          v35 = this->m_pFigure->m_pBindPose;
          v36 = this->m_pBoneInfo;
          *(_OWORD *)v36[v31 + 3].mRot.m = *(_OWORD *)((char *)v35[3].m + v30);
          *(_OWORD *)&v36[v31 + 3].mRot.m[4] = *(_OWORD *)((char *)&v35[3].m[4] + v30);
          *(_OWORD *)&v36[v31 + 3].mRot.m[8] = *(_OWORD *)((char *)&v35[3].m[8] + v30);
          *(_OWORD *)&v36[v31 + 3].mRot.m[12] = *(_OWORD *)((char *)&v35[3].m[12] + v30);
          v37 = this->m_pBoneInfo;
          v37[v31 + 3].vScale.x = 1.0;
          v37[v31 + 3].vScale.y = 1.0;
          v37[v31 + 3].vScale.z = 1.0;
          v38 = this->m_pFigure->m_pBindPose;
          v39 = this->m_pBoneInfo;
          *(_OWORD *)v39[v31 + 2].mRot.m = *(_OWORD *)((char *)v38[2].m + v30);
          *(_OWORD *)&v39[v31 + 2].mRot.m[4] = *(_OWORD *)((char *)&v38[2].m[4] + v30);
          *(_OWORD *)&v39[v31 + 2].mRot.m[8] = *(_OWORD *)((char *)&v38[2].m[8] + v30);
          *(_OWORD *)&v39[v31 + 2].mRot.m[12] = *(_OWORD *)((char *)&v38[2].m[12] + v30);
          v40 = this->m_pBoneInfo;
          v40[v31 + 2].vScale.x = 1.0;
          v40[v31 + 2].vScale.y = 1.0;
          v40[v31 + 2].vScale.z = 1.0;
          v41 = this->m_pFigure->m_pBindPose;
          v42 = this->m_pBoneInfo;
          *(_OWORD *)v42[v31 + 1].mRot.m = *(_OWORD *)((char *)v41[1].m + v30);
          *(_OWORD *)&v42[v31 + 1].mRot.m[4] = *(_OWORD *)((char *)&v41[1].m[4] + v30);
          *(_OWORD *)&v42[v31 + 1].mRot.m[8] = *(_OWORD *)((char *)&v41[1].m[8] + v30);
          *(_OWORD *)&v42[v31 + 1].mRot.m[12] = *(_OWORD *)((char *)&v41[1].m[12] + v30);
          v43 = this->m_pBoneInfo;
          v43[v31 + 1].vScale.x = 1.0;
          v43[v31 + 1].vScale.y = 1.0;
          v43[v31 + 1].vScale.z = 1.0;
          --v29;
        }
        while ( v29 );
      }
      if ( v28 > 0 )
      {
        v44 = v28;
        v45 = v28 << 6;
        do
        {
          --v44;
          --v28;
          v45 -= 64i64;
          v46 = this->m_pFigure->m_pBindPose;
          v47 = this->m_pBoneInfo;
          *(_OWORD *)v47[v44 + 1].mRot.m = *(_OWORD *)((char *)v46[1].m + v45);
          *(_OWORD *)&v47[v44 + 1].mRot.m[4] = *(_OWORD *)((char *)&v46[1].m[4] + v45);
          *(_OWORD *)&v47[v44 + 1].mRot.m[8] = *(_OWORD *)((char *)&v46[1].m[8] + v45);
          *(_OWORD *)&v47[v44 + 1].mRot.m[12] = *(_OWORD *)((char *)&v46[1].m[12] + v45);
          v48 = this->m_pBoneInfo;
          v48[v44 + 1].vScale.x = 1.0;
          v48[v44 + 1].vScale.y = 1.0;
          v48[v44 + 1].vScale.z = 1.0;
        }
        while ( v28 > 0 );
      }
      p_mRot = &this->m_pBoneInfo->mRot;
      *(_QWORD *)p_mRot->m = 1065353216i64;
      LODWORD(p_mRot->m[4]) = v24;
      *(_QWORD *)&p_mRot->m[8] = v24;
      *(_QWORD *)&p_mRot->m[12] = v24;
      *(_QWORD *)&p_mRot->m[5] = 1065353216i64;
      *(_QWORD *)&p_mRot->m[2] = v24;
      *(_QWORD *)&p_mRot->m[10] = 1065353216i64;
      LODWORD(p_mRot->m[14]) = v24;
      LODWORD(p_mRot->m[7]) = v24;
      p_mRot->m[15] = 1.0;
      m_pParentModel = this->m_pParentModel;
      if ( m_pParentModel )
        OGLMatrix::multiplyFast(
          &this->m_pBoneInfo[this->m_iChildBone].mRot,
          &m_pParentModel->m_pBoneInfo[this->m_iParentBone].mRot,
          &this->m_pBoneInfo[this->m_iChildBone].mRot);
      v51 = this->m_pFigure->m_uiBoneCount - 1;
      v52 = v51;
      if ( v51 >= 0 )
      {
        v53 = v51;
        do
        {
          v54 = &this->m_pFigure->m_pBone[v53];
          if ( v54->m_sParents < 0 )
            OGLModel::setBoneTrans(this, v54, 3);
          --v53;
          --v52;
        }
        while ( v52 >= 0 );
      }
    }
  }
}

void *__fastcall updatetask(void *ModelClass, __int64 a2, float a3)
{
  const AgMutex *v4; // rsi
  OGLMatrix *v5; // rdx
  int v6; // edi
  int v7; // er8
  int v8; // edi
  _RTL_CRITICAL_SECTION *lpCriticalSection; // [rsp+30h] [rbp-38h]

  v4 = (const AgMutex *)((char *)ModelClass + 9280);
  lpCriticalSection = (_RTL_CRITICAL_SECTION *)((char *)ModelClass + 9280);
  EnterCriticalSection((LPCRITICAL_SECTION)ModelClass + 232);
  v6 = *((_DWORD *)ModelClass + 2280);
  if ( (v6 & 1) != 0 )
    OGLModel::updatePostureExe((OGLModel *)ModelClass, (OGLMatrix *)((char *)ModelClass + 9052), a3);
  if ( (v6 & 2) != 0 )
LABEL_4:
    OGLModel::updatePostureSecExe((OGLModel *)ModelClass, v5, a3);
  while ( 1 )
  {
    *((_BYTE *)ModelClass + 9361) = 1;
    EnterCriticalSection((LPCRITICAL_SECTION)ModelClass + 233);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)ModelClass + 9224));
    WakeConditionVariable((PCONDITION_VARIABLE)ModelClass + 1159);
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)ModelClass + 9224));
    LeaveCriticalSection((LPCRITICAL_SECTION)ModelClass + 233);
    while ( *((_BYTE *)ModelClass + 9361) )
      AgCondition::wait((AgCondition *)((char *)ModelClass + 9168), v4, v7);
    if ( !*((_BYTE *)ModelClass + 9360) )
      break;
    v8 = *((_DWORD *)ModelClass + 2280);
    if ( (v8 & 1) != 0 )
      OGLModel::updatePostureExe((OGLModel *)ModelClass, (OGLMatrix *)((char *)ModelClass + 9052), a3);
    if ( (v8 & 2) != 0 )
      goto LABEL_4;
  }
  *((_BYTE *)ModelClass + 9361) = 1;
  EnterCriticalSection((LPCRITICAL_SECTION)ModelClass + 233);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)ModelClass + 9224));
  WakeConditionVariable((PCONDITION_VARIABLE)ModelClass + 1159);
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)ModelClass + 9224));
  LeaveCriticalSection((LPCRITICAL_SECTION)ModelClass + 233);
  LeaveCriticalSection(lpCriticalSection);
  return 0i64;
}

__int64 __fastcall AgCondition::wait(AgCondition *this, const AgMutex *mutex, int timeoutMS)
{
  unsigned int v5; // esi

  if ( mutex )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)this);
    LeaveCriticalSection((LPCRITICAL_SECTION)mutex);
    v5 = SleepConditionVariableCS(
           (PCONDITION_VARIABLE)&this->m_conditionVariable.m_data,
           (PCRITICAL_SECTION)this->m_conditionVariable.m_mutex,
           0xFFFFFFFF);
    LeaveCriticalSection((LPCRITICAL_SECTION)this);
    EnterCriticalSection((LPCRITICAL_SECTION)mutex);
  }
  else
  {
    EnterCriticalSection((LPCRITICAL_SECTION)this);
    v5 = SleepConditionVariableCS(
           (PCONDITION_VARIABLE)&this->m_conditionVariable.m_data,
           (PCRITICAL_SECTION)this->m_conditionVariable.m_mutex,
           0xFFFFFFFF);
    LeaveCriticalSection((LPCRITICAL_SECTION)this);
  }
  return v5;
}

