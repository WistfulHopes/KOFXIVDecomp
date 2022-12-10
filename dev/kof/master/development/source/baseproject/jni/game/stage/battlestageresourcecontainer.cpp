#include "dev/kof/master/development/source/ps4project/baseproject/extension/bilinkable.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleloading.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/shot/actorshot.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actorchara.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_states.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/mat_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_exception.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/commandcheck.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/tga_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_statebag.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/restrictringbuffer.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/titlestoragesystem.h"
#include "program files (x86)/windows kits/8.1/include/shared/stralign.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thread"
#include "dev/silverware/git/sdk/agreferenceinl.h"
#include "dev/kof/master/development/source/ps4project/baseproject/pcutil/pccontrolsmanager.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/memory"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/limits"
#include "dev/kof/master/development/source/baseproject/jni/game/player/materialshowcontrol.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_simplemeshcache.h"
#include "dev/silverware/git/sdk/input/aginputmanager.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/silverware/git/sdk/agsingleton.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/fontprovider/render_fontproviderwinapi.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector4unaligned.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/syncmenuimage.h"
#include "dev/silverware/git/sdk/agreferencecountinl.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_ps4modelroom.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/moviedatadefine.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/future_asset.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charahitrectformat.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/asyncjob.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/resourcemanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_bundle.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/vecidx_aos.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/atomic_int.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/floatinvec.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/tuple"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloatmp.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/atomic"
#include "dev/silverware/git/sdk/3rdparty/steam/isteamhtmlsurface.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapemeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/jpeg_imagefile.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treetext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefileutil.h"
#include "dev/silverware/git/sdk/platforms/pc/system/agpcsysteminfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/string"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_docview.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/rapper/graphicsopt.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/ostream"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestageresourcecontainer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_range.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/quat_aos.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestageshader.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actor.h"
#include "dev/silverware/git/sdk/system/agusermanager.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/ios"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charadataunify.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/floatinvec.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocnum"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_hash.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaattackdataformat.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charadamagesettingformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "program files (x86)/windows kits/8.1/include/um/winnt.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix4x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixpool.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_vec64.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_new.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shader.h"
#include "dev/silverware/git/sdk/util/agservice.h"
#include "program files (x86)/windows kits/8.1/include/shared/basetsd.h"
#include "dev/silverware/git/sdk/input/agcontrollerbuttoncomponent.h"
#include "dev/silverware/git/sdk/input/agcontroller.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_sgmlparser.h"
#include "dev/silverware/git/sdk/agthreadpool.h"
#include "dev/silverware/git/sdk/agstream.h"
#include "dev/silverware/git/sdk/system/aguser.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_context.h"
#include "dev/silverware/git/sdk/agstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_constants.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_math.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessgen.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treeshape.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessellator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmodel.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/vec_aos.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglcurve.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/refcountable.h"
#include "dev/silverware/git/sdk/agconditionvariable.inl"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "dev/silverware/git/sdk/agpointerinl.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/combomissiondataformat.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/sounddata.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/soundgroupdataformat.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/effect.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/stdexcept"
#include "dev/kof/master/development/source/baseproject/jni/game/network/playtogether.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitivebundle.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/exception"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/type_traits"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treecachenode.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_bank.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treenode.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_loader.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steam_api_internal.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/mat_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstddef"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cacheeffect.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_system.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphfitter.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglsprite.h"
#include "dev/silverware/git/sdk/input/agsdlmappingparser.h"
#include "dev/silverware/git/sdk/agmutex.inl"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_player.h"
#include "dev/silverware/git/sdk/agrectangle.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_types.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglrender.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/shaderfxhelper.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_resource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/silverware/git/sdk/aghash.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/mediamanager.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/effect/actoreffect.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actorobject.h"
#include "dev/silverware/git/sdk/agstringutils.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglfog.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglbone.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/savedata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_stroker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "program files (x86)/windows kits/8.1/include/um/winuser.h"
#include "dev/silverware/git/sdk/memory/agallocators.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actoroption.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/dds_imagefile.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/audiopresenter.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/cameracheck.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steam_api.h"
#include "dev/silverware/git/sdk/agcondition.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/freecameracheck.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textmeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/input/imesystem.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphparam.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xxatomic"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/matrix4unaligned.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleonline.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcache.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/math.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/quat_aos.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/unordered_map"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdata/effectdata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcacheconfig.h"
#include "dev/silverware/git/sdk/agvector2.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hairliner.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xhash"
#include "dev/silverware/git/sdk/filesystem/agfile.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/savedatadefine.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/chartdata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_filterdesc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_styledtext.h"
#include "dev/silverware/git/sdk/filesystem/agpath.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix3x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_core.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_queue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_fontmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitive.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xfacet"
#include "dev/kof/master/development/source/baseproject/jni/game/cpuseq/battlecpu.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdata/effectappdata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocaddr.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmirror.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_radixtree.h"
#include "dev/kof/master/development/source/baseproject/jni/game/cpuseq/sequencecontroller.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdatalistmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_twips.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectcommon.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_containers.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_wwhelper.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_prefightfaceoff.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/translate_table.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/mediasound.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/shared_lua_context.h"
#include "dev/kof/master/development/source/baseproject/jni/game/system/battlesysteminfo.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_sse.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exlockable.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_types.h"
#include "dev/silverware/git/sdk/3rdparty/steam/matchmakingtypes.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_typeinfo.h"
#include "dev/silverware/git/sdk/agmemorystream.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/streambuf"
#include "dev/kof/master/development/source/baseproject/jni/game/appmain.h"
#include "dev/silverware/git/sdk/agmemorypool.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/hidpad/hidpadsystem.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/combomissionjudge.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xiosbase"
#include "dev/kof/master/development/source/baseproject/jni/game/util/soundutil.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocale"
#include "dev/kof/master/development/source/baseproject/jni/game/network/chkdiscononlinesv.h"
#include "program files (x86)/windows kits/8.1/include/um/winbase.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_vertex.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/debug/logging.h"
#include "dev/silverware/git/sdk/agmath.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/fontprovider/render_fontproviderhud.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_wstring.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglshader.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaprojectdataformat.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/heapmemory.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector2unaligned.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/randommt.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestageutil.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charabasestatusformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/mutex.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/inputkeyrecord.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_functions.h"
#include "dev/silverware/git/sdk/agreferencedobjectinl.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_hashkey.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlecall/battlecall.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/globalheapmemory.h"
#include "dev/silverware/git/sdk/agdisplay.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic0.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_debug.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/fixmemory.h"
#include "dev/silverware/git/sdk/agreferencedobject.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/system_error"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/bodypush.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threadcheck.h"
#include "dev/silverware/git/sdk/agcondition.inl"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textlayout.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_image.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/kof/master/development/source/baseproject/jni/game/network/netmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/kof/master/development/source/baseproject/jni/game/network/leaderboard.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogleffect.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/texstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_manager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_movie.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_operation.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogllight.h"
#include "dev/silverware/git/sdk/agvector4.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/bitset"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/particledata.h"
#include "dev/silverware/git/sdk/agvector3.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/map"
#include "dev/kof/master/development/source/baseproject/jni/game/player/weapon/actorweapon.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtree"
#include "dev/kof/master/development/source/baseproject/jni/game/system/battlecontroller.h"
#include "dev/silverware/git/sdk/input/agcontrollercomponent.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_screentoworld.h"
#include "dev/silverware/git/sdk/util/agservicecommand.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actionsystem.h"
#include "dev/silverware/git/sdk/util/agdelegate.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/boolinvec.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaactiondataformat.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steamclientpublic.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xutility"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/utility"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestage.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charafilebase.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_strokeraa.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_scale9grid.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exwaitcondition.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/list"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraystaticbuff.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/tkndata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/iosfwd"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cxform.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "dev/silverware/git/sdk/agthread.h"
#include "dev/silverware/git/sdk/util/agdebugchannels.h"
#include "dev/silverware/git/sdk/agmutex.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "dev/silverware/git/sdk/util/agperformancecounter.h"
#include "dev/silverware/git/sdk/agscopedlock.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/cameramotionpreviewsettings.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/stageprojectdata.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/commanddataformat.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/matchingsystem.h"
#include "dev/silverware/git/sdk/agclock.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/variableheapmemorybase.h"
#include "dev/silverware/git/sdk/agreferencecount.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector3unaligned.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocinfo"
#include "dev/silverware/git/sdk/agpointer.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstring"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestagedatas.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_event.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vector"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/tkndatas.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/png_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_keycodes.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory0"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/tween.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshkey.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixstate.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_gradients.h"
#include "dev/silverware/git/sdk/agmovieplayer.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/asynccharafileload.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_rasterizer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_viewport.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestageevent.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/physicalheapmemory.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/libcommon.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_drawableimage.h"
#include "dev/silverware/git/sdk/agsemaphore.h"
#include "dev/kof/master/development/source/ps4project/baseproject/pcutil/pcdummy.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/vec_aos.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hal.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_buffer.h"
#include "dev/silverware/git/sdk/agsemaphore.inl"
#include "dev/silverware/git/sdk/agconditionvariable.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/boolinvec.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thr/xthread"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/hitrectcollection.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/condition_variable"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_characterdef.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_missiondataloading.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/trainingsetting.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/combomissionattackeventlistener.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charamaterialsettingformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/fix32.h"
#include "dev/silverware/git/sdk/filesystem/agmount.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/vectormath_aos.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actorcharabase.h"
#include "dev/silverware/git/sdk/filesystem/agdirectory.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/functional"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/time.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/deque"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlehud.h"
#include "dev/kof/master/development/source/baseproject/jni/game/define/charabonedefine.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/operationmapper.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battleeventhandler.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/colorholder.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filters.h"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/damagesetting.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filterparams.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/sstream"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphqueue.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/battleplayerinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_font.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/mutex"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/array"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/chrono"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/easingnumber.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/errorchecker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessdefs.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/algorithm"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actionblackout.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatapacked.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_pathdatapacker.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleonlinewatching.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_linebuffer.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/jobmanager.h"
#include "dev/silverware/git/sdk/system/agsysteminfo.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_highlight.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/cpusequencedataformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_profiler.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exthread.h"
#include "program files (x86)/windows kits/8.1/include/shared/guiddef.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestagedatas.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/tkndatas.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exlockable.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/asyncjob.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exthread.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglrender.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/future_asset.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/fileutil.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmotion.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/fixmemory.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/cfile.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogltexture.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fonttexture.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/core/glstate.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/pcdummy.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/stageprojectdata.cpp"

class StageResources
{
public:
	TknFileDataDesc tkn; // 0x0
	extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> * pOGLModels; // 0x170
	long modelCount; // 0x178
	OGLMotion * * pOGLMotions; // 0x180
	long motionCount; // 0x188
	OGLTexture * * pOGLTextures; // 0x190
	long textureCount; // 0x198
	EffectDataListManager * * pEffectManagers; // 0x1A0
	long effectManagerCount; // 0x1A8
	StageResources();
	~StageResources();
	void dispose();
	bool createTknFile(const char *, const char *);
};
void StageResources::dispose(); // 0x140213D40
bool StageResources::createTknFile(const char * pTknFilePath, const char * pBasePath); // 0x140213F70
struct extension::FutureStageOption
{
	std::basic_string<char,std::char_traits<char>,std::allocator<char> > basePath; // 0x0
	FutureStageOption(const extension::FutureStageOption &);
	FutureStageOption();
	~FutureStageOption();
	bool operator==(const extension::FutureStageOption &);
	std::string stringize();
	extension::FutureStageOption & operator=(const extension::FutureStageOption &);
};
extension::FutureStageOption::~FutureStageOption(); // 0x140124610
std::string extension::FutureStageOption::stringize(); // 0x1402144B0
class extension::FutureObjectJob<StageResources> :
	extension::ExThread::Runnable,
	extension::AsyncContentConstants,
	extension::FutureObjectSpec
{
public:
	FutureObjectJob<StageResources>(extension::RefCountablePtr<extension::AsyncContent<StageResources> >);
private:
	FutureObjectJob<StageResources>(const extension::FutureObjectJob<StageResources> &);
	extension::FutureObjectJob<StageResources> & operator=(const extension::FutureObjectJob<StageResources> &);
	class ContentSharedPtr_t;
public:
	virtual ~FutureObjectJob<StageResources>();
	void setResult(std::unique_ptr<StageResources,std::default_delete<StageResources> > &);
	void setErrorResult(extension::AsyncContentConstants::ErrorCode);
	const std::string & contentPath();
	bool isCancelRequested();
	extension::RefCountablePtr<extension::AsyncContent<StageResources> > releaseContent();
	long run() = 0;
private:
	std::unique_ptr<StageResources,std::default_delete<StageResources> > createOnErrorData();
	extension::RefCountablePtr<extension::AsyncContent<StageResources> > m_content; // 0x18
};
class extension::future_asset_detail::FutureStageJob :
	extension::FutureObjectJob<StageResources>
{
	class Base_t;
private:
	extension::FutureStageOption options; // 0x20
public:
	FutureStageJob(extension::RefCountablePtr<extension::AsyncContent<StageResources> >, const extension::FutureStageOption *);
	virtual long run();
	virtual ~FutureStageJob();
};
extension::future_asset_detail::FutureStageJob::FutureStageJob(extension::RefCountablePtr<extension::AsyncContent<StageResources> > c, const extension::FutureStageOption * pOpt); // 0x140214590
long extension::future_asset_detail::FutureStageJob::run(); // 0x140214670
void extension::future_asset_detail::EnqueueFutureStageJob(extension::RefCountablePtr<extension::AsyncContent<StageResources> > shared, const extension::FutureStageOption * pOpt); // 0x140214820
struct extension::FutureObjectJobManager<StageResources,extension::FutureStageOption>
{
	class Content_t;
	class ContentSharedPtr_t;
	static extension::RefCountablePtr<extension::AsyncContent<StageResources> > LoadStart(const std::string &, const std::string &, const extension::FutureStageOption *);
	static std::string Stringize(const extension::FutureStageOption *);
private:
	static void EnqueueAsyncJob(extension::RefCountablePtr<extension::AsyncContent<StageResources> >, const extension::FutureStageOption *);
};
class extension::BasicFutureObject<StageResources,extension::FutureStageOption> :
	extension::AsyncContentConstants,
	extension::FutureObjectSpec
{
	class Content_t;
	class Body;
	class BodySharedPtr_t;
	class BodyWeakPtr_t;
private:
	bool m_isNoCache; // 0x1
	extension::RefCountablePtr<extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body> m_body; // 0x8
public:
	BasicFutureObject<StageResources,extension::FutureStageOption>(const extension::BasicFutureObject<StageResources,extension::FutureStageOption> &);
	BasicFutureObject<StageResources,extension::FutureStageOption>(extension::FutureObjectSpec::NoCache_t, const std::string &, const extension::FutureStageOption *);
	BasicFutureObject<StageResources,extension::FutureStageOption>(const std::string &, const extension::FutureStageOption *);
	BasicFutureObject<StageResources,extension::FutureStageOption>();
	~BasicFutureObject<StageResources,extension::FutureStageOption>();
	extension::BasicFutureObject<StageResources,extension::FutureStageOption> & operator=(const extension::BasicFutureObject<StageResources,extension::FutureStageOption> &);
	bool isEmpty();
	bool isReady();
	void waitForReady();
	const StageResources * get();
	bool hasData();
	extension::AsyncContentConstants::ErrorCode getErrorCode();
	const char * getErrorString();
	void reset();
	void dispose();
	StageResources * releaseData();
	StageResources * operator->();
	StageResources & operator*();
	StageResources * operator class StageResources *const();
	std::string contentPath();
	static extension::BasicFutureObject<StageResources,extension::FutureStageOption> MakeDataHolder(StageResources *);
	class AssetCache;
private:
	static extension::BasicFutureObject<StageResources,extension::FutureStageOption>::AssetCache s_cacheManager; // 0xFFFFFFFFFFFFFFFF
};
struct BattleStageResourcePack
{
	extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> * pStageModels; // 0x0
	extension::BasicFutureObject<StageResources,extension::FutureStageOption> datas; // 0x8
	BattleStageResourcePack(BattleStageResourcePack &);
	BattleStageResourcePack(const BattleStageResourcePack &);
	BattleStageResourcePack();
	~BattleStageResourcePack();
	BattleStageResourcePack & operator=(BattleStageResourcePack &);
	BattleStageResourcePack & operator=(const BattleStageResourcePack &);
};
extension::BasicFutureObject<StageResources,extension::FutureStageOption>::AssetCache extension::BasicFutureObject<StageResources,extension::FutureStageOption>::s_cacheManager; // 0x140ACDAA0
void(*??s_cacheManager$initializer$@?$BasicFutureObject@VStageResources@@UFutureStageOption@extension@@@extension@@0P6AXXZEA@@3P6AXXZEA)(); // 0x140740830
std::piecewise_construct_t std::piecewise_construct; // 0x1408A0B39
bool BattleStageResourceContainer::loadResources(const StageProjectData & stageProj, STAGE_ID stageID); // 0x140214920
void BattleStageResourceContainer::dispose(); // 0x140214C20
bool BattleStageResourceContainer::isCheckResource(extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> pStageModels); // 0x140214D70
bool BattleStageResourceContainer::setupParameters(extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> stageModels); // 0x140214E60
void BattleStageResourceContainer::setupDataScene(TknData * pData); // 0x140215DB0
void BattleStageResourceContainer::setupDataModel(TknData * pData); // 0x140215E50
void BattleStageResourceContainer::setupDataMotion(TknData * pData); // 0x1402160E0
void BattleStageResourceContainer::setupDataEvent(TknData * pData); // 0x1402164B0
void BattleStageResourceContainer::dataCompatibleConvert(long dataVersion); // 0x140216650
bool BattleStageResourceContainer::findScene(BSDataScene * * pOutScene, long * pOutScenePriority, TknData::SceneTrigger1 trigger1, TknData::SceneTrigger2 trigger2, const TknDataEventConditions::CheckParams * pParams); // 0x140216730
OGLModel * BattleStageResourceContainer::getStageModel(long modelIndex); // 0x1402168B0
EffectDataListManager * * BattleStageResourceContainer::getEffectManager(); // 0x140216950
long BattleStageResourceContainer::getEffectManagerCount(); // 0x1402169C0
long BattleStageResourceContainer::getNeutralSceneUID(); // 0x140216A30
OGLTexture * BattleStageResourceContainer::findOGLTextureByName(const char * pCheckName); // 0x140216A70
void BattleStageResourceContainer::setAuroraVisionMessage(const char * pMessage); // 0x140216C20//decompilation failure at 140ACDAA0!
//decompilation failure at 140740830!
//decompilation failure at 1408A0B39!
std::ostream *__fastcall std::operator<<<char>(std::ostream *_Ostr, const std::string *_Str)
{
  const std::string *Ptr; // r14
  int v4; // ebx
  unsigned __int64 Mysize; // r15
  __int64 v6; // rcx
  __int64 v7; // rdi
  unsigned __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rcx
  std::ostream *v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  unsigned __int8 v14; // r8
  _QWORD *v15; // rcx
  int *v16; // rdx
  _QWORD *v17; // rcx
  unsigned __int8 *v18; // rdx
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rcx
  unsigned __int8 v22; // r8
  _QWORD *v23; // rcx
  int *v24; // rdx
  _QWORD *v25; // rcx
  unsigned __int8 *v26; // rdx
  int v27; // eax
  std::ios_base *v28; // rcx
  int v29; // edx
  __int64 v30; // rcx

  Ptr = _Str;
  v4 = 0;
  Mysize = _Str->_Mypair._Myval2._Mysize;
  v6 = *(int *)(*(_QWORD *)_Ostr->gap0 + 4i64);
  v7 = *(_QWORD *)&_Ostr->gap0[v6 + 40];
  if ( v7 <= 0 || v7 <= Mysize )
    v8 = 0i64;
  else
    v8 = v7 - Mysize;
  v9 = *(_QWORD *)&_Ostr->gap0[v6 + 72];
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8i64))(v9);
  v10 = *(int *)(*(_QWORD *)_Ostr->gap0 + 4i64);
  if ( !*(_DWORD *)&_Ostr->gap0[v10 + 16] )
  {
    v11 = *(std::ostream **)&_Ostr->gap0[v10 + 80];
    if ( v11 )
    {
      if ( v11 != _Ostr )
        std::ostream::flush(v11);
    }
  }
  v12 = *(int *)(*(_QWORD *)_Ostr->gap0 + 4i64);
  if ( *(_DWORD *)&_Ostr->gap0[v12 + 16] )
  {
    v4 = 4;
  }
  else
  {
    if ( (*(_DWORD *)&_Ostr->gap0[v12 + 24] & 0x1C0) != 64 )
    {
      while ( v8 )
      {
        v13 = *(int *)(*(_QWORD *)_Ostr->gap0 + 4i64);
        v14 = _Ostr->gap0[v13 + 88];
        v15 = *(_QWORD **)&_Ostr->gap0[v13 + 72];
        if ( *(_QWORD *)v15[8] && (v16 = (int *)v15[11], *v16 > 0) )
        {
          --*v16;
          v17 = (_QWORD *)v15[8];
          v18 = (unsigned __int8 *)(*v17)++;
          *v18 = v14;
          v19 = v14;
        }
        else
        {
          v19 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD))(*v15 + 24i64))(v15, v14);
        }
        if ( v19 == -1 )
        {
          v4 = 4;
          goto LABEL_26;
        }
        --v8;
      }
    }
    if ( Ptr->_Mypair._Myval2._Myres >= 0x10 )
      Ptr = (const std::string *)Ptr->_Mypair._Myval2._Bx._Ptr;
    v20 = *(_QWORD *)&_Ostr->gap0[*(int *)(*(_QWORD *)_Ostr->gap0 + 4i64) + 72];
    if ( (*(__int64 (__fastcall **)(__int64, const std::string *, unsigned __int64))(*(_QWORD *)v20 + 72i64))(
           v20,
           Ptr,
           Mysize) == Mysize )
    {
LABEL_26:
      while ( v8 )
      {
        v21 = *(int *)(*(_QWORD *)_Ostr->gap0 + 4i64);
        v22 = _Ostr->gap0[v21 + 88];
        v23 = *(_QWORD **)&_Ostr->gap0[v21 + 72];
        if ( *(_QWORD *)v23[8] && (v24 = (int *)v23[11], *v24 > 0) )
        {
          --*v24;
          v25 = (_QWORD *)v23[8];
          v26 = (unsigned __int8 *)(*v25)++;
          *v26 = v22;
          v27 = v22;
        }
        else
        {
          v27 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD))(*v23 + 24i64))(v23, v22);
        }
        if ( v27 == -1 )
        {
          v4 |= 4u;
          break;
        }
        --v8;
      }
    }
    else
    {
      v4 = 4;
    }
    *(_QWORD *)&_Ostr->gap0[*(int *)(*(_QWORD *)_Ostr->gap0 + 4i64) + 40] = 0i64;
  }
  v28 = (std::ios_base *)&_Ostr->gap0[*(int *)(*(_QWORD *)_Ostr->gap0 + 4i64)];
  if ( v4 )
  {
    v29 = v4 | v28->_Mystate | 4;
    if ( v28[1].__vftable )
      v29 = v4 | v28->_Mystate;
    std::ios_base::clear(v28, v29, 0);
  }
  if ( !std::uncaught_exception() )
    std::ostream::_Osfx(_Ostr);
  v30 = *(_QWORD *)&_Ostr->gap0[*(int *)(*(_QWORD *)_Ostr->gap0 + 4i64) + 72];
  if ( v30 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16i64))(v30);
  return _Ostr;
}

std::ostream *__fastcall std::operator<<<std::char_traits<char>>(std::ostream *_Ostr, const char *_Val)
{
  int v4; // ebx
  __int64 v5; // r14
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rcx
  std::ostream *v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  unsigned __int8 v14; // r8
  _QWORD *v15; // rcx
  int *v16; // rdx
  _QWORD *v17; // rcx
  unsigned __int8 *v18; // rdx
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rcx
  unsigned __int8 v22; // r8
  _QWORD *v23; // rcx
  int *v24; // rdx
  _QWORD *v25; // rcx
  unsigned __int8 *v26; // rdx
  int v27; // eax
  std::ios_base *v28; // rcx
  int v29; // edx
  __int64 v30; // rcx

  v4 = 0;
  if ( *_Val )
  {
    v5 = -1i64;
    do
      ++v5;
    while ( _Val[v5] );
  }
  else
  {
    v5 = 0i64;
  }
  v6 = *(int *)(*(_QWORD *)_Ostr->gap0 + 4i64);
  v7 = *(_QWORD *)&_Ostr->gap0[v6 + 40];
  if ( v7 <= 0 || v7 <= v5 )
    v8 = 0i64;
  else
    v8 = v7 - v5;
  v9 = *(_QWORD *)&_Ostr->gap0[v6 + 72];
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8i64))(v9);
  v10 = *(int *)(*(_QWORD *)_Ostr->gap0 + 4i64);
  if ( !*(_DWORD *)&_Ostr->gap0[v10 + 16] )
  {
    v11 = *(std::ostream **)&_Ostr->gap0[v10 + 80];
    if ( v11 )
    {
      if ( v11 != _Ostr )
        std::ostream::flush(v11);
    }
  }
  v12 = *(int *)(*(_QWORD *)_Ostr->gap0 + 4i64);
  if ( *(_DWORD *)&_Ostr->gap0[v12 + 16] )
  {
    v4 = 4;
  }
  else
  {
    if ( (*(_DWORD *)&_Ostr->gap0[v12 + 24] & 0x1C0) != 64 )
    {
      while ( v8 > 0 )
      {
        v13 = *(int *)(*(_QWORD *)_Ostr->gap0 + 4i64);
        v14 = _Ostr->gap0[v13 + 88];
        v15 = *(_QWORD **)&_Ostr->gap0[v13 + 72];
        if ( *(_QWORD *)v15[8] && (v16 = (int *)v15[11], *v16 > 0) )
        {
          --*v16;
          v17 = (_QWORD *)v15[8];
          v18 = (unsigned __int8 *)(*v17)++;
          *v18 = v14;
          v19 = v14;
        }
        else
        {
          v19 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD))(*v15 + 24i64))(v15, v14);
        }
        if ( v19 == -1 )
          goto LABEL_34;
        --v8;
      }
    }
    v20 = *(_QWORD *)&_Ostr->gap0[*(int *)(*(_QWORD *)_Ostr->gap0 + 4i64) + 72];
    if ( (*(__int64 (__fastcall **)(__int64, const char *, __int64))(*(_QWORD *)v20 + 72i64))(v20, _Val, v5) == v5 )
    {
      while ( v8 > 0 )
      {
        v21 = *(int *)(*(_QWORD *)_Ostr->gap0 + 4i64);
        v22 = _Ostr->gap0[v21 + 88];
        v23 = *(_QWORD **)&_Ostr->gap0[v21 + 72];
        if ( *(_QWORD *)v23[8] && (v24 = (int *)v23[11], *v24 > 0) )
        {
          --*v24;
          v25 = (_QWORD *)v23[8];
          v26 = (unsigned __int8 *)(*v25)++;
          *v26 = v22;
          v27 = v22;
        }
        else
        {
          v27 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD))(*v23 + 24i64))(v23, v22);
        }
        if ( v27 == -1 )
        {
          v4 = 4;
          break;
        }
        --v8;
      }
    }
    else
    {
LABEL_34:
      v4 = 4;
    }
    *(_QWORD *)&_Ostr->gap0[*(int *)(*(_QWORD *)_Ostr->gap0 + 4i64) + 40] = 0i64;
  }
  v28 = (std::ios_base *)&_Ostr->gap0[*(int *)(*(_QWORD *)_Ostr->gap0 + 4i64)];
  if ( v4 )
  {
    v29 = v4 | v28->_Mystate | 4;
    if ( v28[1].__vftable )
      v29 = v4 | v28->_Mystate;
    std::ios_base::clear(v28, v29, 0);
  }
  if ( !std::uncaught_exception() )
    std::ostream::_Osfx(_Ostr);
  v30 = *(_QWORD *)&_Ostr->gap0[*(int *)(*(_QWORD *)_Ostr->gap0 + 4i64) + 72];
  if ( v30 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16i64))(v30);
  return _Ostr;
}

std::_List_node<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >,void *> *__fastcall std::_List_buy<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body>>>::_Buynode<std::piecewise_construct_t const &,std::tuple<std::string const &>,std::tuple<>>(
        std::_List_buy<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >> *this,
        std::_List_node<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >,void *> *_Next,
        std::_List_node<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >,void *> *_Prev,
        const std::piecewise_construct_t *<_Val_0>,
        std::tuple<std::string const &> *<_Val_1>)
{
  std::_List_node<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >,void *> *v5; // rax
  std::_List_node<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >,void *> *v6; // rdi
  std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > *p_Myval; // rbx
  const std::string *Val; // rdx
  std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > *Ptr; // rax

  v5 = std::_List_alloc<std::_List_base_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLCamera,void>::Body>>>>::_Buynode0(
         this,
         _Next,
         _Prev);
  v6 = v5;
  p_Myval = &v5->_Myval;
  if ( v5 != (std::_List_node<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >,void *> *)-16i64 )
  {
    Val = <_Val_1>->_Myfirst._Val;
    v5->_Myval.first._Mypair._Myval2._Myres = 15i64;
    v5->_Myval.first._Mypair._Myval2._Mysize = 0i64;
    if ( v5->_Myval.first._Mypair._Myval2._Myres < 0x10 )
      Ptr = &v5->_Myval;
    else
      Ptr = (std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > *)p_Myval->first._Mypair._Myval2._Bx._Ptr;
    Ptr->first._Mypair._Myval2._Bx._Buf[0] = 0;
    std::string::assign((std::string *)&p_Myval->first, Val, 0i64, 0xFFFFFFFFFFFFFFFFui64);
    p_Myval->second.m_ptr = 0i64;
    p_Myval->second.m_proxy.m_ptr = 0i64;
  }
  return v6;
}

std::pair<std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > > > >,bool> *__fastcall std::_Hash<std::_Umap_traits<std::string,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>,std::_Uhash_compare<std::string,std::hash<std::string>,std::equal_to<std::string>>,std::allocator<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>>>,0>>::_Insert<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>>>>>>(
        std::_Hash<std::_Umap_traits<std::string,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body>,std::_Uhash_compare<std::string,std::hash<std::string >,std::equal_to<std::string > >,std::allocator<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > >,0> > *this,
        std::pair<std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > > > >,bool> *result,
        std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > *_Val,
        std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > > > > _Pnode)
{
  unsigned __int64 Mysize; // r12
  unsigned __int64 Myres; // r10
  std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > *Ptr; // r9
  __int64 v10; // rdx
  unsigned __int64 i; // rcx
  unsigned __int64 v12; // r9
  std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > > > > *Myfirst; // rax
  std::_List_node<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >,void *> *v14; // rsi
  std::_List_node<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >,void *> *Myhead; // rdi
  char **p_Myval; // rdx
  std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > *v17; // rcx
  size_t v18; // r15
  size_t v19; // r8
  extension::RefCountableWeakSupportBase::WeakProxy *m_ptr; // rcx
  std::_List_node<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >,void *> *Next; // rax
  std::_List_node<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >,void *> *Prev; // rdx
  std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > > > > *v24; // rdx
  std::_List_node<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >,void *> **p_Next; // rax
  std::_List_node<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >,void *> *v26; // rcx
  unsigned __int64 v27; // [rsp+20h] [rbp-48h]
  std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > *v28; // [rsp+80h] [rbp+18h]

  v28 = _Val;
  Mysize = _Val->first._Mypair._Myval2._Mysize;
  Myres = _Val->first._Mypair._Myval2._Myres;
  if ( Myres < 0x10 )
    Ptr = _Val;
  else
    Ptr = (std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > *)_Val->first._Mypair._Myval2._Bx._Ptr;
  v10 = 0xCBF29CE484222325ui64;
  for ( i = 0i64; i < Mysize; ++i )
    v10 = 0x100000001B3i64 * ((unsigned __int8)Ptr->first._Mypair._Myval2._Bx._Buf[i] ^ (unsigned __int64)v10);
  v12 = 16 * (v10 & this->_Mask);
  v27 = v12;
  Myfirst = this->_Vec._Mypair._Myval2._Myfirst;
  v14 = *(std::_List_node<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >,void *> **)((char *)&Myfirst->_Ptr + v12);
  if ( v14 == this->_List._Mypair._Myval2._Myhead )
    Myhead = this->_List._Mypair._Myval2._Myhead;
  else
    Myhead = **(std::_List_node<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >,void *> ***)((char *)&Myfirst[1]._Ptr + v12);
  if ( Myhead == v14 )
  {
LABEL_27:
    Next = _Pnode._Ptr->_Next;
    if ( Myhead != _Pnode._Ptr->_Next )
    {
      _Pnode._Ptr->_Prev->_Next = Next;
      Next->_Prev->_Next = Myhead;
      Myhead->_Prev->_Next = _Pnode._Ptr;
      Prev = Myhead->_Prev;
      Myhead->_Prev = Next->_Prev;
      Next->_Prev = _Pnode._Ptr->_Prev;
      _Pnode._Ptr->_Prev = Prev;
    }
    v24 = (std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > > > > *)((char *)this->_Vec._Mypair._Myval2._Myfirst + v12);
    if ( v24->_Ptr == this->_List._Mypair._Myval2._Myhead )
    {
      v24->_Ptr = _Pnode._Ptr;
      *(std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > > > > *)((char *)this->_Vec._Mypair._Myval2._Myfirst + v12 + 8) = _Pnode;
    }
    else if ( v24->_Ptr == Myhead )
    {
      v24->_Ptr = _Pnode._Ptr;
    }
    else
    {
      p_Next = &v24[1]._Ptr->_Next;
      v26 = *p_Next;
      v24[1]._Ptr = *p_Next;
      if ( v26 != _Pnode._Ptr )
        *(std::_List_node<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >,void *> **)((char *)&this->_Vec._Mypair._Myval2._Myfirst[1]._Ptr + v12) = (*(std::_List_node<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >,void *> **)((char *)&this->_Vec._Mypair._Myval2._Myfirst[1]._Ptr + v12))->_Prev;
    }
    std::_Hash<std::_Umap_traits<std::string,extension::RCWeakPtr<extension::BasicFutureObject<Image,extension::FutureImageOption>::Body>,std::_Uhash_compare<std::string,std::hash<std::string>,std::equal_to<std::string>>,std::allocator<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<Image,extension::FutureImageOption>::Body>>>,0>>::_Check_size(this);
    result->first._Ptr = _Pnode._Ptr;
    result->second = 1;
    return result;
  }
  else
  {
    while ( 1 )
    {
      Myhead = Myhead->_Prev;
      p_Myval = (char **)&Myhead->_Myval;
      if ( Myhead->_Myval.first._Mypair._Myval2._Myres >= 0x10 )
        p_Myval = (char **)*p_Myval;
      if ( Myres < 0x10 )
        v17 = _Val;
      else
        v17 = (std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > *)_Val->first._Mypair._Myval2._Bx._Ptr;
      v18 = Myhead->_Myval.first._Mypair._Myval2._Mysize;
      v19 = v18;
      if ( Mysize < v18 )
        v19 = Mysize;
      if ( (!v19 || !memcmp(v17, p_Myval, v19)) && Mysize >= v18 && Mysize <= v18 )
        break;
      _Val = v28;
      Myres = v28->first._Mypair._Myval2._Myres;
      if ( Myhead == v14 )
      {
        v12 = v27;
        goto LABEL_27;
      }
    }
    _Pnode._Ptr->_Prev->_Next = _Pnode._Ptr->_Next;
    _Pnode._Ptr->_Next->_Prev = _Pnode._Ptr->_Prev;
    --this->_List._Mypair._Myval2._Mysize;
    m_ptr = _Pnode._Ptr->_Myval.second.m_proxy.m_ptr;
    if ( m_ptr )
    {
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)m_ptr, 0xFFFFFFFFFFFFFFFFui64) == 1 )
        operator delete(m_ptr, 0x18ui64);
    }
    std::string::~string((std::string *)&_Pnode._Ptr->_Myval.first);
    operator delete(_Pnode._Ptr);
    result->first._Ptr = Myhead;
    result->second = 0;
    return result;
  }
}

void __fastcall std::_Uninit_alloc_fill_n1<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>>>>> *,unsigned __int64,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>>>>>>>>(
        std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > *_First,
        unsigned __int64 _Count,
        const std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > *_Pval,
        std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > > > > *_Al)
{
  for ( ; _Count; --_Count )
  {
    if ( _First )
      _First->_Ptr = _Pval->_Ptr;
    ++_First;
  }
}

std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > *__fastcall std::_Uninitialized_move_al_unchecked1<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body>>>>> *,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body>>>>> *,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body>>>>>>>>(
        std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > *_First,
        std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > *_Last,
        std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > *_Dest,
        std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > > > > *_Al)
{
  __int64 v4; // r9
  unsigned __int64 v5; // r10
  signed __int64 v6; // rcx

  v4 = 0i64;
  v5 = (unsigned __int64)((char *)_Last - (char *)_First + 7) >> 3;
  if ( _First > _Last )
    v5 = 0i64;
  if ( v5 )
  {
    v6 = (char *)_First - (char *)_Dest;
    do
    {
      if ( _Dest )
        _Dest->_Ptr = *(std::_List_node<std::pair<extension::SoundHashKey const ,int>,void *> **)((char *)_Dest + v6);
      ++_Dest;
      ++v4;
    }
    while ( v4 != v5 );
  }
  return _Dest;
}

void __fastcall extension::AsyncContent<OGLSecondary>::AsyncContent<OGLSecondary>(
        extension::AsyncContent<extension::exsound_detail::SoundBankImpl> *this,
        const std::string *name,
        const std::string *optstr)
{
  std::string *p_m_name; // rcx
  std::string *Ptr; // rax
  std::string *p_m_loadOptionString; // rcx
  const std::string *v8; // rax

  this->m_refCount.m_value._My_val = 1i64;
  p_m_name = (std::string *)&this->m_name;
  p_m_name->_Mypair._Myval2._Myres = 15i64;
  p_m_name->_Mypair._Myval2._Mysize = 0i64;
  if ( p_m_name->_Mypair._Myval2._Myres < 0x10 )
    Ptr = p_m_name;
  else
    Ptr = (std::string *)p_m_name->_Mypair._Myval2._Bx._Ptr;
  Ptr->_Mypair._Myval2._Bx._Buf[0] = 0;
  std::string::assign(p_m_name, name, 0i64, 0xFFFFFFFFFFFFFFFFui64);
  p_m_loadOptionString = (std::string *)&this->m_loadOptionString;
  this->m_loadOptionString._Mypair._Myval2._Myres = 15i64;
  this->m_loadOptionString._Mypair._Myval2._Mysize = 0i64;
  if ( this->m_loadOptionString._Mypair._Myval2._Myres < 0x10 )
    v8 = &this->m_loadOptionString;
  else
    v8 = (const std::string *)p_m_loadOptionString->_Mypair._Myval2._Bx._Ptr;
  v8->_Mypair._Myval2._Bx._Buf[0] = 0;
  std::string::assign(p_m_loadOptionString, optstr, 0i64, 0xFFFFFFFFFFFFFFFFui64);
  this->m_data._Mypair._Myval2 = 0i64;
  this->m_status.m_stateFlags.m_value._My_val = 0i64;
  this->m_status.m_stateFlags.m_value._My_val = 0i64;
  this->m_errorCode = 0;
  this->m_isDataReleased = 0;
}

void __fastcall extension::FutureObjectJob<StageResources>::FutureObjectJob<StageResources>(
        extension::FutureObjectJob<StageResources> *this,
        extension::RefCountablePtr<extension::AsyncContent<StageResources> > c)
{
  volatile signed __int64 *My_val; // r8
  extension::AsyncContent<StageResources> *v3; // rdi

  this->__vftable = (extension::FutureObjectJob<StageResources>_vtbl *)&AgSimpleThreadHost::`vftable';
  this->m_abort = 0;
  this->m_running = 1;
  this->__vftable = (extension::FutureObjectJob<StageResources>_vtbl *)&extension::FutureObjectJob<StageResources>::`vftable';
  My_val = (volatile signed __int64 *)c.m_ptr->m_refCount.m_value._My_val;
  this->m_content.m_ptr = (extension::AsyncContent<StageResources> *)c.m_ptr->m_refCount.m_value._My_val;
  if ( My_val )
    _InterlockedExchangeAdd64(My_val, 1ui64);
  _InterlockedExchangeAdd64((volatile signed __int64 *)&extension::FutureObjectSpec::s_futureObjectJobCount, 1ui64);
  v3 = (extension::AsyncContent<StageResources> *)c.m_ptr->m_refCount.m_value._My_val;
  if ( c.m_ptr->m_refCount.m_value._My_val
    && _InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFui64) == 1 )
  {
    if ( v3 )
    {
      extension::AsyncContent<StageResources>::~AsyncContent<StageResources>(v3);
      operator delete(v3, 0x68ui64);
    }
  }
}

void __fastcall std::ostringstream::ostringstream(std::ostringstream *this, int _Mode)
{
  *(_QWORD *)this->gap0 = &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::`vbtable'{for `std::ostream'};
  *(_QWORD *)&this->gap80[8] = &std::ios::`vftable';
  *(_QWORD *)&this->gap0[*(int *)(*(_QWORD *)this->gap0 + 4i64)] = &std::ostream::`vftable';
  *(_DWORD *)&this->gap0[*(int *)(*(_QWORD *)this->gap0 + 4i64) - 4] = *(_DWORD *)(*(_QWORD *)this->gap0 + 4i64) - 16;
  std::ios::init((std::ios *)&this->gap0[*(int *)(*(_QWORD *)this->gap0 + 4i64)], (std::streambuf *)&this->gap0[8], 0);
  *(_QWORD *)&this->gap0[*(int *)(*(_QWORD *)this->gap0 + 4i64)] = &std::ostringstream::`vftable';
  *(_DWORD *)&this->gap0[*(int *)(*(_QWORD *)this->gap0 + 4i64) - 4] = *(_DWORD *)(*(_QWORD *)this->gap0 + 4i64) - 136;
  std::stringbuf::stringbuf((std::stringbuf *)&this->gap0[8], 2);
}

void __fastcall std::stringbuf::stringbuf(std::stringbuf *this, int _Mode)
{
  char v2; // bl
  int v4; // ecx
  int v5; // edx
  int v6; // eax

  v2 = _Mode;
  std::streambuf::streambuf(this);
  this->__vftable = (std::stringbuf_vtbl *)&std::stringbuf::`vftable';
  v4 = ~(4 * v2) & 4 | 2;
  if ( (v2 & 2) != 0 )
    v4 = ~(4 * v2) & 4;
  v5 = v4 | 8;
  if ( (v2 & 8) == 0 )
    v5 = v4;
  this->_Seekhigh = 0i64;
  v6 = v5 | 0x10;
  if ( (v2 & 4) == 0 )
    v6 = v5;
  this->_Mystate = v6;
}

void __fastcall std::unordered_map<std::string,extension::RCWeakPtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body>>::unordered_map<std::string,extension::RCWeakPtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body>>(
        std::unordered_map<std::string,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body>> *this)
{
  this->_Traitsobj._Mypair._Myval2._Myval2 = 0.0;
  this->_List._Mypair._Myval2._Myhead = 0i64;
  this->_List._Mypair._Myval2._Mysize = 0i64;
  this->_List._Mypair._Myval2._Myhead = std::_List_alloc<std::_List_base_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLCamera,void>::Body>>>>::_Buynode0(
                                          (std::_List_alloc<std::_List_base_types<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >> > *)this,
                                          0i64,
                                          0i64);
  this->_Vec._Mypair._Myval2._Myfirst = 0i64;
  this->_Vec._Mypair._Myval2._Mylast = 0i64;
  this->_Vec._Mypair._Myval2._Myend = 0i64;
  this->_Traitsobj._Mypair._Myval2._Myval2 = 1.0;
  std::_Hash<std::_Umap_traits<std::string,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body>,std::_Uhash_compare<std::string,std::hash<std::string>,std::equal_to<std::string>>,std::allocator<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body>>>,0>>::_Init(
    (std::_Hash<std::_Umap_traits<extension::SoundHashKey,int,std::_Uhash_compare<extension::SoundHashKey,extension::SoundHashKey::Hasher,std::equal_to<extension::SoundHashKey> >,std::allocator<std::pair<extension::SoundHashKey const ,int> >,0> > *)this,
    8ui64);
}

void __fastcall extension::BasicFutureObject<StageResources,extension::FutureStageOption>::AssetCache::AssetCache(
        extension::BasicFutureObject<StageResources,extension::FutureStageOption>::AssetCache *this)
{
  extension::AssetCacheExpiredEntryCleaner *v1; // rax
  extension::BiLinkable<extension::asyncjob_detail::AssetCacheNode> *v2; // r8

  InitializeCriticalSection((LPCRITICAL_SECTION)&extension::BasicFutureObject<StageResources,extension::FutureStageOption>::s_cacheManager.extension::ExSimpleLockable<extension::BasicFutureObject<StageResources,extension::FutureStageOption>::AssetCache>);
  extension::BasicFutureObject<StageResources,extension::FutureStageOption>::s_cacheManager.m_Prev = &extension::BasicFutureObject<StageResources,extension::FutureStageOption>::s_cacheManager.extension::BiLinkable<extension::asyncjob_detail::AssetCacheNode>;
  extension::BasicFutureObject<StageResources,extension::FutureStageOption>::s_cacheManager.m_Next = &extension::BasicFutureObject<StageResources,extension::FutureStageOption>::s_cacheManager.extension::BiLinkable<extension::asyncjob_detail::AssetCacheNode>;
  extension::BasicFutureObject<StageResources,extension::FutureStageOption>::s_cacheManager.__vftable = (extension::BasicFutureObject<StageResources,extension::FutureStageOption>::AssetCache_vtbl *)&extension::asyncjob_detail::AssetCacheBase::`vftable';
  v1 = extension::_anonymous_namespace_::AssetCacheExpiredEntryCleaner::Instance();
  if ( v1 )
    v2 = &v1->extension::BiLinkable<extension::asyncjob_detail::AssetCacheNode>;
  else
    v2 = 0i64;
  extension::BasicFutureObject<StageResources,extension::FutureStageOption>::s_cacheManager.m_Next->extension::asyncjob_detail::AssetCacheBase::extension::asyncjob_detail::AssetCacheNode::extension::BiLinkable<extension::asyncjob_detail::AssetCacheNode>::m_Prev = v2->m_Prev;
  v2->m_Prev->m_Next = extension::BasicFutureObject<StageResources,extension::FutureStageOption>::s_cacheManager.m_Next;
  extension::BasicFutureObject<StageResources,extension::FutureStageOption>::s_cacheManager.m_Next = v2;
  v2->m_Prev = &extension::BasicFutureObject<StageResources,extension::FutureStageOption>::s_cacheManager.extension::BiLinkable<extension::asyncjob_detail::AssetCacheNode>;
  extension::BasicFutureObject<StageResources,extension::FutureStageOption>::s_cacheManager.__vftable = (extension::BasicFutureObject<StageResources,extension::FutureStageOption>::AssetCache_vtbl *)&extension::BasicFutureObject<StageResources,extension::FutureStageOption>::AssetCache::`vftable';
  std::unordered_map<std::string,extension::RCWeakPtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body>>::unordered_map<std::string,extension::RCWeakPtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body>>((std::unordered_map<std::string,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body>> *)&extension::BasicFutureObject<StageResources,extension::FutureStageOption>::s_cacheManager.m_cachedObjectMap);
}

void __fastcall extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body::Body(
        extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body *this,
        extension::RefCountablePtr<extension::AsyncContent<StageResources> > shared)
{
  volatile signed __int64 *My_val; // rax
  extension::AsyncContent<StageResources> *v5; // rbx
  extension::RefCountableWeakSupportBase::WeakProxy *v6; // [rsp+48h] [rbp+10h]

  this->__vftable = (extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body_vtbl *)&extension::RefCountableWeakSupportBase::`vftable';
  v6 = (extension::RefCountableWeakSupportBase::WeakProxy *)operator new(0x18ui64);
  v6->m_refCount.m_value._My_val = 1i64;
  v6->m_principal = this;
  v6->m_sharedCount.m_value._My_val = 0i64;
  v6->m_sharedCount.m_value._My_val = 1i64;
  this->m_refCount.m_ptr = v6;
  this->__vftable = (extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body_vtbl *)&extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body::`vftable';
  My_val = (volatile signed __int64 *)shared.m_ptr->m_refCount.m_value._My_val;
  this->m_content.m_ptr = (extension::AsyncContent<StageResources> *)shared.m_ptr->m_refCount.m_value._My_val;
  if ( My_val )
    _InterlockedExchangeAdd64(My_val, 1ui64);
  v5 = (extension::AsyncContent<StageResources> *)shared.m_ptr->m_refCount.m_value._My_val;
  if ( v5 )
  {
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFui64) == 1 )
    {
      extension::AsyncContent<StageResources>::~AsyncContent<StageResources>(v5);
      operator delete(v5, 0x68ui64);
    }
  }
}

void __fastcall extension::future_asset_detail::FutureStageJob::FutureStageJob(
        extension::future_asset_detail::FutureStageJob *this,
        extension::RefCountablePtr<extension::AsyncContent<StageResources> > c,
        const extension::FutureStageOption *pOpt)
{
  extension::AsyncContent<StageResources> *My_val; // rax
  extension::FutureStageOption *p_options; // rcx
  extension::FutureStageOption *Ptr; // rax
  extension::AsyncContent<StageResources> *v9; // rdi
  extension::RefCountablePtr<extension::AsyncContent<StageResources> > ca; // [rsp+68h] [rbp+20h] BYREF

  My_val = (extension::AsyncContent<StageResources> *)c.m_ptr->m_refCount.m_value._My_val;
  ca.m_ptr = My_val;
  if ( My_val )
    _InterlockedExchangeAdd64((volatile signed __int64 *)My_val, 1ui64);
  extension::FutureObjectJob<StageResources>::FutureObjectJob<StageResources>(
    this,
    (extension::RefCountablePtr<extension::AsyncContent<StageResources> >)&ca);
  this->__vftable = (extension::future_asset_detail::FutureStageJob_vtbl *)&extension::future_asset_detail::FutureStageJob::`vftable';
  p_options = &this->options;
  this->options.basePath._Mypair._Myval2._Myres = 15i64;
  this->options.basePath._Mypair._Myval2._Mysize = 0i64;
  if ( this->options.basePath._Mypair._Myval2._Myres < 0x10 )
    Ptr = &this->options;
  else
    Ptr = (extension::FutureStageOption *)p_options->basePath._Mypair._Myval2._Bx._Ptr;
  Ptr->basePath._Mypair._Myval2._Bx._Buf[0] = 0;
  if ( pOpt && p_options != pOpt )
    std::string::assign(&p_options->basePath, &pOpt->basePath, 0i64, 0xFFFFFFFFFFFFFFFFui64);
  v9 = (extension::AsyncContent<StageResources> *)c.m_ptr->m_refCount.m_value._My_val;
  if ( c.m_ptr->m_refCount.m_value._My_val
    && _InterlockedExchangeAdd64((volatile signed __int64 *)v9, 0xFFFFFFFFFFFFFFFFui64) == 1 )
  {
    if ( v9 )
    {
      extension::AsyncContent<StageResources>::~AsyncContent<StageResources>(v9);
      operator delete(v9, 0x68ui64);
    }
  }
}

void __fastcall extension::AsyncContent<StageResources>::~AsyncContent<StageResources>(
        extension::AsyncContent<StageResources> *this)
{
  StageResources *Myval2; // rdi
  StageResources *v3; // rdi

  extension::lockable_detail::LockUnlock(&extension::GraphicsLock::s_mutex, 1);
  Myval2 = this->m_data._Mypair._Myval2;
  this->m_data._Mypair._Myval2 = 0i64;
  if ( Myval2 )
  {
    StageResources::dispose(Myval2);
    operator delete(Myval2, 0x1B0ui64);
  }
  extension::lockable_detail::LockUnlock(&extension::GraphicsLock::s_mutex, -1);
  v3 = this->m_data._Mypair._Myval2;
  if ( v3 )
  {
    StageResources::dispose(this->m_data._Mypair._Myval2);
    operator delete(v3, 0x1B0ui64);
  }
  std::string::~string((std::string *)&this->m_loadOptionString);
  std::string::~string((std::string *)&this->m_name);
}

void __fastcall extension::ExLockableLock<extension::ExSimpleLockable<extension::BasicFutureObject<OGLCamera,void>::AssetCache>>::~ExLockableLock<extension::ExSimpleLockable<extension::BasicFutureObject<OGLCamera,void>::AssetCache>>(
        extension::ExLockableLock<extension::ExSimpleLockable<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::AssetCache> > *this)
{
  _RTL_CRITICAL_SECTION *m_associated; // rdi
  int v2; // ebx
  __int64 m_ownsLockCount; // rbx

  m_associated = (_RTL_CRITICAL_SECTION *)this->m_associated;
  v2 = -this->m_ownsLockCount;
  if ( v2 < 0 || this->m_ownsLockCount == 0 )
  {
    if ( this->m_ownsLockCount > 0 )
    {
      m_ownsLockCount = (unsigned int)this->m_ownsLockCount;
      do
      {
        LeaveCriticalSection(m_associated);
        --m_ownsLockCount;
      }
      while ( m_ownsLockCount );
    }
  }
  else
  {
    do
    {
      EnterCriticalSection(m_associated);
      --v2;
    }
    while ( v2 );
  }
}

// attributes: thunk
void __stdcall AgMutex::~AgMutex(LPCRITICAL_SECTION lpCriticalSection)
{
  DeleteCriticalSection(lpCriticalSection);
}

void __fastcall extension::FutureObjectJob<StageResources>::~FutureObjectJob<StageResources>(
        extension::FutureObjectJob<StageResources> *this)
{
  extension::AsyncContent<StageResources> *m_ptr; // rdi
  extension::AsyncContent<StageResources> *v3; // rdi

  m_ptr = this->m_content.m_ptr;
  this->__vftable = (extension::FutureObjectJob<StageResources>_vtbl *)&extension::FutureObjectJob<StageResources>::`vftable';
  if ( m_ptr && (m_ptr->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
  {
    m_ptr->m_errorCode = 5;
    EnterCriticalSection((LPCRITICAL_SECTION)&extension::AsyncStatus::s_mutex);
    _InterlockedOr64((volatile signed __int64 *)&m_ptr->m_status, 1ui64);
    EnterCriticalSection((LPCRITICAL_SECTION)&extension::AsyncStatus::s_signalCondition.m_mutex);
    WakeAllConditionVariable((PCONDITION_VARIABLE)&extension::AsyncStatus::s_signalCondition.m_conditionVariable.m_data);
    LeaveCriticalSection((LPCRITICAL_SECTION)&extension::AsyncStatus::s_signalCondition.m_mutex);
    LeaveCriticalSection((LPCRITICAL_SECTION)&extension::AsyncStatus::s_mutex);
  }
  _InterlockedExchangeAdd64(
    (volatile signed __int64 *)&extension::FutureObjectSpec::s_futureObjectJobCount,
    0xFFFFFFFFFFFFFFFFui64);
  v3 = this->m_content.m_ptr;
  if ( v3 && _InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFui64) == 1 )
  {
    extension::AsyncContent<StageResources>::~AsyncContent<StageResources>(v3);
    operator delete(v3, 0x68ui64);
  }
  this->__vftable = (extension::FutureObjectJob<StageResources>_vtbl *)&AgIThreadHost::`vftable';
}

void __fastcall extension::RefCountablePtr<extension::AsyncContent<StageResources>>::~RefCountablePtr<extension::AsyncContent<StageResources>>(
        extension::RefCountablePtr<extension::AsyncContent<StageResources> > *this)
{
  extension::AsyncContent<StageResources> *m_ptr; // rbx

  m_ptr = this->m_ptr;
  if ( this->m_ptr && _InterlockedExchangeAdd64((volatile signed __int64 *)m_ptr, 0xFFFFFFFFFFFFFFFFui64) == 1 )
  {
    if ( m_ptr )
    {
      extension::AsyncContent<StageResources>::~AsyncContent<StageResources>(m_ptr);
      operator delete(m_ptr, 0x68ui64);
    }
  }
}

void __fastcall extension::RefCountablePtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>::~RefCountablePtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>(
        extension::RefCountablePtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> *this)
{
  extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body *m_ptr; // rcx

  m_ptr = this->m_ptr;
  if ( m_ptr )
  {
    if ( _InterlockedExchangeAdd64(
           (volatile signed __int64 *)&m_ptr->m_refCount.m_ptr->m_sharedCount,
           0xFFFFFFFFFFFFFFFFui64) == 1 )
      ((void (__fastcall *)(extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body *, __int64))m_ptr->~RefCountableWeakSupportBase)(
        m_ptr,
        1i64);
  }
}

void __fastcall std::ostream::~ostream<char,std::char_traits<char>>(std::ostream *this)
{
  *(_QWORD *)&this->gap0[*(int *)(*(_QWORD *)&this[-1].gap0[96] + 4i64) - 16] = &std::ostream::`vftable';
  *(_DWORD *)&this->gap0[*(int *)(*(_QWORD *)&this[-1].gap0[96] + 4i64) - 20] = *(_DWORD *)(*(_QWORD *)&this[-1].gap0[96]
                                                                                          + 4i64)
                                                                              - 16;
}

void __fastcall std::ostringstream::~ostringstream(std::ostringstream *this)
{
  __int64 v2; // rdx

  *(_QWORD *)&this->gap0[*(int *)(*(_QWORD *)&this[-1].gap0[96] + 4i64) - 136] = &std::ostringstream::`vftable';
  v2 = *(int *)(*(_QWORD *)&this[-1].gap0[96] + 4i64);
  *(_DWORD *)&this->gap0[v2 - 140] = v2 - 136;
  std::stringbuf::~stringbuf((std::stringbuf *)&this[-1].gap0[104]);
  *(_QWORD *)&this->gap0[*(int *)(*(_QWORD *)&this[-1].gap0[96] + 4i64) - 136] = &std::ostream::`vftable';
  *(_DWORD *)&this->gap0[*(int *)(*(_QWORD *)&this[-1].gap0[96] + 4i64) - 140] = *(_DWORD *)(*(_QWORD *)&this[-1].gap0[96]
                                                                                           + 4i64)
                                                                               - 16;
}

void __fastcall std::list<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>>>::~list<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>>>(
        std::list<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >> *this)
{
  std::list<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body>>>::clear(this);
  operator delete(this->_Mypair._Myval2._Myhead);
}

void __fastcall std::unique_ptr<StageResources>::~unique_ptr<StageResources>(std::unique_ptr<StageResources> *this)
{
  StageResources *Myval2; // rbx

  Myval2 = this->_Mypair._Myval2;
  if ( this->_Mypair._Myval2 )
  {
    StageResources::dispose(this->_Mypair._Myval2);
    operator delete(Myval2, 0x1B0ui64);
  }
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

void __fastcall extension::BasicFutureObject<StageResources,extension::FutureStageOption>::AssetCache::~AssetCache(
        extension::BasicFutureObject<StageResources,extension::FutureStageOption>::AssetCache *this)
{
  AgLogger **Myfirst; // rdx

  this->__vftable = (extension::BasicFutureObject<StageResources,extension::FutureStageOption>::AssetCache_vtbl *)&extension::BasicFutureObject<StageResources,extension::FutureStageOption>::AssetCache::`vftable';
  Myfirst = (AgLogger **)this->m_cachedObjectMap._Vec._Mypair._Myval2._Myfirst;
  if ( Myfirst )
  {
    std::_Wrap_alloc<std::allocator<OGLShader *>>::deallocate(
      (std::allocator<AgLogger *> *)this,
      Myfirst,
      ((char *)this->m_cachedObjectMap._Vec._Mypair._Myval2._Myend - (char *)Myfirst) >> 3);
    this->m_cachedObjectMap._Vec._Mypair._Myval2._Myfirst = 0i64;
    this->m_cachedObjectMap._Vec._Mypair._Myval2._Mylast = 0i64;
    this->m_cachedObjectMap._Vec._Mypair._Myval2._Myend = 0i64;
  }
  std::list<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body>>>::clear((std::list<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >> *)&this->m_cachedObjectMap._List);
  operator delete(this->m_cachedObjectMap._List._Mypair._Myval2._Myhead);
  this->__vftable = (extension::BasicFutureObject<StageResources,extension::FutureStageOption>::AssetCache_vtbl *)&extension::asyncjob_detail::AssetCacheNode::`vftable';
  this->m_Next->extension::asyncjob_detail::AssetCacheBase::extension::asyncjob_detail::AssetCacheNode::extension::BiLinkable<extension::asyncjob_detail::AssetCacheNode>::m_Prev = this->m_Prev;
  this->m_Prev->m_Next = this->m_Next;
  this->m_Next = &this->extension::BiLinkable<extension::asyncjob_detail::AssetCacheNode>;
  this->m_Prev = &this->extension::BiLinkable<extension::asyncjob_detail::AssetCacheNode>;
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->extension::ExSimpleLockable<extension::BasicFutureObject<StageResources,extension::FutureStageOption>::AssetCache>);
}

void __fastcall extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body::~Body(
        extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body *this)
{
  extension::AsyncContent<StageResources> *m_ptr; // rdx
  signed __int64 My_val; // rax
  unsigned __int64 v4; // rtt
  extension::AsyncContent<StageResources> *v5; // rbx
  extension::RefCountableWeakSupportBase::WeakProxy *v6; // rcx
  signed __int64 v7; // rsi

  m_ptr = this->m_content.m_ptr;
  this->__vftable = (extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body_vtbl *)&extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body::`vftable';
  if ( m_ptr )
  {
    do
    {
      My_val = m_ptr->m_status.m_stateFlags.m_value._My_val;
      if ( (My_val & 1) != 0 )
        break;
      v4 = m_ptr->m_status.m_stateFlags.m_value._My_val;
    }
    while ( v4 != _InterlockedCompareExchange64((volatile signed __int64 *)&m_ptr->m_status, My_val | 2, My_val) );
  }
  v5 = this->m_content.m_ptr;
  if ( v5 && _InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFui64) == 1 )
  {
    extension::AsyncContent<StageResources>::~AsyncContent<StageResources>(v5);
    operator delete(v5, 0x68ui64);
  }
  this->__vftable = (extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body_vtbl *)&extension::RefCountableWeakSupportBase::`vftable';
  this->m_refCount.m_ptr->m_principal = 0i64;
  v6 = this->m_refCount.m_ptr;
  if ( v6 )
  {
    v7 = _InterlockedExchangeAdd64((volatile signed __int64 *)v6, 0xFFFFFFFFFFFFFFFFui64);
    if ( v7 == 1 )
      operator delete(v6, 0x18ui64);
  }
}

// attributes: thunk
void __fastcall extension::FutureStageOption::~FutureStageOption(
        extension::exsound_detail::SoundBankMediaDefinition *this)
{
  std::string::~string(&this->m_fileName);
}

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

extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> *__fastcall std::unordered_map<std::string,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>>::operator[](
        std::unordered_map<std::string,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body>> *this,
        const std::string *_Keyval)
{
  std::_List_buy<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >> *v4; // rcx
  const std::piecewise_construct_t *v5; // r9
  std::_List_node<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >,void *> *Ptr; // rax
  std::_List_node<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >,void *> *Myhead; // rax
  std::_List_node<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >,void *> *Next; // rdi
  std::_List_node<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >,void *> *v9; // rdx
  unsigned __int64 Mysize; // rax
  std::pair<std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > > > >,bool> v12; // [rsp+30h] [rbp-18h] BYREF
  std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > > > > result; // [rsp+50h] [rbp+8h] BYREF

  std::_Hash<std::_Umap_traits<std::string,extension::RCWeakPtr<extension::BasicFutureObject<OGLMirror,void>::Body>,std::_Uhash_compare<std::string,std::hash<std::string>,std::equal_to<std::string>>,std::allocator<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLMirror,void>::Body>>>,0>>::lower_bound(
    this,
    &result,
    _Keyval);
  Ptr = result._Ptr;
  if ( result._Ptr == this->_List._Mypair._Myval2._Myhead )
  {
    Myhead = this->_List._Mypair._Myval2._Myhead;
    result._Ptr = (std::_List_node<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >,void *> *)_Keyval;
    Next = Myhead->_Next;
    v9 = std::_List_buy<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body>>>::_Buynode<std::piecewise_construct_t const &,std::tuple<std::string const &>,std::tuple<>>(
           v4,
           Myhead->_Next,
           Myhead->_Next->_Prev,
           v5,
           (std::tuple<std::string const &> *)&result);
    Mysize = this->_List._Mypair._Myval2._Mysize;
    if ( Mysize == 0x3FFFFFFFFFFFFFEi64 )
      std::_Xlength_error("list<T> too long");
    this->_List._Mypair._Myval2._Mysize = Mysize + 1;
    Next->_Prev = v9;
    v9->_Prev->_Next = v9;
    std::_Hash<std::_Umap_traits<std::string,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>,std::_Uhash_compare<std::string,std::hash<std::string>,std::equal_to<std::string>>,std::allocator<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>>>,0>>::_Insert<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>>>>>>(
      this,
      &v12,
      &this->_List._Mypair._Myval2._Myhead->_Next->_Myval,
      (std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > > > >)this->_List._Mypair._Myval2._Myhead->_Next);
    Ptr = v12.first._Ptr;
  }
  return &Ptr->_Myval.second;
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

void __fastcall extension::BasicFutureObject<OGLCamera,void>::AssetCache::CleanupExpiredEntry(
        extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::AssetCache *this)
{
  _RTL_CRITICAL_SECTION *v1; // rsi
  std::_List_node<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >,void *> *Myhead; // rax
  std::_List_node<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >,void *> *Next; // rbx
  std::_List_const_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > > > > v5; // r8
  extension::RefCountableWeakSupportBase::WeakProxy *m_ptr; // rax
  std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > > > > result; // [rsp+30h] [rbp+8h] BYREF

  v1 = (_RTL_CRITICAL_SECTION *)&this->extension::ExSimpleLockable<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::AssetCache>;
  if ( !this )
    v1 = 0i64;
  EnterCriticalSection(v1);
  Myhead = this->m_cachedObjectMap._List._Mypair._Myval2._Myhead;
  Next = Myhead->_Next;
  if ( Myhead->_Next != Myhead )
  {
    do
    {
      v5._Ptr = Next;
      Next = Next->_Next;
      m_ptr = v5._Ptr->_Myval.second.m_proxy.m_ptr;
      if ( !m_ptr || !m_ptr->m_sharedCount.m_value._My_val )
        std::_Hash<std::_Umap_traits<std::string,extension::RCWeakPtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body>,std::_Uhash_compare<std::string,std::hash<std::string>,std::equal_to<std::string>>,std::allocator<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body>>>,0>>::erase(
          &this->m_cachedObjectMap,
          &result,
          v5);
    }
    while ( Next != this->m_cachedObjectMap._List._Mypair._Myval2._Myhead );
  }
  LeaveCriticalSection(v1);
}

void __fastcall extension::future_asset_detail::EnqueueFutureStageJob(
        extension::RefCountablePtr<extension::AsyncContent<StageResources> > shared,
        const extension::FutureStageOption *pOpt)
{
  extension::future_asset_detail::FutureStageJob *v4; // rax
  extension::AsyncContent<StageResources> *My_val; // rcx
  extension::ExThread::Runnable *v6; // rax
  extension::AsyncContent<StageResources> *v7; // rbx
  extension::RefCountablePtr<extension::AsyncContent<StageResources> > c; // [rsp+20h] [rbp-38h] BYREF
  std::unique_ptr<extension::ExThread::Runnable> obj; // [rsp+28h] [rbp-30h] BYREF
  __int64 v10; // [rsp+30h] [rbp-28h]
  extension::future_asset_detail::FutureStageJob *v11; // [rsp+38h] [rbp-20h]
  void (__fastcall ****v12)(_QWORD, __int64); // [rsp+40h] [rbp-18h]
  void (__fastcall ***v13)(_QWORD, __int64); // [rsp+70h] [rbp+18h] BYREF
  void (__fastcall ***v14)(_QWORD, __int64); // [rsp+78h] [rbp+20h] BYREF

  v10 = -2i64;
  v4 = (extension::future_asset_detail::FutureStageJob *)operator new(0x40ui64);
  v11 = v4;
  My_val = (extension::AsyncContent<StageResources> *)shared.m_ptr->m_refCount.m_value._My_val;
  c.m_ptr = My_val;
  if ( My_val )
    _InterlockedExchangeAdd64((volatile signed __int64 *)My_val, 1ui64);
  extension::future_asset_detail::FutureStageJob::FutureStageJob(
    v4,
    (extension::RefCountablePtr<extension::AsyncContent<StageResources> >)&c,
    pOpt);
  v11 = (extension::future_asset_detail::FutureStageJob *)&v14;
  v14 = 0i64;
  v12 = &v13;
  v13 = 0i64;
  obj._Mypair._Myval2 = v6;
  extension::SynchronizedQueue<extension::ExThread::Runnable>::enqueue(
    &extension::AsyncWorker::s_instance.m_fixupJobConsumer.m_jobQueue,
    (std::unique_ptr<extension::ExThread::Runnable>)&obj);
  if ( v13 )
    (**v13)(v13, 1i64);
  if ( v14 )
    (**v14)(v14, 1i64);
  v7 = (extension::AsyncContent<StageResources> *)shared.m_ptr->m_refCount.m_value._My_val;
  if ( v7 )
  {
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v7, 0xFFFFFFFFFFFFFFFFui64) == 1 )
    {
      extension::AsyncContent<StageResources>::~AsyncContent<StageResources>(v7);
      operator delete(v7, 0x68ui64);
    }
  }
}

extension::RefCountablePtr<extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body> *__fastcall extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body::GetSharedEmpty(
        extension::RefCountablePtr<extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body> *result)
{
  extension::RefCountableWeakSupportBase::WeakProxy *v3; // [rsp+40h] [rbp+8h]

  if ( __TSS0__1__GetSharedEmpty_Body___BasicFutureObject_VStageResources__UFutureStageOption_extension___extension__SA_AV__RefCountablePtr_VBody___BasicFutureObject_VStageResources__UFutureStageOption_extension___extension___4_XZ_4HA > *(_DWORD *)(*(_QWORD *)NtCurrentTeb()->Reserved1[11] + 40i64) )
  {
    Init_thread_header(&__TSS0__1__GetSharedEmpty_Body___BasicFutureObject_VStageResources__UFutureStageOption_extension___extension__SA_AV__RefCountablePtr_VBody___BasicFutureObject_VStageResources__UFutureStageOption_extension___extension___4_XZ_4HA);
    if ( __TSS0__1__GetSharedEmpty_Body___BasicFutureObject_VStageResources__UFutureStageOption_extension___extension__SA_AV__RefCountablePtr_VBody___BasicFutureObject_VStageResources__UFutureStageOption_extension___extension___4_XZ_4HA == -1 )
    {
      `extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body::GetSharedEmpty'::`2'::shared_body.__vftable = (extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body_vtbl *)&extension::RefCountableWeakSupportBase::`vftable';
      v3 = (extension::RefCountableWeakSupportBase::WeakProxy *)operator new(0x18ui64);
      v3->m_refCount.m_value._My_val = 1i64;
      v3->m_principal = &`extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body::GetSharedEmpty'::`2'::shared_body;
      v3->m_sharedCount.m_value._My_val = 0i64;
      v3->m_sharedCount.m_value._My_val = 1i64;
      `extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body::GetSharedEmpty'::`2'::shared_body.m_refCount.m_ptr = v3;
      `extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body::GetSharedEmpty'::`2'::shared_body.__vftable = (extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body_vtbl *)&extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body::`vftable';
      `extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body::GetSharedEmpty'::`2'::shared_body.m_content.m_ptr = 0i64;
      atexit(`extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body::GetSharedEmpty'::`2'::`dynamic atexit destructor for 'shared_body'');
      Init_thread_footer(&__TSS0__1__GetSharedEmpty_Body___BasicFutureObject_VStageResources__UFutureStageOption_extension___extension__SA_AV__RefCountablePtr_VBody___BasicFutureObject_VStageResources__UFutureStageOption_extension___extension___4_XZ_4HA);
    }
  }
  result->m_ptr = &`extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body::GetSharedEmpty'::`2'::shared_body;
  _InterlockedExchangeAdd64(
    (volatile signed __int64 *)&`extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body::GetSharedEmpty'::`2'::shared_body.m_refCount.m_ptr->m_sharedCount,
    1ui64);
  return result;
}

extension::RefCountablePtr<extension::AsyncContent<StageResources> > *__fastcall extension::FutureObjectJobManager<StageResources,extension::FutureStageOption>::LoadStart(
        extension::RefCountablePtr<extension::AsyncContent<StageResources> > *result,
        const std::string *name,
        const std::string *optstr,
        const extension::FutureStageOption *opt)
{
  extension::AsyncContent<StageResources> *v8; // rax
  extension::AsyncContent<StageResources> *v9; // rbx
  extension::AsyncContent<StageResources> *v11; // [rsp+28h] [rbp-30h] BYREF
  extension::RefCountablePtr<extension::AsyncContent<StageResources> > shared; // [rsp+30h] [rbp-28h] BYREF
  __int64 v13; // [rsp+38h] [rbp-20h]
  extension::AsyncContent<StageResources> **v14; // [rsp+40h] [rbp-18h]

  v13 = -2i64;
  shared.m_ptr = (extension::AsyncContent<StageResources> *)operator new(0x68ui64);
  extension::AsyncContent<OGLSecondary>::AsyncContent<OGLSecondary>(
    (extension::AsyncContent<extension::exsound_detail::SoundBankImpl> *)shared.m_ptr,
    name,
    optstr);
  result->m_ptr = v8;
  v11 = v8;
  if ( v8 )
  {
    _InterlockedExchangeAdd64((volatile signed __int64 *)v8, 1ui64);
    v8 = v11;
  }
  v14 = &v11;
  shared.m_ptr = v8;
  if ( v8 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)v8, 1ui64);
  extension::future_asset_detail::EnqueueFutureStageJob(
    (extension::RefCountablePtr<extension::AsyncContent<StageResources> >)&shared,
    opt);
  v9 = v11;
  if ( v11 && _InterlockedExchangeAdd64((volatile signed __int64 *)v11, 0xFFFFFFFFFFFFFFFFui64) == 1 && v9 )
  {
    extension::AsyncContent<StageResources>::~AsyncContent<StageResources>(v9);
    operator delete(v9, 0x68ui64);
  }
  return result;
}

std::string *__fastcall extension::FutureObjectJobManager<StageResources,extension::FutureStageOption>::Stringize(
        std::string *result,
        const extension::FutureStageOption *opt)
{
  std::string *v4; // rax

  if ( __TSS0__1__Stringize___FutureObjectJobManager_VStageResources__UFutureStageOption_extension___extension__SA_AV__basic_string_DU__char_traits_D_std__V__allocator_D_2__std__PEBUFutureStageOption_3__Z_4HA > *(_DWORD *)(*(_QWORD *)NtCurrentTeb()->Reserved1[11] + 40i64) )
  {
    Init_thread_header(&__TSS0__1__Stringize___FutureObjectJobManager_VStageResources__UFutureStageOption_extension___extension__SA_AV__basic_string_DU__char_traits_D_std__V__allocator_D_2__std__PEBUFutureStageOption_3__Z_4HA);
    if ( __TSS0__1__Stringize___FutureObjectJobManager_VStageResources__UFutureStageOption_extension___extension__SA_AV__basic_string_DU__char_traits_D_std__V__allocator_D_2__std__PEBUFutureStageOption_3__Z_4HA == -1 )
    {
      `extension::FutureObjectJobManager<StageResources,extension::FutureStageOption>::Stringize'::`2'::default_opt.basePath._Mypair._Myval2._Myres = 15i64;
      `extension::FutureObjectJobManager<StageResources,extension::FutureStageOption>::Stringize'::`2'::default_opt.basePath._Mypair._Myval2._Mysize = 0i64;
      `extension::FutureObjectJobManager<StageResources,extension::FutureStageOption>::Stringize'::`2'::default_opt.basePath._Mypair._Myval2._Bx._Buf[0] = 0;
      atexit(`extension::FutureObjectJobManager<StageResources,extension::FutureStageOption>::Stringize'::`2'::`dynamic atexit destructor for 'default_opt'');
      Init_thread_footer(&__TSS0__1__Stringize___FutureObjectJobManager_VStageResources__UFutureStageOption_extension___extension__SA_AV__basic_string_DU__char_traits_D_std__V__allocator_D_2__std__PEBUFutureStageOption_3__Z_4HA);
    }
  }
  if ( !opt
    || !std::string::compare(
          &opt->basePath,
          &`extension::FutureObjectJobManager<StageResources,extension::FutureStageOption>::Stringize'::`2'::default_opt.basePath) )
  {
    result->_Mypair._Myval2._Myres = 15i64;
    v4 = result;
    result->_Mypair._Myval2._Mysize = 0i64;
    result->_Mypair._Myval2._Bx._Buf[0] = 0;
  }
  else
  {
    extension::FutureStageOption::stringize((extension::FutureStageOption *)opt, result);
    return result;
  }
  return v4;
}

std::_List_node<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >,void *> *__fastcall std::_List_alloc<std::_List_base_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLCamera,void>::Body>>>>::_Buynode0(
        std::_List_alloc<std::_List_base_types<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >> > *this,
        std::_List_node<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >,void *> *_Next,
        std::_List_node<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >,void *> *_Prev)
{
  std::_List_node<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >,void *> *result; // rax

  result = (std::_List_node<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >,void *> *)operator new(0x40ui64);
  if ( !_Next )
  {
    _Next = result;
    _Prev = result;
  }
  if ( result )
    result->_Next = _Next;
  if ( result != (std::_List_node<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >,void *> *)-8i64 )
    result->_Prev = _Prev;
  return result;
}

void __fastcall std::_Hash<std::_Umap_traits<std::string,extension::RCWeakPtr<extension::BasicFutureObject<Image,extension::FutureImageOption>::Body>,std::_Uhash_compare<std::string,std::hash<std::string>,std::equal_to<std::string>>,std::allocator<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<Image,extension::FutureImageOption>::Body>>>,0>>::_Check_size(
        std::_Hash<std::_Umap_traits<std::string,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body>,std::_Uhash_compare<std::string,std::hash<std::string >,std::equal_to<std::string > >,std::allocator<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > >,0> > *this)
{
  signed __int64 Mysize; // rax
  __int64 Maxidx; // rdx
  float v4; // xmm0_4
  float v5; // xmm1_4
  std::_List_node<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >,void *> *Myhead; // rax
  std::_List_node<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >,void *> *Prev; // rdi
  std::_List_node<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >,void *> *Next; // rbx
  std::pair<std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > > > >,bool> result; // [rsp+20h] [rbp-18h] BYREF

  Mysize = this->_List._Mypair._Myval2._Mysize;
  Maxidx = this->_Maxidx;
  v4 = (float)(int)Mysize;
  if ( Mysize < 0 )
    v4 = v4 + 1.8446744e19;
  v5 = (float)(int)Maxidx;
  if ( Maxidx < 0 )
    v5 = v5 + 1.8446744e19;
  if ( (float)(v4 / v5) > this->_Traitsobj._Mypair._Myval2._Myval2 )
  {
    if ( (unsigned __int64)Maxidx >= 0x200 )
    {
      if ( (unsigned __int64)Maxidx < 0xFFFFFFFFFFFFFFFi64 )
        Maxidx *= 2i64;
    }
    else
    {
      Maxidx *= 8i64;
    }
    std::_Hash<std::_Umap_traits<std::string,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body>,std::_Uhash_compare<std::string,std::hash<std::string>,std::equal_to<std::string>>,std::allocator<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body>>>,0>>::_Init(
      (std::_Hash<std::_Umap_traits<extension::SoundHashKey,int,std::_Uhash_compare<extension::SoundHashKey,extension::SoundHashKey::Hasher,std::equal_to<extension::SoundHashKey> >,std::allocator<std::pair<extension::SoundHashKey const ,int> >,0> > *)this,
      Maxidx);
    Myhead = this->_List._Mypair._Myval2._Myhead;
    if ( Myhead->_Next != Myhead )
    {
      Prev = Myhead->_Prev;
      do
      {
        Next = this->_List._Mypair._Myval2._Myhead->_Next;
        std::_Hash<std::_Umap_traits<std::string,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>,std::_Uhash_compare<std::string,std::hash<std::string>,std::equal_to<std::string>>,std::allocator<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>>>,0>>::_Insert<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>>>>>>(
          this,
          &result,
          &Next->_Myval,
          (std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > > > >)Next);
      }
      while ( Next != Prev );
    }
  }
}

void __fastcall std::_Hash<std::_Umap_traits<std::string,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body>,std::_Uhash_compare<std::string,std::hash<std::string>,std::equal_to<std::string>>,std::allocator<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body>>>,0>>::_Destroy_if_not_nil(
        std::_Hash<std::_Umap_traits<std::string,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body>,std::_Uhash_compare<std::string,std::hash<std::string >,std::equal_to<std::string > >,std::allocator<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > >,0> > *this,
        std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > > > > _Plist)
{
  extension::RefCountableWeakSupportBase::WeakProxy *m_ptr; // rcx

  _Plist._Ptr->_Prev->_Next = _Plist._Ptr->_Next;
  _Plist._Ptr->_Next->_Prev = _Plist._Ptr->_Prev;
  --this->_List._Mypair._Myval2._Mysize;
  m_ptr = _Plist._Ptr->_Myval.second.m_proxy.m_ptr;
  if ( m_ptr && _InterlockedExchangeAdd64((volatile signed __int64 *)m_ptr, 0xFFFFFFFFFFFFFFFFui64) == 1 )
    operator delete(m_ptr, 0x18ui64);
  std::string::~string((std::string *)&_Plist._Ptr->_Myval.first);
  operator delete(_Plist._Ptr);
}

void __fastcall std::_Hash<std::_Umap_traits<std::string,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body>,std::_Uhash_compare<std::string,std::hash<std::string>,std::equal_to<std::string>>,std::allocator<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body>>>,0>>::_Init(
        std::_Hash<std::_Umap_traits<extension::SoundHashKey,int,std::_Uhash_compare<extension::SoundHashKey,extension::SoundHashKey::Hasher,std::equal_to<extension::SoundHashKey> >,std::allocator<std::pair<extension::SoundHashKey const ,int> >,0> > *this,
        unsigned __int64 _Buckets)
{
  unsigned __int64 v2; // rdi
  std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > _Val; // [rsp+50h] [rbp+8h] BYREF
  std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > > > > result; // [rsp+58h] [rbp+10h] BYREF

  v2 = 2 * _Buckets;
  if ( this->_Vec._Mypair._Myval2._Myend - this->_Vec._Mypair._Myval2._Myfirst < 2 * _Buckets )
  {
    if ( v2 > 0x1FFFFFFFFFFFFFFFi64 )
      std::_Xlength_error("vector<T> too long");
    std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>>>>>,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>>>>>>>>::_Reallocate(
      &this->_Vec,
      v2);
  }
  _Val._Ptr = this->_List._Mypair._Myval2._Myhead;
  this->_Vec._Mypair._Myval2._Mylast = this->_Vec._Mypair._Myval2._Myfirst;
  std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,CommandCheck::CommandSettingMapData>>>>,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,CommandCheck::CommandSettingMapData>>>>>>>::_Insert_n(
    &this->_Vec,
    &result,
    (std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > > > >)this->_Vec._Mypair._Myval2._Myfirst,
    v2,
    &_Val);
  this->_Mask = _Buckets - 1;
  this->_Maxidx = _Buckets;
}

std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > > > > *__fastcall std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,CommandCheck::CommandSettingMapData>>>>,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,CommandCheck::CommandSettingMapData>>>>>>>::_Insert_n(
        std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > >,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > > > > *this,
        std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > > > > *result,
        std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > > > > _Where,
        unsigned __int64 _Count,
        const std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > *_Val)
{
  std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > *Myfirst; // r8
  signed __int64 v10; // r12
  std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > *Mylast; // r14
  __int64 v12; // r14
  unsigned __int64 v13; // r15
  unsigned __int64 v14; // rdx
  std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > > > > *v15; // rcx
  std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > *v16; // rbx
  signed __int64 v17; // r14
  std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > > > > *v18; // r9
  std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > > > > *v19; // r9
  std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > > > > *v20; // r9
  std::allocator<AgLogger *> *v21; // rcx
  unsigned __int64 v22; // rsi
  unsigned __int64 v23; // rbx
  std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > > > > *v24; // r9
  std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > *v25; // rdx
  __int64 v26; // rcx
  unsigned __int64 v27; // r8
  std::_List_node<std::pair<extension::SoundHashKey const ,int>,void *> *v28; // rax
  std::_List_node<std::pair<extension::SoundHashKey const ,int>,void *> *Ptr; // rbx
  unsigned __int64 v30; // r15
  std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > *i; // rdx
  std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > _Pval; // [rsp+80h] [rbp+8h] BYREF
  std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > *_Last; // [rsp+90h] [rbp+18h]
  std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > *v35; // [rsp+98h] [rbp+20h]

  _Last = _Where._Ptr;
  Myfirst = this->_Mypair._Myval2._Myfirst;
  v10 = _Where._Ptr - this->_Mypair._Myval2._Myfirst;
  if ( _Count )
  {
    Mylast = this->_Mypair._Myval2._Mylast;
    if ( this->_Mypair._Myval2._Myend - Mylast >= _Count )
    {
      if ( Mylast - _Where._Ptr >= _Count )
      {
        Ptr = _Val->_Ptr;
        v30 = _Count;
        this->_Mypair._Myval2._Mylast = std::_Uninitialized_move_al_unchecked1<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body>>>>> *,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body>>>>> *,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body>>>>>>>>(
                                          &Mylast[-_Count],
                                          Mylast,
                                          Mylast,
                                          (std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > > > > *)_Count);
        memmove(&_Last[_Count], _Last, (size_t)Mylast - 8 * _Count - (_QWORD)_Last);
        for ( i = _Last; i != &_Last[v30]; ++i )
          i->_Ptr = Ptr;
      }
      else
      {
        _Pval._Ptr = _Val->_Ptr;
        v23 = 8 * _Count;
        std::_Uninitialized_move_al_unchecked1<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body>>>>> *,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body>>>>> *,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body>>>>>>>>(
          _Where._Ptr,
          Mylast,
          &_Where._Ptr[_Count],
          (std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > > > > *)_Count);
        std::_Uninit_alloc_fill_n1<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>>>>> *,unsigned __int64,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>>>>>>>>(
          this->_Mypair._Myval2._Mylast,
          _Count - (this->_Mypair._Myval2._Mylast - _Last),
          &_Pval,
          v24);
        this->_Mypair._Myval2._Mylast = (std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > *)((char *)this->_Mypair._Myval2._Mylast + v23);
        v25 = _Last;
        v26 = 0i64;
        v27 = (unsigned __int64)((char *)&this->_Mypair._Myval2._Mylast[v23 / 0xFFFFFFFFFFFFFFF8ui64] - (char *)_Last + 7) >> 3;
        if ( _Last > &this->_Mypair._Myval2._Mylast[v23 / 0xFFFFFFFFFFFFFFF8ui64] )
          v27 = 0i64;
        if ( v27 )
        {
          v28 = _Pval._Ptr;
          do
          {
            v25->_Ptr = v28;
            ++v25;
            ++v26;
          }
          while ( v26 != v27 );
        }
      }
    }
    else
    {
      v12 = Mylast - Myfirst;
      if ( 0x1FFFFFFFFFFFFFFFi64 - v12 < _Count )
        std::_Xlength_error("vector<T> too long");
      v13 = v12 + _Count;
      v14 = this->_Mypair._Myval2._Myend - Myfirst;
      v15 = 0i64;
      if ( 0x1FFFFFFFFFFFFFFFi64 - (v14 >> 1) >= v14 )
        v15 = (std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > > > > *)(v14 + (v14 >> 1));
      if ( (unsigned __int64)v15 >= v13 )
        v13 = (unsigned __int64)v15;
      _Pval._Ptr = (std::_List_node<std::pair<extension::SoundHashKey const ,int>,void *> *)v13;
      v16 = std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body>>>>>>>>::allocate(
              v15,
              v13);
      v35 = v16;
      v17 = _Last - this->_Mypair._Myval2._Myfirst;
      std::_Uninit_alloc_fill_n1<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>>>>> *,unsigned __int64,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>>>>>>>>(
        &v16[v17],
        _Count,
        _Val,
        v18);
      std::_Uninitialized_move_al_unchecked1<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body>>>>> *,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body>>>>> *,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body>>>>>>>>(
        this->_Mypair._Myval2._Myfirst,
        _Last,
        v16,
        v19);
      std::_Uninitialized_move_al_unchecked1<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body>>>>> *,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body>>>>> *,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body>>>>>>>>(
        _Last,
        this->_Mypair._Myval2._Mylast,
        &v16[v17 + _Count],
        v20);
      v22 = this->_Mypair._Myval2._Mylast - this->_Mypair._Myval2._Myfirst + _Count;
      if ( this->_Mypair._Myval2._Myfirst )
        std::_Wrap_alloc<std::allocator<OGLShader *>>::deallocate(
          v21,
          (AgLogger **)this->_Mypair._Myval2._Myfirst,
          this->_Mypair._Myval2._Myend - this->_Mypair._Myval2._Myfirst);
      this->_Mypair._Myval2._Myend = &v16[v13];
      this->_Mypair._Myval2._Mylast = &v16[v22];
      this->_Mypair._Myval2._Myfirst = v16;
    }
  }
  result->_Ptr = &this->_Mypair._Myval2._Myfirst[v10];
  return result;
}

void __fastcall std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>>>>>,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>>>>>>>>::_Reallocate(
        std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > >,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > > > > *this,
        unsigned __int64 _Count)
{
  std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > *v4; // rdi
  std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > > > > *v5; // r9
  std::allocator<AgLogger *> *v6; // rcx
  signed __int64 v7; // rsi

  v4 = std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body>>>>>>>>::allocate(
         (std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > > > > *)this,
         _Count);
  std::_Uninitialized_move_al_unchecked1<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body>>>>> *,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body>>>>> *,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLCurve,void>::Body>>>>>>>>(
    this->_Mypair._Myval2._Myfirst,
    this->_Mypair._Myval2._Mylast,
    v4,
    v5);
  v7 = this->_Mypair._Myval2._Mylast - this->_Mypair._Myval2._Myfirst;
  if ( this->_Mypair._Myval2._Myfirst )
    std::_Wrap_alloc<std::allocator<OGLShader *>>::deallocate(
      v6,
      (AgLogger **)this->_Mypair._Myval2._Myfirst,
      this->_Mypair._Myval2._Myend - this->_Mypair._Myval2._Myfirst);
  this->_Mypair._Myval2._Myend = &v4[_Count];
  this->_Mypair._Myval2._Mylast = &v4[v7];
  this->_Mypair._Myval2._Myfirst = v4;
}

std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > *__fastcall std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body>>>>>>>>::allocate(
        std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > > > > *this,
        unsigned __int64 _Count)
{
  unsigned __int64 v3; // rcx
  void *v4; // rax

  if ( !_Count )
    return 0i64;
  if ( _Count > 0x1FFFFFFFFFFFFFFFi64 )
    std::_Xbad_alloc();
  v3 = 8 * _Count;
  if ( 8 * _Count < 0x1000 )
    return (std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > *)operator new(v3);
  if ( v3 + 39 <= v3 )
    std::_Xbad_alloc();
  v4 = operator new(v3 + 39);
  *(_QWORD *)((((unsigned __int64)v4 + 39) & 0xFFFFFFFFFFFFFFE0ui64) - 8) = v4;
  return (std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<extension::SoundHashKey const ,int> > > > *)(((unsigned __int64)v4 + 39) & 0xFFFFFFFFFFFFFFE0ui64);
}

void __fastcall std::list<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body>>>::clear(
        std::list<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >> *this)
{
  std::_List_node<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >,void *> *Next; // rdi
  extension::RefCountableWeakSupportBase::WeakProxy *m_ptr; // rcx
  void **p_Myval; // rbx
  std::_List_node<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >,void *> *v5; // rsi
  unsigned __int64 Myres; // rax
  char *v7; // rcx
  char *v8; // rax
  unsigned __int64 v9; // rcx
  bool v10; // cf

  Next = this->_Mypair._Myval2._Myhead->_Next;
  this->_Mypair._Myval2._Myhead->_Next = this->_Mypair._Myval2._Myhead;
  this->_Mypair._Myval2._Myhead->_Prev = this->_Mypair._Myval2._Myhead;
  this->_Mypair._Myval2._Mysize = 0i64;
  if ( Next != this->_Mypair._Myval2._Myhead )
  {
    do
    {
      m_ptr = Next->_Myval.second.m_proxy.m_ptr;
      p_Myval = (void **)&Next->_Myval;
      v5 = Next->_Next;
      if ( m_ptr && _InterlockedExchangeAdd64((volatile signed __int64 *)m_ptr, 0xFFFFFFFFFFFFFFFFui64) == 1 )
        operator delete(m_ptr, 0x18ui64);
      Myres = Next->_Myval.first._Mypair._Myval2._Myres;
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
      Next->_Myval.first._Mypair._Myval2._Myres = 15i64;
      v10 = Next->_Myval.first._Mypair._Myval2._Myres < 0x10;
      Next->_Myval.first._Mypair._Myval2._Mysize = 0i64;
      if ( !v10 )
        p_Myval = (void **)*p_Myval;
      *(_BYTE *)p_Myval = 0;
      operator delete(Next);
      Next = v5;
    }
    while ( v5 != this->_Mypair._Myval2._Myhead );
  }
}

Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::QName> *__fastcall extension::FutureObjectJob<OGLCurve>::createOnErrorData(
        Scaleform::GFx::AS3::Instances::fl::XML *this,
        Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::QName> *result)
{
  result->pObject = 0i64;
  return result;
}

bool __fastcall StageResources::createTknFile(StageResources *this, const char *pTknFilePath, const char *pBasePath)
{
  bool result; // al
  unsigned __int64 modelFilenameCount; // rax
  unsigned __int64 v8; // rbx
  __int64 v9; // rax
  unsigned __int64 v10; // kr00_8
  bool v11; // cf
  unsigned __int64 v12; // rax
  EffectDataListManager *v13; // rax
  extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> *p_m_pBindModel; // rsi
  int v15; // ebx
  __int64 v16; // r14
  __int64 v17; // rsi
  const char **pModelFilenames; // rax
  unsigned __int64 v19; // r8
  extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::AssetCache *v20; // rcx
  extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> *pOGLModels; // r8
  extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body *m_ptr; // rdx
  extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body *v23; // rcx
  extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body *v24; // rcx
  char *Ptr; // rcx
  char *v26; // rax
  unsigned __int64 motionFilenameCount; // rax
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // kr10_8
  int v30; // er15
  __int64 v31; // rsi
  const char **pMotionFilenames; // rax
  EffectDataListManager *v33; // rbx
  unsigned __int64 v34; // rdx
  int v35; // er8
  int fixed; // eax
  unsigned __int64 v37; // rdx
  void *pData; // r14
  unsigned __int64 v39; // rdx
  unsigned __int64 v40; // rdx
  unsigned __int64 effectFilenameCount; // rcx
  unsigned __int64 v42; // rax
  int v43; // esi
  __int64 v44; // rbx
  EffectDataListManager *v45; // rax
  unsigned __int64 v46; // r8
  std::_Wrap_alloc<std::allocator<EffectListNodeData> > *v47; // r8
  std::integral_constant<bool,0> v48; // r9
  EffectDataListManager *v49; // rcx
  CFixMemoryPara pPara; // [rsp+30h] [rbp-D0h] BYREF
  EffectDataListManager *v51; // [rsp+40h] [rbp-C0h]
  char v52; // [rsp+49h] [rbp-B7h]
  extension::RefCountablePtr<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body> v53; // [rsp+50h] [rbp-B0h] BYREF
  std::string v54; // [rsp+58h] [rbp-A8h] BYREF
  std::string v55; // [rsp+78h] [rbp-88h] BYREF
  __int64 v56; // [rsp+98h] [rbp-68h]
  std::string _Right; // [rsp+A0h] [rbp-60h] BYREF
  char _Buffer[112]; // [rsp+C0h] [rbp-40h] BYREF

  v56 = -2i64;
  StageResources::dispose(this);
  result = loadFileToTkn(pTknFilePath, &this->tkn);
  if ( result )
  {
    modelFilenameCount = this->tkn.modelFilenameCount;
    this->modelCount = modelFilenameCount;
    v8 = modelFilenameCount;
    *(_QWORD *)&pPara.buf_idx = modelFilenameCount;
    v10 = modelFilenameCount;
    v9 = 16 * modelFilenameCount;
    if ( !is_mul_ok(v10, 0x10ui64) )
      v9 = -1i64;
    v11 = __CFADD__(v9, 8i64);
    v12 = v9 + 8;
    if ( v11 )
      v12 = -1i64;
    v13 = (EffectDataListManager *)operator new[](v12);
    v51 = v13;
    if ( v13 )
    {
      v13->__vftable = (EffectDataListManager_vtbl *)v8;
      p_m_pBindModel = (extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> *)&v13->m_pBindModel;
      `eh vector constructor iterator'(
        &v13->m_pBindModel,
        0x10ui64,
        v8,
        (void (__fastcall *)(void *))extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>,
        (void (__fastcall *)(void *))extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::~BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>);
    }
    else
    {
      p_m_pBindModel = 0i64;
    }
    this->pOGLModels = p_m_pBindModel;
    v15 = 0;
    if ( this->modelCount > 0 )
    {
      v16 = 0i64;
      v17 = 0i64;
      do
      {
        pModelFilenames = this->tkn.pModelFilenames;
        if ( pModelFilenames[v17] )
        {
          sprintf_s(_Buffer, 0x80ui64, "%s%s.cast", pBasePath, pModelFilenames[v17]);
          _Right._Mypair._Myval2._Myres = 15i64;
          _Right._Mypair._Myval2._Mysize = 0i64;
          _Right._Mypair._Myval2._Bx._Buf[0] = 0;
          if ( _Buffer[0] )
          {
            v19 = -1i64;
            do
              ++v19;
            while ( _Buffer[v19] );
          }
          else
          {
            v19 = 0i64;
          }
          std::string::assign(&_Right, _Buffer, v19);
          v52 = 0;
          v54._Mypair._Myval2._Myres = 15i64;
          v54._Mypair._Myval2._Mysize = 0i64;
          v54._Mypair._Myval2._Bx._Buf[0] = 0;
          std::string::assign(&v54, &_Right, 0i64, 0xFFFFFFFFFFFFFFFFui64);
          extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::AssetCache::getCachedOrLoadStart(
            v20,
            &v53,
            &v54,
            0i64);
          pOGLModels = this->pOGLModels;
          pOGLModels[v16].m_isNoCache = 0;
          m_ptr = v53.m_ptr;
          if ( v53.m_ptr )
            _InterlockedExchangeAdd64((volatile signed __int64 *)&v53.m_ptr->m_refCount.m_ptr->m_sharedCount, 1ui64);
          v23 = pOGLModels[v16].m_body.m_ptr;
          pOGLModels[v16].m_body.m_ptr = m_ptr;
          if ( v23
            && _InterlockedExchangeAdd64(
                 (volatile signed __int64 *)&v23->m_refCount.m_ptr->m_sharedCount,
                 0xFFFFFFFFFFFFFFFFui64) == 1 )
          {
            ((void (__fastcall *)(extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body *, __int64))v23->~RefCountableWeakSupportBase)(
              v23,
              1i64);
          }
          v24 = v53.m_ptr;
          if ( v53.m_ptr
            && _InterlockedExchangeAdd64(
                 (volatile signed __int64 *)&v53.m_ptr->m_refCount.m_ptr->m_sharedCount,
                 0xFFFFFFFFFFFFFFFFui64) == 1 )
          {
            ((void (__fastcall *)(extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body *, __int64))v24->~RefCountableWeakSupportBase)(
              v24,
              1i64);
          }
          if ( _Right._Mypair._Myval2._Myres >= 0x10 )
          {
            Ptr = _Right._Mypair._Myval2._Bx._Ptr;
            if ( _Right._Mypair._Myval2._Myres + 1 >= 0x1000 )
            {
              if ( (_Right._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
                invalid_parameter_noinfo_noreturn();
              v26 = (char *)*((_QWORD *)_Right._Mypair._Myval2._Bx._Ptr - 1);
              if ( v26 >= _Right._Mypair._Myval2._Bx._Ptr )
                invalid_parameter_noinfo_noreturn();
              if ( (char *)(_Right._Mypair._Myval2._Bx._Ptr - v26) < (char *)8 )
                invalid_parameter_noinfo_noreturn();
              if ( (char *)(_Right._Mypair._Myval2._Bx._Ptr - v26) > (char *)0x27 )
                invalid_parameter_noinfo_noreturn();
              Ptr = (char *)*((_QWORD *)_Right._Mypair._Myval2._Bx._Ptr - 1);
            }
            operator delete(Ptr);
          }
        }
        ++v15;
        ++v17;
        ++v16;
      }
      while ( v15 < this->modelCount );
    }
    motionFilenameCount = this->tkn.motionFilenameCount;
    this->motionCount = motionFilenameCount;
    v29 = motionFilenameCount;
    v28 = 8 * motionFilenameCount;
    if ( !is_mul_ok(v29, 8ui64) )
      v28 = -1i64;
    this->pOGLMotions = (OGLMotion **)operator new[](v28);
    v30 = 0;
    if ( this->motionCount > 0 )
    {
      v31 = 0i64;
      while ( 1 )
      {
        pMotionFilenames = this->tkn.pMotionFilenames;
        if ( pMotionFilenames[v31] )
          break;
LABEL_49:
        ++v30;
        ++v31;
        if ( v30 >= this->motionCount )
          goto LABEL_50;
      }
      sprintf_s(_Buffer, 0x80ui64, "%s%s.otra", pBasePath, pMotionFilenames[v31]);
      v33 = (EffectDataListManager *)operator new(0x30ui64);
      v51 = v33;
      v33->__vftable = 0i64;
      LODWORD(v33->m_pBindModel) = 0;
      *(_QWORD *)&v33->m_PlayerNum = 0i64;
      v33->m_Align = 0;
      v33->m_FillColor.__vftable = 0i64;
      *(_QWORD *)&v33->m_FillColor.x = 0i64;
      OGLMotion::finalize((OGLMotion *)v33, v34);
      pPara.buf_idx = -1;
      pPara.pData = 0i64;
      fixed = CFile::loadDataFixKeep(_Buffer, &pPara, v35);
      pData = pPara.pData;
      if ( pPara.pData )
      {
        if ( (unsigned int)OGLMotion::loadOtraData((OGLMotion *)v33, (unsigned __int8 *)pPara.pData, fixed) == 1 )
        {
          operator delete(pData, v39);
          pPara.pData = 0i64;
LABEL_48:
          this->pOGLMotions[v31] = (OGLMotion *)v33;
          goto LABEL_49;
        }
        operator delete(pData, v39);
        pPara.pData = 0i64;
        OGLMotion::finalize((OGLMotion *)v33, v40);
      }
      OGLMotion::finalize((OGLMotion *)v33, v37);
      operator delete(v33, 0x30ui64);
      v33 = 0i64;
      goto LABEL_48;
    }
LABEL_50:
    effectFilenameCount = this->tkn.effectFilenameCount;
    this->effectManagerCount = effectFilenameCount;
    v42 = 8 * effectFilenameCount;
    if ( !is_mul_ok(effectFilenameCount, 8ui64) )
      v42 = -1i64;
    this->pEffectManagers = (EffectDataListManager **)operator new[](v42);
    v43 = 0;
    if ( this->effectManagerCount > 0 )
    {
      v44 = 0i64;
      do
      {
        this->pEffectManagers[v44] = 0i64;
        if ( this->tkn.pEffectFilenames[v44] )
        {
          v51 = (EffectDataListManager *)operator new(0x168ui64);
          EffectDataListManager::EffectDataListManager(v51);
          this->pEffectManagers[v44] = v45;
          sprintf_s(_Buffer, 0x80ui64, "%sEffects/%s.leff", pBasePath, this->tkn.pEffectFilenames[v44]);
          v55._Mypair._Myval2._Myres = 15i64;
          v55._Mypair._Myval2._Mysize = 0i64;
          v55._Mypair._Myval2._Bx._Buf[0] = 0;
          if ( _Buffer[0] )
          {
            v46 = -1i64;
            do
              ++v46;
            while ( _Buffer[v46] );
          }
          else
          {
            v46 = 0i64;
          }
          std::string::assign(&v55, _Buffer, v46);
          if ( !EffectDataListManager::loadEffectData(this->pEffectManagers[v44], &v55, v47, v48) )
          {
            v49 = this->pEffectManagers[v44];
            if ( v49 )
            {
              ((void (__fastcall *)(EffectDataListManager *, __int64))v49->~EffectDataListManager)(v49, 1i64);
              this->pEffectManagers[v44] = 0i64;
            }
          }
        }
        ++v43;
        ++v44;
      }
      while ( v43 < this->effectManagerCount );
    }
    return 1;
  }
  return result;
}

void __fastcall BattleStageResourceContainer::dataCompatibleConvert(
        BattleStageResourceContainer *this,
        int dataVersion)
{
  int v2; // esi
  __int64 v3; // r14
  TknData *v4; // r9
  char v5; // r11
  __int64 m_pUserName_low; // rbx
  int v7; // er10
  __int64 v8; // rax
  __int64 v9; // r8

  if ( dataVersion <= 201 )
  {
    v2 = 0;
    if ( this->m_dataCount > 0 )
    {
      v3 = 0i64;
      do
      {
        v4 = this->m_pDatas[v3];
        if ( v4 && v4->m_dataType == DATATYPE_EVENT )
        {
          v5 = SHIDWORD(v4[1].__vftable) > 0 || LODWORD(v4[1].__vftable) - HIDWORD(v4[1].__vftable) > 1;
          if ( v4[3].m_uniqueID == 1 )
          {
            m_pUserName_low = SLODWORD(v4[1].m_pUserName);
            v7 = 0;
            v8 = 0i64;
            if ( (int)m_pUserName_low > 0 )
            {
              do
              {
                if ( v8 < 0 || v7 >= (int)m_pUserName_low )
                  v9 = 0i64;
                else
                  v9 = *(_QWORD *)(*(_QWORD *)&v4[4].m_uniqueID + 8 * v8);
                ++v7;
                ++v8;
                v5 |= *(_DWORD *)(v9 + 64) != 0 || *(_QWORD *)(v9 + 72) != 0i64;
              }
              while ( v8 < m_pUserName_low );
            }
          }
          BYTE4(v4[3].m_pUserName) = v5;
        }
        ++v2;
        ++v3;
      }
      while ( v2 < this->m_dataCount );
    }
  }
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

void __fastcall BattleStageResourceContainer::dispose(BattleStageResourceContainer *this, unsigned __int64 a2)
{
  int v3; // esi
  __int64 v4; // rdi
  TknData *v5; // rcx
  TknData **m_pDatas; // rcx
  BSDataSceneTrigger **m_pSceneTriggers; // rcx
  BattleStageResourcePack *m_pResourcPack; // rax
  extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> *pStageModels; // rdi
  extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body *m_ptr; // rcx
  BattleStageResourcePack *v11; // rdi
  extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body *v12; // rcx

  if ( this->m_pDatas )
  {
    v3 = 0;
    if ( this->m_dataCount > 0 )
    {
      v4 = 0i64;
      do
      {
        v5 = this->m_pDatas[v4];
        if ( v5 )
        {
          ((void (__fastcall *)(TknData *, __int64))v5->~TknData)(v5, 1i64);
          this->m_pDatas[v4] = 0i64;
        }
        ++v3;
        ++v4;
      }
      while ( v3 < this->m_dataCount );
    }
    m_pDatas = this->m_pDatas;
    if ( m_pDatas )
    {
      operator delete(m_pDatas, a2);
      this->m_pDatas = 0i64;
    }
  }
  m_pSceneTriggers = this->m_pSceneTriggers;
  if ( m_pSceneTriggers )
  {
    operator delete(m_pSceneTriggers, a2);
    this->m_pSceneTriggers = 0i64;
  }
  m_pResourcPack = this->m_pResourcPack;
  if ( m_pResourcPack )
  {
    if ( m_pResourcPack->pStageModels )
    {
      extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::reset(m_pResourcPack->pStageModels);
      pStageModels = this->m_pResourcPack->pStageModels;
      if ( pStageModels )
      {
        m_ptr = pStageModels->m_body.m_ptr;
        if ( m_ptr
          && _InterlockedExchangeAdd64(
               (volatile signed __int64 *)&m_ptr->m_refCount.m_ptr->m_sharedCount,
               0xFFFFFFFFFFFFFFFFui64) == 1 )
        {
          ((void (__fastcall *)(extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body *, __int64))m_ptr->~RefCountableWeakSupportBase)(
            m_ptr,
            1i64);
        }
        operator delete(pStageModels, 0x10ui64);
        this->m_pResourcPack->pStageModels = 0i64;
      }
    }
    extension::BasicFutureObject<StageResources,extension::FutureStageOption>::reset(&this->m_pResourcPack->datas);
    v11 = this->m_pResourcPack;
    if ( v11 )
    {
      v12 = v11->datas.m_body.m_ptr;
      if ( v12
        && _InterlockedExchangeAdd64(
             (volatile signed __int64 *)&v12->m_refCount.m_ptr->m_sharedCount,
             0xFFFFFFFFFFFFFFFFui64) == 1 )
      {
        ((void (__fastcall *)(extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body *, __int64))v12->~RefCountableWeakSupportBase)(
          v12,
          1i64);
      }
      operator delete(v11, 0x18ui64);
      this->m_pResourcPack = 0i64;
    }
  }
  *(_WORD *)&this->m_bResoucesActived = 0;
}

void __fastcall StageResources::dispose(StageResources *this, unsigned __int64 a2)
{
  int i; // edi
  extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> *pOGLModels; // rcx
  extension::RefCountablePtr<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body> *p_m_body; // rdi
  int v6; // esi
  __int64 v7; // rdi
  OGLMotion **pOGLMotions; // rax
  OGLMotion *v9; // rbp
  OGLMotion **v10; // rcx
  int v11; // esi
  __int64 v12; // rdi
  OGLTexture *v13; // rcx
  OGLTexture **pOGLTextures; // rcx
  int v15; // esi
  __int64 v16; // rdi
  EffectDataListManager *v17; // rcx
  EffectDataListManager **pEffectManagers; // rcx

  if ( this->pOGLModels )
  {
    for ( i = 0; i < this->modelCount; ++i )
      extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::reset(&this->pOGLModels[i]);
    pOGLModels = this->pOGLModels;
    if ( pOGLModels )
    {
      p_m_body = &pOGLModels[-1].m_body;
      `eh vector destructor iterator'(
        pOGLModels,
        0x10ui64,
        (unsigned __int64)pOGLModels[-1].m_body.m_ptr,
        (void (__fastcall *)(void *))extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::~BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>);
      operator delete[](p_m_body, 16 * (__int64)p_m_body->m_ptr + 8);
      this->pOGLModels = 0i64;
    }
  }
  if ( this->pOGLMotions )
  {
    v6 = 0;
    if ( this->motionCount > 0 )
    {
      v7 = 0i64;
      do
      {
        pOGLMotions = this->pOGLMotions;
        v9 = pOGLMotions[v7];
        if ( v9 )
        {
          OGLMotion::finalize(pOGLMotions[v7], a2);
          operator delete(v9, 0x30ui64);
          this->pOGLMotions[v7] = 0i64;
        }
        ++v6;
        ++v7;
      }
      while ( v6 < this->motionCount );
    }
    v10 = this->pOGLMotions;
    if ( v10 )
    {
      operator delete(v10, a2);
      this->pOGLMotions = 0i64;
    }
  }
  if ( this->pOGLTextures )
  {
    v11 = 0;
    if ( this->textureCount > 0 )
    {
      v12 = 0i64;
      do
      {
        v13 = this->pOGLTextures[v12];
        if ( v13 )
        {
          ((void (__fastcall *)(OGLTexture *, __int64))v13->~OGLTexture)(v13, 1i64);
          this->pOGLTextures[v12] = 0i64;
        }
        ++v11;
        ++v12;
      }
      while ( v11 < this->textureCount );
    }
    pOGLTextures = this->pOGLTextures;
    if ( pOGLTextures )
    {
      operator delete(pOGLTextures, a2);
      this->pOGLTextures = 0i64;
    }
  }
  if ( this->pEffectManagers )
  {
    v15 = 0;
    if ( this->effectManagerCount > 0 )
    {
      v16 = 0i64;
      do
      {
        v17 = this->pEffectManagers[v16];
        if ( v17 )
        {
          ((void (__fastcall *)(EffectDataListManager *, __int64))v17->~EffectDataListManager)(v17, 1i64);
          this->pEffectManagers[v16] = 0i64;
        }
        ++v15;
        ++v16;
      }
      while ( v15 < this->effectManagerCount );
    }
    pEffectManagers = this->pEffectManagers;
    if ( pEffectManagers )
    {
      operator delete(pEffectManagers, a2);
      this->pEffectManagers = 0i64;
    }
  }
  deleteTknDataDesc(&this->tkn);
  this->modelCount = 0;
  this->motionCount = 0;
  this->textureCount = 0;
  this->effectManagerCount = 0;
}

std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > > > > *__fastcall std::_Hash<std::_Umap_traits<std::string,extension::RCWeakPtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body>,std::_Uhash_compare<std::string,std::hash<std::string>,std::equal_to<std::string>>,std::allocator<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body>>>,0>>::erase(
        std::_Hash<std::_Umap_traits<std::string,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body>,std::_Uhash_compare<std::string,std::hash<std::string >,std::equal_to<std::string > >,std::allocator<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > >,0> > *this,
        std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > > > > *result,
        std::_List_const_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > > > > _Plist)
{
  std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > *p_Myval; // r9
  unsigned __int64 Mysize; // r11
  unsigned __int64 v7; // rcx
  __int64 i; // rdx
  __int64 v9; // rax
  unsigned __int64 v10; // r9
  std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > > > > *v11; // rcx

  p_Myval = &_Plist._Ptr->_Myval;
  Mysize = _Plist._Ptr->_Myval.first._Mypair._Myval2._Mysize;
  if ( _Plist._Ptr->_Myval.first._Mypair._Myval2._Myres >= 0x10 )
    p_Myval = (std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > *)p_Myval->first._Mypair._Myval2._Bx._Ptr;
  v7 = 0i64;
  for ( i = 0xCBF29CE484222325ui64; v7 < Mysize; i = 0x100000001B3i64 * (v9 ^ i) )
    v9 = (unsigned __int8)p_Myval->first._Mypair._Myval2._Bx._Buf[v7++];
  v10 = 2 * (i & this->_Mask);
  v11 = &this->_Vec._Mypair._Myval2._Myfirst[v10];
  if ( v11[1]._Ptr == _Plist._Ptr )
  {
    if ( v11->_Ptr == _Plist._Ptr )
    {
      v11->_Ptr = this->_List._Mypair._Myval2._Myhead;
      this->_Vec._Mypair._Myval2._Myfirst[v10 + 1]._Ptr = this->_List._Mypair._Myval2._Myhead;
    }
    else
    {
      v11[1]._Ptr = _Plist._Ptr->_Prev;
    }
  }
  else if ( v11->_Ptr == _Plist._Ptr )
  {
    v11->_Ptr = _Plist._Ptr->_Next;
  }
  std::list<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body>>>::erase(
    &this->_List,
    result,
    _Plist);
  return result;
}

std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > > > > *__fastcall std::list<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body>>>::erase(
        std::list<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >> *this,
        std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > > > > *result,
        std::_List_const_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > > > > _Where)
{
  extension::RefCountableWeakSupportBase::WeakProxy *m_ptr; // rcx
  std::_List_node<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >,void *> *Next; // [rsp+40h] [rbp+18h]

  Next = _Where._Ptr->_Next;
  _Where._Ptr->_Prev->_Next = _Where._Ptr->_Next;
  _Where._Ptr->_Next->_Prev = _Where._Ptr->_Prev;
  --this->_Mypair._Myval2._Mysize;
  m_ptr = _Where._Ptr->_Myval.second.m_proxy.m_ptr;
  if ( m_ptr && _InterlockedExchangeAdd64((volatile signed __int64 *)m_ptr, 0xFFFFFFFFFFFFFFFFui64) == 1 )
    operator delete(m_ptr, 0x18ui64);
  std::string::~string((std::string *)&_Where._Ptr->_Myval.first);
  operator delete(_Where._Ptr);
  result->_Ptr = Next;
  return result;
}

OGLTexture *__fastcall BattleStageResourceContainer::findOGLTextureByName(
        BattleStageResourceContainer *this,
        const char *pCheckName)
{
  BattleStageResourcePack *m_pResourcPack; // rax
  extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> *pStageModels; // rdx
  extension::AsyncContent<extension::AsyncAsset> *m_ptr; // rbx
  extension::AsyncAsset *Myval2; // rcx
  int v7; // er12
  __int64 v8; // r15
  extension::AsyncContent<extension::AsyncAsset> *v9; // rbx
  extension::AsyncAsset *v10; // rcx
  OGLModel *v11; // rsi
  __int64 m_ucMaterialCount; // r14
  __int64 v13; // rbx
  __int64 v14; // rdi
  OGLMaterial *m_pMaterial; // rbp
  const char *m_cName; // rcx
  __int64 v18; // [rsp+58h] [rbp+10h]

  if ( !this->m_bActived )
    return 0i64;
  m_pResourcPack = this->m_pResourcPack;
  pStageModels = m_pResourcPack->pStageModels;
  m_ptr = m_pResourcPack->pStageModels->m_body.m_ptr->m_content.m_ptr;
  if ( !m_ptr || m_ptr->m_isDataReleased )
  {
    Myval2 = 0i64;
  }
  else
  {
    if ( (m_ptr->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
      extension::AsyncStatus::waitFor(&m_ptr->m_status, (extension::AsyncStatus::Step)pStageModels);
    Myval2 = m_ptr->m_data._Mypair._Myval2;
  }
  v7 = 0;
  v8 = 0i64;
  v18 = (int)(Myval2->m_models._Mypair._Myval2._Mylast - Myval2->m_models._Mypair._Myval2._Myfirst);
  if ( v18 <= 0 )
    return 0i64;
  while ( 1 )
  {
    v9 = this->m_pResourcPack->pStageModels->m_body.m_ptr->m_content.m_ptr;
    if ( !v9 || v9->m_isDataReleased )
    {
      v10 = 0i64;
    }
    else
    {
      if ( (v9->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
        extension::AsyncStatus::waitFor(&v9->m_status, (extension::AsyncStatus::Step)pStageModels);
      v10 = v9->m_data._Mypair._Myval2;
    }
    v11 = v8 < 0 || v7 >= (int)(v10->m_models._Mypair._Myval2._Mylast - v10->m_models._Mypair._Myval2._Myfirst) ? 0i64 : v10->m_models._Mypair._Myval2._Myfirst[v8]._Mypair._Myval2;
    if ( v11 )
    {
      m_ucMaterialCount = v11->m_ucMaterialCount;
      v13 = 0i64;
      if ( v11->m_ucMaterialCount )
        break;
    }
LABEL_25:
    ++v7;
    if ( ++v8 >= v18 )
      return 0i64;
  }
  v14 = 0i64;
  while ( 1 )
  {
    m_pMaterial = v11->m_pMaterial;
    m_cName = (const char *)m_pMaterial[v14].m_cName;
    if ( m_cName )
    {
      if ( strstr(m_cName, "_LVISION") )
        return v11->m_pTexture[m_pMaterial[v14].m_cTextureIndex][0];
    }
    ++v13;
    ++v14;
    if ( v13 >= m_ucMaterialCount )
      goto LABEL_25;
  }
}

bool __fastcall BattleStageResourceContainer::findScene(
        BattleStageResourceContainer *this,
        BSDataScene **pOutScene,
        int *pOutScenePriority,
        TknData::SceneTrigger1 trigger1,
        TknData::SceneTrigger2 trigger2,
        const TknDataEventConditions::CheckParams *pParams)
{
  bool result; // al
  int v8; // er11
  __int64 v9; // rbx
  BSDataSceneTrigger **v10; // rdi
  BSDataSceneTrigger *v11; // rdx
  __int64 v12; // rcx
  int *m_pSkipCallCharacterIDs; // rax
  __int64 v14; // rcx
  int *m_pSkipPairCharacterIDs; // rax
  float eventCallCaracterPositionX; // xmm1_4
  unsigned int m_triggerCondition; // eax

  *pOutScene = 0i64;
  *pOutScenePriority = 0;
  if ( !this->m_bActived )
    return 0;
  v8 = this->m_SceneTriggerCount - 1;
  if ( v8 >= 0 )
  {
    v9 = v8;
    v10 = &this->m_pSceneTriggers[v8];
    do
    {
      v11 = *v10;
      if ( (*v10)->m_triggerEvent == trigger1 )
      {
        if ( !pParams )
          goto LABEL_17;
        v12 = 0i64;
        if ( v11->m_skipCallCharacterIDCount > 0 )
        {
          m_pSkipCallCharacterIDs = v11->m_pSkipCallCharacterIDs;
          while ( *m_pSkipCallCharacterIDs != pParams->eventCallCharacterID )
          {
            ++v12;
            ++m_pSkipCallCharacterIDs;
            if ( v12 >= v11->m_skipCallCharacterIDCount )
              goto LABEL_11;
          }
          goto LABEL_29;
        }
LABEL_11:
        v14 = 0i64;
        if ( v11->m_skipPairCharacterIDCount > 0 )
        {
          m_pSkipPairCharacterIDs = v11->m_pSkipPairCharacterIDs;
          while ( *m_pSkipPairCharacterIDs != pParams->pairCharacterID )
          {
            ++v14;
            ++m_pSkipPairCharacterIDs;
            if ( v14 >= v11->m_skipPairCharacterIDCount )
              goto LABEL_15;
          }
          goto LABEL_29;
        }
LABEL_15:
        eventCallCaracterPositionX = pParams->eventCallCaracterPositionX;
        if ( v11->m_permitAreaSX <= eventCallCaracterPositionX && eventCallCaracterPositionX <= v11->m_permitAreaEX )
        {
LABEL_17:
          if ( trigger1 == TRIGGER1_KO_TIME )
          {
            if ( v11->m_triggerCondition >= trigger2 )
              goto LABEL_19;
          }
          else if ( v11->m_triggerCondition == trigger2 )
          {
            goto LABEL_19;
          }
          m_triggerCondition = v11->m_triggerCondition;
          if ( m_triggerCondition <= 1
            || m_triggerCondition == 6
            || (unsigned int)trigger2 <= TRIGGER2_TEAMSELECT_NONE
            || trigger2 == TRIGGER2_ROUNDSELECT_NONE
            || m_triggerCondition == 5 && (unsigned int)(trigger2 - 3) <= 1 )
          {
LABEL_19:
            *pOutScene = v11->m_pScene;
            result = 1;
            *pOutScenePriority = v8;
            return result;
          }
        }
      }
LABEL_29:
      --v8;
      --v10;
      --v9;
    }
    while ( v9 >= 0 );
  }
  return 0;
}

extension::RefCountablePtr<extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body> *__fastcall extension::BasicFutureObject<StageResources,extension::FutureStageOption>::AssetCache::getCachedOrLoadStart(
        extension::BasicFutureObject<StageResources,extension::FutureStageOption>::AssetCache *this,
        extension::RefCountablePtr<extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body> *result,
        std::string *name,
        const extension::FutureStageOption *opt)
{
  volatile signed __int64 *v7; // rsi
  std::string *v8; // rax
  char *Ptr; // rcx
  char *v10; // rax
  unsigned __int64 v11; // rax
  bool v12; // r12
  std::string *v13; // rax
  std::string *v14; // rax
  char *v15; // rcx
  char *v16; // rax
  char *v17; // rcx
  char *v18; // rax
  unsigned __int64 Mysize; // rcx
  unsigned __int64 v20; // rbx
  unsigned __int64 Myres; // rdx
  std::string *p_Keyval; // rax
  std::string *v23; // rax
  std::string *v24; // rax
  extension::RCWeakPtr<extension::exsound_detail::SoundNameRegistry::NameBuffer> *v25; // rax
  extension::AsyncStatus::Step v26; // edx
  extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body *m_ptr; // rcx
  extension::AsyncContent<StageResources> *v28; // rax
  extension::AsyncContent<StageResources> *v29; // rbx
  std::string *v30; // rcx
  std::string *v31; // rax
  std::string *v32; // rax
  std::string *v33; // rcx
  std::string *v34; // rax
  std::string *v35; // rax
  extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body *v36; // rbx
  extension::RefCountablePtr<extension::AsyncContent<StageResources> > *v37; // rax
  extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body *v38; // rcx
  extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body *v39; // rax
  extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> *v40; // rax
  extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body *v41; // rcx
  std::_List_node<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body> >,void *> *Next; // rbx
  std::_List_const_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > > > > v43; // r8
  extension::RefCountableWeakSupportBase::WeakProxy *v44; // rax
  extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body *v46; // [rsp+28h] [rbp-D8h]
  extension::RefCountableWeakSupportBase::WeakProxy *block; // [rsp+30h] [rbp-D0h]
  extension::RefCountablePtr<extension::AsyncContent<StageResources> > v48; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v49; // [rsp+40h] [rbp-C0h]
  extension::RefCountablePtr<extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body> *v50; // [rsp+48h] [rbp-B8h]
  extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body *v51; // [rsp+50h] [rbp-B0h]
  std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > > > > v52; // [rsp+60h] [rbp-A0h] BYREF
  extension::ExSimpleLockable<extension::BasicFutureObject<StageResources,extension::FutureStageOption>::AssetCache> *v53; // [rsp+68h] [rbp-98h]
  int v54; // [rsp+70h] [rbp-90h]
  std::string *v55; // [rsp+78h] [rbp-88h]
  std::string _Keyval; // [rsp+80h] [rbp-80h] BYREF
  std::string v57; // [rsp+A0h] [rbp-60h] BYREF
  std::string _Right; // [rsp+C0h] [rbp-40h] BYREF
  std::string resulta; // [rsp+E0h] [rbp-20h] BYREF
  std::string v60; // [rsp+100h] [rbp+0h] BYREF
  std::string v61; // [rsp+120h] [rbp+20h] BYREF
  std::string v62; // [rsp+140h] [rbp+40h] BYREF
  std::string v63; // [rsp+160h] [rbp+60h] BYREF
  std::string v64; // [rsp+180h] [rbp+80h] BYREF

  v49 = -2i64;
  v50 = result;
  v55 = name;
  v7 = 0i64;
  v8 = extension::AsyncWorker::NormalizeAssetPath(&resulta, name);
  std::string::assign(name, v8);
  if ( resulta._Mypair._Myval2._Myres >= 0x10 )
  {
    Ptr = resulta._Mypair._Myval2._Bx._Ptr;
    if ( resulta._Mypair._Myval2._Myres + 1 >= 0x1000 )
    {
      if ( (resulta._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
        invalid_parameter_noinfo_noreturn();
      v10 = (char *)*((_QWORD *)resulta._Mypair._Myval2._Bx._Ptr - 1);
      if ( v10 >= resulta._Mypair._Myval2._Bx._Ptr )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(resulta._Mypair._Myval2._Bx._Ptr - v10) < (char *)8 )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(resulta._Mypair._Myval2._Bx._Ptr - v10) > (char *)0x27 )
        invalid_parameter_noinfo_noreturn();
      Ptr = (char *)*((_QWORD *)resulta._Mypair._Myval2._Bx._Ptr - 1);
    }
    operator delete(Ptr);
  }
  v11 = std::string::find(name, "obm", 0i64, 3ui64);
  v12 = v11 != -1i64;
  if ( v11 != -1i64 )
  {
    v13 = std::string::substr(name, &v60, 0i64, name->_Mypair._Myval2._Mysize - 3);
    v14 = std::operator+<char>(&v57, v13, "dds");
    std::string::assign(name, v14);
    if ( v57._Mypair._Myval2._Myres >= 0x10 )
    {
      v15 = v57._Mypair._Myval2._Bx._Ptr;
      if ( v57._Mypair._Myval2._Myres + 1 >= 0x1000 )
      {
        if ( (v57._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
          invalid_parameter_noinfo_noreturn();
        v16 = (char *)*((_QWORD *)v57._Mypair._Myval2._Bx._Ptr - 1);
        if ( v16 >= v57._Mypair._Myval2._Bx._Ptr )
          invalid_parameter_noinfo_noreturn();
        if ( (char *)(v57._Mypair._Myval2._Bx._Ptr - v16) < (char *)8 )
          invalid_parameter_noinfo_noreturn();
        if ( (char *)(v57._Mypair._Myval2._Bx._Ptr - v16) > (char *)0x27 )
          invalid_parameter_noinfo_noreturn();
        v15 = (char *)*((_QWORD *)v57._Mypair._Myval2._Bx._Ptr - 1);
      }
      operator delete(v15);
    }
    v57._Mypair._Myval2._Myres = 15i64;
    v57._Mypair._Myval2._Mysize = 0i64;
    v57._Mypair._Myval2._Bx._Buf[0] = 0;
    if ( v60._Mypair._Myval2._Myres >= 0x10 )
    {
      v17 = v60._Mypair._Myval2._Bx._Ptr;
      if ( v60._Mypair._Myval2._Myres + 1 >= 0x1000 )
      {
        if ( (v60._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
          invalid_parameter_noinfo_noreturn();
        v18 = (char *)*((_QWORD *)v60._Mypair._Myval2._Bx._Ptr - 1);
        if ( v18 >= v60._Mypair._Myval2._Bx._Ptr )
          invalid_parameter_noinfo_noreturn();
        if ( (char *)(v60._Mypair._Myval2._Bx._Ptr - v18) < (char *)8 )
          invalid_parameter_noinfo_noreturn();
        if ( (char *)(v60._Mypair._Myval2._Bx._Ptr - v18) > (char *)0x27 )
          invalid_parameter_noinfo_noreturn();
        v17 = (char *)*((_QWORD *)v60._Mypair._Myval2._Bx._Ptr - 1);
      }
      operator delete(v17);
    }
  }
  extension::AsyncWorker::ToLowerCasePath(&_Keyval, name);
  extension::FutureObjectJobManager<StageResources,extension::FutureStageOption>::Stringize(&_Right, opt);
  if ( _Right._Mypair._Myval2._Mysize )
  {
    Mysize = _Keyval._Mypair._Myval2._Mysize;
    if ( _Keyval._Mypair._Myval2._Mysize == -1i64 || ~_Keyval._Mypair._Myval2._Mysize == 1 )
      std::_Xlength_error("string too long");
    v20 = _Keyval._Mypair._Myval2._Mysize + 1;
    if ( _Keyval._Mypair._Myval2._Mysize == -2i64 )
      std::_Xlength_error("string too long");
    Myres = _Keyval._Mypair._Myval2._Myres;
    if ( _Keyval._Mypair._Myval2._Myres >= v20 )
    {
      if ( _Keyval._Mypair._Myval2._Mysize != -1i64 )
        goto LABEL_50;
      _Keyval._Mypair._Myval2._Mysize = 0i64;
      p_Keyval = &_Keyval;
      if ( _Keyval._Mypair._Myval2._Myres >= 0x10 )
        p_Keyval = (std::string *)_Keyval._Mypair._Myval2._Bx._Ptr;
      p_Keyval->_Mypair._Myval2._Bx._Buf[0] = 0;
    }
    else
    {
      std::string::_Copy(&_Keyval, _Keyval._Mypair._Myval2._Mysize + 1, _Keyval._Mypair._Myval2._Mysize);
    }
    Mysize = _Keyval._Mypair._Myval2._Mysize;
    Myres = _Keyval._Mypair._Myval2._Myres;
    if ( !v20 )
    {
LABEL_55:
      std::string::append(&_Keyval, &_Right, 0i64, 0xFFFFFFFFFFFFFFFFui64);
      goto LABEL_56;
    }
LABEL_50:
    v23 = &_Keyval;
    if ( Myres >= 0x10 )
      v23 = (std::string *)_Keyval._Mypair._Myval2._Bx._Ptr;
    v23->_Mypair._Myval2._Bx._Buf[Mysize] = 63;
    _Keyval._Mypair._Myval2._Mysize = v20;
    v24 = &_Keyval;
    if ( _Keyval._Mypair._Myval2._Myres >= 0x10 )
      v24 = (std::string *)_Keyval._Mypair._Myval2._Bx._Ptr;
    v24->_Mypair._Myval2._Bx._Buf[v20] = 0;
    goto LABEL_55;
  }
LABEL_56:
  v53 = &extension::BasicFutureObject<StageResources,extension::FutureStageOption>::s_cacheManager.extension::ExSimpleLockable<extension::BasicFutureObject<StageResources,extension::FutureStageOption>::AssetCache>;
  v54 = 1;
  EnterCriticalSection((LPCRITICAL_SECTION)&extension::BasicFutureObject<StageResources,extension::FutureStageOption>::s_cacheManager.extension::ExSimpleLockable<extension::BasicFutureObject<StageResources,extension::FutureStageOption>::AssetCache>);
  v25 = (extension::RCWeakPtr<extension::exsound_detail::SoundNameRegistry::NameBuffer> *)std::unordered_map<std::string,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>>::operator[](
                                                                                            (std::unordered_map<std::string,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body>> *)&extension::BasicFutureObject<StageResources,extension::FutureStageOption>::s_cacheManager.m_cachedObjectMap,
                                                                                            &_Keyval);
  extension::RCWeakPtr<extension::BasicFutureObject<extension::GFXIMovieData,void>::Body>::lock(
    v25,
    (extension::RefCountablePtr<extension::exsound_detail::SoundNameRegistry::NameBuffer> *)result);
  m_ptr = result->m_ptr;
  if ( !result->m_ptr )
    goto LABEL_69;
  v28 = m_ptr->m_content.m_ptr;
  if ( !v28 || v28->m_isDataReleased )
    goto LABEL_66;
  if ( (v28->m_status.m_stateFlags.m_value._My_val & 1) != 0 )
  {
    v29 = result->m_ptr->m_content.m_ptr;
    if ( v29 )
    {
      if ( !v29->m_isDataReleased )
      {
        if ( (v29->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
          extension::AsyncStatus::waitFor(&v29->m_status, v26);
        if ( v29->m_errorCode )
        {
          m_ptr = result->m_ptr;
LABEL_66:
          result->m_ptr = 0i64;
          if ( m_ptr
            && _InterlockedExchangeAdd64(
                 (volatile signed __int64 *)&m_ptr->m_refCount.m_ptr->m_sharedCount,
                 0xFFFFFFFFFFFFFFFFui64) == 1 )
          {
            ((void (__fastcall *)(extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body *, __int64))m_ptr->~RefCountableWeakSupportBase)(
              m_ptr,
              1i64);
          }
        }
      }
    }
  }
LABEL_69:
  if ( !result->m_ptr )
  {
    if ( v12 )
    {
      v30 = name->_Mypair._Myval2._Myres < 0x10 ? name : (std::string *)name->_Mypair._Myval2._Bx._Ptr;
      if ( !(unsigned __int8)CFile::exists(v30->_Mypair._Myval2._Bx._Buf) )
      {
        v31 = std::string::substr(name, &v62, 0i64, name->_Mypair._Myval2._Mysize - 3);
        v32 = std::operator+<char>(&v61, v31, "dds");
        std::string::assign(name, v32);
        std::string::~string(&v61);
        std::string::~string(&v62);
        v33 = name->_Mypair._Myval2._Myres < 0x10 ? name : (std::string *)name->_Mypair._Myval2._Bx._Ptr;
        if ( !(unsigned __int8)CFile::exists(v33->_Mypair._Myval2._Bx._Buf) )
        {
          v34 = std::string::substr(name, &v64, 0i64, name->_Mypair._Myval2._Mysize - 3);
          v35 = std::operator+<char>(&v63, v34, "png");
          std::string::assign(name, v35);
          std::string::~string(&v63);
          std::string::~string(&v64);
        }
      }
    }
    v36 = (extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body *)operator new(0x18ui64);
    v51 = v36;
    v37 = extension::FutureObjectJobManager<StageResources,extension::FutureStageOption>::LoadStart(
            &v48,
            name,
            &_Right,
            opt);
    extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body::Body(
      v36,
      (extension::RefCountablePtr<extension::AsyncContent<StageResources> >)v37);
    v38 = result->m_ptr;
    result->m_ptr = v39;
    if ( v38
      && _InterlockedExchangeAdd64(
           (volatile signed __int64 *)&v38->m_refCount.m_ptr->m_sharedCount,
           0xFFFFFFFFFFFFFFFFui64) == 1 )
    {
      ((void (__fastcall *)(extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body *, __int64))v38->~RefCountableWeakSupportBase)(
        v38,
        1i64);
    }
    v40 = std::unordered_map<std::string,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>>::operator[](
            (std::unordered_map<std::string,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body>> *)&extension::BasicFutureObject<StageResources,extension::FutureStageOption>::s_cacheManager.m_cachedObjectMap,
            &_Keyval);
    v41 = result->m_ptr;
    v46 = result->m_ptr;
    if ( result->m_ptr )
    {
      v7 = (volatile signed __int64 *)v41->m_refCount.m_ptr;
      if ( v7 )
      {
        _InterlockedExchangeAdd64(v7, 1ui64);
        v41 = v46;
      }
    }
    v40->m_ptr = (extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body *)v41;
    block = v40->m_proxy.m_ptr;
    v40->m_proxy.m_ptr = (extension::RefCountableWeakSupportBase::WeakProxy *)v7;
    if ( block && _InterlockedExchangeAdd64((volatile signed __int64 *)block, 0xFFFFFFFFFFFFFFFFui64) == 1 )
      operator delete(block, 0x18ui64);
  }
  Next = extension::BasicFutureObject<StageResources,extension::FutureStageOption>::s_cacheManager.m_cachedObjectMap._List._Mypair._Myval2._Myhead->_Next;
  while ( Next != extension::BasicFutureObject<StageResources,extension::FutureStageOption>::s_cacheManager.m_cachedObjectMap._List._Mypair._Myval2._Myhead )
  {
    v43._Ptr = (std::_List_node<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >,void *> *)Next;
    v44 = Next->_Myval.second.m_proxy.m_ptr;
    Next = Next->_Next;
    if ( !v44 || !v44->m_sharedCount.m_value._My_val )
      std::_Hash<std::_Umap_traits<std::string,extension::RCWeakPtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body>,std::_Uhash_compare<std::string,std::hash<std::string>,std::equal_to<std::string>>,std::allocator<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body>>>,0>>::erase(
        (std::_Hash<std::_Umap_traits<std::string,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body>,std::_Uhash_compare<std::string,std::hash<std::string >,std::equal_to<std::string > >,std::allocator<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > >,0> > *)&extension::BasicFutureObject<StageResources,extension::FutureStageOption>::s_cacheManager.m_cachedObjectMap,
        &v52,
        v43);
  }
  extension::lockable_detail::LockUnlock(
    &extension::BasicFutureObject<StageResources,extension::FutureStageOption>::s_cacheManager.extension::ExSimpleLockable<extension::BasicFutureObject<StageResources,extension::FutureStageOption>::AssetCache>,
    -1);
  std::string::~string(&_Right);
  std::string::~string(&_Keyval);
  std::string::~string(name);
  return result;
}

EffectDataListManager **__fastcall BattleStageResourceContainer::getEffectManager(
        BattleStageResourceContainer *this,
        extension::AsyncStatus::Step a2)
{
  BattleStageResourcePack *m_pResourcPack; // rax
  extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body *m_ptr; // rbx
  extension::AsyncContent<StageResources> *v4; // rax
  extension::AsyncContent<StageResources> *v5; // rbx

  m_pResourcPack = this->m_pResourcPack;
  if ( !m_pResourcPack )
    return 0i64;
  m_ptr = m_pResourcPack->datas.m_body.m_ptr;
  v4 = m_ptr->m_content.m_ptr;
  if ( !v4 || v4->m_isDataReleased )
    return 0i64;
  v5 = m_ptr->m_content.m_ptr;
  if ( v4->m_isDataReleased )
    return (EffectDataListManager **)MEMORY[0x1A0];
  if ( (v4->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
    extension::AsyncStatus::waitFor(&v4->m_status, a2);
  return v5->m_data._Mypair._Myval2->pEffectManagers;
}

__int64 __fastcall BattleStageResourceContainer::getEffectManagerCount(
        BattleStageResourceContainer *this,
        extension::AsyncStatus::Step a2)
{
  BattleStageResourcePack *m_pResourcPack; // rax
  extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body *m_ptr; // rbx
  extension::AsyncContent<StageResources> *v4; // rax
  extension::AsyncContent<StageResources> *v5; // rbx

  m_pResourcPack = this->m_pResourcPack;
  if ( !m_pResourcPack )
    return 0i64;
  m_ptr = m_pResourcPack->datas.m_body.m_ptr;
  v4 = m_ptr->m_content.m_ptr;
  if ( !v4 || v4->m_isDataReleased )
    return 0i64;
  v5 = m_ptr->m_content.m_ptr;
  if ( v4->m_isDataReleased )
    return MEMORY[0x1A8];
  if ( (v4->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
    extension::AsyncStatus::waitFor(&v4->m_status, a2);
  return (unsigned int)v5->m_data._Mypair._Myval2->effectManagerCount;
}

__int64 __fastcall BattleStageResourceContainer::getNeutralSceneUID(BattleStageResourceContainer *this)
{
  int v1; // eax
  __int64 v2; // rdx
  BSDataSceneTrigger **i; // rcx

  if ( !this->m_bActived )
    return 0i64;
  v1 = this->m_SceneTriggerCount - 1;
  if ( v1 < 0 )
    return 0i64;
  v2 = v1;
  for ( i = &this->m_pSceneTriggers[v1]; (*i)->m_triggerEvent; --i )
  {
    if ( --v2 < 0 )
      return 0i64;
  }
  return (unsigned int)(*i)->m_pScene->m_uniqueID;
}

OGLModel *__fastcall BattleStageResourceContainer::getStageModel(BattleStageResourceContainer *this, int modelIndex)
{
  BattleStageResourcePack *m_pResourcPack; // rax
  __int64 v3; // rsi
  extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> *pStageModels; // rax
  __int64 v5; // rdi
  extension::AsyncContent<extension::AsyncAsset> *m_ptr; // rbx
  extension::AsyncAsset *Myval2; // rdx

  m_pResourcPack = this->m_pResourcPack;
  v3 = modelIndex;
  if ( !m_pResourcPack )
    return 0i64;
  pStageModels = m_pResourcPack->pStageModels;
  if ( !pStageModels )
    return 0i64;
  v5 = 0i64;
  m_ptr = pStageModels->m_body.m_ptr->m_content.m_ptr;
  if ( !m_ptr || m_ptr->m_isDataReleased )
  {
    Myval2 = 0i64;
  }
  else
  {
    if ( (m_ptr->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
      extension::AsyncStatus::waitFor(&m_ptr->m_status, (extension::AsyncStatus::Step)modelIndex);
    Myval2 = m_ptr->m_data._Mypair._Myval2;
  }
  if ( (int)v3 >= 0
    && (int)v3 < (int)(Myval2->m_models._Mypair._Myval2._Mylast - Myval2->m_models._Mypair._Myval2._Myfirst) )
  {
    return Myval2->m_models._Mypair._Myval2._Myfirst[v3]._Mypair._Myval2;
  }
  return (OGLModel *)v5;
}

char __fastcall BattleStageResourceContainer::isCheckResource(
        BattleStageResourceContainer *this,
        extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> *pStageModels)
{
  extension::AsyncContent<extension::AsyncAsset> *m_ptr; // rbx
  extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> *v5; // rcx
  extension::exsound_detail::SoundBankImpl *v6; // rbx
  extension::AsyncStatus::Step v7; // edx
  extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body *v8; // rcx
  extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body *v10; // rcx

  if ( !this->m_pResourcPack )
    goto LABEL_13;
  m_ptr = pStageModels->m_body.m_ptr->m_content.m_ptr;
  if ( !m_ptr || m_ptr->m_isDataReleased )
    goto LABEL_13;
  if ( (m_ptr->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
    extension::AsyncStatus::waitFor(&m_ptr->m_status, (extension::AsyncStatus::Step)pStageModels);
  if ( !m_ptr->m_data._Mypair._Myval2
    || (v5 = this->m_pResourcPack->pStageModels) != 0i64
    && (v6 = extension::BasicFutureObject<extension::GFXIMovieData,void>::operator->(
               (extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> *)v5,
               (extension::AsyncStatus::Step)pStageModels),
        extension::BasicFutureObject<extension::GFXIMovieData,void>::operator->(
          (extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> *)pStageModels,
          v7) == v6) )
  {
LABEL_13:
    v10 = pStageModels->m_body.m_ptr;
    if ( v10
      && _InterlockedExchangeAdd64(
           (volatile signed __int64 *)&v10->m_refCount.m_ptr->m_sharedCount,
           0xFFFFFFFFFFFFFFFFui64) == 1 )
    {
      ((void (__fastcall *)(extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body *, __int64))v10->~RefCountableWeakSupportBase)(
        v10,
        1i64);
    }
    return 0;
  }
  else
  {
    v8 = pStageModels->m_body.m_ptr;
    if ( v8 )
    {
      if ( _InterlockedExchangeAdd64(
             (volatile signed __int64 *)&v8->m_refCount.m_ptr->m_sharedCount,
             0xFFFFFFFFFFFFFFFFui64) == 1 )
        ((void (__fastcall *)(extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body *, __int64))v8->~RefCountableWeakSupportBase)(
          v8,
          1i64);
    }
    return 1;
  }
}

char __fastcall BattleStageResourceContainer::loadResources(
        BattleStageResourceContainer *this,
        const StageProjectData *stageProj,
        STAGE_ID stageID)
{
  int v6; // eax
  int m_stageCount; // edx
  StageProjectData::StageData *m_pDatas; // r8
  StageProjectData::StageData *i; // rcx
  StageProjectData::StageData *v10; // rcx
  int v11; // eax
  StageProjectData::StageData *j; // rcx
  StageProjectData::StageData *v13; // rcx
  char *m_pProjectFileDir; // r9
  const char *pStageID; // rax
  int v16; // eax
  int v17; // edx
  StageProjectData::StageData *k; // rcx
  StageProjectData::StageData *v19; // rcx
  char *v20; // r9
  unsigned __int64 v21; // r8
  BattleStageResourcePack *v22; // rbx
  unsigned __int64 v23; // r8
  extension::BasicFutureObject<StageResources,extension::FutureStageOption>::AssetCache *v24; // rcx
  extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body *m_ptr; // rcx
  extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> other; // [rsp+38h] [rbp-D0h] BYREF
  extension::BasicFutureObject<StageResources,extension::FutureStageOption> *p_datas; // [rsp+48h] [rbp-C0h]
  std::string v29; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v30; // [rsp+70h] [rbp-98h]
  std::string _Right; // [rsp+78h] [rbp-90h] BYREF
  std::string v32; // [rsp+98h] [rbp-70h] BYREF
  char _Ptr[128]; // [rsp+B8h] [rbp-50h] BYREF
  char _Buffer[8]; // [rsp+138h] [rbp+30h] BYREF

  v30 = -2i64;
  BattleStageResourceContainer::dispose(this, (unsigned __int64)stageProj);
  this->m_stageID = stageID;
  if ( stageProj->m_readStatus == STAGEPROJ_ERR_SUCCESS )
  {
    v6 = 0;
    m_stageCount = stageProj->m_stageCount;
    if ( m_stageCount > 0 )
    {
      m_pDatas = stageProj->m_pDatas;
      for ( i = m_pDatas; i->stageNo != stageID; ++i )
      {
        if ( ++v6 >= m_stageCount )
          return 1;
      }
      v10 = &m_pDatas[(__int64)v6];
      if ( v10 && v10->isEnableGimmickData )
      {
        v11 = 0;
        for ( j = stageProj->m_pDatas; j->stageNo != stageID; ++j )
        {
          if ( ++v11 >= m_stageCount )
            return 0;
        }
        v13 = &m_pDatas[(__int64)v11];
        if ( !v13 )
          return 0;
        if ( !v13->isEnableGimmickData )
          return 0;
        m_pProjectFileDir = stageProj->m_pProjectFileDir;
        if ( !m_pProjectFileDir )
          return 0;
        pStageID = v13->pStageID;
        if ( !pStageID )
          return 0;
        if ( !v13->pGimmickFileName )
          return 0;
        sprintf_s(_Buffer, 0x80ui64, "%s%s/Gimmicks/%s.tkn", m_pProjectFileDir, pStageID, v13->pGimmickFileName);
        if ( stageProj->m_readStatus != STAGEPROJ_ERR_SUCCESS )
          return 0;
        v16 = 0;
        v17 = stageProj->m_stageCount;
        if ( v17 <= 0 )
          return 0;
        for ( k = stageProj->m_pDatas; k->stageNo != this->m_stageID; ++k )
        {
          if ( ++v16 >= v17 )
            return 0;
        }
        v19 = &stageProj->m_pDatas[(__int64)v16];
        if ( !v19 )
          return 0;
        v20 = stageProj->m_pProjectFileDir;
        if ( !v20 || !v19->pStageID )
          return 0;
        sprintf_s(_Ptr, 0x80ui64, "%s%s/Gimmicks/", v20, v19->pStageID);
        v32._Mypair._Myval2._Myres = 15i64;
        v32._Mypair._Myval2._Mysize = 0i64;
        v32._Mypair._Myval2._Bx._Buf[0] = 0;
        if ( _Ptr[0] )
        {
          v21 = -1i64;
          do
            ++v21;
          while ( _Ptr[v21] );
        }
        else
        {
          v21 = 0i64;
        }
        std::string::assign(&v32, _Ptr, v21);
        v22 = (BattleStageResourcePack *)operator new(0x18ui64);
        *(_QWORD *)&other.gap0 = v22;
        v22->pStageModels = 0i64;
        p_datas = &v22->datas;
        v22->datas.m_isNoCache = 0;
        extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body::GetSharedEmpty(&v22->datas.m_body);
        this->m_pResourcPack = v22;
        _Right._Mypair._Myval2._Myres = 15i64;
        _Right._Mypair._Myval2._Mysize = 0i64;
        _Right._Mypair._Myval2._Bx._Buf[0] = 0;
        if ( _Buffer[0] )
        {
          v23 = -1i64;
          do
            ++v23;
          while ( _Buffer[v23] );
        }
        else
        {
          v23 = 0i64;
        }
        std::string::assign(&_Right, _Buffer, v23);
        other.m_isNoCache = 0;
        v29._Mypair._Myval2._Myres = 15i64;
        v29._Mypair._Myval2._Mysize = 0i64;
        v29._Mypair._Myval2._Bx._Buf[0] = 0;
        std::string::assign(&v29, &_Right, 0i64, 0xFFFFFFFFFFFFFFFFui64);
        extension::BasicFutureObject<StageResources,extension::FutureStageOption>::AssetCache::getCachedOrLoadStart(
          v24,
          (extension::RefCountablePtr<extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body> *)&other.m_body,
          &v29,
          (const extension::FutureStageOption *)&v32);
        extension::BasicFutureObject<OGLSecondary,void>::operator=(
          (extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> *)&this->m_pResourcPack->datas,
          &other);
        m_ptr = other.m_body.m_ptr;
        if ( other.m_body.m_ptr )
        {
          if ( _InterlockedExchangeAdd64(
                 (volatile signed __int64 *)&other.m_body.m_ptr->m_refCount.m_ptr->m_sharedCount,
                 0xFFFFFFFFFFFFFFFFui64) == 1 )
            ((void (__fastcall *)(extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body *, __int64))m_ptr->~RefCountableWeakSupportBase)(
              m_ptr,
              1i64);
        }
        std::string::~string(&_Right);
        this->m_pResourcPack->pStageModels = 0i64;
        std::string::~string(&v32);
      }
    }
  }
  return 1;
}

extension::RefCountablePtr<extension::exsound_detail::SoundNameRegistry::NameBuffer> *__fastcall extension::RCWeakPtr<extension::BasicFutureObject<extension::GFXIMovieData,void>::Body>::lock(
        extension::RCWeakPtr<extension::exsound_detail::SoundNameRegistry::NameBuffer> *this,
        extension::RefCountablePtr<extension::exsound_detail::SoundNameRegistry::NameBuffer> *result)
{
  extension::exsound_detail::SoundNameRegistry::NameBuffer *m_principal; // rdx
  extension::RefCountableWeakSupportBase::WeakProxy *m_ptr; // r8
  signed __int64 My_val; // rax
  unsigned __int64 v6; // rtt
  extension::exsound_detail::SoundNameRegistry::NameBuffer *v7; // rcx

  m_principal = 0i64;
  result->m_ptr = 0i64;
  m_ptr = this->m_proxy.m_ptr;
  if ( m_ptr )
  {
    while ( 1 )
    {
      My_val = m_ptr->m_sharedCount.m_value._My_val;
      if ( !My_val )
        break;
      v6 = m_ptr->m_sharedCount.m_value._My_val;
      if ( v6 == _InterlockedCompareExchange64((volatile signed __int64 *)&m_ptr->m_sharedCount, My_val + 1, My_val) )
      {
        m_principal = (extension::exsound_detail::SoundNameRegistry::NameBuffer *)m_ptr->m_principal;
        break;
      }
    }
    v7 = result->m_ptr;
    result->m_ptr = m_principal;
    if ( v7
      && _InterlockedExchangeAdd64(
           (volatile signed __int64 *)&v7->m_refCount.m_ptr->m_sharedCount,
           0xFFFFFFFFFFFFFFFFui64) == 1 )
    {
      ((void (__fastcall *)(extension::exsound_detail::SoundNameRegistry::NameBuffer *, __int64))v7->~RefCountableWeakSupportBase)(
        v7,
        1i64);
    }
  }
  return result;
}

std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > > > > *__fastcall std::_Hash<std::_Umap_traits<std::string,extension::RCWeakPtr<extension::BasicFutureObject<OGLMirror,void>::Body>,std::_Uhash_compare<std::string,std::hash<std::string>,std::equal_to<std::string>>,std::allocator<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLMirror,void>::Body>>>,0>>::lower_bound(
        std::_Hash<std::_Umap_traits<std::string,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body>,std::_Uhash_compare<std::string,std::hash<std::string >,std::equal_to<std::string > >,std::allocator<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > >,0> > *this,
        std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > > > > *result,
        const std::string *_Keyval)
{
  unsigned __int64 Myres; // r15
  const std::string *v4; // r14
  unsigned __int64 Mysize; // rdi
  unsigned __int64 v8; // rcx
  __int64 i; // rdx
  __int64 v10; // rax
  std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > > > > *Myfirst; // rcx
  unsigned __int64 Mask; // rax
  std::_List_node<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >,void *> *Myhead; // rbp
  unsigned __int64 v14; // rbx
  __int64 v15; // rax
  std::_List_node<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >,void *> *Ptr; // r13
  std::_List_node<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >,void *> *v17; // rbx
  std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > > > > *v18; // rax
  std::_List_node<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >,void *> *Next; // rax
  char **p_Myval; // rcx
  const std::string *v21; // rdx
  unsigned __int64 v22; // rsi
  size_t v23; // r8
  char **v24; // rdx
  size_t v25; // rsi
  size_t v26; // r8
  std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > > > > *j; // [rsp+50h] [rbp+8h]

  Myres = _Keyval->_Mypair._Myval2._Myres;
  v4 = _Keyval;
  Mysize = _Keyval->_Mypair._Myval2._Mysize;
  if ( Myres >= 0x10 )
    _Keyval = (const std::string *)_Keyval->_Mypair._Myval2._Bx._Ptr;
  v8 = 0i64;
  for ( i = 0xCBF29CE484222325ui64; v8 < Mysize; i = 0x100000001B3i64 * (v10 ^ i) )
    v10 = (unsigned __int8)_Keyval->_Mypair._Myval2._Bx._Buf[v8++];
  Myfirst = this->_Vec._Mypair._Myval2._Myfirst;
  Mask = this->_Mask;
  Myhead = this->_List._Mypair._Myval2._Myhead;
  v14 = i & Mask;
  v15 = 2 * (i & Mask);
  Ptr = Myfirst[v15]._Ptr;
  v17 = Myfirst[2 * v14]._Ptr;
  v18 = &Myfirst[v15 + 1];
  for ( j = v18; ; v18 = j )
  {
    if ( Ptr == Myhead )
      Next = Myhead;
    else
      Next = v18->_Ptr->_Next;
    if ( v17 == Next )
    {
      result->_Ptr = Myhead;
      return result;
    }
    p_Myval = (char **)&v17->_Myval;
    if ( Myres < 0x10 )
      v21 = v4;
    else
      v21 = (const std::string *)v4->_Mypair._Myval2._Bx._Ptr;
    if ( v17->_Myval.first._Mypair._Myval2._Myres >= 0x10 )
      p_Myval = (char **)*p_Myval;
    v22 = v17->_Myval.first._Mypair._Myval2._Mysize;
    v23 = Mysize;
    if ( v22 < Mysize )
      v23 = v17->_Myval.first._Mypair._Myval2._Mysize;
    if ( (!v23 || !memcmp(p_Myval, v21, v23)) && v22 >= Mysize && v22 <= Mysize )
      break;
    v17 = v17->_Next;
  }
  v24 = (char **)&v17->_Myval;
  if ( v17->_Myval.first._Mypair._Myval2._Myres >= 0x10 )
    v24 = (char **)*v24;
  if ( Myres >= 0x10 )
    v4 = (const std::string *)v4->_Mypair._Myval2._Bx._Ptr;
  v25 = v17->_Myval.first._Mypair._Myval2._Mysize;
  v26 = v25;
  if ( Mysize < v25 )
    v26 = Mysize;
  if ( v26 && memcmp(v4, v24, v26) || Mysize < v25 || Mysize > v25 )
    v17 = Myhead;
  result->_Ptr = v17;
  return result;
}

void __fastcall extension::BasicFutureObject<StageResources,extension::FutureStageOption>::reset(
        extension::BasicFutureObject<StageResources,extension::FutureStageOption> *this)
{
  extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body *m_ptr; // rax
  extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body *v3; // rcx
  extension::RefCountablePtr<extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body> result; // [rsp+28h] [rbp-10h] BYREF

  extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body::GetSharedEmpty(&result);
  this->m_isNoCache = 0;
  m_ptr = result.m_ptr;
  if ( result.m_ptr )
  {
    _InterlockedExchangeAdd64((volatile signed __int64 *)&result.m_ptr->m_refCount.m_ptr->m_sharedCount, 1ui64);
    m_ptr = result.m_ptr;
  }
  v3 = this->m_body.m_ptr;
  this->m_body.m_ptr = m_ptr;
  if ( v3 )
  {
    if ( _InterlockedExchangeAdd64(
           (volatile signed __int64 *)&v3->m_refCount.m_ptr->m_sharedCount,
           0xFFFFFFFFFFFFFFFFui64) == 1 )
      ((void (__fastcall *)(extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body *, __int64))v3->~RefCountableWeakSupportBase)(
        v3,
        1i64);
    m_ptr = result.m_ptr;
  }
  if ( m_ptr )
  {
    if ( _InterlockedExchangeAdd64(
           (volatile signed __int64 *)&m_ptr->m_refCount.m_ptr->m_sharedCount,
           0xFFFFFFFFFFFFFFFFui64) == 1 )
      ((void (__fastcall *)(extension::BasicFutureObject<StageResources,extension::FutureStageOption>::Body *, __int64))result.m_ptr->~RefCountableWeakSupportBase)(
        result.m_ptr,
        1i64);
  }
}

__int64 __fastcall extension::future_asset_detail::FutureStageJob::run(
        extension::future_asset_detail::FutureStageJob *this)
{
  extension::AsyncContent<StageResources> *m_ptr; // rax
  __int64 v3; // rax
  std::unique_ptr<StageResources> *v4; // rax
  StageResources *v5; // rsi
  __int64 v6; // rcx
  StageResources *v7; // rbx
  extension::FutureStageOption *p_options; // r8
  const std::string *p_m_name; // rdx
  unsigned __int64 v10; // rdx
  std::unique_ptr<StageResources> *v11; // rax
  extension::AsyncContent<StageResources> *v12; // rcx
  StageResources *v14; // [rsp+60h] [rbp+8h] BYREF
  char v15; // [rsp+68h] [rbp+10h] BYREF
  std::unique_ptr<StageResources> result; // [rsp+70h] [rbp+18h] BYREF
  __int64 v17; // [rsp+78h] [rbp+20h]

  m_ptr = this->m_content.m_ptr;
  if ( m_ptr && (m_ptr->m_status.m_stateFlags.m_value._My_val & 2) != 0
    || (v3 = *(_QWORD *)(*(_QWORD *)NtCurrentTeb()->Reserved1[11] + 16i64)) != 0
    && (*(_QWORD *)(v3 + 8) & 0x100i64) != 0 )
  {
    if ( this->m_content.m_ptr )
    {
      v4 = this->createOnErrorData(this, &v14);
      extension::AsyncContent<StageResources>::setErrorResultWithData(
        this->m_content.m_ptr,
        4,
        (std::unique_ptr<StageResources>)v4);
    }
  }
  else
  {
    v5 = (StageResources *)operator new(0x1B0ui64);
    v14 = v5;
    TknFileDataDesc::TknFileDataDesc(&v5->tkn);
    *(_QWORD *)(v6 + 368) = 0i64;
    *(_DWORD *)(v6 + 376) = 0;
    *(_QWORD *)(v6 + 384) = 0i64;
    *(_DWORD *)(v6 + 392) = 0;
    *(_QWORD *)(v6 + 400) = 0i64;
    *(_DWORD *)(v6 + 408) = 0;
    *(_QWORD *)(v6 + 416) = 0i64;
    *(_DWORD *)(v6 + 424) = 0;
    v7 = (StageResources *)v6;
    v17 = v6;
    p_options = &this->options;
    if ( this->options.basePath._Mypair._Myval2._Myres >= 0x10 )
      p_options = (extension::FutureStageOption *)p_options->basePath._Mypair._Myval2._Bx._Ptr;
    p_m_name = &this->m_content.m_ptr->m_name;
    if ( this->m_content.m_ptr->m_name._Mypair._Myval2._Myres >= 0x10 )
      p_m_name = (const std::string *)p_m_name->_Mypair._Myval2._Bx._Ptr;
    if ( StageResources::createTknFile(
           v5,
           p_m_name->_Mypair._Myval2._Bx._Buf,
           p_options->basePath._Mypair._Myval2._Bx._Buf) )
    {
      v12 = this->m_content.m_ptr;
      if ( v12 )
      {
        v7 = 0i64;
        result._Mypair._Myval2 = v5;
        extension::AsyncContent<StageResources>::setResult(v12, (std::unique_ptr<StageResources>)&result);
      }
    }
    else if ( this->m_content.m_ptr )
    {
      v11 = this->createOnErrorData(this, &v15);
      extension::AsyncContent<StageResources>::setErrorResultWithData(
        this->m_content.m_ptr,
        1,
        (std::unique_ptr<StageResources>)v11);
    }
    if ( v7 )
    {
      StageResources::dispose(v7, v10);
      operator delete(v7, 0x1B0ui64);
    }
  }
  return 0i64;
}

void __fastcall BattleStageResourceContainer::setAuroraVisionMessage(
        BattleStageResourceContainer *this,
        const char *pMessage,
        float a3)
{
  STAGE_ID m_stageID; // eax
  int v6; // ecx
  OGLTexture *OGLTextureByName; // rsi
  float v8; // xmm0_4
  Font *Font; // rax
  int m_Height; // er12
  Font *v11; // rbx
  int m_Width; // er15
  unsigned __int64 v13; // rdi
  void *pixels; // rbp
  int v15; // edx
  FontTexture::SurfaceCreateParams *v16; // r9
  int v17; // edi
  unsigned __int64 v18; // rdx
  bool v19; // r8
  bool v20; // r8
  Framework::GLManager *v21; // rdi
  GLsizei v22; // ebx
  GLsizei v23; // er14
  bool v24; // r8
  signed int format; // [rsp+30h] [rbp-88h]
  Font *pFonts; // [rsp+50h] [rbp-68h] BYREF
  FontTexture::RenderSurface surface; // [rsp+58h] [rbp-60h] BYREF

  if ( this->m_bActived )
  {
    if ( pMessage )
    {
      m_stageID = this->m_stageID;
      if ( this->m_stageID == STAGE_ID_ESK
        || m_stageID == STAGE_ID_TRA
        || m_stageID == STAGE_ID_MEX
        || m_stageID == STAGE_ID_SAM
        || m_stageID == STAGE_ID_MBS )
      {
        OGLTextureByName = BattleStageResourceContainer::findOGLTextureByName(this, pMessage);
        if ( OGLTextureByName )
        {
          if ( this->m_stageID )
            v8 = FLOAT_20_0;
          else
            v8 = FLOAT_40_0;
          Font = Font::createFont(v6, (int)v8, a3);
          m_Height = OGLTextureByName->m_Height;
          v11 = Font;
          m_Width = OGLTextureByName->m_Width;
          pFonts = Font;
          v13 = 4 * m_Width * m_Height;
          pixels = aligned_malloc(v13, 0x20ui64);
          memset(pixels, 0, v13);
          v17 = -5;
          if ( this->m_stageID )
            v17 = -2;
          surface.pBuffer = 0i64;
          *(_QWORD *)&surface.width = 0i64;
          *(_QWORD *)&surface.pixeSizeByte = 0i64;
          surface.skipSymbolCount = 0;
          FontTexture::CreateRenderSurface(&pFonts, v15, pMessage, v16, &surface);
          if ( surface.pBuffer )
          {
            FontTexture::RenderAuroraVision(&surface, pixels, m_Width, m_Height, v17, this->m_stageID, (STAGE_ID)format);
            if ( surface.pBuffer )
              free(surface.pBuffer);
          }
          OGLTexture::finalize(OGLTextureByName, v18, v19);
          if ( pixels && m_Width && m_Height )
          {
            if ( !OGLTextureByName->m_bSubTexture )
            {
              OGLTextureByName->m_Width = m_Width;
              OGLTextureByName->m_Height = m_Height;
              OGLTextureByName->m_TexFormat = 1;
            }
            v21 = Framework::GLManager::glm;
            Framework::GLManager::LoadingLock(Framework::GLManager::glm, 0, v20);
            glEnable(0xDE1u);
            if ( !OGLTextureByName->m_bSubTexture )
              glGenTexturesAG(1, &OGLTextureByName->m_TexID);
            glPixelStorei(0xCF5u, 1);
            OGLTexture::setParameter(OGLTextureByName, 2570, 0);
            if ( OGLTextureByName->m_bSubTexture )
            {
              glTexSubImage2D(0xDE1u, 0, 0, 0, m_Width, m_Height, 0x1908u, 0x1401u, pixels);
            }
            else
            {
              v22 = OGLTextureByName->m_Height;
              v23 = OGLTextureByName->m_Width;
              glTexParameteri(0xDE1u, 0x813Cu, 0);
              glTexParameteri(0xDE1u, 0x813Du, 0);
              while ( Framework::GLManager::glm->m_bOpenGLBlocked )
                ;
              glTexImage2D(0xDE1u, 0, 6408, v23, v22, 0, 0x1908u, 0x1401u, pixels);
              v11 = pFonts;
            }
            OGLTextureByName->m_sync = _glewFenceSync(0x9117u, 0);
            Framework::GLManager::LoadingUnlock(v21, 0, v24);
            OGLTextureByName->m_bSubTexture = 0;
          }
          aligned_free(pixels);
          if ( v11 )
            ((void (__fastcall *)(Font *, __int64))v11->~Font)(v11, 1i64);
        }
      }
    }
  }
}

void __fastcall extension::AsyncContent<StageResources>::setErrorResultWithData(
        extension::AsyncContent<StageResources> *this,
        unsigned __int64 e,
        std::unique_ptr<StageResources> data)
{
  StageResources *v5; // rax
  StageResources *Myval2; // rdi
  void *v7; // rbx

  if ( (this->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
  {
    this->m_errorCode = e;
    v5 = *(StageResources **)&data._Mypair._Myval2->tkn.dataVersion;
    *(_QWORD *)&data._Mypair._Myval2->tkn.dataVersion = 0i64;
    Myval2 = this->m_data._Mypair._Myval2;
    this->m_data._Mypair._Myval2 = v5;
    if ( Myval2 )
    {
      StageResources::dispose(Myval2, e);
      operator delete(Myval2, 0x1B0ui64);
    }
    EnterCriticalSection((LPCRITICAL_SECTION)&extension::AsyncStatus::s_mutex);
    _InterlockedOr64((volatile signed __int64 *)&this->m_status, 1ui64);
    EnterCriticalSection((LPCRITICAL_SECTION)&extension::AsyncStatus::s_signalCondition.m_mutex);
    WakeAllConditionVariable((PCONDITION_VARIABLE)&extension::AsyncStatus::s_signalCondition.m_conditionVariable.m_data);
    LeaveCriticalSection((LPCRITICAL_SECTION)&extension::AsyncStatus::s_signalCondition.m_mutex);
    LeaveCriticalSection((LPCRITICAL_SECTION)&extension::AsyncStatus::s_mutex);
  }
  v7 = *(void **)&data._Mypair._Myval2->tkn.dataVersion;
  if ( *(_QWORD *)&data._Mypair._Myval2->tkn.dataVersion )
  {
    StageResources::dispose(*(StageResources **)&data._Mypair._Myval2->tkn.dataVersion, e);
    operator delete(v7, 0x1B0ui64);
  }
}

void __fastcall extension::AsyncContent<StageResources>::setResult(
        extension::AsyncContent<StageResources> *this,
        std::unique_ptr<StageResources> result)
{
  StageResources *v4; // rax
  StageResources *Myval2; // rsi
  void *v6; // rbx

  if ( (this->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
  {
    v4 = *(StageResources **)&result._Mypair._Myval2->tkn.dataVersion;
    if ( *(_QWORD *)&result._Mypair._Myval2->tkn.dataVersion )
    {
      *(_QWORD *)&result._Mypair._Myval2->tkn.dataVersion = 0i64;
      Myval2 = this->m_data._Mypair._Myval2;
      this->m_data._Mypair._Myval2 = v4;
      if ( Myval2 )
      {
        StageResources::dispose(Myval2, (unsigned __int64)result._Mypair._Myval2);
        operator delete(Myval2, 0x1B0ui64);
      }
    }
    else
    {
      this->m_errorCode = 5;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)&extension::AsyncStatus::s_mutex);
    _InterlockedOr64((volatile signed __int64 *)&this->m_status, 1ui64);
    EnterCriticalSection((LPCRITICAL_SECTION)&extension::AsyncStatus::s_signalCondition.m_mutex);
    WakeAllConditionVariable((PCONDITION_VARIABLE)&extension::AsyncStatus::s_signalCondition.m_conditionVariable.m_data);
    LeaveCriticalSection((LPCRITICAL_SECTION)&extension::AsyncStatus::s_signalCondition.m_mutex);
    LeaveCriticalSection((LPCRITICAL_SECTION)&extension::AsyncStatus::s_mutex);
  }
  v6 = *(void **)&result._Mypair._Myval2->tkn.dataVersion;
  if ( *(_QWORD *)&result._Mypair._Myval2->tkn.dataVersion )
  {
    StageResources::dispose(
      *(StageResources **)&result._Mypair._Myval2->tkn.dataVersion,
      (unsigned __int64)result._Mypair._Myval2);
    operator delete(v6, 0x1B0ui64);
  }
}

void __fastcall BattleStageResourceContainer::setupDataEvent(BattleStageResourceContainer *this, TknData *pData)
{
  __int64 m_pUserName_low; // r11
  int v4; // er9
  __int64 i; // r8
  int v6; // er10
  TknData *v7; // r10
  _QWORD *m_pUserName; // rax
  __int64 m_uniqueID; // r11
  int v10; // er9
  __int64 j; // r8
  int v12; // ecx
  __int64 v13; // r11
  int v14; // er9
  __int64 k; // r8
  int v16; // ecx

  if ( !pData[4].__vftable )
    pData[4].__vftable = (TknData_vtbl *)this->m_pDatas[pData[1].m_uniqueID];
  m_pUserName_low = SLODWORD(pData[1].m_pUserName);
  v4 = 0;
  for ( i = 0i64; i < m_pUserName_low; ++i )
  {
    if ( i < 0 || v4 >= SLODWORD(pData[1].m_pUserName) )
      v6 = 0;
    else
      v6 = *((_DWORD *)&pData[2].~TknData + i);
    switch ( pData[3].m_uniqueID )
    {
      case 1:
        v7 = this->m_pDatas[v6];
        if ( i < 0 || v4 >= SLODWORD(pData[1].m_pUserName) )
          goto LABEL_25;
        m_pUserName = *(_QWORD **)&pData[4].m_uniqueID;
        break;
      case 2:
        v7 = this->m_pDatas[v6];
        if ( i < 0 || v4 >= SLODWORD(pData[1].m_pUserName) )
          goto LABEL_25;
        m_pUserName = *(_QWORD **)&pData[4].m_dataType;
        break;
      case 3:
        v7 = this->m_pDatas[v6];
        if ( i < 0 || v4 >= SLODWORD(pData[1].m_pUserName) )
          goto LABEL_25;
        m_pUserName = pData[4].m_pUserName;
        break;
      case 4:
        v7 = this->m_pDatas[v6];
        if ( i < 0 || v4 >= SLODWORD(pData[1].m_pUserName) )
          goto LABEL_25;
        m_pUserName = &pData[5].~TknData;
        break;
      default:
        goto LABEL_25;
    }
    m_pUserName[i] = v7;
LABEL_25:
    ++v4;
  }
  m_uniqueID = pData[2].m_uniqueID;
  v10 = 0;
  for ( j = 0i64; j < m_uniqueID; ++j )
  {
    if ( j < 0 || v10 >= pData[2].m_uniqueID )
      v12 = 0;
    else
      v12 = *(_DWORD *)(*(_QWORD *)&pData[2].m_dataType + 4 * j);
    if ( j >= 0 && v10 < pData[2].m_uniqueID )
      *(_QWORD *)(*(_QWORD *)&pData[5].m_uniqueID + 8 * j) = this->m_pDatas[v12];
    ++v10;
  }
  v13 = SLODWORD(pData[2].m_pUserName);
  v14 = 0;
  for ( k = 0i64; k < v13; ++k )
  {
    if ( k < 0 || v14 >= SLODWORD(pData[2].m_pUserName) )
      v16 = 0;
    else
      v16 = *((_DWORD *)&pData[3].~TknData + k);
    if ( k >= 0 && v14 < SLODWORD(pData[2].m_pUserName) )
      *(_QWORD *)(*(_QWORD *)&pData[5].m_dataType + 8 * k) = this->m_pDatas[v16];
    ++v14;
  }
}

void __fastcall BattleStageResourceContainer::setupDataModel(BattleStageResourceContainer *this, TknData *pData)
{
  __int64 v2; // rdi
  TknData *v3; // r14
  extension::AsyncContent<StageResources> *m_ptr; // rbx
  StageResources *Myval2; // rsi
  extension::AsyncContent<extension::AsyncAsset> *v7; // rbx
  extension::AsyncAsset *v8; // rcx
  int v9; // ebp
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // r15
  extension::AsyncContent<extension::AsyncAsset> *v13; // rbx
  extension::AsyncAsset *v14; // rcx
  OGLModel *v15; // r9
  char *v16; // rax
  char *m_cModelName; // r8
  __int64 v18; // r8
  int v19; // ecx
  int v20; // er11
  __int64 v21; // rbx
  __int64 m_pUserName_low; // r15
  const char **pModelFilenames; // r9
  __int64 v24; // r10
  const char *v25; // r8
  unsigned __int8 *v26; // rax
  const char *v27; // r8
  int v28; // ecx
  int v29; // edx
  extension::AsyncContent<extension::AsyncAsset> *v30; // rbx
  extension::AsyncAsset *v31; // rdx
  const char *v32; // rdx
  __int64 m_uniqueID; // r8

  v2 = 0i64;
  v3 = pData;
  m_ptr = this->m_pResourcPack->datas.m_body.m_ptr->m_content.m_ptr;
  if ( !m_ptr || m_ptr->m_isDataReleased )
  {
    Myval2 = 0i64;
  }
  else
  {
    if ( (m_ptr->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
      extension::AsyncStatus::waitFor(&m_ptr->m_status, (extension::AsyncStatus::Step)pData);
    Myval2 = m_ptr->m_data._Mypair._Myval2;
  }
  if ( SLODWORD(v3[1].__vftable) <= 0 )
  {
    v20 = 0;
    v21 = *(_QWORD *)&v3[1].m_dataType;
    m_pUserName_low = SLODWORD(v3[1].m_pUserName);
    if ( Myval2->modelCount > 0 )
    {
      pModelFilenames = Myval2->tkn.pModelFilenames;
      v24 = 0i64;
      while ( 1 )
      {
        v25 = *pModelFilenames;
        if ( v21 && v25 )
        {
          v26 = *(unsigned __int8 **)&v3[1].m_dataType;
          v27 = &v25[-v21];
          do
          {
            v28 = (unsigned __int8)v27[(_QWORD)v26];
            v29 = *v26 - v28;
            if ( v29 )
              break;
            ++v26;
          }
          while ( v28 );
          if ( !v29 )
            break;
        }
        ++v20;
        ++v24;
        ++pModelFilenames;
        if ( v24 >= Myval2->modelCount )
          goto LABEL_55;
      }
      v30 = Myval2->pOGLModels[v20].m_body.m_ptr->m_content.m_ptr;
      if ( !v30 || v30->m_isDataReleased )
      {
        v31 = 0i64;
      }
      else
      {
        if ( (v30->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
          extension::AsyncStatus::waitFor(&v30->m_status, Step_Pending);
        v31 = v30->m_data._Mypair._Myval2;
      }
      if ( (int)m_pUserName_low < 0
        || (int)m_pUserName_low >= (int)(v31->m_models._Mypair._Myval2._Mylast - v31->m_models._Mypair._Myval2._Myfirst) )
      {
        v32 = 0i64;
      }
      else
      {
        v32 = (const char *)v31->m_models._Mypair._Myval2._Myfirst[m_pUserName_low]._Mypair._Myval2;
      }
      v3[3].m_pUserName = v32;
    }
  }
  else
  {
    v7 = this->m_pResourcPack->pStageModels->m_body.m_ptr->m_content.m_ptr;
    if ( !v7 || v7->m_isDataReleased )
    {
      v8 = 0i64;
    }
    else
    {
      if ( (v7->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
        extension::AsyncStatus::waitFor(&v7->m_status, (extension::AsyncStatus::Step)pData);
      v8 = v7->m_data._Mypair._Myval2;
    }
    v9 = 0;
    v10 = 0i64;
    v11 = v8->m_models._Mypair._Myval2._Mylast - v8->m_models._Mypair._Myval2._Myfirst;
    v12 = (int)v11;
    if ( (int)v11 > 0 )
    {
      do
      {
        v13 = this->m_pResourcPack->pStageModels->m_body.m_ptr->m_content.m_ptr;
        if ( !v13 || v13->m_isDataReleased )
        {
          v14 = 0i64;
        }
        else
        {
          if ( (v13->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
            extension::AsyncStatus::waitFor(&v13->m_status, (extension::AsyncStatus::Step)pData);
          v14 = v13->m_data._Mypair._Myval2;
        }
        if ( v10 < 0 || v9 >= (int)(v14->m_models._Mypair._Myval2._Mylast - v14->m_models._Mypair._Myval2._Myfirst) )
          v15 = 0i64;
        else
          v15 = v14->m_models._Mypair._Myval2._Myfirst[v10]._Mypair._Myval2;
        v16 = *(char **)&v3[1].m_uniqueID;
        m_cModelName = v15->m_cModelName;
        if ( v16 && m_cModelName )
        {
          v18 = m_cModelName - v16;
          do
          {
            v19 = (unsigned __int8)v16[v18];
            LODWORD(pData) = (unsigned __int8)*v16 - v19;
            if ( (_DWORD)pData )
              break;
            ++v16;
          }
          while ( v19 );
          if ( !(_DWORD)pData )
            v3[3].m_pUserName = (const char *)v15;
        }
        ++v9;
        ++v10;
      }
      while ( v10 < v12 );
    }
  }
LABEL_55:
  if ( v3[2].m_uniqueID > 0 )
  {
    m_uniqueID = v3[2].m_uniqueID;
    do
    {
      v3[4].__vftable[v2].~TknData = (void (__fastcall *)(TknData *))this->m_pDatas[*(int *)(*(_QWORD *)&v3[2].m_dataType
                                                                                           + 4 * v2)];
      ++v2;
    }
    while ( v2 < m_uniqueID );
  }
}

void __fastcall BattleStageResourceContainer::setupDataMotion(BattleStageResourceContainer *this, TknData *pData)
{
  TknData *v2; // r13
  extension::AsyncContent<StageResources> *m_ptr; // rbx
  StageResources *Myval2; // r9
  const char *v5; // r12
  int v6; // er15
  __int64 v7; // r14
  const char *v8; // rbp
  unsigned int v9; // ebx
  OGLMotion *v10; // rsi
  __int64 v11; // rdi
  OGLMotionData *v12; // rcx
  int v13; // esi
  __int64 v14; // rdi
  __int64 v15; // r14
  const char *v16; // r15
  extension::AsyncContent<extension::AsyncAsset> *v17; // rbx
  extension::AsyncAsset *v18; // rcx
  int v19; // er8
  extension::AsyncContent<extension::AsyncAsset> *v20; // rbx
  extension::AsyncAsset *v21; // rcx
  OGLModel *v22; // rcx
  __int64 v23; // rbp
  __int64 *m_pMotion; // r14
  __int64 v25; // rsi
  unsigned int v26; // ebx
  __int64 v27; // rdi
  __int64 v28; // rcx
  const char *v29; // rax
  int v30; // ecx
  int v31; // edx
  int v32; // [rsp+30h] [rbp-C8h]
  StageResources *v33; // [rsp+38h] [rbp-C0h]
  int v34; // [rsp+40h] [rbp-B8h]
  TknData *v35; // [rsp+48h] [rbp-B0h]
  __int64 v36; // [rsp+50h] [rbp-A8h]
  __int64 v37; // [rsp+58h] [rbp-A0h]
  __int64 v38; // [rsp+60h] [rbp-98h]
  char _Buffer[64]; // [rsp+70h] [rbp-88h] BYREF

  v2 = pData;
  m_ptr = this->m_pResourcPack->datas.m_body.m_ptr->m_content.m_ptr;
  if ( !m_ptr || m_ptr->m_isDataReleased )
  {
    Myval2 = 0i64;
  }
  else
  {
    if ( (m_ptr->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
      extension::AsyncStatus::waitFor(&m_ptr->m_status, (extension::AsyncStatus::Step)pData);
    Myval2 = m_ptr->m_data._Mypair._Myval2;
  }
  v5 = (const char *)v2[1].__vftable;
  v6 = 0;
  v33 = Myval2;
  if ( Myval2->motionCount > 0 )
  {
    v7 = 0i64;
    do
    {
      v8 = Myval2->tkn.pMotionFilenames[v7];
      if ( v8 )
      {
        v9 = 0;
        v10 = Myval2->pOGLMotions[v7];
        if ( v10->m_usMotionCount )
        {
          v11 = 0i64;
          while ( 1 )
          {
            v12 = v10->m_ppMotionData[v11];
            if ( v12->m_cMotionName )
            {
              sprintf_s(_Buffer, 0x40ui64, "%s_%s", v8, (const char *)v12->m_cMotionName);
              if ( v5 )
              {
                LODWORD(pData) = strcmp(v5, _Buffer);
                if ( !(_DWORD)pData )
                  break;
              }
            }
            ++v9;
            ++v11;
            if ( v9 >= v10->m_usMotionCount )
              goto LABEL_18;
          }
          *(_QWORD *)&v2[1].m_dataType = v10;
          LODWORD(v2[1].m_pUserName) = v9;
LABEL_18:
          Myval2 = v33;
        }
        if ( *(_QWORD *)&v2[1].m_dataType )
          return;
      }
      ++v6;
      ++v7;
    }
    while ( v6 < Myval2->motionCount );
  }
  if ( *(_QWORD *)&v2[1].m_dataType )
    return;
  v13 = 0;
  v34 = 0;
  if ( Myval2->modelCount <= 0 )
    return;
  v14 = 0i64;
  v15 = 0i64;
  v37 = 0i64;
  v36 = 0i64;
  while ( 1 )
  {
    v16 = *(const char **)((char *)Myval2->tkn.pModelFilenames + v15);
    if ( v16 )
      break;
LABEL_62:
    ++v13;
    v15 += 8i64;
    v14 += 16i64;
    v34 = v13;
    v36 = v15;
    v37 = v14;
    if ( v13 >= Myval2->modelCount )
      return;
  }
  v17 = (*(extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body **)((char *)&Myval2->pOGLModels->m_body.m_ptr + v14))->m_content.m_ptr;
  if ( !v17 || v17->m_isDataReleased )
  {
    v18 = 0i64;
  }
  else
  {
    if ( (v17->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
    {
      extension::AsyncStatus::waitFor(&v17->m_status, (extension::AsyncStatus::Step)pData);
      Myval2 = v33;
    }
    v18 = v17->m_data._Mypair._Myval2;
  }
  v19 = 0;
  pData = 0i64;
  v32 = 0;
  v35 = 0i64;
  v38 = (int)(v18->m_models._Mypair._Myval2._Mylast - v18->m_models._Mypair._Myval2._Myfirst);
  if ( v38 <= 0 )
  {
LABEL_60:
    if ( *(_QWORD *)&v2[1].m_dataType )
      return;
    Myval2 = v33;
    goto LABEL_62;
  }
LABEL_32:
  v20 = (*(extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body **)((char *)&Myval2->pOGLModels->m_body.m_ptr + v14))->m_content.m_ptr;
  if ( !v20 || v20->m_isDataReleased )
  {
    v21 = 0i64;
  }
  else
  {
    if ( (v20->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
    {
      extension::AsyncStatus::waitFor(&v20->m_status, (extension::AsyncStatus::Step)pData);
      pData = v35;
      v19 = v32;
    }
    v21 = v20->m_data._Mypair._Myval2;
  }
  if ( (__int64)pData < 0
    || v19 >= (int)(v21->m_models._Mypair._Myval2._Mylast - v21->m_models._Mypair._Myval2._Myfirst) )
  {
    v22 = 0i64;
  }
  else
  {
    v22 = v21->m_models._Mypair._Myval2._Myfirst[(_QWORD)pData]._Mypair._Myval2;
  }
  v23 = 0i64;
  m_pMotion = (__int64 *)v22->m_pMotion;
  while ( 1 )
  {
    v25 = *m_pMotion;
    if ( *m_pMotion )
    {
      v26 = 0;
      if ( *(_DWORD *)(v25 + 8) )
      {
        v27 = 0i64;
        while ( 1 )
        {
          v28 = *(_QWORD *)(*(_QWORD *)v25 + v27);
          if ( *(_QWORD *)(v28 + 24) )
          {
            sprintf_s(_Buffer, 0x40ui64, "%s_%s", v16, *(const char **)(v28 + 24));
            if ( v5 )
            {
              v29 = v5;
              do
              {
                v30 = (unsigned __int8)v29[_Buffer - v5];
                v31 = *(unsigned __int8 *)v29 - v30;
                if ( v31 )
                  break;
                ++v29;
              }
              while ( v30 );
              if ( !v31 )
                break;
            }
          }
          ++v26;
          v27 += 8i64;
          if ( v26 >= *(_DWORD *)(v25 + 8) )
            goto LABEL_55;
        }
        *(_QWORD *)&v2[1].m_dataType = v25;
        LODWORD(v2[1].m_pUserName) = v26;
      }
LABEL_55:
      if ( *(_QWORD *)&v2[1].m_dataType )
        break;
    }
    ++v23;
    ++m_pMotion;
    if ( v23 >= 5 )
    {
      if ( *(_QWORD *)&v2[1].m_dataType )
        return;
      v19 = v32 + 1;
      v14 = v37;
      pData = (TknData *)((char *)&v35->__vftable + 1);
      Myval2 = v33;
      ++v32;
      v35 = pData;
      if ( (__int64)pData >= v38 )
      {
        v13 = v34;
        v15 = v36;
        goto LABEL_60;
      }
      goto LABEL_32;
    }
  }
}

void __fastcall BattleStageResourceContainer::setupDataScene(BattleStageResourceContainer *this, TknData *pData)
{
  __int64 v2; // r11
  int v3; // er10
  __int64 i; // r9
  int v6; // ecx
  __int64 m_dataType; // r11
  TknData::DataType v8; // er10
  __int64 j; // r9
  int v10; // ecx

  v2 = SLODWORD(pData[1].__vftable);
  v3 = 0;
  for ( i = 0i64; i < v2; ++i )
  {
    if ( i < 0 || SLODWORD(pData[1].__vftable) <= v3 )
      v6 = 0;
    else
      v6 = *(_DWORD *)(*(_QWORD *)&pData[1].m_uniqueID + 4 * i);
    ++v3;
    pData[2].__vftable[i].~TknData = (void (__fastcall *)(TknData *))this->m_pDatas[v6];
  }
  m_dataType = pData[1].m_dataType;
  v8 = DATATYPE_NONE;
  for ( j = 0i64; j < m_dataType; ++j )
  {
    if ( j < 0 || pData[1].m_dataType <= v8 )
      v10 = 0;
    else
      v10 = *(_DWORD *)&pData[1].m_pUserName[4 * j];
    ++v8;
    *(_QWORD *)(*(_QWORD *)&pData[2].m_uniqueID + 8 * j) = this->m_pDatas[v10];
  }
}

char __fastcall BattleStageResourceContainer::setupParameters(
        BattleStageResourceContainer *this,
        extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> *stageModels)
{
  BattleStageResourceContainer *v3; // r15
  BattleStageResourcePack *m_pResourcPack; // rcx
  extension::AsyncContent<StageResources> *v5; // r8
  extension::exsound_detail::SoundBankImpl *v6; // r14
  extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> *v7; // rdx
  extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body *v8; // rcx
  int v9; // edi
  int v10; // er13
  __int64 v11; // r15
  __int64 v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // rax
  int v15; // ebp
  __int64 v16; // rsi
  __int64 i; // r12
  __int64 v18; // rbx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rax
  __int64 v22; // rcx
  int v23; // eax
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // kr00_8
  int v26; // edx
  __int64 v27; // rcx
  int v28; // esi
  __int64 v29; // rbx
  TknData *v30; // rax
  int v31; // esi
  __int64 v32; // rbx
  TknData *v33; // rax
  int v34; // ebp
  __int64 v35; // rsi
  int v36; // ebx
  __int64 v37; // r12
  TknData *v38; // rsi
  extension::exsound_detail::SoundBankElementDefinition *v39; // r13
  _BYTE *v40; // rbp
  void *v41; // r15
  __int64 v42; // rax
  unsigned __int64 v43; // rbx
  _BYTE *v44; // rbp
  TknData_vtbl *v45; // r15
  __int64 v46; // rax
  unsigned __int64 v47; // rbx
  int v48; // ebp
  __int64 v49; // rsi
  int v50; // ebx
  __int64 v51; // r13
  TknData *v52; // rsi
  std::_List_node<std::pair<extension::SoundHashKey const ,int>,void *> *Ptr; // r15
  _BYTE *v54; // rbp
  void *v55; // r12
  __int64 v56; // rax
  unsigned __int64 v57; // rbx
  int v58; // ebx
  __int64 v59; // r12
  TknData *v60; // rsi
  __int64 v61; // r13
  _BYTE *v62; // rbp
  void *v63; // r15
  __int64 v64; // rax
  unsigned __int64 v65; // rbx
  int v66; // ebx
  __int64 v67; // r13
  TknData *v68; // rsi
  __int64 v69; // r15
  _BYTE *v70; // rbp
  void *v71; // r12
  __int64 v72; // rax
  unsigned __int64 v73; // rbx
  int v74; // ebp
  __int64 v75; // rsi
  int v76; // ebx
  __int64 v77; // r13
  TknData *v78; // rsi
  extension::exsound_detail::PreloadedAudioSet *v79; // r15
  extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> *Mylast; // rbp
  void *v81; // r12
  __int64 v82; // rax
  unsigned __int64 v83; // rbx
  int v84; // esi
  __int64 v85; // rbx
  TknData *v86; // rax
  int v87; // ebp
  __int64 v88; // rsi
  int v89; // ebp
  __int64 v90; // rsi
  int v91; // ebp
  __int64 v92; // rsi
  int v93; // ebx
  __int64 v94; // r13
  TknData *v95; // rsi
  __int64 v96; // rbp
  _BYTE *v97; // r15
  void *v98; // r12
  __int64 v99; // rax
  unsigned __int64 v100; // rbx
  _BYTE *v101; // r15
  void *v102; // r12
  __int64 v103; // rax
  unsigned __int64 v104; // rbx
  unsigned __int64 Myres_low; // rcx
  unsigned __int64 v106; // rax
  int v107; // ebp
  __int64 v108; // rsi
  __int64 v109; // rbx
  TknData **m_pDatas; // r8
  TknData *v111; // rdx
  __int64 m_parentUniqueID; // rax
  __int64 m_uniqueID; // rax
  __int64 m_pUserName_low; // rax
  __int64 v115; // rax
  extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body *m_ptr; // rcx
  TknDataEventConditions *v119; // [rsp+80h] [rbp+8h]
  BSDataScene *v121; // [rsp+90h] [rbp+18h]
  BSDataModel *v122; // [rsp+90h] [rbp+18h]
  TknDataUVAnimation *v123; // [rsp+90h] [rbp+18h]
  int v124; // [rsp+90h] [rbp+18h]
  TknDataObject *v125; // [rsp+90h] [rbp+18h]
  int v126; // [rsp+90h] [rbp+18h]
  int v127; // [rsp+90h] [rbp+18h]
  int v128; // [rsp+90h] [rbp+18h]
  TknDataEventTranslation *v129; // [rsp+90h] [rbp+18h]
  int v130; // [rsp+90h] [rbp+18h]
  BSDataEvent *v131; // [rsp+90h] [rbp+18h]
  TknDataLight *v132; // [rsp+90h] [rbp+18h]
  TknDataEffect *v133; // [rsp+90h] [rbp+18h]
  TknDataBillboard *v134; // [rsp+90h] [rbp+18h]
  int v135; // [rsp+90h] [rbp+18h]

  v3 = this;
  m_pResourcPack = this->m_pResourcPack;
  if ( !m_pResourcPack
    || (v5 = m_pResourcPack->datas.m_body.m_ptr->m_content.m_ptr) == 0i64
    || v5->m_isDataReleased
    || m_pResourcPack->pStageModels )
  {
    m_ptr = stageModels->m_body.m_ptr;
    if ( !m_ptr )
      return 1;
    goto LABEL_169;
  }
  v6 = extension::BasicFutureObject<extension::GFXIMovieData,void>::operator->(
         (extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> *)&m_pResourcPack->datas,
         (extension::AsyncStatus::Step)stageModels);
  v7 = (extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption> *)operator new(0x10ui64);
  v7->m_isNoCache = stageModels->m_isNoCache;
  v8 = stageModels->m_body.m_ptr;
  v7->m_body.m_ptr = v8;
  if ( v8 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)&v8->m_refCount.m_ptr->m_sharedCount, 1ui64);
  v3->m_pResourcPack->pStageModels = v7;
  v9 = 0;
  v10 = 0;
  if ( SLODWORD(v6[1].m_residentSounds._Mypair._Myval2._Myfirst) > 0 )
  {
    v11 = 0i64;
    do
    {
      v12 = *(_QWORD *)(*(_QWORD *)(v11 + v6[1].m_nameIndexMap._Maxidx + 8) + 16i64);
      if ( !v12 || *(_BYTE *)(v12 + 96) )
      {
        v13 = 0i64;
      }
      else
      {
        if ( (*(_QWORD *)(v12 + 88) & 1) == 0 )
          extension::AsyncStatus::waitFor((extension::AsyncStatus *)(v12 + 88), (extension::AsyncStatus::Step)v7);
        v13 = *(_QWORD *)(v12 + 72);
      }
      v14 = (__int64)(*(_QWORD *)(v13 + 208) - *(_QWORD *)(v13 + 200)) >> 3;
      v15 = 0;
      v16 = 0i64;
      for ( i = (int)v14; v16 < i; ++v16 )
      {
        v18 = *(_QWORD *)(*(_QWORD *)(v11 + v6[1].m_nameIndexMap._Maxidx + 8) + 16i64);
        if ( !v18 || *(_BYTE *)(v18 + 96) )
        {
          v19 = 0i64;
        }
        else
        {
          if ( (*(_QWORD *)(v18 + 88) & 1) == 0 )
            extension::AsyncStatus::waitFor((extension::AsyncStatus *)(v18 + 88), (extension::AsyncStatus::Step)v7);
          v19 = *(_QWORD *)(v18 + 72);
        }
        if ( v16 < 0 || v15 >= (int)((__int64)(*(_QWORD *)(v19 + 208) - *(_QWORD *)(v19 + 200)) >> 3) )
          v20 = 0i64;
        else
          v20 = *(_QWORD *)(*(_QWORD *)(v19 + 200) + 8 * v16);
        if ( !*(_BYTE *)(v20 + 8904) )
        {
          LODWORD(v7) = 0;
          v21 = *(_QWORD *)(v20 + 360);
          if ( *(_DWORD *)(v21 + 160) )
          {
            v22 = 0i64;
            do
            {
              *(_DWORD *)(*(_QWORD *)(v21 + 144) + v22 + 32) |= 0x10000u;
              LODWORD(v7) = (_DWORD)v7 + 1;
              v22 += 1128i64;
              v21 = *(_QWORD *)(v20 + 360);
            }
            while ( (unsigned int)v7 < *(_DWORD *)(v21 + 160) );
          }
        }
        ++v15;
      }
      ++v10;
      v11 += 16i64;
    }
    while ( v10 < SLODWORD(v6[1].m_residentSounds._Mypair._Myval2._Myfirst) );
    v3 = this;
  }
  v23 = *(_DWORD *)&v6->m_bankFileDir._Mypair._Myval2._Bx._Alias[4] + 1;
  v3->m_dataCount = v23;
  v25 = v23;
  v24 = 8i64 * v23;
  if ( !is_mul_ok(v25, 8ui64) )
    v24 = -1i64;
  v3->m_pDatas = (TknData **)operator new[](v24);
  v26 = 0;
  if ( v3->m_dataCount > 0 )
  {
    v27 = 0i64;
    do
    {
      v3->m_pDatas[v27] = 0i64;
      ++v26;
      ++v27;
    }
    while ( v26 < v3->m_dataCount );
  }
  v28 = 0;
  if ( *(int *)&v6->m_bankFileDir._Mypair._Myval2._Bx._Alias[8] > 0 )
  {
    v29 = 0i64;
    do
    {
      v121 = (BSDataScene *)operator new(0x50ui64);
      BSDataScene::BSDataScene(v121, *(TknDataScene **)(v29 + v6->m_bankFileDir._Mypair._Myval2._Mysize));
      v3->m_pDatas[*(int *)(*(_QWORD *)(v29 + v6->m_bankFileDir._Mypair._Myval2._Mysize) + 8i64)] = v30;
      ++v28;
      v29 += 8i64;
    }
    while ( v28 < *(_DWORD *)&v6->m_bankFileDir._Mypair._Myval2._Bx._Alias[8] );
  }
  v31 = 0;
  if ( *(int *)&v6->m_bankFileName._Mypair._Myval2._Bx._Alias[8] > 0 )
  {
    v32 = 0i64;
    do
    {
      v122 = (BSDataModel *)operator new(0x98ui64);
      BSDataModel::BSDataModel(v122, *(TknDataModel **)(v32 + v6->m_bankFileName._Mypair._Myval2._Mysize));
      v3->m_pDatas[*(int *)(*(_QWORD *)(v32 + v6->m_bankFileName._Mypair._Myval2._Mysize) + 8i64)] = v33;
      ++v31;
      v32 += 8i64;
    }
    while ( v31 < *(_DWORD *)&v6->m_bankFileName._Mypair._Myval2._Bx._Alias[8] );
  }
  v34 = 0;
  if ( SLODWORD(v6->m_bankFileName._Mypair._Myval2._Myres) > 0 )
  {
    v35 = 0i64;
    do
    {
      v123 = (TknDataUVAnimation *)operator new(0x50ui64);
      TknDataUVAnimation::TknDataUVAnimation(v123, *(TknDataUVAnimation **)(v35 + *(_QWORD *)&v6->m_masterVolume));
      v123->__vftable = (TknDataUVAnimation_vtbl *)&BSDataUVAnimation::`vftable';
      v3->m_pDatas[*(int *)(*(_QWORD *)(v35 + *(_QWORD *)&v6->m_masterVolume) + 8i64)] = v123;
      ++v34;
      v35 += 8i64;
    }
    while ( v34 < SLODWORD(v6->m_bankFileName._Mypair._Myval2._Myres) );
  }
  v36 = 0;
  v124 = 0;
  if ( SLODWORD(v6->m_bankElements._Mypair._Myval2._Myfirst) > 0 )
  {
    v37 = 0i64;
    do
    {
      v38 = (TknData *)operator new(0x40ui64);
      v39 = v6->m_bankElements._Mypair._Myval2._Mylast[v37].m_ptr;
      v38->__vftable = (TknData_vtbl *)&TknData::`vftable';
      v38->m_uniqueID = (int)v39->m_name.m_sharedBuffer.m_ptr;
      v38->m_parentUniqueID = HIDWORD(v39->m_name.m_sharedBuffer.m_ptr);
      v38->m_dataType = LODWORD(v39->m_channelDef.m_frontL);
      v40 = *(_BYTE **)&v39->m_channelDef.m_frontC;
      if ( v40 )
      {
        v42 = -1i64;
        do
          ++v42;
        while ( v40[v42] );
        if ( (int)v42 >= 0 )
        {
          v43 = (int)v42 + 1;
          v41 = operator new[](v43);
          memmove(v41, v40, v43);
          v36 = v124;
        }
        else
        {
          v41 = 0i64;
        }
      }
      else
      {
        v41 = 0i64;
      }
      v38->m_pUserName = (const char *)v41;
      v38->__vftable = (TknData_vtbl *)&TknDataMotion::`vftable';
      v38[1].__vftable = 0i64;
      v44 = *(_BYTE **)&v39->m_channelDef.m_surroundL;
      if ( v44 )
      {
        v46 = -1i64;
        do
          ++v46;
        while ( v44[v46] );
        if ( (int)v46 >= 0 )
        {
          v47 = (int)v46 + 1;
          v45 = (TknData_vtbl *)operator new[](v47);
          memmove(v45, v44, v47);
          v36 = v124;
        }
        else
        {
          v45 = 0i64;
        }
      }
      else
      {
        v45 = 0i64;
      }
      v38[1].__vftable = v45;
      v38[1].m_uniqueID = LODWORD(v39->m_channelDef.m_backL);
      v38->__vftable = (TknData_vtbl *)&BSDataMotion::`vftable';
      *(_QWORD *)&v38[1].m_dataType = 0i64;
      v3 = this;
      this->m_pDatas[SLODWORD(v6->m_bankElements._Mypair._Myval2._Mylast[v37].m_ptr->m_name.m_sharedBuffer.m_ptr)] = v38;
      v124 = ++v36;
      ++v37;
    }
    while ( v36 < SLODWORD(v6->m_bankElements._Mypair._Myval2._Myfirst) );
  }
  v48 = 0;
  if ( SLODWORD(v6->m_bankElements._Mypair._Myval2._Myend) > 0 )
  {
    v49 = 0i64;
    do
    {
      v125 = (TknDataObject *)operator new(0xE0ui64);
      TknDataObject::TknDataObject(
        v125,
        *(TknDataObject **)(v49 + *(_QWORD *)&v6->m_nameIndexMap._Traitsobj._Mypair._Myval2._Myval2));
      v125->__vftable = (TknDataObject_vtbl *)&BSDataObject::`vftable';
      v125[1].__vftable = 0i64;
      v3->m_pDatas[*(int *)(*(_QWORD *)(v49 + *(_QWORD *)&v6->m_nameIndexMap._Traitsobj._Mypair._Myval2._Myval2) + 8i64)] = v125;
      ++v48;
      v49 += 8i64;
    }
    while ( v48 < SLODWORD(v6->m_bankElements._Mypair._Myval2._Myend) );
  }
  v50 = 0;
  v126 = 0;
  if ( SLODWORD(v6->m_nameIndexMap._Vec._Mypair._Myval2._Myfirst) > 0 )
  {
    v51 = 0i64;
    do
    {
      v52 = (TknData *)operator new(0x58ui64);
      Ptr = v6->m_nameIndexMap._Vec._Mypair._Myval2._Mylast[v51]._Ptr;
      v52->__vftable = (TknData_vtbl *)&TknData::`vftable';
      v52->m_uniqueID = (int)Ptr->_Prev;
      v52->m_parentUniqueID = HIDWORD(Ptr->_Prev);
      v52->m_dataType = (TknData::DataType)Ptr->_Myval.first.m_sharedBuffer.m_ptr;
      v54 = *(_BYTE **)&Ptr->_Myval.second;
      if ( v54 )
      {
        v56 = -1i64;
        do
          ++v56;
        while ( v54[v56] );
        if ( (int)v56 >= 0 )
        {
          v57 = (int)v56 + 1;
          v55 = operator new[](v57);
          memmove(v55, v54, v57);
          v50 = v126;
        }
        else
        {
          v55 = 0i64;
        }
      }
      else
      {
        v55 = 0i64;
      }
      v52->m_pUserName = (const char *)v55;
      v52->__vftable = (TknData_vtbl *)&TknDataEventModelAnimation::`vftable';
      LODWORD(v52[1].__vftable) = Ptr[1]._Next;
      HIDWORD(v52[1].__vftable) = HIDWORD(Ptr[1]._Next);
      v52[1].m_parentUniqueID = HIDWORD(Ptr[1]._Prev);
      v52[1].m_dataType = (TknData::DataType)Ptr[1]._Myval.first.m_sharedBuffer.m_ptr;
      LOBYTE(v52[1].m_uniqueID) = Ptr[1]._Prev;
      *((_DWORD *)&v52[1].m_dataType + 1) = HIDWORD(Ptr[1]._Myval.first.m_sharedBuffer.m_ptr);
      LODWORD(v52[1].m_pUserName) = Ptr[1]._Myval.second;
      HIDWORD(v52[1].m_pUserName) = *(&Ptr[1]._Myval.second + 1);
      LODWORD(v52[2].__vftable) = Ptr[2]._Next;
      v52->__vftable = (TknData_vtbl *)&BSDataEventModelAnimation::`vftable';
      *(_QWORD *)&v52[2].m_uniqueID = 0i64;
      v3 = this;
      this->m_pDatas[SLODWORD(v6->m_nameIndexMap._Vec._Mypair._Myval2._Mylast[v51]._Ptr->_Prev)] = v52;
      v126 = ++v50;
      ++v51;
    }
    while ( v50 < SLODWORD(v6->m_nameIndexMap._Vec._Mypair._Myval2._Myfirst) );
  }
  v58 = 0;
  v127 = 0;
  if ( SLODWORD(v6->m_nameIndexMap._Vec._Mypair._Myval2._Myend) > 0 )
  {
    v59 = 0i64;
    do
    {
      v60 = (TknData *)operator new(0x38ui64);
      v61 = *(_QWORD *)(v59 + v6->m_nameIndexMap._Mask);
      v60->__vftable = (TknData_vtbl *)&TknData::`vftable';
      v60->m_uniqueID = *(_DWORD *)(v61 + 8);
      v60->m_parentUniqueID = *(_DWORD *)(v61 + 12);
      v60->m_dataType = *(_DWORD *)(v61 + 16);
      v62 = *(_BYTE **)(v61 + 24);
      if ( v62 )
      {
        v64 = -1i64;
        do
          ++v64;
        while ( v62[v64] );
        if ( (int)v64 >= 0 )
        {
          v65 = (int)v64 + 1;
          v63 = operator new[](v65);
          memmove(v63, v62, v65);
          v58 = v127;
        }
        else
        {
          v63 = 0i64;
        }
      }
      else
      {
        v63 = 0i64;
      }
      v60->m_pUserName = (const char *)v63;
      v60->__vftable = (TknData_vtbl *)&TknDataEventEffectAnimation::`vftable';
      LODWORD(v60[1].__vftable) = *(_DWORD *)(v61 + 32);
      v60[1].m_uniqueID = *(_DWORD *)(v61 + 40);
      v60[1].m_parentUniqueID = *(_DWORD *)(v61 + 44);
      HIDWORD(v60[1].__vftable) = *(_DWORD *)(v61 + 36);
      v60->__vftable = (TknData_vtbl *)&BSDataEventEffectAnimation::`vftable';
      *(_QWORD *)&v60[1].m_dataType = 0i64;
      v3 = this;
      this->m_pDatas[*(int *)(*(_QWORD *)(v59 + v6->m_nameIndexMap._Mask) + 8i64)] = v60;
      v127 = ++v58;
      v59 += 8i64;
    }
    while ( v58 < SLODWORD(v6->m_nameIndexMap._Vec._Mypair._Myval2._Myend) );
  }
  v66 = 0;
  v128 = 0;
  if ( SLODWORD(v6[1].m_bankFileDir._Mypair._Myval2._Mysize) > 0 )
  {
    v67 = 0i64;
    do
    {
      v68 = (TknData *)operator new(0x50ui64);
      v69 = *(_QWORD *)(v6[1].m_bankFileDir._Mypair._Myval2._Myres + v67);
      v68->__vftable = (TknData_vtbl *)&TknData::`vftable';
      v68->m_uniqueID = *(_DWORD *)(v69 + 8);
      v68->m_parentUniqueID = *(_DWORD *)(v69 + 12);
      v68->m_dataType = *(_DWORD *)(v69 + 16);
      v70 = *(_BYTE **)(v69 + 24);
      if ( v70 )
      {
        v72 = -1i64;
        do
          ++v72;
        while ( v70[v72] );
        if ( (int)v72 >= 0 )
        {
          v73 = (int)v72 + 1;
          v71 = operator new[](v73);
          memmove(v71, v70, v73);
          v66 = v128;
        }
        else
        {
          v71 = 0i64;
        }
      }
      else
      {
        v71 = 0i64;
      }
      v68->m_pUserName = (const char *)v71;
      v68->__vftable = (TknData_vtbl *)&TknDataEventBillboardAnimation::`vftable';
      LODWORD(v68[1].__vftable) = *(_DWORD *)(v69 + 32);
      HIDWORD(v68[1].__vftable) = *(_DWORD *)(v69 + 36);
      v68[1].m_parentUniqueID = *(_DWORD *)(v69 + 44);
      v68[1].m_dataType = *(_DWORD *)(v69 + 48);
      LOBYTE(v68[1].m_uniqueID) = *(_BYTE *)(v69 + 40);
      *((_DWORD *)&v68[1].m_dataType + 1) = *(_DWORD *)(v69 + 52);
      LODWORD(v68[1].m_pUserName) = *(_DWORD *)(v69 + 56);
      HIDWORD(v68[1].m_pUserName) = *(_DWORD *)(v69 + 60);
      LODWORD(v68[2].__vftable) = *(_DWORD *)(v69 + 64);
      v68->__vftable = (TknData_vtbl *)&BSDataEventBillboardAnimation::`vftable';
      *(_QWORD *)&v68[2].m_uniqueID = 0i64;
      v3 = this;
      this->m_pDatas[*(int *)(*(_QWORD *)(v6[1].m_bankFileDir._Mypair._Myval2._Myres + v67) + 8i64)] = v68;
      v128 = ++v66;
      v67 += 8i64;
    }
    while ( v66 < SLODWORD(v6[1].m_bankFileDir._Mypair._Myval2._Mysize) );
  }
  v74 = 0;
  if ( SLODWORD(v6->m_nameIndexMap._Maxidx) > 0 )
  {
    v75 = 0i64;
    do
    {
      v129 = (TknDataEventTranslation *)operator new(0xB8ui64);
      TknDataEventTranslation::TknDataEventTranslation(
        v129,
        (TknDataEventTranslation *)v6->m_residentSounds._Mypair._Myval2._Myfirst[v75].m_ptr);
      v129->__vftable = (TknDataEventTranslation_vtbl *)&BSDataEventTranslation::`vftable';
      v3->m_pDatas[SLODWORD(v6->m_residentSounds._Mypair._Myval2._Myfirst[v75].m_ptr->m_weakRef)] = v129;
      ++v74;
      ++v75;
    }
    while ( v74 < SLODWORD(v6->m_nameIndexMap._Maxidx) );
  }
  v76 = 0;
  v130 = 0;
  if ( SLODWORD(v6->m_residentSounds._Mypair._Myval2._Mylast) > 0 )
  {
    v77 = 0i64;
    do
    {
      v78 = (TknData *)operator new(0x40ui64);
      v79 = v6->m_residentSounds._Mypair._Myval2._Myend[v77].m_ptr;
      v78->__vftable = (TknData_vtbl *)&TknData::`vftable';
      v78->m_uniqueID = (int)v79->m_weakRef;
      v78->m_parentUniqueID = HIDWORD(v79->m_weakRef);
      v78->m_dataType = (TknData::DataType)v79->m_data._Mypair._Myval2._Myfirst;
      Mylast = v79->m_data._Mypair._Myval2._Mylast;
      if ( Mylast )
      {
        v82 = -1i64;
        do
          ++v82;
        while ( *(&Mylast->gap0 + v82) );
        if ( (int)v82 >= 0 )
        {
          v83 = (int)v82 + 1;
          v81 = operator new[](v83);
          memmove(v81, Mylast, v83);
          v76 = v130;
        }
        else
        {
          v81 = 0i64;
        }
      }
      else
      {
        v81 = 0i64;
      }
      v78->m_pUserName = (const char *)v81;
      v78->__vftable = (TknData_vtbl *)&TknDataEventScript::`vftable';
      LODWORD(v78[1].__vftable) = v79->m_data._Mypair._Myval2._Myend;
      HIDWORD(v78[1].__vftable) = HIDWORD(v79->m_data._Mypair._Myval2._Myend);
      v78[1].m_uniqueID = (int)v79->m_loadedCheckIt._Ptr;
      v78[1].m_parentUniqueID = HIDWORD(v79->m_loadedCheckIt._Ptr);
      v78[1].m_dataType = v79[1].m_refCount.m_value._My_val;
      *((_DWORD *)&v78[1].m_dataType + 1) = HIDWORD(v79[1].m_refCount.m_value._My_val);
      LODWORD(v78[1].m_pUserName) = v79[1].m_weakRef;
      v78->__vftable = (TknData_vtbl *)&BSDataEventScript::`vftable';
      v3 = this;
      this->m_pDatas[SLODWORD(v6->m_residentSounds._Mypair._Myval2._Myend[v77].m_ptr->m_weakRef)] = v78;
      v130 = ++v76;
      ++v77;
    }
    while ( v76 < SLODWORD(v6->m_residentSounds._Mypair._Myval2._Mylast) );
  }
  v84 = 0;
  if ( SLODWORD(v6->m_nameIndexMap._List._Mypair._Myval2._Myhead) > 0 )
  {
    v85 = 0i64;
    do
    {
      v131 = (BSDataEvent *)operator new(0xD0ui64);
      BSDataEvent::BSDataEvent(v131, *(TknDataEvent **)(v85 + v6->m_nameIndexMap._List._Mypair._Myval2._Mysize));
      v3->m_pDatas[*(int *)(*(_QWORD *)(v85 + v6->m_nameIndexMap._List._Mypair._Myval2._Mysize) + 8i64)] = v86;
      ++v84;
      v85 += 8i64;
    }
    while ( v84 < SLODWORD(v6->m_nameIndexMap._List._Mypair._Myval2._Myhead) );
  }
  v87 = 0;
  if ( SLODWORD(v6->m_loadedResidentSound._Ptr) > 0 )
  {
    v88 = 0i64;
    do
    {
      v132 = (TknDataLight *)operator new(0x88ui64);
      TknDataLight::TknDataLight(v132, (TknDataLight *)v6->m_preloadedAudioWeakTable._Mypair._Myval2._Myfirst[v88]);
      v132->__vftable = (TknDataLight_vtbl *)&BSDataLight::`vftable';
      v3->m_pDatas[SLODWORD(v6->m_preloadedAudioWeakTable._Mypair._Myval2._Myfirst[v88]->m_weakRef)] = v132;
      ++v87;
      ++v88;
    }
    while ( v87 < SLODWORD(v6->m_loadedResidentSound._Ptr) );
  }
  v89 = 0;
  if ( SLODWORD(v6->m_preloadedAudioWeakTable._Mypair._Myval2._Mylast) > 0 )
  {
    v90 = 0i64;
    do
    {
      v133 = (TknDataEffect *)operator new(0x40ui64);
      TknDataEffect::TknDataEffect(v133, (TknDataEffect *)v6->m_preloadedAudioWeakTable._Mypair._Myval2._Myend[v90]);
      v133->__vftable = (TknDataEffect_vtbl *)&BSDataEffect::`vftable';
      v3->m_pDatas[SLODWORD(v6->m_preloadedAudioWeakTable._Mypair._Myval2._Myend[v90]->m_weakRef)] = v133;
      ++v89;
      ++v90;
    }
    while ( v89 < SLODWORD(v6->m_preloadedAudioWeakTable._Mypair._Myval2._Mylast) );
  }
  v91 = 0;
  if ( *(int *)v6[1].m_bankFileDir._Mypair._Myval2._Bx._Buf > 0 )
  {
    v92 = 0i64;
    do
    {
      v134 = (TknDataBillboard *)operator new(0x78ui64);
      TknDataBillboard::TknDataBillboard(
        v134,
        *(TknDataBillboard **)(v92 + *(_QWORD *)&v6[1].m_bankFileDir._Mypair._Myval2._Bx._Alias[8]));
      v134->__vftable = (TknDataBillboard_vtbl *)&BSDataBillboard::`vftable';
      v134[1].__vftable = 0i64;
      v3->m_pDatas[*(int *)(*(_QWORD *)(v92 + *(_QWORD *)&v6[1].m_bankFileDir._Mypair._Myval2._Bx._Alias[8]) + 8i64)] = v134;
      ++v91;
      v92 += 8i64;
    }
    while ( v91 < *(_DWORD *)v6[1].m_bankFileDir._Mypair._Myval2._Bx._Buf );
  }
  v93 = 0;
  v135 = 0;
  if ( *(int *)v6[1].m_bankFileName._Mypair._Myval2._Bx._Buf > 0 )
  {
    v94 = 0i64;
    do
    {
      v95 = (TknData *)operator new(0x48ui64);
      v96 = *(_QWORD *)(*(_QWORD *)&v6[1].m_bankFileName._Mypair._Myval2._Bx._Alias[8] + v94);
      v95->__vftable = (TknData_vtbl *)&TknData::`vftable';
      v95->m_uniqueID = *(_DWORD *)(v96 + 8);
      v95->m_parentUniqueID = *(_DWORD *)(v96 + 12);
      v95->m_dataType = *(_DWORD *)(v96 + 16);
      v97 = *(_BYTE **)(v96 + 24);
      if ( v97 )
      {
        v99 = -1i64;
        do
          ++v99;
        while ( v97[v99] );
        if ( (int)v99 >= 0 )
        {
          v100 = (int)v99 + 1;
          v98 = operator new[](v100);
          memmove(v98, v97, v100);
          v93 = v135;
        }
        else
        {
          v98 = 0i64;
        }
      }
      else
      {
        v98 = 0i64;
      }
      v95->m_pUserName = (const char *)v98;
      v95->__vftable = (TknData_vtbl *)&TknDataEventSound::`vftable';
      LODWORD(v95[1].__vftable) = *(_DWORD *)(v96 + 32);
      HIDWORD(v95[1].__vftable) = *(_DWORD *)(v96 + 36);
      v95[1].m_uniqueID = *(_DWORD *)(v96 + 40);
      v95[1].m_parentUniqueID = *(_DWORD *)(v96 + 44);
      v101 = *(_BYTE **)(v96 + 48);
      if ( v101 )
      {
        v103 = -1i64;
        do
          ++v103;
        while ( v101[v103] );
        if ( (int)v103 >= 0 )
        {
          v104 = (int)v103 + 1;
          v102 = operator new[](v104);
          memmove(v102, v101, v104);
          v93 = v135;
        }
        else
        {
          v102 = 0i64;
        }
      }
      else
      {
        v102 = 0i64;
      }
      *(_QWORD *)&v95[1].m_dataType = v102;
      LODWORD(v95[1].m_pUserName) = *(_DWORD *)(v96 + 56);
      BYTE4(v95[1].m_pUserName) = *(_BYTE *)(v96 + 60);
      LODWORD(v95[2].__vftable) = *(_DWORD *)(v96 + 64);
      v95->__vftable = (TknData_vtbl *)&BSDataEventSound::`vftable';
      v3 = this;
      this->m_pDatas[*(int *)(*(_QWORD *)(*(_QWORD *)&v6[1].m_bankFileName._Mypair._Myval2._Bx._Alias[8] + v94) + 8i64)] = v95;
      v135 = ++v93;
      v94 += 8i64;
    }
    while ( v93 < *(_DWORD *)v6[1].m_bankFileName._Mypair._Myval2._Bx._Buf );
  }
  Myres_low = SLODWORD(v6->m_bankFileDir._Mypair._Myval2._Myres);
  v3->m_SceneTriggerCount = Myres_low;
  v106 = 8 * Myres_low;
  if ( !is_mul_ok(Myres_low, 8ui64) )
    v106 = -1i64;
  v3->m_pSceneTriggers = (BSDataSceneTrigger **)operator new[](v106);
  v107 = 0;
  if ( v3->m_SceneTriggerCount > 0 )
  {
    v108 = 0i64;
    do
    {
      v119 = (TknDataEventConditions *)operator new(0x70ui64);
      TknDataEventConditions::TknDataEventConditions(
        v119,
        *(TknDataEventConditions **)&v6->m_bankFileName._Mypair._Myval2._Bx._Ptr[v108 * 8]);
      v119->__vftable = (TknDataEventConditions_vtbl *)&BSDataSceneTrigger::`vftable';
      v119[1].__vftable = 0i64;
      v3->m_pDatas[*(int *)(*(_QWORD *)&v6->m_bankFileName._Mypair._Myval2._Bx._Ptr[v108 * 8] + 8i64)] = v119;
      v3->m_pSceneTriggers[v108] = (BSDataSceneTrigger *)v119;
      ++v107;
      ++v108;
    }
    while ( v107 < v3->m_SceneTriggerCount );
  }
  if ( v3->m_dataCount > 0 )
  {
    v109 = 0i64;
    do
    {
      m_pDatas = v3->m_pDatas;
      v111 = m_pDatas[v109];
      if ( v111 )
      {
        switch ( v111->m_dataType )
        {
          case DATATYPE_SCENE:
            BattleStageResourceContainer::setupDataScene(v3, v111);
            break;
          case DATATYPE_EVENT_CONDITION:
            *(_QWORD *)&v111[3].m_uniqueID = m_pDatas[SLODWORD(v111[1].__vftable)];
            break;
          case DATATYPE_MODEL:
            BattleStageResourceContainer::setupDataModel(v3, v111);
            break;
          case DATATYPE_MOTION:
            BattleStageResourceContainer::setupDataMotion(v3, v111);
            break;
          case DATATYPE_OBJECT:
            if ( HIDWORD(v111[1].__vftable) == 1 )
              v111[6].m_pUserName = (const char *)m_pDatas[v111[2].m_parentUniqueID];
            break;
          case DATATYPE_EVENT:
            BattleStageResourceContainer::setupDataEvent(v3, v111);
            break;
          case DATATYPE_EVENT_MODEL_ANIMATION:
            m_parentUniqueID = v111[1].m_parentUniqueID;
            if ( (_DWORD)m_parentUniqueID )
              *(_QWORD *)&v111[2].m_uniqueID = m_pDatas[m_parentUniqueID];
            if ( LODWORD(v111[2].__vftable) )
              *(_QWORD *)&v111[2].m_dataType = v3->m_pDatas[SLODWORD(v111[2].__vftable)];
            break;
          case DATATYPE_EVENT_EFFECT_ANIMATION:
            m_uniqueID = v111[1].m_uniqueID;
            if ( (_DWORD)m_uniqueID )
              *(_QWORD *)&v111[1].m_dataType = m_pDatas[m_uniqueID];
            break;
          case DATATYPE_BILLBOARD:
            m_pUserName_low = SLODWORD(v111[1].m_pUserName);
            if ( (_DWORD)m_pUserName_low )
              *(_QWORD *)&v111[3].m_dataType = m_pDatas[m_pUserName_low];
            break;
          case DATATYPE_EVENT_BILLBOARD_ANIMATION:
            v115 = v111[1].m_parentUniqueID;
            if ( (_DWORD)v115 )
              *(_QWORD *)&v111[2].m_uniqueID = m_pDatas[v115];
            break;
          default:
            break;
        }
      }
      ++v9;
      ++v109;
    }
    while ( v9 < v3->m_dataCount );
  }
  BattleStageResourceContainer::dataCompatibleConvert(v3, *(_DWORD *)v6->m_bankFileDir._Mypair._Myval2._Bx._Buf);
  v3->m_bActived = 1;
  m_ptr = stageModels->m_body.m_ptr;
  if ( m_ptr )
  {
LABEL_169:
    if ( !_InterlockedDecrement64((volatile signed __int64 *)&m_ptr->m_refCount.m_ptr->m_sharedCount) )
      ((void (__fastcall *)(extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body *, __int64))m_ptr->~RefCountableWeakSupportBase)(
        m_ptr,
        1i64);
  }
  return 1;
}

std::string *__fastcall std::ostringstream::str(std::ostringstream *this, std::string *result)
{
  std::stringbuf::str((std::stringbuf *)&this->gap0[8], result);
  return result;
}

std::string *__fastcall std::stringbuf::str(std::stringbuf *this, std::string *result)
{
  int Mystate; // edx
  char *v4; // r9
  char *Seekhigh; // r8
  char **IPfirst; // rax
  const char *v7; // rdx
  unsigned __int64 v8; // r8
  char *Ptr; // rcx
  char *v10; // rax
  char *v11; // rdx
  char *v12; // r8
  char *v13; // rdx
  std::string _Right; // [rsp+28h] [rbp-30h] BYREF

  Mystate = this->_Mystate;
  if ( (Mystate & 2) != 0 || (v4 = *this->_IPnext) == 0i64 )
  {
    if ( (Mystate & 4) != 0 || (v11 = *this->_IGnext) == 0i64 )
    {
      _Right._Mypair._Myval2._Myres = 15i64;
      _Right._Mypair._Myval2._Mysize = 0i64;
      _Right._Mypair._Myval2._Bx._Buf[0] = 0;
      result->_Mypair._Myval2._Myres = 15i64;
      result->_Mypair._Myval2._Mysize = 0i64;
      result->_Mypair._Myval2._Bx._Buf[0] = 0;
      std::string::_Assign_rv(result, &_Right);
      if ( _Right._Mypair._Myval2._Myres >= 0x10 )
      {
        Ptr = _Right._Mypair._Myval2._Bx._Ptr;
        if ( _Right._Mypair._Myval2._Myres + 1 >= 0x1000 )
        {
          if ( (_Right._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
            invalid_parameter_noinfo_noreturn();
          v10 = (char *)*((_QWORD *)_Right._Mypair._Myval2._Bx._Ptr - 1);
          if ( v10 >= _Right._Mypair._Myval2._Bx._Ptr )
            invalid_parameter_noinfo_noreturn();
          if ( (char *)(_Right._Mypair._Myval2._Bx._Ptr - v10) < (char *)8 )
            invalid_parameter_noinfo_noreturn();
          if ( (char *)(_Right._Mypair._Myval2._Bx._Ptr - v10) > (char *)0x27 )
            invalid_parameter_noinfo_noreturn();
          goto LABEL_27;
        }
        goto LABEL_28;
      }
    }
    else
    {
      v12 = &v11[*this->_IGcount];
      v13 = *this->_IGfirst;
      _Right._Mypair._Myval2._Myres = 15i64;
      _Right._Mypair._Myval2._Mysize = 0i64;
      _Right._Mypair._Myval2._Bx._Buf[0] = 0;
      std::string::assign(&_Right, v13, v12 - v13);
      result->_Mypair._Myval2._Myres = 15i64;
      result->_Mypair._Myval2._Mysize = 0i64;
      result->_Mypair._Myval2._Bx._Buf[0] = 0;
      std::string::_Assign_rv(result, &_Right);
      if ( _Right._Mypair._Myval2._Myres >= 0x10 )
      {
        Ptr = _Right._Mypair._Myval2._Bx._Ptr;
        if ( _Right._Mypair._Myval2._Myres + 1 >= 0x1000 )
        {
          if ( (_Right._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
            invalid_parameter_noinfo_noreturn();
          v10 = (char *)*((_QWORD *)_Right._Mypair._Myval2._Bx._Ptr - 1);
          if ( v10 >= _Right._Mypair._Myval2._Bx._Ptr )
            invalid_parameter_noinfo_noreturn();
          if ( (char *)(_Right._Mypair._Myval2._Bx._Ptr - v10) < (char *)8 )
            invalid_parameter_noinfo_noreturn();
          if ( (char *)(_Right._Mypair._Myval2._Bx._Ptr - v10) > (char *)0x27 )
            invalid_parameter_noinfo_noreturn();
          goto LABEL_27;
        }
LABEL_28:
        operator delete(Ptr);
      }
    }
  }
  else
  {
    Seekhigh = this->_Seekhigh;
    IPfirst = this->_IPfirst;
    if ( Seekhigh < v4 )
      Seekhigh = *this->_IPnext;
    v7 = *IPfirst;
    v8 = Seekhigh - *IPfirst;
    _Right._Mypair._Myval2._Myres = 15i64;
    _Right._Mypair._Myval2._Mysize = 0i64;
    _Right._Mypair._Myval2._Bx._Buf[0] = 0;
    std::string::assign(&_Right, v7, v8);
    result->_Mypair._Myval2._Myres = 15i64;
    result->_Mypair._Myval2._Mysize = 0i64;
    result->_Mypair._Myval2._Bx._Buf[0] = 0;
    std::string::_Assign_rv(result, &_Right);
    if ( _Right._Mypair._Myval2._Myres >= 0x10 )
    {
      Ptr = _Right._Mypair._Myval2._Bx._Ptr;
      if ( _Right._Mypair._Myval2._Myres + 1 >= 0x1000 )
      {
        if ( (_Right._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
          invalid_parameter_noinfo_noreturn();
        v10 = (char *)*((_QWORD *)_Right._Mypair._Myval2._Bx._Ptr - 1);
        if ( v10 >= _Right._Mypair._Myval2._Bx._Ptr )
          invalid_parameter_noinfo_noreturn();
        if ( (char *)(_Right._Mypair._Myval2._Bx._Ptr - v10) < (char *)8 )
          invalid_parameter_noinfo_noreturn();
        if ( (char *)(_Right._Mypair._Myval2._Bx._Ptr - v10) > (char *)0x27 )
          invalid_parameter_noinfo_noreturn();
LABEL_27:
        Ptr = v10;
        goto LABEL_28;
      }
      goto LABEL_28;
    }
  }
  return result;
}

std::string *__fastcall extension::FutureStageOption::stringize(
        extension::FutureStageOption *this,
        std::string *result)
{
  std::ostream *v4; // rax
  std::ostringstream v6; // [rsp+30h] [rbp-F8h] BYREF

  std::ostringstream::ostringstream(&v6, (int)result);
  v4 = std::operator<<<std::char_traits<char>>(&v6, "stageBasePath=");
  std::operator<<<char>(v4, &this->basePath);
  std::ostringstream::str(&v6, result);
  std::ostringstream::~ostringstream((std::ostringstream *)&v6.gap80[8]);
  *(_QWORD *)&v6.gap80[8] = &std::ios_base::`vftable';
  std::ios_base::_Ios_base_dtor((std::ios_base *)&v6.gap80[8]);
  return result;
}

