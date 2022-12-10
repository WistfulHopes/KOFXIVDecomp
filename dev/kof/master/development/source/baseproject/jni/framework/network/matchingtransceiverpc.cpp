#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/asyncjob.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thr/xthread"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_bundle.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/atomic_int.h"
#include "dev/silverware/git/sdk/agcondition.inl"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/globalheapmemory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloatmp.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/atomic"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/fixmemory.h"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/hitrectcollection.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapemeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/jpeg_imagefile.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic.h"
#include "dev/silverware/git/sdk/input/agsdlmappingparser.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treetext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefileutil.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/matrix4unaligned.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_missiondataloading.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/trainingsetting.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/combomissionattackeventlistener.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charamaterialsettingformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_docview.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/texstring.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/quat_aos.h"
#include "dev/silverware/git/sdk/platforms/pc/system/agpcsysteminfo.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/fix32.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_range.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actorcharabase.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlehud.h"
#include "dev/kof/master/development/source/baseproject/jni/game/define/charabonedefine.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "dev/silverware/git/sdk/agreferencecountinl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_hash.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battleeventhandler.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/colorholder.h"
#include "dev/silverware/git/sdk/agrectangle.h"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/damagesetting.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix4x4.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/battleplayerinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixpool.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shader.h"
#include "dev/silverware/git/sdk/util/agservicecommand.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/easingnumber.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/errorchecker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_sgmlparser.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actionblackout.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_context.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_constants.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_sse.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleonlinewatching.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessgen.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steamclientpublic.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treeshape.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessellator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmodel.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/cpusequencedataformat.h"
#include "dev/silverware/git/sdk/util/agdebugchannels.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglcurve.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/refcountable.h"
#include "dev/silverware/git/sdk/util/agperformancecounter.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic0.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleloading.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/shot/actorshot.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actorchara.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "dev/silverware/git/sdk/agclock.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/commandcheck.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/restrictringbuffer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitivebundle.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/variableheapmemorybase.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treecachenode.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/materialshowcontrol.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treenode.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_loader.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cacheeffect.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_system.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphfitter.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglsprite.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector2unaligned.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/syncmenuimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefile.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_ps4modelroom.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/moviedatadefine.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_player.h"
#include "dev/silverware/git/sdk/agmovieplayer.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charahitrectformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_types.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglrender.h"
#include "dev/silverware/git/sdk/agmemorystream.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_resource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/silverware/git/sdk/aghash.h"
#include "dev/silverware/git/sdk/agmemorypool.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_functions.h"
#include "dev/silverware/git/sdk/agstringutils.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglfog.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglbone.h"
#include "dev/silverware/git/sdk/input/agcontrollerbuttoncomponent.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "dev/silverware/git/sdk/agpointerinl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_stroker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "dev/silverware/git/sdk/agstream.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/dds_imagefile.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/matchingsystem.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/physicalheapmemory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "dev/silverware/git/sdk/agsemaphore.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/silverware/git/sdk/agsemaphore.inl"
#include "dev/silverware/git/sdk/agconditionvariable.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestageresourcecontainer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textmeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/input/imesystem.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/condition_variable"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestageshader.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actor.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphparam.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xxatomic"
#include "dev/silverware/git/sdk/filesystem/agmount.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charadataunify.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcache.h"
#include "dev/silverware/git/sdk/filesystem/agdirectory.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/unordered_map"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaattackdataformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcacheconfig.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charadamagesettingformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hairliner.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xhash"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/deque"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_filterdesc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_styledtext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix3x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_core.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_queue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_fontmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitive.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocaddr.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmirror.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_radixtree.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdatalistmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_twips.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectcommon.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_containers.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_wwhelper.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/boolinvec.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/time.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exlockable.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/jobmanager.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/combomissiondataformat.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/sounddata.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/soundgroupdataformat.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/effect.h"
#include "dev/kof/master/development/source/baseproject/jni/game/network/playtogether.h"
#include "program files (x86)/windows kits/8.1/include/shared/guiddef.h"
#include "dev/kof/master/development/source/baseproject/jni/game/appmain.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_bank.h"
#include "dev/silverware/git/sdk/agdisplay.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector3unaligned.h"
#include "dev/silverware/git/sdk/agvector4.h"
#include "program files (x86)/windows kits/8.1/include/shared/stralign.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_vertex.h"
#include "dev/silverware/git/sdk/agvector3.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/fontprovider/render_fontproviderhud.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_wstring.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglshader.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/shaderfxhelper.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_typeinfo.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/effect/actoreffect.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actorobject.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/savedata.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/resourcemanager.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actoroption.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xfacet"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xutility"
#include "dev/kof/master/development/source/baseproject/jni/game/check/cameracheck.h"
#include "dev/silverware/git/sdk/3rdparty/steam/isteamhtmlsurface.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/vec_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/list"
#include "dev/kof/master/development/source/baseproject/jni/game/check/freecameracheck.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/rapper/graphicsopt.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/titlestoragesystem.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/boolinvec.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threadcheck.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleonline.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textlayout.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_image.h"
#include "dev/silverware/git/sdk/system/agusermanager.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdata/effectdata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/vectormath_aos.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/savedatadefine.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/chartdata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogleffect.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "dev/kof/master/development/source/baseproject/jni/game/cpuseq/battlecpu.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdata/effectappdata.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_movie.h"
#include "dev/silverware/git/sdk/util/agservice.h"
#include "program files (x86)/windows kits/8.1/include/um/winnt.h"
#include "dev/silverware/git/sdk/agreferencedobjectinl.h"
#include "dev/kof/master/development/source/baseproject/jni/game/cpuseq/sequencecontroller.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_operation.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogllight.h"
#include "dev/silverware/git/sdk/agthreadpool.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/functional"
#include "dev/silverware/git/sdk/agpointer.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/bitset"
#include "program files (x86)/windows kits/8.1/include/shared/basetsd.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstring"
#include "dev/silverware/git/sdk/agreferencedobject.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_prefightfaceoff.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/translate_table.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory0"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/shared_lua_context.h"
#include "dev/kof/master/development/source/baseproject/jni/game/system/battlesysteminfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_screentoworld.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/exception"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_strokeraa.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_scale9grid.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exwaitcondition.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraystaticbuff.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "dev/silverware/git/sdk/agconditionvariable.inl"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/hidpad/hidpadsystem.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/combomissionjudge.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cxform.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_exception.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/soundutil.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/mat_aos.h"
#include "dev/silverware/git/sdk/agthread.h"
#include "dev/kof/master/development/source/baseproject/jni/game/network/chkdiscononlinesv.h"
#include "dev/silverware/git/sdk/agmutex.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/array"
#include "dev/silverware/git/sdk/agscopedlock.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steam_api_internal.h"
#include "dev/kof/master/development/source/ps4project/baseproject/pcutil/pccontrolsmanager.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/algorithm"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaprojectdataformat.h"
#include "dev/silverware/git/sdk/input/aginputmanager.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/system_error"
#include "dev/silverware/git/sdk/agsingleton.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector4unaligned.h"
#include "dev/silverware/git/sdk/agmutex.inl"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charabasestatusformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_event.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/mediamanager.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/stdexcept"
#include "dev/kof/master/development/source/baseproject/jni/game/check/inputkeyrecord.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/png_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_keycodes.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/utility"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_hashkey.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshkey.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixstate.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_gradients.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/audiopresenter.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/vecidx_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/iosfwd"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/map"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlecall/battlecall.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_rasterizer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_viewport.h"
#include "program files (x86)/windows kits/8.1/include/um/winuser.h"
#include "dev/silverware/git/sdk/memory/agallocators.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/floatinvec.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtree"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_debug.h"
#include "dev/silverware/git/sdk/agcondition.h"
#include "dev/silverware/git/sdk/input/agcontrollercomponent.h"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/bodypush.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steam_api.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/tuple"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_drawableimage.h"
#include "dev/kof/master/development/source/ps4project/baseproject/pcutil/pcdummy.h"
#include "dev/silverware/git/sdk/util/agdelegate.h"
#include "dev/silverware/git/sdk/agreferencecount.h"
#include "dev/kof/master/development/source/baseproject/jni/game/network/netmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hal.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_buffer.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/math.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_new.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/baseproject/jni/game/network/leaderboard.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/quat_aos.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_characterdef.h"
#include "dev/silverware/git/sdk/filesystem/agfile.h"
#include "dev/silverware/git/sdk/agreferenceinl.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_manager.h"
#include "dev/silverware/git/sdk/filesystem/agpath.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/floatinvec.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstddef"
#include "dev/kof/master/development/source/baseproject/jni/game/check/operationmapper.h"
#include "dev/silverware/git/sdk/agvector2.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/type_traits"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/particledata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filters.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_vec64.h"
#include "dev/silverware/git/sdk/agmath.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/weapon/actorweapon.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filterparams.h"
#include "dev/silverware/git/sdk/input/agcontroller.h"
#include "dev/kof/master/development/source/baseproject/jni/game/system/battlecontroller.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphqueue.h"
#include "dev/silverware/git/sdk/system/aguser.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_font.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/mediasound.h"
#include "dev/silverware/git/sdk/agstring.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actionsystem.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_math.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/mutex"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaactiondataformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessdefs.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/string"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/chrono"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestage.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charafilebase.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/libcommon.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/vec_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/limits"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatapacked.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/tkndata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_pathdatapacker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_linebuffer.h"
#include "dev/silverware/git/sdk/3rdparty/steam/matchmakingtypes.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/ios"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_highlight.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocnum"
#include "dev/silverware/git/sdk/system/agsysteminfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloat.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/cameramotionpreviewsettings.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/stageprojectdata.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/commanddataformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_profiler.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exthread.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xiosbase"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/bilinkable.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_states.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocale"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/tga_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_statebag.h"
#include "program files (x86)/windows kits/8.1/include/um/winbase.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocinfo"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/mat_aos.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/debug/logging.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vector"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestagedatas.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/randommt.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/tkndatas.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_simplemeshcache.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/heapmemory.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/tween.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/fontprovider/render_fontproviderwinapi.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/mutex.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thread"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/asynccharafileload.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/future_asset.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/memory"
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/mutex.cpp"

void(*??m_UserInfo$initializer$@NetTransceiver@Fw@@0P6AXXZEA@@3P6AXXZEA)(); // 0x140740780
std::piecewise_construct_t std::piecewise_construct; // 0x14088901C
void(*??m_SendMutex$initializer$@NetTransceiver@Fw@@0P6AXXZEA@@3P6AXXZEA)(); // 0x140740778
Fw::TUdpP2pInfo::~TUdpP2pInfo(); // 0x1400477E0
bool Fw::NetTransceiver::GetOnlineId(unsigned long long memberId, char * pOnlineId); // 0x14004A870
bool SendP2PPacket(CSteamID steamIDRemote, const void * pubData, unsigned long cubData, EP2PSend eP2PSendType, long nChannel); // 0x14004A910
bool Fw::NetTransceiver::SendUdp(char * buf, long size, long flag, void * addrList, long addrListNum, long * pSendSize, bool noDelay, bool sendReliable); // 0x14004A9C0
void Fw::NetTransceiver::AddPeer(CSteamID peerAddr, unsigned short peerPort, unsigned long long peerMemberId, unsigned long rtt, unsigned long bandwidth, UserId * pNpId, CSteamID netId, bool hostFlag); // 0x14004ABE0
void Fw::NetTransceiver::DelPeer(unsigned long long memberId); // 0x14004AD70//decompilation failure at 140740780!
//decompilation failure at 14088901C!
//decompilation failure at 140740778!
Fw::TUdpP2pInfo *__fastcall std::_Uninitialized_move_al_unchecked1<Fw::TUdpP2pInfo *,Fw::TUdpP2pInfo *,std::allocator<Fw::TUdpP2pInfo>>(
        Fw::TUdpP2pInfo *_First,
        Fw::TUdpP2pInfo *_Last,
        Fw::TUdpP2pInfo *_Dest,
        std::_Wrap_alloc<std::allocator<Fw::TUdpP2pInfo> > *_Al)
{
  while ( _First != _Last )
  {
    if ( _Dest )
    {
      AgString::AgString(&_Dest->npId.handle, &_First->npId.handle);
      _Dest->memberId = _First->memberId;
      _Dest->isStartRequest = _First->isStartRequest;
      _Dest->addr.m_steamid.m_unAll64Bits = _First->addr.m_steamid.m_unAll64Bits;
      _Dest->port = _First->port;
      _Dest->rtt = _First->rtt;
      _Dest->bandwidth = _First->bandwidth;
      _Dest->hostFlag = _First->hostFlag;
    }
    ++_Dest;
    ++_First;
  }
  return _Dest;
}

void __fastcall std::_Wrap_alloc<std::allocator<Fw::TUdpP2pInfo>>::_Wrap_alloc<std::allocator<Fw::TUdpP2pInfo>>(
        std::_Wrap_alloc<std::allocator<Fw::TUdpP2pInfo> > *this)
{
  ;
}

// attributes: thunk
void __fastcall AgUtilities::captureScreenshot(AgString *filename)
{
  AgString::~AgString(filename);
}

void __fastcall Fw::NetTransceiver::AddPeer(
        CSteamID peerAddr,
        unsigned __int16 peerPort,
        unsigned __int64 peerMemberId,
        unsigned int rtt,
        unsigned int bandwidth,
        UserId *pNpId,
        CSteamID netId,
        bool hostFlag)
{
  std::vector<Fw::TUdpP2pInfo> *v9; // rcx
  Fw::TUdpP2pInfo *Myfirst; // rax
  Fw::TUdpP2pInfo *Mylast; // rdi
  bool *p_isStartRequest; // rbx
  AgString *p_handle; // rbx
  Fw::TUdpP2pInfo v14; // [rsp+28h] [rbp-40h] BYREF

  AgString::AgString(&v14.npId.handle);
  v14.isStartRequest = 0;
  v14.addr.m_steamid.m_unAll64Bits = 0i64;
  v14.port = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)&Fw::NetTransceiver::m_SendMutex);
  v14.addr = peerAddr;
  v14.port = 0;
  v14.isStartRequest = 1;
  v14.memberId = peerMemberId;
  *(_QWORD *)&v14.rtt = 0i64;
  v14.hostFlag = hostFlag;
  AgString::operator=(&v14.npId.handle, &pNpId->handle);
  Myfirst = Fw::NetTransceiver::m_UserInfo._Mypair._Myval2._Myfirst;
  Mylast = Fw::NetTransceiver::m_UserInfo._Mypair._Myval2._Mylast;
  if ( Fw::NetTransceiver::m_UserInfo._Mypair._Myval2._Myfirst != Fw::NetTransceiver::m_UserInfo._Mypair._Myval2._Mylast )
  {
    while ( Myfirst->memberId != peerMemberId )
    {
      if ( ++Myfirst == Fw::NetTransceiver::m_UserInfo._Mypair._Myval2._Mylast )
        goto LABEL_13;
    }
    if ( &Myfirst[1] != Fw::NetTransceiver::m_UserInfo._Mypair._Myval2._Mylast )
    {
      p_isStartRequest = &Myfirst->isStartRequest;
      do
      {
        AgString::operator=((AgString *)(p_isStartRequest - 24), (const AgString *)(p_isStartRequest + 24));
        *((_QWORD *)p_isStartRequest - 1) = *((_QWORD *)p_isStartRequest + 5);
        *p_isStartRequest = p_isStartRequest[48];
        *(_QWORD *)(p_isStartRequest + 1) = *(_QWORD *)(p_isStartRequest + 49);
        *((_WORD *)p_isStartRequest + 5) = *((_WORD *)p_isStartRequest + 29);
        *((_DWORD *)p_isStartRequest + 3) = *((_DWORD *)p_isStartRequest + 15);
        *((_DWORD *)p_isStartRequest + 4) = *((_DWORD *)p_isStartRequest + 16);
        p_isStartRequest[20] = p_isStartRequest[68];
        p_isStartRequest += 48;
      }
      while ( p_isStartRequest + 24 != (bool *)Mylast );
      Mylast = Fw::NetTransceiver::m_UserInfo._Mypair._Myval2._Mylast;
    }
    p_handle = &Mylast[-1].npId.handle;
    if ( &Mylast[-1] != Mylast )
    {
      do
      {
        AgString::~AgString(p_handle);
        p_handle += 3;
      }
      while ( p_handle != (AgString *)Mylast );
      Mylast = Fw::NetTransceiver::m_UserInfo._Mypair._Myval2._Mylast;
    }
    Fw::NetTransceiver::m_UserInfo._Mypair._Myval2._Mylast = Mylast - 1;
  }
LABEL_13:
  std::vector<Fw::TUdpP2pInfo>::push_back(v9, &v14);
  LeaveCriticalSection((LPCRITICAL_SECTION)&Fw::NetTransceiver::m_SendMutex);
  AgString::~AgString(&v14.npId.handle);
}

void __fastcall Fw::NetTransceiver::DelPeer(unsigned __int64 memberId)
{
  __int64 v2; // rdx
  Fw::TUdpP2pInfo *Myfirst; // rbx
  __int64 v4; // rax
  Fw::TUdpP2pInfo *Mylast; // rdi
  const AgString *p_handle; // rsi
  bool *p_isStartRequest; // rbx
  AgString *v8; // rbx

  EnterCriticalSection((LPCRITICAL_SECTION)&Fw::NetTransceiver::m_SendMutex);
  Myfirst = Fw::NetTransceiver::m_UserInfo._Mypair._Myval2._Myfirst;
  if ( Fw::NetTransceiver::m_UserInfo._Mypair._Myval2._Myfirst != Fw::NetTransceiver::m_UserInfo._Mypair._Myval2._Mylast )
  {
    while ( Myfirst->memberId != memberId )
    {
      if ( ++Myfirst == Fw::NetTransceiver::m_UserInfo._Mypair._Myval2._Mylast )
        goto LABEL_13;
    }
    v4 = SteamInternal_ContextInit(&`SteamInternal_ModuleContext'::`2'::s_CallbackCounterAndContext, v2);
    (*(void (__fastcall **)(_QWORD, unsigned __int64))(**(_QWORD **)(v4 + 64) + 32i64))(*(_QWORD *)(v4 + 64), memberId);
    Mylast = Fw::NetTransceiver::m_UserInfo._Mypair._Myval2._Mylast;
    p_handle = &Myfirst[1].npId.handle;
    if ( &Myfirst[1] != Fw::NetTransceiver::m_UserInfo._Mypair._Myval2._Mylast )
    {
      p_isStartRequest = &Myfirst->isStartRequest;
      do
      {
        AgString::operator=((AgString *)(p_isStartRequest - 24), p_handle);
        p_handle += 3;
        *((_QWORD *)p_isStartRequest - 1) = *((_QWORD *)p_isStartRequest + 5);
        *p_isStartRequest = p_isStartRequest[48];
        *(_QWORD *)(p_isStartRequest + 1) = *(_QWORD *)(p_isStartRequest + 49);
        *((_WORD *)p_isStartRequest + 5) = *((_WORD *)p_isStartRequest + 29);
        *((_DWORD *)p_isStartRequest + 3) = *((_DWORD *)p_isStartRequest + 15);
        *((_DWORD *)p_isStartRequest + 4) = *((_DWORD *)p_isStartRequest + 16);
        p_isStartRequest[20] = p_isStartRequest[68];
        p_isStartRequest += 48;
      }
      while ( p_handle != (const AgString *)Mylast );
      Mylast = Fw::NetTransceiver::m_UserInfo._Mypair._Myval2._Mylast;
    }
    v8 = &Mylast[-1].npId.handle;
    if ( &Mylast[-1] != Mylast )
    {
      do
      {
        AgString::~AgString(v8);
        v8 += 3;
      }
      while ( v8 != (AgString *)Mylast );
      Mylast = Fw::NetTransceiver::m_UserInfo._Mypair._Myval2._Mylast;
    }
    Fw::NetTransceiver::m_UserInfo._Mypair._Myval2._Mylast = Mylast - 1;
  }
LABEL_13:
  LeaveCriticalSection((LPCRITICAL_SECTION)&Fw::NetTransceiver::m_SendMutex);
}

__int64 __fastcall Fw::NetTransceiver::GetOnlineId(unsigned __int64 memberId, char *pOnlineId)
{
  unsigned __int8 v4; // si
  Fw::TUdpP2pInfo *Myfirst; // rbx
  unsigned int v6; // edi
  const char *CString; // rax

  v4 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)&Fw::NetTransceiver::m_SendMutex);
  Myfirst = Fw::NetTransceiver::m_UserInfo._Mypair._Myval2._Myfirst;
  if ( Fw::NetTransceiver::m_UserInfo._Mypair._Myval2._Myfirst != Fw::NetTransceiver::m_UserInfo._Mypair._Myval2._Mylast )
  {
    while ( Myfirst->memberId != memberId )
    {
      if ( ++Myfirst == Fw::NetTransceiver::m_UserInfo._Mypair._Myval2._Mylast )
        goto LABEL_6;
    }
    v6 = AgString::getLength(&Myfirst->npId.handle) + 1;
    CString = AgString::getCString(&Myfirst->npId.handle);
    memmove(pOnlineId, CString, v6);
    v4 = 1;
  }
LABEL_6:
  LeaveCriticalSection((LPCRITICAL_SECTION)&Fw::NetTransceiver::m_SendMutex);
  return v4;
}

__int64 __fastcall SendP2PPacket(
        CSteamID steamIDRemote,
        const void *pubData,
        unsigned int cubData,
        const unsigned __int8 *eP2PSendType)
{
  int v4; // esi
  __int64 v6; // rdx
  unsigned int v7; // ebx
  __int64 v8; // rax
  const unsigned __int8 *v10; // [rsp+20h] [rbp-4B8h]
  __int128 v11; // [rsp+30h] [rbp-4A8h] BYREF
  unsigned __int8 output[1136]; // [rsp+40h] [rbp-498h] BYREF

  v4 = (int)eP2PSendType;
  AES128_CBC_encrypt_buffer(output, (unsigned __int8 *)pubData, cubData, eP2PSendType, v10);
  v7 = cubData;
  if ( (cubData & 0xF) != 0 )
    v7 = cubData - (cubData & 0xF) + 16;
  v11 = *(_OWORD *)AES128_iv;
  *(_WORD *)&output[v7 + 16 - 16] = cubData + 16;
  v8 = SteamInternal_ContextInit(&`SteamInternal_ModuleContext'::`2'::s_CallbackCounterAndContext, v6);
  return (***(__int64 (__fastcall ****)(_QWORD, CSteamID::SteamID_t, __int128 *, _QWORD, int, _DWORD))(v8 + 64))(
           *(_QWORD *)(v8 + 64),
           steamIDRemote.m_steamid,
           &v11,
           v7 + 18,
           v4,
           0);
}

__int64 __fastcall Fw::NetTransceiver::SendUdp(
        char *buf,
        int size,
        int flag,
        void *addrList,
        int addrListNum,
        int *pSendSize,
        bool noDelay,
        bool sendReliable)
{
  _QWORD *v8; // rsi
  unsigned __int8 v12; // di
  unsigned int v13; // ebp
  int v14; // ebx
  int v15; // ebx
  Fw::TUdpP2pInfo *Myfirst; // rbx
  Fw::TUdpP2pInfo *i; // rax
  bool v18; // zf
  int *v19; // r12
  char v20; // r13
  Fw::TUdpP2pInfo *Mylast; // rax
  Fw::TUdpP2pInfo *v22; // rbx
  CSteamID v23; // rcx
  __int64 j; // rbx
  Fw::TUdpP2pInfo *v25; // rbx
  Fw::TUdpP2pInfo *k; // rax
  int *pSendSizea; // [rsp+88h] [rbp+30h]

  v8 = addrList;
  v12 = 1;
  if ( sendReliable )
    v13 = 2;
  else
    v13 = noDelay;
  EnterCriticalSection((LPCRITICAL_SECTION)&Fw::NetTransceiver::m_SendMutex);
  v14 = flag - 1;
  if ( v14 )
  {
    v15 = v14 - 1;
    if ( v15 )
    {
      if ( v15 == 2 )
      {
        Myfirst = Fw::NetTransceiver::m_UserInfo._Mypair._Myval2._Myfirst;
        for ( i = Fw::NetTransceiver::m_UserInfo._Mypair._Myval2._Mylast; Myfirst != i; ++Myfirst )
        {
          if ( Myfirst->isStartRequest && Myfirst->hostFlag )
          {
            v18 = (unsigned __int8)SendP2PPacket((CSteamID)Myfirst->memberId, buf, size, (const unsigned __int8 *)v13) == 0;
            i = Fw::NetTransceiver::m_UserInfo._Mypair._Myval2._Mylast;
            if ( v18 )
              v12 = 0;
          }
        }
      }
      goto LABEL_36;
    }
    v19 = (int *)addrListNum;
    v20 = 1;
    if ( addrListNum <= 0 )
      goto LABEL_26;
    Mylast = Fw::NetTransceiver::m_UserInfo._Mypair._Myval2._Mylast;
    pSendSizea = (int *)addrListNum;
    do
    {
      v22 = Fw::NetTransceiver::m_UserInfo._Mypair._Myval2._Myfirst;
      if ( Fw::NetTransceiver::m_UserInfo._Mypair._Myval2._Myfirst != Mylast )
      {
        do
        {
          if ( v22->isStartRequest )
          {
            v23.m_steamid.m_comp = (CSteamID::SteamID_t::SteamIDComponent_t)v22->memberId;
            if ( v23.m_steamid.m_comp == *v8 )
            {
              v20 = 0;
              v18 = (unsigned __int8)SendP2PPacket(v23, buf, size, (const unsigned __int8 *)v13) == 0;
              Mylast = Fw::NetTransceiver::m_UserInfo._Mypair._Myval2._Mylast;
              if ( v18 )
                v12 = 0;
            }
          }
          ++v22;
        }
        while ( v22 != Mylast );
        v19 = pSendSizea;
      }
      ++v8;
      v19 = (int *)((char *)v19 - 1);
      pSendSizea = v19;
    }
    while ( v19 );
    if ( v20 )
    {
      v19 = (int *)addrListNum;
      v8 = addrList;
LABEL_26:
      for ( j = 0i64; j < (__int64)v19; ++j )
      {
        if ( !(unsigned __int8)SendP2PPacket((CSteamID)v8[j], buf, size, (const unsigned __int8 *)v13) )
          v12 = 0;
      }
    }
  }
  else
  {
    v25 = Fw::NetTransceiver::m_UserInfo._Mypair._Myval2._Myfirst;
    for ( k = Fw::NetTransceiver::m_UserInfo._Mypair._Myval2._Mylast; v25 != k; ++v25 )
    {
      if ( v25->isStartRequest )
      {
        v18 = (unsigned __int8)SendP2PPacket((CSteamID)v25->memberId, buf, size, (const unsigned __int8 *)v13) == 0;
        k = Fw::NetTransceiver::m_UserInfo._Mypair._Myval2._Mylast;
        if ( v18 )
          v12 = 0;
      }
    }
  }
LABEL_36:
  LeaveCriticalSection((LPCRITICAL_SECTION)&Fw::NetTransceiver::m_SendMutex);
  return v12;
}

void __fastcall std::vector<Fw::TUdpP2pInfo>::_Reallocate(
        std::vector<Fw::TUdpP2pInfo> *this,
        unsigned __int64 _Count,
        __int64 a3,
        std::_Wrap_alloc<std::allocator<Fw::TUdpP2pInfo> > *a4)
{
  Fw::TUdpP2pInfo *v5; // rdi
  unsigned __int64 v6; // rcx
  void *v7; // rax
  Fw::TUdpP2pInfo *Mylast; // r14
  Fw::TUdpP2pInfo *Myfirst; // rbx
  signed __int64 v10; // r15

  if ( _Count )
  {
    if ( _Count > 0x555555555555555i64 )
      std::_Xbad_alloc();
    v6 = 48 * _Count;
    if ( 48 * _Count < 0x1000 )
    {
      v5 = (Fw::TUdpP2pInfo *)operator new(v6);
    }
    else
    {
      if ( v6 + 39 <= v6 )
        std::_Xbad_alloc();
      v7 = operator new(v6 + 39);
      v5 = (Fw::TUdpP2pInfo *)(((unsigned __int64)v7 + 39) & 0xFFFFFFFFFFFFFFE0ui64);
      *(_QWORD *)&v5[-1].bandwidth = v7;
    }
  }
  else
  {
    v5 = 0i64;
  }
  std::_Uninitialized_move_al_unchecked1<Fw::TUdpP2pInfo *,Fw::TUdpP2pInfo *,std::allocator<Fw::TUdpP2pInfo>>(
    Fw::NetTransceiver::m_UserInfo._Mypair._Myval2._Myfirst,
    Fw::NetTransceiver::m_UserInfo._Mypair._Myval2._Mylast,
    v5,
    a4);
  Mylast = Fw::NetTransceiver::m_UserInfo._Mypair._Myval2._Mylast;
  Myfirst = Fw::NetTransceiver::m_UserInfo._Mypair._Myval2._Myfirst;
  v10 = Fw::NetTransceiver::m_UserInfo._Mypair._Myval2._Mylast - Fw::NetTransceiver::m_UserInfo._Mypair._Myval2._Myfirst;
  if ( Fw::NetTransceiver::m_UserInfo._Mypair._Myval2._Myfirst )
  {
    if ( Fw::NetTransceiver::m_UserInfo._Mypair._Myval2._Myfirst != Fw::NetTransceiver::m_UserInfo._Mypair._Myval2._Mylast )
    {
      do
      {
        AgString::~AgString(&Myfirst->npId.handle);
        ++Myfirst;
      }
      while ( Myfirst != Mylast );
      Myfirst = Fw::NetTransceiver::m_UserInfo._Mypair._Myval2._Myfirst;
    }
    std::_Wrap_alloc<std::allocator<Fw::TUdpP2pInfo>>::deallocate(
      (std::allocator<AgControllerPairingChangedEvent> *)((char *)Fw::NetTransceiver::m_UserInfo._Mypair._Myval2._Myend
                                                        - (char *)Myfirst),
      (AgControllerPairingChangedEvent *)Myfirst,
      Fw::NetTransceiver::m_UserInfo._Mypair._Myval2._Myend - Myfirst);
  }
  Fw::NetTransceiver::m_UserInfo._Mypair._Myval2._Myend = &v5[_Count];
  Fw::NetTransceiver::m_UserInfo._Mypair._Myval2._Mylast = &v5[v10];
  Fw::NetTransceiver::m_UserInfo._Mypair._Myval2._Myfirst = v5;
}

void __fastcall std::vector<Fw::TUdpP2pInfo>::_Reserve(std::vector<Fw::TUdpP2pInfo> *this, unsigned __int64 _Count)
{
  signed __int64 v2; // rdx
  unsigned __int64 v3; // r8
  std::vector<Fw::TUdpP2pInfo> *v4; // rcx
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // r10
  std::vector<Fw::TUdpP2pInfo> *v7; // rax

  if ( !(Fw::NetTransceiver::m_UserInfo._Mypair._Myval2._Myend - Fw::NetTransceiver::m_UserInfo._Mypair._Myval2._Mylast) )
  {
    v2 = Fw::NetTransceiver::m_UserInfo._Mypair._Myval2._Mylast
       - Fw::NetTransceiver::m_UserInfo._Mypair._Myval2._Myfirst;
    if ( v2 == 0x555555555555555i64 )
      std::_Xlength_error("vector<T> too long");
    v3 = v2 + 1;
    v4 = 0i64;
    v5 = (unsigned __int64)(Fw::NetTransceiver::m_UserInfo._Mypair._Myval2._Myend
                          - Fw::NetTransceiver::m_UserInfo._Mypair._Myval2._Myfirst) >> 1;
    v6 = 0x555555555555555i64 - v5;
    v7 = (std::vector<Fw::TUdpP2pInfo> *)(Fw::NetTransceiver::m_UserInfo._Mypair._Myval2._Myend
                                        - Fw::NetTransceiver::m_UserInfo._Mypair._Myval2._Myfirst
                                        + v5);
    if ( v6 >= Fw::NetTransceiver::m_UserInfo._Mypair._Myval2._Myend
             - Fw::NetTransceiver::m_UserInfo._Mypair._Myval2._Myfirst )
      v4 = v7;
    if ( (unsigned __int64)v4 >= v3 )
      v3 = (unsigned __int64)v4;
    std::vector<Fw::TUdpP2pInfo>::_Reallocate(
      v4,
      v3,
      v3,
      (std::_Wrap_alloc<std::allocator<Fw::TUdpP2pInfo> > *)((char *)Fw::NetTransceiver::m_UserInfo._Mypair._Myval2._Myend
                                                           - (char *)Fw::NetTransceiver::m_UserInfo._Mypair._Myval2._Myfirst));
  }
}

void __fastcall std::vector<Fw::TUdpP2pInfo>::_Tidy(std::vector<Fw::TUdpP2pInfo> *this)
{
  Fw::TUdpP2pInfo *Myfirst; // rbx
  Fw::TUdpP2pInfo *Mylast; // rdi

  Myfirst = Fw::NetTransceiver::m_UserInfo._Mypair._Myval2._Myfirst;
  if ( Fw::NetTransceiver::m_UserInfo._Mypair._Myval2._Myfirst )
  {
    Mylast = Fw::NetTransceiver::m_UserInfo._Mypair._Myval2._Mylast;
    if ( Fw::NetTransceiver::m_UserInfo._Mypair._Myval2._Myfirst != Fw::NetTransceiver::m_UserInfo._Mypair._Myval2._Mylast )
    {
      do
      {
        AgString::~AgString(&Myfirst->npId.handle);
        ++Myfirst;
      }
      while ( Myfirst != Mylast );
      Myfirst = Fw::NetTransceiver::m_UserInfo._Mypair._Myval2._Myfirst;
    }
    std::_Wrap_alloc<std::allocator<Fw::TUdpP2pInfo>>::deallocate(
      (std::allocator<AgControllerPairingChangedEvent> *)((char *)Fw::NetTransceiver::m_UserInfo._Mypair._Myval2._Myend
                                                        - (char *)Myfirst),
      (AgControllerPairingChangedEvent *)Myfirst,
      Fw::NetTransceiver::m_UserInfo._Mypair._Myval2._Myend - Myfirst);
    *(_OWORD *)&Fw::NetTransceiver::m_UserInfo._Mypair._Myval2._Myfirst = 0i64;
    Fw::NetTransceiver::m_UserInfo._Mypair._Myval2._Myend = 0i64;
  }
}

void __fastcall std::vector<Fw::TUdpP2pInfo>::clear(std::vector<Fw::TUdpP2pInfo> *this)
{
  Fw::TUdpP2pInfo *Mylast; // rdi
  Fw::TUdpP2pInfo *Myfirst; // rbx

  Mylast = Fw::NetTransceiver::m_UserInfo._Mypair._Myval2._Mylast;
  Myfirst = Fw::NetTransceiver::m_UserInfo._Mypair._Myval2._Myfirst;
  if ( Fw::NetTransceiver::m_UserInfo._Mypair._Myval2._Myfirst == Fw::NetTransceiver::m_UserInfo._Mypair._Myval2._Mylast )
  {
    Fw::NetTransceiver::m_UserInfo._Mypair._Myval2._Mylast = Fw::NetTransceiver::m_UserInfo._Mypair._Myval2._Myfirst;
  }
  else
  {
    do
    {
      AgString::~AgString(&Myfirst->npId.handle);
      ++Myfirst;
    }
    while ( Myfirst != Mylast );
    Fw::NetTransceiver::m_UserInfo._Mypair._Myval2._Mylast = Fw::NetTransceiver::m_UserInfo._Mypair._Myval2._Myfirst;
  }
}

void __fastcall std::_Wrap_alloc<std::allocator<Fw::TUdpP2pInfo>>::deallocate(
        std::allocator<AgControllerPairingChangedEvent> *this,
        AgControllerPairingChangedEvent *_Ptr,
        unsigned __int64 _Count)
{
  AgUser *m_ptr; // rax
  char *v4; // rdx

  if ( _Count > 0x555555555555555i64 )
    invalid_parameter_noinfo_noreturn();
  if ( 48 * _Count >= 0x1000 )
  {
    if ( ((unsigned __int8)_Ptr & 0x1F) != 0 )
      invalid_parameter_noinfo_noreturn();
    m_ptr = _Ptr[-1].oldUser.m_ptr;
    if ( m_ptr >= (AgUser *)_Ptr )
      invalid_parameter_noinfo_noreturn();
    v4 = (char *)((char *)_Ptr - (char *)m_ptr);
    if ( (unsigned __int64)v4 < 8 )
      invalid_parameter_noinfo_noreturn();
    if ( (unsigned __int64)v4 > 0x27 )
      invalid_parameter_noinfo_noreturn();
    _Ptr = (AgControllerPairingChangedEvent *)m_ptr;
  }
  operator delete(_Ptr);
}

void __fastcall std::vector<Fw::TUdpP2pInfo>::push_back(
        std::vector<Fw::TUdpP2pInfo> *this,
        const Fw::TUdpP2pInfo *_Val)
{
  Fw::TUdpP2pInfo *Mylast; // rbx
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rdi
  std::vector<Fw::TUdpP2pInfo> *v7; // rdi

  Mylast = Fw::NetTransceiver::m_UserInfo._Mypair._Myval2._Mylast;
  if ( _Val >= Fw::NetTransceiver::m_UserInfo._Mypair._Myval2._Mylast
    || (this = (std::vector<Fw::TUdpP2pInfo> *)Fw::NetTransceiver::m_UserInfo._Mypair._Myval2._Myfirst,
        Fw::NetTransceiver::m_UserInfo._Mypair._Myval2._Myfirst > _Val) )
  {
    if ( Fw::NetTransceiver::m_UserInfo._Mypair._Myval2._Mylast == Fw::NetTransceiver::m_UserInfo._Mypair._Myval2._Myend )
    {
      std::vector<Fw::TUdpP2pInfo>::_Reserve(this, (unsigned __int64)_Val);
      Mylast = Fw::NetTransceiver::m_UserInfo._Mypair._Myval2._Mylast;
    }
    if ( Mylast )
    {
      AgString::AgString(&Mylast->npId.handle, &_Val->npId.handle);
      Mylast->memberId = _Val->memberId;
      Mylast->isStartRequest = _Val->isStartRequest;
      Mylast->addr.m_steamid.m_unAll64Bits = _Val->addr.m_steamid.m_unAll64Bits;
      Mylast->port = _Val->port;
      Mylast->rtt = _Val->rtt;
      Mylast->bandwidth = _Val->bandwidth;
      Mylast->hostFlag = _Val->hostFlag;
      Mylast = Fw::NetTransceiver::m_UserInfo._Mypair._Myval2._Mylast;
    }
  }
  else
  {
    v4 = (unsigned __int128)(((char *)_Val - (char *)Fw::NetTransceiver::m_UserInfo._Mypair._Myval2._Myfirst)
                           * (__int128)0x2AAAAAAAAAAAAAABi64) >> 64;
    v5 = (__int64)((unsigned __int128)(((char *)_Val - (char *)Fw::NetTransceiver::m_UserInfo._Mypair._Myval2._Myfirst)
                                     * (__int128)0x2AAAAAAAAAAAAAABi64) >> 64) >> 3;
    v6 = (v5 >> 63) + v5;
    if ( Fw::NetTransceiver::m_UserInfo._Mypair._Myval2._Mylast == Fw::NetTransceiver::m_UserInfo._Mypair._Myval2._Myend )
    {
      std::vector<Fw::TUdpP2pInfo>::_Reserve(
        (std::vector<Fw::TUdpP2pInfo> *)Fw::NetTransceiver::m_UserInfo._Mypair._Myval2._Myfirst,
        v4);
      Mylast = Fw::NetTransceiver::m_UserInfo._Mypair._Myval2._Mylast;
      this = (std::vector<Fw::TUdpP2pInfo> *)Fw::NetTransceiver::m_UserInfo._Mypair._Myval2._Myfirst;
    }
    v7 = &this[2 * v6];
    if ( Mylast )
    {
      AgString::AgString(&Mylast->npId.handle, (const AgString *)v7);
      Mylast->memberId = (unsigned __int64)v7->_Mypair._Myval2._Myend;
      Mylast->isStartRequest = (bool)v7[1]._Mypair._Myval2._Myfirst;
      Mylast->addr.m_steamid.m_unAll64Bits = *(unsigned __int64 *)((char *)&v7[1]._Mypair._Myval2._Myfirst + 1);
      Mylast->port = WORD1(v7[1]._Mypair._Myval2._Mylast);
      Mylast->rtt = HIDWORD(v7[1]._Mypair._Myval2._Mylast);
      Mylast->bandwidth = (unsigned int)v7[1]._Mypair._Myval2._Myend;
      Mylast->hostFlag = BYTE4(v7[1]._Mypair._Myval2._Myend);
      Mylast = Fw::NetTransceiver::m_UserInfo._Mypair._Myval2._Mylast;
    }
  }
  Fw::NetTransceiver::m_UserInfo._Mypair._Myval2._Mylast = Mylast + 1;
}

