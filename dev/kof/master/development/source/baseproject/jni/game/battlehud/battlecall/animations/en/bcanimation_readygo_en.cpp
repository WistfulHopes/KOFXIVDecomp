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
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlecall/animations/bcanimation_readygo.h"
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
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlecall/battlecallshader.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/rapper/graphicsopt.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/asyncjob.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlecall/animations/battlecallanimation.cpp"

enum `anonymous-namespace'::<unnamed-enum-IMAGEID_READY>
{
	IMAGEID_READY = 0,
	IMAGEID_NUMBER = 1,
	IMAGEID_GO = 2,
	IMAGEID_MAX = 3,
};
std::piecewise_construct_t std::piecewise_construct; // 0x14088B596
const `anonymous-namespace'::<unnamed-enum-READY_EFF_LINE> `anonymous namespace'::READY_EFF_ROUND = 0x4;
const `anonymous-namespace'::<unnamed-enum-GO_SPARKS_00> `anonymous namespace'::GO_SPARKS_06 = 0x3;
const `anonymous-namespace'::<unnamed-enum-IMAGEID_READY> `anonymous namespace'::IMAGEID_READY = 0x0;
const `anonymous-namespace'::<unnamed-enum-GO_SPARKS_00> `anonymous namespace'::GO_SPARKS_02 = 0x2;
const `anonymous-namespace'::<unnamed-enum-ROUND_EXTRA_ROUND> `anonymous namespace'::ROUND_EXTRA_ROUND = 0x0;
const _C_CONV ImageRects_RoundNum[12]; // 0x14088C230
const char * ImageFilePath_RoundNum; // 0x14088C260
const `anonymous-namespace'::<unnamed-enum-ROUND_FINAL> `anonymous namespace'::ROUND_EFF_FINAL = 0x1;
const _C_CONV ImageRects_RoundExtra[12]; // 0x14088C268
const `anonymous-namespace'::<unnamed-enum-ROUND_NUMBER> `anonymous namespace'::ROUND_EFF_NUMBER = 0x1;
const `anonymous-namespace'::<unnamed-enum-READY_EFF_LINE> `anonymous namespace'::READY_EFF_LINE = 0x0;
const `anonymous-namespace'::<unnamed-enum-ROUND_FINAL> `anonymous namespace'::ROUND_FINAL = 0x0;
const `anonymous-namespace'::<unnamed-enum-GO_SPARKS_00> `anonymous namespace'::GO_SPARKS_04 = 0x5;
const `anonymous-namespace'::<unnamed-enum-IMAGEID_READY> `anonymous namespace'::IMAGEID_GO = 0x2;
const `anonymous-namespace'::<unnamed-enum-IMAGEID_READY> `anonymous namespace'::IMAGEID_NUMBER = 0x1;
const `anonymous-namespace'::<unnamed-enum-GO_SPARKS_00> `anonymous namespace'::GO_SPARKS_05 = 0x6;
const _C_CONV ImageRects_RoundFinal[12]; // 0x14088C298
const `anonymous-namespace'::<unnamed-enum-ROUND_NUMBER> `anonymous namespace'::ROUND_NUMBER = 0x0;
const char * ImageFilePath_RoundFinal; // 0x14088C2C8
const `anonymous-namespace'::<unnamed-enum-READY_EFF_LINE> `anonymous namespace'::READY_EFF_READY = 0x2;
const _C_CONV ImageRects_RoundAndReady[24]; // 0x14088C2D0
void BattleCallAnimationReadyGO::readResources_EN(); // 0x1400B0760
const char * ImageFilePath_Go; // 0x14088C330
const `anonymous-namespace'::<unnamed-enum-IMAGEID_READY> `anonymous namespace'::IMAGEID_MAX = 0x3;
const `anonymous-namespace'::<unnamed-enum-ROUND_EXTRA_ROUND> `anonymous namespace'::ROUND_EFF_EXTRA_ROUND = 0x1;
const char * ImageFilePath_RoundAndReady; // 0x14088C338
const `anonymous-namespace'::<unnamed-enum-GO_SPARKS_00> `anonymous namespace'::GO_SPARKS_01 = 0x1;
const `anonymous-namespace'::<unnamed-enum-READY_EFF_LINE> `anonymous namespace'::READY_ROUND = 0x3;
const `anonymous-namespace'::<unnamed-enum-GO_SPARKS_00> `anonymous namespace'::GO_SPARKS_03 = 0x4;
const _C_CONV ImageRects_Go[40]; // 0x14088C340
const `anonymous-namespace'::<unnamed-enum-GO_SPARKS_00> `anonymous namespace'::GO_SPARKS_00 = 0x0;
const `anonymous-namespace'::<unnamed-enum-GO_SPARKS_00> `anonymous namespace'::GO_GO = 0x7;
const char * ImageFilePath_RoundExtra; // 0x14088C3E0
const `anonymous-namespace'::<unnamed-enum-READY_EFF_LINE> `anonymous namespace'::READY_READY = 0x1;
void BattleCallAnimationReadyGO::drawAnimations_EN(float frame); // 0x1400B0C80
void BattleCallAnimationReadyGO::drawAnimations_ReadyGo_Round_EN(GraphicsOpt * graphics, float frame); // 0x1400B0D10
void BattleCallAnimationReadyGO::drawAnimations_ReadyGo_RoundFinalAndExtra_EN(GraphicsOpt * graphics, float frame); // 0x1400B15E0
void BattleCallAnimationReadyGO::drawAnimations_ReadyGo_RoundLineEfftcts_EN(GraphicsOpt * graphics, float frame); // 0x1400B1B70
void BattleCallAnimationReadyGO::drawAnimations_ReadyGo_Ready_EN(GraphicsOpt * graphics, float frame); // 0x1400B2100
void BattleCallAnimationReadyGO::drawAnimations_ReadyGo_Go_EN(GraphicsOpt * graphics, float frame); // 0x1400B2980//decompilation failure at 14088B596!
//decompilation failure at 14088C230!
//decompilation failure at 14088C260!
//decompilation failure at 14088C268!
//decompilation failure at 14088C298!
//decompilation failure at 14088C2C8!
//decompilation failure at 14088C2D0!
//decompilation failure at 14088C330!
//decompilation failure at 14088C338!
//decompilation failure at 14088C340!
//decompilation failure at 14088C3E0!
void __fastcall BattleCallAnimationReadyGO::drawAnimations_EN(BattleCallAnimationReadyGO *this, float frame)
{
  GraphicsOpt *v2; // rdx
  int m_animationPhase; // ecx
  int v5; // ecx
  GraphicsOpt *v6; // rdx

  m_animationPhase = this->m_animationPhase;
  if ( m_animationPhase )
  {
    v5 = m_animationPhase - 1;
    if ( v5 )
    {
      if ( v5 == 1 )
        BattleCallAnimationReadyGO::drawAnimations_ReadyGo_Go_EN(this, v2, frame - this->m_phaseStartFrame);
    }
    else
    {
      BattleCallAnimationReadyGO::drawAnimations_ReadyGo_Ready_EN(this, v2, frame - this->m_phaseStartFrame);
    }
  }
  else
  {
    if ( (unsigned int)(this->m_round + 2) <= 1 )
      BattleCallAnimationReadyGO::drawAnimations_ReadyGo_RoundFinalAndExtra_EN(this, v2, frame);
    else
      BattleCallAnimationReadyGO::drawAnimations_ReadyGo_Round_EN(this, v2, frame);
    BattleCallAnimationReadyGO::drawAnimations_ReadyGo_RoundLineEfftcts_EN(this, v6, frame);
  }
}

void __fastcall BattleCallAnimationReadyGO::drawAnimations_ReadyGo_Go_EN(
        BattleCallAnimationReadyGO *this,
        GraphicsOpt *graphics,
        float frame)
{
  extension::AsyncContent<Image> *m_ptr; // rbx
  Image *Myval2; // rbx
  float v5; // xmm10_4
  float v6; // xmm1_4
  float v7; // xmm1_4
  __int64 v8; // rcx
  float v9; // xmm7_4
  float v10; // xmm6_4
  __int64 v11; // r9
  float v12; // xmm15_4
  float v13; // xmm15_4
  float v14; // xmm0_4
  float v15; // xmm15_4
  float v16; // xmm0_4
  Tween::EasingType p11c; // [rsp+28h] [rbp-F0h]
  Tween::EasingType p11d; // [rsp+28h] [rbp-F0h]
  Tween::EasingType p11e; // [rsp+28h] [rbp-F0h]
  Tween::EasingType p11; // [rsp+28h] [rbp-F0h]
  Tween::EasingType p11a; // [rsp+28h] [rbp-F0h]
  Tween::EasingType p11b; // [rsp+28h] [rbp-F0h]
  Tween::EasingType p11f; // [rsp+28h] [rbp-F0h]
  Tween::EasingType p11g; // [rsp+28h] [rbp-F0h]
  Tween::EasingType p2; // [rsp+38h] [rbp-E0h]
  Tween::EasingType p2a; // [rsp+38h] [rbp-E0h]
  Tween::EasingType p2c; // [rsp+38h] [rbp-E0h]
  Tween::EasingType p2d; // [rsp+38h] [rbp-E0h]
  Tween::EasingType p2e; // [rsp+38h] [rbp-E0h]
  Tween::EasingType p2b; // [rsp+38h] [rbp-E0h]
  Tween::EasingType p2f; // [rsp+38h] [rbp-E0h]
  Tween::EasingType aniFrame2; // [rsp+40h] [rbp-D8h]
  Tween::EasingType aniFrame2d; // [rsp+40h] [rbp-D8h]
  Tween::EasingType aniFrame2e; // [rsp+40h] [rbp-D8h]
  Tween::EasingType aniFrame2a; // [rsp+40h] [rbp-D8h]
  Tween::EasingType aniFrame2b; // [rsp+40h] [rbp-D8h]
  Tween::EasingType aniFrame2c; // [rsp+40h] [rbp-D8h]
  Tween::EasingType aniFrame2f; // [rsp+40h] [rbp-D8h]
  Tween::EasingType aniFrame2g; // [rsp+40h] [rbp-D8h]
  Tween::EasingType type2; // [rsp+58h] [rbp-C0h]
  Tween::EasingType type2a; // [rsp+58h] [rbp-C0h]
  Tween::EasingType type2g; // [rsp+58h] [rbp-C0h]
  Tween::EasingType type2b; // [rsp+58h] [rbp-C0h]
  Tween::EasingType type2c; // [rsp+58h] [rbp-C0h]
  Tween::EasingType type2d; // [rsp+58h] [rbp-C0h]
  Tween::EasingType type2h; // [rsp+58h] [rbp-C0h]
  Tween::EasingType type2e; // [rsp+58h] [rbp-C0h]
  Tween::EasingType type2i; // [rsp+58h] [rbp-C0h]
  Tween::EasingType type2f; // [rsp+58h] [rbp-C0h]
  Tween::EasingType type2j; // [rsp+58h] [rbp-C0h]
  Tween::EasingType p32; // [rsp+70h] [rbp-A8h]
  Tween::EasingType aniFrame5; // [rsp+78h] [rbp-A0h]
  Tween::EasingType aniFrame5a; // [rsp+78h] [rbp-A0h]
  Tween::EasingType aniFrame5b; // [rsp+78h] [rbp-A0h]
  Tween::EasingType aniFrame5c; // [rsp+78h] [rbp-A0h]
  Tween::EasingType aniFrame5d; // [rsp+78h] [rbp-A0h]
  float outParams2; // [rsp+98h] [rbp-80h] BYREF
  float outParams1; // [rsp+9Ch] [rbp-7Ch] BYREF
  float scalex; // [rsp+168h] [rbp+50h] BYREF
  GraphicsOpt *x; // [rsp+170h] [rbp+58h] BYREF
  float y; // [rsp+178h] [rbp+60h] BYREF
  float outParam; // [rsp+180h] [rbp+68h] BYREF

  x = graphics;
  m_ptr = this->m_pImages[2].m_body.m_ptr->m_content.m_ptr;
  if ( !m_ptr || m_ptr->m_isDataReleased )
  {
    Myval2 = 0i64;
  }
  else
  {
    if ( (m_ptr->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
      extension::AsyncStatus::waitFor(&m_ptr->m_status, (extension::AsyncStatus::Step)graphics);
    Myval2 = m_ptr->m_data._Mypair._Myval2;
  }
  v5 = 0.0;
  if ( frame >= 0.0 && frame <= 22.0 )
  {
    LODWORD(x) = 1148190720;
    y = 540.0;
    easing(
      &outParams1,
      &outParams2,
      frame,
      0.0,
      1.2,
      1.2,
      p2,
      3.0,
      1.0,
      1.0,
      type2,
      17.0,
      1.0,
      1.0,
      aniFrame5,
      22.0,
      5.0,
      5.0);
    if ( frame >= 0.0 )
    {
      if ( frame > 3.0 )
      {
        if ( frame > 9.0 )
        {
          if ( frame <= 20.0 )
          {
            outParam = Tween::easing(1.0, 0.0, (float)(frame - 9.0) / 11.0, Linear);
            v7 = outParam;
            goto LABEL_22;
          }
          v7 = 0.0;
        }
        else
        {
          v7 = *(float *)&FLOAT_1_0;
        }
LABEL_21:
        outParam = v7;
LABEL_22:
        `anonymous namespace'::g_srcRatio = v7;
        v8 = *(_QWORD *)(*(_QWORD *)&AppMain::pApp + 112i64);
        `anonymous namespace'::g_graphicsOpt = 3;
        Graphics::setRenderMode(*(Graphics **)(v8 + 8), 3, (int)(float)(v7 * 255.0));
        v9 = outParams2;
        v10 = outParams1;
        drawConvAA(Myval2, 960.0, 540.0, &ImageRects_Go_0[7], outParams1, outParams2);
        easing(&outParam, frame, 0.0, 1.0, p11c, 3.0, 0.2, aniFrame2, 9.0, 0.5, type2a, 17.0, 1.0, p32, 22.0, 0.0);
        `anonymous namespace'::g_srcRatio = outParam;
        `anonymous namespace'::g_graphicsOpt = 1;
        Graphics::setRenderMode(
          *(Graphics **)(*(_QWORD *)(*(_QWORD *)&AppMain::pApp + 112i64) + 8i64),
          1,
          (int)(float)(outParam * 255.0));
        drawConvAA(Myval2, 960.0, 540.0, &ImageRects_Go_0[7], v10, v9);
        easing(&outParam, frame, 0.0, 1.0, p11d, 3.0, 1.0, aniFrame2d, 17.0, 1.0, type2g, 22.0, 0.0);
        `anonymous namespace'::g_srcRatio = outParam;
        `anonymous namespace'::g_graphicsOpt = 1;
        Graphics::setRenderMode(
          *(Graphics **)(*(_QWORD *)(*(_QWORD *)&AppMain::pApp + 112i64) + 8i64),
          1,
          (int)(float)(outParam * 255.0));
        drawConvAA(Myval2, 960.0, 540.0, &ImageRects_Go_0[7], v10, v9);
        `anonymous namespace'::g_graphicsOpt = 1;
        `anonymous namespace'::g_srcRatio = 1.0;
        Graphics::setRenderMode(*(Graphics **)(*(_QWORD *)(*(_QWORD *)&AppMain::pApp + 112i64) + 8i64), 1, 255);
        if ( frame >= 4.0 )
        {
          easing((float *)&x, &y, frame, 4.0, 1351.0, 161.0, p2a, 7.0, 1420.0, 101.0, type2b, 10.0, 1489.0, 41.0);
          easing(&scalex, frame, 4.0, 2.4000001, p11e, 10.0, 1.2, aniFrame2e, 12.0, 0.0);
          drawConvAA(Myval2, *(float *)&x, y, &ImageRects_Go_0[2], scalex, scalex);
          if ( frame < 4.0 )
          {
            v12 = FLOAT_1143_0;
            *(float *)&x = FLOAT_1143_0;
            y = FLOAT_663_0;
          }
          else
          {
            easing(
              (float *)&x,
              &y,
              frame,
              4.0,
              1143.0,
              663.0,
              FLOAT_6_0,
              1193.0,
              713.0,
              7.0,
              FLOAT_1205_0,
              725.0,
              8.0,
              1217.0,
              FLOAT_737_0,
              12.0,
              1289.0,
              809.0);
            v12 = *(float *)&x;
          }
          easing(&scalex, frame, 4.0, 2.4000001, p11, 6.0, 1.8, aniFrame2a, 8.0, 1.2, type2c, 12.0, 0.0);
          drawConvAA(Myval2, v12, y, &ImageRects_Go_0[4], scalex, scalex);
          if ( frame < 4.0 )
          {
            v13 = FLOAT_785_0;
            *(float *)&x = FLOAT_785_0;
            y = FLOAT_675_0;
          }
          else
          {
            easing(
              (float *)&x,
              &y,
              frame,
              4.0,
              785.0,
              675.0,
              FLOAT_6_0,
              737.0,
              723.0,
              7.0,
              FLOAT_725_0,
              735.0,
              10.0,
              689.0,
              FLOAT_771_0,
              12.0,
              641.0,
              819.0);
            v13 = *(float *)&x;
          }
          easing(&scalex, frame, 4.0, 1.2, p11a, 6.0, 1.0, aniFrame2b, 10.0, 0.60000002, type2d, 12.0, 0.0);
          drawConvAA(Myval2, v13, y, &ImageRects_Go_0[5], scalex, scalex);
          easing(
            (float *)&x,
            &y,
            frame,
            4.0,
            647.0,
            729.0,
            p2c,
            7.0,
            557.0,
            801.0,
            type2h,
            8.0,
            527.0,
            825.0,
            aniFrame5a,
            12.0,
            455.0,
            873.0);
          if ( frame < 4.0 )
          {
            v14 = FLOAT_1_4400001;
          }
          else if ( frame > 12.0 )
          {
            v14 = 0.0;
          }
          else
          {
            v14 = Tween::easing(1.4400001, 0.0, (float)(frame - 4.0) * 0.125, Linear);
          }
          scalex = v14;
          drawConvAA(Myval2, *(float *)&x, y, &ImageRects_Go_0[6], v14, v14);
          if ( frame < 4.0 )
          {
            v15 = FLOAT_301_0;
            *(float *)&x = FLOAT_301_0;
            y = FLOAT_813_0;
          }
          else
          {
            easing(
              (float *)&x,
              &y,
              frame,
              4.0,
              301.0,
              813.0,
              FLOAT_7_0,
              193.0,
              885.0,
              8.0,
              FLOAT_157_0,
              909.0,
              10.0,
              97.0,
              FLOAT_945_0,
              12.0,
              37.0,
              981.0);
            v15 = *(float *)&x;
          }
          easing(&scalex, frame, 4.0, 1.2, p11b, 10.0, 1.2, aniFrame2c, 12.0, 0.0);
          drawConvAA(Myval2, v15, y, &ImageRects_Go_0[3], scalex, scalex);
          easing((float *)&x, &y, frame, 4.0, 23.0, 417.0, p2d, 7.0, -111.0, 400.0, type2e, 10.0, -246.0, 383.0);
          easing(&scalex, frame, 4.0, 1.2, p11f, 10.0, 0.60000002, aniFrame2f, 12.0, 0.0);
          drawConvAA(Myval2, *(float *)&x, y, &ImageRects_Go_0[5], scalex, scalex);
          easing(
            (float *)&x,
            &y,
            frame,
            4.0,
            1831.0,
            561.0,
            p2e,
            7.0,
            1951.0,
            573.0,
            type2i,
            8.0,
            1991.0,
            577.0,
            aniFrame5b,
            10.0,
            2071.0,
            586.0);
          if ( frame < 4.0 )
          {
            v16 = *(float *)&FLOAT_1_2;
          }
          else if ( frame > 10.0 )
          {
            v16 = 0.0;
          }
          else
          {
            v16 = Tween::easing(1.2, 0.0, (float)(frame - 4.0) / 6.0, Linear);
          }
          scalex = v16;
          drawConvAA(Myval2, *(float *)&x, y, &ImageRects_Go_0[3], v16, v16);
          easing(
            (float *)&x,
            &y,
            frame,
            4.0,
            1583.0,
            945.0,
            p2b,
            7.0,
            1679.0,
            1005.0,
            type2f,
            10.0,
            1775.0,
            1065.0,
            aniFrame5c,
            12.0,
            1919.0,
            1161.0);
          easing(&scalex, frame, 4.0, 1.8, p11g, 10.0, 1.2, aniFrame2g, 12.0, 0.0);
          drawConvAA(Myval2, *(float *)&x, y, &ImageRects_Go_0[2], scalex, scalex);
          easing(
            (float *)&x,
            &y,
            frame,
            4.0,
            623.0,
            165.0,
            p2f,
            7.0,
            532.0,
            21.0,
            type2j,
            8.0,
            503.0,
            -27.0,
            aniFrame5d,
            12.0,
            407.0,
            -195.0);
          if ( frame < 4.0 )
          {
            v5 = *(float *)&FLOAT_1_2;
          }
          else if ( frame <= 12.0 )
          {
            v5 = Tween::easing(1.2, 0.0, (float)(frame - 4.0) * 0.125, Linear);
          }
          drawConvAA(Myval2, *(float *)&x, y, &ImageRects_Go_0[5], v5, v5);
        }
        else
        {
          v11 = 1i64;
          if ( frame < 2.0 )
            v11 = 0i64;
          drawConvAA(Myval2, 966.0, 538.0, &ImageRects_Go_0[v11], 4.8000002, 4.8000002);
        }
        return;
      }
      v6 = frame / 3.0;
      if ( (float)(frame / 3.0) > 0.0 )
      {
        if ( v6 < 1.0 )
          v7 = (float)((float)((float)(v6 * 0.80000001) / 0.80000001) * 0.80000001) + 0.2;
        else
          v7 = *(float *)&FLOAT_1_0;
        goto LABEL_21;
      }
    }
    v7 = *(float *)&FLOAT_0_2;
    goto LABEL_21;
  }
}

void __fastcall BattleCallAnimationReadyGO::drawAnimations_ReadyGo_Ready_EN(
        BattleCallAnimationReadyGO *this,
        GraphicsOpt *graphics,
        float frame)
{
  float v4; // xmm13_4
  float v5; // xmm14_4
  float v6; // xmm1_4
  float v7; // xmm1_4
  float v8; // xmm1_4
  extension::AsyncStatus::Step v9; // edx
  Image *v10; // rax
  extension::AsyncStatus::Step v11; // edx
  Image *v12; // rax
  float v13; // xmm8_4
  float v14; // xmm13_4
  extension::AsyncStatus::Step v15; // edx
  Image *v16; // rax
  float v17; // xmm8_4
  int v18; // ebx
  extension::AsyncStatus::Step v19; // edx
  Image *v20; // rax
  float v21; // xmm7_4
  float v22; // xmm6_4
  extension::AsyncStatus::Step v23; // edx
  Image *v24; // rax
  Tween::EasingType p11a; // [rsp+28h] [rbp-140h]
  Tween::EasingType p11; // [rsp+28h] [rbp-140h]
  Tween::EasingType p11b; // [rsp+28h] [rbp-140h]
  Tween::EasingType p11c; // [rsp+28h] [rbp-140h]
  Tween::EasingType p11d; // [rsp+28h] [rbp-140h]
  Tween::EasingType type1; // [rsp+38h] [rbp-130h]
  Tween::EasingType aniFrame2; // [rsp+40h] [rbp-128h]
  Tween::EasingType aniFrame2a; // [rsp+40h] [rbp-128h]
  Tween::EasingType aniFrame2b; // [rsp+40h] [rbp-128h]
  Tween::EasingType aniFrame2c; // [rsp+40h] [rbp-128h]
  Tween::EasingType aniFrame2d; // [rsp+40h] [rbp-128h]
  Tween::EasingType type2; // [rsp+58h] [rbp-110h]
  Tween::EasingType type2a; // [rsp+58h] [rbp-110h]
  Tween::EasingType type2b; // [rsp+58h] [rbp-110h]
  Tween::EasingType type2c; // [rsp+58h] [rbp-110h]
  Tween::EasingType type2d; // [rsp+58h] [rbp-110h]
  Tween::EasingType type2e; // [rsp+58h] [rbp-110h]
  Tween::EasingType type3; // [rsp+78h] [rbp-F0h]
  float x; // [rsp+E8h] [rbp-80h] BYREF
  GraphicsOpt *outParams2; // [rsp+1C0h] [rbp+58h] BYREF
  float outParam; // [rsp+1C8h] [rbp+60h] BYREF
  float outParams1; // [rsp+1D0h] [rbp+68h] BYREF

  outParams2 = graphics;
  if ( frame < 0.0 || frame > 60.0 )
    return;
  x = 960.0;
  if ( frame < 4.0 )
  {
    LODWORD(outParams1) = FLOAT_1_0;
    v5 = *(float *)&FLOAT_1_0;
    LODWORD(outParams2) = FLOAT_1_0;
    v4 = *(float *)&FLOAT_1_0;
  }
  else
  {
    easing(
      &outParams1,
      (float *)&outParams2,
      frame,
      4.0,
      1.0,
      1.0,
      FLOAT_48_0,
      1.05,
      1.05,
      53.0,
      FLOAT_1_1799999,
      1.1799999,
      54.0,
      1.1799999,
      FLOAT_0_1,
      55.0,
      1.23,
      0.12,
      SLODWORD(FLOAT_56_0),
      1.27,
      0.1,
      59.0,
      FLOAT_1_5,
      0.0);
    v4 = *(float *)&outParams2;
    v5 = outParams1;
  }
  if ( frame < 0.0 )
  {
LABEL_20:
    v7 = 0.0;
    goto LABEL_21;
  }
  if ( frame <= 4.0 )
  {
    v6 = frame * 0.25;
    if ( (float)(frame * 0.25) > 0.0 )
    {
      if ( v6 < 1.0 )
        v7 = v6 + 0.0;
      else
        v7 = *(float *)&FLOAT_1_0;
      goto LABEL_21;
    }
    goto LABEL_20;
  }
  if ( frame <= 53.0 )
  {
    v8 = 1.0 - (float)((float)(frame - 4.0) / 49.0);
    if ( v8 > 0.0 )
    {
      if ( v8 < 1.0 )
        v7 = (float)((float)((float)(v8 * 0.19999999) / 0.19999999) * 0.19999999) + 0.80000001;
      else
        v7 = *(float *)&FLOAT_1_0;
    }
    else
    {
      v7 = *(float *)&FLOAT_0_80000001;
    }
    goto LABEL_21;
  }
  v7 = 0.0;
  if ( frame > 59.0 )
  {
LABEL_21:
    outParam = v7;
    goto LABEL_22;
  }
  outParam = Tween::easing(0.80000001, 0.0, (float)(frame - 53.0) / 6.0, Linear);
  v7 = outParam;
LABEL_22:
  `anonymous namespace'::g_srcRatio = v7;
  `anonymous namespace'::g_graphicsOpt = 3;
  Graphics::setRenderMode(
    *(Graphics **)(*(_QWORD *)(*(_QWORD *)&AppMain::pApp + 112i64) + 8i64),
    3,
    (int)(float)(v7 * 255.0));
  v10 = (Image *)extension::BasicFutureObject<extension::GFXIMovieData,void>::operator->(
                   (extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> *)this->m_pImages,
                   v9);
  drawConvAA(v10, 960.0, 540.0, &ImageRects_RoundAndReady_0[1], v5, v4);
  easing(&outParam, frame, 0.0, 0.0, p11a, 4.0, 0.2, aniFrame2, 53.0, 0.5, type2, 59.0, 1.0);
  `anonymous namespace'::g_srcRatio = outParam;
  `anonymous namespace'::g_graphicsOpt = 1;
  Graphics::setRenderMode(
    *(Graphics **)(*(_QWORD *)(*(_QWORD *)&AppMain::pApp + 112i64) + 8i64),
    1,
    (int)(float)(outParam * 255.0));
  v12 = (Image *)extension::BasicFutureObject<extension::GFXIMovieData,void>::operator->(
                   (extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> *)this->m_pImages,
                   v11);
  drawConvAA(v12, 960.0, 540.0, &ImageRects_RoundAndReady_0[1], v5, v4);
  if ( frame < 0.0 )
  {
    v13 = FLOAT_0_89999998;
    outParams1 = FLOAT_0_89999998;
    v14 = FLOAT_0_89999998;
    *(float *)&outParams2 = FLOAT_0_89999998;
  }
  else
  {
    easing(
      &outParams1,
      (float *)&outParams2,
      frame,
      0.0,
      0.89999998,
      0.89999998,
      FLOAT_4_0,
      1.0,
      1.0,
      48.0,
      FLOAT_1_05,
      1.05,
      53.0,
      1.1799999,
      FLOAT_1_1799999,
      54.0,
      1.1799999,
      0.1,
      FLOAT_55_0,
      1.23,
      0.12,
      56.0,
      FLOAT_1_27,
      0.1,
      59.0,
      1.5,
      Linear);
    v13 = *(float *)&outParams2;
    v14 = outParams1;
  }
  easing(&outParam, frame, 0.0, 1.0, p11, 4.0, 0.2, aniFrame2a, 48.0, 0.60000002, type2a, 53.0, 1.0);
  `anonymous namespace'::g_srcRatio = outParam;
  `anonymous namespace'::g_graphicsOpt = 1;
  Graphics::setRenderMode(
    *(Graphics **)(*(_QWORD *)(*(_QWORD *)&AppMain::pApp + 112i64) + 8i64),
    1,
    (int)(float)(outParam * 255.0));
  v16 = (Image *)extension::BasicFutureObject<extension::GFXIMovieData,void>::operator->(
                   (extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> *)this->m_pImages,
                   v15);
  drawConvAA(v16, 960.0, 540.0, &ImageRects_RoundAndReady_0[2], v14, v13);
  easing(&x, frame, 0.0, 960.0, p11b, 54.0, 960.0, aniFrame2b, 56.0, 436.0, type2b, 59.0, -800.0);
  easing(
    &outParams1,
    (float *)&outParams2,
    frame,
    0.0,
    1.0,
    1.2,
    type1,
    54.0,
    1.0,
    1.2,
    type2c,
    55.0,
    1.0,
    0.1,
    type3,
    59.0,
    1.0,
    0.050000001);
  easing(&outParam, frame, 0.0, 0.0, p11c, 54.0, 0.0, aniFrame2c, 55.0, 0.5, type2d, 59.0, 1.0);
  `anonymous namespace'::g_graphicsOpt = 1;
  v17 = outParam;
  `anonymous namespace'::g_srcRatio = outParam;
  v18 = (int)(float)(outParam * 255.0);
  Graphics::setRenderMode(*(Graphics **)(*(_QWORD *)(*(_QWORD *)&AppMain::pApp + 112i64) + 8i64), 1, v18);
  v20 = (Image *)extension::BasicFutureObject<extension::GFXIMovieData,void>::operator->(
                   (extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> *)this->m_pImages,
                   v19);
  v21 = *(float *)&outParams2;
  v22 = outParams1;
  drawConvAA(v20, x, 540.0, ImageRects_RoundAndReady_0, outParams1, *(float *)&outParams2);
  easing(&x, frame, 0.0, 960.0, p11d, 54.0, 960.0, aniFrame2d, 56.0, 1504.0, type2e, 59.0, 2720.0);
  `anonymous namespace'::g_srcRatio = v17;
  `anonymous namespace'::g_graphicsOpt = 1;
  Graphics::setRenderMode(*(Graphics **)(*(_QWORD *)(*(_QWORD *)&AppMain::pApp + 112i64) + 8i64), 1, v18);
  v24 = (Image *)extension::BasicFutureObject<extension::GFXIMovieData,void>::operator->(
                   (extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> *)this->m_pImages,
                   v23);
  drawConvAA(v24, x, 540.0, ImageRects_RoundAndReady_0, v22, v21);
}

void __fastcall BattleCallAnimationReadyGO::drawAnimations_ReadyGo_RoundFinalAndExtra_EN(
        BattleCallAnimationReadyGO *this,
        GraphicsOpt *graphics,
        float frame)
{
  extension::BasicFutureObject<Image,extension::FutureImageOption>::Body *m_ptr; // rdx
  extension::AsyncContent<Image> *v6; // rbx
  Image *Myval2; // rsi
  BattleCallAnimationReadyGO::ERound::Type m_round; // eax
  const _C_CONV *v9; // rdi
  const _C_CONV *v10; // rbx
  float v11; // xmm9_4
  float v12; // xmm9_4
  float v13; // xmm9_4
  float v14; // xmm2_4
  float v15; // xmm7_4
  __int64 v16; // rcx
  Tween::EasingType p11; // [rsp+20h] [rbp-128h]
  Tween::EasingType p11a; // [rsp+20h] [rbp-128h]
  Tween::EasingType p11b; // [rsp+20h] [rbp-128h]
  Tween::EasingType aniFrame2; // [rsp+38h] [rbp-110h]
  Tween::EasingType aniFrame2a; // [rsp+38h] [rbp-110h]
  Tween::EasingType aniFrame2b; // [rsp+38h] [rbp-110h]
  Tween::EasingType type2; // [rsp+50h] [rbp-F8h]
  Tween::EasingType type2a; // [rsp+50h] [rbp-F8h]
  Tween::EasingType type2b; // [rsp+50h] [rbp-F8h]
  GraphicsOpt *outParams2; // [rsp+158h] [rbp+10h] BYREF
  float outParam; // [rsp+160h] [rbp+18h] BYREF
  float outParams1; // [rsp+168h] [rbp+20h] BYREF

  outParams2 = graphics;
  m_ptr = this->m_pImages[1].m_body.m_ptr;
  v6 = m_ptr->m_content.m_ptr;
  if ( !v6 || v6->m_isDataReleased )
  {
    Myval2 = 0i64;
  }
  else
  {
    if ( (v6->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
      extension::AsyncStatus::waitFor(&v6->m_status, (extension::AsyncStatus::Step)m_ptr);
    Myval2 = v6->m_data._Mypair._Myval2;
  }
  if ( frame <= 64.0 )
  {
    m_round = this->m_round;
    v9 = &ImageRects_RoundFinal_0[1];
    v10 = ImageRects_RoundFinal_0;
    if ( m_round != -1 )
      v9 = &ImageRects_RoundExtra_0[1];
    if ( m_round != -1 )
      v10 = ImageRects_RoundExtra_0;
    if ( frame < 0.0 )
      goto LABEL_29;
    if ( frame <= 3.0 )
    {
      v11 = frame / 3.0;
      if ( (float)(frame / 3.0) > 0.0 )
      {
        if ( v11 < 1.0 )
          v12 = (float)((float)((float)(v11 * 660.0) / 660.0) * 660.0) + 550.0;
        else
          v12 = FLOAT_1210_0;
        goto LABEL_30;
      }
LABEL_29:
      v12 = FLOAT_550_0;
      goto LABEL_30;
    }
    if ( frame <= 5.0 )
    {
      v13 = 1.0 - (float)((float)(frame - 3.0) * 0.5);
      if ( v13 > 0.0 )
      {
        if ( v13 < 1.0 )
          v12 = (float)((float)((float)(v13 * 250.0) / 250.0) * 250.0) + 960.0;
        else
          v12 = FLOAT_1210_0;
LABEL_30:
        if ( frame < 3.0 )
        {
          v15 = *(float *)&FLOAT_0_1;
          LODWORD(outParams2) = FLOAT_1_0;
        }
        else
        {
          easing(
            &outParams1,
            (float *)&outParams2,
            frame,
            3.0,
            1.0,
            0.1,
            FLOAT_5_0,
            1.0,
            1.0,
            59.0,
            FLOAT_1_0,
            1.0,
            60.0,
            0.80000001,
            FLOAT_0_1,
            64.0,
            2.0,
            0.0);
          v15 = *(float *)&outParams2;
          *(float *)&outParams2 = outParams1;
        }
        easing(&outParam, frame, 0.0, 0.0, p11, 5.0, 1.0, aniFrame2, 59.0, 0.80000001, type2, 64.0, 1.0);
        `anonymous namespace'::g_srcRatio = outParam;
        v16 = *(_QWORD *)(*(_QWORD *)&AppMain::pApp + 112i64);
        `anonymous namespace'::g_graphicsOpt = 3;
        Graphics::setRenderMode(*(Graphics **)(v16 + 8), 3, (int)(float)(outParam * 255.0));
        drawConvAA(Myval2, v12, 540.0, v10, *(float *)&outParams2, v15);
        easing(&outParam, frame, 0.0, 1.0, p11a, 5.0, 0.2, aniFrame2a, 59.0, 0.5, type2a, 64.0, 1.0);
        `anonymous namespace'::g_srcRatio = outParam;
        `anonymous namespace'::g_graphicsOpt = 1;
        Graphics::setRenderMode(
          *(Graphics **)(*(_QWORD *)(*(_QWORD *)&AppMain::pApp + 112i64) + 8i64),
          1,
          (int)(float)(outParam * 255.0));
        drawConvAA(Myval2, v12, 540.0, v10, *(float *)&outParams2, v15);
        easing(&outParam, frame, 3.0, 1.0, p11b, 5.0, 0.2, aniFrame2b, 59.0, 0.69999999, type2b, 60.0, 1.0);
        `anonymous namespace'::g_srcRatio = outParam;
        `anonymous namespace'::g_graphicsOpt = 1;
        Graphics::setRenderMode(
          *(Graphics **)(*(_QWORD *)(*(_QWORD *)&AppMain::pApp + 112i64) + 8i64),
          1,
          (int)(float)(outParam * 255.0));
        drawConvAA(Myval2, v12, 540.0, v9, *(float *)&outParams2, v15);
        return;
      }
LABEL_20:
      v12 = FLOAT_960_0;
      goto LABEL_30;
    }
    if ( frame > 59.0 )
    {
      if ( frame > 64.0 )
        goto LABEL_20;
      v14 = (float)(frame - 59.0) / 5.0;
    }
    else
    {
      v14 = (float)(frame - 5.0) / 54.0;
    }
    v12 = Tween::easing(960.0, 960.0, v14, Linear);
    goto LABEL_30;
  }
}

void __fastcall BattleCallAnimationReadyGO::drawAnimations_ReadyGo_RoundLineEfftcts_EN(
        BattleCallAnimationReadyGO *this,
        GraphicsOpt *graphics,
        float frame)
{
  float v4; // xmm6_4
  float v5; // xmm6_4
  float v6; // xmm14_4
  extension::AsyncStatus::Step v7; // edx
  Image *v8; // rax
  float v9; // xmm10_4
  float v10; // xmm6_4
  float v11; // xmm0_4
  extension::AsyncStatus::Step v12; // edx
  Image *v13; // rax
  Tween::EasingType p11; // [rsp+20h] [rbp-178h]
  Tween::EasingType p2; // [rsp+30h] [rbp-168h]
  Tween::EasingType aniFrame2; // [rsp+38h] [rbp-160h]
  Tween::EasingType type3; // [rsp+50h] [rbp-148h]
  Tween::EasingType type3a; // [rsp+50h] [rbp-148h]
  Tween::EasingType aniFrame5; // [rsp+70h] [rbp-128h]
  float outParam[4]; // [rsp+E0h] [rbp-B8h] BYREF
  GraphicsOpt *outParams2; // [rsp+1A8h] [rbp+10h] BYREF
  float v22; // [rsp+1B0h] [rbp+18h] BYREF
  float outParams1; // [rsp+1B8h] [rbp+20h] BYREF

  outParams2 = graphics;
  if ( frame > 64.0 )
    return;
  if ( frame < 0.0 || frame <= 59.0 )
    goto LABEL_9;
  if ( frame <= 64.0 )
  {
    v4 = 1.0 - (float)((float)(frame - 59.0) / 5.0);
    if ( v4 > 0.0 )
    {
      if ( v4 < 1.0 )
      {
        v5 = (float)((float)((float)(v4 * 1760.0) / 1760.0) * 1760.0) - 800.0;
        goto LABEL_10;
      }
LABEL_9:
      v5 = FLOAT_960_0;
      goto LABEL_10;
    }
  }
  v5 = FLOAT_N800_0;
LABEL_10:
  v6 = *(float *)&FLOAT_0_1;
  v22 = v5;
  easing(
    &outParams1,
    (float *)&outParams2,
    frame,
    0.0,
    1.0,
    1.2,
    p2,
    59.0,
    1.0,
    1.2,
    type3,
    60.0,
    1.0,
    0.1,
    aniFrame5,
    64.0,
    1.0,
    0.050000001);
  easing(outParam, frame, 0.0, 0.0, p11, 59.0, 0.0, aniFrame2, 60.0, 0.5, type3a, 64.0, 1.0);
  `anonymous namespace'::g_srcRatio = outParam[0];
  `anonymous namespace'::g_graphicsOpt = 1;
  Graphics::setRenderMode(
    *(Graphics **)(*(_QWORD *)(*(_QWORD *)&AppMain::pApp + 112i64) + 8i64),
    1,
    (int)(float)(outParam[0] * 255.0));
  v8 = (Image *)extension::BasicFutureObject<extension::GFXIMovieData,void>::operator->(
                  (extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> *)this->m_pImages,
                  v7);
  drawConvAA(v8, v5, 540.0, ImageRects_RoundAndReady_0, outParams1, *(float *)&outParams2);
  if ( frame < 0.0 )
  {
    v9 = FLOAT_N558_0;
  }
  else
  {
    easing(
      &v22,
      frame,
      0.0,
      -558.0,
      FLOAT_5_0,
      960.0,
      10.0,
      FLOAT_2600_0,
      17.0,
      2600.0,
      FLOAT_53_0,
      960.0,
      59.0,
      SLODWORD(FLOAT_960_0),
      61.0,
      1504.0,
      SLODWORD(FLOAT_64_0),
      2720.0);
    v9 = v22;
  }
  if ( frame < 0.0 )
  {
    v10 = *(float *)&FLOAT_1_0;
  }
  else
  {
    easing(
      &outParams1,
      (float *)&outParams2,
      frame,
      0.0,
      1.0,
      0.1,
      FLOAT_4_0,
      1.0,
      0.2,
      5.0,
      FLOAT_1_0,
      1.0,
      17.0,
      1.0,
      FLOAT_0_2,
      53.0,
      1.0,
      1.2,
      FLOAT_59_0,
      1.0,
      1.2,
      60.0,
      FLOAT_1_0,
      0.1,
      64.0,
      1.0,
      FLOAT_0_050000001);
    v6 = *(float *)&outParams2;
    v10 = outParams1;
  }
  if ( frame < 0.0 )
  {
    v11 = *(float *)&FLOAT_0_69999999;
  }
  else
  {
    easing(outParam, frame, 0.0, 0.69999999, FLOAT_5_0, 1.0, 17.0, Linear, 59.0, 0.0, FLOAT_60_0, 0.5, 64.0, FLOAT_1_0);
    v11 = outParam[0];
  }
  `anonymous namespace'::g_srcRatio = v11;
  `anonymous namespace'::g_graphicsOpt = 1;
  Graphics::setRenderMode(
    *(Graphics **)(*(_QWORD *)(*(_QWORD *)&AppMain::pApp + 112i64) + 8i64),
    1,
    (int)(float)(v11 * 255.0));
  v13 = (Image *)extension::BasicFutureObject<extension::GFXIMovieData,void>::operator->(
                   (extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> *)this->m_pImages,
                   v12);
  drawConvAA(v13, v9, 540.0, ImageRects_RoundAndReady_0, v10, v6);
}

void __fastcall BattleCallAnimationReadyGO::drawAnimations_ReadyGo_Round_EN(
        BattleCallAnimationReadyGO *this,
        GraphicsOpt *graphics,
        float frame)
{
  float v4; // xmm6_4
  float v5; // xmm6_4
  float v6; // xmm6_4
  float v7; // xmm11_4
  extension::AsyncStatus::Step v8; // edx
  Image *v9; // rax
  extension::AsyncStatus::Step v10; // edx
  Image *v11; // rax
  extension::AsyncStatus::Step v12; // edx
  Image *v13; // rax
  float v14; // xmm0_4
  float v15; // xmm6_4
  extension::AsyncStatus::Step v16; // edx
  Image *v17; // rax
  extension::AsyncStatus::Step v18; // edx
  Image *v19; // rax
  float v20; // xmm12_4
  extension::AsyncStatus::Step v21; // edx
  Image *v22; // rax
  Tween::EasingType p11; // [rsp+28h] [rbp-F0h]
  Tween::EasingType p11b; // [rsp+28h] [rbp-F0h]
  Tween::EasingType p11c; // [rsp+28h] [rbp-F0h]
  Tween::EasingType p11a; // [rsp+28h] [rbp-F0h]
  Tween::EasingType p11d; // [rsp+28h] [rbp-F0h]
  Tween::EasingType p11e; // [rsp+28h] [rbp-F0h]
  Tween::EasingType aniFrame2; // [rsp+40h] [rbp-D8h]
  Tween::EasingType aniFrame2b; // [rsp+40h] [rbp-D8h]
  Tween::EasingType aniFrame2c; // [rsp+40h] [rbp-D8h]
  Tween::EasingType aniFrame2a; // [rsp+40h] [rbp-D8h]
  Tween::EasingType aniFrame2d; // [rsp+40h] [rbp-D8h]
  Tween::EasingType aniFrame2e; // [rsp+40h] [rbp-D8h]
  Tween::EasingType type2; // [rsp+58h] [rbp-C0h]
  Tween::EasingType type2b; // [rsp+58h] [rbp-C0h]
  Tween::EasingType type2c; // [rsp+58h] [rbp-C0h]
  Tween::EasingType type2a; // [rsp+58h] [rbp-C0h]
  Tween::EasingType type2d; // [rsp+58h] [rbp-C0h]
  Tween::EasingType type2e; // [rsp+58h] [rbp-C0h]
  Tween::EasingType p32; // [rsp+70h] [rbp-A8h]
  Tween::EasingType p32a; // [rsp+70h] [rbp-A8h]
  float outParams1; // [rsp+98h] [rbp-80h] BYREF
  GraphicsOpt *x; // [rsp+160h] [rbp+48h] BYREF
  float outParam; // [rsp+168h] [rbp+50h] BYREF
  float outParams2; // [rsp+170h] [rbp+58h] BYREF

  x = graphics;
  if ( frame > 64.0 )
    return;
  if ( frame < 0.0 )
  {
LABEL_21:
    v5 = FLOAT_435_0;
    goto LABEL_22;
  }
  if ( frame <= 3.0 )
  {
    v4 = frame / 3.0;
    if ( (float)(frame / 3.0) > 0.0 )
    {
      if ( v4 < 1.0 )
        v5 = (float)((float)((float)(v4 * 597.0) / 597.0) * 597.0) + 435.0;
      else
        v5 = FLOAT_1032_0;
      goto LABEL_22;
    }
    goto LABEL_21;
  }
  if ( frame <= 5.0 )
  {
    v6 = 1.0 - (float)((float)(frame - 3.0) * 0.5);
    if ( v6 > 0.0 )
    {
      if ( v6 < 1.0 )
        v5 = (float)((float)((float)(v6 * 250.0) / 250.0) * 250.0) + 782.0;
      else
        v5 = FLOAT_1032_0;
    }
    else
    {
      v5 = FLOAT_782_0;
    }
    goto LABEL_22;
  }
  if ( frame > 59.0 )
  {
    if ( frame > 60.0 )
    {
      if ( frame > 64.0 )
      {
        v5 = *(float *)&FLOAT_900_0;
LABEL_22:
        *(float *)&x = v5;
        goto LABEL_23;
      }
      LODWORD(x) = Tween::easing(722.0, 900.0, (float)(frame - 60.0) * 0.25, Linear);
      v5 = *(float *)&x;
    }
    else
    {
      LODWORD(x) = Tween::easing(782.0, 722.0, frame - 59.0, Linear);
      v5 = *(float *)&x;
    }
  }
  else
  {
    LODWORD(x) = Tween::easing(782.0, 782.0, (float)(frame - 5.0) / 54.0, Linear);
    v5 = *(float *)&x;
  }
LABEL_23:
  v7 = *(float *)&FLOAT_0_1;
  if ( frame < 3.0 )
  {
    LODWORD(outParams1) = FLOAT_1_0;
    LODWORD(outParams2) = FLOAT_0_1;
  }
  else
  {
    easing(
      &outParams1,
      &outParams2,
      frame,
      3.0,
      1.0,
      0.1,
      FLOAT_5_0,
      1.0,
      1.0,
      59.0,
      FLOAT_1_0,
      1.0,
      60.0,
      0.80000001,
      FLOAT_0_1,
      64.0,
      2.0,
      0.0);
  }
  easing(&outParam, frame, 0.0, 0.0, p11, 5.0, 1.0, aniFrame2, 59.0, 0.80000001, type2, 64.0, 1.0);
  `anonymous namespace'::g_srcRatio = outParam;
  `anonymous namespace'::g_graphicsOpt = 3;
  Graphics::setRenderMode(
    *(Graphics **)(*(_QWORD *)(*(_QWORD *)&AppMain::pApp + 112i64) + 8i64),
    3,
    (int)(float)(outParam * 255.0));
  v9 = (Image *)extension::BasicFutureObject<extension::GFXIMovieData,void>::operator->(
                  (extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> *)this->m_pImages,
                  v8);
  drawConvAA(v9, v5, 540.0, &ImageRects_RoundAndReady_0[3], outParams1, outParams2);
  easing(&outParam, frame, 0.0, 1.0, p11b, 5.0, 0.2, aniFrame2b, 59.0, 0.5, type2b, 64.0, 1.0);
  `anonymous namespace'::g_srcRatio = outParam;
  `anonymous namespace'::g_graphicsOpt = 1;
  Graphics::setRenderMode(
    *(Graphics **)(*(_QWORD *)(*(_QWORD *)&AppMain::pApp + 112i64) + 8i64),
    1,
    (int)(float)(outParam * 255.0));
  v11 = (Image *)extension::BasicFutureObject<extension::GFXIMovieData,void>::operator->(
                   (extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> *)this->m_pImages,
                   v10);
  drawConvAA(v11, v5, 540.0, &ImageRects_RoundAndReady_0[3], outParams1, outParams2);
  easing(&outParam, frame, 0.0, 1.0, p11c, 3.0, 1.0, aniFrame2c, 5.0, 0.2, type2c, 59.0, 0.69999999, p32, 60.0, 1.0);
  `anonymous namespace'::g_srcRatio = outParam;
  `anonymous namespace'::g_graphicsOpt = 1;
  Graphics::setRenderMode(
    *(Graphics **)(*(_QWORD *)(*(_QWORD *)&AppMain::pApp + 112i64) + 8i64),
    1,
    (int)(float)(outParam * 255.0));
  v13 = (Image *)extension::BasicFutureObject<extension::GFXIMovieData,void>::operator->(
                   (extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> *)this->m_pImages,
                   v12);
  drawConvAA(v13, v5, 540.0, &ImageRects_RoundAndReady_0[4], outParams1, outParams2);
  if ( frame < 0.0 )
  {
    v14 = FLOAT_920_0;
  }
  else
  {
    easing(
      (float *)&x,
      frame,
      0.0,
      920.0,
      FLOAT_3_0,
      1516.0,
      5.0,
      FLOAT_1265_0,
      59.0,
      1265.0,
      FLOAT_60_0,
      1195.0,
      64.0,
      FLOAT_1265_0);
    v14 = *(float *)&x;
  }
  *(float *)&x = v14;
  if ( frame < 3.0 )
  {
    v15 = *(float *)&FLOAT_1_0;
  }
  else
  {
    easing(
      &outParams1,
      &outParams2,
      frame,
      3.0,
      1.0,
      0.1,
      FLOAT_5_0,
      1.0,
      1.0,
      59.0,
      FLOAT_1_0,
      1.0,
      60.0,
      0.80000001,
      FLOAT_0_1,
      64.0,
      2.0,
      0.0);
    v7 = outParams2;
    v15 = outParams1;
  }
  easing(&outParam, frame, 0.0, 0.0, p11a, 5.0, 1.0, aniFrame2a, 59.0, 0.80000001, type2a, 64.0, 1.0);
  `anonymous namespace'::g_srcRatio = outParam;
  `anonymous namespace'::g_graphicsOpt = 3;
  Graphics::setRenderMode(
    *(Graphics **)(*(_QWORD *)(*(_QWORD *)&AppMain::pApp + 112i64) + 8i64),
    3,
    (int)(float)(outParam * 255.0));
  v17 = (Image *)extension::BasicFutureObject<extension::GFXIMovieData,void>::operator->(
                   (extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> *)&this->m_pImages[1],
                   v16);
  drawConvAA(v17, *(float *)&x, 540.0, ImageRects_RoundNum_0, v15, v7);
  easing(&outParam, frame, 0.0, 1.0, p11d, 5.0, 0.2, aniFrame2d, 59.0, 0.5, type2d, 64.0, 1.0);
  `anonymous namespace'::g_srcRatio = outParam;
  `anonymous namespace'::g_graphicsOpt = 1;
  Graphics::setRenderMode(
    *(Graphics **)(*(_QWORD *)(*(_QWORD *)&AppMain::pApp + 112i64) + 8i64),
    1,
    (int)(float)(outParam * 255.0));
  v19 = (Image *)extension::BasicFutureObject<extension::GFXIMovieData,void>::operator->(
                   (extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> *)&this->m_pImages[1],
                   v18);
  v20 = *(float *)&x;
  drawConvAA(v19, *(float *)&x, 540.0, ImageRects_RoundNum_0, v15, v7);
  easing(&outParam, frame, 0.0, 1.0, p11e, 3.0, 1.0, aniFrame2e, 5.0, 0.2, type2e, 59.0, 0.69999999, p32a, 60.0, 1.0);
  `anonymous namespace'::g_srcRatio = outParam;
  `anonymous namespace'::g_graphicsOpt = 1;
  Graphics::setRenderMode(
    *(Graphics **)(*(_QWORD *)(*(_QWORD *)&AppMain::pApp + 112i64) + 8i64),
    1,
    (int)(float)(outParam * 255.0));
  v22 = (Image *)extension::BasicFutureObject<extension::GFXIMovieData,void>::operator->(
                   (extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> *)&this->m_pImages[1],
                   v21);
  drawConvAA(v22, v20, 540.0, &ImageRects_RoundNum_0[1], v15, v7);
}

void __fastcall BattleCallAnimationReadyGO::readResources_EN(BattleCallAnimationReadyGO *this)
{
  __int64 v2; // rax
  bool v3; // cf
  unsigned __int64 v4; // rax
  _QWORD *v5; // rax
  extension::BasicFutureObject<Image,extension::FutureImageOption> *v6; // rdi
  BattleCallAnimationReadyGO::ERound::Type m_round; // er9
  extension::BasicFutureObject<Image,extension::FutureImageOption>::AssetCache *v8; // rcx
  extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body *m_ptr; // rcx
  unsigned __int64 v10; // r8
  extension::BasicFutureObject<Image,extension::FutureImageOption>::AssetCache *v11; // rcx
  extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body *v12; // rcx
  extension::BasicFutureObject<Image,extension::FutureImageOption>::AssetCache *v13; // rcx
  extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body *v14; // rcx
  char *Ptr; // rcx
  char *v16; // rax
  extension::BasicFutureObject<Image,extension::FutureImageOption>::AssetCache *v17; // rcx
  extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body *v18; // rcx
  extension::BasicFutureObject<Image,extension::FutureImageOption>::AssetCache *v19; // rcx
  extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body *v20; // rcx
  extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> other; // [rsp+40h] [rbp-C8h] BYREF
  extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> v22; // [rsp+50h] [rbp-B8h] BYREF
  extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> v23; // [rsp+60h] [rbp-A8h] BYREF
  extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> v24; // [rsp+70h] [rbp-98h] BYREF
  extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> v25; // [rsp+80h] [rbp-88h] BYREF
  std::string v26; // [rsp+90h] [rbp-78h] BYREF
  std::string v27; // [rsp+B0h] [rbp-58h] BYREF
  std::string v28; // [rsp+D0h] [rbp-38h] BYREF
  std::string v29; // [rsp+F0h] [rbp-18h] BYREF
  std::string v30; // [rsp+110h] [rbp+8h] BYREF
  __int64 v31; // [rsp+130h] [rbp+28h]
  std::string v32; // [rsp+138h] [rbp+30h] BYREF
  std::string _Right; // [rsp+158h] [rbp+50h] BYREF
  std::string v34; // [rsp+178h] [rbp+70h] BYREF
  std::string v35; // [rsp+198h] [rbp+90h] BYREF
  std::string v36; // [rsp+1B8h] [rbp+B0h] BYREF
  char _Buffer[256]; // [rsp+1D8h] [rbp+D0h] BYREF

  v31 = -2i64;
  this->m_imageCount = 3;
  *(_QWORD *)&other.gap0 = 3i64;
  v2 = 48i64;
  if ( !is_mul_ok(3ui64, 0x10ui64) )
    v2 = -1i64;
  v3 = __CFADD__(v2, 8i64);
  v4 = v2 + 8;
  if ( v3 )
    v4 = -1i64;
  v5 = operator new[](v4);
  if ( v5 )
  {
    *v5 = 3i64;
    v6 = (extension::BasicFutureObject<Image,extension::FutureImageOption> *)(v5 + 1);
    `eh vector constructor iterator'(
      v5 + 1,
      0x10ui64,
      3ui64,
      (void (__fastcall *)(void *))extension::BasicFutureObject<Image,extension::FutureImageOption>::BasicFutureObject<Image,extension::FutureImageOption>,
      (void (__fastcall *)(void *))extension::BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>::~BasicFutureObject<extension::AsyncAsset,extension::FutureAssetOption>);
  }
  else
  {
    v6 = 0i64;
  }
  this->m_pImages = v6;
  if ( v6 )
  {
    m_round = this->m_round;
    if ( ((m_round + 3) & 0xFFFFFFFD) != 0 )
    {
      if ( m_round == -2 )
      {
        _Right._Mypair._Myval2._Myres = 15i64;
        _Right._Mypair._Myval2._Mysize = 0i64;
        _Right._Mypair._Myval2._Bx._Buf[0] = 0;
        std::string::assign(
          &_Right,
          "ui/battle_ui/_EN/announce/Round_Extra_out.obm",
          aUiBattleUiEnAn_5[0] != 0 ? 0x2D : 0);
        other.m_isNoCache = 0;
        v26._Mypair._Myval2._Myres = 15i64;
        v26._Mypair._Myval2._Mysize = 0i64;
        v26._Mypair._Myval2._Bx._Buf[0] = 0;
        std::string::assign(&v26, &_Right, 0i64, 0xFFFFFFFFFFFFFFFFui64);
        extension::BasicFutureObject<Image,extension::FutureImageOption>::AssetCache::getCachedOrLoadStart(
          v8,
          (extension::RefCountablePtr<extension::BasicFutureObject<Image,extension::FutureImageOption>::Body> *)&other.m_body,
          &v26,
          0i64);
        extension::BasicFutureObject<OGLSecondary,void>::operator=(
          (extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> *)&this->m_pImages[1],
          &other);
        m_ptr = other.m_body.m_ptr;
        if ( other.m_body.m_ptr
          && _InterlockedExchangeAdd64(
               (volatile signed __int64 *)&other.m_body.m_ptr->m_refCount.m_ptr->m_sharedCount,
               0xFFFFFFFFFFFFFFFFui64) == 1 )
        {
          ((void (__fastcall *)(extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body *, __int64))m_ptr->~RefCountableWeakSupportBase)(
            m_ptr,
            1i64);
        }
        std::string::~string(&_Right);
      }
      else
      {
        sprintf_s(_Buffer, 0x100ui64, "ui/battle_ui/_EN/announce/Round_num_%d.obm", (unsigned int)(m_round + 1));
        v34._Mypair._Myval2._Myres = 15i64;
        v34._Mypair._Myval2._Mysize = 0i64;
        v34._Mypair._Myval2._Bx._Buf[0] = 0;
        if ( _Buffer[0] )
        {
          v10 = -1i64;
          do
            ++v10;
          while ( _Buffer[v10] );
        }
        else
        {
          v10 = 0i64;
        }
        std::string::assign(&v34, _Buffer, v10);
        v22.m_isNoCache = 0;
        v27._Mypair._Myval2._Myres = 15i64;
        v27._Mypair._Myval2._Mysize = 0i64;
        v27._Mypair._Myval2._Bx._Buf[0] = 0;
        std::string::assign(&v27, &v34, 0i64, 0xFFFFFFFFFFFFFFFFui64);
        extension::BasicFutureObject<Image,extension::FutureImageOption>::AssetCache::getCachedOrLoadStart(
          v11,
          (extension::RefCountablePtr<extension::BasicFutureObject<Image,extension::FutureImageOption>::Body> *)&v22.m_body,
          &v27,
          0i64);
        extension::BasicFutureObject<OGLSecondary,void>::operator=(
          (extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> *)&this->m_pImages[1],
          &v22);
        v12 = v22.m_body.m_ptr;
        if ( v22.m_body.m_ptr
          && _InterlockedExchangeAdd64(
               (volatile signed __int64 *)&v22.m_body.m_ptr->m_refCount.m_ptr->m_sharedCount,
               0xFFFFFFFFFFFFFFFFui64) == 1 )
        {
          ((void (__fastcall *)(extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body *, __int64))v12->~RefCountableWeakSupportBase)(
            v12,
            1i64);
        }
        std::string::~string(&v34);
      }
    }
    else
    {
      v32._Mypair._Myval2._Myres = 15i64;
      v32._Mypair._Myval2._Mysize = 0i64;
      v32._Mypair._Myval2._Bx._Buf[0] = 0;
      std::string::assign(&v32, "ui/battle_ui/_EN/announce/Round_Final_out.obm", aUiBattleUiEnAn_1[0] != 0 ? 0x2D : 0);
      v23.m_isNoCache = 0;
      v28._Mypair._Myval2._Myres = 15i64;
      v28._Mypair._Myval2._Mysize = 0i64;
      v28._Mypair._Myval2._Bx._Buf[0] = 0;
      std::string::assign(&v28, &v32, 0i64, 0xFFFFFFFFFFFFFFFFui64);
      extension::BasicFutureObject<Image,extension::FutureImageOption>::AssetCache::getCachedOrLoadStart(
        v13,
        (extension::RefCountablePtr<extension::BasicFutureObject<Image,extension::FutureImageOption>::Body> *)&v23.m_body,
        &v28,
        0i64);
      extension::BasicFutureObject<OGLSecondary,void>::operator=(
        (extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> *)&this->m_pImages[1],
        &v23);
      v14 = v23.m_body.m_ptr;
      if ( v23.m_body.m_ptr
        && _InterlockedExchangeAdd64(
             (volatile signed __int64 *)&v23.m_body.m_ptr->m_refCount.m_ptr->m_sharedCount,
             0xFFFFFFFFFFFFFFFFui64) == 1 )
      {
        ((void (__fastcall *)(extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body *, __int64))v14->~RefCountableWeakSupportBase)(
          v14,
          1i64);
      }
      if ( v32._Mypair._Myval2._Myres >= 0x10 )
      {
        Ptr = v32._Mypair._Myval2._Bx._Ptr;
        if ( v32._Mypair._Myval2._Myres + 1 >= 0x1000 )
        {
          if ( (v32._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
            invalid_parameter_noinfo_noreturn();
          v16 = (char *)*((_QWORD *)v32._Mypair._Myval2._Bx._Ptr - 1);
          if ( v16 >= v32._Mypair._Myval2._Bx._Ptr )
            invalid_parameter_noinfo_noreturn();
          if ( (char *)(v32._Mypair._Myval2._Bx._Ptr - v16) < (char *)8 )
            invalid_parameter_noinfo_noreturn();
          if ( (char *)(v32._Mypair._Myval2._Bx._Ptr - v16) > (char *)0x27 )
            invalid_parameter_noinfo_noreturn();
          Ptr = (char *)*((_QWORD *)v32._Mypair._Myval2._Bx._Ptr - 1);
        }
        operator delete(Ptr);
      }
    }
    v35._Mypair._Myval2._Myres = 15i64;
    v35._Mypair._Myval2._Mysize = 0i64;
    v35._Mypair._Myval2._Bx._Buf[0] = 0;
    std::string::assign(&v35, "ui/battle_ui/_EN/announce/Ready_out.obm", aUiBattleUiEnAn_2[0] != 0 ? 0x27 : 0);
    v24.m_isNoCache = 0;
    v29._Mypair._Myval2._Myres = 15i64;
    v29._Mypair._Myval2._Mysize = 0i64;
    v29._Mypair._Myval2._Bx._Buf[0] = 0;
    std::string::assign(&v29, &v35, 0i64, 0xFFFFFFFFFFFFFFFFui64);
    extension::BasicFutureObject<Image,extension::FutureImageOption>::AssetCache::getCachedOrLoadStart(
      v17,
      (extension::RefCountablePtr<extension::BasicFutureObject<Image,extension::FutureImageOption>::Body> *)&v24.m_body,
      &v29,
      0i64);
    extension::BasicFutureObject<OGLSecondary,void>::operator=(
      (extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> *)this->m_pImages,
      &v24);
    v18 = v24.m_body.m_ptr;
    if ( v24.m_body.m_ptr
      && _InterlockedExchangeAdd64(
           (volatile signed __int64 *)&v24.m_body.m_ptr->m_refCount.m_ptr->m_sharedCount,
           0xFFFFFFFFFFFFFFFFui64) == 1 )
    {
      ((void (__fastcall *)(extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body *, __int64))v18->~RefCountableWeakSupportBase)(
        v18,
        1i64);
    }
    std::string::~string(&v35);
    v36._Mypair._Myval2._Myres = 15i64;
    v36._Mypair._Myval2._Mysize = 0i64;
    v36._Mypair._Myval2._Bx._Buf[0] = 0;
    std::string::assign(&v36, "ui/battle_ui/_EN/announce/GO_out.obm", aUiBattleUiEnAn_4[0] != 0 ? 0x24 : 0);
    v25.m_isNoCache = 0;
    v30._Mypair._Myval2._Myres = 15i64;
    v30._Mypair._Myval2._Mysize = 0i64;
    v30._Mypair._Myval2._Bx._Buf[0] = 0;
    std::string::assign(&v30, &v36, 0i64, 0xFFFFFFFFFFFFFFFFui64);
    extension::BasicFutureObject<Image,extension::FutureImageOption>::AssetCache::getCachedOrLoadStart(
      v19,
      (extension::RefCountablePtr<extension::BasicFutureObject<Image,extension::FutureImageOption>::Body> *)&v25.m_body,
      &v30,
      0i64);
    extension::BasicFutureObject<OGLSecondary,void>::operator=(
      (extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void> *)&this->m_pImages[2],
      &v25);
    v20 = v25.m_body.m_ptr;
    if ( v25.m_body.m_ptr )
    {
      if ( _InterlockedExchangeAdd64(
             (volatile signed __int64 *)&v25.m_body.m_ptr->m_refCount.m_ptr->m_sharedCount,
             0xFFFFFFFFFFFFFFFFui64) == 1 )
        ((void (__fastcall *)(extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::Body *, __int64))v20->~RefCountableWeakSupportBase)(
          v20,
          1i64);
    }
    std::string::~string(&v36);
  }
}

