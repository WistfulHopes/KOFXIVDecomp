#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_rasterizer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_viewport.h"
#include "dev/silverware/git/sdk/agthreadpool.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/matrix4unaligned.h"
#include "dev/silverware/git/sdk/agsemaphore.inl"
#include "dev/silverware/git/sdk/agconditionvariable.h"
#include "dev/kof/master/development/source/baseproject/jni/game/network/netmanager.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/quat_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/condition_variable"
#include "dev/kof/master/development/source/baseproject/jni/game/network/leaderboard.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlehud.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/jobmanager.h"
#include "dev/kof/master/development/source/ps4project/baseproject/pcutil/pcdummy.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battleeventhandler.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_drawableimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/refcountable.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/savedata.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_manager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hal.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_buffer.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_characterdef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/easingnumber.h"
#include "dev/silverware/git/sdk/agscopedlock.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/weapon/actorweapon.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleonline.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/operationmapper.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/randommt.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filters.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filterparams.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_sse.h"
#include "dev/silverware/git/sdk/agreferencecountinl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphqueue.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_types.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdata/effectappdata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_font.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/resourcemanager.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/time.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/type_traits"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessdefs.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/libcommon.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstddef"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatapacked.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_pathdatapacker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_linebuffer.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_prefightfaceoff.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_highlight.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/commanddataformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_profiler.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector2unaligned.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlehudrenderer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_states.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/drawhelper/drawhelper_vertexbuffer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/tga_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_statebag.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/mediamanager.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/hidpad/hidpadsystem.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_functions.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/soundutil.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/asynccharafileload.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_simplemeshcache.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/audiopresenter.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/fontprovider/render_fontproviderwinapi.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_drawtext.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/shaderfxhelper.h"
#include "dev/kof/master/development/source/baseproject/jni/game/onlineui/roommembers.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/mutex"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmodel.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/algorithm"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/chrono"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/steamnamecache.h"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/hitrectcollection.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_bundle.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/limits"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_new.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglcurve.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_typeinfo.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/trainingsetting.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/combomissionattackeventlistener.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloatmp.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapemeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/jpeg_imagefile.h"
#include "program files (x86)/windows kits/8.1/include/shared/guiddef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/silverware/git/sdk/system/agsysteminfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charamaterialsettingformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treetext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefileutil.h"
#include "dev/silverware/git/sdk/agreferenceinl.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlecall/battlecall.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actorcharabase.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_docview.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xutility"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestageutil.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_debug.h"
#include "dev/kof/master/development/source/baseproject/jni/game/define/charabonedefine.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/texstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_range.h"
#include "program files (x86)/windows kits/8.1/include/shared/stralign.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/utility"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/damagesetting.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/colorholder.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglsprite.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/savedatadefine.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "dev/silverware/git/sdk/agmemorystream.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/iosfwd"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_hash.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/battleplayerinfo.h"
#include "dev/silverware/git/sdk/agmemorypool.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/mediasound.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglrender.h"
#include "dev/silverware/git/sdk/input/agcontrollerbuttoncomponent.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "dev/silverware/git/sdk/aghash.h"
#include "dev/silverware/git/sdk/agstream.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/boolinvec.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/functional"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix4x4.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actionblackout.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixpool.h"
#include "dev/silverware/git/sdk/agstringutils.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglfog.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglbone.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xfacet"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstring"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/particledata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shader.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_sgmlparser.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory0"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_context.h"
#include "dev/silverware/git/sdk/3rdparty/steam/isteamhtmlsurface.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/silverware/git/sdk/agpointerinl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_constants.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exwaitcondition.h"
#include "dev/silverware/git/sdk/agconditionvariable.inl"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/exception"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessgen.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlehudgauge.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlehudresources.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/shot/actorshot.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/cpusequencedataformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treeshape.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessellator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/unordered_map"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battleui.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actorchara.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector3unaligned.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_exception.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/commandcheck.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xhash"
#include "dev/silverware/git/sdk/platforms/pc/system/agpcsysteminfo.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/list"
#include "dev/kof/master/development/source/baseproject/jni/game/util/restrictringbuffer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestage.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/matchingsystem.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/tkndata.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/materialshowcontrol.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitivebundle.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treecachenode.h"
#include "program files (x86)/windows kits/8.1/include/um/winnt.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/moviedatadefine.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treenode.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_loader.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmirror.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cacheeffect.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_system.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphfitter.h"
#include "program files (x86)/windows kits/8.1/include/shared/basetsd.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/cameramotionpreviewsettings.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/stageprojectdata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charahitrectformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_player.h"
#include "dev/silverware/git/sdk/agmovieplayer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_types.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/vec_aos.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_resource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/boolinvec.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/system_error"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestagedatas.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/tkndatas.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_stroker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/stdexcept"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/tween.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/dds_imagefile.h"
#include "dev/silverware/git/sdk/util/agservicecommand.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/vectormath_aos.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textmeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/input/imesystem.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/errorchecker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphparam.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcache.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steam_api_internal.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/tuple"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charadamagesettingformat.h"
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
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_missiondataloading.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_core.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_queue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_fontmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitive.h"
#include "dev/silverware/git/sdk/agmutex.inl"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocaddr.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_radixtree.h"
#include "dev/kof/master/development/source/baseproject/jni/game/system/battlecontroller.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdatalistmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_twips.h"
#include "program files (x86)/windows kits/8.1/include/um/winuser.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectcommon.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_containers.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/string"
#include "dev/silverware/git/sdk/agreferencedobjectinl.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actionsystem.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_wwhelper.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steam_api.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic0.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaactiondataformat.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/globalheapmemory.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/combomissiondataformat.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/sounddata.h"
#include "dev/silverware/git/sdk/agcondition.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/fixmemory.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/mat_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/array"
#include "dev/kof/master/development/source/baseproject/jni/game/network/playtogether.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/soundgroupdataformat.h"
#include "dev/kof/master/development/source/baseproject/jni/game/onlineui/imagestring.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_bank.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogleffect.h"
#include "dev/kof/master/development/source/ps4project/baseproject/pcutil/pccontrolsmanager.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlehudnico2chat.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/drawhelper/drawhelper.h"
#include "dev/silverware/git/sdk/memory/agallocators.h"
#include "dev/silverware/git/sdk/input/aginputmanager.h"
#include "dev/silverware/git/sdk/agsingleton.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleonlinewatching.h"
#include "dev/silverware/git/sdk/filesystem/agfile.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector4unaligned.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/titlestoragesystem.h"
#include "dev/silverware/git/sdk/filesystem/agpath.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogllight.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_vertex.h"
#include "dev/silverware/git/sdk/filesystem/agmount.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleloading.h"
#include "dev/kof/master/development/source/baseproject/jni/game/appmain.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/effect/actoreffect.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/fontprovider/render_fontproviderhud.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_wstring.h"
#include "dev/silverware/git/sdk/filesystem/agdirectory.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/vecidx_aos.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actorobject.h"
#include "dev/silverware/git/sdk/agdisplay.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/floatinvec.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actoroption.h"
#include "dev/silverware/git/sdk/agvector4.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/cameracheck.h"
#include "dev/silverware/git/sdk/agvector3.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/freecameracheck.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/ios"
#include "dev/silverware/git/sdk/3rdparty/steam/matchmakingtypes.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/quat_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocnum"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_ps4modelroom.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/floatinvec.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xiosbase"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thread"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threadcheck.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocale"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exthread.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/memory"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory"
#include "dev/kof/master/development/source/baseproject/jni/framework/rapper/graphicsopt.h"
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
#include "dev/kof/master/development/source/baseproject/jni/game/util/fix32.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/variableheapmemorybase.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_vec64.h"
#include "dev/silverware/git/sdk/agmath.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "dev/silverware/git/sdk/agreferencecount.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/baseproject/jni/game/cpuseq/battlecpu.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaattackdataformat.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/chartdata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/math.h"
#include "dev/silverware/git/sdk/input/agcontroller.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/baseproject/jni/game/cpuseq/sequencecontroller.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charafilebase.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/heapmemory.h"
#include "dev/silverware/git/sdk/system/aguser.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestageresourcecontainer.h"
#include "dev/silverware/git/sdk/agrectangle.h"
#include "dev/silverware/git/sdk/agstring.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestageshader.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_movie.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/mutex.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_math.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vector"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/translate_table.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_operation.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/bitset"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/shared_lua_context.h"
#include "dev/kof/master/development/source/baseproject/jni/game/system/battlesysteminfo.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/vec_aos.h"
#include "dev/silverware/git/sdk/util/agdelegate.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_screentoworld.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thr/xthread"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/physicalheapmemory.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/map"
#include "dev/kof/master/development/source/baseproject/jni/game/check/combomissionjudge.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/future_asset.h"
#include "dev/silverware/git/sdk/agcondition.inl"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtree"
#include "dev/kof/master/development/source/baseproject/jni/game/data/gamedatainfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_strokeraa.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_scale9grid.h"
#include "dev/silverware/git/sdk/input/agcontrollercomponent.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/asyncjob.h"
#include "dev/silverware/git/sdk/agpointer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraystaticbuff.h"
#include "dev/kof/master/development/source/baseproject/jni/game/network/chkdiscononlinesv.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/mat_aos.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exlockable.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cxform.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "dev/silverware/git/sdk/agmutex.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/atomic_int.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/atomic"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/effect.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actor.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaprojectdataformat.h"
#include "dev/silverware/git/sdk/system/agusermanager.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/inputkeyrecord.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charadataunify.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charabasestatusformat.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_hashkey.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/syncmenuimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_event.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/deque"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/png_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_keycodes.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "dev/silverware/git/sdk/input/agsdlmappingparser.h"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/bodypush.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshkey.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixstate.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_gradients.h"
#include "dev/silverware/git/sdk/util/agservice.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steamclientpublic.h"
#include "dev/silverware/git/sdk/agsemaphore.h"
#include "dev/kof/master/development/source/ps4project/baseproject/ag/kofanticheat.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/system/battlesysteminfo.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charabasestatusformat.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/player/battleplayerinfo.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actionsystem.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/define/charabonedefine.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/easingnumber.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlehudgauge.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglvec3.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/player/weapon/actorweapon.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/player/effect/actoreffect.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actorcharabase.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/player/shot/actorshot.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actorchara.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actorobject.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actoroption.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/data/gamedatainfo.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/check/commandcheck.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlehudrenderer.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaprojectdataformat.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battleeventhandler.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmatrix.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/drawhelper/drawhelper.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/drawhelper/drawhelper_vertexbuffer.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlehudkeyhistory.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_bank.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/util/soundutil.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_drawtext.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlehudresources.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/rapper/graphicsopt.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/image/graphics.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/core/glstate.cpp"

std::piecewise_construct_t std::piecewise_construct; // 0x14088C434
BattleHud::BattleHud(); // 0x1400BC770
BattleHud::~BattleHud(); // 0x1400BC930
extension::SoundObject::~SoundObject(); // 0x1400BD640
BattleSystem::ComboMissionJudge::TermClearInfo::~TermClearInfo(); // 0x1400C0430
void BattleHud::dispose(); // 0x1400BC980
void BattleHud::initialize(); // 0x1400BCAB0
bool BattleHud::isDetermineLoadingFiles(); // 0x1400BCE60
void BattleHud::setupBattleParams(ActionSystem * actionSystem); // 0x1400BCF70
void BattleHud::setTimerCount(long time); // 0x1400BD550
void BattleHud::update(ActionSystem * actionSystem, float advanceFrame); // 0x1400BD650
void BattleHud::drawUpperGauge(); // 0x1400BE370
void BattleHud::drawUserInfo(); // 0x1400BE610
void BattleHud::drawLowerGauge(); // 0x1400BE9C0
void BattleHud::drawComboCount(); // 0x1400BEAF0
void BattleHud::drawKeyHistory(PLAYER_ID playerID, InputKeyHistory * pKeyHistory, bool bFrameDraw); // 0x1400BEC10
void BattleHud::drawAttackData(BattleHud::AttackData * pAttackDataP1, BattleHud::AttackData * pAttackDataP2); // 0x1400BEC90
void BattleHud::drawKeyRecordingFrame(long frame, long slot); // 0x1400BED30
void BattleHud::drawReversalReplay(); // 0x1400BED80
void BattleHud::setVisibleFlags(long bitFlgs); // 0x1400BEE00
void BattleHud::updateAppearanceAnimation(float advanceFrame); // 0x1400BEE40
void BattleHud::renderReplayDescription(float px, float py); // 0x1400BF030
void BattleHud::initializeOnlineParams(); // 0x1400BF0D0
void BattleHud::setOnlineUserCharacterSymbol(PLAYER_ID playerID); // 0x1400BF1D0
void BattleHud::setupOnlineTeamMember(long roomIndex, PLAYER_ID playerID, long orderIndex, unsigned long long onlineID, long titleID, long rankID, long battleWins); // 0x1400BF250
void BattleHud::setupOnlineTeamMember(long roomIndex, PLAYER_ID playerID, unsigned long long onlineID, long titleID, long rankID, long battleWins); // 0x1400BF2C0
void BattleHud::entryOnlineChatMessage(unsigned long long onlineID, const char * pMesssage, unsigned long color); // 0x1400BF330
PLAYER_ID BattleHud::findOnlineBattlePlayerByOnlineID(unsigned long long onlineID); // 0x1400BF3D0
void BattleHud::updateOnline(float advanceFrame); // 0x1400BF470
void BattleHud::drawOnline(); // 0x1400BF5F0
void BattleHud::OnEventRoundStartReady(STAGE_ID stageID, long round, const BattleEventHandler::Listener::CharacterStatus * pStatus); // 0x1400BF6A0
void BattleHud::OnEventCharacterActivity(PLAYER_ID playerID, BattleEventHandler::EActivity::Type activity, long score); // 0x1400BF720
void BattleHud::OnEventRoundStartGO(STAGE_ID stageID, long round, const BattleEventHandler::Listener::CharacterStatus * pStatus); // 0x1400BF7A0
void BattleHud::OnEventRoundEndKO(STAGE_ID stageID, BattleEventHandler::Listener::BattleResult battleResult, const BattleEventHandler::Listener::CharacterStatus * pStatus); // 0x1400BF810
void BattleHud::OnEventRoundStartRound(STAGE_ID stageID, long round, const BattleEventHandler::Listener::CharacterStatus * pStatus); // 0x1400BF860
void BattleHud::hideUsernames(); // 0x1400BF8F0//decompilation failure at 14088C434!
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

BattleSystem::SequenceCandidateInfo *__fastcall std::_Uninitialized_move_al_unchecked1<BattleSystem::SequenceCandidateInfo *,BattleSystem::SequenceCandidateInfo *,std::allocator<BattleSystem::SequenceCandidateInfo>>(
        const BattleSystem::SequenceCandidateInfo *_First,
        const BattleSystem::SequenceCandidateInfo *_Last,
        BattleSystem::SequenceCandidateInfo *_Dest,
        std::_Wrap_alloc<std::allocator<BattleSystem::SequenceCandidateInfo> > *_Al)
{
  for ( ; _First != _Last; ++_First )
  {
    if ( _Dest )
      *_Dest = *_First;
    ++_Dest;
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

void __fastcall SimpleQueue<ActorChara,4>::SimpleQueue<ActorChara,4>(SimpleQueue<ActorChara,4> *this)
{
  SimpleQueue<ActorChara,4>::Queue *queueBody; // rdi
  ActorChara *body; // rbx

  queueBody = this->queueBody;
  body = this->body;
  this->pFront = 0i64;
  this->pBack = 0i64;
  this->pUseFront = 0i64;
  this->pUseBack = 0i64;
  this->queueBody[0].pData = 0i64;
  this->queueBody[0].pNext = 0i64;
  this->queueBody[1].pData = 0i64;
  this->queueBody[1].pNext = 0i64;
  this->queueBody[2].pData = 0i64;
  this->queueBody[2].pNext = 0i64;
  this->queueBody[3].pData = 0i64;
  this->queueBody[3].pNext = 0i64;
  this->uiRestCount = 0;
  `eh vector constructor iterator'(
    this->body,
    0xF58ui64,
    4ui64,
    (void (__fastcall *)(void *))ActorChara::ActorChara,
    (void (__fastcall *)(void *))ActorChara::~ActorChara);
  this->queueBody[3].pNext = 0i64;
  this->queueBody[0].pNext = &this->queueBody[1];
  this->queueBody[1].pData = &this->body[1];
  this->queueBody[1].pNext = &this->queueBody[2];
  this->queueBody[2].pData = &this->body[2];
  this->queueBody[2].pNext = &this->queueBody[3];
  this->queueBody[3].pData = &this->body[3];
  queueBody->pData = body;
  this->pUseFront = 0i64;
  this->pUseBack = 0i64;
  this->pFront = queueBody;
  this->pBack = &this->queueBody[3];
  this->uiRestCount = 4;
}

void __fastcall SimpleQueue<ActorEffect,96>::SimpleQueue<ActorEffect,96>(SimpleQueue<ActorEffect,96> *this)
{
  this->pFront = 0i64;
  this->pBack = 0i64;
  this->pUseFront = 0i64;
  this->pUseBack = 0i64;
  memset(this->queueBody, 0, sizeof(this->queueBody));
  this->uiRestCount = 0;
  `eh vector constructor iterator'(
    this->body,
    0x3F0ui64,
    0x60ui64,
    (void (__fastcall *)(void *))ActorEffect::ActorEffect,
    (void (__fastcall *)(void *))ActorEffect::~ActorEffect);
  SimpleQueue<ActorEffect,96>::Init(this);
}

void __fastcall SimpleQueue<ActorOption,4>::SimpleQueue<ActorOption,4>(SimpleQueue<ActorOption,4> *this)
{
  SimpleQueue<ActorOption,4>::Queue *queueBody; // rdi
  ActorOption *body; // rbx

  queueBody = this->queueBody;
  body = this->body;
  this->pFront = 0i64;
  this->pBack = 0i64;
  this->pUseFront = 0i64;
  this->pUseBack = 0i64;
  this->queueBody[0].pData = 0i64;
  this->queueBody[0].pNext = 0i64;
  this->queueBody[1].pData = 0i64;
  this->queueBody[1].pNext = 0i64;
  this->queueBody[2].pData = 0i64;
  this->queueBody[2].pNext = 0i64;
  this->queueBody[3].pData = 0i64;
  this->queueBody[3].pNext = 0i64;
  this->uiRestCount = 0;
  `eh vector constructor iterator'(
    this->body,
    0x3E8ui64,
    4ui64,
    (void (__fastcall *)(void *))ActorOption::ActorOption,
    (void (__fastcall *)(void *))ActorShot::~ActorShot);
  this->queueBody[3].pNext = 0i64;
  this->queueBody[0].pNext = &this->queueBody[1];
  this->queueBody[1].pData = &this->body[1];
  this->queueBody[1].pNext = &this->queueBody[2];
  this->queueBody[2].pData = &this->body[2];
  this->queueBody[2].pNext = &this->queueBody[3];
  this->queueBody[3].pData = &this->body[3];
  queueBody->pData = body;
  this->pUseFront = 0i64;
  this->pUseBack = 0i64;
  this->pFront = queueBody;
  this->pBack = &this->queueBody[3];
  this->uiRestCount = 4;
}

void __fastcall SimpleQueue<ActorShot,32>::SimpleQueue<ActorShot,32>(SimpleQueue<ActorShot,32> *this)
{
  this->pFront = 0i64;
  this->pBack = 0i64;
  this->pUseFront = 0i64;
  this->pUseBack = 0i64;
  memset(this->queueBody, 0, sizeof(this->queueBody));
  this->uiRestCount = 0;
  `eh vector constructor iterator'(
    this->body,
    0x3A8ui64,
    0x20ui64,
    (void (__fastcall *)(void *))ActorShot::ActorShot,
    (void (__fastcall *)(void *))ActorShot::~ActorShot);
  SimpleQueue<ActorShot,32>::Init(this);
}

void __fastcall SimpleQueue<ActorWeapon,96>::SimpleQueue<ActorWeapon,96>(SimpleQueue<ActorWeapon,96> *this)
{
  this->pFront = 0i64;
  this->pBack = 0i64;
  this->pUseFront = 0i64;
  this->pUseBack = 0i64;
  memset(this->queueBody, 0, sizeof(this->queueBody));
  this->uiRestCount = 0;
  `eh vector constructor iterator'(
    this->body,
    0x388ui64,
    0x60ui64,
    (void (__fastcall *)(void *))ActorWeapon::ActorWeapon,
    (void (__fastcall *)(void *))ActorShot::~ActorShot);
  SimpleQueue<ActorWeapon,96>::Init(this);
}

void __fastcall std::unordered_map<std::string,CommandCheck::CommandSettingMapData>::unordered_map<std::string,CommandCheck::CommandSettingMapData>(
        std::unordered_map<std::string,CommandCheck::CommandSettingMapData> *this)
{
  this->_Traitsobj._Mypair._Myval2._Myval2 = 0.0;
  this->_List._Mypair._Myval2._Myhead = 0i64;
  this->_List._Mypair._Myval2._Mysize = 0i64;
  this->_List._Mypair._Myval2._Myhead = (std::_List_node<std::pair<std::string const ,CommandCheck::CommandSettingMapData>,void *> *)std::_List_alloc<std::_List_base_types<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLCamera,void>::Body>>>>::_Buynode0((std::_List_alloc<std::_List_base_types<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >> > *)this, 0i64, 0i64);
  this->_Vec._Mypair._Myval2._Myfirst = 0i64;
  this->_Vec._Mypair._Myval2._Mylast = 0i64;
  this->_Vec._Mypair._Myval2._Myend = 0i64;
  this->_Traitsobj._Mypair._Myval2._Myval2 = 1.0;
  std::_Hash<std::_Umap_traits<std::string,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body>,std::_Uhash_compare<std::string,std::hash<std::string>,std::equal_to<std::string>>,std::allocator<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::Body>>>,0>>::_Init(
    (std::_Hash<std::_Umap_traits<extension::SoundHashKey,int,std::_Uhash_compare<extension::SoundHashKey,extension::SoundHashKey::Hasher,std::equal_to<extension::SoundHashKey> >,std::allocator<std::pair<extension::SoundHashKey const ,int> >,0> > *)this,
    8ui64);
}

void __fastcall ActionBlackout::ActionBlackout(ActionBlackout *this)
{
  __int64 v2; // rdi
  float *p_b; // rax
  __int64 v4; // rdx
  float *v5; // rbx

  memset(this, 0, 0x120ui64);
  v2 = 6i64;
  p_b = &this->data[0].color.b;
  v4 = 6i64;
  do
  {
    *((_QWORD *)p_b - 3) = 0i64;
    *((_QWORD *)p_b - 2) = 0i64;
    *((_QWORD *)p_b - 1) = 0i64;
    *(_QWORD *)p_b = 0i64;
    p_b += 12;
    --v4;
  }
  while ( v4 );
  memset(this->reqData, 0, sizeof(this->reqData));
  v5 = &this->reqData[0].color.b;
  do
  {
    *((_QWORD *)v5 - 1) = 0i64;
    *(_QWORD *)v5 = 0i64;
    v5 += 9;
    --v2;
  }
  while ( v2 );
}

void __fastcall ActionSystem::ActionSystem(ActionSystem *this)
{
  SimpleQueue<ActorChara,4>::SimpleQueue<ActorChara,4>(&this->actorCharaQue);
  SimpleQueue<ActorShot,32>::SimpleQueue<ActorShot,32>(&this->actorShotQue);
  SimpleQueue<ActorEffect,96>::SimpleQueue<ActorEffect,96>(&this->actorEffectQue);
  SimpleQueue<ActorWeapon,96>::SimpleQueue<ActorWeapon,96>(&this->actorWeaponQue);
  SimpleQueue<ActorOption,4>::SimpleQueue<ActorOption,4>(&this->actorOptionQue);
  this->pRealiz = 0i64;
  this->ppPriStart = 0i64;
  this->ppPriEnd = 0i64;
  this->pEmpty = 0i64;
  *(_QWORD *)&this->iActorMax = 0i64;
  this->pAliveNum = 0i64;
  *(_QWORD *)&this->iAliveTotal = 0i64;
  this->pReqDraw._Mypair._Myval2._Myfirst = 0i64;
  this->pReqDraw._Mypair._Myval2._Mylast = 0i64;
  this->pReqDraw._Mypair._Myval2._Myend = 0i64;
  this->iReqDrawCount = 0;
  this->bSorted = 0;
  this->pPlayer[0] = 0i64;
  this->pPlayer[1] = 0i64;
  this->pDrawActor[0] = 0i64;
  this->pDrawActor[1] = 0i64;
  this->pDrawActor[2] = 0i64;
  this->pDrawActor[3] = 0i64;
  this->xPlaySpeed.value = 0x10000;
  ActionBlackout::ActionBlackout(&this->actBlack);
  CameraControl::CameraControl(&this->cameraCtrl);
  `eh vector constructor iterator'(
    this->subCameraCtrl,
    0x3C8ui64,
    2ui64,
    (void (__fastcall *)(void *))CameraControl::CameraControl,
    (void (__fastcall *)(void *))ActorWeapon::ActionFlagCheck);
  *(_QWORD *)&this->freeCamera.vLook.x = 0i64;
  *(_QWORD *)&this->freeCamera.vLook.z = 0i64;
  *(_QWORD *)&this->freeCamera.vPos.y = 0i64;
  *(_QWORD *)&this->freeCamera.vUp.x = 0i64;
  *(_QWORD *)&this->freeCamera.vUp.z = 0i64;
  *(_QWORD *)&this->freeCamera.vMove.y = 0i64;
  *(_QWORD *)this->freeCamera.mView.m = 0i64;
  *(_QWORD *)&this->freeCamera.mView.m[2] = 0i64;
  *(_QWORD *)&this->freeCamera.mView.m[4] = 0i64;
  *(_QWORD *)&this->freeCamera.mView.m[6] = 0i64;
  *(_QWORD *)&this->freeCamera.mView.m[8] = 0i64;
  *(_QWORD *)&this->freeCamera.mView.m[10] = 0i64;
  *(_QWORD *)&this->freeCamera.mView.m[12] = 0i64;
  *(_QWORD *)&this->freeCamera.mView.m[14] = 0i64;
  *(_QWORD *)this->freeCamera.mProj.m = 0i64;
  *(_QWORD *)&this->freeCamera.mProj.m[2] = 0i64;
  *(_QWORD *)&this->freeCamera.mProj.m[4] = 0i64;
  *(_QWORD *)&this->freeCamera.mProj.m[6] = 0i64;
  *(_QWORD *)&this->freeCamera.mProj.m[8] = 0i64;
  *(_QWORD *)&this->freeCamera.mProj.m[10] = 0i64;
  *(_QWORD *)&this->freeCamera.mProj.m[12] = 0i64;
  *(_QWORD *)&this->freeCamera.mProj.m[14] = 0i64;
  *(_QWORD *)this->freeCamera.mBillboard.m = 0i64;
  *(_QWORD *)&this->freeCamera.mBillboard.m[2] = 0i64;
  *(_QWORD *)&this->freeCamera.mBillboard.m[4] = 0i64;
  *(_QWORD *)&this->freeCamera.mBillboard.m[6] = 0i64;
  *(_QWORD *)&this->freeCamera.mBillboard.m[8] = 0i64;
  *(_QWORD *)&this->freeCamera.mBillboard.m[10] = 0i64;
  *(_QWORD *)&this->freeCamera.mBillboard.m[12] = 0i64;
  *(_QWORD *)&this->freeCamera.mBillboard.m[14] = 0i64;
  FreeCameraControl::Init(&this->freeCamera);
  this->pEffectMgr[0] = 0i64;
  this->pEffectMgr[1] = 0i64;
  this->pEffectMgr[2] = 0i64;
  this->pEffectMgr[3] = 0i64;
  this->pEffectMgr[4] = 0i64;
  this->iThrowChildPlayerID = -1;
  *(_QWORD *)this->bsInvisibleFlag._Array = 0i64;
  this->rivalTalkData.iWindowActive = 0;
  *(_QWORD *)&this->rivalTalkData.iTextID = -1i64;
  *(_DWORD *)&this->rivalTalkData.bNextActionReserve = 0;
  this->rivalTalkData.pActDat = 0i64;
  *(_QWORD *)this->iPrevDamageAnnounce = 0i64;
  *(_QWORD *)this->iShadowPassSetting = 0i64;
  *(_QWORD *)&this->cameraLightParam[0].iLightID = 0i64;
  *(_DWORD *)&this->cameraLightParam[2].bApply = 0;
  `eh vector constructor iterator'(
    this->defaultMaterialData,
    0x4D8ui64,
    4ui64,
    (void (__fastcall *)(void *))MaterialShowControl::MaterialShowControl,
    (void (__fastcall *)(void *))ActorWeapon::ActionFlagCheck);
}

void __fastcall Actor::Actor(Actor *this)
{
  this->__vftable = (Actor_vtbl *)&Actor::`vftable';
  this->pActSys = 0i64;
  this->pAct = 0i64;
  this->pActBuf = 0i64;
  this->pActReserve = 0i64;
  this->pHitRect = 0i64;
  this->pHitRectBuf = 0i64;
  this->pHitRectReserve = 0i64;
  this->pAtkData = 0i64;
  this->pDmgSet = 0i64;
  this->pModel = 0i64;
  this->pMotionChangeModel = 0i64;
  this->pMotionChangeModelReserve = 0i64;
  this->pTarget = 0i64;
  this->pParent = 0i64;
  *(_QWORD *)&this->vPos.x = 0i64;
  *(_QWORD *)&this->vPos.z = 0i64;
  *(_QWORD *)&this->vPosPrev.y = 0i64;
  *(_QWORD *)&this->vMov.x = 0i64;
  *(_QWORD *)&this->vMov.z = 0i64;
  *(_QWORD *)&this->vMovPrev.y = 0i64;
  *(_QWORD *)&this->vAdd.x = 0i64;
  *(_QWORD *)&this->vAdd.z = 0i64;
  *(_QWORD *)&this->vAddPrev.y = 0i64;
  *(_QWORD *)&this->vOff.x = 0i64;
  *(_QWORD *)&this->vOff.z = 0i64;
  *(_QWORD *)&this->vOffPrev.y = 0i64;
  *(_QWORD *)&this->vBaseOff.x = 0i64;
  *(_QWORD *)&this->vBaseOff.z = 0i64;
  *(_QWORD *)&this->vBaseOffPrev.y = 0i64;
  *(_QWORD *)&this->vColOffBase.x = 0i64;
  *(_QWORD *)&this->vColOffBase.z = 0i64;
  *(_QWORD *)&this->vColOff.y = 0i64;
  *(_QWORD *)&this->vColOffPrev.x = 0i64;
  *(_QWORD *)&this->vColOffPrev.z = 0i64;
  *(_QWORD *)&this->vBuf.y = 0i64;
  *(_QWORD *)&this->vBasePos.x = 0i64;
  *(_QWORD *)&this->vBasePos.z = 0i64;
  *(_QWORD *)&this->vBasePosPrev.y = 0i64;
  *(_QWORD *)&this->vScale.x = 0i64;
  *(_QWORD *)&this->vScale.z = 0i64;
  *(_QWORD *)&this->vScalePrev.y = 0i64;
  *(_QWORD *)&this->vAngle.x = 0i64;
  *(_QWORD *)&this->vAngle.z = 0i64;
  *(_QWORD *)&this->vAnglePrev.y = 0i64;
  *(_WORD *)&this->bOptionAssetActor = 0;
  this->bSkipSyncPosture = 0;
  *(_QWORD *)&this->xHitStopFrame.value = 0i64;
  *(_QWORD *)&this->xHitStopDelay.value = 0i64;
  this->attackHitGroupBit._Array[0] = 0i64;
  this->attackHitGroupBit._Array[1] = 0i64;
  this->ParamInit(this, 0i64, 0i64, 0i64, 0i64);
}

void __fastcall ActorChara::ActorChara(ActorChara *this)
{
  unsigned __int64 v2; // rax

  ActorCharaBase::ActorCharaBase(this);
  this->ActorCharaBase::ActorObject::Actor::__vftable = (ActorChara_vtbl *)&ActorChara::`vftable'{for `ActorCharaBase'};
  this->CommandEventListener::__vftable = (CommandEventListener_vtbl *)&ActorChara::`vftable'{for `CommandEventListener'};
  `eh vector constructor iterator'(
    this->cmdCheck,
    0x58ui64,
    2ui64,
    (void (__fastcall *)(void *))CommandCheck::CommandCheck,
    (void (__fastcall *)(void *))CommandCheck::~CommandCheck);
  this->systemFlag._Array[0] = 0i64;
  *(_QWORD *)&this->xVital.value = 0i64;
  *(_QWORD *)&this->xExPower.value = 0i64;
  *(_QWORD *)&this->xMaxExPower.value = 0i64;
  *(_QWORD *)&this->xClimaxTime.value = 0i64;
  *(_QWORD *)&this->xMaxClimaxTime.value = 0i64;
  *(_QWORD *)&this->xGuardRecoverMax.value = 0i64;
  *(_QWORD *)&this->xStunPower.value = 0i64;
  this->xStunPowerPrev.value = 0;
  this->damageInfo.xPoisonIntervalFrame.value = 0;
  *(_QWORD *)&this->xPursuitFrame.value = 0i64;
  *(_QWORD *)&this->xHitBackFrame.value = 0i64;
  *(_QWORD *)&this->xStunDamageFrame.value = 0i64;
  *(_QWORD *)&this->xGuardPowerWaitCount.value = 0i64;
  *(_QWORD *)&this->xThrowMutekiCount.value = 0i64;
  this->xDashRemainCount.value = 0;
  *(_QWORD *)&this->xExEffectFrame.value = 0i64;
  *(_QWORD *)&this->xClimaxEffectFrame.value = 0i64;
  *(_QWORD *)this->bsAliveShotID._Array = 0i64;
  this->bsAttackGuardShotID._Array[0] = 0;
  *(_QWORD *)this->bsBranchFlgShotID[0]._Array = 0i64;
  *(_QWORD *)this->bsBranchFlgShotID[2]._Array = 0i64;
  this->cmdInfo.hitStopInfo.__vftable = (RestrictRingBuffer<ActorChara::CommandInfo::HitStopInfo>_vtbl *)&RestrictRingBuffer<ActorChara::CommandInfo::HitStopInfo>::`vftable';
  *(_QWORD *)&this->cmdInfo.hitStopInfo.uiBufferMask = 15i64;
  this->cmdInfo.hitStopInfo.pBuffer = 0i64;
  *(_QWORD *)&this->cmdInfo.hitStopInfo.uiBeginIndex = 0i64;
  this->cmdInfo.hitStopInfo.uiDelay = 0;
  this->cmdInfo.hitStopInfo.uiBufferSize = 16;
  v2 = 64i64;
  if ( !is_mul_ok(0x10ui64, 4ui64) )
    v2 = -1i64;
  this->cmdInfo.hitStopInfo.pBuffer = (ActorChara::CommandInfo::HitStopInfo *)operator new[](v2);
  *(_QWORD *)&this->headCtrl.vHeadPos.x = 0i64;
  this->headCtrl.vHeadPos.z = 0.0;
  this->charaUniqueParam = 0i64;
  *(_QWORD *)&this->charaOffsetParam.vPrevOff.x = 0i64;
  *(_QWORD *)&this->charaOffsetParam.vPrevOff.z = 0i64;
  *(_QWORD *)&this->charaOffsetParam.vNextOff.y = 0i64;
  this->charaOffsetParam.xNowFrame.value = 0;
  this->bsTrainingFlag._Array[0] = 0;
}

void __fastcall ActorCharaBase::ActorCharaBase(ActorCharaBase *this)
{
  Actor::Actor(this);
  *(_QWORD *)this->bsAttackFlag._Array = 0i64;
  this->__vftable = (ActorCharaBase_vtbl *)&ActorCharaBase::`vftable';
  this->pDataUnify = 0i64;
  this->pBaseStat = 0i64;
  this->pCharaBone = 0i64;
  this->charaBaseFlag._Array[0] = 0;
  *(_WORD *)&this->bEnableFollowBone = 0;
  this->bMotionMoveSlowAdjValue = 0;
  *(_QWORD *)&this->vMotionMoveAdj.x = 0i64;
  this->vMotionMoveAdj.z = 0.0;
  *(_WORD *)&this->bSavePrevBone = 0;
  this->bEnablePrevBoneInfoMirror = 0;
  *(_QWORD *)&this->colorChangeData.xMaxFadeFrame.value = 0i64;
  *(_QWORD *)&this->colorChangeData.color.r = 0i64;
  *(_QWORD *)&this->colorChangeData.color.b = 0i64;
  *(_QWORD *)&this->colorChangeData.iColorType = 0i64;
  this->colorChangeData.xFadeFrame.value = 0;
  *(_WORD *)&this->colorChangeData.bFadeOut = 0;
  this->colorChangeData.iOptionFlag = 0;
}

void __fastcall ActorEffect::ActorEffect(ActorEffect *this)
{
  Actor::Actor(this);
  this->__vftable = (ActorEffect_vtbl *)&ActorEffect::`vftable';
  this->pEffect = 0i64;
  this->pFounder = 0i64;
  this->pOwner = 0i64;
  memset(&this->mWorld, 0, 0x90ui64);
  *(_DWORD *)&this->bCleanupEffect = 0;
  this->xDelayCreateCount.value = 0;
}

void __fastcall ActorOption::ActorOption(ActorOption *this)
{
  ActorCharaBase::ActorCharaBase(this);
  this->__vftable = (ActorOption_vtbl *)&ActorOption::`vftable';
  this->pOwner = 0i64;
  *(_WORD *)&this->bPositionInit = 0;
  *(_QWORD *)&this->mamahahaParam.vInitOffsetPos.x = 0i64;
  *(_QWORD *)&this->mamahahaParam.vInitOffsetPos.z = 0i64;
  *(_QWORD *)&this->mamahahaParam.vStartPos.y = 0i64;
  *(_QWORD *)&this->mamahahaParam.vEndPos.x = 0i64;
  this->mamahahaParam.vEndPos.z = 0.0;
  *(_QWORD *)this->mamahahaParam.bsOptionFlag._Array = 0i64;
  *(_QWORD *)&this->mamahahaParam.xMergeCountMax.value = 0i64;
  *(_QWORD *)&this->mamahahaParam.vMergePos.y = 0i64;
}

void __fastcall ActorShot::ActorShot(ActorShot *this)
{
  Actor::Actor(this);
  *(_QWORD *)this->bsAttackFlag._Array = 0i64;
  this->__vftable = (ActorShot_vtbl *)&ActorShot::`vftable';
  this->pFounder = 0i64;
  this->pOwner = 0i64;
  this->pReflectOwner = 0i64;
  *(_QWORD *)&this->shotData.iPosBase = 0i64;
  *(_QWORD *)&this->shotData.fPosY = 0i64;
  *(_QWORD *)&this->shotData.iHitCount = 0i64;
  *(_QWORD *)&this->eventData.iRestHitCountActNo = 0i64;
  *(_QWORD *)&this->eventData.iFastDieActNo = 0i64;
  *(_QWORD *)&this->eventData.iDieActNo = 0i64;
  *(_QWORD *)&this->ctrlData.bSetData = 0i64;
  *(_QWORD *)&this->ctrlData.iOptionFlag = 0i64;
  *(_QWORD *)this->ctrlReqData.bsFuncFlag._Array = 0i64;
  *(_WORD *)&this->bReflectShot = 0;
  this->bParentBind = 0;
  this->bNextHitWait = 0;
  this->iShotVital = 0;
}

void __fastcall ActorWeapon::ActorWeapon(ActorWeapon *this)
{
  Actor::Actor(this);
  this->iWeaponID = -1;
  this->__vftable = (ActorWeapon_vtbl *)&ActorWeapon::`vftable';
  this->pOwner = 0i64;
  this->bInvisible = 0;
  *(_QWORD *)&this->defaultWeaponParam.iSettingFlag = 0i64;
  *(_QWORD *)&this->defaultWeaponParam.fStartFrame = 0i64;
  *(_QWORD *)&this->defaultWeaponParam.fLoopFrame = 0i64;
  *(_QWORD *)&this->defaultWeaponParam.iOptionFlag = 0i64;
  *(_QWORD *)&this->weaponParam.iMotionID = 0i64;
  *(_QWORD *)&this->weaponParam.fPlayRate = 0i64;
  *(_QWORD *)&this->weaponParam.fReserve = 0i64;
  this->bUpdateWeaponParam = 0;
  *(_WORD *)&this->bSavePrevBone = 0;
  this->bSetUpEnd = 0;
  this->fMotionFrame = 0.0;
}

void __fastcall BattleSystem::BattleController::BattleController(BattleSystem::BattleController *this)
{
  __int64 v2; // rsi
  __int64 v3; // rbp
  BattleSystem::BattlePlayerInfo *playerInfo; // rcx
  int *p_iPerfectBonus; // rbx
  BattleSystem::BattlePlayerInfo *v6; // rcx
  BattleSystem::BattleLoadedInfo *p_loadedInfo; // rax
  __int64 v8; // rbx
  BattleSystem::BattleRoundInfo *roundInfo; // rbp
  BattleSystem::BattleController::CharaBoneData *charaBoneData; // rbx

  ActionSystem::ActionSystem(&this->actSystem);
  *(_QWORD *)&this->battleInfo.battleMode = 0i64;
  *(_QWORD *)&this->battleInfo.battleStageID = 0i64;
  *(_QWORD *)&this->battleInfo.iRoundLimitFrame = 0i64;
  *(_QWORD *)&this->battleInfo.iMaxRoundWinCount = 0i64;
  *(_QWORD *)&this->battleInfo.bExtraRound = 0i64;
  *(_QWORD *)&this->battleInfo.battleWinnerID = 0i64;
  *(_DWORD *)&this->battleInfo.bReplaySaveTarget = 0;
  v2 = 2i64;
  v3 = 2i64;
  playerInfo = this->playerInfo;
  p_iPerfectBonus = &this->playerInfo[0].scoreInfo.iPerfectBonus;
  do
  {
    *((_QWORD *)p_iPerfectBonus - 1) = 0i64;
    *(_QWORD *)p_iPerfectBonus = 0i64;
    *((_QWORD *)p_iPerfectBonus + 1) = 0i64;
    p_iPerfectBonus[4] = 0;
    *(_QWORD *)(p_iPerfectBonus + 7) = 0i64;
    *(_QWORD *)(p_iPerfectBonus + 9) = 0i64;
    *(_QWORD *)(p_iPerfectBonus + 11) = 0i64;
    BattleSystem::BattlePlayerInfo::Init(playerInfo, 1);
    playerInfo = v6 + 1;
    p_iPerfectBonus += 42;
    --v3;
  }
  while ( v3 );
  p_loadedInfo = &this->loadedInfo;
  this->loadedInfo.loadedStageID = STAGE_ID_NONE;
  *(_WORD *)&this->loadedInfo.bLoadedCommonData = 256;
  if ( &this->loadedInfo != (BattleSystem::BattleLoadedInfo *)&this->loadedInfo.loadedStageID )
  {
    do
    {
      p_loadedInfo->loadedChara[0].charaNo = CHARACTER_NO_NONE;
      p_loadedInfo->loadedChara[0].iCharaColor = 0;
      p_loadedInfo = (BattleSystem::BattleLoadedInfo *)((char *)p_loadedInfo + 8);
    }
    while ( p_loadedInfo != (BattleSystem::BattleLoadedInfo *)&this->loadedInfo.loadedStageID );
  }
  `eh vector constructor iterator'(
    this->cpuPlayer,
    0x1F0ui64,
    2ui64,
    (void (__fastcall *)(void *))BattleSystem::CpuSequence::CpuSequence,
    (void (__fastcall *)(void *))BattleSystem::CpuSequence::~CpuSequence);
  this->comboMission.__vftable = (BattleSystem::ComboMissionJudge_vtbl *)&BattleSystem::ComboMissionJudge::`vftable';
  this->comboMission.pClearInfo._Mypair._Myval2 = 0i64;
  BattleSystem::ComboMissionJudge::Dispose(&this->comboMission);
  *(_QWORD *)&this->roundPhase = 0i64;
  this->uiSystemCount = 0;
  *(_DWORD *)&this->bBattleEnd = 256;
  this->bAkebonoKO = 0;
  *(_QWORD *)&this->playBGMID = -1i64;
  this->fNormalStageBGMPos = 0.0;
  this->iNextMissionID = -1;
  *(_QWORD *)this->initialStartAction = 0i64;
  *(_QWORD *)&this->resultMember.scoreInfo.iLifeBonus = 0i64;
  *(_QWORD *)&this->resultMember.scoreInfo.iPerfectBonus = 0i64;
  *(_QWORD *)&this->resultMember.scoreInfo.iCpuLevelBonus = 0i64;
  this->resultMember.scoreInfo.iBattleScore = 0;
  BattleSystem::ResultMemberInfo::Clear(&this->resultMember);
  v8 = 10i64;
  roundInfo = this->roundInfo;
  do
  {
    `vector constructor iterator'(
      roundInfo++,
      0x24ui64,
      2ui64,
      (void *(__fastcall *)(void *))BattleSystem::BattleRoundInfo::PlayerData::PlayerData);
    --v8;
  }
  while ( v8 );
  charaBoneData = this->charaBoneData;
  do
  {
    BattleSystem::BattleController::CharaBoneData::CharaBoneData(charaBoneData++);
    --v2;
  }
  while ( v2 );
  this->successiveBattleTakeOverInfo.bTakeOver = 0;
  *(_QWORD *)&this->successiveBattleTakeOverInfo.roundEndInfo.xVital.value = 0i64;
  *(_QWORD *)&this->successiveBattleTakeOverInfo.roundEndInfo.xClimaxTime.value = 0i64;
  *(_QWORD *)&this->successiveBattleTakeOverInfo.roundEndInfo.xStunPower.value = 0i64;
  this->successiveBattleTakeOverInfo.roundEndInfo.bTakeOverActor = 0;
  this->successiveBattleTakeOverInfo.playBGMID = SND_NONE;
  *(_QWORD *)&this->koTimeStopInfo.winnerID = 0i64;
  *(_QWORD *)&this->koTimeStopInfo.uiStartDelay = 0i64;
  RandomMT::RandomMT(&this->randMT);
  this->uiSeedValue = 0;
  this->matchedDemoChara._Array[0] = 0i64;
  *(_QWORD *)this->keyRecordInfo.enableKeyPlaySlot[0]._Array = 0i64;
  `eh vector constructor iterator'(
    this->m_KeyRecord,
    0x10ui64,
    0xCui64,
    (void (__fastcall *)(void *))InputKeyRecord::InputKeyRecord,
    (void (__fastcall *)(void *))std::unique_ptr<OGLModel>::~unique_ptr<OGLModel>);
  this->rank_win_cnt = 2068357982;
  this->rank_continuous_win_cnt = 2068357982;
  ActionSystem::Final(&this->actSystem);
  ActionSystem::Init(&this->actSystem, 9);
  BattleSystem::BattleController::DefaultBattleInit(this);
  this->successiveBattleTakeOverInfo.bTakeOver = 0;
  *(_QWORD *)&this->successiveBattleTakeOverInfo.roundEndInfo.xVital.value = 0i64;
  *(_QWORD *)&this->successiveBattleTakeOverInfo.roundEndInfo.xClimaxTime.value = 0i64;
  *(_QWORD *)&this->successiveBattleTakeOverInfo.roundEndInfo.xStunPower.value = 0i64;
  this->successiveBattleTakeOverInfo.roundEndInfo.bTakeOverActor = 0;
  this->successiveBattleTakeOverInfo.playBGMID = SND_NONE;
}

void __fastcall BattleHud::BattleHud(BattleHud *this)
{
  BattleEventHandler *Instance; // rax

  this->m_bError = 0;
  this->BattleEventHandler::Listener::__vftable = (BattleHud_vtbl *)&BattleHud::`vftable'{for `BattleEventHandler::Listener'};
  this->ErrorChecker::__vftable = (ErrorChecker_vtbl *)&BattleHud::`vftable'{for `ErrorChecker'};
  this->m_playerInfoType = Offline;
  *(_WORD *)&this->m_bInitialize = 0;
  *(_QWORD *)&this->m_gaugeRenderParams.upperGaugePositionPlusY = 0i64;
  *(_QWORD *)&this->m_gaugeRenderParams.systemMessagePositionPlusX = 0i64;
  *(_QWORD *)&this->m_gaugeRenderParams.gaugeRenderColor = -1i64;
  this->m_gaugeRenderParams.barLengthRate = 1.0;
  this->m_pKeyHistory = 0i64;
  this->m_pNico2Chat = 0i64;
  this->m_pRenderer = 0i64;
  this->m_pResources = 0i64;
  *(_QWORD *)&this->m_fadeAnimRoomID.m_number = 0i64;
  *(_QWORD *)&this->m_fadeAnimRoomID.m_max = 1065353216i64;
  this->m_fadeAnimRoomID.m_bAnimation = 0;
  *(_QWORD *)&this->m_fadeAnimSESelector.m_number = 0i64;
  *(_QWORD *)&this->m_fadeAnimSESelector.m_max = 1065353216i64;
  this->m_fadeAnimSESelector.m_bAnimation = 0;
  *(_QWORD *)&this->m_fadeAnimReplaySystem.m_number = 0i64;
  *(_QWORD *)&this->m_fadeAnimReplaySystem.m_max = 1065353216i64;
  this->m_fadeAnimReplaySystem.m_bAnimation = 0;
  *(_QWORD *)&this->m_fadeAnimReplayUser.m_number = 0i64;
  *(_QWORD *)&this->m_fadeAnimReplayUser.m_max = 1065353216i64;
  this->m_fadeAnimReplayUser.m_bAnimation = 0;
  this->m_bReplayDescriptionVisibled = 0;
  *(_WORD *)&this->m_userCharacterSymbol.bEnabled = 0;
  *(_QWORD *)&this->m_userCharacterSymbol.alpha.m_number = 0i64;
  *(_QWORD *)&this->m_userCharacterSymbol.alpha.m_max = 1065353216i64;
  this->m_userCharacterSymbol.alpha.m_bAnimation = 0;
  this->m_pGauges[0] = 0i64;
  this->m_pGauges[1] = 0i64;
  this->m_visibleFlags = 0;
  this->m_onlineVisibleFlags = 255;
  this->m_appearanceAnimationParams.bPlaying = 0;
  this->m_stageNo = 0;
  Instance = BattleEventHandler::getInstance();
  BattleListenerList::add(Instance->m_pListenerList, this);
}

void __fastcall BattleSystem::BattleController::CharaBoneData::CharaBoneData(
        BattleSystem::BattleController::CharaBoneData *this)
{
  __int64 v1; // rdx
  int *iBoneIndex; // r8
  __int64 v3; // r10
  __int64 v4; // r11
  __int64 v6; // r9
  __int64 v7; // r9
  int *v8; // rcx
  __int64 v9; // r8
  int *v10; // rcx

  v1 = 0i64;
  iBoneIndex = this->mainChara.iBoneIndex;
  this->mainChara.pModel = 0i64;
  v3 = 100i64;
  v4 = 100i64;
  if ( this->mainChara.iBoneIndex > (int *)&this->optionChara )
    v4 = 0i64;
  v6 = 0i64;
  if ( this->mainChara.iBoneIndex <= (int *)&this->optionChara )
  {
    do
    {
      ++v6;
      *iBoneIndex++ = -1;
    }
    while ( v6 != v4 );
  }
  this->optionChara.pModel = 0i64;
  v7 = 100i64;
  v8 = this->optionChara.iBoneIndex;
  v9 = 0i64;
  if ( v8 > v8 + 100 )
    v7 = 0i64;
  if ( v8 <= v8 + 100 )
  {
    do
    {
      ++v9;
      *v8++ = -1;
    }
    while ( v9 != v7 );
  }
  v10 = this->extendChara.iBoneIndex;
  this->extendChara.pModel = 0i64;
  if ( this->extendChara.iBoneIndex > (int *)&this[1] )
    v3 = 0i64;
  if ( this->extendChara.iBoneIndex <= (int *)&this[1] )
  {
    do
    {
      ++v1;
      *v10++ = -1;
    }
    while ( v1 != v3 );
  }
}

void __fastcall CommandCheck::CommandCheck(CommandCheck *this)
{
  this->pCmdDat = 0i64;
  this->pKeyBuf = 0i64;
  this->iCommandDataTag = 0;
  this->bClimaxDebug = 0;
  std::unordered_map<std::string,CommandCheck::CommandSettingMapData>::unordered_map<std::string,CommandCheck::CommandSettingMapData>(&this->cmdSetMap);
}

void __fastcall BattleSystem::CpuSequence::CpuSequence(BattleSystem::CpuSequence *this)
{
  std::vector<BattleSystem::SequenceCandidateInfo> *p_seqCandidateList; // rcx

  this->cmdCheckFunc._Mystorage._Ptrs[7] = 0i64;
  this->xSeqWaitFrame.value = 0;
  *(_QWORD *)&this->nowSeq.xNowFrame.value = 0i64;
  *(_QWORD *)&this->reqSeq.xNowFrame.value = 0i64;
  p_seqCandidateList = &this->seqCtrl.seqCandidateList;
  p_seqCandidateList->_Mypair._Myval2._Myfirst = 0i64;
  p_seqCandidateList->_Mypair._Myval2._Mylast = 0i64;
  p_seqCandidateList->_Mypair._Myval2._Myend = 0i64;
  p_seqCandidateList[1]._Mypair._Myval2._Myfirst = 0i64;
  p_seqCandidateList[1]._Mypair._Myval2._Mylast = 0i64;
  p_seqCandidateList[1]._Mypair._Myval2._Myend = (BattleSystem::SequenceCandidateInfo *)-1i64;
  if ( (unsigned __int64)(p_seqCandidateList->_Mypair._Myval2._Myend - p_seqCandidateList->_Mypair._Myval2._Myfirst) < 0x80 )
    std::vector<BattleSystem::SequenceCandidateInfo>::_Reallocate(p_seqCandidateList, 0x80ui64);
}

void __fastcall InputKeyRecord::InputKeyRecord(InputKeyRecord *this)
{
  unsigned int v2; // edi
  char *v3; // rbx
  unsigned __int64 v4; // rax
  RestrictRingBuffer<InputKeyRecord::RecordKey> *Myval2; // rcx

  v2 = 0;
  this->pKeyBuffer._Mypair._Myval2 = 0i64;
  this->uiPlayCount = 0;
  this->uiMaxRecordFrame = 6000;
  v3 = (char *)operator new(0x30ui64);
  *(_QWORD *)v3 = &RestrictRingBuffer<InputKeyRecord::RecordKey>::`vftable';
  *(_QWORD *)(v3 + 12) = 0x1FFFi64;
  *((_QWORD *)v3 + 3) = 0i64;
  *((_QWORD *)v3 + 4) = 0i64;
  *((_DWORD *)v3 + 10) = 0;
  *((_DWORD *)v3 + 2) = 0x2000;
  v4 = 0x10000i64;
  if ( !is_mul_ok(0x2000ui64, 8ui64) )
    v4 = -1i64;
  *((_QWORD *)v3 + 3) = operator new[](v4);
  Myval2 = this->pKeyBuffer._Mypair._Myval2;
  this->pKeyBuffer._Mypair._Myval2 = (RestrictRingBuffer<InputKeyRecord::RecordKey> *)v3;
  if ( Myval2 )
    ((void (__fastcall *)(RestrictRingBuffer<InputKeyRecord::RecordKey> *, __int64))Myval2->~RestrictRingBuffer<InputKeyRecord::RecordKey>)(
      Myval2,
      1i64);
  if ( !this->pKeyBuffer._Mypair._Myval2->uiBufferSize )
    v2 = -1;
  this->pKeyBuffer._Mypair._Myval2->uiDelay = v2;
}

void __fastcall MaterialShowControl::MaterialShowControl(MaterialShowControl *this)
{
  this->iDataCount = 0;
  memset(this->defaultMaterialData, 0, sizeof(this->defaultMaterialData));
  this->iMianMaskCount = 0;
  *(_QWORD *)this->iMianMaskIndex = 0i64;
  *(_QWORD *)&this->iMianMaskIndex[2] = 0i64;
  *(_QWORD *)&this->iMianMaskIndex[4] = 0i64;
  *(_QWORD *)&this->iMianMaskIndex[6] = 0i64;
  *(_QWORD *)&this->iMianMaskIndex[8] = 0i64;
  this->iMianMaskType = -1;
  memset(this->ListData, 0, sizeof(this->ListData));
  memset(this->pModelList, 0, sizeof(this->pModelList));
}

void __fastcall extension::RefCountablePtr<extension::exsound_detail::RuntimeEffector>::~RefCountablePtr<extension::exsound_detail::RuntimeEffector>(
        extension::RefCountablePtr<extension::exsound_detail::RuntimeEffector> *this,
        __int64 a2)
{
  extension::exsound_detail::RuntimeEffector *m_ptr; // rbx
  std::function<float __cdecl(void)> *v3; // rcx

  m_ptr = this->m_ptr;
  if ( this->m_ptr && _InterlockedExchangeAdd64((volatile signed __int64 *)m_ptr, 0xFFFFFFFFFFFFFFFFui64) == 1 && m_ptr )
  {
    v3 = (std::function<float __cdecl(void)> *)m_ptr->getPanPositionFunc._Mystorage._Ptrs[7];
    if ( v3 )
    {
      LOBYTE(a2) = v3 != &m_ptr->getPanPositionFunc;
      ((void (__fastcall *)(std::function<float __cdecl(void)> *, __int64))v3->_Mystorage._Ptrs[0][4].__vftable)(v3, a2);
      m_ptr->getPanPositionFunc._Mystorage._Ptrs[7] = 0i64;
    }
    operator delete(m_ptr, 0x60ui64);
  }
}

void __fastcall SimpleQueue<ActorChara,4>::~SimpleQueue<ActorChara,4>(SimpleQueue<ActorChara,4> *this)
{
  `eh vector destructor iterator'(this->body, 0xF58ui64, 4ui64, (void (__fastcall *)(void *))ActorChara::~ActorChara);
}

void __fastcall SimpleQueue<ActorEffect,96>::~SimpleQueue<ActorEffect,96>(SimpleQueue<ActorEffect,96> *this)
{
  `eh vector destructor iterator'(
    this->body,
    0x3F0ui64,
    0x60ui64,
    (void (__fastcall *)(void *))ActorEffect::~ActorEffect);
}

void __fastcall SimpleQueue<ActorOption,4>::~SimpleQueue<ActorOption,4>(SimpleQueue<ActorOption,4> *this)
{
  `eh vector destructor iterator'(this->body, 0x3E8ui64, 4ui64, (void (__fastcall *)(void *))ActorShot::~ActorShot);
}

void __fastcall SimpleQueue<ActorShot,32>::~SimpleQueue<ActorShot,32>(SimpleQueue<ActorShot,32> *this)
{
  `eh vector destructor iterator'(this->body, 0x3A8ui64, 0x20ui64, (void (__fastcall *)(void *))ActorShot::~ActorShot);
}

void __fastcall SimpleQueue<ActorWeapon,96>::~SimpleQueue<ActorWeapon,96>(SimpleQueue<ActorWeapon,96> *this)
{
  `eh vector destructor iterator'(this->body, 0x388ui64, 0x60ui64, (void (__fastcall *)(void *))ActorShot::~ActorShot);
}

void __fastcall std::_Func_class<void,>::~_Func_class<void,>(std::function<void __cdecl(void)> *this, __int64 a2)
{
  std::function<void __cdecl(void)> *v3; // rcx

  v3 = (std::function<void __cdecl(void)> *)this->_Mystorage._Ptrs[7];
  if ( v3 )
  {
    LOBYTE(a2) = v3 != this;
    ((void (__fastcall *)(std::function<void __cdecl(void)> *, __int64))v3->_Mystorage._Ptrs[0][4].__vftable)(v3, a2);
    this->_Mystorage._Ptrs[7] = 0i64;
  }
}

void __fastcall std::list<std::pair<std::string const,CommandCheck::CommandSettingMapData>>::~list<std::pair<std::string const,CommandCheck::CommandSettingMapData>>(
        std::list<std::pair<std::string const ,CommandCheck::CommandSettingMapData>> *this)
{
  std::list<std::pair<std::string const,CommandCheck::CommandSettingMapData>>::clear(this);
  operator delete(this->_Mypair._Myval2._Myhead);
}

void __fastcall std::unique_ptr<OGLModel>::~unique_ptr<OGLModel>(
        std::unique_ptr<extension::SoundList::LazyMediaSetBuildJob> *this)
{
  extension::SoundList::LazyMediaSetBuildJob *Myval2; // rcx

  Myval2 = this->_Mypair._Myval2;
  if ( Myval2 )
    ((void (__fastcall *)(extension::SoundList::LazyMediaSetBuildJob *, __int64))Myval2->~AgIThreadHost)(Myval2, 1i64);
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

void __fastcall std::vector<EffectListNode>::~vector<EffectListNode>(std::vector<EffectListNode> *this)
{
  if ( this->_Mypair._Myval2._Myfirst )
  {
    std::_Wrap_alloc<std::allocator<AgDelegate1<AgSuspendingEvent const &,void>>>::deallocate(
      (std::_Wrap_alloc<std::allocator<AgDelegate1<AgUserUpdatedEvent const &,void> > > *)this,
      (AgDelegate1<AgUserUpdatedEvent const &,void> *)this->_Mypair._Myval2._Myfirst,
      this->_Mypair._Myval2._Myend - this->_Mypair._Myval2._Myfirst);
    this->_Mypair._Myval2._Myfirst = 0i64;
    this->_Mypair._Myval2._Mylast = 0i64;
    this->_Mypair._Myval2._Myend = 0i64;
  }
}

void __fastcall ActionSystem::~ActionSystem(ActionSystem *this)
{
  std::allocator<AgLogger *> *v2; // rcx
  AgLogger **Myfirst; // rdx

  ActionSystem::Final(this);
  `eh vector destructor iterator'(
    this->defaultMaterialData,
    0x4D8ui64,
    4ui64,
    (void (__fastcall *)(void *))ActorWeapon::ActionFlagCheck);
  `eh vector destructor iterator'(
    this->subCameraCtrl,
    0x3C8ui64,
    2ui64,
    (void (__fastcall *)(void *))ActorWeapon::ActionFlagCheck);
  Myfirst = (AgLogger **)this->pReqDraw._Mypair._Myval2._Myfirst;
  if ( Myfirst )
  {
    std::_Wrap_alloc<std::allocator<OGLShader *>>::deallocate(
      v2,
      Myfirst,
      ((char *)this->pReqDraw._Mypair._Myval2._Myend - (char *)Myfirst) >> 3);
    this->pReqDraw._Mypair._Myval2._Myfirst = 0i64;
    this->pReqDraw._Mypair._Myval2._Mylast = 0i64;
    this->pReqDraw._Mypair._Myval2._Myend = 0i64;
  }
  `eh vector destructor iterator'(
    this->actorOptionQue.body,
    0x3E8ui64,
    4ui64,
    (void (__fastcall *)(void *))ActorShot::~ActorShot);
  `eh vector destructor iterator'(
    this->actorWeaponQue.body,
    0x388ui64,
    0x60ui64,
    (void (__fastcall *)(void *))ActorShot::~ActorShot);
  `eh vector destructor iterator'(
    this->actorEffectQue.body,
    0x3F0ui64,
    0x60ui64,
    (void (__fastcall *)(void *))ActorEffect::~ActorEffect);
  `eh vector destructor iterator'(
    this->actorShotQue.body,
    0x3A8ui64,
    0x20ui64,
    (void (__fastcall *)(void *))ActorShot::~ActorShot);
  `eh vector destructor iterator'(
    this->actorCharaQue.body,
    0xF58ui64,
    4ui64,
    (void (__fastcall *)(void *))ActorChara::~ActorChara);
}

void __fastcall ActorChara::~ActorChara(ActorChara *this, unsigned __int64 a2)
{
  ActorChara::CommandInfo::HitStopInfo *pBuffer; // rcx

  this->ActorCharaBase::ActorObject::Actor::__vftable = (ActorChara_vtbl *)&ActorChara::`vftable'{for `ActorCharaBase'};
  this->CommandEventListener::__vftable = (CommandEventListener_vtbl *)&ActorChara::`vftable'{for `CommandEventListener'};
  this->cmdInfo.hitStopInfo.__vftable = (RestrictRingBuffer<ActorChara::CommandInfo::HitStopInfo>_vtbl *)&RestrictRingBuffer<ActorChara::CommandInfo::HitStopInfo>::`vftable';
  pBuffer = this->cmdInfo.hitStopInfo.pBuffer;
  if ( pBuffer )
  {
    operator delete(pBuffer, a2);
    this->cmdInfo.hitStopInfo.pBuffer = 0i64;
  }
  `eh vector destructor iterator'(
    this->cmdCheck,
    0x58ui64,
    2ui64,
    (void (__fastcall *)(void *))CommandCheck::~CommandCheck);
  this->CommandEventListener::__vftable = (CommandEventListener_vtbl *)&CommandEventListener::`vftable';
  this->ActorCharaBase::ActorObject::Actor::__vftable = (ActorChara_vtbl *)&Actor::`vftable';
}

void __fastcall BattleHud::~BattleHud(BattleHud *this)
{
  BattleEventHandler *Instance; // rax

  this->BattleEventHandler::Listener::__vftable = (BattleHud_vtbl *)&BattleHud::`vftable'{for `BattleEventHandler::Listener'};
  this->ErrorChecker::__vftable = (ErrorChecker_vtbl *)&BattleHud::`vftable'{for `ErrorChecker'};
  BattleHud::dispose(this);
  Instance = BattleEventHandler::getInstance();
  BattleListenerList::remove(Instance->m_pListenerList, this);
  this->ErrorChecker::__vftable = (ErrorChecker_vtbl *)&ErrorChecker::`vftable';
}

void __fastcall BattleSystem::ComboMissionJudge::~ComboMissionJudge(BattleSystem::ComboMissionJudge *this)
{
  BattleSystem::ComboMissionJudge::TermClearInfo *Myval2; // rcx
  bool *p_bClear; // rbx

  this->__vftable = (BattleSystem::ComboMissionJudge_vtbl *)&BattleSystem::ComboMissionJudge::`vftable';
  Myval2 = this->pClearInfo._Mypair._Myval2;
  if ( Myval2 )
  {
    p_bClear = &Myval2[-1].bClear;
    `eh vector destructor iterator'(
      Myval2,
      0x10ui64,
      *(_QWORD *)&Myval2[-1].bClear,
      (void (__fastcall *)(void *))BattleSystem::ComboMissionJudge::TermClearInfo::~TermClearInfo);
    operator delete[](p_bClear, 16i64 * *(_QWORD *)p_bClear + 8);
  }
  this->__vftable = (BattleSystem::ComboMissionJudge_vtbl *)&BattleSystem::ComboMissionAttackEventListener::`vftable';
}

void __fastcall CommandCheck::~CommandCheck(CommandCheck *this)
{
  AgLogger **Myfirst; // rdx

  Myfirst = (AgLogger **)this->cmdSetMap._Vec._Mypair._Myval2._Myfirst;
  if ( Myfirst )
  {
    std::_Wrap_alloc<std::allocator<OGLShader *>>::deallocate(
      (std::allocator<AgLogger *> *)this,
      Myfirst,
      ((char *)this->cmdSetMap._Vec._Mypair._Myval2._Myend - (char *)Myfirst) >> 3);
    this->cmdSetMap._Vec._Mypair._Myval2._Myfirst = 0i64;
    this->cmdSetMap._Vec._Mypair._Myval2._Mylast = 0i64;
    this->cmdSetMap._Vec._Mypair._Myval2._Myend = 0i64;
  }
  std::list<std::pair<std::string const,CommandCheck::CommandSettingMapData>>::clear(&this->cmdSetMap._List);
  operator delete(this->cmdSetMap._List._Mypair._Myval2._Myhead);
}

void __fastcall CommandEventListener::~CommandEventListener(CommandEventListener *this)
{
  this->__vftable = (CommandEventListener_vtbl *)&CommandEventListener::`vftable';
}

void __fastcall BattleSystem::CpuSequence::~CpuSequence(BattleSystem::CpuSequence *this)
{
  BattleSystem::SequenceCandidateInfo *Myfirst; // rdx
  std::function<CommandData::Setting const * __cdecl(BattleSystem::CpuSequence &,int)> *p_cmdCheckFunc; // rbx
  std::function<CommandData::Setting const * __cdecl(BattleSystem::CpuSequence &,int)> *v4; // rcx

  Myfirst = this->seqCtrl.seqCandidateList._Mypair._Myval2._Myfirst;
  if ( Myfirst )
  {
    std::_Wrap_alloc<std::allocator<AgDelegate1<AgSuspendingEvent const &,void>>>::deallocate(
      (std::_Wrap_alloc<std::allocator<AgDelegate1<AgUserUpdatedEvent const &,void> > > *)this,
      (AgDelegate1<AgUserUpdatedEvent const &,void> *)Myfirst,
      this->seqCtrl.seqCandidateList._Mypair._Myval2._Myend - Myfirst);
    this->seqCtrl.seqCandidateList._Mypair._Myval2._Myfirst = 0i64;
    this->seqCtrl.seqCandidateList._Mypair._Myval2._Mylast = 0i64;
    this->seqCtrl.seqCandidateList._Mypair._Myval2._Myend = 0i64;
  }
  p_cmdCheckFunc = &this->cmdCheckFunc;
  v4 = (std::function<CommandData::Setting const * __cdecl(BattleSystem::CpuSequence &,int)> *)p_cmdCheckFunc->_Mystorage._Ptrs[7];
  if ( v4 )
  {
    LOBYTE(Myfirst) = v4 != p_cmdCheckFunc;
    ((void (__fastcall *)(std::function<CommandData::Setting const * __cdecl(BattleSystem::CpuSequence &,int)> *, BattleSystem::SequenceCandidateInfo *))v4->_Mystorage._Ptrs[0][4].__vftable)(
      v4,
      Myfirst);
    p_cmdCheckFunc->_Mystorage._Ptrs[7] = 0i64;
  }
}

void __fastcall ActorWeapon::ActionFlagCheck(_SETJMP_FLOAT128 *JumpBuffer)
{
  ;
}

// attributes: thunk
void __fastcall extension::SoundManager::SEStopParams::~SEStopParams(
        extension::SoundManager::SEStopParams *this,
        __int64 a2)
{
  extension::RefCountablePtr<extension::exsound_detail::RuntimeEffector>::~RefCountablePtr<extension::exsound_detail::RuntimeEffector>(
    &this->m_runtimeEffector,
    a2);
}

void __fastcall BattleSystem::ComboMissionJudge::TermClearInfo::~TermClearInfo(
        std::unique_ptr<unsigned char [0]> *this,
        unsigned __int64 a2)
{
  unsigned __int8 *Myval2; // rcx

  Myval2 = this->_Mypair._Myval2;
  if ( Myval2 )
    operator delete(Myval2, a2);
}

std::bitset<62>::reference *__fastcall std::bitset<62>::reference::operator=(
        std::bitset<62>::reference *this,
        bool _Val)
{
  unsigned __int64 Mypos; // r8
  std::bitset<62> *Pbitset; // rcx
  unsigned __int64 v5; // rax
  char v6; // r8
  std::bitset<62> *v7; // rcx
  unsigned __int64 v8; // rax
  __int64 v9; // rax

  Mypos = this->_Mypos;
  Pbitset = this->_Pbitset;
  if ( Mypos >= 0x3E )
    std::_Xout_of_range("invalid bitset<N> position");
  v5 = Mypos >> 6;
  v6 = Mypos & 0x3F;
  v7 = &Pbitset[v5];
  v8 = v7->_Array[0];
  if ( _Val )
    v9 = v8 | (1i64 << v6);
  else
    v9 = v8 & ~(1i64 << v6);
  v7->_Array[0] = v9;
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

unsigned __int8 __fastcall std::bitset<62>::reference::operator bool(std::bitset<62>::reference *this)
{
  unsigned __int64 Mypos; // rdx
  unsigned __int64 v2; // rax

  Mypos = this->_Mypos;
  if ( Mypos >= 0x3E )
    std::_Xout_of_range("invalid bitset<N> position");
  v2 = this->_Pbitset[Mypos >> 6]._Array[0];
  return _bittest64((const __int64 *)&v2, this->_Mypos & 0x3F);
}

void __fastcall AgProgram::onShutdown(AgProgram *this)
{
  this->m_shutdownRequested = 1;
}

void __fastcall Actor::ActorDie(Actor *this)
{
  this->systemStat = INIT;
}

void __fastcall ActorChara::CallComboMissionAtkEvent(ActorChara *this, __int64 atkID, _BOOL8 bOption)
{
  BattleSystem::ComboMissionAttackEventListener *pComboMissionAtkEvent; // rcx

  pComboMissionAtkEvent = this->pComboMissionAtkEvent;
  if ( pComboMissionAtkEvent )
    pComboMissionAtkEvent->RecvAttackHitEvent(pComboMissionAtkEvent, atkID, bOption);
}

void __fastcall Actor::CancelRequestPosition(Actor *this)
{
  *(_QWORD *)&this->positionReserve.iSettingX = 0i64;
}

void __fastcall BattleSystem::ResultMemberInfo::Clear(BattleSystem::ResultMemberInfo *this)
{
  ActorChara **pActor; // rdx
  int *iCharaColor; // rax
  __int64 v3; // r8
  int *iLoseCount; // rax
  __int64 v5; // rcx

  pActor = this->pActor;
  *(_QWORD *)&this->battleWinnerID = 0i64;
  iCharaColor = this->iCharaColor;
  v3 = 3i64;
  do
  {
    *(iCharaColor - 3) = -1;
    ++pActor;
    *iCharaColor++ = 1;
    *(pActor - 1) = 0i64;
    --v3;
  }
  while ( v3 );
  this->rivalCharaNo = CHARACTER_NO_NONE;
  iLoseCount = this->iLoseCount;
  *(_WORD *)&this->bFinalKO = 0;
  this->bSpecialDirection = 0;
  this->iRandomMessageNo = 0;
  *(_QWORD *)&this->scoreInfo.iLifeBonus = 0i64;
  *(_QWORD *)&this->scoreInfo.iPerfectBonus = 0i64;
  *(_QWORD *)&this->scoreInfo.iCpuLevelBonus = 0i64;
  this->scoreInfo.iBattleScore = 0;
  this->uiTotalBattleFrame = 2068357982;
  this->bReplaySaveTarget = 1;
  v5 = 2i64;
  do
  {
    *(iLoseCount - 2) = 2068357982;
    *iLoseCount = 2068357982;
    iLoseCount[2] = 2068357982;
    iLoseCount[4] = 2068357982;
    ++iLoseCount;
    --v5;
  }
  while ( v5 );
}

void __fastcall Actor::CreateInit(Actor *this)
{
  this->ParamInit(this, 0i64, 0i64, 0i64, 0i64);
}

void __fastcall ActorShot::DecShotVital(ActorShot *this)
{
  bool v1; // sf
  int iShotVital; // eax

  v1 = --this->iShotVital < 0;
  iShotVital = this->iShotVital;
  if ( v1 )
    iShotVital = 0;
  this->iShotVital = iShotVital;
}

unsigned __int64 __fastcall Actor::GetActionSystem(AgMemoryStream *this)
{
  return this->m_position;
}

__int64 __fastcall AgHttp::onSingletonExit(__crt_locale_data *__formal)
{
  return 0i64;
}

__int64 __fastcall AgUser::isSignedIn(Concurrency::details::ThreadInternalContext *this)
{
  return 1i64;
}

__int64 __fastcall ActorOption::GetActorType(Scaleform::GFx::AS3::Instances::fl::XMLProcInstr *this)
{
  return 4i64;
}

__int64 __fastcall ActorShot::GetActorType(Scaleform::GFx::AS3::Instances::fl::XMLText *this)
{
  return 2i64;
}

__int64 __fastcall Scaleform::Render::DICommand_Clear::GetType(Scaleform::GFx::AS3::Instances::fl::XMLComment *this)
{
  return 3i64;
}

__int64 __fastcall Actor::GetAssetID(Actor *this)
{
  return (unsigned int)this->iAssetID;
}

__int64 __fastcall ActorCharaBase::GetBaseActionID(ActorCharaBase *this, int actNo)
{
  const CharaBaseStatus *pBaseStat; // rsi
  unsigned int v4; // edi
  unsigned int uiCommonActionCount; // edx
  unsigned int v6; // eax
  CharaBaseStatus::CommonActionData *i; // rcx

  pBaseStat = this->pBaseStat;
  v4 = -1;
  if ( pBaseStat->CheckFileID(&pBaseStat->CharaFileBase) )
  {
    uiCommonActionCount = pBaseStat->dataHeader.uiCommonActionCount;
    v6 = 0;
    if ( uiCommonActionCount )
    {
      for ( i = pBaseStat->pCommonAct; i->iActionID != actNo; ++i )
      {
        if ( ++v6 >= uiCommonActionCount )
          return 0xFFFFFFFFi64;
      }
      return v6;
    }
  }
  return v4;
}

__int64 __fastcall ActorCharaBase::GetBaseActionID(ActorCharaBase *this)
{
  return ((__int64 (__fastcall *)(ActorCharaBase *, _QWORD))this->GetBaseActionID)(this, (unsigned int)this->iActNo);
}

float __fastcall Actor::GetBaseAnimeAlpha(Actor *this)
{
  return 1.0 - this->baseAnime.fTransparent;
}

__int64 __fastcall BattleSystem::BattlePlayerInfo::GetBattleBaseCharaNo(BattleSystem::BattlePlayerInfo *this)
{
  unsigned int battleCharaNo; // ebx
  CharaProjectData *v2; // rdi
  int CharaDataIndex; // eax
  __int64 result; // rax

  battleCharaNo = this->battleCharaNo;
  v2 = *(CharaProjectData **)(*(_QWORD *)&AppMain::pApp + 10888i64);
  CharaDataIndex = CharaProjectData::GetCharaDataIndex(v2, battleCharaNo);
  if ( CharaDataIndex < 0 )
    return 0xFFFFFFFFi64;
  result = (unsigned int)v2->pCharaData[CharaDataIndex].iBaseCharaID;
  if ( (int)result < 0 )
    return battleCharaNo;
  return result;
}

__int64 __fastcall ActorChara::GetBlurEffectCount(ActorChara *this)
{
  return (unsigned int)this->iBlurEffectCount;
}

__int64 __fastcall ActorChara::GetBlurFrameFlag(ActorChara *this)
{
  return (unsigned int)this->iBlurFrameFlag;
}

float __fastcall Actor::GetBodyPushRate(Actor *this)
{
  return FLOAT_0_5;
}

OGLVec3 *__fastcall ActorCharaBase::GetBonePosition(
        ActorCharaBase *this,
        OGLVec3 *result,
        __int64 nameIndex,
        _BOOL8 a4)
{
  LOBYTE(a4) = this->iCAngle != 0;
  this->GetBonePosition(this, result, (CharaBone::NAME_INDEX)nameIndex, a4);
  return result;
}

OGLVec3 *__fastcall ActorCharaBase::GetBonePositionNoScale(
        ActorCharaBase *this,
        OGLVec3 *result,
        __int64 nameIndex,
        _BOOL8 a4)
{
  LOBYTE(a4) = this->iCAngle != 0;
  this->GetBonePositionNoScale(this, result, (CharaBone::NAME_INDEX)nameIndex, a4);
  return result;
}

CommandCheck *__fastcall ActorChara::GetCharaCommandCheck(ActorChara *this)
{
  return &this->cmdCheck[1];
}

__int64 __fastcall ActorChara::GetClimaxTime(ActorChara *this)
{
  return (unsigned int)SHIWORD(this->xClimaxTime.value);
}

__int64 __fastcall ActorCharaBase::GetCommonActionID(ActorCharaBase *this, int baseActID)
{
  const CharaBaseStatus *pBaseStat; // rbx
  __int64 v3; // rdi

  pBaseStat = this->pBaseStat;
  v3 = baseActID;
  if ( pBaseStat->CheckFileID(&pBaseStat->CharaFileBase) && (unsigned int)v3 < pBaseStat->dataHeader.uiCommonActionCount )
    return (unsigned int)pBaseStat->pCommonAct[v3].iActionID;
  else
    return 0xFFFFFFFFi64;
}

CommandCheck *__fastcall ActorChara::GetCommonCommandCheck(ActorChara *this)
{
  return this->cmdCheck;
}

__int64 __fastcall ActorChara::GetDamageAttr(ActorChara *this)
{
  if ( this->IsValidDamageEffect(this) )
    return (unsigned int)this->iDamageAttr;
  else
    return 0i64;
}

__int64 __fastcall ActorEffect::GetEffectType(ActorEffect *this)
{
  return (unsigned int)this->effectType;
}

__int64 __fastcall ActorChara::GetExPower(ActorChara *this)
{
  return (unsigned int)SHIWORD(this->xExPower.value);
}

__int64 __fastcall ActorChara::GetExtraDamage(ActorChara *this)
{
  return (unsigned int)this->iExtraDamageValue;
}

__int64 __fastcall Actor::GetPlayerID(Actor *this)
{
  return (unsigned int)this->iPlayerID;
}

__int64 __fastcall ActorWeapon::GetFounderPlayerID(ActorWeapon *this)
{
  ActorCharaBase *pOwner; // rax

  pOwner = this->pOwner;
  if ( pOwner )
    return (unsigned int)pOwner->iPlayerID;
  else
    return (unsigned int)this->iPlayerID;
}

__int64 __fastcall ActorChara::GetGuardPower(ActorChara *this)
{
  return (unsigned int)SHIWORD(this->xGuardPower.value);
}

__int64 __fastcall ActorChara::GetInputKey(ActorChara *this, unsigned int backFrame)
{
  RestrictRingBuffer<int> *Myval2; // r8
  unsigned int uiDelay; // ecx
  unsigned int uiDataSize; // eax
  int *v5; // rdx

  Myval2 = this->cmdCheck[0].pKeyBuf->pKeyBuffer._Mypair._Myval2;
  uiDelay = Myval2->uiDelay;
  uiDataSize = Myval2->uiDataSize;
  if ( uiDelay < uiDataSize
    && backFrame < uiDataSize - uiDelay
    && (v5 = &Myval2->pBuffer[Myval2->uiBufferMask & (Myval2->uiEndIndex - uiDelay - backFrame - 1)]) != 0i64 )
  {
    return (unsigned int)*v5;
  }
  else
  {
    return 0i64;
  }
}

int __fastcall ActorChara::GetInputRelease(ActorChara *this, unsigned int backFrame)
{
  return InputKeyCheck::GetRelease(this->cmdCheck[0].pKeyBuf, backFrame);
}

int __fastcall ActorChara::GetInputTrigger(ActorChara *this, unsigned int backFrame)
{
  return InputKeyCheck::GetTrigger(this->cmdCheck[0].pKeyBuf, backFrame);
}

void __fastcall BattleSystem::BattleController::GetActionSystem()
{
  BattleSystem::BattleController *v0; // rax
  BattleSystem::BattleController *v1; // [rsp+40h] [rbp+8h]

  if ( !BattleSystem::BattleController::instance )
  {
    v1 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v1);
    BattleSystem::BattleController::instance = v0;
  }
}

const CharaActionData::ActionLineFrame *__fastcall Actor::GetKeyFrame(
        Actor *this,
        CharaActionData::LINE_ID::ID lineID,
        const int ciGetIndex)
{
  return this->GetKeyFrame(
           this,
           (unsigned int)this->iActNo,
           (unsigned int)lineID,
           (unsigned int)this->iActFrame,
           ciGetIndex);
}

__int64 __fastcall ActorChara::GetMaxClimaxTime(ActorChara *this)
{
  return (unsigned int)SHIWORD(this->xMaxClimaxTime.value);
}

__int64 __fastcall ActorChara::GetMaxExPower(ActorChara *this)
{
  return (unsigned int)SHIWORD(this->xMaxExPower.value);
}

__int64 __fastcall ActorShot::GetShotID(ActorShot *this)
{
  return (unsigned int)this->shotData.iShotID;
}

__int64 __fastcall ActorShot::GetShotType(ActorShot *this)
{
  return (unsigned int)this->shotData.iShotType;
}

__int64 __fastcall ActorShot::GetShotVital(ActorShot *this)
{
  return (unsigned int)this->iShotVital;
}

__int64 __fastcall ActorChara::GetStunPower(ActorChara *this)
{
  return (unsigned int)SHIWORD(this->xStunPower.value);
}

__int64 __fastcall AgProgram::getShutdownRequested(AgProgram *this)
{
  return (unsigned int)this->m_shutdownRequested;
}

Actor *__fastcall ActorChara::GetTargetActor(ActorOption *this)
{
  return this->pTarget;
}

__int64 __fastcall ActorChara::GetVital(ActorChara *this)
{
  return (unsigned int)SHIWORD(this->xVital.value);
}

void __fastcall SimpleQueue<ActorEffect,96>::Init(SimpleQueue<ActorEffect,96> *this)
{
  SimpleQueue<ActorEffect,96>::Queue **p_pNext; // r9
  unsigned int i; // eax

  p_pNext = &this->queueBody[0].pNext;
  for ( i = 0; i < 0x60; ++i )
  {
    *(p_pNext - 1) = (SimpleQueue<ActorEffect,96>::Queue *)&this->body[i];
    if ( i == 95 )
      *p_pNext = 0i64;
    else
      *p_pNext = &this->queueBody[i + 1];
    p_pNext += 2;
  }
  this->pUseFront = 0i64;
  this->pFront = this->queueBody;
  this->pBack = &this->queueBody[95];
  this->pUseBack = 0i64;
  this->uiRestCount = 96;
}

void __fastcall SimpleQueue<ActorShot,32>::Init(SimpleQueue<ActorShot,32> *this)
{
  SimpleQueue<ActorShot,32>::Queue **p_pNext; // r9
  unsigned int i; // eax

  p_pNext = &this->queueBody[0].pNext;
  for ( i = 0; i < 0x20; ++i )
  {
    *(p_pNext - 1) = (SimpleQueue<ActorShot,32>::Queue *)&this->body[i];
    if ( i == 31 )
      *p_pNext = 0i64;
    else
      *p_pNext = &this->queueBody[i + 1];
    p_pNext += 2;
  }
  this->pUseFront = 0i64;
  this->pFront = this->queueBody;
  this->pBack = &this->queueBody[31];
  this->pUseBack = 0i64;
  this->uiRestCount = 32;
}

void __fastcall SimpleQueue<ActorWeapon,96>::Init(SimpleQueue<ActorWeapon,96> *this)
{
  SimpleQueue<ActorWeapon,96>::Queue **p_pNext; // r9
  unsigned int i; // eax

  p_pNext = &this->queueBody[0].pNext;
  for ( i = 0; i < 0x60; ++i )
  {
    *(p_pNext - 1) = (SimpleQueue<ActorWeapon,96>::Queue *)&this->body[i];
    if ( i == 95 )
      *p_pNext = 0i64;
    else
      *p_pNext = &this->queueBody[i + 1];
    p_pNext += 2;
  }
  this->pUseFront = 0i64;
  this->pFront = this->queueBody;
  this->pBack = &this->queueBody[95];
  this->pUseBack = 0i64;
  this->uiRestCount = 96;
}

bool __fastcall Actor::IsActionDataChanged(Actor *this)
{
  return this->pActBuf != 0i64;
}

_BOOL8 __fastcall Actor::IsActionNewFrame(Actor *this)
{
  return this->bActionNewFrame;
}

bool __fastcall Actor::IsActorAlive(Actor *this)
{
  return this->systemStat == MAIN;
}

bool __fastcall Actor::IsActorDead(Actor *this)
{
  Actor::SYSTEM_STAT systemStat; // eax

  systemStat = this->systemStat;
  return systemStat == INIT || systemStat == ERASE;
}

bool __fastcall Actor::IsActorInit(Actor *this)
{
  return this->systemStat == SCREEN_OUT;
}

unsigned __int64 __fastcall ActorChara::IsAdvancedCancel(ActorChara *this)
{
  return (this->systemFlag._Array[0] >> 44) & 1;
}

unsigned __int64 __fastcall ActorChara::IsAdvancedCancelActionPlay(ActorChara *this)
{
  return (this->systemFlag._Array[0] >> 46) & 1;
}

__int64 __fastcall ActorChara::IsAirAtkDamage(ActorChara *this)
{
  return (LODWORD(this->systemFlag._Array[0]) >> 12) & 1;
}

__int64 __fastcall ActorChara::IsAllJustGuardMode(ActorChara *this)
{
  return (this->bsTrainingFlag._Array[0] >> 7) & 1;
}

bool __fastcall ActorChara::IsAlwaysCounter(ActorChara *this)
{
  return (this->bsTrainingFlag._Array[0] & 0x4000) != 0
      && !this->IsDamaged(this)
      && !this->IsStunDamaged(this)
      && !this->IsKO(this);
}

__int64 __fastcall ActorEffect::IsAlwaysEffect(ActorEffect *this)
{
  return ((unsigned int)this->effectData.iOptionFlag >> 20) & 1;
}

char __fastcall Scaleform::Render::BlendModeEffect::canCacheAcrossTransform(const bool __formal)
{
  return 1;
}

bool __fastcall ActorChara::IsAngleChangePostureCalc(ActorChara *this)
{
  return (unsigned int)(this->iActorStat - 23) > 1;
}

__int64 __fastcall ActorObject::IsAttackCatched(ActorObject *this)
{
  return (this->bsAttackFlag._Array[0] >> 3) & 1;
}

__int64 __fastcall ActorObject::IsAttackCounter(ActorObject *this, float param)
{
  return (this->bsAttackFlag._Array[0] >> 5) & 1;
}

__int64 __fastcall ActorObject::IsAttackGuard(ActorObject *this, float param)
{
  return (this->bsAttackFlag._Array[0] >> 1) & 1;
}

__int64 __fastcall ActorObject::_branchIsAttackHit(ActorObject *this, float param)
{
  return (this->bsAttackFlag._Array[0] >> 2) & 1;
}

__int64 __fastcall ActorObject::IsAttackKO(ActorObject *this)
{
  return (this->bsAttackFlag._Array[0] >> 4) & 1;
}

__int64 __fastcall ActorChara::IsAutoGuardOK(ActorChara *this)
{
  return (this->bsTrainingFlag._Array[0] >> 3) & 1;
}

__int64 __fastcall ActorChara::IsAutoUkemiMode(ActorChara *this)
{
  return (this->bsTrainingFlag._Array[0] >> 18) & 1;
}

bool __fastcall ActorChara::IsBackJump(ActorChara *this)
{
  unsigned int iActorStat; // eax
  int v2; // ecx
  bool result; // al

  iActorStat = this->iActorStat;
  result = 0;
  if ( iActorStat <= 0x14 )
  {
    v2 = 1347584;
    if ( _bittest(&v2, iActorStat) )
      return 1;
  }
  return result;
}

__int64 __fastcall ActorChara::IsBasicDamaged(ActorChara *this)
{
  return (LODWORD(this->systemFlag._Array[0]) >> 10) & 1;
}

_BOOL8 __fastcall ActorCharaBase::IsCalledUpdatePostureCalc(ActorCharaBase *this)
{
  return this->bCalledUpdatePostureCalc;
}

bool __fastcall Scaleform::GFx::InteractiveObject::OnCharEvent(
        Scaleform::Render::Texture *this,
        Scaleform::Render::RenderTargetData *__formal)
{
  return 0;
}

__int64 __fastcall ActorChara::IsCheap(ActorChara *this)
{
  return (LODWORD(this->systemFlag._Array[0]) >> 23) & 1;
}

__int64 __fastcall ActorChara::IsCheckAdvantageFrame(ActorChara *this)
{
  return (this->bsTrainingFlag._Array[0] >> 15) & 1;
}

unsigned __int64 __fastcall ActorChara::IsClimaxCancel(ActorChara *this)
{
  return (this->systemFlag._Array[0] >> 45) & 1;
}

bool __fastcall ActorChara::IsClimaxSuperMove(ActorChara *this)
{
  return this->iActorStat == 41;
}

__int64 __fastcall ActorObject::IsCollisionAtemi(ActorObject *this)
{
  return (this->bsCollisionFlag._Array[0] >> 9) & 1;
}

__int64 __fastcall ActorObject::IsCollisionBackHit(ActorObject *this)
{
  return (this->bsCollisionFlag._Array[0] >> 10) & 1;
}

__int64 __fastcall ActorObject::IsCollisionCatch(ActorObject *this)
{
  return (this->bsCollisionFlag._Array[0] >> 1) & 1;
}

__int64 __fastcall ActorObject::IsCollisionFrontHit(ActorObject *this)
{
  return (this->bsCollisionFlag._Array[0] >> 11) & 1;
}

__int64 __fastcall ActorObject::IsCollisionGuard(ActorObject *this)
{
  return (this->bsCollisionFlag._Array[0] >> 2) & 1;
}

__int64 __fastcall ActorObject::IsCollisionGuardPoint(ActorObject *this)
{
  return (this->bsCollisionFlag._Array[0] >> 8) & 1;
}

__int64 __fastcall ActorObject::IsCollisionHit(ActorObject *this)
{
  return this->bsCollisionFlag._Array[0] & 1;
}

__int64 __fastcall ActorObject::IsCollisionShotEraseLose(ActorObject *this)
{
  return (this->bsCollisionFlag._Array[0] >> 3) & 1;
}

__int64 __fastcall ActorObject::IsCollisionShotEraseWin(ActorObject *this)
{
  return (this->bsCollisionFlag._Array[0] >> 4) & 1;
}

__int64 __fastcall ActorObject::IsCollisionShotHit(ActorObject *this)
{
  return (this->bsCollisionFlag._Array[0] >> 7) & 1;
}

__int64 __fastcall ActorObject::IsCollisionShotReflectLose(ActorObject *this)
{
  return (this->bsCollisionFlag._Array[0] >> 5) & 1;
}

__int64 __fastcall ActorObject::IsCollisionShotReflectWin(ActorObject *this)
{
  return (this->bsCollisionFlag._Array[0] >> 6) & 1;
}

unsigned __int64 __fastcall ActorChara::IsCommandFromClimax(ActorChara *this)
{
  return (this->systemFlag._Array[0] >> 50) & 1;
}

__int64 __fastcall ActorChara::IsCounterDamaged(ActorChara *this)
{
  return (LODWORD(this->systemFlag._Array[0]) >> 14) & 1;
}

unsigned __int64 __fastcall ActorChara::IsDamageActionDeclared(ActorChara *this)
{
  return (this->systemFlag._Array[0] >> 37) & 1;
}

bool __fastcall ActorChara::IsDamageLandState(ActorChara *this)
{
  return this->iActorStat == 54;
}

bool __fastcall ActorChara::IsDamaged(ActorChara *this)
{
  bool v2; // bl
  unsigned __int8 v3; // bl

  v2 = this->IsThrow(this);
  v3 = ((__int64 (__fastcall *)(ActorChara *))this->IsShotDamaged)(this) | v2;
  return v3 | this->IsBasicDamaged(this) && !this->IsGuardDamaged(this);
}

bool __fastcall Actor::IsDataExist(Actor *this)
{
  const CharaActionData *pAct; // rcx

  pAct = this->pAct;
  return pAct && pAct->CheckFileID(&pAct->CharaFileBase);
}

bool __fastcall ActorEffect::IsDeadEffect(ActorEffect *this)
{
  return (unsigned int)(this->iActorStat - 2) <= 1;
}

_BOOL8 __fastcall ActorShot::IsDeadShot(ActorShot *this)
{
  return this->bDeadShot;
}

bool __fastcall ActorEffect::IsDelayCreate(ActorEffect *this)
{
  return this->xDelayCreateCount.value != 0;
}

__int64 __fastcall ActorEffect::IsDirectionInfluenceZ(ActorEffect *this)
{
  return ((unsigned int)this->effectData.iOptionFlag >> 10) & 1;
}

__int64 __fastcall ActorCharaBase::IsDisableBlendSave(ActorCharaBase *this)
{
  return (this->charaBaseFlag._Array[0] >> 5) & 1;
}

__int64 __fastcall ActorChara::IsDisableKO(ActorChara *this)
{
  return (this->bsTrainingFlag._Array[0] >> 11) & 1;
}

bool __fastcall ActorChara::IsDisableReflectWallBack(ActorChara *this)
{
  return (this->iActFlg2 & 0x200000) != 0 && (this->systemFlag._Array[0] & 0x10000000000i64) == 0;
}

bool __fastcall ActorChara::IsDownEvadeState(ActorChara *this)
{
  return this->iActorStat == 32;
}

__int64 __fastcall ActorCharaBase::IsEndSetup(ActorCharaBase *this)
{
  return (this->charaBaseFlag._Array[0] >> 2) & 1;
}

__int64 __fastcall ActorObject::IsEraseEffectInvalid(ActorObject *this)
{
  return (this->bsCollisionFlag._Array[0] >> 14) & 1;
}

__int64 __fastcall ActorChara::IsEvade(ActorChara *this)
{
  return (LODWORD(this->systemFlag._Array[0]) >> 20) & 1;
}

bool __fastcall ActorChara::IsFrontJump(ActorChara *this)
{
  unsigned int iActorStat; // eax
  int v2; // ecx
  bool result; // al

  iActorStat = this->iActorStat;
  result = 0;
  if ( iActorStat <= 0x13 )
  {
    v2 = 673792;
    if ( _bittest(&v2, iActorStat) )
      return 1;
  }
  return result;
}

unsigned __int64 __fastcall ActorChara::IsGotoNextRound(ActorChara *this)
{
  return (this->systemFlag._Array[0] >> 53) & 1;
}

__int64 __fastcall ActorChara::IsGroundQuakeDamage(ActorChara *this)
{
  return HIWORD(LODWORD(this->systemFlag._Array[0])) & 1;
}

unsigned __int64 __fastcall ActorChara::IsGuardCancelBlowAtk(ActorChara *this)
{
  return HIDWORD(this->systemFlag._Array[0]) & 1;
}

__int64 __fastcall ActorChara::IsGuardCancelEvade(ActorChara *this)
{
  return LODWORD(this->systemFlag._Array[0]) >> 31;
}

bool __fastcall ActorChara::IsGuardCancelEvadeState(ActorChara *this)
{
  return (unsigned int)(this->iActorStat - 29) <= 1;
}

__int64 __fastcall ActorChara::IsGuardCrash(ActorChara *this)
{
  return (LODWORD(this->systemFlag._Array[0]) >> 9) & 1;
}

__int64 __fastcall ActorChara::IsGuardCrashMode(ActorChara *this)
{
  return (this->bsTrainingFlag._Array[0] >> 9) & 1;
}

__int64 __fastcall ActorChara::IsGuardDamaged(ActorChara *this)
{
  return (LODWORD(this->systemFlag._Array[0]) >> 13) & 1;
}

bool __fastcall ActorChara::IsGuardInputOK(ActorChara *this)
{
  return (this->systemFlag._Array[0] & 0x10) != 0 || (this->iActFlg1 & 4) != 0;
}

__int64 __fastcall ActorChara::IsGuardValid(ActorChara *this)
{
  return (LODWORD(this->systemFlag._Array[0]) >> 7) & 1;
}

_BOOL8 __fastcall Actor::IsHitStopFreeze(Actor *this)
{
  return this->bHitStopFreeze;
}

__int64 __fastcall ActorCharaBase::IsHitStopVibrate(ActorCharaBase *this)
{
  return this->charaBaseFlag._Array[0] & 1;
}

__int64 __fastcall ActorWeapon::IsIgnoreMotionBlend(ActorWeapon *this)
{
  return ((unsigned int)this->weaponParam.iOptionFlag >> 10) & 1;
}

_BOOL8 __fastcall Actor::IsIgnoreSystemPlayRate(Actor *this)
{
  return this->bIgnoreSystemPlayRate;
}

__int64 __fastcall ActorChara::IsInfiniteClimaxMode(ActorChara *this)
{
  return (this->bsTrainingFlag._Array[0] >> 19) & 1;
}

__int64 __fastcall ActorChara::IsInputCrouchGuard(ActorChara *this)
{
  return (LODWORD(this->systemFlag._Array[0]) >> 6) & 1;
}

bool __fastcall ActorChara::IsInputGuard(ActorChara *this)
{
  bool v2; // bl

  v2 = this->IsInputCrouchGuard(this);
  return v2 | ((__int64 (__fastcall *)(ActorChara *))this->IsInputStandGuard)(this);
}

__int64 __fastcall ActorChara::IsInputStandGuard(ActorChara *this)
{
  return (LODWORD(this->systemFlag._Array[0]) >> 5) & 1;
}

bool __fastcall ActorChara::IsInvalidAttackHitState(ActorChara *this)
{
  bool result; // al

  if ( this->IsDamageLandState(this) )
    return 1;
  if ( this->IsDownEvadeState(this) )
    return 1;
  if ( this->IsStandUpState(this) )
    return 1;
  result = this->IsGuardCancelEvadeState(this);
  if ( result )
    return 1;
  return result;
}

bool __fastcall Actor::IsInvalidAttackID(Actor *this, unsigned int id)
{
  return (id & this->uiInvalidAttackID) != 0;
}

__int64 __fastcall ActorCharaBase::IsInvalidDefaultBranch(ActorCharaBase *this)
{
  return (this->charaBaseFlag._Array[0] >> 1) & 1;
}

__int64 __fastcall ActorChara::IsInvalidGuardChange(ActorChara *this)
{
  return (this->bsTrainingFlag._Array[0] >> 6) & 1;
}

const CharaBaseStatus *__fastcall ActorChara::IsInvalidGuardCrashStatus(ActorChara *this)
{
  const CharaBaseStatus *result; // rax

  result = this->pBaseStat;
  if ( result )
    return (const CharaBaseStatus *)(((unsigned int)result->status.iFlag >> 1) & 1);
  return result;
}

_BOOL8 __fastcall Actor::IsInvalidHitCheck(Actor *this)
{
  return this->bInvalidHitCheck;
}

__int64 __fastcall ActorChara::IsInvalidShotAtk(ActorChara *this)
{
  return (LODWORD(this->systemFlag._Array[0]) >> 18) & 1;
}

__int64 __fastcall ActorObject::IsInvalidShotObject(ActorObject *this)
{
  __int64 result; // rax

  result = ((__int64 (__fastcall *)(ActorObject *))this->GetActorType)(this);
  if ( (_DWORD)result )
    return (this->bsCollisionFlag._Array[0] & 0xA8) != 0;
  return result;
}

__int64 __fastcall ActorObject::IsInvalidShotObjectExcludeShotBody(ActorObject *this)
{
  __int64 result; // rax

  result = ((__int64 (__fastcall *)(ActorObject *))this->GetActorType)(this);
  if ( (_DWORD)result )
    return (this->bsCollisionFlag._Array[0] & 0x28) != 0;
  return result;
}

const CharaBaseStatus *__fastcall ActorChara::IsInvalidStunStatus(ActorChara *this)
{
  const CharaBaseStatus *result; // rax

  result = this->pBaseStat;
  if ( result )
    return (const CharaBaseStatus *)(result->status.iFlag & 1);
  return result;
}

unsigned __int64 __fastcall ActorChara::IsInviteCounter(ActorChara *this)
{
  return (this->systemFlag._Array[0] >> 51) & 1;
}

bool __fastcall ActorChara::IsJump(ActorChara *this)
{
  return (unsigned int)(this->iActorStat - 11) <= 9;
}

unsigned __int64 __fastcall ActorChara::IsJustGuard(ActorChara *this)
{
  return (this->systemFlag._Array[0] >> 34) & 1;
}

__int64 __fastcall ActorChara::IsKO(ActorChara *this)
{
  return HIBYTE(LODWORD(this->systemFlag._Array[0])) & 1;
}

bool __fastcall Actor::IsLeftWallHit(Actor *this)
{
  bool result; // al

  if ( this->IsScreenLeftHit(this) )
    return 1;
  result = this->IsStageLeftHit(this);
  if ( result )
    return 1;
  return result;
}

__int64 __fastcall ActorChara::IsLeftWallHit(ActorChara *this)
{
  __int64 result; // rax

  result = LOBYTE(this->systemFlag._Array[0]);
  LOBYTE(result) = this->systemFlag._Array[0] & 1 | ((result & 4) != 0);
  return result;
}

unsigned __int64 __fastcall ActorChara::IsMamahahaBusy(ActorChara *this)
{
  return (this->systemFlag._Array[0] >> 55) & 1;
}

bool __fastcall ActorOption::IsMamahahaCanMove(ActorOption *this)
{
  return (this->mamahahaParam.bsOptionFlag._Array[0] & 0xC) == 0;
}

bool __fastcall BattleSystem::BattleController::IsMissionMode(BattleSystem::BattleController *this)
{
  BattleSystem::BATTLE_MODE battleMode; // eax

  battleMode = this->battleInfo.battleMode;
  return battleMode == MISSION || battleMode == MISSION_DEVELOP;
}

_BOOL8 __fastcall ActorChara::IsNextStatCommandCheck(ActorChara *this)
{
  return this->bNextStatCommandCheck;
}

__int64 __fastcall ActorChara::IsNoGuardCrashMode(ActorChara *this)
{
  return (this->bsTrainingFlag._Array[0] >> 10) & 1;
}

__int64 __fastcall ActorChara::IsNoStunMode(ActorChara *this)
{
  return (this->bsTrainingFlag._Array[0] >> 8) & 1;
}

unsigned __int64 __fastcall ActorChara::IsNormalThrowInputAction(ActorChara *this)
{
  return (this->systemFlag._Array[0] >> 57) & 1;
}

__int64 __fastcall ActorChara::IsNotEvade(ActorChara *this)
{
  return (LODWORD(this->systemFlag._Array[0]) >> 19) & 1;
}

__int64 __fastcall ActorObject::IsObjectPush(ActorObject *this)
{
  return (this->bsCollisionFlag._Array[0] >> 13) & 1;
}

__int64 __fastcall ActorChara::IsOneAtkKO(ActorChara *this)
{
  return (this->bsTrainingFlag._Array[0] >> 12) & 1;
}

__int64 __fastcall ActorChara::IsOneHitStun(ActorChara *this)
{
  return (this->bsTrainingFlag._Array[0] >> 13) & 1;
}

_BOOL8 __fastcall Actor::IsOptionAsset(Actor *this)
{
  return this->bOptionAssetActor;
}

__int64 __fastcall ActorChara::IsPlayedFinishHitSound(ActorChara *this)
{
  return (LODWORD(this->systemFlag._Array[0]) >> 27) & 1;
}

bool __fastcall ActorChara::IsPoisonDamaged(ActorChara *this)
{
  return this->damageInfo.poisonDamage.iCount > 0;
}

_BOOL8 __fastcall ActorCharaBase::IsPrevBoneInfoMirror(ActorCharaBase *this)
{
  return this->bEnablePrevBoneInfoMirror;
}

bool __fastcall ActorChara::IsPursuitDamaged(ActorChara *this)
{
  bool result; // al

  if ( this->IsAirDamaged(this) )
    return 1;
  if ( this->IsBound(this) )
    return 1;
  if ( this->IsDown(this) )
    return 1;
  result = this->IsAirThrowDamaged(this);
  if ( result )
    return 1;
  return result;
}

bool __fastcall ActorChara::IsReady(ActorChara *this)
{
  return this->iActorStat <= 1u;
}

bool __fastcall ActorOption::IsReady(ActorOption *this)
{
  return this->iActorStat == 0;
}

__int64 __fastcall ActorChara::IsReadyFlag(ActorChara *this)
{
  return ((unsigned int)this->iActFlg2 >> 1) & 1;
}

__int64 __fastcall ActorChara::IsReflectLandWallBack(ActorChara *this)
{
  return ((unsigned int)this->iActFlg2 >> 22) & 1;
}

_BOOL8 __fastcall ActorShot::IsReflectShot(ActorShot *this)
{
  return this->bReflectShot;
}

bool __fastcall ActorChara::IsReflectWallBack(ActorChara *this)
{
  return (this->iActFlg2 & 0x800) != 0 || (this->systemFlag._Array[0] & 0x10000000000i64) != 0;
}

__int64 __fastcall ActorCharaBase::IsResultDemoActor(ActorCharaBase *this)
{
  return (this->charaBaseFlag._Array[0] >> 3) & 1;
}

__int64 __fastcall ActorCharaBase::IsResultDemoEnd(ActorCharaBase *this)
{
  return (this->charaBaseFlag._Array[0] >> 4) & 1;
}

bool __fastcall ActorCharaBase::IsResultDemoSubActor(ActorCharaBase *this)
{
  return this->iResultSubType > 0;
}

unsigned __int64 __fastcall ActorChara::IsReversalChance(ActorChara *this)
{
  return (this->systemFlag._Array[0] >> 41) & 1;
}

unsigned __int64 __fastcall ActorChara::IsReversalMove(ActorChara *this)
{
  return (this->systemFlag._Array[0] >> 42) & 1;
}

__int64 __fastcall ActorChara::IsReversalRecordMode(ActorChara *this)
{
  return (this->bsTrainingFlag._Array[0] >> 20) & 1;
}

bool __fastcall Actor::IsRightWallHit(Actor *this)
{
  bool result; // al

  if ( this->IsScreenRightHit(this) )
    return 1;
  result = this->IsStageRightHit(this);
  if ( result )
    return 1;
  return result;
}

__int64 __fastcall ActorChara::IsRightWallHit(ActorChara *this)
{
  unsigned __int64 v1; // rdx
  __int64 result; // rax

  v1 = this->systemFlag._Array[0];
  result = (unsigned __int8)v1;
  LOBYTE(result) = (v1 & 2) != 0 || (v1 & 8) != 0;
  return result;
}

unsigned __int64 __fastcall ActorChara::IsRivalDemoActionEnd(ActorChara *this)
{
  return (this->systemFlag._Array[0] >> 54) & 1;
}

bool __fastcall ActorChara::IsRoundEndState(ActorChara *this)
{
  return this->iActorStat == 63;
}

bool __fastcall ActorChara::IsRoundStartDemoState(ActorChara *this)
{
  return this->iActorStat == 61;
}

__int64 __fastcall ActorChara::IsScreenLeftHit(ActorChara *this)
{
  return (LODWORD(this->systemFlag._Array[0]) >> 2) & 1;
}

__int64 __fastcall ActorChara::IsScreenRightHit(ActorChara *this)
{
  return (LODWORD(this->systemFlag._Array[0]) >> 3) & 1;
}

bool __fastcall Actor::IsScreenWallHit(Actor *this)
{
  bool result; // al

  if ( this->IsScreenLeftHit(this) )
    return 1;
  result = this->IsScreenRightHit(this);
  if ( result )
    return 1;
  return result;
}

__int64 __fastcall ActorChara::IsScreenWallHit(ActorChara *this)
{
  unsigned __int64 v1; // rdx
  __int64 result; // rax

  v1 = this->systemFlag._Array[0];
  result = (unsigned __int8)v1;
  LOBYTE(result) = (v1 & 4) != 0 || (v1 & 8) != 0;
  return result;
}

bool __fastcall ActorChara::IsSetupState(ActorChara *this)
{
  return this->iActorStat == 64;
}

bool __fastcall ActorOption::IsSetupState(ActorOption *this)
{
  return this->iActorStat == 1;
}

__int64 __fastcall ActorChara::IsShotDamaged(ActorChara *this)
{
  return (LODWORD(this->systemFlag._Array[0]) >> 11) & 1;
}

unsigned __int64 __fastcall ActorChara::IsSpecialWinDirection(ActorChara *this)
{
  return (this->systemFlag._Array[0] >> 60) & 1;
}

__int64 __fastcall ActorChara::IsStageLeftHit(ActorChara *this)
{
  return this->systemFlag._Array[0] & 1;
}

__int64 __fastcall ActorChara::IsStageRightHit(ActorChara *this)
{
  return (LODWORD(this->systemFlag._Array[0]) >> 1) & 1;
}

bool __fastcall Actor::IsStageWallHit(Actor *this)
{
  bool result; // al

  if ( this->IsStageLeftHit(this) )
    return 1;
  result = this->IsStageRightHit(this);
  if ( result )
    return 1;
  return result;
}

__int64 __fastcall ActorChara::IsStageWallHit(ActorChara *this)
{
  __int64 result; // rax

  result = LOBYTE(this->systemFlag._Array[0]);
  LOBYTE(result) = this->systemFlag._Array[0] & 1 | ((result & 2) != 0);
  return result;
}

bool __fastcall ActorChara::IsStandUpState(ActorChara *this)
{
  int iActorStat; // eax

  iActorStat = this->iActorStat;
  return iActorStat == 48 || iActorStat == 51;
}

__int64 __fastcall ActorChara::IsStun(ActorChara *this)
{
  return (LODWORD(this->systemFlag._Array[0]) >> 21) & 1;
}

__int64 __fastcall ActorChara::IsStunDamaged(ActorChara *this)
{
  return (LODWORD(this->systemFlag._Array[0]) >> 22) & 1;
}

unsigned __int64 __fastcall ActorChara::IsSuperCancel(ActorChara *this)
{
  return (this->systemFlag._Array[0] >> 43) & 1;
}

__int64 __fastcall ActorObject::IsTargetPush(ActorObject *this)
{
  return (this->bsCollisionFlag._Array[0] >> 12) & 1;
}

__int64 __fastcall ActorChara::IsThrow(ActorChara *this)
{
  return (LODWORD(this->systemFlag._Array[0]) >> 17) & 1;
}

unsigned __int64 __fastcall ActorChara::IsThrowEscape(ActorChara *this)
{
  return (this->systemFlag._Array[0] >> 36) & 1;
}

bool __fastcall ActorChara::IsThrowEscapeAction(ActorChara *this)
{
  return (unsigned int)(this->iActorStat - 33) <= 1;
}

__int64 __fastcall ActorShot::IsTransmitHitStop(ActorShot *this)
{
  return ((unsigned int)this->shotData.iOptionFlag >> 11) & 1;
}

bool __fastcall Actor::IsTurnChange(Actor *this)
{
  return this->iCAngle != this->iCAngleBuf;
}

unsigned __int64 __fastcall ActorChara::IsValidDamageEffect(ActorChara *this)
{
  return (this->systemFlag._Array[0] >> 38) & 1;
}

bool __fastcall ActorChara::IsVerticalJump(ActorChara *this)
{
  int iActorStat; // eax

  iActorStat = this->iActorStat;
  return iActorStat == 13 || iActorStat == 16;
}

bool __fastcall ActorChara::IsVitalMax(ActorChara *this)
{
  return this->xVital.value >= this->GetMaxVital(this) << 16;
}

bool __fastcall ActorChara::IsWallBack(ActorChara *this)
{
  return (this->iActFlg1 & 0x80) != 0;
}

bool __fastcall Actor::IsWallHit(Actor *this)
{
  bool result; // al

  if ( this->IsScreenWallHit(this) )
    return 1;
  result = this->IsStageWallHit(this);
  if ( result )
    return 1;
  return result;
}

__int64 __fastcall ActorChara::IsWallHit(ActorChara *this)
{
  unsigned __int64 v1; // r8
  __int64 result; // rax

  v1 = this->systemFlag._Array[0];
  result = (unsigned __int8)v1;
  LOBYTE(result) = this->systemFlag._Array[0] & 1 | ((v1 & 2) != 0 || (v1 & 4) != 0 || (v1 & 8) != 0);
  return result;
}

__int64 __fastcall ActorChara::IsWallHitDamage(ActorChara *this)
{
  return (LODWORD(this->systemFlag._Array[0]) >> 15) & 1;
}

void __fastcall BattleHud::OnEventCharacterActivity(
        BattleHud *this,
        PLAYER_ID playerID,
        BattleEventHandler::EActivity::Type activity,
        int score)
{
  GameDataInfo *Instance; // rax

  if ( !this->isError(&this->ErrorChecker) && this->m_bInitialize )
  {
    Instance = GameDataInfo::getInstance();
    if ( playerID == PLAYER_ID_1P && Instance->m_GameMode[Instance->m_GameModeIndex] == GAME_MODE_STORY )
      BattleHudGauge::activity_setMessage(this->m_pGauges[0], activity, score, 0);
  }
}

void __fastcall BattleHud::OnEventRoundEndKO(BattleHud *this, __int64 stageID, __int64 round)
{
  float m_min; // xmm1_4
  float v5; // xmm0_4

  if ( !((__int64 (__fastcall *)(ErrorChecker *, __int64, __int64))this->isError)(&this->ErrorChecker, stageID, round)
    && this->m_bInitialize )
  {
    m_min = this->m_fadeAnimReplaySystem.m_min;
    v5 = fminf(0.0, this->m_fadeAnimReplaySystem.m_max);
    if ( m_min <= v5 )
      m_min = v5;
    this->m_fadeAnimReplaySystem.m_number = m_min;
    this->m_fadeAnimReplaySystem.m_bAnimation = 0;
  }
}

void __fastcall BattleHud::OnEventRoundStartGO(
        BattleHud *this,
        __int64 stageID,
        __int64 round,
        const BattleEventHandler::Listener::CharacterStatus *pStatus)
{
  float v5; // xmm1_4
  float v6; // xmm0_4

  if ( !((__int64 (__fastcall *)(ErrorChecker *, __int64, __int64, const BattleEventHandler::Listener::CharacterStatus *))this->isError)(
          &this->ErrorChecker,
          stageID,
          round,
          pStatus)
    && this->m_bInitialize )
  {
    v5 = 0.0;
    v6 = fminf(this->m_fadeAnimReplaySystem.m_number, 1.0);
    *(_QWORD *)&this->m_fadeAnimReplaySystem.m_max = 1065353216i64;
    if ( v6 >= 0.0 )
      v5 = v6;
    this->m_fadeAnimReplaySystem.m_number = v5;
    this->m_fadeAnimReplaySystem.m_power = 0.16666667;
    this->m_fadeAnimReplaySystem.m_bAnimation = 1;
  }
}

void __fastcall BattleHud::OnEventRoundStartReady(
        BattleHud *this,
        __int64 stageID,
        __int64 round,
        const BattleEventHandler::Listener::CharacterStatus *pStatus)
{
  if ( !((__int64 (__fastcall *)(ErrorChecker *, __int64, __int64, const BattleEventHandler::Listener::CharacterStatus *))this->isError)(
          &this->ErrorChecker,
          stageID,
          round,
          pStatus)
    && this->m_bInitialize
    && !this->isError(&this->ErrorChecker)
    && this->m_bInitialize )
  {
    this->m_appearanceAnimationParams.bPlaying = 1;
    this->m_appearanceAnimationParams.animationFrame = 0.0;
    *(_QWORD *)&this->m_appearanceAnimationParams.gaugeColor = -1i64;
    this->m_appearanceAnimationParams.barLength = 1.0;
    this->m_pGauges[0]->m_bEnabledSpEffects = 0;
    this->m_pGauges[1]->m_bEnabledSpEffects = 0;
  }
}

void __fastcall BattleHud::OnEventRoundStartRound(
        BattleHud *this,
        __int64 stageID,
        __int64 round,
        const BattleEventHandler::Listener::CharacterStatus *pStatus)
{
  float v5; // xmm1_4
  float v6; // xmm0_4

  if ( !((__int64 (__fastcall *)(ErrorChecker *, __int64, __int64, const BattleEventHandler::Listener::CharacterStatus *))this->isError)(
          &this->ErrorChecker,
          stageID,
          round,
          pStatus)
    && this->m_bInitialize
    && !this->isError(&this->ErrorChecker)
    && this->m_bInitialize
    && this->m_userCharacterSymbol.bEnabled )
  {
    v5 = 0.0;
    v6 = fminf(this->m_userCharacterSymbol.alpha.m_number, 1.0);
    *(_QWORD *)&this->m_userCharacterSymbol.alpha.m_max = 1065353216i64;
    if ( v6 >= 0.0 )
      v5 = v6;
    this->m_userCharacterSymbol.alpha.m_number = v5;
    this->m_userCharacterSymbol.alpha.m_power = -0.1;
    this->m_userCharacterSymbol.alpha.m_bAnimation = 1;
  }
}

void __fastcall ActorChara::ResetExtraDamage(ActorChara *this)
{
  this->iExtraDamageValue = 0;
}

void __fastcall ActorChara::ResetGuardInput(ActorChara *this)
{
  std::bitset<61>::reference *v1; // rax
  std::bitset<61> *v2; // r9
  unsigned __int64 Mypos; // rdx
  std::bitset<61>::reference *v4; // rax
  std::bitset<61> *v5; // r9
  unsigned __int64 v6; // rdx
  std::bitset<61>::reference *v7; // rax
  std::bitset<61> *v8; // r9
  unsigned __int64 v9; // rcx
  std::bitset<61>::reference *v10; // rax
  unsigned __int64 v11; // rdx
  std::bitset<61>::reference result; // [rsp+28h] [rbp-20h] BYREF

  v1 = std::bitset<21>::operator[]((std::bitset<61> *)&this->systemFlag, &result, 4ui64);
  Mypos = v1->_Mypos;
  if ( Mypos >= 0x3E )
    std::_Xout_of_range("invalid bitset<N> position");
  v1->_Pbitset[Mypos >> 6]._Array[0] &= ~(1i64 << (Mypos & 0x3F));
  v4 = std::bitset<21>::operator[](v2, &result, 5ui64);
  v6 = v4->_Mypos;
  if ( v6 >= 0x3E )
    std::_Xout_of_range("invalid bitset<N> position");
  v4->_Pbitset[v6 >> 6]._Array[0] &= ~(1i64 << (v6 & 0x3F));
  v7 = std::bitset<21>::operator[](v5, &result, 6ui64);
  v9 = v7->_Mypos;
  if ( v9 >= 0x3E )
    std::_Xout_of_range("invalid bitset<N> position");
  v7->_Pbitset[v9 >> 6]._Array[0] &= ~(1i64 << (v7->_Mypos & 0x3F));
  v10 = std::bitset<21>::operator[](v8, &result, 0x22ui64);
  v11 = v10->_Mypos;
  if ( v11 >= 0x3E )
    std::_Xout_of_range("invalid bitset<N> position");
  v10->_Pbitset[v11 >> 6]._Array[0] &= ~(1i64 << (v11 & 0x3F));
}

void __fastcall Actor::ResetInvalidAttackID(Actor *this, unsigned int id)
{
  this->uiInvalidAttackID &= ~id;
}

void __fastcall Actor::ResetInvalidAttackID(Actor *this)
{
  this->uiInvalidAttackID = 0;
}

void __fastcall ActorObject::ResetPushFlag(ActorObject *this)
{
  std::bitset<61>::reference *v1; // rax
  std::bitset<61> *v2; // r9
  unsigned __int64 Mypos; // rcx
  std::bitset<61>::reference *v4; // rax
  unsigned __int64 v5; // rdx
  std::bitset<61>::reference result; // [rsp+28h] [rbp-20h] BYREF

  v1 = std::bitset<21>::operator[]((std::bitset<61> *)&this->bsCollisionFlag, &result, 0xCui64);
  Mypos = v1->_Mypos;
  if ( Mypos >= 0xF )
    std::_Xout_of_range("invalid bitset<N> position");
  *((_DWORD *)v1->_Pbitset->_Array + (Mypos >> 5)) &= ~(1 << (v1->_Mypos & 0x1F));
  v4 = std::bitset<21>::operator[](v2, &result, 0xDui64);
  v5 = v4->_Mypos;
  if ( v5 >= 0xF )
    std::_Xout_of_range("invalid bitset<N> position");
  *((_DWORD *)v4->_Pbitset->_Array + (v5 >> 5)) &= ~(1 << (v5 & 0x1F));
}

void __fastcall ActorChara::ResetWallHit(ActorChara *this)
{
  std::bitset<61>::reference *v1; // rax
  std::bitset<61> *v2; // r9
  unsigned __int64 Mypos; // rdx
  std::bitset<61>::reference *v4; // rax
  std::bitset<61> *v5; // r9
  unsigned __int64 v6; // rdx
  std::bitset<61>::reference *v7; // rax
  std::bitset<61> *v8; // r9
  unsigned __int64 v9; // rcx
  std::bitset<61>::reference *v10; // rax
  unsigned __int64 v11; // rdx
  std::bitset<61>::reference result; // [rsp+28h] [rbp-20h] BYREF

  v1 = std::bitset<21>::operator[]((std::bitset<61> *)&this->systemFlag, &result, 2ui64);
  Mypos = v1->_Mypos;
  if ( Mypos >= 0x3E )
    std::_Xout_of_range("invalid bitset<N> position");
  v1->_Pbitset[Mypos >> 6]._Array[0] &= ~(1i64 << (Mypos & 0x3F));
  v4 = std::bitset<21>::operator[](v2, &result, 3ui64);
  v6 = v4->_Mypos;
  if ( v6 >= 0x3E )
    std::_Xout_of_range("invalid bitset<N> position");
  v4->_Pbitset[v6 >> 6]._Array[0] &= ~(1i64 << (v6 & 0x3F));
  v7 = std::bitset<21>::operator[](v5, &result, 0i64);
  v9 = v7->_Mypos;
  if ( v9 >= 0x3E )
    std::_Xout_of_range("invalid bitset<N> position");
  v7->_Pbitset[v9 >> 6]._Array[0] &= ~(1i64 << (v7->_Mypos & 0x3F));
  v10 = std::bitset<21>::operator[](v8, &result, 1ui64);
  v11 = v10->_Mypos;
  if ( v11 >= 0x3E )
    std::_Xout_of_range("invalid bitset<N> position");
  v10->_Pbitset[v11 >> 6]._Array[0] &= ~(1i64 << (v11 & 0x3F));
}

void __fastcall ActorChara::SetAllGuardMode(ActorChara *this, bool flag)
{
  std::bitset<61>::reference *v2; // rax
  char v3; // r9
  unsigned __int64 Mypos; // r8
  std::bitset<61> *Pbitset; // rcx
  unsigned __int64 v6; // rax
  char v7; // r8
  int *v8; // rcx
  int v9; // eax
  int v10; // eax
  std::bitset<61>::reference result; // [rsp+28h] [rbp-20h] BYREF

  v2 = std::bitset<21>::operator[]((std::bitset<61> *)&this->bsTrainingFlag, &result, 4ui64);
  Mypos = v2->_Mypos;
  Pbitset = v2->_Pbitset;
  if ( Mypos >= 0x15 )
    std::_Xout_of_range("invalid bitset<N> position");
  v6 = Mypos >> 5;
  v7 = Mypos & 0x1F;
  v8 = (int *)Pbitset + v6;
  v9 = *v8;
  if ( v3 )
    v10 = v9 | (1 << v7);
  else
    v10 = v9 & ~(1 << v7);
  *v8 = v10;
}

void __fastcall ActorChara::SetAllJustGuard(ActorChara *this, bool flag)
{
  std::bitset<61>::reference *v2; // rax
  char v3; // r9
  unsigned __int64 Mypos; // r8
  std::bitset<61> *Pbitset; // rcx
  unsigned __int64 v6; // rax
  char v7; // r8
  int *v8; // rcx
  int v9; // eax
  int v10; // eax
  std::bitset<61>::reference result; // [rsp+28h] [rbp-20h] BYREF

  v2 = std::bitset<21>::operator[]((std::bitset<61> *)&this->bsTrainingFlag, &result, 7ui64);
  Mypos = v2->_Mypos;
  Pbitset = v2->_Pbitset;
  if ( Mypos >= 0x15 )
    std::_Xout_of_range("invalid bitset<N> position");
  v6 = Mypos >> 5;
  v7 = Mypos & 0x1F;
  v8 = (int *)Pbitset + v6;
  v9 = *v8;
  if ( v3 )
    v10 = v9 | (1 << v7);
  else
    v10 = v9 & ~(1 << v7);
  *v8 = v10;
}

void __fastcall ActorChara::SetAlwaysCounter(ActorChara *this, bool flag)
{
  std::bitset<61>::reference *v2; // rax
  char v3; // r9
  unsigned __int64 Mypos; // r8
  std::bitset<61> *Pbitset; // rcx
  unsigned __int64 v6; // rax
  char v7; // r8
  int *v8; // rcx
  int v9; // eax
  int v10; // eax
  std::bitset<61>::reference result; // [rsp+28h] [rbp-20h] BYREF

  v2 = std::bitset<21>::operator[]((std::bitset<61> *)&this->bsTrainingFlag, &result, 0xEui64);
  Mypos = v2->_Mypos;
  Pbitset = v2->_Pbitset;
  if ( Mypos >= 0x15 )
    std::_Xout_of_range("invalid bitset<N> position");
  v6 = Mypos >> 5;
  v7 = Mypos & 0x1F;
  v8 = (int *)Pbitset + v6;
  v9 = *v8;
  if ( v3 )
    v10 = v9 | (1 << v7);
  else
    v10 = v9 & ~(1 << v7);
  *v8 = v10;
}

void __fastcall ActorObject::SetAttackAppear(ActorObject *this, bool flag)
{
  std::bitset<61>::reference *v2; // rax
  char v3; // r9
  unsigned __int64 Mypos; // r8
  std::bitset<61> *Pbitset; // rcx
  unsigned __int64 v6; // rax
  char v7; // r8
  int *v8; // rcx
  int v9; // eax
  int v10; // eax
  std::bitset<61>::reference result; // [rsp+28h] [rbp-20h] BYREF

  v2 = std::bitset<21>::operator[]((std::bitset<61> *)&this->bsAttackFlag, &result, 0i64);
  Mypos = v2->_Mypos;
  Pbitset = v2->_Pbitset;
  if ( Mypos >= 6 )
    std::_Xout_of_range("invalid bitset<N> position");
  v6 = Mypos >> 5;
  v7 = Mypos & 0x1F;
  v8 = (int *)Pbitset + v6;
  v9 = *v8;
  if ( v3 )
    v10 = v9 | (1 << v7);
  else
    v10 = v9 & ~(1 << v7);
  *v8 = v10;
}

void __fastcall ActorObject::SetAttackCatch(ActorObject *this, bool flag)
{
  std::bitset<61>::reference *v2; // rax
  char v3; // r9
  unsigned __int64 Mypos; // r8
  std::bitset<61> *Pbitset; // rcx
  unsigned __int64 v6; // rax
  char v7; // r8
  int *v8; // rcx
  int v9; // eax
  int v10; // eax
  std::bitset<61>::reference result; // [rsp+28h] [rbp-20h] BYREF

  v2 = std::bitset<21>::operator[]((std::bitset<61> *)&this->bsAttackFlag, &result, 3ui64);
  Mypos = v2->_Mypos;
  Pbitset = v2->_Pbitset;
  if ( Mypos >= 6 )
    std::_Xout_of_range("invalid bitset<N> position");
  v6 = Mypos >> 5;
  v7 = Mypos & 0x1F;
  v8 = (int *)Pbitset + v6;
  v9 = *v8;
  if ( v3 )
    v10 = v9 | (1 << v7);
  else
    v10 = v9 & ~(1 << v7);
  *v8 = v10;
}

void __fastcall ActorObject::SetAttackCounter(ActorObject *this, bool flag)
{
  std::bitset<61>::reference *v2; // rax
  char v3; // r9
  unsigned __int64 Mypos; // r8
  std::bitset<61> *Pbitset; // rcx
  unsigned __int64 v6; // rax
  char v7; // r8
  int *v8; // rcx
  int v9; // eax
  int v10; // eax
  std::bitset<61>::reference result; // [rsp+28h] [rbp-20h] BYREF

  v2 = std::bitset<21>::operator[]((std::bitset<61> *)&this->bsAttackFlag, &result, 5ui64);
  Mypos = v2->_Mypos;
  Pbitset = v2->_Pbitset;
  if ( Mypos >= 6 )
    std::_Xout_of_range("invalid bitset<N> position");
  v6 = Mypos >> 5;
  v7 = Mypos & 0x1F;
  v8 = (int *)Pbitset + v6;
  v9 = *v8;
  if ( v3 )
    v10 = v9 | (1 << v7);
  else
    v10 = v9 & ~(1 << v7);
  *v8 = v10;
}

void __fastcall ActorObject::SetAttackGuard(ActorObject *this, bool flag)
{
  std::bitset<61>::reference *v2; // rax
  char v3; // r9
  unsigned __int64 Mypos; // r8
  std::bitset<61> *Pbitset; // rcx
  unsigned __int64 v6; // rax
  char v7; // r8
  int *v8; // rcx
  int v9; // eax
  int v10; // eax
  std::bitset<61>::reference result; // [rsp+28h] [rbp-20h] BYREF

  v2 = std::bitset<21>::operator[]((std::bitset<61> *)&this->bsAttackFlag, &result, 1ui64);
  Mypos = v2->_Mypos;
  Pbitset = v2->_Pbitset;
  if ( Mypos >= 6 )
    std::_Xout_of_range("invalid bitset<N> position");
  v6 = Mypos >> 5;
  v7 = Mypos & 0x1F;
  v8 = (int *)Pbitset + v6;
  v9 = *v8;
  if ( v3 )
    v10 = v9 | (1 << v7);
  else
    v10 = v9 & ~(1 << v7);
  *v8 = v10;
}

void __fastcall ActorObject::SetAttackHit(ActorObject *this, bool flag)
{
  std::bitset<61>::reference *v2; // rax
  char v3; // r9
  unsigned __int64 Mypos; // r8
  std::bitset<61> *Pbitset; // rcx
  unsigned __int64 v6; // rax
  char v7; // r8
  int *v8; // rcx
  int v9; // eax
  int v10; // eax
  std::bitset<61>::reference result; // [rsp+28h] [rbp-20h] BYREF

  v2 = std::bitset<21>::operator[]((std::bitset<61> *)&this->bsAttackFlag, &result, 2ui64);
  Mypos = v2->_Mypos;
  Pbitset = v2->_Pbitset;
  if ( Mypos >= 6 )
    std::_Xout_of_range("invalid bitset<N> position");
  v6 = Mypos >> 5;
  v7 = Mypos & 0x1F;
  v8 = (int *)Pbitset + v6;
  v9 = *v8;
  if ( v3 )
    v10 = v9 | (1 << v7);
  else
    v10 = v9 & ~(1 << v7);
  *v8 = v10;
}

void __fastcall ActorObject::SetAttackKO(ActorObject *this, bool flag)
{
  std::bitset<61>::reference *v2; // rax
  char v3; // r9
  unsigned __int64 Mypos; // r8
  std::bitset<61> *Pbitset; // rcx
  unsigned __int64 v6; // rax
  char v7; // r8
  int *v8; // rcx
  int v9; // eax
  int v10; // eax
  std::bitset<61>::reference result; // [rsp+28h] [rbp-20h] BYREF

  v2 = std::bitset<21>::operator[]((std::bitset<61> *)&this->bsAttackFlag, &result, 4ui64);
  Mypos = v2->_Mypos;
  Pbitset = v2->_Pbitset;
  if ( Mypos >= 6 )
    std::_Xout_of_range("invalid bitset<N> position");
  v6 = Mypos >> 5;
  v7 = Mypos & 0x1F;
  v8 = (int *)Pbitset + v6;
  v9 = *v8;
  if ( v3 )
    v10 = v9 | (1 << v7);
  else
    v10 = v9 & ~(1 << v7);
  *v8 = v10;
}

void __fastcall ActorChara::SetAutoUkemiMode(ActorChara *this, bool flag)
{
  std::bitset<61>::reference *v2; // rax
  char v3; // r9
  unsigned __int64 Mypos; // r8
  std::bitset<61> *Pbitset; // rcx
  unsigned __int64 v6; // rax
  char v7; // r8
  int *v8; // rcx
  int v9; // eax
  int v10; // eax
  std::bitset<61>::reference result; // [rsp+28h] [rbp-20h] BYREF

  v2 = std::bitset<21>::operator[]((std::bitset<61> *)&this->bsTrainingFlag, &result, 0x12ui64);
  Mypos = v2->_Mypos;
  Pbitset = v2->_Pbitset;
  if ( Mypos >= 0x15 )
    std::_Xout_of_range("invalid bitset<N> position");
  v6 = Mypos >> 5;
  v7 = Mypos & 0x1F;
  v8 = (int *)Pbitset + v6;
  v9 = *v8;
  if ( v3 )
    v10 = v9 | (1 << v7);
  else
    v10 = v9 & ~(1 << v7);
  *v8 = v10;
}

void __fastcall ActorChara::SetCheckAdvantageFrame(ActorChara *this, bool flag)
{
  std::bitset<61>::reference *v2; // rax
  char v3; // r9
  unsigned __int64 Mypos; // r8
  std::bitset<61> *Pbitset; // rcx
  unsigned __int64 v6; // rax
  char v7; // r8
  int *v8; // rcx
  int v9; // eax
  int v10; // eax
  std::bitset<61>::reference result; // [rsp+28h] [rbp-20h] BYREF

  v2 = std::bitset<21>::operator[]((std::bitset<61> *)&this->bsTrainingFlag, &result, 0xFui64);
  Mypos = v2->_Mypos;
  Pbitset = v2->_Pbitset;
  if ( Mypos >= 0x15 )
    std::_Xout_of_range("invalid bitset<N> position");
  v6 = Mypos >> 5;
  v7 = Mypos & 0x1F;
  v8 = (int *)Pbitset + v6;
  v9 = *v8;
  if ( v3 )
    v10 = v9 | (1 << v7);
  else
    v10 = v9 & ~(1 << v7);
  *v8 = v10;
}

void __fastcall ActorChara::SetClimaxCommandDebug(ActorChara *this, bool flag)
{
  this->cmdCheck[1].bClimaxDebug = flag;
}

void __fastcall ActorObject::SetCollisionAtemi(ActorObject *this, bool flag)
{
  std::bitset<61>::reference *v2; // rax
  char v3; // r9
  unsigned __int64 Mypos; // r8
  std::bitset<61> *Pbitset; // rcx
  unsigned __int64 v6; // rax
  char v7; // r8
  int *v8; // rcx
  int v9; // eax
  int v10; // eax
  std::bitset<61>::reference result; // [rsp+28h] [rbp-20h] BYREF

  v2 = std::bitset<21>::operator[]((std::bitset<61> *)&this->bsCollisionFlag, &result, 9ui64);
  Mypos = v2->_Mypos;
  Pbitset = v2->_Pbitset;
  if ( Mypos >= 0xF )
    std::_Xout_of_range("invalid bitset<N> position");
  v6 = Mypos >> 5;
  v7 = Mypos & 0x1F;
  v8 = (int *)Pbitset + v6;
  v9 = *v8;
  if ( v3 )
    v10 = v9 | (1 << v7);
  else
    v10 = v9 & ~(1 << v7);
  *v8 = v10;
}

void __fastcall ActorObject::SetCollisionBackHit(ActorObject *this, bool flag)
{
  std::bitset<61>::reference *v2; // rax
  char v3; // r9
  unsigned __int64 Mypos; // r8
  std::bitset<61> *Pbitset; // rcx
  unsigned __int64 v6; // rax
  char v7; // r8
  int *v8; // rcx
  int v9; // eax
  int v10; // eax
  std::bitset<61>::reference result; // [rsp+28h] [rbp-20h] BYREF

  v2 = std::bitset<21>::operator[]((std::bitset<61> *)&this->bsCollisionFlag, &result, 0xAui64);
  Mypos = v2->_Mypos;
  Pbitset = v2->_Pbitset;
  if ( Mypos >= 0xF )
    std::_Xout_of_range("invalid bitset<N> position");
  v6 = Mypos >> 5;
  v7 = Mypos & 0x1F;
  v8 = (int *)Pbitset + v6;
  v9 = *v8;
  if ( v3 )
    v10 = v9 | (1 << v7);
  else
    v10 = v9 & ~(1 << v7);
  *v8 = v10;
}

void __fastcall ActorObject::SetCollisionCatch(ActorObject *this, bool flag)
{
  std::bitset<61>::reference *v2; // rax
  char v3; // r9
  unsigned __int64 Mypos; // r8
  std::bitset<61> *Pbitset; // rcx
  unsigned __int64 v6; // rax
  char v7; // r8
  int *v8; // rcx
  int v9; // eax
  int v10; // eax
  std::bitset<61>::reference result; // [rsp+28h] [rbp-20h] BYREF

  v2 = std::bitset<21>::operator[]((std::bitset<61> *)&this->bsCollisionFlag, &result, 1ui64);
  Mypos = v2->_Mypos;
  Pbitset = v2->_Pbitset;
  if ( Mypos >= 0xF )
    std::_Xout_of_range("invalid bitset<N> position");
  v6 = Mypos >> 5;
  v7 = Mypos & 0x1F;
  v8 = (int *)Pbitset + v6;
  v9 = *v8;
  if ( v3 )
    v10 = v9 | (1 << v7);
  else
    v10 = v9 & ~(1 << v7);
  *v8 = v10;
}

void __fastcall ActorObject::SetCollisionFrontHit(ActorObject *this, bool flag)
{
  std::bitset<61>::reference *v2; // rax
  char v3; // r9
  unsigned __int64 Mypos; // r8
  std::bitset<61> *Pbitset; // rcx
  unsigned __int64 v6; // rax
  char v7; // r8
  int *v8; // rcx
  int v9; // eax
  int v10; // eax
  std::bitset<61>::reference result; // [rsp+28h] [rbp-20h] BYREF

  v2 = std::bitset<21>::operator[]((std::bitset<61> *)&this->bsCollisionFlag, &result, 0xBui64);
  Mypos = v2->_Mypos;
  Pbitset = v2->_Pbitset;
  if ( Mypos >= 0xF )
    std::_Xout_of_range("invalid bitset<N> position");
  v6 = Mypos >> 5;
  v7 = Mypos & 0x1F;
  v8 = (int *)Pbitset + v6;
  v9 = *v8;
  if ( v3 )
    v10 = v9 | (1 << v7);
  else
    v10 = v9 & ~(1 << v7);
  *v8 = v10;
}

void __fastcall ActorObject::SetCollisionGuard(ActorObject *this, bool flag)
{
  std::bitset<61>::reference *v2; // rax
  char v3; // r9
  unsigned __int64 Mypos; // r8
  std::bitset<61> *Pbitset; // rcx
  unsigned __int64 v6; // rax
  char v7; // r8
  int *v8; // rcx
  int v9; // eax
  int v10; // eax
  std::bitset<61>::reference result; // [rsp+28h] [rbp-20h] BYREF

  v2 = std::bitset<21>::operator[]((std::bitset<61> *)&this->bsCollisionFlag, &result, 2ui64);
  Mypos = v2->_Mypos;
  Pbitset = v2->_Pbitset;
  if ( Mypos >= 0xF )
    std::_Xout_of_range("invalid bitset<N> position");
  v6 = Mypos >> 5;
  v7 = Mypos & 0x1F;
  v8 = (int *)Pbitset + v6;
  v9 = *v8;
  if ( v3 )
    v10 = v9 | (1 << v7);
  else
    v10 = v9 & ~(1 << v7);
  *v8 = v10;
}

void __fastcall ActorObject::SetCollisionGuardPoint(ActorObject *this, bool flag)
{
  std::bitset<61>::reference *v2; // rax
  char v3; // r9
  unsigned __int64 Mypos; // r8
  std::bitset<61> *Pbitset; // rcx
  unsigned __int64 v6; // rax
  char v7; // r8
  int *v8; // rcx
  int v9; // eax
  int v10; // eax
  std::bitset<61>::reference result; // [rsp+28h] [rbp-20h] BYREF

  v2 = std::bitset<21>::operator[]((std::bitset<61> *)&this->bsCollisionFlag, &result, 8ui64);
  Mypos = v2->_Mypos;
  Pbitset = v2->_Pbitset;
  if ( Mypos >= 0xF )
    std::_Xout_of_range("invalid bitset<N> position");
  v6 = Mypos >> 5;
  v7 = Mypos & 0x1F;
  v8 = (int *)Pbitset + v6;
  v9 = *v8;
  if ( v3 )
    v10 = v9 | (1 << v7);
  else
    v10 = v9 & ~(1 << v7);
  *v8 = v10;
}

void __fastcall ActorObject::SetCollisionHit(ActorObject *this, bool flag)
{
  std::bitset<61>::reference *v2; // rax
  char v3; // r9
  unsigned __int64 Mypos; // r8
  std::bitset<61> *Pbitset; // rcx
  unsigned __int64 v6; // rax
  char v7; // r8
  int *v8; // rcx
  int v9; // eax
  int v10; // eax
  std::bitset<61>::reference result; // [rsp+28h] [rbp-20h] BYREF

  v2 = std::bitset<21>::operator[]((std::bitset<61> *)&this->bsCollisionFlag, &result, 0i64);
  Mypos = v2->_Mypos;
  Pbitset = v2->_Pbitset;
  if ( Mypos >= 0xF )
    std::_Xout_of_range("invalid bitset<N> position");
  v6 = Mypos >> 5;
  v7 = Mypos & 0x1F;
  v8 = (int *)Pbitset + v6;
  v9 = *v8;
  if ( v3 )
    v10 = v9 | (1 << v7);
  else
    v10 = v9 & ~(1 << v7);
  *v8 = v10;
}

void __fastcall ActorObject::SetCollisionShotEraseLose(ActorObject *this, bool flag)
{
  std::bitset<61>::reference *v2; // rax
  char v3; // r9
  unsigned __int64 Mypos; // r8
  std::bitset<61> *Pbitset; // rcx
  unsigned __int64 v6; // rax
  char v7; // r8
  int *v8; // rcx
  int v9; // eax
  int v10; // eax
  std::bitset<61>::reference result; // [rsp+28h] [rbp-20h] BYREF

  v2 = std::bitset<21>::operator[]((std::bitset<61> *)&this->bsCollisionFlag, &result, 3ui64);
  Mypos = v2->_Mypos;
  Pbitset = v2->_Pbitset;
  if ( Mypos >= 0xF )
    std::_Xout_of_range("invalid bitset<N> position");
  v6 = Mypos >> 5;
  v7 = Mypos & 0x1F;
  v8 = (int *)Pbitset + v6;
  v9 = *v8;
  if ( v3 )
    v10 = v9 | (1 << v7);
  else
    v10 = v9 & ~(1 << v7);
  *v8 = v10;
}

void __fastcall ActorObject::SetCollisionShotEraseWin(ActorObject *this, bool flag)
{
  std::bitset<61>::reference *v2; // rax
  char v3; // r9
  unsigned __int64 Mypos; // r8
  std::bitset<61> *Pbitset; // rcx
  unsigned __int64 v6; // rax
  char v7; // r8
  int *v8; // rcx
  int v9; // eax
  int v10; // eax
  std::bitset<61>::reference result; // [rsp+28h] [rbp-20h] BYREF

  v2 = std::bitset<21>::operator[]((std::bitset<61> *)&this->bsCollisionFlag, &result, 4ui64);
  Mypos = v2->_Mypos;
  Pbitset = v2->_Pbitset;
  if ( Mypos >= 0xF )
    std::_Xout_of_range("invalid bitset<N> position");
  v6 = Mypos >> 5;
  v7 = Mypos & 0x1F;
  v8 = (int *)Pbitset + v6;
  v9 = *v8;
  if ( v3 )
    v10 = v9 | (1 << v7);
  else
    v10 = v9 & ~(1 << v7);
  *v8 = v10;
}

void __fastcall ActorObject::SetCollisionShotHit(ActorObject *this, bool flag)
{
  std::bitset<61>::reference *v2; // rax
  char v3; // r9
  unsigned __int64 Mypos; // r8
  std::bitset<61> *Pbitset; // rcx
  unsigned __int64 v6; // rax
  char v7; // r8
  int *v8; // rcx
  int v9; // eax
  int v10; // eax
  std::bitset<61>::reference result; // [rsp+28h] [rbp-20h] BYREF

  v2 = std::bitset<21>::operator[]((std::bitset<61> *)&this->bsCollisionFlag, &result, 7ui64);
  Mypos = v2->_Mypos;
  Pbitset = v2->_Pbitset;
  if ( Mypos >= 0xF )
    std::_Xout_of_range("invalid bitset<N> position");
  v6 = Mypos >> 5;
  v7 = Mypos & 0x1F;
  v8 = (int *)Pbitset + v6;
  v9 = *v8;
  if ( v3 )
    v10 = v9 | (1 << v7);
  else
    v10 = v9 & ~(1 << v7);
  *v8 = v10;
}

void __fastcall ActorObject::SetCollisionShotReflectLose(ActorObject *this, bool flag)
{
  std::bitset<61>::reference *v2; // rax
  char v3; // r9
  unsigned __int64 Mypos; // r8
  std::bitset<61> *Pbitset; // rcx
  unsigned __int64 v6; // rax
  char v7; // r8
  int *v8; // rcx
  int v9; // eax
  int v10; // eax
  std::bitset<61>::reference result; // [rsp+28h] [rbp-20h] BYREF

  v2 = std::bitset<21>::operator[]((std::bitset<61> *)&this->bsCollisionFlag, &result, 5ui64);
  Mypos = v2->_Mypos;
  Pbitset = v2->_Pbitset;
  if ( Mypos >= 0xF )
    std::_Xout_of_range("invalid bitset<N> position");
  v6 = Mypos >> 5;
  v7 = Mypos & 0x1F;
  v8 = (int *)Pbitset + v6;
  v9 = *v8;
  if ( v3 )
    v10 = v9 | (1 << v7);
  else
    v10 = v9 & ~(1 << v7);
  *v8 = v10;
}

void __fastcall ActorObject::SetCollisionShotReflectWin(ActorObject *this, bool flag)
{
  std::bitset<61>::reference *v2; // rax
  char v3; // r9
  unsigned __int64 Mypos; // r8
  std::bitset<61> *Pbitset; // rcx
  unsigned __int64 v6; // rax
  char v7; // r8
  int *v8; // rcx
  int v9; // eax
  int v10; // eax
  std::bitset<61>::reference result; // [rsp+28h] [rbp-20h] BYREF

  v2 = std::bitset<21>::operator[]((std::bitset<61> *)&this->bsCollisionFlag, &result, 6ui64);
  Mypos = v2->_Mypos;
  Pbitset = v2->_Pbitset;
  if ( Mypos >= 0xF )
    std::_Xout_of_range("invalid bitset<N> position");
  v6 = Mypos >> 5;
  v7 = Mypos & 0x1F;
  v8 = (int *)Pbitset + v6;
  v9 = *v8;
  if ( v3 )
    v10 = v9 | (1 << v7);
  else
    v10 = v9 & ~(1 << v7);
  *v8 = v10;
}

void __fastcall ActorChara::SetComboMissionAtkEvent(ActorChara *this, BattleSystem::ComboMissionAttackEventListener *p)
{
  this->pComboMissionAtkEvent = p;
}

void __fastcall ActorEffect::SetDelayCreateCount(ActorEffect *this, int frame)
{
  this->xDelayCreateCount.value = frame << 16;
}

void __fastcall ActorCharaBase::SetDisableBlendSave(ActorCharaBase *this, bool bSet)
{
  std::bitset<61>::reference *v2; // rax
  char v3; // r9
  unsigned __int64 Mypos; // r8
  std::bitset<61> *Pbitset; // rcx
  unsigned __int64 v6; // rax
  char v7; // r8
  int *v8; // rcx
  int v9; // eax
  int v10; // eax
  std::bitset<61>::reference result; // [rsp+28h] [rbp-20h] BYREF

  v2 = std::bitset<21>::operator[]((std::bitset<61> *)&this->charaBaseFlag, &result, 5ui64);
  Mypos = v2->_Mypos;
  Pbitset = v2->_Pbitset;
  if ( Mypos >= 6 )
    std::_Xout_of_range("invalid bitset<N> position");
  v6 = Mypos >> 5;
  v7 = Mypos & 0x1F;
  v8 = (int *)Pbitset + v6;
  v9 = *v8;
  if ( v3 )
    v10 = v9 | (1 << v7);
  else
    v10 = v9 & ~(1 << v7);
  *v8 = v10;
}

void __fastcall ActorChara::SetDisableExPowerAdd(ActorChara *this, bool flag)
{
  std::bitset<61>::reference *v2; // rax
  char v3; // r9
  unsigned __int64 Mypos; // r8
  std::bitset<61> *Pbitset; // rcx
  unsigned __int64 v6; // rax
  char v7; // r8
  int *v8; // rcx
  int v9; // eax
  int v10; // eax
  std::bitset<61>::reference result; // [rsp+28h] [rbp-20h] BYREF

  v2 = std::bitset<21>::operator[]((std::bitset<61> *)&this->bsTrainingFlag, &result, 2ui64);
  Mypos = v2->_Mypos;
  Pbitset = v2->_Pbitset;
  if ( Mypos >= 0x15 )
    std::_Xout_of_range("invalid bitset<N> position");
  v6 = Mypos >> 5;
  v7 = Mypos & 0x1F;
  v8 = (int *)Pbitset + v6;
  v9 = *v8;
  if ( v3 )
    v10 = v9 | (1 << v7);
  else
    v10 = v9 & ~(1 << v7);
  *v8 = v10;
}

void __fastcall ActorChara::SetDisableKO(ActorChara *this, bool flag)
{
  std::bitset<61>::reference *v2; // rax
  char v3; // r9
  unsigned __int64 Mypos; // r8
  std::bitset<61> *Pbitset; // rcx
  unsigned __int64 v6; // rax
  char v7; // r8
  int *v8; // rcx
  int v9; // eax
  int v10; // eax
  std::bitset<61>::reference result; // [rsp+28h] [rbp-20h] BYREF

  v2 = std::bitset<21>::operator[]((std::bitset<61> *)&this->bsTrainingFlag, &result, 0xBui64);
  Mypos = v2->_Mypos;
  Pbitset = v2->_Pbitset;
  if ( Mypos >= 0x15 )
    std::_Xout_of_range("invalid bitset<N> position");
  v6 = Mypos >> 5;
  v7 = Mypos & 0x1F;
  v8 = (int *)Pbitset + v6;
  v9 = *v8;
  if ( v3 )
    v10 = v9 | (1 << v7);
  else
    v10 = v9 & ~(1 << v7);
  *v8 = v10;
}

void __fastcall ActorEffect::SetEffectType(ActorEffect *this, ActorEffect::EFFECT_TYPE type)
{
  this->effectType = type;
}

void __fastcall ActorCharaBase::SetEndSetupFlag(ActorCharaBase *this, bool bSet)
{
  std::bitset<61>::reference *v2; // rax
  char v3; // r9
  unsigned __int64 Mypos; // r8
  std::bitset<61> *Pbitset; // rcx
  unsigned __int64 v6; // rax
  char v7; // r8
  int *v8; // rcx
  int v9; // eax
  int v10; // eax
  std::bitset<61>::reference result; // [rsp+28h] [rbp-20h] BYREF

  v2 = std::bitset<21>::operator[]((std::bitset<61> *)&this->charaBaseFlag, &result, 2ui64);
  Mypos = v2->_Mypos;
  Pbitset = v2->_Pbitset;
  if ( Mypos >= 6 )
    std::_Xout_of_range("invalid bitset<N> position");
  v6 = Mypos >> 5;
  v7 = Mypos & 0x1F;
  v8 = (int *)Pbitset + v6;
  v9 = *v8;
  if ( v3 )
    v10 = v9 | (1 << v7);
  else
    v10 = v9 & ~(1 << v7);
  *v8 = v10;
}

void __fastcall ActorObject::SetEraseEffectInvalid(ActorObject *this, bool flag)
{
  std::bitset<61>::reference *v2; // rax
  char v3; // r9
  unsigned __int64 Mypos; // r8
  std::bitset<61> *Pbitset; // rcx
  unsigned __int64 v6; // rax
  char v7; // r8
  int *v8; // rcx
  int v9; // eax
  int v10; // eax
  std::bitset<61>::reference result; // [rsp+28h] [rbp-20h] BYREF

  v2 = std::bitset<21>::operator[]((std::bitset<61> *)&this->bsCollisionFlag, &result, 0xEui64);
  Mypos = v2->_Mypos;
  Pbitset = v2->_Pbitset;
  if ( Mypos >= 0xF )
    std::_Xout_of_range("invalid bitset<N> position");
  v6 = Mypos >> 5;
  v7 = Mypos & 0x1F;
  v8 = (int *)Pbitset + v6;
  v9 = *v8;
  if ( v3 )
    v10 = v9 | (1 << v7);
  else
    v10 = v9 & ~(1 << v7);
  *v8 = v10;
}

void __fastcall ActorChara::SetExPowerRecover(ActorChara *this, bool flag)
{
  std::bitset<61>::reference *v2; // rax
  char v3; // r9
  unsigned __int64 Mypos; // r8
  std::bitset<61> *Pbitset; // rcx
  unsigned __int64 v6; // rax
  char v7; // r8
  int *v8; // rcx
  int v9; // eax
  int v10; // eax
  std::bitset<61>::reference result; // [rsp+28h] [rbp-20h] BYREF

  v2 = std::bitset<21>::operator[]((std::bitset<61> *)&this->bsTrainingFlag, &result, 1ui64);
  Mypos = v2->_Mypos;
  Pbitset = v2->_Pbitset;
  if ( Mypos >= 0x15 )
    std::_Xout_of_range("invalid bitset<N> position");
  v6 = Mypos >> 5;
  v7 = Mypos & 0x1F;
  v8 = (int *)Pbitset + v6;
  v9 = *v8;
  if ( v3 )
    v10 = v9 | (1 << v7);
  else
    v10 = v9 & ~(1 << v7);
  *v8 = v10;
}

void __fastcall ActorChara::SetEyeControlMode(ActorChara *this, bool flag)
{
  this->eyeCtrl.bControlMode = flag;
}

void __fastcall ActorChara::SetGuardCrashMode(ActorChara *this, bool flag)
{
  std::bitset<61>::reference *v2; // rax
  char v3; // r9
  unsigned __int64 Mypos; // r8
  std::bitset<61> *Pbitset; // rcx
  unsigned __int64 v6; // rax
  char v7; // r8
  int *v8; // rcx
  int v9; // eax
  int v10; // eax
  std::bitset<61>::reference result; // [rsp+28h] [rbp-20h] BYREF

  v2 = std::bitset<21>::operator[]((std::bitset<61> *)&this->bsTrainingFlag, &result, 9ui64);
  Mypos = v2->_Mypos;
  Pbitset = v2->_Pbitset;
  if ( Mypos >= 0x15 )
    std::_Xout_of_range("invalid bitset<N> position");
  v6 = Mypos >> 5;
  v7 = Mypos & 0x1F;
  v8 = (int *)Pbitset + v6;
  v9 = *v8;
  if ( v3 )
    v10 = v9 | (1 << v7);
  else
    v10 = v9 & ~(1 << v7);
  *v8 = v10;
}

void __fastcall ActorChara::SetGuardPowerWaitCount(ActorChara *this)
{
  this->xGuardPowerWaitCount.value = 3932160;
}

void __fastcall ActorCharaBase::SetHitStopVibrate(ActorCharaBase *this, bool bSet)
{
  std::bitset<61>::reference *v2; // rax
  char v3; // r9
  unsigned __int64 Mypos; // r8
  std::bitset<61> *Pbitset; // rcx
  unsigned __int64 v6; // rax
  char v7; // r8
  int *v8; // rcx
  int v9; // eax
  int v10; // eax
  std::bitset<61>::reference result; // [rsp+28h] [rbp-20h] BYREF

  v2 = std::bitset<21>::operator[]((std::bitset<61> *)&this->charaBaseFlag, &result, 0i64);
  Mypos = v2->_Mypos;
  Pbitset = v2->_Pbitset;
  if ( Mypos >= 6 )
    std::_Xout_of_range("invalid bitset<N> position");
  v6 = Mypos >> 5;
  v7 = Mypos & 0x1F;
  v8 = (int *)Pbitset + v6;
  v9 = *v8;
  if ( v3 )
    v10 = v9 | (1 << v7);
  else
    v10 = v9 & ~(1 << v7);
  *v8 = v10;
}

void __fastcall Actor::SetIgnoreSystemPlayRate(Actor *this, bool flag)
{
  this->bIgnoreSystemPlayRate = flag;
}

void __fastcall ActorChara::SetInfiniteClimaxMode(ActorChara *this, bool flag)
{
  std::bitset<61>::reference *v2; // rax
  char v3; // r9
  unsigned __int64 Mypos; // r8
  std::bitset<61> *Pbitset; // rcx
  unsigned __int64 v6; // rax
  char v7; // r8
  int *v8; // rcx
  int v9; // eax
  int v10; // eax
  std::bitset<61>::reference result; // [rsp+28h] [rbp-20h] BYREF

  v2 = std::bitset<21>::operator[]((std::bitset<61> *)&this->bsTrainingFlag, &result, 0x13ui64);
  Mypos = v2->_Mypos;
  Pbitset = v2->_Pbitset;
  if ( Mypos >= 0x15 )
    std::_Xout_of_range("invalid bitset<N> position");
  v6 = Mypos >> 5;
  v7 = Mypos & 0x1F;
  v8 = (int *)Pbitset + v6;
  v9 = *v8;
  if ( v3 )
    v10 = v9 | (1 << v7);
  else
    v10 = v9 & ~(1 << v7);
  *v8 = v10;
}

void __fastcall Actor::SetInvalidAttackID(Actor *this, unsigned int id)
{
  this->uiInvalidAttackID |= id;
}

void __fastcall ActorCharaBase::SetInvalidDefaultBranch(ActorCharaBase *this, bool bSet)
{
  std::bitset<61>::reference *v2; // rax
  char v3; // r9
  unsigned __int64 Mypos; // r8
  std::bitset<61> *Pbitset; // rcx
  unsigned __int64 v6; // rax
  char v7; // r8
  int *v8; // rcx
  int v9; // eax
  int v10; // eax
  std::bitset<61>::reference result; // [rsp+28h] [rbp-20h] BYREF

  v2 = std::bitset<21>::operator[]((std::bitset<61> *)&this->charaBaseFlag, &result, 1ui64);
  Mypos = v2->_Mypos;
  Pbitset = v2->_Pbitset;
  if ( Mypos >= 6 )
    std::_Xout_of_range("invalid bitset<N> position");
  v6 = Mypos >> 5;
  v7 = Mypos & 0x1F;
  v8 = (int *)Pbitset + v6;
  v9 = *v8;
  if ( v3 )
    v10 = v9 | (1 << v7);
  else
    v10 = v9 & ~(1 << v7);
  *v8 = v10;
}

void __fastcall ActorChara::SetInvalidGuardChange(ActorChara *this, bool flag)
{
  std::bitset<61>::reference *v2; // rax
  char v3; // r9
  unsigned __int64 Mypos; // r8
  std::bitset<61> *Pbitset; // rcx
  unsigned __int64 v6; // rax
  char v7; // r8
  int *v8; // rcx
  int v9; // eax
  int v10; // eax
  std::bitset<61>::reference result; // [rsp+28h] [rbp-20h] BYREF

  v2 = std::bitset<21>::operator[]((std::bitset<61> *)&this->bsTrainingFlag, &result, 6ui64);
  Mypos = v2->_Mypos;
  Pbitset = v2->_Pbitset;
  if ( Mypos >= 0x15 )
    std::_Xout_of_range("invalid bitset<N> position");
  v6 = Mypos >> 5;
  v7 = Mypos & 0x1F;
  v8 = (int *)Pbitset + v6;
  v9 = *v8;
  if ( v3 )
    v10 = v9 | (1 << v7);
  else
    v10 = v9 & ~(1 << v7);
  *v8 = v10;
}

void __fastcall Actor::SetInvalidHitCheck(Actor *this)
{
  this->bInvalidHitCheck = 1;
}

void __fastcall ActorChara::SetMamahahaBusy(ActorChara *this, bool flag)
{
  std::bitset<61>::reference *v2; // rax
  char v3; // r9
  unsigned __int64 Mypos; // r8
  std::bitset<61> *Pbitset; // rcx
  unsigned __int64 v6; // rax
  char v7; // r8
  __int64 *v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  std::bitset<61>::reference result; // [rsp+28h] [rbp-20h] BYREF

  v2 = std::bitset<21>::operator[]((std::bitset<61> *)&this->systemFlag, &result, 0x37ui64);
  Mypos = v2->_Mypos;
  Pbitset = v2->_Pbitset;
  if ( Mypos >= 0x3E )
    std::_Xout_of_range("invalid bitset<N> position");
  v6 = Mypos >> 6;
  v7 = Mypos & 0x3F;
  v8 = (__int64 *)&Pbitset[v6];
  v9 = *v8;
  if ( v3 )
    v10 = v9 | (1i64 << v7);
  else
    v10 = v9 & ~(1i64 << v7);
  *v8 = v10;
}

void __fastcall ActorChara::SetMaxClimaxTime(ActorChara *this, int maxTime)
{
  int value; // ebx
  ActorChara_vtbl *v4; // rax
  int v5; // edx

  value = this->xMaxClimaxTime.value;
  v4 = this->ActorCharaBase::ActorObject::Actor::__vftable;
  this->xMaxClimaxTime.value = maxTime << 16;
  if ( ((unsigned __int8 (*)(void))v4->IsClimaxMode)() )
  {
    v5 = this->xMaxClimaxTime.value;
    if ( value != v5 )
      this->xClimaxTime.value = (int)(float)((float)((float)((float)((float)((float)(unsigned __int16)this->xClimaxTime.value
                                                                           * 0.000015258789)
                                                                   + (float)(this->xClimaxTime.value >> 16))
                                                           / (float)((float)((float)(unsigned __int16)value
                                                                           * 0.000015258789)
                                                                   + (float)(value >> 16)))
                                                   * (float)((float)((float)(unsigned __int16)v5 * 0.000015258789)
                                                           + (float)(v5 >> 16)))
                                           * 65536.0);
  }
}

void __fastcall ActorChara::SetMaxExPower(ActorChara *this, int gaugeCount)
{
  __int64 v2; // rax

  v2 = 1116i64;
  this->xMaxExPower.value = 65536000 * gaugeCount;
  if ( this->xExPower.value >= 65536000 * gaugeCount )
    v2 = 1124i64;
  this->xExPower.value = *(_DWORD *)((char *)&this->ActorCharaBase::ActorObject::Actor::__vftable + v2);
}

void __fastcall ActorChara::SetNoGuardCrash(ActorChara *this, bool flag)
{
  std::bitset<61>::reference *v2; // rax
  char v3; // r9
  unsigned __int64 Mypos; // r8
  std::bitset<61> *Pbitset; // rcx
  unsigned __int64 v6; // rax
  char v7; // r8
  int *v8; // rcx
  int v9; // eax
  int v10; // eax
  std::bitset<61>::reference result; // [rsp+28h] [rbp-20h] BYREF

  v2 = std::bitset<21>::operator[]((std::bitset<61> *)&this->bsTrainingFlag, &result, 0xAui64);
  Mypos = v2->_Mypos;
  Pbitset = v2->_Pbitset;
  if ( Mypos >= 0x15 )
    std::_Xout_of_range("invalid bitset<N> position");
  v6 = Mypos >> 5;
  v7 = Mypos & 0x1F;
  v8 = (int *)Pbitset + v6;
  v9 = *v8;
  if ( v3 )
    v10 = v9 | (1 << v7);
  else
    v10 = v9 & ~(1 << v7);
  *v8 = v10;
}

void __fastcall ActorChara::SetNoStun(ActorChara *this, bool flag)
{
  std::bitset<61>::reference *v2; // rax
  char v3; // r9
  unsigned __int64 Mypos; // r8
  std::bitset<61> *Pbitset; // rcx
  unsigned __int64 v6; // rax
  char v7; // r8
  int *v8; // rcx
  int v9; // eax
  int v10; // eax
  std::bitset<61>::reference result; // [rsp+28h] [rbp-20h] BYREF

  v2 = std::bitset<21>::operator[]((std::bitset<61> *)&this->bsTrainingFlag, &result, 8ui64);
  Mypos = v2->_Mypos;
  Pbitset = v2->_Pbitset;
  if ( Mypos >= 0x15 )
    std::_Xout_of_range("invalid bitset<N> position");
  v6 = Mypos >> 5;
  v7 = Mypos & 0x1F;
  v8 = (int *)Pbitset + v6;
  v9 = *v8;
  if ( v3 )
    v10 = v9 | (1 << v7);
  else
    v10 = v9 & ~(1 << v7);
  *v8 = v10;
}

void __fastcall ActorObject::SetObjectPush(ActorObject *this, bool flag)
{
  std::bitset<61>::reference *v2; // rax
  char v3; // r9
  unsigned __int64 Mypos; // r8
  std::bitset<61> *Pbitset; // rcx
  unsigned __int64 v6; // rax
  char v7; // r8
  int *v8; // rcx
  int v9; // eax
  int v10; // eax
  std::bitset<61>::reference result; // [rsp+28h] [rbp-20h] BYREF

  v2 = std::bitset<21>::operator[]((std::bitset<61> *)&this->bsCollisionFlag, &result, 0xDui64);
  Mypos = v2->_Mypos;
  Pbitset = v2->_Pbitset;
  if ( Mypos >= 0xF )
    std::_Xout_of_range("invalid bitset<N> position");
  v6 = Mypos >> 5;
  v7 = Mypos & 0x1F;
  v8 = (int *)Pbitset + v6;
  v9 = *v8;
  if ( v3 )
    v10 = v9 | (1 << v7);
  else
    v10 = v9 & ~(1 << v7);
  *v8 = v10;
}

void __fastcall ActorChara::SetOneAtkKO(ActorChara *this, bool flag)
{
  std::bitset<61>::reference *v2; // rax
  char v3; // r9
  unsigned __int64 Mypos; // r8
  std::bitset<61> *Pbitset; // rcx
  unsigned __int64 v6; // rax
  char v7; // r8
  int *v8; // rcx
  int v9; // eax
  int v10; // eax
  std::bitset<61>::reference result; // [rsp+28h] [rbp-20h] BYREF

  v2 = std::bitset<21>::operator[]((std::bitset<61> *)&this->bsTrainingFlag, &result, 0xCui64);
  Mypos = v2->_Mypos;
  Pbitset = v2->_Pbitset;
  if ( Mypos >= 0x15 )
    std::_Xout_of_range("invalid bitset<N> position");
  v6 = Mypos >> 5;
  v7 = Mypos & 0x1F;
  v8 = (int *)Pbitset + v6;
  v9 = *v8;
  if ( v3 )
    v10 = v9 | (1 << v7);
  else
    v10 = v9 & ~(1 << v7);
  *v8 = v10;
}

void __fastcall ActorChara::SetOneHitGuardMode(ActorChara *this, bool flag)
{
  std::bitset<61>::reference *v2; // rax
  char v3; // r9
  unsigned __int64 Mypos; // r8
  std::bitset<61> *Pbitset; // rcx
  unsigned __int64 v6; // rax
  char v7; // r8
  int *v8; // rcx
  int v9; // eax
  int v10; // eax
  std::bitset<61>::reference result; // [rsp+28h] [rbp-20h] BYREF

  v2 = std::bitset<21>::operator[]((std::bitset<61> *)&this->bsTrainingFlag, &result, 5ui64);
  Mypos = v2->_Mypos;
  Pbitset = v2->_Pbitset;
  if ( Mypos >= 0x15 )
    std::_Xout_of_range("invalid bitset<N> position");
  v6 = Mypos >> 5;
  v7 = Mypos & 0x1F;
  v8 = (int *)Pbitset + v6;
  v9 = *v8;
  if ( v3 )
    v10 = v9 | (1 << v7);
  else
    v10 = v9 & ~(1 << v7);
  *v8 = v10;
}

void __fastcall ActorChara::SetOneHitStun(ActorChara *this, bool flag)
{
  std::bitset<61>::reference *v2; // rax
  char v3; // r9
  unsigned __int64 Mypos; // r8
  std::bitset<61> *Pbitset; // rcx
  unsigned __int64 v6; // rax
  char v7; // r8
  int *v8; // rcx
  int v9; // eax
  int v10; // eax
  std::bitset<61>::reference result; // [rsp+28h] [rbp-20h] BYREF

  v2 = std::bitset<21>::operator[]((std::bitset<61> *)&this->bsTrainingFlag, &result, 0xDui64);
  Mypos = v2->_Mypos;
  Pbitset = v2->_Pbitset;
  if ( Mypos >= 0x15 )
    std::_Xout_of_range("invalid bitset<N> position");
  v6 = Mypos >> 5;
  v7 = Mypos & 0x1F;
  v8 = (int *)Pbitset + v6;
  v9 = *v8;
  if ( v3 )
    v10 = v9 | (1 << v7);
  else
    v10 = v9 & ~(1 << v7);
  *v8 = v10;
}

void __fastcall Actor::SetOptionAsset(Actor *this, bool flag)
{
  this->bOptionAssetActor = flag;
}

void __fastcall ActorChara::SetPlayedFinishHitSound(ActorChara *this)
{
  std::bitset<61>::reference *v1; // rax
  unsigned __int64 Mypos; // rdx
  std::bitset<61>::reference result; // [rsp+28h] [rbp-20h] BYREF

  v1 = std::bitset<21>::operator[]((std::bitset<61> *)&this->systemFlag, &result, 0x1Bui64);
  Mypos = v1->_Mypos;
  if ( Mypos >= 0x3E )
    std::_Xout_of_range("invalid bitset<N> position");
  v1->_Pbitset[Mypos >> 6]._Array[0] |= 1i64 << (Mypos & 0x3F);
}

void __fastcall Actor::SetPosition(Actor *this, OGLVec3 *pos)
{
  this->vPos = *pos;
  this->vBasePos = *pos;
}

void __fastcall Actor::SetPositionX(Actor *this, float posX)
{
  this->vPos.x = posX;
  this->vBasePos.x = posX;
}

void __fastcall Actor::SetPositionY(Actor *this, float posY)
{
  this->vPos.y = posY;
  this->vBasePos.y = posY;
}

void __fastcall Actor::SetPositionZ(Actor *this, float posZ)
{
  this->vPos.z = posZ;
  this->vBasePos.z = posZ;
}

void __fastcall ActorChara::SetRandomCounter(ActorChara *this, bool flag)
{
  std::bitset<61>::reference *v2; // rax
  char v3; // r9
  unsigned __int64 Mypos; // r8
  std::bitset<61> *Pbitset; // rcx
  unsigned __int64 v6; // rax
  char v7; // r8
  int *v8; // rcx
  int v9; // eax
  int v10; // eax
  std::bitset<61>::reference result; // [rsp+28h] [rbp-20h] BYREF

  v2 = std::bitset<21>::operator[]((std::bitset<61> *)&this->bsTrainingFlag, &result, 0x11ui64);
  Mypos = v2->_Mypos;
  Pbitset = v2->_Pbitset;
  if ( Mypos >= 0x15 )
    std::_Xout_of_range("invalid bitset<N> position");
  v6 = Mypos >> 5;
  v7 = Mypos & 0x1F;
  v8 = (int *)Pbitset + v6;
  v9 = *v8;
  if ( v3 )
    v10 = v9 | (1 << v7);
  else
    v10 = v9 & ~(1 << v7);
  *v8 = v10;
}

void __fastcall ActorChara::SetRandomGuard(ActorChara *this, bool flag)
{
  std::bitset<61>::reference *v2; // rax
  char v3; // r9
  unsigned __int64 Mypos; // r8
  std::bitset<61> *Pbitset; // rcx
  unsigned __int64 v6; // rax
  char v7; // r8
  int *v8; // rcx
  int v9; // eax
  int v10; // eax
  std::bitset<61>::reference result; // [rsp+28h] [rbp-20h] BYREF

  v2 = std::bitset<21>::operator[]((std::bitset<61> *)&this->bsTrainingFlag, &result, 0x10ui64);
  Mypos = v2->_Mypos;
  Pbitset = v2->_Pbitset;
  if ( Mypos >= 0x15 )
    std::_Xout_of_range("invalid bitset<N> position");
  v6 = Mypos >> 5;
  v7 = Mypos & 0x1F;
  v8 = (int *)Pbitset + v6;
  v9 = *v8;
  if ( v3 )
    v10 = v9 | (1 << v7);
  else
    v10 = v9 & ~(1 << v7);
  *v8 = v10;
}

void __fastcall ActorShot::SetReflectOwner(ActorShot *this, ActorChara *pOwner)
{
  this->pReflectOwner = pOwner;
}

void __fastcall ActorChara::SetReflectWallBackOnce(ActorChara *this)
{
  std::bitset<61>::reference *v1; // rax
  unsigned __int64 Mypos; // rdx
  std::bitset<61>::reference result; // [rsp+28h] [rbp-20h] BYREF

  v1 = std::bitset<21>::operator[]((std::bitset<61> *)&this->systemFlag, &result, 0x27ui64);
  Mypos = v1->_Mypos;
  if ( Mypos >= 0x3E )
    std::_Xout_of_range("invalid bitset<N> position");
  v1->_Pbitset[Mypos >> 6]._Array[0] |= 1i64 << (Mypos & 0x3F);
}

void __fastcall ActorCharaBase::SetResultDemoActor(ActorCharaBase *this, bool bSet, int subType)
{
  std::bitset<61>::reference *v5; // rax
  __int64 v6; // r11
  unsigned __int64 Mypos; // r9
  std::bitset<61> *Pbitset; // r10
  unsigned __int64 v9; // rax
  char v10; // r9
  int *v11; // rcx
  int v12; // eax
  int v13; // eax
  std::bitset<61>::reference result; // [rsp+28h] [rbp-20h] BYREF

  v5 = std::bitset<21>::operator[]((std::bitset<61> *)&this->charaBaseFlag, &result, 3ui64);
  Mypos = v5->_Mypos;
  Pbitset = v5->_Pbitset;
  if ( Mypos >= 6 )
    std::_Xout_of_range("invalid bitset<N> position");
  v9 = Mypos >> 5;
  v10 = Mypos & 0x1F;
  v11 = (int *)Pbitset + v9;
  v12 = *v11;
  if ( bSet )
    v13 = v12 | (1 << v10);
  else
    v13 = v12 & ~(1 << v10);
  *v11 = v13;
  *(_DWORD *)(v6 + 864) = subType;
}

void __fastcall ActorCharaBase::SetResultDemoEnd(ActorCharaBase *this, bool bSet)
{
  std::bitset<61>::reference *v2; // rax
  char v3; // r9
  unsigned __int64 Mypos; // r8
  std::bitset<61> *Pbitset; // rcx
  unsigned __int64 v6; // rax
  char v7; // r8
  int *v8; // rcx
  int v9; // eax
  int v10; // eax
  std::bitset<61>::reference result; // [rsp+28h] [rbp-20h] BYREF

  v2 = std::bitset<21>::operator[]((std::bitset<61> *)&this->charaBaseFlag, &result, 4ui64);
  Mypos = v2->_Mypos;
  Pbitset = v2->_Pbitset;
  if ( Mypos >= 6 )
    std::_Xout_of_range("invalid bitset<N> position");
  v6 = Mypos >> 5;
  v7 = Mypos & 0x1F;
  v8 = (int *)Pbitset + v6;
  v9 = *v8;
  if ( v3 )
    v10 = v9 | (1 << v7);
  else
    v10 = v9 & ~(1 << v7);
  *v8 = v10;
}

void __fastcall ActorChara::SetReversalChance(ActorChara *this)
{
  std::bitset<61>::reference *v1; // rax
  unsigned __int64 Mypos; // rdx
  std::bitset<61>::reference result; // [rsp+28h] [rbp-20h] BYREF

  v1 = std::bitset<21>::operator[]((std::bitset<61> *)&this->systemFlag, &result, 0x29ui64);
  Mypos = v1->_Mypos;
  if ( Mypos >= 0x3E )
    std::_Xout_of_range("invalid bitset<N> position");
  v1->_Pbitset[Mypos >> 6]._Array[0] |= 1i64 << (Mypos & 0x3F);
}

void __fastcall ActorChara::SetReversalMove(ActorChara *this)
{
  std::bitset<61>::reference *v1; // rax
  unsigned __int64 Mypos; // rdx
  std::bitset<61>::reference result; // [rsp+28h] [rbp-20h] BYREF

  v1 = std::bitset<21>::operator[]((std::bitset<61> *)&this->systemFlag, &result, 0x2Aui64);
  Mypos = v1->_Mypos;
  if ( Mypos >= 0x3E )
    std::_Xout_of_range("invalid bitset<N> position");
  v1->_Pbitset[Mypos >> 6]._Array[0] |= 1i64 << (Mypos & 0x3F);
}

void __fastcall ActorChara::SetReversalRecordMode(ActorChara *this)
{
  std::bitset<61>::reference *v1; // rax
  unsigned __int64 Mypos; // rdx
  std::bitset<61>::reference result; // [rsp+28h] [rbp-20h] BYREF

  v1 = std::bitset<21>::operator[]((std::bitset<61> *)&this->bsTrainingFlag, &result, 0x14ui64);
  Mypos = v1->_Mypos;
  if ( Mypos >= 0x15 )
    std::_Xout_of_range("invalid bitset<N> position");
  *((_DWORD *)v1->_Pbitset->_Array + (Mypos >> 5)) |= 1 << (Mypos & 0x1F);
}

void __fastcall ActorShot::SetShotEventData(ActorShot *this, const CharaActionData::Shot::Type::Event *eventData)
{
  this->eventData = *eventData;
}

void __fastcall ActorChara::SetSpecialWinDirection(ActorChara *this)
{
  std::bitset<61>::reference *v1; // rax
  unsigned __int64 Mypos; // rdx
  std::bitset<61>::reference result; // [rsp+28h] [rbp-20h] BYREF

  v1 = std::bitset<21>::operator[]((std::bitset<61> *)&this->systemFlag, &result, 0x3Cui64);
  Mypos = v1->_Mypos;
  if ( Mypos >= 0x3E )
    std::_Xout_of_range("invalid bitset<N> position");
  v1->_Pbitset[Mypos >> 6]._Array[0] |= 1i64 << (Mypos & 0x3F);
}

void __fastcall ActorChara::SetStunWaitCount(ActorChara *this)
{
  this->xStunWaitCount.value = 7864320;
}

void __fastcall ActorObject::SetTargetPush(ActorObject *this, bool flag)
{
  std::bitset<61>::reference *v2; // rax
  char v3; // r9
  unsigned __int64 Mypos; // r8
  std::bitset<61> *Pbitset; // rcx
  unsigned __int64 v6; // rax
  char v7; // r8
  int *v8; // rcx
  int v9; // eax
  int v10; // eax
  std::bitset<61>::reference result; // [rsp+28h] [rbp-20h] BYREF

  v2 = std::bitset<21>::operator[]((std::bitset<61> *)&this->bsCollisionFlag, &result, 0xCui64);
  Mypos = v2->_Mypos;
  Pbitset = v2->_Pbitset;
  if ( Mypos >= 0xF )
    std::_Xout_of_range("invalid bitset<N> position");
  v6 = Mypos >> 5;
  v7 = Mypos & 0x1F;
  v8 = (int *)Pbitset + v6;
  v9 = *v8;
  if ( v3 )
    v10 = v9 | (1 << v7);
  else
    v10 = v9 & ~(1 << v7);
  *v8 = v10;
}

void __fastcall ActorChara::SetTargetWallHit(ActorChara *this, ActorChara *target)
{
  std::bitset<61> *v2; // r10
  std::bitset<61> *v3; // rbx
  std::bitset<61> *v4; // r9
  std::bitset<61>::reference *v5; // rax
  std::bitset<61> *v6; // r9
  unsigned __int8 v7; // r10
  unsigned __int8 v8; // r11
  unsigned __int64 Mypos; // rdx
  std::bitset<61> *v10; // rcx
  unsigned __int64 v11; // rax
  __int64 v12; // rax
  std::bitset<61> *v13; // r9
  std::bitset<61>::reference *v14; // rax
  std::bitset<61> *v15; // r9
  unsigned __int8 v16; // r10
  unsigned __int8 v17; // r11
  unsigned __int64 v18; // rdx
  std::bitset<61> *v19; // rcx
  unsigned __int64 v20; // rax
  __int64 v21; // rax
  std::bitset<61> *v22; // r9
  std::bitset<61>::reference *v23; // rax
  std::bitset<61> *v24; // r9
  unsigned __int8 v25; // r10
  unsigned __int8 v26; // r11
  unsigned __int64 v27; // rdx
  std::bitset<61> *v28; // rcx
  unsigned __int64 v29; // rax
  __int64 v30; // rax
  std::bitset<61> *v31; // r9
  std::bitset<61>::reference *v32; // rax
  unsigned __int8 v33; // r10
  unsigned __int8 v34; // r11
  unsigned __int64 v35; // rdx
  std::bitset<61> *v36; // rcx
  unsigned __int64 v37; // rax
  __int64 v38; // rax
  std::bitset<61>::reference result; // [rsp+28h] [rbp-40h] BYREF
  std::bitset<61>::reference v40; // [rsp+38h] [rbp-30h] BYREF
  std::bitset<61>::reference v41; // [rsp+48h] [rbp-20h] BYREF

  if ( std::bitset<21>::operator[]((std::bitset<61> *)&this->systemFlag, &result, 2ui64)->_Mypos >= 0x3E )
    std::_Xout_of_range("invalid bitset<N> position");
  v3 = v2 + 137;
  if ( std::bitset<21>::operator[](v2 + 137, &v40, 2ui64)->_Mypos >= 0x3E )
    std::_Xout_of_range("invalid bitset<N> position");
  v5 = std::bitset<21>::operator[](v4, &v41, 2ui64);
  Mypos = v5->_Mypos;
  if ( Mypos >= 0x3E )
    std::_Xout_of_range("invalid bitset<N> position");
  v10 = &v5->_Pbitset[Mypos >> 6];
  v11 = v10->_Array[0];
  if ( v8 | v7 )
    v12 = v11 | (1i64 << (Mypos & 0x3F));
  else
    v12 = v11 & ~(1i64 << (Mypos & 0x3F));
  v10->_Array[0] = v12;
  if ( std::bitset<21>::operator[](v6, &v41, 3ui64)->_Mypos >= 0x3E )
    std::_Xout_of_range("invalid bitset<N> position");
  if ( std::bitset<21>::operator[](v3, &v40, 3ui64)->_Mypos >= 0x3E )
    std::_Xout_of_range("invalid bitset<N> position");
  v14 = std::bitset<21>::operator[](v13, &result, 3ui64);
  v18 = v14->_Mypos;
  if ( v18 >= 0x3E )
    std::_Xout_of_range("invalid bitset<N> position");
  v19 = &v14->_Pbitset[v18 >> 6];
  v20 = v19->_Array[0];
  if ( v17 | v16 )
    v21 = v20 | (1i64 << (v18 & 0x3F));
  else
    v21 = v20 & ~(1i64 << (v18 & 0x3F));
  v19->_Array[0] = v21;
  if ( std::bitset<21>::operator[](v15, &v41, 0i64)->_Mypos >= 0x3E )
    std::_Xout_of_range("invalid bitset<N> position");
  if ( std::bitset<21>::operator[](v3, &v40, 0i64)->_Mypos >= 0x3E )
    std::_Xout_of_range("invalid bitset<N> position");
  v23 = std::bitset<21>::operator[](v22, &result, 0i64);
  v27 = v23->_Mypos;
  if ( v27 >= 0x3E )
    std::_Xout_of_range("invalid bitset<N> position");
  v28 = &v23->_Pbitset[v27 >> 6];
  v29 = v28->_Array[0];
  if ( v26 | v25 )
    v30 = v29 | (1i64 << (v27 & 0x3F));
  else
    v30 = v29 & ~(1i64 << (v27 & 0x3F));
  v28->_Array[0] = v30;
  if ( std::bitset<21>::operator[](v24, &v41, 1ui64)->_Mypos >= 0x3E )
    std::_Xout_of_range("invalid bitset<N> position");
  if ( std::bitset<21>::operator[](v3, &v40, 1ui64)->_Mypos >= 0x3E )
    std::_Xout_of_range("invalid bitset<N> position");
  v32 = std::bitset<21>::operator[](v31, &result, 1ui64);
  v35 = v32->_Mypos;
  if ( v35 >= 0x3E )
    std::_Xout_of_range("invalid bitset<N> position");
  v36 = &v32->_Pbitset[v35 >> 6];
  v37 = v36->_Array[0];
  if ( v34 | v33 )
    v38 = v37 | (1i64 << (v35 & 0x3F));
  else
    v38 = v37 & ~(1i64 << (v35 & 0x3F));
  v36->_Array[0] = v38;
}

void __fastcall ActorChara::SetUnlimitedPadVoice(ActorChara *this, bool flag)
{
  std::bitset<61>::reference *v2; // rax
  char v3; // r9
  unsigned __int64 Mypos; // r8
  std::bitset<61> *Pbitset; // rcx
  unsigned __int64 v6; // rax
  char v7; // r8
  __int64 *v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  std::bitset<61>::reference result; // [rsp+28h] [rbp-20h] BYREF

  v2 = std::bitset<21>::operator[]((std::bitset<61> *)&this->systemFlag, &result, 0x1Dui64);
  Mypos = v2->_Mypos;
  Pbitset = v2->_Pbitset;
  if ( Mypos >= 0x3E )
    std::_Xout_of_range("invalid bitset<N> position");
  v6 = Mypos >> 6;
  v7 = Mypos & 0x3F;
  v8 = (__int64 *)&Pbitset[v6];
  v9 = *v8;
  if ( v3 )
    v10 = v9 | (1i64 << v7);
  else
    v10 = v9 & ~(1i64 << v7);
  *v8 = v10;
}

void __fastcall Actor::SetUseZOffset(Actor *this, bool flag)
{
  this->bUseZOffset = flag;
}

void __fastcall ActorChara::SetValidDamageEffect(ActorChara *this)
{
  std::bitset<61>::reference *v1; // rax
  unsigned __int64 Mypos; // rdx
  std::bitset<61>::reference result; // [rsp+28h] [rbp-20h] BYREF

  v1 = std::bitset<21>::operator[]((std::bitset<61> *)&this->systemFlag, &result, 0x26ui64);
  Mypos = v1->_Mypos;
  if ( Mypos >= 0x3E )
    std::_Xout_of_range("invalid bitset<N> position");
  v1->_Pbitset[Mypos >> 6]._Array[0] |= 1i64 << (Mypos & 0x3F);
}

void __fastcall ActorChara::SetVitalRecover(ActorChara *this, bool flag)
{
  std::bitset<61>::reference *v2; // rax
  char v3; // r9
  unsigned __int64 Mypos; // r8
  std::bitset<61> *Pbitset; // rcx
  unsigned __int64 v6; // rax
  char v7; // r8
  int *v8; // rcx
  int v9; // eax
  int v10; // eax
  std::bitset<61>::reference result; // [rsp+28h] [rbp-20h] BYREF

  v2 = std::bitset<21>::operator[]((std::bitset<61> *)&this->bsTrainingFlag, &result, 0i64);
  Mypos = v2->_Mypos;
  Pbitset = v2->_Pbitset;
  if ( Mypos >= 0x15 )
    std::_Xout_of_range("invalid bitset<N> position");
  v6 = Mypos >> 5;
  v7 = Mypos & 0x1F;
  v8 = (int *)Pbitset + v6;
  v9 = *v8;
  if ( v3 )
    v10 = v9 | (1 << v7);
  else
    v10 = v9 & ~(1 << v7);
  *v8 = v10;
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

void __fastcall std::vector<BattleSystem::SequenceCandidateInfo>::_Reallocate(
        std::vector<BattleSystem::SequenceCandidateInfo> *this,
        unsigned __int64 _Count)
{
  BattleSystem::SequenceCandidateInfo *v4; // r14
  std::_Wrap_alloc<std::allocator<BattleSystem::SequenceCandidateInfo> > *v5; // r9
  std::_Wrap_alloc<std::allocator<AgDelegate1<AgUserUpdatedEvent const &,void> > > *v6; // rcx
  signed __int64 v7; // rbx

  v4 = (BattleSystem::SequenceCandidateInfo *)std::allocator<AgDelegate1<AgControllerAddedEvent const &,void>>::allocate(
                                                (std::_Wrap_alloc<std::allocator<extension::BasicFutureObject<extension::AsyncFileImage,void> > > *)this,
                                                _Count);
  std::_Uninitialized_move_al_unchecked1<BattleSystem::SequenceCandidateInfo *,BattleSystem::SequenceCandidateInfo *,std::allocator<BattleSystem::SequenceCandidateInfo>>(
    this->_Mypair._Myval2._Myfirst,
    this->_Mypair._Myval2._Mylast,
    v4,
    v5);
  v7 = (char *)this->_Mypair._Myval2._Mylast - (char *)this->_Mypair._Myval2._Myfirst;
  if ( this->_Mypair._Myval2._Myfirst )
    std::_Wrap_alloc<std::allocator<AgDelegate1<AgSuspendingEvent const &,void>>>::deallocate(
      v6,
      (AgDelegate1<AgUserUpdatedEvent const &,void> *)this->_Mypair._Myval2._Myfirst,
      this->_Mypair._Myval2._Myend - this->_Mypair._Myval2._Myfirst);
  this->_Mypair._Myval2._Myend = &v4[_Count];
  this->_Mypair._Myval2._Mylast = (BattleSystem::SequenceCandidateInfo *)((char *)v4 + (v7 & 0xFFFFFFFFFFFFFFF0ui64));
  this->_Mypair._Myval2._Myfirst = v4;
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

bool __fastcall ActorObject::_branchIsAttackHitOrGuard(ActorObject *this, float param)
{
  return (this->bsAttackFlag._Array[0] & 6) != 0;
}

bool __fastcall ActorObject::IsAttackSwing(ActorObject *this)
{
  bool result; // al
  unsigned int v2; // ecx

  result = (this->bsAttackFlag._Array[0] & 1) != 0
        && (v2 = this->bsAttackFlag._Array[0], (v2 & 2) == 0)
        && (v2 & 4) == 0;
  return result;
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

void __fastcall std::list<std::pair<std::string const,CommandCheck::CommandSettingMapData>>::clear(
        std::list<std::pair<std::string const ,CommandCheck::CommandSettingMapData>> *this)
{
  std::_List_node<std::pair<std::string const ,CommandCheck::CommandSettingMapData>,void *> *Next; // rdi
  unsigned __int64 Myres; // rax
  void **p_Myval; // rbx
  std::_List_node<std::pair<std::string const ,CommandCheck::CommandSettingMapData>,void *> *v5; // rsi
  char *v6; // rcx
  char *v7; // rax
  unsigned __int64 v8; // rcx
  bool v9; // cf

  Next = this->_Mypair._Myval2._Myhead->_Next;
  this->_Mypair._Myval2._Myhead->_Next = this->_Mypair._Myval2._Myhead;
  this->_Mypair._Myval2._Myhead->_Prev = this->_Mypair._Myval2._Myhead;
  this->_Mypair._Myval2._Mysize = 0i64;
  if ( Next != this->_Mypair._Myval2._Myhead )
  {
    do
    {
      Myres = Next->_Myval.first._Mypair._Myval2._Myres;
      p_Myval = (void **)&Next->_Myval;
      v5 = Next->_Next;
      if ( Myres >= 0x10 )
      {
        v6 = (char *)*p_Myval;
        if ( Myres + 1 >= 0x1000 )
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
      Next->_Myval.first._Mypair._Myval2._Myres = 15i64;
      v9 = Next->_Myval.first._Mypair._Myval2._Myres < 0x10;
      Next->_Myval.first._Mypair._Myval2._Mysize = 0i64;
      if ( !v9 )
        p_Myval = (void **)*p_Myval;
      *(_BYTE *)p_Myval = 0;
      operator delete(Next);
      Next = v5;
    }
    while ( v5 != this->_Mypair._Myval2._Myhead );
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

void __fastcall BattleHud::dispose(BattleHud *this)
{
  BattleHudGauge *v1; // rdi
  BattleHudGauge *v3; // rdi
  BattleHudNico2Chat *m_pNico2Chat; // rcx
  BattleHudKeyHistory *m_pKeyHistory; // rcx
  BattleHudRenderer *m_pRenderer; // rcx
  BattleHudResources *m_pResources; // rcx

  v1 = this->m_pGauges[0];
  if ( v1 )
  {
    BattleHudGauge::~BattleHudGauge(v1);
    operator delete(v1, 0x248ui64);
    this->m_pGauges[0] = 0i64;
  }
  v3 = this->m_pGauges[1];
  if ( v3 )
  {
    BattleHudGauge::~BattleHudGauge(this->m_pGauges[1]);
    operator delete(v3, 0x248ui64);
    this->m_pGauges[1] = 0i64;
  }
  m_pNico2Chat = this->m_pNico2Chat;
  if ( m_pNico2Chat )
  {
    ((void (__fastcall *)(BattleHudNico2Chat *, __int64))m_pNico2Chat->~ErrorChecker)(m_pNico2Chat, 1i64);
    this->m_pNico2Chat = 0i64;
  }
  m_pKeyHistory = this->m_pKeyHistory;
  if ( m_pKeyHistory )
  {
    ((void (__fastcall *)(BattleHudKeyHistory *, __int64))m_pKeyHistory->~BattleHudKeyHistory)(m_pKeyHistory, 1i64);
    this->m_pKeyHistory = 0i64;
  }
  m_pRenderer = this->m_pRenderer;
  if ( m_pRenderer )
  {
    ((void (__fastcall *)(BattleHudRenderer *, __int64))m_pRenderer->~ErrorChecker)(m_pRenderer, 1i64);
    this->m_pRenderer = 0i64;
  }
  m_pResources = this->m_pResources;
  if ( m_pResources )
  {
    ((void (__fastcall *)(BattleHudResources *, __int64))m_pResources->~ErrorChecker)(m_pResources, 1i64);
    this->m_pResources = 0i64;
  }
  *(_WORD *)&this->m_bInitialize = 0;
  this->m_playerInfoType = Offline;
  this->m_visibleFlags = 0;
  this->m_bReplayDescriptionVisibled = 0;
  this->m_onlineVisibleFlags = 255;
  this->m_fadeAnimReplayUser.m_number = 0.0;
  this->m_fadeAnimReplayUser.m_bAnimation = 0;
  this->m_fadeAnimReplaySystem.m_number = 0.0;
  this->m_fadeAnimReplaySystem.m_bAnimation = 0;
  *(_WORD *)&this->m_userCharacterSymbol.bEnabled = 0;
  this->m_bError = 0;
}

void __fastcall BattleHud::drawAttackData(
        BattleHud *this,
        BattleHud::AttackData *pAttackDataP1,
        BattleHud::AttackData *pAttackDataP2)
{
  if ( !this->isError(&this->ErrorChecker) && this->m_bInitialize && this->m_bResoucesActived )
  {
    if ( pAttackDataP1 )
      BattleHudRenderer::renderAttackData(
        this->m_pRenderer,
        PLAYER_ID_1P,
        pAttackDataP1->oneHitDamage,
        pAttackDataP1->comboDamage,
        pAttackDataP1->oneHitStun,
        pAttackDataP1->totalStun);
    if ( pAttackDataP2 )
      BattleHudRenderer::renderAttackData(
        this->m_pRenderer,
        PLAYER_ID_2P,
        pAttackDataP2->oneHitDamage,
        pAttackDataP2->comboDamage,
        pAttackDataP2->oneHitStun,
        pAttackDataP2->totalStun);
  }
}

void __fastcall BattleHud::drawComboCount(BattleHud *this)
{
  BattleHudGauge **m_pGauges; // rbx
  __int64 v3; // rbp
  BattleHudGauge **v4; // rsi
  int systemMessagePositionPlusY; // eax
  __int64 v6; // r14
  BattleHudRenderer::RenderParams params; // [rsp+20h] [rbp-28h] BYREF

  if ( !this->isError(&this->ErrorChecker)
    && this->m_bInitialize
    && this->m_bResoucesActived
    && (this->m_visibleFlags & 4) != 0 )
  {
    m_pGauges = this->m_pGauges;
    v3 = 2i64;
    v4 = this->m_pGauges;
    params.positionPlusX = this->m_gaugeRenderParams.systemMessagePositionPlusX;
    systemMessagePositionPlusY = this->m_gaugeRenderParams.systemMessagePositionPlusY;
    v6 = 2i64;
    LODWORD(params.barLengthRate) = FLOAT_1_0;
    *(_QWORD *)&params.gaugeRenderColor = -1i64;
    params.positionPlusY = systemMessagePositionPlusY;
    do
    {
      if ( (*v4)->m_bComboVisible )
        BattleHudRenderer::renderComboCount(this->m_pRenderer, *v4, &params);
      ++v4;
      --v6;
    }
    while ( v6 );
    if ( (this->m_visibleFlags & 8) != 0 )
    {
      do
      {
        if ( (*m_pGauges)->m_messageInfoIndexTop != (*m_pGauges)->m_messageInfoIndexBottom )
          BattleHudRenderer::renderMessage(this->m_pRenderer, *m_pGauges, &params);
        ++m_pGauges;
        --v3;
      }
      while ( v3 );
    }
    this->m_pRenderer->drawStack(this->m_pRenderer);
  }
}

void __fastcall BattleHud::drawKeyHistory(
        BattleHud *this,
        PLAYER_ID playerID,
        InputKeyHistory *pKeyHistory,
        bool bFrameDraw)
{
  int v8; // er8
  BattleHudKeyHistory *m_pKeyHistory; // rcx
  int v10; // edx

  if ( !this->isError(&this->ErrorChecker) && this->m_bInitialize && this->m_bResoucesActived )
  {
    m_pKeyHistory = this->m_pKeyHistory;
    if ( m_pKeyHistory )
    {
      v10 = 60;
      if ( playerID == PLAYER_ID_2P )
      {
        v10 = 1720;
        if ( bFrameDraw )
          v10 = 1680;
      }
      BattleHudKeyHistory::draw(m_pKeyHistory, v10, v8, pKeyHistory, bFrameDraw);
    }
  }
}

void __fastcall BattleHud::drawKeyRecordingFrame(BattleHud *this, int frame, int slot)
{
  const BattleHudRenderer::RenderParams *v6; // r9

  if ( !this->isError(&this->ErrorChecker) && this->m_bInitialize && this->m_bResoucesActived )
    BattleHudRenderer::renderKeyRecording(this->m_pRenderer, frame, slot, v6);
}

void __fastcall BattleHud::drawLowerGauge(BattleHud *this)
{
  float barLengthRate; // xmm0_4
  __int64 v3; // rbp
  const BattleHudGauge **m_pGauges; // rdi
  const BattleHudGauge *v5; // rbx
  BattleHudRenderer::RenderParams params; // [rsp+20h] [rbp-28h] BYREF

  if ( !this->isError(&this->ErrorChecker)
    && this->m_bInitialize
    && this->m_bResoucesActived
    && (this->m_visibleFlags & 2) != 0 )
  {
    barLengthRate = this->m_gaugeRenderParams.barLengthRate;
    params.positionPlusY = this->m_gaugeRenderParams.lowerGaugePositionPlusY;
    v3 = 2i64;
    params.gaugeRenderColor = this->m_gaugeRenderParams.gaugeRenderColor;
    m_pGauges = (const BattleHudGauge **)this->m_pGauges;
    params.barRenderColor = this->m_gaugeRenderParams.barRenderColor;
    params.barLengthRate = barLengthRate;
    params.positionPlusX = 0;
    do
    {
      v5 = *m_pGauges;
      if ( (*m_pGauges)->m_bEnabledSpEffects && v5->m_bVisibleClimaxGauge )
        BattleHudRenderer::renderMaxmodeGauge(v5->m_pRenderer, *m_pGauges, &params);
      BattleHudRenderer::renderPowerGauge(v5->m_pRenderer, v5, &params);
      if ( v5->m_memberInfos[v5->m_topOrderIndex % 3].characterNo == CHARACTER_NO_CHN )
        BattleHudRenderer::renderSakeCount(v5->m_pRenderer, v5, &params);
      ++m_pGauges;
      --v3;
    }
    while ( v3 );
    this->m_pRenderer->drawStack(this->m_pRenderer);
  }
}

void __fastcall BattleHud::drawOnline(BattleHud *this)
{
  int v2; // edx
  int v3; // er8
  BattleHudCommonNumbers::ESESelectorSelectKey::Type alpha; // [rsp+20h] [rbp-18h]

  if ( !this->isError(&this->ErrorChecker) && this->m_bInitialize )
  {
    if ( this->m_userCharacterSymbol.bEnabled )
      BattleHudRenderer::renderOperateCharacterSymbol(
        this->m_pRenderer,
        this->m_userCharacterSymbol.playerID,
        this->m_userCharacterSymbol.x,
        this->m_userCharacterSymbol.y,
        this->m_userCharacterSymbol.alpha.m_number);
    if ( this->m_fadeAnimSESelector.m_number > 0.0 && (this->m_onlineVisibleFlags & 2) != 0 )
      BattleHudRenderer::renderSEShortcutKey(
        this->m_pRenderer,
        v2,
        v3,
        this->m_seSelectorPage,
        alpha,
        this->m_fadeAnimSESelector.m_number);
    this->m_pRenderer->drawStack(this->m_pRenderer);
  }
}

void __fastcall BattleHud::drawReversalReplay(BattleHud *this)
{
  const BattleHudRenderer::RenderParams *v2; // rdx
  __int64 v3; // rax
  int v4; // ecx
  int v5; // er8

  if ( !this->isError(&this->ErrorChecker) && this->m_bInitialize && this->m_bResoucesActived )
  {
    BattleSystem::BattleController::GetActionSystem();
    v4 = *(_DWORD *)(v3 + 255132);
    v5 = (v4 != 1) + 95;
    if ( v4 == 3 )
    {
      BattleHudRenderer::renderReversalReplay(this->m_pRenderer, v2, 94);
    }
    else
    {
      if ( v4 == 2 )
        v5 = 93;
      BattleHudRenderer::renderReversalReplay(this->m_pRenderer, v2, v5);
    }
  }
}

void __fastcall BattleHud::drawUpperGauge(BattleHud *this)
{
  BattleHudGauge **m_pGauges; // rbx
  __int64 v3; // rbp
  __int64 v4; // rsi
  BattleHudGauge **v5; // rsi
  __int64 v6; // r14
  const BattleHudGauge *v7; // rbx
  BattleSystem::BattleController *v8; // rax
  BattleSystem::BATTLE_MODE battleMode; // ecx
  BattleHudGauge **v10; // rbx
  __int64 v11; // rsi
  GameDataInfo *v12; // rcx
  GAME_MODE v13; // esi
  BattleHudGauge **v14; // rbx
  const BattleHudRenderer::RenderParams *v15; // r8
  BattleHudRenderer::RenderParams params; // [rsp+38h] [rbp-30h] BYREF
  BattleSystem::BattleController *v17; // [rsp+70h] [rbp+8h]

  if ( !this->isError(&this->ErrorChecker)
    && this->m_bInitialize
    && this->m_bResoucesActived
    && (this->m_visibleFlags & 1) != 0 )
  {
    params.positionPlusX = 0;
    params.positionPlusY = this->m_gaugeRenderParams.upperGaugePositionPlusY;
    params.gaugeRenderColor = this->m_gaugeRenderParams.gaugeRenderColor;
    params.barRenderColor = this->m_gaugeRenderParams.barRenderColor;
    params.barLengthRate = this->m_gaugeRenderParams.barLengthRate;
    m_pGauges = this->m_pGauges;
    v3 = 2i64;
    v4 = 2i64;
    do
    {
      BattleHudRenderer::renderCharacterFace((*m_pGauges)->m_pRenderer, *m_pGauges, &params);
      ++m_pGauges;
      --v4;
    }
    while ( v4 );
    v5 = this->m_pGauges;
    v6 = 2i64;
    do
    {
      v7 = *v5;
      BattleHudRenderer::renderHpGauge((*v5)->m_pRenderer, *v5, &params);
      BattleHudRenderer::renderGuardGauge(v7->m_pRenderer, v7, &params);
      ++v5;
      --v6;
    }
    while ( v6 );
    v8 = BattleSystem::BattleController::instance;
    if ( !BattleSystem::BattleController::instance )
    {
      v17 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
      BattleSystem::BattleController::BattleController(v17);
      BattleSystem::BattleController::instance = v8;
    }
    if ( v8->battleInfo.battleMode )
    {
      battleMode = v8->battleInfo.battleMode;
      if ( ((battleMode - 2) & 0xFFFFFFFC) != 0 || battleMode == DEVELOP )
      {
        v10 = this->m_pGauges;
        v11 = 2i64;
        do
        {
          BattleHudRenderer::renderSetCount((*v10)->m_pRenderer, *v10, &params);
          ++v10;
          --v11;
        }
        while ( v11 );
      }
    }
    BattleHudRenderer::renderTimer(
      this->m_pRenderer,
      this->m_timer,
      this->m_timerAnimationFrame,
      this->m_animationFrame,
      &params);
    if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *(_DWORD *)(*(_QWORD *)NtCurrentTeb()->Reserved1[11]
                                                                              + 40i64) )
    {
      Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
      {
        GameDataInfo::GameDataInfo(v12);
        Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      }
    }
    v13 = `GameDataInfo::getInstance'::`2'::instance.m_GameMode[`GameDataInfo::getInstance'::`2'::instance.m_GameModeIndex];
    if ( v13 == GAME_MODE_STORY || v13 == GAME_MODE_MISSION_TIMEATTACK )
      BattleHudRenderer::renderStageNo(this->m_pRenderer, this->m_stageNo, &params);
    v14 = this->m_pGauges;
    do
    {
      BattleHudRenderer::renderMemberInfo((*v14)->m_pRenderer, *v14, &params);
      ++v14;
      --v3;
    }
    while ( v3 );
    BattleHud::drawUserInfo(this);
    if ( v13 == GAME_MODE_STORY )
      BattleHudRenderer::renderActivityBonus(this->m_pGauges[0]->m_pRenderer, this->m_pGauges[0], v15);
    this->m_pRenderer->drawStack(this->m_pRenderer);
  }
}

void __fastcall BattleHud::drawUserInfo(BattleHud *this)
{
  float barLengthRate; // xmm0_4
  __int64 v3; // rax
  bool v4; // zf
  __int64 v5; // rax
  __int64 v6; // rdi
  GameDataInfo *Instance; // rax
  GAME_MODE v8; // edx
  unsigned int v9; // er8
  unsigned int v10; // er10
  unsigned int v11; // er9
  unsigned int v12; // er8
  unsigned int v13; // er8
  BattleHudRenderer::RenderParams params; // [rsp+30h] [rbp-28h] BYREF

  if ( !this->isError(&this->ErrorChecker) && this->m_bInitialize && this->m_bResoucesActived )
  {
    barLengthRate = this->m_gaugeRenderParams.barLengthRate;
    params.positionPlusY = this->m_gaugeRenderParams.upperGaugePositionPlusY;
    params.gaugeRenderColor = this->m_gaugeRenderParams.gaugeRenderColor;
    params.barRenderColor = this->m_gaugeRenderParams.barRenderColor;
    params.barLengthRate = barLengthRate;
    params.positionPlusX = 0;
    v3 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)&AppMain::pApp + 112i64) + 8i64);
    v4 = *(_BYTE *)(v3 + 128) == 0;
    *(_DWORD *)(v3 + 60) = 3;
    *(_DWORD *)(v3 + 64) = 255;
    *(_DWORD *)(v3 + 68) = 255;
    if ( v4 )
    {
      if ( m_DepthMask )
      {
        m_DepthMask = 0;
        glDepthMask(0);
      }
      if ( m_Mode != 32774 )
      {
        m_Mode = 32774;
        m_ModeAlpha = 32774;
        _glewBlendEquation(0x8006u);
      }
      if ( dword_140A9605C != 1 )
      {
        dword_140A9605C = 1;
        glEnable(0xBE2u);
      }
      if ( m_Sfactor != 770 || m_Dfactor != 771 )
      {
        m_Sfactor = 770;
        m_Dfactor = 771;
        m_SfactorAlpha = 770;
        m_DfactorAlpha = 771;
        glBlendFunc(0x302u, 0x303u);
      }
      if ( m_dMode != 515 )
      {
        m_dMode = 515;
        glDepthFunc(0x203u);
      }
    }
    BattleSystem::BattleController::GetActionSystem();
    v6 = v5;
    Instance = GameDataInfo::getInstance();
    v8 = Instance->m_GameMode[Instance->m_GameModeIndex];
    if ( this->m_playerInfoType == Online )
    {
      BattleHudRenderer::renderUserInfoOnlineMode(this->m_pRenderer, this->m_pGauges[0], this->m_pGauges[1], &params);
    }
    else
    {
      switch ( v8 )
      {
        case GAME_MODE_STORY:
          v9 = *(_DWORD *)(v6 + 246244) ^ 0x7B48A35E ^ (*(_WORD *)(v6 + 246244) ^ 0xA35E ^ (unsigned __int16)((*(_DWORD *)(v6 + 246244) ^ 0x7B48A35Eu) >> 14)) & 0xCCCC ^ (((*(_WORD *)(v6 + 246244) ^ 0xA35E ^ (unsigned __int16)((*(_DWORD *)(v6 + 246244) ^ 0x7B48A35Eu) >> 14)) & 0xCCCC) << 14);
          BattleHudRenderer::renderUserInfoStoryMode(
            this->m_pRenderer,
            (v9 ^ (v9 >> 7)) & 0x550055 ^ v9 ^ (((v9 ^ (v9 >> 7)) & 0x550055) << 7),
            &params);
          break;
        case GAME_MODE_VERSUS:
          v10 = this->m_playerInfo.versus.winCount[1] ^ 0x7B48A35E ^ (LOWORD(this->m_playerInfo.versus.winCount[1]) ^ 0xA35E ^ (unsigned __int16)((this->m_playerInfo.versus.winCount[1] ^ 0x7B48A35Eu) >> 14)) & 0xCCCC ^ (((LOWORD(this->m_playerInfo.versus.winCount[1]) ^ 0xA35E ^ (unsigned __int16)((this->m_playerInfo.versus.winCount[1] ^ 0x7B48A35Eu) >> 14)) & 0xCCCC) << 14);
          v11 = this->m_playerInfo.versus.winCount[0] ^ 0x7B48A35E ^ (LOWORD(this->m_playerInfo.versus.winCount[0]) ^ 0xA35E ^ (unsigned __int16)((this->m_playerInfo.versus.winCount[0] ^ 0x7B48A35Eu) >> 14)) & 0xCCCC ^ (((LOWORD(this->m_playerInfo.versus.winCount[0]) ^ 0xA35E ^ (unsigned __int16)((this->m_playerInfo.versus.winCount[0] ^ 0x7B48A35Eu) >> 14)) & 0xCCCC) << 14);
          BattleHudRenderer::renderUserInfoVersus(
            this->m_pRenderer,
            (v11 ^ (v11 >> 7)) & 0x550055 ^ v11 ^ (((v11 ^ (v11 >> 7)) & 0x550055) << 7),
            (v10 ^ (v10 >> 7)) & 0x550055 ^ v10 ^ (((v10 ^ (v10 >> 7)) & 0x550055) << 7),
            this->m_playerInfo.versus.bPlayerCpu[0],
            this->m_playerInfo.versus.bPlayerCpu[1],
            &params);
          break;
        case GAME_MODE_MISSION_TIMEATTACK:
          v12 = *(_DWORD *)(v6 + 246092) ^ 0x7B48A35E ^ (*(_WORD *)(v6 + 246092) ^ 0xA35E ^ (unsigned __int16)((*(_DWORD *)(v6 + 246092) ^ 0x7B48A35Eu) >> 14)) & 0xCCCC ^ (((*(_WORD *)(v6 + 246092) ^ 0xA35E ^ (unsigned __int16)((*(_DWORD *)(v6 + 246092) ^ 0x7B48A35Eu) >> 14)) & 0xCCCC) << 14);
          BattleHudRenderer::renderUserInfoTimeattackMode(
            this->m_pRenderer,
            (v12 ^ (v12 >> 7)) & 0x550055 ^ v12 ^ (((v12 ^ (v12 >> 7)) & 0x550055) << 7),
            &params);
          break;
        case GAME_MODE_MISSION_SURVIVAL:
          v13 = this->m_playerInfo.suvival.winCount ^ 0x7B48A35E ^ (LOWORD(this->m_playerInfo.suvival.winCount) ^ 0xA35E ^ (unsigned __int16)((this->m_playerInfo.suvival.winCount ^ 0x7B48A35Eu) >> 14)) & 0xCCCC ^ (((LOWORD(this->m_playerInfo.suvival.winCount) ^ 0xA35E ^ (unsigned __int16)((this->m_playerInfo.suvival.winCount ^ 0x7B48A35Eu) >> 14)) & 0xCCCC) << 14);
          BattleHudRenderer::renderUserInfoSurvivalMode(
            this->m_pRenderer,
            (v13 ^ (v13 >> 7)) & 0x550055 ^ v13 ^ (((v13 ^ (v13 >> 7)) & 0x550055) << 7),
            &params);
          break;
        default:
          BattleHudRenderer::renderUserInfoPlayerSymbol(this->m_pRenderer, &params);
          break;
      }
    }
  }
}

void __fastcall BattleHud::entryOnlineChatMessage(
        BattleHud *this,
        unsigned __int64 onlineID,
        const char *pMesssage,
        unsigned int color)
{
  __int64 v8; // rbx
  BattleHudGauge **i; // rdi
  char **Name; // rax

  if ( !this->isError(&this->ErrorChecker) && this->m_bInitialize )
  {
    v8 = 0i64;
    for ( i = this->m_pGauges; !BattleHudGauge::setChatMessageByFixedPhrase(*i, onlineID, pMesssage); ++i )
    {
      if ( ++v8 >= 2 )
      {
        Name = SteamNameCache::getName(SteamNameCache::ms_instance, (CSteamID)onlineID);
        BattleHudNico2Chat::entryMessage(this->m_pNico2Chat, (const char *)Name, pMesssage, color);
        return;
      }
    }
  }
}

__int64 __fastcall BattleHud::findOnlineBattlePlayerByOnlineID(BattleHud *this, unsigned __int64 onlineID)
{
  unsigned int v4; // er10
  BattleHudGauge **m_pGauges; // r11
  __int64 v6; // rcx
  BattleHudGauge::MemberInfo::OnlineParams *pOnlineParams; // rax

  if ( this->isError(&this->ErrorChecker) || !this->m_bInitialize )
    return 0xFFFFFFFFi64;
  v4 = 0;
  m_pGauges = this->m_pGauges;
  v6 = 0i64;
  while ( 1 )
  {
    pOnlineParams = (*m_pGauges)->m_memberInfos[(*m_pGauges)->m_topOrderIndex % 3].pOnlineParams;
    if ( pOnlineParams )
    {
      if ( pOnlineParams->playerOnlineID == onlineID )
        break;
    }
    ++v4;
    ++v6;
    ++m_pGauges;
    if ( v6 >= 2 )
      return 0xFFFFFFFFi64;
  }
  return v4;
}

void __fastcall BattleHud::hideUsernames(BattleHud *this)
{
  BattleHudGauge::MemberInfo::OnlineParams *pOnlineParams; // r9
  BattleHudGauge::MemberInfo::OnlineParams *v2; // rbx
  extension::GFXIText *textPlayerID; // rcx
  extension::gfxi_detail::TextProxy *v4; // rax
  Scaleform::GFx::DrawText *pObject; // rcx
  extension::GFXIText *v6; // rcx
  extension::gfxi_detail::TextProxy *v7; // rax
  Scaleform::GFx::DrawText *v8; // rcx

  pOnlineParams = this->m_pGauges[0]->m_memberInfos[this->m_pGauges[0]->m_topOrderIndex % 3].pOnlineParams;
  v2 = this->m_pGauges[1]->m_memberInfos[this->m_pGauges[1]->m_topOrderIndex % 3].pOnlineParams;
  if ( pOnlineParams && v2 )
  {
    textPlayerID = pOnlineParams->textPlayerID;
    if ( textPlayerID->m_body.m_ptr->m_isVisible )
    {
      v4 = extension::GFXIText::cloneIfShared(textPlayerID);
      pObject = v4->m_gtext.pObject;
      v4->m_isVisible = 0;
      if ( pObject )
        pObject->SetVisible(pObject, 0);
    }
    v6 = v2->textPlayerID;
    if ( v6->m_body.m_ptr->m_isVisible )
    {
      v7 = extension::GFXIText::cloneIfShared(v6);
      v8 = v7->m_gtext.pObject;
      v7->m_isVisible = 0;
      if ( v8 )
        v8->SetVisible(v8, 0);
    }
  }
}

void __fastcall BattleHud::initialize(BattleHud *this)
{
  BattleHudResources *v2; // rcx
  BattleHudResources *v3; // rax
  BattleHudGauge **m_pGauges; // r12
  BattleHudGauge *v5; // rax
  BattleHudGauge *v6; // rax
  __int64 v7; // rdi
  BattleSystem::BattleController *v8; // rax
  char *v9; // r15
  int v10; // ebx
  __int64 v11; // rbp
  __int64 iMemberCount; // r13
  __int64 v13; // r14
  CHARACTER_NO BaseCharaID; // eax
  BattleHudGauge *v15; // rsi
  __int64 v16; // rbx
  int v17; // esi
  int v18; // esi
  int v19; // ebx
  BattleHudResources *v21; // [rsp+88h] [rbp+10h]
  _BYTE *v22; // [rsp+88h] [rbp+10h]
  BattleHudGauge *v23; // [rsp+88h] [rbp+10h]
  BattleHudGauge *v24; // [rsp+88h] [rbp+10h]
  BattleHudKeyHistory *v25; // [rsp+88h] [rbp+10h]
  BattleSystem::BattleController *v26; // [rsp+88h] [rbp+10h]

  if ( !this->isError(&this->ErrorChecker) && !this->m_bInitialize )
  {
    if ( !this->m_pResources )
    {
      v21 = (BattleHudResources *)operator new(0xD8ui64);
      BattleHudResources::BattleHudResources(v21);
      this->m_pResources = v3;
      if ( !v3 )
        goto LABEL_5;
    }
    if ( !this->m_pRenderer )
    {
      v22 = operator new(0x70ui64);
      v22[8] = 0;
      *((_DWORD *)v22 + 4) = 0;
      *((_QWORD *)v22 + 3) = 0i64;
      *((_DWORD *)v22 + 8) = 0;
      *((_QWORD *)v22 + 5) = 0i64;
      *((_DWORD *)v22 + 12) = 0;
      *((_DWORD *)v22 + 18) = 0;
      v22[68] = 0;
      v2 = (BattleHudResources *)&BattleHudRenderer::`vftable';
      *(_QWORD *)v22 = &BattleHudRenderer::`vftable';
      *((_QWORD *)v22 + 11) = 0i64;
      *((_DWORD *)v22 + 25) = 65537;
      *((_QWORD *)v22 + 13) = 0i64;
      *((_DWORD *)v22 + 24) = 0;
      this->m_pRenderer = (BattleHudRenderer *)v22;
    }
    if ( ((m_pGauges = this->m_pGauges, this->m_pGauges[0])
       || (v23 = (BattleHudGauge *)operator new(0x248ui64),
           BattleHudGauge::BattleHudGauge(v23, this->m_pResources, this->m_pRenderer, PLAYER_ID_1P, VOICETYPE_MALE),
           (*m_pGauges = v5) != 0i64))
      && (this->m_pGauges[1]
       || (v24 = (BattleHudGauge *)operator new(0x248ui64),
           BattleHudGauge::BattleHudGauge(v24, this->m_pResources, this->m_pRenderer, PLAYER_ID_2P, VOICETYPE_FEMALE),
           (this->m_pGauges[1] = v6) != 0i64)) )
    {
      if ( !this->m_pKeyHistory )
      {
        v25 = (BattleHudKeyHistory *)operator new(0x18ui64);
        v2 = (BattleHudResources *)&BattleHudKeyHistory::`vftable';
        v25->__vftable = (BattleHudKeyHistory_vtbl *)&BattleHudKeyHistory::`vftable';
        *(_WORD *)&v25->m_bError = 0;
        v25->m_pImage = 0i64;
        this->m_pKeyHistory = v25;
      }
      this->m_bInitialize = 1;
      v7 = 0i64;
      v8 = BattleSystem::BattleController::instance;
      do
      {
        if ( !v8 )
        {
          v26 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
          BattleSystem::BattleController::BattleController(v26);
          BattleSystem::BattleController::instance = v8;
        }
        v9 = (char *)v8 + v7 * 168;
        v10 = 0;
        v11 = 0i64;
        iMemberCount = v8->playerInfo[v7].iMemberCount;
        if ( iMemberCount > 0 )
        {
          v13 = 0i64;
          do
          {
            if ( v10 < 0 || v10 >= *((_DWORD *)v9 + 61537) )
              BaseCharaID = CHARACTER_NO_NONE;
            else
              BaseCharaID = BattleSystem::BattlePlayerInfo::GetBaseCharaID(*(CHARACTER_NO *)&v9[4 * v11 + 246124]);
            v15 = *m_pGauges;
            if ( (unsigned int)v10 <= 2 )
            {
              v15->m_memberInfos[v13].orderIndex = v10;
              v15->m_memberInfos[v13].characterNo = BaseCharaID;
              v15->m_memberInfos[v13].bAlive = 1;
              BattleHudResources::readCharacterFaceImage(
                v2,
                &v15->m_memberInfos[v13].imageFace.image,
                v15->m_playerID,
                BaseCharaID);
              v15->m_bLoading = 1;
            }
            ++v10;
            ++v11;
            ++v13;
          }
          while ( v11 < iMemberCount );
          v8 = BattleSystem::BattleController::instance;
        }
        ++m_pGauges;
        ++v7;
      }
      while ( v7 < 2 );
      BattleHudResources::readCommonsImages(this->m_pResources);
      BattleHudKeyHistory::setupResources(this->m_pKeyHistory);
      if ( !this->isError(&this->ErrorChecker) && this->m_bInitialize )
      {
        this->m_timer = -1;
        this->m_timerAnimationFrame = 0.0;
      }
      if ( !this->isError(&this->ErrorChecker) && this->m_bInitialize )
        this->m_stageNo = 0;
      *(_QWORD *)&this->m_gaugeRenderParams.upperGaugePositionPlusY = 0i64;
      *(_QWORD *)&this->m_gaugeRenderParams.systemMessagePositionPlusX = 0i64;
      *(_QWORD *)&this->m_gaugeRenderParams.gaugeRenderColor = -1i64;
      this->m_gaugeRenderParams.barLengthRate = 1.0;
      v16 = *(_QWORD *)&AppMain::pApp;
      v17 = *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2197476i64);
      if ( !this->isError(&this->ErrorChecker) && this->m_bInitialize )
        this->m_gaugeRenderParams.upperGaugePositionPlusY = v17;
      v18 = *(_DWORD *)(v16 + 2197480);
      if ( !this->isError(&this->ErrorChecker) && this->m_bInitialize )
      {
        this->m_gaugeRenderParams.systemMessagePositionPlusX = v18;
        this->m_gaugeRenderParams.systemMessagePositionPlusY = 0;
      }
      v19 = *(_DWORD *)(v16 + 2197484);
      if ( !this->isError(&this->ErrorChecker) && this->m_bInitialize )
        this->m_gaugeRenderParams.lowerGaugePositionPlusY = v19;
      *(_QWORD *)this->m_playerInfo.versus.bPlayerCpu = 0i64;
      *(_QWORD *)&this->m_playerInfo.versus.winCount[1] = 0i64;
      this->m_playerInfo.suvival.winCount = 2068357982;
      this->m_playerInfo.versus.winCount[0] = 2068357982;
      this->m_playerInfo.versus.winCount[1] = 2068357982;
    }
    else
    {
LABEL_5:
      this->m_bError = 1;
    }
  }
}

void __fastcall BattleHud::initializeOnlineParams(BattleHud *this)
{
  BattleHudNico2Chat *v2; // rax
  float m_min; // xmm2_4
  float v4; // xmm1_4
  float v5; // xmm1_4
  float v6; // xmm0_4
  BattleHudNico2Chat *v7; // [rsp+40h] [rbp+8h]

  if ( !this->isError(&this->ErrorChecker) && this->m_bInitialize )
  {
    this->m_playerInfoType = Online;
    if ( !this->isError(&this->ErrorChecker) && this->m_bInitialize )
      this->m_onlineVisibleFlags = 255;
    BattleHudResources::readOnlineCommonsImages(this->m_pResources);
    if ( this->m_pNico2Chat
      || (v7 = (BattleHudNico2Chat *)operator new(0x40ui64),
          BattleHudNico2Chat::BattleHudNico2Chat(v7, this->m_pResources),
          (this->m_pNico2Chat = v2) != 0i64) )
    {
      m_min = this->m_fadeAnimRoomID.m_min;
      v4 = fminf(0.0, this->m_fadeAnimRoomID.m_max);
      if ( m_min <= v4 )
        m_min = v4;
      this->m_fadeAnimRoomID.m_number = m_min;
      this->m_fadeAnimRoomID.m_bAnimation = 0;
      v5 = this->m_fadeAnimSESelector.m_min;
      v6 = fminf(0.0, this->m_fadeAnimSESelector.m_max);
      if ( v5 <= v6 )
        v5 = v6;
      this->m_fadeAnimSESelector.m_number = v5;
      this->m_fadeAnimSESelector.m_bAnimation = 0;
    }
    else
    {
      this->m_bError = 1;
    }
  }
}

char __fastcall BattleHud::isDetermineLoadingFiles(BattleHud *this)
{
  __int64 v3; // rbx
  BattleHudGauge **m_pGauges; // rdi
  BattleHudResources *m_pResources; // rbx
  BattleHudRenderer *m_pRenderer; // rdi

  if ( this->isError(&this->ErrorChecker) || this->m_bResoucesActived || !this->m_bInitialize )
    return 0;
  if ( BattleHudResources::isDetermineLoadingFiles(this->m_pResources) )
    return 1;
  v3 = 0i64;
  m_pGauges = this->m_pGauges;
  this->m_bResoucesActived = 1;
  do
  {
    if ( BattleHudGauge::isDetermineLoadingFiles(*m_pGauges) )
      return 1;
    ++v3;
    ++m_pGauges;
  }
  while ( v3 < 2 );
  m_pResources = this->m_pResources;
  m_pRenderer = this->m_pRenderer;
  if ( m_pResources
    && !m_pResources->isError(this->m_pResources)
    && m_pResources->m_pCommons
    && !m_pResources->m_bLoading )
  {
    m_pRenderer->m_pResources = m_pResources;
    BattleHudResources::strationImagesByDrawHelper(m_pResources, m_pRenderer);
  }
  BattleHudGauge::updateResources(this->m_pGauges[0], this->m_pRenderer);
  BattleHudGauge::updateResources(this->m_pGauges[1], this->m_pRenderer);
  return 0;
}

void __fastcall BattleHud::renderReplayDescription(BattleHud *this, float px, float py)
{
  float v4; // xmm6_4

  v4 = fminf(this->m_fadeAnimReplaySystem.m_number, this->m_fadeAnimReplayUser.m_number);
  if ( this->m_bReplayDescriptionVisibled
    && v4 > 0.0
    && !this->isError(&this->ErrorChecker)
    && this->m_bInitialize
    && this->m_bResoucesActived )
  {
    BattleHudRenderer::renderReplayDescription(this->m_pRenderer, (int)(float)(px + 74.0), (int)(float)(py + 715.0), v4);
  }
}

void __fastcall BattleHud::setOnlineUserCharacterSymbol(BattleHud *this, PLAYER_ID playerID)
{
  float v4; // xmm1_4
  float m_min; // xmm0_4

  if ( !this->isError(&this->ErrorChecker) && this->m_bInitialize && !this->m_userCharacterSymbol.bUsed )
  {
    *(_QWORD *)&this->m_userCharacterSymbol.x = 0i64;
    *(_WORD *)&this->m_userCharacterSymbol.bEnabled = 257;
    this->m_userCharacterSymbol.playerID = playerID;
    v4 = fminf(1.0, this->m_userCharacterSymbol.alpha.m_max);
    m_min = this->m_userCharacterSymbol.alpha.m_min;
    if ( m_min <= v4 )
      m_min = v4;
    this->m_userCharacterSymbol.alpha.m_number = m_min;
    this->m_userCharacterSymbol.alpha.m_bAnimation = 0;
  }
}

void __fastcall BattleHud::setTimerCount(BattleHud *this, int time)
{
  int m_timer; // esi
  __int64 v5; // rbx
  char *v6; // rax
  __int64 v7; // rdx
  extension::SoundObject o; // [rsp+40h] [rbp+8h] BYREF

  if ( !this->isError(&this->ErrorChecker) && this->m_bInitialize )
  {
    m_timer = this->m_timer;
    if ( time >= 99 )
      time = 99;
    if ( time <= 0 )
      time = 0;
    this->m_timer = time;
    if ( m_timer != time && time <= 10 )
    {
      v5 = *(_QWORD *)&AppMain::pApp;
      v6 = (char *)operator new(0x60ui64);
      *(_QWORD *)v6 = 1i64;
      *((_WORD *)v6 + 4) = 1;
      *(_QWORD *)(v6 + 12) = 0i64;
      *(_QWORD *)(v6 + 20) = 0i64;
      *((_DWORD *)v6 + 7) = 1120403456;
      *((_QWORD *)v6 + 11) = 0i64;
      o.m_runtimeEffector.m_ptr = (extension::exsound_detail::RuntimeEffector *)v6;
      if ( v5 != -2196904 )
        extension::SoundList::playSEByName((extension::SoundList *)(v5 + 2196904), &o, &s_soundIndex.m_keys[183], 0i64);
      extension::RefCountablePtr<extension::exsound_detail::RuntimeEffector>::~RefCountablePtr<extension::exsound_detail::RuntimeEffector>(
        &o.m_runtimeEffector,
        v7);
    }
    if ( m_timer != this->m_timer )
      this->m_timerAnimationFrame = 0.0;
  }
}

void __fastcall BattleHud::setVisibleFlags(BattleHud *this, int bitFlgs)
{
  if ( !this->isError(&this->ErrorChecker) && this->m_bInitialize )
    this->m_visibleFlags = bitFlgs;
}

void __fastcall BattleHud::setupBattleParams(BattleHud *this, ActionSystem *actionSystem)
{
  BattleSystem::BattleController *v4; // r14
  BattleSystem::BattleController *v5; // rax
  BattleHudGauge **m_pGauges; // r8
  int *p_iBattleMemberIndex; // r9
  __int64 v8; // r10
  int v9; // ecx
  BattleHudGauge *v10; // rdx
  int v11; // er15
  BattleHudGauge **v12; // rsi
  int *p_iExPower; // r13
  BattleHud::PlayerStatusPrev *m_playerStatusPrev; // r12
  signed __int64 v15; // rbx
  int *v16; // rax
  _DWORD *v17; // rdi
  int v18; // ebx
  int v19; // eax
  BattleHudGauge *v20; // rcx
  float v21; // xmm1_4
  int v22; // ebx
  int v23; // eax
  BattleHudGauge *v24; // rcx
  int v25; // ebx
  int v26; // eax
  int v27; // ebx
  BattleHudGauge *v28; // rax
  BattleHudGauge *v29; // rcx
  bool v30; // zf
  BattleHudGauge *v31; // rax
  BattleHudGauge **v32; // r12
  __int64 v33; // rbp
  GAME_MODE v34; // ecx
  int m_StoryWinCount; // ebx
  int v36; // ebx
  ErrorChecker *v37; // rdi
  int v38; // eax
  GameDataInfo *v39; // rcx
  unsigned int v40; // edx
  int v41; // ecx
  unsigned int v42; // edx
  unsigned int v43; // edx
  BattleHudNico2Chat *m_pNico2Chat; // rcx
  GameDataInfo *Instance; // [rsp+20h] [rbp-58h]
  signed __int64 v47; // [rsp+88h] [rbp+10h]
  BattleSystem::BattleController *v48; // [rsp+90h] [rbp+18h]
  int *p_iRoundSetCount; // [rsp+90h] [rbp+18h]

  if ( this->isError(&this->ErrorChecker) || !this->m_bInitialize )
    return;
  v4 = BattleSystem::BattleController::instance;
  if ( !BattleSystem::BattleController::instance )
  {
    v48 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v48);
    v4 = v5;
    BattleSystem::BattleController::instance = v5;
  }
  Instance = GameDataInfo::getInstance();
  m_pGauges = this->m_pGauges;
  p_iBattleMemberIndex = &v4->playerInfo[0].iBattleMemberIndex;
  v8 = 2i64;
  do
  {
    v9 = *p_iBattleMemberIndex;
    v10 = *m_pGauges;
    v10->m_topOrderIndex = *p_iBattleMemberIndex;
    v10->m_memberInfos[0].bAlive = v10->m_memberInfos[0].orderIndex >= v9;
    v10->m_memberInfos[1].bAlive = v10->m_memberInfos[1].orderIndex >= v9;
    v10->m_memberInfos[2].bAlive = v10->m_memberInfos[2].orderIndex >= v9;
    ++m_pGauges;
    p_iBattleMemberIndex += 42;
    --v8;
  }
  while ( v8 );
  v11 = 0;
  v12 = this->m_pGauges;
  p_iRoundSetCount = &v4->playerInfo[0].iRoundSetCount;
  p_iExPower = &this->m_playerStatusPrev[0].iExPower;
  m_playerStatusPrev = this->m_playerStatusPrev;
  v15 = (char *)actionSystem - (char *)this;
  v47 = v15;
  v16 = &v4->playerInfo[0].iRoundSetCount;
  do
  {
    if ( (unsigned int)v11 <= 1 )
    {
      v17 = *(BattleHudGauge **)((char *)v12 + v15 + 237088);
      if ( v17 )
      {
        *(_QWORD *)&m_playerStatusPrev->iVital = 0i64;
        *(_QWORD *)&m_playerStatusPrev->iExPowerMax = 0i64;
        *(_QWORD *)&m_playerStatusPrev->iGuardPower = 0i64;
        *(_QWORD *)&m_playerStatusPrev->iCombo = 0i64;
        *(_QWORD *)&m_playerStatusPrev->bClimaxMode = 0i64;
        *(_QWORD *)&m_playerStatusPrev->bComboDamage = 0i64;
        *(p_iExPower - 1) = (*(__int64 (__fastcall **)(_DWORD *, BattleHudGauge *, BattleHudGauge **, int *))(*(_QWORD *)v17 + 3408i64))(
                              v17,
                              v10,
                              m_pGauges,
                              p_iBattleMemberIndex);
        *p_iExPower = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v17 + 3424i64))(v17);
        p_iExPower[1] = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v17 + 3480i64))(v17);
        p_iExPower[2] = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v17 + 3432i64))(v17);
        p_iExPower[3] = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v17 + 3440i64))(v17);
        p_iExPower[4] = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v17 + 3448i64))(v17);
        p_iExPower[5] = v17[305];
        p_iExPower[6] = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v17 + 3512i64))(v17);
        *(_QWORD *)((char *)p_iExPower + 29) = 0i64;
        *((_BYTE *)p_iExPower + 28) = 0;
        *(_WORD *)((char *)p_iExPower + 37) = 0;
        p_iExPower[10] = 0;
        v18 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v17 + 3408i64))(v17);
        v19 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v17 + 3456i64))(v17);
        v20 = *v12;
        v21 = (float)v18 / (float)v19;
        v20->m_hpRateRed = v21;
        v20->m_hpRateRedStart = v21;
        v20->m_hpRate = v21;
        v20->m_hpRedSpeed = 0.0;
        v22 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v17 + 3440i64))(v17);
        v23 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v17 + 3464i64))(v17);
        v24 = *v12;
        v24->m_guardRate = (float)v22 / (float)v23;
        v24->m_bGuardDanger = v22 <= 200;
        if ( v22 <= 200 )
          v24->m_guardAnimationFrame = 0.0;
        v25 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v17 + 3424i64))(v17);
        v26 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v17 + 3480i64))(v17);
        BattleHudGauge::setPower(*v12, v26, v25, 0);
        v27 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v17 + 3448i64))(v17);
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v17 + 3472i64))(v17);
        v28 = *v12;
        v28->m_bStunDanger = v27 <= 200;
        if ( !v28->m_bStunEnableAnimation && v27 <= 200 )
        {
          v28->m_bStunEnableAnimation = 1;
          v28->m_stunAnimationCounter = 0.0;
        }
        v29 = *v12;
        v29->m_bVisibleClimaxGauge = 0;
        BattleHudGauge::setPower(v29, v29->m_powerMax, v29->m_power, 1);
        if ( v4->battleInfo.battleMode == TEAM || v4->battleInfo.battleMode == TRAINING )
        {
          v15 = v47;
        }
        else
        {
          v15 = v47;
          v30 = !BattleSystem::BattleController::IsMissionMode(v4);
          v16 = p_iRoundSetCount;
          if ( !v30 )
            goto LABEL_21;
          v10 = (BattleHudGauge *)(unsigned int)*p_iRoundSetCount;
          v31 = *v12;
          v31->m_setCount = v4->battleInfo.iMaxRoundWinCount;
          v31->m_setWinCount = (int)v10;
        }
        v16 = p_iRoundSetCount;
      }
    }
LABEL_21:
    ++v11;
    ++m_playerStatusPrev;
    ++v12;
    v16 += 42;
    p_iRoundSetCount = v16;
    p_iExPower += 12;
  }
  while ( v11 < 2 );
  this->m_appearanceAnimationParams.bPlaying = 0;
  v32 = this->m_pGauges;
  v33 = 2i64;
  do
  {
    BattleHudGauge::roundInit(*v32++);
    --v33;
  }
  while ( v33 );
  *(_QWORD *)this->m_playerInfo.versus.bPlayerCpu = 0i64;
  *(_QWORD *)&this->m_playerInfo.versus.winCount[1] = 0i64;
  this->m_playerInfo.suvival.winCount = 2068357982;
  this->m_playerInfo.versus.winCount[0] = 2068357982;
  this->m_playerInfo.versus.winCount[1] = 2068357982;
  v34 = Instance->m_GameMode[Instance->m_GameModeIndex];
  switch ( v34 )
  {
    case GAME_MODE_STORY:
      m_StoryWinCount = Instance->m_StoryWinCount;
      goto LABEL_26;
    case GAME_MODE_VERSUS:
      this->m_playerInfo.versus.bPlayerCpu[0] = v4->playerInfo[0].playerType == CROUCH;
      this->m_playerInfo.versus.winCount[0] = v4->playerInfo[0].iStraightWin;
      this->m_playerInfo.versus.bPlayerCpu[1] = v4->playerInfo[1].playerType == CROUCH;
      this->m_playerInfo.versus.winCount[1] = v4->playerInfo[1].iStraightWin;
      goto LABEL_42;
    case GAME_MODE_MISSION_SURVIVAL:
      if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *(_DWORD *)(*(_QWORD *)NtCurrentTeb()->Reserved1[11]
                                                                                + 40i64) )
      {
        Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
        if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
        {
          GameDataInfo::GameDataInfo(v39);
          Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
        }
      }
      v40 = `GameDataInfo::getInstance'::`2'::instance.m_SurvivalWinCount ^ 0x7B48A35E ^ (LOWORD(`GameDataInfo::getInstance'::`2'::instance.m_SurvivalWinCount) ^ 0xA35E ^ (unsigned __int16)((`GameDataInfo::getInstance'::`2'::instance.m_SurvivalWinCount ^ 0x7B48A35Eu) >> 14)) & 0xCCCC ^ (((LOWORD(`GameDataInfo::getInstance'::`2'::instance.m_SurvivalWinCount) ^ 0xA35E ^ (unsigned __int16)((`GameDataInfo::getInstance'::`2'::instance.m_SurvivalWinCount ^ 0x7B48A35Eu) >> 14)) & 0xCCCC) << 14);
      v41 = (v40 ^ (v40 >> 7)) & 0x550055 ^ v40 ^ (((v40 ^ (v40 >> 7)) & 0x550055) << 7);
      v42 = (v41 ^ (v41 >> 7)) & 0x550055 ^ v41 ^ (((v41 ^ (v41 >> 7)) & 0x550055) << 7);
      this->m_playerInfo.suvival.winCount = v42 ^ ((unsigned __int16)v42 ^ (unsigned __int16)(v42 >> 14)) & 0xCCCC ^ ((((unsigned __int16)v42 ^ (unsigned __int16)(v42 >> 14)) & 0xCCCC) << 14) ^ 0x7B48A35E;
LABEL_42:
      v37 = &this->ErrorChecker;
      break;
    case GAME_MODE_MISSION_TIMEATTACK:
      v43 = Instance->m_SurvivalWinCount ^ 0x7B48A35E ^ (LOWORD(Instance->m_SurvivalWinCount) ^ 0xA35E ^ (unsigned __int16)((Instance->m_SurvivalWinCount ^ 0x7B48A35Eu) >> 14)) & 0xCCCC ^ (((LOWORD(Instance->m_SurvivalWinCount) ^ 0xA35E ^ (unsigned __int16)((Instance->m_SurvivalWinCount ^ 0x7B48A35Eu) >> 14)) & 0xCCCC) << 14);
      m_StoryWinCount = (v43 ^ (v43 >> 7)) & 0x550055 ^ v43 ^ (((v43 ^ (v43 >> 7)) & 0x550055) << 7);
LABEL_26:
      v36 = m_StoryWinCount + 1;
      v37 = &this->ErrorChecker;
      if ( !this->isError(&this->ErrorChecker) && this->m_bInitialize )
      {
        if ( v36 < 0 )
          v36 = 0;
        v38 = 99;
        if ( v36 < 99 )
          v38 = v36;
        this->m_stageNo = v38;
      }
      break;
    default:
      goto LABEL_42;
  }
  if ( !v37->isError(v37) && this->m_bInitialize && this->m_playerInfoType == Online )
  {
    m_pNico2Chat = this->m_pNico2Chat;
    if ( m_pNico2Chat )
      BattleHudNico2Chat::clear(m_pNico2Chat);
  }
}

void __fastcall BattleHud::setupOnlineTeamMember(
        BattleHud *this,
        __int64 roomIndex,
        PLAYER_ID playerID,
        int orderIndex,
        unsigned __int64 onlineID,
        int titleID,
        int rankID,
        int battleWins)
{
  __int64 v9; // rsi

  v9 = playerID;
  if ( !((__int64 (__fastcall *)(ErrorChecker *, __int64))this->isError)(&this->ErrorChecker, roomIndex)
    && this->m_bInitialize
    && (unsigned int)v9 <= 1
    && (unsigned int)orderIndex <= 2 )
  {
    BattleHudGauge::setupMemberOnlineParams(this->m_pGauges[v9], orderIndex, onlineID, titleID, rankID, battleWins);
  }
}

void __fastcall BattleHud::setupOnlineTeamMember(
        BattleHud *this,
        __int64 roomIndex,
        PLAYER_ID playerID,
        unsigned __int64 onlineID,
        int titleID,
        int rankID,
        int battleWins)
{
  __int64 v8; // rdi

  v8 = playerID;
  if ( !((__int64 (__fastcall *)(ErrorChecker *, __int64))this->isError)(&this->ErrorChecker, roomIndex)
    && this->m_bInitialize
    && (unsigned int)v8 <= 1 )
  {
    BattleHudGauge::setupOnlineParams(this->m_pGauges[v8], onlineID, titleID, rankID, battleWins);
  }
}

void __fastcall BattleHud::update(BattleHud *this, ActionSystem *actionSystem, float advanceFrame)
{
  ActionSystem *v4; // r15
  BattleHud *v5; // rdi
  BattleHudGauge **m_pGauges; // rbx
  __int64 v7; // rsi
  char v8; // bp
  ActorChara *v9; // r13
  int i; // ebx
  ActorChara *v11; // rcx
  BattleSystem::BattleController *v12; // rax
  int v13; // er12
  __int64 v14; // rdx
  int v15; // eax
  BattleHudGauge *v16; // rsi
  ActorChara *v17; // r14
  __int64 v18; // rbp
  int iCombo; // ebx
  __int64 v20; // rdx
  __int64 v21; // r8
  int iDamageSkillType; // er15
  int v23; // eax
  float m_hpRate; // xmm2_4
  float v25; // xmm1_4
  int v26; // eax
  __int64 v27; // r9
  int v28; // eax
  int v29; // ebx
  int v30; // ecx
  BattleEventHandler *Instance; // rsi
  unsigned int v32; // er15
  int v33; // er12
  int battleCharaNo; // ebx
  CharaProjectData *v35; // r13
  int CharaDataIndex; // eax
  int iBaseCharaID; // ecx
  int v38; // ebx
  CharaProjectData *v39; // r13
  int v40; // eax
  int v41; // eax
  BattleEventHandler::Listener **Myfirst; // rbx
  int v43; // ebx
  CharaProjectData *v44; // r15
  int v45; // eax
  int v46; // eax
  int v47; // ebx
  CharaProjectData *v48; // r15
  int v49; // eax
  int v50; // eax
  BattleEventHandler::Listener **j; // rbx
  int v52; // ebx
  CharaProjectData *v53; // r15
  int v54; // eax
  int v55; // eax
  int v56; // ebx
  CharaProjectData *v57; // r15
  int v58; // eax
  int v59; // eax
  BattleEventHandler::Listener **k; // rbx
  BattleEventHandler::Listener **m; // rbx
  float m_power; // xmm2_4
  float v63; // xmm0_4
  float m_min; // xmm2_4
  bool v65; // cf
  float v66; // xmm2_4
  float v67; // xmm0_4
  float m_max; // xmm1_4
  bool v69; // cf
  bool v70; // [rsp+40h] [rbp-158h]
  bool v71; // [rsp+41h] [rbp-157h]
  bool v72; // [rsp+42h] [rbp-156h]
  bool v73; // [rsp+43h] [rbp-155h]
  bool v74; // [rsp+44h] [rbp-154h]
  bool v75; // [rsp+45h] [rbp-153h]
  bool v76; // [rsp+46h] [rbp-152h]
  bool v77; // [rsp+47h] [rbp-151h]
  bool v78; // [rsp+48h] [rbp-150h]
  bool v79; // [rsp+49h] [rbp-14Fh]
  bool v80; // [rsp+4Ah] [rbp-14Eh]
  char v81; // [rsp+4Bh] [rbp-14Dh]
  unsigned int v82; // [rsp+4Ch] [rbp-14Ch]
  int v83; // [rsp+50h] [rbp-148h]
  int power; // [rsp+54h] [rbp-144h]
  int v85; // [rsp+58h] [rbp-140h]
  int v86; // [rsp+5Ch] [rbp-13Ch]
  int combo; // [rsp+60h] [rbp-138h]
  CharaAttackData::SKILL_TYPE::ID v88; // [rsp+64h] [rbp-134h]
  BattleSystem::BattleController *v89; // [rsp+68h] [rbp-130h]
  int v90; // [rsp+70h] [rbp-128h]
  int v91; // [rsp+74h] [rbp-124h]
  ActorChara *v92; // [rsp+78h] [rbp-120h]
  int v93; // [rsp+80h] [rbp-118h]
  __int64 v94; // [rsp+88h] [rbp-110h]
  __int64 v95; // [rsp+90h] [rbp-108h]
  BattleSystem::BattleController *v96; // [rsp+98h] [rbp-100h]
  __int64 v97; // [rsp+98h] [rbp-100h]
  OGLVec3 v100; // [rsp+B8h] [rbp-E0h] BYREF
  OGLVec3 v101; // [rsp+C4h] [rbp-D4h] BYREF
  OGLVec3 v102; // [rsp+D0h] [rbp-C8h] BYREF
  OGLVec3 v103; // [rsp+DCh] [rbp-BCh] BYREF
  OGLVec3 v104; // [rsp+E8h] [rbp-B0h] BYREF
  OGLVec3 v105; // [rsp+F4h] [rbp-A4h] BYREF
  int v106[4]; // [rsp+100h] [rbp-98h] BYREF
  int v107[4]; // [rsp+110h] [rbp-88h] BYREF
  int v108[4]; // [rsp+120h] [rbp-78h] BYREF

  v4 = actionSystem;
  v5 = this;
  if ( this->isError(&this->ErrorChecker) || !v5->m_bInitialize )
    return;
  v5->m_animationFrame = advanceFrame + v5->m_animationFrame;
  v5->m_timerAnimationFrame = advanceFrame + v5->m_timerAnimationFrame;
  m_pGauges = v5->m_pGauges;
  v7 = 2i64;
  do
  {
    BattleHudGauge::update(*m_pGauges++, advanceFrame);
    --v7;
  }
  while ( v7 );
  v8 = 0;
  v9 = 0i64;
  for ( i = 0; i < 2; ++i )
  {
    v11 = v4->pPlayer[i != 0];
    v8 |= v11->GetVital(v11) == 0;
  }
  v81 = v8;
  v89 = BattleSystem::BattleController::instance;
  if ( !BattleSystem::BattleController::instance )
  {
    v96 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v96);
    v89 = v12;
    BattleSystem::BattleController::instance = v12;
  }
  v13 = 0;
  v82 = 0;
  v14 = 0i64;
  v97 = 0i64;
  do
  {
    v15 = v13 ^ 1;
    v16 = v5->m_pGauges[v14];
    v95 = v14;
    v94 = v13 ^ 1;
    if ( (unsigned int)v13 > 1 )
      v17 = 0i64;
    else
      v17 = v4->pPlayer[v14];
    if ( (unsigned int)v15 <= 1 )
      v9 = v4->pPlayer[v15];
    v92 = v9;
    if ( v16 && v17 && v9 )
    {
      v16->m_bPlaySoundFlag = v8 == 0;
      v18 = v14;
      v83 = v17->GetVital(v17);
      power = v17->GetExPower(v17);
      v91 = v17->GetMaxExPower(v17);
      v93 = v17->GetClimaxTime(v17);
      v85 = v17->GetGuardPower(v17);
      v86 = v17->GetStunPower(v17);
      combo = v9->damageInfo.iCombo;
      v90 = v17->GetDrinkCount(v17);
      v72 = v9->IsCounterDamaged(v9);
      v73 = v17->IsGuardCrash(v17);
      v71 = v17->IsStun(v17);
      v74 = v17->IsSuperCancel(v17);
      v75 = v17->IsAdvancedCancel(v17);
      v77 = v17->IsReversalMove(v17);
      v78 = v17->IsClimaxMode(v17);
      iCombo = v17->damageInfo.iCombo;
      v79 = iCombo != 0;
      v76 = v17->IsClimaxCancel(v17);
      v70 = v17->IsDamaged(v17);
      v80 = v17->IsBound(v17);
      iDamageSkillType = v17->iDamageSkillType;
      v88 = iDamageSkillType;
      if ( !v70 )
      {
        if ( !combo )
          iDamageSkillType = 0;
        v88 = iDamageSkillType;
      }
      if ( v5->m_playerStatusPrev[v18].iVital != v83 )
      {
        v23 = v17->GetMaxVital(v17);
        if ( v16->m_hpRedState != STATE_HPREDBAR_STOP || (m_hpRate = v16->m_hpRate, m_hpRate >= v16->m_hpRateRed) )
        {
          v16->m_hpRedState = STATE_HPREDBAR_STOP;
          m_hpRate = v16->m_hpRate;
          v16->m_hpRateRed = m_hpRate;
          v16->m_hpRateRedStart = m_hpRate;
        }
        v25 = (float)v83 / (float)v23;
        v16->m_hpRate = v25;
        if ( m_hpRate > v25 )
          v16->m_hpLostAnimationCounter = 8.0;
        if ( iCombo )
          v16->m_hpGuardDamageTimer = 0.0;
        else
          v16->m_hpGuardDamageTimer = 6.0;
      }
      if ( v5->m_playerStatusPrev[v18].iExPower != power || v5->m_playerStatusPrev[v18].iExPowerMax != v91 )
      {
        v26 = v17->GetMaxExPower(v17);
        BattleHudGauge::setPower(v16, v26, power, 1);
      }
      if ( v5->m_playerStatusPrev[v18].iGuardPower != v85 )
      {
        v16->m_guardRate = (float)v85 / (float)v17->GetMaxGuardPower(v17);
        v16->m_bGuardDanger = v85 <= 200;
        if ( v85 <= 200 )
          v16->m_guardAnimationFrame = 0.0;
      }
      if ( v5->m_playerStatusPrev[v18].iStunPower == v86
        || (v17->GetMaxStunPower(v17), v16->m_bStunDanger = v86 <= 200, v16->m_bStunEnableAnimation) )
      {
        v27 = 0i64;
      }
      else
      {
        v27 = 0i64;
        if ( v86 <= 200 )
        {
          v16->m_bStunEnableAnimation = 1;
          v16->m_stunAnimationCounter = 0.0;
        }
      }
      if ( v5->m_playerStatusPrev[v18].iCombo != combo )
        BattleHudGauge::changeComboCount(v16, combo);
      if ( v5->m_playerStatusPrev[v18].bComboDamage != v79 && !iCombo && v16->m_hpRate != v16->m_hpRateRed )
      {
        v16->m_hpRedState = STATE_HPREDBAR_PLAY;
        v16->m_hpRedSpeed = 0.050000001;
      }
      if ( v5->m_playerStatusPrev[v18].iDrink != v90 )
      {
        v28 = v90;
        if ( v90 < 0 )
          v28 = v27;
        v16->m_drinkCount = v28;
      }
      if ( v5->m_playerStatusPrev[v18].bClimaxMode != v78 )
      {
        v16->m_bVisibleClimaxGauge = v78;
        if ( !v78 )
        {
          BattleHudGauge::setPower(v16, v16->m_powerMax, v16->m_power, 1);
LABEL_60:
          if ( v5->m_playerStatusPrev[v18].bStun != v71 && v71 )
            BattleHudGauge::setBattleMessage(v16, SYSTEM_MES_STUN);
          if ( v5->m_playerStatusPrev[v18].bGuardCrash != v73 && v73 )
            BattleHudGauge::setBattleMessage(v16, SYSTEM_MES_GUARD_CRASH);
          if ( v5->m_playerStatusPrev[v18].bCounter != v72 && v72 )
            BattleHudGauge::setBattleMessage(v16, SYSTEM_MES_COUNTER);
          if ( v5->m_playerStatusPrev[v18].bSuperCancel != v74 && v74 )
            BattleHudGauge::setBattleMessage(v16, SYSTEM_MES_SUPER_CANCEL);
          if ( v5->m_playerStatusPrev[v18].bAdvancedCancel != v75 && v75 )
            BattleHudGauge::setBattleMessage(v16, SYSTEM_MES_ADVANCED_CANCEL);
          if ( v5->m_playerStatusPrev[v18].bClimaxCancel != v76 && v76 )
            BattleHudGauge::setBattleMessage(v16, SYSTEM_MES_CLIMAX_CANCEL);
          if ( v5->m_playerStatusPrev[v18].bReversal != v77 && v77 )
            BattleHudGauge::setBattleMessage(v16, SYSTEM_MES_REVERSAL);
          Instance = BattleEventHandler::getInstance();
          if ( v70 && iDamageSkillType != v5->m_playerStatusPrev[v18].damageSkillType )
          {
            v32 = -1;
            switch ( v88 )
            {
              case COUNTER_HIT:
              case GUARD_CRASH:
              case REVERSAL:
              case SUPER_CANCEL:
                v32 = 0;
                break;
              case ADVANCED_CANCEL:
                v32 = 1;
                break;
              case CLIMAX_CANCEL:
                v32 = 2;
                break;
              case THROW_ESCAPE:
                v32 = 3;
                break;
              case GUARD_CANCEL:
                v32 = 4;
                break;
              case JUST_GUARD:
                v32 = 5;
                break;
              default:
                break;
            }
            v33 = v17->GetVital(v17);
            battleCharaNo = v89->playerInfo[v94].battleCharaNo;
            v35 = *(CharaProjectData **)(*(_QWORD *)&AppMain::pApp + 10888i64);
            CharaDataIndex = CharaProjectData::GetCharaDataIndex(v35, battleCharaNo);
            if ( CharaDataIndex >= 0 )
            {
              iBaseCharaID = v35->pCharaData[CharaDataIndex].iBaseCharaID;
              if ( iBaseCharaID < 0 )
                iBaseCharaID = battleCharaNo;
            }
            else
            {
              iBaseCharaID = -1;
            }
            v106[0] = iBaseCharaID;
            v106[1] = LODWORD(v92->GetCenterPosition(v92, &v100)->x);
            v38 = v89->playerInfo[v95].battleCharaNo;
            v39 = *(CharaProjectData **)(*(_QWORD *)&AppMain::pApp + 10888i64);
            v40 = CharaProjectData::GetCharaDataIndex(v39, v38);
            if ( v40 >= 0 )
            {
              v41 = v39->pCharaData[v40].iBaseCharaID;
              if ( v41 < 0 )
                v41 = v38;
            }
            else
            {
              v41 = -1;
            }
            v106[2] = v41;
            v106[3] = LODWORD(v17->GetCenterPosition(v17, &v101)->x);
            Myfirst = Instance->m_pListenerList->m_items._Mypair._Myval2._Myfirst;
            if ( Myfirst == Instance->m_pListenerList->m_items._Mypair._Myval2._Mylast )
            {
              v13 = v82;
            }
            else
            {
              do
              {
                (*Myfirst)->OnEventCharacterDamage(
                  *Myfirst,
                  (BattleEventHandler::Listener::SkillType)v32,
                  (PLAYER_ID)v82,
                  0,
                  v33,
                  0,
                  0,
                  (const BattleEventHandler::Listener::CharacterStatus *)v106);
                ++Myfirst;
              }
              while ( Myfirst != Instance->m_pListenerList->m_items._Mypair._Myval2._Mylast );
              v5 = this;
              v13 = v82;
            }
            v9 = v92;
          }
          if ( v17->IsWallHitDamage(v17) )
          {
            v43 = v89->playerInfo[v94].battleCharaNo;
            v44 = *(CharaProjectData **)(*(_QWORD *)&AppMain::pApp + 10888i64);
            v45 = CharaProjectData::GetCharaDataIndex(v44, v43);
            if ( v45 >= 0 )
            {
              v46 = v44->pCharaData[v45].iBaseCharaID;
              if ( v46 < 0 )
                v46 = v43;
            }
            else
            {
              v46 = -1;
            }
            v107[2] = v46;
            v107[3] = LODWORD(v9->GetCenterPosition(v9, &v102)->x);
            v47 = v89->playerInfo[v95].battleCharaNo;
            v48 = *(CharaProjectData **)(*(_QWORD *)&AppMain::pApp + 10888i64);
            v49 = CharaProjectData::GetCharaDataIndex(v48, v47);
            if ( v49 >= 0 )
            {
              v50 = v48->pCharaData[v49].iBaseCharaID;
              if ( v50 < 0 )
                v50 = v47;
            }
            else
            {
              v50 = -1;
            }
            v107[0] = v50;
            v107[1] = LODWORD(v17->GetCenterPosition(v17, &v103)->x);
            for ( j = Instance->m_pListenerList->m_items._Mypair._Myval2._Myfirst;
                  j != Instance->m_pListenerList->m_items._Mypair._Myval2._Mylast;
                  ++j )
            {
              (*j)->OnEventWallHit(*j, (const BattleEventHandler::Listener::CharacterStatus *)v107);
            }
          }
          if ( v17->IsGroundQuakeDamage(v17) )
          {
            v52 = v89->playerInfo[v94].battleCharaNo;
            v53 = *(CharaProjectData **)(*(_QWORD *)&AppMain::pApp + 10888i64);
            v54 = CharaProjectData::GetCharaDataIndex(v53, v52);
            if ( v54 >= 0 )
            {
              v55 = v53->pCharaData[v54].iBaseCharaID;
              if ( v55 < 0 )
                v55 = v52;
            }
            else
            {
              v55 = -1;
            }
            v108[2] = v55;
            v108[3] = LODWORD(v9->GetCenterPosition(v9, &v104)->x);
            v56 = v89->playerInfo[v95].battleCharaNo;
            v57 = *(CharaProjectData **)(*(_QWORD *)&AppMain::pApp + 10888i64);
            v58 = CharaProjectData::GetCharaDataIndex(v57, v56);
            if ( v58 >= 0 )
            {
              v59 = v57->pCharaData[v58].iBaseCharaID;
              if ( v59 < 0 )
                v59 = v56;
            }
            else
            {
              v59 = -1;
            }
            v108[0] = v59;
            v108[1] = LODWORD(v17->GetCenterPosition(v17, &v105)->x);
            for ( k = Instance->m_pListenerList->m_items._Mypair._Myval2._Myfirst;
                  k != Instance->m_pListenerList->m_items._Mypair._Myval2._Mylast;
                  ++k )
            {
              (*k)->OnEventGroundHit(*k, (const BattleEventHandler::Listener::CharacterStatus *)v108);
            }
          }
          if ( v71 && !v5->m_playerStatusPrev[v18].bStun )
          {
            for ( m = Instance->m_pListenerList->m_items._Mypair._Myval2._Myfirst;
                  m != Instance->m_pListenerList->m_items._Mypair._Myval2._Mylast;
                  ++m )
            {
              (*m)->OnEventCharacterStun(*m, (PLAYER_ID)v13, 0i64);
            }
          }
          v5->m_playerStatusPrev[v18].iVital = v83;
          v5->m_playerStatusPrev[v18].iExPower = power;
          v5->m_playerStatusPrev[v18].iExPowerMax = v91;
          v5->m_playerStatusPrev[v18].iClimaxTime = v93;
          v5->m_playerStatusPrev[v18].iGuardPower = v85;
          v5->m_playerStatusPrev[v18].iStunPower = v86;
          v5->m_playerStatusPrev[v18].iCombo = combo;
          v5->m_playerStatusPrev[v18].iDrink = v90;
          v5->m_playerStatusPrev[v18].bCounter = v72;
          v5->m_playerStatusPrev[v18].bGuardCrash = v73;
          v5->m_playerStatusPrev[v18].bStun = v71;
          v5->m_playerStatusPrev[v18].bSuperCancel = v74;
          v5->m_playerStatusPrev[v18].bAdvancedCancel = v75;
          v5->m_playerStatusPrev[v18].bClimaxCancel = v76;
          v5->m_playerStatusPrev[v18].bReversal = v77;
          v5->m_playerStatusPrev[v18].bClimaxMode = v78;
          v5->m_playerStatusPrev[v18].bComboDamage = v79;
          v5->m_playerStatusPrev[v18].bDamage = v70;
          v5->m_playerStatusPrev[v18].bBoundDamage = v80;
          v5->m_playerStatusPrev[v18].damageSkillType = v88;
          v14 = v97;
          v4 = actionSystem;
          v8 = v81;
          goto LABEL_130;
        }
        v16->m_maxModeStartAnimationCounter = 12.0;
        v16->m_climaxAnimationCounter = v27;
        v16->m_bPowerMax = 0;
      }
      if ( v78 )
      {
        v29 = ((__int64 (__fastcall *)(ActorChara *, __int64, __int64, __int64))v17->GetClimaxTime)(v17, v20, v21, v27);
        v30 = v17->GetMaxClimaxTime(v17);
        v16->m_climaxRate = (float)v29 / (float)v30;
        if ( v30 > 1000 )
          v16->m_climaxGaugeSize = (v30 > 1250) + 1;
        else
          v16->m_climaxGaugeSize = CLIMAX_GAUGE_SIZE_S;
      }
      goto LABEL_60;
    }
LABEL_130:
    v82 = ++v13;
    v97 = ++v14;
    v9 = 0i64;
  }
  while ( v13 < 2 );
  BattleHud::updateAppearanceAnimation(v5, advanceFrame);
  if ( v5->m_bReplayDescriptionVisibled )
  {
    if ( v5->m_fadeAnimReplayUser.m_bAnimation )
    {
      m_power = v5->m_fadeAnimReplayUser.m_power;
      if ( m_power != 0.0 )
      {
        v63 = m_power + v5->m_fadeAnimReplayUser.m_number;
        v5->m_fadeAnimReplayUser.m_number = v63;
        if ( m_power <= 0.0 )
        {
          m_min = v5->m_fadeAnimReplayUser.m_min;
          v65 = m_min < v63;
        }
        else
        {
          m_min = v5->m_fadeAnimReplayUser.m_max;
          v65 = v63 < m_min;
        }
        if ( !v65 )
        {
          v5->m_fadeAnimReplayUser.m_bAnimation = 0;
          v5->m_fadeAnimReplayUser.m_number = m_min;
        }
      }
    }
    if ( v5->m_fadeAnimReplaySystem.m_bAnimation )
    {
      v66 = v5->m_fadeAnimReplaySystem.m_power;
      if ( v66 != 0.0 )
      {
        v67 = v66 + v5->m_fadeAnimReplaySystem.m_number;
        v5->m_fadeAnimReplaySystem.m_number = v67;
        if ( v66 <= 0.0 )
        {
          m_max = v5->m_fadeAnimReplaySystem.m_min;
          v69 = m_max < v67;
        }
        else
        {
          m_max = v5->m_fadeAnimReplaySystem.m_max;
          v69 = v67 < m_max;
        }
        if ( !v69 )
        {
          v5->m_fadeAnimReplaySystem.m_bAnimation = 0;
          v5->m_fadeAnimReplaySystem.m_number = m_max;
        }
      }
    }
  }
  if ( v5->m_appearanceAnimationParams.bPlaying )
  {
    v5->m_gaugeRenderParams.gaugeRenderColor = v5->m_appearanceAnimationParams.gaugeColor;
    v5->m_gaugeRenderParams.barRenderColor = v5->m_appearanceAnimationParams.barColor;
    v5->m_gaugeRenderParams.barLengthRate = v5->m_appearanceAnimationParams.barLength;
  }
  if ( v5->m_playerInfoType == Online )
    BattleHud::updateOnline(v5, advanceFrame);
}

void __fastcall BattleHud::updateAppearanceAnimation(BattleHud *this, float advanceFrame)
{
  float v3; // xmm6_4
  BattleHudGauge *v4; // rax
  BattleHudGauge *v5; // rax
  float v6; // xmm2_4
  float v7; // xmm0_4
  float v8; // xmm2_4
  float v9; // xmm0_4
  float v10; // xmm5_4
  float v11; // xmm3_4

  if ( !this->isError(&this->ErrorChecker)
    && this->m_bInitialize
    && this->m_appearanceAnimationParams.bPlaying
    && advanceFrame > 0.0 )
  {
    v3 = advanceFrame + this->m_appearanceAnimationParams.animationFrame;
    this->m_appearanceAnimationParams.animationFrame = v3;
    if ( v3 >= 0.0 )
    {
      if ( v3 <= 51.0 )
      {
        if ( v3 > 16.0 )
          v6 = *(float *)&FLOAT_1_0;
        else
          v6 = v3 * 0.0625;
        v7 = 1.0 - v6;
        v8 = FLOAT_255_0;
        if ( v7 > 0.0 )
        {
          if ( v7 < 1.0 )
            v9 = (float)((float)((float)(v7 * 255.0) / 255.0) * 255.0) + 0.0;
          else
            v9 = FLOAT_255_0;
        }
        else
        {
          v9 = 0.0;
        }
        v10 = 0.0;
        this->m_appearanceAnimationParams.gaugeColor = ((int)v9 << 24) | 0xC7F2FF;
        if ( v3 >= 21.0 && v3 <= 51.0 )
          v10 = (float)(v3 - 21.0) / 30.0;
        v11 = 1.0 - v10;
        if ( (float)(1.0 - v10) > 0.0 )
        {
          if ( v11 < 1.0 )
            v8 = (float)((float)(1.0
                               - (float)((float)(1.0 - (float)((float)(v11 * 255.0) / 255.0))
                                       * (float)(1.0 - (float)((float)(v11 * 255.0) / 255.0))))
                       * 255.0)
               + 0.0;
        }
        else
        {
          v8 = 0.0;
        }
        this->m_appearanceAnimationParams.barColor = ((int)v8 << 24) | 0xC7F2FF;
        this->m_appearanceAnimationParams.barLength = Tween::easing(0.0, 1.0, v10, OutQuad);
        BattleHud::setVisibleFlags(this, 255);
      }
      else
      {
        this->m_appearanceAnimationParams.bPlaying = 0;
        v4 = this->m_pGauges[0];
        v4->m_bEnabledSpEffects = 1;
        v4->m_animationCounter = 0.0;
        if ( v4->m_bPowerMax )
        {
          v4->m_powerRate = 1.0;
          v4->m_powerMaxStockAnimationCounter = 20.0;
        }
        v5 = this->m_pGauges[1];
        v5->m_bEnabledSpEffects = 1;
        v5->m_animationCounter = 0.0;
        if ( v5->m_bPowerMax )
        {
          v5->m_powerRate = 1.0;
          v5->m_powerMaxStockAnimationCounter = 20.0;
        }
      }
    }
  }
}

void __fastcall BattleHud::updateOnline(BattleHud *this, float advanceFrame)
{
  BattleHudNico2Chat *m_pNico2Chat; // rcx
  float m_descriptVisibleCount; // xmm3_4
  float m_power; // xmm1_4
  float v6; // xmm0_4
  float m_min; // xmm1_4
  bool v8; // cf
  float v9; // xmm1_4
  float v10; // xmm0_4
  float m_max; // xmm1_4
  bool v12; // cf
  float v13; // xmm1_4
  float v14; // xmm0_4
  float v15; // xmm1_4
  bool v16; // cf

  m_pNico2Chat = this->m_pNico2Chat;
  if ( m_pNico2Chat )
    BattleHudNico2Chat::update(m_pNico2Chat, advanceFrame);
  m_descriptVisibleCount = this->m_descriptVisibleCount;
  if ( m_descriptVisibleCount > 0.0 )
    this->m_descriptVisibleCount = fmaxf(0.0, m_descriptVisibleCount - advanceFrame);
  if ( this->m_fadeAnimRoomID.m_bAnimation )
  {
    m_power = this->m_fadeAnimRoomID.m_power;
    if ( m_power != 0.0 )
    {
      v6 = m_power + this->m_fadeAnimRoomID.m_number;
      this->m_fadeAnimRoomID.m_number = v6;
      if ( m_power <= 0.0 )
      {
        m_min = this->m_fadeAnimRoomID.m_min;
        v8 = m_min < v6;
      }
      else
      {
        m_min = this->m_fadeAnimRoomID.m_max;
        v8 = v6 < m_min;
      }
      if ( !v8 )
      {
        this->m_fadeAnimRoomID.m_number = m_min;
        this->m_fadeAnimRoomID.m_bAnimation = 0;
      }
    }
  }
  if ( this->m_fadeAnimSESelector.m_bAnimation )
  {
    v9 = this->m_fadeAnimSESelector.m_power;
    if ( v9 != 0.0 )
    {
      v10 = v9 + this->m_fadeAnimSESelector.m_number;
      this->m_fadeAnimSESelector.m_number = v10;
      if ( v9 <= 0.0 )
      {
        m_max = this->m_fadeAnimSESelector.m_min;
        v12 = m_max < v10;
      }
      else
      {
        m_max = this->m_fadeAnimSESelector.m_max;
        v12 = v10 < m_max;
      }
      if ( !v12 )
      {
        this->m_fadeAnimSESelector.m_number = m_max;
        this->m_fadeAnimSESelector.m_bAnimation = 0;
      }
    }
  }
  if ( this->m_userCharacterSymbol.bEnabled )
  {
    if ( this->m_userCharacterSymbol.alpha.m_bAnimation )
    {
      v13 = this->m_userCharacterSymbol.alpha.m_power;
      if ( v13 != 0.0 )
      {
        v14 = v13 + this->m_userCharacterSymbol.alpha.m_number;
        this->m_userCharacterSymbol.alpha.m_number = v14;
        if ( v13 <= 0.0 )
        {
          v15 = this->m_userCharacterSymbol.alpha.m_min;
          v16 = v15 < v14;
        }
        else
        {
          v15 = this->m_userCharacterSymbol.alpha.m_max;
          v16 = v14 < v15;
        }
        if ( !v16 )
        {
          this->m_userCharacterSymbol.alpha.m_number = v15;
          this->m_userCharacterSymbol.alpha.m_bAnimation = 0;
        }
      }
    }
    this->m_userCharacterSymbol.bEnabled = this->m_userCharacterSymbol.alpha.m_number > 0.0;
  }
}

