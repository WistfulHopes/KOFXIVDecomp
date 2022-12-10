#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_drawableimage.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/memory"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory"
#include "dev/kof/master/development/source/baseproject/jni/game/network/netmanager.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/future_asset.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hal.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_buffer.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglcurve.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thr/xthread"
#include "dev/kof/master/development/source/baseproject/jni/game/network/leaderboard.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/asyncjob.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_characterdef.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/globalheapmemory.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_manager.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/atomic_int.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/fixmemory.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/atomic"
#include "dev/silverware/git/sdk/input/agsdlmappingparser.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/matrix4unaligned.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglsprite.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/quat_aos.h"
#include "dev/silverware/git/sdk/platforms/pc/system/agpcsysteminfo.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/particledata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filters.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/rapper/graphicsopt.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/weapon/actorweapon.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filterparams.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/random"
#include "dev/kof/master/development/source/baseproject/jni/game/system/battlecontroller.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphqueue.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglrender.h"
#include "dev/silverware/git/sdk/system/agusermanager.h"
#include "dev/silverware/git/sdk/agreferencecountinl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_font.h"
#include "dev/silverware/git/sdk/aghash.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actionsystem.h"
#include "dev/silverware/git/sdk/agstringutils.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglfog.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglbone.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaactiondataformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessdefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestage.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charafilebase.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatapacked.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/tkndata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_pathdatapacker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_linebuffer.h"
#include "dev/silverware/git/sdk/util/agservice.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_highlight.h"
#include "dev/silverware/git/sdk/agthreadpool.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloat.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_sse.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/cameramotionpreviewsettings.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/stageprojectdata.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/commanddataformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_profiler.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steamclientpublic.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_types.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/unordered_map"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_states.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/tga_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_statebag.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xhash"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic0.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/bilinkable.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestagedatas.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/refcountable.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/tkndatas.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_simplemeshcache.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/tween.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/fontprovider/render_fontproviderwinapi.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmirror.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/variableheapmemorybase.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/asynccharafileload.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector2unaligned.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_bundle.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloatmp.h"
#include "dev/silverware/git/sdk/agmemorystream.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/hitrectcollection.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapemeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/jpeg_imagefile.h"
#include "dev/silverware/git/sdk/agmemorypool.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_functions.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treetext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefileutil.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/mediamanager.h"
#include "dev/silverware/git/sdk/input/agcontrollerbuttoncomponent.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "dev/silverware/git/sdk/agpointerinl.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_missiondataloading.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/trainingsetting.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/combomissionattackeventlistener.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charamaterialsettingformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_docview.h"
#include "dev/silverware/git/sdk/agstream.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/fix32.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_range.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/physicalheapmemory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actorcharabase.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/audiopresenter.h"
#include "dev/silverware/git/sdk/agsemaphore.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlehud.h"
#include "dev/kof/master/development/source/baseproject/jni/game/define/charabonedefine.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "dev/silverware/git/sdk/agsemaphore.inl"
#include "dev/silverware/git/sdk/agconditionvariable.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_hash.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battleeventhandler.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/colorholder.h"
#include "dev/silverware/git/sdk/agcondition.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/condition_variable"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/damagesetting.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglshader.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/input/imesystem.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xxatomic"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix4x4.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/battleplayerinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixpool.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/math.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shader.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/deque"
#include "dev/kof/master/development/source/ps4project/baseproject/ag/kofapplication.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/easingnumber.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/errorchecker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_sgmlparser.h"
#include "dev/silverware/git/sdk/filesystem/agfile.h"
#include "dev/silverware/git/sdk/agreferenceinl.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actionblackout.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_context.h"
#include "dev/silverware/git/sdk/filesystem/agpath.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/bitset"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_constants.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleonlinewatching.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessgen.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treeshape.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessellator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/cpusequencedataformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/boolinvec.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/time.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleloading.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/shot/actorshot.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actorchara.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "dev/kof/master/development/source/baseproject/jni/game/check/commandcheck.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/mediasound.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/restrictringbuffer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitivebundle.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogleffect.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/jobmanager.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treecachenode.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exlockable.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/materialshowcontrol.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treenode.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_loader.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_movie.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cacheeffect.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_system.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphfitter.h"
#include "program files (x86)/windows kits/8.1/include/shared/guiddef.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/syncmenuimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefile.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_operation.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogllight.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_ps4modelroom.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/moviedatadefine.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_player.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector3unaligned.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charahitrectformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_types.h"
#include "program files (x86)/windows kits/8.1/include/shared/stralign.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_resource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_stroker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/dds_imagefile.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_typeinfo.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/randommt.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/resourcemanager.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestageresourcecontainer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textmeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xfacet"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xutility"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestageshader.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actor.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphparam.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charadataunify.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcache.h"
#include "dev/silverware/git/sdk/3rdparty/steam/isteamhtmlsurface.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/vec_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/list"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaattackdataformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcacheconfig.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/boolinvec.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charadamagesettingformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hairliner.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_filterdesc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_styledtext.h"
#include "dev/silverware/git/sdk/agcondition.inl"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix3x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_core.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_queue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_fontmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitive.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/vectormath_aos.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocaddr.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_radixtree.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdatalistmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_twips.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/texstring.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectcommon.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_containers.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_wwhelper.h"
#include "program files (x86)/windows kits/8.1/include/um/winnt.h"
#include "dev/silverware/git/sdk/agreferencedobjectinl.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/functional"
#include "dev/silverware/git/sdk/agpointer.h"
#include "dev/silverware/git/sdk/agrectangle.h"
#include "program files (x86)/windows kits/8.1/include/shared/basetsd.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstring"
#include "dev/silverware/git/sdk/agreferencedobject.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory0"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/combomissiondataformat.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/sounddata.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/soundgroupdataformat.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/effect.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "dev/kof/master/development/source/baseproject/jni/game/network/playtogether.h"
#include "dev/silverware/git/sdk/util/agservicecommand.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/exception"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_bank.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exwaitcondition.h"
#include "dev/silverware/git/sdk/agconditionvariable.inl"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_vertex.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_exception.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/fontprovider/render_fontproviderhud.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_wstring.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/mat_aos.h"
#include "dev/silverware/git/sdk/agthread.h"
#include "dev/silverware/git/sdk/util/agdebugchannels.h"
#include "dev/silverware/git/sdk/agmutex.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/array"
#include "dev/kof/master/development/source/baseproject/jni/game/util/shaderfxhelper.h"
#include "dev/silverware/git/sdk/util/agperformancecounter.h"
#include "dev/silverware/git/sdk/agscopedlock.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/effect/actoreffect.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actorobject.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/matchingsystem.h"
#include "dev/silverware/git/sdk/agclock.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steam_api_internal.h"
#include "dev/kof/master/development/source/ps4project/baseproject/pcutil/pccontrolsmanager.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/algorithm"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/savedata.h"
#include "dev/silverware/git/sdk/input/aginputmanager.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/system_error"
#include "dev/silverware/git/sdk/agsingleton.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actoroption.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector4unaligned.h"
#include "dev/silverware/git/sdk/agmutex.inl"
#include "dev/kof/master/development/source/baseproject/jni/game/check/cameracheck.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/stdexcept"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/utility"
#include "dev/kof/master/development/source/baseproject/jni/game/check/freecameracheck.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threadcheck.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/vecidx_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/iosfwd"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/map"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleonline.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textlayout.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_image.h"
#include "dev/silverware/git/sdk/agmovieplayer.h"
#include "program files (x86)/windows kits/8.1/include/um/winuser.h"
#include "dev/silverware/git/sdk/memory/agallocators.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/floatinvec.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtree"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdata/effectdata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "dev/silverware/git/sdk/input/agcontrollercomponent.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steam_api.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/tuple"
#include "dev/kof/master/development/source/baseproject/jni/game/data/savedatadefine.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/chartdata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "dev/kof/master/development/source/ps4project/baseproject/pcutil/pcdummy.h"
#include "dev/silverware/git/sdk/util/agdelegate.h"
#include "dev/silverware/git/sdk/agreferencecount.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_new.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/quat_aos.h"
#include "dev/kof/master/development/source/baseproject/jni/game/cpuseq/battlecpu.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdata/effectappdata.h"
#include "dev/kof/master/development/source/baseproject/jni/game/cpuseq/sequencecontroller.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/floatinvec.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "dev/silverware/git/sdk/filesystem/agmount.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstddef"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_prefightfaceoff.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/translate_table.h"
#include "dev/silverware/git/sdk/filesystem/agdirectory.h"
#include "dev/silverware/git/sdk/agvector2.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/type_traits"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/shared_lua_context.h"
#include "dev/kof/master/development/source/baseproject/jni/game/system/battlesysteminfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_screentoworld.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_vec64.h"
#include "dev/silverware/git/sdk/agmath.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/silverware/git/sdk/input/agcontroller.h"
#include "dev/silverware/git/sdk/system/aguser.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_strokeraa.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_scale9grid.h"
#include "dev/silverware/git/sdk/agstring.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraystaticbuff.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_math.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/mutex"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/hidpad/hidpadsystem.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/combomissionjudge.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cxform.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/operationmapper.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/string"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/chrono"
#include "dev/kof/master/development/source/baseproject/jni/game/util/soundutil.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/libcommon.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/vec_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/limits"
#include "dev/kof/master/development/source/baseproject/jni/game/network/chkdiscononlinesv.h"
#include "dev/silverware/git/sdk/3rdparty/steam/matchmakingtypes.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/ios"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocnum"
#include "dev/silverware/git/sdk/system/agsysteminfo.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaprojectdataformat.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xiosbase"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charabasestatusformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_event.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exthread.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocale"
#include "dev/kof/master/development/source/baseproject/jni/game/check/inputkeyrecord.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/png_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_keycodes.h"
#include "program files (x86)/windows kits/8.1/include/um/winbase.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocinfo"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/mat_aos.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/debug/logging.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vector"
#include "dev/kof/master/development/source/baseproject/jni/game/appmain.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_hashkey.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshkey.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixstate.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_gradients.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/titlestoragesystem.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlecall/battlecall.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_rasterizer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_viewport.h"
#include "dev/silverware/git/sdk/agdisplay.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/heapmemory.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_debug.h"
#include "dev/silverware/git/sdk/agvector4.h"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/bodypush.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmodel.h"
#include "dev/silverware/git/sdk/agvector3.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/mutex.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thread"
#include "dev/kof/master/development/source/ps4project/baseproject/pcutil/pccontrolsmanager.cpp"
#include "dev/silverware/git/sdk/input/agcontrollerrumblecomponent.h"

void FighterOperationMapper::reset(); // 0x1400D9960
struct std::pair<enum FighterOperationMapper::MapKey,enum Scaleform::Key::Code>
{
	struct _Myt;
	enum first_type
	{
		MapKey_Button_Square = 0,
		MapKey_Button_Cross = 1,
		MapKey_Button_Circle = 2,
		MapKey_Button_Triangle = 3,
		MapKey_Button_L1 = 4,
		MapKey_Button_R1 = 5,
		MapKey_Button_L2 = 6,
		MapKey_Button_R2 = 7,
		MapKey_Button_L3 = 8,
		MapKey_Button_R3 = 9,
		MapKey_Internal_Use_Upper_Limit = 10,
	};
	enum second_type
	{
		None = 0,
		A = 65,
		B = 66,
		C = 67,
		D = 68,
		E = 69,
		F = 70,
		G = 71,
		H = 72,
		I = 73,
		J = 74,
		K = 75,
		L = 76,
		M = 77,
		N = 78,
		O = 79,
		P = 80,
		Q = 81,
		R = 82,
		S = 83,
		T = 84,
		U = 85,
		V = 86,
		W = 87,
		X = 88,
		Y = 89,
		Z = 90,
		Num0 = 48,
		Num1 = 49,
		Num2 = 50,
		Num3 = 51,
		Num4 = 52,
		Num5 = 53,
		Num6 = 54,
		Num7 = 55,
		Num8 = 56,
		Num9 = 57,
		KP_0 = 96,
		KP_1 = 97,
		KP_2 = 98,
		KP_3 = 99,
		KP_4 = 100,
		KP_5 = 101,
		KP_6 = 102,
		KP_7 = 103,
		KP_8 = 104,
		KP_9 = 105,
		KP_Multiply = 106,
		KP_Add = 107,
		KP_Enter = 108,
		KP_Subtract = 109,
		KP_Decimal = 110,
		KP_Divide = 111,
		F1 = 112,
		F2 = 113,
		F3 = 114,
		F4 = 115,
		F5 = 116,
		F6 = 117,
		F7 = 118,
		F8 = 119,
		F9 = 120,
		F10 = 121,
		F11 = 122,
		F12 = 123,
		F13 = 124,
		F14 = 125,
		F15 = 126,
		Backspace = 8,
		Tab = 9,
		Clear = 12,
		Return = 13,
		Shift = 16,
		Control = 17,
		Alt = 18,
		Pause = 19,
		CapsLock = 20,
		Escape = 27,
		Space = 32,
		PageUp = 33,
		PageDown = 34,
		End = 35,
		Home = 36,
		Left = 37,
		Up = 38,
		Right = 39,
		Down = 40,
		PrintScreen = 44,
		Insert = 45,
		Delete = 46,
		Help = 47,
		NumLock = 144,
		ScrollLock = 145,
		LeftShift = 160,
		RightShift = 161,
		LeftControl = 162,
		RightControl = 163,
		LeftAlt = 164,
		RightAlt = 165,
		Semicolon = 186,
		Equal = 187,
		Comma = 188,
		Minus = 189,
		Period = 190,
		Slash = 191,
		Bar = 192,
		BracketLeft = 219,
		Backslash = 220,
		BracketRight = 221,
		Quote = 222,
		OEM_AX = 225,
		OEM_102 = 226,
		ICO_HELP = 227,
		ICO_00 = 228,
		KeyCount = 229,
	};
	pair<enum FighterOperationMapper::MapKey,enum Scaleform::Key::Code>(std::pair<enum FighterOperationMapper::MapKey,enum Scaleform::Key::Code> &);
	std::pair<enum FighterOperationMapper::MapKey,enum Scaleform::Key::Code> & operator=(const std::pair<enum FighterOperationMapper::MapKey,enum Scaleform::Key::Code> &);
	std::pair<enum FighterOperationMapper::MapKey,enum Scaleform::Key::Code> & operator=(std::pair<enum FighterOperationMapper::MapKey,enum Scaleform::Key::Code> &);
	FighterOperationMapper::MapKey first; // 0x0
	Scaleform::Key::Code second; // 0x4
	void swap(std::pair<enum FighterOperationMapper::MapKey,enum Scaleform::Key::Code> &);
};
class MapKeyFromKeyCode::__l2::<lambda_acf7e90cc9036cd98f866e31b17ba42c>
{
public:
	<lambda_acf7e90cc9036cd98f866e31b17ba42c>(MapKeyFromKeyCode::__l2::<lambda_acf7e90cc9036cd98f866e31b17ba42c> &);
	<lambda_acf7e90cc9036cd98f866e31b17ba42c>();
	<lambda_acf7e90cc9036cd98f866e31b17ba42c>(const long &);
private:
	long keyCode; // 0x0
public:
	MapKeyFromKeyCode::__l2::<lambda_acf7e90cc9036cd98f866e31b17ba42c> & operator=(const MapKeyFromKeyCode::__l2::<lambda_acf7e90cc9036cd98f866e31b17ba42c> &);
};
long FighterOperationMapper::serializeBindings(long * bindings); // 0x1400D99D0
void FighterOperationMapper::deserializeBindings(long * bindings); // 0x1400D9D90
void FighterOperationKeyboardMapper::reset(long userIndex); // 0x1400DA1D0
long FighterOperationKeyboardMapper::serializeBindings(long * bindings); // 0x1400DA310
void FighterOperationKeyboardMapper::deserializeBindings(long * bindings); // 0x1400DA400
FighterOperation::ReverseOperationMapper::ReverseOperationMapper(); // 0x1400DA530
GameOperations::OperationSourceChannel FighterOperation::ReverseOperationMapper::convertMapKey(FighterOperationMapper::MapKey k); // 0x1400DA6F0
FighterOperation::ReverseOperationMapper & FighterOperation::ReverseOperationMapper::assign(const FighterOperationMapper & mapper); // 0x1400DA780
FighterOperation::ReverseOperationKeyboardMapper::ReverseOperationKeyboardMapper(); // 0x1400DACD0
FighterOperation::ReverseOperationKeyboardMapper & FighterOperation::ReverseOperationKeyboardMapper::assign(const FighterOperationKeyboardMapper & mapper); // 0x1400DAE00
FighterOperation & FighterOperation::Instance(); // 0x1400DB670
void FighterOperation::assignUser(long fighterIndex, long userIndex, long maskType); // 0x1400DB720
bool FighterOperation::test(long fighterIndex, GameOperations::FighterOpSpec op); // 0x1400DB7D0
bool FighterOperation::testEdge(long fighterIndex, GameOperations::FighterOpSpec op); // 0x1400DB8A0
bool UserGameOperation::OperationSource::readCurrent(long userIndex, long dummy); // 0x1400DB930
bool UserGameOperation::AGKeyboardOperationSource::readCurrent(); // 0x1400DBC90
struct UserGameOperation::AGKeyboardOperationSource::readCurrent::__l5::<unnamed-type-playerDirState>
{
	unsigned long long upId; // 0x0
	unsigned long long downId; // 0x8
	unsigned long long leftId; // 0x10
	unsigned long long rightId; // 0x18
};
const std::pair<enum FighterOperationMapper::MapKey,enum Scaleform::Key::Code> keyTranslationTable[20]; // 0x140A5BD50
long long RepeatPeriod_Initial; // 0x140A5A0B8
long long RepeatPeriod_Final; // 0x140A5A910
std::piecewise_construct_t std::piecewise_construct; // 0x14089B31F
void(*??s_keyboardRepeatTimerSourceTable$initializer$@UserSlot@UserGameOperation@@2P6AXXZEA@@3P6AXXZEA)(); // 0x1407407C8
class UserGameOperation::AGKeyboardOperationSource::readCurrent::__l10::<lambda_5962da4fab9ef9a7c0f4954354d20e14>
{
public:
	<lambda_5962da4fab9ef9a7c0f4954354d20e14>(UserGameOperation::AGKeyboardOperationSource::readCurrent::__l10::<lambda_5962da4fab9ef9a7c0f4954354d20e14> &);
	<lambda_5962da4fab9ef9a7c0f4954354d20e14>();
	<lambda_5962da4fab9ef9a7c0f4954354d20e14>(unsigned long long &);
private:
	unsigned long long & i; // 0x0
public:
	UserGameOperation::AGKeyboardOperationSource::readCurrent::__l10::<lambda_5962da4fab9ef9a7c0f4954354d20e14> & operator=(const UserGameOperation::AGKeyboardOperationSource::readCurrent::__l10::<lambda_5962da4fab9ef9a7c0f4954354d20e14> &);
};
class UserGameOperation::AGKeyboardOperationSource::readCurrent::__l5::<lambda_2f9568e64bc22ed1b225fe74f6c265fe>
{
public:
	<lambda_2f9568e64bc22ed1b225fe74f6c265fe>(UserGameOperation::AGKeyboardOperationSource::readCurrent::__l5::<lambda_2f9568e64bc22ed1b225fe74f6c265fe> &);
	<lambda_2f9568e64bc22ed1b225fe74f6c265fe>();
	<lambda_2f9568e64bc22ed1b225fe74f6c265fe>(UserGameOperation::AGKeyboardOperationSource *);
private:
	UserGameOperation::AGKeyboardOperationSource * __this; // 0x0
public:
	UserGameOperation::AGKeyboardOperationSource::readCurrent::__l5::<lambda_2f9568e64bc22ed1b225fe74f6c265fe> & operator=(const UserGameOperation::AGKeyboardOperationSource::readCurrent::__l5::<lambda_2f9568e64bc22ed1b225fe74f6c265fe> &);
};
UserGameOperation::UserSlot::UserSlot(); // 0x1400DC150
void UserGameOperation::UserSlot::update(const UserGameOperation::OperationSource & src, bool isValidSrc, long long frameDuration); // 0x1400DC3A0
void UserGameOperation::UserSlot::updateKeyboard(const UserGameOperation::AGKeyboardOperationSource & src, bool isValidSrc, long long frameDuration); // 0x1400DC5A0
void UserGameOperation::UserSlot::clear(); // 0x1400DC9C0
bool UserGameOperation::UserSlot::test(std::bitset<16> & chkBtn, UserGameOperation::TestPolicy testPolicy); // 0x1400DCA50
bool UserGameOperation::UserSlot::testInvert(std::bitset<16> & chkBtn, UserGameOperation::TestPolicy testPolicy); // 0x1400DCB10
bool UserGameOperation::UserSlot::testKeyboard(const std::bitset<256> & chkBtn, UserGameOperation::TestPolicy testPolicy); // 0x1400DCBD0
bool UserGameOperation::UserSlot::testKeyboardInvert(const std::bitset<256> & chkBtn, UserGameOperation::TestPolicy testPolicy); // 0x1400DCC80
UserGameOperation::UserGameOperation(); // 0x1400DCD40
UserGameOperation & UserGameOperation::Instance(); // 0x1400DCE50
UserGameOperation::UserSlot * UserGameOperation::getUserSlot(long userIndex); // 0x1400DCEC0
void UserGameOperation::SetButtonConfig(std::bitset<16> * pValueList); // 0x1400DCF40
void UserGameOperation::SetKeyboardButtonConfig(std::bitset<16> * pValueList); // 0x1400DD080
void UserGameOperation::update(); // 0x1400DD220
bool UserGameOperation::test(long userIndex, GameOperations::GameOpSpec op, UserGameOperation::TestPolicy testPolicy, bool controller, bool * fromKeyboard); // 0x1400DD490
bool UserGameOperation::testInvert(long userIndex, GameOperations::GameOpSpec op, UserGameOperation::TestPolicy testPolicy, bool controller, bool * fromKeyboard); // 0x1400DD620
bool UserGameOperation::testKeyboard(long userIndex, GameOperations::GameOpSpec op, UserGameOperation::TestPolicy testPolicy); // 0x1400DD7A0
bool UserGameOperation::testFighter(long userIndex, const FighterOperation::ReverseOperationMapper & mapper, GameOperations::FighterOpSpec op, UserGameOperation::TestPolicy testPolicy); // 0x1400DD810
bool UserGameOperation::testFighterKeyboard(long userIndex, const FighterOperation::ReverseOperationKeyboardMapper & mapper, GameOperations::FighterOpSpec op); // 0x1400DD8A0
bool UserGameOperation::testFighterKeyboard(long userIndex, const FighterOperation::ReverseOperationKeyboardMapper & mapper, GameOperations::FighterOpSpec op, UserGameOperation::TestPolicy testPolicy); // 0x1400DD970
void UserGameOperation::clear(); // 0x1400DDA10
void UserGameOperation::stopVibrationAll(); // 0x1400DDAE0//decompilation failure at 140A5BD50!
//decompilation failure at 140A5A0B8!
//decompilation failure at 140A5A910!
//decompilation failure at 14089B31F!
//decompilation failure at 1407407C8!
void __fastcall FighterOperation::ReverseOperationKeyboardMapper::ReverseOperationKeyboardMapper(
        FighterOperation::ReverseOperationKeyboardMapper *this)
{
  FighterOperationKeyboardMapper *p_mapper; // rax
  __int64 v3; // rcx
  FighterOperationKeyboardMapper mapper; // [rsp+20h] [rbp-418h] BYREF

  memset(this, 0, sizeof(FighterOperation::ReverseOperationKeyboardMapper));
  p_mapper = &mapper;
  v3 = 16i64;
  do
  {
    *(_QWORD *)p_mapper->m_mapping = 0i64;
    *(_QWORD *)&p_mapper->m_mapping[2] = 0i64;
    *(_QWORD *)&p_mapper->m_mapping[4] = 0i64;
    p_mapper = (FighterOperationKeyboardMapper *)((char *)p_mapper + 64);
    *(_QWORD *)&p_mapper[-1].m_mapping[246] = 0i64;
    *(_QWORD *)&p_mapper[-1].m_mapping[248] = 0i64;
    *(_QWORD *)&p_mapper[-1].m_mapping[250] = 0i64;
    *(_QWORD *)&p_mapper[-1].m_mapping[252] = 0i64;
    *(_QWORD *)&p_mapper[-1].m_mapping[254] = 0i64;
    --v3;
  }
  while ( v3 );
  mapper.m_mapping[55] = Mapped_LP;
  mapper.m_mapping[57] = Mapped_LK;
  mapper.m_mapping[48] = Mapped_HK;
  mapper.m_mapping[56] = Mapped_HP;
  mapper.m_mapping[80] = Mapped_LP_LK;
  mapper.m_mapping[85] = Mapped_LK_HP;
  mapper.m_mapping[73] = Mapped_LK_HK;
  mapper.m_mapping[79] = Mapped_HP_LP;
  mapper.m_mapping[219] = Mapped_REC;
  mapper.m_mapping[221] = Mapped_PLAY;
  mapper.m_mapping[37] = Mapped_L;
  mapper.m_mapping[40] = Mapped_D;
  mapper.m_mapping[39] = Mapped_R;
  mapper.m_mapping[38] = Mapped_U;
  FighterOperation::ReverseOperationKeyboardMapper::assign(this, &mapper);
}

void __fastcall FighterOperation::ReverseOperationMapper::ReverseOperationMapper(
        FighterOperation::ReverseOperationMapper *this)
{
  std::bitset<61>::reference *v2; // rax
  unsigned __int64 Mypos; // rdx
  std::bitset<61>::reference *v4; // rax
  unsigned __int64 v5; // rdx
  std::bitset<61>::reference *v6; // rax
  unsigned __int64 v7; // rdx
  std::bitset<61>::reference *v8; // rax
  unsigned __int64 v9; // rdx
  std::bitset<61>::reference result; // [rsp+20h] [rbp-58h] BYREF
  __int64 v11; // [rsp+30h] [rbp-48h]
  FighterOperationMapper mapper; // [rsp+38h] [rbp-40h] BYREF

  v11 = -2i64;
  *(_QWORD *)this->channels[0]._Array = 0i64;
  *(_QWORD *)this->channels[2]._Array = 0i64;
  *(_QWORD *)this->channels[4]._Array = 0i64;
  *(_QWORD *)this->channels[6]._Array = 0i64;
  *(_QWORD *)this->channels[8]._Array = 0i64;
  this->channels[10]._Array[0] = 0;
  v2 = std::bitset<21>::operator[]((std::bitset<61> *)this, &result, 0i64);
  Mypos = v2->_Mypos;
  if ( Mypos >= 0x10 )
    std::_Xout_of_range("invalid bitset<N> position");
  *((_DWORD *)v2->_Pbitset->_Array + (Mypos >> 5)) |= 1 << (Mypos & 0x1F);
  v4 = std::bitset<21>::operator[]((std::bitset<61> *)&this->channels[1], &result, 1ui64);
  v5 = v4->_Mypos;
  if ( v5 >= 0x10 )
    std::_Xout_of_range("invalid bitset<N> position");
  *((_DWORD *)v4->_Pbitset->_Array + (v5 >> 5)) |= 1 << (v5 & 0x1F);
  v6 = std::bitset<21>::operator[]((std::bitset<61> *)&this->channels[2], &result, 2ui64);
  v7 = v6->_Mypos;
  if ( v7 >= 0x10 )
    std::_Xout_of_range("invalid bitset<N> position");
  *((_DWORD *)v6->_Pbitset->_Array + (v7 >> 5)) |= 1 << (v7 & 0x1F);
  v8 = std::bitset<21>::operator[]((std::bitset<61> *)&this->channels[3], &result, 3ui64);
  v9 = v8->_Mypos;
  if ( v9 >= 0x10 )
    std::_Xout_of_range("invalid bitset<N> position");
  *((_DWORD *)v8->_Pbitset->_Array + (v9 >> 5)) |= 1 << (v9 & 0x1F);
  *(__m128i *)mapper.m_mapping = _mm_add_epi32(_mm_load_si128((const __m128i *)&_xmm), (__m128i)_xmm);
  *(__m128i *)&mapper.m_mapping[4] = _mm_load_si128((const __m128i *)&_xmm);
  mapper.m_mapping[8] = Mapped_REC;
  mapper.m_mapping[9] = Mapped_PLAY;
  FighterOperation::ReverseOperationMapper::assign(this, &mapper);
}

void __fastcall FighterOperation::Slot::Slot(FighterOperation::Slot *this)
{
  this->userIndex = 0;
  FighterOperationMapper::reset(&this->operationMapper);
  FighterOperation::ReverseOperationMapper::ReverseOperationMapper(&this->reverseMapper);
  FighterOperationKeyboardMapper::reset(&this->operationKeyboardMapper, 1);
  FighterOperation::ReverseOperationKeyboardMapper::ReverseOperationKeyboardMapper(&this->reverseKeyboardMapper);
  this->bInvalidVibration = 0;
  FighterOperation::ReverseOperationMapper::assign(&this->reverseMapper, &this->operationMapper);
  FighterOperation::ReverseOperationKeyboardMapper::assign(&this->reverseKeyboardMapper, &this->operationKeyboardMapper);
}

void __fastcall UserGameOperation::UserGameOperation(UserGameOperation *this)
{
  __int64 v1; // rdi
  UserGameOperation *v2; // rbx
  __int64 perf_frequency; // rbx
  __int64 perf_counter; // rax
  std::bitset<16> *v5; // rdx
  UserGameOperation *v6; // rcx

  v1 = 4i64;
  v2 = &the_instance_1;
  do
  {
    UserGameOperation::UserSlot::UserSlot(v2->m_slots);
    v2 = (UserGameOperation *)((char *)v2 + 616);
    --v1;
  }
  while ( v1 );
  UserGameOperation::UserSlot::UserSlot(&the_instance_1.m_anyUserSlot);
  UserGameOperation::UserSlot::UserSlot(&the_instance_1.m_emptyUserSlot);
  memset(the_instance_1.m_ButtonConfig, 0, sizeof(the_instance_1.m_ButtonConfig));
  memset(the_instance_1.m_KeyboardButtonConfig, 0, sizeof(the_instance_1.m_KeyboardButtonConfig));
  memset(the_instance_1.m_2pKeyboardButtonConfig, 0, sizeof(the_instance_1.m_2pKeyboardButtonConfig));
  perf_frequency = Query_perf_frequency();
  perf_counter = Query_perf_counter();
  the_instance_1.m_lastTime = (1000000000 * (perf_counter % perf_frequency) / perf_frequency
                             + 1000000000 * (perf_counter / perf_frequency))
                            / 1000;
  UserGameOperation::SetButtonConfig(
    (UserGameOperation *)((unsigned __int64)((unsigned __int128)((1000000000
                                                                * (perf_counter % perf_frequency)
                                                                / perf_frequency
                                                                + 1000000000 * (perf_counter / perf_frequency))
                                                               * (__int128)0x20C49BA5E353F7CFi64) >> 64) >> 63),
    (std::bitset<16> *)the_instance_1.m_lastTime);
  UserGameOperation::SetKeyboardButtonConfig(v6, v5);
  the_instance_1.m_keyboardLocked = 0;
  RepeatPeriod_Initial = 512i64;
  RepeatPeriod_Final = 96i64;
}

void __fastcall UserGameOperation::UserSlot::UserSlot(UserGameOperation::UserSlot *this)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // rdx
  unsigned __int16 v5; // ax
  __int64 *m_repeatTimer; // rax
  __int64 v7; // rdx
  __int128 v8; // xmm1
  __int64 *m_keyboardRepeatTimer; // rax
  __int128 v10; // xmm1
  __int128 v11; // [rsp+28h] [rbp-30h]
  __int128 v12; // [rsp+38h] [rbp-20h]

  this->m_stableKeyboardChannels._Array[0] = 0i64;
  this->m_stableKeyboardChannels._Array[1] = 0i64;
  this->m_stableKeyboardChannels._Array[2] = 0i64;
  this->m_stableKeyboardChannels._Array[3] = 0i64;
  this->m_invertStableKeyboardChannels._Array[0] = 0i64;
  this->m_invertStableKeyboardChannels._Array[1] = 0i64;
  this->m_invertStableKeyboardChannels._Array[2] = 0i64;
  this->m_invertStableKeyboardChannels._Array[3] = 0i64;
  memset(&this->m_pressedEventKeyboardChannels, 0, 0xA0ui64);
  v2 = 1000 * RepeatPeriod_Initial;
  *(_QWORD *)this->m_stableChannels._Array = 0i64;
  v3 = 11i64;
  *(_QWORD *)this->m_pressedEventChannels._Array = 0i64;
  v4 = 11i64;
  *(_QWORD *)this->m_repeatPressedEventChannels._Array = 0i64;
  this->m_pressedEventEnabledMask._Array[0] = 0;
  v5 = ~(unsigned __int16)this->m_stableChannels._Array[0];
  this->m_dummyMode = 0;
  this->m_invertStableChannels._Array[0] = v5;
  m_repeatTimer = this->m_repeatTimer;
  do
  {
    m_repeatTimer[11] = v2;
    *m_repeatTimer++ = v2;
    --v4;
  }
  while ( v4 );
  v7 = 3i64;
  v8 = *(_OWORD *)&this->m_stableKeyboardChannels._Array[2];
  v11 = *(_OWORD *)this->m_stableKeyboardChannels._Array;
  v12 = v8;
  do
  {
    *((_QWORD *)&v11 + v7) = ~*((_QWORD *)&v11 + v7);
    --v7;
  }
  while ( v7 >= 0 );
  m_keyboardRepeatTimer = this->m_keyboardRepeatTimer;
  v10 = v12;
  *(_OWORD *)this->m_invertStableKeyboardChannels._Array = v11;
  *(_OWORD *)&this->m_invertStableKeyboardChannels._Array[2] = v10;
  do
  {
    m_keyboardRepeatTimer[11] = v2;
    *m_keyboardRepeatTimer++ = v2;
    --v3;
  }
  while ( v3 );
  if ( !UserGameOperation::UserSlot::s_keyboardRepeatTimerInit )
  {
    UserGameOperation::UserSlot::s_keyboardRepeatTimerSourceTable[1]._Array[3] |= 0x28000000ui64;
    UserGameOperation::UserSlot::s_keyboardRepeatTimerSourceTable[2]._Array[1] |= 8ui64;
    UserGameOperation::UserSlot::s_keyboardRepeatTimerSourceTable[3]._Array[0] |= 0x2000ui64;
    UserGameOperation::UserSlot::s_keyboardRepeatTimerSourceTable[4]._Array[0] |= 0x8000000ui64;
    UserGameOperation::UserSlot::s_keyboardRepeatTimerSourceTable[5]._Array[0] |= 0x200ui64;
    UserGameOperation::UserSlot::s_keyboardRepeatTimerSourceTable[8]._Array[1] |= 0x100000ui64;
    UserGameOperation::UserSlot::s_keyboardRepeatTimerSourceTable[9]._Array[1] |= 0x2000000ui64;
    UserGameOperation::UserSlot::s_keyboardRepeatTimerSourceTable[0]._Array[1] |= 0x880012ui64;
    UserGameOperation::UserSlot::s_keyboardRepeatTimerInit = 1;
    UserGameOperation::UserSlot::s_keyboardRepeatTimerSourceTable[6]._Array[0] |= 0x100000000ui64;
    UserGameOperation::UserSlot::s_keyboardRepeatTimerSourceTable[7]._Array[1] |= 0x1000000000000ui64;
    UserGameOperation::UserSlot::s_keyboardRepeatTimerSourceTable[0]._Array[0] |= 0x1E000000000ui64;
    UserGameOperation::UserSlot::s_keyboardRepeatTimerSourceTable[10]._Array[0] |= 0x600000000ui64;
  }
}

std::bitset<256>::reference *__fastcall std::bitset<256>::reference::operator=(
        std::bitset<256>::reference *this,
        const std::bitset<256>::reference *_Bitref)
{
  unsigned __int64 Mypos; // r8
  std::bitset<256> *Pbitset; // r11
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rdx
  __int64 *v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax

  Mypos = _Bitref->_Mypos;
  Pbitset = _Bitref->_Pbitset;
  if ( Mypos >= 0x100 )
    std::_Xout_of_range("invalid bitset<N> position");
  v5 = this->_Mypos;
  if ( v5 >= 0x100 )
    std::_Xout_of_range("invalid bitset<N> position");
  v6 = v5 >> 6;
  v7 = this->_Mypos & 0x3F;
  v8 = (__int64 *)&this->_Pbitset->_Array[v6];
  v9 = *v8;
  if ( (Pbitset->_Array[Mypos >> 6] & (1i64 << (Mypos & 0x3F))) != 0 )
    v10 = v9 | (1i64 << v7);
  else
    v10 = v9 & ~(1i64 << v7);
  *v8 = v10;
  return this;
}

std::bitset<61>::reference *__fastcall std::bitset<21>::operator[](
        std::bitset<61> *this,
        std::bitset<61>::reference *result,
        unsigned __int64 _Pos)
{
  std::bitset<61>::reference *v3; // rax

  result->_Pbitset = this;
  v3 = result;
  result->_Mypos = _Pos;
  return v3;
}

unsigned __int8 __fastcall std::bitset<256>::reference::operator bool(std::bitset<256>::reference *this)
{
  unsigned __int64 Mypos; // rdx
  unsigned __int64 v2; // rax

  Mypos = this->_Mypos;
  if ( Mypos >= 0x100 )
    std::_Xout_of_range("invalid bitset<N> position");
  v2 = this->_Pbitset->_Array[Mypos >> 6];
  return _bittest64((const __int64 *)&v2, this->_Mypos & 0x3F);
}

FighterOperation *__fastcall FighterOperation::Instance()
{
  __int64 v0; // rbx
  FighterOperation::Slot *v1; // rdi

  if ( dword_140ACD4F4 > *(_DWORD *)(*(_QWORD *)NtCurrentTeb()->Reserved1[11] + 40i64) )
  {
    Init_thread_header(&dword_140ACD4F4);
    if ( dword_140ACD4F4 == -1 )
    {
      v0 = 2i64;
      v1 = (FighterOperation::Slot *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[8][32];
      do
      {
        FighterOperation::Slot::Slot(v1++);
        --v0;
      }
      while ( v0 );
      *(_QWORD *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[19][176] = &extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[19][176];
      *(_QWORD *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[19][184] = &extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[19][176];
      atexit(FighterOperation::Instance_::_2_::_dynamic_atexit_destructor_for__the_instance__);
      Init_thread_footer(&dword_140ACD4F4);
    }
  }
  return (FighterOperation *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[8][24];
}

UserGameOperation *__fastcall UserGameOperation::Instance()
{
  UserGameOperation *v0; // rcx

  if ( dword_140ACD4F0 > *(_DWORD *)(*(_QWORD *)NtCurrentTeb()->Reserved1[11] + 40i64) )
  {
    Init_thread_header(&dword_140ACD4F0);
    if ( dword_140ACD4F0 == -1 )
    {
      UserGameOperation::UserGameOperation(v0);
      atexit(UserGameOperation::Instance_::_2_::_dynamic_atexit_destructor_for__the_instance__);
      Init_thread_footer(&dword_140ACD4F0);
    }
  }
  return &the_instance_1;
}

void __fastcall UserGameOperation::SetButtonConfig(UserGameOperation *this, std::bitset<16> *pValueList)
{
  __int128 v2; // [rsp+0h] [rbp-80h]
  __int128 v3; // [rsp+10h] [rbp-70h]
  __int128 v4; // [rsp+20h] [rbp-60h]
  __int128 v5; // [rsp+30h] [rbp-50h]
  __int128 v6; // [rsp+40h] [rbp-40h]
  __int128 v7; // [rsp+50h] [rbp-30h]

  *(_QWORD *)&v2 = 0x200000001i64;
  *((_QWORD *)&v2 + 1) = 0x800000004i64;
  *(_OWORD *)the_instance_1.m_ButtonConfig[0]._Array = v2;
  *(_QWORD *)&v3 = 0x40000000200i64;
  *((_QWORD *)&v3 + 1) = 0x80000000100i64;
  *(_OWORD *)the_instance_1.m_ButtonConfig[4]._Array = v3;
  *(_QWORD *)&v4 = 0x2000000010i64;
  *((_QWORD *)&v4 + 1) = 0x8000000040i64;
  *(_OWORD *)the_instance_1.m_ButtonConfig[8]._Array = v4;
  *(_QWORD *)&v5 = 0x200000001000i64;
  *((_QWORD *)&v5 + 1) = 0x400000008000i64;
  *(_QWORD *)&v6 = 0x2000001000i64;
  *((_QWORD *)&v6 + 1) = 0xFFFF00000010i64;
  *(_OWORD *)the_instance_1.m_ButtonConfig[16]._Array = v6;
  *(_QWORD *)&v7 = 0x8000000FFFFi64;
  *((_QWORD *)&v7 + 1) = 0x20000000400i64;
  *(_OWORD *)the_instance_1.m_ButtonConfig[12]._Array = v5;
  the_instance_1.m_ButtonConfig[26]._Array[0] = 1024;
  *(_QWORD *)the_instance_1.m_ButtonConfig[24]._Array = 0x100000000100i64;
  *(_OWORD *)the_instance_1.m_ButtonConfig[20]._Array = v7;
}

void __fastcall UserGameOperation::SetKeyboardButtonConfig(UserGameOperation *this, std::bitset<16> *pValueList)
{
  the_instance_1.m_KeyboardButtonConfig[4]._Array[0] |= 0x2000ui64;
  the_instance_1.m_KeyboardButtonConfig[0]._Array[0] |= 0x2000000000ui64;
  the_instance_1.m_KeyboardButtonConfig[5]._Array[0] |= 0x8000000ui64;
  the_instance_1.m_KeyboardButtonConfig[2]._Array[0] |= 0x8000000000ui64;
  the_instance_1.m_KeyboardButtonConfig[3]._Array[0] |= 0x4000000000ui64;
  the_instance_1.m_KeyboardButtonConfig[1]._Array[0] |= 0x10000000000ui64;
  the_instance_1.m_KeyboardButtonConfig[7]._Array[0] |= 0x100000000ui64;
  the_instance_1.m_KeyboardButtonConfig[16]._Array[1] |= 0x1000000000000ui64;
  the_instance_1.m_KeyboardButtonConfig[14]._Array[0] |= 0x1000000000ui64;
  the_instance_1.m_KeyboardButtonConfig[19]._Array[0] |= 0x200000000ui64;
  the_instance_1.m_KeyboardButtonConfig[20]._Array[0] |= 0x400000000ui64;
  the_instance_1.m_KeyboardButtonConfig[22]._Array[0] |= 0x4000000000000ui64;
  the_instance_1.m_KeyboardButtonConfig[23]._Array[0] |= 0x8000000000000ui64;
  the_instance_1.m_KeyboardButtonConfig[24]._Array[0] |= 0x10000000000000ui64;
  the_instance_1.m_KeyboardButtonConfig[6]._Array[1] |= 8ui64;
  the_instance_1.m_KeyboardButtonConfig[10]._Array[3] |= 0x8000000ui64;
  the_instance_1.m_KeyboardButtonConfig[11]._Array[3] |= 0x20000000ui64;
  the_instance_1.m_KeyboardButtonConfig[9]._Array[0] |= 0x200ui64;
  the_instance_1.m_KeyboardButtonConfig[12]._Array[0] |= 0x8000000ui64;
  the_instance_1.m_KeyboardButtonConfig[17]._Array[1] |= 0x100000ui64;
  the_instance_1.m_KeyboardButtonConfig[18]._Array[1] |= 0x2000000ui64;
  the_instance_1.m_KeyboardButtonConfig[25]._Array[1] |= 0x2000000000000ui64;
  the_instance_1.m_KeyboardButtonConfig[21]._Array[0] |= 0x2000000000000ui64;
  the_instance_1.m_KeyboardButtonConfig[26]._Array[0] |= 0x200ui64;
  the_instance_1.m_2pKeyboardButtonConfig[0]._Array[1] |= 4ui64;
  the_instance_1.m_2pKeyboardButtonConfig[2]._Array[1] |= 0x2000ui64;
  the_instance_1.m_2pKeyboardButtonConfig[3]._Array[1] |= 0x100ui64;
  the_instance_1.m_2pKeyboardButtonConfig[1]._Array[1] |= 0x4000ui64;
  the_instance_1.m_2pKeyboardButtonConfig[4]._Array[1] |= 0x10ui64;
  the_instance_1.m_2pKeyboardButtonConfig[5]._Array[1] |= 0x40ui64;
  the_instance_1.m_2pKeyboardButtonConfig[6]._Array[1] |= 0x4000000ui64;
  the_instance_1.m_2pKeyboardButtonConfig[12]._Array[0] |= 0x8000000ui64;
}

std::bitset<61> *__fastcall FighterOperation::ReverseOperationKeyboardMapper::assign(
        FighterOperation::ReverseOperationKeyboardMapper *this,
        const FighterOperationKeyboardMapper *mapper)
{
  const FighterOperationKeyboardMapper *v2; // r11
  std::bitset<61> *v3; // r10
  __int64 v4; // rax
  __int64 v5; // rcx
  std::bitset<61> *v6; // r8
  __int64 v7; // rcx
  std::bitset<61> *v8; // rdx
  __int64 v9; // rcx
  std::bitset<61> *v10; // rdx
  __int64 v11; // rcx
  std::bitset<61> *v12; // rdx
  __int64 v13; // rcx
  std::bitset<61> *v14; // rdx
  __int64 v15; // rcx
  std::bitset<61> *v16; // rdx
  __int64 v17; // rcx
  std::bitset<61> *v18; // rdx
  __int64 i; // rcx
  __int64 v20; // rcx
  std::bitset<61> *v21; // rdx
  __int64 v22; // rcx
  std::bitset<61> *v23; // rdx
  std::bitset<61> *v24; // rcx
  int j; // er9
  FighterOperationMapper::Mapped v26; // eax
  std::bitset<61>::reference *v27; // rax
  unsigned __int64 Mypos; // rdx
  std::bitset<61>::reference *v29; // rax
  unsigned __int64 v30; // rdx
  std::bitset<61>::reference *v31; // rax
  unsigned __int64 v32; // rdx
  std::bitset<61>::reference *v33; // rax
  unsigned __int64 v34; // rdx
  std::bitset<61>::reference *v35; // rax
  unsigned __int64 v36; // rdx
  std::bitset<61>::reference *v37; // rax
  unsigned __int64 v38; // r8
  std::bitset<61> *v39; // r10
  unsigned __int64 v40; // rdx
  std::bitset<61>::reference *v41; // rax
  unsigned __int64 v42; // r8
  std::bitset<61> *v43; // r10
  unsigned __int64 v44; // rdx
  std::bitset<61>::reference result; // [rsp+28h] [rbp-140h] BYREF
  std::bitset<61>::reference v47; // [rsp+38h] [rbp-130h] BYREF
  std::bitset<61>::reference v48; // [rsp+48h] [rbp-120h] BYREF
  std::bitset<61>::reference v49; // [rsp+58h] [rbp-110h] BYREF
  std::bitset<61>::reference v50; // [rsp+68h] [rbp-100h] BYREF
  std::bitset<61>::reference v51; // [rsp+78h] [rbp-F0h] BYREF
  std::bitset<61>::reference v52; // [rsp+88h] [rbp-E0h] BYREF
  std::bitset<61>::reference v53; // [rsp+98h] [rbp-D0h] BYREF
  std::bitset<61>::reference v54; // [rsp+A8h] [rbp-C0h] BYREF
  std::bitset<61>::reference v55; // [rsp+B8h] [rbp-B0h] BYREF
  std::bitset<61>::reference v56; // [rsp+C8h] [rbp-A0h] BYREF
  std::bitset<61>::reference v57; // [rsp+D8h] [rbp-90h] BYREF
  std::bitset<61>::reference v58; // [rsp+E8h] [rbp-80h] BYREF
  std::bitset<61>::reference v59; // [rsp+F8h] [rbp-70h] BYREF
  std::bitset<61>::reference v60; // [rsp+108h] [rbp-60h] BYREF
  std::bitset<61>::reference v61; // [rsp+118h] [rbp-50h] BYREF
  std::bitset<61>::reference v62; // [rsp+128h] [rbp-40h] BYREF
  std::bitset<61>::reference v63; // [rsp+138h] [rbp-30h] BYREF
  std::bitset<61>::reference v64; // [rsp+148h] [rbp-20h] BYREF

  v2 = mapper;
  v3 = (std::bitset<61> *)this;
  v4 = 3i64;
  v5 = 3i64;
  v6 = v3 + 19;
  do
  {
    v6->_Array[0] = 0i64;
    --v6;
    --v5;
  }
  while ( v5 >= 0 );
  v7 = 3i64;
  v8 = v3 + 23;
  do
  {
    v8->_Array[0] = 0i64;
    --v8;
    --v7;
  }
  while ( v7 >= 0 );
  v9 = 3i64;
  v10 = v3 + 27;
  do
  {
    v10->_Array[0] = 0i64;
    --v10;
    --v9;
  }
  while ( v9 >= 0 );
  v11 = 3i64;
  v12 = v3 + 31;
  do
  {
    v12->_Array[0] = 0i64;
    --v12;
    --v11;
  }
  while ( v11 >= 0 );
  v13 = 3i64;
  v14 = v3 + 39;
  do
  {
    v14->_Array[0] = 0i64;
    --v14;
    --v13;
  }
  while ( v13 >= 0 );
  v15 = 3i64;
  v16 = v3 + 35;
  do
  {
    v16->_Array[0] = 0i64;
    --v16;
    --v15;
  }
  while ( v15 >= 0 );
  v17 = 3i64;
  v18 = v3 + 43;
  do
  {
    v18->_Array[0] = 0i64;
    --v18;
    --v17;
  }
  while ( v17 >= 0 );
  for ( i = 3i64; i >= 0; --i )
    v3[i]._Array[0] = 0i64;
  v20 = 3i64;
  v21 = v3 + 7;
  do
  {
    v21->_Array[0] = 0i64;
    --v21;
    --v20;
  }
  while ( v20 >= 0 );
  v22 = 3i64;
  v23 = v3 + 11;
  do
  {
    v23->_Array[0] = 0i64;
    --v23;
    --v22;
  }
  while ( v22 >= 0 );
  v24 = v3 + 15;
  do
  {
    v24->_Array[0] = 0i64;
    --v24;
    --v4;
  }
  while ( v4 >= 0 );
  for ( j = 0; j < 256; ++j )
  {
    if ( (unsigned int)j > 0xFF )
      v26 = Mapped_Unused;
    else
      v26 = v2->m_mapping[0];
    switch ( v26 )
    {
      case Mapped_LP:
        goto $LN130_1;
      case Mapped_LK:
        goto $LN161_0;
      case Mapped_HK:
        goto $LN191_0;
      case Mapped_HP:
        goto $LN221;
      case Mapped_HP_LP:
        v27 = std::bitset<21>::operator[](v3 + 20, &result, j);
        Mypos = v27->_Mypos;
        if ( Mypos >= 0x100 )
          std::_Xout_of_range("invalid bitset<N> position");
        v27->_Pbitset[Mypos >> 6]._Array[0] |= 1i64 << (Mypos & 0x3F);
$LN130_1:
        v29 = std::bitset<21>::operator[](v3 + 16, &v47, j);
        v30 = v29->_Mypos;
        if ( v30 >= 0x100 )
          std::_Xout_of_range("invalid bitset<N> position");
        goto LABEL_63;
      case Mapped_LP_LK:
        v31 = std::bitset<21>::operator[](v3 + 16, &v48, j);
        v32 = v31->_Mypos;
        if ( v32 >= 0x100 )
          std::_Xout_of_range("invalid bitset<N> position");
        v31->_Pbitset[v32 >> 6]._Array[0] |= 1i64 << (v32 & 0x3F);
$LN161_0:
        v29 = std::bitset<21>::operator[](v3 + 24, &v49, j);
        v30 = v29->_Mypos;
        if ( v30 >= 0x100 )
          std::_Xout_of_range("invalid bitset<N> position");
        goto LABEL_63;
      case Mapped_LK_HK:
        v33 = std::bitset<21>::operator[](v3 + 24, &v50, j);
        v34 = v33->_Mypos;
        if ( v34 >= 0x100 )
          std::_Xout_of_range("invalid bitset<N> position");
        v33->_Pbitset[v34 >> 6]._Array[0] |= 1i64 << (v34 & 0x3F);
$LN191_0:
        v29 = std::bitset<21>::operator[](v3 + 28, &v51, j);
        v30 = v29->_Mypos;
        if ( v30 >= 0x100 )
          std::_Xout_of_range("invalid bitset<N> position");
        goto LABEL_63;
      case Mapped_HK_HP:
        v35 = std::bitset<21>::operator[](v3 + 28, &v52, j);
        v36 = v35->_Mypos;
        if ( v36 >= 0x100 )
          std::_Xout_of_range("invalid bitset<N> position");
        v35->_Pbitset[v36 >> 6]._Array[0] |= 1i64 << (v36 & 0x3F);
$LN221:
        v29 = std::bitset<21>::operator[](v3 + 20, &v53, j);
        v30 = v29->_Mypos;
        if ( v30 >= 0x100 )
          std::_Xout_of_range("invalid bitset<N> position");
        goto LABEL_63;
      case Mapped_LP_HK:
        v37 = std::bitset<21>::operator[](v3 + 16, &v54, j);
        v40 = v37->_Mypos;
        if ( v40 >= 0x100 )
          std::_Xout_of_range("invalid bitset<N> position");
        v37->_Pbitset[v40 >> 6]._Array[0] |= 1i64 << (v40 & 0x3F);
        v29 = std::bitset<21>::operator[](v39 + 28, &v55, v38);
        v30 = v29->_Mypos;
        if ( v30 >= 0x100 )
          std::_Xout_of_range("invalid bitset<N> position");
        goto LABEL_63;
      case Mapped_LK_HP:
        v41 = std::bitset<21>::operator[](v3 + 24, &v56, j);
        v44 = v41->_Mypos;
        if ( v44 >= 0x100 )
          std::_Xout_of_range("invalid bitset<N> position");
        v41->_Pbitset[v44 >> 6]._Array[0] |= 1i64 << (v44 & 0x3F);
        v29 = std::bitset<21>::operator[](v43 + 20, &v57, v42);
        v30 = v29->_Mypos;
        if ( v30 >= 0x100 )
          std::_Xout_of_range("invalid bitset<N> position");
        goto LABEL_63;
      case Mapped_REC:
        v29 = std::bitset<21>::operator[](v3 + 32, &v58, j);
        v30 = v29->_Mypos;
        if ( v30 >= 0x100 )
          std::_Xout_of_range("invalid bitset<N> position");
        goto LABEL_63;
      case Mapped_PLAY:
        v29 = std::bitset<21>::operator[](v3 + 36, &v59, j);
        v30 = v29->_Mypos;
        if ( v30 >= 0x100 )
          std::_Xout_of_range("invalid bitset<N> position");
        goto LABEL_63;
      case Mapped_REPEAT:
        v29 = std::bitset<21>::operator[](v3 + 40, &v60, j);
        v30 = v29->_Mypos;
        if ( v30 >= 0x100 )
          std::_Xout_of_range("invalid bitset<N> position");
        goto LABEL_63;
      case Mapped_L:
        v29 = std::bitset<21>::operator[](v3, &v61, j);
        v30 = v29->_Mypos;
        if ( v30 >= 0x100 )
          std::_Xout_of_range("invalid bitset<N> position");
        goto LABEL_63;
      case Mapped_D:
        v29 = std::bitset<21>::operator[](v3 + 4, &v62, j);
        v30 = v29->_Mypos;
        if ( v30 >= 0x100 )
          std::_Xout_of_range("invalid bitset<N> position");
        goto LABEL_63;
      case Mapped_R:
        v29 = std::bitset<21>::operator[](v3 + 8, &v63, j);
        v30 = v29->_Mypos;
        if ( v30 >= 0x100 )
          std::_Xout_of_range("invalid bitset<N> position");
        goto LABEL_63;
      case Mapped_U:
        v29 = std::bitset<21>::operator[](v3 + 12, &v64, j);
        v30 = v29->_Mypos;
        if ( v30 >= 0x100 )
          std::_Xout_of_range("invalid bitset<N> position");
LABEL_63:
        v29->_Pbitset[v30 >> 6]._Array[0] |= 1i64 << (v30 & 0x3F);
        break;
      default:
        break;
    }
    v2 = (const FighterOperationKeyboardMapper *)((char *)v2 + 4);
  }
  return v3;
}

FighterOperation::ReverseOperationMapper *__fastcall FighterOperation::ReverseOperationMapper::assign(
        FighterOperation::ReverseOperationMapper *this,
        const FighterOperationMapper *mapper)
{
  int i; // er9
  unsigned int v5; // er9
  int *v6; // r11
  int v7; // ecx
  unsigned int v8; // ecx

  *(_QWORD *)this->channels[4]._Array = 0i64;
  *(_QWORD *)this->channels[6]._Array = 0i64;
  *(_QWORD *)this->channels[8]._Array = 0i64;
  this->channels[10]._Array[0] = 0;
  for ( i = 0; i < 10; i = v5 + 1 )
  {
    FighterOperation::ReverseOperationMapper::convertMapKey((FighterOperationMapper::MapKey)i);
    if ( v5 > 9 )
      v7 = 0;
    else
      v7 = *v6;
    v8 = v7 - 1;
    if ( v8 <= 0xC )
      __asm { jmp     rcx }
  }
  return this;
}

void __fastcall FighterOperation::assignUser(FighterOperation *this, int fighterIndex, int userIndex, int maskType)
{
  FighterOperation::Slot *v7; // r11
  int v8; // eax
  FighterOperation::ListenerNode *p_m_assignListenerListEnd; // rsi
  extension::BiLinkable<FighterOperation::ListenerNode> *m_Next; // rbx
  extension::BiLinkable<FighterOperation::ListenerNode> **p_m_Next; // rcx

  if ( (unsigned int)(fighterIndex - 1) <= 1 )
  {
    v7 = (FighterOperation::Slot *)&this[-1].m_slots[fighterIndex + 1].operationMapper.m_mapping[4];
    if ( v7 )
    {
      v8 = v7->userIndex;
      v7->userIndex = userIndex;
      v7->userId = userIndex;
      if ( v8 != userIndex || maskType != -1 )
      {
        p_m_assignListenerListEnd = &this->m_assignListenerListEnd;
        m_Next = this->m_assignListenerListEnd.m_Next;
        if ( m_Next != &this->m_assignListenerListEnd )
        {
          do
          {
            p_m_Next = &m_Next[-1].m_Next;
            if ( !m_Next )
              p_m_Next = 0i64;
            ((void (__fastcall *)(extension::BiLinkable<FighterOperation::ListenerNode> **, _QWORD, _QWORD, _QWORD))(*p_m_Next)->m_Next)(
              p_m_Next,
              (unsigned int)fighterIndex,
              (unsigned int)userIndex,
              (unsigned int)maskType);
            m_Next = m_Next->m_Next;
          }
          while ( m_Next != p_m_assignListenerListEnd );
        }
      }
    }
  }
}

void __fastcall UserGameOperation::clear(UserGameOperation *this)
{
  unsigned __int64 v1; // r11
  Framework::GLManager *v2; // rbp
  _DWORD *v4; // rbx
  __int64 v5; // rsi
  UserGameOperation::UserSlot *p_m_emptyUserSlot; // rcx
  Framework::GLManager *p_m_gamepad; // rax
  int v8; // edx
  __int64 v9; // r11

  v1 = 0i64;
  v2 = Framework::GLManager::glm;
  v4 = (_DWORD *)(*(_QWORD *)&AppMain::pApp + 2199612i64);
  v5 = 4i64;
  do
  {
    if ( v1 <= 3 )
    {
      if ( !v2 )
        goto LABEL_10;
      if ( !*v4 )
        goto LABEL_10;
      p_m_gamepad = (Framework::GLManager *)&v2->m_controllerContext.m_gamepad;
      v8 = 0;
      if ( &v2->m_controllerContext.m_gamepad == (std::array<AgPointer<AgController>,4> *)&v2->m_controllerContext.m_lastUsedContType )
        goto LABEL_10;
      while ( 1 )
      {
        ++v8;
        if ( p_m_gamepad->m_commandBufferSyncLazyFuncQueue._Mypair._Myval2._Myproxy )
        {
          if ( v8 == *v4 )
            break;
        }
        p_m_gamepad = (Framework::GLManager *)((char *)p_m_gamepad + 16);
        if ( p_m_gamepad == (Framework::GLManager *)&v2->m_controllerContext.m_lastUsedContType )
          goto LABEL_10;
      }
      if ( v8 == -1 )
LABEL_10:
        p_m_emptyUserSlot = &this->m_emptyUserSlot;
      else
        p_m_emptyUserSlot = &this->m_slots[v8 - 1];
    }
    else
    {
      p_m_emptyUserSlot = 0i64;
    }
    UserGameOperation::UserSlot::clear(p_m_emptyUserSlot);
    v1 = v9 + 1;
    v4 += 264;
    --v5;
  }
  while ( v5 );
  UserGameOperation::UserSlot::clear(&this->m_anyUserSlot);
}

void __fastcall UserGameOperation::UserSlot::clear(UserGameOperation::UserSlot *this)
{
  unsigned __int64 *v1; // r8
  __int64 v2; // rax
  __int64 i; // rdx
  __int64 v5; // rcx
  unsigned __int64 *v6; // rdx
  __int64 v7; // rcx
  unsigned __int64 *v8; // rdx
  unsigned __int64 *v9; // rcx

  v1 = &this->m_pressedEventKeyboardChannels._Array[3];
  v2 = 3i64;
  *(_QWORD *)this->m_pressedEventChannels._Array = 0i64;
  *(_QWORD *)this->m_repeatPressedEventChannels._Array = 0i64;
  for ( i = 3i64; i >= 0; --i )
    *v1-- = 0i64;
  v5 = 3i64;
  v6 = &this->m_releasedEventKeyboardChannels._Array[3];
  do
  {
    --v5;
    *v6-- = 0i64;
  }
  while ( v5 >= 0 );
  v7 = 3i64;
  v8 = &this->m_repeatPressedEventKeyboardChannels._Array[3];
  do
  {
    --v7;
    *v8-- = 0i64;
  }
  while ( v7 >= 0 );
  v9 = &this->m_repeatReleasedEventKeyboardChannels._Array[3];
  do
  {
    --v2;
    *v9-- = 0i64;
  }
  while ( v2 >= 0 );
}

__int64 __fastcall FighterOperation::ReverseOperationMapper::convertMapKey(FighterOperationMapper::MapKey k)
{
  __int64 result; // rax

  switch ( k )
  {
    case MapKey_Button_Square:
      result = 8i64;
      break;
    case MapKey_Button_Cross:
      result = 9i64;
      break;
    case MapKey_Button_Circle:
      result = 10i64;
      break;
    case MapKey_Button_Triangle:
      result = 11i64;
      break;
    case MapKey_Button_L1:
      result = 4i64;
      break;
    case MapKey_Button_R1:
      result = 5i64;
      break;
    case MapKey_Button_L2:
      result = 6i64;
      break;
    case MapKey_Button_R2:
      result = 7i64;
      break;
    case MapKey_Button_L3:
      result = 14i64;
      break;
    case MapKey_Button_R3:
      result = 15i64;
      break;
    default:
      result = 16i64;
      break;
  }
  return result;
}

void __fastcall FighterOperationKeyboardMapper::deserializeBindings(
        FighterOperationKeyboardMapper *this,
        int *bindings)
{
  __int64 v2; // r10
  FighterOperationKeyboardMapper *v3; // r8
  __int64 v4; // r9
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax

  v2 = 256i64;
  v3 = this;
  v4 = 0i64;
  if ( this > &this[1] )
    v2 = 0i64;
  if ( this <= &this[1] )
  {
    do
    {
      ++v4;
      v3->m_mapping[0] = Mapped_Unused;
      v3 = (FighterOperationKeyboardMapper *)((char *)v3 + 4);
    }
    while ( v4 != v2 );
  }
  v5 = *bindings;
  if ( (_DWORD)v5 != -1 )
    this->m_mapping[v5] = Mapped_LP;
  v6 = bindings[1];
  if ( (_DWORD)v6 != -1 )
    this->m_mapping[v6] = Mapped_LK;
  v7 = bindings[2];
  if ( (_DWORD)v7 != -1 )
    this->m_mapping[v7] = Mapped_HP;
  v8 = bindings[3];
  if ( (_DWORD)v8 != -1 )
    this->m_mapping[v8] = Mapped_HK;
  v9 = bindings[4];
  if ( (_DWORD)v9 != -1 )
    this->m_mapping[v9] = Mapped_LP_LK;
  v10 = bindings[5];
  if ( (_DWORD)v10 != -1 )
    this->m_mapping[v10] = Mapped_LK_HP;
  v11 = bindings[6];
  if ( (_DWORD)v11 != -1 )
    this->m_mapping[v11] = Mapped_HK_HP;
  v12 = bindings[7];
  if ( (_DWORD)v12 != -1 )
    this->m_mapping[v12] = Mapped_HP_LP;
  v13 = bindings[8];
  if ( (_DWORD)v13 != -1 )
    this->m_mapping[v13] = Mapped_LK_HK;
  v14 = bindings[9];
  if ( (_DWORD)v14 != -1 )
    this->m_mapping[v14] = Mapped_REC;
  v15 = bindings[10];
  if ( (_DWORD)v15 != -1 )
    this->m_mapping[v15] = Mapped_PLAY;
  v16 = bindings[11];
  if ( (_DWORD)v16 != -1 )
    this->m_mapping[v16] = Mapped_REPEAT;
  v17 = bindings[12];
  if ( (_DWORD)v17 != -1 )
    this->m_mapping[v17] = Mapped_U;
  v18 = bindings[13];
  if ( (_DWORD)v18 != -1 )
    this->m_mapping[v18] = Mapped_D;
  v19 = bindings[14];
  if ( (_DWORD)v19 != -1 )
    this->m_mapping[v19] = Mapped_L;
  v20 = bindings[15];
  if ( (_DWORD)v20 != -1 )
    this->m_mapping[v20] = Mapped_R;
}

void __fastcall FighterOperationMapper::deserializeBindings(FighterOperationMapper *this, int *bindings)
{
  FighterOperationMapper *v2; // r8
  int v4; // er11
  __int64 v5; // r10
  __int64 v7; // r9
  int v8; // eax
  const AgDisplayMode *v9; // rdx
  const AgDisplayMode *v10; // rcx
  int m_width; // eax
  int v12; // eax
  const AgDisplayMode *v13; // rcx
  int v14; // eax
  int v15; // eax
  const AgDisplayMode *v16; // rcx
  int v17; // eax
  int v18; // eax
  const AgDisplayMode *v19; // rcx
  int v20; // eax
  int v21; // eax
  const AgDisplayMode *v22; // rcx
  int v23; // eax
  int v24; // eax
  const AgDisplayMode *v25; // rcx
  int v26; // eax
  int v27; // eax
  const AgDisplayMode *v28; // rcx
  int v29; // eax
  int v30; // eax
  const AgDisplayMode *v31; // rcx
  int v32; // eax
  int v33; // eax
  const AgDisplayMode *v34; // rcx
  int v35; // eax
  int v36; // eax
  const AgDisplayMode *v37; // rcx
  int v38; // eax
  int v39; // eax
  const AgDisplayMode *v40; // rcx
  int v41; // eax
  int v42; // eax
  const AgDisplayMode *v43; // rcx
  int v44; // eax
  int v45; // eax
  const AgDisplayMode *v46; // rcx
  int v47; // eax
  int v48; // eax
  const AgDisplayMode *v49; // rcx
  int v50; // eax
  int v51; // eax
  const AgDisplayMode *v52; // rcx
  int v53; // eax
  int v54; // eax

  v2 = this;
  v4 = 10;
  v5 = 10i64;
  v7 = 0i64;
  if ( this > &this[1] )
    v5 = 0i64;
  if ( this <= &this[1] )
  {
    do
    {
      ++v7;
      v2->m_mapping[0] = Mapped_Unused;
      v2 = (FighterOperationMapper *)((char *)v2 + 4);
    }
    while ( v7 != v5 );
  }
  v8 = *bindings;
  v9 = (const AgDisplayMode *)keyTranslationTable;
  if ( v8 != -1 )
  {
    v10 = (const AgDisplayMode *)keyTranslationTable;
    while ( v10->m_height != v8 )
    {
      v10 = (const AgDisplayMode *)((char *)v10 + 8);
      if ( v10 == fixedAspectRatioModes_0 )
        goto LABEL_9;
    }
    if ( v10 == fixedAspectRatioModes_0 )
    {
LABEL_9:
      m_width = 10;
      goto LABEL_10;
    }
    m_width = v10->m_width;
LABEL_10:
    this->m_mapping[m_width] = Mapped_LP;
  }
  v12 = bindings[1];
  if ( v12 != -1 )
  {
    v13 = (const AgDisplayMode *)keyTranslationTable;
    while ( v13->m_height != v12 )
    {
      v13 = (const AgDisplayMode *)((char *)v13 + 8);
      if ( v13 == fixedAspectRatioModes_0 )
        goto LABEL_15;
    }
    if ( v13 == fixedAspectRatioModes_0 )
    {
LABEL_15:
      v14 = 10;
      goto LABEL_16;
    }
    v14 = v13->m_width;
LABEL_16:
    this->m_mapping[v14] = Mapped_LK;
  }
  v15 = bindings[2];
  if ( v15 != -1 )
  {
    v16 = (const AgDisplayMode *)keyTranslationTable;
    while ( v16->m_height != v15 )
    {
      v16 = (const AgDisplayMode *)((char *)v16 + 8);
      if ( v16 == fixedAspectRatioModes_0 )
        goto LABEL_21;
    }
    if ( v16 == fixedAspectRatioModes_0 )
    {
LABEL_21:
      v17 = 10;
      goto LABEL_22;
    }
    v17 = v16->m_width;
LABEL_22:
    this->m_mapping[v17] = Mapped_HP;
  }
  v18 = bindings[3];
  if ( v18 != -1 )
  {
    v19 = (const AgDisplayMode *)keyTranslationTable;
    while ( v19->m_height != v18 )
    {
      v19 = (const AgDisplayMode *)((char *)v19 + 8);
      if ( v19 == fixedAspectRatioModes_0 )
        goto LABEL_27;
    }
    if ( v19 == fixedAspectRatioModes_0 )
    {
LABEL_27:
      v20 = 10;
      goto LABEL_28;
    }
    v20 = v19->m_width;
LABEL_28:
    this->m_mapping[v20] = Mapped_HK;
  }
  v21 = bindings[4];
  if ( v21 != -1 )
  {
    v22 = (const AgDisplayMode *)keyTranslationTable;
    while ( v22->m_height != v21 )
    {
      v22 = (const AgDisplayMode *)((char *)v22 + 8);
      if ( v22 == fixedAspectRatioModes_0 )
        goto LABEL_33;
    }
    if ( v22 == fixedAspectRatioModes_0 )
    {
LABEL_33:
      v23 = 10;
      goto LABEL_34;
    }
    v23 = v22->m_width;
LABEL_34:
    this->m_mapping[v23] = Mapped_LP_LK;
  }
  v24 = bindings[5];
  if ( v24 != -1 )
  {
    v25 = (const AgDisplayMode *)keyTranslationTable;
    while ( v25->m_height != v24 )
    {
      v25 = (const AgDisplayMode *)((char *)v25 + 8);
      if ( v25 == fixedAspectRatioModes_0 )
        goto LABEL_39;
    }
    if ( v25 == fixedAspectRatioModes_0 )
    {
LABEL_39:
      v26 = 10;
      goto LABEL_40;
    }
    v26 = v25->m_width;
LABEL_40:
    this->m_mapping[v26] = Mapped_LK_HP;
  }
  v27 = bindings[6];
  if ( v27 != -1 )
  {
    v28 = (const AgDisplayMode *)keyTranslationTable;
    while ( v28->m_height != v27 )
    {
      v28 = (const AgDisplayMode *)((char *)v28 + 8);
      if ( v28 == fixedAspectRatioModes_0 )
        goto LABEL_45;
    }
    if ( v28 == fixedAspectRatioModes_0 )
    {
LABEL_45:
      v29 = 10;
      goto LABEL_46;
    }
    v29 = v28->m_width;
LABEL_46:
    this->m_mapping[v29] = Mapped_HK_HP;
  }
  v30 = bindings[7];
  if ( v30 != -1 )
  {
    v31 = (const AgDisplayMode *)keyTranslationTable;
    while ( v31->m_height != v30 )
    {
      v31 = (const AgDisplayMode *)((char *)v31 + 8);
      if ( v31 == fixedAspectRatioModes_0 )
        goto LABEL_51;
    }
    if ( v31 == fixedAspectRatioModes_0 )
    {
LABEL_51:
      v32 = 10;
      goto LABEL_52;
    }
    v32 = v31->m_width;
LABEL_52:
    this->m_mapping[v32] = Mapped_HP_LP;
  }
  v33 = bindings[8];
  if ( v33 != -1 )
  {
    v34 = (const AgDisplayMode *)keyTranslationTable;
    while ( v34->m_height != v33 )
    {
      v34 = (const AgDisplayMode *)((char *)v34 + 8);
      if ( v34 == fixedAspectRatioModes_0 )
        goto LABEL_57;
    }
    if ( v34 == fixedAspectRatioModes_0 )
    {
LABEL_57:
      v35 = 10;
      goto LABEL_58;
    }
    v35 = v34->m_width;
LABEL_58:
    this->m_mapping[v35] = Mapped_LK_HK;
  }
  v36 = bindings[9];
  if ( v36 != -1 )
  {
    v37 = (const AgDisplayMode *)keyTranslationTable;
    while ( v37->m_height != v36 )
    {
      v37 = (const AgDisplayMode *)((char *)v37 + 8);
      if ( v37 == fixedAspectRatioModes_0 )
        goto LABEL_63;
    }
    if ( v37 == fixedAspectRatioModes_0 )
    {
LABEL_63:
      v38 = 10;
      goto LABEL_64;
    }
    v38 = v37->m_width;
LABEL_64:
    this->m_mapping[v38] = Mapped_REC;
  }
  v39 = bindings[10];
  if ( v39 != -1 )
  {
    v40 = (const AgDisplayMode *)keyTranslationTable;
    while ( v40->m_height != v39 )
    {
      v40 = (const AgDisplayMode *)((char *)v40 + 8);
      if ( v40 == fixedAspectRatioModes_0 )
        goto LABEL_69;
    }
    if ( v40 == fixedAspectRatioModes_0 )
    {
LABEL_69:
      v41 = 10;
      goto LABEL_70;
    }
    v41 = v40->m_width;
LABEL_70:
    this->m_mapping[v41] = Mapped_PLAY;
  }
  v42 = bindings[11];
  if ( v42 != -1 )
  {
    v43 = (const AgDisplayMode *)keyTranslationTable;
    while ( v43->m_height != v42 )
    {
      v43 = (const AgDisplayMode *)((char *)v43 + 8);
      if ( v43 == fixedAspectRatioModes_0 )
        goto LABEL_75;
    }
    if ( v43 == fixedAspectRatioModes_0 )
    {
LABEL_75:
      v44 = 10;
      goto LABEL_76;
    }
    v44 = v43->m_width;
LABEL_76:
    this->m_mapping[v44] = Mapped_REPEAT;
  }
  v45 = bindings[12];
  if ( v45 != -1 )
  {
    v46 = (const AgDisplayMode *)keyTranslationTable;
    while ( v46->m_height != v45 )
    {
      v46 = (const AgDisplayMode *)((char *)v46 + 8);
      if ( v46 == fixedAspectRatioModes_0 )
        goto LABEL_81;
    }
    if ( v46 == fixedAspectRatioModes_0 )
    {
LABEL_81:
      v47 = 10;
      goto LABEL_82;
    }
    v47 = v46->m_width;
LABEL_82:
    this->m_mapping[v47] = Mapped_U;
  }
  v48 = bindings[13];
  if ( v48 != -1 )
  {
    v49 = (const AgDisplayMode *)keyTranslationTable;
    while ( v49->m_height != v48 )
    {
      v49 = (const AgDisplayMode *)((char *)v49 + 8);
      if ( v49 == fixedAspectRatioModes_0 )
        goto LABEL_87;
    }
    if ( v49 == fixedAspectRatioModes_0 )
    {
LABEL_87:
      v50 = 10;
      goto LABEL_88;
    }
    v50 = v49->m_width;
LABEL_88:
    this->m_mapping[v50] = Mapped_D;
  }
  v51 = bindings[14];
  if ( v51 != -1 )
  {
    v52 = (const AgDisplayMode *)keyTranslationTable;
    while ( v52->m_height != v51 )
    {
      v52 = (const AgDisplayMode *)((char *)v52 + 8);
      if ( v52 == fixedAspectRatioModes_0 )
        goto LABEL_93;
    }
    if ( v52 == fixedAspectRatioModes_0 )
    {
LABEL_93:
      v53 = 10;
      goto LABEL_94;
    }
    v53 = v52->m_width;
LABEL_94:
    this->m_mapping[v53] = Mapped_L;
  }
  v54 = bindings[15];
  if ( v54 != -1 )
  {
    while ( v9->m_height != v54 )
    {
      v9 = (const AgDisplayMode *)((char *)v9 + 8);
      if ( v9 == fixedAspectRatioModes_0 )
        goto LABEL_131;
    }
    if ( v9 != fixedAspectRatioModes_0 )
      v4 = v9->m_width;
LABEL_131:
    this->m_mapping[v4] = Mapped_R;
  }
}

const FighterOperation::ReverseOperationKeyboardMapper *__fastcall FighterOperation::getReverseKeyboardMapper(
        FighterOperation *this,
        int fighterIndex)
{
  if ( (unsigned int)(fighterIndex - 1) <= 1 )
    return (const FighterOperation::ReverseOperationKeyboardMapper *)&this[-1].m_slots[fighterIndex + 1].reverseKeyboardMapper.channels[0]._Array[3];
  else
    return (const FighterOperation::ReverseOperationKeyboardMapper *)1120;
}

UserGameOperation::UserSlot *__fastcall UserGameOperation::getUserSlot(UserGameOperation *this, int userIndex)
{
  int v3; // er8
  Framework::GLManager *p_m_gamepad; // rax
  int v5; // edx

  if ( (unsigned int)(userIndex - 1) > 3 )
    return 0i64;
  if ( Framework::GLManager::glm )
  {
    v3 = *(_DWORD *)(1056i64 * userIndex + *(_QWORD *)&AppMain::pApp + 2198556);
    if ( v3 )
    {
      p_m_gamepad = (Framework::GLManager *)&Framework::GLManager::glm->m_controllerContext.m_gamepad;
      v5 = 0;
      while ( p_m_gamepad != (Framework::GLManager *)&Framework::GLManager::glm->m_controllerContext.m_lastUsedContType )
      {
        ++v5;
        if ( p_m_gamepad->m_commandBufferSyncLazyFuncQueue._Mypair._Myval2._Myproxy && v5 == v3 )
        {
          if ( v5 == -1 )
            return &this->m_emptyUserSlot;
          return (UserGameOperation::UserSlot *)((char *)this + 616 * v5 - 616);
        }
        p_m_gamepad = (Framework::GLManager *)((char *)p_m_gamepad + 16);
      }
    }
  }
  return &this->m_emptyUserSlot;
}

char __fastcall UserGameOperation::AGKeyboardOperationSource::readCurrent(
        UserGameOperation::AGKeyboardOperationSource *this)
{
  char v2; // al
  Framework::Input::ControllerContext *p_m_controllerContext; // rsi
  FighterOperation *v4; // rdi
  std::bitset<61>::reference *v5; // r8
  unsigned __int64 v6; // r11
  unsigned __int64 v7; // r11
  std::bitset<61>::reference *v8; // rax
  char v9; // r10
  unsigned __int64 Mypos; // rcx
  std::bitset<61> *Pbitset; // r9
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rax
  std::bitset<61>::reference result; // [rsp+28h] [rbp-60h] BYREF
  __int64 v15[4]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v16[4]; // [rsp+60h] [rbp-28h] BYREF
  __int64 v17; // [rsp+98h] [rbp+10h] BYREF
  __int64 *v18; // [rsp+A0h] [rbp+18h] BYREF

  v2 = (char)Framework::GLManager::glm;
  if ( Framework::GLManager::glm )
  {
    p_m_controllerContext = &Framework::GLManager::glm->m_controllerContext;
    v4 = FighterOperation::Instance();
    memset(v15, 0, sizeof(v15));
    memset(v16, 0, sizeof(v16));
    LOWORD(v6) = 8;
    v17 = 8i64;
    do
    {
      Framework::Input::ControllerContext::isKeyboardButtonDown(
        p_m_controllerContext,
        v6,
        (Framework::Input::ButtonEventPattern)v5);
      v8 = std::bitset<21>::operator[]((std::bitset<61> *)this, &result, v7);
      v5 = v8;
      Mypos = v8->_Mypos;
      Pbitset = v8->_Pbitset;
      if ( Mypos >= 0x100 )
        std::_Xout_of_range("invalid bitset<N> position");
      if ( v9 )
        Pbitset[Mypos >> 6]._Array[0] |= 1i64 << (v8->_Mypos & 0x3F);
      else
        Pbitset[Mypos >> 6]._Array[0] &= ~(1i64 << (v8->_Mypos & 0x3F));
      v12 = v8->_Mypos;
      if ( v12 >= 0x100 )
        std::_Xout_of_range("invalid bitset<N> position");
      v13 = v8->_Pbitset[v12 >> 6]._Array[0];
      if ( _bittest64((const __int64 *)&v13, v5->_Mypos & 0x3F) )
      {
        v18 = &v17;
        FighterOperation::getReverseKeyboardMapper(v4, 1);
        lambda_5962da4fab9ef9a7c0f4954354d20e14_::operator()__UserGameOperation::AGKeyboardOperationSource::readCurrent_::_5_::_unnamed_type_playerDirState__FighterOperation::ReverseOperationKeyboardMapper_(
          (UserGameOperation::AGKeyboardOperationSource::readCurrent::__l5::<unnamed_type_playerDirState> *)&v18,
          (const FighterOperation::ReverseOperationKeyboardMapper *)v15);
        FighterOperation::getReverseKeyboardMapper(v4, 2);
        lambda_5962da4fab9ef9a7c0f4954354d20e14_::operator()__UserGameOperation::AGKeyboardOperationSource::readCurrent_::_5_::_unnamed_type_playerDirState__FighterOperation::ReverseOperationKeyboardMapper_(
          (UserGameOperation::AGKeyboardOperationSource::readCurrent::__l5::<unnamed_type_playerDirState> *)&v18,
          (const FighterOperation::ReverseOperationKeyboardMapper *)v16);
      }
      v6 = v17 + 1;
      v17 = v6;
    }
    while ( v6 < 0x100 );
    v17 = (__int64)this;
    lambda_2f9568e64bc22ed1b225fe74f6c265fe_::operator()__UserGameOperation::AGKeyboardOperationSource::readCurrent_::_5_::_unnamed_type_playerDirState___((const UserGameOperation::AGKeyboardOperationSource::readCurrent::__l5::<unnamed_type_playerDirState> *)&v17);
    lambda_2f9568e64bc22ed1b225fe74f6c265fe_::operator()__UserGameOperation::AGKeyboardOperationSource::readCurrent_::_5_::_unnamed_type_playerDirState___((const UserGameOperation::AGKeyboardOperationSource::readCurrent::__l5::<unnamed_type_playerDirState> *)&v17);
    return 1;
  }
  return v2;
}

char __fastcall UserGameOperation::OperationSource::readCurrent(
        UserGameOperation::OperationSource *this,
        int userIndex,
        int dummy,
        Framework::Input::ButtonEventPattern a4)
{
  Framework::Input::ControllerContext *p_m_controllerContext; // rsi
  Framework::Input::ButtonEventPattern v7; // er9
  float v8; // xmm9_4
  Framework::Input::ButtonEventPattern v9; // er9
  float v10; // xmm4_4
  float v11; // xmm5_4
  float v12; // xmm6_4
  Framework::Input::ButtonEventPattern v13; // er9
  float v14; // xmm4_4
  float v15; // xmm5_4
  float v16; // xmm7_4
  Framework::Input::ButtonEventPattern v17; // er9
  float v18; // xmm4_4
  float v19; // xmm5_4
  float v20; // xmm8_4
  Framework::Input::ButtonEventPattern v21; // er9
  float v22; // xmm4_4
  float v23; // xmm5_4
  float v24; // xmm0_4
  Framework::Input::ButtonEventPattern v25; // er9
  float v26; // xmm4_4
  float v27; // xmm5_4
  float v28; // xmm0_4
  Framework::Input::ButtonEventPattern v29; // er9
  float v30; // xmm4_4
  float v31; // xmm5_4
  float v32; // xmm0_4
  Framework::Input::ButtonEventPattern v33; // er9
  float v34; // xmm4_4
  float v35; // xmm5_4
  float v36; // xmm0_4
  Framework::Input::ButtonEventPattern v37; // er9
  float v38; // xmm4_4
  float v39; // xmm5_4
  float v40; // xmm0_4
  float v41; // xmm4_4
  float v42; // xmm5_4
  float v43; // xmm0_4
  float mY; // xmm3_4
  Framework::Input::ButtonEventPattern v45; // er9
  Framework::Input::ButtonEventPattern v46; // er9
  float v47; // xmm4_4
  float v48; // xmm5_4
  float v49; // xmm0_4
  Framework::Input::ButtonEventPattern v50; // er9
  float v51; // xmm4_4
  float v52; // xmm5_4
  float v53; // xmm0_4
  Framework::Input::ButtonEventPattern v54; // er9
  float v55; // xmm4_4
  float v56; // xmm5_4
  float v57; // xmm0_4
  float v58; // xmm4_4
  float v59; // xmm5_4
  float mX; // xmm3_4
  float v61; // xmm1_4
  float v62; // xmm0_4
  char v63; // al
  sce::Vectormath::Scalar::Aos::Vector2 result; // [rsp+88h] [rbp+20h] BYREF

  if ( (unsigned int)(userIndex - 1) <= 3 && Framework::GLManager::glm )
  {
    p_m_controllerContext = &Framework::GLManager::glm->m_controllerContext;
    if ( Framework::Input::ControllerContext::isButtonDown(
           &Framework::GLManager::glm->m_controllerContext,
           userIndex,
           2u,
           a4) )
    {
      v8 = *(float *)&FLOAT_1_0;
    }
    else
    {
      v8 = 0.0;
    }
    this->channels[0] = v8;
    if ( Framework::Input::ControllerContext::isButtonDown(p_m_controllerContext, userIndex, 1u, v7) )
      v12 = v11;
    else
      v12 = v10;
    this->channels[1] = v12;
    if ( Framework::Input::ControllerContext::isButtonDown(p_m_controllerContext, userIndex, 3u, v9) )
      v16 = v15;
    else
      v16 = v14;
    this->channels[2] = v16;
    if ( Framework::Input::ControllerContext::isButtonDown(p_m_controllerContext, userIndex, 0, v13) )
      v20 = v19;
    else
      v20 = v18;
    this->channels[3] = v20;
    if ( Framework::Input::ControllerContext::isButtonDown(p_m_controllerContext, userIndex, 6u, v17) )
      v24 = v23;
    else
      v24 = v22;
    this->channels[8] = v24;
    if ( Framework::Input::ControllerContext::isButtonDown(p_m_controllerContext, userIndex, 4u, v21) )
      v28 = v27;
    else
      v28 = v26;
    this->channels[9] = v28;
    if ( Framework::Input::ControllerContext::isButtonDown(p_m_controllerContext, userIndex, 5u, v25) )
      v32 = v31;
    else
      v32 = v30;
    this->channels[10] = v32;
    if ( Framework::Input::ControllerContext::isButtonDown(p_m_controllerContext, userIndex, 7u, v29) )
      v36 = v35;
    else
      v36 = v34;
    this->channels[11] = v36;
    if ( Framework::Input::ControllerContext::isButtonDown(p_m_controllerContext, userIndex, 8u, v33) )
      v40 = v39;
    else
      v40 = v38;
    this->channels[4] = v40;
    if ( Framework::Input::ControllerContext::isButtonDown(p_m_controllerContext, userIndex, 9u, v37) )
      v43 = v42;
    else
      v43 = v41;
    this->channels[5] = v43;
    Framework::Input::ControllerContext::getAnalogLR2(p_m_controllerContext, &result, userIndex);
    mY = result.mY;
    this->channels[6] = result.mX;
    this->channels[7] = mY;
    if ( Framework::Input::ControllerContext::isButtonDown(p_m_controllerContext, userIndex, 0xCu, v45) )
      v49 = v48;
    else
      v49 = v47;
    this->channels[12] = v49;
    if ( Framework::Input::ControllerContext::isButtonDown(p_m_controllerContext, userIndex, 0xDu, v46) )
      v53 = v52;
    else
      v53 = v51;
    this->channels[13] = v53;
    if ( Framework::Input::ControllerContext::isButtonDown(p_m_controllerContext, userIndex, 0xAu, v50) )
      v57 = v56;
    else
      v57 = v55;
    this->channels[14] = v57;
    if ( !Framework::Input::ControllerContext::isButtonDown(p_m_controllerContext, userIndex, 0xBu, v54) )
      v59 = v58;
    this->channels[15] = v59;
    if ( (float)((float)((float)(v16 + v8) + v20) + v12) == v58 )
    {
      Framework::Input::ControllerContext::getLeftStick(p_m_controllerContext, &result, userIndex);
      mX = result.mX;
      v61 = result.mY;
      LODWORD(v62) = LODWORD(result.mY) ^ _xmm;
      if ( COERCE_FLOAT(LODWORD(result.mX) ^ _xmm) > v8 )
        LODWORD(this->channels[0]) = LODWORD(result.mX) ^ _xmm;
      if ( mX > v16 )
        this->channels[2] = mX;
      if ( v62 > v20 )
        this->channels[3] = v62;
      if ( v61 > v12 )
        this->channels[1] = v61;
    }
    if ( this->channels[0] != v58 && this->channels[2] != v58 )
    {
      this->channels[2] = 0.0;
      this->channels[0] = 0.0;
    }
    if ( this->channels[3] != v58 && this->channels[1] != v58 )
    {
      this->channels[1] = 0.0;
      this->channels[3] = 0.0;
    }
    return 1;
  }
  else
  {
    v63 = 0;
    *(_QWORD *)this->channels = 0i64;
    *(_QWORD *)&this->channels[2] = 0i64;
    *(_QWORD *)&this->channels[4] = 0i64;
    *(_QWORD *)&this->channels[6] = 0i64;
    *(_QWORD *)&this->channels[8] = 0i64;
    *(_QWORD *)&this->channels[10] = 0i64;
    *(_QWORD *)&this->channels[12] = 0i64;
    *(_QWORD *)&this->channels[14] = 0i64;
  }
  return v63;
}

void __fastcall FighterOperationKeyboardMapper::reset(FighterOperationKeyboardMapper *this, int userIndex)
{
  __int64 v2; // r10
  FighterOperationKeyboardMapper *v3; // r8
  __int64 v4; // r9

  v2 = 256i64;
  v3 = this;
  v4 = 0i64;
  if ( this > &this[1] )
    v2 = 0i64;
  if ( this <= &this[1] )
  {
    do
    {
      ++v4;
      v3->m_mapping[0] = Mapped_Unused;
      v3 = (FighterOperationKeyboardMapper *)((char *)v3 + 4);
    }
    while ( v4 != v2 );
  }
  if ( userIndex == 1 )
  {
    this->m_mapping[55] = Mapped_LP;
    this->m_mapping[57] = Mapped_LK;
    this->m_mapping[48] = Mapped_HK;
    this->m_mapping[56] = Mapped_HP;
    this->m_mapping[80] = Mapped_LP_LK;
    this->m_mapping[85] = Mapped_LK_HP;
    this->m_mapping[73] = Mapped_LK_HK;
    this->m_mapping[79] = Mapped_HP_LP;
    this->m_mapping[219] = Mapped_REC;
    this->m_mapping[221] = Mapped_PLAY;
    this->m_mapping[37] = Mapped_L;
    this->m_mapping[40] = Mapped_D;
    this->m_mapping[39] = Mapped_R;
    this->m_mapping[38] = Mapped_U;
  }
  else if ( userIndex == 2 )
  {
    this->m_mapping[65] = Mapped_LP;
    this->m_mapping[68] = Mapped_LK;
    this->m_mapping[70] = Mapped_HK;
    this->m_mapping[83] = Mapped_HP;
    this->m_mapping[90] = Mapped_LP_LK;
    this->m_mapping[88] = Mapped_LK_HP;
    this->m_mapping[86] = Mapped_LK_HK;
    this->m_mapping[67] = Mapped_HP_LP;
    this->m_mapping[66] = Mapped_L;
    this->m_mapping[78] = Mapped_D;
    this->m_mapping[77] = Mapped_R;
    this->m_mapping[72] = Mapped_U;
  }
}

void __fastcall FighterOperationMapper::reset(FighterOperationMapper *this)
{
  *(__m128i *)this->m_mapping = _mm_add_epi32(_mm_load_si128((const __m128i *)&_xmm), (__m128i)_xmm);
  this->m_mapping[4] = Mapped_LP_LK;
  this->m_mapping[5] = Mapped_LK_HP;
  this->m_mapping[6] = Mapped_LK_HK;
  this->m_mapping[7] = Mapped_HP_LP;
  this->m_mapping[8] = Mapped_REC;
  this->m_mapping[9] = Mapped_PLAY;
}

__int64 __fastcall FighterOperationKeyboardMapper::serializeBindings(
        FighterOperationKeyboardMapper *this,
        int *bindings)
{
  int i; // eax

  for ( i = 0; i < 256; ++i )
  {
    switch ( this->m_mapping[0] )
    {
      case Mapped_LP:
        *bindings = i;
        break;
      case Mapped_LK:
        bindings[1] = i;
        break;
      case Mapped_HK:
        bindings[3] = i;
        break;
      case Mapped_HP:
        bindings[2] = i;
        break;
      case Mapped_HP_LP:
        bindings[7] = i;
        break;
      case Mapped_LP_LK:
        bindings[4] = i;
        break;
      case Mapped_LK_HK:
        bindings[8] = i;
        break;
      case Mapped_HK_HP:
        bindings[6] = i;
        break;
      case Mapped_LP_HK:
        bindings[44] = i;
        break;
      case Mapped_LK_HP:
        bindings[5] = i;
        break;
      case Mapped_REC:
        bindings[9] = i;
        break;
      case Mapped_PLAY:
        bindings[10] = i;
        break;
      case Mapped_REPEAT:
        bindings[11] = i;
        break;
      case Mapped_L:
        bindings[14] = i;
        break;
      case Mapped_D:
        bindings[13] = i;
        break;
      case Mapped_R:
        bindings[15] = i;
        break;
      case Mapped_U:
        bindings[12] = i;
        break;
      default:
        break;
    }
    this = (FighterOperationKeyboardMapper *)((char *)this + 4);
  }
  return 16i64;
}

__int64 __fastcall FighterOperationMapper::serializeBindings(FighterOperationMapper *this, int *bindings)
{
  int v2; // eax
  __int64 v3; // r10
  const AgDisplayMode *v6; // rcx
  const AgDisplayMode *v7; // rcx
  const AgDisplayMode *v8; // rcx
  const AgDisplayMode *v9; // rcx
  const AgDisplayMode *v10; // rcx
  const AgDisplayMode *v11; // rcx
  const AgDisplayMode *v12; // rcx
  const AgDisplayMode *v13; // rcx
  const AgDisplayMode *v14; // rcx
  const AgDisplayMode *v15; // rcx
  const AgDisplayMode *v16; // rcx
  const AgDisplayMode *v17; // rcx
  const AgDisplayMode *v18; // rcx
  const AgDisplayMode *v19; // rcx
  const AgDisplayMode *v20; // rcx
  const AgDisplayMode *v21; // rcx
  const AgDisplayMode *v22; // rcx
  int m_height; // edx

  v2 = 0;
  v3 = 0i64;
  do
  {
    switch ( this->m_mapping[v3] )
    {
      case Mapped_LP:
        v6 = (const AgDisplayMode *)keyTranslationTable;
        while ( v6->m_width != v2 )
        {
          v6 = (const AgDisplayMode *)((char *)v6 + 8);
          if ( v6 == fixedAspectRatioModes_0 )
            goto LABEL_6;
        }
        if ( v6 == fixedAspectRatioModes_0 )
        {
LABEL_6:
          *bindings = 0;
          goto LABEL_104;
        }
        *bindings = v6->m_height;
        goto LABEL_104;
      case Mapped_LK:
        v7 = (const AgDisplayMode *)keyTranslationTable;
        while ( v7->m_width != v2 )
        {
          v7 = (const AgDisplayMode *)((char *)v7 + 8);
          if ( v7 == fixedAspectRatioModes_0 )
            goto LABEL_12;
        }
        if ( v7 == fixedAspectRatioModes_0 )
        {
LABEL_12:
          bindings[1] = 0;
          goto LABEL_104;
        }
        bindings[1] = v7->m_height;
        goto LABEL_104;
      case Mapped_HK:
        v9 = (const AgDisplayMode *)keyTranslationTable;
        while ( v9->m_width != v2 )
        {
          v9 = (const AgDisplayMode *)((char *)v9 + 8);
          if ( v9 == fixedAspectRatioModes_0 )
            goto LABEL_24;
        }
        if ( v9 == fixedAspectRatioModes_0 )
        {
LABEL_24:
          bindings[3] = 0;
          goto LABEL_104;
        }
        bindings[3] = v9->m_height;
        goto LABEL_104;
      case Mapped_HP:
        v8 = (const AgDisplayMode *)keyTranslationTable;
        while ( v8->m_width != v2 )
        {
          v8 = (const AgDisplayMode *)((char *)v8 + 8);
          if ( v8 == fixedAspectRatioModes_0 )
            goto LABEL_18;
        }
        if ( v8 == fixedAspectRatioModes_0 )
        {
LABEL_18:
          bindings[2] = 0;
          goto LABEL_104;
        }
        bindings[2] = v8->m_height;
        goto LABEL_104;
      case Mapped_HP_LP:
        v13 = (const AgDisplayMode *)keyTranslationTable;
        while ( v13->m_width != v2 )
        {
          v13 = (const AgDisplayMode *)((char *)v13 + 8);
          if ( v13 == fixedAspectRatioModes_0 )
            goto LABEL_48;
        }
        if ( v13 == fixedAspectRatioModes_0 )
        {
LABEL_48:
          bindings[7] = 0;
          goto LABEL_104;
        }
        bindings[7] = v13->m_height;
        goto LABEL_104;
      case Mapped_LP_LK:
        v10 = (const AgDisplayMode *)keyTranslationTable;
        while ( v10->m_width != v2 )
        {
          v10 = (const AgDisplayMode *)((char *)v10 + 8);
          if ( v10 == fixedAspectRatioModes_0 )
            goto LABEL_30;
        }
        if ( v10 == fixedAspectRatioModes_0 )
        {
LABEL_30:
          bindings[4] = 0;
          goto LABEL_104;
        }
        bindings[4] = v10->m_height;
        goto LABEL_104;
      case Mapped_LK_HK:
        v14 = (const AgDisplayMode *)keyTranslationTable;
        while ( v14->m_width != v2 )
        {
          v14 = (const AgDisplayMode *)((char *)v14 + 8);
          if ( v14 == fixedAspectRatioModes_0 )
            goto LABEL_54;
        }
        if ( v14 == fixedAspectRatioModes_0 )
        {
LABEL_54:
          bindings[8] = 0;
          goto LABEL_104;
        }
        bindings[8] = v14->m_height;
        goto LABEL_104;
      case Mapped_HK_HP:
        v12 = (const AgDisplayMode *)keyTranslationTable;
        while ( v12->m_width != v2 )
        {
          v12 = (const AgDisplayMode *)((char *)v12 + 8);
          if ( v12 == fixedAspectRatioModes_0 )
            goto LABEL_42;
        }
        if ( v12 == fixedAspectRatioModes_0 )
        {
LABEL_42:
          bindings[6] = 0;
          goto LABEL_104;
        }
        bindings[6] = v12->m_height;
        goto LABEL_104;
      case Mapped_LP_HK:
        v15 = (const AgDisplayMode *)keyTranslationTable;
        while ( v15->m_width != v2 )
        {
          v15 = (const AgDisplayMode *)((char *)v15 + 8);
          if ( v15 == fixedAspectRatioModes_0 )
            goto LABEL_60;
        }
        if ( v15 == fixedAspectRatioModes_0 )
        {
LABEL_60:
          bindings[44] = 0;
          goto LABEL_104;
        }
        bindings[44] = v15->m_height;
        goto LABEL_104;
      case Mapped_LK_HP:
        v11 = (const AgDisplayMode *)keyTranslationTable;
        while ( v11->m_width != v2 )
        {
          v11 = (const AgDisplayMode *)((char *)v11 + 8);
          if ( v11 == fixedAspectRatioModes_0 )
            goto LABEL_36;
        }
        if ( v11 == fixedAspectRatioModes_0 )
        {
LABEL_36:
          bindings[5] = 0;
          goto LABEL_104;
        }
        bindings[5] = v11->m_height;
        goto LABEL_104;
      case Mapped_REC:
        v16 = (const AgDisplayMode *)keyTranslationTable;
        while ( v16->m_width != v2 )
        {
          v16 = (const AgDisplayMode *)((char *)v16 + 8);
          if ( v16 == fixedAspectRatioModes_0 )
            goto LABEL_66;
        }
        if ( v16 == fixedAspectRatioModes_0 )
        {
LABEL_66:
          bindings[9] = 0;
          goto LABEL_104;
        }
        bindings[9] = v16->m_height;
        goto LABEL_104;
      case Mapped_PLAY:
        v17 = (const AgDisplayMode *)keyTranslationTable;
        while ( v17->m_width != v2 )
        {
          v17 = (const AgDisplayMode *)((char *)v17 + 8);
          if ( v17 == fixedAspectRatioModes_0 )
            goto LABEL_72;
        }
        if ( v17 == fixedAspectRatioModes_0 )
        {
LABEL_72:
          bindings[10] = 0;
          goto LABEL_104;
        }
        bindings[10] = v17->m_height;
        goto LABEL_104;
      case Mapped_REPEAT:
        v18 = (const AgDisplayMode *)keyTranslationTable;
        while ( v18->m_width != v2 )
        {
          v18 = (const AgDisplayMode *)((char *)v18 + 8);
          if ( v18 == fixedAspectRatioModes_0 )
            goto LABEL_78;
        }
        if ( v18 == fixedAspectRatioModes_0 )
        {
LABEL_78:
          bindings[11] = 0;
          goto LABEL_104;
        }
        bindings[11] = v18->m_height;
        goto LABEL_104;
      case Mapped_L:
        v21 = (const AgDisplayMode *)keyTranslationTable;
        while ( v21->m_width != v2 )
        {
          v21 = (const AgDisplayMode *)((char *)v21 + 8);
          if ( v21 == fixedAspectRatioModes_0 )
            goto LABEL_96;
        }
        if ( v21 == fixedAspectRatioModes_0 )
        {
LABEL_96:
          bindings[14] = 0;
          goto LABEL_104;
        }
        bindings[14] = v21->m_height;
        goto LABEL_104;
      case Mapped_D:
        v20 = (const AgDisplayMode *)keyTranslationTable;
        while ( v20->m_width != v2 )
        {
          v20 = (const AgDisplayMode *)((char *)v20 + 8);
          if ( v20 == fixedAspectRatioModes_0 )
            goto LABEL_90;
        }
        if ( v20 == fixedAspectRatioModes_0 )
        {
LABEL_90:
          bindings[13] = 0;
          goto LABEL_104;
        }
        bindings[13] = v20->m_height;
        goto LABEL_104;
      case Mapped_R:
        v22 = (const AgDisplayMode *)keyTranslationTable;
        while ( v22->m_width != v2 )
        {
          v22 = (const AgDisplayMode *)((char *)v22 + 8);
          if ( v22 == fixedAspectRatioModes_0 )
            goto LABEL_102;
        }
        if ( v22 == fixedAspectRatioModes_0 )
        {
LABEL_102:
          m_height = 0;
          goto LABEL_103;
        }
        m_height = v22->m_height;
LABEL_103:
        bindings[15] = m_height;
        goto LABEL_104;
      case Mapped_U:
        v19 = (const AgDisplayMode *)keyTranslationTable;
        break;
      default:
        goto LABEL_104;
    }
    while ( v19->m_width != v2 )
    {
      v19 = (const AgDisplayMode *)((char *)v19 + 8);
      if ( v19 == fixedAspectRatioModes_0 )
        goto LABEL_84;
    }
    if ( v19 == fixedAspectRatioModes_0 )
    {
LABEL_84:
      bindings[12] = 0;
      goto LABEL_104;
    }
    bindings[12] = v19->m_height;
LABEL_104:
    ++v2;
    ++v3;
  }
  while ( v2 < 10 );
  return 16i64;
}

void __fastcall UserGameOperation::stopVibrationAll(UserGameOperation *this)
{
  Framework::GLManager *v1; // r11
  int v2; // er8
  __int64 v3; // r10
  AgController *m_ptr; // r9
  std::_Tree_node<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> >,void *> *Myhead; // rcx
  std::_Tree_node<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> >,void *> *v6; // rax
  std::_Tree_node<std::pair<enum AgControllerComponentType const ,std::list<AgControllerComponent *> >,void *> *Parent; // rdx
  bool v8; // zf
  std::list<AgControllerComponent *> *p_second; // rcx
  std::_List_node<AgControllerComponent *,void *> *v10; // rcx
  std::_List_node<AgControllerComponent *,void *> *Next; // rax
  AgControllerComponent *Myval; // rdx

  v1 = Framework::GLManager::glm;
  if ( Framework::GLManager::glm )
  {
    v2 = 1;
    v3 = 0i64;
    do
    {
      if ( v2 >= 1 )
      {
        m_ptr = v1->m_controllerContext.m_gamepad._Elems[v3].m_ptr;
        if ( m_ptr )
        {
          Myhead = m_ptr->m_components._Mypair._Myval2._Myval2._Myhead;
          v6 = Myhead;
          Parent = Myhead->_Parent;
          while ( !Parent->_Isnil )
          {
            if ( Parent->_Myval.first >= AgControllerComponentType_Rumble )
            {
              v6 = Parent;
              Parent = Parent->_Left;
            }
            else
            {
              Parent = Parent->_Right;
            }
          }
          if ( v6 == Myhead || v6->_Myval.first > AgControllerComponentType_Rumble )
            v6 = m_ptr->m_components._Mypair._Myval2._Myval2._Myhead;
          v8 = v6 == Myhead;
          p_second = &v6->_Myval.second;
          if ( v8 )
            p_second = &AgController::ms_emptyControllerComponentList;
          v10 = p_second->_Mypair._Myval2._Myhead;
          Next = v10->_Next;
          if ( v10->_Next == v10 )
          {
LABEL_18:
            Myval = &AgController::ms_emptyControllerComponent;
          }
          else
          {
            while ( 1 )
            {
              Myval = Next->_Myval;
              if ( !Myval->m_id )
                break;
              Next = Next->_Next;
              if ( Next == v10 )
                goto LABEL_18;
            }
          }
          if ( Myval[2].m_type )
          {
            if ( Myval->m_type )
            {
              Myval[1].m_type = AgControllerComponentType_Unknown;
              Myval[1].m_id = -1;
            }
          }
        }
      }
      ++v2;
      ++v3;
    }
    while ( v2 <= 4 );
  }
}

char __fastcall FighterOperation::test(FighterOperation *this, int fighterIndex, GameOperations::FighterOpSpec op)
{
  __int64 v3; // r14
  FighterOperation::Slot *v4; // rdi
  UserGameOperation *v5; // rsi
  UserGameOperation::UserSlot *UserSlot; // r11
  char v7; // bl
  __int64 v8; // rax
  int v10[2]; // [rsp+38h] [rbp+10h]

  v3 = op;
  if ( (unsigned int)(fighterIndex - 1) <= 1 )
  {
    v4 = (FighterOperation::Slot *)&this[-1].m_slots[fighterIndex + 1].operationMapper.m_mapping[4];
    if ( v4 )
    {
      v5 = UserGameOperation::Instance();
      UserSlot = UserGameOperation::getUserSlot(v5, v4->userIndex);
      if ( v4->userIndex == 0x80000000 )
        UserSlot = &v5->m_anyUserSlot;
      v7 = 0;
      if ( UserSlot )
      {
        v8 = 0i64;
        v10[0] = v4->reverseMapper.channels[v3]._Array[0] & UserSlot->m_stableChannels._Array[0];
        while ( !v10[v8] )
        {
          if ( --v8 < 0 )
            goto LABEL_9;
        }
      }
      else
      {
LABEL_9:
        if ( !UserGameOperation::testFighterKeyboard(
                v5,
                v4->userIndex,
                &v4->reverseKeyboardMapper,
                (GameOperations::FighterOpSpec)v3) )
          return v7;
      }
      return 1;
    }
  }
  return 0;
}

char __fastcall UserGameOperation::test(
        UserGameOperation *this,
        int userIndex,
        GameOperations::GameOpSpec op,
        UserGameOperation::TestPolicy testPolicy,
        bool controller,
        bool *fromKeyboard)
{
  unsigned int v9; // eax
  UserGameOperation::UserSlot *p_m_emptyUserSlot; // r10
  int v11; // edx
  Framework::GLManager *p_m_gamepad; // rax
  int v13; // er10
  UserGameOperation::UserSlot *p_m_anyUserSlot; // rsi
  __int64 v15; // rbx
  std::bitset<256> *m_KeyboardButtonConfig; // rdx

  v9 = userIndex - 1;
  if ( controller )
  {
    if ( v9 <= 3 )
      p_m_emptyUserSlot = &this->m_slots[v9];
    else
      p_m_emptyUserSlot = 0i64;
  }
  else if ( v9 <= 3 )
  {
    if ( !Framework::GLManager::glm )
      goto LABEL_13;
    v11 = *(_DWORD *)(1056i64 * userIndex + *(_QWORD *)&AppMain::pApp + 2198556);
    if ( !v11 )
      goto LABEL_13;
    p_m_gamepad = (Framework::GLManager *)&Framework::GLManager::glm->m_controllerContext.m_gamepad;
    v13 = 0;
    if ( &Framework::GLManager::glm->m_controllerContext.m_gamepad == (std::array<AgPointer<AgController>,4> *)&Framework::GLManager::glm->m_controllerContext.m_lastUsedContType )
      goto LABEL_13;
    while ( 1 )
    {
      ++v13;
      if ( p_m_gamepad->m_commandBufferSyncLazyFuncQueue._Mypair._Myval2._Myproxy )
      {
        if ( v13 == v11 )
          break;
      }
      p_m_gamepad = (Framework::GLManager *)((char *)p_m_gamepad + 16);
      if ( p_m_gamepad == (Framework::GLManager *)&Framework::GLManager::glm->m_controllerContext.m_lastUsedContType )
        goto LABEL_13;
    }
    if ( v13 == -1 )
LABEL_13:
      p_m_emptyUserSlot = &this->m_emptyUserSlot;
    else
      p_m_emptyUserSlot = &this->m_slots[v13 - 1];
  }
  else
  {
    p_m_emptyUserSlot = 0i64;
  }
  p_m_anyUserSlot = &this->m_anyUserSlot;
  if ( userIndex != 0x80000000 )
    p_m_anyUserSlot = p_m_emptyUserSlot;
  if ( !p_m_anyUserSlot || this->m_keyboardLocked && ((unsigned int)op <= GameOp_Dir_U || (unsigned int)(op - 6) <= 5) )
    return 0;
  v15 = op;
  if ( UserGameOperation::UserSlot::test(p_m_anyUserSlot, &this->m_ButtonConfig[op], testPolicy) )
  {
    if ( fromKeyboard )
      *fromKeyboard = 0;
    return 1;
  }
  if ( userIndex != 2 || (m_KeyboardButtonConfig = this->m_2pKeyboardButtonConfig, controller) )
    m_KeyboardButtonConfig = this->m_KeyboardButtonConfig;
  if ( !UserGameOperation::UserSlot::testKeyboard(p_m_anyUserSlot, &m_KeyboardButtonConfig[v15], testPolicy) )
    return 0;
  if ( fromKeyboard )
    *fromKeyboard = 1;
  return 1;
}

char __fastcall UserGameOperation::UserSlot::test(
        UserGameOperation::UserSlot *this,
        std::bitset<16> *chkBtn,
        UserGameOperation::TestPolicy testPolicy)
{
  __int64 v3; // r9
  __int64 v4; // r10
  std::bitset<16> *p_m_stableChannels; // rcx
  signed __int64 v8; // rdx
  unsigned int v9; // [rsp+20h] [rbp+20h] BYREF

  v3 = 0i64;
  v9 = 0xFFFF;
  v4 = 0i64;
  while ( *(unsigned int *)((char *)&v9 + 4 * v4 + (char *)chkBtn - (char *)&v9) == *(&v9 + v4) )
  {
    if ( --v4 < 0 )
      return 0;
  }
  p_m_stableChannels = &this->m_stableChannels;
  if ( testPolicy == Test_OnEdge )
  {
    p_m_stableChannels = &this->m_pressedEventChannels;
  }
  else if ( testPolicy == Test_Repeat )
  {
    p_m_stableChannels = &this->m_repeatPressedEventChannels;
  }
  v9 = chkBtn->_Array[0] & p_m_stableChannels->_Array[0];
  v8 = (char *)chkBtn - (char *)&v9;
  while ( *(&v9 + v3) == *(unsigned int *)((char *)&v9 + 4 * v3 + v8) )
  {
    if ( --v3 < 0 )
      return 1;
  }
  return 0;
}

bool __fastcall FighterOperation::testEdge(FighterOperation *this, int fighterIndex, GameOperations::FighterOpSpec op)
{
  FighterOperation::Slot *m_slots; // rbx
  UserGameOperation *v6; // rsi
  UserGameOperation::TestPolicy v7; // [rsp+20h] [rbp-18h]
  UserGameOperation::TestPolicy v8; // [rsp+20h] [rbp-18h]

  m_slots = this->m_slots;
  if ( this == (FighterOperation *)-8i64 )
    return 0;
  v6 = UserGameOperation::Instance();
  return UserGameOperation::testFighter(v6, m_slots->userIndex, &m_slots->reverseMapper, op, v7)
      || UserGameOperation::testFighterKeyboard(v6, m_slots->userIndex, &m_slots->reverseKeyboardMapper, op, v8);
}

char __fastcall UserGameOperation::testFighter(
        UserGameOperation *this,
        int userIndex,
        const FighterOperation::ReverseOperationMapper *mapper,
        GameOperations::FighterOpSpec op)
{
  __int64 v4; // rdi
  UserGameOperation::UserSlot *UserSlot; // r10
  int v8; // er11
  __int64 v9; // rax
  std::bitset<16> chkBtn[2]; // [rsp+38h] [rbp+10h] BYREF

  v4 = op;
  UserSlot = UserGameOperation::getUserSlot(this, userIndex);
  if ( v8 == 0x80000000 )
    UserSlot = &this->m_anyUserSlot;
  if ( !UserSlot )
    return 0;
  v9 = 0i64;
  chkBtn[0] = mapper->channels[v4];
  while ( !chkBtn[v9]._Array[0] )
  {
    if ( --v9 < 0 )
      return 0;
  }
  return UserGameOperation::UserSlot::test(UserSlot, chkBtn, Test_OnEdge);
}

char __fastcall UserGameOperation::testFighterKeyboard(
        UserGameOperation *this,
        int userIndex,
        const FighterOperation::ReverseOperationKeyboardMapper *mapper,
        GameOperations::FighterOpSpec op)
{
  __int64 v4; // rsi
  UserGameOperation::UserSlot *UserSlot; // rdx
  int v8; // er11
  signed __int64 v9; // rdx
  __int128 v10; // xmm1
  __int64 v11; // rax
  __int64 v12; // r8
  __int128 v14; // [rsp+20h] [rbp-68h]
  __int128 v15; // [rsp+30h] [rbp-58h] BYREF
  __int128 v16[2]; // [rsp+40h] [rbp-48h]

  v4 = op;
  UserSlot = UserGameOperation::getUserSlot(this, userIndex);
  if ( v8 == 0x80000000 )
    UserSlot = &this->m_anyUserSlot;
  if ( !UserSlot )
    return 0;
  v9 = (char *)UserSlot - ((char *)&v15 + 8);
  v10 = *(_OWORD *)&mapper->channels[v4]._Array[2];
  v11 = 3i64;
  v14 = *(_OWORD *)mapper->channels[v4]._Array;
  v12 = 3i64;
  v15 = v10;
  do
  {
    *((_QWORD *)&v14 + v12) &= *(_QWORD *)((char *)&v14 + 8 * v12 + v9 + 24);
    --v12;
  }
  while ( v12 >= 0 );
  v16[0] = v14;
  v16[1] = v15;
  while ( !*((_QWORD *)v16 + v11) )
  {
    if ( --v11 < 0 )
      return 0;
  }
  return 1;
}

bool __fastcall UserGameOperation::testFighterKeyboard(
        UserGameOperation *this,
        int userIndex,
        const FighterOperation::ReverseOperationKeyboardMapper *mapper,
        GameOperations::FighterOpSpec op)
{
  __int64 v4; // rsi
  UserGameOperation::UserSlot *UserSlot; // rcx
  int v8; // er11
  __int128 v9; // xmm1
  __int64 v10; // rax
  std::bitset<256> chkBtn; // [rsp+20h] [rbp-48h] BYREF

  v4 = op;
  UserSlot = UserGameOperation::getUserSlot(this, userIndex);
  if ( v8 == 0x80000000 )
    UserSlot = &this->m_anyUserSlot;
  if ( !UserSlot )
    return 0;
  v9 = *(_OWORD *)&mapper->channels[v4]._Array[2];
  v10 = 3i64;
  *(_OWORD *)chkBtn._Array = *(_OWORD *)mapper->channels[v4]._Array;
  *(_OWORD *)&chkBtn._Array[2] = v9;
  while ( !chkBtn._Array[v10] )
  {
    if ( --v10 < 0 )
      return 0;
  }
  return UserGameOperation::UserSlot::testKeyboard(UserSlot, &chkBtn, Test_OnEdge);
}

char __fastcall UserGameOperation::testInvert(
        UserGameOperation *this,
        int userIndex,
        GameOperations::GameOpSpec op,
        UserGameOperation::TestPolicy testPolicy,
        bool controller,
        bool *fromKeyboard)
{
  unsigned int v9; // eax
  UserGameOperation::UserSlot *p_m_emptyUserSlot; // r10
  int v11; // edx
  Framework::GLManager *p_m_gamepad; // rax
  int v13; // er10
  UserGameOperation::UserSlot *p_m_anyUserSlot; // rsi
  __int64 v15; // rbx
  std::bitset<256> *m_KeyboardButtonConfig; // rdx

  v9 = userIndex - 1;
  if ( controller )
  {
    if ( v9 <= 3 )
      p_m_emptyUserSlot = &this->m_slots[v9];
    else
      p_m_emptyUserSlot = 0i64;
  }
  else if ( v9 <= 3 )
  {
    if ( !Framework::GLManager::glm )
      goto LABEL_13;
    v11 = *(_DWORD *)(1056i64 * userIndex + *(_QWORD *)&AppMain::pApp + 2198556);
    if ( !v11 )
      goto LABEL_13;
    p_m_gamepad = (Framework::GLManager *)&Framework::GLManager::glm->m_controllerContext.m_gamepad;
    v13 = 0;
    if ( &Framework::GLManager::glm->m_controllerContext.m_gamepad == (std::array<AgPointer<AgController>,4> *)&Framework::GLManager::glm->m_controllerContext.m_lastUsedContType )
      goto LABEL_13;
    while ( 1 )
    {
      ++v13;
      if ( p_m_gamepad->m_commandBufferSyncLazyFuncQueue._Mypair._Myval2._Myproxy )
      {
        if ( v13 == v11 )
          break;
      }
      p_m_gamepad = (Framework::GLManager *)((char *)p_m_gamepad + 16);
      if ( p_m_gamepad == (Framework::GLManager *)&Framework::GLManager::glm->m_controllerContext.m_lastUsedContType )
        goto LABEL_13;
    }
    if ( v13 == -1 )
LABEL_13:
      p_m_emptyUserSlot = &this->m_emptyUserSlot;
    else
      p_m_emptyUserSlot = &this->m_slots[v13 - 1];
  }
  else
  {
    p_m_emptyUserSlot = 0i64;
  }
  p_m_anyUserSlot = &this->m_anyUserSlot;
  if ( userIndex != 0x80000000 )
    p_m_anyUserSlot = p_m_emptyUserSlot;
  if ( !p_m_anyUserSlot || this->m_keyboardLocked && (unsigned int)op <= GameOp_Dir_U )
    return 0;
  v15 = op;
  if ( UserGameOperation::UserSlot::testInvert(p_m_anyUserSlot, &this->m_ButtonConfig[op], testPolicy) )
  {
    if ( fromKeyboard )
      *fromKeyboard = 0;
    return 1;
  }
  if ( userIndex != 2 || (m_KeyboardButtonConfig = this->m_2pKeyboardButtonConfig, controller) )
    m_KeyboardButtonConfig = this->m_KeyboardButtonConfig;
  if ( !UserGameOperation::UserSlot::testKeyboardInvert(p_m_anyUserSlot, &m_KeyboardButtonConfig[v15], testPolicy) )
    return 0;
  if ( fromKeyboard )
    *fromKeyboard = 1;
  return 1;
}

char __fastcall UserGameOperation::UserSlot::testInvert(
        UserGameOperation::UserSlot *this,
        std::bitset<16> *chkBtn,
        UserGameOperation::TestPolicy testPolicy)
{
  __int64 v3; // r9
  __int64 v4; // r10
  std::bitset<16> *p_m_invertStableChannels; // rcx
  signed __int64 v8; // rdx
  unsigned int v9; // [rsp+20h] [rbp+20h] BYREF

  v3 = 0i64;
  v9 = 0xFFFF;
  v4 = 0i64;
  while ( *(unsigned int *)((char *)&v9 + 4 * v4 + (char *)chkBtn - (char *)&v9) == *(&v9 + v4) )
  {
    if ( --v4 < 0 )
      return 0;
  }
  p_m_invertStableChannels = &this->m_invertStableChannels;
  if ( testPolicy == Test_OnEdge )
  {
    p_m_invertStableChannels = &this->m_releasedEventChannels;
  }
  else if ( testPolicy == Test_Repeat )
  {
    p_m_invertStableChannels = &this->m_repeatReleasedEventChannels;
  }
  v9 = chkBtn->_Array[0] & p_m_invertStableChannels->_Array[0];
  v8 = (char *)chkBtn - (char *)&v9;
  while ( *(&v9 + v3) == *(unsigned int *)((char *)&v9 + 4 * v3 + v8) )
  {
    if ( --v3 < 0 )
      return 1;
  }
  return 0;
}

bool __fastcall UserGameOperation::testKeyboard(
        UserGameOperation *this,
        int userIndex,
        GameOperations::GameOpSpec op,
        UserGameOperation::TestPolicy testPolicy)
{
  __int64 v4; // rbx
  UserGameOperation::UserSlot *UserSlot; // rcx
  UserGameOperation::UserSlot *v7; // r11
  __int64 *v8; // rdx

  v4 = op;
  UserSlot = UserGameOperation::getUserSlot(this, userIndex);
  if ( userIndex == 0x80000000 )
    UserSlot = v7 + 4;
  if ( !UserSlot )
    return 0;
  v8 = &v7[7].m_keyboardRepeatInterval[7];
  if ( userIndex != 2 )
    v8 = (__int64 *)&v7[6].m_releasedEventKeyboardChannels._Array[3];
  return UserGameOperation::UserSlot::testKeyboard(UserSlot, (const std::bitset<256> *)&v8[4 * v4], Test_OnEdge);
}

char __fastcall UserGameOperation::UserSlot::testKeyboard(
        UserGameOperation::UserSlot *this,
        const std::bitset<256> *chkBtn,
        UserGameOperation::TestPolicy testPolicy)
{
  __int32 v3; // er8
  __int64 v4; // rax
  __int128 v5; // xmm1
  __int64 v6; // r8
  signed __int64 v7; // rcx
  __int128 v9; // [rsp+0h] [rbp-58h]
  __int128 v10; // [rsp+10h] [rbp-48h] BYREF
  __int128 v11[2]; // [rsp+20h] [rbp-38h]

  v3 = testPolicy - 1;
  if ( v3 )
  {
    if ( v3 == 1 )
      this = (UserGameOperation::UserSlot *)((char *)this + 128);
  }
  else
  {
    this = (UserGameOperation::UserSlot *)((char *)this + 64);
  }
  v4 = 3i64;
  v5 = *(_OWORD *)&chkBtn->_Array[2];
  v6 = 3i64;
  v7 = (char *)this - ((char *)&v10 + 8);
  v9 = *(_OWORD *)chkBtn->_Array;
  v10 = v5;
  do
  {
    *((_QWORD *)&v9 + v6) &= *(_QWORD *)((char *)&v9 + 8 * v6 + v7 + 24);
    --v6;
  }
  while ( v6 >= 0 );
  v11[0] = v9;
  v11[1] = v10;
  while ( !*((_QWORD *)v11 + v4) )
  {
    if ( --v4 < 0 )
      return 0;
  }
  return 1;
}

char __fastcall UserGameOperation::UserSlot::testKeyboardInvert(
        UserGameOperation::UserSlot *this,
        const std::bitset<256> *chkBtn,
        UserGameOperation::TestPolicy testPolicy)
{
  std::bitset<256> *p_m_invertStableKeyboardChannels; // r9
  __int32 v4; // er8
  __int64 v5; // rax
  __int128 v6; // xmm1
  __int64 v7; // r8
  __int64 v8; // r9
  __int128 v10; // [rsp+0h] [rbp-58h]
  __int128 v11; // [rsp+10h] [rbp-48h] BYREF
  __int128 v12[2]; // [rsp+20h] [rbp-38h]

  p_m_invertStableKeyboardChannels = &this->m_invertStableKeyboardChannels;
  v4 = testPolicy - 1;
  if ( v4 )
  {
    if ( v4 == 1 )
      p_m_invertStableKeyboardChannels = &this->m_repeatReleasedEventKeyboardChannels;
  }
  else
  {
    p_m_invertStableKeyboardChannels = &this->m_releasedEventKeyboardChannels;
  }
  v5 = 3i64;
  v6 = *(_OWORD *)&chkBtn->_Array[2];
  v7 = 3i64;
  v10 = *(_OWORD *)chkBtn->_Array;
  v8 = (char *)p_m_invertStableKeyboardChannels - ((char *)&v11 + 8) + 24;
  v11 = v6;
  do
  {
    *((_QWORD *)&v10 + v7) &= *(_QWORD *)((char *)&v10 + 8 * v7 + v8);
    --v7;
  }
  while ( v7 >= 0 );
  v12[0] = v10;
  v12[1] = v11;
  while ( !*((_QWORD *)v12 + v5) )
  {
    if ( --v5 < 0 )
      return 0;
  }
  return 1;
}

void __fastcall UserGameOperation::update(UserGameOperation *this)
{
  __int64 perf_frequency; // rbx
  __int64 perf_counter; // rax
  bool v4; // r12
  __int64 v5; // r15
  bool v6; // r14
  int v7; // edi
  UserGameOperation::UserSlot *v8; // rbx
  char v9; // al
  int v10; // er8
  Framework::Input::ButtonEventPattern v11; // er9
  char v12; // si
  char v13; // si
  __int64 v14; // rcx
  __int64 v15; // rdx
  float v16; // xmm0_4
  float v17; // xmm0_4
  float v18; // xmm0_4
  float v19; // xmm0_4
  UserGameOperation::OperationSource v20; // [rsp+20h] [rbp-99h] BYREF
  UserGameOperation::AGKeyboardOperationSource src; // [rsp+60h] [rbp-59h] BYREF
  UserGameOperation::AGKeyboardOperationSource v22; // [rsp+80h] [rbp-39h] BYREF
  UserGameOperation::OperationSource v23; // [rsp+A0h] [rbp-19h] BYREF

  perf_frequency = Query_perf_frequency();
  perf_counter = Query_perf_counter();
  v4 = 0;
  v22.channels._Array[0] = 0i64;
  v5 = (1000000000 * (perf_counter % perf_frequency) / perf_frequency + 1000000000 * (perf_counter / perf_frequency))
     / 1000
     - this->m_lastTime;
  v6 = 0;
  this->m_lastTime = (1000000000 * (perf_counter % perf_frequency) / perf_frequency
                    + 1000000000 * (perf_counter / perf_frequency))
                   / 1000;
  v7 = 1;
  memset(&v22.channels._Array[1], 0, 24);
  memset(&v20, 0, sizeof(v20));
  do
  {
    memset(&src, 0, sizeof(src));
    if ( (unsigned int)(v7 - 1) <= 3 )
    {
      v8 = &this->m_slots[v7 - 1];
      if ( v8 )
      {
        if ( LODWORD(AgProgram::getInstance()[3].__vftable) )
        {
          UserGameOperation::UserSlot::clear(v8);
        }
        else
        {
          v9 = UserGameOperation::AGKeyboardOperationSource::readCurrent(&src);
          v12 = v9;
          if ( v7 <= 2 )
            UserGameOperation::UserSlot::updateKeyboard(v8, &src, v9, v5);
          if ( v7 == 1 )
          {
            v4 = v12;
            v22 = src;
          }
          v13 = UserGameOperation::OperationSource::readCurrent(&v23, v7, v10, v11);
          UserGameOperation::UserSlot::update(v8, &v23, v13, v5);
          v14 = 0i64;
          v15 = 4i64;
          do
          {
            v16 = v23.channels[v14];
            if ( v16 > v20.channels[v14] )
              v20.channels[v14] = v16;
            v17 = v23.channels[v14 + 1];
            if ( v17 > v20.channels[v14 + 1] )
              v20.channels[v14 + 1] = v17;
            v18 = v23.channels[v14 + 2];
            if ( v18 > v20.channels[v14 + 2] )
              v20.channels[v14 + 2] = v18;
            v19 = v23.channels[v14 + 3];
            if ( v19 > v20.channels[v14 + 3] )
              v20.channels[v14 + 3] = v19;
            v14 += 4i64;
            --v15;
          }
          while ( v15 );
          if ( v6 || v13 )
            v6 = 1;
        }
      }
    }
    ++v7;
  }
  while ( v7 <= 4 );
  UserGameOperation::UserSlot::updateKeyboard(&this->m_anyUserSlot, &v22, v4, v5);
  UserGameOperation::UserSlot::updateKeyboard(&this->m_emptyUserSlot, &v22, v4, v5);
  UserGameOperation::UserSlot::update(&this->m_anyUserSlot, &v20, v6, v5);
}

void __fastcall UserGameOperation::UserSlot::update(
        UserGameOperation::UserSlot *this,
        const UserGameOperation::OperationSource *src,
        bool isValidSrc,
        __int64 frameDuration)
{
  const UserGameOperation::OperationSource *v6; // r11
  std::bitset<61> *p_m_stableChannels; // rsi
  unsigned int v9; // er10
  int i; // er9
  float v11; // xmm0_4
  std::bitset<61>::reference *v12; // rax
  unsigned __int64 Mypos; // rdx
  int v14; // eax
  int v15; // edi
  const std::bitset<16> *v16; // r10
  __int64 *m_repeatInterval; // r8
  __int64 v18; // r11
  __int64 v19; // rbp
  __int64 v20; // r14
  unsigned int v21; // ecx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rcx
  int v25; // [rsp+20h] [rbp-48h]
  std::bitset<61>::reference result; // [rsp+30h] [rbp-38h] BYREF
  int v27[2]; // [rsp+70h] [rbp+8h]

  v6 = src;
  p_m_stableChannels = (std::bitset<61> *)&this->m_stableChannels;
  v9 = this->m_stableChannels._Array[0];
  v25 = (unsigned __int16)~LOWORD(this->m_stableChannels._Array[0]);
  this->m_stableChannels._Array[0] = -1;
  HIWORD(this->m_stableChannels._Array[0]) = 0;
  for ( i = 0; i < 16; ++i )
  {
    v11 = *(float *)&FLOAT_1_0;
    if ( (unsigned int)i <= 3 )
      v11 = FLOAT_0_5;
    if ( v11 > v6->channels[0] )
    {
      v12 = std::bitset<21>::operator[](p_m_stableChannels, &result, i);
      Mypos = v12->_Mypos;
      if ( Mypos >= 0x10 )
        std::_Xout_of_range("invalid bitset<N> position");
      *((_DWORD *)v12->_Pbitset->_Array + (Mypos >> 5)) &= ~(1 << (v12->_Mypos & 0x1F));
    }
    v6 = (const UserGameOperation::OperationSource *)((char *)v6 + 4);
  }
  v27[0] = (unsigned __int16)~LOWORD(p_m_stableChannels->_Array[0]);
  v14 = v27[0];
  this->m_invertStableChannels._Array[0] = v27[0];
  if ( isValidSrc )
    this->m_pressedEventEnabledMask._Array[0] |= v14;
  else
    this->m_pressedEventEnabledMask._Array[0] = 0;
  this->m_pressedEventChannels._Array[0] = p_m_stableChannels->_Array[0] & v25 & this->m_pressedEventEnabledMask._Array[0];
  this->m_releasedEventChannels._Array[0] = v9 & this->m_invertStableChannels._Array[0];
  v15 = 0;
  v16 = UserGameOperation::UserSlot::s_repeatTimerSourceTable;
  m_repeatInterval = this->m_repeatInterval;
  v18 = 11i64;
  v19 = RepeatPeriod_Initial;
  v20 = RepeatPeriod_Final;
  do
  {
    v21 = v16->_Array[0] & p_m_stableChannels->_Array[0] & this->m_pressedEventEnabledMask._Array[0];
    v27[0] = v21;
    v22 = 0i64;
    while ( !v27[v22] )
    {
      if ( --v22 < 0 )
      {
        *m_repeatInterval = 1000 * v19;
        *(m_repeatInterval - 11) = 1000 * v19;
        goto LABEL_23;
      }
    }
    *(m_repeatInterval - 11) -= frameDuration;
    if ( *(m_repeatInterval - 11) <= 0 )
    {
      v15 |= v21;
      v23 = (*m_repeatInterval - 1000 * v20) / 2;
      if ( v23 )
      {
        v24 = *m_repeatInterval - v23;
        *m_repeatInterval = v24;
      }
      else
      {
        v24 = 1000 * v20;
        *m_repeatInterval = 1000 * v20;
      }
      *(m_repeatInterval - 11) = v24;
    }
LABEL_23:
    ++m_repeatInterval;
    ++v16;
    --v18;
  }
  while ( v18 );
  this->m_repeatPressedEventChannels._Array[0] = v15 | this->m_pressedEventChannels._Array[0];
  this->m_repeatReleasedEventChannels._Array[0] = this->m_releasedEventChannels._Array[0];
}

void __fastcall UserGameOperation::UserSlot::updateKeyboard(
        UserGameOperation::UserSlot *this,
        const UserGameOperation::AGKeyboardOperationSource *src,
        bool isValidSrc,
        __int64 frameDuration)
{
  UserGameOperation::UserSlot *v7; // r11
  __int128 v8; // xmm2
  __int128 v9; // xmm1
  __int64 i; // rcx
  __int64 j; // rax
  __int64 v12; // r10
  unsigned __int64 k; // r9
  unsigned __int64 v14; // rax
  std::bitset<61>::reference *v15; // rax
  unsigned __int64 Mypos; // rdx
  __int64 m; // rcx
  __int64 n; // rax
  __int64 v19; // r8
  unsigned __int64 *v20; // rdx
  __int64 ii; // rdx
  __int64 jj; // rdx
  __int64 kk; // rdx
  __int64 *m_keyboardRepeatInterval; // r8
  signed __int64 v25; // rbx
  __int64 v26; // rdi
  __int64 v27; // rsi
  __int64 v28; // r14
  __int64 mm; // rdx
  __int64 nn; // rcx
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rcx
  __int128 v35; // [rsp+28h] [rbp-A0h]
  __int128 v36; // [rsp+38h] [rbp-90h] BYREF
  __int128 v37; // [rsp+48h] [rbp-80h]
  __int128 v38; // [rsp+58h] [rbp-70h]
  unsigned __int128 v39; // [rsp+68h] [rbp-60h] BYREF
  __int128 v40; // [rsp+78h] [rbp-50h] BYREF
  __int128 v41; // [rsp+88h] [rbp-40h]
  __int128 v42; // [rsp+98h] [rbp-30h]

  v7 = this;
  v8 = *(_OWORD *)this->m_stableKeyboardChannels._Array;
  v9 = *(_OWORD *)&this->m_stableKeyboardChannels._Array[2];
  v37 = *(_OWORD *)this->m_stableKeyboardChannels._Array;
  v38 = v9;
  for ( i = 3i64; i >= 0; --i )
    *((_QWORD *)&v37 + i) = ~*((_QWORD *)&v37 + i);
  for ( j = 3i64; j >= 0; --j )
    v7->m_stableKeyboardChannels._Array[j] = -1i64;
  v12 = 0i64;
  for ( k = 0i64; k < 0x100; ++k )
  {
    v14 = src->channels._Array[(unsigned __int64)(int)k >> 6];
    if ( !_bittest64((const __int64 *)&v14, k & 0x3F) )
    {
      v15 = std::bitset<21>::operator[]((std::bitset<61> *)v7, (std::bitset<61>::reference *)&v39, (int)k);
      Mypos = v15->_Mypos;
      if ( Mypos >= 0x100 )
        std::_Xout_of_range("invalid bitset<N> position");
      v15->_Pbitset[Mypos >> 6]._Array[0] &= ~(1i64 << (Mypos & 0x3F));
    }
  }
  v35 = *(_OWORD *)v7->m_stableKeyboardChannels._Array;
  v36 = *(_OWORD *)&v7->m_stableKeyboardChannels._Array[2];
  for ( m = 3i64; m >= 0; --m )
    *((_QWORD *)&v35 + m) = ~*((_QWORD *)&v35 + m);
  *(_OWORD *)v7->m_invertStableKeyboardChannels._Array = v35;
  *(_OWORD *)&v7->m_invertStableKeyboardChannels._Array[2] = v36;
  if ( isValidSrc )
  {
    v19 = 3i64;
    v20 = &v7->m_pressedKeyboardEventEnabledMask._Array[3];
    do
    {
      *v20 |= *(v20 - 20);
      --v20;
      --v19;
    }
    while ( v19 >= 0 );
  }
  else
  {
    for ( n = 3i64; n >= 0; --n )
      v7->m_pressedKeyboardEventEnabledMask._Array[n] = v12;
  }
  v39 = v37;
  v40 = v38;
  for ( ii = 3i64; ii >= 0; --ii )
    *((_QWORD *)&v39 + ii) &= *(_QWORD *)((char *)&v39 + 8 * ii + (char *)v7 - ((char *)&v40 + 8) + 24);
  v35 = v39;
  v36 = v40;
  for ( jj = 3i64; jj >= 0; --jj )
    *((_QWORD *)&v35 + jj) &= *(_QWORD *)((char *)&v35 + 8 * jj + (char *)v7 - ((char *)&v36 + 8) + 216);
  *(_OWORD *)v7->m_pressedEventKeyboardChannels._Array = v35;
  *(_OWORD *)&v7->m_pressedEventKeyboardChannels._Array[2] = v36;
  v35 = v8;
  v36 = v9;
  for ( kk = 3i64; kk >= 0; --kk )
    *((_QWORD *)&v35 + kk) &= *(_QWORD *)((char *)&v35 + 8 * kk + (char *)v7 - ((char *)&v36 + 8) + 56);
  *(_OWORD *)v7->m_releasedEventKeyboardChannels._Array = v35;
  *(_OWORD *)&v7->m_releasedEventKeyboardChannels._Array[2] = v36;
  v39 = 0ui64;
  v40 = 0ui64;
  m_keyboardRepeatInterval = v7->m_keyboardRepeatInterval;
  v25 = (char *)&UserGameOperation::UserSlot::s_keyboardRepeatTimerSourceTable[0]._Array[3] - ((char *)&v36 + 8);
  v26 = 11i64;
  v27 = RepeatPeriod_Initial;
  v28 = RepeatPeriod_Final;
  do
  {
    v35 = *(_OWORD *)v7->m_stableKeyboardChannels._Array;
    v36 = *(_OWORD *)&v7->m_stableKeyboardChannels._Array[2];
    for ( mm = 3i64; mm >= 0; --mm )
      *((_QWORD *)&v35 + mm) &= *(_QWORD *)((char *)&v35 + 8 * mm + v25);
    v37 = v35;
    v38 = v36;
    for ( nn = 3i64; nn >= 0; --nn )
      *((_QWORD *)&v37 + nn) &= v7->m_pressedKeyboardEventEnabledMask._Array[nn];
    v41 = v37;
    v42 = v38;
    v31 = 3i64;
    while ( !*((_QWORD *)&v41 + v31) )
    {
      if ( --v31 < 0 )
      {
        *m_keyboardRepeatInterval = 1000 * v27;
        *(m_keyboardRepeatInterval - 11) = 1000 * v27;
        goto LABEL_42;
      }
    }
    *(m_keyboardRepeatInterval - 11) -= frameDuration;
    if ( *(m_keyboardRepeatInterval - 11) <= 0 )
    {
      v32 = v12;
      do
      {
        *(_QWORD *)((char *)&v40 + v32 + 8) |= *(_QWORD *)((char *)&v42 + v32 + 8);
        v32 -= 8i64;
      }
      while ( v32 >= -24 );
      v33 = (*m_keyboardRepeatInterval - 1000 * v28) / 2;
      if ( v33 )
      {
        v34 = *m_keyboardRepeatInterval - v33;
        *m_keyboardRepeatInterval = v34;
      }
      else
      {
        v34 = 1000 * v28;
        *m_keyboardRepeatInterval = 1000 * v28;
      }
      *(m_keyboardRepeatInterval - 11) = v34;
    }
LABEL_42:
    ++m_keyboardRepeatInterval;
    v25 += 32i64;
    --v26;
  }
  while ( v26 );
  v37 = *(_OWORD *)v7->m_pressedEventKeyboardChannels._Array;
  v38 = *(_OWORD *)&v7->m_pressedEventKeyboardChannels._Array[2];
  do
  {
    *(_QWORD *)((char *)&v38 + v12 + 8) |= *(_QWORD *)((char *)&v40 + v12 + 8);
    v12 -= 8i64;
  }
  while ( v12 >= -24 );
  *(_OWORD *)v7->m_repeatPressedEventKeyboardChannels._Array = v37;
  *(_OWORD *)&v7->m_repeatPressedEventKeyboardChannels._Array[2] = v38;
  *(_OWORD *)v7->m_repeatReleasedEventKeyboardChannels._Array = *(_OWORD *)v7->m_releasedEventKeyboardChannels._Array;
  *(_OWORD *)&v7->m_repeatReleasedEventKeyboardChannels._Array[2] = *(_OWORD *)&v7->m_releasedEventKeyboardChannels._Array[2];
}

