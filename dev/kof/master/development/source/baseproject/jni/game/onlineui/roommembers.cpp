#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglsprite.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/memory"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/bodypush.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actionblackout.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thr/xthread"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_hash.h"
#include "dev/kof/master/development/source/baseproject/jni/game/network/netmanager.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/savedatadefine.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/mediasound.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglrender.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/globalheapmemory.h"
#include "dev/kof/master/development/source/baseproject/jni/game/network/leaderboard.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "dev/silverware/git/sdk/aghash.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/fixmemory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix4x4.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/cpusequencedataformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixpool.h"
#include "dev/silverware/git/sdk/agstringutils.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglfog.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglbone.h"
#include "dev/silverware/git/sdk/input/agsdlmappingparser.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/particledata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shader.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/matrix4unaligned.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_prefightfaceoff.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/shot/actorshot.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actorchara.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_sgmlparser.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/quat_aos.h"
#include "dev/silverware/git/sdk/platforms/pc/system/agpcsysteminfo.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/commandcheck.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_context.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/restrictringbuffer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_constants.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessgen.h"
#include "dev/silverware/git/sdk/agreferencecountinl.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/materialshowcontrol.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treeshape.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessellator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/soundutil.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/hidpad/hidpadsystem.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exthread.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/bilinkable.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charahitrectformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitivebundle.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treecachenode.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treenode.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_loader.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmirror.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_sse.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cacheeffect.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_system.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphfitter.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steamclientpublic.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_types.h"
#include "dev/kof/master/development/source/baseproject/jni/game/onlineui/imagerects/hud_roommembers.bc3"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_player.h"
#include "dev/kof/master/development/source/baseproject/jni/game/onlineui/imagerects/hud_roommembers_rect.bc3"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_types.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic0.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_resource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/asyncjob.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charadataunify.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_debug.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlecall/battlecall.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaattackdataformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_stroker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/atomic_int.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/variableheapmemorybase.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charadamagesettingformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/dds_imagefile.h"
#include "dev/silverware/git/sdk/util/agservicecommand.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/atomic"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector2unaligned.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/asynccharafileload.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textmeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphparam.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcache.h"
#include "dev/silverware/git/sdk/agmemorystream.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcacheconfig.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglshader.h"
#include "dev/silverware/git/sdk/util/agdebugchannels.h"
#include "dev/silverware/git/sdk/agmemorypool.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_functions.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hairliner.h"
#include "dev/silverware/git/sdk/util/agperformancecounter.h"
#include "dev/silverware/git/sdk/input/agcontrollerbuttoncomponent.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "dev/silverware/git/sdk/agpointerinl.h"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/hitrectcollection.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_filterdesc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_styledtext.h"
#include "dev/silverware/git/sdk/agclock.h"
#include "dev/silverware/git/sdk/agstream.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix3x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_core.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_queue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/physicalheapmemory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_fontmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitive.h"
#include "dev/silverware/git/sdk/agsemaphore.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestageutil.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocaddr.h"
#include "dev/silverware/git/sdk/agsemaphore.inl"
#include "dev/silverware/git/sdk/agconditionvariable.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_radixtree.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/texstring.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/combomissiondataformat.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/sounddata.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/soundgroupdataformat.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdatalistmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_twips.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/condition_variable"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlehud.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectcommon.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_containers.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battleeventhandler.h"
#include "dev/kof/master/development/source/baseproject/jni/game/system/battlecontroller.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_wwhelper.h"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/damagesetting.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_bank.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestage.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actionsystem.h"
#include "dev/silverware/git/sdk/agcondition.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/deque"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/tkndata.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaactiondataformat.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charafilebase.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/refcountable.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogleffect.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/cameramotionpreviewsettings.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/stageprojectdata.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/effect/actoreffect.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actorobject.h"
#include "dev/silverware/git/sdk/filesystem/agfile.h"
#include "dev/silverware/git/sdk/filesystem/agpath.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actoroption.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogllight.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/boolinvec.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/time.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/cameracheck.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_vertex.h"
#include "dev/silverware/git/sdk/filesystem/agmount.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestagedatas.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/fontprovider/render_fontproviderhud.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_wstring.h"
#include "dev/silverware/git/sdk/filesystem/agdirectory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/tkndatas.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/freecameracheck.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/jobmanager.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/tween.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "program files (x86)/windows kits/8.1/include/shared/guiddef.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector3unaligned.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/steamnamecache.h"
#include "program files (x86)/windows kits/8.1/include/shared/stralign.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/moviedatadefine.h"
#include "dev/kof/master/development/source/baseproject/jni/game/cpuseq/battlecpu.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/future_asset.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threadcheck.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_missiondataloading.h"
#include "dev/silverware/git/sdk/agmovieplayer.h"
#include "dev/kof/master/development/source/baseproject/jni/game/cpuseq/sequencecontroller.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textlayout.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_image.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xxatomic"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/easingnumber.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdata/effectdata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_typeinfo.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/unordered_map"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/chartdata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/math.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xhash"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/resourcemanager.h"
#include "dev/kof/master/development/source/baseproject/jni/game/system/battlesysteminfo.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xfacet"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xutility"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_movie.h"
#include "dev/silverware/git/sdk/3rdparty/steam/isteamhtmlsurface.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/vec_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/list"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_operation.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/boolinvec.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/bitset"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/combomissionjudge.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_screentoworld.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/vectormath_aos.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleonlinewatching.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "dev/silverware/git/sdk/agcondition.inl"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exlockable.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/matchingsystem.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaprojectdataformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_strokeraa.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_scale9grid.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraystaticbuff.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "program files (x86)/windows kits/8.1/include/um/winnt.h"
#include "dev/silverware/git/sdk/agreferencedobjectinl.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleloading.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charabasestatusformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cxform.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/functional"
#include "dev/silverware/git/sdk/agpointer.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/inputkeyrecord.h"
#include "program files (x86)/windows kits/8.1/include/shared/basetsd.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstring"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/effect.h"
#include "dev/silverware/git/sdk/agreferencedobject.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_hashkey.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory0"
#include "dev/silverware/git/sdk/system/agusermanager.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/exception"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/drawhelper/drawhelper_vertexaddcolor.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_ps4modelroom.h"
#include "dev/kof/master/development/source/baseproject/jni/game/network/playtogether.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_event.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/png_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_keycodes.h"
#include "dev/silverware/git/sdk/agconditionvariable.inl"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_exception.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshkey.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixstate.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_gradients.h"
#include "dev/silverware/git/sdk/util/agservice.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/mat_aos.h"
#include "dev/silverware/git/sdk/agthread.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_manager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_rasterizer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_viewport.h"
#include "dev/silverware/git/sdk/agthreadpool.h"
#include "dev/silverware/git/sdk/agmutex.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/array"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/errorchecker.h"
#include "dev/silverware/git/sdk/agscopedlock.h"
#include "dev/kof/master/development/source/baseproject/jni/game/appmain.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/syncmenuimage.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/input/imesystem.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steam_api_internal.h"
#include "dev/kof/master/development/source/ps4project/baseproject/pcutil/pccontrolsmanager.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/algorithm"
#include "dev/silverware/git/sdk/agdisplay.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_drawableimage.h"
#include "dev/silverware/git/sdk/input/aginputmanager.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/system_error"
#include "dev/silverware/git/sdk/agsingleton.h"
#include "dev/silverware/git/sdk/agvector4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hal.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_buffer.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector4unaligned.h"
#include "dev/silverware/git/sdk/agmutex.inl"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestageresourcecontainer.h"
#include "dev/silverware/git/sdk/agvector3.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/weapon/actorweapon.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/stdexcept"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestageshader.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_characterdef.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/utility"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actor.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/vecidx_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/iosfwd"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/map"
#include "dev/kof/master/development/source/baseproject/jni/game/util/fix32.h"
#include "program files (x86)/windows kits/8.1/include/um/winuser.h"
#include "dev/silverware/git/sdk/memory/agallocators.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/floatinvec.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtree"
#include "dev/kof/master/development/source/baseproject/jni/game/check/operationmapper.h"
#include "dev/silverware/git/sdk/input/agcontrollercomponent.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/randommt.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filters.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steam_api.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/tuple"
#include "dev/kof/master/development/source/baseproject/jni/framework/rapper/graphicsopt.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filterparams.h"
#include "dev/kof/master/development/source/ps4project/baseproject/pcutil/pcdummy.h"
#include "dev/silverware/git/sdk/util/agdelegate.h"
#include "dev/silverware/git/sdk/agreferencecount.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphqueue.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_new.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdata/effectappdata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_font.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/quat_aos.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/commanddataformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessdefs.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/floatinvec.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "dev/silverware/git/sdk/agrectangle.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatapacked.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exwaitcondition.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstddef"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_pathdatapacker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_linebuffer.h"
#include "dev/silverware/git/sdk/agvector2.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/type_traits"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/titlestoragesystem.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_highlight.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_vec64.h"
#include "dev/silverware/git/sdk/agmath.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/translate_table.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloat.h"
#include "dev/silverware/git/sdk/input/agcontroller.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/shared_lua_context.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_profiler.h"
#include "dev/silverware/git/sdk/system/aguser.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_states.h"
#include "dev/silverware/git/sdk/agstring.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/tga_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_statebag.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/mediamanager.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_math.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/mutex"
#include "dev/kof/master/development/source/baseproject/jni/game/onlineui/roommembers.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/string"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/chrono"
#include "dev/kof/master/development/source/baseproject/jni/framework/libcommon.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/vec_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/limits"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_simplemeshcache.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/audiopresenter.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/fontprovider/render_fontproviderwinapi.h"
#include "dev/silverware/git/sdk/3rdparty/steam/matchmakingtypes.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/ios"
#include "dev/kof/master/development/source/baseproject/jni/game/network/chkdiscononlinesv.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocnum"
#include "dev/silverware/git/sdk/system/agsysteminfo.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/savedata.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/trainingsetting.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/combomissionattackeventlistener.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charamaterialsettingformat.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmodel.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xiosbase"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actorcharabase.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_bundle.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocale"
#include "dev/kof/master/development/source/baseproject/jni/game/define/charabonedefine.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglcurve.h"
#include "program files (x86)/windows kits/8.1/include/um/winbase.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocinfo"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/mat_aos.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/colorholder.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloatmp.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/debug/logging.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vector"
#include "dev/kof/master/development/source/baseproject/jni/game/util/shaderfxhelper.h"
#include "dev/kof/master/development/source/baseproject/jni/game/onlineui/imagestring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapemeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/jpeg_imagefile.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleonline.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/drawhelper/drawhelper.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treetext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefileutil.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/heapmemory.h"
#include "dev/silverware/git/sdk/agreferenceinl.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/battleplayerinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_docview.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_range.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/mutex.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thread"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/easingnumber.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/onlineui/imagestring.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/asyncjob.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/core/glstate.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogltexture.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/pcdummy.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/drawhelper/drawhelper.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/drawhelper/drawhelper_vertexaddcolor.cpp"

enum `anonymous-namespace'::createImageFontGlyph::__l2::GlyphRect
{
	GlyphRectX = 0,
	GlyphRectY = 1,
	GlyphRectW = 2,
	GlyphRectH = 3,
	GlyphRectSize = 4,
};
const _C_CONV ImageRects[316]; // 0x14089F980
std::piecewise_construct_t std::piecewise_construct; // 0x14089E3AB
RoomMembers::RoomMembers(); // 0x140171DC0
RoomMembers::Member::~Member(); // 0x1400CF620
RoomMembers::~RoomMembers(); // 0x140171F60
void RoomMembers::dispose(); // 0x140172030
void RoomMembers::readResources(); // 0x1401720E0
void RoomMembers::update(float advanceFrame); // 0x1401722C0
void RoomMembers::draw(long renderX, long renderY); // 0x140172340
void RoomMembers::setMember(long roomIndex, unsigned long long onlineID, PLAYER_ID playerID, RANKMATCH_DISCONNECT_MARKER rankMatchDisconnectMarker); // 0x140172670
void RoomMembers::clearMembersAll(); // 0x140172800
const RoomMembers::Member * RoomMembers::findMemberByOnlineID(unsigned long long onlineID); // 0x140172870
bool RoomMembers::isDetermineLoadingFiles(); // 0x1401728C0
void RoomMembers::renderWindow(long rx, long ry, long rw, long rh, float alpha); // 0x140172960//decompilation failure at 14089F980!
//decompilation failure at 14089E3AB!
void __fastcall RoomMembers::Member::Member(RoomMembers::Member *this)
{
  this->bActive = 0;
  this->onlineID = 0i64;
  this->strOnlineID.__vftable = (ImageString_vtbl *)&ImageString::`vftable';
  this->strOnlineID.m_bError = 0;
  *(_QWORD *)&this->strOnlineID.m_type = 0i64;
  this->strOnlineID.m_height = 0;
  this->strOnlineID.m_pImage = 0i64;
  this->strOnlineID.m_imageIndex = -1;
  this->strOnlineID.m_pDrawHelper = 0i64;
  this->strOnlineID.m_freeMessage.pMessage = 0i64;
  this->strOnlineID.m_freeMessage.messageLength = 0;
  this->strOnlineID.m_freeMessage.pImage = 0i64;
  this->strOnlineID.m_freeMessage.pTexuteBuffer = 0i64;
  this->strOnlineID.m_freeMessage.textureBufferSize = 0;
  this->strOnlineID.m_combination.pRects = 0i64;
  this->strOnlineID.m_combination.pGlyphs = 0i64;
  this->strOnlineID.m_combination.pImageIndexes = 0i64;
  this->strOnlineID.m_combination.imageIndexCount = 0;
  this->color = -1;
  this->voiceChatType = 2;
  this->bCheckSymbol = 0;
  *(_QWORD *)&this->roomIndex = -1i64;
  this->battleOrderIndex = -1;
  this->rankMatchDisconnectMarker = RANKMATCH_DISCONNECT_MARKER_NON;
}

void __fastcall RoomMembers::RoomMembers(RoomMembers *this)
{
  this->m_bError = 0;
  this->__vftable = (RoomMembers_vtbl *)&RoomMembers::`vftable';
  *(_WORD *)&this->m_bInitialize = 0;
  this->m_pDrawHelper = 0i64;
  this->m_image.m_isNoCache = 0;
  extension::BasicFutureObject<Image,extension::FutureImageOption>::Body::GetSharedEmpty(&this->m_image.m_body);
  `eh vector constructor iterator'(
    this->m_members,
    0xD0ui64,
    0xCui64,
    (void (__fastcall *)(void *))RoomMembers::Member::Member,
    (void (__fastcall *)(void *))BattleHudResources::errorWorkaround::~errorWorkaround);
  *(_QWORD *)&this->m_alpha.m_number = 0i64;
  *(_QWORD *)&this->m_alpha.m_max = 1065353216i64;
  this->m_alpha.m_bAnimation = 0;
  this->m_pImageFontGlyps = anonymous_namespace_::createImageFontGlyph_0();
  this->m_errorParam.member.bActive = 0;
  this->m_errorParam.member.onlineID = 0i64;
  this->m_errorParam.member.strOnlineID.m_bError = 0;
  this->m_errorParam.member.strOnlineID.__vftable = (ImageString_vtbl *)&ImageString::`vftable';
  *(_QWORD *)&this->m_errorParam.member.strOnlineID.m_type = 0i64;
  this->m_errorParam.member.strOnlineID.m_height = 0;
  this->m_errorParam.member.strOnlineID.m_pImage = 0i64;
  this->m_errorParam.member.strOnlineID.m_imageIndex = -1;
  this->m_errorParam.member.strOnlineID.m_pDrawHelper = 0i64;
  this->m_errorParam.member.strOnlineID.m_freeMessage.pMessage = 0i64;
  this->m_errorParam.member.strOnlineID.m_freeMessage.messageLength = 0;
  this->m_errorParam.member.strOnlineID.m_freeMessage.pImage = 0i64;
  this->m_errorParam.member.strOnlineID.m_freeMessage.pTexuteBuffer = 0i64;
  this->m_errorParam.member.strOnlineID.m_freeMessage.textureBufferSize = 0;
  this->m_errorParam.member.strOnlineID.m_combination.pRects = 0i64;
  this->m_errorParam.member.strOnlineID.m_combination.pGlyphs = 0i64;
  this->m_errorParam.member.strOnlineID.m_combination.pImageIndexes = 0i64;
  this->m_errorParam.member.strOnlineID.m_combination.imageIndexCount = 0;
  this->m_errorParam.member.color = -1;
  this->m_errorParam.member.voiceChatType = 2;
  this->m_errorParam.member.bCheckSymbol = 0;
  *(_QWORD *)&this->m_errorParam.member.roomIndex = -1i64;
  this->m_errorParam.member.battleOrderIndex = -1;
  this->m_errorParam.member.rankMatchDisconnectMarker = RANKMATCH_DISCONNECT_MARKER_NON;
}

void __fastcall BattleHudResources::errorWorkaround::~errorWorkaround(RoomMembers::Member *this)
{
  ImageString *p_strOnlineID; // rbx

  p_strOnlineID = &this->strOnlineID;
  this->strOnlineID.__vftable = (ImageString_vtbl *)&ImageString::`vftable';
  ImageString::dispose(&this->strOnlineID);
  p_strOnlineID->m_pDrawHelper = 0i64;
  p_strOnlineID->__vftable = (ImageString_vtbl *)&ErrorChecker::`vftable';
}

void __fastcall RoomMembers::~RoomMembers(RoomMembers *this)
{
  unsigned __int64 v2; // rdx
  ImageString::CombinationGlyph *m_pImageFontGlyps; // rcx
  extension::BasicFutureObject<Image,extension::FutureImageOption>::Body *m_ptr; // rcx

  this->__vftable = (RoomMembers_vtbl *)&RoomMembers::`vftable';
  RoomMembers::dispose(this);
  m_pImageFontGlyps = this->m_pImageFontGlyps;
  if ( m_pImageFontGlyps )
  {
    operator delete(m_pImageFontGlyps, v2);
    this->m_pImageFontGlyps = 0i64;
  }
  this->m_errorParam.member.strOnlineID.__vftable = (ImageString_vtbl *)&ImageString::`vftable';
  ImageString::dispose(&this->m_errorParam.member.strOnlineID, v2);
  this->m_errorParam.member.strOnlineID.m_pDrawHelper = 0i64;
  this->m_errorParam.member.strOnlineID.__vftable = (ImageString_vtbl *)&ErrorChecker::`vftable';
  `eh vector destructor iterator'(
    this->m_members,
    0xD0ui64,
    0xCui64,
    (void (__fastcall *)(void *))BattleHudResources::errorWorkaround::~errorWorkaround);
  m_ptr = this->m_image.m_body.m_ptr;
  if ( m_ptr
    && _InterlockedExchangeAdd64(
         (volatile signed __int64 *)&m_ptr->m_refCount.m_ptr->m_sharedCount,
         0xFFFFFFFFFFFFFFFFui64) == 1 )
  {
    ((void (__fastcall *)(extension::BasicFutureObject<Image,extension::FutureImageOption>::Body *, __int64))m_ptr->~RefCountableWeakSupportBase)(
      m_ptr,
      1i64);
  }
  this->__vftable = (RoomMembers_vtbl *)&ErrorChecker::`vftable';
}

void __fastcall RoomMembers::clearMembersAll(RoomMembers *this, unsigned __int64 a2)
{
  ImageString *p_strOnlineID; // rbx
  __int64 v3; // rdi

  p_strOnlineID = &this->m_members[0].strOnlineID;
  v3 = 12i64;
  do
  {
    LOBYTE(p_strOnlineID[-1].m_combination.pImageRenderPos) = 0;
    *(_QWORD *)&p_strOnlineID[-1].m_combination.imageIndexCount = 0i64;
    ImageString::dispose(p_strOnlineID, a2);
    HIDWORD(p_strOnlineID[1].__vftable) = 2;
    p_strOnlineID[1].m_bError = 0;
    p_strOnlineID[1].m_width = -1;
    p_strOnlineID = (ImageString *)((char *)p_strOnlineID + 208);
    --v3;
  }
  while ( v3 );
}

void __fastcall RoomMembers::dispose(RoomMembers *this)
{
  unsigned __int64 v2; // rdx
  float m_min; // xmm1_4
  float v4; // xmm0_4
  DrawHelperVertexAddColor *m_pDrawHelper; // rcx
  unsigned __int64 v6; // rdx

  *(_WORD *)&this->m_bInitialize = 0;
  extension::BasicFutureObject<Image,extension::FutureImageOption>::reset(&this->m_image);
  m_min = this->m_alpha.m_min;
  v4 = fminf(0.0, this->m_alpha.m_max);
  if ( m_min <= v4 )
    m_min = v4;
  this->m_alpha.m_number = m_min;
  this->m_alpha.m_bAnimation = 0;
  m_pDrawHelper = this->m_pDrawHelper;
  if ( m_pDrawHelper )
  {
    ((void (__fastcall *)(DrawHelperVertexAddColor *, __int64))m_pDrawHelper->~ErrorChecker)(m_pDrawHelper, 1i64);
    this->m_pDrawHelper = 0i64;
  }
  RoomMembers::clearMembersAll(this, v2);
  this->m_errorParam.member.bActive = 0;
  this->m_errorParam.member.onlineID = 0i64;
  ImageString::dispose(&this->m_errorParam.member.strOnlineID, v6);
  this->m_errorParam.member.voiceChatType = 2;
  this->m_errorParam.member.bCheckSymbol = 0;
  this->m_errorParam.member.battleOrderIndex = -1;
  this->m_bError = 0;
}

void __fastcall RoomMembers::draw(RoomMembers *this, int renderX, int renderY)
{
  int v4; // edx
  int v5; // er8
  int v6; // er9
  float alpha; // xmm1_4
  __int64 v8; // r15
  RoomMembers::EVoiceChat::Type *p_voiceChatType; // rdi
  int v10; // esi
  __int64 v11; // rdx
  unsigned int v12; // ebp
  unsigned int *p_color; // rdi
  int i; // er14
  unsigned int RenderColor; // eax
  DrawHelperVertexAddColor *m_pDrawHelper; // rcx
  bool v17; // zf
  int nonNeoScaleUp; // [rsp+20h] [rbp-78h]
  BOOL v19; // [rsp+30h] [rbp-68h]
  BOOL v20; // [rsp+30h] [rbp-68h]
  BOOL v21; // [rsp+30h] [rbp-68h]
  DrawHelper::DrawParams drawParams; // [rsp+40h] [rbp-58h] BYREF

  if ( !this->isError(this)
    && RoomMembers::isDetermineLoadingFiles(this)
    && !((__int64 (__fastcall *)(DrawHelperVertexAddColor *))this->m_pDrawHelper->isError)(this->m_pDrawHelper) )
  {
    alpha = this->m_alpha.m_number;
    if ( alpha > 0.0 )
    {
      *(_QWORD *)&drawParams.renderMode = 0i64;
      drawParams.bMirror = 0;
      drawParams.alpha = alpha;
      drawParams.scaleW = 1.0;
      drawParams.scaleH = 1.0;
      drawParams.colorARGB = -1;
      RoomMembers::renderWindow(this, v4, v5, v6, nonNeoScaleUp, alpha);
      v8 = 12i64;
      p_voiceChatType = &this->m_members[0].voiceChatType;
      v10 = 291;
      do
      {
        if ( *((_BYTE *)p_voiceChatType - 172) )
        {
          if ( *((_BYTE *)p_voiceChatType + 4) )
          {
            LOBYTE(v19) = 0;
            this->m_pDrawHelper->draw(
              this->m_pDrawHelper,
              this->m_imageIndex,
              1427,
              v10,
              &ImageRects_0[76],
              &drawParams,
              v19);
          }
          v11 = 74i64;
          if ( *p_voiceChatType )
          {
            if ( *p_voiceChatType != ALWAYS && *p_voiceChatType == 2 )
              v11 = 73i64;
          }
          else
          {
            v11 = 75i64;
          }
          LOBYTE(v19) = 0;
          this->m_pDrawHelper->draw(
            this->m_pDrawHelper,
            this->m_imageIndex,
            1790,
            v10,
            &ImageRects_0[v11],
            &drawParams,
            v19);
          if ( *((_DWORD *)p_voiceChatType + 7) == 1 )
          {
            LOBYTE(v19) = 0;
            this->m_pDrawHelper->draw(
              this->m_pDrawHelper,
              this->m_imageIndex,
              1456,
              v10,
              &ImageRects_0[78],
              &drawParams,
              v19);
          }
          else if ( *((_DWORD *)p_voiceChatType + 7) == 2 )
          {
            LOBYTE(v19) = 0;
            this->m_pDrawHelper->draw(
              this->m_pDrawHelper,
              this->m_imageIndex,
              1456,
              v10,
              &ImageRects_0[77],
              &drawParams,
              v19);
          }
        }
        v10 += 47;
        p_voiceChatType += 52;
        --v8;
      }
      while ( v8 );
      v12 = 291;
      p_color = &this->m_members[0].color;
      for ( i = 0; i < 12; ++i )
      {
        if ( *((_BYTE *)p_color - 168) )
        {
          v17 = *(p_color - 34) == 0;
          drawParams.colorARGB = *p_color;
          if ( !v17 )
            ImageString::draw((ImageString *)p_color - 1, (DrawHelper *)0x5CD, v12, &drawParams);
        }
        else
        {
          RenderColor = anonymous_namespace_::getRenderColor(i);
          m_pDrawHelper = this->m_pDrawHelper;
          drawParams.colorARGB = RenderColor;
          LOBYTE(v19) = 0;
          m_pDrawHelper->draw(m_pDrawHelper, this->m_imageIndex, 1545, v12, &ImageRects_0[11], &drawParams, v19);
          LOBYTE(v20) = 0;
          this->m_pDrawHelper->draw(
            this->m_pDrawHelper,
            this->m_imageIndex,
            1555,
            v12,
            &ImageRects_0[11],
            &drawParams,
            v20);
          LOBYTE(v21) = 0;
          this->m_pDrawHelper->draw(
            this->m_pDrawHelper,
            this->m_imageIndex,
            1565,
            v12,
            &ImageRects_0[11],
            &drawParams,
            v21);
        }
        v12 += 47;
        p_color += 52;
      }
      this->m_pDrawHelper->drawStack(this->m_pDrawHelper);
    }
  }
}

RoomMembers::Member *__fastcall RoomMembers::findMemberByOnlineID(RoomMembers *this, unsigned __int64 onlineID)
{
  __int64 v4; // r8
  RoomMembers::Member *result; // rax

  if ( this->isError(this) || !this->m_pDrawHelper )
    return 0i64;
  v4 = 0i64;
  for ( result = this->m_members; !result->bActive || result->onlineID != onlineID; ++result )
  {
    if ( ++v4 >= 12 )
      return 0i64;
  }
  return result;
}

bool __fastcall RoomMembers::isDetermineLoadingFiles(RoomMembers *this, extension::AsyncStatus::Step a2)
{
  extension::AsyncContent<Image> *m_ptr; // rax
  bool result; // al
  extension::BasicFutureObject<Image,extension::FutureImageOption>::Body *v5; // rax
  extension::AsyncContent<Image> *v6; // rdi
  Image *v7; // rax

  if ( this->m_bResourcesEnabled )
    return 1;
  m_ptr = this->m_image.m_body.m_ptr->m_content.m_ptr;
  if ( !m_ptr || m_ptr->m_isDataReleased || (result = m_ptr->m_status.m_stateFlags.m_value._My_val & 1) )
  {
    v5 = this->m_image.m_body.m_ptr;
    this->m_bResourcesEnabled = 1;
    v6 = v5->m_content.m_ptr;
    if ( v6 && !v6->m_isDataReleased )
    {
      if ( (v6->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
        extension::AsyncStatus::waitFor(&v6->m_status, a2);
      if ( v6->m_errorCode )
        this->m_bError = 1;
    }
    if ( this->m_pDrawHelper )
    {
      v7 = (Image *)extension::BasicFutureObject<extension::GFXIMovieData,void>::operator->(
                      (extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> *)&this->m_image,
                      a2);
      this->m_imageIndex = DrawHelper::setupImage(this->m_pDrawHelper, v7);
    }
    return 1;
  }
  return result;
}

void __fastcall RoomMembers::readResources(RoomMembers *this)
{
  extension::BasicFutureObject<Image,extension::FutureImageOption>::AssetCache *v2; // rcx
  extension::BasicFutureObject<Image,extension::FutureImageOption>::Body *m_ptr; // r9
  extension::BasicFutureObject<Image,extension::FutureImageOption>::Body *v4; // rdx
  extension::BasicFutureObject<Image,extension::FutureImageOption>::Body *v5; // rcx
  char *Ptr; // rcx
  char *v7; // rax
  _BYTE *v8; // rax
  extension::RefCountablePtr<extension::BasicFutureObject<Image,extension::FutureImageOption>::Body> v9; // [rsp+28h] [rbp-70h] BYREF
  std::string v10; // [rsp+38h] [rbp-60h] BYREF
  __int64 v11; // [rsp+58h] [rbp-40h]
  std::string _Right; // [rsp+60h] [rbp-38h] BYREF

  v11 = -2i64;
  RoomMembers::dispose(this);
  _Right._Mypair._Myval2._Myres = 15i64;
  _Right._Mypair._Myval2._Mysize = 0i64;
  _Right._Mypair._Myval2._Bx._Buf[0] = 0;
  std::string::assign(&_Right, "ui/OnlineUI/HUD_RoomMembers.obm", 0x1Fui64);
  v10._Mypair._Myval2._Myres = 15i64;
  v10._Mypair._Myval2._Mysize = 0i64;
  v10._Mypair._Myval2._Bx._Buf[0] = 0;
  std::string::assign(&v10, &_Right, 0i64, 0xFFFFFFFFFFFFFFFFui64);
  extension::BasicFutureObject<Image,extension::FutureImageOption>::AssetCache::getCachedOrLoadStart(
    v2,
    &v9,
    &v10,
    0i64);
  this->m_image.m_isNoCache = 0;
  m_ptr = v9.m_ptr;
  v4 = v9.m_ptr;
  if ( v9.m_ptr )
  {
    _InterlockedExchangeAdd64((volatile signed __int64 *)&v9.m_ptr->m_refCount.m_ptr->m_sharedCount, 1ui64);
    m_ptr = v9.m_ptr;
  }
  v5 = this->m_image.m_body.m_ptr;
  this->m_image.m_body.m_ptr = v4;
  if ( v5 )
  {
    if ( _InterlockedExchangeAdd64(
           (volatile signed __int64 *)&v5->m_refCount.m_ptr->m_sharedCount,
           0xFFFFFFFFFFFFFFFFui64) == 1 )
      ((void (__fastcall *)(extension::BasicFutureObject<Image,extension::FutureImageOption>::Body *, __int64))v5->~RefCountableWeakSupportBase)(
        v5,
        1i64);
    m_ptr = v9.m_ptr;
  }
  if ( m_ptr
    && _InterlockedExchangeAdd64(
         (volatile signed __int64 *)&m_ptr->m_refCount.m_ptr->m_sharedCount,
         0xFFFFFFFFFFFFFFFFui64) == 1 )
  {
    ((void (__fastcall *)(extension::BasicFutureObject<Image,extension::FutureImageOption>::Body *, __int64))m_ptr->~RefCountableWeakSupportBase)(
      m_ptr,
      1i64);
  }
  if ( _Right._Mypair._Myval2._Myres >= 0x10 )
  {
    Ptr = _Right._Mypair._Myval2._Bx._Ptr;
    if ( _Right._Mypair._Myval2._Myres + 1 >= 0x1000 )
    {
      if ( (_Right._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
        invalid_parameter_noinfo_noreturn();
      v7 = (char *)*((_QWORD *)_Right._Mypair._Myval2._Bx._Ptr - 1);
      if ( v7 >= _Right._Mypair._Myval2._Bx._Ptr )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(_Right._Mypair._Myval2._Bx._Ptr - v7) < (char *)8 )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(_Right._Mypair._Myval2._Bx._Ptr - v7) > (char *)0x27 )
        invalid_parameter_noinfo_noreturn();
      Ptr = (char *)*((_QWORD *)_Right._Mypair._Myval2._Bx._Ptr - 1);
    }
    operator delete(Ptr);
  }
  this->m_imageIndex = -1;
  v8 = operator new(0x50ui64);
  v8[8] = 0;
  *((_DWORD *)v8 + 4) = 0;
  *(_QWORD *)v8 = &DrawHelperVertexAddColor::`vftable';
  *((_QWORD *)v8 + 3) = 0i64;
  *((_DWORD *)v8 + 8) = 0;
  *((_QWORD *)v8 + 5) = 0i64;
  *((_DWORD *)v8 + 12) = 0;
  *((_DWORD *)v8 + 18) = 0;
  v8[68] = 0;
  this->m_pDrawHelper = (DrawHelperVertexAddColor *)v8;
}

void __fastcall RoomMembers::renderWindow(RoomMembers *this, int rx, int ry, int rw, int rh, float alpha)
{
  extension::BasicFutureObject<Image,extension::FutureImageOption>::Body *m_ptr; // rax
  OGLTexture *Myval2; // rbx
  extension::AsyncContent<Image> *v9; // rdi
  unsigned int m_TexID; // edx
  int m_TexParam; // edi
  Framework::GLManager *v12; // rcx
  DrawHelperVertexAddColor *m_pDrawHelper; // rcx
  DrawHelperVertexAddColor *v14; // rcx
  DrawHelperVertexAddColor *v15; // rcx
  DrawHelperVertexAddColor *v16; // rcx
  DrawHelperVertexAddColor *v17; // rcx
  bool v18; // [rsp+30h] [rbp-30h]
  BOOL v19; // [rsp+30h] [rbp-30h]
  BOOL v20; // [rsp+30h] [rbp-30h]
  BOOL v21; // [rsp+30h] [rbp-30h]
  BOOL v22; // [rsp+30h] [rbp-30h]
  BOOL v23; // [rsp+30h] [rbp-30h]
  BOOL v24; // [rsp+30h] [rbp-30h]
  BOOL v25; // [rsp+30h] [rbp-30h]
  BOOL v26; // [rsp+30h] [rbp-30h]
  __int64 v27; // [rsp+40h] [rbp-20h] BYREF
  int v28; // [rsp+48h] [rbp-18h]
  int v29; // [rsp+4Ch] [rbp-14h]
  float v30; // [rsp+50h] [rbp-10h]
  char v31; // [rsp+54h] [rbp-Ch]
  int v32; // [rsp+58h] [rbp-8h]

  m_ptr = this->m_image.m_body.m_ptr;
  Myval2 = 0i64;
  v30 = alpha;
  v27 = 0i64;
  v28 = 1065353216;
  v29 = 1065353216;
  v31 = 0;
  v32 = -1;
  v9 = m_ptr->m_content.m_ptr;
  if ( v9 && !v9->m_isDataReleased )
  {
    if ( (v9->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
      extension::AsyncStatus::waitFor(&v9->m_status, (extension::AsyncStatus::Step)rx);
    Myval2 = v9->m_data._Mypair._Myval2;
  }
  m_TexID = Myval2->m_TexID;
  m_TexParam = Myval2->m_TexParam;
  if ( m_TexID != ::m_TexID[m_ActiveTexture] || !m_TexID )
  {
    ::m_TexID[m_ActiveTexture] = m_TexID;
    v12 = Framework::GLManager::glm;
    Framework::GLManager::glm->m_textureID = m_TexID;
    while ( v12->m_bOpenGLBlocked )
      ;
    glBindTexture(0xDE1u, m_TexID);
  }
  glTexParameterf(0xDE1u, 0x2801u, 9728.0);
  glTexParameterf(0xDE1u, 0x2800u, 9728.0);
  glTexParameterf(0xDE1u, 0x2802u, 33071.0);
  glTexParameterf(0xDE1u, 0x2803u, 33071.0);
  Myval2->m_TexParam = 1285;
  v18 = 0;
  this->m_pDrawHelper->draw(
    this->m_pDrawHelper,
    this->m_imageIndex,
    1406,
    266,
    &ImageRects_0[64],
    (const DrawHelper::DrawParams *)&v27,
    v18);
  LOBYTE(v19) = 0;
  this->m_pDrawHelper->draw(
    this->m_pDrawHelper,
    this->m_imageIndex,
    1826,
    266,
    &ImageRects_0[66],
    (const DrawHelper::DrawParams *)&v27,
    v19);
  LOBYTE(v20) = 0;
  this->m_pDrawHelper->draw(
    this->m_pDrawHelper,
    this->m_imageIndex,
    1406,
    852,
    &ImageRects_0[70],
    (const DrawHelper::DrawParams *)&v27,
    v20);
  LOBYTE(v21) = 0;
  this->m_pDrawHelper->draw(
    this->m_pDrawHelper,
    this->m_imageIndex,
    1826,
    852,
    &ImageRects_0[72],
    (const DrawHelper::DrawParams *)&v27,
    v21);
  m_pDrawHelper = this->m_pDrawHelper;
  LOBYTE(v22) = 0;
  v28 = 1107864235;
  v29 = 1065353216;
  m_pDrawHelper->draw(
    m_pDrawHelper,
    this->m_imageIndex,
    1416,
    266,
    &ImageRects_0[65],
    (const DrawHelper::DrawParams *)&v27,
    v22);
  v14 = this->m_pDrawHelper;
  v28 = 1107864235;
  v29 = 1065353216;
  LOBYTE(v23) = 0;
  v14->draw(v14, this->m_imageIndex, 1416, 852, &ImageRects_0[71], (const DrawHelper::DrawParams *)&v27, v23);
  v15 = this->m_pDrawHelper;
  LOBYTE(v24) = 0;
  v28 = 1065353216;
  v29 = 1102295355;
  v15->draw(v15, this->m_imageIndex, 1406, 268, &ImageRects_0[67], (const DrawHelper::DrawParams *)&v27, v24);
  v16 = this->m_pDrawHelper;
  LOBYTE(v25) = 0;
  v28 = 1065353216;
  v29 = 1102295355;
  v16->draw(v16, this->m_imageIndex, 1826, 268, &ImageRects_0[69], (const DrawHelper::DrawParams *)&v27, v25);
  v17 = this->m_pDrawHelper;
  LOBYTE(v26) = 0;
  v28 = 1107864235;
  v29 = 1102295355;
  v17->draw(v17, this->m_imageIndex, 1416, 268, &ImageRects_0[68], (const DrawHelper::DrawParams *)&v27, v26);
  this->m_pDrawHelper->drawStack(this->m_pDrawHelper);
  OGLTexture::setParameter(Myval2, m_TexParam, 3553);
}

void __fastcall RoomMembers::setMember(
        RoomMembers *this,
        int roomIndex,
        unsigned __int64 onlineID,
        PLAYER_ID playerID,
        RANKMATCH_DISCONNECT_MARKER rankMatchDisconnectMarker)
{
  __int64 v7; // rbp
  unsigned __int64 v9; // rdx
  RoomMembers::ErrorParam *v10; // rbx
  Image *Myval2; // r15
  extension::AsyncStatus::Step v12; // edx
  __m128i si128; // xmm0
  extension::BasicFutureObject<Image,extension::FutureImageOption>::Body *m_ptr; // rax
  extension::AsyncContent<Image> *v15; // r14
  ImageString::CombinationGlyph *pGlyphs; // r12
  char **Name; // r14
  unsigned __int64 v18; // rdx
  DrawHelperVertexAddColor *m_pDrawHelper; // rax
  ImageString::CombinationSetupParams setupParams; // [rsp+30h] [rbp-38h] BYREF

  v7 = roomIndex;
  if ( !this->isError(this) && this->m_pDrawHelper )
  {
    v10 = (unsigned int)v7 > 0xB ? &this->m_errorParam : (RoomMembers::ErrorParam *)&this->m_members[v7];
    if ( !v10->member.bActive || v10->member.onlineID != onlineID )
    {
      Myval2 = 0i64;
      v10->member.onlineID = 0i64;
      v10->member.bActive = 0;
      ImageString::dispose(&v10->member.strOnlineID, v9);
      si128 = _mm_load_si128((const __m128i *)&_xmm);
      v10->member.bCheckSymbol = 0;
      v10->member.bActive = 1;
      v10->member.roomIndex = v7;
      v10->member.voiceChatType = 2;
      v10->member.playerID = playerID;
      v10->member.battleOrderIndex = -1;
      v10->member.onlineID = onlineID;
      m_ptr = this->m_image.m_body.m_ptr;
      *(__m128i *)&setupParams.imageID_0 = si128;
      setupParams.imageID_hyphen = 11;
      v15 = m_ptr->m_content.m_ptr;
      if ( v15 && !v15->m_isDataReleased )
      {
        if ( (v15->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
          extension::AsyncStatus::waitFor(&v15->m_status, v12);
        Myval2 = v15->m_data._Mypair._Myval2;
      }
      pGlyphs = this->m_pImageFontGlyps;
      Name = SteamNameCache::getName(SteamNameCache::ms_instance, (CSteamID)v10->member.onlineID);
      ImageString::dispose(&v10->member.strOnlineID, v18);
      if ( Name )
        ImageString::createCombination(
          &v10->member.strOnlineID,
          (const char *)Name,
          Myval2,
          ImageRects_0,
          pGlyphs,
          &setupParams);
      m_pDrawHelper = this->m_pDrawHelper;
      if ( v10->member.strOnlineID.m_pDrawHelper != m_pDrawHelper )
      {
        v10->member.strOnlineID.m_pDrawHelper = m_pDrawHelper;
        v10->member.strOnlineID.m_imageIndex = -1;
      }
      v10->member.color = anonymous_namespace_::getRenderColor(v7);
      v10->member.rankMatchDisconnectMarker = rankMatchDisconnectMarker;
    }
  }
}

void __fastcall RoomMembers::update(RoomMembers *this, float advanceFrame)
{
  float m_power; // xmm1_4
  float v4; // xmm0_4
  float m_min; // xmm1_4
  bool v6; // cf

  if ( !this->isError(this) )
  {
    if ( this->m_pDrawHelper )
    {
      if ( this->m_alpha.m_bAnimation )
      {
        m_power = this->m_alpha.m_power;
        if ( m_power != 0.0 )
        {
          v4 = m_power + this->m_alpha.m_number;
          this->m_alpha.m_number = v4;
          if ( m_power <= 0.0 )
          {
            m_min = this->m_alpha.m_min;
            v6 = m_min < v4;
          }
          else
          {
            m_min = this->m_alpha.m_max;
            v6 = v4 < m_min;
          }
          if ( !v6 )
          {
            this->m_alpha.m_number = m_min;
            this->m_alpha.m_bAnimation = 0;
          }
        }
      }
    }
  }
}

