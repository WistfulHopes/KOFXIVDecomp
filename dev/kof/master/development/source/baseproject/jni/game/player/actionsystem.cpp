#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdata/effectdata.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/commanddataformat.h"
#include "dev/kof/master/development/source/baseproject/jni/game/network/netmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitivebundle.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/mutex.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thread"
#include "dev/kof/master/development/source/baseproject/jni/game/network/leaderboard.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treecachenode.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/chartdata.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/memory"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/unordered_map"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treenode.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_loader.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thr/xthread"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cacheeffect.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_system.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphfitter.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xhash"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefile.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/cameracheck.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xxatomic"
#include "dev/silverware/git/sdk/util/agservicecommand.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/globalheapmemory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_player.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/fixmemory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_types.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/freecameracheck.h"
#include "dev/silverware/git/sdk/input/agsdlmappingparser.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_resource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/matrix4unaligned.h"
#include "dev/kof/master/development/source/baseproject/jni/game/appmain.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/syncmenuimage.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/input/imesystem.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/quat_aos.h"
#include "dev/silverware/git/sdk/platforms/pc/system/agpcsysteminfo.h"
#include "dev/silverware/git/sdk/agdisplay.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_stroker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "dev/silverware/git/sdk/agvector4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/dds_imagefile.h"
#include "dev/silverware/git/sdk/util/agdebugchannels.h"
#include "dev/silverware/git/sdk/agvector3.h"
#include "dev/silverware/git/sdk/util/agperformancecounter.h"
#include "dev/silverware/git/sdk/agreferencecountinl.h"
#include "dev/silverware/git/sdk/agclock.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textmeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/tkndata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphparam.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charamaterialsettingformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcacheconfig.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/effect.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hairliner.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/cameramotionpreviewsettings.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/stageprojectdata.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/rapper/graphicsopt.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_filterdesc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_styledtext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix3x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_core.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_queue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_sse.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_fontmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitive.h"
#include "dev/silverware/git/sdk/agcondition.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steamclientpublic.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocaddr.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_radixtree.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestagedatas.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_twips.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exthread.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/bilinkable.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/tkndatas.h"
#include "dev/silverware/git/sdk/agrectangle.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_containers.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic0.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/tween.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_wwhelper.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogllight.h"
#include "dev/silverware/git/sdk/filesystem/agfile.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/asynccharafileload.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/titlestoragesystem.h"
#include "dev/silverware/git/sdk/filesystem/agpath.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/variableheapmemorybase.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/shot/actorshot.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglcurve.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/cpusequencedataformat.h"
#include "dev/silverware/git/sdk/filesystem/agmount.h"
#include "dev/silverware/git/sdk/filesystem/agdirectory.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector2unaligned.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/math.h"
#include "dev/silverware/git/sdk/agmemorystream.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_missiondataloading.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglsprite.h"
#include "dev/silverware/git/sdk/agmemorypool.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_functions.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_vertex.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_hashkey.h"
#include "dev/silverware/git/sdk/input/agcontrollerbuttoncomponent.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "dev/silverware/git/sdk/agpointerinl.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/translate_table.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/fontprovider/render_fontproviderhud.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_wstring.h"
#include "dev/silverware/git/sdk/agstream.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlehud.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/shared_lua_context.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/battleplayerinfo.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/randommt.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglrender.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/physicalheapmemory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battleeventhandler.h"
#include "dev/silverware/git/sdk/aghash.h"
#include "dev/silverware/git/sdk/agsemaphore.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/damagesetting.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charahitrectformat.h"
#include "dev/silverware/git/sdk/agstringutils.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglfog.h"
#include "dev/silverware/git/sdk/agsemaphore.inl"
#include "dev/silverware/git/sdk/agconditionvariable.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdata/effectappdata.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/condition_variable"
#include "dev/kof/master/development/source/baseproject/jni/game/util/shaderfxhelper.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/easingnumber.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/errorchecker.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/deque"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threadcheck.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/combomissionattackeventlistener.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleonlinewatching.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textlayout.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_image.h"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/hitrectcollection.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charadataunify.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaattackdataformat.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleloading.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/future_asset.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charadamagesettingformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/boolinvec.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/time.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "dev/kof/master/development/source/baseproject/jni/game/data/savedatadefine.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/refcountable.h"
#include "dev/silverware/git/sdk/agcondition.inl"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/jobmanager.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_ps4modelroom.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_screentoworld.h"
#include "program files (x86)/windows kits/8.1/include/shared/guiddef.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector3unaligned.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_strokeraa.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_scale9grid.h"
#include "dev/silverware/git/sdk/system/agusermanager.h"
#include "program files (x86)/windows kits/8.1/include/shared/stralign.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraystaticbuff.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cxform.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/soundgroupdataformat.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/bitset"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogleffect.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_typeinfo.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestageresourcecontainer.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestageshader.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglshader.h"
#include "dev/silverware/git/sdk/util/agservice.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/resourcemanager.h"
#include "dev/silverware/git/sdk/agthreadpool.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xfacet"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xutility"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_event.h"
#include "dev/silverware/git/sdk/3rdparty/steam/isteamhtmlsurface.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/vec_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/list"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_manager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/png_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_keycodes.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actoroption.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/boolinvec.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/particledata.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshkey.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixstate.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_gradients.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_rasterizer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_viewport.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/vectormath_aos.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_drawableimage.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/combomissiondataformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hal.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_buffer.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actorcharabase.h"
#include "program files (x86)/windows kits/8.1/include/um/winnt.h"
#include "dev/silverware/git/sdk/agreferencedobjectinl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_characterdef.h"
#include "dev/kof/master/development/source/baseproject/jni/game/define/charabonedefine.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/functional"
#include "dev/silverware/git/sdk/agpointer.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/colorholder.h"
#include "program files (x86)/windows kits/8.1/include/shared/basetsd.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstring"
#include "dev/silverware/git/sdk/agreferencedobject.h"
#include "dev/kof/master/development/source/baseproject/jni/game/network/playtogether.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory0"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actionblackout.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exlockable.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/texstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filters.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filterparams.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/exception"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_font.h"
#include "dev/silverware/git/sdk/agconditionvariable.inl"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_exception.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessdefs.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/asyncjob.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/mat_aos.h"
#include "dev/silverware/git/sdk/agthread.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/trainingsetting.h"
#include "dev/silverware/git/sdk/agmutex.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/array"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatapacked.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/savedata.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/atomic_int.h"
#include "dev/silverware/git/sdk/agscopedlock.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_pathdatapacker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_linebuffer.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actorchara.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steam_api_internal.h"
#include "dev/kof/master/development/source/ps4project/baseproject/pcutil/pccontrolsmanager.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/algorithm"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_highlight.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/commandcheck.h"
#include "dev/silverware/git/sdk/input/aginputmanager.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/system_error"
#include "dev/silverware/git/sdk/agsingleton.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/restrictringbuffer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloat.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector4unaligned.h"
#include "dev/silverware/git/sdk/agmutex.inl"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_profiler.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/mediamanager.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/stdexcept"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_states.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/materialshowcontrol.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmodel.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/utility"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleonline.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/tga_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_statebag.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/atomic"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/audiopresenter.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/vecidx_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/iosfwd"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/map"
#include "dev/kof/master/development/source/baseproject/jni/game/cpuseq/battlecpu.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaprojectdataformat.h"
#include "program files (x86)/windows kits/8.1/include/um/winuser.h"
#include "dev/silverware/git/sdk/memory/agallocators.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/floatinvec.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtree"
#include "dev/kof/master/development/source/baseproject/jni/game/cpuseq/sequencecontroller.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_simplemeshcache.h"
#include "dev/silverware/git/sdk/input/agcontrollercomponent.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/fontprovider/render_fontproviderwinapi.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charabasestatusformat.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steam_api.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/tuple"
#include "dev/kof/master/development/source/baseproject/jni/game/player/effect/actoreffect.h"
#include "dev/kof/master/development/source/ps4project/baseproject/pcutil/pcdummy.h"
#include "dev/silverware/git/sdk/util/agdelegate.h"
#include "dev/silverware/git/sdk/agreferencecount.h"
#include "dev/kof/master/development/source/baseproject/jni/game/system/battlecontroller.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdatalistmanager.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_new.h"
#include "dev/silverware/git/sdk/agreferenceinl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/baseproject/jni/game/system/battlesysteminfo.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectcommon.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/quat_aos.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_bundle.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/floatinvec.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_prefightfaceoff.h"
#include "dev/silverware/git/sdk/agmovieplayer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloatmp.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapemeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/jpeg_imagefile.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstddef"
#include "dev/kof/master/development/source/baseproject/jni/game/check/combomissionjudge.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treetext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefileutil.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglbone.h"
#include "dev/silverware/git/sdk/agvector2.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/type_traits"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_docview.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_vec64.h"
#include "dev/silverware/git/sdk/agmath.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_range.h"
#include "dev/silverware/git/sdk/input/agcontroller.h"
#include "dev/silverware/git/sdk/system/aguser.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/hidpad/hidpadsystem.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/moviedatadefine.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actionsystem.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_movie.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/mediasound.h"
#include "dev/silverware/git/sdk/agstring.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_hash.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/soundutil.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_operation.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/weapon/actorweapon.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actorobject.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaactiondataformat.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_math.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/mutex"
#include "dev/kof/master/development/source/baseproject/jni/game/network/chkdiscononlinesv.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/operationmapper.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exwaitcondition.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charafilebase.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/string"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/chrono"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/libcommon.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/vec_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/limits"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix4x4.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/inputkeyrecord.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixpool.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shader.h"
#include "dev/silverware/git/sdk/3rdparty/steam/matchmakingtypes.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/ios"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_sgmlparser.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocnum"
#include "dev/silverware/git/sdk/system/agsysteminfo.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/sounddata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_context.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actor.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/matchingsystem.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_constants.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/fix32.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xiosbase"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessgen.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmirror.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocale"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_bank.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treeshape.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessellator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "program files (x86)/windows kits/8.1/include/um/winbase.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocinfo"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/mat_aos.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlecall/battlecall.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/debug/logging.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vector"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_debug.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/bodypush.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/heapmemory.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/cameracheck.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/player/materialshowcontrol.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actionblackout.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_manager.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/util/soundutil.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/system/battlecontroller.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/randommt.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_bank.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglvec3.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/data/sounddata.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/hitrectcollection.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actor.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmodel.cpp"

bool ActionSystem::Init(long maxPri); // 0x140173DA0
void ActionSystem::Final(); // 0x140174150
Actor * ActionSystem::Entry(Actor::ACTOR_TYPE type, long iPriority); // 0x140174390
void ActionSystem::Delete(ActionSystem::ActorList * pActorList); // 0x1401746B0
void ActionSystem::AllDelete(); // 0x140174AF0
void ActionSystem::SystemInit(); // 0x140174DE0
void ActionSystem::SystemUpdate(); // 0x1401750F0
void ActionSystem::PreCaller(long pri); // 0x140175220
void ActionSystem::MainCaller(long pri); // 0x1401752C0
void ActionSystem::LateCaller(long pri); // 0x140175350
void ActionSystem::PreCaller(long start, long end); // 0x1401753D0
void ActionSystem::MainCaller(long start, long end); // 0x1401754A0
class ActionSystem::DrawSort::__l2::<lambda_289fcd7df6e8d1f6025297f7637c435f>
{
public:
	bool operator()(Actor *, Actor *);
private:
	static bool <lambda_invoker_cdecl>(Actor *, Actor *);
	typedef char16_t(*<lambda_typedef_cdecl>)(Actor *, Actor *);
public:
	bool(*)(Actor *, Actor *) operator bool (__cdecl *)(class Actor *,class Actor *)();
private:
	static bool <lambda_invoker_vectorcall>(Actor *, Actor *);
	typedef char16_t(*<lambda_typedef_vectorcall>)(Actor *, Actor *);
public:
	bool(*)(Actor *, Actor *) operator bool (__vectorcall *)(class Actor *,class Actor *)();
	<lambda_289fcd7df6e8d1f6025297f7637c435f>(ActionSystem::DrawSort::__l2::<lambda_289fcd7df6e8d1f6025297f7637c435f> &);
	<lambda_289fcd7df6e8d1f6025297f7637c435f>();
	ActionSystem::DrawSort::__l2::<lambda_289fcd7df6e8d1f6025297f7637c435f> & operator=(const ActionSystem::DrawSort::__l2::<lambda_289fcd7df6e8d1f6025297f7637c435f> &);
};
void ActionSystem::DrawReqClear(); // 0x140175580
void ActionSystem::DrawCaller(long pri); // 0x1401755E0
void ActionSystem::DrawCaller(long start, long end); // 0x1401756A0
void ActionSystem::Run(Actor & actor); // 0x140175770
void ActionSystem::SetPlaySpeed(float speed); // 0x140176F30
ActorChara * ActionSystem::GetPlayerActor(long playerID); // 0x140176F60
MaterialShowControl & ActionSystem::GetDefaultMaterialData(Actor * pActor); // 0x140176F80
void ActionSystem::CheckThrowChildPlayer(long playerID); // 0x140176FC0
void ActionSystem::FuncCallRequest(long pri, std::function<void __cdecl(Actor &)> func); // 0x1401770C0
void ActionSystem::RequestSound(Actor & actor, const CharaActionData::Sound::Type::Play & sound); // 0x140177150
void <lambda_6a1020abf1e2e0c82b0c36eebbe62cd4>::operator()(long commonID, long uniqueID); // 0x140177500
class ActionSystem::RequestSound::__l2::<lambda_6a1020abf1e2e0c82b0c36eebbe62cd4>
{
public:
	void operator()(long, long);
	<lambda_6a1020abf1e2e0c82b0c36eebbe62cd4>(ActionSystem::RequestSound::__l2::<lambda_6a1020abf1e2e0c82b0c36eebbe62cd4> &);
	<lambda_6a1020abf1e2e0c82b0c36eebbe62cd4>();
	<lambda_6a1020abf1e2e0c82b0c36eebbe62cd4>(Actor &, long &, ActionSystem *, AppMain * &, const CharaActionData::Sound::Type::Play &, SoundUserFlag &, long &);
private:
	Actor & actor; // 0x0
	long & bankID; // 0x8
	ActionSystem * __this; // 0x10
	AppMain * & p; // 0x18
	const CharaActionData::Sound::Type::Play & sound; // 0x20
	SoundUserFlag & flag; // 0x28
	long & playerID; // 0x30
public:
	ActionSystem::RequestSound::__l2::<lambda_6a1020abf1e2e0c82b0c36eebbe62cd4> & operator=(const ActionSystem::RequestSound::__l2::<lambda_6a1020abf1e2e0c82b0c36eebbe62cd4> &);
};
const DamageAnnounceTerm damageAnnounceTerm[20]; // 0x14089FEA0
std::piecewise_construct_t std::piecewise_construct; // 0x14089E3AE
void ActionSystem::RequestSoundStop(Actor & actor, const CharaActionData::Sound::Type::Stop & sound); // 0x1401777B0
void ActionSystem::RequestSoundStop(unsigned long tagMask, float fadeSec); // 0x140177860
void ActionSystem::RequestSoundStopActionChange(Actor & actor); // 0x1401778C0
void ActionSystem::RequestSoundStopDamaged(Actor & actor); // 0x140177980
void ActionSystem::RequestSoundStopSuperCancel(Actor & actor); // 0x1401779F0
bool ActionSystem::CheckDependSound(const CharaBaseStatus * pStat, const extension::SoundHashKey & hash, Actor & actor, const long priority, const float volume, const unsigned long flag); // 0x140177A60
float ActionSystem::GetSoundPanPosition(float posX); // 0x140177E30
struct DamageAnnounceTerm
{
	long iDamage; // 0x0
	long iAnnounceID[2][2]; // 0x4
};
void ActionSystem::CheckComboDamageAnnounce(); // 0x140177EC0//decompilation failure at 14089FEA0!
//decompilation failure at 14089E3AE!
void __fastcall std::_Guess_median_unchecked<Actor * *,_lambda_289fcd7df6e8d1f6025297f7637c435f_>(
        Actor **_First,
        Actor **_Mid,
        Actor **_Last,
        ActionSystem::DrawSort::__l2::<lambda_289fcd7df6e8d1f6025297f7637c435f> *_Pred)
{
  signed __int64 v6; // rax
  __int64 v7; // rax
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rdi
  Actor **v10; // rbp
  ActionSystem::DrawSort::__l2::<lambda_289fcd7df6e8d1f6025297f7637c435f> *v11; // r9
  ActionSystem::DrawSort::__l2::<lambda_289fcd7df6e8d1f6025297f7637c435f> *v12; // r9
  ActionSystem::DrawSort::__l2::<lambda_289fcd7df6e8d1f6025297f7637c435f> *v13; // r9

  v6 = _Last - _First;
  if ( v6 <= 40 )
  {
    std::_Med3_unchecked<Actor * *,_lambda_289fcd7df6e8d1f6025297f7637c435f_>(_First, _Mid, _Last, _Pred);
  }
  else
  {
    v7 = (v6 + 1) / 8;
    v8 = 16 * v7;
    v9 = 8 * v7;
    v10 = &_First[v7];
    std::_Med3_unchecked<Actor * *,_lambda_289fcd7df6e8d1f6025297f7637c435f_>(_First, v10, &_First[2 * v7], _Pred);
    std::_Med3_unchecked<Actor * *,_lambda_289fcd7df6e8d1f6025297f7637c435f_>(
      &_Mid[v9 / 0xFFFFFFFFFFFFFFF8ui64],
      _Mid,
      &_Mid[v9 / 8],
      v11);
    std::_Med3_unchecked<Actor * *,_lambda_289fcd7df6e8d1f6025297f7637c435f_>(
      &_Last[v8 / 0xFFFFFFFFFFFFFFF8ui64],
      &_Last[v9 / 0xFFFFFFFFFFFFFFF8ui64],
      _Last,
      v12);
    std::_Med3_unchecked<Actor * *,_lambda_289fcd7df6e8d1f6025297f7637c435f_>(
      v10,
      _Mid,
      &_Last[v9 / 0xFFFFFFFFFFFFFFF8ui64],
      v13);
  }
}

void __fastcall std::_Insertion_sort_unchecked<Actor * *,_lambda_289fcd7df6e8d1f6025297f7637c435f_>(
        Actor **_First,
        Actor **_Last,
        ActionSystem::DrawSort::__l2::<lambda_289fcd7df6e8d1f6025297f7637c435f> *_Pred)
{
  Actor **v5; // r15
  Actor **v6; // rdi
  __int64 v7; // r14
  Actor *v8; // rbx
  Actor **v9; // r9
  Actor *v10; // rax
  int iDrawPri; // ecx
  int v12; // edx
  bool v13; // al
  int iDrawPriSub; // ecx
  int v15; // edx
  Actor **i; // r8
  Actor *v17; // rcx
  int v18; // eax
  int v19; // edx
  bool v20; // al
  int v21; // eax
  int v22; // edx

  if ( _First != _Last )
  {
    v5 = _First + 1;
    v6 = _First + 1;
    if ( _First + 1 != _Last )
    {
      v7 = -(__int64)_First;
      do
      {
        v8 = *v6;
        v9 = v6;
        v10 = *_First;
        iDrawPri = (*v6)->iDrawPri;
        v12 = (*_First)->iDrawPri;
        if ( iDrawPri == v12 )
        {
          iDrawPriSub = v8->iDrawPriSub;
          v15 = v10->iDrawPriSub;
          if ( iDrawPriSub == v15 )
            v13 = v8->uiActorID < v10->uiActorID;
          else
            v13 = iDrawPriSub < v15;
        }
        else
        {
          v13 = iDrawPri < v12;
        }
        if ( v13 )
        {
          memmove(v5, _First, (size_t)v6 + v7);
          *_First = v8;
        }
        else
        {
          for ( i = v6; ; v9 = i )
          {
            v17 = *--i;
            v18 = v8->iDrawPri;
            v19 = v17->iDrawPri;
            if ( v18 == v19 )
            {
              v21 = v8->iDrawPriSub;
              v22 = v17->iDrawPriSub;
              v20 = v21 == v22 ? v8->uiActorID < v17->uiActorID : v21 < v22;
            }
            else
            {
              v20 = v18 < v19;
            }
            if ( !v20 )
              break;
            *v9 = v17;
          }
          *v9 = v8;
        }
        ++v6;
      }
      while ( v6 != _Last );
    }
  }
}

void __fastcall std::_Make_heap_unchecked<Actor * *,_lambda_289fcd7df6e8d1f6025297f7637c435f_>(
        Actor **_First,
        Actor **_Last,
        ActionSystem::DrawSort::__l2::<lambda_289fcd7df6e8d1f6025297f7637c435f> *_Pred)
{
  signed __int64 v4; // rbp
  __int64 v5; // rdi
  __int64 v6; // rsi
  Actor *v7; // rcx
  __int64 v8; // rcx
  __int64 i; // r10
  __int64 v10; // r9
  Actor *v11; // rax
  Actor *v12; // rcx
  int iDrawPri; // er8
  int v14; // edx
  bool v15; // al
  int iDrawPriSub; // edx
  int v17; // er8
  ActionSystem::DrawSort::__l2::<lambda_289fcd7df6e8d1f6025297f7637c435f> *v18; // [rsp+20h] [rbp-28h]
  Actor *_Val; // [rsp+60h] [rbp+18h] BYREF

  _Val = (Actor *)_Pred;
  v4 = _Last - _First;
  if ( v4 >= 2 )
  {
    v5 = v4 / 2;
    if ( v4 / 2 > 0 )
    {
      v6 = (v4 - 1) / 2;
      do
      {
        v7 = _First[--v5];
        _Val = v7;
        v8 = v5;
        for ( i = v5; v8 < v6; i = v8 )
        {
          v10 = 2 * v8 + 2;
          v11 = _First[v10 - 1];
          v12 = _First[v10];
          iDrawPri = v11->iDrawPri;
          v14 = v12->iDrawPri;
          if ( v14 == iDrawPri )
          {
            iDrawPriSub = v12->iDrawPriSub;
            v17 = v11->iDrawPriSub;
            if ( iDrawPriSub == v17 )
              v15 = v12->uiActorID < v11->uiActorID;
            else
              v15 = iDrawPriSub < v17;
          }
          else
          {
            v15 = v14 < iDrawPri;
          }
          v8 = v10 - 1;
          if ( !v15 )
            v8 = v10;
          _First[i] = _First[v8];
        }
        if ( v8 == v6 && (v4 & 1) == 0 )
        {
          _First[i] = _First[v4 - 1];
          i = v4 - 1;
        }
        std::_Push_heap_by_index<Actor * *,__int64,Actor *,_lambda_289fcd7df6e8d1f6025297f7637c435f_>(
          _First,
          i,
          v5,
          &_Val,
          v18);
      }
      while ( v5 > 0 );
    }
  }
}

void __fastcall std::_Med3_unchecked<Actor * *,_lambda_289fcd7df6e8d1f6025297f7637c435f_>(
        Actor **_First,
        Actor **_Mid,
        Actor **_Last,
        ActionSystem::DrawSort::__l2::<lambda_289fcd7df6e8d1f6025297f7637c435f> *_Pred)
{
  Actor *v6; // rdx
  Actor *v8; // r10
  int iDrawPri; // ecx
  int v10; // eax
  bool v11; // al
  int iDrawPriSub; // eax
  int v13; // ecx
  Actor *v14; // rcx
  Actor *v15; // rax
  int v16; // edx
  int v17; // er8
  bool v18; // al
  int v19; // edx
  int v20; // er8
  Actor *v21; // rdx
  int v22; // eax
  int v23; // er8
  bool v24; // al
  int v25; // eax
  int v26; // er8

  v6 = *_First;
  v8 = *_Mid;
  iDrawPri = (*_First)->iDrawPri;
  v10 = (*_Mid)->iDrawPri;
  if ( v10 == iDrawPri )
  {
    iDrawPriSub = v8->iDrawPriSub;
    v13 = v6->iDrawPriSub;
    if ( iDrawPriSub == v13 )
      v11 = v8->uiActorID < v6->uiActorID;
    else
      v11 = iDrawPriSub < v13;
  }
  else
  {
    v11 = v10 < iDrawPri;
  }
  if ( v11 )
  {
    *_Mid = v6;
    *_First = v8;
  }
  v14 = *_Last;
  v15 = *_Mid;
  v16 = (*_Last)->iDrawPri;
  v17 = (*_Mid)->iDrawPri;
  if ( v16 == v17 )
  {
    v19 = v14->iDrawPriSub;
    v20 = v15->iDrawPriSub;
    if ( v19 == v20 )
      v18 = v14->uiActorID < v15->uiActorID;
    else
      v18 = v19 < v20;
  }
  else
  {
    v18 = v16 < v17;
  }
  if ( v18 )
  {
    *_Last = *_Mid;
    *_Mid = v14;
    v21 = *_First;
    v22 = v14->iDrawPri;
    v23 = (*_First)->iDrawPri;
    if ( v22 == v23 )
    {
      v25 = v14->iDrawPriSub;
      v26 = v21->iDrawPriSub;
      if ( v25 == v26 )
        v24 = v14->uiActorID < v21->uiActorID;
      else
        v24 = v25 < v26;
    }
    else
    {
      v24 = v22 < v23;
    }
    if ( v24 )
    {
      *_Mid = v21;
      *_First = v14;
    }
  }
}

std::pair<Actor * *,Actor * *> *__fastcall std::_Partition_by_median_guess_unchecked<Actor * *,_lambda_289fcd7df6e8d1f6025297f7637c435f_>(
        std::pair<Actor * *,Actor * *> *result,
        Actor **_First,
        Actor **_Last,
        ActionSystem::DrawSort::__l2::<lambda_289fcd7df6e8d1f6025297f7637c435f> *_Pred)
{
  Actor **v7; // rbx
  Actor **v8; // r10
  _DWORD *v9; // rcx
  unsigned __int64 v10; // r9
  Actor *v11; // rdx
  int v12; // eax
  int iDrawPri; // er8
  bool v14; // al
  int v15; // eax
  int iDrawPriSub; // er8
  int v17; // eax
  int v18; // er8
  bool v19; // al
  int v20; // eax
  int v21; // er8
  Actor *v22; // rdx
  int v23; // er9
  Actor *v24; // rcx
  int v25; // eax
  bool v26; // al
  int v27; // eax
  int v28; // er8
  int v29; // er8
  bool v30; // al
  int v31; // eax
  int v32; // er8
  Actor **v33; // rax
  Actor **v34; // r11
  Actor *v35; // rdx
  Actor *v36; // r8
  int v37; // er9
  int v38; // ecx
  bool v39; // cl
  int v40; // ecx
  int v41; // er9
  int v42; // ecx
  int v43; // er9
  bool v44; // cl
  int v45; // ecx
  int v46; // er9
  Actor **v47; // rcx
  Actor *v48; // rcx
  bool v49; // zf
  Actor **v50; // r9
  Actor *v51; // r8
  Actor *v52; // rdx
  int v53; // edi
  int v54; // ecx
  bool v55; // cl
  int v56; // ecx
  int v57; // edi
  int v58; // ecx
  int v59; // edi
  bool v60; // cl
  int v61; // ecx
  int v62; // edi
  Actor *v63; // rcx
  Actor *v64; // rdx
  Actor **v65; // r9
  Actor **v66; // r8
  Actor *v67; // rdx
  Actor *v68; // rdx
  Actor *v69; // rcx
  Actor *v70; // rdx
  Actor *v71; // rdx
  std::pair<Actor * *,Actor * *> *v72; // rax

  v7 = &_First[(_Last - _First) / 2];
  std::_Guess_median_unchecked<Actor * *,_lambda_289fcd7df6e8d1f6025297f7637c435f_>(_First, v7, _Last - 1, _Pred);
  v8 = v7 + 1;
  if ( _First < v7 )
  {
    do
    {
      v9 = *(v7 - 1);
      v10 = (unsigned __int64)(v7 - 1);
      v11 = *v7;
      v12 = v9[3];
      iDrawPri = (*v7)->iDrawPri;
      if ( v12 == iDrawPri )
      {
        v15 = v9[4];
        iDrawPriSub = v11->iDrawPriSub;
        if ( v15 == iDrawPriSub )
          v14 = v9[7] < v11->uiActorID;
        else
          v14 = v15 < iDrawPriSub;
      }
      else
      {
        v14 = v12 < iDrawPri;
      }
      if ( v14 )
        break;
      v17 = v11->iDrawPri;
      v18 = v9[3];
      if ( v17 == v18 )
      {
        v20 = v11->iDrawPriSub;
        v21 = v9[4];
        v19 = v20 == v21 ? v11->uiActorID < v9[7] : v20 < v21;
      }
      else
      {
        v19 = v17 < v18;
      }
      if ( v19 )
        break;
      --v7;
    }
    while ( (unsigned __int64)_First < v10 );
  }
  if ( v8 < _Last )
  {
    v22 = *v7;
    v23 = (*v7)->iDrawPri;
    do
    {
      v24 = *v8;
      v25 = (*v8)->iDrawPri;
      if ( v25 == v23 )
      {
        v27 = v24->iDrawPriSub;
        v28 = v22->iDrawPriSub;
        if ( v27 == v28 )
          v26 = v24->uiActorID < v22->uiActorID;
        else
          v26 = v27 < v28;
      }
      else
      {
        v26 = v25 < v23;
      }
      if ( v26 )
        break;
      v29 = v24->iDrawPri;
      if ( v23 == v29 )
      {
        v31 = v22->iDrawPriSub;
        v32 = v24->iDrawPriSub;
        v30 = v31 == v32 ? v22->uiActorID < v24->uiActorID : v31 < v32;
      }
      else
      {
        v30 = v23 < v29;
      }
      if ( v30 )
        break;
      ++v8;
    }
    while ( v8 < _Last );
  }
  v33 = v8;
  v34 = v7;
  while ( 2 )
  {
    while ( 2 )
    {
      while ( v33 < _Last )
      {
        v35 = *v33;
        v36 = *v7;
        v37 = (*v33)->iDrawPri;
        v38 = (*v7)->iDrawPri;
        if ( v38 == v37 )
        {
          v40 = v36->iDrawPriSub;
          v41 = v35->iDrawPriSub;
          if ( v40 == v41 )
            v39 = v36->uiActorID < v35->uiActorID;
          else
            v39 = v40 < v41;
        }
        else
        {
          v39 = v38 < v37;
        }
        if ( !v39 )
        {
          v42 = v35->iDrawPri;
          v43 = v36->iDrawPri;
          if ( v42 == v43 )
          {
            v45 = v35->iDrawPriSub;
            v46 = v36->iDrawPriSub;
            if ( v45 == v46 )
              v44 = v35->uiActorID < v36->uiActorID;
            else
              v44 = v45 < v46;
          }
          else
          {
            v44 = v42 < v43;
          }
          if ( v44 )
            break;
          v47 = v8++;
          if ( v47 != v33 )
          {
            v48 = *(v8 - 1);
            *(v8 - 1) = v35;
            *v33 = v48;
          }
        }
        ++v33;
      }
      v49 = v34 == _First;
      if ( v34 <= _First )
        goto LABEL_65;
      v50 = v34 - 1;
      while ( 1 )
      {
        v51 = *v7;
        v52 = *v50;
        v53 = (*v7)->iDrawPri;
        v54 = (*v50)->iDrawPri;
        if ( v54 == v53 )
        {
          v56 = v52->iDrawPriSub;
          v57 = v51->iDrawPriSub;
          v55 = v56 == v57 ? v52->uiActorID < v51->uiActorID : v56 < v57;
        }
        else
        {
          v55 = v54 < v53;
        }
        if ( !v55 )
          break;
LABEL_63:
        --v34;
        --v50;
        if ( _First >= v34 )
          goto LABEL_64;
      }
      v58 = v51->iDrawPri;
      v59 = v52->iDrawPri;
      if ( v58 == v59 )
      {
        v61 = v51->iDrawPriSub;
        v62 = v52->iDrawPriSub;
        if ( v61 == v62 )
          v60 = v51->uiActorID < v52->uiActorID;
        else
          v60 = v61 < v62;
      }
      else
      {
        v60 = v58 < v59;
      }
      if ( !v60 )
      {
        if ( --v7 != v50 )
        {
          v63 = *v7;
          *v7 = v52;
          *v50 = v63;
        }
        goto LABEL_63;
      }
LABEL_64:
      v49 = v34 == _First;
LABEL_65:
      if ( !v49 )
      {
        --v34;
        if ( v33 == _Last )
        {
          if ( v34 != --v7 )
          {
            v68 = *v34;
            *v34 = *v7;
            *v7 = v68;
          }
          v69 = *--v8;
          v70 = *v7;
          *v7 = v69;
          *v8 = v70;
        }
        else
        {
          v71 = *v33;
          *v33++ = *v34;
          *v34 = v71;
        }
        continue;
      }
      break;
    }
    if ( v33 != _Last )
    {
      if ( v8 != v33 )
      {
        v64 = *v7;
        *v7 = *v8;
        *v8 = v64;
      }
      v65 = v33;
      v66 = v7;
      ++v8;
      ++v7;
      ++v33;
      v67 = *v66;
      *v66 = *v65;
      *v65 = v67;
      continue;
    }
    break;
  }
  v72 = result;
  result->first = v7;
  result->second = v8;
  return v72;
}

void __fastcall std::_Pop_heap_hole_by_index<Actor * *,__int64,Actor *,_lambda_289fcd7df6e8d1f6025297f7637c435f_>(
        Actor **_First,
        __int64 _Hole,
        __int64 _Bottom,
        Actor **_Val,
        ActionSystem::DrawSort::__l2::<lambda_289fcd7df6e8d1f6025297f7637c435f> *_Pred)
{
  __int64 v5; // rbx
  __int64 v7; // r10
  __int64 v11; // rsi
  __int64 v12; // rdi
  Actor *v13; // rcx
  Actor *v14; // rdx
  int iDrawPri; // er9
  int v16; // er8
  bool v17; // al
  int iDrawPriSub; // eax
  int v19; // er8

  v5 = _Hole;
  v7 = _Hole;
  v11 = (_Bottom - 1) / 2;
  if ( _Hole < v11 )
  {
    do
    {
      v12 = 2 * v7 + 2;
      v13 = _First[v12 - 1];
      v14 = _First[v12];
      iDrawPri = v13->iDrawPri;
      v16 = v14->iDrawPri;
      if ( v16 == iDrawPri )
      {
        iDrawPriSub = v14->iDrawPriSub;
        v19 = v13->iDrawPriSub;
        if ( iDrawPriSub == v19 )
          v17 = v14->uiActorID < v13->uiActorID;
        else
          v17 = iDrawPriSub < v19;
      }
      else
      {
        v17 = v16 < iDrawPri;
      }
      v7 = 2 * v7 + 1;
      if ( !v17 )
        v7 = v12;
      _First[v5] = _First[v7];
      v5 = v7;
    }
    while ( v7 < v11 );
  }
  if ( v7 == v11 && (_Bottom & 1) == 0 )
  {
    _First[v5] = _First[_Bottom - 1];
    v5 = _Bottom - 1;
  }
  std::_Push_heap_by_index<Actor * *,__int64,Actor *,_lambda_289fcd7df6e8d1f6025297f7637c435f_>(
    _First,
    v5,
    _Hole,
    _Val,
    _Pred);
}

void __fastcall std::_Push_heap_by_index<Actor * *,__int64,Actor *,_lambda_289fcd7df6e8d1f6025297f7637c435f_>(
        Actor **_First,
        __int64 _Hole,
        __int64 _Top,
        Actor **_Val)
{
  __int64 v4; // r10
  __int64 v8; // rbx
  Actor *v9; // r9
  Actor *v10; // r8
  int iDrawPri; // edx
  int v12; // ecx
  bool v13; // al
  int iDrawPriSub; // eax
  int v15; // ecx

  v4 = _Hole;
  v8 = (_Hole - 1) / 2;
  if ( _Top >= _Hole )
  {
    _First[_Hole] = *_Val;
  }
  else
  {
    while ( 1 )
    {
      v9 = *_Val;
      v10 = _First[v8];
      iDrawPri = (*_Val)->iDrawPri;
      v12 = v10->iDrawPri;
      if ( v12 == iDrawPri )
      {
        iDrawPriSub = v10->iDrawPriSub;
        v15 = v9->iDrawPriSub;
        v13 = iDrawPriSub == v15 ? v10->uiActorID < v9->uiActorID : iDrawPriSub < v15;
      }
      else
      {
        v13 = v12 < iDrawPri;
      }
      if ( !v13 )
        break;
      _First[v4] = v10;
      v4 = v8;
      v8 = (v8 - 1) / 2;
      if ( _Top >= v4 )
      {
        _First[v4] = *_Val;
        return;
      }
    }
    _First[v4] = v9;
  }
}

void __fastcall std::_Sort_heap_unchecked<Actor * *,_lambda_289fcd7df6e8d1f6025297f7637c435f_>(
        Actor **_First,
        Actor **_Last,
        ActionSystem::DrawSort::__l2::<lambda_289fcd7df6e8d1f6025297f7637c435f> *_Pred)
{
  Actor **v4; // rbx
  __int64 v5; // rsi
  __int64 v6; // r14
  ActionSystem::DrawSort::__l2::<lambda_289fcd7df6e8d1f6025297f7637c435f> *v7; // [rsp+20h] [rbp-18h]
  Actor *_Val; // [rsp+50h] [rbp+18h] BYREF

  _Val = (Actor *)_Pred;
  if ( _Last - _First >= 2 )
  {
    v4 = _Last - 1;
    v5 = 8i64 - (_QWORD)_First;
    v6 = -(__int64)_First;
    do
    {
      _Val = *v4;
      *v4 = *_First;
      std::_Pop_heap_hole_by_index<Actor * *,__int64,Actor *,_lambda_289fcd7df6e8d1f6025297f7637c435f_>(
        _First,
        0i64,
        ((__int64)v4-- + v6) >> 3,
        &_Val,
        v7);
    }
    while ( ((__int64)v4 + v5) >> 3 >= 2 );
  }
}

void __fastcall std::_Sort_unchecked1<Actor * *,__int64,_lambda_289fcd7df6e8d1f6025297f7637c435f_>(
        Actor **_First,
        Actor **_Last,
        __int64 _Ideal,
        ActionSystem::DrawSort::__l2::<lambda_289fcd7df6e8d1f6025297f7637c435f> *_Pred)
{
  __int64 v4; // rsi
  Actor **first; // rbx
  __int64 v6; // rax
  Actor **v7; // rdi
  Actor **second; // rbp
  ActionSystem::DrawSort::__l2::<lambda_289fcd7df6e8d1f6025297f7637c435f> *v9; // r8
  std::pair<Actor * *,Actor * *> result; // [rsp+20h] [rbp-18h] BYREF

  v4 = _Ideal;
  first = _Last;
  v6 = _Last - _First;
  v7 = _First;
  if ( v6 <= 32 )
  {
LABEL_7:
    if ( v6 >= 2 )
      std::_Insertion_sort_unchecked<Actor * *,_lambda_289fcd7df6e8d1f6025297f7637c435f_>(
        v7,
        first,
        (ActionSystem::DrawSort::__l2::<lambda_289fcd7df6e8d1f6025297f7637c435f> *)_Ideal);
  }
  else
  {
    while ( v4 > 0 )
    {
      std::_Partition_by_median_guess_unchecked<Actor * *,_lambda_289fcd7df6e8d1f6025297f7637c435f_>(
        &result,
        v7,
        first,
        _Pred);
      second = result.second;
      v4 = v4 / 2 / 2 + v4 / 2;
      if ( (__int64)(((char *)result.first - (char *)v7) & 0xFFFFFFFFFFFFFFF8ui64) >= (__int64)(((char *)first
                                                                                               - (char *)result.second) & 0xFFFFFFFFFFFFFFF8ui64) )
      {
        std::_Sort_unchecked1<Actor * *,__int64,_lambda_289fcd7df6e8d1f6025297f7637c435f_>(
          result.second,
          first,
          v4,
          _Pred);
        first = result.first;
      }
      else
      {
        std::_Sort_unchecked1<Actor * *,__int64,_lambda_289fcd7df6e8d1f6025297f7637c435f_>(v7, result.first, v4, _Pred);
        v7 = second;
      }
      v6 = first - v7;
      if ( v6 <= 32 )
        goto LABEL_7;
    }
    std::_Make_heap_unchecked<Actor * *,_lambda_289fcd7df6e8d1f6025297f7637c435f_>(
      v7,
      first,
      (ActionSystem::DrawSort::__l2::<lambda_289fcd7df6e8d1f6025297f7637c435f> *)_Ideal);
    std::_Sort_heap_unchecked<Actor * *,_lambda_289fcd7df6e8d1f6025297f7637c435f_>(v7, first, v9);
  }
}

void __fastcall lambda_6a1020abf1e2e0c82b0c36eebbe62cd4_::operator()(Actor **commonID, int uniqueID, int a3)
{
  int v4; // esi
  bool v6; // zf
  Actor_vtbl *v7; // rax
  int v8; // ecx
  const CharaBaseStatus *v9; // rbx
  const extension::SoundHashKey *Name; // rax
  bool v11; // bl
  extension::exsound_detail::SoundNameRegistry::NameBuffer *m_ptr; // rcx
  unsigned int v13; // eax
  char v14; // bl
  __int64 v15; // r14
  char *v16; // r8
  Actor *v17; // rdx
  float v18; // xmm1_4
  Actor *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rdx
  extension::SoundList *v22; // rcx
  extension::SoundHashKey result; // [rsp+48h] [rbp-39h] BYREF
  __int64 v24; // [rsp+50h] [rbp-31h]
  extension::SoundOneshotParameters optionParams; // [rsp+58h] [rbp-29h] BYREF
  std::function<float __cdecl(void)> v26; // [rsp+78h] [rbp-9h] BYREF
  extension::SoundObject o; // [rsp+100h] [rbp+7Fh] BYREF

  v24 = -2i64;
  v4 = uniqueID;
  if ( uniqueID < 0 )
  {
    if ( a3 < 0 || (*commonID)->GetFounderPlayerID(*commonID) < 0 )
      return;
    v6 = !(*commonID)->IsOptionAsset(*commonID);
    v7 = (*commonID)->__vftable;
    if ( v6 )
      v8 = ((__int64 (*)(void))v7->GetFounderPlayerID)() + 1;
    else
      v8 = ((__int64 (*)(void))v7->GetFounderPlayerID)() + 3;
    LODWORD(commonID[1]->__vftable) = v8;
    v4 = a3;
    goto LABEL_13;
  }
  if ( (*commonID)->GetActorType(*commonID) )
    goto LABEL_13;
  v9 = *(const CharaBaseStatus **)&(*commonID)[1].iDrawPriSub;
  Name = AppMain::Sound_GetName((AppMain *)commonID[3]->__vftable, &result, SoundList_Common, v4);
  v11 = ActionSystem::CheckDependSound(
          (ActionSystem *)(unsigned int)commonID[4]->iDrawPri,
          v9,
          Name,
          *commonID,
          commonID[4]->iDrawPri,
          *(const float *)&commonID[4]->__vftable,
          (const unsigned int)commonID[5]->__vftable);
  m_ptr = result.m_sharedBuffer.m_ptr;
  if ( result.m_sharedBuffer.m_ptr
    && _InterlockedExchangeAdd64(
         (volatile signed __int64 *)&result.m_sharedBuffer.m_ptr->m_refCount.m_ptr->m_sharedCount,
         0xFFFFFFFFFFFFFFFFui64) == 1 )
  {
    ((void (__fastcall *)(extension::exsound_detail::SoundNameRegistry::NameBuffer *, __int64))m_ptr->~RefCountableWeakSupportBase)(
      m_ptr,
      1i64);
  }
  if ( !v11 )
  {
LABEL_13:
    v13 = (*commonID)->GetFounderPlayerID(*commonID);
    v14 = 0;
    if ( v13 > 1 )
      v15 = 0i64;
    else
      v15 = *((_QWORD *)&commonID[2][293].iActorStatBase + (int)v13);
    optionParams.audioSelect = -1;
    optionParams.pitchBendCent = 0;
    *(_QWORD *)&optionParams.pitchBendRandomRange = 200i64;
    v16 = (char *)operator new(0x60ui64);
    *(_QWORD *)v16 = 1i64;
    *((_WORD *)v16 + 4) = 1;
    *(_QWORD *)(v16 + 12) = 0i64;
    *(_QWORD *)(v16 + 20) = 0i64;
    *((_DWORD *)v16 + 7) = 1120403456;
    *((_QWORD *)v16 + 11) = 0i64;
    o.m_runtimeEffector.m_ptr = (extension::exsound_detail::RuntimeEffector *)v16;
    v17 = commonID[4];
    optionParams.priority = v17->iDrawPri;
    optionParams.expressionVolume = *(float *)&v17->__vftable;
    optionParams.userTag = (unsigned int)commonID[5]->__vftable;
    if ( (v17->iDrawPriSub & 0x200) != 0 )
      optionParams.stereoChange = (*commonID)->iCAngle != 0;
    if ( v15 && *(_DWORD *)(v15 + 460) == 62 )
    {
      if ( LODWORD(commonID[6]->__vftable) )
        v18 = *(float *)&FLOAT_0_2;
      else
        v18 = FLOAT_N0_2;
      if ( v16[8] || *((float *)v16 + 6) != v18 )
        v14 = 1;
      v16[8] = v14;
      *((float *)v16 + 6) = v18;
      v16[9] = 0;
    }
    else
    {
      v19 = *commonID;
      v26._Mystorage._Ptrs[0] = (std::_Func_base<float> *)&std::_Func_impl<std::_Binder<std::_Unforced,float (Actor::*)(void)const,Actor *>,std::allocator<int>,float,>::`vftable';
      v26._Mystorage._Ptrs[1] = (std::_Func_base<float> *) Actor::`vcall'{1536,{flat}};
      v26._Mystorage._Ptrs[2] = (std::_Func_base<float> *)v19;
      v26._Mystorage._Ptrs[7] = (std::_Func_base<float> *)&v26;
      extension::SoundObject::setPanPositionFunc(&o, &v26);
    }
    v20 = SLODWORD(commonID[1]->__vftable);
    v21 = (__int64)commonID[3]->__vftable;
    if ( (unsigned int)v20 <= 8 )
    {
      v22 = (extension::SoundList *)(v21 + 48 * v20 + 2196904);
      if ( v22 )
        extension::SoundList::playSE(v22, &o, v4, &optionParams);
    }
    extension::RefCountablePtr<extension::exsound_detail::RuntimeEffector>::~RefCountablePtr<extension::exsound_detail::RuntimeEffector>(
      &o.m_runtimeEffector,
      v21);
  }
}

void __fastcall ActionSystem::AllDelete(ActionSystem *this)
{
  int v2; // esi
  ActionSystem::ActorList **ppPriStart; // rcx
  __int64 v4; // rdi
  ActionSystem::ActorList *i; // rax
  SimpleQueue<ActorShot,32>::Queue **p_pNext; // r8
  unsigned int v7; // edx
  unsigned int v8; // edx
  SimpleQueue<ActorEffect,96>::Queue **v9; // r8
  unsigned int v10; // edx
  SimpleQueue<ActorWeapon,96>::Queue **v11; // r8

  if ( this->pRealiz )
  {
    v2 = 0;
    if ( this->iMaxPriority > 0 )
    {
      ppPriStart = this->ppPriStart;
      v4 = 0i64;
      do
      {
        for ( i = ppPriStart[v4]; i; i = ppPriStart[v4] )
        {
          ActionSystem::Delete(this, i);
          ppPriStart = this->ppPriStart;
        }
        ++v2;
        ++v4;
      }
      while ( v2 < this->iMaxPriority );
    }
    this->actorCharaQue.queueBody[3].pNext = 0i64;
    this->actorCharaQue.queueBody[0].pNext = &this->actorCharaQue.queueBody[1];
    this->actorCharaQue.queueBody[0].pData = this->actorCharaQue.body;
    this->actorCharaQue.queueBody[1].pData = &this->actorCharaQue.body[1];
    p_pNext = &this->actorShotQue.queueBody[0].pNext;
    this->actorCharaQue.queueBody[1].pNext = &this->actorCharaQue.queueBody[2];
    this->actorCharaQue.queueBody[2].pData = &this->actorCharaQue.body[2];
    this->actorCharaQue.queueBody[2].pNext = &this->actorCharaQue.queueBody[3];
    this->actorCharaQue.queueBody[3].pData = &this->actorCharaQue.body[3];
    this->actorCharaQue.pFront = this->actorCharaQue.queueBody;
    v7 = 0;
    this->actorCharaQue.pBack = &this->actorCharaQue.queueBody[3];
    this->actorCharaQue.pUseFront = 0i64;
    this->actorCharaQue.pUseBack = 0i64;
    this->actorCharaQue.uiRestCount = 4;
    do
    {
      *(p_pNext - 1) = (SimpleQueue<ActorShot,32>::Queue *)&this->actorShotQue.body[v7];
      if ( v7 == 31 )
        *p_pNext = 0i64;
      else
        *p_pNext = &this->actorShotQue.queueBody[v7 + 1];
      ++v7;
      p_pNext += 2;
    }
    while ( v7 < 0x20 );
    this->actorShotQue.pUseFront = 0i64;
    this->actorShotQue.pFront = this->actorShotQue.queueBody;
    v8 = 0;
    this->actorShotQue.pUseBack = 0i64;
    this->actorShotQue.pBack = &this->actorShotQue.queueBody[31];
    this->actorShotQue.uiRestCount = 32;
    v9 = &this->actorEffectQue.queueBody[0].pNext;
    do
    {
      *(v9 - 1) = (SimpleQueue<ActorEffect,96>::Queue *)&this->actorEffectQue.body[v8];
      if ( v8 == 95 )
        *v9 = 0i64;
      else
        *v9 = &this->actorEffectQue.queueBody[v8 + 1];
      ++v8;
      v9 += 2;
    }
    while ( v8 < 0x60 );
    this->actorEffectQue.pUseFront = 0i64;
    this->actorEffectQue.pFront = this->actorEffectQue.queueBody;
    v10 = 0;
    this->actorEffectQue.pUseBack = 0i64;
    this->actorEffectQue.pBack = &this->actorEffectQue.queueBody[95];
    this->actorEffectQue.uiRestCount = 96;
    v11 = &this->actorWeaponQue.queueBody[0].pNext;
    do
    {
      *(v11 - 1) = (SimpleQueue<ActorWeapon,96>::Queue *)&this->actorWeaponQue.body[v10];
      if ( v10 == 95 )
        *v11 = 0i64;
      else
        *v11 = &this->actorWeaponQue.queueBody[v10 + 1];
      ++v10;
      v11 += 2;
    }
    while ( v10 < 0x60 );
    this->actorWeaponQue.pUseFront = 0i64;
    this->actorWeaponQue.pUseBack = 0i64;
    this->actorWeaponQue.pFront = this->actorWeaponQue.queueBody;
    this->actorWeaponQue.uiRestCount = 96;
    this->actorWeaponQue.pBack = &this->actorWeaponQue.queueBody[95];
    this->actorOptionQue.queueBody[0].pData = this->actorOptionQue.body;
    this->actorOptionQue.queueBody[1].pData = &this->actorOptionQue.body[1];
    this->actorOptionQue.queueBody[0].pNext = &this->actorOptionQue.queueBody[1];
    this->actorOptionQue.queueBody[2].pData = &this->actorOptionQue.body[2];
    this->actorOptionQue.queueBody[1].pNext = &this->actorOptionQue.queueBody[2];
    this->actorOptionQue.queueBody[3].pNext = 0i64;
    this->actorOptionQue.queueBody[2].pNext = &this->actorOptionQue.queueBody[3];
    this->actorOptionQue.queueBody[3].pData = &this->actorOptionQue.body[3];
    this->actorOptionQue.pUseFront = 0i64;
    this->actorOptionQue.pUseBack = 0i64;
    this->actorOptionQue.pFront = this->actorOptionQue.queueBody;
    this->actorOptionQue.pBack = &this->actorOptionQue.queueBody[3];
    this->actorOptionQue.uiRestCount = 4;
    this->pPlayer[0] = 0i64;
    this->pPlayer[1] = 0i64;
    this->pDrawActor[0] = 0i64;
    this->pDrawActor[1] = 0i64;
    this->pDrawActor[2] = 0i64;
    this->pDrawActor[3] = 0i64;
  }
}

void __fastcall ActionSystem::CameraPrevCalc(ActionSystem *this)
{
  OGLVec3 *p_vBasePosPrev; // rbx
  bool v3; // zf
  __int128 v4; // xmm1
  float z; // eax
  __int128 v6; // xmm0
  float v7; // eax
  __int128 v8; // xmm0
  float v9; // eax
  __int128 v10; // xmm1
  float x; // eax
  __int128 v12; // xmm0
  float v13; // eax
  __int128 v14; // xmm1
  float v15; // eax
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1

  CameraControl::CameraPrevCalc(&this->cameraCtrl, this);
  if ( this->bUseSubCamera && this->subCameraCtrl != (CameraControl *)&this->freeCamera )
  {
    p_vBasePosPrev = &this->subCameraCtrl[0].vBasePosPrev;
    do
    {
      v3 = LOBYTE(p_vBasePosPrev[76].x) == 0;
      v4 = *(_OWORD *)&p_vBasePosPrev[44].z;
      z = p_vBasePosPrev[-3].z;
      *(_QWORD *)&p_vBasePosPrev->x = *(_QWORD *)&p_vBasePosPrev[-3].x;
      *(_QWORD *)&p_vBasePosPrev[-1].x = *(_QWORD *)&p_vBasePosPrev[-4].x;
      *(_QWORD *)&p_vBasePosPrev[1].x = *(_QWORD *)&p_vBasePosPrev[-2].x;
      *(_QWORD *)&p_vBasePosPrev[41].y = *(_QWORD *)&p_vBasePosPrev[38].y;
      *(_QWORD *)&p_vBasePosPrev[40].y = *(_QWORD *)&p_vBasePosPrev[37].y;
      *(_QWORD *)&p_vBasePosPrev[42].y = *(_QWORD *)&p_vBasePosPrev[39].y;
      v6 = *(_OWORD *)&p_vBasePosPrev[43].y;
      p_vBasePosPrev->z = z;
      v7 = p_vBasePosPrev[-4].z;
      *(_OWORD *)&p_vBasePosPrev[59].y = v6;
      p_vBasePosPrev[-1].z = v7;
      v8 = *(_OWORD *)&p_vBasePosPrev[46].x;
      v9 = p_vBasePosPrev[-2].z;
      *(_OWORD *)&p_vBasePosPrev[60].z = v4;
      p_vBasePosPrev[1].z = v9;
      v10 = *(_OWORD *)&p_vBasePosPrev[47].y;
      x = p_vBasePosPrev[39].x;
      *(_OWORD *)&p_vBasePosPrev[62].x = v8;
      p_vBasePosPrev[42].x = x;
      v12 = *(_OWORD *)&p_vBasePosPrev[48].z;
      v13 = p_vBasePosPrev[38].x;
      *(_OWORD *)&p_vBasePosPrev[63].y = v10;
      p_vBasePosPrev[41].x = v13;
      v14 = *(_OWORD *)&p_vBasePosPrev[50].x;
      v15 = p_vBasePosPrev[40].x;
      *(_OWORD *)&p_vBasePosPrev[64].z = v12;
      p_vBasePosPrev[43].x = v15;
      v16 = *(_OWORD *)&p_vBasePosPrev[51].y;
      *(_OWORD *)&p_vBasePosPrev[66].x = v14;
      v17 = *(_OWORD *)&p_vBasePosPrev[52].z;
      *(_OWORD *)&p_vBasePosPrev[67].y = v16;
      v18 = *(_OWORD *)&p_vBasePosPrev[54].x;
      *(_OWORD *)&p_vBasePosPrev[68].z = v17;
      v19 = *(_OWORD *)&p_vBasePosPrev[55].y;
      *(_OWORD *)&p_vBasePosPrev[70].x = v18;
      v20 = *(_OWORD *)&p_vBasePosPrev[56].z;
      *(_OWORD *)&p_vBasePosPrev[71].y = v19;
      v21 = *(_OWORD *)&p_vBasePosPrev[58].x;
      *(_OWORD *)&p_vBasePosPrev[72].z = v20;
      *(_OWORD *)&p_vBasePosPrev[74].x = v21;
      if ( v3 )
        CameraControl::BattleCameraCheck((CameraControl *)&p_vBasePosPrev[-4], this);
      BYTE1(p_vBasePosPrev[76].x) = 0;
      p_vBasePosPrev = (OGLVec3 *)((char *)p_vBasePosPrev + 968);
    }
    while ( &p_vBasePosPrev[-4] != (OGLVec3 *)&this->freeCamera );
  }
}

void __fastcall ActionSystem::CheckComboDamageAnnounce(ActionSystem *this)
{
  BattleSystem::BattleController *v2; // rdx
  BattleSystem::BattleController *v3; // rax
  AppMain *v4; // r12
  int v5; // ebp
  int *iPrevDamageAnnounce; // r14
  ActorChara **pPlayer; // r15
  ActorChara *v8; // rsi
  __int64 v9; // rdi
  const DamageAnnounceTerm *v10; // rax
  BattleSystem::BattleController *v11; // rax
  unsigned int v12; // ebx
  unsigned __int64 v13; // rbx
  char *v14; // rax
  __int64 v15; // rdx
  float v16; // xmm1_4
  char v17; // cl
  SoundIndex *v18; // r8
  extension::SoundList *v19; // rcx
  extension::SoundObject o; // [rsp+98h] [rbp+10h] BYREF
  BattleSystem::BattleController *v21; // [rsp+A0h] [rbp+18h]

  v2 = BattleSystem::BattleController::instance;
  if ( !BattleSystem::BattleController::instance )
  {
    o.m_runtimeEffector.m_ptr = (extension::exsound_detail::RuntimeEffector *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController((BattleSystem::BattleController *)o.m_runtimeEffector.m_ptr);
    v2 = v3;
    BattleSystem::BattleController::instance = v3;
  }
  if ( v2->roundPhase <= DIE && (unsigned int)(this->cameraCtrl.offset.type - 3) > 1 )
  {
    v4 = *(AppMain **)&AppMain::pApp;
    v5 = 0;
    iPrevDamageAnnounce = this->iPrevDamageAnnounce;
    pPlayer = this->pPlayer;
    do
    {
      v8 = *pPlayer;
      if ( *pPlayer )
      {
        if ( v8->damageInfo.iCombo >= 1 )
        {
          v9 = 0i64;
          v10 = damageAnnounceTerm;
          while ( v8->damageInfo.iComboDamage < v10->iDamage )
          {
            ++v9;
            if ( (__int64)++v10 >= (__int64)BattleSystem::supportCharaTable )
              goto LABEL_29;
          }
          if ( *iPrevDamageAnnounce < v10->iDamage )
          {
            if ( !v2 )
            {
              v21 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
              BattleSystem::BattleController::BattleController(v21);
              v2 = v11;
              BattleSystem::BattleController::instance = v11;
            }
            v12 = (unsigned int)RandomMT::getRand32(&v2->randMT) >> 1;
            v13 = damageAnnounceTerm[v9].iAnnounceID[(int)AppMain::GetSaveDataMyAnnounceType(v4, (PLAYER_ID)v5)][v12 & 1];
            if ( (_DWORD)v13 == -1 )
            {
              v2 = BattleSystem::BattleController::instance;
            }
            else
            {
              *iPrevDamageAnnounce = v8->damageInfo.iComboDamage;
              v14 = (char *)operator new(0x60ui64);
              *(_QWORD *)v14 = 1i64;
              *((_WORD *)v14 + 4) = 1;
              *(_QWORD *)(v14 + 12) = 0i64;
              *(_QWORD *)(v14 + 20) = 0i64;
              *((_DWORD *)v14 + 7) = 1120403456;
              *((_QWORD *)v14 + 11) = 0i64;
              o.m_runtimeEffector.m_ptr = (extension::exsound_detail::RuntimeEffector *)v14;
              if ( v5 )
                v16 = FLOAT_N0_2;
              else
                v16 = *(float *)&FLOAT_0_2;
              if ( v14[8] || (v17 = 0, *((float *)v14 + 6) != v16) )
                v17 = 1;
              v14[8] = v17;
              *((float *)v14 + 6) = v16;
              v14[9] = 0;
              v18 = &s_soundIndex;
              if ( v13 < 0x11A )
                v18 = (SoundIndex *)&s_soundIndex.m_keys[v13];
              v19 = &v4->m_Snd_Lists[7i64 - (v5 != 0)];
              if ( v19 )
                extension::SoundList::playSEByName(v19, &o, &v18->m_nullKey, 0i64);
              extension::RefCountablePtr<extension::exsound_detail::RuntimeEffector>::~RefCountablePtr<extension::exsound_detail::RuntimeEffector>(
                &o.m_runtimeEffector,
                v15);
              v2 = BattleSystem::BattleController::instance;
            }
          }
        }
        else
        {
          *iPrevDamageAnnounce = 0;
        }
      }
LABEL_29:
      ++v5;
      ++pPlayer;
      ++iPrevDamageAnnounce;
    }
    while ( v5 < 2 );
  }
}

char __fastcall ActionSystem::CheckDependSound(
        ActionSystem *this,
        const CharaBaseStatus *pStat,
        const extension::SoundHashKey *hash,
        Actor *actor,
        const int priority,
        const float volume,
        const unsigned int flag)
{
  extension::exsound_detail::SoundNameRegistry::NameBuffer *m_ptr; // rax
  int v11; // esi
  char v12; // di
  int v13; // ebx
  __int16 iFootType; // ax
  __int16 iPhysique; // ax
  __int16 v16; // cx
  __int16 v17; // r8
  __int16 v18; // cx
  __int16 v19; // r8
  float x; // xmm6_4
  __int64 v21; // rcx
  __int64 v22; // rbp
  BattleSystem::BattleController *v23; // rax
  const char *PlaySoundByCharacterPosition; // rsi
  __int64 v25; // rdx
  char *v26; // rbx
  Actor::SYSTEM_STAT systemStat; // eax
  OGLVec3 *v28; // rax
  float SoundPanPosition; // xmm2_4
  const extension::SoundHashKey *IfExist; // rax
  extension::exsound_detail::SoundNameRegistry::NameBuffer *v31; // rcx
  char v32[16]; // [rsp+28h] [rbp-70h] BYREF
  extension::SoundOneshotParameters optionParams; // [rsp+38h] [rbp-60h] BYREF
  extension::SoundObject o; // [rsp+A0h] [rbp+8h] BYREF
  extension::SoundHashKey result; // [rsp+A8h] [rbp+10h] BYREF

  o.m_runtimeEffector.m_ptr = (extension::exsound_detail::RuntimeEffector *)this;
  if ( !pStat )
    return 0;
  m_ptr = hash->m_sharedBuffer.m_ptr;
  if ( hash->m_sharedBuffer.m_ptr == s_soundIndex.m_keys[143].m_sharedBuffer.m_ptr )
  {
    v11 = 143;
    v12 = 0;
    v13 = pStat->status.iPhysique == 2;
  }
  else if ( m_ptr == s_soundIndex.m_keys[144].m_sharedBuffer.m_ptr )
  {
    iFootType = pStat->status.iFootType;
    v12 = 0;
    switch ( iFootType )
    {
      case 4:
        v13 = 6;
        break;
      case 3:
        v13 = 5;
        break;
      case 2:
        v13 = 4;
        break;
      case 1:
        v13 = 3;
        break;
      default:
        if ( pStat->status.iGender == 1 || (iPhysique = pStat->status.iPhysique, iPhysique == 1) )
        {
          v13 = 1;
        }
        else
        {
          v13 = 0;
          if ( iPhysique == 2 )
            v13 = 2;
        }
        break;
    }
    v11 = 144;
  }
  else if ( m_ptr == s_soundIndex.m_keys[145].m_sharedBuffer.m_ptr
         || m_ptr == s_soundIndex.m_keys[146].m_sharedBuffer.m_ptr )
  {
    v18 = pStat->status.iFootType;
    v12 = 0;
    switch ( v18 )
    {
      case 4:
        v13 = 6;
        break;
      case 3:
        v13 = 5;
        break;
      case 2:
        v13 = 4;
        break;
      case 1:
        v13 = 3;
        break;
      default:
        if ( pStat->status.iGender == 1 || (v19 = pStat->status.iPhysique, v19 == 1) )
        {
          v13 = 1;
        }
        else
        {
          v13 = 0;
          if ( v19 == 2 )
            v13 = 2;
        }
        break;
    }
    v11 = (m_ptr != s_soundIndex.m_keys[145].m_sharedBuffer.m_ptr) + 145;
  }
  else
  {
    if ( m_ptr != s_soundIndex.m_keys[147].m_sharedBuffer.m_ptr
      && m_ptr != s_soundIndex.m_keys[148].m_sharedBuffer.m_ptr )
    {
      return 0;
    }
    v16 = pStat->status.iFootType;
    v12 = 0;
    switch ( v16 )
    {
      case 4:
        v13 = 6;
        break;
      case 3:
        v13 = 5;
        break;
      case 2:
        v13 = 4;
        break;
      case 1:
        v13 = 3;
        break;
      default:
        if ( pStat->status.iGender == 1 || (v17 = pStat->status.iPhysique, v17 == 1) )
        {
          v13 = 1;
        }
        else
        {
          v13 = 0;
          if ( v17 == 2 )
            v13 = 2;
        }
        break;
    }
    v11 = (m_ptr != s_soundIndex.m_keys[147].m_sharedBuffer.m_ptr) + 147;
  }
  x = actor->vPos.x;
  v21 = *(_QWORD *)&AppMain::pApp;
  v22 = *(_QWORD *)&AppMain::pApp;
  v23 = BattleSystem::BattleController::instance;
  if ( !BattleSystem::BattleController::instance )
  {
    o.m_runtimeEffector.m_ptr = (extension::exsound_detail::RuntimeEffector *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController((BattleSystem::BattleController *)o.m_runtimeEffector.m_ptr);
    BattleSystem::BattleController::instance = v23;
    v21 = *(_QWORD *)&AppMain::pApp;
  }
  PlaySoundByCharacterPosition = StageProjectData::FindPlaySoundByCharacterPosition(
                                   *(StageProjectData **)(v21 + 11056),
                                   v23->battleInfo.battleStageID,
                                   (SoundId)v11,
                                   x);
  optionParams.pitchBendCent = 0;
  *(_QWORD *)&optionParams.pitchBendRandomRange = 200i64;
  optionParams.priority = priority;
  optionParams.expressionVolume = volume;
  optionParams.userTag = flag;
  optionParams.audioSelect = v13;
  v26 = (char *)operator new(0x60ui64);
  *(_QWORD *)v26 = 1i64;
  *((_WORD *)v26 + 4) = 1;
  *(_QWORD *)(v26 + 12) = 0i64;
  *(_QWORD *)(v26 + 20) = 0i64;
  *((_DWORD *)v26 + 7) = 1120403456;
  *((_QWORD *)v26 + 11) = 0i64;
  o.m_runtimeEffector.m_ptr = (extension::exsound_detail::RuntimeEffector *)v26;
  systemStat = actor->systemStat;
  if ( systemStat == INIT || systemStat == ERASE )
  {
    SoundPanPosition = FLOAT_N100_0;
  }
  else
  {
    v28 = actor->GetCenterPosition(actor, v32);
    SoundPanPosition = ActionSystem::GetSoundPanPosition(actor->pActSys, v28->x);
  }
  if ( v26[8] || *((float *)v26 + 6) != SoundPanPosition )
    v12 = 1;
  v26[8] = v12;
  *((float *)v26 + 6) = SoundPanPosition;
  v26[9] = 0;
  if ( PlaySoundByCharacterPosition )
  {
    IfExist = extension::SoundHashKey::MakeIfExist(&result, PlaySoundByCharacterPosition);
    if ( v22 != -2197144 )
      extension::SoundList::playSEByName((extension::SoundList *)(v22 + 2197144), &o, IfExist, &optionParams);
    v31 = result.m_sharedBuffer.m_ptr;
    if ( result.m_sharedBuffer.m_ptr )
    {
      if ( _InterlockedExchangeAdd64(
             (volatile signed __int64 *)&result.m_sharedBuffer.m_ptr->m_refCount.m_ptr->m_sharedCount,
             0xFFFFFFFFFFFFFFFFui64) == 1 )
        ((void (__fastcall *)(extension::exsound_detail::SoundNameRegistry::NameBuffer *, __int64))v31->~RefCountableWeakSupportBase)(
          v31,
          1i64);
    }
  }
  else if ( v22 != -2196904 )
  {
    extension::SoundList::playSEByName((extension::SoundList *)(v22 + 2196904), &o, hash, &optionParams);
  }
  extension::RefCountablePtr<extension::exsound_detail::RuntimeEffector>::~RefCountablePtr<extension::exsound_detail::RuntimeEffector>(
    &o.m_runtimeEffector,
    v25);
  return 1;
}

void __fastcall ActionSystem::CheckThrowChildPlayer(ActionSystem *this, int playerID)
{
  ActorChara *v4; // rbx

  if ( (unsigned int)playerID > 1 )
    return;
  v4 = this->pPlayer[playerID];
  if ( !v4 )
    return;
  if ( v4->throwAttach.bNextReset )
  {
    *(_QWORD *)&v4->throwAttach.iAtkBoneID = 0i64;
    v4->throwAttach.iOptionFlag = 0;
    v4->throwAttach.bNextReset = 0;
  }
  else
  {
    if ( !v4->throwAttach.reserveAttach.iAtkBoneID && !v4->throwAttach.reserveAttach.iPsvBoneID )
      goto LABEL_9;
    v4->throwAttach.iAtkBoneID = v4->throwAttach.reserveAttach.iAtkBoneID;
    v4->throwAttach.iPsvBoneID = v4->throwAttach.reserveAttach.iPsvBoneID;
    v4->throwAttach.iOptionFlag = v4->throwAttach.reserveAttach.iOptionFlag;
    v4->throwAttach.bNextReset = 0;
  }
  v4->throwAttach.reserveAttach.iOptionFlag = 0;
  *(_QWORD *)&v4->throwAttach.reserveAttach.iAtkBoneID = 0i64;
LABEL_9:
  if ( !v4->IsThrowLock(v4) )
    goto LABEL_18;
  if ( v4->throwAttach.iAtkBoneID || v4->throwAttach.iPsvBoneID )
    this->iThrowChildPlayerID = playerID;
  if ( this->iThrowChildPlayerID < 0 )
  {
LABEL_18:
    if ( v4->IsThrowDamaged(v4) )
      this->iThrowChildPlayerID = playerID;
  }
}

void __fastcall ActionSystem::Delete(ActionSystem *this, ActionSystem::ActorList *pActorList)
{
  ActionSystem::ActorList *pEmpty; // rbp
  ActorChara *pActor; // rax
  __int64 iPriority; // rsi
  Actor::ACTOR_TYPE v7; // eax
  __int32 v8; // eax
  __int32 v9; // eax
  __int32 v10; // eax
  ActorOption *v11; // rdx
  SimpleQueue<ActorOption,4>::Queue *pUseFront; // rcx
  SimpleQueue<ActorOption,4>::Queue *pNext; // rax
  ActorWeapon *v14; // rdx
  SimpleQueue<ActorWeapon,96>::Queue *v15; // rcx
  SimpleQueue<ActorWeapon,96>::Queue *v16; // rax
  ActorShot *v17; // rdx
  SimpleQueue<ActorShot,32>::Queue *v18; // rcx
  SimpleQueue<ActorShot,32>::Queue *v19; // rax
  ActorEffect *v20; // rdx
  SimpleQueue<ActorEffect,96>::Queue *v21; // rcx
  SimpleQueue<ActorEffect,96>::Queue *v22; // rax
  ActorChara *v23; // rdx
  SimpleQueue<ActorChara,4>::Queue *v24; // rcx
  SimpleQueue<ActorChara,4>::Queue *v25; // rax
  ActionSystem::ActorList *pBefore; // rdx
  __int64 v27; // rcx

  pEmpty = this->pEmpty;
  if ( this->pRealiz )
  {
    if ( pActorList )
    {
      pActor = (ActorChara *)pActorList->pActor;
      if ( pActor )
      {
        iPriority = pActor->iPriority;
        if ( pActor == this->pPlayer[0] )
          this->pPlayer[0] = 0i64;
        if ( pActorList->pActor == this->pPlayer[1] )
          this->pPlayer[1] = 0i64;
        if ( pActorList->pActor == this->pDrawActor[0] )
          this->pDrawActor[0] = 0i64;
        if ( pActorList->pActor == this->pDrawActor[1] )
          this->pDrawActor[1] = 0i64;
        if ( pActorList->pActor == this->pDrawActor[2] )
          this->pDrawActor[2] = 0i64;
        if ( pActorList->pActor == this->pDrawActor[3] )
          this->pDrawActor[3] = 0i64;
        pActorList->pActor->Dispose(pActorList->pActor);
        v7 = pActorList->pActor->GetActorType(pActorList->pActor);
        if ( v7 )
        {
          v8 = v7 - 1;
          if ( v8 )
          {
            v9 = v8 - 1;
            if ( v9 )
            {
              v10 = v9 - 1;
              if ( v10 )
              {
                if ( v10 == 1 )
                {
                  v11 = (ActorOption *)pActorList->pActor;
                  if ( v11 )
                  {
                    if ( this->actorOptionQue.uiRestCount != 4 )
                    {
                      pUseFront = this->actorOptionQue.pUseFront;
                      if ( pUseFront )
                      {
                        pNext = pUseFront->pNext;
                        this->actorOptionQue.pUseFront = pNext;
                        if ( !pNext )
                          this->actorOptionQue.pUseBack = 0i64;
                        if ( this->actorOptionQue.pFront )
                          this->actorOptionQue.pBack->pNext = pUseFront;
                        else
                          this->actorOptionQue.pFront = pUseFront;
                        this->actorOptionQue.pBack = pUseFront;
                        pUseFront->pNext = 0i64;
                        this->actorOptionQue.pBack->pData = v11;
                        ++this->actorOptionQue.uiRestCount;
                      }
                    }
                  }
                }
              }
              else
              {
                v14 = (ActorWeapon *)pActorList->pActor;
                if ( v14 )
                {
                  if ( this->actorWeaponQue.uiRestCount != 96 )
                  {
                    v15 = this->actorWeaponQue.pUseFront;
                    if ( v15 )
                    {
                      v16 = v15->pNext;
                      this->actorWeaponQue.pUseFront = v16;
                      if ( !v16 )
                        this->actorWeaponQue.pUseBack = 0i64;
                      if ( this->actorWeaponQue.pFront )
                        this->actorWeaponQue.pBack->pNext = v15;
                      else
                        this->actorWeaponQue.pFront = v15;
                      this->actorWeaponQue.pBack = v15;
                      v15->pNext = 0i64;
                      this->actorWeaponQue.pBack->pData = v14;
                      ++this->actorWeaponQue.uiRestCount;
                    }
                  }
                }
              }
            }
            else
            {
              v17 = (ActorShot *)pActorList->pActor;
              if ( v17 )
              {
                if ( this->actorShotQue.uiRestCount != 32 )
                {
                  v18 = this->actorShotQue.pUseFront;
                  if ( v18 )
                  {
                    v19 = v18->pNext;
                    this->actorShotQue.pUseFront = v19;
                    if ( !v19 )
                      this->actorShotQue.pUseBack = 0i64;
                    if ( this->actorShotQue.pFront )
                      this->actorShotQue.pBack->pNext = v18;
                    else
                      this->actorShotQue.pFront = v18;
                    this->actorShotQue.pBack = v18;
                    v18->pNext = 0i64;
                    this->actorShotQue.pBack->pData = v17;
                    ++this->actorShotQue.uiRestCount;
                  }
                }
              }
            }
          }
          else
          {
            v20 = (ActorEffect *)pActorList->pActor;
            if ( v20 )
            {
              if ( this->actorEffectQue.uiRestCount != 96 )
              {
                v21 = this->actorEffectQue.pUseFront;
                if ( v21 )
                {
                  v22 = v21->pNext;
                  this->actorEffectQue.pUseFront = v22;
                  if ( !v22 )
                    this->actorEffectQue.pUseBack = 0i64;
                  if ( this->actorEffectQue.pFront )
                    this->actorEffectQue.pBack->pNext = v21;
                  else
                    this->actorEffectQue.pFront = v21;
                  this->actorEffectQue.pBack = v21;
                  v21->pNext = 0i64;
                  this->actorEffectQue.pBack->pData = v20;
                  ++this->actorEffectQue.uiRestCount;
                }
              }
            }
          }
        }
        else
        {
          v23 = (ActorChara *)pActorList->pActor;
          if ( v23 )
          {
            if ( this->actorCharaQue.uiRestCount != 4 )
            {
              v24 = this->actorCharaQue.pUseFront;
              if ( v24 )
              {
                v25 = v24->pNext;
                this->actorCharaQue.pUseFront = v25;
                if ( !v25 )
                  this->actorCharaQue.pUseBack = 0i64;
                if ( this->actorCharaQue.pFront )
                  this->actorCharaQue.pBack->pNext = v24;
                else
                  this->actorCharaQue.pFront = v24;
                this->actorCharaQue.pBack = v24;
                v24->pNext = 0i64;
                this->actorCharaQue.pBack->pData = v23;
                ++this->actorCharaQue.uiRestCount;
              }
            }
          }
        }
        pBefore = pActorList->pBefore;
        pActorList->pActor = 0i64;
        if ( pBefore )
        {
          if ( pActorList->pNext )
          {
            pBefore->pNext = pActorList->pNext;
            pActorList->pNext->pBefore = pActorList->pBefore;
          }
          else
          {
            this->ppPriEnd[iPriority] = pBefore;
            pActorList->pBefore->pNext = 0i64;
          }
        }
        else if ( pActorList->pNext )
        {
          this->ppPriStart[iPriority] = pActorList->pNext;
          pActorList->pNext->pBefore = 0i64;
        }
        else
        {
          v27 = iPriority;
          this->ppPriStart[v27] = 0i64;
          this->ppPriEnd[v27] = 0i64;
        }
        if ( pEmpty )
        {
          pEmpty->pBefore = pActorList;
          this->pEmpty = pActorList;
          pActorList->pBefore = 0i64;
          this->pEmpty->pNext = pEmpty;
        }
        else
        {
          this->pEmpty = pActorList;
          pActorList->pBefore = 0i64;
          this->pEmpty->pNext = 0i64;
        }
        --this->pAliveNum[iPriority];
        if ( --this->iAliveTotal <= 0 )
          this->uiActorID = 0;
      }
    }
  }
}

void __fastcall ActionSystem::DrawCaller(ActionSystem *this, int pri)
{
  __int64 iReqDrawCount; // rax
  Actor **Myfirst; // rcx
  int v6; // edi
  __int64 v7; // rsi
  Actor *v8; // rbx
  Actor_vtbl *v9; // rax
  Actor *v10; // rcx
  ActionSystem::DrawSort::__l2::<lambda_289fcd7df6e8d1f6025297f7637c435f> v11; // [rsp+40h] [rbp+8h] BYREF

  iReqDrawCount = this->iReqDrawCount;
  if ( (int)iReqDrawCount > 0 )
  {
    if ( !this->bSorted )
    {
      Myfirst = this->pReqDraw._Mypair._Myval2._Myfirst;
      v11 = 0;
      std::_Sort_unchecked1<Actor * *,__int64,_lambda_289fcd7df6e8d1f6025297f7637c435f_>(
        Myfirst,
        &Myfirst[iReqDrawCount],
        (8 * iReqDrawCount) >> 3,
        &v11);
      this->bSorted = 1;
    }
    v6 = 0;
    if ( this->iReqDrawCount > 0 )
    {
      v7 = 0i64;
      do
      {
        v8 = this->pReqDraw._Mypair._Myval2._Myfirst[v7];
        if ( v8->iDrawPri == pri )
        {
          v9 = v8->__vftable;
          v10 = this->pReqDraw._Mypair._Myval2._Myfirst[v7];
          v8->bDrawCalled = 1;
          v9->Draw(v10);
          v8->bDrawReq = 0;
        }
        ++v6;
        ++v7;
      }
      while ( v6 < this->iReqDrawCount );
    }
  }
}

void __fastcall ActionSystem::DrawCaller(ActionSystem *this, int start, int end)
{
  __int64 iReqDrawCount; // rax
  Actor **Myfirst; // rcx
  int v8; // edi
  __int64 v9; // rsi
  Actor *v10; // rbx
  int iDrawPri; // eax
  Actor_vtbl *v12; // rax
  Actor *v13; // rcx
  ActionSystem::DrawSort::__l2::<lambda_289fcd7df6e8d1f6025297f7637c435f> v14; // [rsp+40h] [rbp+8h] BYREF

  iReqDrawCount = this->iReqDrawCount;
  if ( (int)iReqDrawCount > 0 )
  {
    if ( !this->bSorted )
    {
      Myfirst = this->pReqDraw._Mypair._Myval2._Myfirst;
      v14 = 0;
      std::_Sort_unchecked1<Actor * *,__int64,_lambda_289fcd7df6e8d1f6025297f7637c435f_>(
        Myfirst,
        &Myfirst[iReqDrawCount],
        (8 * iReqDrawCount) >> 3,
        &v14);
      this->bSorted = 1;
    }
    v8 = 0;
    if ( this->iReqDrawCount > 0 )
    {
      v9 = 0i64;
      do
      {
        v10 = this->pReqDraw._Mypair._Myval2._Myfirst[v9];
        iDrawPri = v10->iDrawPri;
        if ( iDrawPri >= start && iDrawPri <= end )
        {
          v12 = v10->__vftable;
          v13 = this->pReqDraw._Mypair._Myval2._Myfirst[v9];
          v10->bDrawCalled = 1;
          v12->Draw(v13);
          v10->bDrawReq = 0;
        }
        ++v8;
        ++v9;
      }
      while ( v8 < this->iReqDrawCount );
    }
  }
}

void __fastcall ActionSystem::DrawReqClear(ActionSystem *this)
{
  int v1; // edx
  __int64 v2; // r8
  Actor *v3; // r9

  v1 = 0;
  if ( this->iReqDrawCount <= 0 )
  {
    this->bSorted = 0;
    this->iReqDrawCount = 0;
  }
  else
  {
    v2 = 0i64;
    do
    {
      v3 = this->pReqDraw._Mypair._Myval2._Myfirst[v2];
      if ( v3 )
        v3->bDrawCalled = 0;
      ++v1;
      ++v2;
    }
    while ( v1 < this->iReqDrawCount );
    this->bSorted = 0;
    this->iReqDrawCount = 0;
  }
}

Actor *__fastcall ActionSystem::Entry(ActionSystem *this, Actor::ACTOR_TYPE type, int iPriority)
{
  __int64 v4; // r15
  Actor *result; // rax
  __int32 v6; // edx
  __int32 v7; // edx
  __int32 v8; // edx
  SimpleQueue<ActorOption,4>::Queue *v9; // rcx
  SimpleQueue<ActorOption,4>::Queue *v10; // rax
  Actor *pData; // r14
  SimpleQueue<ActorWeapon,96>::Queue *v12; // rcx
  SimpleQueue<ActorWeapon,96>::Queue *v13; // rax
  SimpleQueue<ActorShot,32>::Queue *v14; // rcx
  SimpleQueue<ActorShot,32>::Queue *v15; // rax
  SimpleQueue<ActorEffect,96>::Queue *v16; // rcx
  SimpleQueue<ActorEffect,96>::Queue *v17; // rax
  SimpleQueue<ActorChara,4>::Queue *pFront; // rcx
  SimpleQueue<ActorChara,4>::Queue *pNext; // rax
  ActionSystem::ActorList **ppPriEnd; // rax
  ActionSystem::ActorList *pEmpty; // rsi
  ActionSystem::ActorList *v22; // rcx
  ActionSystem::ActorList *v23; // rax
  ActionSystem::ActorList *v24; // rdx
  Actor_vtbl *v25; // rdx

  v4 = iPriority;
  if ( !this->pRealiz || iPriority >= this->iMaxPriority || iPriority < 0 || !this->pEmpty )
    return 0i64;
  if ( type == CHARA )
  {
    if ( this->actorCharaQue.uiRestCount )
    {
      pFront = this->actorCharaQue.pFront;
      pNext = pFront->pNext;
      pData = pFront->pData;
      this->actorCharaQue.pFront = pNext;
      if ( !pNext )
        this->actorCharaQue.pBack = 0i64;
      if ( this->actorCharaQue.pUseFront )
        this->actorCharaQue.pUseBack->pNext = pFront;
      else
        this->actorCharaQue.pUseFront = pFront;
      this->actorCharaQue.pUseBack = pFront;
      pFront->pNext = 0i64;
      --this->actorCharaQue.uiRestCount;
      goto LABEL_46;
    }
    return 0i64;
  }
  v6 = type - 1;
  if ( !v6 )
  {
    if ( this->actorEffectQue.uiRestCount )
    {
      v16 = this->actorEffectQue.pFront;
      v17 = v16->pNext;
      pData = v16->pData;
      this->actorEffectQue.pFront = v17;
      if ( !v17 )
        this->actorEffectQue.pBack = 0i64;
      if ( this->actorEffectQue.pUseFront )
        this->actorEffectQue.pUseBack->pNext = v16;
      else
        this->actorEffectQue.pUseFront = v16;
      this->actorEffectQue.pUseBack = v16;
      v16->pNext = 0i64;
      --this->actorEffectQue.uiRestCount;
      goto LABEL_46;
    }
    return 0i64;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    if ( this->actorShotQue.uiRestCount )
    {
      v14 = this->actorShotQue.pFront;
      v15 = v14->pNext;
      pData = v14->pData;
      this->actorShotQue.pFront = v15;
      if ( !v15 )
        this->actorShotQue.pBack = 0i64;
      if ( this->actorShotQue.pUseFront )
        this->actorShotQue.pUseBack->pNext = v14;
      else
        this->actorShotQue.pUseFront = v14;
      this->actorShotQue.pUseBack = v14;
      v14->pNext = 0i64;
      --this->actorShotQue.uiRestCount;
      goto LABEL_46;
    }
    return 0i64;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    if ( this->actorWeaponQue.uiRestCount )
    {
      v12 = this->actorWeaponQue.pFront;
      v13 = v12->pNext;
      pData = v12->pData;
      this->actorWeaponQue.pFront = v13;
      if ( !v13 )
        this->actorWeaponQue.pBack = 0i64;
      if ( this->actorWeaponQue.pUseFront )
        this->actorWeaponQue.pUseBack->pNext = v12;
      else
        this->actorWeaponQue.pUseFront = v12;
      this->actorWeaponQue.pUseBack = v12;
      v12->pNext = 0i64;
      --this->actorWeaponQue.uiRestCount;
      goto LABEL_46;
    }
    return 0i64;
  }
  if ( v8 != 1 || !this->actorOptionQue.uiRestCount )
    return 0i64;
  v9 = this->actorOptionQue.pFront;
  v10 = v9->pNext;
  pData = v9->pData;
  this->actorOptionQue.pFront = v10;
  if ( !v10 )
    this->actorOptionQue.pBack = 0i64;
  if ( this->actorOptionQue.pUseFront )
    this->actorOptionQue.pUseBack->pNext = v9;
  else
    this->actorOptionQue.pUseFront = v9;
  this->actorOptionQue.pUseBack = v9;
  v9->pNext = 0i64;
  --this->actorOptionQue.uiRestCount;
LABEL_46:
  if ( !pData )
    return 0i64;
  pData->CreateInit(pData);
  pData->pActSys = this;
  ppPriEnd = this->ppPriEnd;
  pEmpty = this->pEmpty;
  v22 = ppPriEnd[v4];
  ppPriEnd[v4] = pEmpty;
  v23 = this->pEmpty;
  v24 = v23->pNext;
  this->pEmpty = v23->pNext;
  if ( v24 )
    v24->pBefore = 0i64;
  if ( v22 )
  {
    v22->pNext = pEmpty;
    pEmpty->pBefore = v22;
  }
  else
  {
    this->ppPriStart[v4] = pEmpty;
    pEmpty->pBefore = 0i64;
  }
  pEmpty->pNext = 0i64;
  v25 = pData->__vftable;
  pData->iPriority = v4;
  pData->systemStat = SCREEN_OUT;
  pData->uiActorID = this->uiActorID;
  v25->ActionParamInit(pData);
  result = pData;
  pEmpty->pActor = pData;
  ++this->pAliveNum[v4];
  ++this->iAliveTotal;
  ++this->uiActorID;
  return result;
}

void __fastcall ActionSystem::Final(ActionSystem *this)
{
  MaterialShowControl *defaultMaterialData; // rdx
  ActionSystem::PhotoModeData *p_photoModeData; // r9
  MaterialShowControl::MaterialIndexList *ListData; // rax
  OGLModel **pModelList; // rax
  __int64 v6; // r8
  __int64 v7; // rcx
  std::vector<Actor *> *p_pReqDraw; // rax
  Actor **Myfirst; // rcx
  unsigned __int64 v10; // rdx
  Actor **v11; // rax
  unsigned __int64 v12; // rcx
  int *pAliveNum; // rcx
  ActionSystem::ActorList **ppPriEnd; // rcx
  ActionSystem::ActorList **ppPriStart; // rcx
  ActionSystem::ActorList *pRealiz; // rcx
  EffectDataListManager **pEffectMgr; // rcx
  __int64 v18; // r8
  __int64 v19; // rdx
  char v20; // [rsp+20h] [rbp-28h] BYREF

  defaultMaterialData = this->defaultMaterialData;
  this->pPlayer[0] = 0i64;
  p_photoModeData = &this->photoModeData;
  this->pPlayer[1] = 0i64;
  this->pDrawActor[0] = 0i64;
  this->pDrawActor[1] = 0i64;
  this->pDrawActor[2] = 0i64;
  this->pDrawActor[3] = 0i64;
  if ( this->defaultMaterialData != (MaterialShowControl *)&this->photoModeData )
  {
    defaultMaterialData = &this->defaultMaterialData[1];
    do
    {
      ListData = defaultMaterialData[-1].ListData;
      defaultMaterialData[-1].iDataCount = 0;
      defaultMaterialData[-1].iMianMaskCount = 0;
      for ( defaultMaterialData[-1].iMianMaskType = -1; ListData != &defaultMaterialData[-1].ListData[64]; ++ListData )
        *ListData = (MaterialShowControl::MaterialIndexList)-1i64;
      pModelList = defaultMaterialData[-1].pModelList;
      v6 = 24i64;
      v7 = 0i64;
      if ( defaultMaterialData[-1].pModelList > (OGLModel **)defaultMaterialData )
        v6 = 0i64;
      if ( defaultMaterialData[-1].pModelList <= (OGLModel **)defaultMaterialData )
      {
        do
        {
          ++v7;
          *pModelList++ = 0i64;
        }
        while ( v7 != v6 );
      }
      ++defaultMaterialData;
    }
    while ( &defaultMaterialData[-1] != (MaterialShowControl *)p_photoModeData );
  }
  p_pReqDraw = &this->pReqDraw;
  if ( &v20 != (char *)&this->pReqDraw )
  {
    Myfirst = p_pReqDraw->_Mypair._Myval2._Myfirst;
    p_pReqDraw->_Mypair._Myval2._Myfirst = 0i64;
    this->pReqDraw._Mypair._Myval2._Mylast = 0i64;
    defaultMaterialData = (MaterialShowControl *)this->pReqDraw._Mypair._Myval2._Myend;
    this->pReqDraw._Mypair._Myval2._Myend = 0i64;
    if ( Myfirst )
    {
      v10 = ((char *)defaultMaterialData - (char *)Myfirst) >> 3;
      if ( v10 > 0x1FFFFFFFFFFFFFFFi64 )
        invalid_parameter_noinfo_noreturn();
      if ( 8 * v10 >= 0x1000 )
      {
        if ( ((unsigned __int8)Myfirst & 0x1F) != 0 )
          invalid_parameter_noinfo_noreturn();
        v11 = (Actor **)*(Myfirst - 1);
        if ( v11 >= Myfirst )
          invalid_parameter_noinfo_noreturn();
        v12 = (char *)Myfirst - (char *)v11;
        if ( v12 < 8 )
          invalid_parameter_noinfo_noreturn();
        if ( v12 > 0x27 )
          invalid_parameter_noinfo_noreturn();
        Myfirst = v11;
      }
      operator delete(Myfirst);
    }
  }
  pAliveNum = this->pAliveNum;
  if ( pAliveNum )
  {
    operator delete(pAliveNum, (unsigned __int64)defaultMaterialData);
    this->pAliveNum = 0i64;
  }
  ppPriEnd = this->ppPriEnd;
  if ( ppPriEnd )
  {
    operator delete(ppPriEnd, (unsigned __int64)defaultMaterialData);
    this->ppPriEnd = 0i64;
  }
  ppPriStart = this->ppPriStart;
  if ( ppPriStart )
  {
    operator delete(ppPriStart, (unsigned __int64)defaultMaterialData);
    this->ppPriStart = 0i64;
  }
  pRealiz = this->pRealiz;
  if ( pRealiz )
  {
    operator delete(pRealiz, (unsigned __int64)defaultMaterialData);
    this->pRealiz = 0i64;
  }
  pEffectMgr = this->pEffectMgr;
  v18 = 5i64;
  v19 = 0i64;
  if ( this->pEffectMgr > (EffectDataListManager **)&this->iThrowChildPlayerID )
    v18 = 0i64;
  if ( this->pEffectMgr <= (EffectDataListManager **)&this->iThrowChildPlayerID )
  {
    do
    {
      ++v19;
      *pEffectMgr++ = 0i64;
    }
    while ( v19 != v18 );
  }
  this->iReqDrawCount = 0;
  *(_QWORD *)&this->iActorMax = 0i64;
  this->iAliveTotal = 0;
}

void __fastcall ActionSystem::FuncCallRequest(
        ActionSystem *this,
        Actor *pri,
        std::function<void __cdecl(Actor &)> *func)
{
  ActionSystem::ActorList *i; // rbx
  std::_Func_base<void,Actor &> *v5; // rcx
  std::function<void __cdecl(Actor &)> *v6; // rcx

  if ( func->_Mystorage._Ptrs[7] )
  {
    for ( i = this->ppPriStart[(int)pri]; i; i = i->pNext )
    {
      pri = i->pActor;
      if ( pri->systemStat == MAIN )
      {
        v5 = func->_Mystorage._Ptrs[7];
        if ( !v5 )
          std::_Xbad_function_call();
        ((void (__fastcall *)(std::_Func_base<void,Actor &> *))v5->_Do_call)(v5);
      }
    }
    v6 = (std::function<void __cdecl(Actor &)> *)func->_Mystorage._Ptrs[7];
    if ( v6 )
    {
      LOBYTE(pri) = v6 != func;
      ((void (__fastcall *)(std::function<void __cdecl(Actor &)> *, Actor *))v6->_Mystorage._Ptrs[0][4].__vftable)(
        v6,
        pri);
      func->_Mystorage._Ptrs[7] = 0i64;
    }
  }
}

MaterialShowControl *__fastcall ActionSystem::GetDefaultMaterialData(ActionSystem *this, Actor *pActor)
{
  unsigned int v3; // eax

  v3 = pActor->GetAssetID(pActor);
  if ( v3 > 3 )
    return this->defaultMaterialData;
  else
    return &this->defaultMaterialData[v3];
}

ActorChara *__fastcall ActionSystem::GetPlayerActor(ActionSystem *this, int playerID)
{
  if ( (unsigned int)playerID > 1 )
    return 0i64;
  else
    return this->pPlayer[playerID];
}

float __fastcall ActionSystem::GetSoundPanPosition(ActionSystem *this, float posX)
{
  float x; // xmm0_4
  float *v3; // rax
  float result; // xmm0_4
  float v5; // [rsp+8h] [rbp+8h] BYREF
  int v6; // [rsp+18h] [rbp+18h] BYREF

  if ( this->bUseSubCamera || (unsigned int)(this->cameraCtrl.offset.type - 3) <= 1 )
    return 0.0;
  if ( (unsigned int)(this->cameraCtrl.offset.type - 3) <= 2 )
    x = this->cameraCtrl.offset.vStart.x;
  else
    x = this->cameraCtrl.vPos.x;
  v6 = 1061158912;
  v3 = &v5;
  v5 = (float)((float)(posX - x) / 26.25) * 0.75;
  if ( v5 >= 0.75 )
    v3 = (float *)&v6;
  result = *v3;
  if ( *v3 < -0.75 )
    return FLOAT_N0_75;
  return result;
}

char __fastcall ActionSystem::Init(ActionSystem *this, int maxPri)
{
  ActionSystem::ActorList *v3; // rax
  unsigned __int64 iMaxPriority; // rcx
  ActionSystem::ActorList **v5; // rax
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rax
  int *v8; // rax
  int v9; // er8
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r9
  int v13; // er10
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rcx

  this->iActorMax = 232;
  this->uiActorID = 0;
  this->iReqDrawCount = 0;
  this->iMaxPriority = maxPri;
  this->bsInvisibleFlag._Array[0] = 0;
  FreeCameraControl::Init(&this->freeCamera);
  *(_DWORD *)&this->bInvalidZOffset = 0;
  this->xPlaySpeed.value = 0x10000;
  this->actorCharaQue.queueBody[0].pNext = &this->actorCharaQue.queueBody[1];
  this->actorCharaQue.queueBody[0].pData = this->actorCharaQue.body;
  this->actorCharaQue.queueBody[1].pData = &this->actorCharaQue.body[1];
  this->actorCharaQue.queueBody[1].pNext = &this->actorCharaQue.queueBody[2];
  this->actorCharaQue.queueBody[2].pData = &this->actorCharaQue.body[2];
  this->actorCharaQue.queueBody[2].pNext = &this->actorCharaQue.queueBody[3];
  this->actorCharaQue.queueBody[3].pData = &this->actorCharaQue.body[3];
  this->actorCharaQue.queueBody[3].pNext = 0i64;
  this->actorCharaQue.pBack = &this->actorCharaQue.queueBody[3];
  this->actorCharaQue.pFront = this->actorCharaQue.queueBody;
  this->actorCharaQue.pUseFront = 0i64;
  this->actorCharaQue.pUseBack = 0i64;
  this->actorCharaQue.uiRestCount = 4;
  SimpleQueue<ActorShot,32>::Init(&this->actorShotQue);
  SimpleQueue<ActorEffect,96>::Init(&this->actorEffectQue);
  SimpleQueue<ActorWeapon,96>::Init(&this->actorWeaponQue);
  this->actorOptionQue.queueBody[3].pNext = 0i64;
  this->actorOptionQue.queueBody[0].pNext = &this->actorOptionQue.queueBody[1];
  this->actorOptionQue.queueBody[0].pData = this->actorOptionQue.body;
  this->actorOptionQue.queueBody[1].pData = &this->actorOptionQue.body[1];
  this->actorOptionQue.queueBody[1].pNext = &this->actorOptionQue.queueBody[2];
  this->actorOptionQue.queueBody[2].pData = &this->actorOptionQue.body[2];
  this->actorOptionQue.queueBody[2].pNext = &this->actorOptionQue.queueBody[3];
  this->actorOptionQue.queueBody[3].pData = &this->actorOptionQue.body[3];
  this->actorOptionQue.pFront = this->actorOptionQue.queueBody;
  this->actorOptionQue.pBack = &this->actorOptionQue.queueBody[3];
  this->actorOptionQue.pUseFront = 0i64;
  this->actorOptionQue.pUseBack = 0i64;
  this->actorOptionQue.uiRestCount = 4;
  v3 = (ActionSystem::ActorList *)operator new[](saturated_mul(this->iActorMax, 0x18ui64));
  iMaxPriority = this->iMaxPriority;
  this->pRealiz = v3;
  v5 = (ActionSystem::ActorList **)operator new[](saturated_mul(iMaxPriority, 8ui64));
  v6 = this->iMaxPriority;
  this->ppPriStart = v5;
  v7 = 8 * v6;
  if ( !is_mul_ok(v6, 8ui64) )
    v7 = -1i64;
  this->ppPriEnd = (ActionSystem::ActorList **)operator new[](v7);
  v8 = (int *)operator new[](saturated_mul(this->iMaxPriority, 4ui64));
  this->pAliveNum = v8;
  if ( this->pRealiz && this->ppPriStart && this->ppPriEnd && v8 )
  {
    std::vector<Actor *>::resize(
      (std::vector<extension::exsound_detail::PreloadedAudioSet *> *)&this->pReqDraw,
      this->iActorMax);
    v9 = 0;
    if ( this->iMaxPriority > 0 )
    {
      v10 = 0i64;
      v11 = 0i64;
      do
      {
        ++v11;
        ++v9;
        ++v10;
        this->ppPriStart[v11 - 1] = 0i64;
        this->ppPriEnd[v11 - 1] = 0i64;
        this->pAliveNum[v10 - 1] = 0;
      }
      while ( v9 < this->iMaxPriority );
    }
    this->pEmpty = this->pRealiz;
    this->iAliveTotal = 0;
    if ( this->iActorMax > 0 )
    {
      v12 = 0i64;
      v13 = 1;
      do
      {
        if ( v12 )
        {
          if ( v13 - 1 == this->iActorMax - 1 )
          {
            v14 = v12;
            this->pRealiz[v14].pBefore = &this->pRealiz[v13 - 2];
            this->pRealiz[v14].pNext = 0i64;
          }
          else
          {
            v15 = v12;
            this->pRealiz[v15].pBefore = &this->pRealiz[v13 - 2];
            this->pRealiz[v15].pNext = &this->pRealiz[v13];
          }
        }
        else
        {
          this->pRealiz->pBefore = 0i64;
          this->pRealiz->pNext = &this->pRealiz[v13];
        }
        v16 = v12;
        ++v13;
        ++v12;
        this->pRealiz[v16].pActor = 0i64;
      }
      while ( v13 - 1 < this->iActorMax );
    }
    ActionSystem::SystemInit(this);
    return 1;
  }
  else
  {
    ActionSystem::Final(this);
    return 0;
  }
}

void __fastcall ActionSystem::LateCaller(ActionSystem *this, int pri)
{
  ActionSystem::ActorList *i; // rbx
  Actor *pActor; // rcx
  Actor *v5; // rdx

  for ( i = this->ppPriStart[pri]; i; i = i->pNext )
  {
    pActor = i->pActor;
    if ( pActor->systemStat == MAIN )
    {
      pActor->LateUpdate(pActor);
      v5 = i->pActor;
      if ( v5->systemStat == MAIN && v5->bDrawReq && this->iReqDrawCount < this->iActorMax )
        this->pReqDraw._Mypair._Myval2._Myfirst[this->iReqDrawCount++] = v5;
    }
  }
}

void __fastcall ActionSystem::MainCaller(ActionSystem *this, int pri)
{
  ActionSystem::ActorList *i; // rbx
  Actor *pActor; // rax
  Actor *v5; // rcx
  Actor *v6; // rdx

  for ( i = this->ppPriStart[pri]; i; i = i->pNext )
  {
    pActor = i->pActor;
    if ( pActor->systemStat == SCREEN_OUT )
    {
      pActor->systemStat = MAIN;
      i->pActor->PrevDataSet(i->pActor);
      i->pActor->PreUpdate(i->pActor);
    }
    v5 = i->pActor;
    if ( v5->systemStat == MAIN )
    {
      v5->BecomUpdate(v5);
      v6 = i->pActor;
      if ( v6->systemStat == MAIN )
      {
        ActionSystem::Run(this, v6);
        i->pActor->MainUpdate(i->pActor);
      }
    }
  }
}

void __fastcall ActionSystem::MainCaller(ActionSystem *this, int start, int end)
{
  __int64 v4; // rdi
  __int64 i; // rbp
  ActionSystem::ActorList *j; // rbx
  Actor *pActor; // rax
  Actor *v8; // rcx
  Actor *v9; // rdx

  if ( end < 9 && end - start >= 0 )
  {
    v4 = start;
    for ( i = end; v4 <= i; ++v4 )
    {
      for ( j = this->ppPriStart[v4]; j; j = j->pNext )
      {
        pActor = j->pActor;
        if ( pActor->systemStat == SCREEN_OUT )
        {
          pActor->systemStat = MAIN;
          j->pActor->PrevDataSet(j->pActor);
          j->pActor->PreUpdate(j->pActor);
        }
        v8 = j->pActor;
        if ( v8->systemStat == MAIN )
        {
          v8->BecomUpdate(v8);
          v9 = j->pActor;
          if ( v9->systemStat == MAIN )
          {
            ActionSystem::Run(this, v9);
            j->pActor->MainUpdate(j->pActor);
          }
        }
      }
    }
  }
}

void __fastcall ActionSystem::PreCaller(ActionSystem *this, int pri)
{
  ActionSystem::ActorList *v3; // rbx
  Actor *pActor; // rax
  ActionSystem::ActorList *pNext; // rdi
  Actor *v6; // rcx
  Actor::SYSTEM_STAT systemStat; // eax

  v3 = this->ppPriStart[pri];
  if ( v3 )
  {
    do
    {
      pActor = v3->pActor;
      pNext = v3->pNext;
      if ( pActor->systemStat == SCREEN_OUT )
        pActor->systemStat = MAIN;
      v6 = v3->pActor;
      systemStat = v6->systemStat;
      if ( systemStat == MAIN )
      {
        v6->PrevDataSet(v6);
        v3->pActor->PreUpdate(v3->pActor);
      }
      else if ( systemStat )
      {
        if ( systemStat == ERASE )
          ActionSystem::Delete(this, v3);
      }
      else
      {
        v6->systemStat = ERASE;
      }
      v3 = pNext;
    }
    while ( pNext );
  }
}

void __fastcall ActionSystem::PreCaller(ActionSystem *this, int start, int end)
{
  __int64 v4; // r14
  __int64 i; // rsi
  ActionSystem::ActorList *v6; // rbx
  Actor *pActor; // rax
  ActionSystem::ActorList *pNext; // rdi
  Actor *v9; // rcx
  Actor::SYSTEM_STAT systemStat; // eax

  if ( end < 9 && end - start >= 0 )
  {
    v4 = end;
    for ( i = start; i <= v4; ++i )
    {
      v6 = this->ppPriStart[i];
      if ( v6 )
      {
        do
        {
          pActor = v6->pActor;
          pNext = v6->pNext;
          if ( pActor->systemStat == SCREEN_OUT )
            pActor->systemStat = MAIN;
          v9 = v6->pActor;
          systemStat = v9->systemStat;
          if ( systemStat == MAIN )
          {
            v9->PrevDataSet(v9);
            v6->pActor->PreUpdate(v6->pActor);
          }
          else if ( systemStat )
          {
            if ( systemStat == ERASE )
              ActionSystem::Delete(this, v6);
          }
          else
          {
            v9->systemStat = ERASE;
          }
          v6 = pNext;
        }
        while ( pNext );
      }
    }
  }
}

void __fastcall ActionSystem::RequestSound(
        ActionSystem *this,
        Actor *actor,
        const CharaActionData::Sound::Type::Play *sound)
{
  ActorChara *v6; // rsi
  unsigned int v7; // eax
  unsigned __int8 v8; // dl
  Actor::ACTOR_TYPE v9; // eax
  __int32 v10; // eax
  __int32 v11; // eax
  unsigned int v12; // eax
  __int16 iOptionFlag; // ax
  ActorChara *v14; // rax
  ActorChara *v15; // r14
  __int16 v16; // cx
  unsigned int v17; // eax
  BattleSystem::BattleController *v18; // rax
  __int64 v19; // rax
  int iTagID; // edx
  __int64 v21; // rsi
  _QWORD *v22; // rsi
  bool v23; // zf
  Actor_vtbl *v24; // rax
  __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // rax
  __int64 v28; // rcx
  int v29; // eax
  int iGroupID; // ebx
  __int16 *v31; // rbx
  __int16 *i; // rdi
  int v33; // [rsp+20h] [rbp-60h] BYREF
  __int64 v34[2]; // [rsp+28h] [rbp-58h] BYREF
  BattleSystem::BattleController *v35; // [rsp+38h] [rbp-48h]
  int commonID[2]; // [rsp+40h] [rbp-40h] BYREF
  int *v37; // [rsp+48h] [rbp-38h]
  ActionSystem *v38; // [rsp+50h] [rbp-30h]
  __int64 *v39; // [rsp+58h] [rbp-28h]
  const CharaActionData::Sound::Type::Play *v40; // [rsp+60h] [rbp-20h]
  void **p_block; // [rsp+68h] [rbp-18h]
  int *v42; // [rsp+70h] [rbp-10h]
  void *block; // [rsp+B8h] [rbp+38h] BYREF
  int v44; // [rsp+C8h] [rbp+48h] BYREF

  v34[1] = -2i64;
  v34[0] = *(_QWORD *)&AppMain::pApp;
  v6 = 0i64;
  v44 = 0;
  v33 = actor->GetPlayerID(actor);
  LODWORD(block) = 0;
  v7 = actor->GetPlayerID(actor);
  v8 = 0;
  if ( v7 <= 1 )
    v8 = v7 + 1;
  LODWORD(block) = ((unsigned __int8)block ^ v8) & 3 ^ (unsigned int)block;
  v9 = actor->GetActorType(actor);
  if ( v9 )
  {
    v10 = v9 - 1;
    if ( v10 )
    {
      v11 = v10 - 1;
      if ( v11 )
      {
        if ( v11 == 2 )
          LODWORD(block) = (unsigned int)block | 0x100;
      }
      else
      {
        LODWORD(block) = (unsigned int)block | 0x40;
      }
    }
    else
    {
      LODWORD(block) = (unsigned int)block | 0x80;
    }
  }
  else
  {
    LODWORD(block) = (unsigned int)block | 0x20;
  }
  v12 = actor->GetFounderPlayerID(actor);
  if ( v12 > 1 || (v6 = this->pPlayer[v12]) == 0i64 || !v6->IsResultDemoActor(v6) )
  {
    iOptionFlag = sound->iOptionFlag;
    if ( (iOptionFlag & 0x80u) == 0 || actor->iActionLoopCount <= 0 )
    {
      if ( (iOptionFlag & 0x78) == 0
        || !v6
        || ((v14 = v6->GetTargetActor(v6), (v15 = v14) == 0i64)
         || ((sound->iOptionFlag & 8) == 0
          || v14->damageInfo.iCombo >= (int)sound->fOptionParam && !v14->IsComboSoundException(v14))
         && ((sound->iOptionFlag & 0x10) == 0
          || v15->damageInfo.iCombo < (int)sound->fOptionParam
          || v15->IsComboSoundException(v15)))
        && ((sound->iOptionFlag & 0x20) == 0 || v6->IsAdvancedCancelActionPlay(v6))
        && ((sound->iOptionFlag & 0x40) == 0 || !v6->IsAdvancedCancelActionPlay(v6)) )
      {
        v16 = sound->iOptionFlag;
        v17 = (unsigned int)block;
        if ( (v16 & 1) != 0 )
        {
          v17 = (unsigned int)block | 4;
          LODWORD(block) = (unsigned int)block | 4;
        }
        if ( (v16 & 2) != 0 )
        {
          v17 |= 8u;
          LODWORD(block) = v17;
        }
        if ( (v16 & 4) != 0 )
        {
          v17 |= 0x10u;
          LODWORD(block) = v17;
        }
        if ( (v16 & 0x100) != 0 )
        {
          v18 = BattleSystem::BattleController::instance;
          if ( !BattleSystem::BattleController::instance )
          {
            v35 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
            BattleSystem::BattleController::BattleController(v35);
            BattleSystem::BattleController::instance = v18;
          }
          if ( v18->battleInfo.roundFinishType == COUNTER_HIT )
            return;
          BattleSystem::BattleController::GetActionSystem();
          if ( *(_DWORD *)(v19 + 246116) == 2 )
            return;
          LOWORD(v17) = (unsigned __int16)block | 0x200;
        }
        iTagID = sound->iTagID;
        if ( (unsigned int)(iTagID - 1) > 0xF )
          LODWORD(block) = (unsigned __int16)v17;
        else
          LODWORD(block) = (unsigned __int16)v17 | (0x10000 << (iTagID - 1));
        *(_QWORD *)commonID = actor;
        v37 = &v44;
        v38 = this;
        v39 = v34;
        v40 = sound;
        p_block = &block;
        v42 = &v33;
        if ( sound->iGroupID <= 0 )
        {
          lambda_6a1020abf1e2e0c82b0c36eebbe62cd4_::operator()((Actor **)commonID, sound->iCommonID, sound->iUniqueID);
        }
        else
        {
          if ( actor->GetFounderPlayerID(actor) >= 0 )
          {
            v23 = !actor->IsOptionAsset(actor);
            v24 = actor->__vftable;
            if ( v23 )
            {
              v28 = v24->GetFounderPlayerID(actor);
              if ( !*(_QWORD *)(v34[0] + 8 * v28 + 2182544) )
                return;
              v29 = actor->GetFounderPlayerID(actor);
              v27 = *(_QWORD *)(v34[0] + 8i64 * v29 + 2182544);
            }
            else
            {
              v25 = v24->GetFounderPlayerID(actor);
              if ( !*(_QWORD *)(v34[0] + 8 * v25 + 2182560) )
                return;
              v26 = actor->GetFounderPlayerID(actor);
              v27 = *(_QWORD *)(v34[0] + 8i64 * v26 + 2182560);
            }
            v22 = *(_QWORD **)(v27 + 80);
          }
          else
          {
            v21 = *(_QWORD *)(v34[0] + 2182576);
            if ( !v21 )
              return;
            v22 = *(_QWORD **)(v21 + 80);
          }
          if ( v22 )
          {
            iGroupID = sound->iGroupID;
            if ( (*(int (__fastcall **)(_QWORD *))(*v22 + 72i64))(v22) > iGroupID )
            {
              v31 = (__int16 *)(v22[6] + 16i64 * (__int16)iGroupID);
              for ( i = v31 + 8; v31 != i; v31 += 2 )
                lambda_6a1020abf1e2e0c82b0c36eebbe62cd4_::operator()((Actor **)commonID, v31[1], *v31);
            }
          }
        }
      }
    }
  }
}

void __fastcall ActionSystem::RequestSoundStop(
        ActionSystem *this,
        Actor *actor,
        const CharaActionData::Sound::Type::Stop *sound)
{
  unsigned int v4; // eax
  char v5; // dl
  int iTagID; // ecx
  int v7; // ebx
  float fFadeSec; // xmm6_4
  extension::SoundManager *v9; // rax
  extension::SoundManager *v10; // [rsp+50h] [rbp+8h]

  v4 = actor->GetPlayerID(actor);
  v5 = 0;
  if ( v4 <= 1 )
    v5 = v4 + 1;
  iTagID = sound->iTagID;
  if ( (unsigned int)(iTagID - 1) > 0xF )
    v7 = v5 & 3;
  else
    v7 = v5 & 3 | (0x10000 << (iTagID - 1));
  fFadeSec = sound->fFadeSec;
  v9 = extension::SoundManager::the_instance;
  if ( !extension::SoundManager::the_instance )
  {
    v10 = (extension::SoundManager *)operator new(0x310ui64);
    extension::SoundManager::SoundManager(v10);
    extension::SoundManager::the_instance = v9;
  }
  extension::SoundManager::stopUserTagedSE(v9, v7, fFadeSec);
}

void __fastcall ActionSystem::RequestSoundStop(ActionSystem *this, unsigned int tagMask, float fadeSec)
{
  extension::SoundManager *v4; // rax
  extension::SoundManager *v5; // [rsp+50h] [rbp+8h]

  v4 = extension::SoundManager::the_instance;
  if ( !extension::SoundManager::the_instance )
  {
    v5 = (extension::SoundManager *)operator new(0x310ui64);
    extension::SoundManager::SoundManager(v5);
    extension::SoundManager::the_instance = v4;
  }
  extension::SoundManager::stopUserTagedSE(v4, tagMask, fadeSec);
}

void __fastcall ActionSystem::RequestSoundStopActionChange(ActionSystem *this, Actor *actor)
{
  unsigned int v3; // eax
  char v4; // di
  int v5; // edi
  Actor::ACTOR_TYPE v6; // eax
  __int32 v7; // eax
  __int32 v8; // eax
  int v9; // edi
  extension::SoundManager *v10; // rax
  extension::SoundManager *v11; // [rsp+40h] [rbp+8h]

  v3 = actor->GetPlayerID(actor);
  v4 = 0;
  if ( v3 <= 1 )
    v4 = v3 + 1;
  v5 = v4 & 3;
  v6 = actor->GetActorType(actor);
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( v8 )
      {
        if ( v8 == 2 )
          v5 |= 0x100u;
      }
      else
      {
        v5 |= 0x40u;
      }
    }
    else
    {
      v5 |= 0x80u;
    }
  }
  else
  {
    v5 |= 0x20u;
  }
  v9 = v5 | 4;
  v10 = extension::SoundManager::the_instance;
  if ( !extension::SoundManager::the_instance )
  {
    v11 = (extension::SoundManager *)operator new(0x310ui64);
    extension::SoundManager::SoundManager(v11);
    extension::SoundManager::the_instance = v10;
  }
  extension::SoundManager::stopUserTagedSE(v10, v9, 0.1);
}

void __fastcall ActionSystem::RequestSoundStopDamaged(ActionSystem *this, Actor *actor)
{
  unsigned int v2; // eax
  char v3; // bl
  int v4; // ebx
  extension::SoundManager *v5; // rax
  extension::SoundManager *v6; // [rsp+40h] [rbp+8h]

  v2 = actor->GetPlayerID(actor);
  v3 = 0;
  if ( v2 <= 1 )
    v3 = v2 + 1;
  v4 = v3 & 3 | 8;
  v5 = extension::SoundManager::the_instance;
  if ( !extension::SoundManager::the_instance )
  {
    v6 = (extension::SoundManager *)operator new(0x310ui64);
    extension::SoundManager::SoundManager(v6);
    extension::SoundManager::the_instance = v5;
  }
  extension::SoundManager::stopUserTagedSE(v5, v4, 0.0);
}

void __fastcall ActionSystem::RequestSoundStopSuperCancel(ActionSystem *this, Actor *actor)
{
  unsigned int v2; // eax
  char v3; // bl
  int v4; // ebx
  extension::SoundManager *v5; // rax
  extension::SoundManager *v6; // [rsp+40h] [rbp+8h]

  v2 = actor->GetPlayerID(actor);
  v3 = 0;
  if ( v2 <= 1 )
    v3 = v2 + 1;
  v4 = v3 & 3 | 0x10;
  v5 = extension::SoundManager::the_instance;
  if ( !extension::SoundManager::the_instance )
  {
    v6 = (extension::SoundManager *)operator new(0x310ui64);
    extension::SoundManager::SoundManager(v6);
    extension::SoundManager::the_instance = v5;
  }
  extension::SoundManager::stopUserTagedSE(v5, v4, 0.0);
}

void __fastcall ActionSystem::Run(ActionSystem *this, Actor *actor)
{
  int value; // edx
  float v4; // xmm6_4
  int v5; // esi
  float v6; // xmm10_4
  int v7; // eax
  float v8; // xmm9_4
  const CharaActionData::ActionLineFrame *v9; // r8
  int iActFlg2; // er11
  float v11; // xmm15_4
  bool v12; // r11
  bool v13; // sf
  const CharaActionData *pActReserve; // rax
  const CharaHitRect *pHitRectReserve; // rax
  OGLModel *pMotionChangeModelReserve; // rdx
  OGLModel *pModel; // rcx
  int iActReserveNo; // eax
  int v19; // eax
  int iActReserveFrame; // eax
  float v21; // xmm0_4
  int iActorStatReserve; // ecx
  Actor_vtbl *v23; // rax
  int iCAngleReserve; // eax
  __int64 iActNo; // rax
  const CharaActionData *pAct; // rcx
  int iActionCount; // edx
  CharaActionData::ActionData *pActData; // r15
  __int64 v29; // rbx
  CharaActionData::ActionData *pSoundAct; // rax
  char *v31; // r14
  __int64 v32; // rbx
  __int128 v33; // xmm0
  Actor_vtbl *v34; // rax
  int v35; // ecx
  int v36; // eax
  int v37; // eax
  char v38; // cl
  int v39; // eax
  const CharaActionData::ActionLineFrame *v40; // r13
  float *p_iFrame; // r12
  const CharaActionData::ActionLine *v42; // rbx
  unsigned int iActFrame; // er15
  bool v44; // al
  __int64 v45; // rcx
  CharaActionData::ActionData *v46; // rdx
  const CharaActionData::ActionLineFrame *v47; // r8
  float z; // eax
  int v49; // eax
  ActionSystem *v50; // rcx
  float fMotionFrame; // xmm1_4
  float v52; // eax
  float fParam; // xmm0_4
  float x; // eax
  const CharaActionData::ActionLine *v55; // rbx
  int v56; // esi
  const CharaActionData::ActionLineFrame *v57; // rax
  ActionSystem *v58; // rcx
  int v59; // edx
  float v60; // xmm8_4
  bool v61; // si
  OGLModel *v62; // rbx
  const CharaActionData::ActionLineFrame *v63; // r14
  int iCAngle; // eax
  float v65; // xmm3_4
  float v66; // xmm3_4
  float v67; // xmm2_4
  float v68; // xmm0_4
  float v69; // xmm1_4
  float v70; // xmm3_4
  float v71; // xmm2_4
  float v72; // xmm0_4
  float v73; // eax
  float v74; // xmm6_4
  float v75; // xmm7_4
  float v76; // xmm6_4
  bool v77; // al
  float v78; // xmm2_4
  float v79; // xmm2_4
  float v80; // xmm0_4
  float v81; // xmm6_4
  float v82; // xmm1_4
  float v83; // xmm7_4
  float v84; // xmm0_4
  float v85; // xmm2_4
  const CharaActionData::ActionLineFrame *v86; // rbx
  float v87; // xmm0_4
  float v88; // xmm0_4
  int v89; // eax
  ActionSystem *v90; // r11
  float v91; // xmm10_4
  float v92; // xmm11_4
  float v93; // xmm9_4
  float v94; // xmm6_4
  float v95; // xmm7_4
  const CharaActionData::ActionLineFrame *v96; // r15
  __int128 v97; // xmm0
  float *v98; // r13
  int v99; // er14
  const CharaActionData::ActionLine *v100; // rbx
  const CharaActionData::ActionLineFrame *v101; // rcx
  float *v102; // r12
  int v103; // eax
  __int64 v104; // rax
  int v105; // esi
  CharaActionData::ActionData *v106; // rdx
  int v107; // eax
  float v108; // xmm0_4
  float v109; // xmm3_4
  float fActFrameFraction; // xmm1_4
  float v111; // xmm2_4
  float v112; // xmm0_4
  float v113; // xmm2_4
  float v114; // xmm1_4
  float fFaceAnimeUpBlendBuf; // xmm4_4
  float v116; // xmm3_4
  float v117; // xmm2_4
  float v118; // xmm1_4
  float v119; // xmm0_4
  float v120; // xmm2_4
  float v121; // xmm1_4
  float fFaceAnimeLowBlendBuf; // xmm4_4
  float v123; // xmm3_4
  float v124; // xmm2_4
  float v125; // xmm1_4
  char v126; // si
  float fActFrameFractionPrev; // xmm0_4
  float v128; // xmm8_4
  int v129; // ebx
  float v130; // ecx
  float v131; // xmm0_4
  float v132; // xmm3_4
  float v133; // xmm2_4
  float v134; // xmm1_4
  float v135; // xmm0_4
  float v136; // xmm2_4
  float v137; // xmm3_4
  float v138; // xmm0_4
  float v139; // xmm1_4
  float v140; // eax
  float v141; // xmm0_4
  float v142; // xmm6_4
  float v143; // xmm7_4
  bool v144; // al
  float v145; // xmm2_4
  float v146; // xmm2_4
  float v147; // xmm0_4
  float v148; // xmm6_4
  float v149; // xmm1_4
  float v150; // xmm7_4
  float v151; // xmm0_4
  float v152; // xmm2_4
  float v153; // xmm0_4
  float v154; // xmm1_4
  Actor_vtbl *v155; // rax
  bool v156; // al
  float v157; // xmm0_4
  float fActionPlayRateReserve; // xmm0_4
  CharaActionData::ActionData *v159; // [rsp+20h] [rbp-E0h]
  __int64 v160; // [rsp+28h] [rbp-D8h]
  bool v161; // [rsp+30h] [rbp-D0h]
  char v162; // [rsp+31h] [rbp-CFh]
  bool v163; // [rsp+38h] [rbp-C8h]
  const CharaActionData::ActionLineFrame *v164; // [rsp+38h] [rbp-C8h]
  float v165; // [rsp+40h] [rbp-C0h]
  const CharaActionData::ActionLineFrame *v167; // [rsp+50h] [rbp-B0h]
  const CharaActionData::ActionLineFrame *v168; // [rsp+50h] [rbp-B0h]
  const CharaActionData::ActionLineFrame *v169; // [rsp+58h] [rbp-A8h]
  const CharaActionData::ActionLineFrame *v170; // [rsp+58h] [rbp-A8h]
  __int64 v171; // [rsp+60h] [rbp-A0h]
  float v172; // [rsp+70h] [rbp-90h]
  const CharaActionData::ActionLineFrame *v173; // [rsp+78h] [rbp-88h]
  const CharaActionData::ActionLineFrame *v174; // [rsp+80h] [rbp-80h]
  const CharaActionData::ActionLineFrame *v175; // [rsp+88h] [rbp-78h]
  float *v176; // [rsp+90h] [rbp-70h]
  const CharaActionData::ActionLineFrame *v177; // [rsp+98h] [rbp-68h]
  const CharaActionData::ActionLineFrame *v178; // [rsp+A0h] [rbp-60h]
  const CharaActionData::ActionLineFrame *v179; // [rsp+A8h] [rbp-58h]
  __int128 v180; // [rsp+B0h] [rbp-50h]
  __int128 v181; // [rsp+C8h] [rbp-38h] BYREF
  float fTransparent; // [rsp+D8h] [rbp-28h]

  value = this->xPlaySpeed.value;
  actor->bActionNewFrame = 0;
  v4 = (float)((float)(unsigned __int16)value * 0.000015258789) + (float)(value >> 16);
  if ( actor->IsDataExist(actor) )
  {
    if ( actor->bIgnoreSystemPlayRate )
    {
      v4 = *(float *)&FLOAT_1_0;
    }
    else if ( v4 <= 0.0 )
    {
      return;
    }
    if ( actor->IsBlackStop(actor) )
    {
      actor->bActionFreeze = 1;
      return;
    }
    v5 = 0;
    v6 = fminf(1.0, v4);
    v172 = v6;
    if ( actor->xHitStopFrame.value )
    {
      v7 = (int)(float)(v6 * 65536.0);
      actor->xHitStopFrame.value -= v7;
      if ( actor->xHitStopFrame.value < 0 )
        actor->xHitStopFrame.value = 0;
      if ( actor->xHitStopDelay.value )
      {
        actor->xHitStopDelay.value -= v7;
        if ( actor->xHitStopDelay.value < 0 )
          actor->xHitStopDelay.value = 0;
        actor->bHitStopFreeze = 1;
      }
      else
      {
        actor->bActionFreeze = 1;
        actor->bHitStopFreeze = 1;
      }
    }
    else
    {
      actor->xHitStopTotal.value = 0;
      actor->bHitStopFreeze = 0;
    }
    if ( !actor->bActionFreeze )
    {
      v8 = v6 * actor->fActionPlayRate;
      v165 = v8;
      if ( v8 > 0.0 )
      {
        actor->SetPositionData(actor, &actor->positionReserve);
        *(_QWORD *)&actor->positionReserve.iSettingX = 0i64;
        actor->positionReserve.iSettingZ = 0;
        while ( 1 )
        {
          iActFlg2 = actor->iActFlg2;
          v162 = 0;
          v11 = fminf(1.0, v8);
          actor->iActNoPrev = actor->iActNo;
          actor->iActFramePrev = actor->iActFrame;
          v12 = (iActFlg2 & 0x400) != 0;
          v13 = actor->iActReserveNo < 0;
          actor->fActFrameFractionPrev = actor->fActFrameFraction;
          actor->iCAnglePrev = actor->iCAngle;
          v163 = v12;
          if ( v13 )
            goto LABEL_22;
          pActReserve = actor->pActReserve;
          if ( !pActReserve )
            break;
LABEL_23:
          actor->pAct = pActReserve;
          pHitRectReserve = actor->pHitRectReserve;
          actor->pActReserve = 0i64;
          actor->iActNoPrev = -1;
          if ( pHitRectReserve )
          {
            actor->pHitRect = pHitRectReserve;
            actor->pHitRectReserve = 0i64;
          }
          pMotionChangeModelReserve = actor->pMotionChangeModelReserve;
          if ( actor->pMotionChangeModel != pMotionChangeModelReserve )
          {
            pModel = actor->pModel;
            if ( pModel && pMotionChangeModelReserve )
              OGLModel::setExternalMotion(pModel, pMotionChangeModelReserve, (int)v9);
            actor->pMotionChangeModel = actor->pMotionChangeModelReserve;
            actor->pMotionChangeModelReserve = 0i64;
          }
LABEL_30:
          iActReserveNo = actor->iActReserveNo;
          if ( iActReserveNo < 0 )
          {
            iActReserveFrame = actor->iActReserveFrame;
            if ( iActReserveFrame >= 0 )
            {
              actor->iActFrame = iActReserveFrame;
              v11 = v6;
              actor->fActFrameFraction = actor->fActReserveFrameFraction;
              actor->fActReserveFrameFraction = 0.0;
              v165 = v6;
              *(_QWORD *)&actor->iActReserveNo = -1i64;
              goto LABEL_42;
            }
            if ( v11 < 1.0 )
            {
              v21 = v11 + actor->fActFrameFraction;
              actor->fActFrameFraction = v21;
              if ( v21 < 1.0 )
                goto LABEL_42;
              actor->fActFrameFraction = v21 - 1.0;
            }
            ++actor->iActFrame;
          }
          else
          {
            actor->iActNo = iActReserveNo;
            v11 = v6;
            v19 = actor->iActReserveFrame;
            v165 = v6;
            if ( v19 < 0 )
              v19 = 0;
            *(_QWORD *)&actor->iActReserveNo = -1i64;
            actor->iActFrame = v19;
            actor->fActFrameFraction = actor->fActReserveFrameFraction;
            actor->fActReserveFrameFraction = 0.0;
            actor->iActionLoopCount = 0;
            actor->fActionPlayRate = 1.0;
            if ( v12 )
              actor->CAngleChangeReq(actor, actor->iCAngle == 0);
            actor->ActionChanged(actor);
          }
LABEL_42:
          iActorStatReserve = actor->iActorStatReserve;
          if ( iActorStatReserve >= 0 )
          {
            actor->iActorStatPrev = actor->iActorStat;
            v23 = actor->__vftable;
            actor->iActorStat = iActorStatReserve;
            actor->iActorStatReserve = -1;
            v23->StateChanged(actor);
          }
          iCAngleReserve = actor->iCAngleReserve;
          if ( iCAngleReserve >= 0 )
          {
            actor->iCAngle = iCAngleReserve;
            actor->iCAngleReserve = -1;
          }
          if ( !actor->IsDataExist(actor)
            || (iActNo = actor->iActNo, (int)iActNo < 0)
            || (pAct = actor->pAct, iActionCount = pAct->dataHeader.iActionCount, (int)iActNo >= iActionCount) )
          {
            actor->ActionParamInit(actor);
            return;
          }
          pActData = pAct->pActData;
          v29 = 3 * iActNo;
          pSoundAct = pAct->pSoundAct;
          v31 = 0i64;
          v32 = 16 * v29;
          v160 = v32;
          v159 = pActData;
          if ( pSoundAct && iActionCount == pAct->soundDataHeader.iActionCount )
            v31 = (char *)pSoundAct + v32;
          v33 = *(_OWORD *)&actor->baseAnime.iMotionFileID;
          fTransparent = actor->baseAnime.fTransparent;
          v34 = actor->__vftable;
          v181 = v33;
          v34->ActionParamInit(actor);
          v35 = *(int *)((char *)&pActData->info.iEndFrame + v32);
          if ( actor->iActFrame < v35 )
          {
            v38 = 0;
          }
          else
          {
            v36 = *(int *)((char *)&pActData->info.iLoopBackFrame + v32);
            if ( v36 >= 0 )
            {
              actor->iActFrame = v36;
              v39 = *(int *)((char *)&pActData->info.iEndFrame + v32);
              if ( *(int *)((char *)&pActData->info.iLoopBackFrame + v32) >= v39 )
                actor->iActFrame = v39 - 1;
              ++actor->iActionLoopCount;
              v38 = 1;
              v162 = 1;
              actor->bActionLooped = 1;
              actor->bIgnoreMotionBlend = 1;
            }
            else
            {
              v37 = v35 - 1;
              actor->bActionEnd = 1;
              v38 = 1;
              actor->iActFrame = v37;
              v162 = 1;
            }
          }
          v40 = 0i64;
          p_iFrame = 0i64;
          v42 = (&pActData->pLine)[(unsigned __int64)v32 / 8];
          iActFrame = actor->iActFrame;
          v174 = 0i64;
          v178 = 0i64;
          v173 = 0i64;
          v175 = 0i64;
          v177 = 0i64;
          v179 = 0i64;
          v167 = 0i64;
          v176 = 0i64;
          v169 = 0i64;
          v44 = actor->iActNo != actor->iActNoPrev || iActFrame != actor->iActFramePrev || v38;
          v45 = v160;
          v46 = v159;
          actor->bActionNewFrame = v44;
          v161 = v44;
          if ( *(int *)((char *)&v159->info.iLineCount + v160) > 0 )
          {
            do
            {
              if ( v42->iKeyFrameCount >= 1 )
              {
                v47 = actor->GetKeyFrameLine(
                        actor,
                        v42,
                        iActFrame,
                        *(unsigned int *)((char *)&v46->info.iEndFrame + v45));
                if ( v47 )
                {
                  switch ( v42->iActionLineID )
                  {
                    case 0:
                      v45 = v160;
                      v46 = v159;
                      *(_OWORD *)&actor->baseAnime.iMotionFileID = *(_OWORD *)v47->iBase;
                      LODWORD(actor->baseAnime.fTransparent) = v47->iBase[4];
                      if ( (*((_BYTE *)&v159->info.iOptionFlag + v160) & 1) == 0
                        && *(_QWORD *)&actor->baseAnime.iMotionFileID != (_QWORD)v181 )
                      {
                        z = actor->vPos.z;
                        *(_QWORD *)&actor->vBasePos.x = *(_QWORD *)&actor->vPos.x;
                        actor->vBasePos.z = z;
                      }
                      if ( v47->baseAnime.fBlend > 0.0 )
                      {
                        if ( actor->bIgnoreMotionBlend )
                          actor->baseAnime.fBlend = 0.0;
                      }
                      else
                      {
                        actor->bIgnoreMotionBlend = 0;
                      }
                      break;
                    case 1:
                      actor->faceAnimeUp = *(CharaActionData::FaceAnime *)v47->iBase;
                      goto LABEL_112;
                    case 2:
                      actor->faceAnimeLow = *(CharaActionData::FaceAnime *)v47->iBase;
                      goto LABEL_112;
                    case 3:
                      *(_OWORD *)&actor->bodyPush.iRectID = *(_OWORD *)v47->iBase;
                      *(_QWORD *)&actor->bodyPush.iBindIndex = *(_QWORD *)&v47->pos.iSettingZ;
                      actor->bodyPush.iRectAttr = 0;
                      goto LABEL_112;
                    case 4:
                      ++actor->iHitDataCount;
                      goto LABEL_112;
                    case 5:
                      ++actor->iAtkDataCount;
                      goto LABEL_112;
                    case 6:
                      ++actor->iCancelDataCount;
                      goto LABEL_112;
                    case 7:
                      ++actor->iBranchCount;
                      if ( v47->iBase[0] == 31 )
                        actor->iBranchRandomMax += (int)v47->branch.fParam;
                      v45 = v160;
                      v46 = v159;
                      if ( v47->iBase[4] == 31 )
                        actor->iBranchRandomMax += (int)v47->hit.fPushRate;
                      break;
                    case 8:
                      v174 = v47;
                      goto LABEL_112;
                    case 9:
                      v173 = v47;
                      goto LABEL_112;
                    case 0xA:
                      v178 = v47;
                      goto LABEL_112;
                    case 0xB:
                      actor->iActFlg1 = v47->iBase[0];
                      goto LABEL_112;
                    case 0xC:
                      v49 = v47->iBase[0];
                      actor->iActFlg2 = v49;
                      if ( !v161 )
                        goto LABEL_112;
                      v45 = v160;
                      v46 = v159;
                      if ( (v49 & 0x1000) != 0 )
                        actor->iActionCounter = v47->iBase[1];
                      break;
                    case 0xD:
                      v169 = v47;
                      goto LABEL_112;
                    case 0xE:
                      ++actor->iEffectDataCount;
                      goto LABEL_112;
                    case 0xF:
                      if ( v161 && !v31 )
                      {
                        v50 = (ActionSystem *)(unsigned int)v47->iBase[6];
                        if ( (_DWORD)v50 )
                        {
                          if ( (_DWORD)v50 == 1 )
                            ActionSystem::RequestSoundStop(
                              v50,
                              actor,
                              (const CharaActionData::Sound::Type::Stop *)&v47->4);
                        }
                        else
                        {
                          ActionSystem::RequestSound(this, actor, (const CharaActionData::Sound::Type::Play *)&v47->4);
                        }
                      }
                      goto LABEL_112;
                    case 0x10:
                      v179 = v47;
                      goto LABEL_112;
                    case 0x11:
                      v40 = v47;
                      goto LABEL_112;
                    case 0x12:
                      v177 = v47;
                      goto LABEL_112;
                    case 0x13:
                      v167 = v47;
                      goto LABEL_112;
                    case 0x14:
                      actor->SetThrowAttach(actor, (const CharaActionData::ThrowAttach *)&v47->4);
                      goto LABEL_112;
                    case 0x15:
                      ++actor->iShotDataCount;
                      goto LABEL_112;
                    case 0x16:
                      actor->SetEffectAnime(actor, (const CharaActionData::EffectAnime *)&v47->4);
                      goto LABEL_112;
                    case 0x17:
                      p_iFrame = (float *)&v47->iFrame;
                      goto LABEL_112;
                    case 0x18:
                    case 0x1C:
                      fParam = v47->branch.fParam;
                      x = v47->move.x;
                      LODWORD(actor->vScale.z) = v47->iBase[2];
                      actor->vScale.y = fParam;
                      actor->vScale.x = x;
                      goto LABEL_112;
                    case 0x19:
                      fMotionFrame = v47->baseAnime.fMotionFrame;
                      v52 = v47->move.x;
                      LODWORD(actor->vAngle.y) = v47->iBase[1];
                      actor->vAngle.z = fMotionFrame;
                      actor->vAngle.x = v52;
                      goto LABEL_112;
                    case 0x1A:
                      ++actor->iWeaponDataCount;
                      goto LABEL_112;
                    case 0x1B:
                      ++actor->iSettingDataCount;
                      goto LABEL_112;
                    default:
                      goto LABEL_112;
                  }
                }
                else
                {
LABEL_112:
                  v46 = v159;
                  v45 = v160;
                }
              }
              ++v5;
              ++v42;
            }
            while ( v5 < *(int *)((char *)&v46->info.iLineCount + v45) );
            v176 = p_iFrame;
            v175 = v40;
          }
          if ( v31 )
          {
            v55 = (const CharaActionData::ActionLine *)*((_QWORD *)v31 + 5);
            v56 = 0;
            if ( *((int *)v31 + 9) > 0 )
            {
              do
              {
                if ( v55->iKeyFrameCount >= 1 && v55->iActionLineID == 15 )
                {
                  v57 = actor->GetKeyFrameLine(
                          actor,
                          v55,
                          iActFrame,
                          *(unsigned int *)((char *)&v46->info.iEndFrame + v45));
                  if ( v57 && v161 )
                  {
                    v59 = v57->iBase[6];
                    if ( v59 )
                    {
                      if ( v59 == 1 )
                        ActionSystem::RequestSoundStop(v58, actor, (const CharaActionData::Sound::Type::Stop *)&v57->4);
                    }
                    else
                    {
                      ActionSystem::RequestSound(this, actor, (const CharaActionData::Sound::Type::Play *)&v57->4);
                    }
                  }
                  v45 = v160;
                  v46 = v159;
                }
                ++v56;
                ++v55;
              }
              while ( v56 < *((_DWORD *)v31 + 9) );
              v40 = v175;
              p_iFrame = v176;
            }
          }
          actor->ActionFlagCheck(actor);
          if ( v161 )
          {
            ++actor->iActionCounter;
            v60 = *(float *)&FLOAT_1_0;
            v61 = 1;
            if ( actor->fActFrameFractionPrev > 0.0 && actor->iActNo == actor->iActNoPrev )
              v61 = actor->iActFrame != actor->iActFramePrev + 1;
            if ( actor->faceAnimeUp.iMotionID < 0 )
              actor->fFaceAnimeUpBlendBuf = 0.0;
            else
              actor->fFaceAnimeUpBlendBuf = actor->faceAnimeUp.fBlend;
            if ( actor->faceAnimeLow.iMotionID < 0 )
              actor->fFaceAnimeLowBlendBuf = 0.0;
            else
              actor->fFaceAnimeLowBlendBuf = actor->faceAnimeLow.fBlend;
            if ( v40 )
              actor->ActionEtcSet(actor, (const CharaActionData::Etc *)&v40->4);
            if ( actor->pModel && actor->baseAnime.fBlend > 0.0 && actor->IsAngleChangePostureCalc(actor) )
            {
              v62 = actor->pModel;
              if ( v62->m_MirrorEnable != OGLModel::checkMotionMirror(v62, 0i64) )
              {
                if ( *(_QWORD *)&actor->baseAnime.iMotionFileID != (_QWORD)v181 && actor->baseAnime.fBlend > 0.0 )
                {
                  actor->bIgnoreMotionBlend = 1;
                  actor->baseAnime.fBlend = 0.0;
                }
              }
              else if ( actor->iCAngle != actor->iCAnglePrev )
              {
                if ( v163 == ((actor->iActFlg2 & 0x400) != 0) )
                  actor->UpdatePostureCalc(actor, (const CharaActionData::BaseAnime *)&v181, 0);
                else
                  v62->m_bPrevBoneMirrorFlg = 1;
              }
            }
            if ( actor->iActNo == actor->iActNoPrev && actor->iActFrame != actor->iActFramePrev || v162 )
              v60 = 1.0 - actor->fActFrameFractionPrev;
            if ( v177 )
              actor->SetPositionData(actor, (const CharaActionData::Position *)&v177->4);
            v63 = v174;
            if ( v174 )
            {
              iCAngle = actor->iCAngle;
              v65 = v174->move.x;
              if ( iCAngle )
                LODWORD(v65) ^= _xmm;
              v66 = v65 * v60;
              v67 = v60 * v174->branch.fParam;
              v68 = v66 + actor->vPos.x;
              v69 = v67 + actor->vPos.y;
              v70 = v66 + actor->vBasePos.x;
              v71 = v67 + actor->vBasePos.y;
              actor->vPos.x = v68;
              actor->vPos.y = v69;
              actor->vBasePos.x = v70;
              actor->vBasePos.y = v71;
              v72 = v174->baseAnime.fMotionFrame;
              if ( iCAngle )
                LODWORD(v72) ^= _xmm;
              actor->vColOffBase.x = v72;
              LODWORD(actor->vColOffBase.y) = v174->iBase[3];
              v73 = actor->vColOffBase.z;
              *(_QWORD *)&actor->vColOff.x = *(_QWORD *)&actor->vColOffBase.x;
              actor->vColOff.z = v73;
              actor->iMoveOption = v174->iBase[4];
            }
            if ( p_iFrame )
            {
              v74 = p_iFrame[1];
              if ( actor->iCAngle )
                LODWORD(v74) ^= _xmm;
              v75 = v60 * p_iFrame[2];
              v76 = v74 * v60;
              v77 = actor->IsDirectionInfluenceZ(actor);
              v78 = p_iFrame[3];
              if ( v77 && actor->iCAngle )
                LODWORD(v78) ^= _xmm;
              v79 = v78 * v60;
              v80 = v76 + actor->vPos.x;
              v81 = v76 + actor->vBasePos.x;
              v82 = v75 + actor->vPos.y;
              v83 = v75 + actor->vBasePos.y;
              actor->vPos.x = v80;
              v84 = v79 + actor->vPos.z;
              v85 = v79 + actor->vBasePos.z;
              actor->vPos.y = v82;
              actor->vBasePos.x = v81;
              actor->vBasePos.y = v83;
              actor->vPos.z = v84;
              actor->vBasePos.z = v85;
            }
            v86 = v173;
            if ( v173 )
            {
              v87 = v173->move.x;
              if ( actor->iCAngle )
                LODWORD(v87) ^= _xmm;
              actor->vOff.x = v87;
              LODWORD(actor->vOff.y) = v173->iBase[1];
              if ( actor->IsDirectionInfluenceZ(actor) )
              {
                v88 = v173->baseAnime.fMotionFrame;
                if ( actor->iCAngle )
                  LODWORD(v88) ^= _xmm;
                actor->vOff.z = v88;
              }
              else
              {
                LODWORD(actor->vOff.z) = v173->iBase[2];
              }
            }
            if ( v178 && v61 )
              actor->SetSpeedData(actor, (const CharaActionData::Speed *)&v178->4, -1);
            if ( v179 )
            {
              if ( (*(_BYTE *)(&v179->effectAngle + 2) & 0x40) != 0 )
              {
                v89 = actor->GetFounderPlayerID(actor);
                CameraControl::RequestCamera(
                  &this->subCameraCtrl[v89],
                  actor,
                  (const CharaActionData::Camera *)&v179->4);
              }
              else
              {
                CameraControl::RequestCamera(&this->cameraCtrl, actor, (const CharaActionData::Camera *)&v179->4);
              }
            }
            else
            {
              v90 = this;
            }
            if ( v167 )
              ActionBlackout::RequestBlackout(&v90->actBlack, actor, (const CharaActionData::Blackout *)&v167->4);
            if ( v169 )
              actor->SetExclusiveData(actor, (const CharaActionData::Exclusive *)&v169->4, 0);
            ((void (__fastcall *)(Actor *))actor->MoveSpeedData)(actor);
            if ( (actor->iActFlg2 & 1) != 0 )
            {
              v165 = v6;
              v11 = v6;
              actor->fActionPlayRate = 1.0;
              actor->fActFrameFraction = 0.0;
            }
            actor->CheckShotLine(actor);
            actor->CheckEffectLine(actor);
            actor->CheckWeaponLine(actor);
            actor->CheckSettingLine(actor);
          }
          else
          {
            v86 = v173;
            v63 = v174;
          }
          if ( actor->fActFrameFraction > 0.0 )
          {
            v91 = 0.0;
            v92 = 0.0;
            v93 = 0.0;
            v94 = 0.0;
            v95 = 0.0;
            if ( v86 )
            {
              v171 = *(_QWORD *)v86->iBase;
              v92 = *((float *)&v171 + 1);
              v91 = *(float *)&v171;
              v93 = v86->baseAnime.fMotionFrame;
              if ( actor->iCAngle )
                LODWORD(v91) = v171 ^ _xmm;
            }
            if ( v63 )
            {
              v180 = *(_OWORD *)v63->iBase;
              LODWORD(v94) = *(_QWORD *)&v63->move.fColX;
              v95 = *((float *)&v180 + 3);
              if ( actor->iCAngle )
                LODWORD(v94) = DWORD2(v180) ^ _xmm;
            }
            v96 = 0i64;
            v97 = *(_OWORD *)&actor->baseAnime.iMotionFileID;
            v98 = 0i64;
            v99 = actor->iActFrame + 1;
            v170 = 0i64;
            v100 = *(CharaActionData::ActionLine **)((char *)&v159->pLine + v160);
            v101 = 0i64;
            v102 = 0i64;
            fTransparent = actor->baseAnime.fTransparent;
            v181 = v97;
            v164 = 0i64;
            v168 = 0i64;
            v103 = *(int *)((char *)&v159->info.iEndFrame + v160);
            if ( v99 < v103 || (v99 = *(int *)((char *)&v159->info.iLoopBackFrame + v160), v99 >= 0) && v99 < v103 )
            {
              v104 = v160;
              v105 = 0;
              v106 = v159;
              if ( *(int *)((char *)&v159->info.iLineCount + v160) > 0 )
              {
                do
                {
                  if ( v100->iKeyFrameCount >= 1 )
                  {
                    v9 = actor->GetKeyFrameLine(
                           actor,
                           v100,
                           (unsigned int)v99,
                           *(unsigned int *)((char *)&v106->info.iEndFrame + v160));
                    if ( v9 )
                    {
                      switch ( v100->iActionLineID )
                      {
                        case 0:
                          v107 = v9->iBase[1];
                          if ( v107 < 0 )
                          {
                            *(_OWORD *)&actor->baseAnime.iMotionFileID = *(_OWORD *)v9->iBase;
                            LODWORD(actor->baseAnime.fTransparent) = v9->iBase[4];
                          }
                          else
                          {
                            if ( actor->baseAnime.iMotionID == v107
                              && actor->baseAnime.iMotionFileID == v9->iBase[0]
                              && (v108 = actor->baseAnime.fMotionFrame, v109 = v9->baseAnime.fMotionFrame, v109 >= v108) )
                            {
                              fActFrameFraction = actor->fActFrameFraction;
                              v111 = (float)((float)(v9->baseAnime.fBlend - actor->baseAnime.fBlend) * fActFrameFraction)
                                   + actor->baseAnime.fBlend;
                              *(_OWORD *)&actor->baseAnime.iMotionFileID = *(_OWORD *)v9->iBase;
                              LODWORD(actor->baseAnime.fTransparent) = v9->iBase[4];
                              actor->baseAnime.fMotionFrame = (float)((float)(v109 - v108) * fActFrameFraction) + v108;
                              actor->baseAnime.fBlend = v111;
                            }
                            else
                            {
                              *(_OWORD *)&actor->baseAnime.iMotionFileID = *(_OWORD *)v9->iBase;
                              LODWORD(actor->baseAnime.fTransparent) = v9->iBase[4];
                              actor->baseAnime.fBlend = 1.0
                                                      - (float)((float)(1.0 - actor->baseAnime.fBlend)
                                                              * actor->fActFrameFraction);
                            }
                            if ( actor->bIgnoreMotionBlend )
                              actor->baseAnime.fBlend = 0.0;
                          }
                          actor->baseAnime.fTransparent = (float)((float)(actor->baseAnime.fTransparent - fTransparent)
                                                                * actor->fActFrameFraction)
                                                        + fTransparent;
                          goto LABEL_242;
                        case 1:
                          if ( actor->faceAnimeUp.iMotionID == v9->iBase[1]
                            && (v112 = actor->faceAnimeUp.fMotionFrame, v113 = v9->baseAnime.fMotionFrame, v113 >= v112) )
                          {
                            v114 = actor->fActFrameFraction;
                            fFaceAnimeUpBlendBuf = actor->fFaceAnimeUpBlendBuf;
                            v116 = (float)((float)(v9->baseAnime.fBlend - actor->faceAnimeUp.fBlend) * v114)
                                 + actor->faceAnimeUp.fBlend;
                            actor->faceAnimeUp = *(CharaActionData::FaceAnime *)v9->iBase;
                            actor->faceAnimeUp.fMotionFrame = (float)((float)(v113 - v112) * v114) + v112;
                            if ( fFaceAnimeUpBlendBuf <= 0.0 )
                              fFaceAnimeUpBlendBuf = *(float *)&FLOAT_1_0;
                            actor->fFaceAnimeUpBlendBuf = v116;
                            actor->faceAnimeUp.fBlend = v116 / fFaceAnimeUpBlendBuf;
                          }
                          else
                          {
                            v117 = actor->fFaceAnimeUpBlendBuf;
                            v118 = 1.0 - (float)((float)(1.0 - v9->baseAnime.fBlend) * actor->fActFrameFraction);
                            actor->faceAnimeUp = *(CharaActionData::FaceAnime *)v9->iBase;
                            if ( v117 <= 0.0 )
                              v117 = *(float *)&FLOAT_1_0;
                            actor->fFaceAnimeUpBlendBuf = v118;
                            actor->faceAnimeUp.fBlend = v118 / v117;
                          }
                          goto LABEL_242;
                        case 2:
                          if ( actor->faceAnimeLow.iMotionID == v9->iBase[1]
                            && (v119 = actor->faceAnimeLow.fMotionFrame, v120 = v9->baseAnime.fMotionFrame, v120 >= v119) )
                          {
                            v121 = actor->fActFrameFraction;
                            fFaceAnimeLowBlendBuf = actor->fFaceAnimeLowBlendBuf;
                            v123 = (float)((float)(v9->baseAnime.fBlend - actor->faceAnimeLow.fBlend) * v121)
                                 + actor->faceAnimeLow.fBlend;
                            actor->faceAnimeLow = *(CharaActionData::FaceAnime *)v9->iBase;
                            actor->faceAnimeLow.fMotionFrame = (float)((float)(v120 - v119) * v121) + v119;
                            if ( fFaceAnimeLowBlendBuf <= 0.0 )
                              fFaceAnimeLowBlendBuf = *(float *)&FLOAT_1_0;
                            actor->fFaceAnimeLowBlendBuf = v123;
                            actor->faceAnimeLow.fBlend = v123 / fFaceAnimeLowBlendBuf;
                          }
                          else
                          {
                            v124 = actor->fFaceAnimeLowBlendBuf;
                            v125 = 1.0 - (float)((float)(1.0 - v9->baseAnime.fBlend) * actor->fActFrameFraction);
                            actor->faceAnimeLow = *(CharaActionData::FaceAnime *)v9->iBase;
                            if ( v124 <= 0.0 )
                              v124 = *(float *)&FLOAT_1_0;
                            actor->fFaceAnimeLowBlendBuf = v125;
                            actor->faceAnimeLow.fBlend = v125 / v124;
                          }
                          goto LABEL_242;
                        case 8:
                          v96 = v9;
                          goto LABEL_242;
                        case 9:
                          v98 = (float *)&v9->iFrame;
                          goto LABEL_242;
                        case 0xA:
                          v170 = v9;
                          goto LABEL_242;
                        case 0xB:
                          actor->iActFlg1Next = v9->iBase[0];
                          goto LABEL_242;
                        case 0xC:
                          actor->iActFlg2Next = v9->iBase[0];
                          goto LABEL_242;
                        case 0xD:
                          v168 = v9;
                          goto LABEL_242;
                        case 0x11:
                          v104 = v160;
                          v101 = v9;
                          v106 = v159;
                          v164 = v9;
                          break;
                        case 0x17:
                          v102 = (float *)&v9->iFrame;
                          goto LABEL_242;
                        default:
                          goto LABEL_242;
                      }
                      goto LABEL_244;
                    }
LABEL_242:
                    v104 = v160;
                    v106 = v159;
                  }
                  v101 = v164;
LABEL_244:
                  ++v105;
                  ++v100;
                }
                while ( v105 < *(int *)((char *)&v106->info.iLineCount + v104) );
              }
            }
            v126 = 0;
            fActFrameFractionPrev = actor->fActFrameFractionPrev;
            v128 = actor->fActFrameFraction - fActFrameFractionPrev;
            if ( v128 <= 0.0 || fActFrameFractionPrev == 0.0 )
            {
              v126 = 1;
              v128 = actor->fActFrameFraction;
            }
            v129 = actor->iCAngle;
            if ( !v161 && (actor->iActFlg1Next & 0x240) == 0 )
              actor->iActFlg1 &= 0xFFFFFDBF;
            if ( v101 )
            {
              v129 = actor->GetTurnAngle(actor, v101->iBase[0]);
              if ( v129 != actor->iCAngle )
              {
                v130 = fTransparent;
                *(_OWORD *)&actor->baseAnime.iMotionFileID = v181;
                actor->baseAnime.fTransparent = v130;
              }
            }
            if ( v96 )
            {
              v131 = v96->move.x;
              if ( v129 )
                LODWORD(v131) ^= _xmm;
              v132 = v128 * v96->branch.fParam;
              v133 = v128 * v131;
              v134 = v132 + actor->vPos.y;
              v135 = (float)(v128 * v131) + actor->vPos.x;
              v136 = v133 + actor->vBasePos.x;
              v137 = v132 + actor->vBasePos.y;
              actor->vPos.y = v134;
              actor->vPos.x = v135;
              actor->vBasePos.x = v136;
              actor->vBasePos.y = v137;
              v138 = v96->baseAnime.fMotionFrame;
              if ( v129 )
                LODWORD(v138) ^= _xmm;
              v139 = actor->fActFrameFraction;
              actor->vColOffBase.x = (float)((float)(v138 - v94) * v139) + v94;
              actor->vColOffBase.y = (float)((float)(v96->baseAnime.fBlend - v95) * v139) + v95;
              v140 = actor->vColOffBase.z;
              *(_QWORD *)&actor->vColOff.x = *(_QWORD *)&actor->vColOffBase.x;
              actor->vColOff.z = v140;
              actor->iMoveOption = v96->iBase[4];
            }
            if ( v102 )
            {
              v141 = v102[1];
              if ( v129 )
                LODWORD(v141) ^= _xmm;
              v142 = v128 * v141;
              v143 = v128 * v102[2];
              v144 = actor->IsDirectionInfluenceZ(actor);
              v145 = v102[3];
              if ( v144 && v129 )
                LODWORD(v145) ^= _xmm;
              v146 = v145 * v128;
              v147 = v142 + actor->vPos.x;
              v148 = v142 + actor->vBasePos.x;
              v149 = v143 + actor->vPos.y;
              v150 = v143 + actor->vBasePos.y;
              actor->vPos.x = v147;
              v151 = v146 + actor->vPos.z;
              v152 = v146 + actor->vBasePos.z;
              actor->vPos.y = v149;
              actor->vBasePos.x = v148;
              actor->vBasePos.y = v150;
              actor->vPos.z = v151;
              actor->vBasePos.z = v152;
            }
            if ( v98 )
            {
              v153 = v98[1];
              if ( v129 )
                LODWORD(v153) ^= _xmm;
              v154 = actor->fActFrameFraction;
              v155 = actor->__vftable;
              actor->vOff.x = (float)((float)(v153 - v91) * v154) + v91;
              actor->vOff.y = (float)((float)(v98[2] - v92) * v154) + v92;
              v156 = v155->IsDirectionInfluenceZ(actor);
              v157 = v98[3];
              if ( v156 && v129 )
                LODWORD(v157) ^= _xmm;
              actor->vOff.z = (float)((float)(v157 - v93) * actor->fActFrameFraction) + v93;
            }
            if ( v170 && v126 )
              actor->SetSpeedData(actor, (const CharaActionData::Speed *)&v170->4, v129);
            if ( v168 )
            {
              LOBYTE(v9) = 1;
              actor->SetExclusiveData(actor, (const CharaActionData::Exclusive *)&v168->4, (bool)v9);
            }
            ((void (__fastcall *)(Actor *))actor->MoveSpeedData)(actor);
            v6 = v172;
          }
          if ( (int)(float)((float)((float)actor->iActFrame + actor->fActFrameFraction) + v11) >= *(int *)((char *)&v159->info.iEndFrame + v160)
            && *(int *)((char *)&v159->info.iLoopBackFrame + v160) < 0 )
          {
            actor->bActionEnd = 1;
          }
          if ( v165 <= 1.0 || actor->bActionEnd )
          {
            fActionPlayRateReserve = actor->fActionPlayRateReserve;
            if ( fActionPlayRateReserve > 0.0 )
            {
              actor->fActionPlayRate = fActionPlayRateReserve;
              actor->fActionPlayRateReserve = 0.0;
            }
            if ( actor->xMoveWaitFrame.value )
            {
              actor->xMoveWaitFrame.value += (int)(float)(v6 * -65536.0);
              if ( actor->xMoveWaitFrame.value < 0 )
                actor->xMoveWaitFrame.value = 0;
            }
            return;
          }
          v8 = v165 - v11;
          v5 = 0;
          v165 = v165 - v11;
        }
        actor->SetBackActionDataReq(actor);
        v12 = v163;
LABEL_22:
        pActReserve = actor->pActReserve;
        if ( !pActReserve )
          goto LABEL_30;
        goto LABEL_23;
      }
    }
  }
}

void __fastcall ActionSystem::SetPlaySpeed(ActionSystem *this, float speed)
{
  float v2; // xmm0_4

  v2 = *(float *)&FLOAT_1_0;
  if ( speed <= 1.0 )
    v2 = fmaxf(0.0, speed);
  this->xPlaySpeed.value = (int)(float)(v2 * 65536.0);
}

void __fastcall ActionSystem::SystemInit(ActionSystem *this)
{
  CameraControl *subCameraCtrl; // r9
  CameraControl *v3; // r9
  CameraControl *v4; // r10
  EffectDataListManager **pEffectMgr; // rdi
  int *iPrevDamageAnnounce; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  int *iShadowPassSetting; // rcx
  __int64 v11; // rdx
  ActionSystem::CameraLightParam *i; // rax
  int *iCAngle; // rax
  __int64 v14; // rcx
  MaterialShowControl *v15; // rdx
  MaterialShowControl::MaterialIndexList *ListData; // rax
  OGLModel **pModelList; // rax
  __int64 v18; // r8
  __int64 v19; // rcx

  ActionSystem::AllDelete(this);
  this->iReqDrawCount = 0;
  this->bSorted = 0;
  *(_WORD *)&this->bFreeCameraMode = 0;
  this->bInvalidZOffset = 0;
  this->xPlaySpeed.value = 0x10000;
  CameraControl::CameraInit(&this->cameraCtrl, 1.7777778);
  subCameraCtrl = this->subCameraCtrl;
  if ( this->subCameraCtrl != (CameraControl *)&this->freeCamera )
  {
    do
    {
      CameraControl::CameraInit(subCameraCtrl, 1.7777778);
      v3->bSubCamera = 1;
      subCameraCtrl = v3 + 1;
    }
    while ( subCameraCtrl != v4 );
  }
  this->freeCamera.bNoUpdate = 0;
  pEffectMgr = this->pEffectMgr;
  *(_QWORD *)&this->actBlack.data[0].attr = 0i64;
  this->actBlack.data[0].bFadeOut = 0;
  this->actBlack.reqData[0].attr = NONE;
  this->actBlack.reqData[0].bFadeOut = 0;
  *(_QWORD *)&this->actBlack.data[1].attr = 0i64;
  this->actBlack.data[1].bFadeOut = 0;
  this->actBlack.reqData[1].attr = NONE;
  this->actBlack.reqData[1].bFadeOut = 0;
  *(_QWORD *)&this->actBlack.data[2].attr = 0i64;
  this->actBlack.data[2].bFadeOut = 0;
  this->actBlack.reqData[2].attr = NONE;
  this->actBlack.reqData[2].bFadeOut = 0;
  *(_QWORD *)&this->actBlack.data[3].attr = 0i64;
  this->actBlack.data[3].bFadeOut = 0;
  this->actBlack.reqData[3].attr = NONE;
  this->actBlack.reqData[3].bFadeOut = 0;
  *(_QWORD *)&this->actBlack.data[4].attr = 0i64;
  this->actBlack.data[4].bFadeOut = 0;
  this->actBlack.reqData[4].attr = NONE;
  this->actBlack.reqData[4].bFadeOut = 0;
  *(_QWORD *)&this->actBlack.data[5].attr = 0i64;
  this->actBlack.data[5].bFadeOut = 0;
  this->actBlack.reqData[5].attr = NONE;
  this->actBlack.reqData[5].bFadeOut = 0;
  this->iThrowChildPlayerID = -1;
  if ( this->pEffectMgr != (EffectDataListManager **)&this->iThrowChildPlayerID )
  {
    do
    {
      if ( *pEffectMgr )
        EffectDataListManager::clearEffect(*pEffectMgr);
      ++pEffectMgr;
    }
    while ( pEffectMgr != (EffectDataListManager **)&this->iThrowChildPlayerID );
  }
  iPrevDamageAnnounce = this->iPrevDamageAnnounce;
  this->rivalTalkData.iWindowActive = 0;
  *(_QWORD *)&this->rivalTalkData.iTextID = -1i64;
  v7 = 2i64;
  *(_DWORD *)&this->rivalTalkData.bNextActionReserve = 0;
  this->rivalTalkData.pActDat = 0i64;
  v8 = 2i64;
  v9 = 0i64;
  if ( this->iPrevDamageAnnounce > this->iShadowPassSetting )
    v8 = 0i64;
  if ( this->iPrevDamageAnnounce <= this->iShadowPassSetting )
  {
    do
    {
      ++v9;
      *iPrevDamageAnnounce++ = 0;
    }
    while ( v9 != v8 );
  }
  iShadowPassSetting = this->iShadowPassSetting;
  v11 = 0i64;
  if ( this->iShadowPassSetting > (int *)this->cameraLightParam )
    v7 = 0i64;
  if ( this->iShadowPassSetting <= (int *)this->cameraLightParam )
  {
    do
    {
      ++v11;
      *iShadowPassSetting++ = 0;
    }
    while ( v11 != v7 );
  }
  for ( i = this->cameraLightParam; i != &this->cameraLightParam[4]; ++i )
  {
    *(_WORD *)&i->iMirror = 256;
    i->iLightID = 0;
  }
  this->bFastPlayDrawSkipFrame = 0;
  iCAngle = this->photoModeData.iCAngle;
  *(_WORD *)&this->photoModeData.bPhotoMode = 0;
  v14 = 4i64;
  do
  {
    *(iCAngle - 4) = 0;
    *iCAngle++ = 0;
    --v14;
  }
  while ( v14 );
  *(_QWORD *)&this->photoModeData.iTarget = 0i64;
  if ( this->defaultMaterialData != (MaterialShowControl *)&this->photoModeData )
  {
    v15 = &this->defaultMaterialData[1];
    do
    {
      ListData = v15[-1].ListData;
      v15[-1].iDataCount = 0;
      v15[-1].iMianMaskCount = 0;
      for ( v15[-1].iMianMaskType = -1; ListData != &v15[-1].ListData[64]; ++ListData )
        *ListData = (MaterialShowControl::MaterialIndexList)-1i64;
      pModelList = v15[-1].pModelList;
      v18 = 24i64;
      v19 = 0i64;
      if ( v15[-1].pModelList > (OGLModel **)v15 )
        v18 = 0i64;
      if ( v15[-1].pModelList <= (OGLModel **)v15 )
      {
        do
        {
          ++v19;
          *pModelList++ = 0i64;
        }
        while ( v19 != v18 );
      }
      ++v15;
    }
    while ( &v15[-1] != (MaterialShowControl *)&this->photoModeData );
  }
}

void __fastcall ActionSystem::SystemUpdate(ActionSystem *this)
{
  int i; // ebx
  std::unique_ptr<Collision::HitRectList> *v3; // rax
  __int64 v4; // r8
  Collision::HitRectList *Myval2; // rdx
  EffectDataListManager **j; // rbx

  ActionSystem::CameraPrevCalc(this);
  ActionSystem::DrawReqClear(this);
  for ( i = 0; i < 2; ++i )
  {
    v3 = &Collision::HitRectCollection::GetInstance(i)->pRectList[2];
    v4 = 3i64;
    do
    {
      Myval2 = v3[-2]._Mypair._Myval2;
      v3 += 5;
      Myval2->rectList._Mypair._Myval2._Mylast = Myval2->rectList._Mypair._Myval2._Myfirst;
      v3[-6]._Mypair._Myval2->rectList._Mypair._Myval2._Mylast = v3[-6]._Mypair._Myval2->rectList._Mypair._Myval2._Myfirst;
      v3[-5]._Mypair._Myval2->rectList._Mypair._Myval2._Mylast = v3[-5]._Mypair._Myval2->rectList._Mypair._Myval2._Myfirst;
      v3[-4]._Mypair._Myval2->rectList._Mypair._Myval2._Mylast = v3[-4]._Mypair._Myval2->rectList._Mypair._Myval2._Myfirst;
      v3[-3]._Mypair._Myval2->rectList._Mypair._Myval2._Mylast = v3[-3]._Mypair._Myval2->rectList._Mypair._Myval2._Myfirst;
      --v4;
    }
    while ( v4 );
  }
  for ( j = this->pEffectMgr; j != (EffectDataListManager **)&this->iThrowChildPlayerID; ++j )
  {
    if ( *j )
      EffectDataListManager::update(*j);
  }
  this->iThrowChildPlayerID = -1;
  ActionSystem::CheckThrowChildPlayer(this, 0);
  ActionSystem::CheckThrowChildPlayer(this, 1);
  ActionBlackout::Main(&this->actBlack, this->xPlaySpeed);
  if ( !this->rivalTalkData.bNextActionReserve )
    this->rivalTalkData.bNextAction = 0;
  if ( !this->rivalTalkData.bSkipTalkReserve )
    this->rivalTalkData.bSkipTalk = 0;
  this->rivalTalkData.bNextActionReserve = 0;
  this->rivalTalkData.bSkipTalkReserve = 0;
  ActionSystem::CheckComboDamageAnnounce(this);
}

std::_Func_base<float> *__fastcall std::_Func_impl<std::_Binder<std::_Unforced,float (Actor::*)(void)const,Actor *>,std::allocator<int>,float,>::_Copy(
        std::_Func_impl<std::_Binder<std::_Unforced,float (__cdecl Actor::*)(void)const ,Actor *>,std::allocator<int>,float> *this,
        void *_Where)
{
  if ( _Where )
  {
    *(_QWORD *)_Where = &std::_Func_impl<std::_Binder<std::_Unforced,float (Actor::*)(void)const,Actor *>,std::allocator<int>,float,>::`vftable';
    *(std::_Compressed_pair<std::allocator<int>,std::_Binder<std::_Unforced,float (__cdecl Actor::*)(void)const ,Actor *>,1> *)((char *)_Where + 8) = this->_Mypair;
  }
  return (std::_Func_base<float> *)_Where;
}

void __fastcall std::_Func_impl<std::_Binder<std::_Unforced,float (Actor::*)(void)const,ActorChara *>,std::allocator<int>,float,>::_Delete_this(
        std::_Func_impl<std::_Binder<std::_Unforced,float (__cdecl Actor::*)(void)const ,ActorChara * const>,std::allocator<int>,float> *this,
        bool _Deallocate)
{
  this->__vftable = (std::_Func_impl<std::_Binder<std::_Unforced,float (__cdecl Actor::*)(void)const ,ActorChara * const>,std::allocator<int>,float>_vtbl *)&std::_Func_base<float,>::`vftable';
  if ( _Deallocate )
    operator delete(this);
}

void __fastcall std::_Func_impl<std::_Binder<std::_Unforced,float (Actor::*)(void)const,Actor *>,std::allocator<int>,float,>::_Do_call(
        std::_Func_impl<std::_Binder<std::_Unforced,float (__cdecl Actor::*)(void)const ,ActorChara * const>,std::allocator<int>,float> *this)
{
  this->_Mypair._Myval2._Mypair._Myval1(this->_Mypair._Myval2._Mypair._Myval2._Myfirst._Val);
}

std::_Align_type<double,64> *__fastcall __Get____Func_impl_U_unnamed_type_nothing___1__InstallGFxInterface_extension__YAXXZ_V__allocator_H_std__VValue_GFx_Scaleform__AEAVGFXIMovieContext_3_PEBV678_I_std__EEBAPEBXXZ(
        _Mtx_internal_imp_t *mtx)
{
  return &mtx->cs;
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

void ***__fastcall std::_Func_impl<std::_Binder<std::_Unforced,float (Actor::*)(void)const,Actor *>,std::allocator<int>,float,>::_Target_type(
        std::_Func_impl<std::_Binder<std::_Unforced,float (__cdecl Actor::*)(void)const ,Actor *>,std::allocator<int>,float> *this)
{
  return &std::_Binder<std::_Unforced,float (Actor::*)(void)const,Actor *> `RTTI Type Descriptor';
}

void __fastcall std::vector<Actor *>::resize(
        std::vector<extension::exsound_detail::PreloadedAudioSet *> *this,
        unsigned __int64 _Newsize)
{
  extension::exsound_detail::PreloadedAudioSet **Mylast; // r8
  extension::exsound_detail::PreloadedAudioSet **Myfirst; // r10
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // rcx

  Mylast = this->_Mypair._Myval2._Mylast;
  Myfirst = this->_Mypair._Myval2._Myfirst;
  v6 = Mylast - this->_Mypair._Myval2._Myfirst;
  if ( _Newsize >= v6 )
  {
    if ( v6 < _Newsize )
    {
      v7 = _Newsize - v6;
      if ( this->_Mypair._Myval2._Myend - Mylast < v7 )
      {
        if ( 0x1FFFFFFFFFFFFFFFi64 - v6 < v7 )
          std::_Xlength_error("vector<T> too long");
        v8 = v6 + v7;
        v9 = this->_Mypair._Myval2._Myend - Myfirst;
        v10 = 0i64;
        if ( 0x1FFFFFFFFFFFFFFFi64 - (v9 >> 1) >= v9 )
          v10 = v9 + (v9 >> 1);
        if ( v10 >= v8 )
          v8 = v10;
        std::vector<extension::exsound_detail::PreloadedAudioSet *>::_Reallocate(this, v8);
      }
      memset(
        this->_Mypair._Myval2._Mylast,
        0,
        8 * (_Newsize - (this->_Mypair._Myval2._Mylast - this->_Mypair._Myval2._Myfirst)));
      this->_Mypair._Myval2._Mylast += _Newsize - (this->_Mypair._Myval2._Mylast - this->_Mypair._Myval2._Myfirst);
    }
  }
  else
  {
    this->_Mypair._Myval2._Mylast = &Mylast[_Newsize - v6];
  }
}

