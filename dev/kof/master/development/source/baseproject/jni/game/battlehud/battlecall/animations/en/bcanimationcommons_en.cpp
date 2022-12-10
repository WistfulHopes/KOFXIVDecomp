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
#include "dev/kof/master/development/source/baseproject/jni/framework/rapper/graphicsopt.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlecall/battlecallshader.cpp"

const `anonymous-namespace'::<unnamed-enum-YOUWIN_EFF_FLARE> `anonymous namespace'::YOUWIN_EFF_SPARKS_S_03 = 0xA;
const `anonymous-namespace'::<unnamed-enum-KO_EFF_FLARE_KO> `anonymous namespace'::KO_EFF_SPARKS_SLOW_01 = 0x38;
const `anonymous-namespace'::<unnamed-enum-KO_EFF_FLARE_KO> `anonymous namespace'::KO_EFF_SPARKS_2_24 = 0x9;
const `anonymous-namespace'::<unnamed-enum-KO_EFF_FLARE_KO> `anonymous namespace'::KO_EFF_FLARE_KO = 0x0;
const `anonymous-namespace'::<unnamed-enum-KO_EFF_FLARE_KO> `anonymous namespace'::KO_EFF_SPARKS_2_26 = 0x15;
const `anonymous-namespace'::<unnamed-enum-KO_EFF_FLARE_KO> `anonymous namespace'::KO_EFF_SPARKS_B_11 = 0x29;
const `anonymous-namespace'::<unnamed-enum-YOUWIN_EFF_FLARE> `anonymous namespace'::YOUWIN_EFF_SPARKS_S_00 = 0x7;
const `anonymous-namespace'::<unnamed-enum-KO_EFF_FLARE_KO> `anonymous namespace'::KO_EFF_SPARKS_B_16 = 0x2E;
const `anonymous-namespace'::<unnamed-enum-KO_EFF_FLARE_KO> `anonymous namespace'::KO_EFF_SPARKS_2_07 = 0x12;
const `anonymous-namespace'::<unnamed-enum-KO_EFF_FLARE_KO> `anonymous namespace'::KO_EFF_SPARKS_2_06 = 0x3;
const `anonymous-namespace'::<unnamed-enum-YOUWIN_EFF_FLARE> `anonymous namespace'::YOUWIN_EFF_SPARKS_02 = 0x4;
const `anonymous-namespace'::<unnamed-enum-KO_EFF_FLARE_KO> `anonymous namespace'::KO_EFF_SPARKS_B_18 = 0x30;
const `anonymous-namespace'::<unnamed-enum-KO_EFF_FLARE_KO> `anonymous namespace'::KO_EFF_SPARKS_2_21 = 0x8;
const `anonymous-namespace'::<unnamed-enum-YOUWIN_EFF_FLARE> `anonymous namespace'::YOUWIN_EFF_SPARKS_00 = 0x2;
const `anonymous-namespace'::<unnamed-enum-YOUWIN_EFF_FLARE> `anonymous namespace'::YOUWIN_EFF_SPARKS_03 = 0x5;
const `anonymous-namespace'::<unnamed-enum-KO_EFF_FLARE_KO> `anonymous namespace'::KO_EFF_SPARKS_2_20 = 0x17;
const `anonymous-namespace'::<unnamed-enum-KO_EFF_FLARE_KO> `anonymous namespace'::KO_EFF_SPARKS_A_07 = 0x1E;
const `anonymous-namespace'::<unnamed-enum-KO_EFF_FLARE_KO> `anonymous namespace'::KO_EFF_SPARKS_B_13 = 0x2B;
const `anonymous-namespace'::<unnamed-enum-KO_EFF_FLARE_KO> `anonymous namespace'::KO_EFF_SPARKS_2_23 = 0x13;
const `anonymous-namespace'::<unnamed-enum-YOUWIN_EFF_FLARE> `anonymous namespace'::YOUWIN_EFF_SPARKS_S_02 = 0x9;
const `anonymous-namespace'::<unnamed-enum-YOUWIN_EFF_FLARE> `anonymous namespace'::YOUWIN_YOU_WIN = 0xE;
const `anonymous-namespace'::<unnamed-enum-KO_EFF_FLARE_KO> `anonymous namespace'::KO_EFF_SPARKS_SLOW_05 = 0x3C;
const `anonymous-namespace'::<unnamed-enum-YOUWIN_EFF_FLARE> `anonymous namespace'::YOUWIN_EFF_SPARKS_S_05 = 0xC;
const `anonymous-namespace'::<unnamed-enum-KO_EFF_FLARE_KO> `anonymous namespace'::KO_EFF_SPARKS_2_11 = 0x18;
const `anonymous-namespace'::<unnamed-enum-YOUWIN_EFF_FLARE> `anonymous namespace'::YOUWIN_EFF_SPARKS_04 = 0x6;
const `anonymous-namespace'::<unnamed-enum-KO_EFF_FLARE_KO> `anonymous namespace'::KO_EFF_SPARKS_B_03 = 0x21;
const `anonymous-namespace'::<unnamed-enum-YOUWIN_EFF_FLARE> `anonymous namespace'::YOUWIN_EFF_SPARKS_S_04 = 0xB;
const `anonymous-namespace'::<unnamed-enum-KO_EFF_FLARE_KO> `anonymous namespace'::KO_EFF_SPARKS_2_25 = 0xD;
const `anonymous-namespace'::<unnamed-enum-KO_EFF_FLARE_KO> `anonymous namespace'::KO_EFF_SPARKS_B_02 = 0x20;
const `anonymous-namespace'::<unnamed-enum-YOUWIN_EFF_FLARE> `anonymous namespace'::YOUWIN_EFF_YOU_WIN_BURST = 0xF;
const `anonymous-namespace'::<unnamed-enum-KO_EFF_FLARE_KO> `anonymous namespace'::KO_EFF_SPARKS_B_12 = 0x2A;
const `anonymous-namespace'::<unnamed-enum-KO_EFF_FLARE_KO> `anonymous namespace'::KO_EFF_SPARKS_B_08 = 0x26;
const `anonymous-namespace'::<unnamed-enum-KO_EFF_FLARE_KO> `anonymous namespace'::KO_EFF_SPARKS_2_04 = 0xF;
const `anonymous-namespace'::<unnamed-enum-KO_EFF_FLARE_KO> `anonymous namespace'::KO_EFF_SPARKS_2_14 = 0x19;
const `anonymous-namespace'::<unnamed-enum-KO_EFF_FLARE_KO> `anonymous namespace'::KO_EFF_SPARKS_B_15 = 0x2D;
void BattleCallAnimationCommons::drawEffect_KO_EN(float frame, Image * pImage, const _C_CONV * pImageRects); // 0x1400A4B70
const `anonymous-namespace'::<unnamed-enum-KO_EFF_FLARE_KO> `anonymous namespace'::KO_EFF_SPARKS_B_22 = 0x34;
const `anonymous-namespace'::<unnamed-enum-KO_EFF_FLARE_KO> `anonymous namespace'::KO_EFF_SPARKS_2_18 = 0x7;
const `anonymous-namespace'::<unnamed-enum-KO_EFF_FLARE_KO> `anonymous namespace'::KO_EFF_SPARKS_SLOW_06 = 0x3D;
const `anonymous-namespace'::<unnamed-enum-KO_EFF_FLARE_KO> `anonymous namespace'::KO_EFF_SPARKS_2_09 = 0x4;
const `anonymous-namespace'::<unnamed-enum-KO_EFF_FLARE_KO> `anonymous namespace'::KO_EFF_SPARKS_2_17 = 0x14;
const `anonymous-namespace'::<unnamed-enum-KO_EFF_FLARE_KO> `anonymous namespace'::KO_EFF_SPARKS_B_01 = 0x1F;
const `anonymous-namespace'::<unnamed-enum-KO_EFF_FLARE_KO> `anonymous namespace'::KO_EFF_SPARKS_B_06 = 0x24;
const `anonymous-namespace'::<unnamed-enum-KO_EFF_FLARE_KO> `anonymous namespace'::KO_EFF_SPARKS_B_07 = 0x25;
const `anonymous-namespace'::<unnamed-enum-KO_EFF_FLARE_KO> `anonymous namespace'::KO_EFF_SPARKS_2_10 = 0xC;
const `anonymous-namespace'::<unnamed-enum-KO_EFF_FLARE_KO> `anonymous namespace'::KO_EFF_SPARKS_2_02 = 0x11;
const `anonymous-namespace'::<unnamed-enum-KO_EFF_FLARE_KO> `anonymous namespace'::KO_EFF_LINE = 0x3E;
const `anonymous-namespace'::<unnamed-enum-YOUWIN_EFF_FLARE> `anonymous namespace'::YOUWIN_EFF_LINE = 0x1;
const `anonymous-namespace'::<unnamed-enum-KO_EFF_FLARE_KO> `anonymous namespace'::KO_EFF_SPARKS_2_01 = 0x1;
const `anonymous-namespace'::<unnamed-enum-KO_EFF_FLARE_KO> `anonymous namespace'::KO_EFF_SPARKS_2_22 = 0xB;
const `anonymous-namespace'::<unnamed-enum-KO_EFF_FLARE_KO> `anonymous namespace'::KO_EFF_SPARKS_B_21 = 0x33;
const `anonymous-namespace'::<unnamed-enum-KO_EFF_FLARE_KO> `anonymous namespace'::KO_EFF_SPARKS_SLOW_04 = 0x3B;
const `anonymous-namespace'::<unnamed-enum-KO_EFF_FLARE_KO> `anonymous namespace'::KO_EFF_SPARKS_B_05 = 0x23;
const `anonymous-namespace'::<unnamed-enum-KO_EFF_FLARE_KO> `anonymous namespace'::KO_EFF_SPARKS_B_17 = 0x2F;
const `anonymous-namespace'::<unnamed-enum-KO_EFF_FLARE_KO> `anonymous namespace'::KO_EFF_SPARKS_B_24 = 0x36;
const `anonymous-namespace'::<unnamed-enum-KO_EFF_FLARE_KO> `anonymous namespace'::KO_EFF_SPARKS_2_12 = 0x5;
const `anonymous-namespace'::<unnamed-enum-KO_EFF_FLARE_KO> `anonymous namespace'::KO_EFF_SPARKS_B_09 = 0x27;
const `anonymous-namespace'::<unnamed-enum-YOUWIN_EFF_FLARE> `anonymous namespace'::YOUWIN_EFF_FLARE = 0x0;
const `anonymous-namespace'::<unnamed-enum-KO_EFF_FLARE_KO> `anonymous namespace'::KO_EFF_SPARKS_B_25 = 0x37;
const `anonymous-namespace'::<unnamed-enum-KO_EFF_FLARE_KO> `anonymous namespace'::KO_EFF_SPARKS_SLOW_03 = 0x3A;
const `anonymous-namespace'::<unnamed-enum-KO_EFF_FLARE_KO> `anonymous namespace'::KO_EFF_SPARKS_2_08 = 0x1A;
const `anonymous-namespace'::<unnamed-enum-KO_EFF_FLARE_KO> `anonymous namespace'::KO_EFF_SPARKS_B_23 = 0x35;
const `anonymous-namespace'::<unnamed-enum-KO_EFF_FLARE_KO> `anonymous namespace'::KO_EFF_SPARKS_2_16 = 0xA;
const `anonymous-namespace'::<unnamed-enum-KO_EFF_FLARE_KO> `anonymous namespace'::KO_EFF_SPARKS_B_19 = 0x31;
const `anonymous-namespace'::<unnamed-enum-YOUWIN_EFF_FLARE> `anonymous namespace'::YOUWIN_EFF_SPARKS_01 = 0x3;
const `anonymous-namespace'::<unnamed-enum-KO_EFF_FLARE_KO> `anonymous namespace'::KO_EFF_SPARKS_B_10 = 0x28;
const `anonymous-namespace'::<unnamed-enum-KO_EFF_FLARE_KO> `anonymous namespace'::KO_EFF_SPARKS_2_13 = 0x10;
const `anonymous-namespace'::<unnamed-enum-KO_EFF_FLARE_KO> `anonymous namespace'::KO_EFF_SPARKS_A_01 = 0x1B;
const `anonymous-namespace'::<unnamed-enum-KO_EFF_FLARE_KO> `anonymous namespace'::KO_EFF_SPARKS_B_14 = 0x2C;
const `anonymous-namespace'::<unnamed-enum-KO_EFF_FLARE_KO> `anonymous namespace'::KO_EFF_SPARKS_2_05 = 0x16;
const `anonymous-namespace'::<unnamed-enum-YOUWIN_EFF_FLARE> `anonymous namespace'::YOUWIN_EFF_SPARKS_S_01 = 0x8;
const `anonymous-namespace'::<unnamed-enum-KO_EFF_FLARE_KO> `anonymous namespace'::KO_EFF_SPARKS_SLOW_02 = 0x39;
const `anonymous-namespace'::<unnamed-enum-KO_EFF_FLARE_KO> `anonymous namespace'::KO_EFF_SPARKS_2_15 = 0x6;
const `anonymous-namespace'::<unnamed-enum-KO_EFF_FLARE_KO> `anonymous namespace'::KO_EFF_SPARKS_A_03 = 0x1C;
const `anonymous-namespace'::<unnamed-enum-KO_EFF_FLARE_KO> `anonymous namespace'::KO_EFF_SPARKS_2_03 = 0x2;
const `anonymous-namespace'::<unnamed-enum-KO_EFF_FLARE_KO> `anonymous namespace'::KO_EFF_SPARKS_A_05 = 0x1D;
const `anonymous-namespace'::<unnamed-enum-KO_EFF_FLARE_KO> `anonymous namespace'::KO_EFF_SPARKS_B_04 = 0x22;
const `anonymous-namespace'::<unnamed-enum-KO_EFF_FLARE_KO> `anonymous namespace'::KO_EFF_SPARKS_B_20 = 0x32;
const `anonymous-namespace'::<unnamed-enum-YOUWIN_EFF_FLARE> `anonymous namespace'::YOUWIN_EFF_SPARKS_S_06 = 0xD;
const `anonymous-namespace'::<unnamed-enum-KO_EFF_FLARE_KO> `anonymous namespace'::KO_EFF_SPARKS_2_19 = 0xE;
std::piecewise_construct_t std::piecewise_construct; // 0x14088AE77
void BattleCallAnimationCommons::drawEffect_YouWin_EN(float frame, Image * pImage, const _C_CONV * pImageRects); // 0x1400A9730//decompilation failure at 14088AE77!
void __fastcall BattleCallAnimationCommons::drawEffect_KO_EN(
        BattleCallAnimationCommons *this,
        float frame,
        Image *pImage,
        const _C_CONV *pImageRects)
{
  float aniFrame4; // xmm11_4
  float v7; // xmm6_4
  float v8; // xmm11_4
  float v9; // xmm8_4
  float v10; // xmm6_4
  float v11; // xmm11_4
  float scaley; // xmm6_4
  float v13; // xmm6_4
  float v14; // xmm6_4
  float v15; // xmm6_4
  float v16; // xmm6_4
  float v17; // xmm6_4
  float v18; // xmm6_4
  float aniFrame3; // xmm6_4
  float v20; // xmm7_4
  __int64 v21; // rbx
  float v22; // xmm11_4
  float v23; // xmm2_4
  float v24; // xmm6_4
  float v25; // xmm6_4
  float v26; // xmm6_4
  float v27; // xmm6_4
  float v28; // xmm6_4
  float v29; // xmm6_4
  float v30; // xmm6_4
  float v31; // xmm6_4
  float v32; // xmm6_4
  float v33; // xmm6_4
  float v34; // xmm6_4
  float v35; // xmm6_4
  float v36; // xmm6_4
  float v37; // xmm6_4
  float v38; // xmm6_4
  float v39; // xmm6_4
  float v40; // xmm6_4
  float v41; // xmm6_4
  float v42; // xmm6_4
  float v43; // xmm6_4
  float v44; // xmm6_4
  Tween::EasingType scalex; // [rsp+28h] [rbp-F0h]
  Tween::EasingType scalexa; // [rsp+28h] [rbp-F0h]
  Tween::EasingType scalexb; // [rsp+28h] [rbp-F0h]
  Tween::EasingType scalexc; // [rsp+28h] [rbp-F0h]
  Tween::EasingType scalexd; // [rsp+28h] [rbp-F0h]
  Tween::EasingType scalexe; // [rsp+28h] [rbp-F0h]
  Tween::EasingType scalexf; // [rsp+28h] [rbp-F0h]
  Tween::EasingType scalexg; // [rsp+28h] [rbp-F0h]
  Tween::EasingType scalexh; // [rsp+28h] [rbp-F0h]
  Tween::EasingType scalexi; // [rsp+28h] [rbp-F0h]
  Tween::EasingType scalexj; // [rsp+28h] [rbp-F0h]
  Tween::EasingType scalexk; // [rsp+28h] [rbp-F0h]
  Tween::EasingType scalexl; // [rsp+28h] [rbp-F0h]
  Tween::EasingType scalexm; // [rsp+28h] [rbp-F0h]
  Tween::EasingType scalexn; // [rsp+28h] [rbp-F0h]
  Tween::EasingType scalexo; // [rsp+28h] [rbp-F0h]
  Tween::EasingType scalexp; // [rsp+28h] [rbp-F0h]
  Tween::EasingType scalexq; // [rsp+28h] [rbp-F0h]
  Tween::EasingType scalexr; // [rsp+28h] [rbp-F0h]
  Tween::EasingType scalexs; // [rsp+28h] [rbp-F0h]
  Tween::EasingType scalext; // [rsp+28h] [rbp-F0h]
  Tween::EasingType scalexu; // [rsp+28h] [rbp-F0h]
  Tween::EasingType scalexv; // [rsp+28h] [rbp-F0h]
  Tween::EasingType scalexw; // [rsp+28h] [rbp-F0h]
  Tween::EasingType scalexx; // [rsp+28h] [rbp-F0h]
  Tween::EasingType scalexy; // [rsp+28h] [rbp-F0h]
  Tween::EasingType scalexz; // [rsp+28h] [rbp-F0h]
  Tween::EasingType scalexba; // [rsp+28h] [rbp-F0h]
  Tween::EasingType scalexbb; // [rsp+28h] [rbp-F0h]
  Tween::EasingType scalexbc; // [rsp+28h] [rbp-F0h]
  Tween::EasingType scalexbd; // [rsp+28h] [rbp-F0h]
  Tween::EasingType scalexbe; // [rsp+28h] [rbp-F0h]
  Tween::EasingType scalexbf; // [rsp+28h] [rbp-F0h]
  Tween::EasingType scalexbg; // [rsp+28h] [rbp-F0h]
  Tween::EasingType scalexbh; // [rsp+28h] [rbp-F0h]
  Tween::EasingType scalexbi; // [rsp+28h] [rbp-F0h]
  Tween::EasingType scalexbj; // [rsp+28h] [rbp-F0h]
  Tween::EasingType scalexbk; // [rsp+28h] [rbp-F0h]
  Tween::EasingType scalexbl; // [rsp+28h] [rbp-F0h]
  Tween::EasingType scalexbm; // [rsp+28h] [rbp-F0h]
  Tween::EasingType scalexbn; // [rsp+28h] [rbp-F0h]
  Tween::EasingType scalexbo; // [rsp+28h] [rbp-F0h]
  Tween::EasingType scalexbp; // [rsp+28h] [rbp-F0h]
  Tween::EasingType p2; // [rsp+38h] [rbp-E0h]
  Tween::EasingType p2g; // [rsp+38h] [rbp-E0h]
  Tween::EasingType p2h; // [rsp+38h] [rbp-E0h]
  Tween::EasingType p2i; // [rsp+38h] [rbp-E0h]
  Tween::EasingType p2j; // [rsp+38h] [rbp-E0h]
  Tween::EasingType p2k; // [rsp+38h] [rbp-E0h]
  Tween::EasingType p2a; // [rsp+38h] [rbp-E0h]
  Tween::EasingType p2l; // [rsp+38h] [rbp-E0h]
  Tween::EasingType p2b; // [rsp+38h] [rbp-E0h]
  Tween::EasingType p2m; // [rsp+38h] [rbp-E0h]
  Tween::EasingType p2n; // [rsp+38h] [rbp-E0h]
  Tween::EasingType p2o; // [rsp+38h] [rbp-E0h]
  Tween::EasingType p2p; // [rsp+38h] [rbp-E0h]
  Tween::EasingType p2c; // [rsp+38h] [rbp-E0h]
  Tween::EasingType p2d; // [rsp+38h] [rbp-E0h]
  Tween::EasingType p2e; // [rsp+38h] [rbp-E0h]
  Tween::EasingType p2q; // [rsp+38h] [rbp-E0h]
  Tween::EasingType p2f; // [rsp+38h] [rbp-E0h]
  Tween::EasingType aniFrame2; // [rsp+40h] [rbp-D8h]
  Tween::EasingType aniFrame2a; // [rsp+40h] [rbp-D8h]
  Tween::EasingType aniFrame2b; // [rsp+40h] [rbp-D8h]
  Tween::EasingType aniFrame2c; // [rsp+40h] [rbp-D8h]
  Tween::EasingType aniFrame2d; // [rsp+40h] [rbp-D8h]
  Tween::EasingType aniFrame2e; // [rsp+40h] [rbp-D8h]
  Tween::EasingType aniFrame2f; // [rsp+40h] [rbp-D8h]
  Tween::EasingType aniFrame2g; // [rsp+40h] [rbp-D8h]
  Tween::EasingType aniFrame2h; // [rsp+40h] [rbp-D8h]
  Tween::EasingType aniFrame2i; // [rsp+40h] [rbp-D8h]
  Tween::EasingType aniFrame2j; // [rsp+40h] [rbp-D8h]
  Tween::EasingType aniFrame2k; // [rsp+40h] [rbp-D8h]
  Tween::EasingType aniFrame2l; // [rsp+40h] [rbp-D8h]
  Tween::EasingType aniFrame2m; // [rsp+40h] [rbp-D8h]
  Tween::EasingType aniFrame2n; // [rsp+40h] [rbp-D8h]
  Tween::EasingType aniFrame2o; // [rsp+40h] [rbp-D8h]
  Tween::EasingType aniFrame2p; // [rsp+40h] [rbp-D8h]
  Tween::EasingType aniFrame2q; // [rsp+40h] [rbp-D8h]
  Tween::EasingType aniFrame2r; // [rsp+40h] [rbp-D8h]
  Tween::EasingType aniFrame2s; // [rsp+40h] [rbp-D8h]
  Tween::EasingType aniFrame2t; // [rsp+40h] [rbp-D8h]
  Tween::EasingType aniFrame2u; // [rsp+40h] [rbp-D8h]
  Tween::EasingType aniFrame2v; // [rsp+40h] [rbp-D8h]
  Tween::EasingType aniFrame2w; // [rsp+40h] [rbp-D8h]
  Tween::EasingType aniFrame2x; // [rsp+40h] [rbp-D8h]
  Tween::EasingType aniFrame2y; // [rsp+40h] [rbp-D8h]
  Tween::EasingType aniFrame2z; // [rsp+40h] [rbp-D8h]
  Tween::EasingType aniFrame2ba; // [rsp+40h] [rbp-D8h]
  Tween::EasingType aniFrame2bb; // [rsp+40h] [rbp-D8h]
  Tween::EasingType aniFrame2bc; // [rsp+40h] [rbp-D8h]
  Tween::EasingType aniFrame2bd; // [rsp+40h] [rbp-D8h]
  Tween::EasingType aniFrame2be; // [rsp+40h] [rbp-D8h]
  Tween::EasingType aniFrame2bf; // [rsp+40h] [rbp-D8h]
  Tween::EasingType aniFrame2bg; // [rsp+40h] [rbp-D8h]
  Tween::EasingType aniFrame2bh; // [rsp+40h] [rbp-D8h]
  Tween::EasingType aniFrame2bi; // [rsp+40h] [rbp-D8h]
  Tween::EasingType aniFrame2bj; // [rsp+40h] [rbp-D8h]
  Tween::EasingType aniFrame2bk; // [rsp+40h] [rbp-D8h]
  Tween::EasingType aniFrame2bl; // [rsp+40h] [rbp-D8h]
  Tween::EasingType aniFrame2bm; // [rsp+40h] [rbp-D8h]
  Tween::EasingType aniFrame2bn; // [rsp+40h] [rbp-D8h]
  Tween::EasingType aniFrame2bo; // [rsp+40h] [rbp-D8h]
  Tween::EasingType aniFrame2bp; // [rsp+40h] [rbp-D8h]
  Tween::EasingType v149; // [rsp+58h] [rbp-C0h]
  Tween::EasingType v150; // [rsp+58h] [rbp-C0h]
  Tween::EasingType v151; // [rsp+58h] [rbp-C0h]
  Tween::EasingType v152; // [rsp+58h] [rbp-C0h]
  Tween::EasingType v153; // [rsp+58h] [rbp-C0h]
  Tween::EasingType v154; // [rsp+58h] [rbp-C0h]
  Tween::EasingType v155; // [rsp+58h] [rbp-C0h]
  Tween::EasingType v156; // [rsp+58h] [rbp-C0h]
  Tween::EasingType v157; // [rsp+58h] [rbp-C0h]
  Tween::EasingType v158; // [rsp+58h] [rbp-C0h]
  Tween::EasingType v159; // [rsp+58h] [rbp-C0h]
  Tween::EasingType v160; // [rsp+58h] [rbp-C0h]
  Tween::EasingType v161; // [rsp+58h] [rbp-C0h]
  Tween::EasingType v162; // [rsp+58h] [rbp-C0h]
  Tween::EasingType v163; // [rsp+58h] [rbp-C0h]
  Tween::EasingType v164; // [rsp+58h] [rbp-C0h]
  Tween::EasingType v165; // [rsp+58h] [rbp-C0h]
  Tween::EasingType v166; // [rsp+58h] [rbp-C0h]
  Tween::EasingType v167; // [rsp+58h] [rbp-C0h]
  Tween::EasingType v168; // [rsp+78h] [rbp-A0h]
  Tween::EasingType v169; // [rsp+78h] [rbp-A0h]
  Tween::EasingType v170; // [rsp+78h] [rbp-A0h]
  Tween::EasingType v171; // [rsp+78h] [rbp-A0h]
  Tween::EasingType v172; // [rsp+78h] [rbp-A0h]
  float outParam; // [rsp+98h] [rbp-80h] BYREF
  BattleCallAnimationCommons *outParams1; // [rsp+168h] [rbp+50h] BYREF
  float outParams2; // [rsp+170h] [rbp+58h] BYREF

  outParams1 = this;
  if ( frame >= 0.0 && frame <= 192.0 )
  {
    aniFrame4 = FLOAT_187_0;
    if ( frame >= 187.0 && frame <= 190.0 )
    {
      v7 = (float)(frame - 187.0) / 3.0;
      if ( v7 > 0.0 )
      {
        if ( v7 < 1.0 )
          v8 = (float)((float)((float)(v7 * 1216.0) / 1216.0) * 1216.0) + 1504.0;
        else
          v8 = FLOAT_2720_0;
      }
      else
      {
        v8 = FLOAT_1504_0;
      }
      if ( v7 > 0.0 )
      {
        if ( v7 < 1.0 )
          v9 = (float)((float)((float)(v7 * 0.5) * 2.0) * 0.5) + 0.5;
        else
          v9 = *(float *)&FLOAT_1_0;
      }
      else
      {
        v9 = FLOAT_0_5;
      }
      setRenderMode(1, v9);
      drawConvAA(pImage, v8, 540.0, pImageRects + 62, 2.0, 0.60000002);
      v10 = Tween::easing(436.0, -800.0, v7, Linear);
      setRenderMode(1, v9);
      drawConvAA(pImage, v10, 540.0, pImageRects + 62, 2.0, 0.60000002);
      aniFrame4 = FLOAT_187_0;
    }
    LODWORD(outParams1) = 1148190720;
    outParams2 = 540.0;
    easing(&outParam, frame, 0.0, 1.95, scalex, 8.0, 2.25, aniFrame2, 180.0, 3.0, v149, aniFrame4, 6.0);
    if ( frame < 0.0 )
    {
      v11 = *(float *)&FLOAT_1_0;
    }
    else if ( frame > 179.0 )
    {
      if ( aniFrame4 < frame )
        v11 = 0.0;
      else
        v11 = Tween::easing(1.0, 0.0, (float)(frame - 179.0) * 0.125, Linear);
    }
    else
    {
      v11 = Tween::easing(1.0, 1.0, frame / 179.0, Linear);
    }
    `anonymous namespace'::g_graphicsOpt = 2;
    `anonymous namespace'::g_srcRatio = v11;
    Graphics::setRenderMode(
      *(Graphics **)(*(_QWORD *)(*(_QWORD *)&AppMain::pApp + 112i64) + 8i64),
      2,
      (int)(float)(v11 * 255.0));
    scaley = outParam;
    drawConvAA(pImage, 960.0, 540.0, pImageRects, outParam, outParam);
    `anonymous namespace'::g_srcRatio = v11;
    `anonymous namespace'::g_graphicsOpt = 1;
    Graphics::setRenderMode(
      *(Graphics **)(*(_QWORD *)(*(_QWORD *)&AppMain::pApp + 112i64) + 8i64),
      1,
      (int)(float)(v11 * 255.0));
    drawConvAA(pImage, 960.0, 540.0, pImageRects, scaley, scaley);
    if ( frame <= 192.0 )
    {
      easing(
        (float *)&outParams1,
        &outParams2,
        frame,
        0.0,
        1488.0,
        500.0,
        p2,
        6.0,
        1517.0,
        490.0,
        v150,
        180.0,
        1708.0,
        422.0,
        v168,
        192.0,
        2366.0,
        194.0);
      easing(&outParam, frame, 0.0, 2.0, scalexa, 180.0, 0.60000002, aniFrame2a, 192.0, 0.0);
      v11 = *(float *)&FLOAT_1_0;
      setRenderMode(1, 1.0);
      drawConvAA(pImage, *(float *)&outParams1, outParams2, pImageRects + 56, outParam, outParam);
    }
    if ( frame <= 120.0 )
    {
      easing(
        (float *)&outParams1,
        &outParams2,
        frame,
        0.0,
        260.0,
        340.0,
        p2,
        6.0,
        239.0,
        334.0,
        v150,
        120.0,
        120.0,
        302.0);
      if ( frame < 0.0 )
      {
        v13 = FLOAT_0_5;
        outParam = FLOAT_0_5;
      }
      else
      {
        outParam = Tween::easing(0.5, 0.0, frame / 120.0, Linear);
        v13 = outParam;
      }
      v11 = *(float *)&FLOAT_1_0;
      setRenderMode(1, 1.0);
      drawConvAA(pImage, *(float *)&outParams1, outParams2, pImageRects + 56, v13, v13);
    }
    if ( frame <= 130.0 )
    {
      easing(
        (float *)&outParams1,
        &outParams2,
        frame,
        0.0,
        560.0,
        300.0,
        p2,
        6.0,
        537.0,
        284.0,
        v150,
        110.0,
        420.0,
        208.0,
        v168,
        130.0,
        398.0,
        193.0);
      easing(&outParam, frame, 0.0, 0.75, scalexb, 110.0, 0.5, aniFrame2b, 130.0, 0.0);
      v11 = *(float *)&FLOAT_1_0;
      setRenderMode(1, 1.0);
      drawConvAA(pImage, *(float *)&outParams1, outParams2, pImageRects + 56, outParam, outParam);
    }
    if ( frame <= 59.0 )
    {
      easing(
        (float *)&outParams1,
        &outParams2,
        frame,
        0.0,
        1080.0,
        860.0,
        p2,
        6.0,
        1087.0,
        884.0,
        v150,
        59.0,
        1105.0,
        940.0);
      if ( frame < 0.0 )
      {
        v14 = *(float *)&FLOAT_0_44999999;
        LODWORD(outParam) = FLOAT_0_44999999;
      }
      else
      {
        outParam = Tween::easing(0.44999999, 0.0, frame / 59.0, Linear);
        v14 = outParam;
      }
      v11 = *(float *)&FLOAT_1_0;
      setRenderMode(1, 1.0);
      drawConvAA(pImage, *(float *)&outParams1, outParams2, pImageRects + 56, v14, v14);
    }
    if ( frame <= 80.0 )
    {
      easing(
        (float *)&outParams1,
        &outParams2,
        frame,
        0.0,
        906.0,
        809.0,
        p2,
        6.0,
        906.0,
        809.0,
        v150,
        80.0,
        896.0,
        860.0);
      if ( frame < 0.0 )
      {
        v15 = FLOAT_0_5;
        outParam = FLOAT_0_5;
      }
      else
      {
        outParam = Tween::easing(0.5, 0.0, frame / 80.0, Linear);
        v15 = outParam;
      }
      v11 = *(float *)&FLOAT_1_0;
      setRenderMode(1, 1.0);
      drawConvAA(pImage, *(float *)&outParams1, outParams2, pImageRects + 56, v15, v15);
    }
    if ( frame <= 188.0 )
    {
      easing(
        (float *)&outParams1,
        &outParams2,
        frame,
        0.0,
        1600.0,
        100.0,
        p2,
        6.0,
        1628.0,
        84.0,
        v150,
        188.0,
        1900.0,
        -60.0);
      if ( frame < 0.0 )
      {
        v16 = *(float *)&FLOAT_0_60000002;
        LODWORD(outParam) = FLOAT_0_60000002;
      }
      else
      {
        outParam = Tween::easing(0.60000002, 0.0, frame / 188.0, Linear);
        v16 = outParam;
      }
      v11 = *(float *)&FLOAT_1_0;
      setRenderMode(1, 1.0);
      drawConvAA(pImage, *(float *)&outParams1, outParams2, pImageRects + 57, v16, v16);
    }
    if ( frame <= 180.0 )
    {
      easing(
        (float *)&outParams1,
        &outParams2,
        frame,
        0.0,
        284.0,
        946.0,
        p2,
        6.0,
        245.0,
        971.0,
        v150,
        180.0,
        -96.0,
        1200.0);
      if ( frame < 0.0 )
      {
        v17 = FLOAT_1_45;
        outParam = FLOAT_1_45;
      }
      else
      {
        outParam = Tween::easing(1.45, 0.0, frame / 180.0, Linear);
        v17 = outParam;
      }
      v11 = *(float *)&FLOAT_1_0;
      setRenderMode(1, 1.0);
      drawConvAA(pImage, *(float *)&outParams1, outParams2, pImageRects + 57, v17, v17);
    }
    if ( frame <= 140.0 )
    {
      easing(
        (float *)&outParams1,
        &outParams2,
        frame,
        0.0,
        1180.0,
        700.0,
        p2,
        6.0,
        1192.0,
        707.0,
        v150,
        140.0,
        1280.0,
        760.0);
      easing(&outParam, frame, 0.0, 0.75, scalexc, 80.0, 0.5, aniFrame2c, 140.0, 0.0);
      setRenderMode(1, 1.0);
      drawConvAA(pImage, *(float *)&outParams1, outParams2, pImageRects + 57, outParam, outParam);
      easing(
        (float *)&outParams1,
        &outParams2,
        frame,
        0.0,
        860.0,
        500.0,
        p2g,
        6.0,
        854.0,
        497.0,
        v151,
        140.0,
        820.0,
        480.0);
      if ( frame < 0.0 )
      {
        v18 = *(float *)&FLOAT_0_60000002;
        LODWORD(outParam) = FLOAT_0_60000002;
      }
      else
      {
        outParam = Tween::easing(0.60000002, 0.0, frame / 140.0, Linear);
        v18 = outParam;
      }
      v11 = *(float *)&FLOAT_1_0;
      setRenderMode(1, 1.0);
      drawConvAA(pImage, *(float *)&outParams1, outParams2, pImageRects + 57, v18, v18);
    }
    if ( frame <= 192.0 )
    {
      easing(
        (float *)&outParams1,
        &outParams2,
        frame,
        0.0,
        290.0,
        864.0,
        p2,
        6.0,
        264.0,
        882.0,
        v150,
        180.0,
        34.0,
        1050.0,
        v168,
        192.0,
        -160.0,
        1190.0);
      easing(&outParam, frame, 0.0, 0.75, scalexd, 180.0, 0.5, aniFrame2d, 192.0, 0.0);
      v11 = *(float *)&FLOAT_1_0;
      setRenderMode(1, 1.0);
      drawConvAA(pImage, *(float *)&outParams1, outParams2, pImageRects + 58, outParam, outParam);
    }
    if ( frame <= 186.0 )
    {
      easing(
        (float *)&outParams1,
        &outParams2,
        frame,
        0.0,
        1064.0,
        440.0,
        p2,
        6.0,
        1067.0,
        436.0,
        v150,
        180.0,
        1100.0,
        400.0,
        v168,
        186.0,
        1125.0,
        370.0);
      easing(&outParam, frame, 0.0, 0.75, scalexe, 180.0, 0.40000001, aniFrame2e, 186.0, 0.0);
      setRenderMode(1, 1.0);
      drawConvAA(pImage, *(float *)&outParams1, outParams2, pImageRects + 58, outParam, outParam);
      easing(
        (float *)&outParams1,
        &outParams2,
        frame,
        0.0,
        1014.0,
        546.0,
        p2h,
        6.0,
        1016.0,
        547.0,
        v152,
        180.0,
        1034.0,
        560.0,
        v169,
        186.0,
        1072.0,
        586.0);
      easing(&outParam, frame, 0.0, 0.5, scalexf, 180.0, 0.25, aniFrame2f, 186.0, 0.0);
      v11 = *(float *)&FLOAT_1_0;
      setRenderMode(1, 1.0);
      drawConvAA(pImage, *(float *)&outParams1, outParams2, pImageRects + 58, outParam, outParam);
    }
    if ( frame <= 192.0 )
    {
      easing(
        (float *)&outParams1,
        &outParams2,
        frame,
        0.0,
        630.0,
        806.0,
        p2,
        6.0,
        608.0,
        822.0,
        v150,
        180.0,
        415.0,
        967.0,
        v168,
        192.0,
        60.0,
        1218.0);
      easing(&outParam, frame, 0.0, 1.25, scalexg, 180.0, 1.0, aniFrame2g, 192.0, 0.0);
      setRenderMode(1, 1.0);
      drawConvAA(pImage, *(float *)&outParams1, outParams2, pImageRects + 59, outParam, outParam);
      easing(
        (float *)&outParams1,
        &outParams2,
        frame,
        0.0,
        1540.0,
        760.0,
        p2i,
        6.0,
        1566.0,
        770.0,
        v153,
        180.0,
        1800.0,
        870.0,
        v170,
        192.0,
        2090.0,
        1000.0);
      easing(&outParam, frame, 0.0, 1.25, scalexh, 180.0, 0.5, aniFrame2h, 192.0, 0.0);
      v11 = *(float *)&FLOAT_1_0;
      setRenderMode(1, 1.0);
      drawConvAA(pImage, *(float *)&outParams1, outParams2, pImageRects + 59, outParam, outParam);
    }
    if ( frame <= 186.0 )
    {
      easing(
        (float *)&outParams1,
        &outParams2,
        frame,
        0.0,
        334.0,
        670.0,
        p2,
        6.0,
        317.0,
        674.0,
        v150,
        180.0,
        172.0,
        714.0,
        v168,
        186.0,
        -156.0,
        798.0);
      easing(&outParam, frame, 0.0, 1.0, scalexi, 180.0, 0.75, aniFrame2i, 186.0, 0.0);
      v11 = *(float *)&FLOAT_1_0;
      setRenderMode(1, 1.0);
      drawConvAA(pImage, *(float *)&outParams1, outParams2, pImageRects + 59, outParam, outParam);
    }
    aniFrame3 = FLOAT_185_0;
    if ( frame <= 185.0 )
    {
      easing(
        (float *)&outParams1,
        &outParams2,
        frame,
        0.0,
        1280.0,
        780.0,
        p2,
        6.0,
        1297.0,
        792.0,
        v150,
        180.0,
        1451.0,
        901.0,
        v168,
        185.0,
        1481.0,
        921.0);
      easing(&outParam, frame, 0.0, 0.60000002, scalexj, 110.0, 0.5, aniFrame2j, 180.0, 0.30000001, v154, 185.0, 0.0);
      setRenderMode(1, 1.0);
      drawConvAA(pImage, *(float *)&outParams1, outParams2, pImageRects + 60, outParam, outParam);
      easing(
        (float *)&outParams1,
        &outParams2,
        frame,
        0.0,
        990.0,
        560.0,
        p2j,
        6.0,
        992.0,
        561.0,
        v155,
        180.0,
        1012.0,
        574.0,
        v171,
        185.0,
        1052.0,
        600.0);
      easing(&outParam, frame, 0.0, 2.0, scalexk, 180.0, 0.80000001, aniFrame2k, 185.0, 0.0);
      v11 = *(float *)&FLOAT_1_0;
      setRenderMode(1, 1.0);
      drawConvAA(pImage, *(float *)&outParams1, outParams2, pImageRects + 60, outParam, outParam);
    }
    if ( frame <= 186.0 )
    {
      easing(
        (float *)&outParams1,
        &outParams2,
        frame,
        0.0,
        506.0,
        724.0,
        p2,
        6.0,
        489.0,
        731.0,
        v150,
        180.0,
        369.0,
        788.0,
        v168,
        186.0,
        166.0,
        888.0);
      easing(&outParam, frame, 0.0, 0.5, scalexl, 180.0, 0.44999999, aniFrame2l, 186.0, 0.0);
      v11 = *(float *)&FLOAT_1_0;
      setRenderMode(1, 1.0);
      drawConvAA(pImage, *(float *)&outParams1, outParams2, pImageRects + 60, outParam, outParam);
    }
    if ( frame <= 185.0 )
    {
      easing(
        (float *)&outParams1,
        &outParams2,
        frame,
        0.0,
        900.0,
        580.0,
        p2,
        6.0,
        899.0,
        580.0,
        v150,
        180.0,
        890.0,
        587.0,
        v168,
        185.0,
        882.0,
        593.0);
      easing(&outParam, frame, 0.0, 0.75, scalexm, 60.0, 0.5, aniFrame2m, 180.0, 0.30000001, v156, 185.0, 0.0);
      v11 = *(float *)&FLOAT_1_0;
      setRenderMode(1, 1.0);
      drawConvAA(pImage, *(float *)&outParams1, outParams2, pImageRects + 60, outParam, outParam);
    }
    if ( frame <= 120.0 )
    {
      easing(
        (float *)&outParams1,
        &outParams2,
        frame,
        0.0,
        846.0,
        580.0,
        p2,
        6.0,
        842.0,
        581.0,
        v150,
        120.0,
        822.0,
        587.0);
      easing(&outParam, frame, 0.0, 0.40000001, scalexn, 75.0, 0.40000001, aniFrame2n, 120.0, 0.0);
      v11 = *(float *)&FLOAT_1_0;
      setRenderMode(1, 1.0);
      drawConvAA(pImage, *(float *)&outParams1, outParams2, pImageRects + 60, outParam, outParam);
    }
    if ( frame <= 192.0 )
    {
      easing(
        (float *)&outParams1,
        &outParams2,
        frame,
        0.0,
        1720.0,
        180.0,
        p2,
        6.0,
        1742.0,
        170.0,
        v150,
        192.0,
        1960.0,
        80.0);
      easing(&outParam, frame, 0.0, 0.75, scalexo, 180.0, 0.1, aniFrame2o, 192.0, 0.0);
      v11 = *(float *)&FLOAT_1_0;
      setRenderMode(1, 1.0);
      drawConvAA(pImage, *(float *)&outParams1, outParams2, pImageRects + 61, outParam, outParam);
    }
    if ( frame <= 185.0 )
    {
      easing(
        (float *)&outParams1,
        &outParams2,
        frame,
        0.0,
        922.0,
        742.0,
        p2,
        6.0,
        920.0,
        749.0,
        v150,
        180.0,
        906.0,
        820.0,
        v168,
        185.0,
        846.0,
        1132.0);
      easing(&outParam, frame, 0.0, 1.0, scalexp, 80.0, 0.60000002, aniFrame2p, 180.0, 0.44999999, v157, 185.0, 0.0);
      v11 = *(float *)&FLOAT_1_0;
      setRenderMode(1, 1.0);
      drawConvAA(pImage, *(float *)&outParams1, outParams2, pImageRects + 61, outParam, outParam);
    }
    if ( frame <= 192.0 )
    {
      easing(
        (float *)&outParams1,
        &outParams2,
        frame,
        0.0,
        394.0,
        484.0,
        p2,
        6.0,
        375.0,
        480.0,
        v150,
        180.0,
        205.0,
        450.0,
        v168,
        192.0,
        -177.0,
        370.0);
      easing(&outParam, frame, 0.0, 1.0, scalexq, 180.0, 0.75, aniFrame2q, 192.0, 0.0);
      v11 = *(float *)&FLOAT_1_0;
      setRenderMode(1, 1.0);
      drawConvAA(pImage, *(float *)&outParams1, outParams2, pImageRects + 61, outParam, outParam);
    }
    if ( frame <= 184.0 )
    {
      easing(
        (float *)&outParams1,
        &outParams2,
        frame,
        0.0,
        800.0,
        560.0,
        p2,
        6.0,
        793.0,
        561.0,
        v150,
        180.0,
        733.0,
        570.0,
        v168,
        184.0,
        703.0,
        575.0);
      easing(&outParam, frame, 0.0, 1.0, scalexr, 180.0, 0.34999999, aniFrame2r, 184.0, 0.0);
      setRenderMode(1, 1.0);
      drawConvAA(pImage, *(float *)&outParams1, outParams2, pImageRects + 61, outParam, outParam);
      easing(
        (float *)&outParams1,
        &outParams2,
        frame,
        0.0,
        1572.0,
        558.0,
        p2k,
        6.0,
        1595.0,
        559.0,
        v158,
        180.0,
        1810.0,
        568.0,
        v172,
        184.0,
        1970.0,
        574.0);
      easing(&outParam, frame, 0.0, 1.5, scalexs, 180.0, 1.25, aniFrame2s, 184.0, 0.0);
      v11 = *(float *)&FLOAT_1_0;
      setRenderMode(1, 1.0);
      drawConvAA(pImage, *(float *)&outParams1, outParams2, pImageRects + 61, outParam, outParam);
    }
    if ( frame >= 8.0 )
    {
      v22 = *(float *)&FLOAT_1_3;
      if ( frame <= 125.0 )
      {
        easing((float *)&outParams1, &outParams2, frame, 8.0, 935.0, 267.0, p2, 125.0, 922.0, 91.0);
        easing(&outParam, frame, 8.0, 1.3, scalext, 90.0, 0.5, aniFrame2t, 125.0, 0.0);
        setRenderMode(1, 1.0);
        drawConvAA(pImage, *(float *)&outParams1, outParams2, pImageRects + 31, outParam, outParam);
      }
      if ( frame <= 186.0 )
      {
        easing(
          (float *)&outParams1,
          &outParams2,
          frame,
          8.0,
          677.0,
          280.0,
          p2,
          180.0,
          517.0,
          130.0,
          v150,
          186.0,
          447.0,
          60.0);
        easing(&outParam, frame, 8.0, 1.3, scalexu, 150.0, 1.0, aniFrame2u, 180.0, 0.1, v159, 186.0, 0.0);
        setRenderMode(1, 1.0);
        drawConvAA(pImage, *(float *)&outParams1, outParams2, pImageRects + 32, outParam, outParam);
      }
      if ( frame <= 60.0 )
      {
        easing((float *)&outParams1, &outParams2, frame, 8.0, 1468.0, 314.0, p2, 60.0, 1548.0, 254.0);
        if ( frame < 8.0 )
          LODWORD(outParam) = FLOAT_1_3;
        else
          outParam = Tween::easing(1.3, 0.0, (float)(frame - 8.0) / 52.0, Linear);
        setRenderMode(1, 1.0);
        drawConvAA(pImage, *(float *)&outParams1, outParams2, pImageRects + 33, outParam, outParam);
      }
      if ( frame <= 184.0 )
      {
        easing(
          (float *)&outParams1,
          &outParams2,
          frame,
          8.0,
          802.0,
          351.0,
          p2,
          180.0,
          677.0,
          205.0,
          v150,
          184.0,
          649.0,
          165.0);
        easing(&outParam, frame, 8.0, 1.3, scalexv, 125.0, 1.2, aniFrame2v, 180.0, 0.89999998, v160, 184.0, 0.0);
        setRenderMode(1, 1.0);
        drawConvAA(pImage, *(float *)&outParams1, outParams2, pImageRects + 34, outParam, outParam);
      }
      if ( frame <= 75.0 )
      {
        easing((float *)&outParams1, &outParams2, frame, 8.0, 1009.0, 327.0, p2, 75.0, 1018.0, 287.0);
        if ( frame < 8.0 )
          LODWORD(outParam) = FLOAT_1_3;
        else
          outParam = Tween::easing(1.3, 0.0, (float)(frame - 8.0) / 67.0, Linear);
        setRenderMode(1, 1.0);
        drawConvAA(pImage, *(float *)&outParams1, outParams2, pImageRects + 35, outParam, outParam);
      }
      if ( frame <= 184.0 )
      {
        easing(
          (float *)&outParams1,
          &outParams2,
          frame,
          8.0,
          895.0,
          362.0,
          p2,
          180.0,
          850.0,
          252.0,
          v150,
          184.0,
          810.0,
          152.0);
        easing(&outParam, frame, 8.0, 1.3, scalexw, 90.0, 1.3, aniFrame2w, 180.0, 1.0, v161, 184.0, 0.0);
        setRenderMode(1, 1.0);
        drawConvAA(pImage, *(float *)&outParams1, outParams2, pImageRects + 36, outParam, outParam);
      }
      v23 = *(float *)&FLOAT_100_0;
      if ( frame <= 100.0 )
      {
        easing((float *)&outParams1, &outParams2, frame, 8.0, 689.0, 395.0, p2, 100.0, 624.0, 360.0);
        if ( frame < 8.0 )
          LODWORD(outParam) = FLOAT_1_0;
        else
          outParam = Tween::easing(1.0, 0.0, (float)(frame - 8.0) / 92.0, Linear);
        setRenderMode(1, 1.0);
        drawConvAA(pImage, *(float *)&outParams1, outParams2, pImageRects + 37, outParam, outParam);
        easing(
          (float *)&outParams1,
          &outParams2,
          frame,
          8.0,
          1239.0,
          438.0,
          p2a,
          100.0,
          1379.0,
          391.0,
          v150,
          180.0,
          1499.0,
          351.0);
        easing(&outParam, frame, 8.0, 1.3, scalexx, 100.0, 0.80000001, aniFrame2x, 180.0, 0.0);
        setRenderMode(1, 1.0);
        drawConvAA(pImage, *(float *)&outParams1, outParams2, pImageRects + 38, outParam, outParam);
        v23 = *(float *)&FLOAT_100_0;
      }
      if ( frame <= 184.0 )
      {
        easing(
          (float *)&outParams1,
          &outParams2,
          frame,
          8.0,
          1095.0,
          407.0,
          p2,
          v23,
          1175.0,
          327.0,
          v150,
          184.0,
          1190.0,
          313.0);
        easing(&outParam, frame, 8.0, 1.3, scalexy, 100.0, 0.2, aniFrame2y, 184.0, 0.0);
        setRenderMode(1, 1.0);
        drawConvAA(pImage, *(float *)&outParams1, outParams2, pImageRects + 39, outParam, outParam);
        easing(
          (float *)&outParams1,
          &outParams2,
          frame,
          8.0,
          730.0,
          471.0,
          p2l,
          100.0,
          646.0,
          444.0,
          v162,
          184.0,
          576.0,
          424.0);
        easing(&outParam, frame, 8.0, 1.3, scalexz, 100.0, 0.5, aniFrame2z, 184.0, 0.0);
        setRenderMode(1, 1.0);
        drawConvAA(pImage, *(float *)&outParams1, outParams2, pImageRects + 40, outParam, outParam);
      }
      if ( frame <= 140.0 )
      {
        easing((float *)&outParams1, &outParams2, frame, 8.0, 1117.0, 520.0, p2, 140.0, 1197.0, 515.0);
        if ( frame < 8.0 )
          LODWORD(outParam) = FLOAT_1_3;
        else
          outParam = Tween::easing(1.3, 0.0, (float)(frame - 8.0) / 132.0, Linear);
        setRenderMode(1, 1.0);
        drawConvAA(pImage, *(float *)&outParams1, outParams2, pImageRects + 41, outParam, outParam);
      }
      if ( frame <= 180.0 )
      {
        easing((float *)&outParams1, &outParams2, frame, 8.0, 1292.0, 514.0, p2, 180.0, 1552.0, 502.0);
        if ( frame < 8.0 )
          LODWORD(outParam) = FLOAT_1_3;
        else
          outParam = Tween::easing(1.3, 0.0, (float)(frame - 8.0) / 172.0, Linear);
        setRenderMode(1, 1.0);
        drawConvAA(pImage, *(float *)&outParams1, outParams2, pImageRects + 42, outParam, outParam);
        easing((float *)&outParams1, &outParams2, frame, 8.0, 1034.0, 542.0, p2b, 180.0, 1065.0, 543.0);
        if ( frame < 8.0 )
          LODWORD(outParam) = FLOAT_1_3;
        else
          outParam = Tween::easing(1.3, 0.0, (float)(frame - 8.0) / 172.0, Linear);
        setRenderMode(1, 1.0);
        drawConvAA(pImage, *(float *)&outParams1, outParams2, pImageRects + 43, outParam, outParam);
      }
      if ( frame <= 184.0 )
      {
        easing(
          (float *)&outParams1,
          &outParams2,
          frame,
          8.0,
          732.0,
          568.0,
          p2,
          180.0,
          612.0,
          583.0,
          v150,
          184.0,
          552.0,
          590.0);
        easing(&outParam, frame, 8.0, 1.3, scalexba, 180.0, 0.5, aniFrame2ba, 184.0, 0.0);
        setRenderMode(1, 1.0);
        drawConvAA(pImage, *(float *)&outParams1, outParams2, pImageRects + 44, outParam, outParam);
        easing(
          (float *)&outParams1,
          &outParams2,
          frame,
          8.0,
          1286.0,
          617.0,
          p2m,
          180.0,
          1536.0,
          667.0,
          v163,
          184.0,
          1778.0,
          717.0);
        easing(&outParam, frame, 8.0, 1.3, scalexbb, 180.0, 0.60000002, aniFrame2bb, 184.0, 0.0);
        setRenderMode(1, 1.0);
        drawConvAA(pImage, *(float *)&outParams1, outParams2, pImageRects + 45, outParam, outParam);
        easing(
          (float *)&outParams1,
          &outParams2,
          frame,
          8.0,
          1415.0,
          632.0,
          p2n,
          180.0,
          1545.0,
          654.0,
          v164,
          184.0,
          1645.0,
          671.0);
        easing(&outParam, frame, 8.0, 1.3, scalexbc, 180.0, 0.30000001, aniFrame2bc, 184.0, 0.0);
        setRenderMode(1, 1.0);
        drawConvAA(pImage, *(float *)&outParams1, outParams2, pImageRects + 46, outParam, outParam);
        easing(
          (float *)&outParams1,
          &outParams2,
          frame,
          8.0,
          1021.0,
          676.0,
          p2o,
          180.0,
          1064.0,
          782.0,
          v165,
          184.0,
          1080.0,
          817.0);
        easing(&outParam, frame, 8.0, 1.3, scalexbd, 180.0, 0.80000001, aniFrame2bd, 184.0, 0.0);
        setRenderMode(1, 1.0);
        drawConvAA(pImage, *(float *)&outParams1, outParams2, pImageRects + 47, outParam, outParam);
        easing(
          (float *)&outParams1,
          &outParams2,
          frame,
          8.0,
          1089.0,
          737.0,
          p2p,
          180.0,
          1162.0,
          847.0,
          v166,
          184.0,
          1182.0,
          877.0);
        easing(&outParam, frame, 8.0, 1.3, scalexbe, 180.0, 0.5, aniFrame2be, 184.0, 0.0);
        setRenderMode(1, 1.0);
        drawConvAA(pImage, *(float *)&outParams1, outParams2, pImageRects + 48, outParam, outParam);
      }
      if ( frame <= 125.0 )
      {
        easing((float *)&outParams1, &outParams2, frame, 8.0, 1199.0, 781.0, p2, 125.0, 1289.0, 871.0);
        if ( frame < 8.0 )
          LODWORD(outParam) = FLOAT_1_3;
        else
          outParam = Tween::easing(1.3, 0.0, (float)(frame - 8.0) / 117.0, Linear);
        setRenderMode(1, 1.0);
        drawConvAA(pImage, *(float *)&outParams1, outParams2, pImageRects + 49, outParam, outParam);
      }
      if ( frame <= 76.0 )
      {
        easing((float *)&outParams1, &outParams2, frame, 8.0, 649.0, 817.0, p2, 76.0, 529.0, 907.0);
        if ( frame < 8.0 )
          LODWORD(outParam) = FLOAT_1_3;
        else
          outParam = Tween::easing(1.3, 0.0, (float)(frame - 8.0) / 68.0, Linear);
        setRenderMode(1, 1.0);
        drawConvAA(pImage, *(float *)&outParams1, outParams2, pImageRects + 50, outParam, outParam);
      }
      if ( frame <= 185.0 )
      {
        easing(
          (float *)&outParams1,
          &outParams2,
          frame,
          8.0,
          857.0,
          819.0,
          p2,
          75.0,
          817.0,
          929.0,
          v150,
          180.0,
          779.0,
          1032.0,
          v168,
          185.0,
          752.0,
          1102.0);
        easing(&outParam, frame, 8.0, 1.3, scalexbf, 75.0, 1.0, aniFrame2bf, 180.0, 0.5, v167, 185.0, 0.0);
        setRenderMode(1, 1.0);
        drawConvAA(pImage, *(float *)&outParams1, outParams2, pImageRects + 51, outParam, outParam);
      }
      if ( frame <= 50.0 )
      {
        easing(
          (float *)&outParams1,
          &outParams2,
          frame,
          8.0,
          1134.0,
          832.0,
          p2,
          30.0,
          1153.0,
          859.0,
          v150,
          50.0,
          1165.0,
          876.0);
        easing(&outParam, frame, 8.0, 1.3, scalexbg, 30.0, 1.0, aniFrame2bg, 50.0, 0.0);
        setRenderMode(1, 1.0);
        drawConvAA(pImage, *(float *)&outParams1, outParams2, pImageRects + 52, outParam, outParam);
        aniFrame3 = FLOAT_185_0;
      }
      if ( aniFrame3 >= frame )
      {
        easing(
          (float *)&outParams1,
          &outParams2,
          frame,
          8.0,
          970.0,
          904.0,
          p2,
          180.0,
          970.0,
          1064.0,
          v150,
          aniFrame3,
          970.0,
          1114.0);
        easing(&outParam, frame, 8.0, 1.3, scalexbh, 180.0, 0.80000001, aniFrame2bh, aniFrame3, 0.0);
        setRenderMode(1, 1.0);
        drawConvAA(pImage, *(float *)&outParams1, outParams2, pImageRects + 53, outParam, outParam);
      }
      if ( frame <= 127.0 )
      {
        easing(
          (float *)&outParams1,
          &outParams2,
          frame,
          8.0,
          816.0,
          963.0,
          p2,
          110.0,
          776.0,
          1083.0,
          v150,
          127.0,
          766.0,
          1109.0);
        easing(&outParam, frame, 8.0, 1.3, scalexbi, 110.0, 1.0, aniFrame2bi, 127.0, 0.0);
        setRenderMode(1, 1.0);
        drawConvAA(pImage, *(float *)&outParams1, outParams2, pImageRects + 54, outParam, outParam);
      }
      if ( frame <= 50.0 )
      {
        easing((float *)&outParams1, &outParams2, frame, 8.0, 725.0, 1018.0, p2, 50.0, 678.0, 1108.0);
        if ( frame < 8.0 )
        {
          v24 = *(float *)&FLOAT_1_3;
          LODWORD(outParam) = FLOAT_1_3;
        }
        else
        {
          outParam = Tween::easing(1.3, 0.0, (float)(frame - 8.0) / 42.0, Linear);
          v24 = outParam;
        }
        setRenderMode(1, 1.0);
        drawConvAA(pImage, *(float *)&outParams1, outParams2, pImageRects + 55, v24, v24);
      }
      if ( frame <= 70.0 )
      {
        easing((float *)&outParams1, &outParams2, frame, 8.0, 1071.0, 186.0, p2, 70.0, 1080.0, 166.0);
        if ( frame < 8.0 )
        {
          v25 = *(float *)&FLOAT_1_3;
          LODWORD(outParam) = FLOAT_1_3;
        }
        else
        {
          outParam = Tween::easing(1.3, 0.0, (float)(frame - 8.0) / 62.0, Linear);
          v25 = outParam;
        }
        setRenderMode(1, 1.0);
        drawConvAA(pImage, *(float *)&outParams1, outParams2, pImageRects + 1, v25, v25);
      }
      if ( frame <= 91.0 )
      {
        easing((float *)&outParams1, &outParams2, frame, 8.0, 1048.0, 268.0, p2, 91.0, 1068.0, 214.0);
        if ( frame < 8.0 )
        {
          v26 = *(float *)&FLOAT_1_3;
          LODWORD(outParam) = FLOAT_1_3;
        }
        else
        {
          outParam = Tween::easing(1.3, 0.0, (float)(frame - 8.0) / 83.0, Linear);
          v26 = outParam;
        }
        setRenderMode(1, 1.0);
        drawConvAA(pImage, *(float *)&outParams1, outParams2, pImageRects + 1, v26, v26);
      }
      if ( frame <= 175.0 )
      {
        easing((float *)&outParams1, &outParams2, frame, 8.0, 846.0, 250.0, p2, 175.0, 799.0, 110.0);
        easing(&outParam, frame, 8.0, 1.3, scalexbj, 126.0, 1.0, aniFrame2bj, 175.0, 0.0);
        setRenderMode(1, 1.0);
        drawConvAA(pImage, *(float *)&outParams1, outParams2, pImageRects + 17, outParam, outParam);
      }
      if ( frame <= 130.0 )
      {
        easing(
          (float *)&outParams1,
          &outParams2,
          frame,
          8.0,
          693.0,
          272.0,
          p2,
          77.0,
          643.0,
          222.0,
          v150,
          130.0,
          593.0,
          172.0);
        easing(&outParam, frame, 8.0, 1.3, scalexbk, 77.0, 0.5, aniFrame2bk, 130.0, 0.0);
        setRenderMode(1, 1.0);
        drawConvAA(pImage, *(float *)&outParams1, outParams2, pImageRects + 2, outParam, outParam);
      }
      if ( frame <= 100.0 )
      {
        easing((float *)&outParams1, &outParams2, frame, 8.0, 935.0, 332.0, p2, 100.0, 926.0, 260.0);
        if ( frame < 8.0 )
        {
          v27 = *(float *)&FLOAT_1_3;
          LODWORD(outParam) = FLOAT_1_3;
        }
        else
        {
          outParam = Tween::easing(1.3, 0.0, (float)(frame - 8.0) / 92.0, Linear);
          v27 = outParam;
        }
        setRenderMode(1, 1.0);
        drawConvAA(pImage, *(float *)&outParams1, outParams2, pImageRects + 15, v27, v27);
      }
      if ( frame <= 75.0 )
      {
        easing((float *)&outParams1, &outParams2, frame, 8.0, 1171.0, 345.0, p2, 75.0, 1221.0, 295.0);
        if ( frame < 8.0 )
        {
          v28 = *(float *)&FLOAT_1_3;
          LODWORD(outParam) = FLOAT_1_3;
        }
        else
        {
          outParam = Tween::easing(1.3, 0.0, (float)(frame - 8.0) / 67.0, Linear);
          v28 = outParam;
        }
        setRenderMode(1, 1.0);
        drawConvAA(pImage, *(float *)&outParams1, outParams2, pImageRects + 22, v28, v28);
        easing((float *)&outParams1, &outParams2, frame, 8.0, 1326.0, 493.0, p2c, 75.0, 1396.0, 483.0);
        easing(&outParam, frame, 8.0, 1.3, scalexbl, 40.0, 1.0, aniFrame2bl, 75.0, 0.0);
        setRenderMode(1, 1.0);
        drawConvAA(pImage, *(float *)&outParams1, outParams2, pImageRects + 3, outParam, outParam);
      }
      if ( frame <= 79.0 )
      {
        easing((float *)&outParams1, &outParams2, frame, 8.0, 768.0, 554.0, p2, 79.0, 721.0, 559.0);
        easing(&outParam, frame, 8.0, 1.3, scalexbm, 41.0, 1.0, aniFrame2bm, 79.0, 0.0);
        setRenderMode(1, 1.0);
        drawConvAA(pImage, *(float *)&outParams1, outParams2, pImageRects + 18, outParam, outParam);
      }
      if ( frame <= 120.0 )
      {
        easing((float *)&outParams1, &outParams2, frame, 8.0, 1236.0, 587.0, p2, 120.0, 1426.0, 607.0);
        if ( frame < 8.0 )
        {
          v29 = *(float *)&FLOAT_1_3;
          LODWORD(outParam) = FLOAT_1_3;
        }
        else
        {
          outParam = Tween::easing(1.3, 0.5, (float)(frame - 8.0) / 112.0, Linear);
          v29 = outParam;
        }
        setRenderMode(1, 1.0);
        drawConvAA(pImage, *(float *)&outParams1, outParams2, pImageRects + 26, v29, v29);
      }
      if ( frame <= 150.0 )
      {
        easing((float *)&outParams1, &outParams2, frame, 8.0, 1148.0, 645.0, p2, 150.0, 1298.0, 725.0);
        if ( frame < 8.0 )
        {
          v30 = *(float *)&FLOAT_1_3;
          LODWORD(outParam) = FLOAT_1_3;
        }
        else
        {
          outParam = Tween::easing(1.3, 0.0, (float)(frame - 8.0) / 142.0, Linear);
          v30 = outParam;
        }
        setRenderMode(1, 1.0);
        drawConvAA(pImage, *(float *)&outParams1, outParams2, pImageRects + 4, v30, v30);
      }
      if ( frame <= 184.0 )
      {
        easing(
          (float *)&outParams1,
          &outParams2,
          frame,
          8.0,
          1117.0,
          742.0,
          p2,
          180.0,
          1212.0,
          877.0,
          v150,
          184.0,
          1262.0,
          947.0);
        easing(&outParam, frame, 8.0, 1.3, scalexbn, 180.0, 0.5, aniFrame2bn, 184.0, 0.0);
        setRenderMode(1, 1.0);
        drawConvAA(pImage, *(float *)&outParams1, outParams2, pImageRects + 12, outParam, outParam);
      }
      if ( frame <= 100.0 )
      {
        easing((float *)&outParams1, &outParams2, frame, 8.0, 897.0, 802.0, p2, 100.0, 847.0, 1002.0);
        if ( frame < 8.0 )
        {
          v31 = *(float *)&FLOAT_1_3;
          LODWORD(outParam) = FLOAT_1_3;
        }
        else
        {
          outParam = Tween::easing(1.3, 0.0, (float)(frame - 8.0) / 92.0, Linear);
          v31 = outParam;
        }
        setRenderMode(1, 1.0);
        drawConvAA(pImage, *(float *)&outParams1, outParams2, pImageRects + 24, v31, v31);
      }
      if ( frame <= 53.0 )
      {
        easing((float *)&outParams1, &outParams2, frame, 8.0, 721.0, 310.0, p2, 53.0, 671.0, 260.0);
        if ( frame < 8.0 )
        {
          v32 = *(float *)&FLOAT_1_3;
          LODWORD(outParam) = FLOAT_1_3;
        }
        else
        {
          outParam = Tween::easing(1.3, 0.0, (float)(frame - 8.0) / 45.0, Linear);
          v32 = outParam;
        }
        setRenderMode(1, 1.0);
        drawConvAA(pImage, *(float *)&outParams1, outParams2, pImageRects + 5, v32, v32);
      }
      if ( frame <= 90.0 )
      {
        easing((float *)&outParams1, &outParams2, frame, 8.0, 777.0, 757.0, p2, 90.0, 657.0, 887.0);
        if ( frame < 8.0 )
        {
          v33 = *(float *)&FLOAT_1_3;
          LODWORD(outParam) = FLOAT_1_3;
        }
        else
        {
          outParam = Tween::easing(1.3, 0.0, (float)(frame - 8.0) / 82.0, Linear);
          v33 = outParam;
        }
        setRenderMode(1, 1.0);
        drawConvAA(pImage, *(float *)&outParams1, outParams2, pImageRects + 16, v33, v33);
      }
      if ( frame <= 50.0 )
      {
        easing((float *)&outParams1, &outParams2, frame, 8.0, 1240.0, 364.0, p2, 50.0, 1300.0, 324.0);
        if ( frame < 8.0 )
        {
          v34 = *(float *)&FLOAT_1_3;
          LODWORD(outParam) = FLOAT_1_3;
        }
        else
        {
          outParam = Tween::easing(1.3, 0.0, (float)(frame - 8.0) / 42.0, Linear);
          v34 = outParam;
        }
        setRenderMode(1, 1.0);
        drawConvAA(pImage, *(float *)&outParams1, outParams2, pImageRects + 25, v34, v34);
      }
      if ( frame <= 184.0 )
      {
        easing(
          (float *)&outParams1,
          &outParams2,
          frame,
          8.0,
          1070.0,
          393.0,
          p2,
          180.0,
          1160.0,
          263.0,
          v150,
          184.0,
          1210.0,
          193.0);
        if ( frame < 8.0 )
        {
          v35 = *(float *)&FLOAT_1_3;
          LODWORD(outParam) = FLOAT_1_3;
        }
        else
        {
          outParam = Tween::easing(1.3, 0.0, (float)(frame - 8.0) / 176.0, Linear);
          v35 = outParam;
        }
        setRenderMode(1, 1.0);
        drawConvAA(pImage, *(float *)&outParams1, outParams2, pImageRects + 6, v35, v35);
      }
      if ( frame <= 110.0 )
      {
        easing(
          (float *)&outParams1,
          &outParams2,
          frame,
          8.0,
          788.0,
          319.0,
          p2,
          12.0,
          786.0,
          316.0,
          v150,
          110.0,
          738.0,
          244.0);
        if ( frame < 8.0 )
          v36 = *(float *)&FLOAT_1_3;
        else
          v36 = Tween::easing(1.3, 0.0, (float)(frame - 8.0) / 102.0, Linear);
        setRenderMode(1, 1.0);
        drawConvAA(pImage, *(float *)&outParams1, outParams2, pImageRects + 10, v36, v36);
        easing((float *)&outParams1, &outParams2, frame, 8.0, 616.0, 327.0, p2d, 110.0, 506.0, 257.0);
        if ( frame < 8.0 )
        {
          v37 = *(float *)&FLOAT_1_3;
          LODWORD(outParam) = FLOAT_1_3;
        }
        else
        {
          outParam = Tween::easing(1.3, 0.0, (float)(frame - 8.0) / 102.0, Linear);
          v37 = outParam;
        }
        setRenderMode(1, 1.0);
        drawConvAA(pImage, *(float *)&outParams1, outParams2, pImageRects + 20, v37, v37);
      }
      if ( frame <= 125.0 )
      {
        easing((float *)&outParams1, &outParams2, frame, 8.0, 864.0, 320.0, p2, 125.0, 825.0, 220.0);
        easing(&outParam, frame, 8.0, 1.3, scalexbo, 75.0, 1.0, aniFrame2bo, 125.0, 0.0);
        setRenderMode(1, 1.0);
        drawConvAA(pImage, *(float *)&outParams1, outParams2, pImageRects + 7, outParam, outParam);
      }
      if ( frame <= 75.0 )
      {
        easing((float *)&outParams1, &outParams2, frame, 8.0, 1146.0, 326.0, p2, 75.0, 1236.0, 231.0);
        if ( frame < 8.0 )
          v38 = *(float *)&FLOAT_1_3;
        else
          v38 = Tween::easing(1.3, 0.0, (float)(frame - 8.0) / 67.0, Linear);
        setRenderMode(1, 1.0);
        drawConvAA(pImage, *(float *)&outParams1, outParams2, pImageRects + 14, v38, v38);
        easing((float *)&outParams1, &outParams2, frame, 8.0, 1186.0, 554.0, p2e, 75.0, 1286.0, 559.0);
        if ( frame < 8.0 )
        {
          v39 = *(float *)&FLOAT_1_3;
          LODWORD(outParam) = FLOAT_1_3;
        }
        else
        {
          outParam = Tween::easing(1.3, 0.0, (float)(frame - 8.0) / 67.0, Linear);
          v39 = outParam;
        }
        setRenderMode(1, 1.0);
        drawConvAA(pImage, *(float *)&outParams1, outParams2, pImageRects + 23, v39, v39);
      }
      if ( frame <= 180.0 )
      {
        easing((float *)&outParams1, &outParams2, frame, 8.0, 1138.0, 723.0, p2, 180.0, 1288.0, 873.0);
        if ( frame < 8.0 )
        {
          v40 = *(float *)&FLOAT_1_3;
          LODWORD(outParam) = FLOAT_1_3;
        }
        else
        {
          outParam = Tween::easing(1.3, 0.0, (float)(frame - 8.0) / 172.0, Linear);
          v40 = outParam;
        }
        setRenderMode(1, 1.0);
        drawConvAA(pImage, *(float *)&outParams1, outParams2, pImageRects + 8, v40, v40);
      }
      if ( frame <= 70.0 )
      {
        easing((float *)&outParams1, &outParams2, frame, 8.0, 1185.0, 780.0, p2, 70.0, 1241.0, 840.0);
        easing(&outParam, frame, 8.0, 1.3, scalexbp, 25.0, 1.2, aniFrame2bp, 70.0, 0.0);
        setRenderMode(1, 1.0);
        drawConvAA(pImage, *(float *)&outParams1, outParams2, pImageRects + 11, outParam, outParam);
        easing((float *)&outParams1, &outParams2, frame, 8.0, 1071.0, 892.0, p2q, 70.0, 1094.0, 972.0);
        if ( frame < 8.0 )
          v41 = *(float *)&FLOAT_1_3;
        else
          v41 = Tween::easing(1.3, 0.0, (float)(frame - 8.0) / 62.0, Linear);
        setRenderMode(1, 1.0);
        drawConvAA(pImage, *(float *)&outParams1, outParams2, pImageRects + 19, v41, v41);
      }
      if ( frame <= 60.0 )
      {
        easing((float *)&outParams1, &outParams2, frame, 8.0, 1070.0, 781.0, p2, 60.0, 1100.0, 851.0);
        if ( frame < 8.0 )
          v42 = *(float *)&FLOAT_1_3;
        else
          v42 = Tween::easing(1.3, 0.0, (float)(frame - 8.0) / 52.0, Linear);
        setRenderMode(1, 1.0);
        drawConvAA(pImage, *(float *)&outParams1, outParams2, pImageRects + 9, v42, v42);
        easing((float *)&outParams1, &outParams2, frame, 8.0, 1140.0, 905.0, p2f, 60.0, 1160.0, 955.0);
        if ( frame < 8.0 )
          v43 = *(float *)&FLOAT_1_3;
        else
          v43 = Tween::easing(1.3, 0.0, (float)(frame - 8.0) / 52.0, Linear);
        setRenderMode(1, 1.0);
        drawConvAA(pImage, *(float *)&outParams1, outParams2, pImageRects + 13, v43, v43);
      }
      if ( frame <= 50.0 )
      {
        easing((float *)&outParams1, &outParams2, frame, 8.0, 819.0, 881.0, p2, 50.0, 796.0, 941.0);
        if ( frame < 8.0 )
          v44 = *(float *)&FLOAT_1_3;
        else
          v44 = Tween::easing(1.3, 0.0, (float)(frame - 8.0) / 42.0, Linear);
        setRenderMode(1, 1.0);
        drawConvAA(pImage, *(float *)&outParams1, outParams2, pImageRects + 21, v44, v44);
      }
      if ( frame <= 40.0 )
      {
        easing((float *)&outParams1, &outParams2, frame, 8.0, 807.0, 925.0, p2, 40.0, 796.0, 955.0);
        if ( frame >= 8.0 )
          v22 = Tween::easing(1.3, 0.0, (float)(frame - 8.0) * 0.03125, Linear);
        setRenderMode(1, 1.0);
        drawConvAA(pImage, *(float *)&outParams1, outParams2, pImageRects + 21, v22, v22);
      }
    }
    else
    {
      v20 = frame * 0.5;
      if ( (float)(frame * 0.5) >= 1.0 )
      {
        if ( v20 >= 2.0 )
        {
          v21 = 30i64;
          if ( v20 < 3.0 )
            v21 = 29i64;
        }
        else
        {
          v21 = 28i64;
        }
      }
      else
      {
        v21 = 27i64;
      }
      setRenderMode(1, v11);
      drawConvAA(pImage, 960.0, 540.0, &pImageRects[v21], 3.5, 3.5);
    }
  }
}

void __fastcall BattleCallAnimationCommons::drawEffect_YouWin_EN(
        BattleCallAnimationCommons *this,
        float frame,
        Image *pImage,
        const _C_CONV *pImageRects)
{
  __int64 v6; // r15
  float v7; // xmm8_4
  float v8; // xmm0_4
  float v9; // xmm0_4
  Graphics *v10; // rcx
  float v11; // xmm7_4
  float v12; // xmm6_4
  float p31; // xmm7_4
  Tween::EasingType aniFrame3; // xmm6_4
  float v15; // xmm0_4
  int v16; // ebx
  float v17; // xmm10_4
  float v18; // xmm6_4
  float v19; // xmm9_4
  __int64 v20; // r9
  Graphics *v21; // rcx
  __int64 v22; // r9
  float v23; // xmm8_4
  float v24; // xmm10_4
  float v25; // xmm0_4
  float v26; // xmm0_4
  float v27; // xmm0_4
  float v28; // xmm0_4
  float v29; // xmm0_4
  Tween::EasingType p11; // [rsp+28h] [rbp-150h]
  Tween::EasingType p11c; // [rsp+28h] [rbp-150h]
  Tween::EasingType p11d; // [rsp+28h] [rbp-150h]
  Tween::EasingType p11e; // [rsp+28h] [rbp-150h]
  Tween::EasingType p11a; // [rsp+28h] [rbp-150h]
  Tween::EasingType p11b; // [rsp+28h] [rbp-150h]
  Tween::EasingType p11f; // [rsp+28h] [rbp-150h]
  float p12; // [rsp+30h] [rbp-148h]
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
  float type1bc; // [rsp+38h] [rbp-140h]
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
  Tween::EasingType aniFrame2d; // [rsp+40h] [rbp-138h]
  int aniFrame2l; // [rsp+40h] [rbp-138h]
  int aniFrame2e; // [rsp+40h] [rbp-138h]
  int aniFrame2m; // [rsp+40h] [rbp-138h]
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
  Tween::EasingType aniFrame2bb; // [rsp+40h] [rbp-138h]
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
  float y; // [rsp+F8h] [rbp-80h] BYREF
  float outParam[43]; // [rsp+FCh] [rbp-7Ch] BYREF
  BattleCallAnimationCommons *outParams2; // [rsp+1E8h] [rbp+70h] BYREF
  float outParams1; // [rsp+1F0h] [rbp+78h] BYREF
  float x; // [rsp+200h] [rbp+88h] BYREF

  outParams2 = this;
  v6 = *(_QWORD *)(*(_QWORD *)&AppMain::pApp + 112i64);
  v7 = *(float *)&FLOAT_0_1;
  if ( frame >= 5.0 )
  {
    x = 960.0;
    easing(
      &outParams1,
      (float *)&outParams2,
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
        goto LABEL_12;
      }
      goto LABEL_11;
    }
    if ( frame > 55.0 )
    {
      if ( frame > 61.0 )
      {
LABEL_11:
        v9 = 0.0;
        goto LABEL_12;
      }
      v9 = Tween::easing(1.0, 0.0, (float)(frame - 55.0) / 6.0, Linear);
    }
    else
    {
      v9 = *(float *)&FLOAT_1_0;
    }
LABEL_12:
    v10 = *(Graphics **)(v6 + 8);
    outParam[0] = v9;
    Graphics::setRenderMode(v10, 3, (int)(float)(v9 * 255.0));
    v11 = *(float *)&outParams2;
    v12 = outParams1;
    drawConv(pImage, 960.0, 540.0, pImageRects + 14, outParams1, *(float *)&outParams2, 0.0, aniFrame2a);
    easing(outParam, frame, 5.0, 1.0, p11c, 8.0, 0.2, aniFrame2f, 52.0, 0.5, type2a, 58.0, 1.0, p32a, 64.0, 0.0);
    Graphics::setRenderMode(*(Graphics **)(v6 + 8), 1, (int)(float)(outParam[0] * 255.0));
    p12 = v11;
    p31 = FLOAT_540_0;
    drawConv(pImage, 960.0, 540.0, pImageRects + 14, v12, p12, 0.0, aniFrame2g);
    aniFrame3 = FLOAT_1_5;
    easing(
      &outParams1,
      (float *)&outParams2,
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
    easing(outParam, frame, 5.0, 1.0, p11d, 8.0, 0.1, aniFrame2h, 52.0, 1.0, type2d, 58.0, 1.0, p32c, 64.0, 0.0);
    Graphics::setRenderMode(*(Graphics **)(v6 + 8), 1, (int)(float)(outParam[0] * 255.0));
    drawConv(pImage, 960.0, 540.0, pImageRects + 15, outParams1, *(float *)&outParams2, 0.0, aniFrame2i);
    goto LABEL_14;
  }
  p31 = FLOAT_540_0;
  aniFrame3 = FLOAT_1_5;
LABEL_14:
  easing(&x, frame, 0.0, -558.0, p11, 5.0, 960.0, aniFrame2, 58.0, 960.0, type2, 60.0, 1504.0, p32, 63.0, 2720.0);
  y = 540.0;
  if ( frame < 0.0 )
  {
    outParams1 = *(float *)&FLOAT_1_0;
    LODWORD(outParams2) = FLOAT_0_1;
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
      58.0,
      FLOAT_1_0,
      1.2,
      59.0,
      1.0,
      FLOAT_0_1,
      63.0,
      1.0,
      0.050000001);
    v7 = *(float *)&outParams2;
  }
  if ( frame < 0.0 )
  {
    LODWORD(outParam[0]) = FLOAT_0_69999999;
    v15 = *(float *)&FLOAT_0_69999999;
  }
  else
  {
    easing(outParam, frame, 0.0, 0.69999999, FLOAT_5_0, 0.5, 10.0, Linear, 58.0, 0.0, FLOAT_59_0, 0.5, 63.0, FLOAT_1_0);
    v15 = outParam[0];
  }
  v16 = (int)(float)(v15 * 255.0);
  Graphics::setRenderMode(*(Graphics **)(v6 + 8), 1, v16);
  drawConv(pImage, x, p31, pImageRects + 1, outParams1, v7, 0.0, aniFrame2b);
  easing(&x, frame, 0.0, 2498.0, p11e, 5.0, 960.0, aniFrame2j, 58.0, 960.0, type2b, 60.0, 436.0, p32b, 63.0, -800.0);
  Graphics::setRenderMode(*(Graphics **)(v6 + 8), 1, v16);
  drawConv(pImage, x, p31, pImageRects + 1, outParams1, v7, 0.0, aniFrame2k);
  if ( frame > 11.0 )
  {
    v17 = *(float *)&FLOAT_4_0;
  }
  else
  {
    easing(&x, frame, 0.0, 180.0, p11a, 5.0, 960.0, (Tween::EasingType)aniFrame2c, 11.0, 1540.0);
    y = 540.0;
    v17 = *(float *)&FLOAT_4_0;
    if ( frame < 0.0 )
    {
      v18 = *(float *)&FLOAT_0_2;
      v19 = 0.0;
      LODWORD(outParams2) = FLOAT_0_2;
      outParams1 = 0.0;
    }
    else
    {
      easing(
        &outParams1,
        (float *)&outParams2,
        frame,
        0.0,
        0.0,
        0.2,
        FLOAT_4_0,
        *(float *)&aniFrame3,
        0.30000001,
        5.0,
        aniFrame3,
        *(float *)&aniFrame3,
        6.0,
        1.8,
        FLOAT_0_40000001,
        8.0,
        1.2,
        0.25,
        SLODWORD(FLOAT_11_0),
        1.0,
        0.0);
      v18 = *(float *)&outParams2;
      v19 = outParams1;
    }
    easing(outParam, frame, 0.0, 1.0, p11b, 5.0, 1.0, aniFrame2d, 11.0, 0.0);
    Graphics::setRenderMode(*(Graphics **)(v6 + 8), 1, (int)(float)(outParam[0] * 255.0));
    drawConv(pImage, x, p31, pImageRects, v19, v18, 0.0, aniFrame2l);
  }
  if ( frame >= 5.0 && frame <= 8.0 )
  {
    Graphics::setRenderMode(*(Graphics **)(v6 + 8), 1, 255);
    v20 = 8i64;
    if ( frame < 7.0 )
      v20 = 7i64;
    drawConv(pImage, 960.0, p31, &pImageRects[v20], 2.5, 0.80000001, 0.0, aniFrame2c);
    v21 = *(Graphics **)(v6 + 8);
    x = 960.0;
    y = 540.0;
    outParams1 = 4.0;
    LODWORD(outParams2) = 1068708659;
    outParam[0] = 1.0;
    Graphics::setRenderMode(v21, 1, 255);
    v22 = 3i64;
    if ( frame < 7.0 )
      v22 = 2i64;
    drawConv(pImage, 960.0, p31, &pImageRects[v22], v17, 1.4, 0.0, aniFrame2e);
  }
  Graphics::setRenderMode(*(Graphics **)(v6 + 8), 1, 255);
  if ( frame < 9.0 )
  {
    v23 = *(float *)&FLOAT_1_5;
  }
  else
  {
    easing(
      &x,
      &y,
      frame,
      9.0,
      1080.0,
      494.0,
      type1,
      11.0,
      1205.0,
      472.0,
      type2c,
      13.0,
      1350.0,
      447.0,
      type3,
      41.0,
      1505.0,
      418.0);
    easing(
      &outParams1,
      (float *)&outParams2,
      frame,
      9.0,
      0.69999999,
      0.2,
      type1a,
      11.0,
      0.69999999,
      0.2,
      type2e,
      13.0,
      0.5,
      0.2,
      type3a,
      41.0,
      0.0,
      0.0);
    drawConv(pImage, x, y, pImageRects + 9, outParams1, *(float *)&outParams2, 0.0, aniFrame2m);
    easing(
      &x,
      &y,
      frame,
      9.0,
      715.0,
      508.0,
      type1b,
      11.0,
      565.0,
      483.0,
      type2f,
      13.0,
      490.0,
      471.0,
      type3b,
      39.0,
      367.0,
      450.0);
    easing(
      &outParams1,
      (float *)&outParams2,
      frame,
      9.0,
      0.69999999,
      0.2,
      type1c,
      11.0,
      0.69999999,
      0.2,
      type2g,
      13.0,
      0.5,
      0.2,
      type3c,
      41.0,
      0.0,
      0.0);
    drawConv(pImage, x, y, pImageRects + 11, outParams1, *(float *)&outParams2, 0.0, aniFrame2n);
    easing(
      &x,
      &y,
      frame,
      9.0,
      690.0,
      593.0,
      type1d,
      11.0,
      615.0,
      609.0,
      type2h,
      17.0,
      p31,
      625.0,
      type3d,
      41.0,
      430.0,
      649.0);
    easing(
      &outParams1,
      (float *)&outParams2,
      frame,
      9.0,
      2.5,
      0.80000001,
      type1e,
      11.0,
      2.0,
      0.60000002,
      type2i,
      17.0,
      1.2,
      0.40000001,
      type3e,
      41.0,
      0.0,
      0.0);
    drawConv(pImage, x, y, pImageRects + 10, outParams1, *(float *)&outParams2, 0.0, aniFrame2o);
    easing(&x, &y, frame, 9.0, 1157.0, 586.0, type1f, 13.0, 1307.0, 618.0, type2j, 41.0, 1532.0, 666.0);
    easing(
      &outParams1,
      (float *)&outParams2,
      frame,
      9.0,
      1.2,
      0.40000001,
      type1g,
      13.0,
      1.2,
      0.40000001,
      type2k,
      41.0,
      0.0,
      0.0);
    drawConv(pImage, x, y, pImageRects + 12, outParams1, *(float *)&outParams2, 0.0, aniFrame2p);
    easing(&x, &y, frame, 9.0, 1257.0, 602.0, type1h, 17.0, 1377.0, 629.0, type2l, 37.0, 1552.0, 672.0);
    easing(&outParams1, (float *)&outParams2, frame, 9.0, 0.5, 0.2, type1i, 17.0, 0.5, 0.2, type2m, 37.0, 0.0, 0.0);
    drawConv(pImage, x, y, pImageRects + 13, outParams1, *(float *)&outParams2, 0.0, aniFrame2q);
    easing(
      &x,
      &y,
      frame,
      9.0,
      815.0,
      600.0,
      type1j,
      13.0,
      765.0,
      616.0,
      type2n,
      17.0,
      690.0,
      640.0,
      type3f,
      37.0,
      565.0,
      680.0);
    v23 = *(float *)&FLOAT_1_5;
    easing(
      &outParams1,
      (float *)&outParams2,
      frame,
      9.0,
      1.5,
      0.5,
      type1k,
      13.0,
      1.2,
      0.40000001,
      type2o,
      17.0,
      1.0,
      0.30000001,
      type3g,
      37.0,
      0.0,
      0.0);
    drawConv(pImage, x, y, pImageRects + 11, outParams1, *(float *)&outParams2, 0.0, aniFrame2r);
    easing(&x, &y, frame, 9.0, 1015.0, 526.0, type1l, 17.0, 1415.0, 537.0, type2p, 39.0, 1665.0, 542.0);
    easing(
      &outParams1,
      (float *)&outParams2,
      frame,
      9.0,
      2.5,
      0.80000001,
      type1m,
      17.0,
      2.5,
      0.80000001,
      type2q,
      38.0,
      0.0,
      0.0);
    drawConv(pImage, x, y, pImageRects + 10, outParams1, *(float *)&outParams2, 0.0, aniFrame2s);
    easing(
      &x,
      &y,
      frame,
      9.0,
      822.0,
      545.0,
      type1n,
      13.0,
      622.0,
      553.0,
      type2r,
      17.0,
      522.0,
      559.0,
      type3h,
      41.0,
      272.0,
      570.0);
    easing(
      &outParams1,
      (float *)&outParams2,
      frame,
      9.0,
      1.2,
      0.40000001,
      type1o,
      17.0,
      1.2,
      0.40000001,
      type2s,
      41.0,
      0.0,
      0.0);
    drawConv(pImage, x, y, pImageRects + 9, outParams1, *(float *)&outParams2, 0.0, aniFrame2t);
    if ( frame <= 23.0 )
    {
      easing(&x, &y, frame, 9.0, 568.0, 369.0, type1, 13.0, 500.0, 338.0, type2c, 23.0, 376.0, 279.0);
      v24 = *(float *)&FLOAT_4_0;
      easing(&outParams1, (float *)&outParams2, frame, 9.0, 4.0, 1.4, type1p, 23.0, 0.0, 0.0);
      drawConv(pImage, x, y, pImageRects + 4, outParams1, *(float *)&outParams2, 0.0, aniFrame2u);
      easing(&x, &y, frame, 9.0, 1340.0, 414.0, type1q, 13.0, 1540.0, 352.0, type2t, 19.0, 1800.0, 274.0);
      easing(&outParams1, (float *)&outParams2, frame, 9.0, 3.3499999, 1.66, type1r, 19.0, 0.0, 0.0);
      v25 = BSUtil::toOGLAngle(-14.0);
      drawConv(pImage, x, y, pImageRects + 5, outParams1, *(float *)&outParams2, v25, aniFrame2v);
      easing(&x, &y, frame, 9.0, 1096.0, 673.0, type1s, 21.0, 1256.0, 841.0);
      easing(&outParams1, (float *)&outParams2, frame, 9.0, 1.91, 0.91000003, type1t, 21.0, 0.0, 0.0);
      v26 = BSUtil::toOGLAngle(28.0);
      drawConv(pImage, x, y, pImageRects + 6, outParams1, *(float *)&outParams2, v26, aniFrame2w);
      easing(&x, &y, frame, 9.0, 736.0, 661.0, type1u, 19.0, 608.0, 727.0, type2u, 21.0, 460.0, 796.0);
      easing(
        &outParams1,
        (float *)&outParams2,
        frame,
        9.0,
        2.8699999,
        1.95,
        type1v,
        15.0,
        2.8699999,
        1.95,
        type2v,
        21.0,
        0.0,
        0.0);
      v27 = BSUtil::toOGLAngle(-23.0);
      drawConv(pImage, x, y, pImageRects + 5, outParams1, *(float *)&outParams2, v27, aniFrame2x);
      easing(&x, &y, frame, 9.0, 1348.0, 611.0, type1w, 21.0, 1674.0, 699.0);
      easing(&outParams1, (float *)&outParams2, frame, 9.0, 3.97, 1.41, type1x, 21.0, 0.0, 0.0);
      v28 = BSUtil::toOGLAngle(-8.0);
      drawConv(pImage, x, y, pImageRects + 4, outParams1, *(float *)&outParams2, v28, aniFrame2y);
      easing(&x, &y, frame, 9.0, 528.0, 603.0, type1y, 13.0, 357.0, 630.0, type2w, 21.0, 144.0, 663.0);
      easing(&outParams1, (float *)&outParams2, frame, 9.0, 2.24, 1.59, type1z, 21.0, 0.0, 0.0);
      v29 = BSUtil::toOGLAngle(150.0);
      drawConv(pImage, x, y, pImageRects + 6, outParams1, *(float *)&outParams2, v29, aniFrame2z);
      easing(&x, &y, frame, 9.0, 1106.0, 336.0, type1ba, 21.0, 1266.0, 156.0);
      easing(&outParams1, (float *)&outParams2, frame, 9.0, 3.0, 0.73000002, type1bb, 21.0, 0.0, 0.0);
      type1bc = BSUtil::toOGLAngle(112.0);
      drawConv(pImage, x, y, pImageRects + 4, outParams1, *(float *)&outParams2, type1bc, aniFrame2ba);
      p31 = FLOAT_540_0;
      goto LABEL_39;
    }
    p31 = FLOAT_540_0;
  }
  v24 = *(float *)&FLOAT_4_0;
LABEL_39:
  if ( frame <= 14.0 )
  {
    easing(
      &outParams1,
      (float *)&outParams2,
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
      v23,
      v23,
      type3,
      14.0,
      2.0,
      2.0);
    easing(outParam, frame, 0.0, 0.0, p11f, v24, 0.0, aniFrame2bb, 5.0, 1.0, type2x, 6.0, 1.0, p32d, 14.0, 0.0);
    Graphics::setRenderMode(*(Graphics **)(v6 + 8), 1, (int)(float)(outParam[0] * 255.0));
    drawConv(pImage, 960.0, p31, pImageRects, outParams1, *(float *)&outParams2, 0.0, aniFrame2bc);
  }
}

