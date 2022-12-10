#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charahitrectformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_custom_fontprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_scale9grid.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraystaticbuff.h"
#include "dev/kof/master/development/source/baseproject/jni/game/network/playtogether.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/translate_table.h"
#include "dev/silverware/git/sdk/3rdparty/steam/isteamhtmlsurface.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exwaitcondition.h"
#include "dev/silverware/git/sdk/agconditionvariable.inl"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/shared_lua_context.h"
#include "dev/silverware/git/sdk/agcondition.inl"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/vec_aos.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_docview.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/boolinvec.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_range.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actor.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/map"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charadataunify.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/png_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaattackdataformat.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/tuple"
#include "dev/kof/master/development/source/baseproject/jni/game/data/savedata.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charadamagesettingformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcache.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/vectormath_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_new.h"
#include "dev/silverware/git/sdk/system/agusermanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_vertex.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcacheconfig.h"
#include "dev/silverware/git/sdk/platforms/pc/system/agpcsysteminfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_filterdesc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_core.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshkey.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix3x4.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/mat_aos.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_fontmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleonline.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "dev/silverware/git/sdk/util/agservice.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixstate.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_profiler.h"
#include "dev/kof/master/development/source/ps4project/baseproject/pcutil/pccontrolsmanager.h"
#include "program files (x86)/windows kits/8.1/include/shared/stralign.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_drawableimage.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdata/effectdata.h"
#include "dev/silverware/git/sdk/agthreadpool.h"
#include "dev/silverware/git/sdk/input/aginputmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_buffer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "dev/silverware/git/sdk/agsingleton.h"
#include "dev/silverware/git/sdk/util/agdelegate.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector4unaligned.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/chartdata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_event.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/combomissiondataformat.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/sounddata.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/soundgroupdataformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_keycodes.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_bank.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/debug/logging.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steam_api_internal.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_resource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asstring.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_prefightfaceoff.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "dev/silverware/git/sdk/agmutex.inl"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_font.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_gradients.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_image.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/effect/actoreffect.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actorobject.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/shaderfxhelper.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessdefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/hidpad/hidpadsystem.h"
#include "dev/silverware/git/sdk/agreferencedobjectinl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_loader.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatapacked.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/soundutil.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actoroption.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/globalheapmemory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_system.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_pathdatapacker.h"
#include "dev/kof/master/development/source/baseproject/jni/game/network/chkdiscononlinesv.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/cameracheck.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/fixmemory.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steam_api.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/vecidx_aos.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/floatinvec.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/freecameracheck.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_movie.h"
#include "dev/silverware/git/sdk/input/agsdlmappingparser.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_states.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/silverware/git/sdk/input/agcontroller.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/asyncjob.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixpool.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_statebag.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_drawtext.h"
#include "dev/silverware/git/sdk/system/aguser.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/bilinkable.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/fontprovider/render_fontproviderwinapi.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_strokeraa.h"
#include "dev/silverware/git/sdk/agstring.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/atomic_int.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_hash.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/texstring.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/mediamanager.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/quat_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/atomic"
#include "program files (x86)/windows kits/8.1/include/shared/winerror.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/savedatadefine.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_operation.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_queue.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_styledtext.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/bitset"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/floatinvec.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_wwhelper.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_wstring.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlecall/battlecall.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/audiopresenter.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_debug.h"
#include "dev/kof/master/development/source/baseproject/jni/game/cpuseq/battlecpu.h"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/bodypush.h"
#include "dev/kof/master/development/source/baseproject/jni/game/cpuseq/sequencecontroller.h"
#include "dev/silverware/git/sdk/agvector2.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_vec64.h"
#include "dev/silverware/git/sdk/agmath.h"
#include "program files (x86)/windows kits/8.1/include/shared/guiddef.h"
#include "dev/kof/master/development/source/baseproject/jni/game/network/netmanager.h"
#include "dev/kof/master/development/source/baseproject/jni/game/network/leaderboard.h"
#include "dev/kof/master/development/source/baseproject/jni/game/system/battlesysteminfo.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglcurve.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_screentoworld.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmodel.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcacheconfig.h"
#include "dev/silverware/git/sdk/input/agcontrollercomponent.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_math.h"
#include "dev/silverware/git/sdk/3rdparty/steam/matchmakingtypes.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/string"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_rasterizer.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/vec_aos.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exthread.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic0.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/combomissionjudge.h"
#include "dev/silverware/git/sdk/agthread.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/ios"
#include "program files (x86)/windows kits/8.1/include/um/oleauto.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/variableheapmemorybase.h"
#include "dev/silverware/git/sdk/agreferencedobject.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocnum"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_containers.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "dev/silverware/git/sdk/agreferenceinl.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_renderer.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/matchingsystem.h"
#include "dev/silverware/git/sdk/agreferencecount.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treetext.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/heapmemory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/mediasound.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglsprite.h"
#include "dev/kof/master/development/source/ps4project/baseproject/pcutil/pcdummy.h"
#include "dev/silverware/git/sdk/agpointer.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaprojectdataformat.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/mutex.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/mat_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xiosbase"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestage.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocale"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/tkndata.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charabasestatusformat.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglrender.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/matrix4unaligned.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/deque"
#include "dev/kof/master/development/source/baseproject/jni/game/check/inputkeyrecord.h"
#include "dev/silverware/git/sdk/aghash.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/stdexcept"
#include "dev/silverware/git/sdk/agmovieplayer.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/effect.h"
#include "dev/silverware/git/sdk/agstringutils.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglfog.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglbone.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/exception"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/type_traits"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_hashkey.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xxatomic"
#include "dev/kof/master/development/source/baseproject/jni/game/util/cameramotionpreviewsettings.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/stageprojectdata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphqueue.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/physicalheapmemory.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstddef"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_types.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "program files (x86)/windows kits/8.1/include/um/winnt.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/refcountable.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestagedatas.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xutility"
#include "program files (x86)/windows kits/8.1/include/shared/basetsd.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textmeshprovider.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/utility"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/tkndatas.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphparam.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/tween.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/input/imesystem.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/operationmapper.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/iosfwd"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitive.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_manager.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/libcommon.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/quat_aos.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocaddr.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_radixtree.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/asynccharafileload.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cxform.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmirror.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/dds_imagefile.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/weapon/actorweapon.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exlockable.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/functional"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/hitrectcollection.h"
#include "dev/kof/master/development/source/baseproject/jni/game/system/battlecontroller.h"
#include "dev/silverware/git/sdk/agmemorystream.h"
#include "dev/silverware/git/sdk/agmutex.h"
#include "dev/silverware/git/sdk/agmemorypool.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_missiondataloading.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actionsystem.h"
#include "dev/silverware/git/sdk/input/agcontrollerbuttoncomponent.h"
#include "dev/silverware/git/sdk/agsemaphore.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstring"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaactiondataformat.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steamclientpublic.h"
#include "dev/silverware/git/sdk/agstream.h"
#include "dev/silverware/git/sdk/agsemaphore.inl"
#include "dev/silverware/git/sdk/agconditionvariable.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charafilebase.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/jobmanager.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/condition_variable"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory0"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlehud.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/randommt.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector2unaligned.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_sse.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battleeventhandler.h"
#include "dev/silverware/git/sdk/util/agservicecommand.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_viewport.h"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/damagesetting.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_typeinfo.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdata/effectappdata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/tga_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/commanddataformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_linebuffer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_highlight.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/easingnumber.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/errorchecker.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/titlestoragesystem.h"
#include "program files (x86)/windows kits/8.1/include/um/winuser.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglshader.h"
#include "dev/silverware/git/sdk/util/agdebugchannels.h"
#include "dev/silverware/git/sdk/util/agperformancecounter.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleonlinewatching.h"
#include "dev/kof/master/development/source/baseproject/jni/game/appmain.h"
#include "dev/silverware/git/sdk/agclock.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_simplemeshcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_constants.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "dev/silverware/git/sdk/agdisplay.h"
#include "dev/silverware/git/sdk/agreferencecountinl.h"
#include "dev/silverware/git/sdk/agvector4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_bundle.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/resourcemanager.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/silverware/git/sdk/agvector3.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/algorithm"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleloading.h"
#include "dev/silverware/git/sdk/agscopedlock.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xfacet"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_characterdef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vector"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/jpeg_imagefile.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_functions.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefileutil.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloatmp.h"
#include "dev/silverware/git/sdk/agcondition.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapemeshprovider.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_fontman.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/fontprovider/render_fontproviderhud.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessgen.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/trainingsetting.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/combomissionattackeventlistener.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charamaterialsettingformat.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/rapper/graphicsopt.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_player.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessellator.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thr/xthread"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_fontlib.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_ps4modelroom.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogleffect.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hal.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actorcharabase.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/fix32.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threadcheck.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treenode.h"
#include "dev/kof/master/development/source/baseproject/jni/game/define/charabonedefine.h"
#include "dev/silverware/git/sdk/filesystem/agfile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_context.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/colorholder.h"
#include "dev/silverware/git/sdk/filesystem/agpath.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_twips.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "dev/silverware/git/sdk/agrectangle.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogllight.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "dev/silverware/git/sdk/filesystem/agmount.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/battleplayerinfo.h"
#include "dev/silverware/git/sdk/filesystem/agdirectory.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_exception.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shader.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphfitter.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestageresourcecontainer.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/limits"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestageshader.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actionblackout.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector3unaligned.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thread"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/time.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/memory"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_drawtext.h"
#include "program files (x86)/windows kits/8.1/include/um/propidl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_sgmlparser.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/boolinvec.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filters.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/unordered_map"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_loader.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treeshape.h"
#include "program files (x86)/windows kits/8.1/include/um/winbase.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textlayout.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filterparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/cpusequencedataformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_log.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_stroker.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xhash"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/list"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtree"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/particledata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitivebundle.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/shot/actorshot.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actorchara.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/future_asset.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treecachenode.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/system_error"
#include "dev/silverware/git/sdk/agpointerinl.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/commandcheck.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/mutex"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/array"
#include "dev/kof/master/development/source/baseproject/jni/game/util/restrictringbuffer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cacheeffect.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/chrono"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefile.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/materialshowcontrol.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdatalistmanager.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/math.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocinfo"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectcommon.h"
#include "dev/silverware/git/sdk/memory/agallocators.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/syncmenuimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hairliner.h"
#include "dev/silverware/git/sdk/system/agsysteminfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix4x4.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/moviedatadefine.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exlockable.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/auxscript.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/exutil.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/asyncjob.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/appmain.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/check/commandcheck.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/translate_table.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/data/savedata.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_movie.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_game_interface.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_drawtext.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_system.cpp"

bool extension::gfxi_detail::LanguageConfigImpl::addFontFileName(const char * fontFileName); // 0x1402745B0
unsigned long extension::gfxi_detail::TranslatorImpl::GetCaps(); // 0x1400BBAA0
void extension::gfxi_detail::TranslatorImpl::Translate(Scaleform::GFx::Translator::TranslateInfo * translateInfo); // 0x1402747A0
void extension::gfxi_detail::TranslatorImpl::TranlateMultiKey(char * outText, char * inText); // 0x140274AE0
struct std::pair<char const * const,enum AgGamepadButton>
{
	struct _Myt;
	typedef const char first_type;
	enum second_type
	{
		AgGamepadButton_Up = 0,
		AgGamepadButton_Down = 1,
		AgGamepadButton_Left = 2,
		AgGamepadButton_Right = 3,
		AgGamepadButton_A = 4,
		AgGamepadButton_B = 5,
		AgGamepadButton_X = 6,
		AgGamepadButton_Y = 7,
		AgGamepadButton_LB = 8,
		AgGamepadButton_RB = 9,
		AgGamepadButton_L3 = 10,
		AgGamepadButton_R3 = 11,
		AgGamepadButton_Start = 12,
		AgGamepadButton_Select = 13,
		AgGamepadButton_TouchPad = 14,
		AgGamepadButton_Count = 15,
		AgGamepadButton_Menu = 12,
		AgGamepadButton_Options = 13,
		AgGamepadButton_View = 13,
		AgGamepadButton_Back = 13,
		AgGamepadButton_Cross = 4,
		AgGamepadButton_Circle = 5,
		AgGamepadButton_Square = 6,
		AgGamepadButton_Triangle = 7,
	};
	pair<char const * const,enum AgGamepadButton>(std::pair<char const * const,enum AgGamepadButton> &);
	std::pair<char const * const,enum AgGamepadButton> & operator=(const std::pair<char const * const,enum AgGamepadButton> &);
	std::pair<char const * const,enum AgGamepadButton> & operator=(std::pair<char const * const,enum AgGamepadButton> &);
	const char * first; // 0x0
	AgGamepadButton second; // 0x8
	void swap(std::pair<char const * const,enum AgGamepadButton> &);
};
bool extension::gfxi_detail::TranslatorImpl::ExchangeImageTag(char * exchanged); // 0x140274D90
bool extension::gfxi_detail::TranslatorImpl::ExeExchangeImageTag(char * exchanged, const char * from, const char * to); // 0x140275070
bool extension::gfxi_detail::TranslatorImpl::ExeExchangeImageTag_ID(char * exchanged, const char * from, AgGamepadButton to); // 0x140275480
bool extension::gfxi_detail::TranslatorImpl::OnWordWrapping(Scaleform::GFx::Translator::LineFormatDesc * desc); // 0x1402759C0
bool extension::gfxi_detail::TranslatorImpl::OnBidirectionalText(const wchar_t * text, unsigned long long textLen, wchar_t * newText, unsigned long * indexMap, bool * mirrorBits); // 0x140275A00
Scaleform::Ptr<extension::gfxi_detail::TranslatorImpl> extension::gfxi_detail::TranslatorImpl::Create(); // 0x140275A10
extension::GFXIFontManager::LanguageConfig::LanguageConfig(); // 0x140275A90
Scaleform::Render::ContextImpl::DisplayHandle<Scaleform::Render::TreeRoot>::~DisplayHandle<Scaleform::Render::TreeRoot>(); // 0x1402764C0
std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::GFXIFontManager::LanguageConfig,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::GFXIFontManager::LanguageConfig> > >::~map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,extension::GFXIFontManager::LanguageConfig,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,extension::GFXIFontManager::LanguageConfig> > >(); // 0x140275CA0
extension::GFXIFontManager::FontStates::~FontStates(); // 0x140275CD0
extension::GFXIFontManager::GFXIFontManager(); // 0x140275B20
extension::GFXIFontManager::~GFXIFontManager(); // 0x140275D20
extension::GFXIFontManager & extension::GFXIFontManager::Instance(); // 0x140275E90
void extension::GFXIFontManager::registerLanguage(const char * languageName, const extension::GFXIFontManager::LanguageConfig & conf); // 0x140275F00
bool extension::GFXIFontManager::setLanguage(const char * langName); // 0x1402760C0
const char * extension::GFXIFontManager::getCurrentFontLibFileName(unsigned long index); // 0x1402763B0
void extension::GFXIFontManager::renderDrawText(Scaleform::Render::HAL & renderer); // 0x140276430
void extension::GFXIFontManager::renderDrawTextImmediate(Scaleform::Render::HAL & renderer, long fbo); // 0x1402764D0
void extension::GFXIFontManager::update(); // 0x140276650
class extension::GFXIFontManager::update::__l8::FontStateUpdater :
	extension::gfxi_detail::MovieInstanceVisitor
{
private:
	Scaleform::GFx::Value m_langName; // 0x8
public:
	FontStateUpdater(const std::string &);
	virtual void visit(Scaleform::GFx::Movie &);
	~FontStateUpdater();
};
const char * extension::gfxi_detail::_exchage_table_keyboard[2][19]; // 0x1408AF120
const char * extension::gfxi_detail::_exchage_table_gamepads[4][37]; // 0x1408AF250
const char * extension::gfxi_detail::_exchage_table[2][76]; // 0x1408AF6F0
const std::pair<char const * const,enum AgGamepadButton> extension::gfxi_detail::_exchange_table_generic_gamepad_buttons[76]; // 0x140A604C0
std::piecewise_construct_t std::piecewise_construct; // 0x1408AED19
void extension::GFXIFontManager::loadStartFontLib(const std::string & translateLangName, const extension::gfxi_detail::LanguageConfigImpl & conf); // 0x1402769A0
bool extension::GFXIFontManager::checkPendingFontLib(); // 0x140276E00
void extension::GFXIFontManager::trackSaveDataLanguage(); // 0x140276FB0//decompilation failure at 1408AF120!
//decompilation failure at 1408AF250!
//decompilation failure at 1408AF6F0!
//decompilation failure at 140A604C0!
//decompilation failure at 1408AED19!
std::_Tree_node<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig>,void *> *__fastcall std::_Tree_comp_alloc<std::_Tmap_traits<std::string,extension::GFXIFontManager::LanguageConfig,std::less<std::string>,std::allocator<std::pair<std::string const,extension::GFXIFontManager::LanguageConfig>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<std::string &&>,std::tuple<>>(
        std::_Tree_comp_alloc<std::_Tmap_traits<std::string,extension::GFXIFontManager::LanguageConfig,std::less<std::string >,std::allocator<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig> >,0> > *this,
        const std::piecewise_construct_t *<_Val_0>,
        std::tuple<std::string &&> *<_Val_1>,
        std::tuple<> *<_Val_2>)
{
  std::_Tree_node<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig>,void *> *v5; // rax
  std::_Tree_node<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig>,void *> *v6; // rdi
  std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig> *p_Myval; // rbx
  std::string *Val; // rdx
  std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig> *Ptr; // rax

  v5 = std::_Tree_comp_alloc<std::_Tmap_traits<std::string,CSteamID,std::less<void>,std::allocator<std::pair<std::string const,CSteamID>>,0>>::_Buynode0(this);
  v6 = v5;
  *(_WORD *)&v5->_Color = 0;
  p_Myval = &v5->_Myval;
  if ( v5 != (std::_Tree_node<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig>,void *> *)-32i64 )
  {
    Val = <_Val_1>->_Myfirst._Val;
    v5->_Myval.first._Mypair._Myval2._Myres = 15i64;
    v5->_Myval.first._Mypair._Myval2._Mysize = 0i64;
    if ( v5->_Myval.first._Mypair._Myval2._Myres < 0x10 )
      Ptr = &v5->_Myval;
    else
      Ptr = (std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig> *)p_Myval->first._Mypair._Myval2._Bx._Ptr;
    Ptr->first._Mypair._Myval2._Bx._Buf[0] = 0;
    std::string::_Assign_rv((std::string *)&p_Myval->first, Val);
    extension::GFXIFontManager::LanguageConfig::LanguageConfig(&p_Myval->second);
  }
  return v6;
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

std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig> > > > *__fastcall std::_Tree<std::_Tmap_traits<std::string,extension::GFXIFontManager::LanguageConfig,std::less<std::string>,std::allocator<std::pair<std::string const,extension::GFXIFontManager::LanguageConfig>>,0>>::_Insert_at<std::pair<std::string const,extension::GFXIFontManager::LanguageConfig> &,std::_Tree_node<std::pair<std::string const,extension::GFXIFontManager::LanguageConfig>,void *> *>(
        std::_Tree<std::_Tmap_traits<std::string,extension::GFXIFontManager::LanguageConfig,std::less<std::string >,std::allocator<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig> >,0> > *this,
        std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig> > > > *result,
        bool _Addleft,
        std::_Tree_node<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig>,void *> *_Wherenode,
        std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig> *_Val,
        std::_Tree_node<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig>,void *> *_Node)
{
  unsigned __int64 Mysize; // rax
  extension::gfxi_detail::LanguageConfigImpl *m_ptr; // rcx
  std::_Tree_node<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig>,void *> *Myhead; // rax
  std::_Tree_node<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig>,void *> *v11; // rax
  std::_Tree_node<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig>,void *> *Parent; // rcx
  std::_Tree_node<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig>,void *> *v13; // r8
  std::_Tree_node<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig>,void *> *Left; // rdx
  std::_Tree_node<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig>,void *> *Right; // rdx
  std::_Tree_node<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig>,void *> *v16; // rdx
  std::_Tree_node<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig>,void *> *v17; // rcx
  std::_Tree_node<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig>,void *> *v18; // rdx
  std::_Tree_node<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig>,void *> *v19; // r8
  std::_Tree_node<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig>,void *> *v20; // rcx
  std::_Tree_node<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig>,void *> *v21; // rcx
  std::_Tree_node<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig>,void *> *v22; // rdx
  std::_Tree_node<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig>,void *> *v23; // rcx
  std::_Tree_node<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig>,void *> *v24; // rcx
  std::_Tree_node<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig>,void *> *v25; // rcx
  std::_Tree_node<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig>,void *> *v26; // rax
  std::_Tree_node<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig>,void *> *v27; // rcx
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig> > > > *v28; // rax

  Mysize = this->_Mypair._Myval2._Myval2._Mysize;
  if ( Mysize >= 0x38E38E38E38E38Di64 )
  {
    m_ptr = _Node->_Myval.second.m_impl.m_ptr;
    if ( m_ptr )
      extension::RefCountable<extension::gfxi_detail::LanguageConfigImpl>::release(m_ptr);
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
LABEL_10:
    Myhead->_Right = _Node;
    goto LABEL_11;
  }
  if ( !_Addleft )
  {
    _Wherenode->_Right = _Node;
    Myhead = this->_Mypair._Myval2._Myval2._Myhead;
    if ( _Wherenode != this->_Mypair._Myval2._Myval2._Myhead->_Right )
      goto LABEL_11;
    goto LABEL_10;
  }
  _Wherenode->_Left = _Node;
  if ( _Wherenode == this->_Mypair._Myval2._Myval2._Myhead->_Left )
    this->_Mypair._Myval2._Myval2._Myhead->_Left = _Node;
LABEL_11:
  v11 = _Node;
  while ( !v11->_Parent->_Color )
  {
    Parent = v11->_Parent;
    v13 = Parent->_Parent;
    Left = v13->_Left;
    if ( Parent == v13->_Left )
    {
      Right = v13->_Right;
      if ( Right->_Color )
      {
        if ( v11 == Parent->_Right )
        {
          v16 = Parent->_Right;
          v11 = v11->_Parent;
          Parent->_Right = v16->_Left;
          if ( !v16->_Left->_Isnil )
            v16->_Left->_Parent = Parent;
          v16->_Parent = Parent->_Parent;
          if ( Parent == this->_Mypair._Myval2._Myval2._Myhead->_Parent )
          {
            this->_Mypair._Myval2._Myval2._Myhead->_Parent = v16;
          }
          else
          {
            v17 = Parent->_Parent;
            if ( v11 == v17->_Left )
              v17->_Left = v16;
            else
              v17->_Right = v16;
          }
          v16->_Left = v11;
          v11->_Parent = v16;
        }
        v11->_Parent->_Color = 1;
        v11->_Parent->_Parent->_Color = 0;
        v18 = v11->_Parent->_Parent;
        v19 = v18->_Left;
        v18->_Left = v18->_Left->_Right;
        v20 = v19->_Right;
        if ( !v20->_Isnil )
          v20->_Parent = v18;
        v19->_Parent = v18->_Parent;
        if ( v18 == this->_Mypair._Myval2._Myval2._Myhead->_Parent )
        {
          this->_Mypair._Myval2._Myval2._Myhead->_Parent = v19;
          v19->_Right = v18;
        }
        else
        {
          v21 = v18->_Parent;
          if ( v18 == v21->_Right )
            v21->_Right = v19;
          else
            v21->_Left = v19;
          v19->_Right = v18;
        }
LABEL_51:
        v18->_Parent = v19;
        continue;
      }
      Parent->_Color = 1;
      Right->_Color = 1;
      v11->_Parent->_Parent->_Color = 0;
      v11 = v11->_Parent->_Parent;
    }
    else
    {
      if ( Left->_Color )
      {
        if ( v11 == Parent->_Left )
        {
          v22 = Parent->_Left;
          v11 = v11->_Parent;
          Parent->_Left = Parent->_Left->_Right;
          v23 = v22->_Right;
          if ( !v23->_Isnil )
            v23->_Parent = v11;
          v22->_Parent = v11->_Parent;
          if ( v11 == this->_Mypair._Myval2._Myval2._Myhead->_Parent )
          {
            this->_Mypair._Myval2._Myval2._Myhead->_Parent = v22;
          }
          else
          {
            v24 = v11->_Parent;
            if ( v11 == v24->_Right )
              v24->_Right = v22;
            else
              v24->_Left = v22;
          }
          v22->_Right = v11;
          v11->_Parent = v22;
        }
        v11->_Parent->_Color = 1;
        v11->_Parent->_Parent->_Color = 0;
        v18 = v11->_Parent->_Parent;
        v19 = v18->_Right;
        v18->_Right = v19->_Left;
        if ( !v19->_Left->_Isnil )
          v19->_Left->_Parent = v18;
        v19->_Parent = v18->_Parent;
        if ( v18 == this->_Mypair._Myval2._Myval2._Myhead->_Parent )
        {
          this->_Mypair._Myval2._Myval2._Myhead->_Parent = v19;
        }
        else
        {
          v25 = v18->_Parent;
          if ( v18 == v25->_Left )
            v25->_Left = v19;
          else
            v25->_Right = v19;
        }
        v19->_Left = v18;
        goto LABEL_51;
      }
      Parent->_Color = 1;
      Left->_Color = 1;
      v11->_Parent->_Parent->_Color = 0;
      v11 = v11->_Parent->_Parent;
    }
  }
  v26 = this->_Mypair._Myval2._Myval2._Myhead;
  result->_Ptr = _Node;
  v27 = v26->_Parent;
  v28 = result;
  v27->_Color = 1;
  return v28;
}

std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig> > > > *__fastcall std::_Tree<std::_Tmap_traits<std::string,extension::GFXIFontManager::LanguageConfig,std::less<std::string>,std::allocator<std::pair<std::string const,extension::GFXIFontManager::LanguageConfig>>,0>>::_Insert_hint<std::pair<std::string const,extension::GFXIFontManager::LanguageConfig> &,std::_Tree_node<std::pair<std::string const,extension::GFXIFontManager::LanguageConfig>,void *> *>(
        std::_Tree<std::_Tmap_traits<std::string,extension::GFXIFontManager::LanguageConfig,std::less<std::string >,std::allocator<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig> >,0> > *this,
        std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig> > > > *result,
        std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig> > > > _Where,
        std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig> *_Val,
        std::_Tree_node<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig>,void *> *_Newnode)
{
  std::_Tree_node<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig>,void *> *Myhead; // rsi
  bool v11; // r8
  std::_Tree_node<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig>,void *> *Right; // rbx
  std::_Tree_node<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig>,void *> *Ptr; // rax
  std::_Tree_node<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig>,void *> *Left; // rbx
  std::_Tree_node<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig>,void *> *j; // rax
  std::_Tree_node<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig>,void *> *i; // rcx
  std::_Tree_node<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig>,void *> *v17; // rbx
  std::_Tree_node<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig>,void *> *v18; // rax
  std::_Tree_node<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig>,void *> *m; // rax
  std::_Tree_node<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig>,void *> *k; // rax
  std::_Tree_node<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig>,void *> *v21; // [rsp+20h] [rbp-48h]
  std::pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig> > > >,bool> resulta; // [rsp+38h] [rbp-30h] BYREF

  if ( !this->_Mypair._Myval2._Myval2._Mysize )
  {
    std::_Tree<std::_Tmap_traits<std::string,extension::GFXIFontManager::LanguageConfig,std::less<std::string>,std::allocator<std::pair<std::string const,extension::GFXIFontManager::LanguageConfig>>,0>>::_Insert_at<std::pair<std::string const,extension::GFXIFontManager::LanguageConfig> &,std::_Tree_node<std::pair<std::string const,extension::GFXIFontManager::LanguageConfig>,void *> *>(
      this,
      result,
      1,
      this->_Mypair._Myval2._Myval2._Myhead,
      (std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig> *)v21,
      _Newnode);
    return result;
  }
  Myhead = this->_Mypair._Myval2._Myval2._Myhead;
  if ( _Where._Ptr == this->_Mypair._Myval2._Myval2._Myhead->_Left )
  {
    if ( std::string::compare((std::string *)&_Val->first, &_Where._Ptr->_Myval.first) < 0 )
    {
      std::_Tree<std::_Tmap_traits<std::string,extension::GFXIFontManager::LanguageConfig,std::less<std::string>,std::allocator<std::pair<std::string const,extension::GFXIFontManager::LanguageConfig>>,0>>::_Insert_at<std::pair<std::string const,extension::GFXIFontManager::LanguageConfig> &,std::_Tree_node<std::pair<std::string const,extension::GFXIFontManager::LanguageConfig>,void *> *>(
        this,
        result,
        1,
        _Where._Ptr,
        (std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig> *)v21,
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
      std::_Tree<std::_Tmap_traits<std::string,extension::GFXIFontManager::LanguageConfig,std::less<std::string>,std::allocator<std::pair<std::string const,extension::GFXIFontManager::LanguageConfig>>,0>>::_Insert_at<std::pair<std::string const,extension::GFXIFontManager::LanguageConfig> &,std::_Tree_node<std::pair<std::string const,extension::GFXIFontManager::LanguageConfig>,void *> *>(
        this,
        result,
        0,
        Right,
        (std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig> *)v21,
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
      result->_Ptr = (std::_Tree_node<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig>,void *> *)std::_Tree<std::_Tmap_traits<std::string,extension::GFXIFontManager::LanguageConfig,std::less<std::string>,std::allocator<std::pair<std::string const,extension::GFXIFontManager::LanguageConfig>>,0>>::_Insert_nohint<std::pair<std::string const,extension::GFXIFontManager::LanguageConfig> &,std::_Tree_node<std::pair<std::string const,extension::GFXIFontManager::LanguageConfig>,void *> *>(this, &resulta, v11, _Val, _Newnode)->first;
      return result;
    }
    if ( _Where._Ptr->_Right->_Isnil )
      std::_Tree<std::_Tmap_traits<std::string,extension::GFXIFontManager::LanguageConfig,std::less<std::string>,std::allocator<std::pair<std::string const,extension::GFXIFontManager::LanguageConfig>>,0>>::_Insert_at<std::pair<std::string const,extension::GFXIFontManager::LanguageConfig> &,std::_Tree_node<std::pair<std::string const,extension::GFXIFontManager::LanguageConfig>,void *> *>(
        this,
        result,
        0,
        _Where._Ptr,
        (std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig> *)v21,
        _Newnode);
    else
      std::_Tree<std::_Tmap_traits<std::string,extension::GFXIFontManager::LanguageConfig,std::less<std::string>,std::allocator<std::pair<std::string const,extension::GFXIFontManager::LanguageConfig>>,0>>::_Insert_at<std::pair<std::string const,extension::GFXIFontManager::LanguageConfig> &,std::_Tree_node<std::pair<std::string const,extension::GFXIFontManager::LanguageConfig>,void *> *>(
        this,
        result,
        1,
        v17,
        (std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig> *)v21,
        _Newnode);
    return result;
  }
  else
  {
    if ( Left->_Right->_Isnil )
      std::_Tree<std::_Tmap_traits<std::string,extension::GFXIFontManager::LanguageConfig,std::less<std::string>,std::allocator<std::pair<std::string const,extension::GFXIFontManager::LanguageConfig>>,0>>::_Insert_at<std::pair<std::string const,extension::GFXIFontManager::LanguageConfig> &,std::_Tree_node<std::pair<std::string const,extension::GFXIFontManager::LanguageConfig>,void *> *>(
        this,
        result,
        0,
        Left,
        (std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig> *)v21,
        _Newnode);
    else
      std::_Tree<std::_Tmap_traits<std::string,extension::GFXIFontManager::LanguageConfig,std::less<std::string>,std::allocator<std::pair<std::string const,extension::GFXIFontManager::LanguageConfig>>,0>>::_Insert_at<std::pair<std::string const,extension::GFXIFontManager::LanguageConfig> &,std::_Tree_node<std::pair<std::string const,extension::GFXIFontManager::LanguageConfig>,void *> *>(
        this,
        result,
        1,
        _Where._Ptr,
        (std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig> *)v21,
        _Newnode);
    return result;
  }
}

std::pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig> > > >,bool> *__fastcall std::_Tree<std::_Tmap_traits<std::string,extension::GFXIFontManager::LanguageConfig,std::less<std::string>,std::allocator<std::pair<std::string const,extension::GFXIFontManager::LanguageConfig>>,0>>::_Insert_nohint<std::pair<std::string const,extension::GFXIFontManager::LanguageConfig> &,std::_Tree_node<std::pair<std::string const,extension::GFXIFontManager::LanguageConfig>,void *> *>(
        std::_Tree<std::_Tmap_traits<std::string,extension::GFXIFontManager::LanguageConfig,std::less<std::string >,std::allocator<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig> >,0> > *this,
        std::pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig> > > >,bool> *result,
        bool _Leftish,
        std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig> *_Val,
        std::_Tree_node<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig>,void *> *_Newnode)
{
  std::_Tree<std::_Tmap_traits<std::string,extension::GFXIFontManager::LanguageConfig,std::less<std::string >,std::allocator<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig> >,0> > *v7; // rsi
  std::_Tree_node<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig>,void *> *Myhead; // rax
  std::_Tree_node<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig>,void *> *Parent; // rbx
  std::_Tree_node<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig>,void *> *v10; // r14
  BOOL v11; // edi
  unsigned __int64 Mysize; // r15
  char **p_Myval; // rdx
  std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig> *Ptr; // rcx
  size_t v15; // rsi
  size_t v16; // r8
  unsigned int v17; // edi
  std::_Tree_node<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig>,void *> *Right; // rbx
  std::_Tree_node<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig>,void *> *j; // rax
  std::_Tree_node<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig>,void *> *i; // rax
  std::_Tree_node<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig>,void *> *v22; // rdi
  extension::gfxi_detail::LanguageConfigImpl *m_ptr; // rcx
  std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig> *v24; // [rsp+20h] [rbp-48h]
  std::_Tree_node<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig>,void *> *v25; // [rsp+30h] [rbp-38h]
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig> > > > resulta; // [rsp+70h] [rbp+8h] BYREF

  resulta._Ptr = (std::_Tree_node<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig>,void *> *)this;
  v7 = this;
  Myhead = this->_Mypair._Myval2._Myval2._Myhead;
  v25 = this->_Mypair._Myval2._Myval2._Myhead;
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
        Ptr = (std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig> *)_Val->first._Mypair._Myval2._Bx._Ptr;
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
    Myhead = v25;
    v7 = (std::_Tree<std::_Tmap_traits<std::string,extension::GFXIFontManager::LanguageConfig,std::less<std::string >,std::allocator<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig> >,0> > *)resulta._Ptr;
  }
  Right = v10;
  if ( v11 )
  {
    if ( v10 == Myhead->_Left )
    {
      result->first = (std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig> > > >)std::_Tree<std::_Tmap_traits<std::string,extension::GFXIFontManager::LanguageConfig,std::less<std::string>,std::allocator<std::pair<std::string const,extension::GFXIFontManager::LanguageConfig>>,0>>::_Insert_at<std::pair<std::string const,extension::GFXIFontManager::LanguageConfig> &,std::_Tree_node<std::pair<std::string const,extension::GFXIFontManager::LanguageConfig>,void *> *>(v7, &resulta, 1, v10, v24, _Newnode)->_Ptr;
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
    m_ptr = _Newnode->_Myval.second.m_impl.m_ptr;
    if ( m_ptr )
      extension::RefCountable<extension::gfxi_detail::LanguageConfigImpl>::release(m_ptr);
    std::string::~string((std::string *)&v22->_Myval.first);
    operator delete(v22);
    result->first._Ptr = Right;
    result->second = 0;
    return result;
  }
  else
  {
    result->first = (std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig> > > >)std::_Tree<std::_Tmap_traits<std::string,extension::GFXIFontManager::LanguageConfig,std::less<std::string>,std::allocator<std::pair<std::string const,extension::GFXIFontManager::LanguageConfig>>,0>>::_Insert_at<std::pair<std::string const,extension::GFXIFontManager::LanguageConfig> &,std::_Tree_node<std::pair<std::string const,extension::GFXIFontManager::LanguageConfig>,void *> *>(v7, &resulta, v11, v10, v24, _Newnode)->_Ptr;
    result->second = 1;
    return result;
  }
}

std::_Tree_node<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig>,void *> *__fastcall std::_Tree<std::_Tmap_traits<std::string,unsigned int,std::less<std::string>,std::allocator<std::pair<std::string const,unsigned int>>,0>>::_Lbound<std::string>(
        std::_Tree<std::_Tmap_traits<std::string,extension::GFXIFontManager::LanguageConfig,std::less<std::string >,std::allocator<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig> >,0> > *this,
        const std::string *_Keyval)
{
  std::_Tree_node<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig>,void *> *Myhead; // r14
  std::_Tree_node<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig>,void *> *Parent; // rbx
  unsigned __int64 Mysize; // rbp
  unsigned __int64 Myres; // r15
  char **p_Myval; // rcx
  const std::string *Ptr; // rdx
  unsigned __int64 v9; // rdi
  size_t v10; // r8
  int v11; // eax

  Myhead = this->_Mypair._Myval2._Myval2._Myhead;
  Parent = this->_Mypair._Myval2._Myval2._Myhead->_Parent;
  if ( !Parent->_Isnil )
  {
    Mysize = _Keyval->_Mypair._Myval2._Mysize;
    Myres = _Keyval->_Mypair._Myval2._Myres;
    do
    {
      p_Myval = (char **)&Parent->_Myval;
      if ( Myres < 0x10 )
        Ptr = _Keyval;
      else
        Ptr = (const std::string *)_Keyval->_Mypair._Myval2._Bx._Ptr;
      if ( Parent->_Myval.first._Mypair._Myval2._Myres >= 0x10 )
        p_Myval = (char **)*p_Myval;
      v9 = Parent->_Myval.first._Mypair._Myval2._Mysize;
      v10 = Mysize;
      if ( v9 < Mysize )
        v10 = Parent->_Myval.first._Mypair._Myval2._Mysize;
      if ( v10 && (v11 = memcmp(p_Myval, Ptr, v10)) != 0 )
      {
        if ( v11 >= 0 )
          goto LABEL_17;
      }
      else if ( v9 >= Mysize )
      {
LABEL_17:
        Myhead = Parent;
        Parent = Parent->_Left;
        continue;
      }
      Parent = Parent->_Right;
    }
    while ( !Parent->_Isnil );
  }
  return Myhead;
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

void __fastcall extension::GFXIFontManager::FontStates::FontStates(extension::GFXIFontManager::FontStates *this)
{
  std::string *p_m_translateLangName; // rcx
  std::string *Ptr; // rax

  this->m_fontLib.pObject = 0i64;
  this->m_fontMap.pObject = 0i64;
  this->m_fontFiles._Mypair._Myval2._Myfirst = 0i64;
  this->m_fontFiles._Mypair._Myval2._Mylast = 0i64;
  this->m_fontFiles._Mypair._Myval2._Myend = 0i64;
  p_m_translateLangName = &this->m_translateLangName;
  p_m_translateLangName->_Mypair._Myval2._Myres = 15i64;
  p_m_translateLangName->_Mypair._Myval2._Mysize = 0i64;
  if ( p_m_translateLangName->_Mypair._Myval2._Myres < 0x10 )
    Ptr = p_m_translateLangName;
  else
    Ptr = (std::string *)p_m_translateLangName->_Mypair._Myval2._Bx._Ptr;
  Ptr->_Mypair._Myval2._Bx._Buf[0] = 0;
  std::string::assign(p_m_translateLangName, "Unknown Language", 0x10ui64);
}

void __fastcall extension::GFXIFontManager::GFXIFontManager(extension::GFXIFontManager *this)
{
  extension::gfxi_detail::CustomDrawTextManager *v1; // rax
  std::_Tree_comp_alloc<std::_Tmap_traits<std::string,extension::GFXIFontManager::LanguageConfig,std::less<std::string >,std::allocator<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig> >,0> > *v2; // rcx
  Scaleform::GFx::DrawTextManager *v3; // rax
  extension::GFXILoader *v4; // rax
  extension::gfxi_detail::CustomFontProvider *pObject; // rbx
  extension::GFXILoader *v6; // rax

  extension::GFXISystem::GFXISystem(&the_instance_3);
  the_instance_3.m_recursiveLockCount = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)&the_instance_3.m_agMutex);
  extension::gfxi_detail::TranslatorImpl::Create(&the_instance_3.m_translatorImpl);
  extension::gfxi_detail::CustomFontProvider::Create(&the_instance_3.m_fontProvider);
  v1 = (extension::gfxi_detail::CustomDrawTextManager *)Scaleform::Memory::pGlobalHeap->Alloc(
                                                          Scaleform::Memory::pGlobalHeap,
                                                          40i64,
                                                          0i64);
  if ( v1 )
    extension::gfxi_detail::CustomDrawTextManager::CustomDrawTextManager(v1);
  else
    v3 = 0i64;
  the_instance_3.m_drawTextManager.pObject = v3;
  the_instance_3.m_langConfigMap._Mypair._Myval2._Myval2._Myhead = 0i64;
  the_instance_3.m_langConfigMap._Mypair._Myval2._Myval2._Mysize = 0i64;
  the_instance_3.m_langConfigMap._Mypair._Myval2._Myval2._Myhead = std::_Tree_comp_alloc<std::_Tmap_traits<std::string,CSteamID,std::less<void>,std::allocator<std::pair<std::string const,CSteamID>>,0>>::_Buyheadnode(v2);
  the_instance_3.m_fontFileLocation._Mypair._Myval2._Myres = 15i64;
  the_instance_3.m_fontFileLocation._Mypair._Myval2._Mysize = 0i64;
  the_instance_3.m_fontFileLocation._Mypair._Myval2._Bx._Buf[0] = 0;
  the_instance_3.m_currentLangName._Mypair._Myval2._Myres = 15i64;
  the_instance_3.m_currentLangName._Mypair._Myval2._Mysize = 0i64;
  the_instance_3.m_currentLangName._Mypair._Myval2._Bx._Buf[0] = 0;
  the_instance_3.m_currentLanguage = -1;
  the_instance_3.m_currentLanguageConfig.m_ptr = 0i64;
  extension::GFXIFontManager::FontStates::FontStates(&the_instance_3.m_currentFontStates);
  extension::GFXIFontManager::FontStates::FontStates(&the_instance_3.m_pendingFontStates);
  the_instance_3.m_isSaveDataTracking = 0;
  if ( extension::GFXILoader::Instance()->m_loader._Mypair._Myval2 )
  {
    v4 = extension::GFXILoader::Instance();
    v4->m_loader._Mypair._Myval2->SetState(
      v4->m_loader._Mypair._Myval2,
      State_BlendMode,
      the_instance_3.m_translatorImpl.pObject);
    pObject = the_instance_3.m_fontProvider.pObject;
    v6 = extension::GFXILoader::Instance();
    v6->m_loader._Mypair._Myval2->SetState(v6->m_loader._Mypair._Myval2, State_ProjectionMatrix3D|0x10, pObject);
  }
  the_instance_3.m_drawTextManager.pObject->SetState(
    &the_instance_3.m_drawTextManager.pObject->Scaleform::GFx::StateBag,
    State_ProjectionMatrix3D|0x10,
    the_instance_3.m_fontProvider.pObject);
}

void __fastcall extension::GFXIFontManager::LanguageConfig::LanguageConfig(
        extension::GFXIFontManager::LanguageConfig *this)
{
  extension::gfxi_detail::LanguageConfigImpl *v2; // rbx
  Scaleform::GFx::FontMap *v3; // rdi
  Scaleform::GFx::FontMap *v4; // rax
  Scaleform::GFx::FontMap *v5; // rax

  v2 = (extension::gfxi_detail::LanguageConfigImpl *)operator new(0x28ui64);
  v2->m_refCount.m_value._My_val = 1i64;
  v3 = 0i64;
  v2->m_fontFileNames._Mypair._Myval2._Myfirst = 0i64;
  v2->m_fontFileNames._Mypair._Myval2._Mylast = 0i64;
  v2->m_fontFileNames._Mypair._Myval2._Myend = 0i64;
  v4 = (Scaleform::GFx::FontMap *)Scaleform::Memory::pGlobalHeap->Alloc(Scaleform::Memory::pGlobalHeap, 32i64, 0i64);
  if ( v4 )
  {
    Scaleform::GFx::FontMap::FontMap(v4);
    v3 = v5;
  }
  v2->m_fontMap.pObject = v3;
  this->m_impl.m_ptr = v2;
}

// attributes: thunk
void __fastcall Scaleform::Render::ContextImpl::DisplayHandle<Scaleform::Render::TreeRoot>::~DisplayHandle<Scaleform::Render::TreeRoot>(
        Scaleform::Render::ContextImpl::DisplayHandle<Scaleform::Render::TreeRoot> *this)
{
  Scaleform::Render::ContextImpl::RTHandle::~RTHandle(this);
}

void __fastcall extension::ExLockable<extension::GFXIFontManager>::~ExLockable<extension::GFXIFontManager>(
        extension::ExLockable<extension::GFXIFontManager> *this)
{
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->m_agMutex);
}

void __fastcall extension::ExLockableLock<extension::ExLockable<extension::ExMutex>>::~ExLockableLock<extension::ExLockable<extension::ExMutex>>(
        extension::ExLockableLock<extension::ExLockable<extension::GFXIFontManager> > *this)
{
  extension::lockable_detail::LockUnlock(this->m_associated, -this->m_ownsLockCount);
}

void __fastcall Scaleform::Ptr<Scaleform::GFx::DrawTextManager>::~Ptr<Scaleform::GFx::DrawTextManager>(
        Scaleform::Ptr<Scaleform::GFx::DrawTextManager> *this)
{
  Scaleform::GFx::DrawTextManager *pObject; // rcx

  pObject = this->pObject;
  if ( pObject )
    Scaleform::RefCountNTSImpl::Release(pObject);
}

void __fastcall Scaleform::Ptr<Scaleform::GFx::ExternalInterface>::~Ptr<Scaleform::GFx::ExternalInterface>(
        Scaleform::Ptr<Scaleform::Render::ThreadCommand> *this)
{
  Scaleform::RefCountVImpl *pObject; // rcx

  pObject = (Scaleform::RefCountVImpl *)this->pObject;
  if ( pObject )
    Scaleform::RefCountImpl::Release(pObject);
}

void __fastcall extension::RefCountablePtr<extension::gfxi_detail::LanguageConfigImpl>::~RefCountablePtr<extension::gfxi_detail::LanguageConfigImpl>(
        extension::RefCountablePtr<extension::gfxi_detail::LanguageConfigImpl> *this)
{
  extension::gfxi_detail::LanguageConfigImpl *m_ptr; // rcx

  m_ptr = this->m_ptr;
  if ( m_ptr )
    extension::RefCountable<extension::gfxi_detail::LanguageConfigImpl>::release(m_ptr);
}

void __fastcall std::map<std::string,extension::GFXIFontManager::LanguageConfig>::~map<std::string,extension::GFXIFontManager::LanguageConfig>(
        std::map<std::string,extension::GFXIFontManager::LanguageConfig> *this)
{
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig> > > > result; // [rsp+30h] [rbp+8h] BYREF

  std::_Tree<std::_Tmap_traits<std::string,extension::GFXIFontManager::LanguageConfig,std::less<std::string>,std::allocator<std::pair<std::string const,extension::GFXIFontManager::LanguageConfig>>,0>>::erase(
    this,
    &result,
    (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig> > > >)this->_Mypair._Myval2._Myval2._Myhead->_Left,
    (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig> > > >)this->_Mypair._Myval2._Myval2._Myhead);
  operator delete(this->_Mypair._Myval2._Myval2._Myhead);
}

// attributes: thunk
void __fastcall std::vector<extension::BasicFutureObject<OGLMirror,void>>::~vector<extension::BasicFutureObject<OGLMirror,void>>(
        std::vector<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>> *this)
{
  std::vector<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>>::_Tidy(this);
}

void __fastcall extension::GFXIFontManager::FontStates::~FontStates(extension::GFXIFontManager::FontStates *this)
{
  Scaleform::RefCountVImpl *pObject; // rcx

  std::string::~string(&this->m_translateLangName);
  std::vector<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>>::_Tidy((std::vector<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>> *)&this->m_fontFiles);
  pObject = (Scaleform::RefCountVImpl *)this->m_fontMap.pObject;
  if ( pObject )
    Scaleform::RefCountImpl::Release(pObject);
  if ( this->m_fontLib.pObject )
    Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)this->m_fontLib.pObject);
}

void __fastcall extension::GFXIFontManager::~GFXIFontManager(extension::GFXIFontManager *this)
{
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig> > > > result; // [rsp+40h] [rbp+8h] BYREF

  result._Ptr = (std::_Tree_node<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig>,void *> *)this;
  std::string::~string(&the_instance_3.m_pendingFontStates.m_translateLangName);
  std::vector<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>>::_Tidy((std::vector<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>> *)&the_instance_3.m_pendingFontStates.m_fontFiles);
  if ( the_instance_3.m_pendingFontStates.m_fontMap.pObject )
    Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)the_instance_3.m_pendingFontStates.m_fontMap.pObject);
  if ( the_instance_3.m_pendingFontStates.m_fontLib.pObject )
    Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)the_instance_3.m_pendingFontStates.m_fontLib.pObject);
  std::string::~string(&the_instance_3.m_currentFontStates.m_translateLangName);
  std::vector<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>>::_Tidy((std::vector<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>> *)&the_instance_3.m_currentFontStates.m_fontFiles);
  if ( the_instance_3.m_currentFontStates.m_fontMap.pObject )
    Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)the_instance_3.m_currentFontStates.m_fontMap.pObject);
  if ( the_instance_3.m_currentFontStates.m_fontLib.pObject )
    Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)the_instance_3.m_currentFontStates.m_fontLib.pObject);
  if ( the_instance_3.m_currentLanguageConfig.m_ptr )
    extension::RefCountable<extension::gfxi_detail::LanguageConfigImpl>::release(the_instance_3.m_currentLanguageConfig.m_ptr);
  std::string::~string(&the_instance_3.m_currentLangName);
  std::string::~string(&the_instance_3.m_fontFileLocation);
  std::_Tree<std::_Tmap_traits<std::string,extension::GFXIFontManager::LanguageConfig,std::less<std::string>,std::allocator<std::pair<std::string const,extension::GFXIFontManager::LanguageConfig>>,0>>::erase(
    &the_instance_3.m_langConfigMap,
    &result,
    (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig> > > >)the_instance_3.m_langConfigMap._Mypair._Myval2._Myval2._Myhead->_Left,
    (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig> > > >)the_instance_3.m_langConfigMap._Mypair._Myval2._Myval2._Myhead);
  operator delete(the_instance_3.m_langConfigMap._Mypair._Myval2._Myval2._Myhead);
  if ( the_instance_3.m_drawTextManager.pObject )
    Scaleform::RefCountNTSImpl::Release(the_instance_3.m_drawTextManager.pObject);
  if ( the_instance_3.m_fontProvider.pObject )
    Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)the_instance_3.m_fontProvider.pObject);
  if ( the_instance_3.m_translatorImpl.pObject )
    Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)the_instance_3.m_translatorImpl.pObject);
  DeleteCriticalSection((LPCRITICAL_SECTION)&the_instance_3.m_agMutex);
  if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(&extension::GFXISystem::s_initializeCount.Value, -1) == 1 )
  {
    Scaleform::GFx::System::Destroy();
    if ( the_instance_3.m_pAllocator )
    {
      ((void (__fastcall *)(extension::KofSysAlloc *, __int64))the_instance_3.m_pAllocator->~SysAllocBase)(
        the_instance_3.m_pAllocator,
        1i64);
      the_instance_3.m_pAllocator = 0i64;
    }
  }
}

Scaleform::Ptr<extension::gfxi_detail::TranslatorImpl> *__fastcall extension::gfxi_detail::TranslatorImpl::Create(
        Scaleform::Ptr<extension::gfxi_detail::TranslatorImpl> *result)
{
  extension::gfxi_detail::TranslatorImpl *v2; // rax

  v2 = (extension::gfxi_detail::TranslatorImpl *)Scaleform::Memory::pGlobalHeap->Alloc(
                                                   Scaleform::Memory::pGlobalHeap,
                                                   10280i64,
                                                   0i64);
  if ( v2 )
  {
    v2->SType = State_BlendMode;
    v2->__vftable = (extension::gfxi_detail::TranslatorImpl_vtbl *)&Scaleform::RefCountImplCore::`vftable';
    v2->__vftable = (extension::gfxi_detail::TranslatorImpl_vtbl *)&extension::gfxi_detail::TranslatorImpl::`vftable';
    v2->RefCount = 1;
    *(_QWORD *)&v2->m_translateLanguage = 1i64;
    v2->WWMode = 128;
    result->pObject = v2;
  }
  else
  {
    result->pObject = 0i64;
  }
  return result;
}

_BOOL8 __fastcall extension::gfxi_detail::TranslatorImpl::ExchangeImageTag(
        extension::gfxi_detail::TranslatorImpl *this,
        char *exchanged)
{
  extension::gfxi_detail::TranslatorImpl *v2; // r15
  bool v3; // bl
  extension::gfxi_detail::TranslatorImpl *m_lastUsedContHWType; // rcx
  AgControllerType m_lastUsedContType; // er14
  __int64 v7; // r12
  const char *v8; // r9
  extension::gfxi_detail::TranslatorImpl *v9; // rcx
  const char *v10; // r9
  char *v11; // rcx
  extension::gfxi_detail::TranslatorImpl *v12; // rcx
  int v13; // edi
  __int64 v14; // rsi
  __int64 v15; // rax
  char *v16; // rax
  __int64 v17; // r14
  const char **v18; // rsi
  __int64 v19; // r14
  extension::gfxi_detail::TranslatorImpl *v20; // rcx
  char *v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rsi
  extension::gfxi_detail::TranslatorImpl *v24; // rcx
  __int64 v25; // rax

  v2 = this;
  v3 = 0;
  m_lastUsedContHWType = (extension::gfxi_detail::TranslatorImpl *)(unsigned int)Framework::GLManager::glm->m_controllerContext.m_lastUsedContHWType;
  m_lastUsedContType = Framework::GLManager::glm->m_controllerContext.m_lastUsedContType;
  if ( (int)m_lastUsedContHWType >= 3 )
  {
    if ( (int)m_lastUsedContHWType <= 4 )
    {
      v7 = 2i64;
      goto LABEL_7;
    }
    if ( (_DWORD)m_lastUsedContHWType == 5 )
    {
      v7 = 3i64;
      goto LABEL_7;
    }
  }
  v7 = 1i64;
LABEL_7:
  if ( m_lastUsedContType == AgControllerType_Gamepad )
  {
    v8 = *(const char **)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataBase[5][8 * v7 + 40];
    if ( v8 )
    {
      if ( extension::gfxi_detail::TranslatorImpl::ExeExchangeImageTag(m_lastUsedContHWType, exchanged, "[OK]", v8) )
        v3 = 1;
    }
    else
    {
      v3 = extension::gfxi_detail::TranslatorImpl::ExeExchangeImageTag_ID(
             m_lastUsedContHWType,
             exchanged,
             "[OK]",
             *(AgGamepadButton *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataBase[0][16]);
    }
    v10 = *(const char **)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataBase[5][8 * v7 + 8];
    if ( v10 )
    {
      if ( extension::gfxi_detail::TranslatorImpl::ExeExchangeImageTag(v9, exchanged, "[CANCEL]", v10) )
        v3 = 1;
    }
    else if ( extension::gfxi_detail::TranslatorImpl::ExeExchangeImageTag_ID(
                v9,
                exchanged,
                "[CANCEL]",
                *(AgGamepadButton *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataBase[0][0]) )
    {
      v3 = 1;
    }
  }
  else
  {
    v3 = extension::gfxi_detail::TranslatorImpl::ExeExchangeImageTag(
           m_lastUsedContHWType,
           exchanged,
           "[OK]",
           *(const char **)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataBase[0][16]);
    if ( extension::gfxi_detail::TranslatorImpl::ExeExchangeImageTag(
           v12,
           exchanged,
           "[CANCEL]",
           *(const char **)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataBase[0][0]) )
    {
      v3 = 1;
    }
  }
  v13 = 0;
  if ( *(_QWORD *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataBase[22][40] )
  {
    v14 = 0i64;
    v11 = &extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataBase[22][40];
    v15 = 0i64;
    do
    {
      if ( extension::gfxi_detail::TranslatorImpl::ExeExchangeImageTag(
             (extension::gfxi_detail::TranslatorImpl *)v11,
             exchanged,
             *(const char **)v11,
             *(const char **)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataBase[22][v15 + 48]) )
      {
        v3 = 1;
      }
      ++v14;
      v15 = 16 * v14;
      v11 = &extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataBase[22][16 * v14 + 40];
    }
    while ( *(_QWORD *)v11 );
    v2 = this;
  }
  if ( m_lastUsedContType == AgControllerType_Gamepad )
  {
    if ( *(_QWORD *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataBase[4][8] )
    {
      v16 = &extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataBase[4][8];
      v17 = 0i64;
      v18 = (const char **)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataBase[4][8 * v7 + 8];
      do
      {
        if ( *v18
          && extension::gfxi_detail::TranslatorImpl::ExeExchangeImageTag(
               (extension::gfxi_detail::TranslatorImpl *)v11,
               exchanged,
               *(const char **)v16,
               *v18) )
        {
          v3 = 1;
        }
        ++v17;
        v18 += 4;
        v16 = &extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataBase[4][32 * v17 + 8];
      }
      while ( *(_QWORD *)v16 );
    }
    if ( extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.__vftable )
    {
      v19 = 0i64;
      v20 = &extension::gfxi_detail::_exchange_table_generic_gamepad_buttons;
      v21 = &extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataBase[4][8 * v7 + 8];
      v22 = 0i64;
      do
      {
        if ( !*(_QWORD *)v21
          && extension::gfxi_detail::TranslatorImpl::ExeExchangeImageTag_ID(
               v20,
               exchanged,
               (const char *)v20->__vftable,
               *(AgGamepadButton *)((char *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.RefCount
                                  + v22)) )
        {
          v3 = 1;
        }
        ++v19;
        v21 += 32;
        v22 = 16 * v19;
        v20 = (extension::gfxi_detail::TranslatorImpl *)((char *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons
                                                       + 16 * v19);
      }
      while ( v20->__vftable );
      v2 = this;
    }
  }
  else if ( extension::gfxi_detail::_exchage_table_keyboard.__vftable )
  {
    v23 = 0i64;
    v24 = (extension::gfxi_detail::TranslatorImpl *)&extension::gfxi_detail::_exchage_table_keyboard;
    v25 = 0i64;
    do
    {
      if ( extension::gfxi_detail::TranslatorImpl::ExeExchangeImageTag(
             v24,
             exchanged,
             (const char *)v24->__vftable,
             *(const char **)((char *)&extension::gfxi_detail::_exchage_table_keyboard.RefCount + v25)) )
      {
        v3 = 1;
      }
      ++v23;
      v25 = 16 * v23;
      v24 = (extension::gfxi_detail::TranslatorImpl *)((char *)&extension::gfxi_detail::_exchage_table_keyboard
                                                     + 16 * v23);
    }
    while ( v24->__vftable );
  }
  if ( v2->m_exchangedUserDataLength > 0 )
  {
    do
    {
      if ( extension::gfxi_detail::TranslatorImpl::ExeExchangeImageTag(
             (extension::gfxi_detail::TranslatorImpl *)((__int64)v13 << 6),
             exchanged,
             v2->m_exchangedUserDataBase[(__int64)v13],
             v2->m_exchangedUserDataChange[(__int64)v13]) )
      {
        v3 = 1;
      }
      ++v13;
    }
    while ( v13 < v2->m_exchangedUserDataLength );
  }
  return v3;
}

__int64 __fastcall extension::gfxi_detail::TranslatorImpl::ExeExchangeImageTag(
        extension::gfxi_detail::TranslatorImpl *this,
        char *exchanged,
        const char *from,
        const char *to)
{
  char *v6; // r12
  unsigned __int8 v7; // r13
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // r8
  unsigned __int64 Mysize; // r14
  std::string *Ptr; // r15
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rdi
  std::string *v15; // rsi
  char *v16; // rax
  char *v17; // rbx
  std::string *v18; // rax
  std::string *v19; // r15
  unsigned __int64 v20; // rdi
  std::string *v21; // rsi
  char *i; // rsi
  char *v23; // rax
  char *v24; // rbx
  std::string *v25; // rax
  std::string *v26; // rcx
  char v27; // al
  char *v28; // rcx
  char *v29; // rax
  char *v30; // rcx
  char *v31; // rcx
  __int64 v33; // [rsp+30h] [rbp-49h]
  std::string v34; // [rsp+38h] [rbp-41h] BYREF
  std::string v35; // [rsp+58h] [rbp-21h] BYREF
  std::string _Right; // [rsp+78h] [rbp-1h] BYREF

  HIBYTE(v33) = -1;
  v6 = exchanged;
  v7 = 0;
  v34._Mypair._Myval2._Myres = 15i64;
  v34._Mypair._Myval2._Mysize = 0i64;
  v34._Mypair._Myval2._Bx._Buf[0] = 0;
  if ( *exchanged )
  {
    v8 = -1i64;
    do
      ++v8;
    while ( exchanged[v8] );
  }
  else
  {
    v8 = 0i64;
  }
  std::string::assign(&v34, exchanged, v8);
  v35._Mypair._Myval2._Myres = 15i64;
  v35._Mypair._Myval2._Mysize = 0i64;
  v35._Mypair._Myval2._Bx._Buf[0] = 0;
  if ( *from )
  {
    v9 = -1i64;
    do
      ++v9;
    while ( from[v9] );
  }
  else
  {
    v9 = 0i64;
  }
  std::string::assign(&v35, from, v9);
  _Right._Mypair._Myval2._Myres = 15i64;
  _Right._Mypair._Myval2._Mysize = 0i64;
  _Right._Mypair._Myval2._Bx._Buf[0] = 0;
  if ( *to )
  {
    v10 = -1i64;
    do
      ++v10;
    while ( to[v10] );
  }
  else
  {
    v10 = 0i64;
  }
  std::string::assign(&_Right, to, v10);
  Mysize = v35._Mypair._Myval2._Mysize;
  Ptr = &v35;
  if ( v35._Mypair._Myval2._Myres >= 0x10 )
    Ptr = (std::string *)v35._Mypair._Myval2._Bx._Ptr;
  if ( !v35._Mypair._Myval2._Mysize )
  {
    v13 = 0i64;
LABEL_31:
    v7 = 1;
    do
    {
      std::string::replace(&v34, v13, Mysize, &_Right, 0i64, 0xFFFFFFFFFFFFFFFFui64);
      v13 += _Right._Mypair._Myval2._Mysize;
      Mysize = v35._Mypair._Myval2._Mysize;
      v19 = &v35;
      if ( v35._Mypair._Myval2._Myres >= 0x10 )
        v19 = (std::string *)v35._Mypair._Myval2._Bx._Ptr;
      if ( v35._Mypair._Myval2._Mysize || v13 > v34._Mypair._Myval2._Mysize )
      {
        if ( v13 >= v34._Mypair._Myval2._Mysize || v35._Mypair._Myval2._Mysize > v34._Mypair._Myval2._Mysize - v13 )
        {
LABEL_50:
          v13 = -1i64;
        }
        else
        {
          v20 = 1 - v35._Mypair._Myval2._Mysize + v34._Mypair._Myval2._Mysize - v13;
          v21 = &v34;
          if ( v34._Mypair._Myval2._Myres >= 0x10 )
            v21 = (std::string *)v34._Mypair._Myval2._Bx._Ptr;
          for ( i = &v21->_Mypair._Myval2._Bx._Buf[v13]; ; i = v24 + 1 )
          {
            if ( !v20 || (v23 = (char *)memchr(i, v19->_Mypair._Myval2._Bx._Buf[0], v20), (v24 = v23) == 0i64) )
            {
              Mysize = v35._Mypair._Myval2._Mysize;
              goto LABEL_50;
            }
            if ( !Mysize || !memcmp(v23, v19, Mysize) )
              break;
            v20 += i - v24 - 1;
          }
          v25 = &v34;
          if ( v34._Mypair._Myval2._Myres >= 0x10 )
            v25 = (std::string *)v34._Mypair._Myval2._Bx._Ptr;
          v13 = v24 - (char *)v25;
          Mysize = v35._Mypair._Myval2._Mysize;
        }
      }
    }
    while ( v13 != -1i64 );
    v26 = &v34;
    if ( v34._Mypair._Myval2._Myres >= 0x10 )
      v26 = (std::string *)v34._Mypair._Myval2._Bx._Ptr;
    do
    {
      v27 = v26->_Mypair._Myval2._Bx._Buf[0];
      *v6 = v26->_Mypair._Myval2._Bx._Buf[0];
      v26 = (std::string *)((char *)v26 + 1);
      ++v6;
    }
    while ( v27 );
    goto LABEL_55;
  }
  if ( v34._Mypair._Myval2._Mysize && v35._Mypair._Myval2._Mysize <= v34._Mypair._Myval2._Mysize )
  {
    v14 = v34._Mypair._Myval2._Mysize - v35._Mypair._Myval2._Mysize + 1;
    v15 = &v34;
    if ( v34._Mypair._Myval2._Myres >= 0x10 )
      v15 = (std::string *)v34._Mypair._Myval2._Bx._Ptr;
    while ( 1 )
    {
      if ( !v14 || (v16 = (char *)memchr(v15, Ptr->_Mypair._Myval2._Bx._Buf[0], v14), (v17 = v16) == 0i64) )
      {
        Mysize = v35._Mypair._Myval2._Mysize;
        goto LABEL_29;
      }
      if ( !memcmp(v16, Ptr, Mysize) )
        break;
      v14 += (char *)v15 - v17 - 1;
      v15 = (std::string *)(v17 + 1);
    }
    v18 = &v34;
    if ( v34._Mypair._Myval2._Myres >= 0x10 )
      v18 = (std::string *)v34._Mypair._Myval2._Bx._Ptr;
    v13 = v17 - (char *)v18;
    Mysize = v35._Mypair._Myval2._Mysize;
  }
  else
  {
LABEL_29:
    v13 = -1i64;
  }
  if ( v13 != -1i64 )
    goto LABEL_31;
LABEL_55:
  if ( _Right._Mypair._Myval2._Myres >= 0x10 )
  {
    v28 = _Right._Mypair._Myval2._Bx._Ptr;
    if ( _Right._Mypair._Myval2._Myres + 1 >= 0x1000 )
    {
      if ( (_Right._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
        invalid_parameter_noinfo_noreturn();
      v29 = (char *)*((_QWORD *)_Right._Mypair._Myval2._Bx._Ptr - 1);
      if ( v29 >= _Right._Mypair._Myval2._Bx._Ptr )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(_Right._Mypair._Myval2._Bx._Ptr - v29) < (char *)8 )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(_Right._Mypair._Myval2._Bx._Ptr - v29) > (char *)0x27 )
        invalid_parameter_noinfo_noreturn();
      v28 = (char *)*((_QWORD *)_Right._Mypair._Myval2._Bx._Ptr - 1);
    }
    operator delete(v28);
  }
  _Right._Mypair._Myval2._Myres = 15i64;
  _Right._Mypair._Myval2._Mysize = 0i64;
  _Right._Mypair._Myval2._Bx._Buf[0] = 0;
  if ( v35._Mypair._Myval2._Myres >= 0x10 )
  {
    v30 = v35._Mypair._Myval2._Bx._Ptr;
    if ( v35._Mypair._Myval2._Myres + 1 >= 0x1000 )
    {
      if ( (v35._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
        invalid_parameter_noinfo_noreturn();
      v30 = (char *)*((_QWORD *)v35._Mypair._Myval2._Bx._Ptr - 1);
      if ( v30 >= v35._Mypair._Myval2._Bx._Ptr )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(v35._Mypair._Myval2._Bx._Ptr - v30) < (char *)8 )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(v35._Mypair._Myval2._Bx._Ptr - v30) > (char *)0x27 )
        invalid_parameter_noinfo_noreturn();
    }
    operator delete(v30);
  }
  v35._Mypair._Myval2._Myres = 15i64;
  v35._Mypair._Myval2._Mysize = 0i64;
  v35._Mypair._Myval2._Bx._Buf[0] = 0;
  if ( v34._Mypair._Myval2._Myres >= 0x10 )
  {
    v31 = v34._Mypair._Myval2._Bx._Ptr;
    if ( v34._Mypair._Myval2._Myres + 1 >= 0x1000 )
    {
      if ( (v34._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
        invalid_parameter_noinfo_noreturn();
      v31 = (char *)*((_QWORD *)v34._Mypair._Myval2._Bx._Ptr - 1);
      if ( v31 >= v34._Mypair._Myval2._Bx._Ptr )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(v34._Mypair._Myval2._Bx._Ptr - v31) < (char *)8 )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(v34._Mypair._Myval2._Bx._Ptr - v31) > (char *)0x27 )
        invalid_parameter_noinfo_noreturn();
    }
    operator delete(v31);
  }
  return v7;
}

char __fastcall extension::gfxi_detail::TranslatorImpl::ExeExchangeImageTag_ID(
        extension::gfxi_detail::TranslatorImpl *this,
        char *exchanged,
        const char *from,
        AgGamepadButton to)
{
  char *v5; // r12
  std::_Tree_node<std::pair<enum AgGamepadButton const ,int>,void *> *Myhead; // rcx
  std::_Tree_node<std::pair<enum AgGamepadButton const ,int>,void *> *Parent; // r8
  std::_Tree_node<std::pair<enum AgGamepadButton const ,int>,void *> *v8; // rax
  int second; // edi
  char v10; // r13
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // r8
  unsigned __int64 Mysize; // rax
  unsigned __int64 Myres; // rdx
  std::string *p_Right; // rax
  std::string *Ptr; // rcx
  std::string *v17; // rax
  const std::string *v18; // rax
  char *v19; // rcx
  char *v20; // rax
  char *v21; // rcx
  char *v22; // rax
  unsigned __int64 v23; // r14
  std::string *v24; // r15
  unsigned __int64 v25; // rbx
  unsigned __int64 v26; // rdi
  std::string *v27; // rsi
  char *v28; // rax
  char *v29; // rbx
  std::string *v30; // rax
  std::string *v31; // r15
  unsigned __int64 v32; // rdi
  std::string *v33; // rsi
  char *i; // rsi
  char *v35; // rax
  char *v36; // rbx
  std::string *v37; // rax
  std::string *v38; // rcx
  char v39; // al
  char *v40; // rcx
  char *v41; // rax
  std::string _Right; // [rsp+38h] [rbp-81h] BYREF
  std::string v44; // [rsp+58h] [rbp-61h] BYREF
  std::string v45; // [rsp+78h] [rbp-41h] BYREF
  std::string v46; // [rsp+98h] [rbp-21h] BYREF
  std::string result; // [rsp+B8h] [rbp-1h] BYREF

  v5 = exchanged;
  Myhead = Framework::GLManager::glm->m_controllerContext.m_genericMappings.m_buttonIdLUT._Mypair._Myval2._Myval2._Myhead;
  Parent = Myhead->_Parent;
  v8 = Myhead;
  while ( !Parent->_Isnil )
  {
    if ( Parent->_Myval.first >= to )
    {
      v8 = Parent;
      Parent = Parent->_Left;
    }
    else
    {
      Parent = Parent->_Right;
    }
  }
  if ( v8 == Myhead || to < v8->_Myval.first )
    v8 = Framework::GLManager::glm->m_controllerContext.m_genericMappings.m_buttonIdLUT._Mypair._Myval2._Myval2._Myhead;
  if ( v8 == Myhead )
    return 0;
  second = v8->_Myval.second;
  if ( second == -1 )
    return 0;
  v10 = 0;
  v44._Mypair._Myval2._Myres = 15i64;
  v44._Mypair._Myval2._Mysize = 0i64;
  v44._Mypair._Myval2._Bx._Buf[0] = 0;
  if ( *exchanged )
  {
    v11 = -1i64;
    do
      ++v11;
    while ( exchanged[v11] );
  }
  else
  {
    v11 = 0i64;
  }
  std::string::assign(&v44, exchanged, v11);
  v45._Mypair._Myval2._Myres = 15i64;
  v45._Mypair._Myval2._Mysize = 0i64;
  v45._Mypair._Myval2._Bx._Buf[0] = 0;
  if ( *from )
  {
    v12 = -1i64;
    do
      ++v12;
    while ( from[v12] );
  }
  else
  {
    v12 = 0i64;
  }
  std::string::assign(&v45, from, v12);
  _Right._Mypair._Myval2._Myres = 15i64;
  _Right._Mypair._Myval2._Mysize = 0i64;
  _Right._Mypair._Myval2._Bx._Buf[0] = 0;
  std::string::assign(&_Right, "<img src='btn_gamepad_", 0x16ui64);
  if ( second < 9 )
  {
    Mysize = _Right._Mypair._Myval2._Mysize;
    Myres = _Right._Mypair._Myval2._Myres;
    if ( _Right._Mypair._Myval2._Mysize == _Right._Mypair._Myval2._Myres )
    {
      if ( _Right._Mypair._Myval2._Mysize == -2i64 )
        std::_Xlength_error("string too long");
      if ( _Right._Mypair._Myval2._Myres < _Right._Mypair._Myval2._Mysize + 1 )
      {
        std::string::_Copy(&_Right, _Right._Mypair._Myval2._Mysize + 1, _Right._Mypair._Myval2._Mysize);
LABEL_29:
        Mysize = _Right._Mypair._Myval2._Mysize;
        Myres = _Right._Mypair._Myval2._Myres;
        goto LABEL_30;
      }
      if ( _Right._Mypair._Myval2._Mysize == -1i64 )
      {
        _Right._Mypair._Myval2._Mysize = 0i64;
        p_Right = &_Right;
        if ( _Right._Mypair._Myval2._Myres >= 0x10 )
          p_Right = (std::string *)_Right._Mypair._Myval2._Bx._Ptr;
        p_Right->_Mypair._Myval2._Bx._Buf[0] = 0;
        goto LABEL_29;
      }
    }
LABEL_30:
    Ptr = &_Right;
    if ( Myres >= 0x10 )
      Ptr = (std::string *)_Right._Mypair._Myval2._Bx._Ptr;
    Ptr->_Mypair._Myval2._Bx._Buf[Mysize] = 48;
    Ptr->_Mypair._Myval2._Bx._Buf[++_Right._Mypair._Myval2._Mysize] = 0;
  }
  v17 = std::to_string(&result, second + 1);
  v18 = std::operator+<char>(&v46, v17, "' align='middle' vspace='-12'/>");
  std::string::append(&_Right, v18, 0i64, 0xFFFFFFFFFFFFFFFFui64);
  if ( v46._Mypair._Myval2._Myres >= 0x10 )
  {
    v19 = v46._Mypair._Myval2._Bx._Ptr;
    if ( v46._Mypair._Myval2._Myres + 1 >= 0x1000 )
    {
      if ( (v46._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
        invalid_parameter_noinfo_noreturn();
      v20 = (char *)*((_QWORD *)v46._Mypair._Myval2._Bx._Ptr - 1);
      if ( v20 >= v46._Mypair._Myval2._Bx._Ptr )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(v46._Mypair._Myval2._Bx._Ptr - v20) < (char *)8 )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(v46._Mypair._Myval2._Bx._Ptr - v20) > (char *)0x27 )
        invalid_parameter_noinfo_noreturn();
      v19 = (char *)*((_QWORD *)v46._Mypair._Myval2._Bx._Ptr - 1);
    }
    operator delete(v19);
  }
  v46._Mypair._Myval2._Myres = 15i64;
  v46._Mypair._Myval2._Mysize = 0i64;
  v46._Mypair._Myval2._Bx._Buf[0] = 0;
  if ( result._Mypair._Myval2._Myres >= 0x10 )
  {
    v21 = result._Mypair._Myval2._Bx._Ptr;
    if ( result._Mypair._Myval2._Myres + 1 >= 0x1000 )
    {
      if ( (result._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
        invalid_parameter_noinfo_noreturn();
      v22 = (char *)*((_QWORD *)result._Mypair._Myval2._Bx._Ptr - 1);
      if ( v22 >= result._Mypair._Myval2._Bx._Ptr )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(result._Mypair._Myval2._Bx._Ptr - v22) < (char *)8 )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(result._Mypair._Myval2._Bx._Ptr - v22) > (char *)0x27 )
        invalid_parameter_noinfo_noreturn();
      v21 = (char *)*((_QWORD *)result._Mypair._Myval2._Bx._Ptr - 1);
    }
    operator delete(v21);
  }
  v23 = v45._Mypair._Myval2._Mysize;
  v24 = &v45;
  if ( v45._Mypair._Myval2._Myres >= 0x10 )
    v24 = (std::string *)v45._Mypair._Myval2._Bx._Ptr;
  if ( v45._Mypair._Myval2._Mysize )
  {
    if ( v44._Mypair._Myval2._Mysize && v45._Mypair._Myval2._Mysize <= v44._Mypair._Myval2._Mysize )
    {
      v26 = v44._Mypair._Myval2._Mysize - v45._Mypair._Myval2._Mysize + 1;
      v27 = &v44;
      if ( v44._Mypair._Myval2._Myres >= 0x10 )
        v27 = (std::string *)v44._Mypair._Myval2._Bx._Ptr;
      while ( 1 )
      {
        if ( !v26 || (v28 = (char *)memchr(v27, v24->_Mypair._Myval2._Bx._Buf[0], v26), (v29 = v28) == 0i64) )
        {
          v23 = v45._Mypair._Myval2._Mysize;
          goto LABEL_73;
        }
        if ( !memcmp(v28, v24, v23) )
          break;
        v26 += (char *)v27 - v29 - 1;
        v27 = (std::string *)(v29 + 1);
      }
      v30 = &v44;
      if ( v44._Mypair._Myval2._Myres >= 0x10 )
        v30 = (std::string *)v44._Mypair._Myval2._Bx._Ptr;
      v25 = v29 - (char *)v30;
      v23 = v45._Mypair._Myval2._Mysize;
    }
    else
    {
LABEL_73:
      v25 = -1i64;
    }
    if ( v25 == -1i64 )
      goto LABEL_99;
  }
  else
  {
    v25 = 0i64;
  }
  v10 = 1;
  do
  {
    std::string::replace(&v44, v25, v23, &_Right, 0i64, 0xFFFFFFFFFFFFFFFFui64);
    v25 += _Right._Mypair._Myval2._Mysize;
    v23 = v45._Mypair._Myval2._Mysize;
    v31 = &v45;
    if ( v45._Mypair._Myval2._Myres >= 0x10 )
      v31 = (std::string *)v45._Mypair._Myval2._Bx._Ptr;
    if ( v45._Mypair._Myval2._Mysize || v25 > v44._Mypair._Myval2._Mysize )
    {
      if ( v25 >= v44._Mypair._Myval2._Mysize || v45._Mypair._Myval2._Mysize > v44._Mypair._Myval2._Mysize - v25 )
      {
LABEL_94:
        v25 = -1i64;
      }
      else
      {
        v32 = 1 - v45._Mypair._Myval2._Mysize + v44._Mypair._Myval2._Mysize - v25;
        v33 = &v44;
        if ( v44._Mypair._Myval2._Myres >= 0x10 )
          v33 = (std::string *)v44._Mypair._Myval2._Bx._Ptr;
        for ( i = &v33->_Mypair._Myval2._Bx._Buf[v25]; ; i = v36 + 1 )
        {
          if ( !v32 || (v35 = (char *)memchr(i, v31->_Mypair._Myval2._Bx._Buf[0], v32), (v36 = v35) == 0i64) )
          {
            v23 = v45._Mypair._Myval2._Mysize;
            goto LABEL_94;
          }
          if ( !v23 || !memcmp(v35, v31, v23) )
            break;
          v32 += i - v36 - 1;
        }
        v37 = &v44;
        if ( v44._Mypair._Myval2._Myres >= 0x10 )
          v37 = (std::string *)v44._Mypair._Myval2._Bx._Ptr;
        v25 = v36 - (char *)v37;
        v23 = v45._Mypair._Myval2._Mysize;
      }
    }
  }
  while ( v25 != -1i64 );
  v38 = &v44;
  if ( v44._Mypair._Myval2._Myres >= 0x10 )
    v38 = (std::string *)v44._Mypair._Myval2._Bx._Ptr;
  do
  {
    v39 = v38->_Mypair._Myval2._Bx._Buf[0];
    *v5 = v38->_Mypair._Myval2._Bx._Buf[0];
    v38 = (std::string *)((char *)v38 + 1);
    ++v5;
  }
  while ( v39 );
LABEL_99:
  if ( _Right._Mypair._Myval2._Myres >= 0x10 )
  {
    v40 = _Right._Mypair._Myval2._Bx._Ptr;
    if ( _Right._Mypair._Myval2._Myres + 1 >= 0x1000 )
    {
      if ( (_Right._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
        invalid_parameter_noinfo_noreturn();
      v41 = (char *)*((_QWORD *)_Right._Mypair._Myval2._Bx._Ptr - 1);
      if ( v41 >= _Right._Mypair._Myval2._Bx._Ptr )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(_Right._Mypair._Myval2._Bx._Ptr - v41) < (char *)8 )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(_Right._Mypair._Myval2._Bx._Ptr - v41) > (char *)0x27 )
        invalid_parameter_noinfo_noreturn();
      v40 = (char *)*((_QWORD *)_Right._Mypair._Myval2._Bx._Ptr - 1);
    }
    operator delete(v40);
  }
  _Right._Mypair._Myval2._Myres = 15i64;
  _Right._Mypair._Myval2._Mysize = 0i64;
  _Right._Mypair._Myval2._Bx._Buf[0] = 0;
  if ( v45._Mypair._Myval2._Myres >= 0x10 )
    std::_Wrap_alloc<std::allocator<unsigned char>>::deallocate(
      (std::_Wrap_alloc<std::allocator<AgSuspendingEvent> > *)&v45,
      (AgSuspendingEvent *)v45._Mypair._Myval2._Bx._Ptr,
      v45._Mypair._Myval2._Myres + 1);
  v45._Mypair._Myval2._Myres = 15i64;
  v45._Mypair._Myval2._Mysize = 0i64;
  v45._Mypair._Myval2._Bx._Buf[0] = 0;
  std::string::~string(&v44);
  return v10;
}

__int64 __fastcall Scaleform::Render::DICommand_Clear::GetType(Scaleform::GFx::AS3::Instances::fl::XMLComment *this)
{
  return 3i64;
}

extension::GFXIFontManager *__fastcall extension::GFXIFontManager::Instance()
{
  extension::GFXIFontManager *v0; // rcx

  if ( dword_140ACDDE8 > *(_DWORD *)(*(_QWORD *)NtCurrentTeb()->Reserved1[11] + 40i64) )
  {
    Init_thread_header(&dword_140ACDDE8);
    if ( dword_140ACDDE8 == -1 )
    {
      extension::GFXIFontManager::GFXIFontManager(v0);
      atexit((void (__fastcall *)())extension::GFXIFontManager::Instance_::_2_::_dynamic_atexit_destructor_for__the_instance__);
      Init_thread_footer(&dword_140ACDDE8);
    }
  }
  return &the_instance_3;
}

// attributes: thunk
bool __fastcall extension::gfxi_detail::TranslatorImpl::OnBidirectionalText(
        extension::gfxi_detail::TranslatorImpl *this,
        const wchar_t *text,
        unsigned __int64 textLen,
        wchar_t *newText,
        unsigned int *indexMap,
        bool *mirrorBits)
{
  return Scaleform::GFx::Translator::OnBidirectionalText(this, text, textLen, newText, indexMap, mirrorBits);
}

char __fastcall extension::gfxi_detail::TranslatorImpl::OnWordWrapping(
        extension::gfxi_detail::TranslatorImpl *this,
        Scaleform::GFx::Translator::LineFormatDesc *desc)
{
  const wchar_t *pParaText; // rcx
  wchar_t v3; // ax

  pParaText = desc->pParaText;
  v3 = *desc->pParaText;
  if ( v3 )
  {
    while ( 1 )
    {
      ++pParaText;
      if ( v3 >= 0x3000u )
        break;
      v3 = *pParaText;
      if ( !*pParaText )
        return 1;
    }
    desc->ProposedWordWrapPoint = desc->NumCharsInLine;
  }
  return 1;
}

void __fastcall extension::gfxi_detail::TranslatorImpl::TranlateMultiKey(
        extension::gfxi_detail::TranslatorImpl *this,
        char *outText,
        char *inText)
{
  extension::gfxi_detail::TranslatorImpl *v5; // r12
  __int64 v6; // rbp
  const char *v7; // rsi
  int v8; // edi
  int v9; // ecx
  __int64 v10; // rax
  const std::pair<char const *,enum LANGUAGE_MODE> *v11; // r14
  const char *v12; // rbx
  const char *v13; // r12
  char v14; // al
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned __int64 v17; // rbx
  int m_translateLanguage; // ebx
  extension::TranslateTable *v19; // rax
  const std::pair<char const *,enum LANGUAGE_MODE> *v20; // rcx
  const char *first; // rcx
  const char *v22; // r8
  const char *v23; // rax
  const char *v24; // r9
  char *v25; // rdx
  char v26; // cl
  __int64 v27; // rax
  char v28; // cl
  int v29; // ebp
  __int64 v30; // rdx
  __int64 v31; // rcx
  extension::TranslateTable *v32; // rcx
  const char *v33; // r8
  char *v34; // rax
  char *v35; // r15
  char v36; // cl
  int v37; // [rsp+20h] [rbp-468h]
  __int64 v39; // [rsp+38h] [rbp-450h]
  char key[1024]; // [rsp+40h] [rbp-448h] BYREF

  HIBYTE(v39) = -1;
  v5 = this;
  v6 = -1i64;
  do
    ++v6;
  while ( inText[v6] );
  v7 = 0i64;
  v8 = 0;
  memset(key, 0, sizeof(key));
  v9 = 0;
  v37 = 0;
  v10 = (int)v6;
  v11 = extension::auxscript::MyLangCodeNameTable;
  if ( (int)v6 > 0 )
  {
    v12 = 0i64;
    do
    {
      v13 = v12 + 1;
      if ( inText[(_QWORD)v12] == 124 )
      {
        v14 = inText[(_QWORD)v7];
        if ( v14 == 64 || v14 == 36 )
        {
          ++v8;
          ++v7;
        }
        memmove(key, &inText[v8], v9 - v8);
        v17 = v12 - v7;
        if ( v17 >= 0x400 )
        {
          _report_rangecheckfailure(v16, v15);
          __debugbreak();
        }
        key[v17] = 0;
        m_translateLanguage = this->m_translateLanguage;
        v19 = extension::TranslateTable::Instance();
        v20 = extension::auxscript::MyLangCodeNameTable;
        while ( v20->second != m_translateLanguage )
        {
          if ( ++v20 == (const std::pair<char const *,enum LANGUAGE_MODE> *)extension::auxscript::my_testpolicy_name_table )
          {
            first = 0i64;
            goto LABEL_15;
          }
        }
        first = v20->first;
LABEL_15:
        v22 = "en_US";
        if ( first )
          v22 = first;
        v23 = extension::TranslateTable::executeTranslate(v19, key, v22);
        v24 = v23;
        v25 = (char *)v23;
        do
        {
          v26 = *v25;
          v25[outText - v23] = *v25;
          ++v25;
        }
        while ( v26 );
        v27 = -1i64;
        do
          ++v27;
        while ( v24[v27] );
        outText += v27;
        v9 = v37;
        v8 = v37 + 1;
        v7 = v13;
        v10 = (int)v6;
      }
      v37 = ++v9;
      v12 = v13;
    }
    while ( (__int64)v13 < v10 );
    v7 = 0i64;
    v5 = this;
  }
  v28 = inText[v8];
  if ( v28 == 64 || v28 == 36 )
    ++v8;
  v29 = v6 - v8;
  memmove(key, &inText[v8], v29);
  if ( (unsigned __int64)v29 >= 0x400 )
  {
    _report_rangecheckfailure(v31, v30);
    __debugbreak();
  }
  key[v29] = 0;
  if ( dword_140AD01AC > *(_DWORD *)(*(_QWORD *)NtCurrentTeb()->Reserved1[11] + 40i64) )
  {
    Init_thread_header(&dword_140AD01AC);
    if ( dword_140AD01AC == -1 )
    {
      extension::TranslateTable::TranslateTable(v32);
      atexit((void (__fastcall *)())extension::TranslateTable::Instance_::_2_::_dynamic_atexit_destructor_for__the_instance__);
      Init_thread_footer(&dword_140AD01AC);
    }
  }
  while ( v11->second != v5->m_translateLanguage )
  {
    if ( ++v11 == (const std::pair<char const *,enum LANGUAGE_MODE> *)extension::auxscript::my_testpolicy_name_table )
      goto LABEL_37;
  }
  v7 = v11->first;
LABEL_37:
  v33 = "en_US";
  if ( v7 )
    v33 = v7;
  v34 = (char *)extension::TranslateTable::executeTranslate(&the_instance_8, key, v33);
  v35 = (char *)(outText - v34);
  do
  {
    v36 = *v34;
    v34[(_QWORD)v35] = *v34;
    ++v34;
  }
  while ( v36 );
}

void __fastcall extension::gfxi_detail::TranslatorImpl::Translate(
        extension::gfxi_detail::TranslatorImpl *this,
        Scaleform::GFx::Translator::TranslateInfo *translateInfo)
{
  const wchar_t *pKey; // rdx
  __int64 v5; // rax
  char *v6; // rsi
  char v7; // r14
  __int64 v8; // rbx
  int v9; // edi
  __int64 v10; // rax
  __int64 i; // r14
  __int64 v12; // rcx
  char v13; // al
  bool v14; // r13
  __int64 v15; // r14
  __int64 v16; // r8
  char *v17; // rcx
  char v18; // al
  bool v19; // [rsp+20h] [rbp-E0h]
  char pbuff[2048]; // [rsp+30h] [rbp-D0h] BYREF
  char presultTextUTF8[4096]; // [rsp+830h] [rbp+730h] BYREF
  char inText[4096]; // [rsp+1830h] [rbp+1730h] BYREF
  char outText[4096]; // [rsp+2830h] [rbp+2730h] BYREF

  if ( this->m_translateLanguage >= 0 )
  {
    pKey = translateInfo->pKey;
    v5 = -1i64;
    do
      ++v5;
    while ( pKey[v5] );
    if ( !v5 )
    {
      if ( (translateInfo->Flags & 4) != 0 )
      {
        Scaleform::GFx::Translator::TranslateInfo::SetResult(translateInfo, &pnewText, 0xFFFFFFFFFFFFFFFFui64);
        translateInfo->Flags |= 2u;
      }
      else
      {
        Scaleform::GFx::Translator::TranslateInfo::SetResult(translateInfo, &pnewText, 0xFFFFFFFFFFFFFFFFui64);
      }
      return;
    }
    Scaleform::UTF8Util::EncodeString(pbuff, pKey, -1i64);
    memset(inText, 0, sizeof(inText));
    v6 = inText;
    v7 = pbuff[0] == 60;
    v8 = 0i64;
    v19 = pbuff[0] == 60;
    v9 = 0;
    if ( pbuff[0] == 60 )
    {
      v10 = -1i64;
      do
        ++v10;
      while ( pbuff[v10] );
      if ( (int)v10 <= 0 )
        return;
      while ( pbuff[v8] == 60 )
      {
        for ( ; v8 < (int)v10; ++v8 )
        {
          if ( pbuff[v8] == 62 )
            break;
          ++v9;
        }
        ++v9;
        if ( ++v8 >= (int)v10 )
          return;
      }
      for ( i = v9; v8 < (int)v10; ++v8 )
      {
        if ( pbuff[v8] == 60 )
          break;
        ++v9;
      }
      v9 -= i;
      memmove(inText, &pbuff[i], v9);
      LODWORD(v8) = i;
      v7 = v19;
    }
    else
    {
      v12 = 0i64;
      do
      {
        v13 = pbuff[v12];
        inText[v12++] = v13;
      }
      while ( v13 );
    }
    memset(outText, 0, sizeof(outText));
    extension::gfxi_detail::TranslatorImpl::TranlateMultiKey(this, outText, inText);
    if ( (translateInfo->Flags & 4) != 0 )
      extension::TranslateTable::UnescapeSpecialHTML(inText, outText);
    else
      v6 = outText;
    v14 = extension::gfxi_detail::TranslatorImpl::ExchangeImageTag(this, v6);
    memset(presultTextUTF8, 0, sizeof(presultTextUTF8));
    if ( v7 )
    {
      v15 = -1i64;
      do
        ++v15;
      while ( v6[v15] );
      memmove(presultTextUTF8, pbuff, (int)v8);
      memmove(&presultTextUTF8[(int)v8], v6, (int)v15);
      v16 = -1i64;
      do
        ++v16;
      while ( pbuff[v16] );
      memmove(&presultTextUTF8[(int)v15 + (int)v8], &pbuff[v9 + (int)v8], v16 - v9 - (int)v8);
      v7 = v19;
    }
    else
    {
      v17 = (char *)(presultTextUTF8 - v6);
      do
      {
        v18 = *v6;
        v6[(_QWORD)v17] = *v6;
        ++v6;
      }
      while ( v18 );
    }
    if ( (translateInfo->Flags & 4) != 0 || v7 || v14 )
    {
      Scaleform::GFx::Translator::TranslateInfo::SetResult(translateInfo, presultTextUTF8, 0xFFFFFFFFFFFFFFFFui64);
      translateInfo->Flags |= 2u;
    }
    else
    {
      Scaleform::GFx::Translator::TranslateInfo::SetResult(translateInfo, presultTextUTF8, 0xFFFFFFFFFFFFFFFFui64);
    }
  }
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

void __fastcall std::_Tree<std::_Tmap_traits<std::string,extension::GFXIFontManager::LanguageConfig,std::less<std::string>,std::allocator<std::pair<std::string const,extension::GFXIFontManager::LanguageConfig>>,0>>::_Destroy_if_not_nil(
        std::_Tree<std::_Tmap_traits<std::string,extension::GFXIFontManager::LanguageConfig,std::less<std::string >,std::allocator<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig> >,0> > *this,
        std::_Tree_node<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig>,void *> *_Newnode)
{
  extension::gfxi_detail::LanguageConfigImpl *m_ptr; // rcx

  m_ptr = _Newnode->_Myval.second.m_impl.m_ptr;
  if ( m_ptr )
    extension::RefCountable<extension::gfxi_detail::LanguageConfigImpl>::release(m_ptr);
  std::string::~string((std::string *)&_Newnode->_Myval.first);
  operator delete(_Newnode);
}

void __fastcall std::_Tree<std::_Tmap_traits<std::string,extension::GFXIFontManager::LanguageConfig,std::less<std::string>,std::allocator<std::pair<std::string const,extension::GFXIFontManager::LanguageConfig>>,0>>::_Erase(
        std::_Tree<std::_Tmap_traits<std::string,extension::GFXIFontManager::LanguageConfig,std::less<std::string >,std::allocator<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig> >,0> > *this,
        std::_Tree_node<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig>,void *> *_Rootnode)
{
  std::_Tree_node<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig>,void *> *v2; // rsi
  std::_Tree_node<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig>,void *> *i; // rdi
  extension::RefCountable<extension::gfxi_detail::LanguageConfigImpl> *m_ptr; // rcx
  void **p_Myval; // rbx
  unsigned __int64 Myres; // rax
  char *v8; // rcx
  char *v9; // rax
  unsigned __int64 v10; // rcx
  bool v11; // cf

  v2 = _Rootnode;
  for ( i = _Rootnode; !i->_Isnil; v2 = i )
  {
    std::_Tree<std::_Tmap_traits<std::string,extension::GFXIFontManager::LanguageConfig,std::less<std::string>,std::allocator<std::pair<std::string const,extension::GFXIFontManager::LanguageConfig>>,0>>::_Erase(
      this,
      i->_Right);
    m_ptr = v2->_Myval.second.m_impl.m_ptr;
    p_Myval = (void **)&v2->_Myval;
    i = i->_Left;
    if ( m_ptr )
      extension::RefCountable<extension::gfxi_detail::LanguageConfigImpl>::release(m_ptr);
    Myres = v2->_Myval.first._Mypair._Myval2._Myres;
    if ( Myres >= 0x10 )
    {
      v8 = (char *)*p_Myval;
      if ( Myres + 1 >= 0x1000 )
      {
        if ( ((unsigned __int8)v8 & 0x1F) != 0 )
          invalid_parameter_noinfo_noreturn();
        v9 = (char *)*((_QWORD *)v8 - 1);
        if ( v9 >= v8 )
          invalid_parameter_noinfo_noreturn();
        v10 = v8 - v9;
        if ( v10 < 8 )
          invalid_parameter_noinfo_noreturn();
        if ( v10 > 0x27 )
          invalid_parameter_noinfo_noreturn();
        v8 = v9;
      }
      operator delete(v8);
    }
    v2->_Myval.first._Mypair._Myval2._Myres = 15i64;
    v11 = v2->_Myval.first._Mypair._Myval2._Myres < 0x10;
    v2->_Myval.first._Mypair._Myval2._Mysize = 0i64;
    if ( !v11 )
      p_Myval = (void **)*p_Myval;
    *(_BYTE *)p_Myval = 0;
    operator delete(v2);
  }
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

__int64 __fastcall extension::gfxi_detail::LanguageConfigImpl::addFontFileName(
        extension::gfxi_detail::LanguageConfigImpl *this,
        const char *fontFileName)
{
  unsigned __int64 v3; // r8
  std::string *Mylast; // rbx
  std::vector<std::string> *p_m_fontFileNames; // r12
  std::string *Myfirst; // rdi
  unsigned __int64 Myres; // r15
  char *Ptr; // rbp
  unsigned __int64 Mysize; // r14
  std::string *p_Val; // rdx
  std::string *v11; // rcx
  unsigned __int64 v12; // rsi
  size_t v13; // r8
  unsigned __int8 v14; // bl
  char *v15; // rax
  unsigned __int64 v16; // rbp
  std::string _Val; // [rsp+28h] [rbp-50h] BYREF

  _Val._Mypair._Myval2._Myres = 15i64;
  v3 = 0i64;
  _Val._Mypair._Myval2._Mysize = 0i64;
  _Val._Mypair._Myval2._Bx._Buf[0] = 0;
  if ( *fontFileName )
  {
    v3 = -1i64;
    do
      ++v3;
    while ( fontFileName[v3] );
  }
  std::string::assign(&_Val, fontFileName, v3);
  Mylast = this->m_fontFileNames._Mypair._Myval2._Mylast;
  p_m_fontFileNames = &this->m_fontFileNames;
  Myfirst = this->m_fontFileNames._Mypair._Myval2._Myfirst;
  Myres = _Val._Mypair._Myval2._Myres;
  Ptr = _Val._Mypair._Myval2._Bx._Ptr;
  if ( Myfirst != Mylast )
  {
    Mysize = _Val._Mypair._Myval2._Mysize;
    do
    {
      p_Val = &_Val;
      if ( Myres >= 0x10 )
        p_Val = (std::string *)Ptr;
      if ( Myfirst->_Mypair._Myval2._Myres < 0x10 )
        v11 = Myfirst;
      else
        v11 = (std::string *)Myfirst->_Mypair._Myval2._Bx._Ptr;
      v12 = Myfirst->_Mypair._Myval2._Mysize;
      v13 = Mysize;
      if ( v12 < Mysize )
        v13 = Myfirst->_Mypair._Myval2._Mysize;
      if ( (!v13 || !memcmp(v11, p_Val, v13)) && v12 >= Mysize && v12 <= Mysize )
        break;
      ++Myfirst;
    }
    while ( Myfirst != Mylast );
  }
  if ( Myfirst == p_m_fontFileNames->_Mypair._Myval2._Mylast )
  {
    std::vector<std::string>::push_back(p_m_fontFileNames, &_Val);
    v14 = 1;
    Myres = _Val._Mypair._Myval2._Myres;
    Ptr = _Val._Mypair._Myval2._Bx._Ptr;
  }
  else
  {
    v14 = 0;
  }
  if ( Myres >= 0x10 )
  {
    if ( Myres + 1 >= 0x1000 )
    {
      if ( (_Val._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
        invalid_parameter_noinfo_noreturn();
      v15 = (char *)*((_QWORD *)Ptr - 1);
      if ( v15 >= Ptr )
        invalid_parameter_noinfo_noreturn();
      v16 = Ptr - v15;
      if ( v16 < 8 )
        invalid_parameter_noinfo_noreturn();
      if ( v16 > 0x27 )
        invalid_parameter_noinfo_noreturn();
      Ptr = v15;
    }
    operator delete(Ptr);
  }
  return v14;
}

char __fastcall extension::GFXIFontManager::checkPendingFontLib(extension::GFXIFontManager *this)
{
  extension::BasicFutureObject<extension::GFXIMovieData,void> *Myfirst; // rax
  extension::AsyncContent<extension::GFXIMovieData> *m_ptr; // rcx
  Scaleform::GFx::FontLib *v4; // rax
  extension::AsyncStatus::Step v5; // edx
  Scaleform::GFx::FontLib *v6; // rax
  Scaleform::GFx::FontLib *v7; // rbp
  extension::BasicFutureObject<extension::GFXIMovieData,void> *i; // rbx
  extension::AsyncContent<extension::GFXIMovieData> *v9; // rdi
  extension::AsyncContent<extension::GFXIMovieData> *v10; // rdi
  Scaleform::GFx::MovieDef **p_pObject; // rdx
  Scaleform::RefCountVImpl *v12; // rcx
  Scaleform::GFx::FontLib *pObject; // rcx

  if ( this->m_pendingFontStates.m_fontLib.pObject
    || (Myfirst = this->m_pendingFontStates.m_fontFiles._Mypair._Myval2._Myfirst,
        Myfirst == this->m_pendingFontStates.m_fontFiles._Mypair._Myval2._Mylast) )
  {
LABEL_30:
    pObject = this->m_pendingFontStates.m_fontLib.pObject;
    if ( pObject && Scaleform::GFx::FontLib::AreAllMoviesLoaded(pObject) )
    {
      extension::GFXIFontManager::FontStates::moveFrom(&this->m_currentFontStates, &this->m_pendingFontStates);
      return 1;
    }
  }
  else
  {
    while ( 1 )
    {
      m_ptr = Myfirst->m_body.m_ptr->m_content.m_ptr;
      if ( m_ptr )
      {
        if ( !m_ptr->m_isDataReleased && (m_ptr->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
          break;
      }
      if ( ++Myfirst == this->m_pendingFontStates.m_fontFiles._Mypair._Myval2._Mylast )
      {
        v4 = (Scaleform::GFx::FontLib *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))Scaleform::Memory::pGlobalHeap->Alloc)(
                                          Scaleform::Memory::pGlobalHeap,
                                          32i64);
        if ( v4 )
        {
          Scaleform::GFx::FontLib::FontLib(v4);
          v7 = v6;
        }
        else
        {
          v7 = 0i64;
        }
        for ( i = this->m_pendingFontStates.m_fontFiles._Mypair._Myval2._Myfirst;
              i != this->m_pendingFontStates.m_fontFiles._Mypair._Myval2._Mylast;
              ++i )
        {
          v9 = i->m_body.m_ptr->m_content.m_ptr;
          if ( v9 && !v9->m_isDataReleased )
          {
            if ( (v9->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
              extension::AsyncStatus::waitFor(&v9->m_status, v5);
            if ( v9->m_data._Mypair._Myval2 )
            {
              v10 = i->m_body.m_ptr->m_content.m_ptr;
              if ( !v10 || v10->m_isDataReleased )
              {
                p_pObject = 0i64;
              }
              else
              {
                if ( (v10->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
                  extension::AsyncStatus::waitFor(&v10->m_status, v5);
                p_pObject = &v10->m_data._Mypair._Myval2->m_movieDef.pObject;
              }
              Scaleform::GFx::FontLib::AddFontsFrom(v7, *p_pObject, 1);
            }
          }
        }
        if ( v7 )
          Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)v7);
        v12 = (Scaleform::RefCountVImpl *)this->m_pendingFontStates.m_fontLib.pObject;
        if ( v12 )
          Scaleform::RefCountImpl::Release(v12);
        this->m_pendingFontStates.m_fontLib.pObject = v7;
        if ( v7 )
          Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v7);
        goto LABEL_30;
      }
    }
  }
  return 0;
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

std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig> > > > *__fastcall std::_Tree<std::_Tmap_traits<std::string,extension::GFXIFontManager::LanguageConfig,std::less<std::string>,std::allocator<std::pair<std::string const,extension::GFXIFontManager::LanguageConfig>>,0>>::erase(
        std::_Tree<std::_Tmap_traits<std::string,extension::GFXIFontManager::LanguageConfig,std::less<std::string >,std::allocator<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig> >,0> > *this,
        std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig> > > > *result,
        std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig> > > > _First,
        std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig> > > > _Last)
{
  std::_Tree_node<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig>,void *> *Myhead; // rdx
  std::_Tree_node<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig>,void *> *v7; // rax
  std::_Tree_node<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig>,void *> *Right; // rdx
  std::_Tree_node<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig>,void *> *j; // rcx
  std::_Tree_node<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig>,void *> *i; // rcx
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig> > > > resulta; // [rsp+40h] [rbp+8h] BYREF
  std::_Tree_node<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig>,void *> *v13; // [rsp+50h] [rbp+18h]
  std::_Tree_node<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig>,void *> *Ptr; // [rsp+58h] [rbp+20h]

  Ptr = _Last._Ptr;
  v13 = _First._Ptr;
  Myhead = this->_Mypair._Myval2._Myval2._Myhead;
  if ( _First._Ptr == this->_Mypair._Myval2._Myval2._Myhead->_Left && _Last._Ptr == Myhead )
  {
    std::_Tree<std::_Tmap_traits<std::string,extension::GFXIFontManager::LanguageConfig,std::less<std::string>,std::allocator<std::pair<std::string const,extension::GFXIFontManager::LanguageConfig>>,0>>::_Erase(
      this,
      Myhead->_Parent);
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
        std::_Tree<std::_Tmap_traits<std::string,extension::GFXIFontManager::LanguageConfig,std::less<std::string>,std::allocator<std::pair<std::string const,extension::GFXIFontManager::LanguageConfig>>,0>>::erase(
          this,
          &resulta,
          (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig> > > >)v7);
        _First._Ptr = v13;
      }
      while ( v13 != Ptr );
    }
    result->_Ptr = _First._Ptr;
  }
  return result;
}

std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig> > > > *__fastcall std::_Tree<std::_Tmap_traits<std::string,extension::GFXIFontManager::LanguageConfig,std::less<std::string>,std::allocator<std::pair<std::string const,extension::GFXIFontManager::LanguageConfig>>,0>>::erase(
        std::_Tree<std::_Tmap_traits<std::string,extension::GFXIFontManager::LanguageConfig,std::less<std::string >,std::allocator<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig> >,0> > *this,
        std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig> > > > *result,
        std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig> > > > _Where)
{
  std::_Tree_node<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig>,void *> *v5; // rdi
  std::_Tree_node<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig>,void *> *Right; // rax
  std::_Tree_node<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig>,void *> *j; // rax
  std::_Tree_node<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig>,void *> *i; // rax
  std::_Tree_node<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig>,void *> *v9; // r10
  std::_Tree_node<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig>,void *> *Parent; // r9
  std::_Tree_node<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig>,void *> *k; // rcx
  std::_Tree_node<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig>,void *> *Left; // rax
  std::_Tree_node<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig>,void *> *Myhead; // rdx
  std::_Tree_node<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig>,void *> *v14; // rax
  std::_Tree_node<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig>,void *> *m; // rcx
  std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig> > > > *v16; // rax
  char Color; // cl
  std::_Tree_node<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig>,void *> *v18; // r11
  std::_Tree_node<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig>,void *> *v19; // rbx
  std::_Tree_node<std::pair<AgStringRef const ,AgJsonNode>,void *> *v20; // rdx
  std::_Tree_node<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig>,void *> *v21; // rcx
  std::_Tree_node<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig>,void *> *v22; // rax
  extension::RefCountable<extension::gfxi_detail::LanguageConfigImpl> *m_ptr; // rcx
  void **p_Myval; // rbx
  unsigned __int64 Myres; // rax
  char *v26; // rcx
  char *v27; // rax
  unsigned __int64 v28; // rcx
  bool v29; // cf
  unsigned __int64 Mysize; // rax
  std::_Tree_node<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig>,void *> *Ptr; // [rsp+50h] [rbp+18h]

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
    v16 = (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig> > > > *)v5->_Parent;
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
  m_ptr = v5->_Myval.second.m_impl.m_ptr;
  p_Myval = (void **)&v5->_Myval;
  if ( m_ptr )
    extension::RefCountable<extension::gfxi_detail::LanguageConfigImpl>::release(m_ptr);
  Myres = v5->_Myval.first._Mypair._Myval2._Myres;
  if ( Myres >= 0x10 )
  {
    v26 = (char *)*p_Myval;
    if ( Myres + 1 >= 0x1000 )
    {
      if ( ((unsigned __int8)v26 & 0x1F) != 0 )
        invalid_parameter_noinfo_noreturn();
      v27 = (char *)*((_QWORD *)v26 - 1);
      if ( v27 >= v26 )
        invalid_parameter_noinfo_noreturn();
      v28 = v26 - v27;
      if ( v28 < 8 )
        invalid_parameter_noinfo_noreturn();
      if ( v28 > 0x27 )
        invalid_parameter_noinfo_noreturn();
      v26 = v27;
    }
    operator delete(v26);
  }
  v5->_Myval.first._Mypair._Myval2._Myres = 15i64;
  v29 = v5->_Myval.first._Mypair._Myval2._Myres < 0x10;
  v5->_Myval.first._Mypair._Myval2._Mysize = 0i64;
  if ( !v29 )
    p_Myval = (void **)*p_Myval;
  *(_BYTE *)p_Myval = 0;
  operator delete(v5);
  Mysize = this->_Mypair._Myval2._Myval2._Mysize;
  if ( Mysize )
    this->_Mypair._Myval2._Myval2._Mysize = Mysize - 1;
  result->_Ptr = Ptr;
  return result;
}

char **__fastcall extension::GFXIFontManager::getCurrentFontLibFileName(
        extension::GFXIFontManager *this,
        unsigned int index)
{
  char **Myfirst; // rdi
  extension::ExLockable<extension::GFXIFontManager> *v3; // rsi
  extension::gfxi_detail::LanguageConfigImpl *m_ptr; // rcx

  Myfirst = 0i64;
  v3 = &this->extension::ExLockable<extension::GFXIFontManager>;
  if ( !this )
    v3 = 0i64;
  extension::lockable_detail::LockUnlock(v3, 1);
  m_ptr = this->m_currentLanguageConfig.m_ptr;
  if ( m_ptr )
  {
    if ( m_ptr->m_fontFileNames._Mypair._Myval2._Mylast - m_ptr->m_fontFileNames._Mypair._Myval2._Myfirst )
    {
      Myfirst = (char **)m_ptr->m_fontFileNames._Mypair._Myval2._Myfirst;
      if ( (unsigned __int64)Myfirst[3] >= 0x10 )
        Myfirst = (char **)*Myfirst;
    }
  }
  extension::lockable_detail::LockUnlock(v3, -1);
  return Myfirst;
}

void __fastcall extension::GFXIFontManager::loadStartFontLib(
        extension::GFXIFontManager *this,
        const std::string *translateLangName,
        const extension::gfxi_detail::LanguageConfigImpl *conf)
{
  const std::string *v4; // r15
  extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> *Myend; // rsi
  std::string *Myfirst; // rbx
  extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> *v8; // rdi
  extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> *v9; // r14
  std::string *i; // rax
  extension::BasicFutureObject<extension::GFXIMovieData,void>::AssetCache *v11; // rcx
  const void *v12; // r9
  __int64 v13; // r8
  std::_Wrap_alloc<std::allocator<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> > > *v14; // r9
  signed __int64 v15; // r15
  __int64 v16; // rdi
  unsigned __int64 v17; // rdi
  unsigned __int64 v18; // rsi
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // r15
  extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body *v21; // rcx
  __int64 v22; // rdi
  unsigned __int64 v23; // rdi
  unsigned __int64 v24; // rsi
  unsigned __int64 v25; // rdx
  extension::BasicFutureObject<extension::GFXIMovieData,void>::Body *m_ptr; // rcx
  char *Ptr; // rcx
  char *v28; // rax
  std::vector<extension::BasicFutureObject<extension::GFXIMovieData,void>> *p_m_fontFiles; // rcx
  extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> *v30; // rax
  extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> *v31; // rax
  extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> *v32; // rax
  Scaleform::RefCountVImpl *pObject; // rcx
  Scaleform::RefCountVImpl *v34; // rcx
  Scaleform::RefCountVImpl *v35; // rcx
  std::string *p_m_translateLangName; // rcx
  std::string **p_m_body; // r14
  std::vector<extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>> v38; // [rsp+20h] [rbp-89h] BYREF
  char v39; // [rsp+38h] [rbp-71h] BYREF
  bool v40; // [rsp+39h] [rbp-70h]
  extension::RefCountablePtr<extension::BasicFutureObject<extension::GFXIMovieData,void>::Body> v41; // [rsp+40h] [rbp-69h] BYREF
  std::string *Mylast; // [rsp+48h] [rbp-61h]
  const std::string *v43; // [rsp+50h] [rbp-59h]
  std::string v44; // [rsp+58h] [rbp-51h] BYREF
  __int64 v45; // [rsp+78h] [rbp-31h]
  extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> *v46; // [rsp+88h] [rbp-21h]
  extension::BasicFutureObject<extension::GFXIMovieData,void> *v47; // [rsp+90h] [rbp-19h]
  extension::BasicFutureObject<extension::GFXIMovieData,void> *v48; // [rsp+98h] [rbp-11h]
  std::string result; // [rsp+A0h] [rbp-9h] BYREF

  v45 = -2i64;
  v4 = translateLangName;
  v43 = translateLangName;
  memset(&v38, 0, sizeof(v38));
  Myend = 0i64;
  Myfirst = conf->m_fontFileNames._Mypair._Myval2._Myfirst;
  Mylast = conf->m_fontFileNames._Mypair._Myval2._Mylast;
  v8 = 0i64;
  v9 = 0i64;
  if ( Myfirst != Mylast )
  {
    for ( i = &this->m_fontFileLocation; ; i = &this->m_fontFileLocation )
    {
      std::operator+<char>(&result, i, Myfirst);
      v40 = 0;
      v44._Mypair._Myval2._Myres = 15i64;
      v44._Mypair._Myval2._Mysize = 0i64;
      v44._Mypair._Myval2._Bx._Buf[0] = 0;
      std::string::assign(&v44, &result, 0i64, 0xFFFFFFFFFFFFFFFFui64);
      extension::BasicFutureObject<extension::GFXIMovieData,void>::AssetCache::getCachedOrLoadStart(
        v11,
        &v41,
        &v44,
        v12);
      if ( &v39 >= (char *)v8
        || v9 > (extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> *)&v39 )
      {
        if ( v8 == Myend && !(Myend - v8) )
        {
          v22 = v8 - v9;
          if ( v22 == 0xFFFFFFFFFFFFFFFi64 )
            std::_Xlength_error("vector<T> too long");
          v23 = v22 + 1;
          v24 = Myend - v9;
          v25 = 0i64;
          if ( 0xFFFFFFFFFFFFFFFi64 - (v24 >> 1) >= v24 )
            v25 = v24 + (v24 >> 1);
          if ( v25 >= v23 )
            v23 = v25;
          std::vector<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>>::_Reallocate(
            &v38,
            v23,
            v13,
            v14);
          Myend = v38._Mypair._Myval2._Myend;
          v8 = v38._Mypair._Myval2._Mylast;
          v9 = v38._Mypair._Myval2._Myfirst;
        }
        if ( v8 )
        {
          v8->m_isNoCache = v40;
          v8->m_body.m_ptr = (extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body *)v41.m_ptr;
          m_ptr = v41.m_ptr;
          if ( !v41.m_ptr )
            goto LABEL_29;
          _InterlockedExchangeAdd64((volatile signed __int64 *)&v41.m_ptr->m_refCount.m_ptr->m_sharedCount, 1ui64);
          Myend = v38._Mypair._Myval2._Myend;
          v8 = v38._Mypair._Myval2._Mylast;
          v9 = v38._Mypair._Myval2._Myfirst;
        }
      }
      else
      {
        v15 = &v39 - (char *)v9;
        if ( v8 == Myend && !(Myend - v8) )
        {
          v16 = v8 - v9;
          if ( v16 == 0xFFFFFFFFFFFFFFFi64 )
            std::_Xlength_error("vector<T> too long");
          v17 = v16 + 1;
          v18 = Myend - v9;
          v19 = 0i64;
          if ( 0xFFFFFFFFFFFFFFFi64 - (v18 >> 1) >= v18 )
            v19 = v18 + (v18 >> 1);
          if ( v19 >= v17 )
            v17 = v19;
          std::vector<extension::BasicFutureObject<OGLTexture,extension::FutureTextureOption>>::_Reallocate(
            &v38,
            v17,
            v13,
            v14);
          Myend = v38._Mypair._Myval2._Myend;
          v8 = v38._Mypair._Myval2._Mylast;
          v9 = v38._Mypair._Myval2._Myfirst;
        }
        v20 = v15 & 0xFFFFFFFFFFFFFFF0ui64;
        if ( v8 )
        {
          v8->m_isNoCache = *(&v9->m_isNoCache + v20);
          v21 = *(extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body **)((char *)&v9->m_body.m_ptr + v20);
          v8->m_body.m_ptr = v21;
          if ( v21 )
          {
            _InterlockedExchangeAdd64((volatile signed __int64 *)&v21->m_refCount.m_ptr->m_sharedCount, 1ui64);
            Myend = v38._Mypair._Myval2._Myend;
            v8 = v38._Mypair._Myval2._Mylast;
            v9 = v38._Mypair._Myval2._Myfirst;
          }
        }
      }
      m_ptr = v41.m_ptr;
LABEL_29:
      v38._Mypair._Myval2._Mylast = ++v8;
      if ( m_ptr )
      {
        if ( _InterlockedExchangeAdd64(
               (volatile signed __int64 *)&m_ptr->m_refCount.m_ptr->m_sharedCount,
               0xFFFFFFFFFFFFFFFFui64) == 1 )
          ((void (__fastcall *)(extension::BasicFutureObject<extension::GFXIMovieData,void>::Body *, __int64))m_ptr->~RefCountableWeakSupportBase)(
            m_ptr,
            1i64);
        v9 = v38._Mypair._Myval2._Myfirst;
        v8 = v38._Mypair._Myval2._Mylast;
        Myend = v38._Mypair._Myval2._Myend;
      }
      if ( result._Mypair._Myval2._Myres >= 0x10 )
      {
        Ptr = result._Mypair._Myval2._Bx._Ptr;
        if ( result._Mypair._Myval2._Myres + 1 >= 0x1000 )
        {
          if ( (result._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
            invalid_parameter_noinfo_noreturn();
          v28 = (char *)*((_QWORD *)result._Mypair._Myval2._Bx._Ptr - 1);
          if ( v28 >= result._Mypair._Myval2._Bx._Ptr )
            invalid_parameter_noinfo_noreturn();
          if ( (char *)(result._Mypair._Myval2._Bx._Ptr - v28) < (char *)8 )
            invalid_parameter_noinfo_noreturn();
          if ( (char *)(result._Mypair._Myval2._Bx._Ptr - v28) > (char *)0x27 )
            invalid_parameter_noinfo_noreturn();
          Ptr = (char *)*((_QWORD *)result._Mypair._Myval2._Bx._Ptr - 1);
        }
        operator delete(Ptr);
      }
      ++Myfirst;
      Mylast = conf->m_fontFileNames._Mypair._Myval2._Mylast;
      if ( Myfirst == Mylast )
      {
        v4 = v43;
        break;
      }
    }
  }
  p_m_fontFiles = &this->m_pendingFontStates.m_fontFiles;
  if ( &this->m_pendingFontStates.m_fontFiles != (std::vector<extension::BasicFutureObject<extension::GFXIMovieData,void>> *)&v38 )
  {
    v46 = (extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> *)p_m_fontFiles->_Mypair._Myval2._Myfirst;
    v30 = v46;
    p_m_fontFiles->_Mypair._Myval2._Myfirst = (extension::BasicFutureObject<extension::GFXIMovieData,void> *)v9;
    v9 = v30;
    v38._Mypair._Myval2._Myfirst = v30;
    v47 = this->m_pendingFontStates.m_fontFiles._Mypair._Myval2._Mylast;
    v31 = (extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> *)v47;
    this->m_pendingFontStates.m_fontFiles._Mypair._Myval2._Mylast = (extension::BasicFutureObject<extension::GFXIMovieData,void> *)v8;
    v8 = v31;
    v38._Mypair._Myval2._Mylast = v31;
    v48 = this->m_pendingFontStates.m_fontFiles._Mypair._Myval2._Myend;
    v32 = (extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption> *)v48;
    this->m_pendingFontStates.m_fontFiles._Mypair._Myval2._Myend = (extension::BasicFutureObject<extension::GFXIMovieData,void> *)Myend;
    Myend = v32;
    v38._Mypair._Myval2._Myend = v32;
  }
  pObject = (Scaleform::RefCountVImpl *)conf->m_fontMap.pObject;
  if ( pObject )
    Scaleform::Render::RenderBuffer::AddRef(pObject);
  v34 = (Scaleform::RefCountVImpl *)this->m_pendingFontStates.m_fontMap.pObject;
  if ( v34 )
    Scaleform::RefCountImpl::Release(v34);
  this->m_pendingFontStates.m_fontMap.pObject = conf->m_fontMap.pObject;
  v35 = (Scaleform::RefCountVImpl *)this->m_pendingFontStates.m_fontLib.pObject;
  if ( v35 )
    Scaleform::RefCountImpl::Release(v35);
  this->m_pendingFontStates.m_fontLib.pObject = 0i64;
  p_m_translateLangName = &this->m_pendingFontStates.m_translateLangName;
  if ( &this->m_pendingFontStates.m_translateLangName != v4 )
    std::string::assign(p_m_translateLangName, v4, 0i64, 0xFFFFFFFFFFFFFFFFui64);
  if ( v9 )
  {
    if ( v9 != v8 )
    {
      p_m_body = (std::string **)&v9->m_body;
      do
      {
        p_m_translateLangName = *p_m_body;
        if ( *p_m_body )
        {
          if ( _InterlockedExchangeAdd64(
                 (volatile signed __int64 *)(*(_QWORD *)&p_m_translateLangName->_Mypair._Myval2._Bx._Alias[8] + 16i64),
                 0xFFFFFFFFFFFFFFFFui64) == 1 )
            (*(void (__fastcall **)(std::string *, __int64))p_m_translateLangName->_Mypair._Myval2._Bx._Ptr)(
              p_m_translateLangName,
              1i64);
          v8 = v38._Mypair._Myval2._Mylast;
        }
        p_m_body += 2;
      }
      while ( p_m_body - 1 != (std::string **)v8 );
      Myend = v38._Mypair._Myval2._Myend;
      v9 = v38._Mypair._Myval2._Myfirst;
    }
    std::_Wrap_alloc<std::allocator<AgDelegate1<AgSuspendingEvent const &,void>>>::deallocate(
      (std::_Wrap_alloc<std::allocator<AgDelegate1<AgUserUpdatedEvent const &,void> > > *)p_m_translateLangName,
      (AgDelegate1<AgUserUpdatedEvent const &,void> *)v9,
      Myend - v9);
  }
}

void __fastcall extension::GFXIFontManager::FontStates::moveFrom(
        extension::GFXIFontManager::FontStates *this,
        extension::GFXIFontManager::FontStates *o)
{
  std::string *p_m_translateLangName; // rdx
  std::string *v5; // rcx
  Scaleform::Ptr<Scaleform::GFx::FontMap> *p_m_fontMap; // r14
  Scaleform::RefCountVImpl **v7; // rsi
  std::vector<extension::BasicFutureObject<extension::GFXIMovieData,void>> *p_m_fontFiles; // rdi
  std::vector<extension::BasicFutureObject<extension::GFXIMovieData,void>> *v9; // rbx
  extension::BasicFutureObject<extension::GFXIMovieData,void> *Myfirst; // rcx
  extension::BasicFutureObject<extension::GFXIMovieData,void> *Mylast; // rdx
  extension::BasicFutureObject<extension::GFXIMovieData,void> *Myend; // rdx

  p_m_translateLangName = &o->m_translateLangName;
  v5 = &this->m_translateLangName;
  if ( v5 != p_m_translateLangName )
    std::string::assign(v5, p_m_translateLangName, 0i64, 0xFFFFFFFFFFFFFFFFui64);
  if ( o != this )
  {
    if ( this->m_fontLib.pObject )
      Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)this->m_fontLib.pObject);
    this->m_fontLib.pObject = o->m_fontLib.pObject;
    o->m_fontLib.pObject = 0i64;
  }
  p_m_fontMap = &o->m_fontMap;
  v7 = (Scaleform::RefCountVImpl **)&this->m_fontMap;
  if ( &o->m_fontMap != &this->m_fontMap )
  {
    if ( *v7 )
      Scaleform::RefCountImpl::Release(*v7);
    *v7 = (Scaleform::RefCountVImpl *)p_m_fontMap->pObject;
    p_m_fontMap->pObject = 0i64;
  }
  p_m_fontFiles = &o->m_fontFiles;
  v9 = &this->m_fontFiles;
  if ( v9 != p_m_fontFiles )
  {
    Myfirst = v9->_Mypair._Myval2._Myfirst;
    v9->_Mypair._Myval2._Myfirst = p_m_fontFiles->_Mypair._Myval2._Myfirst;
    p_m_fontFiles->_Mypair._Myval2._Myfirst = Myfirst;
    Mylast = v9->_Mypair._Myval2._Mylast;
    v9->_Mypair._Myval2._Mylast = p_m_fontFiles->_Mypair._Myval2._Mylast;
    p_m_fontFiles->_Mypair._Myval2._Mylast = Mylast;
    Myend = v9->_Mypair._Myval2._Myend;
    v9->_Mypair._Myval2._Myend = p_m_fontFiles->_Mypair._Myval2._Myend;
    p_m_fontFiles->_Mypair._Myval2._Myend = Myend;
  }
  std::vector<extension::BasicFutureObject<extension::GFXIMovieData,void>>::clear(p_m_fontFiles);
}

void __fastcall extension::GFXIFontManager::registerLanguage(
        extension::GFXIFontManager *this,
        const char *languageName,
        const extension::GFXIFontManager::LanguageConfig *conf)
{
  std::string *Myfirst; // rdi
  extension::GFXILoader *v7; // rax
  unsigned __int64 v8; // r8
  std::_Tree_node<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig>,void *> *v9; // rax
  const std::piecewise_construct_t *v10; // rdx
  std::tuple<> *v11; // r9
  std::_Tree_node<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig>,void *> *Ptr; // rbx
  std::_Tree_node<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig>,void *> *_Newnode; // rax
  extension::gfxi_detail::LanguageConfigImpl *m_ptr; // rdx
  extension::RefCountable<extension::gfxi_detail::LanguageConfigImpl> *v15; // rcx
  char *v16; // rcx
  char *v17; // rax
  std::tuple<std::string &&> v18; // [rsp+30h] [rbp-68h] BYREF
  std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig> > > > result; // [rsp+38h] [rbp-60h] BYREF
  __int64 v20; // [rsp+40h] [rbp-58h]
  std::_Tree_node<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig>,void *> *v21; // [rsp+48h] [rbp-50h]
  std::_Tree_node<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig>,void *> *Myhead; // [rsp+50h] [rbp-48h]
  std::string _Keyval; // [rsp+58h] [rbp-40h] BYREF

  v20 = -2i64;
  if ( !this->m_langConfigMap._Mypair._Myval2._Myval2._Mysize
    && conf->m_impl.m_ptr->m_fontFileNames._Mypair._Myval2._Myfirst != conf->m_impl.m_ptr->m_fontFileNames._Mypair._Myval2._Mylast
    && extension::GFXILoader::Instance()->m_loader._Mypair._Myval2 )
  {
    Myfirst = conf->m_impl.m_ptr->m_fontFileNames._Mypair._Myval2._Myfirst;
    if ( Myfirst->_Mypair._Myval2._Myres >= 0x10 )
      Myfirst = (std::string *)Myfirst->_Mypair._Myval2._Bx._Ptr;
    v7 = extension::GFXILoader::Instance();
    Scaleform::GFx::StateBag::SetDefaultFontLibName(v7->m_loader._Mypair._Myval2, Myfirst->_Mypair._Myval2._Bx._Buf);
  }
  _Keyval._Mypair._Myval2._Myres = 15i64;
  v8 = 0i64;
  _Keyval._Mypair._Myval2._Mysize = 0i64;
  _Keyval._Mypair._Myval2._Bx._Buf[0] = 0;
  if ( *languageName )
  {
    v8 = -1i64;
    do
      ++v8;
    while ( languageName[v8] );
  }
  std::string::assign(&_Keyval, languageName, v8);
  v9 = std::_Tree<std::_Tmap_traits<std::string,unsigned int,std::less<std::string>,std::allocator<std::pair<std::string const,unsigned int>>,0>>::_Lbound<std::string>(
         &this->m_langConfigMap,
         &_Keyval);
  Ptr = v9;
  v21 = v9;
  Myhead = this->m_langConfigMap._Mypair._Myval2._Myval2._Myhead;
  if ( v9 == Myhead || std::string::compare(&_Keyval, &v9->_Myval.first) < 0 )
  {
    v18._Myfirst._Val = &_Keyval;
    _Newnode = std::_Tree_comp_alloc<std::_Tmap_traits<std::string,extension::GFXIFontManager::LanguageConfig,std::less<std::string>,std::allocator<std::pair<std::string const,extension::GFXIFontManager::LanguageConfig>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<std::string &&>,std::tuple<>>(
                 &this->m_langConfigMap,
                 v10,
                 &v18,
                 v11);
    std::_Tree<std::_Tmap_traits<std::string,extension::GFXIFontManager::LanguageConfig,std::less<std::string>,std::allocator<std::pair<std::string const,extension::GFXIFontManager::LanguageConfig>>,0>>::_Insert_hint<std::pair<std::string const,extension::GFXIFontManager::LanguageConfig> &,std::_Tree_node<std::pair<std::string const,extension::GFXIFontManager::LanguageConfig>,void *> *>(
      &this->m_langConfigMap,
      &result,
      (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig> > > >)Ptr,
      &_Newnode->_Myval,
      _Newnode);
    Ptr = result._Ptr;
  }
  m_ptr = conf->m_impl.m_ptr;
  if ( conf->m_impl.m_ptr )
    _InterlockedExchangeAdd64((volatile signed __int64 *)m_ptr, 1ui64);
  v15 = Ptr->_Myval.second.m_impl.m_ptr;
  Ptr->_Myval.second.m_impl.m_ptr = m_ptr;
  if ( v15 )
    extension::RefCountable<extension::gfxi_detail::LanguageConfigImpl>::release(v15);
  if ( _Keyval._Mypair._Myval2._Myres >= 0x10 )
  {
    v16 = _Keyval._Mypair._Myval2._Bx._Ptr;
    if ( _Keyval._Mypair._Myval2._Myres + 1 >= 0x1000 )
    {
      if ( (_Keyval._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
        invalid_parameter_noinfo_noreturn();
      v17 = (char *)*((_QWORD *)_Keyval._Mypair._Myval2._Bx._Ptr - 1);
      if ( v17 >= _Keyval._Mypair._Myval2._Bx._Ptr )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(_Keyval._Mypair._Myval2._Bx._Ptr - v17) < (char *)8 )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(_Keyval._Mypair._Myval2._Bx._Ptr - v17) > (char *)0x27 )
        invalid_parameter_noinfo_noreturn();
      v16 = (char *)*((_QWORD *)_Keyval._Mypair._Myval2._Bx._Ptr - 1);
    }
    operator delete(v16);
  }
}

void __fastcall extension::RefCountable<extension::gfxi_detail::LanguageConfigImpl>::release(
        extension::RefCountable<extension::gfxi_detail::LanguageConfigImpl> *this,
        __int64 a2,
        std::_Wrap_alloc<std::allocator<std::string > > *a3,
        std::integral_constant<bool,0> a4)
{
  Scaleform::RefCountVImpl *My_val; // rcx
  std::string *v6; // rcx
  std::_Wrap_alloc<std::allocator<AgDirectory::DirectoryEntry> > *v7; // rcx

  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)this, 0xFFFFFFFFFFFFFFFFui64) == 1 && this )
  {
    My_val = (Scaleform::RefCountVImpl *)this[4].m_refCount.m_value._My_val;
    if ( My_val )
      Scaleform::RefCountImpl::Release(My_val);
    v6 = (std::string *)this[1].m_refCount.m_value._My_val;
    if ( v6 )
    {
      std::_Destroy_range1<std::allocator<std::string>,std::string *>(
        v6,
        (std::string *)this[2].m_refCount.m_value._My_val,
        a3,
        a4);
      std::_Wrap_alloc<std::allocator<AgDirectory::DirectoryEntry>>::deallocate(
        v7,
        (AgDirectory::DirectoryEntry *)this[1].m_refCount.m_value._My_val,
        (__int64)(this[3].m_refCount.m_value._My_val - this[1].m_refCount.m_value._My_val) >> 5);
      this[1].m_refCount.m_value._My_val = 0i64;
      this[2].m_refCount.m_value._My_val = 0i64;
      this[3].m_refCount.m_value._My_val = 0i64;
    }
    operator delete(this, 0x28ui64);
  }
}

void __fastcall extension::GFXIFontManager::renderDrawText(
        extension::GFXIFontManager *this,
        Scaleform::Render::HAL *renderer)
{
  Scaleform::GFx::DrawTextManager *pObject; // rcx
  Scaleform::RefCountVImpl **DisplayHandle; // rdi
  Scaleform::Render::ContextImpl::RenderNotify *v5; // rax
  Scaleform::Render::TreeRoot *RenderEntry; // rax
  Scaleform::Render::ContextImpl::RTHandle v7; // [rsp+40h] [rbp+8h] BYREF

  pObject = this->m_drawTextManager.pObject;
  if ( pObject )
  {
    DisplayHandle = (Scaleform::RefCountVImpl **)Scaleform::GFx::DrawTextManager::GetDisplayHandle(pObject);
    if ( *DisplayHandle )
      Scaleform::Render::RenderBuffer::AddRef(*DisplayHandle);
    v7.pData.pObject = (Scaleform::Render::ContextImpl::RTHandle::HandleData *)*DisplayHandle;
    v5 = renderer->GetContextNotify(renderer);
    if ( Scaleform::Render::ContextImpl::RTHandle::NextCapture(&v7, v5) )
    {
      RenderEntry = (Scaleform::Render::TreeRoot *)Scaleform::Render::ContextImpl::RTHandle::GetRenderEntry(&v7);
      Scaleform::Render::HAL::Draw(renderer, RenderEntry);
    }
    Scaleform::Render::ContextImpl::RTHandle::~RTHandle(&v7);
  }
}

void __fastcall extension::GFXIFontManager::renderDrawTextImmediate(
        extension::GFXIFontManager *this,
        Scaleform::Render::HAL *renderer,
        int fbo)
{
  int v5; // er15
  __int64 v6; // r14
  int v7; // ebx
  extension::GFXIRenderer *v8; // rax
  int v9; // er8
  Scaleform::RefCountVImpl **DisplayHandle; // rbx
  int v11; // eax
  Scaleform::Render::TreeRoot *RenderEntry; // rbx
  Scaleform::Render::ContextImpl::RenderNotify *v13; // rax
  Scaleform::Render::TreeRoot *v14; // rax
  int v15; // ecx
  Scaleform::Render::Viewport v16; // [rsp+30h] [rbp-21h] BYREF
  Scaleform::Render::Viewport vp; // [rsp+60h] [rbp+Fh] BYREF
  Scaleform::Render::ContextImpl::RTHandle v18; // [rsp+B8h] [rbp+67h] BYREF

  v5 = *(_DWORD *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[7][136];
  if ( this->m_drawTextManager.pObject )
  {
    v6 = *(_QWORD *)&AppMain::pApp;
    v7 = *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 32i64);
    v8 = extension::GFXIRenderer::Instance();
    extension::GFXIRenderer::useOffscreenRenderTarget(v8, v5, v9, v7);
    renderer->BeginScene(renderer);
    DisplayHandle = (Scaleform::RefCountVImpl **)Scaleform::GFx::DrawTextManager::GetDisplayHandle(this->m_drawTextManager.pObject);
    if ( *DisplayHandle )
      Scaleform::Render::RenderBuffer::AddRef(*DisplayHandle);
    v18.pData.pObject = (Scaleform::Render::ContextImpl::RTHandle::HandleData *)*DisplayHandle;
    v11 = *(_DWORD *)(v6 + 32);
    vp.BufferWidth = 2048;
    vp.BufferHeight = v11;
    *(_QWORD *)&vp.Left = 0i64;
    vp.Width = 2048;
    vp.Height = v11;
    memset(&vp.ScissorLeft, 0, 20);
    RenderEntry = (Scaleform::Render::TreeRoot *)Scaleform::Render::ContextImpl::RTHandle::GetRenderEntry(&v18);
    Scaleform::Render::TreeRoot::SetViewport(RenderEntry, &vp);
    Scaleform::GFx::DrawTextManager::Capture(this->m_drawTextManager.pObject, 1);
    v13 = renderer->GetContextNotify(renderer);
    if ( Scaleform::Render::ContextImpl::RTHandle::NextCapture(&v18, v13) )
    {
      v14 = (Scaleform::Render::TreeRoot *)Scaleform::Render::ContextImpl::RTHandle::GetRenderEntry(&v18);
      Scaleform::Render::HAL::Draw(renderer, v14);
      renderer->Flush(renderer);
    }
    renderer->EndScene(renderer);
    v15 = *(_DWORD *)(v6 + 32);
    v16.BufferWidth = *(_DWORD *)(v6 + 28);
    v16.BufferHeight = v15;
    *(_QWORD *)&v16.Left = 0i64;
    v16.Width = v16.BufferWidth;
    v16.Height = v15;
    memset(&v16.ScissorLeft, 0, 20);
    Scaleform::GFx::DrawTextManager::SetViewport(this->m_drawTextManager.pObject, &v16);
    Scaleform::Render::TreeRoot::SetViewport(RenderEntry, &v16);
    Scaleform::Render::ContextImpl::RTHandle::~RTHandle(&v18);
  }
}

__int64 __fastcall extension::GFXIFontManager::setLanguage(extension::GFXIFontManager *this, const char *langName)
{
  extension::ExLockable<extension::GFXIFontManager> *v4; // rbp
  unsigned __int64 v5; // r8
  std::_Tree_node<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig>,void *> *Myhead; // rdi
  std::_Tree_node<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig>,void *> *Parent; // rsi
  std::_Tree_node<std::pair<std::string const ,extension::GFXIFontManager::LanguageConfig>,void *> *v8; // rbx
  unsigned __int64 Myres; // r12
  unsigned __int64 Mysize; // r14
  char *Ptr; // r15
  char **p_Myval; // rcx
  std::string *v13; // rdx
  unsigned __int64 v14; // rbp
  size_t v15; // r8
  int v16; // eax
  char **v17; // rdx
  std::string *v18; // rcx
  size_t v19; // rsi
  size_t v20; // r8
  int v21; // eax
  char *v22; // rax
  unsigned __int64 v23; // r15
  unsigned __int8 v24; // bl
  int m_currentLanguage; // esi
  std::string *p_m_currentLangName; // rcx
  __int64 v27; // rdx
  std::_Wrap_alloc<std::allocator<std::string > > *v28; // r8
  std::integral_constant<bool,0> v29; // r9
  extension::gfxi_detail::LanguageConfigImpl *m_ptr; // rax
  extension::gfxi_detail::LanguageConfigImpl *v31; // rcx
  extension::gfxi_detail::CustomFontProvider *pObject; // rcx
  extension::ExLockable<extension::GFXIFontManager> *v34; // [rsp+20h] [rbp-88h]
  extension::ExLockable<extension::GFXIFontManager> *v35; // [rsp+28h] [rbp-80h]
  std::string v36; // [rsp+48h] [rbp-60h] BYREF

  v4 = &this->extension::ExLockable<extension::GFXIFontManager>;
  if ( !this )
    v4 = 0i64;
  v34 = v4;
  v35 = v4;
  extension::lockable_detail::LockUnlock(v4, 1);
  v36._Mypair._Myval2._Myres = 15i64;
  v36._Mypair._Myval2._Mysize = 0i64;
  v36._Mypair._Myval2._Bx._Buf[0] = 0;
  if ( *langName )
  {
    v5 = -1i64;
    do
      ++v5;
    while ( langName[v5] );
  }
  else
  {
    v5 = 0i64;
  }
  std::string::assign(&v36, langName, v5);
  Myhead = this->m_langConfigMap._Mypair._Myval2._Myval2._Myhead;
  Parent = Myhead->_Parent;
  v8 = Myhead;
  Myres = v36._Mypair._Myval2._Myres;
  Mysize = v36._Mypair._Myval2._Mysize;
  Ptr = v36._Mypair._Myval2._Bx._Ptr;
  if ( !Parent->_Isnil )
  {
    do
    {
      p_Myval = (char **)&Parent->_Myval;
      v13 = &v36;
      if ( Myres >= 0x10 )
        v13 = (std::string *)Ptr;
      if ( Parent->_Myval.first._Mypair._Myval2._Myres >= 0x10 )
        p_Myval = (char **)*p_Myval;
      v14 = Parent->_Myval.first._Mypair._Myval2._Mysize;
      v15 = Mysize;
      if ( v14 < Mysize )
        v15 = Parent->_Myval.first._Mypair._Myval2._Mysize;
      if ( !v15 || (v16 = memcmp(p_Myval, v13, v15)) == 0 )
      {
        if ( v14 >= Mysize )
          v16 = v14 > Mysize;
        else
          v16 = -1;
      }
      if ( v16 >= 0 )
      {
        v8 = Parent;
        Parent = Parent->_Left;
      }
      else
      {
        Parent = Parent->_Right;
      }
    }
    while ( !Parent->_Isnil );
    v4 = v34;
  }
  if ( v8 == Myhead )
    goto LABEL_37;
  v17 = (char **)&v8->_Myval;
  if ( v8->_Myval.first._Mypair._Myval2._Myres >= 0x10 )
    v17 = (char **)*v17;
  v18 = &v36;
  if ( Myres >= 0x10 )
    v18 = (std::string *)Ptr;
  v19 = v8->_Myval.first._Mypair._Myval2._Mysize;
  v20 = v19;
  if ( Mysize < v19 )
    v20 = Mysize;
  if ( !v20 || (v21 = memcmp(v18, v17, v20)) == 0 )
  {
    if ( Mysize >= v19 )
      v21 = Mysize > v19;
    else
      v21 = -1;
  }
  if ( v21 < 0 )
LABEL_37:
    v8 = Myhead;
  if ( Myres >= 0x10 )
  {
    if ( Myres + 1 >= 0x1000 )
    {
      if ( (v36._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
        invalid_parameter_noinfo_noreturn();
      v22 = (char *)*((_QWORD *)Ptr - 1);
      if ( v22 >= Ptr )
        invalid_parameter_noinfo_noreturn();
      v23 = Ptr - v22;
      if ( v23 < 8 )
        invalid_parameter_noinfo_noreturn();
      if ( v23 > 0x27 )
        invalid_parameter_noinfo_noreturn();
      Ptr = v22;
    }
    operator delete(Ptr);
  }
  v36._Mypair._Myval2._Myres = 15i64;
  v36._Mypair._Myval2._Mysize = 0i64;
  v36._Mypair._Myval2._Bx._Buf[0] = 0;
  if ( v8 == this->m_langConfigMap._Mypair._Myval2._Myval2._Myhead )
  {
    v24 = 0;
  }
  else
  {
    m_currentLanguage = this->m_currentLanguage;
    if ( &this->m_currentLangName != (std::string *)&v8->_Myval )
      std::string::assign(&this->m_currentLangName, &v8->_Myval.first, 0i64, 0xFFFFFFFFFFFFFFFFui64);
    if ( this->m_currentLangName._Mypair._Myval2._Myres < 0x10 )
      p_m_currentLangName = &this->m_currentLangName;
    else
      p_m_currentLangName = (std::string *)this->m_currentLangName._Mypair._Myval2._Bx._Ptr;
    this->m_currentLanguage = extension::_anonymous_namespace_::MyGetLanguageFromName(p_m_currentLangName->_Mypair._Myval2._Bx._Buf);
    m_ptr = v8->_Myval.second.m_impl.m_ptr;
    if ( m_ptr )
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)m_ptr, 1ui64);
      v4 = v35;
    }
    v31 = this->m_currentLanguageConfig.m_ptr;
    this->m_currentLanguageConfig.m_ptr = m_ptr;
    if ( v31 )
      extension::RefCountable<extension::gfxi_detail::LanguageConfigImpl>::release(v31, v27, v28, v29);
    if ( m_currentLanguage != this->m_currentLanguage )
    {
      extension::GFXIFontManager::loadStartFontLib(this, &this->m_currentLangName, v8->_Myval.second.m_impl.m_ptr);
      pObject = this->m_fontProvider.pObject;
      if ( pObject )
        pObject->PrepareFontForApplicationLanguage(pObject, "$DeviceFont", this->m_currentLanguage);
    }
    v24 = 1;
  }
  extension::lockable_detail::LockUnlock(v4, -1);
  return v24;
}

void __fastcall extension::GFXIFontManager::trackSaveDataLanguage(extension::GFXIFontManager *this)
{
  int v2; // edx
  const std::pair<char const *,enum LANGUAGE_MODE> *v3; // rax
  const char *first; // rax
  const char *v5; // rdx

  v2 = 1;
  if ( *(_QWORD *)&AppMain::pApp )
    v2 = *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2197384i64);
  if ( v2 != this->m_currentLanguage )
  {
    v3 = extension::auxscript::MyLangCodeNameTable;
    while ( v3->second != v2 )
    {
      if ( ++v3 == (const std::pair<char const *,enum LANGUAGE_MODE> *)extension::auxscript::my_testpolicy_name_table )
      {
        first = 0i64;
        goto LABEL_9;
      }
    }
    first = v3->first;
LABEL_9:
    v5 = "en_US";
    if ( first )
      v5 = first;
    if ( !(unsigned __int8)extension::GFXIFontManager::setLanguage(this, v5) )
      this->m_isSaveDataTracking = 0;
  }
}

void __fastcall extension::GFXIFontManager::update(extension::GFXIFontManager *this)
{
  extension::gfxi_detail::TranslatorImpl *pObject; // rbx
  std::string *p_m_translateLangName; // rdi
  std::string *Ptr; // rcx
  Scaleform::GFx::Loader *Myval2; // rbx
  Scaleform::GFx::DrawTextManager *v6; // rax
  Scaleform::GFx::StateBag *v7; // rbx
  __int64 v8; // r8
  void **v9; // rax
  Scaleform::GFx::Value::ObjectInterface *pObjectInterface; // r9
  char Type; // cl
  __int64 v12; // rbx
  __int64 v13; // rdx
  Scaleform::GFx::DrawTextManager *v14; // rbx
  unsigned int CurrentThreadId; // eax
  extension::gfxi_detail::RefleshableTextNode *i; // rbx
  extension::BiLinkable<extension::gfxi_detail::RefleshableTextNode> **p_m_Next; // rax
  extension::BiLinkable<extension::gfxi_detail::RefleshableTextNode> *v18; // rcx
  __int64 v19; // [rsp+20h] [rbp-48h]
  void **v20; // [rsp+28h] [rbp-40h] BYREF
  Scaleform::GFx::Value val; // [rsp+30h] [rbp-38h] BYREF

  v19 = -2i64;
  if ( this->m_isSaveDataTracking )
    extension::GFXIFontManager::trackSaveDataLanguage(this);
  if ( extension::GFXIFontManager::checkPendingFontLib(this) )
  {
    p_m_translateLangName = &this->m_currentFontStates.m_translateLangName;
    if ( this->m_currentFontStates.m_translateLangName._Mypair._Myval2._Myres < 0x10 )
      Ptr = &this->m_currentFontStates.m_translateLangName;
    else
      Ptr = (std::string *)p_m_translateLangName->_Mypair._Myval2._Bx._Ptr;
    pObject = this->m_translatorImpl.pObject;
    pObject->m_translateLanguage = extension::_anonymous_namespace_::MyGetLanguageFromName(Ptr->_Mypair._Myval2._Bx._Buf);
    if ( extension::GFXILoader::Instance()->m_loader._Mypair._Myval2 )
    {
      Myval2 = extension::GFXILoader::Instance()->m_loader._Mypair._Myval2;
      Myval2->SetState(Myval2, (Scaleform::GFx::State::StateType)20i64, this->m_currentFontStates.m_fontLib.pObject);
      Myval2->SetState(Myval2, State_UserData|0x10, this->m_currentFontStates.m_fontMap.pObject);
    }
    v6 = this->m_drawTextManager.pObject;
    v7 = &v6->Scaleform::GFx::StateBag;
    if ( !v6 )
      v7 = 0i64;
    v7->SetState(v7, (Scaleform::GFx::State::StateType)20i64, this->m_currentFontStates.m_fontLib.pObject);
    v7->SetState(v7, State_UserData|0x10, this->m_currentFontStates.m_fontMap.pObject);
    v9 = &`extension::GFXIFontManager::update'::`8'::FontStateUpdater::`vftable';
    v20 = &`extension::GFXIFontManager::update'::`8'::FontStateUpdater::`vftable';
    if ( this->m_currentFontStates.m_translateLangName._Mypair._Myval2._Myres >= 0x10 )
      p_m_translateLangName = (std::string *)p_m_translateLangName->_Mypair._Myval2._Bx._Ptr;
    val.Scaleform::ListNode<Scaleform::GFx::Value> = (Scaleform::ListNode<Scaleform::GFx::Value>)_mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
    pObjectInterface = 0i64;
    val.pObjectInterface = 0i64;
    Type = 6;
    val.Type = 6;
    val.mValue.pString = (const char *)p_m_translateLangName;
    v12 = *(_QWORD *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataBase[4][16];
    if ( *(extension::gfxi_detail::TranslatorImpl **)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataBase[4][16] != (extension::gfxi_detail::TranslatorImpl *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataBase[4][8] )
    {
      while ( 1 )
      {
        v13 = v12 + 16;
        if ( !v12 )
          v13 = 40i64;
        ((void (__fastcall *)(void ***, _QWORD, __int64, Scaleform::GFx::Value::ObjectInterface *, __int64))*v9)(
          &v20,
          *(_QWORD *)v13,
          v8,
          pObjectInterface,
          v19);
        v12 = *(_QWORD *)(v12 + 8);
        if ( (char *)v12 == &extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataBase[4][8] )
          break;
        v9 = v20;
      }
      p_m_translateLangName = (std::string *)val.mValue.pString;
      Type = val.Type;
      pObjectInterface = val.pObjectInterface;
    }
    if ( (Type & 0x40) != 0 )
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(pObjectInterface, &val, p_m_translateLangName);
  }
  v14 = this->m_drawTextManager.pObject;
  CurrentThreadId = Concurrency::details::platform::GetCurrentThreadId();
  Scaleform::GFx::DrawTextManager::SetCaptureThread(v14, CurrentThreadId);
  Scaleform::GFx::DrawTextManager::Capture(this->m_drawTextManager.pObject, 1);
  for ( i = (extension::gfxi_detail::RefleshableTextNode *)extension::gfxi_detail::s_refleshableListEnd.m_Next;
        i != &extension::gfxi_detail::s_refleshableListEnd;
        i = (extension::gfxi_detail::RefleshableTextNode *)i->m_Next )
  {
    p_m_Next = &i[-1].m_Next;
    if ( !i )
      p_m_Next = 0i64;
    *((_BYTE *)p_m_Next + 72) = 0;
    v18 = p_m_Next[20];
    if ( v18 )
      ((void (__fastcall *)(extension::BiLinkable<extension::gfxi_detail::RefleshableTextNode> *, _QWORD))v18->m_Prev[19].m_Next)(
        v18,
        0i64);
  }
}

