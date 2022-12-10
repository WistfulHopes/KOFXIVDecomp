#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshkey.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixstate.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_gradients.h"
#include "dev/silverware/git/sdk/util/agservice.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steamclientpublic.h"
#include "dev/silverware/git/sdk/agsemaphore.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_rasterizer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_viewport.h"
#include "dev/silverware/git/sdk/agthreadpool.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/matrix4unaligned.h"
#include "dev/silverware/git/sdk/agsemaphore.inl"
#include "dev/silverware/git/sdk/agconditionvariable.h"
#include "dev/silverware/git/sdk/agrectangle.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/quat_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/condition_variable"
#include "dev/kof/master/development/source/baseproject/jni/game/player/effect/actoreffect.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actorobject.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/jobmanager.h"
#include "dev/kof/master/development/source/ps4project/baseproject/pcutil/pcdummy.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/savedata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_drawableimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/refcountable.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actoroption.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hal.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_buffer.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/cameracheck.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_characterdef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/freecameracheck.h"
#include "dev/silverware/git/sdk/agscopedlock.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleonline.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/matchingsystem.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/operationmapper.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/randommt.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filters.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/savedatadefine.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filterparams.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_sse.h"
#include "dev/silverware/git/sdk/agreferencecountinl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphqueue.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_types.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdata/effectappdata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_font.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/resourcemanager.h"
#include "dev/kof/master/development/source/baseproject/jni/game/cpuseq/battlecpu.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/time.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/type_traits"
#include "dev/kof/master/development/source/baseproject/jni/game/cpuseq/sequencecontroller.h"
#include "dev/silverware/git/sdk/agmovieplayer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessdefs.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/libcommon.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstddef"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatapacked.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_pathdatapacker.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_prefightfaceoff.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/translate_table.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_linebuffer.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/shared_lua_context.h"
#include "dev/kof/master/development/source/baseproject/jni/game/system/battlesysteminfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_highlight.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_profiler.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector2unaligned.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_states.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/tga_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_statebag.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/mediamanager.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/hidpad/hidpadsystem.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/combomissionjudge.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/soundutil.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_functions.h"
#include "dev/kof/master/development/source/baseproject/jni/game/network/chkdiscononlinesv.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_simplemeshcache.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/audiopresenter.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/fontprovider/render_fontproviderwinapi.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaprojectdataformat.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/mutex"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmodel.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/algorithm"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/chrono"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charabasestatusformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_bundle.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/limits"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_new.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/inputkeyrecord.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglcurve.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_typeinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloatmp.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_hashkey.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapemeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/jpeg_imagefile.h"
#include "program files (x86)/windows kits/8.1/include/shared/guiddef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/silverware/git/sdk/system/agsysteminfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlecall/battlecall.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treetext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefileutil.h"
#include "dev/silverware/git/sdk/agreferenceinl.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_debug.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_docview.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xutility"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/bodypush.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_range.h"
#include "program files (x86)/windows kits/8.1/include/shared/stralign.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/utility"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglsprite.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "dev/kof/master/development/source/baseproject/jni/game/network/netmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "dev/silverware/git/sdk/agmemorystream.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/iosfwd"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_hash.h"
#include "dev/kof/master/development/source/baseproject/jni/game/network/leaderboard.h"
#include "dev/silverware/git/sdk/agmemorypool.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/titlestoragesystem.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/mediasound.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglrender.h"
#include "dev/silverware/git/sdk/input/agcontrollerbuttoncomponent.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_manager.h"
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
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstring"
#include "dev/kof/master/development/source/baseproject/jni/game/util/shaderfxhelper.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/rapper/graphicsopt.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/particledata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shader.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_sgmlparser.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory0"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_context.h"
#include "dev/silverware/git/sdk/3rdparty/steam/isteamhtmlsurface.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/silverware/git/sdk/agpointerinl.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/weapon/actorweapon.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_constants.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exwaitcondition.h"
#include "dev/silverware/git/sdk/agconditionvariable.inl"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/exception"
#include "dev/kof/master/development/source/baseproject/jni/game/system/battlecontroller.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessgen.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treeshape.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessellator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/unordered_map"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actionsystem.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector3unaligned.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_exception.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaactiondataformat.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xhash"
#include "dev/silverware/git/sdk/platforms/pc/system/agpcsysteminfo.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/list"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestage.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charafilebase.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/tkndata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitivebundle.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treecachenode.h"
#include "program files (x86)/windows kits/8.1/include/um/winnt.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treenode.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_loader.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmirror.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/cameramotionpreviewsettings.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/stageprojectdata.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/commanddataformat.h"
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
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestagedatas.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_resource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/boolinvec.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/system_error"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/tkndatas.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/tween.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_stroker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/stdexcept"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/dds_imagefile.h"
#include "dev/silverware/git/sdk/util/agservicecommand.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/asynccharafileload.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/vectormath_aos.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textmeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphparam.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcache.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steam_api_internal.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/tuple"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/hitrectcollection.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcacheconfig.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglshader.h"
#include "dev/silverware/git/sdk/util/agdebugchannels.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hairliner.h"
#include "dev/silverware/git/sdk/util/agperformancecounter.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/debug/logging.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_missiondataloading.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/trainingsetting.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/combomissionattackeventlistener.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charamaterialsettingformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_filterdesc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_styledtext.h"
#include "dev/silverware/git/sdk/agclock.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix3x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_core.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_queue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actorcharabase.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_fontmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitive.h"
#include "dev/silverware/git/sdk/agmutex.inl"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlehud.h"
#include "dev/kof/master/development/source/baseproject/jni/game/define/charabonedefine.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocaddr.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_radixtree.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battleeventhandler.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/colorholder.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdatalistmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_twips.h"
#include "program files (x86)/windows kits/8.1/include/um/winuser.h"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/damagesetting.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectcommon.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_containers.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/string"
#include "dev/silverware/git/sdk/agreferencedobjectinl.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_wwhelper.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steam_api.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic0.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/battleplayerinfo.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/globalheapmemory.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "dev/silverware/git/sdk/agcondition.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/fixmemory.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/mat_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/array"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/easingnumber.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/errorchecker.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actionblackout.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogleffect.h"
#include "dev/kof/master/development/source/ps4project/baseproject/pcutil/pccontrolsmanager.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleonlinewatching.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/input/imesystem.h"
#include "dev/silverware/git/sdk/memory/agallocators.h"
#include "dev/silverware/git/sdk/input/aginputmanager.h"
#include "dev/silverware/git/sdk/agsingleton.h"
#include "dev/silverware/git/sdk/filesystem/agfile.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector4unaligned.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/cpusequencedataformat.h"
#include "dev/silverware/git/sdk/filesystem/agpath.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogllight.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleloading.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/shot/actorshot.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actorchara.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_vertex.h"
#include "dev/silverware/git/sdk/filesystem/agmount.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/commandcheck.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/fontprovider/render_fontproviderhud.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_wstring.h"
#include "dev/silverware/git/sdk/filesystem/agdirectory.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/vecidx_aos.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/restrictringbuffer.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/floatinvec.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/materialshowcontrol.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/ios"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_ps4modelroom.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/moviedatadefine.h"
#include "dev/silverware/git/sdk/3rdparty/steam/matchmakingtypes.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/quat_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocnum"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charahitrectformat.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/floatinvec.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xiosbase"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thread"
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
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/variableheapmemorybase.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_vec64.h"
#include "dev/silverware/git/sdk/agmath.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "dev/silverware/git/sdk/agreferencecount.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/chartdata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/math.h"
#include "dev/silverware/git/sdk/input/agcontroller.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestageresourcecontainer.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/heapmemory.h"
#include "dev/silverware/git/sdk/system/aguser.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestageshader.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actor.h"
#include "dev/silverware/git/sdk/agstring.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charadataunify.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_movie.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/mutex.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_math.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vector"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaattackdataformat.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_operation.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/bitset"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charadamagesettingformat.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/vec_aos.h"
#include "dev/silverware/git/sdk/util/agdelegate.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_screentoworld.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thr/xthread"
#include "dev/kof/master/development/source/baseproject/jni/game/util/syncmenuimage.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/physicalheapmemory.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/map"
#include "dev/kof/master/development/source/baseproject/jni/game/appmain.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/future_asset.h"
#include "dev/silverware/git/sdk/agcondition.inl"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtree"
#include "dev/silverware/git/sdk/agdisplay.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_strokeraa.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_scale9grid.h"
#include "dev/silverware/git/sdk/input/agcontrollercomponent.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/asyncjob.h"
#include "dev/silverware/git/sdk/agpointer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraystaticbuff.h"
#include "dev/silverware/git/sdk/agvector4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/mat_aos.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exlockable.h"
#include "dev/silverware/git/sdk/agvector3.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cxform.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "dev/silverware/git/sdk/agmutex.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/atomic_int.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/atomic"
#include "dev/kof/master/development/source/baseproject/jni/game/util/fix32.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/effect.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/combomissiondataformat.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/sounddata.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/soundgroupdataformat.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/texstring.h"
#include "dev/silverware/git/sdk/system/agusermanager.h"
#include "dev/kof/master/development/source/baseproject/jni/game/network/playtogether.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_bank.h"
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
#include "dev/kof/master/development/source/ps4project/baseproject/extension/asyncjob.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/rapper/graphicsopt.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/image/graphics.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/core/glstate.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/appmain.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogltexture.cpp"

SyncMenuImage::~SyncMenuImage(); // 0x140241BA0
void SyncMenuImage::Dispose(); // 0x140241BC0
void SyncMenuImage::Release(); // 0x140241C40
class extension::UnloadJob<extension::BasicFutureObject<Image,extension::FutureImageOption>,2> :
	extension::ExThread::Runnable,
	extension::AsyncContentConstants,
	extension::FutureObjectSpec
{
public:
	UnloadJob<extension::BasicFutureObject<Image,extension::FutureImageOption>,2>(extension::UnloadJob<extension::BasicFutureObject<Image,extension::FutureImageOption>,2> &);
	UnloadJob<extension::BasicFutureObject<Image,extension::FutureImageOption>,2>(const extension::UnloadJob<extension::BasicFutureObject<Image,extension::FutureImageOption>,2> &);
	UnloadJob<extension::BasicFutureObject<Image,extension::FutureImageOption>,2>(extension::BasicFutureObject<Image,extension::FutureImageOption> *);
	virtual long run();
protected:
	extension::BasicFutureObject<Image,extension::FutureImageOption> m_asset[2]; // 0x18
public:
	virtual ~UnloadJob<extension::BasicFutureObject<Image,extension::FutureImageOption>,2>();
	extension::UnloadJob<extension::BasicFutureObject<Image,extension::FutureImageOption>,2> & operator=(extension::UnloadJob<extension::BasicFutureObject<Image,extension::FutureImageOption>,2> &);
	extension::UnloadJob<extension::BasicFutureObject<Image,extension::FutureImageOption>,2> & operator=(const extension::UnloadJob<extension::BasicFutureObject<Image,extension::FutureImageOption>,2> &);
};
std::piecewise_construct_t std::piecewise_construct; // 0x1408AECC1
bool SyncMenuImage::Load(const ImageDataInfo * pInfo, SyncMenuImage::FADE_MODE mode); // 0x140241DF0
void SyncMenuImage::Update(); // 0x140242090
bool SyncMenuImage::Draw(GraphicsOpt * g, long x, long y, float scale); // 0x1402421B0//decompilation failure at 1408AECC1!
void __fastcall extension::UnloadJob<extension::BasicFutureObject<Image,extension::FutureImageOption>,2>::UnloadJob<extension::BasicFutureObject<Image,extension::FutureImageOption>,2>(
        extension::UnloadJob<extension::BasicFutureObject<Image,extension::FutureImageOption>,2> *this,
        extension::BasicFutureObject<Image,extension::FutureImageOption> *asset)
{
  __int64 v4; // rsi
  extension::RefCountablePtr<extension::BasicFutureObject<Image,extension::FutureImageOption>::Body> *p_m_body; // rbx
  signed __int64 v6; // rdi
  extension::BasicFutureObject<Image,extension::FutureImageOption>::Body *v7; // rdx
  extension::BasicFutureObject<Image,extension::FutureImageOption>::Body *m_ptr; // rcx

  this->__vftable = (extension::UnloadJob<extension::BasicFutureObject<Image,extension::FutureImageOption>,2>_vtbl *)&AgSimpleThreadHost::`vftable';
  this->m_abort = 0;
  this->m_running = 1;
  this->__vftable = (extension::UnloadJob<extension::BasicFutureObject<Image,extension::FutureImageOption>,2>_vtbl *)&extension::UnloadJob<extension::BasicFutureObject<Image,extension::FutureImageOption>,2>::`vftable';
  v4 = 2i64;
  `eh vector constructor iterator'(
    this->m_asset,
    0x10ui64,
    2ui64,
    (void (__fastcall *)(void *))extension::BasicFutureObject<Image,extension::FutureImageOption>::BasicFutureObject<Image,extension::FutureImageOption>,
    (void (__fastcall *)(void *))extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::~BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>);
  p_m_body = &this->m_asset[0].m_body;
  v6 = (char *)asset - (char *)this;
  do
  {
    BYTE1(p_m_body[-1].m_ptr) = *((_BYTE *)&p_m_body[-3] + v6 - 7);
    v7 = *(extension::BasicFutureObject<Image,extension::FutureImageOption>::Body **)((char *)&p_m_body[-3].m_ptr + v6);
    if ( v7 )
      _InterlockedExchangeAdd64((volatile signed __int64 *)&v7->m_refCount.m_ptr->m_sharedCount, 1ui64);
    m_ptr = p_m_body->m_ptr;
    p_m_body->m_ptr = v7;
    if ( m_ptr )
    {
      if ( _InterlockedExchangeAdd64(
             (volatile signed __int64 *)&m_ptr->m_refCount.m_ptr->m_sharedCount,
             0xFFFFFFFFFFFFFFFFui64) == 1 )
        ((void (__fastcall *)(extension::BasicFutureObject<Image,extension::FutureImageOption>::Body *, __int64))m_ptr->~RefCountableWeakSupportBase)(
          m_ptr,
          1i64);
    }
    p_m_body += 2;
    --v4;
  }
  while ( v4 );
}

void __fastcall SyncMenuImage::~SyncMenuImage(SyncMenuImage *this)
{
  SyncMenuImage::Dispose(this);
}

void __fastcall SyncMenuImage::Dispose(SyncMenuImage *this)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  extension::BasicFutureObject<Image,extension::FutureImageOption> *m_MenuImage; // rcx
  extension::RefCountablePtr<extension::BasicFutureObject<Image,extension::FutureImageOption>::Body> *p_m_body; // rbx

  v2 = 0i64;
  v3 = 2i64;
  do
  {
    extension::BasicFutureObject<Image,extension::FutureImageOption>::reset(&this->m_MenuImage[v2++]);
    --v3;
  }
  while ( v3 );
  m_MenuImage = this->m_MenuImage;
  if ( this->m_MenuImage )
  {
    p_m_body = &m_MenuImage[-1].m_body;
    `eh vector destructor iterator'(
      m_MenuImage,
      0x10ui64,
      (unsigned __int64)m_MenuImage[-1].m_body.m_ptr,
      (void (__fastcall *)(void *))extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::~BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>);
    operator delete[](p_m_body, 16 * (__int64)p_m_body->m_ptr + 8);
    this->m_MenuImage = 0i64;
  }
}

char __fastcall SyncMenuImage::Draw(SyncMenuImage *this, GraphicsOpt *g, int x, int y, float scale)
{
  __int64 v7; // r12
  Graphics *v8; // rax
  Image *v9; // rdi
  extension::AsyncStatus::Step v10; // edx
  __int64 m_MenuImageCurrent; // rax
  extension::BasicFutureObject<Image,extension::FutureImageOption> *v12; // rcx
  extension::BasicFutureObject<Image,extension::FutureImageOption>::Body *m_ptr; // rbx
  float scaleX; // xmm6_4
  extension::AsyncStatus::Step v16; // edx
  extension::RefCountablePtr<extension::AsyncContent<Image> > *p_m_content; // r14
  extension::AsyncContent<Image> *v18; // rsi
  Image *Myval2; // rax
  int m_Height; // er13
  extension::AsyncContent<Image> *v21; // rsi
  Image *v22; // rax
  int m_Width; // er12
  extension::AsyncContent<Image> *v24; // rsi
  __int64 v25; // rax
  extension::BasicFutureObject<Image,extension::FutureImageOption> *v26; // rcx
  extension::BasicFutureObject<Image,extension::FutureImageOption>::Body *v27; // rdi
  char v28; // bl
  float scaleY; // xmm8_4
  extension::AsyncStatus::Step v30; // edx
  int v31; // ebx
  extension::AsyncStatus::Step v32; // edx
  float sw; // xmm7_4
  extension::AsyncStatus::Step v34; // edx
  Image *Data; // rax
  extension::AsyncStatus::Step v36; // edx
  extension::BasicFutureObject<Image,extension::FutureImageOption> *v37; // rcx
  extension::BasicFutureObject<Image,extension::FutureImageOption>::Body *v38; // r14
  extension::AsyncStatus::Step v39; // edx
  float v40; // xmm8_4
  int v41; // ebx
  extension::AsyncStatus::Step v42; // edx
  float v43; // xmm7_4
  extension::AsyncStatus::Step v44; // edx
  Image *v45; // rax
  extension::BasicFutureObject<Image,extension::FutureImageOption> v46; // [rsp+70h] [rbp-49h] BYREF
  extension::BasicFutureObject<Image,extension::FutureImageOption> v47; // [rsp+80h] [rbp-39h] BYREF
  extension::BasicFutureObject<Image,extension::FutureImageOption> v48; // [rsp+90h] [rbp-29h] BYREF

  v7 = *(_QWORD *)&AppMain::pApp;
  if ( this->m_FadeMode == FADE_IN )
  {
    v8 = g->g;
    v9 = 0i64;
    v8->m_Operator = 0;
    v8->m_SrcRatio = 255;
    v8->m_DstRatio = 255;
    if ( !v8->m_bPreDrawMode )
    {
      if ( m_DepthMask != 1 )
      {
        m_DepthMask = 1;
        glDepthMask(1u);
      }
      if ( m_Mode != 32774 )
      {
        m_Mode = 32774;
        m_ModeAlpha = 32774;
        _glewBlendEquation(0x8006u);
      }
      if ( dword_140A9605C )
      {
        dword_140A9605C = 0;
        glDisable(0xBE2u);
      }
      if ( m_dMode != 515 )
      {
        m_dMode = 515;
        glDepthFunc(0x203u);
      }
    }
    GraphicsOpt::fillRect(
      g,
      (int)COERCE_FLOAT(COERCE_UNSIGNED_INT((float)g->m_iAlignX) ^ _xmm),
      (int)COERCE_FLOAT(COERCE_UNSIGNED_INT((float)g->m_iAlignY) ^ _xmm),
      (int)(float)((float)((float)g->m_iAlignX + (float)g->m_iAlignX) + (float)*(int *)(v7 + 28)),
      (int)(float)((float)((float)g->m_iAlignY + (float)g->m_iAlignY) + (float)*(int *)(v7 + 32)),
      this->m_FadeColor);
    m_MenuImageCurrent = this->m_MenuImageCurrent;
    if ( (_DWORD)m_MenuImageCurrent != -1 )
    {
      v12 = &this->m_MenuImage[m_MenuImageCurrent];
      v47.m_isNoCache = v12->m_isNoCache;
      m_ptr = v12->m_body.m_ptr;
      v47.m_body.m_ptr = m_ptr;
      if ( m_ptr )
      {
        _InterlockedExchangeAdd64((volatile signed __int64 *)&m_ptr->m_refCount.m_ptr->m_sharedCount, 1ui64);
        m_ptr = v47.m_body.m_ptr;
      }
      if ( !extension::BasicFutureObject<extension::GFXIMovieData,void>::hasData(&v47, v10) )
      {
        if ( m_ptr )
        {
          if ( _InterlockedExchangeAdd64(
                 (volatile signed __int64 *)&m_ptr->m_refCount.m_ptr->m_sharedCount,
                 0xFFFFFFFFFFFFFFFFui64) == 1 )
            ((void (__fastcall *)(extension::BasicFutureObject<Image,extension::FutureImageOption>::Body *, __int64))v47.m_body.m_ptr->~RefCountableWeakSupportBase)(
              v47.m_body.m_ptr,
              1i64);
        }
        return 0;
      }
      scaleX = (float)((float)*(int *)(v7 + 28) / 1920.0) * scale;
      Graphics::setRenderMode(g->g, 3, this->m_ImageAlpha);
      p_m_content = &m_ptr->m_content;
      v18 = m_ptr->m_content.m_ptr;
      if ( !v18 || v18->m_isDataReleased )
      {
        Myval2 = 0i64;
      }
      else
      {
        if ( (v18->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
          extension::AsyncStatus::waitFor(&v18->m_status, v16);
        Myval2 = v18->m_data._Mypair._Myval2;
        m_ptr = v47.m_body.m_ptr;
      }
      m_Height = Myval2->m_Height;
      v21 = p_m_content->m_ptr;
      if ( !p_m_content->m_ptr || v21->m_isDataReleased )
      {
        v22 = 0i64;
      }
      else
      {
        if ( (v21->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
          extension::AsyncStatus::waitFor(&v21->m_status, v16);
        v22 = v21->m_data._Mypair._Myval2;
        m_ptr = v47.m_body.m_ptr;
      }
      m_Width = v22->m_Width;
      v24 = p_m_content->m_ptr;
      if ( p_m_content->m_ptr && !v24->m_isDataReleased )
      {
        if ( (v24->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
          extension::AsyncStatus::waitFor(&v24->m_status, v16);
        v9 = v24->m_data._Mypair._Myval2;
        m_ptr = v47.m_body.m_ptr;
      }
      GraphicsOpt::drawImage(g, v9, 0.0, 0.0, 0.0, 0.0, (float)m_Width, (float)m_Height, scaleX, scaleX, 0.0);
      if ( _InterlockedExchangeAdd64(
             (volatile signed __int64 *)&m_ptr->m_refCount.m_ptr->m_sharedCount,
             0xFFFFFFFFFFFFFFFFui64) == 1 )
        ((void (__fastcall *)(extension::BasicFutureObject<Image,extension::FutureImageOption>::Body *, __int64))v47.m_body.m_ptr->~RefCountableWeakSupportBase)(
          v47.m_body.m_ptr,
          1i64);
    }
    return 1;
  }
  v25 = this->m_MenuImageCurrent;
  if ( (_DWORD)v25 == -1 )
  {
    Graphics::setRenderMode(g->g, 0, 255);
    GraphicsOpt::fillRect(
      g,
      (int)COERCE_FLOAT(COERCE_UNSIGNED_INT((float)g->m_iAlignX) ^ _xmm),
      (int)COERCE_FLOAT(COERCE_UNSIGNED_INT((float)g->m_iAlignY) ^ _xmm),
      (int)(float)((float)((float)g->m_iAlignX + (float)g->m_iAlignX) + (float)*(int *)(v7 + 28)),
      (int)(float)((float)((float)g->m_iAlignY + (float)g->m_iAlignY) + (float)*(int *)(v7 + 32)),
      this->m_FadeColor);
    return 0;
  }
  v26 = &this->m_MenuImage[v25];
  v46.m_isNoCache = v26->m_isNoCache;
  v27 = v26->m_body.m_ptr;
  v46.m_body.m_ptr = v27;
  if ( v27 )
  {
    _InterlockedExchangeAdd64((volatile signed __int64 *)&v27->m_refCount.m_ptr->m_sharedCount, 1ui64);
    v27 = v46.m_body.m_ptr;
  }
  if ( extension::BasicFutureObject<extension::GFXIMovieData,void>::hasData(&v46, (extension::AsyncStatus::Step)g) )
  {
    Graphics::setRenderMode(g->g, 3, this->m_ImageAlpha);
    scaleY = (float)((float)*(int *)(v7 + 28) / 1920.0) * scale;
    v31 = extension::BasicFutureObject<Image,extension::FutureImageOption>::Body::getData(v27, v30)->m_Height;
    sw = (float)extension::BasicFutureObject<Image,extension::FutureImageOption>::Body::getData(v27, v32)->m_Width;
    Data = extension::BasicFutureObject<Image,extension::FutureImageOption>::Body::getData(v27, v34);
    GraphicsOpt::drawImage(g, Data, 0.0, 0.0, 0.0, 0.0, sw, (float)v31, scaleY, scaleY, 0.0);
    if ( this->m_FadeMode == FADE_OUT )
    {
      Graphics::setRenderMode(g->g, 3, 255 - this->m_ImageAlpha);
      v37 = &this->m_MenuImage[this->m_MenuImageNew];
      v48.m_isNoCache = v37->m_isNoCache;
      v38 = v37->m_body.m_ptr;
      v48.m_body.m_ptr = v38;
      if ( v38 )
      {
        _InterlockedExchangeAdd64((volatile signed __int64 *)&v38->m_refCount.m_ptr->m_sharedCount, 1ui64);
        v27 = v46.m_body.m_ptr;
        v38 = v48.m_body.m_ptr;
      }
      if ( !extension::BasicFutureObject<extension::GFXIMovieData,void>::hasData(&v48, v36) )
      {
        if ( v38 )
        {
          if ( _InterlockedExchangeAdd64(
                 (volatile signed __int64 *)&v38->m_refCount.m_ptr->m_sharedCount,
                 0xFFFFFFFFFFFFFFFFui64) == 1 )
            ((void (__fastcall *)(extension::BasicFutureObject<Image,extension::FutureImageOption>::Body *, __int64))v48.m_body.m_ptr->~RefCountableWeakSupportBase)(
              v48.m_body.m_ptr,
              1i64);
          v27 = v46.m_body.m_ptr;
        }
        v28 = 0;
        goto LABEL_59;
      }
      v40 = (float)((float)*(int *)(v7 + 28) / 1920.0) * scale;
      v41 = *(_DWORD *)&extension::BasicFutureObject<extension::GFXIMovieData,void>::operator->(
                          (extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> *)&v48,
                          v39)->m_bankFileDir._Mypair._Myval2._Bx._Alias[12];
      v43 = (float)*(int *)&extension::BasicFutureObject<extension::GFXIMovieData,void>::operator->(
                              (extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> *)&v48,
                              v42)->m_bankFileDir._Mypair._Myval2._Bx._Alias[8];
      v45 = (Image *)extension::BasicFutureObject<extension::GFXIMovieData,void>::operator->(
                       (extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> *)&v48,
                       v44);
      GraphicsOpt::drawImage(g, v45, 0.0, 0.0, 0.0, 0.0, v43, (float)v41, v40, v40, 0.0);
      if ( v38 )
      {
        if ( _InterlockedExchangeAdd64(
               (volatile signed __int64 *)&v38->m_refCount.m_ptr->m_sharedCount,
               0xFFFFFFFFFFFFFFFFui64) == 1 )
          ((void (__fastcall *)(extension::BasicFutureObject<Image,extension::FutureImageOption>::Body *, __int64))v48.m_body.m_ptr->~RefCountableWeakSupportBase)(
            v48.m_body.m_ptr,
            1i64);
        v27 = v46.m_body.m_ptr;
      }
    }
    Graphics::setRenderMode(g->g, 3, 255);
    v28 = 1;
  }
  else
  {
    v28 = 0;
  }
LABEL_59:
  if ( v27
    && _InterlockedExchangeAdd64(
         (volatile signed __int64 *)&v27->m_refCount.m_ptr->m_sharedCount,
         0xFFFFFFFFFFFFFFFFui64) == 1 )
  {
    ((void (__fastcall *)(extension::BasicFutureObject<Image,extension::FutureImageOption>::Body *, __int64))v46.m_body.m_ptr->~RefCountableWeakSupportBase)(
      v46.m_body.m_ptr,
      1i64);
  }
  return v28;
}

char __fastcall SyncMenuImage::Load(SyncMenuImage *this, const ImageDataInfo *pInfo, SyncMenuImage::FADE_MODE mode)
{
  int m_MenuImageNew; // edx
  int v7; // er9
  extension::BasicFutureObject<Image,extension::FutureImageOption> *m_MenuImage; // r8
  extension::AsyncContent<Image> *m_ptr; // rcx
  __int64 m_MenuImageCurrent; // rax
  extension::AsyncContent<Image> *v12; // rdx
  char *v13; // rax
  const char *v14; // r8
  int v15; // ecx
  int v16; // edx
  const char *fileName; // rdx
  unsigned __int64 v18; // r8
  extension::BasicFutureObject<Image,extension::FutureImageOption>::AssetCache *v19; // rcx
  extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body *v20; // rcx
  const char *v21; // rcx
  char *v22; // rdx
  char v23; // al
  __int64 v24; // rax
  extension::FutureImageOption v25; // [rsp+20h] [rbp-88h] BYREF
  extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> other; // [rsp+30h] [rbp-78h] BYREF
  std::string v27; // [rsp+40h] [rbp-68h] BYREF
  __int64 v28; // [rsp+60h] [rbp-48h]
  std::string _Right; // [rsp+70h] [rbp-38h] BYREF

  v28 = -2i64;
  m_MenuImageNew = this->m_MenuImageNew;
  v7 = (m_MenuImageNew + 1) % 2;
  if ( !pInfo )
    return 0;
  m_MenuImage = this->m_MenuImage;
  m_ptr = this->m_MenuImage[v7].m_body.m_ptr->m_content.m_ptr;
  if ( m_ptr )
  {
    if ( !m_ptr->m_isDataReleased )
      return 0;
  }
  m_MenuImageCurrent = this->m_MenuImageCurrent;
  if ( (_DWORD)m_MenuImageCurrent != m_MenuImageNew )
    return 0;
  if ( (_DWORD)m_MenuImageCurrent == -1 )
    goto LABEL_13;
  v12 = m_MenuImage[m_MenuImageCurrent].m_body.m_ptr->m_content.m_ptr;
  if ( !v12 || v12->m_isDataReleased )
    goto LABEL_13;
  v13 = this->m_MenuImageName[(__int64)this->m_MenuImageCurrent];
  v14 = (const char *)(pInfo->fileName - (const char *)v13);
  do
  {
    v15 = (unsigned __int8)v14[(_QWORD)v13];
    v16 = (unsigned __int8)*v13 - v15;
    if ( v16 )
      break;
    ++v13;
  }
  while ( v15 );
  if ( v16 )
  {
LABEL_13:
    this->m_MenuImageNew = v7;
    v25.transparent = pInfo->transparent != 0;
    v25.filter = pInfo->filter != 0;
    v25.option = pInfo->option;
    v25.texParam = 1290;
    fileName = pInfo->fileName;
    _Right._Mypair._Myval2._Myres = 15i64;
    _Right._Mypair._Myval2._Mysize = 0i64;
    _Right._Mypair._Myval2._Bx._Buf[0] = 0;
    if ( *fileName )
    {
      v18 = -1i64;
      do
        ++v18;
      while ( fileName[v18] );
    }
    else
    {
      v18 = 0i64;
    }
    std::string::assign(&_Right, fileName, v18);
    other.m_isNoCache = 0;
    v27._Mypair._Myval2._Myres = 15i64;
    v27._Mypair._Myval2._Mysize = 0i64;
    v27._Mypair._Myval2._Bx._Buf[0] = 0;
    std::string::assign(&v27, &_Right, 0i64, 0xFFFFFFFFFFFFFFFFui64);
    extension::BasicFutureObject<Image,extension::FutureImageOption>::AssetCache::getCachedOrLoadStart(
      v19,
      (extension::RefCountablePtr<extension::BasicFutureObject<Image,extension::FutureImageOption>::Body> *)&other.m_body,
      &v27,
      &v25);
    extension::BasicFutureObject<OGLSecondary,void>::operator=(
      (extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> *)&this->m_MenuImage[this->m_MenuImageNew],
      &other);
    v20 = other.m_body.m_ptr;
    if ( other.m_body.m_ptr
      && _InterlockedExchangeAdd64(
           (volatile signed __int64 *)&other.m_body.m_ptr->m_refCount.m_ptr->m_sharedCount,
           0xFFFFFFFFFFFFFFFFui64) == 1 )
    {
      ((void (__fastcall *)(extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body *, __int64))v20->~RefCountableWeakSupportBase)(
        v20,
        1i64);
    }
    std::string::~string(&_Right);
    v21 = pInfo->fileName;
    v22 = this->m_MenuImageName[(__int64)this->m_MenuImageNew];
    do
    {
      v23 = *v21;
      *v22++ = *v21++;
    }
    while ( v23 );
    this->m_FadeMode = mode;
    if ( mode == FADE_OUT )
    {
      this->m_FadeSpeed = 48;
      this->m_ImageAlpha = 255;
    }
    else if ( mode == FADE_IN )
    {
      this->m_FadeSpeed = 48;
      this->m_ImageAlpha = 255;
      this->m_FadeColor = -1;
      v24 = this->m_MenuImageCurrent;
      if ( (_DWORD)v24 != -1 )
        extension::BasicFutureObject<Image,extension::FutureImageOption>::reset(&this->m_MenuImage[v24]);
      this->m_MenuImageCurrent = -1;
    }
  }
  return 1;
}

void __fastcall SyncMenuImage::Release(SyncMenuImage *this)
{
  __int64 i; // rbx
  extension::BasicFutureObject<Image,extension::FutureImageOption> *m_MenuImage; // rcx
  extension::BasicFutureObject<Image,extension::FutureImageOption>::Body *m_ptr; // rdx
  extension::BasicFutureObject<Image,extension::FutureImageOption>::Body *v5; // rcx
  extension::ExThread::Runnable *v6; // rax
  __int64 v7; // rbx
  char (*m_MenuImageName)[256]; // rdi
  __int64 v9; // rbp
  extension::BasicFutureObject<Image,extension::FutureImageOption> ptr[4]; // [rsp+40h] [rbp-48h] BYREF
  extension::UnloadJob<extension::BasicFutureObject<Image,extension::FutureImageOption>,2> *v11; // [rsp+90h] [rbp+8h]
  void (__fastcall ***v12)(_QWORD, __int64); // [rsp+98h] [rbp+10h] BYREF
  std::unique_ptr<extension::ExThread::Runnable> obj; // [rsp+A0h] [rbp+18h] BYREF
  void (__fastcall ****v14)(_QWORD, __int64); // [rsp+A8h] [rbp+20h]

  `eh vector constructor iterator'(
    ptr,
    0x10ui64,
    2ui64,
    (void (__fastcall *)(void *))extension::BasicFutureObject<Image,extension::FutureImageOption>::BasicFutureObject<Image,extension::FutureImageOption>,
    (void (__fastcall *)(void *))extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::~BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>);
  for ( i = 0i64; i < 2; ++i )
  {
    m_MenuImage = this->m_MenuImage;
    ptr[i].m_isNoCache = this->m_MenuImage[i].m_isNoCache;
    m_ptr = m_MenuImage[i].m_body.m_ptr;
    if ( m_ptr )
      _InterlockedExchangeAdd64((volatile signed __int64 *)&m_ptr->m_refCount.m_ptr->m_sharedCount, 1ui64);
    v5 = ptr[i].m_body.m_ptr;
    ptr[i].m_body.m_ptr = m_ptr;
    if ( v5
      && _InterlockedExchangeAdd64(
           (volatile signed __int64 *)&v5->m_refCount.m_ptr->m_sharedCount,
           0xFFFFFFFFFFFFFFFFui64) == 1 )
    {
      ((void (__fastcall *)(extension::BasicFutureObject<Image,extension::FutureImageOption>::Body *, __int64))v5->~RefCountableWeakSupportBase)(
        v5,
        1i64);
    }
  }
  v11 = (extension::UnloadJob<extension::BasicFutureObject<Image,extension::FutureImageOption>,2> *)operator new(0x38ui64);
  extension::UnloadJob<extension::BasicFutureObject<Image,extension::FutureImageOption>,2>::UnloadJob<extension::BasicFutureObject<Image,extension::FutureImageOption>,2>(
    v11,
    ptr);
  v14 = &v12;
  v12 = 0i64;
  obj._Mypair._Myval2 = v6;
  extension::SynchronizedQueue<extension::ExThread::Runnable>::enqueue(
    &extension::AsyncWorker::s_instance.m_loadJobConsumer.m_jobQueue,
    (std::unique_ptr<extension::ExThread::Runnable>)&obj);
  if ( v12 )
    (**v12)(v12, 1i64);
  v7 = 0i64;
  m_MenuImageName = this->m_MenuImageName;
  v9 = 2i64;
  do
  {
    extension::BasicFutureObject<Image,extension::FutureImageOption>::reset(&this->m_MenuImage[v7]);
    *(_BYTE *)m_MenuImageName = 0;
    ++v7;
    ++m_MenuImageName;
    --v9;
  }
  while ( v9 );
  *(_QWORD *)&this->m_ImageAlpha = 255i64;
  *(_QWORD *)&this->m_MenuImageCurrent = -1i64;
  `eh vector destructor iterator'(
    ptr,
    0x10ui64,
    2ui64,
    (void (__fastcall *)(void *))extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::~BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>);
}

void __fastcall SyncMenuImage::Update(SyncMenuImage *this, extension::AsyncStatus::Step a2)
{
  __int64 m_MenuImageNew; // rcx
  SyncMenuImage::FADE_MODE m_FadeMode; // eax
  int v5; // edi
  char (*m_MenuImageName)[256]; // r14
  __int64 v7; // rbp
  __int64 v8; // rsi
  extension::AsyncContent<Image> *m_ptr; // rcx

  m_MenuImageNew = this->m_MenuImageNew;
  if ( (_DWORD)m_MenuImageNew != -1 )
  {
    m_FadeMode = this->m_FadeMode;
    if ( m_FadeMode )
    {
      if ( (unsigned int)(m_FadeMode - 1) <= 1
        && extension::BasicFutureObject<extension::GFXIMovieData,void>::hasData(&this->m_MenuImage[m_MenuImageNew], a2) )
      {
        this->m_ImageAlpha -= this->m_FadeSpeed;
        if ( this->m_ImageAlpha <= 0 )
        {
          this->m_MenuImageCurrent = this->m_MenuImageNew;
          *(_QWORD *)&this->m_ImageAlpha = 255i64;
        }
      }
    }
    else
    {
      if ( extension::BasicFutureObject<extension::GFXIMovieData,void>::hasData(&this->m_MenuImage[m_MenuImageNew], a2) )
        this->m_MenuImageCurrent = this->m_MenuImageNew;
      v5 = 0;
      m_MenuImageName = this->m_MenuImageName;
      v7 = 0i64;
      v8 = 0i64;
      do
      {
        if ( v5 != this->m_MenuImageNew && v5 != this->m_MenuImageCurrent )
        {
          m_ptr = this->m_MenuImage[v7].m_body.m_ptr->m_content.m_ptr;
          if ( m_ptr )
          {
            if ( !m_ptr->m_isDataReleased )
            {
              extension::BasicFutureObject<Image,extension::FutureImageOption>::reset(&this->m_MenuImage[v8]);
              *(_BYTE *)m_MenuImageName = 0;
            }
          }
        }
        ++v5;
        ++v8;
        ++v7;
        ++m_MenuImageName;
      }
      while ( v5 < 2 );
    }
  }
}

bool __fastcall extension::BasicFutureObject<extension::GFXIMovieData,void>::hasData(
        extension::BasicFutureObject<Image,extension::FutureImageOption> *this,
        extension::AsyncStatus::Step a2)
{
  extension::AsyncContent<Image> *m_ptr; // rax
  extension::AsyncContent<Image> *v3; // rbx

  m_ptr = this->m_body.m_ptr->m_content.m_ptr;
  if ( m_ptr && !m_ptr->m_isDataReleased && (m_ptr->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
    return 0;
  v3 = this->m_body.m_ptr->m_content.m_ptr;
  if ( !v3 || v3->m_isDataReleased )
    return 0;
  if ( (v3->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
    extension::AsyncStatus::waitFor(&v3->m_status, a2);
  return v3->m_data._Mypair._Myval2 != 0;
}

__int64 __fastcall extension::UnloadJob<extension::BasicFutureObject<Image,extension::FutureImageOption>,2>::run(
        extension::UnloadJob<extension::BasicFutureObject<Image,extension::FutureImageOption>,2> *this)
{
  extension::RefCountablePtr<extension::BasicFutureObject<Image,extension::FutureImageOption>::Body> *p_m_body; // rbx
  __int64 v2; // rdi
  extension::BasicFutureObject<Image,extension::FutureImageOption>::Body *m_ptr; // rax
  extension::BasicFutureObject<Image,extension::FutureImageOption>::Body *v4; // rcx
  extension::RefCountablePtr<extension::BasicFutureObject<Image,extension::FutureImageOption>::Body> result; // [rsp+28h] [rbp-10h] BYREF

  p_m_body = &this->m_asset[0].m_body;
  v2 = 2i64;
  do
  {
    extension::BasicFutureObject<Image,extension::FutureImageOption>::Body::GetSharedEmpty(&result);
    BYTE1(p_m_body[-1].m_ptr) = 0;
    m_ptr = result.m_ptr;
    if ( result.m_ptr )
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)&result.m_ptr->m_refCount.m_ptr->m_sharedCount, 1ui64);
      m_ptr = result.m_ptr;
    }
    v4 = p_m_body->m_ptr;
    p_m_body->m_ptr = m_ptr;
    if ( v4 )
    {
      if ( _InterlockedExchangeAdd64(
             (volatile signed __int64 *)&v4->m_refCount.m_ptr->m_sharedCount,
             0xFFFFFFFFFFFFFFFFui64) == 1 )
        ((void (__fastcall *)(extension::BasicFutureObject<Image,extension::FutureImageOption>::Body *, __int64))v4->~RefCountableWeakSupportBase)(
          v4,
          1i64);
      m_ptr = result.m_ptr;
    }
    if ( m_ptr
      && _InterlockedExchangeAdd64(
           (volatile signed __int64 *)&m_ptr->m_refCount.m_ptr->m_sharedCount,
           0xFFFFFFFFFFFFFFFFui64) == 1 )
    {
      ((void (__fastcall *)(extension::BasicFutureObject<Image,extension::FutureImageOption>::Body *, __int64))result.m_ptr->~RefCountableWeakSupportBase)(
        result.m_ptr,
        1i64);
    }
    p_m_body += 2;
    --v2;
  }
  while ( v2 );
  return 0i64;
}

