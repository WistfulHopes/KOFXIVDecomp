#include "dev/kof/master/development/source/baseproject/jni/game/network/netmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloatmp.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/mutex.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thread"
#include "dev/kof/master/development/source/baseproject/jni/game/network/leaderboard.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapemeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/jpeg_imagefile.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/memory"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treetext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefileutil.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/input/imesystem.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thr/xthread"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_manager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_docview.h"
#include "dev/silverware/git/sdk/agcondition.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_range.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/globalheapmemory.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/fixmemory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogleffect.h"
#include "dev/silverware/git/sdk/input/agsdlmappingparser.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_hash.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/matrix4unaligned.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/weapon/actorweapon.h"
#include "dev/silverware/git/sdk/filesystem/agfile.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/quat_aos.h"
#include "dev/silverware/git/sdk/platforms/pc/system/agpcsysteminfo.h"
#include "dev/kof/master/development/source/baseproject/jni/game/system/battlecontroller.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "dev/silverware/git/sdk/filesystem/agpath.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix4x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixpool.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogllight.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actionsystem.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shader.h"
#include "dev/silverware/git/sdk/filesystem/agmount.h"
#include "dev/silverware/git/sdk/agreferencecountinl.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaactiondataformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_sgmlparser.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglcurve.h"
#include "dev/silverware/git/sdk/filesystem/agdirectory.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestage.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charafilebase.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_context.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/tkndata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_constants.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessgen.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treeshape.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessellator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/cameramotionpreviewsettings.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/stageprojectdata.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/commanddataformat.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglsprite.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_sse.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steamclientpublic.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitivebundle.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglrender.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestagedatas.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treecachenode.h"
#include "dev/silverware/git/sdk/aghash.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/tkndatas.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treenode.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_loader.h"
#include "dev/silverware/git/sdk/agstringutils.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglfog.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic0.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/tween.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cacheeffect.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_system.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphfitter.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefile.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/math.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/asynccharafileload.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_player.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exthread.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/variableheapmemorybase.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/bilinkable.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_resource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector2unaligned.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_stroker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/hitrectcollection.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/dds_imagefile.h"
#include "dev/silverware/git/sdk/agmemorystream.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_missiondataloading.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/trainingsetting.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/combomissionattackeventlistener.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charamaterialsettingformat.h"
#include "dev/silverware/git/sdk/agmemorypool.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_functions.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/fix32.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textmeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "dev/silverware/git/sdk/input/agcontrollerbuttoncomponent.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "dev/silverware/git/sdk/agpointerinl.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actorcharabase.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphparam.h"
#include "dev/silverware/git/sdk/agcondition.inl"
#include "dev/silverware/git/sdk/agstream.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlehud.h"
#include "dev/kof/master/development/source/baseproject/jni/game/define/charabonedefine.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcache.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/physicalheapmemory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battleeventhandler.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/colorholder.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcacheconfig.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/texstring.h"
#include "dev/silverware/git/sdk/agsemaphore.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/damagesetting.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hairliner.h"
#include "dev/silverware/git/sdk/agsemaphore.inl"
#include "dev/silverware/git/sdk/agconditionvariable.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_filterdesc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_styledtext.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/condition_variable"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix3x4.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/battleplayerinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_core.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_queue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_fontmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitive.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/easingnumber.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/errorchecker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocaddr.h"
#include "dev/silverware/git/sdk/system/agusermanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_radixtree.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actionblackout.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdatalistmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_twips.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/deque"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdata/effectdata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_containers.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleonlinewatching.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_wwhelper.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/chartdata.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/cpusequencedataformat.h"
#include "dev/silverware/git/sdk/util/agservice.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleloading.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/shot/actorshot.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actorchara.h"
#include "dev/silverware/git/sdk/agthreadpool.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/commandcheck.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglshader.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/boolinvec.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/time.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/restrictringbuffer.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/materialshowcontrol.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/matchingsystem.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/jobmanager.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/syncmenuimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_vertex.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_ps4modelroom.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/moviedatadefine.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/fontprovider/render_fontproviderhud.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_wstring.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/refcountable.h"
#include "program files (x86)/windows kits/8.1/include/shared/guiddef.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charahitrectformat.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector3unaligned.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "program files (x86)/windows kits/8.1/include/shared/stralign.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "dev/silverware/git/sdk/agmovieplayer.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_typeinfo.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestageresourcecontainer.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestageshader.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actor.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threadcheck.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/resourcemanager.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charadataunify.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textlayout.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_image.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/randommt.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xfacet"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xutility"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaattackdataformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charadamagesettingformat.h"
#include "dev/silverware/git/sdk/3rdparty/steam/isteamhtmlsurface.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/vec_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/list"
#include "dev/kof/master/development/source/baseproject/jni/game/appmain.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/boolinvec.h"
#include "dev/silverware/git/sdk/agdisplay.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "dev/silverware/git/sdk/agvector4.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_movie.h"
#include "dev/silverware/git/sdk/agvector3.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_operation.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/vectormath_aos.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/bitset"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/unordered_map"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xhash"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_screentoworld.h"
#include "program files (x86)/windows kits/8.1/include/um/winnt.h"
#include "dev/silverware/git/sdk/agreferencedobjectinl.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/functional"
#include "dev/silverware/git/sdk/agpointer.h"
#include "program files (x86)/windows kits/8.1/include/shared/basetsd.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstring"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/combomissiondataformat.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/sounddata.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/soundgroupdataformat.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/effect.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_strokeraa.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_scale9grid.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmodel.h"
#include "dev/silverware/git/sdk/agreferencedobject.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraystaticbuff.h"
#include "dev/kof/master/development/source/baseproject/jni/game/network/playtogether.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/atomic"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory0"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cxform.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_bank.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/silverware/git/sdk/agrectangle.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/exception"
#include "dev/silverware/git/sdk/agreferenceinl.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exlockable.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/titlestoragesystem.h"
#include "dev/silverware/git/sdk/agconditionvariable.inl"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_exception.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/shaderfxhelper.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/mat_aos.h"
#include "dev/silverware/git/sdk/agthread.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/effect/actoreffect.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actorobject.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_event.h"
#include "dev/silverware/git/sdk/agmutex.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/array"
#include "dev/kof/master/development/source/baseproject/jni/game/data/savedata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/png_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_keycodes.h"
#include "dev/silverware/git/sdk/agscopedlock.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actoroption.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/future_asset.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steam_api_internal.h"
#include "dev/kof/master/development/source/ps4project/baseproject/pcutil/pccontrolsmanager.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/algorithm"
#include "dev/kof/master/development/source/baseproject/jni/game/check/cameracheck.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshkey.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixstate.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_gradients.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/asyncjob.h"
#include "dev/silverware/git/sdk/input/aginputmanager.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/system_error"
#include "dev/silverware/git/sdk/agsingleton.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_rasterizer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_viewport.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglbone.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector4unaligned.h"
#include "dev/silverware/git/sdk/agmutex.inl"
#include "dev/kof/master/development/source/baseproject/jni/game/check/freecameracheck.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/atomic_int.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/stdexcept"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/utility"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleonline.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_drawableimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hal.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_buffer.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/vecidx_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/iosfwd"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/map"
#include "dev/kof/master/development/source/baseproject/jni/framework/rapper/graphicsopt.h"
#include "program files (x86)/windows kits/8.1/include/um/winuser.h"
#include "dev/silverware/git/sdk/memory/agallocators.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/floatinvec.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtree"
#include "dev/kof/master/development/source/baseproject/jni/game/data/savedatadefine.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_characterdef.h"
#include "dev/silverware/git/sdk/input/agcontrollercomponent.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/particledata.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steam_api.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/tuple"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectcommon.h"
#include "dev/kof/master/development/source/ps4project/baseproject/pcutil/pcdummy.h"
#include "dev/silverware/git/sdk/util/agdelegate.h"
#include "dev/silverware/git/sdk/agreferencecount.h"
#include "dev/kof/master/development/source/baseproject/jni/game/cpuseq/battlecpu.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdata/effectappdata.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_new.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/baseproject/jni/game/cpuseq/sequencecontroller.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/operationmapper.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/quat_aos.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filters.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filterparams.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/mediamanager.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/floatinvec.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_prefightfaceoff.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/translate_table.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphqueue.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmirror.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/shared_lua_context.h"
#include "dev/kof/master/development/source/baseproject/jni/game/system/battlesysteminfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_font.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstddef"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/audiopresenter.h"
#include "dev/silverware/git/sdk/agvector2.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/type_traits"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessdefs.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_vec64.h"
#include "dev/silverware/git/sdk/agmath.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/silverware/git/sdk/input/agcontroller.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatapacked.h"
#include "dev/silverware/git/sdk/system/aguser.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_pathdatapacker.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectmanager/effecttaskmanager.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/hidpad/hidpadsystem.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/combomissionjudge.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_linebuffer.h"
#include "dev/silverware/git/sdk/agstring.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/soundutil.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_highlight.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_math.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/mutex"
#include "dev/kof/master/development/source/baseproject/jni/game/network/chkdiscononlinesv.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloat.h"
#include "dev/silverware/git/sdk/util/agservicecommand.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/string"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/chrono"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_profiler.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/libcommon.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/vec_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/limits"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_states.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xxatomic"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaprojectdataformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/tga_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_statebag.h"
#include "dev/silverware/git/sdk/3rdparty/steam/matchmakingtypes.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/ios"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exwaitcondition.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocnum"
#include "dev/silverware/git/sdk/system/agsysteminfo.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charabasestatusformat.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/inputkeyrecord.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_simplemeshcache.h"
#include "dev/silverware/git/sdk/util/agdebugchannels.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xiosbase"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/fontprovider/render_fontproviderwinapi.h"
#include "dev/silverware/git/sdk/util/agperformancecounter.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocale"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_hashkey.h"
#include "dev/silverware/git/sdk/agclock.h"
#include "program files (x86)/windows kits/8.1/include/um/winbase.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocinfo"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/mat_aos.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlecall/battlecall.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/mediasound.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/debug/logging.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vector"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_debug.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/bodypush.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_bundle.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/heapmemory.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmatrix.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglvec3.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglquat.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglvec4.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/randommt.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/pcdummy.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/appmain.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/jobmanager.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/threadsystem.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/effect.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/oglinheritance/ogleffectmatrix.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/oglinheritance/ogleffectvec3.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/oglinheritance/ogleffectquat.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/oglinheritance/ogleffectvec4.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectsystem/effectps4system/effectps4system.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectmanager/effectgpuparticlemanager.cpp"

std::piecewise_construct_t std::piecewise_construct; // 0x14089E37E
EffectTaskManager::EffectTaskManager(); // 0x1401335A0
EffectTaskManager::~EffectTaskManager(); // 0x140133740
void EffectTaskManager::initialize(); // 0x140133880
void EffectTaskManager::cleanup(); // 0x140133960
void EffectTaskManager::effectUpdateThread(void * pParam); // 0x140133A10
void EffectTaskManager::effectUpdateBufferThread(void * pParam); // 0x140133BA0
void EffectTaskManager::addUpdateStack(Effect * addEffect); // 0x140133CF0
void EffectTaskManager::addRenderStack(Effect * addEffect); // 0x140133E40
void EffectTaskManager::updateStack(); // 0x140133F20
void EffectTaskManager::updateBufferStack(); // 0x140133F90
void EffectTaskManager::renderStack(long priority); // 0x140134000
ParticleData * EffectTaskManager::newParticlePtr(long jobNum); // 0x1401341C0
void EffectTaskManager::deleteParticlePtr(ParticleData * pParticleData); // 0x1401342F0//decompilation failure at 14089E37E!
void __fastcall EffectTaskManager::EffectTaskManager(EffectTaskManager *this)
{
  this->__vftable = (EffectTaskManager_vtbl *)&EffectTaskManager::`vftable';
  EffectLightManager::EffectLightManager(&this->m_EffectLightManager);
  this->m_EffectJobManager.m_pWork[0] = 0i64;
  this->m_EffectJobManager.m_pWork[1] = 0i64;
  this->m_EffectJobManager.m_pWork[2] = 0i64;
  this->m_EffectJobManager.m_pWork[3] = 0i64;
  this->m_EffectJobManager.m_pWork[4] = 0i64;
  *(_QWORD *)&this->m_EffectJobManager.m_WorkNum = 0i64;
  EffectGpuParticleManager::EffectGpuParticleManager(&this->m_EffectGpuParticleManager);
  this->m_EffectPs4System.__vftable = (EffectPs4System_vtbl *)&EffectPs4System::`vftable';
  this->m_EffectPs4System.ppVertexInfo = 0i64;
  this->m_updateThreadStack._Mypair._Myval2._Myfirst = 0i64;
  this->m_updateThreadStack._Mypair._Myval2._Mylast = 0i64;
  this->m_updateThreadStack._Mypair._Myval2._Myend = 0i64;
  this->m_updateBufferThreadStack._Mypair._Myval2._Myfirst = 0i64;
  this->m_updateBufferThreadStack._Mypair._Myval2._Mylast = 0i64;
  this->m_updateBufferThreadStack._Mypair._Myval2._Myend = 0i64;
  this->m_renderThreadStack._Mypair._Myval2._Myfirst = 0i64;
  this->m_renderThreadStack._Mypair._Myval2._Mylast = 0i64;
  this->m_renderThreadStack._Mypair._Myval2._Myend = 0i64;
  Mtx_init_in_situ((_Mtx_internal_imp_t *)&this->updateStackMutex, 2);
  Mtx_init_in_situ((_Mtx_internal_imp_t *)&this->renderStackMutex, 2);
  `eh vector constructor iterator'(
    this->m_JobMutex,
    0x50ui64,
    5ui64,
    (void (__fastcall *)(void *))std::mutex::mutex,
    (void (__fastcall *)(void *))std::mutex::~mutex);
  RandomMT::RandomMT(&this->randMT);
  this->updateVertexBufferFlag = 0;
  this->EffectParticleData[0] = 0i64;
  this->EffectParticleData[1] = 0i64;
  this->EffectParticleData[2] = 0i64;
  this->EffectParticleData[3] = 0i64;
  this->EffectParticleData[4] = 0i64;
  this->UseDataBufferNum = 0;
  EffectTaskManager::initialize(this);
}

void __fastcall ParticleData::ParticleData(ParticleData *this)
{
  *(_QWORD *)this->WorldMat.m = 0i64;
  *(_QWORD *)&this->WorldMat.m[2] = 0i64;
  *(_QWORD *)&this->WorldMat.m[4] = 0i64;
  *(_QWORD *)&this->WorldMat.m[6] = 0i64;
  *(_QWORD *)&this->WorldMat.m[8] = 0i64;
  *(_QWORD *)&this->WorldMat.m[10] = 0i64;
  *(_QWORD *)&this->WorldMat.m[12] = 0i64;
  *(_QWORD *)&this->WorldMat.m[14] = 0i64;
  this->WorldMat.__vftable = (OGLEffectMatrix_vtbl *)&OGLEffectMatrix::`vftable';
  *(_QWORD *)this->GlobalMat.m = 0i64;
  *(_QWORD *)&this->GlobalMat.m[2] = 0i64;
  *(_QWORD *)&this->GlobalMat.m[4] = 0i64;
  *(_QWORD *)&this->GlobalMat.m[6] = 0i64;
  *(_QWORD *)&this->GlobalMat.m[8] = 0i64;
  *(_QWORD *)&this->GlobalMat.m[10] = 0i64;
  *(_QWORD *)&this->GlobalMat.m[12] = 0i64;
  *(_QWORD *)&this->GlobalMat.m[14] = 0i64;
  this->GlobalMat.__vftable = (OGLEffectMatrix_vtbl *)&OGLEffectMatrix::`vftable';
  *(_QWORD *)this->LocalMat.m = 0i64;
  *(_QWORD *)&this->LocalMat.m[2] = 0i64;
  *(_QWORD *)&this->LocalMat.m[4] = 0i64;
  *(_QWORD *)&this->LocalMat.m[6] = 0i64;
  *(_QWORD *)&this->LocalMat.m[8] = 0i64;
  *(_QWORD *)&this->LocalMat.m[10] = 0i64;
  *(_QWORD *)&this->LocalMat.m[12] = 0i64;
  *(_QWORD *)&this->LocalMat.m[14] = 0i64;
  this->LocalMat.__vftable = (OGLEffectMatrix_vtbl *)&OGLEffectMatrix::`vftable';
  *(_QWORD *)this->DefaultReferenceMat.m = 0i64;
  *(_QWORD *)&this->DefaultReferenceMat.m[2] = 0i64;
  *(_QWORD *)&this->DefaultReferenceMat.m[4] = 0i64;
  *(_QWORD *)&this->DefaultReferenceMat.m[6] = 0i64;
  *(_QWORD *)&this->DefaultReferenceMat.m[8] = 0i64;
  *(_QWORD *)&this->DefaultReferenceMat.m[10] = 0i64;
  *(_QWORD *)&this->DefaultReferenceMat.m[12] = 0i64;
  *(_QWORD *)&this->DefaultReferenceMat.m[14] = 0i64;
  this->DefaultReferenceMat.__vftable = (OGLEffectMatrix_vtbl *)&OGLEffectMatrix::`vftable';
  *(_QWORD *)this->ReferenceMat.m = 0i64;
  *(_QWORD *)&this->ReferenceMat.m[2] = 0i64;
  *(_QWORD *)&this->ReferenceMat.m[4] = 0i64;
  *(_QWORD *)&this->ReferenceMat.m[6] = 0i64;
  *(_QWORD *)&this->ReferenceMat.m[8] = 0i64;
  *(_QWORD *)&this->ReferenceMat.m[10] = 0i64;
  *(_QWORD *)&this->ReferenceMat.m[12] = 0i64;
  *(_QWORD *)&this->ReferenceMat.m[14] = 0i64;
  this->ReferenceMat.__vftable = (OGLEffectMatrix_vtbl *)&OGLEffectMatrix::`vftable';
  *(_QWORD *)this->DefaultActMat.m = 0i64;
  *(_QWORD *)&this->DefaultActMat.m[2] = 0i64;
  *(_QWORD *)&this->DefaultActMat.m[4] = 0i64;
  *(_QWORD *)&this->DefaultActMat.m[6] = 0i64;
  *(_QWORD *)&this->DefaultActMat.m[8] = 0i64;
  *(_QWORD *)&this->DefaultActMat.m[10] = 0i64;
  *(_QWORD *)&this->DefaultActMat.m[12] = 0i64;
  *(_QWORD *)&this->DefaultActMat.m[14] = 0i64;
  this->DefaultActMat.__vftable = (OGLEffectMatrix_vtbl *)&OGLEffectMatrix::`vftable';
  *(_QWORD *)this->ActMat.m = 0i64;
  *(_QWORD *)&this->ActMat.m[2] = 0i64;
  *(_QWORD *)&this->ActMat.m[4] = 0i64;
  *(_QWORD *)&this->ActMat.m[6] = 0i64;
  *(_QWORD *)&this->ActMat.m[8] = 0i64;
  *(_QWORD *)&this->ActMat.m[10] = 0i64;
  *(_QWORD *)&this->ActMat.m[12] = 0i64;
  *(_QWORD *)&this->ActMat.m[14] = 0i64;
  this->ActMat.__vftable = (OGLEffectMatrix_vtbl *)&OGLEffectMatrix::`vftable';
  *(_QWORD *)this->DefaultEmitterMat.m = 0i64;
  *(_QWORD *)&this->DefaultEmitterMat.m[2] = 0i64;
  *(_QWORD *)&this->DefaultEmitterMat.m[4] = 0i64;
  *(_QWORD *)&this->DefaultEmitterMat.m[6] = 0i64;
  *(_QWORD *)&this->DefaultEmitterMat.m[8] = 0i64;
  *(_QWORD *)&this->DefaultEmitterMat.m[10] = 0i64;
  *(_QWORD *)&this->DefaultEmitterMat.m[12] = 0i64;
  *(_QWORD *)&this->DefaultEmitterMat.m[14] = 0i64;
  this->DefaultEmitterMat.__vftable = (OGLEffectMatrix_vtbl *)&OGLEffectMatrix::`vftable';
  *(_QWORD *)&this->WorldPos.x = 0i64;
  this->WorldPos.z = 0.0;
  this->WorldPos.__vftable = (OGLEffectVec3_vtbl *)&OGLEffectVec3::`vftable';
  *(_QWORD *)&this->PreWorldPos.x = 0i64;
  this->PreWorldPos.z = 0.0;
  *(_QWORD *)&this->LocalPos.x = 0i64;
  this->LocalPos.z = 0.0;
  *(_QWORD *)&this->PreLocalPos.x = 0i64;
  this->PreLocalPos.z = 0.0;
  *(_QWORD *)&this->LocalVel.x = 0i64;
  this->LocalVel.z = 0.0;
  this->PreWorldPos.__vftable = (OGLEffectVec3_vtbl *)&OGLEffectVec3::`vftable';
  this->LocalPos.__vftable = (OGLEffectVec3_vtbl *)&OGLEffectVec3::`vftable';
  this->PreLocalPos.__vftable = (OGLEffectVec3_vtbl *)&OGLEffectVec3::`vftable';
  this->LocalVel.__vftable = (OGLEffectVec3_vtbl *)&OGLEffectVec3::`vftable';
  this->LocalRot.__vftable = (OGLEffectQuat_vtbl *)&OGLEffectQuat::`vftable';
  *(_QWORD *)&this->LocalRot.x = 0i64;
  this->LocalRot.z = 0.0;
  this->LocalRot.w = 1.0;
  this->LocalRotVel.__vftable = (OGLEffectQuat_vtbl *)&OGLEffectQuat::`vftable';
  *(_QWORD *)&this->LocalRotVel.x = 0i64;
  this->LocalRotVel.z = 0.0;
  this->LocalRotVel.w = 1.0;
  *(_QWORD *)&this->LocalScale.x = 0i64;
  this->LocalScale.z = 0.0;
  *(_QWORD *)&this->LocalScaleVel.x = 0i64;
  this->LocalScaleVel.z = 0.0;
  *(_QWORD *)&this->ForceFieldPos.x = 0i64;
  this->ForceFieldPos.z = 0.0;
  *(_QWORD *)&this->PreForceFieldPos.x = 0i64;
  this->PreForceFieldPos.z = 0.0;
  *(_QWORD *)&this->ForceFieldVel.x = 0i64;
  this->ForceFieldVel.z = 0.0;
  *(_QWORD *)&this->GravityVel.x = 0i64;
  this->GravityVel.z = 0.0;
  *(_QWORD *)&this->GravityPos.x = 0i64;
  this->GravityPos.z = 0.0;
  *(_QWORD *)&this->DefaultPos.x = 0i64;
  this->DefaultPos.z = 0.0;
  *(_QWORD *)&this->DefaultDiffuseAll.x = 0i64;
  this->DefaultDiffuseAll.z = 0.0;
  this->LocalScale.__vftable = (OGLEffectVec3_vtbl *)&OGLEffectVec3::`vftable';
  this->LocalScaleVel.__vftable = (OGLEffectVec3_vtbl *)&OGLEffectVec3::`vftable';
  *(_QWORD *)&this->DefaultDiffuseAxis.x = 0i64;
  this->DefaultDiffuseAxis.z = 0.0;
  this->ForceFieldPos.__vftable = (OGLEffectVec3_vtbl *)&OGLEffectVec3::`vftable';
  this->PreForceFieldPos.__vftable = (OGLEffectVec3_vtbl *)&OGLEffectVec3::`vftable';
  *(_QWORD *)&this->DefaultSpecifiedDir.x = 0i64;
  this->DefaultSpecifiedDir.z = 0.0;
  this->ForceFieldVel.__vftable = (OGLEffectVec3_vtbl *)&OGLEffectVec3::`vftable';
  this->GravityVel.__vftable = (OGLEffectVec3_vtbl *)&OGLEffectVec3::`vftable';
  *(_QWORD *)&this->DefaultInheritanceVel.x = 0i64;
  this->DefaultInheritanceVel.z = 0.0;
  this->GravityPos.__vftable = (OGLEffectVec3_vtbl *)&OGLEffectVec3::`vftable';
  this->DefaultPos.__vftable = (OGLEffectVec3_vtbl *)&OGLEffectVec3::`vftable';
  *(_QWORD *)&this->DefaultAcc.x = 0i64;
  this->DefaultAcc.z = 0.0;
  this->DefaultDiffuseAll.__vftable = (OGLEffectVec3_vtbl *)&OGLEffectVec3::`vftable';
  this->DefaultDiffuseAxis.__vftable = (OGLEffectVec3_vtbl *)&OGLEffectVec3::`vftable';
  *(_QWORD *)&this->DefaultScale.x = 0i64;
  this->DefaultScale.z = 0.0;
  this->DefaultSpecifiedDir.__vftable = (OGLEffectVec3_vtbl *)&OGLEffectVec3::`vftable';
  this->DefaultInheritanceVel.__vftable = (OGLEffectVec3_vtbl *)&OGLEffectVec3::`vftable';
  *(_QWORD *)&this->DefaultScaleVel.x = 0i64;
  this->DefaultScaleVel.z = 0.0;
  this->DefaultAcc.__vftable = (OGLEffectVec3_vtbl *)&OGLEffectVec3::`vftable';
  this->DefaultScale.__vftable = (OGLEffectVec3_vtbl *)&OGLEffectVec3::`vftable';
  *(_QWORD *)&this->DefaultScaleAcc.x = 0i64;
  this->DefaultScaleAcc.z = 0.0;
  this->DefaultScaleVel.__vftable = (OGLEffectVec3_vtbl *)&OGLEffectVec3::`vftable';
  this->DefaultScaleAcc.__vftable = (OGLEffectVec3_vtbl *)&OGLEffectVec3::`vftable';
  this->DefaultRotQ.__vftable = (OGLEffectQuat_vtbl *)&OGLEffectQuat::`vftable';
  *(_QWORD *)&this->DefaultRotQ.x = 0i64;
  this->DefaultRotQ.z = 0.0;
  this->DefaultRotQ.w = 1.0;
  this->DefaultRotQVel.__vftable = (OGLEffectQuat_vtbl *)&OGLEffectQuat::`vftable';
  *(_QWORD *)&this->DefaultRotQVel.x = 0i64;
  this->DefaultRotQVel.z = 0.0;
  this->DefaultRotQVel.w = 1.0;
  this->DefaultRotQAcc.__vftable = (OGLEffectQuat_vtbl *)&OGLEffectQuat::`vftable';
  *(_QWORD *)&this->DefaultRotQAcc.x = 0i64;
  this->DefaultRotQAcc.z = 0.0;
  this->DefaultRotQAcc.w = 1.0;
  *(_QWORD *)&this->Col.x = 0i64;
  *(_QWORD *)&this->Col.z = 0i64;
  this->Col.__vftable = (OGLEffectVec4_vtbl *)&OGLEffectVec4::`vftable';
  this->particleDataForChild._Mypair._Myval2._Myfirst = 0i64;
  this->particleDataForChild._Mypair._Myval2._Mylast = 0i64;
  this->particleDataForChild._Mypair._Myval2._Myend = 0i64;
  *(_QWORD *)&this->LightingCoefficientOfFake.x = 0i64;
  *(_QWORD *)&this->LightingCoefficientOfFake.z = 0i64;
  this->LightingCoefficientOfFake.__vftable = (OGLEffectVec4_vtbl *)&OGLEffectVec4::`vftable';
  this->isUsed = 0;
  this->jobNum = -1;
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

void __fastcall EffectTaskManager::~EffectTaskManager(EffectTaskManager *this)
{
  std::allocator<AgLogger *> *v2; // rcx
  AgLogger **Myfirst; // rdx
  AgLogger **v4; // rdx
  AgLogger **v5; // rdx

  this->__vftable = (EffectTaskManager_vtbl *)&EffectTaskManager::`vftable';
  EffectTaskManager::cleanup(this);
  `eh vector destructor iterator'(this->m_JobMutex, 0x50ui64, 5ui64, (void (__fastcall *)(void *))std::mutex::~mutex);
  Mtx_destroy_in_situ((_Mtx_internal_imp_t *)&this->renderStackMutex);
  Mtx_destroy_in_situ((_Mtx_internal_imp_t *)&this->updateStackMutex);
  Myfirst = (AgLogger **)this->m_renderThreadStack._Mypair._Myval2._Myfirst;
  if ( Myfirst )
  {
    std::_Wrap_alloc<std::allocator<OGLShader *>>::deallocate(
      v2,
      Myfirst,
      ((char *)this->m_renderThreadStack._Mypair._Myval2._Myend - (char *)Myfirst) >> 3);
    this->m_renderThreadStack._Mypair._Myval2._Myfirst = 0i64;
    this->m_renderThreadStack._Mypair._Myval2._Mylast = 0i64;
    this->m_renderThreadStack._Mypair._Myval2._Myend = 0i64;
  }
  v4 = (AgLogger **)this->m_updateBufferThreadStack._Mypair._Myval2._Myfirst;
  if ( v4 )
  {
    std::_Wrap_alloc<std::allocator<OGLShader *>>::deallocate(
      v2,
      v4,
      ((char *)this->m_updateBufferThreadStack._Mypair._Myval2._Myend - (char *)v4) >> 3);
    this->m_updateBufferThreadStack._Mypair._Myval2._Myfirst = 0i64;
    this->m_updateBufferThreadStack._Mypair._Myval2._Mylast = 0i64;
    this->m_updateBufferThreadStack._Mypair._Myval2._Myend = 0i64;
  }
  v5 = (AgLogger **)this->m_updateThreadStack._Mypair._Myval2._Myfirst;
  if ( v5 )
  {
    std::_Wrap_alloc<std::allocator<OGLShader *>>::deallocate(
      v2,
      v5,
      ((char *)this->m_updateThreadStack._Mypair._Myval2._Myend - (char *)v5) >> 3);
    this->m_updateThreadStack._Mypair._Myval2._Myfirst = 0i64;
    this->m_updateThreadStack._Mypair._Myval2._Mylast = 0i64;
    this->m_updateThreadStack._Mypair._Myval2._Myend = 0i64;
  }
  this->m_EffectPs4System.__vftable = (EffectPs4System_vtbl *)&EffectPs4System::`vftable';
  this->m_EffectGpuParticleManager.__vftable = (EffectGpuParticleManager_vtbl *)&EffectGpuParticleManager::`vftable';
  Fw::cJobManager::Shutdown(&this->m_EffectJobManager);
  EffectLightManager::~EffectLightManager(&this->m_EffectLightManager);
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

void __fastcall EffectTaskManager::addRenderStack(EffectTaskManager *this, Effect *addEffect)
{
  _Mtx_internal_imp_t *p_renderStackMutex; // rbx
  int v5; // eax
  unsigned __int64 *p_Count; // rdx
  std::vector<void (__cdecl*)(extension::exsound_detail::SoundBankParser::BinaryParseState &,extension::exsound_detail::SoundChannelDefinition &),std::allocator<void (__cdecl*)(extension::exsound_detail::SoundBankParser::BinaryParseState &,extension::exsound_detail::SoundChannelDefinition &)> > *p_m_renderThreadStack; // rdi
  void (__fastcall **Mylast)(extension::exsound_detail::SoundBankParser::BinaryParseState *, extension::exsound_detail::SoundChannelDefinition *); // rax
  __int64 v9; // rsi
  void (__fastcall **v10)(extension::exsound_detail::SoundBankParser::BinaryParseState *, extension::exsound_detail::SoundChannelDefinition *); // rcx
  Effect **v11; // rax
  int v12; // eax
  unsigned __int64 _Count; // [rsp+48h] [rbp+10h] BYREF

  _Count = (unsigned __int64)addEffect;
  p_renderStackMutex = (_Mtx_internal_imp_t *)&this->renderStackMutex;
  v5 = Mtx_lock((_Mtx_internal_imp_t *)&this->renderStackMutex);
  if ( v5 )
    std::_Throw_C_error(v5);
  p_m_renderThreadStack = (std::vector<void (__cdecl*)(extension::exsound_detail::SoundBankParser::BinaryParseState &,extension::exsound_detail::SoundChannelDefinition &),std::allocator<void (__cdecl*)(extension::exsound_detail::SoundBankParser::BinaryParseState &,extension::exsound_detail::SoundChannelDefinition &)> > *)&this->m_renderThreadStack;
  Mylast = p_m_renderThreadStack->_Mypair._Myval2._Mylast;
  if ( &_Count >= (unsigned __int64 *)Mylast
    || (p_Count = &_Count,
        p_m_renderThreadStack->_Mypair._Myval2._Myfirst > (void (__fastcall **)(extension::exsound_detail::SoundBankParser::BinaryParseState *, extension::exsound_detail::SoundChannelDefinition *))&_Count) )
  {
    if ( Mylast == p_m_renderThreadStack->_Mypair._Myval2._Myend )
      std::vector<BattleStageEvent *>::_Reserve(p_m_renderThreadStack, (unsigned __int64)p_Count);
    v11 = (Effect **)p_m_renderThreadStack->_Mypair._Myval2._Mylast;
    if ( v11 )
      *v11 = addEffect;
  }
  else
  {
    v9 = ((char *)&_Count - (char *)p_m_renderThreadStack->_Mypair._Myval2._Myfirst) >> 3;
    if ( Mylast == p_m_renderThreadStack->_Mypair._Myval2._Myend )
      std::vector<BattleStageEvent *>::_Reserve(p_m_renderThreadStack, (unsigned __int64)&_Count);
    v10 = p_m_renderThreadStack->_Mypair._Myval2._Mylast;
    if ( v10 )
      *v10 = p_m_renderThreadStack->_Mypair._Myval2._Myfirst[v9];
  }
  ++p_m_renderThreadStack->_Mypair._Myval2._Mylast;
  v12 = Mtx_unlock(p_renderStackMutex);
  if ( v12 )
    std::_Throw_C_error(v12);
}

void __fastcall EffectTaskManager::addUpdateStack(EffectTaskManager *this, Effect *addEffect)
{
  _Mtx_internal_imp_t *p_updateStackMutex; // rbx
  int v5; // eax
  unsigned __int64 *p_Count; // rdx
  std::vector<Effect *> *p_m_updateThreadStack; // rdi
  Effect **Mylast; // rax
  __int64 v9; // rsi
  Effect **v10; // rcx
  Effect **v11; // rax
  std::vector<Effect *> *p_m_updateBufferThreadStack; // rdi
  Effect **v13; // rax
  __int64 v14; // rsi
  Effect **v15; // rcx
  Effect **v16; // rax
  int v17; // eax
  unsigned __int64 _Count; // [rsp+58h] [rbp+10h] BYREF

  _Count = (unsigned __int64)addEffect;
  p_updateStackMutex = (_Mtx_internal_imp_t *)&this->updateStackMutex;
  v5 = Mtx_lock((_Mtx_internal_imp_t *)&this->updateStackMutex);
  if ( v5 )
    std::_Throw_C_error(v5);
  p_m_updateThreadStack = &this->m_updateThreadStack;
  Mylast = this->m_updateThreadStack._Mypair._Myval2._Mylast;
  if ( &_Count >= (unsigned __int64 *)Mylast
    || (p_Count = &_Count, p_m_updateThreadStack->_Mypair._Myval2._Myfirst > (Effect **)&_Count) )
  {
    if ( Mylast == this->m_updateThreadStack._Mypair._Myval2._Myend )
      std::vector<BattleStageEvent *>::_Reserve(
        (std::vector<void (__cdecl*)(extension::exsound_detail::SoundBankParser::BinaryParseState &,extension::exsound_detail::SoundChannelDefinition &),std::allocator<void (__cdecl*)(extension::exsound_detail::SoundBankParser::BinaryParseState &,extension::exsound_detail::SoundChannelDefinition &)> > *)&this->m_updateThreadStack,
        (unsigned __int64)p_Count);
    v11 = this->m_updateThreadStack._Mypair._Myval2._Mylast;
    if ( v11 )
      *v11 = addEffect;
  }
  else
  {
    v9 = ((char *)&_Count - (char *)p_m_updateThreadStack->_Mypair._Myval2._Myfirst) >> 3;
    if ( Mylast == this->m_updateThreadStack._Mypair._Myval2._Myend )
      std::vector<BattleStageEvent *>::_Reserve(
        (std::vector<void (__cdecl*)(extension::exsound_detail::SoundBankParser::BinaryParseState &,extension::exsound_detail::SoundChannelDefinition &),std::allocator<void (__cdecl*)(extension::exsound_detail::SoundBankParser::BinaryParseState &,extension::exsound_detail::SoundChannelDefinition &)> > *)&this->m_updateThreadStack,
        (unsigned __int64)&_Count);
    v10 = this->m_updateThreadStack._Mypair._Myval2._Mylast;
    if ( v10 )
      *v10 = p_m_updateThreadStack->_Mypair._Myval2._Myfirst[v9];
  }
  ++this->m_updateThreadStack._Mypair._Myval2._Mylast;
  p_m_updateBufferThreadStack = &this->m_updateBufferThreadStack;
  v13 = this->m_updateBufferThreadStack._Mypair._Myval2._Mylast;
  if ( &_Count >= (unsigned __int64 *)v13
    || (p_Count = &_Count, p_m_updateBufferThreadStack->_Mypair._Myval2._Myfirst > (Effect **)&_Count) )
  {
    if ( v13 == this->m_updateBufferThreadStack._Mypair._Myval2._Myend )
      std::vector<BattleStageEvent *>::_Reserve(
        (std::vector<void (__cdecl*)(extension::exsound_detail::SoundBankParser::BinaryParseState &,extension::exsound_detail::SoundChannelDefinition &),std::allocator<void (__cdecl*)(extension::exsound_detail::SoundBankParser::BinaryParseState &,extension::exsound_detail::SoundChannelDefinition &)> > *)&this->m_updateBufferThreadStack,
        (unsigned __int64)p_Count);
    v16 = this->m_updateBufferThreadStack._Mypair._Myval2._Mylast;
    if ( v16 )
      *v16 = addEffect;
  }
  else
  {
    v14 = ((char *)&_Count - (char *)p_m_updateBufferThreadStack->_Mypair._Myval2._Myfirst) >> 3;
    if ( v13 == this->m_updateBufferThreadStack._Mypair._Myval2._Myend )
      std::vector<BattleStageEvent *>::_Reserve(
        (std::vector<void (__cdecl*)(extension::exsound_detail::SoundBankParser::BinaryParseState &,extension::exsound_detail::SoundChannelDefinition &),std::allocator<void (__cdecl*)(extension::exsound_detail::SoundBankParser::BinaryParseState &,extension::exsound_detail::SoundChannelDefinition &)> > *)&this->m_updateBufferThreadStack,
        (unsigned __int64)&_Count);
    v15 = this->m_updateBufferThreadStack._Mypair._Myval2._Mylast;
    if ( v15 )
      *v15 = p_m_updateBufferThreadStack->_Mypair._Myval2._Myfirst[v14];
  }
  ++this->m_updateBufferThreadStack._Mypair._Myval2._Mylast;
  v17 = Mtx_unlock(p_updateStackMutex);
  if ( v17 )
    std::_Throw_C_error(v17);
}

void __fastcall EffectTaskManager::cleanup(EffectTaskManager *this)
{
  std::vector<Effect *> *p_m_updateThreadStack; // r9
  AgLogger **Myfirst; // rdx
  Effect **Myend; // r8
  std::allocator<AgLogger *> *p_m_renderThreadStack; // rcx
  AgLogger **v6; // rdx
  Effect **v7; // r8
  Framework::GLManager *v8; // rax
  char v9[40]; // [rsp+20h] [rbp-28h] BYREF

  p_m_updateThreadStack = &this->m_updateThreadStack;
  this->m_updateThreadStack._Mypair._Myval2._Mylast = this->m_updateThreadStack._Mypair._Myval2._Myfirst;
  if ( &this->m_updateThreadStack != (std::vector<Effect *> *)v9 )
  {
    Myfirst = (AgLogger **)p_m_updateThreadStack->_Mypair._Myval2._Myfirst;
    p_m_updateThreadStack->_Mypair._Myval2._Myfirst = 0i64;
    this->m_updateThreadStack._Mypair._Myval2._Mylast = 0i64;
    Myend = this->m_updateThreadStack._Mypair._Myval2._Myend;
    this->m_updateThreadStack._Mypair._Myval2._Myend = 0i64;
    if ( Myfirst )
      std::_Wrap_alloc<std::allocator<OGLShader *>>::deallocate(
        (std::allocator<AgLogger *> *)this,
        Myfirst,
        ((char *)Myend - (char *)Myfirst) >> 3);
  }
  p_m_renderThreadStack = (std::allocator<AgLogger *> *)&this->m_renderThreadStack;
  this->m_renderThreadStack._Mypair._Myval2._Mylast = this->m_renderThreadStack._Mypair._Myval2._Myfirst;
  if ( &this->m_renderThreadStack != (std::vector<Effect *> *)v9 )
  {
    v6 = *(AgLogger ***)p_m_renderThreadStack;
    *(_QWORD *)p_m_renderThreadStack = 0i64;
    this->m_renderThreadStack._Mypair._Myval2._Mylast = 0i64;
    v7 = this->m_renderThreadStack._Mypair._Myval2._Myend;
    this->m_renderThreadStack._Mypair._Myval2._Myend = 0i64;
    if ( v6 )
      std::_Wrap_alloc<std::allocator<OGLShader *>>::deallocate(
        p_m_renderThreadStack,
        v6,
        ((char *)v7 - (char *)v6) >> 3);
  }
  v8 = Framework::GLManager::glm;
  Framework::GLManager::glm->allocateStaticBuffersEffect[5].pools.top = 0i64;
  v8->allocateStaticBuffersEffect[5].pools.end = 0i64;
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

void __fastcall EffectTaskManager::deleteParticlePtr(EffectTaskManager *this, ParticleData *pParticleData)
{
  char *v3; // rbx
  int v4; // eax
  std::vector<ParticleDataForChild> *p_particleDataForChild; // rax
  std::allocator<AgDisplayMode> *Myfirst; // rcx
  ParticleDataForChild *Myend; // rdx
  unsigned __int64 v8; // rdx
  int v9; // eax
  char v10; // [rsp+28h] [rbp-20h] BYREF

  v3 = (char *)this + 80 * pParticleData->jobNum;
  v4 = Mtx_lock((_Mtx_internal_imp_t *)(v3 + 1856));
  if ( v4 )
    std::_Throw_C_error(v4);
  pParticleData->isUsed = 0;
  p_particleDataForChild = &pParticleData->particleDataForChild;
  if ( &pParticleData->particleDataForChild != (std::vector<ParticleDataForChild> *)&v10 )
  {
    Myfirst = (std::allocator<AgDisplayMode> *)p_particleDataForChild->_Mypair._Myval2._Myfirst;
    p_particleDataForChild->_Mypair._Myval2._Myfirst = 0i64;
    pParticleData->particleDataForChild._Mypair._Myval2._Mylast = 0i64;
    Myend = pParticleData->particleDataForChild._Mypair._Myval2._Myend;
    pParticleData->particleDataForChild._Mypair._Myval2._Myend = 0i64;
    if ( Myfirst )
    {
      v8 = (__int64)((unsigned __int128)(((char *)Myend - (char *)Myfirst) * (__int128)0x2AAAAAAAAAAAAAABi64) >> 64) >> 1;
      std::_Wrap_alloc<std::allocator<ParticleDataForChild>>::deallocate(
        Myfirst,
        (AgDisplayMode *)Myfirst,
        v8 + (v8 >> 63));
    }
  }
  v9 = Mtx_unlock((_Mtx_internal_imp_t *)(v3 + 1856));
  if ( v9 )
    std::_Throw_C_error(v9);
}

void __fastcall EffectTaskManager::effectUpdateBufferThread(void *pParam)
{
  int v1; // esi
  Fw::ThreadSystem::cWork *CurrentWork; // rax
  __int64 v4; // r8
  int v5; // edi
  __int64 v6; // rcx
  int v7; // er15
  unsigned __int64 v8; // r14
  __int64 v9; // rbx
  _QWORD *v10; // rbx
  __int64 v11; // rax

  v1 = 0;
  if ( *((_DWORD *)pParam + 198)
    && (CurrentWork = Fw::ThreadSystem::GetCurrentWork()) != 0i64
    && CurrentWork->m_Handle
    && (v4 = *((int *)pParam + 196), v5 = 1, v6 = 1i64, v4 > 1) )
  {
    while ( CurrentWork->m_Handle != *(_DWORD *)(*((_QWORD *)pParam + v6 + 93) + 8i64) )
    {
      ++v5;
      if ( ++v6 >= v4 )
        goto LABEL_7;
    }
  }
  else
  {
LABEL_7:
    v5 = 0;
  }
  v7 = *((_DWORD *)pParam + 198);
  if ( v7 && (__int64)(*((_QWORD *)pParam + 201) - *((_QWORD *)pParam + 200)) >> 3 )
  {
    v8 = 0i64;
    do
    {
      if ( v5 == v1 % v7 )
      {
        v9 = *((_QWORD *)pParam + 200);
        if ( (*((_QWORD *)pParam + 201) - v9) >> 3 <= v8 )
          std::_Xout_of_range("invalid vector<T> subscript");
        v10 = *(_QWORD **)(v9 + 8 * v8);
        if ( v10 )
        {
          v11 = *v10;
          v10[40] = &Framework::GLManager::glm->allocateStaticBuffersEffect[v5];
          (*(void (__fastcall **)(_QWORD *))(v11 + 120))(v10);
          (*(void (__fastcall **)(_QWORD *))(*v10 + 128i64))(v10);
          (*(void (__fastcall **)(_QWORD *))(*v10 + 184i64))(v10);
        }
      }
      ++v1;
      ++v8;
    }
    while ( v1 < (unsigned __int64)((__int64)(*((_QWORD *)pParam + 201) - *((_QWORD *)pParam + 200)) >> 3) );
  }
}

void __fastcall EffectTaskManager::effectUpdateThread(void *pParam)
{
  int v1; // esi
  Fw::ThreadSystem::cWork *CurrentWork; // rax
  __int64 v4; // r8
  int v5; // ebx
  __int64 v6; // rcx
  int v7; // er15
  __int64 v8; // rax
  unsigned __int64 v9; // rdi
  signed __int64 i; // r14
  __int64 v11; // r8
  __int64 v12; // r8
  Effect *v13; // rcx
  Effect *v14; // rcx
  __int64 v15; // rdx
  bool v16; // zf

  v1 = 0;
  if ( *((_DWORD *)pParam + 198)
    && (CurrentWork = Fw::ThreadSystem::GetCurrentWork()) != 0i64
    && CurrentWork->m_Handle
    && (v4 = *((int *)pParam + 196), v5 = 1, v6 = 1i64, v4 > 1) )
  {
    while ( CurrentWork->m_Handle != *(_DWORD *)(*((_QWORD *)pParam + v6 + 93) + 8i64) )
    {
      ++v5;
      if ( ++v6 >= v4 )
        goto LABEL_7;
    }
  }
  else
  {
LABEL_7:
    v5 = 0;
  }
  v7 = *((_DWORD *)pParam + 198);
  if ( v7 )
  {
    v8 = (__int64)(*((_QWORD *)pParam + 198) - *((_QWORD *)pParam + 197)) >> 3;
    v9 = 0i64;
    for ( i = (int)v8; (__int64)v9 < i; ++v9 )
    {
      if ( v5 == v1 % v7 )
      {
        if ( v1 >= (unsigned __int64)((__int64)(*((_QWORD *)pParam + 198) - *((_QWORD *)pParam + 197)) >> 3) )
          return;
        v11 = *((_QWORD *)pParam + 197);
        if ( (*((_QWORD *)pParam + 198) - v11) >> 3 <= v9 )
          std::_Xout_of_range("invalid vector<T> subscript");
        v12 = *(_QWORD *)(v11 + 8 * v9);
        if ( v12 )
        {
          v13 = *(Effect **)(v12 + 2960);
          *(_DWORD *)(v12 + 2984) = v5;
          if ( v13 )
            Effect::setJobNum(v13, v5);
          v14 = *(Effect **)(v12 + 2944);
          if ( v14 )
            Effect::setJobNum(v14, v5);
          v15 = v5;
          v16 = &Framework::GLManager::glm->allocateStaticBuffersEffect[v15] == 0i64;
          *(_QWORD *)(v12 + 320) = &Framework::GLManager::glm->allocateStaticBuffersEffect[v15];
          if ( !v16 )
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 56i64))(v12, v12 + 168);
        }
      }
      ++v1;
    }
  }
}

void __fastcall ParticleData::init(ParticleData *this)
{
  unsigned int *v1; // rax
  int *m_OldAge; // rdx
  __int64 v3; // r8

  this->isUsed = 0;
  *(_QWORD *)&this->ID = 0i64;
  *(_QWORD *)&this->lifeLimit = 0i64;
  this->Model = 0i64;
  this->jobNum = -1;
  *(_QWORD *)this->WorldMat.m = 1065353216i64;
  this->WorldMat.m[4] = 0.0;
  *(_QWORD *)&this->WorldMat.m[8] = 0i64;
  *(_QWORD *)&this->WorldMat.m[12] = 0i64;
  *(_QWORD *)&this->WorldMat.m[5] = 1065353216i64;
  *(_QWORD *)&this->WorldMat.m[2] = 0i64;
  *(_QWORD *)&this->WorldMat.m[10] = 1065353216i64;
  this->WorldMat.m[14] = 0.0;
  this->WorldMat.m[7] = 0.0;
  this->WorldMat.m[15] = 1.0;
  *(_QWORD *)this->GlobalMat.m = 1065353216i64;
  this->GlobalMat.m[4] = 0.0;
  *(_QWORD *)&this->GlobalMat.m[8] = 0i64;
  *(_QWORD *)&this->GlobalMat.m[12] = 0i64;
  *(_QWORD *)&this->GlobalMat.m[5] = 1065353216i64;
  *(_QWORD *)&this->GlobalMat.m[2] = 0i64;
  *(_QWORD *)&this->GlobalMat.m[10] = 1065353216i64;
  this->GlobalMat.m[14] = 0.0;
  this->GlobalMat.m[7] = 0.0;
  this->GlobalMat.m[15] = 1.0;
  *(_QWORD *)this->LocalMat.m = 1065353216i64;
  this->LocalMat.m[4] = 0.0;
  *(_QWORD *)&this->LocalMat.m[8] = 0i64;
  *(_QWORD *)&this->LocalMat.m[12] = 0i64;
  *(_QWORD *)&this->LocalMat.m[5] = 1065353216i64;
  *(_QWORD *)&this->LocalMat.m[2] = 0i64;
  *(_QWORD *)&this->LocalMat.m[10] = 1065353216i64;
  this->LocalMat.m[14] = 0.0;
  this->LocalMat.m[7] = 0.0;
  this->LocalMat.m[15] = 1.0;
  *(_QWORD *)this->DefaultReferenceMat.m = 1065353216i64;
  this->DefaultReferenceMat.m[4] = 0.0;
  *(_QWORD *)&this->DefaultReferenceMat.m[8] = 0i64;
  *(_QWORD *)&this->DefaultReferenceMat.m[12] = 0i64;
  *(_QWORD *)&this->DefaultReferenceMat.m[5] = 1065353216i64;
  *(_QWORD *)&this->DefaultReferenceMat.m[2] = 0i64;
  *(_QWORD *)&this->DefaultReferenceMat.m[10] = 1065353216i64;
  this->DefaultReferenceMat.m[14] = 0.0;
  this->DefaultReferenceMat.m[7] = 0.0;
  this->DefaultReferenceMat.m[15] = 1.0;
  *(_QWORD *)this->ReferenceMat.m = 1065353216i64;
  this->ReferenceMat.m[4] = 0.0;
  *(_QWORD *)&this->ReferenceMat.m[8] = 0i64;
  *(_QWORD *)&this->ReferenceMat.m[12] = 0i64;
  *(_QWORD *)&this->ReferenceMat.m[5] = 1065353216i64;
  *(_QWORD *)&this->ReferenceMat.m[2] = 0i64;
  *(_QWORD *)&this->ReferenceMat.m[10] = 1065353216i64;
  this->ReferenceMat.m[14] = 0.0;
  this->ReferenceMat.m[7] = 0.0;
  this->ReferenceMat.m[15] = 1.0;
  *(_QWORD *)&this->LocalPos.x = 0i64;
  this->LocalPos.z = 0.0;
  *(_QWORD *)&this->LocalVel.x = 0i64;
  this->LocalVel.z = 0.0;
  *(_QWORD *)&this->LocalRot.x = 0i64;
  this->LocalRot.z = 0.0;
  this->LocalRot.w = 1.0;
  *(_QWORD *)&this->LocalRotVel.x = 0i64;
  this->LocalRotVel.z = 0.0;
  this->LocalRotVel.w = 1.0;
  *(_QWORD *)&this->LocalScale.x = 0i64;
  this->LocalScale.z = 0.0;
  *(_QWORD *)&this->LocalScaleVel.x = 0i64;
  this->LocalScaleVel.z = 0.0;
  *(_QWORD *)&this->ForceFieldPos.x = 0i64;
  this->ForceFieldPos.z = 0.0;
  *(_QWORD *)&this->ForceFieldVel.x = 0i64;
  this->ForceFieldVel.z = 0.0;
  *(_QWORD *)&this->GravityVel.x = 0i64;
  this->GravityVel.z = 0.0;
  *(_QWORD *)&this->GravityPos.x = 0i64;
  this->GravityPos.z = 0.0;
  *(_QWORD *)&this->DefaultPos.x = 0i64;
  this->DefaultPos.z = 0.0;
  *(_QWORD *)&this->DefaultDiffuseAll.x = 0i64;
  this->DefaultDiffuseAll.z = 0.0;
  v1 = &this->m_shuffleFlag[0][2];
  *(_QWORD *)&this->DefaultDiffuseAxis.x = 0i64;
  m_OldAge = this->m_OldAge;
  this->DefaultDiffuseAxis.z = 0.0;
  v3 = 13i64;
  *(_QWORD *)&this->DefaultSpecifiedDir.x = 0i64;
  this->DefaultSpecifiedDir.z = 0.0;
  *(_QWORD *)&this->DefaultInheritanceVel.x = 0i64;
  this->DefaultInheritanceVel.z = 0.0;
  *(_QWORD *)&this->DefaultAcc.x = 0i64;
  this->DefaultAcc.z = 0.0;
  *(_QWORD *)&this->DefaultScale.x = 0i64;
  this->DefaultScale.z = 0.0;
  *(_QWORD *)&this->DefaultScaleVel.x = 0i64;
  this->DefaultScaleVel.z = 0.0;
  *(_QWORD *)&this->DefaultScaleAcc.x = 0i64;
  this->DefaultScaleAcc.z = 0.0;
  *(_QWORD *)&this->DefaultRotQ.x = 0i64;
  this->DefaultRotQ.z = 0.0;
  this->DefaultRotQ.w = 1.0;
  *(_QWORD *)&this->DefaultRotQVel.x = 0i64;
  this->DefaultRotQVel.z = 0.0;
  this->DefaultRotQVel.w = 1.0;
  *(_QWORD *)&this->DefaultRotQAcc.x = 0i64;
  this->DefaultRotQAcc.z = 0.0;
  this->DefaultRotQAcc.w = 1.0;
  *(_QWORD *)&this->Col.x = 0i64;
  *(_QWORD *)&this->Col.z = 0i64;
  do
  {
    *(m_OldAge - 13) = 0;
    v1 += 4;
    *m_OldAge++ = -1;
    *((_QWORD *)v1 - 2) = 0i64;
    *((_QWORD *)v1 - 3) = 0i64;
    --v3;
  }
  while ( v3 );
  *(_QWORD *)&this->lightType = 0i64;
  *(_QWORD *)&this->intensity = 0i64;
  *(_QWORD *)&this->penumbra = 0i64;
  this->emitDiffuse = 0;
  *(_QWORD *)&this->playerNum = 0i64;
  *(_QWORD *)this->DefaultActMat.m = 1065353216i64;
  this->DefaultActMat.m[4] = 0.0;
  *(_QWORD *)&this->DefaultActMat.m[8] = 0i64;
  *(_QWORD *)&this->DefaultActMat.m[12] = 0i64;
  *(_QWORD *)&this->DefaultActMat.m[5] = 1065353216i64;
  *(_QWORD *)&this->DefaultActMat.m[2] = 0i64;
  *(_QWORD *)&this->DefaultActMat.m[10] = 1065353216i64;
  this->DefaultActMat.m[14] = 0.0;
  this->DefaultActMat.m[7] = 0.0;
  this->DefaultActMat.m[15] = 1.0;
  *(_QWORD *)this->ActMat.m = 1065353216i64;
  this->ActMat.m[4] = 0.0;
  *(_QWORD *)&this->ActMat.m[8] = 0i64;
  *(_QWORD *)&this->ActMat.m[12] = 0i64;
  *(_QWORD *)&this->ActMat.m[5] = 1065353216i64;
  *(_QWORD *)&this->ActMat.m[2] = 0i64;
  *(_QWORD *)&this->ActMat.m[10] = 1065353216i64;
  this->ActMat.m[14] = 0.0;
  this->ActMat.m[7] = 0.0;
  this->ActMat.m[15] = 1.0;
  *(_QWORD *)&this->WorldPos.x = 0i64;
  this->WorldPos.z = 0.0;
  *(_QWORD *)&this->PreWorldPos.x = 0i64;
  this->PreWorldPos.z = 0.0;
  *(_QWORD *)&this->PreLocalPos.x = 0i64;
  this->PreLocalPos.z = 0.0;
  *(_QWORD *)&this->PreForceFieldPos.x = 0i64;
  this->PreForceFieldPos.z = 0.0;
  *(_QWORD *)&this->InheritanceVelocity = 0i64;
  this->RatioToFollow = 0.0;
  this->zSortDistance = 0.0;
  this->mirrorFlag = 0;
  *(_QWORD *)&this->distortionRatio = 0i64;
  *(_QWORD *)&this->currentCurveKnot = 0i64;
  *(_QWORD *)&this->LightingCoefficientOfFake.x = 0i64;
  *(_QWORD *)&this->LightingCoefficientOfFake.z = 0i64;
}

void __fastcall EffectTaskManager::initialize(EffectTaskManager *this)
{
  const char *v2; // r9
  Fw::cJobManager *p_m_EffectJobManager; // rcx
  ParticleData **EffectParticleData; // rbx
  __int64 v5; // rsi
  _QWORD *v6; // rax
  ParticleData *v7; // rdi
  _QWORD *jobMax; // [rsp+60h] [rbp+8h] BYREF

  EffectTaskManager::cleanup(this);
  this->particleMemSearchPoint = 0;
  p_m_EffectJobManager = &this->m_EffectJobManager;
  if ( (this->m_EffectJobManager.m_Flag & 1) == 0 )
    Fw::cJobManager::Startup(p_m_EffectJobManager, &g_EffectHeap0, (int)&jobMax, v2);
  EffectLightManager::initialize((EffectLightManager *)p_m_EffectJobManager);
  EffectParticleData = this->EffectParticleData;
  v5 = 5i64;
  do
  {
    if ( !*EffectParticleData )
    {
      v6 = operator new[](0x350008ui64);
      jobMax = v6;
      if ( v6 )
      {
        *v6 = 2048i64;
        v7 = (ParticleData *)(v6 + 1);
        `eh vector constructor iterator'(
          v6 + 1,
          0x6A0ui64,
          0x800ui64,
          (void (__fastcall *)(void *))ParticleData::ParticleData,
          (void (__fastcall *)(void *))ParticleData::~ParticleData);
      }
      else
      {
        v7 = 0i64;
      }
      *EffectParticleData = v7;
    }
    ++EffectParticleData;
    --v5;
  }
  while ( v5 );
  this->m_EffectPs4System.initialize(&this->m_EffectPs4System);
}

ParticleData *__fastcall EffectTaskManager::newParticlePtr(EffectTaskManager *this, int jobNum)
{
  __int64 v2; // r14
  __int64 v5; // rbx
  int v6; // eax
  signed int particleMemSearchPoint; // edx
  bool *v8; // rdi
  int v9; // er8
  ParticleData *v10; // r9
  __int64 v11; // rcx
  __int64 v12; // rcx
  signed int v13; // eax
  __int64 v14; // rax
  __int64 v15; // r10
  int v16; // eax

  v2 = jobNum;
  if ( !this->EffectParticleData[jobNum] )
    return 0i64;
  v5 = jobNum;
  v6 = Mtx_lock((_Mtx_internal_imp_t *)&this->m_JobMutex[v5]);
  if ( v6 )
    std::_Throw_C_error(v6);
  particleMemSearchPoint = this->particleMemSearchPoint;
  v8 = 0i64;
  v9 = 0;
  v10 = this->EffectParticleData[v2];
  v11 = particleMemSearchPoint;
  while ( v10[v11].isUsed )
  {
    v12 = v11 + 1;
    ++v9;
    v13 = particleMemSearchPoint + 1;
    particleMemSearchPoint = 0;
    if ( v12 < 2048 )
      particleMemSearchPoint = v13;
    v14 = 0i64;
    if ( v12 < 2048 )
      v14 = v12;
    v11 = v14;
    if ( v9 >= 2048 )
      goto LABEL_14;
  }
  ParticleData::init(&v10[particleMemSearchPoint]);
  *(&this->EffectParticleData[v2]->isUsed + v15) = 1;
  *(int *)((char *)&this->EffectParticleData[v2]->jobNum + v15) = v2;
  v8 = &this->EffectParticleData[v2]->isUsed + v15;
LABEL_14:
  v16 = Mtx_unlock((_Mtx_internal_imp_t *)&this->m_JobMutex[v5]);
  if ( v16 )
    std::_Throw_C_error(v16);
  return (ParticleData *)v8;
}

void __fastcall EffectTaskManager::renderStack(EffectTaskManager *this, int priority)
{
  int v2; // ebp
  int v5; // er14
  unsigned __int64 v6; // rsi
  Effect **Myfirst; // rbx
  Effect *v8; // rbx
  signed __int64 v9; // rax
  unsigned __int64 v10; // rbx
  Effect **v11; // rcx

  v2 = 0;
  v5 = 0;
  if ( this->m_renderThreadStack._Mypair._Myval2._Mylast - this->m_renderThreadStack._Mypair._Myval2._Myfirst )
  {
    v6 = 0i64;
    do
    {
      Myfirst = this->m_renderThreadStack._Mypair._Myval2._Myfirst;
      if ( this->m_renderThreadStack._Mypair._Myval2._Mylast - Myfirst <= v6 )
        std::_Xout_of_range("invalid vector<T> subscript");
      v8 = Myfirst[v6];
      v8->mainUpdateVertexBufferInBT(v8);
      v8->postUpdateVertexBufferInBT(v8);
      ++v5;
      ++v6;
    }
    while ( v5 < (unsigned __int64)(this->m_renderThreadStack._Mypair._Myval2._Mylast
                                  - this->m_renderThreadStack._Mypair._Myval2._Myfirst) );
  }
  if ( _glewPushGroupMarkerEXT )
    _glewPushGroupMarkerEXT(0, "Render Effect");
  if ( _glewPushDebugGroup )
    _glewPushDebugGroup(0x824Au, 1u, 13, "Render Effect");
  v9 = (char *)this->m_renderThreadStack._Mypair._Myval2._Mylast
     - (char *)this->m_renderThreadStack._Mypair._Myval2._Myfirst;
  ++markerCount;
  if ( v9 >> 3 )
  {
    v10 = 0i64;
    do
    {
      v11 = this->m_renderThreadStack._Mypair._Myval2._Myfirst;
      if ( this->m_renderThreadStack._Mypair._Myval2._Mylast - v11 <= v10 )
        std::_Xout_of_range("invalid vector<T> subscript");
      ((void (__fastcall *)(Effect *, _QWORD, Effect_vtbl *, _QWORD, EffectRenderArgument *))v11[v10]->mainRender)(
        v11[v10],
        (unsigned int)v11[v10]->m_RenderArg.renderOpt,
        v11[v10]->__vftable,
        (unsigned int)priority,
        &v11[v10]->m_RenderArg);
      ++v2;
      ++v10;
    }
    while ( v2 < (unsigned __int64)(this->m_renderThreadStack._Mypair._Myval2._Mylast
                                  - this->m_renderThreadStack._Mypair._Myval2._Myfirst) );
  }
  if ( _glewPopGroupMarkerEXT )
    _glewPopGroupMarkerEXT();
  if ( _glewPopDebugGroup )
    _glewPopDebugGroup();
  --markerCount;
}

void __fastcall EffectTaskManager::updateBufferStack(EffectTaskManager *this, Fw::cJobManager *a2)
{
  Fw::cJobManager *p_m_EffectJobManager; // rcx
  int v4; // er8
  Fw::cJobManager::cWork *v5; // rax

  p_m_EffectJobManager = &this->m_EffectJobManager;
  if ( p_m_EffectJobManager->m_WorkNum > -1 && !p_m_EffectJobManager->m_RunningFlag )
  {
    v4 = 0;
    if ( p_m_EffectJobManager->m_WorkNum > 0 )
    {
      a2 = p_m_EffectJobManager;
      do
      {
        v5 = a2->m_pWork[0];
        a2 = (Fw::cJobManager *)((char *)a2 + 8);
        ++v4;
        v5->m_pJobFunc = EffectTaskManager::effectUpdateBufferThread;
        *(_QWORD *)(*(_QWORD *)&a2[-1].m_ExecuteWorkNum + 40i64) = this;
      }
      while ( v4 < p_m_EffectJobManager->m_WorkNum );
    }
  }
  Fw::cJobManager::Execute(p_m_EffectJobManager, (__int64)a2);
  this->m_updateBufferThreadStack._Mypair._Myval2._Mylast = this->m_updateBufferThreadStack._Mypair._Myval2._Myfirst;
}

void __fastcall EffectTaskManager::updateStack(EffectTaskManager *this, Fw::cJobManager *a2)
{
  Fw::cJobManager *p_m_EffectJobManager; // rcx
  int v4; // er8
  Fw::cJobManager::cWork *v5; // rax

  p_m_EffectJobManager = &this->m_EffectJobManager;
  if ( p_m_EffectJobManager->m_WorkNum > -1 && !p_m_EffectJobManager->m_RunningFlag )
  {
    v4 = 0;
    if ( p_m_EffectJobManager->m_WorkNum > 0 )
    {
      a2 = p_m_EffectJobManager;
      do
      {
        v5 = a2->m_pWork[0];
        a2 = (Fw::cJobManager *)((char *)a2 + 8);
        ++v4;
        v5->m_pJobFunc = EffectTaskManager::effectUpdateThread;
        *(_QWORD *)(*(_QWORD *)&a2[-1].m_ExecuteWorkNum + 40i64) = this;
      }
      while ( v4 < p_m_EffectJobManager->m_WorkNum );
    }
  }
  Fw::cJobManager::Execute(p_m_EffectJobManager, (__int64)a2);
  EffectLightManager::update(&this->m_EffectLightManager);
  this->m_updateThreadStack._Mypair._Myval2._Mylast = this->m_updateThreadStack._Mypair._Myval2._Myfirst;
}

