#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlehud.h"
#include "dev/kof/master/development/source/baseproject/jni/game/define/charabonedefine.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_hash.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battleeventhandler.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/colorholder.h"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/damagesetting.h"
#include "dev/silverware/git/sdk/agmemorystream.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "dev/silverware/git/sdk/agmemorypool.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix4x4.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/battleplayerinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixpool.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_typeinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shader.h"
#include "dev/silverware/git/sdk/util/agservice.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/easingnumber.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/errorchecker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_sgmlparser.h"
#include "dev/silverware/git/sdk/agthreadpool.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actionblackout.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_context.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector2unaligned.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_constants.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleonlinewatching.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessgen.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treeshape.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessellator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmodel.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/cpusequencedataformat.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_functions.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglcurve.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/refcountable.h"
#include "dev/silverware/git/sdk/agconditionvariable.inl"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleloading.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/shot/actorshot.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actorchara.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/commandcheck.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/restrictringbuffer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitivebundle.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xfacet"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treecachenode.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/materialshowcontrol.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treenode.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_loader.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xiosbase"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cacheeffect.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_system.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphfitter.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglsprite.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocale"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/syncmenuimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefile.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steam_api_internal.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_ps4modelroom.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/moviedatadefine.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_player.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/stdexcept"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_fontman.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charahitrectformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_types.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglrender.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/exception"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/type_traits"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_fontlib.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_resource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/silverware/git/sdk/aghash.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/mediamanager.h"
#include "dev/silverware/git/sdk/agstringutils.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglfog.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglbone.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstddef"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_renderer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_stroker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/dds_imagefile.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/audiopresenter.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/map"
#include "dev/silverware/git/sdk/agcondition.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_new.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtree"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestageresourcecontainer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textmeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/input/imesystem.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steam_api.h"
#include "dev/silverware/git/sdk/input/agcontrollercomponent.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/boolinvec.h"
#include "dev/silverware/git/sdk/agreferencedobjectinl.h"
#include "program files (x86)/windows kits/8.1/include/um/propidl.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestageshader.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actor.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphparam.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xxatomic"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charadataunify.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcache.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/math.h"
#include "dev/silverware/git/sdk/util/agdelegate.h"
#include "dev/silverware/git/sdk/agdisplay.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/unordered_map"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaattackdataformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcacheconfig.h"
#include "dev/silverware/git/sdk/agreferencedobject.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charadamagesettingformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hairliner.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xhash"
#include "dev/silverware/git/sdk/filesystem/agfile.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/list"
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
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocaddr.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmirror.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector3unaligned.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_radixtree.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdatalistmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_twips.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectcommon.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_containers.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/system_error"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstring"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_drawtext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_wwhelper.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/mediasound.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory0"
#include "dev/silverware/git/sdk/agvector4.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocinfo"
#include "dev/silverware/git/sdk/agvector3.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exlockable.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/combomissiondataformat.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/sounddata.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/soundgroupdataformat.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/effect.h"
#include "dev/kof/master/development/source/baseproject/jni/game/network/playtogether.h"
#include "dev/silverware/git/sdk/3rdparty/steam/matchmakingtypes.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/vec_aos.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_bank.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/boolinvec.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thr/xthread"
#include "program files (x86)/windows kits/8.1/include/shared/winerror.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_vertex.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/debug/logging.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/fontprovider/render_fontproviderhud.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_wstring.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglshader.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/heapmemory.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/vectormath_aos.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/shaderfxhelper.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/randommt.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/functional"
#include "dev/silverware/git/sdk/agreferencecount.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/effect/actoreffect.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actorobject.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/mutex.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/silverware/git/sdk/agpointer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/savedata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/deque"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actoroption.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/cameracheck.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/globalheapmemory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/string"
#include "dev/kof/master/development/source/baseproject/jni/game/check/freecameracheck.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/fixmemory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threadcheck.h"
#include "dev/silverware/git/sdk/agcondition.inl"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/array"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleonline.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textlayout.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_image.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/ios"
#include "program files (x86)/windows kits/8.1/include/shared/stralign.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdata/effectdata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/algorithm"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocnum"
#include "dev/kof/master/development/source/baseproject/jni/game/data/savedatadefine.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/chartdata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogleffect.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/texstring.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "dev/kof/master/development/source/baseproject/jni/game/cpuseq/battlecpu.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdata/effectappdata.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_movie.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/mat_aos.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/baseproject/jni/game/cpuseq/sequencecontroller.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_operation.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogllight.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_exception.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/bitset"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thread"
#include "dev/kof/master/development/source/ps4project/baseproject/pcutil/pccontrolsmanager.h"
#include "dev/silverware/git/sdk/agthread.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/memory"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/limits"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_prefightfaceoff.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/translate_table.h"
#include "dev/silverware/git/sdk/input/aginputmanager.h"
#include "dev/silverware/git/sdk/agmutex.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "dev/silverware/git/sdk/agsingleton.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/shared_lua_context.h"
#include "dev/kof/master/development/source/baseproject/jni/game/system/battlesysteminfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_screentoworld.h"
#include "dev/silverware/git/sdk/util/agservicecommand.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector4unaligned.h"
#include "dev/silverware/git/sdk/agscopedlock.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_strokeraa.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_scale9grid.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exwaitcondition.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraystaticbuff.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steamclientpublic.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/vecidx_aos.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/hidpad/hidpadsystem.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/combomissionjudge.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cxform.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/floatinvec.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/tuple"
#include "dev/kof/master/development/source/baseproject/jni/game/util/soundutil.h"
#include "dev/silverware/git/sdk/util/agdebugchannels.h"
#include "dev/kof/master/development/source/baseproject/jni/game/network/chkdiscononlinesv.h"
#include "dev/silverware/git/sdk/util/agperformancecounter.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/matchingsystem.h"
#include "dev/silverware/git/sdk/agclock.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/variableheapmemorybase.h"
#include "program files (x86)/windows kits/8.1/include/um/winnt.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vector"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic0.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaprojectdataformat.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/quat_aos.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charabasestatusformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_event.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/floatinvec.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/inputkeyrecord.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/png_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_keycodes.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/libcommon.h"
#include "dev/silverware/git/sdk/agreferenceinl.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_hashkey.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshkey.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixstate.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_gradients.h"
#include "dev/silverware/git/sdk/agmovieplayer.h"
#include "dev/kof/master/development/source/ps4project/baseproject/pcutil/pcdummy.h"
#include "program files (x86)/windows kits/8.1/include/shared/guiddef.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlecall/battlecall.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_rasterizer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_viewport.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_vec64.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/time.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "dev/kof/master/development/source/baseproject/jni/game/gfx/gfxmanager.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_debug.h"
#include "dev/silverware/git/sdk/input/agcontroller.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/bodypush.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/physicalheapmemory.h"
#include "dev/silverware/git/sdk/system/aguser.h"
#include "dev/silverware/git/sdk/agreferencecountinl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_drawableimage.h"
#include "dev/silverware/git/sdk/agsemaphore.h"
#include "dev/silverware/git/sdk/input/agcontrollerbuttoncomponent.h"
#include "dev/silverware/git/sdk/agstring.h"
#include "dev/kof/master/development/source/baseproject/jni/game/network/netmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hal.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_buffer.h"
#include "dev/silverware/git/sdk/agsemaphore.inl"
#include "dev/silverware/git/sdk/agconditionvariable.h"
#include "dev/silverware/git/sdk/agstream.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_math.h"
#include "dev/kof/master/development/source/baseproject/jni/game/network/leaderboard.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/condition_variable"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_characterdef.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/vec_aos.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_manager.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/mutex"
#include "dev/silverware/git/sdk/filesystem/agmount.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/chrono"
#include "dev/silverware/git/sdk/filesystem/agdirectory.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xutility"
#include "program files (x86)/windows kits/8.1/include/um/oleauto.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/utility"
#include "dev/kof/master/development/source/baseproject/jni/game/check/operationmapper.h"
#include "dev/silverware/git/sdk/agvector2.h"
#include "program files (x86)/windows kits/8.1/include/um/winuser.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/particledata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filters.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/iosfwd"
#include "dev/kof/master/development/source/baseproject/jni/game/player/weapon/actorweapon.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filterparams.h"
#include "dev/silverware/git/sdk/system/agsysteminfo.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fonttexture.h"
#include "dev/kof/master/development/source/baseproject/jni/game/system/battlecontroller.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphqueue.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/mat_aos.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_font.h"
#include "dev/silverware/git/sdk/agmutex.inl"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actionsystem.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaactiondataformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessdefs.h"
#include "dev/silverware/git/sdk/input/agsdlmappingparser.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestage.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charafilebase.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatapacked.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/tkndata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_pathdatapacker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_linebuffer.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/jobmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_highlight.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloat.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/cameramotionpreviewsettings.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/stageprojectdata.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/commanddataformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_profiler.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exthread.h"
#include "dev/silverware/git/sdk/memory/agallocators.h"
#include "program files (x86)/windows kits/8.1/include/shared/basetsd.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/bilinkable.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_states.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "dev/kof/master/development/source/baseproject/jni/game/appmain.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/tga_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_statebag.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/titlestoragesystem.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/matrix4unaligned.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestagedatas.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/quat_aos.h"
#include "dev/silverware/git/sdk/agpointerinl.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/tkndatas.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_simplemeshcache.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/tween.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/fontprovider/render_fontproviderwinapi.h"
#include "dev/silverware/git/sdk/agmath.h"
#include "dev/silverware/git/sdk/platforms/pc/system/agpcsysteminfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/asynccharafileload.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/future_asset.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/asyncjob.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/resourcemanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_bundle.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/atomic_int.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "dev/silverware/git/sdk/agrectangle.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloatmp.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/atomic"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/hitrectcollection.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapemeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/jpeg_imagefile.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic.h"
#include "program files (x86)/windows kits/8.1/include/um/winbase.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treetext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefileutil.h"
#include "dev/silverware/git/sdk/3rdparty/steam/isteamhtmlsurface.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_missiondataloading.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/trainingsetting.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/combomissionattackeventlistener.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charamaterialsettingformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_docview.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/rapper/graphicsopt.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_sse.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/fix32.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_range.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_types.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actorcharabase.h"
#include "dev/silverware/git/sdk/system/agusermanager.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_drawtext.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/pcdummy.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_renderer.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/appmain.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/core/glstate.cpp"

bool FontTexture::CreateRenderSurface(Font * * pFonts, long fontCount, const char * pText, FontTexture::SurfaceCreateParams * pParams, FontTexture::RenderSurface * pOutRenderSurface); // 0x14022C600
bool FontTexture::Render(const FontTexture::RenderSurface & surface, void * pTextureBuffer, long bufferWidth, long bufferHeight, long renderX, long renderY, unsigned long renderColor); // 0x14022CD70
bool FontTexture::RenderAuroraVision(const FontTexture::RenderSurface & surface, void * pTextureBuffer, long bufferWidth, long bufferHeight, long renderX, long renderY, STAGE_ID stageID); // 0x14022CFC0
class FontTexture::RenderAuroraVision::__l2::<lambda_65690d053132c00f1fb8ade637e3a64f>
{
public:
	long operator()(long);
private:
	static long <lambda_invoker_cdecl>(long);
	typedef char16_t(*<lambda_typedef_cdecl>)(long);
public:
	long(*)(long) operator int (__cdecl *)(int)();
private:
	static long <lambda_invoker_vectorcall>(long);
	typedef char16_t(*<lambda_typedef_vectorcall>)(long);
public:
	long(*)(long) operator int (__vectorcall *)(int)();
	<lambda_65690d053132c00f1fb8ade637e3a64f>(FontTexture::RenderAuroraVision::__l2::<lambda_65690d053132c00f1fb8ade637e3a64f> &);
	<lambda_65690d053132c00f1fb8ade637e3a64f>();
	FontTexture::RenderAuroraVision::__l2::<lambda_65690d053132c00f1fb8ade637e3a64f> & operator=(const FontTexture::RenderAuroraVision::__l2::<lambda_65690d053132c00f1fb8ade637e3a64f> &);
};
const AgDisplayMode fixedAspectRatioModes[72]; // 0x140A5FAB0
std::piecewise_construct_t std::piecewise_construct; // 0x1408A0B47//decompilation failure at 140A5FAB0!
//decompilation failure at 1408A0B47!
char __fastcall FontTexture::CreateRenderSurface(
        Font **pFonts,
        int fontCount,
        const char *pText,
        FontTexture::SurfaceCreateParams *pParams,
        FontTexture::RenderSurface *pOutRenderSurface)
{
  extension::GFXIText *v7; // r14
  unsigned int v8; // edx
  extension::gfxi_detail::TextProxy *v9; // rax
  int v10; // edx
  float v11; // xmm6_4
  extension::gfxi_detail::TextProxy *v12; // rax
  extension::gfxi_detail::TextProxy *v13; // rbx
  Scaleform::GFx::DrawText *pObject; // rcx
  extension::GFXIFontManager *v15; // rax
  Scaleform::Render::Size<float> *HtmlTextExtent; // rax
  float Height; // xmm0_4
  extension::gfxi_detail::TextProxy *v18; // rax
  Scaleform::GFx::DrawText *v19; // rcx
  extension::gfxi_detail::TextProxy *v20; // rax
  _BOOL8 v21; // rdx
  Scaleform::GFx::DrawText *v22; // rcx
  extension::gfxi_detail::TextProxy *v23; // rax
  Scaleform::GFx::DrawText *v24; // rcx
  extension::gfxi_detail::TextProxy *v25; // rax
  Scaleform::GFx::DrawText *v26; // rcx
  extension::gfxi_detail::TextProxy *v27; // rax
  Scaleform::GFx::DrawText *v28; // rcx
  extension::gfxi_detail::TextProxy *v29; // rax
  Scaleform::GFx::DrawText *v30; // rdx
  GLsizei Width; // er13
  GLsizei v32; // esi
  int v33; // edi
  int i; // ebp
  FontTexture::RenderSurface *v35; // rcx
  __int64 v36; // r12
  unsigned int v37; // edx
  Framework::GLManager *v38; // rbx
  extension::GFXIRenderer *v39; // rax
  extension::GFXIRenderer *v40; // rbx
  Scaleform::Render::HAL *v41; // r15
  float v42; // xmm6_4
  extension::GFXIFontManager *v43; // rax
  int v44; // er8
  FontTexture::RenderSurface *v45; // r15
  int v46; // er12
  __int64 v47; // r10
  GLsizei v48; // edx
  char *v49; // r8
  _DWORD *v50; // r9
  extension::gfxi_detail::TextProxy *m_ptr; // rbx
  int v53; // [rsp+50h] [rbp-98h] BYREF
  GLint params; // [rsp+54h] [rbp-94h] BYREF
  extension::GFXIText::FilterParams fp; // [rsp+58h] [rbp-90h] BYREF
  char *v56; // [rsp+80h] [rbp-68h]
  extension::GFXIText *v57; // [rsp+88h] [rbp-60h]
  __int64 v58; // [rsp+90h] [rbp-58h]
  Scaleform::Render::Size<float> result; // [rsp+98h] [rbp-50h] BYREF
  GLboolean v60; // [rsp+F0h] [rbp+8h] BYREF
  int v61; // [rsp+F8h] [rbp+10h]
  extension::gfxi_detail::TextProxy *v62; // [rsp+108h] [rbp+20h]

  v62 = (extension::gfxi_detail::TextProxy *)pParams;
  v61 = fontCount;
  v58 = -2i64;
  v7 = (extension::GFXIText *)operator new(8ui64);
  v57 = v7;
  v62 = (extension::gfxi_detail::TextProxy *)operator new(0xA8ui64);
  extension::gfxi_detail::TextProxy::TextProxy(v62, v8);
  v7->m_body.m_ptr = v9;
  v10 = 80;
  if ( (*pFonts)->m_Size == 20 )
    v10 = 40;
  v11 = (float)v10;
  if ( v9->m_textParams.FontSize != (float)v10 )
  {
    v12 = extension::GFXIText::cloneIfShared(v7);
    extension::gfxi_detail::TextProxy::setFontSize(v12, v11);
  }
  if ( strcmp(
         (const char *)((v7->m_body.m_ptr->m_textParams.FontName.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12),
         "$font_system_chat") )
  {
    v13 = extension::GFXIText::cloneIfShared(v7);
    if ( strcmp(
           (const char *)((v13->m_textParams.FontName.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12),
           "$font_system_chat") )
    {
      Scaleform::String::operator=(&v13->m_textParams.FontName, "$font_system_chat");
      pObject = v13->m_gtext.pObject;
      if ( pObject )
      {
        pObject->SetFont(pObject, "$font_system_chat", 0i64, -1ui64);
        v15 = extension::GFXIFontManager::Instance();
        HtmlTextExtent = extension::gfxi_detail::CustomDrawTextManager::GetHtmlTextExtent(
                           (extension::gfxi_detail::CustomDrawTextManager *)v15->m_drawTextManager.pObject,
                           &result,
                           &v13->m_htmlStr,
                           v13->m_recommendWidth,
                           &v13->m_textParams);
        Height = HtmlTextExtent->Height;
        v13->m_size.Width = HtmlTextExtent->Width;
        v13->m_size.Height = Height;
        extension::gfxi_detail::TextProxy::applyTextRect(v13, v13->m_gtext.pObject);
      }
    }
  }
  *(_QWORD *)&fp.BlurX = 0i64;
  fp.ShadowBlurY = 0.1;
  fp.ShadowBlurX = 0.1;
  fp.ShadowColor = -16777216;
  fp.ShadowAngle = FLOAT_45_0;
  fp.ShadowDistance = 0.1;
  fp.BlurStrength = 0.0;
  fp.ShadowStrength = 0.0;
  extension::GFXIText::setFilterParams(v7, &fp);
  extension::GFXIText::setStr(v7, pText);
  if ( v7->m_body.m_ptr->m_isVisible )
  {
    v18 = extension::GFXIText::cloneIfShared(v7);
    v18->m_isVisible = 0;
    v19 = v18->m_gtext.pObject;
    if ( v19 )
      v19->SetVisible(v19, 0);
  }
  if ( !v7->m_body.m_ptr->m_isVisible )
  {
    v20 = extension::GFXIText::cloneIfShared(v7);
    v20->m_isVisible = 1;
    v22 = v20->m_gtext.pObject;
    if ( v22 )
    {
      LOBYTE(v21) = 1;
      v22->SetVisible(v22, v21);
    }
  }
  if ( v7->m_body.m_ptr->m_recommendWidth != 0.0 )
    extension::GFXIText::cloneIfShared(v7)->m_recommendWidth = 0.0;
  if ( v7->m_body.m_ptr->m_textParams.HAlignment )
  {
    v23 = extension::GFXIText::cloneIfShared(v7);
    v23->m_textParams.HAlignment = Align_BaseLine;
    v24 = v23->m_gtext.pObject;
    if ( v24 )
      v24->SetAlignment(v24, Align_BaseLine);
  }
  if ( v7->m_body.m_ptr->m_textParams.VAlignment )
  {
    v25 = extension::GFXIText::cloneIfShared(v7);
    v25->m_textParams.VAlignment = VAlign_Top;
    v26 = v25->m_gtext.pObject;
    if ( v26 )
      v26->SetVAlignment(v26, VAlign_Top);
  }
  if ( v7->m_body.m_ptr->m_textParams.TextColor.Raw != -1 )
  {
    v27 = extension::GFXIText::cloneIfShared(v7);
    v27->m_textParams.TextColor.Raw = -1;
    v28 = v27->m_gtext.pObject;
    if ( v28 )
    {
      v53 = -1;
      ((void (__fastcall *)(Scaleform::GFx::DrawText *, int *, _QWORD, __int64))v28->SetColor)(v28, &v53, 0i64, -1i64);
    }
  }
  if ( v7->m_body.m_ptr->m_position.x != 0.0 || v7->m_body.m_ptr->m_position.y != 0.0 )
  {
    v29 = extension::GFXIText::cloneIfShared(v7);
    v29->m_position = 0i64;
    v30 = v29->m_gtext.pObject;
    if ( v30 )
      extension::gfxi_detail::TextProxy::applyTextRect(v29, v30);
  }
  Width = (int)v7->m_body.m_ptr->m_size.Width;
  v32 = (int)v7->m_body.m_ptr->m_size.Height;
  v33 = 4;
  for ( i = 4; i < Width; i *= 2 )
    ;
  if ( v32 > 4 )
  {
    do
      v33 *= 2;
    while ( v33 < v32 );
  }
  v56 = (char *)malloc(i * v33);
  v35 = pOutRenderSurface;
  pOutRenderSurface->pBuffer = v56;
  v35->width = i;
  v35->height = v33;
  v35->textWidthSize = Width;
  v35->textHeightSize = v32;
  v35->bufWidthByte = i;
  v36 = *(_QWORD *)&AppMain::pApp;
  glGetIntegerv(0x8CA6u, &params);
  LOBYTE(v61) = glIsEnabled(0xB90u) != 0;
  LOBYTE(v62) = glIsEnabled(0xB71u) != 0;
  glGetBooleanv(0xB72u, &v60);
  v37 = *(_DWORD *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[7][136];
  if ( *(_DWORD *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[7][136] == -1 )
  {
    _glewGenFramebuffers(
      1,
      (unsigned int *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[7][136]);
    v37 = *(_DWORD *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[7][136];
  }
  _glewBindFramebuffer(0x8D40u, v37);
  if ( *(_DWORD *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[7][140] == -1 )
    glGenTextures(
      1,
      (GLuint *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[7][140]);
  v38 = Framework::GLManager::glm;
  Framework::GLManager::glm->m_bOpenGLBlocked = 1;
  glBindTexture(
    0xDE1u,
    *(GLuint *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[7][140]);
  glTexImage2D(0xDE1u, 0, 6408, 2048, *(_DWORD *)(v36 + 32), 0, 0x1908u, 0x1401u, 0i64);
  glTexParameteri(0xDE1u, 0x2800u, 9728);
  glTexParameteri(0xDE1u, 0x2801u, 9728);
  _glewFramebufferTexture(
    0x8D40u,
    0x8CE0u,
    *(unsigned int *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[7][140],
    0);
  _glewBindFramebuffer(
    0x8D40u,
    *(unsigned int *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[7][136]);
  glClearColor(0.0, 0.0, 0.0, 0.0);
  glClear(0x4000u);
  v38->m_bOpenGLBlocked = 0;
  v39 = extension::GFXIRenderer::Instance();
  v40 = v39;
  if ( v39->m_glm )
    v39->m_hal.pObject->EndFrame(v39->m_hal.pObject);
  v41 = v40->m_hal.pObject;
  v42 = globalBrightness;
  LODWORD(globalBrightness) = FLOAT_1_0;
  if ( v40->m_glm )
    v40->m_hal.pObject->BeginFrame(v40->m_hal.pObject);
  if ( _glewPushGroupMarkerEXT )
    _glewPushGroupMarkerEXT(0, "Render Stage Telop");
  if ( _glewPushDebugGroup )
    _glewPushDebugGroup(0x824Au, 1u, 18, "Render Stage Telop");
  ++markerCount;
  v43 = extension::GFXIFontManager::Instance();
  extension::GFXIFontManager::renderDrawTextImmediate(v43, v41, v44);
  if ( _glewPopGroupMarkerEXT )
    _glewPopGroupMarkerEXT();
  if ( _glewPopDebugGroup )
    _glewPopDebugGroup();
  --markerCount;
  if ( v40->m_glm )
    v40->m_hal.pObject->EndFrame(v40->m_hal.pObject);
  globalBrightness = v42;
  v45 = (FontTexture::RenderSurface *)malloc(4 * Width * v32);
  pOutRenderSurface = v45;
  glReadPixels(0, *(_DWORD *)(v36 + 32) - v32 - 1, Width, v32, 0x1908u, 0x1401u, v45);
  _glewBindFramebuffer(0x8D40u, params);
  if ( (_BYTE)v61 && dword_140A96068 != 1 )
  {
    dword_140A96068 = 1;
    glEnable(0xB90u);
  }
  if ( (_BYTE)v62 && dword_140A9606C != 1 )
  {
    dword_140A9606C = 1;
    glEnable(0xB71u);
  }
  glDepthMask(v60);
  if ( v40->m_glm )
    v40->m_hal.pObject->BeginFrame(v40->m_hal.pObject);
  v46 = 0;
  if ( i > 0 )
  {
    v47 = 0i64;
    do
    {
      v48 = 0;
      if ( v33 > 0 )
      {
        v49 = &v56[v47];
        v50 = (_DWORD *)((char *)v45 + 4 * v46 + 4 * Width * (v32 - 1));
        do
        {
          if ( v47 >= Width || v48 >= v32 )
            *v49 = 0;
          else
            *v49 = -(*v50 != 0);
          ++v48;
          v50 -= Width;
          v49 += i;
        }
        while ( v48 < v33 );
      }
      ++v46;
      ++v47;
    }
    while ( v46 < i );
    v7 = v57;
    v45 = pOutRenderSurface;
  }
  free(v45);
  m_ptr = v7->m_body.m_ptr;
  if ( v7->m_body.m_ptr
    && _InterlockedExchangeAdd64((volatile signed __int64 *)m_ptr, 0xFFFFFFFFFFFFFFFFui64) == 1
    && m_ptr )
  {
    extension::gfxi_detail::TextProxy::~TextProxy(m_ptr);
    operator delete(m_ptr, 0xA8ui64);
  }
  operator delete(v7, 8ui64);
  return 1;
}

char __fastcall FontTexture::Render(
        const FontTexture::RenderSurface *surface,
        void *pTextureBuffer,
        int bufferWidth,
        int bufferHeight)
{
  int *v4; // rbx
  int v6; // edx
  int v7; // ecx
  int v8; // edx
  int v9; // ecx
  int height; // eax
  int width; // er11
  unsigned __int8 *pBuffer; // rsi
  __int64 v13; // r15
  __int64 v14; // r14
  __int64 v15; // rbp
  int v16; // er10
  unsigned __int8 *v17; // r8
  int *v18; // r9
  unsigned int v19; // eax
  __int64 v20; // rdi
  int v21; // edx
  int v22; // ecx
  int v23; // edx
  int v24; // ecx
  int v25; // edx
  int v26; // edx
  __int64 v27; // r10
  int v28; // edx

  v4 = (int *)pTextureBuffer;
  if ( !pTextureBuffer )
    return 0;
  v6 = 0;
  v7 = bufferWidth;
  if ( !bufferWidth )
    return 0;
  do
  {
    v6 += v7 & 1;
    v7 >>= 1;
  }
  while ( v7 );
  if ( v6 != 1 )
    return 0;
  v8 = 0;
  v9 = bufferHeight;
  if ( !bufferHeight )
    return 0;
  do
  {
    v8 += v9 & 1;
    v9 >>= 1;
  }
  while ( v9 );
  if ( v8 != 1 || bufferWidth <= 0 || bufferHeight <= 0 )
    return 0;
  height = surface->height;
  width = surface->width;
  pBuffer = (unsigned __int8 *)surface->pBuffer;
  if ( bufferWidth < width )
    width = bufferWidth;
  if ( bufferHeight < height )
    height = bufferHeight;
  if ( height > 0 )
  {
    v13 = surface->width;
    v14 = 4i64 * bufferWidth;
    v15 = (unsigned int)height;
    do
    {
      v16 = 0;
      v17 = pBuffer;
      v18 = v4;
      if ( width >= 4 )
      {
        v19 = ((unsigned int)(width - 4) >> 2) + 1;
        v20 = v19;
        v16 = 4 * v19;
        do
        {
          v21 = *v17;
          v22 = (unsigned __int8)(int)(float)((float)((float)v21 / 255.0) * 255.0);
          *v18 = v22 | ((v22 | ((v22 | (v21 << 8)) << 8)) << 8);
          v23 = v17[1];
          v24 = (unsigned __int8)(int)(float)((float)((float)v23 / 255.0) * 255.0);
          v18[1] = v24 | ((v24 | ((v24 | (v23 << 8)) << 8)) << 8);
          v25 = v17[2];
          v18[2] = (unsigned __int8)(int)(float)((float)((float)v25 / 255.0) * 255.0) | (((unsigned __int8)(int)(float)((float)((float)v25 / 255.0) * 255.0) | (((unsigned __int8)(int)(float)((float)((float)v25 / 255.0) * 255.0) | (v25 << 8)) << 8)) << 8);
          v26 = v17[3];
          v17 += 4;
          v18[3] = (unsigned __int8)(int)(float)((float)((float)v26 / 255.0) * 255.0) | (((unsigned __int8)(int)(float)((float)((float)v26 / 255.0) * 255.0) | (((unsigned __int8)(int)(float)((float)((float)v26 / 255.0) * 255.0) | (v26 << 8)) << 8)) << 8);
          v18 += 4;
          --v20;
        }
        while ( v20 );
      }
      if ( v16 < width )
      {
        v27 = (unsigned int)(width - v16);
        do
        {
          v28 = *v17;
          ++v18;
          ++v17;
          *(v18 - 1) = (unsigned __int8)(int)(float)((float)((float)v28 / 255.0) * 255.0) | (((unsigned __int8)(int)(float)((float)((float)v28 / 255.0) * 255.0) | (((unsigned __int8)(int)(float)((float)((float)v28 / 255.0) * 255.0) | (v28 << 8)) << 8)) << 8);
          --v27;
        }
        while ( v27 );
      }
      pBuffer += v13;
      v4 = (int *)((char *)v4 + v14);
      --v15;
    }
    while ( v15 );
  }
  return 1;
}

char __fastcall FontTexture::RenderAuroraVision(
        const FontTexture::RenderSurface *surface,
        void *pTextureBuffer,
        int bufferWidth,
        int bufferHeight,
        int renderX,
        int renderY)
{
  __int64 v6; // r14
  int v7; // er12
  unsigned int *v8; // rbx
  int v11; // ecx
  int v12; // edx
  int v13; // ecx
  int v14; // edx
  float v15; // xmm12_4
  float v16; // xmm13_4
  int textHeightSize; // er15
  float v18; // xmm12_4
  char *pBuffer; // rcx
  float v20; // xmm11_4
  float v21; // xmm6_4
  float v22; // xmm0_4
  int v23; // edi
  int v24; // eax
  int v25; // ecx
  int v26; // eax
  __int64 v27; // r15
  int v28; // edi
  float v29; // xmm0_4
  int v30; // edx
  int v31; // er11
  __int64 v32; // r15
  __int64 v33; // r8
  __int64 v34; // r12
  int v35; // eax
  int v36; // er9
  int v37; // eax
  char *v38; // rcx
  int v39; // esi
  int v40; // edi
  int v41; // er10
  int v42; // edx
  int v43; // er8
  int v44; // er14
  int v45; // er14
  unsigned int *v46; // r15
  __int64 v47; // r12
  unsigned int *v48; // r8
  char *v49; // r11
  int v50; // er9
  __int64 v51; // r10
  unsigned int v52; // ecx
  int v53; // er11
  int v54; // er13
  __int64 v55; // r12
  _DWORD *v56; // r9
  int v57; // ebx
  int v58; // er8
  unsigned int *v59; // r9
  int v60; // eax
  int v61; // ecx
  int v62; // eax
  unsigned int *v63; // r15
  float v64; // xmm7_4
  char *v65; // r14
  unsigned int *v66; // r10
  bool v67; // si
  float v68; // xmm8_4
  int v69; // edi
  int v70; // er12
  int v71; // er9
  float v72; // xmm3_4
  float v73; // xmm4_4
  float v74; // xmm5_4
  float v75; // xmm6_4
  unsigned int v76; // edx
  float v77; // xmm2_4
  int v78; // eax
  int v79; // er8
  int v80; // ecx
  float v81; // xmm2_4
  float v82; // xmm1_4
  unsigned int v83; // edx
  int v84; // eax
  int v85; // ecx
  float v86; // xmm2_4
  float v87; // xmm1_4
  unsigned int v88; // edx
  int v89; // eax
  int v90; // ecx
  float v91; // xmm2_4
  float v92; // xmm1_4
  unsigned int v93; // edx
  int v94; // eax
  int v95; // ecx
  float v96; // xmm1_4
  unsigned int v97; // edx
  float v98; // xmm2_4
  int v99; // eax
  int v100; // ecx
  float v101; // xmm1_4
  unsigned int *v102; // r8
  float v103; // xmm2_4
  float v104; // xmm4_4
  float v105; // xmm5_4
  unsigned int v106; // er9
  unsigned int v107; // er10
  __int64 v108; // r11
  int i; // esi
  __int64 v110; // rax
  int v111; // er11
  unsigned __int8 v112; // [rsp+20h] [rbp-E0h]
  unsigned __int8 v113; // [rsp+21h] [rbp-DFh]
  unsigned __int8 v114; // [rsp+22h] [rbp-DEh]
  int v115; // [rsp+24h] [rbp-DCh]
  int v116; // [rsp+28h] [rbp-D8h]
  int v117; // [rsp+28h] [rbp-D8h]
  int v119; // [rsp+30h] [rbp-D0h]
  int v120; // [rsp+30h] [rbp-D0h]
  int v121; // [rsp+34h] [rbp-CCh]
  int v122; // [rsp+38h] [rbp-C8h]
  int v123; // [rsp+3Ch] [rbp-C4h]
  int textWidthSize; // [rsp+40h] [rbp-C0h]
  __int64 v125; // [rsp+48h] [rbp-B8h]
  unsigned int *v126; // [rsp+48h] [rbp-B8h]
  int v127; // [rsp+50h] [rbp-B0h]
  int bufWidthByte; // [rsp+54h] [rbp-ACh]
  __int64 v130; // [rsp+60h] [rbp-A0h]
  int v131; // [rsp+68h] [rbp-98h]
  int v132; // [rsp+6Ch] [rbp-94h]
  __int64 v133; // [rsp+70h] [rbp-90h]
  char *v134; // [rsp+78h] [rbp-88h]
  unsigned int *v135; // [rsp+80h] [rbp-80h]
  __int64 v136; // [rsp+88h] [rbp-78h]
  int v138[16]; // [rsp+A0h] [rbp-60h] BYREF
  int renderXa; // [rsp+1F0h] [rbp+F0h]

  v6 = bufferWidth;
  v7 = bufferHeight;
  v8 = (unsigned int *)pTextureBuffer;
  if ( !pTextureBuffer )
    return 0;
  v11 = bufferWidth;
  v12 = 0;
  if ( !bufferWidth )
    return 0;
  do
  {
    v12 += v11 & 1;
    v11 >>= 1;
  }
  while ( v11 );
  if ( v12 != 1 )
    return 0;
  v13 = bufferHeight;
  v14 = 0;
  if ( !bufferHeight )
    return 0;
  do
  {
    v14 += v13 & 1;
    v13 >>= 1;
  }
  while ( v13 );
  if ( v14 != 1 )
    return 0;
  if ( bufferWidth <= 22 || (int)abs32(renderX) >= bufferHeight )
    return 0;
  v15 = FLOAT_0_627451;
  v16 = FLOAT_0_88;
  v114 = 34;
  v113 = 104;
  v112 = 68;
  v115 = 50;
  if ( renderY != 13 )
  {
    if ( renderY == 15 )
    {
      v16 = FLOAT_0_95999998;
      v114 = -121;
      v113 = -91;
      v112 = -14;
      v115 = 88;
    }
    else
    {
      if ( renderY )
        goto LABEL_18;
      v114 = 65;
      v113 = -105;
      v112 = -123;
    }
    v15 = FLOAT_0_25882354;
    goto LABEL_18;
  }
  v16 = FLOAT_0_66000003;
  v114 = 47;
  v113 = -111;
  v112 = 95;
LABEL_18:
  textHeightSize = surface->textHeightSize;
  v18 = v15 * 0.33329999;
  textWidthSize = surface->textWidthSize;
  bufWidthByte = surface->bufWidthByte;
  pBuffer = (char *)surface->pBuffer;
  v138[0] = 0;
  v138[1] = 202116102;
  v138[2] = 268763136;
  v138[3] = 606348304;
  v138[4] = 605029632;
  v138[5] = 858993444;
  v138[6] = 606343168;
  v138[7] = 1077952563;
  v138[8] = 858001414;
  v138[9] = 1465337920;
  v138[10] = 1077093388;
  v138[11] = 2054838088;
  v138[12] = 1077093388;
  v138[13] = -1265730985;
  v138[14] = 1077093388;
  v138[15] = -1263240617;
  v132 = textHeightSize;
  v134 = pBuffer;
  v20 = fmaxf(1.0, (float)textWidthSize / (float)(bufferWidth - 43));
  v21 = (float)textWidthSize / v20;
  v22 = ceilf((float)(v21 + 43.0) * 0.33333334);
  v23 = (int)v22;
  v24 = renderX;
  if ( renderX < 0 )
    v24 = 0;
  v25 = v24 + textHeightSize + 21;
  v26 = v7;
  if ( v7 >= v25 )
    v26 = v25;
  v123 = (int)v22;
  v27 = v6;
  v133 = v6;
  v122 = (int)ceilf((float)v26 * 0.33333334);
  v135 = &v8[v6 + (int)v6 * (v7 - v122) - (__int64)v23];
  v28 = 3 * bufWidthByte;
  v29 = ceilf(v21 * 0.33333334);
  v30 = 1;
  v116 = 1;
  v31 = (int)v29;
  if ( v122 - 1 > 1 )
  {
    v32 = v28;
    v136 = v28;
    v33 = v28;
    v125 = v28;
    v34 = (int)(float)(v20 * 3.0);
    v35 = v122 - 1;
    do
    {
      v127 = 0;
      v36 = 0;
      if ( v31 > 0 )
      {
        v37 = 0;
        v119 = 0;
        do
        {
          v38 = &v134[(int)(float)((float)v37 * v20) + v33];
          if ( *v38 || *(v38 - 1) || v38[1] )
          {
            v39 = (int)(float)((float)v36 + 7.3333335);
            v131 = v39;
            v40 = v39;
            v41 = v39;
            v42 = (int)(float)((float)((float)renderX * 0.33333334) + (float)v30);
            v43 = v42;
            v44 = v42;
            if ( v36 <= 0 || !v38[-v34] )
            {
              v40 = v39 - 7;
              if ( v39 - 7 < 0 )
                v40 = 0;
            }
            if ( v31 - 1 <= v36 || !v38[v34] )
            {
              v39 += 7;
              if ( v123 < v39 )
                v39 = v123;
            }
            if ( !v38[-v32] )
            {
              v43 = v42 - 7;
              if ( v42 - 7 < 0 )
                v43 = 0;
            }
            if ( !v38[v32] )
            {
              v42 += 7;
              if ( v122 < v42 )
                v42 = v122;
            }
            if ( v43 <= v42 )
            {
              v45 = v44 - v43;
              v46 = &v135[v40 + (__int64)(v43 * (int)v133)];
              v47 = (unsigned int)(v42 - v43 + 1);
              do
              {
                v48 = v46;
                v49 = (char *)v138 + (int)(8 * (7 - abs32(v45)));
                if ( v40 <= v39 )
                {
                  v50 = v41 - v40;
                  v51 = (unsigned int)(v39 - v40 + 1);
                  do
                  {
                    if ( v48 >= v8 && v48 < v8 + 0x8000 )
                    {
                      v52 = (unsigned __int8)v49[7 - abs32(v50)];
                      if ( *v48 > v52 )
                        v52 = *v48;
                      *v48 = v52;
                    }
                    ++v48;
                    --v50;
                    --v51;
                  }
                  while ( v51 );
                  v41 = v131;
                }
                --v45;
                v46 += v133;
                --v47;
              }
              while ( v47 );
              v36 = v127;
              v31 = (int)v29;
              v32 = v136;
              v34 = (int)(float)(v20 * 3.0);
            }
            v33 = v125;
            v30 = v116;
          }
          ++v36;
          v37 = v119 + 3;
          v127 = v36;
          v119 += 3;
        }
        while ( v36 < v31 );
        v35 = v122 - 1;
      }
      ++v30;
      v33 += v32;
      v116 = v30;
      v125 = v33;
    }
    while ( v30 < v35 );
    LODWORD(v6) = bufferWidth;
    v27 = v133;
    v7 = bufferHeight;
  }
  v53 = v7 - 1;
  v54 = 1;
  v117 = v7 - 1;
  v120 = 1;
  if ( v7 - 1 > 1 )
  {
    v55 = 4 * v27;
    v56 = v8 + 1;
    v57 = v122;
    v58 = v6 - 1;
    v59 = &v56[v27];
    v60 = -renderX;
    renderXa = -renderX;
    v121 = v6 - 1;
    v130 = 4 * v27;
    v126 = v59;
    do
    {
      v61 = v60 + v54;
      v62 = 0;
      v63 = v59;
      if ( v61 >= 0 )
        v62 = v61;
      v64 = (float)v54 * 0.33333334;
      v65 = &v134[bufWidthByte * v62];
      v66 = &v135[bufferWidth * (int)v64];
      v67 = v61 >= 0 && v61 < v132;
      if ( v54 == 3 * (v54 / 3u) )
        v68 = v16;
      else
        v68 = *(float *)&FLOAT_1_0;
      v69 = 1;
      if ( v58 > 1 )
      {
        if ( v58 > 4 )
        {
          v70 = v58 - 3;
          v71 = 2;
          v72 = (float)v123;
          v73 = (float)v112;
          v74 = (float)v113;
          v75 = (float)v114;
          do
          {
            v76 = 0;
            v77 = (float)v69 * 0.33333334;
            if ( v72 >= v77 && (float)v122 > v64 )
              v76 = (int)(float)((float)(int)(v66[v77] + v66[(float)(v77 + 0.33333334)] + v66[(float)(v77 - 0.33333334)])
                               * v18);
            if ( v67 && v69 > 22 )
            {
              v78 = (int)(float)((float)(v71 - 23) * v20);
              if ( v78 < textWidthSize && (unsigned __int8)v65[v78] > v76 )
                v76 = (unsigned __int8)v65[v78];
            }
            v79 = v115;
            v80 = 255;
            if ( v76 + v115 < 0xFF )
              v80 = v76 + v115;
            v81 = (float)v71 * 0.33333334;
            v82 = (float)(int)(float)((float)v80 * v68) * 0.0038999999;
            *v63 = (unsigned __int8)(int)(float)(v82 * v75) | (((unsigned __int8)(int)(float)(v82 * v74) | ((unsigned __int8)(int)(float)(v82 * v73) << 8)) << 8) | 0xFF000000;
            v83 = 0;
            if ( v72 >= v81 && (float)v122 > v64 )
            {
              v79 = v115;
              v83 = (int)(float)((float)(int)(v66[v81] + v66[(float)(v81 + 0.33333334)] + v66[(float)(v81 - 0.33333334)])
                               * v18);
            }
            if ( v67 && v71 > 22 )
            {
              v84 = (int)(float)((float)(v71 - 22) * v20);
              if ( v84 < textWidthSize && (unsigned __int8)v65[v84] > v83 )
                v83 = (unsigned __int8)v65[v84];
            }
            v85 = 255;
            if ( v83 + v79 < 0xFF )
              v85 = v83 + v79;
            v86 = (float)(v71 + 1) * 0.33333334;
            v87 = (float)(int)(float)((float)v85 * v68) * 0.0038999999;
            v63[1] = (unsigned __int8)(int)(float)(v87 * v75) | (((unsigned __int8)(int)(float)(v87 * v74) | ((unsigned __int8)(int)(float)(v87 * v73) << 8)) << 8) | 0xFF000000;
            v88 = 0;
            if ( v72 >= v86 && (float)v122 > v64 )
            {
              v79 = v115;
              v88 = (int)(float)((float)(int)(v66[v86] + v66[(float)(v86 + 0.33333334)] + v66[(float)(v86 - 0.33333334)])
                               * v18);
            }
            if ( v67 && v71 + 1 > 22 )
            {
              v89 = (int)(float)((float)(v71 - 21) * v20);
              if ( v89 < textWidthSize && (unsigned __int8)v65[v89] > v88 )
                v88 = (unsigned __int8)v65[v89];
            }
            v90 = 255;
            if ( v88 + v79 < 0xFF )
              v90 = v88 + v79;
            v91 = (float)(v71 + 2) * 0.33333334;
            v92 = (float)(int)(float)((float)v90 * v68) * 0.0038999999;
            v63[2] = (unsigned __int8)(int)(float)(v92 * v75) | (((unsigned __int8)(int)(float)(v92 * v74) | ((unsigned __int8)(int)(float)(v92 * v73) << 8)) << 8) | 0xFF000000;
            v93 = 0;
            if ( v72 >= v91 && (float)v122 > v64 )
            {
              v79 = v115;
              v93 = (int)(float)((float)(int)(v66[v91] + v66[(float)(v91 + 0.33333334)] + v66[(float)(v91 - 0.33333334)])
                               * v18);
            }
            if ( v67 && v71 + 2 > 22 )
            {
              v94 = (int)(float)((float)(v71 - 20) * v20);
              if ( v94 < textWidthSize && (unsigned __int8)v65[v94] > v93 )
                v93 = (unsigned __int8)v65[v94];
            }
            v95 = 255;
            if ( v93 + v79 < 0xFF )
              v95 = v93 + v79;
            v69 += 4;
            v71 += 4;
            v96 = (float)(int)(float)((float)v95 * v68) * 0.0038999999;
            v63[3] = (unsigned __int8)(int)(float)(v96 * v75) | (((unsigned __int8)(int)(float)(v96 * v74) | ((unsigned __int8)(int)(float)(v96 * v73) << 8)) << 8) | 0xFF000000;
            v63 += 4;
          }
          while ( v69 < v70 );
          v54 = v120;
          v58 = v121;
          v59 = v126;
          v53 = v117;
          v55 = v130;
          v57 = v122;
        }
        if ( v69 < v58 )
        {
          do
          {
            v97 = 0;
            v98 = (float)v69 * 0.33333334;
            if ( (float)v123 >= v98 && (float)v57 > v64 )
            {
              v58 = v121;
              v97 = (int)(float)((float)(int)(v66[v98] + v66[(float)(v98 + 0.33333334)] + v66[(float)(v98 - 0.33333334)])
                               * v18);
            }
            if ( v67 && v69 > 22 )
            {
              v99 = (int)(float)((float)(v69 - 22) * v20);
              if ( v99 < textWidthSize && (unsigned __int8)v65[v99] > v97 )
                v97 = (unsigned __int8)v65[v99];
            }
            v100 = 255;
            if ( v97 + v115 < 0xFF )
              v100 = v97 + v115;
            ++v69;
            v101 = (float)(int)(float)((float)v100 * v68) * 0.0038999999;
            *v63++ = (unsigned __int8)(int)(float)(v101 * (float)v114) | (((unsigned __int8)(int)(float)(v101 * (float)v113) | ((unsigned __int8)(int)(float)(v101 * (float)v112) << 8)) << 8) | 0xFF000000;
          }
          while ( v69 < v58 );
          v59 = v126;
          v53 = v117;
          v55 = v130;
        }
      }
      v60 = renderXa;
      ++v54;
      v59 = (unsigned int *)((char *)v59 + v55);
      v120 = v54;
      v126 = v59;
    }
    while ( v54 < v53 );
    v8 = (unsigned int *)pTextureBuffer;
    v7 = bufferHeight;
  }
  v102 = v8;
  v103 = (float)v112;
  v104 = (float)v113;
  v105 = (float)v114;
  v106 = (unsigned __int8)(int)(float)((float)((float)v115 / 255.0) * v105) | (((unsigned __int8)(int)(float)((float)((float)v115 / 255.0) * v104) | ((unsigned __int8)(int)(float)((float)((float)v115 / 255.0) * v103) << 8)) << 8) | 0xFF000000;
  v107 = (unsigned __int8)(int)(float)((float)((float)((float)v115 * v16) / 255.0) * v105) | (((unsigned __int8)(int)(float)((float)((float)((float)v115 * v16) / 255.0) * v104) | ((unsigned __int8)(int)(float)((float)((float)((float)v115 * v16) / 255.0) * v103) << 8)) << 8) | 0xFF000000;
  if ( v7 > 0 )
  {
    v108 = bufferWidth - 1;
    for ( i = 0; i < v7; ++i )
    {
      if ( i == 3 * (i / 3u) )
      {
        v102[v108] = v107;
        *v102 = v107;
      }
      else
      {
        v102[v108] = v106;
        *v102 = v106;
      }
      v102 += v133;
    }
    v53 = v117;
  }
  v110 = (unsigned int)bufferWidth;
  if ( bufferWidth > 0 )
  {
    v111 = bufferWidth * v53;
    do
    {
      v8[v111] = v106;
      *v8++ = v106;
      --v110;
    }
    while ( v110 );
  }
  return 1;
}

