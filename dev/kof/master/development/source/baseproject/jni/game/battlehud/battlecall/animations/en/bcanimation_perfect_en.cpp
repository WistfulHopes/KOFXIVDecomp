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
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlecall/animations/bcanimation_perfect.h"
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
#include "dev/kof/master/development/source/ps4project/baseproject/extension/asyncjob.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/rapper/graphicsopt.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlecall/animations/battlecallanimation.cpp"

enum `anonymous-namespace'::<unnamed-enum-IMAGEID_DEF>
{
	IMAGEID_DEF = 0,
	IMAGEID_MAX = 1,
};
std::piecewise_construct_t std::piecewise_construct; // 0x14088B594
const `anonymous-namespace'::<unnamed-enum-IMAGEID_DEF> `anonymous namespace'::IMAGEID_MAX = 0x1;
const `anonymous-namespace'::<unnamed-enum-PERFECT_EFF_FLARE> `anonymous namespace'::PERFECT_EFF_SPARKS_S_02 = 0x9;
const `anonymous-namespace'::<unnamed-enum-PERFECT_EFF_FLARE> `anonymous namespace'::PERFECT_EFF_LINE = 0x1;
const `anonymous-namespace'::<unnamed-enum-PERFECT_EFF_FLARE> `anonymous namespace'::PERFECT_EFF_SPARKS_02 = 0x4;
const `anonymous-namespace'::<unnamed-enum-PERFECT_EFF_FLARE> `anonymous namespace'::PERFECT_EFF_SPARKS_01 = 0x3;
const `anonymous-namespace'::<unnamed-enum-PERFECT_EFF_FLARE> `anonymous namespace'::PERFECT_EFF_SPARKS_04 = 0x5;
const `anonymous-namespace'::<unnamed-enum-PERFECT_EFF_FLARE> `anonymous namespace'::PERFECT_EFF_FLARE = 0x0;
const char * ImageFilePath_Perfect; // 0x14088BAC8
const _C_CONV ImageRects_Perfect[68]; // 0x14088BEF0
const `anonymous-namespace'::<unnamed-enum-IMAGEID_DEF> `anonymous namespace'::IMAGEID_DEF = 0x0;
const `anonymous-namespace'::<unnamed-enum-PERFECT_EFF_FLARE> `anonymous namespace'::PERFECT_EFF_SPARKS_00 = 0x2;
const `anonymous-namespace'::<unnamed-enum-PERFECT_EFF_FLARE> `anonymous namespace'::PERFECT_EFF_SPARKS_03 = 0x6;
const `anonymous-namespace'::<unnamed-enum-PERFECT_EFF_FLARE> `anonymous namespace'::PERFECT_EFF_PERFECT_BURST = 0xF;
const `anonymous-namespace'::<unnamed-enum-PERFECT_EFF_FLARE> `anonymous namespace'::PERFECT_EFF_SPARKS_S_00 = 0x7;
const `anonymous-namespace'::<unnamed-enum-PERFECT_EFF_FLARE> `anonymous namespace'::PERFECT_EFF_SPARKS_S_01 = 0x8;
const `anonymous-namespace'::<unnamed-enum-PERFECT_EFF_FLARE> `anonymous namespace'::PERFECT_EFF_SPARKS_S_05 = 0xA;
const `anonymous-namespace'::<unnamed-enum-PERFECT_EFF_FLARE> `anonymous namespace'::PERFECT_EFF_SPARKS_S_03 = 0xB;
const `anonymous-namespace'::<unnamed-enum-PERFECT_EFF_FLARE> `anonymous namespace'::PERFECT_PERFECT = 0xE;
const `anonymous-namespace'::<unnamed-enum-PERFECT_EFF_FLARE> `anonymous namespace'::PERFECT_EFF_SPARKS_S_04 = 0xD;
void BattleCallAnimationPerfect::readResources_EN(); // 0x1400AE350
const `anonymous-namespace'::<unnamed-enum-PERFECT_EFF_FLARE> `anonymous namespace'::PERFECT_EFF_SPARKS_S_06 = 0xC;
void BattleCallAnimationPerfect::drawAnimations_EN(float frame); // 0x1400AE570//decompilation failure at 14088B594!
//decompilation failure at 14088BAC8!
//decompilation failure at 14088BEF0!
void __fastcall BattleCallAnimationPerfect::drawAnimations_EN(BattleCallAnimationPerfect *this, float frame)
{
  extension::AsyncStatus::Step v2; // edx
  __int64 v3; // rsi
  extension::AsyncContent<Image> *m_ptr; // rdi
  Image *Myval2; // rdi
  float p22; // xmm8_4
  float v7; // xmm9_4
  float v8; // xmm0_4
  float v9; // xmm0_4
  Graphics *v10; // rcx
  float v11; // xmm7_4
  float v12; // xmm11_4
  float v13; // xmm10_4
  float v14; // xmm6_4
  float p31; // xmm7_4
  float p52; // xmm6_4
  float v17; // xmm12_4
  float v18; // xmm0_4
  int v19; // ebx
  float v20; // xmm9_4
  float v21; // xmm12_4
  float v22; // xmm7_4
  __int64 v23; // r9
  Graphics *v24; // rcx
  __int64 v25; // r9
  float v26; // xmm0_4
  float v27; // xmm0_4
  float v28; // xmm0_4
  float v29; // xmm0_4
  float v30; // xmm0_4
  float v31; // xmm7_4
  float v32; // xmm0_4
  float v33; // xmm7_4
  Tween::EasingType p11; // [rsp+28h] [rbp-150h]
  Tween::EasingType p11c; // [rsp+28h] [rbp-150h]
  Tween::EasingType p11d; // [rsp+28h] [rbp-150h]
  Tween::EasingType p11e; // [rsp+28h] [rbp-150h]
  Tween::EasingType p11a; // [rsp+28h] [rbp-150h]
  Tween::EasingType p11f; // [rsp+28h] [rbp-150h]
  Tween::EasingType p11b; // [rsp+28h] [rbp-150h]
  Tween::EasingType type1; // [rsp+38h] [rbp-140h]
  Tween::EasingType type1a; // [rsp+38h] [rbp-140h]
  Tween::EasingType type1b; // [rsp+38h] [rbp-140h]
  Tween::EasingType type1c; // [rsp+38h] [rbp-140h]
  Tween::EasingType type1d; // [rsp+38h] [rbp-140h]
  Tween::EasingType type1e; // [rsp+38h] [rbp-140h]
  Tween::EasingType type1f; // [rsp+38h] [rbp-140h]
  Tween::EasingType type1g; // [rsp+38h] [rbp-140h]
  Tween::EasingType type1h; // [rsp+38h] [rbp-140h]
  Tween::EasingType type1i; // [rsp+38h] [rbp-140h]
  Tween::EasingType type1j; // [rsp+38h] [rbp-140h]
  Tween::EasingType type1k; // [rsp+38h] [rbp-140h]
  Tween::EasingType type1l; // [rsp+38h] [rbp-140h]
  Tween::EasingType type1m; // [rsp+38h] [rbp-140h]
  Tween::EasingType type1n; // [rsp+38h] [rbp-140h]
  Tween::EasingType type1o; // [rsp+38h] [rbp-140h]
  Tween::EasingType type1p; // [rsp+38h] [rbp-140h]
  Tween::EasingType type1q; // [rsp+38h] [rbp-140h]
  Tween::EasingType type1r; // [rsp+38h] [rbp-140h]
  Tween::EasingType type1s; // [rsp+38h] [rbp-140h]
  Tween::EasingType type1t; // [rsp+38h] [rbp-140h]
  Tween::EasingType type1u; // [rsp+38h] [rbp-140h]
  Tween::EasingType type1v; // [rsp+38h] [rbp-140h]
  Tween::EasingType type1w; // [rsp+38h] [rbp-140h]
  Tween::EasingType type1x; // [rsp+38h] [rbp-140h]
  Tween::EasingType type1y; // [rsp+38h] [rbp-140h]
  Tween::EasingType type1z; // [rsp+38h] [rbp-140h]
  Tween::EasingType type1ba; // [rsp+38h] [rbp-140h]
  Tween::EasingType type1bb; // [rsp+38h] [rbp-140h]
  Tween::EasingType aniFrame2; // [rsp+40h] [rbp-138h]
  int aniFrame2a; // [rsp+40h] [rbp-138h]
  Tween::EasingType aniFrame2f; // [rsp+40h] [rbp-138h]
  int aniFrame2g; // [rsp+40h] [rbp-138h]
  Tween::EasingType aniFrame2h; // [rsp+40h] [rbp-138h]
  int aniFrame2i; // [rsp+40h] [rbp-138h]
  int aniFrame2b; // [rsp+40h] [rbp-138h]
  Tween::EasingType aniFrame2j; // [rsp+40h] [rbp-138h]
  int aniFrame2k; // [rsp+40h] [rbp-138h]
  int aniFrame2c; // [rsp+40h] [rbp-138h]
  Tween::EasingType aniFrame2l; // [rsp+40h] [rbp-138h]
  int aniFrame2m; // [rsp+40h] [rbp-138h]
  int aniFrame2d; // [rsp+40h] [rbp-138h]
  int aniFrame2n; // [rsp+40h] [rbp-138h]
  int aniFrame2o; // [rsp+40h] [rbp-138h]
  int aniFrame2p; // [rsp+40h] [rbp-138h]
  int aniFrame2q; // [rsp+40h] [rbp-138h]
  int aniFrame2r; // [rsp+40h] [rbp-138h]
  int aniFrame2s; // [rsp+40h] [rbp-138h]
  int aniFrame2t; // [rsp+40h] [rbp-138h]
  int aniFrame2u; // [rsp+40h] [rbp-138h]
  int aniFrame2v; // [rsp+40h] [rbp-138h]
  int aniFrame2w; // [rsp+40h] [rbp-138h]
  int aniFrame2x; // [rsp+40h] [rbp-138h]
  int aniFrame2y; // [rsp+40h] [rbp-138h]
  int aniFrame2z; // [rsp+40h] [rbp-138h]
  int aniFrame2ba; // [rsp+40h] [rbp-138h]
  int aniFrame2bb; // [rsp+40h] [rbp-138h]
  Tween::EasingType aniFrame2e; // [rsp+40h] [rbp-138h]
  int aniFrame2bc; // [rsp+40h] [rbp-138h]
  Tween::EasingType type2; // [rsp+58h] [rbp-120h]
  Tween::EasingType type2a; // [rsp+58h] [rbp-120h]
  Tween::EasingType type2d; // [rsp+58h] [rbp-120h]
  Tween::EasingType type2b; // [rsp+58h] [rbp-120h]
  Tween::EasingType type2c; // [rsp+58h] [rbp-120h]
  Tween::EasingType type2e; // [rsp+58h] [rbp-120h]
  Tween::EasingType type2f; // [rsp+58h] [rbp-120h]
  Tween::EasingType type2g; // [rsp+58h] [rbp-120h]
  Tween::EasingType type2h; // [rsp+58h] [rbp-120h]
  Tween::EasingType type2i; // [rsp+58h] [rbp-120h]
  Tween::EasingType type2j; // [rsp+58h] [rbp-120h]
  Tween::EasingType type2k; // [rsp+58h] [rbp-120h]
  Tween::EasingType type2l; // [rsp+58h] [rbp-120h]
  Tween::EasingType type2m; // [rsp+58h] [rbp-120h]
  Tween::EasingType type2n; // [rsp+58h] [rbp-120h]
  Tween::EasingType type2o; // [rsp+58h] [rbp-120h]
  Tween::EasingType type2p; // [rsp+58h] [rbp-120h]
  Tween::EasingType type2q; // [rsp+58h] [rbp-120h]
  Tween::EasingType type2r; // [rsp+58h] [rbp-120h]
  Tween::EasingType type2s; // [rsp+58h] [rbp-120h]
  Tween::EasingType type2t; // [rsp+58h] [rbp-120h]
  Tween::EasingType type2u; // [rsp+58h] [rbp-120h]
  Tween::EasingType type2v; // [rsp+58h] [rbp-120h]
  Tween::EasingType type2w; // [rsp+58h] [rbp-120h]
  Tween::EasingType type2x; // [rsp+58h] [rbp-120h]
  Tween::EasingType p32; // [rsp+70h] [rbp-108h]
  Tween::EasingType p32a; // [rsp+70h] [rbp-108h]
  Tween::EasingType p32c; // [rsp+70h] [rbp-108h]
  Tween::EasingType p32b; // [rsp+70h] [rbp-108h]
  Tween::EasingType p32d; // [rsp+70h] [rbp-108h]
  Tween::EasingType type3; // [rsp+78h] [rbp-100h]
  Tween::EasingType type3a; // [rsp+78h] [rbp-100h]
  Tween::EasingType type3b; // [rsp+78h] [rbp-100h]
  Tween::EasingType type3c; // [rsp+78h] [rbp-100h]
  Tween::EasingType type3d; // [rsp+78h] [rbp-100h]
  Tween::EasingType type3e; // [rsp+78h] [rbp-100h]
  Tween::EasingType type3f; // [rsp+78h] [rbp-100h]
  Tween::EasingType type3g; // [rsp+78h] [rbp-100h]
  Tween::EasingType type3h; // [rsp+78h] [rbp-100h]
  float outParam; // [rsp+F8h] [rbp-80h] BYREF
  float scaley; // [rsp+FCh] [rbp-7Ch]
  float outParams1; // [rsp+1D8h] [rbp+60h] BYREF
  float outParams2; // [rsp+1E0h] [rbp+68h] BYREF
  float x; // [rsp+1E8h] [rbp+70h] BYREF
  float y; // [rsp+1F0h] [rbp+78h] BYREF

  v3 = *(_QWORD *)(*(_QWORD *)&AppMain::pApp + 112i64);
  m_ptr = this->m_pImages->m_body.m_ptr->m_content.m_ptr;
  if ( !m_ptr || m_ptr->m_isDataReleased )
  {
    Myval2 = 0i64;
  }
  else
  {
    if ( (m_ptr->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
      extension::AsyncStatus::waitFor(&m_ptr->m_status, v2);
    Myval2 = m_ptr->m_data._Mypair._Myval2;
  }
  p22 = *(float *)&FLOAT_5_0;
  v7 = *(float *)&FLOAT_0_1;
  LODWORD(scaley) = FLOAT_0_2;
  if ( frame >= 5.0 )
  {
    x = 960.0;
    easing(
      &outParams1,
      &outParams2,
      frame,
      5.0,
      1.3,
      1.3,
      FLOAT_8_0,
      1.0,
      1.0,
      52.0,
      FLOAT_1_0,
      1.0,
      58.0,
      1.2,
      FLOAT_1_2,
      59.0,
      1.2,
      0.1,
      FLOAT_61_0,
      1.3,
      0.1,
      64.0,
      FLOAT_1_5,
      0.0);
    if ( frame <= 8.0 )
    {
      v8 = (float)(frame - 5.0) / 3.0;
      if ( v8 > 0.0 )
      {
        if ( v8 < 1.0 )
          v9 = v8 + 0.0;
        else
          v9 = *(float *)&FLOAT_1_0;
        goto LABEL_18;
      }
      goto LABEL_17;
    }
    if ( frame > 55.0 )
    {
      if ( frame > 61.0 )
      {
LABEL_17:
        v9 = 0.0;
        goto LABEL_18;
      }
      v9 = Tween::easing(1.0, 0.0, (float)(frame - 55.0) / 6.0, Linear);
    }
    else
    {
      v9 = *(float *)&FLOAT_1_0;
    }
LABEL_18:
    v10 = *(Graphics **)(v3 + 8);
    outParam = v9;
    Graphics::setRenderMode(v10, 3, (int)(float)(v9 * 255.0));
    v11 = outParams2;
    v12 = FLOAT_540_0;
    v13 = FLOAT_960_0;
    v14 = outParams1;
    drawConv(Myval2, 960.0, 540.0, &ImageRects_Perfect_0[14], outParams1, outParams2, 0.0, aniFrame2a);
    easing(&outParam, frame, 5.0, 1.0, p11c, 8.0, 0.2, aniFrame2f, 52.0, 0.5, type2a, 58.0, 1.0, p32a, 64.0, 0.0);
    Graphics::setRenderMode(*(Graphics **)(v3 + 8), 1, (int)(float)(outParam * 255.0));
    drawConv(Myval2, 960.0, 540.0, &ImageRects_Perfect_0[14], v14, v11, 0.0, aniFrame2g);
    p31 = *(float *)&FLOAT_1_5;
    p52 = *(float *)&FLOAT_58_0;
    easing(
      &outParams1,
      &outParams2,
      frame,
      5.0,
      1.3,
      1.3,
      FLOAT_8_0,
      1.0,
      1.0,
      52.0,
      FLOAT_1_0,
      1.0,
      58.0,
      1.2,
      FLOAT_1_2,
      59.0,
      1.2,
      0.1,
      FLOAT_61_0,
      1.3,
      0.1,
      64.0,
      FLOAT_1_5,
      0.0);
    easing(&outParam, frame, 5.0, 1.0, p11d, 8.0, 0.1, aniFrame2h, 52.0, 1.0, type2d, 58.0, 1.0, p32c, 64.0, 0.0);
    Graphics::setRenderMode(*(Graphics **)(v3 + 8), 1, (int)(float)(outParam * 255.0));
    drawConv(Myval2, 960.0, 540.0, &ImageRects_Perfect_0[15], outParams1, outParams2, 0.0, aniFrame2i);
    goto LABEL_20;
  }
  v13 = FLOAT_960_0;
  v12 = FLOAT_540_0;
  p52 = *(float *)&FLOAT_58_0;
  p31 = *(float *)&FLOAT_1_5;
LABEL_20:
  easing(&x, frame, 0.0, -558.0, p11, 5.0, v13, aniFrame2, p52, v13, type2, 60.0, 1504.0, p32, 63.0, 2720.0);
  y = 540.0;
  if ( frame < 0.0 )
  {
    outParams1 = *(float *)&FLOAT_1_0;
    v17 = *(float *)&FLOAT_1_0;
    outParams2 = *(float *)&FLOAT_0_1;
  }
  else
  {
    easing(
      &outParams1,
      &outParams2,
      frame,
      0.0,
      1.0,
      0.1,
      FLOAT_3_0,
      1.0,
      0.2,
      5.0,
      FLOAT_1_0,
      0.80000001,
      10.0,
      0.80000001,
      FLOAT_0_80000001,
      17.0,
      1.0,
      0.2,
      FLOAT_52_0,
      1.0,
      1.2,
      p52,
      FLOAT_1_0,
      1.2,
      59.0,
      1.0,
      FLOAT_0_1,
      63.0,
      1.0,
      0.050000001);
    v7 = outParams2;
    v17 = outParams1;
  }
  if ( frame < 0.0 )
  {
    v18 = *(float *)&FLOAT_0_69999999;
    outParam = *(float *)&FLOAT_0_69999999;
  }
  else
  {
    easing(&outParam, frame, 0.0, 0.69999999, FLOAT_5_0, 0.5, 10.0, Linear, p52, 0.0, FLOAT_59_0, 0.5, 63.0, FLOAT_1_0);
    v18 = outParam;
  }
  v19 = (int)(float)(v18 * 255.0);
  Graphics::setRenderMode(*(Graphics **)(v3 + 8), 1, v19);
  v20 = v7 * 2.5;
  v21 = v17 * 2.5;
  drawConv(Myval2, x, v12, &ImageRects_Perfect_0[1], v21, v20, 0.0, aniFrame2b);
  easing(&x, frame, 0.0, 2498.0, p11e, 5.0, v13, aniFrame2j, p52, v13, type2b, 60.0, 436.0, p32b, 63.0, -800.0);
  Graphics::setRenderMode(*(Graphics **)(v3 + 8), 1, v19);
  drawConv(Myval2, x, v12, &ImageRects_Perfect_0[1], v21, v20, 0.0, aniFrame2k);
  if ( frame > 14.0 )
  {
    v22 = *(float *)&FLOAT_4_0;
  }
  else
  {
    x = 960.0;
    y = 540.0;
    easing(
      &outParams1,
      &outParams2,
      frame,
      0.0,
      0.80000001,
      0.80000001,
      type1,
      5.0,
      1.0,
      1.0,
      type2c,
      6.0,
      p31,
      p31,
      type3,
      14.0,
      2.0,
      2.0);
    v22 = *(float *)&FLOAT_4_0;
    easing(&outParam, frame, 0.0, 0.0, p11f, 4.0, 0.0, aniFrame2l, 5.0, 1.0, type2e, 6.0, 1.0, p32d, 14.0, 0.0);
    Graphics::setRenderMode(*(Graphics **)(v3 + 8), 1, (int)(float)(outParam * 255.0));
    drawConv(Myval2, v13, v12, ImageRects_Perfect_0, outParams1, outParams2, 0.0, aniFrame2m);
  }
  if ( frame >= 5.0 && frame <= 8.0 )
  {
    Graphics::setRenderMode(*(Graphics **)(v3 + 8), 1, 255);
    v23 = 3i64;
    if ( frame < 7.0 )
      v23 = 2i64;
    drawConv(Myval2, v13, v12, &ImageRects_Perfect_0[v23], v22, 1.4, 0.0, aniFrame2c);
    v24 = *(Graphics **)(v3 + 8);
    x = 960.0;
    y = 540.0;
    outParams1 = 2.5;
    outParams2 = 0.80000001;
    outParam = 1.0;
    Graphics::setRenderMode(v24, 1, 255);
    v25 = 8i64;
    if ( frame < 7.0 )
      v25 = 7i64;
    drawConv(Myval2, v13, v12, &ImageRects_Perfect_0[v25], 2.5, 0.80000001, 0.0, aniFrame2d);
  }
  Graphics::setRenderMode(*(Graphics **)(v3 + 8), 1, 255);
  if ( frame >= 9.0 )
  {
    if ( frame >= 23.0 )
    {
      v31 = FLOAT_13_0;
    }
    else
    {
      easing(&x, &y, frame, 9.0, 1106.0, 336.0, type1, 21.0, 1266.0, 156.0);
      easing(&outParams1, &outParams2, frame, 9.0, 3.0, 0.73000002, type1a, 21.0, 0.0, 0.0);
      v26 = BSUtil::toOGLAngle(112.0);
      drawConv(Myval2, x, y, &ImageRects_Perfect_0[4], outParams1, outParams2, v26, aniFrame2n);
      easing(&x, &y, frame, 9.0, 528.0, 603.0, type1b, 13.0, 358.0, 630.0, type2c, 21.0, 144.0, 663.0);
      easing(&outParams1, &outParams2, frame, 9.0, 2.24, 1.6, type1c, 21.0, 0.0, 0.0);
      v27 = BSUtil::toOGLAngle(150.0);
      drawConv(Myval2, x, y, &ImageRects_Perfect_0[5], outParams1, outParams2, v27, aniFrame2o);
      easing(&x, &y, frame, 9.0, 1348.0, 611.0, type1d, 21.0, 1674.0, 699.0);
      easing(&outParams1, &outParams2, frame, 9.0, 3.97, 1.41, type1e, 21.0, 0.0, 0.0);
      v28 = BSUtil::toOGLAngle(-8.0);
      drawConv(Myval2, x, y, &ImageRects_Perfect_0[4], outParams1, outParams2, v28, aniFrame2p);
      easing(&x, &y, frame, 9.0, 736.0, 661.0, type1f, 19.0, 608.0, 727.0, type2f, 21.0, 460.0, 796.0);
      easing(
        &outParams1,
        &outParams2,
        frame,
        9.0,
        2.8699999,
        1.95,
        type1g,
        15.0,
        2.8699999,
        1.95,
        type2g,
        21.0,
        0.0,
        0.0);
      v29 = BSUtil::toOGLAngle(-22.0);
      drawConv(Myval2, x, y, &ImageRects_Perfect_0[6], outParams1, outParams2, v29, aniFrame2q);
      easing(&x, &y, frame, 9.0, 1096.0, 673.0, type1h, 21.0, 1256.0, 841.0);
      easing(&outParams1, &outParams2, frame, 9.0, 1.91, 0.91000003, type1i, 21.0, 0.0, 0.0);
      v30 = BSUtil::toOGLAngle(28.0);
      drawConv(Myval2, x, y, &ImageRects_Perfect_0[5], outParams1, outParams2, v30, aniFrame2r);
      v31 = FLOAT_13_0;
      easing(&x, &y, frame, 9.0, 1340.0, 414.0, type1j, 13.0, 1540.0, 352.0, type2h, 19.0, 1800.0, 274.0);
      easing(&outParams1, &outParams2, frame, 9.0, 3.3499999, 1.66, type1k, 19.0, 0.0, 0.0);
      v32 = BSUtil::toOGLAngle(-14.0);
      drawConv(Myval2, x, y, &ImageRects_Perfect_0[6], outParams1, outParams2, v32, aniFrame2s);
      easing(&x, &y, frame, 9.0, 568.0, 369.0, type1l, 13.0, 500.0, 338.0, type2i, 23.0, 376.0, 279.0);
      easing(&outParams1, &outParams2, frame, 9.0, 4.0, 1.4, type1m, 23.0, 0.0, 0.0);
      drawConv(Myval2, x, y, &ImageRects_Perfect_0[4], outParams1, outParams2, 0.0, aniFrame2t);
    }
    if ( frame <= 41.0 )
    {
      easing(
        &x,
        &y,
        frame,
        9.0,
        822.0,
        545.0,
        type1,
        v31,
        622.0,
        553.0,
        type2c,
        17.0,
        522.0,
        559.0,
        type3,
        41.0,
        272.0,
        570.0);
      easing(
        &outParams1,
        &outParams2,
        frame,
        9.0,
        1.25,
        0.40000001,
        type1n,
        17.0,
        1.25,
        0.40000001,
        type2j,
        41.0,
        0.0,
        0.0);
      drawConv(Myval2, x, y, &ImageRects_Perfect_0[9], outParams1, outParams2, 0.0, aniFrame2u);
      easing(&x, &y, frame, 9.0, 1015.0, 526.0, type1o, 17.0, 1415.0, 537.0, type2k, 39.0, 1665.0, 542.0);
      easing(
        &outParams1,
        &outParams2,
        frame,
        9.0,
        2.5,
        0.80000001,
        type1p,
        17.0,
        2.5,
        0.80000001,
        type2l,
        39.0,
        0.0,
        0.0);
      drawConv(Myval2, x, y, &ImageRects_Perfect_0[11], outParams1, outParams2, 0.0, aniFrame2v);
      easing(
        &x,
        &y,
        frame,
        9.0,
        815.0,
        600.0,
        type1q,
        13.0,
        765.0,
        616.0,
        type2m,
        17.0,
        690.0,
        640.0,
        type3a,
        37.0,
        565.0,
        680.0);
      easing(
        &outParams1,
        &outParams2,
        frame,
        9.0,
        1.5,
        0.47999999,
        type1r,
        13.0,
        1.25,
        0.40000001,
        type2n,
        17.0,
        1.0,
        0.31999999,
        type3b,
        37.0,
        0.0,
        0.0);
      drawConv(Myval2, x, y, &ImageRects_Perfect_0[13], outParams1, outParams2, 0.0, aniFrame2w);
      easing(&x, &y, frame, 9.0, 1257.0, 602.0, type1s, 17.0, 1377.0, 629.0, type2o, 37.0, 1552.0, 672.0);
      easing(&outParams1, &outParams2, frame, 9.0, 0.5, 0.16, type1t, 17.0, 0.5, 0.16, type2p, 37.0, 0.0, 0.0);
      drawConv(Myval2, x, y, &ImageRects_Perfect_0[12], outParams1, outParams2, 0.0, aniFrame2x);
      easing(&x, &y, frame, 9.0, 1157.0, 586.0, type1u, 13.0, 1307.0, 618.0, type2q, 41.0, 1532.0, 666.0);
      easing(
        &outParams1,
        &outParams2,
        frame,
        9.0,
        1.25,
        0.40000001,
        type1v,
        13.0,
        1.25,
        0.40000001,
        type2r,
        41.0,
        0.0,
        0.0);
      drawConv(Myval2, x, y, &ImageRects_Perfect_0[10], outParams1, outParams2, 0.0, aniFrame2y);
      easing(
        &x,
        &y,
        frame,
        9.0,
        690.0,
        593.0,
        type1w,
        11.0,
        615.0,
        609.0,
        type2s,
        17.0,
        540.0,
        625.0,
        type3c,
        41.0,
        430.0,
        649.0);
      easing(
        &outParams1,
        &outParams2,
        frame,
        9.0,
        2.5,
        0.80000001,
        type1x,
        11.0,
        2.0,
        0.63999999,
        type2t,
        17.0,
        1.25,
        0.40000001,
        type3d,
        41.0,
        0.0,
        0.0);
      drawConv(Myval2, x, y, &ImageRects_Perfect_0[11], outParams1, outParams2, 0.0, aniFrame2z);
      easing(
        &x,
        &y,
        frame,
        9.0,
        715.0,
        508.0,
        type1y,
        11.0,
        565.0,
        483.0,
        type2u,
        13.0,
        490.0,
        471.0,
        type3e,
        39.0,
        367.0,
        450.0);
      easing(
        &outParams1,
        &outParams2,
        frame,
        9.0,
        1.25,
        0.40000001,
        type1z,
        11.0,
        1.0,
        0.31999999,
        type2v,
        13.0,
        0.75,
        0.23999999,
        type3f,
        39.0,
        0.0,
        0.0);
      drawConv(Myval2, x, y, &ImageRects_Perfect_0[13], outParams1, outParams2, 0.0, aniFrame2ba);
      easing(
        &x,
        &y,
        frame,
        9.0,
        1080.0,
        493.0,
        type1ba,
        11.0,
        1205.0,
        472.0,
        type2w,
        13.0,
        1350.0,
        447.0,
        type3g,
        41.0,
        1505.0,
        418.0);
      easing(
        &outParams1,
        &outParams2,
        frame,
        9.0,
        0.75,
        0.23999999,
        type1bb,
        11.0,
        0.75,
        0.23999999,
        type2x,
        13.0,
        0.5,
        0.16,
        type3h,
        41.0,
        0.0,
        0.0);
      drawConv(Myval2, x, y, &ImageRects_Perfect_0[9], outParams1, outParams2, 0.0, aniFrame2bb);
      p22 = *(float *)&FLOAT_5_0;
      v13 = FLOAT_960_0;
      v12 = FLOAT_540_0;
    }
  }
  if ( frame <= 11.0 )
  {
    easing(&x, frame, 0.0, 180.0, p11a, p22, v13, (Tween::EasingType)aniFrame2c, 11.0, 1540.0);
    if ( frame < 0.0 )
    {
      v33 = 0.0;
    }
    else
    {
      easing(
        &outParams1,
        &outParams2,
        frame,
        0.0,
        0.0,
        0.2,
        FLOAT_4_0,
        1.5,
        0.30000001,
        p22,
        FLOAT_1_5,
        1.5,
        6.0,
        1.8,
        FLOAT_0_40000001,
        8.0,
        1.2,
        0.25,
        SLODWORD(FLOAT_11_0),
        1.0,
        0.0);
      v33 = outParams1;
      scaley = outParams2;
    }
    easing(&outParam, frame, 0.0, 1.0, p11b, p22, 1.0, aniFrame2e, 11.0, 0.0);
    Graphics::setRenderMode(*(Graphics **)(v3 + 8), 1, (int)(float)(outParam * 255.0));
    drawConv(Myval2, x, v12, ImageRects_Perfect_0, v33, scaley, 0.0, aniFrame2bc);
  }
}

void __fastcall BattleCallAnimationPerfect::readResources_EN(BattleCallAnimationPerfect *this)
{
  __int64 v2; // rax
  bool v3; // cf
  unsigned __int64 v4; // rax
  extension::BasicFutureObject<Image,extension::FutureImageOption>::Body *v5; // rax
  extension::BasicFutureObject<Image,extension::FutureImageOption> *p_m_refCount; // rdi
  extension::BasicFutureObject<Image,extension::FutureImageOption>::AssetCache *v7; // rcx
  extension::BasicFutureObject<Image,extension::FutureImageOption> *m_pImages; // rdx
  extension::BasicFutureObject<Image,extension::FutureImageOption>::Body *m_ptr; // r8
  extension::BasicFutureObject<Image,extension::FutureImageOption>::Body *v10; // rcx
  extension::BasicFutureObject<Image,extension::FutureImageOption>::Body *v11; // rcx
  char *Ptr; // rcx
  char *v13; // rax
  extension::RefCountablePtr<extension::BasicFutureObject<Image,extension::FutureImageOption>::Body> v14[2]; // [rsp+38h] [rbp-70h] BYREF
  std::string v15; // [rsp+48h] [rbp-60h] BYREF
  __int64 v16; // [rsp+68h] [rbp-40h]
  std::string _Right; // [rsp+70h] [rbp-38h] BYREF

  v16 = -2i64;
  this->m_imageCount = 1;
  v2 = 16i64;
  if ( !is_mul_ok(1ui64, 0x10ui64) )
    v2 = -1i64;
  v3 = __CFADD__(v2, 8i64);
  v4 = v2 + 8;
  if ( v3 )
    v4 = -1i64;
  v5 = (extension::BasicFutureObject<Image,extension::FutureImageOption>::Body *)operator new[](v4);
  v14[1].m_ptr = v5;
  if ( v5 )
  {
    v5->__vftable = (extension::BasicFutureObject<Image,extension::FutureImageOption>::Body_vtbl *)1;
    p_m_refCount = (extension::BasicFutureObject<Image,extension::FutureImageOption> *)&v5->m_refCount;
    `eh vector constructor iterator'(
      &v5->m_refCount,
      0x10ui64,
      1ui64,
      (void (__fastcall *)(void *))extension::BasicFutureObject<Image,extension::FutureImageOption>::BasicFutureObject<Image,extension::FutureImageOption>,
      (void (__fastcall *)(void *))extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::~BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>);
  }
  else
  {
    p_m_refCount = 0i64;
  }
  this->m_pImages = p_m_refCount;
  if ( p_m_refCount )
  {
    _Right._Mypair._Myval2._Myres = 15i64;
    _Right._Mypair._Myval2._Mysize = 0i64;
    _Right._Mypair._Myval2._Bx._Buf[0] = 0;
    std::string::assign(&_Right, "ui/battle_ui/_EN/announce/Perfect_out.obm", aUiBattleUiEnAn_8[0] != 0 ? 0x29 : 0);
    v15._Mypair._Myval2._Myres = 15i64;
    v15._Mypair._Myval2._Mysize = 0i64;
    v15._Mypair._Myval2._Bx._Buf[0] = 0;
    std::string::assign(&v15, &_Right, 0i64, 0xFFFFFFFFFFFFFFFFui64);
    extension::BasicFutureObject<Image,extension::FutureImageOption>::AssetCache::getCachedOrLoadStart(
      v7,
      v14,
      &v15,
      0i64);
    m_pImages = this->m_pImages;
    m_pImages->m_isNoCache = 0;
    m_ptr = v14[0].m_ptr;
    if ( v14[0].m_ptr )
      _InterlockedExchangeAdd64((volatile signed __int64 *)&v14[0].m_ptr->m_refCount.m_ptr->m_sharedCount, 1ui64);
    v10 = m_pImages->m_body.m_ptr;
    m_pImages->m_body.m_ptr = m_ptr;
    if ( v10
      && _InterlockedExchangeAdd64(
           (volatile signed __int64 *)&v10->m_refCount.m_ptr->m_sharedCount,
           0xFFFFFFFFFFFFFFFFui64) == 1 )
    {
      ((void (__fastcall *)(extension::BasicFutureObject<Image,extension::FutureImageOption>::Body *, __int64))v10->~RefCountableWeakSupportBase)(
        v10,
        1i64);
    }
    v11 = v14[0].m_ptr;
    if ( v14[0].m_ptr
      && _InterlockedExchangeAdd64(
           (volatile signed __int64 *)&v14[0].m_ptr->m_refCount.m_ptr->m_sharedCount,
           0xFFFFFFFFFFFFFFFFui64) == 1 )
    {
      ((void (__fastcall *)(extension::BasicFutureObject<Image,extension::FutureImageOption>::Body *, __int64))v11->~RefCountableWeakSupportBase)(
        v11,
        1i64);
    }
    if ( _Right._Mypair._Myval2._Myres >= 0x10 )
    {
      Ptr = _Right._Mypair._Myval2._Bx._Ptr;
      if ( _Right._Mypair._Myval2._Myres + 1 >= 0x1000 )
      {
        if ( (_Right._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
          invalid_parameter_noinfo_noreturn();
        v13 = (char *)*((_QWORD *)_Right._Mypair._Myval2._Bx._Ptr - 1);
        if ( v13 >= _Right._Mypair._Myval2._Bx._Ptr )
          invalid_parameter_noinfo_noreturn();
        if ( (char *)(_Right._Mypair._Myval2._Bx._Ptr - v13) < (char *)8 )
          invalid_parameter_noinfo_noreturn();
        if ( (char *)(_Right._Mypair._Myval2._Bx._Ptr - v13) > (char *)0x27 )
          invalid_parameter_noinfo_noreturn();
        Ptr = (char *)*((_QWORD *)_Right._Mypair._Myval2._Bx._Ptr - 1);
      }
      operator delete(Ptr);
    }
  }
}

