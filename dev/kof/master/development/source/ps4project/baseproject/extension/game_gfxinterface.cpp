#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestageshader.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actor.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_drawableimage.h"
#include "dev/silverware/git/sdk/agsemaphore.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charadataunify.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hal.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_buffer.h"
#include "dev/silverware/git/sdk/3rdparty/steam/matchmakingtypes.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/quat_aos.h"
#include "dev/silverware/git/sdk/agsemaphore.inl"
#include "dev/silverware/git/sdk/agconditionvariable.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaattackdataformat.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/condition_variable"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charadamagesettingformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_characterdef.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/floatinvec.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/refcountable.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdata/effectdata.h"
#include "program files (x86)/windows kits/8.1/include/um/winbase.h"
#include "dev/silverware/git/sdk/agvector2.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/variableheapmemorybase.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_vec64.h"
#include "dev/silverware/git/sdk/agmath.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/chartdata.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/randommt.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filters.h"
#include "dev/silverware/git/sdk/input/agcontroller.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/silverware/git/sdk/agscopedlock.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filterparams.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/heapmemory.h"
#include "dev/silverware/git/sdk/system/aguser.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphqueue.h"
#include "dev/silverware/git/sdk/agstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_font.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/mutex.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_math.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessdefs.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/vec_aos.h"
#include "dev/silverware/git/sdk/agreferencecountinl.h"
#include "dev/silverware/git/sdk/util/agdelegate.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatapacked.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/combomissiondataformat.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/sounddata.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/soundgroupdataformat.h"
#include "dev/silverware/git/sdk/agcondition.inl"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_pathdatapacker.h"
#include "dev/kof/master/development/source/baseproject/jni/game/network/playtogether.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/effect.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_linebuffer.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/time.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/type_traits"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_highlight.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_operation.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/physicalheapmemory.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/bitset"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/map"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_bank.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloat.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstddef"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtree"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/texstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_profiler.h"
#include "dev/silverware/git/sdk/input/agcontrollercomponent.h"
#include "dev/silverware/git/sdk/agpointer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_states.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/mat_aos.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/tga_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_statebag.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/gamedatainfo.h"
#include "dev/silverware/git/sdk/agrectangle.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/effect/actoreffect.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actorobject.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/shaderfxhelper.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_simplemeshcache.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "dev/kof/master/development/source/baseproject/jni/game/data/savedata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/fontprovider/render_fontproviderwinapi.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actoroption.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/cameracheck.h"
#include "dev/silverware/git/sdk/util/agservicecommand.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/freecameracheck.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_bundle.h"
#include "dev/silverware/git/sdk/input/agsdlmappingparser.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleonline.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloatmp.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steamclientpublic.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/mutex"
#include "dev/kof/master/development/source/baseproject/jni/game/util/easycommand.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapemeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/jpeg_imagefile.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/matrix4unaligned.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/algorithm"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/chrono"
#include "dev/silverware/git/sdk/util/agdebugchannels.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treetext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefileutil.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/quat_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/limits"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_new.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/savedatadefine.h"
#include "dev/silverware/git/sdk/util/agperformancecounter.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_docview.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/jobmanager.h"
#include "dev/kof/master/development/source/ps4project/baseproject/pcutil/pcdummy.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_typeinfo.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/matchingsystem.h"
#include "dev/silverware/git/sdk/agclock.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_range.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "dev/silverware/git/sdk/system/agsysteminfo.h"
#include "dev/kof/master/development/source/baseproject/jni/game/cpuseq/battlecpu.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_hash.h"
#include "dev/kof/master/development/source/baseproject/jni/game/cpuseq/sequencecontroller.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdata/effectappdata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xutility"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/utility"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix4x4.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_prefightfaceoff.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/translate_table.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixpool.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/iosfwd"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/shared_lua_context.h"
#include "dev/kof/master/development/source/baseproject/jni/game/system/battlesysteminfo.h"
#include "dev/silverware/git/sdk/agmovieplayer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shader.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_sgmlparser.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_context.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_sse.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/functional"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_constants.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_types.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xfacet"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstring"
#include "dev/kof/master/development/source/baseproject/jni/game/data/moviedata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessgen.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/resourcemanager.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/hidpad/hidpadsystem.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/combomissionjudge.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treeshape.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessellator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/operationmapper.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory0"
#include "dev/kof/master/development/source/baseproject/jni/game/util/soundutil.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/libcommon.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/baseproject/jni/game/network/chkdiscononlinesv.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exwaitcondition.h"
#include "dev/silverware/git/sdk/agconditionvariable.inl"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/exception"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "dev/silverware/git/sdk/filesystem/agmount.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/unordered_map"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaprojectdataformat.h"
#include "dev/silverware/git/sdk/filesystem/agdirectory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitivebundle.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_exception.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treecachenode.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xhash"
#include "dev/silverware/git/sdk/platforms/pc/system/agpcsysteminfo.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/list"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charabasestatusformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treenode.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_player.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_loader.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector2unaligned.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/inputkeyrecord.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglcurve.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cacheeffect.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_system.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphfitter.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_types.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmodel.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_hashkey.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlecall/battlecall.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_functions.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_debug.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_resource.h"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/bodypush.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_stroker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "dev/kof/master/development/source/baseproject/jni/game/network/netmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/dds_imagefile.h"
#include "dev/kof/master/development/source/baseproject/jni/game/network/leaderboard.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/system_error"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglsprite.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_manager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textmeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/stdexcept"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphparam.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglrender.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcache.h"
#include "program files (x86)/windows kits/8.1/include/shared/guiddef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/kof/master/development/source/baseproject/jni/game/appmain.h"
#include "dev/silverware/git/sdk/aghash.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/titlestoragesystem.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcacheconfig.h"
#include "dev/silverware/git/sdk/agstringutils.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglfog.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglbone.h"
#include "dev/silverware/git/sdk/agdisplay.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hairliner.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/weapon/actorweapon.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/particledata.h"
#include "dev/silverware/git/sdk/agvector4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_filterdesc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_styledtext.h"
#include "program files (x86)/windows kits/8.1/include/shared/stralign.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix3x4.h"
#include "dev/kof/master/development/source/baseproject/jni/game/gfx/gfxmanager.h"
#include "dev/kof/master/development/source/baseproject/jni/game/system/battlecontroller.h"
#include "dev/silverware/git/sdk/agvector3.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_core.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_queue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/tuple"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_fontmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitive.h"
#include "dev/silverware/git/sdk/agmemorystream.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actionsystem.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/future_asset.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_fontman.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocaddr.h"
#include "dev/silverware/git/sdk/agmemorypool.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_radixtree.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaactiondataformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_fontlib.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_twips.h"
#include "dev/silverware/git/sdk/input/agcontrollerbuttoncomponent.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestage.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charafilebase.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_game_interface.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_containers.h"
#include "dev/silverware/git/sdk/agstream.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/boolinvec.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/tkndata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_wwhelper.h"
#include "dev/silverware/git/sdk/agmutex.inl"
#include "dev/silverware/git/sdk/3rdparty/steam/isteamhtmlsurface.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/string"
#include "dev/silverware/git/sdk/agreferencedobjectinl.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic.h"
#include "dev/silverware/git/sdk/agpointerinl.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/cameramotionpreviewsettings.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/stageprojectdata.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/commanddataformat.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/rapper/graphicsopt.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic0.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/steamnamecache.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmirror.h"
#include "dev/silverware/git/sdk/system/agusermanager.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector3unaligned.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestagedatas.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/tkndatas.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/tween.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_vertex.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/fontprovider/render_fontproviderhud.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_wstring.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/asynccharafileload.h"
#include "dev/silverware/git/sdk/util/agservice.h"
#include "program files (x86)/windows kits/8.1/include/um/winnt.h"
#include "dev/silverware/git/sdk/agthreadpool.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "program files (x86)/windows kits/8.1/include/shared/basetsd.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/matchingtargetpc.h"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/hitrectcollection.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/vec_aos.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/boolinvec.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_missiondataloading.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/trainingsetting.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/combomissionattackeventlistener.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charamaterialsettingformat.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglshader.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threadcheck.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/ios"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actorcharabase.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/fix32.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textlayout.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_image.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocnum"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/battlehud.h"
#include "dev/kof/master/development/source/baseproject/jni/game/define/charabonedefine.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/vectormath_aos.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battleeventhandler.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/colorholder.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xiosbase"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thread"
#include "dev/kof/master/development/source/baseproject/jni/game/collision/damagesetting.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocale"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exthread.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/memory"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocinfo"
#include "dev/silverware/git/sdk/agthread.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/bilinkable.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/battleplayerinfo.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steam_api_internal.h"
#include "dev/silverware/git/sdk/agreferencedobject.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xxatomic"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "dev/silverware/git/sdk/agreferencecount.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/easingnumber.h"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/errorchecker.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/debug/logging.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actionblackout.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/mediamanager.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleonlinewatching.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vector"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/audiopresenter.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_screentoworld.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/cpusequencedataformat.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdatalistmanager.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogleffect.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "program files (x86)/windows kits/8.1/include/um/winuser.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectcommon.h"
#include "dev/silverware/git/sdk/agcondition.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleloading.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/shot/actorshot.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actorchara.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/input/imesystem.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_strokeraa.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_scale9grid.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steam_api.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraystaticbuff.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/commandcheck.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/globalheapmemory.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thr/xthread"
#include "dev/kof/master/development/source/baseproject/jni/game/util/restrictringbuffer.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogllight.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/math.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cxform.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/fixmemory.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/mat_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/array"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_movie.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/materialshowcontrol.h"
#include "dev/silverware/git/sdk/filesystem/agfile.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/asyncjob.h"
#include "dev/silverware/git/sdk/agreferenceinl.h"
#include "dev/silverware/git/sdk/filesystem/agpath.h"
#include "dev/kof/master/development/source/ps4project/baseproject/pcutil/pccontrolsmanager.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exlockable.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/syncmenuimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_event.h"
#include "dev/silverware/git/sdk/memory/agallocators.h"
#include "dev/silverware/git/sdk/input/aginputmanager.h"
#include "dev/silverware/git/sdk/agmutex.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/atomic_int.h"
#include "dev/silverware/git/sdk/agsingleton.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_ps4modelroom.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/moviedatadefine.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_keycodes.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector4unaligned.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/atomic"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charahitrectformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/png_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/vecidx_aos.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/mediasound.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshkey.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixstate.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_gradients.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/floatinvec.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_rasterizer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_viewport.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/deque"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestageresourcecontainer.h"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battlemissionsub.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_profile.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/network/netmanager.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/data/saveplayerdata.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/data/savedata.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/ag/kofanticheat.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/appmain.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/pcutil/pccontrolsmanager.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/util/easycommand.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/data/onlinesavedata.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleonlinewatching.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/battlestageutil.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/commonpc.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/input/imetargetpc.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/input/imesystem.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/matchingtargetpc.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/matchingcommonpc.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/matchingsystem.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/achievementcommonpc.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/achievementsystem.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/data/gamedatainfo.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/util/soundutil.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/check/operationmapper.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/profiledialogcommonpc.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/profiledialogsystem.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_leaderboard.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_fightinglist.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/mutex.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/steamnamecache.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/rtc.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/matchingtransceiverpc.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_roomlist.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_room.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_bank.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_game_interface.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/player/battleplayerinfo.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaprojectdataformat.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/system/battlecontroller.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/check/inputkeyrecord.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_replaydata.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_onlinereplay.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/data/menudata.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/exutil.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/auxscript.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/translate_table.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_movie.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/gfx/gfxmanager.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/scene/st_battleonline.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/onlineui/scene_roommember.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/battlehud/easingnumber.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/onlineui/roommembers.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_operation.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_manager.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglvec3.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/data/moviedata.cpp"

Scaleform::GFx::Value extension::GFn_registerHUDView(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x140098290
Scaleform::GFx::Value extension::GFn_Dispose(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x140257D70
Scaleform::GFx::Value extension::GFn_ApplicationQuit(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x140257DF0
Scaleform::GFx::Value extension::GFn_GetLastInputMethod(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x140257E40
Scaleform::GFx::Value extension::GFn_GetLastInputDeviceHWType(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x140257E80
Scaleform::GFx::Value extension::GFn_GetOrderSelectButton(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x140257EC0
Scaleform::GFx::Value extension::GFn_SetEnableInputSpecPerController(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x1402580C0
Scaleform::GFx::Value extension::GFn_SetIgnoreInputForNFrames(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x1402581C0
union extension::BindingsUID
{
public:
	long splitUID[2]; // 0x0
	unsigned long long UID; // 0x0
	AgControllerUID realUID; // 0x0
};
const AgDisplayMode fixedAspectRatioModes[72]; // 0x140A603A0
std::piecewise_construct_t std::piecewise_construct; // 0x1408AED13
char extension::same_aspect_res[10][100]; // 0x140AC6A60
char extension::stringBuff_2[129][100]; // 0x140AC6E50
char extension::stringBuff[2048]; // 0x140ACA0C0
const NETWORK_ANTENNA_SELECT_UI extension::antenna_tbl[4]; // 0x1408AF100
char extension::native_res[10]; // 0x140AC6650
char extension::all_res[10][100]; // 0x140AC6660
Scaleform::GFx::Value extension::GFn_GetAvailableInputDevices(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x140258260
std::pair<char const * __ptr64,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext & __ptr64,Scaleform::GFx::Value const * __ptr64,unsigned int)> >::~pair<char const * __ptr64,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext & __ptr64,Scaleform::GFx::Value const * __ptr64,unsigned int)> >(); // 0x14026EA40
Scaleform::GFx::Value extension::GFn_GetPlayerSelectedDevice(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x140258B20
Scaleform::GFx::Value extension::GFn_SendPlayerSelectedDevice(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x140258B90
Scaleform::GFx::Value extension::GFn_GetSerializedDefaultBindings(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x140258C30
Scaleform::GFx::Value extension::GFn_GetSerializedBindings(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x140258F90
Scaleform::GFx::Value extension::GFn_SendSerializedBindings(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x140259290
Scaleform::GFx::Value extension::GFn_Quit(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x1402596E0
Scaleform::GFx::Value extension::GFn_QuitLock(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x140259780
Scaleform::GFx::Value extension::GFn_QuitCross(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x140259820
Scaleform::GFx::Value extension::GFn_SetMenuCursor(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x1402598C0
Scaleform::GFx::Value extension::GFn_GetMenuCursor(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x140259950
Scaleform::GFx::Value extension::GFn_SetTeamMember(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x1402599C0
Scaleform::GFx::Value extension::GFn_SetSingleMember(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x140259A50
Scaleform::GFx::Value extension::GFn_SetMyBustupCharacterNo(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x140259AE0
Scaleform::GFx::Value extension::GFn_SetStage(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x140259BB0
Scaleform::GFx::Value extension::GFn_GetHistoryStage(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x140259C90
Scaleform::GFx::Value extension::GFn_SetTeamOrder(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x140259CD0
Scaleform::GFx::Value extension::GFn_SetMenuID(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x140259D60
Scaleform::GFx::Value extension::GFn_GetMenuID(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x140259E30
Scaleform::GFx::Value extension::GFn_SetLegacyStick(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x140259F00
Scaleform::GFx::Value extension::GFn_SetControllerSetting(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x140259FF0
Scaleform::GFx::Value extension::GFn_SetGameOption(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14025A080
Scaleform::GFx::Value extension::GFn_SetSystemOption(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14025A130
Scaleform::GFx::Value extension::GFn_SetReplayAutoSave(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14025A200
Scaleform::GFx::Value extension::GFn_SetAutoActing(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14025A290
Scaleform::GFx::Value extension::GFn_SetCommentGaya(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14025A300
Scaleform::GFx::Value extension::GFn_SetMasterVolume(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14025A390
Scaleform::GFx::Value extension::GFn_SetBGMVolume(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14025A430
Scaleform::GFx::Value extension::GFn_SetSEVolume(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14025A4D0
Scaleform::GFx::Value extension::GFn_SetCharaVoiceVolume(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14025A570
Scaleform::GFx::Value extension::GFn_SetSystemVoiceVolume(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14025A610
Scaleform::GFx::Value extension::GFn_SetAmbienceVolume(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14025A6B0
Scaleform::GFx::Value extension::GFn_SetPadVolume(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14025A750
Scaleform::GFx::Value extension::GFn_SetDisplayOption(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14025A7F0
Scaleform::GFx::Value extension::GFn_UpdateBrightnessOnly(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14025A890
Scaleform::GFx::Value extension::GFn_SaveDisplayOption(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14025A920
Scaleform::GFx::Value extension::GFn_SetGraphicsOption(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14025A9B0
Scaleform::GFx::Value extension::GFn_SetButtonConfig(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14025AAD0
Scaleform::GFx::Value extension::GFn_SetOperationMapper(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14025AB60
Scaleform::GFx::Value extension::GFn_SetDefaultGameOption(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14025ABE0
Scaleform::GFx::Value extension::GFn_SetDefaultSystemOption(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14025AC80
Scaleform::GFx::Value extension::GFn_SetDefaultSoundOption(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14025AD20
Scaleform::GFx::Value extension::GFn_SetDefaultDisplayOption(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14025ADE0
Scaleform::GFx::Value extension::GFn_SetDefaultGraphicsOption(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14025AE70
Scaleform::GFx::Value extension::GFn_PlaySoundSE(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14025AF00
Scaleform::GFx::Value extension::GFn_PlaySoundSEByName(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14025AF80
Scaleform::GFx::Value extension::GFn_PlaySoundSEByNamePos(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14025B000
Scaleform::GFx::Value extension::GFn_PlaySoundBGM(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14025B120
Scaleform::GFx::Value extension::GFn_PlaySoundBGMByName(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14025B1A0
Scaleform::GFx::Value extension::GFn_RequestPlayBGMUtil(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14025B240
Scaleform::GFx::Value extension::GFn_StopBGM(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14025B3B0
Scaleform::GFx::Value extension::GFn_StopSE(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14025B450
Scaleform::GFx::Value extension::GFn_GetDevMode(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14025B4F0
Scaleform::GFx::Value extension::GFn_GetGameParam(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14025B520
Scaleform::GFx::Value extension::GFn_GetUserCount(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14025B590
Scaleform::GFx::Value extension::GFn_GetUserNameToBC(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14025B5D0
Scaleform::GFx::Value extension::GFn_SetExchangedUserData(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14025B650
Scaleform::GFx::Value extension::GFn_ClearExchangedUserData(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14025B6F0
Scaleform::GFx::Value extension::GFn_SearchText(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14025B740
Scaleform::GFx::Value extension::GFn_GetText(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14025B850
Scaleform::GFx::Value extension::GFn_GetGameOptionParamArray(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14025B920
Scaleform::GFx::Value extension::GFn_GetSystemOptionParamArray(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14025B9E0
Scaleform::GFx::Value extension::GFn_GetSoundOptionParamArray(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14025BB00
Scaleform::GFx::Value extension::GFn_GetGraphicsOptionParamArray(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14025BBD0
Scaleform::GFx::Value extension::GFn_GetDisplayOptionParamArray(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14025BCC0
enum extension::Platform
{
	PS4 = 0,
	PC = 1,
};
Scaleform::GFx::Value extension::GFn_GetPlatform(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14025C1F0
Scaleform::GFx::Value extension::GFn_GetButtonConfigParamArray(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14025C220
Scaleform::GFx::Value extension::GFn_GetHudConfig(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14025C660
Scaleform::GFx::Value extension::GFn_SetHudPosition(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14025C6C0
Scaleform::GFx::Value extension::GFn_StartHudAdjust(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14025C750
Scaleform::GFx::Value extension::GFn_FinishHudAdjust(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14025C7D0
Scaleform::GFx::Value extension::GFn_CallSaveDataAsync(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14025C860
Scaleform::GFx::Value extension::GFn_CallSaveDataAsyncReplay(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14025C8E0
Scaleform::GFx::Value extension::GFn_GetTrainingSettingArray(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14025C960
Scaleform::GFx::Value extension::GFn_GetTrainingRecordSetting(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14025CB30
Scaleform::GFx::Value extension::GFn_SetTrainingRestart(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14025CCE0
Scaleform::GFx::Value extension::GFn_GetTouchPadSetting(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14025CDB0
Scaleform::GFx::Value extension::GFn_SetTouchPadSetting(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14025CDF0
Scaleform::GFx::Value extension::GFn_SetTrainingController(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14025CE30
Scaleform::GFx::Value extension::GFn_GetCharacterRecord(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14025D0A0
Scaleform::GFx::Value extension::GFn_GetPlayerRecord(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14025D240
Scaleform::GFx::Value extension::GFn_GetPlayerRecordOfflineRanking(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14025D4C0
Scaleform::GFx::Value extension::GFn_GetPlayerRecordOnlineRanking(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14025D690
Scaleform::GFx::Value extension::GFn_GetStoryScoreRanking(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14025D860
Scaleform::GFx::Value extension::GFn_GetTimeAttackRanking(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14025D9C0
Scaleform::GFx::Value extension::GFn_GetSurvivalRanking(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14025DB10
Scaleform::GFx::Value extension::GFn_GetMyProfile(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14025DC60
Scaleform::GFx::Value extension::GFn_GetMyAntenna(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14025DD20
Scaleform::GFx::Value extension::GFn_GetPlayerIcon(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14025E050
Scaleform::GFx::Value extension::GFn_GetPlayerTitle(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14025E090
Scaleform::GFx::Value extension::GFn_GetPlayerNetLosePub(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14025E0D0
Scaleform::GFx::Value extension::GFn_GetPlayerNetDrawPub(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14025E110
Scaleform::GFx::Value extension::GFn_GetPlayerNetRatePub(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14025E150
Scaleform::GFx::Value extension::GFn_GetPlayerArea(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14025E190
Scaleform::GFx::Value extension::GFn_GetPlayerRank(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14025E1F0
Scaleform::GFx::Value extension::GFn_GetPlayerRankPoint(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14025E290
Scaleform::GFx::Value extension::GFn_GetPlayerNetWin(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14025E300
Scaleform::GFx::Value extension::GFn_GetPlayerNetLose(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14025E370
Scaleform::GFx::Value extension::GFn_GetPlayerNetWins(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14025E3E0
Scaleform::GFx::Value extension::GFn_GetPlayerNetMaxWins(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14025E450
Scaleform::GFx::Value extension::GFn_GetPlayerNetDraw(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14025E4C0
Scaleform::GFx::Value extension::GFn_GetPlayerWinRate(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14025E530
Scaleform::GFx::Value extension::GFn_GetPlayerEndRate(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14025E590
Scaleform::GFx::Value extension::GFn_GetIconEnableFlag(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14025E5F0
Scaleform::GFx::Value extension::GFn_GetIconNewFlag(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14025E650
Scaleform::GFx::Value extension::GFn_ClearIconNewFlag(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14025E6B0
Scaleform::GFx::Value extension::GFn_GetNetworkTitleEnable(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14025E730
Scaleform::GFx::Value extension::GFn_GetNetworkTitleNew(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14025E790
Scaleform::GFx::Value extension::GFn_ClearNetworkTitleNew(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14025E7F0
Scaleform::GFx::Value extension::GFn_SetMyProfile(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14025E930
Scaleform::GFx::Value extension::GFn_GetGalleryLock(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14025E9A0
Scaleform::GFx::Value extension::GFn_GetGalleryNew(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14025EA00
Scaleform::GFx::Value extension::GFn_ClearGalleryNew(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14025EA60
Scaleform::GFx::Value extension::GFn_UnlockGallery(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14025EB00
Scaleform::GFx::Value extension::GFn_GetTutorialFlag(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14025EB60
Scaleform::GFx::Value extension::GFn_GetTutorialNo(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14025EBA0
Scaleform::GFx::Value extension::GFn_GetMissionTrialFlag(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14025EC20
Scaleform::GFx::Value extension::GFn_GetMissionTrialNo(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14025ECE0
Scaleform::GFx::Value extension::GFn_GetMissionTrialData(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14025ED60
Scaleform::GFx::Value extension::GFn_GetMissionTrialCount(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14025EEA0
Scaleform::GFx::Value extension::GFn_CallMakeSaveData(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14025EEF0
Scaleform::GFx::Value extension::GFn_GetMyFavoriteStageNo(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14025EF20
Scaleform::GFx::Value extension::GFn_GetMyFavoriteStage(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14025EF60
Scaleform::GFx::Value extension::GFn_GetMyFavoriteSingleNo(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14025EFA0
Scaleform::GFx::Value extension::GFn_GetMyFavoriteSingle(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14025EFE0
Scaleform::GFx::Value extension::GFn_GetMyFavoriteSingleColor(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14025F020
Scaleform::GFx::Value extension::GFn_GetMyFavoriteSingleCostume(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14025F060
Scaleform::GFx::Value extension::GFn_GetMyFavoriteTeamNo(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14025F0A0
Scaleform::GFx::Value extension::GFn_GetMyFavoriteTeam(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14025F0E0
Scaleform::GFx::Value extension::GFn_GetMyFavoriteTeamColor(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14025F130
Scaleform::GFx::Value extension::GFn_GetMyFavoriteTeamCostume(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14025F180
Scaleform::GFx::Value extension::GFn_GetCharacterRank(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14025F1D0
Scaleform::GFx::Value extension::GFn_IsEnableCharacter(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14025F250
Scaleform::GFx::Value extension::GFn_SetMyFavoriteStageNo(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14025F2B0
Scaleform::GFx::Value extension::GFn_SetMyFavoriteSingleNo(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14025F2F0
Scaleform::GFx::Value extension::GFn_SetMyFavoriteTeamNo(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14025F330
Scaleform::GFx::Value extension::GFn_IsEditMode(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14025F370
Scaleform::GFx::Value extension::GFn_OpenIMEDialog(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14025F3F0
Scaleform::GFx::Value extension::GFn_IsOpenIMEDialog(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14025F550
Scaleform::GFx::Value extension::GFn_GetMyRoomName(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14025F590
Scaleform::GFx::Value extension::GFn_SetMyRoomName(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14025F640
Scaleform::GFx::Value extension::GFn_GetReplayData(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14025F6A0
Scaleform::GFx::Value extension::GFn_GetReplayUserID(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14025F910
Scaleform::GFx::Value extension::GFn_PlayStartReplay(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14025FC40
Scaleform::GFx::Value extension::GFn_DownloadStartReplay(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14025FD00
Scaleform::GFx::Value extension::GFn_RequestOnlineReplayData(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14025FD50
Scaleform::GFx::Value extension::GFn_GetDownloadReplayData(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14025FDB0
bool extension::CnvLEADERBOARD_REPLAY_FORMAT_000(extension::GFXIMovieContext & ctx, long no, const char * symbol); // 0x140260BC0
bool extension::CnvLEADERBOARD_REPLAY_FORMAT_001(extension::GFXIMovieContext & ctx, long no, const char * symbol); // 0x1402618D0
bool extension::CnvLEADERBOARD_REPLAY(extension::GFXIMovieContext & ctx, long no, const char * symbol); // 0x140262610
Scaleform::GFx::Value extension::GFn_GetOnlineReplayData(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x140263340
Scaleform::GFx::Value extension::GFn_SetReplayLockFlag(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x140263430
Scaleform::GFx::Value extension::GFn_SetReplayOpenFlag(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x1402634D0
Scaleform::GFx::Value extension::GFn_DeleteReplayData(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x140263570
Scaleform::GFx::Value extension::GFn_SetHudPrintStatus(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x140263640
Scaleform::GFx::Value extension::GFn_SetKeyDataStatus(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x140263700
Scaleform::GFx::Value extension::GFn_SetKeyDataPrint(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x140263790
Scaleform::GFx::Value extension::GFn_SetAttackDataStatus(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x140263850
Scaleform::GFx::Value extension::GFn_SetOnlineIDStatus(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x1402638E0
Scaleform::GFx::Value extension::GFn_GetOnlineIDStatus(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x1402639A0
Scaleform::GFx::Value extension::GFn_SetVoiceChatStatus(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x140263A00
Scaleform::GFx::Value extension::GFn_GetVoiceChatStatus(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x140263A40
Scaleform::GFx::Value extension::GFn_SetTrainingSettingArray(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x140263A80
Scaleform::GFx::Value extension::GFn_SetTrainingRecordSetting(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x140263D90
Scaleform::GFx::Value extension::GFn_SetOnlineTrainingSetting(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x140264080
Scaleform::GFx::Value extension::GFn_SetTrainingSettingDefault(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x140264360
Scaleform::GFx::Value extension::GFn_SetOnlineTrainingSettingDefault(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x140264580
Scaleform::GFx::Value extension::GFn_IsValidKeyRecordData(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x1402646F0
Scaleform::GFx::Value extension::GFn_SetContinueBonus(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x140264850
Scaleform::GFx::Value extension::GFn_SetSkipGrade(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x1402648E0
Scaleform::GFx::Value extension::GFn_SetRoomSettingRank(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x140264960
Scaleform::GFx::Value extension::GFn_GetRoomSettingRank(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x140264AF0
Scaleform::GFx::Value extension::GFn_SetRoomSettingFreeTeam(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x140264D80
Scaleform::GFx::Value extension::GFn_GetRoomSettingFreeTeam(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x140264F70
Scaleform::GFx::Value extension::GFn_SetRoomSettingFreeSingle(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x140265300
Scaleform::GFx::Value extension::GFn_GetRoomSettingFreeSingle(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x140265510
Scaleform::GFx::Value extension::GFn_SetRoomSettingFreeParty(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x140265930
Scaleform::GFx::Value extension::GFn_GetRoomSettingFreeParty(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x140265B30
Scaleform::GFx::Value extension::GFn_SetRoomSettingTraining(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x140265ED0
Scaleform::GFx::Value extension::GFn_GetRoomSettingTraining(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x140265FA0
Scaleform::GFx::Value extension::GFn_SetSearchSettingRank(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x1402661F0
Scaleform::GFx::Value extension::GFn_GetSearchSettingRank(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x140266310
Scaleform::GFx::Value extension::GFn_SetSearchSettingFreeTeam(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x1402665A0
Scaleform::GFx::Value extension::GFn_GetSearchSettingFreeTeam(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x1402666F0
Scaleform::GFx::Value extension::GFn_SetSearchSettingFreeSingle(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x1402669B0
Scaleform::GFx::Value extension::GFn_GetSearchSettingFreeSingle(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x140266B30
Scaleform::GFx::Value extension::GFn_SetSearchSettingFreeParty(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x140266E50
Scaleform::GFx::Value extension::GFn_GetSearchSettingFreeParty(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x140266FA0
Scaleform::GFx::Value extension::GFn_SetSearchSettingTraining(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x140267260
Scaleform::GFx::Value extension::GFn_GetSearchSettingTraining(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x140267370
Scaleform::GFx::Value extension::GFn_GetRoomInfoArray(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x1402675D0
Scaleform::GFx::Value extension::GFn_JoinRoom(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x140267BF0
Scaleform::GFx::Value extension::GFn_ResearchRoom(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x140267CA0
Scaleform::GFx::Value extension::GFn_GetRoomInfo(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x140267D00
Scaleform::GFx::Value extension::GFn_GetRoomTableBattleType(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x140268040
Scaleform::GFx::Value extension::GFn_GetMeInfo(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x140268080
Scaleform::GFx::Value extension::GFn_GetRoomMemberInfo(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x1402685A0
Scaleform::GFx::Value extension::GFn_ShowRoomPlayerPSN(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x140268AF0
Scaleform::GFx::Value extension::GFn_ShowLeaderboardPlayerPSN(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x140268B70
Scaleform::GFx::Value extension::GFn_AcceptRankMatchPlayer(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x140268C20
Scaleform::GFx::Value extension::GFn_KickRankMatchPlayer(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x140268CC0
Scaleform::GFx::Value extension::GFn_KickRoomPlayer(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x140268D50
Scaleform::GFx::Value extension::GFn_RoomLeave(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x140268E40
Scaleform::GFx::Value extension::GFn_RoomSeatSit(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x140268ED0
Scaleform::GFx::Value extension::GFn_RoomSeatLeave(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x140268F30
Scaleform::GFx::Value extension::GFn_RoomSeatBattleReady(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x140268F80
Scaleform::GFx::Value extension::GFn_RoomSeatBattleReadyCancel(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x140268FD0
Scaleform::GFx::Value extension::GFn_RoomTableBattleTypeChange(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x140269020
Scaleform::GFx::Value extension::GFn_SendChatMessage(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x140269070
Scaleform::GFx::Value extension::GFn_SendChatMessageInBattle(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x1402690F0
Scaleform::GFx::Value extension::GFn_CanSendMessage(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x1402691D0
Scaleform::GFx::Value extension::GFn_SetPlayerMuteFlag(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x140269240
Scaleform::GFx::Value extension::GFn_SetAllMuteFlag(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x1402692B0
Scaleform::GFx::Value extension::GFn_RoomInviteFriend(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x140269330
Scaleform::GFx::Value extension::GFn_GetBattleMemberData(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x140269380
Scaleform::GFx::Value extension::GFn_RequestLeaderBoardRanking(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x140269780
Scaleform::GFx::Value extension::GFn_GetLeaderBoardRanking(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x1402697F0
Scaleform::GFx::Value extension::GFn_GetFightingList(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x140269D00
Scaleform::GFx::Value extension::GFn_GetFightingBonus(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14026A310
Scaleform::GFx::Value extension::GFn_FightingListShowPSN(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14026A3D0
Scaleform::GFx::Value extension::GFn_IsGettingFightBonusNow(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14026A460
Scaleform::GFx::Value extension::GFn_HideFlare(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14026A4B0
Scaleform::GFx::Value extension::GFn_ShowFlare(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14026A550
Scaleform::GFx::Value extension::GFn_FadeOut(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14026A5F0
Scaleform::GFx::Value extension::GFn_SoundIsLoadComplete(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14026A660
Scaleform::GFx::Value extension::GFn_PlayCharacterSoundName(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14026A700
Scaleform::GFx::Value extension::GFn_PlayCharacterSound(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14026A7C0
Scaleform::GFx::Value extension::GFn_LoadCharacterBank(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14026A880
Scaleform::GFx::Value extension::GFn_LoadAnnounceBank(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14026AB60
Scaleform::GFx::Value extension::GFn_GetCharacterBankLength(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14026ADC0
Scaleform::GFx::Value extension::GFn_GetCharacterSoundName(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14026AE30
Scaleform::GFx::Value extension::GFn_PlayMovie(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14026AEE0
Scaleform::GFx::Value extension::GFn_ContinuePlayBGMUtil(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14026B0C0
Scaleform::GFx::Value extension::GFn_IsPlayMovie(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14026B230
Scaleform::GFx::Value extension::GFn_PauseMovieStack(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14026B2B0
Scaleform::GFx::Value extension::GFn_ResumeMovieStack(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14026B2F0
Scaleform::GFx::Value extension::GFn_PauseMovieProxy(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14026B330
Scaleform::GFx::Value extension::GFn_ResumeMovieProxy(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14026B3C0
Scaleform::GFx::Value extension::GFn_VisitMyProfile(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14026B450
Scaleform::GFx::Value extension::GFn_VisitProfile(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14026B4D0
Scaleform::GFx::Value extension::GFn_RequestOnlineSaveData(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14026B570
Scaleform::GFx::Value extension::GFn_LoadOnlineSavedataFlag(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14026B650
Scaleform::GFx::Value extension::GFn_BattleCaharaNo(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14026B690
Scaleform::GFx::Value extension::GFn_IsParentalControlChat(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14026B790
Scaleform::GFx::Value extension::GFn_IsParentalControlUgc(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14026B840
Scaleform::GFx::Value extension::GFn_IsCreateRoom(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14026B8F0
Scaleform::GFx::Value extension::GFn_IsEntryNow(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14026B960
Scaleform::GFx::Value extension::GFn_IsRoomIn(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14026B9B0
Scaleform::GFx::Value extension::GFn_IsTrainingWait(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14026BA00
Scaleform::GFx::Value extension::GFn_RequestEntryOff(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14026BAD0
Scaleform::GFx::Value extension::GFn_GetStoryWinCount(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14026BBD0
Scaleform::GFx::Value extension::GFn_ChangeMainMenuBGM(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14026BC50
Scaleform::GFx::Value extension::GFn_TutorialMessageEnd(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14026BCA0
Scaleform::GFx::Value extension::GFn_SetHandicap(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14026BCE0
Scaleform::GFx::Value extension::GFn_OpenSystemMessage(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14026BD80
Scaleform::GFx::Value extension::GFn_CloseSystemMessage(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14026BEE0
Scaleform::GFx::Value extension::GFn_CallbackSystemMessage(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14026BFA0
Scaleform::GFx::Value extension::GFn_GetSystemMessageCursor(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14026C050
Scaleform::GFx::Value extension::GFn_IsSystemMessageOpen(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14026C0D0
Scaleform::GFx::Value extension::GFn_IsItemDisplay(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14026C150
Scaleform::GFx::Value extension::GFn_AllDeleteNotification(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14026C1D0
Scaleform::GFx::Value extension::GFn_IsFirstNoticeFlag(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14026C290
Scaleform::GFx::Value extension::GFn_SetFirstNoticeFlag(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14026C2F0
Scaleform::GFx::Value extension::GFn_SetResultTransitionMenu(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14026C380
Scaleform::GFx::Value extension::GFn_MemberSelectStart(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14026C3C0
Scaleform::GFx::Value extension::GFn_GetStatusNetwork(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14026C410
Scaleform::GFx::Value extension::GFn_UnescapeSpecialHTML(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14026C460
Scaleform::GFx::Value extension::GFn_CheckDebugValue(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x140259FC0
Scaleform::GFx::Value extension::GFn_GetTitleName(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14026C510
Scaleform::GFx::Value extension::GFn_IsEnableLanguage(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14026C540
Scaleform::GFx::Value extension::GFn_BGMVolumeModulation(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14026C5B0
Scaleform::GFx::Value extension::GFn_SEVolumeModulation(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14026C610
Scaleform::GFx::Value extension::GFn_EndOfMovie(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14026B040
Scaleform::GFx::Value extension::GFn_StartEasyCommand(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14026C670
Scaleform::GFx::Value extension::GFn_IsEnableMyFavoriteTeam(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14026C6E0
Scaleform::GFx::Value extension::GFn_IsEnableMyFavoriteTeamIndex(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14026C7D0
Scaleform::GFx::Value extension::GFn_IsEnableMyFavoriteSingle(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14026C890
Scaleform::GFx::Value extension::GFn_IsEnableCharaAndCostume(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14026C940
Scaleform::GFx::Value extension::GFn_Test(extension::GFXIMovieContext & ctx, const Scaleform::GFx::Value * argv, unsigned long argc); // 0x14026C9E0
void extension::InstallGFxInterface(); // 0x14026CA90//decompilation failure at 140A603A0!
//decompilation failure at 1408AED13!
//decompilation failure at 140AC6A60!
//decompilation failure at 140AC6E50!
//decompilation failure at 140ACA0C0!
//decompilation failure at 1408AF100!
//decompilation failure at 140AC6650!
//decompilation failure at 140AC6660!
void __fastcall std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        std::pair<char const *,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> > *this,
        const char (*_Val1)[15],
        Scaleform::GFx::Value *(__fastcall *_Val2)(Scaleform::GFx::Value *result, extension::GFXIMovieContext *, const Scaleform::GFx::Value *, unsigned int))
{
  this->first = (const char *)_Val1;
  this->second._Mystorage._Ptrs[7] = 0i64;
  if ( _Val2 )
  {
    this->second._Mystorage._Ptrs[0] = (std::_Func_base<Scaleform::GFx::Value,extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int> *)&std::_Func_impl<Scaleform::GFx::Value (*)(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int),std::allocator<int>,Scaleform::GFx::Value,extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int>::`vftable';
    this->second._Mystorage._Ptrs[1] = (std::_Func_base<Scaleform::GFx::Value,extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int> *)_Val2;
    this->second._Mystorage._Ptrs[7] = (std::_Func_base<Scaleform::GFx::Value,extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int> *)&this->second;
  }
}

void __fastcall std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        std::pair<char const *,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> > *this,
        const char (*_Val1)[7],
        Scaleform::GFx::Value *(__fastcall *_Val2)(Scaleform::GFx::Value *result, extension::GFXIMovieContext *, const Scaleform::GFx::Value *, unsigned int))
{
  this->first = "StopSE";
  this->second._Mystorage._Ptrs[7] = 0i64;
  if ( extension::GFn_StopSE )
  {
    this->second._Mystorage._Ptrs[0] = (std::_Func_base<Scaleform::GFx::Value,extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int> *)&std::_Func_impl<Scaleform::GFx::Value (*)(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int),std::allocator<int>,Scaleform::GFx::Value,extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int>::`vftable';
    this->second._Mystorage._Ptrs[1] = (std::_Func_base<Scaleform::GFx::Value,extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int> *)extension::GFn_StopSE;
    this->second._Mystorage._Ptrs[7] = (std::_Func_base<Scaleform::GFx::Value,extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int> *)&this->second;
  }
}

void __fastcall std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        std::pair<char const *,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> > *this,
        const char (*_Val1)[30],
        Scaleform::GFx::Value *(__fastcall *_Val2)(Scaleform::GFx::Value *result, extension::GFXIMovieContext *, const Scaleform::GFx::Value *, unsigned int))
{
  this->first = "GetPlayerRecordOfflineRanking";
  this->second._Mystorage._Ptrs[7] = 0i64;
  if ( extension::GFn_GetPlayerRecordOfflineRanking )
  {
    this->second._Mystorage._Ptrs[0] = (std::_Func_base<Scaleform::GFx::Value,extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int> *)&std::_Func_impl<Scaleform::GFx::Value (*)(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int),std::allocator<int>,Scaleform::GFx::Value,extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int>::`vftable';
    this->second._Mystorage._Ptrs[1] = (std::_Func_base<Scaleform::GFx::Value,extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int> *)extension::GFn_GetPlayerRecordOfflineRanking;
    this->second._Mystorage._Ptrs[7] = (std::_Func_base<Scaleform::GFx::Value,extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int> *)&this->second;
  }
}

Scaleform::GFx::Value *__fastcall std::_Invoker_functor::_Call<Scaleform::GFx::Value (*&)(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int),extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int>(
        Scaleform::GFx::Value *result,
        Scaleform::GFx::Value *(__fastcall **_Obj)(Scaleform::GFx::Value *result, extension::GFXIMovieContext *, const Scaleform::GFx::Value *, unsigned int),
        extension::GFXIMovieContext *<_Args_0>,
        const Scaleform::GFx::Value **<_Args_1>,
        unsigned int *<_Args_2>)
{
  __int64 v6; // rdx
  Scaleform::GFx::Value::ObjectInterface *v7; // rcx
  Scaleform::GFx::Value val; // [rsp+30h] [rbp-38h] BYREF

  v6 = ((__int64 (__fastcall *)(Scaleform::GFx::Value *, extension::GFXIMovieContext *, const Scaleform::GFx::Value *, _QWORD, _DWORD, __int64))*_Obj)(
         &val,
         <_Args_0>,
         *<_Args_1>,
         *<_Args_2>,
         0,
         -2i64);
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = *(_DWORD *)(v6 + 24);
  result->mValue.pString = *(const char **)(v6 + 32);
  result->DataAux = *(_QWORD *)(v6 + 40);
  if ( (*(_DWORD *)(v6 + 24) & 0x40) != 0 )
  {
    v7 = *(Scaleform::GFx::Value::ObjectInterface **)(v6 + 16);
    result->pObjectInterface = v7;
    Scaleform::GFx::Value::ObjectInterface::ObjectAddRef(v7, result, result->mValue.pStringManaged);
  }
  if ( (val.Type & 0x40) != 0 )
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(val.pObjectInterface, &val, val.mValue.pStringManaged);
  return result;
}

void __fastcall std::_Destroy_range<std::allocator<AgPointer<AgThread>>,AgPointer<AgThread> *>(
        AgPointer<AgUser> *_First,
        AgPointer<AgUser> *_Last,
        std::_Wrap_alloc<std::allocator<AgPointer<AgUser> > > *_Al)
{
  AgPointer<AgUser> *v4; // rbx

  if ( _First != _Last )
  {
    v4 = _First;
    do
      AgPointer<AgUser>::~AgPointer<AgUser>((AgPointer<KOFApplication> *)v4++);
    while ( v4 != _Last );
  }
}

Scaleform::GFx::Value *__fastcall std::_Invoke_ret<Scaleform::GFx::Value,Scaleform::GFx::Value (*&)(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int),extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int>(
        Scaleform::GFx::Value *result,
        std::_Forced<Scaleform::GFx::Value,0> __formal,
        Scaleform::GFx::Value *(__fastcall **<_Vals_0>)(Scaleform::GFx::Value *result, extension::GFXIMovieContext *, const Scaleform::GFx::Value *, unsigned int),
        extension::GFXIMovieContext *<_Vals_1>,
        const Scaleform::GFx::Value **<_Vals_2>,
        unsigned int *<_Vals_3>)
{
  std::invoke<Scaleform::GFx::Value (*&)(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int),extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int>(
    result,
    <_Vals_0>,
    <_Vals_1>,
    <_Vals_2>,
    <_Vals_3>);
  return result;
}

void __fastcall extension::GFXIGameInterface::installFunctions<299>(
        extension::GFXIGameInterface *this,
        const std::pair<char const *,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> > (*table)[299])
{
  __int64 v4; // rdi

  v4 = 299i64;
  do
  {
    extension::gfxi_detail::FunctionTable::installFunction(
      this->m_impl.m_ptr->m_functionTable.m_ptr,
      (*table)[0].first,
      &(*table)[0].second);
    table = (const std::pair<char const *,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> > (*)[299])((char *)table + 72);
    --v4;
  }
  while ( v4 );
}

Scaleform::GFx::Value *__fastcall std::invoke<Scaleform::GFx::Value (*&)(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int),extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int>(
        Scaleform::GFx::Value *result,
        Scaleform::GFx::Value *(__fastcall **_Obj)(Scaleform::GFx::Value *result, extension::GFXIMovieContext *, const Scaleform::GFx::Value *, unsigned int),
        extension::GFXIMovieContext *<_Args_0>,
        const Scaleform::GFx::Value **<_Args_1>,
        unsigned int *<_Args_2>)
{
  std::_Invoker_functor::_Call<Scaleform::GFx::Value (*&)(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int),extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int>(
    result,
    _Obj,
    <_Args_0>,
    <_Args_1>,
    <_Args_2>);
  return result;
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

void __fastcall std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::~pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        std::pair<char const *,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> > *this,
        _BOOL8 a2)
{
  std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> *p_second; // rbx
  std::_Func_base<Scaleform::GFx::Value,extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int> *v3; // rcx

  p_second = &this->second;
  v3 = this->second._Mystorage._Ptrs[7];
  if ( v3 )
  {
    LOBYTE(a2) = v3 != (std::_Func_base<Scaleform::GFx::Value,extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int> *)p_second;
    v3->_Delete_this(v3, a2);
    p_second->_Mystorage._Ptrs[7] = 0i64;
  }
}

// attributes: thunk
void __fastcall std::vector<AgPointer<AgController>>::~vector<AgPointer<AgController>>(
        std::vector<AgPointer<AgController>> *this)
{
  std::vector<AgPointer<AgThread>>::_Tidy((std::vector<AgPointer<AgUser>> *)this);
}

char __fastcall extension::CnvLEADERBOARD_REPLAY(extension::GFXIMovieContext *ctx, int no, const char *symbol)
{
  __int64 v3; // r13
  __int64 v4; // rbx
  __int64 v5; // rdi
  CSteamID v6; // rsi
  CSteamID v7; // r15
  CSteamID v8; // r12
  char **Name; // r14
  char **v10; // rsi
  char **v11; // rsi
  int v12; // esi
  int v13; // esi
  int v14; // esi
  int v15; // esi
  int v16; // esi
  int v17; // esi
  int v18; // esi
  int v19; // esi
  int v20; // esi
  char **v21; // rsi
  char **v22; // rsi
  char **v23; // rsi
  int v24; // esi
  int v25; // esi
  int v26; // esi
  int v27; // esi
  int v28; // esi
  int v29; // esi
  int v30; // esi
  int v31; // esi
  int v32; // esi
  int v33; // esi
  int v34; // esi
  int v35; // esi
  tm *v36; // rax
  __int64 v37; // rsi
  tm *v38; // rax
  __int64 v39; // rcx
  Scaleform::GFx::Value::ValueUnion v40; // xmm6_8
  char **v41; // r14
  bool v42; // r14
  __int64 v43; // r8
  __int64 v44; // rdx
  _QWORD *v45; // rcx
  int v46; // esi
  int v47; // esi
  int v48; // esi
  int v49; // esi
  int v50; // esi
  int v51; // esi
  int v52; // ebx
  void (__fastcall *destructor)(void *); // [rsp+28h] [rbp-E0h]
  void (__fastcall *destructora)(void *); // [rsp+28h] [rbp-E0h]
  __int64 count; // [rsp+30h] [rbp-D8h]
  __int64 setType; // [rsp+38h] [rbp-D0h]
  __int64 v58; // [rsp+40h] [rbp-C8h]
  __int64 ptime; // [rsp+50h] [rbp-B8h] BYREF
  CSteamID id; // [rsp+58h] [rbp-B0h]
  CSteamID v62; // [rsp+60h] [rbp-A8h]
  __int64 v63; // [rsp+68h] [rbp-A0h]
  char *ppathToVar; // [rsp+70h] [rbp-98h]
  extension::GFXIMovieContext *v65; // [rsp+78h] [rbp-90h]
  __int64 v66; // [rsp+80h] [rbp-88h]
  Scaleform::GFx::Value ptr; // [rsp+88h] [rbp-80h] BYREF
  Scaleform::GFx::Value val; // [rsp+B8h] [rbp-50h] BYREF
  Scaleform::GFx::Value v69; // [rsp+E8h] [rbp-20h] BYREF
  Scaleform::GFx::Value v70; // [rsp+118h] [rbp+10h] BYREF
  Scaleform::GFx::Value v71; // [rsp+148h] [rbp+40h] BYREF
  Scaleform::GFx::Value v72; // [rsp+178h] [rbp+70h] BYREF
  Scaleform::GFx::Value v73; // [rsp+1A8h] [rbp+A0h] BYREF
  Scaleform::GFx::Value v74; // [rsp+1D8h] [rbp+D0h] BYREF
  Scaleform::GFx::Value v75; // [rsp+208h] [rbp+100h] BYREF
  Scaleform::GFx::Value v76; // [rsp+238h] [rbp+130h] BYREF
  Scaleform::GFx::Value v77; // [rsp+268h] [rbp+160h] BYREF
  Scaleform::GFx::Value v78; // [rsp+298h] [rbp+190h] BYREF
  Scaleform::GFx::Value v79; // [rsp+2C8h] [rbp+1C0h] BYREF
  Scaleform::GFx::Value v80; // [rsp+2F8h] [rbp+1F0h] BYREF
  Scaleform::GFx::Value v81; // [rsp+328h] [rbp+220h] BYREF
  Scaleform::GFx::Value v82; // [rsp+358h] [rbp+250h] BYREF
  Scaleform::GFx::Value v83; // [rsp+388h] [rbp+280h] BYREF
  Scaleform::GFx::Value v84; // [rsp+3B8h] [rbp+2B0h] BYREF
  Scaleform::GFx::Value v85; // [rsp+3E8h] [rbp+2E0h] BYREF
  Scaleform::GFx::Value v86; // [rsp+418h] [rbp+310h] BYREF
  Scaleform::GFx::Value v87; // [rsp+448h] [rbp+340h] BYREF
  Scaleform::GFx::Value v88; // [rsp+478h] [rbp+370h] BYREF
  Scaleform::GFx::Value v89; // [rsp+4A8h] [rbp+3A0h] BYREF
  Scaleform::GFx::Value v90; // [rsp+4D8h] [rbp+3D0h] BYREF
  Scaleform::GFx::Value v91; // [rsp+508h] [rbp+400h] BYREF
  Scaleform::GFx::Value v92; // [rsp+538h] [rbp+430h] BYREF
  Scaleform::GFx::Value v93; // [rsp+568h] [rbp+460h] BYREF
  Scaleform::GFx::Value v94; // [rsp+598h] [rbp+490h] BYREF
  Scaleform::GFx::Value v95; // [rsp+5C8h] [rbp+4C0h] BYREF
  Scaleform::GFx::Value v96; // [rsp+5F8h] [rbp+4F0h] BYREF
  Scaleform::GFx::Value v97; // [rsp+628h] [rbp+520h] BYREF
  Scaleform::GFx::Value v98; // [rsp+658h] [rbp+550h] BYREF
  Scaleform::GFx::Value v99; // [rsp+688h] [rbp+580h] BYREF
  Scaleform::GFx::Value v100; // [rsp+6B8h] [rbp+5B0h] BYREF
  Scaleform::GFx::Value v101; // [rsp+6E8h] [rbp+5E0h] BYREF
  Scaleform::GFx::Value v102; // [rsp+718h] [rbp+610h] BYREF
  Scaleform::GFx::Value v103; // [rsp+748h] [rbp+640h] BYREF
  Scaleform::GFx::Value v104; // [rsp+778h] [rbp+670h] BYREF
  Scaleform::GFx::Value v105; // [rsp+7A8h] [rbp+6A0h] BYREF
  Scaleform::GFx::Value v106; // [rsp+7D8h] [rbp+6D0h] BYREF

  v66 = -2i64;
  ppathToVar = (char *)symbol;
  v65 = ctx;
  v3 = *(_QWORD *)&AppMain::pApp;
  v63 = no;
  v4 = 132i64 * no;
  v5 = *(_QWORD *)(*(_QWORD *)&AppMain::pApp + 35392i64);
  if ( no < 0 || !*(_QWORD *)(v4 + v5 + 4) )
    return 0;
  `eh vector constructor iterator'(
    &ptr,
    0x30ui64,
    0x28ui64,
    (void (__fastcall *)(void *))Scaleform::GFx::Value::Value,
    (void (__fastcall *)(void *))Scaleform::GFx::Value::~Value);
  v6.m_steamid.m_comp = *(CSteamID::SteamID_t::SteamIDComponent_t *)(v4 + v5 + 24);
  v7.m_steamid.m_comp = *(CSteamID::SteamID_t::SteamIDComponent_t *)(v4 + v5 + 36);
  v8.m_steamid.m_comp = *(CSteamID::SteamID_t::SteamIDComponent_t *)(v4 + v5 + 48);
  id.m_steamid.m_comp = *(CSteamID::SteamID_t::SteamIDComponent_t *)(v4 + v5 + 60);
  v62.m_steamid.m_comp = *(CSteamID::SteamID_t::SteamIDComponent_t *)(v4 + v5 + 72);
  Name = SteamNameCache::getName(SteamNameCache::ms_instance, *(CSteamID *)(v4 + v5 + 12));
  if ( (ptr.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(ptr.pObjectInterface, &ptr, ptr.mValue.pStringManaged);
    ptr.pObjectInterface = 0i64;
  }
  ptr.Type = 6;
  ptr.mValue.pString = (const char *)Name;
  v10 = SteamNameCache::getName(SteamNameCache::ms_instance, v6);
  if ( (val.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(val.pObjectInterface, &val, val.mValue.pStringManaged);
    val.pObjectInterface = 0i64;
  }
  val.Type = 6;
  val.mValue.pString = (const char *)v10;
  v11 = SteamNameCache::getName(SteamNameCache::ms_instance, v7);
  if ( (v69.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v69.pObjectInterface, &v69, v69.mValue.pStringManaged);
    v69.pObjectInterface = 0i64;
  }
  v69.Type = 6;
  v69.mValue.pString = (const char *)v11;
  v12 = *(unsigned __int8 *)(v4 + v5 + 21);
  if ( (v70.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v70.pObjectInterface, &v70, v70.mValue.pStringManaged);
    v70.pObjectInterface = 0i64;
  }
  v70.Type = VT_Float;
  v70.mValue.IValue = v12;
  v13 = *(unsigned __int8 *)(v4 + v5 + 33);
  if ( (v71.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v71.pObjectInterface, &v71, v71.mValue.pStringManaged);
    v71.pObjectInterface = 0i64;
  }
  v71.Type = VT_Float;
  v71.mValue.IValue = v13;
  v14 = *(unsigned __int8 *)(v4 + v5 + 45);
  if ( (v72.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v72.pObjectInterface, &v72, v72.mValue.pStringManaged);
    v72.pObjectInterface = 0i64;
  }
  v72.Type = VT_Float;
  v72.mValue.IValue = v14;
  v15 = *(unsigned __int16 *)(v4 + v5 + 22);
  if ( (v73.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v73.pObjectInterface, &v73, v73.mValue.pStringManaged);
    v73.pObjectInterface = 0i64;
  }
  v73.Type = VT_Float;
  v73.mValue.IValue = v15;
  v16 = *(unsigned __int16 *)(v4 + v5 + 34);
  if ( (v74.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v74.pObjectInterface, &v74, v74.mValue.pStringManaged);
    v74.pObjectInterface = 0i64;
  }
  v74.Type = VT_Float;
  v74.mValue.IValue = v16;
  v17 = *(unsigned __int16 *)(v4 + v5 + 46);
  if ( (v75.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v75.pObjectInterface, &v75, v75.mValue.pStringManaged);
    v75.pObjectInterface = 0i64;
  }
  v75.Type = VT_Float;
  v75.mValue.IValue = v17;
  v18 = *(unsigned __int8 *)(v4 + v5 + 84);
  if ( (v76.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v76.pObjectInterface, &v76, v76.mValue.pStringManaged);
    v76.pObjectInterface = 0i64;
  }
  v76.Type = VT_Float;
  v76.mValue.IValue = v18;
  v19 = *(unsigned __int8 *)(v4 + v5 + 85);
  if ( (v77.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v77.pObjectInterface, &v77, v77.mValue.pStringManaged);
    v77.pObjectInterface = 0i64;
  }
  v77.Type = VT_Float;
  v77.mValue.IValue = v19;
  v20 = *(unsigned __int8 *)(v4 + v5 + 86);
  if ( (v78.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v78.pObjectInterface, &v78, v78.mValue.pStringManaged);
    v78.pObjectInterface = 0i64;
  }
  v78.Type = VT_Float;
  v78.mValue.IValue = v20;
  v21 = SteamNameCache::getName(SteamNameCache::ms_instance, v8);
  if ( (v79.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v79.pObjectInterface, &v79, v79.mValue.pStringManaged);
    v79.pObjectInterface = 0i64;
  }
  v79.Type = 6;
  v79.mValue.pString = (const char *)v21;
  v22 = SteamNameCache::getName(SteamNameCache::ms_instance, id);
  if ( (v80.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v80.pObjectInterface, &v80, v80.mValue.pStringManaged);
    v80.pObjectInterface = 0i64;
  }
  v80.Type = 6;
  v80.mValue.pString = (const char *)v22;
  v23 = SteamNameCache::getName(SteamNameCache::ms_instance, v62);
  if ( (v81.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v81.pObjectInterface, &v81, v81.mValue.pStringManaged);
    v81.pObjectInterface = 0i64;
  }
  v81.Type = 6;
  v81.mValue.pString = (const char *)v23;
  v24 = *(unsigned __int8 *)(v4 + v5 + 57);
  if ( (v82.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v82.pObjectInterface, &v82, v82.mValue.pStringManaged);
    v82.pObjectInterface = 0i64;
  }
  v82.Type = VT_Float;
  v82.mValue.IValue = v24;
  v25 = *(unsigned __int8 *)(v4 + v5 + 69);
  if ( (v83.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v83.pObjectInterface, &v83, v83.mValue.pStringManaged);
    v83.pObjectInterface = 0i64;
  }
  v83.Type = VT_Float;
  v83.mValue.IValue = v25;
  v26 = *(unsigned __int8 *)(v4 + v5 + 81);
  if ( (v84.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v84.pObjectInterface, &v84, v84.mValue.pStringManaged);
    v84.pObjectInterface = 0i64;
  }
  v84.Type = VT_Float;
  v84.mValue.IValue = v26;
  v27 = *(unsigned __int16 *)(v4 + v5 + 58);
  if ( (v85.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v85.pObjectInterface, &v85, v85.mValue.pStringManaged);
    v85.pObjectInterface = 0i64;
  }
  v85.Type = VT_Float;
  v85.mValue.IValue = v27;
  v28 = *(unsigned __int16 *)(v4 + v5 + 70);
  if ( (v86.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v86.pObjectInterface, &v86, v86.mValue.pStringManaged);
    v86.pObjectInterface = 0i64;
  }
  v86.Type = VT_Float;
  v86.mValue.IValue = v28;
  v29 = *(unsigned __int16 *)(v4 + v5 + 82);
  if ( (v87.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v87.pObjectInterface, &v87, v87.mValue.pStringManaged);
    v87.pObjectInterface = 0i64;
  }
  v87.Type = VT_Float;
  v87.mValue.IValue = v29;
  v30 = *(unsigned __int8 *)(v4 + v5 + 87);
  if ( (v88.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v88.pObjectInterface, &v88, v88.mValue.pStringManaged);
    v88.pObjectInterface = 0i64;
  }
  v88.Type = VT_Float;
  v88.mValue.IValue = v30;
  v31 = *(unsigned __int8 *)(v4 + v5 + 88);
  if ( (v89.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v89.pObjectInterface, &v89, v89.mValue.pStringManaged);
    v89.pObjectInterface = 0i64;
  }
  v89.Type = VT_Float;
  v89.mValue.IValue = v31;
  v32 = *(unsigned __int8 *)(v4 + v5 + 89);
  if ( (v90.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v90.pObjectInterface, &v90, v90.mValue.pStringManaged);
    v90.pObjectInterface = 0i64;
  }
  v90.Type = VT_Float;
  v90.mValue.IValue = v32;
  v33 = *(unsigned __int8 *)(v4 + v5 + 90);
  if ( (v91.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v91.pObjectInterface, &v91, v91.mValue.pStringManaged);
    v91.pObjectInterface = 0i64;
  }
  v91.Type = VT_Float;
  v91.mValue.IValue = v33;
  v34 = *(unsigned __int8 *)(v4 + v5 + 91);
  if ( (v92.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v92.pObjectInterface, &v92, v92.mValue.pStringManaged);
    v92.pObjectInterface = 0i64;
  }
  v92.Type = VT_Float;
  v92.mValue.IValue = v34;
  v35 = *(unsigned __int8 *)(v4 + v5 + 92) - 1;
  if ( (v93.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v93.pObjectInterface, &v93, v93.mValue.pStringManaged);
    v93.pObjectInterface = 0i64;
  }
  v93.Type = VT_Float;
  v93.mValue.IValue = v35;
  if ( (v94.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v94.pObjectInterface, &v94, v94.mValue.pStringManaged);
    v94.pObjectInterface = 0i64;
  }
  v94.Type = VT_Float;
  v94.mValue.IValue = no;
  ptime = *(_QWORD *)(v4 + v5 + 4);
  v36 = localtime64(&ptime);
  LODWORD(destructor) = v36->tm_mday;
  sprintf(
    extension::stringBuff,
    "%04d-%02d-%02dT%02d:%02d:%02d",
    (unsigned int)(v36->tm_year + 1900),
    (unsigned int)(v36->tm_mon + 1),
    destructor,
    v36->tm_hour,
    v36->tm_min,
    v36->tm_sec);
  sprintf(extension::stringBuff_2[0], "%.10s", extension::stringBuff);
  if ( (v95.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v95.pObjectInterface, &v95, v95.mValue.pStringManaged);
    v95.pObjectInterface = 0i64;
  }
  v95.Type = 6;
  v95.mValue.pString = extension::stringBuff_2[0];
  v37 = 6 * v63;
  ptime = *(_QWORD *)(*(_QWORD *)(v3 + 35384) + 48 * v63 + 8);
  v38 = localtime64(&ptime);
  LODWORD(v58) = v38->tm_sec;
  LODWORD(setType) = v38->tm_min;
  LODWORD(count) = v38->tm_hour;
  LODWORD(destructora) = v38->tm_mday;
  sprintf(
    extension::stringBuff,
    "%04d-%02d-%02dT%02d:%02d:%02d",
    (unsigned int)(v38->tm_year + 1900),
    (unsigned int)(v38->tm_mon + 1),
    destructora,
    count,
    setType,
    v58);
  sprintf(extension::stringBuff_2[1], "%.10s", extension::stringBuff);
  v39 = *(_QWORD *)(*(_QWORD *)(v3 + 35384) + 8 * v37 + 8);
  v40.NValue = (double)(int)v39;
  if ( v39 < 0 )
    v40.NValue = v40.NValue + 1.844674407370955e19;
  if ( (v96.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v96.pObjectInterface, &v96, v96.mValue.pStringManaged);
    v96.pObjectInterface = 0i64;
  }
  v96.Type = 5;
  v96.mValue = v40;
  if ( (v97.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v97.pObjectInterface, &v97, v97.mValue.pStringManaged);
    v97.pObjectInterface = 0i64;
  }
  v97.Type = 6;
  v97.mValue.pString = extension::stringBuff_2[1];
  v41 = SteamNameCache::getName(SteamNameCache::ms_instance, *(CSteamID *)(*(_QWORD *)(v3 + 35384) + 8 * v37));
  if ( (v98.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v98.pObjectInterface, &v98, v98.mValue.pStringManaged);
    v98.pObjectInterface = 0i64;
  }
  v98.Type = 6;
  v98.mValue.pString = (const char *)v41;
  v42 = 0;
  v43 = *(_QWORD *)(v3 + 35384);
  v44 = 0i64;
  v45 = (_QWORD *)(v3 + 2389320);
  while ( *(v45 - 143) != *(_QWORD *)(v43 + 8 * v37 + 8) || *v45 != *(_QWORD *)(v43 + 8 * v37) )
  {
    ++v44;
    v45 += 148;
    if ( v44 >= 100 )
      goto LABEL_75;
  }
  v42 = 1;
LABEL_75:
  if ( (v99.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v99.pObjectInterface, &v99, v99.mValue.pStringManaged);
    v99.pObjectInterface = 0i64;
  }
  v99.Type = VT_Int64;
  v99.mValue.BValue = v42;
  v46 = *(unsigned __int8 *)(v4 + v5 + 93);
  if ( (v100.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v100.pObjectInterface, &v100, v100.mValue.pStringManaged);
    v100.pObjectInterface = 0i64;
  }
  v100.Type = VT_Float;
  v100.mValue.IValue = v46;
  v47 = *(unsigned __int8 *)(v4 + v5 + 94);
  if ( (v101.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v101.pObjectInterface, &v101, v101.mValue.pStringManaged);
    v101.pObjectInterface = 0i64;
  }
  v101.Type = VT_Float;
  v101.mValue.IValue = v47;
  v48 = *(unsigned __int8 *)(v4 + v5 + 95);
  if ( (v102.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v102.pObjectInterface, &v102, v102.mValue.pStringManaged);
    v102.pObjectInterface = 0i64;
  }
  v102.Type = VT_Float;
  v102.mValue.IValue = v48;
  v49 = *(unsigned __int8 *)(v4 + v5 + 96);
  if ( (v103.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v103.pObjectInterface, &v103, v103.mValue.pStringManaged);
    v103.pObjectInterface = 0i64;
  }
  v103.Type = VT_Float;
  v103.mValue.IValue = v49;
  v50 = *(unsigned __int8 *)(v4 + v5 + 97);
  if ( (v104.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v104.pObjectInterface, &v104, v104.mValue.pStringManaged);
    v104.pObjectInterface = 0i64;
  }
  v104.Type = VT_Float;
  v104.mValue.IValue = v50;
  v51 = *(unsigned __int8 *)(v4 + v5 + 98);
  if ( (v105.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v105.pObjectInterface, &v105, v105.mValue.pStringManaged);
    v105.pObjectInterface = 0i64;
  }
  v105.Type = VT_Float;
  v105.mValue.IValue = v51;
  v52 = *(unsigned __int8 *)(v4 + v5 + 99);
  if ( (v106.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v106.pObjectInterface, &v106, v106.mValue.pStringManaged);
    v106.pObjectInterface = 0i64;
  }
  v106.Type = VT_Float;
  v106.mValue.IValue = v52;
  Scaleform::GFx::Movie::SetVariableArray(v65->m_movie.pObject, SA_Value, ppathToVar, 0, &ptr, 0x28u, SV_Sticky);
  `eh vector destructor iterator'(&ptr, 0x30ui64, 0x28ui64, (void (__fastcall *)(void *))Scaleform::GFx::Value::~Value);
  return 1;
}

char __fastcall extension::CnvLEADERBOARD_REPLAY_FORMAT_000(
        extension::GFXIMovieContext *ctx,
        int no,
        const char *symbol)
{
  __int64 v3; // r13
  __int64 v4; // rbx
  __int64 v5; // rdi
  CSteamID v6; // rsi
  CSteamID v7; // r15
  CSteamID v8; // r12
  char **Name; // r14
  char **v10; // rsi
  char **v11; // rsi
  int v12; // esi
  int v13; // esi
  int v14; // esi
  int v15; // esi
  int v16; // esi
  int v17; // esi
  int v18; // esi
  int v19; // esi
  int v20; // esi
  char **v21; // rsi
  char **v22; // rsi
  char **v23; // rsi
  int v24; // esi
  int v25; // esi
  int v26; // esi
  int v27; // esi
  int v28; // esi
  int v29; // esi
  int v30; // esi
  int v31; // esi
  int v32; // esi
  int v33; // esi
  int v34; // esi
  int v35; // esi
  tm *v36; // rax
  __int64 v37; // rsi
  tm *v38; // rax
  __int64 v39; // rcx
  Scaleform::GFx::Value::ValueUnion v40; // xmm6_8
  char **v41; // r14
  bool v42; // r14
  __int64 v43; // r8
  __int64 v44; // rdx
  _QWORD *v45; // rcx
  int v46; // ebx
  void (__fastcall *destructor)(void *); // [rsp+20h] [rbp-838h]
  void (__fastcall *destructora)(void *); // [rsp+20h] [rbp-838h]
  __int64 count; // [rsp+28h] [rbp-830h]
  __int64 setType; // [rsp+30h] [rbp-828h]
  __int64 v52; // [rsp+38h] [rbp-820h]
  __int64 ptime; // [rsp+48h] [rbp-810h] BYREF
  CSteamID id; // [rsp+50h] [rbp-808h]
  CSteamID v56; // [rsp+58h] [rbp-800h]
  __int64 v57; // [rsp+60h] [rbp-7F8h]
  char *ppathToVar; // [rsp+68h] [rbp-7F0h]
  extension::GFXIMovieContext *v59; // [rsp+70h] [rbp-7E8h]
  __int64 v60; // [rsp+78h] [rbp-7E0h]
  Scaleform::GFx::Value v61; // [rsp+80h] [rbp-7D8h] BYREF
  Scaleform::GFx::Value v62; // [rsp+B0h] [rbp-7A8h] BYREF
  Scaleform::GFx::Value v63; // [rsp+E0h] [rbp-778h] BYREF
  Scaleform::GFx::Value v64; // [rsp+110h] [rbp-748h] BYREF
  Scaleform::GFx::Value v65; // [rsp+140h] [rbp-718h] BYREF
  Scaleform::GFx::Value v66; // [rsp+170h] [rbp-6E8h] BYREF
  Scaleform::GFx::Value v67; // [rsp+1A0h] [rbp-6B8h] BYREF
  Scaleform::GFx::Value v68; // [rsp+1D0h] [rbp-688h] BYREF
  Scaleform::GFx::Value v69; // [rsp+200h] [rbp-658h] BYREF
  Scaleform::GFx::Value v70; // [rsp+230h] [rbp-628h] BYREF
  Scaleform::GFx::Value v71; // [rsp+260h] [rbp-5F8h] BYREF
  Scaleform::GFx::Value v72; // [rsp+290h] [rbp-5C8h] BYREF
  Scaleform::GFx::Value v73; // [rsp+2C0h] [rbp-598h] BYREF
  Scaleform::GFx::Value v74; // [rsp+2F0h] [rbp-568h] BYREF
  Scaleform::GFx::Value v75; // [rsp+320h] [rbp-538h] BYREF
  Scaleform::GFx::Value v76; // [rsp+350h] [rbp-508h] BYREF
  Scaleform::GFx::Value v77; // [rsp+380h] [rbp-4D8h] BYREF
  Scaleform::GFx::Value v78; // [rsp+3B0h] [rbp-4A8h] BYREF
  Scaleform::GFx::Value v79; // [rsp+3E0h] [rbp-478h] BYREF
  Scaleform::GFx::Value v80; // [rsp+410h] [rbp-448h] BYREF
  Scaleform::GFx::Value v81; // [rsp+440h] [rbp-418h] BYREF
  Scaleform::GFx::Value v82; // [rsp+470h] [rbp-3E8h] BYREF
  Scaleform::GFx::Value v83; // [rsp+4A0h] [rbp-3B8h] BYREF
  Scaleform::GFx::Value v84; // [rsp+4D0h] [rbp-388h] BYREF
  Scaleform::GFx::Value v85; // [rsp+500h] [rbp-358h] BYREF
  Scaleform::GFx::Value v86; // [rsp+530h] [rbp-328h] BYREF
  Scaleform::GFx::Value v87; // [rsp+560h] [rbp-2F8h] BYREF
  Scaleform::GFx::Value v88; // [rsp+590h] [rbp-2C8h] BYREF
  Scaleform::GFx::Value v89; // [rsp+5C0h] [rbp-298h] BYREF
  Scaleform::GFx::Value v90; // [rsp+5F0h] [rbp-268h] BYREF
  Scaleform::GFx::Value v91; // [rsp+620h] [rbp-238h] BYREF
  Scaleform::GFx::Value v92; // [rsp+650h] [rbp-208h] BYREF
  Scaleform::GFx::Value v93; // [rsp+680h] [rbp-1D8h] BYREF
  Scaleform::GFx::Value v94; // [rsp+6B0h] [rbp-1A8h] BYREF
  Scaleform::GFx::Value v95; // [rsp+6E0h] [rbp-178h] BYREF
  Scaleform::GFx::Value v96; // [rsp+710h] [rbp-148h] BYREF
  Scaleform::GFx::Value v97; // [rsp+740h] [rbp-118h] BYREF
  Scaleform::GFx::Value v98; // [rsp+770h] [rbp-E8h] BYREF
  Scaleform::GFx::Value v99; // [rsp+7A0h] [rbp-B8h] BYREF
  Scaleform::GFx::Value v100; // [rsp+7D0h] [rbp-88h] BYREF

  v60 = -2i64;
  ppathToVar = (char *)symbol;
  v59 = ctx;
  v3 = *(_QWORD *)&AppMain::pApp;
  v57 = no;
  v4 = 132i64 * no;
  v5 = *(_QWORD *)(*(_QWORD *)&AppMain::pApp + 35392i64);
  if ( no < 0 || !*(_QWORD *)(v4 + v5 + 4) )
    return 0;
  `eh vector constructor iterator'(
    &v61,
    0x30ui64,
    0x28ui64,
    (void (__fastcall *)(void *))Scaleform::GFx::Value::Value,
    (void (__fastcall *)(void *))Scaleform::GFx::Value::~Value);
  v6.m_steamid.m_comp = *(CSteamID::SteamID_t::SteamIDComponent_t *)(v4 + v5 + 23);
  v7.m_steamid.m_comp = *(CSteamID::SteamID_t::SteamIDComponent_t *)(v4 + v5 + 34);
  v8.m_steamid.m_comp = *(CSteamID::SteamID_t::SteamIDComponent_t *)(v4 + v5 + 45);
  id.m_steamid.m_comp = *(CSteamID::SteamID_t::SteamIDComponent_t *)(v4 + v5 + 56);
  v56.m_steamid.m_comp = *(CSteamID::SteamID_t::SteamIDComponent_t *)(v4 + v5 + 67);
  Name = SteamNameCache::getName(SteamNameCache::ms_instance, *(CSteamID *)(v4 + v5 + 12));
  if ( (v61.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v61.pObjectInterface, &v61, v61.mValue.pStringManaged);
    v61.pObjectInterface = 0i64;
  }
  v61.Type = 6;
  v61.mValue.pString = (const char *)Name;
  v10 = SteamNameCache::getName(SteamNameCache::ms_instance, v6);
  if ( (v62.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v62.pObjectInterface, &v62, v62.mValue.pStringManaged);
    v62.pObjectInterface = 0i64;
  }
  v62.Type = 6;
  v62.mValue.pString = (const char *)v10;
  v11 = SteamNameCache::getName(SteamNameCache::ms_instance, v7);
  if ( (v63.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v63.pObjectInterface, &v63, v63.mValue.pStringManaged);
    v63.pObjectInterface = 0i64;
  }
  v63.Type = 6;
  v63.mValue.pString = (const char *)v11;
  v12 = *(unsigned __int8 *)(v4 + v5 + 21);
  if ( (v64.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v64.pObjectInterface, &v64, v64.mValue.pStringManaged);
    v64.pObjectInterface = 0i64;
  }
  v64.Type = VT_Float;
  v64.mValue.IValue = v12;
  v13 = *(unsigned __int8 *)(v4 + v5 + 32);
  if ( (v65.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v65.pObjectInterface, &v65, v65.mValue.pStringManaged);
    v65.pObjectInterface = 0i64;
  }
  v65.Type = VT_Float;
  v65.mValue.IValue = v13;
  v14 = *(unsigned __int8 *)(v4 + v5 + 43);
  if ( (v66.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v66.pObjectInterface, &v66, v66.mValue.pStringManaged);
    v66.pObjectInterface = 0i64;
  }
  v66.Type = VT_Float;
  v66.mValue.IValue = v14;
  v15 = *(unsigned __int8 *)(v4 + v5 + 22);
  if ( (v67.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v67.pObjectInterface, &v67, v67.mValue.pStringManaged);
    v67.pObjectInterface = 0i64;
  }
  v67.Type = VT_Float;
  v67.mValue.IValue = v15;
  v16 = *(unsigned __int8 *)(v4 + v5 + 33);
  if ( (v68.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v68.pObjectInterface, &v68, v68.mValue.pStringManaged);
    v68.pObjectInterface = 0i64;
  }
  v68.Type = VT_Float;
  v68.mValue.IValue = v16;
  v17 = *(unsigned __int8 *)(v4 + v5 + 44);
  if ( (v69.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v69.pObjectInterface, &v69, v69.mValue.pStringManaged);
    v69.pObjectInterface = 0i64;
  }
  v69.Type = VT_Float;
  v69.mValue.IValue = v17;
  v18 = *(unsigned __int8 *)(v4 + v5 + 78);
  if ( (v70.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v70.pObjectInterface, &v70, v70.mValue.pStringManaged);
    v70.pObjectInterface = 0i64;
  }
  v70.Type = VT_Float;
  v70.mValue.IValue = v18;
  v19 = *(unsigned __int8 *)(v4 + v5 + 79);
  if ( (v71.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v71.pObjectInterface, &v71, v71.mValue.pStringManaged);
    v71.pObjectInterface = 0i64;
  }
  v71.Type = VT_Float;
  v71.mValue.IValue = v19;
  v20 = *(unsigned __int8 *)(v4 + v5 + 80);
  if ( (v72.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v72.pObjectInterface, &v72, v72.mValue.pStringManaged);
    v72.pObjectInterface = 0i64;
  }
  v72.Type = VT_Float;
  v72.mValue.IValue = v20;
  v21 = SteamNameCache::getName(SteamNameCache::ms_instance, v8);
  if ( (v73.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v73.pObjectInterface, &v73, v73.mValue.pStringManaged);
    v73.pObjectInterface = 0i64;
  }
  v73.Type = 6;
  v73.mValue.pString = (const char *)v21;
  v22 = SteamNameCache::getName(SteamNameCache::ms_instance, id);
  if ( (v74.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v74.pObjectInterface, &v74, v74.mValue.pStringManaged);
    v74.pObjectInterface = 0i64;
  }
  v74.Type = 6;
  v74.mValue.pString = (const char *)v22;
  v23 = SteamNameCache::getName(SteamNameCache::ms_instance, v56);
  if ( (v75.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v75.pObjectInterface, &v75, v75.mValue.pStringManaged);
    v75.pObjectInterface = 0i64;
  }
  v75.Type = 6;
  v75.mValue.pString = (const char *)v23;
  v24 = *(unsigned __int8 *)(v4 + v5 + 54);
  if ( (v76.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v76.pObjectInterface, &v76, v76.mValue.pStringManaged);
    v76.pObjectInterface = 0i64;
  }
  v76.Type = VT_Float;
  v76.mValue.IValue = v24;
  v25 = *(unsigned __int8 *)(v4 + v5 + 65);
  if ( (v77.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v77.pObjectInterface, &v77, v77.mValue.pStringManaged);
    v77.pObjectInterface = 0i64;
  }
  v77.Type = VT_Float;
  v77.mValue.IValue = v25;
  v26 = *(unsigned __int8 *)(v4 + v5 + 76);
  if ( (v78.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v78.pObjectInterface, &v78, v78.mValue.pStringManaged);
    v78.pObjectInterface = 0i64;
  }
  v78.Type = VT_Float;
  v78.mValue.IValue = v26;
  v27 = *(unsigned __int8 *)(v4 + v5 + 55);
  if ( (v79.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v79.pObjectInterface, &v79, v79.mValue.pStringManaged);
    v79.pObjectInterface = 0i64;
  }
  v79.Type = VT_Float;
  v79.mValue.IValue = v27;
  v28 = *(unsigned __int8 *)(v4 + v5 + 66);
  if ( (v80.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v80.pObjectInterface, &v80, v80.mValue.pStringManaged);
    v80.pObjectInterface = 0i64;
  }
  v80.Type = VT_Float;
  v80.mValue.IValue = v28;
  v29 = *(unsigned __int8 *)(v4 + v5 + 77);
  if ( (v81.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v81.pObjectInterface, &v81, v81.mValue.pStringManaged);
    v81.pObjectInterface = 0i64;
  }
  v81.Type = VT_Float;
  v81.mValue.IValue = v29;
  v30 = *(unsigned __int8 *)(v4 + v5 + 81);
  if ( (v82.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v82.pObjectInterface, &v82, v82.mValue.pStringManaged);
    v82.pObjectInterface = 0i64;
  }
  v82.Type = VT_Float;
  v82.mValue.IValue = v30;
  v31 = *(unsigned __int8 *)(v4 + v5 + 82);
  if ( (v83.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v83.pObjectInterface, &v83, v83.mValue.pStringManaged);
    v83.pObjectInterface = 0i64;
  }
  v83.Type = VT_Float;
  v83.mValue.IValue = v31;
  v32 = *(unsigned __int8 *)(v4 + v5 + 83);
  if ( (v84.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v84.pObjectInterface, &v84, v84.mValue.pStringManaged);
    v84.pObjectInterface = 0i64;
  }
  v84.Type = VT_Float;
  v84.mValue.IValue = v32;
  v33 = *(unsigned __int8 *)(v4 + v5 + 84);
  if ( (v85.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v85.pObjectInterface, &v85, v85.mValue.pStringManaged);
    v85.pObjectInterface = 0i64;
  }
  v85.Type = VT_Float;
  v85.mValue.IValue = v33;
  v34 = *(unsigned __int8 *)(v4 + v5 + 85);
  if ( (v86.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v86.pObjectInterface, &v86, v86.mValue.pStringManaged);
    v86.pObjectInterface = 0i64;
  }
  v86.Type = VT_Float;
  v86.mValue.IValue = v34;
  v35 = *(unsigned __int8 *)(v4 + v5 + 86) - 1;
  if ( (v87.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v87.pObjectInterface, &v87, v87.mValue.pStringManaged);
    v87.pObjectInterface = 0i64;
  }
  v87.Type = VT_Float;
  v87.mValue.IValue = v35;
  if ( (v88.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v88.pObjectInterface, &v88, v88.mValue.pStringManaged);
    v88.pObjectInterface = 0i64;
  }
  v88.Type = VT_Float;
  v88.mValue.IValue = no;
  ptime = *(_QWORD *)(v4 + v5 + 4);
  v36 = localtime64(&ptime);
  LODWORD(destructor) = v36->tm_mday;
  sprintf(
    extension::stringBuff,
    "%04d-%02d-%02dT%02d:%02d:%02d",
    (unsigned int)(v36->tm_year + 1900),
    (unsigned int)(v36->tm_mon + 1),
    destructor,
    v36->tm_hour,
    v36->tm_min,
    v36->tm_sec);
  sprintf(extension::stringBuff_2[0], "%.10s", extension::stringBuff);
  if ( (v89.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v89.pObjectInterface, &v89, v89.mValue.pStringManaged);
    v89.pObjectInterface = 0i64;
  }
  v89.Type = 6;
  v89.mValue.pString = extension::stringBuff_2[0];
  v37 = 6 * v57;
  ptime = *(_QWORD *)(*(_QWORD *)(v3 + 35384) + 48 * v57 + 8);
  v38 = localtime64(&ptime);
  LODWORD(v52) = v38->tm_sec;
  LODWORD(setType) = v38->tm_min;
  LODWORD(count) = v38->tm_hour;
  LODWORD(destructora) = v38->tm_mday;
  sprintf(
    extension::stringBuff,
    "%04d-%02d-%02dT%02d:%02d:%02d",
    (unsigned int)(v38->tm_year + 1900),
    (unsigned int)(v38->tm_mon + 1),
    destructora,
    count,
    setType,
    v52);
  sprintf(extension::stringBuff_2[1], "%.10s", extension::stringBuff);
  v39 = *(_QWORD *)(*(_QWORD *)(v3 + 35384) + 8 * v37 + 8);
  v40.NValue = (double)(int)v39;
  if ( v39 < 0 )
    v40.NValue = v40.NValue + 1.844674407370955e19;
  if ( (v90.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v90.pObjectInterface, &v90, v90.mValue.pStringManaged);
    v90.pObjectInterface = 0i64;
  }
  v90.Type = 5;
  v90.mValue = v40;
  if ( (v91.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v91.pObjectInterface, &v91, v91.mValue.pStringManaged);
    v91.pObjectInterface = 0i64;
  }
  v91.Type = 6;
  v91.mValue.pString = extension::stringBuff_2[1];
  v41 = SteamNameCache::getName(SteamNameCache::ms_instance, *(CSteamID *)(*(_QWORD *)(v3 + 35384) + 8 * v37));
  if ( (v92.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v92.pObjectInterface, &v92, v92.mValue.pStringManaged);
    v92.pObjectInterface = 0i64;
  }
  v92.Type = 6;
  v92.mValue.pString = (const char *)v41;
  v42 = 0;
  v43 = *(_QWORD *)(v3 + 35384);
  v44 = 0i64;
  v45 = (_QWORD *)(v3 + 2389320);
  while ( *(v45 - 143) != *(_QWORD *)(v43 + 8 * v37 + 8) || *v45 == *(_QWORD *)(v43 + 8 * v37) )
  {
    ++v44;
    v45 += 148;
    if ( v44 >= 100 )
      goto LABEL_75;
  }
  v42 = 1;
LABEL_75:
  if ( (v93.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v93.pObjectInterface, &v93, v93.mValue.pStringManaged);
    v93.pObjectInterface = 0i64;
  }
  v93.Type = VT_Int64;
  v93.mValue.BValue = v42;
  v46 = *(unsigned __int8 *)(v4 + v5 + 87);
  if ( (v94.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v94.pObjectInterface, &v94, v94.mValue.pStringManaged);
    v94.pObjectInterface = 0i64;
  }
  v94.Type = VT_Float;
  v94.mValue.IValue = v46;
  if ( (v95.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v95.pObjectInterface, &v95, v95.mValue.pStringManaged);
    v95.pObjectInterface = 0i64;
  }
  v95.Type = VT_Float;
  v95.mValue.IValue = 0;
  if ( (v96.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v96.pObjectInterface, &v96, v96.mValue.pStringManaged);
    v96.pObjectInterface = 0i64;
  }
  v96.Type = VT_Float;
  v96.mValue.IValue = 0;
  if ( (v97.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v97.pObjectInterface, &v97, v97.mValue.pStringManaged);
    v97.pObjectInterface = 0i64;
  }
  v97.Type = VT_Float;
  v97.mValue.IValue = 0;
  if ( (v98.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v98.pObjectInterface, &v98, v98.mValue.pStringManaged);
    v98.pObjectInterface = 0i64;
  }
  v98.Type = VT_Float;
  v98.mValue.IValue = 0;
  if ( (v99.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v99.pObjectInterface, &v99, v99.mValue.pStringManaged);
    v99.pObjectInterface = 0i64;
  }
  v99.Type = VT_Float;
  v99.mValue.IValue = 0;
  if ( (v100.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v100.pObjectInterface, &v100, v100.mValue.pStringManaged);
    v100.pObjectInterface = 0i64;
  }
  v100.Type = VT_Float;
  v100.mValue.IValue = 0;
  Scaleform::GFx::Movie::SetVariableArray(v59->m_movie.pObject, SA_Value, ppathToVar, 0, &v61, 0x28u, SV_Sticky);
  `eh vector destructor iterator'(&v61, 0x30ui64, 0x28ui64, (void (__fastcall *)(void *))Scaleform::GFx::Value::~Value);
  return 1;
}

char __fastcall extension::CnvLEADERBOARD_REPLAY_FORMAT_001(
        extension::GFXIMovieContext *ctx,
        int no,
        const char *symbol)
{
  __int64 v4; // r13
  __int64 v5; // rbx
  __int64 v6; // rdi
  CSteamID v7; // rsi
  CSteamID v8; // r15
  CSteamID v9; // r12
  char **Name; // r14
  char **v11; // rsi
  char **v12; // rsi
  int v13; // esi
  int v14; // esi
  int v15; // esi
  int v16; // esi
  int v17; // esi
  int v18; // esi
  int v19; // esi
  int v20; // esi
  int v21; // esi
  char **v22; // rsi
  char **v23; // rsi
  char **v24; // rsi
  int v25; // esi
  int v26; // esi
  int v27; // esi
  int v28; // esi
  int v29; // esi
  int v30; // esi
  int v31; // esi
  int v32; // esi
  int v33; // esi
  int v34; // esi
  int v35; // esi
  int v36; // esi
  tm *v37; // rax
  tm *v38; // rax
  __int64 v39; // rcx
  Scaleform::GFx::Value::ValueUnion v40; // xmm6_8
  char **v41; // r14
  bool v42; // r14
  __int64 v43; // r8
  __int64 v44; // rdx
  _QWORD *v45; // rcx
  int v46; // esi
  int v47; // esi
  int v48; // esi
  int v49; // esi
  int v50; // esi
  int v51; // esi
  int v52; // ebx
  void (__fastcall *destructor)(void *); // [rsp+20h] [rbp-838h]
  void (__fastcall *destructora)(void *); // [rsp+20h] [rbp-838h]
  __int64 count; // [rsp+28h] [rbp-830h]
  __int64 setType; // [rsp+30h] [rbp-828h]
  __int64 v58; // [rsp+38h] [rbp-820h]
  int v59; // [rsp+40h] [rbp-818h]
  __int64 ptime; // [rsp+48h] [rbp-810h] BYREF
  CSteamID id; // [rsp+50h] [rbp-808h]
  CSteamID v62; // [rsp+58h] [rbp-800h]
  char *ppathToVar; // [rsp+60h] [rbp-7F8h]
  extension::GFXIMovieContext *v64; // [rsp+68h] [rbp-7F0h]
  __int64 v65; // [rsp+70h] [rbp-7E8h]
  Scaleform::GFx::Value v66; // [rsp+80h] [rbp-7D8h] BYREF
  Scaleform::GFx::Value v67; // [rsp+B0h] [rbp-7A8h] BYREF
  Scaleform::GFx::Value v68; // [rsp+E0h] [rbp-778h] BYREF
  Scaleform::GFx::Value v69; // [rsp+110h] [rbp-748h] BYREF
  Scaleform::GFx::Value v70; // [rsp+140h] [rbp-718h] BYREF
  Scaleform::GFx::Value v71; // [rsp+170h] [rbp-6E8h] BYREF
  Scaleform::GFx::Value v72; // [rsp+1A0h] [rbp-6B8h] BYREF
  Scaleform::GFx::Value v73; // [rsp+1D0h] [rbp-688h] BYREF
  Scaleform::GFx::Value v74; // [rsp+200h] [rbp-658h] BYREF
  Scaleform::GFx::Value v75; // [rsp+230h] [rbp-628h] BYREF
  Scaleform::GFx::Value v76; // [rsp+260h] [rbp-5F8h] BYREF
  Scaleform::GFx::Value v77; // [rsp+290h] [rbp-5C8h] BYREF
  Scaleform::GFx::Value v78; // [rsp+2C0h] [rbp-598h] BYREF
  Scaleform::GFx::Value v79; // [rsp+2F0h] [rbp-568h] BYREF
  Scaleform::GFx::Value v80; // [rsp+320h] [rbp-538h] BYREF
  Scaleform::GFx::Value v81; // [rsp+350h] [rbp-508h] BYREF
  Scaleform::GFx::Value v82; // [rsp+380h] [rbp-4D8h] BYREF
  Scaleform::GFx::Value v83; // [rsp+3B0h] [rbp-4A8h] BYREF
  Scaleform::GFx::Value v84; // [rsp+3E0h] [rbp-478h] BYREF
  Scaleform::GFx::Value v85; // [rsp+410h] [rbp-448h] BYREF
  Scaleform::GFx::Value v86; // [rsp+440h] [rbp-418h] BYREF
  Scaleform::GFx::Value v87; // [rsp+470h] [rbp-3E8h] BYREF
  Scaleform::GFx::Value v88; // [rsp+4A0h] [rbp-3B8h] BYREF
  Scaleform::GFx::Value v89; // [rsp+4D0h] [rbp-388h] BYREF
  Scaleform::GFx::Value v90; // [rsp+500h] [rbp-358h] BYREF
  Scaleform::GFx::Value v91; // [rsp+530h] [rbp-328h] BYREF
  Scaleform::GFx::Value v92; // [rsp+560h] [rbp-2F8h] BYREF
  Scaleform::GFx::Value v93; // [rsp+590h] [rbp-2C8h] BYREF
  Scaleform::GFx::Value v94; // [rsp+5C0h] [rbp-298h] BYREF
  Scaleform::GFx::Value v95; // [rsp+5F0h] [rbp-268h] BYREF
  Scaleform::GFx::Value v96; // [rsp+620h] [rbp-238h] BYREF
  Scaleform::GFx::Value v97; // [rsp+650h] [rbp-208h] BYREF
  Scaleform::GFx::Value v98; // [rsp+680h] [rbp-1D8h] BYREF
  Scaleform::GFx::Value v99; // [rsp+6B0h] [rbp-1A8h] BYREF
  Scaleform::GFx::Value v100; // [rsp+6E0h] [rbp-178h] BYREF
  Scaleform::GFx::Value v101; // [rsp+710h] [rbp-148h] BYREF
  Scaleform::GFx::Value v102; // [rsp+740h] [rbp-118h] BYREF
  Scaleform::GFx::Value v103; // [rsp+770h] [rbp-E8h] BYREF
  Scaleform::GFx::Value v104; // [rsp+7A0h] [rbp-B8h] BYREF
  Scaleform::GFx::Value v105; // [rsp+7D0h] [rbp-88h] BYREF

  v65 = -2i64;
  ppathToVar = (char *)symbol;
  v64 = ctx;
  v4 = *(_QWORD *)&AppMain::pApp;
  v5 = 132i64 * no;
  v6 = *(_QWORD *)(*(_QWORD *)&AppMain::pApp + 35392i64);
  if ( no < 0 || !*(_QWORD *)(v5 + v6 + 4) )
    return 0;
  `eh vector constructor iterator'(
    &v66,
    0x30ui64,
    0x28ui64,
    (void (__fastcall *)(void *))Scaleform::GFx::Value::Value,
    (void (__fastcall *)(void *))Scaleform::GFx::Value::~Value);
  v59 = (no - 1) % 100;
  v7.m_steamid.m_comp = *(CSteamID::SteamID_t::SteamIDComponent_t *)(v5 + v6 + 23);
  v8.m_steamid.m_comp = *(CSteamID::SteamID_t::SteamIDComponent_t *)(v5 + v6 + 34);
  v9.m_steamid.m_comp = *(CSteamID::SteamID_t::SteamIDComponent_t *)(v5 + v6 + 45);
  id.m_steamid.m_comp = *(CSteamID::SteamID_t::SteamIDComponent_t *)(v5 + v6 + 56);
  v62.m_steamid.m_comp = *(CSteamID::SteamID_t::SteamIDComponent_t *)(v5 + v6 + 67);
  Name = SteamNameCache::getName(SteamNameCache::ms_instance, *(CSteamID *)(v5 + v6 + 12));
  if ( (v66.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v66.pObjectInterface, &v66, v66.mValue.pStringManaged);
    v66.pObjectInterface = 0i64;
  }
  v66.Type = 6;
  v66.mValue.pString = (const char *)Name;
  v11 = SteamNameCache::getName(SteamNameCache::ms_instance, v7);
  if ( (v67.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v67.pObjectInterface, &v67, v67.mValue.pStringManaged);
    v67.pObjectInterface = 0i64;
  }
  v67.Type = 6;
  v67.mValue.pString = (const char *)v11;
  v12 = SteamNameCache::getName(SteamNameCache::ms_instance, v8);
  if ( (v68.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v68.pObjectInterface, &v68, v68.mValue.pStringManaged);
    v68.pObjectInterface = 0i64;
  }
  v68.Type = 6;
  v68.mValue.pString = (const char *)v12;
  v13 = *(unsigned __int8 *)(v5 + v6 + 21);
  if ( (v69.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v69.pObjectInterface, &v69, v69.mValue.pStringManaged);
    v69.pObjectInterface = 0i64;
  }
  v69.Type = VT_Float;
  v69.mValue.IValue = v13;
  v14 = *(unsigned __int8 *)(v5 + v6 + 32);
  if ( (v70.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v70.pObjectInterface, &v70, v70.mValue.pStringManaged);
    v70.pObjectInterface = 0i64;
  }
  v70.Type = VT_Float;
  v70.mValue.IValue = v14;
  v15 = *(unsigned __int8 *)(v5 + v6 + 43);
  if ( (v71.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v71.pObjectInterface, &v71, v71.mValue.pStringManaged);
    v71.pObjectInterface = 0i64;
  }
  v71.Type = VT_Float;
  v71.mValue.IValue = v15;
  v16 = *(unsigned __int8 *)(v5 + v6 + 22);
  if ( (v72.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v72.pObjectInterface, &v72, v72.mValue.pStringManaged);
    v72.pObjectInterface = 0i64;
  }
  v72.Type = VT_Float;
  v72.mValue.IValue = v16;
  v17 = *(unsigned __int8 *)(v5 + v6 + 33);
  if ( (v73.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v73.pObjectInterface, &v73, v73.mValue.pStringManaged);
    v73.pObjectInterface = 0i64;
  }
  v73.Type = VT_Float;
  v73.mValue.IValue = v17;
  v18 = *(unsigned __int8 *)(v5 + v6 + 44);
  if ( (v74.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v74.pObjectInterface, &v74, v74.mValue.pStringManaged);
    v74.pObjectInterface = 0i64;
  }
  v74.Type = VT_Float;
  v74.mValue.IValue = v18;
  v19 = *(unsigned __int8 *)(v5 + v6 + 78);
  if ( (v75.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v75.pObjectInterface, &v75, v75.mValue.pStringManaged);
    v75.pObjectInterface = 0i64;
  }
  v75.Type = VT_Float;
  v75.mValue.IValue = v19;
  v20 = *(unsigned __int8 *)(v5 + v6 + 79);
  if ( (v76.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v76.pObjectInterface, &v76, v76.mValue.pStringManaged);
    v76.pObjectInterface = 0i64;
  }
  v76.Type = VT_Float;
  v76.mValue.IValue = v20;
  v21 = *(unsigned __int8 *)(v5 + v6 + 80);
  if ( (v77.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v77.pObjectInterface, &v77, v77.mValue.pStringManaged);
    v77.pObjectInterface = 0i64;
  }
  v77.Type = VT_Float;
  v77.mValue.IValue = v21;
  v22 = SteamNameCache::getName(SteamNameCache::ms_instance, v9);
  if ( (v78.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v78.pObjectInterface, &v78, v78.mValue.pStringManaged);
    v78.pObjectInterface = 0i64;
  }
  v78.Type = 6;
  v78.mValue.pString = (const char *)v22;
  v23 = SteamNameCache::getName(SteamNameCache::ms_instance, id);
  if ( (v79.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v79.pObjectInterface, &v79, v79.mValue.pStringManaged);
    v79.pObjectInterface = 0i64;
  }
  v79.Type = 6;
  v79.mValue.pString = (const char *)v23;
  v24 = SteamNameCache::getName(SteamNameCache::ms_instance, v62);
  if ( (v80.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v80.pObjectInterface, &v80, v80.mValue.pStringManaged);
    v80.pObjectInterface = 0i64;
  }
  v80.Type = 6;
  v80.mValue.pString = (const char *)v24;
  v25 = *(unsigned __int8 *)(v5 + v6 + 54);
  if ( (v81.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v81.pObjectInterface, &v81, v81.mValue.pStringManaged);
    v81.pObjectInterface = 0i64;
  }
  v81.Type = VT_Float;
  v81.mValue.IValue = v25;
  v26 = *(unsigned __int8 *)(v5 + v6 + 65);
  if ( (v82.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v82.pObjectInterface, &v82, v82.mValue.pStringManaged);
    v82.pObjectInterface = 0i64;
  }
  v82.Type = VT_Float;
  v82.mValue.IValue = v26;
  v27 = *(unsigned __int8 *)(v5 + v6 + 76);
  if ( (v83.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v83.pObjectInterface, &v83, v83.mValue.pStringManaged);
    v83.pObjectInterface = 0i64;
  }
  v83.Type = VT_Float;
  v83.mValue.IValue = v27;
  v28 = *(unsigned __int8 *)(v5 + v6 + 55);
  if ( (v84.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v84.pObjectInterface, &v84, v84.mValue.pStringManaged);
    v84.pObjectInterface = 0i64;
  }
  v84.Type = VT_Float;
  v84.mValue.IValue = v28;
  v29 = *(unsigned __int8 *)(v5 + v6 + 66);
  if ( (v85.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v85.pObjectInterface, &v85, v85.mValue.pStringManaged);
    v85.pObjectInterface = 0i64;
  }
  v85.Type = VT_Float;
  v85.mValue.IValue = v29;
  v30 = *(unsigned __int8 *)(v5 + v6 + 77);
  if ( (v86.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v86.pObjectInterface, &v86, v86.mValue.pStringManaged);
    v86.pObjectInterface = 0i64;
  }
  v86.Type = VT_Float;
  v86.mValue.IValue = v30;
  v31 = *(unsigned __int8 *)(v5 + v6 + 81);
  if ( (v87.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v87.pObjectInterface, &v87, v87.mValue.pStringManaged);
    v87.pObjectInterface = 0i64;
  }
  v87.Type = VT_Float;
  v87.mValue.IValue = v31;
  v32 = *(unsigned __int8 *)(v5 + v6 + 82);
  if ( (v88.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v88.pObjectInterface, &v88, v88.mValue.pStringManaged);
    v88.pObjectInterface = 0i64;
  }
  v88.Type = VT_Float;
  v88.mValue.IValue = v32;
  v33 = *(unsigned __int8 *)(v5 + v6 + 83);
  if ( (v89.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v89.pObjectInterface, &v89, v89.mValue.pStringManaged);
    v89.pObjectInterface = 0i64;
  }
  v89.Type = VT_Float;
  v89.mValue.IValue = v33;
  v34 = *(unsigned __int8 *)(v5 + v6 + 84);
  if ( (v90.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v90.pObjectInterface, &v90, v90.mValue.pStringManaged);
    v90.pObjectInterface = 0i64;
  }
  v90.Type = VT_Float;
  v90.mValue.IValue = v34;
  v35 = *(unsigned __int8 *)(v5 + v6 + 85);
  if ( (v91.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v91.pObjectInterface, &v91, v91.mValue.pStringManaged);
    v91.pObjectInterface = 0i64;
  }
  v91.Type = VT_Float;
  v91.mValue.IValue = v35;
  v36 = *(unsigned __int8 *)(v5 + v6 + 86) - 1;
  if ( (v92.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v92.pObjectInterface, &v92, v92.mValue.pStringManaged);
    v92.pObjectInterface = 0i64;
  }
  v92.Type = VT_Float;
  v92.mValue.IValue = v36;
  if ( (v93.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v93.pObjectInterface, &v93, v93.mValue.pStringManaged);
    v93.pObjectInterface = 0i64;
  }
  v93.Type = VT_Float;
  v93.mValue.IValue = v59;
  ptime = *(_QWORD *)(v5 + v6 + 4);
  v37 = localtime64(&ptime);
  LODWORD(destructor) = v37->tm_mday;
  sprintf(
    extension::stringBuff,
    "%04d-%02d-%02dT%02d:%02d:%02d",
    (unsigned int)(v37->tm_year + 1900),
    (unsigned int)(v37->tm_mon + 1),
    destructor,
    v37->tm_hour,
    v37->tm_min,
    v37->tm_sec);
  sprintf(extension::stringBuff_2[0], "%.10s", extension::stringBuff);
  if ( (v94.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v94.pObjectInterface, &v94, v94.mValue.pStringManaged);
    v94.pObjectInterface = 0i64;
  }
  v94.Type = 6;
  v94.mValue.pString = extension::stringBuff_2[0];
  ptime = *(_QWORD *)(*(_QWORD *)(v4 + 35384) + 48i64 * v59 + 8);
  v38 = localtime64(&ptime);
  LODWORD(v58) = v38->tm_sec;
  LODWORD(setType) = v38->tm_min;
  LODWORD(count) = v38->tm_hour;
  LODWORD(destructora) = v38->tm_mday;
  sprintf(
    extension::stringBuff,
    "%04d-%02d-%02dT%02d:%02d:%02d",
    (unsigned int)(v38->tm_year + 1900),
    (unsigned int)(v38->tm_mon + 1),
    destructora,
    count,
    setType,
    v58);
  sprintf(extension::stringBuff_2[1], "%.10s", extension::stringBuff);
  v39 = *(_QWORD *)(*(_QWORD *)(v4 + 35384) + 48i64 * v59 + 8);
  v40.NValue = (double)(int)v39;
  if ( v39 < 0 )
    v40.NValue = v40.NValue + 1.844674407370955e19;
  if ( (v95.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v95.pObjectInterface, &v95, v95.mValue.pStringManaged);
    v95.pObjectInterface = 0i64;
  }
  v95.Type = 5;
  v95.mValue = v40;
  if ( (v96.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v96.pObjectInterface, &v96, v96.mValue.pStringManaged);
    v96.pObjectInterface = 0i64;
  }
  v96.Type = 6;
  v96.mValue.pString = extension::stringBuff_2[1];
  v41 = SteamNameCache::getName(SteamNameCache::ms_instance, *(CSteamID *)(*(_QWORD *)(v4 + 35384) + 48i64 * v59));
  if ( (v97.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v97.pObjectInterface, &v97, v97.mValue.pStringManaged);
    v97.pObjectInterface = 0i64;
  }
  v97.Type = 6;
  v97.mValue.pString = (const char *)v41;
  v42 = 0;
  v43 = *(_QWORD *)(v4 + 35384);
  v44 = 0i64;
  v45 = (_QWORD *)(v4 + 2389320);
  while ( *(v45 - 143) != *(_QWORD *)(v43 + 48i64 * v59 + 8) || *v45 != *(_QWORD *)(v43 + 48i64 * v59) )
  {
    ++v44;
    v45 += 148;
    if ( v44 >= 100 )
      goto LABEL_75;
  }
  v42 = 1;
LABEL_75:
  if ( (v98.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v98.pObjectInterface, &v98, v98.mValue.pStringManaged);
    v98.pObjectInterface = 0i64;
  }
  v98.Type = VT_Int64;
  v98.mValue.BValue = v42;
  v46 = *(unsigned __int8 *)(v5 + v6 + 87);
  if ( (v99.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v99.pObjectInterface, &v99, v99.mValue.pStringManaged);
    v99.pObjectInterface = 0i64;
  }
  v99.Type = VT_Float;
  v99.mValue.IValue = v46;
  v47 = *(unsigned __int8 *)(v5 + v6 + 88);
  if ( (v100.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v100.pObjectInterface, &v100, v100.mValue.pStringManaged);
    v100.pObjectInterface = 0i64;
  }
  v100.Type = VT_Float;
  v100.mValue.IValue = v47;
  v48 = *(unsigned __int8 *)(v5 + v6 + 89);
  if ( (v101.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v101.pObjectInterface, &v101, v101.mValue.pStringManaged);
    v101.pObjectInterface = 0i64;
  }
  v101.Type = VT_Float;
  v101.mValue.IValue = v48;
  v49 = *(unsigned __int8 *)(v5 + v6 + 90);
  if ( (v102.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v102.pObjectInterface, &v102, v102.mValue.pStringManaged);
    v102.pObjectInterface = 0i64;
  }
  v102.Type = VT_Float;
  v102.mValue.IValue = v49;
  v50 = *(unsigned __int8 *)(v5 + v6 + 91);
  if ( (v103.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v103.pObjectInterface, &v103, v103.mValue.pStringManaged);
    v103.pObjectInterface = 0i64;
  }
  v103.Type = VT_Float;
  v103.mValue.IValue = v50;
  v51 = *(unsigned __int8 *)(v5 + v6 + 92);
  if ( (v104.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v104.pObjectInterface, &v104, v104.mValue.pStringManaged);
    v104.pObjectInterface = 0i64;
  }
  v104.Type = VT_Float;
  v104.mValue.IValue = v51;
  v52 = *(unsigned __int8 *)(v5 + v6 + 93);
  if ( (v105.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v105.pObjectInterface, &v105, v105.mValue.pStringManaged);
    v105.pObjectInterface = 0i64;
  }
  v105.Type = VT_Float;
  v105.mValue.IValue = v52;
  Scaleform::GFx::Movie::SetVariableArray(v64->m_movie.pObject, SA_Value, ppathToVar, 0, &v66, 0x28u, SV_Sticky);
  `eh vector destructor iterator'(&v66, 0x30ui64, 0x28ui64, (void (__fastcall *)(void *))Scaleform::GFx::Value::~Value);
  return 1;
}

Scaleform::GFx::Value *__fastcall extension::GFn_AcceptRankMatchPlayer(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  SEND_MESSAGE *v5; // rdx
  unsigned int v6; // eax
  Scaleform::GFx::Value *v7; // rax

  g_NetworkManager.m_RankmatchAccept[0] = RANKMATCH_ACCEPT_ACCEPT;
  EnterCriticalSection((LPCRITICAL_SECTION)&g_NetworkManager.m_Mutex);
  v5 = pSendMsgSub[10];
  v6 = pSendMsgSub[10]->msgBattleCommand.time & 0xFFFFFF01;
  pSendMsgSub[10]->msgType = 24;
  v5->msgBattleCommand.time = v6 | 1;
  NetManager::SendMessageW(&g_NetworkManager, v5, 0i64, 1, 0);
  LeaveCriticalSection((LPCRITICAL_SECTION)&g_NetworkManager.m_Mutex);
  v7 = result;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_Float;
  result->mValue.IValue = 0;
  return v7;
}

Scaleform::GFx::Value *__fastcall extension::GFn_AllDeleteNotification(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  GfxManager *v5; // rax
  extension::gfxi_detail::MovieProxy *m_ptr; // rdi
  GfxManager *v8; // [rsp+50h] [rbp+8h]

  v5 = GfxManager::instance;
  if ( !GfxManager::instance )
  {
    v8 = (GfxManager *)operator new(0x108ui64);
    GfxManager::GfxManager(v8);
    GfxManager::instance = v5;
  }
  m_ptr = v5->m_GFXMovieNotification.m_movieProxy.m_ptr;
  if ( m_ptr && Scaleform::GFx::Movie::IsAvailable(m_ptr->m_movie.pObject, "_root.AllDeleteNotification") )
    Scaleform::GFx::Movie::Invoke(m_ptr->m_movie.pObject, "_root.AllDeleteNotification", 0i64, 0i64, 0);
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_Float;
  result->mValue.IValue = 0;
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_ApplicationQuit(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  AgProgram *Instance; // rax
  Scaleform::GFx::Value *v6; // rax

  Instance = AgProgram::getInstance();
  AgProgram::onShutdown(Instance);
  v6 = result;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_None;
  return v6;
}

Scaleform::GFx::Value *__fastcall extension::GFn_BGMVolumeModulation(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  Scaleform::GFx::Value *v5; // rax

  anonymous_namespace_::SoundVolumeModulation::SetVolumeModulation(
    GROUP_BGM,
    argv->mValue.NValue,
    argv[1].mValue.NValue);
  v5 = result;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_Float;
  result->mValue.IValue = 0;
  return v5;
}

Scaleform::GFx::Value *__fastcall extension::GFn_BattleCaharaNo(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  int v6; // edi
  BattleSystem::BattleController *v7; // rax
  int battleCharaNo; // esi
  CharaProjectData *v9; // rbp
  int CharaDataIndex; // eax
  int iBaseCharaID; // edx
  BattleSystem::BattleController *v13; // [rsp+60h] [rbp+18h]

  v6 = -1;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_None;
  v7 = BattleSystem::BattleController::instance;
  if ( !BattleSystem::BattleController::instance )
  {
    v13 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v13);
    BattleSystem::BattleController::instance = v7;
  }
  battleCharaNo = v7->playerInfo[argv->mValue.IValue].battleCharaNo;
  v9 = *(CharaProjectData **)(*(_QWORD *)&AppMain::pApp + 10888i64);
  CharaDataIndex = CharaProjectData::GetCharaDataIndex(v9, battleCharaNo);
  if ( CharaDataIndex >= 0 )
  {
    iBaseCharaID = v9->pCharaData[CharaDataIndex].iBaseCharaID;
    if ( iBaseCharaID < 0 )
      iBaseCharaID = battleCharaNo;
    v6 = iBaseCharaID;
  }
  if ( (result->Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(
      result->pObjectInterface,
      result,
      result->mValue.pStringManaged);
    result->pObjectInterface = 0i64;
  }
  result->Type = VT_Float;
  result->mValue.IValue = v6;
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_StartChatMessageInput(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  Scaleform::GFx::Value *v4; // rax

  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->mValue.IValue = 0;
  v4 = result;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->Type = VT_Float;
  return v4;
}

Scaleform::GFx::Value *__fastcall extension::GFn_CallSaveDataAsync(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  GfxManager *v5; // rax
  GfxManager *v7; // [rsp+40h] [rbp+8h]

  if ( !GfxManager::instance )
  {
    v7 = (GfxManager *)operator new(0x108ui64);
    GfxManager::GfxManager(v7);
    GfxManager::instance = v5;
  }
  AppMain::SaveDataAsyncSave(*(AppMain **)&AppMain::pApp, (int)ctx);
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_None;
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_CallSaveDataAsyncReplay(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  GfxManager *v5; // rax
  GfxManager *v7; // [rsp+40h] [rbp+8h]

  if ( !GfxManager::instance )
  {
    v7 = (GfxManager *)operator new(0x108ui64);
    GfxManager::GfxManager(v7);
    GfxManager::instance = v5;
  }
  AppMain::SaveDataAsyncSaveReplay(*(AppMain **)&AppMain::pApp);
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_None;
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_CallbackSystemMessage(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        __int64 argc)
{
  unsigned int UIValue; // edi
  GfxManager *v6; // rax
  void (__fastcall *m_pCallBackEventFunc)(int); // rdx
  UserGameOperation *v8; // rax
  GfxManager *v10; // [rsp+40h] [rbp+8h]

  UIValue = argv->mValue.UIValue;
  v6 = GfxManager::instance;
  if ( !GfxManager::instance )
  {
    v10 = (GfxManager *)operator new(0x108ui64);
    GfxManager::GfxManager(v10);
    GfxManager::instance = v6;
  }
  v6->m_SystemMessageState = SYSTEM_MESSAGE_CLOSE;
  v6->m_SystemMessageCursor = UIValue;
  m_pCallBackEventFunc = v6->m_pCallBackEventFunc;
  if ( m_pCallBackEventFunc )
    ((void (__fastcall *)(_QWORD, void (__fastcall *)(int), const Scaleform::GFx::Value *, __int64, _DWORD, __int64))m_pCallBackEventFunc)(
      UIValue,
      m_pCallBackEventFunc,
      argv,
      argc,
      0,
      -2i64);
  v8 = UserGameOperation::Instance();
  UserGameOperation::clear(v8);
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_Float;
  result->mValue.IValue = 0;
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_CanSendMessage(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  bool v4; // al

  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_None;
  v4 = *(_BYTE *)(*(_QWORD *)&AppMain::pApp + 2192320i64)
    && *(_BYTE *)(*(_QWORD *)&AppMain::pApp + 2192296i64)
    && *(_BYTE *)(*(_QWORD *)&AppMain::pApp + 2197436i64)
    && *(float *)(*(_QWORD *)&AppMain::pApp + 2192324i64) <= 0.0;
  result->Type = VT_Int64;
  result->mValue.BValue = v4;
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_ChangeMainMenuBGM(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  Scaleform::GFx::Value *v5; // rax

  AppMain::ChangeMainMenuBGM(*(AppMain **)&AppMain::pApp, argv->mValue.BValue);
  v5 = result;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_Float;
  result->mValue.IValue = 0;
  return v5;
}

Scaleform::GFx::Value *__fastcall extension::GFn_IsPlayTogether(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  Scaleform::GFx::Value *v4; // rax

  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  v4 = result;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_Int64;
  result->mValue.BValue = 0;
  return v4;
}

Scaleform::GFx::Value *__fastcall extension::GFn_ClearExchangedUserData(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  extension::GFXIFontManager *v5; // rax
  extension::gfxi_detail::TranslatorImpl *pObject; // rdx
  Scaleform::GFx::Value *v7; // rax

  v5 = extension::GFXIFontManager::Instance();
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  pObject = v5->m_translatorImpl.pObject;
  v7 = result;
  result->Type = VT_Float;
  result->mValue.IValue = 0;
  pObject->m_exchangedUserDataLength = 0;
  return v7;
}

Scaleform::GFx::Value *__fastcall extension::GFn_ClearGalleryNew(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  Scaleform::GFx::Value *v4; // r10
  int IValue; // er9
  __int64 v6; // rsi
  int v7; // ebx
  int v8; // edi
  unsigned int v9; // eax
  unsigned __int64 v10; // rcx
  int v11; // er9
  __int64 v12; // r8
  int v13; // er11
  Scaleform::GFx::Value *v14; // rax

  v4 = result;
  IValue = argv[2].mValue.IValue;
  v6 = *(_QWORD *)&AppMain::pApp;
  v7 = argv->mValue.IValue;
  v8 = argv[1].mValue.IValue;
  if ( IValue <= argv[3].mValue.IValue )
  {
    do
    {
      v9 = AppMain::ExportLocalToGlobal((AppMain *)result, v7, v8, IValue);
      v10 = (unsigned __int64)v9 >> 5;
      LOBYTE(v9) = v9 & 0x1F;
      IValue = v11 + 1;
      v12 = v6 + 4 * v10;
      result = (Scaleform::GFx::Value *)(unsigned __int8)v9;
      *(_DWORD *)(v12 + 2208252) &= ~(0x80000000 >> v9);
    }
    while ( IValue <= v13 );
  }
  v4->pObjectInterface = 0i64;
  v4->mValue.IValue = 0;
  v14 = v4;
  v4->pPrev = (Scaleform::GFx::Value *)-1i64;
  v4->pNext = (Scaleform::GFx::Value *)-1i64;
  v4->Type = VT_Float;
  return v14;
}

Scaleform::GFx::Value *__fastcall extension::GFn_ClearIconNewFlag(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  int v4; // er9
  __int64 v5; // r11
  char v7; // cl
  _DWORD *v8; // r8
  Scaleform::GFx::Value *v9; // rax

  v4 = 0;
  v5 = *(_QWORD *)&AppMain::pApp + 2205088i64;
  do
  {
    v7 = v4 & 0x1F;
    v8 = (_DWORD *)(v5 + 4 * ((unsigned __int64)(unsigned int)v4++ >> 5));
    *v8 &= ~(0x80000000 >> v7);
  }
  while ( v4 < 108 );
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  v9 = result;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_Float;
  result->mValue.IValue = 0;
  return v9;
}

Scaleform::GFx::Value *__fastcall extension::GFn_ClearNetworkTitleNew(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  int i; // ebx
  __int64 v6; // r10
  int v7; // er8
  int v8; // er9
  unsigned __int64 v9; // rax
  char v10; // cl
  unsigned int v11; // edx
  int v12; // eax
  AgAchievementsManager *v13; // rcx
  Scaleform::GFx::Value *v14; // rax

  for ( i = 0; i < 300; ++i )
  {
    v6 = *(_QWORD *)&AppMain::pApp;
    *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 4 * ((unsigned __int64)(unsigned int)i >> 5) + 2208436) &= ~(0x80000000 >> (i & 0x1F));
    v7 = 1;
    v8 = 0;
    do
    {
      v9 = (unsigned __int64)(unsigned int)v7 >> 5;
      v10 = v7++ & 0x1F;
      v11 = *(_DWORD *)(v6 + 4 * v9 + 2208396) & (0x80000000 >> v10);
      v12 = v8 + 1;
      if ( !v11 )
        v12 = v8;
      v8 = v12;
    }
    while ( v7 < 300 );
    if ( (float)((float)((float)((float)v12 / 299.0) * 100.0) * 100.0) == 10000.0 && *(char *)(v6 + 2205139) <= 1 )
    {
      v13 = (AgAchievementsManager *)AgSingleton<AgAchievementsManager>::ms_instance;
      *(_BYTE *)(v6 + 2205139) = 1;
      AgAchievementsManager::unlock(v13, (AgAchievementPlatformData *)&stru_140A9BE60);
    }
  }
  v14 = result;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_Float;
  result->mValue.IValue = 0;
  return v14;
}

Scaleform::GFx::Value *__fastcall extension::GFn_CloseSystemMessage(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  GfxManager *v5; // rax
  extension::gfxi_detail::MovieProxy *m_ptr; // rdi
  GfxManager *v8; // [rsp+60h] [rbp+18h]

  v5 = GfxManager::instance;
  if ( !GfxManager::instance )
  {
    v8 = (GfxManager *)operator new(0x108ui64);
    GfxManager::GfxManager(v8);
    GfxManager::instance = v5;
  }
  m_ptr = v5->m_GFXMovieSystem.m_movieProxy.m_ptr;
  if ( m_ptr && Scaleform::GFx::Movie::IsAvailable(m_ptr->m_movie.pObject, "_root.CloseSystemMessage") )
    Scaleform::GFx::Movie::Invoke(m_ptr->m_movie.pObject, "_root.CloseSystemMessage", 0i64, 0i64, 0);
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_Float;
  result->mValue.IValue = 0;
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_ContinuePlayBGMUtil(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  Scaleform::GFx::Value *v4; // rdi
  AppMain *v5; // rsi
  __int64 v6; // rax
  extension::exsound_detail::SoundNameRegistry::NameBuffer *m_ptr; // rbx
  extension::exsound_detail::SoundNameRegistry::NameBuffer *v8; // rcx
  char *v9; // r9
  char *m_str; // rax
  signed __int64 v11; // r9
  int v12; // edx
  int v13; // er8
  extension::SoundHashKey resulta; // [rsp+38h] [rbp-20h] BYREF
  __int64 v16; // [rsp+40h] [rbp-18h]
  extension::SoundHashKey *p_soundName; // [rsp+48h] [rbp-10h]
  extension::SoundHashKey soundName; // [rsp+60h] [rbp+8h] BYREF

  soundName.m_sharedBuffer.m_ptr = (extension::exsound_detail::SoundNameRegistry::NameBuffer *)result;
  v16 = -2i64;
  v4 = result;
  v5 = *(AppMain **)&AppMain::pApp;
  v6 = *(_QWORD *)(*(_QWORD *)&AppMain::pApp + 2197336i64);
  soundName.m_sharedBuffer.m_ptr = (extension::exsound_detail::SoundNameRegistry::NameBuffer *)v6;
  if ( v6 )
  {
    result = *(Scaleform::GFx::Value **)(v6 + 8);
    _InterlockedExchangeAdd64((volatile signed __int64 *)&result->pObjectInterface, 1ui64);
  }
  p_soundName = &soundName;
  AppMain::Sound_BGMPlay_GetSoundHashKey((AppMain *)result, &resulta);
  m_ptr = resulta.m_sharedBuffer.m_ptr;
  if ( !resulta.m_sharedBuffer.m_ptr )
    goto LABEL_11;
  v8 = soundName.m_sharedBuffer.m_ptr;
  v9 = soundName.m_sharedBuffer.m_ptr ? soundName.m_sharedBuffer.m_ptr->m_str : 0i64;
  m_str = resulta.m_sharedBuffer.m_ptr->m_str;
  v11 = v9 - resulta.m_sharedBuffer.m_ptr->m_str;
  do
  {
    v12 = (unsigned __int8)m_str[v11];
    v13 = (unsigned __int8)*m_str - v12;
    if ( v13 )
      break;
    ++m_str;
  }
  while ( v12 );
  if ( v13 )
  {
LABEL_11:
    AppMain::Sound_PlayBGMByName(v5, &soundName, 0.0, 0.0, 0);
    extension::SoundHashKey::operator=(&v5->m_nowPlayBGM, &soundName);
    v8 = soundName.m_sharedBuffer.m_ptr;
  }
  if ( m_ptr )
  {
    if ( _InterlockedExchangeAdd64(
           (volatile signed __int64 *)&m_ptr->m_refCount.m_ptr->m_sharedCount,
           0xFFFFFFFFFFFFFFFFui64) == 1 )
      ((void (__fastcall *)(extension::exsound_detail::SoundNameRegistry::NameBuffer *, __int64))resulta.m_sharedBuffer.m_ptr->~RefCountableWeakSupportBase)(
        resulta.m_sharedBuffer.m_ptr,
        1i64);
    v8 = soundName.m_sharedBuffer.m_ptr;
  }
  if ( v8
    && _InterlockedExchangeAdd64(
         (volatile signed __int64 *)&v8->m_refCount.m_ptr->m_sharedCount,
         0xFFFFFFFFFFFFFFFFui64) == 1 )
  {
    ((void (__fastcall *)(extension::exsound_detail::SoundNameRegistry::NameBuffer *, __int64))v8->~RefCountableWeakSupportBase)(
      v8,
      1i64);
  }
  v4->pPrev = (Scaleform::GFx::Value *)-1i64;
  v4->pNext = (Scaleform::GFx::Value *)-1i64;
  v4->pObjectInterface = 0i64;
  v4->Type = VT_Float;
  v4->mValue.IValue = 0;
  return v4;
}

Scaleform::GFx::Value *__fastcall extension::GFn_DeleteReplayData(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  GfxManager *v6; // rax
  __int64 v7; // rbp
  void **v8; // rbx
  __int64 v9; // rdi
  GfxManager *v11; // [rsp+50h] [rbp+8h]

  if ( !GfxManager::instance )
  {
    v11 = (GfxManager *)operator new(0x108ui64);
    GfxManager::GfxManager(v11);
    GfxManager::instance = v6;
  }
  v7 = *(_QWORD *)&AppMain::pApp + 1184i64 * argv->mValue.IValue;
  v8 = (void **)(v7 + 2389272);
  v9 = 6i64;
  do
  {
    if ( *v8 )
    {
      operator delete(*v8, (unsigned __int64)ctx);
      *v8 = 0i64;
    }
    ++v8;
    --v9;
  }
  while ( v9 );
  memset((void *)(v7 + 2388168), 0, 0x4A0ui64);
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_None;
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_Dispose(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  GfxManager *v5; // rax
  GfxManager *v7; // [rsp+40h] [rbp+8h]

  v5 = GfxManager::instance;
  if ( !GfxManager::instance )
  {
    v7 = (GfxManager *)operator new(0x108ui64);
    GfxManager::GfxManager(v7);
    GfxManager::instance = v5;
  }
  *(_WORD *)&v5->m_bDisposeGFXMovie = 1;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_Float;
  result->mValue.IValue = 0;
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_DownloadStartReplay(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  Scaleform::GFx::Value *v5; // rax

  AppMain::ST_OnlineReplayDownload(*(AppMain **)&AppMain::pApp, argv->mValue.IValue);
  v5 = result;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_Float;
  result->mValue.IValue = 0;
  return v5;
}

Scaleform::GFx::Value *__fastcall extension::GFn_StopMovie(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  MovieData *v5; // rax
  MovieData *v7; // [rsp+40h] [rbp+8h]

  v5 = MovieData::movieData;
  if ( !MovieData::movieData )
  {
    v7 = (MovieData *)operator new((unsigned int)((_DWORD)MovieData::movieData + 72));
    MovieData::MovieData(v7);
    MovieData::movieData = v5;
  }
  MovieData::Stop(v5, (bool)ctx);
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_Float;
  result->mValue.IValue = 0;
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_FadeOut(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  __int64 v4; // r8
  int v5; // edx
  Scaleform::GFx::Value *v6; // rax

  v4 = *(_QWORD *)&AppMain::pApp;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  *(_QWORD *)(v4 + 2507452) = 10i64;
  v5 = 100 * *(unsigned __int8 *)(v4 + 2507456);
  v6 = result;
  *(_BYTE *)(v4 + 2507472) = 0;
  *(_DWORD *)(v4 + 2507460) = 0;
  *(_BYTE *)(v4 + 2507474) = 0;
  *(_DWORD *)(v4 + 7364) = 170;
  *(_DWORD *)(v4 + 2507464) = v5;
  result->Type = VT_Float;
  result->mValue.IValue = 0;
  return v6;
}

Scaleform::GFx::Value *__fastcall extension::GFn_FightingListShowPSN(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  __int64 v5; // rbx
  __int64 v6; // rax
  Scaleform::GFx::Value *v7; // rax

  v5 = *(_QWORD *)(*(_QWORD *)&AppMain::pApp + 40 * (argv->mValue.IValue + 57212i64));
  v6 = SteamInternal_ContextInit(&`SteamInternal_ModuleContext'::`2'::s_CallbackCounterAndContext, ctx);
  (*(void (__fastcall **)(_QWORD, const char *, __int64))(**(_QWORD **)(v6 + 16) + 232i64))(
    *(_QWORD *)(v6 + 16),
    "steamid",
    v5);
  v7 = result;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_Float;
  result->mValue.IValue = 0;
  return v7;
}

Scaleform::GFx::Value *__fastcall extension::GFn_FinishHudAdjust(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  Scaleform::GFx::Value *v5; // rax

  while ( *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 11648i64) != *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 11652i64) )
    ;
  SyncMenuImage::Load(
    (SyncMenuImage *)(*(_QWORD *)&AppMain::pApp + 11128i64),
    (const ImageDataInfo *)MenuImageDataTbl[*(int *)(*(_QWORD *)&AppMain::pApp + 2197384i64)] + 26,
    FADE_OUT);
  v5 = result;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_Float;
  result->mValue.IValue = 0;
  return v5;
}

Scaleform::GFx::Value *__fastcall extension::GFn_GetAvailableInputDevices(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  Scaleform::GFx::Value *v5; // r15
  int v6; // er14
  int v7; // ecx
  AgController **p_m_ptr; // rdx
  __int64 v9; // r8
  int v10; // eax
  int v11; // ebx
  extension::TranslateTable *v12; // rcx
  const std::pair<char const *,enum LANGUAGE_MODE> *v13; // rax
  const char *first; // rax
  const char *v15; // r8
  char *v16; // rax
  const char *v17; // rbx
  int v18; // er12
  __int64 v19; // r13
  Framework::GLManager *v20; // rcx
  AgPointer<AgController> *Gamepad; // rax
  AgController *m_ptr; // rsi
  AgReferenceCount *m_ref; // rbx
  AgPointer<AgController> *v24; // rax
  __ExceptionPtr *CString; // rdi
  AgController *v26; // r14
  AgReferenceCount *v27; // rbx
  int v28; // er15
  int v29; // ebx
  _DWORD *v30; // rsi
  extension::TranslateTable *v31; // rcx
  const std::pair<char const *,enum LANGUAGE_MODE> *v32; // rax
  const char *v33; // rax
  const char *v34; // r8
  const char *v35; // rax
  int v36; // ebx
  extension::TranslateTable *v37; // rcx
  const std::pair<char const *,enum LANGUAGE_MODE> *v38; // rax
  const char *v39; // rax
  const char *v40; // r8
  const char *v41; // rax
  const char *v42; // r8
  char *v43; // rcx
  _BYTE *v44; // rax
  __int64 v45; // rdx
  char v46; // cl
  AgController *v47; // rcx
  int m_hardwareType; // ebx
  unsigned int idx; // [rsp+30h] [rbp-D0h]
  __int64 v52; // [rsp+40h] [rbp-C0h]
  AgPointer<AgController> resulta; // [rsp+48h] [rbp-B8h] BYREF
  AgPointer<AgController> v54; // [rsp+58h] [rbp-A8h] BYREF
  _DWORD *v55; // [rsp+68h] [rbp-98h]
  extension::GFXIMovieContext *v56; // [rsp+70h] [rbp-90h]
  Scaleform::GFx::Value value; // [rsp+78h] [rbp-88h] BYREF
  Scaleform::GFx::Value pvalue; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v59; // [rsp+D8h] [rbp-28h]
  Scaleform::GFx::Value *v60; // [rsp+E0h] [rbp-20h]
  AgStringRef v61; // [rsp+E8h] [rbp-18h] BYREF
  __int128 v62; // [rsp+F8h] [rbp-8h]
  __int64 v63; // [rsp+108h] [rbp+8h]
  char v64[16]; // [rsp+110h] [rbp+10h] BYREF
  Scaleform::GFx::Value ptr; // [rsp+120h] [rbp+20h] BYREF
  Scaleform::GFx::Value val; // [rsp+150h] [rbp+50h] BYREF
  Scaleform::GFx::Value v67; // [rsp+180h] [rbp+80h] BYREF
  Scaleform::GFx::Value pargs; // [rsp+1B0h] [rbp+B0h] BYREF
  Scaleform::GFx::Value v69; // [rsp+1E0h] [rbp+E0h] BYREF
  Scaleform::GFx::Value v70; // [rsp+210h] [rbp+110h] BYREF
  Scaleform::GFx::Value v71; // [rsp+240h] [rbp+140h] BYREF
  Scaleform::GFx::Value v72; // [rsp+270h] [rbp+170h] BYREF
  char v73[13]; // [rsp+2A0h] [rbp+1A0h] BYREF
  __int64 v74; // [rsp+2ADh] [rbp+1ADh]
  __int64 v75; // [rsp+2B5h] [rbp+1B5h]
  __int64 v76; // [rsp+2BDh] [rbp+1BDh]
  __int64 v77; // [rsp+2C5h] [rbp+1C5h]
  int v78; // [rsp+2CDh] [rbp+1CDh]
  char v79; // [rsp+2D1h] [rbp+1D1h]

  v59 = -2i64;
  v56 = ctx;
  v5 = result;
  v60 = result;
  v6 = 0;
  v62 = 0i64;
  v63 = 0i64;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_None;
  Scaleform::GFx::Movie::CreateArray(ctx->m_movie.pObject, result);
  v7 = 0;
  p_m_ptr = &Framework::GLManager::glm->m_controllerContext.m_gamepad._Elems[0].m_ptr;
  v9 = 4i64;
  do
  {
    v10 = v7 + 1;
    if ( *p_m_ptr )
      v10 = v7;
    v7 = v10;
    p_m_ptr += 2;
    --v9;
  }
  while ( v9 );
  Scaleform::GFx::Value::ObjectInterface::SetArraySize(v5->pObjectInterface, v5->mValue.pStringManaged, 5 - v10);
  pvalue.Scaleform::ListNode<Scaleform::GFx::Value> = (Scaleform::ListNode<Scaleform::GFx::Value>)_mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
  pvalue.pObjectInterface = 0i64;
  pvalue.Type = VT_None;
  `eh vector constructor iterator'(
    &ptr,
    0x30ui64,
    3ui64,
    (void (__fastcall *)(void *))Scaleform::GFx::Value::Value,
    (void (__fastcall *)(void *))Scaleform::GFx::Value::~Value);
  v11 = *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2197384i64);
  v55 = (_DWORD *)(*(_QWORD *)NtCurrentTeb()->Reserved1[11] + 40i64);
  if ( dword_140AD01AC > *v55 )
  {
    Init_thread_header(&dword_140AD01AC);
    if ( dword_140AD01AC == -1 )
    {
      extension::TranslateTable::TranslateTable(v12);
      atexit((void (__fastcall *)())extension::TranslateTable::Instance_::_2_::_dynamic_atexit_destructor_for__the_instance__);
      Init_thread_footer(&dword_140AD01AC);
    }
  }
  v13 = extension::auxscript::MyLangCodeNameTable;
  while ( v13->second != v11 )
  {
    if ( ++v13 == (const std::pair<char const *,enum LANGUAGE_MODE> *)extension::auxscript::my_testpolicy_name_table )
    {
      first = 0i64;
      goto LABEL_13;
    }
  }
  first = v13->first;
LABEL_13:
  v15 = "en_US";
  if ( first )
    v15 = first;
  v16 = (char *)extension::TranslateTable::executeTranslate(&the_instance_8, "OPTION_BUTTONCONFIG_KEYBOARD_DEVICE", v15);
  v17 = "$OPTION_BUTTONCONFIG_KEYBOARD_DEVICE";
  if ( v16 != "OPTION_BUTTONCONFIG_KEYBOARD_DEVICE" )
    v17 = v16;
  if ( (ptr.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(ptr.pObjectInterface, &ptr, ptr.mValue.pStringManaged);
    ptr.pObjectInterface = 0i64;
  }
  ptr.Type = 6;
  ptr.mValue.pString = v17;
  if ( (val.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(val.pObjectInterface, &val, val.mValue.pStringManaged);
    val.pObjectInterface = 0i64;
  }
  val.Type = VT_Float;
  val.mValue.IValue = 0;
  if ( (v67.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v67.pObjectInterface, &v67, v67.mValue.pStringManaged);
    v67.pObjectInterface = 0i64;
  }
  v67.Type = VT_Float;
  v67.mValue.IValue = 0;
  Scaleform::GFx::Movie::CreateObject(ctx->m_movie.pObject, &pvalue, "kof.InputDevice", &ptr, 3u);
  Scaleform::GFx::Value::ObjectInterface::SetElement(v5->pObjectInterface, v5->mValue.pStringManaged, 0, &pvalue);
  v18 = 1;
  idx = 1;
  v19 = 0i64;
  v20 = Framework::GLManager::glm;
  do
  {
    if ( v20->m_controllerContext.m_gamepad._Elems[v19].m_ptr )
    {
      Gamepad = Framework::GLManager::getGamepad(v20, &resulta, v18);
      v52 = *(_QWORD *)((__int64 (__fastcall *)(AgController *, char *))Gamepad->m_ptr->getUID)(Gamepad->m_ptr, v64);
      m_ptr = resulta.m_ptr;
      resulta.m_ptr = 0i64;
      m_ref = resulta.m_ref;
      if ( resulta.m_ref )
      {
        resulta.m_ref = 0i64;
        if ( !AgAtomicDecrement(&m_ref->m_strongCount) )
        {
          if ( !AgAtomicDecrement(&m_ref->m_weakCount) )
            v6 = 1;
          m_ref->m_data = 0i64;
          if ( m_ptr )
            ((void (__fastcall *)(AgController *, __int64))m_ptr->~AgController)(m_ptr, 1i64);
          if ( v6 )
            AgReferenceCount::operator delete(m_ref);
        }
      }
      value.Scaleform::ListNode<Scaleform::GFx::Value> = (Scaleform::ListNode<Scaleform::GFx::Value>)_mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
      value.pObjectInterface = 0i64;
      value.Type = VT_None;
      `eh vector constructor iterator'(
        &pargs,
        0x30ui64,
        5ui64,
        (void (__fastcall *)(void *))Scaleform::GFx::Value::Value,
        (void (__fastcall *)(void *))Scaleform::GFx::Value::~Value);
      v24 = Framework::GLManager::getGamepad(Framework::GLManager::glm, &v54, v18);
      AgStringRef::AgStringRef(&v61, &v24->m_ptr->m_name);
      CString = AgStringRef::getCString((std::shared_ptr<__ExceptionPtr> *)&v61);
      v26 = v54.m_ptr;
      v54.m_ptr = 0i64;
      v27 = v54.m_ref;
      if ( v54.m_ref )
      {
        v54.m_ref = 0i64;
        v28 = 0;
        if ( !AgAtomicDecrement(&v27->m_strongCount) )
        {
          if ( !AgAtomicDecrement(&v27->m_weakCount) )
            v28 = 1;
          v27->m_data = 0i64;
          if ( v26 )
            ((void (__fastcall *)(AgController *, __int64))v26->~AgController)(v26, 1i64);
          if ( v28 )
            AgReferenceCount::operator delete(v27);
        }
        v5 = result;
      }
      v29 = *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2197384i64);
      v30 = v55;
      if ( dword_140AD01AC > *v55 )
      {
        Init_thread_header(&dword_140AD01AC);
        if ( dword_140AD01AC == -1 )
        {
          extension::TranslateTable::TranslateTable(v31);
          atexit((void (__fastcall *)())extension::TranslateTable::Instance_::_2_::_dynamic_atexit_destructor_for__the_instance__);
          Init_thread_footer(&dword_140AD01AC);
        }
      }
      if ( CString )
      {
        if ( LOBYTE(CString->m_Record.ExceptionCode) == 64 || LOBYTE(CString->m_Record.ExceptionCode) == 36 )
        {
          v32 = extension::auxscript::MyLangCodeNameTable;
          while ( v32->second != v29 )
          {
            if ( ++v32 == (const std::pair<char const *,enum LANGUAGE_MODE> *)extension::auxscript::my_testpolicy_name_table )
            {
              v6 = 0;
              v33 = 0i64;
              goto LABEL_55;
            }
          }
          v33 = v32->first;
          v6 = 0;
LABEL_55:
          v34 = "en_US";
          if ( v33 )
            v34 = v33;
          v35 = extension::TranslateTable::executeTranslate(
                  &the_instance_8,
                  (const char *)&CString->m_Record.ExceptionCode + 1,
                  v34);
          if ( v35 == (char *)&CString->m_Record.ExceptionCode + 1 )
            v35 = (const char *)CString;
          CString = (__ExceptionPtr *)v35;
        }
        else
        {
          v6 = 0;
        }
      }
      else
      {
        v6 = 0;
        CString = 0i64;
      }
      strcpy(v73, "0 - ");
      *(_QWORD *)&v73[5] = 0i64;
      v74 = 0i64;
      v75 = 0i64;
      v76 = 0i64;
      v77 = 0i64;
      v78 = 0;
      v79 = 0;
      v73[0] = v18 + 48;
      if ( LOBYTE(CString->m_Record.ExceptionCode) )
      {
        v44 = (char *)&v72.DataAux + 7;
        do
          ++v44;
        while ( *v44 );
        v45 = 0i64;
        do
        {
          v46 = *((_BYTE *)&CString->m_Record.ExceptionCode + v45);
          v44[v45++] = v46;
        }
        while ( v46 );
      }
      else
      {
        v36 = *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2197384i64);
        if ( dword_140AD01AC > *v30 )
        {
          Init_thread_header(&dword_140AD01AC);
          if ( dword_140AD01AC == -1 )
          {
            extension::TranslateTable::TranslateTable(v37);
            atexit((void (__fastcall *)())extension::TranslateTable::Instance_::_2_::_dynamic_atexit_destructor_for__the_instance__);
            Init_thread_footer(&dword_140AD01AC);
          }
        }
        v38 = extension::auxscript::MyLangCodeNameTable;
        while ( v38->second != v36 )
        {
          if ( ++v38 == (const std::pair<char const *,enum LANGUAGE_MODE> *)extension::auxscript::my_testpolicy_name_table )
          {
            v39 = 0i64;
            goto LABEL_69;
          }
        }
        v39 = v38->first;
LABEL_69:
        v40 = "en_US";
        if ( v39 )
          v40 = v39;
        v41 = extension::TranslateTable::executeTranslate(&the_instance_8, "GENERIC_CONTROLLER_NAME", v40);
        v42 = "$GENERIC_CONTROLLER_NAME";
        if ( v41 != "GENERIC_CONTROLLER_NAME" )
          v42 = v41;
        v43 = (char *)&v72.DataAux + 7;
        do
          ++v43;
        while ( *v43 );
        strcpy(v43, v42);
      }
      if ( (pargs.Type & 0x40) != 0 )
      {
        Scaleform::GFx::Value::ObjectInterface::ObjectRelease(
          pargs.pObjectInterface,
          &pargs,
          pargs.mValue.pStringManaged);
        pargs.pObjectInterface = 0i64;
      }
      pargs.Type = 6;
      pargs.mValue.pString = v73;
      v47 = Framework::GLManager::glm->m_controllerContext.m_gamepad._Elems[v19].m_ptr;
      if ( v47 )
      {
        m_hardwareType = v47->m_hardwareType;
        if ( !m_hardwareType )
          m_hardwareType = 5;
      }
      else
      {
        m_hardwareType = 0;
      }
      if ( (v69.Type & 0x40) != 0 )
      {
        Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v69.pObjectInterface, &v69, v69.mValue.pStringManaged);
        v69.pObjectInterface = 0i64;
      }
      v69.Type = VT_Float;
      v69.mValue.IValue = m_hardwareType;
      if ( (v70.Type & 0x40) != 0 )
      {
        Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v70.pObjectInterface, &v70, v70.mValue.pStringManaged);
        v70.pObjectInterface = 0i64;
      }
      v70.Type = VT_Float;
      v70.mValue.IValue = v18;
      if ( (v71.Type & 0x40) != 0 )
      {
        Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v71.pObjectInterface, &v71, v71.mValue.pStringManaged);
        v71.pObjectInterface = 0i64;
      }
      v71.Type = VT_Float;
      v71.mValue.IValue = v52;
      if ( (v72.Type & 0x40) != 0 )
      {
        Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v72.pObjectInterface, &v72, v72.mValue.pStringManaged);
        v72.pObjectInterface = 0i64;
      }
      v72.Type = VT_Float;
      v72.mValue.IValue = HIDWORD(v52);
      Scaleform::GFx::Movie::CreateObject(v56->m_movie.pObject, &value, "kof.InputDevice", &pargs, 5u);
      Scaleform::GFx::Value::ObjectInterface::SetElement(v5->pObjectInterface, v5->mValue.pStringManaged, idx++, &value);
      `eh vector destructor iterator'(
        &pargs,
        0x30ui64,
        5ui64,
        (void (__fastcall *)(void *))Scaleform::GFx::Value::~Value);
      if ( (value.Type & 0x40) != 0 )
        Scaleform::GFx::Value::ObjectInterface::ObjectRelease(
          value.pObjectInterface,
          &value,
          value.mValue.pStringManaged);
      v20 = Framework::GLManager::glm;
    }
    ++v18;
    ++v19;
  }
  while ( v18 < 5 );
  `eh vector destructor iterator'(&ptr, 0x30ui64, 3ui64, (void (__fastcall *)(void *))Scaleform::GFx::Value::~Value);
  if ( (pvalue.Type & 0x40) != 0 )
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(
      pvalue.pObjectInterface,
      &pvalue,
      pvalue.mValue.pStringManaged);
  return v5;
}

Scaleform::GFx::Value *__fastcall extension::GFn_GetBattleMemberData(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  const char *pString; // r12
  unsigned int v5; // eax
  int v6; // er13
  char *v7; // rbx
  unsigned int *v8; // r14
  __int64 v9; // r15
  char *v10; // rdi
  char **Name; // rcx
  signed __int64 v12; // rdx
  char v13; // al
  unsigned int v14; // ebp
  unsigned int v15; // edi
  int v16; // esi
  int v17; // esi
  int v18; // ebp
  int v19; // edi
  unsigned int count; // esi
  int v22; // [rsp+40h] [rbp-D98h]
  __int64 v23; // [rsp+48h] [rbp-D90h]
  NET_USER_DATA pInfo[12]; // [rsp+80h] [rbp-D58h] BYREF
  char ptr[1920]; // [rsp+610h] [rbp-7C8h] BYREF

  if ( (argv->Type & 0x40) != 0 )
    pString = *argv->mValue.pStringManaged;
  else
    pString = argv->mValue.pString;
  `eh vector constructor iterator'(
    ptr,
    0x30ui64,
    0x28ui64,
    (void (__fastcall *)(void *))Scaleform::GFx::Value::Value,
    (void (__fastcall *)(void *))Scaleform::GFx::Value::~Value);
  memset(pInfo, 0, sizeof(pInfo));
  NetManager::GetBattleStartTableRoomMemberInfo(&g_NetworkManager, pInfo);
  v22 = 0;
  v5 = 2;
  if ( g_NetworkManager.gamedata.gameRule == GAME_RULE_PARTY )
    v5 = 6;
  v6 = 0;
  v23 = 0i64;
  v7 = ptr;
  v8 = (unsigned int *)((char *)pInfo + 16);
  v9 = v5;
  do
  {
    v10 = extension::stringBuff_2[v6];
    memset(v10, 0, 0x81ui64);
    Name = SteamNameCache::getName(SteamNameCache::ms_instance, *(CSteamID *)(v8 - 4));
    v12 = v10 - (char *)Name;
    do
    {
      v13 = *(_BYTE *)Name;
      *((_BYTE *)Name + v12) = *(_BYTE *)Name;
      Name = (char **)((char *)Name + 1);
    }
    while ( v13 );
    if ( (*((_DWORD *)v7 + 6) & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(
        *((Scaleform::GFx::Value::ObjectInterface **)v7 + 2),
        (Scaleform::GFx::Value *)v7,
        *((void **)v7 + 4));
      *((_QWORD *)v7 + 2) = 0i64;
    }
    *((_DWORD *)v7 + 6) = 6;
    *((_QWORD *)v7 + 4) = v10;
    v14 = *(v8 - 1);
    if ( (*((_DWORD *)v7 + 18) & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(
        *((Scaleform::GFx::Value::ObjectInterface **)v7 + 8),
        (Scaleform::GFx::Value *)v7 + 1,
        *((void **)v7 + 10));
      *((_QWORD *)v7 + 8) = 0i64;
    }
    *((_DWORD *)v7 + 18) = 3;
    *((_DWORD *)v7 + 20) = (v14 >> 21) & 0x3F;
    v15 = *v8;
    v16 = (*v8 >> 21) & 0x1FF;
    if ( (*((_DWORD *)v7 + 30) & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(
        *((Scaleform::GFx::Value::ObjectInterface **)v7 + 14),
        (Scaleform::GFx::Value *)v7 + 2,
        *((void **)v7 + 16));
      *((_QWORD *)v7 + 14) = 0i64;
    }
    *((_DWORD *)v7 + 30) = 3;
    *((_DWORD *)v7 + 32) = v16;
    switch ( (v15 >> 15) & 7 )
    {
      case 0u:
      case 1u:
        v17 = 1;
        break;
      case 2u:
      case 3u:
        v17 = 2;
        break;
      case 4u:
      case 5u:
        v17 = 3;
        break;
      case 6u:
      case 7u:
        v17 = 4;
        break;
    }
    if ( (*((_DWORD *)v7 + 42) & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(
        *((Scaleform::GFx::Value::ObjectInterface **)v7 + 20),
        (Scaleform::GFx::Value *)v7 + 3,
        *((void **)v7 + 22));
      *((_QWORD *)v7 + 20) = 0i64;
    }
    *((_DWORD *)v7 + 42) = 3;
    *((_DWORD *)v7 + 44) = v17;
    v18 = (v14 >> 14) & 0x7F;
    if ( (*((_DWORD *)v7 + 54) & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(
        *((Scaleform::GFx::Value::ObjectInterface **)v7 + 26),
        (Scaleform::GFx::Value *)v7 + 4,
        *((void **)v7 + 28));
      *((_QWORD *)v7 + 26) = 0i64;
    }
    *((_DWORD *)v7 + 54) = 3;
    *((_DWORD *)v7 + 56) = v18;
    v19 = (v8[8] >> 3) & 3;
    if ( (*((_DWORD *)v7 + 66) & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(
        *((Scaleform::GFx::Value::ObjectInterface **)v7 + 32),
        (Scaleform::GFx::Value *)v7 + 5,
        *((void **)v7 + 34));
      *((_QWORD *)v7 + 32) = 0i64;
    }
    *((_DWORD *)v7 + 66) = 3;
    *((_DWORD *)v7 + 68) = v19;
    count = v22 + 6;
    v22 += 6;
    v7 += 288;
    ++v6;
    ++v23;
    v8 = (unsigned int *)((char *)v8 + 118);
  }
  while ( v23 < v9 );
  Scaleform::GFx::Movie::SetVariableArray(ctx->m_movie.pObject, SA_Value, pString, 0, ptr, count, SV_Sticky);
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_Float;
  result->mValue.IValue = 1;
  `eh vector destructor iterator'(ptr, 0x30ui64, 0x28ui64, (void (__fastcall *)(void *))Scaleform::GFx::Value::~Value);
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_GetButtonConfigParamArray(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  __int64 v4; // rbx
  __int64 v6; // rsi
  int IValue; // er8
  const std::piecewise_construct_t *v9; // rdx
  std::tuple<> *v10; // r9
  std::map<AgControllerUID,FighterOperationMapper> *v11; // rsi
  std::_Tree_node<std::pair<AgControllerUID const ,FighterOperationMapper>,void *> *Myhead; // rbx
  std::_Tree_node<std::pair<AgControllerUID const ,FighterOperationMapper>,void *> *Parent; // rdi
  std::_Tree_node<std::pair<AgControllerUID const ,FighterOperationMapper>,void *> *_Newnode; // rax
  std::_Tree_node<std::pair<AgControllerUID const ,FighterOperationMapper>,void *> *Ptr; // rbx
  std::_Tree_node<std::pair<AgControllerUID const ,FighterOperationMapper>,void *> *v16; // rdi
  std::_Tree_node<std::pair<AgControllerUID const ,FighterOperationMapper>,void *> *v17; // rax
  std::_Tree_node<std::pair<AgControllerUID const ,FighterOperationMapper>,void *> *v18; // rbx
  std::_Tree_node<std::pair<AgControllerUID const ,FighterOperationMapper>,void *> *v19; // rdi
  std::_Tree_node<std::pair<AgControllerUID const ,FighterOperationMapper>,void *> *v20; // rax
  std::_Tree_node<std::pair<AgControllerUID const ,FighterOperationMapper>,void *> *v21; // rbx
  std::_Tree_node<std::pair<AgControllerUID const ,FighterOperationMapper>,void *> *v22; // rdi
  std::_Tree_node<std::pair<AgControllerUID const ,FighterOperationMapper>,void *> *v23; // rax
  std::_Tree_node<std::pair<AgControllerUID const ,FighterOperationMapper>,void *> *v24; // rbx
  std::_Tree_node<std::pair<AgControllerUID const ,FighterOperationMapper>,void *> *v25; // rdi
  std::_Tree_node<std::pair<AgControllerUID const ,FighterOperationMapper>,void *> *v26; // rax
  std::_Tree_node<std::pair<AgControllerUID const ,FighterOperationMapper>,void *> *v27; // rbx
  std::_Tree_node<std::pair<AgControllerUID const ,FighterOperationMapper>,void *> *v28; // rdi
  std::_Tree_node<std::pair<AgControllerUID const ,FighterOperationMapper>,void *> *v29; // rax
  std::tuple<> *v30; // r9
  std::tuple<> *v31; // r9
  std::tuple<> *v32; // r9
  Scaleform::GFx::Movie *pObject; // rcx
  Scaleform::GFx::Value *v34; // rax
  std::pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgControllerUID const ,FighterOperationMapper> > > >,bool> v35; // [rsp+40h] [rbp-39h] BYREF
  int v36; // [rsp+50h] [rbp-29h]
  AgControllerUID userID; // [rsp+58h] [rbp-21h] BYREF
  int pdata[12]; // [rsp+60h] [rbp-19h] BYREF

  v6 = *(_QWORD *)&AppMain::pApp;
  IValue = argv->mValue.IValue;
  v4 = IValue;
  v36 = 0;
  AppMain::GetControllerUIDForUser((AppMain *)result, &userID, IValue);
  pdata[0] = 0;
  v11 = (std::map<AgControllerUID,FighterOperationMapper> *)(1056 * v4 + v6 + 2197504);
  Myhead = v11->_Mypair._Myval2._Myval2._Myhead;
  Parent = v11->_Mypair._Myval2._Myval2._Myhead->_Parent;
  while ( !Parent->_Isnil )
  {
    if ( operator<(&Parent->_Myval.first, &userID) )
    {
      Parent = Parent->_Right;
    }
    else
    {
      Myhead = Parent;
      Parent = Parent->_Left;
    }
  }
  if ( Myhead == v11->_Mypair._Myval2._Myval2._Myhead || operator<(&userID, &Myhead->_Myval.first) )
  {
    v35.first._Ptr = (std::_Tree_node<std::pair<AgControllerUID const ,FighterOperationMapper>,void *> *)&userID;
    _Newnode = std::_Tree_comp_alloc<std::_Tmap_traits<AgControllerUID,FighterOperationMapper,std::less<AgControllerUID>,std::allocator<std::pair<AgControllerUID const,FighterOperationMapper>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<AgControllerUID const &>,std::tuple<>>(
                 v11,
                 v9,
                 (std::tuple<AgControllerUID const &> *)&v35,
                 v10);
    std::_Tree<std::_Tmap_traits<AgControllerUID,FighterOperationMapper,std::less<AgControllerUID>,std::allocator<std::pair<AgControllerUID const,FighterOperationMapper>>,0>>::_Insert_hint<std::pair<AgControllerUID const,FighterOperationMapper> &,std::_Tree_node<std::pair<AgControllerUID const,FighterOperationMapper>,void *> *>(
      v11,
      &v35.first,
      (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgControllerUID const ,FighterOperationMapper> > > >)Myhead,
      &_Newnode->_Myval,
      _Newnode);
    Myhead = v35.first._Ptr;
  }
  pdata[1] = Myhead->_Myval.second.m_mapping[0];
  Ptr = v11->_Mypair._Myval2._Myval2._Myhead;
  v16 = v11->_Mypair._Myval2._Myval2._Myhead->_Parent;
  while ( !v16->_Isnil )
  {
    if ( operator<(&v16->_Myval.first, &userID) )
    {
      v16 = v16->_Right;
    }
    else
    {
      Ptr = v16;
      v16 = v16->_Left;
    }
  }
  if ( Ptr == v11->_Mypair._Myval2._Myval2._Myhead || operator<(&userID, &Ptr->_Myval.first) )
  {
    v35.first._Ptr = (std::_Tree_node<std::pair<AgControllerUID const ,FighterOperationMapper>,void *> *)&userID;
    v17 = std::_Tree_comp_alloc<std::_Tmap_traits<AgControllerUID,FighterOperationMapper,std::less<AgControllerUID>,std::allocator<std::pair<AgControllerUID const,FighterOperationMapper>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<AgControllerUID const &>,std::tuple<>>(
            v11,
            v9,
            (std::tuple<AgControllerUID const &> *)&v35,
            v10);
    std::_Tree<std::_Tmap_traits<AgControllerUID,FighterOperationMapper,std::less<AgControllerUID>,std::allocator<std::pair<AgControllerUID const,FighterOperationMapper>>,0>>::_Insert_hint<std::pair<AgControllerUID const,FighterOperationMapper> &,std::_Tree_node<std::pair<AgControllerUID const,FighterOperationMapper>,void *> *>(
      v11,
      &v35.first,
      (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgControllerUID const ,FighterOperationMapper> > > >)Ptr,
      &v17->_Myval,
      v17);
    Ptr = v35.first._Ptr;
  }
  pdata[2] = Ptr->_Myval.second.m_mapping[1];
  v18 = v11->_Mypair._Myval2._Myval2._Myhead;
  v19 = v11->_Mypair._Myval2._Myval2._Myhead->_Parent;
  while ( !v19->_Isnil )
  {
    if ( operator<(&v19->_Myval.first, &userID) )
    {
      v19 = v19->_Right;
    }
    else
    {
      v18 = v19;
      v19 = v19->_Left;
    }
  }
  if ( v18 == v11->_Mypair._Myval2._Myval2._Myhead || operator<(&userID, &v18->_Myval.first) )
  {
    v35.first._Ptr = (std::_Tree_node<std::pair<AgControllerUID const ,FighterOperationMapper>,void *> *)&userID;
    v20 = std::_Tree_comp_alloc<std::_Tmap_traits<AgControllerUID,FighterOperationMapper,std::less<AgControllerUID>,std::allocator<std::pair<AgControllerUID const,FighterOperationMapper>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<AgControllerUID const &>,std::tuple<>>(
            v11,
            v9,
            (std::tuple<AgControllerUID const &> *)&v35,
            v10);
    std::_Tree<std::_Tmap_traits<AgControllerUID,FighterOperationMapper,std::less<AgControllerUID>,std::allocator<std::pair<AgControllerUID const,FighterOperationMapper>>,0>>::_Insert_hint<std::pair<AgControllerUID const,FighterOperationMapper> &,std::_Tree_node<std::pair<AgControllerUID const,FighterOperationMapper>,void *> *>(
      v11,
      &v35.first,
      (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgControllerUID const ,FighterOperationMapper> > > >)v18,
      &v20->_Myval,
      v20);
    v18 = v35.first._Ptr;
  }
  pdata[3] = v18->_Myval.second.m_mapping[2];
  v21 = v11->_Mypair._Myval2._Myval2._Myhead;
  v22 = v11->_Mypair._Myval2._Myval2._Myhead->_Parent;
  while ( !v22->_Isnil )
  {
    if ( operator<(&v22->_Myval.first, &userID) )
    {
      v22 = v22->_Right;
    }
    else
    {
      v21 = v22;
      v22 = v22->_Left;
    }
  }
  if ( v21 == v11->_Mypair._Myval2._Myval2._Myhead || operator<(&userID, &v21->_Myval.first) )
  {
    v35.first._Ptr = (std::_Tree_node<std::pair<AgControllerUID const ,FighterOperationMapper>,void *> *)&userID;
    v23 = std::_Tree_comp_alloc<std::_Tmap_traits<AgControllerUID,FighterOperationMapper,std::less<AgControllerUID>,std::allocator<std::pair<AgControllerUID const,FighterOperationMapper>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<AgControllerUID const &>,std::tuple<>>(
            v11,
            v9,
            (std::tuple<AgControllerUID const &> *)&v35,
            v10);
    std::_Tree<std::_Tmap_traits<AgControllerUID,FighterOperationMapper,std::less<AgControllerUID>,std::allocator<std::pair<AgControllerUID const,FighterOperationMapper>>,0>>::_Insert_hint<std::pair<AgControllerUID const,FighterOperationMapper> &,std::_Tree_node<std::pair<AgControllerUID const,FighterOperationMapper>,void *> *>(
      v11,
      &v35.first,
      (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgControllerUID const ,FighterOperationMapper> > > >)v21,
      &v23->_Myval,
      v23);
    v21 = v35.first._Ptr;
  }
  pdata[4] = v21->_Myval.second.m_mapping[3];
  v24 = v11->_Mypair._Myval2._Myval2._Myhead;
  v25 = v11->_Mypair._Myval2._Myval2._Myhead->_Parent;
  while ( !v25->_Isnil )
  {
    if ( operator<(&v25->_Myval.first, &userID) )
    {
      v25 = v25->_Right;
    }
    else
    {
      v24 = v25;
      v25 = v25->_Left;
    }
  }
  if ( v24 == v11->_Mypair._Myval2._Myval2._Myhead || operator<(&userID, &v24->_Myval.first) )
  {
    v35.first._Ptr = (std::_Tree_node<std::pair<AgControllerUID const ,FighterOperationMapper>,void *> *)&userID;
    v26 = std::_Tree_comp_alloc<std::_Tmap_traits<AgControllerUID,FighterOperationMapper,std::less<AgControllerUID>,std::allocator<std::pair<AgControllerUID const,FighterOperationMapper>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<AgControllerUID const &>,std::tuple<>>(
            v11,
            v9,
            (std::tuple<AgControllerUID const &> *)&v35,
            v10);
    std::_Tree<std::_Tmap_traits<AgControllerUID,FighterOperationMapper,std::less<AgControllerUID>,std::allocator<std::pair<AgControllerUID const,FighterOperationMapper>>,0>>::_Insert_hint<std::pair<AgControllerUID const,FighterOperationMapper> &,std::_Tree_node<std::pair<AgControllerUID const,FighterOperationMapper>,void *> *>(
      v11,
      &v35.first,
      (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgControllerUID const ,FighterOperationMapper> > > >)v24,
      &v26->_Myval,
      v26);
    v24 = v35.first._Ptr;
  }
  pdata[5] = v24->_Myval.second.m_mapping[4];
  v27 = v11->_Mypair._Myval2._Myval2._Myhead;
  v28 = v11->_Mypair._Myval2._Myval2._Myhead->_Parent;
  while ( !v28->_Isnil )
  {
    if ( operator<(&v28->_Myval.first, &userID) )
    {
      v28 = v28->_Right;
    }
    else
    {
      v27 = v28;
      v28 = v28->_Left;
    }
  }
  if ( v27 == v11->_Mypair._Myval2._Myval2._Myhead || operator<(&userID, &v27->_Myval.first) )
  {
    v35.first._Ptr = (std::_Tree_node<std::pair<AgControllerUID const ,FighterOperationMapper>,void *> *)&userID;
    v29 = std::_Tree_comp_alloc<std::_Tmap_traits<AgControllerUID,FighterOperationMapper,std::less<AgControllerUID>,std::allocator<std::pair<AgControllerUID const,FighterOperationMapper>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<AgControllerUID const &>,std::tuple<>>(
            v11,
            v9,
            (std::tuple<AgControllerUID const &> *)&v35,
            v10);
    std::_Tree<std::_Tmap_traits<AgControllerUID,FighterOperationMapper,std::less<AgControllerUID>,std::allocator<std::pair<AgControllerUID const,FighterOperationMapper>>,0>>::_Insert_hint<std::pair<AgControllerUID const,FighterOperationMapper> &,std::_Tree_node<std::pair<AgControllerUID const,FighterOperationMapper>,void *> *>(
      v11,
      &v35.first,
      (std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<AgControllerUID const ,FighterOperationMapper> > > >)v27,
      &v29->_Myval,
      v29);
    v27 = v35.first._Ptr;
  }
  pdata[6] = v27->_Myval.second.m_mapping[5];
  std::map<AgControllerUID,FighterOperationMapper>::_Try_emplace<AgControllerUID const &,>(v11, &v35, &userID, v10);
  pdata[7] = v35.first._Ptr->_Myval.second.m_mapping[6];
  std::map<AgControllerUID,FighterOperationMapper>::_Try_emplace<AgControllerUID const &,>(v11, &v35, &userID, v30);
  pdata[8] = v35.first._Ptr->_Myval.second.m_mapping[7];
  std::map<AgControllerUID,FighterOperationMapper>::_Try_emplace<AgControllerUID const &,>(v11, &v35, &userID, v31);
  pdata[9] = v35.first._Ptr->_Myval.second.m_mapping[8];
  std::map<AgControllerUID,FighterOperationMapper>::_Try_emplace<AgControllerUID const &,>(v11, &v35, &userID, v32);
  pObject = ctx->m_movie.pObject;
  pdata[10] = v35.first._Ptr->_Myval.second.m_mapping[9];
  Scaleform::GFx::Movie::SetVariableArray(pObject, SA_Int, "ButtonConfig", 0, pdata, 0xBu, SV_Sticky);
  v34 = result;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_Float;
  result->mValue.IValue = 0;
  return v34;
}

Scaleform::GFx::Value *__fastcall extension::GFn_GetCharacterBankLength(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  extension::SoundList *v5; // rcx
  Scaleform::GFx::Value *v6; // rax

  v5 = (extension::SoundList *)(*(_QWORD *)&AppMain::pApp + 2196952i64);
  if ( *(_QWORD *)&AppMain::pApp == -2196952i64
    || v5->m_bankContents._Mypair._Myval2._Myfirst == *(extension::SoundList::BankContent **)(*(_QWORD *)&AppMain::pApp
                                                                                            + 2196960i64) )
  {
    result->mValue.IValue = 0;
  }
  else
  {
    result->mValue.IValue = extension::SoundList::count(v5);
  }
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  v6 = result;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_Float;
  return v6;
}

Scaleform::GFx::Value *__fastcall extension::GFn_GetCharacterRank(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  Scaleform::GFx::Value *v4; // r9
  Scaleform::GFx::Value *v5; // rax
  int Rank; // eax

  v4 = result;
  if ( argv->mValue.IValue < 61 )
  {
    Rank = SaveRecord_CharacterData::GetRank((SaveRecord_CharacterData *)(*(_QWORD *)&AppMain::pApp
                                                                        + 2202860i64
                                                                        + 32i64 * argv->mValue.IValue));
    v4->mValue.IValue = Rank;
    v4->pObjectInterface = 0i64;
    v5 = v4;
    v4->pPrev = (Scaleform::GFx::Value *)-1i64;
    v4->pNext = (Scaleform::GFx::Value *)-1i64;
  }
  else
  {
    result->pPrev = (Scaleform::GFx::Value *)-1i64;
    v5 = result;
    result->pNext = (Scaleform::GFx::Value *)-1i64;
    result->mValue.IValue = 0;
    result->pObjectInterface = 0i64;
  }
  v4->Type = VT_Float;
  return v5;
}

Scaleform::GFx::Value *__fastcall extension::GFn_GetCharacterRecord(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  __int64 IValue; // rcx
  __int64 v7; // r9
  int v8; // er8
  int v9; // edx
  int v10; // ecx
  int v11; // edx
  int v12; // eax
  int v13; // edx
  int v14; // ecx
  int v15; // eax
  int Rank; // eax
  Scaleform::GFx::Movie *pObject; // rcx
  __int64 v18; // r9
  __int64 v19; // r11
  const char *v20; // r10
  Scaleform::GFx::Value *v21; // rax
  int pdata[6]; // [rsp+48h] [rbp-40h] BYREF
  __int64 v23; // [rsp+60h] [rbp-28h]
  __int64 v24; // [rsp+68h] [rbp-20h]

  IValue = argv[1].mValue.IValue;
  v7 = 32 * IValue;
  v8 = *(_DWORD *)(32 * IValue + *(_QWORD *)&AppMain::pApp + 2202888);
  pdata[0] = *(_DWORD *)(v7 + *(_QWORD *)&AppMain::pApp + 2202864)
           + *(_DWORD *)(v7 + *(_QWORD *)&AppMain::pApp + 2202872);
  pdata[1] = *(_DWORD *)(32 * (IValue + 68840) + *(_QWORD *)&AppMain::pApp);
  pdata[2] = *(_DWORD *)(32 * IValue + *(_QWORD *)&AppMain::pApp + 2202884);
  v9 = __ROL4__(1, 1);
  v10 = ((v8 & 1) != 0) + 1;
  if ( (v9 & v8) == 0 )
    v10 = (v8 & 1) != 0;
  v11 = __ROL4__(v9, 1);
  v12 = v10 + 1;
  if ( (v11 & v8) == 0 )
    v12 = v10;
  v13 = __ROL4__(v11, 1);
  v14 = v12 + 1;
  if ( (v13 & v8) == 0 )
    v14 = v12;
  v15 = v14 + 1;
  if ( (__ROL4__(v13, 1) & v8) == 0 )
    v15 = v14;
  pdata[3] = (int)(float)((float)((float)((float)v15 / 5.0) * 100.0) * 100.0);
  Rank = SaveRecord_CharacterData::GetRank((SaveRecord_CharacterData *)(v7 + *(_QWORD *)&AppMain::pApp + 2202860i64));
  pObject = ctx->m_movie.pObject;
  pdata[4] = Rank;
  pdata[5] = *(_DWORD *)(v18 + v19 + 2202868) + *(_DWORD *)(v18 + v19 + 2202876);
  v23 = 0i64;
  v24 = 0i64;
  Scaleform::GFx::Movie::SetVariableArray(pObject, SA_Int, v20, 0, pdata, 0xAu, SV_Sticky);
  v21 = result;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_Float;
  result->mValue.IValue = 0;
  return v21;
}

Scaleform::GFx::Value *__fastcall extension::GFn_GetCharacterSoundName(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  extension::exsound_detail::SoundNameRegistry::NameBuffer *m_ptr; // rdi
  extension::exsound_detail::SoundNameRegistry::NameBuffer *v6; // rcx
  extension::SoundHashKey resulta; // [rsp+50h] [rbp+18h] BYREF

  m_ptr = AppMain::Sound_GetName(*(AppMain **)&AppMain::pApp, &resulta, SoundList_1P, argv->mValue.IValue)->m_sharedBuffer.m_ptr;
  if ( m_ptr )
    m_ptr = (extension::exsound_detail::SoundNameRegistry::NameBuffer *)((char *)m_ptr + 24);
  v6 = resulta.m_sharedBuffer.m_ptr;
  if ( resulta.m_sharedBuffer.m_ptr
    && _InterlockedExchangeAdd64(
         (volatile signed __int64 *)&resulta.m_sharedBuffer.m_ptr->m_refCount.m_ptr->m_sharedCount,
         0xFFFFFFFFFFFFFFFFui64) == 1 )
  {
    ((void (__fastcall *)(extension::exsound_detail::SoundNameRegistry::NameBuffer *, __int64))v6->~RefCountableWeakSupportBase)(
      v6,
      1i64);
  }
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = 6;
  result->mValue.pString = (const char *)m_ptr;
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_GetDevMode(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  Scaleform::GFx::Value *v4; // rax

  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  v4 = result;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_Int64;
  result->mValue.BValue = 1;
  return v4;
}

Scaleform::GFx::Value *__fastcall extension::GFn_GetDisplayOptionParamArray(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  extension::GFXIMovieContext *v4; // r15
  __int64 v5; // r14
  int v6; // esi
  int v7; // er13
  signed int count; // edi
  unsigned int m_width; // edx
  const AgDisplayMode *v10; // rax
  char *v11; // rbx
  AgDisplayMode *v12; // r15
  unsigned int v13; // er12
  unsigned int NumModes; // er12
  signed int v15; // edi
  char *v16; // rbx
  int v17; // ebx
  Scaleform::GFx::Value *v18; // r15
  AgDisplay *m_ptr; // rdi
  AgReferenceCount *m_ref; // rbx
  int v21; // esi
  AgDisplayMode v23; // [rsp+40h] [rbp-C0h] BYREF
  int v24; // [rsp+50h] [rbp-B0h]
  AgDisplayMode v25; // [rsp+58h] [rbp-A8h] BYREF
  AgPointer<AgDisplay> resulta; // [rsp+68h] [rbp-98h] BYREF
  extension::GFXIMovieContext *v27; // [rsp+78h] [rbp-88h]
  char *v28; // [rsp+80h] [rbp-80h]
  Scaleform::GFx::Value *v29; // [rsp+88h] [rbp-78h]
  Scaleform::GFx::Value val; // [rsp+90h] [rbp-70h] BYREF
  __int64 v31; // [rsp+C0h] [rbp-40h]
  Scaleform::GFx::Value *v32; // [rsp+C8h] [rbp-38h]
  int v33[4]; // [rsp+D0h] [rbp-30h] BYREF
  char pdata[24]; // [rsp+E0h] [rbp-20h] BYREF
  char v35; // [rsp+F8h] [rbp-8h] BYREF
  char ptr[24]; // [rsp+680h] [rbp+580h] BYREF
  char v37; // [rsp+698h] [rbp+598h] BYREF

  v31 = -2i64;
  v4 = ctx;
  v27 = ctx;
  v29 = result;
  v32 = result;
  v24 = 0;
  v5 = *(_QWORD *)&AppMain::pApp;
  AgDisplayManager::getDisplayByIndex((AgDisplayManager *)AgSingleton<AgDisplayManager>::ms_instance, &resulta, 0);
  v6 = 0;
  `eh vector constructor iterator'(
    ptr,
    0x30ui64,
    0x1Eui64,
    (void (__fastcall *)(void *))Scaleform::GFx::Value::Value,
    (void (__fastcall *)(void *))Scaleform::GFx::Value::~Value);
  AgDisplay::getNativeMode(resulta.m_ptr, &v25);
  v7 = 0;
  count = 0;
  m_width = v25.m_width;
  v10 = fixedAspectRatioModes_51;
  do
  {
    if ( v10->m_width >= v25.m_width >> 2 )
      break;
    ++v7;
    ++v10;
  }
  while ( (__int64)v10 < (__int64)&fixedAspectRatioModes_51[23] );
  if ( v7 < 23 )
  {
    v11 = &v37;
    v12 = (AgDisplayMode *)&fixedAspectRatioModes_51[v7];
    while ( 1 )
    {
      v23 = *v12;
      v13 = v23.m_width;
      if ( v23.m_width > m_width || v23.m_height > v25.m_height )
        break;
      v28 = (char *)(0x140000000i64 + 10i64 * count + 11299424);
      sprintf(v28, "%dX%d", v23.m_width, v23.m_height);
      if ( (*(_DWORD *)v11 & 0x40) != 0 )
      {
        Scaleform::GFx::Value::ObjectInterface::ObjectRelease(
          *((Scaleform::GFx::Value::ObjectInterface **)v11 - 1),
          (Scaleform::GFx::Value *)(v11 - 24),
          *((void **)v11 + 1));
        *((_QWORD *)v11 - 1) = 0i64;
      }
      *(_DWORD *)v11 = 6;
      *((_QWORD *)v11 + 1) = v28;
      if ( !*(_DWORD *)(v5 + 2197464) && v13 == *(_DWORD *)(v5 + 2197440) && v23.m_height == *(_DWORD *)(v5 + 2197452) )
        v6 = count;
      ++count;
      ++v12;
      v11 += 48;
      if ( count + v7 >= 23 )
        break;
      m_width = v25.m_width;
    }
    v4 = v27;
  }
  Scaleform::GFx::Movie::SetVariableArray(
    v4->m_movie.pObject,
    SA_Value,
    "SameAspectDisplayModes",
    0,
    ptr,
    count,
    SV_Sticky);
  `eh vector constructor iterator'(
    pdata,
    0x30ui64,
    0x1Eui64,
    (void (__fastcall *)(void *))Scaleform::GFx::Value::Value,
    (void (__fastcall *)(void *))Scaleform::GFx::Value::~Value);
  NumModes = AgDisplay::getNumModes(resulta.m_ptr);
  v15 = 0;
  if ( NumModes )
  {
    v16 = &v35;
    do
    {
      if ( v15 >= 30 )
        break;
      AgDisplay::getMode(resulta.m_ptr, &v23, v15);
      sprintf(extension::all_res[v15], "%dX%d", v23.m_width, v23.m_height);
      if ( (*(_DWORD *)v16 & 0x40) != 0 )
      {
        Scaleform::GFx::Value::ObjectInterface::ObjectRelease(
          *((Scaleform::GFx::Value::ObjectInterface **)v16 - 1),
          (Scaleform::GFx::Value *)(v16 - 24),
          *((void **)v16 + 1));
        *((_QWORD *)v16 - 1) = 0i64;
      }
      *(_DWORD *)v16 = 6;
      *((_QWORD *)v16 + 1) = extension::all_res[v15];
      if ( *(_DWORD *)(v5 + 2197464) == 1
        && v23.m_width == *(_DWORD *)(v5 + 2197444)
        && v23.m_height == *(_DWORD *)(v5 + 2197456) )
      {
        v6 = v15;
      }
      ++v15;
      v16 += 48;
    }
    while ( v15 < NumModes );
    v4 = v27;
  }
  Scaleform::GFx::Movie::SetVariableArray(
    v4->m_movie.pObject,
    SA_Value,
    "AllDisplayModes",
    0,
    pdata,
    NumModes,
    SV_Sticky);
  `eh vector constructor iterator'(
    &val,
    0x30ui64,
    1ui64,
    (void (__fastcall *)(void *))Scaleform::GFx::Value::Value,
    (void (__fastcall *)(void *))Scaleform::GFx::Value::~Value);
  sprintf(extension::native_res, "%dX%d", v25.m_width, v25.m_height);
  if ( (val.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(val.pObjectInterface, &val, val.mValue.pStringManaged);
    val.pObjectInterface = 0i64;
  }
  val.Type = 6;
  val.mValue.pString = extension::native_res;
  v17 = 0;
  if ( *(_DWORD *)(v5 + 2197464) != 2 )
    v17 = v6;
  Scaleform::GFx::Movie::SetVariableArray(v4->m_movie.pObject, SA_Value, "NativeDisplayModes", 0, &val, 1u, SV_Sticky);
  v33[0] = *(_DWORD *)(v5 + 2197432);
  v33[1] = *(unsigned __int8 *)(v5 + 2197436);
  v33[2] = *(_DWORD *)(v5 + 2197464);
  v33[3] = v17;
  Scaleform::GFx::Movie::SetVariableArray(v4->m_movie.pObject, SA_Int, "Display_Option", 0, v33, 4u, SV_Sticky);
  v18 = v29;
  v29->pPrev = (Scaleform::GFx::Value *)-1i64;
  v18->pNext = (Scaleform::GFx::Value *)-1i64;
  v18->pObjectInterface = 0i64;
  v18->Type = VT_Float;
  v18->mValue.IValue = 0;
  v24 = 1;
  `eh vector destructor iterator'(&val, 0x30ui64, 1ui64, (void (__fastcall *)(void *))Scaleform::GFx::Value::~Value);
  `eh vector destructor iterator'(pdata, 0x30ui64, 0x1Eui64, (void (__fastcall *)(void *))Scaleform::GFx::Value::~Value);
  `eh vector destructor iterator'(ptr, 0x30ui64, 0x1Eui64, (void (__fastcall *)(void *))Scaleform::GFx::Value::~Value);
  m_ptr = resulta.m_ptr;
  resulta.m_ptr = 0i64;
  m_ref = resulta.m_ref;
  if ( resulta.m_ref )
  {
    resulta.m_ref = 0i64;
    v21 = 0;
    if ( !AgAtomicDecrement(&m_ref->m_strongCount) )
    {
      if ( !AgAtomicDecrement(&m_ref->m_weakCount) )
        v21 = 1;
      m_ref->m_data = 0i64;
      if ( m_ptr )
      {
        AgDisplay::~AgDisplay(m_ptr);
        operator delete(m_ptr, 0x70ui64);
      }
      if ( v21 )
        AgReferenceCount::operator delete(m_ref);
    }
  }
  return v18;
}

Scaleform::GFx::Value *__fastcall extension::GFn_GetDownloadReplayData(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  AppMain *v5; // rsi
  int IValue; // ebx
  BattleReplay *ReplaySaveDataSortDownLoadTime; // rax
  BattleReplay *v8; // rbx
  __int64 order; // r14
  __int64 v10; // r15
  __int64 v11; // r12
  __int64 v12; // r13
  char **Name; // rsi
  char **v14; // rsi
  char **v15; // rsi
  int grade; // esi
  int v17; // esi
  int v18; // esi
  int titleId; // esi
  int v20; // esi
  int v21; // esi
  int characterId; // esi
  int v23; // esi
  int v24; // esi
  char **v25; // rsi
  char **v26; // rsi
  char **v27; // rsi
  int v28; // esi
  int v29; // esi
  int v30; // esi
  int v31; // esi
  int v32; // esi
  int v33; // esi
  int v34; // esi
  int v35; // esi
  int v36; // esi
  int m_GameMode; // esi
  int m_GameRule; // esi
  int v39; // esi
  __int64 v40; // r14
  tm *v41; // rax
  tm *v42; // rax
  __int64 m_UploadDate; // rax
  Scaleform::GFx::Value::ValueUnion v44; // xmm6_8
  char **v45; // rsi
  bool v46; // si
  int m_Ver; // esi
  int v48; // esi
  int v49; // esi
  int v50; // esi
  int v51; // esi
  int v52; // esi
  int v53; // ebx
  void (__fastcall *destructor)(void *); // [rsp+28h] [rbp-E0h]
  void (__fastcall *destructora)(void *); // [rsp+28h] [rbp-E0h]
  __int64 count; // [rsp+30h] [rbp-D8h]
  __int64 setType; // [rsp+38h] [rbp-D0h]
  __int64 v59; // [rsp+40h] [rbp-C8h]
  int repno; // [rsp+4Ch] [rbp-BCh] BYREF
  int v61; // [rsp+50h] [rbp-B8h]
  int v62; // [rsp+54h] [rbp-B4h]
  __int64 ptime; // [rsp+58h] [rbp-B0h] BYREF
  char *ppathToVar; // [rsp+60h] [rbp-A8h]
  __int64 v65; // [rsp+68h] [rbp-A0h]
  extension::GFXIMovieContext *v66; // [rsp+70h] [rbp-98h]
  __int64 v67; // [rsp+78h] [rbp-90h]
  Scaleform::GFx::Value *v68; // [rsp+80h] [rbp-88h]
  Scaleform::GFx::Value ptr; // [rsp+88h] [rbp-80h] BYREF
  Scaleform::GFx::Value val; // [rsp+B8h] [rbp-50h] BYREF
  Scaleform::GFx::Value v71; // [rsp+E8h] [rbp-20h] BYREF
  Scaleform::GFx::Value v72; // [rsp+118h] [rbp+10h] BYREF
  Scaleform::GFx::Value v73; // [rsp+148h] [rbp+40h] BYREF
  Scaleform::GFx::Value v74; // [rsp+178h] [rbp+70h] BYREF
  Scaleform::GFx::Value v75; // [rsp+1A8h] [rbp+A0h] BYREF
  Scaleform::GFx::Value v76; // [rsp+1D8h] [rbp+D0h] BYREF
  Scaleform::GFx::Value v77; // [rsp+208h] [rbp+100h] BYREF
  Scaleform::GFx::Value v78; // [rsp+238h] [rbp+130h] BYREF
  Scaleform::GFx::Value v79; // [rsp+268h] [rbp+160h] BYREF
  Scaleform::GFx::Value v80; // [rsp+298h] [rbp+190h] BYREF
  Scaleform::GFx::Value v81; // [rsp+2C8h] [rbp+1C0h] BYREF
  Scaleform::GFx::Value v82; // [rsp+2F8h] [rbp+1F0h] BYREF
  Scaleform::GFx::Value v83; // [rsp+328h] [rbp+220h] BYREF
  Scaleform::GFx::Value v84; // [rsp+358h] [rbp+250h] BYREF
  Scaleform::GFx::Value v85; // [rsp+388h] [rbp+280h] BYREF
  Scaleform::GFx::Value v86; // [rsp+3B8h] [rbp+2B0h] BYREF
  Scaleform::GFx::Value v87; // [rsp+3E8h] [rbp+2E0h] BYREF
  Scaleform::GFx::Value v88; // [rsp+418h] [rbp+310h] BYREF
  Scaleform::GFx::Value v89; // [rsp+448h] [rbp+340h] BYREF
  Scaleform::GFx::Value v90; // [rsp+478h] [rbp+370h] BYREF
  Scaleform::GFx::Value v91; // [rsp+4A8h] [rbp+3A0h] BYREF
  Scaleform::GFx::Value v92; // [rsp+4D8h] [rbp+3D0h] BYREF
  Scaleform::GFx::Value v93; // [rsp+508h] [rbp+400h] BYREF
  Scaleform::GFx::Value v94; // [rsp+538h] [rbp+430h] BYREF
  Scaleform::GFx::Value v95; // [rsp+568h] [rbp+460h] BYREF
  Scaleform::GFx::Value v96; // [rsp+598h] [rbp+490h] BYREF
  Scaleform::GFx::Value v97; // [rsp+5C8h] [rbp+4C0h] BYREF
  Scaleform::GFx::Value v98; // [rsp+5F8h] [rbp+4F0h] BYREF
  Scaleform::GFx::Value v99; // [rsp+628h] [rbp+520h] BYREF
  Scaleform::GFx::Value v100; // [rsp+658h] [rbp+550h] BYREF
  Scaleform::GFx::Value v101; // [rsp+688h] [rbp+580h] BYREF
  Scaleform::GFx::Value v102; // [rsp+6B8h] [rbp+5B0h] BYREF
  Scaleform::GFx::Value v103; // [rsp+6E8h] [rbp+5E0h] BYREF
  Scaleform::GFx::Value v104; // [rsp+718h] [rbp+610h] BYREF
  Scaleform::GFx::Value v105; // [rsp+748h] [rbp+640h] BYREF
  Scaleform::GFx::Value v106; // [rsp+778h] [rbp+670h] BYREF
  Scaleform::GFx::Value v107; // [rsp+7A8h] [rbp+6A0h] BYREF
  Scaleform::GFx::Value v108; // [rsp+7D8h] [rbp+6D0h] BYREF

  v67 = -2i64;
  v66 = ctx;
  v68 = result;
  v5 = *(AppMain **)&AppMain::pApp;
  v65 = *(_QWORD *)&AppMain::pApp;
  IValue = argv->mValue.IValue;
  if ( (argv[1].Type & 0x40) != 0 )
    ppathToVar = (char *)*argv[1].mValue.pStringManaged;
  else
    ppathToVar = (char *)argv[1].mValue.pString;
  `eh vector constructor iterator'(
    &ptr,
    0x30ui64,
    0x28ui64,
    (void (__fastcall *)(void *))Scaleform::GFx::Value::Value,
    (void (__fastcall *)(void *))Scaleform::GFx::Value::~Value);
  repno = 0;
  ReplaySaveDataSortDownLoadTime = AppMain::GetReplaySaveDataSortDownLoadTime(v5, IValue, &repno);
  v8 = ReplaySaveDataSortDownLoadTime;
  if ( ReplaySaveDataSortDownLoadTime )
  {
    if ( ReplaySaveDataSortDownLoadTime->m_Download && ReplaySaveDataSortDownLoadTime->m_Date )
    {
      order = ReplaySaveDataSortDownLoadTime->m_UserInfo[0][0].order;
      v10 = ReplaySaveDataSortDownLoadTime->m_UserInfo[0][1].order;
      v11 = ReplaySaveDataSortDownLoadTime->m_UserInfo[0][2].order;
      v12 = ReplaySaveDataSortDownLoadTime->m_UserInfo[1][0].order;
      v61 = ReplaySaveDataSortDownLoadTime->m_UserInfo[1][1].order;
      v62 = ReplaySaveDataSortDownLoadTime->m_UserInfo[1][2].order;
      Name = SteamNameCache::getName(
               SteamNameCache::ms_instance,
               (CSteamID)ReplaySaveDataSortDownLoadTime->m_UserInfo[0][0].onlineId.data);
      if ( (ptr.Type & 0x40) != 0 )
      {
        Scaleform::GFx::Value::ObjectInterface::ObjectRelease(ptr.pObjectInterface, &ptr, ptr.mValue.pStringManaged);
        ptr.pObjectInterface = 0i64;
      }
      ptr.Type = 6;
      ptr.mValue.pString = (const char *)Name;
      v14 = SteamNameCache::getName(SteamNameCache::ms_instance, (CSteamID)v8->m_UserInfo[0][1].onlineId.data);
      if ( (val.Type & 0x40) != 0 )
      {
        Scaleform::GFx::Value::ObjectInterface::ObjectRelease(val.pObjectInterface, &val, val.mValue.pStringManaged);
        val.pObjectInterface = 0i64;
      }
      val.Type = 6;
      val.mValue.pString = (const char *)v14;
      v15 = SteamNameCache::getName(SteamNameCache::ms_instance, (CSteamID)v8->m_UserInfo[0][2].onlineId.data);
      if ( (v71.Type & 0x40) != 0 )
      {
        Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v71.pObjectInterface, &v71, v71.mValue.pStringManaged);
        v71.pObjectInterface = 0i64;
      }
      v71.Type = 6;
      v71.mValue.pString = (const char *)v15;
      grade = v8->m_UserInfo[0][0].grade;
      if ( (v72.Type & 0x40) != 0 )
      {
        Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v72.pObjectInterface, &v72, v72.mValue.pStringManaged);
        v72.pObjectInterface = 0i64;
      }
      v72.Type = VT_Float;
      v72.mValue.IValue = grade;
      v17 = v8->m_UserInfo[0][1].grade;
      if ( (v73.Type & 0x40) != 0 )
      {
        Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v73.pObjectInterface, &v73, v73.mValue.pStringManaged);
        v73.pObjectInterface = 0i64;
      }
      v73.Type = VT_Float;
      v73.mValue.IValue = v17;
      v18 = v8->m_UserInfo[0][2].grade;
      if ( (v74.Type & 0x40) != 0 )
      {
        Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v74.pObjectInterface, &v74, v74.mValue.pStringManaged);
        v74.pObjectInterface = 0i64;
      }
      v74.Type = VT_Float;
      v74.mValue.IValue = v18;
      titleId = v8->m_UserInfo[0][0].titleId;
      if ( (v75.Type & 0x40) != 0 )
      {
        Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v75.pObjectInterface, &v75, v75.mValue.pStringManaged);
        v75.pObjectInterface = 0i64;
      }
      v75.Type = VT_Float;
      v75.mValue.IValue = titleId;
      v20 = v8->m_UserInfo[0][1].titleId;
      if ( (v76.Type & 0x40) != 0 )
      {
        Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v76.pObjectInterface, &v76, v76.mValue.pStringManaged);
        v76.pObjectInterface = 0i64;
      }
      v76.Type = VT_Float;
      v76.mValue.IValue = v20;
      v21 = v8->m_UserInfo[0][2].titleId;
      if ( (v77.Type & 0x40) != 0 )
      {
        Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v77.pObjectInterface, &v77, v77.mValue.pStringManaged);
        v77.pObjectInterface = 0i64;
      }
      v77.Type = VT_Float;
      v77.mValue.IValue = v21;
      characterId = v8->m_UserInfo[0][order].characterId;
      if ( (v78.Type & 0x40) != 0 )
      {
        Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v78.pObjectInterface, &v78, v78.mValue.pStringManaged);
        v78.pObjectInterface = 0i64;
      }
      v78.Type = VT_Float;
      v78.mValue.IValue = characterId;
      v23 = v8->m_UserInfo[0][v10].characterId;
      if ( (v79.Type & 0x40) != 0 )
      {
        Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v79.pObjectInterface, &v79, v79.mValue.pStringManaged);
        v79.pObjectInterface = 0i64;
      }
      v79.Type = VT_Float;
      v79.mValue.IValue = v23;
      v24 = v8->m_UserInfo[0][v11].characterId;
      if ( (v80.Type & 0x40) != 0 )
      {
        Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v80.pObjectInterface, &v80, v80.mValue.pStringManaged);
        v80.pObjectInterface = 0i64;
      }
      v80.Type = VT_Float;
      v80.mValue.IValue = v24;
      v25 = SteamNameCache::getName(SteamNameCache::ms_instance, (CSteamID)v8->m_UserInfo[1][0].onlineId.data);
      if ( (v81.Type & 0x40) != 0 )
      {
        Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v81.pObjectInterface, &v81, v81.mValue.pStringManaged);
        v81.pObjectInterface = 0i64;
      }
      v81.Type = 6;
      v81.mValue.pString = (const char *)v25;
      v26 = SteamNameCache::getName(SteamNameCache::ms_instance, (CSteamID)v8->m_UserInfo[1][1].onlineId.data);
      if ( (v82.Type & 0x40) != 0 )
      {
        Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v82.pObjectInterface, &v82, v82.mValue.pStringManaged);
        v82.pObjectInterface = 0i64;
      }
      v82.Type = 6;
      v82.mValue.pString = (const char *)v26;
      v27 = SteamNameCache::getName(SteamNameCache::ms_instance, (CSteamID)v8->m_UserInfo[1][2].onlineId.data);
      if ( (v83.Type & 0x40) != 0 )
      {
        Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v83.pObjectInterface, &v83, v83.mValue.pStringManaged);
        v83.pObjectInterface = 0i64;
      }
      v83.Type = 6;
      v83.mValue.pString = (const char *)v27;
      v28 = v8->m_UserInfo[1][0].grade;
      if ( (v84.Type & 0x40) != 0 )
      {
        Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v84.pObjectInterface, &v84, v84.mValue.pStringManaged);
        v84.pObjectInterface = 0i64;
      }
      v84.Type = VT_Float;
      v84.mValue.IValue = v28;
      v29 = v8->m_UserInfo[1][1].grade;
      if ( (v85.Type & 0x40) != 0 )
      {
        Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v85.pObjectInterface, &v85, v85.mValue.pStringManaged);
        v85.pObjectInterface = 0i64;
      }
      v85.Type = VT_Float;
      v85.mValue.IValue = v29;
      v30 = v8->m_UserInfo[1][2].grade;
      if ( (v86.Type & 0x40) != 0 )
      {
        Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v86.pObjectInterface, &v86, v86.mValue.pStringManaged);
        v86.pObjectInterface = 0i64;
      }
      v86.Type = VT_Float;
      v86.mValue.IValue = v30;
      v31 = v8->m_UserInfo[1][0].titleId;
      if ( (v87.Type & 0x40) != 0 )
      {
        Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v87.pObjectInterface, &v87, v87.mValue.pStringManaged);
        v87.pObjectInterface = 0i64;
      }
      v87.Type = VT_Float;
      v87.mValue.IValue = v31;
      v32 = v8->m_UserInfo[1][1].titleId;
      if ( (v88.Type & 0x40) != 0 )
      {
        Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v88.pObjectInterface, &v88, v88.mValue.pStringManaged);
        v88.pObjectInterface = 0i64;
      }
      v88.Type = VT_Float;
      v88.mValue.IValue = v32;
      v33 = v8->m_UserInfo[1][2].titleId;
      if ( (v89.Type & 0x40) != 0 )
      {
        Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v89.pObjectInterface, &v89, v89.mValue.pStringManaged);
        v89.pObjectInterface = 0i64;
      }
      v89.Type = VT_Float;
      v89.mValue.IValue = v33;
      v34 = v8->m_UserInfo[1][v12].characterId;
      if ( (v90.Type & 0x40) != 0 )
      {
        Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v90.pObjectInterface, &v90, v90.mValue.pStringManaged);
        v90.pObjectInterface = 0i64;
      }
      v90.Type = VT_Float;
      v90.mValue.IValue = v34;
      v35 = v8->m_UserInfo[1][v61].characterId;
      if ( (v91.Type & 0x40) != 0 )
      {
        Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v91.pObjectInterface, &v91, v91.mValue.pStringManaged);
        v91.pObjectInterface = 0i64;
      }
      v91.Type = VT_Float;
      v91.mValue.IValue = v35;
      v36 = v8->m_UserInfo[1][v62].characterId;
      if ( (v92.Type & 0x40) != 0 )
      {
        Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v92.pObjectInterface, &v92, v92.mValue.pStringManaged);
        v92.pObjectInterface = 0i64;
      }
      v92.Type = VT_Float;
      v92.mValue.IValue = v36;
      m_GameMode = v8->m_GameMode;
      if ( (v93.Type & 0x40) != 0 )
      {
        Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v93.pObjectInterface, &v93, v93.mValue.pStringManaged);
        v93.pObjectInterface = 0i64;
      }
      v93.Type = VT_Float;
      v93.mValue.IValue = m_GameMode;
      m_GameRule = v8->m_GameRule;
      if ( (v94.Type & 0x40) != 0 )
      {
        Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v94.pObjectInterface, &v94, v94.mValue.pStringManaged);
        v94.pObjectInterface = 0i64;
      }
      v94.Type = VT_Float;
      v94.mValue.IValue = m_GameRule;
      v39 = v8->m_Result - 1;
      if ( (v95.Type & 0x40) != 0 )
      {
        Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v95.pObjectInterface, &v95, v95.mValue.pStringManaged);
        v95.pObjectInterface = 0i64;
      }
      v95.Type = VT_Float;
      v95.mValue.IValue = v39;
      if ( (v96.Type & 0x40) != 0 )
      {
        Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v96.pObjectInterface, &v96, v96.mValue.pStringManaged);
        v96.pObjectInterface = 0i64;
      }
      v96.Type = VT_Float;
      v40 = repno;
      v96.mValue.IValue = repno;
      ptime = v8->m_Date;
      v41 = localtime64(&ptime);
      LODWORD(destructor) = v41->tm_mday;
      sprintf(
        extension::stringBuff,
        "%04d-%02d-%02dT%02d:%02d:%02d",
        (unsigned int)(v41->tm_year + 1900),
        (unsigned int)(v41->tm_mon + 1),
        destructor,
        v41->tm_hour,
        v41->tm_min,
        v41->tm_sec);
      sprintf(extension::stringBuff_2[0], "%.10s", extension::stringBuff);
      if ( (v97.Type & 0x40) != 0 )
      {
        Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v97.pObjectInterface, &v97, v97.mValue.pStringManaged);
        v97.pObjectInterface = 0i64;
      }
      v97.Type = 6;
      v97.mValue.pString = extension::stringBuff_2[0];
      ptime = v8->m_UploadDate;
      v42 = localtime64(&ptime);
      LODWORD(v59) = v42->tm_sec;
      LODWORD(setType) = v42->tm_min;
      LODWORD(count) = v42->tm_hour;
      LODWORD(destructora) = v42->tm_mday;
      sprintf(
        extension::stringBuff,
        "%04d-%02d-%02dT%02d:%02d:%02d",
        (unsigned int)(v42->tm_year + 1900),
        (unsigned int)(v42->tm_mon + 1),
        destructora,
        count,
        setType,
        v59);
      sprintf(extension::stringBuff_2[1], "%.10s", extension::stringBuff);
      m_UploadDate = v8->m_UploadDate;
      v44.NValue = (double)(int)m_UploadDate;
      if ( m_UploadDate < 0 )
        v44.NValue = v44.NValue + 1.844674407370955e19;
      if ( (v98.Type & 0x40) != 0 )
      {
        Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v98.pObjectInterface, &v98, v98.mValue.pStringManaged);
        v98.pObjectInterface = 0i64;
      }
      v98.Type = 5;
      v98.mValue = v44;
      if ( (v99.Type & 0x40) != 0 )
      {
        Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v99.pObjectInterface, &v99, v99.mValue.pStringManaged);
        v99.pObjectInterface = 0i64;
      }
      v99.Type = 6;
      v99.mValue.pString = extension::stringBuff_2[1];
      v45 = SteamNameCache::getName(SteamNameCache::ms_instance, (CSteamID)v8->m_UploadOnlineId.data);
      if ( (v100.Type & 0x40) != 0 )
      {
        Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v100.pObjectInterface, &v100, v100.mValue.pStringManaged);
        v100.pObjectInterface = 0i64;
      }
      v100.Type = 6;
      v100.mValue.pString = (const char *)v45;
      v46 = *(_BYTE *)(1184 * v40 + v65 + 2389336) != 0;
      if ( (v101.Type & 0x40) != 0 )
      {
        Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v101.pObjectInterface, &v101, v101.mValue.pStringManaged);
        v101.pObjectInterface = 0i64;
      }
      v101.Type = VT_Int64;
      v101.mValue.BValue = v46;
      m_Ver = v8->m_Ver;
      if ( (v102.Type & 0x40) != 0 )
      {
        Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v102.pObjectInterface, &v102, v102.mValue.pStringManaged);
        v102.pObjectInterface = 0i64;
      }
      v102.Type = VT_Float;
      v102.mValue.IValue = m_Ver;
      v48 = v8->m_UserInfo[0][0].disconnectLevel - 3;
      if ( (v103.Type & 0x40) != 0 )
      {
        Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v103.pObjectInterface, &v103, v103.mValue.pStringManaged);
        v103.pObjectInterface = 0i64;
      }
      v103.Type = VT_Float;
      v103.mValue.IValue = v48;
      v49 = v8->m_UserInfo[0][1].disconnectLevel - 3;
      if ( (v104.Type & 0x40) != 0 )
      {
        Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v104.pObjectInterface, &v104, v104.mValue.pStringManaged);
        v104.pObjectInterface = 0i64;
      }
      v104.Type = VT_Float;
      v104.mValue.IValue = v49;
      v50 = v8->m_UserInfo[0][2].disconnectLevel - 3;
      if ( (v105.Type & 0x40) != 0 )
      {
        Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v105.pObjectInterface, &v105, v105.mValue.pStringManaged);
        v105.pObjectInterface = 0i64;
      }
      v105.Type = VT_Float;
      v105.mValue.IValue = v50;
      v51 = v8->m_UserInfo[1][0].disconnectLevel - 3;
      if ( (v106.Type & 0x40) != 0 )
      {
        Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v106.pObjectInterface, &v106, v106.mValue.pStringManaged);
        v106.pObjectInterface = 0i64;
      }
      v106.Type = VT_Float;
      v106.mValue.IValue = v51;
      v52 = v8->m_UserInfo[1][1].disconnectLevel - 3;
      if ( (v107.Type & 0x40) != 0 )
      {
        Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v107.pObjectInterface, &v107, v107.mValue.pStringManaged);
        v107.pObjectInterface = 0i64;
      }
      v107.Type = VT_Float;
      v107.mValue.IValue = v52;
      v53 = v8->m_UserInfo[1][2].disconnectLevel - 3;
      if ( (v108.Type & 0x40) != 0 )
      {
        Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v108.pObjectInterface, &v108, v108.mValue.pStringManaged);
        v108.pObjectInterface = 0i64;
      }
      v108.Type = VT_Float;
      v108.mValue.IValue = v53;
      Scaleform::GFx::Movie::SetVariableArray(v66->m_movie.pObject, SA_Value, ppathToVar, 0, &ptr, 0x28u, SV_Sticky);
      result->pPrev = (Scaleform::GFx::Value *)-1i64;
      result->pNext = (Scaleform::GFx::Value *)-1i64;
      result->pObjectInterface = 0i64;
      result->Type = VT_Int64;
      result->mValue.BValue = 1;
    }
    else
    {
      result->pPrev = (Scaleform::GFx::Value *)-1i64;
      result->pNext = (Scaleform::GFx::Value *)-1i64;
      result->pObjectInterface = 0i64;
      result->Type = VT_Int64;
      result->mValue.BValue = 0;
    }
  }
  else
  {
    result->pPrev = (Scaleform::GFx::Value *)-1i64;
    result->pNext = (Scaleform::GFx::Value *)-1i64;
    result->pObjectInterface = 0i64;
    result->Type = VT_Int64;
    result->mValue.BValue = 0;
  }
  `eh vector destructor iterator'(&ptr, 0x30ui64, 0x28ui64, (void (__fastcall *)(void *))Scaleform::GFx::Value::~Value);
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_GetFightingBonus(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  AppMain *v5; // rsi
  __int64 IValue; // rbp
  int Bonus; // edi
  Scaleform::GFx::Value *v8; // rax

  v5 = *(AppMain **)&AppMain::pApp;
  IValue = argv->mValue.IValue;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_None;
  Bonus = AppMain::ST_FightingListGetBonus(v5, IValue, (__int64)argv, argc);
  if ( (result->Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(
      result->pObjectInterface,
      result,
      result->mValue.pStringManaged);
    result->pObjectInterface = 0i64;
  }
  result->Type = VT_Float;
  result->mValue.IValue = Bonus;
  v8 = result;
  if ( Bonus != -1 )
    v5->SaveDataMain.GameData.m_FightingList[IValue].m_FightBonus = 1;
  return v8;
}

Scaleform::GFx::Value *__fastcall extension::GFn_GetFightingList(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  __int64 v6; // rsi
  const char *pString; // r14
  __int64 IValue; // rbx
  __int64 v9; // rbx
  char **Name; // rsi
  int v11; // esi
  tm *v12; // rax
  int v13; // esi
  int v14; // esi
  int v15; // esi
  int v16; // esi
  int v17; // esi
  int v18; // esi
  int v19; // esi
  int v20; // esi
  int v21; // esi
  bool v22; // si
  int v23; // esi
  int v24; // esi
  int v25; // esi
  int v26; // esi
  int v27; // ebx
  void (__fastcall *destructor)(void *); // [rsp+20h] [rbp-E0h]
  __int64 ptime[3]; // [rsp+48h] [rbp-B8h] BYREF
  Scaleform::GFx::Value ptr; // [rsp+60h] [rbp-A0h] BYREF
  Scaleform::GFx::Value val; // [rsp+90h] [rbp-70h] BYREF
  Scaleform::GFx::Value v33; // [rsp+C0h] [rbp-40h] BYREF
  Scaleform::GFx::Value v34; // [rsp+F0h] [rbp-10h] BYREF
  Scaleform::GFx::Value v35; // [rsp+120h] [rbp+20h] BYREF
  Scaleform::GFx::Value v36; // [rsp+150h] [rbp+50h] BYREF
  Scaleform::GFx::Value v37; // [rsp+180h] [rbp+80h] BYREF
  Scaleform::GFx::Value v38; // [rsp+1B0h] [rbp+B0h] BYREF
  Scaleform::GFx::Value v39; // [rsp+1E0h] [rbp+E0h] BYREF
  Scaleform::GFx::Value v40; // [rsp+210h] [rbp+110h] BYREF
  Scaleform::GFx::Value v41; // [rsp+240h] [rbp+140h] BYREF
  Scaleform::GFx::Value v42; // [rsp+270h] [rbp+170h] BYREF
  Scaleform::GFx::Value v43; // [rsp+2A0h] [rbp+1A0h] BYREF
  Scaleform::GFx::Value v44; // [rsp+2D0h] [rbp+1D0h] BYREF
  Scaleform::GFx::Value v45; // [rsp+300h] [rbp+200h] BYREF
  Scaleform::GFx::Value v46; // [rsp+330h] [rbp+230h] BYREF
  Scaleform::GFx::Value v47; // [rsp+360h] [rbp+260h] BYREF
  Scaleform::GFx::Value v48; // [rsp+390h] [rbp+290h] BYREF

  ptime[1] = -2i64;
  ptime[2] = (__int64)result;
  v6 = *(_QWORD *)&AppMain::pApp;
  if ( (argv->Type & 0x40) != 0 )
    pString = *argv->mValue.pStringManaged;
  else
    pString = argv->mValue.pString;
  IValue = argv[1].mValue.IValue;
  `eh vector constructor iterator'(
    &ptr,
    0x30ui64,
    0x1Eui64,
    (void (__fastcall *)(void *))Scaleform::GFx::Value::Value,
    (void (__fastcall *)(void *))Scaleform::GFx::Value::~Value);
  v9 = v6 + 40 * (IValue + 57212);
  if ( *(_QWORD *)v9 )
  {
    Name = SteamNameCache::getName(SteamNameCache::ms_instance, *(CSteamID *)v9);
    if ( (ptr.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(ptr.pObjectInterface, &ptr, ptr.mValue.pStringManaged);
      ptr.pObjectInterface = 0i64;
    }
    ptr.Type = 6;
    ptr.mValue.pString = (const char *)Name;
    v11 = *(unsigned __int8 *)(v9 + 16);
    if ( (val.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(val.pObjectInterface, &val, val.mValue.pStringManaged);
      val.pObjectInterface = 0i64;
    }
    val.Type = VT_Float;
    val.mValue.IValue = v11;
    ptime[0] = *(_QWORD *)(v9 + 8);
    v12 = localtime64(ptime);
    LODWORD(destructor) = v12->tm_mday;
    sprintf(
      extension::stringBuff,
      "%04d-%02d-%02dT%02d:%02d:%02d",
      (unsigned int)(v12->tm_year + 1900),
      (unsigned int)(v12->tm_mon + 1),
      destructor,
      v12->tm_hour,
      v12->tm_min,
      v12->tm_sec);
    sprintf(extension::stringBuff, "%.10s", extension::stringBuff);
    if ( (v33.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v33.pObjectInterface, &v33, v33.mValue.pStringManaged);
      v33.pObjectInterface = 0i64;
    }
    v33.Type = 6;
    v33.mValue.pString = extension::stringBuff;
    v13 = *(unsigned __int8 *)(v9 + 24);
    if ( (v34.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v34.pObjectInterface, &v34, v34.mValue.pStringManaged);
      v34.pObjectInterface = 0i64;
    }
    v34.Type = VT_Float;
    v34.mValue.IValue = v13;
    v14 = *(unsigned __int8 *)(v9 + 25);
    if ( (v35.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v35.pObjectInterface, &v35, v35.mValue.pStringManaged);
      v35.pObjectInterface = 0i64;
    }
    v35.Type = VT_Float;
    v35.mValue.IValue = v14;
    v15 = *(unsigned __int8 *)(v9 + 17);
    if ( (v36.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v36.pObjectInterface, &v36, v36.mValue.pStringManaged);
      v36.pObjectInterface = 0i64;
    }
    v36.Type = VT_Float;
    v36.mValue.IValue = v15;
    v16 = *(unsigned __int8 *)(v9 + 18);
    if ( (v37.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v37.pObjectInterface, &v37, v37.mValue.pStringManaged);
      v37.pObjectInterface = 0i64;
    }
    v37.Type = VT_Float;
    v37.mValue.IValue = v16;
    v17 = *(unsigned __int8 *)(v9 + 19);
    if ( (v38.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v38.pObjectInterface, &v38, v38.mValue.pStringManaged);
      v38.pObjectInterface = 0i64;
    }
    v38.Type = VT_Float;
    v38.mValue.IValue = v17;
    v18 = *(unsigned __int8 *)(v9 + 20);
    if ( (v39.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v39.pObjectInterface, &v39, v39.mValue.pStringManaged);
      v39.pObjectInterface = 0i64;
    }
    v39.Type = VT_Float;
    v39.mValue.IValue = v18;
    v19 = *(unsigned __int8 *)(v9 + 21);
    if ( (v40.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v40.pObjectInterface, &v40, v40.mValue.pStringManaged);
      v40.pObjectInterface = 0i64;
    }
    v40.Type = VT_Float;
    v40.mValue.IValue = v19;
    v20 = *(unsigned __int8 *)(v9 + 22);
    if ( (v41.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v41.pObjectInterface, &v41, v41.mValue.pStringManaged);
      v41.pObjectInterface = 0i64;
    }
    v41.Type = VT_Float;
    v41.mValue.IValue = v20;
    v21 = *(unsigned __int8 *)(v9 + 23) - 1;
    if ( (v42.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v42.pObjectInterface, &v42, v42.mValue.pStringManaged);
      v42.pObjectInterface = 0i64;
    }
    v42.Type = VT_Float;
    v42.mValue.IValue = v21;
    v22 = *(_BYTE *)(v9 + 30) != 0;
    if ( (v43.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v43.pObjectInterface, &v43, v43.mValue.pStringManaged);
      v43.pObjectInterface = 0i64;
    }
    v43.Type = VT_Int64;
    v43.mValue.BValue = v22;
    v23 = *(unsigned __int8 *)(v9 + 26);
    if ( (v44.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v44.pObjectInterface, &v44, v44.mValue.pStringManaged);
      v44.pObjectInterface = 0i64;
    }
    v44.Type = VT_Float;
    v44.mValue.IValue = v23;
    v24 = *(unsigned __int8 *)(v9 + 27);
    if ( (v45.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v45.pObjectInterface, &v45, v45.mValue.pStringManaged);
      v45.pObjectInterface = 0i64;
    }
    v45.Type = VT_Float;
    v45.mValue.IValue = v24;
    v25 = *(unsigned __int8 *)(v9 + 28);
    if ( (v46.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v46.pObjectInterface, &v46, v46.mValue.pStringManaged);
      v46.pObjectInterface = 0i64;
    }
    v46.Type = VT_Float;
    v46.mValue.IValue = v25;
    v26 = *(unsigned __int8 *)(v9 + 29);
    if ( (v47.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v47.pObjectInterface, &v47, v47.mValue.pStringManaged);
      v47.pObjectInterface = 0i64;
    }
    v47.Type = VT_Float;
    v47.mValue.IValue = v26;
    v27 = *(unsigned __int8 *)(v9 + 32);
    if ( (v48.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v48.pObjectInterface, &v48, v48.mValue.pStringManaged);
      v48.pObjectInterface = 0i64;
    }
    v48.Type = VT_Float;
    v48.mValue.IValue = v27;
    Scaleform::GFx::Movie::SetVariableArray(ctx->m_movie.pObject, SA_Value, pString, 0, &ptr, 0x12u, SV_Sticky);
    result->pPrev = (Scaleform::GFx::Value *)-1i64;
    result->pNext = (Scaleform::GFx::Value *)-1i64;
    result->pObjectInterface = 0i64;
    result->Type = VT_Int64;
    result->mValue.BValue = 1;
  }
  else
  {
    result->pPrev = (Scaleform::GFx::Value *)-1i64;
    result->pNext = (Scaleform::GFx::Value *)-1i64;
    result->pObjectInterface = 0i64;
    result->Type = VT_Int64;
    result->mValue.BValue = 0;
  }
  `eh vector destructor iterator'(&ptr, 0x30ui64, 0x1Eui64, (void (__fastcall *)(void *))Scaleform::GFx::Value::~Value);
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_GetGalleryLock(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  unsigned __int64 UIValue; // rdx
  __int64 v5; // rax

  UIValue = argv->mValue.UIValue;
  v5 = *(_QWORD *)&AppMain::pApp;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_Int64;
  result->mValue.BValue = ((0x80000000 >> (UIValue & 0x1F)) & *(_DWORD *)(v5 + 4 * (UIValue >> 5) + 2208112)) == 0;
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_GetGalleryNew(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  unsigned __int64 UIValue; // rdx
  __int64 v5; // rax

  UIValue = argv->mValue.UIValue;
  v5 = *(_QWORD *)&AppMain::pApp;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_Int64;
  result->mValue.BValue = ((0x80000000 >> (UIValue & 0x1F)) & *(_DWORD *)(v5 + 4 * (UIValue >> 5) + 2208252)) != 0;
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_GetGameOptionParamArray(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  Scaleform::GFx::Movie *pObject; // rcx
  Scaleform::GFx::Value *v6; // rax
  int pdata[4]; // [rsp+48h] [rbp-20h] BYREF

  pObject = ctx->m_movie.pObject;
  pdata[0] = *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2197392i64);
  pdata[1] = *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2197396i64);
  pdata[2] = *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2197400i64);
  Scaleform::GFx::Movie::SetVariableArray(pObject, SA_Int, "Game_Option", 0, pdata, 3u, SV_Sticky);
  v6 = result;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_Float;
  result->mValue.IValue = 0;
  return v6;
}

Scaleform::GFx::Value *__fastcall extension::GFn_GetGameParam(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  GfxManager *v6; // rax
  GfxManager *v8; // [rsp+40h] [rbp+8h]

  if ( !GfxManager::instance )
  {
    v8 = (GfxManager *)operator new(0x108ui64);
    GfxManager::GfxManager(v8);
    GfxManager::instance = v6;
  }
  GfxManager::GFn_GetGameParam((GfxManager *)result, result, argv, argc);
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_GetGraphicsOptionParamArray(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  Scaleform::GFx::Movie *pObject; // rcx
  Scaleform::GFx::Value *v6; // rax
  int pdata[8]; // [rsp+48h] [rbp-30h] BYREF

  pObject = ctx->m_movie.pObject;
  pdata[0] = *(unsigned __int8 *)(*(_QWORD *)&AppMain::pApp + 2197488i64);
  pdata[1] = *(unsigned __int8 *)(*(_QWORD *)&AppMain::pApp + 2197489i64);
  pdata[2] = *(unsigned __int8 *)(*(_QWORD *)&AppMain::pApp + 2197490i64);
  pdata[3] = *(unsigned __int8 *)(*(_QWORD *)&AppMain::pApp + 2197491i64);
  pdata[4] = *(unsigned __int8 *)(*(_QWORD *)&AppMain::pApp + 2197492i64);
  pdata[5] = *(unsigned __int8 *)(*(_QWORD *)&AppMain::pApp + 2197493i64);
  pdata[6] = *(unsigned __int8 *)(*(_QWORD *)&AppMain::pApp + 2197494i64);
  pdata[7] = *(unsigned __int8 *)(*(_QWORD *)&AppMain::pApp + 2197495i64);
  Scaleform::GFx::Movie::SetVariableArray(pObject, SA_Int, "Graphics_Option", 0, pdata, 8u, SV_Sticky);
  v6 = result;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_Float;
  result->mValue.IValue = 0;
  return v6;
}

Scaleform::GFx::Value *__fastcall extension::GFn_GetHistoryStage(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  __int64 v4; // rax
  int v5; // edx
  Scaleform::GFx::Value *v6; // rax

  v4 = *(_QWORD *)&AppMain::pApp;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  v5 = *(_DWORD *)(v4 + 2292620);
  v6 = result;
  result->mValue.IValue = v5;
  result->Type = VT_Float;
  return v6;
}

Scaleform::GFx::Value *__fastcall extension::GFn_GetHudConfig(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  const char *pString; // r8
  Scaleform::GFx::Value *v6; // rax

  if ( (argv->Type & 0x40) != 0 )
    pString = *argv->mValue.pStringManaged;
  else
    pString = argv->mValue.pString;
  strcpy_s(extension::stringBuff, 0x100ui64, pString);
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->mValue.IValue = 0;
  v6 = result;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->Type = VT_Float;
  return v6;
}

Scaleform::GFx::Value *__fastcall extension::GFn_GetIconEnableFlag(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  unsigned __int64 UIValue; // rdx
  __int64 v5; // rax

  UIValue = argv->mValue.UIValue;
  v5 = *(_QWORD *)&AppMain::pApp;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_Int64;
  result->mValue.BValue = ((0x80000000 >> (UIValue & 0x1F)) & *(_DWORD *)(v5 + 4 * (UIValue >> 5) + 2205068)) != 0;
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_GetIconNewFlag(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  unsigned __int64 UIValue; // rdx
  __int64 v5; // rax

  UIValue = argv->mValue.UIValue;
  v5 = *(_QWORD *)&AppMain::pApp;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_Int64;
  result->mValue.BValue = ((0x80000000 >> (UIValue & 0x1F)) & *(_DWORD *)(v5 + 4 * (UIValue >> 5) + 2205088)) != 0;
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_GetLastInputDeviceHWType(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  Framework::GLManager *v4; // rax
  int m_lastUsedContHWType; // edx
  Scaleform::GFx::Value *v6; // rax

  v4 = Framework::GLManager::glm;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  m_lastUsedContHWType = v4->m_controllerContext.m_lastUsedContHWType;
  v6 = result;
  result->mValue.IValue = m_lastUsedContHWType;
  result->Type = VT_Float;
  return v6;
}

Scaleform::GFx::Value *__fastcall extension::GFn_GetLastInputMethod(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  Framework::GLManager *v4; // rax
  int m_lastUsedContType; // edx
  Scaleform::GFx::Value *v6; // rax

  v4 = Framework::GLManager::glm;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  m_lastUsedContType = v4->m_controllerContext.m_lastUsedContType;
  v6 = result;
  result->mValue.IValue = m_lastUsedContType;
  result->Type = VT_Float;
  return v6;
}

Scaleform::GFx::Value *__fastcall extension::GFn_GetLeaderBoardRanking(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  Scaleform::GFx::Value *v4; // r12
  __int64 v5; // rbp
  int IValue; // esi
  __int64 v7; // rdi
  unsigned int count; // ebx
  int v9; // er13
  int v10; // er12
  char (*v11)[129]; // r15
  __int64 v12; // r14
  __int64 v13; // rbp
  char **Name; // rsi
  _OWORD *v15; // rdi
  unsigned int v16; // ebx
  int v17; // esi
  _OWORD *v18; // rdi
  unsigned int v19; // ebx
  unsigned __int8 *v20; // r14
  int v21; // esi
  _OWORD *v22; // rdi
  unsigned int v23; // ebx
  int v24; // esi
  _OWORD *v25; // rdi
  unsigned int v26; // ebx
  int v27; // esi
  int v28; // eax
  GRADE_THRESHOLD_TABLE *v29; // rcx
  _OWORD *v30; // rdi
  unsigned int v31; // ebx
  unsigned __int8 v32; // al
  const char *iso3166_3; // rcx
  _OWORD *v34; // rdi
  unsigned int v35; // ebx
  int v36; // esi
  _OWORD *v37; // rdi
  unsigned int v38; // ebx
  int v39; // esi
  _OWORD *v40; // rdi
  __int64 v42; // [rsp+48h] [rbp-9690h]
  __int64 v43; // [rsp+50h] [rbp-9688h]
  char *ppathToVar; // [rsp+58h] [rbp-9680h]
  __int64 v45; // [rsp+60h] [rbp-9678h]
  _OWORD ptr[2400]; // [rsp+90h] [rbp-9648h] BYREF

  v4 = result;
  v5 = *(_QWORD *)&AppMain::pApp;
  v43 = *(_QWORD *)&AppMain::pApp;
  if ( (argv->Type & 0x40) != 0 )
    ppathToVar = (char *)*argv->mValue.pStringManaged;
  else
    ppathToVar = (char *)argv->mValue.pString;
  IValue = argv[1].mValue.IValue;
  v7 = argv[2].mValue.IValue;
  `eh vector constructor iterator'(
    ptr,
    0x30ui64,
    0x320ui64,
    (void (__fastcall *)(void *))Scaleform::GFx::Value::Value,
    (void (__fastcall *)(void *))Scaleform::GFx::Value::~Value);
  v4->pPrev = (Scaleform::GFx::Value *)-1i64;
  v4->pNext = (Scaleform::GFx::Value *)-1i64;
  v4->pObjectInterface = 0i64;
  v4->Type = VT_None;
  count = 0;
  v9 = 0;
  if ( (int)v7 > 0 )
  {
    v45 = v7;
    v42 = 0i64;
    v10 = IValue - 1;
    v11 = extension::stringBuff_2;
    do
    {
      v12 = v10 % 100;
      v13 = 48 * v12 + v5;
      if ( !*(_DWORD *)(v13 + 11800) )
        break;
      Name = SteamNameCache::getName(SteamNameCache::ms_instance, *(CSteamID *)(v13 + 11776));
      v15 = &ptr[3 * (int)count];
      if ( (*((_DWORD *)v15 + 6) & 0x40) != 0 )
      {
        Scaleform::GFx::Value::ObjectInterface::ObjectRelease(
          *((Scaleform::GFx::Value::ObjectInterface **)v15 + 2),
          (Scaleform::GFx::Value *)&ptr[3 * (int)count],
          *((void **)v15 + 4));
        *((_QWORD *)v15 + 2) = 0i64;
      }
      *((_DWORD *)v15 + 6) = 6;
      *((_QWORD *)v15 + 4) = Name;
      v16 = count + 1;
      v17 = *(_DWORD *)(v13 + 11796);
      v18 = &ptr[3 * (int)v16];
      if ( (*((_DWORD *)v18 + 6) & 0x40) != 0 )
      {
        Scaleform::GFx::Value::ObjectInterface::ObjectRelease(
          *((Scaleform::GFx::Value::ObjectInterface **)v18 + 2),
          (Scaleform::GFx::Value *)&ptr[3 * (int)v16],
          *((void **)v18 + 4));
        *((_QWORD *)v18 + 2) = 0i64;
      }
      *((_DWORD *)v18 + 6) = 3;
      *((_DWORD *)v18 + 8) = v17;
      v19 = v16 + 1;
      v20 = (unsigned __int8 *)(v43 + 132 * v12);
      v21 = v20[16580];
      v22 = &ptr[3 * (int)v19];
      if ( (*((_DWORD *)v22 + 6) & 0x40) != 0 )
      {
        Scaleform::GFx::Value::ObjectInterface::ObjectRelease(
          *((Scaleform::GFx::Value::ObjectInterface **)v22 + 2),
          (Scaleform::GFx::Value *)&ptr[3 * (int)v19],
          *((void **)v22 + 4));
        *((_QWORD *)v22 + 2) = 0i64;
      }
      *((_DWORD *)v22 + 6) = 3;
      *((_DWORD *)v22 + 8) = v21;
      v23 = v19 + 1;
      v24 = *(_DWORD *)(v13 + 11784);
      v25 = &ptr[3 * (int)v23];
      if ( (*((_DWORD *)v25 + 6) & 0x40) != 0 )
      {
        Scaleform::GFx::Value::ObjectInterface::ObjectRelease(
          *((Scaleform::GFx::Value::ObjectInterface **)v25 + 2),
          (Scaleform::GFx::Value *)&ptr[3 * (int)v23],
          *((void **)v25 + 4));
        *((_QWORD *)v25 + 2) = 0i64;
      }
      *((_DWORD *)v25 + 6) = 3;
      *((_DWORD *)v25 + 8) = v24;
      v26 = v23 + 1;
      v27 = 1;
      v28 = 1;
      v29 = &_grade_change_table[1];
      do
      {
        if ( v29->point > *(_DWORD *)(v13 + 11784) )
          break;
        v27 = v28++;
        ++v29;
      }
      while ( v28 < 44 );
      v30 = &ptr[3 * (int)v26];
      if ( (*((_DWORD *)v30 + 6) & 0x40) != 0 )
      {
        Scaleform::GFx::Value::ObjectInterface::ObjectRelease(
          *((Scaleform::GFx::Value::ObjectInterface **)v30 + 2),
          (Scaleform::GFx::Value *)&ptr[3 * (int)v26],
          *((void **)v30 + 4));
        *((_QWORD *)v30 + 2) = 0i64;
      }
      *((_DWORD *)v30 + 6) = 3;
      *((_DWORD *)v30 + 8) = v27;
      v31 = v26 + 1;
      memset(extension::stringBuff_2[v9], 0, sizeof(char[129]));
      v32 = v20[16581];
      if ( v11 )
      {
        if ( v32 >= 0x47u )
          iso3166_3 = Fw::NetworkCommon::m_ContryList[0].iso3166_3;
        else
          iso3166_3 = Fw::NetworkCommon::m_ContryList[v32].iso3166_3;
        *(_WORD *)v11 = *(_WORD *)iso3166_3;
        *(_WORD *)&(*v11)[2] = *((unsigned __int8 *)iso3166_3 + 2);
      }
      v34 = &ptr[3 * (int)v31];
      if ( (*((_DWORD *)v34 + 6) & 0x40) != 0 )
      {
        Scaleform::GFx::Value::ObjectInterface::ObjectRelease(
          *((Scaleform::GFx::Value::ObjectInterface **)v34 + 2),
          (Scaleform::GFx::Value *)&ptr[3 * (int)v31],
          *((void **)v34 + 4));
        *((_QWORD *)v34 + 2) = 0i64;
      }
      *((_DWORD *)v34 + 6) = 6;
      *((_QWORD *)v34 + 4) = extension::stringBuff_2[v9];
      v35 = v31 + 1;
      v36 = v20[16582];
      v37 = &ptr[3 * (int)v35];
      if ( (*((_DWORD *)v37 + 6) & 0x40) != 0 )
      {
        Scaleform::GFx::Value::ObjectInterface::ObjectRelease(
          *((Scaleform::GFx::Value::ObjectInterface **)v37 + 2),
          (Scaleform::GFx::Value *)&ptr[3 * (int)v35],
          *((void **)v37 + 4));
        *((_QWORD *)v37 + 2) = 0i64;
      }
      *((_DWORD *)v37 + 6) = 3;
      *((_DWORD *)v37 + 8) = v36;
      v38 = v35 + 1;
      v39 = v20[16583];
      v40 = &ptr[3 * (int)v38];
      if ( (*((_DWORD *)v40 + 6) & 0x40) != 0 )
      {
        Scaleform::GFx::Value::ObjectInterface::ObjectRelease(
          *((Scaleform::GFx::Value::ObjectInterface **)v40 + 2),
          (Scaleform::GFx::Value *)&ptr[3 * (int)v38],
          *((void **)v40 + 4));
        *((_QWORD *)v40 + 2) = 0i64;
      }
      *((_DWORD *)v40 + 6) = 3;
      *((_DWORD *)v40 + 8) = v39;
      count = v38 + 1;
      ++v9;
      ++v10;
      ++v42;
      ++v11;
      v5 = v43;
    }
    while ( v42 < v45 );
    v4 = result;
  }
  Scaleform::GFx::Movie::SetVariableArray(ctx->m_movie.pObject, SA_Value, ppathToVar, 0, ptr, count, SV_Sticky);
  if ( (v4->Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v4->pObjectInterface, v4, v4->mValue.pStringManaged);
    v4->pObjectInterface = 0i64;
  }
  v4->Type = VT_Float;
  v4->mValue.IValue = v9;
  `eh vector destructor iterator'(ptr, 0x30ui64, 0x320ui64, (void (__fastcall *)(void *))Scaleform::GFx::Value::~Value);
  return v4;
}

Scaleform::GFx::Value *__fastcall extension::GFn_GetMeInfo(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  __int64 v5; // r14
  _OWORD *v6; // rcx
  NET_USER_DATA *player_data; // rax
  __int64 v8; // rdx
  const char *pString; // r13
  char myNo; // r12
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  int v14; // er15
  __int64 v15; // rsi
  CSteamID v16; // rdx
  char **Name; // rdi
  int v18; // edi
  int v19; // edi
  int v20; // eax
  int v21; // esi
  int v22; // edi
  int v23; // eax
  int v26[8]; // [rsp+60h] [rbp-A0h]
  Scaleform::GFx::Value ptr; // [rsp+80h] [rbp-80h] BYREF
  Scaleform::GFx::Value val; // [rsp+B0h] [rbp-50h] BYREF
  Scaleform::GFx::Value v29; // [rsp+E0h] [rbp-20h] BYREF
  Scaleform::GFx::Value v30; // [rsp+110h] [rbp+10h] BYREF
  Scaleform::GFx::Value v31; // [rsp+140h] [rbp+40h] BYREF
  Scaleform::GFx::Value v32; // [rsp+170h] [rbp+70h] BYREF
  Scaleform::GFx::Value v33; // [rsp+1A0h] [rbp+A0h] BYREF
  Scaleform::GFx::Value v34; // [rsp+1D0h] [rbp+D0h] BYREF
  Scaleform::GFx::Value v35; // [rsp+200h] [rbp+100h] BYREF
  Scaleform::GFx::Value v36; // [rsp+230h] [rbp+130h] BYREF

  v5 = *(_QWORD *)&AppMain::pApp;
  v6 = (_OWORD *)(*(_QWORD *)&AppMain::pApp + 2195412i64);
  player_data = g_NetworkManager.gamedata.player_data;
  v8 = 11i64;
  do
  {
    *v6 = *(_OWORD *)&player_data->steamId;
    v6[1] = *((_OWORD *)player_data + 1);
    v6[2] = *((_OWORD *)player_data + 2);
    v6[3] = *((_OWORD *)player_data + 3);
    v6[4] = *(_OWORD *)&player_data->stageTelop[12];
    v6[5] = *(_OWORD *)&player_data->stageTelop[28];
    v6[6] = *(_OWORD *)&player_data->stageTelop[44];
    v6 += 8;
    *(v6 - 1) = *(_OWORD *)&player_data->stageTelop[60];
    player_data = (NET_USER_DATA *)((char *)player_data + 128);
    --v8;
  }
  while ( v8 );
  *(_QWORD *)v6 = player_data->steamId;
  if ( (argv->Type & 0x40) != 0 )
    pString = *argv->mValue.pStringManaged;
  else
    pString = argv->mValue.pString;
  `eh vector constructor iterator'(
    &ptr,
    0x30ui64,
    0x14ui64,
    (void (__fastcall *)(void *))Scaleform::GFx::Value::Value,
    (void (__fastcall *)(void *))Scaleform::GFx::Value::~Value);
  myNo = g_NetworkManager.gamedata.myNo;
  v11 = 0i64;
  v12 = *(unsigned __int8 *)(v5 + 2205348);
  v13 = 12 * (v12 + 217);
  do
  {
    v26[2 * v11] = *(_DWORD *)(v13 + v5 + 2202748);
    LOBYTE(v26[2 * v11 + 1]) = *(_DWORD *)(v13 + v5 + 2202784) - 1;
    BYTE1(v26[2 * v11 + 1]) = *(_BYTE *)(v11 + v12 + v5 + 2 * v12 + 2205424);
    ++v11;
    v13 += 4i64;
  }
  while ( v11 < 3 );
  v14 = *(_DWORD *)(v5 + 4i64 * *(int *)(v5 + 2205316) + 2205320);
  v15 = v5 + 118i64 * myNo;
  v16.m_steamid.m_comp = *(CSteamID::SteamID_t::SteamIDComponent_t *)(v15 + 2195412);
  if ( v16.m_steamid.m_comp )
  {
    Name = SteamNameCache::getName(SteamNameCache::ms_instance, v16);
    if ( (ptr.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(ptr.pObjectInterface, &ptr, ptr.mValue.pStringManaged);
      ptr.pObjectInterface = 0i64;
    }
    ptr.Type = 6;
    ptr.mValue.pString = (const char *)Name;
    v18 = (*(_DWORD *)(v15 + 2195428) >> 21) & 0x1FF;
    if ( (val.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(val.pObjectInterface, &val, val.mValue.pStringManaged);
      val.pObjectInterface = 0i64;
    }
    val.Type = VT_Float;
    val.mValue.IValue = v18;
    v19 = (*(_DWORD *)(v15 + 2195424) >> 14) & 0x7F;
    if ( (v29.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v29.pObjectInterface, &v29, v29.mValue.pStringManaged);
      v29.pObjectInterface = 0i64;
    }
    v29.Type = VT_Float;
    v29.mValue.IValue = v19;
    if ( (v30.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v30.pObjectInterface, &v30, v30.mValue.pStringManaged);
      v30.pObjectInterface = 0i64;
    }
    v30.Type = VT_Float;
    v30.mValue.IValue = v26[0];
    if ( (v31.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v31.pObjectInterface, &v31, v31.mValue.pStringManaged);
      v31.pObjectInterface = 0i64;
    }
    v31.Type = VT_Float;
    v31.mValue.IValue = v26[2];
    if ( (v32.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v32.pObjectInterface, &v32, v32.mValue.pStringManaged);
      v32.pObjectInterface = 0i64;
    }
    v32.Type = VT_Float;
    v32.mValue.IValue = v26[4];
    if ( (v33.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v33.pObjectInterface, &v33, v33.mValue.pStringManaged);
      v33.pObjectInterface = 0i64;
    }
    v33.Type = VT_Float;
    v33.mValue.IValue = myNo + 1;
    if ( (v34.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v34.pObjectInterface, &v34, v34.mValue.pStringManaged);
      v34.pObjectInterface = 0i64;
    }
    v34.Type = VT_Float;
    v34.mValue.IValue = v14;
    v20 = ((*(_DWORD *)(v15 + 2195428) >> 15) & 7) - 1;
    v21 = 2;
    switch ( v20 )
    {
      case 0:
      case 1:
        v22 = 2;
        break;
      case 2:
      case 3:
        v22 = 3;
        break;
      case 4:
      case 5:
      case 6:
        v22 = 4;
        break;
      default:
        v22 = 1;
        break;
    }
    if ( (v35.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v35.pObjectInterface, &v35, v35.mValue.pStringManaged);
      v35.pObjectInterface = 0i64;
    }
    v35.Type = VT_Float;
    v35.mValue.IValue = v22;
    v23 = *(_DWORD *)(v5 + 2202852);
    if ( v23 < 4 )
      v21 = v23 >= 3;
    if ( (v36.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v36.pObjectInterface, &v36, v36.mValue.pStringManaged);
      v36.pObjectInterface = 0i64;
    }
    v36.Type = VT_Float;
    v36.mValue.IValue = v21;
    Scaleform::GFx::Movie::SetVariableArray(ctx->m_movie.pObject, SA_Value, pString, 0, &ptr, 0xAu, SV_Sticky);
    result->pPrev = (Scaleform::GFx::Value *)-1i64;
    result->pNext = (Scaleform::GFx::Value *)-1i64;
    result->pObjectInterface = 0i64;
    result->Type = VT_Float;
    result->mValue.IValue = 0;
  }
  else
  {
    result->pPrev = (Scaleform::GFx::Value *)-1i64;
    result->pNext = (Scaleform::GFx::Value *)-1i64;
    result->pObjectInterface = 0i64;
    result->Type = VT_Float;
    result->mValue.IValue = -1;
  }
  `eh vector destructor iterator'(&ptr, 0x30ui64, 0x14ui64, (void (__fastcall *)(void *))Scaleform::GFx::Value::~Value);
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_GetMenuCursor(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  GfxManager *v6; // rax
  GfxManager *v8; // [rsp+40h] [rbp+8h]

  v6 = GfxManager::instance;
  if ( !GfxManager::instance )
  {
    v8 = (GfxManager *)operator new(0x108ui64);
    GfxManager::GfxManager(v8);
    GfxManager::instance = v6;
  }
  GfxManager::GFn_GetMenuCursor(v6, result, argv, argc);
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_GetMenuID(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  GameDataInfo *v5; // rcx
  int m_MenuID; // edi

  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_None;
  if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *(_DWORD *)(*(_QWORD *)NtCurrentTeb()->Reserved1[11]
                                                                            + 40i64) )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v5);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    }
  }
  m_MenuID = `GameDataInfo::getInstance'::`2'::instance.m_MenuID;
  if ( (result->Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(
      result->pObjectInterface,
      result,
      result->mValue.pStringManaged);
    result->pObjectInterface = 0i64;
  }
  result->Type = VT_Float;
  result->mValue.IValue = m_MenuID;
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_GetMissionTrialCount(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        __int64 argc)
{
  Scaleform::GFx::Value *v5; // rax

  result->mValue.IValue = (*(__int64 (__fastcall **)(_QWORD, extension::GFXIMovieContext *, const Scaleform::GFx::Value *, __int64, _DWORD))(**(_QWORD **)(*(_QWORD *)&AppMain::pApp + 2192504i64) + 72i64))(
                            *(_QWORD *)(*(_QWORD *)&AppMain::pApp + 2192504i64),
                            ctx,
                            argv,
                            argc,
                            0);
  v5 = result;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_Float;
  return v5;
}

Scaleform::GFx::Value *__fastcall extension::GFn_GetMissionTrialData(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        __int64 argc)
{
  __int64 v4; // rdi
  __int64 IValue; // rsi
  int *v7; // r14
  __int64 v8; // rbp
  int v9; // edi
  __int64 i; // r10
  const char *v11; // r9
  char *v12; // rdx
  bool v13; // zf
  char *v14; // rcx
  Scaleform::GFx::Value *v15; // rax

  v4 = *(_QWORD *)&AppMain::pApp;
  IValue = argv->mValue.IValue;
  if ( (*(int (__fastcall **)(_QWORD, extension::GFXIMovieContext *, const Scaleform::GFx::Value *, __int64, _DWORD))(**(_QWORD **)(*(_QWORD *)&AppMain::pApp + 2192504i64) + 72i64))(
         *(_QWORD *)(*(_QWORD *)&AppMain::pApp + 2192504i64),
         ctx,
         argv,
         argc,
         0) > (int)IValue
    && (v7 = (int *)(*(_QWORD *)(*(_QWORD *)(v4 + 2192504) + 32i64) + 96 * IValue), v8 = *v7, *((_QWORD *)v7 + 11)) )
  {
    extension::stringBuff[0] = 0;
    v9 = 0;
    if ( (int)v8 > 0 )
    {
      for ( i = 0i64; i < v8; ++i )
      {
        v11 = *(const char **)(*((_QWORD *)v7 + 11) + 8 * i);
        if ( v11 )
        {
          v12 = &extension::stringBuff[-1];
          do
            v13 = *++v12 == 0;
          while ( !v13 );
          strcpy(v12, v11);
          if ( v9 != (_DWORD)v8 - 1 )
          {
            v14 = &extension::stringBuff[-1];
            do
              v13 = *++v14 == 0;
            while ( !v13 );
            strcpy(v14, "\n");
          }
        }
        ++v9;
      }
    }
  }
  else
  {
    strcpy(extension::stringBuff, "NO DATA");
  }
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  v15 = result;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = 6;
  result->mValue.pString = extension::stringBuff;
  return v15;
}

Scaleform::GFx::Value *__fastcall extension::GFn_GetMissionTrialFlag(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  int IValue; // eax
  __int64 v6; // rdi
  int v7; // esi
  int v8; // eax
  bool v9; // cf
  GameDataInfo *v11; // rcx

  IValue = argv[1].mValue.IValue;
  v6 = *(_QWORD *)&AppMain::pApp;
  v7 = argv->mValue.IValue;
  if ( IValue == -1 )
  {
    if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *(_DWORD *)(*(_QWORD *)NtCurrentTeb()->Reserved1[11]
                                                                              + 40i64) )
    {
      Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
      {
        GameDataInfo::GameDataInfo(v11);
        Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      }
    }
    IValue = `GameDataInfo::getInstance'::`2'::instance.m_CharacterNo[0][0];
  }
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  v8 = *(_DWORD *)(32i64 * IValue + v6 + 2202888);
  v9 = _bittest(&v8, v7);
  result->Type = VT_Int64;
  result->mValue.BValue = v9;
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_GetMissionTrialNo(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  Scaleform::GFx::Value *v5; // rax
  GameDataInfo *v6; // rcx

  if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *(_DWORD *)(*(_QWORD *)NtCurrentTeb()->Reserved1[11]
                                                                            + 40i64) )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v6);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    }
  }
  result->mValue.IValue = `GameDataInfo::getInstance'::`2'::instance.m_MissionTrialNo;
  v5 = result;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_Float;
  return v5;
}

Scaleform::GFx::Value *__fastcall extension::GFn_GetMyAntenna(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  Scaleform::GFx::Value::ObjectInterface *pObjectInterface; // r9
  int m_Antenna; // eax
  char Type; // dl
  Scaleform::GFx::Value src; // [rsp+30h] [rbp-30h] BYREF

  pObjectInterface = 0i64;
  m_Antenna = g_NetworkManager.gamedata.userInfo.m_Antenna;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  Type = 3;
  result->Type = VT_Float;
  result->mValue.IValue = 0;
  switch ( m_Antenna )
  {
    case 0:
      src.Scaleform::ListNode<Scaleform::GFx::Value> = (Scaleform::ListNode<Scaleform::GFx::Value>)_mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
      src.pObjectInterface = 0i64;
      src.Type = VT_Float;
      src.mValue.IValue = 0;
      if ( result != &src )
      {
        Scaleform::GFx::Value::operator=(result, &src);
        Type = src.Type;
        pObjectInterface = src.pObjectInterface;
      }
      if ( (Type & 0x40) != 0 )
        Scaleform::GFx::Value::ObjectInterface::ObjectRelease(pObjectInterface, &src, src.mValue.pStringManaged);
      break;
    case 1:
      src.Scaleform::ListNode<Scaleform::GFx::Value> = (Scaleform::ListNode<Scaleform::GFx::Value>)_mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
      src.pObjectInterface = 0i64;
      src.Type = VT_Float;
      src.mValue.IValue = 0;
      if ( result != &src )
      {
        Scaleform::GFx::Value::operator=(result, &src);
        Type = src.Type;
        pObjectInterface = src.pObjectInterface;
      }
      if ( (Type & 0x40) != 0 )
        Scaleform::GFx::Value::ObjectInterface::ObjectRelease(pObjectInterface, &src, src.mValue.pStringManaged);
      break;
    case 2:
      src.Scaleform::ListNode<Scaleform::GFx::Value> = (Scaleform::ListNode<Scaleform::GFx::Value>)_mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
      src.pObjectInterface = 0i64;
      src.Type = VT_Float;
      src.mValue.IValue = 1;
      if ( result != &src )
      {
        Scaleform::GFx::Value::operator=(result, &src);
        Type = src.Type;
        pObjectInterface = src.pObjectInterface;
      }
      if ( (Type & 0x40) != 0 )
        Scaleform::GFx::Value::ObjectInterface::ObjectRelease(pObjectInterface, &src, src.mValue.pStringManaged);
      break;
    case 3:
      src.Scaleform::ListNode<Scaleform::GFx::Value> = (Scaleform::ListNode<Scaleform::GFx::Value>)_mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
      src.pObjectInterface = 0i64;
      src.Type = VT_Float;
      src.mValue.IValue = 1;
      if ( result != &src )
      {
        Scaleform::GFx::Value::operator=(result, &src);
        Type = src.Type;
        pObjectInterface = src.pObjectInterface;
      }
      if ( (Type & 0x40) != 0 )
        Scaleform::GFx::Value::ObjectInterface::ObjectRelease(pObjectInterface, &src, src.mValue.pStringManaged);
      break;
    case 4:
      src.Scaleform::ListNode<Scaleform::GFx::Value> = (Scaleform::ListNode<Scaleform::GFx::Value>)_mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
      src.pObjectInterface = 0i64;
      src.Type = VT_Float;
      src.mValue.IValue = 2;
      if ( result != &src )
      {
        Scaleform::GFx::Value::operator=(result, &src);
        Type = src.Type;
        pObjectInterface = src.pObjectInterface;
      }
      if ( (Type & 0x40) != 0 )
        Scaleform::GFx::Value::ObjectInterface::ObjectRelease(pObjectInterface, &src, src.mValue.pStringManaged);
      break;
    case 5:
      src.Scaleform::ListNode<Scaleform::GFx::Value> = (Scaleform::ListNode<Scaleform::GFx::Value>)_mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
      src.pObjectInterface = 0i64;
      src.Type = VT_Float;
      src.mValue.IValue = 2;
      if ( result != &src )
      {
        Scaleform::GFx::Value::operator=(result, &src);
        Type = src.Type;
        pObjectInterface = src.pObjectInterface;
      }
      if ( (Type & 0x40) != 0 )
        Scaleform::GFx::Value::ObjectInterface::ObjectRelease(pObjectInterface, &src, src.mValue.pStringManaged);
      break;
    case 6:
      src.Scaleform::ListNode<Scaleform::GFx::Value> = (Scaleform::ListNode<Scaleform::GFx::Value>)_mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
      src.pObjectInterface = 0i64;
      src.Type = VT_Float;
      src.mValue.IValue = 3;
      if ( result != &src )
      {
        Scaleform::GFx::Value::operator=(result, &src);
        Type = src.Type;
        pObjectInterface = src.pObjectInterface;
      }
      if ( (Type & 0x40) != 0 )
        Scaleform::GFx::Value::ObjectInterface::ObjectRelease(pObjectInterface, &src, src.mValue.pStringManaged);
      break;
    case 7:
      src.Scaleform::ListNode<Scaleform::GFx::Value> = (Scaleform::ListNode<Scaleform::GFx::Value>)_mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
      src.pObjectInterface = 0i64;
      src.Type = VT_Float;
      src.mValue.IValue = 3;
      if ( result != &src )
      {
        Scaleform::GFx::Value::operator=(result, &src);
        Type = src.Type;
        pObjectInterface = src.pObjectInterface;
      }
      if ( (Type & 0x40) != 0 )
        Scaleform::GFx::Value::ObjectInterface::ObjectRelease(pObjectInterface, &src, src.mValue.pStringManaged);
      break;
    default:
      return result;
  }
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_GetMyFavoriteSingle(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  __int64 IValue; // rax
  __int64 v5; // rdx
  int v6; // er8
  Scaleform::GFx::Value *v7; // rax

  IValue = argv->mValue.IValue;
  v5 = *(_QWORD *)&AppMain::pApp;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  v6 = *(_DWORD *)(v5 + 4 * IValue + 2205320);
  v7 = result;
  result->mValue.IValue = v6;
  result->Type = VT_Float;
  return v7;
}

Scaleform::GFx::Value *__fastcall extension::GFn_GetMyFavoriteSingleColor(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  __int64 IValue; // rax
  __int64 v5; // rdx
  int v6; // er8
  Scaleform::GFx::Value *v7; // rax

  IValue = argv->mValue.IValue;
  v5 = *(_QWORD *)&AppMain::pApp;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  v6 = *(_DWORD *)(v5 + 4 * IValue + 2205332);
  v7 = result;
  result->mValue.IValue = v6;
  result->Type = VT_Float;
  return v7;
}

Scaleform::GFx::Value *__fastcall extension::GFn_GetMyFavoriteSingleCostume(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  __int64 v4; // rax
  __int64 IValue; // rdx
  Scaleform::GFx::Value *v6; // rax

  v4 = *(_QWORD *)&AppMain::pApp;
  IValue = argv->mValue.IValue;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  LODWORD(IValue) = *(char *)(IValue + v4 + 2205344);
  v6 = result;
  result->mValue.IValue = IValue;
  result->Type = VT_Float;
  return v6;
}

Scaleform::GFx::Value *__fastcall extension::GFn_GetMyFavoriteSingleNo(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  __int64 v4; // rax
  int v5; // edx
  Scaleform::GFx::Value *v6; // rax

  v4 = *(_QWORD *)&AppMain::pApp;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  v5 = *(_DWORD *)(v4 + 2205316);
  v6 = result;
  result->mValue.IValue = v5;
  result->Type = VT_Float;
  return v6;
}

Scaleform::GFx::Value *__fastcall extension::GFn_GetMyFavoriteStage(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  __int64 IValue; // rax
  __int64 v5; // rdx
  int v6; // er8
  Scaleform::GFx::Value *v7; // rax

  IValue = argv->mValue.IValue;
  v5 = *(_QWORD *)&AppMain::pApp;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  v6 = *(_DWORD *)(v5 + 4 * IValue + 2205304);
  v7 = result;
  result->mValue.IValue = v6;
  result->Type = VT_Float;
  return v7;
}

Scaleform::GFx::Value *__fastcall extension::GFn_GetMyFavoriteStageNo(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  __int64 v4; // rax
  int v5; // edx
  Scaleform::GFx::Value *v6; // rax

  v4 = *(_QWORD *)&AppMain::pApp;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  v5 = *(_DWORD *)(v4 + 2205300);
  v6 = result;
  result->mValue.IValue = v5;
  result->Type = VT_Float;
  return v6;
}

Scaleform::GFx::Value *__fastcall extension::GFn_GetMyFavoriteTeam(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  __int64 v4; // r9
  __int64 v5; // rax

  v4 = *(_QWORD *)&AppMain::pApp;
  v5 = argv->mValue.IValue + 214i64;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_Float;
  result->mValue.IValue = *(_DWORD *)(v4 + 4 * (argv[1].mValue.IValue + 3 * v5) + 2202784);
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_GetMyFavoriteTeamColor(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  __int64 v4; // r9
  __int64 v5; // rax

  v4 = *(_QWORD *)&AppMain::pApp;
  v5 = argv->mValue.IValue + 217i64;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_Float;
  result->mValue.IValue = *(_DWORD *)(v4 + 4 * (argv[1].mValue.IValue + 3 * v5) + 2202784);
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_GetMyFavoriteTeamCostume(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  __int64 IValue; // r9
  __int64 v5; // rdx
  __int64 v6; // rax
  Scaleform::GFx::Value *v7; // rax

  IValue = argv->mValue.IValue;
  v5 = argv[1].mValue.IValue;
  v6 = *(_QWORD *)&AppMain::pApp + IValue;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_Float;
  LODWORD(v5) = *(char *)(v5 + v6 + 2 * IValue + 2205424);
  v7 = result;
  result->mValue.IValue = v5;
  return v7;
}

Scaleform::GFx::Value *__fastcall extension::GFn_GetMyFavoriteTeamNo(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  __int64 v4; // rax
  int v5; // edx
  Scaleform::GFx::Value *v6; // rax

  v4 = *(_QWORD *)&AppMain::pApp;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  v5 = *(_DWORD *)(v4 + 2205348);
  v6 = result;
  result->mValue.IValue = v5;
  result->Type = VT_Float;
  return v6;
}

Scaleform::GFx::Value *__fastcall extension::GFn_GetMyProfile(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  const char *pString; // rdi
  Scaleform::GFx::Value *v7; // rax
  char pdata[512]; // [rsp+50h] [rbp-228h] BYREF

  if ( (argv->Type & 0x40) != 0 )
    pString = *argv->mValue.pStringManaged;
  else
    pString = argv->mValue.pString;
  memset(pdata, 0, sizeof(pdata));
  Scaleform::GFx::Movie::SetVariableArray(ctx->m_movie.pObject, SA_Int, pString, 0, pdata, 0, SV_Sticky);
  v7 = result;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_Float;
  result->mValue.IValue = 0;
  return v7;
}

Scaleform::GFx::Value *__fastcall extension::GFn_GetMyRoomName(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  __int64 v4; // rdi
  __int64 v6; // rax
  char v7; // al
  const char *CString; // rax
  Scaleform::GFx::Value *v9; // rax

  v4 = *(_QWORD *)&AppMain::pApp;
  v6 = SteamInternal_ContextInit(&`SteamInternal_ModuleContext'::`2'::s_CallbackCounterAndContext, ctx);
  v7 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v6 + 16) + 336i64))(*(_QWORD *)(v6 + 16));
  if ( (v7 & 0x10) != 0 || (v7 & 2) != 0 )
  {
    UserGameOperation::Instance();
    if ( Framework::GLManager::glm )
    {
      CString = AgString::getCString(&Fw::NetworkCommon::m_NpId.handle);
      strcpy_s(extension::stringBuff, 0x800ui64, CString);
    }
    result->mValue.pString = extension::stringBuff;
  }
  else
  {
    result->mValue.pString = (const char *)(v4 + 2205533);
  }
  v9 = result;
  result->Type = 6;
  result->pObjectInterface = 0i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  return v9;
}

Scaleform::GFx::Value *__fastcall extension::GFn_GetNetworkTitleEnable(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  unsigned __int64 UIValue; // rdx
  __int64 v5; // rax

  UIValue = argv->mValue.UIValue;
  v5 = *(_QWORD *)&AppMain::pApp;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_Int64;
  result->mValue.BValue = ((0x80000000 >> (UIValue & 0x1F)) & *(_DWORD *)(v5 + 4 * (UIValue >> 5) + 2208396)) != 0;
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_GetNetworkTitleNew(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  unsigned __int64 UIValue; // rdx
  __int64 v5; // rax

  UIValue = argv->mValue.UIValue;
  v5 = *(_QWORD *)&AppMain::pApp;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_Int64;
  result->mValue.BValue = ((0x80000000 >> (UIValue & 0x1F)) & *(_DWORD *)(v5 + 4 * (UIValue >> 5) + 2208436)) != 0;
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_GetOnlineIDStatus(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  GfxManager *v5; // rax
  GfxManager *v7; // [rsp+40h] [rbp+8h]

  if ( !GfxManager::instance )
  {
    v7 = (GfxManager *)operator new(0x108ui64);
    GfxManager::GfxManager(v7);
    GfxManager::instance = v5;
  }
  GfxManager::GFn_GetOnlineIDStatus((GfxManager *)result, result, argv, argc);
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_GetOnlineReplayData(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  int IValue; // er9
  const char *pString; // r8
  int v8; // er9
  int v9; // edx
  Scaleform::GFx::Value *v10; // rax

  IValue = argv->mValue.IValue;
  if ( (argv[1].Type & 0x40) != 0 )
    pString = *argv[1].mValue.pStringManaged;
  else
    pString = argv[1].mValue.pString;
  v8 = (IValue - 1) % 100;
  v9 = *(_DWORD *)(132i64 * v8 + *(_QWORD *)(*(_QWORD *)&AppMain::pApp + 35392i64));
  if ( v9 == 84 )
  {
    if ( !extension::CnvLEADERBOARD_REPLAY_FORMAT_000(ctx, v8, pString) )
    {
      result->mValue.BValue = 0;
      goto LABEL_14;
    }
    goto LABEL_13;
  }
  if ( v9 == 90 )
  {
    if ( !extension::CnvLEADERBOARD_REPLAY_FORMAT_001(ctx, v8, pString) )
    {
      result->mValue.BValue = 0;
      goto LABEL_14;
    }
LABEL_13:
    result->mValue.BValue = 1;
    goto LABEL_14;
  }
  if ( v9 == 96 && extension::CnvLEADERBOARD_REPLAY(ctx, v8, pString) )
    goto LABEL_13;
  result->mValue.BValue = 0;
LABEL_14:
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  v10 = result;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_Int64;
  return v10;
}

Scaleform::GFx::Value *__fastcall extension::GFn_GetOrderSelectButton(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  int IValue; // eax
  int v7; // er8
  std::_Tree_node<std::pair<enum AgGamepadButton const ,int>,void *> *Myhead; // rcx
  std::_Tree_node<std::pair<enum AgGamepadButton const ,int>,void *> *Parent; // rdx
  std::_Tree_node<std::pair<enum AgGamepadButton const ,int>,void *> *v10; // rax
  int second; // edx
  std::string *v12; // rax
  char *Ptr; // rcx
  char *v14; // rax
  std::string *v15; // r8
  char *v16; // rcx
  char *v17; // rax
  std::string resulta; // [rsp+38h] [rbp-50h] BYREF
  std::string v20; // [rsp+58h] [rbp-30h] BYREF

  IValue = argv[1].mValue.IValue;
  if ( IValue )
  {
    if ( IValue == 1 )
      v7 = 7;
    else
      v7 = (IValue != 2) + 4;
  }
  else
  {
    v7 = 6;
  }
  Myhead = Framework::GLManager::glm->m_controllerContext.m_genericMappings.m_buttonIdLUT._Mypair._Myval2._Myval2._Myhead;
  Parent = Myhead->_Parent;
  v10 = Myhead;
  while ( !Parent->_Isnil )
  {
    if ( Parent->_Myval.first >= v7 )
    {
      v10 = Parent;
      Parent = Parent->_Left;
    }
    else
    {
      Parent = Parent->_Right;
    }
  }
  if ( v10 == Myhead || v7 < v10->_Myval.first )
    v10 = Framework::GLManager::glm->m_controllerContext.m_genericMappings.m_buttonIdLUT._Mypair._Myval2._Myval2._Myhead;
  if ( v10 == Myhead )
    second = -1;
  else
    second = v10->_Myval.second;
  v12 = std::to_string(&resulta, second + 1);
  std::operator+<char>(&v20, "gen_", v12);
  if ( resulta._Mypair._Myval2._Myres >= 0x10 )
  {
    Ptr = resulta._Mypair._Myval2._Bx._Ptr;
    if ( resulta._Mypair._Myval2._Myres + 1 >= 0x1000 )
    {
      if ( (resulta._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
        invalid_parameter_noinfo_noreturn();
      v14 = (char *)*((_QWORD *)resulta._Mypair._Myval2._Bx._Ptr - 1);
      if ( v14 >= resulta._Mypair._Myval2._Bx._Ptr )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(resulta._Mypair._Myval2._Bx._Ptr - v14) < (char *)8 )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(resulta._Mypair._Myval2._Bx._Ptr - v14) > (char *)0x27 )
        invalid_parameter_noinfo_noreturn();
      Ptr = (char *)*((_QWORD *)resulta._Mypair._Myval2._Bx._Ptr - 1);
    }
    operator delete(Ptr);
  }
  resulta._Mypair._Myval2._Myres = 15i64;
  resulta._Mypair._Myval2._Mysize = 0i64;
  resulta._Mypair._Myval2._Bx._Buf[0] = 0;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_None;
  v15 = &v20;
  if ( v20._Mypair._Myval2._Myres >= 0x10 )
    v15 = (std::string *)v20._Mypair._Myval2._Bx._Ptr;
  Scaleform::GFx::Movie::CreateString(ctx->m_movie.pObject, result, v15->_Mypair._Myval2._Bx._Buf);
  if ( v20._Mypair._Myval2._Myres >= 0x10 )
  {
    v16 = v20._Mypair._Myval2._Bx._Ptr;
    if ( v20._Mypair._Myval2._Myres + 1 >= 0x1000 )
    {
      if ( (v20._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
        invalid_parameter_noinfo_noreturn();
      v17 = (char *)*((_QWORD *)v20._Mypair._Myval2._Bx._Ptr - 1);
      if ( v17 >= v20._Mypair._Myval2._Bx._Ptr )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(v20._Mypair._Myval2._Bx._Ptr - v17) < (char *)8 )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(v20._Mypair._Myval2._Bx._Ptr - v17) > (char *)0x27 )
        invalid_parameter_noinfo_noreturn();
      v16 = (char *)*((_QWORD *)v20._Mypair._Myval2._Bx._Ptr - 1);
    }
    operator delete(v16);
  }
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_GetPlatform(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  Scaleform::GFx::Value *v4; // rax

  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  v4 = result;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_Float;
  result->mValue.IValue = 1;
  return v4;
}

Scaleform::GFx::Value *__fastcall extension::GFn_GetPlayerArea(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  Scaleform::GFx::Value *v5; // rax

  Fw::NetworkCommon::GetShortCountryName(extension::stringBuff, (const Fw::ONLINEID *)ctx);
  v5 = result;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = 6;
  result->mValue.pString = extension::stringBuff;
  return v5;
}

Scaleform::GFx::Value *__fastcall extension::GFn_GetPlayerEndRate(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  float RankMatchEndRate; // xmm0_4
  Scaleform::GFx::Value *v6; // rax

  RankMatchEndRate = SaveRecord_PlayerData::GetRankMatchEndRate((SaveRecord_PlayerData *)(*(_QWORD *)&AppMain::pApp
                                                                                        + 2202784i64));
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  v6 = result;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = 5;
  result->mValue.NValue = (float)((float)(RankMatchEndRate * 100.0) * 100.0);
  return v6;
}

Scaleform::GFx::Value *__fastcall extension::GFn_GetPlayerIcon(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  __int64 v4; // rax
  int v5; // edx
  Scaleform::GFx::Value *v6; // rax

  v4 = *(_QWORD *)&AppMain::pApp;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  v5 = *(_DWORD *)(v4 + 2202800);
  v6 = result;
  result->mValue.IValue = v5;
  result->Type = VT_Float;
  return v6;
}

Scaleform::GFx::Value *__fastcall extension::GFn_GetPlayerNetDraw(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  unsigned int v4; // edx
  unsigned int v5; // er8

  v4 = *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2202824i64) ^ 0x7B48A35E;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_Float;
  v5 = v4 ^ ((unsigned __int16)v4 ^ (unsigned __int16)(v4 >> 14)) & 0xCCCC ^ ((((unsigned __int16)v4 ^ (unsigned __int16)(v4 >> 14)) & 0xCCCC) << 14);
  result->mValue.IValue = (v5 ^ (v5 >> 7)) & 0x550055 ^ v5 ^ (((v5 ^ (v5 >> 7)) & 0x550055) << 7);
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_GetPlayerNetDrawPub(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  __int64 v4; // rax
  int v5; // edx
  Scaleform::GFx::Value *v6; // rax

  v4 = *(_QWORD *)&AppMain::pApp;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  v5 = *(char *)(v4 + 2202809);
  v6 = result;
  result->mValue.IValue = v5;
  result->Type = VT_Float;
  return v6;
}

Scaleform::GFx::Value *__fastcall extension::GFn_GetPlayerNetLose(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  unsigned int v4; // edx
  unsigned int v5; // er8

  v4 = *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2202820i64) ^ 0x7B48A35E;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_Float;
  v5 = v4 ^ ((unsigned __int16)v4 ^ (unsigned __int16)(v4 >> 14)) & 0xCCCC ^ ((((unsigned __int16)v4 ^ (unsigned __int16)(v4 >> 14)) & 0xCCCC) << 14);
  result->mValue.IValue = (v5 ^ (v5 >> 7)) & 0x550055 ^ v5 ^ (((v5 ^ (v5 >> 7)) & 0x550055) << 7);
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_GetPlayerNetLosePub(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  __int64 v4; // rax
  int v5; // edx
  Scaleform::GFx::Value *v6; // rax

  v4 = *(_QWORD *)&AppMain::pApp;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  v5 = *(char *)(v4 + 2202808);
  v6 = result;
  result->mValue.IValue = v5;
  result->Type = VT_Float;
  return v6;
}

Scaleform::GFx::Value *__fastcall extension::GFn_GetPlayerNetMaxWins(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  unsigned int v4; // edx
  unsigned int v5; // er8

  v4 = *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2202832i64) ^ 0x7B48A35E;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_Float;
  v5 = v4 ^ ((unsigned __int16)v4 ^ (unsigned __int16)(v4 >> 14)) & 0xCCCC ^ ((((unsigned __int16)v4 ^ (unsigned __int16)(v4 >> 14)) & 0xCCCC) << 14);
  result->mValue.IValue = (v5 ^ (v5 >> 7)) & 0x550055 ^ v5 ^ (((v5 ^ (v5 >> 7)) & 0x550055) << 7);
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_GetPlayerNetRatePub(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  __int64 v4; // rax
  int v5; // edx
  Scaleform::GFx::Value *v6; // rax

  v4 = *(_QWORD *)&AppMain::pApp;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  v5 = *(char *)(v4 + 2202810);
  v6 = result;
  result->mValue.IValue = v5;
  result->Type = VT_Float;
  return v6;
}

Scaleform::GFx::Value *__fastcall extension::GFn_GetPlayerNetWin(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  unsigned int v4; // edx
  unsigned int v5; // er8

  v4 = *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2202816i64) ^ 0x7B48A35E;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_Float;
  v5 = v4 ^ ((unsigned __int16)v4 ^ (unsigned __int16)(v4 >> 14)) & 0xCCCC ^ ((((unsigned __int16)v4 ^ (unsigned __int16)(v4 >> 14)) & 0xCCCC) << 14);
  result->mValue.IValue = (v5 ^ (v5 >> 7)) & 0x550055 ^ v5 ^ (((v5 ^ (v5 >> 7)) & 0x550055) << 7);
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_GetPlayerNetWins(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  unsigned int v4; // edx
  unsigned int v5; // er8

  v4 = *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2202828i64) ^ 0x7B48A35E;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_Float;
  v5 = v4 ^ ((unsigned __int16)v4 ^ (unsigned __int16)(v4 >> 14)) & 0xCCCC ^ ((((unsigned __int16)v4 ^ (unsigned __int16)(v4 >> 14)) & 0xCCCC) << 14);
  result->mValue.IValue = (v5 ^ (v5 >> 7)) & 0x550055 ^ v5 ^ (((v5 ^ (v5 >> 7)) & 0x550055) << 7);
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_GetPlayerRank(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  int v5; // eax
  unsigned int v6; // ecx
  unsigned int v7; // edx
  int v8; // eax
  int v9; // er9
  GRADE_THRESHOLD_TABLE *v10; // rdx
  int v11; // er9
  int i; // ecx
  Scaleform::GFx::Value *v13; // rax

  if ( (*(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2208108i64) & 0x20000000) != 0 )
  {
    v5 = 0;
  }
  else
  {
    v6 = *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2202812i64) ^ 0x7B48A35E;
    v7 = v6 ^ ((unsigned __int16)v6 ^ (unsigned __int16)(v6 >> 14)) & 0xCCCC ^ ((((unsigned __int16)v6 ^ (unsigned __int16)(v6 >> 14)) & 0xCCCC) << 14);
    v8 = (v7 ^ (v7 >> 7)) & 0x550055;
    v9 = v7 ^ (v8 << 7);
    v10 = &_grade_change_table[1];
    v11 = v8 ^ v9;
    v5 = 1;
    for ( i = 1; i < 44; ++i )
    {
      if ( v10->point > v11 )
        break;
      v5 = i;
      ++v10;
    }
  }
  result->mValue.IValue = v5;
  v13 = result;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_Float;
  return v13;
}

Scaleform::GFx::Value *__fastcall extension::GFn_GetPlayerRankPoint(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  unsigned int v4; // edx
  unsigned int v5; // er8

  v4 = *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2202812i64) ^ 0x7B48A35E;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_Float;
  v5 = v4 ^ ((unsigned __int16)v4 ^ (unsigned __int16)(v4 >> 14)) & 0xCCCC ^ ((((unsigned __int16)v4 ^ (unsigned __int16)(v4 >> 14)) & 0xCCCC) << 14);
  result->mValue.IValue = (v5 ^ (v5 >> 7)) & 0x550055 ^ v5 ^ (((v5 ^ (v5 >> 7)) & 0x550055) << 7);
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_GetPlayerRecord(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  AppMain *v5; // rsi
  const char *pString; // rbp
  int v8; // ecx
  unsigned int v9; // edx
  int v10; // ecx
  unsigned int v11; // edx
  int v12; // ecx
  unsigned int v13; // edx
  float TrialsAchivedCount; // xmm6_4
  float GalleryRate; // xmm0_4
  int v16; // er9
  int v17; // er8
  unsigned __int64 v18; // rax
  char v19; // cl
  unsigned int v20; // edx
  int v21; // eax
  Scaleform::GFx::Movie *pObject; // rcx
  Scaleform::GFx::Value *v23; // rax
  int pdata[128]; // [rsp+50h] [rbp-248h] BYREF

  v5 = *(AppMain **)&AppMain::pApp;
  if ( (argv->Type & 0x40) != 0 )
    pString = *argv->mValue.pStringManaged;
  else
    pString = argv->mValue.pString;
  memset(pdata, 0, sizeof(pdata));
  v8 = *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2204824i64);
  pdata[1] = *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2204812i64);
  pdata[2] = *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2204816i64);
  pdata[3] = *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2204820i64);
  v9 = v8 ^ 0x7B48A35E ^ ((unsigned __int16)v8 ^ 0xA35E ^ (unsigned __int16)((v8 ^ 0x7B48A35Eu) >> 14)) & 0xCCCC ^ ((((unsigned __int16)v8 ^ 0xA35E ^ (unsigned __int16)((v8 ^ 0x7B48A35Eu) >> 14)) & 0xCCCC) << 14);
  v10 = *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2205008i64);
  pdata[4] = (v9 ^ (v9 >> 7)) & 0x550055 ^ v9 ^ (((v9 ^ (v9 >> 7)) & 0x550055) << 7);
  pdata[5] = *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2205004i64);
  v11 = v10 ^ 0x7B48A35E ^ ((unsigned __int16)v10 ^ 0xA35E ^ (unsigned __int16)((v10 ^ 0x7B48A35Eu) >> 14)) & 0xCCCC ^ ((((unsigned __int16)v10 ^ 0xA35E ^ (unsigned __int16)((v10 ^ 0x7B48A35Eu) >> 14)) & 0xCCCC) << 14);
  v12 = *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2204944i64);
  pdata[6] = (v11 ^ (v11 >> 7)) & 0x550055 ^ v11 ^ (((v11 ^ (v11 >> 7)) & 0x550055) << 7);
  pdata[7] = *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2204940i64);
  v13 = v12 ^ 0x7B48A35E ^ ((unsigned __int16)v12 ^ 0xA35E ^ (unsigned __int16)((v12 ^ 0x7B48A35Eu) >> 14)) & 0xCCCC ^ ((((unsigned __int16)v12 ^ 0xA35E ^ (unsigned __int16)((v12 ^ 0x7B48A35Eu) >> 14)) & 0xCCCC) << 14);
  pdata[8] = (v13 ^ (v13 >> 7)) & 0x550055 ^ v13 ^ (((v13 ^ (v13 >> 7)) & 0x550055) << 7);
  TrialsAchivedCount = (float)(int)SaveRecord_PlayerData::GetTrialsAchivedCount((SaveRecord_PlayerData *)(*(_QWORD *)&AppMain::pApp + 2202784i64));
  pdata[9] = (int)(float)((float)((float)(TrialsAchivedCount
                                        / (float)(int)SaveRecord_PlayerData::GetTrialsAchivedMax(&v5->SaveDataMain.PlayerData))
                                * 100.0)
                        * 100.0);
  GalleryRate = AppMain::GetGalleryRate(v5);
  v16 = 0;
  v17 = 1;
  pdata[10] = (int)(float)((float)(GalleryRate * 100.0) * 100.0);
  do
  {
    v18 = (unsigned __int64)(unsigned int)v17 >> 5;
    v19 = v17++ & 0x1F;
    v20 = v5->SaveDataMain.GameData.m_NetworkTitle.m_Flag[v18] & (0x80000000 >> v19);
    v21 = v16 + 1;
    if ( !v20 )
      v21 = v16;
    v16 = v21;
  }
  while ( v17 < 300 );
  pObject = ctx->m_movie.pObject;
  pdata[11] = (int)(float)((float)((float)((float)v21 / 299.0) * 100.0) * 100.0);
  Scaleform::GFx::Movie::SetVariableArray(pObject, SA_Int, pString, 0, pdata, 0xDu, SV_Sticky);
  v23 = result;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_Float;
  result->mValue.IValue = 0;
  return v23;
}

Scaleform::GFx::Value *__fastcall extension::GFn_GetPlayerRecordOfflineRanking(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  __int64 v5; // rdx
  const char *pString; // rdi
  __int64 v8; // rcx
  int *p_iWinCountOffLine; // rax
  char *v10; // r8
  __int64 v11; // r11
  int *p_iUseCountOffLine; // r10
  int v13; // edx
  int v14; // ecx
  int v15; // er9
  int v16; // edx
  int v17; // eax
  Scaleform::GFx::Value *v18; // rax
  char pdata[512]; // [rsp+50h] [rbp-9C8h] BYREF
  SaveRecord_CharacterData data; // [rsp+250h] [rbp-7C8h] BYREF

  v5 = *(_QWORD *)&AppMain::pApp;
  if ( (argv->Type & 0x40) != 0 )
    pString = *argv->mValue.pStringManaged;
  else
    pString = argv->mValue.pString;
  v8 = 61i64;
  p_iWinCountOffLine = &data.iWinCountOffLine;
  do
  {
    *((_QWORD *)p_iWinCountOffLine - 1) = 0i64;
    *(_QWORD *)p_iWinCountOffLine = 0i64;
    p_iWinCountOffLine[2] = 0;
    *(_QWORD *)(p_iWinCountOffLine + 3) = 3599999i64;
    p_iWinCountOffLine[5] = 0;
    p_iWinCountOffLine += 8;
    --v8;
  }
  while ( v8 );
  SaveRecord_PlayerData::GetCharacterOfflineRanking((SaveRecord_PlayerData *)(v5 + 2202784), &data);
  memset(pdata, 0, sizeof(pdata));
  v10 = pdata;
  v11 = 8i64;
  p_iUseCountOffLine = &data.iUseCountOffLine;
  do
  {
    v13 = *p_iUseCountOffLine;
    v14 = p_iUseCountOffLine[1];
    v15 = *p_iUseCountOffLine + p_iUseCountOffLine[2];
    *(_DWORD *)v10 = *(p_iUseCountOffLine - 1);
    *((_DWORD *)v10 + 1) = v13;
    v16 = v14 + p_iUseCountOffLine[3];
    *((_DWORD *)v10 + 2) = v14;
    if ( v15 < 1000 || v16 < 100 )
    {
      if ( v15 < 400 || v16 < 50 )
      {
        if ( v15 < 100 || v16 < 10 )
        {
          if ( v15 < 50 || v16 < 1 )
          {
            if ( v15 < 1 || (v17 = 1, v16 < 0) )
              v17 = 0;
          }
          else
          {
            v17 = 2;
          }
        }
        else
        {
          v17 = 3;
        }
      }
      else
      {
        v17 = 4;
      }
    }
    else
    {
      v17 = 5;
    }
    *((_DWORD *)v10 + 3) = v17;
    p_iUseCountOffLine += 8;
    v10 += 16;
    --v11;
  }
  while ( v11 );
  Scaleform::GFx::Movie::SetVariableArray(ctx->m_movie.pObject, SA_Int, pString, 0, pdata, 0x20u, SV_Sticky);
  v18 = result;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_Float;
  result->mValue.IValue = 0;
  return v18;
}

Scaleform::GFx::Value *__fastcall extension::GFn_GetPlayerRecordOnlineRanking(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  __int64 v5; // rdx
  const char *pString; // rdi
  __int64 v8; // rcx
  int *p_iWinCountOffLine; // rax
  char *v10; // r8
  __int64 v11; // r11
  int *p_iUseCountOffLine; // r10
  int v13; // edx
  int v14; // ecx
  int v15; // er9
  int v16; // edx
  int v17; // eax
  Scaleform::GFx::Value *v18; // rax
  char pdata[512]; // [rsp+50h] [rbp-9C8h] BYREF
  SaveRecord_CharacterData data; // [rsp+250h] [rbp-7C8h] BYREF

  v5 = *(_QWORD *)&AppMain::pApp;
  if ( (argv->Type & 0x40) != 0 )
    pString = *argv->mValue.pStringManaged;
  else
    pString = argv->mValue.pString;
  v8 = 61i64;
  p_iWinCountOffLine = &data.iWinCountOffLine;
  do
  {
    *((_QWORD *)p_iWinCountOffLine - 1) = 0i64;
    *(_QWORD *)p_iWinCountOffLine = 0i64;
    p_iWinCountOffLine[2] = 0;
    *(_QWORD *)(p_iWinCountOffLine + 3) = 3599999i64;
    p_iWinCountOffLine[5] = 0;
    p_iWinCountOffLine += 8;
    --v8;
  }
  while ( v8 );
  SaveRecord_PlayerData::GetCharacterOnlineRanking((SaveRecord_PlayerData *)(v5 + 2202784), &data);
  memset(pdata, 0, sizeof(pdata));
  v10 = pdata;
  v11 = 8i64;
  p_iUseCountOffLine = &data.iUseCountOffLine;
  do
  {
    v13 = p_iUseCountOffLine[2];
    v14 = p_iUseCountOffLine[3];
    v15 = v13 + *p_iUseCountOffLine;
    *(_DWORD *)v10 = *(p_iUseCountOffLine - 1);
    *((_DWORD *)v10 + 1) = v13;
    v16 = v14 + p_iUseCountOffLine[1];
    *((_DWORD *)v10 + 2) = v14;
    if ( v15 < 1000 || v16 < 100 )
    {
      if ( v15 < 400 || v16 < 50 )
      {
        if ( v15 < 100 || v16 < 10 )
        {
          if ( v15 < 50 || v16 < 1 )
          {
            if ( v15 < 1 || (v17 = 1, v16 < 0) )
              v17 = 0;
          }
          else
          {
            v17 = 2;
          }
        }
        else
        {
          v17 = 3;
        }
      }
      else
      {
        v17 = 4;
      }
    }
    else
    {
      v17 = 5;
    }
    *((_DWORD *)v10 + 3) = v17;
    p_iUseCountOffLine += 8;
    v10 += 16;
    --v11;
  }
  while ( v11 );
  Scaleform::GFx::Movie::SetVariableArray(ctx->m_movie.pObject, SA_Int, pString, 0, pdata, 0x20u, SV_Sticky);
  v18 = result;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_Float;
  result->mValue.IValue = 0;
  return v18;
}

Scaleform::GFx::Value *__fastcall extension::GFn_GetPlayerSelectedDevice(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  __int64 v5; // rdx
  int IValue; // eax
  int v7; // ecx

  v5 = 0i64;
  IValue = argv->mValue.IValue;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_None;
  if ( IValue )
  {
    if ( IValue == 1 )
      v5 = 2112i64;
  }
  else
  {
    v5 = 1056i64;
  }
  v7 = *(_DWORD *)(v5 + *(_QWORD *)&AppMain::pApp + 2198556);
  result->Type = VT_Float;
  result->mValue.IValue = v7;
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_GetPlayerTitle(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  __int64 v4; // rax
  int v5; // edx
  Scaleform::GFx::Value *v6; // rax

  v4 = *(_QWORD *)&AppMain::pApp;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  v5 = *(_DWORD *)(v4 + 2202804);
  v6 = result;
  result->mValue.IValue = v5;
  result->Type = VT_Float;
  return v6;
}

Scaleform::GFx::Value *__fastcall extension::GFn_GetPlayerWinRate(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  float RankMatchWinRate; // xmm0_4
  Scaleform::GFx::Value *v6; // rax

  RankMatchWinRate = SaveRecord_PlayerData::GetRankMatchWinRate((SaveRecord_PlayerData *)(*(_QWORD *)&AppMain::pApp
                                                                                        + 2202784i64));
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  v6 = result;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = 5;
  result->mValue.NValue = (float)((float)(RankMatchWinRate * 100.0) * 100.0);
  return v6;
}

Scaleform::GFx::Value *__fastcall extension::GFn_GetReplayData(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r10
  __int64 v11; // rcx
  __int64 v12; // r11
  Scaleform::GFx::Movie *pObject; // rcx
  Scaleform::GFx::Value *v14; // rax
  int pdata[31]; // [rsp+50h] [rbp-69h] BYREF
  __int64 v16; // [rsp+CCh] [rbp+13h]
  __int64 v17; // [rsp+D4h] [rbp+1Bh]
  __int64 v18; // [rsp+DCh] [rbp+23h]
  __int64 v19; // [rsp+E4h] [rbp+2Bh]
  int v20; // [rsp+ECh] [rbp+33h]

  v6 = *(_QWORD *)&AppMain::pApp + 1184i64 * argv->mValue.IValue;
  if ( *(_QWORD *)(v6 + 2388168) )
  {
    v7 = *(unsigned __int8 *)(v6 + 2388270);
    v8 = *(unsigned __int8 *)(v6 + 2388294);
    v9 = *(unsigned __int8 *)(v6 + 2388318);
    v10 = *(unsigned __int8 *)(v6 + 2388342);
    v11 = 3i64 * *(unsigned __int8 *)(v6 + 2388246);
    v12 = *(unsigned __int8 *)(v6 + 2388366);
    pdata[0] = *(unsigned __int8 *)(v6 + 2388241);
    pdata[1] = *(unsigned __int8 *)(v6 + 2388265);
    pdata[2] = *(unsigned __int8 *)(v6 + 2388289);
    pdata[3] = *(char *)(v6 + 8 * v11 + 2388244);
    pdata[4] = *(char *)(v6 + 24 * v7 + 2388244);
    pdata[5] = *(char *)(v6 + 24 * v8 + 2388244);
    pdata[6] = *(unsigned __int16 *)(v6 + 2388242);
    pdata[7] = *(unsigned __int16 *)(v6 + 2388266);
    pdata[8] = *(unsigned __int16 *)(v6 + 2388290);
    pdata[9] = *(unsigned __int8 *)(v6 + 2388313);
    pdata[10] = *(unsigned __int8 *)(v6 + 2388337);
    pdata[11] = *(unsigned __int8 *)(v6 + 2388361);
    pdata[12] = *(char *)(v6 + 24 * v9 + 2388316);
    pdata[13] = *(char *)(v6 + 24 * v10 + 2388316);
    pdata[14] = *(char *)(v6 + 24 * v12 + 2388316);
    pdata[15] = *(unsigned __int16 *)(v6 + 2388314);
    pdata[16] = *(unsigned __int16 *)(v6 + 2388338);
    pdata[17] = *(unsigned __int16 *)(v6 + 2388362);
    pdata[18] = *(unsigned __int8 *)(v6 + 2389198);
    pdata[19] = *(unsigned __int8 *)(v6 + 2389199);
    pdata[20] = *(_BYTE *)(v6 + 2389336) != 0;
    pdata[21] = *(unsigned __int8 *)(v6 + 2389202) - 1;
    pdata[22] = *(unsigned __int8 *)(v6 + 2389337);
    pdata[23] = *(unsigned __int8 *)(v6 + 2389338);
    pdata[24] = *(unsigned __int8 *)(v6 + 2389206);
    pdata[25] = *(unsigned __int8 *)(v6 + 2388248);
    pdata[26] = *(unsigned __int8 *)(v6 + 2388272);
    pdata[27] = *(unsigned __int8 *)(v6 + 2388296);
    pdata[28] = *(unsigned __int8 *)(v6 + 2388320);
    pdata[29] = *(unsigned __int8 *)(v6 + 2388344);
    pdata[30] = *(unsigned __int8 *)(v6 + 2388368);
    v16 = 0i64;
    v17 = 0i64;
    v18 = 0i64;
    pObject = ctx->m_movie.pObject;
    v19 = 0i64;
    v20 = 0;
    Scaleform::GFx::Movie::SetVariableArray(pObject, SA_Int, "REPLAY_ARRAY", 0, pdata, 0x28u, SV_Sticky);
    result->mValue.BValue = 1;
  }
  else
  {
    result->mValue.BValue = 0;
  }
  v14 = result;
  result->Type = VT_Int64;
  result->pObjectInterface = 0i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  return v14;
}

Scaleform::GFx::Value *__fastcall extension::GFn_GetReplayUserID(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  CSteamID *v6; // rdi
  char **Name; // rsi
  char **v8; // rsi
  char **v9; // rsi
  char **v10; // rsi
  char **v11; // rsi
  char **v12; // rsi
  char **v13; // rdi
  Scaleform::GFx::Value ptr; // [rsp+68h] [rbp-A0h] BYREF
  Scaleform::GFx::Value val; // [rsp+98h] [rbp-70h] BYREF
  Scaleform::GFx::Value v17; // [rsp+C8h] [rbp-40h] BYREF
  Scaleform::GFx::Value v18; // [rsp+F8h] [rbp-10h] BYREF
  Scaleform::GFx::Value v19; // [rsp+128h] [rbp+20h] BYREF
  Scaleform::GFx::Value v20; // [rsp+158h] [rbp+50h] BYREF
  Scaleform::GFx::Value v21; // [rsp+188h] [rbp+80h] BYREF

  v6 = (CSteamID *)(1184i64 * argv->mValue.IValue + *(_QWORD *)&AppMain::pApp + 2388168i64);
  if ( v6->m_steamid.m_unAll64Bits )
  {
    `eh vector constructor iterator'(
      &ptr,
      0x30ui64,
      7ui64,
      (void (__fastcall *)(void *))Scaleform::GFx::Value::Value,
      (void (__fastcall *)(void *))Scaleform::GFx::Value::~Value);
    Name = SteamNameCache::getName(SteamNameCache::ms_instance, v6[8]);
    if ( (ptr.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(ptr.pObjectInterface, &ptr, ptr.mValue.pStringManaged);
      ptr.pObjectInterface = 0i64;
    }
    ptr.Type = 6;
    ptr.mValue.pString = (const char *)Name;
    v8 = SteamNameCache::getName(SteamNameCache::ms_instance, v6[11]);
    if ( (val.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(val.pObjectInterface, &val, val.mValue.pStringManaged);
      val.pObjectInterface = 0i64;
    }
    val.Type = 6;
    val.mValue.pString = (const char *)v8;
    v9 = SteamNameCache::getName(SteamNameCache::ms_instance, v6[14]);
    if ( (v17.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v17.pObjectInterface, &v17, v17.mValue.pStringManaged);
      v17.pObjectInterface = 0i64;
    }
    v17.Type = 6;
    v17.mValue.pString = (const char *)v9;
    v10 = SteamNameCache::getName(SteamNameCache::ms_instance, v6[17]);
    if ( (v18.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v18.pObjectInterface, &v18, v18.mValue.pStringManaged);
      v18.pObjectInterface = 0i64;
    }
    v18.Type = 6;
    v18.mValue.pString = (const char *)v10;
    v11 = SteamNameCache::getName(SteamNameCache::ms_instance, v6[20]);
    if ( (v19.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v19.pObjectInterface, &v19, v19.mValue.pStringManaged);
      v19.pObjectInterface = 0i64;
    }
    v19.Type = 6;
    v19.mValue.pString = (const char *)v11;
    v12 = SteamNameCache::getName(SteamNameCache::ms_instance, v6[23]);
    if ( (v20.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v20.pObjectInterface, &v20, v20.mValue.pStringManaged);
      v20.pObjectInterface = 0i64;
    }
    v20.Type = 6;
    v20.mValue.pString = (const char *)v12;
    v13 = SteamNameCache::getName(SteamNameCache::ms_instance, v6[144]);
    if ( (v21.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v21.pObjectInterface, &v21, v21.mValue.pStringManaged);
      v21.pObjectInterface = 0i64;
    }
    v21.Type = 6;
    v21.mValue.pString = (const char *)v13;
    Scaleform::GFx::Movie::SetVariableArray(ctx->m_movie.pObject, SA_Value, "REPLAY_ID_ARRAY", 0, &ptr, 7u, SV_Sticky);
    result->pPrev = (Scaleform::GFx::Value *)-1i64;
    result->pNext = (Scaleform::GFx::Value *)-1i64;
    result->pObjectInterface = 0i64;
    result->Type = VT_Int64;
    result->mValue.BValue = 1;
    `eh vector destructor iterator'(&ptr, 0x30ui64, 7ui64, (void (__fastcall *)(void *))Scaleform::GFx::Value::~Value);
  }
  else
  {
    result->pPrev = (Scaleform::GFx::Value *)-1i64;
    result->pNext = (Scaleform::GFx::Value *)-1i64;
    result->pObjectInterface = 0i64;
    result->Type = VT_Int64;
    result->mValue.BValue = 0;
  }
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_GetRoomInfo(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  const char *pString; // rsi
  int gameRule; // edi
  int roundTimerType; // edi
  int roomBattleType; // edi
  int liveType; // edi
  int roundType; // edi
  int maxSlot; // edi
  int privateSlot; // edi
  Scaleform::GFx::Value ptr; // [rsp+60h] [rbp-A0h] BYREF
  Scaleform::GFx::Value val; // [rsp+90h] [rbp-70h] BYREF
  Scaleform::GFx::Value v17; // [rsp+C0h] [rbp-40h] BYREF
  Scaleform::GFx::Value v18; // [rsp+F0h] [rbp-10h] BYREF
  Scaleform::GFx::Value v19; // [rsp+120h] [rbp+20h] BYREF
  Scaleform::GFx::Value v20; // [rsp+150h] [rbp+50h] BYREF
  Scaleform::GFx::Value v21; // [rsp+180h] [rbp+80h] BYREF
  Scaleform::GFx::Value v22; // [rsp+1B0h] [rbp+B0h] BYREF

  if ( (argv->Type & 0x40) != 0 )
    pString = *argv->mValue.pStringManaged;
  else
    pString = argv->mValue.pString;
  `eh vector constructor iterator'(
    &ptr,
    0x30ui64,
    0x14ui64,
    (void (__fastcall *)(void *))Scaleform::GFx::Value::Value,
    (void (__fastcall *)(void *))Scaleform::GFx::Value::~Value);
  *(_OWORD *)extension::stringBuff = *(_OWORD *)g_NetworkManager.gamedata.m_RoomName;
  *(_OWORD *)&extension::stringBuff[16] = *(_OWORD *)&g_NetworkManager.gamedata.m_RoomName[16];
  *(_OWORD *)&extension::stringBuff[32] = *(_OWORD *)&g_NetworkManager.gamedata.m_RoomName[32];
  *(_OWORD *)&extension::stringBuff[48] = *(_OWORD *)&g_NetworkManager.gamedata.m_RoomName[48];
  *(_OWORD *)&extension::stringBuff[64] = *(_OWORD *)&g_NetworkManager.gamedata.m_RoomName[64];
  *(_OWORD *)&extension::stringBuff[80] = *(_OWORD *)&g_NetworkManager.gamedata.m_RoomName[80];
  *(_OWORD *)&extension::stringBuff[96] = *(_OWORD *)&g_NetworkManager.gamedata.m_RoomName[96];
  *(_OWORD *)&extension::stringBuff[112] = *(_OWORD *)&g_NetworkManager.gamedata.m_RoomName[112];
  extension::stringBuff[128] = g_NetworkManager.gamedata.m_RoomName[128];
  gameRule = g_NetworkManager.gamedata.gameRule;
  if ( (ptr.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(ptr.pObjectInterface, &ptr, ptr.mValue.pStringManaged);
    ptr.pObjectInterface = 0i64;
  }
  ptr.Type = 6;
  ptr.mValue.pString = extension::stringBuff;
  if ( (val.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(val.pObjectInterface, &val, val.mValue.pStringManaged);
    val.pObjectInterface = 0i64;
  }
  val.Type = VT_Float;
  val.mValue.IValue = gameRule;
  roundTimerType = g_NetworkManager.gamedata.roundTimerType;
  if ( (v17.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v17.pObjectInterface, &v17, v17.mValue.pStringManaged);
    v17.pObjectInterface = 0i64;
  }
  v17.Type = VT_Float;
  v17.mValue.IValue = roundTimerType;
  roomBattleType = g_NetworkManager.gamedata.roomBattleType;
  if ( (v18.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v18.pObjectInterface, &v18, v18.mValue.pStringManaged);
    v18.pObjectInterface = 0i64;
  }
  v18.Type = VT_Float;
  v18.mValue.IValue = roomBattleType;
  liveType = g_NetworkManager.gamedata.liveType;
  if ( (v19.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v19.pObjectInterface, &v19, v19.mValue.pStringManaged);
    v19.pObjectInterface = 0i64;
  }
  v19.Type = VT_Float;
  v19.mValue.IValue = liveType;
  roundType = g_NetworkManager.gamedata.roundType;
  if ( (v20.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v20.pObjectInterface, &v20, v20.mValue.pStringManaged);
    v20.pObjectInterface = 0i64;
  }
  v20.Type = VT_Float;
  v20.mValue.IValue = roundType;
  maxSlot = g_NetworkManager.gamedata.maxSlot;
  if ( (v21.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v21.pObjectInterface, &v21, v21.mValue.pStringManaged);
    v21.pObjectInterface = 0i64;
  }
  v21.Type = VT_Float;
  v21.mValue.IValue = maxSlot;
  privateSlot = g_NetworkManager.gamedata.privateSlot;
  if ( (v22.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v22.pObjectInterface, &v22, v22.mValue.pStringManaged);
    v22.pObjectInterface = 0i64;
  }
  v22.Type = VT_Float;
  v22.mValue.IValue = privateSlot;
  Scaleform::GFx::Movie::SetVariableArray(ctx->m_movie.pObject, SA_Value, pString, 0, &ptr, 8u, SV_Sticky);
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_Float;
  result->mValue.IValue = 0;
  `eh vector destructor iterator'(&ptr, 0x30ui64, 0x14ui64, (void (__fastcall *)(void *))Scaleform::GFx::Value::~Value);
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_GetRoomInfoArray(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  __int64 v5; // rdi
  const char *pString; // r13
  __int64 IValue; // rbx
  _OWORD *v8; // rax
  Fw::ROOM_ATTR *m_SearchEndRoomAttr; // rcx
  __int64 v10; // rdx
  __int64 v11; // r12
  __int64 v12; // rsi
  int v13; // eax
  int v14; // ebx
  int v15; // eax
  double v16; // xmm0_8
  char v17; // al
  int v18; // er14
  unsigned __int8 v19; // al
  const char *iso3166_3; // rcx
  char v21; // al
  int v22; // ebx
  int v23; // ebx
  int v24; // ebx
  int v25; // ebx
  int v26; // ebx
  __int64 v27; // rbx
  const char *CString; // rbx
  Scaleform::GFx::Value ptr; // [rsp+60h] [rbp-A0h] BYREF
  Scaleform::GFx::Value val; // [rsp+90h] [rbp-70h] BYREF
  Scaleform::GFx::Value v33; // [rsp+C0h] [rbp-40h] BYREF
  Scaleform::GFx::Value v34; // [rsp+F0h] [rbp-10h] BYREF
  Scaleform::GFx::Value v35; // [rsp+120h] [rbp+20h] BYREF
  Scaleform::GFx::Value v36; // [rsp+150h] [rbp+50h] BYREF
  Scaleform::GFx::Value v37; // [rsp+180h] [rbp+80h] BYREF
  Scaleform::GFx::Value v38; // [rsp+1B0h] [rbp+B0h] BYREF
  Scaleform::GFx::Value v39; // [rsp+1E0h] [rbp+E0h] BYREF
  Scaleform::GFx::Value v40; // [rsp+210h] [rbp+110h] BYREF
  Scaleform::GFx::Value v41; // [rsp+240h] [rbp+140h] BYREF
  __int16 v42; // [rsp+420h] [rbp+320h] BYREF
  char v43; // [rsp+422h] [rbp+322h]
  char v44; // [rsp+423h] [rbp+323h]

  v5 = *(_QWORD *)&AppMain::pApp;
  if ( (argv->Type & 0x40) != 0 )
    pString = *argv->mValue.pStringManaged;
  else
    pString = argv->mValue.pString;
  IValue = argv[1].mValue.IValue;
  `eh vector constructor iterator'(
    &ptr,
    0x30ui64,
    0x14ui64,
    (void (__fastcall *)(void *))Scaleform::GFx::Value::Value,
    (void (__fastcall *)(void *))Scaleform::GFx::Value::~Value);
  v8 = (_OWORD *)(v5 + 38576);
  m_SearchEndRoomAttr = g_NetworkManager.m_SearchEndRoomAttr;
  v10 = 421i64;
  do
  {
    *v8 = *(_OWORD *)&m_SearchEndRoomAttr->m_Attr[0].num;
    v8[1] = *(_OWORD *)&m_SearchEndRoomAttr->m_Attr[1].attributeIndex;
    v8[2] = *(_OWORD *)&m_SearchEndRoomAttr->m_Attr[2].searchOperator;
    v8[3] = *(_OWORD *)&m_SearchEndRoomAttr->m_Attr[4].num;
    v8[4] = *(_OWORD *)&m_SearchEndRoomAttr->m_Attr[5].attributeIndex;
    v8[5] = *(_OWORD *)&m_SearchEndRoomAttr->m_Attr[6].searchOperator;
    v8[6] = *(_OWORD *)&m_SearchEndRoomAttr->m_Attr[8].num;
    v8 += 8;
    *(v8 - 1) = *(_OWORD *)&m_SearchEndRoomAttr->m_Attr[9].attributeIndex;
    m_SearchEndRoomAttr = (Fw::ROOM_ATTR *)((char *)m_SearchEndRoomAttr + 128);
    --v10;
  }
  while ( v10 );
  *v8 = *(_OWORD *)&m_SearchEndRoomAttr->m_Attr[0].num;
  v8[1] = *(_OWORD *)&m_SearchEndRoomAttr->m_Attr[1].attributeIndex;
  v8[2] = *(_OWORD *)&m_SearchEndRoomAttr->m_Attr[2].searchOperator;
  v8[3] = *(_OWORD *)&m_SearchEndRoomAttr->m_Attr[4].num;
  v8[4] = *(_OWORD *)&m_SearchEndRoomAttr->m_Attr[5].attributeIndex;
  v8[5] = *(_OWORD *)&m_SearchEndRoomAttr->m_Attr[6].searchOperator;
  v8[6] = *(_OWORD *)&m_SearchEndRoomAttr->m_Attr[8].num;
  v11 = IValue;
  v12 = 1080 * IValue;
  v13 = *(_DWORD *)(1080 * IValue + v5 + 38600) & 0xF0;
  v14 = 4;
  if ( v13 != 80 )
    v14 = 0;
  if ( v13 == 64 )
    v14 = 3;
  if ( v13 == 48 )
    v14 = 2;
  if ( v13 == 32 )
    v14 = 1;
  v15 = *(_DWORD *)(v12 + v5 + 39652);
  if ( v15 != 0x7FFFFFFF )
  {
    v16 = (double)v15 * 0.5 * 1.100000023841858;
    if ( v16 < 111000.0 )
    {
      if ( v16 < 95000.0 )
      {
        if ( v16 < 78000.0 )
        {
          if ( v16 < 61000.0 )
          {
            if ( v16 < 44500.0 )
            {
              if ( v16 < 28000.0 )
              {
                v17 = 0;
                if ( v16 >= 11150.0 )
                  v17 = -1;
              }
              else
              {
                v17 = -2;
              }
            }
            else
            {
              v17 = -3;
            }
          }
          else
          {
            v17 = -4;
          }
        }
        else
        {
          v17 = -5;
        }
      }
      else
      {
        v17 = -6;
      }
    }
    else
    {
      v17 = -7;
    }
    switch ( v17 )
    {
      case -7:
      case -6:
        v14 -= 3;
        break;
      case -5:
      case -4:
        v14 -= 2;
        break;
      case -3:
      case -2:
        --v14;
        break;
      default:
        break;
    }
    if ( v14 <= 0 )
      v14 = 1;
  }
  if ( (ptr.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(ptr.pObjectInterface, &ptr, ptr.mValue.pStringManaged);
    ptr.pObjectInterface = 0i64;
  }
  ptr.Type = 6;
  ptr.mValue.pString = (const char *)(v12 + v5 + 38972);
  v18 = *(_DWORD *)(v12 + v5 + 38636) & 0xF;
  if ( (val.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(val.pObjectInterface, &val, val.mValue.pStringManaged);
    val.pObjectInterface = 0i64;
  }
  val.Type = VT_Float;
  val.mValue.IValue = v18;
  if ( Fw::MatchingTarget::SearchRoomInfo[v11].qosFlag )
  {
    if ( (v33.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v33.pObjectInterface, &v33, v33.mValue.pStringManaged);
      v33.pObjectInterface = 0i64;
    }
    v33.mValue.IValue = v14;
  }
  else
  {
    if ( (v33.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v33.pObjectInterface, &v33, v33.mValue.pStringManaged);
      v33.pObjectInterface = 0i64;
    }
    v33.mValue.IValue = -1;
  }
  v33.Type = VT_Float;
  if ( *(int *)(v12 + v5 + 38576) >= 0 )
  {
    v19 = *(_BYTE *)(v12 + v5 + 38576);
    if ( v19 >= 0x47u )
      iso3166_3 = Fw::NetworkCommon::m_ContryList[0].iso3166_3;
    else
      iso3166_3 = Fw::NetworkCommon::m_ContryList[v19].iso3166_3;
    v42 = *(_WORD *)iso3166_3;
    v21 = iso3166_3[2];
    v44 = 0;
    v43 = v21;
    if ( (v34.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v34.pObjectInterface, &v34, v34.mValue.pStringManaged);
      v34.pObjectInterface = 0i64;
    }
    v34.Type = 6;
    v34.mValue.pString = (const char *)&v42;
  }
  v22 = *(_DWORD *)(v12 + v5 + 39648);
  if ( (v35.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v35.pObjectInterface, &v35, v35.mValue.pStringManaged);
    v35.pObjectInterface = 0i64;
  }
  v35.Type = VT_Float;
  v35.mValue.IValue = v22;
  v23 = *(_DWORD *)(v12 + v5 + 38964);
  if ( (v36.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v36.pObjectInterface, &v36, v36.mValue.pStringManaged);
    v36.pObjectInterface = 0i64;
  }
  v36.Type = VT_Float;
  v36.mValue.IValue = v23;
  v24 = *(_DWORD *)(v12 + v5 + 38648);
  if ( (v37.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v37.pObjectInterface, &v37, v37.mValue.pStringManaged);
    v37.pObjectInterface = 0i64;
  }
  v37.Type = VT_Float;
  v37.mValue.IValue = v24;
  v25 = *(_DWORD *)(v12 + v5 + 38660);
  if ( (v38.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v38.pObjectInterface, &v38, v38.mValue.pStringManaged);
    v38.pObjectInterface = 0i64;
  }
  v38.Type = VT_Float;
  v38.mValue.IValue = v25;
  v26 = (*(_DWORD *)(v12 + v5 + 38576) & 0x1000) == 0;
  if ( (v39.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v39.pObjectInterface, &v39, v39.mValue.pStringManaged);
    v39.pObjectInterface = 0i64;
  }
  v39.Type = VT_Float;
  v39.mValue.IValue = v26;
  v27 = *(_QWORD *)(v12 + v5 + 39640);
  if ( (v40.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v40.pObjectInterface, &v40, v40.mValue.pStringManaged);
    v40.pObjectInterface = 0i64;
  }
  v40.Type = VT_Float;
  v40.mValue.IValue = v27;
  CString = AgString::getCString((AgString *)(v12 + v5 + 39104));
  if ( (v41.Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v41.pObjectInterface, &v41, v41.mValue.pStringManaged);
    v41.pObjectInterface = 0i64;
  }
  v41.Type = 6;
  v41.mValue.pString = CString;
  Scaleform::GFx::Movie::SetVariableArray(ctx->m_movie.pObject, SA_Value, pString, 0, &ptr, 0xBu, SV_Sticky);
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_Float;
  result->mValue.IValue = 0;
  `eh vector destructor iterator'(&ptr, 0x30ui64, 0x14ui64, (void (__fastcall *)(void *))Scaleform::GFx::Value::~Value);
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_GetRoomMemberInfo(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  __int64 v6; // rbx
  _OWORD *v7; // rcx
  NET_USER_DATA *player_data; // rax
  __int64 v9; // rdx
  const char *pString; // r15
  __int64 IValue; // r14
  __int64 v12; // rsi
  char *v13; // rcx
  char v14; // al
  char **Name; // rbx
  int v16; // ebx
  int v17; // ebx
  int v18; // ebx
  int v19; // ebx
  int v20; // ebx
  bool v21; // bl
  int v22; // ebx
  bool chatOffFlag; // bl
  int v24; // ebx
  Scaleform::GFx::Value ptr; // [rsp+60h] [rbp-A0h] BYREF
  Scaleform::GFx::Value val; // [rsp+90h] [rbp-70h] BYREF
  Scaleform::GFx::Value v28; // [rsp+C0h] [rbp-40h] BYREF
  Scaleform::GFx::Value v29; // [rsp+F0h] [rbp-10h] BYREF
  Scaleform::GFx::Value v30; // [rsp+120h] [rbp+20h] BYREF
  Scaleform::GFx::Value v31; // [rsp+150h] [rbp+50h] BYREF
  Scaleform::GFx::Value v32; // [rsp+180h] [rbp+80h] BYREF
  Scaleform::GFx::Value v33; // [rsp+1B0h] [rbp+B0h] BYREF
  Scaleform::GFx::Value v34; // [rsp+1E0h] [rbp+E0h] BYREF
  Scaleform::GFx::Value v35; // [rsp+210h] [rbp+110h] BYREF
  Scaleform::GFx::Value v36; // [rsp+240h] [rbp+140h] BYREF

  v6 = *(_QWORD *)&AppMain::pApp;
  v7 = (_OWORD *)(*(_QWORD *)&AppMain::pApp + 2195412i64);
  player_data = g_NetworkManager.gamedata.player_data;
  v9 = 11i64;
  do
  {
    *v7 = *(_OWORD *)&player_data->steamId;
    v7[1] = *((_OWORD *)player_data + 1);
    v7[2] = *((_OWORD *)player_data + 2);
    v7[3] = *((_OWORD *)player_data + 3);
    v7[4] = *(_OWORD *)&player_data->stageTelop[12];
    v7[5] = *(_OWORD *)&player_data->stageTelop[28];
    v7[6] = *(_OWORD *)&player_data->stageTelop[44];
    v7 += 8;
    *(v7 - 1) = *(_OWORD *)&player_data->stageTelop[60];
    player_data = (NET_USER_DATA *)((char *)player_data + 128);
    --v9;
  }
  while ( v9 );
  *(_QWORD *)v7 = player_data->steamId;
  if ( (argv->Type & 0x40) != 0 )
    pString = *argv->mValue.pStringManaged;
  else
    pString = argv->mValue.pString;
  IValue = argv[1].mValue.IValue;
  `eh vector constructor iterator'(
    &ptr,
    0x30ui64,
    0x14ui64,
    (void (__fastcall *)(void *))Scaleform::GFx::Value::Value,
    (void (__fastcall *)(void *))Scaleform::GFx::Value::~Value);
  v12 = v6 + 118 * IValue;
  if ( *(_QWORD *)(v12 + 2195412) )
  {
    v13 = (char *)(v12 + 2195525);
    do
    {
      v14 = *v13;
      extension::stringBuff[(_QWORD)v13 - 2195525 - v12] = *v13;
      ++v13;
    }
    while ( v14 );
    Name = SteamNameCache::getName(SteamNameCache::ms_instance, *(CSteamID *)(v12 + 2195412));
    if ( (ptr.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(ptr.pObjectInterface, &ptr, ptr.mValue.pStringManaged);
      ptr.pObjectInterface = 0i64;
    }
    ptr.Type = 6;
    ptr.mValue.pString = (const char *)Name;
    if ( (val.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(val.pObjectInterface, &val, val.mValue.pStringManaged);
      val.pObjectInterface = 0i64;
    }
    val.Type = 6;
    val.mValue.pString = extension::stringBuff;
    v16 = (*(_DWORD *)(v12 + 2195428) >> 21) & 0x1FF;
    if ( (v28.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v28.pObjectInterface, &v28, v28.mValue.pStringManaged);
      v28.pObjectInterface = 0i64;
    }
    v28.Type = VT_Float;
    v28.mValue.IValue = v16;
    v17 = (*(_DWORD *)(v12 + 2195424) >> 14) & 0x7F;
    if ( (v29.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v29.pObjectInterface, &v29, v29.mValue.pStringManaged);
      v29.pObjectInterface = 0i64;
    }
    v29.Type = VT_Float;
    v29.mValue.IValue = v17;
    v18 = *(_DWORD *)(v12 + 2195428) & 0x7F;
    if ( (v30.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v30.pObjectInterface, &v30, v30.mValue.pStringManaged);
      v30.pObjectInterface = 0i64;
    }
    v30.Type = VT_Float;
    v30.mValue.IValue = v18;
    v19 = (*(_DWORD *)(v12 + 2195428) >> 7) & 7;
    if ( (v31.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v31.pObjectInterface, &v31, v31.mValue.pStringManaged);
      v31.pObjectInterface = 0i64;
    }
    v31.Type = VT_Float;
    v31.mValue.IValue = v19;
    v20 = (*(_DWORD *)(v12 + 2195428) >> 18) & 3;
    if ( (v32.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v32.pObjectInterface, &v32, v32.mValue.pStringManaged);
      v32.pObjectInterface = 0i64;
    }
    v32.Type = VT_Float;
    v32.mValue.IValue = v20;
    v21 = g_NetworkManager.gamedata.speakFlag[(char)IValue] > 0;
    if ( (v33.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v33.pObjectInterface, &v33, v33.mValue.pStringManaged);
      v33.pObjectInterface = 0i64;
    }
    v33.Type = VT_Int64;
    v33.mValue.BValue = v21;
    switch ( (*(_DWORD *)(v12 + 2195428) >> 15) & 7 )
    {
      case 2:
      case 3:
        v22 = 2;
        break;
      case 4:
      case 5:
        v22 = 3;
        break;
      case 6:
      case 7:
        v22 = 4;
        break;
      default:
        v22 = 1;
        break;
    }
    if ( (v34.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v34.pObjectInterface, &v34, v34.mValue.pStringManaged);
      v34.pObjectInterface = 0i64;
    }
    v34.Type = VT_Float;
    v34.mValue.IValue = v22;
    chatOffFlag = g_NetworkManager.gamedata.playerDataSub[IValue].chatOffFlag;
    if ( (v35.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v35.pObjectInterface, &v35, v35.mValue.pStringManaged);
      v35.pObjectInterface = 0i64;
    }
    v35.Type = VT_Int64;
    v35.mValue.BValue = chatOffFlag;
    v24 = (*(_DWORD *)(v12 + 2195460) >> 3) & 3;
    if ( (v36.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v36.pObjectInterface, &v36, v36.mValue.pStringManaged);
      v36.pObjectInterface = 0i64;
    }
    v36.Type = VT_Float;
    v36.mValue.IValue = v24;
    Scaleform::GFx::Movie::SetVariableArray(ctx->m_movie.pObject, SA_Value, pString, 0, &ptr, 0xBu, SV_Sticky);
    result->pPrev = (Scaleform::GFx::Value *)-1i64;
    result->pNext = (Scaleform::GFx::Value *)-1i64;
    result->pObjectInterface = 0i64;
    result->Type = VT_Float;
    result->mValue.IValue = 1;
  }
  else
  {
    result->pPrev = (Scaleform::GFx::Value *)-1i64;
    result->pNext = (Scaleform::GFx::Value *)-1i64;
    result->pObjectInterface = 0i64;
    result->Type = VT_Float;
    result->mValue.IValue = -1;
  }
  `eh vector destructor iterator'(&ptr, 0x30ui64, 0x14ui64, (void (__fastcall *)(void *))Scaleform::GFx::Value::~Value);
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_GetRoomSettingFreeParty(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  _DWORD *v6; // rsi
  const char *pString; // r15
  int v8; // ebx
  __int64 v9; // rax
  int v10; // ebx
  __int64 v11; // rax
  int v12; // ebx
  const NETWORK_ANTENNA_SELECT_UI *v13; // rax
  int v14; // ebx
  int v16[4]; // [rsp+58h] [rbp-A8h]
  __m128i si128; // [rsp+68h] [rbp-98h]
  Scaleform::GFx::Value ptr; // [rsp+80h] [rbp-80h] BYREF
  Scaleform::GFx::Value val; // [rsp+B0h] [rbp-50h] BYREF
  Scaleform::GFx::Value v20; // [rsp+E0h] [rbp-20h] BYREF
  Scaleform::GFx::Value v21; // [rsp+110h] [rbp+10h] BYREF
  Scaleform::GFx::Value v22; // [rsp+140h] [rbp+40h] BYREF
  Scaleform::GFx::Value v23; // [rsp+170h] [rbp+70h] BYREF
  Scaleform::GFx::Value v24; // [rsp+1A0h] [rbp+A0h] BYREF
  Scaleform::GFx::Value v25; // [rsp+1D0h] [rbp+D0h] BYREF

  v6 = *(_DWORD **)&AppMain::pApp;
  if ( (argv->Type & 0x40) != 0 )
    pString = *argv->mValue.pStringManaged;
  else
    pString = argv->mValue.pString;
  if ( !memcmp(
          (const void *)(*(_QWORD *)&AppMain::pApp + 2192688i64),
          (const void *)(*(_QWORD *)&AppMain::pApp + 2192516i64),
          0xACui64) )
  {
    result->pPrev = (Scaleform::GFx::Value *)-1i64;
    result->pNext = (Scaleform::GFx::Value *)-1i64;
    result->pObjectInterface = 0i64;
    result->Type = VT_Float;
    result->mValue.IValue = 0;
  }
  else
  {
    `eh vector constructor iterator'(
      &ptr,
      0x30ui64,
      0x28ui64,
      (void (__fastcall *)(void *))Scaleform::GFx::Value::Value,
      (void (__fastcall *)(void *))Scaleform::GFx::Value::~Value);
    v16[0] = 0;
    v16[1] = 4;
    v16[2] = 5;
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    if ( (ptr.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(ptr.pObjectInterface, &ptr, ptr.mValue.pStringManaged);
      ptr.pObjectInterface = 0i64;
    }
    ptr.Type = VT_Float;
    ptr.mValue.IValue = -1;
    v8 = 0;
    v9 = 0i64;
    while ( v16[v9] != v6[548210] )
    {
      ++v8;
      if ( ++v9 >= 3 )
      {
        v8 = 0;
        break;
      }
    }
    if ( (val.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(val.pObjectInterface, &val, val.mValue.pStringManaged);
      val.pObjectInterface = 0i64;
    }
    val.Type = VT_Float;
    val.mValue.IValue = v8;
    v10 = 0;
    v11 = 0i64;
    while ( si128.m128i_i32[v11] != v6[548212] )
    {
      ++v10;
      if ( ++v11 >= 4 )
      {
        v10 = 0;
        break;
      }
    }
    if ( (v20.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v20.pObjectInterface, &v20, v20.mValue.pStringManaged);
      v20.pObjectInterface = 0i64;
    }
    v20.Type = VT_Float;
    v20.mValue.IValue = v10;
    v12 = 0;
    v13 = extension::antenna_tbl;
    while ( *v13 != v6[548172] )
    {
      ++v12;
      if ( (__int64)++v13 >= (__int64)"$DeviceFont" )
      {
        v12 = 0;
        break;
      }
    }
    if ( (v21.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v21.pObjectInterface, &v21, v21.mValue.pStringManaged);
      v21.pObjectInterface = 0i64;
    }
    v21.Type = VT_Float;
    v21.mValue.IValue = v12;
    v14 = v6[548173] != -1;
    if ( (v22.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v22.pObjectInterface, &v22, v22.mValue.pStringManaged);
      v22.pObjectInterface = 0i64;
    }
    v22.Type = VT_Float;
    v22.mValue.IValue = v14;
    if ( (v23.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v23.pObjectInterface, &v23, v23.mValue.pStringManaged);
      v23.pObjectInterface = 0i64;
    }
    v23.Type = VT_Float;
    v23.mValue.IValue = 6;
    if ( (v24.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v24.pObjectInterface, &v24, v24.mValue.pStringManaged);
      v24.pObjectInterface = 0i64;
    }
    v24.Type = VT_Float;
    v24.mValue.IValue = 0;
    if ( (v25.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v25.pObjectInterface, &v25, v25.mValue.pStringManaged);
      v25.pObjectInterface = 0i64;
    }
    v25.Type = VT_Float;
    v25.mValue.IValue = -2;
    Scaleform::GFx::Movie::SetVariableArray(ctx->m_movie.pObject, SA_Value, pString, 0, &ptr, 8u, SV_Sticky);
    result->pPrev = (Scaleform::GFx::Value *)-1i64;
    result->pNext = (Scaleform::GFx::Value *)-1i64;
    result->pObjectInterface = 0i64;
    result->Type = VT_Float;
    result->mValue.IValue = 0;
    `eh vector destructor iterator'(
      &ptr,
      0x30ui64,
      0x28ui64,
      (void (__fastcall *)(void *))Scaleform::GFx::Value::~Value);
  }
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_GetRoomSettingFreeSingle(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  _DWORD *v6; // rsi
  const char *pString; // r15
  int v8; // ebx
  __int64 v9; // rax
  int v10; // ebx
  __int64 v11; // rax
  int v12; // ebx
  __int64 v13; // rax
  int v14; // ebx
  const NETWORK_ANTENNA_SELECT_UI *v15; // rax
  int v16; // ebx
  int v18[4]; // [rsp+58h] [rbp-A8h]
  __m128i si128; // [rsp+68h] [rbp-98h]
  __m128i v20; // [rsp+78h] [rbp-88h]
  Scaleform::GFx::Value ptr; // [rsp+90h] [rbp-70h] BYREF
  Scaleform::GFx::Value val; // [rsp+C0h] [rbp-40h] BYREF
  Scaleform::GFx::Value v23; // [rsp+F0h] [rbp-10h] BYREF
  Scaleform::GFx::Value v24; // [rsp+120h] [rbp+20h] BYREF
  Scaleform::GFx::Value v25; // [rsp+150h] [rbp+50h] BYREF
  Scaleform::GFx::Value v26; // [rsp+180h] [rbp+80h] BYREF
  Scaleform::GFx::Value v27; // [rsp+1B0h] [rbp+B0h] BYREF
  Scaleform::GFx::Value v28; // [rsp+1E0h] [rbp+E0h] BYREF
  Scaleform::GFx::Value v29; // [rsp+210h] [rbp+110h] BYREF

  v6 = *(_DWORD **)&AppMain::pApp;
  if ( (argv->Type & 0x40) != 0 )
    pString = *argv->mValue.pStringManaged;
  else
    pString = argv->mValue.pString;
  if ( !memcmp(
          (const void *)(*(_QWORD *)&AppMain::pApp + 2192688i64),
          (const void *)(*(_QWORD *)&AppMain::pApp + 2192516i64),
          0xACui64) )
  {
    result->pPrev = (Scaleform::GFx::Value *)-1i64;
    result->pNext = (Scaleform::GFx::Value *)-1i64;
    result->pObjectInterface = 0i64;
    result->Type = VT_Float;
    result->mValue.IValue = 0;
  }
  else
  {
    `eh vector constructor iterator'(
      &ptr,
      0x30ui64,
      0x28ui64,
      (void (__fastcall *)(void *))Scaleform::GFx::Value::Value,
      (void (__fastcall *)(void *))Scaleform::GFx::Value::~Value);
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    v20 = si128;
    v18[0] = 1;
    v18[1] = 2;
    v18[2] = 3;
    if ( (ptr.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(ptr.pObjectInterface, &ptr, ptr.mValue.pStringManaged);
      ptr.pObjectInterface = 0i64;
    }
    ptr.Type = VT_Float;
    ptr.mValue.IValue = -1;
    v8 = 0;
    v9 = 0i64;
    while ( si128.m128i_i32[v9] != v6[548210] )
    {
      ++v8;
      if ( ++v9 >= 4 )
      {
        v8 = 0;
        break;
      }
    }
    if ( (val.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(val.pObjectInterface, &val, val.mValue.pStringManaged);
      val.pObjectInterface = 0i64;
    }
    val.Type = VT_Float;
    val.mValue.IValue = v8;
    v10 = 0;
    v11 = 0i64;
    while ( v18[v11] != v6[548211] )
    {
      ++v10;
      if ( ++v11 >= 3 )
      {
        v10 = 0;
        break;
      }
    }
    if ( (v23.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v23.pObjectInterface, &v23, v23.mValue.pStringManaged);
      v23.pObjectInterface = 0i64;
    }
    v23.Type = VT_Float;
    v23.mValue.IValue = v10;
    v12 = 0;
    v13 = 0i64;
    while ( v20.m128i_i32[v13] != v6[548212] )
    {
      ++v12;
      if ( ++v13 >= 4 )
      {
        v12 = 0;
        break;
      }
    }
    if ( (v24.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v24.pObjectInterface, &v24, v24.mValue.pStringManaged);
      v24.pObjectInterface = 0i64;
    }
    v24.Type = VT_Float;
    v24.mValue.IValue = v12;
    v14 = 0;
    v15 = extension::antenna_tbl;
    while ( *v15 != v6[548172] )
    {
      ++v14;
      if ( (__int64)++v15 >= (__int64)"$DeviceFont" )
      {
        v14 = 0;
        break;
      }
    }
    if ( (v25.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v25.pObjectInterface, &v25, v25.mValue.pStringManaged);
      v25.pObjectInterface = 0i64;
    }
    v25.Type = VT_Float;
    v25.mValue.IValue = v14;
    v16 = v6[548173] != -1;
    if ( (v26.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v26.pObjectInterface, &v26, v26.mValue.pStringManaged);
      v26.pObjectInterface = 0i64;
    }
    v26.Type = VT_Float;
    v26.mValue.IValue = v16;
    if ( (v27.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v27.pObjectInterface, &v27, v27.mValue.pStringManaged);
      v27.pObjectInterface = 0i64;
    }
    v27.Type = VT_Float;
    v27.mValue.IValue = 6;
    if ( (v28.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v28.pObjectInterface, &v28, v28.mValue.pStringManaged);
      v28.pObjectInterface = 0i64;
    }
    v28.Type = VT_Float;
    v28.mValue.IValue = 0;
    if ( (v29.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v29.pObjectInterface, &v29, v29.mValue.pStringManaged);
      v29.pObjectInterface = 0i64;
    }
    v29.Type = VT_Float;
    v29.mValue.IValue = -2;
    Scaleform::GFx::Movie::SetVariableArray(ctx->m_movie.pObject, SA_Value, pString, 0, &ptr, 9u, SV_Sticky);
    result->pPrev = (Scaleform::GFx::Value *)-1i64;
    result->pNext = (Scaleform::GFx::Value *)-1i64;
    result->pObjectInterface = 0i64;
    result->Type = VT_Float;
    result->mValue.IValue = 0;
    `eh vector destructor iterator'(
      &ptr,
      0x30ui64,
      0x28ui64,
      (void (__fastcall *)(void *))Scaleform::GFx::Value::~Value);
  }
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_GetRoomSettingFreeTeam(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  _DWORD *v6; // rsi
  const char *pString; // r15
  int v8; // ebx
  __int64 v9; // rax
  int v10; // ebx
  __int64 v11; // rax
  int v12; // ebx
  const NETWORK_ANTENNA_SELECT_UI *v13; // rax
  int v14; // ebx
  __m128i si128; // [rsp+58h] [rbp-A8h]
  __m128i v17; // [rsp+68h] [rbp-98h]
  Scaleform::GFx::Value ptr; // [rsp+80h] [rbp-80h] BYREF
  Scaleform::GFx::Value val; // [rsp+B0h] [rbp-50h] BYREF
  Scaleform::GFx::Value v20; // [rsp+E0h] [rbp-20h] BYREF
  Scaleform::GFx::Value v21; // [rsp+110h] [rbp+10h] BYREF
  Scaleform::GFx::Value v22; // [rsp+140h] [rbp+40h] BYREF
  Scaleform::GFx::Value v23; // [rsp+170h] [rbp+70h] BYREF
  Scaleform::GFx::Value v24; // [rsp+1A0h] [rbp+A0h] BYREF
  Scaleform::GFx::Value v25; // [rsp+1D0h] [rbp+D0h] BYREF

  v6 = *(_DWORD **)&AppMain::pApp;
  if ( (argv->Type & 0x40) != 0 )
    pString = *argv->mValue.pStringManaged;
  else
    pString = argv->mValue.pString;
  if ( !memcmp(
          (const void *)(*(_QWORD *)&AppMain::pApp + 2192688i64),
          (const void *)(*(_QWORD *)&AppMain::pApp + 2192516i64),
          0xACui64) )
  {
    result->pPrev = (Scaleform::GFx::Value *)-1i64;
    result->pNext = (Scaleform::GFx::Value *)-1i64;
    result->pObjectInterface = 0i64;
    result->Type = VT_Float;
    result->mValue.IValue = 0;
  }
  else
  {
    `eh vector constructor iterator'(
      &ptr,
      0x30ui64,
      0x28ui64,
      (void (__fastcall *)(void *))Scaleform::GFx::Value::Value,
      (void (__fastcall *)(void *))Scaleform::GFx::Value::~Value);
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    v17 = si128;
    if ( (ptr.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(ptr.pObjectInterface, &ptr, ptr.mValue.pStringManaged);
      ptr.pObjectInterface = 0i64;
    }
    ptr.Type = VT_Float;
    ptr.mValue.IValue = -1;
    v8 = 0;
    v9 = 0i64;
    while ( si128.m128i_i32[v9] != v6[548210] )
    {
      ++v8;
      if ( ++v9 >= 4 )
      {
        v8 = 0;
        break;
      }
    }
    if ( (val.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(val.pObjectInterface, &val, val.mValue.pStringManaged);
      val.pObjectInterface = 0i64;
    }
    val.Type = VT_Float;
    val.mValue.IValue = v8;
    v10 = 0;
    v11 = 0i64;
    while ( v17.m128i_i32[v11] != v6[548212] )
    {
      ++v10;
      if ( ++v11 >= 4 )
      {
        v10 = 0;
        break;
      }
    }
    if ( (v20.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v20.pObjectInterface, &v20, v20.mValue.pStringManaged);
      v20.pObjectInterface = 0i64;
    }
    v20.Type = VT_Float;
    v20.mValue.IValue = v10;
    v12 = 0;
    v13 = extension::antenna_tbl;
    while ( *v13 != v6[548172] )
    {
      ++v12;
      if ( (__int64)++v13 >= (__int64)"$DeviceFont" )
      {
        v12 = 0;
        break;
      }
    }
    if ( (v21.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v21.pObjectInterface, &v21, v21.mValue.pStringManaged);
      v21.pObjectInterface = 0i64;
    }
    v21.Type = VT_Float;
    v21.mValue.IValue = v12;
    v14 = v6[548173] != -1;
    if ( (v22.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v22.pObjectInterface, &v22, v22.mValue.pStringManaged);
      v22.pObjectInterface = 0i64;
    }
    v22.Type = VT_Float;
    v22.mValue.IValue = v14;
    if ( (v23.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v23.pObjectInterface, &v23, v23.mValue.pStringManaged);
      v23.pObjectInterface = 0i64;
    }
    v23.Type = VT_Float;
    v23.mValue.IValue = 6;
    if ( (v24.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v24.pObjectInterface, &v24, v24.mValue.pStringManaged);
      v24.pObjectInterface = 0i64;
    }
    v24.Type = VT_Float;
    v24.mValue.IValue = 0;
    if ( (v25.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v25.pObjectInterface, &v25, v25.mValue.pStringManaged);
      v25.pObjectInterface = 0i64;
    }
    v25.Type = VT_Float;
    v25.mValue.IValue = -2;
    Scaleform::GFx::Movie::SetVariableArray(ctx->m_movie.pObject, SA_Value, pString, 0, &ptr, 8u, SV_Sticky);
    result->pPrev = (Scaleform::GFx::Value *)-1i64;
    result->pNext = (Scaleform::GFx::Value *)-1i64;
    result->pObjectInterface = 0i64;
    result->Type = VT_Float;
    result->mValue.IValue = 0;
    `eh vector destructor iterator'(
      &ptr,
      0x30ui64,
      0x28ui64,
      (void (__fastcall *)(void *))Scaleform::GFx::Value::~Value);
  }
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_GetRoomSettingRank(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  _DWORD *v6; // r14
  const char *pString; // r15
  int v8; // edi
  int v9; // edi
  const NETWORK_ANTENNA_SELECT_UI *v10; // rax
  int v11; // edi
  Scaleform::GFx::Value ptr; // [rsp+60h] [rbp-A0h] BYREF
  Scaleform::GFx::Value val; // [rsp+90h] [rbp-70h] BYREF
  Scaleform::GFx::Value v15; // [rsp+C0h] [rbp-40h] BYREF
  Scaleform::GFx::Value v16; // [rsp+F0h] [rbp-10h] BYREF
  Scaleform::GFx::Value v17; // [rsp+120h] [rbp+20h] BYREF

  v6 = *(_DWORD **)&AppMain::pApp;
  if ( (argv->Type & 0x40) != 0 )
    pString = *argv->mValue.pStringManaged;
  else
    pString = argv->mValue.pString;
  if ( !memcmp(
          (const void *)(*(_QWORD *)&AppMain::pApp + 2192688i64),
          (const void *)(*(_QWORD *)&AppMain::pApp + 2192516i64),
          0xACui64) )
  {
    result->pPrev = (Scaleform::GFx::Value *)-1i64;
    result->pNext = (Scaleform::GFx::Value *)-1i64;
    result->pObjectInterface = 0i64;
    result->Type = VT_Float;
    result->mValue.IValue = 0;
  }
  else
  {
    `eh vector constructor iterator'(
      &ptr,
      0x30ui64,
      0x28ui64,
      (void (__fastcall *)(void *))Scaleform::GFx::Value::Value,
      (void (__fastcall *)(void *))Scaleform::GFx::Value::~Value);
    v8 = v6[548176];
    if ( (ptr.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(ptr.pObjectInterface, &ptr, ptr.mValue.pStringManaged);
      ptr.pObjectInterface = 0i64;
    }
    ptr.Type = VT_Float;
    ptr.mValue.IValue = v8;
    v9 = 0;
    v10 = extension::antenna_tbl;
    while ( *v10 != v6[548172] )
    {
      ++v9;
      if ( (__int64)++v10 >= (__int64)"$DeviceFont" )
      {
        v9 = 0;
        break;
      }
    }
    if ( (val.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(val.pObjectInterface, &val, val.mValue.pStringManaged);
      val.pObjectInterface = 0i64;
    }
    val.Type = VT_Float;
    val.mValue.IValue = v9;
    v11 = v6[548173] != -1;
    if ( (v15.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v15.pObjectInterface, &v15, v15.mValue.pStringManaged);
      v15.pObjectInterface = 0i64;
    }
    v15.Type = VT_Float;
    v15.mValue.IValue = v11;
    if ( (v16.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v16.pObjectInterface, &v16, v16.mValue.pStringManaged);
      v16.pObjectInterface = 0i64;
    }
    v16.Type = VT_Float;
    v16.mValue.IValue = 1;
    if ( (v17.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v17.pObjectInterface, &v17, v17.mValue.pStringManaged);
      v17.pObjectInterface = 0i64;
    }
    v17.Type = VT_Float;
    v17.mValue.IValue = -2;
    Scaleform::GFx::Movie::SetVariableArray(ctx->m_movie.pObject, SA_Value, pString, 0, &ptr, 5u, SV_Sticky);
    result->pPrev = (Scaleform::GFx::Value *)-1i64;
    result->pNext = (Scaleform::GFx::Value *)-1i64;
    result->pObjectInterface = 0i64;
    result->Type = VT_Float;
    result->mValue.IValue = 0;
    `eh vector destructor iterator'(
      &ptr,
      0x30ui64,
      0x28ui64,
      (void (__fastcall *)(void *))Scaleform::GFx::Value::~Value);
  }
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_GetRoomSettingTraining(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  const char *pString; // r14
  _DWORD *v7; // rsi
  int v8; // edi
  const NETWORK_ANTENNA_SELECT_UI *v9; // rax
  Scaleform::GFx::Value ptr; // [rsp+60h] [rbp-A0h] BYREF
  Scaleform::GFx::Value val; // [rsp+90h] [rbp-70h] BYREF
  Scaleform::GFx::Value v13; // [rsp+C0h] [rbp-40h] BYREF
  Scaleform::GFx::Value v14; // [rsp+F0h] [rbp-10h] BYREF

  if ( (argv->Type & 0x40) != 0 )
    pString = *argv->mValue.pStringManaged;
  else
    pString = argv->mValue.pString;
  v7 = (_DWORD *)(*(_QWORD *)&AppMain::pApp + 2192688i64);
  if ( !memcmp(
          (const void *)(*(_QWORD *)&AppMain::pApp + 2192688i64),
          (const void *)(*(_QWORD *)&AppMain::pApp + 2192516i64),
          0xACui64) )
  {
    result->pPrev = (Scaleform::GFx::Value *)-1i64;
    result->pNext = (Scaleform::GFx::Value *)-1i64;
    result->pObjectInterface = 0i64;
    result->Type = VT_Float;
    result->mValue.IValue = 0;
  }
  else
  {
    `eh vector constructor iterator'(
      &ptr,
      0x30ui64,
      0x28ui64,
      (void (__fastcall *)(void *))Scaleform::GFx::Value::Value,
      (void (__fastcall *)(void *))Scaleform::GFx::Value::~Value);
    if ( (ptr.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(ptr.pObjectInterface, &ptr, ptr.mValue.pStringManaged);
      ptr.pObjectInterface = 0i64;
    }
    ptr.Type = VT_Float;
    ptr.mValue.IValue = -1;
    v8 = 0;
    v9 = extension::antenna_tbl;
    while ( *v9 != *v7 )
    {
      ++v8;
      if ( (__int64)++v9 >= (__int64)"$DeviceFont" )
      {
        v8 = 0;
        break;
      }
    }
    if ( (val.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(val.pObjectInterface, &val, val.mValue.pStringManaged);
      val.pObjectInterface = 0i64;
    }
    val.Type = VT_Float;
    val.mValue.IValue = v8;
    if ( (v13.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v13.pObjectInterface, &v13, v13.mValue.pStringManaged);
      v13.pObjectInterface = 0i64;
    }
    v13.Type = VT_Float;
    v13.mValue.IValue = 0;
    if ( (v14.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v14.pObjectInterface, &v14, v14.mValue.pStringManaged);
      v14.pObjectInterface = 0i64;
    }
    v14.Type = VT_Float;
    v14.mValue.IValue = -2;
    Scaleform::GFx::Movie::SetVariableArray(ctx->m_movie.pObject, SA_Value, pString, 0, &ptr, 4u, SV_Sticky);
    result->pPrev = (Scaleform::GFx::Value *)-1i64;
    result->pNext = (Scaleform::GFx::Value *)-1i64;
    result->pObjectInterface = 0i64;
    result->Type = VT_Float;
    result->mValue.IValue = 0;
    `eh vector destructor iterator'(
      &ptr,
      0x30ui64,
      0x28ui64,
      (void (__fastcall *)(void *))Scaleform::GFx::Value::~Value);
  }
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_GetRoomTableBattleType(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  _BOOL8 BValue; // rax
  Scaleform::GFx::Value *v5; // rax

  BValue = argv->mValue.BValue;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->mValue.IValue = g_NetworkManager.gamedata.tableBattleType[BValue];
  v5 = result;
  result->Type = VT_Float;
  return v5;
}

Scaleform::GFx::Value *__fastcall extension::GFn_GetSearchSettingFreeParty(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  _DWORD *v6; // rsi
  const char *pString; // r14
  const void *v8; // rcx
  int v9; // edi
  __int64 v10; // rax
  int v11; // edi
  const NETWORK_ANTENNA_SELECT_UI *v12; // rax
  int v13; // edi
  int v14; // edi
  __m128i si128; // [rsp+58h] [rbp-A8h]
  int v17; // [rsp+68h] [rbp-98h]
  Scaleform::GFx::Value ptr; // [rsp+70h] [rbp-90h] BYREF
  Scaleform::GFx::Value val; // [rsp+A0h] [rbp-60h] BYREF
  Scaleform::GFx::Value v20; // [rsp+D0h] [rbp-30h] BYREF
  Scaleform::GFx::Value v21; // [rsp+100h] [rbp+0h] BYREF
  Scaleform::GFx::Value v22; // [rsp+130h] [rbp+30h] BYREF

  v6 = *(_DWORD **)&AppMain::pApp;
  if ( (argv->Type & 0x40) != 0 )
    pString = *argv->mValue.pStringManaged;
  else
    pString = argv->mValue.pString;
  v8 = (const void *)(*(_QWORD *)&AppMain::pApp + 2193032i64);
  *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2193032i64) = 2;
  if ( !memcmp(v8, v6 + 548218, 0xA0ui64) )
  {
    result->pPrev = (Scaleform::GFx::Value *)-1i64;
    result->pNext = (Scaleform::GFx::Value *)-1i64;
    result->pObjectInterface = 0i64;
    result->Type = VT_Float;
    result->mValue.IValue = 0;
  }
  else
  {
    `eh vector constructor iterator'(
      &ptr,
      0x30ui64,
      0x28ui64,
      (void (__fastcall *)(void *))Scaleform::GFx::Value::Value,
      (void (__fastcall *)(void *))Scaleform::GFx::Value::~Value);
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    v17 = 3;
    v9 = 0;
    v10 = 0i64;
    while ( si128.m128i_i32[v10] != v6[548297] )
    {
      ++v9;
      if ( ++v10 >= 5 )
      {
        v9 = 0;
        break;
      }
    }
    if ( (ptr.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(ptr.pObjectInterface, &ptr, ptr.mValue.pStringManaged);
      ptr.pObjectInterface = 0i64;
    }
    ptr.Type = VT_Float;
    ptr.mValue.IValue = v9;
    v11 = 0;
    v12 = extension::antenna_tbl;
    while ( *v12 != v6[548260] )
    {
      ++v11;
      if ( (__int64)++v12 >= (__int64)"$DeviceFont" )
      {
        v11 = 0;
        break;
      }
    }
    if ( (val.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(val.pObjectInterface, &val, val.mValue.pStringManaged);
      val.pObjectInterface = 0i64;
    }
    val.Type = VT_Float;
    val.mValue.IValue = v11;
    v13 = v6[548261] != -1;
    if ( (v20.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v20.pObjectInterface, &v20, v20.mValue.pStringManaged);
      v20.pObjectInterface = 0i64;
    }
    v20.Type = VT_Float;
    v20.mValue.IValue = v13;
    v14 = v6[548259];
    if ( (v21.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v21.pObjectInterface, &v21, v21.mValue.pStringManaged);
      v21.pObjectInterface = 0i64;
    }
    v21.Type = VT_Float;
    v21.mValue.IValue = v14;
    if ( (v22.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v22.pObjectInterface, &v22, v22.mValue.pStringManaged);
      v22.pObjectInterface = 0i64;
    }
    v22.Type = VT_Float;
    v22.mValue.IValue = -2;
    Scaleform::GFx::Movie::SetVariableArray(ctx->m_movie.pObject, SA_Value, pString, 0, &ptr, 5u, SV_Sticky);
    result->pPrev = (Scaleform::GFx::Value *)-1i64;
    result->pNext = (Scaleform::GFx::Value *)-1i64;
    result->pObjectInterface = 0i64;
    result->Type = VT_Float;
    result->mValue.IValue = 0;
    `eh vector destructor iterator'(
      &ptr,
      0x30ui64,
      0x28ui64,
      (void (__fastcall *)(void *))Scaleform::GFx::Value::~Value);
  }
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_GetSearchSettingFreeSingle(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  _DWORD *v6; // rsi
  const char *pString; // r14
  const void *v8; // rcx
  int v9; // ebx
  __int64 v10; // rax
  int v11; // ebx
  __int64 v12; // rax
  int v13; // ebx
  const NETWORK_ANTENNA_SELECT_UI *v14; // rax
  int v15; // ebx
  int v16; // ebx
  __m128i si128; // [rsp+58h] [rbp-A8h]
  int v19; // [rsp+68h] [rbp-98h]
  __m128i v20; // [rsp+70h] [rbp-90h]
  Scaleform::GFx::Value ptr; // [rsp+80h] [rbp-80h] BYREF
  Scaleform::GFx::Value val; // [rsp+B0h] [rbp-50h] BYREF
  Scaleform::GFx::Value v23; // [rsp+E0h] [rbp-20h] BYREF
  Scaleform::GFx::Value v24; // [rsp+110h] [rbp+10h] BYREF
  Scaleform::GFx::Value v25; // [rsp+140h] [rbp+40h] BYREF
  Scaleform::GFx::Value v26; // [rsp+170h] [rbp+70h] BYREF

  v6 = *(_DWORD **)&AppMain::pApp;
  if ( (argv->Type & 0x40) != 0 )
    pString = *argv->mValue.pStringManaged;
  else
    pString = argv->mValue.pString;
  v8 = (const void *)(*(_QWORD *)&AppMain::pApp + 2193032i64);
  *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2193032i64) = 0;
  if ( !memcmp(v8, v6 + 548218, 0xA0ui64) )
  {
    result->pPrev = (Scaleform::GFx::Value *)-1i64;
    result->pNext = (Scaleform::GFx::Value *)-1i64;
    result->pObjectInterface = 0i64;
    result->Type = VT_Float;
    result->mValue.IValue = 0;
  }
  else
  {
    `eh vector constructor iterator'(
      &ptr,
      0x30ui64,
      0x28ui64,
      (void (__fastcall *)(void *))Scaleform::GFx::Value::Value,
      (void (__fastcall *)(void *))Scaleform::GFx::Value::~Value);
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    v19 = 3;
    v20 = _mm_load_si128((const __m128i *)&_xmm);
    v9 = 0;
    v10 = 0i64;
    while ( v20.m128i_i32[v10] != v6[548296] )
    {
      ++v9;
      if ( ++v10 >= 4 )
      {
        v9 = 0;
        break;
      }
    }
    if ( (ptr.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(ptr.pObjectInterface, &ptr, ptr.mValue.pStringManaged);
      ptr.pObjectInterface = 0i64;
    }
    ptr.Type = VT_Float;
    ptr.mValue.IValue = v9;
    v11 = 0;
    v12 = 0i64;
    while ( si128.m128i_i32[v12] != v6[548297] )
    {
      ++v11;
      if ( ++v12 >= 5 )
      {
        v11 = 0;
        break;
      }
    }
    if ( (val.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(val.pObjectInterface, &val, val.mValue.pStringManaged);
      val.pObjectInterface = 0i64;
    }
    val.Type = VT_Float;
    val.mValue.IValue = v11;
    v13 = 0;
    v14 = extension::antenna_tbl;
    while ( *v14 != v6[548260] )
    {
      ++v13;
      if ( (__int64)++v14 >= (__int64)"$DeviceFont" )
      {
        v13 = 0;
        break;
      }
    }
    if ( (v23.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v23.pObjectInterface, &v23, v23.mValue.pStringManaged);
      v23.pObjectInterface = 0i64;
    }
    v23.Type = VT_Float;
    v23.mValue.IValue = v13;
    v15 = v6[548261] != -1;
    if ( (v24.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v24.pObjectInterface, &v24, v24.mValue.pStringManaged);
      v24.pObjectInterface = 0i64;
    }
    v24.Type = VT_Float;
    v24.mValue.IValue = v15;
    v16 = v6[548259];
    if ( (v25.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v25.pObjectInterface, &v25, v25.mValue.pStringManaged);
      v25.pObjectInterface = 0i64;
    }
    v25.Type = VT_Float;
    v25.mValue.IValue = v16;
    if ( (v26.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v26.pObjectInterface, &v26, v26.mValue.pStringManaged);
      v26.pObjectInterface = 0i64;
    }
    v26.Type = VT_Float;
    v26.mValue.IValue = -2;
    Scaleform::GFx::Movie::SetVariableArray(ctx->m_movie.pObject, SA_Value, pString, 0, &ptr, 6u, SV_Sticky);
    result->pPrev = (Scaleform::GFx::Value *)-1i64;
    result->pNext = (Scaleform::GFx::Value *)-1i64;
    result->pObjectInterface = 0i64;
    result->Type = VT_Float;
    result->mValue.IValue = 0;
    `eh vector destructor iterator'(
      &ptr,
      0x30ui64,
      0x28ui64,
      (void (__fastcall *)(void *))Scaleform::GFx::Value::~Value);
  }
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_GetSearchSettingFreeTeam(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  _DWORD *v6; // rsi
  const char *pString; // r14
  const void *v8; // rcx
  int v9; // edi
  __int64 v10; // rax
  int v11; // edi
  const NETWORK_ANTENNA_SELECT_UI *v12; // rax
  int v13; // edi
  int v14; // edi
  __m128i si128; // [rsp+58h] [rbp-A8h]
  int v17; // [rsp+68h] [rbp-98h]
  Scaleform::GFx::Value ptr; // [rsp+70h] [rbp-90h] BYREF
  Scaleform::GFx::Value val; // [rsp+A0h] [rbp-60h] BYREF
  Scaleform::GFx::Value v20; // [rsp+D0h] [rbp-30h] BYREF
  Scaleform::GFx::Value v21; // [rsp+100h] [rbp+0h] BYREF
  Scaleform::GFx::Value v22; // [rsp+130h] [rbp+30h] BYREF

  v6 = *(_DWORD **)&AppMain::pApp;
  if ( (argv->Type & 0x40) != 0 )
    pString = *argv->mValue.pStringManaged;
  else
    pString = argv->mValue.pString;
  v8 = (const void *)(*(_QWORD *)&AppMain::pApp + 2193032i64);
  *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2193032i64) = 1;
  if ( !memcmp(v8, v6 + 548218, 0xA0ui64) )
  {
    result->pPrev = (Scaleform::GFx::Value *)-1i64;
    result->pNext = (Scaleform::GFx::Value *)-1i64;
    result->pObjectInterface = 0i64;
    result->Type = VT_Float;
    result->mValue.IValue = 0;
  }
  else
  {
    `eh vector constructor iterator'(
      &ptr,
      0x30ui64,
      0x28ui64,
      (void (__fastcall *)(void *))Scaleform::GFx::Value::Value,
      (void (__fastcall *)(void *))Scaleform::GFx::Value::~Value);
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    v17 = 3;
    v9 = 0;
    v10 = 0i64;
    while ( si128.m128i_i32[v10] != v6[548297] )
    {
      ++v9;
      if ( ++v10 >= 5 )
      {
        v9 = 0;
        break;
      }
    }
    if ( (ptr.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(ptr.pObjectInterface, &ptr, ptr.mValue.pStringManaged);
      ptr.pObjectInterface = 0i64;
    }
    ptr.Type = VT_Float;
    ptr.mValue.IValue = v9;
    v11 = 0;
    v12 = extension::antenna_tbl;
    while ( *v12 != v6[548260] )
    {
      ++v11;
      if ( (__int64)++v12 >= (__int64)"$DeviceFont" )
      {
        v11 = 0;
        break;
      }
    }
    if ( (val.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(val.pObjectInterface, &val, val.mValue.pStringManaged);
      val.pObjectInterface = 0i64;
    }
    val.Type = VT_Float;
    val.mValue.IValue = v11;
    v13 = v6[548261] != -1;
    if ( (v20.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v20.pObjectInterface, &v20, v20.mValue.pStringManaged);
      v20.pObjectInterface = 0i64;
    }
    v20.Type = VT_Float;
    v20.mValue.IValue = v13;
    v14 = v6[548259];
    if ( (v21.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v21.pObjectInterface, &v21, v21.mValue.pStringManaged);
      v21.pObjectInterface = 0i64;
    }
    v21.Type = VT_Float;
    v21.mValue.IValue = v14;
    if ( (v22.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v22.pObjectInterface, &v22, v22.mValue.pStringManaged);
      v22.pObjectInterface = 0i64;
    }
    v22.Type = VT_Float;
    v22.mValue.IValue = -2;
    Scaleform::GFx::Movie::SetVariableArray(ctx->m_movie.pObject, SA_Value, pString, 0, &ptr, 5u, SV_Sticky);
    result->pPrev = (Scaleform::GFx::Value *)-1i64;
    result->pNext = (Scaleform::GFx::Value *)-1i64;
    result->pObjectInterface = 0i64;
    result->Type = VT_Float;
    result->mValue.IValue = 0;
    `eh vector destructor iterator'(
      &ptr,
      0x30ui64,
      0x28ui64,
      (void (__fastcall *)(void *))Scaleform::GFx::Value::~Value);
  }
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_GetSearchSettingRank(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  _DWORD *v6; // rsi
  const char *pString; // r14
  int v8; // edi
  int v9; // edi
  const NETWORK_ANTENNA_SELECT_UI *v10; // rax
  int v11; // edi
  int v12; // edi
  Scaleform::GFx::Value ptr; // [rsp+60h] [rbp-A0h] BYREF
  Scaleform::GFx::Value val; // [rsp+90h] [rbp-70h] BYREF
  Scaleform::GFx::Value v16; // [rsp+C0h] [rbp-40h] BYREF
  Scaleform::GFx::Value v17; // [rsp+F0h] [rbp-10h] BYREF
  Scaleform::GFx::Value v18; // [rsp+120h] [rbp+20h] BYREF

  v6 = *(_DWORD **)&AppMain::pApp;
  if ( (argv->Type & 0x40) != 0 )
    pString = *argv->mValue.pStringManaged;
  else
    pString = argv->mValue.pString;
  if ( !memcmp(
          (const void *)(*(_QWORD *)&AppMain::pApp + 2193032i64),
          (const void *)(*(_QWORD *)&AppMain::pApp + 2192872i64),
          0xA0ui64) )
  {
    result->pPrev = (Scaleform::GFx::Value *)-1i64;
    result->pNext = (Scaleform::GFx::Value *)-1i64;
    result->pObjectInterface = 0i64;
    result->Type = VT_Float;
    result->mValue.IValue = 0;
  }
  else
  {
    `eh vector constructor iterator'(
      &ptr,
      0x30ui64,
      0x28ui64,
      (void (__fastcall *)(void *))Scaleform::GFx::Value::Value,
      (void (__fastcall *)(void *))Scaleform::GFx::Value::~Value);
    v8 = v6[548263];
    if ( (ptr.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(ptr.pObjectInterface, &ptr, ptr.mValue.pStringManaged);
      ptr.pObjectInterface = 0i64;
    }
    ptr.Type = VT_Float;
    ptr.mValue.IValue = v8;
    v9 = 0;
    v10 = extension::antenna_tbl;
    while ( *v10 != v6[548260] )
    {
      ++v9;
      if ( (__int64)++v10 >= (__int64)"$DeviceFont" )
      {
        v9 = 0;
        break;
      }
    }
    if ( (val.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(val.pObjectInterface, &val, val.mValue.pStringManaged);
      val.pObjectInterface = 0i64;
    }
    val.Type = VT_Float;
    val.mValue.IValue = v9;
    v11 = v6[548261] != -1;
    if ( (v16.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v16.pObjectInterface, &v16, v16.mValue.pStringManaged);
      v16.pObjectInterface = 0i64;
    }
    v16.Type = VT_Float;
    v16.mValue.IValue = v11;
    v12 = v6[548259];
    if ( (v17.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v17.pObjectInterface, &v17, v17.mValue.pStringManaged);
      v17.pObjectInterface = 0i64;
    }
    v17.Type = VT_Float;
    v17.mValue.IValue = v12;
    if ( (v18.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v18.pObjectInterface, &v18, v18.mValue.pStringManaged);
      v18.pObjectInterface = 0i64;
    }
    v18.Type = VT_Float;
    v18.mValue.IValue = -2;
    Scaleform::GFx::Movie::SetVariableArray(ctx->m_movie.pObject, SA_Value, pString, 0, &ptr, 5u, SV_Sticky);
    result->pPrev = (Scaleform::GFx::Value *)-1i64;
    result->pNext = (Scaleform::GFx::Value *)-1i64;
    result->pObjectInterface = 0i64;
    result->Type = VT_Float;
    result->mValue.IValue = 0;
    `eh vector destructor iterator'(
      &ptr,
      0x30ui64,
      0x28ui64,
      (void (__fastcall *)(void *))Scaleform::GFx::Value::~Value);
  }
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_GetSearchSettingTraining(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  _DWORD *v6; // rsi
  const char *pString; // r14
  const void *v8; // rcx
  int v9; // edi
  const NETWORK_ANTENNA_SELECT_UI *v10; // rax
  int v11; // edi
  int v12; // edi
  Scaleform::GFx::Value ptr; // [rsp+60h] [rbp-A0h] BYREF
  Scaleform::GFx::Value val; // [rsp+90h] [rbp-70h] BYREF
  Scaleform::GFx::Value v16; // [rsp+C0h] [rbp-40h] BYREF
  Scaleform::GFx::Value v17; // [rsp+F0h] [rbp-10h] BYREF

  v6 = *(_DWORD **)&AppMain::pApp;
  if ( (argv->Type & 0x40) != 0 )
    pString = *argv->mValue.pStringManaged;
  else
    pString = argv->mValue.pString;
  v8 = (const void *)(*(_QWORD *)&AppMain::pApp + 2193032i64);
  *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2193032i64) = 3;
  if ( !memcmp(v8, v6 + 548218, 0xA0ui64) )
  {
    result->pPrev = (Scaleform::GFx::Value *)-1i64;
    result->pNext = (Scaleform::GFx::Value *)-1i64;
    result->pObjectInterface = 0i64;
    result->Type = VT_Float;
    result->mValue.IValue = 0;
  }
  else
  {
    `eh vector constructor iterator'(
      &ptr,
      0x30ui64,
      0x28ui64,
      (void (__fastcall *)(void *))Scaleform::GFx::Value::Value,
      (void (__fastcall *)(void *))Scaleform::GFx::Value::~Value);
    v9 = 0;
    v10 = extension::antenna_tbl;
    while ( *v10 != v6[548260] )
    {
      ++v9;
      if ( (__int64)++v10 >= (__int64)"$DeviceFont" )
      {
        v9 = 0;
        break;
      }
    }
    if ( (ptr.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(ptr.pObjectInterface, &ptr, ptr.mValue.pStringManaged);
      ptr.pObjectInterface = 0i64;
    }
    ptr.Type = VT_Float;
    ptr.mValue.IValue = v9;
    v11 = v6[548261] != -1;
    if ( (val.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(val.pObjectInterface, &val, val.mValue.pStringManaged);
      val.pObjectInterface = 0i64;
    }
    val.Type = VT_Float;
    val.mValue.IValue = v11;
    v12 = v6[548259];
    if ( (v16.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v16.pObjectInterface, &v16, v16.mValue.pStringManaged);
      v16.pObjectInterface = 0i64;
    }
    v16.Type = VT_Float;
    v16.mValue.IValue = v12;
    if ( (v17.Type & 0x40) != 0 )
    {
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v17.pObjectInterface, &v17, v17.mValue.pStringManaged);
      v17.pObjectInterface = 0i64;
    }
    v17.Type = VT_Float;
    v17.mValue.IValue = -2;
    Scaleform::GFx::Movie::SetVariableArray(ctx->m_movie.pObject, SA_Value, pString, 0, &ptr, 4u, SV_Sticky);
    result->pPrev = (Scaleform::GFx::Value *)-1i64;
    result->pNext = (Scaleform::GFx::Value *)-1i64;
    result->pObjectInterface = 0i64;
    result->Type = VT_Float;
    result->mValue.IValue = 0;
    `eh vector destructor iterator'(
      &ptr,
      0x30ui64,
      0x28ui64,
      (void (__fastcall *)(void *))Scaleform::GFx::Value::~Value);
  }
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_GetSerializedBindings(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  int IValue; // eax
  USER_ID v8; // er8
  int *v9; // rax
  __int64 v10; // rcx
  _OWORD *v11; // rdx
  FighterOperationKeyboardMapper *v12; // rax
  __int64 v13; // rcx
  signed int v14; // eax
  signed int v15; // ebx
  unsigned int v16; // esi
  __int64 v17; // r14
  __int64 i; // rbx
  int v19; // eax
  char Type; // cl
  void *pStringManaged; // r8
  Scaleform::GFx::Value::ObjectInterface *pObjectInterface; // rcx
  AgControllerUID contUID; // [rsp+20h] [rbp-E0h]
  Scaleform::GFx::Value pvalue; // [rsp+28h] [rbp-D8h] BYREF
  int v26; // [rsp+58h] [rbp-A8h]
  __int64 v27; // [rsp+60h] [rbp-A0h]
  Scaleform::GFx::Value resulta; // [rsp+68h] [rbp-98h] BYREF
  FighterOperationKeyboardMapper v29; // [rsp+A0h] [rbp-60h] BYREF
  int bindings[52]; // [rsp+4A0h] [rbp+3A0h] BYREF

  v27 = -2i64;
  v26 = 0;
  if ( argc >= 3 )
  {
    IValue = argv->mValue.IValue;
    if ( IValue )
    {
      v8 = USER_ID_CPU;
      if ( IValue == 1 )
        v8 = USER_ID_2P;
    }
    else
    {
      v8 = USER_ID_1P;
    }
    *(_DWORD *)contUID.m_uid = argv[1].mValue.IValue;
    *(_DWORD *)&contUID.m_uid[4] = argv[2].mValue.IValue;
    v9 = bindings;
    v10 = 3i64;
    do
    {
      *(_QWORD *)v9 = -1i64;
      *((_QWORD *)v9 + 1) = -1i64;
      *((_QWORD *)v9 + 2) = -1i64;
      v9 += 16;
      *((_QWORD *)v9 - 5) = -1i64;
      *((_QWORD *)v9 - 4) = -1i64;
      *((_QWORD *)v9 - 3) = -1i64;
      *((_QWORD *)v9 - 2) = -1i64;
      *((_QWORD *)v9 - 1) = -1i64;
      --v10;
    }
    while ( v10 );
    *(_QWORD *)v9 = -1i64;
    if ( contUID )
    {
      AppMain::GetSaveDataKeyConfigUserUID(*(AppMain **)&AppMain::pApp, (FighterOperationMapper *)&resulta, v8, contUID);
      v14 = FighterOperationMapper::serializeBindings((FighterOperationMapper *)&resulta, bindings);
    }
    else
    {
      v11 = (_OWORD *)(1056i64 * (unsigned int)v8 + *(_QWORD *)&AppMain::pApp + 2197520i64);
      v12 = &v29;
      v13 = 8i64;
      do
      {
        *(_OWORD *)v12->m_mapping = *v11;
        *(_OWORD *)&v12->m_mapping[4] = v11[1];
        *(_OWORD *)&v12->m_mapping[8] = v11[2];
        *(_OWORD *)&v12->m_mapping[12] = v11[3];
        *(_OWORD *)&v12->m_mapping[16] = v11[4];
        *(_OWORD *)&v12->m_mapping[20] = v11[5];
        *(_OWORD *)&v12->m_mapping[24] = v11[6];
        v12 = (FighterOperationKeyboardMapper *)((char *)v12 + 128);
        *(_OWORD *)&v12[-1].m_mapping[252] = v11[7];
        v11 += 8;
        --v13;
      }
      while ( v13 );
      v14 = FighterOperationKeyboardMapper::serializeBindings(&v29, bindings);
    }
    v15 = v14;
    pvalue.Scaleform::ListNode<Scaleform::GFx::Value> = (Scaleform::ListNode<Scaleform::GFx::Value>)_mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
    pvalue.pObjectInterface = 0i64;
    pvalue.Type = VT_None;
    Scaleform::GFx::Movie::CreateArray(ctx->m_movie.pObject, &pvalue);
    Scaleform::GFx::Value::ObjectInterface::SetArraySize(pvalue.pObjectInterface, pvalue.mValue.pStringManaged, v15);
    v16 = 0;
    v17 = v15;
    for ( i = 0i64; i < v17; ++i )
    {
      resulta.Scaleform::ListNode<Scaleform::GFx::Value> = (Scaleform::ListNode<Scaleform::GFx::Value>)_mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
      resulta.pObjectInterface = 0i64;
      v19 = bindings[i];
      resulta.Type = VT_Float;
      resulta.mValue.IValue = v19;
      Scaleform::GFx::Value::ObjectInterface::SetElement(
        pvalue.pObjectInterface,
        pvalue.mValue.pStringManaged,
        v16,
        &resulta);
      if ( (resulta.Type & 0x40) != 0 )
        Scaleform::GFx::Value::ObjectInterface::ObjectRelease(
          resulta.pObjectInterface,
          &resulta,
          resulta.mValue.pStringManaged);
      ++v16;
    }
    result->pPrev = (Scaleform::GFx::Value *)-1i64;
    result->pNext = (Scaleform::GFx::Value *)-1i64;
    result->pObjectInterface = 0i64;
    Type = pvalue.Type;
    result->Type = pvalue.Type;
    pStringManaged = pvalue.mValue.pStringManaged;
    result->mValue.pString = pvalue.mValue.pString;
    result->DataAux = pvalue.DataAux;
    if ( (Type & 0x40) != 0 )
    {
      pObjectInterface = pvalue.pObjectInterface;
      result->pObjectInterface = pvalue.pObjectInterface;
      Scaleform::GFx::Value::ObjectInterface::ObjectAddRef(pObjectInterface, result, pStringManaged);
      pStringManaged = pvalue.mValue.pStringManaged;
      Type = pvalue.Type;
    }
    if ( (Type & 0x40) != 0 )
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(pvalue.pObjectInterface, &pvalue, pStringManaged);
  }
  else
  {
    result->pPrev = (Scaleform::GFx::Value *)-1i64;
    result->pNext = (Scaleform::GFx::Value *)-1i64;
    result->pObjectInterface = 0i64;
    result->Type = VT_None;
  }
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_GetSerializedDefaultBindings(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  int IValue; // eax
  int v7; // edx
  int *v8; // rax
  __int64 v9; // rcx
  signed int v10; // eax
  FighterOperationKeyboardMapper *v11; // rax
  __int64 v12; // rcx
  signed int v13; // ebx
  unsigned int v14; // esi
  __int64 v15; // r14
  __int64 i; // rbx
  int v17; // eax
  char Type; // cl
  void *pStringManaged; // r8
  Scaleform::GFx::Value::ObjectInterface *pObjectInterface; // rcx
  __int64 v22; // [rsp+20h] [rbp-E0h]
  Scaleform::GFx::Value pvalue; // [rsp+28h] [rbp-D8h] BYREF
  int v24; // [rsp+58h] [rbp-A8h]
  __int64 v25; // [rsp+60h] [rbp-A0h]
  Scaleform::GFx::Value v26; // [rsp+68h] [rbp-98h] BYREF
  FighterOperationKeyboardMapper v27; // [rsp+A0h] [rbp-60h] BYREF
  int bindings[52]; // [rsp+4A0h] [rbp+3A0h] BYREF

  v25 = -2i64;
  v24 = 0;
  if ( argc >= 3 )
  {
    IValue = argv->mValue.IValue;
    if ( IValue )
    {
      v7 = 0;
      if ( IValue == 1 )
        v7 = 2;
    }
    else
    {
      v7 = 1;
    }
    LODWORD(v22) = argv[1].mValue.IValue;
    HIDWORD(v22) = argv[2].mValue.IValue;
    v8 = bindings;
    v9 = 3i64;
    do
    {
      *(_QWORD *)v8 = -1i64;
      *((_QWORD *)v8 + 1) = -1i64;
      *((_QWORD *)v8 + 2) = -1i64;
      v8 += 16;
      *((_QWORD *)v8 - 5) = -1i64;
      *((_QWORD *)v8 - 4) = -1i64;
      *((_QWORD *)v8 - 3) = -1i64;
      *((_QWORD *)v8 - 2) = -1i64;
      *((_QWORD *)v8 - 1) = -1i64;
      --v9;
    }
    while ( v9 );
    *(_QWORD *)v8 = -1i64;
    if ( v22 )
    {
      v26.Scaleform::ListNode<Scaleform::GFx::Value> = (Scaleform::ListNode<Scaleform::GFx::Value>)_mm_add_epi32(
                                                                                                     _mm_load_si128((const __m128i *)&_xmm),
                                                                                                     (__m128i)_xmm);
      *(__m128i *)&v26.pObjectInterface = _mm_load_si128((const __m128i *)&_xmm);
      v26.mValue.pString = (const char *)0xC0000000Bi64;
      v10 = FighterOperationMapper::serializeBindings((FighterOperationMapper *)&v26, bindings);
    }
    else
    {
      v11 = &v27;
      v12 = 16i64;
      do
      {
        *(_QWORD *)v11->m_mapping = 0i64;
        *(_QWORD *)&v11->m_mapping[2] = 0i64;
        *(_QWORD *)&v11->m_mapping[4] = 0i64;
        v11 = (FighterOperationKeyboardMapper *)((char *)v11 + 64);
        *(_QWORD *)&v11[-1].m_mapping[246] = 0i64;
        *(_QWORD *)&v11[-1].m_mapping[248] = 0i64;
        *(_QWORD *)&v11[-1].m_mapping[250] = 0i64;
        *(_QWORD *)&v11[-1].m_mapping[252] = 0i64;
        *(_QWORD *)&v11[-1].m_mapping[254] = 0i64;
        --v12;
      }
      while ( v12 );
      v27.m_mapping[55] = Mapped_LP;
      v27.m_mapping[57] = Mapped_LK;
      v27.m_mapping[48] = Mapped_HK;
      v27.m_mapping[56] = Mapped_HP;
      v27.m_mapping[80] = Mapped_LP_LK;
      v27.m_mapping[85] = Mapped_LK_HP;
      v27.m_mapping[73] = Mapped_LK_HK;
      v27.m_mapping[79] = Mapped_HP_LP;
      v27.m_mapping[219] = Mapped_REC;
      v27.m_mapping[221] = Mapped_PLAY;
      v27.m_mapping[37] = Mapped_L;
      v27.m_mapping[40] = Mapped_D;
      v27.m_mapping[39] = Mapped_R;
      v27.m_mapping[38] = Mapped_U;
      FighterOperationKeyboardMapper::reset(&v27, v7);
      v10 = FighterOperationKeyboardMapper::serializeBindings(&v27, bindings);
    }
    v13 = v10;
    pvalue.Scaleform::ListNode<Scaleform::GFx::Value> = (Scaleform::ListNode<Scaleform::GFx::Value>)_mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
    pvalue.pObjectInterface = 0i64;
    pvalue.Type = VT_None;
    Scaleform::GFx::Movie::CreateArray(ctx->m_movie.pObject, &pvalue);
    Scaleform::GFx::Value::ObjectInterface::SetArraySize(pvalue.pObjectInterface, pvalue.mValue.pStringManaged, v13);
    v14 = 0;
    v15 = v13;
    for ( i = 0i64; i < v15; ++i )
    {
      v26.Scaleform::ListNode<Scaleform::GFx::Value> = (Scaleform::ListNode<Scaleform::GFx::Value>)_mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
      v26.pObjectInterface = 0i64;
      v17 = bindings[i];
      v26.Type = VT_Float;
      v26.mValue.IValue = v17;
      Scaleform::GFx::Value::ObjectInterface::SetElement(
        pvalue.pObjectInterface,
        pvalue.mValue.pStringManaged,
        v14,
        &v26);
      if ( (v26.Type & 0x40) != 0 )
        Scaleform::GFx::Value::ObjectInterface::ObjectRelease(v26.pObjectInterface, &v26, v26.mValue.pStringManaged);
      ++v14;
    }
    result->pPrev = (Scaleform::GFx::Value *)-1i64;
    result->pNext = (Scaleform::GFx::Value *)-1i64;
    result->pObjectInterface = 0i64;
    Type = pvalue.Type;
    result->Type = pvalue.Type;
    pStringManaged = pvalue.mValue.pStringManaged;
    result->mValue.pString = pvalue.mValue.pString;
    result->DataAux = pvalue.DataAux;
    if ( (Type & 0x40) != 0 )
    {
      pObjectInterface = pvalue.pObjectInterface;
      result->pObjectInterface = pvalue.pObjectInterface;
      Scaleform::GFx::Value::ObjectInterface::ObjectAddRef(pObjectInterface, result, pStringManaged);
      pStringManaged = pvalue.mValue.pStringManaged;
      Type = pvalue.Type;
    }
    if ( (Type & 0x40) != 0 )
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(pvalue.pObjectInterface, &pvalue, pStringManaged);
  }
  else
  {
    result->pPrev = (Scaleform::GFx::Value *)-1i64;
    result->pNext = (Scaleform::GFx::Value *)-1i64;
    result->pObjectInterface = 0i64;
    result->Type = VT_None;
  }
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_GetSoundOptionParamArray(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  Scaleform::GFx::Movie *pObject; // rcx
  Scaleform::GFx::Value *v6; // rax
  int pdata[6]; // [rsp+48h] [rbp-30h] BYREF

  pObject = ctx->m_movie.pObject;
  pdata[0] = *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2197404i64);
  pdata[1] = *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2197408i64);
  pdata[2] = *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2197412i64);
  pdata[3] = *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2197420i64);
  pdata[4] = *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2197424i64);
  Scaleform::GFx::Movie::SetVariableArray(pObject, SA_Int, "Sound_Option", 0, pdata, 5u, SV_Sticky);
  v6 = result;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_Float;
  result->mValue.IValue = 0;
  return v6;
}

Scaleform::GFx::Value *__fastcall extension::GFn_GetStatusNetwork(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  Scaleform::GFx::Value *v4; // rax

  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_None;
  result->Type = VT_Int64;
  v4 = result;
  result->mValue.BValue = Fw::NetworkStatusCommon::m_OnlineFlag;
  return v4;
}

Scaleform::GFx::Value *__fastcall extension::GFn_GetStoryScoreRanking(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  const char *pString; // rdi
  char *v7; // r9
  __int64 v8; // r8
  __int64 v9; // r10
  unsigned int v10; // ecx
  unsigned int v11; // edx
  Scaleform::GFx::Value *v12; // rax
  char pdata[512]; // [rsp+50h] [rbp-228h] BYREF

  if ( (argv->Type & 0x40) != 0 )
    pString = *argv->mValue.pStringManaged;
  else
    pString = argv->mValue.pString;
  memset(pdata, 0, sizeof(pdata));
  v7 = pdata;
  v8 = 8i64;
  v9 = *(_QWORD *)&AppMain::pApp + 2204812i64;
  do
  {
    v7 += 16;
    v10 = *(_DWORD *)(v9 + 12) ^ 0x7B48A35E;
    v9 += 16i64;
    v11 = v10 ^ ((unsigned __int16)v10 ^ (unsigned __int16)(v10 >> 14)) & 0xCCCC ^ ((((unsigned __int16)v10 ^ (unsigned __int16)(v10 >> 14)) & 0xCCCC) << 14);
    *((_DWORD *)v7 - 4) = (v11 ^ (v11 >> 7)) & 0x550055 ^ v11 ^ (((v11 ^ (v11 >> 7)) & 0x550055) << 7);
    *((_DWORD *)v7 - 3) = *(_DWORD *)(v9 - 16);
    *((_DWORD *)v7 - 2) = *(_DWORD *)(v9 - 12);
    *((_DWORD *)v7 - 1) = *(_DWORD *)(v9 - 8);
    --v8;
  }
  while ( v8 );
  Scaleform::GFx::Movie::SetVariableArray(ctx->m_movie.pObject, SA_Int, pString, 0, pdata, 0x20u, SV_Sticky);
  v12 = result;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_Float;
  result->mValue.IValue = 0;
  return v12;
}

Scaleform::GFx::Value *__fastcall extension::GFn_GetStoryWinCount(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  Scaleform::GFx::Value *v5; // rax
  GameDataInfo *v6; // rcx

  if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *(_DWORD *)(*(_QWORD *)NtCurrentTeb()->Reserved1[11]
                                                                            + 40i64) )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v6);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    }
  }
  result->mValue.IValue = `GameDataInfo::getInstance'::`2'::instance.m_StoryWinCount;
  v5 = result;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_Float;
  return v5;
}

Scaleform::GFx::Value *__fastcall extension::GFn_GetSurvivalRanking(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  const char *pString; // rdi
  char *v7; // r9
  __int64 v8; // r8
  __int64 v9; // r10
  unsigned int v10; // ecx
  unsigned int v11; // edx
  Scaleform::GFx::Value *v12; // rax
  char pdata[512]; // [rsp+50h] [rbp-228h] BYREF

  if ( (argv->Type & 0x40) != 0 )
    pString = *argv->mValue.pStringManaged;
  else
    pString = argv->mValue.pString;
  memset(pdata, 0, sizeof(pdata));
  v7 = pdata;
  v8 = 8i64;
  v9 = *(_QWORD *)&AppMain::pApp + 2204940i64;
  do
  {
    v7 += 8;
    v10 = *(_DWORD *)(v9 + 4) ^ 0x7B48A35E;
    v9 += 8i64;
    v11 = v10 ^ ((unsigned __int16)v10 ^ (unsigned __int16)(v10 >> 14)) & 0xCCCC ^ ((((unsigned __int16)v10 ^ (unsigned __int16)(v10 >> 14)) & 0xCCCC) << 14);
    *((_DWORD *)v7 - 2) = (v11 ^ (v11 >> 7)) & 0x550055 ^ v11 ^ (((v11 ^ (v11 >> 7)) & 0x550055) << 7);
    *((_DWORD *)v7 - 1) = *(_DWORD *)(v9 - 8);
    --v8;
  }
  while ( v8 );
  Scaleform::GFx::Movie::SetVariableArray(ctx->m_movie.pObject, SA_Int, pString, 0, pdata, 0x10u, SV_Sticky);
  v12 = result;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_Float;
  result->mValue.IValue = 0;
  return v12;
}

Scaleform::GFx::Value *__fastcall extension::GFn_GetSystemMessageCursor(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  GfxManager *v5; // rax
  GfxManager *v7; // [rsp+40h] [rbp+8h]

  v5 = GfxManager::instance;
  if ( !GfxManager::instance )
  {
    v7 = (GfxManager *)operator new(0x108ui64);
    GfxManager::GfxManager(v7);
    GfxManager::instance = v5;
  }
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_Float;
  result->mValue.IValue = v5->m_SystemMessageCursor;
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_GetSystemOptionParamArray(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  __int64 v5; // rdi
  Scaleform::GFx::Movie *pObject; // rcx
  Scaleform::GFx::Value *v8; // rax
  GameDataInfo *v9; // rcx
  int pdata[4]; // [rsp+48h] [rbp-20h] BYREF

  v5 = *(_QWORD *)&AppMain::pApp;
  if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *(_DWORD *)(*(_QWORD *)NtCurrentTeb()->Reserved1[11]
                                                                            + 40i64) )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v9);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    }
  }
  pObject = ctx->m_movie.pObject;
  pdata[0] = *(_DWORD *)(v5 + 2197384);
  pdata[1] = *(unsigned __int8 *)(v5 + 2197389);
  pdata[2] = *(unsigned __int8 *)(v5 + 2197390);
  Scaleform::GFx::Movie::SetVariableArray(pObject, SA_Int, "System_Option", 0, pdata, 3u, SV_Sticky);
  v8 = result;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_Float;
  result->mValue.IValue = 0;
  return v8;
}

Scaleform::GFx::Value *__fastcall extension::GFn_GetText(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  __int64 v5; // rcx
  const char *pString; // rsi
  LANGUAGE_MODE v7; // ebx
  extension::TranslateTable *v8; // rax
  const char *Text; // rbx

  v5 = *(_QWORD *)&AppMain::pApp;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_None;
  if ( (argv->Type & 0x40) != 0 )
    pString = *argv->mValue.pStringManaged;
  else
    pString = argv->mValue.pString;
  v7 = *(_DWORD *)(v5 + 2197384);
  v8 = extension::TranslateTable::Instance();
  Text = extension::TranslateTable::getText(v8, pString, v7);
  if ( (result->Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(
      result->pObjectInterface,
      result,
      result->mValue.pStringManaged);
    result->pObjectInterface = 0i64;
  }
  result->Type = 6;
  result->mValue.pString = Text;
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_GetTimeAttackRanking(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  const char *pString; // rdi
  char *v7; // r9
  __int64 v8; // r8
  __int64 v9; // r10
  unsigned int v10; // ecx
  unsigned int v11; // edx
  Scaleform::GFx::Value *v12; // rax
  char pdata[512]; // [rsp+50h] [rbp-228h] BYREF

  if ( (argv->Type & 0x40) != 0 )
    pString = *argv->mValue.pStringManaged;
  else
    pString = argv->mValue.pString;
  memset(pdata, 0, sizeof(pdata));
  v7 = pdata;
  v8 = 8i64;
  v9 = *(_QWORD *)&AppMain::pApp + 2205004i64;
  do
  {
    v7 += 8;
    v10 = *(_DWORD *)(v9 + 4) ^ 0x7B48A35E;
    v9 += 8i64;
    v11 = v10 ^ ((unsigned __int16)v10 ^ (unsigned __int16)(v10 >> 14)) & 0xCCCC ^ ((((unsigned __int16)v10 ^ (unsigned __int16)(v10 >> 14)) & 0xCCCC) << 14);
    *((_DWORD *)v7 - 2) = (v11 ^ (v11 >> 7)) & 0x550055 ^ v11 ^ (((v11 ^ (v11 >> 7)) & 0x550055) << 7);
    *((_DWORD *)v7 - 1) = *(_DWORD *)(v9 - 8);
    --v8;
  }
  while ( v8 );
  Scaleform::GFx::Movie::SetVariableArray(ctx->m_movie.pObject, SA_Int, pString, 0, pdata, 0x10u, SV_Sticky);
  v12 = result;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_Float;
  result->mValue.IValue = 0;
  return v12;
}

Scaleform::GFx::Value *__fastcall extension::GFn_GetTitleName(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  Scaleform::GFx::Value *v4; // rax

  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->mValue.pString = "THE KING OF FIGHTERS XIV";
  v4 = result;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = 6;
  return v4;
}

Scaleform::GFx::Value *__fastcall extension::GFn_GetTouchPadSetting(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  __int64 v4; // rax
  int v5; // edx
  Scaleform::GFx::Value *v6; // rax

  v4 = *(_QWORD *)&AppMain::pApp;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  v5 = *(char *)(v4 + 2205594);
  v6 = result;
  result->mValue.IValue = v5;
  result->Type = VT_Float;
  return v6;
}

Scaleform::GFx::Value *__fastcall extension::GFn_GetTrainingRecordSetting(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  const char *pString; // rdi
  GameDataInfo *v7; // rcx
  BattleSystem::BattleController *v8; // rax
  BattleSystem::BattleController *v10; // [rsp+50h] [rbp-68h]
  int pdata[3]; // [rsp+58h] [rbp-60h] BYREF
  __int128 v12; // [rsp+64h] [rbp-54h]
  int v13; // [rsp+74h] [rbp-44h]
  __int128 v14; // [rsp+78h] [rbp-40h]
  int v15; // [rsp+88h] [rbp-30h]

  if ( (argv->Type & 0x40) != 0 )
    pString = *argv->mValue.pStringManaged;
  else
    pString = argv->mValue.pString;
  if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *(_DWORD *)(*(_QWORD *)NtCurrentTeb()->Reserved1[11]
                                                                            + 40i64) )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v7);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    }
  }
  if ( !BattleSystem::BattleController::instance )
  {
    v10 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v10);
    BattleSystem::BattleController::instance = v8;
  }
  pdata[0] = `GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iRecordMode;
  pdata[1] = `GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iReversalType;
  pdata[2] = `GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iRecordSlot;
  v12 = *(_OWORD *)&`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iPlaySlot[0][1];
  v13 = `GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iPlaySlot[0][5];
  v14 = *(_OWORD *)&`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iPlaySlot[1][1];
  v15 = `GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iPlaySlot[1][5];
  Scaleform::GFx::Movie::SetVariableArray(ctx->m_movie.pObject, SA_Int, pString, 0, pdata, 0xDu, SV_Sticky);
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_Float;
  result->mValue.IValue = 0;
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_GetTrainingSettingArray(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  GameDataInfo *v6; // rcx
  BattleSystem::BattleController *v7; // rcx
  BattleSystem::BattleController *v8; // rax
  BattleSystem::BattleController *v10; // [rsp+50h] [rbp-A8h]
  _DWORD pdata[16]; // [rsp+60h] [rbp-98h] BYREF
  __int64 v12; // [rsp+A0h] [rbp-58h]
  __int64 v13; // [rsp+A8h] [rbp-50h]
  __int64 v14; // [rsp+B0h] [rbp-48h]
  __int64 v15; // [rsp+B8h] [rbp-40h]
  __int64 v16; // [rsp+C0h] [rbp-38h]
  __int64 v17; // [rsp+C8h] [rbp-30h]
  __int64 v18; // [rsp+D0h] [rbp-28h]

  if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *(_DWORD *)(*(_QWORD *)NtCurrentTeb()->Reserved1[11]
                                                                            + 40i64) )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v6);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    }
  }
  v7 = BattleSystem::BattleController::instance;
  if ( !BattleSystem::BattleController::instance )
  {
    v10 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v10);
    v7 = v8;
    BattleSystem::BattleController::instance = v8;
  }
  pdata[0] = `GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iRestart;
  pdata[1] = `GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iAction;
  pdata[2] = `GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iGuard;
  pdata[3] = `GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iCounter;
  pdata[4] = `GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iUkemi;
  pdata[5] = `GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iKeyData;
  pdata[6] = `GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iAttackData;
  pdata[7] = `GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iPowerGauge[0];
  pdata[8] = `GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iPowerGauge[1];
  pdata[9] = `GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iMAXModeGauge[0];
  pdata[10] = `GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iMAXModeGauge[1];
  pdata[11] = `GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iGuardGauge[0];
  pdata[12] = `GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iGuardGauge[1];
  pdata[13] = `GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iStun[0];
  pdata[14] = `GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iStun[1];
  pdata[15] = v7->bHudVisible;
  v12 = 0i64;
  v13 = 0i64;
  v14 = 0i64;
  v15 = 0i64;
  v16 = 0i64;
  v17 = 0i64;
  v18 = 0i64;
  Scaleform::GFx::Movie::SetVariableArray(ctx->m_movie.pObject, SA_Int, "TrainingSetting", 0, pdata, 0x1Eu, SV_Sticky);
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_Float;
  result->mValue.IValue = 0;
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_GetTutorialFlag(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  __int64 v4; // rax
  unsigned __int64 UIValue; // r8
  __int64 v6; // rdx
  bool v7; // cf

  v4 = *(_QWORD *)&AppMain::pApp;
  UIValue = argv->mValue.UIValue;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  v6 = *(_QWORD *)(v4 + 2205112);
  v7 = _bittest64(&v6, UIValue);
  result->pObjectInterface = 0i64;
  result->Type = VT_Int64;
  result->mValue.BValue = v7;
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_GetTutorialNo(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  Scaleform::GFx::Value *v5; // rax
  GameDataInfo *v6; // rcx

  if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *(_DWORD *)(*(_QWORD *)NtCurrentTeb()->Reserved1[11]
                                                                            + 40i64) )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v6);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    }
  }
  result->mValue.IValue = `GameDataInfo::getInstance'::`2'::instance.m_TutorialNo;
  v5 = result;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_Float;
  return v5;
}

Scaleform::GFx::Value *__fastcall extension::GFn_GetUserCount(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_Float;
  result->mValue.IValue = 0;
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_GetUserNameToBC(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  GfxManager *v5; // rax
  GfxManager *v7; // [rsp+40h] [rbp+8h]

  v5 = GfxManager::instance;
  if ( !GfxManager::instance )
  {
    v7 = (GfxManager *)operator new(0x108ui64);
    GfxManager::GfxManager(v7);
    GfxManager::instance = v5;
  }
  GfxManager::GFn_GetUserNameToBC(v5, (const Scaleform::GFx::Value *)ctx, (unsigned int)argv);
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_None;
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_GetVoiceChatStatus(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  __int64 v4; // rax
  int v5; // edx
  Scaleform::GFx::Value *v6; // rax

  v4 = *(_QWORD *)&AppMain::pApp;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  v5 = *(char *)(v4 + 2205593);
  v6 = result;
  result->mValue.IValue = v5;
  result->Type = VT_Float;
  return v6;
}

Scaleform::GFx::Value *__fastcall extension::GFn_HideFlare(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  GfxManager *v5; // rax
  extension::gfxi_detail::MovieProxy *m_ptr; // rcx
  extension::gfxi_detail::MovieProxy *v7; // rcx
  GfxManager *v9; // [rsp+40h] [rbp+8h]

  v5 = GfxManager::instance;
  if ( !GfxManager::instance )
  {
    v9 = (GfxManager *)operator new(0x108ui64);
    GfxManager::GfxManager(v9);
    GfxManager::instance = v5;
  }
  if ( v5->m_GFXMovieBG.m_movieProxy.m_ptr )
  {
    m_ptr = v5->m_GFXMovieBG.m_movieProxy.m_ptr;
    if ( m_ptr )
      m_ptr->m_bAdvance = 0;
    if ( v5->m_GFXMovieBG.m_movieProxy.m_ptr )
    {
      v7 = v5->m_GFXMovieBG.m_movieProxy.m_ptr;
      if ( v7 )
        v7->m_bRender = 0;
    }
  }
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_Float;
  result->mValue.IValue = 0;
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_IsCreateRoom(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  bool v4; // dl
  char v5; // al

  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_None;
  v4 = g_NetworkManager.gamedata.onlineState == NET_STATE_CREATINGROOM
    || g_NetworkManager.gamedata.onlineState == NET_STATE_CREATECOMPLETE
    || g_NetworkManager.gamedata.onlineState == NET_STATE_WAITCLIENT;
  v5 = v4 | *(_BYTE *)(*(_QWORD *)&AppMain::pApp + 37091i64);
  result->Type = VT_Int64;
  result->mValue.BValue = v5;
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_IsEditMode(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  GfxManager *v5; // rax
  GfxManager *v7; // [rsp+40h] [rbp+8h]

  v5 = GfxManager::instance;
  if ( !GfxManager::instance )
  {
    v7 = (GfxManager *)operator new(0x108ui64);
    GfxManager::GfxManager(v7);
    GfxManager::instance = v5;
  }
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_Int64;
  result->mValue.BValue = v5->m_EditMode;
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_IsEnableCharaAndCostume(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  CHARACTER_NO IValue; // edi
  int v6; // esi
  Scaleform::GFx::Value *v7; // rax

  IValue = argv->mValue.IValue;
  v6 = argv[1].mValue.IValue;
  result->mValue.BValue = SaveRecord_PlayerData::IsEnableCharcter(
                            (SaveRecord_PlayerData *)(*(_QWORD *)&AppMain::pApp + 2202784i64),
                            IValue)
                       && (unsigned int)CharaProjectData::GetUseableAnotherCostumeCharaID(
                                          *(CharaProjectData **)(*(_QWORD *)&AppMain::pApp + 10888i64),
                                          IValue,
                                          v6) != -1;
  v7 = result;
  result->pObjectInterface = 0i64;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->Type = VT_Int64;
  return v7;
}

Scaleform::GFx::Value *__fastcall extension::GFn_IsEnableCharacter(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  Scaleform::GFx::Value *v5; // rax

  result->mValue.BValue = SaveRecord_PlayerData::IsEnableCharcter(
                            (SaveRecord_PlayerData *)(*(_QWORD *)&AppMain::pApp + 2202784i64),
                            (CHARACTER_NO)argv->mValue.IValue);
  v5 = result;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_Int64;
  return v5;
}

Scaleform::GFx::Value *__fastcall extension::GFn_IsEnableLanguage(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  int IValue; // eax
  Scaleform::GFx::Value *v5; // rax

  IValue = argv->mValue.IValue;
  result->mValue.BValue = !IValue
                       || IValue == 1
                       || IValue == 2
                       || IValue == 3
                       || IValue == 4
                       || IValue == 5
                       || IValue == 6
                       || IValue == 7
                       || IValue == 8
                       || IValue == 9
                       || IValue == 10;
  v5 = result;
  result->Type = VT_Int64;
  result->pObjectInterface = 0i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  return v5;
}

Scaleform::GFx::Value *__fastcall extension::GFn_IsEnableMyFavoriteSingle(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  __int64 v4; // rdi
  __int64 IValue; // rsi
  int v7; // ebp
  Scaleform::GFx::Value *v8; // rax

  v4 = *(_QWORD *)&AppMain::pApp;
  IValue = argv->mValue.IValue;
  v7 = *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2202784i64 + 4 * IValue + 2536);
  result->mValue.BValue = SaveRecord_PlayerData::IsEnableCharcter(
                            (SaveRecord_PlayerData *)(*(_QWORD *)&AppMain::pApp + 2202784i64),
                            (CHARACTER_NO)v7)
                       && (unsigned int)CharaProjectData::GetUseableAnotherCostumeCharaID(
                                          *(CharaProjectData **)(*(_QWORD *)&AppMain::pApp + 10888i64),
                                          v7,
                                          *(char *)(IValue + v4 + 2205344)) != -1;
  v8 = result;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_Int64;
  return v8;
}

Scaleform::GFx::Value *__fastcall extension::GFn_IsEnableMyFavoriteTeam(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  __int64 IValue; // r15
  __int64 v5; // r13
  __int64 v7; // rdi
  __int64 v8; // rsi
  int v9; // ebp
  Scaleform::GFx::Value *v10; // rax

  IValue = argv->mValue.IValue;
  v5 = *(_QWORD *)&AppMain::pApp;
  v7 = 0i64;
  v8 = 12 * (IValue + 214);
  while ( 1 )
  {
    v9 = *(_DWORD *)(v8 + v5 + 2202784);
    if ( !SaveRecord_PlayerData::IsEnableCharcter((SaveRecord_PlayerData *)(v5 + 2202784), (CHARACTER_NO)v9)
      || (unsigned int)CharaProjectData::GetUseableAnotherCostumeCharaID(
                         *(CharaProjectData **)(*(_QWORD *)&AppMain::pApp + 10888i64),
                         v9,
                         *(char *)(IValue + v7 + 2 * IValue + v5 + 2205424)) == -1 )
    {
      break;
    }
    ++v7;
    v8 += 4i64;
    if ( v7 >= 3 )
    {
      result->mValue.BValue = 1;
      goto LABEL_7;
    }
  }
  result->mValue.BValue = 0;
LABEL_7:
  v10 = result;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_Int64;
  return v10;
}

Scaleform::GFx::Value *__fastcall extension::GFn_IsEnableMyFavoriteTeamIndex(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  __int64 IValue; // rdi
  __int64 v6; // r14
  __int64 v7; // rsi
  int v8; // ebp
  Scaleform::GFx::Value *v9; // rax

  IValue = argv->mValue.IValue;
  v6 = argv[1].mValue.IValue;
  v7 = *(_QWORD *)&AppMain::pApp;
  v8 = *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2202784i64 + 4 * (v6 + 2 * (IValue + 214) + IValue + 214));
  result->mValue.BValue = SaveRecord_PlayerData::IsEnableCharcter(
                            (SaveRecord_PlayerData *)(*(_QWORD *)&AppMain::pApp + 2202784i64),
                            (CHARACTER_NO)v8)
                       && (unsigned int)CharaProjectData::GetUseableAnotherCostumeCharaID(
                                          *(CharaProjectData **)(*(_QWORD *)&AppMain::pApp + 10888i64),
                                          v8,
                                          *(char *)(IValue + v6 + 2 * IValue + v7 + 2205424)) != -1;
  v9 = result;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_Int64;
  return v9;
}

Scaleform::GFx::Value *__fastcall extension::GFn_IsEntryNow(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  bool v4; // al

  v4 = 0;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_None;
  if ( *(_QWORD *)&Fw::MatchingTarget::m_RoomId.m_steamid.m_comp || g_NetworkManager.gamedata.reservationCreateRoomFlag )
    v4 = 1;
  result->Type = VT_Int64;
  result->mValue.BValue = v4;
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_IsFirstNoticeFlag(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  unsigned __int64 UIValue; // rdx
  __int64 v5; // rax

  UIValue = argv->mValue.UIValue;
  v5 = *(_QWORD *)&AppMain::pApp;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_Int64;
  result->mValue.BValue = ((0x80000000 >> (UIValue & 0x1F)) & *(_DWORD *)(v5 + 4 * (UIValue >> 5) + 2208108)) != 0;
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_IsGettingFightBonusNow(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  __int64 v4; // rax

  v4 = *(_QWORD *)&AppMain::pApp;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_None;
  LOBYTE(v4) = *(_BYTE *)(v4 + 37090);
  result->Type = VT_Int64;
  result->mValue.BValue = v4;
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_IsItemDisplay(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  GfxManager *v5; // rax
  bool IsItemDisplay; // al
  GfxManager *v8; // [rsp+40h] [rbp+8h]

  v5 = GfxManager::instance;
  if ( !GfxManager::instance )
  {
    v8 = (GfxManager *)operator new(0x108ui64);
    GfxManager::GfxManager(v8);
    GfxManager::instance = v5;
  }
  IsItemDisplay = GfxManager::GFv_IsItemDisplay(v5);
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_Int64;
  result->mValue.BValue = IsItemDisplay;
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_IsOpenIMEDialog(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  int m_Status; // eax
  Scaleform::GFx::Value *v5; // rax

  m_Status = Fw::ImeTarget::m_IMEPad.m_Status;
  if ( Fw::ImeTarget::m_currentIME == IME_KEYBOARD )
    m_Status = Fw::ImeTarget::m_IMEKeyboard.m_Status;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->mValue.BValue = m_Status == 1;
  v5 = result;
  result->Type = VT_Int64;
  return v5;
}

Scaleform::GFx::Value *__fastcall extension::GFn_IsParentalControlChat(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  __int64 v5; // rax
  char v6; // al
  bool v7; // di

  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_None;
  v5 = SteamInternal_ContextInit(&`SteamInternal_ModuleContext'::`2'::s_CallbackCounterAndContext, ctx);
  v6 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v5 + 16) + 336i64))(*(_QWORD *)(v5 + 16));
  v7 = (v6 & 0x10) != 0 || (v6 & 0xA) != 0;
  if ( (result->Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(
      result->pObjectInterface,
      result,
      result->mValue.pStringManaged);
    result->pObjectInterface = 0i64;
  }
  result->Type = VT_Int64;
  result->mValue.BValue = v7;
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_IsParentalControlUgc(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  __int64 v5; // rax
  char v6; // di
  bool v7; // di

  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_None;
  v5 = SteamInternal_ContextInit(&`SteamInternal_ModuleContext'::`2'::s_CallbackCounterAndContext, ctx);
  v6 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v5 + 16) + 336i64))(*(_QWORD *)(v5 + 16));
  v7 = (v6 & 0x10) != 0 || (v6 & 2) != 0;
  if ( (result->Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(
      result->pObjectInterface,
      result,
      result->mValue.pStringManaged);
    result->pObjectInterface = 0i64;
  }
  result->Type = VT_Int64;
  result->mValue.BValue = v7;
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_IsPlayMovie(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  MovieData *v5; // rax
  MovieData *v7; // [rsp+40h] [rbp+8h]

  v5 = MovieData::movieData;
  if ( !MovieData::movieData )
  {
    v7 = (MovieData *)operator new((unsigned int)((_DWORD)MovieData::movieData + 72));
    MovieData::MovieData(v7);
    MovieData::movieData = v5;
  }
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_Int64;
  result->mValue.BValue = v5->m_bPlay == (SKIP|PLAY);
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_IsRoomIn(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  CSteamID::SteamID_t v4; // rax

  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_None;
  v4.m_comp = Fw::MatchingTarget::m_RoomId.m_steamid.m_comp;
  result->Type = VT_Int64;
  result->mValue.BValue = v4.m_unAll64Bits != 0;
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_IsSystemMessageOpen(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  GfxManager *v5; // rax
  GfxManager *v7; // [rsp+40h] [rbp+8h]

  v5 = GfxManager::instance;
  if ( !GfxManager::instance )
  {
    v7 = (GfxManager *)operator new(0x108ui64);
    GfxManager::GfxManager(v7);
    GfxManager::instance = v5;
  }
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_Int64;
  result->mValue.BValue = v5->m_SystemMessageState == SYSTEM_MESSAGE_OPEN;
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_IsTrainingWait(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  GameDataInfo *v5; // rcx
  bool m_TrainingEntry; // di

  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_None;
  if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *(_DWORD *)(*(_QWORD *)NtCurrentTeb()->Reserved1[11]
                                                                            + 40i64) )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v5);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    }
  }
  m_TrainingEntry = `GameDataInfo::getInstance'::`2'::instance.m_TrainingEntry;
  if ( (result->Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(
      result->pObjectInterface,
      result,
      result->mValue.pStringManaged);
    result->pObjectInterface = 0i64;
  }
  result->Type = VT_Int64;
  result->mValue.BValue = m_TrainingEntry;
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_IsValidKeyRecordData(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  BattleSystem::BattleController *v7; // r9
  BattleSystem::BattleController *v8; // rax
  unsigned int UIValue; // edi
  const char *pString; // rbp
  int v11; // ebx
  __int64 v12; // r11
  InputKeyRecord *v13; // r10
  unsigned int iKeyRecordType; // eax
  __int64 v15; // r8
  int v16; // edx
  BattleSystem::BattleController *v18; // [rsp+50h] [rbp-58h]
  int pdata[6]; // [rsp+58h] [rbp-50h] BYREF

  v7 = BattleSystem::BattleController::instance;
  if ( !BattleSystem::BattleController::instance )
  {
    v18 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v18);
    v7 = v8;
    BattleSystem::BattleController::instance = v8;
  }
  UIValue = argv->mValue.UIValue;
  if ( (argv[1].Type & 0x40) != 0 )
    pString = *argv[1].mValue.pStringManaged;
  else
    pString = argv[1].mValue.pString;
  v11 = 0;
  v12 = 0i64;
  v13 = &v7->m_KeyRecord[1][1];
  do
  {
    iKeyRecordType = UIValue;
    ++v11;
    v15 = v12 + 1;
    if ( (unsigned __int64)(v12 + 1) > 5 )
    {
      v16 = 0;
    }
    else
    {
      if ( UIValue > 1 )
        iKeyRecordType = v7->keyRecordInfo.iKeyRecordType;
      v16 = 0;
      if ( iKeyRecordType == 1 )
        LOBYTE(v16) = v13->pKeyBuffer._Mypair._Myval2->uiDataSize >= 0xB4;
      else
        LOBYTE(v16) = v7->m_KeyRecord[iKeyRecordType][v15].pKeyBuffer._Mypair._Myval2->uiDataSize != 0;
    }
    pdata[v12++] = v16;
    ++v13;
  }
  while ( v15 < 5 );
  Scaleform::GFx::Movie::SetVariableArray(ctx->m_movie.pObject, SA_Int, pString, 0, pdata, 5u, SV_Sticky);
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_Float;
  result->mValue.IValue = 0;
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_JoinRoom(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  __int64 IValue; // rdx
  Scaleform::GFx::Value *v6; // rax
  CSteamID roomId; // [rsp+40h] [rbp+8h]

  IValue = argv->mValue.IValue;
  if ( Fw::MatchingTarget::m_IsRoomSearchEnd
    && Fw::MatchingTarget::m_SearchRoomNum
    && *(_DWORD *)(1080 * IValue + *(_QWORD *)&AppMain::pApp + 39648) < *(_DWORD *)(1080 * IValue
                                                                                  + *(_QWORD *)&AppMain::pApp
                                                                                  + 38964) )
  {
    HIWORD(roomId.m_steamid.m_unAll64Bits) = BYTE6(result) & 0xF;
    NetManager::RequestJoinRoom(
      &g_NetworkManager,
      IValue,
      (CSteamID)(roomId.m_steamid.m_unAll64Bits & 0xFFF0000000000000ui64),
      argc);
    s_SceneSequence_2 = 1;
  }
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  v6 = result;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_Float;
  result->mValue.IValue = 0;
  return v6;
}

Scaleform::GFx::Value *__fastcall extension::GFn_KickRankMatchPlayer(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  SEND_MESSAGE *v5; // rdx
  Scaleform::GFx::Value *v6; // rax

  g_NetworkManager.m_RankmatchAccept[0] = RANKMATCH_ACCEPT_REFUSE;
  EnterCriticalSection((LPCRITICAL_SECTION)&g_NetworkManager.m_Mutex);
  v5 = pSendMsgSub[10];
  pSendMsgSub[10]->msgBattleCommand.time &= 0xFFFFFF00;
  v5->msgType = 24;
  NetManager::SendMessageW(&g_NetworkManager, v5, 0i64, 1, 0);
  LeaveCriticalSection((LPCRITICAL_SECTION)&g_NetworkManager.m_Mutex);
  v6 = result;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_Float;
  result->mValue.IValue = 0;
  return v6;
}

Scaleform::GFx::Value *__fastcall extension::GFn_KickRoomPlayer(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  int IValue; // edi
  __int64 v6; // rdx
  const char *v7; // rcx
  GfxManager *v8; // rax
  GfxManager *v10; // [rsp+60h] [rbp+8h]

  IValue = argv->mValue.IValue;
  AgString::getCString(&Fw::NetworkCommon::m_NpId.handle);
  if ( Fw::MatchingTarget::IsRoomOwner(v7, v6) )
  {
    NetManager::KickoutRoomMember(&g_NetworkManager, IValue);
    v8 = GfxManager::instance;
    if ( !GfxManager::instance )
    {
      v10 = (GfxManager *)operator new(0x108ui64);
      GfxManager::GfxManager(v10);
      GfxManager::instance = v8;
    }
    GfxManager::GFv_SetSystemMessage(
      v8,
      "$POPUP_REMOVINGPLAYER",
      SYSTEM_MESSAGE_OK,
      0,
      1,
      "no_title",
      &pnewText,
      "size_s");
  }
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_Float;
  result->mValue.IValue = 0;
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_LoadAnnounceBank(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  AppMain *v6; // rsi
  int IValue; // ecx
  int v8; // ecx
  char *Ptr; // rcx
  char *v10; // rax
  unsigned __int64 v11; // r8
  const char *v12; // rdx
  std::string *v13; // r8
  char *v14; // rcx
  char *v15; // rax
  Scaleform::GFx::Value val; // [rsp+30h] [rbp-21h] BYREF
  __int64 v18; // [rsp+60h] [rbp+Fh]
  std::string v19; // [rsp+68h] [rbp+17h] BYREF

  v18 = -2i64;
  v6 = *(AppMain **)&AppMain::pApp;
  val.Scaleform::ListNode<Scaleform::GFx::Value> = (Scaleform::ListNode<Scaleform::GFx::Value>)_mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
  val.pObjectInterface = 0i64;
  val.Type = VT_None;
  v19._Mypair._Myval2._Myres = 15i64;
  v19._Mypair._Myval2._Mysize = 0i64;
  v19._Mypair._Myval2._Bx._Buf[0] = 0;
  std::string::assign(&v19, "Chara/", 6ui64);
  IValue = argv->mValue.IValue;
  if ( !IValue )
  {
    v12 = "announce_m.sbnk";
    goto LABEL_22;
  }
  v8 = IValue - 1;
  if ( !v8 )
  {
    v12 = "announce_w.sbnk";
LABEL_22:
    v11 = 15i64;
    goto LABEL_23;
  }
  if ( v8 != 1 )
  {
    result->pPrev = (Scaleform::GFx::Value *)-1i64;
    result->pNext = (Scaleform::GFx::Value *)-1i64;
    result->pObjectInterface = 0i64;
    result->Type = VT_Float;
    result->mValue.IValue = 0;
    if ( v19._Mypair._Myval2._Myres >= 0x10 )
    {
      Ptr = v19._Mypair._Myval2._Bx._Ptr;
      if ( v19._Mypair._Myval2._Myres + 1 >= 0x1000 )
      {
        if ( (v19._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
          invalid_parameter_noinfo_noreturn();
        v10 = (char *)*((_QWORD *)v19._Mypair._Myval2._Bx._Ptr - 1);
        if ( v10 >= v19._Mypair._Myval2._Bx._Ptr )
          invalid_parameter_noinfo_noreturn();
        if ( (char *)(v19._Mypair._Myval2._Bx._Ptr - v10) < (char *)8 )
          invalid_parameter_noinfo_noreturn();
        if ( (char *)(v19._Mypair._Myval2._Bx._Ptr - v10) > (char *)0x27 )
          invalid_parameter_noinfo_noreturn();
        Ptr = (char *)*((_QWORD *)v19._Mypair._Myval2._Bx._Ptr - 1);
      }
      operator delete(Ptr);
    }
    v19._Mypair._Myval2._Myres = 15i64;
    v19._Mypair._Myval2._Mysize = 0i64;
    v19._Mypair._Myval2._Bx._Buf[0] = 0;
    if ( (val.Type & 0x40) != 0 )
      Scaleform::GFx::Value::ObjectInterface::ObjectRelease(val.pObjectInterface, &val, val.mValue.pStringManaged);
    return result;
  }
  v11 = 11i64;
  v12 = "system.sbnk";
LABEL_23:
  std::string::append(&v19, v12, v11);
  v13 = &v19;
  if ( v19._Mypair._Myval2._Myres >= 0x10 )
    v13 = (std::string *)v19._Mypair._Myval2._Bx._Ptr;
  AppMain::Sound_LoadPCharacter(v6, 1, v13->_Mypair._Myval2._Bx._Buf);
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_Float;
  result->mValue.IValue = 0;
  if ( v19._Mypair._Myval2._Myres >= 0x10 )
  {
    v14 = v19._Mypair._Myval2._Bx._Ptr;
    if ( v19._Mypair._Myval2._Myres + 1 >= 0x1000 )
    {
      if ( (v19._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
        invalid_parameter_noinfo_noreturn();
      v15 = (char *)*((_QWORD *)v19._Mypair._Myval2._Bx._Ptr - 1);
      if ( v15 >= v19._Mypair._Myval2._Bx._Ptr )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(v19._Mypair._Myval2._Bx._Ptr - v15) < (char *)8 )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(v19._Mypair._Myval2._Bx._Ptr - v15) > (char *)0x27 )
        invalid_parameter_noinfo_noreturn();
      v14 = (char *)*((_QWORD *)v19._Mypair._Myval2._Bx._Ptr - 1);
    }
    operator delete(v14);
  }
  v19._Mypair._Myval2._Myres = 15i64;
  v19._Mypair._Myval2._Mysize = 0i64;
  v19._Mypair._Myval2._Bx._Buf[0] = 0;
  if ( (val.Type & 0x40) != 0 )
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(val.pObjectInterface, &val, val.mValue.pStringManaged);
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_LoadCharacterBank(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  AppMain *v5; // rsi
  int IValue; // edi
  char *Ptr; // rcx
  char *v8; // rax
  std::string *p_resulta; // r8
  int UseableAnotherCostumeCharaID; // eax
  std::string *GalleryVoiceFilePath; // rax
  char *v12; // rcx
  char *v13; // rax
  std::string *v14; // r8
  std::string resulta; // [rsp+30h] [rbp-68h] BYREF
  std::string v17; // [rsp+50h] [rbp-48h] BYREF

  v5 = *(AppMain **)&AppMain::pApp;
  IValue = argv->mValue.IValue;
  CharaProjectData::GetGalleryVoiceFilePath(
    *(CharaProjectData **)(*(_QWORD *)&AppMain::pApp + 10888i64),
    &resulta,
    IValue);
  if ( !resulta._Mypair._Myval2._Mysize )
  {
    result->pPrev = (Scaleform::GFx::Value *)-1i64;
    result->pNext = (Scaleform::GFx::Value *)-1i64;
    result->pObjectInterface = 0i64;
    result->Type = VT_Float;
    result->mValue.IValue = 0;
    if ( resulta._Mypair._Myval2._Myres >= 0x10 )
    {
      Ptr = resulta._Mypair._Myval2._Bx._Ptr;
      if ( resulta._Mypair._Myval2._Myres + 1 >= 0x1000 )
      {
        if ( (resulta._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
          invalid_parameter_noinfo_noreturn();
        v8 = (char *)*((_QWORD *)resulta._Mypair._Myval2._Bx._Ptr - 1);
        if ( v8 >= resulta._Mypair._Myval2._Bx._Ptr )
          invalid_parameter_noinfo_noreturn();
        if ( (char *)(resulta._Mypair._Myval2._Bx._Ptr - v8) < (char *)8 )
          invalid_parameter_noinfo_noreturn();
        if ( (char *)(resulta._Mypair._Myval2._Bx._Ptr - v8) > (char *)0x27 )
          invalid_parameter_noinfo_noreturn();
LABEL_52:
        Ptr = v8;
        goto LABEL_53;
      }
      goto LABEL_53;
    }
    return result;
  }
  p_resulta = &resulta;
  if ( resulta._Mypair._Myval2._Myres >= 0x10 )
    p_resulta = (std::string *)resulta._Mypair._Myval2._Bx._Ptr;
  AppMain::Sound_LoadPCharacter(v5, 1, p_resulta->_Mypair._Myval2._Bx._Buf);
  if ( IValue && IValue != 18 )
  {
LABEL_42:
    result->pPrev = (Scaleform::GFx::Value *)-1i64;
    result->pNext = (Scaleform::GFx::Value *)-1i64;
    result->pObjectInterface = 0i64;
    result->Type = VT_Float;
    result->mValue.IValue = 0;
    if ( resulta._Mypair._Myval2._Myres >= 0x10 )
    {
      Ptr = resulta._Mypair._Myval2._Bx._Ptr;
      if ( resulta._Mypair._Myval2._Myres + 1 >= 0x1000 )
      {
        if ( (resulta._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
          invalid_parameter_noinfo_noreturn();
        v8 = (char *)*((_QWORD *)resulta._Mypair._Myval2._Bx._Ptr - 1);
        if ( v8 >= resulta._Mypair._Myval2._Bx._Ptr )
          invalid_parameter_noinfo_noreturn();
        if ( (char *)(resulta._Mypair._Myval2._Bx._Ptr - v8) < (char *)8 )
          invalid_parameter_noinfo_noreturn();
        if ( (char *)(resulta._Mypair._Myval2._Bx._Ptr - v8) > (char *)0x27 )
          invalid_parameter_noinfo_noreturn();
        goto LABEL_52;
      }
      goto LABEL_53;
    }
    return result;
  }
  UseableAnotherCostumeCharaID = CharaProjectData::GetUseableAnotherCostumeCharaID(
                                   *(CharaProjectData **)(*(_QWORD *)&AppMain::pApp + 10888i64),
                                   IValue,
                                   1);
  GalleryVoiceFilePath = CharaProjectData::GetGalleryVoiceFilePath(
                           *(CharaProjectData **)(*(_QWORD *)&AppMain::pApp + 10888i64),
                           &v17,
                           UseableAnotherCostumeCharaID);
  std::string::assign(&resulta, GalleryVoiceFilePath);
  if ( v17._Mypair._Myval2._Myres >= 0x10 )
  {
    v12 = v17._Mypair._Myval2._Bx._Ptr;
    if ( v17._Mypair._Myval2._Myres + 1 >= 0x1000 )
    {
      if ( (v17._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
        invalid_parameter_noinfo_noreturn();
      v13 = (char *)*((_QWORD *)v17._Mypair._Myval2._Bx._Ptr - 1);
      if ( v13 >= v17._Mypair._Myval2._Bx._Ptr )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(v17._Mypair._Myval2._Bx._Ptr - v13) < (char *)8 )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(v17._Mypair._Myval2._Bx._Ptr - v13) > (char *)0x27 )
        invalid_parameter_noinfo_noreturn();
      v12 = (char *)*((_QWORD *)v17._Mypair._Myval2._Bx._Ptr - 1);
    }
    operator delete(v12);
  }
  if ( resulta._Mypair._Myval2._Mysize )
  {
    v14 = &resulta;
    if ( resulta._Mypair._Myval2._Myres >= 0x10 )
      v14 = (std::string *)resulta._Mypair._Myval2._Bx._Ptr;
    AppMain::Sound_LoadAppendPCharacter(v5, 1, v14->_Mypair._Myval2._Bx._Buf);
    goto LABEL_42;
  }
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_Float;
  result->mValue.IValue = 0;
  if ( resulta._Mypair._Myval2._Myres >= 0x10 )
  {
    Ptr = resulta._Mypair._Myval2._Bx._Ptr;
    if ( resulta._Mypair._Myval2._Myres + 1 >= 0x1000 )
    {
      if ( (resulta._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
        invalid_parameter_noinfo_noreturn();
      v8 = (char *)*((_QWORD *)resulta._Mypair._Myval2._Bx._Ptr - 1);
      if ( v8 >= resulta._Mypair._Myval2._Bx._Ptr )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(resulta._Mypair._Myval2._Bx._Ptr - v8) < (char *)8 )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(resulta._Mypair._Myval2._Bx._Ptr - v8) > (char *)0x27 )
        invalid_parameter_noinfo_noreturn();
      goto LABEL_52;
    }
LABEL_53:
    operator delete(Ptr);
  }
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_LoadOnlineSavedataFlag(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  bool v4; // zf
  Scaleform::GFx::Value *v5; // rax

  v4 = s_OnlineProfileLoadState == ONLINEPROFILE_LOAD_STATE_LOAD;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->mValue.BValue = firnedLoadingFlag || v4;
  v5 = result;
  result->pObjectInterface = 0i64;
  result->Type = VT_Int64;
  return v5;
}

Scaleform::GFx::Value *__fastcall extension::GFn_MemberSelectStart(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  Scaleform::GFx::Value *v5; // rax

  AppMain::MemberSelectStart(*(AppMain **)&AppMain::pApp);
  v5 = result;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_Float;
  result->mValue.IValue = 0;
  return v5;
}

Scaleform::GFx::Value *__fastcall extension::GFn_OpenIMEDialog(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  int m_Status; // ecx
  const char *pString; // rsi
  int IValue; // ebx
  Scaleform::GFx::Value *v8; // rax
  Fw::cImeOption option; // [rsp+30h] [rbp-1C8h] BYREF

  m_Status = Fw::ImeTarget::m_IMEPad.m_Status;
  if ( Fw::ImeTarget::m_currentIME == IME_KEYBOARD )
    m_Status = Fw::ImeTarget::m_IMEKeyboard.m_Status;
  if ( !m_Status )
  {
    if ( (argv->Type & 0x40) != 0 )
      pString = *argv->mValue.pStringManaged;
    else
      pString = argv->mValue.pString;
    IValue = argv[1].mValue.IValue;
    option.userId = 0;
    option.type = IME_TYPE_DEFAULT;
    option.title[0] = 0;
    option.input[0] = 0;
    option.option = 0;
    option.m_pHeap = 0i64;
    strcpy_s(option.title, 0x80ui64, "THE KING OF FIGHTERS XIV");
    strcpy_s(option.input, 0x100ui64, pString);
    option.maxTextLength = IValue;
    option.option = 0;
    option.m_pHeap = &g_NetworkHeap;
    option.posx = (float)GAME_SCREEN_WIDTH / 5.0;
    option.posy = (float)GAME_SCREEN_HEIGHT / 5.0;
    Fw::ImeTarget::Show(&option);
  }
  v8 = result;
  result->mValue.IValue = 0;
  result->Type = VT_Float;
  result->pObjectInterface = 0i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  return v8;
}

Scaleform::GFx::Value *__fastcall extension::GFn_OpenSystemMessage(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  const char *pString; // rdi
  int IValue; // er15
  int v7; // er12
  bool lock; // r13
  const char *title; // r14
  const char *title_name; // rbp
  const char *size; // rsi
  GfxManager *v12; // rax
  GfxManager *v14; // [rsp+80h] [rbp+8h]

  if ( (argv->Type & 0x40) != 0 )
    pString = *argv->mValue.pStringManaged;
  else
    pString = argv->mValue.pString;
  IValue = argv[1].mValue.IValue;
  v7 = argv[2].mValue.IValue;
  lock = argv[3].mValue.BValue;
  if ( (argv[4].Type & 0x40) != 0 )
    title = *argv[4].mValue.pStringManaged;
  else
    title = argv[4].mValue.pString;
  if ( (argv[5].Type & 0x40) != 0 )
    title_name = *argv[5].mValue.pStringManaged;
  else
    title_name = argv[5].mValue.pString;
  if ( (argv[6].Type & 0x40) != 0 )
    size = *argv[6].mValue.pStringManaged;
  else
    size = argv[6].mValue.pString;
  v12 = GfxManager::instance;
  if ( !GfxManager::instance )
  {
    v14 = (GfxManager *)operator new(0x108ui64);
    GfxManager::GfxManager(v14);
    GfxManager::instance = v12;
  }
  GfxManager::GFv_SetSystemMessage(
    v12,
    pString,
    (GfxManager::SYSTEM_MESSAGE_TYPE)IValue,
    v7,
    lock,
    title,
    title_name,
    size);
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_Float;
  result->mValue.IValue = 0;
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_PauseMovieProxy(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  GfxManager *v5; // rax
  GfxManager *v7; // [rsp+40h] [rbp+8h]

  v5 = GfxManager::instance;
  if ( !GfxManager::instance )
  {
    v7 = (GfxManager *)operator new(0x108ui64);
    GfxManager::GfxManager(v7);
    GfxManager::instance = v5;
  }
  if ( v5->m_GFXMovie.m_movieProxy.m_ptr )
    v5->m_GFXMovie.m_movieProxy.m_ptr->m_bPause = 1;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_Float;
  result->mValue.IValue = 0;
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_PauseMovieStack(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  extension::GFXIMovieStack *v5; // rax

  v5 = extension::GFXIMovieStack::Instance();
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->Type = VT_Float;
  v5->m_isPaused = 1;
  result->pObjectInterface = 0i64;
  result->mValue.IValue = 0;
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_PlayCharacterSound(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  __int64 v5; // rbx
  const extension::SoundHashKey *Name; // rax
  extension::exsound_detail::SoundNameRegistry::NameBuffer *m_ptr; // rcx
  extension::SoundHashKey resulta; // [rsp+40h] [rbp+8h] BYREF

  resulta.m_sharedBuffer.m_ptr = (extension::exsound_detail::SoundNameRegistry::NameBuffer *)result;
  v5 = *(_QWORD *)&AppMain::pApp;
  Name = AppMain::Sound_GetName(*(AppMain **)&AppMain::pApp, &resulta, SoundList_1P, argv->mValue.IValue);
  if ( v5 != -2196952 )
    extension::SoundList::playSEByName((extension::SoundList *)(v5 + 2196952), Name, 0i64);
  m_ptr = resulta.m_sharedBuffer.m_ptr;
  if ( resulta.m_sharedBuffer.m_ptr
    && _InterlockedExchangeAdd64(
         (volatile signed __int64 *)&resulta.m_sharedBuffer.m_ptr->m_refCount.m_ptr->m_sharedCount,
         0xFFFFFFFFFFFFFFFFui64) == 1 )
  {
    ((void (__fastcall *)(extension::exsound_detail::SoundNameRegistry::NameBuffer *, __int64))m_ptr->~RefCountableWeakSupportBase)(
      m_ptr,
      1i64);
  }
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_Float;
  result->mValue.IValue = 0;
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_PlayCharacterSoundName(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  __int64 v5; // rdi
  const char *pString; // rdx
  const extension::SoundHashKey *IfExist; // rax
  extension::exsound_detail::SoundNameRegistry::NameBuffer *m_ptr; // rcx
  extension::SoundHashKey resulta; // [rsp+40h] [rbp+8h] BYREF

  resulta.m_sharedBuffer.m_ptr = (extension::exsound_detail::SoundNameRegistry::NameBuffer *)result;
  v5 = *(_QWORD *)&AppMain::pApp;
  if ( (argv->Type & 0x40) != 0 )
    pString = *argv->mValue.pStringManaged;
  else
    pString = argv->mValue.pString;
  IfExist = extension::SoundHashKey::MakeIfExist(&resulta, pString);
  if ( v5 != -2196952 )
    extension::SoundList::playSEByName((extension::SoundList *)(v5 + 2196952), IfExist, 0i64);
  m_ptr = resulta.m_sharedBuffer.m_ptr;
  if ( resulta.m_sharedBuffer.m_ptr
    && _InterlockedExchangeAdd64(
         (volatile signed __int64 *)&resulta.m_sharedBuffer.m_ptr->m_refCount.m_ptr->m_sharedCount,
         0xFFFFFFFFFFFFFFFFui64) == 1 )
  {
    ((void (__fastcall *)(extension::exsound_detail::SoundNameRegistry::NameBuffer *, __int64))m_ptr->~RefCountableWeakSupportBase)(
      m_ptr,
      1i64);
  }
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_Float;
  result->mValue.IValue = 0;
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_PlayMovie(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  int IValue; // edi
  MovieData *v6; // rax
  MovieData *v7; // rax
  extension::SoundManager *v8; // rax
  MovieData *v9; // rax
  MovieData *v11; // [rsp+40h] [rbp+8h]
  MovieData *v12; // [rsp+40h] [rbp+8h]
  MovieData *v13; // [rsp+40h] [rbp+8h]
  extension::SoundManager *v14; // [rsp+40h] [rbp+8h]
  MovieData *v15; // [rsp+40h] [rbp+8h]

  IValue = argv->mValue.IValue;
  v6 = MovieData::movieData;
  if ( !MovieData::movieData )
  {
    v11 = (MovieData *)operator new(0x48ui64);
    MovieData::MovieData(v11);
    MovieData::movieData = v6;
  }
  v6->m_requestMovie = IValue;
  v6->m_waitFrame = 0;
  v6->m_bPlay = PLAY;
  v6->m_timeOut = 0;
  if ( !v6 )
  {
    v12 = (MovieData *)operator new(0x48ui64);
    MovieData::MovieData(v12);
    MovieData::movieData = v6;
  }
  MovieData::LoadCSV(v6, (MOVIE_ID)IValue);
  v7 = MovieData::movieData;
  if ( !MovieData::movieData )
  {
    v13 = (MovieData *)operator new((unsigned int)((_DWORD)MovieData::movieData + 72));
    MovieData::MovieData(v13);
    MovieData::movieData = v7;
  }
  MovieData::LoadGFX(v7, (MOVIE_ID)IValue);
  v8 = extension::SoundManager::the_instance;
  if ( !extension::SoundManager::the_instance )
  {
    v14 = (extension::SoundManager *)operator new(0x310ui64);
    extension::SoundManager::SoundManager(v14);
    extension::SoundManager::the_instance = v8;
  }
  extension::SoundManager::stopBGM(v8, 0.0);
  v9 = MovieData::movieData;
  if ( !MovieData::movieData )
  {
    v15 = (MovieData *)operator new((unsigned int)((_DWORD)MovieData::movieData + 72));
    MovieData::MovieData(v15);
    MovieData::movieData = v9;
  }
  MovieData::Update(v9);
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_Float;
  result->mValue.IValue = 0;
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_PlaySoundBGM(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  int IValue; // eax
  extension::SoundList *v6; // rcx
  Scaleform::GFx::Value *v7; // rax
  bool v8; // [rsp+20h] [rbp-28h]

  IValue = 0;
  if ( argc != 2 || (IValue = argv[1].mValue.IValue, (unsigned int)IValue <= 8) )
  {
    v6 = (extension::SoundList *)(*(_QWORD *)&AppMain::pApp + 48i64 * IValue + 2196904);
    if ( v6 )
      extension::SoundList::playBGM(v6, argv->mValue.IValue, 0.0, 0.0, v8);
  }
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  v7 = result;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_Float;
  result->mValue.IValue = 0;
  return v7;
}

Scaleform::GFx::Value *__fastcall extension::GFn_PlaySoundBGMByName(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  int IValue; // ecx
  const char *pString; // rdx
  extension::SoundList *v7; // rcx
  Scaleform::GFx::Value *v8; // rax
  bool v9; // [rsp+20h] [rbp-28h]

  IValue = 0;
  if ( (argv->Type & 0x40) != 0 )
    pString = *argv->mValue.pStringManaged;
  else
    pString = argv->mValue.pString;
  if ( argc != 2 || (IValue = argv[1].mValue.IValue, (unsigned int)IValue <= 8) )
  {
    v7 = (extension::SoundList *)(*(_QWORD *)&AppMain::pApp + 48i64 * IValue + 2196904);
    if ( v7 )
      extension::SoundList::playBGMByName(v7, pString, 0.0, 0.0, v9);
  }
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  v8 = result;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_Float;
  result->mValue.IValue = 0;
  return v8;
}

Scaleform::GFx::Value *__fastcall extension::GFn_PlaySoundSE(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  int IValue; // eax
  extension::SoundList *v6; // rcx
  Scaleform::GFx::Value *v7; // rax

  IValue = 0;
  if ( argc != 2 || (IValue = argv[1].mValue.IValue, (unsigned int)IValue <= 8) )
  {
    v6 = (extension::SoundList *)(*(_QWORD *)&AppMain::pApp + 48i64 * IValue + 2196904);
    if ( v6 )
      extension::SoundList::playSE(v6, argv->mValue.IValue, 0i64);
  }
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  v7 = result;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_Float;
  result->mValue.IValue = 0;
  return v7;
}

Scaleform::GFx::Value *__fastcall extension::GFn_PlaySoundSEByName(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  int IValue; // edx
  const char *pString; // rcx
  Scaleform::GFx::Value *v7; // rax

  IValue = 0;
  if ( (argv->Type & 0x40) != 0 )
    pString = *argv->mValue.pStringManaged;
  else
    pString = argv->mValue.pString;
  if ( argc == 2 )
    IValue = argv[1].mValue.IValue;
  AppMain::Sound_PlaySEByName(*(AppMain **)&AppMain::pApp, (AppMain::SoundListIndex)IValue, pString, 0i64);
  v7 = result;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_Float;
  result->mValue.IValue = 0;
  return v7;
}

Scaleform::GFx::Value *__fastcall extension::GFn_PlaySoundSEByNamePos(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  AppMain *v5; // rbp
  int v6; // esi
  const char *pString; // rdi
  float IValue; // xmm6_4
  char *v9; // rax
  char v10; // cl
  float v11; // xmm6_4
  __int64 v12; // rdx
  extension::SoundObject obj; // [rsp+70h] [rbp+8h] BYREF

  obj.m_runtimeEffector.m_ptr = (extension::exsound_detail::RuntimeEffector *)result;
  v5 = *(AppMain **)&AppMain::pApp;
  v6 = 0;
  if ( (argv->Type & 0x40) != 0 )
    pString = *argv->mValue.pStringManaged;
  else
    pString = argv->mValue.pString;
  IValue = (float)argv[1].mValue.IValue;
  if ( argc == 3 )
    v6 = argv[2].mValue.IValue;
  v9 = (char *)operator new(0x60ui64);
  v10 = 1;
  *(_QWORD *)v9 = 1i64;
  *((_WORD *)v9 + 4) = 1;
  *(_QWORD *)(v9 + 12) = 0i64;
  *(_QWORD *)(v9 + 20) = 0i64;
  *((_DWORD *)v9 + 7) = 1120403456;
  *((_QWORD *)v9 + 11) = 0i64;
  obj.m_runtimeEffector.m_ptr = (extension::exsound_detail::RuntimeEffector *)v9;
  v11 = IValue / 100.0;
  if ( !v9[8] && *((float *)v9 + 6) == v11 )
    v10 = 0;
  v9[8] = v10;
  *((float *)v9 + 6) = v11;
  v9[9] = 0;
  AppMain::Sound_PlaySEByName(v5, (AppMain::SoundListIndex)v6, pString, &obj, 0i64);
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_Float;
  result->mValue.IValue = 0;
  extension::RefCountablePtr<extension::exsound_detail::RuntimeEffector>::~RefCountablePtr<extension::exsound_detail::RuntimeEffector>(
    &obj.m_runtimeEffector,
    v12);
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_PlayStartReplay(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  __int64 IValue; // rdx
  int v6; // eax
  int v7; // ecx
  int v8; // er10
  BattleReplay *v9; // r8
  Scaleform::GFx::Value *v10; // rax

  IValue = argv->mValue.IValue;
  v6 = argv[1].mValue.IValue;
  v7 = argv[2].mValue.IValue;
  v8 = argv[3].mValue.IValue;
  if ( *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 7352i64) == 98 )
  {
    s_Minpos = argv[1].mValue.IValue;
    s_Cursor = v7;
    v9 = (BattleReplay *)(*(_QWORD *)&AppMain::pApp + 1184 * IValue + 2388168);
    s_Tabno = v8;
  }
  else
  {
    s_Cursor_0 = argv[2].mValue.IValue;
    s_Minpos_0 = v6;
    v9 = (BattleReplay *)(1184 * IValue + *(_QWORD *)&AppMain::pApp + 2388168i64);
    s_Tabno_0 = v8;
  }
  AppMain::SetBattleInfoFromReplayData(*(AppMain **)&AppMain::pApp, IValue, v9);
  v10 = result;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_Float;
  result->mValue.IValue = 0;
  return v10;
}

Scaleform::GFx::Value *__fastcall extension::GFn_Quit(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  GfxManager *v6; // rax
  GfxManager *v8; // [rsp+40h] [rbp+8h]

  v6 = GfxManager::instance;
  if ( !GfxManager::instance )
  {
    v8 = (GfxManager *)operator new(0x108ui64);
    GfxManager::GfxManager(v8);
    GfxManager::instance = v6;
  }
  v6->m_QuitResultCode = argv->mValue.IValue;
  *(_WORD *)&v6->m_bCrossGFXMovie = 256;
  v6->m_bLockGFXMovie = 0;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_None;
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_QuitCross(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  GfxManager *v6; // rax
  GfxManager *v8; // [rsp+40h] [rbp+8h]

  v6 = GfxManager::instance;
  if ( !GfxManager::instance )
  {
    v8 = (GfxManager *)operator new(0x108ui64);
    GfxManager::GfxManager(v8);
    GfxManager::instance = v6;
  }
  v6->m_QuitResultCode = argv->mValue.IValue;
  *(_WORD *)&v6->m_bCrossGFXMovie = 257;
  v6->m_bLockGFXMovie = 0;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_None;
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_QuitLock(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  GfxManager *v6; // rax
  GfxManager *v8; // [rsp+40h] [rbp+8h]

  v6 = GfxManager::instance;
  if ( !GfxManager::instance )
  {
    v8 = (GfxManager *)operator new(0x108ui64);
    GfxManager::GfxManager(v8);
    GfxManager::instance = v6;
  }
  v6->m_QuitResultCode = argv->mValue.IValue;
  *(_WORD *)&v6->m_bCrossGFXMovie = 256;
  v6->m_bLockGFXMovie = 1;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_None;
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_RequestEntryOff(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  signed __int64 v5; // rbx
  int v6; // er8
  __int64 v7; // rdx
  const char *v8; // rcx
  bool IsRoomOwner; // al
  bool v10; // cl
  Scaleform::GFx::Value *v11; // rax

  if ( g_NetworkManager.gamedata.onlineState == NET_STATE_WAITCLIENT )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)&Fw::NetTransceiver::m_SendMutex);
    v5 = Fw::NetTransceiver::m_UserInfo._Mypair._Myval2._Mylast
       - Fw::NetTransceiver::m_UserInfo._Mypair._Myval2._Myfirst;
    LeaveCriticalSection((LPCRITICAL_SECTION)&Fw::NetTransceiver::m_SendMutex);
    if ( !(_DWORD)v5 )
    {
      if ( Fw::MatchingTarget::m_RoomId.m_steamid.m_comp )
      {
        if ( g_NetworkManager.gamedata.matchMode == NETWORK_MATCHING_TYPE_FREE )
        {
          AgString::getCString(&Fw::NetworkCommon::m_NpId.handle);
          IsRoomOwner = Fw::MatchingTarget::IsRoomOwner(v8, v7);
          v10 = Fw::InvitationCommon::m_SessionFlag;
          if ( !IsRoomOwner )
            v10 = 0;
          Fw::InvitationCommon::m_SessionFlag = v10;
        }
        NetManager::ChangeState(&g_NetworkManager, NET_STATE_LEAVEROOM, v6);
      }
      g_NetworkManager.gamedata.reservationCreateRoomFlag = 0;
      g_NetworkManager.rank_traning_wait.stageID = STAGE_ID_NONE;
    }
  }
  result->pObjectInterface = 0i64;
  v11 = result;
  result->mValue.IValue = 0;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->Type = VT_Float;
  return v11;
}

Scaleform::GFx::Value *__fastcall extension::GFn_RequestLeaderBoardRanking(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  Scaleform::GFx::Value *v5; // rax

  AppMain::ST_LeaderboardLoadData(
    *(AppMain **)&AppMain::pApp,
    argv->mValue.IValue,
    argv[1].mValue.IValue,
    argv[2].mValue.IValue,
    argv[3].mValue.IValue);
  v5 = result;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_Float;
  result->mValue.IValue = 0;
  return v5;
}

Scaleform::GFx::Value *__fastcall extension::GFn_RequestOnlineReplayData(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  Scaleform::GFx::Value *v5; // rax

  AppMain::ST_OnlineReplayLoadData(
    *(AppMain **)&AppMain::pApp,
    argv->mValue.IValue,
    argv[1].mValue.IValue,
    argv[2].mValue.IValue);
  v5 = result;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_Float;
  result->mValue.IValue = 0;
  return v5;
}

Scaleform::GFx::Value *__fastcall extension::GFn_RequestOnlineSaveData(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  char *pString; // rbp
  SteamNameCache *v6; // r14
  std::_Tree_node<std::pair<std::string const ,CSteamID>,void *> *v7; // rax
  int v8; // er8
  int v9; // er9
  std::_Tree_node<std::pair<std::string const ,CSteamID>,void *> *Myhead; // rbx
  Scaleform::GFx::Value *v11; // rax
  char *_Keyval; // [rsp+50h] [rbp+18h] BYREF

  if ( (argv->Type & 0x40) != 0 )
    pString = (char *)*argv->mValue.pStringManaged;
  else
    pString = (char *)argv->mValue.pString;
  v6 = SteamNameCache::ms_instance;
  _Keyval = pString;
  v7 = std::_Tree<std::_Tmap_traits<std::string,CSteamID,std::less<void>,std::allocator<std::pair<std::string const,CSteamID>>,0>>::_Lbound<char const *>(
         &SteamNameCache::ms_instance->m_reverseLUT,
         (const char *const *)&_Keyval);
  Myhead = v7;
  if ( v7 == v6->m_reverseLUT._Mypair._Myval2._Myval2._Myhead
    || std::string::compare((std::string *)&v7->_Myval.first, pString) > 0 )
  {
    Myhead = v6->m_reverseLUT._Mypair._Myval2._Myval2._Myhead;
  }
  if ( Myhead == v6->m_reverseLUT._Mypair._Myval2._Myval2._Myhead )
  {
    result->mValue.BValue = 0;
  }
  else
  {
    _Keyval = (char *)Myhead->_Myval.second.m_steamid.m_unAll64Bits;
    if ( s_OnlineProfileLoadState == ONLINEPROFILE_LOAD_STATE_LOAD )
      result->mValue.BValue = 0;
    else
      result->mValue.BValue = AppMain::OnlineProfileRequestOnlineSaveData(
                                *(AppMain **)&AppMain::pApp,
                                (const Fw::ONLINEID *)&_Keyval,
                                v8,
                                v9);
  }
  v11 = result;
  result->Type = VT_Int64;
  result->pObjectInterface = 0i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  return v11;
}

Scaleform::GFx::Value *__fastcall extension::GFn_RequestPlayBGMUtil(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  AppMain *v5; // rsi
  const char *pString; // rbx
  extension::exsound_detail::SoundNameRegistry *v7; // rax
  AppMain *v8; // rcx
  extension::exsound_detail::SoundNameRegistry::NameBuffer *m_ptr; // rbx
  extension::exsound_detail::SoundNameRegistry::NameBuffer *v10; // r9
  char *v11; // r8
  char *m_str; // rax
  signed __int64 v13; // r8
  int v14; // ecx
  int v15; // edx
  extension::RefCountablePtr<extension::exsound_detail::SoundNameRegistry::NameBuffer> resulta; // [rsp+60h] [rbp+8h] BYREF
  extension::SoundHashKey v18; // [rsp+70h] [rbp+18h] BYREF

  resulta.m_ptr = (extension::exsound_detail::SoundNameRegistry::NameBuffer *)result;
  v5 = *(AppMain **)&AppMain::pApp;
  if ( (argv->Type & 0x40) != 0 )
    pString = *argv->mValue.pStringManaged;
  else
    pString = argv->mValue.pString;
  v7 = extension::exsound_detail::SoundNameRegistry::Instance();
  extension::exsound_detail::SoundNameRegistry::makeShared(v7, &resulta, pString);
  AppMain::Sound_BGMPlay_GetSoundHashKey(v8, &v18);
  m_ptr = v18.m_sharedBuffer.m_ptr;
  if ( !v18.m_sharedBuffer.m_ptr )
    goto LABEL_12;
  v10 = resulta.m_ptr;
  v11 = resulta.m_ptr ? resulta.m_ptr->m_str : 0i64;
  m_str = v18.m_sharedBuffer.m_ptr->m_str;
  v13 = v11 - v18.m_sharedBuffer.m_ptr->m_str;
  do
  {
    v14 = (unsigned __int8)m_str[v13];
    v15 = (unsigned __int8)*m_str - v14;
    if ( v15 )
      break;
    ++m_str;
  }
  while ( v14 );
  if ( v15 )
  {
LABEL_12:
    AppMain::Sound_PlayBGMByName(v5, (const extension::SoundHashKey *)&resulta, 0.0, 0.0, 0);
    extension::SoundHashKey::operator=(&v5->m_nowPlayBGM, (const extension::SoundHashKey *)&resulta);
    v10 = resulta.m_ptr;
  }
  if ( m_ptr )
  {
    if ( _InterlockedExchangeAdd64(
           (volatile signed __int64 *)&m_ptr->m_refCount.m_ptr->m_sharedCount,
           0xFFFFFFFFFFFFFFFFui64) == 1 )
      ((void (__fastcall *)(extension::exsound_detail::SoundNameRegistry::NameBuffer *, __int64))v18.m_sharedBuffer.m_ptr->~RefCountableWeakSupportBase)(
        v18.m_sharedBuffer.m_ptr,
        1i64);
    v10 = resulta.m_ptr;
  }
  if ( v10
    && _InterlockedExchangeAdd64(
         (volatile signed __int64 *)&v10->m_refCount.m_ptr->m_sharedCount,
         0xFFFFFFFFFFFFFFFFui64) == 1 )
  {
    ((void (__fastcall *)(extension::exsound_detail::SoundNameRegistry::NameBuffer *, __int64))v10->~RefCountableWeakSupportBase)(
      v10,
      1i64);
  }
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_None;
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_ResearchRoom(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  Scaleform::GFx::Value *v5; // rax

  NetManager::RequestSearchRoom((NetManager *)result, 0i64, 3);
  v5 = result;
  s_SceneSequence_2 = 2;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_Float;
  result->mValue.IValue = 0;
  return v5;
}

Scaleform::GFx::Value *__fastcall extension::GFn_ResumeMovieProxy(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  GfxManager *v5; // rax
  GfxManager *v7; // [rsp+40h] [rbp+8h]

  v5 = GfxManager::instance;
  if ( !GfxManager::instance )
  {
    v7 = (GfxManager *)operator new(0x108ui64);
    GfxManager::GfxManager(v7);
    GfxManager::instance = v5;
  }
  if ( v5->m_GFXMovie.m_movieProxy.m_ptr )
    v5->m_GFXMovie.m_movieProxy.m_ptr->m_bPause = 0;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_Float;
  result->mValue.IValue = 0;
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_ResumeMovieStack(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  extension::GFXIMovieStack *v5; // rax

  v5 = extension::GFXIMovieStack::Instance();
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->Type = VT_Float;
  v5->m_isPaused = 0;
  result->pObjectInterface = 0i64;
  result->mValue.IValue = 0;
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_RoomInviteFriend(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  Scaleform::GFx::Value *v5; // rax

  AppMain::ST_RoomInviteFriend(*(AppMain **)&AppMain::pApp, (__int64)ctx);
  v5 = result;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_Float;
  result->mValue.IValue = 0;
  return v5;
}

Scaleform::GFx::Value *__fastcall extension::GFn_RoomLeave(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  __int64 v5; // rdx
  const char *v6; // rcx
  bool IsRoomOwner; // al
  bool v8; // cl
  Scaleform::GFx::Value *v9; // rax

  if ( Fw::MatchingTarget::m_RoomId.m_steamid.m_comp )
  {
    if ( g_NetworkManager.gamedata.matchMode == NETWORK_MATCHING_TYPE_FREE )
    {
      AgString::getCString(&Fw::NetworkCommon::m_NpId.handle);
      IsRoomOwner = Fw::MatchingTarget::IsRoomOwner(v6, v5);
      v8 = Fw::InvitationCommon::m_SessionFlag;
      if ( !IsRoomOwner )
        v8 = 0;
      Fw::InvitationCommon::m_SessionFlag = v8;
    }
    NetManager::ChangeState(&g_NetworkManager, NET_STATE_LEAVEROOM, (int)argv);
  }
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  v9 = result;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_Float;
  result->mValue.IValue = 0;
  return v9;
}

Scaleform::GFx::Value *__fastcall extension::GFn_RoomSeatBattleReady(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  Scaleform::GFx::Value *v5; // rax

  AppMain::ST_RoomSeatBattleReady(*(AppMain **)&AppMain::pApp);
  v5 = result;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_Float;
  result->mValue.IValue = 0;
  return v5;
}

Scaleform::GFx::Value *__fastcall extension::GFn_RoomSeatBattleReadyCancel(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  Scaleform::GFx::Value *v5; // rax

  AppMain::ST_RoomSeatBattleReadyCancel(*(AppMain **)&AppMain::pApp);
  v5 = result;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_Float;
  result->mValue.IValue = 0;
  return v5;
}

Scaleform::GFx::Value *__fastcall extension::GFn_RoomSeatLeave(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  Scaleform::GFx::Value *v5; // rax

  AppMain::ST_RoomSeatLeave(*(AppMain **)&AppMain::pApp);
  v5 = result;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_Float;
  result->mValue.IValue = 0;
  return v5;
}

Scaleform::GFx::Value *__fastcall extension::GFn_RoomSeatSit(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  Scaleform::GFx::Value *v5; // rax

  AppMain::ST_RoomSeatSit(*(AppMain **)&AppMain::pApp, argv->mValue.IValue, argv[1].mValue.BValue);
  v5 = result;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_Float;
  result->mValue.IValue = 0;
  return v5;
}

Scaleform::GFx::Value *__fastcall extension::GFn_RoomTableBattleTypeChange(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  Scaleform::GFx::Value *v5; // rax

  AppMain::ST_RoomTableBattleTypeChange(*(AppMain **)&AppMain::pApp, (NETWORK_ROOM_BATTLE_TYPE)argv->mValue.IValue);
  v5 = result;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_Float;
  result->mValue.IValue = 0;
  return v5;
}

Scaleform::GFx::Value *__fastcall extension::GFn_SEVolumeModulation(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  Scaleform::GFx::Value *v5; // rax

  AppMain::Sound_Volume_SE_Modulation((AppMain *)result, argv->mValue.NValue, argv[1].mValue.NValue);
  v5 = result;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_Float;
  result->mValue.IValue = 0;
  return v5;
}

Scaleform::GFx::Value *__fastcall extension::GFn_SaveDisplayOption(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  GfxManager *v6; // rax
  GfxManager *v8; // [rsp+40h] [rbp+8h]

  if ( !GfxManager::instance )
  {
    v8 = (GfxManager *)operator new(0x108ui64);
    GfxManager::GfxManager(v8);
    GfxManager::instance = v6;
  }
  GfxManager::GFn_SaveDisplayOption((GfxManager *)result, argv, (unsigned int)argv);
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_None;
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_SearchText(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  __int64 v5; // rcx
  const char *pString; // rdi
  int v7; // esi
  extension::TranslateTable *v8; // rax
  const std::pair<char const *,enum LANGUAGE_MODE> *v9; // rcx
  const char *first; // rcx
  const char *v11; // r8
  const char *v12; // rdi

  v5 = *(_QWORD *)&AppMain::pApp;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_None;
  if ( (argv->Type & 0x40) != 0 )
    pString = *argv->mValue.pStringManaged;
  else
    pString = argv->mValue.pString;
  if ( *pString == 36 || *pString == 64 )
    ++pString;
  v7 = *(_DWORD *)(v5 + 2197384);
  v8 = extension::TranslateTable::Instance();
  v9 = extension::auxscript::MyLangCodeNameTable;
  while ( v9->second != v7 )
  {
    if ( ++v9 == (const std::pair<char const *,enum LANGUAGE_MODE> *)extension::auxscript::my_testpolicy_name_table )
    {
      first = 0i64;
      goto LABEL_12;
    }
  }
  first = v9->first;
LABEL_12:
  v11 = "en_US";
  if ( first )
    v11 = first;
  v12 = extension::TranslateTable::executeTranslate(v8, pString, v11);
  if ( (result->Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(
      result->pObjectInterface,
      result,
      result->mValue.pStringManaged);
    result->pObjectInterface = 0i64;
  }
  result->Type = 6;
  result->mValue.pString = v12;
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_SendChatMessage(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  char *pString; // rdx
  Scaleform::GFx::Value *v6; // rax

  if ( (argv->Type & 0x40) != 0 )
    pString = (char *)*argv->mValue.pStringManaged;
  else
    pString = (char *)argv->mValue.pString;
  NetManager::SendRoomChatMessage(&g_NetworkManager, pString, (char *)(*(_QWORD *)&AppMain::pApp + 2183144i64), 0);
  v6 = result;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_Float;
  result->mValue.IValue = 0;
  return v6;
}

Scaleform::GFx::Value *__fastcall extension::GFn_SendChatMessageInBattle(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  const char *pString; // rsi
  __int64 v6; // rbx
  void *v7; // rcx
  void *v8; // rcx
  __int64 v9; // rax
  char *v10; // rax
  Scaleform::GFx::Value *v11; // rax

  if ( (argv->Type & 0x40) != 0 )
    pString = *argv->mValue.pStringManaged;
  else
    pString = argv->mValue.pString;
  v6 = *(_QWORD *)&AppMain::pApp;
  v7 = *(void **)(*(_QWORD *)&AppMain::pApp + 2192288i64);
  *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2192280i64) = 0;
  if ( v7 )
  {
    operator delete(v7, (unsigned __int64)ctx);
    *(_QWORD *)(v6 + 2192288) = 0i64;
  }
  v8 = *(void **)(v6 + 2192288);
  if ( v8 )
  {
    operator delete(v8, (unsigned __int64)ctx);
    *(_QWORD *)(v6 + 2192288) = 0i64;
  }
  if ( pString )
  {
    v9 = -1i64;
    do
      ++v9;
    while ( pString[v9] );
    v10 = BSUtil::strCopy(pString, v9);
    *(_DWORD *)(v6 + 2192280) |= 2u;
    *(_QWORD *)(v6 + 2192288) = v10;
  }
  else
  {
    *(_DWORD *)(v6 + 2192280) ^= 2u;
  }
  v11 = result;
  result->pObjectInterface = 0i64;
  result->mValue.IValue = 0;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->Type = VT_Float;
  return v11;
}

Scaleform::GFx::Value *__fastcall extension::GFn_SendPlayerSelectedDevice(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  int IValue; // eax
  int v6; // ecx
  __int64 v7; // rdx
  __int64 v8; // rbx
  PCSavedDevice *SavedDeviceFromIndex; // rax
  AgControllerUID uid; // xmm0_8
  unsigned int index; // ecx
  Scaleform::GFx::Value *v12; // rax
  PCSavedDevice resulta; // [rsp+28h] [rbp-20h] BYREF

  IValue = argv->mValue.IValue;
  v6 = argv[1].mValue.IValue;
  if ( IValue )
  {
    v7 = 0i64;
    if ( IValue == 1 )
      v7 = 2112i64;
  }
  else
  {
    v7 = 1056i64;
  }
  v8 = v7 + *(_QWORD *)&AppMain::pApp;
  *(_DWORD *)(v7 + *(_QWORD *)&AppMain::pApp + 2198556) = v6;
  SavedDeviceFromIndex = anonymous_namespace_::GetSavedDeviceFromIndex(&resulta, v6);
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  uid = SavedDeviceFromIndex->uid;
  index = SavedDeviceFromIndex->index;
  v12 = result;
  *(AgControllerUID *)(v8 + 2198544) = uid;
  *(_DWORD *)(v8 + 2198552) = index;
  result->Type = VT_None;
  return v12;
}

Scaleform::GFx::Value *__fastcall extension::GFn_SendSerializedBindings(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  int IValue; // eax
  unsigned int v7; // er14
  signed int ArraySize; // eax
  int *v9; // rcx
  __int64 v10; // rdx
  unsigned int v11; // edi
  __int64 v12; // r12
  __int64 i; // rbx
  AppMain *v14; // rdi
  _OWORD *v15; // rbx
  _OWORD *v16; // rax
  FighterOperationKeyboardMapper *v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rdx
  FighterOperation *v20; // rax
  __int64 v21; // r8
  _OWORD *v22; // rax
  FighterOperationKeyboardMapper *v23; // rcx
  __int64 v24; // rdx
  FighterOperationKeyboardMapper *v25; // rax
  AppMain *v26; // rcx
  AgControllerUID ControllerUIDForUser; // rax
  FighterOperation *v28; // rax
  __int64 v29; // rcx
  AgControllerUID contUID; // [rsp+20h] [rbp-E0h]
  Scaleform::GFx::Value pval; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v33; // [rsp+60h] [rbp-A0h]
  FighterOperationMapper resulta; // [rsp+68h] [rbp-98h] BYREF
  __int64 userID; // [rsp+90h] [rbp-70h] BYREF
  FighterOperationKeyboardMapper v36; // [rsp+A0h] [rbp-60h] BYREF
  int bindings[52]; // [rsp+4A0h] [rbp+3A0h] BYREF

  v33 = -2i64;
  if ( argc >= 4 )
  {
    IValue = argv->mValue.IValue;
    if ( IValue )
    {
      v7 = 0;
      if ( IValue == 1 )
        v7 = 2;
    }
    else
    {
      v7 = 1;
    }
    *(_DWORD *)contUID.m_uid = argv[1].mValue.IValue;
    *(_DWORD *)&contUID.m_uid[4] = argv[2].mValue.IValue;
    ArraySize = Scaleform::GFx::Value::ObjectInterface::GetArraySize(
                  argv[3].pObjectInterface,
                  argv[3].mValue.pStringManaged);
    v9 = bindings;
    v10 = 3i64;
    do
    {
      *(_QWORD *)v9 = -1i64;
      *((_QWORD *)v9 + 1) = -1i64;
      *((_QWORD *)v9 + 2) = -1i64;
      v9 += 16;
      *((_QWORD *)v9 - 5) = -1i64;
      *((_QWORD *)v9 - 4) = -1i64;
      *((_QWORD *)v9 - 3) = -1i64;
      *((_QWORD *)v9 - 2) = -1i64;
      *((_QWORD *)v9 - 1) = -1i64;
      --v10;
    }
    while ( v10 );
    *(_QWORD *)v9 = -1i64;
    v11 = 0;
    v12 = ArraySize;
    for ( i = 0i64; i < v12; ++i )
    {
      pval.Scaleform::ListNode<Scaleform::GFx::Value> = (Scaleform::ListNode<Scaleform::GFx::Value>)_mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
      pval.pObjectInterface = 0i64;
      pval.Type = VT_None;
      Scaleform::GFx::Value::ObjectInterface::GetElement(
        argv[3].pObjectInterface,
        argv[3].mValue.pStringManaged,
        v11,
        &pval);
      bindings[i] = pval.mValue.IValue;
      if ( (pval.Type & 0x40) != 0 )
        Scaleform::GFx::Value::ObjectInterface::ObjectRelease(pval.pObjectInterface, &pval, pval.mValue.pStringManaged);
      ++v11;
    }
    v14 = *(AppMain **)&AppMain::pApp;
    if ( contUID )
    {
      AppMain::GetSaveDataKeyConfigMyMapper(*(AppMain **)&AppMain::pApp, &resulta, (USER_ID)v7);
      FighterOperationMapper::deserializeBindings(&resulta, bindings);
      ControllerUIDForUser = AppMain::GetControllerUIDForUser(v26, &userID, v7);
      if ( *(_BYTE *)ControllerUIDForUser.m_uid[0] == contUID.m_uid[0]
        && *(_DWORD *)(*(_QWORD *)&ControllerUIDForUser + 1i64) == *(_DWORD *)&contUID.m_uid[1]
        && *(_WORD *)(*(_QWORD *)&ControllerUIDForUser + 5i64) == *(_WORD *)&contUID.m_uid[5]
        && *(_BYTE *)(*(_QWORD *)&ControllerUIDForUser + 7i64) == contUID.m_uid[7] )
      {
        v28 = FighterOperation::Instance();
        if ( v7 - 1 <= 1 )
        {
          v29 = (__int64)&v28[-1].m_slots[v7 + 1].operationMapper.m_mapping[4];
          if ( v29 )
          {
            *(FighterOperationMapper *)(v29 + 8) = resulta;
            FighterOperation::ReverseOperationMapper::assign(
              (FighterOperation::ReverseOperationMapper *)(v29 + 48),
              (const FighterOperationMapper *)(v29 + 8));
          }
        }
      }
      AppMain::SetSaveDataKeyConfigUserUID(v14, (const std::piecewise_construct_t *)v7, contUID, &resulta);
    }
    else
    {
      v15 = (_OWORD *)(1056i64 * v7 + *(_QWORD *)&AppMain::pApp + 2197520i64);
      v16 = v15;
      v17 = &v36;
      v18 = 8i64;
      v19 = 8i64;
      do
      {
        *(_OWORD *)v17->m_mapping = *v16;
        *(_OWORD *)&v17->m_mapping[4] = v16[1];
        *(_OWORD *)&v17->m_mapping[8] = v16[2];
        *(_OWORD *)&v17->m_mapping[12] = v16[3];
        *(_OWORD *)&v17->m_mapping[16] = v16[4];
        *(_OWORD *)&v17->m_mapping[20] = v16[5];
        *(_OWORD *)&v17->m_mapping[24] = v16[6];
        v17 = (FighterOperationKeyboardMapper *)((char *)v17 + 128);
        *(_OWORD *)&v17[-1].m_mapping[252] = v16[7];
        v16 += 8;
        --v19;
      }
      while ( v19 );
      FighterOperationKeyboardMapper::deserializeBindings(&v36, bindings);
      v20 = FighterOperation::Instance();
      if ( v7 - 1 <= 1 )
      {
        v21 = (__int64)&v20[-1].m_slots[v7 + 1].operationMapper.m_mapping[4];
        if ( v21 )
        {
          v22 = (_OWORD *)(v21 + 92);
          v23 = &v36;
          v24 = 8i64;
          do
          {
            *v22 = *(_OWORD *)v23->m_mapping;
            v22[1] = *(_OWORD *)&v23->m_mapping[4];
            v22[2] = *(_OWORD *)&v23->m_mapping[8];
            v22[3] = *(_OWORD *)&v23->m_mapping[12];
            v22[4] = *(_OWORD *)&v23->m_mapping[16];
            v22[5] = *(_OWORD *)&v23->m_mapping[20];
            v22[6] = *(_OWORD *)&v23->m_mapping[24];
            v22 += 8;
            *(v22 - 1) = *(_OWORD *)&v23->m_mapping[28];
            v23 = (FighterOperationKeyboardMapper *)((char *)v23 + 128);
            --v24;
          }
          while ( v24 );
          FighterOperation::ReverseOperationKeyboardMapper::assign(
            (FighterOperation::ReverseOperationKeyboardMapper *)(v21 + 1120),
            (const FighterOperationKeyboardMapper *)(v21 + 92));
        }
      }
      v25 = &v36;
      do
      {
        *v15 = *(_OWORD *)v25->m_mapping;
        v15[1] = *(_OWORD *)&v25->m_mapping[4];
        v15[2] = *(_OWORD *)&v25->m_mapping[8];
        v15[3] = *(_OWORD *)&v25->m_mapping[12];
        v15[4] = *(_OWORD *)&v25->m_mapping[16];
        v15[5] = *(_OWORD *)&v25->m_mapping[20];
        v15[6] = *(_OWORD *)&v25->m_mapping[24];
        v15 += 8;
        *(v15 - 1) = *(_OWORD *)&v25->m_mapping[28];
        v25 = (FighterOperationKeyboardMapper *)((char *)v25 + 128);
        --v18;
      }
      while ( v18 );
    }
    result->pPrev = (Scaleform::GFx::Value *)-1i64;
    result->pNext = (Scaleform::GFx::Value *)-1i64;
    result->pObjectInterface = 0i64;
    result->Type = VT_None;
  }
  else
  {
    result->pPrev = (Scaleform::GFx::Value *)-1i64;
    result->pNext = (Scaleform::GFx::Value *)-1i64;
    result->pObjectInterface = 0i64;
    result->Type = VT_None;
  }
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_SetAllMuteFlag(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  bool BValue; // r10
  int i; // eax

  BValue = argv->mValue.BValue;
  for ( i = 0; i < 12; ++i )
    g_NetworkManager.gamedata.playerDataSub[(unsigned __int8)i].chatOffFlag = BValue;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_Float;
  result->mValue.IValue = 0;
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_SetAmbienceVolume(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  GfxManager *v6; // rax
  AppMain *v7; // rcx
  GfxManager *v9; // [rsp+40h] [rbp+8h]

  if ( !GfxManager::instance )
  {
    v9 = (GfxManager *)operator new(0x108ui64);
    GfxManager::GfxManager(v9);
    GfxManager::instance = v6;
  }
  v7 = *(AppMain **)&AppMain::pApp;
  *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2197416i64) = (int)(float)argv->mValue.IValue;
  AppMain::Sound_Volume_Commit(v7);
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_None;
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_SetAttackDataStatus(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  GfxManager *v6; // rax
  GfxManager *v8; // [rsp+40h] [rbp+8h]

  if ( !GfxManager::instance )
  {
    v8 = (GfxManager *)operator new(0x108ui64);
    GfxManager::GfxManager(v8);
    GfxManager::instance = v6;
  }
  GfxManager::GFn_SetAttackDataStatus((GfxManager *)result, argv, (unsigned int)argv);
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_None;
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_SetAutoActing(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  GfxManager *v5; // rax
  GfxManager *v7; // [rsp+40h] [rbp+8h]

  if ( !GfxManager::instance )
  {
    v7 = (GfxManager *)operator new(0x108ui64);
    GfxManager::GfxManager(v7);
    GfxManager::instance = v5;
  }
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_None;
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_SetBGMVolume(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  GfxManager *v6; // rax
  AppMain *v7; // rcx
  GfxManager *v9; // [rsp+40h] [rbp+8h]

  if ( !GfxManager::instance )
  {
    v9 = (GfxManager *)operator new(0x108ui64);
    GfxManager::GfxManager(v9);
    GfxManager::instance = v6;
  }
  v7 = *(AppMain **)&AppMain::pApp;
  *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2197408i64) = (int)(float)argv->mValue.IValue;
  AppMain::Sound_Volume_Commit(v7);
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_None;
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_SetButtonConfig(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  GfxManager *v6; // rax
  GfxManager *v8; // [rsp+40h] [rbp+8h]

  if ( !GfxManager::instance )
  {
    v8 = (GfxManager *)operator new(0x108ui64);
    GfxManager::GfxManager(v8);
    GfxManager::instance = v6;
  }
  GfxManager::GFn_SetButtonConfig((GfxManager *)result, argv, (unsigned int)argv);
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_None;
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_SetCharaVoiceVolume(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  GfxManager *v6; // rax
  AppMain *v7; // rcx
  GfxManager *v9; // [rsp+40h] [rbp+8h]

  if ( !GfxManager::instance )
  {
    v9 = (GfxManager *)operator new(0x108ui64);
    GfxManager::GfxManager(v9);
    GfxManager::instance = v6;
  }
  v7 = *(AppMain **)&AppMain::pApp;
  *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2197420i64) = (int)(float)argv->mValue.IValue;
  AppMain::Sound_Volume_Commit(v7);
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_None;
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_SetCommentGaya(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  GfxManager *v6; // rax
  GfxManager *v8; // [rsp+40h] [rbp+8h]

  if ( !GfxManager::instance )
  {
    v8 = (GfxManager *)operator new(0x108ui64);
    GfxManager::GfxManager(v8);
    GfxManager::instance = v6;
  }
  *(_BYTE *)(*(_QWORD *)&AppMain::pApp + 2197436i64) = argv->mValue.BValue;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_None;
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_SetContinueBonus(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  int IValue; // edi
  Scaleform::GFx::Value *v6; // rax
  GameDataInfo *v7; // rcx

  IValue = argv->mValue.IValue;
  if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *(_DWORD *)(*(_QWORD *)NtCurrentTeb()->Reserved1[11]
                                                                            + 40i64) )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v7);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    }
  }
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->mValue.IValue = 0;
  v6 = result;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->Type = VT_Float;
  `GameDataInfo::getInstance'::`2'::instance.m_ContinueBous = IValue;
  return v6;
}

Scaleform::GFx::Value *__fastcall extension::GFn_SetControllerSetting(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  GfxManager *v6; // rax
  GfxManager *v8; // [rsp+40h] [rbp+8h]

  v6 = GfxManager::instance;
  if ( !GfxManager::instance )
  {
    v8 = (GfxManager *)operator new(0x108ui64);
    GfxManager::GfxManager(v8);
    GfxManager::instance = v6;
  }
  GfxManager::GFn_SetControllerSetting(v6, argv, (unsigned int)argv);
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_None;
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_SetDefaultDisplayOption(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  GfxManager *v5; // rax
  GfxManager *v7; // [rsp+40h] [rbp+8h]

  if ( !GfxManager::instance )
  {
    v7 = (GfxManager *)operator new(0x108ui64);
    GfxManager::GfxManager(v7);
    GfxManager::instance = v5;
  }
  SaveRecord_DisplayOption::setDefaultOption((SaveRecord_DisplayOption *)(*(_QWORD *)&AppMain::pApp + 2197432i64));
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_None;
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_SetDefaultGameOption(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  GfxManager *v5; // rax
  __int64 v6; // rax
  GfxManager *v8; // [rsp+40h] [rbp+8h]

  if ( !GfxManager::instance )
  {
    v8 = (GfxManager *)operator new(0x108ui64);
    GfxManager::GfxManager(v8);
    GfxManager::instance = v5;
  }
  v6 = *(_QWORD *)&AppMain::pApp;
  *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2197392i64) = 2;
  *(_DWORD *)(v6 + 2197396) = 2;
  *(_DWORD *)(v6 + 2197400) = 1;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_None;
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_SetDefaultGraphicsOption(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  GfxManager *v5; // rax
  __int64 v6; // rax
  GfxManager *v8; // [rsp+40h] [rbp+8h]

  if ( !GfxManager::instance )
  {
    v8 = (GfxManager *)operator new(0x108ui64);
    GfxManager::GfxManager(v8);
    GfxManager::instance = v5;
  }
  v6 = *(_QWORD *)&AppMain::pApp;
  *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2197488i64) = 16843009;
  *(_DWORD *)(v6 + 2197492) = 16842753;
  *(_BYTE *)(v6 + 2197496) = 0;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_None;
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_SetDefaultSoundOption(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  GfxManager *v5; // rax
  _DWORD *v6; // rax
  GfxManager *v8; // [rsp+40h] [rbp+8h]

  if ( !GfxManager::instance )
  {
    v8 = (GfxManager *)operator new(0x108ui64);
    GfxManager::GfxManager(v8);
    GfxManager::instance = v5;
  }
  v6 = *(_DWORD **)&AppMain::pApp;
  *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2197404i64) = 70;
  v6[549352] = 100;
  v6[549353] = 100;
  v6[549354] = 100;
  v6[549355] = 100;
  v6[549356] = 100;
  v6[549357] = 100;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_None;
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_SetDefaultSystemOption(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  GfxManager *v5; // rax
  __int64 v6; // rcx
  GfxManager *v8; // [rsp+40h] [rbp+8h]

  if ( !GfxManager::instance )
  {
    v8 = (GfxManager *)operator new(0x108ui64);
    GfxManager::GfxManager(v8);
    GfxManager::instance = v5;
  }
  v6 = *(_QWORD *)&AppMain::pApp;
  *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2197384i64) = s_defaultLanguage;
  *(_WORD *)(v6 + 2197388) = 257;
  *(_BYTE *)(v6 + 2197390) = 0;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_None;
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_SetDisplayOption(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  GfxManager *v7; // rax
  GfxManager *v9; // [rsp+40h] [rbp+8h]

  if ( !GfxManager::instance )
  {
    v9 = (GfxManager *)operator new(0x108ui64);
    GfxManager::GfxManager(v9);
    GfxManager::instance = v7;
  }
  GfxManager::GFn_SetDisplayOption((GfxManager *)result, argv, argc);
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_None;
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_SetEnableInputSpecPerController(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  GfxManager *v5; // rax
  extension::gfxi_detail::MovieProxy *m_ptr; // rcx
  GfxManager *v8; // [rsp+40h] [rbp+8h]
  GfxManager *v9; // [rsp+40h] [rbp+8h]
  GfxManager *v10; // [rsp+40h] [rbp+8h]

  v5 = GfxManager::instance;
  if ( argv->mValue.BValue )
  {
    if ( !GfxManager::instance )
    {
      v8 = (GfxManager *)operator new(0x108ui64);
      GfxManager::GfxManager(v8);
      GfxManager::instance = v5;
    }
    m_ptr = v5->m_GFXMovie.m_movieProxy.m_ptr;
    if ( v5->m_GFXMovie.m_movieProxy.m_ptr )
      LODWORD(m_ptr) = m_ptr->m_operationGenerator.m_multiControllerMode;
    contMode = (int)m_ptr;
    if ( !v5 )
    {
      v9 = (GfxManager *)operator new(0x108ui64);
      GfxManager::GfxManager(v9);
      GfxManager::instance = v5;
    }
    if ( v5->m_GFXMovie.m_movieProxy.m_ptr )
      v5->m_GFXMovie.m_movieProxy.m_ptr->m_operationGenerator.m_multiControllerMode = ByController;
  }
  else
  {
    if ( !GfxManager::instance )
    {
      v10 = (GfxManager *)operator new(0x108ui64);
      GfxManager::GfxManager(v10);
      GfxManager::instance = v5;
    }
    if ( v5->m_GFXMovie.m_movieProxy.m_ptr )
      v5->m_GFXMovie.m_movieProxy.m_ptr->m_operationGenerator.m_multiControllerMode = contMode;
  }
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_None;
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_SetExchangedUserData(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  const char *pString; // rsi
  const char *v6; // rdi
  extension::GFXIFontManager *v7; // rax
  Scaleform::GFx::Value *v8; // rax

  if ( (argv->Type & 0x40) != 0 )
    pString = *argv->mValue.pStringManaged;
  else
    pString = argv->mValue.pString;
  if ( (argv[1].Type & 0x40) != 0 )
    v6 = *argv[1].mValue.pStringManaged;
  else
    v6 = argv[1].mValue.pString;
  v7 = extension::GFXIFontManager::Instance();
  extension::gfxi_detail::TranslatorImpl::setExchangedUserData(v7->m_translatorImpl.pObject, pString, v6);
  v8 = result;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_Float;
  result->mValue.IValue = 0;
  return v8;
}

Scaleform::GFx::Value *__fastcall extension::GFn_SetFirstNoticeFlag(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  unsigned int UIValue; // er10
  bool BValue; // bl
  __int64 v6; // r11
  unsigned int v7; // er8
  unsigned __int64 v8; // rdx
  Scaleform::GFx::Value *v9; // rax

  UIValue = argv->mValue.UIValue;
  BValue = argv[1].mValue.BValue;
  v6 = *(_QWORD *)&AppMain::pApp;
  v7 = 0x80000000 >> (argv->mValue.BValue & 0x1F);
  v8 = *(_QWORD *)&AppMain::pApp + 4 * ((unsigned __int64)UIValue >> 5);
  if ( BValue )
    *(_DWORD *)(v8 + 2208108) |= v7;
  else
    *(_DWORD *)(v8 + 2208108) &= ~v7;
  if ( UIValue == 2 )
    *(_BYTE *)(v6 + 2202811) = BValue;
  result->pObjectInterface = 0i64;
  result->mValue.IValue = 0;
  v9 = result;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->Type = VT_Float;
  return v9;
}

Scaleform::GFx::Value *__fastcall extension::GFn_SetGameOption(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  GfxManager *v6; // rax
  __int64 v7; // r8
  int IValue; // eax
  int v9; // ecx
  GfxManager *v11; // [rsp+40h] [rbp+8h]

  if ( !GfxManager::instance )
  {
    v11 = (GfxManager *)operator new(0x108ui64);
    GfxManager::GfxManager(v11);
    GfxManager::instance = v6;
  }
  v7 = *(_QWORD *)&AppMain::pApp;
  IValue = argv[1].mValue.IValue;
  v9 = argv[2].mValue.IValue;
  *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2197392i64) = argv->mValue.IValue;
  *(_DWORD *)(v7 + 2197396) = IValue;
  *(_DWORD *)(v7 + 2197400) = v9;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_None;
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_SetGraphicsOption(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  GfxManager *v6; // rax
  _BYTE *v7; // rdi
  int IValue; // ecx
  int v9; // edx
  int v10; // er8
  int v11; // er9
  int v12; // er10
  int v13; // er11
  int v14; // ebx
  GfxManager *v16; // [rsp+40h] [rbp+8h]

  if ( !GfxManager::instance )
  {
    v16 = (GfxManager *)operator new(0x108ui64);
    GfxManager::GfxManager(v16);
    GfxManager::instance = v6;
  }
  v7 = *(_BYTE **)&AppMain::pApp;
  IValue = argv[1].mValue.IValue;
  v9 = argv[2].mValue.IValue;
  v10 = argv[3].mValue.IValue;
  v11 = argv[4].mValue.IValue;
  v12 = argv[5].mValue.IValue;
  v13 = argv[6].mValue.IValue;
  v14 = argv[7].mValue.IValue;
  *(_BYTE *)(*(_QWORD *)&AppMain::pApp + 2197488i64) = argv->mValue.IValue != 0;
  v7[2197489] = IValue != 0;
  v7[2197490] = v9 != 0;
  v7[2197491] = v10 != 0;
  v7[2197492] = v11 != 0;
  v7[2197493] = v12 != 0;
  v7[2197494] = v13 != 0;
  v7[2197495] = v14 != 0;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_None;
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_SetHandicap(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  __int64 IValue; // rdi
  int v6; // esi
  Scaleform::GFx::Value *v7; // rax
  GameDataInfo *v8; // rcx

  IValue = argv->mValue.IValue;
  v6 = argv[1].mValue.IValue;
  if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *(_DWORD *)(*(_QWORD *)NtCurrentTeb()->Reserved1[11]
                                                                            + 40i64) )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v8);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    }
  }
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->mValue.IValue = 0;
  v7 = result;
  `GameDataInfo::getInstance'::`2'::instance.m_HandicapSetting[IValue] = v6;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->Type = VT_Float;
  return v7;
}

Scaleform::GFx::Value *__fastcall extension::GFn_SetHudPosition(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  GfxManager *v6; // rax
  GfxManager *v8; // [rsp+40h] [rbp+8h]

  if ( !GfxManager::instance )
  {
    v8 = (GfxManager *)operator new(0x108ui64);
    GfxManager::GfxManager(v8);
    GfxManager::instance = v6;
  }
  GfxManager::GFn_SetHudPosition((GfxManager *)result, argv, (__int64)argv);
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_None;
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_SetHudPrintStatus(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  GfxManager *v6; // rax
  BattleSystem::BattleController *v7; // rax
  GfxManager *v9; // [rsp+40h] [rbp+8h]
  BattleSystem::BattleController *v10; // [rsp+40h] [rbp+8h]

  if ( !GfxManager::instance )
  {
    v9 = (GfxManager *)operator new(0x108ui64);
    GfxManager::GfxManager(v9);
    GfxManager::instance = v6;
  }
  v7 = BattleSystem::BattleController::instance;
  if ( !BattleSystem::BattleController::instance )
  {
    v10 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v10);
    BattleSystem::BattleController::instance = v7;
  }
  v7->bHudVisible = argv->mValue.IValue != 0;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_None;
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_SetIgnoreInputForNFrames(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  int IValue; // edi
  GfxManager *v6; // rax
  unsigned int v7; // ecx
  GfxManager *v9; // [rsp+40h] [rbp+8h]

  IValue = argv->mValue.IValue;
  v6 = GfxManager::instance;
  if ( !GfxManager::instance )
  {
    v9 = (GfxManager *)operator new(0x108ui64);
    GfxManager::GfxManager(v9);
    GfxManager::instance = v6;
  }
  v7 = extension::gfxi_detail::MovieOperationGenerator::ignoreInputFrames;
  if ( v6->m_GFXMovie.m_movieProxy.m_ptr )
    v7 = IValue;
  extension::gfxi_detail::MovieOperationGenerator::ignoreInputFrames = v7;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_None;
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_SetKeyDataPrint(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  GfxManager *v6; // rax
  bool v7; // di
  BattleSystem::BattleController *v8; // rax
  GfxManager *v10; // [rsp+40h] [rbp+8h]
  BattleSystem::BattleController *v11; // [rsp+40h] [rbp+8h]

  if ( !GfxManager::instance )
  {
    v10 = (GfxManager *)operator new(0x108ui64);
    GfxManager::GfxManager(v10);
    GfxManager::instance = v6;
  }
  v7 = argv->mValue.IValue != 0;
  v8 = BattleSystem::BattleController::instance;
  if ( !BattleSystem::BattleController::instance )
  {
    v11 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v11);
    BattleSystem::BattleController::instance = v8;
  }
  v8->bKeyData = v7;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_None;
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_SetKeyDataStatus(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  GfxManager *v6; // rax
  GfxManager *v8; // [rsp+40h] [rbp+8h]

  if ( !GfxManager::instance )
  {
    v8 = (GfxManager *)operator new(0x108ui64);
    GfxManager::GfxManager(v8);
    GfxManager::instance = v6;
  }
  GfxManager::GFn_SetKeyDataStatus((GfxManager *)result, argv, (unsigned int)argv);
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_None;
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_SetLegacyStick(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  GfxManager *v5; // rax
  GfxManager *v7; // [rsp+70h] [rbp+18h]

  v5 = GfxManager::instance;
  if ( !GfxManager::instance )
  {
    v7 = (GfxManager *)operator new(0x108ui64);
    GfxManager::GfxManager(v7);
    GfxManager::instance = v5;
  }
  GfxManager::GFv_SetSystemMessage(v5, "$LEGACY_CONTROLLER_3", SYSTEM_MESSAGE_OK, 0, 1, "no_title", &pnewText, "size_s");
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_Float;
  result->mValue.IValue = 0;
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_SetMasterVolume(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  GfxManager *v6; // rax
  AppMain *v7; // rcx
  GfxManager *v9; // [rsp+40h] [rbp+8h]

  if ( !GfxManager::instance )
  {
    v9 = (GfxManager *)operator new(0x108ui64);
    GfxManager::GfxManager(v9);
    GfxManager::instance = v6;
  }
  v7 = *(AppMain **)&AppMain::pApp;
  *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2197404i64) = (int)(float)argv->mValue.IValue;
  AppMain::Sound_Volume_Commit(v7);
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_None;
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_SetMenuCursor(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  GfxManager *v6; // rax
  GfxManager *v8; // [rsp+40h] [rbp+8h]

  v6 = GfxManager::instance;
  if ( !GfxManager::instance )
  {
    v8 = (GfxManager *)operator new(0x108ui64);
    GfxManager::GfxManager(v8);
    GfxManager::instance = v6;
  }
  v6->m_MenuCursor[argv->mValue.IValue] = argv[1].mValue.IValue;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_None;
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_SetMenuID(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  GfxManager *v6; // rax
  int IValue; // edi
  GameDataInfo *v8; // rcx
  GfxManager *v10; // [rsp+40h] [rbp+8h]

  if ( !GfxManager::instance )
  {
    v10 = (GfxManager *)operator new(0x108ui64);
    GfxManager::GfxManager(v10);
    GfxManager::instance = v6;
  }
  IValue = argv->mValue.IValue;
  if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *(_DWORD *)(*(_QWORD *)NtCurrentTeb()->Reserved1[11]
                                                                            + 40i64) )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v8);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    }
  }
  `GameDataInfo::getInstance'::`2'::instance.m_MenuID = IValue;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_None;
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_SetMyBustupCharacterNo(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  GfxManager *v6; // rax
  int IValue; // edi
  GameDataInfo *v8; // rcx
  GfxManager *v10; // [rsp+40h] [rbp+8h]

  if ( !GfxManager::instance )
  {
    v10 = (GfxManager *)operator new(0x108ui64);
    GfxManager::GfxManager(v10);
    GfxManager::instance = v6;
  }
  IValue = argv[1].mValue.IValue;
  if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *(_DWORD *)(*(_QWORD *)NtCurrentTeb()->Reserved1[11]
                                                                            + 40i64) )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v8);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    }
  }
  `GameDataInfo::getInstance'::`2'::instance.m_MyBustupCharacterNo = IValue;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_None;
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_SetMyFavoriteSingleNo(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  __int64 v4; // rax
  int IValue; // edx
  Scaleform::GFx::Value *v6; // rax

  v4 = *(_QWORD *)&AppMain::pApp;
  IValue = argv->mValue.IValue;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  *(_DWORD *)(v4 + 2205316) = IValue;
  result->pObjectInterface = 0i64;
  result->mValue.IValue = 0;
  v6 = result;
  result->Type = VT_Float;
  return v6;
}

Scaleform::GFx::Value *__fastcall extension::GFn_SetMyFavoriteStageNo(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  __int64 v4; // rax
  int IValue; // edx
  Scaleform::GFx::Value *v6; // rax

  v4 = *(_QWORD *)&AppMain::pApp;
  IValue = argv->mValue.IValue;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  *(_DWORD *)(v4 + 2205300) = IValue;
  result->pObjectInterface = 0i64;
  result->mValue.IValue = 0;
  v6 = result;
  result->Type = VT_Float;
  return v6;
}

Scaleform::GFx::Value *__fastcall extension::GFn_SetMyFavoriteTeamNo(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  __int64 v4; // rax
  int IValue; // edx
  Scaleform::GFx::Value *v6; // rax

  v4 = *(_QWORD *)&AppMain::pApp;
  IValue = argv->mValue.IValue;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  *(_DWORD *)(v4 + 2205348) = IValue;
  result->pObjectInterface = 0i64;
  result->mValue.IValue = 0;
  v6 = result;
  result->Type = VT_Float;
  return v6;
}

Scaleform::GFx::Value *__fastcall extension::GFn_SetMyProfile(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  int IValue; // eax
  __int64 v5; // rdx

  IValue = argv->mValue.IValue;
  v5 = *(_QWORD *)&AppMain::pApp;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->Type = VT_Float;
  *(_DWORD *)(v5 + 2202800) = IValue;
  *(_DWORD *)(v5 + 2202804) = argv[1].mValue.IValue;
  *(_BYTE *)(v5 + 2202808) = argv[2].mValue.BValue;
  *(_BYTE *)(v5 + 2202809) = argv[3].mValue.BValue;
  *(_BYTE *)(v5 + 2202810) = argv[4].mValue.BValue;
  result->pObjectInterface = 0i64;
  result->mValue.IValue = 0;
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_SetMyRoomName(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  _QWORD *pStringManaged; // rax
  __int64 v6; // r9
  char v7; // cl
  Scaleform::GFx::Value *v8; // rax

  pStringManaged = argv->mValue.pStringManaged;
  if ( (argv->Type & 0x40) != 0 )
    pStringManaged = (_QWORD *)*pStringManaged;
  v6 = *(_QWORD *)&AppMain::pApp - (_QWORD)pStringManaged;
  do
  {
    v7 = *(_BYTE *)pStringManaged;
    *((_BYTE *)pStringManaged + v6 + 2205533) = *(_BYTE *)pStringManaged;
    pStringManaged = (_QWORD *)((char *)pStringManaged + 1);
  }
  while ( v7 );
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->mValue.IValue = 0;
  v8 = result;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->Type = VT_Float;
  return v8;
}

Scaleform::GFx::Value *__fastcall extension::GFn_SetOnlineIDStatus(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        __int64 argc)
{
  GfxManager *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // rax
  GfxManager *v11; // [rsp+40h] [rbp+8h]

  if ( !GfxManager::instance )
  {
    v11 = (GfxManager *)operator new(0x108ui64);
    GfxManager::GfxManager(v11);
    GfxManager::instance = v6;
  }
  v7 = *(_QWORD *)&AppMain::pApp;
  *(_BYTE *)(*(_QWORD *)&AppMain::pApp + 2205592i64) = argv->mValue.BValue;
  v8 = *(_QWORD *)(v7 + 2187872);
  if ( v8 )
  {
    if ( !(**(unsigned __int8 (__fastcall ***)(_QWORD, extension::GFXIMovieContext *, const Scaleform::GFx::Value *, __int64, _DWORD, __int64))v8)(
            *(_QWORD *)(v7 + 2187872),
            ctx,
            argv,
            argc,
            0,
            -2i64) )
    {
      v9 = *(_QWORD *)(v8 + 16);
      if ( v9 )
      {
        *(_DWORD *)(v9 + 2556) = -1110651699;
        *(_BYTE *)(v9 + 2568) = 1;
      }
    }
  }
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_None;
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_SetOnlineTrainingSetting(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  int v5; // edx
  _DWORD *v7; // rsi
  int IValue; // ecx
  int v9; // er9
  int v10; // er10
  int v11; // er8
  __int128 v12; // xmm2
  int v13; // ebp
  __int128 v14; // xmm3
  int v15; // er14
  __int128 v16; // xmm4
  int v17; // er15
  __int128 v18; // xmm5
  int v19; // er12
  int v20; // er13
  Scaleform::GFx::Value *v21; // rax
  GameDataInfo *v22; // rcx
  GameDataInfo *v23; // rcx
  int v24; // [rsp+20h] [rbp-108h]
  int v25; // [rsp+24h] [rbp-104h]
  __int128 v26; // [rsp+28h] [rbp-100h]
  __int128 v27; // [rsp+38h] [rbp-F0h]
  __int128 v28; // [rsp+48h] [rbp-E0h]
  __int128 v29; // [rsp+58h] [rbp-D0h]
  __int128 v30; // [rsp+70h] [rbp-B8h]
  __int128 v31; // [rsp+80h] [rbp-A8h]
  __int128 v32; // [rsp+90h] [rbp-98h]
  __int128 v33; // [rsp+A0h] [rbp-88h]
  int v34; // [rsp+130h] [rbp+8h]
  int v35; // [rsp+140h] [rbp+18h]

  v5 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
  v7 = (_DWORD *)(*(_QWORD *)NtCurrentTeb()->Reserved1[11] + 40i64);
  if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *v7 )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    v5 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v22);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      v5 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
    }
  }
  IValue = argv[5].mValue.IValue;
  v9 = argv[6].mValue.IValue;
  v10 = argv[7].mValue.IValue;
  v11 = argv[8].mValue.IValue;
  v12 = *(_OWORD *)&`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_bRestartOn;
  v13 = argv->mValue.IValue;
  v14 = *(_OWORD *)&`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iPlaySlot[0][0];
  v15 = argv[1].mValue.IValue;
  v16 = *(_OWORD *)&`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iPlaySlot[0][4];
  v17 = argv[2].mValue.IValue;
  v18 = *(_OWORD *)&`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iPlaySlot[1][2];
  v19 = argv[3].mValue.IValue;
  v20 = argv[4].mValue.IValue;
  *(_QWORD *)&v31 = *(_QWORD *)&`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iAttack;
  DWORD2(v31) = argv[9].mValue.IValue;
  v30 = *(_OWORD *)&`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iRestart;
  *(_QWORD *)&v33 = __PAIR64__(v9, IValue);
  *(_QWORD *)&v32 = __PAIR64__(v17, v15);
  *((_QWORD *)&v32 + 1) = __PAIR64__(v20, v19);
  *((_QWORD *)&v33 + 1) = __PAIR64__(v11, v10);
  v26 = *(_OWORD *)&`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_bRestartOn;
  LODWORD(v30) = v13;
  v27 = *(_OWORD *)&`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iPlaySlot[0][0];
  v34 = IValue;
  v28 = *(_OWORD *)&`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iPlaySlot[0][4];
  v24 = v9;
  v29 = *(_OWORD *)&`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iPlaySlot[1][2];
  v25 = v10;
  v35 = v11;
  HIDWORD(v31) = argv[10].mValue.IValue;
  if ( v5 > *v7 )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v23);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    }
    v10 = v25;
    v9 = v24;
    v11 = v35;
    IValue = v34;
    v18 = v29;
    v16 = v28;
    v14 = v27;
    v12 = v26;
  }
  if ( `GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iRestart != v13
    || `GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iPowerGauge[0] != v15
    || `GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iPowerGauge[1] != v17
    || `GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iMAXModeGauge[0] != v19
    || `GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iMAXModeGauge[1] != v20
    || `GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iGuardGauge[0] != IValue
    || `GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iGuardGauge[1] != v9
    || `GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iStun[0] != v10
    || `GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iStun[1] != v11 )
  {
    `GameDataInfo::getInstance'::`2'::instance.m_TrainingSettingUpdate = 1;
  }
  *(_OWORD *)&`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iRestart = v30;
  result->pObjectInterface = 0i64;
  *(_OWORD *)&`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iAttack = v31;
  result->mValue.IValue = 0;
  v21 = result;
  *(_OWORD *)`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iPowerGauge = v32;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  *(_OWORD *)`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iGuardGauge = v33;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  *(_OWORD *)&`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_bRestartOn = v12;
  result->Type = VT_Float;
  *(_OWORD *)&`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iPlaySlot[0][0] = v14;
  *(_OWORD *)&`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iPlaySlot[0][4] = v16;
  *(_OWORD *)&`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iPlaySlot[1][2] = v18;
  return v21;
}

Scaleform::GFx::Value *__fastcall extension::GFn_SetOnlineTrainingSettingDefault(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  _DWORD *v5; // rdi
  __m128i si128; // xmm0
  Scaleform::GFx::Value *v7; // rax
  GameDataInfo *v8; // rcx
  int v9; // eax
  GameDataInfo *v10; // rcx

  v5 = (_DWORD *)(*(_QWORD *)NtCurrentTeb()->Reserved1[11] + 40i64);
  if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *v5 )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    v9 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v8);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      v9 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
    }
    if ( v9 > *v5 )
    {
      Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
      {
        GameDataInfo::GameDataInfo(v10);
        Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      }
    }
  }
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->mValue.IValue = 0;
  *(_OWORD *)&`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iGuard = 0i64;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  *(_QWORD *)&`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iRecordMode = 0i64;
  *(_OWORD *)&`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iPlaySlot[0][2] = 0ui64;
  *(_OWORD *)&`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iPlaySlot[1][2] = 0ui64;
  `GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_bRestartOn = 0;
  v7 = result;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->Type = VT_Float;
  *(__m128i *)`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iMAXModeGauge = si128;
  `GameDataInfo::getInstance'::`2'::instance.m_TrainingSettingUpdate = 1;
  `GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iRestart = CENTER;
  `GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iAction = PLAYER;
  *(_OWORD *)&`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iKeyData = 0i64;
  `GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iStun[0] = 100;
  `GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iStun[1] = 100;
  `GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iRecordSlot = SLOT_1;
  `GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iPlaySlot[0][1] = 1;
  `GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iPlaySlot[1][1] = 1;
  return v7;
}

Scaleform::GFx::Value *__fastcall extension::GFn_SetOperationMapper(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  GfxManager *v5; // rax
  GfxManager *v7; // [rsp+40h] [rbp+8h]

  if ( !GfxManager::instance )
  {
    v7 = (GfxManager *)operator new(0x108ui64);
    GfxManager::GfxManager(v7);
    GfxManager::instance = v5;
  }
  GfxManager::GFn_SetOperationMapper((GfxManager *)result, (const Scaleform::GFx::Value *)ctx, (unsigned int)argv);
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_None;
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_SetPadVolume(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  GfxManager *v6; // rax
  AppMain *v7; // rcx
  GfxManager *v9; // [rsp+40h] [rbp+8h]

  if ( !GfxManager::instance )
  {
    v9 = (GfxManager *)operator new(0x108ui64);
    GfxManager::GfxManager(v9);
    GfxManager::instance = v6;
  }
  v7 = *(AppMain **)&AppMain::pApp;
  *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2197428i64) = (int)(float)argv->mValue.IValue;
  AppMain::Sound_Volume_Commit(v7);
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_None;
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_SetPlayerMuteFlag(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  __int64 IValue; // rax

  IValue = (unsigned __int8)argv->mValue.IValue;
  g_NetworkManager.gamedata.playerDataSub[IValue].chatOffFlag = argv[1].mValue.BValue;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_Float;
  result->mValue.IValue = 0;
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_SetReplayAutoSave(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  GfxManager *v6; // rax
  GfxManager *v8; // [rsp+40h] [rbp+8h]

  if ( !GfxManager::instance )
  {
    v8 = (GfxManager *)operator new(0x108ui64);
    GfxManager::GfxManager(v8);
    GfxManager::instance = v6;
  }
  *(_BYTE *)(*(_QWORD *)&AppMain::pApp + 2197389i64) = argv->mValue.BValue;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_None;
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_SetReplayLockFlag(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  GfxManager *v6; // rax
  GfxManager *v8; // [rsp+40h] [rbp+8h]

  if ( !GfxManager::instance )
  {
    v8 = (GfxManager *)operator new(0x108ui64);
    GfxManager::GfxManager(v8);
    GfxManager::instance = v6;
  }
  *(_BYTE *)(1184i64 * argv->mValue.IValue + *(_QWORD *)&AppMain::pApp + 2389336) = argv[1].mValue.BValue;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_None;
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_SetReplayOpenFlag(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  GfxManager *v6; // rax
  GfxManager *v8; // [rsp+40h] [rbp+8h]

  if ( !GfxManager::instance )
  {
    v8 = (GfxManager *)operator new(0x108ui64);
    GfxManager::GfxManager(v8);
    GfxManager::instance = v6;
  }
  *(_BYTE *)(1184i64 * argv->mValue.IValue + *(_QWORD *)&AppMain::pApp + 2389338) = argv[1].mValue.IValue != 0;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_None;
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_SetResultTransitionMenu(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  __int64 v4; // rax
  __int64 IValue; // r9
  int v6; // edx
  Scaleform::GFx::Value *v7; // rax

  v4 = *(_QWORD *)&AppMain::pApp;
  IValue = argv->mValue.IValue;
  v6 = argv[1].mValue.IValue;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  *(_DWORD *)(v4 + 4 * IValue + 11100) = v6;
  result->pObjectInterface = 0i64;
  result->mValue.IValue = 0;
  v7 = result;
  result->Type = VT_Float;
  return v7;
}

Scaleform::GFx::Value *__fastcall extension::GFn_SetRoomSettingFreeParty(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  __int64 v5; // r9
  char *pString; // rcx
  __int64 IValue; // rbx
  __int64 v8; // rdx
  __int64 v9; // rdi
  __int64 v10; // rsi
  int v11; // er11
  int v12; // ebp
  int v13; // er14
  int v14; // er15
  char v15; // al
  Scaleform::GFx::Value *v16; // rax
  __int64 v17; // rcx
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  int v26[4]; // [rsp+0h] [rbp-48h]
  __m128i si128; // [rsp+10h] [rbp-38h]

  v5 = *(_QWORD *)&AppMain::pApp;
  if ( (argv->Type & 0x40) != 0 )
    pString = (char *)*argv->mValue.pStringManaged;
  else
    pString = (char *)argv->mValue.pString;
  IValue = argv[1].mValue.IValue;
  v8 = *(_QWORD *)&AppMain::pApp - (_QWORD)pString;
  v9 = argv[2].mValue.IValue;
  v10 = argv[3].mValue.IValue;
  v11 = argv[4].mValue.IValue;
  v12 = argv[5].mValue.IValue;
  v13 = argv[7].mValue.IValue;
  v14 = argv[8].mValue.IValue;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v26[0] = 0;
  v26[1] = 4;
  v26[2] = 5;
  do
  {
    v15 = *pString;
    pString[v8 + 2192536] = *pString;
    ++pString;
  }
  while ( v15 );
  *(_DWORD *)(v5 + 2192668) = v26[IValue];
  *(_DWORD *)(v5 + 2192676) = si128.m128i_i32[v9];
  *(NETWORK_ANTENNA_SELECT_UI *)(v5 + 2192516) = extension::antenna_tbl[v10];
  *(_DWORD *)(v5 + 2192680) = v13;
  *(_DWORD *)(v5 + 2192684) = v14;
  *(_DWORD *)(v5 + 2192520) = (v11 != 0) - 1;
  *(_BYTE *)(v5 + 37091) = 1;
  *(_DWORD *)(v5 + 2192524) = v12 != 0;
  v16 = result;
  v17 = *(_QWORD *)(v5 + 2192676);
  v18 = *(_OWORD *)(v5 + 2192532);
  *(_OWORD *)(v5 + 2192688) = *(_OWORD *)(v5 + 2192516);
  v19 = *(_OWORD *)(v5 + 2192548);
  *(_OWORD *)(v5 + 2192704) = v18;
  v20 = *(_OWORD *)(v5 + 2192564);
  *(_OWORD *)(v5 + 2192720) = v19;
  v21 = *(_OWORD *)(v5 + 2192580);
  *(_OWORD *)(v5 + 2192736) = v20;
  v22 = *(_OWORD *)(v5 + 2192596);
  *(_OWORD *)(v5 + 2192752) = v21;
  v23 = *(_OWORD *)(v5 + 2192612);
  *(_OWORD *)(v5 + 2192768) = v22;
  v24 = *(_OWORD *)(v5 + 2192644);
  *(_OWORD *)(v5 + 2192784) = v23;
  *(_OWORD *)(v5 + 2192800) = *(_OWORD *)(v5 + 2192628);
  v25 = *(_OWORD *)(v5 + 2192660);
  *(_OWORD *)(v5 + 2192816) = v24;
  *(_OWORD *)(v5 + 2192832) = v25;
  *(_QWORD *)(v5 + 2192848) = v17;
  *(_DWORD *)(v5 + 2192856) = *(_DWORD *)(v5 + 2192684);
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_Float;
  result->mValue.IValue = 0;
  return v16;
}

Scaleform::GFx::Value *__fastcall extension::GFn_SetRoomSettingFreeSingle(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  __int64 v5; // r9
  char *pString; // rcx
  __int64 IValue; // rbx
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rbp
  int v12; // er11
  int v13; // er14
  int v14; // er15
  int v15; // er12
  char v16; // al
  Scaleform::GFx::Value *v17; // rax
  __int64 v18; // rcx
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  int v27[4]; // [rsp+0h] [rbp-68h]
  __m128i si128; // [rsp+10h] [rbp-58h]
  __m128i v29; // [rsp+20h] [rbp-48h]

  v5 = *(_QWORD *)&AppMain::pApp;
  if ( (argv->Type & 0x40) != 0 )
    pString = (char *)*argv->mValue.pStringManaged;
  else
    pString = (char *)argv->mValue.pString;
  IValue = argv[1].mValue.IValue;
  v8 = argv[2].mValue.IValue;
  v9 = *(_QWORD *)&AppMain::pApp - (_QWORD)pString;
  v10 = argv[3].mValue.IValue;
  v11 = argv[4].mValue.IValue;
  v12 = argv[5].mValue.IValue;
  v13 = argv[6].mValue.IValue;
  v14 = argv[8].mValue.IValue;
  v15 = argv[9].mValue.IValue;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v27[0] = 1;
  v29 = si128;
  v27[1] = 2;
  v27[2] = 3;
  do
  {
    v16 = *pString;
    pString[v9 + 2192536] = *pString;
    ++pString;
  }
  while ( v16 );
  *(_DWORD *)(v5 + 2192668) = si128.m128i_i32[IValue];
  *(_DWORD *)(v5 + 2192672) = v27[v8];
  *(_DWORD *)(v5 + 2192676) = v29.m128i_i32[v10];
  *(NETWORK_ANTENNA_SELECT_UI *)(v5 + 2192516) = extension::antenna_tbl[v11];
  *(_DWORD *)(v5 + 2192680) = v14;
  *(_DWORD *)(v5 + 2192684) = v15;
  *(_DWORD *)(v5 + 2192520) = (v12 != 0) - 1;
  *(_BYTE *)(v5 + 37091) = 1;
  *(_DWORD *)(v5 + 2192524) = v13 != 0;
  v17 = result;
  v18 = *(_QWORD *)(v5 + 2192676);
  v19 = *(_OWORD *)(v5 + 2192532);
  *(_OWORD *)(v5 + 2192688) = *(_OWORD *)(v5 + 2192516);
  v20 = *(_OWORD *)(v5 + 2192548);
  *(_OWORD *)(v5 + 2192704) = v19;
  v21 = *(_OWORD *)(v5 + 2192564);
  *(_OWORD *)(v5 + 2192720) = v20;
  v22 = *(_OWORD *)(v5 + 2192580);
  *(_OWORD *)(v5 + 2192736) = v21;
  v23 = *(_OWORD *)(v5 + 2192596);
  *(_OWORD *)(v5 + 2192752) = v22;
  v24 = *(_OWORD *)(v5 + 2192612);
  *(_OWORD *)(v5 + 2192768) = v23;
  v25 = *(_OWORD *)(v5 + 2192644);
  *(_OWORD *)(v5 + 2192784) = v24;
  *(_OWORD *)(v5 + 2192800) = *(_OWORD *)(v5 + 2192628);
  v26 = *(_OWORD *)(v5 + 2192660);
  *(_OWORD *)(v5 + 2192816) = v25;
  *(_OWORD *)(v5 + 2192832) = v26;
  *(_QWORD *)(v5 + 2192848) = v18;
  *(_DWORD *)(v5 + 2192856) = *(_DWORD *)(v5 + 2192684);
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_Float;
  result->mValue.IValue = 0;
  return v17;
}

Scaleform::GFx::Value *__fastcall extension::GFn_SetRoomSettingFreeTeam(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  __int64 v5; // r9
  char *pString; // rcx
  __int64 IValue; // rbx
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rsi
  int v11; // er11
  int v12; // ebp
  int v13; // er14
  int v14; // er15
  char v15; // al
  Scaleform::GFx::Value *v16; // rax
  __int64 v17; // rcx
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __m128i si128; // [rsp+0h] [rbp-48h]
  __m128i v27; // [rsp+10h] [rbp-38h]

  v5 = *(_QWORD *)&AppMain::pApp;
  if ( (argv->Type & 0x40) != 0 )
    pString = (char *)*argv->mValue.pStringManaged;
  else
    pString = (char *)argv->mValue.pString;
  IValue = argv[1].mValue.IValue;
  v8 = argv[2].mValue.IValue;
  v9 = *(_QWORD *)&AppMain::pApp - (_QWORD)pString;
  v10 = argv[3].mValue.IValue;
  v11 = argv[4].mValue.IValue;
  v12 = argv[5].mValue.IValue;
  v13 = argv[7].mValue.IValue;
  v14 = argv[8].mValue.IValue;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v27 = si128;
  do
  {
    v15 = *pString;
    pString[v9 + 2192536] = *pString;
    ++pString;
  }
  while ( v15 );
  *(_DWORD *)(v5 + 2192668) = si128.m128i_i32[IValue];
  *(_DWORD *)(v5 + 2192676) = v27.m128i_i32[v8];
  *(NETWORK_ANTENNA_SELECT_UI *)(v5 + 2192516) = extension::antenna_tbl[v10];
  *(_DWORD *)(v5 + 2192680) = v13;
  *(_DWORD *)(v5 + 2192684) = v14;
  *(_DWORD *)(v5 + 2192520) = (v11 != 0) - 1;
  *(_BYTE *)(v5 + 37091) = 1;
  *(_DWORD *)(v5 + 2192524) = v12 != 0;
  v16 = result;
  v17 = *(_QWORD *)(v5 + 2192676);
  v18 = *(_OWORD *)(v5 + 2192532);
  *(_OWORD *)(v5 + 2192688) = *(_OWORD *)(v5 + 2192516);
  v19 = *(_OWORD *)(v5 + 2192548);
  *(_OWORD *)(v5 + 2192704) = v18;
  v20 = *(_OWORD *)(v5 + 2192564);
  *(_OWORD *)(v5 + 2192720) = v19;
  v21 = *(_OWORD *)(v5 + 2192580);
  *(_OWORD *)(v5 + 2192736) = v20;
  v22 = *(_OWORD *)(v5 + 2192596);
  *(_OWORD *)(v5 + 2192752) = v21;
  v23 = *(_OWORD *)(v5 + 2192612);
  *(_OWORD *)(v5 + 2192768) = v22;
  v24 = *(_OWORD *)(v5 + 2192644);
  *(_OWORD *)(v5 + 2192784) = v23;
  *(_OWORD *)(v5 + 2192800) = *(_OWORD *)(v5 + 2192628);
  v25 = *(_OWORD *)(v5 + 2192660);
  *(_OWORD *)(v5 + 2192816) = v24;
  *(_OWORD *)(v5 + 2192832) = v25;
  *(_QWORD *)(v5 + 2192848) = v17;
  *(_DWORD *)(v5 + 2192856) = *(_DWORD *)(v5 + 2192684);
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_Float;
  result->mValue.IValue = 0;
  return v16;
}

Scaleform::GFx::Value *__fastcall extension::GFn_SetRoomSettingRank(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  int IValue; // er9
  bool v6; // cf
  int v7; // er10
  NETWORK_ANTENNA_SELECT_UI v8; // eax
  int v9; // edi
  __int64 v10; // r11
  __int64 v11; // r8
  __int64 v12; // rax
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  Scaleform::GFx::Value *v21; // rax
  GameDataInfo *v22; // rcx

  IValue = argv[3].mValue.IValue;
  v6 = argv[2].mValue.IValue != 0;
  v7 = argv->mValue.IValue;
  v8 = extension::antenna_tbl[argv[1].mValue.IValue];
  v9 = argv[5].mValue.IValue;
  v10 = *(_QWORD *)&AppMain::pApp;
  v11 = *(_QWORD *)&AppMain::pApp + 2192516i64;
  *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2192516i64) = v8;
  *(_DWORD *)(v10 + 2192532) = v7;
  *(_DWORD *)(v10 + 2192520) = v6 - 1;
  *(_BYTE *)(v10 + 37091) = 1;
  *(_DWORD *)(v10 + 2192524) = IValue != 0;
  v10 += 2192688i64;
  v12 = *(_QWORD *)(v11 + 160);
  v13 = *(_OWORD *)(v11 + 16);
  *(_OWORD *)v10 = *(_OWORD *)v11;
  v14 = *(_OWORD *)(v11 + 32);
  *(_OWORD *)(v10 + 16) = v13;
  v15 = *(_OWORD *)(v11 + 48);
  *(_OWORD *)(v10 + 32) = v14;
  v16 = *(_OWORD *)(v11 + 64);
  *(_OWORD *)(v10 + 48) = v15;
  v17 = *(_OWORD *)(v11 + 80);
  *(_OWORD *)(v10 + 64) = v16;
  v18 = *(_OWORD *)(v11 + 96);
  *(_OWORD *)(v10 + 80) = v17;
  v19 = *(_OWORD *)(v11 + 128);
  *(_OWORD *)(v10 + 96) = v18;
  *(_OWORD *)(v10 + 112) = *(_OWORD *)(v11 + 112);
  v20 = *(_OWORD *)(v11 + 144);
  *(_OWORD *)(v10 + 128) = v19;
  *(_OWORD *)(v10 + 144) = v20;
  *(_QWORD *)(v10 + 160) = v12;
  *(_DWORD *)(v10 + 168) = *(_DWORD *)(v11 + 168);
  if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *(_DWORD *)(*(_QWORD *)NtCurrentTeb()->Reserved1[11]
                                                                            + 40i64) )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v22);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    }
  }
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  v21 = result;
  result->pObjectInterface = 0i64;
  `GameDataInfo::getInstance'::`2'::instance.m_TrainingEntry = v9 == 0;
  result->Type = VT_Float;
  result->mValue.IValue = 0;
  return v21;
}

Scaleform::GFx::Value *__fastcall extension::GFn_SetRoomSettingTraining(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  __int64 v5; // r9
  _QWORD *pStringManaged; // rax
  __int64 IValue; // rbx
  int v8; // edi
  __int64 v9; // rdx
  int v10; // er11
  char v11; // cl
  NETWORK_ANTENNA_SELECT_UI v12; // ecx
  BOOL v13; // eax
  Scaleform::GFx::Value *v14; // rax

  v5 = *(_QWORD *)&AppMain::pApp;
  pStringManaged = argv->mValue.pStringManaged;
  if ( (argv->Type & 0x40) != 0 )
    pStringManaged = (_QWORD *)*pStringManaged;
  IValue = argv[1].mValue.IValue;
  v8 = argv[2].mValue.IValue;
  v9 = *(_QWORD *)&AppMain::pApp - (_QWORD)pStringManaged;
  v10 = argv[4].mValue.IValue;
  do
  {
    v11 = *(_BYTE *)pStringManaged;
    *((_BYTE *)pStringManaged + v9 + 2192536) = *(_BYTE *)pStringManaged;
    pStringManaged = (_QWORD *)((char *)pStringManaged + 1);
  }
  while ( v11 );
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  v12 = extension::antenna_tbl[IValue];
  v13 = v8 != 0;
  *(_DWORD *)(v5 + 2192524) = v13;
  *(_DWORD *)(v5 + 2192696) = v13;
  v14 = result;
  *(_DWORD *)(v5 + 2192516) = v12;
  *(_DWORD *)(v5 + 2192680) = 2;
  *(_DWORD *)(v5 + 2192684) = v10;
  *(_BYTE *)(v5 + 37091) = 1;
  *(_DWORD *)(v5 + 2192688) = v12;
  *(_DWORD *)(v5 + 2192856) = v10;
  result->Type = VT_Float;
  result->mValue.IValue = 0;
  return v14;
}

Scaleform::GFx::Value *__fastcall extension::GFn_SetSEVolume(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  GfxManager *v6; // rax
  AppMain *v7; // rcx
  float IValue; // xmm0_4
  GfxManager *v10; // [rsp+40h] [rbp+8h]

  if ( !GfxManager::instance )
  {
    v10 = (GfxManager *)operator new(0x108ui64);
    GfxManager::GfxManager(v10);
    GfxManager::instance = v6;
  }
  v7 = *(AppMain **)&AppMain::pApp;
  IValue = (float)argv->mValue.IValue;
  *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2197412i64) = (int)IValue;
  v7->SaveDataMain.SoundOptionData.iSoundVolumeAmbience = (int)IValue;
  AppMain::Sound_Volume_Commit(v7);
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_None;
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_SetSearchSettingFreeParty(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  __int64 IValue; // rax
  __int64 v5; // rdx
  int v6; // er10
  bool v7; // cf
  int v8; // er11
  __int64 v9; // rbx
  __m128i si128; // xmm0
  _OWORD *v11; // r8
  Scaleform::GFx::Value *v12; // rax
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __m128i v21; // [rsp+0h] [rbp-28h]
  int v22; // [rsp+10h] [rbp-18h]

  IValue = argv->mValue.IValue;
  v5 = argv[1].mValue.IValue;
  v6 = argv[3].mValue.IValue;
  v7 = argv[2].mValue.IValue != 0;
  v8 = argv[4].mValue.IValue;
  v9 = *(_QWORD *)&AppMain::pApp;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v11 = (_OWORD *)(*(_QWORD *)&AppMain::pApp + 2192872i64);
  *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2192872i64) = 2;
  v21 = si128;
  v22 = 3;
  *(_DWORD *)(v9 + 2193028) = v21.m128i_i32[IValue];
  *(NETWORK_ANTENNA_SELECT_UI *)(v9 + 2192880) = extension::antenna_tbl[v5];
  *(_DWORD *)(v9 + 2192876) = v8;
  *(_BYTE *)(v9 + 2193192) = 1;
  *(_DWORD *)(v9 + 2192884) = v7 - 1;
  *(_DWORD *)(v9 + 2192888) = v6 != 0;
  v12 = result;
  v13 = v11[1];
  *(_OWORD *)(v9 + 2193032) = *v11;
  v14 = v11[2];
  *(_OWORD *)(v9 + 2193048) = v13;
  v15 = v11[3];
  *(_OWORD *)(v9 + 2193064) = v14;
  v16 = v11[4];
  *(_OWORD *)(v9 + 2193080) = v15;
  v17 = v11[5];
  *(_OWORD *)(v9 + 2193096) = v16;
  v18 = v11[6];
  *(_OWORD *)(v9 + 2193112) = v17;
  v19 = v11[8];
  *(_OWORD *)(v9 + 2193128) = v18;
  *(_OWORD *)(v9 + 2193144) = v11[7];
  v20 = v11[9];
  *(_OWORD *)(v9 + 2193160) = v19;
  *(_OWORD *)(v9 + 2193176) = v20;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_Float;
  result->mValue.IValue = 0;
  return v12;
}

Scaleform::GFx::Value *__fastcall extension::GFn_SetSearchSettingFreeSingle(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  __int64 IValue; // rax
  __int64 v5; // rdx
  __int64 v6; // r9
  int v7; // er11
  bool v8; // cf
  int v9; // er8
  __int64 v10; // rbx
  __m128i si128; // xmm0
  _OWORD *v12; // rdi
  Scaleform::GFx::Value *v13; // rax
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __m128i v22; // [rsp+0h] [rbp-38h]
  int v23; // [rsp+10h] [rbp-28h]
  __m128i v24; // [rsp+18h] [rbp-20h]

  IValue = argv->mValue.IValue;
  v5 = argv[1].mValue.IValue;
  v6 = argv[2].mValue.IValue;
  v7 = argv[4].mValue.IValue;
  v8 = argv[3].mValue.IValue != 0;
  v9 = argv[5].mValue.IValue;
  v10 = *(_QWORD *)&AppMain::pApp;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v12 = (_OWORD *)(*(_QWORD *)&AppMain::pApp + 2192872i64);
  *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2192872i64) = 0;
  v22 = si128;
  v23 = 3;
  v24 = _mm_load_si128((const __m128i *)&_xmm);
  *(_DWORD *)(v10 + 2193024) = v24.m128i_i32[IValue];
  *(_DWORD *)(v10 + 2193028) = v22.m128i_i32[v5];
  *(NETWORK_ANTENNA_SELECT_UI *)(v10 + 2192880) = extension::antenna_tbl[v6];
  *(_DWORD *)(v10 + 2192876) = v9;
  *(_BYTE *)(v10 + 2193192) = 1;
  *(_DWORD *)(v10 + 2192884) = v8 - 1;
  *(_DWORD *)(v10 + 2192888) = v7 != 0;
  v13 = result;
  v14 = v12[1];
  *(_OWORD *)(v10 + 2193032) = *v12;
  v15 = v12[2];
  *(_OWORD *)(v10 + 2193048) = v14;
  v16 = v12[3];
  *(_OWORD *)(v10 + 2193064) = v15;
  v17 = v12[4];
  *(_OWORD *)(v10 + 2193080) = v16;
  v18 = v12[5];
  *(_OWORD *)(v10 + 2193096) = v17;
  v19 = v12[6];
  *(_OWORD *)(v10 + 2193112) = v18;
  v20 = v12[8];
  *(_OWORD *)(v10 + 2193128) = v19;
  *(_OWORD *)(v10 + 2193144) = v12[7];
  v21 = v12[9];
  *(_OWORD *)(v10 + 2193160) = v20;
  *(_OWORD *)(v10 + 2193176) = v21;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_Float;
  result->mValue.IValue = 0;
  return v13;
}

Scaleform::GFx::Value *__fastcall extension::GFn_SetSearchSettingFreeTeam(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  __int64 IValue; // rax
  __int64 v5; // rdx
  int v6; // er10
  bool v7; // cf
  int v8; // er11
  __int64 v9; // rbx
  __m128i si128; // xmm0
  _OWORD *v11; // r8
  Scaleform::GFx::Value *v12; // rax
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __m128i v21; // [rsp+0h] [rbp-28h]
  int v22; // [rsp+10h] [rbp-18h]

  IValue = argv->mValue.IValue;
  v5 = argv[1].mValue.IValue;
  v6 = argv[3].mValue.IValue;
  v7 = argv[2].mValue.IValue != 0;
  v8 = argv[4].mValue.IValue;
  v9 = *(_QWORD *)&AppMain::pApp;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v11 = (_OWORD *)(*(_QWORD *)&AppMain::pApp + 2192872i64);
  *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2192872i64) = 1;
  v21 = si128;
  v22 = 3;
  *(_DWORD *)(v9 + 2193028) = v21.m128i_i32[IValue];
  *(NETWORK_ANTENNA_SELECT_UI *)(v9 + 2192880) = extension::antenna_tbl[v5];
  *(_DWORD *)(v9 + 2192876) = v8;
  *(_BYTE *)(v9 + 2193192) = 1;
  *(_DWORD *)(v9 + 2192884) = v7 - 1;
  *(_DWORD *)(v9 + 2192888) = v6 != 0;
  v12 = result;
  v13 = v11[1];
  *(_OWORD *)(v9 + 2193032) = *v11;
  v14 = v11[2];
  *(_OWORD *)(v9 + 2193048) = v13;
  v15 = v11[3];
  *(_OWORD *)(v9 + 2193064) = v14;
  v16 = v11[4];
  *(_OWORD *)(v9 + 2193080) = v15;
  v17 = v11[5];
  *(_OWORD *)(v9 + 2193096) = v16;
  v18 = v11[6];
  *(_OWORD *)(v9 + 2193112) = v17;
  v19 = v11[8];
  *(_OWORD *)(v9 + 2193128) = v18;
  *(_OWORD *)(v9 + 2193144) = v11[7];
  v20 = v11[9];
  *(_OWORD *)(v9 + 2193160) = v19;
  *(_OWORD *)(v9 + 2193176) = v20;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_Float;
  result->mValue.IValue = 0;
  return v12;
}

Scaleform::GFx::Value *__fastcall extension::GFn_SetSearchSettingRank(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  __int64 IValue; // rax
  int v5; // er9
  bool v6; // cf
  int v7; // er11
  int v8; // er10
  __int64 v9; // rbx
  __int64 v10; // r8
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0

  IValue = argv[1].mValue.IValue;
  v5 = argv[3].mValue.IValue;
  v6 = argv[2].mValue.IValue != 0;
  v7 = argv->mValue.IValue;
  v8 = argv[4].mValue.IValue;
  v9 = *(_QWORD *)&AppMain::pApp;
  v10 = *(_QWORD *)&AppMain::pApp + 2192872i64;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  *(_DWORD *)v10 = 1;
  *(NETWORK_ANTENNA_SELECT_UI *)(v9 + 2192880) = extension::antenna_tbl[IValue];
  *(_DWORD *)(v9 + 2192876) = v8;
  *(_DWORD *)(v9 + 2192892) = v7;
  *(_DWORD *)(v9 + 2192884) = v6 - 1;
  *(_BYTE *)(v9 + 2193192) = 1;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_Float;
  *(_DWORD *)(v9 + 2192888) = v5 != 0;
  v11 = *(_OWORD *)v10;
  v12 = *(_OWORD *)(v10 + 16);
  result->mValue.IValue = 0;
  *(_OWORD *)(v9 + 2193032) = v11;
  v13 = *(_OWORD *)(v10 + 32);
  *(_OWORD *)(v9 + 2193048) = v12;
  v14 = *(_OWORD *)(v10 + 48);
  *(_OWORD *)(v9 + 2193064) = v13;
  v15 = *(_OWORD *)(v10 + 64);
  *(_OWORD *)(v9 + 2193080) = v14;
  v16 = *(_OWORD *)(v10 + 80);
  *(_OWORD *)(v9 + 2193096) = v15;
  v17 = *(_OWORD *)(v10 + 96);
  *(_OWORD *)(v9 + 2193112) = v16;
  v18 = *(_OWORD *)(v10 + 128);
  *(_OWORD *)(v9 + 2193128) = v17;
  *(_OWORD *)(v9 + 2193144) = *(_OWORD *)(v10 + 112);
  v19 = *(_OWORD *)(v10 + 144);
  *(_OWORD *)(v9 + 2193160) = v18;
  *(_OWORD *)(v9 + 2193176) = v19;
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_SetSearchSettingTraining(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  __int64 IValue; // rax
  int v5; // er9
  bool v6; // cf
  int v7; // er10
  __int64 v8; // r11
  __int64 v9; // r8
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0

  IValue = argv->mValue.IValue;
  v5 = argv[2].mValue.IValue;
  v6 = argv[1].mValue.IValue != 0;
  v7 = argv[3].mValue.IValue;
  v8 = *(_QWORD *)&AppMain::pApp;
  v9 = *(_QWORD *)&AppMain::pApp + 2192872i64;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  *(_DWORD *)v9 = 3;
  *(NETWORK_ANTENNA_SELECT_UI *)(v8 + 2192880) = extension::antenna_tbl[IValue];
  *(_DWORD *)(v8 + 2192876) = v7;
  *(_BYTE *)(v8 + 2193192) = 1;
  *(_DWORD *)(v8 + 2192884) = v6 - 1;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_Float;
  result->mValue.IValue = 0;
  *(_DWORD *)(v8 + 2192888) = v5 != 0;
  v10 = *(_OWORD *)(v9 + 16);
  *(_OWORD *)(v8 + 2193032) = *(_OWORD *)v9;
  v11 = *(_OWORD *)(v9 + 32);
  *(_OWORD *)(v8 + 2193048) = v10;
  v12 = *(_OWORD *)(v9 + 48);
  *(_OWORD *)(v8 + 2193064) = v11;
  v13 = *(_OWORD *)(v9 + 64);
  *(_OWORD *)(v8 + 2193080) = v12;
  v14 = *(_OWORD *)(v9 + 80);
  *(_OWORD *)(v8 + 2193096) = v13;
  v15 = *(_OWORD *)(v9 + 96);
  *(_OWORD *)(v8 + 2193112) = v14;
  v16 = *(_OWORD *)(v9 + 128);
  *(_OWORD *)(v8 + 2193128) = v15;
  *(_OWORD *)(v8 + 2193144) = *(_OWORD *)(v9 + 112);
  v17 = *(_OWORD *)(v9 + 144);
  *(_OWORD *)(v8 + 2193160) = v16;
  *(_OWORD *)(v8 + 2193176) = v17;
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_SetSingleMember(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  GfxManager *v6; // rax
  GfxManager *v8; // [rsp+40h] [rbp+8h]

  if ( !GfxManager::instance )
  {
    v8 = (GfxManager *)operator new(0x108ui64);
    GfxManager::GfxManager(v8);
    GfxManager::instance = v6;
  }
  GfxManager::GFn_SetSingleMember((GfxManager *)result, argv, (unsigned int)argv);
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_None;
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_SetSkipGrade(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  AppMain *v5; // rcx
  Scaleform::GFx::Value *v6; // rax

  v5 = *(AppMain **)&AppMain::pApp;
  if ( argv->mValue.BValue )
  {
    *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2208108i64) |= 0x20000000u;
    v5->SaveDataMain.PlayerData.m_SkipRankMatchRank = 1;
  }
  else
  {
    *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2208108i64) &= ~0x20000000u;
    v5->SaveDataMain.PlayerData.m_SkipRankMatchRank = 0;
  }
  v5->SaveDataMain.GameData.m_FirstNoticeFlag.m_Flag[0] |= 0x40000000u;
  AppMain::SaveDataAsyncSave(v5, (int)ctx);
  v6 = result;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_Float;
  result->mValue.IValue = 0;
  return v6;
}

Scaleform::GFx::Value *__fastcall extension::GFn_SetStage(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  GfxManager *v6; // rax
  int IValue; // esi
  bool BValue; // di
  GameDataInfo *v9; // rcx
  GfxManager *v11; // [rsp+40h] [rbp+8h]

  if ( !GfxManager::instance )
  {
    v11 = (GfxManager *)operator new(0x108ui64);
    GfxManager::GfxManager(v11);
    GfxManager::instance = v6;
  }
  IValue = argv->mValue.IValue;
  BValue = argv[1].mValue.BValue;
  if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *(_DWORD *)(*(_QWORD *)NtCurrentTeb()->Reserved1[11]
                                                                            + 40i64) )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v9);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    }
  }
  `GameDataInfo::getInstance'::`2'::instance.m_StageID = IValue;
  `GameDataInfo::getInstance'::`2'::instance.m_StageRandom = BValue;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_None;
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_SetSystemOption(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  GfxManager *v6; // rax
  _BYTE *v7; // r11
  int IValue; // ecx
  int v9; // er10
  int v10; // edx
  int v11; // er8
  GfxManager *v13; // [rsp+40h] [rbp+8h]

  if ( !GfxManager::instance )
  {
    v13 = (GfxManager *)operator new(0x108ui64);
    GfxManager::GfxManager(v13);
    GfxManager::instance = v6;
  }
  v7 = *(_BYTE **)&AppMain::pApp;
  IValue = argv[1].mValue.IValue;
  v9 = argv[2].mValue.IValue;
  v10 = argv[3].mValue.IValue;
  v11 = argv[4].mValue.IValue;
  *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2197384i64) = argv->mValue.IValue;
  v7[2197388] = IValue != 0;
  v7[2205594] = v9;
  v7[2197389] = v10;
  v7[2197390] = v11;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_None;
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_SetSystemVoiceVolume(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  GfxManager *v6; // rax
  AppMain *v7; // rcx
  GfxManager *v9; // [rsp+40h] [rbp+8h]

  if ( !GfxManager::instance )
  {
    v9 = (GfxManager *)operator new(0x108ui64);
    GfxManager::GfxManager(v9);
    GfxManager::instance = v6;
  }
  v7 = *(AppMain **)&AppMain::pApp;
  *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2197424i64) = (int)(float)argv->mValue.IValue;
  AppMain::Sound_Volume_Commit(v7);
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_None;
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_SetTeamMember(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  GfxManager *v6; // rax
  GfxManager *v8; // [rsp+40h] [rbp+8h]

  if ( !GfxManager::instance )
  {
    v8 = (GfxManager *)operator new(0x108ui64);
    GfxManager::GfxManager(v8);
    GfxManager::instance = v6;
  }
  GfxManager::GFn_SetTeamMember((GfxManager *)result, argv, (unsigned int)argv);
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_None;
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_SetTeamOrder(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  GfxManager *v6; // rax
  GfxManager *v8; // [rsp+40h] [rbp+8h]

  if ( !GfxManager::instance )
  {
    v8 = (GfxManager *)operator new(0x108ui64);
    GfxManager::GfxManager(v8);
    GfxManager::instance = v6;
  }
  GfxManager::GFn_SetTeamOrder((GfxManager *)result, argv, (unsigned int)argv);
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_None;
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_SetTouchPadSetting(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  __int64 v4; // rax
  bool BValue; // dl
  Scaleform::GFx::Value *v6; // rax

  v4 = *(_QWORD *)&AppMain::pApp;
  BValue = argv->mValue.BValue;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  *(_BYTE *)(v4 + 2205594) = BValue;
  result->pObjectInterface = 0i64;
  result->mValue.IValue = 0;
  v6 = result;
  result->Type = VT_Float;
  return v6;
}

Scaleform::GFx::Value *__fastcall extension::GFn_SetTrainingController(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  __int64 IValue; // rdi
  AppMain *v6; // r14
  FighterOperation *v7; // rax
  FighterOperation::Slot *v8; // rdx
  int userIndex; // ecx
  FighterOperation::ListenerNode *p_m_assignListenerListEnd; // rbp
  extension::BiLinkable<FighterOperation::ListenerNode> *m_Next; // rbx
  extension::BiLinkable<FighterOperation::ListenerNode> **p_m_Next; // rcx
  FighterOperationMapper *SaveDataKeyConfigMyMapper; // rbx
  FighterOperation *v14; // rax
  __int64 v15; // rbx
  FighterOperationKeyboardMapper *p_keyboardMap; // rax
  __int64 v17; // rdx
  char *v18; // rcx
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  FighterOperation *v27; // rax
  FighterOperation::Slot *v28; // r8
  const FighterOperationKeyboardMapper *p_operationKeyboardMapper; // rdx
  FighterOperationKeyboardMapper *v30; // rax
  char *v31; // rcx
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  __int128 v37; // xmm1
  __int128 v38; // xmm0
  __int128 v39; // xmm1
  Scaleform::GFx::Value *v40; // rax
  GameDataInfo *v41; // rcx
  FighterOperationMapper resulta; // [rsp+28h] [rbp-440h] BYREF
  char v43[1048]; // [rsp+50h] [rbp-418h] BYREF

  IValue = argv->mValue.IValue;
  v6 = *(AppMain **)&AppMain::pApp;
  if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *(_DWORD *)(*(_QWORD *)NtCurrentTeb()->Reserved1[11]
                                                                            + 40i64) )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v41);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    }
  }
  `GameDataInfo::getInstance'::`2'::instance.m_ControllerSetting[1] = IValue;
  v7 = FighterOperation::Instance();
  v8 = &v7->m_slots[1];
  if ( v7 != (FighterOperation *)-1488i64 )
  {
    userIndex = v8->userIndex;
    v8->userIndex = IValue;
    v7->m_slots[1].userId = IValue;
    if ( userIndex != (_DWORD)IValue )
    {
      p_m_assignListenerListEnd = &v7->m_assignListenerListEnd;
      m_Next = v7->m_assignListenerListEnd.m_Next;
      if ( m_Next != &v7->m_assignListenerListEnd )
      {
        do
        {
          p_m_Next = &m_Next[-1].m_Next;
          if ( !m_Next )
            p_m_Next = 0i64;
          ((void (__fastcall *)(extension::BiLinkable<FighterOperation::ListenerNode> **, __int64, _QWORD))(*p_m_Next)->m_Next)(
            p_m_Next,
            2i64,
            (unsigned int)IValue);
          m_Next = m_Next->m_Next;
        }
        while ( m_Next != p_m_assignListenerListEnd );
      }
    }
  }
  SaveDataKeyConfigMyMapper = AppMain::GetSaveDataKeyConfigMyMapper(v6, &resulta, (USER_ID)IValue);
  v14 = FighterOperation::Instance();
  if ( v14 != (FighterOperation *)-1488i64 )
  {
    *(_OWORD *)v14->m_slots[1].operationMapper.m_mapping = *(_OWORD *)SaveDataKeyConfigMyMapper->m_mapping;
    *(_OWORD *)&v14->m_slots[1].operationMapper.m_mapping[4] = *(_OWORD *)&SaveDataKeyConfigMyMapper->m_mapping[4];
    *(_QWORD *)&v14->m_slots[1].operationMapper.m_mapping[8] = *(_QWORD *)&SaveDataKeyConfigMyMapper->m_mapping[8];
    FighterOperation::ReverseOperationMapper::assign(&v14->m_slots[1].reverseMapper, &v14->m_slots[1].operationMapper);
  }
  v15 = 8i64;
  p_keyboardMap = &v6->SaveDataMain.ButtonConfData.buttonConfig[IValue].keyboardMap;
  v17 = 8i64;
  v18 = v43;
  do
  {
    v18 += 128;
    v19 = *(_OWORD *)p_keyboardMap->m_mapping;
    v20 = *(_OWORD *)&p_keyboardMap->m_mapping[4];
    p_keyboardMap = (FighterOperationKeyboardMapper *)((char *)p_keyboardMap + 128);
    *((_OWORD *)v18 - 8) = v19;
    v21 = *(_OWORD *)&p_keyboardMap[-1].m_mapping[232];
    *((_OWORD *)v18 - 7) = v20;
    v22 = *(_OWORD *)&p_keyboardMap[-1].m_mapping[236];
    *((_OWORD *)v18 - 6) = v21;
    v23 = *(_OWORD *)&p_keyboardMap[-1].m_mapping[240];
    *((_OWORD *)v18 - 5) = v22;
    v24 = *(_OWORD *)&p_keyboardMap[-1].m_mapping[244];
    *((_OWORD *)v18 - 4) = v23;
    v25 = *(_OWORD *)&p_keyboardMap[-1].m_mapping[248];
    *((_OWORD *)v18 - 3) = v24;
    v26 = *(_OWORD *)&p_keyboardMap[-1].m_mapping[252];
    *((_OWORD *)v18 - 2) = v25;
    *((_OWORD *)v18 - 1) = v26;
    --v17;
  }
  while ( v17 );
  v27 = FighterOperation::Instance();
  v28 = &v27->m_slots[1];
  if ( v27 != (FighterOperation *)-1488i64 )
  {
    p_operationKeyboardMapper = &v27->m_slots[1].operationKeyboardMapper;
    v30 = &v27->m_slots[1].operationKeyboardMapper;
    v31 = v43;
    do
    {
      v30 = (FighterOperationKeyboardMapper *)((char *)v30 + 128);
      v32 = *(_OWORD *)v31;
      v33 = *((_OWORD *)v31 + 1);
      v31 += 128;
      *(_OWORD *)&v30[-1].m_mapping[224] = v32;
      v34 = *((_OWORD *)v31 - 6);
      *(_OWORD *)&v30[-1].m_mapping[228] = v33;
      v35 = *((_OWORD *)v31 - 5);
      *(_OWORD *)&v30[-1].m_mapping[232] = v34;
      v36 = *((_OWORD *)v31 - 4);
      *(_OWORD *)&v30[-1].m_mapping[236] = v35;
      v37 = *((_OWORD *)v31 - 3);
      *(_OWORD *)&v30[-1].m_mapping[240] = v36;
      v38 = *((_OWORD *)v31 - 2);
      *(_OWORD *)&v30[-1].m_mapping[244] = v37;
      v39 = *((_OWORD *)v31 - 1);
      *(_OWORD *)&v30[-1].m_mapping[248] = v38;
      *(_OWORD *)&v30[-1].m_mapping[252] = v39;
      --v15;
    }
    while ( v15 );
    FighterOperation::ReverseOperationKeyboardMapper::assign(&v28->reverseKeyboardMapper, p_operationKeyboardMapper);
  }
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  v40 = result;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_Float;
  result->mValue.IValue = 0;
  return v40;
}

Scaleform::GFx::Value *__fastcall extension::GFn_SetTrainingRecordSetting(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  _DWORD *v6; // rsi
  GameDataInfo *v7; // rcx
  BattleSystem::BattleController *v8; // rax
  GameDataInfo *v9; // rcx
  __m128i v10; // xmm2
  __m128i v12; // [rsp+28h] [rbp-89h]
  __m128i v13; // [rsp+40h] [rbp-71h]
  __int128 v14; // [rsp+98h] [rbp-19h]
  __int128 v15; // [rsp+A8h] [rbp-9h]
  __int128 v16; // [rsp+B8h] [rbp+7h]
  __int128 v17; // [rsp+C8h] [rbp+17h]
  __m128i v18; // [rsp+E0h] [rbp+2Fh]
  __int128 v19; // [rsp+F0h] [rbp+3Fh]
  BattleSystem::BattleController *v20; // [rsp+118h] [rbp+67h]

  v6 = (_DWORD *)(*(_QWORD *)NtCurrentTeb()->Reserved1[11] + 40i64);
  if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *v6 )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v7);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    }
  }
  v18 = *(__m128i *)&`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iRestart;
  v19 = *(_OWORD *)&`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iAttack;
  v13 = *(__m128i *)`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iPowerGauge;
  v12 = *(__m128i *)`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iGuardGauge;
  LODWORD(v14) = *(_DWORD *)&`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_bRestartOn;
  LODWORD(v15) = `GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iPlaySlot[0][0];
  DWORD2(v16) = `GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iPlaySlot[1][0];
  if ( !BattleSystem::BattleController::instance )
  {
    v20 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v20);
    BattleSystem::BattleController::instance = v8;
  }
  DWORD1(v14) = argv->mValue.IValue;
  DWORD2(v14) = argv[1].mValue.IValue;
  HIDWORD(v14) = argv[2].mValue.IValue;
  DWORD1(v15) = argv[3].mValue.IValue;
  DWORD2(v15) = argv[4].mValue.IValue;
  HIDWORD(v15) = argv[5].mValue.IValue;
  LODWORD(v16) = argv[6].mValue.IValue;
  DWORD1(v16) = argv[7].mValue.IValue;
  HIDWORD(v16) = argv[8].mValue.IValue;
  LODWORD(v17) = argv[9].mValue.IValue;
  DWORD1(v17) = argv[10].mValue.IValue;
  DWORD2(v17) = argv[11].mValue.IValue;
  HIDWORD(v17) = argv[12].mValue.IValue;
  if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *v6 )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v9);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    }
  }
  if ( `GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iRestart != _mm_cvtsi128_si32(v18)
    || `GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iPowerGauge[0] != _mm_cvtsi128_si32(v13)
    || `GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iPowerGauge[1] != _mm_cvtsi128_si32(_mm_srli_si128(v13, 4)) )
  {
    v10 = v12;
LABEL_20:
    `GameDataInfo::getInstance'::`2'::instance.m_TrainingSettingUpdate = 1;
    goto LABEL_21;
  }
  v10 = v12;
  if ( `GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iMAXModeGauge[0] != _mm_cvtsi128_si32(_mm_srli_si128(v13, 8))
    || `GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iMAXModeGauge[1] != _mm_cvtsi128_si32(_mm_srli_si128(v13, 12))
    || `GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iGuardGauge[0] != _mm_cvtsi128_si32(v12)
    || `GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iGuardGauge[1] != _mm_cvtsi128_si32(_mm_srli_si128(v12, 4))
    || `GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iStun[0] != _mm_cvtsi128_si32(_mm_srli_si128(v12, 8))
    || `GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iStun[1] != _mm_cvtsi128_si32(_mm_srli_si128(v12, 12)) )
  {
    goto LABEL_20;
  }
LABEL_21:
  *(__m128i *)&`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iRestart = v18;
  *(_OWORD *)&`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iAttack = v19;
  *(__m128i *)`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iPowerGauge = v13;
  *(__m128i *)`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iGuardGauge = v10;
  *(_OWORD *)&`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_bRestartOn = v14;
  *(_OWORD *)&`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iPlaySlot[0][0] = v15;
  *(_OWORD *)&`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iPlaySlot[0][4] = v16;
  *(_OWORD *)&`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iPlaySlot[1][2] = v17;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_Float;
  result->mValue.IValue = 0;
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_SetTrainingRestart(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  _DWORD *v5; // rdi
  int v6; // eax
  GameDataInfo *v7; // rcx
  GameDataInfo *v8; // rcx
  Scaleform::GFx::Value *v9; // rax

  v5 = (_DWORD *)(*(_QWORD *)NtCurrentTeb()->Reserved1[11] + 40i64);
  v6 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
  if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *v5 )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    v6 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v7);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
      v6 = (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA;
    }
  }
  `GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_bRestartOn = 1;
  if ( v6 > *v5 )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v8);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    }
  }
  GameDataInfo::SetTrainingSetting(
    &`GameDataInfo::getInstance'::`2'::instance,
    &`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting);
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->mValue.IValue = 0;
  v9 = result;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->Type = VT_Float;
  return v9;
}

Scaleform::GFx::Value *__fastcall extension::GFn_SetTrainingSettingArray(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  _DWORD *v6; // r14
  GameDataInfo *v7; // rcx
  BattleSystem::BattleController *v8; // rsi
  BattleSystem::BattleController *v9; // rax
  int IValue; // er15
  int v11; // er12
  int v12; // er13
  int v13; // ecx
  int v14; // edx
  int v15; // er8
  int v16; // er9
  int v17; // er10
  const Scaleform::GFx::Value *v18; // rbx
  int v19; // er11
  bool v20; // bl
  GameDataInfo *v21; // rcx
  int v23; // [rsp+20h] [rbp-E0h]
  int v24; // [rsp+24h] [rbp-DCh]
  int v25; // [rsp+28h] [rbp-D8h]
  int v26; // [rsp+2Ch] [rbp-D4h]
  __int128 v27; // [rsp+40h] [rbp-C0h]
  __int128 v28; // [rsp+50h] [rbp-B0h]
  __int128 v29; // [rsp+60h] [rbp-A0h]
  __int128 v30; // [rsp+70h] [rbp-90h]
  __int128 v31; // [rsp+C8h] [rbp-38h]
  __int128 v32; // [rsp+D8h] [rbp-28h]
  __int128 v33; // [rsp+E8h] [rbp-18h]
  __int128 v34; // [rsp+F8h] [rbp-8h]
  BattleSystem::BattleController *v35; // [rsp+150h] [rbp+50h]
  int v36; // [rsp+150h] [rbp+50h]
  int v37; // [rsp+160h] [rbp+60h]

  v6 = (_DWORD *)(*(_QWORD *)NtCurrentTeb()->Reserved1[11] + 40i64);
  if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *v6 )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v7);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    }
  }
  LODWORD(v28) = `GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iAttack;
  v31 = *(_OWORD *)&`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_bRestartOn;
  v32 = *(_OWORD *)&`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iPlaySlot[0][0];
  v33 = *(_OWORD *)&`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iPlaySlot[0][4];
  v34 = *(_OWORD *)&`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iPlaySlot[1][2];
  v8 = BattleSystem::BattleController::instance;
  if ( !BattleSystem::BattleController::instance )
  {
    v35 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v35);
    v8 = v9;
    BattleSystem::BattleController::instance = v9;
  }
  IValue = argv->mValue.IValue;
  LODWORD(v27) = IValue;
  DWORD1(v27) = argv[1].mValue.IValue;
  DWORD2(v27) = argv[2].mValue.IValue;
  HIDWORD(v27) = argv[3].mValue.IValue;
  DWORD1(v28) = argv[4].mValue.IValue;
  DWORD2(v28) = argv[5].mValue.IValue;
  HIDWORD(v28) = argv[6].mValue.IValue;
  v11 = argv[7].mValue.IValue;
  LODWORD(v29) = v11;
  v12 = argv[8].mValue.IValue;
  DWORD1(v29) = v12;
  v13 = argv[9].mValue.IValue;
  v36 = v13;
  DWORD2(v29) = v13;
  v14 = argv[10].mValue.IValue;
  v37 = v14;
  HIDWORD(v29) = v14;
  v15 = argv[11].mValue.IValue;
  v23 = v15;
  LODWORD(v30) = v15;
  v16 = argv[12].mValue.IValue;
  v24 = v16;
  DWORD1(v30) = v16;
  v17 = argv[13].mValue.IValue;
  v25 = v17;
  DWORD2(v30) = v17;
  v18 = argv + 14;
  v19 = v18->mValue.IValue;
  v26 = v19;
  HIDWORD(v30) = v19;
  v20 = v18[1].mValue.IValue != 0;
  if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *v6 )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v21);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    }
    v19 = v26;
    v17 = v25;
    v16 = v24;
    v15 = v23;
    v14 = v37;
    v13 = v36;
  }
  if ( `GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iRestart != IValue
    || `GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iPowerGauge[0] != v11
    || `GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iPowerGauge[1] != v12
    || `GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iMAXModeGauge[0] != v13
    || `GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iMAXModeGauge[1] != v14
    || `GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iGuardGauge[0] != v15
    || `GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iGuardGauge[1] != v16
    || `GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iStun[0] != v17
    || `GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iStun[1] != v19 )
  {
    `GameDataInfo::getInstance'::`2'::instance.m_TrainingSettingUpdate = 1;
  }
  *(_OWORD *)&`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iRestart = v27;
  *(_OWORD *)&`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iAttack = v28;
  *(_OWORD *)`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iPowerGauge = v29;
  *(_OWORD *)`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iGuardGauge = v30;
  *(_OWORD *)&`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_bRestartOn = v31;
  *(_OWORD *)&`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iPlaySlot[0][0] = v32;
  *(_OWORD *)&`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iPlaySlot[0][4] = v33;
  *(_OWORD *)&`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iPlaySlot[1][2] = v34;
  v8->bHudVisible = v20;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_Float;
  result->mValue.IValue = 0;
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_SetTrainingSettingDefault(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  _DWORD *v7; // r14
  GameDataInfo *v8; // rcx
  BattleSystem::BattleController *v9; // rsi
  BattleSystem::BattleController *v10; // rax
  int IValue; // ebx
  GameDataInfo *v12; // rcx
  InputKeyRecord (*m_KeyRecord)[6]; // rax
  BattleSystem::BattleController *v14; // rdx
  RestrictRingBuffer<InputKeyRecord::RecordKey> *Myval2; // rcx
  BattleSystem::BattleController *v17; // [rsp+60h] [rbp+8h]

  v7 = (_DWORD *)(*(_QWORD *)NtCurrentTeb()->Reserved1[11] + 40i64);
  if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *v7 )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v8);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    }
  }
  v9 = BattleSystem::BattleController::instance;
  if ( !BattleSystem::BattleController::instance )
  {
    v17 = (BattleSystem::BattleController *)operator new(0x3E578ui64);
    BattleSystem::BattleController::BattleController(v17);
    v9 = v10;
    BattleSystem::BattleController::instance = v10;
  }
  IValue = 7;
  if ( argc )
    IValue = argv->mValue.IValue;
  if ( (int)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA > *v7 )
  {
    Init_thread_header((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    if ( (_DWORD)__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA == -1 )
    {
      GameDataInfo::GameDataInfo(v12);
      Init_thread_footer((int *)&__TSS0__1__getInstance_GameDataInfo__SAAEAV2_XZ_4HA);
    }
  }
  `GameDataInfo::getInstance'::`2'::instance.m_TrainingSettingUpdate = 1;
  if ( (IValue & 1) != 0 )
  {
    *(_QWORD *)&`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iRestart = 1i64;
    *(_OWORD *)&`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iGuard = 0i64;
    *(_QWORD *)&`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iKeyData = 0i64;
  }
  if ( (IValue & 2) != 0 )
  {
    *(_QWORD *)`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iPowerGauge = 0i64;
    *(__m128i *)`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iMAXModeGauge = _mm_load_si128((const __m128i *)&_xmm);
    `GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iStun[0] = 100;
    `GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iStun[1] = 100;
  }
  if ( (IValue & 4) != 0 )
  {
    *(_QWORD *)&`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iRecordMode = 0i64;
    `GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iRecordSlot = SLOT_1;
    `GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iPlaySlot[0][1] = 1;
    *(_OWORD *)&`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iPlaySlot[0][2] = 0ui64;
    `GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iPlaySlot[1][1] = 1;
    *(_OWORD *)&`GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_iPlaySlot[1][2] = 0ui64;
  }
  `GameDataInfo::getInstance'::`2'::instance.m_TrainingSetting.m_bRestartOn = 0;
  if ( IValue == 4 )
  {
    v9->keyRecordMode = STOP;
    m_KeyRecord = v9->m_KeyRecord;
    if ( (BattleSystem::BattleController::MISSION_SAMPLE_MODE *)v9->m_KeyRecord != &v9->missionSampleMode )
    {
      do
      {
        v14 = (BattleSystem::BattleController *)&(*m_KeyRecord)[6];
        if ( m_KeyRecord != (InputKeyRecord (*)[6])&(*m_KeyRecord)[6] )
        {
          do
          {
            Myval2 = (*m_KeyRecord)[0].pKeyBuffer._Mypair._Myval2;
            Myval2->uiDataSize = 0;
            *(_QWORD *)&Myval2->uiBeginIndex = 0i64;
            (*m_KeyRecord)[0].uiPlayCount = 0;
            m_KeyRecord = (InputKeyRecord (*)[6])((char *)m_KeyRecord + 16);
          }
          while ( m_KeyRecord != (InputKeyRecord (*)[6])v14 );
        }
        m_KeyRecord = (InputKeyRecord (*)[6])v14;
      }
      while ( v14 != (BattleSystem::BattleController *)&v9->missionSampleMode );
    }
  }
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_Float;
  result->mValue.IValue = 0;
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_SetVoiceChatStatus(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  __int64 v4; // rax
  bool BValue; // dl

  v4 = *(_QWORD *)&AppMain::pApp;
  BValue = argv->mValue.BValue;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  *(_BYTE *)(v4 + 2205593) = BValue;
  result->pObjectInterface = 0i64;
  result->Type = VT_None;
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_ShowFlare(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  GfxManager *v5; // rax
  extension::gfxi_detail::MovieProxy *m_ptr; // rcx
  extension::gfxi_detail::MovieProxy *v7; // rcx
  GfxManager *v9; // [rsp+40h] [rbp+8h]

  v5 = GfxManager::instance;
  if ( !GfxManager::instance )
  {
    v9 = (GfxManager *)operator new(0x108ui64);
    GfxManager::GfxManager(v9);
    GfxManager::instance = v5;
  }
  if ( v5->m_GFXMovieBG.m_movieProxy.m_ptr )
  {
    m_ptr = v5->m_GFXMovieBG.m_movieProxy.m_ptr;
    if ( m_ptr )
      m_ptr->m_bAdvance = 1;
    if ( v5->m_GFXMovieBG.m_movieProxy.m_ptr )
    {
      v7 = v5->m_GFXMovieBG.m_movieProxy.m_ptr;
      if ( v7 )
        v7->m_bRender = 1;
    }
  }
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_Float;
  result->mValue.IValue = 0;
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_ShowLeaderboardPlayerPSN(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  Scaleform::GFx::Value *v5; // rbx
  __int64 v6; // rax
  Scaleform::GFx::Value *v7; // rax

  if ( readType == 1 )
  {
    v5 = *(Scaleform::GFx::Value **)(*(_QWORD *)&AppMain::pApp + 29784i64);
  }
  else if ( (unsigned int)(readType - 2) > 1 )
  {
    v5 = result;
  }
  else
  {
    v5 = *(Scaleform::GFx::Value **)(*(_QWORD *)&AppMain::pApp + 48i64 * argv->mValue.IValue + 11776);
  }
  v6 = SteamInternal_ContextInit(&`SteamInternal_ModuleContext'::`2'::s_CallbackCounterAndContext, ctx);
  (*(void (__fastcall **)(_QWORD, const char *, Scaleform::GFx::Value *))(**(_QWORD **)(v6 + 16) + 232i64))(
    *(_QWORD *)(v6 + 16),
    "steamid",
    v5);
  v7 = result;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_Float;
  result->mValue.IValue = 0;
  return v7;
}

Scaleform::GFx::Value *__fastcall extension::GFn_ShowRoomPlayerPSN(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  unsigned __int64 steamId; // rbx
  __int64 v6; // rax
  Scaleform::GFx::Value *v7; // rax

  steamId = g_NetworkManager.gamedata.player_data[argv->mValue.IValue].steamId;
  v6 = SteamInternal_ContextInit(&`SteamInternal_ModuleContext'::`2'::s_CallbackCounterAndContext, ctx);
  (*(void (__fastcall **)(_QWORD, const char *, unsigned __int64))(**(_QWORD **)(v6 + 16) + 232i64))(
    *(_QWORD *)(v6 + 16),
    "steamid",
    steamId);
  v7 = result;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_Float;
  result->mValue.IValue = 0;
  return v7;
}

Scaleform::GFx::Value *__fastcall extension::GFn_SoundIsLoadComplete(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  char IsLoadComplete; // di

  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_None;
  IsLoadComplete = AppMain::Sound_IsLoadComplete(*(AppMain **)&AppMain::pApp);
  if ( (result->Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(
      result->pObjectInterface,
      result,
      result->mValue.pStringManaged);
    result->pObjectInterface = 0i64;
  }
  result->Type = VT_Int64;
  result->mValue.BValue = IsLoadComplete;
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_StartEasyCommand(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  EasyCommand *v4; // rax
  Scaleform::GFx::Value *v6; // rax

  v4 = EasyCommand::instance;
  if ( !EasyCommand::instance )
  {
    v4 = (EasyCommand *)operator new(0xCui64);
    EasyCommand::instance = v4;
    *(_QWORD *)v4->m_TimeCount = 0i64;
    v4->m_CommandCount[0] = 0;
  }
  v4->m_CommandStatus[0] = PLAY;
  *(_QWORD *)v4->m_CommandCount = 0i64;
  v6 = result;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_Float;
  result->mValue.IValue = 0;
  return v6;
}

Scaleform::GFx::Value *__fastcall extension::GFn_StartHudAdjust(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  Scaleform::GFx::Value *v5; // rax

  SyncMenuImage::Load(
    (SyncMenuImage *)(*(_QWORD *)&AppMain::pApp + 11128i64),
    (const ImageDataInfo *)MenuImageDataTbl[*(int *)(*(_QWORD *)&AppMain::pApp + 2197384i64)] + 27,
    FADE_OUT);
  v5 = result;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_Float;
  result->mValue.IValue = 0;
  return v5;
}

Scaleform::GFx::Value *__fastcall extension::GFn_StopBGM(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  double NValue; // xmm6_8
  extension::SoundManager *v6; // rax
  extension::SoundManager *v8; // [rsp+50h] [rbp+8h]

  NValue = argv->mValue.NValue;
  v6 = extension::SoundManager::the_instance;
  if ( !extension::SoundManager::the_instance )
  {
    v8 = (extension::SoundManager *)operator new(0x310ui64);
    extension::SoundManager::SoundManager(v8);
    extension::SoundManager::the_instance = v6;
  }
  extension::SoundManager::stopBGM(v6, NValue);
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_Float;
  result->mValue.IValue = 0;
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_StopSE(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  double NValue; // xmm6_8
  extension::SoundManager *v6; // rax
  extension::SoundManager *v8; // [rsp+50h] [rbp+8h]

  NValue = argv->mValue.NValue;
  v6 = extension::SoundManager::the_instance;
  if ( !extension::SoundManager::the_instance )
  {
    v8 = (extension::SoundManager *)operator new(0x310ui64);
    extension::SoundManager::SoundManager(v8);
    extension::SoundManager::the_instance = v6;
  }
  extension::SoundManager::stopSE(v6, NValue);
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_Float;
  result->mValue.IValue = 0;
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_Test(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  GfxManager *v5; // rax
  Scaleform::GFx::Value val; // [rsp+30h] [rbp-38h]
  GfxManager *v8; // [rsp+70h] [rbp+8h]

  val.Scaleform::ListNode<Scaleform::GFx::Value> = (Scaleform::ListNode<Scaleform::GFx::Value>)_mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
  val.pObjectInterface = 0i64;
  val.Type = 6;
  val.mValue.pString = "TEST";
  v5 = GfxManager::instance;
  if ( !GfxManager::instance )
  {
    v8 = (GfxManager *)operator new(0x108ui64);
    GfxManager::GfxManager(v8);
    GfxManager::instance = v5;
  }
  GfxManager::GFn_Test(v5, result, argv, argc);
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_TutorialMessageEnd(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  __int64 v4; // rax

  v4 = *(_QWORD *)&AppMain::pApp;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->Type = VT_Float;
  *(_DWORD *)(v4 + 2182452) = 2;
  result->pObjectInterface = 0i64;
  result->mValue.IValue = 0;
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_UnescapeSpecialHTML(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  const char *pString; // rdx

  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_None;
  if ( (argv->Type & 0x40) != 0 )
    pString = *argv->mValue.pStringManaged;
  else
    pString = argv->mValue.pString;
  extension::TranslateTable::UnescapeSpecialHTML(extension::stringBuff, pString);
  if ( (result->Type & 0x40) != 0 )
  {
    Scaleform::GFx::Value::ObjectInterface::ObjectRelease(
      result->pObjectInterface,
      result,
      result->mValue.pStringManaged);
    result->pObjectInterface = 0i64;
  }
  result->Type = 6;
  result->mValue.pString = extension::stringBuff;
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_UnlockGallery(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  Scaleform::GFx::Value *v5; // rax

  AppMain::UnlockGallery(*(AppMain **)&AppMain::pApp, (GALLERY_ID)argv->mValue.IValue, 0);
  v5 = result;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_Float;
  result->mValue.IValue = 0;
  return v5;
}

Scaleform::GFx::Value *__fastcall extension::GFn_UpdateBrightnessOnly(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  GfxManager *v6; // rax
  GfxManager *v8; // [rsp+40h] [rbp+8h]

  if ( !GfxManager::instance )
  {
    v8 = (GfxManager *)operator new(0x108ui64);
    GfxManager::GfxManager(v8);
    GfxManager::instance = v6;
  }
  *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2197432i64) = argv->mValue.IValue;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_None;
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFn_VisitMyProfile(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  unsigned __int64 data; // rbx
  __int64 v6; // rax
  Scaleform::GFx::Value *v7; // rax

  data = Fw::NetworkCommon::m_NpOnlineId.data;
  v6 = SteamInternal_ContextInit(&`SteamInternal_ModuleContext'::`2'::s_CallbackCounterAndContext, ctx);
  (*(void (__fastcall **)(_QWORD, const char *, unsigned __int64))(**(_QWORD **)(v6 + 16) + 232i64))(
    *(_QWORD *)(v6 + 16),
    "steamid",
    data);
  v7 = result;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_Float;
  result->mValue.IValue = 0;
  return v7;
}

Scaleform::GFx::Value *__fastcall extension::GFn_VisitProfile(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  const char *pString; // rcx
  unsigned __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rax
  Scaleform::GFx::Value *v9; // rax

  if ( (argv->Type & 0x40) != 0 )
    pString = *argv->mValue.pStringManaged;
  else
    pString = argv->mValue.pString;
  if ( pString )
  {
    v6 = strtoull(pString, 0i64, 10);
    v8 = SteamInternal_ContextInit(&`SteamInternal_ModuleContext'::`2'::s_CallbackCounterAndContext, v7);
    (*(void (__fastcall **)(_QWORD, const char *, unsigned __int64))(**(_QWORD **)(v8 + 16) + 232i64))(
      *(_QWORD *)(v8 + 16),
      "steamid",
      v6);
  }
  result->mValue.IValue = 0;
  v9 = result;
  result->pObjectInterface = 0i64;
  result->Type = VT_Float;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  return v9;
}

Scaleform::GFx::Value *__fastcall Scaleform::GFx::Value::Value(
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *ctx,
        const Scaleform::GFx::Value *argv,
        unsigned int argc)
{
  Scaleform::GFx::Value *v4; // rax

  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_None;
  v4 = result;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  return v4;
}

void __fastcall extension::InstallGFxInterface(extension *this)
{
  extension::GFXIGameInterface *v1; // rax
  const char (*v2)[7]; // rdx
  Scaleform::GFx::Value *(__fastcall *v3)(Scaleform::GFx::Value *, extension::GFXIMovieContext *, const Scaleform::GFx::Value *, unsigned int); // r8
  const char (*v4)[30]; // rdx
  Scaleform::GFx::Value *(__fastcall *v5)(Scaleform::GFx::Value *, extension::GFXIMovieContext *, const Scaleform::GFx::Value *, unsigned int); // r8

  if ( dword_140ACDDE4 > *(_DWORD *)(*(_QWORD *)NtCurrentTeb()->Reserved1[11] + 40i64) )
  {
    Init_thread_header(&dword_140ACDDE4);
    if ( dword_140ACDDE4 == -1 )
    {
      if ( Scaleform::GFx::Value::Value )
      {
        *(_QWORD *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[21][16] = Scaleform::GFx::Value::Value;
        *(_QWORD *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[21][64] = &extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[21][8];
        *(_QWORD *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[21][8] = &std::_Func_impl<Scaleform::GFx::Value (*)(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int),std::allocator<int>,Scaleform::GFx::Value,extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int>::`vftable';
      }
      if ( extension::GFn_Dispose )
      {
        *(_QWORD *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[21][88] = extension::GFn_Dispose;
        *(_QWORD *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[21][136] = &extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[21][80];
        *(_QWORD *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[21][80] = &std::_Func_impl<Scaleform::GFx::Value (*)(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int),std::allocator<int>,Scaleform::GFx::Value,extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int>::`vftable';
      }
      if ( extension::GFn_Quit )
      {
        *(_QWORD *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[21][160] = extension::GFn_Quit;
        *(_QWORD *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[21][208] = &extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[21][152];
        *(_QWORD *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[21][152] = &std::_Func_impl<Scaleform::GFx::Value (*)(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int),std::allocator<int>,Scaleform::GFx::Value,extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int>::`vftable';
      }
      if ( extension::GFn_QuitLock )
      {
        *(_QWORD *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[21][232] = extension::GFn_QuitLock;
        *(_QWORD *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[22][24] = &extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[21][224];
        *(_QWORD *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[21][224] = &std::_Func_impl<Scaleform::GFx::Value (*)(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int),std::allocator<int>,Scaleform::GFx::Value,extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int>::`vftable';
      }
      if ( extension::GFn_QuitCross )
      {
        *(_QWORD *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[22][48] = extension::GFn_QuitCross;
        *(_QWORD *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[22][96] = &extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[22][40];
        *(_QWORD *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[22][40] = &std::_Func_impl<Scaleform::GFx::Value (*)(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int),std::allocator<int>,Scaleform::GFx::Value,extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int>::`vftable';
      }
      if ( extension::GFn_SetMenuCursor )
      {
        *(_QWORD *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[22][120] = extension::GFn_SetMenuCursor;
        *(_QWORD *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[22][168] = &extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[22][112];
        *(_QWORD *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[22][112] = &std::_Func_impl<Scaleform::GFx::Value (*)(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int),std::allocator<int>,Scaleform::GFx::Value,extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int>::`vftable';
      }
      if ( extension::GFn_GetMenuCursor )
      {
        *(_QWORD *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[22][192] = extension::GFn_GetMenuCursor;
        *(_QWORD *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[22][240] = &extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[22][184];
        *(_QWORD *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[22][184] = &std::_Func_impl<Scaleform::GFx::Value (*)(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int),std::allocator<int>,Scaleform::GFx::Value,extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int>::`vftable';
      }
      if ( extension::GFn_SetTeamMember )
      {
        *(_QWORD *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[23][8] = extension::GFn_SetTeamMember;
        *(_QWORD *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[23][56] = extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[23];
        *(_QWORD *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[23][0] = &std::_Func_impl<Scaleform::GFx::Value (*)(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int),std::allocator<int>,Scaleform::GFx::Value,extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int>::`vftable';
      }
      if ( extension::GFn_SetSingleMember )
      {
        *(_QWORD *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[23][80] = extension::GFn_SetSingleMember;
        *(_QWORD *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[23][128] = &extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[23][72];
        *(_QWORD *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[23][72] = &std::_Func_impl<Scaleform::GFx::Value (*)(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int),std::allocator<int>,Scaleform::GFx::Value,extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int>::`vftable';
      }
      if ( extension::GFn_SetMyBustupCharacterNo )
      {
        *(_QWORD *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[23][152] = extension::GFn_SetMyBustupCharacterNo;
        *(_QWORD *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[23][200] = &extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[23][144];
        *(_QWORD *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[23][144] = &std::_Func_impl<Scaleform::GFx::Value (*)(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int),std::allocator<int>,Scaleform::GFx::Value,extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int>::`vftable';
      }
      if ( extension::GFn_SetStage )
      {
        *(_QWORD *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[23][224] = extension::GFn_SetStage;
        *(_QWORD *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[24][16] = &extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[23][216];
        *(_QWORD *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[23][216] = &std::_Func_impl<Scaleform::GFx::Value (*)(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int),std::allocator<int>,Scaleform::GFx::Value,extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int>::`vftable';
      }
      if ( extension::GFn_GetHistoryStage )
      {
        *(_QWORD *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[24][40] = extension::GFn_GetHistoryStage;
        *(_QWORD *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[24][88] = &extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[24][32];
        *(_QWORD *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[24][32] = &std::_Func_impl<Scaleform::GFx::Value (*)(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int),std::allocator<int>,Scaleform::GFx::Value,extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int>::`vftable';
      }
      if ( extension::GFn_SetTeamOrder )
      {
        *(_QWORD *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[24][112] = extension::GFn_SetTeamOrder;
        *(_QWORD *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[24][160] = &extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[24][104];
        *(_QWORD *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[24][104] = &std::_Func_impl<Scaleform::GFx::Value (*)(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int),std::allocator<int>,Scaleform::GFx::Value,extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int>::`vftable';
      }
      if ( extension::GFn_SetMenuID )
      {
        *(_QWORD *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[24][184] = extension::GFn_SetMenuID;
        *(_QWORD *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[24][232] = &extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[24][176];
        *(_QWORD *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[24][176] = &std::_Func_impl<Scaleform::GFx::Value (*)(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int),std::allocator<int>,Scaleform::GFx::Value,extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int>::`vftable';
      }
      if ( extension::GFn_GetMenuID )
      {
        *(_QWORD *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[25][0] = extension::GFn_GetMenuID;
        *(_QWORD *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[25][48] = &extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[24][248];
        *(_QWORD *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[24][248] = &std::_Func_impl<Scaleform::GFx::Value (*)(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int),std::allocator<int>,Scaleform::GFx::Value,extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int>::`vftable';
      }
      if ( extension::GFn_SetLegacyStick )
      {
        *(_QWORD *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[25][72] = extension::GFn_SetLegacyStick;
        *(_QWORD *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[25][120] = &extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[25][64];
        *(_QWORD *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[25][64] = &std::_Func_impl<Scaleform::GFx::Value (*)(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int),std::allocator<int>,Scaleform::GFx::Value,extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int>::`vftable';
      }
      if ( extension::GFn_IsPlayTogether )
      {
        *(_QWORD *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[25][144] = extension::GFn_IsPlayTogether;
        *(_QWORD *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[25][192] = &extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[25][136];
        *(_QWORD *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[25][136] = &std::_Func_impl<Scaleform::GFx::Value (*)(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int),std::allocator<int>,Scaleform::GFx::Value,extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int>::`vftable';
      }
      if ( extension::GFn_SetControllerSetting )
      {
        *(_QWORD *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[25][216] = extension::GFn_SetControllerSetting;
        *(_QWORD *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[26][8] = &extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[25][208];
        *(_QWORD *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[25][208] = &std::_Func_impl<Scaleform::GFx::Value (*)(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int),std::allocator<int>,Scaleform::GFx::Value,extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int>::`vftable';
      }
      if ( extension::GFn_SetGameOption )
      {
        *(_QWORD *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[26][32] = extension::GFn_SetGameOption;
        *(_QWORD *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[26][80] = &extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[26][24];
        *(_QWORD *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[26][24] = &std::_Func_impl<Scaleform::GFx::Value (*)(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int),std::allocator<int>,Scaleform::GFx::Value,extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int>::`vftable';
      }
      if ( extension::GFn_SetSystemOption )
      {
        *(_QWORD *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[26][104] = extension::GFn_SetSystemOption;
        *(_QWORD *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[26][152] = &extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[26][96];
        *(_QWORD *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[26][96] = &std::_Func_impl<Scaleform::GFx::Value (*)(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int),std::allocator<int>,Scaleform::GFx::Value,extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int>::`vftable';
      }
      if ( extension::GFn_SetReplayAutoSave )
      {
        *(_QWORD *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[26][176] = extension::GFn_SetReplayAutoSave;
        *(_QWORD *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[26][224] = &extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[26][168];
        *(_QWORD *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[26][168] = &std::_Func_impl<Scaleform::GFx::Value (*)(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int),std::allocator<int>,Scaleform::GFx::Value,extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int>::`vftable';
      }
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        (std::pair<char const *,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> > *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[26][232],
        (const char (*)[15])"SetAutoActing",
        extension::GFn_SetAutoActing);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        (std::pair<char const *,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> > *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[27][48],
        (const char (*)[15])"SetCommentGaya",
        extension::GFn_SetCommentGaya);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        (std::pair<char const *,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> > *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[27][120],
        (const char (*)[15])"SetButtonConfig",
        extension::GFn_SetButtonConfig);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        (std::pair<char const *,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> > *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[27][192],
        (const char (*)[15])"SetOperationMapper",
        extension::GFn_SetOperationMapper);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        (std::pair<char const *,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> > *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[28][8],
        (const char (*)[15])"SetMasterVolume",
        extension::GFn_SetMasterVolume);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        (std::pair<char const *,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> > *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[28][80],
        (const char (*)[15])"SetBGMVolume",
        extension::GFn_SetBGMVolume);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        (std::pair<char const *,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> > *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[28][152],
        (const char (*)[15])"SetSEVolume",
        extension::GFn_SetSEVolume);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        (std::pair<char const *,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> > *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[28][224],
        (const char (*)[15])"SetCharaVoiceVolume",
        extension::GFn_SetCharaVoiceVolume);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        (std::pair<char const *,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> > *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[29][40],
        (const char (*)[15])"SetSystemVoiceVolume",
        extension::GFn_SetSystemVoiceVolume);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        (std::pair<char const *,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> > *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[29][112],
        (const char (*)[15])"SetAmbienceVolume",
        extension::GFn_SetAmbienceVolume);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        (std::pair<char const *,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> > *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[29][184],
        (const char (*)[15])"SetPadVolume",
        extension::GFn_SetPadVolume);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        (std::pair<char const *,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> > *)extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[30],
        (const char (*)[15])"SetDisplayOption",
        extension::GFn_SetDisplayOption);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        (std::pair<char const *,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> > *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[30][72],
        (const char (*)[15])"SaveDisplayOption",
        extension::GFn_SaveDisplayOption);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        (std::pair<char const *,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> > *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[30][144],
        (const char (*)[15])"SetGraphicsOption",
        extension::GFn_SetGraphicsOption);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        (std::pair<char const *,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> > *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[30][216],
        (const char (*)[15])"SetDefaultGameOption",
        extension::GFn_SetDefaultGameOption);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        (std::pair<char const *,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> > *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[31][32],
        (const char (*)[15])"SetDefaultSystemOption",
        extension::GFn_SetDefaultSystemOption);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        (std::pair<char const *,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> > *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[31][104],
        (const char (*)[15])"SetDefaultSoundOption",
        extension::GFn_SetDefaultSoundOption);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        (std::pair<char const *,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> > *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[31][176],
        (const char (*)[15])"SetDefaultDisplayOption",
        extension::GFn_SetDefaultDisplayOption);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        (std::pair<char const *,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> > *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[31][248],
        (const char (*)[15])"SetDefaultGraphicsOption",
        extension::GFn_SetDefaultGraphicsOption);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A62D28,
        (const char (*)[15])"CallSaveDataAsync",
        extension::GFn_CallSaveDataAsync);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A62D70,
        (const char (*)[15])"CallSaveDataAsyncReplay",
        extension::GFn_CallSaveDataAsyncReplay);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A62DB8,
        (const char (*)[15])"PlaySoundSE",
        extension::GFn_PlaySoundSE);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A62E00,
        (const char (*)[15])"PlaySoundSEByName",
        extension::GFn_PlaySoundSEByName);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A62E48,
        (const char (*)[15])"PlaySoundSEByNamePos",
        extension::GFn_PlaySoundSEByNamePos);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A62E90,
        (const char (*)[15])"PlaySoundBGM",
        extension::GFn_PlaySoundBGM);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A62ED8,
        (const char (*)[15])"PlaySoundBGMByName",
        extension::GFn_PlaySoundBGMByName);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A62F20,
        (const char (*)[15])"RequestPlayBGMUtil",
        extension::GFn_RequestPlayBGMUtil);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A62F68,
        (const char (*)[15])"StopBGM",
        extension::GFn_StopBGM);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A62FB0,
        v2,
        v3);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A62FF8,
        (const char (*)[15])"GetDevMode",
        extension::GFn_GetDevMode);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A63040,
        (const char (*)[15])"GetGameParam",
        extension::GFn_GetGameParam);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A63088,
        (const char (*)[15])"GetUserCount",
        extension::GFn_GetUserCount);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A630D0,
        (const char (*)[15])"GetUserNameToBC",
        extension::GFn_GetUserNameToBC);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A63118,
        (const char (*)[15])"SearchText",
        extension::GFn_SearchText);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A63160,
        (const char (*)[15])"GetText",
        extension::GFn_GetText);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A631A8,
        (const char (*)[15])"SetExchangedUserData",
        extension::GFn_SetExchangedUserData);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A631F0,
        (const char (*)[15])"ClearExchangedUserData",
        extension::GFn_ClearExchangedUserData);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A63238,
        (const char (*)[15])"GetGameOptionParamArray",
        extension::GFn_GetGameOptionParamArray);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A63280,
        (const char (*)[15])"GetSystemOptionParamArray",
        extension::GFn_GetSystemOptionParamArray);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A632C8,
        (const char (*)[15])"GetSoundOptionParamArray",
        extension::GFn_GetSoundOptionParamArray);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A63310,
        (const char (*)[15])"GetDisplayOptionParamArray",
        extension::GFn_GetDisplayOptionParamArray);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A63358,
        (const char (*)[15])"GetGraphicsOptionParamArray",
        extension::GFn_GetGraphicsOptionParamArray);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A633A0,
        (const char (*)[15])"GetButtonConfigParamArray",
        extension::GFn_GetButtonConfigParamArray);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A633E8,
        (const char (*)[15])"GetHudConfig",
        extension::GFn_GetHudConfig);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A63430,
        (const char (*)[15])"SetHudPosition",
        extension::GFn_SetHudPosition);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A63478,
        (const char (*)[15])"StartHudAdjust",
        extension::GFn_StartHudAdjust);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A634C0,
        (const char (*)[15])"FinishHudAdjust",
        extension::GFn_FinishHudAdjust);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A63508,
        (const char (*)[15])"GetTrainingSettingArray",
        extension::GFn_GetTrainingSettingArray);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A63550,
        (const char (*)[15])"GetTrainingRecordSetting",
        extension::GFn_GetTrainingRecordSetting);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A63598,
        (const char (*)[15])"SetTrainingRestart",
        extension::GFn_SetTrainingRestart);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A635E0,
        (const char (*)[15])"GetTouchPadSetting",
        extension::GFn_GetTouchPadSetting);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A63628,
        (const char (*)[15])"SetTouchPadSetting",
        extension::GFn_SetTouchPadSetting);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A63670,
        (const char (*)[15])"GetPlayerRecord",
        extension::GFn_GetPlayerRecord);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A636B8,
        v4,
        v5);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A63700,
        (const char (*)[15])"GetPlayerRecordOnlineRanking",
        extension::GFn_GetPlayerRecordOnlineRanking);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A63748,
        (const char (*)[15])"GetStoryScoreRanking",
        extension::GFn_GetStoryScoreRanking);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A63790,
        (const char (*)[15])"GetTimeAttackRanking",
        extension::GFn_GetTimeAttackRanking);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A637D8,
        (const char (*)[15])"GetSurvivalRanking",
        extension::GFn_GetSurvivalRanking);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A63820,
        (const char (*)[15])"GetMyAntenna",
        extension::GFn_GetMyAntenna);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A63868,
        (const char (*)[15])"GetPlayerIcon",
        extension::GFn_GetPlayerIcon);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A638B0,
        (const char (*)[15])"GetPlayerTitle",
        extension::GFn_GetPlayerTitle);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A638F8,
        (const char (*)[15])"GetPlayerNetLosePub",
        extension::GFn_GetPlayerNetLosePub);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A63940,
        (const char (*)[15])"GetPlayerNetDrawPub",
        extension::GFn_GetPlayerNetDrawPub);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A63988,
        (const char (*)[15])"GetPlayerNetRatePub",
        extension::GFn_GetPlayerNetRatePub);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A639D0,
        (const char (*)[15])"GetPlayerArea",
        extension::GFn_GetPlayerArea);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A63A18,
        (const char (*)[15])"GetPlayerRank",
        extension::GFn_GetPlayerRank);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A63A60,
        (const char (*)[15])"GetPlayerRankPoint",
        extension::GFn_GetPlayerRankPoint);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A63AA8,
        (const char (*)[15])"GetPlayerNetWin",
        extension::GFn_GetPlayerNetWin);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A63AF0,
        (const char (*)[15])"GetPlayerNetLose",
        extension::GFn_GetPlayerNetLose);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A63B38,
        (const char (*)[15])"GetPlayerNetWins",
        extension::GFn_GetPlayerNetWins);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A63B80,
        (const char (*)[15])"GetPlayerNetMaxWins",
        extension::GFn_GetPlayerNetMaxWins);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A63BC8,
        (const char (*)[15])"GetPlayerNetDraw",
        extension::GFn_GetPlayerNetDraw);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A63C10,
        (const char (*)[15])"GetPlayerWinRate",
        extension::GFn_GetPlayerWinRate);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A63C58,
        (const char (*)[15])"GetPlayerEndRate",
        extension::GFn_GetPlayerEndRate);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A63CA0,
        (const char (*)[15])"GetMyProfile",
        extension::GFn_GetMyProfile);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A63CE8,
        (const char (*)[15])"GetIconEnableFlag",
        extension::GFn_GetIconEnableFlag);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A63D30,
        (const char (*)[15])"GetIconNewFlag",
        extension::GFn_GetIconNewFlag);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A63D78,
        (const char (*)[15])"ClearIconNewFlag",
        extension::GFn_ClearIconNewFlag);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A63DC0,
        (const char (*)[15])"GetNetworkTitleEnable",
        extension::GFn_GetNetworkTitleEnable);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A63E08,
        (const char (*)[15])"GetNetworkTitleNew",
        extension::GFn_GetNetworkTitleNew);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A63E50,
        (const char (*)[15])"ClearNetworkTitleNew",
        extension::GFn_ClearNetworkTitleNew);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A63E98,
        (const char (*)[15])"SetMyProfile",
        extension::GFn_SetMyProfile);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A63EE0,
        (const char (*)[15])"GetGalleryLock",
        extension::GFn_GetGalleryLock);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A63F28,
        (const char (*)[15])"GetGalleryNew",
        extension::GFn_GetGalleryNew);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A63F70,
        (const char (*)[15])"ClearGalleryNew",
        extension::GFn_ClearGalleryNew);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A63FB8,
        (const char (*)[15])"UnlockGallery",
        extension::GFn_UnlockGallery);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A64000,
        (const char (*)[15])"GetTutorialFlag",
        extension::GFn_GetTutorialFlag);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A64048,
        (const char (*)[15])"GetTutorialNo",
        extension::GFn_GetTutorialNo);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A64090,
        (const char (*)[15])"GetMissionTrialFlag",
        extension::GFn_GetMissionTrialFlag);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A640D8,
        (const char (*)[15])"GetMissionTrialNo",
        extension::GFn_GetMissionTrialNo);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A64120,
        (const char (*)[15])"GetMissionTrialData",
        (Scaleform::GFx::Value *(__fastcall *)(Scaleform::GFx::Value *, extension::GFXIMovieContext *, const Scaleform::GFx::Value *, unsigned int))extension::GFn_GetMissionTrialData);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A64168,
        (const char (*)[15])"GetMissionTrialCount",
        (Scaleform::GFx::Value *(__fastcall *)(Scaleform::GFx::Value *, extension::GFXIMovieContext *, const Scaleform::GFx::Value *, unsigned int))extension::GFn_GetMissionTrialCount);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A641B0,
        (const char (*)[15])"IsCheatMode",
        extension::GFn_StartChatMessageInput);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A641F8,
        (const char (*)[15])"GetMyFavoriteStageNo",
        extension::GFn_GetMyFavoriteStageNo);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A64240,
        (const char (*)[15])"GetMyFavoriteStage",
        extension::GFn_GetMyFavoriteStage);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A64288,
        (const char (*)[15])"GetMyFavoriteSingleNo",
        extension::GFn_GetMyFavoriteSingleNo);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A642D0,
        (const char (*)[15])"GetMyFavoriteSingle",
        extension::GFn_GetMyFavoriteSingle);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A64318,
        (const char (*)[15])"GetMyFavoriteSingleColor",
        extension::GFn_GetMyFavoriteSingleColor);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A64360,
        (const char (*)[15])"GetMyFavoriteSingleCostume",
        extension::GFn_GetMyFavoriteSingleCostume);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A643A8,
        (const char (*)[15])"GetMyFavoriteTeamNo",
        extension::GFn_GetMyFavoriteTeamNo);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A643F0,
        (const char (*)[15])"GetMyFavoriteTeam",
        extension::GFn_GetMyFavoriteTeam);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A64438,
        (const char (*)[15])"GetMyFavoriteTeamColor",
        extension::GFn_GetMyFavoriteTeamColor);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A64480,
        (const char (*)[15])"GetMyFavoriteTeamCostume",
        extension::GFn_GetMyFavoriteTeamCostume);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A644C8,
        (const char (*)[15])"GetCharacterRecord",
        extension::GFn_GetCharacterRecord);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A64510,
        (const char (*)[15])"SetMyFavoriteStageNo",
        extension::GFn_SetMyFavoriteStageNo);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A64558,
        (const char (*)[15])"SetMyFavoriteSingleNo",
        extension::GFn_SetMyFavoriteSingleNo);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A645A0,
        (const char (*)[15])"SetMyFavoriteTeamNo",
        extension::GFn_SetMyFavoriteTeamNo);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A645E8,
        (const char (*)[15])"IsEditMode",
        extension::GFn_IsEditMode);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A64630,
        (const char (*)[15])"OpenIMEDialog",
        extension::GFn_OpenIMEDialog);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A64678,
        (const char (*)[15])"IsOpenIMEDialog",
        extension::GFn_IsOpenIMEDialog);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A646C0,
        (const char (*)[15])"GetCharacterRank",
        extension::GFn_GetCharacterRank);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A64708,
        (const char (*)[15])"IsEnableCharacter",
        extension::GFn_IsEnableCharacter);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A64750,
        (const char (*)[15])"GetMyRoomName",
        extension::GFn_GetMyRoomName);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A64798,
        (const char (*)[15])"SetMyRoomName",
        extension::GFn_SetMyRoomName);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A647E0,
        (const char (*)[15])"GetReplayData",
        extension::GFn_GetReplayData);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A64828,
        (const char (*)[15])"GetReplayUserID",
        extension::GFn_GetReplayUserID);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A64870,
        (const char (*)[15])"PlayStartReplay",
        extension::GFn_PlayStartReplay);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A648B8,
        (const char (*)[15])"DownloadStartReplay",
        extension::GFn_DownloadStartReplay);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A64900,
        (const char (*)[15])"RequestOnlineReplayData",
        extension::GFn_RequestOnlineReplayData);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A64948,
        (const char (*)[15])"GetDownloadReplayData",
        extension::GFn_GetDownloadReplayData);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A64990,
        (const char (*)[15])"GetOnlineReplayData",
        extension::GFn_GetOnlineReplayData);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A649D8,
        (const char (*)[15])"SetReplayLockFlag",
        extension::GFn_SetReplayLockFlag);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A64A20,
        (const char (*)[15])"SetReplayOpenFlag",
        extension::GFn_SetReplayOpenFlag);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A64A68,
        (const char (*)[15])"DeleteReplayData",
        extension::GFn_DeleteReplayData);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A64AB0,
        (const char (*)[15])"SetHudPrintStatus",
        extension::GFn_SetHudPrintStatus);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A64AF8,
        (const char (*)[15])"SetKeyDataStatus",
        extension::GFn_SetKeyDataStatus);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A64B40,
        (const char (*)[15])"SetKeyDataPrint",
        extension::GFn_SetKeyDataPrint);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A64B88,
        (const char (*)[15])"SetAttackDataStatus",
        extension::GFn_SetAttackDataStatus);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A64BD0,
        (const char (*)[15])"SetOnlineIDStatus",
        (Scaleform::GFx::Value *(__fastcall *)(Scaleform::GFx::Value *, extension::GFXIMovieContext *, const Scaleform::GFx::Value *, unsigned int))extension::GFn_SetOnlineIDStatus);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A64C18,
        (const char (*)[15])"GetOnlineIDStatus",
        extension::GFn_GetOnlineIDStatus);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A64C60,
        (const char (*)[15])"SetVoiceChatStatus",
        extension::GFn_SetVoiceChatStatus);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A64CA8,
        (const char (*)[15])"GetVoiceChatStatus",
        extension::GFn_GetVoiceChatStatus);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A64CF0,
        (const char (*)[15])"SetTrainingSettingArray",
        extension::GFn_SetTrainingSettingArray);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A64D38,
        (const char (*)[15])"SetTrainingRecordSetting",
        extension::GFn_SetTrainingRecordSetting);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A64D80,
        (const char (*)[15])"SetOnlineTrainingSetting",
        extension::GFn_SetOnlineTrainingSetting);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A64DC8,
        (const char (*)[15])"SetTrainingSettingDefault",
        extension::GFn_SetTrainingSettingDefault);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A64E10,
        (const char (*)[15])"SetOnlineTrainingSettingDefault",
        extension::GFn_SetOnlineTrainingSettingDefault);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A64E58,
        (const char (*)[15])"IsValidKeyRecordData",
        extension::GFn_IsValidKeyRecordData);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A64EA0,
        (const char (*)[15])"SetTrainingController",
        extension::GFn_SetTrainingController);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A64EE8,
        (const char (*)[15])"SetContinueBonus",
        extension::GFn_SetContinueBonus);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A64F30,
        (const char (*)[15])"SetSkipGrade",
        extension::GFn_SetSkipGrade);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A64F78,
        (const char (*)[15])"SetRoomSettingRank",
        extension::GFn_SetRoomSettingRank);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A64FC0,
        (const char (*)[15])"GetRoomSettingRank",
        extension::GFn_GetRoomSettingRank);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A65008,
        (const char (*)[15])"SetRoomSettingFreeTeam",
        extension::GFn_SetRoomSettingFreeTeam);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A65050,
        (const char (*)[15])"GetRoomSettingFreeTeam",
        extension::GFn_GetRoomSettingFreeTeam);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A65098,
        (const char (*)[15])"SetRoomSettingFreeSingle",
        extension::GFn_SetRoomSettingFreeSingle);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A650E0,
        (const char (*)[15])"GetRoomSettingFreeSingle",
        extension::GFn_GetRoomSettingFreeSingle);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A65128,
        (const char (*)[15])"SetRoomSettingFreeParty",
        extension::GFn_SetRoomSettingFreeParty);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A65170,
        (const char (*)[15])"GetRoomSettingFreeParty",
        extension::GFn_GetRoomSettingFreeParty);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A651B8,
        (const char (*)[15])"SetRoomSettingTraining",
        extension::GFn_SetRoomSettingTraining);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A65200,
        (const char (*)[15])"GetRoomSettingTraining",
        extension::GFn_GetRoomSettingTraining);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A65248,
        (const char (*)[15])"SetSearchSettingRank",
        extension::GFn_SetSearchSettingRank);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A65290,
        (const char (*)[15])"GetSearchSettingRank",
        extension::GFn_GetSearchSettingRank);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A652D8,
        (const char (*)[15])"SetSearchSettingFreeTeam",
        extension::GFn_SetSearchSettingFreeTeam);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A65320,
        (const char (*)[15])"GetSearchSettingFreeTeam",
        extension::GFn_GetSearchSettingFreeTeam);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A65368,
        (const char (*)[15])"SetSearchSettingFreeSingle",
        extension::GFn_SetSearchSettingFreeSingle);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A653B0,
        (const char (*)[15])"GetSearchSettingFreeSingle",
        extension::GFn_GetSearchSettingFreeSingle);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A653F8,
        (const char (*)[15])"SetSearchSettingFreeParty",
        extension::GFn_SetSearchSettingFreeParty);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A65440,
        (const char (*)[15])"GetSearchSettingFreeParty",
        extension::GFn_GetSearchSettingFreeParty);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A65488,
        (const char (*)[15])"SetSearchSettingTraining",
        extension::GFn_SetSearchSettingTraining);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A654D0,
        (const char (*)[15])"GetSearchSettingTraining",
        extension::GFn_GetSearchSettingTraining);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A65518,
        (const char (*)[15])"GetRoomInfoArray",
        extension::GFn_GetRoomInfoArray);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A65560,
        (const char (*)[15])"JoinRoom",
        extension::GFn_JoinRoom);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A655A8,
        (const char (*)[15])"ResearchRoom",
        extension::GFn_ResearchRoom);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A655F0,
        (const char (*)[15])"GetRoomInfo",
        extension::GFn_GetRoomInfo);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A65638,
        (const char (*)[15])"GetRoomTableBattleType",
        extension::GFn_GetRoomTableBattleType);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A65680,
        (const char (*)[15])"GetMeInfo",
        extension::GFn_GetMeInfo);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A656C8,
        (const char (*)[15])"GetRoomMemberInfo",
        extension::GFn_GetRoomMemberInfo);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A65710,
        (const char (*)[15])"ShowRoomPlayerPSN",
        extension::GFn_ShowRoomPlayerPSN);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A65758,
        (const char (*)[15])"ShowLeaderboardPlayerPSN",
        extension::GFn_ShowLeaderboardPlayerPSN);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A657A0,
        (const char (*)[15])"AcceptRankMatchPlayer",
        extension::GFn_AcceptRankMatchPlayer);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A657E8,
        (const char (*)[15])"KickRankMatchPlayer",
        extension::GFn_KickRankMatchPlayer);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A65830,
        (const char (*)[15])"KickRoomPlayer",
        extension::GFn_KickRoomPlayer);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A65878,
        (const char (*)[15])"RoomLeave",
        extension::GFn_RoomLeave);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A658C0,
        (const char (*)[15])"RoomSeatSit",
        extension::GFn_RoomSeatSit);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A65908,
        (const char (*)[15])"RoomSeatLeave",
        extension::GFn_RoomSeatLeave);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A65950,
        (const char (*)[15])"RoomSeatBattleReady",
        extension::GFn_RoomSeatBattleReady);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A65998,
        (const char (*)[15])"RoomSeatBattleReadyCancel",
        extension::GFn_RoomSeatBattleReadyCancel);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A659E0,
        (const char (*)[15])"RoomTableBattleTypeChange",
        extension::GFn_RoomTableBattleTypeChange);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A65A28,
        (const char (*)[15])"StartChatMessageInput",
        extension::GFn_StartChatMessageInput);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A65A70,
        (const char (*)[15])"SendChatMessage",
        extension::GFn_SendChatMessage);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A65AB8,
        (const char (*)[15])"SendChatMessageInBattle",
        extension::GFn_SendChatMessageInBattle);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A65B00,
        (const char (*)[15])"CanSendMessage",
        extension::GFn_CanSendMessage);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A65B48,
        (const char (*)[15])"SetPlayerMuteFlag",
        extension::GFn_SetPlayerMuteFlag);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A65B90,
        (const char (*)[15])"SetAllMuteFlag",
        extension::GFn_SetAllMuteFlag);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A65BD8,
        (const char (*)[15])"RoomInviteFriend",
        extension::GFn_RoomInviteFriend);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A65C20,
        (const char (*)[15])"GetBattleMemberData",
        extension::GFn_GetBattleMemberData);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A65C68,
        (const char (*)[15])"RequestLeaderBoardRanking",
        extension::GFn_RequestLeaderBoardRanking);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A65CB0,
        (const char (*)[15])"GetLeaderBoardRanking",
        extension::GFn_GetLeaderBoardRanking);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A65CF8,
        (const char (*)[15])"GetFightingList",
        extension::GFn_GetFightingList);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A65D40,
        (const char (*)[15])"GetFightingBonus",
        extension::GFn_GetFightingBonus);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A65D88,
        (const char (*)[15])"FightingListShowPSN",
        extension::GFn_FightingListShowPSN);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A65DD0,
        (const char (*)[15])"IsGettingFightBonusNow",
        extension::GFn_IsGettingFightBonusNow);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A65E18,
        (const char (*)[15])"HideFlare",
        extension::GFn_HideFlare);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A65E60,
        (const char (*)[15])"ShowFlare",
        extension::GFn_ShowFlare);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A65EA8,
        (const char (*)[15])"FadeOut",
        extension::GFn_FadeOut);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A65EF0,
        (const char (*)[15])"SoundIsLoadComplete",
        extension::GFn_SoundIsLoadComplete);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A65F38,
        (const char (*)[15])"GetCharacterBankLength",
        extension::GFn_GetCharacterBankLength);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A65F80,
        (const char (*)[15])"GetCharacterSoundName",
        extension::GFn_GetCharacterSoundName);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A65FC8,
        (const char (*)[15])"PlayCharacterSoundName",
        extension::GFn_PlayCharacterSoundName);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A66010,
        (const char (*)[15])"PlayCharacterSound",
        extension::GFn_PlayCharacterSound);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A66058,
        (const char (*)[15])"LoadCharacterBank",
        extension::GFn_LoadCharacterBank);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A660A0,
        (const char (*)[15])"LoadAnnounceBank",
        extension::GFn_LoadAnnounceBank);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A660E8,
        (const char (*)[15])"PlayMovie",
        extension::GFn_PlayMovie);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A66130,
        (const char (*)[15])"StopMovie",
        extension::GFn_StopMovie);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A66178,
        (const char (*)[15])"ContinuePlayBGMUtil",
        extension::GFn_ContinuePlayBGMUtil);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A661C0,
        (const char (*)[15])"IsPlayMovie",
        extension::GFn_IsPlayMovie);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A66208,
        (const char (*)[15])"PauseMovieStack",
        extension::GFn_PauseMovieStack);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A66250,
        (const char (*)[15])"ResumeMovieStack",
        extension::GFn_ResumeMovieStack);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A66298,
        (const char (*)[15])"PauseMovieProxy",
        extension::GFn_PauseMovieProxy);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A662E0,
        (const char (*)[15])"ResumeMovieProxy",
        extension::GFn_ResumeMovieProxy);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A66328,
        (const char (*)[15])"VisitMyProfile",
        extension::GFn_VisitMyProfile);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A66370,
        (const char (*)[15])"VisitProfile",
        extension::GFn_VisitProfile);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A663B8,
        (const char (*)[15])"RequestOnlineSaveData",
        extension::GFn_RequestOnlineSaveData);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A66400,
        (const char (*)[15])"LoadOnlineSavedataFlag",
        extension::GFn_LoadOnlineSavedataFlag);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A66448,
        (const char (*)[15])"BattleCaharaNo",
        extension::GFn_BattleCaharaNo);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A66490,
        (const char (*)[15])"IsParentalControlChat",
        extension::GFn_IsParentalControlChat);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A664D8,
        (const char (*)[15])"IsParentalControlUgc",
        extension::GFn_IsParentalControlUgc);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A66520,
        (const char (*)[15])"IsCreateRoom",
        extension::GFn_IsCreateRoom);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A66568,
        (const char (*)[15])"IsEntryNow",
        extension::GFn_IsEntryNow);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A665B0,
        (const char (*)[15])"IsRoomIn",
        extension::GFn_IsRoomIn);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A665F8,
        (const char (*)[15])"IsTrainingWait",
        extension::GFn_IsTrainingWait);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A66640,
        (const char (*)[15])"RequestEntryOff",
        extension::GFn_RequestEntryOff);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A66688,
        (const char (*)[15])"ChangeMainMenuBGM",
        extension::GFn_ChangeMainMenuBGM);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A666D0,
        (const char (*)[15])"GetStoryWinCount",
        extension::GFn_GetStoryWinCount);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A66718,
        (const char (*)[15])"TutorialMessageEnd",
        extension::GFn_TutorialMessageEnd);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A66760,
        (const char (*)[15])"SetHandicap",
        extension::GFn_SetHandicap);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A667A8,
        (const char (*)[15])"OpenSystemMessage",
        extension::GFn_OpenSystemMessage);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A667F0,
        (const char (*)[15])"CloseSystemMessage",
        extension::GFn_CloseSystemMessage);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A66838,
        (const char (*)[15])"CallbackSystemMessage",
        (Scaleform::GFx::Value *(__fastcall *)(Scaleform::GFx::Value *, extension::GFXIMovieContext *, const Scaleform::GFx::Value *, unsigned int))extension::GFn_CallbackSystemMessage);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A66880,
        (const char (*)[15])"GetSystemMessageCursor",
        extension::GFn_GetSystemMessageCursor);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A668C8,
        (const char (*)[15])"AllDeleteNotification",
        extension::GFn_AllDeleteNotification);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A66910,
        (const char (*)[15])"IsSystemMessageOpen",
        extension::GFn_IsSystemMessageOpen);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A66958,
        (const char (*)[15])"IsItemDisplay",
        extension::GFn_IsItemDisplay);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A669A0,
        (const char (*)[15])"IsFirstNoticeFlag",
        extension::GFn_IsFirstNoticeFlag);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A669E8,
        (const char (*)[15])"SetFirstNoticeFlag",
        extension::GFn_SetFirstNoticeFlag);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A66A30,
        (const char (*)[15])"SetResultTransitionMenu",
        extension::GFn_SetResultTransitionMenu);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A66A78,
        (const char (*)[15])"MemberSelectStart",
        extension::GFn_MemberSelectStart);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A66AC0,
        (const char (*)[15])"CheckDebugValue",
        extension::GFn_IsPlayTogether);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A66B08,
        (const char (*)[15])"IsPlayGo",
        extension::GFn_IsPlayTogether);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A66B50,
        (const char (*)[15])"GetStatusNetwork",
        extension::GFn_GetStatusNetwork);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A66B98,
        (const char (*)[15])"GetNatType",
        extension::GFn_StartChatMessageInput);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A66BE0,
        (const char (*)[15])"UnescapeSpecialHTML",
        extension::GFn_UnescapeSpecialHTML);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A66C28,
        (const char (*)[15])"IsChina",
        extension::GFn_IsPlayTogether);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A66C70,
        (const char (*)[15])"IsChinaDummy",
        extension::GFn_IsPlayTogether);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A66CB8,
        (const char (*)[15])"GetTitleName",
        extension::GFn_GetTitleName);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A66D00,
        (const char (*)[15])"IsEnableLanguage",
        extension::GFn_IsEnableLanguage);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A66D48,
        (const char (*)[15])"CallMakeSaveData",
        extension::GFn_StartChatMessageInput);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A66D90,
        (const char (*)[15])"IsDemoVersion",
        extension::GFn_IsPlayTogether);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A66DD8,
        (const char (*)[15])"BGMVolumeModulation",
        extension::GFn_BGMVolumeModulation);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A66E20,
        (const char (*)[15])"SEVolumeModulation",
        extension::GFn_SEVolumeModulation);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A66E68,
        (const char (*)[15])"IsPlayTogether",
        extension::GFn_IsPlayTogether);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A66EB0,
        (const char (*)[15])"GetPlayTogetherSlot",
        extension::GFn_StartChatMessageInput);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A66EF8,
        (const char (*)[15])"EndOfMovie",
        extension::GFn_StopMovie);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A66F40,
        (const char (*)[15])"StartEasyCommand",
        extension::GFn_StartEasyCommand);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A66F88,
        (const char (*)[15])"IsEnableMyFavoriteTeam",
        extension::GFn_IsEnableMyFavoriteTeam);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A66FD0,
        (const char (*)[15])"IsEnableMyFavoriteTeamIndex",
        extension::GFn_IsEnableMyFavoriteTeamIndex);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A67018,
        (const char (*)[15])"IsEnableMyFavoriteSingle",
        extension::GFn_IsEnableMyFavoriteSingle);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A67060,
        (const char (*)[15])"IsEnableCharaAndCostume",
        extension::GFn_IsEnableCharaAndCostume);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A670A8,
        (const char (*)[15])"GetPlatform",
        extension::GFn_GetPlatform);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A670F0,
        (const char (*)[15])"ApplicationQuit",
        extension::GFn_ApplicationQuit);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A67138,
        (const char (*)[15])"GetLastInputMethod",
        extension::GFn_GetLastInputMethod);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A67180,
        (const char (*)[15])"GetLastInputDeviceHWType",
        extension::GFn_GetLastInputDeviceHWType);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A671C8,
        (const char (*)[15])"GetOrderSelectButton",
        extension::GFn_GetOrderSelectButton);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A67210,
        (const char (*)[15])"SetEnableInputSpecPerController",
        extension::GFn_SetEnableInputSpecPerController);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A67258,
        (const char (*)[15])"SetIgnoreInputForNFrames",
        extension::GFn_SetIgnoreInputForNFrames);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A672A0,
        (const char (*)[15])"GetAvailableInputDevices",
        extension::GFn_GetAvailableInputDevices);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A672E8,
        (const char (*)[15])"GetPlayerSelectedDevice",
        extension::GFn_GetPlayerSelectedDevice);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A67330,
        (const char (*)[15])"SendPlayerSelectedDevice",
        extension::GFn_SendPlayerSelectedDevice);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A67378,
        (const char (*)[15])"GetSerializedDefaultBindings",
        extension::GFn_GetSerializedDefaultBindings);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A673C0,
        (const char (*)[15])"GetSerializedBindings",
        extension::GFn_GetSerializedBindings);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A67408,
        (const char (*)[15])"SendSerializedBindings",
        extension::GFn_SendSerializedBindings);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A67450,
        (const char (*)[15])"UpdateBrightnessOnly",
        extension::GFn_UpdateBrightnessOnly);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A67498,
        (const char (*)[15])"DebugLog",
        extension::GFn_IsPlayTogether);
      std::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>::pair<char const *,std::function<Scaleform::GFx::Value (extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)>>(
        &unk_140A674E0,
        (const char (*)[15])"Test",
        extension::GFn_Test);
      atexit(extension::InstallGFxInterface_::_2_::_dynamic_atexit_destructor_for__methods__);
      Init_thread_footer(&dword_140ACDDE4);
    }
  }
  v1 = extension::GFXIGameInterface::GlobalInterface();
  extension::GFXIGameInterface::installFunctions<299>(
    v1,
    (const std::pair<char const *,std::function<Scaleform::GFx::Value __cdecl(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int)> > (*)[299])&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[20][40]);
}

std::_Func_base<Scaleform::GFx::Value,extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int> *__fastcall std::_Func_impl<Scaleform::GFx::Value (*)(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int),std::allocator<int>,Scaleform::GFx::Value,extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int>::_Copy(
        std::_Func_impl<Scaleform::GFx::Value (__cdecl*)(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int),std::allocator<int>,Scaleform::GFx::Value,extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int> *this,
        void *_Where)
{
  if ( _Where )
  {
    *(_QWORD *)_Where = &std::_Func_impl<Scaleform::GFx::Value (*)(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int),std::allocator<int>,Scaleform::GFx::Value,extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int>::`vftable';
    *((_QWORD *)_Where + 1) = this->_Mypair._Myval2;
  }
  return (std::_Func_base<Scaleform::GFx::Value,extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int> *)_Where;
}

void __fastcall std::_Func_impl<Scaleform::GFx::Value (*)(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int),std::allocator<int>,Scaleform::GFx::Value,extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int>::_Delete_this(
        std::_Func_impl<`extension::InstallGFxInterface'::`2'::<unnamed_type_nothing>,std::allocator<int>,Scaleform::GFx::Value,extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int> *this,
        bool _Deallocate)
{
  this->__vftable = (std::_Func_base<Scaleform::GFx::Value,extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int>_vtbl *)&std::_Func_base<Scaleform::GFx::Value,extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int>::`vftable';
  if ( _Deallocate )
    operator delete(this);
}

Scaleform::GFx::Value *__fastcall std::_Func_impl<Scaleform::GFx::Value (*)(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int),std::allocator<int>,Scaleform::GFx::Value,extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int>::_Do_call(
        std::_Func_impl<Scaleform::GFx::Value (__cdecl*)(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int),std::allocator<int>,Scaleform::GFx::Value,extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int> *this,
        Scaleform::GFx::Value *result,
        extension::GFXIMovieContext *<_Args_0>,
        const Scaleform::GFx::Value **<_Args_1>,
        unsigned int *<_Args_2>)
{
  std::_Invoke_ret<Scaleform::GFx::Value,Scaleform::GFx::Value (*&)(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int),extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int>(
    result,
    (std::_Forced<Scaleform::GFx::Value,0>)result,
    &this->_Mypair._Myval2,
    <_Args_0>,
    <_Args_1>,
    <_Args_2>);
  return result;
}

std::_Align_type<double,64> *__fastcall __Get____Func_impl_U_unnamed_type_nothing___1__InstallGFxInterface_extension__YAXXZ_V__allocator_H_std__VValue_GFx_Scaleform__AEAVGFXIMovieContext_3_PEBV678_I_std__EEBAPEBXXZ(
        _Mtx_internal_imp_t *mtx)
{
  return &mtx->cs;
}

void ***__fastcall std::_Func_impl<Scaleform::GFx::Value (*)(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int),std::allocator<int>,Scaleform::GFx::Value,extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int>::_Target_type(
        std::_Func_impl<Scaleform::GFx::Value (__cdecl*)(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int),std::allocator<int>,Scaleform::GFx::Value,extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int> *this)
{
  return &Scaleform::GFx::Value (*)(extension::GFXIMovieContext &,Scaleform::GFx::Value const *,unsigned int) `RTTI Type Descriptor';
}

void __fastcall std::vector<AgPointer<AgThread>>::_Tidy(std::vector<AgPointer<AgUser>> *this)
{
  AgPointer<AgUser> *Myfirst; // rbx
  AgPointer<AgUser> *i; // rdi

  Myfirst = this->_Mypair._Myval2._Myfirst;
  if ( this->_Mypair._Myval2._Myfirst )
  {
    for ( i = this->_Mypair._Myval2._Mylast; Myfirst != i; ++Myfirst )
      AgPointer<AgUser>::~AgPointer<AgUser>((AgPointer<KOFApplication> *)Myfirst);
    std::_Wrap_alloc<std::allocator<AgDelegate1<AgSuspendingEvent const &,void>>>::deallocate(
      (std::_Wrap_alloc<std::allocator<AgDelegate1<AgUserUpdatedEvent const &,void> > > *)this,
      (AgDelegate1<AgUserUpdatedEvent const &,void> *)this->_Mypair._Myval2._Myfirst,
      this->_Mypair._Myval2._Myend - this->_Mypair._Myval2._Myfirst);
    this->_Mypair._Myval2._Myfirst = 0i64;
    this->_Mypair._Myval2._Mylast = 0i64;
    this->_Mypair._Myval2._Myend = 0i64;
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

AgPointer<AgController> *__fastcall Framework::GLManager::getGamepad(
        Framework::GLManager *this,
        AgPointer<AgController> *result,
        int userIndex)
{
  Framework::Input::ControllerContext::getGamepad(&this->m_controllerContext, result, userIndex);
  return result;
}

void __fastcall extension::gfxi_detail::TranslatorImpl::setExchangedUserData(
        extension::gfxi_detail::TranslatorImpl *this,
        const char *base,
        const char *change)
{
  int m_exchangedUserDataLength; // edi
  int i; // er10
  char *v8; // rax
  const char *v9; // r8
  int v10; // ecx
  int v11; // edx
  char *v12; // rcx
  char v13; // al
  __int64 v14; // rdx
  char v15; // al
  int v16; // eax

  m_exchangedUserDataLength = this->m_exchangedUserDataLength;
  for ( i = 0; i < m_exchangedUserDataLength; ++i )
  {
    v8 = this->m_exchangedUserDataBase[(__int64)i];
    v9 = (const char *)(base - v8);
    do
    {
      v10 = (unsigned __int8)v9[(_QWORD)v8];
      v11 = (unsigned __int8)*v8 - v10;
      if ( v11 )
        break;
      ++v8;
    }
    while ( v10 );
    if ( !v11 )
      break;
  }
  v12 = (char *)this + ((__int64)i << 6) - (_QWORD)base;
  do
  {
    v13 = *base;
    base[(_QWORD)v12 + 40] = *base;
    ++base;
  }
  while ( v13 );
  v14 = ((__int64)i << 8) - (_QWORD)change;
  do
  {
    v15 = *change;
    change[(_QWORD)this + v14 + 2088] = *change;
    ++change;
  }
  while ( v15 );
  v16 = this->m_exchangedUserDataLength;
  if ( i == v16 && v16 < 32 )
    this->m_exchangedUserDataLength = v16 + 1;
}

