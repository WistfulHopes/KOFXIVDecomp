#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_prefightfaceoff.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/mediasound.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglrender.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/floatinvec.h"
#include "dev/silverware/git/sdk/platforms/pc/system/agpcsysteminfo.h"
#include "dev/silverware/git/sdk/aghash.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_event.h"
#include "dev/silverware/git/sdk/agstringutils.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglfog.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglbone.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_typeinfo.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vector"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/cpusequencedataformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/png_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_keycodes.h"
#include "dev/silverware/git/sdk/agvector2.h"
#include "dev/silverware/git/sdk/agreferencecountinl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_vec64.h"
#include "dev/silverware/git/sdk/agmath.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/shot/actorshot.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actorchara.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshkey.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixstate.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_gradients.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exlockable.h"
#include "dev/silverware/git/sdk/input/agcontroller.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/hidpad/hidpadsystem.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/commandcheck.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_rasterizer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_viewport.h"
#include "dev/silverware/git/sdk/system/aguser.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/restrictringbuffer.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/soundutil.h"
#include "dev/silverware/git/sdk/agstring.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xiosbase"
#include "dev/kof/master/development/source/baseproject/jni/game/network/chkdiscononlinesv.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_math.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocale"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/materialshowcontrol.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_drawableimage.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/stdexcept"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/translate_table.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hal.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_buffer.h"
#include "dev/silverware/git/sdk/3rdparty/steam/matchmakingtypes.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/vec_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/exception"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/type_traits"
#include "dev/kof/master/development/source/baseproject/jni/game/util/syncmenuimage.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/moviedatadefine.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_characterdef.h"
#include "dev/silverware/git/sdk/input/agsdlmappingparser.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstddef"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charahitrectformat.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmirror.h"
#include "program files (x86)/windows kits/8.1/include/um/winbase.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/debug/logging.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic0.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlecall/battlecall.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/randommt.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filters.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/mat_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/system_error"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_debug.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filterparams.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/heapmemory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphqueue.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdata/effectappdata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_font.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/mutex.h"
#include "dev/kof/master/development/source/baseproject/jni/game/network/netmanager.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actor.h"
#include "dev/kof/master/development/source/baseproject/jni/game/network/leaderboard.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charadataunify.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessdefs.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaattackdataformat.h"
#include "dev/silverware/git/sdk/util/agservicecommand.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatapacked.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charadamagesettingformat.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/globalheapmemory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_pathdatapacker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_linebuffer.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/fixmemory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_highlight.h"
#include "dev/silverware/git/sdk/agpointerinl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_profiler.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_states.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglshader.h"
#include "dev/silverware/git/sdk/util/agdebugchannels.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/matrix4unaligned.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/string"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/tga_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_statebag.h"
#include "dev/silverware/git/sdk/util/agperformancecounter.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/quat_aos.h"
#include "dev/silverware/git/sdk/agclock.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xutility"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/utility"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_simplemeshcache.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/fontprovider/render_fontproviderwinapi.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/iosfwd"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/tkndata.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/combomissiondataformat.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/sounddata.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/soundgroupdataformat.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exwaitcondition.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_bundle.h"
#include "dev/silverware/git/sdk/agmemorystream.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/cameramotionpreviewsettings.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/stageprojectdata.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_bank.h"
#include "dev/silverware/git/sdk/agcondition.h"
#include "dev/silverware/git/sdk/agmemorypool.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocinfo"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloatmp.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steamclientpublic.h"
#include "dev/silverware/git/sdk/input/agcontrollerbuttoncomponent.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapemeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/jpeg_imagefile.h"
#include "dev/silverware/git/sdk/agstream.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_sse.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treetext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefileutil.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogleffect.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestagedatas.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_docview.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/bilinkable.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/tkndatas.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/shaderfxhelper.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_range.h"
#include "dev/silverware/git/sdk/filesystem/agfile.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/tween.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/effect/actoreffect.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actorobject.h"
#include "dev/silverware/git/sdk/filesystem/agpath.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogllight.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/variableheapmemorybase.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_hash.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actoroption.h"
#include "dev/silverware/git/sdk/filesystem/agmount.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/cameracheck.h"
#include "dev/silverware/git/sdk/filesystem/agdirectory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix4x4.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/freecameracheck.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixpool.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/particledata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shader.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector2unaligned.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_sgmlparser.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/texstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_context.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_missiondataloading.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_constants.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/savedatadefine.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessgen.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_functions.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treeshape.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessellator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/physicalheapmemory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlehud.h"
#include "dev/silverware/git/sdk/agsemaphore.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battleeventhandler.h"
#include "dev/kof/master/development/source/baseproject/jni/game/cpuseq/battlecpu.h"
#include "dev/silverware/git/sdk/agsemaphore.inl"
#include "dev/silverware/git/sdk/agconditionvariable.h"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/bodypush.h"
#include "dev/kof/master/development/source/baseproject/jni/game/cpuseq/sequencecontroller.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/condition_variable"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/unordered_map"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitivebundle.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/math.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thr/xthread"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treecachenode.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xhash"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/easingnumber.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/errorchecker.h"
#include "dev/kof/master/development/source/baseproject/jni/game/system/battlesysteminfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treenode.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_loader.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/functional"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_movie.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cacheeffect.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_system.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphfitter.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/refcountable.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/deque"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefile.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_operation.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/bitset"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleonlinewatching.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_player.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/combomissionjudge.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_resource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/kof/master/development/source/ps4project/baseproject/pcutil/pcdummy.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/matchingsystem.h"
#include "dev/silverware/git/sdk/agreferencedobjectinl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleloading.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_stroker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "dev/silverware/git/sdk/agpointer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/dds_imagefile.h"
#include "dev/silverware/git/sdk/agcondition.inl"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exthread.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/boolinvec.h"
#include "dev/silverware/git/sdk/agreferencedobject.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaprojectdataformat.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/jobmanager.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textmeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/list"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charabasestatusformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphparam.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/inputkeyrecord.h"
#include "dev/silverware/git/sdk/agmovieplayer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcache.h"
#include "program files (x86)/windows kits/8.1/include/shared/guiddef.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_ps4modelroom.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcacheconfig.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstring"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_hashkey.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hairliner.h"
#include "dev/silverware/git/sdk/system/agusermanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_filterdesc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_styledtext.h"
#include "program files (x86)/windows kits/8.1/include/shared/stralign.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thread"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory0"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix3x4.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/auxscript.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/future_asset.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_core.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_queue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector3unaligned.h"
#include "dev/silverware/git/sdk/agthread.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/memory"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_fontmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitive.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/asyncjob.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/operationmapper.h"
#include "dev/silverware/git/sdk/agmutex.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocaddr.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/libcommon.h"
#include "dev/silverware/git/sdk/agscopedlock.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_radixtree.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdatalistmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_twips.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/atomic_int.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/input/imesystem.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectcommon.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_containers.h"
#include "dev/silverware/git/sdk/util/agservice.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/atomic"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestageresourcecontainer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_wwhelper.h"
#include "dev/silverware/git/sdk/agthreadpool.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/resourcemanager.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestageshader.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_manager.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/asynccharafileload.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/tuple"
#include "dev/silverware/git/sdk/3rdparty/steam/isteamhtmlsurface.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/vec_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_new.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/weapon/actorweapon.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/boolinvec.h"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/hitrectcollection.h"
#include "dev/kof/master/development/source/baseproject/jni/game/system/battlecontroller.h"
#include "dev/silverware/git/sdk/agreferencecount.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actionsystem.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaactiondataformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_vertex.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/vectormath_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/array"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charafilebase.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/fontprovider/render_fontproviderhud.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_wstring.h"
#include "program files (x86)/windows kits/8.1/include/um/winnt.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/algorithm"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/time.h"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/damagesetting.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "program files (x86)/windows kits/8.1/include/shared/basetsd.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/commanddataformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/kof/master/development/source/baseproject/jni/game/network/playtogether.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/titlestoragesystem.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/ios"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/map"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocnum"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtree"
#include "dev/kof/master/development/source/baseproject/jni/game/appmain.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threadcheck.h"
#include "dev/silverware/git/sdk/input/agcontrollercomponent.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/mutex"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_exception.h"
#include "dev/silverware/git/sdk/agdisplay.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textlayout.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_image.h"
#include "dev/silverware/git/sdk/agconditionvariable.inl"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/chrono"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "dev/silverware/git/sdk/agvector4.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdata/effectdata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "dev/silverware/git/sdk/util/agdelegate.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "dev/silverware/git/sdk/agvector3.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/limits"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/chartdata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/mediamanager.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/mat_aos.h"
#include "dev/silverware/git/sdk/system/agsysteminfo.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/savedata.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steam_api_internal.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/audiopresenter.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/game_script.h"
#include "dev/kof/master/development/source/ps4project/baseproject/pcutil/pccontrolsmanager.h"
#include "dev/silverware/git/sdk/input/aginputmanager.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/shared_lua_context.h"
#include "dev/silverware/git/sdk/agsingleton.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/rapper/graphicsopt.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector4unaligned.h"
#include "dev/silverware/git/sdk/agmutex.inl"
#include "dev/kof/master/development/source/baseproject/jni/game/data/trainingsetting.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/combomissionattackeventlistener.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charamaterialsettingformat.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmodel.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleonline.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/fix32.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_screentoworld.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actorcharabase.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglcurve.h"
#include "program files (x86)/windows kits/8.1/include/um/winuser.h"
#include "dev/kof/master/development/source/baseproject/jni/game/define/charabonedefine.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xxatomic"
#include "dev/silverware/git/sdk/memory/agallocators.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/vecidx_aos.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/colorholder.h"
#include "dev/silverware/git/sdk/agrectangle.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_strokeraa.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_scale9grid.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steam_api.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/floatinvec.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraystaticbuff.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xfacet"
#include "dev/silverware/git/sdk/agreferenceinl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cxform.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/battleplayerinfo.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/effect.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglsprite.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/quat_aos.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actionblackout.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/asyncjob.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/appmain.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/rapper/graphicsopt.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/lapi.c"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/lauxlib.c"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/ldo.c"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/shared_lua_context.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/lgc.c"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/lstate.c"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/lstring.c"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/lua/src/lzio.c"

struct extension::auxscript::UDTraits<extension::BasicFutureObject<extension::AsyncFileImage,void> >
{
	static const char RegistryName[0]; // 0xFFFFFFFFFFFFFFFF
};
const char extension::auxscript::UDTraits<extension::BasicFutureObject<extension::AsyncFileImage,void> >::RegistryName[16]; // 0x140926CA0
std::piecewise_construct_t std::piecewise_construct; // 0x1408AED14
long extension::BasicLuaFuncs::Lfn_CallIfCallable(lua_State * L); // 0x14026F2A0
long extension::BasicLuaFuncs::Lfn_Yield(lua_State * L); // 0x14026F330
long extension::BasicLuaFuncs::Lfn_MakeClosure(lua_State * L); // 0x14026F480
long extension::BasicLuaFuncs::Lfn_WaitFor(lua_State * L); // 0x14026F4E0
void extension::BasicLuaFuncs::AuxSetFuncs(lua_State * L); // 0x14026F7B0
class extension::GameScript::LuaLib
{
private:
	static long Lfn_CheckedMetaIndex(lua_State *);
	static long Lfn_CheckedMetaNewIndex(lua_State *);
public:
	static long Lfn_GameScriptThreadFunction(lua_State *);
};
long extension::GameScript::LuaLib::Lfn_CheckedMetaIndex(lua_State * L); // 0x14026F860
long extension::GameScript::LuaLib::Lfn_CheckedMetaNewIndex(lua_State * L); // 0x14026FA20
long extension::GameScript::LuaLib::Lfn_GameScriptThreadFunction(lua_State * L); // 0x14026FAD0
class extension::auxscript::UDHelper<extension::BasicFutureObject<extension::AsyncFileImage,void> >
{
	struct Traits;
public:
	static void MakeMeta(lua_State *, luaL_Reg *);
	static void GetMeta(lua_State *);
	static bool IsNilMeta(lua_State *);
	static extension::BasicFutureObject<extension::AsyncFileImage,void> & CheckSelf(lua_State *, long);
	static extension::BasicFutureObject<extension::AsyncFileImage,void> * TestSelf(lua_State *, long);
private:
	static long Lfn_gc(lua_State *);
	static long Lfn_tostring(lua_State *);
};
void extension::GameScript::InitGameThread(lua_State * L); // 0x140270010
void extension::GameScript::FrameUpdate(); // 0x140270260//decompilation failure at 140926CA0!
//decompilation failure at 1408AED14!
extension::BasicFutureObject<extension::AsyncFileImage,void> *__fastcall extension::auxscript::UDHelper<extension::BasicFutureObject<extension::AsyncFileImage,void>>::New<char [23]>(
        lua_State *L,
        const char (*<args_0>)[23])
{
  char v3; // di
  global_State *l_G; // rcx
  GCObject *v5; // rax
  lua_TValue *top; // rcx
  __int64 p_lastfree; // rbx
  lua_TValue *v8; // rax
  lua_TValue *v9; // rbx
  GCObject *v10; // rax
  extension::BasicFutureObject<extension::AsyncFileImage,void>::AssetCache *v11; // rcx
  const void *v12; // r9
  char *Ptr; // rcx
  char *v14; // rax
  std::string v16; // [rsp+38h] [rbp-70h] BYREF
  __int64 v17; // [rsp+58h] [rbp-50h]
  Node **v18; // [rsp+60h] [rbp-48h]
  __int64 v19; // [rsp+68h] [rbp-40h]
  std::string _Right; // [rsp+78h] [rbp-30h] BYREF

  v17 = -2i64;
  v3 = 0;
  l_G = L->l_G;
  if ( l_G->GCdebt > 0 )
  {
    if ( l_G->gcrunning )
    {
      luaC_forcestep(L);
    }
    else
    {
      l_G->totalbytes += l_G->GCdebt + 2400;
      l_G->GCdebt = -2400i64;
    }
  }
  v5 = luaC_newobj(L, 7, 0x38ui64, 0i64);
  v5->u.uv.len = 16i64;
  v5->ts.tsv.len = 0i64;
  v5->u.uv.env = 0i64;
  top = L->top;
  top->value_.gc = v5;
  top->tt_ = 71;
  ++L->top;
  p_lastfree = (__int64)&v5->h.lastfree;
  v18 = &v5->h.lastfree;
  if ( (unsigned int)luaL_newmetatable(L, "FutureFileImage") )
  {
    v8 = L->top;
    v8->value_.gc = (GCObject *)extension::auxscript::UDHelper<extension::BasicFutureObject<extension::AsyncFileImage,void>>::Lfn_gc;
    v8->tt_ = 22;
    v9 = L->top;
    L->top = v9 + 2;
    v10 = luaS_newlstr(L, "__gc", 4ui64);
    v9[1].value_.gc = v10;
    v9[1].tt_ = v10->gch.tt | 0x40;
    luaV_settable(L, v9 - 1, L->top - 1, L->top - 2);
    L->top -= 2;
    luaL_error(L, "userdata [%s] metatable is not inintialized.", "FutureFileImage");
  }
  lua_setmetatable(L, -2);
  v19 = p_lastfree;
  if ( p_lastfree )
  {
    _Right._Mypair._Myval2._Myres = 15i64;
    _Right._Mypair._Myval2._Mysize = 0i64;
    _Right._Mypair._Myval2._Bx._Buf[0] = 0;
    std::string::assign(&_Right, "script/game_script.lua", 0x16ui64);
    v3 = 1;
    *(_BYTE *)(p_lastfree + 1) = 0;
    v16._Mypair._Myval2._Myres = 15i64;
    v16._Mypair._Myval2._Mysize = 0i64;
    v16._Mypair._Myval2._Bx._Buf[0] = 0;
    std::string::assign(&v16, &_Right, 0i64, 0xFFFFFFFFFFFFFFFFui64);
    extension::BasicFutureObject<extension::AsyncFileImage,void>::AssetCache::getCachedOrLoadStart(
      v11,
      (extension::RefCountablePtr<extension::BasicFutureObject<extension::AsyncFileImage,void>::Body> *)(p_lastfree + 8),
      &v16,
      v12);
  }
  else
  {
    p_lastfree = 0i64;
  }
  if ( (v3 & 1) != 0 && _Right._Mypair._Myval2._Myres >= 0x10 )
  {
    Ptr = _Right._Mypair._Myval2._Bx._Ptr;
    if ( _Right._Mypair._Myval2._Myres + 1 >= 0x1000 )
    {
      if ( (_Right._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
        invalid_parameter_noinfo_noreturn();
      v14 = (char *)*((_QWORD *)_Right._Mypair._Myval2._Bx._Ptr - 1);
      if ( v14 >= _Right._Mypair._Myval2._Bx._Ptr )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(_Right._Mypair._Myval2._Bx._Ptr - v14) < (char *)8 )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(_Right._Mypair._Myval2._Bx._Ptr - v14) > (char *)0x27 )
        invalid_parameter_noinfo_noreturn();
      Ptr = (char *)*((_QWORD *)_Right._Mypair._Myval2._Bx._Ptr - 1);
    }
    operator delete(Ptr);
  }
  return (extension::BasicFutureObject<extension::AsyncFileImage,void> *)p_lastfree;
}

void __fastcall extension::BasicLuaFuncs::AuxSetFuncs(lua_State *L)
{
  lua_TValue *top; // rdx
  luaL_Reg v2; // [rsp+20h] [rbp-48h] BYREF
  const char *v3; // [rsp+30h] [rbp-38h]
  int (__fastcall *v4)(lua_State *); // [rsp+38h] [rbp-30h]
  __int64 v5; // [rsp+40h] [rbp-28h]
  __int64 v6; // [rsp+48h] [rbp-20h]

  top = L->top;
  if ( (unsigned int)(((char *)top - (char *)L->ci->func - 16) >> 4)
    && &top[-1] != (lua_TValue *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168]
    && (top[-1].tt_ & 0xF) == 5 )
  {
    v2.name = "WaitFor";
    v2.func = extension::BasicLuaFuncs::Lfn_WaitFor;
    v3 = "Yield";
    v4 = extension::BasicLuaFuncs::Lfn_Yield;
    v5 = 0i64;
    v6 = 0i64;
    luaL_setfuncs(L, &v2, 0);
  }
}

void __fastcall extension::GameScript::FrameUpdate(extension::GameScript *this)
{
  extension::GFXIMovieStack *v2; // rax
  int m_CoroutineRefIndex; // er8
  lua_State *m_Context; // rbx
  __int64 v5; // rax
  lua_State *v6; // rsi
  int v7; // eax
  int v8; // edx

  v2 = extension::GFXIMovieStack::Instance();
  extension::GFXIMovieStack::advance(v2, 0.016666668);
  m_CoroutineRefIndex = this->m_CoroutineRefIndex;
  if ( m_CoroutineRefIndex != -2 )
  {
    m_Context = this->m_ScriptContext.m_Context;
    lua_rawgeti(this->m_ScriptContext.m_Context, -1001000, m_CoroutineRefIndex);
    v5 = (__int64)&m_Context->top[-1];
    if ( *(_DWORD *)(v5 + 8) == 72 )
      v6 = *(lua_State **)v5;
    else
      v6 = 0i64;
    m_Context->top = (lua_TValue *)v5;
    v7 = lua_resume(v6, 0i64, ((char *)v6->top - (char *)v6->ci->func - 16) >> 4);
    if ( v7 )
    {
      if ( v7 == 1 )
      {
        lua_gc(m_Context, 100, 0);
        lua_gc(m_Context, 200, 0);
        lua_gc(m_Context, 2, 0);
        return;
      }
      extension::SharedLuaContext::LuaErrorHandler(v6);
    }
    luaL_unref(m_Context, v8, this->m_CoroutineRefIndex);
    this->m_CoroutineRefIndex = -2;
  }
}

void __fastcall extension::GameScript::InitGameThread(extension::GameScript *this, lua_State *L)
{
  global_State *l_G; // rdx
  __int64 v5; // rax
  Table *v6; // rax
  lua_TValue *top; // rcx
  lua_TValue *v8; // rbx
  TString *v9; // rax
  lua_TValue *v10; // rbx
  TString *v11; // rax
  lua_TValue *v12; // rbx
  TString *v13; // rax
  extension::TranslateTable *v14; // rax
  bool v15; // r8
  lua_State *m_Context; // rdx
  lua_TValue *v17; // rdx
  lua_TValue *v18; // rcx
  lua_TValue *v19; // rbx
  TString *v20; // rax

  l_G = L->l_G;
  if ( l_G->GCdebt > 0 )
  {
    if ( l_G->gcrunning )
    {
      luaC_forcestep(L);
    }
    else
    {
      v5 = l_G->GCdebt + 2400;
      l_G->GCdebt = -2400i64;
      l_G->totalbytes += v5;
    }
  }
  v6 = luaH_new(L);
  top = L->top;
  top->value_.gc = (GCObject *)v6;
  top->tt_ = 69;
  ++L->top;
  lua_rawgeti(L, -1001000, 2);
  v8 = L->top;
  L->top = v8 + 1;
  v9 = luaS_newlstr(L, "_G", 2ui64);
  v8->value_.gc = (GCObject *)v9;
  v8->tt_ = v9->tsv.tt | 0x40;
  luaV_settable(L, v8 - 2, L->top - 1, L->top - 2);
  L->top -= 2;
  extension::BasicLuaFuncs::AuxSetFuncs(L);
  luaL_requiref(L, "Game", extension::Lfn_OpenGameLib, 0);
  v10 = L->top;
  L->top = v10 + 1;
  v11 = luaS_newlstr(L, "Game", 4ui64);
  v10->value_.gc = (GCObject *)v11;
  v10->tt_ = v11->tsv.tt | 0x40;
  luaV_settable(L, v10 - 2, L->top - 1, L->top - 2);
  L->top -= 2;
  luaL_requiref(L, "GFx", extension::Lfn_OpenGFxLib, 0);
  v12 = L->top;
  L->top = v12 + 1;
  v13 = luaS_newlstr(L, "GFx", 3ui64);
  v12->value_.gc = (GCObject *)v13;
  v12->tt_ = v13->tsv.tt | 0x40;
  luaV_settable(L, v12 - 2, L->top - 1, L->top - 2);
  L->top -= 2;
  v14 = extension::TranslateTable::Instance();
  extension::TranslateTable::setLuaContext(v14, &this->m_ScriptContext, v15);
  m_Context = this->m_ScriptContext.m_Context;
  if ( this->m_ScriptContext.m_Context != L )
  {
    v17 = --m_Context->top;
    v18 = L->top;
    L->top = v18 + 1;
    v18->value_.gc = v17->value_.gc;
    v18->tt_ = v17->tt_;
  }
  v19 = L->top;
  L->top = v19 + 1;
  v20 = luaS_newlstr(L, "Translate", 9ui64);
  v19->value_.gc = (GCObject *)v20;
  v19->tt_ = v20->tsv.tt | 0x40;
  luaV_settable(L, v19 - 2, L->top - 1, L->top - 2);
  L->top -= 2;
  lua_pushcclosure(L, extension::GameScript::LuaLib::Lfn_GameScriptThreadFunction, 1);
  lua_resume(L, 0i64, 0);
}

signed __int64 __fastcall extension::BasicLuaFuncs::Lfn_CallIfCallable(lua_State *L, int a2)
{
  signed __int64 v3; // rbx
  CallInfo *ci; // rax

  v3 = ((char *)L->top - (char *)L->ci->func - 16) >> 4;
  if ( !extension::_anonymous_namespace_::AuxIsCallable(L, a2) )
    return (unsigned int)v3;
  ci = L->ci;
  if ( (ci->callstatus & 8) != 0 )
  {
    if ( ci->u.c.status )
      return (unsigned int)v3;
  }
  lua_callk(L, v3 - 1, -1, 0, extension::BasicLuaFuncs::Lfn_CallIfCallable);
  return ((char *)L->top - (char *)L->ci->func - 16) >> 4;
}

__int64 __fastcall extension::GameScript::LuaLib::Lfn_CheckedMetaIndex(lua_State *L)
{
  lua_TValue *i; // rsi
  CallInfo *ci; // rax
  const lua_TValue *v4; // rdi
  TString *v5; // rax
  lua_TValue *top; // r8
  char *v7; // rdx
  CallInfo *v8; // rax
  lua_TValue *v9; // r8
  CallInfo *v10; // rax
  lua_TValue *v11; // rdx
  global_State *l_G; // rcx
  __int64 v13; // rax
  CallInfo *v14; // rax

  for ( i = L->ci->func + 3; L->top < i; ++L->top )
    L->top->tt_ = 0;
  ci = L->ci;
  L->top = i;
  v4 = (const lua_TValue *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168];
  if ( &ci->func[1] < i )
    v4 = ci->func + 1;
  v5 = luaS_newlstr(L, "_G", 2ui64);
  i->value_.gc = (GCObject *)v5;
  i->tt_ = v5->tsv.tt | 0x40;
  ++L->top;
  luaV_gettable(L, v4, L->top - 1, L->top - 1);
  top = L->top;
  v7 = &extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168];
  v8 = L->ci;
  if ( &v8->func[2] < top )
    v7 = (char *)&v8->func[2];
  top->value_.gc = *(GCObject **)v7;
  top->tt_ = *((_DWORD *)v7 + 2);
  ++L->top;
  luaV_gettable(L, (const lua_TValue *)L->top - 2, L->top - 1, L->top - 1);
  v9 = L->top;
  if ( &v9[-1] != (lua_TValue *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168]
    && (v9[-1].tt_ & 0xF) == 0 )
  {
    v10 = L->ci;
    v11 = (lua_TValue *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168];
    if ( &v10->func[2] < v9 )
      v11 = v10->func + 2;
    if ( (v11->tt_ & 0xF) != 4 )
    {
      if ( !luaV_tostring(L, v11) )
        goto LABEL_22;
      l_G = L->l_G;
      if ( l_G->GCdebt > 0 )
      {
        if ( l_G->gcrunning )
        {
          luaC_forcestep(L);
        }
        else
        {
          v13 = l_G->GCdebt + 2400;
          l_G->GCdebt = -2400i64;
          l_G->totalbytes += v13;
        }
      }
      v14 = L->ci;
      v11 = (lua_TValue *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168];
      if ( &v14->func[2] < L->top )
        v11 = v14->func + 2;
    }
    if ( v11->value_.gc != (GCObject *)-24i64 )
      luaL_error(L, "nil field access.(%s)", (const char *)&v11->value_.gc->th.l_G);
LABEL_22:
    tag_error(L, 2, 4);
  }
  return 1i64;
}

void __fastcall __noreturn extension::GameScript::LuaLib::Lfn_CheckedMetaNewIndex(lua_State *L)
{
  CallInfo *ci; // rax
  lua_TValue *v2; // rdx
  global_State *l_G; // rcx
  __int64 v5; // rax
  CallInfo *v6; // rax

  ci = L->ci;
  v2 = (lua_TValue *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168];
  if ( &ci->func[2] < L->top )
    v2 = ci->func + 2;
  if ( (v2->tt_ & 0xF) != 4 )
  {
    if ( !luaV_tostring(L, v2) )
      goto LABEL_12;
    l_G = L->l_G;
    if ( l_G->GCdebt > 0 )
    {
      if ( l_G->gcrunning )
      {
        luaC_forcestep(L);
      }
      else
      {
        v5 = l_G->GCdebt + 2400;
        l_G->GCdebt = -2400i64;
        l_G->totalbytes += v5;
      }
    }
    v6 = L->ci;
    v2 = (lua_TValue *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168];
    if ( &v6->func[2] < L->top )
      v2 = v6->func + 2;
  }
  if ( v2->value_.gc != (GCObject *)-24i64 )
    luaL_error(L, "implicit new global variable. (%s)", (const char *)&v2->value_.gc->th.l_G);
LABEL_12:
  tag_error(L, 2, 4);
}

int __fastcall extension::GameScript::LuaLib::Lfn_GameScriptThreadFunction(lua_State *L, luaL_Reg *a2)
{
  int ctx; // ebp
  CallInfo *ci; // rax
  char *v5; // r14
  _QWORD *v6; // rax
  extension::AsyncStatus::Step v7; // edx
  _QWORD *v8; // rdi
  const extension::gfxi_detail::TranslatorImpl *v9; // rax
  int v10; // eax
  const char *v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 *v14; // r12
  __int64 v15; // rsi
  int *v16; // rax
  __int64 v17; // r13
  __int64 v18; // rsi
  __int64 v19; // rax
  Value v20; // rsi
  const lua_TValue *v21; // rax
  GCObject *gc; // rdx
  unsigned __int64 len; // r8
  global_State *l_G; // rax
  CallInfo *v25; // rax
  lua_TValue *v26; // rcx
  char *v27; // rdx
  lua_TValue *v28; // rcx
  global_State *v29; // rcx
  Table *v30; // rax
  lua_TValue *v31; // rcx
  lua_TValue *v32; // rax
  CallInfo *v33; // rax
  lua_TValue *func; // rcx
  char *p_ci; // rdx
  lua_TValue *top; // rcx
  lua_TValue *v37; // rcx
  int tt; // edx
  Table *metatable; // rdx
  lua_TValue *v40; // rdi
  TString *v41; // rax
  lua_TValue *v42; // rdi
  TString *v43; // rax
  lua_TValue *v44; // rdx
  CallInfo *v45; // rax
  lua_TValue *i; // rcx
  const char (*v48)[23]; // rdx
  __int64 v49[2]; // [rsp+48h] [rbp-70h] BYREF
  Zio z; // [rsp+58h] [rbp-60h] BYREF

  ctx = 0;
  ci = L->ci;
  if ( (ci->callstatus & 8) != 0 )
    ctx = ci->u.c.ctx;
  if ( ctx )
  {
    v5 = &extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168];
    if ( ctx != 1 )
    {
      if ( ctx != 2 )
        return 0;
LABEL_48:
      v33 = L->ci;
      func = v33->func;
      if ( v33->func->tt_ == 22 || !func->value_.gc->ts.tsv.extra )
        p_ci = &extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168];
      else
        p_ci = (char *)&func->value_.gc->th.ci;
      top = L->top;
      top->value_.gc = *(GCObject **)p_ci;
      top->tt_ = *((_DWORD *)p_ci + 2);
      v37 = ++L->top;
      tt = v37[-1].tt_;
      if ( (tt & 0xF) == 5 || (tt & 0xF) == 7 )
        metatable = v37[-1].value_.gc->u.uv.metatable;
      else
        metatable = L->l_G->mt[tt & 0xF];
      if ( metatable )
      {
        v37->value_.gc = (GCObject *)metatable;
        v37->tt_ = 69;
        v37 = ++L->top;
      }
      v37->value_.gc = (GCObject *)extension::GameScript::LuaLib::Lfn_CheckedMetaNewIndex;
      v37->tt_ = 22;
      v40 = L->top;
      L->top = v40 + 2;
      v41 = luaS_newlstr(L, "__newindex", 0xAui64);
      v40[1].value_.gc = (GCObject *)v41;
      v40[1].tt_ = v41->tsv.tt | 0x40;
      luaV_settable(L, v40 - 1, L->top - 1, L->top - 2);
      L->top -= 3;
      v42 = L->top;
      v43 = luaS_newlstr(L, "MainThread", 0xAui64);
      v42->value_.gc = (GCObject *)v43;
      v42->tt_ = v43->tsv.tt | 0x40;
      ++L->top;
      luaV_gettable(L, v42 - 1, L->top - 1, L->top - 1);
      v44 = L->top;
      v45 = L->ci;
      if ( &v45->func[1] < v44 )
        v5 = (char *)&v45->func[1];
      *(_QWORD *)v5 = v44[-1].value_.gc;
      *((_DWORD *)v5 + 2) = v44[-1].tt_;
      --L->top;
      for ( i = L->ci->func + 2; L->top < i; ++L->top )
        L->top->tt_ = 0;
      L->top = i;
      lua_callk(L, 0, 0, ctx + 1, extension::GameScript::LuaLib::Lfn_GameScriptThreadFunction);
      return 0;
    }
    v6 = luaL_testudata(L, -1, "FutureFileImage");
    v8 = v6;
    if ( !v6 )
    {
      v9 = (const extension::gfxi_detail::TranslatorImpl *)&L->top[-1];
      if ( v9 == (const extension::gfxi_detail::TranslatorImpl *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168] )
        v10 = -1;
      else
        v10 = v9->RefCount & 0xF;
      v11 = lua_pushfstring(
              L,
              "%s expected, got %s",
              "FutureFileImage",
              *(const char **)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[14][8 * v10 + 112]);
      luaL_argerror(L, -1, v11);
    }
    v12 = *(_QWORD *)(v6[1] + 16i64);
    if ( !v12 || *(_BYTE *)(v12 + 96) || (*(_QWORD *)(v12 + 88) & 1) != 0 )
    {
      v13 = v8[1];
      if ( v13 )
        _InterlockedExchangeAdd64((volatile signed __int64 *)(*(_QWORD *)(v13 + 8) + 16i64), 1ui64);
      --L->top;
      v14 = (__int64 *)(v13 + 16);
      v15 = *(_QWORD *)(v13 + 16);
      if ( !v15 || *(_BYTE *)(v15 + 96) )
      {
        v16 = 0i64;
      }
      else
      {
        if ( (*(_QWORD *)(v15 + 88) & 1) == 0 )
          extension::AsyncStatus::waitFor((extension::AsyncStatus *)(v15 + 88), v7);
        v16 = *(int **)(v15 + 72);
      }
      v17 = *v16;
      v18 = *v14;
      if ( !*v14 || *(_BYTE *)(v18 + 96) )
      {
        v19 = 0i64;
      }
      else
      {
        if ( (*(_QWORD *)(v18 + 88) & 1) == 0 )
          extension::AsyncStatus::waitFor((extension::AsyncStatus *)(v18 + 88), v7);
        v19 = *(_QWORD *)(v18 + 72);
      }
      v49[0] = *(_QWORD *)(v19 + 16);
      v49[1] = v17;
      z.L = L;
      z.reader = getS;
      z.data = v49;
      z.n = 0i64;
      z.p = 0i64;
      if ( luaD_protectedparser(L, &z, "game_script", 0i64) )
        luaG_errormsg(L);
      v20.gc = (GCObject *)L->top[-1].value_;
      if ( v20.gc->ts.tsv.extra == 1 )
      {
        v21 = luaH_getint((Table *)L->l_G->l_registry.value_.gc, 2);
        *(lua_TValue *)*(_QWORD *)(v20.gc->u.uv.len + 16) = *v21;
        if ( (v21->tt_ & 0x40) != 0 )
        {
          gc = v21->value_.gc;
          if ( (v21->value_.gc->gch.marked & 3) != 0 )
          {
            len = v20.gc->u.uv.len;
            if ( (*(_BYTE *)(len + 9) & 4) != 0 )
            {
              l_G = L->l_G;
              if ( l_G->gcstate > 1u )
                *(_BYTE *)(len + 9) = *(_BYTE *)(len + 9) & 0xB8 | l_G->currentwhite & 3;
              else
                reallymarkobject(L->l_G, gc);
            }
          }
        }
      }
      v25 = L->ci;
      v26 = v25->func;
      if ( v25->func->tt_ == 22 || !v26->value_.gc->ts.tsv.extra )
        v27 = &extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168];
      else
        v27 = (char *)&v26->value_.gc->th.ci;
      v28 = L->top;
      v28->value_.gc = *(GCObject **)v27;
      v28->tt_ = *((_DWORD *)v27 + 2);
      ++L->top;
      v29 = L->l_G;
      if ( v29->GCdebt > 0 )
      {
        if ( v29->gcrunning )
        {
          luaC_forcestep(L);
        }
        else
        {
          v29->totalbytes += v29->GCdebt + 2400;
          v29->GCdebt = -2400i64;
        }
      }
      v30 = luaH_new(L);
      v31 = L->top;
      v31->value_.gc = (GCObject *)v30;
      v31->tt_ = 69;
      v32 = ++L->top;
      v32->value_.gc = (GCObject *)extension::GameScript::LuaLib::Lfn_CheckedMetaIndex;
      v32->tt_ = 22;
      ++L->top;
      lua_setfield(L, -2, "__index");
      lua_setmetatable(L, -2);
      lua_setupvalue(L, -2, 1);
      lua_callk(L, 0, 0, 2, extension::GameScript::LuaLib::Lfn_GameScriptThreadFunction);
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(*(_QWORD *)(v13 + 8) + 16i64), 0xFFFFFFFFFFFFFFFFui64) == 1 )
        (**(void (__fastcall ***)(__int64, __int64))v13)(v13, 1i64);
      ctx = 2;
      goto LABEL_48;
    }
  }
  else
  {
    extension::auxscript::UDHelper<extension::BasicFutureObject<extension::AsyncFileImage,void>>::MakeMeta(L, a2);
    extension::auxscript::UDHelper<extension::BasicFutureObject<extension::AsyncFileImage,void>>::New<char [23]>(L, v48);
  }
  return lua_yieldk(L, 0, 1, extension::GameScript::LuaLib::Lfn_GameScriptThreadFunction);
}

__int64 __fastcall extension::BasicLuaFuncs::Lfn_MakeClosure(lua_State *L, int a2)
{
  signed __int64 v3; // rbx
  int IsCallable; // eax
  int (__fastcall *v5)(lua_State *); // rdx

  v3 = ((char *)L->top - (char *)L->ci->func - 16) >> 4;
  IsCallable = extension::_anonymous_namespace_::AuxIsCallable(L, a2);
  v5 = extension::_anonymous_namespace_::Lfn_BindedClosure;
  if ( !IsCallable )
    v5 = extension::_anonymous_namespace_::Lfn_IdentityClosure;
  lua_pushcclosure(L, v5, v3);
  return 1i64;
}

__int64 __fastcall extension::BasicLuaFuncs::Lfn_WaitFor(lua_State *L, int a2)
{
  CallInfo *ci; // rax
  int ctx; // edi
  lua_TValue *top; // rax
  char *v6; // r8
  lua_TValue *v7; // rdx
  CallInfo *v8; // rax
  lua_TValue *v9; // rcx
  char *v10; // r8
  lua_TValue *v11; // rax
  lua_TValue *v12; // rdx
  CallInfo *v13; // rax
  lua_TValue *v14; // rcx
  lua_TValue *v15; // rdx
  signed __int64 v16; // rcx
  lua_TValue *v17; // rdx
  unsigned __int16 nCcalls; // ax
  lua_TValue *v20; // r8
  char *v21; // rdx
  CallInfo *v22; // rax
  lua_TValue *i; // r8
  CallInfo *v24; // rax
  char *v25; // rdx

  if ( !extension::_anonymous_namespace_::AuxIsCallable(L, a2) )
    luaL_argerror(L, 1, "not callable");
  ci = L->ci;
  ctx = 0;
  if ( (ci->callstatus & 8) == 0 || (ctx = ci->u.c.ctx, !ci->u.c.status) )
  {
    top = L->top;
    v6 = &extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168];
    top->value_.gc = (GCObject *)extension::BasicLuaFuncs::Lfn_MakeClosure;
    top->tt_ = 22;
    v7 = ++L->top;
    v8 = L->ci;
    if ( &v8->func[2] < v7 )
      v6 = (char *)&v8->func[2];
    for ( ; v7 > (lua_TValue *)v6; --v7 )
    {
      v7->value_.gc = v7[-1].value_.gc;
      v7->tt_ = v7[-1].tt_;
    }
    v9 = L->top;
    *(_QWORD *)v6 = v9->value_.gc;
    *((_DWORD *)v6 + 2) = v9->tt_;
    v10 = &extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168];
    v11 = L->top;
    v11->value_.gc = (GCObject *)extension::BasicLuaFuncs::Lfn_Yield;
    v11->tt_ = 22;
    v12 = ++L->top;
    v13 = L->ci;
    if ( &v13->func[3] < v12 )
      v10 = (char *)&v13->func[3];
    for ( ; v12 > (lua_TValue *)v10; --v12 )
    {
      v12->value_.gc = v12[-1].value_.gc;
      v12->tt_ = v12[-1].tt_;
    }
    v14 = L->top;
    *(_QWORD *)v10 = v14->value_.gc;
    *((_DWORD *)v10 + 2) = v14->tt_;
    v15 = L->top;
    v16 = (char *)v15 - (char *)L->ci->func;
    ++L->nCcalls;
    v17 = &v15[-(int)(((v16 - 16) >> 4) - 1)];
    nCcalls = L->nCcalls;
    if ( nCcalls >= 0xC8u )
    {
      if ( nCcalls == 200 )
        luaG_runerror(L, "C stack overflow");
      if ( nCcalls >= 0xE1u )
        luaD_throw(L, 6);
    }
    ++L->nny;
    if ( !luaD_precall(L, v17, 1) )
      luaV_execute(L);
    --L->nny;
    --L->nCcalls;
  }
  if ( !ctx )
    goto $loop;
  if ( ctx == 1 )
  {
    while ( !lua_toboolean(L, 3) )
    {
      for ( i = L->ci->func + 3; L->top < i; ++L->top )
        L->top->tt_ = 0;
      v24 = L->ci;
      v25 = &extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168];
      L->top = i;
      if ( &v24->func[2] < i )
        v25 = (char *)&v24->func[2];
      i->value_.gc = *(GCObject **)v25;
      i->tt_ = *((_DWORD *)v25 + 2);
      ++L->top;
      lua_callk(L, 0, 0, 0, extension::BasicLuaFuncs::Lfn_WaitFor);
$loop:
      v20 = L->top;
      v21 = &extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168];
      v22 = L->ci;
      if ( &v22->func[1] < v20 )
        v21 = (char *)&v22->func[1];
      v20->value_.gc = *(GCObject **)v21;
      v20->tt_ = *((_DWORD *)v21 + 2);
      ++L->top;
      lua_callk(L, 0, -1, 1, extension::BasicLuaFuncs::Lfn_WaitFor);
    }
  }
  return (unsigned int)(((char *)L->top - (char *)L->ci->func - 16) >> 4) - 2;
}

__int64 __fastcall extension::BasicLuaFuncs::Lfn_Yield(lua_State *L)
{
  CallInfo *ci; // rdx
  lua_TValue *top; // rcx
  __int64 v4; // r10
  char *v5; // r8
  lua_TValue *v6; // rax
  CallInfo *v7; // rcx
  lua_TValue *v8; // rcx
  bool v9; // zf

  ci = L->ci;
  top = L->top;
  v4 = ((char *)top - (char *)ci->func - 16) >> 4;
  if ( (int)v4 > 0 && ((ci->callstatus & 8) == 0 || !ci->u.c.status) )
  {
    top->tt_ = 22;
    top->value_.gc = (GCObject *)extension::BasicLuaFuncs::Lfn_CallIfCallable;
    v5 = &extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168];
    v6 = ++L->top;
    v7 = L->ci;
    if ( &v7->func[1] < v6 )
      v5 = (char *)&v7->func[1];
    for ( ; v6 > (lua_TValue *)v5; --v6 )
    {
      v6->value_.gc = v6[-1].value_.gc;
      v6->tt_ = v6[-1].tt_;
    }
    v8 = L->top;
    *(_QWORD *)v5 = v8->value_.gc;
    *((_DWORD *)v5 + 2) = v8->tt_;
    lua_callk(L, v4, -1, 0, extension::BasicLuaFuncs::Lfn_Yield);
    ci = L->ci;
    v4 = ((char *)L->top - (char *)ci->func - 16) >> 4;
  }
  if ( L->nny )
  {
    if ( L == L->l_G->mainthread )
      luaG_runerror(L, "attempt to yield from outside a coroutine");
    luaG_runerror(L, "attempt to yield across a C-call boundary");
  }
  L->status = 1;
  v9 = (ci->callstatus & 1) == 0;
  ci->extra = (char *)ci->func - (char *)L->stack;
  if ( v9 )
  {
    ci->u.l.savedpc = 0i64;
    ci->func = &L->top[-(int)v4 - 1];
    luaD_throw(L, 1);
  }
  return 0i64;
}

__int64 __fastcall extension::auxscript::UDHelper<extension::BasicFutureObject<extension::AsyncFileImage,void>>::Lfn_gc(
        lua_State *L)
{
  _QWORD *v2; // rax
  lua_TValue *v3; // rcx
  int v4; // ecx
  __int64 v5; // r8
  const char *v7; // rax

  v2 = luaL_testudata(L, 1, "FutureFileImage");
  if ( !v2 )
  {
    v3 = L->ci->func + 1;
    if ( v3 >= L->top
      || v3 == (lua_TValue *)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[11][168] )
    {
      v4 = -1;
    }
    else
    {
      v4 = L->ci->func[1].tt_ & 0xF;
    }
    v7 = lua_pushfstring(
           L,
           "%s expected, got %s",
           "FutureFileImage",
           *(const char **)&extension::gfxi_detail::_exchage_table_keyboard.m_exchangedUserDataChange[14][8 * v4 + 112]);
    luaL_argerror(L, 1, v7);
  }
  v5 = v2[1];
  if ( v5
    && _InterlockedExchangeAdd64((volatile signed __int64 *)(*(_QWORD *)(v5 + 8) + 16i64), 0xFFFFFFFFFFFFFFFFui64) == 1 )
  {
    (**(void (__fastcall ***)(__int64, __int64))v5)(v5, 1i64);
  }
  return 0i64;
}

__int64 __fastcall extension::auxscript::UDHelper<extension::BasicFutureObject<extension::AsyncFileImage,void>>::Lfn_tostring(
        lua_State *L)
{
  lua_pushstring(L, "FutureFileImage");
  return 1i64;
}

void __fastcall extension::auxscript::UDHelper<extension::BasicFutureObject<extension::AsyncFileImage,void>>::MakeMeta(
        lua_State *L,
        luaL_Reg *reg)
{
  lua_TValue *top; // rbx
  TString *v4; // rax
  lua_TValue *v5; // rax
  lua_TValue *v6; // rbx
  TString *v7; // rax
  lua_TValue *v8; // rax
  lua_TValue *v9; // rbx
  TString *v10; // rax
  lua_TValue *v11; // rbx
  TString *v12; // rax

  luaL_newmetatable(L, "FutureFileImage");
  *L->top = L->top[-1];
  top = L->top;
  L->top = top + 2;
  v4 = luaS_newlstr(L, "__index", 7ui64);
  top[1].value_.gc = (GCObject *)v4;
  top[1].tt_ = v4->tsv.tt | 0x40;
  luaV_settable(L, top - 1, L->top - 1, L->top - 2);
  L->top -= 2;
  v5 = L->top;
  v5->value_.gc = (GCObject *)extension::auxscript::UDHelper<extension::BasicFutureObject<extension::AsyncFileImage,void>>::Lfn_tostring;
  v5->tt_ = 22;
  v6 = L->top;
  L->top = v6 + 2;
  v7 = luaS_newlstr(L, "__tostring", 0xAui64);
  v6[1].value_.gc = (GCObject *)v7;
  v6[1].tt_ = v7->tsv.tt | 0x40;
  luaV_settable(L, v6 - 1, L->top - 1, L->top - 2);
  L->top -= 2;
  v8 = L->top;
  v8->value_.gc = (GCObject *)extension::auxscript::UDHelper<extension::BasicFutureObject<extension::AsyncFileImage,void>>::Lfn_gc;
  v8->tt_ = 22;
  v9 = L->top;
  L->top = v9 + 2;
  v10 = luaS_newlstr(L, "__gc", 4ui64);
  v9[1].value_.gc = (GCObject *)v10;
  v9[1].tt_ = v10->tsv.tt | 0x40;
  luaV_settable(L, v9 - 1, L->top - 1, L->top - 2);
  L->top -= 2;
  *L->top = L->top[-1];
  v11 = L->top;
  L->top = v11 + 2;
  v12 = luaS_newlstr(L, "__metatable", 0xBui64);
  v11[1].value_.gc = (GCObject *)v12;
  v11[1].tt_ = v12->tsv.tt | 0x40;
  luaV_settable(L, v11 - 1, L->top - 1, L->top - 2);
  L->top -= 3;
}

