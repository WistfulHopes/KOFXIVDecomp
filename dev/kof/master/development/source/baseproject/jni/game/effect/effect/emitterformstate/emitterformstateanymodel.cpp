#include "program files (x86)/microsoft visual studio 14.0/vc/include/deque"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/tween.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/rapper/graphicsopt.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/vec_aos.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_characterdef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/asynccharafileload.h"
#include "dev/silverware/git/sdk/util/agservice.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/operationmapper.h"
#include "dev/silverware/git/sdk/agthreadpool.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filters.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglshader.h"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/hitrectcollection.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filterparams.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/mat_aos.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphqueue.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_missiondataloading.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/trainingsetting.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/combomissionattackeventlistener.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charamaterialsettingformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_font.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/jobmanager.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/fix32.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actorcharabase.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessdefs.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thr/xthread"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlehud.h"
#include "dev/kof/master/development/source/baseproject/jni/game/define/charabonedefine.h"
#include "program files (x86)/windows kits/8.1/include/shared/guiddef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatapacked.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battleeventhandler.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/colorholder.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_pathdatapacker.h"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/damagesetting.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_linebuffer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_highlight.h"
#include "program files (x86)/windows kits/8.1/include/shared/stralign.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "dev/kof/master/development/source/baseproject/jni/game/player/battleplayerinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloat.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/functional"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_profiler.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/easingnumber.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/errorchecker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_states.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actionblackout.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/tga_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_statebag.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/matrix4unaligned.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exwaitcondition.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/quat_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_new.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleonlinewatching.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/resourcemanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_simplemeshcache.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/algorithm"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/cpusequencedataformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/fontprovider/render_fontproviderwinapi.h"
#include "dev/silverware/git/sdk/3rdparty/steam/isteamhtmlsurface.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/string"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleloading.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/shot/actorshot.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actorchara.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/commandcheck.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/restrictringbuffer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_bundle.h"
#include "dev/kof/master/development/source/ps4project/baseproject/pcutil/pcdummy.h"
#include "dev/silverware/git/sdk/agreferencedobjectinl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/materialshowcontrol.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloatmp.h"
#include "dev/silverware/git/sdk/agpointer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapemeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/jpeg_imagefile.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/syncmenuimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treetext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefileutil.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/input/imesystem.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_sse.h"
#include "dev/silverware/git/sdk/agreferencedobject.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_ps4modelroom.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/moviedatadefine.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_docview.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_types.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thread"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charahitrectformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_range.h"
#include "program files (x86)/windows kits/8.1/include/um/winnt.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/memory"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "program files (x86)/windows kits/8.1/include/shared/basetsd.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_hash.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmodel.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/atomic"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix4x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixpool.h"
#include "dev/silverware/git/sdk/agthread.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestageresourcecontainer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shader.h"
#include "dev/silverware/git/sdk/agmutex.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/tuple"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestageshader.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actor.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_sgmlparser.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/libcommon.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector2unaligned.h"
#include "dev/silverware/git/sdk/agscopedlock.h"
#include "dev/silverware/git/sdk/agreferenceinl.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charadataunify.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_context.h"
#include "dev/silverware/git/sdk/agconditionvariable.inl"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaattackdataformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_constants.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xfacet"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charadamagesettingformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessgen.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treeshape.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessellator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_functions.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/ios"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocnum"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steam_api_internal.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_exception.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xiosbase"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglbone.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocale"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitivebundle.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/array"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treecachenode.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/time.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_typeinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treenode.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_loader.h"
#include "dev/silverware/git/sdk/agreferencecount.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cacheeffect.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_system.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphfitter.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefile.h"
#include "program files (x86)/windows kits/8.1/include/um/winuser.h"
#include "dev/silverware/git/sdk/memory/agallocators.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_player.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exthread.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/randommt.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/bilinkable.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/combomissiondataformat.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/sounddata.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/soundgroupdataformat.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/effect.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_types.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steam_api.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/randomnumbers.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "dev/kof/master/development/source/baseproject/jni/game/network/playtogether.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_resource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/mutex"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/map"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_bank.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_stroker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/chrono"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtree"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/dds_imagefile.h"
#include "dev/silverware/git/sdk/input/agcontrollercomponent.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmirror.h"
#include "dev/silverware/git/sdk/util/agdelegate.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/boolinvec.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textmeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "dev/kof/master/development/source/baseproject/jni/game/appmain.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/shaderfxhelper.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphparam.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/list"
#include "dev/kof/master/development/source/baseproject/jni/game/player/effect/actoreffect.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actorobject.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcache.h"
#include "dev/silverware/git/sdk/agdisplay.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/savedata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcacheconfig.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/texstring.h"
#include "dev/silverware/git/sdk/agvector4.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/system_error"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actoroption.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hairliner.h"
#include "dev/silverware/git/sdk/agvector3.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/cameracheck.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_filterdesc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_styledtext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix3x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_core.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_queue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "dev/silverware/git/sdk/system/agsysteminfo.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/freecameracheck.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_fontmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitive.h"
#include "dev/silverware/git/sdk/util/agservicecommand.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector3unaligned.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocaddr.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_radixtree.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleonline.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdatalistmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_twips.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xxatomic"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/stdexcept"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstring"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdata/effectdata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_containers.h"
#include "dev/silverware/git/sdk/3rdparty/steam/matchmakingtypes.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_wwhelper.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/savedatadefine.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/chartdata.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "dev/silverware/git/sdk/util/agdebugchannels.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/silverware/git/sdk/util/agperformancecounter.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/baseproject/jni/game/cpuseq/battlecpu.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdata/effectappdata.h"
#include "dev/silverware/git/sdk/agclock.h"
#include "program files (x86)/windows kits/8.1/include/um/winbase.h"
#include "dev/kof/master/development/source/baseproject/jni/game/cpuseq/sequencecontroller.h"
#include "dev/silverware/git/sdk/agrectangle.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/debug/logging.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/vec_aos.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/heapmemory.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/boolinvec.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_prefightfaceoff.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/translate_table.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/matchingsystem.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/shared_lua_context.h"
#include "dev/kof/master/development/source/baseproject/jni/game/system/battlesysteminfo.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/mutex.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/limits"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_vertex.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/fontprovider/render_fontproviderhud.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_wstring.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/refcountable.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/vectormath_aos.h"
#include "dev/silverware/git/sdk/agcondition.h"
#include "dev/silverware/git/sdk/platforms/pc/system/agpcsysteminfo.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/globalheapmemory.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/hidpad/hidpadsystem.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/combomissionjudge.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/fixmemory.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocinfo"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/soundutil.h"
#include "dev/silverware/git/sdk/agmovieplayer.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogleffect.h"
#include "dev/silverware/git/sdk/agreferencecountinl.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xutility"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/utility"
#include "dev/kof/master/development/source/baseproject/jni/game/network/chkdiscononlinesv.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "dev/silverware/git/sdk/filesystem/agfile.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/iosfwd"
#include "dev/silverware/git/sdk/filesystem/agpath.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaprojectdataformat.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogllight.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threadcheck.h"
#include "dev/silverware/git/sdk/filesystem/agmount.h"
#include "dev/silverware/git/sdk/input/agsdlmappingparser.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charabasestatusformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textlayout.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_image.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglcurve.h"
#include "dev/silverware/git/sdk/filesystem/agdirectory.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/inputkeyrecord.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_hashkey.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlecall/battlecall.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_debug.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/mediamanager.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/mat_aos.h"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/bodypush.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_movie.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglsprite.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_operation.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/bitset"
#include "dev/kof/master/development/source/baseproject/jni/game/network/netmanager.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/audiopresenter.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steamclientpublic.h"
#include "dev/kof/master/development/source/ps4project/baseproject/pcutil/pccontrolsmanager.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/unordered_map"
#include "dev/kof/master/development/source/baseproject/jni/game/network/leaderboard.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglrender.h"
#include "dev/silverware/git/sdk/input/aginputmanager.h"
#include "dev/silverware/git/sdk/agsingleton.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xhash"
#include "dev/silverware/git/sdk/aghash.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector4unaligned.h"
#include "dev/silverware/git/sdk/agmutex.inl"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_manager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_screentoworld.h"
#include "dev/silverware/git/sdk/agstringutils.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglfog.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic0.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/math.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_strokeraa.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_scale9grid.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/variableheapmemorybase.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/vecidx_aos.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraystaticbuff.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/particledata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/floatinvec.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/weapon/actorweapon.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cxform.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "dev/kof/master/development/source/baseproject/jni/game/system/battlecontroller.h"
#include "dev/silverware/git/sdk/agpointerinl.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/emitterformstate/emitterformstateanymodel.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actionsystem.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaactiondataformat.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exlockable.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/titlestoragesystem.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectcommon.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/quat_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vector"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestage.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charafilebase.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/tkndata.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/floatinvec.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_event.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/mediasound.h"
#include "dev/silverware/git/sdk/agcondition.inl"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory0"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/png_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_keycodes.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/physicalheapmemory.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/future_asset.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "dev/silverware/git/sdk/agsemaphore.h"
#include "dev/silverware/git/sdk/agmemorystream.h"
#include "dev/silverware/git/sdk/agvector2.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/cameramotionpreviewsettings.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/stageprojectdata.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/commanddataformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshkey.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixstate.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_gradients.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/asyncjob.h"
#include "dev/silverware/git/sdk/agsemaphore.inl"
#include "dev/silverware/git/sdk/agconditionvariable.h"
#include "dev/silverware/git/sdk/agmemorypool.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_vec64.h"
#include "dev/silverware/git/sdk/agmath.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_rasterizer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_viewport.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/condition_variable"
#include "dev/silverware/git/sdk/input/agcontrollerbuttoncomponent.h"
#include "dev/silverware/git/sdk/input/agcontroller.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/atomic_int.h"
#include "dev/silverware/git/sdk/agstream.h"
#include "dev/silverware/git/sdk/system/aguser.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstddef"
#include "dev/silverware/git/sdk/agstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestagedatas.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_drawableimage.h"
#include "dev/silverware/git/sdk/system/agusermanager.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_math.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/exception"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/type_traits"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/tkndatas.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hal.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_buffer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglvec3.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/asyncjob.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/emitterformstate/emitterformstate.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglfigure.cpp"

std::piecewise_construct_t std::piecewise_construct; // 0x14089E386
void EmitterFormStateAnyModel::terminate(); // 0x140138C90
bool EmitterFormStateAnyModel::LoadFigureData(const char * filename); // 0x140138CF0
bool EmitterFormStateAnyModel::LoadFigureData(extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> * figure); // 0x140138F00
OGLVec3 EmitterFormStateAnyModel::GetGenerateParticlePos(OGLVec3 * SCALE, OGLVec3 * POS, long type, RandomNumbers * pRandomNumvers); // 0x140138FA0
OGLVec3 EmitterFormStateAnyModel::GetPosOfGenerationTypePoint(RandomNumbers * pRandomNumvers); // 0x1401390B0
OGLVec3 EmitterFormStateAnyModel::GetPosOfGenerationTypeEdge(RandomNumbers * pRandomNumvers); // 0x140139140
OGLVec3 EmitterFormStateAnyModel::GetPosOfGenerationTypeFace(RandomNumbers * pRandomNumvers); // 0x1401392F0//decompilation failure at 14089E386!
extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> *__fastcall extension::BasicFutureObject<OGLSecondary,void>::operator=(
        extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> *this,
        const extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> *other)
{
  extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body *m_ptr; // r8
  extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body *v4; // rcx

  this->m_isNoCache = other->m_isNoCache;
  m_ptr = other->m_body.m_ptr;
  if ( m_ptr )
    _InterlockedExchangeAdd64((volatile signed __int64 *)&m_ptr->m_refCount.m_ptr->m_sharedCount, 1ui64);
  v4 = this->m_body.m_ptr;
  this->m_body.m_ptr = m_ptr;
  if ( v4
    && _InterlockedExchangeAdd64(
         (volatile signed __int64 *)&v4->m_refCount.m_ptr->m_sharedCount,
         0xFFFFFFFFFFFFFFFFui64) == 1 )
  {
    ((void (__fastcall *)(extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body *, __int64))v4->~RefCountableWeakSupportBase)(
      v4,
      1i64);
  }
  return this;
}

OGLVec3 *__fastcall EmitterFormStateAnyModel::GetGenerateParticlePos(
        EmitterFormStateAnyModel *this,
        OGLVec3 *result,
        OGLVec3 *SCALE,
        OGLVec3 *POS,
        int type,
        RandomNumbers *pRandomNumvers)
{
  OGLFigure *Myval2; // rdx
  extension::AsyncContent<OGLFigure> *m_ptr; // rdi
  __int64 v11; // rax
  __int64 v12; // xmm0_8
  float v13; // eax
  float v14; // xmm1_4
  float v15; // xmm0_4
  char v17[12]; // [rsp+20h] [rbp-38h] BYREF
  char v18[12]; // [rsp+2Ch] [rbp-2Ch] BYREF
  char v19[32]; // [rsp+38h] [rbp-20h] BYREF

  Myval2 = 0i64;
  m_ptr = this->m_Figure.m_body.m_ptr->m_content.m_ptr;
  *(_QWORD *)&result->x = 0i64;
  result->z = 0.0;
  if ( m_ptr && !m_ptr->m_isDataReleased )
  {
    if ( (m_ptr->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
      extension::AsyncStatus::waitFor(&m_ptr->m_status, Step_Pending);
    Myval2 = m_ptr->m_data._Mypair._Myval2;
  }
  this->m_ModelData = Myval2;
  if ( Myval2 )
  {
    if ( type )
    {
      if ( type == 1 )
      {
        v11 = ((__int64 (__fastcall *)(EmitterFormStateAnyModel *, char *, RandomNumbers *, OGLVec3 *))this->GetPosOfGenerationTypeEdge)(
                this,
                v18,
                pRandomNumvers,
                POS);
      }
      else
      {
        if ( type != 2 )
        {
LABEL_14:
          v14 = SCALE->y * result->y;
          result->x = result->x * SCALE->x;
          v15 = SCALE->z * result->z;
          result->y = v14;
          result->z = v15;
          return result;
        }
        v11 = ((__int64 (__fastcall *)(EmitterFormStateAnyModel *, char *, RandomNumbers *, OGLVec3 *))this->GetPosOfGenerationTypeFace)(
                this,
                v17,
                pRandomNumvers,
                POS);
      }
    }
    else
    {
      v11 = ((__int64 (__fastcall *)(EmitterFormStateAnyModel *, char *, RandomNumbers *, OGLVec3 *))this->GetPosOfGenerationTypePoint)(
              this,
              v19,
              pRandomNumvers,
              POS);
    }
    v12 = *(_QWORD *)v11;
    v13 = *(float *)(v11 + 8);
    *(_QWORD *)&result->x = v12;
    result->z = v13;
    goto LABEL_14;
  }
  return result;
}

OGLVec3 *__fastcall EmitterFormStateAnyModel::GetPosOfGenerationTypeEdge(
        EmitterFormStateAnyModel *this,
        OGLVec3 *result,
        RandomNumbers *pRandomNumvers)
{
  int v5; // ebx
  int v6; // ebx
  unsigned int v7; // eax
  __int64 v8; // rdx
  __m128i v9; // xmm0
  OGLFigure *m_ModelData; // rax
  int v11; // ecx
  unsigned int *v12; // r8
  int v13; // edx
  signed int v14; // ebx
  signed int v15; // esi
  unsigned int *m_pusIndex; // rcx
  __int64 v17; // rdx
  unsigned int *v18; // rcx
  __m128i v19; // xmm4
  char *m_pfVertexBuffer; // r8
  __int64 v21; // rdx
  __int64 v22; // rcx
  OGLVec3 *v23; // rax
  float v24; // xmm2_4
  float v25; // xmm0_4
  float v26; // xmm1_4

  *(_QWORD *)&result->x = 0i64;
  result->z = 0.0;
  v5 = (signed int)this->m_ModelData->m_usIndexCount / 3;
  v6 = (int)(float)((float)v5 * (float)((float)((float)((float)rand() / 32767.0) * 0.99999899) + 0.0));
  v7 = rand();
  v8 = v6;
  v9 = _mm_cvtsi32_si128(v7);
  m_ModelData = this->m_ModelData;
  v11 = (int)(float)((float)((float)(_mm_cvtepi32_ps(v9).m128_f32[0] / 32767.0) * 3.0) + 0.0);
  if ( v11 )
  {
    if ( v11 == 1 )
    {
      m_pusIndex = m_ModelData->m_pusIndex;
      v17 = 3i64 * v6;
      v14 = m_pusIndex[3 * v6 + 1];
      v15 = m_pusIndex[v17 + 2];
    }
    else
    {
      v12 = m_ModelData->m_pusIndex;
      v13 = 3 * v6;
      v14 = v12[3 * v6 + 2];
      v15 = v12[v13];
    }
  }
  else
  {
    v18 = m_ModelData->m_pusIndex;
    v14 = v18[3 * v6];
    v15 = v18[3 * v8 + 1];
  }
  v19 = _mm_cvtsi32_si128(rand());
  m_pfVertexBuffer = (char *)this->m_ModelData->m_pfVertexBuffer;
  v21 = 136i64 * v14;
  v22 = 136i64 * v15;
  *(float *)v19.m128i_i32 = (float)(_mm_cvtepi32_ps(v19).m128_f32[0] / 32767.0) + 0.0;
  v23 = result;
  v24 = (float)(1.0 - *(float *)v19.m128i_i32) * *(float *)&m_pfVertexBuffer[v22 + 4];
  v25 = *(float *)v19.m128i_i32 * *(float *)&m_pfVertexBuffer[v21 + 4];
  result->x = (float)(*(float *)v19.m128i_i32 * *(float *)&m_pfVertexBuffer[v21])
            + (float)((float)(1.0 - *(float *)v19.m128i_i32) * *(float *)&m_pfVertexBuffer[v22]);
  v26 = *(float *)v19.m128i_i32;
  *(float *)v19.m128i_i32 = *(float *)v19.m128i_i32 * *(float *)&m_pfVertexBuffer[v21 + 8];
  result->y = v24 + v25;
  result->z = (float)((float)(v26 - 1.0) * *(float *)&m_pfVertexBuffer[v22 + 8]) - *(float *)v19.m128i_i32;
  return v23;
}

OGLVec3 *__fastcall EmitterFormStateAnyModel::GetPosOfGenerationTypeFace(
        EmitterFormStateAnyModel *this,
        OGLVec3 *result,
        RandomNumbers *pRandomNumvers)
{
  int v5; // ebx
  int v6; // edx
  unsigned int *m_pusIndex; // r8
  __int64 v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // rsi
  float v11; // xmm9_4
  float v12; // xmm8_4
  int v13; // eax
  float *m_pfVertexBuffer; // r9
  float v15; // xmm4_4
  float v16; // xmm0_4
  float v17; // xmm8_4
  float v18; // xmm4_4
  float v19; // xmm9_4
  float v20; // xmm1_4
  float v21; // xmm3_4
  OGLVec3 *v22; // rax
  float v23; // xmm4_4
  float v24; // xmm9_4

  *(_QWORD *)&result->x = 0i64;
  result->z = 0.0;
  v5 = (signed int)this->m_ModelData->m_usIndexCount / 3;
  v6 = 3 * (int)(float)((float)v5 * (float)((float)((float)((float)rand() / 32767.0) * 0.99999899) + 0.0));
  m_pusIndex = this->m_ModelData->m_pusIndex;
  v8 = (int)m_pusIndex[v6];
  v9 = (int)m_pusIndex[v6 + 1];
  v10 = (int)m_pusIndex[v6 + 2];
  v11 = (float)((float)rand() / 32767.0) + 0.0;
  v12 = (float)((float)rand() / 32767.0) + 0.0;
  v13 = rand();
  m_pfVertexBuffer = (float *)this->m_ModelData->m_pfVertexBuffer;
  v15 = (float)((float)v13 / 32767.0) + 0.0;
  v16 = (float)(v12 + v11) + v15;
  v17 = v12 / v16;
  v18 = v15 / v16;
  v19 = v11 / v16;
  v20 = v18 * m_pfVertexBuffer[34 * v10 + 1];
  v21 = (float)(v17 * m_pfVertexBuffer[34 * v9 + 1]) + (float)(v19 * m_pfVertexBuffer[34 * v8 + 1]);
  result->x = (float)((float)(v17 * m_pfVertexBuffer[34 * v9]) + (float)(v19 * m_pfVertexBuffer[34 * v8]))
            + (float)(v18 * m_pfVertexBuffer[34 * v10]);
  v22 = result;
  v23 = v18 * m_pfVertexBuffer[34 * v10 + 2];
  v24 = COERCE_FLOAT(COERCE_UNSIGNED_INT(v19 * m_pfVertexBuffer[34 * v8 + 2]) ^ _xmm)
      - (float)(v17 * m_pfVertexBuffer[34 * v9 + 2]);
  result->y = v21 + v20;
  result->z = v24 - v23;
  return v22;
}

OGLVec3 *__fastcall EmitterFormStateAnyModel::GetPosOfGenerationTypePoint(
        EmitterFormStateAnyModel *this,
        OGLVec3 *result,
        RandomNumbers *pRandomNumvers)
{
  signed int m_usVertexCoordCount; // ebx
  int v6; // eax
  _DWORD *m_pfVertexBuffer; // rdx
  float v8; // xmm0_4
  OGLVec3 *v9; // rax

  *(_QWORD *)&result->x = 0i64;
  result->z = 0.0;
  m_usVertexCoordCount = this->m_ModelData->m_usVertexCoordCount;
  v6 = rand();
  m_pfVertexBuffer = this->m_ModelData->m_pfVertexBuffer;
  LODWORD(v8) = m_pfVertexBuffer[34 * (int)(float)((float)((float)v6 / 32767.0) * (float)m_usVertexCoordCount) + 2] ^ _xmm;
  LODWORD(result->x) = m_pfVertexBuffer[34 * (int)(float)((float)((float)v6 / 32767.0) * (float)m_usVertexCoordCount)];
  LODWORD(result->y) = m_pfVertexBuffer[34 * (int)(float)((float)((float)v6 / 32767.0) * (float)m_usVertexCoordCount)
                                      + 1];
  v9 = result;
  result->z = v8;
  return v9;
}

bool __fastcall EmitterFormStateAnyModel::LoadFigureData(
        EmitterFormStateAnyModel *this,
        extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> *figure)
{
  extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body *m_ptr; // r8
  extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body *v4; // rcx
  extension::AsyncContent<OGLFigure> *v5; // rbx
  OGLFigure *Myval2; // rax

  this->m_Figure.m_isNoCache = figure->m_isNoCache;
  m_ptr = figure->m_body.m_ptr;
  if ( m_ptr )
  {
    figure = (extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> *)m_ptr->m_refCount.m_ptr;
    _InterlockedExchangeAdd64((volatile signed __int64 *)&figure[1], 1ui64);
  }
  v4 = this->m_Figure.m_body.m_ptr;
  this->m_Figure.m_body.m_ptr = m_ptr;
  if ( v4
    && _InterlockedExchangeAdd64(
         (volatile signed __int64 *)&v4->m_refCount.m_ptr->m_sharedCount,
         0xFFFFFFFFFFFFFFFFui64) == 1 )
  {
    ((void (__fastcall *)(extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body *, __int64))v4->~RefCountableWeakSupportBase)(
      v4,
      1i64);
  }
  v5 = this->m_Figure.m_body.m_ptr->m_content.m_ptr;
  if ( !v5 || v5->m_isDataReleased )
  {
    Myval2 = 0i64;
  }
  else
  {
    if ( (v5->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
      extension::AsyncStatus::waitFor(&v5->m_status, (extension::AsyncStatus::Step)figure);
    Myval2 = v5->m_data._Mypair._Myval2;
  }
  this->m_ModelData = Myval2;
  return Myval2 != 0i64;
}

bool __fastcall EmitterFormStateAnyModel::LoadFigureData(EmitterFormStateAnyModel *this, const char *filename)
{
  OGLFigure *m_ModelData; // rbp
  OGLFigure *Myval2; // rbx
  unsigned __int64 v6; // r8
  extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::AssetCache *v7; // rcx
  extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body *m_ptr; // r8
  extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body *v9; // rdx
  extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body *v10; // rcx
  char *Ptr; // rcx
  char *v12; // rax
  extension::AsyncContent<OGLFigure> *v13; // rsi
  extension::RefCountablePtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body> v15; // [rsp+28h] [rbp-80h] BYREF
  std::string v16; // [rsp+30h] [rbp-78h] BYREF
  __int64 v17; // [rsp+50h] [rbp-58h]
  std::string _Right; // [rsp+60h] [rbp-48h] BYREF

  v17 = -2i64;
  m_ModelData = this->m_ModelData;
  Myval2 = 0i64;
  if ( m_ModelData )
  {
    OGLFigure::finalize(this->m_ModelData, (unsigned __int64)filename);
    operator delete(m_ModelData, 0x108ui64);
    this->m_ModelData = 0i64;
  }
  _Right._Mypair._Myval2._Myres = 15i64;
  _Right._Mypair._Myval2._Mysize = 0i64;
  _Right._Mypair._Myval2._Bx._Buf[0] = 0;
  if ( *filename )
  {
    v6 = -1i64;
    do
      ++v6;
    while ( filename[v6] );
  }
  else
  {
    v6 = 0i64;
  }
  std::string::assign(&_Right, filename, v6);
  v16._Mypair._Myval2._Myres = 15i64;
  v16._Mypair._Myval2._Mysize = 0i64;
  v16._Mypair._Myval2._Bx._Buf[0] = 0;
  std::string::assign(&v16, &_Right, 0i64, 0xFFFFFFFFFFFFFFFFui64);
  extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::AssetCache::getCachedOrLoadStart(
    v7,
    &v15,
    &v16,
    0i64);
  this->m_Figure.m_isNoCache = 0;
  m_ptr = v15.m_ptr;
  v9 = v15.m_ptr;
  if ( v15.m_ptr )
  {
    _InterlockedExchangeAdd64((volatile signed __int64 *)&v15.m_ptr->m_refCount.m_ptr->m_sharedCount, 1ui64);
    m_ptr = v15.m_ptr;
  }
  v10 = this->m_Figure.m_body.m_ptr;
  this->m_Figure.m_body.m_ptr = v9;
  if ( v10 )
  {
    v9 = (extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body *)_InterlockedExchangeAdd64(
                                                                                          (volatile signed __int64 *)&v10->m_refCount.m_ptr->m_sharedCount,
                                                                                          0xFFFFFFFFFFFFFFFFui64);
    if ( v9 == (extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body *)1 )
      ((void (__fastcall *)(extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body *, __int64))v10->~RefCountableWeakSupportBase)(
        v10,
        1i64);
    m_ptr = v15.m_ptr;
  }
  if ( m_ptr
    && _InterlockedExchangeAdd64(
         (volatile signed __int64 *)&m_ptr->m_refCount.m_ptr->m_sharedCount,
         0xFFFFFFFFFFFFFFFFui64) == 1 )
  {
    ((void (__fastcall *)(extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body *, __int64))m_ptr->~RefCountableWeakSupportBase)(
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
      v12 = (char *)*((_QWORD *)_Right._Mypair._Myval2._Bx._Ptr - 1);
      if ( v12 >= _Right._Mypair._Myval2._Bx._Ptr )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(_Right._Mypair._Myval2._Bx._Ptr - v12) < (char *)8 )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(_Right._Mypair._Myval2._Bx._Ptr - v12) > (char *)0x27 )
        invalid_parameter_noinfo_noreturn();
      Ptr = (char *)*((_QWORD *)_Right._Mypair._Myval2._Bx._Ptr - 1);
    }
    operator delete(Ptr);
  }
  v13 = this->m_Figure.m_body.m_ptr->m_content.m_ptr;
  if ( v13 && !v13->m_isDataReleased )
  {
    if ( (v13->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
      extension::AsyncStatus::waitFor(&v13->m_status, (extension::AsyncStatus::Step)v9);
    Myval2 = v13->m_data._Mypair._Myval2;
  }
  this->m_ModelData = Myval2;
  return Myval2 != 0i64;
}

void __fastcall EmitterFormStateAnyModel::terminate(EmitterFormStateAnyModel *this, unsigned __int64 a2)
{
  OGLFigure *m_ModelData; // rcx
  unsigned __int64 v4; // rdx
  OGLFigure *v5; // rdi

  m_ModelData = this->m_ModelData;
  if ( m_ModelData )
  {
    OGLFigure::finalize(m_ModelData, a2);
    v5 = this->m_ModelData;
    if ( v5 )
    {
      OGLFigure::finalize(this->m_ModelData, v4);
      operator delete(v5, 0x108ui64);
      this->m_ModelData = 0i64;
    }
  }
}

