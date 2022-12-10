#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "dev/silverware/git/sdk/input/agsdlmappingparser.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/titlestoragesystem.h"
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
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/quat_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/condition_variable"
#include "dev/kof/master/development/source/baseproject/jni/game/appmain.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/shaderfxhelper.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/jobmanager.h"
#include "dev/kof/master/development/source/ps4project/baseproject/pcutil/pcdummy.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/effect/actoreffect.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actorobject.h"
#include "dev/silverware/git/sdk/agdisplay.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_drawableimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/refcountable.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/savedata.h"
#include "dev/silverware/git/sdk/agvector4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hal.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_buffer.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actoroption.h"
#include "dev/silverware/git/sdk/agvector3.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/cameracheck.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_characterdef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "dev/silverware/git/sdk/agscopedlock.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/freecameracheck.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleonline.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/operationmapper.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/randommt.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filters.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/rapper/graphicsopt.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filterparams.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_sse.h"
#include "dev/silverware/git/sdk/agreferencecountinl.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/savedatadefine.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphqueue.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_types.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdata/effectappdata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_font.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/resourcemanager.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/time.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/type_traits"
#include "dev/kof/master/development/source/baseproject/jni/game/cpuseq/battlecpu.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessdefs.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/libcommon.h"
#include "dev/kof/master/development/source/baseproject/jni/game/cpuseq/sequencecontroller.h"
#include "dev/silverware/git/sdk/agrectangle.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstddef"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatapacked.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_pathdatapacker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_linebuffer.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_prefightfaceoff.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/translate_table.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_highlight.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/shared_lua_context.h"
#include "dev/kof/master/development/source/baseproject/jni/game/system/battlesysteminfo.h"
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
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_functions.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/soundutil.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_simplemeshcache.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/audiopresenter.h"
#include "dev/kof/master/development/source/baseproject/jni/game/network/chkdiscononlinesv.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/fontprovider/render_fontproviderwinapi.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/mutex"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaprojectdataformat.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmodel.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/algorithm"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/chrono"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_bundle.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/limits"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_new.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charabasestatusformat.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglcurve.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_typeinfo.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/inputkeyrecord.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloatmp.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapemeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/jpeg_imagefile.h"
#include "program files (x86)/windows kits/8.1/include/shared/guiddef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/silverware/git/sdk/system/agsysteminfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_hashkey.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treetext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefileutil.h"
#include "dev/silverware/git/sdk/agreferenceinl.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlecall/battlecall.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_docview.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xutility"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_debug.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_range.h"
#include "program files (x86)/windows kits/8.1/include/shared/stralign.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/utility"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/bodypush.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglsprite.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "dev/silverware/git/sdk/agmemorystream.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/iosfwd"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_hash.h"
#include "dev/kof/master/development/source/baseproject/jni/game/network/netmanager.h"
#include "dev/silverware/git/sdk/agmemorypool.h"
#include "dev/kof/master/development/source/baseproject/jni/game/network/leaderboard.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/input/imesystem.h"
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
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_manager.h"
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
#include "dev/kof/master/development/source/baseproject/jni/game/player/weapon/actorweapon.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessgen.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestageutil.h"
#include "dev/kof/master/development/source/baseproject/jni/game/system/battlecontroller.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treeshape.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessellator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/unordered_map"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector3unaligned.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_exception.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actionsystem.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xhash"
#include "dev/silverware/git/sdk/platforms/pc/system/agpcsysteminfo.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/list"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaactiondataformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestage.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charafilebase.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/tkndata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitivebundle.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treecachenode.h"
#include "program files (x86)/windows kits/8.1/include/um/winnt.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treenode.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_loader.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmirror.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cacheeffect.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_system.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphfitter.h"
#include "program files (x86)/windows kits/8.1/include/shared/basetsd.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/cameramotionpreviewsettings.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/stageprojectdata.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/commanddataformat.h"
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
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestagedatas.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/tkndatas.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_stroker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/stdexcept"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/tween.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/dds_imagefile.h"
#include "dev/silverware/git/sdk/util/agservicecommand.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/vectormath_aos.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/asynccharafileload.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textmeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphparam.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcache.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steam_api_internal.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/tuple"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcacheconfig.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglshader.h"
#include "dev/silverware/git/sdk/util/agdebugchannels.h"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/hitrectcollection.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hairliner.h"
#include "dev/silverware/git/sdk/util/agperformancecounter.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/debug/logging.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_filterdesc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_styledtext.h"
#include "dev/silverware/git/sdk/agclock.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix3x4.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_missiondataloading.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/trainingsetting.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/combomissionattackeventlistener.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charamaterialsettingformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_core.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_queue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/fix32.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_fontmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitive.h"
#include "dev/silverware/git/sdk/agmutex.inl"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actorcharabase.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocaddr.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_radixtree.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlehud.h"
#include "dev/kof/master/development/source/baseproject/jni/game/define/charabonedefine.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/texstring.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdatalistmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_twips.h"
#include "program files (x86)/windows kits/8.1/include/um/winuser.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battleeventhandler.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/colorholder.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectcommon.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_containers.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/string"
#include "dev/silverware/git/sdk/agreferencedobjectinl.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic.h"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/damagesetting.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_wwhelper.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steam_api.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic0.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/globalheapmemory.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "dev/kof/master/development/source/baseproject/jni/game/player/battleplayerinfo.h"
#include "dev/silverware/git/sdk/agcondition.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/fixmemory.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/mat_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/array"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/easingnumber.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/errorchecker.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actionblackout.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogleffect.h"
#include "dev/kof/master/development/source/ps4project/baseproject/pcutil/pccontrolsmanager.h"
#include "dev/silverware/git/sdk/memory/agallocators.h"
#include "dev/silverware/git/sdk/input/aginputmanager.h"
#include "dev/silverware/git/sdk/agsingleton.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleonlinewatching.h"
#include "dev/silverware/git/sdk/filesystem/agfile.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector4unaligned.h"
#include "dev/silverware/git/sdk/filesystem/agpath.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/cpusequencedataformat.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogllight.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_vertex.h"
#include "dev/silverware/git/sdk/filesystem/agmount.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleloading.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/shot/actorshot.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actorchara.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/fontprovider/render_fontproviderhud.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_wstring.h"
#include "dev/silverware/git/sdk/filesystem/agdirectory.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/vecidx_aos.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlecall/animations/bcanimation_complete.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/commandcheck.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/floatinvec.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/restrictringbuffer.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/matchingsystem.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/materialshowcontrol.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/ios"
#include "dev/kof/master/development/source/baseproject/jni/game/util/syncmenuimage.h"
#include "dev/silverware/git/sdk/3rdparty/steam/matchmakingtypes.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/quat_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocnum"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/easingutil.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_ps4modelroom.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/moviedatadefine.h"
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
#include "dev/silverware/git/sdk/agmovieplayer.h"
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
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/heapmemory.h"
#include "dev/silverware/git/sdk/system/aguser.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestageresourcecontainer.h"
#include "dev/silverware/git/sdk/agstring.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestageshader.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actor.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_movie.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/mutex.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_math.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vector"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charadataunify.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_operation.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/bitset"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaattackdataformat.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/vec_aos.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charadamagesettingformat.h"
#include "dev/silverware/git/sdk/util/agdelegate.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_screentoworld.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thr/xthread"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/physicalheapmemory.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/map"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/future_asset.h"
#include "dev/silverware/git/sdk/agcondition.inl"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtree"
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
#include "program files (x86)/microsoft visual studio 14.0/vc/include/atomic"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/effect.h"
#include "dev/silverware/git/sdk/system/agusermanager.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/combomissiondataformat.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/sounddata.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/soundgroupdataformat.h"
#include "dev/kof/master/development/source/baseproject/jni/game/network/playtogether.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_event.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/deque"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_bank.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/png_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_keycodes.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exlockable.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/asyncjob.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglrender.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/rapper/graphicsopt.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlecall/animations/battlecallanimation.cpp"

enum `anonymous-namespace'::<unnamed-enum-IMAGEID_DEF>
{
	IMAGEID_DEF = 0,
	IMAGEID_MAX = 1,
};
extension::BasicFutureObject<Image,extension::FutureImageOption>::AssetCache extension::BasicFutureObject<Image,extension::FutureImageOption>::s_cacheManager; // 0x140ACBEB0
void(*??s_cacheManager$initializer$@?$BasicFutureObject@VImage@@UFutureImageOption@extension@@@extension@@0P6AXXZEA@@3P6AXXZEA)(); // 0x1407407C0
std::piecewise_construct_t std::piecewise_construct; // 0x14088A51D
const char * ImageFilePath_Complete; // 0x14088A520
const _C_CONV ImageRects_Complete[16]; // 0x14088A530
extension::asyncjob_detail::AssetCacheBase::~AssetCacheBase(); // 0x1400A2DA0//decompilation failure at 140ACBEB0!
//decompilation failure at 1407407C0!
//decompilation failure at 14088A51D!
//decompilation failure at 14088A520!
//decompilation failure at 14088A530!
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

void __fastcall extension::BasicFutureObject<Image,extension::FutureImageOption>::AssetCache::AssetCache(
        extension::BasicFutureObject<Image,extension::FutureImageOption>::AssetCache *this)
{
  extension::AssetCacheExpiredEntryCleaner *v1; // rax
  extension::BiLinkable<extension::asyncjob_detail::AssetCacheNode> *v2; // r8

  InitializeCriticalSection((LPCRITICAL_SECTION)&extension::BasicFutureObject<Image,extension::FutureImageOption>::s_cacheManager.extension::ExSimpleLockable<extension::BasicFutureObject<Image,extension::FutureImageOption>::AssetCache>);
  extension::BasicFutureObject<Image,extension::FutureImageOption>::s_cacheManager.m_Prev = &extension::BasicFutureObject<Image,extension::FutureImageOption>::s_cacheManager.extension::BiLinkable<extension::asyncjob_detail::AssetCacheNode>;
  extension::BasicFutureObject<Image,extension::FutureImageOption>::s_cacheManager.m_Next = &extension::BasicFutureObject<Image,extension::FutureImageOption>::s_cacheManager.extension::BiLinkable<extension::asyncjob_detail::AssetCacheNode>;
  extension::BasicFutureObject<Image,extension::FutureImageOption>::s_cacheManager.__vftable = (extension::BasicFutureObject<Image,extension::FutureImageOption>::AssetCache_vtbl *)&extension::asyncjob_detail::AssetCacheBase::`vftable';
  v1 = extension::_anonymous_namespace_::AssetCacheExpiredEntryCleaner::Instance();
  if ( v1 )
    v2 = &v1->extension::BiLinkable<extension::asyncjob_detail::AssetCacheNode>;
  else
    v2 = 0i64;
  extension::BasicFutureObject<Image,extension::FutureImageOption>::s_cacheManager.m_Next->extension::asyncjob_detail::AssetCacheBase::extension::asyncjob_detail::AssetCacheNode::extension::BiLinkable<extension::asyncjob_detail::AssetCacheNode>::m_Prev = v2->m_Prev;
  v2->m_Prev->m_Next = extension::BasicFutureObject<Image,extension::FutureImageOption>::s_cacheManager.m_Next;
  extension::BasicFutureObject<Image,extension::FutureImageOption>::s_cacheManager.m_Next = v2;
  v2->m_Prev = &extension::BasicFutureObject<Image,extension::FutureImageOption>::s_cacheManager.extension::BiLinkable<extension::asyncjob_detail::AssetCacheNode>;
  extension::BasicFutureObject<Image,extension::FutureImageOption>::s_cacheManager.__vftable = (extension::BasicFutureObject<Image,extension::FutureImageOption>::AssetCache_vtbl *)&extension::BasicFutureObject<Image,extension::FutureImageOption>::AssetCache::`vftable';
  std::unordered_map<std::string,extension::RCWeakPtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body>>::unordered_map<std::string,extension::RCWeakPtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body>>((std::unordered_map<std::string,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body>> *)&extension::BasicFutureObject<Image,extension::FutureImageOption>::s_cacheManager.m_cachedObjectMap);
}

void __fastcall extension::BasicFutureObject<Image,extension::FutureImageOption>::Body::Body(
        extension::BasicFutureObject<Image,extension::FutureImageOption>::Body *this,
        extension::RefCountablePtr<extension::AsyncContent<Image> > shared)
{
  volatile signed __int64 *My_val; // rax
  extension::AsyncContent<OGLTexture> *v5; // rcx
  extension::RefCountableWeakSupportBase::WeakProxy *v6; // [rsp+48h] [rbp+10h]

  this->__vftable = (extension::BasicFutureObject<Image,extension::FutureImageOption>::Body_vtbl *)&extension::RefCountableWeakSupportBase::`vftable';
  v6 = (extension::RefCountableWeakSupportBase::WeakProxy *)operator new(0x18ui64);
  v6->m_refCount.m_value._My_val = 1i64;
  v6->m_principal = this;
  v6->m_sharedCount.m_value._My_val = 0i64;
  v6->m_sharedCount.m_value._My_val = 1i64;
  this->m_refCount.m_ptr = v6;
  this->__vftable = (extension::BasicFutureObject<Image,extension::FutureImageOption>::Body_vtbl *)&extension::BasicFutureObject<Image,extension::FutureImageOption>::Body::`vftable';
  My_val = (volatile signed __int64 *)shared.m_ptr->m_refCount.m_value._My_val;
  this->m_content.m_ptr = (extension::AsyncContent<Image> *)shared.m_ptr->m_refCount.m_value._My_val;
  if ( My_val )
    _InterlockedExchangeAdd64(My_val, 1ui64);
  v5 = (extension::AsyncContent<OGLTexture> *)shared.m_ptr->m_refCount.m_value._My_val;
  if ( shared.m_ptr->m_refCount.m_value._My_val
    && _InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFui64) == 1 )
  {
    if ( v5 )
      extension::AsyncContent<Image>::`scalar deleting destructor'(v5, 0);
  }
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

void __fastcall std::list<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>>>::~list<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>>>(
        std::list<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >> *this)
{
  std::list<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>::Body>>>::clear(this);
  operator delete(this->_Mypair._Myval2._Myhead);
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

void __fastcall extension::BasicFutureObject<Image,extension::FutureImageOption>::AssetCache::~AssetCache(
        extension::BasicFutureObject<Image,extension::FutureImageOption>::AssetCache *this)
{
  AgLogger **Myfirst; // rdx

  this->__vftable = (extension::BasicFutureObject<Image,extension::FutureImageOption>::AssetCache_vtbl *)&extension::BasicFutureObject<Image,extension::FutureImageOption>::AssetCache::`vftable';
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
  this->__vftable = (extension::BasicFutureObject<Image,extension::FutureImageOption>::AssetCache_vtbl *)&extension::asyncjob_detail::AssetCacheNode::`vftable';
  this->m_Next->extension::asyncjob_detail::AssetCacheBase::extension::asyncjob_detail::AssetCacheNode::extension::BiLinkable<extension::asyncjob_detail::AssetCacheNode>::m_Prev = this->m_Prev;
  this->m_Prev->m_Next = this->m_Next;
  this->m_Next = &this->extension::BiLinkable<extension::asyncjob_detail::AssetCacheNode>;
  this->m_Prev = &this->extension::BiLinkable<extension::asyncjob_detail::AssetCacheNode>;
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->extension::ExSimpleLockable<extension::BasicFutureObject<Image,extension::FutureImageOption>::AssetCache>);
}

void __fastcall extension::asyncjob_detail::AssetCacheBase::~AssetCacheBase(
        extension::asyncjob_detail::AssetCacheBase *this)
{
  this->__vftable = (extension::asyncjob_detail::AssetCacheBase_vtbl *)&extension::asyncjob_detail::AssetCacheNode::`vftable';
  this->m_Next->extension::asyncjob_detail::AssetCacheNode::extension::BiLinkable<extension::asyncjob_detail::AssetCacheNode>::m_Prev = this->m_Prev;
  this->m_Prev->m_Next = this->m_Next;
  this->m_Next = &this->extension::BiLinkable<extension::asyncjob_detail::AssetCacheNode>;
  this->m_Prev = &this->extension::BiLinkable<extension::asyncjob_detail::AssetCacheNode>;
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

extension::RefCountablePtr<extension::AsyncContent<Image> > *__fastcall extension::FutureObjectJobManager<Image,extension::FutureImageOption>::LoadStart(
        extension::RefCountablePtr<extension::AsyncContent<Image> > *result,
        const std::string *name,
        const std::string *optstr,
        const extension::FutureImageOption *opt)
{
  extension::AsyncContent<Image> *v8; // rax
  unsigned int v9; // edx
  extension::AsyncContent<OGLTexture> *v10; // rcx
  extension::AsyncContent<OGLTexture> *v12; // [rsp+28h] [rbp-30h] BYREF
  extension::RefCountablePtr<extension::AsyncContent<Image> > shared; // [rsp+30h] [rbp-28h] BYREF
  __int64 v14; // [rsp+38h] [rbp-20h]
  extension::AsyncContent<OGLTexture> **v15; // [rsp+40h] [rbp-18h]

  v14 = -2i64;
  shared.m_ptr = (extension::AsyncContent<Image> *)operator new(0x68ui64);
  extension::AsyncContent<OGLSecondary>::AsyncContent<OGLSecondary>(
    (extension::AsyncContent<extension::exsound_detail::SoundBankImpl> *)shared.m_ptr,
    name,
    optstr);
  result->m_ptr = v8;
  v12 = (extension::AsyncContent<OGLTexture> *)v8;
  if ( v8 )
  {
    _InterlockedExchangeAdd64((volatile signed __int64 *)v8, 1ui64);
    v8 = (extension::AsyncContent<Image> *)v12;
  }
  v15 = &v12;
  shared.m_ptr = v8;
  if ( v8 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)v8, 1ui64);
  extension::future_asset_detail::EnqueueFutureImageJob(
    (extension::RefCountablePtr<extension::AsyncContent<Image> >)&shared,
    opt);
  v10 = v12;
  if ( v12 && _InterlockedExchangeAdd64((volatile signed __int64 *)v12, 0xFFFFFFFFFFFFFFFFui64) == 1 && v10 )
    extension::AsyncContent<Image>::`scalar deleting destructor'(v10, v9);
  return result;
}

std::string *__fastcall extension::AsyncWorker::NormalizeAssetPath(std::string *result, const std::string *path_str)
{
  extension::utility::PathNormalize(result, path_str);
  return result;
}

std::string *__fastcall extension::FutureObjectJobManager<Image,extension::FutureImageOption>::Stringize(
        std::string *result,
        const extension::FutureImageOption *opt)
{
  std::string *v4; // rax
  int v5; // eax

  if ( __TSS0__1__Stringize___FutureObjectJobManager_VImage__UFutureImageOption_extension___extension__SA_AV__basic_string_DU__char_traits_D_std__V__allocator_D_2__std__PEBUFutureImageOption_3__Z_4HA > *(_DWORD *)(*(_QWORD *)NtCurrentTeb()->Reserved1[11] + 40i64) )
  {
    Init_thread_header(&__TSS0__1__Stringize___FutureObjectJobManager_VImage__UFutureImageOption_extension___extension__SA_AV__basic_string_DU__char_traits_D_std__V__allocator_D_2__std__PEBUFutureImageOption_3__Z_4HA);
    if ( __TSS0__1__Stringize___FutureObjectJobManager_VImage__UFutureImageOption_extension___extension__SA_AV__basic_string_DU__char_traits_D_std__V__allocator_D_2__std__PEBUFutureImageOption_3__Z_4HA == -1 )
    {
      v5 = 1285;
      *(_WORD *)&`extension::FutureObjectJobManager<Image,extension::FutureImageOption>::Stringize'::`2'::default_opt.transparent = 0;
      `extension::FutureObjectJobManager<Image,extension::FutureImageOption>::Stringize'::`2'::default_opt.option = 0;
      if ( GAME_SCREEN_HEIGHT != 1080 )
        v5 = 1290;
      `extension::FutureObjectJobManager<Image,extension::FutureImageOption>::Stringize'::`2'::default_opt.texParam = v5;
      Init_thread_footer(&__TSS0__1__Stringize___FutureObjectJobManager_VImage__UFutureImageOption_extension___extension__SA_AV__basic_string_DU__char_traits_D_std__V__allocator_D_2__std__PEBUFutureImageOption_3__Z_4HA);
    }
  }
  if ( !opt
    || opt->transparent == `extension::FutureObjectJobManager<Image,extension::FutureImageOption>::Stringize'::`2'::default_opt.transparent
    && opt->filter == `extension::FutureObjectJobManager<Image,extension::FutureImageOption>::Stringize'::`2'::default_opt.filter
    && opt->option == `extension::FutureObjectJobManager<Image,extension::FutureImageOption>::Stringize'::`2'::default_opt.option
    && opt->texParam == `extension::FutureObjectJobManager<Image,extension::FutureImageOption>::Stringize'::`2'::default_opt.texParam )
  {
    result->_Mypair._Myval2._Myres = 15i64;
    v4 = result;
    result->_Mypair._Myval2._Mysize = 0i64;
    result->_Mypair._Myval2._Bx._Buf[0] = 0;
  }
  else
  {
    extension::FutureImageOption::stringize((extension::FutureImageOption *)opt, result);
    return result;
  }
  return v4;
}

std::string *__fastcall extension::AsyncWorker::ToLowerCasePath(std::string *result, const std::string *path_str)
{
  if ( path_str->_Mypair._Myval2._Myres >= 0x10 )
    path_str = (const std::string *)path_str->_Mypair._Myval2._Bx._Ptr;
  extension::AsyncWorker::ToLowerCasePath(result, path_str->_Mypair._Myval2._Bx._Buf);
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

std::string *__fastcall std::string::append(std::string *this, unsigned __int64 _Count, char _Ch)
{
  unsigned __int64 Mysize; // r8
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rcx
  std::string *Ptr; // rax
  bool v10; // cf
  std::string *v11; // rax

  Mysize = this->_Mypair._Myval2._Mysize;
  if ( ~Mysize <= _Count )
    std::_Xlength_error("string too long");
  v7 = Mysize + _Count;
  if ( _Count )
  {
    if ( v7 == -1i64 )
      std::_Xlength_error("string too long");
    if ( this->_Mypair._Myval2._Myres >= v7 )
    {
      if ( !v7 )
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
      if ( !v7 )
        return this;
    }
    v8 = this->_Mypair._Myval2._Mysize;
    if ( _Count == 1 )
    {
      if ( this->_Mypair._Myval2._Myres < 0x10 )
        this->_Mypair._Myval2._Bx._Buf[v8] = _Ch;
      else
        this->_Mypair._Myval2._Bx._Ptr[v8] = _Ch;
    }
    else
    {
      if ( this->_Mypair._Myval2._Myres < 0x10 )
        Ptr = this;
      else
        Ptr = (std::string *)this->_Mypair._Myval2._Bx._Ptr;
      memset(&Ptr->_Mypair._Myval2._Bx._Buf[v8], _Ch, _Count);
    }
    v10 = this->_Mypair._Myval2._Myres < 0x10;
    this->_Mypair._Myval2._Mysize = v7;
    if ( v10 )
      v11 = this;
    else
      v11 = (std::string *)this->_Mypair._Myval2._Bx._Ptr;
    v11->_Mypair._Myval2._Bx._Buf[v7] = 0;
  }
  return this;
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

void __fastcall easing(
        float *outParams1,
        float *outParams2,
        float frame,
        float aniFrame1,
        float p11,
        float p12,
        Tween::EasingType type1,
        float aniFrame2,
        float p21,
        float p22,
        Tween::EasingType type2,
        float aniFrame3,
        float p31,
        float p32,
        Tween::EasingType type3,
        float aniFrame4,
        float p41,
        float p42,
        Tween::EasingType type4,
        float aniFrame5,
        float p51,
        float p52,
        Tween::EasingType type5,
        float aniFrame6,
        float p61,
        float p62,
        Tween::EasingType type6)
{
  float v28; // xmm6_4
  float v29; // xmm6_4
  float v30; // xmm6_4
  float v31; // xmm6_4
  float v32; // xmm6_4
  float v33; // xmm6_4
  float v34; // xmm6_4

  if ( *(float *)&type1 < frame )
  {
    if ( p22 < frame )
    {
      if ( p31 < frame )
      {
        if ( aniFrame4 < frame )
        {
          if ( *(float *)&type4 < frame )
          {
            if ( p52 < frame )
            {
              if ( p61 < frame )
              {
                *outParams1 = p62;
                *(_DWORD *)outParams2 = type6;
              }
              else
              {
                v34 = (float)(frame - p52) / (float)(p61 - p52);
                *outParams1 = Tween::easing(*(float *)&type5, p62, v34, Linear);
                *outParams2 = Tween::easing(aniFrame6, *(float *)&type6, v34, Linear);
              }
            }
            else
            {
              v33 = (float)(frame - *(float *)&type4) / (float)(p52 - *(float *)&type4);
              *outParams1 = Tween::easing(aniFrame5, *(float *)&type5, v33, Linear);
              *outParams2 = Tween::easing(p51, aniFrame6, v33, Linear);
            }
          }
          else
          {
            v32 = (float)(frame - aniFrame4) / (float)(*(float *)&type4 - aniFrame4);
            *outParams1 = Tween::easing(p41, aniFrame5, v32, Linear);
            *outParams2 = Tween::easing(p42, p51, v32, Linear);
          }
        }
        else
        {
          v31 = (float)(frame - p31) / (float)(aniFrame4 - p31);
          *outParams1 = Tween::easing(p32, p41, v31, Linear);
          *outParams2 = Tween::easing(*(float *)&type3, p42, v31, Linear);
        }
      }
      else
      {
        v30 = (float)(frame - p22) / (float)(p31 - p22);
        *outParams1 = Tween::easing(*(float *)&type2, p32, v30, Linear);
        *outParams2 = Tween::easing(aniFrame3, *(float *)&type3, v30, Linear);
      }
    }
    else
    {
      v29 = (float)(frame - *(float *)&type1) / (float)(p22 - *(float *)&type1);
      *outParams1 = Tween::easing(aniFrame2, *(float *)&type2, v29, Linear);
      *outParams2 = Tween::easing(p21, aniFrame3, v29, Linear);
    }
  }
  else
  {
    v28 = (float)(frame - aniFrame1) / (float)(*(float *)&type1 - aniFrame1);
    *outParams1 = Tween::easing(p11, aniFrame2, v28, Linear);
    *outParams2 = Tween::easing(p12, p21, v28, Linear);
  }
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

extension::RefCountablePtr<extension::BasicFutureObject<Image,extension::FutureImageOption>::Body> *__fastcall extension::BasicFutureObject<Image,extension::FutureImageOption>::AssetCache::getCachedOrLoadStart(
        extension::BasicFutureObject<Image,extension::FutureImageOption>::AssetCache *this,
        extension::RefCountablePtr<extension::BasicFutureObject<Image,extension::FutureImageOption>::Body> *result,
        std::string *name,
        const extension::FutureImageOption *opt)
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
  extension::BasicFutureObject<Image,extension::FutureImageOption>::Body *m_ptr; // rcx
  extension::AsyncContent<Image> *v28; // rax
  extension::AsyncContent<Image> *v29; // rbx
  std::string *v30; // rcx
  std::string *v31; // rax
  std::string *v32; // rax
  std::string *v33; // rcx
  std::string *v34; // rax
  std::string *v35; // rax
  extension::BasicFutureObject<Image,extension::FutureImageOption>::Body *v36; // rbx
  extension::RefCountablePtr<extension::AsyncContent<Image> > *v37; // rax
  extension::BasicFutureObject<Image,extension::FutureImageOption>::Body *v38; // rcx
  extension::BasicFutureObject<Image,extension::FutureImageOption>::Body *v39; // rax
  extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> *v40; // rax
  extension::BasicFutureObject<Image,extension::FutureImageOption>::Body *v41; // rcx
  std::_List_node<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<Image,extension::FutureImageOption>::Body> >,void *> *Next; // rbx
  std::_List_const_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > > > > v43; // r8
  extension::RefCountableWeakSupportBase::WeakProxy *v44; // rax
  extension::BasicFutureObject<Image,extension::FutureImageOption>::Body *v46; // [rsp+28h] [rbp-D8h]
  extension::RefCountableWeakSupportBase::WeakProxy *block; // [rsp+30h] [rbp-D0h]
  extension::RefCountablePtr<extension::AsyncContent<Image> > v48; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v49; // [rsp+40h] [rbp-C0h]
  extension::RefCountablePtr<extension::BasicFutureObject<Image,extension::FutureImageOption>::Body> *v50; // [rsp+48h] [rbp-B8h]
  extension::BasicFutureObject<Image,extension::FutureImageOption>::Body *v51; // [rsp+50h] [rbp-B0h]
  std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > > > > v52; // [rsp+60h] [rbp-A0h] BYREF
  extension::ExSimpleLockable<extension::BasicFutureObject<Image,extension::FutureImageOption>::AssetCache> *v53; // [rsp+68h] [rbp-98h]
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
  extension::FutureObjectJobManager<Image,extension::FutureImageOption>::Stringize(&_Right, opt);
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
  v53 = &extension::BasicFutureObject<Image,extension::FutureImageOption>::s_cacheManager.extension::ExSimpleLockable<extension::BasicFutureObject<Image,extension::FutureImageOption>::AssetCache>;
  v54 = 1;
  EnterCriticalSection((LPCRITICAL_SECTION)&extension::BasicFutureObject<Image,extension::FutureImageOption>::s_cacheManager.extension::ExSimpleLockable<extension::BasicFutureObject<Image,extension::FutureImageOption>::AssetCache>);
  v25 = (extension::RCWeakPtr<extension::exsound_detail::SoundNameRegistry::NameBuffer> *)std::unordered_map<std::string,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>>::operator[](
                                                                                            (std::unordered_map<std::string,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body>> *)&extension::BasicFutureObject<Image,extension::FutureImageOption>::s_cacheManager.m_cachedObjectMap,
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
            ((void (__fastcall *)(extension::BasicFutureObject<Image,extension::FutureImageOption>::Body *, __int64))m_ptr->~RefCountableWeakSupportBase)(
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
    v36 = (extension::BasicFutureObject<Image,extension::FutureImageOption>::Body *)operator new(0x18ui64);
    v51 = v36;
    v37 = extension::FutureObjectJobManager<Image,extension::FutureImageOption>::LoadStart(&v48, name, &_Right, opt);
    extension::BasicFutureObject<Image,extension::FutureImageOption>::Body::Body(
      v36,
      (extension::RefCountablePtr<extension::AsyncContent<Image> >)v37);
    v38 = result->m_ptr;
    result->m_ptr = v39;
    if ( v38
      && _InterlockedExchangeAdd64(
           (volatile signed __int64 *)&v38->m_refCount.m_ptr->m_sharedCount,
           0xFFFFFFFFFFFFFFFFui64) == 1 )
    {
      ((void (__fastcall *)(extension::BasicFutureObject<Image,extension::FutureImageOption>::Body *, __int64))v38->~RefCountableWeakSupportBase)(
        v38,
        1i64);
    }
    v40 = std::unordered_map<std::string,extension::RCWeakPtr<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body>>::operator[](
            (std::unordered_map<std::string,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body>> *)&extension::BasicFutureObject<Image,extension::FutureImageOption>::s_cacheManager.m_cachedObjectMap,
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
  Next = extension::BasicFutureObject<Image,extension::FutureImageOption>::s_cacheManager.m_cachedObjectMap._List._Mypair._Myval2._Myhead->_Next;
  while ( Next != extension::BasicFutureObject<Image,extension::FutureImageOption>::s_cacheManager.m_cachedObjectMap._List._Mypair._Myval2._Myhead )
  {
    v43._Ptr = (std::_List_node<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> >,void *> *)Next;
    v44 = Next->_Myval.second.m_proxy.m_ptr;
    Next = Next->_Next;
    if ( !v44 || !v44->m_sharedCount.m_value._My_val )
      std::_Hash<std::_Umap_traits<std::string,extension::RCWeakPtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body>,std::_Uhash_compare<std::string,std::hash<std::string>,std::equal_to<std::string>>,std::allocator<std::pair<std::string const,extension::RCWeakPtr<extension::BasicFutureObject<OGLFigure,extension::FutureFigureOption>::Body>>>,0>>::erase(
        (std::_Hash<std::_Umap_traits<std::string,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body>,std::_Uhash_compare<std::string,std::hash<std::string >,std::equal_to<std::string > >,std::allocator<std::pair<std::string const ,extension::RCWeakPtr<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body> > >,0> > *)&extension::BasicFutureObject<Image,extension::FutureImageOption>::s_cacheManager.m_cachedObjectMap,
        &v52,
        v43);
  }
  extension::lockable_detail::LockUnlock(
    &extension::BasicFutureObject<Image,extension::FutureImageOption>::s_cacheManager.extension::ExSimpleLockable<extension::BasicFutureObject<Image,extension::FutureImageOption>::AssetCache>,
    -1);
  std::string::~string(&_Right);
  std::string::~string(&_Keyval);
  std::string::~string(name);
  return result;
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

