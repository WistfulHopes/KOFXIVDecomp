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
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/math.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/rapper/graphicsopt.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlecall/battlecallshader.cpp"

std::piecewise_construct_t std::piecewise_construct; // 0x14088A51C//decompilation failure at 14088A51C!
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
        Tween::EasingType type6,
        float aniFrame7,
        float p71,
        float p72)
{
  float v31; // xmm6_4
  float v32; // xmm6_4
  float v33; // xmm6_4
  float v34; // xmm6_4
  float v35; // xmm6_4
  float v36; // xmm6_4
  float v37; // xmm6_4
  float v38; // xmm6_4

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
                if ( aniFrame7 < frame )
                {
                  *outParams1 = p71;
                  *outParams2 = p72;
                }
                else
                {
                  v38 = (float)(frame - p61) / (float)(aniFrame7 - p61);
                  *outParams1 = Tween::easing(p62, p71, v38, Linear);
                  *outParams2 = Tween::easing(*(float *)&type6, p72, v38, Linear);
                }
              }
              else
              {
                v37 = (float)(frame - p52) / (float)(p61 - p52);
                *outParams1 = Tween::easing(*(float *)&type5, p62, v37, Linear);
                *outParams2 = Tween::easing(aniFrame6, *(float *)&type6, v37, Linear);
              }
            }
            else
            {
              v36 = (float)(frame - *(float *)&type4) / (float)(p52 - *(float *)&type4);
              *outParams1 = Tween::easing(aniFrame5, *(float *)&type5, v36, Linear);
              *outParams2 = Tween::easing(p51, aniFrame6, v36, Linear);
            }
          }
          else
          {
            v35 = (float)(frame - aniFrame4) / (float)(*(float *)&type4 - aniFrame4);
            *outParams1 = Tween::easing(p41, aniFrame5, v35, Linear);
            *outParams2 = Tween::easing(p42, p51, v35, Linear);
          }
        }
        else
        {
          v34 = (float)(frame - p31) / (float)(aniFrame4 - p31);
          *outParams1 = Tween::easing(p32, p41, v34, Linear);
          *outParams2 = Tween::easing(*(float *)&type3, p42, v34, Linear);
        }
      }
      else
      {
        v33 = (float)(frame - p22) / (float)(p31 - p22);
        *outParams1 = Tween::easing(*(float *)&type2, p32, v33, Linear);
        *outParams2 = Tween::easing(aniFrame3, *(float *)&type3, v33, Linear);
      }
    }
    else
    {
      v32 = (float)(frame - *(float *)&type1) / (float)(p22 - *(float *)&type1);
      *outParams1 = Tween::easing(aniFrame2, *(float *)&type2, v32, Linear);
      *outParams2 = Tween::easing(p21, aniFrame3, v32, Linear);
    }
  }
  else
  {
    v31 = (float)(frame - aniFrame1) / (float)(*(float *)&type1 - aniFrame1);
    *outParams1 = Tween::easing(p11, aniFrame2, v31, Linear);
    *outParams2 = Tween::easing(p12, p21, v31, Linear);
  }
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
        float aniFrame6)
{
  float v25; // xmm6_4
  float v26; // xmm6_4
  float v27; // xmm6_4
  float v28; // xmm6_4
  float v29; // xmm6_4
  float v30; // xmm6_4

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
              *(_DWORD *)outParams1 = type5;
              *outParams2 = aniFrame6;
            }
            else
            {
              v30 = (float)(frame - *(float *)&type4) / (float)(p52 - *(float *)&type4);
              *outParams1 = Tween::easing(aniFrame5, *(float *)&type5, v30, Linear);
              *outParams2 = Tween::easing(p51, aniFrame6, v30, Linear);
            }
          }
          else
          {
            v29 = (float)(frame - aniFrame4) / (float)(*(float *)&type4 - aniFrame4);
            *outParams1 = Tween::easing(p41, aniFrame5, v29, Linear);
            *outParams2 = Tween::easing(p42, p51, v29, Linear);
          }
        }
        else
        {
          v28 = (float)(frame - p31) / (float)(aniFrame4 - p31);
          *outParams1 = Tween::easing(p32, p41, v28, Linear);
          *outParams2 = Tween::easing(*(float *)&type3, p42, v28, Linear);
        }
      }
      else
      {
        v27 = (float)(frame - p22) / (float)(p31 - p22);
        *outParams1 = Tween::easing(*(float *)&type2, p32, v27, Linear);
        *outParams2 = Tween::easing(aniFrame3, *(float *)&type3, v27, Linear);
      }
    }
    else
    {
      v26 = (float)(frame - *(float *)&type1) / (float)(p22 - *(float *)&type1);
      *outParams1 = Tween::easing(aniFrame2, *(float *)&type2, v26, Linear);
      *outParams2 = Tween::easing(p21, aniFrame3, v26, Linear);
    }
  }
  else
  {
    v25 = (float)(frame - aniFrame1) / (float)(*(float *)&type1 - aniFrame1);
    *outParams1 = Tween::easing(p11, aniFrame2, v25, Linear);
    *outParams2 = Tween::easing(p12, p21, v25, Linear);
  }
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
        float p51)
{
  float v22; // xmm6_4
  float v23; // xmm6_4
  float v24; // xmm6_4
  float v25; // xmm6_4
  float v26; // xmm6_4

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
            *outParams1 = aniFrame5;
            *outParams2 = p51;
          }
          else
          {
            v26 = (float)(frame - aniFrame4) / (float)(*(float *)&type4 - aniFrame4);
            *outParams1 = Tween::easing(p41, aniFrame5, v26, Linear);
            *outParams2 = Tween::easing(p42, p51, v26, Linear);
          }
        }
        else
        {
          v25 = (float)(frame - p31) / (float)(aniFrame4 - p31);
          *outParams1 = Tween::easing(p32, p41, v25, Linear);
          *outParams2 = Tween::easing(*(float *)&type3, p42, v25, Linear);
        }
      }
      else
      {
        v24 = (float)(frame - p22) / (float)(p31 - p22);
        *outParams1 = Tween::easing(*(float *)&type2, p32, v24, Linear);
        *outParams2 = Tween::easing(aniFrame3, *(float *)&type3, v24, Linear);
      }
    }
    else
    {
      v23 = (float)(frame - *(float *)&type1) / (float)(p22 - *(float *)&type1);
      *outParams1 = Tween::easing(aniFrame2, *(float *)&type2, v23, Linear);
      *outParams2 = Tween::easing(p21, aniFrame3, v23, Linear);
    }
  }
  else
  {
    v22 = (float)(frame - aniFrame1) / (float)(*(float *)&type1 - aniFrame1);
    *outParams1 = Tween::easing(p11, aniFrame2, v22, Linear);
    *outParams2 = Tween::easing(p12, p21, v22, Linear);
  }
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
        float p42)
{
  float v19; // xmm6_4
  float v20; // xmm6_4
  float v21; // xmm6_4
  float v22; // xmm0_4
  float v23; // xmm1_4

  if ( frame < aniFrame1 )
  {
    v22 = p11;
    v23 = p12;
  }
  else
  {
    if ( aniFrame2 >= frame )
    {
      v19 = (float)(frame - aniFrame1) / (float)(aniFrame2 - aniFrame1);
      *outParams1 = Tween::easing(p11, p21, v19, Linear);
      *outParams2 = Tween::easing(p12, p22, v19, Linear);
      return;
    }
    if ( aniFrame3 >= frame )
    {
      v20 = (float)(frame - aniFrame2) / (float)(aniFrame3 - aniFrame2);
      *outParams1 = Tween::easing(p21, p31, v20, Linear);
      *outParams2 = Tween::easing(p22, p32, v20, Linear);
      return;
    }
    if ( aniFrame4 >= frame )
    {
      v21 = (float)(frame - aniFrame3) / (float)(aniFrame4 - aniFrame3);
      *outParams1 = Tween::easing(p31, p41, v21, Linear);
      *outParams2 = Tween::easing(p32, p42, v21, Linear);
      return;
    }
    v22 = p41;
    v23 = p42;
  }
  *outParams2 = v23;
  *outParams1 = v22;
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
        float p32)
{
  float v15; // xmm6_4
  float v16; // xmm6_4
  float v17; // xmm0_4
  float v18; // xmm1_4

  if ( frame < aniFrame1 )
  {
    v17 = p11;
    v18 = p12;
  }
  else
  {
    if ( aniFrame2 >= frame )
    {
      v15 = (float)(frame - aniFrame1) / (float)(aniFrame2 - aniFrame1);
      *outParams1 = Tween::easing(p11, p21, v15, Linear);
      *outParams2 = Tween::easing(p12, p22, v15, Linear);
      return;
    }
    if ( aniFrame3 >= frame )
    {
      v16 = (float)(frame - aniFrame2) / (float)(aniFrame3 - aniFrame2);
      *outParams1 = Tween::easing(p21, p31, v16, Linear);
      *outParams2 = Tween::easing(p22, p32, v16, Linear);
      return;
    }
    v17 = p31;
    v18 = p32;
  }
  *outParams2 = v18;
  *outParams1 = v17;
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
        float p22)
{
  float v11; // xmm6_4
  float v12; // xmm0_4
  float v13; // xmm1_4

  if ( frame < aniFrame1 )
  {
    v12 = p11;
    v13 = p12;
  }
  else
  {
    if ( aniFrame2 >= frame )
    {
      v11 = (float)(frame - aniFrame1) / (float)(aniFrame2 - aniFrame1);
      *outParams1 = Tween::easing(p11, p21, v11, Linear);
      *outParams2 = Tween::easing(p12, p22, v11, Linear);
      return;
    }
    v12 = p21;
    v13 = p22;
  }
  *outParams2 = v13;
  *outParams1 = v12;
}

void __fastcall easing(
        float *outParam,
        float frame,
        float aniFrame1,
        float p1,
        Tween::EasingType type1,
        float aniFrame2,
        float p2,
        Tween::EasingType type2,
        float aniFrame3,
        float p3,
        Tween::EasingType type3,
        float aniFrame4,
        float p4,
        Tween::EasingType type4)
{
  if ( *(float *)&type1 < frame )
  {
    if ( p2 < frame )
    {
      if ( aniFrame3 < frame )
      {
        if ( *(float *)&type3 < frame )
        {
          if ( p4 < frame )
            *(_DWORD *)outParam = type4;
          else
            *outParam = Tween::easing(
                          aniFrame4,
                          *(float *)&type4,
                          (float)(frame - *(float *)&type3) / (float)(p4 - *(float *)&type3),
                          Linear);
        }
        else
        {
          *outParam = Tween::easing(
                        p3,
                        aniFrame4,
                        (float)(frame - aniFrame3) / (float)(*(float *)&type3 - aniFrame3),
                        Linear);
        }
      }
      else
      {
        *outParam = Tween::easing(*(float *)&type2, p3, (float)(frame - p2) / (float)(aniFrame3 - p2), Linear);
      }
    }
    else
    {
      *outParam = Tween::easing(
                    aniFrame2,
                    *(float *)&type2,
                    (float)(frame - *(float *)&type1) / (float)(p2 - *(float *)&type1),
                    Linear);
    }
  }
  else
  {
    *outParam = Tween::easing(p1, aniFrame2, (float)(frame - aniFrame1) / (float)(*(float *)&type1 - aniFrame1), Linear);
  }
}

void __fastcall easing(
        float *outParam,
        float frame,
        float aniFrame1,
        float p1,
        Tween::EasingType type1,
        float aniFrame2,
        float p2,
        Tween::EasingType type2,
        float aniFrame3,
        float p3,
        Tween::EasingType type3,
        float aniFrame4,
        float p4,
        Tween::EasingType type4,
        float aniFrame5,
        float p5)
{
  if ( frame < aniFrame1 )
  {
    *outParam = p1;
  }
  else if ( aniFrame2 < frame )
  {
    if ( aniFrame3 < frame )
    {
      if ( aniFrame4 < frame )
      {
        if ( aniFrame5 < frame )
          *outParam = p5;
        else
          *outParam = Tween::easing(p4, p5, (float)(frame - aniFrame4) / (float)(aniFrame5 - aniFrame4), Linear);
      }
      else
      {
        *outParam = Tween::easing(p3, p4, (float)(frame - aniFrame3) / (float)(aniFrame4 - aniFrame3), Linear);
      }
    }
    else
    {
      *outParam = Tween::easing(p2, p3, (float)(frame - aniFrame2) / (float)(aniFrame3 - aniFrame2), Linear);
    }
  }
  else
  {
    *outParam = Tween::easing(p1, p2, (float)(frame - aniFrame1) / (float)(aniFrame2 - aniFrame1), Linear);
  }
}

void __fastcall easing(
        float *outParam,
        float frame,
        float aniFrame1,
        float p1,
        Tween::EasingType type1,
        float aniFrame2,
        float p2,
        Tween::EasingType type2,
        float aniFrame3,
        float p3,
        Tween::EasingType type3,
        float aniFrame4,
        float p4)
{
  if ( frame < aniFrame1 )
  {
    *outParam = p1;
  }
  else if ( aniFrame2 < frame )
  {
    if ( aniFrame3 < frame )
    {
      if ( aniFrame4 < frame )
        *outParam = p4;
      else
        *outParam = Tween::easing(p3, p4, (float)(frame - aniFrame3) / (float)(aniFrame4 - aniFrame3), Linear);
    }
    else
    {
      *outParam = Tween::easing(p2, p3, (float)(frame - aniFrame2) / (float)(aniFrame3 - aniFrame2), Linear);
    }
  }
  else
  {
    *outParam = Tween::easing(p1, p2, (float)(frame - aniFrame1) / (float)(aniFrame2 - aniFrame1), Linear);
  }
}

void __fastcall easing(
        float *outParam,
        float frame,
        float aniFrame1,
        float p1,
        Tween::EasingType type1,
        float aniFrame2,
        float p2,
        Tween::EasingType type2,
        float aniFrame3,
        float p3)
{
  if ( frame < aniFrame1 )
  {
    *outParam = p1;
  }
  else if ( aniFrame2 < frame )
  {
    if ( aniFrame3 < frame )
      *outParam = p3;
    else
      *outParam = Tween::easing(p2, p3, (float)(frame - aniFrame2) / (float)(aniFrame3 - aniFrame2), Linear);
  }
  else
  {
    *outParam = Tween::easing(p1, p2, (float)(frame - aniFrame1) / (float)(aniFrame2 - aniFrame1), Linear);
  }
}

float __fastcall Tween::easing(float startNum, float endNum, float t, Tween::EasingType type)
{
  float v4; // xmm3_4
  float v5; // xmm7_4
  float v6; // xmm8_4
  float v7; // xmm7_4
  float v8; // xmm2_4
  float v9; // xmm3_4
  bool v10; // cc
  float v11; // xmm2_4
  float v12; // xmm0_4
  float v13; // xmm1_4
  float v14; // xmm0_4
  float v15; // xmm1_4
  float v16; // xmm2_4
  float v17; // xmm0_4
  float v18; // xmm2_4
  float v19; // xmm9_4
  float v20; // xmm2_4
  float v21; // xmm0_4
  float v22; // xmm2_4
  float v23; // xmm2_4
  float v24; // xmm0_4

  v4 = t;
  v5 = endNum;
  v6 = startNum;
  if ( startNum != endNum )
  {
    if ( startNum > endNum )
    {
      v6 = endNum;
      v5 = startNum;
      v4 = 1.0 - t;
    }
    if ( v4 > 0.0 )
    {
      if ( v4 < 1.0 )
      {
        v7 = v5 - v6;
        if ( v7 < 0.0 )
          LODWORD(v7) ^= _xmm;
        v8 = (float)(v7 * v4) / v7;
        switch ( type )
        {
          case InQuad:
            v8 = v8 * v8;
            goto LABEL_50;
          case OutQuad:
            v8 = 1.0 - (float)((float)(1.0 - v8) * (float)(1.0 - v8));
            goto LABEL_50;
          case InOutQuad:
            if ( v8 >= 0.5 )
              v8 = (float)((float)(1.0
                                 - (float)((float)(1.0 - (float)((float)(v8 + v8) - 1.0))
                                         * (float)(1.0 - (float)((float)(v8 + v8) - 1.0))))
                         * 0.5)
                 + 0.5;
            else
              v8 = (float)((float)(v8 + v8) * (float)(v8 + v8)) * 0.5;
            goto LABEL_50;
          case InCubic:
            v8 = (float)(v8 * v8) * v8;
            goto LABEL_50;
          case OutCubic:
            v8 = 1.0 - (float)((float)((float)(1.0 - v8) * (float)(1.0 - v8)) * (float)(1.0 - v8));
            goto LABEL_50;
          case InOutCubic:
            v9 = FLOAT_0_5;
            v10 = v8 >= 0.5;
            v11 = v8 + v8;
            if ( v10 )
            {
              v12 = 1.0 - (float)(v11 - 1.0);
              v13 = v12 * v12;
              goto LABEL_49;
            }
            v8 = (float)((float)(v11 * v11) * v11) * 0.5;
            goto LABEL_50;
          case InQuart:
            v8 = (float)((float)(v8 * v8) * v8) * v8;
            goto LABEL_50;
          case OutQuart:
            v14 = 1.0 - v8;
            v15 = 1.0 - v8;
            goto LABEL_23;
          case InOutQuart:
            v9 = FLOAT_0_5;
            v10 = v8 >= 0.5;
            v16 = v8 + v8;
            if ( !v10 )
            {
              v17 = v16;
              goto LABEL_26;
            }
            v12 = 1.0 - (float)(v16 - 1.0);
            v13 = (float)(v12 * v12) * v12;
            goto LABEL_49;
          case InQuint:
            v8 = (float)((float)((float)(v8 * v8) * v8) * v8) * v8;
            goto LABEL_50;
          case OutQuint:
            v14 = 1.0 - v8;
            v15 = v14 * v14;
LABEL_23:
            v8 = 1.0 - (float)((float)((float)(v15 * v14) * v14) * v14);
            goto LABEL_50;
          case InOutQuint:
            v9 = FLOAT_0_5;
            v10 = v8 >= 0.5;
            v18 = v8 + v8;
            if ( v10 )
            {
              v12 = 1.0 - (float)(v18 - 1.0);
              v13 = (float)((float)(v12 * v12) * v12) * v12;
              goto LABEL_49;
            }
            v17 = v18;
            v16 = v18 * v18;
LABEL_26:
            v8 = (float)((float)((float)(v16 * v17) * v17) * v17) * v9;
            goto LABEL_50;
          case InSine:
            v8 = 1.0 - cosf((float)(v8 * 3.1415927) * 0.5);
            goto LABEL_50;
          case OutSine:
            v8 = 1.0 - (float)(1.0 - cosf((float)((float)(1.0 - v8) * 3.1415927) * 0.5));
            goto LABEL_50;
          case InOutSine:
            v19 = FLOAT_0_5;
            v10 = v8 >= 0.5;
            v20 = v8 + v8;
            if ( !v10 )
            {
              v8 = (float)(1.0 - cosf((float)(v20 * 3.1415927) * 0.5)) * 0.5;
              goto LABEL_50;
            }
            v21 = cosf((float)((float)(1.0 - (float)(v20 - 1.0)) * 3.1415927) * 0.5);
            goto LABEL_38;
          case InCirc:
            v8 = 1.0 - sqrtf(1.0 - (float)(v8 * v8));
            goto LABEL_50;
          case OutCirc:
            v8 = 1.0 - (float)(1.0 - sqrtf(1.0 - (float)((float)(1.0 - v8) * (float)(1.0 - v8))));
            goto LABEL_50;
          case InOutCirc:
            v19 = FLOAT_0_5;
            v10 = v8 >= 0.5;
            v22 = v8 + v8;
            if ( v10 )
            {
              v21 = sqrtf(1.0 - (float)((float)(1.0 - (float)(v22 - 1.0)) * (float)(1.0 - (float)(v22 - 1.0))));
LABEL_38:
              v8 = (float)((float)(1.0 - (float)(1.0 - v21)) * v19) + v19;
            }
            else
            {
              v8 = (float)(1.0 - sqrtf(1.0 - (float)(v22 * v22))) * 0.5;
            }
LABEL_50:
            startNum = (float)(v8 * v7) + v6;
            break;
          case InBack:
            v8 = (float)(v8 * v8) * (float)((float)(v8 * 2.70158) - 1.70158);
            goto LABEL_50;
          case OutBack:
            v8 = 1.0
               - (float)((float)((float)(1.0 - v8) * (float)(1.0 - v8))
                       * (float)((float)((float)(1.0 - v8) * 2.70158) - 1.70158));
            goto LABEL_50;
          case InOutBack:
            v9 = FLOAT_0_5;
            v10 = v8 >= 0.5;
            v23 = v8 + v8;
            if ( v10 )
            {
              v24 = 1.0 - (float)(v23 - 1.0);
              v13 = v24 * v24;
              v12 = (float)(v24 * 2.70158) - 1.70158;
LABEL_49:
              v8 = (float)((float)(1.0 - (float)(v13 * v12)) * v9) + v9;
            }
            else
            {
              v8 = (float)((float)(v23 * v23) * (float)((float)(v23 * 2.70158) - 1.70158)) * 0.5;
            }
            goto LABEL_50;
          default:
            goto LABEL_50;
        }
      }
      else
      {
        return v5;
      }
    }
    else
    {
      return v6;
    }
  }
  return startNum;
}

float __fastcall BSUtil::toOGLAngle(float angle)
{
  float v1; // xmm3_4

  v1 = angle;
  if ( angle > 360.0 )
    return (float)((float)(angle - (float)((float)(int)(float)(angle / 360.0) * 360.0)) / 360.0) * 4096.0;
  if ( angle < 0.0 )
  {
    if ( angle >= -360.0 )
      return (float)((float)(angle + 360.0) / 360.0) * 4096.0;
    v1 = 360.0 - (float)((float)((float)(int)(float)(angle / 360.0) * 360.0) + angle);
  }
  return (float)(v1 / 360.0) * 4096.0;
}

