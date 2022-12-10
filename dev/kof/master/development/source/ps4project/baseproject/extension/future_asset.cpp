#include "dev/kof/master/development/source/baseproject/jni/game/network/netmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_rasterizer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_viewport.h"
#include "dev/silverware/git/sdk/agthreadpool.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/matrix4unaligned.h"
#include "dev/silverware/git/sdk/agsemaphore.inl"
#include "dev/silverware/git/sdk/agconditionvariable.h"
#include "dev/kof/master/development/source/baseproject/jni/game/network/leaderboard.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/fix32.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/quat_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/condition_variable"
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/jobmanager.h"
#include "dev/kof/master/development/source/ps4project/baseproject/pcutil/pcdummy.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/sstream"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_manager.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/texstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_drawableimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/refcountable.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hal.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_buffer.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_characterdef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "dev/silverware/git/sdk/agscopedlock.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/weapon/actorweapon.h"
#include "dev/kof/master/development/source/baseproject/jni/game/system/battlecontroller.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/operationmapper.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actionsystem.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/randommt.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filters.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaactiondataformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filterparams.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_sse.h"
#include "dev/silverware/git/sdk/agreferencecountinl.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestage.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charafilebase.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphqueue.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_types.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/tkndata.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdata/effectappdata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_font.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/resourcemanager.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/time.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/type_traits"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessdefs.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/libcommon.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstddef"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatapacked.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/cameramotionpreviewsettings.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/stageprojectdata.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/commanddataformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_pathdatapacker.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/matchingsystem.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_linebuffer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_highlight.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloat.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestagedatas.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_profiler.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector2unaligned.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/tkndatas.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_states.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/tween.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/tga_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_statebag.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/mediamanager.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/asynccharafileload.h"
#include "dev/silverware/git/sdk/agmovieplayer.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_functions.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_simplemeshcache.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/audiopresenter.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/fontprovider/render_fontproviderwinapi.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/mutex"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/hitrectcollection.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmodel.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/algorithm"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/chrono"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_bundle.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/limits"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_new.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_missiondataloading.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/trainingsetting.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/combomissionattackeventlistener.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charamaterialsettingformat.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglcurve.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_typeinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloatmp.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actorcharabase.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapemeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/jpeg_imagefile.h"
#include "program files (x86)/windows kits/8.1/include/shared/guiddef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/silverware/git/sdk/system/agsysteminfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlehud.h"
#include "dev/kof/master/development/source/baseproject/jni/game/define/charabonedefine.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treetext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefileutil.h"
#include "dev/silverware/git/sdk/agreferenceinl.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battleeventhandler.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/colorholder.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_docview.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xutility"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/damagesetting.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_range.h"
#include "program files (x86)/windows kits/8.1/include/shared/stralign.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/utility"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglsprite.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/battleplayerinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "dev/silverware/git/sdk/agmemorystream.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/iosfwd"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_hash.h"
#include "dev/silverware/git/sdk/agmemorypool.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/easingnumber.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/errorchecker.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/mediasound.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglrender.h"
#include "dev/silverware/git/sdk/input/agcontrollerbuttoncomponent.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actionblackout.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "dev/silverware/git/sdk/aghash.h"
#include "dev/silverware/git/sdk/agstream.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/boolinvec.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/functional"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix4x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixpool.h"
#include "dev/silverware/git/sdk/agstringutils.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglfog.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglbone.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xfacet"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/iomanip"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstring"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleonlinewatching.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/particledata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shader.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocmon"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_sgmlparser.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory0"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/cpusequencedataformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_context.h"
#include "dev/silverware/git/sdk/3rdparty/steam/isteamhtmlsurface.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/silverware/git/sdk/agpointerinl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_constants.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exwaitcondition.h"
#include "dev/silverware/git/sdk/agconditionvariable.inl"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/exception"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleloading.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/shot/actorshot.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actorchara.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessgen.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/commandcheck.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xloctime"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treeshape.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessellator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/unordered_map"
#include "dev/kof/master/development/source/baseproject/jni/game/util/restrictringbuffer.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector3unaligned.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_exception.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/titlestoragesystem.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xhash"
#include "dev/silverware/git/sdk/platforms/pc/system/agpcsysteminfo.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/list"
#include "dev/kof/master/development/source/baseproject/jni/game/player/materialshowcontrol.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "dev/kof/master/development/source/baseproject/jni/game/appmain.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/syncmenuimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitivebundle.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_ps4modelroom.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/moviedatadefine.h"
#include "dev/silverware/git/sdk/agdisplay.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treecachenode.h"
#include "program files (x86)/windows kits/8.1/include/um/winnt.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charahitrectformat.h"
#include "dev/silverware/git/sdk/agvector4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treenode.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_loader.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmirror.h"
#include "dev/silverware/git/sdk/agvector3.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cacheeffect.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_system.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphfitter.h"
#include "program files (x86)/windows kits/8.1/include/shared/basetsd.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_player.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_types.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/vec_aos.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_resource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/boolinvec.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/system_error"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestageresourcecontainer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_stroker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/stdexcept"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestageshader.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actor.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/rapper/graphicsopt.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/dds_imagefile.h"
#include "dev/silverware/git/sdk/util/agservicecommand.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charadataunify.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/vectormath_aos.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaattackdataformat.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charadamagesettingformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textmeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphparam.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/silverware/git/sdk/agrectangle.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcache.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steam_api_internal.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/tuple"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcacheconfig.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglshader.h"
#include "dev/silverware/git/sdk/util/agdebugchannels.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hairliner.h"
#include "dev/silverware/git/sdk/util/agperformancecounter.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/debug/logging.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_filterdesc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_styledtext.h"
#include "dev/silverware/git/sdk/agclock.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix3x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_core.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_queue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_fontmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitive.h"
#include "dev/silverware/git/sdk/agmutex.inl"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocaddr.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_radixtree.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdatalistmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_twips.h"
#include "program files (x86)/windows kits/8.1/include/um/winuser.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectcommon.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_containers.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/string"
#include "dev/silverware/git/sdk/agreferencedobjectinl.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_wwhelper.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steam_api.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic0.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/combomissiondataformat.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/sounddata.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/soundgroupdataformat.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/globalheapmemory.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "dev/kof/master/development/source/baseproject/jni/game/network/playtogether.h"
#include "dev/silverware/git/sdk/agcondition.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/fixmemory.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/mat_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/array"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_bank.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogleffect.h"
#include "dev/kof/master/development/source/ps4project/baseproject/pcutil/pccontrolsmanager.h"
#include "dev/silverware/git/sdk/memory/agallocators.h"
#include "dev/silverware/git/sdk/input/aginputmanager.h"
#include "dev/silverware/git/sdk/agsingleton.h"
#include "dev/silverware/git/sdk/filesystem/agfile.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector4unaligned.h"
#include "dev/silverware/git/sdk/filesystem/agpath.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/shaderfxhelper.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogllight.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/effect/actoreffect.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actorobject.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_vertex.h"
#include "dev/silverware/git/sdk/filesystem/agmount.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/savedata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/fontprovider/render_fontproviderhud.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_wstring.h"
#include "dev/silverware/git/sdk/filesystem/agdirectory.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/vecidx_aos.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actoroption.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/floatinvec.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/cameracheck.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/ostream"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/freecameracheck.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/input/imesystem.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/ios"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleonline.h"
#include "dev/silverware/git/sdk/3rdparty/steam/matchmakingtypes.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/quat_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocnum"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/streambuf"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/floatinvec.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xiosbase"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thread"
#include "dev/kof/master/development/source/baseproject/jni/game/data/savedatadefine.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threadcheck.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocale"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exthread.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/memory"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textlayout.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_image.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocinfo"
#include "dev/silverware/git/sdk/agthread.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/bilinkable.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdata/effectdata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "program files (x86)/windows kits/8.1/include/um/winbase.h"
#include "dev/silverware/git/sdk/agvector2.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/silverware/git/sdk/agreferencedobject.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xxatomic"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "dev/kof/master/development/source/baseproject/jni/game/cpuseq/battlecpu.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/variableheapmemorybase.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_vec64.h"
#include "dev/silverware/git/sdk/agmath.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "dev/silverware/git/sdk/agreferencecount.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/baseproject/jni/game/cpuseq/sequencecontroller.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/chartdata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/math.h"
#include "dev/silverware/git/sdk/input/agcontroller.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/heapmemory.h"
#include "dev/silverware/git/sdk/system/aguser.h"
#include "dev/silverware/git/sdk/agstring.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_prefightfaceoff.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/translate_table.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_movie.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/mutex.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_math.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vector"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/shared_lua_context.h"
#include "dev/kof/master/development/source/baseproject/jni/game/system/battlesysteminfo.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_operation.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/bitset"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/vec_aos.h"
#include "dev/silverware/git/sdk/util/agdelegate.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_screentoworld.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thr/xthread"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/hidpad/hidpadsystem.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/combomissionjudge.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/physicalheapmemory.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/map"
#include "dev/kof/master/development/source/baseproject/jni/game/util/soundutil.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/future_asset.h"
#include "dev/silverware/git/sdk/agcondition.inl"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtree"
#include "dev/kof/master/development/source/baseproject/jni/game/network/chkdiscononlinesv.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_strokeraa.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_scale9grid.h"
#include "dev/silverware/git/sdk/input/agcontrollercomponent.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/asyncjob.h"
#include "dev/silverware/git/sdk/agpointer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraystaticbuff.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/mat_aos.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exlockable.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cxform.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "dev/silverware/git/sdk/agmutex.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/atomic_int.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaprojectdataformat.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/atomic"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/effect.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charabasestatusformat.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/inputkeyrecord.h"
#include "dev/silverware/git/sdk/system/agusermanager.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_hashkey.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlecall/battlecall.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_event.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/deque"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_debug.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/png_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_keycodes.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/bodypush.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "dev/silverware/git/sdk/input/agsdlmappingparser.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshkey.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixstate.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_gradients.h"
#include "dev/silverware/git/sdk/util/agservice.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steamclientpublic.h"
#include "dev/silverware/git/sdk/agsemaphore.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/fixmemory.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exlockable.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglsecondary.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/asyncjob.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exthread.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/check/commandcheck.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmirror.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmotion.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/cfile.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglrender.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogltexture.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglfigure.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmodel.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglcurve.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglcamera.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglinputstream.cpp"

struct extension::future_asset_detail::`anonymous-namespace'::AssetModelSpec
{
	unsigned long uiModelNo; // 0x0
	long iFigureNo; // 0x4
	long iMotionNo; // 0x8
	long iMotionCommonNo; // 0xC
	long iMotionFaceUp; // 0x10
	long iMotionFaceDown; // 0x14
	long iMotionParts; // 0x18
	long iMirrorNo; // 0x1C
	long iEffectNo; // 0x20
	long iTypeNo; // 0x24
	long iSecondaryNo; // 0x28
	long iCameraNo; // 0x2C
	long iParameterNo; // 0x30
	long iPriority; // 0x34
	long iParentModelNo; // 0x38
	long iParentBoneNo; // 0x3C
};
struct extension::future_asset_detail::`anonymous-namespace'::AssetMaterialSpec
{
	std::unique_ptr<char [0],std::default_delete<char [0]> > pMaterialName; // 0x0
	unsigned long uiMaterialNo; // 0x8
	long iColorNo[3]; // 0xC
	long iNormalNo; // 0x18
	long iSpecularNo; // 0x1C
	long iEmissiveNo; // 0x20
	long iReflectionNo; // 0x24
	long iEnvironmentNo; // 0x28
	long iTransparentNo; // 0x2C
	AssetMaterialSpec(extension::future_asset_detail::`anonymous-namespace'::AssetMaterialSpec &);
	AssetMaterialSpec();
	~AssetMaterialSpec();
	extension::future_asset_detail::`anonymous-namespace'::AssetMaterialSpec & operator=(extension::future_asset_detail::`anonymous-namespace'::AssetMaterialSpec &);
};
struct extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo
{
	extension::future_asset_detail::`anonymous-namespace'::AssetModelSpec modelSpec; // 0x0
	std::vector<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > materialSpecs; // 0x40
	AssetModelInfo(extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo &);
	AssetModelInfo(const extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo &);
	AssetModelInfo();
	~AssetModelInfo();
	extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo & operator=(extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo &);
	extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo & operator=(const extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo &);
};
class std::vector<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > :
	std::_Vector_alloc<std::_Vec_base_types<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > >
{
	class _Myt;
	class _Mybase;
	class allocator_type;
	struct _Alty;
	struct value_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef extension::future_asset_detail::`anonymous-namespace'::AssetMaterialSpec pointer;
	typedef const extension::future_asset_detail::`anonymous-namespace'::AssetMaterialSpec const_pointer;
	typedef extension::future_asset_detail::`anonymous-namespace'::AssetMaterialSpec reference;
	typedef const extension::future_asset_detail::`anonymous-namespace'::AssetMaterialSpec const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
public:
	vector<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> >(std::initializer_list<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec>, const std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> &);
	vector<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> >(std::vector<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > &, const std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> &);
	vector<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> >(std::vector<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > &);
	vector<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> >(const std::vector<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > &, const std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> &);
	vector<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> >(const std::vector<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > &);
	vector<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> >(unsigned long long, const extension::future_asset_detail::`anonymous-namespace'::AssetMaterialSpec &, const std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> &);
	vector<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> >(unsigned long long, const extension::future_asset_detail::`anonymous-namespace'::AssetMaterialSpec &);
	vector<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> >(unsigned long long);
	vector<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> >(const std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> &);
	vector<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> >();
	void _Construct_n(unsigned long long, const extension::future_asset_detail::`anonymous-namespace'::AssetMaterialSpec *);
	std::vector<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > & operator=(const std::vector<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > &);
	std::vector<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > & operator=(std::initializer_list<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec>);
	std::vector<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > & operator=(std::vector<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > &);
	void _Assign_rv(std::vector<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > &);
	void _Assign_rv(std::vector<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > &, std::integral_constant<bool,0>);
	void _Assign_rv(std::vector<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > &, std::integral_constant<bool,1>);
	void push_back(const extension::future_asset_detail::`anonymous-namespace'::AssetMaterialSpec &);
	void push_back(extension::future_asset_detail::`anonymous-namespace'::AssetMaterialSpec &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > >, unsigned long long, const extension::future_asset_detail::`anonymous-namespace'::AssetMaterialSpec &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > >, const extension::future_asset_detail::`anonymous-namespace'::AssetMaterialSpec &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > >, std::initializer_list<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec>);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > >, extension::future_asset_detail::`anonymous-namespace'::AssetMaterialSpec &);
	void assign(unsigned long long, const extension::future_asset_detail::`anonymous-namespace'::AssetMaterialSpec &);
	void assign(std::initializer_list<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec>);
	~vector<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> >();
	void reserve(unsigned long long);
	unsigned long long capacity();
	unsigned long long _Unused_capacity();
	unsigned long long _Has_unused_capacity();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > > begin();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > > begin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > > _Make_iter(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > >);
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > > > rbegin();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > > > rbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > > > rend();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > > > rend();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > > cbegin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > > cend();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > > > crbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > > > crend();
	void shrink_to_fit();
	void resize(unsigned long long, const extension::future_asset_detail::`anonymous-namespace'::AssetMaterialSpec &);
	void resize(unsigned long long);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> get_allocator();
	extension::future_asset_detail::`anonymous-namespace'::AssetMaterialSpec & at(unsigned long long);
	const extension::future_asset_detail::`anonymous-namespace'::AssetMaterialSpec & at(unsigned long long);
	extension::future_asset_detail::`anonymous-namespace'::AssetMaterialSpec & operator[](unsigned long long);
	const extension::future_asset_detail::`anonymous-namespace'::AssetMaterialSpec & operator[](unsigned long long);
	const extension::future_asset_detail::`anonymous-namespace'::AssetMaterialSpec * data();
	extension::future_asset_detail::`anonymous-namespace'::AssetMaterialSpec * data();
	const extension::future_asset_detail::`anonymous-namespace'::AssetMaterialSpec & front();
	extension::future_asset_detail::`anonymous-namespace'::AssetMaterialSpec & front();
	const extension::future_asset_detail::`anonymous-namespace'::AssetMaterialSpec & back();
	extension::future_asset_detail::`anonymous-namespace'::AssetMaterialSpec & back();
	void pop_back();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > >, std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > >);
	void _Pop_back_n(unsigned long long);
	void clear();
	void swap(std::vector<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > &);
protected:
	bool _Buy(unsigned long long);
	void _Destroy(extension::future_asset_detail::`anonymous-namespace'::AssetMaterialSpec *, extension::future_asset_detail::`anonymous-namespace'::AssetMaterialSpec *);
	unsigned long long _Grow_to(unsigned long long);
	bool _Inside(const extension::future_asset_detail::`anonymous-namespace'::AssetMaterialSpec *);
	void _Reallocate(unsigned long long);
	void _Reserve(unsigned long long);
	void _Tidy();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > > _Insert_n(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > >, unsigned long long, const extension::future_asset_detail::`anonymous-namespace'::AssetMaterialSpec &);
	extension::future_asset_detail::`anonymous-namespace'::AssetMaterialSpec * _Ufill(extension::future_asset_detail::`anonymous-namespace'::AssetMaterialSpec *, unsigned long long, const extension::future_asset_detail::`anonymous-namespace'::AssetMaterialSpec *);
	void _Xlen();
	void _Xran();
	void _Orphan_range(extension::future_asset_detail::`anonymous-namespace'::AssetMaterialSpec *, extension::future_asset_detail::`anonymous-namespace'::AssetMaterialSpec *);
};
class std::vector<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > :
	std::_Vector_alloc<std::_Vec_base_types<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > >
{
	class _Myt;
	class _Mybase;
	class allocator_type;
	struct _Alty;
	struct value_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef extension::future_asset_detail::`anonymous-namespace'::AssetMaterialSpec pointer;
	typedef const extension::future_asset_detail::`anonymous-namespace'::AssetMaterialSpec const_pointer;
	typedef extension::future_asset_detail::`anonymous-namespace'::AssetMaterialSpec reference;
	typedef const extension::future_asset_detail::`anonymous-namespace'::AssetMaterialSpec const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
public:
	vector<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> >(std::initializer_list<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec>, const std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> &);
	vector<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> >(std::vector<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > &, const std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> &);
	vector<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> >(std::vector<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > &);
	vector<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> >(const std::vector<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > &, const std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> &);
	vector<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> >(const std::vector<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > &);
	vector<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> >(unsigned long long, const extension::future_asset_detail::`anonymous-namespace'::AssetMaterialSpec &, const std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> &);
	vector<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> >(unsigned long long, const extension::future_asset_detail::`anonymous-namespace'::AssetMaterialSpec &);
	vector<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> >(unsigned long long);
	vector<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> >(const std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> &);
	vector<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> >();
	void _Construct_n(unsigned long long, const extension::future_asset_detail::`anonymous-namespace'::AssetMaterialSpec *);
	std::vector<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > & operator=(const std::vector<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > &);
	std::vector<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > & operator=(std::initializer_list<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec>);
	std::vector<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > & operator=(std::vector<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > &);
	void _Assign_rv(std::vector<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > &);
	void _Assign_rv(std::vector<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > &, std::integral_constant<bool,0>);
	void _Assign_rv(std::vector<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > &, std::integral_constant<bool,1>);
	void push_back(const extension::future_asset_detail::`anonymous-namespace'::AssetMaterialSpec &);
	void push_back(extension::future_asset_detail::`anonymous-namespace'::AssetMaterialSpec &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > >, unsigned long long, const extension::future_asset_detail::`anonymous-namespace'::AssetMaterialSpec &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > >, const extension::future_asset_detail::`anonymous-namespace'::AssetMaterialSpec &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > >, std::initializer_list<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec>);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > >, extension::future_asset_detail::`anonymous-namespace'::AssetMaterialSpec &);
	void assign(unsigned long long, const extension::future_asset_detail::`anonymous-namespace'::AssetMaterialSpec &);
	void assign(std::initializer_list<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec>);
	~vector<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> >();
	void reserve(unsigned long long);
	unsigned long long capacity();
	unsigned long long _Unused_capacity();
	unsigned long long _Has_unused_capacity();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > > begin();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > > begin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > > _Make_iter(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > >);
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > > > rbegin();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > > > rbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > > > rend();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > > > rend();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > > cbegin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > > cend();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > > > crbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > > > crend();
	void shrink_to_fit();
	void resize(unsigned long long, const extension::future_asset_detail::`anonymous-namespace'::AssetMaterialSpec &);
	void resize(unsigned long long);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> get_allocator();
	extension::future_asset_detail::`anonymous-namespace'::AssetMaterialSpec & at(unsigned long long);
	const extension::future_asset_detail::`anonymous-namespace'::AssetMaterialSpec & at(unsigned long long);
	extension::future_asset_detail::`anonymous-namespace'::AssetMaterialSpec & operator[](unsigned long long);
	const extension::future_asset_detail::`anonymous-namespace'::AssetMaterialSpec & operator[](unsigned long long);
	const extension::future_asset_detail::`anonymous-namespace'::AssetMaterialSpec * data();
	extension::future_asset_detail::`anonymous-namespace'::AssetMaterialSpec * data();
	const extension::future_asset_detail::`anonymous-namespace'::AssetMaterialSpec & front();
	extension::future_asset_detail::`anonymous-namespace'::AssetMaterialSpec & front();
	const extension::future_asset_detail::`anonymous-namespace'::AssetMaterialSpec & back();
	extension::future_asset_detail::`anonymous-namespace'::AssetMaterialSpec & back();
	void pop_back();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > >, std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > >);
	void _Pop_back_n(unsigned long long);
	void clear();
	void swap(std::vector<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > &);
protected:
	bool _Buy(unsigned long long);
	void _Destroy(extension::future_asset_detail::`anonymous-namespace'::AssetMaterialSpec *, extension::future_asset_detail::`anonymous-namespace'::AssetMaterialSpec *);
	unsigned long long _Grow_to(unsigned long long);
	bool _Inside(const extension::future_asset_detail::`anonymous-namespace'::AssetMaterialSpec *);
	void _Reallocate(unsigned long long);
	void _Reserve(unsigned long long);
	void _Tidy();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > > _Insert_n(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > >, unsigned long long, const extension::future_asset_detail::`anonymous-namespace'::AssetMaterialSpec &);
	extension::future_asset_detail::`anonymous-namespace'::AssetMaterialSpec * _Ufill(extension::future_asset_detail::`anonymous-namespace'::AssetMaterialSpec *, unsigned long long, const extension::future_asset_detail::`anonymous-namespace'::AssetMaterialSpec *);
	void _Xlen();
	void _Xran();
	void _Orphan_range(extension::future_asset_detail::`anonymous-namespace'::AssetMaterialSpec *, extension::future_asset_detail::`anonymous-namespace'::AssetMaterialSpec *);
};
class std::vector<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > :
	std::_Vector_alloc<std::_Vec_base_types<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > >
{
	class _Myt;
	class _Mybase;
	class allocator_type;
	struct _Alty;
	struct value_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef extension::future_asset_detail::`anonymous-namespace'::AssetMaterialSpec pointer;
	typedef const extension::future_asset_detail::`anonymous-namespace'::AssetMaterialSpec const_pointer;
	typedef extension::future_asset_detail::`anonymous-namespace'::AssetMaterialSpec reference;
	typedef const extension::future_asset_detail::`anonymous-namespace'::AssetMaterialSpec const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
public:
	vector<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> >(std::initializer_list<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec>, const std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> &);
	vector<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> >(std::vector<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > &, const std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> &);
	vector<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> >(std::vector<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > &);
	vector<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> >(const std::vector<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > &, const std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> &);
	vector<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> >(const std::vector<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > &);
	vector<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> >(unsigned long long, const extension::future_asset_detail::`anonymous-namespace'::AssetMaterialSpec &, const std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> &);
	vector<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> >(unsigned long long, const extension::future_asset_detail::`anonymous-namespace'::AssetMaterialSpec &);
	vector<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> >(unsigned long long);
	vector<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> >(const std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> &);
	vector<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> >();
	void _Construct_n(unsigned long long, const extension::future_asset_detail::`anonymous-namespace'::AssetMaterialSpec *);
	std::vector<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > & operator=(const std::vector<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > &);
	std::vector<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > & operator=(std::initializer_list<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec>);
	std::vector<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > & operator=(std::vector<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > &);
	void _Assign_rv(std::vector<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > &);
	void _Assign_rv(std::vector<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > &, std::integral_constant<bool,0>);
	void _Assign_rv(std::vector<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > &, std::integral_constant<bool,1>);
	void push_back(const extension::future_asset_detail::`anonymous-namespace'::AssetMaterialSpec &);
	void push_back(extension::future_asset_detail::`anonymous-namespace'::AssetMaterialSpec &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > >, unsigned long long, const extension::future_asset_detail::`anonymous-namespace'::AssetMaterialSpec &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > >, const extension::future_asset_detail::`anonymous-namespace'::AssetMaterialSpec &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > >, std::initializer_list<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec>);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > >, extension::future_asset_detail::`anonymous-namespace'::AssetMaterialSpec &);
	void assign(unsigned long long, const extension::future_asset_detail::`anonymous-namespace'::AssetMaterialSpec &);
	void assign(std::initializer_list<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec>);
	~vector<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> >();
	void reserve(unsigned long long);
	unsigned long long capacity();
	unsigned long long _Unused_capacity();
	unsigned long long _Has_unused_capacity();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > > begin();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > > begin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > > _Make_iter(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > >);
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > > > rbegin();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > > > rbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > > > rend();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > > > rend();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > > cbegin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > > cend();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > > > crbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > > > crend();
	void shrink_to_fit();
	void resize(unsigned long long, const extension::future_asset_detail::`anonymous-namespace'::AssetMaterialSpec &);
	void resize(unsigned long long);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> get_allocator();
	extension::future_asset_detail::`anonymous-namespace'::AssetMaterialSpec & at(unsigned long long);
	const extension::future_asset_detail::`anonymous-namespace'::AssetMaterialSpec & at(unsigned long long);
	extension::future_asset_detail::`anonymous-namespace'::AssetMaterialSpec & operator[](unsigned long long);
	const extension::future_asset_detail::`anonymous-namespace'::AssetMaterialSpec & operator[](unsigned long long);
	const extension::future_asset_detail::`anonymous-namespace'::AssetMaterialSpec * data();
	extension::future_asset_detail::`anonymous-namespace'::AssetMaterialSpec * data();
	const extension::future_asset_detail::`anonymous-namespace'::AssetMaterialSpec & front();
	extension::future_asset_detail::`anonymous-namespace'::AssetMaterialSpec & front();
	const extension::future_asset_detail::`anonymous-namespace'::AssetMaterialSpec & back();
	extension::future_asset_detail::`anonymous-namespace'::AssetMaterialSpec & back();
	void pop_back();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > >, std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > >);
	void _Pop_back_n(unsigned long long);
	void clear();
	void swap(std::vector<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > &);
protected:
	bool _Buy(unsigned long long);
	void _Destroy(extension::future_asset_detail::`anonymous-namespace'::AssetMaterialSpec *, extension::future_asset_detail::`anonymous-namespace'::AssetMaterialSpec *);
	unsigned long long _Grow_to(unsigned long long);
	bool _Inside(const extension::future_asset_detail::`anonymous-namespace'::AssetMaterialSpec *);
	void _Reallocate(unsigned long long);
	void _Reserve(unsigned long long);
	void _Tidy();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > > _Insert_n(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > >, unsigned long long, const extension::future_asset_detail::`anonymous-namespace'::AssetMaterialSpec &);
	extension::future_asset_detail::`anonymous-namespace'::AssetMaterialSpec * _Ufill(extension::future_asset_detail::`anonymous-namespace'::AssetMaterialSpec *, unsigned long long, const extension::future_asset_detail::`anonymous-namespace'::AssetMaterialSpec *);
	void _Xlen();
	void _Xran();
	void _Orphan_range(extension::future_asset_detail::`anonymous-namespace'::AssetMaterialSpec *, extension::future_asset_detail::`anonymous-namespace'::AssetMaterialSpec *);
};
class std::vector<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > :
	std::_Vector_alloc<std::_Vec_base_types<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > >
{
	class _Myt;
	class _Mybase;
	class allocator_type;
	struct _Alty;
	struct value_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef extension::future_asset_detail::`anonymous-namespace'::AssetMaterialSpec pointer;
	typedef const extension::future_asset_detail::`anonymous-namespace'::AssetMaterialSpec const_pointer;
	typedef extension::future_asset_detail::`anonymous-namespace'::AssetMaterialSpec reference;
	typedef const extension::future_asset_detail::`anonymous-namespace'::AssetMaterialSpec const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
public:
	vector<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> >(std::initializer_list<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec>, const std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> &);
	vector<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> >(std::vector<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > &, const std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> &);
	vector<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> >(std::vector<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > &);
	vector<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> >(const std::vector<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > &, const std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> &);
	vector<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> >(const std::vector<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > &);
	vector<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> >(unsigned long long, const extension::future_asset_detail::`anonymous-namespace'::AssetMaterialSpec &, const std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> &);
	vector<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> >(unsigned long long, const extension::future_asset_detail::`anonymous-namespace'::AssetMaterialSpec &);
	vector<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> >(unsigned long long);
	vector<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> >(const std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> &);
	vector<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> >();
	void _Construct_n(unsigned long long, const extension::future_asset_detail::`anonymous-namespace'::AssetMaterialSpec *);
	std::vector<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > & operator=(const std::vector<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > &);
	std::vector<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > & operator=(std::initializer_list<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec>);
	std::vector<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > & operator=(std::vector<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > &);
	void _Assign_rv(std::vector<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > &);
	void _Assign_rv(std::vector<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > &, std::integral_constant<bool,0>);
	void _Assign_rv(std::vector<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > &, std::integral_constant<bool,1>);
	void push_back(const extension::future_asset_detail::`anonymous-namespace'::AssetMaterialSpec &);
	void push_back(extension::future_asset_detail::`anonymous-namespace'::AssetMaterialSpec &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > >, unsigned long long, const extension::future_asset_detail::`anonymous-namespace'::AssetMaterialSpec &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > >, const extension::future_asset_detail::`anonymous-namespace'::AssetMaterialSpec &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > >, std::initializer_list<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec>);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > >, extension::future_asset_detail::`anonymous-namespace'::AssetMaterialSpec &);
	void assign(unsigned long long, const extension::future_asset_detail::`anonymous-namespace'::AssetMaterialSpec &);
	void assign(std::initializer_list<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec>);
	~vector<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> >();
	void reserve(unsigned long long);
	unsigned long long capacity();
	unsigned long long _Unused_capacity();
	unsigned long long _Has_unused_capacity();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > > begin();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > > begin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > > _Make_iter(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > >);
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > > > rbegin();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > > > rbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > > > rend();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > > > rend();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > > cbegin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > > cend();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > > > crbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > > > crend();
	void shrink_to_fit();
	void resize(unsigned long long, const extension::future_asset_detail::`anonymous-namespace'::AssetMaterialSpec &);
	void resize(unsigned long long);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> get_allocator();
	extension::future_asset_detail::`anonymous-namespace'::AssetMaterialSpec & at(unsigned long long);
	const extension::future_asset_detail::`anonymous-namespace'::AssetMaterialSpec & at(unsigned long long);
	extension::future_asset_detail::`anonymous-namespace'::AssetMaterialSpec & operator[](unsigned long long);
	const extension::future_asset_detail::`anonymous-namespace'::AssetMaterialSpec & operator[](unsigned long long);
	const extension::future_asset_detail::`anonymous-namespace'::AssetMaterialSpec * data();
	extension::future_asset_detail::`anonymous-namespace'::AssetMaterialSpec * data();
	const extension::future_asset_detail::`anonymous-namespace'::AssetMaterialSpec & front();
	extension::future_asset_detail::`anonymous-namespace'::AssetMaterialSpec & front();
	const extension::future_asset_detail::`anonymous-namespace'::AssetMaterialSpec & back();
	extension::future_asset_detail::`anonymous-namespace'::AssetMaterialSpec & back();
	void pop_back();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > >, std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > >);
	void _Pop_back_n(unsigned long long);
	void clear();
	void swap(std::vector<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > &);
protected:
	bool _Buy(unsigned long long);
	void _Destroy(extension::future_asset_detail::`anonymous-namespace'::AssetMaterialSpec *, extension::future_asset_detail::`anonymous-namespace'::AssetMaterialSpec *);
	unsigned long long _Grow_to(unsigned long long);
	bool _Inside(const extension::future_asset_detail::`anonymous-namespace'::AssetMaterialSpec *);
	void _Reallocate(unsigned long long);
	void _Reserve(unsigned long long);
	void _Tidy();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > > _Insert_n(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec> > >, unsigned long long, const extension::future_asset_detail::`anonymous-namespace'::AssetMaterialSpec &);
	extension::future_asset_detail::`anonymous-namespace'::AssetMaterialSpec * _Ufill(extension::future_asset_detail::`anonymous-namespace'::AssetMaterialSpec *, unsigned long long, const extension::future_asset_detail::`anonymous-namespace'::AssetMaterialSpec *);
	void _Xlen();
	void _Xran();
	void _Orphan_range(extension::future_asset_detail::`anonymous-namespace'::AssetMaterialSpec *, extension::future_asset_detail::`anonymous-namespace'::AssetMaterialSpec *);
};
class extension::FutureObjectJob<extension::AsyncFileImage> :
	extension::ExThread::Runnable,
	extension::AsyncContentConstants,
	extension::FutureObjectSpec
{
public:
	FutureObjectJob<extension::AsyncFileImage>(extension::RefCountablePtr<extension::AsyncContent<extension::AsyncFileImage> >);
private:
	FutureObjectJob<extension::AsyncFileImage>(const extension::FutureObjectJob<extension::AsyncFileImage> &);
	extension::FutureObjectJob<extension::AsyncFileImage> & operator=(const extension::FutureObjectJob<extension::AsyncFileImage> &);
	class ContentSharedPtr_t;
public:
	virtual ~FutureObjectJob<extension::AsyncFileImage>();
	void setResult(std::unique_ptr<extension::AsyncFileImage,std::default_delete<extension::AsyncFileImage> > &);
	void setErrorResult(extension::AsyncContentConstants::ErrorCode);
	const std::string & contentPath();
	bool isCancelRequested();
	extension::RefCountablePtr<extension::AsyncContent<extension::AsyncFileImage> > releaseContent();
	long run() = 0;
private:
	std::unique_ptr<extension::AsyncFileImage,std::default_delete<extension::AsyncFileImage> > createOnErrorData();
	extension::RefCountablePtr<extension::AsyncContent<extension::AsyncFileImage> > m_content; // 0x18
};
class extension::future_asset_detail::FutureFileImageJob :
	extension::FutureObjectJob<extension::AsyncFileImage>
{
	class Base_t;
public:
	FutureFileImageJob(extension::RefCountablePtr<extension::AsyncContent<extension::AsyncFileImage> >);
	virtual long run();
	virtual ~FutureFileImageJob();
};
extension::future_asset_detail::FutureFileImageJob::FutureFileImageJob(extension::RefCountablePtr<extension::AsyncContent<extension::AsyncFileImage> > c); // 0x140248AB0
long extension::future_asset_detail::FutureFileImageJob::run(); // 0x140248B30
extension::AsyncContentConstants::ErrorCode extension::future_asset_detail::FutureFileImageJob::ReadFileImage<extension::AsyncFileImage>(extension::FutureObjectJob<extension::AsyncFileImage> & self, std::unique_ptr<extension::AsyncFileImage,std::default_delete<extension::AsyncFileImage> > & fileImage); // 0x140255BB0
void extension::future_asset_detail::EnqueueFutureFileImageJob(extension::RefCountablePtr<extension::AsyncContent<extension::AsyncFileImage> > shared); // 0x140248C30
class extension::FutureObjectJob<OGLTexture> :
	extension::ExThread::Runnable,
	extension::AsyncContentConstants,
	extension::FutureObjectSpec
{
public:
	FutureObjectJob<OGLTexture>(extension::RefCountablePtr<extension::AsyncContent<OGLTexture> >);
private:
	FutureObjectJob<OGLTexture>(const extension::FutureObjectJob<OGLTexture> &);
	extension::FutureObjectJob<OGLTexture> & operator=(const extension::FutureObjectJob<OGLTexture> &);
	class ContentSharedPtr_t;
public:
	virtual ~FutureObjectJob<OGLTexture>();
	void setResult(std::unique_ptr<OGLTexture,std::default_delete<OGLTexture> > &);
	void setErrorResult(extension::AsyncContentConstants::ErrorCode);
	const std::string & contentPath();
	bool isCancelRequested();
	extension::RefCountablePtr<extension::AsyncContent<OGLTexture> > releaseContent();
	long run() = 0;
private:
	std::unique_ptr<OGLTexture,std::default_delete<OGLTexture> > createOnErrorData();
	extension::RefCountablePtr<extension::AsyncContent<OGLTexture> > m_content; // 0x18
};
class extension::future_asset_detail::FutureTextureJob :
	extension::FutureObjectJob<OGLTexture>
{
	class Base_t;
private:
	extension::FutureTextureOption m_createOption; // 0x20
public:
	FutureTextureJob(extension::RefCountablePtr<extension::AsyncContent<OGLTexture> >, const extension::FutureTextureOption *);
	virtual long run();
	virtual ~FutureTextureJob();
};
extension::future_asset_detail::FutureTextureJob::FutureTextureJob(extension::RefCountablePtr<extension::AsyncContent<OGLTexture> > c, const extension::FutureTextureOption * opt); // 0x140248D20
<lambda_224f2aff27d484af60707df2a7dcfac8>::~<lambda_224f2aff27d484af60707df2a7dcfac8>(); // 0x140124610
std::_LaunchPad<std::unique_ptr<std::tuple<<lambda_224f2aff27d484af60707df2a7dcfac8> >,std::default_delete<std::tuple<<lambda_224f2aff27d484af60707df2a7dcfac8> > > > >::~_LaunchPad<std::unique_ptr<std::tuple<<lambda_224f2aff27d484af60707df2a7dcfac8> >,std::default_delete<std::tuple<<lambda_224f2aff27d484af60707df2a7dcfac8> > > > >(); // 0x140257590
std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,OGLModel * __ptr64,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,OGLModel * __ptr64> > >::~map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,OGLModel * __ptr64,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,OGLModel * __ptr64> > >(); // 0x14007B9E0
long extension::future_asset_detail::FutureTextureJob::run(); // 0x140248E40
void extension::future_asset_detail::EnqueueFutureTextureJob(extension::RefCountablePtr<extension::AsyncContent<OGLTexture> > shared, const extension::FutureTextureOption * opt); // 0x140248FA0
class extension::FutureObjectJob<OGLFigure> :
	extension::ExThread::Runnable,
	extension::AsyncContentConstants,
	extension::FutureObjectSpec
{
public:
	FutureObjectJob<OGLFigure>(extension::RefCountablePtr<extension::AsyncContent<OGLFigure> >);
private:
	FutureObjectJob<OGLFigure>(const extension::FutureObjectJob<OGLFigure> &);
	extension::FutureObjectJob<OGLFigure> & operator=(const extension::FutureObjectJob<OGLFigure> &);
	class ContentSharedPtr_t;
public:
	virtual ~FutureObjectJob<OGLFigure>();
	void setResult(std::unique_ptr<OGLFigure,std::default_delete<OGLFigure> > &);
	void setErrorResult(extension::AsyncContentConstants::ErrorCode);
	const std::string & contentPath();
	bool isCancelRequested();
	extension::RefCountablePtr<extension::AsyncContent<OGLFigure> > releaseContent();
	long run() = 0;
private:
	std::unique_ptr<OGLFigure,std::default_delete<OGLFigure> > createOnErrorData();
	extension::RefCountablePtr<extension::AsyncContent<OGLFigure> > m_content; // 0x18
};
class extension::future_asset_detail::FutureFigureJob :
	extension::FutureObjectJob<OGLFigure>
{
	class Base_t;
private:
	extension::FutureFigureOption m_createOption; // 0x20
public:
	FutureFigureJob(extension::RefCountablePtr<extension::AsyncContent<OGLFigure> >, const extension::FutureFigureOption *);
	virtual long run();
	virtual ~FutureFigureJob();
};
extension::future_asset_detail::FutureFigureJob::FutureFigureJob(extension::RefCountablePtr<extension::AsyncContent<OGLFigure> > c, const extension::FutureFigureOption * opt); // 0x140249090
long extension::future_asset_detail::FutureFigureJob::run(); // 0x140249160
void extension::future_asset_detail::EnqueueFutureFigureJob(extension::RefCountablePtr<extension::AsyncContent<OGLFigure> > shared, const extension::FutureFigureOption * opt); // 0x140249640
class extension::FutureObjectJob<OGLMotion> :
	extension::ExThread::Runnable,
	extension::AsyncContentConstants,
	extension::FutureObjectSpec
{
public:
	FutureObjectJob<OGLMotion>(extension::RefCountablePtr<extension::AsyncContent<OGLMotion> >);
private:
	FutureObjectJob<OGLMotion>(const extension::FutureObjectJob<OGLMotion> &);
	extension::FutureObjectJob<OGLMotion> & operator=(const extension::FutureObjectJob<OGLMotion> &);
	class ContentSharedPtr_t;
public:
	virtual ~FutureObjectJob<OGLMotion>();
	void setResult(std::unique_ptr<OGLMotion,std::default_delete<OGLMotion> > &);
	void setErrorResult(extension::AsyncContentConstants::ErrorCode);
	const std::string & contentPath();
	bool isCancelRequested();
	extension::RefCountablePtr<extension::AsyncContent<OGLMotion> > releaseContent();
	long run() = 0;
private:
	std::unique_ptr<OGLMotion,std::default_delete<OGLMotion> > createOnErrorData();
	extension::RefCountablePtr<extension::AsyncContent<OGLMotion> > m_content; // 0x18
};
class extension::future_asset_detail::FutureMotionJob :
	extension::FutureObjectJob<OGLMotion>
{
	class Base_t;
public:
	FutureMotionJob(extension::RefCountablePtr<extension::AsyncContent<OGLMotion> >);
	virtual long run();
	virtual ~FutureMotionJob();
};
extension::future_asset_detail::FutureMotionJob::FutureMotionJob(extension::RefCountablePtr<extension::AsyncContent<OGLMotion> > c); // 0x140249740
long extension::future_asset_detail::FutureMotionJob::run(); // 0x1402497C0
void extension::future_asset_detail::EnqueueFutureMotionJob(extension::RefCountablePtr<extension::AsyncContent<OGLMotion> > shared); // 0x140249A90
class extension::FutureObjectJob<OGLMirror> :
	extension::ExThread::Runnable,
	extension::AsyncContentConstants,
	extension::FutureObjectSpec
{
public:
	FutureObjectJob<OGLMirror>(extension::RefCountablePtr<extension::AsyncContent<OGLMirror> >);
private:
	FutureObjectJob<OGLMirror>(const extension::FutureObjectJob<OGLMirror> &);
	extension::FutureObjectJob<OGLMirror> & operator=(const extension::FutureObjectJob<OGLMirror> &);
	class ContentSharedPtr_t;
public:
	virtual ~FutureObjectJob<OGLMirror>();
	void setResult(std::unique_ptr<OGLMirror,std::default_delete<OGLMirror> > &);
	void setErrorResult(extension::AsyncContentConstants::ErrorCode);
	const std::string & contentPath();
	bool isCancelRequested();
	extension::RefCountablePtr<extension::AsyncContent<OGLMirror> > releaseContent();
	long run() = 0;
private:
	std::unique_ptr<OGLMirror,std::default_delete<OGLMirror> > createOnErrorData();
	extension::RefCountablePtr<extension::AsyncContent<OGLMirror> > m_content; // 0x18
};
class extension::future_asset_detail::FutureMirrorJob :
	extension::FutureObjectJob<OGLMirror>
{
	class Base_t;
public:
	FutureMirrorJob(extension::RefCountablePtr<extension::AsyncContent<OGLMirror> >);
	virtual long run();
	virtual ~FutureMirrorJob();
};
extension::future_asset_detail::FutureMirrorJob::FutureMirrorJob(extension::RefCountablePtr<extension::AsyncContent<OGLMirror> > c); // 0x140249B80
long extension::future_asset_detail::FutureMirrorJob::run(); // 0x140249C00
void extension::future_asset_detail::EnqueueFutureMirrorJob(extension::RefCountablePtr<extension::AsyncContent<OGLMirror> > shared); // 0x140249ED0
class extension::FutureObjectJob<OGLCamera> :
	extension::ExThread::Runnable,
	extension::AsyncContentConstants,
	extension::FutureObjectSpec
{
public:
	FutureObjectJob<OGLCamera>(extension::RefCountablePtr<extension::AsyncContent<OGLCamera> >);
private:
	FutureObjectJob<OGLCamera>(const extension::FutureObjectJob<OGLCamera> &);
	extension::FutureObjectJob<OGLCamera> & operator=(const extension::FutureObjectJob<OGLCamera> &);
	class ContentSharedPtr_t;
public:
	virtual ~FutureObjectJob<OGLCamera>();
	void setResult(std::unique_ptr<OGLCamera,std::default_delete<OGLCamera> > &);
	void setErrorResult(extension::AsyncContentConstants::ErrorCode);
	const std::string & contentPath();
	bool isCancelRequested();
	extension::RefCountablePtr<extension::AsyncContent<OGLCamera> > releaseContent();
	long run() = 0;
private:
	std::unique_ptr<OGLCamera,std::default_delete<OGLCamera> > createOnErrorData();
	extension::RefCountablePtr<extension::AsyncContent<OGLCamera> > m_content; // 0x18
};
class extension::future_asset_detail::FutureCameraJob :
	extension::FutureObjectJob<OGLCamera>
{
	class Base_t;
public:
	FutureCameraJob(extension::RefCountablePtr<extension::AsyncContent<OGLCamera> >);
	virtual long run();
	virtual ~FutureCameraJob();
};
extension::future_asset_detail::FutureCameraJob::FutureCameraJob(extension::RefCountablePtr<extension::AsyncContent<OGLCamera> > c); // 0x140249FC0
long extension::future_asset_detail::FutureCameraJob::run(); // 0x14024A0A0
class extension::FutureObjectJob<OGLSecondary> :
	extension::ExThread::Runnable,
	extension::AsyncContentConstants,
	extension::FutureObjectSpec
{
public:
	FutureObjectJob<OGLSecondary>(extension::RefCountablePtr<extension::AsyncContent<OGLSecondary> >);
private:
	FutureObjectJob<OGLSecondary>(const extension::FutureObjectJob<OGLSecondary> &);
	extension::FutureObjectJob<OGLSecondary> & operator=(const extension::FutureObjectJob<OGLSecondary> &);
	class ContentSharedPtr_t;
public:
	virtual ~FutureObjectJob<OGLSecondary>();
	void setResult(std::unique_ptr<OGLSecondary,std::default_delete<OGLSecondary> > &);
	void setErrorResult(extension::AsyncContentConstants::ErrorCode);
	const std::string & contentPath();
	bool isCancelRequested();
	extension::RefCountablePtr<extension::AsyncContent<OGLSecondary> > releaseContent();
	long run() = 0;
private:
	std::unique_ptr<OGLSecondary,std::default_delete<OGLSecondary> > createOnErrorData();
	extension::RefCountablePtr<extension::AsyncContent<OGLSecondary> > m_content; // 0x18
};
class extension::future_asset_detail::FutureSecondaryJob :
	extension::FutureObjectJob<OGLSecondary>
{
	class Base_t;
public:
	FutureSecondaryJob(extension::RefCountablePtr<extension::AsyncContent<OGLSecondary> >);
	virtual long run();
	virtual ~FutureSecondaryJob();
};
extension::future_asset_detail::FutureSecondaryJob::FutureSecondaryJob(extension::RefCountablePtr<extension::AsyncContent<OGLSecondary> > c); // 0x14024A390
long extension::future_asset_detail::FutureSecondaryJob::run(); // 0x14024A410
void extension::future_asset_detail::EnqueueFutureCameraJob(extension::RefCountablePtr<extension::AsyncContent<OGLCamera> > shared); // 0x14024A6E0
void extension::future_asset_detail::EnqueueFutureSecondaryJob(extension::RefCountablePtr<extension::AsyncContent<OGLSecondary> > shared); // 0x14024A7C0
class extension::FutureObjectJob<Image> :
	extension::ExThread::Runnable,
	extension::AsyncContentConstants,
	extension::FutureObjectSpec
{
public:
	FutureObjectJob<Image>(extension::RefCountablePtr<extension::AsyncContent<Image> >);
private:
	FutureObjectJob<Image>(const extension::FutureObjectJob<Image> &);
	extension::FutureObjectJob<Image> & operator=(const extension::FutureObjectJob<Image> &);
	class ContentSharedPtr_t;
public:
	virtual ~FutureObjectJob<Image>();
	void setResult(std::unique_ptr<Image,std::default_delete<Image> > &);
	void setErrorResult(extension::AsyncContentConstants::ErrorCode);
	const std::string & contentPath();
	bool isCancelRequested();
	extension::RefCountablePtr<extension::AsyncContent<Image> > releaseContent();
	long run() = 0;
private:
	std::unique_ptr<Image,std::default_delete<Image> > createOnErrorData();
	extension::RefCountablePtr<extension::AsyncContent<Image> > m_content; // 0x18
};
class extension::future_asset_detail::FutureImageJob :
	extension::FutureObjectJob<Image>
{
	class Base_t;
private:
	extension::FutureImageOption m_createOption; // 0x20
public:
	FutureImageJob(extension::RefCountablePtr<extension::AsyncContent<Image> >, const extension::FutureImageOption *);
	virtual long run();
	virtual ~FutureImageJob();
};
extension::future_asset_detail::FutureImageJob::FutureImageJob(extension::RefCountablePtr<extension::AsyncContent<Image> > c, const extension::FutureImageOption * opt); // 0x14024A8B0
long extension::future_asset_detail::FutureImageJob::run(); // 0x14024A9C0
void extension::future_asset_detail::EnqueueFutureImageJob(extension::RefCountablePtr<extension::AsyncContent<Image> > shared, const extension::FutureImageOption * opt); // 0x14024AB40
class extension::FutureObjectJob<extension::AsyncAsset> :
	extension::ExThread::Runnable,
	extension::AsyncContentConstants,
	extension::FutureObjectSpec
{
public:
	FutureObjectJob<extension::AsyncAsset>(extension::RefCountablePtr<extension::AsyncContent<extension::AsyncAsset> >);
private:
	FutureObjectJob<extension::AsyncAsset>(const extension::FutureObjectJob<extension::AsyncAsset> &);
	extension::FutureObjectJob<extension::AsyncAsset> & operator=(const extension::FutureObjectJob<extension::AsyncAsset> &);
	class ContentSharedPtr_t;
public:
	virtual ~FutureObjectJob<extension::AsyncAsset>();
	void setResult(std::unique_ptr<extension::AsyncAsset,std::default_delete<extension::AsyncAsset> > &);
	void setErrorResult(extension::AsyncContentConstants::ErrorCode);
	const std::string & contentPath();
	bool isCancelRequested();
	extension::RefCountablePtr<extension::AsyncContent<extension::AsyncAsset> > releaseContent();
	long run() = 0;
private:
	std::unique_ptr<extension::AsyncAsset,std::default_delete<extension::AsyncAsset> > createOnErrorData();
	extension::RefCountablePtr<extension::AsyncContent<extension::AsyncAsset> > m_content; // 0x18
};
class extension::future_asset_detail::FutureAssetJob :
	extension::FutureObjectJob<extension::AsyncAsset>
{
	class Base_t;
private:
	extension::FutureAssetOption m_createOption; // 0x20
	virtual std::unique_ptr<extension::AsyncAsset,std::default_delete<extension::AsyncAsset> > createOnErrorData();
	struct FileSpec;
public:
	FutureAssetJob(extension::RefCountablePtr<extension::AsyncContent<extension::AsyncAsset> >, const extension::FutureAssetOption *);
	virtual long run();
	virtual ~FutureAssetJob();
};
std::unique_ptr<extension::AsyncAsset,std::default_delete<extension::AsyncAsset> > extension::future_asset_detail::AsyncAssetModelBuilder::createOnErrorData(); // 0x14024AC30
struct extension::future_asset_detail::FutureAssetJob::FileSpec
{
	long uiFileType; // 0x0
	std::basic_string<char,std::char_traits<char>,std::allocator<char> > filePath; // 0x8
	long iFileTypeIndex; // 0x28
	FileSpec(extension::future_asset_detail::FutureAssetJob::FileSpec &);
	FileSpec(const extension::future_asset_detail::FutureAssetJob::FileSpec &);
	FileSpec();
	~FileSpec();
	extension::future_asset_detail::FutureAssetJob::FileSpec & operator=(extension::future_asset_detail::FutureAssetJob::FileSpec &);
	extension::future_asset_detail::FutureAssetJob::FileSpec & operator=(const extension::future_asset_detail::FutureAssetJob::FileSpec &);
};
extension::future_asset_detail::FutureAssetJob::FutureAssetJob(extension::RefCountablePtr<extension::AsyncContent<extension::AsyncAsset> > c, const extension::FutureAssetOption * opt); // 0x14024AC70
void extension::future_asset_detail::EnqueueFutureAssetJob(extension::RefCountablePtr<extension::AsyncContent<extension::AsyncAsset> > shared, const extension::FutureAssetOption * opt); // 0x14024AE30
class extension::FutureObjectJob<OGLCurve> :
	extension::ExThread::Runnable,
	extension::AsyncContentConstants,
	extension::FutureObjectSpec
{
public:
	FutureObjectJob<OGLCurve>(extension::RefCountablePtr<extension::AsyncContent<OGLCurve> >);
private:
	FutureObjectJob<OGLCurve>(const extension::FutureObjectJob<OGLCurve> &);
	extension::FutureObjectJob<OGLCurve> & operator=(const extension::FutureObjectJob<OGLCurve> &);
	class ContentSharedPtr_t;
public:
	virtual ~FutureObjectJob<OGLCurve>();
	void setResult(std::unique_ptr<OGLCurve,std::default_delete<OGLCurve> > &);
	void setErrorResult(extension::AsyncContentConstants::ErrorCode);
	const std::string & contentPath();
	bool isCancelRequested();
	extension::RefCountablePtr<extension::AsyncContent<OGLCurve> > releaseContent();
	long run() = 0;
private:
	std::unique_ptr<OGLCurve,std::default_delete<OGLCurve> > createOnErrorData();
	extension::RefCountablePtr<extension::AsyncContent<OGLCurve> > m_content; // 0x18
};
class extension::future_asset_detail::FutureCurveJob :
	extension::FutureObjectJob<OGLCurve>
{
	class Base_t;
public:
	FutureCurveJob(extension::RefCountablePtr<extension::AsyncContent<OGLCurve> >);
	virtual long run();
	virtual ~FutureCurveJob();
};
extension::future_asset_detail::FutureCurveJob::FutureCurveJob(extension::RefCountablePtr<extension::AsyncContent<OGLCurve> > c); // 0x14024AF30
long extension::future_asset_detail::FutureCurveJob::run(); // 0x14024B010
void extension::future_asset_detail::EnqueueFutureCurveJob(extension::RefCountablePtr<extension::AsyncContent<OGLCurve> > shared); // 0x14024B2D0
class extension::future_asset_detail::AsyncAssetModelBuilder :
	extension::FutureObjectJob<extension::AsyncAsset>
{
	class Base_t;
private:
	virtual std::unique_ptr<extension::AsyncAsset,std::default_delete<extension::AsyncAsset> > createOnErrorData();
public:
	AsyncAssetModelBuilder(extension::RefCountablePtr<extension::AsyncContent<extension::AsyncAsset> >);
	virtual ~AsyncAssetModelBuilder();
	virtual long run();
private:
	OGLModel * buildModel(const extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo &);
	void setMaterialMap(OGLModel &, long, long, long);
	void applyShaderFx();
	long m_formatVersion; // 0x20
	bool m_optDisableShaderFXMaterialLight; // 0x24
	std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_effPath; // 0x28
	std::vector<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > m_modelInfos; // 0x48
	std::vector<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>,std::allocator<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> > > m_figures; // 0x60
	std::vector<extension::BasicFutureObject<OGLMotion,void>,std::allocator<extension::BasicFutureObject<OGLMotion,void> > > m_motions; // 0x78
	std::vector<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>,std::allocator<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> > > m_textures; // 0x90
	std::vector<extension::BasicFutureObject<OGLMirror,void>,std::allocator<extension::BasicFutureObject<OGLMirror,void> > > m_mirrors; // 0xA8
	std::vector<extension::BasicFutureObject<OGLCamera,void>,std::allocator<extension::BasicFutureObject<OGLCamera,void> > > m_cameras; // 0xC0
	std::vector<extension::BasicFutureObject<OGLSecondary,void>,std::allocator<extension::BasicFutureObject<OGLSecondary,void> > > m_secondaries; // 0xD8
	std::vector<std::unique_ptr<OGLModel,std::default_delete<OGLModel> >,std::allocator<std::unique_ptr<OGLModel,std::default_delete<OGLModel> > > > m_models; // 0xF0
	std::vector<extension::BasicFutureObject<extension::AsyncFileImage,void>,std::allocator<extension::BasicFutureObject<extension::AsyncFileImage,void> > > m_shaderFXFiles; // 0x108
	std::unique_ptr<EffectDataListManager,std::default_delete<EffectDataListManager> > m_effect; // 0x120
};
extension::future_asset_detail::AsyncAssetModelBuilder::AsyncAssetModelBuilder(extension::RefCountablePtr<extension::AsyncContent<extension::AsyncAsset> > shared); // 0x14024B3B0
class std::vector<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > :
	std::_Vector_alloc<std::_Vec_base_types<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > >
{
	class _Myt;
	class _Mybase;
	class allocator_type;
	struct _Alty;
	struct value_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo pointer;
	typedef const extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo const_pointer;
	typedef extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo reference;
	typedef const extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
public:
	vector<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> >(std::initializer_list<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo>, const std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> &);
	vector<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> >(std::vector<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > &, const std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> &);
	vector<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> >(std::vector<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > &);
	vector<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> >(const std::vector<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > &, const std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> &);
	vector<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> >(const std::vector<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > &);
	vector<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> >(unsigned long long, const extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo &, const std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> &);
	vector<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> >(unsigned long long, const extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo &);
	vector<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> >(unsigned long long);
	vector<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> >(const std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> &);
	vector<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> >();
	void _Construct_n(unsigned long long, const extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo *);
	std::vector<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > & operator=(const std::vector<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > &);
	std::vector<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > & operator=(std::initializer_list<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo>);
	std::vector<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > & operator=(std::vector<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > &);
	void _Assign_rv(std::vector<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > &);
	void _Assign_rv(std::vector<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > &, std::integral_constant<bool,0>);
	void _Assign_rv(std::vector<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > &, std::integral_constant<bool,1>);
	void push_back(const extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo &);
	void push_back(extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > >, unsigned long long, const extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > >, const extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > >, std::initializer_list<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo>);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > >, extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo &);
	void assign(unsigned long long, const extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo &);
	void assign(std::initializer_list<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo>);
	~vector<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> >();
	void reserve(unsigned long long);
	unsigned long long capacity();
	unsigned long long _Unused_capacity();
	unsigned long long _Has_unused_capacity();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > > begin();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > > begin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > > _Make_iter(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > >);
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > > > rbegin();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > > > rbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > > > rend();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > > > rend();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > > cbegin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > > cend();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > > > crbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > > > crend();
	void shrink_to_fit();
	void resize(unsigned long long, const extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo &);
	void resize(unsigned long long);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> get_allocator();
	extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo & at(unsigned long long);
	const extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo & at(unsigned long long);
	extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo & operator[](unsigned long long);
	const extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo & operator[](unsigned long long);
	const extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo * data();
	extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo * data();
	const extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo & front();
	extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo & front();
	const extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo & back();
	extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo & back();
	void pop_back();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > >, std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > >);
	void _Pop_back_n(unsigned long long);
	void clear();
	void swap(std::vector<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > &);
protected:
	bool _Buy(unsigned long long);
	void _Destroy(extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo *, extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo *);
	unsigned long long _Grow_to(unsigned long long);
	bool _Inside(const extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo *);
	void _Reallocate(unsigned long long);
	void _Reserve(unsigned long long);
	void _Tidy();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > > _Insert_n(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > >, unsigned long long, const extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo &);
	extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo * _Ufill(extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo *, unsigned long long, const extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo *);
	void _Xlen();
	void _Xran();
	void _Orphan_range(extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo *, extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo *);
};
class std::vector<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > :
	std::_Vector_alloc<std::_Vec_base_types<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > >
{
	class _Myt;
	class _Mybase;
	class allocator_type;
	struct _Alty;
	struct value_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo pointer;
	typedef const extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo const_pointer;
	typedef extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo reference;
	typedef const extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
public:
	vector<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> >(std::initializer_list<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo>, const std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> &);
	vector<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> >(std::vector<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > &, const std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> &);
	vector<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> >(std::vector<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > &);
	vector<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> >(const std::vector<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > &, const std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> &);
	vector<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> >(const std::vector<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > &);
	vector<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> >(unsigned long long, const extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo &, const std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> &);
	vector<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> >(unsigned long long, const extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo &);
	vector<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> >(unsigned long long);
	vector<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> >(const std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> &);
	vector<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> >();
	void _Construct_n(unsigned long long, const extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo *);
	std::vector<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > & operator=(const std::vector<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > &);
	std::vector<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > & operator=(std::initializer_list<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo>);
	std::vector<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > & operator=(std::vector<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > &);
	void _Assign_rv(std::vector<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > &);
	void _Assign_rv(std::vector<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > &, std::integral_constant<bool,0>);
	void _Assign_rv(std::vector<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > &, std::integral_constant<bool,1>);
	void push_back(const extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo &);
	void push_back(extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > >, unsigned long long, const extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > >, const extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > >, std::initializer_list<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo>);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > >, extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo &);
	void assign(unsigned long long, const extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo &);
	void assign(std::initializer_list<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo>);
	~vector<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> >();
	void reserve(unsigned long long);
	unsigned long long capacity();
	unsigned long long _Unused_capacity();
	unsigned long long _Has_unused_capacity();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > > begin();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > > begin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > > _Make_iter(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > >);
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > > > rbegin();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > > > rbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > > > rend();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > > > rend();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > > cbegin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > > cend();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > > > crbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > > > crend();
	void shrink_to_fit();
	void resize(unsigned long long, const extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo &);
	void resize(unsigned long long);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> get_allocator();
	extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo & at(unsigned long long);
	const extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo & at(unsigned long long);
	extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo & operator[](unsigned long long);
	const extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo & operator[](unsigned long long);
	const extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo * data();
	extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo * data();
	const extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo & front();
	extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo & front();
	const extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo & back();
	extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo & back();
	void pop_back();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > >, std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > >);
	void _Pop_back_n(unsigned long long);
	void clear();
	void swap(std::vector<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > &);
protected:
	bool _Buy(unsigned long long);
	void _Destroy(extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo *, extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo *);
	unsigned long long _Grow_to(unsigned long long);
	bool _Inside(const extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo *);
	void _Reallocate(unsigned long long);
	void _Reserve(unsigned long long);
	void _Tidy();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > > _Insert_n(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > >, unsigned long long, const extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo &);
	extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo * _Ufill(extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo *, unsigned long long, const extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo *);
	void _Xlen();
	void _Xran();
	void _Orphan_range(extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo *, extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo *);
};
class std::vector<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > :
	std::_Vector_alloc<std::_Vec_base_types<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > >
{
	class _Myt;
	class _Mybase;
	class allocator_type;
	struct _Alty;
	struct value_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo pointer;
	typedef const extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo const_pointer;
	typedef extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo reference;
	typedef const extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
public:
	vector<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> >(std::initializer_list<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo>, const std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> &);
	vector<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> >(std::vector<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > &, const std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> &);
	vector<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> >(std::vector<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > &);
	vector<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> >(const std::vector<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > &, const std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> &);
	vector<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> >(const std::vector<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > &);
	vector<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> >(unsigned long long, const extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo &, const std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> &);
	vector<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> >(unsigned long long, const extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo &);
	vector<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> >(unsigned long long);
	vector<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> >(const std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> &);
	vector<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> >();
	void _Construct_n(unsigned long long, const extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo *);
	std::vector<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > & operator=(const std::vector<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > &);
	std::vector<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > & operator=(std::initializer_list<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo>);
	std::vector<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > & operator=(std::vector<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > &);
	void _Assign_rv(std::vector<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > &);
	void _Assign_rv(std::vector<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > &, std::integral_constant<bool,0>);
	void _Assign_rv(std::vector<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > &, std::integral_constant<bool,1>);
	void push_back(const extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo &);
	void push_back(extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > >, unsigned long long, const extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > >, const extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > >, std::initializer_list<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo>);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > >, extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo &);
	void assign(unsigned long long, const extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo &);
	void assign(std::initializer_list<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo>);
	~vector<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> >();
	void reserve(unsigned long long);
	unsigned long long capacity();
	unsigned long long _Unused_capacity();
	unsigned long long _Has_unused_capacity();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > > begin();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > > begin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > > _Make_iter(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > >);
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > > > rbegin();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > > > rbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > > > rend();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > > > rend();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > > cbegin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > > cend();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > > > crbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > > > crend();
	void shrink_to_fit();
	void resize(unsigned long long, const extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo &);
	void resize(unsigned long long);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> get_allocator();
	extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo & at(unsigned long long);
	const extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo & at(unsigned long long);
	extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo & operator[](unsigned long long);
	const extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo & operator[](unsigned long long);
	const extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo * data();
	extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo * data();
	const extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo & front();
	extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo & front();
	const extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo & back();
	extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo & back();
	void pop_back();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > >, std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > >);
	void _Pop_back_n(unsigned long long);
	void clear();
	void swap(std::vector<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > &);
protected:
	bool _Buy(unsigned long long);
	void _Destroy(extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo *, extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo *);
	unsigned long long _Grow_to(unsigned long long);
	bool _Inside(const extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo *);
	void _Reallocate(unsigned long long);
	void _Reserve(unsigned long long);
	void _Tidy();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > > _Insert_n(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > >, unsigned long long, const extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo &);
	extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo * _Ufill(extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo *, unsigned long long, const extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo *);
	void _Xlen();
	void _Xran();
	void _Orphan_range(extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo *, extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo *);
};
class std::vector<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > :
	std::_Vector_alloc<std::_Vec_base_types<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > >
{
	class _Myt;
	class _Mybase;
	class allocator_type;
	struct _Alty;
	struct value_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo pointer;
	typedef const extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo const_pointer;
	typedef extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo reference;
	typedef const extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
public:
	vector<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> >(std::initializer_list<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo>, const std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> &);
	vector<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> >(std::vector<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > &, const std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> &);
	vector<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> >(std::vector<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > &);
	vector<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> >(const std::vector<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > &, const std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> &);
	vector<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> >(const std::vector<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > &);
	vector<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> >(unsigned long long, const extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo &, const std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> &);
	vector<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> >(unsigned long long, const extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo &);
	vector<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> >(unsigned long long);
	vector<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> >(const std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> &);
	vector<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> >();
	void _Construct_n(unsigned long long, const extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo *);
	std::vector<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > & operator=(const std::vector<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > &);
	std::vector<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > & operator=(std::initializer_list<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo>);
	std::vector<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > & operator=(std::vector<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > &);
	void _Assign_rv(std::vector<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > &);
	void _Assign_rv(std::vector<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > &, std::integral_constant<bool,0>);
	void _Assign_rv(std::vector<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > &, std::integral_constant<bool,1>);
	void push_back(const extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo &);
	void push_back(extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > >, unsigned long long, const extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > >, const extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > >, std::initializer_list<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo>);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > >, extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo &);
	void assign(unsigned long long, const extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo &);
	void assign(std::initializer_list<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo>);
	~vector<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> >();
	void reserve(unsigned long long);
	unsigned long long capacity();
	unsigned long long _Unused_capacity();
	unsigned long long _Has_unused_capacity();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > > begin();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > > begin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > > _Make_iter(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > >);
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > > > rbegin();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > > > rbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > > > rend();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > > > rend();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > > cbegin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > > cend();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > > > crbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > > > crend();
	void shrink_to_fit();
	void resize(unsigned long long, const extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo &);
	void resize(unsigned long long);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> get_allocator();
	extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo & at(unsigned long long);
	const extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo & at(unsigned long long);
	extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo & operator[](unsigned long long);
	const extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo & operator[](unsigned long long);
	const extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo * data();
	extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo * data();
	const extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo & front();
	extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo & front();
	const extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo & back();
	extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo & back();
	void pop_back();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > >, std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > >);
	void _Pop_back_n(unsigned long long);
	void clear();
	void swap(std::vector<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo,std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > &);
protected:
	bool _Buy(unsigned long long);
	void _Destroy(extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo *, extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo *);
	unsigned long long _Grow_to(unsigned long long);
	bool _Inside(const extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo *);
	void _Reallocate(unsigned long long);
	void _Reserve(unsigned long long);
	void _Tidy();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > > _Insert_n(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo> > >, unsigned long long, const extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo &);
	extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo * _Ufill(extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo *, unsigned long long, const extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo *);
	void _Xlen();
	void _Xran();
	void _Orphan_range(extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo *, extension::future_asset_detail::`anonymous-namespace'::AssetModelInfo *);
};
class std::vector<extension::BasicFutureObject<extension::AsyncFileImage,void>,std::allocator<extension::BasicFutureObject<extension::AsyncFileImage,void> > > :
	std::_Vector_alloc<std::_Vec_base_types<extension::BasicFutureObject<extension::AsyncFileImage,void>,std::allocator<extension::BasicFutureObject<extension::AsyncFileImage,void> > > >
{
	class _Myt;
	class _Mybase;
	class allocator_type;
	struct _Alty;
	class value_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef extension::BasicFutureObject<extension::AsyncFileImage,void> pointer;
	typedef const extension::BasicFutureObject<extension::AsyncFileImage,void> const_pointer;
	typedef extension::BasicFutureObject<extension::AsyncFileImage,void> reference;
	typedef const extension::BasicFutureObject<extension::AsyncFileImage,void> const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
public:
	vector<extension::BasicFutureObject<extension::AsyncFileImage,void>,std::allocator<extension::BasicFutureObject<extension::AsyncFileImage,void> > >(std::initializer_list<extension::BasicFutureObject<extension::AsyncFileImage,void> >, const std::allocator<extension::BasicFutureObject<extension::AsyncFileImage,void> > &);
	vector<extension::BasicFutureObject<extension::AsyncFileImage,void>,std::allocator<extension::BasicFutureObject<extension::AsyncFileImage,void> > >(std::vector<extension::BasicFutureObject<extension::AsyncFileImage,void>,std::allocator<extension::BasicFutureObject<extension::AsyncFileImage,void> > > &, const std::allocator<extension::BasicFutureObject<extension::AsyncFileImage,void> > &);
	vector<extension::BasicFutureObject<extension::AsyncFileImage,void>,std::allocator<extension::BasicFutureObject<extension::AsyncFileImage,void> > >(std::vector<extension::BasicFutureObject<extension::AsyncFileImage,void>,std::allocator<extension::BasicFutureObject<extension::AsyncFileImage,void> > > &);
	vector<extension::BasicFutureObject<extension::AsyncFileImage,void>,std::allocator<extension::BasicFutureObject<extension::AsyncFileImage,void> > >(const std::vector<extension::BasicFutureObject<extension::AsyncFileImage,void>,std::allocator<extension::BasicFutureObject<extension::AsyncFileImage,void> > > &, const std::allocator<extension::BasicFutureObject<extension::AsyncFileImage,void> > &);
	vector<extension::BasicFutureObject<extension::AsyncFileImage,void>,std::allocator<extension::BasicFutureObject<extension::AsyncFileImage,void> > >(const std::vector<extension::BasicFutureObject<extension::AsyncFileImage,void>,std::allocator<extension::BasicFutureObject<extension::AsyncFileImage,void> > > &);
	vector<extension::BasicFutureObject<extension::AsyncFileImage,void>,std::allocator<extension::BasicFutureObject<extension::AsyncFileImage,void> > >(unsigned long long, const extension::BasicFutureObject<extension::AsyncFileImage,void> &, const std::allocator<extension::BasicFutureObject<extension::AsyncFileImage,void> > &);
	vector<extension::BasicFutureObject<extension::AsyncFileImage,void>,std::allocator<extension::BasicFutureObject<extension::AsyncFileImage,void> > >(unsigned long long, const extension::BasicFutureObject<extension::AsyncFileImage,void> &);
	vector<extension::BasicFutureObject<extension::AsyncFileImage,void>,std::allocator<extension::BasicFutureObject<extension::AsyncFileImage,void> > >(unsigned long long);
	vector<extension::BasicFutureObject<extension::AsyncFileImage,void>,std::allocator<extension::BasicFutureObject<extension::AsyncFileImage,void> > >(const std::allocator<extension::BasicFutureObject<extension::AsyncFileImage,void> > &);
	vector<extension::BasicFutureObject<extension::AsyncFileImage,void>,std::allocator<extension::BasicFutureObject<extension::AsyncFileImage,void> > >();
	void _Construct_n(unsigned long long, const extension::BasicFutureObject<extension::AsyncFileImage,void> *);
	std::vector<extension::BasicFutureObject<extension::AsyncFileImage,void>,std::allocator<extension::BasicFutureObject<extension::AsyncFileImage,void> > > & operator=(const std::vector<extension::BasicFutureObject<extension::AsyncFileImage,void>,std::allocator<extension::BasicFutureObject<extension::AsyncFileImage,void> > > &);
	std::vector<extension::BasicFutureObject<extension::AsyncFileImage,void>,std::allocator<extension::BasicFutureObject<extension::AsyncFileImage,void> > > & operator=(std::initializer_list<extension::BasicFutureObject<extension::AsyncFileImage,void> >);
	std::vector<extension::BasicFutureObject<extension::AsyncFileImage,void>,std::allocator<extension::BasicFutureObject<extension::AsyncFileImage,void> > > & operator=(std::vector<extension::BasicFutureObject<extension::AsyncFileImage,void>,std::allocator<extension::BasicFutureObject<extension::AsyncFileImage,void> > > &);
	void _Assign_rv(std::vector<extension::BasicFutureObject<extension::AsyncFileImage,void>,std::allocator<extension::BasicFutureObject<extension::AsyncFileImage,void> > > &);
	void _Assign_rv(std::vector<extension::BasicFutureObject<extension::AsyncFileImage,void>,std::allocator<extension::BasicFutureObject<extension::AsyncFileImage,void> > > &, std::integral_constant<bool,0>);
	void _Assign_rv(std::vector<extension::BasicFutureObject<extension::AsyncFileImage,void>,std::allocator<extension::BasicFutureObject<extension::AsyncFileImage,void> > > &, std::integral_constant<bool,1>);
	void push_back(const extension::BasicFutureObject<extension::AsyncFileImage,void> &);
	void push_back(extension::BasicFutureObject<extension::AsyncFileImage,void> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<extension::AsyncFileImage,void> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<extension::AsyncFileImage,void> > > >, unsigned long long, const extension::BasicFutureObject<extension::AsyncFileImage,void> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<extension::AsyncFileImage,void> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<extension::AsyncFileImage,void> > > >, const extension::BasicFutureObject<extension::AsyncFileImage,void> &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<extension::AsyncFileImage,void> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<extension::AsyncFileImage,void> > > >, std::initializer_list<extension::BasicFutureObject<extension::AsyncFileImage,void> >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<extension::AsyncFileImage,void> > > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<extension::AsyncFileImage,void> > > >, extension::BasicFutureObject<extension::AsyncFileImage,void> &);
	void assign(unsigned long long, const extension::BasicFutureObject<extension::AsyncFileImage,void> &);
	void assign(std::initializer_list<extension::BasicFutureObject<extension::AsyncFileImage,void> >);
	~vector<extension::BasicFutureObject<extension::AsyncFileImage,void>,std::allocator<extension::BasicFutureObject<extension::AsyncFileImage,void> > >();
	void reserve(unsigned long long);
	unsigned long long capacity();
	unsigned long long _Unused_capacity();
	unsigned long long _Has_unused_capacity();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<extension::AsyncFileImage,void> > > > begin();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<extension::AsyncFileImage,void> > > > begin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<extension::AsyncFileImage,void> > > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<extension::AsyncFileImage,void> > > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<extension::AsyncFileImage,void> > > > _Make_iter(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<extension::AsyncFileImage,void> > > >);
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<extension::AsyncFileImage,void> > > > > rbegin();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<extension::AsyncFileImage,void> > > > > rbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<extension::AsyncFileImage,void> > > > > rend();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<extension::AsyncFileImage,void> > > > > rend();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<extension::AsyncFileImage,void> > > > cbegin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<extension::AsyncFileImage,void> > > > cend();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<extension::AsyncFileImage,void> > > > > crbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<extension::AsyncFileImage,void> > > > > crend();
	void shrink_to_fit();
	void resize(unsigned long long, const extension::BasicFutureObject<extension::AsyncFileImage,void> &);
	void resize(unsigned long long);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	std::allocator<extension::BasicFutureObject<extension::AsyncFileImage,void> > get_allocator();
	extension::BasicFutureObject<extension::AsyncFileImage,void> & at(unsigned long long);
	const extension::BasicFutureObject<extension::AsyncFileImage,void> & at(unsigned long long);
	extension::BasicFutureObject<extension::AsyncFileImage,void> & operator[](unsigned long long);
	const extension::BasicFutureObject<extension::AsyncFileImage,void> & operator[](unsigned long long);
	const extension::BasicFutureObject<extension::AsyncFileImage,void> * data();
	extension::BasicFutureObject<extension::AsyncFileImage,void> * data();
	const extension::BasicFutureObject<extension::AsyncFileImage,void> & front();
	extension::BasicFutureObject<extension::AsyncFileImage,void> & front();
	const extension::BasicFutureObject<extension::AsyncFileImage,void> & back();
	extension::BasicFutureObject<extension::AsyncFileImage,void> & back();
	void pop_back();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<extension::AsyncFileImage,void> > > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<extension::AsyncFileImage,void> > > >, std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<extension::AsyncFileImage,void> > > >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<extension::AsyncFileImage,void> > > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<extension::AsyncFileImage,void> > > >);
	void _Pop_back_n(unsigned long long);
	void clear();
	void swap(std::vector<extension::BasicFutureObject<extension::AsyncFileImage,void>,std::allocator<extension::BasicFutureObject<extension::AsyncFileImage,void> > > &);
protected:
	bool _Buy(unsigned long long);
	void _Destroy(extension::BasicFutureObject<extension::AsyncFileImage,void> *, extension::BasicFutureObject<extension::AsyncFileImage,void> *);
	unsigned long long _Grow_to(unsigned long long);
	bool _Inside(const extension::BasicFutureObject<extension::AsyncFileImage,void> *);
	void _Reallocate(unsigned long long);
	void _Reserve(unsigned long long);
	void _Tidy();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<extension::AsyncFileImage,void> > > > _Insert_n(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::BasicFutureObject<extension::AsyncFileImage,void> > > >, unsigned long long, const extension::BasicFutureObject<extension::AsyncFileImage,void> &);
	extension::BasicFutureObject<extension::AsyncFileImage,void> * _Ufill(extension::BasicFutureObject<extension::AsyncFileImage,void> *, unsigned long long, const extension::BasicFutureObject<extension::AsyncFileImage,void> *);
	void _Xlen();
	void _Xran();
	void _Orphan_range(extension::BasicFutureObject<extension::AsyncFileImage,void> *, extension::BasicFutureObject<extension::AsyncFileImage,void> *);
};
long extension::future_asset_detail::FutureAssetJob::run(); // 0x14024B530
class std::vector<extension::future_asset_detail::FutureAssetJob::FileSpec,std::allocator<extension::future_asset_detail::FutureAssetJob::FileSpec> > :
	std::_Vector_alloc<std::_Vec_base_types<extension::future_asset_detail::FutureAssetJob::FileSpec,std::allocator<extension::future_asset_detail::FutureAssetJob::FileSpec> > >
{
	class _Myt;
	class _Mybase;
	class allocator_type;
	struct _Alty;
	struct value_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef extension::future_asset_detail::FutureAssetJob::FileSpec pointer;
	typedef const extension::future_asset_detail::FutureAssetJob::FileSpec const_pointer;
	typedef extension::future_asset_detail::FutureAssetJob::FileSpec reference;
	typedef const extension::future_asset_detail::FutureAssetJob::FileSpec const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
public:
	vector<extension::future_asset_detail::FutureAssetJob::FileSpec,std::allocator<extension::future_asset_detail::FutureAssetJob::FileSpec> >(std::initializer_list<extension::future_asset_detail::FutureAssetJob::FileSpec>, const std::allocator<extension::future_asset_detail::FutureAssetJob::FileSpec> &);
	vector<extension::future_asset_detail::FutureAssetJob::FileSpec,std::allocator<extension::future_asset_detail::FutureAssetJob::FileSpec> >(std::vector<extension::future_asset_detail::FutureAssetJob::FileSpec,std::allocator<extension::future_asset_detail::FutureAssetJob::FileSpec> > &, const std::allocator<extension::future_asset_detail::FutureAssetJob::FileSpec> &);
	vector<extension::future_asset_detail::FutureAssetJob::FileSpec,std::allocator<extension::future_asset_detail::FutureAssetJob::FileSpec> >(std::vector<extension::future_asset_detail::FutureAssetJob::FileSpec,std::allocator<extension::future_asset_detail::FutureAssetJob::FileSpec> > &);
	vector<extension::future_asset_detail::FutureAssetJob::FileSpec,std::allocator<extension::future_asset_detail::FutureAssetJob::FileSpec> >(const std::vector<extension::future_asset_detail::FutureAssetJob::FileSpec,std::allocator<extension::future_asset_detail::FutureAssetJob::FileSpec> > &, const std::allocator<extension::future_asset_detail::FutureAssetJob::FileSpec> &);
	vector<extension::future_asset_detail::FutureAssetJob::FileSpec,std::allocator<extension::future_asset_detail::FutureAssetJob::FileSpec> >(const std::vector<extension::future_asset_detail::FutureAssetJob::FileSpec,std::allocator<extension::future_asset_detail::FutureAssetJob::FileSpec> > &);
	vector<extension::future_asset_detail::FutureAssetJob::FileSpec,std::allocator<extension::future_asset_detail::FutureAssetJob::FileSpec> >(unsigned long long, const extension::future_asset_detail::FutureAssetJob::FileSpec &, const std::allocator<extension::future_asset_detail::FutureAssetJob::FileSpec> &);
	vector<extension::future_asset_detail::FutureAssetJob::FileSpec,std::allocator<extension::future_asset_detail::FutureAssetJob::FileSpec> >(unsigned long long, const extension::future_asset_detail::FutureAssetJob::FileSpec &);
	vector<extension::future_asset_detail::FutureAssetJob::FileSpec,std::allocator<extension::future_asset_detail::FutureAssetJob::FileSpec> >(unsigned long long);
	vector<extension::future_asset_detail::FutureAssetJob::FileSpec,std::allocator<extension::future_asset_detail::FutureAssetJob::FileSpec> >(const std::allocator<extension::future_asset_detail::FutureAssetJob::FileSpec> &);
	vector<extension::future_asset_detail::FutureAssetJob::FileSpec,std::allocator<extension::future_asset_detail::FutureAssetJob::FileSpec> >();
	void _Construct_n(unsigned long long, const extension::future_asset_detail::FutureAssetJob::FileSpec *);
	std::vector<extension::future_asset_detail::FutureAssetJob::FileSpec,std::allocator<extension::future_asset_detail::FutureAssetJob::FileSpec> > & operator=(const std::vector<extension::future_asset_detail::FutureAssetJob::FileSpec,std::allocator<extension::future_asset_detail::FutureAssetJob::FileSpec> > &);
	std::vector<extension::future_asset_detail::FutureAssetJob::FileSpec,std::allocator<extension::future_asset_detail::FutureAssetJob::FileSpec> > & operator=(std::initializer_list<extension::future_asset_detail::FutureAssetJob::FileSpec>);
	std::vector<extension::future_asset_detail::FutureAssetJob::FileSpec,std::allocator<extension::future_asset_detail::FutureAssetJob::FileSpec> > & operator=(std::vector<extension::future_asset_detail::FutureAssetJob::FileSpec,std::allocator<extension::future_asset_detail::FutureAssetJob::FileSpec> > &);
	void _Assign_rv(std::vector<extension::future_asset_detail::FutureAssetJob::FileSpec,std::allocator<extension::future_asset_detail::FutureAssetJob::FileSpec> > &);
	void _Assign_rv(std::vector<extension::future_asset_detail::FutureAssetJob::FileSpec,std::allocator<extension::future_asset_detail::FutureAssetJob::FileSpec> > &, std::integral_constant<bool,0>);
	void _Assign_rv(std::vector<extension::future_asset_detail::FutureAssetJob::FileSpec,std::allocator<extension::future_asset_detail::FutureAssetJob::FileSpec> > &, std::integral_constant<bool,1>);
	void push_back(const extension::future_asset_detail::FutureAssetJob::FileSpec &);
	void push_back(extension::future_asset_detail::FutureAssetJob::FileSpec &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::FutureAssetJob::FileSpec> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::FutureAssetJob::FileSpec> > >, unsigned long long, const extension::future_asset_detail::FutureAssetJob::FileSpec &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::FutureAssetJob::FileSpec> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::FutureAssetJob::FileSpec> > >, const extension::future_asset_detail::FutureAssetJob::FileSpec &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::FutureAssetJob::FileSpec> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::FutureAssetJob::FileSpec> > >, std::initializer_list<extension::future_asset_detail::FutureAssetJob::FileSpec>);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::FutureAssetJob::FileSpec> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::FutureAssetJob::FileSpec> > >, extension::future_asset_detail::FutureAssetJob::FileSpec &);
	void assign(unsigned long long, const extension::future_asset_detail::FutureAssetJob::FileSpec &);
	void assign(std::initializer_list<extension::future_asset_detail::FutureAssetJob::FileSpec>);
	~vector<extension::future_asset_detail::FutureAssetJob::FileSpec,std::allocator<extension::future_asset_detail::FutureAssetJob::FileSpec> >();
	void reserve(unsigned long long);
	unsigned long long capacity();
	unsigned long long _Unused_capacity();
	unsigned long long _Has_unused_capacity();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::FutureAssetJob::FileSpec> > > begin();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::FutureAssetJob::FileSpec> > > begin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::FutureAssetJob::FileSpec> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::FutureAssetJob::FileSpec> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::FutureAssetJob::FileSpec> > > _Make_iter(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::FutureAssetJob::FileSpec> > >);
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::FutureAssetJob::FileSpec> > > > rbegin();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::FutureAssetJob::FileSpec> > > > rbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::FutureAssetJob::FileSpec> > > > rend();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::FutureAssetJob::FileSpec> > > > rend();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::FutureAssetJob::FileSpec> > > cbegin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::FutureAssetJob::FileSpec> > > cend();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::FutureAssetJob::FileSpec> > > > crbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::FutureAssetJob::FileSpec> > > > crend();
	void shrink_to_fit();
	void resize(unsigned long long, const extension::future_asset_detail::FutureAssetJob::FileSpec &);
	void resize(unsigned long long);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	std::allocator<extension::future_asset_detail::FutureAssetJob::FileSpec> get_allocator();
	extension::future_asset_detail::FutureAssetJob::FileSpec & at(unsigned long long);
	const extension::future_asset_detail::FutureAssetJob::FileSpec & at(unsigned long long);
	extension::future_asset_detail::FutureAssetJob::FileSpec & operator[](unsigned long long);
	const extension::future_asset_detail::FutureAssetJob::FileSpec & operator[](unsigned long long);
	const extension::future_asset_detail::FutureAssetJob::FileSpec * data();
	extension::future_asset_detail::FutureAssetJob::FileSpec * data();
	const extension::future_asset_detail::FutureAssetJob::FileSpec & front();
	extension::future_asset_detail::FutureAssetJob::FileSpec & front();
	const extension::future_asset_detail::FutureAssetJob::FileSpec & back();
	extension::future_asset_detail::FutureAssetJob::FileSpec & back();
	void pop_back();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::FutureAssetJob::FileSpec> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::FutureAssetJob::FileSpec> > >, std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::FutureAssetJob::FileSpec> > >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::FutureAssetJob::FileSpec> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::FutureAssetJob::FileSpec> > >);
	void _Pop_back_n(unsigned long long);
	void clear();
	void swap(std::vector<extension::future_asset_detail::FutureAssetJob::FileSpec,std::allocator<extension::future_asset_detail::FutureAssetJob::FileSpec> > &);
protected:
	bool _Buy(unsigned long long);
	void _Destroy(extension::future_asset_detail::FutureAssetJob::FileSpec *, extension::future_asset_detail::FutureAssetJob::FileSpec *);
	unsigned long long _Grow_to(unsigned long long);
	bool _Inside(const extension::future_asset_detail::FutureAssetJob::FileSpec *);
	void _Reallocate(unsigned long long);
	void _Reserve(unsigned long long);
	void _Tidy();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::FutureAssetJob::FileSpec> > > _Insert_n(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<extension::future_asset_detail::FutureAssetJob::FileSpec> > >, unsigned long long, const extension::future_asset_detail::FutureAssetJob::FileSpec &);
	extension::future_asset_detail::FutureAssetJob::FileSpec * _Ufill(extension::future_asset_detail::FutureAssetJob::FileSpec *, unsigned long long, const extension::future_asset_detail::FutureAssetJob::FileSpec *);
	void _Xlen();
	void _Xran();
	void _Orphan_range(extension::future_asset_detail::FutureAssetJob::FileSpec *, extension::future_asset_detail::FutureAssetJob::FileSpec *);
};
class std::vector<char,std::allocator<char> > :
	std::_Vector_alloc<std::_Vec_base_types<char,std::allocator<char> > >
{
	class _Myt;
	class _Mybase;
	class allocator_type;
	struct _Alty;
	typedef char value_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef char *pointer;
	typedef const char const_pointer;
	typedef char reference;
	typedef const char const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
public:
	vector<char,std::allocator<char> >(std::initializer_list<char>, const std::allocator<char> &);
	vector<char,std::allocator<char> >(std::vector<char,std::allocator<char> > &, const std::allocator<char> &);
	vector<char,std::allocator<char> >(std::vector<char,std::allocator<char> > &);
	vector<char,std::allocator<char> >(const std::vector<char,std::allocator<char> > &, const std::allocator<char> &);
	vector<char,std::allocator<char> >(const std::vector<char,std::allocator<char> > &);
	vector<char,std::allocator<char> >(unsigned long long, const char &, const std::allocator<char> &);
	vector<char,std::allocator<char> >(unsigned long long, const char &);
	vector<char,std::allocator<char> >(unsigned long long);
	vector<char,std::allocator<char> >(const std::allocator<char> &);
	vector<char,std::allocator<char> >();
	void _Construct_n(unsigned long long, const char *);
	std::vector<char,std::allocator<char> > & operator=(const std::vector<char,std::allocator<char> > &);
	std::vector<char,std::allocator<char> > & operator=(std::initializer_list<char>);
	std::vector<char,std::allocator<char> > & operator=(std::vector<char,std::allocator<char> > &);
	void _Assign_rv(std::vector<char,std::allocator<char> > &);
	void _Assign_rv(std::vector<char,std::allocator<char> > &, std::integral_constant<bool,0>);
	void _Assign_rv(std::vector<char,std::allocator<char> > &, std::integral_constant<bool,1>);
	void push_back(const char &);
	void push_back(char &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<char> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<char> > >, unsigned long long, const char &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<char> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<char> > >, const char &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<char> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<char> > >, std::initializer_list<char>);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<char> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<char> > >, char &);
	void assign(unsigned long long, const char &);
	void assign(std::initializer_list<char>);
	~vector<char,std::allocator<char> >();
	void reserve(unsigned long long);
	unsigned long long capacity();
	unsigned long long _Unused_capacity();
	unsigned long long _Has_unused_capacity();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<char> > > begin();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<char> > > begin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<char> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<char> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<char> > > _Make_iter(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<char> > >);
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<char> > > > rbegin();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<char> > > > rbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<char> > > > rend();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<char> > > > rend();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<char> > > cbegin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<char> > > cend();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<char> > > > crbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<char> > > > crend();
	void shrink_to_fit();
	void resize(unsigned long long, const char &);
	void resize(unsigned long long);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	std::allocator<char> get_allocator();
	char & at(unsigned long long);
	const char & at(unsigned long long);
	char & operator[](unsigned long long);
	const char & operator[](unsigned long long);
	const char * data();
	char * data();
	const char & front();
	char & front();
	const char & back();
	char & back();
	void pop_back();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<char> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<char> > >, std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<char> > >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<char> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<char> > >);
	void _Pop_back_n(unsigned long long);
	void clear();
	void swap(std::vector<char,std::allocator<char> > &);
protected:
	bool _Buy(unsigned long long);
	void _Destroy(char *, char *);
	unsigned long long _Grow_to(unsigned long long);
	bool _Inside(const char *);
	void _Reallocate(unsigned long long);
	void _Reserve(unsigned long long);
	void _Tidy();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<char> > > _Insert_n(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<char> > >, unsigned long long, const char &);
	char * _Ufill(char *, unsigned long long, const char *);
	void _Xlen();
	void _Xran();
	void _Orphan_range(char *, char *);
};
class std::unique_ptr<extension::future_asset_detail::AsyncAssetModelBuilder,std::default_delete<extension::future_asset_detail::AsyncAssetModelBuilder> > :
	std::_Unique_ptr_base<extension::future_asset_detail::AsyncAssetModelBuilder,std::default_delete<extension::future_asset_detail::AsyncAssetModelBuilder> >
{
	class _Myt;
	class _Mybase;
	typedef extension::future_asset_detail::AsyncAssetModelBuilder pointer;
	class element_type;
	struct deleter_type;
public:
	unique_ptr<extension::future_asset_detail::AsyncAssetModelBuilder,std::default_delete<extension::future_asset_detail::AsyncAssetModelBuilder> >(const std::unique_ptr<extension::future_asset_detail::AsyncAssetModelBuilder,std::default_delete<extension::future_asset_detail::AsyncAssetModelBuilder> > &);
	unique_ptr<extension::future_asset_detail::AsyncAssetModelBuilder,std::default_delete<extension::future_asset_detail::AsyncAssetModelBuilder> >(std::unique_ptr<extension::future_asset_detail::AsyncAssetModelBuilder,std::default_delete<extension::future_asset_detail::AsyncAssetModelBuilder> > &);
	unique_ptr<extension::future_asset_detail::AsyncAssetModelBuilder,std::default_delete<extension::future_asset_detail::AsyncAssetModelBuilder> >(extension::future_asset_detail::AsyncAssetModelBuilder *, std::default_delete<extension::future_asset_detail::AsyncAssetModelBuilder> &);
	unique_ptr<extension::future_asset_detail::AsyncAssetModelBuilder,std::default_delete<extension::future_asset_detail::AsyncAssetModelBuilder> >(extension::future_asset_detail::AsyncAssetModelBuilder *, const std::default_delete<extension::future_asset_detail::AsyncAssetModelBuilder> &);
	unique_ptr<extension::future_asset_detail::AsyncAssetModelBuilder,std::default_delete<extension::future_asset_detail::AsyncAssetModelBuilder> >(extension::future_asset_detail::AsyncAssetModelBuilder *);
	unique_ptr<extension::future_asset_detail::AsyncAssetModelBuilder,std::default_delete<extension::future_asset_detail::AsyncAssetModelBuilder> >(void *);
	unique_ptr<extension::future_asset_detail::AsyncAssetModelBuilder,std::default_delete<extension::future_asset_detail::AsyncAssetModelBuilder> >();
	std::unique_ptr<extension::future_asset_detail::AsyncAssetModelBuilder,std::default_delete<extension::future_asset_detail::AsyncAssetModelBuilder> > & operator=(const std::unique_ptr<extension::future_asset_detail::AsyncAssetModelBuilder,std::default_delete<extension::future_asset_detail::AsyncAssetModelBuilder> > &);
	std::unique_ptr<extension::future_asset_detail::AsyncAssetModelBuilder,std::default_delete<extension::future_asset_detail::AsyncAssetModelBuilder> > & operator=(std::unique_ptr<extension::future_asset_detail::AsyncAssetModelBuilder,std::default_delete<extension::future_asset_detail::AsyncAssetModelBuilder> > &);
	std::unique_ptr<extension::future_asset_detail::AsyncAssetModelBuilder,std::default_delete<extension::future_asset_detail::AsyncAssetModelBuilder> > & operator=(void *);
	void swap(std::unique_ptr<extension::future_asset_detail::AsyncAssetModelBuilder,std::default_delete<extension::future_asset_detail::AsyncAssetModelBuilder> > &);
	~unique_ptr<extension::future_asset_detail::AsyncAssetModelBuilder,std::default_delete<extension::future_asset_detail::AsyncAssetModelBuilder> >();
	extension::future_asset_detail::AsyncAssetModelBuilder & operator*();
	extension::future_asset_detail::AsyncAssetModelBuilder * operator->();
	extension::future_asset_detail::AsyncAssetModelBuilder * get();
	bool operator bool();
	extension::future_asset_detail::AsyncAssetModelBuilder * release();
	void reset(extension::future_asset_detail::AsyncAssetModelBuilder *);
};
extension::future_asset_detail::AsyncAssetModelBuilder::~AsyncAssetModelBuilder(); // 0x14024D3F0
extension::FutureAssetOption & extension::FutureAssetOption::operator=(const extension::FutureAssetOption & __that); // 0x14024ADB0
long extension::future_asset_detail::AsyncAssetModelBuilder::run(); // 0x14024D560
class extension::future_asset_detail::AsyncAssetModelBuilder::run::__l2::<lambda_725d6df9515f2b77a5b48c71f39405a5>
{
public:
	void operator()();
	<lambda_725d6df9515f2b77a5b48c71f39405a5>(extension::future_asset_detail::AsyncAssetModelBuilder::run::__l2::<lambda_725d6df9515f2b77a5b48c71f39405a5> &);
	<lambda_725d6df9515f2b77a5b48c71f39405a5>(const extension::future_asset_detail::AsyncAssetModelBuilder::run::__l2::<lambda_725d6df9515f2b77a5b48c71f39405a5> &);
	<lambda_725d6df9515f2b77a5b48c71f39405a5>();
	<lambda_725d6df9515f2b77a5b48c71f39405a5>(const std::string &, EffectDataListManager * &);
private:
	std::basic_string<char,std::char_traits<char>,std::allocator<char> > effPath; // 0x0
	EffectDataListManager * effect; // 0x20
public:
	extension::future_asset_detail::AsyncAssetModelBuilder::run::__l2::<lambda_725d6df9515f2b77a5b48c71f39405a5> & operator=(const extension::future_asset_detail::AsyncAssetModelBuilder::run::__l2::<lambda_725d6df9515f2b77a5b48c71f39405a5> &);
	~<lambda_725d6df9515f2b77a5b48c71f39405a5>();
};
class extension::future_asset_detail::AsyncAssetModelBuilder::run::__l2::<lambda_224f2aff27d484af60707df2a7dcfac8>
{
public:
	void operator()();
	<lambda_224f2aff27d484af60707df2a7dcfac8>(extension::future_asset_detail::AsyncAssetModelBuilder::run::__l2::<lambda_224f2aff27d484af60707df2a7dcfac8> &);
	<lambda_224f2aff27d484af60707df2a7dcfac8>(const extension::future_asset_detail::AsyncAssetModelBuilder::run::__l2::<lambda_224f2aff27d484af60707df2a7dcfac8> &);
	<lambda_224f2aff27d484af60707df2a7dcfac8>();
	<lambda_224f2aff27d484af60707df2a7dcfac8>(const std::string &, EffectDataListManager * &);
private:
	std::basic_string<char,std::char_traits<char>,std::allocator<char> > effPath; // 0x0
	EffectDataListManager * effect; // 0x20
public:
	extension::future_asset_detail::AsyncAssetModelBuilder::run::__l2::<lambda_224f2aff27d484af60707df2a7dcfac8> & operator=(const extension::future_asset_detail::AsyncAssetModelBuilder::run::__l2::<lambda_224f2aff27d484af60707df2a7dcfac8> &);
	~<lambda_224f2aff27d484af60707df2a7dcfac8>();
};
extension::BasicFutureObject<OGLCamera,void>::AssetCache extension::BasicFutureObject<OGLCamera,void>::s_cacheManager; // 0x140ACDD60
void(*??s_cacheManager$initializer$@?$BasicFutureObject@VOGLCamera@@X@extension@@0P6AXXZEA@@3P6AXXZEA)(); // 0x140740898
std::locale::id std::numpunct<char>::id; // 0x140ACDD58
extension::BasicFutureObject<extension::AsyncFileImage,void>::AssetCache extension::BasicFutureObject<extension::AsyncFileImage,void>::s_cacheManager; // 0x140ACDCD0
void(*??s_cacheManager$initializer$@?$BasicFutureObject@VAsyncFileImage@extension@@X@extension@@0P6AXXZEA@@3P6AXXZEA)(); // 0x140740890
const std::locale::facet * std::_Facetptr<std::numpunct<char> >::_Psave; // 0x140ACBE88
const std::locale::facet * std::_Facetptr<std::num_put<char,std::ostreambuf_iterator<char,std::char_traits<char> > > >::_Psave; // 0x140ACBE90
std::locale::id std::num_put<char,std::ostreambuf_iterator<char,std::char_traits<char> > >::id; // 0x140ACDCA8
std::piecewise_construct_t std::piecewise_construct; // 0x1408AECFB
void extension::future_asset_detail::AsyncAssetModelBuilder::setMaterialMap(OGLModel & model, long type, long textureIndex, long materialIndex); // 0x14024E780
void extension::future_asset_detail::AsyncAssetModelBuilder::applyShaderFx(); // 0x14024E820
extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> extension::AsyncAsset::getExtTexture(long index); // 0x14024EC90
OGLModel * extension::AsyncAsset::getModelFromType(long modelType, long order); // 0x14024EDD0
std::string extension::FutureTextureOption::stringize(); // 0x14024EE70
std::string extension::FutureImageOption::stringize(); // 0x14024F0C0
std::string extension::FutureFigureOption::stringize(); // 0x14024F240
std::string extension::FutureAssetOption::stringize(); // 0x14024F2E0//decompilation failure at 140ACDD60!
//decompilation failure at 140740898!
//decompilation failure at 140ACDD58!
//decompilation failure at 140ACDCD0!
//decompilation failure at 140740890!
//decompilation failure at 140ACBE88!
//decompilation failure at 140ACBE90!
//decompilation failure at 140ACDCA8!
//decompilation failure at 1408AECFB!
std::string *__fastcall std::operator+<char>(std::string *result, const std::string *_Left, const std::string *_Right)
{
  std::string *Ptr; // rax

  result->_Mypair._Myval2._Myres = 15i64;
  result->_Mypair._Myval2._Mysize = 0i64;
  if ( result->_Mypair._Myval2._Myres < 0x10 )
    Ptr = result;
  else
    Ptr = (std::string *)result->_Mypair._Myval2._Bx._Ptr;
  Ptr->_Mypair._Myval2._Bx._Buf[0] = 0;
  std::string::reserve(result, _Right->_Mypair._Myval2._Mysize + _Left->_Mypair._Myval2._Mysize);
  std::string::append(result, _Left, 0i64, 0xFFFFFFFFFFFFFFFFui64);
  std::string::append(result, _Right, 0i64, 0xFFFFFFFFFFFFFFFFui64);
  return result;
}

__int64 __fastcall extension::future_asset_detail::FutureFileImageJob::ReadFileImage<OGLTexture>(
        extension::FutureObjectJob<OGLTexture> *self,
        std::unique_ptr<extension::AsyncFileImage> *fileImage)
{
  extension::AsyncContent<OGLTexture> *m_ptr; // rax
  const std::string *p_m_name; // rdx
  unsigned int v7; // er14
  unsigned __int64 v8; // rdx
  AgFile *v9; // rdi
  int v10; // esi
  extension::AsyncFileImage *Myval2; // r15
  void *pData; // rcx
  unsigned __int8 *v13; // r15
  extension::AsyncContent<OGLTexture> *v14; // rax
  int v15; // ebx
  int v16; // ecx
  AgReferenceCount *m_ref; // rax
  AgPointer<KOFApplication> v18; // [rsp+28h] [rbp-51h] BYREF
  AgPointer<KOFApplication> v19; // [rsp+38h] [rbp-41h] BYREF
  CFile v20; // [rsp+50h] [rbp-29h] BYREF
  __int64 v21; // [rsp+E0h] [rbp+67h]
  extension::AsyncFileImage *v22; // [rsp+F0h] [rbp+77h]

  m_ptr = self->m_content.m_ptr;
  if ( m_ptr && (m_ptr->m_status.m_stateFlags.m_value._My_val & 2) != 0 )
    return 4i64;
  v21 = *(_QWORD *)NtCurrentTeb()->Reserved1[11] + 16i64;
  if ( *(_QWORD *)v21 )
  {
    if ( (*(_QWORD *)(*(_QWORD *)v21 + 8i64) & 0x100i64) != 0 )
      return 4i64;
  }
  memset(&v20.pFileName, 0, 28);
  memset(&v20, 0, 28);
  v19 = 0i64;
  AgPointer<AgUser>::~AgPointer<AgUser>(&v19);
  p_m_name = &self->m_content.m_ptr->m_name;
  if ( self->m_content.m_ptr->m_name._Mypair._Myval2._Myres >= 0x10 )
    p_m_name = (const std::string *)p_m_name->_Mypair._Myval2._Bx._Ptr;
  v7 = 1;
  if ( (unsigned __int8)CFile::copen(&v20, p_m_name->_Mypair._Myval2._Bx._Buf, -2, 1) )
  {
    v9 = v20.m_file.m_ptr;
    if ( v20.m_file.m_ptr )
      v10 = v20.m_file.m_ptr->getSize(v20.m_file.m_ptr);
    else
      v10 = 0;
    v22 = (extension::AsyncFileImage *)operator new(0x18ui64);
    v22->m_length = v10;
    v22->fileBufPara.buf_idx = -1;
    v22->fileBufPara.pData = 0i64;
    CFixMemory::GetInstance();
    v22->fileBufPara.pData = operator new[]((unsigned int)v10);
    Myval2 = fileImage->_Mypair._Myval2;
    fileImage->_Mypair._Myval2 = v22;
    if ( Myval2 )
    {
      pData = Myval2->fileBufPara.pData;
      if ( pData )
      {
        operator delete(pData, v8);
        Myval2->fileBufPara.pData = 0i64;
      }
      operator delete(Myval2, 0x18ui64);
    }
    v13 = (unsigned __int8 *)fileImage->_Mypair._Myval2->fileBufPara.pData;
    while ( 1 )
    {
      v14 = self->m_content.m_ptr;
      if ( v14 )
      {
        if ( (v14->m_status.m_stateFlags.m_value._My_val & 2) != 0 )
          goto LABEL_31;
        v9 = v20.m_file.m_ptr;
      }
      if ( *(_QWORD *)v21 )
      {
        if ( (*(_QWORD *)(*(_QWORD *)v21 + 8i64) & 0x100i64) != 0 )
        {
LABEL_31:
          v7 = 4;
          goto LABEL_35;
        }
        v9 = v20.m_file.m_ptr;
      }
      v15 = 0x40000;
      if ( v10 < 0x40000 )
        v15 = v10;
      if ( v9 )
      {
        v9->read(v9, v13, v15);
        v20.m_iSeekPos += v15;
        v16 = v15;
        if ( v15 < 0 )
          goto LABEL_35;
      }
      else
      {
        v16 = 0;
        if ( v15 > 0 )
          goto LABEL_35;
      }
      if ( v16 == v10 )
        break;
      v13 += v16;
      v10 -= v16;
    }
    if ( v9 )
    {
      m_ref = v20.m_file.m_ref;
      v20.m_file = 0i64;
      v18.m_ref = m_ref;
      v18.m_ptr = (KOFApplication *)v9;
      AgPointer<AgUser>::~AgPointer<AgUser>(&v18);
    }
    *(_QWORD *)&v20.m_iSeekPos = 0i64;
    v7 = 0;
  }
LABEL_35:
  if ( v20.fNameIndex )
  {
    operator delete(v20.fNameIndex, v8);
    v20.fNameIndex = 0i64;
  }
  AgPointer<AgUser>::~AgPointer<AgUser>((AgPointer<KOFApplication> *)&v20);
  return v7;
}

std::_Tree_node<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig>,void *> *__fastcall std::_Tree_comp_alloc<std::_Tmap_traits<std::string,OGLModel *,std::less<std::string>,std::allocator<std::pair<std::string const,OGLModel *>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<std::string &&>,std::tuple<>>(
        std::_Tree_comp_alloc<std::_Tmap_traits<std::string,OGLModel *,std::less<std::string >,std::allocator<std::pair<std::string const ,OGLModel *> >,0> > *this,
        const std::piecewise_construct_t *<_Val_0>,
        std::tuple<std::string &&> *<_Val_1>,
        std::tuple<> *<_Val_2>)
{
  std::_Tree_node<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig>,void *> *v5; // rax
  std::_Tree_node<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig>,void *> *v6; // rdi
  std::string *p_first; // rbx
  std::string *Val; // rdx
  std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig> *p_Myval; // rax

  v5 = std::_Tree_comp_alloc<std::_Tmap_traits<std::string,CSteamID,std::less<void>,std::allocator<std::pair<std::string const,CSteamID>>,0>>::_Buynode0((std::_Tree_comp_alloc<std::_Tmap_traits<std::string,extension::GFXIFontManager::LanguageConfig,std::less<std::string >,std::allocator<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig> >,0> > *)this);
  v6 = v5;
  *(_WORD *)&v5->_Color = 0;
  p_first = (std::string *)&v5->_Myval.first;
  if ( v5 != (std::_Tree_node<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig>,void *> *)-32i64 )
  {
    Val = <_Val_1>->_Myfirst._Val;
    v5->_Myval.first._Mypair._Myval2._Myres = 15i64;
    v5->_Myval.first._Mypair._Myval2._Mysize = 0i64;
    if ( v5->_Myval.first._Mypair._Myval2._Myres < 0x10 )
      p_Myval = &v5->_Myval;
    else
      p_Myval = (std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig> *)p_first->_Mypair._Myval2._Bx._Ptr;
    p_Myval->first._Mypair._Myval2._Bx._Buf[0] = 0;
    std::string::_Assign_rv(p_first, Val);
    p_first[1]._Mypair._Myval2._Bx._Ptr = 0i64;
  }
  return v6;
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

extension::FutureAssetOptionFileSetting *__fastcall std::_Copy_unchecked<extension::FutureAssetOptionFileSetting *,extension::FutureAssetOptionFileSetting *>(
        extension::FutureAssetOptionFileSetting *_First,
        extension::FutureAssetOptionFileSetting *_Last,
        extension::FutureAssetOptionFileSetting *_Dest)
{
  extension::FutureAssetOptionFileSetting *v3; // rdi
  extension::FutureAssetOptionFileSetting *v5; // rbx
  signed __int64 v6; // rsi
  signed __int64 v7; // r14
  char *v8; // rdx
  char v9; // cl

  v3 = _Dest;
  v5 = _First;
  if ( _First != _Last )
  {
    v6 = (char *)_First - (char *)_Dest;
    v7 = (char *)_Dest - (char *)_First + 32;
    do
    {
      if ( v3 != v5 )
        std::string::assign(&v3->fileName, &v5->fileName, 0i64, 0xFFFFFFFFFFFFFFFFui64);
      v8 = &v5->fileName._Mypair._Myval2._Bx._Buf[v7];
      ++v3;
      v9 = v5->fileName._Mypair._Myval2._Bx._Buf[v7 + v6];
      ++v5;
      *v8 = v9;
    }
    while ( v5 != _Last );
  }
  return v3;
}

void __fastcall std::_Destroy_range1<std::allocator<extension::future_asset_detail::FutureAssetJob::FileSpec>,extension::future_asset_detail::FutureAssetJob::FileSpec *>(
        extension::future_asset_detail::FutureAssetJob::FileSpec *_First,
        extension::future_asset_detail::FutureAssetJob::FileSpec *_Last,
        std::_Wrap_alloc<std::allocator<extension::future_asset_detail::FutureAssetJob::FileSpec> > *_Al,
        std::integral_constant<bool,0> __formal)
{
  unsigned __int64 *p_Myres; // rbx
  char *v6; // rcx
  char *v7; // rax
  unsigned __int64 v8; // rcx
  bool v9; // cf
  unsigned __int64 *v10; // rax

  if ( _First != _Last )
  {
    p_Myres = &_First->filePath._Mypair._Myval2._Myres;
    do
    {
      if ( *p_Myres >= 0x10 )
      {
        v6 = (char *)*(p_Myres - 3);
        if ( *p_Myres + 1 >= 0x1000 )
        {
          if ( ((unsigned __int8)v6 & 0x1F) != 0 )
            invalid_parameter_noinfo_noreturn();
          v7 = (char *)*((_QWORD *)v6 - 1);
          if ( v7 >= v6 )
            invalid_parameter_noinfo_noreturn();
          v8 = v6 - v7;
          if ( v8 < 8 )
            invalid_parameter_noinfo_noreturn();
          if ( v8 > 0x27 )
            invalid_parameter_noinfo_noreturn();
          v6 = v7;
        }
        operator delete(v6);
      }
      *p_Myres = 15i64;
      v9 = *p_Myres < 0x10;
      *(p_Myres - 1) = 0i64;
      if ( v9 )
        v10 = p_Myres - 3;
      else
        v10 = (unsigned __int64 *)*(p_Myres - 3);
      p_Myres += 6;
      *(_BYTE *)v10 = 0;
    }
    while ( p_Myres - 4 != (unsigned __int64 *)_Last );
  }
}

void __fastcall std::_Destroy_range<std::allocator<extension::BasicFutureObject<OGLCurve,void>>,extension::BasicFutureObject<OGLCurve,void> *>(
        extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> *_First,
        extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> *_Last,
        std::_Wrap_alloc<std::allocator<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> > > *_Al)
{
  extension::RefCountablePtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body> *p_m_body; // rbx
  extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body *m_ptr; // rcx

  if ( _First != _Last )
  {
    p_m_body = &_First->m_body;
    do
    {
      m_ptr = p_m_body->m_ptr;
      if ( p_m_body->m_ptr )
      {
        if ( _InterlockedExchangeAdd64(
               (volatile signed __int64 *)&m_ptr->m_refCount.m_ptr->m_sharedCount,
               0xFFFFFFFFFFFFFFFFui64) == 1 )
          ((void (__fastcall *)(extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body *, __int64, std::_Wrap_alloc<std::allocator<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> > > *))m_ptr->~RefCountableWeakSupportBase)(
            m_ptr,
            1i64,
            _Al);
      }
      p_m_body += 2;
    }
    while ( &p_m_body[-1] != (extension::RefCountablePtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body> *)_Last );
  }
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

std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const ,OGLModel *> > > > *__fastcall std::_Tree<std::_Tmap_traits<std::string,CSteamID,std::less<void>,std::allocator<std::pair<std::string const,CSteamID>>,0>>::_Insert_at<std::pair<std::string const,CSteamID> &,std::_Tree_node<std::pair<std::string const,CSteamID>,void *> *>(
        std::_Tree<std::_Tmap_traits<std::string,OGLModel *,std::less<std::string >,std::allocator<std::pair<std::string const ,OGLModel *> >,0> > *this,
        std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const ,OGLModel *> > > > *result,
        bool _Addleft,
        std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *_Wherenode,
        std::pair<std::string const ,OGLModel *> *_Val,
        std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *_Node)
{
  unsigned __int64 Mysize; // rax
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *Myhead; // rax
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *v10; // rax
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *Parent; // rcx
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *v12; // r8
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *Left; // rdx
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *Right; // rdx
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *v15; // rdx
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *v16; // rcx
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *v17; // rdx
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *v18; // r8
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *v19; // rcx
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *v20; // rcx
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *v21; // rdx
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *v22; // rcx
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *v23; // rcx
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *v24; // rcx
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *v25; // rax
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *v26; // rcx
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const ,OGLModel *> > > > *v27; // rax

  Mysize = this->_Mypair._Myval2._Myval2._Mysize;
  if ( Mysize >= 0x38E38E38E38E38Di64 )
  {
    std::string::~string((std::string *)&_Node->_Myval.first);
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

std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const ,OGLModel *> > > > *__fastcall std::_Tree<std::_Tmap_traits<std::string,unsigned int,std::less<std::string>,std::allocator<std::pair<std::string const,unsigned int>>,0>>::_Insert_hint<std::pair<std::string const,unsigned int> &,std::_Tree_node<std::pair<std::string const,unsigned int>,void *> *>(
        std::_Tree<std::_Tmap_traits<std::string,OGLModel *,std::less<std::string >,std::allocator<std::pair<std::string const ,OGLModel *> >,0> > *this,
        std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const ,OGLModel *> > > > *result,
        std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const ,OGLModel *> > > > _Where,
        std::pair<std::string const ,OGLModel *> *_Val,
        std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *_Newnode)
{
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *Myhead; // rsi
  bool v11; // r8
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *Right; // rbx
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *Ptr; // rax
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *Left; // rbx
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *j; // rax
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *i; // rcx
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *v17; // rbx
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *v18; // rax
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *m; // rax
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *k; // rax
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *v21; // [rsp+20h] [rbp-48h]
  std::pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const ,OGLModel *> > > >,bool> resulta; // [rsp+38h] [rbp-30h] BYREF

  if ( !this->_Mypair._Myval2._Myval2._Mysize )
  {
    std::_Tree<std::_Tmap_traits<std::string,CSteamID,std::less<void>,std::allocator<std::pair<std::string const,CSteamID>>,0>>::_Insert_at<std::pair<std::string const,CSteamID> &,std::_Tree_node<std::pair<std::string const,CSteamID>,void *> *>(
      this,
      result,
      1,
      this->_Mypair._Myval2._Myval2._Myhead,
      (std::pair<std::string const ,OGLModel *> *)v21,
      _Newnode);
    return result;
  }
  Myhead = this->_Mypair._Myval2._Myval2._Myhead;
  if ( _Where._Ptr == this->_Mypair._Myval2._Myval2._Myhead->_Left )
  {
    if ( std::string::compare((std::string *)&_Val->first, &_Where._Ptr->_Myval.first) < 0 )
    {
      std::_Tree<std::_Tmap_traits<std::string,CSteamID,std::less<void>,std::allocator<std::pair<std::string const,CSteamID>>,0>>::_Insert_at<std::pair<std::string const,CSteamID> &,std::_Tree_node<std::pair<std::string const,CSteamID>,void *> *>(
        this,
        result,
        1,
        _Where._Ptr,
        (std::pair<std::string const ,OGLModel *> *)v21,
        _Newnode);
      return result;
    }
    goto LABEL_42;
  }
  if ( _Where._Ptr == Myhead )
  {
    Right = Myhead->_Right;
    if ( std::string::compare((std::string *)&Right->_Myval.first, &_Val->first) < 0 )
    {
      std::_Tree<std::_Tmap_traits<std::string,CSteamID,std::less<void>,std::allocator<std::pair<std::string const,CSteamID>>,0>>::_Insert_at<std::pair<std::string const,CSteamID> &,std::_Tree_node<std::pair<std::string const,CSteamID>,void *> *>(
        this,
        result,
        0,
        Right,
        (std::pair<std::string const ,OGLModel *> *)v21,
        _Newnode);
      return result;
    }
    goto LABEL_42;
  }
  if ( std::string::compare((std::string *)&_Val->first, &_Where._Ptr->_Myval.first) >= 0 )
    goto LABEL_37;
  Ptr = _Where._Ptr;
  if ( _Where._Ptr->_Isnil )
  {
    Left = _Where._Ptr->_Right;
  }
  else
  {
    Left = _Where._Ptr->_Left;
    if ( _Where._Ptr->_Left->_Isnil )
    {
      for ( i = _Where._Ptr->_Parent; !i->_Isnil; i = i->_Parent )
      {
        if ( Ptr != i->_Left )
          break;
        Ptr = i;
      }
      Left = Ptr;
      if ( !Ptr->_Isnil )
        Left = i;
    }
    else
    {
      for ( j = Left->_Right; !j->_Isnil; j = j->_Right )
        Left = j;
    }
  }
  if ( std::string::compare((std::string *)&Left->_Myval.first, &_Val->first) >= 0 )
  {
LABEL_37:
    if ( std::string::compare((std::string *)&_Where._Ptr->_Myval.first, &_Val->first) >= 0 )
      goto LABEL_42;
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
    if ( v17 != Myhead && std::string::compare((std::string *)&_Val->first, &v17->_Myval.first) >= 0 )
    {
LABEL_42:
      result->_Ptr = (std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *)std::_Tree<std::_Tmap_traits<std::string,OGLModel *,std::less<std::string>,std::allocator<std::pair<std::string const,OGLModel *>>,0>>::_Insert_nohint<std::pair<std::string const,OGLModel *> &,std::_Tree_node<std::pair<std::string const,OGLModel *>,void *> *>(
                                                                                           this,
                                                                                           &resulta,
                                                                                           v11,
                                                                                           _Val,
                                                                                           _Newnode)->first;
      return result;
    }
    if ( _Where._Ptr->_Right->_Isnil )
      std::_Tree<std::_Tmap_traits<std::string,CSteamID,std::less<void>,std::allocator<std::pair<std::string const,CSteamID>>,0>>::_Insert_at<std::pair<std::string const,CSteamID> &,std::_Tree_node<std::pair<std::string const,CSteamID>,void *> *>(
        this,
        result,
        0,
        _Where._Ptr,
        (std::pair<std::string const ,OGLModel *> *)v21,
        _Newnode);
    else
      std::_Tree<std::_Tmap_traits<std::string,CSteamID,std::less<void>,std::allocator<std::pair<std::string const,CSteamID>>,0>>::_Insert_at<std::pair<std::string const,CSteamID> &,std::_Tree_node<std::pair<std::string const,CSteamID>,void *> *>(
        this,
        result,
        1,
        v17,
        (std::pair<std::string const ,OGLModel *> *)v21,
        _Newnode);
    return result;
  }
  else
  {
    if ( Left->_Right->_Isnil )
      std::_Tree<std::_Tmap_traits<std::string,CSteamID,std::less<void>,std::allocator<std::pair<std::string const,CSteamID>>,0>>::_Insert_at<std::pair<std::string const,CSteamID> &,std::_Tree_node<std::pair<std::string const,CSteamID>,void *> *>(
        this,
        result,
        0,
        Left,
        (std::pair<std::string const ,OGLModel *> *)v21,
        _Newnode);
    else
      std::_Tree<std::_Tmap_traits<std::string,CSteamID,std::less<void>,std::allocator<std::pair<std::string const,CSteamID>>,0>>::_Insert_at<std::pair<std::string const,CSteamID> &,std::_Tree_node<std::pair<std::string const,CSteamID>,void *> *>(
        this,
        result,
        1,
        _Where._Ptr,
        (std::pair<std::string const ,OGLModel *> *)v21,
        _Newnode);
    return result;
  }
}

std::pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const ,OGLModel *> > > >,bool> *__fastcall std::_Tree<std::_Tmap_traits<std::string,OGLModel *,std::less<std::string>,std::allocator<std::pair<std::string const,OGLModel *>>,0>>::_Insert_nohint<std::pair<std::string const,OGLModel *> &,std::_Tree_node<std::pair<std::string const,OGLModel *>,void *> *>(
        std::_Tree<std::_Tmap_traits<std::string,OGLModel *,std::less<std::string >,std::allocator<std::pair<std::string const ,OGLModel *> >,0> > *this,
        std::pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const ,OGLModel *> > > >,bool> *result,
        bool _Leftish,
        std::pair<std::string const ,OGLModel *> *_Val,
        std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *_Newnode)
{
  std::_Tree<std::_Tmap_traits<std::string,OGLModel *,std::less<std::string >,std::allocator<std::pair<std::string const ,OGLModel *> >,0> > *v7; // rsi
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *Myhead; // rax
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *Parent; // rbx
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *v10; // r14
  BOOL v11; // edi
  unsigned __int64 Mysize; // r15
  char **p_Myval; // rdx
  std::pair<std::string const ,OGLModel *> *Ptr; // rcx
  size_t v15; // rsi
  size_t v16; // r8
  unsigned int v17; // edi
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *Right; // rbx
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *j; // rax
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *i; // rax
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *v22; // rdi
  std::pair<std::string const ,OGLModel *> *v23; // [rsp+20h] [rbp-48h]
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *v24; // [rsp+30h] [rbp-38h]
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const ,OGLModel *> > > > resulta; // [rsp+70h] [rbp+8h] BYREF

  resulta._Ptr = (std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *)this;
  v7 = this;
  Myhead = this->_Mypair._Myval2._Myval2._Myhead;
  v24 = this->_Mypair._Myval2._Myval2._Myhead;
  Parent = this->_Mypair._Myval2._Myval2._Myhead->_Parent;
  v10 = this->_Mypair._Myval2._Myval2._Myhead;
  LOBYTE(v11) = 1;
  if ( !Parent->_Isnil )
  {
    Mysize = _Val->first._Mypair._Myval2._Mysize;
    do
    {
      v10 = Parent;
      p_Myval = (char **)&Parent->_Myval;
      if ( Parent->_Myval.first._Mypair._Myval2._Myres >= 0x10 )
        p_Myval = (char **)*p_Myval;
      if ( _Val->first._Mypair._Myval2._Myres < 0x10 )
        Ptr = _Val;
      else
        Ptr = (std::pair<std::string const ,OGLModel *> *)_Val->first._Mypair._Myval2._Bx._Ptr;
      v15 = Parent->_Myval.first._Mypair._Myval2._Mysize;
      v16 = v15;
      if ( Mysize < v15 )
        v16 = Mysize;
      if ( !v16 || (v17 = memcmp(Ptr, p_Myval, v16)) == 0 )
      {
        if ( Mysize >= v15 )
          v17 = Mysize > v15;
        else
          v17 = -1;
      }
      v11 = v17 >> 31;
      if ( v11 )
        Parent = Parent->_Left;
      else
        Parent = Parent->_Right;
    }
    while ( !Parent->_Isnil );
    Myhead = v24;
    v7 = (std::_Tree<std::_Tmap_traits<std::string,OGLModel *,std::less<std::string >,std::allocator<std::pair<std::string const ,OGLModel *> >,0> > *)resulta._Ptr;
  }
  Right = v10;
  if ( v11 )
  {
    if ( v10 == Myhead->_Left )
    {
      result->first = (std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const ,OGLModel *> > > >)std::_Tree<std::_Tmap_traits<std::string,CSteamID,std::less<void>,std::allocator<std::pair<std::string const,CSteamID>>,0>>::_Insert_at<std::pair<std::string const,CSteamID> &,std::_Tree_node<std::pair<std::string const,CSteamID>,void *> *>(v7, &resulta, 1, v10, v23, _Newnode)->_Ptr;
      result->second = 1;
      return result;
    }
    if ( v10->_Isnil )
    {
      Right = v10->_Right;
    }
    else if ( v10->_Left->_Isnil )
    {
      for ( i = v10->_Parent; !i->_Isnil; i = i->_Parent )
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
      Right = v10->_Left;
      for ( j = v10->_Left->_Right; !j->_Isnil; j = j->_Right )
        Right = j;
    }
  }
  if ( std::string::compare((std::string *)&Right->_Myval.first, &_Val->first) >= 0 )
  {
    v22 = _Newnode;
    std::string::~string((std::string *)&_Newnode->_Myval.first);
    operator delete(v22);
    result->first._Ptr = Right;
    result->second = 0;
  }
  else
  {
    result->first = (std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const ,OGLModel *> > > >)std::_Tree<std::_Tmap_traits<std::string,CSteamID,std::less<void>,std::allocator<std::pair<std::string const,CSteamID>>,0>>::_Insert_at<std::pair<std::string const,CSteamID> &,std::_Tree_node<std::pair<std::string const,CSteamID>,void *> *>(v7, &resulta, v11, v10, v23, _Newnode)->_Ptr;
    result->second = 1;
  }
  return result;
}

void __fastcall std::_Launch<std::unique_ptr<std::tuple<_lambda_224f2aff27d484af60707df2a7dcfac8_>>>(
        _Thrd_imp_t *_Thr,
        std::unique_ptr<std::tuple<<lambda_224f2aff27d484af60707df2a7dcfac8> >> *_Tg)
{
  int v4; // eax
  int v5; // ebx
  int v6; // eax
  int v7; // eax
  std::tuple<<lambda_224f2aff27d484af60707df2a7dcfac8> > *Myval2; // rax
  int v9; // eax
  int v10; // eax
  std::string *v11; // rbx
  _Cnd_internal_imp_t *v12; // rdi
  _Mtx_internal_imp_t *v13; // rbx
  int v14; // eax
  void **b; // [rsp+48h] [rbp-30h] BYREF
  _Cnd_internal_imp_t *cond; // [rsp+50h] [rbp-28h] BYREF
  _Mtx_internal_imp_t *mtx; // [rsp+58h] [rbp-20h] BYREF
  char v18; // [rsp+60h] [rbp-18h]
  std::string *v19; // [rsp+68h] [rbp-10h]

  b = &std::_Pad::`vftable';
  v4 = Cnd_init(&cond);
  if ( v4 )
    std::_Throw_C_error(v4);
  v5 = 1;
  v6 = Mtx_init(&mtx, 1);
  if ( v6 )
    std::_Throw_C_error(v6);
  v18 = 0;
  v7 = Mtx_lock(mtx);
  if ( v7 )
    std::_Throw_C_error(v7);
  b = &std::_LaunchPad<std::unique_ptr<std::tuple<_lambda_224f2aff27d484af60707df2a7dcfac8_>>>::`vftable';
  Myval2 = _Tg->_Mypair._Myval2;
  _Tg->_Mypair._Myval2 = 0i64;
  v19 = (std::string *)Myval2;
  v9 = Thrd_start(_Thr, (unsigned int (__fastcall *)(void *))std::_Pad::_Call_func, &b);
  if ( v9 != 4 )
    v5 = v9;
  if ( v5 )
    std::_Throw_C_error(v5);
  while ( !v18 )
  {
    v10 = Cnd_wait(cond, mtx);
    if ( v10 )
      std::_Throw_C_error(v10);
  }
  v11 = v19;
  if ( v19 )
  {
    std::string::~string(v19);
    operator delete(v11, 0x28ui64);
  }
  b = &std::_Pad::`vftable';
  v12 = cond;
  v13 = mtx;
  v14 = Mtx_unlock(mtx);
  if ( v14 )
    std::_Throw_C_error(v14);
  Mtx_destroy(v13);
  Cnd_destroy(v12);
}

void __fastcall std::_Uninit_alloc_fill_n1<int *,unsigned __int64,std::allocator<int>>(
        int *_First,
        unsigned __int64 _Count,
        const int *_Pval,
        std::_Wrap_alloc<std::allocator<int> > *_Al)
{
  __int64 v4; // rdx

  v4 = 16i64;
  do
  {
    if ( _First )
      *_First = *_Pval;
    ++_First;
    --v4;
  }
  while ( v4 );
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

extension::FutureAssetOptionFileSetting *__fastcall std::_Uninitialized_copy_al_unchecked1<extension::FutureAssetOptionFileSetting *,extension::FutureAssetOptionFileSetting *,std::allocator<extension::FutureAssetOptionFileSetting>>(
        extension::FutureAssetOptionFileSetting *_First,
        extension::FutureAssetOptionFileSetting *_Last,
        extension::FutureAssetOptionFileSetting *_Dest,
        std::_Wrap_alloc<std::allocator<extension::FutureAssetOptionFileSetting> > *_Al)
{
  extension::FutureAssetOptionFileSetting *Ptr; // rax

  while ( _First != _Last )
  {
    if ( _Dest )
    {
      _Dest->fileName._Mypair._Myval2._Myres = 15i64;
      _Dest->fileName._Mypair._Myval2._Mysize = 0i64;
      if ( _Dest->fileName._Mypair._Myval2._Myres < 0x10 )
        Ptr = _Dest;
      else
        Ptr = (extension::FutureAssetOptionFileSetting *)_Dest->fileName._Mypair._Myval2._Bx._Ptr;
      Ptr->fileName._Mypair._Myval2._Bx._Buf[0] = 0;
      std::string::assign(&_Dest->fileName, &_First->fileName, 0i64, 0xFFFFFFFFFFFFFFFFui64);
      _Dest->bNoMotion = _First->bNoMotion;
    }
    ++_Dest;
    ++_First;
  }
  return _Dest;
}

void __fastcall std::_Uninitialized_default_fill_n1<extension::future_asset_detail::FutureAssetJob::FileSpec *,unsigned __int64,std::allocator<extension::future_asset_detail::FutureAssetJob::FileSpec>>(
        extension::future_asset_detail::FutureAssetJob::FileSpec *_First,
        unsigned __int64 _Count,
        std::_Wrap_alloc<std::allocator<extension::future_asset_detail::FutureAssetJob::FileSpec> > *_Al,
        std::integral_constant<bool,0> __formal)
{
  for ( ; _Count; --_Count )
  {
    if ( _First )
    {
      *(_QWORD *)&_First->uiFileType = 0i64;
      _First->filePath._Mypair._Myval2._Bx = 0ui64;
      *(_QWORD *)&_First->iFileTypeIndex = 0i64;
      _First->filePath._Mypair._Myval2._Myres = 15i64;
      _First->filePath._Mypair._Myval2._Mysize = 0i64;
      _First->filePath._Mypair._Myval2._Bx._Buf[0] = 0;
    }
    ++_First;
  }
}

void __fastcall std::_Uninitialized_default_fill_n1<extension::BasicFutureObject<extension::AsyncFileImage,void> *,unsigned __int64,std::allocator<extension::BasicFutureObject<extension::AsyncFileImage,void>>>(
        extension::BasicFutureObject<extension::AsyncFileImage,void> *_First,
        unsigned __int64 _Count,
        std::_Wrap_alloc<std::allocator<extension::BasicFutureObject<extension::AsyncFileImage,void> > > *_Al,
        std::integral_constant<bool,0> __formal)
{
  while ( _Count )
  {
    if ( _First )
    {
      _First->m_isNoCache = 0;
      extension::BasicFutureObject<extension::AsyncFileImage,void>::Body::GetSharedEmpty(&_First->m_body);
    }
    --_Count;
    ++_First;
  }
}

void __fastcall std::_Uninitialized_default_fill_n1<extension::BasicFutureObject<OGLCamera,void> *,unsigned __int64,std::allocator<extension::BasicFutureObject<OGLCamera,void>>>(
        extension::BasicFutureObject<OGLCamera,void> *_First,
        unsigned __int64 _Count,
        std::_Wrap_alloc<std::allocator<extension::BasicFutureObject<OGLCamera,void> > > *_Al,
        std::integral_constant<bool,0> __formal)
{
  while ( _Count )
  {
    if ( _First )
    {
      _First->m_isNoCache = 0;
      extension::BasicFutureObject<OGLCamera,void>::Body::GetSharedEmpty(&_First->m_body);
    }
    --_Count;
    ++_First;
  }
}

void __fastcall std::_Uninitialized_default_fill_n1<extension::BasicFutureObject<OGLSecondary,void> *,unsigned __int64,std::allocator<extension::BasicFutureObject<OGLSecondary,void>>>(
        extension::BasicFutureObject<OGLSecondary,void> *_First,
        unsigned __int64 _Count,
        std::_Wrap_alloc<std::allocator<extension::BasicFutureObject<OGLSecondary,void> > > *_Al,
        std::integral_constant<bool,0> __formal)
{
  while ( _Count )
  {
    if ( _First )
    {
      _First->m_isNoCache = 0;
      extension::BasicFutureObject<OGLSecondary,void>::Body::GetSharedEmpty(&_First->m_body);
    }
    --_Count;
    ++_First;
  }
}

void __fastcall std::_Uninitialized_default_fill_n1<std::unique_ptr<OGLModel> *,unsigned __int64,std::allocator<std::unique_ptr<OGLModel>>>(
        std::unique_ptr<OGLModel> *_First,
        unsigned __int64 _Count,
        std::_Wrap_alloc<std::allocator<std::unique_ptr<OGLModel> > > *_Al,
        std::integral_constant<bool,0> __formal)
{
  for ( ; _Count; --_Count )
  {
    if ( _First )
      _First->_Mypair._Myval2 = 0i64;
    ++_First;
  }
}

extension::future_asset_detail::FutureAssetJob::FileSpec *__fastcall std::_Uninitialized_move_al_unchecked1<extension::future_asset_detail::FutureAssetJob::FileSpec *,extension::future_asset_detail::FutureAssetJob::FileSpec *,std::allocator<extension::future_asset_detail::FutureAssetJob::FileSpec>>(
        extension::future_asset_detail::FutureAssetJob::FileSpec *_First,
        extension::future_asset_detail::FutureAssetJob::FileSpec *_Last,
        extension::future_asset_detail::FutureAssetJob::FileSpec *_Dest,
        std::_Wrap_alloc<std::allocator<extension::future_asset_detail::FutureAssetJob::FileSpec> > *_Al)
{
  extension::future_asset_detail::FutureAssetJob::FileSpec *v4; // rbx
  extension::future_asset_detail::FutureAssetJob::FileSpec *v6; // rdi
  std::string *p_filePath; // rsi

  v4 = _Dest;
  v6 = _First;
  if ( _First != _Last )
  {
    p_filePath = &_Dest->filePath;
    do
    {
      if ( v4 )
      {
        v4->uiFileType = v6->uiFileType;
        p_filePath->_Mypair._Myval2._Myres = 15i64;
        p_filePath->_Mypair._Myval2._Mysize = 0i64;
        p_filePath->_Mypair._Myval2._Bx._Buf[0] = 0;
        std::string::_Assign_rv(p_filePath, &v6->filePath);
        *(_DWORD *)p_filePath[1]._Mypair._Myval2._Bx._Buf = v6->iFileTypeIndex;
      }
      ++v4;
      p_filePath = (std::string *)((char *)p_filePath + 48);
      ++v6;
    }
    while ( v6 != _Last );
  }
  return v4;
}

extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> *__fastcall std::_Uninitialized_move_al_unchecked1<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> *,extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> *,std::allocator<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>>>(
        extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> *_First,
        extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> *_Last,
        extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> *_Dest,
        std::_Wrap_alloc<std::allocator<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> > > *_Al)
{
  extension::RefCountablePtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body> *p_m_body; // r9
  extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body *m_ptr; // rcx

  if ( _First != _Last )
  {
    p_m_body = &_First->m_body;
    do
    {
      if ( _Dest )
      {
        _Dest->m_isNoCache = BYTE1(p_m_body[-1].m_ptr);
        m_ptr = p_m_body->m_ptr;
        _Dest->m_body = (extension::RefCountablePtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>)p_m_body->m_ptr;
        if ( m_ptr )
          _InterlockedExchangeAdd64((volatile signed __int64 *)&m_ptr->m_refCount.m_ptr->m_sharedCount, 1ui64);
      }
      ++_Dest;
      p_m_body += 2;
    }
    while ( &p_m_body[-1] != (extension::RefCountablePtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body> *)_Last );
  }
  return _Dest;
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

std::unique_ptr<OGLModel> *__fastcall std::_Uninitialized_move_al_unchecked1<std::unique_ptr<OGLModel> *,std::unique_ptr<OGLModel> *,std::allocator<std::unique_ptr<OGLModel>>>(
        std::unique_ptr<OGLModel> *_First,
        std::unique_ptr<OGLModel> *_Last,
        std::unique_ptr<OGLModel> *_Dest,
        std::_Wrap_alloc<std::allocator<std::unique_ptr<OGLModel> > > *_Al)
{
  __int64 v4; // r9
  unsigned __int64 v5; // r10
  signed __int64 v6; // rcx
  OGLModel *v7; // rax

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
      {
        v7 = *(OGLModel **)((char *)&_Dest->_Mypair._Myval2 + v6);
        *(OGLModel **)((char *)&_Dest->_Mypair._Myval2 + v6) = 0i64;
        _Dest->_Mypair._Myval2 = v7;
      }
      ++_Dest;
      ++v4;
    }
    while ( v4 != v5 );
  }
  return _Dest;
}

std::unique_ptr<std::tuple<<lambda_224f2aff27d484af60707df2a7dcfac8> >> *__fastcall std::make_unique<std::tuple<_lambda_224f2aff27d484af60707df2a7dcfac8_>,_lambda_224f2aff27d484af60707df2a7dcfac8_>(
        std::unique_ptr<std::tuple<<lambda_224f2aff27d484af60707df2a7dcfac8> >> *result,
        extension::future_asset_detail::AsyncAssetModelBuilder::run::__l2::<lambda_224f2aff27d484af60707df2a7dcfac8> *<_Args_0>)
{
  std::tuple<<lambda_224f2aff27d484af60707df2a7dcfac8> > *v4; // rbx
  std::unique_ptr<std::tuple<<lambda_224f2aff27d484af60707df2a7dcfac8> >> *v5; // rax

  v4 = (std::tuple<<lambda_224f2aff27d484af60707df2a7dcfac8> > *)operator new(0x28ui64);
  v4->_Myfirst._Val.effPath._Mypair._Myval2._Myres = 15i64;
  v4->_Myfirst._Val.effPath._Mypair._Myval2._Mysize = 0i64;
  v4->_Myfirst._Val.effPath._Mypair._Myval2._Bx._Buf[0] = 0;
  std::string::_Assign_rv(&v4->_Myfirst._Val.effPath, &<_Args_0>->effPath);
  v5 = result;
  v4->_Myfirst._Val.effect = <_Args_0>->effect;
  result->_Mypair._Myval2 = v4;
  return v5;
}

std::locale::facet *__fastcall std::use_facet<std::num_put<char,std::ostreambuf_iterator<char>>>(
        const std::locale *_Loc)
{
  const std::locale::facet *v2; // rsi
  unsigned __int64 Id; // rdi
  std::locale::_Locimp *Ptr; // rcx
  std::locale::facet *v5; // rbx
  std::locale::_Locimp *v6; // rax
  __int64 pExceptionObject[6]; // [rsp+28h] [rbp-30h] BYREF
  std::_Lockit v9; // [rsp+60h] [rbp+8h] BYREF
  std::_Lockit v10; // [rsp+68h] [rbp+10h] BYREF
  std::locale::facet *_Ppf; // [rsp+70h] [rbp+18h] BYREF

  std::_Lockit::_Lockit(&v10, 0);
  v2 = std::_Facetptr<std::num_put<char,std::ostreambuf_iterator<char>>>::_Psave;
  _Ppf = (std::locale::facet *)std::_Facetptr<std::num_put<char,std::ostreambuf_iterator<char>>>::_Psave;
  Id = std::num_put<char,std::ostreambuf_iterator<char>>::id._Id;
  if ( !std::num_put<char,std::ostreambuf_iterator<char>>::id._Id )
  {
    std::_Lockit::_Lockit(&v9, 0);
    if ( std::num_put<char,std::ostreambuf_iterator<char>>::id._Id == Id )
      std::num_put<char,std::ostreambuf_iterator<char>>::id._Id = ++std::locale::id::_Id_cnt;
    std::_Lockit::~_Lockit(&v9);
    Id = std::num_put<char,std::ostreambuf_iterator<char>>::id._Id;
  }
  Ptr = _Loc->_Ptr;
  if ( Id >= Ptr->_Facetcount )
  {
    v5 = 0i64;
  }
  else
  {
    v5 = Ptr->_Facetvec[Id];
    if ( v5 )
      goto LABEL_18;
  }
  if ( !Ptr->_Xparent )
    goto LABEL_12;
  v6 = std::locale::_Getgloballocale();
  if ( Id < v6->_Facetcount )
  {
    v5 = v6->_Facetvec[Id];
LABEL_12:
    if ( v5 )
      goto LABEL_18;
  }
  if ( v2 )
  {
    v5 = (std::locale::facet *)v2;
  }
  else
  {
    if ( std::num_put<char,std::ostreambuf_iterator<char>>::_Getcat((const std::locale::facet **)&_Ppf, _Loc) == -1i64 )
    {
      pExceptionObject[2] = 0i64;
      pExceptionObject[1] = (__int64)"bad cast";
      pExceptionObject[0] = (__int64)&std::bad_cast::`vftable';
      CxxThrowException(pExceptionObject, &TI2_AVbad_cast_std__);
    }
    v5 = _Ppf;
    std::_Facetptr<std::num_put<char,std::ostreambuf_iterator<char>>>::_Psave = _Ppf;
    _Ppf->_Incref(_Ppf);
    std::_Facet_Register(v5);
  }
LABEL_18:
  std::_Lockit::~_Lockit(&v10);
  return v5;
}

std::locale::facet *__fastcall std::use_facet<std::numpunct<char>>(const std::locale *_Loc)
{
  const std::locale::facet *v2; // rsi
  unsigned __int64 Id; // rdi
  std::locale::_Locimp *Ptr; // rcx
  std::locale::facet *v5; // rbx
  std::locale::_Locimp *v6; // rax
  __int64 pExceptionObject[6]; // [rsp+28h] [rbp-30h] BYREF
  std::_Lockit v9; // [rsp+60h] [rbp+8h] BYREF
  std::_Lockit v10; // [rsp+68h] [rbp+10h] BYREF
  std::locale::facet *_Ppf; // [rsp+70h] [rbp+18h] BYREF

  std::_Lockit::_Lockit(&v10, 0);
  v2 = std::_Facetptr<std::numpunct<char>>::_Psave;
  _Ppf = (std::locale::facet *)std::_Facetptr<std::numpunct<char>>::_Psave;
  Id = std::numpunct<char>::id._Id;
  if ( !std::numpunct<char>::id._Id )
  {
    std::_Lockit::_Lockit(&v9, 0);
    if ( std::numpunct<char>::id._Id == Id )
      std::numpunct<char>::id._Id = ++std::locale::id::_Id_cnt;
    std::_Lockit::~_Lockit(&v9);
    Id = std::numpunct<char>::id._Id;
  }
  Ptr = _Loc->_Ptr;
  if ( Id >= Ptr->_Facetcount )
  {
    v5 = 0i64;
  }
  else
  {
    v5 = Ptr->_Facetvec[Id];
    if ( v5 )
      goto LABEL_18;
  }
  if ( !Ptr->_Xparent )
    goto LABEL_12;
  v6 = std::locale::_Getgloballocale();
  if ( Id < v6->_Facetcount )
  {
    v5 = v6->_Facetvec[Id];
LABEL_12:
    if ( v5 )
      goto LABEL_18;
  }
  if ( v2 )
  {
    v5 = (std::locale::facet *)v2;
  }
  else
  {
    if ( std::numpunct<char>::_Getcat((const std::locale::facet **)&_Ppf, _Loc) == -1i64 )
    {
      pExceptionObject[2] = 0i64;
      pExceptionObject[1] = (__int64)"bad cast";
      pExceptionObject[0] = (__int64)&std::bad_cast::`vftable';
      CxxThrowException(pExceptionObject, &TI2_AVbad_cast_std__);
    }
    v5 = _Ppf;
    std::_Facetptr<std::numpunct<char>>::_Psave = _Ppf;
    _Ppf->_Incref(_Ppf);
    std::_Facet_Register(v5);
  }
LABEL_18:
  std::_Lockit::~_Lockit(&v10);
  return v5;
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

void __fastcall extension::BasicFutureObject<OGLMotion,void>::BasicFutureObject<OGLMotion,void>(
        extension::BasicFutureObject<OGLMotion,void> *this,
        extension::FutureObjectSpec::NoCache_t __formal,
        const std::string *asset_path,
        const void *opt)
{
  extension::BasicFutureObject<OGLMotion,void>::Body *v6; // rsi
  const void *v7; // rdx
  const std::string *v8; // rbx
  const std::string *v9; // rax
  const void *v10; // r9
  extension::RefCountablePtr<extension::AsyncContent<OGLMotion> > *v11; // rax
  extension::BasicFutureObject<OGLMotion,void>::Body *v12; // rax
  char *Ptr; // rcx
  char *v14; // rax
  char *v15; // rcx
  char *v16; // rax
  extension::RefCountablePtr<extension::AsyncContent<OGLMotion> > v17; // [rsp+28h] [rbp-80h] BYREF
  __int64 v18; // [rsp+30h] [rbp-78h]
  extension::BasicFutureObject<OGLMotion,void>::Body *v19; // [rsp+38h] [rbp-70h]
  std::string v20; // [rsp+40h] [rbp-68h] BYREF
  std::string result; // [rsp+60h] [rbp-48h] BYREF

  v18 = -2i64;
  this->m_isNoCache = 1;
  v6 = (extension::BasicFutureObject<OGLMotion,void>::Body *)operator new(0x18ui64);
  v19 = v6;
  v8 = extension::FutureObjectJobManager<extension::exsound_detail::SoundBankImpl,void>::Stringize(&result, v7);
  v9 = extension::AsyncWorker::NormalizeAssetPath(&v20, asset_path);
  v11 = extension::FutureObjectJobManager<OGLMotion,void>::LoadStart(&v17, v9, v8, v10);
  extension::BasicFutureObject<OGLMotion,void>::Body::Body(
    v6,
    (extension::RefCountablePtr<extension::AsyncContent<OGLMotion> >)v11);
  this->m_body.m_ptr = v12;
  if ( v20._Mypair._Myval2._Myres >= 0x10 )
  {
    Ptr = v20._Mypair._Myval2._Bx._Ptr;
    if ( v20._Mypair._Myval2._Myres + 1 >= 0x1000 )
    {
      if ( (v20._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
        invalid_parameter_noinfo_noreturn();
      v14 = (char *)*((_QWORD *)v20._Mypair._Myval2._Bx._Ptr - 1);
      if ( v14 >= v20._Mypair._Myval2._Bx._Ptr )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(v20._Mypair._Myval2._Bx._Ptr - v14) < (char *)8 )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(v20._Mypair._Myval2._Bx._Ptr - v14) > (char *)0x27 )
        invalid_parameter_noinfo_noreturn();
      Ptr = (char *)*((_QWORD *)v20._Mypair._Myval2._Bx._Ptr - 1);
    }
    operator delete(Ptr);
  }
  v20._Mypair._Myval2._Myres = 15i64;
  v20._Mypair._Myval2._Mysize = 0i64;
  v20._Mypair._Myval2._Bx._Buf[0] = 0;
  if ( result._Mypair._Myval2._Myres >= 0x10 )
  {
    v15 = result._Mypair._Myval2._Bx._Ptr;
    if ( result._Mypair._Myval2._Myres + 1 >= 0x1000 )
    {
      if ( (result._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
        invalid_parameter_noinfo_noreturn();
      v16 = (char *)*((_QWORD *)result._Mypair._Myval2._Bx._Ptr - 1);
      if ( v16 >= result._Mypair._Myval2._Bx._Ptr )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(result._Mypair._Myval2._Bx._Ptr - v16) < (char *)8 )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(result._Mypair._Myval2._Bx._Ptr - v16) > (char *)0x27 )
        invalid_parameter_noinfo_noreturn();
      v15 = (char *)*((_QWORD *)result._Mypair._Myval2._Bx._Ptr - 1);
    }
    operator delete(v15);
  }
}

void __fastcall extension::BasicFutureObject<OGLSecondary,void>::BasicFutureObject<OGLSecondary,void>(
        extension::BasicFutureObject<OGLSecondary,void> *this,
        extension::FutureObjectSpec::NoCache_t __formal,
        const std::string *asset_path,
        const void *opt)
{
  extension::BasicFutureObject<OGLSecondary,void>::Body *v6; // rsi
  const void *v7; // rdx
  const std::string *v8; // rbx
  const std::string *v9; // rax
  const void *v10; // r9
  extension::RefCountablePtr<extension::AsyncContent<OGLSecondary> > *v11; // rax
  extension::BasicFutureObject<OGLSecondary,void>::Body *v12; // rax
  char *Ptr; // rcx
  char *v14; // rax
  char *v15; // rcx
  char *v16; // rax
  extension::RefCountablePtr<extension::AsyncContent<OGLSecondary> > v17; // [rsp+28h] [rbp-80h] BYREF
  __int64 v18; // [rsp+30h] [rbp-78h]
  extension::BasicFutureObject<OGLSecondary,void>::Body *v19; // [rsp+38h] [rbp-70h]
  std::string v20; // [rsp+40h] [rbp-68h] BYREF
  std::string result; // [rsp+60h] [rbp-48h] BYREF

  v18 = -2i64;
  this->m_isNoCache = 1;
  v6 = (extension::BasicFutureObject<OGLSecondary,void>::Body *)operator new(0x18ui64);
  v19 = v6;
  v8 = extension::FutureObjectJobManager<extension::exsound_detail::SoundBankImpl,void>::Stringize(&result, v7);
  v9 = extension::AsyncWorker::NormalizeAssetPath(&v20, asset_path);
  v11 = extension::FutureObjectJobManager<OGLSecondary,void>::LoadStart(&v17, v9, v8, v10);
  extension::BasicFutureObject<OGLSecondary,void>::Body::Body(
    v6,
    (extension::RefCountablePtr<extension::AsyncContent<OGLSecondary> >)v11);
  this->m_body.m_ptr = v12;
  if ( v20._Mypair._Myval2._Myres >= 0x10 )
  {
    Ptr = v20._Mypair._Myval2._Bx._Ptr;
    if ( v20._Mypair._Myval2._Myres + 1 >= 0x1000 )
    {
      if ( (v20._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
        invalid_parameter_noinfo_noreturn();
      v14 = (char *)*((_QWORD *)v20._Mypair._Myval2._Bx._Ptr - 1);
      if ( v14 >= v20._Mypair._Myval2._Bx._Ptr )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(v20._Mypair._Myval2._Bx._Ptr - v14) < (char *)8 )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(v20._Mypair._Myval2._Bx._Ptr - v14) > (char *)0x27 )
        invalid_parameter_noinfo_noreturn();
      Ptr = (char *)*((_QWORD *)v20._Mypair._Myval2._Bx._Ptr - 1);
    }
    operator delete(Ptr);
  }
  v20._Mypair._Myval2._Myres = 15i64;
  v20._Mypair._Myval2._Mysize = 0i64;
  v20._Mypair._Myval2._Bx._Buf[0] = 0;
  if ( result._Mypair._Myval2._Myres >= 0x10 )
  {
    v15 = result._Mypair._Myval2._Bx._Ptr;
    if ( result._Mypair._Myval2._Myres + 1 >= 0x1000 )
    {
      if ( (result._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
        invalid_parameter_noinfo_noreturn();
      v16 = (char *)*((_QWORD *)result._Mypair._Myval2._Bx._Ptr - 1);
      if ( v16 >= result._Mypair._Myval2._Bx._Ptr )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(result._Mypair._Myval2._Bx._Ptr - v16) < (char *)8 )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(result._Mypair._Myval2._Bx._Ptr - v16) > (char *)0x27 )
        invalid_parameter_noinfo_noreturn();
      v15 = (char *)*((_QWORD *)result._Mypair._Myval2._Bx._Ptr - 1);
    }
    operator delete(v15);
  }
}

void __fastcall extension::FutureObjectJob<extension::AsyncAsset>::FutureObjectJob<extension::AsyncAsset>(
        extension::FutureObjectJob<extension::AsyncAsset> *this,
        extension::RefCountablePtr<extension::AsyncContent<extension::AsyncAsset> > c)
{
  volatile signed __int64 *My_val; // r8
  extension::AsyncContent<extension::AsyncAsset> *v3; // rdi

  this->__vftable = (extension::FutureObjectJob<extension::AsyncAsset>_vtbl *)&AgSimpleThreadHost::`vftable';
  this->m_abort = 0;
  this->m_running = 1;
  this->__vftable = (extension::FutureObjectJob<extension::AsyncAsset>_vtbl *)&extension::FutureObjectJob<extension::AsyncAsset>::`vftable';
  My_val = (volatile signed __int64 *)c.m_ptr->m_refCount.m_value._My_val;
  this->m_content.m_ptr = (extension::AsyncContent<extension::AsyncAsset> *)c.m_ptr->m_refCount.m_value._My_val;
  if ( My_val )
    _InterlockedExchangeAdd64(My_val, 1ui64);
  _InterlockedExchangeAdd64((volatile signed __int64 *)&extension::FutureObjectSpec::s_futureObjectJobCount, 1ui64);
  v3 = (extension::AsyncContent<extension::AsyncAsset> *)c.m_ptr->m_refCount.m_value._My_val;
  if ( c.m_ptr->m_refCount.m_value._My_val
    && _InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFui64) == 1 )
  {
    if ( v3 )
    {
      extension::AsyncContent<extension::AsyncAsset>::~AsyncContent<extension::AsyncAsset>(v3);
      operator delete(v3, 0x68ui64);
    }
  }
}

void __fastcall extension::FutureObjectJob<extension::AsyncFileImage>::FutureObjectJob<extension::AsyncFileImage>(
        extension::FutureObjectJob<extension::AsyncFileImage> *this,
        extension::RefCountablePtr<extension::AsyncContent<extension::AsyncFileImage> > c)
{
  volatile signed __int64 *My_val; // r8
  extension::AsyncContent<extension::AsyncFileImage> *v3; // rdi

  this->__vftable = (extension::FutureObjectJob<extension::AsyncFileImage>_vtbl *)&AgSimpleThreadHost::`vftable';
  this->m_abort = 0;
  this->m_running = 1;
  this->__vftable = (extension::FutureObjectJob<extension::AsyncFileImage>_vtbl *)&extension::FutureObjectJob<extension::AsyncFileImage>::`vftable';
  My_val = (volatile signed __int64 *)c.m_ptr->m_refCount.m_value._My_val;
  this->m_content.m_ptr = (extension::AsyncContent<extension::AsyncFileImage> *)c.m_ptr->m_refCount.m_value._My_val;
  if ( My_val )
    _InterlockedExchangeAdd64(My_val, 1ui64);
  _InterlockedExchangeAdd64((volatile signed __int64 *)&extension::FutureObjectSpec::s_futureObjectJobCount, 1ui64);
  v3 = (extension::AsyncContent<extension::AsyncFileImage> *)c.m_ptr->m_refCount.m_value._My_val;
  if ( c.m_ptr->m_refCount.m_value._My_val
    && _InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFui64) == 1 )
  {
    if ( v3 )
    {
      extension::AsyncContent<extension::AsyncFileImage>::~AsyncContent<extension::AsyncFileImage>(v3);
      operator delete(v3, 0x68ui64);
    }
  }
}

void __fastcall extension::FutureObjectJob<OGLFigure>::FutureObjectJob<OGLFigure>(
        extension::FutureObjectJob<OGLFigure> *this,
        extension::RefCountablePtr<extension::AsyncContent<OGLFigure> > c)
{
  volatile signed __int64 *My_val; // r8
  extension::AsyncContent<OGLFigure> *v3; // rdi

  this->__vftable = (extension::FutureObjectJob<OGLFigure>_vtbl *)&AgSimpleThreadHost::`vftable';
  this->m_abort = 0;
  this->m_running = 1;
  this->__vftable = (extension::FutureObjectJob<OGLFigure>_vtbl *)&extension::FutureObjectJob<OGLFigure>::`vftable';
  My_val = (volatile signed __int64 *)c.m_ptr->m_refCount.m_value._My_val;
  this->m_content.m_ptr = (extension::AsyncContent<OGLFigure> *)c.m_ptr->m_refCount.m_value._My_val;
  if ( My_val )
    _InterlockedExchangeAdd64(My_val, 1ui64);
  _InterlockedExchangeAdd64((volatile signed __int64 *)&extension::FutureObjectSpec::s_futureObjectJobCount, 1ui64);
  v3 = (extension::AsyncContent<OGLFigure> *)c.m_ptr->m_refCount.m_value._My_val;
  if ( c.m_ptr->m_refCount.m_value._My_val
    && _InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFui64) == 1 )
  {
    if ( v3 )
    {
      extension::AsyncContent<OGLFigure>::~AsyncContent<OGLFigure>(v3);
      operator delete(v3, 0x68ui64);
    }
  }
}

void __fastcall extension::FutureObjectJob<OGLMirror>::FutureObjectJob<OGLMirror>(
        extension::FutureObjectJob<OGLMirror> *this,
        extension::RefCountablePtr<extension::AsyncContent<OGLMirror> > c)
{
  volatile signed __int64 *My_val; // r8
  extension::AsyncContent<OGLMirror> *v3; // rdi

  this->__vftable = (extension::FutureObjectJob<OGLMirror>_vtbl *)&AgSimpleThreadHost::`vftable';
  this->m_abort = 0;
  this->m_running = 1;
  this->__vftable = (extension::FutureObjectJob<OGLMirror>_vtbl *)&extension::FutureObjectJob<OGLMirror>::`vftable';
  My_val = (volatile signed __int64 *)c.m_ptr->m_refCount.m_value._My_val;
  this->m_content.m_ptr = (extension::AsyncContent<OGLMirror> *)c.m_ptr->m_refCount.m_value._My_val;
  if ( My_val )
    _InterlockedExchangeAdd64(My_val, 1ui64);
  _InterlockedExchangeAdd64((volatile signed __int64 *)&extension::FutureObjectSpec::s_futureObjectJobCount, 1ui64);
  v3 = (extension::AsyncContent<OGLMirror> *)c.m_ptr->m_refCount.m_value._My_val;
  if ( c.m_ptr->m_refCount.m_value._My_val
    && _InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFui64) == 1 )
  {
    if ( v3 )
    {
      extension::AsyncContent<OGLMirror>::~AsyncContent<OGLMirror>(v3);
      operator delete(v3, 0x68ui64);
    }
  }
}

void __fastcall extension::FutureObjectJob<OGLMotion>::FutureObjectJob<OGLMotion>(
        extension::FutureObjectJob<OGLMotion> *this,
        extension::RefCountablePtr<extension::AsyncContent<OGLMotion> > c)
{
  volatile signed __int64 *My_val; // r8
  extension::AsyncContent<OGLMotion> *v3; // rdi

  this->__vftable = (extension::FutureObjectJob<OGLMotion>_vtbl *)&AgSimpleThreadHost::`vftable';
  this->m_abort = 0;
  this->m_running = 1;
  this->__vftable = (extension::FutureObjectJob<OGLMotion>_vtbl *)&extension::FutureObjectJob<OGLMotion>::`vftable';
  My_val = (volatile signed __int64 *)c.m_ptr->m_refCount.m_value._My_val;
  this->m_content.m_ptr = (extension::AsyncContent<OGLMotion> *)c.m_ptr->m_refCount.m_value._My_val;
  if ( My_val )
    _InterlockedExchangeAdd64(My_val, 1ui64);
  _InterlockedExchangeAdd64((volatile signed __int64 *)&extension::FutureObjectSpec::s_futureObjectJobCount, 1ui64);
  v3 = (extension::AsyncContent<OGLMotion> *)c.m_ptr->m_refCount.m_value._My_val;
  if ( c.m_ptr->m_refCount.m_value._My_val
    && _InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFui64) == 1 )
  {
    if ( v3 )
    {
      extension::AsyncContent<OGLMotion>::~AsyncContent<OGLMotion>(v3);
      operator delete(v3, 0x68ui64);
    }
  }
}

void __fastcall extension::FutureObjectJob<OGLSecondary>::FutureObjectJob<OGLSecondary>(
        extension::FutureObjectJob<OGLSecondary> *this,
        extension::RefCountablePtr<extension::AsyncContent<OGLSecondary> > c)
{
  volatile signed __int64 *My_val; // r8
  extension::AsyncContent<OGLSecondary> *v3; // rdi

  this->__vftable = (extension::FutureObjectJob<OGLSecondary>_vtbl *)&AgSimpleThreadHost::`vftable';
  this->m_abort = 0;
  this->m_running = 1;
  this->__vftable = (extension::FutureObjectJob<OGLSecondary>_vtbl *)&extension::FutureObjectJob<OGLSecondary>::`vftable';
  My_val = (volatile signed __int64 *)c.m_ptr->m_refCount.m_value._My_val;
  this->m_content.m_ptr = (extension::AsyncContent<OGLSecondary> *)c.m_ptr->m_refCount.m_value._My_val;
  if ( My_val )
    _InterlockedExchangeAdd64(My_val, 1ui64);
  _InterlockedExchangeAdd64((volatile signed __int64 *)&extension::FutureObjectSpec::s_futureObjectJobCount, 1ui64);
  v3 = (extension::AsyncContent<OGLSecondary> *)c.m_ptr->m_refCount.m_value._My_val;
  if ( c.m_ptr->m_refCount.m_value._My_val
    && _InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFui64) == 1 )
  {
    if ( v3 )
    {
      extension::AsyncContent<OGLSecondary>::~AsyncContent<OGLSecondary>(v3);
      operator delete(v3, 0x68ui64);
    }
  }
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

void __fastcall extension::BasicFutureObject<extension::AsyncFileImage,void>::AssetCache::AssetCache(
        extension::BasicFutureObject<extension::AsyncFileImage,void>::AssetCache *this)
{
  extension::AssetCacheExpiredEntryCleaner *v1; // rax
  extension::BiLinkable<extension::asyncjob_detail::AssetCacheNode> *v2; // r8

  InitializeCriticalSection((LPCRITICAL_SECTION)&extension::BasicFutureObject<extension::AsyncFileImage,void>::s_cacheManager.extension::ExSimpleLockable<extension::BasicFutureObject<extension::AsyncFileImage,void>::AssetCache>);
  extension::BasicFutureObject<extension::AsyncFileImage,void>::s_cacheManager.m_Prev = &extension::BasicFutureObject<extension::AsyncFileImage,void>::s_cacheManager.extension::BiLinkable<extension::asyncjob_detail::AssetCacheNode>;
  extension::BasicFutureObject<extension::AsyncFileImage,void>::s_cacheManager.m_Next = &extension::BasicFutureObject<extension::AsyncFileImage,void>::s_cacheManager.extension::BiLinkable<extension::asyncjob_detail::AssetCacheNode>;
  extension::BasicFutureObject<extension::AsyncFileImage,void>::s_cacheManager.__vftable = (extension::BasicFutureObject<extension::AsyncFileImage,void>::AssetCache_vtbl *)&extension::asyncjob_detail::AssetCacheBase::`vftable';
  v1 = extension::_anonymous_namespace_::AssetCacheExpiredEntryCleaner::Instance();
  if ( v1 )
    v2 = &v1->extension::BiLinkable<extension::asyncjob_detail::AssetCacheNode>;
  else
    v2 = 0i64;
  extension::BasicFutureObject<extension::AsyncFileImage,void>::s_cacheManager.m_Next->extension::asyncjob_detail::AssetCacheBase::extension::asyncjob_detail::AssetCacheNode::extension::BiLinkable<extension::asyncjob_detail::AssetCacheNode>::m_Prev = v2->m_Prev;
  v2->m_Prev->m_Next = extension::BasicFutureObject<extension::AsyncFileImage,void>::s_cacheManager.m_Next;
  extension::BasicFutureObject<extension::AsyncFileImage,void>::s_cacheManager.m_Next = v2;
  v2->m_Prev = &extension::BasicFutureObject<extension::AsyncFileImage,void>::s_cacheManager.extension::BiLinkable<extension::asyncjob_detail::AssetCacheNode>;
  extension::BasicFutureObject<extension::AsyncFileImage,void>::s_cacheManager.__vftable = (extension::BasicFutureObject<extension::AsyncFileImage,void>::AssetCache_vtbl *)&extension::BasicFutureObject<extension::AsyncFileImage,void>::AssetCache::`vftable';
  std::unordered_map<std::string,extension::RCWeakPtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body>>::unordered_map<std::string,extension::RCWeakPtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body>>((std::unordered_map<std::string,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body>> *)&extension::BasicFutureObject<extension::AsyncFileImage,void>::s_cacheManager.m_cachedObjectMap);
}

void __fastcall extension::BasicFutureObject<OGLCamera,void>::AssetCache::AssetCache(
        extension::BasicFutureObject<OGLCamera,void>::AssetCache *this)
{
  extension::AssetCacheExpiredEntryCleaner *v1; // rax
  extension::BiLinkable<extension::asyncjob_detail::AssetCacheNode> *v2; // r8

  InitializeCriticalSection((LPCRITICAL_SECTION)&extension::BasicFutureObject<OGLCamera,void>::s_cacheManager.extension::ExSimpleLockable<extension::BasicFutureObject<OGLCamera,void>::AssetCache>);
  extension::BasicFutureObject<OGLCamera,void>::s_cacheManager.m_Prev = &extension::BasicFutureObject<OGLCamera,void>::s_cacheManager.extension::BiLinkable<extension::asyncjob_detail::AssetCacheNode>;
  extension::BasicFutureObject<OGLCamera,void>::s_cacheManager.m_Next = &extension::BasicFutureObject<OGLCamera,void>::s_cacheManager.extension::BiLinkable<extension::asyncjob_detail::AssetCacheNode>;
  extension::BasicFutureObject<OGLCamera,void>::s_cacheManager.__vftable = (extension::BasicFutureObject<OGLCamera,void>::AssetCache_vtbl *)&extension::asyncjob_detail::AssetCacheBase::`vftable';
  v1 = extension::_anonymous_namespace_::AssetCacheExpiredEntryCleaner::Instance();
  if ( v1 )
    v2 = &v1->extension::BiLinkable<extension::asyncjob_detail::AssetCacheNode>;
  else
    v2 = 0i64;
  extension::BasicFutureObject<OGLCamera,void>::s_cacheManager.m_Next->extension::asyncjob_detail::AssetCacheBase::extension::asyncjob_detail::AssetCacheNode::extension::BiLinkable<extension::asyncjob_detail::AssetCacheNode>::m_Prev = v2->m_Prev;
  v2->m_Prev->m_Next = extension::BasicFutureObject<OGLCamera,void>::s_cacheManager.m_Next;
  extension::BasicFutureObject<OGLCamera,void>::s_cacheManager.m_Next = v2;
  v2->m_Prev = &extension::BasicFutureObject<OGLCamera,void>::s_cacheManager.extension::BiLinkable<extension::asyncjob_detail::AssetCacheNode>;
  extension::BasicFutureObject<OGLCamera,void>::s_cacheManager.__vftable = (extension::BasicFutureObject<OGLCamera,void>::AssetCache_vtbl *)&extension::BasicFutureObject<OGLCamera,void>::AssetCache::`vftable';
  std::unordered_map<std::string,extension::RCWeakPtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body>>::unordered_map<std::string,extension::RCWeakPtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body>>((std::unordered_map<std::string,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body>> *)&extension::BasicFutureObject<OGLCamera,void>::s_cacheManager.m_cachedObjectMap);
}

void __fastcall extension::AsyncAsset::AsyncAsset(extension::AsyncAsset *this)
{
  this->m_effPath._Mypair._Myval2._Myres = 15i64;
  this->m_effPath._Mypair._Myval2._Mysize = 0i64;
  this->m_effPath._Mypair._Myval2._Bx._Buf[0] = 0;
  this->m_figures._Mypair._Myval2._Myfirst = 0i64;
  this->m_figures._Mypair._Myval2._Mylast = 0i64;
  this->m_figures._Mypair._Myval2._Myend = 0i64;
  this->m_motions._Mypair._Myval2._Myfirst = 0i64;
  this->m_motions._Mypair._Myval2._Mylast = 0i64;
  this->m_motions._Mypair._Myval2._Myend = 0i64;
  this->m_textures._Mypair._Myval2._Myfirst = 0i64;
  this->m_textures._Mypair._Myval2._Mylast = 0i64;
  this->m_textures._Mypair._Myval2._Myend = 0i64;
  this->m_extTextures._Mypair._Myval2._Myfirst = 0i64;
  this->m_extTextures._Mypair._Myval2._Mylast = 0i64;
  this->m_extTextures._Mypair._Myval2._Myend = 0i64;
  this->m_mirrors._Mypair._Myval2._Myfirst = 0i64;
  this->m_mirrors._Mypair._Myval2._Mylast = 0i64;
  this->m_mirrors._Mypair._Myval2._Myend = 0i64;
  this->m_cameras._Mypair._Myval2._Myfirst = 0i64;
  this->m_cameras._Mypair._Myval2._Mylast = 0i64;
  this->m_cameras._Mypair._Myval2._Myend = 0i64;
  this->m_secondaries._Mypair._Myval2._Myfirst = 0i64;
  this->m_secondaries._Mypair._Myval2._Mylast = 0i64;
  this->m_secondaries._Mypair._Myval2._Myend = 0i64;
  this->m_models._Mypair._Myval2._Myfirst = 0i64;
  this->m_models._Mypair._Myval2._Mylast = 0i64;
  this->m_models._Mypair._Myval2._Myend = 0i64;
  this->m_effect._Mypair._Myval2 = 0i64;
  this->m_modelTypes._Mypair._Myval2._Myfirst = 0i64;
  this->m_modelTypes._Mypair._Myval2._Mylast = 0i64;
  this->m_modelTypes._Mypair._Myval2._Myend = 0i64;
}

void __fastcall extension::future_asset_detail::AsyncAssetModelBuilder::AsyncAssetModelBuilder(
        extension::future_asset_detail::AsyncAssetModelBuilder *this,
        extension::RefCountablePtr<extension::AsyncContent<extension::AsyncAsset> > shared)
{
  extension::AsyncContent<extension::AsyncAsset> *My_val; // rax
  extension::AsyncContent<extension::AsyncAsset> *v5; // rdi
  extension::RefCountablePtr<extension::AsyncContent<extension::AsyncAsset> > c; // [rsp+30h] [rbp+8h] BYREF

  My_val = (extension::AsyncContent<extension::AsyncAsset> *)shared.m_ptr->m_refCount.m_value._My_val;
  c.m_ptr = My_val;
  if ( My_val )
    _InterlockedExchangeAdd64((volatile signed __int64 *)My_val, 1ui64);
  extension::FutureObjectJob<extension::AsyncAsset>::FutureObjectJob<extension::AsyncAsset>(
    this,
    (extension::RefCountablePtr<extension::AsyncContent<extension::AsyncAsset> >)&c);
  this->__vftable = (extension::future_asset_detail::AsyncAssetModelBuilder_vtbl *)&extension::future_asset_detail::AsyncAssetModelBuilder::`vftable';
  this->m_formatVersion = 0;
  this->m_effPath._Mypair._Myval2._Myres = 15i64;
  this->m_effPath._Mypair._Myval2._Mysize = 0i64;
  this->m_effPath._Mypair._Myval2._Bx._Buf[0] = 0;
  this->m_modelInfos._Mypair._Myval2._Myfirst = 0i64;
  this->m_modelInfos._Mypair._Myval2._Mylast = 0i64;
  this->m_modelInfos._Mypair._Myval2._Myend = 0i64;
  this->m_figures._Mypair._Myval2._Myfirst = 0i64;
  this->m_figures._Mypair._Myval2._Mylast = 0i64;
  this->m_figures._Mypair._Myval2._Myend = 0i64;
  this->m_motions._Mypair._Myval2._Myfirst = 0i64;
  this->m_motions._Mypair._Myval2._Mylast = 0i64;
  this->m_motions._Mypair._Myval2._Myend = 0i64;
  this->m_textures._Mypair._Myval2._Myfirst = 0i64;
  this->m_textures._Mypair._Myval2._Mylast = 0i64;
  this->m_textures._Mypair._Myval2._Myend = 0i64;
  this->m_mirrors._Mypair._Myval2._Myfirst = 0i64;
  this->m_mirrors._Mypair._Myval2._Mylast = 0i64;
  this->m_mirrors._Mypair._Myval2._Myend = 0i64;
  this->m_cameras._Mypair._Myval2._Myfirst = 0i64;
  this->m_cameras._Mypair._Myval2._Mylast = 0i64;
  this->m_cameras._Mypair._Myval2._Myend = 0i64;
  this->m_secondaries._Mypair._Myval2._Myfirst = 0i64;
  this->m_secondaries._Mypair._Myval2._Mylast = 0i64;
  this->m_secondaries._Mypair._Myval2._Myend = 0i64;
  this->m_models._Mypair._Myval2._Myfirst = 0i64;
  this->m_models._Mypair._Myval2._Mylast = 0i64;
  this->m_models._Mypair._Myval2._Myend = 0i64;
  this->m_shaderFXFiles._Mypair._Myval2._Myfirst = 0i64;
  this->m_shaderFXFiles._Mypair._Myval2._Mylast = 0i64;
  this->m_shaderFXFiles._Mypair._Myval2._Myend = 0i64;
  this->m_effect._Mypair._Myval2 = 0i64;
  v5 = (extension::AsyncContent<extension::AsyncAsset> *)shared.m_ptr->m_refCount.m_value._My_val;
  if ( v5 )
  {
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFui64) == 1 )
    {
      extension::AsyncContent<extension::AsyncAsset>::~AsyncContent<extension::AsyncAsset>(v5);
      operator delete(v5, 0x68ui64);
    }
  }
}

void __fastcall extension::BasicFutureObject<extension::AsyncFileImage,void>::Body::Body(
        extension::BasicFutureObject<extension::AsyncFileImage,void>::Body *this,
        extension::RefCountablePtr<extension::AsyncContent<extension::AsyncFileImage> > shared)
{
  volatile signed __int64 *My_val; // rax
  extension::AsyncContent<extension::AsyncFileImage> *v5; // rbx
  extension::RefCountableWeakSupportBase::WeakProxy *v6; // [rsp+48h] [rbp+10h]

  this->__vftable = (extension::BasicFutureObject<extension::AsyncFileImage,void>::Body_vtbl *)&extension::RefCountableWeakSupportBase::`vftable';
  v6 = (extension::RefCountableWeakSupportBase::WeakProxy *)operator new(0x18ui64);
  v6->m_refCount.m_value._My_val = 1i64;
  v6->m_principal = this;
  v6->m_sharedCount.m_value._My_val = 0i64;
  v6->m_sharedCount.m_value._My_val = 1i64;
  this->m_refCount.m_ptr = v6;
  this->__vftable = (extension::BasicFutureObject<extension::AsyncFileImage,void>::Body_vtbl *)&extension::BasicFutureObject<extension::AsyncFileImage,void>::Body::`vftable';
  My_val = (volatile signed __int64 *)shared.m_ptr->m_refCount.m_value._My_val;
  this->m_content.m_ptr = (extension::AsyncContent<extension::AsyncFileImage> *)shared.m_ptr->m_refCount.m_value._My_val;
  if ( My_val )
    _InterlockedExchangeAdd64(My_val, 1ui64);
  v5 = (extension::AsyncContent<extension::AsyncFileImage> *)shared.m_ptr->m_refCount.m_value._My_val;
  if ( v5 )
  {
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFui64) == 1 )
    {
      extension::AsyncContent<extension::AsyncFileImage>::~AsyncContent<extension::AsyncFileImage>(v5);
      operator delete(v5, 0x68ui64);
    }
  }
}

void __fastcall extension::BasicFutureObject<OGLCamera,void>::Body::Body(
        extension::BasicFutureObject<OGLCamera,void>::Body *this,
        extension::RefCountablePtr<extension::AsyncContent<OGLCamera> > shared)
{
  volatile signed __int64 *My_val; // rax
  extension::AsyncContent<OGLCamera> *v5; // rcx
  extension::RefCountableWeakSupportBase::WeakProxy *v6; // [rsp+48h] [rbp+10h]

  this->__vftable = (extension::BasicFutureObject<OGLCamera,void>::Body_vtbl *)&extension::RefCountableWeakSupportBase::`vftable';
  v6 = (extension::RefCountableWeakSupportBase::WeakProxy *)operator new(0x18ui64);
  v6->m_refCount.m_value._My_val = 1i64;
  v6->m_principal = this;
  v6->m_sharedCount.m_value._My_val = 0i64;
  v6->m_sharedCount.m_value._My_val = 1i64;
  this->m_refCount.m_ptr = v6;
  this->__vftable = (extension::BasicFutureObject<OGLCamera,void>::Body_vtbl *)&extension::BasicFutureObject<OGLCamera,void>::Body::`vftable';
  My_val = (volatile signed __int64 *)shared.m_ptr->m_refCount.m_value._My_val;
  this->m_content.m_ptr = (extension::AsyncContent<OGLCamera> *)shared.m_ptr->m_refCount.m_value._My_val;
  if ( My_val )
    _InterlockedExchangeAdd64(My_val, 1ui64);
  v5 = (extension::AsyncContent<OGLCamera> *)shared.m_ptr->m_refCount.m_value._My_val;
  if ( shared.m_ptr->m_refCount.m_value._My_val
    && _InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFui64) == 1 )
  {
    if ( v5 )
      extension::AsyncContent<OGLCamera>::`scalar deleting destructor'(v5, 0);
  }
}

void __fastcall extension::BasicFutureObject<OGLSecondary,void>::Body::Body(
        extension::BasicFutureObject<OGLSecondary,void>::Body *this,
        extension::RefCountablePtr<extension::AsyncContent<OGLSecondary> > shared)
{
  volatile signed __int64 *My_val; // rax
  extension::AsyncContent<OGLSecondary> *v5; // rbx
  extension::RefCountableWeakSupportBase::WeakProxy *v6; // [rsp+48h] [rbp+10h]

  this->__vftable = (extension::BasicFutureObject<OGLSecondary,void>::Body_vtbl *)&extension::RefCountableWeakSupportBase::`vftable';
  v6 = (extension::RefCountableWeakSupportBase::WeakProxy *)operator new(0x18ui64);
  v6->m_refCount.m_value._My_val = 1i64;
  v6->m_principal = this;
  v6->m_sharedCount.m_value._My_val = 0i64;
  v6->m_sharedCount.m_value._My_val = 1i64;
  this->m_refCount.m_ptr = v6;
  this->__vftable = (extension::BasicFutureObject<OGLSecondary,void>::Body_vtbl *)&extension::BasicFutureObject<OGLSecondary,void>::Body::`vftable';
  My_val = (volatile signed __int64 *)shared.m_ptr->m_refCount.m_value._My_val;
  this->m_content.m_ptr = (extension::AsyncContent<OGLSecondary> *)shared.m_ptr->m_refCount.m_value._My_val;
  if ( My_val )
    _InterlockedExchangeAdd64(My_val, 1ui64);
  v5 = (extension::AsyncContent<OGLSecondary> *)shared.m_ptr->m_refCount.m_value._My_val;
  if ( v5 )
  {
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFui64) == 1 )
    {
      extension::AsyncContent<OGLSecondary>::~AsyncContent<OGLSecondary>(v5);
      operator delete(v5, 0x68ui64);
    }
  }
}

void __fastcall extension::future_asset_detail::FutureAssetJob::FutureAssetJob(
        extension::future_asset_detail::FutureAssetJob *this,
        extension::RefCountablePtr<extension::AsyncContent<extension::AsyncAsset> > c,
        const extension::FutureAssetOption *opt)
{
  extension::AsyncContent<extension::AsyncAsset> *My_val; // rax
  std::string *p_effectPath; // rax
  std::string *p_baseCharaPath; // rax
  extension::AsyncContent<extension::AsyncAsset> *v9; // rbx
  extension::RefCountablePtr<extension::AsyncContent<extension::AsyncAsset> > ca; // [rsp+68h] [rbp+20h] BYREF

  My_val = (extension::AsyncContent<extension::AsyncAsset> *)c.m_ptr->m_refCount.m_value._My_val;
  ca.m_ptr = My_val;
  if ( My_val )
    _InterlockedExchangeAdd64((volatile signed __int64 *)My_val, 1ui64);
  extension::FutureObjectJob<extension::AsyncAsset>::FutureObjectJob<extension::AsyncAsset>(
    this,
    (extension::RefCountablePtr<extension::AsyncContent<extension::AsyncAsset> >)&ca);
  this->__vftable = (extension::future_asset_detail::FutureAssetJob_vtbl *)&extension::future_asset_detail::FutureAssetJob::`vftable';
  this->m_createOption.playerNo = 1;
  *(_WORD *)&this->m_createOption.disableShaderFXMaterialLight = 0;
  this->m_createOption.bNoMotion = 0;
  p_effectPath = &this->m_createOption.effectPath;
  this->m_createOption.effectPath._Mypair._Myval2._Myres = 15i64;
  this->m_createOption.effectPath._Mypair._Myval2._Mysize = 0i64;
  if ( this->m_createOption.effectPath._Mypair._Myval2._Myres >= 0x10 )
    p_effectPath = (std::string *)p_effectPath->_Mypair._Myval2._Bx._Ptr;
  p_effectPath->_Mypair._Myval2._Bx._Buf[0] = 0;
  this->m_createOption.baseDataFlag = 0;
  p_baseCharaPath = &this->m_createOption.baseCharaPath;
  this->m_createOption.baseCharaPath._Mypair._Myval2._Myres = 15i64;
  this->m_createOption.baseCharaPath._Mypair._Myval2._Mysize = 0i64;
  if ( this->m_createOption.baseCharaPath._Mypair._Myval2._Myres >= 0x10 )
    p_baseCharaPath = (std::string *)p_baseCharaPath->_Mypair._Myval2._Bx._Ptr;
  p_baseCharaPath->_Mypair._Myval2._Bx._Buf[0] = 0;
  this->m_createOption.fileSetting._Mypair._Myval2._Myfirst = 0i64;
  this->m_createOption.fileSetting._Mypair._Myval2._Mylast = 0i64;
  this->m_createOption.fileSetting._Mypair._Myval2._Myend = 0i64;
  if ( opt )
    extension::FutureAssetOption::operator=(&this->m_createOption, opt);
  v9 = (extension::AsyncContent<extension::AsyncAsset> *)c.m_ptr->m_refCount.m_value._My_val;
  if ( v9 )
  {
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v9, 0xFFFFFFFFFFFFFFFFui64) == 1 )
    {
      extension::AsyncContent<extension::AsyncAsset>::~AsyncContent<extension::AsyncAsset>(v9);
      operator delete(v9, 0x68ui64);
    }
  }
}

void __fastcall extension::future_asset_detail::FutureCameraJob::FutureCameraJob(
        extension::future_asset_detail::FutureCameraJob *this,
        extension::RefCountablePtr<extension::AsyncContent<OGLCamera> > c)
{
  extension::AsyncContent<OGLCamera> *My_val; // rax
  extension::AsyncContent<OGLCamera> *v5; // rcx
  extension::AsyncContent<OGLCamera> *v6; // [rsp+30h] [rbp+8h]

  My_val = (extension::AsyncContent<OGLCamera> *)c.m_ptr->m_refCount.m_value._My_val;
  v6 = (extension::AsyncContent<OGLCamera> *)c.m_ptr->m_refCount.m_value._My_val;
  if ( c.m_ptr->m_refCount.m_value._My_val )
  {
    _InterlockedExchangeAdd64((volatile signed __int64 *)My_val, 1ui64);
    My_val = v6;
  }
  this->__vftable = (extension::future_asset_detail::FutureCameraJob_vtbl *)&AgSimpleThreadHost::`vftable';
  this->m_abort = 0;
  this->__vftable = (extension::future_asset_detail::FutureCameraJob_vtbl *)&extension::FutureObjectJob<OGLCamera>::`vftable';
  this->m_running = 1;
  this->m_content.m_ptr = My_val;
  if ( My_val )
    _InterlockedExchangeAdd64((volatile signed __int64 *)My_val, 1ui64);
  _InterlockedExchangeAdd64((volatile signed __int64 *)&extension::FutureObjectSpec::s_futureObjectJobCount, 1ui64);
  if ( v6 && _InterlockedExchangeAdd64((volatile signed __int64 *)v6, 0xFFFFFFFFFFFFFFFFui64) == 1 )
    extension::AsyncContent<OGLCamera>::`scalar deleting destructor'(v6, (unsigned int)c.m_ptr);
  this->__vftable = (extension::future_asset_detail::FutureCameraJob_vtbl *)&extension::future_asset_detail::FutureCameraJob::`vftable';
  v5 = (extension::AsyncContent<OGLCamera> *)c.m_ptr->m_refCount.m_value._My_val;
  if ( c.m_ptr->m_refCount.m_value._My_val
    && _InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFui64) == 1 )
  {
    if ( v5 )
      extension::AsyncContent<OGLCamera>::`scalar deleting destructor'(v5, (unsigned int)c.m_ptr);
  }
}

void __fastcall extension::future_asset_detail::FutureCurveJob::FutureCurveJob(
        extension::future_asset_detail::FutureCurveJob *this,
        extension::RefCountablePtr<extension::AsyncContent<OGLCurve> > c)
{
  extension::AsyncContent<OGLCurve> *My_val; // rax
  extension::AsyncContent<OGLCurve> *v5; // rcx
  extension::AsyncContent<OGLCurve> *v6; // [rsp+30h] [rbp+8h]

  My_val = (extension::AsyncContent<OGLCurve> *)c.m_ptr->m_refCount.m_value._My_val;
  v6 = (extension::AsyncContent<OGLCurve> *)c.m_ptr->m_refCount.m_value._My_val;
  if ( c.m_ptr->m_refCount.m_value._My_val )
  {
    _InterlockedExchangeAdd64((volatile signed __int64 *)My_val, 1ui64);
    My_val = v6;
  }
  this->__vftable = (extension::future_asset_detail::FutureCurveJob_vtbl *)&AgSimpleThreadHost::`vftable';
  this->m_abort = 0;
  this->__vftable = (extension::future_asset_detail::FutureCurveJob_vtbl *)&extension::FutureObjectJob<OGLCurve>::`vftable';
  this->m_running = 1;
  this->m_content.m_ptr = My_val;
  if ( My_val )
    _InterlockedExchangeAdd64((volatile signed __int64 *)My_val, 1ui64);
  _InterlockedExchangeAdd64((volatile signed __int64 *)&extension::FutureObjectSpec::s_futureObjectJobCount, 1ui64);
  if ( v6 && _InterlockedExchangeAdd64((volatile signed __int64 *)v6, 0xFFFFFFFFFFFFFFFFui64) == 1 )
    extension::AsyncContent<OGLCurve>::`scalar deleting destructor'(v6, (unsigned int)c.m_ptr);
  this->__vftable = (extension::future_asset_detail::FutureCurveJob_vtbl *)&extension::future_asset_detail::FutureCurveJob::`vftable';
  v5 = (extension::AsyncContent<OGLCurve> *)c.m_ptr->m_refCount.m_value._My_val;
  if ( c.m_ptr->m_refCount.m_value._My_val
    && _InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFui64) == 1 )
  {
    if ( v5 )
      extension::AsyncContent<OGLCurve>::`scalar deleting destructor'(v5, (unsigned int)c.m_ptr);
  }
}

void __fastcall extension::future_asset_detail::FutureFigureJob::FutureFigureJob(
        extension::future_asset_detail::FutureFigureJob *this,
        extension::RefCountablePtr<extension::AsyncContent<OGLFigure> > c,
        const extension::FutureFigureOption *opt)
{
  extension::AsyncContent<OGLFigure> *My_val; // rax
  extension::AsyncContent<OGLFigure> *v7; // rdi
  extension::RefCountablePtr<extension::AsyncContent<OGLFigure> > ca; // [rsp+60h] [rbp+18h] BYREF

  My_val = (extension::AsyncContent<OGLFigure> *)c.m_ptr->m_refCount.m_value._My_val;
  ca.m_ptr = My_val;
  if ( My_val )
    _InterlockedExchangeAdd64((volatile signed __int64 *)My_val, 1ui64);
  extension::FutureObjectJob<OGLFigure>::FutureObjectJob<OGLFigure>(
    this,
    (extension::RefCountablePtr<extension::AsyncContent<OGLFigure> >)&ca);
  this->__vftable = (extension::future_asset_detail::FutureFigureJob_vtbl *)&extension::future_asset_detail::FutureFigureJob::`vftable';
  *(_WORD *)&this->m_createOption.bBaseFigure = 0;
  this->m_createOption.bNoMotion = 0;
  this->m_createOption.fileSetting._Mypair._Myval2._Myfirst = 0i64;
  this->m_createOption.fileSetting._Mypair._Myval2._Mylast = 0i64;
  this->m_createOption.fileSetting._Mypair._Myval2._Myend = 0i64;
  if ( opt )
  {
    this->m_createOption.bBaseFigure = opt->bBaseFigure;
    this->m_createOption.bMemoryAllocationByCPU = opt->bMemoryAllocationByCPU;
    this->m_createOption.bNoMotion = opt->bNoMotion;
    std::vector<extension::FutureAssetOptionFileSetting>::operator=(
      &this->m_createOption.fileSetting,
      &opt->fileSetting);
  }
  v7 = (extension::AsyncContent<OGLFigure> *)c.m_ptr->m_refCount.m_value._My_val;
  if ( v7 )
  {
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v7, 0xFFFFFFFFFFFFFFFFui64) == 1 )
    {
      extension::AsyncContent<OGLFigure>::~AsyncContent<OGLFigure>(v7);
      operator delete(v7, 0x68ui64);
    }
  }
}

void __fastcall extension::future_asset_detail::FutureFileImageJob::FutureFileImageJob(
        extension::future_asset_detail::FutureFileImageJob *this,
        extension::RefCountablePtr<extension::AsyncContent<extension::AsyncFileImage> > c)
{
  extension::AsyncContent<extension::AsyncFileImage> *My_val; // rax
  extension::AsyncContent<extension::AsyncFileImage> *v5; // rdi
  extension::RefCountablePtr<extension::AsyncContent<extension::AsyncFileImage> > ca; // [rsp+30h] [rbp+8h] BYREF

  My_val = (extension::AsyncContent<extension::AsyncFileImage> *)c.m_ptr->m_refCount.m_value._My_val;
  ca.m_ptr = My_val;
  if ( My_val )
    _InterlockedExchangeAdd64((volatile signed __int64 *)My_val, 1ui64);
  extension::FutureObjectJob<extension::AsyncFileImage>::FutureObjectJob<extension::AsyncFileImage>(
    this,
    (extension::RefCountablePtr<extension::AsyncContent<extension::AsyncFileImage> >)&ca);
  this->__vftable = (extension::future_asset_detail::FutureFileImageJob_vtbl *)&extension::future_asset_detail::FutureFileImageJob::`vftable';
  v5 = (extension::AsyncContent<extension::AsyncFileImage> *)c.m_ptr->m_refCount.m_value._My_val;
  if ( v5 )
  {
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFui64) == 1 )
    {
      extension::AsyncContent<extension::AsyncFileImage>::~AsyncContent<extension::AsyncFileImage>(v5);
      operator delete(v5, 0x68ui64);
    }
  }
}

void __fastcall extension::future_asset_detail::FutureImageJob::FutureImageJob(
        extension::future_asset_detail::FutureImageJob *this,
        extension::RefCountablePtr<extension::AsyncContent<Image> > c,
        const extension::FutureImageOption *opt)
{
  extension::AsyncContent<Image> *My_val; // rcx
  bool v7; // zf
  int v8; // eax
  extension::AsyncContent<OGLTexture> *v9; // rcx

  My_val = (extension::AsyncContent<Image> *)c.m_ptr->m_refCount.m_value._My_val;
  if ( c.m_ptr->m_refCount.m_value._My_val )
    _InterlockedExchangeAdd64((volatile signed __int64 *)My_val, 1ui64);
  this->__vftable = (extension::future_asset_detail::FutureImageJob_vtbl *)&AgSimpleThreadHost::`vftable';
  this->m_abort = 0;
  this->__vftable = (extension::future_asset_detail::FutureImageJob_vtbl *)&extension::FutureObjectJob<Image>::`vftable';
  this->m_running = 1;
  this->m_content.m_ptr = My_val;
  if ( My_val )
    _InterlockedExchangeAdd64((volatile signed __int64 *)My_val, 1ui64);
  _InterlockedExchangeAdd64((volatile signed __int64 *)&extension::FutureObjectSpec::s_futureObjectJobCount, 1ui64);
  if ( My_val && _InterlockedExchangeAdd64((volatile signed __int64 *)My_val, 0xFFFFFFFFFFFFFFFFui64) == 1 )
    extension::AsyncContent<Image>::`scalar deleting destructor'(
      (extension::AsyncContent<OGLTexture> *)My_val,
      (unsigned int)c.m_ptr);
  v7 = GAME_SCREEN_HEIGHT == 1080;
  this->__vftable = (extension::future_asset_detail::FutureImageJob_vtbl *)&extension::future_asset_detail::FutureImageJob::`vftable';
  v8 = 1285;
  *(_WORD *)&this->m_createOption.transparent = 0;
  if ( !v7 )
    v8 = 1290;
  this->m_createOption.option = 0;
  this->m_createOption.texParam = v8;
  if ( opt )
  {
    *(_QWORD *)&this->m_createOption.transparent = *(_QWORD *)&opt->transparent;
    this->m_createOption.texParam = opt->texParam;
  }
  v9 = (extension::AsyncContent<OGLTexture> *)c.m_ptr->m_refCount.m_value._My_val;
  if ( c.m_ptr->m_refCount.m_value._My_val
    && _InterlockedExchangeAdd64((volatile signed __int64 *)v9, 0xFFFFFFFFFFFFFFFFui64) == 1 )
  {
    if ( v9 )
      extension::AsyncContent<Image>::`scalar deleting destructor'(v9, (unsigned int)c.m_ptr);
  }
}

void __fastcall extension::future_asset_detail::FutureMirrorJob::FutureMirrorJob(
        extension::future_asset_detail::FutureMirrorJob *this,
        extension::RefCountablePtr<extension::AsyncContent<OGLMirror> > c)
{
  extension::AsyncContent<OGLMirror> *My_val; // rax
  extension::AsyncContent<OGLMirror> *v5; // rdi
  extension::RefCountablePtr<extension::AsyncContent<OGLMirror> > ca; // [rsp+30h] [rbp+8h] BYREF

  My_val = (extension::AsyncContent<OGLMirror> *)c.m_ptr->m_refCount.m_value._My_val;
  ca.m_ptr = My_val;
  if ( My_val )
    _InterlockedExchangeAdd64((volatile signed __int64 *)My_val, 1ui64);
  extension::FutureObjectJob<OGLMirror>::FutureObjectJob<OGLMirror>(
    this,
    (extension::RefCountablePtr<extension::AsyncContent<OGLMirror> >)&ca);
  this->__vftable = (extension::future_asset_detail::FutureMirrorJob_vtbl *)&extension::future_asset_detail::FutureMirrorJob::`vftable';
  v5 = (extension::AsyncContent<OGLMirror> *)c.m_ptr->m_refCount.m_value._My_val;
  if ( v5 )
  {
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFui64) == 1 )
    {
      extension::AsyncContent<OGLMirror>::~AsyncContent<OGLMirror>(v5);
      operator delete(v5, 0x68ui64);
    }
  }
}

void __fastcall extension::future_asset_detail::FutureMotionJob::FutureMotionJob(
        extension::future_asset_detail::FutureMotionJob *this,
        extension::RefCountablePtr<extension::AsyncContent<OGLMotion> > c)
{
  extension::AsyncContent<OGLMotion> *My_val; // rax
  extension::AsyncContent<OGLMotion> *v5; // rdi
  extension::RefCountablePtr<extension::AsyncContent<OGLMotion> > ca; // [rsp+30h] [rbp+8h] BYREF

  My_val = (extension::AsyncContent<OGLMotion> *)c.m_ptr->m_refCount.m_value._My_val;
  ca.m_ptr = My_val;
  if ( My_val )
    _InterlockedExchangeAdd64((volatile signed __int64 *)My_val, 1ui64);
  extension::FutureObjectJob<OGLMotion>::FutureObjectJob<OGLMotion>(
    this,
    (extension::RefCountablePtr<extension::AsyncContent<OGLMotion> >)&ca);
  this->__vftable = (extension::future_asset_detail::FutureMotionJob_vtbl *)&extension::future_asset_detail::FutureMotionJob::`vftable';
  v5 = (extension::AsyncContent<OGLMotion> *)c.m_ptr->m_refCount.m_value._My_val;
  if ( v5 )
  {
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFui64) == 1 )
    {
      extension::AsyncContent<OGLMotion>::~AsyncContent<OGLMotion>(v5);
      operator delete(v5, 0x68ui64);
    }
  }
}

void __fastcall extension::future_asset_detail::FutureSecondaryJob::FutureSecondaryJob(
        extension::future_asset_detail::FutureSecondaryJob *this,
        extension::RefCountablePtr<extension::AsyncContent<OGLSecondary> > c)
{
  extension::AsyncContent<OGLSecondary> *My_val; // rax
  extension::AsyncContent<OGLSecondary> *v5; // rdi
  extension::RefCountablePtr<extension::AsyncContent<OGLSecondary> > ca; // [rsp+30h] [rbp+8h] BYREF

  My_val = (extension::AsyncContent<OGLSecondary> *)c.m_ptr->m_refCount.m_value._My_val;
  ca.m_ptr = My_val;
  if ( My_val )
    _InterlockedExchangeAdd64((volatile signed __int64 *)My_val, 1ui64);
  extension::FutureObjectJob<OGLSecondary>::FutureObjectJob<OGLSecondary>(
    this,
    (extension::RefCountablePtr<extension::AsyncContent<OGLSecondary> >)&ca);
  this->__vftable = (extension::future_asset_detail::FutureSecondaryJob_vtbl *)&extension::future_asset_detail::FutureSecondaryJob::`vftable';
  v5 = (extension::AsyncContent<OGLSecondary> *)c.m_ptr->m_refCount.m_value._My_val;
  if ( v5 )
  {
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFui64) == 1 )
    {
      extension::AsyncContent<OGLSecondary>::~AsyncContent<OGLSecondary>(v5);
      operator delete(v5, 0x68ui64);
    }
  }
}

void __fastcall extension::future_asset_detail::FutureTextureJob::FutureTextureJob(
        extension::future_asset_detail::FutureTextureJob *this,
        extension::RefCountablePtr<extension::AsyncContent<OGLTexture> > c,
        const extension::FutureTextureOption *opt)
{
  extension::AsyncContent<OGLTexture> *m_ptr; // rsi
  extension::AsyncContent<OGLTexture> *My_val; // rax
  extension::AsyncContent<OGLTexture> *v7; // rcx
  extension::AsyncContent<OGLTexture> *v8; // [rsp+70h] [rbp+18h]

  m_ptr = c.m_ptr;
  My_val = (extension::AsyncContent<OGLTexture> *)c.m_ptr->m_refCount.m_value._My_val;
  v8 = (extension::AsyncContent<OGLTexture> *)c.m_ptr->m_refCount.m_value._My_val;
  if ( c.m_ptr->m_refCount.m_value._My_val )
  {
    LODWORD(c.m_ptr) = _InterlockedExchangeAdd64((volatile signed __int64 *)My_val, 1ui64);
    My_val = v8;
  }
  this->__vftable = (extension::future_asset_detail::FutureTextureJob_vtbl *)&AgSimpleThreadHost::`vftable';
  this->m_abort = 0;
  this->m_running = 1;
  this->__vftable = (extension::future_asset_detail::FutureTextureJob_vtbl *)&extension::FutureObjectJob<OGLTexture>::`vftable';
  this->m_content.m_ptr = My_val;
  if ( My_val )
    _InterlockedExchangeAdd64((volatile signed __int64 *)My_val, 1ui64);
  _InterlockedExchangeAdd64((volatile signed __int64 *)&extension::FutureObjectSpec::s_futureObjectJobCount, 1ui64);
  if ( v8 && _InterlockedExchangeAdd64((volatile signed __int64 *)v8, 0xFFFFFFFFFFFFFFFFui64) == 1 )
    extension::AsyncContent<Image>::`scalar deleting destructor'(v8, (unsigned int)c.m_ptr);
  this->__vftable = (extension::future_asset_detail::FutureTextureJob_vtbl *)&extension::future_asset_detail::FutureTextureJob::`vftable';
  this->m_createOption.texParam = 1290;
  this->m_createOption.paletteData._Mypair._Myval2._Myfirst = 0i64;
  this->m_createOption.paletteData._Mypair._Myval2._Mylast = 0i64;
  this->m_createOption.paletteData._Mypair._Myval2._Myend = 0i64;
  this->m_createOption.keyIndex = -1;
  if ( opt )
  {
    this->m_createOption.texParam = opt->texParam;
    std::vector<unsigned char>::operator=(&this->m_createOption.paletteData, &opt->paletteData);
    this->m_createOption.keyIndex = opt->keyIndex;
  }
  v7 = (extension::AsyncContent<OGLTexture> *)m_ptr->m_refCount.m_value._My_val;
  if ( m_ptr->m_refCount.m_value._My_val
    && _InterlockedExchangeAdd64((volatile signed __int64 *)v7, 0xFFFFFFFFFFFFFFFFui64) == 1 )
  {
    if ( v7 )
      extension::AsyncContent<Image>::`scalar deleting destructor'(v7, (unsigned int)c.m_ptr);
  }
}

// attributes: thunk
void __fastcall extension::FutureStageOption::~FutureStageOption(
        extension::exsound_detail::SoundBankMediaDefinition *this)
{
  std::string::~string(&this->m_fileName);
}

void __fastcall extension::AsyncContent<OGLSecondary>::~AsyncContent<OGLSecondary>(
        extension::AsyncContent<OGLSecondary> *this)
{
  unsigned __int64 v2; // rdx
  OGLSecondary *Myval2; // rdi
  unsigned __int64 v4; // rdx
  OGLSecondary *v5; // rdi

  extension::lockable_detail::LockUnlock(&extension::GraphicsLock::s_mutex, 1);
  Myval2 = this->m_data._Mypair._Myval2;
  this->m_data._Mypair._Myval2 = 0i64;
  if ( Myval2 )
  {
    OGLSecondary::finalize(Myval2, v2);
    operator delete(Myval2, 0x28ui64);
  }
  extension::lockable_detail::LockUnlock(&extension::GraphicsLock::s_mutex, -1);
  v5 = this->m_data._Mypair._Myval2;
  if ( v5 )
  {
    OGLSecondary::finalize(this->m_data._Mypair._Myval2, v4);
    operator delete(v5, 0x28ui64);
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

void __fastcall extension::FutureObjectJob<extension::AsyncAsset>::~FutureObjectJob<extension::AsyncAsset>(
        extension::FutureObjectJob<extension::AsyncAsset> *this)
{
  extension::AsyncContent<extension::AsyncAsset> *m_ptr; // rdi
  extension::AsyncContent<extension::AsyncAsset> *v3; // rdi

  m_ptr = this->m_content.m_ptr;
  this->__vftable = (extension::FutureObjectJob<extension::AsyncAsset>_vtbl *)&extension::FutureObjectJob<extension::AsyncAsset>::`vftable';
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
    extension::AsyncContent<extension::AsyncAsset>::~AsyncContent<extension::AsyncAsset>(v3);
    operator delete(v3, 0x68ui64);
  }
  this->__vftable = (extension::FutureObjectJob<extension::AsyncAsset>_vtbl *)&AgIThreadHost::`vftable';
}

void __fastcall extension::FutureObjectJob<extension::AsyncFileImage>::~FutureObjectJob<extension::AsyncFileImage>(
        extension::FutureObjectJob<extension::AsyncFileImage> *this)
{
  extension::AsyncContent<extension::AsyncFileImage> *m_ptr; // rdi
  extension::AsyncContent<extension::AsyncFileImage> *v3; // rdi

  m_ptr = this->m_content.m_ptr;
  this->__vftable = (extension::FutureObjectJob<extension::AsyncFileImage>_vtbl *)&extension::FutureObjectJob<extension::AsyncFileImage>::`vftable';
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
    extension::AsyncContent<extension::AsyncFileImage>::~AsyncContent<extension::AsyncFileImage>(v3);
    operator delete(v3, 0x68ui64);
  }
  this->__vftable = (extension::FutureObjectJob<extension::AsyncFileImage>_vtbl *)&AgIThreadHost::`vftable';
}

void __fastcall extension::FutureObjectJob<Image>::~FutureObjectJob<Image>(extension::FutureObjectJob<Image> *this)
{
  extension::AsyncContent<Image> *m_ptr; // rdi
  extension::AsyncContent<Image> *v3; // rcx

  m_ptr = this->m_content.m_ptr;
  this->__vftable = (extension::FutureObjectJob<Image>_vtbl *)&extension::FutureObjectJob<Image>::`vftable';
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
    extension::AsyncContent<Image>::`scalar deleting destructor'((extension::AsyncContent<OGLTexture> *)v3, 1u);
  this->__vftable = (extension::FutureObjectJob<Image>_vtbl *)&AgIThreadHost::`vftable';
}

void __fastcall extension::FutureObjectJob<OGLCamera>::~FutureObjectJob<OGLCamera>(
        extension::FutureObjectJob<OGLCamera> *this)
{
  extension::AsyncContent<OGLCamera> *m_ptr; // rdi
  extension::AsyncContent<OGLCamera> *v3; // rcx

  m_ptr = this->m_content.m_ptr;
  this->__vftable = (extension::FutureObjectJob<OGLCamera>_vtbl *)&extension::FutureObjectJob<OGLCamera>::`vftable';
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
    extension::AsyncContent<OGLCamera>::`scalar deleting destructor'(v3, 1u);
  this->__vftable = (extension::FutureObjectJob<OGLCamera>_vtbl *)&AgIThreadHost::`vftable';
}

void __fastcall extension::FutureObjectJob<OGLCurve>::~FutureObjectJob<OGLCurve>(
        extension::FutureObjectJob<OGLCurve> *this)
{
  extension::AsyncContent<OGLCurve> *m_ptr; // rdi
  extension::AsyncContent<OGLCurve> *v3; // rcx

  m_ptr = this->m_content.m_ptr;
  this->__vftable = (extension::FutureObjectJob<OGLCurve>_vtbl *)&extension::FutureObjectJob<OGLCurve>::`vftable';
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
    extension::AsyncContent<OGLCurve>::`scalar deleting destructor'(v3, 1u);
  this->__vftable = (extension::FutureObjectJob<OGLCurve>_vtbl *)&AgIThreadHost::`vftable';
}

void __fastcall extension::FutureObjectJob<OGLFigure>::~FutureObjectJob<OGLFigure>(
        extension::FutureObjectJob<OGLFigure> *this)
{
  extension::AsyncContent<OGLFigure> *m_ptr; // rdi
  extension::AsyncContent<OGLFigure> *v3; // rdi

  m_ptr = this->m_content.m_ptr;
  this->__vftable = (extension::FutureObjectJob<OGLFigure>_vtbl *)&extension::FutureObjectJob<OGLFigure>::`vftable';
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
    extension::AsyncContent<OGLFigure>::~AsyncContent<OGLFigure>(v3);
    operator delete(v3, 0x68ui64);
  }
  this->__vftable = (extension::FutureObjectJob<OGLFigure>_vtbl *)&AgIThreadHost::`vftable';
}

void __fastcall extension::FutureObjectJob<OGLMirror>::~FutureObjectJob<OGLMirror>(
        extension::FutureObjectJob<OGLMirror> *this)
{
  extension::AsyncContent<OGLMirror> *m_ptr; // rdi
  extension::AsyncContent<OGLMirror> *v3; // rdi

  m_ptr = this->m_content.m_ptr;
  this->__vftable = (extension::FutureObjectJob<OGLMirror>_vtbl *)&extension::FutureObjectJob<OGLMirror>::`vftable';
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
    extension::AsyncContent<OGLMirror>::~AsyncContent<OGLMirror>(v3);
    operator delete(v3, 0x68ui64);
  }
  this->__vftable = (extension::FutureObjectJob<OGLMirror>_vtbl *)&AgIThreadHost::`vftable';
}

void __fastcall extension::FutureObjectJob<OGLMotion>::~FutureObjectJob<OGLMotion>(
        extension::FutureObjectJob<OGLMotion> *this)
{
  extension::AsyncContent<OGLMotion> *m_ptr; // rdi
  extension::AsyncContent<OGLMotion> *v3; // rdi

  m_ptr = this->m_content.m_ptr;
  this->__vftable = (extension::FutureObjectJob<OGLMotion>_vtbl *)&extension::FutureObjectJob<OGLMotion>::`vftable';
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
    extension::AsyncContent<OGLMotion>::~AsyncContent<OGLMotion>(v3);
    operator delete(v3, 0x68ui64);
  }
  this->__vftable = (extension::FutureObjectJob<OGLMotion>_vtbl *)&AgIThreadHost::`vftable';
}

void __fastcall extension::FutureObjectJob<OGLSecondary>::~FutureObjectJob<OGLSecondary>(
        extension::FutureObjectJob<OGLSecondary> *this)
{
  extension::AsyncContent<OGLSecondary> *m_ptr; // rdi
  extension::AsyncContent<OGLSecondary> *v3; // rdi

  m_ptr = this->m_content.m_ptr;
  this->__vftable = (extension::FutureObjectJob<OGLSecondary>_vtbl *)&extension::FutureObjectJob<OGLSecondary>::`vftable';
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
    extension::AsyncContent<OGLSecondary>::~AsyncContent<OGLSecondary>(v3);
    operator delete(v3, 0x68ui64);
  }
  this->__vftable = (extension::FutureObjectJob<OGLSecondary>_vtbl *)&AgIThreadHost::`vftable';
}

void __fastcall extension::FutureObjectJob<OGLTexture>::~FutureObjectJob<OGLTexture>(
        extension::FutureObjectJob<OGLTexture> *this)
{
  extension::AsyncContent<OGLTexture> *m_ptr; // rdi
  extension::AsyncContent<OGLTexture> *v3; // rcx

  m_ptr = this->m_content.m_ptr;
  this->__vftable = (extension::FutureObjectJob<OGLTexture>_vtbl *)&extension::FutureObjectJob<OGLTexture>::`vftable';
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
    extension::AsyncContent<Image>::`scalar deleting destructor'(v3, 1u);
  this->__vftable = (extension::FutureObjectJob<OGLTexture>_vtbl *)&AgIThreadHost::`vftable';
}

void __fastcall extension::RefCountablePtr<extension::AsyncContent<OGLCamera>>::~RefCountablePtr<extension::AsyncContent<OGLCamera>>(
        extension::RefCountablePtr<extension::AsyncContent<OGLCamera> > *this,
        unsigned int a2)
{
  extension::AsyncContent<OGLCamera> *m_ptr; // rcx

  m_ptr = this->m_ptr;
  if ( m_ptr )
  {
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)m_ptr, 0xFFFFFFFFFFFFFFFFui64) == 1 )
      extension::AsyncContent<OGLCamera>::`scalar deleting destructor'(m_ptr, a2);
  }
}

void __fastcall extension::RefCountablePtr<extension::AsyncContent<OGLSecondary>>::~RefCountablePtr<extension::AsyncContent<OGLSecondary>>(
        extension::RefCountablePtr<extension::AsyncContent<OGLSecondary> > *this)
{
  extension::AsyncContent<OGLSecondary> *m_ptr; // rbx

  m_ptr = this->m_ptr;
  if ( this->m_ptr && _InterlockedExchangeAdd64((volatile signed __int64 *)m_ptr, 0xFFFFFFFFFFFFFFFFui64) == 1 )
  {
    if ( m_ptr )
    {
      extension::AsyncContent<OGLSecondary>::~AsyncContent<OGLSecondary>(m_ptr);
      operator delete(m_ptr, 0x68ui64);
    }
  }
}

void __fastcall std::_LaunchPad<std::unique_ptr<std::tuple<_lambda_224f2aff27d484af60707df2a7dcfac8_>>>::~_LaunchPad<std::unique_ptr<std::tuple<_lambda_224f2aff27d484af60707df2a7dcfac8_>>>(
        std::_LaunchPad<std::unique_ptr<std::tuple<<lambda_224f2aff27d484af60707df2a7dcfac8> >> > *this)
{
  std::tuple<<lambda_224f2aff27d484af60707df2a7dcfac8> > *Myval2; // rbx
  _Cnd_internal_imp_t *Cond; // rsi
  _Mtx_internal_imp_t *Mtx; // rbx
  int v5; // eax

  Myval2 = this->_MyTarget._Mypair._Myval2;
  if ( Myval2 )
  {
    std::string::~string(&this->_MyTarget._Mypair._Myval2->_Myfirst._Val.effPath);
    operator delete(Myval2, 0x28ui64);
  }
  this->__vftable = (std::_LaunchPad<std::unique_ptr<std::tuple<<lambda_224f2aff27d484af60707df2a7dcfac8> >> >_vtbl *)&std::_Pad::`vftable';
  Cond = this->_Cond;
  Mtx = this->_Mtx;
  v5 = Mtx_unlock(Mtx);
  if ( v5 )
    std::_Throw_C_error(v5);
  Mtx_destroy(Mtx);
  Cnd_destroy(Cond);
}

void __fastcall std::list<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>>>::~list<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>>>(
        std::list<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >> *this)
{
  std::list<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body>>>::clear(this);
  operator delete(this->_Mypair._Myval2._Myhead);
}

void __fastcall std::map<std::string,unsigned int>::~map<std::string,unsigned int>(
        std::map<std::string,OGLModel *> *this)
{
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const ,OGLModel *> > > > result; // [rsp+30h] [rbp+8h] BYREF

  std::_Tree<std::_Tmap_traits<std::string,unsigned int,std::less<std::string>,std::allocator<std::pair<std::string const,unsigned int>>,0>>::erase(
    this,
    &result,
    (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const ,OGLModel *> > > >)this->_Mypair._Myval2._Myval2._Myhead->_Left,
    (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const ,OGLModel *> > > >)this->_Mypair._Myval2._Myval2._Myhead);
  operator delete(this->_Mypair._Myval2._Myval2._Myhead);
}

void __fastcall std::unique_ptr<std::tuple<_lambda_224f2aff27d484af60707df2a7dcfac8_>>::~unique_ptr<std::tuple<_lambda_224f2aff27d484af60707df2a7dcfac8_>>(
        std::unique_ptr<std::tuple<<lambda_224f2aff27d484af60707df2a7dcfac8> >> *this)
{
  std::tuple<<lambda_224f2aff27d484af60707df2a7dcfac8> > *Myval2; // rbx

  Myval2 = this->_Mypair._Myval2;
  if ( this->_Mypair._Myval2 )
  {
    std::string::~string(&this->_Mypair._Myval2->_Myfirst._Val.effPath);
    operator delete(Myval2, 0x28ui64);
  }
}

void __fastcall std::unique_ptr<OGLModel>::~unique_ptr<OGLModel>(
        std::unique_ptr<extension::SoundList::LazyMediaSetBuildJob> *this)
{
  extension::SoundList::LazyMediaSetBuildJob *Myval2; // rcx

  Myval2 = this->_Mypair._Myval2;
  if ( Myval2 )
    ((void (__fastcall *)(extension::SoundList::LazyMediaSetBuildJob *, __int64))Myval2->~AgIThreadHost)(Myval2, 1i64);
}

void __fastcall std::unique_ptr<OGLCamera>::~unique_ptr<OGLCamera>(std::unique_ptr<OGLCamera> *this, unsigned int a2)
{
  OGLCamera *Myval2; // rcx

  Myval2 = this->_Mypair._Myval2;
  if ( Myval2 )
    OGLCamera::`scalar deleting destructor'(Myval2, a2);
}

void __fastcall std::unique_ptr<OGLSecondary>::~unique_ptr<OGLSecondary>(
        std::unique_ptr<OGLSecondary> *this,
        unsigned __int64 a2)
{
  OGLSecondary *Myval2; // rbx

  Myval2 = this->_Mypair._Myval2;
  if ( this->_Mypair._Myval2 )
  {
    OGLSecondary::finalize(this->_Mypair._Myval2, a2);
    operator delete(Myval2, 0x28ui64);
  }
}

// attributes: thunk
void __fastcall std::vector<char>::~vector<char>(std::vector<char> *this)
{
  std::vector<AgDisplayChangedEvent>::_Tidy((std::vector<AgSuspendingEvent> *)this);
}

void __fastcall std::vector<extension::future_asset_detail::FutureAssetJob::FileSpec>::_Tidy(
        std::vector<extension::future_asset_detail::FutureAssetJob::FileSpec> *this,
        __int64 a2,
        std::_Wrap_alloc<std::allocator<extension::future_asset_detail::FutureAssetJob::FileSpec> > *a3,
        std::integral_constant<bool,0> a4)
{
  extension::future_asset_detail::FutureAssetJob::FileSpec *Myfirst; // rcx
  std::allocator<AgControllerPairingChangedEvent> *v6; // rcx

  Myfirst = this->_Mypair._Myval2._Myfirst;
  if ( Myfirst )
  {
    std::_Destroy_range1<std::allocator<extension::future_asset_detail::FutureAssetJob::FileSpec>,extension::future_asset_detail::FutureAssetJob::FileSpec *>(
      Myfirst,
      this->_Mypair._Myval2._Mylast,
      a3,
      a4);
    std::_Wrap_alloc<std::allocator<Fw::TUdpP2pInfo>>::deallocate(
      v6,
      (AgControllerPairingChangedEvent *)this->_Mypair._Myval2._Myfirst,
      this->_Mypair._Myval2._Myend - this->_Mypair._Myval2._Myfirst);
    this->_Mypair._Myval2._Myfirst = 0i64;
    this->_Mypair._Myval2._Mylast = 0i64;
    this->_Mypair._Myval2._Myend = 0i64;
  }
}

// attributes: thunk
void __fastcall std::vector<extension::BasicFutureObject<OGLMirror,void>>::~vector<extension::BasicFutureObject<OGLMirror,void>>(
        std::vector<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>> *this)
{
  std::vector<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>>::_Tidy(this);
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

void __fastcall extension::BasicFutureObject<extension::AsyncFileImage,void>::AssetCache::~AssetCache(
        extension::BasicFutureObject<extension::AsyncFileImage,void>::AssetCache *this)
{
  AgLogger **Myfirst; // rdx

  this->__vftable = (extension::BasicFutureObject<extension::AsyncFileImage,void>::AssetCache_vtbl *)&extension::BasicFutureObject<extension::AsyncFileImage,void>::AssetCache::`vftable';
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
  this->__vftable = (extension::BasicFutureObject<extension::AsyncFileImage,void>::AssetCache_vtbl *)&extension::asyncjob_detail::AssetCacheNode::`vftable';
  this->m_Next->extension::asyncjob_detail::AssetCacheBase::extension::asyncjob_detail::AssetCacheNode::extension::BiLinkable<extension::asyncjob_detail::AssetCacheNode>::m_Prev = this->m_Prev;
  this->m_Prev->m_Next = this->m_Next;
  this->m_Next = &this->extension::BiLinkable<extension::asyncjob_detail::AssetCacheNode>;
  this->m_Prev = &this->extension::BiLinkable<extension::asyncjob_detail::AssetCacheNode>;
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->extension::ExSimpleLockable<extension::BasicFutureObject<extension::AsyncFileImage,void>::AssetCache>);
}

void __fastcall extension::BasicFutureObject<OGLCamera,void>::AssetCache::~AssetCache(
        extension::BasicFutureObject<OGLCamera,void>::AssetCache *this)
{
  AgLogger **Myfirst; // rdx

  this->__vftable = (extension::BasicFutureObject<OGLCamera,void>::AssetCache_vtbl *)&extension::BasicFutureObject<OGLCamera,void>::AssetCache::`vftable';
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
  this->__vftable = (extension::BasicFutureObject<OGLCamera,void>::AssetCache_vtbl *)&extension::asyncjob_detail::AssetCacheNode::`vftable';
  this->m_Next->extension::asyncjob_detail::AssetCacheBase::extension::asyncjob_detail::AssetCacheNode::extension::BiLinkable<extension::asyncjob_detail::AssetCacheNode>::m_Prev = this->m_Prev;
  this->m_Prev->m_Next = this->m_Next;
  this->m_Next = &this->extension::BiLinkable<extension::asyncjob_detail::AssetCacheNode>;
  this->m_Prev = &this->extension::BiLinkable<extension::asyncjob_detail::AssetCacheNode>;
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->extension::ExSimpleLockable<extension::BasicFutureObject<OGLCamera,void>::AssetCache>);
}

void __fastcall extension::future_asset_detail::AsyncAssetModelBuilder::~AsyncAssetModelBuilder(
        extension::future_asset_detail::AsyncAssetModelBuilder *this)
{
  std::unique_ptr<OGLModel> *Mylast; // rsi
  std::unique_ptr<OGLModel> *i; // rbx
  EffectDataListManager *Myval2; // rcx
  std::_Wrap_alloc<std::allocator<extension::future_asset_detail::AssetModelInfo> > *v5; // r8
  std::integral_constant<bool,0> v6; // r9
  extension::future_asset_detail::AssetModelInfo *Myfirst; // rcx
  signed __int64 v8; // rcx

  this->__vftable = (extension::future_asset_detail::AsyncAssetModelBuilder_vtbl *)&extension::future_asset_detail::AsyncAssetModelBuilder::`vftable';
  Mylast = this->m_models._Mypair._Myval2._Mylast;
  for ( i = this->m_models._Mypair._Myval2._Myfirst; i != Mylast; ++i )
  {
    if ( i->_Mypair._Myval2 )
      ((void (__fastcall *)(OGLModel *, __int64))i->_Mypair._Myval2->~AgIThreadHost)(i->_Mypair._Myval2, 1i64);
  }
  this->m_models._Mypair._Myval2._Mylast = this->m_models._Mypair._Myval2._Myfirst;
  std::vector<extension::BasicFutureObject<extension::GFXIMovieData,void>>::clear((std::vector<extension::BasicFutureObject<extension::GFXIMovieData,void>> *)&this->m_textures);
  Myval2 = this->m_effect._Mypair._Myval2;
  if ( Myval2 )
    ((void (__fastcall *)(EffectDataListManager *, __int64))Myval2->~EffectDataListManager)(Myval2, 1i64);
  std::vector<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>>::_Tidy((std::vector<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>> *)&this->m_shaderFXFiles);
  std::vector<std::unique_ptr<OGLModel>>::_Tidy(&this->m_models);
  std::vector<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>>::_Tidy((std::vector<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>> *)&this->m_secondaries);
  std::vector<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>>::_Tidy((std::vector<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>> *)&this->m_cameras);
  std::vector<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>>::_Tidy((std::vector<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>> *)&this->m_mirrors);
  std::vector<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>>::_Tidy((std::vector<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>> *)&this->m_textures);
  std::vector<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>>::_Tidy((std::vector<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>> *)&this->m_motions);
  std::vector<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>>::_Tidy((std::vector<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>> *)&this->m_figures);
  Myfirst = this->m_modelInfos._Mypair._Myval2._Myfirst;
  if ( Myfirst )
  {
    std::_Destroy_range1<std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo>,extension::future_asset_detail::`anonymous namespace'::AssetModelInfo *>(
      Myfirst,
      this->m_modelInfos._Mypair._Myval2._Mylast,
      v5,
      v6);
    v8 = (char *)this->m_modelInfos._Mypair._Myval2._Myend - (char *)this->m_modelInfos._Mypair._Myval2._Myfirst;
    std::_Wrap_alloc<std::allocator<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo>>::deallocate(
      (std::_Wrap_alloc<std::allocator<extension::future_asset_detail::AssetModelInfo> > *)v8,
      this->m_modelInfos._Mypair._Myval2._Myfirst,
      v8 / 88);
    this->m_modelInfos._Mypair._Myval2._Myfirst = 0i64;
    this->m_modelInfos._Mypair._Myval2._Mylast = 0i64;
    this->m_modelInfos._Mypair._Myval2._Myend = 0i64;
  }
  std::string::~string(&this->m_effPath);
  extension::FutureObjectJob<extension::AsyncAsset>::~FutureObjectJob<extension::AsyncAsset>(this);
}

void __fastcall extension::BasicFutureObject<OGLCamera,void>::Body::~Body(
        extension::BasicFutureObject<OGLCamera,void>::Body *this)
{
  extension::AsyncContent<OGLCamera> *m_ptr; // rdx
  signed __int64 My_val; // rax
  unsigned __int64 v4; // rtt
  extension::AsyncContent<OGLCamera> *v5; // rcx
  extension::RefCountableWeakSupportBase::WeakProxy *v6; // rcx
  signed __int64 v7; // rdi

  m_ptr = this->m_content.m_ptr;
  this->__vftable = (extension::BasicFutureObject<OGLCamera,void>::Body_vtbl *)&extension::BasicFutureObject<OGLCamera,void>::Body::`vftable';
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
    extension::AsyncContent<OGLCamera>::`scalar deleting destructor'(v5, (unsigned int)m_ptr);
  this->__vftable = (extension::BasicFutureObject<OGLCamera,void>::Body_vtbl *)&extension::RefCountableWeakSupportBase::`vftable';
  this->m_refCount.m_ptr->m_principal = 0i64;
  v6 = this->m_refCount.m_ptr;
  if ( v6 )
  {
    v7 = _InterlockedExchangeAdd64((volatile signed __int64 *)v6, 0xFFFFFFFFFFFFFFFFui64);
    if ( v7 == 1 )
      operator delete(v6, 0x18ui64);
  }
}

void __fastcall extension::BasicFutureObject<OGLSecondary,void>::Body::~Body(
        extension::BasicFutureObject<OGLSecondary,void>::Body *this)
{
  extension::AsyncContent<OGLSecondary> *m_ptr; // rdx
  signed __int64 My_val; // rax
  unsigned __int64 v4; // rtt
  extension::AsyncContent<OGLSecondary> *v5; // rbx
  extension::RefCountableWeakSupportBase::WeakProxy *v6; // rcx
  signed __int64 v7; // rsi

  m_ptr = this->m_content.m_ptr;
  this->__vftable = (extension::BasicFutureObject<OGLSecondary,void>::Body_vtbl *)&extension::BasicFutureObject<OGLSecondary,void>::Body::`vftable';
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
    extension::AsyncContent<OGLSecondary>::~AsyncContent<OGLSecondary>(v5);
    operator delete(v5, 0x68ui64);
  }
  this->__vftable = (extension::BasicFutureObject<OGLSecondary,void>::Body_vtbl *)&extension::RefCountableWeakSupportBase::`vftable';
  this->m_refCount.m_ptr->m_principal = 0i64;
  v6 = this->m_refCount.m_ptr;
  if ( v6 )
  {
    v7 = _InterlockedExchangeAdd64((volatile signed __int64 *)v6, 0xFFFFFFFFFFFFFFFFui64);
    if ( v7 == 1 )
      operator delete(v6, 0x18ui64);
  }
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

std::unique_ptr<EffectDataListManager> *__fastcall std::unique_ptr<EffectDataListManager>::operator=(
        std::unique_ptr<EffectDataListManager> *this,
        std::unique_ptr<EffectDataListManager> *_Right)
{
  EffectDataListManager *Myval2; // rax
  EffectDataListManager *v4; // rcx

  if ( this != _Right )
  {
    Myval2 = _Right->_Mypair._Myval2;
    _Right->_Mypair._Myval2 = 0i64;
    v4 = this->_Mypair._Myval2;
    this->_Mypair._Myval2 = Myval2;
    if ( v4 )
      ((void (__fastcall *)(EffectDataListManager *, __int64))v4->~EffectDataListManager)(v4, 1i64);
  }
  return this;
}

std::vector<unsigned char> *__fastcall std::vector<unsigned char>::operator=(
        std::vector<unsigned char> *this,
        const std::vector<unsigned char> *_Right)
{
  unsigned __int8 *Myfirst; // rdx
  unsigned __int8 *Mylast; // r8
  unsigned __int64 v6; // rcx
  unsigned __int8 *v7; // rax
  unsigned __int64 v8; // r9
  unsigned __int8 *v9; // rax
  unsigned __int8 *v10; // r8
  unsigned __int8 *v11; // rsi
  unsigned __int8 *v12; // rdi
  unsigned __int8 *v13; // rbx
  unsigned __int8 *v14; // rdi
  size_t v15; // rbx

  if ( this != _Right )
  {
    Myfirst = _Right->_Mypair._Myval2._Myfirst;
    Mylast = _Right->_Mypair._Myval2._Mylast;
    if ( Myfirst == Mylast )
    {
      this->_Mypair._Myval2._Mylast = this->_Mypair._Myval2._Myfirst;
      return this;
    }
    v6 = Mylast - Myfirst;
    v7 = this->_Mypair._Myval2._Myfirst;
    v8 = this->_Mypair._Myval2._Mylast - this->_Mypair._Myval2._Myfirst;
    if ( Mylast - Myfirst <= v8 )
    {
      memmove(this->_Mypair._Myval2._Myfirst, Myfirst, Mylast - Myfirst);
      v9 = &this->_Mypair._Myval2._Myfirst[(unsigned __int64)(_Right->_Mypair._Myval2._Mylast
                                                            - _Right->_Mypair._Myval2._Myfirst)];
LABEL_12:
      this->_Mypair._Myval2._Mylast = v9;
      return this;
    }
    v10 = (unsigned __int8 *)(this->_Mypair._Myval2._Myend - v7);
    if ( v6 <= (unsigned __int64)v10 )
    {
      v11 = &Myfirst[v8];
      memmove(this->_Mypair._Myval2._Myfirst, Myfirst, this->_Mypair._Myval2._Mylast - this->_Mypair._Myval2._Myfirst);
      v12 = this->_Mypair._Myval2._Mylast;
      v13 = (unsigned __int8 *)(_Right->_Mypair._Myval2._Mylast - v11);
      memmove(v12, v11, (size_t)v13);
      v9 = &v12[(_QWORD)v13];
      goto LABEL_12;
    }
    if ( v7 )
      std::_Wrap_alloc<std::allocator<unsigned char>>::deallocate(
        (std::_Wrap_alloc<std::allocator<AgSuspendingEvent> > *)this,
        (AgSuspendingEvent *)this->_Mypair._Myval2._Myfirst,
        (unsigned __int64)v10);
    if ( std::vector<unsigned char>::_Buy(this, _Right->_Mypair._Myval2._Mylast - _Right->_Mypair._Myval2._Myfirst) )
    {
      v14 = this->_Mypair._Myval2._Myfirst;
      v15 = _Right->_Mypair._Myval2._Mylast - _Right->_Mypair._Myval2._Myfirst;
      memmove(this->_Mypair._Myval2._Myfirst, _Right->_Mypair._Myval2._Myfirst, v15);
      this->_Mypair._Myval2._Mylast = &v14[v15];
    }
  }
  return this;
}

std::vector<extension::FutureAssetOptionFileSetting> *__fastcall std::vector<extension::FutureAssetOptionFileSetting>::operator=(
        std::vector<extension::FutureAssetOptionFileSetting> *this,
        const std::vector<extension::FutureAssetOptionFileSetting> *_Right,
        std::_Wrap_alloc<std::allocator<extension::FutureAssetOptionFileSetting> > *a3)
{
  extension::FutureAssetOptionFileSetting *Myfirst; // r9
  extension::FutureAssetOptionFileSetting *Mylast; // r10
  extension::FutureAssetOptionFileSetting *v7; // rax
  unsigned __int64 v8; // rbx
  extension::FutureAssetOptionFileSetting *v9; // r8
  unsigned __int64 v10; // r11
  extension::FutureAssetOptionFileSetting *v11; // rax
  std::_Wrap_alloc<std::allocator<extension::FutureAssetOptionFileSetting> > *v12; // r8
  std::integral_constant<bool,0> v13; // r9
  extension::FutureAssetOptionFileSetting *v14; // rbx
  std::_Wrap_alloc<std::allocator<extension::FutureAssetOptionFileSetting> > *v15; // r9
  signed __int64 v16; // rcx
  unsigned __int64 v17; // rbx
  extension::FutureAssetOptionFileSetting *v18; // rax
  extension::FutureAssetOptionFileSetting *v19; // rax
  std::_Wrap_alloc<std::allocator<extension::FutureAssetOptionFileSetting> > *v20; // r9

  if ( this != _Right )
  {
    Myfirst = _Right->_Mypair._Myval2._Myfirst;
    Mylast = _Right->_Mypair._Myval2._Mylast;
    if ( _Right->_Mypair._Myval2._Myfirst == Mylast )
    {
      std::_Destroy_range1<std::allocator<extension::FutureAssetOptionFileSetting>,extension::FutureAssetOptionFileSetting *>(
        this->_Mypair._Myval2._Myfirst,
        this->_Mypair._Myval2._Mylast,
        a3,
        (std::integral_constant<bool,0>)Myfirst);
      v7 = this->_Mypair._Myval2._Myfirst;
LABEL_14:
      this->_Mypair._Myval2._Mylast = v7;
      return this;
    }
    v8 = Mylast - Myfirst;
    v9 = this->_Mypair._Myval2._Myfirst;
    v10 = this->_Mypair._Myval2._Mylast - this->_Mypair._Myval2._Myfirst;
    if ( v8 > v10 )
    {
      if ( v8 <= this->_Mypair._Myval2._Myend - v9 )
      {
        v14 = &Myfirst[v10];
        std::_Copy_unchecked<extension::FutureAssetOptionFileSetting *,extension::FutureAssetOptionFileSetting *>(
          Myfirst,
          v14,
          v9);
        v7 = std::_Uninitialized_copy_al_unchecked1<extension::FutureAssetOptionFileSetting *,extension::FutureAssetOptionFileSetting *,std::allocator<extension::FutureAssetOptionFileSetting>>(
               v14,
               _Right->_Mypair._Myval2._Mylast,
               this->_Mypair._Myval2._Mylast,
               v15);
        goto LABEL_14;
      }
      if ( v9 )
      {
        std::_Destroy_range1<std::allocator<extension::FutureAssetOptionFileSetting>,extension::FutureAssetOptionFileSetting *>(
          this->_Mypair._Myval2._Myfirst,
          this->_Mypair._Myval2._Mylast,
          (std::_Wrap_alloc<std::allocator<extension::FutureAssetOptionFileSetting> > *)v9,
          (std::integral_constant<bool,0>)Myfirst);
        std::_Wrap_alloc<std::allocator<extension::FutureAssetOptionFileSetting>>::deallocate(
          (std::_Wrap_alloc<std::allocator<extension::FutureAssetOptionFileSetting> > *)((char *)this->_Mypair._Myval2._Myend
                                                                                       - (char *)this->_Mypair._Myval2._Myfirst),
          this->_Mypair._Myval2._Myfirst,
          this->_Mypair._Myval2._Myend - this->_Mypair._Myval2._Myfirst);
      }
      v16 = (char *)_Right->_Mypair._Myval2._Mylast - (char *)_Right->_Mypair._Myval2._Myfirst;
      v17 = v16 / 40;
      this->_Mypair._Myval2._Myfirst = 0i64;
      this->_Mypair._Myval2._Mylast = 0i64;
      this->_Mypair._Myval2._Myend = 0i64;
      if ( v16 / 40 )
      {
        if ( v17 > 0x666666666666666i64 )
          std::_Xlength_error("vector<T> too long");
        v18 = std::_Wrap_alloc<std::allocator<extension::FutureAssetOptionFileSetting>>::allocate(
                (std::_Wrap_alloc<std::allocator<extension::FutureAssetOptionFileSetting> > *)v16,
                v17);
        this->_Mypair._Myval2._Myfirst = v18;
        this->_Mypair._Myval2._Mylast = v18;
        v19 = this->_Mypair._Myval2._Myfirst;
        this->_Mypair._Myval2._Myend = &this->_Mypair._Myval2._Myfirst[v17];
        this->_Mypair._Myval2._Mylast = std::_Uninitialized_copy_al_unchecked1<extension::FutureAssetOptionFileSetting *,extension::FutureAssetOptionFileSetting *,std::allocator<extension::FutureAssetOptionFileSetting>>(
                                          _Right->_Mypair._Myval2._Myfirst,
                                          _Right->_Mypair._Myval2._Mylast,
                                          v19,
                                          v20);
      }
    }
    else
    {
      v11 = std::_Copy_unchecked<extension::FutureAssetOptionFileSetting *,extension::FutureAssetOptionFileSetting *>(
              Myfirst,
              Mylast,
              v9);
      std::_Destroy_range1<std::allocator<extension::FutureAssetOptionFileSetting>,extension::FutureAssetOptionFileSetting *>(
        v11,
        this->_Mypair._Myval2._Mylast,
        v12,
        v13);
      this->_Mypair._Myval2._Mylast = &this->_Mypair._Myval2._Myfirst[_Right->_Mypair._Myval2._Mylast
                                                                    - _Right->_Mypair._Myval2._Myfirst];
    }
  }
  return this;
}

extension::FutureAssetOption *__fastcall extension::FutureAssetOption::operator=(
        extension::FutureAssetOption *this,
        const extension::FutureAssetOption *__that,
        std::_Wrap_alloc<std::allocator<extension::FutureAssetOptionFileSetting> > *a3)
{
  bool bNoMotion; // al
  std::string *p_effectPath; // rdx
  std::string *v7; // rcx

  this->playerNo = __that->playerNo;
  this->disableShaderFXMaterialLight = __that->disableShaderFXMaterialLight;
  this->disableEffectLoad = __that->disableEffectLoad;
  bNoMotion = __that->bNoMotion;
  p_effectPath = &__that->effectPath;
  this->bNoMotion = bNoMotion;
  v7 = &this->effectPath;
  if ( v7 != p_effectPath )
    std::string::assign(v7, p_effectPath, 0i64, 0xFFFFFFFFFFFFFFFFui64);
  this->baseDataFlag = __that->baseDataFlag;
  if ( &this->baseCharaPath != &__that->baseCharaPath )
    std::string::assign(&this->baseCharaPath, &__that->baseCharaPath, 0i64, 0xFFFFFFFFFFFFFFFFui64);
  std::vector<extension::FutureAssetOptionFileSetting>::operator=(&this->fileSetting, &__that->fileSetting, a3);
  return this;
}

std::ostream *__fastcall std::ostream::operator<<(std::ostream *this, int _Val)
{
  int v3; // edi
  __int64 v4; // rcx
  __int64 v5; // rcx
  std::ostream *v6; // rcx
  std::ios_base *v7; // rcx
  const std::locale *v8; // rax
  std::locale::facet *v9; // rsi
  std::_Facet_base *v10; // rax
  __int64 v11; // rax
  std::ios_base *v12; // rcx
  int v13; // edx
  __int64 v14; // rcx
  char v16; // [rsp+40h] [rbp-68h] BYREF
  __int64 v17; // [rsp+48h] [rbp-60h]
  __int64 v18; // [rsp+50h] [rbp-58h]
  std::ostream *v19; // [rsp+58h] [rbp-50h]
  std::locale result; // [rsp+68h] [rbp-40h] BYREF
  char v22[48]; // [rsp+78h] [rbp-30h] BYREF

  v18 = -2i64;
  v3 = 0;
  v19 = this;
  v4 = *(_QWORD *)&this->gap0[*(int *)(*(_QWORD *)this->gap0 + 4i64) + 72];
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8i64))(v4);
  v5 = *(int *)(*(_QWORD *)this->gap0 + 4i64);
  if ( !*(_DWORD *)&this->gap0[v5 + 16] )
  {
    v6 = *(std::ostream **)&this->gap0[v5 + 80];
    if ( v6 )
    {
      if ( v6 != this )
        std::ostream::flush(v6);
    }
  }
  v7 = (std::ios_base *)&this->gap0[*(int *)(*(_QWORD *)this->gap0 + 4i64)];
  if ( v7->_Mystate == 0 )
  {
    v8 = std::ios_base::getloc(v7, &result);
    v9 = std::use_facet<std::num_put<char,std::ostreambuf_iterator<char>>>(v8);
    if ( result._Ptr )
    {
      v10 = result._Ptr->_Decref(result._Ptr);
      if ( v10 )
        ((void (__fastcall *)(std::_Facet_base *, __int64))v10->~_Facet_base)(v10, 1i64);
    }
    v11 = *(_QWORD *)&this->gap0[*(int *)(*(_QWORD *)this->gap0 + 4i64) + 72];
    v16 = 0;
    v17 = v11;
    ((void (__fastcall *)(std::locale::facet *, char *, char *))v9->__vftable[3].~_Facet_base)(v9, v22, &v16);
    if ( v22[0] )
      v3 = 4;
  }
  v12 = (std::ios_base *)&this->gap0[*(int *)(*(_QWORD *)this->gap0 + 4i64)];
  if ( v3 )
  {
    v13 = v3 | v12->_Mystate | 4;
    if ( v12[1].__vftable )
      v13 = v3 | v12->_Mystate;
    std::ios_base::clear(v12, v13, 0);
  }
  if ( !std::uncaught_exception() )
    std::ostream::_Osfx(this);
  v14 = *(_QWORD *)&this->gap0[*(int *)(*(_QWORD *)this->gap0 + 4i64) + 72];
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16i64))(v14);
  return this;
}

std::ostream *__fastcall std::ostream::operator<<(std::ostream *this, unsigned int _Val)
{
  int v3; // edi
  __int64 v4; // rcx
  __int64 v5; // rcx
  std::ostream *v6; // rcx
  std::ios_base *v7; // rcx
  const std::locale *v8; // rax
  std::locale::facet *v9; // rsi
  std::_Facet_base *v10; // rax
  __int64 v11; // rax
  std::ios_base *v12; // rcx
  int v13; // edx
  __int64 v14; // rcx
  char v16; // [rsp+40h] [rbp-68h] BYREF
  __int64 v17; // [rsp+48h] [rbp-60h]
  __int64 v18; // [rsp+50h] [rbp-58h]
  std::ostream *v19; // [rsp+58h] [rbp-50h]
  std::locale result; // [rsp+68h] [rbp-40h] BYREF
  char v22[48]; // [rsp+78h] [rbp-30h] BYREF

  v18 = -2i64;
  v3 = 0;
  v19 = this;
  v4 = *(_QWORD *)&this->gap0[*(int *)(*(_QWORD *)this->gap0 + 4i64) + 72];
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8i64))(v4);
  v5 = *(int *)(*(_QWORD *)this->gap0 + 4i64);
  if ( !*(_DWORD *)&this->gap0[v5 + 16] )
  {
    v6 = *(std::ostream **)&this->gap0[v5 + 80];
    if ( v6 )
    {
      if ( v6 != this )
        std::ostream::flush(v6);
    }
  }
  v7 = (std::ios_base *)&this->gap0[*(int *)(*(_QWORD *)this->gap0 + 4i64)];
  if ( v7->_Mystate == 0 )
  {
    v8 = std::ios_base::getloc(v7, &result);
    v9 = std::use_facet<std::num_put<char,std::ostreambuf_iterator<char>>>(v8);
    if ( result._Ptr )
    {
      v10 = result._Ptr->_Decref(result._Ptr);
      if ( v10 )
        ((void (__fastcall *)(std::_Facet_base *, __int64))v10->~_Facet_base)(v10, 1i64);
    }
    v11 = *(_QWORD *)&this->gap0[*(int *)(*(_QWORD *)this->gap0 + 4i64) + 72];
    v16 = 0;
    v17 = v11;
    ((void (__fastcall *)(std::locale::facet *, char *, char *))v9->__vftable[2]._Decref)(v9, v22, &v16);
    if ( v22[0] )
      v3 = 4;
  }
  v12 = (std::ios_base *)&this->gap0[*(int *)(*(_QWORD *)this->gap0 + 4i64)];
  if ( v3 )
  {
    v13 = v3 | v12->_Mystate | 4;
    if ( v12[1].__vftable )
      v13 = v3 | v12->_Mystate;
    std::ios_base::clear(v12, v13, 0);
  }
  if ( !std::uncaught_exception() )
    std::ostream::_Osfx(this);
  v14 = *(_QWORD *)&this->gap0[*(int *)(*(_QWORD *)this->gap0 + 4i64) + 72];
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16i64))(v14);
  return this;
}

std::ostream *__fastcall std::ostream::operator<<(std::ostream *this, bool _Val)
{
  int v3; // edi
  __int64 v4; // rcx
  __int64 v5; // rcx
  std::ostream *v6; // rcx
  std::ios_base *v7; // rcx
  const std::locale *v8; // rax
  std::locale::facet *v9; // rsi
  std::_Facet_base *v10; // rax
  __int64 v11; // rax
  std::ios_base *v12; // rcx
  int v13; // edx
  __int64 v14; // rcx
  char v16; // [rsp+40h] [rbp-68h] BYREF
  __int64 v17; // [rsp+48h] [rbp-60h]
  __int64 v18; // [rsp+50h] [rbp-58h]
  std::ostream *v19; // [rsp+58h] [rbp-50h]
  std::locale result; // [rsp+68h] [rbp-40h] BYREF
  char v22[48]; // [rsp+78h] [rbp-30h] BYREF

  v18 = -2i64;
  v3 = 0;
  v19 = this;
  v4 = *(_QWORD *)&this->gap0[*(int *)(*(_QWORD *)this->gap0 + 4i64) + 72];
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8i64))(v4);
  v5 = *(int *)(*(_QWORD *)this->gap0 + 4i64);
  if ( !*(_DWORD *)&this->gap0[v5 + 16] )
  {
    v6 = *(std::ostream **)&this->gap0[v5 + 80];
    if ( v6 )
    {
      if ( v6 != this )
        std::ostream::flush(v6);
    }
  }
  v7 = (std::ios_base *)&this->gap0[*(int *)(*(_QWORD *)this->gap0 + 4i64)];
  if ( v7->_Mystate == 0 )
  {
    v8 = std::ios_base::getloc(v7, &result);
    v9 = std::use_facet<std::num_put<char,std::ostreambuf_iterator<char>>>(v8);
    if ( result._Ptr )
    {
      v10 = result._Ptr->_Decref(result._Ptr);
      if ( v10 )
        ((void (__fastcall *)(std::_Facet_base *, __int64))v10->~_Facet_base)(v10, 1i64);
    }
    v11 = *(_QWORD *)&this->gap0[*(int *)(*(_QWORD *)this->gap0 + 4i64) + 72];
    v16 = 0;
    v17 = v11;
    ((void (__fastcall *)(std::locale::facet *, char *, char *))v9->__vftable[3]._Incref)(v9, v22, &v16);
    if ( v22[0] )
      v3 = 4;
  }
  v12 = (std::ios_base *)&this->gap0[*(int *)(*(_QWORD *)this->gap0 + 4i64)];
  if ( v3 )
  {
    v13 = v3 | v12->_Mystate | 4;
    if ( v12[1].__vftable )
      v13 = v3 | v12->_Mystate;
    std::ios_base::clear(v12, v13, 0);
  }
  if ( !std::uncaught_exception() )
    std::ostream::_Osfx(this);
  v14 = *(_QWORD *)&this->gap0[*(int *)(*(_QWORD *)this->gap0 + 4i64) + 72];
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16i64))(v14);
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

void __fastcall extension::FutureObjectJobManager<extension::AsyncFileImage,void>::EnqueueAsyncJob(
        extension::RefCountablePtr<extension::AsyncContent<extension::AsyncFileImage> > shared)
{
  extension::AsyncContent<extension::AsyncFileImage> *My_val; // rax
  extension::AsyncContent<extension::AsyncFileImage> *v3; // rbx
  extension::RefCountablePtr<extension::AsyncContent<extension::AsyncFileImage> > shareda; // [rsp+48h] [rbp+10h] BYREF

  My_val = (extension::AsyncContent<extension::AsyncFileImage> *)shared.m_ptr->m_refCount.m_value._My_val;
  shareda.m_ptr = My_val;
  if ( My_val )
    _InterlockedExchangeAdd64((volatile signed __int64 *)My_val, 1ui64);
  extension::future_asset_detail::EnqueueFutureFileImageJob((extension::RefCountablePtr<extension::AsyncContent<extension::AsyncFileImage> >)&shareda);
  v3 = (extension::AsyncContent<extension::AsyncFileImage> *)shared.m_ptr->m_refCount.m_value._My_val;
  if ( v3 )
  {
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFui64) == 1 )
    {
      extension::AsyncContent<extension::AsyncFileImage>::~AsyncContent<extension::AsyncFileImage>(v3);
      operator delete(v3, 0x68ui64);
    }
  }
}

void __fastcall extension::FutureObjectJobManager<OGLSecondary,void>::EnqueueAsyncJob(
        extension::RefCountablePtr<extension::AsyncContent<OGLSecondary> > shared)
{
  extension::AsyncContent<OGLSecondary> *My_val; // rax
  extension::AsyncContent<OGLSecondary> *v3; // rbx
  extension::RefCountablePtr<extension::AsyncContent<OGLSecondary> > shareda; // [rsp+48h] [rbp+10h] BYREF

  My_val = (extension::AsyncContent<OGLSecondary> *)shared.m_ptr->m_refCount.m_value._My_val;
  shareda.m_ptr = My_val;
  if ( My_val )
    _InterlockedExchangeAdd64((volatile signed __int64 *)My_val, 1ui64);
  extension::future_asset_detail::EnqueueFutureSecondaryJob((extension::RefCountablePtr<extension::AsyncContent<OGLSecondary> >)&shareda);
  v3 = (extension::AsyncContent<OGLSecondary> *)shared.m_ptr->m_refCount.m_value._My_val;
  if ( v3 )
  {
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFui64) == 1 )
    {
      extension::AsyncContent<OGLSecondary>::~AsyncContent<OGLSecondary>(v3);
      operator delete(v3, 0x68ui64);
    }
  }
}

void __fastcall extension::future_asset_detail::EnqueueFutureAssetJob(
        extension::RefCountablePtr<extension::AsyncContent<extension::AsyncAsset> > shared,
        const extension::FutureAssetOption *opt)
{
  extension::future_asset_detail::FutureAssetJob *v4; // rax
  extension::AsyncContent<extension::AsyncAsset> *My_val; // rcx
  extension::ExThread::Runnable *v6; // rax
  extension::AsyncContent<extension::AsyncAsset> *v7; // rbx
  extension::RefCountablePtr<extension::AsyncContent<extension::AsyncAsset> > c; // [rsp+20h] [rbp-38h] BYREF
  std::unique_ptr<extension::ExThread::Runnable> obj; // [rsp+28h] [rbp-30h] BYREF
  __int64 v10; // [rsp+30h] [rbp-28h]
  extension::future_asset_detail::FutureAssetJob *v11; // [rsp+38h] [rbp-20h]
  void (__fastcall ****v12)(_QWORD, __int64); // [rsp+40h] [rbp-18h]
  void (__fastcall ***v13)(_QWORD, __int64); // [rsp+70h] [rbp+18h] BYREF
  void (__fastcall ***v14)(_QWORD, __int64); // [rsp+78h] [rbp+20h] BYREF

  v10 = -2i64;
  v4 = (extension::future_asset_detail::FutureAssetJob *)operator new(0x88ui64);
  v11 = v4;
  My_val = (extension::AsyncContent<extension::AsyncAsset> *)shared.m_ptr->m_refCount.m_value._My_val;
  c.m_ptr = My_val;
  if ( My_val )
    _InterlockedExchangeAdd64((volatile signed __int64 *)My_val, 1ui64);
  extension::future_asset_detail::FutureAssetJob::FutureAssetJob(
    v4,
    (extension::RefCountablePtr<extension::AsyncContent<extension::AsyncAsset> >)&c,
    opt);
  v11 = (extension::future_asset_detail::FutureAssetJob *)&v14;
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
  v7 = (extension::AsyncContent<extension::AsyncAsset> *)shared.m_ptr->m_refCount.m_value._My_val;
  if ( v7 )
  {
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v7, 0xFFFFFFFFFFFFFFFFui64) == 1 )
    {
      extension::AsyncContent<extension::AsyncAsset>::~AsyncContent<extension::AsyncAsset>(v7);
      operator delete(v7, 0x68ui64);
    }
  }
}

void __fastcall extension::future_asset_detail::EnqueueFutureCameraJob(
        extension::RefCountablePtr<extension::AsyncContent<OGLCamera> > shared)
{
  extension::future_asset_detail::FutureCameraJob *v2; // rax
  extension::AsyncContent<OGLCamera> *My_val; // rdx
  extension::ExThread::Runnable *v4; // rax
  unsigned int v5; // edx
  extension::AsyncContent<OGLCamera> *v6; // rcx
  std::unique_ptr<extension::ExThread::Runnable> obj; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+28h] [rbp-20h]
  void (__fastcall ****v9)(_QWORD, __int64); // [rsp+30h] [rbp-18h]
  extension::future_asset_detail::FutureCameraJob **v10; // [rsp+38h] [rbp-10h]
  extension::future_asset_detail::FutureCameraJob *v11; // [rsp+58h] [rbp+10h] BYREF
  void (__fastcall ***v12)(_QWORD, __int64); // [rsp+60h] [rbp+18h] BYREF
  extension::RefCountablePtr<extension::AsyncContent<OGLCamera> > c; // [rsp+68h] [rbp+20h] BYREF

  v8 = -2i64;
  v2 = (extension::future_asset_detail::FutureCameraJob *)operator new(0x20ui64);
  v11 = v2;
  My_val = (extension::AsyncContent<OGLCamera> *)shared.m_ptr->m_refCount.m_value._My_val;
  c.m_ptr = My_val;
  if ( My_val )
    _InterlockedExchangeAdd64((volatile signed __int64 *)My_val, 1ui64);
  extension::future_asset_detail::FutureCameraJob::FutureCameraJob(
    v2,
    (extension::RefCountablePtr<extension::AsyncContent<OGLCamera> >)&c);
  v9 = &v12;
  v12 = 0i64;
  v10 = &v11;
  v11 = 0i64;
  obj._Mypair._Myval2 = v4;
  extension::SynchronizedQueue<extension::ExThread::Runnable>::enqueue(
    &extension::AsyncWorker::s_instance.m_fixupJobConsumer.m_jobQueue,
    (std::unique_ptr<extension::ExThread::Runnable>)&obj);
  if ( v11 )
    ((void (__fastcall *)(extension::future_asset_detail::FutureCameraJob *, __int64))v11->~AgIThreadHost)(v11, 1i64);
  if ( v12 )
    (**v12)(v12, 1i64);
  v6 = (extension::AsyncContent<OGLCamera> *)shared.m_ptr->m_refCount.m_value._My_val;
  if ( shared.m_ptr->m_refCount.m_value._My_val
    && _InterlockedExchangeAdd64((volatile signed __int64 *)v6, 0xFFFFFFFFFFFFFFFFui64) == 1 )
  {
    if ( v6 )
      extension::AsyncContent<OGLCamera>::`scalar deleting destructor'(v6, v5);
  }
}

void __fastcall extension::future_asset_detail::EnqueueFutureCurveJob(
        extension::RefCountablePtr<extension::AsyncContent<OGLCurve> > shared)
{
  extension::future_asset_detail::FutureCurveJob *v2; // rax
  extension::AsyncContent<OGLCurve> *My_val; // rdx
  extension::ExThread::Runnable *v4; // rax
  unsigned int v5; // edx
  extension::AsyncContent<OGLCurve> *v6; // rcx
  std::unique_ptr<extension::ExThread::Runnable> obj; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+28h] [rbp-20h]
  void (__fastcall ****v9)(_QWORD, __int64); // [rsp+30h] [rbp-18h]
  extension::future_asset_detail::FutureCurveJob **v10; // [rsp+38h] [rbp-10h]
  extension::future_asset_detail::FutureCurveJob *v11; // [rsp+58h] [rbp+10h] BYREF
  void (__fastcall ***v12)(_QWORD, __int64); // [rsp+60h] [rbp+18h] BYREF
  extension::RefCountablePtr<extension::AsyncContent<OGLCurve> > c; // [rsp+68h] [rbp+20h] BYREF

  v8 = -2i64;
  v2 = (extension::future_asset_detail::FutureCurveJob *)operator new(0x20ui64);
  v11 = v2;
  My_val = (extension::AsyncContent<OGLCurve> *)shared.m_ptr->m_refCount.m_value._My_val;
  c.m_ptr = My_val;
  if ( My_val )
    _InterlockedExchangeAdd64((volatile signed __int64 *)My_val, 1ui64);
  extension::future_asset_detail::FutureCurveJob::FutureCurveJob(
    v2,
    (extension::RefCountablePtr<extension::AsyncContent<OGLCurve> >)&c);
  v9 = &v12;
  v12 = 0i64;
  v10 = &v11;
  v11 = 0i64;
  obj._Mypair._Myval2 = v4;
  extension::SynchronizedQueue<extension::ExThread::Runnable>::enqueue(
    &extension::AsyncWorker::s_instance.m_fixupJobConsumer.m_jobQueue,
    (std::unique_ptr<extension::ExThread::Runnable>)&obj);
  if ( v11 )
    ((void (__fastcall *)(extension::future_asset_detail::FutureCurveJob *, __int64))v11->~AgIThreadHost)(v11, 1i64);
  if ( v12 )
    (**v12)(v12, 1i64);
  v6 = (extension::AsyncContent<OGLCurve> *)shared.m_ptr->m_refCount.m_value._My_val;
  if ( shared.m_ptr->m_refCount.m_value._My_val
    && _InterlockedExchangeAdd64((volatile signed __int64 *)v6, 0xFFFFFFFFFFFFFFFFui64) == 1 )
  {
    if ( v6 )
      extension::AsyncContent<OGLCurve>::`scalar deleting destructor'(v6, v5);
  }
}

void __fastcall extension::future_asset_detail::EnqueueFutureFigureJob(
        extension::RefCountablePtr<extension::AsyncContent<OGLFigure> > shared,
        const extension::FutureFigureOption *opt)
{
  extension::future_asset_detail::FutureFigureJob *v4; // rax
  extension::AsyncContent<OGLFigure> *My_val; // rcx
  extension::ExThread::Runnable *v6; // rax
  extension::AsyncContent<OGLFigure> *v7; // rbx
  extension::RefCountablePtr<extension::AsyncContent<OGLFigure> > c; // [rsp+20h] [rbp-38h] BYREF
  std::unique_ptr<extension::ExThread::Runnable> obj; // [rsp+28h] [rbp-30h] BYREF
  __int64 v10; // [rsp+30h] [rbp-28h]
  extension::future_asset_detail::FutureFigureJob *v11; // [rsp+38h] [rbp-20h]
  void (__fastcall ****v12)(_QWORD, __int64); // [rsp+40h] [rbp-18h]
  void (__fastcall ***v13)(_QWORD, __int64); // [rsp+70h] [rbp+18h] BYREF
  void (__fastcall ***v14)(_QWORD, __int64); // [rsp+78h] [rbp+20h] BYREF

  v10 = -2i64;
  v4 = (extension::future_asset_detail::FutureFigureJob *)operator new(0x40ui64);
  v11 = v4;
  My_val = (extension::AsyncContent<OGLFigure> *)shared.m_ptr->m_refCount.m_value._My_val;
  c.m_ptr = My_val;
  if ( My_val )
    _InterlockedExchangeAdd64((volatile signed __int64 *)My_val, 1ui64);
  extension::future_asset_detail::FutureFigureJob::FutureFigureJob(
    v4,
    (extension::RefCountablePtr<extension::AsyncContent<OGLFigure> >)&c,
    opt);
  v11 = (extension::future_asset_detail::FutureFigureJob *)&v14;
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
  v7 = (extension::AsyncContent<OGLFigure> *)shared.m_ptr->m_refCount.m_value._My_val;
  if ( v7 )
  {
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v7, 0xFFFFFFFFFFFFFFFFui64) == 1 )
    {
      extension::AsyncContent<OGLFigure>::~AsyncContent<OGLFigure>(v7);
      operator delete(v7, 0x68ui64);
    }
  }
}

void __fastcall extension::future_asset_detail::EnqueueFutureFileImageJob(
        extension::RefCountablePtr<extension::AsyncContent<extension::AsyncFileImage> > shared)
{
  extension::future_asset_detail::FutureFileImageJob *v2; // rax
  extension::AsyncContent<extension::AsyncFileImage> *My_val; // rdx
  extension::ExThread::Runnable *v4; // rax
  extension::AsyncContent<extension::AsyncFileImage> *v5; // rbx
  std::unique_ptr<extension::ExThread::Runnable> obj; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+28h] [rbp-20h]
  void (__fastcall ****v8)(_QWORD, __int64); // [rsp+30h] [rbp-18h]
  extension::future_asset_detail::FutureFileImageJob **v9; // [rsp+38h] [rbp-10h]
  extension::future_asset_detail::FutureFileImageJob *v10; // [rsp+58h] [rbp+10h] BYREF
  void (__fastcall ***v11)(_QWORD, __int64); // [rsp+60h] [rbp+18h] BYREF
  extension::RefCountablePtr<extension::AsyncContent<extension::AsyncFileImage> > c; // [rsp+68h] [rbp+20h] BYREF

  v7 = -2i64;
  v2 = (extension::future_asset_detail::FutureFileImageJob *)operator new(0x20ui64);
  v10 = v2;
  My_val = (extension::AsyncContent<extension::AsyncFileImage> *)shared.m_ptr->m_refCount.m_value._My_val;
  c.m_ptr = My_val;
  if ( My_val )
    _InterlockedExchangeAdd64((volatile signed __int64 *)My_val, 1ui64);
  extension::future_asset_detail::FutureFileImageJob::FutureFileImageJob(
    v2,
    (extension::RefCountablePtr<extension::AsyncContent<extension::AsyncFileImage> >)&c);
  v8 = &v11;
  v11 = 0i64;
  v9 = &v10;
  v10 = 0i64;
  obj._Mypair._Myval2 = v4;
  extension::SynchronizedQueue<extension::ExThread::Runnable>::enqueue(
    &extension::AsyncWorker::s_instance.m_loadJobConsumer.m_jobQueue,
    (std::unique_ptr<extension::ExThread::Runnable>)&obj);
  if ( v10 )
    ((void (__fastcall *)(extension::future_asset_detail::FutureFileImageJob *, __int64))v10->~AgIThreadHost)(v10, 1i64);
  if ( v11 )
    (**v11)(v11, 1i64);
  v5 = (extension::AsyncContent<extension::AsyncFileImage> *)shared.m_ptr->m_refCount.m_value._My_val;
  if ( v5 )
  {
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFui64) == 1 )
    {
      extension::AsyncContent<extension::AsyncFileImage>::~AsyncContent<extension::AsyncFileImage>(v5);
      operator delete(v5, 0x68ui64);
    }
  }
}

void __fastcall extension::future_asset_detail::EnqueueFutureImageJob(
        extension::RefCountablePtr<extension::AsyncContent<Image> > shared,
        const extension::FutureImageOption *opt)
{
  extension::future_asset_detail::FutureImageJob *v4; // rax
  extension::AsyncContent<Image> *My_val; // r8
  extension::ExThread::Runnable *v6; // rax
  unsigned int v7; // edx
  extension::AsyncContent<OGLTexture> *v8; // rcx
  extension::RefCountablePtr<extension::AsyncContent<Image> > c; // [rsp+20h] [rbp-38h] BYREF
  std::unique_ptr<extension::ExThread::Runnable> obj; // [rsp+28h] [rbp-30h] BYREF
  __int64 v11; // [rsp+30h] [rbp-28h]
  void (__fastcall ****v12)(_QWORD, __int64); // [rsp+38h] [rbp-20h]
  extension::future_asset_detail::FutureImageJob **v13; // [rsp+40h] [rbp-18h]
  extension::future_asset_detail::FutureImageJob *v14; // [rsp+70h] [rbp+18h] BYREF
  void (__fastcall ***v15)(_QWORD, __int64); // [rsp+78h] [rbp+20h] BYREF

  v11 = -2i64;
  v4 = (extension::future_asset_detail::FutureImageJob *)operator new(0x30ui64);
  v14 = v4;
  My_val = (extension::AsyncContent<Image> *)shared.m_ptr->m_refCount.m_value._My_val;
  c.m_ptr = My_val;
  if ( My_val )
    _InterlockedExchangeAdd64((volatile signed __int64 *)My_val, 1ui64);
  extension::future_asset_detail::FutureImageJob::FutureImageJob(
    v4,
    (extension::RefCountablePtr<extension::AsyncContent<Image> >)&c,
    opt);
  v12 = &v15;
  v15 = 0i64;
  v13 = &v14;
  v14 = 0i64;
  obj._Mypair._Myval2 = v6;
  extension::SynchronizedQueue<extension::ExThread::Runnable>::enqueue(
    &extension::AsyncWorker::s_instance.m_loadJobConsumer.m_jobQueue,
    (std::unique_ptr<extension::ExThread::Runnable>)&obj);
  if ( v14 )
    ((void (__fastcall *)(extension::future_asset_detail::FutureImageJob *, __int64))v14->~AgIThreadHost)(v14, 1i64);
  if ( v15 )
    (**v15)(v15, 1i64);
  v8 = (extension::AsyncContent<OGLTexture> *)shared.m_ptr->m_refCount.m_value._My_val;
  if ( shared.m_ptr->m_refCount.m_value._My_val
    && _InterlockedExchangeAdd64((volatile signed __int64 *)v8, 0xFFFFFFFFFFFFFFFFui64) == 1 )
  {
    if ( v8 )
      extension::AsyncContent<Image>::`scalar deleting destructor'(v8, v7);
  }
}

void __fastcall extension::future_asset_detail::EnqueueFutureMirrorJob(
        extension::RefCountablePtr<extension::AsyncContent<OGLMirror> > shared)
{
  extension::future_asset_detail::FutureMirrorJob *v2; // rax
  extension::AsyncContent<OGLMirror> *My_val; // rdx
  extension::ExThread::Runnable *v4; // rax
  extension::AsyncContent<OGLMirror> *v5; // rbx
  std::unique_ptr<extension::ExThread::Runnable> obj; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+28h] [rbp-20h]
  void (__fastcall ****v8)(_QWORD, __int64); // [rsp+30h] [rbp-18h]
  extension::future_asset_detail::FutureMirrorJob **v9; // [rsp+38h] [rbp-10h]
  extension::future_asset_detail::FutureMirrorJob *v10; // [rsp+58h] [rbp+10h] BYREF
  void (__fastcall ***v11)(_QWORD, __int64); // [rsp+60h] [rbp+18h] BYREF
  extension::RefCountablePtr<extension::AsyncContent<OGLMirror> > c; // [rsp+68h] [rbp+20h] BYREF

  v7 = -2i64;
  v2 = (extension::future_asset_detail::FutureMirrorJob *)operator new(0x20ui64);
  v10 = v2;
  My_val = (extension::AsyncContent<OGLMirror> *)shared.m_ptr->m_refCount.m_value._My_val;
  c.m_ptr = My_val;
  if ( My_val )
    _InterlockedExchangeAdd64((volatile signed __int64 *)My_val, 1ui64);
  extension::future_asset_detail::FutureMirrorJob::FutureMirrorJob(
    v2,
    (extension::RefCountablePtr<extension::AsyncContent<OGLMirror> >)&c);
  v8 = &v11;
  v11 = 0i64;
  v9 = &v10;
  v10 = 0i64;
  obj._Mypair._Myval2 = v4;
  extension::SynchronizedQueue<extension::ExThread::Runnable>::enqueue(
    &extension::AsyncWorker::s_instance.m_fixupJobConsumer.m_jobQueue,
    (std::unique_ptr<extension::ExThread::Runnable>)&obj);
  if ( v10 )
    ((void (__fastcall *)(extension::future_asset_detail::FutureMirrorJob *, __int64))v10->~AgIThreadHost)(v10, 1i64);
  if ( v11 )
    (**v11)(v11, 1i64);
  v5 = (extension::AsyncContent<OGLMirror> *)shared.m_ptr->m_refCount.m_value._My_val;
  if ( v5 )
  {
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFui64) == 1 )
    {
      extension::AsyncContent<OGLMirror>::~AsyncContent<OGLMirror>(v5);
      operator delete(v5, 0x68ui64);
    }
  }
}

void __fastcall extension::future_asset_detail::EnqueueFutureMotionJob(
        extension::RefCountablePtr<extension::AsyncContent<OGLMotion> > shared)
{
  extension::future_asset_detail::FutureMotionJob *v2; // rax
  extension::AsyncContent<OGLMotion> *My_val; // rdx
  extension::ExThread::Runnable *v4; // rax
  extension::AsyncContent<OGLMotion> *v5; // rbx
  std::unique_ptr<extension::ExThread::Runnable> obj; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+28h] [rbp-20h]
  void (__fastcall ****v8)(_QWORD, __int64); // [rsp+30h] [rbp-18h]
  extension::future_asset_detail::FutureMotionJob **v9; // [rsp+38h] [rbp-10h]
  extension::future_asset_detail::FutureMotionJob *v10; // [rsp+58h] [rbp+10h] BYREF
  void (__fastcall ***v11)(_QWORD, __int64); // [rsp+60h] [rbp+18h] BYREF
  extension::RefCountablePtr<extension::AsyncContent<OGLMotion> > c; // [rsp+68h] [rbp+20h] BYREF

  v7 = -2i64;
  v2 = (extension::future_asset_detail::FutureMotionJob *)operator new(0x20ui64);
  v10 = v2;
  My_val = (extension::AsyncContent<OGLMotion> *)shared.m_ptr->m_refCount.m_value._My_val;
  c.m_ptr = My_val;
  if ( My_val )
    _InterlockedExchangeAdd64((volatile signed __int64 *)My_val, 1ui64);
  extension::future_asset_detail::FutureMotionJob::FutureMotionJob(
    v2,
    (extension::RefCountablePtr<extension::AsyncContent<OGLMotion> >)&c);
  v8 = &v11;
  v11 = 0i64;
  v9 = &v10;
  v10 = 0i64;
  obj._Mypair._Myval2 = v4;
  extension::SynchronizedQueue<extension::ExThread::Runnable>::enqueue(
    &extension::AsyncWorker::s_instance.m_fixupJobConsumer.m_jobQueue,
    (std::unique_ptr<extension::ExThread::Runnable>)&obj);
  if ( v10 )
    ((void (__fastcall *)(extension::future_asset_detail::FutureMotionJob *, __int64))v10->~AgIThreadHost)(v10, 1i64);
  if ( v11 )
    (**v11)(v11, 1i64);
  v5 = (extension::AsyncContent<OGLMotion> *)shared.m_ptr->m_refCount.m_value._My_val;
  if ( v5 )
  {
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFui64) == 1 )
    {
      extension::AsyncContent<OGLMotion>::~AsyncContent<OGLMotion>(v5);
      operator delete(v5, 0x68ui64);
    }
  }
}

void __fastcall extension::future_asset_detail::EnqueueFutureSecondaryJob(
        extension::RefCountablePtr<extension::AsyncContent<OGLSecondary> > shared)
{
  extension::future_asset_detail::FutureSecondaryJob *v2; // rax
  extension::AsyncContent<OGLSecondary> *My_val; // rdx
  extension::ExThread::Runnable *v4; // rax
  extension::AsyncContent<OGLSecondary> *v5; // rbx
  std::unique_ptr<extension::ExThread::Runnable> obj; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+28h] [rbp-20h]
  void (__fastcall ****v8)(_QWORD, __int64); // [rsp+30h] [rbp-18h]
  extension::future_asset_detail::FutureSecondaryJob **v9; // [rsp+38h] [rbp-10h]
  extension::future_asset_detail::FutureSecondaryJob *v10; // [rsp+58h] [rbp+10h] BYREF
  void (__fastcall ***v11)(_QWORD, __int64); // [rsp+60h] [rbp+18h] BYREF
  extension::RefCountablePtr<extension::AsyncContent<OGLSecondary> > c; // [rsp+68h] [rbp+20h] BYREF

  v7 = -2i64;
  v2 = (extension::future_asset_detail::FutureSecondaryJob *)operator new(0x20ui64);
  v10 = v2;
  My_val = (extension::AsyncContent<OGLSecondary> *)shared.m_ptr->m_refCount.m_value._My_val;
  c.m_ptr = My_val;
  if ( My_val )
    _InterlockedExchangeAdd64((volatile signed __int64 *)My_val, 1ui64);
  extension::future_asset_detail::FutureSecondaryJob::FutureSecondaryJob(
    v2,
    (extension::RefCountablePtr<extension::AsyncContent<OGLSecondary> >)&c);
  v8 = &v11;
  v11 = 0i64;
  v9 = &v10;
  v10 = 0i64;
  obj._Mypair._Myval2 = v4;
  extension::SynchronizedQueue<extension::ExThread::Runnable>::enqueue(
    &extension::AsyncWorker::s_instance.m_fixupJobConsumer.m_jobQueue,
    (std::unique_ptr<extension::ExThread::Runnable>)&obj);
  if ( v10 )
    ((void (__fastcall *)(extension::future_asset_detail::FutureSecondaryJob *, __int64))v10->~AgIThreadHost)(v10, 1i64);
  if ( v11 )
    (**v11)(v11, 1i64);
  v5 = (extension::AsyncContent<OGLSecondary> *)shared.m_ptr->m_refCount.m_value._My_val;
  if ( v5 )
  {
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFui64) == 1 )
    {
      extension::AsyncContent<OGLSecondary>::~AsyncContent<OGLSecondary>(v5);
      operator delete(v5, 0x68ui64);
    }
  }
}

void __fastcall extension::future_asset_detail::EnqueueFutureTextureJob(
        extension::RefCountablePtr<extension::AsyncContent<OGLTexture> > shared,
        const extension::FutureTextureOption *opt)
{
  extension::future_asset_detail::FutureTextureJob *v4; // rax
  extension::AsyncContent<OGLTexture> *My_val; // rcx
  extension::ExThread::Runnable *v6; // rax
  unsigned int v7; // edx
  extension::AsyncContent<OGLTexture> *v8; // rcx
  extension::RefCountablePtr<extension::AsyncContent<OGLTexture> > c; // [rsp+20h] [rbp-38h] BYREF
  std::unique_ptr<extension::ExThread::Runnable> obj; // [rsp+28h] [rbp-30h] BYREF
  __int64 v11; // [rsp+30h] [rbp-28h]
  extension::future_asset_detail::FutureTextureJob *v12; // [rsp+38h] [rbp-20h]
  void (__fastcall ****v13)(_QWORD, __int64); // [rsp+40h] [rbp-18h]
  void (__fastcall ***v14)(_QWORD, __int64); // [rsp+70h] [rbp+18h] BYREF
  void (__fastcall ***v15)(_QWORD, __int64); // [rsp+78h] [rbp+20h] BYREF

  v11 = -2i64;
  v4 = (extension::future_asset_detail::FutureTextureJob *)operator new(0x48ui64);
  v12 = v4;
  My_val = (extension::AsyncContent<OGLTexture> *)shared.m_ptr->m_refCount.m_value._My_val;
  c.m_ptr = My_val;
  if ( My_val )
    _InterlockedExchangeAdd64((volatile signed __int64 *)My_val, 1ui64);
  extension::future_asset_detail::FutureTextureJob::FutureTextureJob(
    v4,
    (extension::RefCountablePtr<extension::AsyncContent<OGLTexture> >)&c,
    opt);
  v12 = (extension::future_asset_detail::FutureTextureJob *)&v15;
  v15 = 0i64;
  v13 = &v14;
  v14 = 0i64;
  obj._Mypair._Myval2 = v6;
  extension::SynchronizedQueue<extension::ExThread::Runnable>::enqueue(
    &extension::AsyncWorker::s_instance.m_loadJobConsumer.m_jobQueue,
    (std::unique_ptr<extension::ExThread::Runnable>)&obj);
  if ( v14 )
    (**v14)(v14, 1i64);
  if ( v15 )
    (**v15)(v15, 1i64);
  v8 = (extension::AsyncContent<OGLTexture> *)shared.m_ptr->m_refCount.m_value._My_val;
  if ( shared.m_ptr->m_refCount.m_value._My_val
    && _InterlockedExchangeAdd64((volatile signed __int64 *)v8, 0xFFFFFFFFFFFFFFFFui64) == 1 )
  {
    if ( v8 )
      extension::AsyncContent<Image>::`scalar deleting destructor'(v8, v7);
  }
}

std::string *__fastcall extension::AsyncWorker::ExtractAssetBaseName(std::string *result, const std::string *path_str)
{
  extension::utility::PathExtractBaseName(result, path_str);
  return result;
}

std::string *__fastcall extension::AsyncWorker::ExtractAssetBaseName(std::string *result, const char *path_str)
{
  extension::utility::PathExtractBaseName(result, path_str);
  return result;
}

std::string *__fastcall extension::AsyncWorker::ExtractAssetDirectory(std::string *result, const std::string *path_str)
{
  extension::utility::PathExtractDirectory(result, path_str);
  return result;
}

std::string *__fastcall extension::AsyncWorker::ExtractAssetFileName(std::string *result, const char *path_str)
{
  extension::utility::PathExtractFileName(result, path_str);
  return result;
}

extension::RefCountablePtr<extension::BasicFutureObject<OGLCamera,void>::Body> *__fastcall extension::BasicFutureObject<OGLCamera,void>::Body::GetSharedEmpty(
        extension::RefCountablePtr<extension::BasicFutureObject<OGLCamera,void>::Body> *result)
{
  extension::RefCountableWeakSupportBase::WeakProxy *v3; // [rsp+40h] [rbp+8h]

  if ( __TSS0__1__GetSharedEmpty_Body___BasicFutureObject_VOGLCamera__X_extension__SA_AV__RefCountablePtr_VBody___BasicFutureObject_VOGLCamera__X_extension___4_XZ_4HA > *(_DWORD *)(*(_QWORD *)NtCurrentTeb()->Reserved1[11] + 40i64) )
  {
    Init_thread_header(&__TSS0__1__GetSharedEmpty_Body___BasicFutureObject_VOGLCamera__X_extension__SA_AV__RefCountablePtr_VBody___BasicFutureObject_VOGLCamera__X_extension___4_XZ_4HA);
    if ( __TSS0__1__GetSharedEmpty_Body___BasicFutureObject_VOGLCamera__X_extension__SA_AV__RefCountablePtr_VBody___BasicFutureObject_VOGLCamera__X_extension___4_XZ_4HA == -1 )
    {
      `extension::BasicFutureObject<OGLCamera,void>::Body::GetSharedEmpty'::`2'::shared_body.__vftable = (extension::BasicFutureObject<OGLCamera,void>::Body_vtbl *)&extension::RefCountableWeakSupportBase::`vftable';
      v3 = (extension::RefCountableWeakSupportBase::WeakProxy *)operator new(0x18ui64);
      v3->m_refCount.m_value._My_val = 1i64;
      v3->m_principal = &`extension::BasicFutureObject<OGLCamera,void>::Body::GetSharedEmpty'::`2'::shared_body;
      v3->m_sharedCount.m_value._My_val = 0i64;
      v3->m_sharedCount.m_value._My_val = 1i64;
      `extension::BasicFutureObject<OGLCamera,void>::Body::GetSharedEmpty'::`2'::shared_body.m_refCount.m_ptr = v3;
      `extension::BasicFutureObject<OGLCamera,void>::Body::GetSharedEmpty'::`2'::shared_body.__vftable = (extension::BasicFutureObject<OGLCamera,void>::Body_vtbl *)&extension::BasicFutureObject<OGLCamera,void>::Body::`vftable';
      `extension::BasicFutureObject<OGLCamera,void>::Body::GetSharedEmpty'::`2'::shared_body.m_content.m_ptr = 0i64;
      atexit(`extension::BasicFutureObject<OGLCamera,void>::Body::GetSharedEmpty'::`2'::`dynamic atexit destructor for 'shared_body'');
      Init_thread_footer(&__TSS0__1__GetSharedEmpty_Body___BasicFutureObject_VOGLCamera__X_extension__SA_AV__RefCountablePtr_VBody___BasicFutureObject_VOGLCamera__X_extension___4_XZ_4HA);
    }
  }
  result->m_ptr = &`extension::BasicFutureObject<OGLCamera,void>::Body::GetSharedEmpty'::`2'::shared_body;
  _InterlockedExchangeAdd64(
    (volatile signed __int64 *)&`extension::BasicFutureObject<OGLCamera,void>::Body::GetSharedEmpty'::`2'::shared_body.m_refCount.m_ptr->m_sharedCount,
    1ui64);
  return result;
}

extension::RefCountablePtr<extension::BasicFutureObject<OGLSecondary,void>::Body> *__fastcall extension::BasicFutureObject<OGLSecondary,void>::Body::GetSharedEmpty(
        extension::RefCountablePtr<extension::BasicFutureObject<OGLSecondary,void>::Body> *result)
{
  extension::RefCountableWeakSupportBase::WeakProxy *v3; // [rsp+40h] [rbp+8h]

  if ( __TSS0__1__GetSharedEmpty_Body___BasicFutureObject_VOGLSecondary__X_extension__SA_AV__RefCountablePtr_VBody___BasicFutureObject_VOGLSecondary__X_extension___4_XZ_4HA > *(_DWORD *)(*(_QWORD *)NtCurrentTeb()->Reserved1[11] + 40i64) )
  {
    Init_thread_header(&__TSS0__1__GetSharedEmpty_Body___BasicFutureObject_VOGLSecondary__X_extension__SA_AV__RefCountablePtr_VBody___BasicFutureObject_VOGLSecondary__X_extension___4_XZ_4HA);
    if ( __TSS0__1__GetSharedEmpty_Body___BasicFutureObject_VOGLSecondary__X_extension__SA_AV__RefCountablePtr_VBody___BasicFutureObject_VOGLSecondary__X_extension___4_XZ_4HA == -1 )
    {
      `extension::BasicFutureObject<OGLSecondary,void>::Body::GetSharedEmpty'::`2'::shared_body.__vftable = (extension::BasicFutureObject<OGLSecondary,void>::Body_vtbl *)&extension::RefCountableWeakSupportBase::`vftable';
      v3 = (extension::RefCountableWeakSupportBase::WeakProxy *)operator new(0x18ui64);
      v3->m_refCount.m_value._My_val = 1i64;
      v3->m_principal = &`extension::BasicFutureObject<OGLSecondary,void>::Body::GetSharedEmpty'::`2'::shared_body;
      v3->m_sharedCount.m_value._My_val = 0i64;
      v3->m_sharedCount.m_value._My_val = 1i64;
      `extension::BasicFutureObject<OGLSecondary,void>::Body::GetSharedEmpty'::`2'::shared_body.m_refCount.m_ptr = v3;
      `extension::BasicFutureObject<OGLSecondary,void>::Body::GetSharedEmpty'::`2'::shared_body.__vftable = (extension::BasicFutureObject<OGLSecondary,void>::Body_vtbl *)&extension::BasicFutureObject<OGLSecondary,void>::Body::`vftable';
      `extension::BasicFutureObject<OGLSecondary,void>::Body::GetSharedEmpty'::`2'::shared_body.m_content.m_ptr = 0i64;
      atexit(`extension::BasicFutureObject<OGLSecondary,void>::Body::GetSharedEmpty'::`2'::`dynamic atexit destructor for 'shared_body'');
      Init_thread_footer(&__TSS0__1__GetSharedEmpty_Body___BasicFutureObject_VOGLSecondary__X_extension__SA_AV__RefCountablePtr_VBody___BasicFutureObject_VOGLSecondary__X_extension___4_XZ_4HA);
    }
  }
  result->m_ptr = &`extension::BasicFutureObject<OGLSecondary,void>::Body::GetSharedEmpty'::`2'::shared_body;
  _InterlockedExchangeAdd64(
    (volatile signed __int64 *)&`extension::BasicFutureObject<OGLSecondary,void>::Body::GetSharedEmpty'::`2'::shared_body.m_refCount.m_ptr->m_sharedCount,
    1ui64);
  return result;
}

extension::RefCountablePtr<extension::AsyncContent<extension::AsyncFileImage> > *__fastcall extension::FutureObjectJobManager<extension::AsyncFileImage,void>::LoadStart(
        extension::RefCountablePtr<extension::AsyncContent<extension::AsyncFileImage> > *result,
        const std::string *name,
        const std::string *optstr,
        const void *__formal)
{
  extension::AsyncContent<extension::AsyncFileImage> *v7; // rax
  extension::RefCountablePtr<extension::AsyncContent<extension::AsyncFileImage> > shared; // [rsp+58h] [rbp+20h] BYREF

  shared.m_ptr = (extension::AsyncContent<extension::AsyncFileImage> *)__formal;
  shared.m_ptr = (extension::AsyncContent<extension::AsyncFileImage> *)operator new(0x68ui64);
  extension::AsyncContent<OGLSecondary>::AsyncContent<OGLSecondary>(
    (extension::AsyncContent<extension::exsound_detail::SoundBankImpl> *)shared.m_ptr,
    name,
    optstr);
  result->m_ptr = v7;
  shared.m_ptr = v7;
  if ( v7 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)v7, 1ui64);
  extension::FutureObjectJobManager<extension::AsyncFileImage,void>::EnqueueAsyncJob((extension::RefCountablePtr<extension::AsyncContent<extension::AsyncFileImage> >)&shared);
  return result;
}

extension::RefCountablePtr<extension::AsyncContent<OGLCamera> > *__fastcall extension::FutureObjectJobManager<OGLCamera,void>::LoadStart(
        extension::RefCountablePtr<extension::AsyncContent<OGLCamera> > *result,
        const std::string *name,
        const std::string *optstr,
        const void *__formal)
{
  extension::AsyncContent<OGLCamera> *v7; // rax
  unsigned int v8; // edx
  extension::AsyncContent<OGLCamera> *v9; // rcx
  extension::RefCountablePtr<extension::AsyncContent<OGLCamera> > shared; // [rsp+28h] [rbp-20h] BYREF
  __int64 v12; // [rsp+30h] [rbp-18h]
  extension::AsyncContent<OGLCamera> **v13; // [rsp+38h] [rbp-10h]
  extension::AsyncContent<OGLCamera> *v14; // [rsp+68h] [rbp+20h] BYREF

  v14 = (extension::AsyncContent<OGLCamera> *)__formal;
  v12 = -2i64;
  v14 = (extension::AsyncContent<OGLCamera> *)operator new(0x68ui64);
  extension::AsyncContent<OGLSecondary>::AsyncContent<OGLSecondary>(
    (extension::AsyncContent<extension::exsound_detail::SoundBankImpl> *)v14,
    name,
    optstr);
  result->m_ptr = v7;
  v14 = v7;
  if ( v7 )
  {
    _InterlockedExchangeAdd64((volatile signed __int64 *)v7, 1ui64);
    v7 = v14;
  }
  v13 = &v14;
  shared.m_ptr = v7;
  if ( v7 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)v7, 1ui64);
  extension::future_asset_detail::EnqueueFutureCameraJob((extension::RefCountablePtr<extension::AsyncContent<OGLCamera> >)&shared);
  v9 = v14;
  if ( v14 && _InterlockedExchangeAdd64((volatile signed __int64 *)v14, 0xFFFFFFFFFFFFFFFFui64) == 1 && v9 )
    extension::AsyncContent<OGLCamera>::`scalar deleting destructor'(v9, v8);
  return result;
}

extension::RefCountablePtr<extension::AsyncContent<OGLSecondary> > *__fastcall extension::FutureObjectJobManager<OGLSecondary,void>::LoadStart(
        extension::RefCountablePtr<extension::AsyncContent<OGLSecondary> > *result,
        const std::string *name,
        const std::string *optstr,
        const void *__formal)
{
  extension::AsyncContent<OGLSecondary> *v7; // rax
  extension::RefCountablePtr<extension::AsyncContent<OGLSecondary> > shared; // [rsp+58h] [rbp+20h] BYREF

  shared.m_ptr = (extension::AsyncContent<OGLSecondary> *)__formal;
  shared.m_ptr = (extension::AsyncContent<OGLSecondary> *)operator new(0x68ui64);
  extension::AsyncContent<OGLSecondary>::AsyncContent<OGLSecondary>(
    (extension::AsyncContent<extension::exsound_detail::SoundBankImpl> *)shared.m_ptr,
    name,
    optstr);
  result->m_ptr = v7;
  shared.m_ptr = v7;
  if ( v7 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)v7, 1ui64);
  extension::FutureObjectJobManager<OGLSecondary,void>::EnqueueAsyncJob((extension::RefCountablePtr<extension::AsyncContent<OGLSecondary> >)&shared);
  return result;
}

std::string *__fastcall extension::FutureObjectJobManager<extension::exsound_detail::SoundBankImpl,void>::Stringize(
        std::string *result,
        const void *__formal)
{
  std::string *v2; // rax

  result->_Mypair._Myval2._Myres = 15i64;
  v2 = result;
  result->_Mypair._Myval2._Mysize = 0i64;
  result->_Mypair._Myval2._Bx._Buf[0] = 0;
  return v2;
}

bool __fastcall std::vector<unsigned char>::_Buy(std::vector<unsigned char> *this, unsigned __int64 _Capacity)
{
  bool result; // al
  unsigned __int8 *v5; // rax

  result = 0;
  this->_Mypair._Myval2._Myfirst = 0i64;
  this->_Mypair._Myval2._Mylast = 0i64;
  this->_Mypair._Myval2._Myend = 0i64;
  if ( _Capacity )
  {
    v5 = std::_Wrap_alloc<std::allocator<unsigned char>>::allocate(
           (std::_Wrap_alloc<std::allocator<unsigned char> > *)this,
           _Capacity);
    this->_Mypair._Myval2._Myfirst = v5;
    this->_Mypair._Myval2._Mylast = v5;
    result = 1;
    this->_Mypair._Myval2._Myend = &this->_Mypair._Myval2._Myfirst[_Capacity];
  }
  return result;
}

std::_Tree_node<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig>,void *> *__fastcall std::_Tree_comp_alloc<std::_Tmap_traits<std::string,CSteamID,std::less<void>,std::allocator<std::pair<std::string const,CSteamID>>,0>>::_Buyheadnode(
        std::_Tree_comp_alloc<std::_Tmap_traits<std::string,extension::GFXIFontManager::LanguageConfig,std::less<std::string >,std::allocator<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig> >,0> > *this)
{
  std::_Tree_node<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig>,void *> *result; // rax

  result = (std::_Tree_node<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig>,void *> *)operator new(0x48ui64);
  if ( result )
    result->_Left = result;
  if ( result != (std::_Tree_node<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig>,void *> *)-8i64 )
    result->_Parent = result;
  if ( result != (std::_Tree_node<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig>,void *> *)-16i64 )
    result->_Right = result;
  *(_WORD *)&result->_Color = 257;
  return result;
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

std::_Tree_node<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig>,void *> *__fastcall std::_Tree_comp_alloc<std::_Tmap_traits<std::string,CSteamID,std::less<void>,std::allocator<std::pair<std::string const,CSteamID>>,0>>::_Buynode0(
        std::_Tree_comp_alloc<std::_Tmap_traits<std::string,extension::GFXIFontManager::LanguageConfig,std::less<std::string >,std::allocator<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig> >,0> > *this)
{
  std::_Tree_node<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig>,void *> *result; // rax

  result = (std::_Tree_node<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig>,void *> *)operator new(0x48ui64);
  if ( result )
    result->_Left = this->_Mypair._Myval2._Myval2._Myhead;
  if ( result != (std::_Tree_node<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig>,void *> *)-8i64 )
    result->_Parent = this->_Mypair._Myval2._Myval2._Myhead;
  if ( result != (std::_Tree_node<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig>,void *> *)-16i64 )
    result->_Right = this->_Mypair._Myval2._Myval2._Myhead;
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

void __fastcall std::vector<int>::_Construct_n(std::vector<int> *this, unsigned __int64 _Count, const int *_Pval)
{
  int *v5; // rax
  int *Myfirst; // rdi
  unsigned __int64 v7; // rdx
  std::_Wrap_alloc<std::allocator<int> > *v8; // r9

  this->_Mypair._Myval2._Myfirst = 0i64;
  this->_Mypair._Myval2._Mylast = 0i64;
  this->_Mypair._Myval2._Myend = 0i64;
  v5 = (int *)std::_Wrap_alloc<std::allocator<float>>::allocate(
                (std::_Wrap_alloc<std::allocator<float> > *)this,
                0x10ui64);
  this->_Mypair._Myval2._Myfirst = v5;
  this->_Mypair._Myval2._Mylast = v5;
  this->_Mypair._Myval2._Myend = this->_Mypair._Myval2._Myfirst + 16;
  Myfirst = this->_Mypair._Myval2._Myfirst;
  std::_Uninit_alloc_fill_n1<int *,unsigned __int64,std::allocator<int>>(this->_Mypair._Myval2._Myfirst, v7, _Pval, v8);
  this->_Mypair._Myval2._Mylast = Myfirst + 16;
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

void __fastcall std::_Tree<std::_Tset_traits<std::string,std::less<std::string>,std::allocator<std::string>,0>>::_Erase(
        std::_Tree<std::_Tset_traits<std::string,std::less<std::string >,std::allocator<std::string >,0> > *this,
        std::_Tree_node<std::string,void *> *_Rootnode)
{
  std::_Tree_node<std::string,void *> *v2; // rsi
  std::_Tree_node<std::string,void *> *i; // rdi
  unsigned __int64 Myres; // rax
  void **p_Myval; // rbx
  char *v7; // rcx
  char *v8; // rax
  unsigned __int64 v9; // rcx
  bool v10; // cf

  v2 = _Rootnode;
  for ( i = _Rootnode; !i->_Isnil; v2 = i )
  {
    std::_Tree<std::_Tset_traits<std::string,std::less<std::string>,std::allocator<std::string>,0>>::_Erase(
      this,
      i->_Right);
    Myres = v2->_Myval._Mypair._Myval2._Myres;
    p_Myval = (void **)&v2->_Myval;
    i = i->_Left;
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
    v2->_Myval._Mypair._Myval2._Myres = 15i64;
    v10 = v2->_Myval._Mypair._Myval2._Myres < 0x10;
    v2->_Myval._Mypair._Myval2._Mysize = 0i64;
    if ( !v10 )
      p_Myval = (void **)*p_Myval;
    *(_BYTE *)p_Myval = 0;
    operator delete(v2);
  }
}

std::ostreambuf_iterator<char> *__fastcall std::num_put<char,std::ostreambuf_iterator<char>>::_Fput(
        std::num_put<char,std::ostreambuf_iterator<char> > *this,
        std::ostreambuf_iterator<char> *result,
        std::ostreambuf_iterator<char> *_Dest,
        std::ios_base *_Iosbase,
        char _Fill,
        const char *_Buf,
        unsigned __int64 _Count)
{
  __int64 v8; // r8
  const char *v9; // rdx
  unsigned __int64 v10; // r15
  unsigned __int64 v11; // rsi
  const std::locale *v12; // rax
  std::locale::facet *v13; // r14
  std::_Facet_base *v14; // rax
  std::string *Ptr; // r9
  const std::locale *v16; // rax
  std::numpunct<char> *v17; // rbx
  std::_Facet_base *v18; // rax
  char v19; // r13
  bool v20; // zf
  char v21; // cl
  std::string *v22; // rax
  std::string *v23; // r14
  unsigned __int64 Mysize; // rbx
  __int64 v25; // r15
  char v26; // al
  unsigned __int64 v27; // rdi
  std::string *v28; // rax
  std::string *v29; // r8
  char *v30; // rdx
  std::string *v31; // rcx
  size_t v32; // rbx
  char *v33; // rcx
  std::string *v34; // rax
  std::string *v35; // rax
  std::string *v36; // rax
  __int64 Wide; // rsi
  unsigned __int64 v38; // rsi
  int v39; // eax
  std::locale *v40; // r14
  std::locale v41; // xmm0
  std::locale::_Locimp *v42; // rdi
  int *v43; // rcx
  char **v44; // rcx
  char *v45; // rdx
  int v46; // eax
  std::string *v47; // r14
  __int64 v48; // r13
  __int64 v49; // r15
  std::locale::_Locimp *v50; // rdi
  unsigned __int8 v51; // r8
  int *v52; // rcx
  unsigned __int8 **v53; // rcx
  unsigned __int8 *v54; // rdx
  int v55; // eax
  std::string *v56; // r14
  __int64 v57; // r15
  std::locale::_Locimp *v58; // rdi
  unsigned __int8 v59; // r8
  int *v60; // rcx
  unsigned __int8 **v61; // rcx
  unsigned __int8 *v62; // rdx
  int v63; // eax
  std::locale *v64; // r15
  std::locale::_Locimp *v65; // rdi
  int *v66; // rcx
  char **v67; // rcx
  char *v68; // rdx
  int v69; // eax
  std::string *v70; // r14
  __int64 v71; // r15
  std::locale::_Locimp *v72; // rdi
  unsigned __int8 v73; // r8
  int *v74; // rcx
  unsigned __int8 **v75; // rcx
  unsigned __int8 *v76; // rdx
  int v77; // eax
  std::string *v78; // r14
  unsigned __int64 v79; // rbx
  char *v80; // r14
  std::locale::_Locimp *v81; // rdi
  unsigned __int8 v82; // r8
  int *v83; // rcx
  unsigned __int8 **v84; // rcx
  unsigned __int8 *v85; // rdx
  int v86; // eax
  std::locale v87; // xmm0
  std::locale::_Locimp *v88; // rbx
  int *v89; // rcx
  char **v90; // rcx
  char *v91; // rdx
  int v92; // eax
  std::ostreambuf_iterator<char> *v93; // rbx
  char *v94; // rcx
  char *v95; // rcx
  std::locale resulta; // [rsp+20h] [rbp-81h] BYREF
  char control[2]; // [rsp+30h] [rbp-71h] BYREF
  __int64 v99; // [rsp+38h] [rbp-69h]
  std::locale *v100; // [rsp+40h] [rbp-61h]
  std::ios_base *v101; // [rsp+48h] [rbp-59h]
  std::ostreambuf_iterator<char> *v102; // [rsp+50h] [rbp-51h]
  __int64 v103; // [rsp+58h] [rbp-49h]
  std::string v104; // [rsp+60h] [rbp-41h] BYREF
  std::string v105; // [rsp+80h] [rbp-21h] BYREF

  v103 = -2i64;
  v101 = _Iosbase;
  v100 = (std::locale *)_Dest;
  v102 = result;
  v8 = _Count && ((*_Buf - 43) & 0xFD) == 0;
  v99 = v8;
  if ( (_Iosbase->_Fmtfl & 0x3000) == 12288 )
  {
    v9 = "pP";
    if ( v8 + 2 <= _Count && _Buf[v8] == 48 )
    {
      if ( ((_Buf[v8 + 1] - 88) & 0xDF) == 0 )
        v8 += 2i64;
      v99 = v8;
    }
  }
  else
  {
    v9 = "eE";
  }
  v10 = strcspn(_Buf, v9);
  strcpy(control, ".");
  control[0] = *localeconv()->decimal_point;
  v11 = strcspn(_Buf, control);
  v12 = std::ios_base::getloc(_Iosbase, &resulta);
  v13 = std::use_facet<std::ctype<char>>(v12);
  if ( resulta._Ptr )
  {
    v14 = resulta._Ptr->_Decref(resulta._Ptr);
    if ( v14 )
      ((void (__fastcall *)(std::_Facet_base *, __int64))v14->~_Facet_base)(v14, 1i64);
  }
  v104._Mypair._Myval2._Myres = 15i64;
  v104._Mypair._Myval2._Mysize = 0i64;
  v104._Mypair._Myval2._Bx._Buf[0] = 0;
  std::string::assign(&v104, _Count, 0);
  Ptr = &v104;
  if ( v104._Mypair._Myval2._Myres >= 0x10 )
    Ptr = (std::string *)v104._Mypair._Myval2._Bx._Ptr;
  ((void (__fastcall *)(std::locale::facet *, const char *, const char *, std::string *))v13->__vftable[2]._Incref)(
    v13,
    _Buf,
    &_Buf[_Count],
    Ptr);
  v16 = std::ios_base::getloc(_Iosbase, &resulta);
  v17 = (std::numpunct<char> *)std::use_facet<std::numpunct<char>>(v16);
  if ( resulta._Ptr )
  {
    v18 = resulta._Ptr->_Decref(resulta._Ptr);
    if ( v18 )
      ((void (__fastcall *)(std::_Facet_base *, __int64))v18->~_Facet_base)(v18, 1i64);
  }
  std::numpunct<char>::grouping(v17, &v105);
  v19 = v17->do_thousands_sep(v17);
  v20 = v11 == _Count;
  if ( v11 != _Count )
  {
    v21 = v17->do_decimal_point(v17);
    v22 = &v104;
    if ( v104._Mypair._Myval2._Myres >= 0x10 )
      v22 = (std::string *)v104._Mypair._Myval2._Bx._Ptr;
    v22->_Mypair._Myval2._Bx._Buf[v11] = v21;
    v20 = v11 == _Count;
  }
  if ( v20 )
    v11 = v10;
  v23 = &v105;
  if ( v105._Mypair._Myval2._Myres >= 0x10 )
    v23 = (std::string *)v105._Mypair._Myval2._Bx._Ptr;
  Mysize = v104._Mypair._Myval2._Mysize;
  if ( v23->_Mypair._Myval2._Bx._Buf[0] != 127 )
  {
    v25 = v99;
    do
    {
      v26 = v23->_Mypair._Myval2._Bx._Buf[0];
      if ( v23->_Mypair._Myval2._Bx._Buf[0] <= 0 || v26 >= v11 - v25 )
        break;
      v11 -= v26;
      if ( Mysize < v11 )
        std::_Xout_of_range("invalid string position");
      if ( Mysize == -1i64 || ~Mysize == 1 )
        std::_Xlength_error("string too long");
      v27 = Mysize + 1;
      if ( Mysize == -2i64 )
        std::_Xlength_error("string too long");
      if ( v104._Mypair._Myval2._Myres >= v27 )
      {
        if ( Mysize != -1i64 )
          goto LABEL_42;
        v104._Mypair._Myval2._Mysize = 0i64;
        v28 = &v104;
        if ( v104._Mypair._Myval2._Myres >= 0x10 )
          v28 = (std::string *)v104._Mypair._Myval2._Bx._Ptr;
        v28->_Mypair._Myval2._Bx._Buf[0] = 0;
      }
      else
      {
        std::string::_Copy(&v104, Mysize + 1, Mysize);
      }
      Mysize = v104._Mypair._Myval2._Mysize;
      if ( v27 )
      {
LABEL_42:
        v29 = &v104;
        v30 = v104._Mypair._Myval2._Bx._Ptr;
        if ( v104._Mypair._Myval2._Myres >= 0x10 )
          v29 = (std::string *)v104._Mypair._Myval2._Bx._Ptr;
        v31 = &v104;
        if ( v104._Mypair._Myval2._Myres >= 0x10 )
          v31 = (std::string *)v104._Mypair._Myval2._Bx._Ptr;
        v32 = Mysize - v11;
        v33 = &v31->_Mypair._Myval2._Bx._Buf[v11 + 1];
        if ( v32 )
        {
          memmove(v33, &v29->_Mypair._Myval2._Bx._Buf[v11], v32);
          v30 = v104._Mypair._Myval2._Bx._Ptr;
        }
        v34 = &v104;
        if ( v104._Mypair._Myval2._Myres >= 0x10 )
          v34 = (std::string *)v30;
        v34->_Mypair._Myval2._Bx._Buf[v11] = v19;
        v104._Mypair._Myval2._Mysize = v27;
        v35 = &v104;
        if ( v104._Mypair._Myval2._Myres >= 0x10 )
          v35 = (std::string *)v104._Mypair._Myval2._Bx._Ptr;
        v35->_Mypair._Myval2._Bx._Buf[v27] = 0;
        Mysize = v104._Mypair._Myval2._Mysize;
      }
      v36 = (std::string *)&v23->_Mypair._Myval2._Bx._Buf[1];
      if ( v23->_Mypair._Myval2._Bx._Buf[1] <= 0 )
        v36 = v23;
      v23 = v36;
    }
    while ( v36->_Mypair._Myval2._Bx._Buf[0] != 127 );
  }
  Wide = v101->_Wide;
  if ( Wide <= 0 || Wide <= Mysize )
    v38 = 0i64;
  else
    v38 = Wide - Mysize;
  v39 = v101->_Fmtfl & 0x1C0;
  v40 = v100;
  v41 = *v100;
  resulta = *v100;
  if ( v39 == 64 )
  {
    v70 = &v104;
    if ( v104._Mypair._Myval2._Myres >= 0x10 )
      v70 = (std::string *)v104._Mypair._Myval2._Bx._Ptr;
    v48 = v99;
    v71 = v99;
    if ( !v99 )
      goto LABEL_128;
    v72 = resulta._Ptr;
    do
    {
      v73 = v70->_Mypair._Myval2._Bx._Buf[0];
      if ( !v72
        || (!**(_QWORD **)&v72[1]._Myrefs || (v74 = *(int **)&v72[1]._Catmask, *v74 <= 0) ? (v77 = ((__int64 (__fastcall *)(std::locale::_Locimp *, _QWORD))v72->__vftable[1].~_Facet_base)(
                                                                                                     v72,
                                                                                                     v73)) : (--*v74, v75 = *(unsigned __int8 ***)&v72[1]._Myrefs, v76 = *v75, ++*v75, *v76 = v73, v77 = v73),
            v77 == -1) )
      {
        resulta.gap0 = 1;
      }
      v70 = (std::string *)((char *)v70 + 1);
      --v71;
    }
    while ( v71 );
    goto LABEL_127;
  }
  if ( v39 != 256 )
  {
    if ( v38 )
    {
      v42 = resulta._Ptr;
      do
      {
        if ( !v42
          || (!**(_QWORD **)&v42[1]._Myrefs || (v43 = *(int **)&v42[1]._Catmask, *v43 <= 0) ? (v46 = ((__int64 (__fastcall *)(std::locale::_Locimp *, _QWORD))v42->__vftable[1].~_Facet_base)(v42, (unsigned __int8)_Fill)) : (--*v43, v44 = *(char ***)&v42[1]._Myrefs, v45 = *v44, ++*v44, *v45 = _Fill, v46 = (unsigned __int8)_Fill),
              v46 == -1) )
        {
          resulta.gap0 = 1;
        }
        --v38;
      }
      while ( v38 );
      v41 = resulta;
    }
    *v40 = v41;
    v38 = 0i64;
    resulta = v41;
    v47 = &v104;
    if ( v104._Mypair._Myval2._Myres >= 0x10 )
      v47 = (std::string *)v104._Mypair._Myval2._Bx._Ptr;
    v48 = v99;
    v49 = v99;
    if ( !v99 )
      goto LABEL_128;
    v50 = resulta._Ptr;
    do
    {
      v51 = v47->_Mypair._Myval2._Bx._Buf[0];
      if ( !v50
        || (!**(_QWORD **)&v50[1]._Myrefs || (v52 = *(int **)&v50[1]._Catmask, *v52 <= 0) ? (v55 = ((__int64 (__fastcall *)(std::locale::_Locimp *, _QWORD))v50->__vftable[1].~_Facet_base)(
                                                                                                     v50,
                                                                                                     v51)) : (--*v52, v53 = *(unsigned __int8 ***)&v50[1]._Myrefs, v54 = *v53, ++*v53, *v54 = v51, v55 = v51),
            v55 == -1) )
      {
        resulta.gap0 = 1;
      }
      v47 = (std::string *)((char *)v47 + 1);
      --v49;
    }
    while ( v49 );
LABEL_127:
    v41 = resulta;
LABEL_128:
    v64 = v100;
    goto LABEL_129;
  }
  v56 = &v104;
  if ( v104._Mypair._Myval2._Myres >= 0x10 )
    v56 = (std::string *)v104._Mypair._Myval2._Bx._Ptr;
  v48 = v99;
  v57 = v99;
  if ( v99 )
  {
    v58 = resulta._Ptr;
    do
    {
      v59 = v56->_Mypair._Myval2._Bx._Buf[0];
      if ( !v58
        || (!**(_QWORD **)&v58[1]._Myrefs || (v60 = *(int **)&v58[1]._Catmask, *v60 <= 0) ? (v63 = ((__int64 (__fastcall *)(std::locale::_Locimp *, _QWORD))v58->__vftable[1].~_Facet_base)(
                                                                                                     v58,
                                                                                                     v59)) : (--*v60, v61 = *(unsigned __int8 ***)&v58[1]._Myrefs, v62 = *v61, ++*v61, *v62 = v59, v63 = v59),
            v63 == -1) )
      {
        resulta.gap0 = 1;
      }
      v56 = (std::string *)((char *)v56 + 1);
      --v57;
    }
    while ( v57 );
    v41 = resulta;
  }
  v64 = v100;
  *v100 = v41;
  resulta = v41;
  if ( v38 )
  {
    v65 = resulta._Ptr;
    do
    {
      if ( !v65
        || (!**(_QWORD **)&v65[1]._Myrefs || (v66 = *(int **)&v65[1]._Catmask, *v66 <= 0) ? (v69 = ((__int64 (__fastcall *)(std::locale::_Locimp *, _QWORD))v65->__vftable[1].~_Facet_base)(
                                                                                                     v65,
                                                                                                     (unsigned __int8)_Fill)) : (--*v66, v67 = *(char ***)&v65[1]._Myrefs, v68 = *v67, ++*v67, *v68 = _Fill, v69 = (unsigned __int8)_Fill),
            v69 == -1) )
      {
        resulta.gap0 = 1;
      }
      --v38;
    }
    while ( v38 );
    v41 = resulta;
  }
  v38 = 0i64;
LABEL_129:
  *v64 = v41;
  resulta = v41;
  v78 = &v104;
  if ( v104._Mypair._Myval2._Myres >= 0x10 )
    v78 = (std::string *)v104._Mypair._Myval2._Bx._Ptr;
  v79 = Mysize - v48;
  v80 = &v78->_Mypair._Myval2._Bx._Buf[v48];
  if ( v79 )
  {
    v81 = resulta._Ptr;
    do
    {
      v82 = *v80;
      if ( !v81
        || (!**(_QWORD **)&v81[1]._Myrefs || (v83 = *(int **)&v81[1]._Catmask, *v83 <= 0) ? (v86 = ((__int64 (__fastcall *)(std::locale::_Locimp *, _QWORD))v81->__vftable[1].~_Facet_base)(
                                                                                                     v81,
                                                                                                     v82)) : (--*v83, v84 = *(unsigned __int8 ***)&v81[1]._Myrefs, v85 = *v84, ++*v84, *v85 = v82, v86 = v82),
            v86 == -1) )
      {
        resulta.gap0 = 1;
      }
      ++v80;
      --v79;
    }
    while ( v79 );
    v41 = resulta;
  }
  *v64 = v41;
  v101->_Wide = 0i64;
  v87 = *v64;
  resulta = *v64;
  if ( v38 )
  {
    v88 = resulta._Ptr;
    do
    {
      if ( !v88
        || (!**(_QWORD **)&v88[1]._Myrefs || (v89 = *(int **)&v88[1]._Catmask, *v89 <= 0) ? (v92 = ((__int64 (__fastcall *)(std::locale::_Locimp *, _QWORD))v88->__vftable[1].~_Facet_base)(
                                                                                                     v88,
                                                                                                     (unsigned __int8)_Fill)) : (--*v89, v90 = *(char ***)&v88[1]._Myrefs, v91 = *v90, ++*v90, *v91 = _Fill, v92 = (unsigned __int8)_Fill),
            v92 == -1) )
      {
        resulta.gap0 = 1;
      }
      --v38;
    }
    while ( v38 );
    v87 = resulta;
  }
  v93 = v102;
  *(std::locale *)v102 = v87;
  if ( v105._Mypair._Myval2._Myres >= 0x10 )
  {
    v94 = v105._Mypair._Myval2._Bx._Ptr;
    if ( v105._Mypair._Myval2._Myres + 1 >= 0x1000 )
    {
      if ( (v105._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
        invalid_parameter_noinfo_noreturn();
      v94 = (char *)*((_QWORD *)v105._Mypair._Myval2._Bx._Ptr - 1);
      if ( v94 >= v105._Mypair._Myval2._Bx._Ptr )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(v105._Mypair._Myval2._Bx._Ptr - v94) < (char *)8 )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(v105._Mypair._Myval2._Bx._Ptr - v94) > (char *)0x27 )
        invalid_parameter_noinfo_noreturn();
    }
    operator delete(v94);
  }
  v105._Mypair._Myval2._Myres = 15i64;
  v105._Mypair._Myval2._Mysize = 0i64;
  v105._Mypair._Myval2._Bx._Buf[0] = 0;
  if ( v104._Mypair._Myval2._Myres >= 0x10 )
  {
    v95 = v104._Mypair._Myval2._Bx._Ptr;
    if ( v104._Mypair._Myval2._Myres + 1 >= 0x1000 )
    {
      if ( (v104._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
        invalid_parameter_noinfo_noreturn();
      v95 = (char *)*((_QWORD *)v104._Mypair._Myval2._Bx._Ptr - 1);
      if ( v95 >= v104._Mypair._Myval2._Bx._Ptr )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(v104._Mypair._Myval2._Bx._Ptr - v95) < (char *)8 )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(v104._Mypair._Myval2._Bx._Ptr - v95) > (char *)0x27 )
        invalid_parameter_noinfo_noreturn();
    }
    operator delete(v95);
  }
  return v93;
}

unsigned __int64 __fastcall std::num_put<char,std::ostreambuf_iterator<char>>::_Getcat(
        const std::locale::facet **_Ppf,
        const std::locale *_Ploc)
{
  std::locale::facet *v4; // rdi
  std::locale::_Locimp *Ptr; // rcx
  const char *Myptr; // rdx
  std::_Locinfo v8; // [rsp+28h] [rbp-70h] BYREF

  if ( _Ppf && !*_Ppf )
  {
    v4 = (std::locale::facet *)operator new(0x10ui64);
    Ptr = _Ploc->_Ptr;
    if ( Ptr )
    {
      Myptr = Ptr->_Name._Myptr;
      if ( !Myptr )
        Myptr = &Ptr->_Name._Nul;
    }
    else
    {
      Myptr = &pnewText;
    }
    std::_Locinfo::_Locinfo(&v8, Myptr);
    v4->_Myrefs = 0;
    v4->__vftable = (std::locale::facet_vtbl *)&std::num_put<char,std::ostreambuf_iterator<char>>::`vftable';
    *_Ppf = v4;
    std::_Locinfo::~_Locinfo(&v8);
  }
  return 4i64;
}

unsigned __int64 __fastcall std::numpunct<char>::_Getcat(const std::locale::facet **_Ppf, const std::locale *_Ploc)
{
  std::numpunct<char> *v4; // rdi
  std::locale::_Locimp *Ptr; // rcx
  const char *Myptr; // rdx
  const std::_Locinfo *v7; // rax
  std::_Locinfo v9; // [rsp+28h] [rbp-70h] BYREF

  if ( _Ppf && !*_Ppf )
  {
    v4 = (std::numpunct<char> *)operator new(0x30ui64);
    Ptr = _Ploc->_Ptr;
    if ( Ptr )
    {
      Myptr = Ptr->_Name._Myptr;
      if ( !Myptr )
        Myptr = &Ptr->_Name._Nul;
    }
    else
    {
      Myptr = &pnewText;
    }
    std::_Locinfo::_Locinfo(&v9, Myptr);
    v4->_Myrefs = 0;
    v4->__vftable = (std::numpunct<char>_vtbl *)&std::numpunct<char>::`vftable';
    std::numpunct<char>::_Init(v4, v7, 1);
    *_Ppf = v4;
    std::_Locinfo::~_Locinfo(&v9);
  }
  return 4i64;
}

// attributes: thunk
void __fastcall std::_LaunchPad<std::unique_ptr<std::tuple<_lambda_224f2aff27d484af60707df2a7dcfac8_>>>::_Go(
        std::_LaunchPad<std::unique_ptr<std::tuple<<lambda_224f2aff27d484af60707df2a7dcfac8> >> > *this)
{
  std::_LaunchPad<std::unique_ptr<std::tuple<_lambda_224f2aff27d484af60707df2a7dcfac8_>>>::_Run(this);
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

void __fastcall std::numpunct<char>::_Init(std::numpunct<char> *this, const std::_Locinfo *_Lobj, bool _Isdef)
{
  lconv *v5; // r14
  const char *grouping; // rdi
  __int64 v7; // rbx
  unsigned __int64 v8; // rbx
  const char *v9; // rax
  signed __int64 v10; // rcx
  const char *v11; // rbx
  __int64 v12; // rdi
  const char *v13; // rax
  const char *v14; // rbx
  __int64 v15; // rdi
  const char *v16; // rax
  _Cvtvec result; // [rsp+28h] [rbp-50h] BYREF

  v5 = localeconv();
  Getcvt(&result);
  this->_Grouping = 0i64;
  this->_Falsename = 0i64;
  this->_Truename = 0i64;
  grouping = &pnewText;
  if ( !_Isdef )
    grouping = v5->grouping;
  Getcvt(&result);
  v7 = -1i64;
  do
    ++v7;
  while ( grouping[v7] );
  v8 = v7 + 1;
  v9 = (const char *)calloc(v8, 1ui64);
  if ( !v9 )
    std::_Xbad_alloc();
  if ( v8 )
  {
    v10 = v9 - grouping;
    do
    {
      grouping[v10] = *grouping;
      ++grouping;
      --v8;
    }
    while ( v8 );
  }
  this->_Grouping = v9;
  v11 = "false";
  v12 = 6i64;
  v13 = (const char *)calloc(6ui64, 1ui64);
  if ( !v13 )
    std::_Xbad_alloc();
  do
  {
    v11[v13 - "false"] = *v11;
    ++v11;
    --v12;
  }
  while ( v12 );
  this->_Falsename = v13;
  v14 = "true";
  v15 = 5i64;
  v16 = (const char *)calloc(5ui64, 1ui64);
  if ( !v16 )
    std::_Xbad_alloc();
  do
  {
    v14[v16 - "true"] = *v14;
    ++v14;
    --v15;
  }
  while ( v15 );
  this->_Truename = v16;
  if ( _Isdef )
  {
    *(_WORD *)&this->_Dp = 11310;
  }
  else
  {
    this->_Dp = *v5->decimal_point;
    this->_Kseparator = *v5->thousands_sep;
  }
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

std::ostreambuf_iterator<char> *__fastcall std::num_put<char,std::ostreambuf_iterator<char>>::_Iput(
        std::num_put<char,std::ostreambuf_iterator<char> > *this,
        std::ostreambuf_iterator<char> *result,
        std::ostreambuf_iterator<char> *_Dest,
        std::ios_base *_Iosbase,
        char _Fill,
        char *_Buf,
        unsigned __int64 _Count)
{
  unsigned __int64 v9; // rdi
  __int64 v10; // r13
  const std::locale *v11; // rax
  std::locale::facet *v12; // rsi
  std::_Facet_base *v13; // rax
  std::string *Ptr; // r9
  const std::locale *v15; // rax
  std::numpunct<char> *v16; // rsi
  std::_Facet_base *v17; // rax
  std::string *v18; // rbx
  char v19; // si
  char v20; // cl
  std::string *v21; // rax
  unsigned __int64 Mysize; // r12
  __int64 Wide; // rdi
  unsigned __int64 v24; // rdi
  int v25; // eax
  std::locale v26; // xmm0
  std::locale::_Locimp *v27; // rbx
  int *v28; // rcx
  char **v29; // rcx
  char *v30; // rdx
  int v31; // eax
  std::string *v32; // rsi
  __int64 v33; // r14
  std::locale::_Locimp *v34; // rbx
  unsigned __int8 v35; // r8
  int *v36; // rcx
  unsigned __int8 **v37; // rcx
  unsigned __int8 *v38; // rdx
  int v39; // eax
  std::string *v40; // rsi
  __int64 v41; // r14
  std::locale::_Locimp *v42; // rbx
  unsigned __int8 v43; // r8
  int *v44; // rcx
  unsigned __int8 **v45; // rcx
  unsigned __int8 *v46; // rdx
  int v47; // eax
  std::locale *v48; // r14
  std::locale::_Locimp *v49; // rbx
  int *v50; // rcx
  char **v51; // rcx
  char *v52; // rdx
  int v53; // eax
  std::string *v54; // rsi
  __int64 v55; // r14
  std::locale::_Locimp *v56; // rbx
  unsigned __int8 v57; // r8
  int *v58; // rcx
  unsigned __int8 **v59; // rcx
  unsigned __int8 *v60; // rdx
  int v61; // eax
  std::string *v62; // rsi
  __int64 v63; // r12
  char *v64; // rsi
  std::locale::_Locimp *v65; // rbx
  unsigned __int8 v66; // r8
  int *v67; // rcx
  unsigned __int8 **v68; // rcx
  unsigned __int8 *v69; // rdx
  int v70; // eax
  std::locale v71; // xmm0
  std::locale::_Locimp *v72; // rbx
  int *v73; // rcx
  char **v74; // rcx
  char *v75; // rdx
  int v76; // eax
  std::ostreambuf_iterator<char> *v77; // rbx
  char *v78; // rcx
  char *v79; // rcx
  std::locale resulta; // [rsp+20h] [rbp-71h] BYREF
  std::ostreambuf_iterator<char> *v82; // [rsp+30h] [rbp-61h]
  std::ios_base *v83; // [rsp+38h] [rbp-59h]
  std::ostreambuf_iterator<char> *v84; // [rsp+40h] [rbp-51h]
  __int64 v85; // [rsp+48h] [rbp-49h]
  std::string v86; // [rsp+50h] [rbp-41h] BYREF
  std::string v87; // [rsp+70h] [rbp-21h] BYREF

  v85 = -2i64;
  v83 = _Iosbase;
  v82 = _Dest;
  v84 = result;
  v9 = _Count;
  v10 = _Count && ((*_Buf - 43) & 0xFD) == 0;
  if ( (_Iosbase->_Fmtfl & 0xE00) == 2048 && v10 + 2 <= _Count && _Buf[v10] == 48 && ((_Buf[v10 + 1] - 88) & 0xDF) == 0 )
    v10 += 2i64;
  v11 = std::ios_base::getloc(_Iosbase, &resulta);
  v12 = std::use_facet<std::ctype<char>>(v11);
  if ( resulta._Ptr )
  {
    v13 = resulta._Ptr->_Decref(resulta._Ptr);
    if ( v13 )
      ((void (__fastcall *)(std::_Facet_base *, __int64))v13->~_Facet_base)(v13, 1i64);
  }
  v86._Mypair._Myval2._Myres = 15i64;
  v86._Mypair._Myval2._Mysize = 0i64;
  v86._Mypair._Myval2._Bx._Buf[0] = 0;
  std::string::assign(&v86, _Count, 0);
  Ptr = &v86;
  if ( v86._Mypair._Myval2._Myres >= 0x10 )
    Ptr = (std::string *)v86._Mypair._Myval2._Bx._Ptr;
  ((void (__fastcall *)(std::locale::facet *, char *, char *, std::string *))v12->__vftable[2]._Incref)(
    v12,
    _Buf,
    &_Buf[_Count],
    Ptr);
  v15 = std::ios_base::getloc(_Iosbase, &resulta);
  v16 = (std::numpunct<char> *)std::use_facet<std::numpunct<char>>(v15);
  if ( resulta._Ptr )
  {
    v17 = resulta._Ptr->_Decref(resulta._Ptr);
    if ( v17 )
      ((void (__fastcall *)(std::_Facet_base *, __int64))v17->~_Facet_base)(v17, 1i64);
  }
  std::numpunct<char>::grouping(v16, &v87);
  v18 = &v87;
  if ( v87._Mypair._Myval2._Myres >= 0x10 )
    v18 = (std::string *)v87._Mypair._Myval2._Bx._Ptr;
  if ( (unsigned __int8)(v18->_Mypair._Myval2._Bx._Buf[0] - 1) <= 0x7Du )
  {
    v19 = v16->do_thousands_sep(v16);
    if ( v18->_Mypair._Myval2._Bx._Buf[0] != 127 )
    {
      do
      {
        v20 = v18->_Mypair._Myval2._Bx._Buf[0];
        if ( v18->_Mypair._Myval2._Bx._Buf[0] <= 0 || v20 >= v9 - v10 )
          break;
        v9 -= v20;
        std::string::insert(&v86, v9, 1ui64, v19);
        v21 = (std::string *)&v18->_Mypair._Myval2._Bx._Buf[1];
        if ( v18->_Mypair._Myval2._Bx._Buf[1] <= 0 )
          v21 = v18;
        v18 = v21;
      }
      while ( v21->_Mypair._Myval2._Bx._Buf[0] != 127 );
    }
  }
  Mysize = v86._Mypair._Myval2._Mysize;
  Wide = v83->_Wide;
  if ( Wide <= 0 || Wide <= v86._Mypair._Myval2._Mysize )
    v24 = 0i64;
  else
    v24 = Wide - v86._Mypair._Myval2._Mysize;
  v25 = v83->_Fmtfl & 0x1C0;
  v26 = (std::locale)*_Dest;
  resulta = (std::locale)*_Dest;
  if ( v25 == 64 )
  {
    v54 = &v86;
    if ( v86._Mypair._Myval2._Myres >= 0x10 )
      v54 = (std::string *)v86._Mypair._Myval2._Bx._Ptr;
    v55 = v10;
    if ( !v10 )
      goto LABEL_95;
    v56 = resulta._Ptr;
    do
    {
      v57 = v54->_Mypair._Myval2._Bx._Buf[0];
      if ( !v56
        || (!**(_QWORD **)&v56[1]._Myrefs || (v58 = *(int **)&v56[1]._Catmask, *v58 <= 0) ? (v61 = ((__int64 (__fastcall *)(std::locale::_Locimp *, _QWORD))v56->__vftable[1].~_Facet_base)(
                                                                                                     v56,
                                                                                                     v57)) : (--*v58, v59 = *(unsigned __int8 ***)&v56[1]._Myrefs, v60 = *v59, ++*v59, *v60 = v57, v61 = v57),
            v61 == -1) )
      {
        resulta.gap0 = 1;
      }
      v54 = (std::string *)((char *)v54 + 1);
      --v55;
    }
    while ( v55 );
    goto LABEL_94;
  }
  if ( v25 != 256 )
  {
    if ( v24 )
    {
      v27 = resulta._Ptr;
      do
      {
        if ( !v27
          || (!**(_QWORD **)&v27[1]._Myrefs || (v28 = *(int **)&v27[1]._Catmask, *v28 <= 0) ? (v31 = ((__int64 (__fastcall *)(std::locale::_Locimp *, _QWORD))v27->__vftable[1].~_Facet_base)(v27, (unsigned __int8)_Fill)) : (--*v28, v29 = *(char ***)&v27[1]._Myrefs, v30 = *v29, ++*v29, *v30 = _Fill, v31 = (unsigned __int8)_Fill),
              v31 == -1) )
        {
          resulta.gap0 = 1;
        }
        --v24;
      }
      while ( v24 );
      v26 = resulta;
    }
    *(std::locale *)_Dest = v26;
    v24 = 0i64;
    resulta = v26;
    v32 = &v86;
    if ( v86._Mypair._Myval2._Myres >= 0x10 )
      v32 = (std::string *)v86._Mypair._Myval2._Bx._Ptr;
    v33 = v10;
    if ( !v10 )
      goto LABEL_95;
    v34 = resulta._Ptr;
    do
    {
      v35 = v32->_Mypair._Myval2._Bx._Buf[0];
      if ( !v34
        || (!**(_QWORD **)&v34[1]._Myrefs || (v36 = *(int **)&v34[1]._Catmask, *v36 <= 0) ? (v39 = ((__int64 (__fastcall *)(std::locale::_Locimp *, _QWORD))v34->__vftable[1].~_Facet_base)(
                                                                                                     v34,
                                                                                                     v35)) : (--*v36, v37 = *(unsigned __int8 ***)&v34[1]._Myrefs, v38 = *v37, ++*v37, *v38 = v35, v39 = v35),
            v39 == -1) )
      {
        resulta.gap0 = 1;
      }
      v32 = (std::string *)((char *)v32 + 1);
      --v33;
    }
    while ( v33 );
LABEL_94:
    v26 = resulta;
LABEL_95:
    v48 = (std::locale *)v82;
    goto LABEL_96;
  }
  v40 = &v86;
  if ( v86._Mypair._Myval2._Myres >= 0x10 )
    v40 = (std::string *)v86._Mypair._Myval2._Bx._Ptr;
  v41 = v10;
  if ( v10 )
  {
    v42 = resulta._Ptr;
    do
    {
      v43 = v40->_Mypair._Myval2._Bx._Buf[0];
      if ( !v42
        || (!**(_QWORD **)&v42[1]._Myrefs || (v44 = *(int **)&v42[1]._Catmask, *v44 <= 0) ? (v47 = ((__int64 (__fastcall *)(std::locale::_Locimp *, _QWORD))v42->__vftable[1].~_Facet_base)(
                                                                                                     v42,
                                                                                                     v43)) : (--*v44, v45 = *(unsigned __int8 ***)&v42[1]._Myrefs, v46 = *v45, ++*v45, *v46 = v43, v47 = v43),
            v47 == -1) )
      {
        resulta.gap0 = 1;
      }
      v40 = (std::string *)((char *)v40 + 1);
      --v41;
    }
    while ( v41 );
    v26 = resulta;
  }
  v48 = (std::locale *)v82;
  *(std::locale *)v82 = v26;
  resulta = v26;
  if ( v24 )
  {
    v49 = resulta._Ptr;
    do
    {
      if ( !v49
        || (!**(_QWORD **)&v49[1]._Myrefs || (v50 = *(int **)&v49[1]._Catmask, *v50 <= 0) ? (v53 = ((__int64 (__fastcall *)(std::locale::_Locimp *, _QWORD))v49->__vftable[1].~_Facet_base)(
                                                                                                     v49,
                                                                                                     (unsigned __int8)_Fill)) : (--*v50, v51 = *(char ***)&v49[1]._Myrefs, v52 = *v51, ++*v51, *v52 = _Fill, v53 = (unsigned __int8)_Fill),
            v53 == -1) )
      {
        resulta.gap0 = 1;
      }
      --v24;
    }
    while ( v24 );
    v26 = resulta;
  }
  v24 = 0i64;
LABEL_96:
  *v48 = v26;
  resulta = v26;
  v62 = &v86;
  if ( v86._Mypair._Myval2._Myres >= 0x10 )
    v62 = (std::string *)v86._Mypair._Myval2._Bx._Ptr;
  v63 = Mysize - v10;
  v64 = &v62->_Mypair._Myval2._Bx._Buf[v10];
  if ( v63 )
  {
    v65 = resulta._Ptr;
    do
    {
      v66 = *v64;
      if ( !v65
        || (!**(_QWORD **)&v65[1]._Myrefs || (v67 = *(int **)&v65[1]._Catmask, *v67 <= 0) ? (v70 = ((__int64 (__fastcall *)(std::locale::_Locimp *, _QWORD))v65->__vftable[1].~_Facet_base)(
                                                                                                     v65,
                                                                                                     v66)) : (--*v67, v68 = *(unsigned __int8 ***)&v65[1]._Myrefs, v69 = *v68, ++*v68, *v69 = v66, v70 = v66),
            v70 == -1) )
      {
        resulta.gap0 = 1;
      }
      ++v64;
      --v63;
    }
    while ( v63 );
    v26 = resulta;
  }
  *v48 = v26;
  v83->_Wide = 0i64;
  v71 = *v48;
  resulta = *v48;
  if ( v24 )
  {
    v72 = resulta._Ptr;
    do
    {
      if ( !v72
        || (!**(_QWORD **)&v72[1]._Myrefs || (v73 = *(int **)&v72[1]._Catmask, *v73 <= 0) ? (v76 = ((__int64 (__fastcall *)(std::locale::_Locimp *, _QWORD))v72->__vftable[1].~_Facet_base)(
                                                                                                     v72,
                                                                                                     (unsigned __int8)_Fill)) : (--*v73, v74 = *(char ***)&v72[1]._Myrefs, v75 = *v74, ++*v74, *v75 = _Fill, v76 = (unsigned __int8)_Fill),
            v76 == -1) )
      {
        resulta.gap0 = 1;
      }
      --v24;
    }
    while ( v24 );
    v71 = resulta;
  }
  v77 = v84;
  *(std::locale *)v84 = v71;
  if ( v87._Mypair._Myval2._Myres >= 0x10 )
  {
    v78 = v87._Mypair._Myval2._Bx._Ptr;
    if ( v87._Mypair._Myval2._Myres + 1 >= 0x1000 )
    {
      if ( (v87._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
        invalid_parameter_noinfo_noreturn();
      v78 = (char *)*((_QWORD *)v87._Mypair._Myval2._Bx._Ptr - 1);
      if ( v78 >= v87._Mypair._Myval2._Bx._Ptr )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(v87._Mypair._Myval2._Bx._Ptr - v78) < (char *)8 )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(v87._Mypair._Myval2._Bx._Ptr - v78) > (char *)0x27 )
        invalid_parameter_noinfo_noreturn();
    }
    operator delete(v78);
  }
  v87._Mypair._Myval2._Myres = 15i64;
  v87._Mypair._Myval2._Mysize = 0i64;
  v87._Mypair._Myval2._Bx._Buf[0] = 0;
  if ( v86._Mypair._Myval2._Myres >= 0x10 )
  {
    v79 = v86._Mypair._Myval2._Bx._Ptr;
    if ( v86._Mypair._Myval2._Myres + 1 >= 0x1000 )
    {
      if ( (v86._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
        invalid_parameter_noinfo_noreturn();
      v79 = (char *)*((_QWORD *)v86._Mypair._Myval2._Bx._Ptr - 1);
      if ( v79 >= v86._Mypair._Myval2._Bx._Ptr )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(v86._Mypair._Myval2._Bx._Ptr - v79) < (char *)8 )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(v86._Mypair._Myval2._Bx._Ptr - v79) > (char *)0x27 )
        invalid_parameter_noinfo_noreturn();
    }
    operator delete(v79);
  }
  return v77;
}

void __fastcall std::_Tree<std::_Tmap_traits<AgControllerUID,FighterOperationMapper,std::less<AgControllerUID>,std::allocator<std::pair<AgControllerUID const,FighterOperationMapper>>,0>>::_Lrotate(
        std::_Tree<std::_Tmap_traits<AgStringRef,AgJsonNode,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const ,AgJsonNode> >,0> > *this,
        std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *_Wherenode)
{
  std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *Right; // r8
  std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *Parent; // rax

  Right = _Wherenode->_Right;
  _Wherenode->_Right = Right->_Left;
  if ( !Right->_Left->_Isnil )
    Right->_Left->_Parent = _Wherenode;
  Right->_Parent = _Wherenode->_Parent;
  if ( _Wherenode == this->_Mypair._Myval2._Myval2._Myhead->_Parent )
  {
    this->_Mypair._Myval2._Myval2._Myhead->_Parent = Right;
    Right->_Left = _Wherenode;
    _Wherenode->_Parent = Right;
  }
  else
  {
    Parent = _Wherenode->_Parent;
    if ( _Wherenode == Parent->_Left )
      Parent->_Left = Right;
    else
      Parent->_Right = Right;
    Right->_Left = _Wherenode;
    _Wherenode->_Parent = Right;
  }
}

void __fastcall std::vector<extension::BasicFutureObject<OGLMotion,void>>::_Pop_back_n(
        std::vector<extension::BasicFutureObject<OGLSecondary,void>> *this,
        unsigned __int64 _Count)
{
  extension::BasicFutureObject<OGLSecondary,void> *Mylast; // rsi
  extension::BasicFutureObject<OGLSecondary,void> *v4; // rdi
  extension::RefCountablePtr<extension::BasicFutureObject<OGLSecondary,void>::Body> *p_m_body; // rbx
  extension::BasicFutureObject<OGLSecondary,void>::Body *m_ptr; // rcx

  Mylast = this->_Mypair._Myval2._Mylast;
  v4 = &Mylast[-_Count];
  if ( v4 == Mylast )
  {
    this->_Mypair._Myval2._Mylast = v4;
  }
  else
  {
    p_m_body = &v4->m_body;
    do
    {
      m_ptr = p_m_body->m_ptr;
      if ( p_m_body->m_ptr )
      {
        if ( _InterlockedExchangeAdd64(
               (volatile signed __int64 *)&m_ptr->m_refCount.m_ptr->m_sharedCount,
               0xFFFFFFFFFFFFFFFFui64) == 1 )
          ((void (__fastcall *)(extension::BasicFutureObject<OGLSecondary,void>::Body *, __int64))m_ptr->~RefCountableWeakSupportBase)(
            m_ptr,
            1i64);
      }
      p_m_body += 2;
    }
    while ( &p_m_body[-1] != (extension::RefCountablePtr<extension::BasicFutureObject<OGLSecondary,void>::Body> *)Mylast );
    this->_Mypair._Myval2._Mylast = v4;
  }
}

void __fastcall std::vector<char>::_Reallocate(std::vector<char> *this, unsigned __int64 _Count)
{
  _QWORD *v4; // rbx
  void *v5; // rax
  char *Myfirst; // rcx
  signed __int64 v7; // r14
  char *v8; // rax
  unsigned __int64 v9; // rcx

  if ( _Count )
  {
    if ( _Count < 0x1000 )
    {
      v4 = operator new(_Count);
    }
    else
    {
      if ( _Count + 39 <= _Count )
        std::_Xbad_alloc();
      v5 = operator new(_Count + 39);
      v4 = (_QWORD *)(((unsigned __int64)v5 + 39) & 0xFFFFFFFFFFFFFFE0ui64);
      *(v4 - 1) = v5;
    }
  }
  else
  {
    v4 = 0i64;
  }
  memmove(v4, this->_Mypair._Myval2._Myfirst, this->_Mypair._Myval2._Mylast - this->_Mypair._Myval2._Myfirst);
  Myfirst = this->_Mypair._Myval2._Myfirst;
  v7 = this->_Mypair._Myval2._Mylast - this->_Mypair._Myval2._Myfirst;
  if ( this->_Mypair._Myval2._Myfirst )
  {
    if ( (char *)(this->_Mypair._Myval2._Myend - Myfirst) >= (char *)0x1000 )
    {
      if ( ((unsigned __int8)Myfirst & 0x1F) != 0 )
        invalid_parameter_noinfo_noreturn();
      v8 = (char *)*((_QWORD *)Myfirst - 1);
      if ( v8 >= Myfirst )
        invalid_parameter_noinfo_noreturn();
      v9 = Myfirst - v8;
      if ( v9 < 8 )
        invalid_parameter_noinfo_noreturn();
      if ( v9 > 0x27 )
        invalid_parameter_noinfo_noreturn();
      Myfirst = v8;
    }
    operator delete(Myfirst);
  }
  this->_Mypair._Myval2._Myend = (char *)v4 + _Count;
  this->_Mypair._Myval2._Mylast = (char *)v4 + v7;
  this->_Mypair._Myval2._Myfirst = (char *)v4;
}

void __fastcall std::vector<extension::future_asset_detail::FutureAssetJob::FileSpec>::_Reallocate(
        std::vector<extension::future_asset_detail::FutureAssetJob::FileSpec> *this,
        unsigned __int64 _Count,
        __int64 a3,
        std::_Wrap_alloc<std::allocator<extension::future_asset_detail::FutureAssetJob::FileSpec> > *a4)
{
  extension::future_asset_detail::FutureAssetJob::FileSpec *v6; // rbx
  unsigned __int64 v7; // rcx
  void *v8; // rax
  extension::future_asset_detail::FutureAssetJob::FileSpec *Mylast; // r9
  signed __int64 v10; // r14

  if ( _Count )
  {
    if ( _Count > 0x555555555555555i64 )
      std::_Xbad_alloc();
    v7 = 48 * _Count;
    if ( 48 * _Count < 0x1000 )
    {
      v6 = (extension::future_asset_detail::FutureAssetJob::FileSpec *)operator new(v7);
    }
    else
    {
      if ( v7 + 39 <= v7 )
        std::_Xbad_alloc();
      v8 = operator new(v7 + 39);
      v6 = (extension::future_asset_detail::FutureAssetJob::FileSpec *)(((unsigned __int64)v8 + 39) & 0xFFFFFFFFFFFFFFE0ui64);
      *(_QWORD *)&v6[-1].iFileTypeIndex = v8;
    }
  }
  else
  {
    v6 = 0i64;
  }
  std::_Uninitialized_move_al_unchecked1<extension::future_asset_detail::FutureAssetJob::FileSpec *,extension::future_asset_detail::FutureAssetJob::FileSpec *,std::allocator<extension::future_asset_detail::FutureAssetJob::FileSpec>>(
    this->_Mypair._Myval2._Myfirst,
    this->_Mypair._Myval2._Mylast,
    v6,
    a4);
  Mylast = this->_Mypair._Myval2._Mylast;
  v10 = Mylast - this->_Mypair._Myval2._Myfirst;
  if ( this->_Mypair._Myval2._Myfirst )
  {
    std::_Destroy_range1<std::allocator<extension::future_asset_detail::FutureAssetJob::FileSpec>,extension::future_asset_detail::FutureAssetJob::FileSpec *>(
      this->_Mypair._Myval2._Myfirst,
      this->_Mypair._Myval2._Mylast,
      (std::_Wrap_alloc<std::allocator<extension::future_asset_detail::FutureAssetJob::FileSpec> > *)((unsigned __int64)((unsigned __int128)(((char *)this->_Mypair._Myval2._Mylast - (char *)this->_Mypair._Myval2._Myfirst) * (__int128)0x2AAAAAAAAAAAAAABi64) >> 64) >> 63),
      (std::integral_constant<bool,0>)Mylast);
    std::_Wrap_alloc<std::allocator<Fw::TUdpP2pInfo>>::deallocate(
      (std::allocator<AgControllerPairingChangedEvent> *)((char *)this->_Mypair._Myval2._Myend
                                                        - (char *)this->_Mypair._Myval2._Myfirst),
      (AgControllerPairingChangedEvent *)this->_Mypair._Myval2._Myfirst,
      this->_Mypair._Myval2._Myend - this->_Mypair._Myval2._Myfirst);
  }
  this->_Mypair._Myval2._Myend = &v6[_Count];
  this->_Mypair._Myval2._Mylast = &v6[v10];
  this->_Mypair._Myval2._Myfirst = v6;
}

void __fastcall std::vector<extension::BasicFutureObject<extension::AsyncFileImage,void>>::_Reallocate(
        std::vector<extension::BasicFutureObject<extension::AsyncFileImage,void>> *this,
        unsigned __int64 _Count)
{
  extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> *v4; // r12
  std::_Wrap_alloc<std::allocator<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> > > *v5; // r9
  extension::BasicFutureObject<extension::AsyncFileImage,void>::Body *m_ptr; // rcx
  extension::BasicFutureObject<extension::AsyncFileImage,void> *Mylast; // r15
  extension::BasicFutureObject<extension::AsyncFileImage,void> *Myfirst; // rbx
  signed __int64 v9; // rsi

  v4 = (extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> *)std::allocator<AgDelegate1<AgControllerAddedEvent const &,void>>::allocate(
                                                                                                   (std::_Wrap_alloc<std::allocator<extension::BasicFutureObject<extension::AsyncFileImage,void> > > *)this,
                                                                                                   _Count);
  std::_Uninitialized_move_al_unchecked1<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> *,extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> *,std::allocator<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>>>(
    (extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> *)this->_Mypair._Myval2._Myfirst,
    (extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> *)this->_Mypair._Myval2._Mylast,
    v4,
    v5);
  Mylast = this->_Mypair._Myval2._Mylast;
  Myfirst = this->_Mypair._Myval2._Myfirst;
  v9 = (char *)Mylast - (char *)this->_Mypair._Myval2._Myfirst;
  if ( this->_Mypair._Myval2._Myfirst )
  {
    for ( ; Myfirst != Mylast; ++Myfirst )
    {
      m_ptr = Myfirst->m_body.m_ptr;
      if ( m_ptr
        && _InterlockedExchangeAdd64(
             (volatile signed __int64 *)&m_ptr->m_refCount.m_ptr->m_sharedCount,
             0xFFFFFFFFFFFFFFFFui64) == 1 )
      {
        ((void (__fastcall *)(extension::BasicFutureObject<extension::AsyncFileImage,void>::Body *, __int64))m_ptr->~RefCountableWeakSupportBase)(
          m_ptr,
          1i64);
      }
    }
    std::_Wrap_alloc<std::allocator<AgDelegate1<AgSuspendingEvent const &,void>>>::deallocate(
      (std::_Wrap_alloc<std::allocator<AgDelegate1<AgUserUpdatedEvent const &,void> > > *)m_ptr,
      (AgDelegate1<AgUserUpdatedEvent const &,void> *)this->_Mypair._Myval2._Myfirst,
      this->_Mypair._Myval2._Myend - this->_Mypair._Myval2._Myfirst);
  }
  this->_Mypair._Myval2._Myend = (extension::BasicFutureObject<extension::AsyncFileImage,void> *)&v4[_Count];
  this->_Mypair._Myval2._Mylast = (extension::BasicFutureObject<extension::AsyncFileImage,void> *)(&v4->gap0
                                                                                                 + (v9 & 0xFFFFFFFFFFFFFFF0ui64));
  this->_Mypair._Myval2._Myfirst = (extension::BasicFutureObject<extension::AsyncFileImage,void> *)v4;
}

void __fastcall std::vector<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>>::_Reallocate(
        std::vector<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>> *this,
        unsigned __int64 _Count,
        __int64 a3,
        std::_Wrap_alloc<std::allocator<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> > > *a4)
{
  extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> *v6; // rdi
  unsigned __int64 v7; // rcx
  extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body *v8; // rax
  extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body *m_ptr; // rcx
  extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> *Mylast; // r12
  extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> *Myfirst; // rbx
  signed __int64 v12; // r14

  if ( _Count )
  {
    if ( _Count > 0xFFFFFFFFFFFFFFFi64 )
      std::_Xbad_alloc();
    v7 = 16 * _Count;
    if ( 16 * _Count < 0x1000 )
    {
      v6 = (extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> *)operator new(v7);
    }
    else
    {
      if ( v7 + 39 <= v7 )
        std::_Xbad_alloc();
      v8 = (extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body *)operator new(v7 + 39);
      v6 = (extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> *)(((unsigned __int64)&v8[1].m_refCount.m_ptr + 7) & 0xFFFFFFFFFFFFFFE0ui64);
      v6[-1].m_body.m_ptr = v8;
    }
  }
  else
  {
    v6 = 0i64;
  }
  std::_Uninitialized_move_al_unchecked1<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> *,extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> *,std::allocator<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>>>(
    this->_Mypair._Myval2._Myfirst,
    this->_Mypair._Myval2._Mylast,
    v6,
    a4);
  Mylast = this->_Mypair._Myval2._Mylast;
  Myfirst = this->_Mypair._Myval2._Myfirst;
  v12 = (char *)Mylast - (char *)this->_Mypair._Myval2._Myfirst;
  if ( this->_Mypair._Myval2._Myfirst )
  {
    for ( ; Myfirst != Mylast; ++Myfirst )
    {
      m_ptr = Myfirst->m_body.m_ptr;
      if ( m_ptr
        && _InterlockedExchangeAdd64(
             (volatile signed __int64 *)&m_ptr->m_refCount.m_ptr->m_sharedCount,
             0xFFFFFFFFFFFFFFFFui64) == 1 )
      {
        ((void (__fastcall *)(extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body *, __int64))m_ptr->~RefCountableWeakSupportBase)(
          m_ptr,
          1i64);
      }
    }
    std::_Wrap_alloc<std::allocator<AgDelegate1<AgSuspendingEvent const &,void>>>::deallocate(
      (std::_Wrap_alloc<std::allocator<AgDelegate1<AgUserUpdatedEvent const &,void> > > *)m_ptr,
      (AgDelegate1<AgUserUpdatedEvent const &,void> *)this->_Mypair._Myval2._Myfirst,
      this->_Mypair._Myval2._Myend - this->_Mypair._Myval2._Myfirst);
  }
  this->_Mypair._Myval2._Myend = &v6[_Count];
  this->_Mypair._Myval2._Mylast = (extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> *)((char *)v6 + (v12 & 0xFFFFFFFFFFFFFFF0ui64));
  this->_Mypair._Myval2._Myfirst = v6;
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

void __fastcall std::vector<std::unique_ptr<OGLModel>>::_Reallocate(
        std::vector<std::unique_ptr<OGLModel>> *this,
        unsigned __int64 _Count,
        __int64 a3,
        std::_Wrap_alloc<std::allocator<std::unique_ptr<OGLModel> > > *a4)
{
  std::unique_ptr<OGLModel> *v6; // rdi
  unsigned __int64 v7; // rcx
  OGLModel *v8; // rax
  std::allocator<AgLogger *> *Myval2; // rcx
  std::unique_ptr<OGLModel> *Mylast; // r15
  std::unique_ptr<OGLModel> *Myfirst; // rbx
  __int64 v12; // r12

  if ( _Count )
  {
    if ( _Count > 0x1FFFFFFFFFFFFFFFi64 )
      std::_Xbad_alloc();
    v7 = 8 * _Count;
    if ( 8 * _Count < 0x1000 )
    {
      v6 = (std::unique_ptr<OGLModel> *)operator new(v7);
    }
    else
    {
      if ( v7 + 39 <= v7 )
        std::_Xbad_alloc();
      v8 = (OGLModel *)operator new(v7 + 39);
      v6 = (std::unique_ptr<OGLModel> *)((unsigned __int64)&v8->cIdentifyStr[31] & 0xFFFFFFFFFFFFFFE0ui64);
      v6[-1]._Mypair._Myval2 = v8;
    }
  }
  else
  {
    v6 = 0i64;
  }
  std::_Uninitialized_move_al_unchecked1<std::unique_ptr<OGLModel> *,std::unique_ptr<OGLModel> *,std::allocator<std::unique_ptr<OGLModel>>>(
    this->_Mypair._Myval2._Myfirst,
    this->_Mypair._Myval2._Mylast,
    v6,
    a4);
  Mylast = this->_Mypair._Myval2._Mylast;
  Myfirst = this->_Mypair._Myval2._Myfirst;
  v12 = Mylast - this->_Mypair._Myval2._Myfirst;
  if ( this->_Mypair._Myval2._Myfirst )
  {
    for ( ; Myfirst != Mylast; ++Myfirst )
    {
      Myval2 = (std::allocator<AgLogger *> *)Myfirst->_Mypair._Myval2;
      if ( Myfirst->_Mypair._Myval2 )
        (**(void (__fastcall ***)(std::allocator<AgLogger *> *, __int64))Myval2)(Myval2, 1i64);
    }
    std::_Wrap_alloc<std::allocator<OGLShader *>>::deallocate(
      Myval2,
      (AgLogger **)this->_Mypair._Myval2._Myfirst,
      this->_Mypair._Myval2._Myend - this->_Mypair._Myval2._Myfirst);
  }
  this->_Mypair._Myval2._Myend = &v6[_Count];
  this->_Mypair._Myval2._Mylast = &v6[v12];
  this->_Mypair._Myval2._Myfirst = v6;
}

void __fastcall std::vector<extension::future_asset_detail::FutureAssetJob::FileSpec>::_Reserve(
        std::vector<extension::future_asset_detail::FutureAssetJob::FileSpec> *this,
        unsigned __int64 _Count)
{
  extension::future_asset_detail::FutureAssetJob::FileSpec *Myend; // rcx
  extension::future_asset_detail::FutureAssetJob::FileSpec *Mylast; // r9
  signed __int64 v6; // rdx
  unsigned __int64 v7; // r8
  __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  std::_Wrap_alloc<std::allocator<extension::future_asset_detail::FutureAssetJob::FileSpec> > *v11; // r9

  Myend = this->_Mypair._Myval2._Myend;
  Mylast = this->_Mypair._Myval2._Mylast;
  if ( Myend - Mylast < _Count )
  {
    v6 = Mylast - this->_Mypair._Myval2._Myfirst;
    if ( 0x555555555555555i64 - v6 < _Count )
      std::_Xlength_error("vector<T> too long");
    v7 = v6 + _Count;
    v8 = (unsigned __int128)(((char *)Myend - (char *)this->_Mypair._Myval2._Myfirst) * (__int128)0x2AAAAAAAAAAAAAABi64) >> 64;
    v9 = 0i64;
    v10 = ((unsigned __int64)v8 >> 63) + (v8 >> 3);
    v11 = (std::_Wrap_alloc<std::allocator<extension::future_asset_detail::FutureAssetJob::FileSpec> > *)(0x555555555555555i64 - (v10 >> 1));
    if ( (unsigned __int64)v11 >= v10 )
      v9 = v10 + (v10 >> 1);
    if ( v9 >= v7 )
      v7 = v9;
    std::vector<extension::future_asset_detail::FutureAssetJob::FileSpec>::_Reallocate(this, v7, v7, v11);
  }
}

void __fastcall std::_Tree<std::_Tmap_traits<enum AgControllerComponentType,std::list<AgControllerComponent *>,std::less<enum AgControllerComponentType>,std::allocator<std::pair<enum AgControllerComponentType const,std::list<AgControllerComponent *>>>,0>>::_Rrotate(
        std::_Tree<std::_Tmap_traits<AgStringRef,AgJsonNode,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const ,AgJsonNode> >,0> > *this,
        std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *_Wherenode)
{
  std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *Left; // r8
  std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *Right; // rax
  std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *Parent; // rax

  Left = _Wherenode->_Left;
  _Wherenode->_Left = _Wherenode->_Left->_Right;
  Right = Left->_Right;
  if ( !Right->_Isnil )
    Right->_Parent = _Wherenode;
  Left->_Parent = _Wherenode->_Parent;
  if ( _Wherenode == this->_Mypair._Myval2._Myval2._Myhead->_Parent )
  {
    this->_Mypair._Myval2._Myval2._Myhead->_Parent = Left;
    Left->_Right = _Wherenode;
    _Wherenode->_Parent = Left;
  }
  else
  {
    Parent = _Wherenode->_Parent;
    if ( _Wherenode == Parent->_Right )
      Parent->_Right = Left;
    else
      Parent->_Left = Left;
    Left->_Right = _Wherenode;
    _Wherenode->_Parent = Left;
  }
}

void __fastcall std::_LaunchPad<std::unique_ptr<std::tuple<_lambda_224f2aff27d484af60707df2a7dcfac8_>>>::_Run(
        std::_LaunchPad<std::unique_ptr<std::tuple<<lambda_224f2aff27d484af60707df2a7dcfac8> >> > *_Ln)
{
  std::tuple<<lambda_224f2aff27d484af60707df2a7dcfac8> > *Myval2; // rbx
  int v3; // eax
  int v4; // eax
  int v5; // eax
  std::_Wrap_alloc<std::allocator<EffectListNodeData> > *v6; // r8
  std::integral_constant<bool,0> v7; // r9
  std::string v8; // [rsp+28h] [rbp-30h] BYREF

  Myval2 = _Ln->_MyTarget._Mypair._Myval2;
  _Ln->_MyTarget._Mypair._Myval2 = 0i64;
  v3 = Mtx_lock(_Ln->_Mtx);
  if ( v3 )
    std::_Throw_C_error(v3);
  _Ln->_Started = 1;
  v4 = Cnd_signal(_Ln->_Cond);
  if ( v4 )
    std::_Throw_C_error(v4);
  v5 = Mtx_unlock(_Ln->_Mtx);
  if ( v5 )
    std::_Throw_C_error(v5);
  if ( Myval2->_Myfirst._Val.effPath._Mypair._Myval2._Mysize )
  {
    v8._Mypair._Myval2._Myres = 15i64;
    v8._Mypair._Myval2._Mysize = 0i64;
    v8._Mypair._Myval2._Bx._Buf[0] = 0;
    std::string::assign(&v8, &Myval2->_Myfirst._Val.effPath, 0i64, 0xFFFFFFFFFFFFFFFFui64);
    EffectDataListManager::loadEffectData(Myval2->_Myfirst._Val.effect, &v8, v6, v7);
  }
  std::string::~string(&Myval2->_Myfirst._Val.effPath);
  operator delete(Myval2, 0x28ui64);
}

void __fastcall std::numpunct<char>::_Tidy(std::numpunct<char> *this)
{
  free((void *)this->_Grouping);
  free((void *)this->_Falsename);
  free((void *)this->_Truename);
}

void __fastcall std::vector<AgDisplayChangedEvent>::_Tidy(std::vector<AgSuspendingEvent> *this)
{
  AgSuspendingEvent *Myfirst; // rcx
  AgSuspendingEvent *v3; // rax
  unsigned __int64 v4; // rcx

  Myfirst = this->_Mypair._Myval2._Myfirst;
  if ( Myfirst )
  {
    if ( (AgSuspendingEvent *)(this->_Mypair._Myval2._Myend - Myfirst) >= (AgSuspendingEvent *)0x1000 )
    {
      if ( ((unsigned __int8)Myfirst & 0x1F) != 0 )
        invalid_parameter_noinfo_noreturn();
      v3 = *(AgSuspendingEvent **)&Myfirst[-8];
      if ( v3 >= Myfirst )
        invalid_parameter_noinfo_noreturn();
      v4 = Myfirst - v3;
      if ( v4 < 8 )
        invalid_parameter_noinfo_noreturn();
      if ( v4 > 0x27 )
        invalid_parameter_noinfo_noreturn();
      Myfirst = v3;
    }
    operator delete(Myfirst);
    this->_Mypair._Myval2._Myfirst = 0i64;
    this->_Mypair._Myval2._Mylast = 0i64;
    this->_Mypair._Myval2._Myend = 0i64;
  }
}

void __fastcall std::vector<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>>::_Tidy(
        std::vector<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>> *this)
{
  extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> *Myfirst; // rbx
  std::vector<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>> *v2; // rdi
  extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> *i; // rsi

  Myfirst = this->_Mypair._Myval2._Myfirst;
  v2 = this;
  if ( this->_Mypair._Myval2._Myfirst )
  {
    for ( i = this->_Mypair._Myval2._Mylast; Myfirst != i; ++Myfirst )
    {
      this = (std::vector<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>> *)Myfirst->m_body.m_ptr;
      if ( this )
      {
        if ( _InterlockedExchangeAdd64(
               (volatile signed __int64 *)&this->_Mypair._Myval2._Mylast[1],
               0xFFFFFFFFFFFFFFFFui64) == 1 )
          (*(void (__fastcall **)(std::vector<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>> *, __int64))this->_Mypair._Myval2._Myfirst)(
            this,
            1i64);
      }
    }
    std::_Wrap_alloc<std::allocator<AgDelegate1<AgSuspendingEvent const &,void>>>::deallocate(
      (std::_Wrap_alloc<std::allocator<AgDelegate1<AgUserUpdatedEvent const &,void> > > *)this,
      (AgDelegate1<AgUserUpdatedEvent const &,void> *)v2->_Mypair._Myval2._Myfirst,
      v2->_Mypair._Myval2._Myend - v2->_Mypair._Myval2._Myfirst);
    v2->_Mypair._Myval2._Myfirst = 0i64;
    v2->_Mypair._Myval2._Mylast = 0i64;
    v2->_Mypair._Myval2._Myend = 0i64;
  }
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

unsigned __int8 *__fastcall std::_Wrap_alloc<std::allocator<unsigned char>>::allocate(
        std::_Wrap_alloc<std::allocator<unsigned char> > *this,
        unsigned __int64 _Count)
{
  void *v3; // rax

  if ( !_Count )
    return 0i64;
  if ( _Count < 0x1000 )
    return (unsigned __int8 *)operator new(_Count);
  if ( _Count + 39 <= _Count )
    std::_Xbad_alloc();
  v3 = operator new(_Count + 39);
  *(_QWORD *)((((unsigned __int64)v3 + 39) & 0xFFFFFFFFFFFFFFE0ui64) - 8) = v3;
  return (unsigned __int8 *)(((unsigned __int64)v3 + 39) & 0xFFFFFFFFFFFFFFE0ui64);
}

extension::BasicFutureObject<extension::AsyncFileImage,void> *__fastcall std::allocator<AgDelegate1<AgControllerAddedEvent const &,void>>::allocate(
        std::_Wrap_alloc<std::allocator<extension::BasicFutureObject<extension::AsyncFileImage,void> > > *this,
        unsigned __int64 _Count)
{
  unsigned __int64 v3; // rdx
  void *v4; // rax

  if ( !_Count )
    return 0i64;
  if ( _Count > 0xFFFFFFFFFFFFFFFi64 )
    std::_Xbad_alloc();
  v3 = 16 * _Count;
  if ( v3 < 0x1000 )
    return (extension::BasicFutureObject<extension::AsyncFileImage,void> *)operator new(v3);
  if ( v3 + 39 <= v3 )
    std::_Xbad_alloc();
  v4 = operator new(v3 + 39);
  *(_QWORD *)((((unsigned __int64)v4 + 39) & 0xFFFFFFFFFFFFFFE0ui64) - 8) = v4;
  return (extension::BasicFutureObject<extension::AsyncFileImage,void> *)(((unsigned __int64)v4 + 39) & 0xFFFFFFFFFFFFFFE0ui64);
}

void __fastcall extension::future_asset_detail::AsyncAssetModelBuilder::applyShaderFx(
        extension::future_asset_detail::AsyncAssetModelBuilder *this,
        extension::AsyncStatus::Step a2)
{
  extension::future_asset_detail::AsyncAssetModelBuilder *v2; // r15
  char v3; // r14
  extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> *Myfirst; // rbx
  extension::BasicFutureObject<extension::AsyncFileImage,void> *Mylast; // rdi
  extension::AsyncContent<CMediaSound> *m_ptr; // rsi
  int m_errorCode; // eax
  char *Ptr; // rcx
  char *v9; // rax
  extension::AsyncContent<CMediaSound> *v10; // rcx
  std::string *p_first; // rdx
  __int64 v12; // rcx
  __int64 Myval2; // rax
  unsigned __int64 v14; // r8
  std::tuple<> *v15; // r9
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *Myhead; // r13
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *Parent; // rdi
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *v18; // rbx
  unsigned __int64 Myres; // r15
  unsigned __int64 Mysize; // r14
  char *v21; // r12
  char **p_Myval; // rcx
  unsigned __int64 v23; // rsi
  size_t v24; // r8
  int v25; // eax
  std::string *v26; // rcx
  size_t v27; // rdi
  size_t v28; // r8
  int v29; // eax
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *_Newnode; // rax
  char *v31; // rcx
  char *v32; // rax
  extension::BasicFutureObject<extension::AsyncFileImage,void> *v33; // rbx
  extension::BasicFutureObject<extension::AsyncFileImage,void> *j; // rdi
  extension::AsyncContent<extension::AsyncFileImage> *v35; // rsi
  int *p_m_length; // rax
  int v37; // er14
  extension::AsyncContent<extension::AsyncFileImage> *v38; // rsi
  extension::AsyncFileImage *v39; // rcx
  ShaderFxHelper::ShaderFxParseOption opt; // [rsp+38h] [rbp-69h] BYREF
  std::_Tree_comp_alloc<std::_Tmap_traits<std::string,OGLModel *,std::less<std::string >,std::allocator<std::pair<std::string const ,OGLModel *> >,0> > v41; // [rsp+40h] [rbp-61h] BYREF
  __int64 i; // [rsp+50h] [rbp-51h]
  extension::future_asset_detail::AsyncAssetModelBuilder *v43; // [rsp+58h] [rbp-49h]
  std::tuple<std::string &&> v44; // [rsp+60h] [rbp-41h] BYREF
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const ,OGLModel *> > > > v45; // [rsp+68h] [rbp-39h] BYREF
  OGLModel *v46; // [rsp+70h] [rbp-31h]
  __int64 v47; // [rsp+78h] [rbp-29h]
  __int64 v48; // [rsp+80h] [rbp-21h]
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const ,OGLModel *> > > > v49; // [rsp+88h] [rbp-19h] BYREF
  std::string v50; // [rsp+90h] [rbp-11h] BYREF
  std::string result; // [rsp+B0h] [rbp+Fh] BYREF

  v48 = -2i64;
  v2 = this;
  v43 = this;
  v3 = 0;
  Myfirst = (extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> *)this->m_shaderFXFiles._Mypair._Myval2._Myfirst;
  Mylast = this->m_shaderFXFiles._Mypair._Myval2._Mylast;
  if ( Myfirst != (extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> *)Mylast )
  {
    do
    {
      m_ptr = Myfirst->m_body.m_ptr->m_content.m_ptr;
      if ( !m_ptr || m_ptr->m_isDataReleased )
      {
        m_errorCode = 0;
      }
      else
      {
        if ( (m_ptr->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
          extension::AsyncStatus::waitFor(&m_ptr->m_status, a2);
        m_errorCode = m_ptr->m_errorCode;
      }
      if ( m_errorCode )
      {
        extension::BasicFutureObject<OGLSecondary,void>::contentPath(Myfirst, &result);
        _DummyLogging("asset shader fx csv file [%s] load faild.");
        if ( result._Mypair._Myval2._Myres >= 0x10 )
        {
          Ptr = result._Mypair._Myval2._Bx._Ptr;
          if ( result._Mypair._Myval2._Myres + 1 >= 0x1000 )
          {
            if ( (result._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
              invalid_parameter_noinfo_noreturn();
            v9 = (char *)*((_QWORD *)result._Mypair._Myval2._Bx._Ptr - 1);
            if ( v9 >= result._Mypair._Myval2._Bx._Ptr )
              invalid_parameter_noinfo_noreturn();
            if ( (char *)(result._Mypair._Myval2._Bx._Ptr - v9) < (char *)8 )
              invalid_parameter_noinfo_noreturn();
            if ( (char *)(result._Mypair._Myval2._Bx._Ptr - v9) > (char *)0x27 )
              invalid_parameter_noinfo_noreturn();
            Ptr = (char *)*((_QWORD *)result._Mypair._Myval2._Bx._Ptr - 1);
          }
          operator delete(Ptr);
        }
        extension::BasicFutureObject<extension::AsyncFileImage,void>::reset((extension::BasicFutureObject<extension::AsyncFileImage,void> *)Myfirst);
      }
      else
      {
        v10 = Myfirst->m_body.m_ptr->m_content.m_ptr;
        if ( v10 && !v10->m_isDataReleased )
          v3 = 1;
      }
      ++Myfirst;
    }
    while ( Myfirst != (extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> *)Mylast );
    if ( v3 )
    {
      v41._Mypair._Myval2._Myval2._Mysize = 0i64;
      v41._Mypair._Myval2._Myval2._Myhead = (std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *)std::_Tree_comp_alloc<std::_Tmap_traits<std::string,CSteamID,std::less<void>,std::allocator<std::pair<std::string const,CSteamID>>,0>>::_Buyheadnode((std::_Tree_comp_alloc<std::_Tmap_traits<std::string,extension::GFXIFontManager::LanguageConfig,std::less<std::string >,std::allocator<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig> >,0> > *)v10);
      v47 = (int)(v2->m_models._Mypair._Myval2._Mylast - v2->m_models._Mypair._Myval2._Myfirst);
      v12 = 0i64;
      for ( i = 0i64; v12 < v47; i = v12 )
      {
        Myval2 = (__int64)v2->m_models._Mypair._Myval2._Myfirst[v12]._Mypair._Myval2;
        v46 = (OGLModel *)Myval2;
        if ( Myval2 )
        {
          p_first = *(std::string **)(Myval2 + 8824);
          if ( p_first )
          {
            v50._Mypair._Myval2._Myres = 15i64;
            v50._Mypair._Myval2._Mysize = 0i64;
            v50._Mypair._Myval2._Bx._Buf[0] = 0;
            if ( p_first->_Mypair._Myval2._Bx._Buf[0] )
            {
              v14 = -1i64;
              do
                ++v14;
              while ( p_first->_Mypair._Myval2._Bx._Buf[v14] );
            }
            else
            {
              v14 = 0i64;
            }
            std::string::assign(&v50, p_first->_Mypair._Myval2._Bx._Buf, v14);
            Myhead = v41._Mypair._Myval2._Myval2._Myhead;
            Parent = v41._Mypair._Myval2._Myval2._Myhead->_Parent;
            v18 = v41._Mypair._Myval2._Myval2._Myhead;
            if ( Parent->_Isnil )
              goto LABEL_65;
            Myres = v50._Mypair._Myval2._Myres;
            Mysize = v50._Mypair._Myval2._Mysize;
            v21 = v50._Mypair._Myval2._Bx._Ptr;
            do
            {
              p_Myval = (char **)&Parent->_Myval;
              p_first = &v50;
              if ( Myres >= 0x10 )
                p_first = (std::string *)v21;
              if ( Parent->_Myval.first._Mypair._Myval2._Myres >= 0x10 )
                p_Myval = (char **)*p_Myval;
              v23 = Parent->_Myval.first._Mypair._Myval2._Mysize;
              v24 = Mysize;
              if ( v23 < Mysize )
                v24 = Parent->_Myval.first._Mypair._Myval2._Mysize;
              if ( !v24 || (v25 = memcmp(p_Myval, p_first, v24)) == 0 )
              {
                if ( v23 >= Mysize )
                  v25 = v23 > Mysize;
                else
                  v25 = -1;
              }
              if ( v25 >= 0 )
              {
                v18 = Parent;
                Parent = Parent->_Left;
              }
              else
              {
                Parent = Parent->_Right;
              }
            }
            while ( !Parent->_Isnil );
            if ( v18 == Myhead )
              goto LABEL_65;
            p_first = (std::string *)&v18->_Myval.first;
            if ( v18->_Myval.first._Mypair._Myval2._Myres >= 0x10 )
              p_first = (std::string *)p_first->_Mypair._Myval2._Bx._Ptr;
            v26 = &v50;
            if ( Myres >= 0x10 )
              v26 = (std::string *)v21;
            v27 = v18->_Myval.first._Mypair._Myval2._Mysize;
            v28 = v27;
            if ( Mysize < v27 )
              v28 = Mysize;
            if ( !v28 || (v29 = memcmp(v26, p_first, v28)) == 0 )
            {
              if ( Mysize >= v27 )
                v29 = Mysize > v27;
              else
                v29 = -1;
            }
            if ( v29 < 0 )
            {
LABEL_65:
              v44._Myfirst._Val = &v50;
              _Newnode = (std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *)std::_Tree_comp_alloc<std::_Tmap_traits<std::string,OGLModel *,std::less<std::string>,std::allocator<std::pair<std::string const,OGLModel *>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<std::string &&>,std::tuple<>>(
                                                                                               &v41,
                                                                                               (const std::piecewise_construct_t *)p_first,
                                                                                               &v44,
                                                                                               v15);
              std::_Tree<std::_Tmap_traits<std::string,unsigned int,std::less<std::string>,std::allocator<std::pair<std::string const,unsigned int>>,0>>::_Insert_hint<std::pair<std::string const,unsigned int> &,std::_Tree_node<std::pair<std::string const,unsigned int>,void *> *>(
                (std::_Tree<std::_Tmap_traits<std::string,OGLModel *,std::less<std::string >,std::allocator<std::pair<std::string const ,OGLModel *> >,0> > *)&v41,
                &v45,
                (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const ,OGLModel *> > > >)v18,
                &_Newnode->_Myval,
                _Newnode);
              v18 = v45._Ptr;
            }
            v18->_Myval.second = v46;
            if ( v50._Mypair._Myval2._Myres >= 0x10 )
            {
              v31 = v50._Mypair._Myval2._Bx._Ptr;
              if ( v50._Mypair._Myval2._Myres + 1 >= 0x1000 )
              {
                if ( (v50._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
                  invalid_parameter_noinfo_noreturn();
                v32 = (char *)*((_QWORD *)v50._Mypair._Myval2._Bx._Ptr - 1);
                if ( v32 >= v50._Mypair._Myval2._Bx._Ptr )
                  invalid_parameter_noinfo_noreturn();
                if ( (char *)(v50._Mypair._Myval2._Bx._Ptr - v32) < (char *)8 )
                  invalid_parameter_noinfo_noreturn();
                if ( (char *)(v50._Mypair._Myval2._Bx._Ptr - v32) > (char *)0x27 )
                  invalid_parameter_noinfo_noreturn();
                v31 = (char *)*((_QWORD *)v50._Mypair._Myval2._Bx._Ptr - 1);
              }
              operator delete(v31);
            }
            v2 = v43;
            v12 = i;
          }
        }
        ++v12;
      }
      opt.disableMaterialLight = v2->m_optDisableShaderFXMaterialLight;
      v33 = v2->m_shaderFXFiles._Mypair._Myval2._Myfirst;
      for ( j = v2->m_shaderFXFiles._Mypair._Myval2._Mylast; v33 != j; ++v33 )
      {
        v35 = v33->m_body.m_ptr->m_content.m_ptr;
        if ( !v35 || v35->m_isDataReleased )
        {
          p_m_length = 0i64;
        }
        else
        {
          if ( (v35->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
            extension::AsyncStatus::waitFor(&v35->m_status, (extension::AsyncStatus::Step)p_first);
          p_m_length = &v35->m_data._Mypair._Myval2->m_length;
        }
        v37 = *p_m_length;
        v38 = v33->m_body.m_ptr->m_content.m_ptr;
        if ( !v38 || v38->m_isDataReleased )
        {
          v39 = 0i64;
        }
        else
        {
          if ( (v38->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
            extension::AsyncStatus::waitFor(&v38->m_status, (extension::AsyncStatus::Step)p_first);
          v39 = v38->m_data._Mypair._Myval2;
        }
        ShaderFxHelper::ShaderFxParseCSV(
          (const char *)v39->fileBufPara.pData,
          v37,
          (const std::map<std::string,OGLModel *> *)&v41,
          &opt);
      }
      std::_Tree<std::_Tmap_traits<std::string,unsigned int,std::less<std::string>,std::allocator<std::pair<std::string const,unsigned int>>,0>>::erase(
        (std::_Tree<std::_Tmap_traits<std::string,OGLModel *,std::less<std::string >,std::allocator<std::pair<std::string const ,OGLModel *> >,0> > *)&v41,
        &v49,
        (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const ,OGLModel *> > > >)v41._Mypair._Myval2._Myval2._Myhead->_Left,
        (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const ,OGLModel *> > > >)v41._Mypair._Myval2._Myval2._Myhead);
      operator delete(v41._Mypair._Myval2._Myval2._Myhead);
    }
  }
}

std::string *__fastcall std::string::assign(std::string *this, std::string *_Right)
{
  unsigned __int64 Myres; // rax
  char *Ptr; // rcx
  char *v6; // rax
  unsigned __int64 v7; // rcx
  std::string *v8; // rax

  if ( this != _Right )
  {
    Myres = this->_Mypair._Myval2._Myres;
    if ( Myres >= 0x10 )
    {
      Ptr = this->_Mypair._Myval2._Bx._Ptr;
      if ( Myres + 1 >= 0x1000 )
      {
        if ( ((unsigned __int8)Ptr & 0x1F) != 0 )
          invalid_parameter_noinfo_noreturn();
        v6 = (char *)*((_QWORD *)Ptr - 1);
        if ( v6 >= Ptr )
          invalid_parameter_noinfo_noreturn();
        v7 = Ptr - v6;
        if ( v7 < 8 )
          invalid_parameter_noinfo_noreturn();
        if ( v7 > 0x27 )
          invalid_parameter_noinfo_noreturn();
        Ptr = v6;
      }
      operator delete(Ptr);
    }
    this->_Mypair._Myval2._Myres = 15i64;
    this->_Mypair._Myval2._Mysize = 0i64;
    if ( this->_Mypair._Myval2._Myres < 0x10 )
      v8 = this;
    else
      v8 = (std::string *)this->_Mypair._Myval2._Bx._Ptr;
    v8->_Mypair._Myval2._Bx._Buf[0] = 0;
    std::string::_Assign_rv(this, _Right);
  }
  return this;
}

std::string *__fastcall std::string::assign(std::string *this, unsigned __int64 _Count, char _Ch)
{
  bool v6; // cf
  std::string *result; // rax
  std::string *Ptr; // rcx
  std::string *v9; // rax

  if ( _Count == -1i64 )
    std::_Xlength_error("string too long");
  if ( this->_Mypair._Myval2._Myres < _Count )
  {
    std::string::_Copy(this, _Count, this->_Mypair._Myval2._Mysize);
    if ( !_Count )
      return this;
LABEL_4:
    if ( _Count == 1 )
    {
      if ( this->_Mypair._Myval2._Myres < 0x10 )
        this->_Mypair._Myval2._Bx._Buf[0] = _Ch;
      else
        *this->_Mypair._Myval2._Bx._Ptr = _Ch;
    }
    else
    {
      if ( this->_Mypair._Myval2._Myres < 0x10 )
        Ptr = this;
      else
        Ptr = (std::string *)this->_Mypair._Myval2._Bx._Ptr;
      memset(Ptr, _Ch, _Count);
    }
    v6 = this->_Mypair._Myval2._Myres < 0x10;
    this->_Mypair._Myval2._Mysize = _Count;
    if ( v6 )
      v9 = this;
    else
      v9 = (std::string *)this->_Mypair._Myval2._Bx._Ptr;
    v9->_Mypair._Myval2._Bx._Buf[_Count] = 0;
    return this;
  }
  if ( _Count )
    goto LABEL_4;
  v6 = this->_Mypair._Myval2._Myres < 0x10;
  this->_Mypair._Myval2._Mysize = 0i64;
  if ( v6 )
  {
    result = this;
    this->_Mypair._Myval2._Bx._Buf[0] = 0;
  }
  else
  {
    *this->_Mypair._Myval2._Bx._Ptr = 0;
    return this;
  }
  return result;
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

void __fastcall std::vector<extension::BasicFutureObject<extension::GFXIMovieData,void>>::clear(
        std::vector<extension::BasicFutureObject<extension::GFXIMovieData,void>> *this)
{
  extension::BasicFutureObject<extension::GFXIMovieData,void> *Mylast; // rsi
  extension::BasicFutureObject<extension::GFXIMovieData,void> *Myfirst; // rbx
  extension::BasicFutureObject<extension::GFXIMovieData,void>::Body *m_ptr; // rcx

  Mylast = this->_Mypair._Myval2._Mylast;
  Myfirst = this->_Mypair._Myval2._Myfirst;
  if ( this->_Mypair._Myval2._Myfirst == Mylast )
  {
    this->_Mypair._Myval2._Mylast = Myfirst;
  }
  else
  {
    do
    {
      m_ptr = Myfirst->m_body.m_ptr;
      if ( m_ptr )
      {
        if ( _InterlockedExchangeAdd64(
               (volatile signed __int64 *)&m_ptr->m_refCount.m_ptr->m_sharedCount,
               0xFFFFFFFFFFFFFFFFui64) == 1 )
          ((void (__fastcall *)(extension::BasicFutureObject<extension::GFXIMovieData,void>::Body *, __int64))m_ptr->~RefCountableWeakSupportBase)(
            m_ptr,
            1i64);
      }
      ++Myfirst;
    }
    while ( Myfirst != Mylast );
    this->_Mypair._Myval2._Mylast = this->_Mypair._Myval2._Myfirst;
  }
}

std::string *__fastcall extension::BasicFutureObject<OGLSecondary,void>::contentPath(
        extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> *this,
        std::string *result)
{
  extension::BasicFutureObject<extension::AsyncFileImage,void>::Body::contentPath(this->m_body.m_ptr, result);
  return result;
}

std::string *__fastcall extension::BasicFutureObject<extension::AsyncFileImage,void>::Body::contentPath(
        extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body *this,
        std::string *result)
{
  extension::AsyncContent<CMediaSound> *m_ptr; // rdx
  std::string *p_Right; // rdx
  char v5; // di
  std::string *Ptr; // rax
  char v7; // di
  char *v8; // rcx
  char *v9; // rax
  char *v10; // rcx
  char *v11; // rax
  std::string v13; // [rsp+30h] [rbp-58h] BYREF
  std::string _Right; // [rsp+50h] [rbp-38h] BYREF

  m_ptr = this->m_content.m_ptr;
  if ( !m_ptr || m_ptr->m_isDataReleased )
  {
    _Right._Mypair._Myval2._Myres = 15i64;
    _Right._Mypair._Myval2._Mysize = 0i64;
    _Right._Mypair._Myval2._Bx._Buf[0] = 0;
    p_Right = &_Right;
    v5 = 1;
  }
  else
  {
    v13._Mypair._Myval2._Myres = 15i64;
    v13._Mypair._Myval2._Mysize = 0i64;
    v13._Mypair._Myval2._Bx._Buf[0] = 0;
    std::string::assign(&v13, &m_ptr->m_name, 0i64, 0xFFFFFFFFFFFFFFFFui64);
    p_Right = &v13;
    v5 = 2;
  }
  result->_Mypair._Myval2._Myres = 15i64;
  result->_Mypair._Myval2._Mysize = 0i64;
  if ( result->_Mypair._Myval2._Myres < 0x10 )
    Ptr = result;
  else
    Ptr = (std::string *)result->_Mypair._Myval2._Bx._Ptr;
  Ptr->_Mypair._Myval2._Bx._Buf[0] = 0;
  std::string::assign(result, p_Right, 0i64, 0xFFFFFFFFFFFFFFFFui64);
  v7 = v5 | 4;
  if ( (v7 & 2) != 0 )
  {
    v7 &= ~2u;
    if ( v13._Mypair._Myval2._Myres >= 0x10 )
    {
      v8 = v13._Mypair._Myval2._Bx._Ptr;
      if ( v13._Mypair._Myval2._Myres + 1 >= 0x1000 )
      {
        if ( (v13._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
          invalid_parameter_noinfo_noreturn();
        v9 = (char *)*((_QWORD *)v13._Mypair._Myval2._Bx._Ptr - 1);
        if ( v9 >= v13._Mypair._Myval2._Bx._Ptr )
          invalid_parameter_noinfo_noreturn();
        if ( (char *)(v13._Mypair._Myval2._Bx._Ptr - v9) < (char *)8 )
          invalid_parameter_noinfo_noreturn();
        if ( (char *)(v13._Mypair._Myval2._Bx._Ptr - v9) > (char *)0x27 )
          invalid_parameter_noinfo_noreturn();
        v8 = (char *)*((_QWORD *)v13._Mypair._Myval2._Bx._Ptr - 1);
      }
      operator delete(v8);
    }
    v13._Mypair._Myval2._Myres = 15i64;
    v13._Mypair._Myval2._Mysize = 0i64;
    v13._Mypair._Myval2._Bx._Buf[0] = 0;
  }
  if ( (v7 & 1) != 0 && _Right._Mypair._Myval2._Myres >= 0x10 )
  {
    v10 = _Right._Mypair._Myval2._Bx._Ptr;
    if ( _Right._Mypair._Myval2._Myres + 1 >= 0x1000 )
    {
      if ( (_Right._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
        invalid_parameter_noinfo_noreturn();
      v11 = (char *)*((_QWORD *)_Right._Mypair._Myval2._Bx._Ptr - 1);
      if ( v11 >= _Right._Mypair._Myval2._Bx._Ptr )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(_Right._Mypair._Myval2._Bx._Ptr - v11) < (char *)8 )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(_Right._Mypair._Myval2._Bx._Ptr - v11) > (char *)0x27 )
        invalid_parameter_noinfo_noreturn();
      v10 = (char *)*((_QWORD *)_Right._Mypair._Myval2._Bx._Ptr - 1);
    }
    operator delete(v10);
  }
  return result;
}

Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::QName> *__fastcall extension::FutureObjectJob<OGLCurve>::createOnErrorData(
        Scaleform::GFx::AS3::Instances::fl::XML *this,
        Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::QName> *result)
{
  result->pObject = 0i64;
  return result;
}

std::unique_ptr<extension::AsyncAsset> *__fastcall extension::future_asset_detail::AsyncAssetModelBuilder::createOnErrorData(
        extension::future_asset_detail::FutureAssetJob *this,
        std::unique_ptr<extension::AsyncAsset> *result)
{
  extension::AsyncAsset *v3; // rax
  extension::AsyncAsset *v5; // [rsp+48h] [rbp+10h]

  v5 = (extension::AsyncAsset *)operator new(0x100ui64);
  extension::AsyncAsset::AsyncAsset(v5);
  result->_Mypair._Myval2 = v3;
  return result;
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

void __fastcall std::_Wrap_alloc<std::allocator<AgDelegate1<AgSuspendingEvent const &,void>>>::deallocate(
        std::_Wrap_alloc<std::allocator<AgDelegate1<AgUserUpdatedEvent const &,void> > > *this,
        AgDelegate1<AgUserUpdatedEvent const &,void> *_Ptr,
        unsigned __int64 _Count)
{
  void (__fastcall *m_pFunction)(detail::GenericClass *); // rax
  char *v4; // rdx

  if ( _Count > 0xFFFFFFFFFFFFFFFi64 )
    invalid_parameter_noinfo_noreturn();
  if ( 16 * _Count >= 0x1000 )
  {
    if ( ((unsigned __int8)_Ptr & 0x1F) != 0 )
      invalid_parameter_noinfo_noreturn();
    m_pFunction = _Ptr[-1].m_Closure.m_pFunction;
    if ( (AgDelegate1<AgUserUpdatedEvent const &,void> *)m_pFunction >= _Ptr )
      invalid_parameter_noinfo_noreturn();
    v4 = (char *)((char *)_Ptr - (char *)m_pFunction);
    if ( (unsigned __int64)v4 < 8 )
      invalid_parameter_noinfo_noreturn();
    if ( (unsigned __int64)v4 > 0x27 )
      invalid_parameter_noinfo_noreturn();
    _Ptr = (AgDelegate1<AgUserUpdatedEvent const &,void> *)m_pFunction;
  }
  operator delete(_Ptr);
}

_BOOL8 __fastcall std::numpunct<char>::do_decimal_point(Scaleform::FILEFile *this)
{
  return this->Opened;
}

std::string *__fastcall std::numpunct<char>::do_falsename(std::numpunct<char> *this, std::string *result)
{
  unsigned __int64 v3; // r8
  const char *Falsename; // rdx

  v3 = 0i64;
  Falsename = this->_Falsename;
  result->_Mypair._Myval2._Myres = 15i64;
  result->_Mypair._Myval2._Mysize = 0i64;
  result->_Mypair._Myval2._Bx._Buf[0] = 0;
  if ( *Falsename )
  {
    v3 = -1i64;
    do
      ++v3;
    while ( Falsename[v3] );
  }
  std::string::assign(result, Falsename, v3);
  return result;
}

std::string *__fastcall std::numpunct<char>::do_grouping(std::numpunct<char> *this, std::string *result)
{
  unsigned __int64 v3; // r8
  const char *Grouping; // rdx

  v3 = 0i64;
  Grouping = this->_Grouping;
  result->_Mypair._Myval2._Myres = 15i64;
  result->_Mypair._Myval2._Mysize = 0i64;
  result->_Mypair._Myval2._Bx._Buf[0] = 0;
  if ( *Grouping )
  {
    v3 = -1i64;
    do
      ++v3;
    while ( Grouping[v3] );
  }
  std::string::assign(result, Grouping, v3);
  return result;
}

std::ostreambuf_iterator<char> *__fastcall std::num_put<char,std::ostreambuf_iterator<char>>::do_put(
        std::num_put<char,std::ostreambuf_iterator<char> > *this,
        std::ostreambuf_iterator<char> *result,
        std::ostreambuf_iterator<char> *_Dest,
        std::ios_base *_Iosbase,
        char _Fill,
        int _Val)
{
  std::ostreambuf_iterator<char> v6; // xmm0
  int Fmtfl; // eax
  char *v11; // rdx
  int v12; // ecx
  char v13; // al
  int v14; // eax
  std::ostreambuf_iterator<char> v16; // [rsp+40h] [rbp-88h] BYREF
  char _Format; // [rsp+50h] [rbp-78h] BYREF
  char v18; // [rsp+51h] [rbp-77h] BYREF
  char v19; // [rsp+52h] [rbp-76h] BYREF
  char _Buffer[64]; // [rsp+60h] [rbp-68h] BYREF

  v6 = *_Dest;
  Fmtfl = _Iosbase->_Fmtfl;
  _Format = 37;
  v16 = v6;
  v11 = &v18;
  if ( (Fmtfl & 0x20) != 0 )
  {
    v18 = 43;
    v11 = &v19;
  }
  if ( (Fmtfl & 8) != 0 )
    *v11++ = 35;
  *v11 = 108;
  v12 = Fmtfl & 0xE00;
  if ( v12 == 1024 )
  {
    v13 = 111;
  }
  else if ( v12 == 2048 )
  {
    v13 = ~(8 * Fmtfl) & 0x20 | 0x58;
  }
  else
  {
    v13 = 100;
  }
  v11[1] = v13;
  v11[2] = 0;
  v14 = sprintf_s(_Buffer, 0x40ui64, &_Format, (unsigned int)_Val);
  std::num_put<char,std::ostreambuf_iterator<char>>::_Iput(this, result, &v16, _Iosbase, _Fill, _Buffer, v14);
  return result;
}

std::ostreambuf_iterator<char> *__fastcall std::num_put<char,std::ostreambuf_iterator<char>>::do_put(
        std::num_put<char,std::ostreambuf_iterator<char> > *this,
        std::ostreambuf_iterator<char> *result,
        std::ostreambuf_iterator<char> *_Dest,
        std::ios_base *_Iosbase,
        char _Fill,
        unsigned int _Val)
{
  std::ostreambuf_iterator<char> v6; // xmm0
  int Fmtfl; // edx
  char *v9; // rax
  int v12; // ecx
  char v13; // dl
  int v14; // eax
  std::ostreambuf_iterator<char> v16; // [rsp+40h] [rbp-88h] BYREF
  char _Format; // [rsp+50h] [rbp-78h] BYREF
  char v18; // [rsp+51h] [rbp-77h] BYREF
  char v19; // [rsp+52h] [rbp-76h] BYREF
  char _Buffer[64]; // [rsp+60h] [rbp-68h] BYREF

  v6 = *_Dest;
  _Format = 37;
  Fmtfl = _Iosbase->_Fmtfl;
  v9 = &v18;
  v16 = v6;
  if ( (Fmtfl & 0x20) != 0 )
  {
    v18 = 43;
    v9 = &v19;
  }
  if ( (Fmtfl & 8) != 0 )
    *v9++ = 35;
  if ( aLu[0] == 76 )
  {
    *(_WORD *)v9 = 13897;
    v9 += 2;
    *v9 = 52;
  }
  else
  {
    *v9 = aLu[0];
  }
  v12 = Fmtfl & 0xE00;
  if ( v12 == 1024 )
  {
    v13 = 111;
  }
  else if ( v12 == 2048 )
  {
    v13 = ~(8 * Fmtfl) & 0x20 | 0x58;
  }
  else
  {
    v13 = aLu[1];
  }
  v9[1] = v13;
  v9[2] = 0;
  v14 = sprintf_s(_Buffer, 0x40ui64, &_Format, _Val);
  std::num_put<char,std::ostreambuf_iterator<char>>::_Iput(this, result, &v16, _Iosbase, _Fill, _Buffer, v14);
  return result;
}

std::ostreambuf_iterator<char> *__fastcall std::num_put<char,std::ostreambuf_iterator<char>>::do_put(
        std::num_put<char,std::ostreambuf_iterator<char> > *this,
        std::ostreambuf_iterator<char> *result,
        std::ostreambuf_iterator<char> *_Dest,
        std::ios_base *_Iosbase,
        char _Fill,
        long double _Val)
{
  unsigned __int64 Myres; // r10
  unsigned __int64 Mysize; // r9
  int v12; // eax
  __int64 Prec; // rbx
  __int64 v14; // rdx
  unsigned __int64 v15; // rdx
  std::string *Ptr; // rax
  int Fmtfl; // edx
  char *v18; // rax
  int v19; // ecx
  char v20; // dl
  char v21; // r8
  std::string *v22; // rcx
  int v23; // eax
  std::string *v24; // rcx
  char *v25; // rcx
  char *v26; // rax
  int v28; // [rsp+40h] [rbp-98h] BYREF
  __int64 v29; // [rsp+48h] [rbp-90h]
  std::ostreambuf_iterator<char> v30; // [rsp+50h] [rbp-88h] BYREF
  std::string v31; // [rsp+60h] [rbp-78h] BYREF
  char v32; // [rsp+80h] [rbp-58h] BYREF
  char v33; // [rsp+81h] [rbp-57h] BYREF
  _BYTE v34[6]; // [rsp+82h] [rbp-56h] BYREF

  v29 = -2i64;
  Myres = 15i64;
  v31._Mypair._Myval2._Myres = 15i64;
  Mysize = 0i64;
  v31._Mypair._Myval2._Mysize = 0i64;
  v31._Mypair._Myval2._Bx._Buf[0] = 0;
  v12 = _Iosbase->_Fmtfl & 0x3000;
  Prec = _Iosbase->_Prec;
  if ( Prec <= 0 && v12 != 0x2000 )
    Prec = 6i64;
  v14 = Prec;
  if ( v12 == 0x2000 && COERCE_DOUBLE(*(_QWORD *)&_Val & _xmm) > 1.0e10 )
  {
    frexp(_Val, &v28);
    v14 = Prec + (int)(30103 * abs32(v28)) / 100000;
    Myres = v31._Mypair._Myval2._Myres;
    Mysize = v31._Mypair._Myval2._Mysize;
  }
  v15 = v14 + 50;
  if ( v15 > Mysize )
  {
    std::string::append(&v31, v15 - Mysize, 0);
  }
  else
  {
    v31._Mypair._Myval2._Mysize = v15;
    Ptr = &v31;
    if ( Myres >= 0x10 )
      Ptr = (std::string *)v31._Mypair._Myval2._Bx._Ptr;
    Ptr->_Mypair._Myval2._Bx._Buf[v15] = 0;
  }
  Fmtfl = _Iosbase->_Fmtfl;
  v32 = 37;
  v18 = &v33;
  if ( (Fmtfl & 0x20) != 0 )
  {
    v33 = 43;
    v18 = v34;
  }
  if ( (Fmtfl & 0x10) != 0 )
    *v18++ = 35;
  *(_WORD *)v18 = 10798;
  v19 = Fmtfl & 0x3000;
  if ( (Fmtfl & 4) != 0 )
  {
    if ( v19 == 0x2000 )
    {
      v20 = 102;
      goto LABEL_29;
    }
    if ( v19 == 12288 )
    {
      v20 = 65;
      goto LABEL_29;
    }
    v20 = 71;
    v21 = 69;
  }
  else
  {
    if ( v19 == 0x2000 )
    {
      v20 = 102;
      goto LABEL_29;
    }
    if ( v19 == 12288 )
    {
      v20 = 97;
      goto LABEL_29;
    }
    v20 = 103;
    v21 = 101;
  }
  if ( v19 == 4096 )
    v20 = v21;
LABEL_29:
  v18[2] = v20;
  v18[3] = 0;
  v22 = &v31;
  if ( v31._Mypair._Myval2._Myres >= 0x10 )
    v22 = (std::string *)v31._Mypair._Myval2._Bx._Ptr;
  v23 = sprintf_s(v22->_Mypair._Myval2._Bx._Buf, v31._Mypair._Myval2._Mysize, &v32, (unsigned int)Prec, _Val);
  v30 = *_Dest;
  v24 = &v31;
  if ( v31._Mypair._Myval2._Myres >= 0x10 )
    v24 = (std::string *)v31._Mypair._Myval2._Bx._Ptr;
  std::num_put<char,std::ostreambuf_iterator<char>>::_Fput(
    this,
    result,
    &v30,
    _Iosbase,
    _Fill,
    v24->_Mypair._Myval2._Bx._Buf,
    v23);
  if ( v31._Mypair._Myval2._Myres >= 0x10 )
  {
    v25 = v31._Mypair._Myval2._Bx._Ptr;
    if ( v31._Mypair._Myval2._Myres + 1 >= 0x1000 )
    {
      if ( (v31._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
        invalid_parameter_noinfo_noreturn();
      v26 = (char *)*((_QWORD *)v31._Mypair._Myval2._Bx._Ptr - 1);
      if ( v26 >= v31._Mypair._Myval2._Bx._Ptr )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(v31._Mypair._Myval2._Bx._Ptr - v26) < (char *)8 )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(v31._Mypair._Myval2._Bx._Ptr - v26) > (char *)0x27 )
        invalid_parameter_noinfo_noreturn();
      v25 = (char *)*((_QWORD *)v31._Mypair._Myval2._Bx._Ptr - 1);
    }
    operator delete(v25);
  }
  return result;
}

std::ostreambuf_iterator<char> *__fastcall std::num_put<char,std::ostreambuf_iterator<char>>::do_put(
        std::num_put<char,std::ostreambuf_iterator<char> > *this,
        std::ostreambuf_iterator<char> *result,
        std::ostreambuf_iterator<char> *_Dest,
        std::ios_base *_Iosbase,
        char _Fill,
        long double _Val)
{
  unsigned __int64 Myres; // r10
  unsigned __int64 Mysize; // r9
  int v12; // eax
  __int64 Prec; // rbx
  __int64 v14; // rdx
  unsigned __int64 v15; // rdx
  std::string *Ptr; // rax
  int Fmtfl; // edx
  char *v18; // rax
  int v19; // ecx
  char v20; // dl
  char v21; // r8
  std::string *v22; // rcx
  int v23; // eax
  std::string *v24; // rcx
  char *v25; // rcx
  char *v26; // rax
  int v28; // [rsp+40h] [rbp-98h] BYREF
  __int64 v29; // [rsp+48h] [rbp-90h]
  std::ostreambuf_iterator<char> v30; // [rsp+50h] [rbp-88h] BYREF
  std::string v31; // [rsp+60h] [rbp-78h] BYREF
  char v32; // [rsp+80h] [rbp-58h] BYREF
  char v33; // [rsp+81h] [rbp-57h] BYREF
  _BYTE v34[6]; // [rsp+82h] [rbp-56h] BYREF

  v29 = -2i64;
  Myres = 15i64;
  v31._Mypair._Myval2._Myres = 15i64;
  Mysize = 0i64;
  v31._Mypair._Myval2._Mysize = 0i64;
  v31._Mypair._Myval2._Bx._Buf[0] = 0;
  v12 = _Iosbase->_Fmtfl & 0x3000;
  Prec = _Iosbase->_Prec;
  if ( Prec <= 0 && v12 != 0x2000 )
    Prec = 6i64;
  v14 = Prec;
  if ( v12 == 0x2000 && COERCE_DOUBLE(*(_QWORD *)&_Val & _xmm) > 1.0e10 )
  {
    frexp(_Val, &v28);
    v14 = Prec + (int)(30103 * abs32(v28)) / 100000;
    Myres = v31._Mypair._Myval2._Myres;
    Mysize = v31._Mypair._Myval2._Mysize;
  }
  v15 = v14 + 50;
  if ( v15 > Mysize )
  {
    std::string::append(&v31, v15 - Mysize, 0);
  }
  else
  {
    v31._Mypair._Myval2._Mysize = v15;
    Ptr = &v31;
    if ( Myres >= 0x10 )
      Ptr = (std::string *)v31._Mypair._Myval2._Bx._Ptr;
    Ptr->_Mypair._Myval2._Bx._Buf[v15] = 0;
  }
  Fmtfl = _Iosbase->_Fmtfl;
  v32 = 37;
  v18 = &v33;
  if ( (Fmtfl & 0x20) != 0 )
  {
    v33 = 43;
    v18 = v34;
  }
  if ( (Fmtfl & 0x10) != 0 )
    *v18++ = 35;
  *(_WORD *)v18 = 10798;
  v18[2] = 76;
  v19 = Fmtfl & 0x3000;
  if ( (Fmtfl & 4) != 0 )
  {
    if ( v19 == 0x2000 )
    {
      v20 = 102;
      goto LABEL_29;
    }
    if ( v19 == 12288 )
    {
      v20 = 65;
      goto LABEL_29;
    }
    v20 = 71;
    v21 = 69;
  }
  else
  {
    if ( v19 == 0x2000 )
    {
      v20 = 102;
      goto LABEL_29;
    }
    if ( v19 == 12288 )
    {
      v20 = 97;
      goto LABEL_29;
    }
    v20 = 103;
    v21 = 101;
  }
  if ( v19 == 4096 )
    v20 = v21;
LABEL_29:
  v18[3] = v20;
  v18[4] = 0;
  v22 = &v31;
  if ( v31._Mypair._Myval2._Myres >= 0x10 )
    v22 = (std::string *)v31._Mypair._Myval2._Bx._Ptr;
  v23 = sprintf_s(v22->_Mypair._Myval2._Bx._Buf, v31._Mypair._Myval2._Mysize, &v32, (unsigned int)Prec, _Val);
  v30 = *_Dest;
  v24 = &v31;
  if ( v31._Mypair._Myval2._Myres >= 0x10 )
    v24 = (std::string *)v31._Mypair._Myval2._Bx._Ptr;
  std::num_put<char,std::ostreambuf_iterator<char>>::_Fput(
    this,
    result,
    &v30,
    _Iosbase,
    _Fill,
    v24->_Mypair._Myval2._Bx._Buf,
    v23);
  if ( v31._Mypair._Myval2._Myres >= 0x10 )
  {
    v25 = v31._Mypair._Myval2._Bx._Ptr;
    if ( v31._Mypair._Myval2._Myres + 1 >= 0x1000 )
    {
      if ( (v31._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
        invalid_parameter_noinfo_noreturn();
      v26 = (char *)*((_QWORD *)v31._Mypair._Myval2._Bx._Ptr - 1);
      if ( v26 >= v31._Mypair._Myval2._Bx._Ptr )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(v31._Mypair._Myval2._Bx._Ptr - v26) < (char *)8 )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(v31._Mypair._Myval2._Bx._Ptr - v26) > (char *)0x27 )
        invalid_parameter_noinfo_noreturn();
      v25 = (char *)*((_QWORD *)v31._Mypair._Myval2._Bx._Ptr - 1);
    }
    operator delete(v25);
  }
  return result;
}

std::ostreambuf_iterator<char> *__fastcall std::num_put<char,std::ostreambuf_iterator<char>>::do_put(
        std::num_put<char,std::ostreambuf_iterator<char> > *this,
        std::ostreambuf_iterator<char> *result,
        std::ostreambuf_iterator<char> *_Dest,
        std::ios_base *_Iosbase,
        char _Fill,
        const void *_Val)
{
  int v9; // eax
  std::ostreambuf_iterator<char> v11; // [rsp+40h] [rbp-78h] BYREF
  char _Buffer[64]; // [rsp+50h] [rbp-68h] BYREF

  v11 = *_Dest;
  v9 = sprintf_s(_Buffer, 0x40ui64, "%p", _Val);
  std::num_put<char,std::ostreambuf_iterator<char>>::_Iput(this, result, &v11, _Iosbase, _Fill, _Buffer, v9);
  return result;
}

std::ostreambuf_iterator<char> *__fastcall std::num_put<char,std::ostreambuf_iterator<char>>::do_put(
        std::num_put<char,std::ostreambuf_iterator<char> > *this,
        std::ostreambuf_iterator<char> *result,
        std::ostreambuf_iterator<char> *_Dest,
        std::ios_base *_Iosbase,
        char _Fill,
        __int64 _Val)
{
  std::ostreambuf_iterator<char> v6; // xmm0
  int Fmtfl; // edx
  char *v9; // rax
  int v12; // ecx
  char v13; // dl
  int v14; // eax
  std::ostreambuf_iterator<char> v16; // [rsp+40h] [rbp-88h] BYREF
  char _Format; // [rsp+50h] [rbp-78h] BYREF
  char v18; // [rsp+51h] [rbp-77h] BYREF
  char v19; // [rsp+52h] [rbp-76h] BYREF
  char _Buffer[64]; // [rsp+60h] [rbp-68h] BYREF

  v6 = *_Dest;
  _Format = 37;
  Fmtfl = _Iosbase->_Fmtfl;
  v9 = &v18;
  v16 = v6;
  if ( (Fmtfl & 0x20) != 0 )
  {
    v18 = 43;
    v9 = &v19;
  }
  if ( (Fmtfl & 8) != 0 )
    *v9++ = 35;
  *(_WORD *)v9 = 13897;
  v12 = Fmtfl & 0xE00;
  v9[2] = 52;
  if ( v12 == 1024 )
  {
    v13 = 111;
  }
  else if ( v12 == 2048 )
  {
    v13 = ~(8 * Fmtfl) & 0x20 | 0x58;
  }
  else
  {
    v13 = 100;
  }
  v9[3] = v13;
  v9[4] = 0;
  v14 = sprintf_s(_Buffer, 0x40ui64, &_Format, _Val);
  std::num_put<char,std::ostreambuf_iterator<char>>::_Iput(this, result, &v16, _Iosbase, _Fill, _Buffer, v14);
  return result;
}

std::ostreambuf_iterator<char> *__fastcall std::num_put<char,std::ostreambuf_iterator<char>>::do_put(
        std::num_put<char,std::ostreambuf_iterator<char> > *this,
        std::ostreambuf_iterator<char> *result,
        std::ostreambuf_iterator<char> *_Dest,
        std::ios_base *_Iosbase,
        char _Fill,
        unsigned __int64 _Val)
{
  std::ostreambuf_iterator<char> v6; // xmm0
  int Fmtfl; // edx
  char *v9; // rax
  int v12; // ecx
  char v13; // dl
  int v14; // eax
  std::ostreambuf_iterator<char> v16; // [rsp+40h] [rbp-88h] BYREF
  char _Format; // [rsp+50h] [rbp-78h] BYREF
  char v18; // [rsp+51h] [rbp-77h] BYREF
  char v19; // [rsp+52h] [rbp-76h] BYREF
  char _Buffer[64]; // [rsp+60h] [rbp-68h] BYREF

  v6 = *_Dest;
  _Format = 37;
  Fmtfl = _Iosbase->_Fmtfl;
  v9 = &v18;
  v16 = v6;
  if ( (Fmtfl & 0x20) != 0 )
  {
    v18 = 43;
    v9 = &v19;
  }
  if ( (Fmtfl & 8) != 0 )
    *v9++ = 35;
  *(_WORD *)v9 = 13897;
  v12 = Fmtfl & 0xE00;
  v9[2] = 52;
  if ( v12 == 1024 )
  {
    v13 = 111;
  }
  else if ( v12 == 2048 )
  {
    v13 = ~(8 * Fmtfl) & 0x20 | 0x58;
  }
  else
  {
    v13 = 117;
  }
  v9[3] = v13;
  v9[4] = 0;
  v14 = sprintf_s(_Buffer, 0x40ui64, &_Format, _Val);
  std::num_put<char,std::ostreambuf_iterator<char>>::_Iput(this, result, &v16, _Iosbase, _Fill, _Buffer, v14);
  return result;
}

std::ostreambuf_iterator<char> *__fastcall std::num_put<char,std::ostreambuf_iterator<char>>::do_put(
        std::num_put<char,std::ostreambuf_iterator<char> > *this,
        std::ostreambuf_iterator<char> *result,
        std::ostreambuf_iterator<char> *_Dest,
        std::ios_base *_Iosbase,
        char _Fill,
        bool _Val)
{
  std::ostreambuf_iterator<char> *v8; // rbx
  const std::locale *v9; // rax
  std::numpunct<char> *v10; // rbx
  std::_Facet_base *v11; // rax
  std::string *v12; // rax
  char *Ptr; // rcx
  char *v14; // rax
  std::string *v15; // rax
  __int64 Wide; // rdi
  unsigned __int64 Mysize; // rsi
  unsigned __int64 v18; // rdi
  std::ostreambuf_iterator<char> v19; // xmm0
  std::locale::_Locimp *v20; // rbx
  int *v21; // rcx
  char **v22; // rcx
  char *v23; // rdx
  int v24; // eax
  std::ostreambuf_iterator<char> v25; // xmm0
  std::string *v26; // r14
  char *v27; // rcx
  unsigned __int64 Myres; // rax
  std::locale::_Locimp *v29; // rbx
  unsigned __int8 v30; // r8
  int *v31; // rcx
  unsigned __int8 **v32; // rcx
  unsigned __int8 *v33; // rdx
  int v34; // eax
  std::locale v35; // xmm0
  std::locale::_Locimp *v36; // rbx
  int *v37; // rcx
  char **v38; // rcx
  char *v39; // rdx
  int v40; // eax
  char *v41; // rax
  unsigned __int64 v42; // rcx
  std::locale resulta; // [rsp+30h] [rbp-69h] BYREF
  std::ostreambuf_iterator<char> *v45; // [rsp+40h] [rbp-59h]
  __int64 v46; // [rsp+48h] [rbp-51h]
  std::string v47; // [rsp+50h] [rbp-49h] BYREF
  std::string v48; // [rsp+70h] [rbp-29h] BYREF

  v46 = -2i64;
  v8 = result;
  v45 = result;
  if ( (_Iosbase->_Fmtfl & 0x4000) == 0 )
  {
    resulta = (std::locale)*_Dest;
    ((void (__fastcall *)(std::num_put<char,std::ostreambuf_iterator<char> > *, std::ostreambuf_iterator<char> *, std::locale *))this->do_put)(
      this,
      result,
      &resulta);
    return v8;
  }
  v9 = std::ios_base::getloc(_Iosbase, &resulta);
  v10 = (std::numpunct<char> *)std::use_facet<std::numpunct<char>>(v9);
  if ( resulta._Ptr )
  {
    v11 = resulta._Ptr->_Decref(resulta._Ptr);
    if ( v11 )
      ((void (__fastcall *)(std::_Facet_base *, __int64))v11->~_Facet_base)(v11, 1i64);
  }
  v47._Mypair._Myval2._Myres = 15i64;
  v47._Mypair._Myval2._Mysize = 0i64;
  v47._Mypair._Myval2._Bx._Buf[0] = 0;
  if ( _Val )
  {
    v12 = std::numpunct<char>::truename(v10, &v48);
    std::string::assign(&v47, v12);
    if ( v48._Mypair._Myval2._Myres < 0x10 )
      goto LABEL_29;
    Ptr = v48._Mypair._Myval2._Bx._Ptr;
    if ( v48._Mypair._Myval2._Myres + 1 < 0x1000 )
      goto LABEL_28;
    if ( (v48._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
      invalid_parameter_noinfo_noreturn();
    v14 = (char *)*((_QWORD *)v48._Mypair._Myval2._Bx._Ptr - 1);
    if ( v14 >= v48._Mypair._Myval2._Bx._Ptr )
      invalid_parameter_noinfo_noreturn();
    if ( (char *)(v48._Mypair._Myval2._Bx._Ptr - v14) < (char *)8 )
      invalid_parameter_noinfo_noreturn();
    if ( (char *)(v48._Mypair._Myval2._Bx._Ptr - v14) > (char *)0x27 )
      invalid_parameter_noinfo_noreturn();
    goto LABEL_27;
  }
  v15 = std::numpunct<char>::falsename(v10, &v48);
  std::string::assign(&v47, v15);
  if ( v48._Mypair._Myval2._Myres < 0x10 )
    goto LABEL_29;
  Ptr = v48._Mypair._Myval2._Bx._Ptr;
  if ( v48._Mypair._Myval2._Myres + 1 >= 0x1000 )
  {
    if ( (v48._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
      invalid_parameter_noinfo_noreturn();
    v14 = (char *)*((_QWORD *)v48._Mypair._Myval2._Bx._Ptr - 1);
    if ( v14 >= v48._Mypair._Myval2._Bx._Ptr )
      invalid_parameter_noinfo_noreturn();
    if ( (char *)(v48._Mypair._Myval2._Bx._Ptr - v14) < (char *)8 )
      invalid_parameter_noinfo_noreturn();
    if ( (char *)(v48._Mypair._Myval2._Bx._Ptr - v14) > (char *)0x27 )
      invalid_parameter_noinfo_noreturn();
LABEL_27:
    Ptr = v14;
  }
LABEL_28:
  operator delete(Ptr);
LABEL_29:
  Wide = _Iosbase->_Wide;
  Mysize = v47._Mypair._Myval2._Mysize;
  if ( Wide <= 0 || Wide <= v47._Mypair._Myval2._Mysize )
    v18 = 0i64;
  else
    v18 = Wide - v47._Mypair._Myval2._Mysize;
  if ( (_Iosbase->_Fmtfl & 0x1C0) != 64 )
  {
    v19 = *_Dest;
    resulta = (std::locale)*_Dest;
    if ( v18 )
    {
      v20 = resulta._Ptr;
      do
      {
        if ( !v20
          || (!**(_QWORD **)&v20[1]._Myrefs || (v21 = *(int **)&v20[1]._Catmask, *v21 <= 0) ? (v24 = ((__int64 (__fastcall *)(std::locale::_Locimp *, _QWORD))v20->__vftable[1].~_Facet_base)(v20, (unsigned __int8)_Fill)) : (--*v21, v22 = *(char ***)&v20[1]._Myrefs, v23 = *v22, ++*v22, *v23 = _Fill, v24 = (unsigned __int8)_Fill),
              v24 == -1) )
        {
          resulta.gap0 = 1;
        }
        --v18;
      }
      while ( v18 );
      Mysize = v47._Mypair._Myval2._Mysize;
      v19 = (std::ostreambuf_iterator<char>)resulta;
    }
    *_Dest = v19;
    v18 = 0i64;
  }
  v25 = *_Dest;
  resulta = (std::locale)*_Dest;
  v26 = &v47;
  v27 = v47._Mypair._Myval2._Bx._Ptr;
  Myres = v47._Mypair._Myval2._Myres;
  if ( v47._Mypair._Myval2._Myres >= 0x10 )
    v26 = (std::string *)v47._Mypair._Myval2._Bx._Ptr;
  if ( Mysize )
  {
    v29 = resulta._Ptr;
    do
    {
      v30 = v26->_Mypair._Myval2._Bx._Buf[0];
      if ( !v29
        || (!**(_QWORD **)&v29[1]._Myrefs || (v31 = *(int **)&v29[1]._Catmask, *v31 <= 0) ? (v34 = ((__int64 (__fastcall *)(std::locale::_Locimp *, _QWORD))v29->__vftable[1].~_Facet_base)(
                                                                                                     v29,
                                                                                                     v30)) : (--*v31, v32 = *(unsigned __int8 ***)&v29[1]._Myrefs, v33 = *v32, ++*v32, *v33 = v30, v34 = v30),
            v34 == -1) )
      {
        resulta.gap0 = 1;
      }
      v26 = (std::string *)((char *)v26 + 1);
      --Mysize;
    }
    while ( Mysize );
    Myres = v47._Mypair._Myval2._Myres;
    v27 = v47._Mypair._Myval2._Bx._Ptr;
    v25 = (std::ostreambuf_iterator<char>)resulta;
  }
  *_Dest = v25;
  _Iosbase->_Wide = 0i64;
  v35 = (std::locale)*_Dest;
  resulta = (std::locale)*_Dest;
  if ( v18 )
  {
    v36 = resulta._Ptr;
    do
    {
      if ( !v36
        || (!**(_QWORD **)&v36[1]._Myrefs || (v37 = *(int **)&v36[1]._Catmask, *v37 <= 0) ? (v40 = ((__int64 (__fastcall *)(std::locale::_Locimp *, _QWORD))v36->__vftable[1].~_Facet_base)(
                                                                                                     v36,
                                                                                                     (unsigned __int8)_Fill)) : (--*v37, v38 = *(char ***)&v36[1]._Myrefs, v39 = *v38, ++*v38, *v39 = _Fill, v40 = (unsigned __int8)_Fill),
            v40 == -1) )
      {
        resulta.gap0 = 1;
      }
      --v18;
    }
    while ( v18 );
    Myres = v47._Mypair._Myval2._Myres;
    v27 = v47._Mypair._Myval2._Bx._Ptr;
    v35 = resulta;
  }
  v8 = v45;
  *(std::locale *)v45 = v35;
  if ( Myres >= 0x10 )
  {
    if ( Myres + 1 >= 0x1000 )
    {
      if ( (v47._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
        invalid_parameter_noinfo_noreturn();
      v41 = (char *)*((_QWORD *)v27 - 1);
      if ( v41 >= v27 )
        invalid_parameter_noinfo_noreturn();
      v42 = v27 - v41;
      if ( v42 < 8 )
        invalid_parameter_noinfo_noreturn();
      if ( v42 > 0x27 )
        invalid_parameter_noinfo_noreturn();
      v27 = v41;
    }
    operator delete(v27);
  }
  return v8;
}

__int64 __fastcall std::numpunct<char>::do_thousands_sep(std::numpunct<char> *this)
{
  return (unsigned __int8)this->_Kseparator;
}

std::string *__fastcall std::numpunct<char>::do_truename(std::numpunct<char> *this, std::string *result)
{
  unsigned __int64 v3; // r8
  const char *Truename; // rdx

  v3 = 0i64;
  Truename = this->_Truename;
  result->_Mypair._Myval2._Myres = 15i64;
  result->_Mypair._Myval2._Mysize = 0i64;
  result->_Mypair._Myval2._Bx._Buf[0] = 0;
  if ( *Truename )
  {
    v3 = -1i64;
    do
      ++v3;
    while ( Truename[v3] );
  }
  std::string::assign(result, Truename, v3);
  return result;
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

std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const ,OGLModel *> > > > *__fastcall std::_Tree<std::_Tmap_traits<std::string,unsigned int,std::less<std::string>,std::allocator<std::pair<std::string const,unsigned int>>,0>>::erase(
        std::_Tree<std::_Tmap_traits<std::string,OGLModel *,std::less<std::string >,std::allocator<std::pair<std::string const ,OGLModel *> >,0> > *this,
        std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const ,OGLModel *> > > > *result,
        std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const ,OGLModel *> > > > _First,
        std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const ,OGLModel *> > > > _Last)
{
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *Myhead; // rdx
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *v7; // rax
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *Right; // rdx
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *j; // rcx
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *i; // rcx
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const ,OGLModel *> > > > resulta; // [rsp+40h] [rbp+8h] BYREF
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *v13; // [rsp+50h] [rbp+18h]
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *Ptr; // [rsp+58h] [rbp+20h]

  Ptr = _Last._Ptr;
  v13 = _First._Ptr;
  Myhead = this->_Mypair._Myval2._Myval2._Myhead;
  if ( _First._Ptr == this->_Mypair._Myval2._Myval2._Myhead->_Left && _Last._Ptr == Myhead )
  {
    std::_Tree<std::_Tset_traits<std::string,std::less<std::string>,std::allocator<std::string>,0>>::_Erase(
      (std::_Tree<std::_Tset_traits<std::string,std::less<std::string >,std::allocator<std::string >,0> > *)this,
      (std::_Tree_node<std::string,void *> *)Myhead->_Parent);
    this->_Mypair._Myval2._Myval2._Myhead->_Parent = this->_Mypair._Myval2._Myval2._Myhead;
    this->_Mypair._Myval2._Myval2._Myhead->_Left = this->_Mypair._Myval2._Myval2._Myhead;
    this->_Mypair._Myval2._Myval2._Myhead->_Right = this->_Mypair._Myval2._Myval2._Myhead;
    this->_Mypair._Myval2._Myval2._Mysize = 0i64;
    result->_Ptr = this->_Mypair._Myval2._Myval2._Myhead->_Left;
  }
  else
  {
    if ( _First._Ptr != _Last._Ptr )
    {
      do
      {
        v7 = _First._Ptr;
        if ( !_First._Ptr->_Isnil )
        {
          Right = _First._Ptr->_Right;
          if ( Right->_Isnil )
          {
            for ( i = _First._Ptr->_Parent; !i->_Isnil; i = i->_Parent )
            {
              if ( _First._Ptr != i->_Right )
                break;
              _First._Ptr = i;
              v13 = i;
            }
            v13 = i;
          }
          else
          {
            for ( j = Right->_Left; !j->_Isnil; j = j->_Left )
              Right = j;
            v13 = Right;
          }
        }
        std::_Tree<std::_Tmap_traits<std::string,CSteamID,std::less<void>,std::allocator<std::pair<std::string const,CSteamID>>,0>>::erase(
          this,
          &resulta,
          (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const ,OGLModel *> > > >)v7);
        _First._Ptr = v13;
      }
      while ( v13 != Ptr );
    }
    result->_Ptr = _First._Ptr;
  }
  return result;
}

std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const ,OGLModel *> > > > *__fastcall std::_Tree<std::_Tmap_traits<std::string,CSteamID,std::less<void>,std::allocator<std::pair<std::string const,CSteamID>>,0>>::erase(
        std::_Tree<std::_Tmap_traits<std::string,OGLModel *,std::less<std::string >,std::allocator<std::pair<std::string const ,OGLModel *> >,0> > *this,
        std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const ,OGLModel *> > > > *result,
        std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const ,OGLModel *> > > > _Where)
{
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *v5; // rdi
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *Right; // rax
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *j; // rax
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *i; // rax
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *v9; // r10
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *Parent; // r9
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *k; // rcx
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *Left; // rax
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *Myhead; // rdx
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *v14; // rax
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *m; // rcx
  std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const ,OGLModel *> > > > *v16; // rax
  char Color; // cl
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *v18; // r11
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *v19; // rbx
  std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *v20; // rdx
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *v21; // rcx
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *v22; // rax
  unsigned __int64 Myres; // rax
  void **p_Myval; // rbx
  char *v25; // rcx
  char *v26; // rax
  unsigned __int64 v27; // rcx
  bool v28; // cf
  unsigned __int64 Mysize; // rax
  std::_Tree_node<std::pair<std::string const ,OGLModel *>,void *> *Ptr; // [rsp+50h] [rbp+18h]

  Ptr = _Where._Ptr;
  v5 = _Where._Ptr;
  if ( !_Where._Ptr->_Isnil )
  {
    Right = _Where._Ptr->_Right;
    if ( Right->_Isnil )
    {
      for ( i = _Where._Ptr->_Parent; !i->_Isnil; i = i->_Parent )
      {
        if ( _Where._Ptr != i->_Right )
          break;
        _Where._Ptr = i;
      }
      _Where._Ptr = i;
      Ptr = i;
    }
    else
    {
      _Where._Ptr = _Where._Ptr->_Right;
      for ( j = Right->_Left; !j->_Isnil; j = j->_Left )
        _Where._Ptr = j;
      Ptr = _Where._Ptr;
    }
  }
  if ( v5->_Left->_Isnil )
  {
    v9 = v5->_Right;
LABEL_15:
    Parent = v5->_Parent;
    if ( !v9->_Isnil )
      v9->_Parent = Parent;
    if ( this->_Mypair._Myval2._Myval2._Myhead->_Parent == v5 )
    {
      this->_Mypair._Myval2._Myval2._Myhead->_Parent = v9;
    }
    else if ( Parent->_Left == v5 )
    {
      Parent->_Left = v9;
    }
    else
    {
      Parent->_Right = v9;
    }
    if ( this->_Mypair._Myval2._Myval2._Myhead->_Left == v5 )
    {
      if ( v9->_Isnil )
      {
        k = Parent;
      }
      else
      {
        Left = v9->_Left;
        for ( k = v9; !Left->_Isnil; Left = Left->_Left )
          k = Left;
      }
      this->_Mypair._Myval2._Myval2._Myhead->_Left = k;
    }
    Myhead = this->_Mypair._Myval2._Myval2._Myhead;
    if ( this->_Mypair._Myval2._Myval2._Myhead->_Right == v5 )
    {
      if ( v9->_Isnil )
      {
        Myhead->_Right = Parent;
      }
      else
      {
        v14 = v9->_Right;
        for ( m = v9; !v14->_Isnil; v14 = v14->_Right )
          m = v14;
        Myhead->_Right = m;
      }
    }
    goto LABEL_45;
  }
  if ( v5->_Right->_Isnil )
  {
    v9 = v5->_Left;
    goto LABEL_15;
  }
  v9 = _Where._Ptr->_Right;
  if ( _Where._Ptr == v5 )
    goto LABEL_15;
  v5->_Left->_Parent = _Where._Ptr;
  _Where._Ptr->_Left = v5->_Left;
  if ( _Where._Ptr == v5->_Right )
  {
    Parent = _Where._Ptr;
  }
  else
  {
    Parent = _Where._Ptr->_Parent;
    if ( !v9->_Isnil )
      v9->_Parent = Parent;
    Parent->_Left = v9;
    _Where._Ptr->_Right = v5->_Right;
    v5->_Right->_Parent = _Where._Ptr;
  }
  if ( this->_Mypair._Myval2._Myval2._Myhead->_Parent == v5 )
  {
    this->_Mypair._Myval2._Myval2._Myhead->_Parent = _Where._Ptr;
  }
  else
  {
    v16 = (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const ,OGLModel *> > > > *)v5->_Parent;
    if ( v16->_Ptr == v5 )
      v16->_Ptr = _Where._Ptr;
    else
      v16[2]._Ptr = _Where._Ptr;
  }
  _Where._Ptr->_Parent = v5->_Parent;
  Color = _Where._Ptr->_Color;
  _Where._Ptr->_Color = v5->_Color;
  v5->_Color = Color;
LABEL_45:
  if ( v5->_Color == 1 )
  {
    if ( v9 != this->_Mypair._Myval2._Myval2._Myhead->_Parent )
    {
      do
      {
        v18 = Parent;
        v19 = Parent;
        if ( v9->_Color != 1 )
          break;
        v20 = (std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *)Parent->_Left;
        if ( v9 == Parent->_Left )
        {
          v20 = (std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *)Parent->_Right;
          if ( !v20->_Color )
          {
            v20->_Color = 1;
            v21 = Parent->_Right;
            Parent->_Color = 0;
            Parent->_Right = v21->_Left;
            if ( !v21->_Left->_Isnil )
              v21->_Left->_Parent = Parent;
            v21->_Parent = Parent->_Parent;
            if ( Parent == this->_Mypair._Myval2._Myval2._Myhead->_Parent )
            {
              this->_Mypair._Myval2._Myval2._Myhead->_Parent = v21;
            }
            else
            {
              v22 = Parent->_Parent;
              if ( Parent == v22->_Left )
                v22->_Left = v21;
              else
                v22->_Right = v21;
            }
            v21->_Left = Parent;
            v20 = (std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *)Parent->_Right;
            Parent->_Parent = v21;
          }
          if ( v20->_Isnil )
            goto LABEL_70;
          if ( v20->_Left->_Color != 1 || v20->_Right->_Color != 1 )
          {
            if ( v20->_Right->_Color == 1 )
            {
              v20->_Left->_Color = 1;
              v20->_Color = 0;
              std::_Tree<std::_Tmap_traits<enum AgControllerComponentType,std::list<AgControllerComponent *>,std::less<enum AgControllerComponentType>,std::allocator<std::pair<enum AgControllerComponentType const,std::list<AgControllerComponent *>>>,0>>::_Rrotate(
                (std::_Tree<std::_Tmap_traits<AgStringRef,AgJsonNode,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const ,AgJsonNode> >,0> > *)this,
                v20);
              v20 = (std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *)Parent->_Right;
            }
            v20->_Color = Parent->_Color;
            Parent->_Color = 1;
            v20->_Right->_Color = 1;
            std::_Tree<std::_Tmap_traits<AgControllerUID,FighterOperationMapper,std::less<AgControllerUID>,std::allocator<std::pair<AgControllerUID const,FighterOperationMapper>>,0>>::_Lrotate(
              (std::_Tree<std::_Tmap_traits<AgStringRef,AgJsonNode,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const ,AgJsonNode> >,0> > *)this,
              (std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *)Parent);
            break;
          }
        }
        else
        {
          if ( !v20->_Color )
          {
            v20->_Color = 1;
            Parent->_Color = 0;
            std::_Tree<std::_Tmap_traits<enum AgControllerComponentType,std::list<AgControllerComponent *>,std::less<enum AgControllerComponentType>,std::allocator<std::pair<enum AgControllerComponentType const,std::list<AgControllerComponent *>>>,0>>::_Rrotate(
              (std::_Tree<std::_Tmap_traits<AgStringRef,AgJsonNode,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const ,AgJsonNode> >,0> > *)this,
              (std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *)Parent);
            v20 = (std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *)Parent->_Left;
          }
          if ( v20->_Isnil )
            goto LABEL_70;
          if ( v20->_Right->_Color != 1 || v20->_Left->_Color != 1 )
          {
            if ( v20->_Left->_Color == 1 )
            {
              v20->_Right->_Color = 1;
              v20->_Color = 0;
              std::_Tree<std::_Tmap_traits<AgControllerUID,FighterOperationMapper,std::less<AgControllerUID>,std::allocator<std::pair<AgControllerUID const,FighterOperationMapper>>,0>>::_Lrotate(
                (std::_Tree<std::_Tmap_traits<AgStringRef,AgJsonNode,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const ,AgJsonNode> >,0> > *)this,
                v20);
              v20 = (std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *)Parent->_Left;
            }
            v20->_Color = Parent->_Color;
            Parent->_Color = 1;
            v20->_Left->_Color = 1;
            std::_Tree<std::_Tmap_traits<enum AgControllerComponentType,std::list<AgControllerComponent *>,std::less<enum AgControllerComponentType>,std::allocator<std::pair<enum AgControllerComponentType const,std::list<AgControllerComponent *>>>,0>>::_Rrotate(
              (std::_Tree<std::_Tmap_traits<AgStringRef,AgJsonNode,std::less<AgStringRef>,std::allocator<std::pair<AgStringRef const ,AgJsonNode> >,0> > *)this,
              (std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *)Parent);
            break;
          }
        }
        v20->_Color = 0;
LABEL_70:
        v9 = v19;
        Parent = Parent->_Parent;
      }
      while ( v18 != this->_Mypair._Myval2._Myval2._Myhead->_Parent );
    }
    v9->_Color = 1;
  }
  Myres = v5->_Myval.first._Mypair._Myval2._Myres;
  p_Myval = (void **)&v5->_Myval;
  if ( Myres >= 0x10 )
  {
    v25 = (char *)*p_Myval;
    if ( Myres + 1 >= 0x1000 )
    {
      if ( ((unsigned __int8)v25 & 0x1F) != 0 )
        invalid_parameter_noinfo_noreturn();
      v26 = (char *)*((_QWORD *)v25 - 1);
      if ( v26 >= v25 )
        invalid_parameter_noinfo_noreturn();
      v27 = v25 - v26;
      if ( v27 < 8 )
        invalid_parameter_noinfo_noreturn();
      if ( v27 > 0x27 )
        invalid_parameter_noinfo_noreturn();
      v25 = v26;
    }
    operator delete(v25);
  }
  v5->_Myval.first._Mypair._Myval2._Myres = 15i64;
  v28 = v5->_Myval.first._Mypair._Myval2._Myres < 0x10;
  v5->_Myval.first._Mypair._Myval2._Mysize = 0i64;
  if ( !v28 )
    p_Myval = (void **)*p_Myval;
  *(_BYTE *)p_Myval = 0;
  operator delete(v5);
  Mysize = this->_Mypair._Myval2._Myval2._Mysize;
  if ( Mysize )
    this->_Mypair._Myval2._Myval2._Mysize = Mysize - 1;
  result->_Ptr = Ptr;
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

std::string *__fastcall std::numpunct<char>::falsename(std::numpunct<char> *this, std::string *result)
{
  ((void (__fastcall *)(std::numpunct<char> *))this->do_falsename)(this);
  return result;
}

extension::RefCountablePtr<extension::BasicFutureObject<extension::AsyncFileImage,void>::Body> *__fastcall extension::BasicFutureObject<extension::AsyncFileImage,void>::AssetCache::getCachedOrLoadStart(
        extension::BasicFutureObject<extension::AsyncFileImage,void>::AssetCache *this,
        extension::RefCountablePtr<extension::BasicFutureObject<extension::AsyncFileImage,void>::Body> *result,
        std::string *name,
        const void *opt)
{
  volatile signed __int64 *v6; // rsi
  std::string *v7; // rax
  char *Ptr; // rcx
  char *v9; // rax
  unsigned __int64 v10; // rax
  bool v11; // r12
  std::string *v12; // rax
  std::string *v13; // rax
  char *v14; // rcx
  char *v15; // rax
  char *v16; // rcx
  char *v17; // rax
  const void *v18; // rdx
  unsigned __int64 Mysize; // rcx
  unsigned __int64 v20; // rbx
  unsigned __int64 Myres; // rdx
  std::string *p_Keyval; // rax
  std::string *v23; // rax
  std::string *v24; // rax
  extension::RCWeakPtr<extension::exsound_detail::SoundNameRegistry::NameBuffer> *v25; // rax
  extension::AsyncStatus::Step v26; // edx
  extension::BasicFutureObject<extension::AsyncFileImage,void>::Body *m_ptr; // rcx
  extension::AsyncContent<extension::AsyncFileImage> *v28; // rax
  extension::AsyncContent<extension::AsyncFileImage> *v29; // rbx
  std::string *v30; // rcx
  std::string *v31; // rax
  std::string *v32; // rax
  std::string *v33; // rcx
  std::string *v34; // rax
  std::string *v35; // rax
  extension::BasicFutureObject<extension::AsyncFileImage,void>::Body *v36; // rbx
  const void *v37; // r9
  extension::RefCountablePtr<extension::AsyncContent<extension::AsyncFileImage> > *v38; // rax
  extension::BasicFutureObject<extension::AsyncFileImage,void>::Body *v39; // rcx
  extension::BasicFutureObject<extension::AsyncFileImage,void>::Body *v40; // rax
  extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> *v41; // rax
  extension::BasicFutureObject<extension::AsyncFileImage,void>::Body *v42; // rcx
  std::_List_node<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncFileImage,void>::Body> >,void *> *Next; // rbx
  std::_List_const_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > > > > v44; // r8
  extension::RefCountableWeakSupportBase::WeakProxy *v45; // rax
  extension::BasicFutureObject<extension::AsyncFileImage,void>::Body *v47; // [rsp+28h] [rbp-D8h]
  extension::RefCountableWeakSupportBase::WeakProxy *block; // [rsp+30h] [rbp-D0h]
  extension::RefCountablePtr<extension::AsyncContent<extension::AsyncFileImage> > v49; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v50; // [rsp+40h] [rbp-C0h]
  extension::RefCountablePtr<extension::BasicFutureObject<extension::AsyncFileImage,void>::Body> *v51; // [rsp+48h] [rbp-B8h]
  extension::BasicFutureObject<extension::AsyncFileImage,void>::Body *v52; // [rsp+50h] [rbp-B0h]
  std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > > > > v53; // [rsp+60h] [rbp-A0h] BYREF
  extension::ExSimpleLockable<extension::BasicFutureObject<extension::AsyncFileImage,void>::AssetCache> *v54; // [rsp+68h] [rbp-98h]
  int v55; // [rsp+70h] [rbp-90h]
  std::string *v56; // [rsp+78h] [rbp-88h]
  std::string _Keyval; // [rsp+80h] [rbp-80h] BYREF
  std::string v58; // [rsp+A0h] [rbp-60h] BYREF
  std::string _Right; // [rsp+C0h] [rbp-40h] BYREF
  std::string resulta; // [rsp+E0h] [rbp-20h] BYREF
  std::string v61; // [rsp+100h] [rbp+0h] BYREF
  std::string v62; // [rsp+120h] [rbp+20h] BYREF
  std::string v63; // [rsp+140h] [rbp+40h] BYREF
  std::string v64; // [rsp+160h] [rbp+60h] BYREF
  std::string v65; // [rsp+180h] [rbp+80h] BYREF

  v50 = -2i64;
  v51 = result;
  v56 = name;
  v6 = 0i64;
  v7 = extension::AsyncWorker::NormalizeAssetPath(&resulta, name);
  std::string::assign(name, v7);
  if ( resulta._Mypair._Myval2._Myres >= 0x10 )
  {
    Ptr = resulta._Mypair._Myval2._Bx._Ptr;
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
      Ptr = (char *)*((_QWORD *)resulta._Mypair._Myval2._Bx._Ptr - 1);
    }
    operator delete(Ptr);
  }
  v10 = std::string::find(name, "obm", 0i64, 3ui64);
  v11 = v10 != -1i64;
  if ( v10 != -1i64 )
  {
    v12 = std::string::substr(name, &v61, 0i64, name->_Mypair._Myval2._Mysize - 3);
    v13 = std::operator+<char>(&v58, v12, "dds");
    std::string::assign(name, v13);
    if ( v58._Mypair._Myval2._Myres >= 0x10 )
    {
      v14 = v58._Mypair._Myval2._Bx._Ptr;
      if ( v58._Mypair._Myval2._Myres + 1 >= 0x1000 )
      {
        if ( (v58._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
          invalid_parameter_noinfo_noreturn();
        v15 = (char *)*((_QWORD *)v58._Mypair._Myval2._Bx._Ptr - 1);
        if ( v15 >= v58._Mypair._Myval2._Bx._Ptr )
          invalid_parameter_noinfo_noreturn();
        if ( (char *)(v58._Mypair._Myval2._Bx._Ptr - v15) < (char *)8 )
          invalid_parameter_noinfo_noreturn();
        if ( (char *)(v58._Mypair._Myval2._Bx._Ptr - v15) > (char *)0x27 )
          invalid_parameter_noinfo_noreturn();
        v14 = (char *)*((_QWORD *)v58._Mypair._Myval2._Bx._Ptr - 1);
      }
      operator delete(v14);
    }
    v58._Mypair._Myval2._Myres = 15i64;
    v58._Mypair._Myval2._Mysize = 0i64;
    v58._Mypair._Myval2._Bx._Buf[0] = 0;
    if ( v61._Mypair._Myval2._Myres >= 0x10 )
    {
      v16 = v61._Mypair._Myval2._Bx._Ptr;
      if ( v61._Mypair._Myval2._Myres + 1 >= 0x1000 )
      {
        if ( (v61._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
          invalid_parameter_noinfo_noreturn();
        v17 = (char *)*((_QWORD *)v61._Mypair._Myval2._Bx._Ptr - 1);
        if ( v17 >= v61._Mypair._Myval2._Bx._Ptr )
          invalid_parameter_noinfo_noreturn();
        if ( (char *)(v61._Mypair._Myval2._Bx._Ptr - v17) < (char *)8 )
          invalid_parameter_noinfo_noreturn();
        if ( (char *)(v61._Mypair._Myval2._Bx._Ptr - v17) > (char *)0x27 )
          invalid_parameter_noinfo_noreturn();
        v16 = (char *)*((_QWORD *)v61._Mypair._Myval2._Bx._Ptr - 1);
      }
      operator delete(v16);
    }
  }
  extension::AsyncWorker::ToLowerCasePath(&_Keyval, name);
  extension::FutureObjectJobManager<extension::exsound_detail::SoundBankImpl,void>::Stringize(&_Right, v18);
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
  v54 = &extension::BasicFutureObject<extension::AsyncFileImage,void>::s_cacheManager.extension::ExSimpleLockable<extension::BasicFutureObject<extension::AsyncFileImage,void>::AssetCache>;
  v55 = 1;
  EnterCriticalSection((LPCRITICAL_SECTION)&extension::BasicFutureObject<extension::AsyncFileImage,void>::s_cacheManager.extension::ExSimpleLockable<extension::BasicFutureObject<extension::AsyncFileImage,void>::AssetCache>);
  v25 = (extension::RCWeakPtr<extension::exsound_detail::SoundNameRegistry::NameBuffer> *)std::unordered_map<std::string,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>>::operator[](
                                                                                            (std::unordered_map<std::string,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body>> *)&extension::BasicFutureObject<extension::AsyncFileImage,void>::s_cacheManager.m_cachedObjectMap,
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
            ((void (__fastcall *)(extension::BasicFutureObject<extension::AsyncFileImage,void>::Body *, __int64))m_ptr->~RefCountableWeakSupportBase)(
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
    if ( v11 )
    {
      v30 = name->_Mypair._Myval2._Myres < 0x10 ? name : (std::string *)name->_Mypair._Myval2._Bx._Ptr;
      if ( !(unsigned __int8)CFile::exists(v30->_Mypair._Myval2._Bx._Buf) )
      {
        v31 = std::string::substr(name, &v63, 0i64, name->_Mypair._Myval2._Mysize - 3);
        v32 = std::operator+<char>(&v62, v31, "dds");
        std::string::assign(name, v32);
        std::string::~string(&v62);
        std::string::~string(&v63);
        v33 = name->_Mypair._Myval2._Myres < 0x10 ? name : (std::string *)name->_Mypair._Myval2._Bx._Ptr;
        if ( !(unsigned __int8)CFile::exists(v33->_Mypair._Myval2._Bx._Buf) )
        {
          v34 = std::string::substr(name, &v65, 0i64, name->_Mypair._Myval2._Mysize - 3);
          v35 = std::operator+<char>(&v64, v34, "png");
          std::string::assign(name, v35);
          std::string::~string(&v64);
          std::string::~string(&v65);
        }
      }
    }
    v36 = (extension::BasicFutureObject<extension::AsyncFileImage,void>::Body *)operator new(0x18ui64);
    v52 = v36;
    v38 = extension::FutureObjectJobManager<extension::AsyncFileImage,void>::LoadStart(&v49, name, &_Right, v37);
    extension::BasicFutureObject<extension::AsyncFileImage,void>::Body::Body(
      v36,
      (extension::RefCountablePtr<extension::AsyncContent<extension::AsyncFileImage> >)v38);
    v39 = result->m_ptr;
    result->m_ptr = v40;
    if ( v39
      && _InterlockedExchangeAdd64(
           (volatile signed __int64 *)&v39->m_refCount.m_ptr->m_sharedCount,
           0xFFFFFFFFFFFFFFFFui64) == 1 )
    {
      ((void (__fastcall *)(extension::BasicFutureObject<extension::AsyncFileImage,void>::Body *, __int64))v39->~RefCountableWeakSupportBase)(
        v39,
        1i64);
    }
    v41 = std::unordered_map<std::string,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>>::operator[](
            (std::unordered_map<std::string,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body>> *)&extension::BasicFutureObject<extension::AsyncFileImage,void>::s_cacheManager.m_cachedObjectMap,
            &_Keyval);
    v42 = result->m_ptr;
    v47 = result->m_ptr;
    if ( result->m_ptr )
    {
      v6 = (volatile signed __int64 *)v42->m_refCount.m_ptr;
      if ( v6 )
      {
        _InterlockedExchangeAdd64(v6, 1ui64);
        v42 = v47;
      }
    }
    v41->m_ptr = (extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body *)v42;
    block = v41->m_proxy.m_ptr;
    v41->m_proxy.m_ptr = (extension::RefCountableWeakSupportBase::WeakProxy *)v6;
    if ( block && _InterlockedExchangeAdd64((volatile signed __int64 *)block, 0xFFFFFFFFFFFFFFFFui64) == 1 )
      operator delete(block, 0x18ui64);
  }
  Next = extension::BasicFutureObject<extension::AsyncFileImage,void>::s_cacheManager.m_cachedObjectMap._List._Mypair._Myval2._Myhead->_Next;
  while ( Next != extension::BasicFutureObject<extension::AsyncFileImage,void>::s_cacheManager.m_cachedObjectMap._List._Mypair._Myval2._Myhead )
  {
    v44._Ptr = (std::_List_node<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >,void *> *)Next;
    v45 = Next->_Myval.second.m_proxy.m_ptr;
    Next = Next->_Next;
    if ( !v45 || !v45->m_sharedCount.m_value._My_val )
      std::_Hash<std::_Umap_traits<std::string,extension::RCWeakPtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body>,std::_Uhash_compare<std::string,std::hash<std::string>,std::equal_to<std::string>>,std::allocator<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body>>>,0>>::erase(
        (std::_Hash<std::_Umap_traits<std::string,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body>,std::_Uhash_compare<std::string,std::hash<std::string >,std::equal_to<std::string > >,std::allocator<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > >,0> > *)&extension::BasicFutureObject<extension::AsyncFileImage,void>::s_cacheManager.m_cachedObjectMap,
        &v53,
        v44);
  }
  extension::lockable_detail::LockUnlock(
    &extension::BasicFutureObject<extension::AsyncFileImage,void>::s_cacheManager.extension::ExSimpleLockable<extension::BasicFutureObject<extension::AsyncFileImage,void>::AssetCache>,
    -1);
  std::string::~string(&_Right);
  std::string::~string(&_Keyval);
  std::string::~string(name);
  return result;
}

extension::RefCountablePtr<extension::BasicFutureObject<OGLCamera,void>::Body> *__fastcall extension::BasicFutureObject<OGLCamera,void>::AssetCache::getCachedOrLoadStart(
        extension::BasicFutureObject<OGLCamera,void>::AssetCache *this,
        extension::RefCountablePtr<extension::BasicFutureObject<OGLCamera,void>::Body> *result,
        std::string *name,
        const void *opt)
{
  volatile signed __int64 *v6; // rsi
  std::string *v7; // rax
  char *Ptr; // rcx
  char *v9; // rax
  unsigned __int64 v10; // rax
  bool v11; // r12
  std::string *v12; // rax
  std::string *v13; // rax
  char *v14; // rcx
  char *v15; // rax
  char *v16; // rcx
  char *v17; // rax
  const void *v18; // rdx
  unsigned __int64 Mysize; // rcx
  unsigned __int64 v20; // rbx
  unsigned __int64 Myres; // rdx
  std::string *p_Keyval; // rax
  std::string *v23; // rax
  std::string *v24; // rax
  extension::RCWeakPtr<extension::exsound_detail::SoundNameRegistry::NameBuffer> *v25; // rax
  extension::AsyncStatus::Step v26; // edx
  extension::BasicFutureObject<OGLCamera,void>::Body *m_ptr; // rcx
  extension::AsyncContent<OGLCamera> *v28; // rax
  extension::AsyncContent<OGLCamera> *v29; // rbx
  std::string *v30; // rcx
  std::string *v31; // rax
  std::string *v32; // rax
  std::string *v33; // rcx
  std::string *v34; // rax
  std::string *v35; // rax
  extension::BasicFutureObject<OGLCamera,void>::Body *v36; // rbx
  const void *v37; // r9
  extension::RefCountablePtr<extension::AsyncContent<OGLCamera> > *v38; // rax
  extension::BasicFutureObject<OGLCamera,void>::Body *v39; // rcx
  extension::BasicFutureObject<OGLCamera,void>::Body *v40; // rax
  extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> *v41; // rax
  extension::BasicFutureObject<OGLCamera,void>::Body *v42; // rcx
  std::_List_node<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<OGLCamera,void>::Body> >,void *> *Next; // rbx
  std::_List_const_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > > > > v44; // r8
  extension::RefCountableWeakSupportBase::WeakProxy *v45; // rax
  extension::BasicFutureObject<OGLCamera,void>::Body *v47; // [rsp+28h] [rbp-D8h]
  extension::RefCountableWeakSupportBase::WeakProxy *block; // [rsp+30h] [rbp-D0h]
  extension::RefCountablePtr<extension::AsyncContent<OGLCamera> > v49; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v50; // [rsp+40h] [rbp-C0h]
  extension::RefCountablePtr<extension::BasicFutureObject<OGLCamera,void>::Body> *v51; // [rsp+48h] [rbp-B8h]
  extension::BasicFutureObject<OGLCamera,void>::Body *v52; // [rsp+50h] [rbp-B0h]
  std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > > > > v53; // [rsp+60h] [rbp-A0h] BYREF
  extension::ExSimpleLockable<extension::BasicFutureObject<OGLCamera,void>::AssetCache> *v54; // [rsp+68h] [rbp-98h]
  int v55; // [rsp+70h] [rbp-90h]
  std::string *v56; // [rsp+78h] [rbp-88h]
  std::string _Keyval; // [rsp+80h] [rbp-80h] BYREF
  std::string v58; // [rsp+A0h] [rbp-60h] BYREF
  std::string _Right; // [rsp+C0h] [rbp-40h] BYREF
  std::string resulta; // [rsp+E0h] [rbp-20h] BYREF
  std::string v61; // [rsp+100h] [rbp+0h] BYREF
  std::string v62; // [rsp+120h] [rbp+20h] BYREF
  std::string v63; // [rsp+140h] [rbp+40h] BYREF
  std::string v64; // [rsp+160h] [rbp+60h] BYREF
  std::string v65; // [rsp+180h] [rbp+80h] BYREF

  v50 = -2i64;
  v51 = result;
  v56 = name;
  v6 = 0i64;
  v7 = extension::AsyncWorker::NormalizeAssetPath(&resulta, name);
  std::string::assign(name, v7);
  if ( resulta._Mypair._Myval2._Myres >= 0x10 )
  {
    Ptr = resulta._Mypair._Myval2._Bx._Ptr;
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
      Ptr = (char *)*((_QWORD *)resulta._Mypair._Myval2._Bx._Ptr - 1);
    }
    operator delete(Ptr);
  }
  v10 = std::string::find(name, "obm", 0i64, 3ui64);
  v11 = v10 != -1i64;
  if ( v10 != -1i64 )
  {
    v12 = std::string::substr(name, &v61, 0i64, name->_Mypair._Myval2._Mysize - 3);
    v13 = std::operator+<char>(&v58, v12, "dds");
    std::string::assign(name, v13);
    if ( v58._Mypair._Myval2._Myres >= 0x10 )
    {
      v14 = v58._Mypair._Myval2._Bx._Ptr;
      if ( v58._Mypair._Myval2._Myres + 1 >= 0x1000 )
      {
        if ( (v58._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
          invalid_parameter_noinfo_noreturn();
        v15 = (char *)*((_QWORD *)v58._Mypair._Myval2._Bx._Ptr - 1);
        if ( v15 >= v58._Mypair._Myval2._Bx._Ptr )
          invalid_parameter_noinfo_noreturn();
        if ( (char *)(v58._Mypair._Myval2._Bx._Ptr - v15) < (char *)8 )
          invalid_parameter_noinfo_noreturn();
        if ( (char *)(v58._Mypair._Myval2._Bx._Ptr - v15) > (char *)0x27 )
          invalid_parameter_noinfo_noreturn();
        v14 = (char *)*((_QWORD *)v58._Mypair._Myval2._Bx._Ptr - 1);
      }
      operator delete(v14);
    }
    v58._Mypair._Myval2._Myres = 15i64;
    v58._Mypair._Myval2._Mysize = 0i64;
    v58._Mypair._Myval2._Bx._Buf[0] = 0;
    if ( v61._Mypair._Myval2._Myres >= 0x10 )
    {
      v16 = v61._Mypair._Myval2._Bx._Ptr;
      if ( v61._Mypair._Myval2._Myres + 1 >= 0x1000 )
      {
        if ( (v61._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
          invalid_parameter_noinfo_noreturn();
        v17 = (char *)*((_QWORD *)v61._Mypair._Myval2._Bx._Ptr - 1);
        if ( v17 >= v61._Mypair._Myval2._Bx._Ptr )
          invalid_parameter_noinfo_noreturn();
        if ( (char *)(v61._Mypair._Myval2._Bx._Ptr - v17) < (char *)8 )
          invalid_parameter_noinfo_noreturn();
        if ( (char *)(v61._Mypair._Myval2._Bx._Ptr - v17) > (char *)0x27 )
          invalid_parameter_noinfo_noreturn();
        v16 = (char *)*((_QWORD *)v61._Mypair._Myval2._Bx._Ptr - 1);
      }
      operator delete(v16);
    }
  }
  extension::AsyncWorker::ToLowerCasePath(&_Keyval, name);
  extension::FutureObjectJobManager<extension::exsound_detail::SoundBankImpl,void>::Stringize(&_Right, v18);
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
  v54 = &extension::BasicFutureObject<OGLCamera,void>::s_cacheManager.extension::ExSimpleLockable<extension::BasicFutureObject<OGLCamera,void>::AssetCache>;
  v55 = 1;
  EnterCriticalSection((LPCRITICAL_SECTION)&extension::BasicFutureObject<OGLCamera,void>::s_cacheManager.extension::ExSimpleLockable<extension::BasicFutureObject<OGLCamera,void>::AssetCache>);
  v25 = (extension::RCWeakPtr<extension::exsound_detail::SoundNameRegistry::NameBuffer> *)std::unordered_map<std::string,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>>::operator[](
                                                                                            (std::unordered_map<std::string,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body>> *)&extension::BasicFutureObject<OGLCamera,void>::s_cacheManager.m_cachedObjectMap,
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
            ((void (__fastcall *)(extension::BasicFutureObject<OGLCamera,void>::Body *, __int64))m_ptr->~RefCountableWeakSupportBase)(
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
    if ( v11 )
    {
      v30 = name->_Mypair._Myval2._Myres < 0x10 ? name : (std::string *)name->_Mypair._Myval2._Bx._Ptr;
      if ( !(unsigned __int8)CFile::exists(v30->_Mypair._Myval2._Bx._Buf) )
      {
        v31 = std::string::substr(name, &v63, 0i64, name->_Mypair._Myval2._Mysize - 3);
        v32 = std::operator+<char>(&v62, v31, "dds");
        std::string::assign(name, v32);
        std::string::~string(&v62);
        std::string::~string(&v63);
        v33 = name->_Mypair._Myval2._Myres < 0x10 ? name : (std::string *)name->_Mypair._Myval2._Bx._Ptr;
        if ( !(unsigned __int8)CFile::exists(v33->_Mypair._Myval2._Bx._Buf) )
        {
          v34 = std::string::substr(name, &v65, 0i64, name->_Mypair._Myval2._Mysize - 3);
          v35 = std::operator+<char>(&v64, v34, "png");
          std::string::assign(name, v35);
          std::string::~string(&v64);
          std::string::~string(&v65);
        }
      }
    }
    v36 = (extension::BasicFutureObject<OGLCamera,void>::Body *)operator new(0x18ui64);
    v52 = v36;
    v38 = extension::FutureObjectJobManager<OGLCamera,void>::LoadStart(&v49, name, &_Right, v37);
    extension::BasicFutureObject<OGLCamera,void>::Body::Body(
      v36,
      (extension::RefCountablePtr<extension::AsyncContent<OGLCamera> >)v38);
    v39 = result->m_ptr;
    result->m_ptr = v40;
    if ( v39
      && _InterlockedExchangeAdd64(
           (volatile signed __int64 *)&v39->m_refCount.m_ptr->m_sharedCount,
           0xFFFFFFFFFFFFFFFFui64) == 1 )
    {
      ((void (__fastcall *)(extension::BasicFutureObject<OGLCamera,void>::Body *, __int64))v39->~RefCountableWeakSupportBase)(
        v39,
        1i64);
    }
    v41 = std::unordered_map<std::string,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>>::operator[](
            (std::unordered_map<std::string,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body>> *)&extension::BasicFutureObject<OGLCamera,void>::s_cacheManager.m_cachedObjectMap,
            &_Keyval);
    v42 = result->m_ptr;
    v47 = result->m_ptr;
    if ( result->m_ptr )
    {
      v6 = (volatile signed __int64 *)v42->m_refCount.m_ptr;
      if ( v6 )
      {
        _InterlockedExchangeAdd64(v6, 1ui64);
        v42 = v47;
      }
    }
    v41->m_ptr = (extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body *)v42;
    block = v41->m_proxy.m_ptr;
    v41->m_proxy.m_ptr = (extension::RefCountableWeakSupportBase::WeakProxy *)v6;
    if ( block && _InterlockedExchangeAdd64((volatile signed __int64 *)block, 0xFFFFFFFFFFFFFFFFui64) == 1 )
      operator delete(block, 0x18ui64);
  }
  Next = extension::BasicFutureObject<OGLCamera,void>::s_cacheManager.m_cachedObjectMap._List._Mypair._Myval2._Myhead->_Next;
  while ( Next != extension::BasicFutureObject<OGLCamera,void>::s_cacheManager.m_cachedObjectMap._List._Mypair._Myval2._Myhead )
  {
    v44._Ptr = (std::_List_node<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >,void *> *)Next;
    v45 = Next->_Myval.second.m_proxy.m_ptr;
    Next = Next->_Next;
    if ( !v45 || !v45->m_sharedCount.m_value._My_val )
      std::_Hash<std::_Umap_traits<std::string,extension::RCWeakPtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body>,std::_Uhash_compare<std::string,std::hash<std::string>,std::equal_to<std::string>>,std::allocator<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body>>>,0>>::erase(
        (std::_Hash<std::_Umap_traits<std::string,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body>,std::_Uhash_compare<std::string,std::hash<std::string >,std::equal_to<std::string > >,std::allocator<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > >,0> > *)&extension::BasicFutureObject<OGLCamera,void>::s_cacheManager.m_cachedObjectMap,
        &v53,
        v44);
  }
  extension::lockable_detail::LockUnlock(
    &extension::BasicFutureObject<OGLCamera,void>::s_cacheManager.extension::ExSimpleLockable<extension::BasicFutureObject<OGLCamera,void>::AssetCache>,
    -1);
  std::string::~string(&_Right);
  std::string::~string(&_Keyval);
  std::string::~string(name);
  return result;
}

extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> *__fastcall extension::AsyncAsset::getExtTexture(
        extension::AsyncAsset *this,
        extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> *result,
        int index)
{
  extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> *v4; // rcx
  __int64 m_ptr; // rax
  char *v6; // rdx
  char v7; // cl
  extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body *v8; // rax
  char v9; // cl
  char v11; // [rsp+20h] [rbp-38h]
  char v12[8]; // [rsp+30h] [rbp-28h] BYREF
  extension::RefCountablePtr<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body> resulta; // [rsp+38h] [rbp-20h] BYREF
  char v14[8]; // [rsp+40h] [rbp-18h] BYREF
  __int64 v15; // [rsp+48h] [rbp-10h]

  if ( index < 0
    || index >= (unsigned __int64)(this->m_extTextures._Mypair._Myval2._Mylast
                                 - this->m_extTextures._Mypair._Myval2._Myfirst) )
  {
    v12[1] = 0;
    extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body::GetSharedEmpty(&resulta);
    v6 = v12;
    v7 = 2;
  }
  else
  {
    v4 = &this->m_extTextures._Mypair._Myval2._Myfirst[index];
    v14[1] = v4->m_isNoCache;
    m_ptr = (__int64)v4->m_body.m_ptr;
    v15 = m_ptr;
    if ( m_ptr )
      _InterlockedExchangeAdd64((volatile signed __int64 *)(*(_QWORD *)(m_ptr + 8) + 16i64), 1ui64);
    v6 = v14;
    v7 = 1;
  }
  result->m_isNoCache = v6[1];
  v8 = (extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body *)*((_QWORD *)v6 + 1);
  result->m_body.m_ptr = v8;
  if ( v8 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)&v8->m_refCount.m_ptr->m_sharedCount, 1ui64);
  v9 = v7 | 4;
  if ( (v9 & 2) != 0 )
  {
    v9 &= ~2u;
    v11 = v9;
    if ( resulta.m_ptr )
    {
      if ( _InterlockedExchangeAdd64(
             (volatile signed __int64 *)&resulta.m_ptr->m_refCount.m_ptr->m_sharedCount,
             0xFFFFFFFFFFFFFFFFui64) == 1 )
        ((void (__fastcall *)(extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body *, __int64))resulta.m_ptr->~RefCountableWeakSupportBase)(
          resulta.m_ptr,
          1i64);
      v9 = v11;
    }
  }
  if ( (v9 & 1) != 0
    && v15
    && _InterlockedExchangeAdd64((volatile signed __int64 *)(*(_QWORD *)(v15 + 8) + 16i64), 0xFFFFFFFFFFFFFFFFui64) == 1 )
  {
    (**(void (__fastcall ***)(__int64, __int64))v15)(v15, 1i64);
  }
  return result;
}

OGLModel *__fastcall extension::AsyncAsset::getModelFromType(extension::AsyncAsset *this, int modelType, int order)
{
  __int64 v3; // rbx
  int v5; // er9
  int *i; // rdx

  v3 = 0i64;
  v5 = 0;
  if ( !(this->m_modelTypes._Mypair._Myval2._Mylast - this->m_modelTypes._Mypair._Myval2._Myfirst) )
    return 0i64;
  for ( i = this->m_modelTypes._Mypair._Myval2._Myfirst; *i != modelType; ++i )
  {
    if ( ++v5 >= (unsigned __int64)(this->m_modelTypes._Mypair._Myval2._Mylast
                                  - this->m_modelTypes._Mypair._Myval2._Myfirst) )
      return 0i64;
  }
  if ( v5 >= 0 && v5 < (int)(this->m_models._Mypair._Myval2._Mylast - this->m_models._Mypair._Myval2._Myfirst) )
    return this->m_models._Mypair._Myval2._Myfirst[v5]._Mypair._Myval2;
  return (OGLModel *)v3;
}

std::string *__fastcall std::numpunct<char>::grouping(std::numpunct<char> *this, std::string *result)
{
  ((void (__fastcall *)(std::numpunct<char> *))this->do_grouping)(this);
  return result;
}

std::string *__fastcall std::string::insert(
        std::string *this,
        unsigned __int64 _Off,
        unsigned __int64 _Count,
        char _Ch)
{
  unsigned __int64 Mysize; // r8
  unsigned __int64 v9; // rdi
  unsigned __int64 Myres; // rax
  std::string *Ptr; // rcx
  std::string *v12; // rax
  size_t v13; // r8
  std::string *v14; // rax
  bool v15; // cf
  std::string *v16; // rax

  Mysize = this->_Mypair._Myval2._Mysize;
  if ( Mysize < _Off )
    std::_Xout_of_range("invalid string position");
  if ( ~Mysize <= _Count )
    std::_Xlength_error("string too long");
  v9 = Mysize + _Count;
  if ( _Count )
  {
    if ( v9 == -1i64 )
      std::_Xlength_error("string too long");
    if ( this->_Mypair._Myval2._Myres >= v9 )
    {
      if ( !v9 )
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
      std::string::_Copy(this, Mysize + _Count, Mysize);
      if ( !v9 )
        return this;
    }
    Myres = this->_Mypair._Myval2._Myres;
    if ( Myres < 0x10 )
      Ptr = this;
    else
      Ptr = (std::string *)this->_Mypair._Myval2._Bx._Ptr;
    if ( Myres < 0x10 )
      v12 = this;
    else
      v12 = (std::string *)this->_Mypair._Myval2._Bx._Ptr;
    v13 = this->_Mypair._Myval2._Mysize - _Off;
    if ( v13 )
      memmove(&v12->_Mypair._Myval2._Bx._Buf[_Off + _Count], &Ptr->_Mypair._Myval2._Bx._Buf[_Off], v13);
    if ( _Count == 1 )
    {
      if ( this->_Mypair._Myval2._Myres < 0x10 )
        this->_Mypair._Myval2._Bx._Buf[_Off] = _Ch;
      else
        this->_Mypair._Myval2._Bx._Ptr[_Off] = _Ch;
    }
    else
    {
      if ( this->_Mypair._Myval2._Myres < 0x10 )
        v14 = this;
      else
        v14 = (std::string *)this->_Mypair._Myval2._Bx._Ptr;
      memset(&v14->_Mypair._Myval2._Bx._Buf[_Off], _Ch, _Count);
    }
    v15 = this->_Mypair._Myval2._Myres < 0x10;
    this->_Mypair._Myval2._Mysize = v9;
    if ( v15 )
      v16 = this;
    else
      v16 = (std::string *)this->_Mypair._Myval2._Bx._Ptr;
    v16->_Mypair._Myval2._Bx._Buf[v9] = 0;
  }
  return this;
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

extension::RefCountablePtr<extension::AsyncContent<extension::AsyncAsset> > *__fastcall extension::FutureObjectJob<extension::AsyncAsset>::releaseContent(
        extension::FutureObjectJob<extension::AsyncAsset> *this,
        extension::RefCountablePtr<extension::AsyncContent<extension::AsyncAsset> > *result)
{
  extension::AsyncContent<extension::AsyncAsset> *m_ptr; // rdx
  extension::AsyncContent<extension::AsyncAsset> *v4; // rbx

  m_ptr = this->m_content.m_ptr;
  result->m_ptr = m_ptr;
  if ( m_ptr )
    _InterlockedExchangeAdd64((volatile signed __int64 *)m_ptr, 1ui64);
  v4 = this->m_content.m_ptr;
  this->m_content.m_ptr = 0i64;
  if ( v4 && _InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFui64) == 1 )
  {
    extension::AsyncContent<extension::AsyncAsset>::~AsyncContent<extension::AsyncAsset>(v4);
    operator delete(v4, 0x68ui64);
  }
  return result;
}

void __fastcall std::vector<char>::resize(std::vector<char> *this, unsigned __int64 _Newsize, const char *_Val)
{
  char *Mylast; // r9
  char *Myfirst; // r8
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // r10
  char *v13; // r8
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // r10
  char *v17; // r8

  Mylast = this->_Mypair._Myval2._Mylast;
  Myfirst = this->_Mypair._Myval2._Myfirst;
  v8 = Mylast - this->_Mypair._Myval2._Myfirst;
  if ( _Newsize >= v8 )
  {
    if ( v8 < _Newsize )
    {
      if ( _Val >= Mylast || Myfirst > _Val )
      {
        v14 = _Newsize - v8;
        if ( this->_Mypair._Myval2._Myend - Mylast < v14 )
        {
          if ( ~v8 < v14 )
            std::_Xlength_error("vector<T> too long");
          v15 = v8 + v14;
          v16 = this->_Mypair._Myval2._Myend - Myfirst;
          v17 = 0i64;
          if ( ~(v16 >> 1) >= v16 )
            v17 = (char *)(v16 + (v16 >> 1));
          if ( (unsigned __int64)v17 >= v15 )
            v15 = (unsigned __int64)v17;
          std::vector<char>::_Reallocate(this, v15);
        }
      }
      else
      {
        v9 = _Val - Myfirst;
        v10 = _Newsize - v8;
        if ( this->_Mypair._Myval2._Myend - Mylast < v10 )
        {
          if ( ~v8 < v10 )
            std::_Xlength_error("vector<T> too long");
          v11 = v8 + v10;
          v12 = this->_Mypair._Myval2._Myend - Myfirst;
          v13 = 0i64;
          if ( ~(v12 >> 1) >= v12 )
            v13 = (char *)(v12 + (v12 >> 1));
          if ( (unsigned __int64)v13 >= v11 )
            v11 = (unsigned __int64)v13;
          std::vector<char>::_Reallocate(this, v11);
        }
        _Val = &this->_Mypair._Myval2._Myfirst[v9];
      }
      memset(
        this->_Mypair._Myval2._Mylast,
        *_Val,
        _Newsize - (this->_Mypair._Myval2._Mylast - this->_Mypair._Myval2._Myfirst));
      this->_Mypair._Myval2._Mylast += _Newsize + this->_Mypair._Myval2._Myfirst - this->_Mypair._Myval2._Mylast;
    }
  }
  else
  {
    this->_Mypair._Myval2._Mylast = &Myfirst[_Newsize];
  }
}

void __fastcall std::vector<extension::future_asset_detail::FutureAssetJob::FileSpec>::resize(
        std::vector<extension::future_asset_detail::FutureAssetJob::FileSpec> *this,
        unsigned __int64 _Newsize)
{
  extension::future_asset_detail::FutureAssetJob::FileSpec *Mylast; // r9
  signed __int64 v5; // r8
  __int64 v6; // rcx
  extension::future_asset_detail::FutureAssetJob::FileSpec *v7; // rbx
  std::_Wrap_alloc<std::allocator<extension::future_asset_detail::FutureAssetJob::FileSpec> > *v8; // r8
  std::integral_constant<bool,0> v9; // r9

  Mylast = this->_Mypair._Myval2._Mylast;
  v5 = (char *)Mylast - (char *)this->_Mypair._Myval2._Myfirst;
  v6 = v5 / 48;
  if ( v5 / 48 <= _Newsize )
  {
    if ( v5 / 48 < _Newsize )
    {
      std::vector<extension::future_asset_detail::FutureAssetJob::FileSpec>::_Reserve(this, _Newsize - v6);
      v8 = (std::_Wrap_alloc<std::allocator<extension::future_asset_detail::FutureAssetJob::FileSpec> > *)(this->_Mypair._Myval2._Mylast - this->_Mypair._Myval2._Myfirst);
      std::_Uninitialized_default_fill_n1<extension::future_asset_detail::FutureAssetJob::FileSpec *,unsigned __int64,std::allocator<extension::future_asset_detail::FutureAssetJob::FileSpec>>(
        this->_Mypair._Myval2._Mylast,
        _Newsize - (_QWORD)v8,
        v8,
        v9);
      this->_Mypair._Myval2._Mylast += _Newsize - (this->_Mypair._Myval2._Mylast - this->_Mypair._Myval2._Myfirst);
    }
  }
  else
  {
    v7 = &Mylast[_Newsize - v6];
    std::_Destroy_range1<std::allocator<extension::future_asset_detail::FutureAssetJob::FileSpec>,extension::future_asset_detail::FutureAssetJob::FileSpec *>(
      v7,
      Mylast,
      (std::_Wrap_alloc<std::allocator<extension::future_asset_detail::FutureAssetJob::FileSpec> > *)v5,
      (std::integral_constant<bool,0>)Mylast);
    this->_Mypair._Myval2._Mylast = v7;
  }
}

void __fastcall std::vector<extension::BasicFutureObject<extension::AsyncFileImage,void>>::resize(
        std::vector<extension::BasicFutureObject<extension::AsyncFileImage,void>> *this,
        unsigned __int64 _Newsize)
{
  extension::BasicFutureObject<extension::AsyncFileImage,void> *Mylast; // r9
  unsigned __int64 v5; // rdx
  extension::BasicFutureObject<extension::AsyncFileImage,void> *Myend; // r8
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // rcx

  Mylast = this->_Mypair._Myval2._Mylast;
  v5 = Mylast - this->_Mypair._Myval2._Myfirst;
  if ( v5 <= _Newsize )
  {
    if ( v5 < _Newsize )
    {
      Myend = this->_Mypair._Myval2._Myend;
      if ( Myend - Mylast < _Newsize - v5 )
      {
        if ( 0xFFFFFFFFFFFFFFFi64 - v5 < _Newsize - v5 )
          std::_Xlength_error("vector<T> too long");
        v7 = _Newsize;
        v8 = Myend - this->_Mypair._Myval2._Myfirst;
        v9 = 0i64;
        if ( 0xFFFFFFFFFFFFFFFi64 - (v8 >> 1) >= v8 )
          v9 = v8 + (v8 >> 1);
        if ( v9 >= _Newsize )
          v7 = v9;
        std::vector<extension::BasicFutureObject<extension::AsyncFileImage,void>>::_Reallocate(this, v7);
      }
      std::_Uninitialized_default_fill_n1<extension::BasicFutureObject<extension::AsyncFileImage,void> *,unsigned __int64,std::allocator<extension::BasicFutureObject<extension::AsyncFileImage,void>>>(
        this->_Mypair._Myval2._Mylast,
        _Newsize - (this->_Mypair._Myval2._Mylast - this->_Mypair._Myval2._Myfirst),
        (std::_Wrap_alloc<std::allocator<extension::BasicFutureObject<extension::AsyncFileImage,void> > > *)Myend,
        (std::integral_constant<bool,0>)Mylast);
      this->_Mypair._Myval2._Mylast += _Newsize - (this->_Mypair._Myval2._Mylast - this->_Mypair._Myval2._Myfirst);
    }
  }
  else
  {
    std::vector<extension::BasicFutureObject<OGLMotion,void>>::_Pop_back_n(
      (std::vector<extension::BasicFutureObject<OGLSecondary,void>> *)this,
      v5 - _Newsize);
  }
}

void __fastcall std::vector<extension::BasicFutureObject<OGLCamera,void>>::resize(
        std::vector<extension::BasicFutureObject<OGLCamera,void>> *this,
        unsigned __int64 _Newsize)
{
  extension::BasicFutureObject<OGLCamera,void> *Mylast; // r9
  unsigned __int64 v5; // rdx
  std::_Wrap_alloc<std::allocator<extension::BasicFutureObject<OGLCamera,void> > > *Myend; // r8
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // r8
  std::_Wrap_alloc<std::allocator<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> > > *v9; // r9
  unsigned __int64 v10; // rcx

  Mylast = this->_Mypair._Myval2._Mylast;
  v5 = Mylast - this->_Mypair._Myval2._Myfirst;
  if ( v5 <= _Newsize )
  {
    if ( v5 < _Newsize )
    {
      Myend = (std::_Wrap_alloc<std::allocator<extension::BasicFutureObject<OGLCamera,void> > > *)this->_Mypair._Myval2._Myend;
      if ( (Myend - (std::_Wrap_alloc<std::allocator<extension::BasicFutureObject<OGLCamera,void> > > *)Mylast) >> 4 < _Newsize - v5 )
      {
        if ( 0xFFFFFFFFFFFFFFFi64 - v5 < _Newsize - v5 )
          std::_Xlength_error("vector<T> too long");
        v7 = _Newsize;
        v8 = (Myend
            - (std::_Wrap_alloc<std::allocator<extension::BasicFutureObject<OGLCamera,void> > > *)this->_Mypair._Myval2._Myfirst) >> 4;
        v9 = (std::_Wrap_alloc<std::allocator<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> > > *)(0xFFFFFFFFFFFFFFFi64 - (v8 >> 1));
        v10 = 0i64;
        if ( (unsigned __int64)v9 >= v8 )
          v10 = v8 + (v8 >> 1);
        if ( v10 >= _Newsize )
          v7 = v10;
        std::vector<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>>::_Reallocate(
          (std::vector<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>> *)this,
          v7,
          v8,
          v9);
      }
      std::_Uninitialized_default_fill_n1<extension::BasicFutureObject<OGLCamera,void> *,unsigned __int64,std::allocator<extension::BasicFutureObject<OGLCamera,void>>>(
        this->_Mypair._Myval2._Mylast,
        _Newsize - (this->_Mypair._Myval2._Mylast - this->_Mypair._Myval2._Myfirst),
        Myend,
        (std::integral_constant<bool,0>)Mylast);
      this->_Mypair._Myval2._Mylast += _Newsize - (this->_Mypair._Myval2._Mylast - this->_Mypair._Myval2._Myfirst);
    }
  }
  else
  {
    std::vector<extension::BasicFutureObject<OGLMotion,void>>::_Pop_back_n(
      (std::vector<extension::BasicFutureObject<OGLSecondary,void>> *)this,
      v5 - _Newsize);
  }
}

void __fastcall std::vector<extension::BasicFutureObject<OGLSecondary,void>>::resize(
        std::vector<extension::BasicFutureObject<OGLSecondary,void>> *this,
        unsigned __int64 _Newsize)
{
  extension::BasicFutureObject<OGLSecondary,void> *Mylast; // r9
  unsigned __int64 v5; // rdx
  std::_Wrap_alloc<std::allocator<extension::BasicFutureObject<OGLSecondary,void> > > *Myend; // r8
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // r8
  std::_Wrap_alloc<std::allocator<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> > > *v9; // r9
  unsigned __int64 v10; // rcx

  Mylast = this->_Mypair._Myval2._Mylast;
  v5 = Mylast - this->_Mypair._Myval2._Myfirst;
  if ( v5 <= _Newsize )
  {
    if ( v5 < _Newsize )
    {
      Myend = (std::_Wrap_alloc<std::allocator<extension::BasicFutureObject<OGLSecondary,void> > > *)this->_Mypair._Myval2._Myend;
      if ( (Myend - (std::_Wrap_alloc<std::allocator<extension::BasicFutureObject<OGLSecondary,void> > > *)Mylast) >> 4 < _Newsize - v5 )
      {
        if ( 0xFFFFFFFFFFFFFFFi64 - v5 < _Newsize - v5 )
          std::_Xlength_error("vector<T> too long");
        v7 = _Newsize;
        v8 = (Myend
            - (std::_Wrap_alloc<std::allocator<extension::BasicFutureObject<OGLSecondary,void> > > *)this->_Mypair._Myval2._Myfirst) >> 4;
        v9 = (std::_Wrap_alloc<std::allocator<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> > > *)(0xFFFFFFFFFFFFFFFi64 - (v8 >> 1));
        v10 = 0i64;
        if ( (unsigned __int64)v9 >= v8 )
          v10 = v8 + (v8 >> 1);
        if ( v10 >= _Newsize )
          v7 = v10;
        std::vector<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>>::_Reallocate(
          (std::vector<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>> *)this,
          v7,
          v8,
          v9);
      }
      std::_Uninitialized_default_fill_n1<extension::BasicFutureObject<OGLSecondary,void> *,unsigned __int64,std::allocator<extension::BasicFutureObject<OGLSecondary,void>>>(
        this->_Mypair._Myval2._Mylast,
        _Newsize - (this->_Mypair._Myval2._Mylast - this->_Mypair._Myval2._Myfirst),
        Myend,
        (std::integral_constant<bool,0>)Mylast);
      this->_Mypair._Myval2._Mylast += _Newsize - (this->_Mypair._Myval2._Mylast - this->_Mypair._Myval2._Myfirst);
    }
  }
  else
  {
    std::vector<extension::BasicFutureObject<OGLMotion,void>>::_Pop_back_n(this, v5 - _Newsize);
  }
}

void __fastcall std::vector<std::unique_ptr<OGLModel>>::resize(
        std::vector<std::unique_ptr<OGLModel>> *this,
        unsigned __int64 _Newsize,
        __int64 a3,
        std::integral_constant<bool,0> a4)
{
  std::unique_ptr<OGLModel> *Mylast; // rsi
  std::unique_ptr<OGLModel> *Myfirst; // r10
  unsigned __int64 v8; // rcx
  std::unique_ptr<OGLModel> *v9; // r14
  std::unique_ptr<OGLModel> *i; // rbx
  unsigned __int64 v11; // rdx
  std::_Wrap_alloc<std::allocator<std::unique_ptr<OGLModel> > > *Myend; // r8
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // r8
  std::_Wrap_alloc<std::allocator<std::unique_ptr<OGLModel> > > *v15; // r9
  unsigned __int64 v16; // rcx

  Mylast = this->_Mypair._Myval2._Mylast;
  Myfirst = this->_Mypair._Myval2._Myfirst;
  v8 = Mylast - this->_Mypair._Myval2._Myfirst;
  if ( _Newsize >= v8 )
  {
    if ( v8 < _Newsize )
    {
      v11 = _Newsize - v8;
      Myend = (std::_Wrap_alloc<std::allocator<std::unique_ptr<OGLModel> > > *)this->_Mypair._Myval2._Myend;
      if ( (Myend - (std::_Wrap_alloc<std::allocator<std::unique_ptr<OGLModel> > > *)Mylast) >> 3 < v11 )
      {
        if ( 0x1FFFFFFFFFFFFFFFi64 - v8 < v11 )
          std::_Xlength_error("vector<T> too long");
        v13 = v8 + v11;
        v14 = (Myend - (std::_Wrap_alloc<std::allocator<std::unique_ptr<OGLModel> > > *)Myfirst) >> 3;
        v15 = (std::_Wrap_alloc<std::allocator<std::unique_ptr<OGLModel> > > *)(0x1FFFFFFFFFFFFFFFi64 - (v14 >> 1));
        v16 = 0i64;
        if ( (unsigned __int64)v15 >= v14 )
          v16 = v14 + (v14 >> 1);
        if ( v16 >= v13 )
          v13 = v16;
        std::vector<std::unique_ptr<OGLModel>>::_Reallocate(this, v13, v14, v15);
      }
      std::_Uninitialized_default_fill_n1<std::unique_ptr<OGLModel> *,unsigned __int64,std::allocator<std::unique_ptr<OGLModel>>>(
        this->_Mypair._Myval2._Mylast,
        _Newsize - (this->_Mypair._Myval2._Mylast - this->_Mypair._Myval2._Myfirst),
        Myend,
        a4);
      this->_Mypair._Myval2._Mylast += _Newsize - (this->_Mypair._Myval2._Mylast - this->_Mypair._Myval2._Myfirst);
    }
  }
  else
  {
    v9 = &Mylast[_Newsize - v8];
    for ( i = v9; i != Mylast; ++i )
    {
      if ( i->_Mypair._Myval2 )
        ((void (__fastcall *)(OGLModel *, __int64))i->_Mypair._Myval2->~AgIThreadHost)(i->_Mypair._Myval2, 1i64);
    }
    this->_Mypair._Myval2._Mylast = v9;
  }
}

unsigned __int64 __fastcall std::string::rfind(
        std::string *this,
        const char *_Ptr,
        unsigned __int64 _Off,
        unsigned __int64 _Count)
{
  unsigned __int64 result; // rax
  std::string *Ptr; // rdi
  __int64 v7; // rax
  std::string *i; // rbx

  result = this->_Mypair._Myval2._Mysize;
  Ptr = this;
  if ( _Count )
  {
    if ( _Count > result )
    {
      return -1i64;
    }
    else
    {
      v7 = result - _Count;
      if ( this->_Mypair._Myval2._Myres >= 0x10 )
        this = (std::string *)this->_Mypair._Myval2._Bx._Ptr;
      for ( i = (std::string *)((char *)this + v7);
            i->_Mypair._Myval2._Bx._Buf[0] != 95 || memcmp(i, "_HAIR", _Count);
            i = (std::string *)((char *)i - 1) )
      {
        if ( i == std::string::c_str(Ptr) )
          return -1i64;
      }
      if ( Ptr->_Mypair._Myval2._Myres >= 0x10 )
        Ptr = (std::string *)Ptr->_Mypair._Myval2._Bx._Ptr;
      return (char *)i - (char *)Ptr;
    }
  }
  return result;
}

__int64 __fastcall extension::future_asset_detail::AsyncAssetModelBuilder::run(
        extension::future_asset_detail::AsyncAssetModelBuilder *this)
{
  extension::AsyncContent<extension::AsyncAsset> *m_ptr; // rax
  extension::AsyncStatus::Step Myres; // edx
  std::unique_ptr<extension::AsyncAsset> *v4; // rax
  extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> *Myfirst; // rbx
  int v6; // er14
  extension::AsyncContent<OGLFigure> *v7; // rdi
  int v8; // eax
  extension::AsyncStatus::Step v9; // edx
  char *v10; // rcx
  char *v11; // rax
  extension::AsyncContent<OGLFigure> *v12; // rbx
  std::unique_ptr<extension::AsyncAsset> *v13; // rax
  extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> *i; // rbx
  extension::AsyncContent<CMediaSound> *v15; // rdi
  int m_errorCode; // eax
  char *Ptr; // rcx
  char *v18; // rax
  extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> *v19; // rbx
  extension::AsyncContent<OGLTexture> *v20; // rdi
  int v21; // eax
  char *v22; // rcx
  char *v23; // rax
  extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> *j; // rbx
  extension::AsyncContent<CMediaSound> *v25; // rdi
  int v26; // eax
  char *v27; // rcx
  char *v28; // rax
  std::vector<extension::BasicFutureObject<OGLCamera,void>> *p_m_cameras; // r15
  extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> *k; // rbx
  extension::AsyncContent<CMediaSound> *v31; // rdi
  int v32; // eax
  std::vector<extension::BasicFutureObject<OGLSecondary,void>> *p_m_secondaries; // r13
  extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> *m; // rbx
  extension::AsyncContent<CMediaSound> *v35; // rdi
  int v36; // eax
  std::unique_ptr<EffectDataListManager> *p_m_effect; // r12
  EffectDataListManager *Myval2; // rbx
  std::unique_ptr<std::tuple<<lambda_224f2aff27d484af60707df2a7dcfac8> >> *v39; // rax
  std::tuple<<lambda_224f2aff27d484af60707df2a7dcfac8> > *v40; // rbx
  std::vector<std::unique_ptr<OGLModel>> *p_m_models; // r14
  __int64 v42; // r8
  std::integral_constant<bool,0> v43; // r9
  extension::AsyncStatus::Step v44; // edx
  extension::AsyncContent<extension::AsyncAsset> *uiModelNo; // rcx
  extension::future_asset_detail::AssetModelInfo *v46; // rbx
  extension::AsyncContent<extension::AsyncAsset> *v47; // rax
  __int64 v48; // r15
  std::unique_ptr<OGLModel> *v49; // rdi
  OGLModel *v50; // rax
  std::unique_ptr<extension::AsyncAsset> *v51; // rax
  std::unique_ptr<extension::AsyncAsset> *v52; // rax
  __int64 v53; // rax
  __int64 v54; // rbx
  extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> **v55; // rdx
  std::vector<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>> *p_m_figures; // r8
  extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> *v57; // rcx
  extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> *v58; // rcx
  extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> *v59; // rcx
  extension::BasicFutureObject<OGLMotion,void> **v60; // rdx
  std::vector<extension::BasicFutureObject<OGLMotion,void>> *p_m_motions; // r8
  extension::BasicFutureObject<OGLMotion,void> *v62; // rcx
  extension::BasicFutureObject<OGLMotion,void> *v63; // rcx
  extension::BasicFutureObject<OGLMotion,void> *v64; // rcx
  extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> **v65; // rdi
  std::vector<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>> *p_m_textures; // rdx
  extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> *v67; // rcx
  extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> *v68; // rcx
  extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> *v69; // rcx
  extension::BasicFutureObject<OGLMirror,void> **v70; // rdx
  std::vector<extension::BasicFutureObject<OGLMirror,void>> *p_m_mirrors; // r8
  extension::BasicFutureObject<OGLMirror,void> *v72; // rcx
  extension::BasicFutureObject<OGLMirror,void> *v73; // rcx
  extension::BasicFutureObject<OGLMirror,void> *v74; // rcx
  extension::BasicFutureObject<OGLCamera,void> **v75; // rdx
  extension::BasicFutureObject<OGLCamera,void> *v76; // rcx
  extension::BasicFutureObject<OGLCamera,void> *v77; // rcx
  extension::BasicFutureObject<OGLCamera,void> *v78; // rcx
  extension::BasicFutureObject<OGLSecondary,void> **v79; // rdx
  extension::BasicFutureObject<OGLSecondary,void> *v80; // rcx
  extension::BasicFutureObject<OGLSecondary,void> *v81; // rcx
  extension::BasicFutureObject<OGLSecondary,void> *v82; // rcx
  std::unique_ptr<OGLModel> **v83; // rdx
  std::unique_ptr<OGLModel> *v84; // rcx
  std::unique_ptr<OGLModel> *v85; // rcx
  std::unique_ptr<OGLModel> *v86; // rcx
  EffectDataListManager **v87; // rdx
  EffectDataListManager *v88; // rax
  EffectDataListManager *v89; // rcx
  extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> *n; // rdi
  const std::string *v91; // rax
  std::string *v92; // rax
  char *v93; // rax
  unsigned __int64 v94; // rax
  int v95; // er9
  __int64 v96; // rdx
  __int64 v97; // r8
  extension::AsyncAsset *v98; // rax
  std::unique_ptr<extension::AsyncAsset> v100; // [rsp+28h] [rbp-E0h] BYREF
  _Thrd_imp_t _Thr_8; // [rsp+38h] [rbp-D0h] BYREF
  char v102[8]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v103; // [rsp+50h] [rbp-B8h] BYREF
  std::unique_ptr<std::tuple<<lambda_224f2aff27d484af60707df2a7dcfac8> >> v104; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v105; // [rsp+60h] [rbp-A8h]
  char v106[8]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v107[3]; // [rsp+70h] [rbp-98h] BYREF
  _Thrd_imp_t v108; // [rsp+88h] [rbp-80h] BYREF
  std::string v109; // [rsp+98h] [rbp-70h] BYREF
  std::string _Right; // [rsp+B8h] [rbp-50h] BYREF
  extension::future_asset_detail::AsyncAssetModelBuilder::run::__l2::<lambda_224f2aff27d484af60707df2a7dcfac8> v111; // [rsp+D8h] [rbp-30h] BYREF
  std::string result; // [rsp+100h] [rbp-8h] BYREF
  std::string v113; // [rsp+120h] [rbp+18h] BYREF
  std::string v114; // [rsp+140h] [rbp+38h] BYREF
  std::string v115; // [rsp+160h] [rbp+58h] BYREF
  std::string v116; // [rsp+180h] [rbp+78h] BYREF
  std::string v117; // [rsp+1A0h] [rbp+98h] BYREF
  std::string v118; // [rsp+1C0h] [rbp+B8h] BYREF

  v107[1] = -2i64;
  m_ptr = this->m_content.m_ptr;
  if ( m_ptr && (m_ptr->m_status.m_stateFlags.m_value._My_val & 2) != 0
    || (Myres = 16, v105 = *(_QWORD *)NtCurrentTeb()->Reserved1[11] + 16i64, *(_QWORD *)v105)
    && (*(_QWORD *)(*(_QWORD *)v105 + 8i64) & 0x100i64) != 0 )
  {
    if ( this->m_content.m_ptr )
    {
      v4 = this->createOnErrorData(this, v102);
      extension::AsyncContent<extension::AsyncAsset>::setErrorResultWithData(
        this->m_content.m_ptr,
        4,
        (std::unique_ptr<extension::AsyncAsset>)v4);
    }
  }
  else
  {
    Myfirst = this->m_figures._Mypair._Myval2._Myfirst;
    v6 = 0;
    if ( Myfirst == this->m_figures._Mypair._Myval2._Mylast )
    {
LABEL_36:
      for ( i = (extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> *)this->m_motions._Mypair._Myval2._Myfirst;
            i != (extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> *)this->m_motions._Mypair._Myval2._Mylast;
            ++i )
      {
        v15 = i->m_body.m_ptr->m_content.m_ptr;
        if ( !v15 || v15->m_isDataReleased )
        {
          m_errorCode = 0;
        }
        else
        {
          if ( (v15->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
            extension::AsyncStatus::waitFor(&v15->m_status, Myres);
          m_errorCode = v15->m_errorCode;
        }
        if ( m_errorCode )
        {
          extension::BasicFutureObject<OGLSecondary,void>::contentPath(i, &v113);
          _DummyLogging("asset motion [%s] load failed.");
          if ( v113._Mypair._Myval2._Myres >= 0x10 )
          {
            Ptr = v113._Mypair._Myval2._Bx._Ptr;
            if ( v113._Mypair._Myval2._Myres + 1 >= 0x1000 )
            {
              if ( (v113._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
                invalid_parameter_noinfo_noreturn();
              v18 = (char *)*((_QWORD *)v113._Mypair._Myval2._Bx._Ptr - 1);
              if ( v18 >= v113._Mypair._Myval2._Bx._Ptr )
                invalid_parameter_noinfo_noreturn();
              if ( (char *)(v113._Mypair._Myval2._Bx._Ptr - v18) < (char *)8 )
                invalid_parameter_noinfo_noreturn();
              if ( (char *)(v113._Mypair._Myval2._Bx._Ptr - v18) > (char *)0x27 )
                invalid_parameter_noinfo_noreturn();
              Ptr = (char *)*((_QWORD *)v113._Mypair._Myval2._Bx._Ptr - 1);
            }
            operator delete(Ptr);
          }
        }
      }
      v19 = this->m_textures._Mypair._Myval2._Myfirst;
      if ( v19 == this->m_textures._Mypair._Myval2._Mylast )
      {
LABEL_80:
        for ( j = (extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> *)this->m_mirrors._Mypair._Myval2._Myfirst;
              j != (extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> *)this->m_mirrors._Mypair._Myval2._Mylast;
              ++j )
        {
          v25 = j->m_body.m_ptr->m_content.m_ptr;
          if ( !v25 || v25->m_isDataReleased )
          {
            v26 = 0;
          }
          else
          {
            if ( (v25->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
              extension::AsyncStatus::waitFor(&v25->m_status, Myres);
            v26 = v25->m_errorCode;
          }
          if ( v26 )
          {
            extension::BasicFutureObject<OGLSecondary,void>::contentPath(j, &v115);
            _DummyLogging("asset mirror [%s] load failed.");
            if ( v115._Mypair._Myval2._Myres >= 0x10 )
            {
              v27 = v115._Mypair._Myval2._Bx._Ptr;
              if ( v115._Mypair._Myval2._Myres + 1 >= 0x1000 )
              {
                if ( (v115._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
                  invalid_parameter_noinfo_noreturn();
                v28 = (char *)*((_QWORD *)v115._Mypair._Myval2._Bx._Ptr - 1);
                if ( v28 >= v115._Mypair._Myval2._Bx._Ptr )
                  invalid_parameter_noinfo_noreturn();
                if ( (char *)(v115._Mypair._Myval2._Bx._Ptr - v28) < (char *)8 )
                  invalid_parameter_noinfo_noreturn();
                if ( (char *)(v115._Mypair._Myval2._Bx._Ptr - v28) > (char *)0x27 )
                  invalid_parameter_noinfo_noreturn();
                v27 = (char *)*((_QWORD *)v115._Mypair._Myval2._Bx._Ptr - 1);
              }
              operator delete(v27);
            }
          }
        }
        p_m_cameras = &this->m_cameras;
        for ( k = (extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> *)this->m_cameras._Mypair._Myval2._Myfirst;
              k != (extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> *)this->m_cameras._Mypair._Myval2._Mylast;
              ++k )
        {
          v31 = k->m_body.m_ptr->m_content.m_ptr;
          if ( !v31 || v31->m_isDataReleased )
          {
            v32 = 0;
          }
          else
          {
            if ( (v31->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
              extension::AsyncStatus::waitFor(&v31->m_status, Myres);
            v32 = v31->m_errorCode;
          }
          if ( v32 )
          {
            extension::BasicFutureObject<OGLSecondary,void>::contentPath(k, &v116);
            _DummyLogging("asset camera [%s] load failed.");
            Myres = v116._Mypair._Myval2._Myres;
            if ( v116._Mypair._Myval2._Myres >= 0x10 )
              std::_Deallocate(v116._Mypair._Myval2._Bx._Ptr, v116._Mypair._Myval2._Myres + 1, 1ui64);
          }
        }
        p_m_secondaries = &this->m_secondaries;
        for ( m = (extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> *)this->m_secondaries._Mypair._Myval2._Myfirst;
              m != (extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> *)this->m_secondaries._Mypair._Myval2._Mylast;
              ++m )
        {
          v35 = m->m_body.m_ptr->m_content.m_ptr;
          if ( !v35 || v35->m_isDataReleased )
          {
            v36 = 0;
          }
          else
          {
            if ( (v35->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
              extension::AsyncStatus::waitFor(&v35->m_status, Myres);
            v36 = v35->m_errorCode;
          }
          if ( v36 )
          {
            extension::BasicFutureObject<OGLSecondary,void>::contentPath(m, &v117);
            _DummyLogging("asset secondary [%s] load failed.");
            std::string::~string(&v117);
          }
        }
        _Right._Mypair._Myval2._Myres = 15i64;
        _Right._Mypair._Myval2._Mysize = 0i64;
        _Right._Mypair._Myval2._Bx._Buf[0] = 0;
        std::string::assign(&_Right, &this->m_effPath, 0i64, 0xFFFFFFFFFFFFFFFFui64);
        p_m_effect = &this->m_effect;
        Myval2 = this->m_effect._Mypair._Myval2;
        v111.effPath._Mypair._Myval2._Myres = 15i64;
        v111.effPath._Mypair._Myval2._Mysize = 0i64;
        v111.effPath._Mypair._Myval2._Bx._Buf[0] = 0;
        std::string::assign(&v111.effPath, &_Right, 0i64, 0xFFFFFFFFFFFFFFFFui64);
        v111.effect = Myval2;
        v39 = std::make_unique<std::tuple<_lambda_224f2aff27d484af60707df2a7dcfac8_>,_lambda_224f2aff27d484af60707df2a7dcfac8_>(
                &v104,
                &v111);
        std::_Launch<std::unique_ptr<std::tuple<_lambda_224f2aff27d484af60707df2a7dcfac8_>>>(&_Thr_8, v39);
        v40 = v104._Mypair._Myval2;
        if ( v104._Mypair._Myval2 )
        {
          std::string::~string(&v104._Mypair._Myval2->_Myfirst._Val.effPath);
          operator delete(v40, 0x28ui64);
        }
        std::string::~string(&v111.effPath);
        p_m_models = &this->m_models;
        std::vector<std::unique_ptr<OGLModel>>::resize(
          &this->m_models,
          this->m_modelInfos._Mypair._Myval2._Mylast - this->m_modelInfos._Mypair._Myval2._Myfirst,
          v42,
          v43);
        v46 = this->m_modelInfos._Mypair._Myval2._Myfirst;
        if ( v46 == this->m_modelInfos._Mypair._Myval2._Mylast )
        {
LABEL_142:
          extension::future_asset_detail::AsyncAssetModelBuilder::applyShaderFx(this, v44);
          if ( !_Thr_8._Id )
            std::_Throw_Cpp_error(1);
          if ( _Thr_8._Id == Concurrency::details::platform::GetCurrentThreadId() )
            std::_Throw_Cpp_error(5);
          v108 = _Thr_8;
          if ( Thrd_join(&v108, 0i64) )
            std::_Throw_Cpp_error(2);
          _Thr_8._Hnd = 0i64;
          _Thr_8._Id = 0;
          v100._Mypair._Myval2 = (extension::AsyncAsset *)operator new(0x100ui64);
          extension::AsyncAsset::AsyncAsset(v100._Mypair._Myval2);
          v54 = v53;
          v107[2] = v53;
          v55 = (extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> **)(v53 + 32);
          p_m_figures = &this->m_figures;
          if ( (std::vector<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>> *)(v53 + 32) != &this->m_figures )
          {
            v57 = *v55;
            *v55 = p_m_figures->_Mypair._Myval2._Myfirst;
            p_m_figures->_Mypair._Myval2._Myfirst = v57;
            v58 = *(extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> **)(v53 + 40);
            *(_QWORD *)(v53 + 40) = this->m_figures._Mypair._Myval2._Mylast;
            this->m_figures._Mypair._Myval2._Mylast = v58;
            v59 = *(extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> **)(v53 + 48);
            *(_QWORD *)(v53 + 48) = this->m_figures._Mypair._Myval2._Myend;
            this->m_figures._Mypair._Myval2._Myend = v59;
          }
          v60 = (extension::BasicFutureObject<OGLMotion,void> **)(v53 + 56);
          p_m_motions = &this->m_motions;
          if ( (std::vector<extension::BasicFutureObject<OGLMotion,void>> *)(v53 + 56) != &this->m_motions )
          {
            v62 = *v60;
            *v60 = p_m_motions->_Mypair._Myval2._Myfirst;
            p_m_motions->_Mypair._Myval2._Myfirst = v62;
            v63 = *(extension::BasicFutureObject<OGLMotion,void> **)(v53 + 64);
            *(_QWORD *)(v53 + 64) = this->m_motions._Mypair._Myval2._Mylast;
            this->m_motions._Mypair._Myval2._Mylast = v63;
            v64 = *(extension::BasicFutureObject<OGLMotion,void> **)(v53 + 72);
            *(_QWORD *)(v53 + 72) = this->m_motions._Mypair._Myval2._Myend;
            this->m_motions._Mypair._Myval2._Myend = v64;
          }
          v65 = (extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> **)(v53 + 80);
          p_m_textures = &this->m_textures;
          if ( (std::vector<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>> *)(v53 + 80) != &this->m_textures )
          {
            v67 = *v65;
            *v65 = (extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> *)p_m_textures->_Mypair._Myval2._Myfirst;
            p_m_textures->_Mypair._Myval2._Myfirst = (extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> *)v67;
            v68 = *(extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> **)(v53 + 88);
            *(_QWORD *)(v53 + 88) = this->m_textures._Mypair._Myval2._Mylast;
            this->m_textures._Mypair._Myval2._Mylast = v68;
            v69 = *(extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> **)(v53 + 96);
            *(_QWORD *)(v53 + 96) = this->m_textures._Mypair._Myval2._Myend;
            this->m_textures._Mypair._Myval2._Myend = v69;
          }
          v70 = (extension::BasicFutureObject<OGLMirror,void> **)(v53 + 128);
          p_m_mirrors = &this->m_mirrors;
          if ( (std::vector<extension::BasicFutureObject<OGLMirror,void>> *)(v53 + 128) != &this->m_mirrors )
          {
            v72 = *v70;
            *v70 = p_m_mirrors->_Mypair._Myval2._Myfirst;
            p_m_mirrors->_Mypair._Myval2._Myfirst = v72;
            v73 = *(extension::BasicFutureObject<OGLMirror,void> **)(v53 + 136);
            *(_QWORD *)(v53 + 136) = this->m_mirrors._Mypair._Myval2._Mylast;
            this->m_mirrors._Mypair._Myval2._Mylast = v73;
            v74 = *(extension::BasicFutureObject<OGLMirror,void> **)(v53 + 144);
            *(_QWORD *)(v53 + 144) = this->m_mirrors._Mypair._Myval2._Myend;
            this->m_mirrors._Mypair._Myval2._Myend = v74;
          }
          v75 = (extension::BasicFutureObject<OGLCamera,void> **)(v53 + 152);
          if ( (std::vector<extension::BasicFutureObject<OGLCamera,void>> *)(v53 + 152) != p_m_cameras )
          {
            v76 = *v75;
            *v75 = p_m_cameras->_Mypair._Myval2._Myfirst;
            p_m_cameras->_Mypair._Myval2._Myfirst = v76;
            v77 = *(extension::BasicFutureObject<OGLCamera,void> **)(v53 + 160);
            *(_QWORD *)(v53 + 160) = p_m_cameras->_Mypair._Myval2._Mylast;
            p_m_cameras->_Mypair._Myval2._Mylast = v77;
            v78 = *(extension::BasicFutureObject<OGLCamera,void> **)(v53 + 168);
            *(_QWORD *)(v53 + 168) = p_m_cameras->_Mypair._Myval2._Myend;
            p_m_cameras->_Mypair._Myval2._Myend = v78;
          }
          v79 = (extension::BasicFutureObject<OGLSecondary,void> **)(v53 + 176);
          if ( (std::vector<extension::BasicFutureObject<OGLSecondary,void>> *)(v53 + 176) != p_m_secondaries )
          {
            v80 = *v79;
            *v79 = p_m_secondaries->_Mypair._Myval2._Myfirst;
            p_m_secondaries->_Mypair._Myval2._Myfirst = v80;
            v81 = *(extension::BasicFutureObject<OGLSecondary,void> **)(v53 + 184);
            *(_QWORD *)(v53 + 184) = this->m_secondaries._Mypair._Myval2._Mylast;
            this->m_secondaries._Mypair._Myval2._Mylast = v81;
            v82 = *(extension::BasicFutureObject<OGLSecondary,void> **)(v53 + 192);
            *(_QWORD *)(v53 + 192) = this->m_secondaries._Mypair._Myval2._Myend;
            this->m_secondaries._Mypair._Myval2._Myend = v82;
          }
          v83 = (std::unique_ptr<OGLModel> **)(v53 + 200);
          if ( (std::vector<std::unique_ptr<OGLModel>> *)(v53 + 200) != p_m_models )
          {
            v84 = *v83;
            *v83 = p_m_models->_Mypair._Myval2._Myfirst;
            p_m_models->_Mypair._Myval2._Myfirst = v84;
            v85 = *(std::unique_ptr<OGLModel> **)(v53 + 208);
            *(_QWORD *)(v53 + 208) = this->m_models._Mypair._Myval2._Mylast;
            this->m_models._Mypair._Myval2._Mylast = v85;
            v86 = *(std::unique_ptr<OGLModel> **)(v53 + 216);
            *(_QWORD *)(v53 + 216) = this->m_models._Mypair._Myval2._Myend;
            this->m_models._Mypair._Myval2._Myend = v86;
          }
          v87 = (EffectDataListManager **)(v53 + 224);
          if ( (std::unique_ptr<EffectDataListManager> *)(v53 + 224) != p_m_effect )
          {
            v88 = p_m_effect->_Mypair._Myval2;
            p_m_effect->_Mypair._Myval2 = 0i64;
            v89 = *v87;
            *v87 = v88;
            if ( v89 )
              ((void (__fastcall *)(EffectDataListManager *, __int64))v89->~EffectDataListManager)(v89, 1i64);
          }
          std::vector<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>>::resize(
            (std::vector<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>> *)(v54 + 104),
            0xAui64);
          for ( n = *v65;
                n != *(extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> **)(v54 + 88);
                ++n )
          {
            v91 = extension::BasicFutureObject<OGLSecondary,void>::contentPath(n, &v118);
            extension::AsyncWorker::ExtractAssetBaseName(&v109, v91);
            std::string::~string(&v118);
            if ( !std::string::find(&v109, "EXT", 0i64, 3ui64) )
            {
              v92 = &v109;
              if ( v109._Mypair._Myval2._Myres >= 0x10 )
                v92 = (std::string *)v109._Mypair._Myval2._Bx._Ptr;
              v93 = strchr("0123456789", v92->_Mypair._Myval2._Bx._Buf[3]);
              if ( v93 )
              {
                v94 = v93 - "0123456789";
                if ( v94 < (__int64)(*(_QWORD *)(v54 + 112) - *(_QWORD *)(v54 + 104)) >> 4 )
                  extension::BasicFutureObject<OGLSecondary,void>::operator=(
                    (extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> *)(*(_QWORD *)(v54 + 104)
                                                                                                  + 16 * v94),
                    (const extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> *)n);
              }
            }
            std::string::~string(&v109);
          }
          std::vector<float>::resize(
            (std::vector<float> *)(v54 + 232),
            this->m_modelInfos._Mypair._Myval2._Mylast - this->m_modelInfos._Mypair._Myval2._Myfirst);
          v95 = 0;
          if ( (__int64)(*(_QWORD *)(v54 + 240) - *(_QWORD *)(v54 + 232)) >> 2 )
          {
            v96 = 0i64;
            v97 = 0i64;
            do
            {
              *(_DWORD *)(v96 + *(_QWORD *)(v54 + 232)) = this->m_modelInfos._Mypair._Myval2._Myfirst[v97].modelSpec.iTypeNo;
              ++v95;
              ++v97;
              v96 += 4i64;
            }
            while ( v95 < (unsigned __int64)((__int64)(*(_QWORD *)(v54 + 240) - *(_QWORD *)(v54 + 232)) >> 2) );
          }
          uiModelNo = this->m_content.m_ptr;
          if ( uiModelNo )
          {
            v98 = (extension::AsyncAsset *)v54;
            v54 = 0i64;
            v100._Mypair._Myval2 = v98;
            extension::AsyncContent<extension::AsyncAsset>::setResult(
              uiModelNo,
              (std::unique_ptr<extension::AsyncAsset>)&v100);
          }
          if ( v54 )
          {
            extension::AsyncAsset::~AsyncAsset((extension::AsyncAsset *)v54);
            operator delete((void *)v54, 0x100ui64);
          }
        }
        else
        {
          while ( 1 )
          {
            v47 = this->m_content.m_ptr;
            if ( v47 )
            {
              if ( (v47->m_status.m_stateFlags.m_value._My_val & 2) != 0 )
                break;
            }
            if ( *(_QWORD *)v105 && (*(_QWORD *)(*(_QWORD *)v105 + 8i64) & 0x100i64) != 0 )
              break;
            uiModelNo = (extension::AsyncContent<extension::AsyncAsset> *)(int)v46->modelSpec.uiModelNo;
            if ( (int)uiModelNo >= 0
              && (unsigned __int64)uiModelNo < this->m_models._Mypair._Myval2._Mylast
                                             - this->m_models._Mypair._Myval2._Myfirst )
            {
              v48 = (__int64)uiModelNo;
              v49 = p_m_models->_Mypair._Myval2._Myfirst;
              v50 = extension::future_asset_detail::AsyncAssetModelBuilder::buildModel(this, v46);
              uiModelNo = (extension::AsyncContent<extension::AsyncAsset> *)v49[v48]._Mypair._Myval2;
              v49[v48]._Mypair._Myval2 = v50;
              if ( uiModelNo )
                (*(void (__fastcall **)(extension::AsyncContent<extension::AsyncAsset> *, __int64))uiModelNo->m_refCount.m_value._My_val)(
                  uiModelNo,
                  1i64);
              if ( !p_m_models->_Mypair._Myval2._Myfirst[v48]._Mypair._Myval2 )
              {
                if ( this->m_content.m_ptr )
                {
                  v52 = this->createOnErrorData(this, v107);
                  extension::AsyncContent<extension::AsyncAsset>::setErrorResultWithData(
                    this->m_content.m_ptr,
                    2,
                    (std::unique_ptr<extension::AsyncAsset>)v52);
                }
                goto LABEL_180;
              }
            }
            if ( ++v46 == this->m_modelInfos._Mypair._Myval2._Mylast )
            {
              p_m_cameras = &this->m_cameras;
              goto LABEL_142;
            }
          }
          if ( this->m_content.m_ptr )
          {
            v51 = this->createOnErrorData(this, v106);
            extension::AsyncContent<extension::AsyncAsset>::setErrorResultWithData(
              this->m_content.m_ptr,
              4,
              (std::unique_ptr<extension::AsyncAsset>)v51);
          }
        }
LABEL_180:
        if ( _Thr_8._Id )
          terminate((Effect *)uiModelNo);
        std::string::~string(&_Right);
      }
      else
      {
        while ( 1 )
        {
          v20 = v19->m_body.m_ptr->m_content.m_ptr;
          if ( !v20 || v20->m_isDataReleased )
          {
            v21 = 0;
          }
          else
          {
            if ( (v20->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
              extension::AsyncStatus::waitFor(&v20->m_status, Myres);
            v21 = v20->m_errorCode;
          }
          if ( v21 )
            break;
          if ( ++v19 == this->m_textures._Mypair._Myval2._Mylast )
            goto LABEL_80;
        }
        extension::BasicFutureObject<OGLSecondary,void>::contentPath(
          (extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> *)v19,
          &v114);
        _DummyLogging("asset texture [%s] load failed.");
        if ( v114._Mypair._Myval2._Myres >= 0x10 )
        {
          v22 = v114._Mypair._Myval2._Bx._Ptr;
          if ( v114._Mypair._Myval2._Myres + 1 >= 0x1000 )
          {
            if ( (v114._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
              invalid_parameter_noinfo_noreturn();
            v23 = (char *)*((_QWORD *)v114._Mypair._Myval2._Bx._Ptr - 1);
            if ( v23 >= v114._Mypair._Myval2._Bx._Ptr )
              invalid_parameter_noinfo_noreturn();
            if ( (char *)(v114._Mypair._Myval2._Bx._Ptr - v23) < (char *)8 )
              invalid_parameter_noinfo_noreturn();
            if ( (char *)(v114._Mypair._Myval2._Bx._Ptr - v23) > (char *)0x27 )
              invalid_parameter_noinfo_noreturn();
            v22 = (char *)*((_QWORD *)v114._Mypair._Myval2._Bx._Ptr - 1);
          }
          operator delete(v22);
        }
      }
    }
    else
    {
      while ( 1 )
      {
        v7 = Myfirst->m_body.m_ptr->m_content.m_ptr;
        if ( !v7 || v7->m_isDataReleased )
        {
          v8 = 0;
        }
        else
        {
          if ( (v7->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
            extension::AsyncStatus::waitFor(&v7->m_status, Myres);
          v8 = v7->m_errorCode;
        }
        if ( v8 )
          break;
        if ( ++Myfirst == this->m_figures._Mypair._Myval2._Mylast )
          goto LABEL_36;
      }
      extension::BasicFutureObject<OGLSecondary,void>::contentPath(
        (extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> *)Myfirst,
        &result);
      _DummyLogging("asset fiture [%s] load failed.");
      if ( result._Mypair._Myval2._Myres >= 0x10 )
      {
        v10 = result._Mypair._Myval2._Bx._Ptr;
        if ( result._Mypair._Myval2._Myres + 1 >= 0x1000 )
        {
          if ( (result._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
            invalid_parameter_noinfo_noreturn();
          v11 = (char *)*((_QWORD *)result._Mypair._Myval2._Bx._Ptr - 1);
          if ( v11 >= result._Mypair._Myval2._Bx._Ptr )
            invalid_parameter_noinfo_noreturn();
          if ( (char *)(result._Mypair._Myval2._Bx._Ptr - v11) < (char *)8 )
            invalid_parameter_noinfo_noreturn();
          if ( (char *)(result._Mypair._Myval2._Bx._Ptr - v11) > (char *)0x27 )
            invalid_parameter_noinfo_noreturn();
          v10 = (char *)*((_QWORD *)result._Mypair._Myval2._Bx._Ptr - 1);
        }
        operator delete(v10);
      }
      v12 = Myfirst->m_body.m_ptr->m_content.m_ptr;
      if ( v12 && !v12->m_isDataReleased )
      {
        if ( (v12->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
          extension::AsyncStatus::waitFor(&v12->m_status, v9);
        v6 = v12->m_errorCode;
      }
      if ( this->m_content.m_ptr )
      {
        v13 = this->createOnErrorData(this, &v103);
        extension::AsyncContent<extension::AsyncAsset>::setErrorResultWithData(
          this->m_content.m_ptr,
          v6,
          (std::unique_ptr<extension::AsyncAsset>)v13);
      }
    }
  }
  return 0i64;
}

__int64 __fastcall extension::future_asset_detail::FutureAssetJob::run(
        extension::future_asset_detail::FutureAssetJob *this)
{
  extension::AsyncContent<extension::AsyncAsset> *m_ptr; // rax
  __int64 v3; // rax
  std::unique_ptr<extension::AsyncAsset> *v4; // rax
  const std::string *p_m_name; // rdx
  int m_errorCode; // er14
  extension::BasicFutureObject<extension::AsyncFileImage,void>::AssetCache *v7; // rcx
  const void *v8; // r9
  unsigned __int64 v9; // rdx
  extension::BasicFutureObject<extension::AsyncFileImage,void>::Body *v10; // rcx
  extension::AsyncContent<extension::AsyncFileImage> *v11; // rbx
  extension::AsyncContent<extension::AsyncFileImage> *v12; // rbx
  std::unique_ptr<extension::AsyncAsset> *v13; // rax
  int v14; // edx
  extension::AsyncContent<extension::AsyncFileImage> *v15; // rbx
  extension::AsyncContent<extension::AsyncFileImage> *v16; // rbx
  extension::AsyncFileImage *Myval2; // rdi
  unsigned __int8 *pData; // rdi
  extension::AsyncContent<extension::AsyncFileImage> *v19; // rbx
  unsigned int *v20; // rax
  unsigned int m_uiSize; // esi
  __int64 v22; // rbx
  int v23; // edx
  int v24; // edx
  __int64 v25; // r15
  extension::future_asset_detail::FutureAssetJob::FileSpec *Myfirst; // r12
  int v27; // edx
  int v28; // er15
  char *v29; // r13
  std::string *p_result; // rcx
  char *v31; // rax
  int v32; // edx
  unsigned __int64 uiFileType; // rcx
  __int64 v34; // r13
  int v35; // edx
  unsigned int m_uiPoint; // ebx
  signed __int64 Int; // r15
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r9
  int *p_iMotionNo; // r10
  int v42; // er11
  int v43; // er11
  int v44; // er11
  int v45; // er11
  int v46; // er11
  int v47; // er11
  int v48; // er11
  int v49; // er11
  int v50; // er11
  int v51; // er11
  int v52; // er11
  int v53; // er11
  int v54; // er11
  int v55; // er11
  int v56; // er11
  int v57; // er11
  int v58; // edx
  __int64 v59; // rbx
  unsigned __int64 v60; // r8
  int v61; // edx
  unsigned __int64 v62; // rdx
  __int64 v63; // r12
  EffectDataListManager *v64; // r11
  extension::future_asset_detail::AssetMaterialSpec *v65; // r15
  int v66; // er13
  int v67; // ecx
  unsigned int v68; // er13
  char *v69; // rax
  unsigned __int64 v70; // rdx
  char *v71; // rcx
  __int64 v72; // rdx
  __int64 v73; // r8
  unsigned __int8 v74; // cl
  char *v75; // rcx
  int v76; // edx
  __int64 v77; // r9
  int *iColorNo; // r8
  __int64 v79; // r10
  int v80; // edx
  int v81; // edx
  int v82; // edx
  int v83; // edx
  int v84; // edx
  int v85; // edx
  int v86; // edx
  __int64 v87; // r9
  int *v88; // r8
  __int64 v89; // r10
  int v90; // edx
  int v91; // edx
  int v92; // edx
  int v93; // edx
  int v94; // edx
  int v95; // edx
  int v96; // edx
  __int64 v97; // r9
  int *v98; // r8
  __int64 v99; // r10
  int v100; // eax
  int v101; // edx
  int v102; // edx
  int v103; // edx
  int v104; // edx
  int v105; // edx
  int *v106; // rsi
  int *v107; // r15
  extension::FutureObjectJob<extension::AsyncAsset> *v108; // r12
  int *p_iFileTypeIndex; // rbx
  volatile int m_abort; // edx
  std::_Wrap_alloc<std::allocator<extension::FutureAssetOptionFileSetting> > *v111; // r8
  const void *v112; // r9
  extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::AssetCache *v113; // rcx
  __int64 v114; // rdx
  std::_Wrap_alloc<std::allocator<extension::FutureAssetOptionFileSetting> > *v115; // r8
  std::integral_constant<bool,0> v116; // r9
  extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body *v117; // rcx
  int *p_iMotionCommonNo; // rcx
  std::string *v119; // rax
  const extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> *v120; // rax
  void (__fastcall ***v121)(void *, __int64); // rcx
  const char *v122; // rdx
  unsigned __int64 v123; // r8
  int v124; // edi
  __int64 v125; // rsi
  extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::AssetCache *v126; // rcx
  extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body *v127; // rcx
  extension::BasicFutureObject<OGLMirror,void>::AssetCache *v128; // rcx
  const void *v129; // r9
  std::string *v130; // rax
  extension::BasicFutureObject<OGLCamera,void>::AssetCache *v131; // rcx
  const void *v132; // r9
  extension::BasicFutureObject<extension::AsyncFileImage,void>::AssetCache *v133; // rcx
  const void *v134; // r9
  EffectDataListManager *v135; // rax
  std::string *v136; // rax
  const extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> *v137; // rax
  extension::AsyncContent<extension::AsyncFileImage> *v138; // rax
  extension::future_asset_detail::AsyncAssetModelBuilder *v139; // rbx
  extension::RefCountablePtr<extension::AsyncContent<extension::AsyncAsset> > *v140; // rax
  __int64 v141; // rax
  __int64 v142; // rbx
  __int64 *v143; // r8
  extension::future_asset_detail::AssetModelInfo *v144; // rdx
  extension::future_asset_detail::AssetModelInfo *v145; // rcx
  extension::future_asset_detail::AssetModelInfo *v146; // rcx
  __int64 *v147; // rdx
  extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> *v148; // rcx
  extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> *v149; // rcx
  extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> *v150; // rcx
  __int64 *v151; // rdx
  extension::BasicFutureObject<OGLMotion,void> *v152; // rcx
  extension::BasicFutureObject<OGLMotion,void> *v153; // rcx
  extension::BasicFutureObject<OGLMotion,void> *v154; // rcx
  __int64 *v155; // rdx
  extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> *v156; // rcx
  extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> *v157; // rcx
  extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> *v158; // rcx
  __int64 *v159; // rdx
  extension::BasicFutureObject<OGLMirror,void> *v160; // rcx
  extension::BasicFutureObject<OGLMirror,void> *v161; // rcx
  extension::BasicFutureObject<OGLMirror,void> *v162; // rcx
  __int64 *v163; // rdx
  extension::BasicFutureObject<OGLCamera,void> *v164; // rcx
  extension::BasicFutureObject<OGLCamera,void> *v165; // rcx
  extension::BasicFutureObject<OGLCamera,void> *v166; // rcx
  __int64 *v167; // rdx
  extension::BasicFutureObject<OGLSecondary,void> *v168; // rcx
  extension::BasicFutureObject<OGLSecondary,void> *v169; // rcx
  extension::BasicFutureObject<OGLSecondary,void> *v170; // rcx
  __int64 *v171; // rdx
  extension::BasicFutureObject<extension::AsyncFileImage,void> *v172; // rcx
  extension::BasicFutureObject<extension::AsyncFileImage,void> *v173; // rcx
  extension::BasicFutureObject<extension::AsyncFileImage,void> *v174; // rcx
  __int64 v175; // rdx
  std::_Wrap_alloc<std::allocator<extension::future_asset_detail::FutureAssetJob::FileSpec> > *v176; // r8
  std::integral_constant<bool,0> v177; // r9
  std::allocator<enum AgKeyboardButton> *v178; // rcx
  signed __int64 v179; // rax
  OGLInputStream v181; // [rsp+20h] [rbp-E0h] BYREF
  char _Val[8]; // [rsp+38h] [rbp-C8h] BYREF
  std::unique_ptr<EffectDataListManager> v183; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v184; // [rsp+48h] [rbp-B8h]
  std::vector<extension::future_asset_detail::AssetMaterialSpec> *p_materialSpecs; // [rsp+50h] [rbp-B0h]
  int *v186; // [rsp+58h] [rbp-A8h]
  extension::BasicFutureObject<extension::AsyncFileImage,void> v187; // [rsp+60h] [rbp-A0h] BYREF
  std::vector<extension::future_asset_detail::AssetModelInfo> v188; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v189; // [rsp+88h] [rbp-78h]
  __int64 v190; // [rsp+90h] [rbp-70h]
  std::vector<extension::BasicFutureObject<extension::AsyncFileImage,void>> v191; // [rsp+98h] [rbp-68h] BYREF
  int _Pval; // [rsp+B0h] [rbp-50h] BYREF
  extension::FutureObjectJob<extension::AsyncAsset> *v193; // [rsp+B8h] [rbp-48h]
  std::vector<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>> v194; // [rsp+C0h] [rbp-40h] BYREF
  std::vector<extension::BasicFutureObject<OGLMotion,void>> v195; // [rsp+D8h] [rbp-28h] BYREF
  std::vector<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>> v196; // [rsp+F0h] [rbp-10h] BYREF
  std::vector<extension::BasicFutureObject<OGLMirror,void>> v197; // [rsp+108h] [rbp+8h] BYREF
  std::vector<extension::BasicFutureObject<OGLCamera,void>> v198; // [rsp+120h] [rbp+20h] BYREF
  std::vector<extension::BasicFutureObject<OGLSecondary,void>> v199; // [rsp+138h] [rbp+38h] BYREF
  __int64 v200; // [rsp+150h] [rbp+50h]
  std::unique_ptr<extension::ExThread::Runnable> job; // [rsp+158h] [rbp+58h] BYREF
  char v202[8]; // [rsp+160h] [rbp+60h] BYREF
  std::vector<int> v203; // [rsp+168h] [rbp+68h] BYREF
  std::vector<extension::future_asset_detail::FutureAssetJob::FileSpec> v204; // [rsp+180h] [rbp+80h] BYREF
  extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> v205; // [rsp+198h] [rbp+98h] BYREF
  extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> other; // [rsp+1A8h] [rbp+A8h] BYREF
  void *block; // [rsp+1B8h] [rbp+B8h] BYREF
  extension::FutureFigureOption v208; // [rsp+1C0h] [rbp+C0h] BYREF
  std::vector<char> v209; // [rsp+1E0h] [rbp+E0h] BYREF
  char v210[8]; // [rsp+1F8h] [rbp+F8h] BYREF
  extension::RefCountablePtr<extension::AsyncContent<extension::AsyncAsset> > v211; // [rsp+200h] [rbp+100h] BYREF
  extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> v212; // [rsp+208h] [rbp+108h] BYREF
  extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> v213; // [rsp+218h] [rbp+118h] BYREF
  extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> v214; // [rsp+228h] [rbp+128h] BYREF
  extension::FutureTextureOption v215; // [rsp+238h] [rbp+138h] BYREF
  std::string v216; // [rsp+260h] [rbp+160h] BYREF
  std::string v217; // [rsp+280h] [rbp+180h] BYREF
  std::string v218; // [rsp+2A0h] [rbp+1A0h] BYREF
  std::string v219; // [rsp+2C0h] [rbp+1C0h] BYREF
  std::string v220; // [rsp+2E0h] [rbp+1E0h] BYREF
  std::string v221; // [rsp+300h] [rbp+200h] BYREF
  extension::BasicFutureObject<OGLSecondary,void> *v222; // [rsp+320h] [rbp+220h]
  extension::BasicFutureObject<OGLSecondary,void> *v223; // [rsp+328h] [rbp+228h]
  extension::BasicFutureObject<OGLSecondary,void> *v224; // [rsp+330h] [rbp+230h]
  extension::BasicFutureObject<OGLCamera,void> *v225; // [rsp+338h] [rbp+238h]
  extension::BasicFutureObject<OGLCamera,void> *v226; // [rsp+340h] [rbp+240h]
  extension::BasicFutureObject<OGLMotion,void> v227; // [rsp+348h] [rbp+248h] BYREF
  extension::BasicFutureObject<OGLSecondary,void> v228; // [rsp+358h] [rbp+258h] BYREF
  extension::BasicFutureObject<OGLCamera,void> *v229; // [rsp+368h] [rbp+268h]
  extension::BasicFutureObject<OGLMirror,void> *v230; // [rsp+370h] [rbp+270h]
  extension::BasicFutureObject<OGLMirror,void> *v231; // [rsp+378h] [rbp+278h]
  extension::BasicFutureObject<OGLMirror,void> *v232; // [rsp+380h] [rbp+280h]
  extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> *v233; // [rsp+388h] [rbp+288h]
  extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> *v234; // [rsp+390h] [rbp+290h]
  extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> *v235; // [rsp+398h] [rbp+298h]
  __int64 v236; // [rsp+3A0h] [rbp+2A0h]
  extension::BasicFutureObject<OGLMotion,void> *v237; // [rsp+3A8h] [rbp+2A8h]
  extension::BasicFutureObject<OGLMotion,void> *v238; // [rsp+3B0h] [rbp+2B0h]
  extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> *v239; // [rsp+3B8h] [rbp+2B8h]
  extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> *v240; // [rsp+3C0h] [rbp+2C0h]
  extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> *v241; // [rsp+3C8h] [rbp+2C8h]
  extension::future_asset_detail::AssetModelInfo *v242; // [rsp+3D0h] [rbp+2D0h]
  extension::future_asset_detail::AssetModelInfo *v243; // [rsp+3D8h] [rbp+2D8h]
  extension::BasicFutureObject<extension::AsyncFileImage,void> *v244; // [rsp+3E0h] [rbp+2E0h]
  extension::future_asset_detail::AssetModelInfo *v245; // [rsp+3E8h] [rbp+2E8h]
  extension::BasicFutureObject<extension::AsyncFileImage,void> *v246; // [rsp+3F0h] [rbp+2F0h]
  extension::BasicFutureObject<extension::AsyncFileImage,void> *v247; // [rsp+3F8h] [rbp+2F8h]
  extension::BasicFutureObject<OGLMotion,void> *v248; // [rsp+400h] [rbp+300h]
  std::string _Right; // [rsp+408h] [rbp+308h] BYREF
  std::string v250; // [rsp+428h] [rbp+328h] BYREF
  std::string result; // [rsp+448h] [rbp+348h] BYREF
  std::string v252; // [rsp+468h] [rbp+368h] BYREF
  std::string _Left; // [rsp+488h] [rbp+388h] BYREF
  std::string v254; // [rsp+4A8h] [rbp+3A8h] BYREF
  std::string v255; // [rsp+4C8h] [rbp+3C8h] BYREF
  std::string v256; // [rsp+4E8h] [rbp+3E8h] BYREF

  v236 = -2i64;
  v193 = this;
  m_ptr = this->m_content.m_ptr;
  if ( m_ptr && (m_ptr->m_status.m_stateFlags.m_value._My_val & 2) != 0
    || (v3 = *(_QWORD *)(*(_QWORD *)NtCurrentTeb()->Reserved1[11] + 16i64)) != 0
    && (*(_QWORD *)(v3 + 8) & 0x100i64) != 0 )
  {
    if ( this->m_content.m_ptr )
    {
      v4 = this->createOnErrorData(this, &block);
      extension::AsyncContent<extension::AsyncAsset>::setErrorResultWithData(
        this->m_content.m_ptr,
        4,
        (std::unique_ptr<extension::AsyncAsset>)v4);
    }
    return 0i64;
  }
  p_m_name = &this->m_content.m_ptr->m_name;
  v187.m_isNoCache = 0;
  v217._Mypair._Myval2._Myres = 15i64;
  m_errorCode = 0;
  v217._Mypair._Myval2._Mysize = 0i64;
  v217._Mypair._Myval2._Bx._Buf[0] = 0;
  std::string::assign(&v217, p_m_name, 0i64, 0xFFFFFFFFFFFFFFFFui64);
  extension::BasicFutureObject<extension::AsyncFileImage,void>::AssetCache::getCachedOrLoadStart(
    v7,
    &v187.m_body,
    &v217,
    v8);
  v10 = v187.m_body.m_ptr;
  v11 = v187.m_body.m_ptr->m_content.m_ptr;
  if ( v11 && !v11->m_isDataReleased )
  {
    if ( (v11->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
      extension::AsyncStatus::waitFor(&v11->m_status, (extension::AsyncStatus::Step)v9);
    v10 = v187.m_body.m_ptr;
    if ( v11->m_errorCode )
    {
      v12 = v187.m_body.m_ptr->m_content.m_ptr;
      if ( v12 && !v12->m_isDataReleased )
      {
        if ( (v12->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
          extension::AsyncStatus::waitFor(&v12->m_status, (extension::AsyncStatus::Step)v9);
        m_errorCode = v12->m_errorCode;
        v10 = v187.m_body.m_ptr;
      }
      if ( !this->m_content.m_ptr )
        goto LABEL_329;
      v13 = this->createOnErrorData(this, v210);
      v14 = m_errorCode;
      goto LABEL_328;
    }
  }
  v15 = v10->m_content.m_ptr;
  if ( !v15 || v15->m_isDataReleased )
    goto LABEL_336;
  if ( (v15->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
    extension::AsyncStatus::waitFor(&v15->m_status, (extension::AsyncStatus::Step)v9);
  v10 = v187.m_body.m_ptr;
  if ( !v15->m_data._Mypair._Myval2 )
  {
LABEL_336:
    if ( this->m_content.m_ptr )
    {
      v13 = this->createOnErrorData(this, v202);
      v14 = 5;
LABEL_328:
      extension::AsyncContent<extension::AsyncAsset>::setErrorResultWithData(
        this->m_content.m_ptr,
        v14,
        (std::unique_ptr<extension::AsyncAsset>)v13);
      v10 = v187.m_body.m_ptr;
    }
LABEL_329:
    if ( !v10 )
      return 0i64;
    v179 = _InterlockedDecrement64((volatile signed __int64 *)&v10->m_refCount.m_ptr->m_sharedCount);
    goto LABEL_331;
  }
  v16 = v187.m_body.m_ptr->m_content.m_ptr;
  if ( !v16 || v16->m_isDataReleased )
  {
    Myval2 = 0i64;
  }
  else
  {
    if ( (v16->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
      extension::AsyncStatus::waitFor(&v16->m_status, (extension::AsyncStatus::Step)v9);
    Myval2 = v16->m_data._Mypair._Myval2;
    v10 = v187.m_body.m_ptr;
  }
  pData = (unsigned __int8 *)Myval2->fileBufPara.pData;
  if ( *(_DWORD *)pData != *(_DWORD *)"CAST" )
  {
    extension::FutureObjectJob<extension::AsyncAsset>::setErrorResult(this, ErrorCode_InvalidFormat);
    v10 = v187.m_body.m_ptr;
    goto LABEL_329;
  }
  v19 = v10->m_content.m_ptr;
  if ( !v19 || v19->m_isDataReleased )
  {
    v20 = 0i64;
  }
  else
  {
    if ( (v19->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
      extension::AsyncStatus::waitFor(&v19->m_status, (extension::AsyncStatus::Step)v9);
    v20 = (unsigned int *)v19->m_data._Mypair._Myval2;
  }
  m_uiSize = *v20;
  v181.m_pucData = pData;
  LODWORD(v22) = 0;
  v181.m_uiPoint = 0;
  v181.m_uiSize = m_uiSize;
  v181.m_uiVersion = 0;
  if ( m_uiSize && (LODWORD(v22) = 4, v181.m_uiPoint = 4, m_uiSize > 4) )
  {
    LODWORD(v184) = pData[4] | ((pData[5] | (*((unsigned __int16 *)pData + 3) << 8)) << 8);
    LODWORD(v22) = 8;
    v181.m_uiPoint = 8;
  }
  else
  {
    LODWORD(v184) = 0;
  }
  if ( m_uiSize > (unsigned int)v22 )
  {
    LODWORD(v22) = v22 + 4;
    v181.m_uiPoint = v22;
  }
  _Pval = 0;
  memset(&v203, 0, sizeof(v203));
  std::vector<int>::_Construct_n(&v203, v9, &_Pval);
  memset(&v204, 0, sizeof(v204));
  if ( m_uiSize > (unsigned int)v22 )
  {
    v23 = pData[(unsigned int)v22] | ((pData[(unsigned int)(v22 + 1)] | ((pData[(unsigned int)(v22 + 2)] | (pData[(unsigned int)(v22 + 3)] << 8)) << 8)) << 8);
    v22 = (unsigned int)(v22 + 4);
    v181.m_uiPoint = v22;
    if ( v23 > 0 )
    {
      if ( m_uiSize > (unsigned int)v22 )
      {
        v24 = pData[v22] | ((pData[(unsigned int)(v22 + 1)] | ((pData[(unsigned int)(v22 + 2)] | (pData[(unsigned int)(v22 + 3)] << 8)) << 8)) << 8);
        v22 = (unsigned int)(v22 + 4);
        v181.m_uiPoint = v22;
      }
      else
      {
        v24 = 0;
      }
      v25 = v24;
      v183._Mypair._Myval2 = (EffectDataListManager *)v24;
      std::vector<extension::future_asset_detail::FutureAssetJob::FileSpec>::resize(&v204, v24);
      memset(&v209, 0, sizeof(v209));
      std::vector<char>::_Reallocate(&v209, 0x200ui64);
      if ( v25 > 0 )
      {
        v189 = v203._Mypair._Myval2._Mylast - v203._Mypair._Myval2._Myfirst;
        Myfirst = v204._Mypair._Myval2._Myfirst;
        do
        {
          if ( m_uiSize > (unsigned int)v22 )
          {
            v27 = pData[v22] | ((pData[(unsigned int)(v22 + 1)] | ((pData[(unsigned int)(v22 + 2)] | (pData[(unsigned int)(v22 + 3)] << 8)) << 8)) << 8);
            v22 = (unsigned int)(v22 + 4);
            v181.m_uiPoint = v22;
          }
          else
          {
            v27 = 0;
          }
          Myfirst->uiFileType = v27;
          if ( m_uiSize > (unsigned int)v22 )
          {
            v28 = pData[v22] | ((pData[(unsigned int)(v22 + 1)] | ((pData[(unsigned int)(v22 + 2)] | (pData[(unsigned int)(v22 + 3)] << 8)) << 8)) << 8);
            v22 = (unsigned int)(v22 + 4);
            v181.m_uiPoint = v22;
          }
          else
          {
            v28 = 0;
          }
          _Val[0] = 0;
          std::vector<char>::resize(&v209, v28 + 1, _Val);
          v29 = v209._Mypair._Myval2._Myfirst;
          if ( m_uiSize > (unsigned int)v22 )
          {
            memmove(v209._Mypair._Myval2._Myfirst, &pData[(unsigned int)v22], v28);
            v22 = (unsigned int)(v28 + v22);
            v181.m_uiPoint = v22;
          }
          v29[v28] = 0;
          extension::AsyncWorker::ExtractAssetFileName(&result, v29);
          p_result = &result;
          if ( result._Mypair._Myval2._Myres >= 0x10 )
            p_result = (std::string *)result._Mypair._Myval2._Bx._Ptr;
          v31 = strstr(p_result->_Mypair._Myval2._Bx._Buf, "_1P.");
          if ( v31 )
            v31[1] = LOBYTE(v193[1].__vftable) + 48;
          if ( &Myfirst->filePath != &result )
            std::string::assign(&Myfirst->filePath, &result, 0i64, 0xFFFFFFFFFFFFFFFFui64);
          if ( m_uiSize > (unsigned int)v22 )
          {
            v32 = pData[v22] | ((pData[(unsigned int)(v22 + 1)] | ((pData[(unsigned int)(v22 + 2)] | (pData[(unsigned int)(v22 + 3)] << 8)) << 8)) << 8);
            v22 = (unsigned int)(v22 + 4);
            v181.m_uiPoint = v22;
          }
          else
          {
            v32 = 0;
          }
          Myfirst->iFileTypeIndex = v32;
          uiFileType = Myfirst->uiFileType;
          if ( uiFileType < v189 && v203._Mypair._Myval2._Myfirst[uiFileType] <= v32 )
            v203._Mypair._Myval2._Myfirst[uiFileType] = v32 + 1;
          std::string::~string(&result);
          ++Myfirst;
          --v183._Mypair._Myval2;
        }
        while ( v183._Mypair._Myval2 );
      }
      std::vector<AgDisplayChangedEvent>::_Tidy((std::vector<AgSuspendingEvent> *)&v209);
    }
  }
  memset(&v188, 0, sizeof(v188));
  v34 = (int)v184;
  v200 = (int)v184;
  if ( m_uiSize > (unsigned int)v22 )
  {
    v35 = pData[(unsigned int)v22] | ((pData[(unsigned int)(v22 + 1)] | ((pData[(unsigned int)(v22 + 2)] | (pData[(unsigned int)(v22 + 3)] << 8)) << 8)) << 8);
    m_uiPoint = v22 + 4;
    v181.m_uiPoint = m_uiPoint;
    if ( v35 > 0 )
    {
      Int = (int)OGLInputStream::getInt(&v181);
      std::vector<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo>::resize(&v188, Int);
      m_uiPoint = v181.m_uiPoint;
      m_uiSize = v181.m_uiSize;
      pData = v181.m_pucData;
      if ( Int > 0 )
      {
        v38 = v181.m_uiPoint + 1;
        v39 = v181.m_uiPoint + 2;
        v40 = v181.m_uiPoint + 3;
        p_iMotionNo = &v188._Mypair._Myval2._Myfirst->modelSpec.iMotionNo;
        do
        {
          if ( m_uiSize > m_uiPoint )
          {
            v42 = pData[m_uiPoint] | ((pData[v38] | ((pData[v39] | (pData[v40] << 8)) << 8)) << 8);
            m_uiPoint += 4;
            v181.m_uiPoint = m_uiPoint;
            v40 = (unsigned int)(v40 + 4);
            v39 = (unsigned int)(v39 + 4);
            v38 = (unsigned int)(v38 + 4);
          }
          else
          {
            v42 = 0;
          }
          *(p_iMotionNo - 2) = v42;
          if ( m_uiSize > m_uiPoint )
          {
            v43 = pData[m_uiPoint] | ((pData[v38] | ((pData[v39] | (pData[v40] << 8)) << 8)) << 8);
            m_uiPoint += 4;
            v181.m_uiPoint = m_uiPoint;
            v40 = (unsigned int)(v40 + 4);
            v39 = (unsigned int)(v39 + 4);
            v38 = (unsigned int)(v38 + 4);
          }
          else
          {
            v43 = 0;
          }
          *(p_iMotionNo - 1) = v43;
          if ( m_uiSize > m_uiPoint )
          {
            v44 = pData[m_uiPoint] | ((pData[v38] | ((pData[v39] | (pData[v40] << 8)) << 8)) << 8);
            m_uiPoint += 4;
            v181.m_uiPoint = m_uiPoint;
            v40 = (unsigned int)(v40 + 4);
            v39 = (unsigned int)(v39 + 4);
            v38 = (unsigned int)(v38 + 4);
          }
          else
          {
            v44 = 0;
          }
          *p_iMotionNo = v44;
          if ( m_uiSize > m_uiPoint )
          {
            v45 = pData[m_uiPoint] | ((pData[v38] | ((pData[v39] | (pData[v40] << 8)) << 8)) << 8);
            m_uiPoint += 4;
            v181.m_uiPoint = m_uiPoint;
            v40 = (unsigned int)(v40 + 4);
            v39 = (unsigned int)(v39 + 4);
            v38 = (unsigned int)(v38 + 4);
          }
          else
          {
            v45 = 0;
          }
          p_iMotionNo[1] = v45;
          if ( m_uiSize > m_uiPoint )
          {
            v46 = pData[m_uiPoint] | ((pData[v38] | ((pData[v39] | (pData[v40] << 8)) << 8)) << 8);
            m_uiPoint += 4;
            v181.m_uiPoint = m_uiPoint;
            v40 = (unsigned int)(v40 + 4);
            v39 = (unsigned int)(v39 + 4);
            v38 = (unsigned int)(v38 + 4);
          }
          else
          {
            v46 = 0;
          }
          p_iMotionNo[2] = v46;
          if ( m_uiSize > m_uiPoint )
          {
            v47 = pData[m_uiPoint] | ((pData[v38] | ((pData[v39] | (pData[v40] << 8)) << 8)) << 8);
            m_uiPoint += 4;
            v181.m_uiPoint = m_uiPoint;
            v40 = (unsigned int)(v40 + 4);
            v39 = (unsigned int)(v39 + 4);
            v38 = (unsigned int)(v38 + 4);
          }
          else
          {
            v47 = 0;
          }
          p_iMotionNo[3] = v47;
          if ( v34 < 4 )
          {
            p_iMotionNo[4] = -1;
          }
          else
          {
            if ( m_uiSize > m_uiPoint )
            {
              v48 = pData[m_uiPoint] | ((pData[v38] | ((pData[v39] | (pData[v40] << 8)) << 8)) << 8);
              m_uiPoint += 4;
              v181.m_uiPoint = m_uiPoint;
              v40 = (unsigned int)(v40 + 4);
              v39 = (unsigned int)(v39 + 4);
              v38 = (unsigned int)(v38 + 4);
            }
            else
            {
              v48 = 0;
            }
            p_iMotionNo[4] = v48;
          }
          if ( m_uiSize > m_uiPoint )
          {
            v49 = pData[m_uiPoint] | ((pData[v38] | ((pData[v39] | (pData[v40] << 8)) << 8)) << 8);
            m_uiPoint += 4;
            v181.m_uiPoint = m_uiPoint;
            v40 = (unsigned int)(v40 + 4);
            v39 = (unsigned int)(v39 + 4);
            v38 = (unsigned int)(v38 + 4);
          }
          else
          {
            v49 = 0;
          }
          p_iMotionNo[5] = v49;
          if ( v34 < 5 )
          {
            p_iMotionNo[6] = -1;
            p_iMotionNo[7] = -1;
          }
          else
          {
            if ( m_uiSize > m_uiPoint )
            {
              v50 = pData[m_uiPoint] | ((pData[v38] | ((pData[v39] | (pData[v40] << 8)) << 8)) << 8);
              m_uiPoint += 4;
              v181.m_uiPoint = m_uiPoint;
              v40 = (unsigned int)(v40 + 4);
              v39 = (unsigned int)(v39 + 4);
              v38 = (unsigned int)(v38 + 4);
            }
            else
            {
              v50 = 0;
            }
            p_iMotionNo[6] = v50;
            if ( m_uiSize > m_uiPoint )
            {
              v51 = pData[m_uiPoint] | ((pData[v38] | ((pData[v39] | (pData[v40] << 8)) << 8)) << 8);
              m_uiPoint += 4;
              v181.m_uiPoint = m_uiPoint;
              v40 = (unsigned int)(v40 + 4);
              v39 = (unsigned int)(v39 + 4);
              v38 = (unsigned int)(v38 + 4);
            }
            else
            {
              v51 = 0;
            }
            p_iMotionNo[7] = v51;
          }
          if ( v34 < 6 )
          {
            p_iMotionNo[8] = -1;
          }
          else
          {
            if ( m_uiSize > m_uiPoint )
            {
              v52 = pData[m_uiPoint] | ((pData[v38] | ((pData[v39] | (pData[v40] << 8)) << 8)) << 8);
              m_uiPoint += 4;
              v181.m_uiPoint = m_uiPoint;
              v40 = (unsigned int)(v40 + 4);
              v39 = (unsigned int)(v39 + 4);
              v38 = (unsigned int)(v38 + 4);
            }
            else
            {
              v52 = 0;
            }
            p_iMotionNo[8] = v52;
          }
          if ( m_uiSize > m_uiPoint )
          {
            v53 = pData[m_uiPoint] | ((pData[v38] | ((pData[v39] | (pData[v40] << 8)) << 8)) << 8);
            m_uiPoint += 4;
            v181.m_uiPoint = m_uiPoint;
            v40 = (unsigned int)(v40 + 4);
            v39 = (unsigned int)(v39 + 4);
            v38 = (unsigned int)(v38 + 4);
          }
          else
          {
            v53 = 0;
          }
          p_iMotionNo[9] = v53;
          if ( v34 < 3 )
          {
            p_iMotionNo[10] = -1;
          }
          else
          {
            if ( m_uiSize > m_uiPoint )
            {
              v54 = pData[m_uiPoint] | ((pData[v38] | ((pData[v39] | (pData[v40] << 8)) << 8)) << 8);
              m_uiPoint += 4;
              v181.m_uiPoint = m_uiPoint;
              v40 = (unsigned int)(v40 + 4);
              v39 = (unsigned int)(v39 + 4);
              v38 = (unsigned int)(v38 + 4);
            }
            else
            {
              v54 = 0;
            }
            p_iMotionNo[10] = v54;
          }
          if ( v34 < 2 )
          {
            p_iMotionNo[11] = 0;
          }
          else
          {
            if ( m_uiSize > m_uiPoint )
            {
              v55 = pData[m_uiPoint] | ((pData[v38] | ((pData[v39] | (pData[v40] << 8)) << 8)) << 8);
              m_uiPoint += 4;
              v181.m_uiPoint = m_uiPoint;
              v40 = (unsigned int)(v40 + 4);
              v39 = (unsigned int)(v39 + 4);
              v38 = (unsigned int)(v38 + 4);
            }
            else
            {
              v55 = 0;
            }
            p_iMotionNo[11] = v55;
          }
          if ( m_uiSize > m_uiPoint )
          {
            v56 = pData[m_uiPoint] | ((pData[v38] | ((pData[v39] | (pData[v40] << 8)) << 8)) << 8);
            m_uiPoint += 4;
            v181.m_uiPoint = m_uiPoint;
            v40 = (unsigned int)(v40 + 4);
            v39 = (unsigned int)(v39 + 4);
            v38 = (unsigned int)(v38 + 4);
          }
          else
          {
            v56 = 0;
          }
          p_iMotionNo[12] = v56;
          if ( m_uiSize > m_uiPoint )
          {
            v57 = pData[m_uiPoint] | ((pData[v38] | ((pData[v39] | (pData[v40] << 8)) << 8)) << 8);
            m_uiPoint += 4;
            v181.m_uiPoint = m_uiPoint;
            v40 = (unsigned int)(v40 + 4);
            v39 = (unsigned int)(v39 + 4);
            v38 = (unsigned int)(v38 + 4);
          }
          else
          {
            v57 = 0;
          }
          p_iMotionNo[13] = v57;
          p_iMotionNo += 22;
          --Int;
        }
        while ( Int );
      }
    }
    if ( m_uiSize > m_uiPoint )
    {
      v58 = pData[m_uiPoint] | ((pData[m_uiPoint + 1] | ((pData[m_uiPoint + 2] | (pData[m_uiPoint + 3] << 8)) << 8)) << 8);
      v59 = m_uiPoint + 4;
      v181.m_uiPoint = v59;
      if ( v58 > 0 )
      {
        if ( m_uiSize > (unsigned int)v59 )
        {
          v59 = (unsigned int)(v59 + 4);
          v181.m_uiPoint = v59;
        }
        v60 = 0i64;
        v189 = 0i64;
        v186 = (int *)(v188._Mypair._Myval2._Mylast - v188._Mypair._Myval2._Myfirst);
        if ( v186 )
        {
          while ( 1 )
          {
            if ( m_uiSize > (unsigned int)v59 )
            {
              v61 = pData[v59] | ((pData[(unsigned int)(v59 + 1)] | ((pData[(unsigned int)(v59 + 2)] | (pData[(unsigned int)(v59 + 3)] << 8)) << 8)) << 8);
              v59 = (unsigned int)(v59 + 4);
              v181.m_uiPoint = v59;
            }
            else
            {
              v61 = 0;
            }
            v183._Mypair._Myval2 = (EffectDataListManager *)v61;
            p_materialSpecs = &v188._Mypair._Myval2._Myfirst[v60].materialSpecs;
            std::vector<extension::future_asset_detail::`anonymous namespace'::AssetMaterialSpec>::resize(
              p_materialSpecs,
              v61);
            v63 = 0i64;
            v64 = v183._Mypair._Myval2;
            if ( (__int64)v183._Mypair._Myval2 > 0 )
              break;
LABEL_247:
            v60 = v189 + 1;
            v189 = v60;
            if ( v60 >= (unsigned __int64)v186 )
              goto LABEL_248;
          }
          while ( 1 )
          {
            v65 = &p_materialSpecs->_Mypair._Myval2._Myfirst[v63];
            if ( v34 >= 9 )
            {
              if ( m_uiSize > (unsigned int)v59
                && (v66 = (pData[(unsigned int)(v59 + 1)] | ((pData[(unsigned int)(v59 + 2)] | (pData[(unsigned int)(v59 + 3)] << 8)) << 8)) << 8,
                    v67 = pData[v59],
                    v59 = (unsigned int)(v59 + 4),
                    v181.m_uiPoint = v59,
                    (v68 = v67 | v66) != 0) )
              {
                v69 = (char *)operator new[](v68 + 1);
                v71 = v65->pMaterialName._Mypair._Myval2;
                v65->pMaterialName._Mypair._Myval2 = v69;
                if ( v71 )
                  operator delete(v71, v70);
                v72 = 0i64;
                v73 = v68;
                do
                {
                  if ( m_uiSize > (unsigned int)v59 )
                  {
                    v74 = pData[v59];
                    v59 = (unsigned int)(v59 + 1);
                    v181.m_uiPoint = v59;
                  }
                  else
                  {
                    v74 = 0;
                  }
                  v65->pMaterialName._Mypair._Myval2[v72++] = v74;
                  --v73;
                }
                while ( v73 );
                v65->pMaterialName._Mypair._Myval2[v68] = 0;
LABEL_163:
                v64 = v183._Mypair._Myval2;
              }
              else
              {
                v75 = v65->pMaterialName._Mypair._Myval2;
                v65->pMaterialName._Mypair._Myval2 = 0i64;
                if ( v75 )
                {
                  operator delete(v75, v62);
                  goto LABEL_163;
                }
              }
              if ( m_uiSize > (unsigned int)v59 )
              {
                v76 = pData[v59] | ((pData[(unsigned int)(v59 + 1)] | ((pData[(unsigned int)(v59 + 2)] | (pData[(unsigned int)(v59 + 3)] << 8)) << 8)) << 8);
                v59 = (unsigned int)(v59 + 4);
                v181.m_uiPoint = v59;
              }
              else
              {
                v76 = 0;
              }
              v65->uiMaterialNo = v76;
              v77 = (unsigned int)(v59 + 2);
              iColorNo = v65->iColorNo;
              v79 = 3i64;
              do
              {
                if ( m_uiSize > (unsigned int)v59 )
                {
                  v80 = pData[v59] | ((pData[(unsigned int)(v77 - 1)] | ((pData[v77] | (pData[(unsigned int)(v77 + 1)] << 8)) << 8)) << 8);
                  v59 = (unsigned int)(v59 + 4);
                  v181.m_uiPoint = v59;
                  v77 = (unsigned int)(v77 + 4);
                }
                else
                {
                  v80 = 0;
                }
                *iColorNo++ = v80;
                --v79;
              }
              while ( v79 );
              if ( m_uiSize > (unsigned int)v59 )
              {
                v81 = pData[v59] | ((pData[(unsigned int)(v59 + 1)] | ((pData[(unsigned int)(v59 + 2)] | (pData[(unsigned int)(v59 + 3)] << 8)) << 8)) << 8);
                v59 = (unsigned int)(v59 + 4);
                v181.m_uiPoint = v59;
              }
              else
              {
                v81 = 0;
              }
              v65->iNormalNo = v81;
              if ( m_uiSize > (unsigned int)v59 )
              {
                v82 = pData[v59] | ((pData[(unsigned int)(v59 + 1)] | ((pData[(unsigned int)(v59 + 2)] | (pData[(unsigned int)(v59 + 3)] << 8)) << 8)) << 8);
                v59 = (unsigned int)(v59 + 4);
                v181.m_uiPoint = v59;
              }
              else
              {
                v82 = 0;
              }
              v65->iSpecularNo = v82;
              if ( m_uiSize > (unsigned int)v59 )
              {
                v83 = pData[v59] | ((pData[(unsigned int)(v59 + 1)] | ((pData[(unsigned int)(v59 + 2)] | (pData[(unsigned int)(v59 + 3)] << 8)) << 8)) << 8);
                v59 = (unsigned int)(v59 + 4);
                v181.m_uiPoint = v59;
              }
              else
              {
                v83 = 0;
              }
              v65->iEmissiveNo = v83;
              if ( m_uiSize > (unsigned int)v59 )
              {
                v84 = pData[v59] | ((pData[(unsigned int)(v59 + 1)] | ((pData[(unsigned int)(v59 + 2)] | (pData[(unsigned int)(v59 + 3)] << 8)) << 8)) << 8);
                v59 = (unsigned int)(v59 + 4);
                v181.m_uiPoint = v59;
              }
              else
              {
                v84 = 0;
              }
              v65->iReflectionNo = v84;
              if ( m_uiSize > (unsigned int)v59 )
              {
                v85 = pData[v59] | ((pData[(unsigned int)(v59 + 1)] | ((pData[(unsigned int)(v59 + 2)] | (pData[(unsigned int)(v59 + 3)] << 8)) << 8)) << 8);
                v59 = (unsigned int)(v59 + 4);
                v181.m_uiPoint = v59;
              }
              else
              {
                v85 = 0;
              }
              v65->iEnvironmentNo = v85;
              if ( m_uiSize > (unsigned int)v59 )
              {
                v62 = pData[v59] | ((pData[(unsigned int)(v59 + 1)] | ((pData[(unsigned int)(v59 + 2)] | (pData[(unsigned int)(v59 + 3)] << 8)) << 8)) << 8);
                v59 = (unsigned int)(v59 + 4);
                v181.m_uiPoint = v59;
              }
              else
              {
                v62 = 0i64;
              }
              v34 = v200;
              goto LABEL_246;
            }
            if ( v34 < 7 )
            {
              if ( m_uiSize > (unsigned int)v59 )
              {
                v96 = pData[v59] | ((pData[(unsigned int)(v59 + 1)] | ((pData[(unsigned int)(v59 + 2)] | (pData[(unsigned int)(v59 + 3)] << 8)) << 8)) << 8);
                v59 = (unsigned int)(v59 + 4);
                v181.m_uiPoint = v59;
              }
              else
              {
                v96 = 0;
              }
              v65->uiMaterialNo = v96;
              v97 = (unsigned int)(v59 + 2);
              v98 = v65->iColorNo;
              v99 = 3i64;
              do
              {
                if ( m_uiSize > (unsigned int)v59 )
                {
                  v100 = pData[v59] | ((pData[(unsigned int)(v97 - 1)] | ((pData[v97] | (pData[(unsigned int)(v97 + 1)] << 8)) << 8)) << 8);
                  v59 = (unsigned int)(v59 + 4);
                  v181.m_uiPoint = v59;
                  v97 = (unsigned int)(v97 + 4);
                }
                else
                {
                  v100 = 0;
                }
                *v98++ = v100;
                --v99;
              }
              while ( v99 );
              if ( m_uiSize <= (unsigned int)v59
                || (v59 = (unsigned int)(v59 + 4), v181.m_uiPoint = v59, m_uiSize <= (unsigned int)v59) )
              {
                v101 = 0;
              }
              else
              {
                v101 = pData[v59] | ((pData[(unsigned int)(v59 + 1)] | ((pData[(unsigned int)(v59 + 2)] | (pData[(unsigned int)(v59 + 3)] << 8)) << 8)) << 8);
                v59 = (unsigned int)(v59 + 4);
                v181.m_uiPoint = v59;
              }
              v65->iNormalNo = v101;
              if ( m_uiSize <= (unsigned int)v59
                || (v59 = (unsigned int)(v59 + 4), v181.m_uiPoint = v59, m_uiSize <= (unsigned int)v59) )
              {
                v102 = 0;
              }
              else
              {
                v102 = pData[v59] | ((pData[(unsigned int)(v59 + 1)] | ((pData[(unsigned int)(v59 + 2)] | (pData[(unsigned int)(v59 + 3)] << 8)) << 8)) << 8);
                v59 = (unsigned int)(v59 + 4);
                v181.m_uiPoint = v59;
              }
              v65->iSpecularNo = v102;
              if ( m_uiSize > (unsigned int)v59 )
              {
                v103 = pData[v59] | ((pData[(unsigned int)(v59 + 1)] | ((pData[(unsigned int)(v59 + 2)] | (pData[(unsigned int)(v59 + 3)] << 8)) << 8)) << 8);
                v59 = (unsigned int)(v59 + 4);
                v181.m_uiPoint = v59;
              }
              else
              {
                v103 = 0;
              }
              v65->iEmissiveNo = v103;
              if ( m_uiSize > (unsigned int)v59 )
              {
                v104 = pData[v59] | ((pData[(unsigned int)(v59 + 1)] | ((pData[(unsigned int)(v59 + 2)] | (pData[(unsigned int)(v59 + 3)] << 8)) << 8)) << 8);
                v59 = (unsigned int)(v59 + 4);
                v181.m_uiPoint = v59;
              }
              else
              {
                v104 = 0;
              }
              v65->iReflectionNo = v104;
              if ( m_uiSize > (unsigned int)v59 )
              {
                v105 = pData[v59] | ((pData[(unsigned int)(v59 + 1)] | ((pData[(unsigned int)(v59 + 2)] | (pData[(unsigned int)(v59 + 3)] << 8)) << 8)) << 8);
                v59 = (unsigned int)(v59 + 4);
                v181.m_uiPoint = v59;
              }
              else
              {
                v105 = 0;
              }
              v65->iEnvironmentNo = v105;
              if ( m_uiSize <= (unsigned int)v59
                || (v59 = (unsigned int)(v59 + 4), v181.m_uiPoint = v59, m_uiSize <= (unsigned int)v59) )
              {
LABEL_245:
                v62 = 0i64;
                goto LABEL_246;
              }
            }
            else
            {
              if ( m_uiSize > (unsigned int)v59 )
              {
                v86 = pData[v59] | ((pData[(unsigned int)(v59 + 1)] | ((pData[(unsigned int)(v59 + 2)] | (pData[(unsigned int)(v59 + 3)] << 8)) << 8)) << 8);
                v59 = (unsigned int)(v59 + 4);
                v181.m_uiPoint = v59;
              }
              else
              {
                v86 = 0;
              }
              v65->uiMaterialNo = v86;
              v87 = (unsigned int)(v59 + 2);
              v88 = v65->iColorNo;
              v89 = 3i64;
              do
              {
                if ( m_uiSize > (unsigned int)v59 )
                {
                  v90 = pData[v59] | ((pData[(unsigned int)(v87 - 1)] | ((pData[v87] | (pData[(unsigned int)(v87 + 1)] << 8)) << 8)) << 8);
                  v59 = (unsigned int)(v59 + 4);
                  v181.m_uiPoint = v59;
                  v87 = (unsigned int)(v87 + 4);
                }
                else
                {
                  v90 = 0;
                }
                *v88++ = v90;
                --v89;
              }
              while ( v89 );
              if ( m_uiSize > (unsigned int)v59 )
              {
                v91 = pData[v59] | ((pData[(unsigned int)(v59 + 1)] | ((pData[(unsigned int)(v59 + 2)] | (pData[(unsigned int)(v59 + 3)] << 8)) << 8)) << 8);
                v59 = (unsigned int)(v59 + 4);
                v181.m_uiPoint = v59;
              }
              else
              {
                v91 = 0;
              }
              v65->iNormalNo = v91;
              if ( m_uiSize > (unsigned int)v59 )
              {
                v92 = pData[v59] | ((pData[(unsigned int)(v59 + 1)] | ((pData[(unsigned int)(v59 + 2)] | (pData[(unsigned int)(v59 + 3)] << 8)) << 8)) << 8);
                v59 = (unsigned int)(v59 + 4);
                v181.m_uiPoint = v59;
              }
              else
              {
                v92 = 0;
              }
              v65->iSpecularNo = v92;
              if ( m_uiSize > (unsigned int)v59 )
              {
                v93 = pData[v59] | ((pData[(unsigned int)(v59 + 1)] | ((pData[(unsigned int)(v59 + 2)] | (pData[(unsigned int)(v59 + 3)] << 8)) << 8)) << 8);
                v59 = (unsigned int)(v59 + 4);
                v181.m_uiPoint = v59;
              }
              else
              {
                v93 = 0;
              }
              v65->iEmissiveNo = v93;
              if ( m_uiSize > (unsigned int)v59 )
              {
                v94 = pData[v59] | ((pData[(unsigned int)(v59 + 1)] | ((pData[(unsigned int)(v59 + 2)] | (pData[(unsigned int)(v59 + 3)] << 8)) << 8)) << 8);
                v59 = (unsigned int)(v59 + 4);
                v181.m_uiPoint = v59;
              }
              else
              {
                v94 = 0;
              }
              v65->iReflectionNo = v94;
              if ( m_uiSize > (unsigned int)v59 )
              {
                v95 = pData[v59] | ((pData[(unsigned int)(v59 + 1)] | ((pData[(unsigned int)(v59 + 2)] | (pData[(unsigned int)(v59 + 3)] << 8)) << 8)) << 8);
                v59 = (unsigned int)(v59 + 4);
                v181.m_uiPoint = v59;
              }
              else
              {
                v95 = 0;
              }
              v65->iEnvironmentNo = v95;
              if ( m_uiSize <= (unsigned int)v59 )
                goto LABEL_245;
            }
            v62 = pData[v59] | ((pData[(unsigned int)(v59 + 1)] | ((pData[(unsigned int)(v59 + 2)] | (pData[(unsigned int)(v59 + 3)] << 8)) << 8)) << 8);
            v59 = (unsigned int)(v59 + 4);
            v181.m_uiPoint = v59;
LABEL_246:
            v65->iTransparentNo = v62;
            if ( ++v63 >= (__int64)v64 )
              goto LABEL_247;
          }
        }
      }
    }
  }
LABEL_248:
  extension::BasicFutureObject<extension::AsyncFileImage,void>::reset(&v187);
  memset(&v194, 0, sizeof(v194));
  memset(&v195, 0, sizeof(v195));
  memset(&v196, 0, sizeof(v196));
  memset(&v197, 0, sizeof(v197));
  memset(&v198, 0, sizeof(v198));
  memset(&v199, 0, sizeof(v199));
  v183._Mypair._Myval2 = 0i64;
  memset(&v191, 0, sizeof(v191));
  v106 = v203._Mypair._Myval2._Myfirst;
  v107 = v203._Mypair._Myval2._Myfirst + 6;
  v186 = v203._Mypair._Myval2._Myfirst + 6;
  std::vector<extension::BasicFutureObject<extension::AsyncFileImage,void>>::resize(
    &v191,
    v203._Mypair._Myval2._Myfirst[6]);
  std::vector<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>>::resize(&v194, v106[1]);
  std::vector<extension::BasicFutureObject<OGLMotion,void>>::resize(&v195, v106[2]);
  std::vector<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>>::resize(&v196, v106[3]);
  std::vector<extension::BasicFutureObject<OGLMirror,void>>::resize(&v197, v106[4]);
  std::vector<extension::BasicFutureObject<OGLCamera,void>>::resize(&v198, v106[5]);
  std::vector<extension::BasicFutureObject<OGLSecondary,void>>::resize(&v199, v106[9]);
  v108 = v193;
  extension::AsyncWorker::ExtractAssetDirectory(&_Left, &v193->m_content.m_ptr->m_name);
  v250._Mypair._Myval2._Myres = 15i64;
  v250._Mypair._Myval2._Mysize = 0i64;
  v250._Mypair._Myval2._Bx._Buf[0] = 0;
  if ( v204._Mypair._Myval2._Myfirst != v204._Mypair._Myval2._Mylast )
  {
    p_iFileTypeIndex = &v204._Mypair._Myval2._Myfirst->iFileTypeIndex;
    while ( 2 )
    {
      std::operator+<char>(&_Right, &_Left, (const std::string *)p_iFileTypeIndex - 1);
      switch ( *(p_iFileTypeIndex - 10) )
      {
        case 1:
          *(_WORD *)&v208.bBaseFigure = 0;
          memset(&v208.fileSetting, 0, sizeof(v208.fileSetting));
          v208.bNoMotion = BYTE6(v108[1].__vftable);
          std::vector<extension::FutureAssetOptionFileSetting>::operator=(
            &v208.fileSetting,
            (const std::vector<extension::FutureAssetOptionFileSetting> *)&v108[3].gap10,
            v111);
          other.m_isNoCache = 0;
          v218._Mypair._Myval2._Mysize = 0i64;
          v218._Mypair._Myval2._Myres = 0i64;
          std::string::_Tidy(&v218, 0, 0i64);
          std::string::assign(&v218, &_Right, 0i64, 0xFFFFFFFFFFFFFFFFui64);
          extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::AssetCache::getCachedOrLoadStart(
            v113,
            (extension::RefCountablePtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body> *)&other.m_body,
            &v218,
            &v208);
          extension::BasicFutureObject<OGLSecondary,void>::operator=(
            (extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> *)&v194._Mypair._Myval2._Myfirst[*p_iFileTypeIndex],
            &other);
          v117 = other.m_body.m_ptr;
          if ( other.m_body.m_ptr )
          {
            v114 = _InterlockedExchangeAdd64(
                     (volatile signed __int64 *)&other.m_body.m_ptr->m_refCount.m_ptr->m_sharedCount,
                     0xFFFFFFFFFFFFFFFFui64);
            if ( v114 == 1 )
              ((void (__fastcall *)(extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body *, __int64))v117->~RefCountableWeakSupportBase)(
                v117,
                1i64);
          }
          extension::FutureFigureOption::~FutureFigureOption(&v208, v114, v115, v116);
          goto LABEL_298;
        case 2:
          if ( !v108[3].__vftable
            || (v108[2].m_abort & 0x380000) == 0
            || v188._Mypair._Myval2._Myfirst == v188._Mypair._Myval2._Mylast )
          {
            goto LABEL_270;
          }
          m_abort = v108[2].m_abort;
          p_iMotionCommonNo = &v188._Mypair._Myval2._Myfirst->modelSpec.iMotionCommonNo;
          break;
        case 3:
          v215.texParam = 1290;
          memset(&v215.paletteData, 0, sizeof(v215.paletteData));
          v215.keyIndex = -1;
          extension::AsyncWorker::ExtractAssetBaseName(&v252, (const std::string *)p_iFileTypeIndex - 1);
          v124 = 1290;
          if ( std::string::find(&v252, "_REP_", 0i64, 5ui64) != -1i64 )
            v124 = 2570;
          v215.texParam = v124;
          v125 = *(_QWORD *)&AppMain::pApp;
          if ( *(_BYTE *)(*(_QWORD *)&AppMain::pApp + 2197493i64)
            && std::string::rfind(&v252, v122, v123, 5ui64) == -1i64 )
          {
            v124 = v124 & 0xFFFF7F7D | 0x8080;
            v215.texParam = v124;
          }
          if ( *(_BYTE *)(v125 + 2197494) )
            v215.texParam = v124 | 0x1000;
          v205.m_isNoCache = 0;
          v216._Mypair._Myval2._Mysize = 0i64;
          v216._Mypair._Myval2._Myres = 0i64;
          std::string::_Tidy(&v216, 0, 0i64);
          std::string::assign(&v216, &_Right, 0i64, 0xFFFFFFFFFFFFFFFFui64);
          extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::AssetCache::getCachedOrLoadStart(
            v126,
            (extension::RefCountablePtr<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body> *)&v205.m_body,
            &v216,
            &v215);
          extension::BasicFutureObject<OGLSecondary,void>::operator=(
            (extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> *)&v196._Mypair._Myval2._Myfirst[*p_iFileTypeIndex],
            &v205);
          v127 = v205.m_body.m_ptr;
          if ( v205.m_body.m_ptr
            && _InterlockedExchangeAdd64(
                 (volatile signed __int64 *)&v205.m_body.m_ptr->m_refCount.m_ptr->m_sharedCount,
                 0xFFFFFFFFFFFFFFFFui64) == 1 )
          {
            ((void (__fastcall *)(extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body *, __int64))v127->~RefCountableWeakSupportBase)(
              v127,
              1i64);
          }
          std::string::~string(&v252);
          std::vector<AgDisplayChangedEvent>::_Tidy((std::vector<AgSuspendingEvent> *)&v215.paletteData);
          goto LABEL_298;
        case 4:
          v212.m_isNoCache = 0;
          v219._Mypair._Myval2._Mysize = 0i64;
          v219._Mypair._Myval2._Myres = 0i64;
          std::string::_Tidy(&v219, 0, 0i64);
          std::string::assign(&v219, &_Right, 0i64, 0xFFFFFFFFFFFFFFFFui64);
          extension::BasicFutureObject<OGLMirror,void>::AssetCache::getCachedOrLoadStart(
            v128,
            (extension::RefCountablePtr<extension::BasicFutureObject<OGLMirror,void>::Body> *)&v212.m_body,
            &v219,
            v129);
          extension::BasicFutureObject<OGLSecondary,void>::operator=(
            (extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> *)&v197._Mypair._Myval2._Myfirst[*p_iFileTypeIndex],
            &v212);
          v121 = (void (__fastcall ***)(void *, __int64))v212.m_body.m_ptr;
          goto LABEL_295;
        case 5:
          if ( v108[3].__vftable && (v108[2].m_abort & 0x400000) != 0 )
          {
            v130 = std::operator+<char>(
                     &v255,
                     (const std::string *)&v108[2].gap10,
                     (const std::string *)p_iFileTypeIndex - 1);
            std::string::assign(&_Right, v130);
            std::string::~string(&v255);
          }
          v214.m_isNoCache = 0;
          v220._Mypair._Myval2._Mysize = 0i64;
          v220._Mypair._Myval2._Myres = 0i64;
          std::string::_Tidy(&v220, 0, 0i64);
          std::string::assign(&v220, &_Right, 0i64, 0xFFFFFFFFFFFFFFFFui64);
          extension::BasicFutureObject<OGLCamera,void>::AssetCache::getCachedOrLoadStart(
            v131,
            (extension::RefCountablePtr<extension::BasicFutureObject<OGLCamera,void>::Body> *)&v214.m_body,
            &v220,
            v132);
          extension::BasicFutureObject<OGLSecondary,void>::operator=(
            (extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> *)&v198._Mypair._Myval2._Myfirst[*p_iFileTypeIndex],
            &v214);
          v121 = (void (__fastcall ***)(void *, __int64))v214.m_body.m_ptr;
          goto LABEL_295;
        case 6:
          v213.m_isNoCache = 0;
          v221._Mypair._Myval2._Mysize = 0i64;
          v221._Mypair._Myval2._Myres = 0i64;
          std::string::_Tidy(&v221, 0, 0i64);
          std::string::assign(&v221, &_Right, 0i64, 0xFFFFFFFFFFFFFFFFui64);
          extension::BasicFutureObject<extension::AsyncFileImage,void>::AssetCache::getCachedOrLoadStart(
            v133,
            (extension::RefCountablePtr<extension::BasicFutureObject<extension::AsyncFileImage,void>::Body> *)&v213.m_body,
            &v221,
            v134);
          extension::BasicFutureObject<OGLSecondary,void>::operator=(
            (extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> *)&v191._Mypair._Myval2._Myfirst[*p_iFileTypeIndex],
            &v213);
          v121 = (void (__fastcall ***)(void *, __int64))v213.m_body.m_ptr;
          goto LABEL_295;
        case 7:
          if ( !v183._Mypair._Myval2 && !BYTE5(v108[1].__vftable) )
          {
            v193 = (extension::FutureObjectJob<extension::AsyncAsset> *)operator new(0x168ui64);
            EffectDataListManager::EffectDataListManager((EffectDataListManager *)v193);
            v183._Mypair._Myval2 = v135;
            if ( v108[1].m_content.m_ptr )
            {
              v136 = std::operator+<char>(
                       &v256,
                       (const std::string *)&v108[1].m_abort,
                       (const std::string *)p_iFileTypeIndex - 1);
              std::string::assign(&_Right, v136);
              std::string::~string(&v256);
            }
            std::string::assign(&v250, &_Right, 0i64, 0xFFFFFFFFFFFFFFFFui64);
            if ( BYTE5(v108[1].__vftable) )
              std::string::assign(&v250, &pnewText, 0i64);
          }
          goto LABEL_298;
        case 9:
          extension::BasicFutureObject<OGLSecondary,void>::BasicFutureObject<OGLSecondary,void>(
            &v228,
            (extension::FutureObjectSpec::NoCache_t)m_abort,
            &_Right,
            v112);
          extension::BasicFutureObject<OGLSecondary,void>::operator=(
            (extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> *)&v199._Mypair._Myval2._Myfirst[*p_iFileTypeIndex],
            v137);
          v121 = (void (__fastcall ***)(void *, __int64))v228.m_body.m_ptr;
LABEL_295:
          if ( v121 && _InterlockedExchangeAdd64((volatile signed __int64 *)v121[1] + 2, 0xFFFFFFFFFFFFFFFFui64) == 1 )
            (**v121)(v121, 1i64);
          goto LABEL_298;
        default:
LABEL_298:
          std::string::~string(&_Right);
          p_iFileTypeIndex += 12;
          if ( p_iFileTypeIndex - 10 != (int *)v204._Mypair._Myval2._Mylast )
            continue;
          v107 = v186;
          v106 = v203._Mypair._Myval2._Myfirst;
          goto LABEL_300;
      }
      break;
    }
    while ( ((v108[2].m_abort & 0x80000) == 0
          || *(p_iMotionCommonNo - 1) != *p_iFileTypeIndex && *p_iMotionCommonNo != *p_iFileTypeIndex)
         && ((m_abort & 0x100000) == 0
          || p_iMotionCommonNo[2] != *p_iFileTypeIndex && p_iMotionCommonNo[1] != *p_iFileTypeIndex)
         && ((m_abort & 0x200000) == 0 || p_iMotionCommonNo[3] != *p_iFileTypeIndex) )
    {
      p_iMotionCommonNo += 22;
      if ( p_iMotionCommonNo - 3 == (int *)v188._Mypair._Myval2._Mylast )
        goto LABEL_270;
    }
    v119 = std::operator+<char>(&v254, (const std::string *)&v108[2].gap10, (const std::string *)p_iFileTypeIndex - 1);
    std::string::assign(&_Right, v119);
    std::string::~string(&v254);
LABEL_270:
    extension::BasicFutureObject<OGLMotion,void>::BasicFutureObject<OGLMotion,void>(
      &v227,
      (extension::FutureObjectSpec::NoCache_t)m_abort,
      &_Right,
      v112);
    extension::BasicFutureObject<OGLSecondary,void>::operator=(
      (extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> *)&v195._Mypair._Myval2._Myfirst[*p_iFileTypeIndex],
      v120);
    v121 = (void (__fastcall ***)(void *, __int64))v227.m_body.m_ptr;
    goto LABEL_295;
  }
LABEL_300:
  if ( *v107 <= 0
    || (v138 = v191._Mypair._Myval2._Myfirst->m_body.m_ptr->m_content.m_ptr) == 0i64
    || v138->m_isDataReleased )
  {
    _DummyLogging("asset shader fx file not set. in [%s]");
  }
  v139 = (extension::future_asset_detail::AsyncAssetModelBuilder *)operator new(0x128ui64);
  v190 = (__int64)v139;
  v140 = extension::FutureObjectJob<extension::AsyncAsset>::releaseContent(v108, &v211);
  extension::future_asset_detail::AsyncAssetModelBuilder::AsyncAssetModelBuilder(
    v139,
    (extension::RefCountablePtr<extension::AsyncContent<extension::AsyncAsset> >)v140);
  v142 = v141;
  v190 = v141;
  *(_DWORD *)(v141 + 32) = v184;
  *(_BYTE *)(v141 + 36) = BYTE4(v108[1].__vftable);
  v143 = (__int64 *)(v141 + 72);
  if ( (std::vector<extension::future_asset_detail::AssetModelInfo> *)(v141 + 72) != &v188 )
  {
    v242 = (extension::future_asset_detail::AssetModelInfo *)*v143;
    v144 = v242;
    *v143 = (__int64)v188._Mypair._Myval2._Myfirst;
    v188._Mypair._Myval2._Myfirst = v144;
    v243 = *(extension::future_asset_detail::AssetModelInfo **)(v141 + 80);
    v145 = v243;
    *(_QWORD *)(v141 + 80) = v188._Mypair._Myval2._Mylast;
    v188._Mypair._Myval2._Mylast = v145;
    v245 = *(extension::future_asset_detail::AssetModelInfo **)(v141 + 88);
    v146 = v245;
    *(_QWORD *)(v141 + 88) = v188._Mypair._Myval2._Myend;
    v188._Mypair._Myval2._Myend = v146;
  }
  v147 = (__int64 *)(v141 + 96);
  if ( (std::vector<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>> *)(v141 + 96) != &v194 )
  {
    v241 = (extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> *)*v147;
    v148 = v241;
    *v147 = (__int64)v194._Mypair._Myval2._Myfirst;
    v194._Mypair._Myval2._Myfirst = v148;
    v240 = *(extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> **)(v141 + 104);
    v149 = v240;
    *(_QWORD *)(v141 + 104) = v194._Mypair._Myval2._Mylast;
    v194._Mypair._Myval2._Mylast = v149;
    v239 = *(extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption> **)(v141 + 112);
    v150 = v239;
    *(_QWORD *)(v141 + 112) = v194._Mypair._Myval2._Myend;
    v194._Mypair._Myval2._Myend = v150;
  }
  v151 = (__int64 *)(v141 + 120);
  if ( (std::vector<extension::BasicFutureObject<OGLMotion,void>> *)(v141 + 120) != &v195 )
  {
    v238 = (extension::BasicFutureObject<OGLMotion,void> *)*v151;
    v152 = v238;
    *v151 = (__int64)v195._Mypair._Myval2._Myfirst;
    v195._Mypair._Myval2._Myfirst = v152;
    v237 = *(extension::BasicFutureObject<OGLMotion,void> **)(v141 + 128);
    v153 = v237;
    *(_QWORD *)(v141 + 128) = v195._Mypair._Myval2._Mylast;
    v195._Mypair._Myval2._Mylast = v153;
    v248 = *(extension::BasicFutureObject<OGLMotion,void> **)(v141 + 136);
    v154 = v248;
    *(_QWORD *)(v141 + 136) = v195._Mypair._Myval2._Myend;
    v195._Mypair._Myval2._Myend = v154;
  }
  v155 = (__int64 *)(v141 + 144);
  if ( (std::vector<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>> *)(v141 + 144) != &v196 )
  {
    v235 = (extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> *)*v155;
    v156 = v235;
    *v155 = (__int64)v196._Mypair._Myval2._Myfirst;
    v196._Mypair._Myval2._Myfirst = v156;
    v234 = *(extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> **)(v141 + 152);
    v157 = v234;
    *(_QWORD *)(v141 + 152) = v196._Mypair._Myval2._Mylast;
    v196._Mypair._Myval2._Mylast = v157;
    v233 = *(extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption> **)(v141 + 160);
    v158 = v233;
    *(_QWORD *)(v141 + 160) = v196._Mypair._Myval2._Myend;
    v196._Mypair._Myval2._Myend = v158;
  }
  v159 = (__int64 *)(v141 + 168);
  if ( (std::vector<extension::BasicFutureObject<OGLMirror,void>> *)(v141 + 168) != &v197 )
  {
    v232 = (extension::BasicFutureObject<OGLMirror,void> *)*v159;
    v160 = v232;
    *v159 = (__int64)v197._Mypair._Myval2._Myfirst;
    v197._Mypair._Myval2._Myfirst = v160;
    v231 = *(extension::BasicFutureObject<OGLMirror,void> **)(v141 + 176);
    v161 = v231;
    *(_QWORD *)(v141 + 176) = v197._Mypair._Myval2._Mylast;
    v197._Mypair._Myval2._Mylast = v161;
    v230 = *(extension::BasicFutureObject<OGLMirror,void> **)(v141 + 184);
    v162 = v230;
    *(_QWORD *)(v141 + 184) = v197._Mypair._Myval2._Myend;
    v197._Mypair._Myval2._Myend = v162;
  }
  v163 = (__int64 *)(v141 + 192);
  if ( (std::vector<extension::BasicFutureObject<OGLCamera,void>> *)(v141 + 192) != &v198 )
  {
    v229 = (extension::BasicFutureObject<OGLCamera,void> *)*v163;
    v164 = v229;
    *v163 = (__int64)v198._Mypair._Myval2._Myfirst;
    v198._Mypair._Myval2._Myfirst = v164;
    v226 = *(extension::BasicFutureObject<OGLCamera,void> **)(v141 + 200);
    v165 = v226;
    *(_QWORD *)(v141 + 200) = v198._Mypair._Myval2._Mylast;
    v198._Mypair._Myval2._Mylast = v165;
    v225 = *(extension::BasicFutureObject<OGLCamera,void> **)(v141 + 208);
    v166 = v225;
    *(_QWORD *)(v141 + 208) = v198._Mypair._Myval2._Myend;
    v198._Mypair._Myval2._Myend = v166;
  }
  v167 = (__int64 *)(v141 + 216);
  if ( (std::vector<extension::BasicFutureObject<OGLSecondary,void>> *)(v141 + 216) != &v199 )
  {
    v224 = (extension::BasicFutureObject<OGLSecondary,void> *)*v167;
    v168 = v224;
    *v167 = (__int64)v199._Mypair._Myval2._Myfirst;
    v199._Mypair._Myval2._Myfirst = v168;
    v223 = *(extension::BasicFutureObject<OGLSecondary,void> **)(v141 + 224);
    v169 = v223;
    *(_QWORD *)(v141 + 224) = v199._Mypair._Myval2._Mylast;
    v199._Mypair._Myval2._Mylast = v169;
    v222 = *(extension::BasicFutureObject<OGLSecondary,void> **)(v141 + 232);
    v170 = v222;
    *(_QWORD *)(v141 + 232) = v199._Mypair._Myval2._Myend;
    v199._Mypair._Myval2._Myend = v170;
  }
  v171 = (__int64 *)(v141 + 264);
  if ( (std::vector<extension::BasicFutureObject<extension::AsyncFileImage,void>> *)(v141 + 264) != &v191 )
  {
    v247 = (extension::BasicFutureObject<extension::AsyncFileImage,void> *)*v171;
    v172 = v247;
    *v171 = (__int64)v191._Mypair._Myval2._Myfirst;
    v191._Mypair._Myval2._Myfirst = v172;
    v244 = *(extension::BasicFutureObject<extension::AsyncFileImage,void> **)(v141 + 272);
    v173 = v244;
    *(_QWORD *)(v141 + 272) = v191._Mypair._Myval2._Mylast;
    v191._Mypair._Myval2._Mylast = v173;
    v246 = *(extension::BasicFutureObject<extension::AsyncFileImage,void> **)(v141 + 280);
    v174 = v246;
    *(_QWORD *)(v141 + 280) = v191._Mypair._Myval2._Myend;
    v191._Mypair._Myval2._Myend = v174;
  }
  std::unique_ptr<EffectDataListManager>::operator=((std::unique_ptr<EffectDataListManager> *)(v141 + 288), &v183);
  if ( (std::string *)(v142 + 40) != &v250 )
    std::string::assign((std::string *)(v142 + 40), &v250, 0i64, 0xFFFFFFFFFFFFFFFFui64);
  v190 = 0i64;
  job._Mypair._Myval2 = (extension::ExThread::Runnable *)v142;
  extension::AsyncWorker::enqueueFixupJob(
    &extension::AsyncWorker::s_instance,
    (std::unique_ptr<extension::ExThread::Runnable>)&job);
  std::string::~string(&v250);
  std::string::~string(&_Left);
  std::vector<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>>::_Tidy((std::vector<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>> *)&v191);
  if ( v183._Mypair._Myval2 )
    ((void (__fastcall *)(EffectDataListManager *, __int64))v183._Mypair._Myval2->~EffectDataListManager)(
      v183._Mypair._Myval2,
      1i64);
  std::vector<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>>::_Tidy((std::vector<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>> *)&v199);
  std::vector<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>>::_Tidy((std::vector<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>> *)&v198);
  std::vector<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>>::_Tidy((std::vector<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>> *)&v197);
  std::vector<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>>::_Tidy((std::vector<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>> *)&v196);
  std::vector<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>>::_Tidy((std::vector<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>> *)&v195);
  std::vector<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>>::_Tidy((std::vector<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>> *)&v194);
  std::vector<extension::future_asset_detail::`anonymous namespace'::AssetModelInfo>::_Tidy(&v188);
  std::vector<extension::future_asset_detail::FutureAssetJob::FileSpec>::_Tidy(&v204, v175, v176, v177);
  std::_Wrap_alloc<std::allocator<enum extension::SoundConstants::LoadSpec>>::deallocate(
    v178,
    (AgKeyboardButton *)v106,
    v203._Mypair._Myval2._Myend - v106);
  v10 = v187.m_body.m_ptr;
  if ( v187.m_body.m_ptr )
  {
    v179 = _InterlockedDecrement64((volatile signed __int64 *)&v187.m_body.m_ptr->m_refCount.m_ptr->m_sharedCount);
LABEL_331:
    if ( !v179 )
      ((void (__fastcall *)(extension::BasicFutureObject<extension::AsyncFileImage,void>::Body *, __int64))v10->~RefCountableWeakSupportBase)(
        v10,
        1i64);
  }
  return 0i64;
}

__int64 __fastcall extension::future_asset_detail::FutureCameraJob::run(
        extension::future_asset_detail::FutureCameraJob *this)
{
  const std::string *p_m_name; // rdx
  int m_errorCode; // er14
  extension::BasicFutureObject<extension::AsyncFileImage,void>::AssetCache *v4; // rcx
  const void *v5; // r9
  extension::AsyncContent<OGLCamera> *m_ptr; // rax
  extension::AsyncStatus::Step v7; // edx
  __int64 v8; // rax
  std::unique_ptr<OGLCamera> *v9; // rax
  int v10; // edx
  extension::AsyncContent<extension::AsyncFileImage> *v11; // rbx
  extension::AsyncContent<extension::AsyncFileImage> *v12; // rbx
  extension::AsyncContent<extension::AsyncFileImage> *v13; // rbx
  extension::BasicFutureObject<extension::AsyncFileImage,void>::Body *v14; // rax
  extension::AsyncContent<extension::AsyncFileImage> *v15; // rbx
  extension::AsyncFileImage *Myval2; // rcx
  unsigned __int8 *pData; // r15
  extension::AsyncContent<extension::AsyncFileImage> *v18; // rbx
  int *p_m_length; // rax
  int v20; // ebx
  OGLCamera *v21; // rax
  OGLCamera *v22; // rsi
  unsigned int v23; // edx
  OGLCamera *v24; // rbx
  std::unique_ptr<OGLCamera> *v25; // rax
  extension::AsyncContent<OGLCamera> *v26; // rcx
  extension::BasicFutureObject<extension::AsyncFileImage,void>::Body *v27; // rcx
  std::unique_ptr<OGLCamera> result; // [rsp+20h] [rbp-50h] BYREF
  char v30[8]; // [rsp+28h] [rbp-48h] BYREF
  __int64 v31; // [rsp+30h] [rbp-40h]
  char v32; // [rsp+41h] [rbp-2Fh]
  extension::RefCountablePtr<extension::BasicFutureObject<extension::AsyncFileImage,void>::Body> v33; // [rsp+48h] [rbp-28h] BYREF
  std::string v34; // [rsp+50h] [rbp-20h] BYREF
  char v35; // [rsp+B0h] [rbp+40h] BYREF
  char v36; // [rsp+B8h] [rbp+48h] BYREF
  char v37; // [rsp+C0h] [rbp+50h] BYREF
  OGLCamera *v38; // [rsp+C8h] [rbp+58h]

  v31 = -2i64;
  p_m_name = &this->m_content.m_ptr->m_name;
  v32 = 0;
  v34._Mypair._Myval2._Myres = 15i64;
  m_errorCode = 0;
  v34._Mypair._Myval2._Mysize = 0i64;
  v34._Mypair._Myval2._Bx._Buf[0] = 0;
  std::string::assign(&v34, p_m_name, 0i64, 0xFFFFFFFFFFFFFFFFui64);
  extension::BasicFutureObject<extension::AsyncFileImage,void>::AssetCache::getCachedOrLoadStart(v4, &v33, &v34, v5);
  m_ptr = this->m_content.m_ptr;
  if ( m_ptr && (m_ptr->m_status.m_stateFlags.m_value._My_val & 2) != 0
    || (v7 = 16, (v8 = *(_QWORD *)(*(_QWORD *)NtCurrentTeb()->Reserved1[11] + 16i64)) != 0)
    && (*(_QWORD *)(v8 + 8) & 0x100i64) != 0 )
  {
    if ( this->m_content.m_ptr )
    {
      v9 = this->createOnErrorData(this, &v35);
      v10 = 4;
LABEL_49:
      extension::AsyncContent<OGLCamera>::setErrorResultWithData(
        this->m_content.m_ptr,
        v10,
        (std::unique_ptr<OGLCamera>)v9);
    }
  }
  else
  {
    v11 = v33.m_ptr->m_content.m_ptr;
    if ( !v11 || v11->m_isDataReleased )
      goto LABEL_19;
    if ( (v11->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
      extension::AsyncStatus::waitFor(&v11->m_status, (extension::AsyncStatus::Step)16);
    if ( v11->m_errorCode )
    {
      v12 = v33.m_ptr->m_content.m_ptr;
      if ( v12 && !v12->m_isDataReleased )
      {
        if ( (v12->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
          extension::AsyncStatus::waitFor(&v12->m_status, v7);
        m_errorCode = v12->m_errorCode;
      }
      if ( this->m_content.m_ptr )
      {
        v9 = this->createOnErrorData(this, &v36);
        v10 = m_errorCode;
        goto LABEL_49;
      }
    }
    else
    {
LABEL_19:
      v13 = v33.m_ptr->m_content.m_ptr;
      if ( !v13 || v13->m_isDataReleased )
        goto LABEL_56;
      if ( (v13->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
        extension::AsyncStatus::waitFor(&v13->m_status, v7);
      if ( v13->m_data._Mypair._Myval2 )
      {
        v14 = v33.m_ptr;
        v15 = v33.m_ptr->m_content.m_ptr;
        if ( !v15 || v15->m_isDataReleased )
        {
          Myval2 = 0i64;
        }
        else
        {
          if ( (v15->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
            extension::AsyncStatus::waitFor(&v15->m_status, v7);
          Myval2 = v15->m_data._Mypair._Myval2;
          v14 = v33.m_ptr;
        }
        pData = (unsigned __int8 *)Myval2->fileBufPara.pData;
        v18 = v14->m_content.m_ptr;
        if ( !v18 || v18->m_isDataReleased )
        {
          p_m_length = 0i64;
        }
        else
        {
          if ( (v18->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
            extension::AsyncStatus::waitFor(&v18->m_status, v7);
          p_m_length = &v18->m_data._Mypair._Myval2->m_length;
        }
        v20 = *p_m_length;
        v38 = (OGLCamera *)operator new(0xE8ui64);
        OGLCamera::OGLCamera(v38);
        v22 = v21;
        if ( !(unsigned int)OGLCamera::loadOcamData(v21, pData, v20) )
        {
          if ( v22 )
            OGLCamera::`scalar deleting destructor'(v22, v23);
          v22 = 0i64;
        }
        v24 = v22;
        v38 = v22;
        if ( v22 )
        {
          v26 = this->m_content.m_ptr;
          if ( v26 )
          {
            v24 = 0i64;
            v38 = 0i64;
            result._Mypair._Myval2 = v22;
            extension::AsyncContent<OGLCamera>::setResult(v26, (std::unique_ptr<OGLCamera>)&result);
          }
        }
        else if ( this->m_content.m_ptr )
        {
          v25 = this->createOnErrorData(this, &v37);
          extension::AsyncContent<OGLCamera>::setErrorResultWithData(
            this->m_content.m_ptr,
            2,
            (std::unique_ptr<OGLCamera>)v25);
        }
        if ( v24 )
          OGLCamera::`scalar deleting destructor'(v24, v23);
      }
      else
      {
LABEL_56:
        if ( this->m_content.m_ptr )
        {
          v9 = this->createOnErrorData(this, v30);
          v10 = 5;
          goto LABEL_49;
        }
      }
    }
  }
  v27 = v33.m_ptr;
  if ( v33.m_ptr
    && _InterlockedExchangeAdd64(
         (volatile signed __int64 *)&v33.m_ptr->m_refCount.m_ptr->m_sharedCount,
         0xFFFFFFFFFFFFFFFFui64) == 1 )
  {
    ((void (__fastcall *)(extension::BasicFutureObject<extension::AsyncFileImage,void>::Body *, __int64))v27->~RefCountableWeakSupportBase)(
      v27,
      1i64);
  }
  return 0i64;
}

__int64 __fastcall extension::future_asset_detail::FutureCurveJob::run(
        extension::future_asset_detail::FutureCurveJob *this)
{
  extension::AsyncContent<OGLCurve> *m_ptr; // rax
  __int64 v3; // rax
  std::unique_ptr<OGLCurve> *v4; // rax
  const std::string *p_m_name; // rdx
  int m_errorCode; // esi
  extension::BasicFutureObject<extension::AsyncFileImage,void>::AssetCache *v7; // rcx
  const void *v8; // r9
  extension::AsyncStatus::Step v9; // edx
  extension::AsyncContent<extension::AsyncFileImage> *v10; // rbx
  extension::AsyncContent<extension::AsyncFileImage> *v11; // rbx
  std::unique_ptr<OGLCurve> *v12; // rax
  int v13; // edx
  extension::AsyncContent<extension::AsyncFileImage> *v14; // rbx
  extension::BasicFutureObject<extension::AsyncFileImage,void>::Body *v15; // rax
  extension::AsyncContent<extension::AsyncFileImage> *v16; // rbx
  extension::AsyncFileImage *Myval2; // rcx
  unsigned __int8 *pData; // r15
  extension::AsyncContent<extension::AsyncFileImage> *v19; // rbx
  int *p_m_length; // rax
  int v21; // ebx
  OGLCurve *v22; // r14
  unsigned int v23; // edx
  OGLCurve *v24; // rbx
  extension::AsyncContent<OGLCurve> *v25; // rcx
  extension::BasicFutureObject<extension::AsyncFileImage,void>::Body *v26; // rcx
  char v28[8]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v29; // [rsp+28h] [rbp-48h]
  char v30; // [rsp+39h] [rbp-37h]
  extension::RefCountablePtr<extension::BasicFutureObject<extension::AsyncFileImage,void>::Body> v31; // [rsp+40h] [rbp-30h] BYREF
  std::string v32; // [rsp+48h] [rbp-28h] BYREF
  char v33; // [rsp+B0h] [rbp+40h] BYREF
  char v34; // [rsp+B8h] [rbp+48h] BYREF
  OGLCurve *v35; // [rsp+C0h] [rbp+50h]
  std::unique_ptr<OGLCurve> result; // [rsp+C8h] [rbp+58h] BYREF

  v29 = -2i64;
  m_ptr = this->m_content.m_ptr;
  if ( m_ptr && (m_ptr->m_status.m_stateFlags.m_value._My_val & 2) != 0
    || (v3 = *(_QWORD *)(*(_QWORD *)NtCurrentTeb()->Reserved1[11] + 16i64)) != 0
    && (*(_QWORD *)(v3 + 8) & 0x100i64) != 0 )
  {
    if ( this->m_content.m_ptr )
    {
      v4 = this->createOnErrorData(this, &v33);
      extension::AsyncContent<OGLCurve>::setErrorResultWithData(this->m_content.m_ptr, 4, (std::unique_ptr<OGLCurve>)v4);
    }
    return 0i64;
  }
  p_m_name = &this->m_content.m_ptr->m_name;
  v30 = 0;
  v32._Mypair._Myval2._Myres = 15i64;
  m_errorCode = 0;
  v32._Mypair._Myval2._Mysize = 0i64;
  v32._Mypair._Myval2._Bx._Buf[0] = 0;
  std::string::assign(&v32, p_m_name, 0i64, 0xFFFFFFFFFFFFFFFFui64);
  extension::BasicFutureObject<extension::AsyncFileImage,void>::AssetCache::getCachedOrLoadStart(v7, &v31, &v32, v8);
  v10 = v31.m_ptr->m_content.m_ptr;
  if ( v10 && !v10->m_isDataReleased )
  {
    if ( (v10->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
      extension::AsyncStatus::waitFor(&v10->m_status, v9);
    if ( v10->m_errorCode )
    {
      v11 = v31.m_ptr->m_content.m_ptr;
      if ( v11 && !v11->m_isDataReleased )
      {
        if ( (v11->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
          extension::AsyncStatus::waitFor(&v11->m_status, v9);
        m_errorCode = v11->m_errorCode;
      }
      if ( !this->m_content.m_ptr )
        goto LABEL_43;
      v12 = this->createOnErrorData(this, &v34);
      v13 = m_errorCode;
      goto LABEL_42;
    }
  }
  v14 = v31.m_ptr->m_content.m_ptr;
  if ( v14 && !v14->m_isDataReleased )
  {
    if ( (v14->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
      extension::AsyncStatus::waitFor(&v14->m_status, v9);
    if ( v14->m_data._Mypair._Myval2 )
    {
      v15 = v31.m_ptr;
      v16 = v31.m_ptr->m_content.m_ptr;
      if ( !v16 || v16->m_isDataReleased )
      {
        Myval2 = 0i64;
      }
      else
      {
        if ( (v16->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
          extension::AsyncStatus::waitFor(&v16->m_status, v9);
        Myval2 = v16->m_data._Mypair._Myval2;
        v15 = v31.m_ptr;
      }
      pData = (unsigned __int8 *)Myval2->fileBufPara.pData;
      v19 = v15->m_content.m_ptr;
      if ( !v19 || v19->m_isDataReleased )
      {
        p_m_length = 0i64;
      }
      else
      {
        if ( (v19->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
          extension::AsyncStatus::waitFor(&v19->m_status, v9);
        p_m_length = &v19->m_data._Mypair._Myval2->m_length;
      }
      v21 = *p_m_length;
      v22 = (OGLCurve *)operator new(0x10ui64);
      v35 = v22;
      v22->m_CurveData = 0i64;
      *(_QWORD *)&v22->m_CurveCount = 0i64;
      OGLCurve::loadOncData(v22, pData, v21);
      v24 = v22;
      v35 = v22;
      v25 = this->m_content.m_ptr;
      if ( v25 )
      {
        v24 = 0i64;
        v35 = 0i64;
        result._Mypair._Myval2 = v22;
        extension::AsyncContent<OGLCurve>::setResult(v25, (std::unique_ptr<OGLCurve>)&result);
      }
      if ( v24 )
        OGLCurve::`scalar deleting destructor'(v24, v23);
      goto LABEL_43;
    }
  }
  if ( this->m_content.m_ptr )
  {
    v12 = this->createOnErrorData(this, v28);
    v13 = 5;
LABEL_42:
    extension::AsyncContent<OGLCurve>::setErrorResultWithData(
      this->m_content.m_ptr,
      v13,
      (std::unique_ptr<OGLCurve>)v12);
  }
LABEL_43:
  v26 = v31.m_ptr;
  if ( v31.m_ptr
    && _InterlockedExchangeAdd64(
         (volatile signed __int64 *)&v31.m_ptr->m_refCount.m_ptr->m_sharedCount,
         0xFFFFFFFFFFFFFFFFui64) == 1 )
  {
    ((void (__fastcall *)(extension::BasicFutureObject<extension::AsyncFileImage,void>::Body *, __int64))v26->~RefCountableWeakSupportBase)(
      v26,
      1i64);
  }
  return 0i64;
}

__int64 __fastcall extension::future_asset_detail::FutureFigureJob::run(
        extension::future_asset_detail::FutureFigureJob *this)
{
  extension::AsyncContent<OGLFigure> *m_ptr; // rax
  __int64 v3; // rax
  std::unique_ptr<OGLFigure> *v4; // rax
  const std::string *p_m_name; // rdx
  int m_errorCode; // er15
  extension::BasicFutureObject<extension::AsyncFileImage,void>::AssetCache *v7; // rcx
  const void *v8; // r9
  extension::AsyncStatus::Step v9; // edx
  extension::AsyncContent<CMediaSound> *v10; // rbx
  extension::AsyncContent<CMediaSound> *v11; // rbx
  std::unique_ptr<OGLFigure> *v12; // rax
  int v13; // edx
  extension::AsyncContent<CMediaSound> *v14; // rbx
  extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body *v15; // rax
  extension::AsyncContent<CMediaSound> *v16; // rbx
  CMediaSound *Myval2; // rcx
  extension::AsyncContent<CMediaSound> *v18; // rbx
  unsigned int *v19; // rax
  unsigned int v20; // er12
  OGLFigure *Figure; // rbx
  OGLFigure *v22; // rax
  unsigned __int64 v23; // rdx
  OGLFigure *v24; // rdi
  unsigned __int8 bNoMotion; // r12
  extension::FutureAssetOptionFileSetting *Myfirst; // rbx
  extension::FutureAssetOptionFileSetting *Mylast; // rdi
  std::string *v28; // rax
  std::string *Ptr; // rdx
  bool v30; // si
  std::unique_ptr<OGLFigure> *v31; // rax
  extension::AsyncContent<OGLFigure> *v32; // rcx
  OGLFigure *v33; // rax
  extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body *v34; // rcx
  unsigned __int8 *buffer; // [rsp+28h] [rbp-A9h]
  extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> v37; // [rsp+30h] [rbp-A1h] BYREF
  int size[2]; // [rsp+40h] [rbp-91h]
  OGLFigure *v39; // [rsp+48h] [rbp-89h]
  OGLFigure *v40; // [rsp+50h] [rbp-81h]
  char v41[16]; // [rsp+58h] [rbp-79h] BYREF
  char v42[8]; // [rsp+68h] [rbp-69h] BYREF
  char v43[8]; // [rsp+70h] [rbp-61h] BYREF
  char v44[8]; // [rsp+78h] [rbp-59h] BYREF
  std::unique_ptr<OGLFigure> v45; // [rsp+80h] [rbp-51h] BYREF
  std::string v46; // [rsp+88h] [rbp-49h] BYREF
  __int64 v47; // [rsp+A8h] [rbp-29h]
  std::string v48; // [rsp+B0h] [rbp-21h] BYREF
  bool v49; // [rsp+D0h] [rbp-1h]
  std::string result; // [rsp+D8h] [rbp+7h] BYREF

  v47 = -2i64;
  m_ptr = this->m_content.m_ptr;
  if ( m_ptr && (m_ptr->m_status.m_stateFlags.m_value._My_val & 2) != 0
    || (v3 = *(_QWORD *)(*(_QWORD *)NtCurrentTeb()->Reserved1[11] + 16i64)) != 0
    && (*(_QWORD *)(v3 + 8) & 0x100i64) != 0 )
  {
    if ( this->m_content.m_ptr )
    {
      v4 = this->createOnErrorData(this, v42);
      extension::AsyncContent<OGLFigure>::setErrorResultWithData(
        this->m_content.m_ptr,
        4,
        (std::unique_ptr<OGLFigure>)v4);
    }
    return 0i64;
  }
  p_m_name = &this->m_content.m_ptr->m_name;
  v37.m_isNoCache = 0;
  v46._Mypair._Myval2._Myres = 15i64;
  m_errorCode = 0;
  v46._Mypair._Myval2._Mysize = 0i64;
  v46._Mypair._Myval2._Bx._Buf[0] = 0;
  std::string::assign(&v46, p_m_name, 0i64, 0xFFFFFFFFFFFFFFFFui64);
  extension::BasicFutureObject<extension::AsyncFileImage,void>::AssetCache::getCachedOrLoadStart(
    v7,
    (extension::RefCountablePtr<extension::BasicFutureObject<extension::AsyncFileImage,void>::Body> *)&v37.m_body,
    &v46,
    v8);
  v10 = v37.m_body.m_ptr->m_content.m_ptr;
  if ( v10 && !v10->m_isDataReleased )
  {
    if ( (v10->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
      extension::AsyncStatus::waitFor(&v10->m_status, v9);
    if ( v10->m_errorCode )
    {
      v11 = v37.m_body.m_ptr->m_content.m_ptr;
      if ( v11 && !v11->m_isDataReleased )
      {
        if ( (v11->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
          extension::AsyncStatus::waitFor(&v11->m_status, v9);
        m_errorCode = v11->m_errorCode;
      }
      if ( !this->m_content.m_ptr )
        goto LABEL_61;
      v12 = this->createOnErrorData(this, v43);
      v13 = m_errorCode;
      goto LABEL_60;
    }
  }
  v14 = v37.m_body.m_ptr->m_content.m_ptr;
  if ( v14 && !v14->m_isDataReleased )
  {
    if ( (v14->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
      extension::AsyncStatus::waitFor(&v14->m_status, v9);
    if ( v14->m_data._Mypair._Myval2 )
    {
      v15 = v37.m_body.m_ptr;
      v16 = v37.m_body.m_ptr->m_content.m_ptr;
      if ( !v16 || v16->m_isDataReleased )
      {
        Myval2 = 0i64;
      }
      else
      {
        if ( (v16->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
          extension::AsyncStatus::waitFor(&v16->m_status, v9);
        Myval2 = v16->m_data._Mypair._Myval2;
        v15 = v37.m_body.m_ptr;
      }
      buffer = &Myval2->m_pRef[2]->m_playend;
      v18 = v15->m_content.m_ptr;
      if ( !v18 || v18->m_isDataReleased )
      {
        v19 = 0i64;
      }
      else
      {
        if ( (v18->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
          extension::AsyncStatus::waitFor(&v18->m_status, v9);
        v19 = (unsigned int *)v18->m_data._Mypair._Myval2;
      }
      v20 = *v19;
      size[0] = *v19;
      Figure = 0i64;
      v39 = 0i64;
      if ( this->m_createOption.bBaseFigure )
      {
        v40 = (OGLFigure *)operator new(0x108ui64);
        OGLFigure::OGLFigure(v40);
        v24 = v22;
        v40 = v22;
        if ( v22 && (unsigned int)OGLFigure::loadBaseObacData(v22, buffer, v20) == 1 )
        {
          Figure = v24;
          v24 = 0i64;
          v40 = 0i64;
          v39 = Figure;
        }
        if ( v24 )
        {
          OGLFigure::finalize(v24, v23);
          operator delete(v24, 0x108ui64);
        }
      }
      else
      {
        bNoMotion = this->m_createOption.bNoMotion;
        if ( this->m_createOption.fileSetting._Mypair._Myval2._Mylast
           - this->m_createOption.fileSetting._Mypair._Myval2._Myfirst )
        {
          Myfirst = this->m_createOption.fileSetting._Mypair._Myval2._Myfirst;
          Mylast = this->m_createOption.fileSetting._Mypair._Myval2._Mylast;
          if ( Myfirst != Mylast )
          {
            while ( 1 )
            {
              v48._Mypair._Myval2._Myres = 15i64;
              v48._Mypair._Myval2._Mysize = 0i64;
              v48._Mypair._Myval2._Bx._Buf[0] = 0;
              std::string::assign(&v48, &Myfirst->fileName, 0i64, 0xFFFFFFFFFFFFFFFFui64);
              v49 = Myfirst->bNoMotion;
              v28 = extension::BasicFutureObject<OGLSecondary,void>::contentPath(&v37, &result);
              Ptr = &v48;
              if ( v48._Mypair._Myval2._Myres >= 0x10 )
                Ptr = (std::string *)v48._Mypair._Myval2._Bx._Ptr;
              v30 = std::string::find(v28, Ptr->_Mypair._Myval2._Bx._Buf, 0i64, v48._Mypair._Myval2._Mysize) != -1i64;
              std::string::~string(&result);
              if ( v30 )
                break;
              std::string::~string(&v48);
              if ( ++Myfirst == Mylast )
                goto LABEL_50;
            }
            bNoMotion = v49;
            std::string::~string(&v48);
          }
        }
LABEL_50:
        Figure = OGLFigure::createFigure(buffer, size[0], this->m_createOption.bMemoryAllocationByCPU, bNoMotion);
        v39 = Figure;
      }
      if ( Figure )
      {
        v32 = this->m_content.m_ptr;
        if ( v32 )
        {
          v33 = Figure;
          Figure = 0i64;
          v39 = 0i64;
          v45._Mypair._Myval2 = v33;
          extension::AsyncContent<OGLFigure>::setResult(v32, (std::unique_ptr<OGLFigure>)&v45);
        }
      }
      else if ( this->m_content.m_ptr )
      {
        v31 = this->createOnErrorData(this, v44);
        extension::AsyncContent<OGLFigure>::setErrorResultWithData(
          this->m_content.m_ptr,
          2,
          (std::unique_ptr<OGLFigure>)v31);
      }
      if ( Figure )
      {
        OGLFigure::finalize(Figure, v23);
        operator delete(Figure, 0x108ui64);
      }
      goto LABEL_61;
    }
  }
  if ( this->m_content.m_ptr )
  {
    v12 = this->createOnErrorData(this, v41);
    v13 = 5;
LABEL_60:
    extension::AsyncContent<OGLFigure>::setErrorResultWithData(
      this->m_content.m_ptr,
      v13,
      (std::unique_ptr<OGLFigure>)v12);
  }
LABEL_61:
  v34 = v37.m_body.m_ptr;
  if ( v37.m_body.m_ptr
    && _InterlockedExchangeAdd64(
         (volatile signed __int64 *)&v37.m_body.m_ptr->m_refCount.m_ptr->m_sharedCount,
         0xFFFFFFFFFFFFFFFFui64) == 1 )
  {
    ((void (__fastcall *)(extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body *, __int64))v34->~RefCountableWeakSupportBase)(
      v34,
      1i64);
  }
  return 0i64;
}

__int64 __fastcall extension::future_asset_detail::FutureFileImageJob::run(
        extension::future_asset_detail::FutureFileImageJob *this)
{
  unsigned __int64 v2; // rdx
  int v3; // edi
  std::unique_ptr<extension::AsyncFileImage> *v4; // rax
  extension::AsyncContent<extension::AsyncFileImage> *m_ptr; // rcx
  extension::AsyncFileImage *Myval2; // rbx
  void *pData; // rcx
  std::unique_ptr<extension::AsyncFileImage> fileImage; // [rsp+48h] [rbp+10h] BYREF
  char v10; // [rsp+50h] [rbp+18h] BYREF

  fileImage._Mypair._Myval2 = 0i64;
  v3 = extension::future_asset_detail::FutureFileImageJob::ReadFileImage<OGLTexture>(
         (extension::FutureObjectJob<OGLTexture> *)this,
         &fileImage);
  if ( v3 )
  {
    if ( this->m_content.m_ptr )
    {
      v4 = this->createOnErrorData(this, &v10);
      extension::AsyncContent<extension::AsyncFileImage>::setErrorResultWithData(
        this->m_content.m_ptr,
        v3,
        (std::unique_ptr<extension::AsyncFileImage>)v4);
    }
  }
  else
  {
    m_ptr = this->m_content.m_ptr;
    if ( m_ptr )
    {
      Myval2 = 0i64;
      extension::AsyncContent<extension::AsyncFileImage>::setResult(
        m_ptr,
        (std::unique_ptr<extension::AsyncFileImage>)&fileImage);
      goto LABEL_7;
    }
  }
  Myval2 = fileImage._Mypair._Myval2;
LABEL_7:
  if ( Myval2 )
  {
    pData = Myval2->fileBufPara.pData;
    if ( pData )
    {
      operator delete(pData, v2);
      Myval2->fileBufPara.pData = 0i64;
    }
    operator delete(Myval2, 0x18ui64);
  }
  return 0i64;
}

__int64 __fastcall extension::future_asset_detail::FutureImageJob::run(
        extension::future_asset_detail::FutureImageJob *this)
{
  unsigned __int64 v2; // rdx
  int v3; // ebx
  unsigned __int8 *v4; // r9
  extension::AsyncFileImage *Myval2; // rdi
  std::unique_ptr<Image> *v6; // rax
  Image *ImageBuf; // rbx
  std::unique_ptr<Image> *v8; // rax
  const std::string *p_m_name; // rdx
  extension::AsyncContent<Image> *m_ptr; // rcx
  extension::AsyncFileImage *v11; // rax
  void *pData; // rcx
  std::unique_ptr<extension::AsyncFileImage> fileImage; // [rsp+68h] [rbp+10h] BYREF
  char v15; // [rsp+70h] [rbp+18h] BYREF
  Image *v16; // [rsp+78h] [rbp+20h]

  fileImage._Mypair._Myval2 = 0i64;
  v3 = extension::future_asset_detail::FutureFileImageJob::ReadFileImage<OGLTexture>(
         (extension::FutureObjectJob<OGLTexture> *)this,
         &fileImage);
  Myval2 = fileImage._Mypair._Myval2;
  if ( v3 )
  {
    if ( this->m_content.m_ptr )
    {
      v6 = this->createOnErrorData(this, &v15);
      extension::AsyncContent<Image>::setErrorResultWithData(
        (extension::AsyncContent<OGLTexture> *)this->m_content.m_ptr,
        v3,
        (std::unique_ptr<OGLTexture>)v6);
    }
  }
  else
  {
    ImageBuf = Image::createImageBuf(
                 (unsigned __int8 *)fileImage._Mypair._Myval2->fileBufPara.pData,
                 fileImage._Mypair._Myval2->m_length,
                 this->m_createOption.texParam,
                 v4);
    v16 = ImageBuf;
    if ( ImageBuf )
    {
      ImageBuf->m_Transparent = this->m_createOption.transparent;
      p_m_name = &this->m_content.m_ptr->m_name;
      if ( this->m_content.m_ptr->m_name._Mypair._Myval2._Myres >= 0x10 )
        p_m_name = (const std::string *)p_m_name->_Mypair._Myval2._Bx._Ptr;
      OGLTexture::setFileInfo(
        ImageBuf,
        p_m_name->_Mypair._Myval2._Bx._Buf,
        this->m_createOption.filter,
        this->m_createOption.transparent,
        -2);
      m_ptr = this->m_content.m_ptr;
      if ( m_ptr )
      {
        v11 = (extension::AsyncFileImage *)ImageBuf;
        ImageBuf = 0i64;
        fileImage._Mypair._Myval2 = v11;
        extension::AsyncContent<OGLTexture>::setResult(m_ptr, (std::unique_ptr<Image>)&fileImage);
      }
    }
    else if ( this->m_content.m_ptr )
    {
      v8 = this->createOnErrorData(this, &v15);
      extension::AsyncContent<Image>::setErrorResultWithData(
        (extension::AsyncContent<OGLTexture> *)this->m_content.m_ptr,
        2,
        (std::unique_ptr<OGLTexture>)v8);
    }
    if ( ImageBuf )
      ((void (__fastcall *)(Image *, __int64))ImageBuf->~OGLTexture)(ImageBuf, 1i64);
  }
  if ( Myval2 )
  {
    pData = Myval2->fileBufPara.pData;
    if ( pData )
    {
      operator delete(pData, v2);
      Myval2->fileBufPara.pData = 0i64;
    }
    operator delete(Myval2, 0x18ui64);
  }
  return 0i64;
}

__int64 __fastcall extension::future_asset_detail::FutureMirrorJob::run(
        extension::future_asset_detail::FutureMirrorJob *this)
{
  extension::AsyncContent<OGLMirror> *m_ptr; // rax
  __int64 v3; // rax
  std::unique_ptr<OGLMirror> *v4; // rax
  const std::string *p_m_name; // rdx
  int m_errorCode; // esi
  extension::BasicFutureObject<extension::AsyncFileImage,void>::AssetCache *v7; // rcx
  const void *v8; // r9
  extension::AsyncStatus::Step v9; // edx
  extension::AsyncContent<extension::AsyncFileImage> *v10; // rbx
  extension::AsyncContent<extension::AsyncFileImage> *v11; // rbx
  std::unique_ptr<OGLMirror> *v12; // rax
  int v13; // edx
  extension::AsyncContent<extension::AsyncFileImage> *v14; // rbx
  extension::BasicFutureObject<extension::AsyncFileImage,void>::Body *v15; // rax
  extension::AsyncContent<extension::AsyncFileImage> *v16; // rbx
  extension::AsyncFileImage *Myval2; // rcx
  unsigned __int8 *pData; // r14
  extension::AsyncContent<extension::AsyncFileImage> *v19; // rbx
  int *p_m_length; // rax
  OGLMirror *Mirror; // rax
  unsigned __int64 v22; // rdx
  OGLMirror *v23; // rbx
  std::unique_ptr<OGLMirror> *v24; // rax
  extension::AsyncContent<OGLMirror> *v25; // rcx
  extension::BasicFutureObject<extension::AsyncFileImage,void>::Body *v26; // rcx
  std::unique_ptr<OGLMirror> result; // [rsp+20h] [rbp-58h] BYREF
  char v29[8]; // [rsp+28h] [rbp-50h] BYREF
  __int64 v30; // [rsp+30h] [rbp-48h]
  char v31; // [rsp+41h] [rbp-37h]
  extension::RefCountablePtr<extension::BasicFutureObject<extension::AsyncFileImage,void>::Body> v32; // [rsp+48h] [rbp-30h] BYREF
  std::string v33; // [rsp+50h] [rbp-28h] BYREF
  char v34; // [rsp+B0h] [rbp+38h] BYREF
  char v35; // [rsp+B8h] [rbp+40h] BYREF
  char v36; // [rsp+C0h] [rbp+48h] BYREF
  OGLMirror *v37; // [rsp+C8h] [rbp+50h]

  v30 = -2i64;
  m_ptr = this->m_content.m_ptr;
  if ( m_ptr && (m_ptr->m_status.m_stateFlags.m_value._My_val & 2) != 0
    || (v3 = *(_QWORD *)(*(_QWORD *)NtCurrentTeb()->Reserved1[11] + 16i64)) != 0
    && (*(_QWORD *)(v3 + 8) & 0x100i64) != 0 )
  {
    if ( this->m_content.m_ptr )
    {
      v4 = this->createOnErrorData(this, &v34);
      extension::AsyncContent<OGLMirror>::setErrorResultWithData(
        this->m_content.m_ptr,
        4,
        (std::unique_ptr<OGLMirror>)v4);
    }
    return 0i64;
  }
  p_m_name = &this->m_content.m_ptr->m_name;
  v31 = 0;
  v33._Mypair._Myval2._Myres = 15i64;
  m_errorCode = 0;
  v33._Mypair._Myval2._Mysize = 0i64;
  v33._Mypair._Myval2._Bx._Buf[0] = 0;
  std::string::assign(&v33, p_m_name, 0i64, 0xFFFFFFFFFFFFFFFFui64);
  extension::BasicFutureObject<extension::AsyncFileImage,void>::AssetCache::getCachedOrLoadStart(v7, &v32, &v33, v8);
  v10 = v32.m_ptr->m_content.m_ptr;
  if ( v10 && !v10->m_isDataReleased )
  {
    if ( (v10->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
      extension::AsyncStatus::waitFor(&v10->m_status, v9);
    if ( v10->m_errorCode )
    {
      v11 = v32.m_ptr->m_content.m_ptr;
      if ( v11 && !v11->m_isDataReleased )
      {
        if ( (v11->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
          extension::AsyncStatus::waitFor(&v11->m_status, v9);
        m_errorCode = v11->m_errorCode;
      }
      if ( !this->m_content.m_ptr )
        goto LABEL_46;
      v12 = this->createOnErrorData(this, &v35);
      v13 = m_errorCode;
      goto LABEL_45;
    }
  }
  v14 = v32.m_ptr->m_content.m_ptr;
  if ( v14 && !v14->m_isDataReleased )
  {
    if ( (v14->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
      extension::AsyncStatus::waitFor(&v14->m_status, v9);
    if ( v14->m_data._Mypair._Myval2 )
    {
      v15 = v32.m_ptr;
      v16 = v32.m_ptr->m_content.m_ptr;
      if ( !v16 || v16->m_isDataReleased )
      {
        Myval2 = 0i64;
      }
      else
      {
        if ( (v16->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
          extension::AsyncStatus::waitFor(&v16->m_status, v9);
        Myval2 = v16->m_data._Mypair._Myval2;
        v15 = v32.m_ptr;
      }
      pData = (unsigned __int8 *)Myval2->fileBufPara.pData;
      v19 = v15->m_content.m_ptr;
      if ( !v19 || v19->m_isDataReleased )
      {
        p_m_length = 0i64;
      }
      else
      {
        if ( (v19->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
          extension::AsyncStatus::waitFor(&v19->m_status, v9);
        p_m_length = &v19->m_data._Mypair._Myval2->m_length;
      }
      Mirror = OGLMirror::createMirror(pData, *p_m_length);
      v23 = Mirror;
      v37 = Mirror;
      if ( Mirror )
      {
        v25 = this->m_content.m_ptr;
        if ( v25 )
        {
          v23 = 0i64;
          v37 = 0i64;
          result._Mypair._Myval2 = Mirror;
          extension::AsyncContent<OGLMirror>::setResult(v25, (std::unique_ptr<OGLMirror>)&result);
        }
      }
      else if ( this->m_content.m_ptr )
      {
        v24 = this->createOnErrorData(this, &v36);
        extension::AsyncContent<OGLMirror>::setErrorResultWithData(
          this->m_content.m_ptr,
          2,
          (std::unique_ptr<OGLMirror>)v24);
      }
      if ( v23 )
      {
        OGLMirror::finalize(v23, v22);
        operator delete(v23, 0x20ui64);
      }
      goto LABEL_46;
    }
  }
  if ( this->m_content.m_ptr )
  {
    v12 = this->createOnErrorData(this, v29);
    v13 = 5;
LABEL_45:
    extension::AsyncContent<OGLMirror>::setErrorResultWithData(
      this->m_content.m_ptr,
      v13,
      (std::unique_ptr<OGLMirror>)v12);
  }
LABEL_46:
  v26 = v32.m_ptr;
  if ( v32.m_ptr
    && _InterlockedExchangeAdd64(
         (volatile signed __int64 *)&v32.m_ptr->m_refCount.m_ptr->m_sharedCount,
         0xFFFFFFFFFFFFFFFFui64) == 1 )
  {
    ((void (__fastcall *)(extension::BasicFutureObject<extension::AsyncFileImage,void>::Body *, __int64))v26->~RefCountableWeakSupportBase)(
      v26,
      1i64);
  }
  return 0i64;
}

__int64 __fastcall extension::future_asset_detail::FutureMotionJob::run(
        extension::future_asset_detail::FutureMotionJob *this)
{
  extension::AsyncContent<OGLMotion> *m_ptr; // rax
  __int64 v3; // rax
  std::unique_ptr<OGLMotion> *v4; // rax
  const std::string *p_m_name; // rdx
  int m_errorCode; // esi
  extension::BasicFutureObject<extension::AsyncFileImage,void>::AssetCache *v7; // rcx
  const void *v8; // r9
  extension::AsyncStatus::Step v9; // edx
  extension::AsyncContent<extension::AsyncFileImage> *v10; // rbx
  extension::AsyncContent<extension::AsyncFileImage> *v11; // rbx
  std::unique_ptr<OGLMotion> *v12; // rax
  int v13; // edx
  extension::AsyncContent<extension::AsyncFileImage> *v14; // rbx
  extension::BasicFutureObject<extension::AsyncFileImage,void>::Body *v15; // rax
  extension::AsyncContent<extension::AsyncFileImage> *v16; // rbx
  extension::AsyncFileImage *Myval2; // rcx
  unsigned __int8 *pData; // r14
  extension::AsyncContent<extension::AsyncFileImage> *v19; // rbx
  int *p_m_length; // rax
  OGLMotion *Motion; // rax
  unsigned __int64 v22; // rdx
  OGLMotion *v23; // rbx
  std::unique_ptr<OGLMotion> *v24; // rax
  extension::AsyncContent<OGLMotion> *v25; // rcx
  extension::BasicFutureObject<extension::AsyncFileImage,void>::Body *v26; // rcx
  std::unique_ptr<OGLMotion> result; // [rsp+20h] [rbp-58h] BYREF
  char v29[8]; // [rsp+28h] [rbp-50h] BYREF
  __int64 v30; // [rsp+30h] [rbp-48h]
  char v31; // [rsp+41h] [rbp-37h]
  extension::RefCountablePtr<extension::BasicFutureObject<extension::AsyncFileImage,void>::Body> v32; // [rsp+48h] [rbp-30h] BYREF
  std::string v33; // [rsp+50h] [rbp-28h] BYREF
  char v34; // [rsp+B0h] [rbp+38h] BYREF
  char v35; // [rsp+B8h] [rbp+40h] BYREF
  char v36; // [rsp+C0h] [rbp+48h] BYREF
  OGLMotion *v37; // [rsp+C8h] [rbp+50h]

  v30 = -2i64;
  m_ptr = this->m_content.m_ptr;
  if ( m_ptr && (m_ptr->m_status.m_stateFlags.m_value._My_val & 2) != 0
    || (v3 = *(_QWORD *)(*(_QWORD *)NtCurrentTeb()->Reserved1[11] + 16i64)) != 0
    && (*(_QWORD *)(v3 + 8) & 0x100i64) != 0 )
  {
    if ( this->m_content.m_ptr )
    {
      v4 = this->createOnErrorData(this, &v34);
      extension::AsyncContent<OGLMotion>::setErrorResultWithData(
        this->m_content.m_ptr,
        4,
        (std::unique_ptr<OGLMotion>)v4);
    }
    return 0i64;
  }
  p_m_name = &this->m_content.m_ptr->m_name;
  v31 = 0;
  v33._Mypair._Myval2._Myres = 15i64;
  m_errorCode = 0;
  v33._Mypair._Myval2._Mysize = 0i64;
  v33._Mypair._Myval2._Bx._Buf[0] = 0;
  std::string::assign(&v33, p_m_name, 0i64, 0xFFFFFFFFFFFFFFFFui64);
  extension::BasicFutureObject<extension::AsyncFileImage,void>::AssetCache::getCachedOrLoadStart(v7, &v32, &v33, v8);
  v10 = v32.m_ptr->m_content.m_ptr;
  if ( v10 && !v10->m_isDataReleased )
  {
    if ( (v10->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
      extension::AsyncStatus::waitFor(&v10->m_status, v9);
    if ( v10->m_errorCode )
    {
      v11 = v32.m_ptr->m_content.m_ptr;
      if ( v11 && !v11->m_isDataReleased )
      {
        if ( (v11->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
          extension::AsyncStatus::waitFor(&v11->m_status, v9);
        m_errorCode = v11->m_errorCode;
      }
      if ( !this->m_content.m_ptr )
        goto LABEL_46;
      v12 = this->createOnErrorData(this, &v35);
      v13 = m_errorCode;
      goto LABEL_45;
    }
  }
  v14 = v32.m_ptr->m_content.m_ptr;
  if ( v14 && !v14->m_isDataReleased )
  {
    if ( (v14->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
      extension::AsyncStatus::waitFor(&v14->m_status, v9);
    if ( v14->m_data._Mypair._Myval2 )
    {
      v15 = v32.m_ptr;
      v16 = v32.m_ptr->m_content.m_ptr;
      if ( !v16 || v16->m_isDataReleased )
      {
        Myval2 = 0i64;
      }
      else
      {
        if ( (v16->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
          extension::AsyncStatus::waitFor(&v16->m_status, v9);
        Myval2 = v16->m_data._Mypair._Myval2;
        v15 = v32.m_ptr;
      }
      pData = (unsigned __int8 *)Myval2->fileBufPara.pData;
      v19 = v15->m_content.m_ptr;
      if ( !v19 || v19->m_isDataReleased )
      {
        p_m_length = 0i64;
      }
      else
      {
        if ( (v19->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
          extension::AsyncStatus::waitFor(&v19->m_status, v9);
        p_m_length = &v19->m_data._Mypair._Myval2->m_length;
      }
      Motion = OGLMotion::createMotion(pData, *p_m_length);
      v23 = Motion;
      v37 = Motion;
      if ( Motion )
      {
        v25 = this->m_content.m_ptr;
        if ( v25 )
        {
          v23 = 0i64;
          v37 = 0i64;
          result._Mypair._Myval2 = Motion;
          extension::AsyncContent<OGLMotion>::setResult(v25, (std::unique_ptr<OGLMotion>)&result);
        }
      }
      else if ( this->m_content.m_ptr )
      {
        v24 = this->createOnErrorData(this, &v36);
        extension::AsyncContent<OGLMotion>::setErrorResultWithData(
          this->m_content.m_ptr,
          2,
          (std::unique_ptr<OGLMotion>)v24);
      }
      if ( v23 )
      {
        OGLMotion::finalize(v23, v22);
        operator delete(v23, 0x30ui64);
      }
      goto LABEL_46;
    }
  }
  if ( this->m_content.m_ptr )
  {
    v12 = this->createOnErrorData(this, v29);
    v13 = 5;
LABEL_45:
    extension::AsyncContent<OGLMotion>::setErrorResultWithData(
      this->m_content.m_ptr,
      v13,
      (std::unique_ptr<OGLMotion>)v12);
  }
LABEL_46:
  v26 = v32.m_ptr;
  if ( v32.m_ptr
    && _InterlockedExchangeAdd64(
         (volatile signed __int64 *)&v32.m_ptr->m_refCount.m_ptr->m_sharedCount,
         0xFFFFFFFFFFFFFFFFui64) == 1 )
  {
    ((void (__fastcall *)(extension::BasicFutureObject<extension::AsyncFileImage,void>::Body *, __int64))v26->~RefCountableWeakSupportBase)(
      v26,
      1i64);
  }
  return 0i64;
}

__int64 __fastcall extension::future_asset_detail::FutureSecondaryJob::run(
        extension::future_asset_detail::FutureSecondaryJob *this)
{
  const std::string *p_m_name; // rdx
  int m_errorCode; // esi
  extension::BasicFutureObject<extension::AsyncFileImage,void>::AssetCache *v4; // rcx
  const void *v5; // r9
  extension::AsyncContent<OGLSecondary> *m_ptr; // rax
  extension::AsyncStatus::Step v7; // edx
  __int64 v8; // rax
  std::unique_ptr<OGLSecondary> *v9; // rax
  int v10; // edx
  extension::AsyncContent<extension::AsyncFileImage> *v11; // rbx
  extension::AsyncContent<extension::AsyncFileImage> *v12; // rbx
  extension::AsyncContent<extension::AsyncFileImage> *v13; // rbx
  extension::BasicFutureObject<extension::AsyncFileImage,void>::Body *v14; // rax
  extension::AsyncContent<extension::AsyncFileImage> *v15; // rbx
  extension::AsyncFileImage *Myval2; // rcx
  unsigned __int8 *pData; // r14
  extension::AsyncContent<extension::AsyncFileImage> *v18; // rbx
  int *p_m_length; // rax
  OGLSecondary *Secondary; // rax
  unsigned __int64 v21; // rdx
  OGLSecondary *v22; // rbx
  std::unique_ptr<OGLSecondary> *v23; // rax
  extension::AsyncContent<OGLSecondary> *v24; // rcx
  extension::BasicFutureObject<extension::AsyncFileImage,void>::Body *v25; // rcx
  std::unique_ptr<OGLSecondary> result; // [rsp+20h] [rbp-58h] BYREF
  char v28[8]; // [rsp+28h] [rbp-50h] BYREF
  __int64 v29; // [rsp+30h] [rbp-48h]
  char v30; // [rsp+41h] [rbp-37h]
  extension::RefCountablePtr<extension::BasicFutureObject<extension::AsyncFileImage,void>::Body> v31; // [rsp+48h] [rbp-30h] BYREF
  std::string v32; // [rsp+50h] [rbp-28h] BYREF
  char v33; // [rsp+B0h] [rbp+38h] BYREF
  char v34; // [rsp+B8h] [rbp+40h] BYREF
  char v35; // [rsp+C0h] [rbp+48h] BYREF
  OGLSecondary *v36; // [rsp+C8h] [rbp+50h]

  v29 = -2i64;
  p_m_name = &this->m_content.m_ptr->m_name;
  v30 = 0;
  v32._Mypair._Myval2._Myres = 15i64;
  m_errorCode = 0;
  v32._Mypair._Myval2._Mysize = 0i64;
  v32._Mypair._Myval2._Bx._Buf[0] = 0;
  std::string::assign(&v32, p_m_name, 0i64, 0xFFFFFFFFFFFFFFFFui64);
  extension::BasicFutureObject<extension::AsyncFileImage,void>::AssetCache::getCachedOrLoadStart(v4, &v31, &v32, v5);
  m_ptr = this->m_content.m_ptr;
  if ( m_ptr && (m_ptr->m_status.m_stateFlags.m_value._My_val & 2) != 0
    || (v7 = 16, (v8 = *(_QWORD *)(*(_QWORD *)NtCurrentTeb()->Reserved1[11] + 16i64)) != 0)
    && (*(_QWORD *)(v8 + 8) & 0x100i64) != 0 )
  {
    if ( this->m_content.m_ptr )
    {
      v9 = this->createOnErrorData(this, &v33);
      v10 = 4;
LABEL_45:
      extension::AsyncContent<OGLSecondary>::setErrorResultWithData(
        this->m_content.m_ptr,
        v10,
        (std::unique_ptr<OGLSecondary>)v9);
    }
  }
  else
  {
    v11 = v31.m_ptr->m_content.m_ptr;
    if ( !v11 || v11->m_isDataReleased )
      goto LABEL_19;
    if ( (v11->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
      extension::AsyncStatus::waitFor(&v11->m_status, (extension::AsyncStatus::Step)16);
    if ( v11->m_errorCode )
    {
      v12 = v31.m_ptr->m_content.m_ptr;
      if ( v12 && !v12->m_isDataReleased )
      {
        if ( (v12->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
          extension::AsyncStatus::waitFor(&v12->m_status, v7);
        m_errorCode = v12->m_errorCode;
      }
      if ( this->m_content.m_ptr )
      {
        v9 = this->createOnErrorData(this, &v34);
        v10 = m_errorCode;
        goto LABEL_45;
      }
    }
    else
    {
LABEL_19:
      v13 = v31.m_ptr->m_content.m_ptr;
      if ( !v13 || v13->m_isDataReleased )
        goto LABEL_52;
      if ( (v13->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
        extension::AsyncStatus::waitFor(&v13->m_status, v7);
      if ( v13->m_data._Mypair._Myval2 )
      {
        v14 = v31.m_ptr;
        v15 = v31.m_ptr->m_content.m_ptr;
        if ( !v15 || v15->m_isDataReleased )
        {
          Myval2 = 0i64;
        }
        else
        {
          if ( (v15->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
            extension::AsyncStatus::waitFor(&v15->m_status, v7);
          Myval2 = v15->m_data._Mypair._Myval2;
          v14 = v31.m_ptr;
        }
        pData = (unsigned __int8 *)Myval2->fileBufPara.pData;
        v18 = v14->m_content.m_ptr;
        if ( !v18 || v18->m_isDataReleased )
        {
          p_m_length = 0i64;
        }
        else
        {
          if ( (v18->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
            extension::AsyncStatus::waitFor(&v18->m_status, v7);
          p_m_length = &v18->m_data._Mypair._Myval2->m_length;
        }
        Secondary = OGLSecondary::createSecondary(pData, *p_m_length);
        v22 = Secondary;
        v36 = Secondary;
        if ( Secondary )
        {
          v24 = this->m_content.m_ptr;
          if ( v24 )
          {
            v22 = 0i64;
            v36 = 0i64;
            result._Mypair._Myval2 = Secondary;
            extension::AsyncContent<OGLSecondary>::setResult(v24, (std::unique_ptr<OGLSecondary>)&result);
          }
        }
        else if ( this->m_content.m_ptr )
        {
          v23 = this->createOnErrorData(this, &v35);
          extension::AsyncContent<OGLSecondary>::setErrorResultWithData(
            this->m_content.m_ptr,
            2,
            (std::unique_ptr<OGLSecondary>)v23);
        }
        if ( v22 )
        {
          OGLSecondary::finalize(v22, v21);
          operator delete(v22, 0x28ui64);
        }
      }
      else
      {
LABEL_52:
        if ( this->m_content.m_ptr )
        {
          v9 = this->createOnErrorData(this, v28);
          v10 = 5;
          goto LABEL_45;
        }
      }
    }
  }
  v25 = v31.m_ptr;
  if ( v31.m_ptr
    && _InterlockedExchangeAdd64(
         (volatile signed __int64 *)&v31.m_ptr->m_refCount.m_ptr->m_sharedCount,
         0xFFFFFFFFFFFFFFFFui64) == 1 )
  {
    ((void (__fastcall *)(extension::BasicFutureObject<extension::AsyncFileImage,void>::Body *, __int64))v25->~RefCountableWeakSupportBase)(
      v25,
      1i64);
  }
  return 0i64;
}

__int64 __fastcall extension::future_asset_detail::FutureTextureJob::run(
        extension::future_asset_detail::FutureTextureJob *this)
{
  unsigned __int64 v2; // rdx
  int v3; // edi
  extension::AsyncFileImage *Myval2; // rbx
  std::unique_ptr<OGLTexture> *v5; // rax
  unsigned __int8 *Myfirst; // r9
  OGLTexture *TextureBuf; // rdi
  std::unique_ptr<OGLTexture> *v8; // rax
  extension::AsyncContent<Image> *m_ptr; // rcx
  extension::AsyncFileImage *v10; // rax
  void *pData; // rcx
  std::unique_ptr<extension::AsyncFileImage> fileImage; // [rsp+68h] [rbp+10h] BYREF
  char v14; // [rsp+70h] [rbp+18h] BYREF
  OGLTexture *v15; // [rsp+78h] [rbp+20h]

  fileImage._Mypair._Myval2 = 0i64;
  v3 = extension::future_asset_detail::FutureFileImageJob::ReadFileImage<OGLTexture>(this, &fileImage);
  Myval2 = fileImage._Mypair._Myval2;
  if ( v3 )
  {
    if ( this->m_content.m_ptr )
    {
      v5 = this->createOnErrorData(this, &v14);
      extension::AsyncContent<Image>::setErrorResultWithData(this->m_content.m_ptr, v3, (std::unique_ptr<OGLTexture>)v5);
    }
  }
  else
  {
    if ( this->m_createOption.paletteData._Mypair._Myval2._Myfirst == this->m_createOption.paletteData._Mypair._Myval2._Mylast )
      Myfirst = 0i64;
    else
      Myfirst = this->m_createOption.paletteData._Mypair._Myval2._Myfirst;
    TextureBuf = OGLTexture::createTextureBuf(
                   (unsigned __int8 *)fileImage._Mypair._Myval2->fileBufPara.pData,
                   fileImage._Mypair._Myval2->m_length,
                   this->m_createOption.texParam,
                   Myfirst,
                   this->m_createOption.keyIndex);
    v15 = TextureBuf;
    if ( !TextureBuf && this->m_content.m_ptr )
    {
      v8 = this->createOnErrorData(this, &v14);
      extension::AsyncContent<Image>::setErrorResultWithData(this->m_content.m_ptr, 2, (std::unique_ptr<OGLTexture>)v8);
    }
    m_ptr = (extension::AsyncContent<Image> *)this->m_content.m_ptr;
    if ( m_ptr )
    {
      v10 = (extension::AsyncFileImage *)TextureBuf;
      TextureBuf = 0i64;
      fileImage._Mypair._Myval2 = v10;
      extension::AsyncContent<OGLTexture>::setResult(m_ptr, (std::unique_ptr<Image>)&fileImage);
    }
    if ( TextureBuf )
      ((void (__fastcall *)(OGLTexture *, __int64))TextureBuf->~OGLTexture)(TextureBuf, 1i64);
  }
  if ( Myval2 )
  {
    pData = Myval2->fileBufPara.pData;
    if ( pData )
    {
      operator delete(pData, v2);
      Myval2->fileBufPara.pData = 0i64;
    }
    operator delete(Myval2, 0x18ui64);
  }
  return 0i64;
}

void __fastcall extension::FutureObjectJob<extension::AsyncAsset>::setErrorResult(
        extension::FutureObjectJob<extension::AsyncAsset> *this,
        extension::AsyncContentConstants::ErrorCode e)
{
  std::unique_ptr<extension::AsyncAsset> *v4; // rax
  char v5; // [rsp+30h] [rbp+8h] BYREF

  if ( this->m_content.m_ptr )
  {
    v4 = this->createOnErrorData(this, &v5);
    extension::AsyncContent<extension::AsyncAsset>::setErrorResultWithData(
      this->m_content.m_ptr,
      e,
      (std::unique_ptr<extension::AsyncAsset>)v4);
  }
}

void __fastcall extension::AsyncContent<extension::AsyncAsset>::setErrorResultWithData(
        extension::AsyncContent<extension::AsyncAsset> *this,
        int e,
        std::unique_ptr<extension::AsyncAsset> data)
{
  extension::AsyncAsset *Ptr; // rax
  extension::AsyncAsset *Myval2; // rdi
  extension::AsyncAsset *v7; // rbx

  if ( (this->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
  {
    this->m_errorCode = e;
    Ptr = (extension::AsyncAsset *)data._Mypair._Myval2->m_effPath._Mypair._Myval2._Bx._Ptr;
    data._Mypair._Myval2->m_effPath._Mypair._Myval2._Bx._Ptr = 0i64;
    Myval2 = this->m_data._Mypair._Myval2;
    this->m_data._Mypair._Myval2 = Ptr;
    if ( Myval2 )
    {
      extension::AsyncAsset::~AsyncAsset(Myval2);
      operator delete(Myval2, 0x100ui64);
    }
    EnterCriticalSection((LPCRITICAL_SECTION)&extension::AsyncStatus::s_mutex);
    _InterlockedOr64((volatile signed __int64 *)&this->m_status, 1ui64);
    EnterCriticalSection((LPCRITICAL_SECTION)&extension::AsyncStatus::s_signalCondition.m_mutex);
    WakeAllConditionVariable((PCONDITION_VARIABLE)&extension::AsyncStatus::s_signalCondition.m_conditionVariable.m_data);
    LeaveCriticalSection((LPCRITICAL_SECTION)&extension::AsyncStatus::s_signalCondition.m_mutex);
    LeaveCriticalSection((LPCRITICAL_SECTION)&extension::AsyncStatus::s_mutex);
  }
  v7 = (extension::AsyncAsset *)data._Mypair._Myval2->m_effPath._Mypair._Myval2._Bx._Ptr;
  if ( data._Mypair._Myval2->m_effPath._Mypair._Myval2._Bx._Ptr )
  {
    extension::AsyncAsset::~AsyncAsset(v7);
    operator delete(v7, 0x100ui64);
  }
}

void __fastcall extension::AsyncContent<extension::AsyncFileImage>::setErrorResultWithData(
        extension::AsyncContent<extension::AsyncFileImage> *this,
        unsigned __int64 e,
        std::unique_ptr<extension::AsyncFileImage> data)
{
  extension::AsyncFileImage *v5; // rax
  extension::AsyncFileImage *Myval2; // rbx
  void *pData; // rcx
  _QWORD *v8; // rbx
  void *v9; // rcx

  if ( (this->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
  {
    this->m_errorCode = e;
    v5 = *(extension::AsyncFileImage **)&data._Mypair._Myval2->m_length;
    *(_QWORD *)&data._Mypair._Myval2->m_length = 0i64;
    Myval2 = this->m_data._Mypair._Myval2;
    this->m_data._Mypair._Myval2 = v5;
    if ( Myval2 )
    {
      pData = Myval2->fileBufPara.pData;
      if ( pData )
      {
        operator delete(pData, e);
        Myval2->fileBufPara.pData = 0i64;
      }
      operator delete(Myval2, 0x18ui64);
    }
    EnterCriticalSection((LPCRITICAL_SECTION)&extension::AsyncStatus::s_mutex);
    _InterlockedOr64((volatile signed __int64 *)&this->m_status, 1ui64);
    EnterCriticalSection((LPCRITICAL_SECTION)&extension::AsyncStatus::s_signalCondition.m_mutex);
    WakeAllConditionVariable((PCONDITION_VARIABLE)&extension::AsyncStatus::s_signalCondition.m_conditionVariable.m_data);
    LeaveCriticalSection((LPCRITICAL_SECTION)&extension::AsyncStatus::s_signalCondition.m_mutex);
    LeaveCriticalSection((LPCRITICAL_SECTION)&extension::AsyncStatus::s_mutex);
  }
  v8 = *(_QWORD **)&data._Mypair._Myval2->m_length;
  if ( *(_QWORD *)&data._Mypair._Myval2->m_length )
  {
    v9 = (void *)v8[2];
    if ( v9 )
    {
      operator delete(v9, e);
      v8[2] = 0i64;
    }
    operator delete(v8, 0x18ui64);
  }
}

void __fastcall extension::AsyncContent<Image>::setErrorResultWithData(
        extension::AsyncContent<OGLTexture> *this,
        int e,
        std::unique_ptr<OGLTexture> data)
{
  OGLTexture *v5; // rax
  OGLTexture *Myval2; // rcx

  if ( (this->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
  {
    this->m_errorCode = e;
    v5 = (OGLTexture *)data._Mypair._Myval2->__vftable;
    data._Mypair._Myval2->__vftable = 0i64;
    Myval2 = this->m_data._Mypair._Myval2;
    this->m_data._Mypair._Myval2 = v5;
    if ( Myval2 )
      ((void (__fastcall *)(OGLTexture *, __int64))Myval2->~OGLTexture)(Myval2, 1i64);
    EnterCriticalSection((LPCRITICAL_SECTION)&extension::AsyncStatus::s_mutex);
    _InterlockedOr64((volatile signed __int64 *)&this->m_status, 1ui64);
    EnterCriticalSection((LPCRITICAL_SECTION)&extension::AsyncStatus::s_signalCondition.m_mutex);
    WakeAllConditionVariable((PCONDITION_VARIABLE)&extension::AsyncStatus::s_signalCondition.m_conditionVariable.m_data);
    LeaveCriticalSection((LPCRITICAL_SECTION)&extension::AsyncStatus::s_signalCondition.m_mutex);
    LeaveCriticalSection((LPCRITICAL_SECTION)&extension::AsyncStatus::s_mutex);
  }
  if ( data._Mypair._Myval2->__vftable )
    (*(void (__fastcall **)(OGLTexture_vtbl *, __int64))data._Mypair._Myval2->~OGLTexture)(
      data._Mypair._Myval2->__vftable,
      1i64);
}

void __fastcall extension::AsyncContent<OGLCamera>::setErrorResultWithData(
        extension::AsyncContent<OGLCamera> *this,
        int e,
        std::unique_ptr<OGLCamera> data)
{
  OGLCamera *v5; // rax
  OGLCamera *Myval2; // rcx

  if ( (this->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
  {
    this->m_errorCode = e;
    v5 = *(OGLCamera **)&data._Mypair._Myval2->position.x;
    *(_QWORD *)&data._Mypair._Myval2->position.x = 0i64;
    Myval2 = this->m_data._Mypair._Myval2;
    this->m_data._Mypair._Myval2 = v5;
    if ( Myval2 )
      OGLCamera::`scalar deleting destructor'(Myval2, e);
    EnterCriticalSection((LPCRITICAL_SECTION)&extension::AsyncStatus::s_mutex);
    _InterlockedOr64((volatile signed __int64 *)&this->m_status, 1ui64);
    EnterCriticalSection((LPCRITICAL_SECTION)&extension::AsyncStatus::s_signalCondition.m_mutex);
    WakeAllConditionVariable((PCONDITION_VARIABLE)&extension::AsyncStatus::s_signalCondition.m_conditionVariable.m_data);
    LeaveCriticalSection((LPCRITICAL_SECTION)&extension::AsyncStatus::s_signalCondition.m_mutex);
    LeaveCriticalSection((LPCRITICAL_SECTION)&extension::AsyncStatus::s_mutex);
  }
  if ( *(_QWORD *)&data._Mypair._Myval2->position.x )
    OGLCamera::`scalar deleting destructor'(*(OGLCamera **)&data._Mypair._Myval2->position.x, e);
}

void __fastcall extension::AsyncContent<OGLCurve>::setErrorResultWithData(
        extension::AsyncContent<OGLCurve> *this,
        int e,
        std::unique_ptr<OGLCurve> data)
{
  OGLCurveData *m_CurveData; // rax
  OGLCurve *Myval2; // rcx

  if ( (this->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
  {
    this->m_errorCode = e;
    m_CurveData = data._Mypair._Myval2->m_CurveData;
    data._Mypair._Myval2->m_CurveData = 0i64;
    Myval2 = this->m_data._Mypair._Myval2;
    this->m_data._Mypair._Myval2 = (OGLCurve *)m_CurveData;
    if ( Myval2 )
      OGLCurve::`scalar deleting destructor'(Myval2, e);
    EnterCriticalSection((LPCRITICAL_SECTION)&extension::AsyncStatus::s_mutex);
    _InterlockedOr64((volatile signed __int64 *)&this->m_status, 1ui64);
    EnterCriticalSection((LPCRITICAL_SECTION)&extension::AsyncStatus::s_signalCondition.m_mutex);
    WakeAllConditionVariable((PCONDITION_VARIABLE)&extension::AsyncStatus::s_signalCondition.m_conditionVariable.m_data);
    LeaveCriticalSection((LPCRITICAL_SECTION)&extension::AsyncStatus::s_signalCondition.m_mutex);
    LeaveCriticalSection((LPCRITICAL_SECTION)&extension::AsyncStatus::s_mutex);
  }
  if ( data._Mypair._Myval2->m_CurveData )
    OGLCurve::`scalar deleting destructor'((OGLCurve *)data._Mypair._Myval2->m_CurveData, e);
}

void __fastcall extension::AsyncContent<OGLFigure>::setErrorResultWithData(
        extension::AsyncContent<OGLFigure> *this,
        unsigned __int64 e,
        std::unique_ptr<OGLFigure> data)
{
  OGLFigure *v5; // rax
  OGLFigure *Myval2; // rdi
  void *v7; // rbx

  if ( (this->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
  {
    this->m_errorCode = e;
    v5 = *(OGLFigure **)&data._Mypair._Myval2->m_uiStateFlg;
    *(_QWORD *)&data._Mypair._Myval2->m_uiStateFlg = 0i64;
    Myval2 = this->m_data._Mypair._Myval2;
    this->m_data._Mypair._Myval2 = v5;
    if ( Myval2 )
    {
      OGLFigure::finalize(Myval2, e);
      operator delete(Myval2, 0x108ui64);
    }
    EnterCriticalSection((LPCRITICAL_SECTION)&extension::AsyncStatus::s_mutex);
    _InterlockedOr64((volatile signed __int64 *)&this->m_status, 1ui64);
    EnterCriticalSection((LPCRITICAL_SECTION)&extension::AsyncStatus::s_signalCondition.m_mutex);
    WakeAllConditionVariable((PCONDITION_VARIABLE)&extension::AsyncStatus::s_signalCondition.m_conditionVariable.m_data);
    LeaveCriticalSection((LPCRITICAL_SECTION)&extension::AsyncStatus::s_signalCondition.m_mutex);
    LeaveCriticalSection((LPCRITICAL_SECTION)&extension::AsyncStatus::s_mutex);
  }
  v7 = *(void **)&data._Mypair._Myval2->m_uiStateFlg;
  if ( *(_QWORD *)&data._Mypair._Myval2->m_uiStateFlg )
  {
    OGLFigure::finalize(*(OGLFigure **)&data._Mypair._Myval2->m_uiStateFlg, e);
    operator delete(v7, 0x108ui64);
  }
}

void __fastcall extension::AsyncContent<OGLMirror>::setErrorResultWithData(
        extension::AsyncContent<OGLMirror> *this,
        unsigned __int64 e,
        std::unique_ptr<OGLMirror> data)
{
  OGLMirrorData *m_MirrorData; // rax
  OGLMirror *Myval2; // rdi
  OGLMirrorData *v7; // rbx

  if ( (this->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
  {
    this->m_errorCode = e;
    m_MirrorData = data._Mypair._Myval2->m_MirrorData;
    data._Mypair._Myval2->m_MirrorData = 0i64;
    Myval2 = this->m_data._Mypair._Myval2;
    this->m_data._Mypair._Myval2 = (OGLMirror *)m_MirrorData;
    if ( Myval2 )
    {
      OGLMirror::finalize(Myval2, e);
      operator delete(Myval2, 0x20ui64);
    }
    EnterCriticalSection((LPCRITICAL_SECTION)&extension::AsyncStatus::s_mutex);
    _InterlockedOr64((volatile signed __int64 *)&this->m_status, 1ui64);
    EnterCriticalSection((LPCRITICAL_SECTION)&extension::AsyncStatus::s_signalCondition.m_mutex);
    WakeAllConditionVariable((PCONDITION_VARIABLE)&extension::AsyncStatus::s_signalCondition.m_conditionVariable.m_data);
    LeaveCriticalSection((LPCRITICAL_SECTION)&extension::AsyncStatus::s_signalCondition.m_mutex);
    LeaveCriticalSection((LPCRITICAL_SECTION)&extension::AsyncStatus::s_mutex);
  }
  v7 = data._Mypair._Myval2->m_MirrorData;
  if ( data._Mypair._Myval2->m_MirrorData )
  {
    OGLMirror::finalize((OGLMirror *)v7, e);
    operator delete(v7, 0x20ui64);
  }
}

void __fastcall extension::AsyncContent<OGLMotion>::setErrorResultWithData(
        extension::AsyncContent<OGLMotion> *this,
        unsigned __int64 e,
        std::unique_ptr<OGLMotion> data)
{
  OGLMotionData **m_ppMotionData; // rax
  OGLMotion *Myval2; // rdi
  OGLMotionData **v7; // rbx

  if ( (this->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
  {
    this->m_errorCode = e;
    m_ppMotionData = data._Mypair._Myval2->m_ppMotionData;
    data._Mypair._Myval2->m_ppMotionData = 0i64;
    Myval2 = this->m_data._Mypair._Myval2;
    this->m_data._Mypair._Myval2 = (OGLMotion *)m_ppMotionData;
    if ( Myval2 )
    {
      OGLMotion::finalize(Myval2, e);
      operator delete(Myval2, 0x30ui64);
    }
    EnterCriticalSection((LPCRITICAL_SECTION)&extension::AsyncStatus::s_mutex);
    _InterlockedOr64((volatile signed __int64 *)&this->m_status, 1ui64);
    EnterCriticalSection((LPCRITICAL_SECTION)&extension::AsyncStatus::s_signalCondition.m_mutex);
    WakeAllConditionVariable((PCONDITION_VARIABLE)&extension::AsyncStatus::s_signalCondition.m_conditionVariable.m_data);
    LeaveCriticalSection((LPCRITICAL_SECTION)&extension::AsyncStatus::s_signalCondition.m_mutex);
    LeaveCriticalSection((LPCRITICAL_SECTION)&extension::AsyncStatus::s_mutex);
  }
  v7 = data._Mypair._Myval2->m_ppMotionData;
  if ( data._Mypair._Myval2->m_ppMotionData )
  {
    OGLMotion::finalize((OGLMotion *)v7, e);
    operator delete(v7, 0x30ui64);
  }
}

void __fastcall extension::AsyncContent<OGLSecondary>::setErrorResultWithData(
        extension::AsyncContent<OGLSecondary> *this,
        unsigned __int64 e,
        std::unique_ptr<OGLSecondary> data)
{
  OGLSecondary *v5; // rax
  OGLSecondary *Myval2; // rdi
  OGLSecondary *v7; // rbx

  if ( (this->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
  {
    this->m_errorCode = e;
    v5 = *(OGLSecondary **)&data._Mypair._Myval2->m_uiFormatVer;
    *(_QWORD *)&data._Mypair._Myval2->m_uiFormatVer = 0i64;
    Myval2 = this->m_data._Mypair._Myval2;
    this->m_data._Mypair._Myval2 = v5;
    if ( Myval2 )
    {
      OGLSecondary::finalize(Myval2, e);
      operator delete(Myval2, 0x28ui64);
    }
    EnterCriticalSection((LPCRITICAL_SECTION)&extension::AsyncStatus::s_mutex);
    _InterlockedOr64((volatile signed __int64 *)&this->m_status, 1ui64);
    EnterCriticalSection((LPCRITICAL_SECTION)&extension::AsyncStatus::s_signalCondition.m_mutex);
    WakeAllConditionVariable((PCONDITION_VARIABLE)&extension::AsyncStatus::s_signalCondition.m_conditionVariable.m_data);
    LeaveCriticalSection((LPCRITICAL_SECTION)&extension::AsyncStatus::s_signalCondition.m_mutex);
    LeaveCriticalSection((LPCRITICAL_SECTION)&extension::AsyncStatus::s_mutex);
  }
  v7 = *(OGLSecondary **)&data._Mypair._Myval2->m_uiFormatVer;
  if ( *(_QWORD *)&data._Mypair._Myval2->m_uiFormatVer )
  {
    OGLSecondary::finalize(v7, e);
    operator delete(v7, 0x28ui64);
  }
}

void __fastcall extension::future_asset_detail::AsyncAssetModelBuilder::setMaterialMap(
        extension::future_asset_detail::AsyncAssetModelBuilder *this,
        OGLModel *model,
        int type,
        int textureIndex,
        int materialIndex)
{
  extension::AsyncContent<OGLTexture> *m_ptr; // rbx
  OGLTexture *Myval2; // r8

  if ( textureIndex >= 0
    && textureIndex < (unsigned __int64)(this->m_textures._Mypair._Myval2._Mylast
                                       - this->m_textures._Mypair._Myval2._Myfirst) )
  {
    m_ptr = this->m_textures._Mypair._Myval2._Myfirst[textureIndex].m_body.m_ptr->m_content.m_ptr;
    if ( !m_ptr || m_ptr->m_isDataReleased )
    {
      Myval2 = 0i64;
    }
    else
    {
      if ( (m_ptr->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
        extension::AsyncStatus::waitFor(&m_ptr->m_status, (extension::AsyncStatus::Step)model);
      Myval2 = m_ptr->m_data._Mypair._Myval2;
    }
    OGLModel::setMaterialMap(model, type, Myval2, materialIndex);
  }
}

void __fastcall extension::AsyncContent<extension::AsyncAsset>::setResult(
        extension::AsyncContent<extension::AsyncAsset> *this,
        std::unique_ptr<extension::AsyncAsset> result)
{
  extension::AsyncAsset *Ptr; // rax
  extension::AsyncAsset *Myval2; // rsi
  extension::AsyncAsset *v6; // rbx

  if ( (this->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
  {
    Ptr = (extension::AsyncAsset *)result._Mypair._Myval2->m_effPath._Mypair._Myval2._Bx._Ptr;
    if ( result._Mypair._Myval2->m_effPath._Mypair._Myval2._Bx._Ptr )
    {
      result._Mypair._Myval2->m_effPath._Mypair._Myval2._Bx._Ptr = 0i64;
      Myval2 = this->m_data._Mypair._Myval2;
      this->m_data._Mypair._Myval2 = Ptr;
      if ( Myval2 )
      {
        extension::AsyncAsset::~AsyncAsset(Myval2);
        operator delete(Myval2, 0x100ui64);
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
  v6 = (extension::AsyncAsset *)result._Mypair._Myval2->m_effPath._Mypair._Myval2._Bx._Ptr;
  if ( result._Mypair._Myval2->m_effPath._Mypair._Myval2._Bx._Ptr )
  {
    extension::AsyncAsset::~AsyncAsset(v6);
    operator delete(v6, 0x100ui64);
  }
}

void __fastcall extension::AsyncContent<extension::AsyncFileImage>::setResult(
        extension::AsyncContent<extension::AsyncFileImage> *this,
        std::unique_ptr<extension::AsyncFileImage> result)
{
  extension::AsyncFileImage *v4; // rax
  extension::AsyncFileImage *Myval2; // rdi
  void *pData; // rcx
  _QWORD *v7; // rbx
  void *v8; // rcx

  if ( (this->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
  {
    v4 = *(extension::AsyncFileImage **)&result._Mypair._Myval2->m_length;
    if ( *(_QWORD *)&result._Mypair._Myval2->m_length )
    {
      *(_QWORD *)&result._Mypair._Myval2->m_length = 0i64;
      Myval2 = this->m_data._Mypair._Myval2;
      this->m_data._Mypair._Myval2 = v4;
      if ( Myval2 )
      {
        pData = Myval2->fileBufPara.pData;
        if ( pData )
        {
          operator delete(pData, (unsigned __int64)result._Mypair._Myval2);
          Myval2->fileBufPara.pData = 0i64;
        }
        operator delete(Myval2, 0x18ui64);
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
  v7 = *(_QWORD **)&result._Mypair._Myval2->m_length;
  if ( *(_QWORD *)&result._Mypair._Myval2->m_length )
  {
    v8 = (void *)v7[2];
    if ( v8 )
    {
      operator delete(v8, (unsigned __int64)result._Mypair._Myval2);
      v7[2] = 0i64;
    }
    operator delete(v7, 0x18ui64);
  }
}

void __fastcall extension::AsyncContent<OGLTexture>::setResult(
        extension::AsyncContent<Image> *this,
        std::unique_ptr<Image> result)
{
  Image *v4; // rax
  Image *Myval2; // rcx

  if ( (this->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
  {
    v4 = (Image *)result._Mypair._Myval2->__vftable;
    if ( result._Mypair._Myval2->__vftable )
    {
      result._Mypair._Myval2->__vftable = 0i64;
      Myval2 = this->m_data._Mypair._Myval2;
      this->m_data._Mypair._Myval2 = v4;
      if ( Myval2 )
        ((void (__fastcall *)(Image *, __int64))Myval2->~OGLTexture)(Myval2, 1i64);
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
  if ( result._Mypair._Myval2->__vftable )
    (*(void (__fastcall **)(Image_vtbl *, __int64))result._Mypair._Myval2->~OGLTexture)(
      result._Mypair._Myval2->__vftable,
      1i64);
}

void __fastcall extension::AsyncContent<OGLCamera>::setResult(
        extension::AsyncContent<OGLCamera> *this,
        std::unique_ptr<OGLCamera> result)
{
  OGLCamera *v4; // rax
  OGLCamera *Myval2; // rcx

  if ( (this->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
  {
    v4 = *(OGLCamera **)&result._Mypair._Myval2->position.x;
    if ( *(_QWORD *)&result._Mypair._Myval2->position.x )
    {
      *(_QWORD *)&result._Mypair._Myval2->position.x = 0i64;
      Myval2 = this->m_data._Mypair._Myval2;
      this->m_data._Mypair._Myval2 = v4;
      if ( Myval2 )
        OGLCamera::`scalar deleting destructor'(Myval2, (unsigned int)result._Mypair._Myval2);
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
  if ( *(_QWORD *)&result._Mypair._Myval2->position.x )
    OGLCamera::`scalar deleting destructor'(
      *(OGLCamera **)&result._Mypair._Myval2->position.x,
      (unsigned int)result._Mypair._Myval2);
}

void __fastcall extension::AsyncContent<OGLCurve>::setResult(
        extension::AsyncContent<OGLCurve> *this,
        std::unique_ptr<OGLCurve> result)
{
  OGLCurveData *m_CurveData; // rax
  OGLCurve *Myval2; // rcx

  if ( (this->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
  {
    m_CurveData = result._Mypair._Myval2->m_CurveData;
    if ( result._Mypair._Myval2->m_CurveData )
    {
      result._Mypair._Myval2->m_CurveData = 0i64;
      Myval2 = this->m_data._Mypair._Myval2;
      this->m_data._Mypair._Myval2 = (OGLCurve *)m_CurveData;
      if ( Myval2 )
        OGLCurve::`scalar deleting destructor'(Myval2, (unsigned int)result._Mypair._Myval2);
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
  if ( result._Mypair._Myval2->m_CurveData )
    OGLCurve::`scalar deleting destructor'(
      (OGLCurve *)result._Mypair._Myval2->m_CurveData,
      (unsigned int)result._Mypair._Myval2);
}

void __fastcall extension::AsyncContent<OGLFigure>::setResult(
        extension::AsyncContent<OGLFigure> *this,
        std::unique_ptr<OGLFigure> result)
{
  OGLFigure *v4; // rax
  OGLFigure *Myval2; // rsi
  void *v6; // rbx

  if ( (this->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
  {
    v4 = *(OGLFigure **)&result._Mypair._Myval2->m_uiStateFlg;
    if ( *(_QWORD *)&result._Mypair._Myval2->m_uiStateFlg )
    {
      *(_QWORD *)&result._Mypair._Myval2->m_uiStateFlg = 0i64;
      Myval2 = this->m_data._Mypair._Myval2;
      this->m_data._Mypair._Myval2 = v4;
      if ( Myval2 )
      {
        OGLFigure::finalize(Myval2, (unsigned __int64)result._Mypair._Myval2);
        operator delete(Myval2, 0x108ui64);
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
  v6 = *(void **)&result._Mypair._Myval2->m_uiStateFlg;
  if ( *(_QWORD *)&result._Mypair._Myval2->m_uiStateFlg )
  {
    OGLFigure::finalize(*(OGLFigure **)&result._Mypair._Myval2->m_uiStateFlg, (unsigned __int64)result._Mypair._Myval2);
    operator delete(v6, 0x108ui64);
  }
}

void __fastcall extension::AsyncContent<OGLMotion>::setResult(
        extension::AsyncContent<OGLMotion> *this,
        std::unique_ptr<OGLMotion> result)
{
  OGLMotionData **m_ppMotionData; // rax
  OGLMotion *Myval2; // rsi
  OGLMotionData **v6; // rbx

  if ( (this->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
  {
    m_ppMotionData = result._Mypair._Myval2->m_ppMotionData;
    if ( result._Mypair._Myval2->m_ppMotionData )
    {
      result._Mypair._Myval2->m_ppMotionData = 0i64;
      Myval2 = this->m_data._Mypair._Myval2;
      this->m_data._Mypair._Myval2 = (OGLMotion *)m_ppMotionData;
      if ( Myval2 )
      {
        OGLMotion::finalize(Myval2, (unsigned __int64)result._Mypair._Myval2);
        operator delete(Myval2, 0x30ui64);
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
  v6 = result._Mypair._Myval2->m_ppMotionData;
  if ( result._Mypair._Myval2->m_ppMotionData )
  {
    OGLMotion::finalize((OGLMotion *)v6, (unsigned __int64)result._Mypair._Myval2);
    operator delete(v6, 0x30ui64);
  }
}

void __fastcall extension::AsyncContent<OGLSecondary>::setResult(
        extension::AsyncContent<OGLSecondary> *this,
        std::unique_ptr<OGLSecondary> result)
{
  OGLSecondary *v4; // rax
  OGLSecondary *Myval2; // rsi
  OGLSecondary *v6; // rbx

  if ( (this->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
  {
    v4 = *(OGLSecondary **)&result._Mypair._Myval2->m_uiFormatVer;
    if ( *(_QWORD *)&result._Mypair._Myval2->m_uiFormatVer )
    {
      *(_QWORD *)&result._Mypair._Myval2->m_uiFormatVer = 0i64;
      Myval2 = this->m_data._Mypair._Myval2;
      this->m_data._Mypair._Myval2 = v4;
      if ( Myval2 )
      {
        OGLSecondary::finalize(Myval2, (unsigned __int64)result._Mypair._Myval2);
        operator delete(Myval2, 0x28ui64);
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
  v6 = *(OGLSecondary **)&result._Mypair._Myval2->m_uiFormatVer;
  if ( *(_QWORD *)&result._Mypair._Myval2->m_uiFormatVer )
  {
    OGLSecondary::finalize(v6, (unsigned __int64)result._Mypair._Myval2);
    operator delete(v6, 0x28ui64);
  }
}

std::string *__fastcall extension::FutureAssetOption::stringize(
        extension::FutureAssetOption *this,
        std::string *result)
{
  std::ostream *v4; // rax
  std::ostream *v5; // rax
  std::ostringstream v7; // [rsp+30h] [rbp-F8h] BYREF

  std::ostringstream::ostringstream(&v7, (int)result);
  v4 = std::operator<<<std::char_traits<char>>(&v7, "p=");
  std::ostream::operator<<(v4, this->playerNo);
  LODWORD(this) = this->disableShaderFXMaterialLight;
  v5 = std::operator<<<std::char_traits<char>>(&v7, "&disableSFXMatLight=");
  std::ostream::operator<<(v5, (int)this);
  std::ostringstream::str(&v7, result);
  std::ostringstream::~ostringstream((std::ostringstream *)&v7.gap80[8]);
  *(_QWORD *)&v7.gap80[8] = &std::ios_base::`vftable';
  std::ios_base::_Ios_base_dtor((std::ios_base *)&v7.gap80[8]);
  return result;
}

std::string *__fastcall extension::FutureFigureOption::stringize(
        extension::FutureFigureOption *this,
        std::string *result)
{
  std::ostream *v4; // rax
  std::ostringstream v6; // [rsp+30h] [rbp-F8h] BYREF

  std::ostringstream::ostringstream(&v6, (int)result);
  v4 = std::operator<<<std::char_traits<char>>(&v6, "base=");
  std::ostream::operator<<(v4, this->bBaseFigure);
  std::ostringstream::str(&v6, result);
  std::ostringstream::~ostringstream((std::ostringstream *)&v6.gap80[8]);
  *(_QWORD *)&v6.gap80[8] = &std::ios_base::`vftable';
  std::ios_base::_Ios_base_dtor((std::ios_base *)&v6.gap80[8]);
  return result;
}

std::string *__fastcall extension::FutureImageOption::stringize(
        extension::FutureImageOption *this,
        std::string *result)
{
  std::ios_base *v4; // rdi
  std::ostream *v5; // rax
  std::ostream *v6; // rax
  std::ostream *v7; // rax
  char *v8; // rcx
  std::ostream *v9; // rax
  std::ostream *v10; // rbx
  char *v11; // rcx
  std::_Smanip<__int64> *v12; // r8
  std::_Smanip<__int64> resulta; // [rsp+30h] [rbp-108h] BYREF
  std::ostringstream v15; // [rsp+40h] [rbp-F8h] BYREF

  v4 = 0i64;
  std::ostringstream::ostringstream(&v15, (int)result);
  v5 = std::operator<<<std::char_traits<char>>(&v15, "t=");
  std::ostream::operator<<(v5, this->transparent);
  v6 = std::operator<<<std::char_traits<char>>(&v15, "&f=");
  std::ostream::operator<<(v6, this->filter);
  v7 = std::operator<<<std::char_traits<char>>(&v15, "&o=");
  if ( v7 )
    v8 = &v7->gap0[*(int *)(*(_QWORD *)v7->gap0 + 4i64)];
  else
    v8 = 0i64;
  *((_DWORD *)v8 + 6) &= 0xFFFFF3FF;
  *((_DWORD *)v8 + 6) |= 0x200u;
  std::ostream::operator<<(v7, this->option);
  v9 = std::operator<<<std::char_traits<char>>(&v15, "&tp=");
  v10 = v9;
  if ( v9 )
    v11 = &v9->gap0[*(int *)(*(_QWORD *)v9->gap0 + 4i64)];
  else
    v11 = 0i64;
  *((_DWORD *)v11 + 6) &= 0xFFFFF9FF;
  *((_DWORD *)v11 + 6) |= 0x800u;
  v12 = std::setw(&resulta, 4i64);
  if ( v10 )
    v4 = (std::ios_base *)&v10->gap0[*(int *)(*(_QWORD *)v10->gap0 + 4i64)];
  v12->_Pfun(v4, v12->_Manarg);
  v10->gap0[*(int *)(*(_QWORD *)v10->gap0 + 4i64) + 88] = 48;
  std::ostream::operator<<(v10, this->texParam);
  std::ostringstream::str(&v15, result);
  std::ostringstream::~ostringstream((std::ostringstream *)&v15.gap80[8]);
  *(_QWORD *)&v15.gap80[8] = &std::ios_base::`vftable';
  std::ios_base::_Ios_base_dtor((std::ios_base *)&v15.gap80[8]);
  return result;
}

std::string *__fastcall extension::FutureTextureOption::stringize(
        extension::FutureTextureOption *this,
        std::string *result)
{
  std::ios_base *v4; // rsi
  std::ostream *v5; // rax
  std::ostream *v6; // rbx
  char *v7; // rax
  std::_Smanip<__int64> *v8; // r8
  int keyIndex; // ebx
  std::ostream *v10; // rax
  unsigned __int8 *i; // rbx
  __int64 v12; // rcx
  std::_Smanip<__int64> *v13; // rax
  void *v14; // rbx
  __int64 v15; // rcx
  void (__fastcall ***v16)(_QWORD, __int64); // rax
  std::_Smanip<__int64> resulta; // [rsp+30h] [rbp-108h] BYREF
  std::ostringstream v19; // [rsp+40h] [rbp-F8h] BYREF

  v4 = 0i64;
  std::ostringstream::ostringstream(&v19, (int)result);
  v5 = std::operator<<<std::char_traits<char>>(&v19, "t=");
  v6 = v5;
  if ( v5 )
    v7 = &v5->gap0[*(int *)(*(_QWORD *)v5->gap0 + 4i64)];
  else
    v7 = 0i64;
  *((_DWORD *)v7 + 6) &= 0xFFFFF9FF;
  *((_DWORD *)v7 + 6) |= 0x800u;
  v8 = std::setw(&resulta, 4i64);
  if ( v6 )
    v4 = (std::ios_base *)&v6->gap0[*(int *)(*(_QWORD *)v6->gap0 + 4i64)];
  v8->_Pfun(v4, v8->_Manarg);
  v6->gap0[*(int *)(*(_QWORD *)v6->gap0 + 4i64) + 88] = 48;
  std::ostream::operator<<(v6, this->texParam);
  keyIndex = this->keyIndex;
  if ( keyIndex >= 0 )
  {
    v10 = std::operator<<<std::char_traits<char>>(&v19, "&k=");
    std::ostream::operator<<(v10, keyIndex);
  }
  if ( this->paletteData._Mypair._Myval2._Myfirst != this->paletteData._Mypair._Myval2._Mylast )
  {
    std::operator<<<std::char_traits<char>>(&v19, "&p=");
    for ( i = this->paletteData._Mypair._Myval2._Myfirst; i != this->paletteData._Mypair._Myval2._Mylast; ++i )
    {
      v12 = *(int *)(*(_QWORD *)v19.gap0 + 4i64);
      *(_DWORD *)&v19.gap0[v12 + 24] &= 0xFFFFF9FF;
      *(_DWORD *)&v19.gap0[v12 + 24] |= 0x800u;
      v13 = std::setw(&resulta, 2i64);
      v13->_Pfun((std::ios_base *)&v19.gap0[*(int *)(*(_QWORD *)v19.gap0 + 4i64)], v13->_Manarg);
      v19._Stringbuffer[*(int *)(*(_QWORD *)v19.gap0 + 4i64) - 24] = 48;
      std::ostream::operator<<(&v19, *i);
    }
  }
  std::ostringstream::str(&v19, result);
  *(_QWORD *)&v19.gap0[*(int *)(*(_QWORD *)v19.gap0 + 4i64)] = &std::ostringstream::`vftable';
  *(_DWORD *)((char *)&resulta._Manarg + *(int *)(*(_QWORD *)v19.gap0 + 4i64) + 4) = *(_DWORD *)(*(_QWORD *)v19.gap0
                                                                                               + 4i64)
                                                                                   - 136;
  *(_QWORD *)&v19.gap0[8] = &std::stringbuf::`vftable';
  std::stringbuf::_Tidy((std::stringbuf *)&v19.gap0[8]);
  *(_QWORD *)&v19.gap0[8] = &std::streambuf::`vftable';
  v14 = *(void **)&v19.gap0[104];
  if ( *(_QWORD *)&v19.gap0[104] )
  {
    v15 = *(_QWORD *)(*(_QWORD *)&v19.gap0[104] + 8i64);
    if ( v15 )
    {
      v16 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 16i64))(v15);
      if ( v16 )
        (**v16)(v16, 1i64);
    }
    operator delete(v14, 0x10ui64);
  }
  *(_QWORD *)&v19.gap0[*(int *)(*(_QWORD *)v19.gap0 + 4i64)] = &std::ostream::`vftable';
  *(_DWORD *)((char *)&resulta._Manarg + *(int *)(*(_QWORD *)v19.gap0 + 4i64) + 4) = *(_DWORD *)(*(_QWORD *)v19.gap0
                                                                                               + 4i64)
                                                                                   - 16;
  *(_QWORD *)&v19.gap80[8] = &std::ios_base::`vftable';
  std::ios_base::_Ios_base_dtor((std::ios_base *)&v19.gap80[8]);
  return result;
}

std::string *__fastcall std::numpunct<char>::truename(std::numpunct<char> *this, std::string *result)
{
  ((void (__fastcall *)(std::numpunct<char> *))this->do_truename)(this);
  return result;
}

