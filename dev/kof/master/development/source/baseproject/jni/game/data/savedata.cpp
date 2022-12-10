#include "dev/kof/master/development/source/ps4project/baseproject/extension/asyncjob.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/resourcemanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_bundle.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/steamnamecache.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/atomic_int.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "dev/silverware/git/sdk/agrectangle.h"
#include "program files (x86)/windows kits/8.1/include/um/shobjidl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloatmp.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/atomic"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/hitrectcollection.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapemeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/jpeg_imagefile.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic.h"
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
#include "program files (x86)/windows kits/8.1/include/um/winbase.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/fix32.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_range.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_types.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actorcharabase.h"
#include "dev/silverware/git/sdk/system/agusermanager.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlehud.h"
#include "dev/kof/master/development/source/baseproject/jni/game/define/charabonedefine.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_hash.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battleeventhandler.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/colorholder.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
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
#include "program files (x86)/windows kits/8.1/include/um/propkeydef.h"
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
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charahitrectformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_types.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglrender.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/exception"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/type_traits"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_resource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/silverware/git/sdk/aghash.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/mediamanager.h"
#include "dev/silverware/git/sdk/agstringutils.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglfog.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglbone.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstddef"
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
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestageshader.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actor.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphparam.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xxatomic"
#include "program files (x86)/windows kits/8.1/include/um/propsys.h"
#include "program files (x86)/windows kits/8.1/include/um/commctrl.h"
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
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_radixtree.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdatalistmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_twips.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectcommon.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_containers.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/system_error"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstring"
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
#include "dev/silverware/git/sdk/agvector2.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/vec_aos.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_bank.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/boolinvec.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thr/xthread"
#include "program files (x86)/windows kits/8.1/include/um/oleauto.h"
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
#include "dev/kof/master/development/source/baseproject/jni/game/appmain.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threadcheck.h"
#include "dev/silverware/git/sdk/agcondition.inl"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/array"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleonline.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textlayout.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_image.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/ios"
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
#include "dev/silverware/git/sdk/agmath.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
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
#include "dev/kof/master/development/source/baseproject/jni/game/data/gamedatainfo.h"
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
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vector"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic0.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaprojectdataformat.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/quat_aos.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charabasestatusformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_event.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/floatinvec.h"
#include "program files (x86)/windows kits/8.1/include/um/winnt.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/inputkeyrecord.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/png_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_keycodes.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
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
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlecall/battlecall.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_rasterizer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_viewport.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_vec64.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/time.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_debug.h"
#include "dev/silverware/git/sdk/input/agcontroller.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/bodypush.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/physicalheapmemory.h"
#include "dev/silverware/git/sdk/system/aguser.h"
#include "dev/silverware/git/sdk/agreferencecountinl.h"
#include "program files (x86)/windows kits/8.1/include/shared/guiddef.h"
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
#include "program files (x86)/windows kits/8.1/include/um/winuser.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_characterdef.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/vec_aos.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_manager.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/mutex"
#include "dev/silverware/git/sdk/filesystem/agmount.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/chrono"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/silverware/git/sdk/filesystem/agdirectory.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xutility"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/utility"
#include "dev/kof/master/development/source/baseproject/jni/game/check/operationmapper.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/particledata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filters.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/iosfwd"
#include "dev/kof/master/development/source/baseproject/jni/game/player/weapon/actorweapon.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filterparams.h"
#include "dev/silverware/git/sdk/system/agsysteminfo.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/asyncsavedata.h"
#include "dev/kof/master/development/source/baseproject/jni/game/system/battlecontroller.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphqueue.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/mat_aos.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/exutil.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_font.h"
#include "dev/silverware/git/sdk/agmutex.inl"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actionsystem.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaactiondataformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessdefs.h"
#include "dev/silverware/git/sdk/input/agsdlmappingparser.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/keyvaluetable.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestage.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charafilebase.h"
#include "program files (x86)/windows kits/8.1/include/um/shlobj.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatapacked.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/tkndata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_pathdatapacker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_linebuffer.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/jobmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_highlight.h"
#include "program files (x86)/windows kits/8.1/include/um/propidl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloat.h"
#include "program files (x86)/windows kits/8.1/include/shared/winerror.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/cameramotionpreviewsettings.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/stageprojectdata.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/commanddataformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_profiler.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exthread.h"
#include "dev/silverware/git/sdk/memory/agallocators.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/bilinkable.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_states.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/tga_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_statebag.h"
#include "program files (x86)/windows kits/8.1/include/um/combaseapi.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/titlestoragesystem.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/matrix4unaligned.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestagedatas.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/quat_aos.h"
#include "program files (x86)/windows kits/8.1/include/shared/stralign.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/8.1/include/shared/basetsd.h"
#include "dev/silverware/git/sdk/agpointerinl.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/tkndatas.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_simplemeshcache.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/tween.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/fontprovider/render_fontproviderwinapi.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/silverware/git/sdk/platforms/pc/system/agpcsysteminfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/easyindicator.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/asynccharafileload.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/future_asset.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/kof/master/development/source/ps4project/baseproject/ag/kofanticheat.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/data/onlinesavedata.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/rtc.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/data/saveplayerdata.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/check/operationmapper.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/achievementcommonpc.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/achievementsystem.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/data/gamedatainfo.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/asyncsavedata.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/keyvaluetable.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/system/battlecontroller.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/check/inputkeyrecord.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/util/easyindicator.cpp"

struct std::pair<char const *,enum LANGUAGE_MODE>
{
	struct _Myt;
	typedef const char first_type;
	enum second_type
	{
		LANGUAGE_MODE_ja_JP = 0,
		LANGUAGE_MODE_en_US = 1,
		LANGUAGE_MODE_zh_CN = 2,
		LANGUAGE_MODE_zh_TW = 3,
		LANGUAGE_MODE_ko_KR = 4,
		LANGUAGE_MODE_fr_FR = 5,
		LANGUAGE_MODE_it_IT = 6,
		LANGUAGE_MODE_de_DE = 7,
		LANGUAGE_MODE_es_ES = 8,
		LANGUAGE_MODE_es_MX = 9,
		LANGUAGE_MODE_pt_BR = 10,
		LANGUAGE_MODE_pt_PT = 11,
		LANGUAGE_MODE_ru_RU = 12,
		LANGUAGE_MODE_MAX = 13,
	};
	pair<char const *,enum LANGUAGE_MODE>(std::pair<char const *,enum LANGUAGE_MODE> &);
	std::pair<char const *,enum LANGUAGE_MODE> & operator=(const std::pair<char const *,enum LANGUAGE_MODE> &);
	std::pair<char const *,enum LANGUAGE_MODE> & operator=(std::pair<char const *,enum LANGUAGE_MODE> &);
	const char * first; // 0x0
	LANGUAGE_MODE second; // 0x8
	void swap(std::pair<char const *,enum LANGUAGE_MODE> &);
};
struct std::pair<char const *,enum AiLevelSpec>
{
	struct _Myt;
	typedef const char first_type;
	enum second_type
	{
		AiLevel_VeryEasy = 0,
		AiLevel_Easy = 1,
		AiLevel_Normal = 2,
		AiLevel_Hard = 3,
		AiLevel_VeryHard = 4,
		AiLevel_Max = 5,
	};
	pair<char const *,enum AiLevelSpec>(std::pair<char const *,enum AiLevelSpec> &);
	std::pair<char const *,enum AiLevelSpec> & operator=(const std::pair<char const *,enum AiLevelSpec> &);
	std::pair<char const *,enum AiLevelSpec> & operator=(std::pair<char const *,enum AiLevelSpec> &);
	const char * first; // 0x0
	AiLevelSpec second; // 0x8
	void swap(std::pair<char const *,enum AiLevelSpec> &);
};
struct std::pair<char const *,enum FighterOperationMapper::MapKey>
{
	struct _Myt;
	typedef const char first_type;
	enum second_type
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
	pair<char const *,enum FighterOperationMapper::MapKey>(std::pair<char const *,enum FighterOperationMapper::MapKey> &);
	std::pair<char const *,enum FighterOperationMapper::MapKey> & operator=(const std::pair<char const *,enum FighterOperationMapper::MapKey> &);
	std::pair<char const *,enum FighterOperationMapper::MapKey> & operator=(std::pair<char const *,enum FighterOperationMapper::MapKey> &);
	const char * first; // 0x0
	FighterOperationMapper::MapKey second; // 0x8
	void swap(std::pair<char const *,enum FighterOperationMapper::MapKey> &);
};
struct std::pair<char const *,enum FighterOperationMapper::Mapped>
{
	struct _Myt;
	typedef const char first_type;
	enum second_type
	{
		Mapped_Unused = 0,
		Mapped_LP = 1,
		Mapped_LK = 2,
		Mapped_HK = 3,
		Mapped_HP = 4,
		Mapped_HP_LP = 5,
		Mapped_LP_LK = 6,
		Mapped_LK_HK = 7,
		Mapped_HK_HP = 8,
		Mapped_LP_HK = 9,
		Mapped_LK_HP = 10,
		Mapped_REC = 11,
		Mapped_PLAY = 12,
		Mapped_REPEAT = 13,
		Mapped_L = 14,
		Mapped_D = 15,
		Mapped_R = 16,
		Mapped_U = 17,
		Mapped_Internal_Use_Upper_Limit = 18,
	};
	pair<char const *,enum FighterOperationMapper::Mapped>(std::pair<char const *,enum FighterOperationMapper::Mapped> &);
	std::pair<char const *,enum FighterOperationMapper::Mapped> & operator=(const std::pair<char const *,enum FighterOperationMapper::Mapped> &);
	std::pair<char const *,enum FighterOperationMapper::Mapped> & operator=(std::pair<char const *,enum FighterOperationMapper::Mapped> &);
	const char * first; // 0x0
	FighterOperationMapper::Mapped second; // 0x8
	void swap(std::pair<char const *,enum FighterOperationMapper::Mapped> &);
};
enum `anonymous-namespace'::<unnamed-enum-SAVE_GAMESTARTUP>
{
	SAVE_GAMESTARTUP = 0,
	SAVE_NETWORK_FIRST_BOOT = 1,
	SAVE_OPPONENT_NAME = 2,
	SAVE_OPPONENT_TICK = 3,
	SAVE_OPPONENT_BATTLEWINNUM = 4,
	SAVE_OPPONENT_BATTLELOSENUM = 5,
	SAVE_OPPONENT_BATTLEDRAWNUM = 6,
	SAVE_OPPONENT_TRAININGNUM = 7,
	SAVE_OPPONENT_FRIEND = 8,
	SAVE_GALLERY_FLAG = 9,
	SAVE_GALLERY_NEW_FLAG = 10,
	SAVE_1ON1_CHARACTER = 11,
	SAVE_1ON1_CHARACTER_COLOR = 12,
	SAVE_3ON3_CHARACTER = 13,
	SAVE_3ON3_CHARACTER_COLOR = 14,
	SAVE_FIGHTINGLIST_ONLINEID = 15,
	SAVE_FIGHTINGLIST_DATE = 16,
	SAVE_FIGHTINGLIST_ICON = 17,
	SAVE_FIGHTINGLIST_CHARACTER = 18,
	SAVE_FIGHTINGLIST_RESULT = 19,
	SAVE_FIGHTINGLIST_GAMEMODE = 20,
	SAVE_FIGHTINGLIST_GAMERULE = 21,
	SAVE_FIGHTINGLIST_MYPLAYERID = 22,
	SAVE_FIGHTINGLIST_MYPLAYERINDEX = 23,
	SAVE_FIGHTINGLIST_ENEMYPLAYERID = 24,
	SAVE_FIGHTINGLIST_ENEMYPLAYERINDEX = 25,
	SAVE_FIGHTINGLIST_FIGHTBONUS = 26,
	SAVE_FIGHTINGLIST_MYDISCONNECTLV = 27,
	SAVE_FIGHTINGLIST_ENEMYDISCONNECTLV = 28,
	SAVE_PLAYER_TITLE_BATTLE_NUM = 29,
	SAVE_PLAYER_TITLE_FLAG = 30,
	SAVE_PLAYER_TITLE_NEW_FLAG = 31,
	SAVE_RESTART = 32,
	SAVE_ACTION = 33,
	SAVE_GUARD = 34,
	SAVE_COUNTER = 35,
	SAVE_ATTACK = 36,
	SAVE_UKEMI = 37,
	SAVE_KEYDATA = 38,
	SAVE_ATTACKDATA = 39,
	SAVE_POWERGAUGE_1P = 40,
	SAVE_POWERGAUGE_2P = 41,
	SAVE_MAXMODEGAUGE_1P = 42,
	SAVE_MAXMODEGAUGE_2P = 43,
	SAVE_GUARDGAUGE_1P = 44,
	SAVE_GUARDGAUGE_2P = 45,
	SAVE_STUN_1P = 46,
	SAVE_STUN_2P = 47,
	SAVE_RECORD_MODE = 48,
	SAVE_REVERSAL_TYPE = 49,
	SAVE_RECORD_SLOT = 50,
	SAVE_PLAY_SLOT = 51,
	SAVE_GAMEPROGRESSKEY_MAX = 52,
};
struct `anonymous-namespace'::MySaveDataTraits<SaveRecord_Replay>
{
	static const char fileName[0]; // 0xFFFFFFFFFFFFFFFF
	static const char titleText[0]; // 0xFFFFFFFFFFFFFFFF
	static const char fsName[0]; // 0xFFFFFFFFFFFFFFFF
	static const unsigned long long fsSizeLimit; // 0xFFFFFFFFFFFFFFFF
	static const unsigned long progressOption; // 0xFFFFFFFFFFFFFFFF
	static const char * getSubTitleText(LANGUAGE_MODE);
};
struct `anonymous-namespace'::MySaveDataTraits<SaveRecord_Main>
{
	static const char fileName[0]; // 0xFFFFFFFFFFFFFFFF
	static const char titleText[0]; // 0xFFFFFFFFFFFFFFFF
	static const char fsName[0]; // 0xFFFFFFFFFFFFFFFF
	static const unsigned long long fsSizeLimit; // 0xFFFFFFFFFFFFFFFF
	static const unsigned long progressOption; // 0xFFFFFFFFFFFFFFFF
	static const char * getSubTitleText(LANGUAGE_MODE);
};
class `anonymous-namespace'::MyAsyncSaveDataManager
{
private:
	MyAsyncSaveDataManager();
	MyAsyncSaveDataManager(const `anonymous-namespace'::MyAsyncSaveDataManager &);
	`anonymous-namespace'::MyAsyncSaveDataManager & operator=(`anonymous-namespace'::MyAsyncSaveDataManager &);
	`anonymous-namespace'::MyAsyncSaveDataState<SaveRecord_Main> m_stateMain; // 0x0
	`anonymous-namespace'::MyAsyncSaveDataState<SaveRecord_Replay> m_stateReplay; // 0x28
public:
	static `anonymous-namespace'::MyAsyncSaveDataManager & Instance();
	void loadStartAll();
	bool isLoadReady();
	bool isLoadFinished();
	void saveStart(const SaveRecord_Replay &);
	void saveStart(const SaveRecord_Main &);
	bool isSaveReady();
	void updateDataLoaded(SaveRecord_Replay &);
	bool updateDataLoaded(SaveRecord_Main &);
	void updateDataSaved();
	~MyAsyncSaveDataManager();
};
class `anonymous-namespace'::MyAsyncSaveDataState<SaveRecord_Main>
{
public:
	MyAsyncSaveDataState<SaveRecord_Main>();
private:
	MyAsyncSaveDataState<SaveRecord_Main>(const `anonymous-namespace'::MyAsyncSaveDataState<SaveRecord_Main> &);
	`anonymous-namespace'::MyAsyncSaveDataState<SaveRecord_Main> & operator=(`anonymous-namespace'::MyAsyncSaveDataState<SaveRecord_Main> &);
	extension::FutureSaveData m_futureForLoad; // 0x0
	extension::FutureSaveData m_futureForSave; // 0x10
	static extension::AsyncSaveDataStorage::DataOption MakeDataOption(LANGUAGE_MODE);
	bool m_firstLoad; // 0x20
public:
	void loadStart(LANGUAGE_MODE);
	bool isLoadReady();
	bool isLoadFinished();
	std::string updateDataLoaded(SaveRecord_Main &);
	void saveStart(const SaveRecord_Main &);
	bool isSaveReady();
	void updateDataSaved();
	~MyAsyncSaveDataState<SaveRecord_Main>();
};
class `anonymous-namespace'::MyAsyncSaveDataState<SaveRecord_Replay>
{
public:
	MyAsyncSaveDataState<SaveRecord_Replay>();
private:
	MyAsyncSaveDataState<SaveRecord_Replay>(const `anonymous-namespace'::MyAsyncSaveDataState<SaveRecord_Replay> &);
	`anonymous-namespace'::MyAsyncSaveDataState<SaveRecord_Replay> & operator=(`anonymous-namespace'::MyAsyncSaveDataState<SaveRecord_Replay> &);
	extension::FutureSaveData m_futureForLoad; // 0x0
	extension::FutureSaveData m_futureForSave; // 0x10
	static extension::AsyncSaveDataStorage::DataOption MakeDataOption(LANGUAGE_MODE);
	bool m_firstLoad; // 0x20
public:
	void loadStart(LANGUAGE_MODE);
	bool isLoadReady();
	bool isLoadFinished();
	std::string updateDataLoaded(SaveRecord_Replay &);
	void saveStart(const SaveRecord_Replay &);
	bool isSaveReady();
	void updateDataSaved();
	~MyAsyncSaveDataState<SaveRecord_Replay>();
};
SaveRecord_RecordKey::SaveRecord_RecordKey(); // 0x140117110
std::array<AgPointer<AgController>,4>::~array<AgPointer<AgController>,4>(); // 0x140102090
extension::AsyncSaveDataStorage::DataOption::~DataOption(); // 0x14011ACD0
SaveRecord_RecordKey::~SaveRecord_RecordKey(); // 0x140117250
extension::FutureSaveData & extension::FutureSaveData::operator=(const extension::FutureSaveData & __that); // 0x14011AD00
void SaveRecord_RecordKey::CommitRecordKey(); // 0x1401172D0
void SaveRecord_RecordKey::UpdateRecordKey(); // 0x140117470
void SaveRecord_GameProgress::setDefault(); // 0x140117630
void SaveRecord_DisplayOption::setDefaultOption(); // 0x140117710
void SaveRecord_ButtonConfigUser::setDefault(); // 0x1401177E0
void SaveRecord_ButtonConfigUser::setDefaultForUser(USER_ID user); // 0x1401178F0
void SaveRecord_Main::setDefault(); // 0x140117A00
void SaveRecord_Replay::setDefault(); // 0x140117B10
void AppMain::SaveDataFrameUpdate(); // 0x140117BA0
void AppMain::SaveDataAsyncLoad(); // 0x140117F20
bool AppMain::SaveDataIsLoadReady(); // 0x140117FE0
bool AppMain::SaveDataAsyncSave(long onSave); // 0x1401180C0
void AppMain::SaveDataAsyncSaveReplay(); // 0x1401182D0
bool AppMain::SaveDataIsSaveReady(); // 0x140118430
AgPath AppMain::SaveData_GetGraphicsOptionsPath(); // 0x140118510
void AppMain::SaveData_LoadGraphicsOptions(); // 0x140118670
void AppMain::SaveData_SaveGraphicsOptions(); // 0x140118920
FighterOperationMapper AppMain::GetSaveDataKeyConfigMyMapper(USER_ID userindex); // 0x140118B60
FighterOperationMapper AppMain::GetSaveDataKeyConfigUserUID(USER_ID userindex, AgControllerUID contUID); // 0x140118C60
void AppMain::SetSaveDataKeyConfigUserUID(USER_ID userindex, AgControllerUID contUID, const FighterOperationMapper & buttonMap); // 0x140118D50
ANNOUNCE_TYPE AppMain::GetSaveDataMyAnnounceType(PLAYER_ID playerID); // 0x140118E50
void AppMain::CommitSaveDataDisplayGamma(); // 0x140118FE0
NETWORK_TITLE AppMain::UpdateNetworkTitle(bool battleNumUpdateFlag); // 0x140119060
float AppMain::GetNetworkTitleRate(); // 0x140119100
void AppMain::SetNetworkTitleNewFlag(NETWORK_TITLE id, bool flag); // 0x140119160
long AppMain::GetRankMatchDisconnectNum(); // 0x140119240
DISCONNECT_LEVEL AppMain::UpdateDisconnectLevel(); // 0x140119360
long AppMain::GetSaveReplayIndex(); // 0x1401193E0
BattleReplay * AppMain::GetReplaySaveDataSortDownLoadTime(long idx, long * repno); // 0x140119480
bool AppMain::SetReplaySaveData(BattleReplay * pReplay); // 0x1401195D0
bool AppMain::IsEmptyBestReplay(); // 0x140119870
char AppMain::GetEmptyBestReplayPcIdSaveData(); // 0x140119910
void AppMain::SetOpponentList(Fw::ONLINEID * pOnlineId, BATTLE_RESULT_TYPE resultType, GAME_RULE gameMode); // 0x1401199A0
void AppMain::SaveDataLoaded_Patch103(); // 0x140119B60
struct AppMain::SaveDataLoaded_Patch103::__l2::HOOK_TROPHY
{
	GALLERY_ID gallery; // 0x0
	TEAM_ID team; // 0x4
};
const char MySaveDataTraits<SaveRecord_Replay>::titleText[25]; // 0x1409048E8
const char MySaveDataTraits<SaveRecord_Main>::fileName[12]; // 0x140904940
const char MySaveDataTraits<SaveRecord_Replay>::fileName[11]; // 0x140904AD8
const char MySaveDataTraits<SaveRecord_Main>::fsName[5]; // 0x140904AFC
const char MySaveDataTraits<SaveRecord_Replay>::fsName[7]; // 0x140904B4C
const char * STR_DISCONNECTNUM; // 0x14089B538
const char * STR_LASTRANK; // 0x14089B698
const char * STR_RANKCOUNT; // 0x14089B718
const std::pair<char const *,enum AiLevelSpec> my_aiLevelNameTable[20]; // 0x140A5BF90
const char * STR_DISCONNECTRANKCOUNT; // 0x14089BCD8
const char * _GameProgressKey[52]; // 0x14089CA80
const char * STR_DISCONNECTLV; // 0x14089BEC8
const std::pair<char const *,enum LANGUAGE_MODE> my_languageNameTable[52]; // 0x140A5BEC0
LANGUAGE_MODE s_defaultLanguage; // 0x140A2B1BC
const char * STR_RANKWIN; // 0x14089BF68
const char * STR_RANKP; // 0x14089C048
const char * STR_RANKMAXWINS; // 0x14089C288
const char * STR_DRAWP; // 0x14089CC20
const char * STR_LOSEP; // 0x14089CC28
const std::pair<char const *,enum FighterOperationMapper::MapKey> my_buttonMapKeyNameTable[40]; // 0x140A5C100
const char * STR_RANKLOSE; // 0x14089CC30
const char * STR_RANKDRAW; // 0x14089CC38
const char * STR_RANKWINS; // 0x14089CC40
const char * STR_RATEP; // 0x14089CC48
const std::pair<char const *,enum FighterOperationMapper::Mapped> my_buttonMappedNameTable[72]; // 0x140A5BFE0
std::piecewise_construct_t std::piecewise_construct; // 0x14089B496
void AppMain::SaveDataLoaded_Patch105(); // 0x140119C70
void AppMain::SaveDataLoaded_Version0(); // 0x140119D10
void AppMain::SaveDataLoaded_Steam(bool fromSave); // 0x140119E30//decompilation failure at 1409048E8!
//decompilation failure at 140904940!
//decompilation failure at 140904AD8!
//decompilation failure at 140904AFC!
//decompilation failure at 140904B4C!
//decompilation failure at 14089B538!
//decompilation failure at 14089B698!
//decompilation failure at 14089B718!
//decompilation failure at 140A5BF90!
//decompilation failure at 14089BCD8!
//decompilation failure at 14089CA80!
//decompilation failure at 14089BEC8!
//decompilation failure at 140A5BEC0!
//decompilation failure at 140A2B1BC!
//decompilation failure at 14089BF68!
//decompilation failure at 14089C048!
//decompilation failure at 14089C288!
//decompilation failure at 14089CC20!
//decompilation failure at 14089CC28!
//decompilation failure at 140A5C100!
//decompilation failure at 14089CC30!
//decompilation failure at 14089CC38!
//decompilation failure at 14089CC40!
//decompilation failure at 14089CC48!
//decompilation failure at 140A5BFE0!
//decompilation failure at 14089B496!
std::string *__fastcall std::operator+<char>(std::string *result, const char *_Left, std::string *_Right)
{
  unsigned __int64 v4; // r9
  std::string *v5; // rax

  if ( *_Left )
  {
    v4 = -1i64;
    do
      ++v4;
    while ( _Left[v4] );
  }
  else
  {
    v4 = 0i64;
  }
  v5 = std::string::insert(_Right, (unsigned __int64)_Left, _Left, v4);
  result->_Mypair._Myval2._Myres = 15i64;
  result->_Mypair._Myval2._Mysize = 0i64;
  result->_Mypair._Myval2._Bx._Buf[0] = 0;
  std::string::_Assign_rv(result, v5);
  return result;
}

std::_Tree_node<std::pair<AgControllerUID const ,FighterOperationMapper>,void *> *__fastcall std::_Tree_comp_alloc<std::_Tmap_traits<AgControllerUID,FighterOperationMapper,std::less<AgControllerUID>,std::allocator<std::pair<AgControllerUID const,FighterOperationMapper>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<AgControllerUID const &>,std::tuple<>>(
        std::_Tree_comp_alloc<std::_Tmap_traits<AgControllerUID,FighterOperationMapper,std::less<AgControllerUID>,std::allocator<std::pair<AgControllerUID const ,FighterOperationMapper> >,0> > *this,
        const std::piecewise_construct_t *<_Val_0>,
        std::tuple<AgControllerUID const &> *<_Val_1>,
        std::tuple<> *<_Val_2>)
{
  std::_Tree_node<std::pair<AgControllerUID const ,FighterOperationMapper>,void *> *v5; // r9

  v5 = std::_Tree_comp_alloc<std::_Tmap_traits<AgControllerUID,FighterOperationMapper,std::less<AgControllerUID>,std::allocator<std::pair<AgControllerUID const,FighterOperationMapper>>,0>>::_Buynode0(this);
  *(_WORD *)&v5->_Color = 0;
  if ( v5 != (std::_Tree_node<std::pair<AgControllerUID const ,FighterOperationMapper>,void *> *)-28i64 )
  {
    v5->_Myval.first = *<_Val_1>->_Myfirst._Val;
    FighterOperationMapper::reset(&v5->_Myval.second);
  }
  return v5;
}

std::_Tree_node<std::pair<AgControllerUID const ,FighterOperationMapper>,void *> *__fastcall std::_Tree_comp_alloc<std::_Tmap_traits<AgControllerUID,FighterOperationMapper,std::less<AgControllerUID>,std::allocator<std::pair<AgControllerUID const,FighterOperationMapper>>,0>>::_Buynode<AgControllerUID,FighterOperationMapper>(
        std::_Tree_comp_alloc<std::_Tmap_traits<AgControllerUID,FighterOperationMapper,std::less<AgControllerUID>,std::allocator<std::pair<AgControllerUID const ,FighterOperationMapper> >,0> > *this,
        AgControllerUID *<_Val_0>,
        FighterOperationMapper *<_Val_1>)
{
  std::_Tree_node<std::pair<AgControllerUID const ,FighterOperationMapper>,void *> *result; // rax

  result = std::_Tree_comp_alloc<std::_Tmap_traits<AgControllerUID,FighterOperationMapper,std::less<AgControllerUID>,std::allocator<std::pair<AgControllerUID const,FighterOperationMapper>>,0>>::_Buynode0(this);
  *(_WORD *)&result->_Color = 0;
  if ( result != (std::_Tree_node<std::pair<AgControllerUID const ,FighterOperationMapper>,void *> *)-28i64 )
  {
    result->_Myval.first = *<_Val_0>;
    *(_OWORD *)result->_Myval.second.m_mapping = *(_OWORD *)<_Val_1>->m_mapping;
    *(_OWORD *)&result->_Myval.second.m_mapping[4] = *(_OWORD *)&<_Val_1>->m_mapping[4];
    *(_QWORD *)&result->_Myval.second.m_mapping[8] = *(_QWORD *)&<_Val_1>->m_mapping[8];
  }
  return result;
}

std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgControllerUID const ,FighterOperationMapper> > > > *__fastcall std::_Tree<std::_Tmap_traits<AgControllerUID,FighterOperationMapper,std::less<AgControllerUID>,std::allocator<std::pair<AgControllerUID const,FighterOperationMapper>>,0>>::_Insert_at<std::pair<AgControllerUID const,FighterOperationMapper> &,std::_Tree_node<std::pair<AgControllerUID const,FighterOperationMapper>,void *> *>(
        std::_Tree<std::_Tmap_traits<AgControllerUID,FighterOperationMapper,std::less<AgControllerUID>,std::allocator<std::pair<AgControllerUID const ,FighterOperationMapper> >,0> > *this,
        std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgControllerUID const ,FighterOperationMapper> > > > *result,
        bool _Addleft,
        std::_Tree_node<std::pair<AgControllerUID const ,FighterOperationMapper>,void *> *_Wherenode,
        std::pair<AgControllerUID const ,FighterOperationMapper> *_Val,
        std::_Tree_node<std::pair<AgControllerUID const ,FighterOperationMapper>,void *> *_Node)
{
  unsigned __int64 Mysize; // rax
  std::_Tree_node<std::pair<AgControllerUID const ,FighterOperationMapper>,void *> *Myhead; // rax
  std::_Tree_node<std::pair<AgControllerUID const ,FighterOperationMapper>,void *> *v10; // rax
  std::_Tree_node<std::pair<AgControllerUID const ,FighterOperationMapper>,void *> *Parent; // rcx
  std::_Tree_node<std::pair<AgControllerUID const ,FighterOperationMapper>,void *> *v12; // r8
  std::_Tree_node<std::pair<AgControllerUID const ,FighterOperationMapper>,void *> *Left; // rdx
  std::_Tree_node<std::pair<AgControllerUID const ,FighterOperationMapper>,void *> *Right; // rdx
  std::_Tree_node<std::pair<AgControllerUID const ,FighterOperationMapper>,void *> *v15; // rdx
  std::_Tree_node<std::pair<AgControllerUID const ,FighterOperationMapper>,void *> *v16; // rcx
  std::_Tree_node<std::pair<AgControllerUID const ,FighterOperationMapper>,void *> *v17; // rdx
  std::_Tree_node<std::pair<AgControllerUID const ,FighterOperationMapper>,void *> *v18; // r8
  std::_Tree_node<std::pair<AgControllerUID const ,FighterOperationMapper>,void *> *v19; // rcx
  std::_Tree_node<std::pair<AgControllerUID const ,FighterOperationMapper>,void *> *v20; // rcx
  std::_Tree_node<std::pair<AgControllerUID const ,FighterOperationMapper>,void *> *v21; // rdx
  std::_Tree_node<std::pair<AgControllerUID const ,FighterOperationMapper>,void *> *v22; // rcx
  std::_Tree_node<std::pair<AgControllerUID const ,FighterOperationMapper>,void *> *v23; // rcx
  std::_Tree_node<std::pair<AgControllerUID const ,FighterOperationMapper>,void *> *v24; // rcx
  std::_Tree_node<std::pair<AgControllerUID const ,FighterOperationMapper>,void *> *v25; // rax
  std::_Tree_node<std::pair<AgControllerUID const ,FighterOperationMapper>,void *> *v26; // rcx
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgControllerUID const ,FighterOperationMapper> > > > *v27; // rax

  Mysize = this->_Mypair._Myval2._Myval2._Mysize;
  if ( Mysize >= 0x333333333333332i64 )
  {
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

std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgControllerUID const ,FighterOperationMapper> > > > *__fastcall std::_Tree<std::_Tmap_traits<AgControllerUID,FighterOperationMapper,std::less<AgControllerUID>,std::allocator<std::pair<AgControllerUID const,FighterOperationMapper>>,0>>::_Insert_hint<std::pair<AgControllerUID const,FighterOperationMapper> &,std::_Tree_node<std::pair<AgControllerUID const,FighterOperationMapper>,void *> *>(
        std::_Tree<std::_Tmap_traits<AgControllerUID,FighterOperationMapper,std::less<AgControllerUID>,std::allocator<std::pair<AgControllerUID const ,FighterOperationMapper> >,0> > *this,
        std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgControllerUID const ,FighterOperationMapper> > > > *result,
        std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgControllerUID const ,FighterOperationMapper> > > > _Where,
        std::pair<AgControllerUID const ,FighterOperationMapper> *_Val,
        std::_Tree_node<std::pair<AgControllerUID const ,FighterOperationMapper>,void *> *_Newnode)
{
  std::_Tree_node<std::pair<AgControllerUID const ,FighterOperationMapper>,void *> *Myhead; // rax
  bool v10; // r8
  std::pair<AgControllerUID const ,FighterOperationMapper> *p_Myval; // r15
  std::_Tree_node<std::pair<AgControllerUID const ,FighterOperationMapper>,void *> *Ptr; // rax
  std::_Tree_node<std::pair<AgControllerUID const ,FighterOperationMapper>,void *> *Right; // rbx
  std::_Tree_node<std::pair<AgControllerUID const ,FighterOperationMapper>,void *> *j; // rax
  std::_Tree_node<std::pair<AgControllerUID const ,FighterOperationMapper>,void *> *i; // rcx
  std::_Tree_node<std::pair<AgControllerUID const ,FighterOperationMapper>,void *> *v16; // r9
  std::_Tree_node<std::pair<AgControllerUID const ,FighterOperationMapper>,void *> *v17; // rbx
  std::_Tree_node<std::pair<AgControllerUID const ,FighterOperationMapper>,void *> *v18; // rax
  std::_Tree_node<std::pair<AgControllerUID const ,FighterOperationMapper>,void *> *m; // rax
  std::_Tree_node<std::pair<AgControllerUID const ,FighterOperationMapper>,void *> *k; // rax
  std::_Tree_node<std::pair<AgControllerUID const ,FighterOperationMapper>,void *> *v21; // [rsp+20h] [rbp-48h]
  std::pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgControllerUID const ,FighterOperationMapper> > > >,bool> resulta; // [rsp+38h] [rbp-30h] BYREF

  if ( !this->_Mypair._Myval2._Myval2._Mysize )
  {
    std::_Tree<std::_Tmap_traits<AgControllerUID,FighterOperationMapper,std::less<AgControllerUID>,std::allocator<std::pair<AgControllerUID const,FighterOperationMapper>>,0>>::_Insert_at<std::pair<AgControllerUID const,FighterOperationMapper> &,std::_Tree_node<std::pair<AgControllerUID const,FighterOperationMapper>,void *> *>(
      this,
      result,
      1,
      this->_Mypair._Myval2._Myval2._Myhead,
      (std::pair<AgControllerUID const ,FighterOperationMapper> *)v21,
      _Newnode);
    return result;
  }
  Myhead = this->_Mypair._Myval2._Myval2._Myhead;
  if ( _Where._Ptr == this->_Mypair._Myval2._Myval2._Myhead->_Left )
  {
    if ( operator<(&_Val->first, &_Where._Ptr->_Myval.first) )
    {
      std::_Tree<std::_Tmap_traits<AgControllerUID,FighterOperationMapper,std::less<AgControllerUID>,std::allocator<std::pair<AgControllerUID const,FighterOperationMapper>>,0>>::_Insert_at<std::pair<AgControllerUID const,FighterOperationMapper> &,std::_Tree_node<std::pair<AgControllerUID const,FighterOperationMapper>,void *> *>(
        this,
        result,
        1,
        _Where._Ptr,
        (std::pair<AgControllerUID const ,FighterOperationMapper> *)v21,
        _Newnode);
      return result;
    }
    goto LABEL_43;
  }
  if ( _Where._Ptr == Myhead )
  {
    if ( operator<(&Myhead->_Right->_Myval.first, &_Val->first) )
    {
      std::_Tree<std::_Tmap_traits<AgControllerUID,FighterOperationMapper,std::less<AgControllerUID>,std::allocator<std::pair<AgControllerUID const,FighterOperationMapper>>,0>>::_Insert_at<std::pair<AgControllerUID const,FighterOperationMapper> &,std::_Tree_node<std::pair<AgControllerUID const,FighterOperationMapper>,void *> *>(
        this,
        result,
        0,
        this->_Mypair._Myval2._Myval2._Myhead->_Right,
        (std::pair<AgControllerUID const ,FighterOperationMapper> *)v21,
        _Newnode);
      return result;
    }
    goto LABEL_43;
  }
  p_Myval = &_Where._Ptr->_Myval;
  if ( operator<(&_Val->first, &_Where._Ptr->_Myval.first) )
  {
    Ptr = _Where._Ptr;
    if ( _Where._Ptr->_Isnil )
    {
      Right = _Where._Ptr->_Right;
    }
    else
    {
      Right = _Where._Ptr->_Left;
      if ( _Where._Ptr->_Left->_Isnil )
      {
        for ( i = _Where._Ptr->_Parent; !i->_Isnil; i = i->_Parent )
        {
          if ( Ptr != i->_Left )
            break;
          Ptr = i;
        }
        Right = Ptr;
        if ( !Ptr->_Isnil )
          Right = i;
      }
      else
      {
        for ( j = Right->_Right; !j->_Isnil; j = j->_Right )
          Right = j;
      }
    }
    if ( operator<(&Right->_Myval.first, &_Val->first) )
    {
      if ( Right->_Right->_Isnil )
        std::_Tree<std::_Tmap_traits<AgControllerUID,FighterOperationMapper,std::less<AgControllerUID>,std::allocator<std::pair<AgControllerUID const,FighterOperationMapper>>,0>>::_Insert_at<std::pair<AgControllerUID const,FighterOperationMapper> &,std::_Tree_node<std::pair<AgControllerUID const,FighterOperationMapper>,void *> *>(
          this,
          result,
          0,
          Right,
          (std::pair<AgControllerUID const ,FighterOperationMapper> *)v21,
          _Newnode);
      else
        std::_Tree<std::_Tmap_traits<AgControllerUID,FighterOperationMapper,std::less<AgControllerUID>,std::allocator<std::pair<AgControllerUID const,FighterOperationMapper>>,0>>::_Insert_at<std::pair<AgControllerUID const,FighterOperationMapper> &,std::_Tree_node<std::pair<AgControllerUID const,FighterOperationMapper>,void *> *>(
          this,
          result,
          1,
          _Where._Ptr,
          (std::pair<AgControllerUID const ,FighterOperationMapper> *)v21,
          _Newnode);
      return result;
    }
  }
  if ( !operator<(&p_Myval->first, &_Val->first) )
    goto LABEL_43;
  v16 = _Where._Ptr;
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
  if ( v17 == this->_Mypair._Myval2._Myval2._Myhead )
    goto LABEL_39;
  if ( !operator<(&_Val->first, &v17->_Myval.first) )
  {
LABEL_43:
    result->_Ptr = (std::_Tree_node<std::pair<AgControllerUID const ,FighterOperationMapper>,void *> *)std::_Tree<std::_Tmap_traits<AgControllerUID,FighterOperationMapper,std::less<AgControllerUID>,std::allocator<std::pair<AgControllerUID const,FighterOperationMapper>>,0>>::_Insert_nohint<std::pair<AgControllerUID const,FighterOperationMapper> &,std::_Tree_node<std::pair<AgControllerUID const,FighterOperationMapper>,void *> *>(this, &resulta, v10, _Val, _Newnode)->first;
    return result;
  }
  v16 = _Where._Ptr;
LABEL_39:
  if ( v16->_Right->_Isnil )
    std::_Tree<std::_Tmap_traits<AgControllerUID,FighterOperationMapper,std::less<AgControllerUID>,std::allocator<std::pair<AgControllerUID const,FighterOperationMapper>>,0>>::_Insert_at<std::pair<AgControllerUID const,FighterOperationMapper> &,std::_Tree_node<std::pair<AgControllerUID const,FighterOperationMapper>,void *> *>(
      this,
      result,
      0,
      v16,
      (std::pair<AgControllerUID const ,FighterOperationMapper> *)v21,
      _Newnode);
  else
    std::_Tree<std::_Tmap_traits<AgControllerUID,FighterOperationMapper,std::less<AgControllerUID>,std::allocator<std::pair<AgControllerUID const,FighterOperationMapper>>,0>>::_Insert_at<std::pair<AgControllerUID const,FighterOperationMapper> &,std::_Tree_node<std::pair<AgControllerUID const,FighterOperationMapper>,void *> *>(
      this,
      result,
      1,
      v17,
      (std::pair<AgControllerUID const ,FighterOperationMapper> *)v21,
      _Newnode);
  return result;
}

std::pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgControllerUID const ,FighterOperationMapper> > > >,bool> *__fastcall std::_Tree<std::_Tmap_traits<AgControllerUID,FighterOperationMapper,std::less<AgControllerUID>,std::allocator<std::pair<AgControllerUID const,FighterOperationMapper>>,0>>::_Insert_nohint<std::pair<AgControllerUID const,FighterOperationMapper> &,std::_Tree_node<std::pair<AgControllerUID const,FighterOperationMapper>,void *> *>(
        std::_Tree<std::_Tmap_traits<AgControllerUID,FighterOperationMapper,std::less<AgControllerUID>,std::allocator<std::pair<AgControllerUID const ,FighterOperationMapper> >,0> > *this,
        std::pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgControllerUID const ,FighterOperationMapper> > > >,bool> *result,
        bool _Leftish,
        std::pair<AgControllerUID const ,FighterOperationMapper> *_Val,
        std::_Tree_node<std::pair<AgControllerUID const ,FighterOperationMapper>,void *> *_Newnode)
{
  std::_Tree_node<std::pair<AgControllerUID const ,FighterOperationMapper>,void *> *Myhead; // rsi
  std::_Tree_node<std::pair<AgControllerUID const ,FighterOperationMapper>,void *> *Parent; // rbx
  bool v10; // r14
  std::_Tree_node<std::pair<AgControllerUID const ,FighterOperationMapper>,void *> *Right; // rbx
  std::_Tree_node<std::pair<AgControllerUID const ,FighterOperationMapper>,void *> *j; // rax
  std::_Tree_node<std::pair<AgControllerUID const ,FighterOperationMapper>,void *> *i; // rax
  std::pair<AgControllerUID const ,FighterOperationMapper> *v15; // [rsp+20h] [rbp-38h]
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgControllerUID const ,FighterOperationMapper> > > > resulta; // [rsp+60h] [rbp+8h] BYREF

  Myhead = this->_Mypair._Myval2._Myval2._Myhead;
  Parent = this->_Mypair._Myval2._Myval2._Myhead->_Parent;
  v10 = 1;
  while ( !Parent->_Isnil )
  {
    Myhead = Parent;
    v10 = operator<(&_Val->first, &Parent->_Myval.first);
    if ( v10 )
      Parent = Parent->_Left;
    else
      Parent = Parent->_Right;
  }
  Right = Myhead;
  if ( v10 )
  {
    if ( Myhead == this->_Mypair._Myval2._Myval2._Myhead->_Left )
    {
      result->first = (std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgControllerUID const ,FighterOperationMapper> > > >)std::_Tree<std::_Tmap_traits<AgControllerUID,FighterOperationMapper,std::less<AgControllerUID>,std::allocator<std::pair<AgControllerUID const,FighterOperationMapper>>,0>>::_Insert_at<std::pair<AgControllerUID const,FighterOperationMapper> &,std::_Tree_node<std::pair<AgControllerUID const,FighterOperationMapper>,void *> *>(this, &resulta, 1, Myhead, v15, _Newnode)->_Ptr;
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
  if ( operator<(&Right->_Myval.first, &_Val->first) )
  {
    result->first = (std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgControllerUID const ,FighterOperationMapper> > > >)std::_Tree<std::_Tmap_traits<AgControllerUID,FighterOperationMapper,std::less<AgControllerUID>,std::allocator<std::pair<AgControllerUID const,FighterOperationMapper>>,0>>::_Insert_at<std::pair<AgControllerUID const,FighterOperationMapper> &,std::_Tree_node<std::pair<AgControllerUID const,FighterOperationMapper>,void *> *>(this, &resulta, v10, Myhead, v15, _Newnode)->_Ptr;
    result->second = 1;
  }
  else
  {
    operator delete(_Newnode);
    result->first._Ptr = Right;
    result->second = 0;
  }
  return result;
}

std::string *__fastcall std::_Integral_to_string<char,int>(std::string *result, const int _Val)
{
  const char *v2; // r9
  unsigned int v3; // er8
  unsigned int v5; // er8
  char v7[3]; // [rsp+3Dh] [rbp-1Bh] BYREF

  v2 = v7;
  v3 = _Val;
  if ( _Val >= 0 )
  {
    do
    {
      *--v2 = v3 % 0xA + 48;
      v3 /= 0xAu;
    }
    while ( v3 );
  }
  else
  {
    v5 = -_Val;
    do
    {
      *--v2 = v5 % 0xA + 48;
      v5 /= 0xAu;
    }
    while ( v5 );
    *--v2 = 45;
  }
  result->_Mypair._Myval2._Myres = 15i64;
  result->_Mypair._Myval2._Mysize = 0i64;
  result->_Mypair._Myval2._Bx._Buf[0] = 0;
  if ( v2 != v7 )
    std::string::assign(result, v2, v7 - v2);
  return result;
}

std::string *__fastcall std::_Integral_to_string<char,__int64>(std::string *result, const __int64 _Val)
{
  const char *v2; // r9
  unsigned __int64 v3; // r8
  unsigned __int64 v5; // r8
  char v7[3]; // [rsp+3Dh] [rbp-1Bh] BYREF

  v2 = v7;
  v3 = _Val;
  if ( _Val >= 0 )
  {
    do
    {
      *--v2 = v3 % 0xA + 48;
      v3 /= 0xAui64;
    }
    while ( v3 );
  }
  else
  {
    v5 = -_Val;
    do
    {
      *--v2 = v5 % 0xA + 48;
      v5 /= 0xAui64;
    }
    while ( v5 );
    *--v2 = 45;
  }
  result->_Mypair._Myval2._Myres = 15i64;
  result->_Mypair._Myval2._Mysize = 0i64;
  result->_Mypair._Myval2._Bx._Buf[0] = 0;
  if ( v2 != v7 )
    std::string::assign(result, v2, v7 - v2);
  return result;
}

bool __fastcall std::tuple<unsigned char const &,unsigned char const &,unsigned char const &,unsigned char const &,unsigned char const &>::_Less<unsigned char const &,unsigned char const &,unsigned char const &,unsigned char const &,unsigned char const &>(
        std::tuple<unsigned char const &,unsigned char const &,unsigned char const &,unsigned char const &,unsigned char const &> *this,
        const std::tuple<unsigned char const &,unsigned char const &,unsigned char const &,unsigned char const &,unsigned char const &> *_Right)
{
  unsigned __int8 v2; // r8
  unsigned __int8 v3; // r9
  unsigned __int8 v4; // r8
  unsigned __int8 v5; // r9
  unsigned __int8 v6; // r8
  unsigned __int8 v7; // r9
  unsigned __int8 v8; // r8
  unsigned __int8 v9; // r9
  bool result; // al

  v2 = *this->_Myfirst._Val;
  v3 = *_Right->_Myfirst._Val;
  result = 1;
  if ( v2 >= v3 )
  {
    if ( v3 < v2 )
      return 0;
    v4 = *this->std::tuple<unsigned char const &,unsigned char const &,unsigned char const &,unsigned char const &>::_Myfirst._Val;
    v5 = *_Right->std::tuple<unsigned char const &,unsigned char const &,unsigned char const &,unsigned char const &>::_Myfirst._Val;
    if ( v4 >= v5 )
    {
      if ( v5 < v4 )
        return 0;
      v6 = *this->std::tuple<unsigned char const &,unsigned char const &,unsigned char const &,unsigned char const &>::std::tuple<unsigned char const &,unsigned char const &,unsigned char const &>::_Myfirst._Val;
      v7 = *_Right->std::tuple<unsigned char const &,unsigned char const &,unsigned char const &,unsigned char const &>::std::tuple<unsigned char const &,unsigned char const &,unsigned char const &>::_Myfirst._Val;
      if ( v6 >= v7 )
      {
        if ( v7 < v6 )
          return 0;
        v8 = *this->std::tuple<unsigned char const &,unsigned char const &,unsigned char const &,unsigned char const &>::std::tuple<unsigned char const &,unsigned char const &,unsigned char const &>::std::tuple<unsigned char const &,unsigned char const &>::_Myfirst._Val;
        v9 = *_Right->std::tuple<unsigned char const &,unsigned char const &,unsigned char const &,unsigned char const &>::std::tuple<unsigned char const &,unsigned char const &,unsigned char const &>::std::tuple<unsigned char const &,unsigned char const &>::_Myfirst._Val;
        if ( v8 >= v9
          && (v9 < v8
           || *this->std::tuple<unsigned char const &,unsigned char const &,unsigned char const &,unsigned char const &>::std::tuple<unsigned char const &,unsigned char const &,unsigned char const &>::std::tuple<unsigned char const &,unsigned char const &>::std::tuple<unsigned char const &>::_Myfirst._Val >= *_Right->std::tuple<unsigned char const &,unsigned char const &,unsigned char const &,unsigned char const &>::std::tuple<unsigned char const &,unsigned char const &,unsigned char const &>::std::tuple<unsigned char const &,unsigned char const &>::std::tuple<unsigned char const &>::_Myfirst._Val) )
        {
          return 0;
        }
      }
    }
  }
  return result;
}

std::pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgControllerUID const ,FighterOperationMapper> > > >,bool> *__fastcall std::map<AgControllerUID,FighterOperationMapper>::_Try_emplace<AgControllerUID const &,>(
        std::map<AgControllerUID,FighterOperationMapper> *this,
        std::pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgControllerUID const ,FighterOperationMapper> > > >,bool> *result,
        const AgControllerUID *_Keyval,
        std::tuple<> *a4)
{
  std::_Tree_node<std::pair<AgControllerUID const ,FighterOperationMapper>,void *> *Myhead; // rdi
  std::_Tree_node<std::pair<AgControllerUID const ,FighterOperationMapper>,void *> *Parent; // rbx
  std::_Tree_node<std::pair<AgControllerUID const ,FighterOperationMapper>,void *> *_Newnode; // rax
  std::tuple<AgControllerUID const &> v11; // [rsp+50h] [rbp+8h] BYREF

  Myhead = this->_Mypair._Myval2._Myval2._Myhead;
  Parent = this->_Mypair._Myval2._Myval2._Myhead->_Parent;
  while ( !Parent->_Isnil )
  {
    if ( operator<(&Parent->_Myval.first, _Keyval) )
    {
      Parent = Parent->_Right;
    }
    else
    {
      Myhead = Parent;
      Parent = Parent->_Left;
    }
  }
  if ( Myhead == this->_Mypair._Myval2._Myval2._Myhead || operator<(_Keyval, &Myhead->_Myval.first) )
  {
    v11._Myfirst._Val = _Keyval;
    _Newnode = std::_Tree_comp_alloc<std::_Tmap_traits<AgControllerUID,FighterOperationMapper,std::less<AgControllerUID>,std::allocator<std::pair<AgControllerUID const,FighterOperationMapper>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<AgControllerUID const &>,std::tuple<>>(
                 this,
                 (const std::piecewise_construct_t *)result,
                 &v11,
                 a4);
    std::_Tree<std::_Tmap_traits<AgControllerUID,FighterOperationMapper,std::less<AgControllerUID>,std::allocator<std::pair<AgControllerUID const,FighterOperationMapper>>,0>>::_Insert_hint<std::pair<AgControllerUID const,FighterOperationMapper> &,std::_Tree_node<std::pair<AgControllerUID const,FighterOperationMapper>,void *> *>(
      this,
      (std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgControllerUID const ,FighterOperationMapper> > > > *)&v11,
      (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgControllerUID const ,FighterOperationMapper> > > >)Myhead,
      &_Newnode->_Myval,
      _Newnode);
    result->first._Ptr = (std::_Tree_node<std::pair<AgControllerUID const ,FighterOperationMapper>,void *> *)v11._Myfirst._Val;
    result->second = 1;
  }
  else
  {
    result->first._Ptr = Myhead;
    result->second = 0;
  }
  return result;
}

__int64 __fastcall extension::KeyValueTable::getEnum<enum AiLevelSpec,5>(
        extension::KeyValueTable *this,
        const std::string *k,
        const std::pair<char const *,enum AiLevelSpec> (*table)[5],
        AiLevelSpec defaultValue)
{
  std::string *String; // rax
  std::string *Ptr; // r10
  const std::pair<char const *,enum AiLevelSpec> *v6; // r9
  const char *first; // rax
  int v8; // ecx
  int v9; // edx
  unsigned int second; // ebx
  char *v11; // rcx
  char *v12; // rax
  std::string result; // [rsp+20h] [rbp-38h] BYREF

  String = extension::KeyValueTable::getString(this, &result, k);
  Ptr = String;
  if ( String->_Mypair._Myval2._Myres >= 0x10 )
    Ptr = (std::string *)String->_Mypair._Myval2._Bx._Ptr;
  v6 = my_aiLevelNameTable;
  while ( 1 )
  {
    first = v6->first;
    do
    {
      v8 = (unsigned __int8)first[(char *)Ptr - v6->first];
      v9 = *(unsigned __int8 *)first - v8;
      if ( v9 )
        break;
      ++first;
    }
    while ( v8 );
    if ( !v9 )
      break;
    if ( ++v6 == (const std::pair<char const *,enum AiLevelSpec> *)my_buttonMappedNameTable )
    {
      second = 2;
      goto LABEL_11;
    }
  }
  second = v6->second;
LABEL_11:
  if ( result._Mypair._Myval2._Myres >= 0x10 )
  {
    v11 = result._Mypair._Myval2._Bx._Ptr;
    if ( result._Mypair._Myval2._Myres + 1 >= 0x1000 )
    {
      if ( (result._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
        invalid_parameter_noinfo_noreturn();
      v12 = (char *)*((_QWORD *)result._Mypair._Myval2._Bx._Ptr - 1);
      if ( v12 >= result._Mypair._Myval2._Bx._Ptr )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(result._Mypair._Myval2._Bx._Ptr - v12) < (char *)8 )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(result._Mypair._Myval2._Bx._Ptr - v12) > (char *)0x27 )
        invalid_parameter_noinfo_noreturn();
      v11 = (char *)*((_QWORD *)result._Mypair._Myval2._Bx._Ptr - 1);
    }
    operator delete(v11);
  }
  return second;
}

__int64 __fastcall extension::KeyValueTable::getEnum<enum LANGUAGE_MODE,13>(
        extension::KeyValueTable *this,
        const std::string *k,
        const std::pair<char const *,enum LANGUAGE_MODE> (*table)[13],
        LANGUAGE_MODE defaultValue)
{
  std::string *String; // rax
  std::string *Ptr; // r10
  const std::pair<char const *,enum LANGUAGE_MODE> *v6; // r9
  const char *first; // rax
  int v8; // ecx
  int v9; // edx
  LANGUAGE_MODE second; // ebx
  char *v11; // rcx
  char *v12; // rax
  std::string result; // [rsp+20h] [rbp-38h] BYREF

  String = extension::KeyValueTable::getString(this, &result, k);
  Ptr = String;
  if ( String->_Mypair._Myval2._Myres >= 0x10 )
    Ptr = (std::string *)String->_Mypair._Myval2._Bx._Ptr;
  v6 = my_languageNameTable;
  while ( 1 )
  {
    first = v6->first;
    do
    {
      v8 = (unsigned __int8)first[(char *)Ptr - v6->first];
      v9 = *(unsigned __int8 *)first - v8;
      if ( v9 )
        break;
      ++first;
    }
    while ( v8 );
    if ( !v9 )
      break;
    if ( ++v6 == (const std::pair<char const *,enum LANGUAGE_MODE> *)my_aiLevelNameTable )
    {
      second = LANGUAGE_MODE_ja_JP;
      goto LABEL_11;
    }
  }
  second = v6->second;
LABEL_11:
  if ( result._Mypair._Myval2._Myres >= 0x10 )
  {
    v11 = result._Mypair._Myval2._Bx._Ptr;
    if ( result._Mypair._Myval2._Myres + 1 >= 0x1000 )
    {
      if ( (result._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
        invalid_parameter_noinfo_noreturn();
      v12 = (char *)*((_QWORD *)result._Mypair._Myval2._Bx._Ptr - 1);
      if ( v12 >= result._Mypair._Myval2._Bx._Ptr )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(result._Mypair._Myval2._Bx._Ptr - v12) < (char *)8 )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(result._Mypair._Myval2._Bx._Ptr - v12) > (char *)0x27 )
        invalid_parameter_noinfo_noreturn();
      v11 = (char *)*((_QWORD *)result._Mypair._Myval2._Bx._Ptr - 1);
    }
    operator delete(v11);
  }
  return (unsigned int)second;
}

__int64 __fastcall extension::KeyValueTable::getEnum<enum FighterOperationMapper::Mapped,18>(
        extension::KeyValueTable *this,
        const std::string *k,
        const std::pair<char const *,enum FighterOperationMapper::Mapped> (*table)[18],
        FighterOperationMapper::Mapped defaultValue)
{
  std::string *String; // rax
  std::string *Ptr; // r10
  const std::pair<char const *,enum FighterOperationMapper::Mapped> *v6; // r9
  const char *first; // rax
  int v8; // ecx
  int v9; // edx
  FighterOperationMapper::Mapped second; // ebx
  char *v11; // rcx
  char *v12; // rax
  std::string result; // [rsp+20h] [rbp-38h] BYREF

  String = extension::KeyValueTable::getString(this, &result, k);
  Ptr = String;
  if ( String->_Mypair._Myval2._Myres >= 0x10 )
    Ptr = (std::string *)String->_Mypair._Myval2._Bx._Ptr;
  v6 = my_buttonMappedNameTable;
  while ( 1 )
  {
    first = v6->first;
    do
    {
      v8 = (unsigned __int8)first[(char *)Ptr - v6->first];
      v9 = *(unsigned __int8 *)first - v8;
      if ( v9 )
        break;
      ++first;
    }
    while ( v8 );
    if ( !v9 )
      break;
    if ( ++v6 == (const std::pair<char const *,enum FighterOperationMapper::Mapped> *)my_buttonMapKeyNameTable )
    {
      second = Mapped_Unused;
      goto LABEL_11;
    }
  }
  second = v6->second;
LABEL_11:
  if ( result._Mypair._Myval2._Myres >= 0x10 )
  {
    v11 = result._Mypair._Myval2._Bx._Ptr;
    if ( result._Mypair._Myval2._Myres + 1 >= 0x1000 )
    {
      if ( (result._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
        invalid_parameter_noinfo_noreturn();
      v12 = (char *)*((_QWORD *)result._Mypair._Myval2._Bx._Ptr - 1);
      if ( v12 >= result._Mypair._Myval2._Bx._Ptr )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(result._Mypair._Myval2._Bx._Ptr - v12) < (char *)8 )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(result._Mypair._Myval2._Bx._Ptr - v12) > (char *)0x27 )
        invalid_parameter_noinfo_noreturn();
      v11 = (char *)*((_QWORD *)result._Mypair._Myval2._Bx._Ptr - 1);
    }
    operator delete(v11);
  }
  return (unsigned int)second;
}

void __fastcall AgPointer<AgUser>::AgPointer<AgUser>(AgPointer<AgUser> *this, AgUser *t)
{
  int ReferenceCounter; // eax
  AgReferenceCount *m_refCount; // rbx

  this->m_ref = 0i64;
  this->m_ptr = 0i64;
  if ( t )
  {
    ReferenceCounter = AgReferencedObject::createReferenceCounter(&t->AgReferencedObject, t);
    m_refCount = t->m_refCount;
    if ( !ReferenceCounter )
      AgReferenceCount::incRef(t->m_refCount);
    this->m_ref = m_refCount;
    this->m_ptr = t;
  }
}

void __fastcall SaveRecord_RecordKey::SaveRecord_RecordKey(SaveRecord_RecordKey *this)
{
  unsigned __int64 v1; // rbp
  __int16 **v2; // r14
  __int64 v3; // r12
  unsigned __int64 v4; // rbx
  __int16 **v5; // rdi
  __int64 v6; // rsi
  BattleSystem::BattleController *v7; // rax
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  char *v10; // rcx
  unsigned int v11; // edx
  unsigned int v12; // eax
  unsigned int v13; // eax
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rax
  BattleSystem::BattleController *v17; // [rsp+78h] [rbp+10h]

  v1 = 0i64;
  v2 = &this->m_RecordKey[0][1];
  v3 = 2i64;
  do
  {
    v4 = 1i64;
    v5 = v2;
    v6 = 5i64;
    do
    {
      v7 = BattleSystem::BattleController::instance;
      if ( !BattleSystem::BattleController::instance )
      {
        v17 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
        BattleSystem::BattleController::BattleController(v17);
        BattleSystem::BattleController::instance = v7;
      }
      v8 = v1;
      if ( v1 > 1 )
        v8 = 0i64;
      v9 = v4;
      if ( v4 > 5 )
        v9 = 0i64;
      v10 = (char *)v7 + 96 * v8 + 16 * v9;
      v11 = *(_DWORD *)(*((_QWORD *)v10 + 31893) + 16i64);
      v12 = *((_DWORD *)v10 + 63789);
      if ( v11 < v12 )
        v13 = v12 - v11;
      else
        v13 = 0;
      v14 = (int)(v11 + v13);
      v15 = 2 * v14;
      if ( !is_mul_ok(v14, 2ui64) )
        v15 = -1i64;
      *v5 = (__int16 *)operator new[](v15);
      ++v4;
      ++v5;
      --v6;
    }
    while ( v6 );
    ++v1;
    v2 += 6;
    --v3;
  }
  while ( v3 );
  this->m_Version = 0;
  *(_QWORD *)&this->m_KeyCount[0][0] = 0i64;
  *(_QWORD *)&this->m_KeyCount[0][2] = 0i64;
  *(_QWORD *)&this->m_KeyCount[0][4] = 0i64;
  *(_QWORD *)&this->m_KeyCount[1][0] = 0i64;
  *(_QWORD *)&this->m_KeyCount[1][2] = 0i64;
  *(_QWORD *)&this->m_KeyCount[1][4] = 0i64;
}

void __fastcall std::array<AgPointer<AgController>,4>::~array<AgPointer<AgController>,4>(
        std::array<AgPointer<AgController>,4> *this)
{
  `eh vector destructor iterator'(
    this,
    0x10ui64,
    4ui64,
    (void (__fastcall *)(void *))AgPointer<AgUser>::~AgPointer<AgUser>);
}

void __fastcall extension::AsyncSaveDataStorage::DataOption::~DataOption(
        extension::AsyncSaveDataStorage::DataOption *this)
{
  std::string::~string(&this->subTitleText);
  std::string::~string(&this->titleText);
  std::string::~string(&this->fsName);
}

void __fastcall SaveRecord_RecordKey::~SaveRecord_RecordKey(SaveRecord_RecordKey *this, unsigned __int64 a2)
{
  __int16 **v2; // rsi
  __int64 v3; // rbp
  void **v4; // rbx
  __int64 v5; // rdi

  v2 = &this->m_RecordKey[0][1];
  v3 = 2i64;
  do
  {
    v4 = (void **)v2;
    v5 = 5i64;
    do
    {
      if ( *v4 )
      {
        operator delete(*v4, a2);
        *v4 = 0i64;
      }
      ++v4;
      --v5;
    }
    while ( v5 );
    v2 += 6;
    --v3;
  }
  while ( v3 );
}

AgPointer<AgController> *__fastcall AgPointer<AgThread>::operator=(AgPointer<AgController> *this, AgController *t)
{
  AgController *m_ptr; // rdi
  int ReferenceCounter; // eax
  AgReferenceCount *m_refCount; // rbx
  AgController *v6; // rax
  AgPointer<KOFApplication> v8; // [rsp+20h] [rbp-18h] BYREF

  m_ptr = t;
  v8 = 0i64;
  if ( t )
  {
    ReferenceCounter = AgReferencedObject::createReferenceCounter(&t->AgReferencedObject, t);
    m_refCount = m_ptr->m_refCount;
    if ( !ReferenceCounter )
      AgReferenceCount::incRef(m_ptr->m_refCount);
  }
  else
  {
    m_ptr = (AgController *)v8.m_ptr;
    m_refCount = v8.m_ref;
  }
  v6 = this->m_ptr;
  v8.m_ref = this->m_ref;
  this->m_ref = m_refCount;
  this->m_ptr = m_ptr;
  v8.m_ptr = (KOFApplication *)v6;
  AgPointer<AgUser>::~AgPointer<AgUser>(&v8);
  return this;
}

extension::FutureSaveData *__fastcall extension::FutureSaveData::operator=(
        extension::FutureSaveData *this,
        const extension::FutureSaveData *__that)
{
  extension::savedata_detail::AsyncSaveDataState *m_ptr; // r8
  extension::savedata_detail::AsyncSaveDataState *v5; // rbx

  m_ptr = __that->m_state.m_ptr;
  if ( __that->m_state.m_ptr )
    _InterlockedExchangeAdd64((volatile signed __int64 *)m_ptr, 1ui64);
  v5 = this->m_state.m_ptr;
  this->m_state.m_ptr = m_ptr;
  if ( v5 && _InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFui64) == 1 )
  {
    std::string::~string(&v5->m_data);
    std::string::~string(&v5->m_fileName);
    operator delete(v5, 0x50ui64);
  }
  this->m_lastError = __that->m_lastError;
  return this;
}

bool __fastcall operator<(const AgControllerUID *left, const AgControllerUID *right)
{
  _BYTE *v2; // r9
  _BYTE *v3; // r8
  _BYTE *v4; // r10
  unsigned __int8 v5; // al
  _BYTE *v6; // r11
  unsigned __int8 v7; // cl
  std::tuple<unsigned char const &,unsigned char const &,unsigned char const &,unsigned char const &,unsigned char const &> _Right; // [rsp+20h] [rbp-88h] BYREF
  __int64 v10; // [rsp+48h] [rbp-60h]
  __int64 v11; // [rsp+50h] [rbp-58h]
  const AgControllerUID *v12; // [rsp+58h] [rbp-50h]
  std::tuple<unsigned char const &,unsigned char const &,unsigned char const &,unsigned char const &,unsigned char const &> v13; // [rsp+60h] [rbp-48h] BYREF
  __int64 v14; // [rsp+88h] [rbp-20h]
  _BYTE *v15; // [rsp+90h] [rbp-18h]
  const AgControllerUID *v16; // [rsp+98h] [rbp-10h]

  _Right.std::tuple<unsigned char const &,unsigned char const &,unsigned char const &,unsigned char const &>::std::tuple<unsigned char const &,unsigned char const &,unsigned char const &>::std::tuple<unsigned char const &,unsigned char const &>::std::tuple<unsigned char const &>::_Myfirst._Val = (const unsigned __int8 *)right + 7;
  v2 = (char *)left + 2;
  v14 = (__int64)left + 2;
  _Right.std::tuple<unsigned char const &,unsigned char const &,unsigned char const &,unsigned char const &>::std::tuple<unsigned char const &,unsigned char const &,unsigned char const &>::std::tuple<unsigned char const &,unsigned char const &>::_Myfirst._Val = (const unsigned __int8 *)right + 6;
  v3 = (char *)right + 2;
  v10 = (__int64)right + 2;
  _Right.std::tuple<unsigned char const &,unsigned char const &,unsigned char const &,unsigned char const &>::std::tuple<unsigned char const &,unsigned char const &,unsigned char const &>::_Myfirst._Val = (const unsigned __int8 *)right + 5;
  v4 = (char *)right + 1;
  v11 = (__int64)right + 1;
  _Right.std::tuple<unsigned char const &,unsigned char const &,unsigned char const &,unsigned char const &>::_Myfirst._Val = (const unsigned __int8 *)right + 4;
  _Right._Myfirst._Val = (const unsigned __int8 *)right + 3;
  v13.std::tuple<unsigned char const &,unsigned char const &,unsigned char const &,unsigned char const &>::std::tuple<unsigned char const &,unsigned char const &,unsigned char const &>::std::tuple<unsigned char const &,unsigned char const &>::std::tuple<unsigned char const &>::_Myfirst._Val = (const unsigned __int8 *)left + 7;
  v13.std::tuple<unsigned char const &,unsigned char const &,unsigned char const &,unsigned char const &>::std::tuple<unsigned char const &,unsigned char const &,unsigned char const &>::std::tuple<unsigned char const &,unsigned char const &>::_Myfirst._Val = (const unsigned __int8 *)left + 6;
  v13.std::tuple<unsigned char const &,unsigned char const &,unsigned char const &,unsigned char const &>::std::tuple<unsigned char const &,unsigned char const &,unsigned char const &>::_Myfirst._Val = (const unsigned __int8 *)left + 5;
  v13.std::tuple<unsigned char const &,unsigned char const &,unsigned char const &,unsigned char const &>::_Myfirst._Val = (const unsigned __int8 *)left + 4;
  v13._Myfirst._Val = (const unsigned __int8 *)left + 3;
  v5 = left->m_uid[0];
  v12 = right;
  v6 = (char *)left + 1;
  v16 = left;
  v7 = right->m_uid[0];
  v15 = v6;
  return v5 < v7
      || v7 >= v5
      && (*v6 < *v4
       || *v4 >= *v6
       && (*v2 < *v3
        || *v3 >= *v2
        && std::tuple<unsigned char const &,unsigned char const &,unsigned char const &,unsigned char const &,unsigned char const &>::_Less<unsigned char const &,unsigned char const &,unsigned char const &,unsigned char const &,unsigned char const &>(
             &v13,
             &_Right)));
}

void __fastcall SaveRecord_RecordKey::CommitRecordKey(SaveRecord_RecordKey *this)
{
  __int64 v2; // r12
  __int64 v3; // r14
  unsigned int *v4; // r13
  BattleSystem::BattleController *v5; // rsi
  unsigned __int64 v6; // rdi
  unsigned int *v7; // rbx
  __int64 v8; // rbp
  BattleSystem::BattleController *v9; // rax
  __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  unsigned int uiDataSize; // er9
  _WORD *v13; // r10
  unsigned int i; // er8
  RestrictRingBuffer<InputKeyRecord::RecordKey> *Myval2; // rax
  InputKeyRecord::RecordKey *v16; // rax
  InputKeyRecord::RecordKey v17; // rax
  __int64 v18; // [rsp+90h] [rbp+18h]
  BattleSystem::BattleController *v19; // [rsp+98h] [rbp+20h]

  this->m_Version = 0;
  v2 = 0i64;
  v3 = 7i64;
  v4 = &this->m_KeyCount[0][1];
  v18 = 2i64;
  v5 = BattleSystem::BattleController::instance;
  do
  {
    v6 = 1i64;
    v7 = v4;
    v8 = 5i64;
    do
    {
      if ( !v5 )
      {
        v19 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
        BattleSystem::BattleController::BattleController(v19);
        v5 = v9;
        BattleSystem::BattleController::instance = v9;
      }
      v10 = v2;
      if ( (unsigned __int64)(v3 - 7) > 0xB )
        v10 = 0i64;
      v11 = v6;
      if ( v6 > 5 )
        v11 = 0i64;
      uiDataSize = v5->m_KeyRecord[v10][v11].pKeyBuffer._Mypair._Myval2->uiDataSize;
      if ( uiDataSize )
      {
        *v7 = uiDataSize;
        v13 = (_WORD *)*((_QWORD *)&this->m_Version + v3 + v6);
        for ( i = 0; i < uiDataSize; ++i )
        {
          Myval2 = v5->m_KeyRecord[v10][v11].pKeyBuffer._Mypair._Myval2;
          if ( uiDataSize - i - 1 < Myval2->uiDataSize
            && (v16 = &Myval2->pBuffer[Myval2->uiBufferMask & (i + Myval2->uiEndIndex - uiDataSize)]) != 0i64 )
          {
            v17 = *v16;
          }
          else
          {
            v17 = 0i64;
          }
          *v13++ = LOBYTE(v17.iKey) | (unsigned __int16)(LOWORD(v17.iCAngle) << 12);
        }
      }
      else
      {
        *v7 = 0;
      }
      ++v6;
      ++v7;
      --v8;
    }
    while ( v8 );
    ++v2;
    v4 += 6;
    v3 += 6i64;
    --v18;
  }
  while ( v18 );
}

void __fastcall AppMain::CommitSaveDataDisplayGamma(AppMain *this)
{
  __int64 iBrightness; // rax
  float v2; // xmm0_4
  __int128 v3[4]; // [rsp+0h] [rbp-58h]

  iBrightness = this->SaveDataMain.DisplayOptionData.iBrightness;
  v3[0] = _xmm;
  v3[1] = _xmm;
  v3[2] = _xmm;
  v3[3] = _xmm;
  if ( (_DWORD)iBrightness )
    v2 = *((float *)v3 + iBrightness);
  else
    v2 = *(float *)&FLOAT_1_0;
  globalBrightness = v2;
}

char __fastcall AppMain::GetEmptyBestReplayPcIdSaveData(AppMain *this)
{
  int v1; // er9
  __int64 v2; // r8
  __int64 v3; // rdx
  char *p_m_PcId; // rax
  __int64 v5; // rax
  __int16 v7; // [rsp+10h] [rbp+10h]
  char v8; // [rsp+12h] [rbp+12h]
  __int16 v9; // [rsp+18h] [rbp+18h]
  char v10; // [rsp+1Ah] [rbp+1Ah]

  v1 = 0;
  v9 = 256;
  v2 = 0i64;
  v10 = 2;
  v7 = 0;
  v8 = 0;
  do
  {
    v3 = 0i64;
    p_m_PcId = &this->SaveDataReplay.m_Replay[0].m_PcId;
    while ( !*(_QWORD *)(p_m_PcId - 1171) || *p_m_PcId != *((_BYTE *)&v9 + v2) )
    {
      ++v3;
      p_m_PcId += 1184;
      if ( v3 >= 100 )
        goto LABEL_8;
    }
    *((_BYTE *)&v7 + v2) = 1;
LABEL_8:
    ++v2;
  }
  while ( v2 < 3 );
  v5 = 0i64;
  while ( *((_BYTE *)&v7 + v5) )
  {
    ++v1;
    if ( ++v5 >= 3 )
      return -1;
  }
  return *((_BYTE *)&v9 + v1);
}

float __fastcall AppMain::GetNetworkTitleRate(AppMain *this)
{
  int v2; // er9
  int v3; // er8
  unsigned __int64 v4; // rax
  char v5; // cl
  unsigned int v6; // edx
  int v7; // eax

  v2 = 0;
  v3 = 1;
  do
  {
    v4 = (unsigned __int64)(unsigned int)v3 >> 5;
    v5 = v3++ & 0x1F;
    v6 = this->SaveDataMain.GameData.m_NetworkTitle.m_Flag[v4] & (0x80000000 >> v5);
    v7 = v2 + 1;
    if ( !v6 )
      v7 = v2;
    v2 = v7;
  }
  while ( v3 < 300 );
  return (float)v7 / 299.0;
}

__int64 __fastcall AppMain::GetRankMatchDisconnectNum(AppMain *this)
{
  int m_RankMatchCount; // edx
  unsigned int v3; // ecx
  unsigned int v4; // esi
  unsigned int v5; // ebx
  unsigned int v6; // er9
  unsigned int v7; // edx
  int v8; // edx
  __int64 result; // rax

  m_RankMatchCount = this->SaveDataMain.PlayerData.m_RankMatchCount;
  v3 = this->SaveDataMain.PlayerData.m_RankMatchWin ^ 0x7B48A35E;
  v4 = m_RankMatchCount ^ 0x7B48A35E ^ ((unsigned __int16)m_RankMatchCount ^ 0xA35E ^ (unsigned __int16)((m_RankMatchCount ^ 0x7B48A35Eu) >> 14)) & 0xCCCC ^ ((((unsigned __int16)m_RankMatchCount ^ 0xA35E ^ (unsigned __int16)((m_RankMatchCount ^ 0x7B48A35Eu) >> 14)) & 0xCCCC) << 14);
  v5 = v3 ^ ((unsigned __int16)v3 ^ (unsigned __int16)(v3 >> 14)) & 0xCCCC ^ ((((unsigned __int16)v3 ^ (unsigned __int16)(v3 >> 14)) & 0xCCCC) << 14);
  v6 = this->SaveDataMain.PlayerData.m_RankMatchLose ^ 0x7B48A35E ^ (LOWORD(this->SaveDataMain.PlayerData.m_RankMatchLose) ^ 0xA35E ^ (unsigned __int16)((this->SaveDataMain.PlayerData.m_RankMatchLose ^ 0x7B48A35Eu) >> 14)) & 0xCCCC ^ (((LOWORD(this->SaveDataMain.PlayerData.m_RankMatchLose) ^ 0xA35E ^ (unsigned __int16)((this->SaveDataMain.PlayerData.m_RankMatchLose ^ 0x7B48A35Eu) >> 14)) & 0xCCCC) << 14);
  v7 = this->SaveDataMain.PlayerData.m_RankMatchDraw ^ 0x7B48A35E ^ (LOWORD(this->SaveDataMain.PlayerData.m_RankMatchDraw) ^ 0xA35E ^ (unsigned __int16)((this->SaveDataMain.PlayerData.m_RankMatchDraw ^ 0x7B48A35Eu) >> 14)) & 0xCCCC ^ (((LOWORD(this->SaveDataMain.PlayerData.m_RankMatchDraw) ^ 0xA35E ^ (unsigned __int16)((this->SaveDataMain.PlayerData.m_RankMatchDraw ^ 0x7B48A35Eu) >> 14)) & 0xCCCC) << 14);
  v8 = ((v4 ^ (v4 >> 7)) & 0x550055 ^ v4 ^ (((v4 ^ (v4 >> 7)) & 0x550055) << 7))
     - ((v7 ^ (v7 >> 7)) & 0x550055 ^ v7 ^ (((v7 ^ (v7 >> 7)) & 0x550055) << 7))
     - ((v6 ^ (v6 >> 7)) & 0x550055 ^ v6 ^ (((v6 ^ (v6 >> 7)) & 0x550055) << 7))
     - ((v5 ^ (v5 >> 7)) & 0x550055 ^ v5 ^ (((v5 ^ (v5 >> 7)) & 0x550055) << 7));
  result = 0i64;
  if ( v8 >= 0 )
    return (unsigned int)v8;
  return result;
}

BattleReplay *__fastcall AppMain::GetReplaySaveDataSortDownLoadTime(AppMain *this, int idx, int *repno)
{
  __int64 v4; // rbx
  __int64 v6; // r9
  __int64 *v7; // r10
  int v8; // er8
  __int64 *v9; // r11
  int v10; // edx
  unsigned __int64 *p_m_DownloadDate; // rcx
  __int64 v12; // r10
  __int64 i; // rax
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  int v16; // edx
  __int64 v17; // rcx
  int v19; // [rsp+1Ch] [rbp-4CCh]
  __int64 v20[50]; // [rsp+20h] [rbp-4C8h] BYREF
  __int64 v21[100]; // [rsp+1B0h] [rbp-338h] BYREF

  v4 = idx;
  memset(v21, 0, sizeof(v21));
  memset(v20, 0, sizeof(v20));
  v6 = 0i64;
  v7 = v20;
  v8 = 0;
  v9 = v21;
  v10 = 0;
  p_m_DownloadDate = &this->SaveDataReplay.m_Replay[0].m_DownloadDate;
  do
  {
    if ( *((_BYTE *)p_m_DownloadDate + 9) )
    {
      ++v8;
      *v9++ = *p_m_DownloadDate;
      *(_DWORD *)v7 = v10;
      v7 = (__int64 *)((char *)v7 + 4);
    }
    ++v10;
    p_m_DownloadDate += 148;
  }
  while ( v10 < 100 );
  if ( v8 <= 0 || (int)v4 > v8 - 1 )
    return 0i64;
  v12 = (unsigned int)v8;
  do
  {
    for ( i = v8 - 1i64; i > v6; --i )
    {
      v14 = v21[i];
      v15 = v20[i + 49];
      if ( v14 > v15 )
      {
        v21[i] = v15;
        v16 = *((_DWORD *)v20 + i);
        v20[i + 49] = v14;
        *((_DWORD *)v20 + i) = *(&v19 + i);
        *(&v19 + i) = v16;
      }
    }
    ++v6;
    --v12;
  }
  while ( v12 );
  v17 = *((int *)v20 + v4);
  *repno = v17;
  return (BattleReplay *)((char *)&this->SaveDataReplay + 1184 * v17);
}

FighterOperationMapper *__fastcall AppMain::GetSaveDataKeyConfigMyMapper(
        AppMain *this,
        FighterOperationMapper *result,
        USER_ID userindex)
{
  char *v4; // rbx
  const std::piecewise_construct_t *v5; // rdx
  std::tuple<> *v6; // r9
  std::_Tree<std::_Tmap_traits<AgControllerUID,FighterOperationMapper,std::less<AgControllerUID>,std::allocator<std::pair<AgControllerUID const ,FighterOperationMapper> >,0> > *v7; // r14
  const AgControllerUID *Val; // rbx
  AgControllerUID v9; // rdi
  std::_Tree_node<std::pair<AgControllerUID const ,FighterOperationMapper>,void *> *_Newnode; // rax
  FighterOperationMapper *v11; // rax
  std::tuple<AgControllerUID const &> v12; // [rsp+30h] [rbp-38h] BYREF
  AgControllerUID deviceID; // [rsp+38h] [rbp-30h] BYREF

  v4 = (char *)this + 1056 * userindex;
  AppMain::GetControllerUIDForDeviceID(this, &deviceID, *((_DWORD *)v4 + 549639));
  v7 = (std::_Tree<std::_Tmap_traits<AgControllerUID,FighterOperationMapper,std::less<AgControllerUID>,std::allocator<std::pair<AgControllerUID const ,FighterOperationMapper> >,0> > *)(v4 + 2197504);
  Val = (const AgControllerUID *)*((_QWORD *)v4 + 274688);
  v9 = Val[1];
  while ( !*(_BYTE *)(*(_QWORD *)&v9 + 25i64) )
  {
    if ( operator<((const AgControllerUID *)(*(_QWORD *)&v9 + 28i64), &deviceID) )
    {
      v9 = *(AgControllerUID *)(*(_QWORD *)&v9 + 16i64);
    }
    else
    {
      Val = (const AgControllerUID *)v9;
      v9 = **(AgControllerUID **)&v9;
    }
  }
  if ( Val == (const AgControllerUID *)v7->_Mypair._Myval2._Myval2._Myhead
    || operator<(&deviceID, (const AgControllerUID *)((char *)Val + 28)) )
  {
    v12._Myfirst._Val = &deviceID;
    _Newnode = std::_Tree_comp_alloc<std::_Tmap_traits<AgControllerUID,FighterOperationMapper,std::less<AgControllerUID>,std::allocator<std::pair<AgControllerUID const,FighterOperationMapper>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<AgControllerUID const &>,std::tuple<>>(
                 v7,
                 v5,
                 &v12,
                 v6);
    std::_Tree<std::_Tmap_traits<AgControllerUID,FighterOperationMapper,std::less<AgControllerUID>,std::allocator<std::pair<AgControllerUID const,FighterOperationMapper>>,0>>::_Insert_hint<std::pair<AgControllerUID const,FighterOperationMapper> &,std::_Tree_node<std::pair<AgControllerUID const,FighterOperationMapper>,void *> *>(
      v7,
      (std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgControllerUID const ,FighterOperationMapper> > > > *)&v12,
      (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgControllerUID const ,FighterOperationMapper> > > >)Val,
      &_Newnode->_Myval,
      _Newnode);
    Val = v12._Myfirst._Val;
  }
  v11 = result;
  *(_OWORD *)result->m_mapping = *(_OWORD *)&Val[4].m_uid[4];
  *(_OWORD *)&result->m_mapping[4] = *(_OWORD *)&Val[6].m_uid[4];
  *(AgControllerUID *)&result->m_mapping[8] = *(const AgControllerUID *)((char *)Val + 68);
  return v11;
}

FighterOperationMapper *__fastcall AppMain::GetSaveDataKeyConfigUserUID(
        AppMain *this,
        FighterOperationMapper *result,
        USER_ID userindex,
        AgControllerUID contUID)
{
  std::_Tree<std::_Tmap_traits<AgControllerUID,FighterOperationMapper,std::less<AgControllerUID>,std::allocator<std::pair<AgControllerUID const ,FighterOperationMapper> >,0> > *v5; // r14
  const AgControllerUID *Myhead; // rbx
  AgControllerUID v7; // rdi
  std::_Tree_node<std::pair<AgControllerUID const ,FighterOperationMapper>,void *> *_Newnode; // rax
  FighterOperationMapper *v9; // rax
  std::tuple<AgControllerUID const &> v10; // [rsp+30h] [rbp-48h] BYREF
  AgControllerUID right; // [rsp+38h] [rbp-40h] BYREF

  right = contUID;
  v5 = (std::_Tree<std::_Tmap_traits<AgControllerUID,FighterOperationMapper,std::less<AgControllerUID>,std::allocator<std::pair<AgControllerUID const ,FighterOperationMapper> >,0> > *)((char *)this + 1056 * userindex);
  Myhead = (const AgControllerUID *)v5[137344]._Mypair._Myval2._Myval2._Myhead;
  v7 = Myhead[1];
  while ( !*(_BYTE *)(*(_QWORD *)&v7 + 25i64) )
  {
    if ( operator<((const AgControllerUID *)(*(_QWORD *)&v7 + 28i64), &right) )
    {
      v7 = *(AgControllerUID *)(*(_QWORD *)&v7 + 16i64);
    }
    else
    {
      Myhead = (const AgControllerUID *)v7;
      v7 = **(AgControllerUID **)&v7;
    }
  }
  if ( Myhead == (const AgControllerUID *)v5[137344]._Mypair._Myval2._Myval2._Myhead
    || operator<(&right, (const AgControllerUID *)((char *)Myhead + 28)) )
  {
    v10._Myfirst._Val = &right;
    _Newnode = std::_Tree_comp_alloc<std::_Tmap_traits<AgControllerUID,FighterOperationMapper,std::less<AgControllerUID>,std::allocator<std::pair<AgControllerUID const,FighterOperationMapper>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<AgControllerUID const &>,std::tuple<>>(
                 v5 + 137344,
                 (const std::piecewise_construct_t *)result,
                 &v10,
                 *(std::tuple<> **)&contUID);
    std::_Tree<std::_Tmap_traits<AgControllerUID,FighterOperationMapper,std::less<AgControllerUID>,std::allocator<std::pair<AgControllerUID const,FighterOperationMapper>>,0>>::_Insert_hint<std::pair<AgControllerUID const,FighterOperationMapper> &,std::_Tree_node<std::pair<AgControllerUID const,FighterOperationMapper>,void *> *>(
      v5 + 137344,
      (std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgControllerUID const ,FighterOperationMapper> > > > *)&v10,
      (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgControllerUID const ,FighterOperationMapper> > > >)Myhead,
      &_Newnode->_Myval,
      _Newnode);
    Myhead = v10._Myfirst._Val;
  }
  v9 = result;
  *(_OWORD *)result->m_mapping = *(_OWORD *)&Myhead[4].m_uid[4];
  *(_OWORD *)&result->m_mapping[4] = *(_OWORD *)&Myhead[6].m_uid[4];
  *(AgControllerUID *)&result->m_mapping[8] = *(const AgControllerUID *)((char *)Myhead + 68);
  return v9;
}

__int64 __fastcall AppMain::GetSaveDataMyAnnounceType(AppMain *this, PLAYER_ID playerID)
{
  unsigned int v2; // esi
  unsigned __int8 iAnnounceType; // bp
  __int64 v4; // rdi
  _DWORD *v5; // r14
  GAME_MODE v6; // ecx
  PLAYER_ID v8; // eax
  GameDataInfo *v9; // rcx
  GameDataInfo *v10; // rcx
  GameDataInfo *v11; // rcx

  v2 = 0;
  iAnnounceType = this->SaveDataMain.SysOptionData.iAnnounceType;
  v4 = playerID;
  v5 = (_DWORD *)(*(_QWORD *)NtCurrentTeb()->Reserved1[11] + 40i64);
  if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *v5 )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v9);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    }
  }
  v6 = `GameDataInfo::getInstance'::`2'::instance.m_GameMode[`GameDataInfo::getInstance'::`2'::instance.m_GameModeIndex];
  if ( (unsigned int)(v6 - 4) <= 2 || v6 == GAME_MODE_ONLINETRAINING )
  {
    v8 = NetManager::GetPlayerID(&g_NetworkManager, -1);
    if ( v8 == PLAYER_ID_NONE && !(_DWORD)v4 || (_DWORD)v4 == v8 )
      return iAnnounceType != 0;
  }
  else
  {
    if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *v5 )
    {
      Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
      {
        GameDataInfo::GameDataInfo(v10);
        Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      }
    }
    if ( `GameDataInfo::getInstance'::`2'::instance.m_ControllerSetting[0] != USER_ID_1P
      && GameDataInfo::getInstance()->m_ControllerSetting[1] != USER_ID_1P
      && !(_DWORD)v4 )
    {
      return iAnnounceType != 0;
    }
    if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *v5 )
    {
      Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
      {
        GameDataInfo::GameDataInfo(v11);
        Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      }
    }
    if ( `GameDataInfo::getInstance'::`2'::instance.m_ControllerSetting[v4] == USER_ID_1P )
      return iAnnounceType != 0;
  }
  LOBYTE(v2) = iAnnounceType == 0;
  return v2;
}

__int64 __fastcall AppMain::GetSaveReplayIndex(AppMain *this)
{
  unsigned int v1; // er8
  unsigned int (*m_BufferSize)[2]; // rax
  unsigned __int64 v3; // rdx
  unsigned int v5; // er10
  __int64 v6; // r9
  int v7; // ecx
  unsigned __int8 *p_m_Download; // rax
  unsigned __int64 v9; // r9

  v1 = -1;
  m_BufferSize = this->SaveDataReplay.m_Replay[0].m_BufferSize;
  v3 = 0i64;
  v5 = 0;
  v6 = 0i64;
  while ( *(_DWORD *)m_BufferSize )
  {
    ++v5;
    ++v6;
    m_BufferSize += 148;
    if ( v6 >= 100 )
      goto LABEL_6;
  }
  v1 = v5;
  if ( v5 == -1 )
  {
LABEL_6:
    v7 = 0;
    p_m_Download = &this->SaveDataReplay.m_Replay[0].m_Download;
    do
    {
      if ( *(_DWORD *)(p_m_Download - 1153) && !*(p_m_Download - 1) )
      {
        if ( v3 )
        {
          if ( *p_m_Download )
            v9 = *(_QWORD *)(p_m_Download - 9);
          else
            v9 = *(_QWORD *)(p_m_Download - 1169);
          if ( v9 >= v3 )
            goto LABEL_19;
          v3 = v9;
        }
        else if ( *p_m_Download )
        {
          v3 = *(_QWORD *)(p_m_Download - 9);
        }
        else
        {
          v3 = *(_QWORD *)(p_m_Download - 1169);
        }
        v1 = v7;
      }
LABEL_19:
      ++v7;
      p_m_Download += 1184;
    }
    while ( v7 < 100 );
  }
  return v1;
}

bool __fastcall AppMain::IsEmptyBestReplay(AppMain *this)
{
  unsigned __int8 v1; // r9
  unsigned __int8 *p_m_Best; // rax
  __int64 v3; // r10
  bool v4; // zf
  unsigned __int8 v5; // dl
  unsigned __int8 v6; // r8
  unsigned __int8 v7; // dl
  unsigned __int8 v8; // r8
  unsigned __int8 v9; // dl
  unsigned __int8 v10; // r8
  unsigned __int8 v11; // dl

  v1 = 0;
  p_m_Best = &this->SaveDataReplay.m_Replay[1].m_Best;
  v3 = 20i64;
  do
  {
    v4 = *(p_m_Best - 1184) == 0;
    v5 = v1 + 1;
    p_m_Best += 5920;
    if ( v4 )
      v5 = v1;
    v6 = v5;
    v7 = v5 + 1;
    if ( !*(p_m_Best - 5920) )
      v7 = v6;
    v8 = v7;
    v9 = v7 + 1;
    if ( !*(p_m_Best - 4736) )
      v9 = v8;
    v10 = v9;
    v11 = v9 + 1;
    if ( !*(p_m_Best - 3552) )
      v11 = v10;
    v1 = v11 + 1;
    if ( !*(p_m_Best - 2368) )
      v1 = v11;
    --v3;
  }
  while ( v3 );
  return v1 < 3u;
}

void __fastcall AppMain::SaveDataAsyncLoad(AppMain *this)
{
  if ( dword_140ACD580 > *(_DWORD *)(*(_QWORD *)NtCurrentTeb()->Reserved1[11] + 40i64) )
  {
    Init_thread_header(&dword_140ACD580);
    if ( dword_140ACD580 == -1 )
    {
      sd.SysOptionData = 0i64;
      dword_140ACD598 = 0;
      stru_140ACD5A0.m_state.m_ptr = 0i64;
      stru_140ACD5A0.m_lastError = ErrorCode_None;
      byte_140ACD5B0 = 0;
      qword_140ACD5B8 = 0i64;
      dword_140ACD5C0 = 0;
      stru_140ACD5C8.m_state.m_ptr = 0i64;
      stru_140ACD5C8.m_lastError = ErrorCode_None;
      byte_140ACD5D8 = 0;
      atexit(_anonymous_namespace_::MyAsyncSaveDataManager::Instance_::_2_::_dynamic_atexit_destructor_for__the_instance__);
      Init_thread_footer(&dword_140ACD580);
    }
  }
  anonymous_namespace_::MyAsyncSaveDataState_SaveRecord_Main_::loadStart((LANGUAGE_MODE)&sd);
  anonymous_namespace_::MyAsyncSaveDataState_SaveRecord_Replay_::loadStart((LANGUAGE_MODE)&qword_140ACD5B8);
}

bool __fastcall AppMain::SaveDataAsyncSave(AppMain *this, int onSave)
{
  SaveRecord_Main *p_SaveDataMainTemp; // rdi
  SaveRecord_Main *p_SaveDataMain; // rbx
  int v5; // eax
  EasyIndicator *v6; // rsi
  __int64 v7; // rax
  __int128 v8; // xmm0

  p_SaveDataMainTemp = &this->SaveDataMainTemp;
  p_SaveDataMain = &this->SaveDataMain;
  v5 = memcmp(&this->SaveDataMain, &this->SaveDataMainTemp, 0x174A0ui64);
  if ( v5 )
  {
    v6 = EasyIndicator::instance;
    this->SaveDataMain.PlayerData.m_iPlayTime = this->m_iPlayTime;
    if ( !v6 )
    {
      v6 = (EasyIndicator *)operator new(0x150ui64);
      memset(v6->m_IndicatorStack, 0, sizeof(v6->m_IndicatorStack));
      v6->m_Image = 0i64;
      v6->m_DrawCount = 0;
      EasyIndicator::instance = v6;
    }
    EasyIndicator::RequestDraw(v6, 1760 * GAME_SCREEN_WIDTH / 1920, 920 * GAME_SCREEN_HEIGHT / 1080, TYPE_SAVING);
    if ( dword_140ACD580 > *(_DWORD *)(*(_QWORD *)NtCurrentTeb()->Reserved1[11] + 40i64) )
    {
      Init_thread_header(&dword_140ACD580);
      if ( dword_140ACD580 == -1 )
      {
        sd.SysOptionData = 0i64;
        dword_140ACD598 = 0;
        stru_140ACD5A0.m_state.m_ptr = 0i64;
        stru_140ACD5A0.m_lastError = ErrorCode_None;
        byte_140ACD5B0 = 0;
        qword_140ACD5B8 = 0i64;
        dword_140ACD5C0 = 0;
        stru_140ACD5C8.m_state.m_ptr = 0i64;
        stru_140ACD5C8.m_lastError = ErrorCode_None;
        byte_140ACD5D8 = 0;
        atexit(_anonymous_namespace_::MyAsyncSaveDataManager::Instance_::_2_::_dynamic_atexit_destructor_for__the_instance__);
        Init_thread_footer(&dword_140ACD580);
      }
    }
    anonymous_namespace_::MyAsyncSaveDataState_SaveRecord_Main_::saveStart(&sd);
    v7 = 745i64;
    do
    {
      p_SaveDataMainTemp = (SaveRecord_Main *)((char *)p_SaveDataMainTemp + 128);
      v8 = *(_OWORD *)&p_SaveDataMain->SysOptionData.iUILanguage;
      p_SaveDataMain = (SaveRecord_Main *)((char *)p_SaveDataMain + 128);
      *(_OWORD *)&p_SaveDataMainTemp[-1].RecordKey.m_KeyCount[0][5] = v8;
      *(_OWORD *)&p_SaveDataMainTemp[-1].RecordKey.m_KeyCount[1][3] = *(_OWORD *)&p_SaveDataMain[-1].RecordKey.m_KeyCount[1][3];
      *(_OWORD *)&p_SaveDataMainTemp[-1].RecordKey.m_RecordKey[0][0] = *(_OWORD *)&p_SaveDataMain[-1].RecordKey.m_RecordKey[0][0];
      *(_OWORD *)&p_SaveDataMainTemp[-1].RecordKey.m_RecordKey[0][2] = *(_OWORD *)&p_SaveDataMain[-1].RecordKey.m_RecordKey[0][2];
      *(_OWORD *)&p_SaveDataMainTemp[-1].RecordKey.m_RecordKey[0][4] = *(_OWORD *)&p_SaveDataMain[-1].RecordKey.m_RecordKey[0][4];
      *(_OWORD *)&p_SaveDataMainTemp[-1].RecordKey.m_RecordKey[1][0] = *(_OWORD *)&p_SaveDataMain[-1].RecordKey.m_RecordKey[1][0];
      *(_OWORD *)&p_SaveDataMainTemp[-1].RecordKey.m_RecordKey[1][2] = *(_OWORD *)&p_SaveDataMain[-1].RecordKey.m_RecordKey[1][2];
      *(_OWORD *)&p_SaveDataMainTemp[-1].RecordKey.m_RecordKey[1][4] = *(_OWORD *)&p_SaveDataMain[-1].RecordKey.m_RecordKey[1][4];
      --v7;
    }
    while ( v7 );
    *(_OWORD *)&p_SaveDataMainTemp->SysOptionData.iUILanguage = *(_OWORD *)&p_SaveDataMain->SysOptionData.iUILanguage;
    *(_OWORD *)&p_SaveDataMainTemp->GameOptionData.iRoundTimerType = *(_OWORD *)&p_SaveDataMain->GameOptionData.iRoundTimerType;
    AppMain::SaveData_SaveGraphicsOptions(this);
    LOBYTE(v5) = 1;
  }
  return v5;
}

void __fastcall AppMain::SaveDataAsyncSaveReplay(AppMain *this)
{
  EasyIndicator *v1; // rbx

  v1 = EasyIndicator::instance;
  if ( !EasyIndicator::instance )
  {
    v1 = (EasyIndicator *)operator new(0x150ui64);
    memset(v1->m_IndicatorStack, 0, sizeof(v1->m_IndicatorStack));
    v1->m_Image = 0i64;
    v1->m_DrawCount = 0;
    EasyIndicator::instance = v1;
  }
  EasyIndicator::RequestDraw(v1, 1760 * GAME_SCREEN_WIDTH / 1920, 920 * GAME_SCREEN_HEIGHT / 1080, TYPE_SAVING);
  if ( dword_140ACD580 > *(_DWORD *)(*(_QWORD *)NtCurrentTeb()->Reserved1[11] + 40i64) )
  {
    Init_thread_header(&dword_140ACD580);
    if ( dword_140ACD580 == -1 )
    {
      sd.SysOptionData = 0i64;
      dword_140ACD598 = 0;
      stru_140ACD5A0.m_state.m_ptr = 0i64;
      stru_140ACD5A0.m_lastError = ErrorCode_None;
      byte_140ACD5B0 = 0;
      qword_140ACD5B8 = 0i64;
      dword_140ACD5C0 = 0;
      stru_140ACD5C8.m_state.m_ptr = 0i64;
      stru_140ACD5C8.m_lastError = ErrorCode_None;
      byte_140ACD5D8 = 0;
      atexit(_anonymous_namespace_::MyAsyncSaveDataManager::Instance_::_2_::_dynamic_atexit_destructor_for__the_instance__);
      Init_thread_footer(&dword_140ACD580);
    }
  }
  anonymous_namespace_::MyAsyncSaveDataState_SaveRecord_Replay_::saveStart((const SaveRecord_Replay *)&qword_140ACD5B8);
}

void __fastcall AppMain::SaveDataFrameUpdate(AppMain *this)
{
  SaveRecord_Main *p_SaveDataMain; // rbx
  int i; // er8
  unsigned __int64 v4; // rax
  unsigned int v5; // edx
  SaveRecord_Main *p_SaveDataMainTemp; // rax
  __int64 v7; // rcx
  __int128 v8; // xmm0
  AppMain *v9; // rcx
  EasyIndicator *v10; // rbx

  if ( dword_140ACD580 > *(_DWORD *)(*(_QWORD *)NtCurrentTeb()->Reserved1[11] + 40i64) )
  {
    Init_thread_header(&dword_140ACD580);
    if ( dword_140ACD580 == -1 )
    {
      sd.SysOptionData = 0i64;
      dword_140ACD598 = 0;
      stru_140ACD5A0.m_state.m_ptr = 0i64;
      stru_140ACD5A0.m_lastError = ErrorCode_None;
      byte_140ACD5B0 = 0;
      qword_140ACD5B8 = 0i64;
      dword_140ACD5C0 = 0;
      stru_140ACD5C8.m_state.m_ptr = 0i64;
      stru_140ACD5C8.m_lastError = ErrorCode_None;
      byte_140ACD5D8 = 0;
      atexit(_anonymous_namespace_::MyAsyncSaveDataManager::Instance_::_2_::_dynamic_atexit_destructor_for__the_instance__);
      Init_thread_footer(&dword_140ACD580);
    }
  }
  p_SaveDataMain = &this->SaveDataMain;
  if ( anonymous_namespace_::MyAsyncSaveDataManager::updateDataLoaded(&sd) )
  {
    this->m_iPlayTime = this->SaveDataMain.PlayerData.m_iPlayTime;
    AppMain::SaveDataLoaded_Patch103(this);
    AppMain::SaveDataLoaded_Patch105(this);
    for ( i = 0; i < 108; ++i )
    {
      v4 = (unsigned __int64)(unsigned int)i >> 5;
      v5 = 0x80000000 >> (i & 0x1F);
      if ( (v5 & this->SaveDataMain.PlayerData.m_IconEnableFlag[v4]) == 0 )
      {
        this->SaveDataMain.PlayerData.m_IconEnableFlag[v4] |= v5;
        this->SaveDataMain.PlayerData.m_IconNewFlag[v4] |= v5;
      }
    }
    AppMain::UnlockGallery(this, GALLERY_ID_SOUND_CH_ROC, 1);
    AppMain::UnlockGallery(this, GALLERY_ID_SOUND_CH_VNS, 1);
    AppMain::UnlockGallery(this, GALLERY_ID_SOUND_CH_YMZ, 1);
    AppMain::UnlockGallery(this, GALLERY_ID_SOUND_CH_WHP, 1);
    AppMain::UnlockGallery(this, GALLERY_ID_END_CREDIT, 0);
    AppMain::UnlockGallery(this, GALLERY_ID_SOUND_CH_HDR, 1);
    AppMain::UnlockGallery(this, GALLERY_ID_SOUND_CH_OSW, 1);
    AppMain::UnlockGallery(this, GALLERY_ID_SOUND_CH_MRY, 1);
    AppMain::UnlockGallery(this, GALLERY_ID_SOUND_CH_NJD, 1);
    AppMain::SaveDataLoaded_Version0(this);
    AppMain::SaveDataLoaded_Steam(this, 1);
    AppMain::SaveData_LoadGraphicsOptions(this);
    p_SaveDataMainTemp = &this->SaveDataMainTemp;
    v7 = 745i64;
    do
    {
      p_SaveDataMainTemp = (SaveRecord_Main *)((char *)p_SaveDataMainTemp + 128);
      v8 = *(_OWORD *)&p_SaveDataMain->SysOptionData.iUILanguage;
      p_SaveDataMain = (SaveRecord_Main *)((char *)p_SaveDataMain + 128);
      *(_OWORD *)&p_SaveDataMainTemp[-1].RecordKey.m_KeyCount[0][5] = v8;
      *(_OWORD *)&p_SaveDataMainTemp[-1].RecordKey.m_KeyCount[1][3] = *(_OWORD *)&p_SaveDataMain[-1].RecordKey.m_KeyCount[1][3];
      *(_OWORD *)&p_SaveDataMainTemp[-1].RecordKey.m_RecordKey[0][0] = *(_OWORD *)&p_SaveDataMain[-1].RecordKey.m_RecordKey[0][0];
      *(_OWORD *)&p_SaveDataMainTemp[-1].RecordKey.m_RecordKey[0][2] = *(_OWORD *)&p_SaveDataMain[-1].RecordKey.m_RecordKey[0][2];
      *(_OWORD *)&p_SaveDataMainTemp[-1].RecordKey.m_RecordKey[0][4] = *(_OWORD *)&p_SaveDataMain[-1].RecordKey.m_RecordKey[0][4];
      *(_OWORD *)&p_SaveDataMainTemp[-1].RecordKey.m_RecordKey[1][0] = *(_OWORD *)&p_SaveDataMain[-1].RecordKey.m_RecordKey[1][0];
      *(_OWORD *)&p_SaveDataMainTemp[-1].RecordKey.m_RecordKey[1][2] = *(_OWORD *)&p_SaveDataMain[-1].RecordKey.m_RecordKey[1][2];
      *(_OWORD *)&p_SaveDataMainTemp[-1].RecordKey.m_RecordKey[1][4] = *(_OWORD *)&p_SaveDataMain[-1].RecordKey.m_RecordKey[1][4];
      --v7;
    }
    while ( v7 );
    *(_OWORD *)&p_SaveDataMainTemp->SysOptionData.iUILanguage = *(_OWORD *)&p_SaveDataMain->SysOptionData.iUILanguage;
    *(_OWORD *)&p_SaveDataMainTemp->GameOptionData.iRoundTimerType = *(_OWORD *)&p_SaveDataMain->GameOptionData.iRoundTimerType;
  }
  else if ( byte_140ACD5B0 )
  {
    AppMain::SaveDataLoaded_Steam(this, 1);
  }
  anonymous_namespace_::MyAsyncSaveDataManager::updateDataLoaded_0((SaveRecord_Replay *)&sd);
  if ( stru_140ACD5A0.m_state.m_ptr
    && (stru_140ACD5A0.m_state.m_ptr->m_result.m_value._My_val & 0x8000000000000000ui64) == 0i64 )
  {
    extension::FutureSaveData::reset(&stru_140ACD5A0);
  }
  if ( stru_140ACD5C8.m_state.m_ptr
    && (stru_140ACD5C8.m_state.m_ptr->m_result.m_value._My_val & 0x8000000000000000ui64) == 0i64 )
  {
    extension::FutureSaveData::reset(&stru_140ACD5C8);
  }
  if ( !AppMain::SaveDataIsSaveReady(v9) )
  {
    v10 = EasyIndicator::instance;
    if ( !EasyIndicator::instance )
    {
      v10 = (EasyIndicator *)operator new(0x150ui64);
      memset(v10->m_IndicatorStack, 0, sizeof(v10->m_IndicatorStack));
      v10->m_Image = 0i64;
      v10->m_DrawCount = 0;
      EasyIndicator::instance = v10;
    }
    EasyIndicator::RequestDraw(v10, 1760 * GAME_SCREEN_WIDTH / 1920, 920 * GAME_SCREEN_HEIGHT / 1080, TYPE_SAVING);
  }
  AppMain::CommitSaveDataDisplayGamma(this);
  this->m_iPlayTime += 16i64;
  if ( this->m_iPlayTime >= 0xD693A018 )
    this->m_iPlayTime = 3599999000i64;
}

bool __fastcall AppMain::SaveDataIsLoadReady(AppMain *this)
{
  if ( dword_140ACD580 > *(_DWORD *)(*(_QWORD *)NtCurrentTeb()->Reserved1[11] + 40i64) )
  {
    Init_thread_header(&dword_140ACD580);
    if ( dword_140ACD580 == -1 )
    {
      sd.SysOptionData = 0i64;
      dword_140ACD598 = 0;
      stru_140ACD5A0.m_state.m_ptr = 0i64;
      stru_140ACD5A0.m_lastError = ErrorCode_None;
      byte_140ACD5B0 = 0;
      qword_140ACD5B8 = 0i64;
      dword_140ACD5C0 = 0;
      stru_140ACD5C8.m_state.m_ptr = 0i64;
      stru_140ACD5C8.m_lastError = ErrorCode_None;
      byte_140ACD5D8 = 0;
      atexit(_anonymous_namespace_::MyAsyncSaveDataManager::Instance_::_2_::_dynamic_atexit_destructor_for__the_instance__);
      Init_thread_footer(&dword_140ACD580);
    }
  }
  return (!*(_QWORD *)&sd.SysOptionData || *(__int64 *)(*(_QWORD *)&sd.SysOptionData + 72i64) >= 0)
      && (!qword_140ACD5B8 || *(__int64 *)(qword_140ACD5B8 + 72) >= 0);
}

bool __fastcall AppMain::SaveDataIsSaveReady(AppMain *this)
{
  if ( dword_140ACD580 > *(_DWORD *)(*(_QWORD *)NtCurrentTeb()->Reserved1[11] + 40i64) )
  {
    Init_thread_header(&dword_140ACD580);
    if ( dword_140ACD580 == -1 )
    {
      sd.SysOptionData = 0i64;
      dword_140ACD598 = 0;
      stru_140ACD5A0.m_state.m_ptr = 0i64;
      stru_140ACD5A0.m_lastError = ErrorCode_None;
      byte_140ACD5B0 = 0;
      qword_140ACD5B8 = 0i64;
      dword_140ACD5C0 = 0;
      stru_140ACD5C8.m_state.m_ptr = 0i64;
      stru_140ACD5C8.m_lastError = ErrorCode_None;
      byte_140ACD5D8 = 0;
      atexit(_anonymous_namespace_::MyAsyncSaveDataManager::Instance_::_2_::_dynamic_atexit_destructor_for__the_instance__);
      Init_thread_footer(&dword_140ACD580);
    }
  }
  return (!stru_140ACD5A0.m_state.m_ptr
       || (stru_140ACD5A0.m_state.m_ptr->m_result.m_value._My_val & 0x8000000000000000ui64) == 0i64)
      && (!stru_140ACD5C8.m_state.m_ptr
       || (stru_140ACD5C8.m_state.m_ptr->m_result.m_value._My_val & 0x8000000000000000ui64) == 0i64);
}

void __fastcall AppMain::SaveDataLoaded_Patch103(AppMain *this)
{
  __int128 *v1; // rax
  unsigned int v2; // er9
  __int128 v3[9]; // [rsp+0h] [rbp-A8h] BYREF

  v1 = v3;
  v3[0] = (__int128)_mm_load_si128((const __m128i *)&_xmm);
  v2 = 0;
  v3[2] = (__int128)_mm_load_si128((const __m128i *)&_xmm);
  v3[1] = (__int128)_mm_load_si128((const __m128i *)&_xmm);
  v3[4] = (__int128)_mm_load_si128((const __m128i *)&_xmm);
  v3[3] = (__int128)_mm_load_si128((const __m128i *)&_xmm);
  v3[6] = (__int128)_mm_load_si128((const __m128i *)&_xmm);
  v3[5] = (__int128)_mm_load_si128((const __m128i *)&_xmm);
  v3[8] = (__int128)_mm_load_si128((const __m128i *)&_xmm);
  v3[7] = (__int128)_mm_load_si128((const __m128i *)&_xmm);
  do
  {
    if ( ((0x80000000 >> (*(_DWORD *)v1 & 0x1F)) & this->SaveDataMain.GameData.m_Gallery.m_Flag[(unsigned __int64)*(unsigned int *)v1 >> 5]) != 0 )
      this->SaveDataMain.PlayerData.m_AchivementStoryClear |= 1 << *((_BYTE *)v1 + 4);
    ++v2;
    v1 = (__int128 *)((char *)v1 + 8);
  }
  while ( v2 < 0x12 );
}

void __fastcall AppMain::SaveDataLoaded_Patch105(AppMain *this)
{
  if ( (this->SaveDataMain.PlayerData.m_EnableCharcterFlag & 0x1000000000000i64) == 0 )
  {
    this->SaveDataMain.PlayerData.m_EnableCharcterFlag |= 0x1000000000000ui64;
    this->SaveDataMain.GameData.m_FirstNoticeFlag.m_Flag[0] |= 0x4000000u;
  }
  if ( (this->SaveDataMain.PlayerData.m_IconEnableFlag[1] & 0x8000) == 0 )
  {
    this->SaveDataMain.PlayerData.m_IconEnableFlag[1] |= 0x8000u;
    this->SaveDataMain.PlayerData.m_IconNewFlag[1] |= 0x8000u;
  }
  if ( (this->SaveDataMain.PlayerData.m_EnableCharcterFlag & 0x2000000000000i64) == 0 )
  {
    this->SaveDataMain.PlayerData.m_EnableCharcterFlag |= 0x2000000000000ui64;
    this->SaveDataMain.GameData.m_FirstNoticeFlag.m_Flag[0] |= 0x2010000u;
  }
  if ( (this->SaveDataMain.PlayerData.m_IconEnableFlag[1] & 0x4000) == 0 )
  {
    this->SaveDataMain.PlayerData.m_IconEnableFlag[1] |= 0x4000u;
    this->SaveDataMain.PlayerData.m_IconNewFlag[1] |= 0x4000u;
  }
}

void __fastcall AppMain::SaveDataLoaded_Steam(AppMain *this, bool fromSave)
{
  char v3; // r15
  char v4; // r14
  int selectedDevice; // edx
  int v6; // eax
  __int64 v7; // rdx
  AgReferenceCount *v8; // rcx
  KOFApplication *v9; // rax
  int v10; // edx
  int v11; // eax
  __int64 v12; // rdx
  AgReferenceCount *v13; // rcx
  KOFApplication *v14; // rax
  int IndexFromSavedDevice; // eax
  __int64 v16; // rcx
  AgReferenceCount *v17; // rdx
  KOFApplication *v18; // rax
  int v19; // eax
  __int64 v20; // rcx
  AgReferenceCount *v21; // rdx
  KOFApplication *v22; // rax
  int v23; // esi
  int v24; // er12
  __int64 *v25; // r13
  __int64 *p_dst; // rdi
  __int64 v27; // rax
  _BYTE *v28; // rax
  AgReferenceCount *v29; // rcx
  KOFApplication *v30; // rax
  _BYTE *v31; // rax
  AgReferenceCount *v32; // rcx
  KOFApplication *v33; // rax
  __int64 *v34; // rax
  __int64 v35; // [rsp+38h] [rbp-59h]
  AgPointer<KOFApplication> v36; // [rsp+40h] [rbp-51h] BYREF
  AgPointer<KOFApplication> v37; // [rsp+50h] [rbp-41h] BYREF
  __int64 v38; // [rsp+60h] [rbp-31h]
  AgPointer<KOFApplication> v39; // [rsp+68h] [rbp-29h] BYREF
  __int64 dst; // [rsp+78h] [rbp-19h] BYREF
  __int64 v41[7]; // [rsp+80h] [rbp-11h] BYREF
  char v42[8]; // [rsp+B8h] [rbp+27h] BYREF

  v38 = -2i64;
  if ( saveLoaded )
  {
    if ( fromSave )
      return;
  }
  else
  {
    if ( !fromSave )
      return;
    saveLoaded = 1;
  }
  `eh vector copy constructor iterator'(
    &dst,
    &Framework::GLManager::glm->m_controllerContext.m_gamepad,
    0x10ui64,
    4ui64,
    (void (__fastcall *)(void *, void *))AgPointer<AgBuffer<AgAllocator<1>>>::AgPointer<AgBuffer<AgAllocator<1>>>,
    (void (__fastcall *)(void *))AgPointer<AgUser>::~AgPointer<AgUser>);
  v3 = 0;
  v4 = 0;
  selectedDevice = this->SaveDataMain.ButtonConfData.buttonConfig[1].selectedDevice;
  if ( (unsigned int)selectedDevice <= 4 && selectedDevice > 0 )
  {
    v6 = selectedDevice - 1;
    v7 = 2i64 * (selectedDevice - 1);
    if ( v41[2 * v6] )
    {
      v8 = (AgReferenceCount *)v41[2 * v6 - 1];
      v9 = (KOFApplication *)v41[2 * v6];
      v41[v7 - 1] = 0i64;
      v41[v7] = 0i64;
      v39.m_ref = v8;
      v39.m_ptr = v9;
      AgPointer<AgUser>::~AgPointer<AgUser>(&v39);
      v3 = 1;
    }
  }
  v10 = this->SaveDataMain.ButtonConfData.buttonConfig[2].selectedDevice;
  if ( (unsigned int)v10 <= 4 && v10 > 0 )
  {
    v11 = v10 - 1;
    v12 = 2i64 * (v10 - 1);
    if ( v41[2 * v11] )
    {
      v13 = (AgReferenceCount *)v41[2 * v11 - 1];
      v14 = (KOFApplication *)v41[2 * v11];
      v41[v12 - 1] = 0i64;
      v41[v12] = 0i64;
      v39.m_ref = v13;
      v39.m_ptr = v14;
      AgPointer<AgUser>::~AgPointer<AgUser>(&v39);
      v4 = 1;
    }
  }
  if ( !v3 )
  {
    IndexFromSavedDevice = anonymous_namespace_::GetIndexFromSavedDevice(&this->SaveDataMain.ButtonConfData.buttonConfig[1].device);
    if ( IndexFromSavedDevice )
    {
      if ( this->SaveDataMain.ButtonConfData.buttonConfig[2].selectedDevice != IndexFromSavedDevice )
      {
        this->SaveDataMain.ButtonConfData.buttonConfig[1].selectedDevice = IndexFromSavedDevice;
        v3 = 1;
        v16 = 2i64 * (IndexFromSavedDevice - 1);
        v17 = (AgReferenceCount *)*(&dst + 2 * IndexFromSavedDevice - 2);
        v18 = (KOFApplication *)v41[2 * IndexFromSavedDevice - 2];
        v41[v16 - 1] = 0i64;
        v41[v16] = 0i64;
        v39.m_ref = v17;
        v39.m_ptr = v18;
        AgPointer<AgUser>::~AgPointer<AgUser>(&v39);
      }
    }
  }
  if ( !v4 )
  {
    v19 = anonymous_namespace_::GetIndexFromSavedDevice(&this->SaveDataMain.ButtonConfData.buttonConfig[2].device);
    if ( v19 )
    {
      if ( this->SaveDataMain.ButtonConfData.buttonConfig[1].selectedDevice != v19 )
      {
        this->SaveDataMain.ButtonConfData.buttonConfig[2].selectedDevice = v19;
        v4 = 1;
        v20 = 2i64 * (v19 - 1);
        v21 = (AgReferenceCount *)*(&dst + 2 * v19 - 2);
        v22 = (KOFApplication *)v41[2 * v19 - 2];
        v41[v20 - 1] = 0i64;
        v41[v20] = 0i64;
        v39.m_ref = v21;
        v39.m_ptr = v22;
        AgPointer<AgUser>::~AgPointer<AgUser>(&v39);
      }
    }
  }
  v23 = 1;
  v24 = 1;
  v25 = v41;
  p_dst = &dst;
  v27 = 4i64;
  v35 = 4i64;
  do
  {
    if ( !*v25 )
      goto LABEL_43;
    if ( !v3 )
    {
      v28 = (_BYTE *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)*v25 + 40i64))(*v25, v42);
      if ( this->SaveDataMain.ButtonConfData.buttonConfig[1].device.uid.m_uid[0] == *v28
        && this->SaveDataMain.ButtonConfData.buttonConfig[1].device.uid.m_uid[1] == v28[1]
        && this->SaveDataMain.ButtonConfData.buttonConfig[1].device.uid.m_uid[2] == v28[2]
        && this->SaveDataMain.ButtonConfData.buttonConfig[1].device.uid.m_uid[3] == v28[3]
        && this->SaveDataMain.ButtonConfData.buttonConfig[1].device.uid.m_uid[4] == v28[4]
        && this->SaveDataMain.ButtonConfData.buttonConfig[1].device.uid.m_uid[5] == v28[5]
        && this->SaveDataMain.ButtonConfData.buttonConfig[1].device.uid.m_uid[6] == v28[6]
        && this->SaveDataMain.ButtonConfData.buttonConfig[1].device.uid.m_uid[7] == v28[7] )
      {
        this->SaveDataMain.ButtonConfData.buttonConfig[1].selectedDevice = v24;
        v29 = (AgReferenceCount *)*p_dst;
        v30 = (KOFApplication *)p_dst[1];
        *p_dst = 0i64;
        p_dst[1] = 0i64;
        v36.m_ref = v29;
        v36.m_ptr = v30;
        AgPointer<AgUser>::~AgPointer<AgUser>(&v36);
        v3 = 1;
        goto LABEL_42;
      }
      v27 = v35;
    }
    if ( v4 )
      goto LABEL_43;
    v31 = (_BYTE *)(*(__int64 (__fastcall **)(__int64, AgPointer<KOFApplication> *))(*(_QWORD *)*v25 + 40i64))(
                     *v25,
                     &v39);
    if ( this->SaveDataMain.ButtonConfData.buttonConfig[2].device.uid.m_uid[0] == *v31
      && this->SaveDataMain.ButtonConfData.buttonConfig[2].device.uid.m_uid[1] == v31[1]
      && this->SaveDataMain.ButtonConfData.buttonConfig[2].device.uid.m_uid[2] == v31[2]
      && this->SaveDataMain.ButtonConfData.buttonConfig[2].device.uid.m_uid[3] == v31[3]
      && this->SaveDataMain.ButtonConfData.buttonConfig[2].device.uid.m_uid[4] == v31[4]
      && this->SaveDataMain.ButtonConfData.buttonConfig[2].device.uid.m_uid[5] == v31[5]
      && this->SaveDataMain.ButtonConfData.buttonConfig[2].device.uid.m_uid[6] == v31[6]
      && this->SaveDataMain.ButtonConfData.buttonConfig[2].device.uid.m_uid[7] == v31[7] )
    {
      this->SaveDataMain.ButtonConfData.buttonConfig[2].selectedDevice = v24;
      v32 = (AgReferenceCount *)*p_dst;
      v33 = (KOFApplication *)p_dst[1];
      *p_dst = 0i64;
      p_dst[1] = 0i64;
      v37.m_ref = v32;
      v37.m_ptr = v33;
      AgPointer<AgUser>::~AgPointer<AgUser>(&v37);
      v4 = 1;
    }
LABEL_42:
    v27 = v35;
LABEL_43:
    ++v24;
    p_dst += 2;
    v25 += 2;
    v35 = --v27;
  }
  while ( v27 );
  v34 = &dst;
  do
  {
    if ( v34[1] )
    {
      if ( v3 )
      {
        if ( !v4 )
        {
          this->SaveDataMain.ButtonConfData.buttonConfig[2].selectedDevice = v23;
          v4 = 1;
        }
      }
      else
      {
        this->SaveDataMain.ButtonConfData.buttonConfig[1].selectedDevice = v23;
        v3 = 1;
      }
    }
    ++v23;
    v34 += 2;
  }
  while ( v34 != (__int64 *)v42 );
  `eh vector destructor iterator'(
    &dst,
    0x10ui64,
    4ui64,
    (void (__fastcall *)(void *))AgPointer<AgUser>::~AgPointer<AgUser>);
}

void __fastcall AppMain::SaveDataLoaded_Version0(AppMain *this)
{
  int m_RankMatchWin; // edx
  unsigned int v3; // ecx
  unsigned int v4; // er11
  unsigned int v5; // er9
  unsigned int v6; // edx
  int v7; // ecx
  unsigned int v8; // edx

  if ( !this->SaveDataMain.PlayerData.m_Version )
  {
    m_RankMatchWin = this->SaveDataMain.PlayerData.m_RankMatchWin;
    v3 = this->SaveDataMain.PlayerData.m_RankMatchLose ^ 0x7B48A35E;
    this->SaveDataMain.PlayerData.m_Version = 1;
    v4 = m_RankMatchWin ^ 0x7B48A35E ^ ((unsigned __int16)m_RankMatchWin ^ 0xA35E ^ (unsigned __int16)((m_RankMatchWin ^ 0x7B48A35Eu) >> 14)) & 0xCCCC ^ ((((unsigned __int16)m_RankMatchWin ^ 0xA35E ^ (unsigned __int16)((m_RankMatchWin ^ 0x7B48A35Eu) >> 14)) & 0xCCCC) << 14);
    v5 = v3 ^ ((unsigned __int16)v3 ^ (unsigned __int16)(v3 >> 14)) & 0xCCCC ^ ((((unsigned __int16)v3 ^ (unsigned __int16)(v3 >> 14)) & 0xCCCC) << 14);
    v6 = this->SaveDataMain.PlayerData.m_RankMatchDraw ^ 0x7B48A35E ^ (LOWORD(this->SaveDataMain.PlayerData.m_RankMatchDraw) ^ 0xA35E ^ (unsigned __int16)((this->SaveDataMain.PlayerData.m_RankMatchDraw ^ 0x7B48A35Eu) >> 14)) & 0xCCCC ^ (((LOWORD(this->SaveDataMain.PlayerData.m_RankMatchDraw) ^ 0xA35E ^ (unsigned __int16)((this->SaveDataMain.PlayerData.m_RankMatchDraw ^ 0x7B48A35Eu) >> 14)) & 0xCCCC) << 14);
    v7 = ((v4 ^ (v4 >> 7)) & 0x550055 ^ v4 ^ (((v4 ^ (v4 >> 7)) & 0x550055) << 7))
       + ((v5 ^ (v5 >> 7)) & 0x550055 ^ v5 ^ (((v5 ^ (v5 >> 7)) & 0x550055) << 7))
       + ((v6 ^ (v6 >> 7)) & 0x550055 ^ v6 ^ (((v6 ^ (v6 >> 7)) & 0x550055) << 7));
    v8 = v7 ^ (v7 ^ (v7 >> 7)) & 0x550055 ^ (((v7 ^ (v7 >> 7)) & 0x550055) << 7);
    this->SaveDataMain.PlayerData.m_RankMatchCount = v8 ^ ((unsigned __int16)v8 ^ (unsigned __int16)(v8 >> 14)) & 0xCCCC ^ ((((unsigned __int16)v8 ^ (unsigned __int16)(v8 >> 14)) & 0xCCCC) << 14) ^ 0x7B48A35E;
  }
}

AgPath *__fastcall AppMain::SaveData_GetGraphicsOptionsPath(AppMain *this, AgPath *result)
{
  const char *CString; // rax
  AgString move; // [rsp+30h] [rbp-268h] BYREF
  AgString other; // [rsp+40h] [rbp-258h] BYREF
  int v7; // [rsp+50h] [rbp-248h]
  AgString copy; // [rsp+58h] [rbp-240h] BYREF
  __int64 v9; // [rsp+68h] [rbp-230h]
  wchar_t text[264]; // [rsp+70h] [rbp-228h] BYREF

  v9 = -2i64;
  *(_QWORD *)&move.m_length = result;
  v7 = 0;
  if ( SHGetFolderPathW(0i64, 35, 0i64, 0, text) < 0 )
  {
    AgString::AgString(&result->m_path, &pnewText, -1);
    AgPath::clean(result);
  }
  else
  {
    AgString::AgString(&copy, text, -1);
    AgString::AgString(&move, &copy);
    AgPath::clean((AgPath *)&move);
    AgString::~AgString(&copy);
    AgString::AgString(&other, "King of Fighters XIV", -1);
    AgPath::append((AgPath *)&move, &other);
    AgString::~AgString(&other);
    CString = AgString::getCString(&move);
    CreateDirectoryA(CString, 0i64);
    AgString::AgString(&other, "graphics_option.json", -1);
    AgPath::append((AgPath *)&move, &other);
    AgString::~AgString(&other);
    AgString::AgString(&result->m_path, &move);
    AgString::~AgString(&move);
  }
  return result;
}

void __fastcall AppMain::SaveData_LoadGraphicsOptions(AppMain *this)
{
  const char *CString; // rax
  int v3; // eax
  unsigned __int64 v4; // rsi
  const char *v5; // rax
  void *v6; // rbx
  cJSON *v7; // rbp
  unsigned __int64 v8; // rdx
  const char *v9; // rax
  cJSON *i; // rbx
  const char *string; // rsi
  AgPath result; // [rsp+28h] [rbp-20h] BYREF
  _iobuf *public_stream; // [rsp+58h] [rbp+10h] BYREF

  AppMain::SaveData_GetGraphicsOptionsPath(this, &result);
  if ( AgString::getLength(&result.m_path) )
  {
    public_stream = 0i64;
    CString = AgString::getCString(&result.m_path);
    fopen_s(&public_stream, CString, "rb");
    if ( public_stream )
    {
      fseek(public_stream, 0, 2);
      v3 = ftell(public_stream);
      v4 = v3;
      if ( v3 )
      {
        v6 = operator new[](v3);
        fseek(public_stream, 0, 0);
        fread(v6, 1ui64, v4, public_stream);
        fclose(public_stream);
        v7 = cJSON_Parse((const char *)v6);
        operator delete(v6, v8);
        if ( v7 )
        {
          for ( i = v7->child; i; i = i->next )
          {
            string = i->string;
            if ( !strcmp(string, "bloom_enable") )
            {
              this->SaveDataMain.GraphicsOptionData.bBloomEnabled = i->valueint != 0;
            }
            else if ( !strcmp(string, "dof_enable") )
            {
              this->SaveDataMain.GraphicsOptionData.bDOFEnabled = i->valueint != 0;
            }
            else if ( !strcmp(string, "fxaa_enable") )
            {
              this->SaveDataMain.GraphicsOptionData.bFXAAEnabled = i->valueint != 0;
            }
            else if ( !strcmp(string, "shadows_enable") )
            {
              this->SaveDataMain.GraphicsOptionData.bShadowsEnabled = i->valueint != 0;
            }
            else if ( !strcmp(string, "godrays_enable") )
            {
              this->SaveDataMain.GraphicsOptionData.bGodRaysEnabled = i->valueint != 0;
            }
            else if ( !strcmp(string, "mipmaps_enable") )
            {
              this->SaveDataMain.GraphicsOptionData.bMipMapsEnabled = i->valueint != 0;
            }
            else if ( !strcmp(string, "anisotropic_enable") )
            {
              this->SaveDataMain.GraphicsOptionData.bAnisotropicFilteringEnabled = i->valueint != 0;
            }
            else if ( !strcmp(string, "heathaze_enable") )
            {
              this->SaveDataMain.GraphicsOptionData.bHeatHazeEnabled = i->valueint != 0;
            }
            else if ( !strcmp(string, "force_shader_purge") )
            {
              this->SaveDataMain.GraphicsOptionData.bForceShaderPurge = i->valueint != 0;
            }
          }
          cJSON_Delete(v7);
        }
        else
        {
          v9 = AgString::getCString(&result.m_path);
          AgTrace("error parsing graphics options file %s\n", v9);
        }
      }
      else
      {
        v5 = AgString::getCString(&result.m_path);
        AgTrace("error opening graphics options file %s\n", v5);
        fclose(public_stream);
      }
    }
  }
  AgString::~AgString(&result.m_path);
}

void __fastcall AppMain::SaveData_SaveGraphicsOptions(AppMain *this)
{
  const char *CString; // rax
  cJSON *Object; // rdi
  cJSON *Number; // rax
  cJSON *v5; // rax
  cJSON *v6; // rax
  cJSON *v7; // rax
  cJSON *v8; // rax
  cJSON *v9; // rax
  cJSON *v10; // rax
  cJSON *v11; // rax
  cJSON *v12; // rax
  char *v13; // rax
  char *v14; // rbx
  unsigned __int64 v15; // r8
  AgPath result; // [rsp+28h] [rbp-20h] BYREF
  _iobuf *public_stream; // [rsp+58h] [rbp+10h] BYREF

  AppMain::SaveData_GetGraphicsOptionsPath(this, &result);
  if ( AgString::getLength(&result.m_path) )
  {
    public_stream = 0i64;
    CString = AgString::getCString(&result.m_path);
    fopen_s(&public_stream, CString, "wb");
    if ( public_stream )
    {
      Object = cJSON_CreateObject();
      if ( Object )
      {
        Number = cJSON_CreateNumber((double)this->SaveDataMain.GraphicsOptionData.bBloomEnabled);
        cJSON_AddItemToObject(Object, "bloom_enable", Number);
        v5 = cJSON_CreateNumber((double)this->SaveDataMain.GraphicsOptionData.bDOFEnabled);
        cJSON_AddItemToObject(Object, "dof_enable", v5);
        v6 = cJSON_CreateNumber((double)this->SaveDataMain.GraphicsOptionData.bFXAAEnabled);
        cJSON_AddItemToObject(Object, "fxaa_enable", v6);
        v7 = cJSON_CreateNumber((double)this->SaveDataMain.GraphicsOptionData.bShadowsEnabled);
        cJSON_AddItemToObject(Object, "shadows_enable", v7);
        v8 = cJSON_CreateNumber((double)this->SaveDataMain.GraphicsOptionData.bGodRaysEnabled);
        cJSON_AddItemToObject(Object, "godrays_enable", v8);
        v9 = cJSON_CreateNumber((double)this->SaveDataMain.GraphicsOptionData.bMipMapsEnabled);
        cJSON_AddItemToObject(Object, "mipmaps_enable", v9);
        v10 = cJSON_CreateNumber((double)this->SaveDataMain.GraphicsOptionData.bAnisotropicFilteringEnabled);
        cJSON_AddItemToObject(Object, "anisotropic_enable", v10);
        v11 = cJSON_CreateNumber((double)this->SaveDataMain.GraphicsOptionData.bHeatHazeEnabled);
        cJSON_AddItemToObject(Object, "heathaze_enable", v11);
        v12 = cJSON_CreateNumber((double)this->SaveDataMain.GraphicsOptionData.bForceShaderPurge);
        cJSON_AddItemToObject(Object, "force_shader_purge", v12);
        v13 = cJSON_Print(Object);
        v14 = v13;
        v15 = -1i64;
        do
          ++v15;
        while ( v13[v15] );
        fwrite(v13, 1ui64, v15, public_stream);
        fclose(public_stream);
        free(v14);
        cJSON_Delete(Object);
      }
      else
      {
        fclose(public_stream);
      }
    }
  }
  AgString::~AgString(&result.m_path);
}

void __fastcall AppMain::SetNetworkTitleNewFlag(AppMain *this, NETWORK_TITLE id, bool flag)
{
  int v4; // er10
  int v5; // er8
  unsigned __int64 v6; // rax
  char v7; // cl
  unsigned int v8; // edx
  int v9; // eax
  AgAchievementsManager *v10; // rcx

  if ( flag )
    this->SaveDataMain.GameData.m_NetworkTitle.m_NewFlag[(unsigned __int64)(unsigned int)id >> 5] |= 0x80000000 >> (id & 0x1F);
  else
    this->SaveDataMain.GameData.m_NetworkTitle.m_NewFlag[(unsigned __int64)(unsigned int)id >> 5] &= ~(0x80000000 >> (id & 0x1F));
  v4 = 0;
  v5 = 1;
  do
  {
    v6 = (unsigned __int64)(unsigned int)v5 >> 5;
    v7 = v5++ & 0x1F;
    v8 = this->SaveDataMain.GameData.m_NetworkTitle.m_Flag[v6] & (0x80000000 >> v7);
    v9 = v4 + 1;
    if ( !v8 )
      v9 = v4;
    v4 = v9;
  }
  while ( v5 < 300 );
  if ( (float)((float)((float)((float)v9 / 299.0) * 100.0) * 100.0) == 10000.0
    && this->SaveDataMain.PlayerData.m_AchivementLog[19] <= 1 )
  {
    v10 = (AgAchievementsManager *)AgSingleton<AgAchievementsManager>::ms_instance;
    this->SaveDataMain.PlayerData.m_AchivementLog[19] = 1;
    AgAchievementsManager::unlock(v10, (AgAchievementPlatformData *)&stru_140A9BE60);
  }
}

void __fastcall AppMain::SetOpponentList(
        AppMain *this,
        Fw::ONLINEID *pOnlineId,
        BATTLE_RESULT_TYPE resultType,
        GAME_RULE gameMode)
{
  unsigned __int64 data; // rbp
  OpponentList *m_OpponentList; // r14
  unsigned __int64 v6; // r11
  int v7; // er10
  int v9; // eax
  int v10; // edi
  int v11; // ebx
  OpponentList *v12; // rdx
  unsigned __int64 *p_m_Tick; // rax
  int v14; // edx
  unsigned __int64 *v15; // rcx
  __int64 v16; // rcx
  OpponentList *v17; // rbx
  double v18; // xmm0_8
  unsigned __int64 v19; // rcx

  data = pOnlineId->data;
  m_OpponentList = this->SaveDataMain.GameData.m_OpponentList;
  v6 = -1i64;
  v7 = 0;
  v9 = 0;
  v10 = -1;
  v11 = -1;
  v12 = this->SaveDataMain.GameData.m_OpponentList;
  while ( data != v12->m_OnlineId.data )
  {
    if ( v11 == -1 && !v12->m_OnlineId.data )
      v11 = v9;
    ++v9;
    ++v12;
    if ( v9 >= 2000 )
      goto LABEL_9;
  }
  v10 = v9;
  if ( v9 != -1 )
    goto LABEL_22;
LABEL_9:
  if ( v11 != -1 )
    goto LABEL_21;
  p_m_Tick = &this->SaveDataMain.GameData.m_OpponentList[0].m_Tick;
  v14 = 0;
  v15 = &this->SaveDataMain.GameData.m_OpponentList[0].m_Tick;
  do
  {
    if ( *v15 < v6 && !*((_BYTE *)v15 + 24) )
    {
      v6 = *v15;
      v10 = v14;
    }
    ++v14;
    v15 += 5;
  }
  while ( v14 < 2000 );
  if ( v10 == -1 )
  {
    do
    {
      if ( *p_m_Tick < v6 && *((_BYTE *)p_m_Tick + 24) )
      {
        v6 = *p_m_Tick;
        v10 = v7;
      }
      ++v7;
      p_m_Tick += 5;
    }
    while ( v7 < 2000 );
  }
  v16 = v10;
  m_OpponentList[v16].m_OnlineId.data = 0i64;
  m_OpponentList[v16].m_Tick = 0i64;
  *(_QWORD *)&m_OpponentList[v16].m_BattleWinNum = 0i64;
  *(_QWORD *)&m_OpponentList[v16].m_BattleDrawNum = 0i64;
  *(_QWORD *)&m_OpponentList[v16].m_FriendFlag = 0i64;
  if ( v10 == -1 )
  {
LABEL_21:
    v17 = &this->SaveDataMain.GameData.m_OpponentList[v11];
    v17->m_Tick = 0i64;
    *(_QWORD *)&v17->m_BattleWinNum = 0i64;
    *(_QWORD *)&v17->m_BattleDrawNum = 0i64;
    *(_QWORD *)&v17->m_FriendFlag = 0i64;
    v17->m_OnlineId.data = data;
    goto LABEL_23;
  }
LABEL_22:
  v17 = &this->SaveDataMain.GameData.m_OpponentList[v10];
LABEL_23:
  if ( gameMode >= GAME_RULE_SINGLE )
  {
    if ( gameMode <= GAME_RULE_PARTY )
    {
      if ( resultType )
      {
        if ( resultType == BATTLE_RESULT_TYPE_LOSE )
        {
          ++v17->m_BattleLoseNum;
        }
        else if ( resultType == BATTLE_RESULT_TYPE_DRAW )
        {
          ++v17->m_BattleDrawNum;
        }
      }
      else
      {
        ++v17->m_BattleWinNum;
      }
    }
    else if ( gameMode == GAME_RULE_TRAINING )
    {
      ++v17->m_TrainingNum;
    }
  }
  v18 = AgClock::getSystemTime() * 1000000.0;
  v19 = 0i64;
  if ( v18 >= 9.223372036854776e18 )
  {
    v18 = v18 - 9.223372036854776e18;
    if ( v18 < 9.223372036854776e18 )
      v19 = 0x8000000000000000ui64;
  }
  v17->m_Tick = v19 + (unsigned int)(int)v18;
}

bool __fastcall AppMain::SetReplaySaveData(AppMain *this, BattleReplay *pReplay)
{
  bool result; // al
  __int64 v5; // r8
  __int64 v6; // r12
  unsigned int *v7; // rdx
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // rcx
  int SaveReplayIndex; // eax
  unsigned __int64 v12; // rdx
  BattleReplay *v13; // rsi
  BattleReplay *v14; // rax
  BattleReplay *v15; // rcx
  __int128 v16; // xmm0
  int v17; // er15
  void **m_pBuffer; // rbx
  int *v19; // r13
  void **v20; // rdi
  unsigned int *v21; // rbp
  unsigned __int64 v22; // r14
  void *v23; // rax
  const void *v24; // rdx
  unsigned __int64 v25; // rdx
  int *v26; // rdi
  char *v27; // [rsp+20h] [rbp-58h]
  int v29; // [rsp+30h] [rbp-48h] BYREF
  __int16 v30; // [rsp+34h] [rbp-44h]

  if ( pReplay->m_Over )
    return 0;
  v5 = 0i64;
  v6 = 6i64;
  v7 = &pReplay->m_BufferSize[0][1];
  v8 = 6i64;
  do
  {
    v9 = *v7;
    v10 = *(v7 - 1);
    v7 += 2;
    v5 += v10 + v9;
    --v8;
  }
  while ( v8 );
  if ( (unsigned __int64)(v5 + 1104) >= 0x1F7E8 )
    return 0;
  SaveReplayIndex = AppMain::GetSaveReplayIndex(this);
  if ( SaveReplayIndex == -1 )
    return 0;
  v12 = 8i64;
  v13 = &this->SaveDataReplay.m_Replay[SaveReplayIndex];
  v14 = v13;
  v29 = 0;
  v15 = pReplay;
  v30 = 0;
  do
  {
    v14 = (BattleReplay *)((char *)v14 + 128);
    v16 = *(_OWORD *)&v15->m_Date;
    v15 = (BattleReplay *)((char *)v15 + 128);
    *(_OWORD *)&v14[-1].m_StageTelop[16] = v16;
    *(_OWORD *)&v14[-1].m_StageTelop[32] = *(_OWORD *)&v15[-1].m_StageTelop[32];
    *(_OWORD *)&v14[-1].m_StageTelop[48] = *(_OWORD *)&v15[-1].m_StageTelop[48];
    *(_OWORD *)v14[-1].m_pBuffer = *(_OWORD *)v15[-1].m_pBuffer;
    *(_OWORD *)&v14[-1].m_pBuffer[2] = *(_OWORD *)&v15[-1].m_pBuffer[2];
    *(_OWORD *)&v14[-1].m_pBuffer[4] = *(_OWORD *)&v15[-1].m_pBuffer[4];
    *(_OWORD *)&v14[-1].m_UploadOnlineId.data = *(_OWORD *)&v15[-1].m_UploadOnlineId.data;
    *(_OWORD *)&v14[-1].m_Lock = *(_OWORD *)&v15[-1].m_Lock;
    --v12;
  }
  while ( v12 );
  v17 = 0;
  m_pBuffer = (void **)v13->m_pBuffer;
  v19 = &v29;
  v20 = (void **)v13->m_pBuffer;
  *(_OWORD *)&v14->m_Date = *(_OWORD *)&v15->m_Date;
  v21 = &v13->m_BufferSize[0][1];
  *(_OWORD *)&v14->m_BufferSize[0][0] = *(_OWORD *)&v15->m_BufferSize[0][0];
  *(_OWORD *)&v14->m_BufferSize[2][0] = *(_OWORD *)&v15->m_BufferSize[2][0];
  *(_OWORD *)&v14->m_BufferSize[4][0] = *(_OWORD *)&v15->m_BufferSize[4][0];
  *(_OWORD *)&v14->m_UserInfo[0][0].onlineId.data = *(_OWORD *)&v15->m_UserInfo[0][0].onlineId.data;
  v27 = (char *)((char *)pReplay - (char *)v13);
  while ( 1 )
  {
    v22 = *v21 + *(v21 - 1);
    if ( (_DWORD)v22 )
      break;
LABEL_18:
    ++v17;
    ++v20;
    v21 += 2;
    v19 = (int *)((char *)v19 + 1);
    if ( v17 >= 6 )
    {
      v13->m_UploadOnlineId.data = pReplay->m_UploadOnlineId.data;
      v13->m_DownloadDate = pReplay->m_DownloadDate;
      v13->m_Lock = 0;
      v13->m_Download = pReplay->m_Download;
      result = 1;
      *(_WORD *)&v13->m_Best = -256;
      v13->m_NewBuffer = 1;
      return result;
    }
  }
  if ( v13->m_NewBuffer && *v20 )
  {
    operator delete(*v20, v12);
    *v20 = 0i64;
  }
  v23 = operator new[](v22);
  *v20 = v23;
  if ( v23 )
  {
    v24 = *(void **)((char *)v20 + (_QWORD)v27);
    if ( v24 )
    {
      memmove(v23, v24, v22);
      *(_BYTE *)v19 = 1;
      goto LABEL_18;
    }
  }
  memset(v13, 0, 0x450ui64);
  v26 = &v29;
  do
  {
    if ( *(_BYTE *)v26 )
    {
      if ( *m_pBuffer )
      {
        operator delete(*m_pBuffer, v25);
        *m_pBuffer = 0i64;
      }
    }
    ++m_pBuffer;
    v26 = (int *)((char *)v26 + 1);
    --v6;
  }
  while ( v6 );
  return 0;
}

void __fastcall AppMain::SetSaveDataKeyConfigUserUID(
        AppMain *this,
        const std::piecewise_construct_t *userindex,
        AgControllerUID contUID,
        const FighterOperationMapper *buttonMap)
{
  std::_Tree<std::_Tmap_traits<AgControllerUID,FighterOperationMapper,std::less<AgControllerUID>,std::allocator<std::pair<AgControllerUID const ,FighterOperationMapper> >,0> > *v5; // r14
  const AgControllerUID *Myhead; // rbx
  AgControllerUID v7; // rdi
  std::_Tree_node<std::pair<AgControllerUID const ,FighterOperationMapper>,void *> *_Newnode; // rax
  std::tuple<AgControllerUID const &> v9; // [rsp+30h] [rbp-38h] BYREF
  AgControllerUID right; // [rsp+38h] [rbp-30h] BYREF

  right = contUID;
  v5 = (std::_Tree<std::_Tmap_traits<AgControllerUID,FighterOperationMapper,std::less<AgControllerUID>,std::allocator<std::pair<AgControllerUID const ,FighterOperationMapper> >,0> > *)((char *)this + 1056 * (int)userindex);
  Myhead = (const AgControllerUID *)v5[137344]._Mypair._Myval2._Myval2._Myhead;
  v7 = Myhead[1];
  while ( !*(_BYTE *)(*(_QWORD *)&v7 + 25i64) )
  {
    if ( operator<((const AgControllerUID *)(*(_QWORD *)&v7 + 28i64), &right) )
    {
      v7 = *(AgControllerUID *)(*(_QWORD *)&v7 + 16i64);
    }
    else
    {
      Myhead = (const AgControllerUID *)v7;
      v7 = **(AgControllerUID **)&v7;
    }
  }
  if ( Myhead == (const AgControllerUID *)v5[137344]._Mypair._Myval2._Myval2._Myhead
    || operator<(&right, (const AgControllerUID *)((char *)Myhead + 28)) )
  {
    v9._Myfirst._Val = &right;
    _Newnode = std::_Tree_comp_alloc<std::_Tmap_traits<AgControllerUID,FighterOperationMapper,std::less<AgControllerUID>,std::allocator<std::pair<AgControllerUID const,FighterOperationMapper>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<AgControllerUID const &>,std::tuple<>>(
                 v5 + 137344,
                 userindex,
                 &v9,
                 (std::tuple<> *)buttonMap);
    std::_Tree<std::_Tmap_traits<AgControllerUID,FighterOperationMapper,std::less<AgControllerUID>,std::allocator<std::pair<AgControllerUID const,FighterOperationMapper>>,0>>::_Insert_hint<std::pair<AgControllerUID const,FighterOperationMapper> &,std::_Tree_node<std::pair<AgControllerUID const,FighterOperationMapper>,void *> *>(
      v5 + 137344,
      (std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgControllerUID const ,FighterOperationMapper> > > > *)&v9,
      (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgControllerUID const ,FighterOperationMapper> > > >)Myhead,
      &_Newnode->_Myval,
      _Newnode);
    Myhead = v9._Myfirst._Val;
  }
  *(_OWORD *)&Myhead[4].m_uid[4] = *(_OWORD *)buttonMap->m_mapping;
  *(_OWORD *)&Myhead[6].m_uid[4] = *(_OWORD *)&buttonMap->m_mapping[4];
  *(const AgControllerUID *)((char *)Myhead + 68) = *(const AgControllerUID *)&buttonMap->m_mapping[8];
}

__int64 __fastcall AppMain::UpdateDisconnectLevel(AppMain *this)
{
  int m_DisconnectNum; // edx
  DISCONNECT_LEVEL v3; // er9
  int v4; // eax
  int v5; // edx
  DISCONNECT_LEVEL m_DisconnectLevel; // ecx

  m_DisconnectNum = this->SaveDataMain.PlayerData.m_DisconnectNum;
  v3 = DISCONNECT_LEVEL5;
  if ( m_DisconnectNum > 0 )
  {
    switch ( m_DisconnectNum )
    {
      case 1:
        v4 = 1;
        break;
      case 2:
        v4 = 2;
        break;
      case 3:
        v4 = 3;
        break;
      case 4:
        v4 = 4;
        break;
      default:
        v4 = 5;
        break;
    }
  }
  else
  {
    v4 = -1;
  }
  this->SaveDataMain.PlayerData.m_DisconnectLevel += v4;
  v5 = 0;
  m_DisconnectLevel = this->SaveDataMain.PlayerData.m_DisconnectLevel;
  this->SaveDataMain.PlayerData.m_DisconnectNum = 0;
  if ( m_DisconnectLevel > DISCONNECT_LEVEL_NONE )
    v5 = m_DisconnectLevel;
  if ( v5 < 5 )
    v3 = v5;
  this->SaveDataMain.PlayerData.m_DisconnectLevel = v3;
  return (unsigned int)v3;
}

__int64 __fastcall AppMain::UpdateNetworkTitle(AppMain *this, bool battleNumUpdateFlag)
{
  unsigned __int16 m_BattleNum; // ax
  NETWORK_TITLE v3; // ebx

  m_BattleNum = this->SaveDataMain.GameData.m_NetworkTitle.m_BattleNum;
  if ( m_BattleNum != 0xFFFF )
    this->SaveDataMain.GameData.m_NetworkTitle.m_BattleNum = m_BattleNum + 1;
  v3 = NETWORK_TITLE_063;
  while ( ((0x80000000 >> (v3 & 0x1F)) & this->SaveDataMain.GameData.m_NetworkTitle.m_Flag[(unsigned __int64)(unsigned int)v3 >> 5]) != 0 )
  {
    if ( ++v3 >= NETWORK_TITLE_MAX )
      return 0i64;
  }
  if ( v3 == NETWORK_TITLE_DEFAULT )
    return 0i64;
  this->SaveDataMain.GameData.m_NetworkTitle.m_Flag[(unsigned __int64)(unsigned int)v3 >> 5] |= 0x80000000 >> (v3 & 0x1F);
  AppMain::SetNetworkTitleNewFlag(this, v3, 1);
  return (unsigned int)v3;
}

void __fastcall SaveRecord_RecordKey::UpdateRecordKey(SaveRecord_RecordKey *this)
{
  __int64 v1; // r12
  __int64 v2; // r15
  unsigned int *v3; // r13
  BattleSystem::BattleController *v4; // rbp
  unsigned __int64 v5; // rsi
  unsigned int *v6; // rdi
  __int64 v7; // r14
  __int64 v8; // rbx
  BattleSystem::BattleController *v9; // rax
  __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  char *v12; // r11
  __int64 v13; // rax
  __int16 *v14; // r8
  __int64 v15; // r10
  __int64 v16; // rax
  int v17; // edx
  __int64 v18; // r9
  int v19; // edx
  int v20; // ecx
  int v21; // er9
  int v22; // ecx
  BattleSystem::BattleController *v23; // [rsp+28h] [rbp-50h]
  __int64 v25; // [rsp+88h] [rbp+10h]
  unsigned int *v26; // [rsp+90h] [rbp+18h]
  __int64 v27; // [rsp+98h] [rbp+20h]

  if ( !this->m_Version )
  {
    v1 = 0i64;
    v2 = 7i64;
    v3 = &this->m_KeyCount[0][1];
    v26 = &this->m_KeyCount[0][1];
    v27 = 2i64;
    v4 = BattleSystem::BattleController::instance;
    do
    {
      v5 = 1i64;
      v6 = v3;
      v7 = 5i64;
      do
      {
        v8 = *v6;
        if ( (_DWORD)v8 )
        {
          if ( !v4 )
          {
            v23 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
            BattleSystem::BattleController::BattleController(v23);
            v4 = v9;
            BattleSystem::BattleController::instance = v9;
          }
          v10 = v1;
          if ( (unsigned __int64)(v2 - 7) > 0xB )
            v10 = 0i64;
          v11 = v5;
          if ( v5 > 5 )
            v11 = 0i64;
          v12 = (char *)v4 + 96 * v10 + 16 * v11;
          v13 = *((_QWORD *)v12 + 31893);
          *(_DWORD *)(v13 + 16) = 0;
          *(_QWORD *)(v13 + 32) = 0i64;
          *((_DWORD *)v12 + 63788) = 0;
          v14 = (__int16 *)*((_QWORD *)&this->m_Version + v2 + v5);
          v15 = v8;
          do
          {
            v16 = *((_QWORD *)v12 + 31893);
            if ( *(_DWORD *)(v16 + 16) < *((_DWORD *)v12 + 63789) )
            {
              v17 = *v14;
              LODWORD(v25) = (unsigned __int8)v17;
              v18 = *(_QWORD *)(v16 + 24);
              if ( v18 )
              {
                HIDWORD(v25) = (unsigned __int8)(v17 >> 12);
                *(_QWORD *)(v18 + 8i64 * *(unsigned int *)(v16 + 36)) = v25;
                v19 = *(_DWORD *)(v16 + 12);
                v20 = v19 & (*(_DWORD *)(v16 + 36) + 1);
                *(_DWORD *)(v16 + 36) = v20;
                v21 = *(_DWORD *)(v16 + 32);
                if ( v20 == v21 )
                  *(_DWORD *)(v16 + 32) = v19 & (v21 + 1);
                v22 = *(_DWORD *)(v16 + 16);
                if ( *(_DWORD *)(v16 + 8) != v22 )
                  *(_DWORD *)(v16 + 16) = v22 + 1;
              }
            }
            ++v14;
            --v15;
          }
          while ( v15 );
        }
        ++v5;
        ++v6;
        --v7;
      }
      while ( v7 );
      ++v1;
      v3 = v26 + 6;
      v26 += 6;
      v2 += 6i64;
      --v27;
    }
    while ( v27 );
  }
}

std::_Tree_node<std::pair<AgControllerUID const ,FighterOperationMapper>,void *> *__fastcall std::_Tree_comp_alloc<std::_Tmap_traits<AgControllerUID,FighterOperationMapper,std::less<AgControllerUID>,std::allocator<std::pair<AgControllerUID const,FighterOperationMapper>>,0>>::_Buynode0(
        std::_Tree_comp_alloc<std::_Tmap_traits<AgControllerUID,FighterOperationMapper,std::less<AgControllerUID>,std::allocator<std::pair<AgControllerUID const ,FighterOperationMapper> >,0> > *this)
{
  std::_Tree_node<std::pair<AgControllerUID const ,FighterOperationMapper>,void *> *result; // rax

  result = (std::_Tree_node<std::pair<AgControllerUID const ,FighterOperationMapper>,void *> *)operator new(0x50ui64);
  if ( result )
    result->_Left = this->_Mypair._Myval2._Myval2._Myhead;
  if ( result != (std::_Tree_node<std::pair<AgControllerUID const ,FighterOperationMapper>,void *> *)-8i64 )
    result->_Parent = this->_Mypair._Myval2._Myval2._Myhead;
  if ( result != (std::_Tree_node<std::pair<AgControllerUID const ,FighterOperationMapper>,void *> *)-16i64 )
    result->_Right = this->_Mypair._Myval2._Myval2._Myhead;
  return result;
}

AgPath *__fastcall AgPath::append(AgPath *this, const AgString *other)
{
  int v4; // edi
  unsigned int Length; // eax
  unsigned int v6; // eax
  int v7; // ebp
  const AgString *v8; // rax
  AgString s1; // [rsp+28h] [rbp-30h] BYREF
  AgString result; // [rsp+38h] [rbp-20h] BYREF

  v4 = 0;
  if ( !AgString::getLength(&this->m_path)
    || (Length = AgString::getLength(&this->m_path), *AgString::operator[](&this->m_path, Length - 1) == 47)
    || (v6 = AgString::getLength(&this->m_path), v7 = 1, *AgString::operator[](&this->m_path, v6 - 1) == 58) )
  {
    v7 = 0;
  }
  if ( !AgString::getLength((AgString *)other) || *AgString::operator[]((AgString *)other, 0) != 47 )
    v4 = 1;
  if ( (v4 & v7) != 0 )
  {
    AgString::AgString(&s1, "/", -1);
    v8 = operator+(&result, &s1, other);
    AgString::operator+=(&this->m_path, v8);
    AgString::~AgString(&result);
    AgString::~AgString(&s1);
  }
  else
  {
    AgString::operator+=(&this->m_path, other);
  }
  return this;
}

std::string *__fastcall std::string::c_str(std::string *this)
{
  if ( this->_Mypair._Myval2._Myres < 0x10 )
    return this;
  else
    return (std::string *)this->_Mypair._Myval2._Bx._Ptr;
}

std::string *__fastcall extension::FutureSaveData::getData(extension::FutureSaveData *this, std::string *result)
{
  extension::savedata_detail::AsyncSaveDataState *m_ptr; // rcx
  std::string *Data; // rdx
  char v5; // di
  std::string *Ptr; // rax
  char v7; // di
  char *v8; // rcx
  char *v9; // rax
  void *v10; // rcx
  unsigned __int64 v11; // rax
  std::string resulta; // [rsp+30h] [rbp-58h] BYREF
  __int64 v14[3]; // [rsp+50h] [rbp-38h] BYREF
  unsigned __int64 v15; // [rsp+68h] [rbp-20h]

  m_ptr = this->m_state.m_ptr;
  if ( m_ptr )
  {
    Data = extension::savedata_detail::AsyncSaveDataState::getData(m_ptr, &resulta);
    v5 = 2;
  }
  else
  {
    v15 = 15i64;
    v14[2] = 0i64;
    LOBYTE(v14[0]) = 0;
    Data = (std::string *)v14;
    v5 = 1;
  }
  result->_Mypair._Myval2._Myres = 15i64;
  result->_Mypair._Myval2._Mysize = 0i64;
  if ( result->_Mypair._Myval2._Myres < 0x10 )
    Ptr = result;
  else
    Ptr = (std::string *)result->_Mypair._Myval2._Bx._Ptr;
  Ptr->_Mypair._Myval2._Bx._Buf[0] = 0;
  std::string::_Assign_rv(result, Data);
  v7 = v5 | 4;
  if ( (v7 & 2) != 0 )
  {
    v7 &= ~2u;
    if ( resulta._Mypair._Myval2._Myres >= 0x10 )
    {
      v8 = resulta._Mypair._Myval2._Bx._Ptr;
      if ( resulta._Mypair._Myval2._Myres + 1 >= 0x1000 )
      {
        if ( (resulta._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
          invalid_parameter_noinfo_noreturn();
        v9 = (char *)*((_QWORD *)resulta._Mypair._Myval2._Bx._Ptr - 1);
        if ( v9 >= resulta._Mypair._Myval2._Bx._Ptr )
          invalid_parameter_noinfo_noreturn();
        if ( (char *)(resulta._Mypair._Myval2._Bx._Ptr - v9) < (char *)8 )
          invalid_parameter_noinfo_noreturn();
        if ( (char *)(resulta._Mypair._Myval2._Bx._Ptr - v9) > (char *)0x27 )
          invalid_parameter_noinfo_noreturn();
        v8 = (char *)*((_QWORD *)resulta._Mypair._Myval2._Bx._Ptr - 1);
      }
      operator delete(v8);
    }
    resulta._Mypair._Myval2._Myres = 15i64;
    resulta._Mypair._Myval2._Mysize = 0i64;
    resulta._Mypair._Myval2._Bx._Buf[0] = 0;
  }
  if ( (v7 & 1) != 0 && v15 >= 0x10 )
  {
    v10 = (void *)v14[0];
    if ( v15 + 1 >= 0x1000 )
    {
      if ( (v14[0] & 0x1F) != 0 )
        invalid_parameter_noinfo_noreturn();
      v11 = *(_QWORD *)(v14[0] - 8);
      if ( v11 >= v14[0] )
        invalid_parameter_noinfo_noreturn();
      if ( v14[0] - v11 < 8 )
        invalid_parameter_noinfo_noreturn();
      if ( v14[0] - v11 > 0x27 )
        invalid_parameter_noinfo_noreturn();
      v10 = *(void **)(v14[0] - 8);
    }
    operator delete(v10);
  }
  return result;
}

__int64 __fastcall extension::KeyValueTable::getInt(extension::KeyValueTable *this, const std::string *k)
{
  std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > > > > result; // [rsp+30h] [rbp+8h] BYREF

  std::_Hash<std::_Umap_traits<std::string,extension::RCWeakPtr<extension::BasicFutureObject<OGLMirror,void>::Body>,std::_Uhash_compare<std::string,std::hash<std::string>,std::equal_to<std::string>>,std::allocator<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLMirror,void>::Body>>>,0>>::lower_bound(
    (std::_Hash<std::_Umap_traits<std::string,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body>,std::_Uhash_compare<std::string,std::hash<std::string >,std::equal_to<std::string > >,std::allocator<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > >,0> > *)this,
    &result,
    k);
  if ( result._Ptr != (std::_List_node<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >,void *> *)this->m_data._List._Mypair._Myval2._Myhead )
  {
    if ( LODWORD(result._Ptr->_Myval.second.m_ptr) == 1 )
      return (unsigned int)(int)*(double *)&result._Ptr->_Myval.second.m_proxy.m_ptr;
    if ( LODWORD(result._Ptr->_Myval.second.m_ptr) == 2 )
      return LODWORD(result._Ptr->_Myval.second.m_proxy.m_ptr);
  }
  return 0i64;
}

bool __fastcall extension::KeyValueTable::hasValue(extension::KeyValueTable *this, const std::string *k)
{
  std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > > > > result; // [rsp+30h] [rbp+8h] BYREF

  std::_Hash<std::_Umap_traits<std::string,extension::RCWeakPtr<extension::BasicFutureObject<OGLMirror,void>::Body>,std::_Uhash_compare<std::string,std::hash<std::string>,std::equal_to<std::string>>,std::allocator<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLMirror,void>::Body>>>,0>>::lower_bound(
    (std::_Hash<std::_Umap_traits<std::string,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body>,std::_Uhash_compare<std::string,std::hash<std::string >,std::equal_to<std::string > >,std::allocator<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > >,0> > *)this,
    &result,
    k);
  return result._Ptr != (std::_List_node<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >,void *> *)this->m_data._List._Mypair._Myval2._Myhead
      && LODWORD(result._Ptr->_Myval.second.m_ptr) != 0;
}

std::string *__fastcall std::string::insert(
        std::string *this,
        unsigned __int64 _Off,
        const std::string *_Right,
        unsigned __int64 _Roff,
        unsigned __int64 _Count)
{
  unsigned __int64 Mysize; // rax
  const std::string *v7; // r14
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rsi
  unsigned __int64 Myres; // rax
  std::string *Ptr; // rdx
  std::string *v15; // rax
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  std::string *v19; // rax
  std::string *v20; // rcx
  std::string *v21; // rcx
  bool v22; // cf
  std::string *v23; // rax

  Mysize = _Right->_Mypair._Myval2._Mysize;
  v7 = _Right;
  if ( Mysize < _Roff )
    std::_Xout_of_range("invalid string position");
  v9 = this->_Mypair._Myval2._Mysize;
  v10 = Mysize - _Roff;
  v11 = _Count;
  if ( _Count > v10 )
    v11 = v10;
  if ( ~v9 <= v11 )
    std::_Xlength_error("string too long");
  v12 = v9 + v11;
  if ( v11 )
  {
    if ( v12 == -1i64 )
      std::_Xlength_error("string too long");
    if ( this->_Mypair._Myval2._Myres >= v12 )
    {
      if ( !v12 )
      {
        this->_Mypair._Myval2._Mysize = 0i64;
        if ( this->_Mypair._Myval2._Myres < 0x10 )
          this->_Mypair._Myval2._Bx._Buf[0] = 0;
        else
          *this->_Mypair._Myval2._Bx._Ptr = 0;
        return this;
      }
    }
    else
    {
      std::string::_Copy(this, v9 + v11, v9);
      if ( !v12 )
        return this;
    }
    Myres = this->_Mypair._Myval2._Myres;
    if ( Myres < 0x10 )
      Ptr = this;
    else
      Ptr = (std::string *)this->_Mypair._Myval2._Bx._Ptr;
    if ( Myres < 0x10 )
      v15 = this;
    else
      v15 = (std::string *)this->_Mypair._Myval2._Bx._Ptr;
    v16 = this->_Mypair._Myval2._Mysize;
    if ( v16 )
      memmove(&v15->_Mypair._Myval2._Bx._Buf[v11], Ptr, v16);
    if ( this == v7 )
    {
      v17 = this->_Mypair._Myval2._Myres;
      v18 = _Roff + v11;
      if ( !_Roff )
        v18 = 0i64;
      if ( v17 < 0x10 )
        v19 = this;
      else
        v19 = (std::string *)this->_Mypair._Myval2._Bx._Ptr;
      if ( v17 < 0x10 )
        v20 = this;
      else
        v20 = (std::string *)this->_Mypair._Myval2._Bx._Ptr;
      memmove(v20, &v19->_Mypair._Myval2._Bx._Buf[v18], v11);
    }
    else
    {
      if ( v7->_Mypair._Myval2._Myres >= 0x10 )
        v7 = (const std::string *)v7->_Mypair._Myval2._Bx._Ptr;
      if ( this->_Mypair._Myval2._Myres < 0x10 )
        v21 = this;
      else
        v21 = (std::string *)this->_Mypair._Myval2._Bx._Ptr;
      memmove(v21, &v7->_Mypair._Myval2._Bx._Buf[_Roff], v11);
    }
    v22 = this->_Mypair._Myval2._Myres < 0x10;
    this->_Mypair._Myval2._Mysize = v12;
    if ( v22 )
      v23 = this;
    else
      v23 = (std::string *)this->_Mypair._Myval2._Bx._Ptr;
    v23->_Mypair._Myval2._Bx._Buf[v12] = 0;
  }
  return this;
}

std::string *__fastcall std::string::insert(
        std::string *this,
        unsigned __int64 _Off,
        const char *_Ptr,
        unsigned __int64 _Count)
{
  std::string *v6; // rbx
  unsigned __int64 Myres; // rdx
  std::string *v8; // rax
  std::string *v9; // rax
  unsigned __int64 Mysize; // r8
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rax
  std::string *Ptr; // rdx
  std::string *v15; // rax
  size_t v16; // r8
  std::string *v17; // rcx
  bool v18; // cf
  std::string *v19; // rax

  v6 = this;
  if ( !_Ptr )
    goto LABEL_13;
  Myres = this->_Mypair._Myval2._Myres;
  v8 = Myres < 0x10 ? this : (std::string *)this->_Mypair._Myval2._Bx._Ptr;
  if ( _Ptr < (const char *)v8 )
    goto LABEL_13;
  if ( Myres >= 0x10 )
    this = (std::string *)this->_Mypair._Myval2._Bx._Ptr;
  if ( (char *)this + v6->_Mypair._Myval2._Mysize <= _Ptr )
  {
LABEL_13:
    Mysize = v6->_Mypair._Myval2._Mysize;
    if ( ~Mysize <= _Count )
      std::_Xlength_error("string too long");
    v12 = Mysize + _Count;
    if ( !_Count )
      return v6;
    if ( v12 == -1i64 )
      std::_Xlength_error("string too long");
    if ( v6->_Mypair._Myval2._Myres >= v12 )
    {
      if ( v12 )
        goto LABEL_18;
      v6->_Mypair._Myval2._Mysize = 0i64;
      if ( v6->_Mypair._Myval2._Myres < 0x10 )
        v6->_Mypair._Myval2._Bx._Buf[0] = 0;
      else
        *v6->_Mypair._Myval2._Bx._Ptr = 0;
    }
    else
    {
      std::string::_Copy(v6, Mysize + _Count, Mysize);
      if ( v12 )
      {
LABEL_18:
        v13 = v6->_Mypair._Myval2._Myres;
        if ( v13 < 0x10 )
          Ptr = v6;
        else
          Ptr = (std::string *)v6->_Mypair._Myval2._Bx._Ptr;
        if ( v13 < 0x10 )
          v15 = v6;
        else
          v15 = (std::string *)v6->_Mypair._Myval2._Bx._Ptr;
        v16 = v6->_Mypair._Myval2._Mysize;
        if ( v16 )
          memmove(&v15->_Mypair._Myval2._Bx._Buf[_Count], Ptr, v16);
        if ( v6->_Mypair._Myval2._Myres < 0x10 )
          v17 = v6;
        else
          v17 = (std::string *)v6->_Mypair._Myval2._Bx._Ptr;
        if ( _Count )
          memmove(v17, _Ptr, _Count);
        v18 = v6->_Mypair._Myval2._Myres < 0x10;
        v6->_Mypair._Myval2._Mysize = v12;
        if ( v18 )
          v19 = v6;
        else
          v19 = (std::string *)v6->_Mypair._Myval2._Bx._Ptr;
        v19->_Mypair._Myval2._Bx._Buf[v12] = 0;
      }
    }
    return v6;
  }
  if ( Myres < 0x10 )
    v9 = v6;
  else
    v9 = (std::string *)v6->_Mypair._Myval2._Bx._Ptr;
  return std::string::insert(v6, Myres, v6, _Ptr - (const char *)v9, _Count);
}

void __fastcall SaveRecord_ButtonConfigUser::setDefault(SaveRecord_ButtonConfigUser *this)
{
  std::_Tree_node<std::pair<AgControllerUID const ,FighterOperationMapper>,void *> *Myhead; // rdx
  std::_Tree_node<std::pair<AgControllerUID const ,FighterOperationMapper>,void *> *Left; // rax
  __m128i v4; // xmm1
  std::_Tree_node<std::pair<AgControllerUID const ,FighterOperationMapper>,void *> *Right; // rcx
  std::_Tree_node<std::pair<AgControllerUID const ,FighterOperationMapper>,void *> *j; // rcx
  std::_Tree_node<std::pair<AgControllerUID const ,FighterOperationMapper>,void *> *i; // rcx

  Myhead = this->buttonMap._Mypair._Myval2._Myval2._Myhead;
  Left = this->buttonMap._Mypair._Myval2._Myval2._Myhead->_Left;
  if ( Left != this->buttonMap._Mypair._Myval2._Myval2._Myhead )
  {
    v4 = _mm_add_epi32(_mm_load_si128((const __m128i *)&_xmm), (__m128i)_xmm);
    do
    {
      *(__m128i *)Left->_Myval.second.m_mapping = v4;
      Left->_Myval.second.m_mapping[4] = Mapped_LP_LK;
      Left->_Myval.second.m_mapping[5] = Mapped_LK_HP;
      Left->_Myval.second.m_mapping[6] = Mapped_LK_HK;
      Left->_Myval.second.m_mapping[7] = Mapped_HP_LP;
      Left->_Myval.second.m_mapping[8] = Mapped_REC;
      Left->_Myval.second.m_mapping[9] = Mapped_PLAY;
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
    while ( Left != Myhead );
  }
  FighterOperationKeyboardMapper::reset(&this->keyboardMap, 1);
  this->selectedDevice = 0;
}

void __fastcall SaveRecord_GameProgress::setDefault(SaveRecord_GameProgress *this)
{
  AppMain *v2; // rdi
  int i; // ebx

  this->m_GameStartupFlag = 0;
  this->m_FirstNoticeFlag.m_Flag[0] = 0;
  memset(&this->m_Gallery, 0, sizeof(this->m_Gallery));
  memset(&this->m_NetworkTitle, 0, sizeof(this->m_NetworkTitle));
  memset(this->m_OpponentList, 0, sizeof(this->m_OpponentList));
  memset(this->m_FightingList, 0, 0xFA4ui64);
  this->m_Gallery.m_Flag[18] |= 0x1E0000u;
  this->m_Gallery.m_Flag[14] |= 2u;
  this->m_Gallery.m_NewFlag[18] |= 0x1E0000u;
  this->m_Gallery.m_NewFlag[14] |= 2u;
  this->m_Gallery.m_Flag[19] |= 0x3C0000u;
  this->m_Gallery.m_NewFlag[19] |= 0x3C0000u;
  v2 = *(AppMain **)&AppMain::pApp;
  if ( *(_QWORD *)&AppMain::pApp )
  {
    for ( i = 0; i <= 62; ++i )
    {
      v2->SaveDataMain.GameData.m_NetworkTitle.m_Flag[(unsigned __int64)(unsigned int)i >> 5] |= 0x80000000 >> (i & 0x1F);
      AppMain::SetNetworkTitleNewFlag(v2, (NETWORK_TITLE)i, 0);
    }
  }
}

void __fastcall SaveRecord_Main::setDefault(SaveRecord_Main *this)
{
  this->SysOptionData.iUILanguage = s_defaultLanguage;
  *(_WORD *)&this->SysOptionData.bVibration = 257;
  this->SysOptionData.iAnnounceType = 0;
  this->GameOptionData.iAiLevel = AiLevel_Normal;
  this->GameOptionData.iWinRoundCount = WIN_ROUND_COUNT_2;
  this->GameOptionData.iRoundTimerType = BATTLE_ROUND_TIMER_TYPE_60;
  this->SoundOptionData.iSoundVolumeMaster = 70;
  this->SoundOptionData.iSoundVolumeBGM = 100;
  this->SoundOptionData.iSoundVolumeSE = 100;
  this->SoundOptionData.iSoundVolumeAmbience = 100;
  this->SoundOptionData.iSoundVolumeCharacterVoice = 100;
  this->SoundOptionData.iSoundVolumeSystemVoice = 100;
  this->SoundOptionData.iSoundVolumePad = 100;
  SaveRecord_DisplayOption::setDefaultOption(&this->DisplayOptionData);
  *(_QWORD *)&this->DisplayOptionData.iHPGaugePositionPlusY = 0i64;
  this->DisplayOptionData.iPowerGaugePositionPlusY = 0;
  *(_DWORD *)&this->GraphicsOptionData.bBloomEnabled = 16843009;
  *(_DWORD *)&this->GraphicsOptionData.bGodRaysEnabled = 16842753;
  this->GraphicsOptionData.bForceShaderPurge = 0;
  SaveRecord_ButtonConfigUser::setDefaultForUser(&this->ButtonConfData.buttonConfig[1], USER_ID_1P);
  SaveRecord_ButtonConfigUser::setDefaultForUser(&this->ButtonConfData.buttonConfig[2], USER_ID_2P);
  SaveRecord_GameProgress::setDefault(&this->GameData);
  this->HistoryData.m_GameRule = GAME_RULE_SINGLE;
  *(_QWORD *)&this->HistoryData.m_StageID = 1i64;
  *(_QWORD *)&this->RecordKey.m_KeyCount[0][0] = 0i64;
  *(_QWORD *)&this->RecordKey.m_KeyCount[0][2] = 0i64;
  *(_QWORD *)&this->RecordKey.m_KeyCount[0][4] = 0i64;
  *(_QWORD *)&this->RecordKey.m_KeyCount[1][0] = 0i64;
  *(_QWORD *)&this->RecordKey.m_KeyCount[1][2] = 0i64;
  *(_QWORD *)&this->RecordKey.m_KeyCount[1][4] = 0i64;
  SaveRecord_PlayerData::setDefault(&this->PlayerData);
}

void __fastcall SaveRecord_Replay::setDefault(SaveRecord_Replay *this, unsigned __int64 a2)
{
  char **m_pBuffer; // rsi
  __int64 v4; // rbp
  void **v5; // rbx
  __int64 v6; // rdi

  m_pBuffer = this->m_Replay[0].m_pBuffer;
  v4 = 100i64;
  do
  {
    v5 = (void **)m_pBuffer;
    v6 = 6i64;
    do
    {
      if ( *((_BYTE *)m_pBuffer + 69) && *v5 )
      {
        operator delete(*v5, a2);
        *v5 = 0i64;
      }
      ++v5;
      --v6;
    }
    while ( v6 );
    m_pBuffer += 148;
    --v4;
  }
  while ( v4 );
  memset(this, 0, sizeof(SaveRecord_Replay));
}

void __fastcall SaveRecord_ButtonConfigUser::setDefaultForUser(SaveRecord_ButtonConfigUser *this, USER_ID user)
{
  std::_Tree_node<std::pair<AgControllerUID const ,FighterOperationMapper>,void *> *Myhead; // r8
  std::_Tree_node<std::pair<AgControllerUID const ,FighterOperationMapper>,void *> *Left; // rax
  __m128i v5; // xmm1
  std::_Tree_node<std::pair<AgControllerUID const ,FighterOperationMapper>,void *> *Right; // rcx
  std::_Tree_node<std::pair<AgControllerUID const ,FighterOperationMapper>,void *> *j; // rcx
  std::_Tree_node<std::pair<AgControllerUID const ,FighterOperationMapper>,void *> *i; // rcx

  Myhead = this->buttonMap._Mypair._Myval2._Myval2._Myhead;
  Left = this->buttonMap._Mypair._Myval2._Myval2._Myhead->_Left;
  if ( Left != this->buttonMap._Mypair._Myval2._Myval2._Myhead )
  {
    v5 = _mm_add_epi32(_mm_load_si128((const __m128i *)&_xmm), (__m128i)_xmm);
    do
    {
      *(__m128i *)Left->_Myval.second.m_mapping = v5;
      Left->_Myval.second.m_mapping[4] = Mapped_LP_LK;
      Left->_Myval.second.m_mapping[5] = Mapped_LK_HP;
      Left->_Myval.second.m_mapping[6] = Mapped_LK_HK;
      Left->_Myval.second.m_mapping[7] = Mapped_HP_LP;
      Left->_Myval.second.m_mapping[8] = Mapped_REC;
      Left->_Myval.second.m_mapping[9] = Mapped_PLAY;
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
    while ( Left != Myhead );
  }
  FighterOperationKeyboardMapper::reset(&this->keyboardMap, user);
  this->selectedDevice = 0;
}

void __fastcall SaveRecord_DisplayOption::setDefaultOption(SaveRecord_DisplayOption *this)
{
  AgPointer<AgDisplay> *DisplayByIndex; // rax
  unsigned int m_width; // ecx
  unsigned int m_height; // edx
  int v5; // er8
  AgDisplayMode v6; // [rsp+28h] [rbp-30h] BYREF
  AgPointer<AgDisplay> result; // [rsp+38h] [rbp-20h] BYREF

  this->iBrightness = 10;
  this->bCommentDraw = 1;
  DisplayByIndex = AgDisplayManager::getDisplayByIndex(
                     (AgDisplayManager *)AgSingleton<AgDisplayManager>::ms_instance,
                     &result,
                     0);
  AgDisplay::getNativeMode(DisplayByIndex->m_ptr, &v6);
  AgPointer<AgDisplay>::~AgPointer<AgDisplay>(&result);
  m_width = v6.m_width;
  this->iWidth[2] = v6.m_width;
  this->iWidth[1] = m_width;
  m_height = v6.m_height;
  this->iHeight[2] = v6.m_height;
  this->iHeight[1] = m_height;
  v5 = GAME_SCREEN_HEIGHT;
  if ( m_height <= GAME_SCREEN_HEIGHT || m_width <= GAME_SCREEN_WIDTH )
  {
    if ( m_height <= 0x2D0 || m_width <= 0x500 )
    {
      this->iWidth[0] = GAME_SCREEN_WIDTH / 2;
      this->iHeight[0] = v5 / 2;
    }
    else
    {
      this->iWidth[0] = 1280;
      this->iHeight[0] = 720;
    }
  }
  else
  {
    this->iWidth[0] = GAME_SCREEN_WIDTH;
    this->iHeight[0] = v5;
  }
  this->iWindowMode = 1;
  this->iLastFullscreenMode = 1;
  *(_WORD *)&this->bVSync = 257;
}

std::string *__fastcall std::to_string(std::string *result, int _Val)
{
  std::_Integral_to_string<char,int>(result, _Val);
  return result;
}

std::string *__fastcall std::to_string(std::string *result, __int64 _Val)
{
  std::_Integral_to_string<char,__int64>(result, _Val);
  return result;
}

