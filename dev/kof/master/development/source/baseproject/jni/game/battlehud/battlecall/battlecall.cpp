#include "dev/kof/master/development/source/baseproject/jni/game/appmain.h"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/hitrectcollection.h"
#include "dev/silverware/git/sdk/agdisplay.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_simplemeshcache.h"
#include "dev/silverware/git/sdk/agvector4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/fontprovider/render_fontproviderwinapi.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglshader.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/trainingsetting.h"
#include "dev/silverware/git/sdk/agvector3.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/vecidx_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/map"
#include "dev/kof/master/development/source/baseproject/jni/game/data/savedata.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/floatinvec.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtree"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/soundgroupdataformat.h"
#include "dev/silverware/git/sdk/input/agcontrollercomponent.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlehud.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_bundle.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/refcountable.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battleeventhandler.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/combomissionattackeventlistener.h"
#include "dev/silverware/git/sdk/3rdparty/steam/matchmakingtypes.h"
#include "dev/silverware/git/sdk/util/agdelegate.h"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/damagesetting.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloatmp.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actorcharabase.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapemeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/jpeg_imagefile.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/quat_aos.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleonline.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/battleplayerinfo.h"
#include "dev/kof/master/development/source/baseproject/jni/game/define/charabonedefine.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/rapper/graphicsopt.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actor.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treetext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefileutil.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/colorholder.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/fix32.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_docview.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/floatinvec.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/shaderfxhelper.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_range.h"
#include "dev/silverware/git/sdk/util/agservicecommand.h"
#include "program files (x86)/windows kits/8.1/include/um/winbase.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/variableheapmemorybase.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thread"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "dev/silverware/git/sdk/agvector2.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exthread.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/memory"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_hash.h"
#include "dev/silverware/git/sdk/agrectangle.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogleffect.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/heapmemory.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_vec64.h"
#include "dev/silverware/git/sdk/agmath.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/silverware/git/sdk/agthread.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "dev/silverware/git/sdk/input/agcontroller.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/silverware/git/sdk/agreferencedobject.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xxatomic"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actionblackout.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/mutex.h"
#include "dev/silverware/git/sdk/system/aguser.h"
#include "dev/silverware/git/sdk/agreferencecount.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix4x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixpool.h"
#include "dev/silverware/git/sdk/util/agdebugchannels.h"
#include "dev/silverware/git/sdk/agstring.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlecall/animations/bcanimation_ko.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/particledata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shader.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogllight.h"
#include "dev/silverware/git/sdk/util/agperformancecounter.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_math.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_prefightfaceoff.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_sgmlparser.h"
#include "dev/silverware/git/sdk/agclock.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/string"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_context.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/vec_aos.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlecall/animations/bcanimation_youwin.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_constants.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/savedatadefine.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/shot/actorshot.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actorchara.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessgen.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/physicalheapmemory.h"
#include "dev/silverware/git/sdk/input/agsdlmappingparser.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/ios"
#include "dev/kof/master/development/source/baseproject/jni/game/check/commandcheck.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treeshape.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessellator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocnum"
#include "dev/kof/master/development/source/baseproject/jni/game/util/restrictringbuffer.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/hidpad/hidpadsystem.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/moviedatadefine.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xiosbase"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thr/xthread"
#include "dev/kof/master/development/source/baseproject/jni/game/util/soundutil.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/materialshowcontrol.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocale"
#include "dev/silverware/git/sdk/agpointer.h"
#include "dev/silverware/git/sdk/agcondition.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocinfo"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/mat_aos.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitivebundle.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_hashkey.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vector"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treecachenode.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exlockable.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treenode.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_loader.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/mediasound.h"
#include "dev/silverware/git/sdk/agmutex.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/atomic_int.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cacheeffect.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_system.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphfitter.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/atomic"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefile.h"
#include "dev/silverware/git/sdk/filesystem/agfile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_player.h"
#include "dev/silverware/git/sdk/filesystem/agpath.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_resource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/silverware/git/sdk/filesystem/agmount.h"
#include "dev/silverware/git/sdk/filesystem/agdirectory.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steamclientpublic.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_debug.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_stroker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/dds_imagefile.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/jobmanager.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/matrix4unaligned.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/quat_aos.h"
#include "dev/silverware/git/sdk/agsemaphore.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaprojectdataformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textmeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "dev/kof/master/development/source/ps4project/baseproject/pcutil/pcdummy.h"
#include "dev/silverware/git/sdk/agsemaphore.inl"
#include "dev/silverware/git/sdk/agconditionvariable.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphparam.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/condition_variable"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charabasestatusformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hairliner.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_filterdesc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_styledtext.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix3x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_core.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_queue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_fontmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitive.h"
#include "dev/silverware/git/sdk/agscopedlock.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/combomissiondataformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocaddr.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_radixtree.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlecall/animations/bcanimation_complete.h"
#include "dev/kof/master/development/source/baseproject/jni/game/network/playtogether.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdatalistmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_twips.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectcommon.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_containers.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/resourcemanager.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_sse.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlecall/animations/bcanimation_perfect.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_manager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_wwhelper.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_types.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestage.h"
#include "dev/silverware/git/sdk/agreferencecountinl.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/tkndata.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/libcommon.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/time.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/type_traits"
#include "dev/kof/master/development/source/baseproject/jni/game/util/cameramotionpreviewsettings.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/stageprojectdata.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstddef"
#include "dev/kof/master/development/source/baseproject/jni/game/system/battlecontroller.h"
#include "dev/silverware/git/sdk/agcondition.inl"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/deque"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/unordered_map"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actionsystem.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xhash"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector2unaligned.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestagedatas.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/effect/actoreffect.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actorobject.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_vertex.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/tkndatas.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/fontprovider/render_fontproviderhud.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_wstring.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/tween.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actoroption.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charadataunify.h"
#include "dev/silverware/git/sdk/agmemorystream.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "dev/kof/master/development/source/baseproject/jni/game/check/cameracheck.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaactiondataformat.h"
#include "dev/silverware/git/sdk/agmemorypool.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_functions.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charafilebase.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "dev/silverware/git/sdk/system/agusermanager.h"
#include "dev/silverware/git/sdk/input/agcontrollerbuttoncomponent.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/freecameracheck.h"
#include "dev/silverware/git/sdk/agstream.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/commanddataformat.h"
#include "dev/kof/master/development/source/baseproject/jni/game/cpuseq/battlecpu.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/mutex"
#include "dev/kof/master/development/source/baseproject/jni/game/cpuseq/sequencecontroller.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threadcheck.h"
#include "dev/silverware/git/sdk/util/agservice.h"
#include "program files (x86)/windows kits/8.1/include/shared/guiddef.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/chrono"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_missiondataloading.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textlayout.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_image.h"
#include "dev/silverware/git/sdk/agthreadpool.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/limits"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_new.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/texstring.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdata/effectdata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_typeinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/translate_table.h"
#include "program files (x86)/windows kits/8.1/include/shared/stralign.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/shared_lua_context.h"
#include "dev/kof/master/development/source/baseproject/jni/game/system/battlesysteminfo.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/chartdata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "dev/silverware/git/sdk/system/agsysteminfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xutility"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_movie.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/utility"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_operation.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/bitset"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlecall/animations/bcanimation_doubleko.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/combomissionjudge.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/iosfwd"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlecall/animations/bcanimation_timeup.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/boolinvec.h"
#include "dev/kof/master/development/source/baseproject/jni/game/network/chkdiscononlinesv.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charamaterialsettingformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_screentoworld.h"
#include "dev/silverware/git/sdk/3rdparty/steam/isteamhtmlsurface.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/functional"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlecall/animations/bcanimation_playerwin.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleonlinewatching.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstring"
#include "dev/silverware/git/sdk/agpointerinl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_strokeraa.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_scale9grid.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory0"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraystaticbuff.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmodel.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleloading.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/inputkeyrecord.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cxform.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exwaitcondition.h"
#include "dev/silverware/git/sdk/agconditionvariable.inl"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/exception"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/matchingsystem.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglcurve.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/mediamanager.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector3unaligned.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/effect.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_exception.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/audiopresenter.h"
#include "program files (x86)/windows kits/8.1/include/um/winnt.h"
#include "dev/silverware/git/sdk/platforms/pc/system/agpcsysteminfo.h"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/bodypush.h"
#include "program files (x86)/windows kits/8.1/include/shared/basetsd.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_ps4modelroom.h"
#include "dev/kof/master/development/source/baseproject/jni/game/network/netmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_event.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglsprite.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/math.h"
#include "dev/kof/master/development/source/baseproject/jni/game/network/leaderboard.h"
#include "dev/silverware/git/sdk/agmovieplayer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/png_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_keycodes.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/cpusequencedataformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xfacet"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshkey.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixstate.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_gradients.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglrender.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_rasterizer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_viewport.h"
#include "dev/silverware/git/sdk/aghash.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/vec_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/list"
#include "dev/silverware/git/sdk/agstringutils.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglfog.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglbone.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/boolinvec.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/bilinkable.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_drawableimage.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/system_error"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestageresourcecontainer.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/easingnumber.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hal.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_buffer.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestageshader.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/syncmenuimage.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/input/imesystem.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/vectormath_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/stdexcept"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/array"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_characterdef.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steam_api_internal.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/algorithm"
#include "dev/kof/master/development/source/baseproject/jni/game/player/weapon/actorweapon.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charahitrectformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/debug/logging.h"
#include "dev/silverware/git/sdk/agreferenceinl.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/operationmapper.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/randommt.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filters.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/tuple"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlecall/battlecall.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filterparams.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlecall/animations/bcanimation_draw.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/sounddata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphqueue.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdata/effectappdata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_font.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmirror.h"
#include "program files (x86)/windows kits/8.1/include/um/winuser.h"
#include "dev/silverware/git/sdk/memory/agallocators.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlecall/animations/bcanimation_youlose.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/errorchecker.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_bank.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessdefs.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steam_api.h"
#include "dev/silverware/git/sdk/agmutex.inl"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/globalheapmemory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatapacked.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaattackdataformat.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/fixmemory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_pathdatapacker.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlecall/animations/bcanimation_readygo.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charadamagesettingformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_linebuffer.h"
#include "dev/silverware/git/sdk/agreferencedobjectinl.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_highlight.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/mat_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic0.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/future_asset.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloat.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/asynccharafileload.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_profiler.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/asyncjob.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/titlestoragesystem.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_states.h"
#include "dev/kof/master/development/source/ps4project/baseproject/pcutil/pccontrolsmanager.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/tga_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_statebag.h"
#include "dev/silverware/git/sdk/input/aginputmanager.h"
#include "dev/silverware/git/sdk/agsingleton.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector4unaligned.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlecall/animations/battlecallanimation.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlecall/animations/bcanimation_readygo.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlecall/animations/bcanimation_ko.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlecall/animations/bcanimation_doubleko.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlecall/animations/bcanimation_timeup.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlecall/animations/bcanimation_complete.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlecall/animations/bcanimation_youwin.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlecall/animations/bcanimation_youlose.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlecall/animations/bcanimation_draw.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlecall/animations/bcanimation_playerwin.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlecall/animations/bcanimation_perfect.cpp"

std::piecewise_construct_t std::piecewise_construct; // 0x14088C432
BattleCall::BattleCall(); // 0x1400B6540
BattleCall::~BattleCall(); // 0x1400B6640
BattleCallAnimation * BattleCall::getAnimation(); // 0x1400B6680
void BattleCall::clear(); // 0x1400B6700
BattleCallDefines::AnimationCategory BattleCall::getPlayingAnimationCategory(); // 0x1400B6780
bool BattleCall::isAnimationFinished(); // 0x1400B67D0
void BattleCall::start(); // 0x1400B6810
void BattleCall::update(float advanceFrame); // 0x1400B6880
void BattleCall::preloadingResources(); // 0x1400B6900
void BattleCall::entryAnimation_ReadyGo(STAGE_ID stageID, long round); // 0x1400B6970
void BattleCall::entryAnimation_FinalRoundReadyGo(STAGE_ID stageID); // 0x1400B6AA0
void BattleCall::entryAnimation_ExtraRoundReadyGo(STAGE_ID stageID); // 0x1400B6BD0
void BattleCall::entryAnimation_ReadyGoOnly(STAGE_ID stageID); // 0x1400B6D00
void BattleCall::entryAnimation_KO(SoundId koVoiceSoundID); // 0x1400B6E30
void BattleCall::entryAnimation_DoubleKO(); // 0x1400B6F50
void BattleCall::entryAnimation_TimeUp(); // 0x1400B7050
void BattleCall::entryAnimation_YouWin(bool bPerfectGame); // 0x1400B7150
void BattleCall::entryAnimation_YouLose(bool bPerfectGame); // 0x1400B7280
void BattleCall::entryAnimation_Draw(); // 0x1400B7380
void BattleCall::entryAnimation_PlayerWin(PLAYER_ID playerID, bool bPerfectGame); // 0x1400B7480
void BattleCall::entryAnimation_Perfect(); // 0x1400B75D0
void BattleCall::entryAnimation_Complete(); // 0x1400B76D0//decompilation failure at 14088C432!
void __fastcall BattleCall::BattleCall(BattleCall *this)
{
  BattleCall::Animation *v2; // rax
  __int64 v3; // r8
  SoundId *p_koVoiceSoundID; // rcx

  this->m_bError = 0;
  this->__vftable = (BattleCall_vtbl *)&BattleCall::`vftable';
  v2 = (BattleCall::Animation *)operator new[](0xC0ui64);
  if ( v2 )
  {
    v3 = 6i64;
    p_koVoiceSoundID = &v2->animationParams.koVoiceSoundID;
    do
    {
      *(_QWORD *)(p_koVoiceSoundID - 5) = 0i64;
      *((_DWORD *)p_koVoiceSoundID - 3) = 0;
      *((_DWORD *)p_koVoiceSoundID - 2) = -1;
      *((_DWORD *)p_koVoiceSoundID - 1) = 0;
      *(_QWORD *)p_koVoiceSoundID = -1i64;
      p_koVoiceSoundID += 8;
      --v3;
    }
    while ( v3 );
  }
  else
  {
    v2 = 0i64;
  }
  this->m_pAnimations = v2;
  *(_QWORD *)&this->m_entryAnimatoinCount = 0i64;
  *(_WORD *)&this->m_bActived = 0;
  this->m_voiceType = VOICETYPE_MALE;
  if ( !v2 )
    this->m_bError = 1;
}

void __fastcall BattleCall::~BattleCall(BattleCall *this)
{
  unsigned __int64 v2; // rdx
  BattleCall::Animation *m_pAnimations; // rcx

  this->__vftable = (BattleCall_vtbl *)&BattleCall::`vftable';
  BattleCall::clear(this);
  m_pAnimations = this->m_pAnimations;
  if ( m_pAnimations )
  {
    operator delete(m_pAnimations, v2);
    this->m_pAnimations = 0i64;
  }
  this->__vftable = (BattleCall_vtbl *)&ErrorChecker::`vftable';
}

void __fastcall BattleCall::clear(BattleCall *this)
{
  int v2; // esi
  __int64 v3; // rdi
  BattleCall::Animation *m_pAnimations; // rax
  BattleCallAnimation *animation; // rcx

  if ( this->m_pAnimations )
  {
    v2 = 0;
    if ( this->m_entryAnimatoinCount > 0 )
    {
      v3 = 0i64;
      do
      {
        m_pAnimations = this->m_pAnimations;
        if ( m_pAnimations[v3].animationType )
        {
          animation = m_pAnimations[v3].animation;
          if ( animation )
          {
            ((void (__fastcall *)(BattleCallAnimation *, __int64))animation->~ErrorChecker)(animation, 1i64);
            this->m_pAnimations[v3].animation = 0i64;
          }
        }
        ++v2;
        ++v3;
      }
      while ( v2 < this->m_entryAnimatoinCount );
    }
  }
  *(_QWORD *)&this->m_entryAnimatoinCount = 0i64;
  *(_WORD *)&this->m_bActived = 0;
}

void __fastcall BattleCall::entryAnimation_Complete(BattleCall *this)
{
  __int64 m_entryAnimatoinCount; // r8
  int v2; // edx
  SoundId *p_koVoiceSoundID; // rax
  BattleCall::Animation *v5; // rbx
  _BYTE *v6; // [rsp+30h] [rbp+8h]

  m_entryAnimatoinCount = this->m_entryAnimatoinCount;
  v2 = 0;
  this->m_bActived = 1;
  if ( (int)m_entryAnimatoinCount <= 0 )
  {
LABEL_9:
    this->m_entryAnimatoinCount = m_entryAnimatoinCount + 1;
    v5 = &this->m_pAnimations[m_entryAnimatoinCount];
    if ( v5->animationType )
    {
      if ( v5->animation )
      {
        ((void (__fastcall *)(BattleCallAnimation *, __int64))v5->animation->~ErrorChecker)(v5->animation, 1i64);
        v5->animation = 0i64;
      }
    }
    v5->animationType = ADVANCED_CANCEL;
    v5->animationParams = (BattleCall::AnimationParams)_xmm_ffffffffffffffff00000000ffffffff;
    v6 = operator new(0x58ui64);
    v6[8] = 0;
    *((_DWORD *)v6 + 5) = 5;
    v6[24] = 0;
    *((_QWORD *)v6 + 4) = 0i64;
    *((_DWORD *)v6 + 10) = 0;
    v6[44] = 0;
    *((_DWORD *)v6 + 12) = 1;
    *((_WORD *)v6 + 28) = 256;
    *((_QWORD *)v6 + 10) = -1i64;
    *(_QWORD *)v6 = &BattleCallAnimationComplete::`vftable';
    v5->animation = (BattleCallAnimation *)v6;
    *((_DWORD *)v6 + 12) = this->m_voiceType;
  }
  else
  {
    p_koVoiceSoundID = &this->m_pAnimations->animationParams.koVoiceSoundID;
    while ( *((_DWORD *)p_koVoiceSoundID - 3) != 5
         || *((_DWORD *)p_koVoiceSoundID - 2) != -1
         || *((_DWORD *)p_koVoiceSoundID - 1)
         || *p_koVoiceSoundID != SND_NONE
         || *((_DWORD *)p_koVoiceSoundID + 1) != -1 )
    {
      ++v2;
      p_koVoiceSoundID += 8;
      if ( v2 >= (int)m_entryAnimatoinCount )
        goto LABEL_9;
    }
  }
}

void __fastcall BattleCall::entryAnimation_DoubleKO(BattleCall *this)
{
  __int64 m_entryAnimatoinCount; // r8
  int v2; // edx
  SoundId *p_koVoiceSoundID; // rax
  BattleCall::Animation *v5; // rbx
  _BYTE *v6; // [rsp+30h] [rbp+8h]

  m_entryAnimatoinCount = this->m_entryAnimatoinCount;
  v2 = 0;
  this->m_bActived = 1;
  if ( (int)m_entryAnimatoinCount <= 0 )
  {
LABEL_9:
    this->m_entryAnimatoinCount = m_entryAnimatoinCount + 1;
    v5 = &this->m_pAnimations[m_entryAnimatoinCount];
    if ( v5->animationType )
    {
      if ( v5->animation )
      {
        ((void (__fastcall *)(BattleCallAnimation *, __int64))v5->animation->~ErrorChecker)(v5->animation, 1i64);
        v5->animation = 0i64;
      }
    }
    v5->animationType = REVERSAL;
    v5->animationParams = (BattleCall::AnimationParams)_xmm_ffffffffffffffff00000000ffffffff;
    v6 = operator new(0x60ui64);
    v6[8] = 0;
    *((_DWORD *)v6 + 5) = 3;
    v6[24] = 0;
    *((_QWORD *)v6 + 4) = 0i64;
    *((_DWORD *)v6 + 10) = 0;
    v6[44] = 0;
    *((_DWORD *)v6 + 12) = 1;
    *((_WORD *)v6 + 28) = 256;
    *((_QWORD *)v6 + 10) = -1i64;
    *(_QWORD *)v6 = &BattleCallAnimationDoubleKO::`vftable';
    v5->animation = (BattleCallAnimation *)v6;
    *((_DWORD *)v6 + 12) = this->m_voiceType;
  }
  else
  {
    p_koVoiceSoundID = &this->m_pAnimations->animationParams.koVoiceSoundID;
    while ( *((_DWORD *)p_koVoiceSoundID - 3) != 3
         || *((_DWORD *)p_koVoiceSoundID - 2) != -1
         || *((_DWORD *)p_koVoiceSoundID - 1)
         || *p_koVoiceSoundID != SND_NONE
         || *((_DWORD *)p_koVoiceSoundID + 1) != -1 )
    {
      ++v2;
      p_koVoiceSoundID += 8;
      if ( v2 >= (int)m_entryAnimatoinCount )
        goto LABEL_9;
    }
  }
}

void __fastcall BattleCall::entryAnimation_Draw(BattleCall *this)
{
  __int64 m_entryAnimatoinCount; // r8
  int v2; // edx
  SoundId *p_koVoiceSoundID; // rax
  BattleCall::Animation *v5; // rbx
  _BYTE *v6; // [rsp+30h] [rbp+8h]

  m_entryAnimatoinCount = this->m_entryAnimatoinCount;
  v2 = 0;
  this->m_bActived = 1;
  if ( (int)m_entryAnimatoinCount <= 0 )
  {
LABEL_9:
    this->m_entryAnimatoinCount = m_entryAnimatoinCount + 1;
    v5 = &this->m_pAnimations[m_entryAnimatoinCount];
    if ( v5->animationType )
    {
      if ( v5->animation )
      {
        ((void (__fastcall *)(BattleCallAnimation *, __int64))v5->animation->~ErrorChecker)(v5->animation, 1i64);
        v5->animation = 0i64;
      }
    }
    v5->animationType = GUARD_CANCEL;
    v5->animationParams = (BattleCall::AnimationParams)_xmm_ffffffffffffffff00000000ffffffff;
    v6 = operator new(0x58ui64);
    v6[8] = 0;
    *((_DWORD *)v6 + 5) = 8;
    v6[24] = 0;
    *((_QWORD *)v6 + 4) = 0i64;
    *((_DWORD *)v6 + 10) = 0;
    v6[44] = 0;
    *((_DWORD *)v6 + 12) = 1;
    *((_WORD *)v6 + 28) = 256;
    *((_QWORD *)v6 + 10) = -1i64;
    *(_QWORD *)v6 = &BattleCallAnimationDraw::`vftable';
    v5->animation = (BattleCallAnimation *)v6;
    *((_DWORD *)v6 + 12) = this->m_voiceType;
  }
  else
  {
    p_koVoiceSoundID = &this->m_pAnimations->animationParams.koVoiceSoundID;
    while ( *((_DWORD *)p_koVoiceSoundID - 3) != 8
         || *((_DWORD *)p_koVoiceSoundID - 2) != -1
         || *((_DWORD *)p_koVoiceSoundID - 1)
         || *p_koVoiceSoundID != SND_NONE
         || *((_DWORD *)p_koVoiceSoundID + 1) != -1 )
    {
      ++v2;
      p_koVoiceSoundID += 8;
      if ( v2 >= (int)m_entryAnimatoinCount )
        goto LABEL_9;
    }
  }
}

void __fastcall BattleCall::entryAnimation_ExtraRoundReadyGo(BattleCall *this, STAGE_ID stageID)
{
  __int64 m_entryAnimatoinCount; // r9
  __int64 v3; // r8
  SoundId *p_koVoiceSoundID; // rax
  BattleCall::Animation *v7; // rbx
  BattleCall::AnimationParams v8; // [rsp+20h] [rbp-18h]
  _BYTE *v9; // [rsp+40h] [rbp+8h]

  m_entryAnimatoinCount = this->m_entryAnimatoinCount;
  v3 = 0i64;
  *(_QWORD *)&v8.koVoiceSoundID = -1i64;
  *(_QWORD *)&v8.stageID = (unsigned int)stageID | 0xFFFFFFFE00000000ui64;
  this->m_bActived = 1;
  if ( (int)m_entryAnimatoinCount <= 0 )
  {
LABEL_9:
    this->m_entryAnimatoinCount = m_entryAnimatoinCount + 1;
    v7 = &this->m_pAnimations[m_entryAnimatoinCount];
    if ( v7->animationType )
    {
      if ( v7->animation )
      {
        ((void (__fastcall *)(BattleCallAnimation *, __int64, __int64))v7->animation->~ErrorChecker)(
          v7->animation,
          1i64,
          v3);
        v7->animation = 0i64;
      }
    }
    v7->animationType = COUNTER_HIT;
    v7->animationParams = v8;
    v9 = operator new(0x60ui64);
    v9[8] = 0;
    *((_DWORD *)v9 + 5) = 1;
    v9[24] = 0;
    *((_QWORD *)v9 + 4) = 0i64;
    *((_DWORD *)v9 + 10) = 0;
    v9[44] = 0;
    *((_DWORD *)v9 + 12) = 1;
    *((_WORD *)v9 + 28) = 256;
    *((_QWORD *)v9 + 10) = -1i64;
    *(_QWORD *)v9 = &BattleCallAnimationReadyGO::`vftable';
    *((_DWORD *)v9 + 22) = stageID;
    *((_DWORD *)v9 + 23) = -2;
    v7->animation = (BattleCallAnimation *)v9;
    *((_DWORD *)v9 + 12) = this->m_voiceType;
  }
  else
  {
    p_koVoiceSoundID = &this->m_pAnimations->animationParams.koVoiceSoundID;
    while ( *((_DWORD *)p_koVoiceSoundID - 3) != 1
         || *((_DWORD *)p_koVoiceSoundID - 2) != stageID
         || *((_DWORD *)p_koVoiceSoundID - 1) != -2
         || *p_koVoiceSoundID != SND_NONE
         || *((_DWORD *)p_koVoiceSoundID + 1) != -1 )
    {
      v3 = (unsigned int)(v3 + 1);
      p_koVoiceSoundID += 8;
      if ( (int)v3 >= (int)m_entryAnimatoinCount )
        goto LABEL_9;
    }
  }
}

void __fastcall BattleCall::entryAnimation_FinalRoundReadyGo(BattleCall *this, STAGE_ID stageID)
{
  __int64 m_entryAnimatoinCount; // r9
  __int64 v3; // r8
  SoundId *p_koVoiceSoundID; // rax
  BattleCall::Animation *v7; // rbx
  BattleCall::AnimationParams v8; // [rsp+20h] [rbp-18h]
  _BYTE *v9; // [rsp+40h] [rbp+8h]

  m_entryAnimatoinCount = this->m_entryAnimatoinCount;
  v3 = 0i64;
  *(_QWORD *)&v8.koVoiceSoundID = -1i64;
  *(_QWORD *)&v8.stageID = (unsigned int)stageID | 0xFFFFFFFF00000000ui64;
  this->m_bActived = 1;
  if ( (int)m_entryAnimatoinCount <= 0 )
  {
LABEL_9:
    this->m_entryAnimatoinCount = m_entryAnimatoinCount + 1;
    v7 = &this->m_pAnimations[m_entryAnimatoinCount];
    if ( v7->animationType )
    {
      if ( v7->animation )
      {
        ((void (__fastcall *)(BattleCallAnimation *, __int64, __int64))v7->animation->~ErrorChecker)(
          v7->animation,
          1i64,
          v3);
        v7->animation = 0i64;
      }
    }
    v7->animationType = COUNTER_HIT;
    v7->animationParams = v8;
    v9 = operator new(0x60ui64);
    v9[8] = 0;
    *((_DWORD *)v9 + 5) = 1;
    v9[24] = 0;
    *((_QWORD *)v9 + 4) = 0i64;
    *((_DWORD *)v9 + 10) = 0;
    v9[44] = 0;
    *((_DWORD *)v9 + 12) = 1;
    *((_WORD *)v9 + 28) = 256;
    *((_QWORD *)v9 + 10) = -1i64;
    *(_QWORD *)v9 = &BattleCallAnimationReadyGO::`vftable';
    *((_DWORD *)v9 + 22) = stageID;
    *((_DWORD *)v9 + 23) = -1;
    v7->animation = (BattleCallAnimation *)v9;
    *((_DWORD *)v9 + 12) = this->m_voiceType;
  }
  else
  {
    p_koVoiceSoundID = &this->m_pAnimations->animationParams.koVoiceSoundID;
    while ( *((_DWORD *)p_koVoiceSoundID - 3) != 1
         || *((_DWORD *)p_koVoiceSoundID - 2) != stageID
         || *((_DWORD *)p_koVoiceSoundID - 1) != -1
         || *p_koVoiceSoundID != SND_NONE
         || *((_DWORD *)p_koVoiceSoundID + 1) != -1 )
    {
      v3 = (unsigned int)(v3 + 1);
      p_koVoiceSoundID += 8;
      if ( (int)v3 >= (int)m_entryAnimatoinCount )
        goto LABEL_9;
    }
  }
}

void __fastcall BattleCall::entryAnimation_KO(BattleCall *this, SoundId koVoiceSoundID)
{
  __int64 m_entryAnimatoinCount; // r9
  __int64 v5; // r8
  SoundId *p_koVoiceSoundID; // rax
  BattleCall::Animation *v7; // rbx
  BattleCall::AnimationParams v8; // [rsp+20h] [rbp-18h]
  _BYTE *v9; // [rsp+40h] [rbp+8h]

  m_entryAnimatoinCount = this->m_entryAnimatoinCount;
  *(_QWORD *)&v8.stageID = 0xFFFFFFFFi64;
  v5 = 0i64;
  *(_QWORD *)&v8.koVoiceSoundID = (unsigned int)koVoiceSoundID | 0xFFFFFFFF00000000ui64;
  this->m_bActived = 1;
  if ( (int)m_entryAnimatoinCount <= 0 )
  {
LABEL_9:
    this->m_entryAnimatoinCount = m_entryAnimatoinCount + 1;
    v7 = &this->m_pAnimations[m_entryAnimatoinCount];
    if ( v7->animationType )
    {
      if ( v7->animation )
      {
        ((void (__fastcall *)(BattleCallAnimation *, __int64, __int64))v7->animation->~ErrorChecker)(
          v7->animation,
          1i64,
          v5);
        v7->animation = 0i64;
      }
    }
    v7->animationType = GUARD_CRASH;
    v7->animationParams = v8;
    v9 = operator new(0x60ui64);
    v9[8] = 0;
    *((_DWORD *)v9 + 5) = 2;
    v9[24] = 0;
    *((_QWORD *)v9 + 4) = 0i64;
    *((_DWORD *)v9 + 10) = 0;
    v9[44] = 0;
    *((_DWORD *)v9 + 12) = 1;
    *((_WORD *)v9 + 28) = 256;
    *((_QWORD *)v9 + 10) = -1i64;
    *(_QWORD *)v9 = &BattleCallAnimationKO::`vftable';
    *((_DWORD *)v9 + 23) = koVoiceSoundID;
    v7->animation = (BattleCallAnimation *)v9;
    *((_DWORD *)v9 + 12) = this->m_voiceType;
  }
  else
  {
    p_koVoiceSoundID = &this->m_pAnimations->animationParams.koVoiceSoundID;
    while ( *((_DWORD *)p_koVoiceSoundID - 3) != 2
         || *((_DWORD *)p_koVoiceSoundID - 2) != -1
         || *((_DWORD *)p_koVoiceSoundID - 1)
         || *p_koVoiceSoundID != koVoiceSoundID
         || *((_DWORD *)p_koVoiceSoundID + 1) != -1 )
    {
      v5 = (unsigned int)(v5 + 1);
      p_koVoiceSoundID += 8;
      if ( (int)v5 >= (int)m_entryAnimatoinCount )
        goto LABEL_9;
    }
  }
}

void __fastcall BattleCall::entryAnimation_Perfect(BattleCall *this)
{
  __int64 m_entryAnimatoinCount; // r8
  int v2; // edx
  SoundId *p_koVoiceSoundID; // rax
  BattleCall::Animation *v5; // rbx
  _BYTE *v6; // [rsp+30h] [rbp+8h]

  m_entryAnimatoinCount = this->m_entryAnimatoinCount;
  v2 = 0;
  this->m_bActived = 1;
  if ( (int)m_entryAnimatoinCount <= 0 )
  {
LABEL_9:
    this->m_entryAnimatoinCount = m_entryAnimatoinCount + 1;
    v5 = &this->m_pAnimations[m_entryAnimatoinCount];
    if ( v5->animationType )
    {
      if ( v5->animation )
      {
        ((void (__fastcall *)(BattleCallAnimation *, __int64))v5->animation->~ErrorChecker)(v5->animation, 1i64);
        v5->animation = 0i64;
      }
    }
    v5->animationType = STUN;
    v5->animationParams = (BattleCall::AnimationParams)_xmm_ffffffffffffffff00000000ffffffff;
    v6 = operator new(0x58ui64);
    v6[8] = 0;
    *((_DWORD *)v6 + 5) = 10;
    v6[24] = 0;
    *((_QWORD *)v6 + 4) = 0i64;
    *((_DWORD *)v6 + 10) = 0;
    v6[44] = 0;
    *((_DWORD *)v6 + 12) = 1;
    *((_WORD *)v6 + 28) = 256;
    *((_QWORD *)v6 + 10) = -1i64;
    *(_QWORD *)v6 = &BattleCallAnimationPerfect::`vftable';
    v5->animation = (BattleCallAnimation *)v6;
    *((_DWORD *)v6 + 12) = this->m_voiceType;
  }
  else
  {
    p_koVoiceSoundID = &this->m_pAnimations->animationParams.koVoiceSoundID;
    while ( *((_DWORD *)p_koVoiceSoundID - 3) != 10
         || *((_DWORD *)p_koVoiceSoundID - 2) != -1
         || *((_DWORD *)p_koVoiceSoundID - 1)
         || *p_koVoiceSoundID != SND_NONE
         || *((_DWORD *)p_koVoiceSoundID + 1) != -1 )
    {
      ++v2;
      p_koVoiceSoundID += 8;
      if ( v2 >= (int)m_entryAnimatoinCount )
        goto LABEL_9;
    }
  }
}

void __fastcall BattleCall::entryAnimation_PlayerWin(BattleCall *this, PLAYER_ID playerID, __int64 bPerfectGame)
{
  __int64 m_entryAnimatoinCount; // r10
  char v5; // bp
  __int64 v7; // r9
  SoundId *p_koVoiceSoundID; // rax
  BattleCall::Animation *v9; // rbx
  BattleCall::AnimationParams v10; // [rsp+20h] [rbp-28h]
  _BYTE *v11; // [rsp+50h] [rbp+8h]

  m_entryAnimatoinCount = this->m_entryAnimatoinCount;
  v5 = bPerfectGame;
  v10.stageID = STAGE_ID_NONE;
  v7 = 0i64;
  *(_QWORD *)&v10.battleRound = 0xFFFFFFFF00000000ui64;
  v10.playerID = playerID;
  this->m_bActived = 1;
  if ( (int)m_entryAnimatoinCount <= 0 )
  {
LABEL_9:
    this->m_entryAnimatoinCount = m_entryAnimatoinCount + 1;
    v9 = &this->m_pAnimations[m_entryAnimatoinCount];
    if ( v9->animationType && v9->animation )
    {
      ((void (__fastcall *)(BattleCallAnimation *, __int64, __int64, __int64))v9->animation->~ErrorChecker)(
        v9->animation,
        1i64,
        bPerfectGame,
        v7);
      v9->animation = 0i64;
    }
    v9->animationType = JUST_GUARD;
    v9->animationParams = v10;
    v11 = operator new(0x60ui64);
    v11[8] = 0;
    *((_DWORD *)v11 + 5) = 9;
    v11[24] = 0;
    *((_QWORD *)v11 + 4) = 0i64;
    *((_DWORD *)v11 + 10) = 0;
    v11[44] = 0;
    *((_DWORD *)v11 + 12) = 1;
    *((_WORD *)v11 + 28) = 256;
    *((_QWORD *)v11 + 10) = -1i64;
    *(_QWORD *)v11 = &BattleCallAnimationPlayerWin::`vftable';
    *((_DWORD *)v11 + 23) = playerID;
    v9->animation = (BattleCallAnimation *)v11;
    *((_DWORD *)v11 + 12) = this->m_voiceType;
  }
  else
  {
    p_koVoiceSoundID = &this->m_pAnimations->animationParams.koVoiceSoundID;
    while ( *((_DWORD *)p_koVoiceSoundID - 3) != 9
         || *((_DWORD *)p_koVoiceSoundID - 2) != -1
         || *((_DWORD *)p_koVoiceSoundID - 1)
         || *p_koVoiceSoundID != SND_NONE
         || *((_DWORD *)p_koVoiceSoundID + 1) != playerID )
    {
      v7 = (unsigned int)(v7 + 1);
      p_koVoiceSoundID += 8;
      if ( (int)v7 >= (int)m_entryAnimatoinCount )
        goto LABEL_9;
    }
  }
  if ( v5 )
    BattleCall::entryAnimation_Perfect(this);
}

void __fastcall BattleCall::entryAnimation_ReadyGo(BattleCall *this, STAGE_ID stageID, __int64 round)
{
  __int64 m_entryAnimatoinCount; // r10
  __int64 v4; // r9
  int v5; // edi
  SoundId *p_koVoiceSoundID; // rax
  BattleCall::Animation *v9; // rbx
  BattleCall::AnimationParams v10; // [rsp+20h] [rbp-18h]
  _BYTE *v11; // [rsp+40h] [rbp+8h]

  m_entryAnimatoinCount = this->m_entryAnimatoinCount;
  v4 = 0i64;
  *(_QWORD *)&v10.koVoiceSoundID = -1i64;
  v5 = round;
  *(_QWORD *)&v10.stageID = __PAIR64__(round, stageID);
  this->m_bActived = 1;
  if ( (int)m_entryAnimatoinCount <= 0 )
  {
LABEL_8:
    this->m_entryAnimatoinCount = m_entryAnimatoinCount + 1;
    v9 = &this->m_pAnimations[m_entryAnimatoinCount];
    if ( v9->animationType )
    {
      if ( v9->animation )
      {
        ((void (__fastcall *)(BattleCallAnimation *, __int64, __int64, __int64))v9->animation->~ErrorChecker)(
          v9->animation,
          1i64,
          round,
          v4);
        v9->animation = 0i64;
      }
    }
    v9->animationType = COUNTER_HIT;
    v9->animationParams = v10;
    v11 = operator new(0x60ui64);
    v11[8] = 0;
    *((_DWORD *)v11 + 5) = 1;
    v11[24] = 0;
    *((_QWORD *)v11 + 4) = 0i64;
    *((_DWORD *)v11 + 10) = 0;
    v11[44] = 0;
    *((_DWORD *)v11 + 12) = 1;
    *((_WORD *)v11 + 28) = 256;
    *((_QWORD *)v11 + 10) = -1i64;
    *(_QWORD *)v11 = &BattleCallAnimationReadyGO::`vftable';
    *((_DWORD *)v11 + 22) = stageID;
    *((_DWORD *)v11 + 23) = v5;
    v9->animation = (BattleCallAnimation *)v11;
    *((_DWORD *)v11 + 12) = this->m_voiceType;
  }
  else
  {
    p_koVoiceSoundID = &this->m_pAnimations->animationParams.koVoiceSoundID;
    while ( *((_DWORD *)p_koVoiceSoundID - 3) != 1
         || *((_DWORD *)p_koVoiceSoundID - 2) != stageID
         || *(_QWORD *)(p_koVoiceSoundID - 1) != (round | 0xFFFFFFFF00000000ui64)
         || *((_DWORD *)p_koVoiceSoundID + 1) != -1 )
    {
      v4 = (unsigned int)(v4 + 1);
      p_koVoiceSoundID += 8;
      if ( (int)v4 >= (int)m_entryAnimatoinCount )
        goto LABEL_8;
    }
  }
}

void __fastcall BattleCall::entryAnimation_ReadyGoOnly(BattleCall *this, STAGE_ID stageID)
{
  __int64 m_entryAnimatoinCount; // r9
  __int64 v3; // r8
  SoundId *p_koVoiceSoundID; // rax
  BattleCall::Animation *v7; // rbx
  BattleCall::AnimationParams v8; // [rsp+20h] [rbp-18h]
  _BYTE *v9; // [rsp+40h] [rbp+8h]

  m_entryAnimatoinCount = this->m_entryAnimatoinCount;
  v3 = 0i64;
  *(_QWORD *)&v8.koVoiceSoundID = -1i64;
  *(_QWORD *)&v8.stageID = (unsigned int)stageID | 0xFFFFFFFD00000000ui64;
  this->m_bActived = 1;
  if ( (int)m_entryAnimatoinCount <= 0 )
  {
LABEL_9:
    this->m_entryAnimatoinCount = m_entryAnimatoinCount + 1;
    v7 = &this->m_pAnimations[m_entryAnimatoinCount];
    if ( v7->animationType )
    {
      if ( v7->animation )
      {
        ((void (__fastcall *)(BattleCallAnimation *, __int64, __int64))v7->animation->~ErrorChecker)(
          v7->animation,
          1i64,
          v3);
        v7->animation = 0i64;
      }
    }
    v7->animationType = COUNTER_HIT;
    v7->animationParams = v8;
    v9 = operator new(0x60ui64);
    v9[8] = 0;
    *((_DWORD *)v9 + 5) = 1;
    v9[24] = 0;
    *((_QWORD *)v9 + 4) = 0i64;
    *((_DWORD *)v9 + 10) = 0;
    v9[44] = 0;
    *((_DWORD *)v9 + 12) = 1;
    *((_WORD *)v9 + 28) = 256;
    *((_QWORD *)v9 + 10) = -1i64;
    *(_QWORD *)v9 = &BattleCallAnimationReadyGO::`vftable';
    *((_DWORD *)v9 + 22) = stageID;
    *((_DWORD *)v9 + 23) = -3;
    v7->animation = (BattleCallAnimation *)v9;
    *((_DWORD *)v9 + 12) = this->m_voiceType;
  }
  else
  {
    p_koVoiceSoundID = &this->m_pAnimations->animationParams.koVoiceSoundID;
    while ( *((_DWORD *)p_koVoiceSoundID - 3) != 1
         || *((_DWORD *)p_koVoiceSoundID - 2) != stageID
         || *((_DWORD *)p_koVoiceSoundID - 1) != -3
         || *p_koVoiceSoundID != SND_NONE
         || *((_DWORD *)p_koVoiceSoundID + 1) != -1 )
    {
      v3 = (unsigned int)(v3 + 1);
      p_koVoiceSoundID += 8;
      if ( (int)v3 >= (int)m_entryAnimatoinCount )
        goto LABEL_9;
    }
  }
}

void __fastcall BattleCall::entryAnimation_TimeUp(BattleCall *this)
{
  __int64 m_entryAnimatoinCount; // r8
  int v2; // edx
  SoundId *p_koVoiceSoundID; // rax
  BattleCall::Animation *v5; // rbx
  _BYTE *v6; // [rsp+30h] [rbp+8h]

  m_entryAnimatoinCount = this->m_entryAnimatoinCount;
  v2 = 0;
  this->m_bActived = 1;
  if ( (int)m_entryAnimatoinCount <= 0 )
  {
LABEL_9:
    this->m_entryAnimatoinCount = m_entryAnimatoinCount + 1;
    v5 = &this->m_pAnimations[m_entryAnimatoinCount];
    if ( v5->animationType )
    {
      if ( v5->animation )
      {
        ((void (__fastcall *)(BattleCallAnimation *, __int64))v5->animation->~ErrorChecker)(v5->animation, 1i64);
        v5->animation = 0i64;
      }
    }
    v5->animationType = SUPER_CANCEL;
    v5->animationParams = (BattleCall::AnimationParams)_xmm_ffffffffffffffff00000000ffffffff;
    v6 = operator new(0x58ui64);
    v6[8] = 0;
    *((_DWORD *)v6 + 5) = 4;
    v6[24] = 0;
    *((_QWORD *)v6 + 4) = 0i64;
    *((_DWORD *)v6 + 10) = 0;
    v6[44] = 0;
    *((_DWORD *)v6 + 12) = 1;
    *((_WORD *)v6 + 28) = 256;
    *((_QWORD *)v6 + 10) = -1i64;
    *(_QWORD *)v6 = &BattleCallAnimationTimeUp::`vftable';
    v5->animation = (BattleCallAnimation *)v6;
    *((_DWORD *)v6 + 12) = this->m_voiceType;
  }
  else
  {
    p_koVoiceSoundID = &this->m_pAnimations->animationParams.koVoiceSoundID;
    while ( *((_DWORD *)p_koVoiceSoundID - 3) != 4
         || *((_DWORD *)p_koVoiceSoundID - 2) != -1
         || *((_DWORD *)p_koVoiceSoundID - 1)
         || *p_koVoiceSoundID != SND_NONE
         || *((_DWORD *)p_koVoiceSoundID + 1) != -1 )
    {
      ++v2;
      p_koVoiceSoundID += 8;
      if ( v2 >= (int)m_entryAnimatoinCount )
        goto LABEL_9;
    }
  }
}

void __fastcall BattleCall::entryAnimation_YouLose(BattleCall *this, bool bPerfectGame)
{
  __int64 m_entryAnimatoinCount; // r8
  int v3; // edx
  SoundId *p_koVoiceSoundID; // rax
  BattleCall::Animation *v6; // rbx
  _BYTE *v7; // [rsp+30h] [rbp+8h]

  m_entryAnimatoinCount = this->m_entryAnimatoinCount;
  v3 = 0;
  this->m_bActived = 1;
  if ( (int)m_entryAnimatoinCount <= 0 )
  {
LABEL_9:
    this->m_entryAnimatoinCount = m_entryAnimatoinCount + 1;
    v6 = &this->m_pAnimations[m_entryAnimatoinCount];
    if ( v6->animationType )
    {
      if ( v6->animation )
      {
        ((void (__fastcall *)(BattleCallAnimation *, __int64))v6->animation->~ErrorChecker)(v6->animation, 1i64);
        v6->animation = 0i64;
      }
    }
    v6->animationType = THROW_ESCAPE;
    v6->animationParams = (BattleCall::AnimationParams)_xmm_ffffffffffffffff00000000ffffffff;
    v7 = operator new(0x58ui64);
    v7[8] = 0;
    *((_DWORD *)v7 + 5) = 7;
    v7[24] = 0;
    *((_QWORD *)v7 + 4) = 0i64;
    *((_DWORD *)v7 + 10) = 0;
    v7[44] = 0;
    *((_DWORD *)v7 + 12) = 1;
    *((_WORD *)v7 + 28) = 256;
    *((_QWORD *)v7 + 10) = -1i64;
    *(_QWORD *)v7 = &BattleCallAnimationYouLose::`vftable';
    v6->animation = (BattleCallAnimation *)v7;
    *((_DWORD *)v7 + 12) = this->m_voiceType;
  }
  else
  {
    p_koVoiceSoundID = &this->m_pAnimations->animationParams.koVoiceSoundID;
    while ( *((_DWORD *)p_koVoiceSoundID - 3) != 7
         || *((_DWORD *)p_koVoiceSoundID - 2) != -1
         || *((_DWORD *)p_koVoiceSoundID - 1)
         || *p_koVoiceSoundID != SND_NONE
         || *((_DWORD *)p_koVoiceSoundID + 1) != -1 )
    {
      ++v3;
      p_koVoiceSoundID += 8;
      if ( v3 >= (int)m_entryAnimatoinCount )
        goto LABEL_9;
    }
  }
}

void __fastcall BattleCall::entryAnimation_YouWin(BattleCall *this, bool bPerfectGame)
{
  __int64 m_entryAnimatoinCount; // r9
  __int64 v3; // r8
  SoundId *p_koVoiceSoundID; // rax
  BattleCall::Animation *v7; // rbx
  _BYTE *v8; // [rsp+30h] [rbp+8h]

  m_entryAnimatoinCount = this->m_entryAnimatoinCount;
  v3 = 0i64;
  this->m_bActived = 1;
  if ( (int)m_entryAnimatoinCount <= 0 )
  {
LABEL_9:
    this->m_entryAnimatoinCount = m_entryAnimatoinCount + 1;
    v7 = &this->m_pAnimations[m_entryAnimatoinCount];
    if ( v7->animationType && v7->animation )
    {
      ((void (__fastcall *)(BattleCallAnimation *, __int64, __int64))v7->animation->~ErrorChecker)(
        v7->animation,
        1i64,
        v3);
      v7->animation = 0i64;
    }
    v7->animationType = CLIMAX_CANCEL;
    v7->animationParams = (BattleCall::AnimationParams)_xmm_ffffffffffffffff00000000ffffffff;
    v8 = operator new(0x60ui64);
    v8[8] = 0;
    *((_DWORD *)v8 + 5) = 6;
    v8[24] = 0;
    *((_QWORD *)v8 + 4) = 0i64;
    *((_DWORD *)v8 + 10) = 0;
    v8[44] = 0;
    *((_DWORD *)v8 + 12) = 1;
    *((_WORD *)v8 + 28) = 256;
    *((_QWORD *)v8 + 10) = -1i64;
    *(_QWORD *)v8 = &BattleCallAnimationYouWin::`vftable';
    v7->animation = (BattleCallAnimation *)v8;
    *((_DWORD *)v8 + 12) = this->m_voiceType;
  }
  else
  {
    p_koVoiceSoundID = &this->m_pAnimations->animationParams.koVoiceSoundID;
    while ( *((_DWORD *)p_koVoiceSoundID - 3) != 6
         || *((_DWORD *)p_koVoiceSoundID - 2) != -1
         || *((_DWORD *)p_koVoiceSoundID - 1)
         || *p_koVoiceSoundID != SND_NONE
         || *((_DWORD *)p_koVoiceSoundID + 1) != -1 )
    {
      v3 = (unsigned int)(v3 + 1);
      p_koVoiceSoundID += 8;
      if ( (int)v3 >= (int)m_entryAnimatoinCount )
        goto LABEL_9;
    }
  }
  if ( bPerfectGame )
    BattleCall::entryAnimation_Perfect(this);
}

BattleCallAnimation *__fastcall BattleCall::getAnimation(BattleCall *this)
{
  BattleCall::Animation *m_pAnimations; // rdx
  BattleCallAnimation *result; // rax

  m_pAnimations = this->m_pAnimations;
  if ( !m_pAnimations || (result = m_pAnimations[this->m_animationIndex].animation) == 0i64 )
  {
    if ( dword_140ACBF30 > *(_DWORD *)(*(_QWORD *)NtCurrentTeb()->Reserved1[11] + 40i64) )
    {
      Init_thread_header(&dword_140ACBF30);
      if ( dword_140ACBF30 == -1 )
      {
        atexit(BattleCall::getAnimation_::_5_::_dynamic_atexit_destructor_for__anim__);
        Init_thread_footer(&dword_140ACBF30);
      }
    }
    return (BattleCallAnimation *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[7][184];
  }
  return result;
}

__int64 __fastcall BattleCall::getPlayingAnimationCategory(BattleCall *this)
{
  BattleCallDefines::EAnimationType::Type m_animationType; // ecx

  if ( !this->m_bActived )
    return 0i64;
  m_animationType = BattleCall::getAnimation(this)->m_animationType;
  if ( m_animationType != COUNTER_HIT )
  {
    if ( m_animationType > COUNTER_HIT )
    {
      if ( m_animationType <= ADVANCED_CANCEL )
        return 2i64;
      if ( m_animationType <= STUN )
        return 3i64;
    }
    return 0i64;
  }
  return 1i64;
}

bool __fastcall BattleCall::isAnimationFinished(BattleCall *this)
{
  BattleCallAnimation *Animation; // rax

  if ( !this->m_bActived || !this->m_bAnimationPlaying )
    return 1;
  Animation = BattleCall::getAnimation(this);
  return !Animation->m_bAnimationPlaying || Animation->m_bAnimationFinished;
}

void __fastcall BattleCall::preloadingResources(BattleCall *this)
{
  int v1; // edi
  __int64 v3; // rsi
  BattleCallAnimation *animation; // rbx

  v1 = 0;
  if ( this->m_entryAnimatoinCount > 0 )
  {
    v3 = 0i64;
    do
    {
      animation = this->m_pAnimations[v3].animation;
      if ( !animation->isError(animation) && !animation->m_pImages )
        animation->readResources(animation);
      ++v1;
      ++v3;
    }
    while ( v1 < this->m_entryAnimatoinCount );
  }
}

void __fastcall BattleCall::start(BattleCall *this)
{
  BattleCallAnimation *Animation; // rax
  BattleCallAnimation *v2; // rbx

  this->m_bAnimationPlaying = 1;
  this->m_animationIndex = 0;
  Animation = BattleCall::getAnimation(this);
  v2 = Animation;
  if ( !Animation->m_pImages )
    Animation->readResources(Animation);
  v2->m_waitPlayendSoundID = v2->m_nextScneWaitPlayendSoundID;
  v2->m_nextScneWaitPlayendSoundID = SND_NONE;
  v2->m_animationPhase = 0;
  v2->m_animationFrame = -1.0;
  v2->m_animationFrameOld = -1.0;
  v2->m_drawAnimationFrame = -1.0;
  v2->m_phaseStartFrame = 0.0;
  v2->m_bRenderFrame = 0;
  *(_WORD *)&v2->m_bAnimationPlaying = 1;
}

void __fastcall BattleCall::update(BattleCall *this, float advanceFrame)
{
  BattleCallAnimation *Animation; // rax
  BattleCallAnimation *v4; // rax
  int v5; // eax
  BattleCallAnimation *v6; // rax

  if ( this->m_bAnimationPlaying )
  {
    Animation = BattleCall::getAnimation(this);
    BattleCallAnimation::update(Animation, advanceFrame);
    v4 = BattleCall::getAnimation(this);
    if ( !v4->m_bAnimationPlaying || v4->m_bAnimationFinished )
    {
      v5 = this->m_animationIndex + 1;
      if ( v5 < this->m_entryAnimatoinCount )
      {
        this->m_animationIndex = v5;
        v6 = BattleCall::getAnimation(this);
        BattleCallAnimation::start(v6);
      }
      else
      {
        this->m_bAnimationPlaying = 0;
      }
    }
  }
}

