#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/randommt.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filters.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actor.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filterparams.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charadataunify.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphqueue.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_sse.h"
#include "dev/silverware/git/sdk/agreferencecountinl.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaattackdataformat.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdata/effectappdata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_font.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/resourcemanager.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_types.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/savedata.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charadamagesettingformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessdefs.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/time.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/libcommon.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatapacked.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_pathdatapacker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_linebuffer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_highlight.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleonline.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_profiler.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_states.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector2unaligned.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/tga_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_statebag.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/mediamanager.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/combomissiondataformat.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/sounddata.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/soundgroupdataformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_simplemeshcache.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/audiopresenter.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_functions.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/fontprovider/render_fontproviderwinapi.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_bank.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_prefightfaceoff.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmodel.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/mutex"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_bundle.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/algorithm"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/chrono"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic0.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglcurve.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/limits"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_new.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloatmp.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_typeinfo.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/shaderfxhelper.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapemeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/jpeg_imagefile.h"
#include "program files (x86)/windows kits/8.1/include/shared/guiddef.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/effect/actoreffect.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actorobject.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treetext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefileutil.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/silverware/git/sdk/system/agsysteminfo.h"
#include "dev/silverware/git/sdk/agreferenceinl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/hidpad/hidpadsystem.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_docview.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/soundutil.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actoroption.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_range.h"
#include "program files (x86)/windows kits/8.1/include/shared/stralign.h"
#include "dev/kof/master/development/source/baseproject/jni/game/network/chkdiscononlinesv.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/cameracheck.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglsprite.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_hash.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/freecameracheck.h"
#include "dev/silverware/git/sdk/agmemorystream.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/mediasound.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglrender.h"
#include "dev/silverware/git/sdk/agmemorypool.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "dev/silverware/git/sdk/aghash.h"
#include "dev/silverware/git/sdk/input/agcontrollerbuttoncomponent.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix4x4.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/texstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixpool.h"
#include "dev/silverware/git/sdk/agstringutils.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglfog.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglbone.h"
#include "dev/silverware/git/sdk/agstream.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/boolinvec.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/functional"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/particledata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shader.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xfacet"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstring"
#include "dev/kof/master/development/source/baseproject/jni/game/data/savedatadefine.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_sgmlparser.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_context.h"
#include "dev/silverware/git/sdk/3rdparty/steam/isteamhtmlsurface.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory0"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlecall/battlecall.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_constants.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/silverware/git/sdk/agpointerinl.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_debug.h"
#include "dev/kof/master/development/source/baseproject/jni/game/cpuseq/battlecpu.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessgen.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exwaitcondition.h"
#include "dev/silverware/git/sdk/agconditionvariable.inl"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/exception"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/bodypush.h"
#include "dev/kof/master/development/source/baseproject/jni/game/cpuseq/sequencecontroller.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treeshape.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessellator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/future_asset.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/unordered_map"
#include "dev/kof/master/development/source/baseproject/jni/game/network/netmanager.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector3unaligned.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/asyncjob.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_exception.h"
#include "dev/kof/master/development/source/baseproject/jni/game/network/leaderboard.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xhash"
#include "dev/silverware/git/sdk/platforms/pc/system/agpcsysteminfo.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/list"
#include "dev/kof/master/development/source/baseproject/jni/game/system/battlesysteminfo.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/atomic_int.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitivebundle.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/atomic"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treecachenode.h"
#include "program files (x86)/windows kits/8.1/include/um/winnt.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treenode.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_loader.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmirror.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cacheeffect.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_system.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphfitter.h"
#include "program files (x86)/windows kits/8.1/include/shared/basetsd.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/combomissionjudge.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefile.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/matchingsystem.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_player.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_resource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/vec_aos.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/boolinvec.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/system_error"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaprojectdataformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_stroker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/dds_imagefile.h"
#include "dev/silverware/git/sdk/util/agservicecommand.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/stdexcept"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/tkndata.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charabasestatusformat.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/inputkeyrecord.h"
#include "dev/silverware/git/sdk/agmovieplayer.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/vectormath_aos.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textmeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_hashkey.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphparam.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/cameramotionpreviewsettings.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/stageprojectdata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcache.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steam_api_internal.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcacheconfig.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglshader.h"
#include "dev/silverware/git/sdk/util/agdebugchannels.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/tuple"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hairliner.h"
#include "dev/silverware/git/sdk/util/agperformancecounter.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/debug/logging.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_filterdesc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_styledtext.h"
#include "dev/silverware/git/sdk/agclock.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix3x4.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestagedatas.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_core.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_queue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/tkndatas.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/input/imesystem.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_fontmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitive.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/tween.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocaddr.h"
#include "dev/silverware/git/sdk/agmutex.inl"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_radixtree.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_manager.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdatalistmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_twips.h"
#include "program files (x86)/windows kits/8.1/include/um/winuser.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/asynccharafileload.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectcommon.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_containers.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_wwhelper.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steam_api.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/string"
#include "dev/silverware/git/sdk/agreferencedobjectinl.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/globalheapmemory.h"
#include "dev/silverware/git/sdk/agcondition.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/fixmemory.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/weapon/actorweapon.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/mat_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/array"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/hitrectcollection.h"
#include "dev/kof/master/development/source/baseproject/jni/game/system/battlecontroller.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogleffect.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_missiondataloading.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actionsystem.h"
#include "dev/kof/master/development/source/ps4project/baseproject/pcutil/pccontrolsmanager.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaactiondataformat.h"
#include "dev/silverware/git/sdk/filesystem/agfile.h"
#include "dev/silverware/git/sdk/memory/agallocators.h"
#include "dev/silverware/git/sdk/input/aginputmanager.h"
#include "dev/silverware/git/sdk/agsingleton.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charafilebase.h"
#include "dev/silverware/git/sdk/filesystem/agpath.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector4unaligned.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlehud.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogllight.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battleeventhandler.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_vertex.h"
#include "dev/silverware/git/sdk/filesystem/agmount.h"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/damagesetting.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/fontprovider/render_fontproviderhud.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_wstring.h"
#include "dev/silverware/git/sdk/filesystem/agdirectory.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/vecidx_aos.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/commanddataformat.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/floatinvec.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/titlestoragesystem.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/easingnumber.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/errorchecker.h"
#include "dev/kof/master/development/source/baseproject/jni/game/appmain.h"
#include "dev/silverware/git/sdk/3rdparty/steam/matchmakingtypes.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/ios"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleonlinewatching.h"
#include "dev/silverware/git/sdk/agdisplay.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/quat_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocnum"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/silverware/git/sdk/agvector4.h"
#include "dev/silverware/git/sdk/agvector3.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threadcheck.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/floatinvec.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xiosbase"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thread"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textlayout.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_image.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocale"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exthread.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/memory"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleloading.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdata/effectdata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "program files (x86)/windows kits/8.1/include/um/winbase.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocinfo"
#include "dev/silverware/git/sdk/agthread.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/bilinkable.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/variableheapmemorybase.h"
#include "dev/silverware/git/sdk/agvector2.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/silverware/git/sdk/agreferencedobject.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xxatomic"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/chartdata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/math.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_vec64.h"
#include "dev/silverware/git/sdk/agmath.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "dev/silverware/git/sdk/agreferencecount.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/heapmemory.h"
#include "dev/silverware/git/sdk/input/agcontroller.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/silverware/git/sdk/system/aguser.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/rapper/graphicsopt.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_movie.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/mutex.h"
#include "dev/silverware/git/sdk/agstring.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/trainingsetting.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/combomissionattackeventlistener.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charamaterialsettingformat.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_operation.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_math.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/type_traits"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/bitset"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vector"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_ps4modelroom.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/fix32.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actorcharabase.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/vec_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstddef"
#include "dev/kof/master/development/source/baseproject/jni/game/define/charabonedefine.h"
#include "dev/silverware/git/sdk/util/agdelegate.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/colorholder.h"
#include "dev/silverware/git/sdk/agrectangle.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_screentoworld.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/physicalheapmemory.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thr/xthread"
#include "dev/silverware/git/sdk/agcondition.inl"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/map"
#include "dev/kof/master/development/source/baseproject/jni/game/player/battleplayerinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_strokeraa.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_scale9grid.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraystaticbuff.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtree"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "dev/silverware/git/sdk/input/agcontrollercomponent.h"
#include "dev/silverware/git/sdk/agpointer.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestageresourcecontainer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cxform.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/mat_aos.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exlockable.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestageshader.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actionblackout.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "dev/silverware/git/sdk/agmutex.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xutility"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/effect.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/utility"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/silverware/git/sdk/system/agusermanager.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/iosfwd"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/cpusequencedataformat.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/shot/actorshot.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actorchara.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_event.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/commandcheck.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/translate_table.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/png_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_keycodes.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/deque"
#include "dev/kof/master/development/source/baseproject/jni/game/util/restrictringbuffer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/shared_lua_context.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshkey.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixstate.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_gradients.h"
#include "dev/silverware/git/sdk/util/agservice.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steamclientpublic.h"
#include "dev/silverware/git/sdk/input/agsdlmappingparser.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/materialshowcontrol.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_rasterizer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_viewport.h"
#include "dev/silverware/git/sdk/agthreadpool.h"
#include "dev/silverware/git/sdk/agsemaphore.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/matrix4unaligned.h"
#include "dev/silverware/git/sdk/agsemaphore.inl"
#include "dev/silverware/git/sdk/agconditionvariable.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/syncmenuimage.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/jobmanager.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/quat_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/condition_variable"
#include "dev/kof/master/development/source/baseproject/jni/game/data/moviedatadefine.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_drawableimage.h"
#include "dev/kof/master/development/source/ps4project/baseproject/pcutil/pcdummy.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charahitrectformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hal.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_buffer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/refcountable.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "dev/kof/master/development/source/baseproject/jni/game/network/playtogether.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_characterdef.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "dev/silverware/git/sdk/agscopedlock.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/operationmapper.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/savedata.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/exutil.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/auxscript.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/shared_lua_context.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/lapi.c"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/asyncjob.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/lgc.c"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/lstate.c"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/ldo.c"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/ltable.c"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/lauxlib.c"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/lzio.c"

class extension::TranslateTable::LuaLib
{
public:
	static long Lfn_MergeTable(lua_State *);
	static long Lfn_Translate_LoadStart(lua_State *);
	static long Lfn_Translate_IsReady(lua_State *);
	static long Lfn_Translate_GetText(lua_State *);
	static long Lfn_OpenLib(lua_State *);
	static long Lfn_TableChunkHelper_TranslateAt2(lua_State *);
	static long Lfn_TableChunkHelper_TranslateAt(lua_State *);
};
std::piecewise_construct_t std::piecewise_construct; // 0x1408AFCCC
long extension::TranslateTable::LuaLib::Lfn_MergeTable(lua_State * L); // 0x1402C24D0
long extension::TranslateTable::LuaLib::Lfn_Translate_LoadStart(lua_State * L); // 0x1402C2A00
long extension::TranslateTable::LuaLib::Lfn_Translate_IsReady(lua_State * L); // 0x1402C2A50
long extension::TranslateTable::LuaLib::Lfn_Translate_GetText(lua_State * L); // 0x1402C2AC0
long extension::TranslateTable::LuaLib::Lfn_OpenLib(lua_State * L); // 0x1402C2C30
long extension::TranslateTable::LuaLib::Lfn_TableChunkHelper_TranslateAt2(lua_State * L); // 0x1402C2D20
long extension::TranslateTable::LuaLib::Lfn_TableChunkHelper_TranslateAt(lua_State * L); // 0x1402C2E50
extension::TranslateTable::TranslateTable(); // 0x1402C2FA0
extension::TranslateTable::~TranslateTable(); // 0x1402C3040
extension::TranslateTable & extension::TranslateTable::Instance(); // 0x1402C30E0
const char * extension::TranslateTable::getText(const char * text, LANGUAGE_MODE lang); // 0x1402C3150
const char * extension::TranslateTable::searchText(const char * key, LANGUAGE_MODE lang); // 0x1402C31E0
void extension::TranslateTable::UnescapeSpecialHTML(char * outText, const char * inText); // 0x1402C3220
void extension::TranslateTable::setLuaContext(const extension::SharedLuaContext & context, bool isOpenLib); // 0x1402C3380
void extension::TranslateTable::loadStart(const char * tableFilePath); // 0x1402C34E0
bool extension::TranslateTable::installLoadedData(); // 0x1402C3650
void extension::TranslateTable::install(const extension::AsyncFileImage & chunk); // 0x1402C37B0
const char * extension::TranslateTable::executeTranslate(const char * key, const char * langCodeName); // 0x1402C3C00
bool extension::TranslateTable::LuaTranslateString(lua_State * L, long index, const char * langCodeName); // 0x1402C3DA0//decompilation failure at 1408AFCCC!
void __fastcall extension::TranslateTable::TranslateTable(extension::TranslateTable *this)
{
  std::_Container_proxy *Myproxy; // rax

  *(_OWORD *)&the_instance_8.m_luaContext.m_Context = 0i64;
  the_instance_8.m_luaContext.m_pAllocatorMemory = 0i64;
  the_instance_8.m_loadingChunks._Mypair._Myval2._Myproxy = 0i64;
  the_instance_8.m_loadingChunks._Mypair._Myval2._Map = 0i64;
  the_instance_8.m_loadingChunks._Mypair._Myval2._Mapsize = 0i64;
  the_instance_8.m_loadingChunks._Mypair._Myval2._Myoff = 0i64;
  the_instance_8.m_loadingChunks._Mypair._Myval2._Mysize = 0i64;
  Myproxy = (std::_Container_proxy *)operator new(0x10ui64);
  the_instance_8.m_loadingChunks._Mypair._Myval2._Myproxy = Myproxy;
  if ( Myproxy )
  {
    *Myproxy = 0i64;
    Myproxy = the_instance_8.m_loadingChunks._Mypair._Myval2._Myproxy;
  }
  Myproxy->_Mycont = &the_instance_8.m_loadingChunks._Mypair._Myval2;
}

void __fastcall extension::TranslateTable::~TranslateTable(extension::TranslateTable *this, int a2)
{
  lua_State *m_Context; // rcx

  m_Context = the_instance_8.m_luaContext.m_Context;
  if ( the_instance_8.m_luaContext.m_Context )
  {
    the_instance_8.m_luaContext.m_Context->top->tt_ = 0;
    ++m_Context->top;
    lua_rawsetp(m_Context, a2, &the_instance_8);
  }
  std::deque<extension::BasicFutureObject<extension::AsyncFileImage,void>>::_Tidy(&the_instance_8.m_loadingChunks);
  operator delete(the_instance_8.m_loadingChunks._Mypair._Myval2._Myproxy);
  the_instance_8.m_loadingChunks._Mypair._Myval2._Myproxy = 0i64;
  if ( the_instance_8.m_luaContext.m_Context )
    extension::SharedLuaContext::Release(&the_instance_8.m_luaContext);
  if ( the_instance_8.m_luaContext.m_pMemoryAllocator )
  {
    ((void (__fastcall *)(extension::MemoryAllocator *, __int64))the_instance_8.m_luaContext.m_pMemoryAllocator->~MemoryAllocator)(
      the_instance_8.m_luaContext.m_pMemoryAllocator,
      1i64);
    the_instance_8.m_luaContext.m_pMemoryAllocator = 0i64;
  }
  the_instance_8.m_luaContext.m_pAllocatorMemory = 0i64;
}

extension::TranslateTable *__fastcall extension::TranslateTable::Instance()
{
  extension::TranslateTable *v0; // rcx

  if ( dword_140AD01AC > *(_DWORD *)(*(_QWORD *)NtCurrentTeb()->Reserved1[11] + 40i64) )
  {
    Init_thread_header(&dword_140AD01AC);
    if ( dword_140AD01AC == -1 )
    {
      extension::TranslateTable::TranslateTable(v0);
      atexit((void (__fastcall *)())extension::TranslateTable::Instance_::_2_::_dynamic_atexit_destructor_for__the_instance__);
      Init_thread_footer(&dword_140AD01AC);
    }
  }
  return &the_instance_8;
}

__int64 __fastcall extension::TranslateTable::LuaLib::Lfn_MergeTable(lua_State *L)
{
  lua_TValue *i; // rcx
  CallInfo *ci; // rax
  const extension::gfxi_detail::TranslatorImpl *v4; // rdx
  lua_TValue *v5; // rax
  global_State *l_G; // rcx
  __int64 v7; // rax
  Table *v8; // rax
  lua_TValue *top; // rcx
  lua_TValue *v10; // r8
  CallInfo *v11; // rax
  Table **v12; // rdx
  __int64 v13; // rdi
  int v14; // eax
  unsigned __int64 v15; // r8
  CallInfo *v16; // rdx
  const extension::gfxi_detail::TranslatorImpl *p_l_registry; // rcx
  int v18; // ecx
  lua_TValue *func; // rax
  lua_TValue *v20; // rdx
  lua_TValue *j; // r8
  lua_TValue *v22; // rcx
  CallInfo *v23; // rdx
  lua_TValue *v24; // rax
  lua_TValue *v25; // rdx
  lua_TValue *v26; // rax
  int v27; // ecx
  lua_TValue *v28; // rcx
  Table **v29; // rcx
  lua_TValue *v30; // r8
  CallInfo *v31; // rax
  Node *v32; // rax
  lua_TValue *v33; // rdx
  unsigned __int16 v34; // ax
  lua_TValue *v35; // rdx
  __int64 v36; // rdx
  __int64 v37; // r8
  lua_TValue *v38; // r9
  CallInfo *v39; // rdx
  lua_TValue *v40; // rax
  lua_TValue *v41; // rdx
  lua_TValue *v42; // rax
  int v43; // ecx
  lua_TValue *v44; // rcx
  lua_TValue *v45; // rdx
  lua_TValue *k; // r8
  lua_TValue *v47; // rcx
  Table **v48; // rsi
  lua_TValue *v49; // rbp
  CallInfo *v50; // rax
  Table *v51; // r15
  extension::gfxi_detail::TranslatorImpl *v52; // rax
  lua_TValue *v53; // rax
  Table *v54; // rdx
  global_State *v55; // rcx
  lua_TValue *v56; // rdx
  lua_TValue *v57; // rcx

  for ( i = L->ci->func + 3; L->top < i; ++L->top )
    L->top->tt_ = 0;
  ci = L->ci;
  L->top = i;
  v4 = (const extension::gfxi_detail::TranslatorImpl *)&ci->func[2];
  if ( v4 >= (const extension::gfxi_detail::TranslatorImpl *)i
    || v4 == (const extension::gfxi_detail::TranslatorImpl *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168]
    || (ci->func[2].tt_ & 0xF) != 5 )
  {
    v5 = i - 1;
    l_G = L->l_G;
    L->top = v5;
    if ( l_G->GCdebt > 0 )
    {
      if ( l_G->gcrunning )
      {
        luaC_forcestep(L);
      }
      else
      {
        v7 = l_G->GCdebt + 2400;
        l_G->GCdebt = -2400i64;
        l_G->totalbytes += v7;
      }
    }
    v8 = luaH_new(L);
    top = L->top;
    top->value_.gc = (GCObject *)v8;
    top->tt_ = 69;
    ++L->top;
    luaH_resize(L, v8, 0, 16);
  }
  L->top->tt_ = 0;
  ++L->top;
  while ( 1 )
  {
    v10 = L->top;
    v11 = L->ci;
    v12 = (Table **)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168];
    if ( &v11->func[1] < v10 )
      v12 = (Table **)&v11->func[1];
    if ( !(unsigned int)luaH_next(L, *v12, v10 - 1) )
      break;
    ++L->top;
    v13 = (int)lua_absindex(L, -2);
    v14 = lua_absindex(L, -1);
    v16 = L->ci;
    if ( v14 <= 0 )
    {
      if ( v14 <= -1001000 )
      {
        if ( v14 == -1001000 )
        {
          p_l_registry = (const extension::gfxi_detail::TranslatorImpl *)&L->l_G->l_registry;
        }
        else
        {
          v18 = -1001000 - v14;
          func = v16->func;
          if ( v16->func->tt_ == 22 || v18 > func->value_.gc->ts.tsv.extra )
            goto LABEL_49;
          p_l_registry = (const extension::gfxi_detail::TranslatorImpl *)&(&func->value_.gc->th.top)[2 * v18];
        }
      }
      else
      {
        p_l_registry = (const extension::gfxi_detail::TranslatorImpl *)(v15 + 16i64 * v14);
      }
    }
    else
    {
      p_l_registry = (const extension::gfxi_detail::TranslatorImpl *)&v16->func[v14];
      if ( (unsigned __int64)p_l_registry >= v15 )
        goto LABEL_49;
    }
    if ( p_l_registry != (const extension::gfxi_detail::TranslatorImpl *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168]
      && (p_l_registry->RefCount & 0xF) == 5 )
    {
      *(_QWORD *)v15 = extension::TranslateTable::LuaLib::Lfn_MergeTable;
      *(_DWORD *)(v15 + 8) = 22;
      v20 = ++L->top;
      for ( j = v20 - 2; v20 > j; --v20 )
      {
        v20->value_.gc = v20[-1].value_.gc;
        v20->tt_ = v20[-1].tt_;
      }
      v22 = L->top;
      j->value_.gc = v22->value_.gc;
      j->tt_ = v22->tt_;
      v23 = L->ci;
      if ( (int)v13 <= 0 )
      {
        if ( (int)v13 <= -1001000 )
        {
          if ( (_DWORD)v13 == -1001000 )
          {
            v25 = &L->l_G->l_registry;
          }
          else
          {
            v26 = v23->func;
            v27 = -1001000 - v13;
            if ( v23->func->tt_ == 22 || v27 > v26->value_.gc->ts.tsv.extra )
              v25 = (lua_TValue *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168];
            else
              v25 = (lua_TValue *)&(&v26->value_.gc->th.top)[2 * v27];
          }
        }
        else
        {
          v25 = &L->top[v13];
        }
      }
      else
      {
        v24 = &v23->func[v13];
        v25 = (lua_TValue *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168];
        if ( v24 < L->top )
          v25 = v24;
      }
      v28 = L->top;
      v28->value_.gc = v25->value_.gc;
      v28->tt_ = v25->tt_;
      v29 = (Table **)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168];
      v30 = ++L->top;
      v31 = L->ci;
      if ( &v31->func[2] < v30 )
        v29 = (Table **)&v31->func[2];
      v32 = luaH_get(*v29, v30 - 1);
      v33 = L->top;
      v33[-1].value_.gc = v32->i_val.value_.gc;
      v33[-1].tt_ = v32->i_val.tt_;
      v34 = ++L->nCcalls;
      v35 = L->top - 3;
      if ( v34 >= 0xC8u )
      {
        if ( v34 == 200 )
          luaG_runerror(L, "C stack overflow");
        if ( v34 >= 0xE1u )
          luaD_throw(L, 6);
      }
      ++L->nny;
      if ( !(unsigned int)luaD_precall(L, v35, 1) )
        luaV_execute(L, v36, v37, v38);
      --L->nny;
      --L->nCcalls;
    }
LABEL_49:
    v39 = L->ci;
    if ( (int)v13 <= 0 )
    {
      if ( (int)v13 <= -1001000 )
      {
        if ( (_DWORD)v13 == -1001000 )
        {
          v41 = &L->l_G->l_registry;
        }
        else
        {
          v42 = v39->func;
          v43 = -1001000 - v13;
          if ( v39->func->tt_ == 22 || v43 > v42->value_.gc->ts.tsv.extra )
            v41 = (lua_TValue *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168];
          else
            v41 = (lua_TValue *)&(&v42->value_.gc->th.top)[2 * v43];
        }
      }
      else
      {
        v41 = &L->top[v13];
      }
    }
    else
    {
      v40 = &v39->func[v13];
      v41 = (lua_TValue *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168];
      if ( v40 < L->top )
        v41 = v40;
    }
    v44 = L->top;
    v44->value_.gc = v41->value_.gc;
    v44->tt_ = v41->tt_;
    v45 = ++L->top;
    for ( k = v45 - 2; v45 > k; --v45 )
    {
      v45->value_.gc = v45[-1].value_.gc;
      v45->tt_ = v45[-1].tt_;
    }
    v47 = L->top;
    v48 = (Table **)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168];
    k->value_.gc = v47->value_.gc;
    k->tt_ = v47->tt_;
    v49 = L->top;
    v50 = L->ci;
    if ( &v50->func[2] < v49 )
      v48 = (Table **)&v50->func[2];
    v51 = *v48;
    v52 = (extension::gfxi_detail::TranslatorImpl *)luaH_get(*v48, v49 - 2);
    if ( v52 == (extension::gfxi_detail::TranslatorImpl *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168] )
      v52 = (extension::gfxi_detail::TranslatorImpl *)luaH_newkey(L, v51, v49 - 2);
    v52->__vftable = (extension::gfxi_detail::TranslatorImpl_vtbl *)v49[-1].value_.gc;
    v52->RefCount = v49[-1].tt_;
    (*v48)->flags = 0;
    v53 = L->top;
    if ( (v53[-1].tt_ & 0x40) != 0 && (v53[-1].value_.gc->gch.marked & 3) != 0 )
    {
      v54 = *v48;
      if ( ((*v48)->marked & 4) != 0 )
      {
        v55 = L->l_G;
        v54->marked &= ~4u;
        v54->gclist = v55->grayagain;
        v55->grayagain = (GCObject *)v54;
      }
    }
    L->top -= 2;
    v56 = L->top;
    if ( (int)v13 < 0 )
    {
      L->top = &v56[(int)v13 + 1];
    }
    else
    {
      v57 = &L->ci->func[v13 + 1];
      if ( v56 < v57 )
      {
        do
        {
          L->top->tt_ = 0;
          ++L->top;
        }
        while ( L->top < v57 );
      }
      L->top = v57;
    }
  }
  --L->top;
  return 1i64;
}

__int64 __fastcall extension::TranslateTable::LuaLib::Lfn_OpenLib(lua_State *L)
{
  global_State *l_G; // rcx
  __int64 v3; // rax
  Table *v4; // rax
  lua_TValue *top; // rdx
  luaL_Reg l; // [rsp+20h] [rbp-58h] BYREF
  const char *v8; // [rsp+30h] [rbp-48h]
  int (__fastcall *v9)(lua_State *); // [rsp+38h] [rbp-40h]
  const char *v10; // [rsp+40h] [rbp-38h]
  int (__fastcall *v11)(lua_State *); // [rsp+48h] [rbp-30h]
  __int64 v12; // [rsp+50h] [rbp-28h]
  __int64 v13; // [rsp+58h] [rbp-20h]

  l_G = L->l_G;
  l.name = "LoadStart";
  l.func = extension::TranslateTable::LuaLib::Lfn_Translate_LoadStart;
  v8 = "IsReady";
  v9 = extension::TranslateTable::LuaLib::Lfn_Translate_IsReady;
  v10 = "GetText";
  v11 = extension::TranslateTable::LuaLib::Lfn_Translate_GetText;
  v12 = 0i64;
  v13 = 0i64;
  if ( l_G->GCdebt > 0 )
  {
    if ( l_G->gcrunning )
    {
      luaC_forcestep(L);
    }
    else
    {
      v3 = l_G->GCdebt + 2400;
      l_G->GCdebt = -2400i64;
      l_G->totalbytes += v3;
    }
  }
  v4 = luaH_new(L);
  top = L->top;
  top->value_.gc = (GCObject *)v4;
  top->tt_ = 69;
  ++L->top;
  luaH_resize(L, v4, 0, 3);
  luaL_setfuncs(L, &l, 0);
  return 1i64;
}

__int64 __fastcall extension::TranslateTable::LuaLib::Lfn_TableChunkHelper_TranslateAt2(lua_State *L)
{
  lua_TValue *i; // rcx
  CallInfo *ci; // rdx
  const extension::gfxi_detail::TranslatorImpl *v4; // rax
  char *v5; // r8
  lua_TValue *func; // rdx
  Value v7; // rdx
  char *p_ci; // rdx
  CallInfo *v9; // rax
  lua_TValue *top; // rdx
  Value v11; // rcx
  char *p_stack_last; // rcx
  lua_TValue *v13; // rdx
  CallInfo *v14; // rax

  for ( i = L->ci->func + 2; L->top < i; ++L->top )
    L->top->tt_ = 0;
  ci = L->ci;
  L->top = i;
  v4 = (const extension::gfxi_detail::TranslatorImpl *)&ci->func[1];
  if ( v4 >= (const extension::gfxi_detail::TranslatorImpl *)i
    || (v5 = &extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168],
        v4 == (const extension::gfxi_detail::TranslatorImpl *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168])
    || (ci->func[1].tt_ & 0xF) != 5 )
  {
    tag_error(L, 1, 5);
  }
  func = ci->func;
  if ( func->tt_ == 22 || (v7.gc = (GCObject *)func->value_, !v7.gc->ts.tsv.extra) )
    p_ci = &extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168];
  else
    p_ci = (char *)&v7.gc->th.ci;
  i->value_.gc = *(GCObject **)p_ci;
  i->tt_ = *((_DWORD *)p_ci + 2);
  ++L->top;
  v9 = L->ci;
  top = L->top;
  if ( v9->func->tt_ == 22 || (v11.gc = v9->func->value_.gc, v11.gc->ts.tsv.extra < 2u) )
    p_stack_last = &extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168];
  else
    p_stack_last = (char *)&v11.gc->th.stack_last;
  top->value_.gc = *(GCObject **)p_stack_last;
  top->tt_ = *((_DWORD *)p_stack_last + 2);
  v13 = ++L->top;
  v14 = L->ci;
  if ( &v14->func[1] < v13 )
    v5 = (char *)&v14->func[1];
  v13->value_.gc = *(GCObject **)v5;
  v13->tt_ = *((_DWORD *)v5 + 2);
  ++L->top;
  luaV_settable(L, (const lua_TValue *)L->top - 3, L->top - 2, L->top - 1);
  L->top -= 2;
  return 0i64;
}

__int64 __fastcall extension::TranslateTable::LuaLib::Lfn_TableChunkHelper_TranslateAt(lua_State *L)
{
  lua_TValue *i; // rcx
  CallInfo *ci; // r8
  char *v4; // rdi
  lua_TValue *v5; // rdx
  global_State *l_G; // rcx
  __int64 v7; // rax
  Value v8; // rdx
  char *p_ci; // rdx
  lua_TValue *top; // rcx
  lua_TValue *v11; // rdx
  CallInfo *v12; // rax

  for ( i = L->ci->func + 2; L->top < i; ++L->top )
    L->top->tt_ = 0;
  ci = L->ci;
  v4 = &extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168];
  L->top = i;
  v5 = (lua_TValue *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168];
  if ( &ci->func[1] < i )
    v5 = ci->func + 1;
  if ( (v5->tt_ & 0xF) != 4 )
  {
    if ( !(unsigned int)luaV_tostring(L, v5) )
      goto LABEL_21;
    l_G = L->l_G;
    if ( l_G->GCdebt > 0 )
    {
      if ( l_G->gcrunning )
      {
        luaC_forcestep(L);
      }
      else
      {
        v7 = l_G->GCdebt + 2400;
        l_G->GCdebt = -2400i64;
        l_G->totalbytes += v7;
      }
    }
    ci = L->ci;
    v5 = (lua_TValue *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168];
    if ( &ci->func[1] < L->top )
      v5 = ci->func + 1;
  }
  if ( v5->value_.gc == (GCObject *)-24i64 )
LABEL_21:
    tag_error(L, 1, 4);
  if ( ci->func->tt_ == 22 || (v8.gc = ci->func->value_.gc, !v8.gc->ts.tsv.extra) )
    p_ci = &extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168];
  else
    p_ci = (char *)&v8.gc->th.ci;
  top = L->top;
  top->value_.gc = *(GCObject **)p_ci;
  top->tt_ = *((_DWORD *)p_ci + 2);
  v11 = ++L->top;
  v12 = L->ci;
  if ( &v12->func[1] < v11 )
    v4 = (char *)&v12->func[1];
  v11->value_.gc = *(GCObject **)v4;
  v11->tt_ = *((_DWORD *)v4 + 2);
  ++L->top;
  lua_pushcclosure(
    L,
    (int (__fastcall *)(lua_State *))extension::TranslateTable::LuaLib::Lfn_TableChunkHelper_TranslateAt2,
    2);
  return 1i64;
}

__int64 __fastcall extension::TranslateTable::LuaLib::Lfn_Translate_GetText(lua_State *L)
{
  extension::TranslateTable *v2; // rax
  CallInfo *ci; // rcx
  lua_TValue *v4; // rdx
  extension::TranslateTable *v5; // rdi
  global_State *l_G; // rcx
  __int64 v7; // rax
  CallInfo *v8; // rax
  __int64 p_env; // rdx
  int v10; // er8
  int v11; // ecx
  const std::pair<char const *,enum LANGUAGE_MODE> *v12; // rax
  const char *first; // rax
  const char *v14; // r9
  lua_TValue *i; // rcx

  v2 = extension::TranslateTable::Instance();
  ci = L->ci;
  v4 = (lua_TValue *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168];
  v5 = v2;
  if ( &ci->func[1] < L->top )
    v4 = ci->func + 1;
  if ( (v4->tt_ & 0xF) != 4 )
  {
    if ( !(unsigned int)luaV_tostring(L, v4) )
      goto LABEL_27;
    l_G = L->l_G;
    if ( l_G->GCdebt > 0 )
    {
      if ( l_G->gcrunning )
      {
        luaC_forcestep(L);
      }
      else
      {
        v7 = l_G->GCdebt + 2400;
        l_G->GCdebt = -2400i64;
        l_G->totalbytes += v7;
      }
    }
    v8 = L->ci;
    v4 = (lua_TValue *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168];
    if ( &v8->func[1] < L->top )
      v4 = v8->func + 1;
  }
  p_env = (__int64)&v4->value_.gc->u.uv.env;
  if ( !p_env )
LABEL_27:
    tag_error(L, 1, 4);
  if ( *(_BYTE *)p_env == 64 )
  {
    lua_pushstring(L, (const char *)(p_env + 1));
    v11 = 1;
    if ( *(_QWORD *)&AppMain::pApp )
      v11 = *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2197384i64);
    v12 = extension::auxscript::MyLangCodeNameTable;
    while ( v12->second != v11 )
    {
      if ( ++v12 == (const std::pair<char const *,enum LANGUAGE_MODE> *)extension::auxscript::my_testpolicy_name_table )
      {
        first = 0i64;
        goto LABEL_20;
      }
    }
    first = v12->first;
LABEL_20:
    v14 = "en_US";
    if ( first )
      v14 = first;
    if ( !extension::TranslateTable::LuaTranslateString(v5, L, v10, v14) )
    {
      for ( i = L->ci->func + 2; L->top < i; ++L->top )
        L->top->tt_ = 0;
      L->top = i;
    }
  }
  return 1i64;
}

__int64 __fastcall extension::TranslateTable::LuaLib::Lfn_Translate_IsReady(lua_State *L)
{
  int v2; // edi
  lua_TValue *i; // rcx
  extension::TranslateTable *v4; // rax
  bool v5; // al
  lua_TValue *top; // rcx
  bool v7; // zf
  __int64 result; // rax

  v2 = 0;
  for ( i = L->ci->func + 1; L->top < i; ++L->top )
    L->top->tt_ = 0;
  L->top = i;
  v4 = extension::TranslateTable::Instance();
  v5 = extension::TranslateTable::installLoadedData(v4);
  top = L->top;
  v7 = !v5;
  result = 1i64;
  LOBYTE(v2) = !v7;
  top->value_.b = v2;
  top->tt_ = 1;
  ++L->top;
  return result;
}

__int64 __fastcall extension::TranslateTable::LuaLib::Lfn_Translate_LoadStart(lua_State *L, int a2)
{
  global_State **v3; // rbx
  extension::TranslateTable *v4; // rax
  lua_TValue *top; // rax
  __int64 result; // rax

  v3 = extension::auxscript::AuxResolveWorkingPath(L, a2);
  v4 = extension::TranslateTable::Instance();
  extension::TranslateTable::loadStart(v4, (const char *)v3);
  top = L->top;
  top->value_.gc = (GCObject *)extension::TranslateTable::LuaLib::Lfn_Translate_IsReady;
  top->tt_ = 22;
  result = 1i64;
  ++L->top;
  return result;
}

__int64 __fastcall extension::TranslateTable::LuaTranslateString(
        extension::TranslateTable *this,
        lua_State *L,
        int index,
        const char *langCodeName)
{
  CallInfo *ci; // rax
  lua_TValue *top; // rdx
  unsigned __int8 v8; // di
  __int64 v9; // rdx
  __int64 v10; // rbp
  __int64 v11; // rsi
  lua_TValue *v12; // rax
  lua_TValue *v13; // r11
  Table **v14; // rax
  __int64 v15; // r10
  const extension::gfxi_detail::TranslatorImpl *v16; // rax
  Node *v17; // rax
  lua_TValue *v18; // rdx
  lua_TValue *v19; // rdx
  lua_TValue *i; // rdx
  lua_TValue key; // [rsp+20h] [rbp-28h] BYREF

  ci = L->ci;
  top = L->top;
  key.value_.gc = (GCObject *)this;
  v8 = 0;
  key.tt_ = 2;
  v9 = (char *)top - (char *)ci->func;
  v10 = v9 >> 4;
  v11 = (v9 - 16) >> 4;
  *L->top++ = luaH_get((Table *)L->l_G->l_registry.value_.gc, &key)->i_val;
  v12 = index2addr(L, (int)v10 - 1);
  *v13 = *v12;
  ++L->top;
  v14 = (Table **)index2addr(L, (int)v11 + 1);
  L->top[-1] = luaH_get(*v14, (const lua_TValue *)(v15 - 16))->i_val;
  v16 = (const extension::gfxi_detail::TranslatorImpl *)&L->top[-1];
  if ( v16 != (const extension::gfxi_detail::TranslatorImpl *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168]
    && (v16->RefCount & 0xF) == 5 )
  {
    lua_pushstring(L, langCodeName);
    v17 = luaH_get((Table *)L->top[-2].value_.gc, (const lua_TValue *)L->top - 1);
    v18 = L->top;
    v18[-1].value_.gc = v17->i_val.value_.gc;
    v18[-1].tt_ = v17->i_val.tt_;
    v19 = L->top - 1;
    if ( v19 != (lua_TValue *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168]
      && (v19->tt_ & 0xF) == 4 )
    {
      moveto(L, v19, v10 - 1);
      --L->top;
      v8 = 1;
    }
  }
  if ( (int)v11 < 0 )
  {
    L->top += (int)v11 + 1;
  }
  else
  {
    for ( i = &L->ci->func[(int)v11 + 1]; L->top < i; ++L->top )
      L->top->tt_ = 0;
    L->top = i;
  }
  return v8;
}

void __fastcall extension::TranslateTable::UnescapeSpecialHTML(char *outText, const char *inText)
{
  char v2; // r8
  char v3; // al
  __int64 v4; // rax

  if ( *inText )
  {
    while ( 1 )
    {
      v2 = *inText;
      if ( *inText != 38 )
        break;
      v3 = inText[1];
      if ( *(_WORD *)(inText + 1) == 29804 && inText[3] == 59 )
      {
        *(_DWORD *)outText = 997485606;
        v4 = 4i64;
        outText += 4;
      }
      else if ( v3 == 103 && inText[2] == 116 && inText[3] == 59 )
      {
        *(_DWORD *)outText = 997484326;
        v4 = 4i64;
        outText += 4;
      }
      else if ( v3 == 113 && inText[2] == 117 && inText[3] == 111 && inText[4] == 116 && inText[5] == 59 )
      {
        *(_DWORD *)outText = *(_DWORD *)aQuo;
        *((_WORD *)outText + 2) = 15220;
        outText += 6;
        v4 = 6i64;
      }
      else
      {
        if ( v3 != 97 || inText[2] != 109 || inText[3] != 112 || inText[4] != 59 )
          break;
        *(_DWORD *)outText = *(_DWORD *)aAmp_0;
        outText[4] = 59;
        outText += 5;
        v4 = 5i64;
      }
LABEL_31:
      inText += v4;
      if ( !*inText )
        goto LABEL_32;
    }
    switch ( v2 )
    {
      case '"':
        *(_DWORD *)outText = *(_DWORD *)aQuo;
        *((_WORD *)outText + 2) = 15220;
        outText += 6;
        break;
      case '&':
        *(_DWORD *)outText = *(_DWORD *)aAmp_0;
        outText[4] = 59;
        outText += 5;
        break;
      case '<':
        *(_DWORD *)outText = 997485606;
        outText += 4;
        break;
      case '>':
        *(_DWORD *)outText = 997484326;
        outText += 4;
        break;
      default:
        *outText++ = v2;
        break;
    }
    v4 = 1i64;
    goto LABEL_31;
  }
LABEL_32:
  *outText = 0;
}

void __fastcall std::deque<extension::BasicFutureObject<extension::AsyncFileImage,void>>::_Growmap(
        std::deque<extension::BasicFutureObject<extension::AsyncFileImage,void>> *this,
        unsigned __int64 _Count)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 Mapsize; // rcx
  unsigned __int64 v5; // rbx
  unsigned __int64 Myoff; // r12
  unsigned __int64 v7; // rcx
  _QWORD *v8; // r14
  unsigned __int64 v9; // rcx
  void *v10; // rax
  __int64 v11; // r15
  size_t v12; // rdi
  extension::BasicFutureObject<extension::AsyncFileImage,void> **Map; // rdx
  char *v14; // rcx
  size_t v15; // r8
  char *v16; // rcx
  extension::BasicFutureObject<extension::AsyncFileImage,void> **v17; // rcx
  unsigned __int64 v18; // rax
  extension::BasicFutureObject<extension::AsyncFileImage,void> **v19; // rax
  unsigned __int64 v20; // rcx

  v3 = 1i64;
  Mapsize = this->_Mypair._Myval2._Mapsize;
  if ( Mapsize )
    v3 = Mapsize;
  while ( v3 == Mapsize || v3 < 8 )
  {
    if ( 0xFFFFFFFFFFFFFFFi64 - v3 < v3 )
      std::_Xlength_error("deque<T> too long");
    v3 *= 2i64;
  }
  v5 = v3 - Mapsize;
  Myoff = this->_Mypair._Myval2._Myoff;
  v7 = v5 + Mapsize;
  if ( v7 )
  {
    if ( v7 > 0x1FFFFFFFFFFFFFFFi64 )
      std::_Xbad_alloc();
    v9 = 8 * v7;
    if ( v9 < 0x1000 )
    {
      v8 = operator new(v9);
    }
    else
    {
      if ( v9 + 39 <= v9 )
        std::_Xbad_alloc();
      v10 = operator new(v9 + 39);
      v8 = (_QWORD *)(((unsigned __int64)v10 + 39) & 0xFFFFFFFFFFFFFFE0ui64);
      *(v8 - 1) = v10;
    }
  }
  else
  {
    v8 = 0i64;
  }
  v11 = 8 * Myoff;
  v12 = 8 * this->_Mypair._Myval2._Mapsize - 8 * Myoff;
  memmove(&v8[Myoff], &this->_Mypair._Myval2._Map[Myoff], v12);
  Map = this->_Mypair._Myval2._Map;
  v14 = (char *)&v8[Myoff] + v12;
  if ( Myoff > v5 )
  {
    memmove(v14, Map, 8 * v5);
    memmove(v8, &this->_Mypair._Myval2._Map[v5], v11 - 8 * v5);
    v16 = (char *)v8 + v11 - 8 * v5;
    v15 = 8 * v5;
  }
  else
  {
    memmove(v14, Map, 8 * Myoff);
    memset((char *)&v8[Myoff] + v12 + v11, 0, 8 * (v5 - Myoff));
    v15 = 8 * Myoff;
    v16 = (char *)v8;
  }
  memset(v16, 0, v15);
  v17 = this->_Mypair._Myval2._Map;
  if ( v17 )
  {
    v18 = this->_Mypair._Myval2._Mapsize;
    if ( v18 > 0x1FFFFFFFFFFFFFFFi64 )
      invalid_parameter_noinfo_noreturn();
    if ( 8 * v18 >= 0x1000 )
    {
      if ( ((unsigned __int8)v17 & 0x1F) != 0 )
        invalid_parameter_noinfo_noreturn();
      v19 = (extension::BasicFutureObject<extension::AsyncFileImage,void> **)*(v17 - 1);
      if ( v19 >= v17 )
        invalid_parameter_noinfo_noreturn();
      v20 = (char *)v17 - (char *)v19;
      if ( v20 < 8 )
        invalid_parameter_noinfo_noreturn();
      if ( v20 > 0x27 )
        invalid_parameter_noinfo_noreturn();
      v17 = v19;
    }
    operator delete(v17);
  }
  this->_Mypair._Myval2._Map = (extension::BasicFutureObject<extension::AsyncFileImage,void> **)v8;
  this->_Mypair._Myval2._Mapsize += v5;
}

void __fastcall std::deque<extension::BasicFutureObject<extension::AsyncFileImage,void>>::_Tidy(
        std::deque<extension::BasicFutureObject<extension::AsyncFileImage,void>> *this)
{
  unsigned __int64 i; // rcx
  extension::BasicFutureObject<extension::AsyncFileImage,void>::Body *m_ptr; // rcx
  unsigned __int64 Mapsize; // rdi
  extension::BasicFutureObject<extension::AsyncFileImage,void> *v6; // rcx
  extension::BasicFutureObject<extension::AsyncFileImage,void> **Map; // rcx
  unsigned __int64 v8; // rax
  extension::BasicFutureObject<extension::AsyncFileImage,void> **v9; // rax
  unsigned __int64 v10; // rcx

  for ( i = this->_Mypair._Myval2._Mysize; i; i = this->_Mypair._Myval2._Mysize )
  {
    m_ptr = this->_Mypair._Myval2._Map[(this->_Mypair._Myval2._Mapsize - 1) & (this->_Mypair._Myval2._Myoff - 1 + i)]->m_body.m_ptr;
    if ( m_ptr
      && _InterlockedExchangeAdd64(
           (volatile signed __int64 *)&m_ptr->m_refCount.m_ptr->m_sharedCount,
           0xFFFFFFFFFFFFFFFFui64) == 1 )
    {
      ((void (__fastcall *)(extension::BasicFutureObject<extension::AsyncFileImage,void>::Body *, __int64))m_ptr->~RefCountableWeakSupportBase)(
        m_ptr,
        1i64);
    }
    if ( this->_Mypair._Myval2._Mysize-- == 1 )
      this->_Mypair._Myval2._Myoff = 0i64;
  }
  Mapsize = this->_Mypair._Myval2._Mapsize;
  while ( Mapsize )
  {
    v6 = this->_Mypair._Myval2._Map[--Mapsize];
    if ( v6 )
      operator delete(v6);
  }
  Map = this->_Mypair._Myval2._Map;
  if ( Map )
  {
    v8 = this->_Mypair._Myval2._Mapsize;
    if ( v8 > 0x1FFFFFFFFFFFFFFFi64 )
      invalid_parameter_noinfo_noreturn();
    if ( 8 * v8 >= 0x1000 )
    {
      if ( ((unsigned __int8)Map & 0x1F) != 0 )
        invalid_parameter_noinfo_noreturn();
      v9 = (extension::BasicFutureObject<extension::AsyncFileImage,void> **)*(Map - 1);
      if ( v9 >= Map )
        invalid_parameter_noinfo_noreturn();
      v10 = (char *)Map - (char *)v9;
      if ( v10 < 8 )
        invalid_parameter_noinfo_noreturn();
      if ( v10 > 0x27 )
        invalid_parameter_noinfo_noreturn();
      Map = v9;
    }
    operator delete(Map);
  }
  this->_Mypair._Myval2._Mapsize = 0i64;
  this->_Mypair._Myval2._Map = 0i64;
}

std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<extension::BasicFutureObject<extension::AsyncFileImage,void> > > > *__fastcall std::deque<std::unique_ptr<extension::ExThread::Runnable>>::begin(
        std::deque<extension::BasicFutureObject<extension::AsyncFileImage,void>> *this,
        std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<extension::BasicFutureObject<extension::AsyncFileImage,void> > > > *result)
{
  std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<extension::BasicFutureObject<extension::AsyncFileImage,void> > > > *v2; // rax

  result->_Myoff = this->_Mypair._Myval2._Myoff;
  result->_Myproxy = this->_Mypair._Myval2._Myproxy;
  v2 = result;
  result->_Mynextiter = 0i64;
  return v2;
}

const char *__fastcall extension::TranslateTable::executeTranslate(
        extension::TranslateTable *this,
        const char *key,
        const char *langCodeName)
{
  const char *v4; // rbx
  lua_State *m_Context; // rsi
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // r8
  std::string *Ptr; // rdx
  int v10; // er8
  std::string *v11; // rdx
  int v12; // er8
  char v13; // al
  lua_State *v14; // rcx
  int v15; // er8
  std::string v17; // [rsp+28h] [rbp-50h] BYREF

  v4 = key;
  if ( key )
  {
    if ( langCodeName )
    {
      m_Context = this->m_luaContext.m_Context;
      if ( this->m_luaContext.m_Context )
      {
        v17._Mypair._Myval2._Myres = 15i64;
        v7 = 0i64;
        v17._Mypair._Myval2._Mysize = 0i64;
        v17._Mypair._Myval2._Bx._Buf[0] = 0;
        if ( *key )
        {
          v8 = -1i64;
          do
            ++v8;
          while ( key[v8] );
        }
        else
        {
          v8 = 0i64;
        }
        std::string::assign(&v17, key, v8);
        if ( extension::TranslateTable::s_useKBTexts )
        {
          std::string::append(&v17, "_KB", 3ui64);
          Ptr = &v17;
          if ( v17._Mypair._Myval2._Myres >= 0x10 )
            Ptr = (std::string *)v17._Mypair._Myval2._Bx._Ptr;
          lua_pushstring(m_Context, Ptr->_Mypair._Myval2._Bx._Buf);
          if ( (unsigned __int8)extension::TranslateTable::LuaTranslateString(this, m_Context, v10, langCodeName) )
            goto LABEL_20;
          if ( *v4 )
          {
            v7 = -1i64;
            do
              ++v7;
            while ( v4[v7] );
          }
          std::string::assign(&v17, v4, v7);
          --m_Context->top;
        }
        std::string::append(&v17, "_STEAM", 6ui64);
        v11 = &v17;
        if ( v17._Mypair._Myval2._Myres >= 0x10 )
          v11 = (std::string *)v17._Mypair._Myval2._Bx._Ptr;
        lua_pushstring(m_Context, v11->_Mypair._Myval2._Bx._Buf);
        v13 = extension::TranslateTable::LuaTranslateString(this, m_Context, v12, langCodeName);
        v14 = m_Context;
        if ( v13 )
          goto LABEL_21;
        --m_Context->top;
        lua_pushstring(m_Context, v4);
        if ( !(unsigned __int8)extension::TranslateTable::LuaTranslateString(this, m_Context, v15, langCodeName) )
        {
LABEL_22:
          --m_Context->top;
          std::string::~string(&v17);
          return v4;
        }
LABEL_20:
        v14 = m_Context;
LABEL_21:
        v4 = (const char *)lua_tolstring(v14, -1, 0i64);
        goto LABEL_22;
      }
    }
  }
  return v4;
}

const char *__fastcall extension::TranslateTable::getText(
        extension::TranslateTable *this,
        const char *text,
        LANGUAGE_MODE lang)
{
  const char *result; // rax
  const std::pair<char const *,enum LANGUAGE_MODE> *v5; // rax
  const char *first; // rax
  const char *v7; // rbx
  const char *v8; // r8
  const char *v9; // rdx

  if ( !text )
    return 0i64;
  if ( *text != 64 && *text != 36 )
    return text;
  v5 = extension::auxscript::MyLangCodeNameTable;
  while ( v5->second != lang )
  {
    if ( ++v5 == (const std::pair<char const *,enum LANGUAGE_MODE> *)extension::auxscript::my_testpolicy_name_table )
    {
      first = 0i64;
      goto LABEL_11;
    }
  }
  first = v5->first;
LABEL_11:
  v7 = text + 1;
  v8 = "en_US";
  v9 = text + 1;
  if ( first )
    v8 = first;
  result = extension::TranslateTable::executeTranslate(this, v9, v8);
  if ( result == v7 )
    return text;
  return result;
}

void __fastcall extension::TranslateTable::install(
        extension::TranslateTable *this,
        const extension::AsyncFileImage *chunk)
{
  lua_State *m_Context; // rbx
  lua_TValue *top; // r8
  signed __int64 v6; // rsi
  global_State *l_G; // rcx
  __int64 v8; // rsi
  __int64 v9; // rax
  Table *v10; // rax
  lua_TValue *v11; // rcx
  Value v12; // rdi
  Node *v13; // rax
  __int64 v14; // rdx
  GCObject *gc; // rdx
  unsigned __int64 len; // r8
  global_State *v17; // rax
  global_State *v18; // rcx
  __int64 v19; // rax
  Table *v20; // rax
  lua_TValue *v21; // rcx
  lua_TValue *v22; // rax
  lua_TValue *v23; // r10
  lua_TValue *v24; // rcx
  int v25; // eax
  Value v26; // rdx
  unsigned __int64 p_len; // r8
  Value v28; // rdx
  Table *env; // rax
  __int64 v30; // rax
  lua_TValue *v31; // rcx
  lua_TValue *v32; // rcx
  GCObject *v33; // rcx
  unsigned __int8 marked; // r8
  global_State *v35; // rax
  lua_TValue *v36; // rax
  int v37; // edx
  unsigned __int16 v38; // ax
  lua_TValue *v39; // rdx
  __int64 v40; // rdx
  __int64 v41; // r8
  lua_TValue *v42; // r9
  unsigned __int64 i; // rcx
  int v44; // [rsp+20h] [rbp-58h]
  __int64 v45[2]; // [rsp+30h] [rbp-48h] BYREF
  Zio z; // [rsp+40h] [rbp-38h] BYREF

  m_Context = this->m_luaContext.m_Context;
  if ( this->m_luaContext.m_Context )
  {
    top = m_Context->top;
    v6 = (char *)top - (char *)m_Context->ci->func;
    top->value_.gc = (GCObject *)extension::SharedLuaContext::LuaErrorHandler;
    top->tt_ = 22;
    l_G = m_Context->l_G;
    ++m_Context->top;
    v8 = (v6 - 16) >> 4;
    if ( l_G->GCdebt > 0 )
    {
      if ( l_G->gcrunning )
      {
        luaC_forcestep(m_Context);
      }
      else
      {
        v9 = l_G->GCdebt + 2400;
        l_G->GCdebt = -2400i64;
        l_G->totalbytes += v9;
      }
    }
    v10 = luaH_new(m_Context);
    v11 = m_Context->top;
    v11->value_.gc = (GCObject *)v10;
    v11->tt_ = 69;
    ++m_Context->top;
    luaH_resize(m_Context, v10, 0, 1024);
    v45[0] = (__int64)chunk->fileBufPara.pData;
    v45[1] = chunk->m_length;
    z.L = m_Context;
    z.reader = getS;
    z.n = 0i64;
    z.data = v45;
    z.p = 0i64;
    if ( !(unsigned int)luaD_protectedparser(m_Context, &z, "TranslateTable", 0i64) )
    {
      v12.gc = (GCObject *)m_Context->top[-1].value_;
      if ( v12.gc->ts.tsv.extra == 1 )
      {
        v13 = luaH_getint((Table *)m_Context->l_G->l_registry.value_.gc, 2);
        v14 = *(_QWORD *)(v12.gc->u.uv.len + 16);
        *(_QWORD *)v14 = v13->i_val.value_.gc;
        *(_DWORD *)(v14 + 8) = v13->i_val.tt_;
        if ( (v13->i_val.tt_ & 0x40) != 0 )
        {
          gc = v13->i_val.value_.gc;
          if ( (v13->i_val.value_.gc->gch.marked & 3) != 0 )
          {
            len = v12.gc->u.uv.len;
            if ( (*(_BYTE *)(len + 9) & 4) != 0 )
            {
              v17 = m_Context->l_G;
              if ( v17->gcstate > 1u )
                *(_BYTE *)(len + 9) = *(_BYTE *)(len + 9) & 0xB8 | v17->currentwhite & 3;
              else
                reallymarkobject(m_Context->l_G, gc);
            }
          }
        }
      }
      v18 = m_Context->l_G;
      if ( v18->GCdebt > 0 )
      {
        if ( v18->gcrunning )
        {
          luaC_forcestep(m_Context);
        }
        else
        {
          v19 = v18->GCdebt + 2400;
          v18->GCdebt = -2400i64;
          v18->totalbytes += v19;
        }
      }
      v20 = luaH_new(m_Context);
      v21 = m_Context->top;
      v21->value_.gc = (GCObject *)v20;
      v21->tt_ = 69;
      ++m_Context->top;
      v22 = index2addr(m_Context, (int)v8 + 2);
      *v23 = *v22;
      ++m_Context->top;
      lua_setfield(m_Context, -2, "_");
      *m_Context->top++ = *index2addr(m_Context, (int)v8 + 2);
      lua_pushcclosure(
        m_Context,
        (int (__fastcall *)(lua_State *))extension::TranslateTable::LuaLib::Lfn_TableChunkHelper_TranslateAt,
        1);
      lua_setfield(m_Context, -2, "TranslateAt");
      v24 = m_Context->top;
      v25 = v24[-2].tt_ & 0x3F;
      if ( v25 == 6 )
      {
        v28.gc = (GCObject *)v24[-2].value_;
        env = v28.gc->u.uv.env;
        if ( SLODWORD(env[1].metatable) >= 1 )
        {
          v26.gc = (GCObject *)v28.gc->cl.c.upvalue[0].value_;
          v30 = **(_QWORD **)&env->sizearray;
          p_len = v26.gc->ts.tsv.len;
          if ( !v30 || v30 != -24 )
            goto LABEL_25;
        }
      }
      else if ( v25 == 38 )
      {
        v26.gc = (GCObject *)v24[-2].value_;
        if ( v26.gc->ts.tsv.extra )
        {
          p_len = (unsigned __int64)&v26.gc->u.uv.len;
LABEL_25:
          v31 = v24 - 1;
          m_Context->top = v31;
          *(_QWORD *)p_len = v31->value_.gc;
          *(_DWORD *)(p_len + 8) = v31->tt_;
          v32 = m_Context->top;
          if ( (v32->tt_ & 0x40) != 0 )
          {
            v33 = v32->value_.gc;
            if ( (v33->gch.marked & 3) != 0 )
            {
              marked = v26.gc->gch.marked;
              if ( (marked & 4) != 0 )
              {
                v35 = m_Context->l_G;
                if ( v35->gcstate > 1u )
                  v26.gc->gch.marked = marked & 0xB8 | v35->currentwhite & 3;
                else
                  reallymarkobject(m_Context->l_G, v33);
              }
            }
          }
          if ( !(unsigned int)lua_pcallk(m_Context, 0, 0, (int)v8 + 1, v44, 0i64) )
          {
            v36 = m_Context->top;
            v36->value_.gc = (GCObject *)extension::TranslateTable::LuaLib::Lfn_MergeTable;
            v36->tt_ = 22;
            ++m_Context->top;
            lua_insert(m_Context, -2);
            lua_rawgetp(m_Context, v37, this);
            v38 = ++m_Context->nCcalls;
            v39 = m_Context->top - 3;
            if ( v38 >= 0xC8u )
            {
              if ( v38 == 200 )
                luaG_runerror(m_Context, "C stack overflow");
              if ( v38 >= 0xE1u )
                luaD_throw(m_Context, 6);
            }
            ++m_Context->nny;
            if ( !(unsigned int)luaD_precall(m_Context, v39, 0) )
              luaV_execute(m_Context, v40, v41, v42);
            --m_Context->nny;
            --m_Context->nCcalls;
          }
        }
      }
      lua_settop(m_Context, v8);
      return;
    }
    extension::SharedLuaContext::LuaErrorHandler(m_Context);
    if ( (int)v8 < 0 )
    {
      m_Context->top += (int)v8 + 1;
    }
    else
    {
      for ( i = (unsigned __int64)&m_Context->ci->func[(int)v8 + 1]; m_Context->top < (lua_TValue *)i; ++m_Context->top )
        m_Context->top->tt_ = 0;
      m_Context->top = (lua_TValue *)i;
    }
  }
}

char __fastcall extension::TranslateTable::installLoadedData(extension::TranslateTable *this)
{
  std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<extension::BasicFutureObject<extension::AsyncFileImage,void> > > > *v2; // rdx
  const std::_Container_base12 *v3; // rax
  const std::_Container_base12 *Mycont; // rax
  std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<extension::BasicFutureObject<extension::AsyncFileImage,void> > > > *v5; // rdx
  const std::_Container_base12 *v6; // rax
  const std::_Container_base12 *v7; // rdi
  const extension::AsyncFileImage *Myproxy; // rdx
  extension::BasicFutureObject<extension::AsyncFileImage,void>::Body *m_ptr; // rcx
  std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<extension::BasicFutureObject<extension::AsyncFileImage,void> > > > result; // [rsp+20h] [rbp-38h] BYREF
  std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<extension::BasicFutureObject<extension::AsyncFileImage,void> > > > v13; // [rsp+38h] [rbp-20h] BYREF

  if ( !this->m_loadingChunks._Mypair._Myval2._Mysize )
    return 1;
  while ( 1 )
  {
    v2 = std::deque<std::unique_ptr<extension::ExThread::Runnable>>::begin(&this->m_loadingChunks, &result);
    v3 = v2->_Myproxy ? v2->_Myproxy->_Mycont : 0i64;
    Mycont = (&v3[1]._Myproxy->_Mycont)[v2->_Myoff & ((unsigned __int64)&v3[2]._Myproxy[-1]._Myfirstiter + 7)][1]._Myproxy[1]._Mycont;
    if ( Mycont )
    {
      if ( !LOBYTE(Mycont[12]._Myproxy) && ((__int64)Mycont[11]._Myproxy & 1) == 0 )
        break;
    }
    v5 = std::deque<std::unique_ptr<extension::ExThread::Runnable>>::begin(&this->m_loadingChunks, &v13);
    if ( v5->_Myproxy )
      v6 = v5->_Myproxy->_Mycont;
    else
      v6 = 0i64;
    v7 = (&v6[1]._Myproxy->_Mycont)[v5->_Myoff & ((unsigned __int64)&v6[2]._Myproxy[-1]._Myfirstiter + 7)][1]._Myproxy[1]._Mycont;
    if ( !v7 || LOBYTE(v7[12]._Myproxy) )
    {
      Myproxy = 0i64;
    }
    else
    {
      if ( ((__int64)v7[11]._Myproxy & 1) == 0 )
        extension::AsyncStatus::waitFor((extension::AsyncStatus *)&v7[11], (extension::AsyncStatus::Step)v5);
      Myproxy = (const extension::AsyncFileImage *)v7[9]._Myproxy;
    }
    extension::TranslateTable::install(this, Myproxy);
    m_ptr = this->m_loadingChunks._Mypair._Myval2._Map[this->m_loadingChunks._Mypair._Myval2._Myoff & (this->m_loadingChunks._Mypair._Myval2._Mapsize - 1)]->m_body.m_ptr;
    if ( m_ptr && !_InterlockedDecrement64((volatile signed __int64 *)&m_ptr->m_refCount.m_ptr->m_sharedCount) )
      ((void (__fastcall *)(extension::BasicFutureObject<extension::AsyncFileImage,void>::Body *, __int64))m_ptr->~RefCountableWeakSupportBase)(
        m_ptr,
        1i64);
    if ( this->m_loadingChunks._Mypair._Myval2._Mysize-- == 1 )
      this->m_loadingChunks._Mypair._Myval2._Myoff = 0i64;
    else
      ++this->m_loadingChunks._Mypair._Myval2._Myoff;
    if ( !this->m_loadingChunks._Mypair._Myval2._Mysize )
      return 1;
  }
  return 0;
}

void __fastcall extension::TranslateTable::loadStart(extension::TranslateTable *this, const char *tableFilePath)
{
  unsigned __int64 v3; // r8
  extension::BasicFutureObject<extension::AsyncFileImage,void>::AssetCache *v4; // rcx
  const void *v5; // r9
  extension::BasicFutureObject<extension::AsyncFileImage,void>::Body *m_ptr; // rcx
  char *Ptr; // rcx
  char *v8; // rax
  extension::BasicFutureObject<extension::AsyncFileImage,void> _Val; // [rsp+20h] [rbp-78h] BYREF
  std::string v10; // [rsp+30h] [rbp-68h] BYREF
  __int64 v11; // [rsp+50h] [rbp-48h]
  std::string _Right; // [rsp+60h] [rbp-38h] BYREF

  v11 = -2i64;
  if ( this->m_luaContext.m_Context )
  {
    _Right._Mypair._Myval2._Myres = 15i64;
    _Right._Mypair._Myval2._Mysize = 0i64;
    _Right._Mypair._Myval2._Bx._Buf[0] = 0;
    if ( *tableFilePath )
    {
      v3 = -1i64;
      do
        ++v3;
      while ( tableFilePath[v3] );
    }
    else
    {
      v3 = 0i64;
    }
    std::string::assign(&_Right, tableFilePath, v3);
    _Val.m_isNoCache = 0;
    v10._Mypair._Myval2._Myres = 15i64;
    v10._Mypair._Myval2._Mysize = 0i64;
    v10._Mypair._Myval2._Bx._Buf[0] = 0;
    std::string::assign(&v10, &_Right, 0i64, 0xFFFFFFFFFFFFFFFFui64);
    extension::BasicFutureObject<extension::AsyncFileImage,void>::AssetCache::getCachedOrLoadStart(
      v4,
      &_Val.m_body,
      &v10,
      v5);
    std::deque<extension::BasicFutureObject<extension::AsyncFileImage,void>>::push_back(&this->m_loadingChunks, &_Val);
    m_ptr = _Val.m_body.m_ptr;
    if ( _Val.m_body.m_ptr
      && _InterlockedExchangeAdd64(
           (volatile signed __int64 *)&_Val.m_body.m_ptr->m_refCount.m_ptr->m_sharedCount,
           0xFFFFFFFFFFFFFFFFui64) == 1 )
    {
      ((void (__fastcall *)(extension::BasicFutureObject<extension::AsyncFileImage,void>::Body *, __int64))m_ptr->~RefCountableWeakSupportBase)(
        m_ptr,
        1i64);
    }
    if ( _Right._Mypair._Myval2._Myres >= 0x10 )
    {
      Ptr = _Right._Mypair._Myval2._Bx._Ptr;
      if ( _Right._Mypair._Myval2._Myres + 1 >= 0x1000 )
      {
        if ( (_Right._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
          invalid_parameter_noinfo_noreturn();
        v8 = (char *)*((_QWORD *)_Right._Mypair._Myval2._Bx._Ptr - 1);
        if ( v8 >= _Right._Mypair._Myval2._Bx._Ptr )
          invalid_parameter_noinfo_noreturn();
        if ( (char *)(_Right._Mypair._Myval2._Bx._Ptr - v8) < (char *)8 )
          invalid_parameter_noinfo_noreturn();
        if ( (char *)(_Right._Mypair._Myval2._Bx._Ptr - v8) > (char *)0x27 )
          invalid_parameter_noinfo_noreturn();
        Ptr = (char *)*((_QWORD *)_Right._Mypair._Myval2._Bx._Ptr - 1);
      }
      operator delete(Ptr);
    }
  }
}

void __fastcall std::deque<extension::BasicFutureObject<extension::AsyncFileImage,void>>::push_back(
        std::deque<extension::BasicFutureObject<extension::AsyncFileImage,void>> *this,
        extension::BasicFutureObject<extension::AsyncFileImage,void> *_Val)
{
  unsigned __int64 v4; // rsi
  extension::BasicFutureObject<extension::AsyncFileImage,void> *v5; // rdx
  extension::BasicFutureObject<extension::AsyncFileImage,void>::Body *m_ptr; // rcx

  if ( this->_Mypair._Myval2._Mapsize <= this->_Mypair._Myval2._Mysize + 1 )
    std::deque<extension::BasicFutureObject<extension::AsyncFileImage,void>>::_Growmap(this, (unsigned __int64)_Val);
  this->_Mypair._Myval2._Myoff &= this->_Mypair._Myval2._Mapsize - 1;
  v4 = (this->_Mypair._Myval2._Mapsize - 1) & (this->_Mypair._Myval2._Mysize + this->_Mypair._Myval2._Myoff);
  if ( !this->_Mypair._Myval2._Map[v4] )
    this->_Mypair._Myval2._Map[v4] = (extension::BasicFutureObject<extension::AsyncFileImage,void> *)operator new(0x10ui64);
  v5 = this->_Mypair._Myval2._Map[v4];
  if ( v5 )
  {
    v5->m_isNoCache = _Val->m_isNoCache;
    m_ptr = _Val->m_body.m_ptr;
    v5->m_body.m_ptr = m_ptr;
    if ( m_ptr )
      _InterlockedExchangeAdd64((volatile signed __int64 *)&m_ptr->m_refCount.m_ptr->m_sharedCount, 1ui64);
  }
  ++this->_Mypair._Myval2._Mysize;
}

const char *__fastcall extension::TranslateTable::searchText(
        extension::TranslateTable *this,
        const char *key,
        LANGUAGE_MODE lang)
{
  const std::pair<char const *,enum LANGUAGE_MODE> *v3; // rax
  const char *first; // rax
  const char *v5; // r8

  v3 = extension::auxscript::MyLangCodeNameTable;
  while ( v3->second != lang )
  {
    if ( ++v3 == (const std::pair<char const *,enum LANGUAGE_MODE> *)extension::auxscript::my_testpolicy_name_table )
    {
      first = 0i64;
      goto LABEL_6;
    }
  }
  first = v3->first;
LABEL_6:
  v5 = "en_US";
  if ( first )
    v5 = first;
  return extension::TranslateTable::executeTranslate(this, key, v5);
}

void __fastcall extension::TranslateTable::setLuaContext(
        extension::TranslateTable *this,
        const extension::SharedLuaContext *context,
        bool isOpenLib)
{
  lua_State *m_Context; // rbx
  lua_State *v5; // rax
  lua_State *v6; // rbx
  global_State *l_G; // rcx
  Node *v8; // rax
  lua_TValue *top; // rdx
  const extension::gfxi_detail::TranslatorImpl *v10; // rcx
  global_State *v11; // rcx
  Table *v12; // rax
  lua_TValue *v13; // rdx
  int v14; // edx
  extension::SharedLuaContext v15; // [rsp+28h] [rbp-20h] BYREF

  if ( !this->m_luaContext.m_Context )
  {
    m_Context = context->m_Context;
    v15.m_Context = m_Context;
    *(_OWORD *)&v15.m_pMemoryAllocator = 0i64;
    if ( m_Context )
      extension::SharedLuaContext::AddRef(&v15);
    v15.m_Context = this->m_luaContext.m_Context;
    v5 = v15.m_Context;
    this->m_luaContext.m_Context = m_Context;
    if ( v5 )
    {
      extension::SharedLuaContext::Release(&v15);
      if ( v15.m_pMemoryAllocator )
        ((void (__fastcall *)(extension::MemoryAllocator *, __int64))v15.m_pMemoryAllocator->~MemoryAllocator)(
          v15.m_pMemoryAllocator,
          1i64);
    }
    v6 = this->m_luaContext.m_Context;
    if ( this->m_luaContext.m_Context )
    {
      l_G = v6->l_G;
      v15.m_Context = (lua_State *)this;
      LODWORD(v15.m_pMemoryAllocator) = 2;
      v8 = luaH_get((Table *)l_G->l_registry.value_.gc, (const lua_TValue *)&v15);
      top = v6->top;
      top->value_.gc = v8->i_val.value_.gc;
      top->tt_ = v8->i_val.tt_;
      ++v6->top;
      v10 = (const extension::gfxi_detail::TranslatorImpl *)&v6->top[-1];
      if ( v10 == (const extension::gfxi_detail::TranslatorImpl *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168]
        || (v10->RefCount & 0xF) != 5 )
      {
        v6->top = (lua_TValue *)v10;
        v11 = v6->l_G;
        if ( v11->GCdebt > 0 )
        {
          if ( v11->gcrunning )
          {
            luaC_forcestep(v6);
          }
          else
          {
            v11->totalbytes += v11->GCdebt + 2400;
            v11->GCdebt = -2400i64;
          }
        }
        v12 = luaH_new(v6);
        v13 = v6->top;
        v13->value_.gc = (GCObject *)v12;
        v13->tt_ = 69;
        ++v6->top;
        luaH_resize(v6, v12, 0, 1024);
        lua_rawsetp(v6, v14, this);
      }
      extension::TranslateTable::LuaLib::Lfn_OpenLib(v6);
    }
  }
}

