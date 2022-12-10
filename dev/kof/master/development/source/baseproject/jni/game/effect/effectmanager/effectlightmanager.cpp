#include "program files (x86)/microsoft visual studio 14.0/vc/include/deque"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/vec_aos.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/cpusequencedataformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloatmp.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapemeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/jpeg_imagefile.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleloading.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/shot/actorshot.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actorchara.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treetext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefileutil.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/input/imesystem.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/commandcheck.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_docview.h"
#include "dev/silverware/git/sdk/util/agservice.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/restrictringbuffer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_range.h"
#include "dev/silverware/git/sdk/agthreadpool.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglshader.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/materialshowcontrol.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/mat_aos.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_hash.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/syncmenuimage.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/jobmanager.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_ps4modelroom.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/moviedatadefine.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix4x4.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charahitrectformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixpool.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thr/xthread"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shader.h"
#include "program files (x86)/windows kits/8.1/include/shared/guiddef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_sgmlparser.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_context.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_constants.h"
#include "program files (x86)/windows kits/8.1/include/shared/stralign.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessgen.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/functional"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treeshape.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessellator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestageresourcecontainer.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestageshader.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actor.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/matrix4unaligned.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charadataunify.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/quat_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_new.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaattackdataformat.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/resourcemanager.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charadamagesettingformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitivebundle.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/algorithm"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treecachenode.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treenode.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_loader.h"
#include "dev/silverware/git/sdk/3rdparty/steam/isteamhtmlsurface.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/string"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cacheeffect.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_system.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphfitter.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_player.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exthread.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/randommt.h"
#include "dev/kof/master/development/source/ps4project/baseproject/pcutil/pcdummy.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/bilinkable.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_types.h"
#include "dev/silverware/git/sdk/agreferencedobjectinl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_resource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/silverware/git/sdk/agpointer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_stroker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_sse.h"
#include "dev/silverware/git/sdk/agreferencedobject.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/dds_imagefile.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_types.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thread"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "program files (x86)/windows kits/8.1/include/um/winnt.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/memory"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/combomissiondataformat.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/sounddata.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/soundgroupdataformat.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/effect.h"
#include "dev/kof/master/development/source/baseproject/jni/game/network/playtogether.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textmeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "program files (x86)/windows kits/8.1/include/shared/basetsd.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "dev/kof/master/development/source/baseproject/jni/game/appmain.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphparam.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmodel.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_bank.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcache.h"
#include "dev/silverware/git/sdk/agdisplay.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/atomic"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcacheconfig.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/texstring.h"
#include "dev/silverware/git/sdk/agvector4.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hairliner.h"
#include "dev/silverware/git/sdk/agvector3.h"
#include "dev/silverware/git/sdk/agthread.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_filterdesc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_styledtext.h"
#include "dev/silverware/git/sdk/agmutex.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/tuple"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix3x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_core.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_queue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/libcommon.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector2unaligned.h"
#include "dev/silverware/git/sdk/agscopedlock.h"
#include "dev/silverware/git/sdk/agreferenceinl.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/shaderfxhelper.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_fontmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitive.h"
#include "dev/silverware/git/sdk/agconditionvariable.inl"
#include "dev/kof/master/development/source/baseproject/jni/game/player/effect/actoreffect.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actorobject.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocaddr.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xfacet"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_radixtree.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/savedata.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdatalistmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_twips.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actoroption.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdata/effectdata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_containers.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_functions.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/ios"
#include "dev/kof/master/development/source/baseproject/jni/game/check/cameracheck.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_wwhelper.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocnum"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/chartdata.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steam_api_internal.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_exception.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/freecameracheck.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xiosbase"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglbone.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocale"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleonline.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/array"
#include "dev/silverware/git/sdk/agrectangle.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/time.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_typeinfo.h"
#include "dev/silverware/git/sdk/agreferencecount.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/savedatadefine.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/matchingsystem.h"
#include "program files (x86)/windows kits/8.1/include/um/winuser.h"
#include "dev/silverware/git/sdk/memory/agallocators.h"
#include "dev/kof/master/development/source/baseproject/jni/game/cpuseq/battlecpu.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdata/effectappdata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_vertex.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steam_api.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "dev/kof/master/development/source/baseproject/jni/game/cpuseq/sequencecontroller.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/fontprovider/render_fontproviderhud.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_wstring.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/refcountable.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/mutex"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/map"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/chrono"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtree"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_prefightfaceoff.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/translate_table.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "dev/silverware/git/sdk/input/agcontrollercomponent.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/shared_lua_context.h"
#include "dev/kof/master/development/source/baseproject/jni/game/system/battlesysteminfo.h"
#include "dev/silverware/git/sdk/agmovieplayer.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmirror.h"
#include "dev/silverware/git/sdk/util/agdelegate.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/boolinvec.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/list"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/hidpad/hidpadsystem.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/combomissionjudge.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threadcheck.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/system_error"
#include "dev/kof/master/development/source/baseproject/jni/game/util/soundutil.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textlayout.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_image.h"
#include "dev/kof/master/development/source/baseproject/jni/game/network/chkdiscononlinesv.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "dev/silverware/git/sdk/system/agsysteminfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "dev/silverware/git/sdk/util/agservicecommand.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector3unaligned.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaprojectdataformat.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/mediamanager.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xxatomic"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/stdexcept"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstring"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charabasestatusformat.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_movie.h"
#include "dev/silverware/git/sdk/3rdparty/steam/matchmakingtypes.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/inputkeyrecord.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_operation.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/bitset"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/audiopresenter.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/unordered_map"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_hashkey.h"
#include "dev/silverware/git/sdk/util/agdebugchannels.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlecall/battlecall.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xhash"
#include "dev/silverware/git/sdk/util/agperformancecounter.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_debug.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_screentoworld.h"
#include "dev/silverware/git/sdk/agclock.h"
#include "program files (x86)/windows kits/8.1/include/um/winbase.h"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/bodypush.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/debug/logging.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/vec_aos.h"
#include "dev/kof/master/development/source/baseproject/jni/game/network/netmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_strokeraa.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_scale9grid.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/heapmemory.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/boolinvec.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraystaticbuff.h"
#include "dev/kof/master/development/source/baseproject/jni/game/network/leaderboard.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cxform.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/mutex.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/limits"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_manager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/vectormath_aos.h"
#include "dev/silverware/git/sdk/agcondition.h"
#include "dev/silverware/git/sdk/platforms/pc/system/agpcsysteminfo.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exlockable.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/titlestoragesystem.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/globalheapmemory.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/fixmemory.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocinfo"
#include "dev/kof/master/development/source/baseproject/jni/game/player/weapon/actorweapon.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogleffect.h"
#include "dev/silverware/git/sdk/agreferencecountinl.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xutility"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/utility"
#include "dev/kof/master/development/source/baseproject/jni/game/system/battlecontroller.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_event.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/mediasound.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/png_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_keycodes.h"
#include "dev/silverware/git/sdk/filesystem/agfile.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/iosfwd"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actionsystem.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/future_asset.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "dev/silverware/git/sdk/filesystem/agpath.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaactiondataformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshkey.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixstate.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_gradients.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/asyncjob.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogllight.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestage.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charafilebase.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_rasterizer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_viewport.h"
#include "dev/silverware/git/sdk/filesystem/agmount.h"
#include "dev/silverware/git/sdk/input/agsdlmappingparser.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/tkndata.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/atomic_int.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglcurve.h"
#include "dev/silverware/git/sdk/filesystem/agdirectory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_drawableimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hal.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_buffer.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/cameramotionpreviewsettings.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/stageprojectdata.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/commanddataformat.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/rapper/graphicsopt.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_characterdef.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/mat_aos.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglsprite.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestagedatas.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steamclientpublic.h"
#include "dev/kof/master/development/source/ps4project/baseproject/pcutil/pccontrolsmanager.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/tkndatas.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/operationmapper.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglrender.h"
#include "dev/silverware/git/sdk/input/aginputmanager.h"
#include "dev/silverware/git/sdk/agsingleton.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/tween.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filters.h"
#include "dev/silverware/git/sdk/aghash.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector4unaligned.h"
#include "dev/silverware/git/sdk/agmutex.inl"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filterparams.h"
#include "dev/silverware/git/sdk/agstringutils.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglfog.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic0.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/asynccharafileload.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_font.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/math.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/variableheapmemorybase.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/vecidx_aos.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessdefs.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/floatinvec.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatapacked.h"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/hitrectcollection.h"
#include "dev/silverware/git/sdk/agpointerinl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_pathdatapacker.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectmanager/effectlightmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_linebuffer.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_missiondataloading.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/trainingsetting.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/combomissionattackeventlistener.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charamaterialsettingformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_highlight.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/particledata.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/fix32.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloat.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectcommon.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/quat_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vector"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actorcharabase.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_profiler.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlehud.h"
#include "dev/kof/master/development/source/baseproject/jni/game/define/charabonedefine.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_states.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/floatinvec.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battleeventhandler.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/colorholder.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/tga_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_statebag.h"
#include "dev/silverware/git/sdk/agcondition.inl"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory0"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/damagesetting.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exwaitcondition.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/physicalheapmemory.h"
#include "dev/silverware/git/sdk/agsemaphore.h"
#include "dev/silverware/git/sdk/agmemorystream.h"
#include "dev/silverware/git/sdk/agvector2.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/battleplayerinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_simplemeshcache.h"
#include "dev/silverware/git/sdk/agsemaphore.inl"
#include "dev/silverware/git/sdk/agconditionvariable.h"
#include "dev/silverware/git/sdk/agmemorypool.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_vec64.h"
#include "dev/silverware/git/sdk/agmath.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/fontprovider/render_fontproviderwinapi.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/condition_variable"
#include "dev/silverware/git/sdk/input/agcontrollerbuttoncomponent.h"
#include "dev/silverware/git/sdk/input/agcontroller.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/easingnumber.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/errorchecker.h"
#include "dev/silverware/git/sdk/agstream.h"
#include "dev/silverware/git/sdk/system/aguser.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstddef"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actionblackout.h"
#include "dev/silverware/git/sdk/agstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/silverware/git/sdk/system/agusermanager.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_math.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/exception"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/type_traits"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleonlinewatching.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_bundle.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/oglinheritance/ogleffectvec4.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/oglinheritance/ogleffectquat.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/oglinheritance/ogleffectmatrix.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogllight.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglvec3.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/oglinheritance/ogleffectvec3.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_ps4modelroom.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/asyncjob.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/future_asset.cpp"

class sortLightAgeLess
{
public:
	bool operator()(const ParticleData &, const ParticleData &);
};
std::piecewise_construct_t std::piecewise_construct; // 0x14089E37D
class sortLightAgeLessPlayerNumLess
{
public:
	bool operator()(const ParticleData &, const ParticleData &);
};
class sortLightAgeLessPlayerNumGreater
{
public:
	bool operator()(const ParticleData &, const ParticleData &);
};
class sortLightAgeLessPlayerNum1P
{
public:
	bool operator()(const ParticleData &, const ParticleData &);
};
class sortLightAgeLessPlayerNum2P
{
public:
	bool operator()(const ParticleData &, const ParticleData &);
};
class sortLightOfOwn1P
{
public:
	bool operator()(const ParticleData &, const ParticleData &);
};
class sortLightOfOwn2P
{
public:
	bool operator()(const ParticleData &, const ParticleData &);
};
EffectLightManager::EffectLightManager(); // 0x14012EB60
ParticleData::ParticleData(const ParticleData & __that); // 0x14012FCA0
EffectLightManager::~EffectLightManager(); // 0x14012EC70
ParticleData & ParticleData::operator=(const ParticleData & __that); // 0x140131AE0
void EffectLightManager::initialize(); // 0x14012ECF0
void EffectLightManager::update(); // 0x14012EDF0
void EffectLightManager::selectOwnLight(long charNum); // 0x14012EE90
void EffectLightManager::setLightData(ParticleData * setLight, long num); // 0x14012EFD0
void EffectLightManager::setModelRoomLight(); // 0x14012F170//decompilation failure at 14089E37D!
void __fastcall std::_Guess_median_unchecked<ParticleData *,sortLightOfOwn1P>(
        ParticleData *_First,
        ParticleData *_Mid,
        ParticleData *_Last,
        sortLightOfOwn1P *_Pred)
{
  sortLightOfOwn1P *v5; // r9
  signed __int64 v7; // rdx
  __int64 v8; // rax
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rsi
  ParticleData *v11; // rbp
  sortLightOfOwn1P *v12; // r9
  sortLightOfOwn1P *v13; // r9
  sortLightOfOwn1P *v14; // r9

  v5 = (sortLightOfOwn1P *)((char *)_Last - (char *)_First);
  v7 = _Last - _First;
  if ( v7 <= 40 )
  {
    std::_Med3_unchecked<ParticleData *,sortLightOfOwn1P>(_First, _Mid, _Last, v5);
  }
  else
  {
    v8 = (v7 + 1) / 8;
    v9 = 1696 * v8;
    v10 = 3392 * v8;
    v11 = &_First[v8];
    std::_Med3_unchecked<ParticleData *,sortLightOfOwn1P>(_First, v11, &_First[2 * v8], v5);
    std::_Med3_unchecked<ParticleData *,sortLightOfOwn1P>(
      &_Mid[v9 / 0xFFFFFFFFFFFFF960ui64],
      _Mid,
      &_Mid[v9 / 0x6A0],
      v12);
    std::_Med3_unchecked<ParticleData *,sortLightOfOwn1P>(
      &_Last[v10 / 0xFFFFFFFFFFFFF960ui64],
      &_Last[v9 / 0xFFFFFFFFFFFFF960ui64],
      _Last,
      v13);
    std::_Med3_unchecked<ParticleData *,sortLightOfOwn1P>(v11, _Mid, &_Last[v9 / 0xFFFFFFFFFFFFF960ui64], v14);
  }
}

void __fastcall std::_Guess_median_unchecked<ParticleData *,sortLightOfOwn2P>(
        ParticleData *_First,
        ParticleData *_Mid,
        ParticleData *_Last,
        sortLightOfOwn2P *_Pred)
{
  sortLightOfOwn2P *v5; // r9
  signed __int64 v7; // rdx
  __int64 v8; // rax
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rsi
  ParticleData *v11; // rbp
  sortLightOfOwn2P *v12; // r9
  sortLightOfOwn2P *v13; // r9
  sortLightOfOwn2P *v14; // r9

  v5 = (sortLightOfOwn2P *)((char *)_Last - (char *)_First);
  v7 = _Last - _First;
  if ( v7 <= 40 )
  {
    std::_Med3_unchecked<ParticleData *,sortLightOfOwn2P>(_First, _Mid, _Last, v5);
  }
  else
  {
    v8 = (v7 + 1) / 8;
    v9 = 1696 * v8;
    v10 = 3392 * v8;
    v11 = &_First[v8];
    std::_Med3_unchecked<ParticleData *,sortLightOfOwn2P>(_First, v11, &_First[2 * v8], v5);
    std::_Med3_unchecked<ParticleData *,sortLightOfOwn2P>(
      &_Mid[v9 / 0xFFFFFFFFFFFFF960ui64],
      _Mid,
      &_Mid[v9 / 0x6A0],
      v12);
    std::_Med3_unchecked<ParticleData *,sortLightOfOwn2P>(
      &_Last[v10 / 0xFFFFFFFFFFFFF960ui64],
      &_Last[v9 / 0xFFFFFFFFFFFFF960ui64],
      _Last,
      v13);
    std::_Med3_unchecked<ParticleData *,sortLightOfOwn2P>(v11, _Mid, &_Last[v9 / 0xFFFFFFFFFFFFF960ui64], v14);
  }
}

void __fastcall std::_Insertion_sort_unchecked<ParticleData *,sortLightOfOwn1P>(
        ParticleData *_First,
        ParticleData *_Last,
        sortLightOfOwn1P *_Pred)
{
  ParticleData *v5; // rsi
  ParticleData *v6; // rbp
  int playerNum; // edx
  float age; // xmm1_4
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  ParticleData *i; // rbx
  ParticleData *v13; // rcx
  const ParticleData *v14; // rbx
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  ParticleData __that; // [rsp+30h] [rbp-6C8h] BYREF

  if ( _First != _Last )
  {
    v5 = _First + 1;
    if ( &_First[1] != _Last )
    {
      while ( 1 )
      {
        v6 = v5;
        ParticleData::ParticleData(&__that, v5);
        playerNum = __that.playerNum;
        age = __that.age;
        if ( (__that.playerNum & 0xFFFFFFFD) != 0 )
          goto LABEL_8;
        v9 = _First->playerNum;
        if ( v9 )
        {
          v10 = v9 - 1;
          if ( !v10 )
            goto LABEL_10;
          v11 = v10 - 1;
          if ( v11 )
            break;
        }
LABEL_9:
        if ( _First->age <= __that.age )
        {
LABEL_13:
          v14 = v5;
          while ( 1 )
          {
            --v14;
            if ( (playerNum & 0xFFFFFFFD) == 0 )
            {
              v15 = v14->playerNum;
              if ( !v15 )
                goto LABEL_20;
              v16 = v15 - 1;
              if ( !v16 )
                goto LABEL_21;
              v17 = v16 - 1;
              if ( !v17 )
                goto LABEL_20;
              if ( v17 == 1 )
                goto LABEL_21;
            }
            if ( (v14->playerNum & 0xFFFFFFFD) == 0 )
              goto LABEL_22;
LABEL_20:
            if ( v14->age <= age )
            {
LABEL_22:
              v13 = v6;
              goto LABEL_23;
            }
LABEL_21:
            ParticleData::operator=(v6, v14);
            v6 = (ParticleData *)v14;
            age = __that.age;
            playerNum = __that.playerNum;
          }
        }
LABEL_10:
        for ( i = v5; i != _First; ParticleData::operator=(i + 1, i) )
          --i;
        v13 = _First;
LABEL_23:
        ParticleData::operator=(v13, &__that);
        ParticleData::~ParticleData(&__that);
        if ( ++v5 == _Last )
          return;
      }
      if ( v11 == 1 )
        goto LABEL_10;
LABEL_8:
      if ( (_First->playerNum & 0xFFFFFFFD) == 0 )
        goto LABEL_13;
      goto LABEL_9;
    }
  }
}

void __fastcall std::_Insertion_sort_unchecked<ParticleData *,sortLightOfOwn2P>(
        ParticleData *_First,
        ParticleData *_Last,
        sortLightOfOwn2P *_Pred)
{
  ParticleData *v5; // rsi
  ParticleData *v6; // rbp
  int playerNum; // edx
  float age; // xmm1_4
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  ParticleData *i; // rbx
  ParticleData *v13; // rcx
  const ParticleData *v14; // rbx
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  ParticleData __that; // [rsp+30h] [rbp-6C8h] BYREF

  if ( _First != _Last )
  {
    v5 = _First + 1;
    if ( &_First[1] != _Last )
    {
      while ( 1 )
      {
        v6 = v5;
        ParticleData::ParticleData(&__that, v5);
        playerNum = __that.playerNum;
        age = __that.age;
        if ( ((__that.playerNum - 1) & 0xFFFFFFFD) != 0 )
          goto LABEL_8;
        v9 = _First->playerNum;
        if ( !v9 )
          goto LABEL_10;
        v10 = v9 - 1;
        if ( v10 )
        {
          v11 = v10 - 1;
          if ( !v11 )
            goto LABEL_10;
          if ( v11 != 1 )
          {
LABEL_8:
            if ( ((_First->playerNum - 1) & 0xFFFFFFFD) == 0 )
              break;
          }
        }
        if ( _First->age <= __that.age )
          break;
LABEL_10:
        for ( i = v5; i != _First; ParticleData::operator=(i + 1, i) )
          --i;
        v13 = _First;
LABEL_23:
        ParticleData::operator=(v13, &__that);
        ParticleData::~ParticleData(&__that);
        if ( ++v5 == _Last )
          return;
      }
      v14 = v5;
      while ( 1 )
      {
        --v14;
        if ( ((playerNum - 1) & 0xFFFFFFFD) != 0 )
          goto LABEL_19;
        v15 = v14->playerNum;
        if ( !v15 )
          goto LABEL_21;
        v16 = v15 - 1;
        if ( v16 )
        {
          v17 = v16 - 1;
          if ( !v17 )
            goto LABEL_21;
          if ( v17 != 1 )
          {
LABEL_19:
            if ( ((v14->playerNum - 1) & 0xFFFFFFFD) == 0 )
              goto LABEL_22;
          }
        }
        if ( v14->age <= age )
        {
LABEL_22:
          v13 = v6;
          goto LABEL_23;
        }
LABEL_21:
        ParticleData::operator=(v6, v14);
        v6 = (ParticleData *)v14;
        age = __that.age;
        playerNum = __that.playerNum;
      }
    }
  }
}

void __fastcall std::_Make_heap_unchecked<ParticleData *,sortLightOfOwn1P>(
        ParticleData *_First,
        ParticleData *_Last,
        sortLightOfOwn1P *_Pred)
{
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rbx
  const ParticleData *v7; // rdi
  sortLightOfOwn1P *v8; // [rsp+20h] [rbp-6E8h]
  ParticleData _Val; // [rsp+40h] [rbp-6C8h] BYREF

  v4 = (unsigned __int128)(((char *)_Last - (char *)_First) * (__int128)0x4D4873ECADE304D5i64) >> 64;
  v5 = ((unsigned __int64)v4 >> 63) + (v4 >> 9);
  if ( v5 >= 2 )
  {
    v6 = v5 / 2;
    if ( v5 / 2 > 0 )
    {
      v7 = &_First[v6];
      do
      {
        --v6;
        ParticleData::ParticleData(&_Val, --v7);
        std::_Pop_heap_hole_by_index<ParticleData *,__int64,ParticleData,sortLightOfOwn1P>(_First, v6, v5, &_Val, v8);
        ParticleData::~ParticleData(&_Val);
      }
      while ( v6 > 0 );
    }
  }
}

void __fastcall std::_Make_heap_unchecked<ParticleData *,sortLightOfOwn2P>(
        ParticleData *_First,
        ParticleData *_Last,
        sortLightOfOwn2P *_Pred)
{
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rbx
  const ParticleData *v7; // rdi
  sortLightOfOwn2P *v8; // [rsp+20h] [rbp-6E8h]
  ParticleData _Val; // [rsp+40h] [rbp-6C8h] BYREF

  v4 = (unsigned __int128)(((char *)_Last - (char *)_First) * (__int128)0x4D4873ECADE304D5i64) >> 64;
  v5 = ((unsigned __int64)v4 >> 63) + (v4 >> 9);
  if ( v5 >= 2 )
  {
    v6 = v5 / 2;
    if ( v5 / 2 > 0 )
    {
      v7 = &_First[v6];
      do
      {
        --v6;
        ParticleData::ParticleData(&_Val, --v7);
        std::_Pop_heap_hole_by_index<ParticleData *,__int64,ParticleData,sortLightOfOwn2P>(_First, v6, v5, &_Val, v8);
        ParticleData::~ParticleData(&_Val);
      }
      while ( v6 > 0 );
    }
  }
}

void __fastcall std::_Med3_unchecked<ParticleData *,sortLightOfOwn1P>(
        ParticleData *_First,
        ParticleData *_Mid,
        ParticleData *_Last,
        sortLightOfOwn1P *_Pred)
{
  int playerNum; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx

  if ( (_Mid->playerNum & 0xFFFFFFFD) != 0 )
  {
LABEL_6:
    if ( (_First->playerNum & 0xFFFFFFFD) == 0 )
      goto LABEL_9;
    goto LABEL_7;
  }
  playerNum = _First->playerNum;
  if ( playerNum )
  {
    v8 = playerNum - 1;
    if ( !v8 )
      goto LABEL_8;
    v9 = v8 - 1;
    if ( v9 )
    {
      if ( v9 != 1 )
        goto LABEL_6;
LABEL_8:
      std::swap<ParticleData,void>(_Mid, _First);
      goto LABEL_9;
    }
  }
LABEL_7:
  if ( _First->age > _Mid->age )
    goto LABEL_8;
LABEL_9:
  if ( (_Last->playerNum & 0xFFFFFFFD) != 0 )
    goto LABEL_14;
  v10 = _Mid->playerNum;
  if ( !v10 )
    goto LABEL_15;
  v11 = v10 - 1;
  if ( v11 )
  {
    v12 = v11 - 1;
    if ( !v12 )
      goto LABEL_15;
    if ( v12 != 1 )
    {
LABEL_14:
      if ( (_Mid->playerNum & 0xFFFFFFFD) == 0 )
        return;
LABEL_15:
      if ( _Mid->age <= _Last->age )
        return;
    }
  }
  std::swap<ParticleData,void>(_Last, _Mid);
  if ( (_Mid->playerNum & 0xFFFFFFFD) != 0 )
    goto LABEL_21;
  v13 = _First->playerNum;
  if ( !v13 )
    goto LABEL_22;
  v14 = v13 - 1;
  if ( v14 )
  {
    v15 = v14 - 1;
    if ( !v15 )
      goto LABEL_22;
    if ( v15 != 1 )
    {
LABEL_21:
      if ( (_First->playerNum & 0xFFFFFFFD) == 0 )
        return;
LABEL_22:
      if ( _First->age <= _Mid->age )
        return;
    }
  }
  std::swap<ParticleData,void>(_Mid, _First);
}

void __fastcall std::_Med3_unchecked<ParticleData *,sortLightOfOwn2P>(
        ParticleData *_First,
        ParticleData *_Mid,
        ParticleData *_Last,
        sortLightOfOwn2P *_Pred)
{
  int playerNum; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx

  if ( ((_Mid->playerNum - 1) & 0xFFFFFFFD) != 0 )
  {
LABEL_6:
    if ( ((_First->playerNum - 1) & 0xFFFFFFFD) == 0 )
      goto LABEL_9;
    goto LABEL_7;
  }
  playerNum = _First->playerNum;
  if ( !playerNum )
    goto LABEL_8;
  v8 = playerNum - 1;
  if ( !v8 )
    goto LABEL_7;
  v9 = v8 - 1;
  if ( !v9 )
  {
LABEL_8:
    std::swap<ParticleData,void>(_Mid, _First);
    goto LABEL_9;
  }
  if ( v9 != 1 )
    goto LABEL_6;
LABEL_7:
  if ( _First->age > _Mid->age )
    goto LABEL_8;
LABEL_9:
  if ( ((_Last->playerNum - 1) & 0xFFFFFFFD) != 0 )
    goto LABEL_14;
  v10 = _Mid->playerNum;
  if ( !v10 )
    goto LABEL_16;
  v11 = v10 - 1;
  if ( v11 )
  {
    v12 = v11 - 1;
    if ( !v12 )
      goto LABEL_16;
    if ( v12 != 1 )
    {
LABEL_14:
      if ( ((_Mid->playerNum - 1) & 0xFFFFFFFD) == 0 )
        return;
    }
  }
  if ( _Mid->age <= _Last->age )
    return;
LABEL_16:
  std::swap<ParticleData,void>(_Last, _Mid);
  if ( ((_Mid->playerNum - 1) & 0xFFFFFFFD) != 0 )
  {
LABEL_21:
    if ( ((_First->playerNum - 1) & 0xFFFFFFFD) == 0 )
      return;
LABEL_22:
    if ( _First->age <= _Mid->age )
      return;
    goto LABEL_23;
  }
  v13 = _First->playerNum;
  if ( v13 )
  {
    v14 = v13 - 1;
    if ( !v14 )
      goto LABEL_22;
    v15 = v14 - 1;
    if ( v15 )
    {
      if ( v15 == 1 )
        goto LABEL_22;
      goto LABEL_21;
    }
  }
LABEL_23:
  std::swap<ParticleData,void>(_Mid, _First);
}

std::pair<ParticleData *,ParticleData *> *__fastcall std::_Partition_by_median_guess_unchecked<ParticleData *,sortLightOfOwn1P>(
        std::pair<ParticleData *,ParticleData *> *result,
        ParticleData *_First,
        ParticleData *_Last,
        sortLightOfOwn1P *_Pred)
{
  unsigned __int64 v6; // rdx
  ParticleData *v7; // rsi
  ParticleData *v8; // r15
  ParticleData *v9; // r10
  char *p_age; // rcx
  int v11; // er9
  int v12; // er8
  int playerNum; // er8
  int v14; // edx
  ParticleData *v15; // r14
  ParticleData *v16; // r13
  ParticleData *v17; // rbx
  int v18; // er8
  int v19; // edx
  ParticleData *v20; // rax
  bool v21; // zf
  float *v22; // rbx
  int v23; // er8
  int v24; // edx
  ParticleData *v25; // rdi
  ParticleData *v26; // rbx
  std::pair<ParticleData *,ParticleData *> *v27; // rax
  ParticleData __that; // [rsp+40h] [rbp-C0h] BYREF

  v6 = (__int64)((unsigned __int128)(((char *)_Last - (char *)_First) * (__int128)0x4D4873ECADE304D5i64) >> 64) >> 10;
  v7 = &_First[(v6 >> 63) + v6];
  std::_Guess_median_unchecked<ParticleData *,sortLightOfOwn1P>(_First, v7, _Last - 1, (sortLightOfOwn1P *)_First);
  v8 = v7 + 1;
  v9 = _First;
  if ( _First < v7 )
  {
    p_age = (char *)&v7[-1].age;
    do
    {
      v11 = *((_DWORD *)p_age - 3);
      if ( (v11 & 0xFFFFFFFD) == 0 )
      {
        v12 = *((_DWORD *)p_age + 421);
        switch ( v12 )
        {
          case 0:
            goto LABEL_9;
          case 1:
            goto LABEL_18;
          case 2:
LABEL_9:
            if ( *((float *)p_age + 424) > *(float *)p_age )
              goto LABEL_18;
            if ( (v12 & 0xFFFFFFFD) != 0 )
              goto LABEL_15;
            goto LABEL_11;
          case 3:
            goto LABEL_18;
        }
      }
      v12 = *((_DWORD *)p_age + 421);
      if ( (v12 & 0xFFFFFFFD) != 0 )
        goto LABEL_9;
LABEL_11:
      switch ( v11 )
      {
        case 0:
          goto LABEL_16;
        case 1:
          goto LABEL_18;
        case 2:
LABEL_16:
          if ( *(float *)p_age > *((float *)p_age + 424) )
            goto LABEL_18;
          goto LABEL_17;
        case 3:
          goto LABEL_18;
      }
LABEL_15:
      if ( (v11 & 0xFFFFFFFD) != 0 )
        goto LABEL_16;
LABEL_17:
      --v7;
      p_age -= 1696;
    }
    while ( _First < v7 );
  }
LABEL_18:
  while ( v8 < _Last )
  {
    playerNum = v8->playerNum;
    if ( (playerNum & 0xFFFFFFFD) == 0 )
    {
      v14 = v7->playerNum;
      switch ( v14 )
      {
        case 0:
          goto LABEL_25;
        case 1:
          goto LABEL_34;
        case 2:
LABEL_25:
          if ( v7->age > v8->age )
            goto LABEL_34;
          if ( (v14 & 0xFFFFFFFD) != 0 )
            goto LABEL_31;
          goto LABEL_27;
        case 3:
          goto LABEL_34;
      }
    }
    v14 = v7->playerNum;
    if ( (v14 & 0xFFFFFFFD) != 0 )
      goto LABEL_25;
LABEL_27:
    switch ( playerNum )
    {
      case 0:
        goto LABEL_32;
      case 1:
        goto LABEL_34;
      case 2:
LABEL_32:
        if ( v8->age > v7->age )
          goto LABEL_34;
        goto LABEL_33;
      case 3:
        goto LABEL_34;
    }
LABEL_31:
    if ( (playerNum & 0xFFFFFFFD) != 0 )
      goto LABEL_32;
LABEL_33:
    ++v8;
  }
LABEL_34:
  v15 = v8;
  v16 = v7;
  while ( 2 )
  {
    while ( 2 )
    {
      if ( v15 < _Last )
      {
        v17 = v8 - 1;
        while ( 1 )
        {
          v18 = v7->playerNum;
          if ( (v18 & 0xFFFFFFFD) != 0 )
            goto LABEL_42;
          v19 = v15->playerNum;
          if ( v19 )
          {
            if ( v19 == 1 )
              goto LABEL_53;
            if ( v19 != 2 )
              break;
          }
LABEL_43:
          if ( v15->age <= v7->age )
          {
            if ( (v19 & 0xFFFFFFFD) != 0 )
              goto LABEL_49;
LABEL_45:
            switch ( v18 )
            {
              case 0:
                goto LABEL_50;
              case 1:
                goto LABEL_54;
              case 2:
                goto LABEL_50;
              case 3:
                goto LABEL_54;
            }
LABEL_49:
            if ( (v18 & 0xFFFFFFFD) != 0 )
            {
LABEL_50:
              if ( v7->age > v15->age )
                goto LABEL_54;
            }
            v20 = v8++;
            ++v17;
            if ( v20 != v15 )
            {
              ParticleData::ParticleData(&__that, v17);
              ParticleData::operator=(v17, v15);
              ParticleData::operator=(v15, &__that);
              ParticleData::~ParticleData(&__that);
            }
          }
LABEL_53:
          if ( ++v15 >= _Last )
          {
LABEL_54:
            v9 = _First;
            goto LABEL_55;
          }
        }
        if ( v19 == 3 )
          goto LABEL_53;
LABEL_42:
        v19 = v15->playerNum;
        if ( (v19 & 0xFFFFFFFD) == 0 )
          goto LABEL_45;
        goto LABEL_43;
      }
LABEL_55:
      v21 = v16 == v9;
      if ( v16 <= v9 )
        goto LABEL_75;
      v22 = &v16[-1].age;
      do
      {
        v23 = *((_DWORD *)v22 - 3);
        if ( (v23 & 0xFFFFFFFD) == 0 )
        {
          v24 = v7->playerNum;
          switch ( v24 )
          {
            case 0:
              goto LABEL_63;
            case 1:
              goto LABEL_73;
            case 2:
LABEL_63:
              if ( v7->age > *v22 )
                goto LABEL_73;
              if ( (v24 & 0xFFFFFFFD) != 0 )
                goto LABEL_69;
              goto LABEL_65;
            case 3:
              goto LABEL_73;
          }
        }
        v24 = v7->playerNum;
        if ( (v24 & 0xFFFFFFFD) != 0 )
          goto LABEL_63;
LABEL_65:
        switch ( v23 )
        {
          case 0:
            goto LABEL_70;
          case 1:
            goto LABEL_74;
          case 2:
LABEL_70:
            if ( *v22 > v7->age )
              goto LABEL_74;
            goto LABEL_71;
          case 3:
            goto LABEL_74;
        }
LABEL_69:
        if ( (v23 & 0xFFFFFFFD) != 0 )
          goto LABEL_70;
LABEL_71:
        if ( --v7 != (ParticleData *)(v22 - 5) )
        {
          ParticleData::ParticleData(&__that, v7);
          ParticleData::operator=(v7, (const ParticleData *)(v22 - 5));
          ParticleData::operator=((ParticleData *)(v22 - 5), &__that);
          ParticleData::~ParticleData(&__that);
          v9 = _First;
        }
LABEL_73:
        --v16;
        v22 -= 424;
      }
      while ( v9 < v16 );
LABEL_74:
      v21 = v16 == v9;
LABEL_75:
      if ( !v21 )
      {
        --v16;
        if ( v15 == _Last )
        {
          if ( v16 != --v7 )
          {
            ParticleData::ParticleData(&__that, v16);
            ParticleData::operator=(v16, v7);
            ParticleData::operator=(v7, &__that);
            ParticleData::~ParticleData(&__that);
          }
          --v8;
          ParticleData::ParticleData(&__that, v7);
          ParticleData::operator=(v7, v8);
          ParticleData::operator=(v8, &__that);
          ParticleData::~ParticleData(&__that);
          v9 = _First;
        }
        else
        {
          ParticleData::ParticleData(&__that, v15);
          ParticleData::operator=(v15, v16);
          ParticleData::operator=(v16, &__that);
          ParticleData::~ParticleData(&__that);
          ++v15;
          v9 = _First;
        }
        continue;
      }
      break;
    }
    if ( v15 != _Last )
    {
      if ( v8 != v15 )
      {
        ParticleData::ParticleData(&__that, v7);
        ParticleData::operator=(v7, v8);
        ParticleData::operator=(v8, &__that);
        ParticleData::~ParticleData(&__that);
      }
      ++v8;
      v25 = v15;
      v26 = v7++;
      ++v15;
      ParticleData::ParticleData(&__that, v26);
      ParticleData::operator=(v26, v25);
      ParticleData::operator=(v25, &__that);
      ParticleData::~ParticleData(&__that);
      v9 = _First;
      continue;
    }
    break;
  }
  v27 = result;
  result->first = v7;
  result->second = v8;
  return v27;
}

std::pair<ParticleData *,ParticleData *> *__fastcall std::_Partition_by_median_guess_unchecked<ParticleData *,sortLightOfOwn2P>(
        std::pair<ParticleData *,ParticleData *> *result,
        ParticleData *_First,
        ParticleData *_Last,
        sortLightOfOwn2P *_Pred)
{
  unsigned __int64 v6; // rdx
  ParticleData *v7; // rsi
  ParticleData *v8; // r15
  ParticleData *v9; // r10
  char *p_age; // rcx
  int v11; // er9
  int v12; // er8
  int playerNum; // er8
  int v14; // edx
  ParticleData *v15; // r14
  ParticleData *v16; // r13
  ParticleData *v17; // rbx
  int v18; // er8
  int v19; // edx
  ParticleData *v20; // rax
  bool v21; // zf
  float *v22; // rbx
  int v23; // er8
  int v24; // edx
  ParticleData *v25; // rdi
  ParticleData *v26; // rbx
  std::pair<ParticleData *,ParticleData *> *v27; // rax
  ParticleData __that; // [rsp+40h] [rbp-C0h] BYREF

  v6 = (__int64)((unsigned __int128)(((char *)_Last - (char *)_First) * (__int128)0x4D4873ECADE304D5i64) >> 64) >> 10;
  v7 = &_First[(v6 >> 63) + v6];
  std::_Guess_median_unchecked<ParticleData *,sortLightOfOwn2P>(_First, v7, _Last - 1, (sortLightOfOwn2P *)_First);
  v8 = v7 + 1;
  v9 = _First;
  if ( _First < v7 )
  {
    p_age = (char *)&v7[-1].age;
    do
    {
      v11 = *((_DWORD *)p_age - 3);
      if ( ((v11 - 1) & 0xFFFFFFFD) == 0 )
      {
        v12 = *((_DWORD *)p_age + 421);
        switch ( v12 )
        {
          case 0:
            goto LABEL_18;
          case 1:
            goto LABEL_9;
          case 2:
            goto LABEL_18;
          case 3:
            goto LABEL_9;
        }
      }
      v12 = *((_DWORD *)p_age + 421);
      if ( ((v12 - 1) & 0xFFFFFFFD) != 0 )
      {
LABEL_9:
        if ( *((float *)p_age + 424) > *(float *)p_age )
          break;
      }
      if ( ((v12 - 1) & 0xFFFFFFFD) == 0 )
      {
        switch ( v11 )
        {
          case 0:
            goto LABEL_18;
          case 1:
            goto LABEL_16;
          case 2:
            goto LABEL_18;
          case 3:
            goto LABEL_16;
        }
      }
      if ( ((v11 - 1) & 0xFFFFFFFD) != 0 )
      {
LABEL_16:
        if ( *(float *)p_age > *((float *)p_age + 424) )
          break;
      }
      --v7;
      p_age -= 1696;
    }
    while ( _First < v7 );
  }
LABEL_18:
  while ( v8 < _Last )
  {
    playerNum = v8->playerNum;
    if ( ((playerNum - 1) & 0xFFFFFFFD) == 0 )
    {
      v14 = v7->playerNum;
      switch ( v14 )
      {
        case 0:
          goto LABEL_34;
        case 1:
          goto LABEL_25;
        case 2:
          goto LABEL_34;
        case 3:
          goto LABEL_25;
      }
    }
    v14 = v7->playerNum;
    if ( ((v14 - 1) & 0xFFFFFFFD) != 0 )
    {
LABEL_25:
      if ( v7->age > v8->age )
        break;
    }
    if ( ((v14 - 1) & 0xFFFFFFFD) == 0 )
    {
      switch ( playerNum )
      {
        case 0:
          goto LABEL_34;
        case 1:
          goto LABEL_32;
        case 2:
          goto LABEL_34;
        case 3:
          goto LABEL_32;
      }
    }
    if ( ((playerNum - 1) & 0xFFFFFFFD) != 0 )
    {
LABEL_32:
      if ( v8->age > v7->age )
        break;
    }
    ++v8;
  }
LABEL_34:
  v15 = v8;
  v16 = v7;
  while ( 2 )
  {
    while ( 2 )
    {
      if ( v15 < _Last )
      {
        v17 = v8 - 1;
        while ( 1 )
        {
          v18 = v7->playerNum;
          if ( ((v18 - 1) & 0xFFFFFFFD) == 0 )
          {
            v19 = v15->playerNum;
            switch ( v19 )
            {
              case 0:
                goto LABEL_53;
              case 1:
                goto LABEL_43;
              case 2:
                goto LABEL_53;
              case 3:
                goto LABEL_43;
            }
          }
          v19 = v15->playerNum;
          if ( ((v19 - 1) & 0xFFFFFFFD) != 0 )
          {
LABEL_43:
            if ( v15->age > v7->age )
              goto LABEL_53;
          }
          if ( ((v19 - 1) & 0xFFFFFFFD) == 0 )
          {
            switch ( v18 )
            {
              case 0:
                goto LABEL_54;
              case 1:
                goto LABEL_50;
              case 2:
                goto LABEL_54;
              case 3:
                goto LABEL_50;
            }
          }
          if ( ((v18 - 1) & 0xFFFFFFFD) != 0 )
          {
LABEL_50:
            if ( v7->age > v15->age )
            {
LABEL_54:
              v9 = _First;
              break;
            }
          }
          v20 = v8++;
          ++v17;
          if ( v20 != v15 )
          {
            ParticleData::ParticleData(&__that, v17);
            ParticleData::operator=(v17, v15);
            ParticleData::operator=(v15, &__that);
            ParticleData::~ParticleData(&__that);
          }
LABEL_53:
          if ( ++v15 >= _Last )
            goto LABEL_54;
        }
      }
      v21 = v16 == v9;
      if ( v16 <= v9 )
        goto LABEL_75;
      v22 = &v16[-1].age;
      while ( 1 )
      {
        v23 = *((_DWORD *)v22 - 3);
        if ( ((v23 - 1) & 0xFFFFFFFD) != 0 )
          break;
        v24 = v7->playerNum;
        if ( v24 )
        {
          if ( v24 == 1 )
            goto LABEL_63;
          if ( v24 != 2 )
          {
            if ( v24 == 3 )
              goto LABEL_63;
            break;
          }
        }
LABEL_73:
        --v16;
        v22 -= 424;
        if ( v9 >= v16 )
          goto LABEL_74;
      }
      v24 = v7->playerNum;
      if ( ((v24 - 1) & 0xFFFFFFFD) == 0 )
        goto LABEL_64;
LABEL_63:
      if ( v7->age > *v22 )
        goto LABEL_73;
LABEL_64:
      if ( ((v24 - 1) & 0xFFFFFFFD) != 0 )
        goto LABEL_69;
      if ( !v23 )
        goto LABEL_74;
      if ( v23 != 1 )
      {
        if ( v23 == 2 )
          goto LABEL_74;
        if ( v23 != 3 )
        {
LABEL_69:
          if ( ((v23 - 1) & 0xFFFFFFFD) == 0 )
            goto LABEL_71;
        }
      }
      if ( *v22 <= v7->age )
      {
LABEL_71:
        if ( --v7 != (ParticleData *)(v22 - 5) )
        {
          ParticleData::ParticleData(&__that, v7);
          ParticleData::operator=(v7, (const ParticleData *)(v22 - 5));
          ParticleData::operator=((ParticleData *)(v22 - 5), &__that);
          ParticleData::~ParticleData(&__that);
          v9 = _First;
        }
        goto LABEL_73;
      }
LABEL_74:
      v21 = v16 == v9;
LABEL_75:
      if ( !v21 )
      {
        --v16;
        if ( v15 == _Last )
        {
          if ( v16 != --v7 )
          {
            ParticleData::ParticleData(&__that, v16);
            ParticleData::operator=(v16, v7);
            ParticleData::operator=(v7, &__that);
            ParticleData::~ParticleData(&__that);
          }
          --v8;
          ParticleData::ParticleData(&__that, v7);
          ParticleData::operator=(v7, v8);
          ParticleData::operator=(v8, &__that);
          ParticleData::~ParticleData(&__that);
          v9 = _First;
        }
        else
        {
          ParticleData::ParticleData(&__that, v15);
          ParticleData::operator=(v15, v16);
          ParticleData::operator=(v16, &__that);
          ParticleData::~ParticleData(&__that);
          ++v15;
          v9 = _First;
        }
        continue;
      }
      break;
    }
    if ( v15 != _Last )
    {
      if ( v8 != v15 )
      {
        ParticleData::ParticleData(&__that, v7);
        ParticleData::operator=(v7, v8);
        ParticleData::operator=(v8, &__that);
        ParticleData::~ParticleData(&__that);
      }
      ++v8;
      v25 = v15;
      v26 = v7++;
      ++v15;
      ParticleData::ParticleData(&__that, v26);
      ParticleData::operator=(v26, v25);
      ParticleData::operator=(v25, &__that);
      ParticleData::~ParticleData(&__that);
      v9 = _First;
      continue;
    }
    break;
  }
  v27 = result;
  result->first = v7;
  result->second = v8;
  return v27;
}

void __fastcall std::_Pop_heap_hole_by_index<ParticleData *,__int64,ParticleData,sortLightOfOwn1P>(
        ParticleData *_First,
        __int64 _Hole,
        __int64 _Bottom,
        ParticleData *_Val,
        sortLightOfOwn1P *_Pred)
{
  __int64 v5; // rdi
  __int64 v6; // r10
  __int64 v11; // rsi
  __int64 v12; // r8
  __int64 v13; // rdx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  bool v17; // al
  int playerNum; // eax

  v5 = _Hole;
  v6 = _Hole;
  v11 = (_Bottom - 1) / 2;
  if ( _Hole < v11 )
  {
    while ( 1 )
    {
      v12 = 2 * v5 + 2;
      v13 = v12;
      if ( (_First[v12].playerNum & 0xFFFFFFFD) != 0 )
      {
LABEL_9:
        playerNum = _First[v13 - 1].playerNum;
        v17 = playerNum && playerNum != 2 && _First[v13 - 1].age > _First[v13].age;
        goto LABEL_14;
      }
      v14 = _First[v13 - 1].playerNum;
      if ( !v14 )
        break;
      v15 = v14 - 1;
      if ( v15 )
      {
        v16 = v15 - 1;
        if ( !v16 )
          break;
        if ( v16 != 1 )
          goto LABEL_9;
      }
      v17 = 1;
LABEL_14:
      v5 = 2 * v5 + 1;
      if ( !v17 )
        v5 = v12;
      ParticleData::operator=(&_First[v6], &_First[v5]);
      v6 = v5;
      if ( v5 >= v11 )
        goto LABEL_17;
    }
    v17 = _First[v13 - 1].age > _First[v13].age;
    goto LABEL_14;
  }
LABEL_17:
  if ( v5 == v11 && (_Bottom & 1) == 0 )
  {
    ParticleData::operator=(&_First[v6], &_First[_Bottom - 1]);
    v6 = _Bottom - 1;
  }
  std::_Push_heap_by_index<ParticleData *,__int64,ParticleData,sortLightOfOwn1P>(_First, v6, _Hole, _Val, _Pred);
}

void __fastcall std::_Pop_heap_hole_by_index<ParticleData *,__int64,ParticleData,sortLightOfOwn2P>(
        ParticleData *_First,
        __int64 _Hole,
        __int64 _Bottom,
        ParticleData *_Val,
        sortLightOfOwn2P *_Pred)
{
  __int64 v5; // rdi
  __int64 v6; // r10
  __int64 v11; // rsi
  __int64 v12; // r8
  __int64 v13; // rdx
  int playerNum; // ecx
  int v15; // ecx
  int v16; // ecx
  bool v17; // al
  int v18; // eax

  v5 = _Hole;
  v6 = _Hole;
  v11 = (_Bottom - 1) / 2;
  if ( _Hole < v11 )
  {
    while ( 1 )
    {
      v12 = 2 * v5 + 2;
      v13 = v12;
      if ( ((_First[v12].playerNum - 1) & 0xFFFFFFFD) != 0 )
        break;
      playerNum = _First[v13 - 1].playerNum;
      if ( !playerNum )
        goto LABEL_11;
      v15 = playerNum - 1;
      if ( v15 )
      {
        v16 = v15 - 1;
        if ( !v16 )
          goto LABEL_11;
        if ( v16 != 1 )
          break;
      }
      v17 = _First[v13 - 1].age > _First[v13].age;
LABEL_13:
      v5 = 2 * v5 + 1;
      if ( !v17 )
        v5 = v12;
      ParticleData::operator=(&_First[v6], &_First[v5]);
      v6 = v5;
      if ( v5 >= v11 )
        goto LABEL_16;
    }
    v18 = _First[v13 - 1].playerNum;
    if ( v18 == 1 || v18 == 3 || _First[v13 - 1].age <= _First[v13].age )
    {
      v17 = 0;
      goto LABEL_13;
    }
LABEL_11:
    v17 = 1;
    goto LABEL_13;
  }
LABEL_16:
  if ( v5 == v11 && (_Bottom & 1) == 0 )
  {
    ParticleData::operator=(&_First[v6], &_First[_Bottom - 1]);
    v6 = _Bottom - 1;
  }
  std::_Push_heap_by_index<ParticleData *,__int64,ParticleData,sortLightOfOwn2P>(_First, v6, _Hole, _Val, _Pred);
}

void __fastcall std::_Push_heap_by_index<ParticleData *,__int64,ParticleData,sortLightOfOwn1P>(
        ParticleData *_First,
        __int64 _Hole,
        __int64 _Top,
        ParticleData *_Val)
{
  __int64 v5; // r9
  __int64 v8; // rdi
  ParticleData *v9; // rdx
  int playerNum; // ecx
  int v11; // ecx
  int v12; // ecx

  v5 = _Hole;
  v8 = (_Hole - 1) / 2;
  if ( _Top < _Hole )
  {
    while ( 1 )
    {
      v9 = &_First[v8];
      if ( (v9->playerNum & 0xFFFFFFFD) != 0 )
        break;
      playerNum = _Val->playerNum;
      if ( !playerNum )
        goto LABEL_8;
      v11 = playerNum - 1;
      if ( v11 )
      {
        v12 = v11 - 1;
        if ( !v12 )
          goto LABEL_8;
        if ( v12 != 1 )
          break;
      }
LABEL_9:
      ParticleData::operator=(&_First[v5], v9);
      v5 = v8;
      v8 = (v8 - 1) / 2;
      if ( _Top >= v5 )
        goto LABEL_10;
    }
    if ( (_Val->playerNum & 0xFFFFFFFD) == 0 )
      goto LABEL_10;
LABEL_8:
    if ( _Val->age <= v9->age )
      goto LABEL_10;
    goto LABEL_9;
  }
LABEL_10:
  ParticleData::operator=(&_First[v5], _Val);
}

void __fastcall std::_Push_heap_by_index<ParticleData *,__int64,ParticleData,sortLightOfOwn2P>(
        ParticleData *_First,
        __int64 _Hole,
        __int64 _Top,
        ParticleData *_Val)
{
  __int64 v5; // r9
  __int64 v8; // rdi
  ParticleData *v9; // rdx
  int playerNum; // ecx
  int v11; // ecx
  int v12; // ecx

  v5 = _Hole;
  v8 = (_Hole - 1) / 2;
  if ( _Top < _Hole )
  {
    while ( 1 )
    {
      v9 = &_First[v8];
      if ( ((v9->playerNum - 1) & 0xFFFFFFFD) != 0 )
        goto LABEL_7;
      playerNum = _Val->playerNum;
      if ( playerNum )
      {
        v11 = playerNum - 1;
        if ( !v11 )
          goto LABEL_8;
        v12 = v11 - 1;
        if ( v12 )
          break;
      }
LABEL_9:
      ParticleData::operator=(&_First[v5], v9);
      v5 = v8;
      v8 = (v8 - 1) / 2;
      if ( _Top >= v5 )
        goto LABEL_10;
    }
    if ( v12 != 1 )
    {
LABEL_7:
      if ( ((_Val->playerNum - 1) & 0xFFFFFFFD) == 0 )
        goto LABEL_10;
    }
LABEL_8:
    if ( _Val->age <= v9->age )
      goto LABEL_10;
    goto LABEL_9;
  }
LABEL_10:
  ParticleData::operator=(&_First[v5], _Val);
}

void __fastcall std::_Sort_heap_unchecked<ParticleData *,sortLightOfOwn1P>(
        ParticleData *_First,
        ParticleData *_Last,
        sortLightOfOwn1P *_Pred)
{
  unsigned __int64 v5; // rdx
  ParticleData *v6; // rbx
  __int64 v7; // r14
  __int64 v8; // rdi
  sortLightOfOwn1P *v9; // [rsp+20h] [rbp-6E8h]
  ParticleData _Val; // [rsp+40h] [rbp-6C8h] BYREF

  v5 = (__int64)((unsigned __int128)(((char *)_Last - (char *)_First) * (__int128)0x4D4873ECADE304D5i64) >> 64) >> 9;
  if ( (__int64)((v5 >> 63) + v5) >= 2 )
  {
    v6 = _Last - 1;
    v7 = -(__int64)_First;
    v8 = 1696i64 - (_QWORD)_First;
    do
    {
      ParticleData::ParticleData(&_Val, v6);
      ParticleData::operator=(v6, _First);
      std::_Pop_heap_hole_by_index<ParticleData *,__int64,ParticleData,sortLightOfOwn1P>(
        _First,
        0i64,
        ((__int64)v6 + v7) / 1696,
        &_Val,
        v9);
      ParticleData::~ParticleData(&_Val);
      --v6;
    }
    while ( ((__int64)v6 + v8) / 1696 >= 2 );
  }
}

void __fastcall std::_Sort_heap_unchecked<ParticleData *,sortLightOfOwn2P>(
        ParticleData *_First,
        ParticleData *_Last,
        sortLightOfOwn2P *_Pred)
{
  unsigned __int64 v5; // rdx
  ParticleData *v6; // rbx
  __int64 v7; // r14
  __int64 v8; // rdi
  sortLightOfOwn2P *v9; // [rsp+20h] [rbp-6E8h]
  ParticleData _Val; // [rsp+40h] [rbp-6C8h] BYREF

  v5 = (__int64)((unsigned __int128)(((char *)_Last - (char *)_First) * (__int128)0x4D4873ECADE304D5i64) >> 64) >> 9;
  if ( (__int64)((v5 >> 63) + v5) >= 2 )
  {
    v6 = _Last - 1;
    v7 = -(__int64)_First;
    v8 = 1696i64 - (_QWORD)_First;
    do
    {
      ParticleData::ParticleData(&_Val, v6);
      ParticleData::operator=(v6, _First);
      std::_Pop_heap_hole_by_index<ParticleData *,__int64,ParticleData,sortLightOfOwn2P>(
        _First,
        0i64,
        ((__int64)v6 + v7) / 1696,
        &_Val,
        v9);
      ParticleData::~ParticleData(&_Val);
      --v6;
    }
    while ( ((__int64)v6 + v8) / 1696 >= 2 );
  }
}

void __fastcall std::_Sort_unchecked1<ParticleData *,__int64,sortLightOfOwn1P>(
        ParticleData *_First,
        ParticleData *_Last,
        __int64 _Ideal,
        sortLightOfOwn1P *_Pred)
{
  ParticleData *first; // rbx
  __int64 v5; // rsi
  ParticleData *v6; // rdi
  unsigned __int64 v7; // rdx
  __int64 v8; // rdx
  ParticleData *second; // rbp
  sortLightOfOwn1P *v10; // r8
  std::pair<ParticleData *,ParticleData *> result; // [rsp+20h] [rbp-18h] BYREF

  first = _Last;
  v5 = _Ideal;
  v6 = _First;
  v7 = (__int64)((unsigned __int128)(((char *)_Last - (char *)_First) * (__int128)0x4D4873ECADE304D5i64) >> 64) >> 9;
  v8 = (v7 >> 63) + v7;
  if ( v8 <= 32 )
  {
LABEL_7:
    if ( v8 >= 2 )
      std::_Insertion_sort_unchecked<ParticleData *,sortLightOfOwn1P>(v6, first, (sortLightOfOwn1P *)_Ideal);
  }
  else
  {
    while ( v5 > 0 )
    {
      std::_Partition_by_median_guess_unchecked<ParticleData *,sortLightOfOwn1P>(&result, v6, first, _Pred);
      second = result.second;
      v5 = v5 / 2 / 2 + v5 / 2;
      if ( result.first - v6 >= first - result.second )
      {
        std::_Sort_unchecked1<ParticleData *,__int64,sortLightOfOwn1P>(result.second, first, v5, _Pred);
        first = result.first;
      }
      else
      {
        std::_Sort_unchecked1<ParticleData *,__int64,sortLightOfOwn1P>(v6, result.first, v5, _Pred);
        v6 = second;
      }
      v8 = first - v6;
      if ( v8 <= 32 )
        goto LABEL_7;
    }
    std::_Make_heap_unchecked<ParticleData *,sortLightOfOwn1P>(v6, first, (sortLightOfOwn1P *)_Ideal);
    std::_Sort_heap_unchecked<ParticleData *,sortLightOfOwn1P>(v6, first, v10);
  }
}

void __fastcall std::_Sort_unchecked1<ParticleData *,__int64,sortLightOfOwn2P>(
        ParticleData *_First,
        ParticleData *_Last,
        __int64 _Ideal,
        sortLightOfOwn2P *_Pred)
{
  ParticleData *first; // rbx
  __int64 v5; // rsi
  ParticleData *v6; // rdi
  unsigned __int64 v7; // rdx
  __int64 v8; // rdx
  ParticleData *second; // rbp
  sortLightOfOwn2P *v10; // r8
  std::pair<ParticleData *,ParticleData *> result; // [rsp+20h] [rbp-18h] BYREF

  first = _Last;
  v5 = _Ideal;
  v6 = _First;
  v7 = (__int64)((unsigned __int128)(((char *)_Last - (char *)_First) * (__int128)0x4D4873ECADE304D5i64) >> 64) >> 9;
  v8 = (v7 >> 63) + v7;
  if ( v8 <= 32 )
  {
LABEL_7:
    if ( v8 >= 2 )
      std::_Insertion_sort_unchecked<ParticleData *,sortLightOfOwn2P>(v6, first, (sortLightOfOwn2P *)_Ideal);
  }
  else
  {
    while ( v5 > 0 )
    {
      std::_Partition_by_median_guess_unchecked<ParticleData *,sortLightOfOwn2P>(&result, v6, first, _Pred);
      second = result.second;
      v5 = v5 / 2 / 2 + v5 / 2;
      if ( result.first - v6 >= first - result.second )
      {
        std::_Sort_unchecked1<ParticleData *,__int64,sortLightOfOwn2P>(result.second, first, v5, _Pred);
        first = result.first;
      }
      else
      {
        std::_Sort_unchecked1<ParticleData *,__int64,sortLightOfOwn2P>(v6, result.first, v5, _Pred);
        v6 = second;
      }
      v8 = first - v6;
      if ( v8 <= 32 )
        goto LABEL_7;
    }
    std::_Make_heap_unchecked<ParticleData *,sortLightOfOwn2P>(v6, first, (sortLightOfOwn2P *)_Ideal);
    std::_Sort_heap_unchecked<ParticleData *,sortLightOfOwn2P>(v6, first, v10);
  }
}

ParticleData *__fastcall std::_Uninitialized_move_al_unchecked1<ParticleData *,ParticleData *,std::allocator<ParticleData>>(
        ParticleData *_First,
        ParticleData *_Last,
        ParticleData *_Dest,
        std::_Wrap_alloc<std::allocator<ParticleData> > *_Al)
{
  while ( _First != _Last )
  {
    if ( _Dest )
      ParticleData::ParticleData(_Dest, _First);
    ++_Dest;
    ++_First;
  }
  return _Dest;
}

void __fastcall std::swap<ParticleData,void>(ParticleData *_Left, ParticleData *_Right)
{
  ParticleData __that; // [rsp+30h] [rbp-6B8h] BYREF

  ParticleData::ParticleData(&__that, _Left);
  ParticleData::operator=(_Left, _Right);
  ParticleData::operator=(_Right, &__that);
  ParticleData::~ParticleData(&__that);
}

void __fastcall std::vector<ParticleDataForChild>::vector<ParticleDataForChild>(
        std::vector<ParticleDataForChild> *this,
        const std::vector<ParticleDataForChild> *_Right)
{
  signed __int64 v4; // r8
  unsigned __int64 v5; // rbx
  ParticleDataForChild *v6; // rax
  ParticleDataForChild *Myfirst; // rax
  ParticleDataForChild *v8; // rbx
  size_t v9; // rdi

  this->_Mypair._Myval2._Myfirst = 0i64;
  this->_Mypair._Myval2._Mylast = 0i64;
  this->_Mypair._Myval2._Myend = 0i64;
  v4 = (char *)_Right->_Mypair._Myval2._Mylast - (char *)_Right->_Mypair._Myval2._Myfirst;
  v5 = v4 / 12;
  this->_Mypair._Myval2._Myfirst = 0i64;
  this->_Mypair._Myval2._Mylast = 0i64;
  this->_Mypair._Myval2._Myend = 0i64;
  if ( v4 / 12 )
  {
    if ( v5 > 0x1555555555555555i64 )
      std::_Xlength_error("vector<T> too long");
    v6 = std::_Wrap_alloc<std::allocator<ParticleDataForChild>>::allocate(0i64, v4 / 12);
    this->_Mypair._Myval2._Myfirst = v6;
    this->_Mypair._Myval2._Mylast = v6;
    Myfirst = this->_Mypair._Myval2._Myfirst;
    this->_Mypair._Myval2._Myend = &this->_Mypair._Myval2._Myfirst[v5];
    v8 = Myfirst;
    v9 = (char *)_Right->_Mypair._Myval2._Mylast - (char *)_Right->_Mypair._Myval2._Myfirst;
    memmove(Myfirst, _Right->_Mypair._Myval2._Myfirst, v9);
    this->_Mypair._Myval2._Mylast = (ParticleDataForChild *)((char *)v8 + v9);
  }
}

void __fastcall EffectLightManager::EffectLightManager(EffectLightManager *this)
{
  int v2; // edx
  int v3; // edx

  `eh vector constructor iterator'(
    this,
    0x9Cui64,
    1ui64,
    (void (__fastcall *)(void *))OGLLight::OGLLight,
    (void (__fastcall *)(void *))OGLLight::~OGLLight);
  OGLLight::initialize(&this->EffectLightFor1P, 0);
  OGLLight::initialize(&this->EffectLightFor2P, v2);
  this->m_LightData._Mypair._Myval2._Myfirst = 0i64;
  this->m_LightData._Mypair._Myval2._Mylast = 0i64;
  this->m_LightData._Mypair._Myval2._Myend = 0i64;
  OGLLight::initialize(&this->DefaultLight, v3);
  Mtx_init_in_situ((_Mtx_internal_imp_t *)&this->m_LightDataMutex, 2);
  this->DefaultLight.m_fPosition[0] = 0.0;
  *(_QWORD *)&this->DefaultLight.m_fPosition[1] = 1112014848i64;
  this->DefaultLight.m_fPosition[3] = 1.0;
  this->lightCount = 0;
  if ( (unsigned __int64)(this->m_LightData._Mypair._Myval2._Myend - this->m_LightData._Mypair._Myval2._Myfirst) < 0xA )
    std::vector<ParticleData>::_Reallocate(&this->m_LightData, 0xAui64);
}

void __fastcall ParticleData::ParticleData(ParticleData *this, const ParticleData *__that)
{
  OGLMatrix *v4; // rcx
  OGLMatrix *v5; // rcx
  OGLMatrix *v6; // rcx
  OGLMatrix *v7; // rcx
  OGLMatrix *v8; // rcx
  OGLMatrix *v9; // rcx
  OGLMatrix *v10; // rcx
  OGLMatrix *v11; // rcx
  OGLVec3 *v12; // rcx
  OGLVec3 *v13; // rcx
  OGLVec3 *v14; // rcx
  OGLVec3 *v15; // rcx
  OGLVec3 *v16; // rcx
  OGLQuat *v17; // rcx
  OGLQuat *v18; // rcx
  OGLVec3 *v19; // rcx
  OGLVec3 *v20; // rcx
  OGLVec3 *v21; // rcx
  OGLVec3 *v22; // rcx
  OGLVec3 *v23; // rcx
  OGLVec3 *v24; // rcx
  OGLVec3 *v25; // rcx
  OGLVec3 *v26; // rcx
  OGLVec3 *v27; // rcx
  OGLVec3 *v28; // rcx
  OGLVec3 *v29; // rcx
  OGLVec3 *v30; // rcx
  OGLVec3 *v31; // rcx
  OGLVec3 *v32; // rcx
  OGLVec3 *v33; // rcx
  OGLVec3 *v34; // rcx
  OGLQuat *v35; // rcx
  OGLQuat *v36; // rcx
  OGLQuat *v37; // rcx
  OGLVec4 *v38; // rcx
  OGLVec4 *v39; // rcx

  this->isUsed = __that->isUsed;
  this->jobNum = __that->jobNum;
  this->playerNum = __that->playerNum;
  this->parentID = __that->parentID;
  this->ID = __that->ID;
  this->age = __that->age;
  this->lifeLimit = __that->lifeLimit;
  this->Flags = __that->Flags;
  this->Model = __that->Model;
  v4 = &__that->WorldMat.OGLMatrix;
  if ( __that == (const ParticleData *)-40i64 )
    v4 = 0i64;
  *(_OWORD *)this->WorldMat.m = *(_OWORD *)v4->m;
  *(_OWORD *)&this->WorldMat.m[4] = *(_OWORD *)&v4->m[4];
  *(_OWORD *)&this->WorldMat.m[8] = *(_OWORD *)&v4->m[8];
  *(_OWORD *)&this->WorldMat.m[12] = *(_OWORD *)&v4->m[12];
  this->WorldMat.__vftable = (OGLEffectMatrix_vtbl *)&OGLEffectMatrix::`vftable';
  v5 = &__that->GlobalMat.OGLMatrix;
  if ( __that == (const ParticleData *)-112i64 )
    v5 = 0i64;
  *(_OWORD *)this->GlobalMat.m = *(_OWORD *)v5->m;
  *(_OWORD *)&this->GlobalMat.m[4] = *(_OWORD *)&v5->m[4];
  *(_OWORD *)&this->GlobalMat.m[8] = *(_OWORD *)&v5->m[8];
  *(_OWORD *)&this->GlobalMat.m[12] = *(_OWORD *)&v5->m[12];
  this->GlobalMat.__vftable = (OGLEffectMatrix_vtbl *)&OGLEffectMatrix::`vftable';
  v6 = &__that->LocalMat.OGLMatrix;
  if ( __that == (const ParticleData *)-184i64 )
    v6 = 0i64;
  *(_OWORD *)this->LocalMat.m = *(_OWORD *)v6->m;
  *(_OWORD *)&this->LocalMat.m[4] = *(_OWORD *)&v6->m[4];
  *(_OWORD *)&this->LocalMat.m[8] = *(_OWORD *)&v6->m[8];
  *(_OWORD *)&this->LocalMat.m[12] = *(_OWORD *)&v6->m[12];
  this->LocalMat.__vftable = (OGLEffectMatrix_vtbl *)&OGLEffectMatrix::`vftable';
  v7 = &__that->DefaultReferenceMat.OGLMatrix;
  if ( __that == (const ParticleData *)-256i64 )
    v7 = 0i64;
  *(_OWORD *)this->DefaultReferenceMat.m = *(_OWORD *)v7->m;
  *(_OWORD *)&this->DefaultReferenceMat.m[4] = *(_OWORD *)&v7->m[4];
  *(_OWORD *)&this->DefaultReferenceMat.m[8] = *(_OWORD *)&v7->m[8];
  *(_OWORD *)&this->DefaultReferenceMat.m[12] = *(_OWORD *)&v7->m[12];
  this->DefaultReferenceMat.__vftable = (OGLEffectMatrix_vtbl *)&OGLEffectMatrix::`vftable';
  v8 = &__that->ReferenceMat.OGLMatrix;
  if ( __that == (const ParticleData *)-328i64 )
    v8 = 0i64;
  *(_OWORD *)this->ReferenceMat.m = *(_OWORD *)v8->m;
  *(_OWORD *)&this->ReferenceMat.m[4] = *(_OWORD *)&v8->m[4];
  *(_OWORD *)&this->ReferenceMat.m[8] = *(_OWORD *)&v8->m[8];
  *(_OWORD *)&this->ReferenceMat.m[12] = *(_OWORD *)&v8->m[12];
  this->ReferenceMat.__vftable = (OGLEffectMatrix_vtbl *)&OGLEffectMatrix::`vftable';
  v9 = &__that->DefaultActMat.OGLMatrix;
  if ( __that == (const ParticleData *)-400i64 )
    v9 = 0i64;
  *(_OWORD *)this->DefaultActMat.m = *(_OWORD *)v9->m;
  *(_OWORD *)&this->DefaultActMat.m[4] = *(_OWORD *)&v9->m[4];
  *(_OWORD *)&this->DefaultActMat.m[8] = *(_OWORD *)&v9->m[8];
  *(_OWORD *)&this->DefaultActMat.m[12] = *(_OWORD *)&v9->m[12];
  this->DefaultActMat.__vftable = (OGLEffectMatrix_vtbl *)&OGLEffectMatrix::`vftable';
  v10 = &__that->ActMat.OGLMatrix;
  if ( __that == (const ParticleData *)-472i64 )
    v10 = 0i64;
  *(_OWORD *)this->ActMat.m = *(_OWORD *)v10->m;
  *(_OWORD *)&this->ActMat.m[4] = *(_OWORD *)&v10->m[4];
  *(_OWORD *)&this->ActMat.m[8] = *(_OWORD *)&v10->m[8];
  *(_OWORD *)&this->ActMat.m[12] = *(_OWORD *)&v10->m[12];
  this->ActMat.__vftable = (OGLEffectMatrix_vtbl *)&OGLEffectMatrix::`vftable';
  v11 = &__that->DefaultEmitterMat.OGLMatrix;
  if ( __that == (const ParticleData *)-544i64 )
    v11 = 0i64;
  *(_OWORD *)this->DefaultEmitterMat.m = *(_OWORD *)v11->m;
  *(_OWORD *)&this->DefaultEmitterMat.m[4] = *(_OWORD *)&v11->m[4];
  *(_OWORD *)&this->DefaultEmitterMat.m[8] = *(_OWORD *)&v11->m[8];
  *(_OWORD *)&this->DefaultEmitterMat.m[12] = *(_OWORD *)&v11->m[12];
  this->DefaultEmitterMat.__vftable = (OGLEffectMatrix_vtbl *)&OGLEffectMatrix::`vftable';
  v12 = &__that->WorldPos.OGLVec3;
  if ( __that == (const ParticleData *)-616i64 )
    v12 = 0i64;
  this->WorldPos.x = v12->x;
  this->WorldPos.y = v12->y;
  this->WorldPos.z = v12->z;
  this->WorldPos.__vftable = (OGLEffectVec3_vtbl *)&OGLEffectVec3::`vftable';
  v13 = &__that->PreWorldPos.OGLVec3;
  if ( __that == (const ParticleData *)-640i64 )
    v13 = 0i64;
  this->PreWorldPos.x = v13->x;
  this->PreWorldPos.y = v13->y;
  this->PreWorldPos.z = v13->z;
  this->PreWorldPos.__vftable = (OGLEffectVec3_vtbl *)&OGLEffectVec3::`vftable';
  v14 = &__that->LocalPos.OGLVec3;
  if ( __that == (const ParticleData *)-664i64 )
    v14 = 0i64;
  this->LocalPos.x = v14->x;
  this->LocalPos.y = v14->y;
  this->LocalPos.z = v14->z;
  this->LocalPos.__vftable = (OGLEffectVec3_vtbl *)&OGLEffectVec3::`vftable';
  v15 = &__that->PreLocalPos.OGLVec3;
  if ( __that == (const ParticleData *)-688i64 )
    v15 = 0i64;
  this->PreLocalPos.x = v15->x;
  this->PreLocalPos.y = v15->y;
  this->PreLocalPos.z = v15->z;
  this->PreLocalPos.__vftable = (OGLEffectVec3_vtbl *)&OGLEffectVec3::`vftable';
  v16 = &__that->LocalVel.OGLVec3;
  if ( __that == (const ParticleData *)-712i64 )
    v16 = 0i64;
  this->LocalVel.x = v16->x;
  this->LocalVel.y = v16->y;
  this->LocalVel.z = v16->z;
  this->LocalVel.__vftable = (OGLEffectVec3_vtbl *)&OGLEffectVec3::`vftable';
  v17 = &__that->LocalRot.OGLQuat;
  if ( __that == (const ParticleData *)-736i64 )
    v17 = 0i64;
  this->LocalRot.OGLQuat = *v17;
  this->LocalRot.__vftable = (OGLEffectQuat_vtbl *)&OGLEffectQuat::`vftable';
  v18 = &__that->LocalRotVel.OGLQuat;
  if ( __that == (const ParticleData *)-760i64 )
    v18 = 0i64;
  this->LocalRotVel.OGLQuat = *v18;
  this->LocalRotVel.__vftable = (OGLEffectQuat_vtbl *)&OGLEffectQuat::`vftable';
  v19 = &__that->LocalScale.OGLVec3;
  if ( __that == (const ParticleData *)-784i64 )
    v19 = 0i64;
  this->LocalScale.x = v19->x;
  this->LocalScale.y = v19->y;
  this->LocalScale.z = v19->z;
  this->LocalScale.__vftable = (OGLEffectVec3_vtbl *)&OGLEffectVec3::`vftable';
  v20 = &__that->LocalScaleVel.OGLVec3;
  if ( __that == (const ParticleData *)-808i64 )
    v20 = 0i64;
  this->LocalScaleVel.x = v20->x;
  this->LocalScaleVel.y = v20->y;
  this->LocalScaleVel.z = v20->z;
  this->LocalScaleVel.__vftable = (OGLEffectVec3_vtbl *)&OGLEffectVec3::`vftable';
  v21 = &__that->ForceFieldPos.OGLVec3;
  if ( __that == (const ParticleData *)-832i64 )
    v21 = 0i64;
  this->ForceFieldPos.x = v21->x;
  this->ForceFieldPos.y = v21->y;
  this->ForceFieldPos.z = v21->z;
  this->ForceFieldPos.__vftable = (OGLEffectVec3_vtbl *)&OGLEffectVec3::`vftable';
  v22 = &__that->PreForceFieldPos.OGLVec3;
  if ( __that == (const ParticleData *)-856i64 )
    v22 = 0i64;
  this->PreForceFieldPos.x = v22->x;
  this->PreForceFieldPos.y = v22->y;
  this->PreForceFieldPos.z = v22->z;
  this->PreForceFieldPos.__vftable = (OGLEffectVec3_vtbl *)&OGLEffectVec3::`vftable';
  v23 = &__that->ForceFieldVel.OGLVec3;
  if ( __that == (const ParticleData *)-880i64 )
    v23 = 0i64;
  this->ForceFieldVel.x = v23->x;
  this->ForceFieldVel.y = v23->y;
  this->ForceFieldVel.z = v23->z;
  this->ForceFieldVel.__vftable = (OGLEffectVec3_vtbl *)&OGLEffectVec3::`vftable';
  v24 = &__that->GravityVel.OGLVec3;
  if ( __that == (const ParticleData *)-904i64 )
    v24 = 0i64;
  this->GravityVel.x = v24->x;
  this->GravityVel.y = v24->y;
  this->GravityVel.z = v24->z;
  this->GravityVel.__vftable = (OGLEffectVec3_vtbl *)&OGLEffectVec3::`vftable';
  v25 = &__that->GravityPos.OGLVec3;
  if ( __that == (const ParticleData *)-928i64 )
    v25 = 0i64;
  this->GravityPos.x = v25->x;
  this->GravityPos.y = v25->y;
  this->GravityPos.z = v25->z;
  this->GravityPos.__vftable = (OGLEffectVec3_vtbl *)&OGLEffectVec3::`vftable';
  v26 = &__that->DefaultPos.OGLVec3;
  if ( __that == (const ParticleData *)-952i64 )
    v26 = 0i64;
  this->DefaultPos.x = v26->x;
  this->DefaultPos.y = v26->y;
  this->DefaultPos.z = v26->z;
  this->DefaultPos.__vftable = (OGLEffectVec3_vtbl *)&OGLEffectVec3::`vftable';
  v27 = &__that->DefaultDiffuseAll.OGLVec3;
  if ( __that == (const ParticleData *)-976i64 )
    v27 = 0i64;
  this->DefaultDiffuseAll.x = v27->x;
  this->DefaultDiffuseAll.y = v27->y;
  this->DefaultDiffuseAll.z = v27->z;
  this->DefaultDiffuseAll.__vftable = (OGLEffectVec3_vtbl *)&OGLEffectVec3::`vftable';
  v28 = &__that->DefaultDiffuseAxis.OGLVec3;
  if ( __that == (const ParticleData *)-1000i64 )
    v28 = 0i64;
  this->DefaultDiffuseAxis.x = v28->x;
  this->DefaultDiffuseAxis.y = v28->y;
  this->DefaultDiffuseAxis.z = v28->z;
  this->DefaultDiffuseAxis.__vftable = (OGLEffectVec3_vtbl *)&OGLEffectVec3::`vftable';
  v29 = &__that->DefaultSpecifiedDir.OGLVec3;
  if ( __that == (const ParticleData *)-1024i64 )
    v29 = 0i64;
  this->DefaultSpecifiedDir.x = v29->x;
  this->DefaultSpecifiedDir.y = v29->y;
  this->DefaultSpecifiedDir.z = v29->z;
  this->DefaultSpecifiedDir.__vftable = (OGLEffectVec3_vtbl *)&OGLEffectVec3::`vftable';
  v30 = &__that->DefaultInheritanceVel.OGLVec3;
  if ( __that == (const ParticleData *)-1048i64 )
    v30 = 0i64;
  this->DefaultInheritanceVel.x = v30->x;
  this->DefaultInheritanceVel.y = v30->y;
  this->DefaultInheritanceVel.z = v30->z;
  this->DefaultInheritanceVel.__vftable = (OGLEffectVec3_vtbl *)&OGLEffectVec3::`vftable';
  v31 = &__that->DefaultAcc.OGLVec3;
  if ( __that == (const ParticleData *)-1072i64 )
    v31 = 0i64;
  this->DefaultAcc.x = v31->x;
  this->DefaultAcc.y = v31->y;
  this->DefaultAcc.z = v31->z;
  this->DefaultAcc.__vftable = (OGLEffectVec3_vtbl *)&OGLEffectVec3::`vftable';
  v32 = &__that->DefaultScale.OGLVec3;
  if ( __that == (const ParticleData *)-1096i64 )
    v32 = 0i64;
  this->DefaultScale.x = v32->x;
  this->DefaultScale.y = v32->y;
  this->DefaultScale.z = v32->z;
  this->DefaultScale.__vftable = (OGLEffectVec3_vtbl *)&OGLEffectVec3::`vftable';
  v33 = &__that->DefaultScaleVel.OGLVec3;
  if ( __that == (const ParticleData *)-1120i64 )
    v33 = 0i64;
  this->DefaultScaleVel.x = v33->x;
  this->DefaultScaleVel.y = v33->y;
  this->DefaultScaleVel.z = v33->z;
  this->DefaultScaleVel.__vftable = (OGLEffectVec3_vtbl *)&OGLEffectVec3::`vftable';
  v34 = &__that->DefaultScaleAcc.OGLVec3;
  if ( __that == (const ParticleData *)-1144i64 )
    v34 = 0i64;
  this->DefaultScaleAcc.x = v34->x;
  this->DefaultScaleAcc.y = v34->y;
  this->DefaultScaleAcc.z = v34->z;
  this->DefaultScaleAcc.__vftable = (OGLEffectVec3_vtbl *)&OGLEffectVec3::`vftable';
  v35 = &__that->DefaultRotQ.OGLQuat;
  if ( __that == (const ParticleData *)-1168i64 )
    v35 = 0i64;
  this->DefaultRotQ.OGLQuat = *v35;
  this->DefaultRotQ.__vftable = (OGLEffectQuat_vtbl *)&OGLEffectQuat::`vftable';
  v36 = &__that->DefaultRotQVel.OGLQuat;
  if ( __that == (const ParticleData *)-1192i64 )
    v36 = 0i64;
  this->DefaultRotQVel.OGLQuat = *v36;
  this->DefaultRotQVel.__vftable = (OGLEffectQuat_vtbl *)&OGLEffectQuat::`vftable';
  v37 = &__that->DefaultRotQAcc.OGLQuat;
  if ( __that == (const ParticleData *)-1216i64 )
    v37 = 0i64;
  this->DefaultRotQAcc.OGLQuat = *v37;
  this->DefaultRotQAcc.__vftable = (OGLEffectQuat_vtbl *)&OGLEffectQuat::`vftable';
  v38 = &__that->Col.OGLVec4;
  if ( __that == (const ParticleData *)-1240i64 )
    v38 = 0i64;
  this->Col.OGLVec4 = *v38;
  this->Col.__vftable = (OGLEffectVec4_vtbl *)&OGLEffectVec4::`vftable';
  this->RatioToFollow = __that->RatioToFollow;
  this->InheritanceVelocity = __that->InheritanceVelocity;
  this->TexNum = __that->TexNum;
  *(_OWORD *)this->m_AnimationNum = *(_OWORD *)__that->m_AnimationNum;
  *(_OWORD *)&this->m_AnimationNum[4] = *(_OWORD *)&__that->m_AnimationNum[4];
  *(_OWORD *)&this->m_AnimationNum[8] = *(_OWORD *)&__that->m_AnimationNum[8];
  this->m_AnimationNum[12] = __that->m_AnimationNum[12];
  *(_OWORD *)this->m_OldAge = *(_OWORD *)__that->m_OldAge;
  *(_OWORD *)&this->m_OldAge[4] = *(_OWORD *)&__that->m_OldAge[4];
  *(_OWORD *)&this->m_OldAge[8] = *(_OWORD *)&__that->m_OldAge[8];
  this->m_OldAge[12] = __that->m_OldAge[12];
  *(_OWORD *)&this->m_shuffleFlag[0][0] = *(_OWORD *)&__that->m_shuffleFlag[0][0];
  *(_OWORD *)&this->m_shuffleFlag[1][0] = *(_OWORD *)&__that->m_shuffleFlag[1][0];
  *(_OWORD *)&this->m_shuffleFlag[2][0] = *(_OWORD *)&__that->m_shuffleFlag[2][0];
  *(_OWORD *)&this->m_shuffleFlag[3][0] = *(_OWORD *)&__that->m_shuffleFlag[3][0];
  *(_OWORD *)&this->m_shuffleFlag[4][0] = *(_OWORD *)&__that->m_shuffleFlag[4][0];
  *(_OWORD *)&this->m_shuffleFlag[5][0] = *(_OWORD *)&__that->m_shuffleFlag[5][0];
  *(_OWORD *)&this->m_shuffleFlag[6][0] = *(_OWORD *)&__that->m_shuffleFlag[6][0];
  *(_OWORD *)&this->m_shuffleFlag[7][0] = *(_OWORD *)&__that->m_shuffleFlag[7][0];
  *(_OWORD *)&this->m_shuffleFlag[8][0] = *(_OWORD *)&__that->m_shuffleFlag[8][0];
  *(_OWORD *)&this->m_shuffleFlag[9][0] = *(_OWORD *)&__that->m_shuffleFlag[9][0];
  *(_OWORD *)&this->m_shuffleFlag[10][0] = *(_OWORD *)&__that->m_shuffleFlag[10][0];
  *(_OWORD *)&this->m_shuffleFlag[11][0] = *(_OWORD *)&__that->m_shuffleFlag[11][0];
  *(_OWORD *)&this->m_shuffleFlag[12][0] = *(_OWORD *)&__that->m_shuffleFlag[12][0];
  std::vector<ParticleDataForChild>::vector<ParticleDataForChild>(
    &this->particleDataForChild,
    &__that->particleDataForChild);
  this->zSortDistance = __that->zSortDistance;
  this->mirrorFlag = __that->mirrorFlag;
  this->distortionRatio = __that->distortionRatio;
  this->defaultCurveKnot = __that->defaultCurveKnot;
  this->currentCurveKnot = __that->currentCurveKnot;
  this->curveRatioToFollow = __that->curveRatioToFollow;
  this->lightType = __that->lightType;
  this->decayRate = __that->decayRate;
  this->intensity = __that->intensity;
  this->coneAngle = __that->coneAngle;
  this->penumbra = __that->penumbra;
  this->emitSpecular = __that->emitSpecular;
  this->emitDiffuse = __that->emitDiffuse;
  v39 = &__that->LightingCoefficientOfFake.OGLVec4;
  if ( __that == (const ParticleData *)-1672i64 )
    v39 = 0i64;
  this->LightingCoefficientOfFake.OGLVec4 = *v39;
  this->LightingCoefficientOfFake.__vftable = (OGLEffectVec4_vtbl *)&OGLEffectVec4::`vftable';
}

// attributes: thunk
void __fastcall std::vector<ParticleData>::~vector<ParticleData>(std::vector<ParticleData> *this)
{
  std::vector<ParticleData>::_Tidy(this);
}

void __fastcall EffectLightManager::~EffectLightManager(EffectLightManager *this)
{
  Mtx_destroy_in_situ((_Mtx_internal_imp_t *)&this->m_LightDataMutex);
  OGLLight::finalize(&this->DefaultLight);
  std::vector<ParticleData>::_Tidy(&this->m_LightData);
  OGLLight::finalize(&this->EffectLightFor2P);
  OGLLight::finalize(&this->EffectLightFor1P);
  `eh vector destructor iterator'(this, 0x9Cui64, 1ui64, (void (__fastcall *)(void *))OGLLight::~OGLLight);
}

void __fastcall ParticleData::~ParticleData(ParticleData *this)
{
  ParticleDataForChild *Myfirst; // rcx

  this->LightingCoefficientOfFake.__vftable = (OGLEffectVec4_vtbl *)&OGLEffectVec4::`vftable';
  Myfirst = this->particleDataForChild._Mypair._Myval2._Myfirst;
  if ( Myfirst )
  {
    std::_Wrap_alloc<std::allocator<ParticleDataForChild>>::deallocate(
      (std::allocator<AgDisplayMode> *)Myfirst,
      (AgDisplayMode *)Myfirst,
      this->particleDataForChild._Mypair._Myval2._Myend - Myfirst);
    this->particleDataForChild._Mypair._Myval2._Myfirst = 0i64;
    this->particleDataForChild._Mypair._Myval2._Mylast = 0i64;
    this->particleDataForChild._Mypair._Myval2._Myend = 0i64;
  }
  this->Col.__vftable = (OGLEffectVec4_vtbl *)&OGLEffectVec4::`vftable';
  this->DefaultScaleAcc.__vftable = (OGLEffectVec3_vtbl *)&OGLEffectVec3::`vftable';
  this->DefaultRotQAcc.__vftable = (OGLEffectQuat_vtbl *)&OGLEffectQuat::`vftable';
  this->DefaultRotQVel.__vftable = (OGLEffectQuat_vtbl *)&OGLEffectQuat::`vftable';
  this->DefaultRotQ.__vftable = (OGLEffectQuat_vtbl *)&OGLEffectQuat::`vftable';
  this->LocalRotVel.__vftable = (OGLEffectQuat_vtbl *)&OGLEffectQuat::`vftable';
  this->LocalRot.__vftable = (OGLEffectQuat_vtbl *)&OGLEffectQuat::`vftable';
  this->DefaultEmitterMat.__vftable = (OGLEffectMatrix_vtbl *)&OGLEffectMatrix::`vftable';
  this->ActMat.__vftable = (OGLEffectMatrix_vtbl *)&OGLEffectMatrix::`vftable';
  this->DefaultActMat.__vftable = (OGLEffectMatrix_vtbl *)&OGLEffectMatrix::`vftable';
  this->ReferenceMat.__vftable = (OGLEffectMatrix_vtbl *)&OGLEffectMatrix::`vftable';
  this->DefaultReferenceMat.__vftable = (OGLEffectMatrix_vtbl *)&OGLEffectMatrix::`vftable';
  this->LocalMat.__vftable = (OGLEffectMatrix_vtbl *)&OGLEffectMatrix::`vftable';
  this->GlobalMat.__vftable = (OGLEffectMatrix_vtbl *)&OGLEffectMatrix::`vftable';
  this->WorldMat.__vftable = (OGLEffectMatrix_vtbl *)&OGLEffectMatrix::`vftable';
  this->DefaultScaleVel.__vftable = (OGLEffectVec3_vtbl *)&OGLEffectVec3::`vftable';
  this->DefaultScale.__vftable = (OGLEffectVec3_vtbl *)&OGLEffectVec3::`vftable';
  this->DefaultAcc.__vftable = (OGLEffectVec3_vtbl *)&OGLEffectVec3::`vftable';
  this->DefaultInheritanceVel.__vftable = (OGLEffectVec3_vtbl *)&OGLEffectVec3::`vftable';
  this->DefaultSpecifiedDir.__vftable = (OGLEffectVec3_vtbl *)&OGLEffectVec3::`vftable';
  this->DefaultDiffuseAxis.__vftable = (OGLEffectVec3_vtbl *)&OGLEffectVec3::`vftable';
  this->DefaultDiffuseAll.__vftable = (OGLEffectVec3_vtbl *)&OGLEffectVec3::`vftable';
  this->DefaultPos.__vftable = (OGLEffectVec3_vtbl *)&OGLEffectVec3::`vftable';
  this->GravityPos.__vftable = (OGLEffectVec3_vtbl *)&OGLEffectVec3::`vftable';
  this->GravityVel.__vftable = (OGLEffectVec3_vtbl *)&OGLEffectVec3::`vftable';
  this->ForceFieldVel.__vftable = (OGLEffectVec3_vtbl *)&OGLEffectVec3::`vftable';
  this->PreForceFieldPos.__vftable = (OGLEffectVec3_vtbl *)&OGLEffectVec3::`vftable';
  this->ForceFieldPos.__vftable = (OGLEffectVec3_vtbl *)&OGLEffectVec3::`vftable';
  this->LocalScaleVel.__vftable = (OGLEffectVec3_vtbl *)&OGLEffectVec3::`vftable';
  this->LocalScale.__vftable = (OGLEffectVec3_vtbl *)&OGLEffectVec3::`vftable';
  this->LocalVel.__vftable = (OGLEffectVec3_vtbl *)&OGLEffectVec3::`vftable';
  this->PreLocalPos.__vftable = (OGLEffectVec3_vtbl *)&OGLEffectVec3::`vftable';
  this->LocalPos.__vftable = (OGLEffectVec3_vtbl *)&OGLEffectVec3::`vftable';
  this->PreWorldPos.__vftable = (OGLEffectVec3_vtbl *)&OGLEffectVec3::`vftable';
  this->WorldPos.__vftable = (OGLEffectVec3_vtbl *)&OGLEffectVec3::`vftable';
}

std::vector<ParticleDataForChild> *__fastcall std::vector<ParticleDataForChild>::operator=(
        std::vector<ParticleDataForChild> *this,
        const std::vector<ParticleDataForChild> *_Right)
{
  ParticleDataForChild *Myfirst; // r9
  ParticleDataForChild *Mylast; // r8
  unsigned __int64 v6; // rbx
  ParticleDataForChild *v7; // r10
  unsigned __int64 v8; // r11
  signed __int64 v9; // rcx
  char *v10; // rsi
  ParticleDataForChild *v11; // rdi
  char *v12; // rbx
  ParticleDataForChild *v13; // rdi
  size_t v14; // rbx

  if ( this != _Right )
  {
    Myfirst = _Right->_Mypair._Myval2._Myfirst;
    Mylast = _Right->_Mypair._Myval2._Mylast;
    if ( _Right->_Mypair._Myval2._Myfirst == Mylast )
    {
      this->_Mypair._Myval2._Mylast = this->_Mypair._Myval2._Myfirst;
    }
    else
    {
      v6 = Mylast - Myfirst;
      v7 = this->_Mypair._Myval2._Myfirst;
      v8 = this->_Mypair._Myval2._Mylast - this->_Mypair._Myval2._Myfirst;
      if ( v6 > v8 )
      {
        v9 = (char *)this->_Mypair._Myval2._Myend - (char *)v7;
        if ( v6 > v9 / 12 )
        {
          if ( v7 )
            std::_Wrap_alloc<std::allocator<ParticleDataForChild>>::deallocate(
              (std::allocator<AgDisplayMode> *)v9,
              (AgDisplayMode *)this->_Mypair._Myval2._Myfirst,
              v9 / 12);
          if ( std::vector<ParticleDataForChild>::_Buy(
                 this,
                 _Right->_Mypair._Myval2._Mylast - _Right->_Mypair._Myval2._Myfirst) )
          {
            v13 = this->_Mypair._Myval2._Myfirst;
            v14 = (char *)_Right->_Mypair._Myval2._Mylast - (char *)_Right->_Mypair._Myval2._Myfirst;
            memmove(this->_Mypair._Myval2._Myfirst, _Right->_Mypair._Myval2._Myfirst, v14);
            this->_Mypair._Myval2._Mylast = (ParticleDataForChild *)((char *)v13 + v14);
          }
        }
        else
        {
          v10 = (char *)&Myfirst[v8];
          memmove(this->_Mypair._Myval2._Myfirst, Myfirst, 12 * v8);
          v11 = this->_Mypair._Myval2._Mylast;
          v12 = (char *)((char *)_Right->_Mypair._Myval2._Mylast - v10);
          memmove(v11, v10, (size_t)v12);
          this->_Mypair._Myval2._Mylast = (ParticleDataForChild *)((char *)v11 + (_QWORD)v12);
        }
      }
      else
      {
        memmove(this->_Mypair._Myval2._Myfirst, Myfirst, (char *)Mylast - (char *)Myfirst);
        this->_Mypair._Myval2._Mylast = &this->_Mypair._Myval2._Myfirst[_Right->_Mypair._Myval2._Mylast
                                                                      - _Right->_Mypair._Myval2._Myfirst];
      }
    }
  }
  return this;
}

ParticleData *__fastcall ParticleData::operator=(ParticleData *this, const ParticleData *__that)
{
  OGLMatrix *v4; // rcx
  __int128 v5; // xmm1
  OGLMatrix *v6; // rcx
  __int128 v7; // xmm1
  OGLMatrix *v8; // rcx
  __int128 v9; // xmm1
  OGLMatrix *v10; // rcx
  __int128 v11; // xmm1
  OGLMatrix *v12; // rcx
  OGLMatrix *v13; // rcx
  __int128 v14; // xmm1
  OGLMatrix *v15; // rcx
  __int128 v16; // xmm1
  OGLMatrix *v17; // rcx
  __int128 v18; // xmm1
  OGLVec3 *v19; // rcx
  OGLVec3 *v20; // rcx
  OGLVec3 *v21; // rcx
  OGLVec3 *v22; // rcx
  OGLVec3 *v23; // rcx
  OGLQuat *v24; // rcx
  OGLQuat *v25; // rcx
  OGLQuat v26; // xmm0
  OGLVec3 *v27; // rcx
  OGLVec3 *v28; // rcx
  OGLVec3 *v29; // rcx
  OGLVec3 *v30; // rcx
  OGLVec3 *v31; // rcx
  OGLVec3 *v32; // rcx
  OGLVec3 *v33; // rcx
  OGLVec3 *v34; // rcx
  OGLVec3 *v35; // rcx
  OGLVec3 *v36; // rcx
  OGLVec3 *v37; // rcx
  OGLVec3 *v38; // rcx
  OGLVec3 *v39; // rcx
  OGLVec3 *v40; // rcx
  OGLVec3 *v41; // rcx
  OGLVec3 *v42; // rcx
  OGLQuat *v43; // rcx
  OGLQuat v44; // xmm0
  OGLQuat *v45; // rcx
  OGLQuat v46; // xmm0
  OGLQuat *v47; // rcx
  OGLQuat v48; // xmm0
  OGLVec4 *v49; // rcx
  int *m_AnimationNum; // rcx
  __int64 v51; // r8
  signed __int64 v52; // rdx
  __int64 v53; // r9
  int *m_OldAge; // rcx
  unsigned int (*m_shuffleFlag)[4]; // rcx
  __int64 v56; // r8
  OGLVec4 *v57; // rcx
  ParticleData *result; // rax

  this->isUsed = __that->isUsed;
  this->jobNum = __that->jobNum;
  this->playerNum = __that->playerNum;
  this->parentID = __that->parentID;
  this->ID = __that->ID;
  this->age = __that->age;
  this->lifeLimit = __that->lifeLimit;
  this->Flags = __that->Flags;
  this->Model = __that->Model;
  v4 = &__that->WorldMat.OGLMatrix;
  if ( __that == (const ParticleData *)-40i64 )
    v4 = 0i64;
  *(_OWORD *)this->WorldMat.m = *(_OWORD *)v4->m;
  *(_OWORD *)&this->WorldMat.m[4] = *(_OWORD *)&v4->m[4];
  *(_OWORD *)&this->WorldMat.m[8] = *(_OWORD *)&v4->m[8];
  v5 = *(_OWORD *)&v4->m[12];
  v6 = &__that->GlobalMat.OGLMatrix;
  if ( __that == (const ParticleData *)-112i64 )
    v6 = 0i64;
  *(_OWORD *)&this->WorldMat.m[12] = v5;
  *(_OWORD *)this->GlobalMat.m = *(_OWORD *)v6->m;
  *(_OWORD *)&this->GlobalMat.m[4] = *(_OWORD *)&v6->m[4];
  *(_OWORD *)&this->GlobalMat.m[8] = *(_OWORD *)&v6->m[8];
  v7 = *(_OWORD *)&v6->m[12];
  v8 = &__that->LocalMat.OGLMatrix;
  if ( __that == (const ParticleData *)-184i64 )
    v8 = 0i64;
  *(_OWORD *)&this->GlobalMat.m[12] = v7;
  *(_OWORD *)this->LocalMat.m = *(_OWORD *)v8->m;
  *(_OWORD *)&this->LocalMat.m[4] = *(_OWORD *)&v8->m[4];
  *(_OWORD *)&this->LocalMat.m[8] = *(_OWORD *)&v8->m[8];
  v9 = *(_OWORD *)&v8->m[12];
  v10 = &__that->DefaultReferenceMat.OGLMatrix;
  if ( __that == (const ParticleData *)-256i64 )
    v10 = 0i64;
  *(_OWORD *)&this->LocalMat.m[12] = v9;
  *(_OWORD *)this->DefaultReferenceMat.m = *(_OWORD *)v10->m;
  *(_OWORD *)&this->DefaultReferenceMat.m[4] = *(_OWORD *)&v10->m[4];
  *(_OWORD *)&this->DefaultReferenceMat.m[8] = *(_OWORD *)&v10->m[8];
  v11 = *(_OWORD *)&v10->m[12];
  v12 = &__that->ReferenceMat.OGLMatrix;
  if ( __that == (const ParticleData *)-328i64 )
    v12 = 0i64;
  *(_OWORD *)&this->DefaultReferenceMat.m[12] = v11;
  *(_OWORD *)this->ReferenceMat.m = *(_OWORD *)v12->m;
  *(_OWORD *)&this->ReferenceMat.m[4] = *(_OWORD *)&v12->m[4];
  *(_OWORD *)&this->ReferenceMat.m[8] = *(_OWORD *)&v12->m[8];
  *(_OWORD *)&this->ReferenceMat.m[12] = *(_OWORD *)&v12->m[12];
  v13 = &__that->DefaultActMat.OGLMatrix;
  if ( __that == (const ParticleData *)-400i64 )
    v13 = 0i64;
  *(_OWORD *)this->DefaultActMat.m = *(_OWORD *)v13->m;
  *(_OWORD *)&this->DefaultActMat.m[4] = *(_OWORD *)&v13->m[4];
  *(_OWORD *)&this->DefaultActMat.m[8] = *(_OWORD *)&v13->m[8];
  v14 = *(_OWORD *)&v13->m[12];
  v15 = &__that->ActMat.OGLMatrix;
  if ( __that == (const ParticleData *)-472i64 )
    v15 = 0i64;
  *(_OWORD *)&this->DefaultActMat.m[12] = v14;
  *(_OWORD *)this->ActMat.m = *(_OWORD *)v15->m;
  *(_OWORD *)&this->ActMat.m[4] = *(_OWORD *)&v15->m[4];
  *(_OWORD *)&this->ActMat.m[8] = *(_OWORD *)&v15->m[8];
  v16 = *(_OWORD *)&v15->m[12];
  v17 = &__that->DefaultEmitterMat.OGLMatrix;
  if ( __that == (const ParticleData *)-544i64 )
    v17 = 0i64;
  *(_OWORD *)&this->ActMat.m[12] = v16;
  *(_OWORD *)this->DefaultEmitterMat.m = *(_OWORD *)v17->m;
  *(_OWORD *)&this->DefaultEmitterMat.m[4] = *(_OWORD *)&v17->m[4];
  *(_OWORD *)&this->DefaultEmitterMat.m[8] = *(_OWORD *)&v17->m[8];
  v18 = *(_OWORD *)&v17->m[12];
  v19 = &__that->WorldPos.OGLVec3;
  if ( __that == (const ParticleData *)-616i64 )
    v19 = 0i64;
  *(_OWORD *)&this->DefaultEmitterMat.m[12] = v18;
  *(_QWORD *)&this->WorldPos.x = *(_QWORD *)&v19->x;
  this->WorldPos.z = v19->z;
  v20 = &__that->PreWorldPos.OGLVec3;
  if ( __that == (const ParticleData *)-640i64 )
    v20 = 0i64;
  *(_QWORD *)&this->PreWorldPos.x = *(_QWORD *)&v20->x;
  this->PreWorldPos.z = v20->z;
  v21 = &__that->LocalPos.OGLVec3;
  if ( __that == (const ParticleData *)-664i64 )
    v21 = 0i64;
  *(_QWORD *)&this->LocalPos.x = *(_QWORD *)&v21->x;
  this->LocalPos.z = v21->z;
  v22 = &__that->PreLocalPos.OGLVec3;
  if ( __that == (const ParticleData *)-688i64 )
    v22 = 0i64;
  *(_QWORD *)&this->PreLocalPos.x = *(_QWORD *)&v22->x;
  this->PreLocalPos.z = v22->z;
  v23 = &__that->LocalVel.OGLVec3;
  if ( __that == (const ParticleData *)-712i64 )
    v23 = 0i64;
  *(_QWORD *)&this->LocalVel.x = *(_QWORD *)&v23->x;
  this->LocalVel.z = v23->z;
  v24 = &__that->LocalRot.OGLQuat;
  if ( __that == (const ParticleData *)-736i64 )
    v24 = 0i64;
  this->LocalRot.OGLQuat = *v24;
  v25 = &__that->LocalRotVel.OGLQuat;
  if ( __that == (const ParticleData *)-760i64 )
    v25 = 0i64;
  v26 = *v25;
  v27 = &__that->LocalScale.OGLVec3;
  if ( __that == (const ParticleData *)-784i64 )
    v27 = 0i64;
  this->LocalRotVel.OGLQuat = v26;
  *(_QWORD *)&this->LocalScale.x = *(_QWORD *)&v27->x;
  this->LocalScale.z = v27->z;
  v28 = &__that->LocalScaleVel.OGLVec3;
  if ( __that == (const ParticleData *)-808i64 )
    v28 = 0i64;
  *(_QWORD *)&this->LocalScaleVel.x = *(_QWORD *)&v28->x;
  this->LocalScaleVel.z = v28->z;
  v29 = &__that->ForceFieldPos.OGLVec3;
  if ( __that == (const ParticleData *)-832i64 )
    v29 = 0i64;
  *(_QWORD *)&this->ForceFieldPos.x = *(_QWORD *)&v29->x;
  this->ForceFieldPos.z = v29->z;
  v30 = &__that->PreForceFieldPos.OGLVec3;
  if ( __that == (const ParticleData *)-856i64 )
    v30 = 0i64;
  *(_QWORD *)&this->PreForceFieldPos.x = *(_QWORD *)&v30->x;
  this->PreForceFieldPos.z = v30->z;
  v31 = &__that->ForceFieldVel.OGLVec3;
  if ( __that == (const ParticleData *)-880i64 )
    v31 = 0i64;
  *(_QWORD *)&this->ForceFieldVel.x = *(_QWORD *)&v31->x;
  this->ForceFieldVel.z = v31->z;
  v32 = &__that->GravityVel.OGLVec3;
  if ( __that == (const ParticleData *)-904i64 )
    v32 = 0i64;
  *(_QWORD *)&this->GravityVel.x = *(_QWORD *)&v32->x;
  this->GravityVel.z = v32->z;
  v33 = &__that->GravityPos.OGLVec3;
  if ( __that == (const ParticleData *)-928i64 )
    v33 = 0i64;
  *(_QWORD *)&this->GravityPos.x = *(_QWORD *)&v33->x;
  this->GravityPos.z = v33->z;
  v34 = &__that->DefaultPos.OGLVec3;
  if ( __that == (const ParticleData *)-952i64 )
    v34 = 0i64;
  *(_QWORD *)&this->DefaultPos.x = *(_QWORD *)&v34->x;
  this->DefaultPos.z = v34->z;
  v35 = &__that->DefaultDiffuseAll.OGLVec3;
  if ( __that == (const ParticleData *)-976i64 )
    v35 = 0i64;
  *(_QWORD *)&this->DefaultDiffuseAll.x = *(_QWORD *)&v35->x;
  this->DefaultDiffuseAll.z = v35->z;
  v36 = &__that->DefaultDiffuseAxis.OGLVec3;
  if ( __that == (const ParticleData *)-1000i64 )
    v36 = 0i64;
  *(_QWORD *)&this->DefaultDiffuseAxis.x = *(_QWORD *)&v36->x;
  this->DefaultDiffuseAxis.z = v36->z;
  v37 = &__that->DefaultSpecifiedDir.OGLVec3;
  if ( __that == (const ParticleData *)-1024i64 )
    v37 = 0i64;
  *(_QWORD *)&this->DefaultSpecifiedDir.x = *(_QWORD *)&v37->x;
  this->DefaultSpecifiedDir.z = v37->z;
  v38 = &__that->DefaultInheritanceVel.OGLVec3;
  if ( __that == (const ParticleData *)-1048i64 )
    v38 = 0i64;
  *(_QWORD *)&this->DefaultInheritanceVel.x = *(_QWORD *)&v38->x;
  this->DefaultInheritanceVel.z = v38->z;
  v39 = &__that->DefaultAcc.OGLVec3;
  if ( __that == (const ParticleData *)-1072i64 )
    v39 = 0i64;
  *(_QWORD *)&this->DefaultAcc.x = *(_QWORD *)&v39->x;
  this->DefaultAcc.z = v39->z;
  v40 = &__that->DefaultScale.OGLVec3;
  if ( __that == (const ParticleData *)-1096i64 )
    v40 = 0i64;
  *(_QWORD *)&this->DefaultScale.x = *(_QWORD *)&v40->x;
  this->DefaultScale.z = v40->z;
  v41 = &__that->DefaultScaleVel.OGLVec3;
  if ( __that == (const ParticleData *)-1120i64 )
    v41 = 0i64;
  *(_QWORD *)&this->DefaultScaleVel.x = *(_QWORD *)&v41->x;
  this->DefaultScaleVel.z = v41->z;
  v42 = &__that->DefaultScaleAcc.OGLVec3;
  if ( __that == (const ParticleData *)-1144i64 )
    v42 = 0i64;
  *(_QWORD *)&this->DefaultScaleAcc.x = *(_QWORD *)&v42->x;
  this->DefaultScaleAcc.z = v42->z;
  v43 = &__that->DefaultRotQ.OGLQuat;
  if ( __that == (const ParticleData *)-1168i64 )
    v43 = 0i64;
  v44 = *v43;
  v45 = &__that->DefaultRotQVel.OGLQuat;
  if ( __that == (const ParticleData *)-1192i64 )
    v45 = 0i64;
  this->DefaultRotQ.OGLQuat = v44;
  v46 = *v45;
  v47 = &__that->DefaultRotQAcc.OGLQuat;
  if ( __that == (const ParticleData *)-1216i64 )
    v47 = 0i64;
  this->DefaultRotQVel.OGLQuat = v46;
  v48 = *v47;
  v49 = &__that->Col.OGLVec4;
  if ( __that == (const ParticleData *)-1240i64 )
    v49 = 0i64;
  this->DefaultRotQAcc.OGLQuat = v48;
  this->Col.OGLVec4 = *v49;
  this->RatioToFollow = __that->RatioToFollow;
  this->InheritanceVelocity = __that->InheritanceVelocity;
  m_AnimationNum = this->m_AnimationNum;
  v51 = 13i64;
  this->TexNum = __that->TexNum;
  v52 = (char *)__that - (char *)this;
  v53 = 13i64;
  do
  {
    *m_AnimationNum = *(int *)((char *)m_AnimationNum + v52);
    ++m_AnimationNum;
    --v53;
  }
  while ( v53 );
  m_OldAge = this->m_OldAge;
  do
  {
    *m_OldAge = *(int *)((char *)m_OldAge + v52);
    ++m_OldAge;
    --v51;
  }
  while ( v51 );
  m_shuffleFlag = this->m_shuffleFlag;
  v56 = 26i64;
  do
  {
    *(_DWORD *)m_shuffleFlag = *(_DWORD *)((char *)m_shuffleFlag + v52);
    (*m_shuffleFlag)[1] = *(unsigned int *)((char *)&(*m_shuffleFlag)[1] + v52);
    m_shuffleFlag = (unsigned int (*)[4])((char *)m_shuffleFlag + 8);
    --v56;
  }
  while ( v56 );
  std::vector<ParticleDataForChild>::operator=(&this->particleDataForChild, &__that->particleDataForChild);
  this->zSortDistance = __that->zSortDistance;
  this->mirrorFlag = __that->mirrorFlag;
  this->distortionRatio = __that->distortionRatio;
  this->defaultCurveKnot = __that->defaultCurveKnot;
  this->currentCurveKnot = __that->currentCurveKnot;
  this->curveRatioToFollow = __that->curveRatioToFollow;
  this->lightType = __that->lightType;
  this->decayRate = __that->decayRate;
  this->intensity = __that->intensity;
  this->coneAngle = __that->coneAngle;
  this->penumbra = __that->penumbra;
  this->emitSpecular = __that->emitSpecular;
  this->emitDiffuse = __that->emitDiffuse;
  v57 = &__that->LightingCoefficientOfFake.OGLVec4;
  result = this;
  if ( __that == (const ParticleData *)-1672i64 )
    v57 = 0i64;
  this->LightingCoefficientOfFake.OGLVec4 = *v57;
  return result;
}

extension::exsound_detail::SoundBankImpl *__fastcall extension::BasicFutureObject<extension::GFXIMovieData,void>::operator->(
        extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> *this,
        extension::AsyncStatus::Step a2)
{
  extension::AsyncContent<extension::exsound_detail::SoundBankImpl> *m_ptr; // rbx

  m_ptr = this->m_body.m_ptr->m_content.m_ptr;
  if ( !m_ptr || m_ptr->m_isDataReleased )
    return 0i64;
  if ( (m_ptr->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
    extension::AsyncStatus::waitFor(&m_ptr->m_status, a2);
  return m_ptr->m_data._Mypair._Myval2;
}

bool __fastcall std::vector<ParticleDataForChild>::_Buy(
        std::vector<ParticleDataForChild> *this,
        unsigned __int64 _Capacity)
{
  bool result; // al
  ParticleDataForChild *v5; // rax

  result = 0;
  this->_Mypair._Myval2._Myfirst = 0i64;
  this->_Mypair._Myval2._Mylast = 0i64;
  this->_Mypair._Myval2._Myend = 0i64;
  if ( _Capacity )
  {
    if ( _Capacity > 0x1555555555555555i64 )
      std::_Xlength_error("vector<T> too long");
    v5 = std::_Wrap_alloc<std::allocator<ParticleDataForChild>>::allocate(
           (std::_Wrap_alloc<std::allocator<ParticleDataForChild> > *)this,
           _Capacity);
    this->_Mypair._Myval2._Myfirst = v5;
    this->_Mypair._Myval2._Mylast = v5;
    result = 1;
    this->_Mypair._Myval2._Myend = &this->_Mypair._Myval2._Myfirst[_Capacity];
  }
  return result;
}

void __fastcall std::vector<ParticleData>::_Reallocate(
        std::vector<ParticleData> *this,
        unsigned __int64 _Count,
        __int64 a3,
        std::_Wrap_alloc<std::allocator<ParticleData> > *a4)
{
  ParticleData *v6; // rdi
  unsigned __int64 v7; // rcx
  void *v8; // rax
  ParticleData *Mylast; // r15
  ParticleData *Myfirst; // rbx
  signed __int64 v11; // r12

  if ( _Count )
  {
    if ( _Count > 0x26A439F656F182i64 )
      std::_Xbad_alloc();
    v7 = 1696 * _Count;
    if ( 1696 * _Count < 0x1000 )
    {
      v6 = (ParticleData *)operator new(v7);
    }
    else
    {
      if ( v7 + 39 <= v7 )
        std::_Xbad_alloc();
      v8 = operator new(v7 + 39);
      v6 = (ParticleData *)(((unsigned __int64)v8 + 39) & 0xFFFFFFFFFFFFFFE0ui64);
      *(_QWORD *)&v6[-1].LightingCoefficientOfFake.z = v8;
    }
  }
  else
  {
    v6 = 0i64;
  }
  std::_Uninitialized_move_al_unchecked1<ParticleData *,ParticleData *,std::allocator<ParticleData>>(
    this->_Mypair._Myval2._Myfirst,
    this->_Mypair._Myval2._Mylast,
    v6,
    a4);
  Mylast = this->_Mypair._Myval2._Mylast;
  Myfirst = this->_Mypair._Myval2._Myfirst;
  v11 = Mylast - this->_Mypair._Myval2._Myfirst;
  if ( this->_Mypair._Myval2._Myfirst )
  {
    for ( ; Myfirst != Mylast; ++Myfirst )
      ParticleData::~ParticleData(Myfirst);
    std::_Wrap_alloc<std::allocator<ParticleData>>::deallocate(
      (std::_Wrap_alloc<std::allocator<ParticleData> > *)((char *)this->_Mypair._Myval2._Myend
                                                        - (char *)this->_Mypair._Myval2._Myfirst),
      this->_Mypair._Myval2._Myfirst,
      this->_Mypair._Myval2._Myend - this->_Mypair._Myval2._Myfirst);
  }
  this->_Mypair._Myval2._Myend = &v6[_Count];
  this->_Mypair._Myval2._Mylast = &v6[v11];
  this->_Mypair._Myval2._Myfirst = v6;
}

void __fastcall std::vector<ParticleData>::_Reserve(std::vector<ParticleData> *this, unsigned __int64 _Count)
{
  ParticleData *Myend; // rcx
  ParticleData *Mylast; // r8
  signed __int64 v5; // rdx
  unsigned __int64 v6; // r8
  __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdx

  Myend = this->_Mypair._Myval2._Myend;
  Mylast = this->_Mypair._Myval2._Mylast;
  if ( !(Myend - Mylast) )
  {
    v5 = Mylast - this->_Mypair._Myval2._Myfirst;
    if ( v5 == 0x26A439F656F182i64 )
      std::_Xlength_error("vector<T> too long");
    v6 = v5 + 1;
    v7 = (unsigned __int128)(((char *)Myend - (char *)this->_Mypair._Myval2._Myfirst) * (__int128)0x4D4873ECADE304D5i64) >> 64;
    v8 = 0i64;
    v9 = ((unsigned __int64)v7 >> 63) + (v7 >> 9);
    if ( 0x26A439F656F182i64 - (v9 >> 1) >= v9 )
      v8 = v9 + (v9 >> 1);
    if ( v8 >= v6 )
      v6 = v8;
    std::vector<ParticleData>::_Reallocate(this, v6, v6, (std::_Wrap_alloc<std::allocator<ParticleData> > *)this);
  }
}

void __fastcall std::vector<ParticleData>::_Tidy(std::vector<ParticleData> *this)
{
  ParticleData *Myfirst; // rbx
  ParticleData *i; // rdi

  Myfirst = this->_Mypair._Myval2._Myfirst;
  if ( this->_Mypair._Myval2._Myfirst )
  {
    for ( i = this->_Mypair._Myval2._Mylast; Myfirst != i; ++Myfirst )
      ParticleData::~ParticleData(Myfirst);
    std::_Wrap_alloc<std::allocator<ParticleData>>::deallocate(
      (std::_Wrap_alloc<std::allocator<ParticleData> > *)((char *)this->_Mypair._Myval2._Myend
                                                        - (char *)this->_Mypair._Myval2._Myfirst),
      this->_Mypair._Myval2._Myfirst,
      this->_Mypair._Myval2._Myend - this->_Mypair._Myval2._Myfirst);
    this->_Mypair._Myval2._Myfirst = 0i64;
    this->_Mypair._Myval2._Mylast = 0i64;
    this->_Mypair._Myval2._Myend = 0i64;
  }
}

ParticleDataForChild *__fastcall std::_Wrap_alloc<std::allocator<ParticleDataForChild>>::allocate(
        std::_Wrap_alloc<std::allocator<ParticleDataForChild> > *this,
        unsigned __int64 _Count)
{
  unsigned __int64 v3; // rcx
  void *v4; // rax

  if ( !_Count )
    return 0i64;
  if ( _Count > 0x1555555555555555i64 )
    std::_Xbad_alloc();
  v3 = 12 * _Count;
  if ( 12 * _Count < 0x1000 )
    return (ParticleDataForChild *)operator new(v3);
  if ( v3 + 39 <= v3 )
    std::_Xbad_alloc();
  v4 = operator new(v3 + 39);
  *(_QWORD *)((((unsigned __int64)v4 + 39) & 0xFFFFFFFFFFFFFFE0ui64) - 8) = v4;
  return (ParticleDataForChild *)(((unsigned __int64)v4 + 39) & 0xFFFFFFFFFFFFFFE0ui64);
}

void __fastcall std::_Wrap_alloc<std::allocator<ParticleData>>::deallocate(
        std::_Wrap_alloc<std::allocator<ParticleData> > *this,
        ParticleData *_Ptr,
        unsigned __int64 _Count)
{
  ParticleData *v3; // rax
  char *v4; // rdx

  if ( _Count > 0x26A439F656F182i64 )
    invalid_parameter_noinfo_noreturn();
  if ( 1696 * _Count >= 0x1000 )
  {
    if ( ((unsigned __int8)_Ptr & 0x1F) != 0 )
      invalid_parameter_noinfo_noreturn();
    v3 = *(ParticleData **)&_Ptr[-1].LightingCoefficientOfFake.z;
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

void __fastcall std::_Wrap_alloc<std::allocator<ParticleDataForChild>>::deallocate(
        std::allocator<AgDisplayMode> *this,
        AgDisplayMode *_Ptr,
        unsigned __int64 _Count)
{
  AgDisplayMode *v3; // rax
  char *v4; // rdx

  if ( _Count > 0x1555555555555555i64 )
    invalid_parameter_noinfo_noreturn();
  if ( 12 * _Count >= 0x1000 )
  {
    if ( ((unsigned __int8)_Ptr & 0x1F) != 0 )
      invalid_parameter_noinfo_noreturn();
    v3 = *(AgDisplayMode **)&_Ptr[-1].m_height;
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

void __fastcall EffectLightManager::initialize(EffectLightManager *this)
{
  __int64 v1; // rdi
  __int64 i; // rbx
  int v3; // er11
  __int64 v4; // r10
  __int64 *v5; // rdx
  __int64 v6; // rax
  int v7; // er9
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rcx

  v1 = *(_QWORD *)&AppMain::pApp;
  for ( i = 0i64; i < 224; i += 56i64 )
  {
    v3 = 0;
    if ( *(int *)(i + v1 + 1551072) > 0 )
    {
      v4 = 0i64;
      do
      {
        v5 = (__int64 *)(v4 + *(_QWORD *)(i + v1 + 1551080));
        v6 = *v5;
        if ( *v5 )
        {
          if ( *(_QWORD *)(v6 + 8456) )
          {
            v7 = 0;
            if ( *(_BYTE *)(v6 + 8464) )
            {
              v8 = 0i64;
              do
              {
                v9 = *(_QWORD *)(*(_QWORD *)(*v5 + 8456) + v8 + 328);
                if ( v9 )
                {
                  v10 = *(_QWORD *)(v9 + 712);
                  if ( v10 )
                  {
                    if ( *(int *)v9 > 2 )
                    {
                      v11 = *(_QWORD *)(*(_QWORD *)(v10 + 288) + 288i64);
                      if ( v11 )
                        *(_BYTE *)(v11 + 4) = 0;
                    }
                  }
                }
                ++v7;
                v5 = (__int64 *)(v4 + *(_QWORD *)(i + v1 + 1551080));
                v8 += 1128i64;
              }
              while ( v7 < *(unsigned __int8 *)(*v5 + 8464) );
            }
          }
        }
        ++v3;
        v4 += 8i64;
      }
      while ( v3 < *(_DWORD *)(i + v1 + 1551072) );
    }
  }
}

void __fastcall std::vector<ParticleData>::push_back(std::vector<ParticleData> *this, const ParticleData *_Val)
{
  ParticleData *Mylast; // rcx
  ParticleData *Myfirst; // rax
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rdi
  ParticleData *v9; // rcx
  ParticleData *v10; // rcx

  Mylast = this->_Mypair._Myval2._Mylast;
  if ( _Val >= Mylast || (Myfirst = this->_Mypair._Myval2._Myfirst, this->_Mypair._Myval2._Myfirst > _Val) )
  {
    if ( Mylast == this->_Mypair._Myval2._Myend )
      std::vector<ParticleData>::_Reserve(this, (unsigned __int64)_Val);
    v10 = this->_Mypair._Myval2._Mylast;
    if ( v10 )
      ParticleData::ParticleData(v10, _Val);
  }
  else
  {
    v6 = (unsigned __int128)(((char *)_Val - (char *)Myfirst) * (__int128)0x4D4873ECADE304D5i64) >> 64;
    v7 = (__int64)((unsigned __int128)(((char *)_Val - (char *)Myfirst) * (__int128)0x4D4873ECADE304D5i64) >> 64) >> 9;
    v8 = (v7 >> 63) + v7;
    if ( Mylast == this->_Mypair._Myval2._Myend )
      std::vector<ParticleData>::_Reserve(this, v6);
    v9 = this->_Mypair._Myval2._Mylast;
    if ( v9 )
      ParticleData::ParticleData(v9, &this->_Mypair._Myval2._Myfirst[v8]);
  }
  ++this->_Mypair._Myval2._Mylast;
}

void __fastcall EffectLightManager::selectOwnLight(EffectLightManager *this, int charNum)
{
  int v3; // edx
  int v4; // edx
  ParticleData *Mylast; // r10
  ParticleData *v6; // r10
  int i; // ebx
  ParticleData *Myfirst; // r9
  sortLightOfOwn1P v9; // [rsp+38h] [rbp+10h] BYREF

  if ( !charNum )
    goto LABEL_6;
  v3 = charNum - 1;
  if ( !v3 )
  {
LABEL_5:
    Mylast = this->m_LightData._Mypair._Myval2._Mylast;
    std::_Sort_unchecked1<ParticleData *,__int64,sortLightOfOwn2P>(
      this->m_LightData._Mypair._Myval2._Myfirst,
      Mylast,
      Mylast - this->m_LightData._Mypair._Myval2._Myfirst,
      (sortLightOfOwn2P *)&v9);
    goto LABEL_7;
  }
  v4 = v3 - 1;
  if ( !v4 )
  {
LABEL_6:
    v6 = this->m_LightData._Mypair._Myval2._Mylast;
    std::_Sort_unchecked1<ParticleData *,__int64,sortLightOfOwn1P>(
      this->m_LightData._Mypair._Myval2._Myfirst,
      v6,
      v6 - this->m_LightData._Mypair._Myval2._Myfirst,
      &v9);
    goto LABEL_7;
  }
  if ( v4 == 1 )
    goto LABEL_5;
LABEL_7:
  for ( i = 0; i < 1; ++i )
  {
    if ( this->m_LightData._Mypair._Myval2._Mylast - this->m_LightData._Mypair._Myval2._Myfirst > (unsigned __int64)i )
    {
      Myfirst = this->m_LightData._Mypair._Myval2._Myfirst;
      if ( this->m_LightData._Mypair._Myval2._Mylast - Myfirst <= (unsigned __int64)i )
        std::_Xout_of_range("invalid vector<T> subscript");
      EffectLightManager::setLightData(this, &Myfirst[i], i);
    }
  }
}

void __fastcall EffectLightManager::setLightData(EffectLightManager *this, ParticleData *setLight, int num)
{
  float v4; // xmm2_4
  float v5; // xmm1_4
  __int64 v6; // rdi
  float v7; // eax
  int lightType; // eax
  OGLMatrix *v9; // rcx
  float v10; // xmm1_4
  float v11; // xmm3_4
  float v12; // xmm0_4
  float y; // xmm1_4
  OGLVec3 v; // [rsp+28h] [rbp-20h] BYREF

  v4 = setLight->WorldMat.m[15];
  v5 = setLight->WorldMat.m[14];
  v6 = num;
  v7 = setLight->WorldMat.m[12];
  this->EffectLight[v6].m_fPosition[1] = setLight->WorldMat.m[13];
  this->EffectLight[v6].m_fPosition[2] = v5;
  this->EffectLight[v6].m_fPosition[3] = v4;
  this->EffectLight[v6].m_fPosition[0] = v7;
  *(__m128 *)this->EffectLight[v6].m_fDiffuse = _mm_div_ps((__m128)setLight->Col.OGLVec4, (__m128)_xmm);
  this->EffectLight[v6].m_bCastsShadows = 0;
  this->EffectLight[v6].m_fConeAngleRad = setLight->coneAngle;
  this->EffectLight[v6].m_fPenumbraRad = setLight->penumbra;
  this->EffectLight[v6].m_fIntensity = setLight->intensity;
  this->EffectLight[v6].m_bEmitSpecular = setLight->emitSpecular;
  this->EffectLight[v6].m_bEmitDiffuse = setLight->emitDiffuse;
  this->EffectLight[v6].m_DecayRate = setLight->decayRate;
  lightType = setLight->lightType;
  if ( lightType < 4 )
    this->EffectLight[v6].m_LightType = lightType;
  v9 = &setLight->WorldMat.OGLMatrix;
  if ( setLight == (ParticleData *)-40i64 )
    v9 = 0i64;
  v10 = v9->m[4];
  v11 = (float)((float)(v9->m[6] * 0.0) + (float)(v9->m[2] * 0.0)) - (float)(v9->m[10] * 1.0);
  v12 = v9->m[0];
  v.y = (float)((float)(v9->m[5] * 0.0) + (float)(v9->m[1] * 0.0)) - (float)(v9->m[9] * 1.0);
  v.z = v11;
  v.x = (float)((float)(v10 * 0.0) + (float)(v12 * 0.0)) - (float)(v9->m[8] * 1.0);
  OGLVec3::normalize(&v, &v);
  y = v.y;
  this->EffectLight[v6].m_fDirection[0] = v.x;
  this->EffectLight[v6].m_fDirection[2] = v.z;
  this->EffectLight[v6].m_fDirection[1] = y;
  ++this->lightCount;
}

void __fastcall EffectLightManager::setModelRoomLight(EffectLightManager *this)
{
  int i; // esi
  extension::AsyncStatus::Step v3; // edx
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rax
  int v10; // eax
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int64 v19; // rcx
  __int64 v20; // rax
  int v21; // eax
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int64 v30; // r8
  int v31; // er9
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rcx
  float v36; // xmm3_4
  float v37; // xmm4_4
  float v38; // xmm5_4
  float v39; // xmm1_4
  float v40; // xmm2_4
  OGLLight::LightType m_LightType; // eax
  bool v42; // r8

  for ( i = 0; i < 4; ++i )
  {
    EffectLightManager::selectOwnLight(this, i);
    switch ( i )
    {
      case 0:
        v8 = *(_QWORD *)&AppMain::pApp;
        v20 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)&AppMain::pApp + 11064i64) + 40i64) + 16i64);
        if ( !v20 || *(_BYTE *)(v20 + 96) )
          continue;
        v21 = *(_DWORD *)&this->EffectLight[0].m_bCastsShadows;
        v22 = *(_OWORD *)&this->EffectLight[0].m_DecayRate;
        *(_OWORD *)&this->EffectLightFor1P.m_nId = *(_OWORD *)&this->EffectLight[0].m_nId;
        v23 = *(_OWORD *)&this->EffectLight[0].m_fAmbient[3];
        *(_OWORD *)&this->EffectLightFor1P.m_DecayRate = v22;
        v24 = *(_OWORD *)&this->EffectLight[0].m_fDiffuse[3];
        *(_OWORD *)&this->EffectLightFor1P.m_fAmbient[3] = v23;
        v25 = *(_OWORD *)&this->EffectLight[0].m_fSpecular[3];
        *(_OWORD *)&this->EffectLightFor1P.m_fDiffuse[3] = v24;
        v26 = *(_OWORD *)&this->EffectLight[0].m_fPosition[3];
        *(_OWORD *)&this->EffectLightFor1P.m_fSpecular[3] = v25;
        v27 = *(_OWORD *)this->EffectLight[0].m_fDirection;
        *(_OWORD *)&this->EffectLightFor1P.m_fPosition[3] = v26;
        v28 = *(_OWORD *)&this->EffectLight[0].m_fEyePosition[1];
        *(_OWORD *)this->EffectLightFor1P.m_fDirection = v27;
        v29 = *(_OWORD *)&this->EffectLight[0].m_fPenumbraRad;
        *(_OWORD *)&this->EffectLightFor1P.m_fEyePosition[1] = v28;
        *(_QWORD *)&v28 = *(_QWORD *)&this->EffectLight[0].m_fLinearAttenuation;
        *(_OWORD *)&this->EffectLightFor1P.m_fPenumbraRad = v29;
        *(_QWORD *)&this->EffectLightFor1P.m_fLinearAttenuation = v28;
        *(_DWORD *)&this->EffectLightFor1P.m_bCastsShadows = v21;
        v19 = *(_QWORD *)(*(_QWORD *)(v8 + 11064) + 40i64);
LABEL_20:
        v6 = *(_QWORD *)(v19 + 16);
        if ( v6 && !*(_BYTE *)(v6 + 96) )
        {
          if ( (*(_QWORD *)(v6 + 88) & 1) == 0 )
            extension::AsyncStatus::waitFor((extension::AsyncStatus *)(v6 + 88), (extension::AsyncStatus::Step)v8);
          goto LABEL_24;
        }
        goto LABEL_25;
      case 1:
        v8 = *(_QWORD *)&AppMain::pApp;
        v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)&AppMain::pApp + 11064i64) + 56i64) + 16i64);
        if ( !v9 || *(_BYTE *)(v9 + 96) )
          continue;
        v10 = *(_DWORD *)&this->EffectLight[0].m_bCastsShadows;
        v11 = *(_OWORD *)&this->EffectLight[0].m_DecayRate;
        *(_OWORD *)&this->EffectLightFor2P.m_nId = *(_OWORD *)&this->EffectLight[0].m_nId;
        v12 = *(_OWORD *)&this->EffectLight[0].m_fAmbient[3];
        *(_OWORD *)&this->EffectLightFor2P.m_DecayRate = v11;
        v13 = *(_OWORD *)&this->EffectLight[0].m_fDiffuse[3];
        *(_OWORD *)&this->EffectLightFor2P.m_fAmbient[3] = v12;
        v14 = *(_OWORD *)&this->EffectLight[0].m_fSpecular[3];
        *(_OWORD *)&this->EffectLightFor2P.m_fDiffuse[3] = v13;
        v15 = *(_OWORD *)&this->EffectLight[0].m_fPosition[3];
        *(_OWORD *)&this->EffectLightFor2P.m_fSpecular[3] = v14;
        v16 = *(_OWORD *)this->EffectLight[0].m_fDirection;
        *(_OWORD *)&this->EffectLightFor2P.m_fPosition[3] = v15;
        v17 = *(_OWORD *)&this->EffectLight[0].m_fEyePosition[1];
        *(_OWORD *)this->EffectLightFor2P.m_fDirection = v16;
        v18 = *(_OWORD *)&this->EffectLight[0].m_fPenumbraRad;
        *(_OWORD *)&this->EffectLightFor2P.m_fEyePosition[1] = v17;
        *(_QWORD *)&v17 = *(_QWORD *)&this->EffectLight[0].m_fLinearAttenuation;
        *(_OWORD *)&this->EffectLightFor2P.m_fPenumbraRad = v18;
        *(_QWORD *)&this->EffectLightFor2P.m_fLinearAttenuation = v17;
        *(_DWORD *)&this->EffectLightFor2P.m_bCastsShadows = v10;
        v19 = *(_QWORD *)(*(_QWORD *)(v8 + 11064) + 56i64);
        goto LABEL_20;
      case 2:
        v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)&AppMain::pApp + 11064i64) + 72i64);
        break;
      case 3:
        v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)&AppMain::pApp + 11064i64) + 88i64);
        break;
      default:
        continue;
    }
    v5 = *(_QWORD *)(v4 + 16);
    if ( v5 && !*(_BYTE *)(v5 + 96) )
    {
      v6 = *(_QWORD *)(v4 + 16);
      if ( !*(_BYTE *)(v5 + 96) )
      {
        if ( (*(_QWORD *)(v5 + 88) & 1) == 0 )
        {
          extension::AsyncStatus::waitFor((extension::AsyncStatus *)(v5 + 88), v3);
          v7 = *(_QWORD *)(v6 + 72);
          goto LABEL_26;
        }
LABEL_24:
        v7 = *(_QWORD *)(v6 + 72);
LABEL_26:
        if ( (int)((__int64)(*(_QWORD *)(v7 + 208) - *(_QWORD *)(v7 + 200)) >> 3) <= 0 )
          v30 = 0i64;
        else
          v30 = **(_QWORD **)(v7 + 200);
        if ( v30 )
        {
          if ( this->m_LightData._Mypair._Myval2._Mylast - this->m_LightData._Mypair._Myval2._Myfirst )
          {
            v31 = 0;
            if ( *(_BYTE *)(v30 + 8464) )
            {
              v32 = 0i64;
              do
              {
                v33 = *(_QWORD *)(v32 + *(_QWORD *)(v30 + 8456) + 328);
                if ( v33 )
                {
                  v34 = *(_QWORD *)(v33 + 712);
                  if ( v34 )
                  {
                    if ( *(int *)v33 > 2 )
                    {
                      v35 = *(_QWORD *)(*(_QWORD *)(v34 + 288) + 288i64);
                      if ( v35 )
                      {
                        v36 = this->EffectLight[0].m_fDirection[0];
                        v37 = this->EffectLight[0].m_fDirection[1];
                        v38 = this->EffectLight[0].m_fDirection[2];
                        v39 = this->EffectLight[0].m_fPosition[1];
                        v40 = this->EffectLight[0].m_fPosition[2];
                        *(float *)(v35 + 68) = this->EffectLight[0].m_fPosition[0];
                        *(float *)(v35 + 72) = v39;
                        *(float *)(v35 + 76) = v40;
                        *(float *)(v35 + 96) = v36;
                        *(float *)(v35 + 100) = v37;
                        *(float *)(v35 + 104) = v38;
                        *(_DWORD *)(v35 + 80) = 1065353216;
                        *(_OWORD *)(v35 + 36) = *(_OWORD *)this->EffectLight[0].m_fDiffuse;
                        *(_BYTE *)(v35 + 152) = this->EffectLight[0].m_bCastsShadows;
                        *(float *)(v35 + 124) = this->EffectLight[0].m_fConeAngleRad;
                        *(float *)(v35 + 128) = this->EffectLight[0].m_fPenumbraRad;
                        *(float *)(v35 + 136) = this->EffectLight[0].m_fIntensity;
                        *(_BYTE *)(v35 + 154) = this->EffectLight[0].m_bEmitSpecular;
                        *(_BYTE *)(v35 + 153) = this->EffectLight[0].m_bEmitDiffuse;
                        *(_DWORD *)(v35 + 16) = this->EffectLight[0].m_DecayRate;
                        m_LightType = this->EffectLight[0].m_LightType;
                        if ( m_LightType < LIGHT_TYPE_END )
                          *(_DWORD *)(v35 + 12) = m_LightType;
                      }
                    }
                  }
                }
                ++v31;
                v32 += 1128i64;
              }
              while ( v31 < *(unsigned __int8 *)(v30 + 8464) );
            }
            v42 = 1;
          }
          else
          {
            v42 = 0;
          }
          AppMain::setEffectLightOn(*(AppMain **)&AppMain::pApp, i, v42);
        }
        continue;
      }
LABEL_25:
      v7 = 0i64;
      goto LABEL_26;
    }
  }
}

void __fastcall EffectLightManager::update(EffectLightManager *this)
{
  ParticleData *Mylast; // rsi
  ParticleData *Myfirst; // rbx

  this->lightCount = 0;
  *(_QWORD *)this->EffectLight[0].m_fDiffuse = 0i64;
  *(_QWORD *)&this->EffectLight[0].m_fDiffuse[2] = 0i64;
  *(_WORD *)&this->EffectLight[0].m_bCastsShadows = 0;
  *(_QWORD *)&this->EffectLight[0].m_fConeAngleRad = 0i64;
  this->EffectLight[0].m_fIntensity = 0.0;
  this->EffectLight[0].m_bEmitSpecular = 0;
  *(_QWORD *)&this->EffectLight[0].m_LightType = 0i64;
  EffectLightManager::setModelRoomLight(this);
  Mylast = this->m_LightData._Mypair._Myval2._Mylast;
  Myfirst = this->m_LightData._Mypair._Myval2._Myfirst;
  if ( Myfirst == Mylast )
  {
    this->m_LightData._Mypair._Myval2._Mylast = Myfirst;
  }
  else
  {
    do
      ParticleData::~ParticleData(Myfirst++);
    while ( Myfirst != Mylast );
    this->m_LightData._Mypair._Myval2._Mylast = this->m_LightData._Mypair._Myval2._Myfirst;
  }
}

