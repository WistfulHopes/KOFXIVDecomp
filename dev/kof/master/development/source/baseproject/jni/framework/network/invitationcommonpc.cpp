#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filterparams.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charamaterialsettingformat.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thr/xthread"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_font.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actorcharabase.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/globalheapmemory.h"
#include "dev/kof/master/development/source/baseproject/jni/game/define/charabonedefine.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/fixmemory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessdefs.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exwaitcondition.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/colorholder.h"
#include "dev/silverware/git/sdk/input/agsdlmappingparser.h"
#include "dev/kof/master/development/source/baseproject/jni/game/system/battlecontroller.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/matrix4unaligned.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatapacked.h"
#include "dev/silverware/git/sdk/agcondition.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/quat_aos.h"
#include "dev/silverware/git/sdk/platforms/pc/system/agpcsysteminfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_pathdatapacker.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actionsystem.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_linebuffer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_highlight.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaactiondataformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloat.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charafilebase.h"
#include "dev/silverware/git/sdk/agreferencecountinl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_profiler.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_states.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogllight.h"
#include "dev/silverware/git/sdk/filesystem/agfile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/tga_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_statebag.h"
#include "dev/silverware/git/sdk/filesystem/agpath.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglcurve.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/cpusequencedataformat.h"
#include "dev/silverware/git/sdk/filesystem/agmount.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/trainingsetting.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_simplemeshcache.h"
#include "dev/silverware/git/sdk/filesystem/agdirectory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/fontprovider/render_fontproviderwinapi.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actionblackout.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actorchara.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/commandcheck.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_sse.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/restrictringbuffer.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/bitset"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/math.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steamclientpublic.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_types.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglsprite.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_bundle.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/materialshowcontrol.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic0.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/battleplayerinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloatmp.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/shot/actorshot.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglrender.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapemeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/jpeg_imagefile.h"
#include "dev/silverware/git/sdk/aghash.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treetext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefileutil.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charahitrectformat.h"
#include "dev/silverware/git/sdk/agstringutils.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglfog.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/variableheapmemorybase.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_docview.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/effect/actoreffect.h"
#include "dev/kof/master/development/source/baseproject/jni/game/network/chkdiscononlinesv.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_range.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdatalistmanager.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectcommon.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector2unaligned.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/mediamanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_hash.h"
#include "dev/kof/master/development/source/baseproject/jni/game/network/netmanager.h"
#include "dev/silverware/git/sdk/agmemorystream.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "dev/kof/master/development/source/baseproject/jni/game/network/leaderboard.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/audiopresenter.h"
#include "dev/silverware/git/sdk/agmemorypool.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_functions.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix4x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixpool.h"
#include "dev/silverware/git/sdk/input/agcontrollerbuttoncomponent.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "dev/silverware/git/sdk/agpointerinl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shader.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/effect.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charadataunify.h"
#include "dev/silverware/git/sdk/agstream.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_sgmlparser.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaattackdataformat.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/matchingsystem.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/physicalheapmemory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_context.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charadamagesettingformat.h"
#include "dev/silverware/git/sdk/agsemaphore.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_constants.h"
#include "dev/silverware/git/sdk/agsemaphore.inl"
#include "dev/silverware/git/sdk/agconditionvariable.h"
#include "dev/silverware/git/sdk/system/agsystemmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessgen.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/condition_variable"
#include "dev/silverware/git/sdk/system/agsystemconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treeshape.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessellator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "dev/silverware/git/sdk/agcondition.inl"
#include "dev/silverware/git/sdk/util/agjsondata.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exthread.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/deque"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitivebundle.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treecachenode.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treenode.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_loader.h"
#include "dev/silverware/git/sdk/system/agusermanager.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_movie.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cacheeffect.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_system.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphfitter.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/mediasound.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefile.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_operation.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/soundgroupdataformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_player.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogleffect.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/boolinvec.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/time.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_types.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_resource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdata/effectdata.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglshader.h"
#include "dev/silverware/git/sdk/util/agservice.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/jobmanager.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_stroker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/chartdata.h"
#include "dev/silverware/git/sdk/agthreadpool.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/sounddata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/dds_imagefile.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/unordered_map"
#include "program files (x86)/windows kits/8.1/include/shared/guiddef.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xhash"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_bank.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textmeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdata/effectappdata.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actorobject.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector3unaligned.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphparam.h"
#include "program files (x86)/windows kits/8.1/include/shared/stralign.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hairliner.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_filterdesc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_styledtext.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_typeinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix3x4.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/combomissiondataformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_core.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_queue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_fontmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitive.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/resourcemanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocaddr.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/chara/actoroption.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xfacet"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xutility"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_radixtree.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_twips.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/cameracheck.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_containers.h"
#include "dev/silverware/git/sdk/3rdparty/steam/isteamhtmlsurface.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/vec_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/list"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_wwhelper.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/freecameracheck.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/titlestoragesystem.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/boolinvec.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/refcountable.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/vectormath_aos.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "program files (x86)/windows kits/8.1/include/um/winnt.h"
#include "dev/silverware/git/sdk/agreferencedobjectinl.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/functional"
#include "dev/silverware/git/sdk/agpointer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_vertex.h"
#include "program files (x86)/windows kits/8.1/include/shared/basetsd.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstring"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/fontprovider/render_fontproviderhud.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_wstring.h"
#include "dev/silverware/git/sdk/agreferencedobject.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory0"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmodel.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/atomic"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/exception"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic.h"
#include "dev/kof/master/development/source/baseproject/jni/game/cpuseq/battlecpu.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaprojectdataformat.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/invitationcommonpc.h"
#include "dev/silverware/git/sdk/agconditionvariable.inl"
#include "dev/kof/master/development/source/baseproject/jni/game/cpuseq/sequencecontroller.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_exception.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charabasestatusformat.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/mat_aos.h"
#include "dev/silverware/git/sdk/agthread.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threadcheck.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/particledata.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/randommt.h"
#include "dev/silverware/git/sdk/agmutex.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/array"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textlayout.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_image.h"
#include "dev/silverware/git/sdk/agscopedlock.h"
#include "dev/silverware/git/sdk/agreferenceinl.h"
#include "dev/kof/master/development/source/baseproject/jni/game/system/battlesysteminfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steam_api_internal.h"
#include "dev/kof/master/development/source/ps4project/baseproject/pcutil/pccontrolsmanager.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/algorithm"
#include "dev/silverware/git/sdk/input/aginputmanager.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/system_error"
#include "dev/silverware/git/sdk/agsingleton.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector4unaligned.h"
#include "dev/silverware/git/sdk/agmutex.inl"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/stdexcept"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/utility"
#include "dev/kof/master/development/source/baseproject/jni/game/check/combomissionjudge.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglbone.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_hashkey.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/vecidx_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/iosfwd"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/map"
#include "dev/kof/master/development/source/baseproject/jni/game/check/combomissionattackeventlistener.h"
#include "program files (x86)/windows kits/8.1/include/um/winuser.h"
#include "dev/silverware/git/sdk/memory/agallocators.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/floatinvec.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtree"
#include "dev/silverware/git/sdk/input/agcontrollercomponent.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steam_api.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/tuple"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_screentoworld.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exlockable.h"
#include "dev/kof/master/development/source/ps4project/baseproject/pcutil/pcdummy.h"
#include "dev/silverware/git/sdk/util/agdelegate.h"
#include "dev/silverware/git/sdk/agreferencecount.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_new.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/quat_aos.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/inputkeyrecord.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_strokeraa.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_scale9grid.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraystaticbuff.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/floatinvec.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cxform.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/asyncjob.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actor.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstddef"
#include "dev/kof/master/development/source/baseproject/jni/game/util/fix32.h"
#include "dev/silverware/git/sdk/agvector2.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/type_traits"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/atomic_int.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmirror.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_vec64.h"
#include "dev/silverware/git/sdk/agmath.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/weapon/actorweapon.h"
#include "dev/silverware/git/sdk/input/agcontroller.h"
#include "dev/silverware/git/sdk/system/aguser.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/future_asset.h"
#include "dev/silverware/git/sdk/agstring.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_event.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_math.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/mutex"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_manager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/png_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_keycodes.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/commanddataformat.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/string"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/chrono"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/libcommon.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/vec_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/limits"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshkey.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixstate.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_gradients.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_rasterizer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_viewport.h"
#include "dev/silverware/git/sdk/3rdparty/steam/matchmakingtypes.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/ios"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocnum"
#include "dev/silverware/git/sdk/system/agsysteminfo.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xxatomic"
#include "dev/silverware/git/sdk/util/agservicecommand.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_drawableimage.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xiosbase"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hal.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_buffer.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocale"
#include "dev/kof/master/development/source/baseproject/jni/game/network/playtogether.h"
#include "program files (x86)/windows kits/8.1/include/um/winbase.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocinfo"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/mat_aos.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/savedatadefine.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_characterdef.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/debug/logging.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vector"
#include "dev/kof/master/development/source/baseproject/jni/game/check/operationmapper.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/bilinkable.h"
#include "dev/silverware/git/sdk/util/agdebugchannels.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/heapmemory.h"
#include "dev/silverware/git/sdk/util/agperformancecounter.h"
#include "dev/silverware/git/sdk/agclock.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/mutex.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thread"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filters.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/memory"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/rtc.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/matchingcommonpc.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/network/matchingsystem.cpp"

AgSingleton<AgSystemManager> * AgSingleton<AgSystemManager>::ms_instance; // 0x140ACAB18
void(*instance$initializer$)(); // 0x140740738
void(*??m_SessionId$initializer$@InvitationCommon@Fw@@0P6AXXZEA@@3P6AXXZEA)(); // 0x140740748
void(*??m_InviteRoomID$initializer$@InvitationCommon@Fw@@0P6AXXZEA@@3P6AXXZEA)(); // 0x140740740
std::piecewise_construct_t std::piecewise_construct; // 0x140889017
Fw::InvitationCommon::InvitationCommon(); // 0x140047B30
Fw::InvitationCommon::~InvitationCommon(); // 0x140047C30
void Fw::InvitationCommon::GetRoomSessionInfo(Fw::ROOM_SESSION_INFO * pInfo); // 0x140047D00
bool Fw::InvitationCommon::UpdateRecv(bool * pInvitationFlag); // 0x140048160//decompilation failure at 140ACAB18!
//decompilation failure at 140740738!
//decompilation failure at 140740748!
//decompilation failure at 140740740!
//decompilation failure at 140889017!
const AgString *__fastcall std::_Find_unchecked1<AgString const *,char [15]>(
        const AgString *_First,
        const AgString *_Last,
        const char (*_Val)[15],
        std::integral_constant<bool,0> __formal)
{
  const AgString *i; // rbx
  bool v6; // di
  AgString s2; // [rsp+28h] [rbp-20h] BYREF

  for ( i = _First; i != _Last; ++i )
  {
    AgString::AgString(&s2, "+connect_lobby", -1);
    v6 = operator==(i, &s2);
    AgString::~AgString(&s2);
    if ( v6 )
      break;
  }
  return i;
}

void __fastcall Fw::InvitationCommon::InvitationCommon(Fw::InvitationCommon *this)
{
  instance.m_steamcallback_OnGameJoinRequested.m_nCallbackFlags = 0;
  instance.m_steamcallback_OnGameJoinRequested.__vftable = (Fw::InvitationCommon::CCallbackInternal_OnGameJoinRequested_vtbl *)&Fw::InvitationCommon::CCallbackInternal_OnGameJoinRequested::`vftable';
  instance.m_steamcallback_OnGameJoinRequested.m_iCallback = 0;
  SteamAPI_RegisterCallback(&instance, 333i64);
  instance.m_steamcallback_OnLobbyDataReceived.m_nCallbackFlags = 0;
  instance.m_steamcallback_OnLobbyDataReceived.__vftable = (Fw::InvitationCommon::CCallbackInternal_OnLobbyDataReceived_vtbl *)&Fw::InvitationCommon::CCallbackInternal_OnLobbyDataReceived::`vftable';
  instance.m_steamcallback_OnLobbyDataReceived.m_iCallback = 0;
  SteamAPI_RegisterCallback(&instance.m_steamcallback_OnLobbyDataReceived, 505i64);
  instance.m_steamcallback_OnP2PSessionRequest.m_nCallbackFlags = 0;
  instance.m_steamcallback_OnP2PSessionRequest.__vftable = (Fw::InvitationCommon::CCallbackInternal_OnP2PSessionRequest_vtbl *)&Fw::InvitationCommon::CCallbackInternal_OnP2PSessionRequest::`vftable';
  instance.m_steamcallback_OnP2PSessionRequest.m_iCallback = 0;
  SteamAPI_RegisterCallback(&instance.m_steamcallback_OnP2PSessionRequest, 1202i64);
  instance.m_steamcallback_OnBroadcastUploadStart.m_nCallbackFlags = 0;
  instance.m_steamcallback_OnBroadcastUploadStart.__vftable = (Fw::InvitationCommon::CCallbackInternal_OnBroadcastUploadStart_vtbl *)&Fw::InvitationCommon::CCallbackInternal_OnBroadcastUploadStart::`vftable';
  instance.m_steamcallback_OnBroadcastUploadStart.m_iCallback = 0;
  SteamAPI_RegisterCallback(&instance.m_steamcallback_OnBroadcastUploadStart, 4604i64);
  instance.m_steamcallback_OnBroadcastUploadStop.m_nCallbackFlags = 0;
  instance.m_steamcallback_OnBroadcastUploadStop.__vftable = (Fw::InvitationCommon::CCallbackInternal_OnBroadcastUploadStop_vtbl *)&Fw::InvitationCommon::CCallbackInternal_OnBroadcastUploadStop::`vftable';
  instance.m_steamcallback_OnBroadcastUploadStop.m_iCallback = 0;
  SteamAPI_RegisterCallback(&instance.m_steamcallback_OnBroadcastUploadStop, 4605i64);
}

void __fastcall Fw::InvitationCommon::~InvitationCommon(Fw::InvitationCommon *this)
{
  instance.m_steamcallback_OnBroadcastUploadStop.__vftable = (Fw::InvitationCommon::CCallbackInternal_OnBroadcastUploadStop_vtbl *)&CCallbackImpl<4>::`vftable';
  if ( (instance.m_steamcallback_OnBroadcastUploadStop.m_nCallbackFlags & 1) != 0 )
    SteamAPI_UnregisterCallback(&instance.m_steamcallback_OnBroadcastUploadStop);
  instance.m_steamcallback_OnBroadcastUploadStart.__vftable = (Fw::InvitationCommon::CCallbackInternal_OnBroadcastUploadStart_vtbl *)&CCallbackImpl<1>::`vftable';
  if ( (instance.m_steamcallback_OnBroadcastUploadStart.m_nCallbackFlags & 1) != 0 )
    SteamAPI_UnregisterCallback(&instance.m_steamcallback_OnBroadcastUploadStart);
  instance.m_steamcallback_OnP2PSessionRequest.__vftable = (Fw::InvitationCommon::CCallbackInternal_OnP2PSessionRequest_vtbl *)&CCallbackImpl<8>::`vftable';
  if ( (instance.m_steamcallback_OnP2PSessionRequest.m_nCallbackFlags & 1) != 0 )
    SteamAPI_UnregisterCallback(&instance.m_steamcallback_OnP2PSessionRequest);
  instance.m_steamcallback_OnLobbyDataReceived.__vftable = (Fw::InvitationCommon::CCallbackInternal_OnLobbyDataReceived_vtbl *)&CCallbackImpl<24>::`vftable';
  if ( (instance.m_steamcallback_OnLobbyDataReceived.m_nCallbackFlags & 1) != 0 )
    SteamAPI_UnregisterCallback(&instance.m_steamcallback_OnLobbyDataReceived);
  instance.m_steamcallback_OnGameJoinRequested.__vftable = (Fw::InvitationCommon::CCallbackInternal_OnGameJoinRequested_vtbl *)&CCallbackImpl<16>::`vftable';
  if ( (instance.m_steamcallback_OnGameJoinRequested.m_nCallbackFlags & 1) != 0 )
    SteamAPI_UnregisterCallback(&instance);
}

__int64 __fastcall AgUser::isSignedIn(Concurrency::details::ThreadInternalContext *this)
{
  return 1i64;
}

__int64 __fastcall Scaleform::Render::DICommandImpl<Scaleform::Render::DICommand_CreateTexture,Scaleform::Render::DICommand>::GetSize(
        Scaleform::Render::DICommand_Histogram *this)
{
  return 16i64;
}

__int64 __fastcall CCallbackImpl<24>::GetCallbackSizeBytes(Scaleform::Render::DICommand_SetPixels *this)
{
  return 24i64;
}

void __fastcall Fw::InvitationCommon::GetRoomSessionInfo(Fw::ROOM_SESSION_INFO *pInfo)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  _BYTE *v8; // rax
  unsigned __int64 v9; // rcx
  size_t v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rax
  const char *v13; // rax
  char v14; // al
  __int64 *v15; // rdi
  const AgString *v16; // rax
  const AgString *v17; // rbx
  const AgString *v18; // rax
  AgString *v19; // rax
  __int64 v20; // rbx
  const char *CString; // rax
  const char *v22; // rax
  __int64 v23; // rdx
  __int64 *v24; // rdi
  const AgString *v25; // rax
  const AgString *v26; // rbx
  const AgString *v27; // rax
  AgString *v28; // rax
  __int64 v29; // rbx
  const char *v30; // rax
  const char *v31; // rax
  __int64 v32; // rdx
  __int64 *v33; // rdi
  const AgString *v34; // rax
  const AgString *v35; // rbx
  const AgString *v36; // rax
  AgString *v37; // rax
  __int64 v38; // rbx
  const char *v39; // rax
  const char *v40; // rax
  __int64 v41; // rdx
  __int64 *v42; // rdi
  const AgString *v43; // rax
  const AgString *v44; // rbx
  const AgString *v45; // rax
  AgString *v46; // rax
  __int64 v47; // rbx
  const char *v48; // rax
  const char *v49; // rax
  AgString result; // [rsp+28h] [rbp-38h] BYREF
  AgString v51; // [rsp+38h] [rbp-28h] BYREF
  AgString v52; // [rsp+48h] [rbp-18h] BYREF
  char v53; // [rsp+78h] [rbp+18h] BYREF

  v2 = (*((_DWORD *)&Fw::InvitationCommon::m_SessionId.m_steamid.m_comp + 1) >> 20) & 0xF;
  if ( (unsigned int)(v2 - 1) <= 9
    && (unsigned int)(SHIBYTE(Fw::InvitationCommon::m_SessionId.m_steamid.m_unAll64Bits) - 1) <= 3
    && ((_DWORD)v2 != 1
     || *(_DWORD *)&Fw::InvitationCommon::m_SessionId.m_steamid.m_comp
     && (*((_DWORD *)&Fw::InvitationCommon::m_SessionId.m_steamid.m_comp + 1) & 0xFFFFFu) <= 4)
    && ((_DWORD)v2 != 7
     || *(_DWORD *)&Fw::InvitationCommon::m_SessionId.m_steamid.m_comp
     && (*((_DWORD *)&Fw::InvitationCommon::m_SessionId.m_steamid.m_comp + 1) & 0xFFFFF) == 0)
    && ((_DWORD)v2 != 3 || *(_DWORD *)&Fw::InvitationCommon::m_SessionId.m_steamid.m_comp) )
  {
    v3 = SteamInternal_ContextInit(&`SteamInternal_ModuleContext'::`2'::s_CallbackCounterAndContext, v2);
    pInfo->m_OnlineId.data = *(_QWORD *)(*(__int64 (__fastcall **)(_QWORD, char *, CSteamID::SteamID_t))(**(_QWORD **)(v3 + 32) + 280i64))(
                                          *(_QWORD *)(v3 + 32),
                                          &v53,
                                          Fw::InvitationCommon::m_SessionId.m_steamid);
    v5 = SteamInternal_ContextInit(&`SteamInternal_ModuleContext'::`2'::s_CallbackCounterAndContext, v4);
    pInfo->slotMax = (*(__int64 (__fastcall **)(_QWORD, CSteamID::SteamID_t))(**(_QWORD **)(v5 + 32) + 256i64))(
                       *(_QWORD *)(v5 + 32),
                       Fw::InvitationCommon::m_SessionId.m_steamid);
    v7 = SteamInternal_ContextInit(&`SteamInternal_ModuleContext'::`2'::s_CallbackCounterAndContext, v6);
    v8 = (_BYTE *)(*(__int64 (__fastcall **)(_QWORD, CSteamID::SteamID_t, const char *))(**(_QWORD **)(v7 + 32) + 152i64))(
                    *(_QWORD *)(v7 + 32),
                    Fw::InvitationCommon::m_SessionId.m_steamid,
                    "NAME");
    v9 = -1i64;
    do
      ++v9;
    while ( v8[v9] );
    v10 = 129i64;
    if ( v9 < 0x81 )
    {
      v10 = -1i64;
      do
        ++v10;
      while ( v8[v10] );
    }
    memmove(pInfo->roomName, v8, v10);
    v12 = SteamInternal_ContextInit(&`SteamInternal_ModuleContext'::`2'::s_CallbackCounterAndContext, v11);
    v13 = (const char *)(*(__int64 (__fastcall **)(_QWORD, CSteamID::SteamID_t, const char *))(**(_QWORD **)(v12 + 32)
                                                                                             + 152i64))(
                          *(_QWORD *)(v12 + 32),
                          Fw::InvitationCommon::m_SessionId.m_steamid,
                          "WORLDID");
    v14 = atol(v13);
    pInfo->gameRule = v14;
    switch ( v14 )
    {
      case 0:
      case 2:
      case 5:
        pInfo->gameRule = 1;
        break;
      case 1:
        pInfo->gameRule = 0;
        break;
      case 3:
        pInfo->gameRule = 2;
        break;
      case 7:
        pInfo->gameRule = 3;
        break;
      default:
        break;
    }
    v15 = *(__int64 **)(SteamInternal_ContextInit(
                          &`SteamInternal_ModuleContext'::`2'::s_CallbackCounterAndContext,
                          0x140000000ui64)
                      + 32);
    AgString::AgString(&v52, 0);
    v17 = v16;
    AgString::AgString(&v51, "ATTR", -1);
    v19 = operator+(&result, v18, v17);
    v20 = *v15;
    CString = AgString::getCString(v19);
    v22 = (const char *)(*(__int64 (__fastcall **)(__int64 *, CSteamID::SteamID_t, const char *))(v20 + 152))(
                          v15,
                          Fw::InvitationCommon::m_SessionId.m_steamid,
                          CString);
    pInfo->liveOpen = (atol(v22) & 0x1000) == 0;
    AgString::~AgString(&result);
    AgString::~AgString(&v51);
    AgString::~AgString(&v52);
    v24 = *(__int64 **)(SteamInternal_ContextInit(&`SteamInternal_ModuleContext'::`2'::s_CallbackCounterAndContext, v23)
                      + 32);
    AgString::AgString(&result, 5);
    v26 = v25;
    AgString::AgString(&v51, "ATTR", -1);
    v28 = operator+(&v52, v27, v26);
    v29 = *v24;
    v30 = AgString::getCString(v28);
    v31 = (const char *)(*(__int64 (__fastcall **)(__int64 *, CSteamID::SteamID_t, const char *))(v29 + 152))(
                          v24,
                          Fw::InvitationCommon::m_SessionId.m_steamid,
                          v30);
    pInfo->battleType = atol(v31) & 0xF;
    AgString::~AgString(&v52);
    AgString::~AgString(&v51);
    AgString::~AgString(&result);
    v33 = *(__int64 **)(SteamInternal_ContextInit(&`SteamInternal_ModuleContext'::`2'::s_CallbackCounterAndContext, v32)
                      + 32);
    AgString::AgString(&result, 7);
    v35 = v34;
    AgString::AgString(&v51, "ATTR", -1);
    v37 = operator+(&v52, v36, v35);
    v38 = *v33;
    v39 = AgString::getCString(v37);
    v40 = (const char *)(*(__int64 (__fastcall **)(__int64 *, CSteamID::SteamID_t, const char *))(v38 + 152))(
                          v33,
                          Fw::InvitationCommon::m_SessionId.m_steamid,
                          v39);
    pInfo->roundTimerType = atol(v40);
    AgString::~AgString(&v52);
    AgString::~AgString(&v51);
    AgString::~AgString(&result);
    v42 = *(__int64 **)(SteamInternal_ContextInit(&`SteamInternal_ModuleContext'::`2'::s_CallbackCounterAndContext, v41)
                      + 32);
    AgString::AgString(&result, 6);
    v44 = v43;
    AgString::AgString(&v51, "ATTR", -1);
    v46 = operator+(&v52, v45, v44);
    v47 = *v42;
    v48 = AgString::getCString(v46);
    v49 = (const char *)(*(__int64 (__fastcall **)(__int64 *, CSteamID::SteamID_t, const char *))(v47 + 152))(
                          v42,
                          Fw::InvitationCommon::m_SessionId.m_steamid,
                          v48);
    pInfo->roundType = atol(v49);
    AgString::~AgString(&v52);
    AgString::~AgString(&v51);
    AgString::~AgString(&result);
    pInfo->roomId = Fw::InvitationCommon::m_SessionId.m_steamid.m_unAll64Bits;
    pInfo->password = 1;
  }
}

bool __fastcall CSteamID::IsValid(CSteamID *this)
{
  int m_unAll64Bits_high; // er8
  int v2; // edx

  m_unAll64Bits_high = HIDWORD(this->m_steamid.m_unAll64Bits);
  v2 = m_unAll64Bits_high & 0xF00000;
  return (m_unAll64Bits_high & 0xF00000u) - 1 <= 0xAFFFFE
      && (unsigned int)((m_unAll64Bits_high >> 24) - 1) <= 3
      && (v2 != 0x100000 || *(_DWORD *)&this->m_steamid.m_comp && (m_unAll64Bits_high & 0xFFFFFu) <= 4)
      && (v2 != 7340032 || *(_DWORD *)&this->m_steamid.m_comp && (m_unAll64Bits_high & 0xFFFFF) == 0)
      && (v2 != 3145728 || *(_DWORD *)&this->m_steamid.m_comp);
}

void __fastcall Scaleform::GFx::ExecuteTag::ExecuteWithPriority(
        Scaleform::GFx::AS3::DoAbc *this,
        Scaleform::GFx::DisplayObjContainer *m,
        __int64 __formal)
{
  ((void (__fastcall *)(Scaleform::GFx::AS3::DoAbc *, Scaleform::GFx::DisplayObjContainer *, __int64))this->Execute)(
    this,
    m,
    __formal);
}

void __fastcall Fw::InvitationCommon::CCallbackInternal_OnBroadcastUploadStart::Run(
        Fw::InvitationCommon::CCallbackInternal_OnBroadcastUploadStop *this,
        void *pvParam)
{
  Fw::InvitationCommon::m_LiveStreamingTick = 0i64;
}

void __fastcall Fw::InvitationCommon::CCallbackInternal_OnGameJoinRequested::Run(
        Fw::InvitationCommon::CCallbackInternal_OnGameJoinRequested *this,
        void *pvParam)
{
  Fw::InvitationCommon::m_InviteRoomID.m_steamid.m_comp = *(CSteamID::SteamID_t::SteamIDComponent_t *)pvParam;
}

void __fastcall Fw::InvitationCommon::CCallbackInternal_OnLobbyDataReceived::Run(
        Fw::InvitationCommon::CCallbackInternal_OnLobbyDataReceived *this,
        void *pvParam)
{
  __int64 v2; // [rsp+8h] [rbp+8h]

  if ( *(_QWORD *)pvParam == Fw::InvitationCommon::m_InviteRoomID.m_steamid.m_comp )
  {
    if ( *((_BYTE *)pvParam + 16) )
    {
      Fw::InvitationCommon::m_SessionFlag = 1;
      Fw::InvitationCommon::m_JoinRoomWaitFlag = 1;
    }
    HIWORD(v2) = BYTE6(this) & 0xF;
    Fw::InvitationCommon::m_InviteRoomID.m_steamid.m_comp = (CSteamID::SteamID_t::SteamIDComponent_t)(v2 & 0xFFF0000000000000ui64);
    Fw::InvitationCommon::m_InvitationFlag = 0;
  }
}

void __fastcall Fw::InvitationCommon::CCallbackInternal_OnP2PSessionRequest::Run(
        Fw::MatchingTargetCallbackHandler *this,
        P2PSessionRequest_t *pParam)
{
  __int64 v3; // rax

  v3 = SteamInternal_ContextInit(&`SteamInternal_ModuleContext'::`2'::s_CallbackCounterAndContext, pParam);
  (*(void (__fastcall **)(_QWORD, CSteamID::SteamID_t))(**(_QWORD **)(v3 + 64) + 24i64))(
    *(_QWORD *)(v3 + 64),
    pParam->m_steamIDRemote.m_steamid);
}

bool __fastcall Fw::InvitationCommon::UpdateRecv(bool *pInvitationFlag)
{
  __int64 v2; // rdx
  CSteamID::SteamID_t v3; // rax
  __int64 v5; // rax
  __int64 v6; // [rsp+38h] [rbp+10h]
  __int64 v7; // [rsp+38h] [rbp+10h]

  v2 = (*((_DWORD *)&Fw::InvitationCommon::m_InviteRoomID.m_steamid.m_comp + 1) >> 20) & 0xF;
  if ( (unsigned int)(v2 - 1) <= 9
    && (unsigned int)(SHIBYTE(Fw::InvitationCommon::m_InviteRoomID.m_steamid.m_unAll64Bits) - 1) <= 3 )
  {
    v3.m_comp = Fw::InvitationCommon::m_InviteRoomID.m_steamid.m_comp;
    if ( ((_DWORD)v2 != 1
       || *(_DWORD *)&Fw::InvitationCommon::m_InviteRoomID.m_steamid.m_comp
       && (*((_DWORD *)&Fw::InvitationCommon::m_InviteRoomID.m_steamid.m_comp + 1) & 0xFFFFFu) <= 4)
      && ((_DWORD)v2 != 7
       || *(_DWORD *)&Fw::InvitationCommon::m_InviteRoomID.m_steamid.m_comp
       && (*((_DWORD *)&Fw::InvitationCommon::m_InviteRoomID.m_steamid.m_comp + 1) & 0xFFFFF) == 0)
      && ((_DWORD)v2 != 3 || *(_DWORD *)&Fw::InvitationCommon::m_InviteRoomID.m_steamid.m_comp)
      && !Fw::InvitationCommon::m_InvitationFlag )
    {
      if ( Fw::InvitationCommon::m_InviteRoomID.m_steamid.m_comp == Fw::MatchingTarget::m_RoomId.m_steamid.m_comp )
      {
        HIWORD(v7) = BYTE6(v6) & 0xF;
        Fw::InvitationCommon::m_InviteRoomID.m_steamid.m_comp = (CSteamID::SteamID_t::SteamIDComponent_t)(v7 & 0xFFF0000000000000ui64);
        return 0;
      }
      if ( Fw::MatchingTarget::m_RoomId.m_steamid.m_comp )
      {
        Fw::MatchingTarget::LeaveRoom();
        v3.m_comp = Fw::InvitationCommon::m_InviteRoomID.m_steamid.m_comp;
      }
      Fw::InvitationCommon::m_InvitationFlag = 1;
      if ( pInvitationFlag )
      {
        *pInvitationFlag = 1;
        v3.m_comp = Fw::InvitationCommon::m_InviteRoomID.m_steamid.m_comp;
      }
      Fw::InvitationCommon::m_JoinRoomWaitFlag = 0;
      Fw::InvitationCommon::m_SessionFlag = 0;
      Fw::InvitationCommon::m_SessionId.m_steamid.m_comp = (CSteamID::SteamID_t::SteamIDComponent_t)v3.m_unAll64Bits;
      v5 = SteamInternal_ContextInit(&`SteamInternal_ModuleContext'::`2'::s_CallbackCounterAndContext, v2);
      (*(void (__fastcall **)(_QWORD, CSteamID::SteamID_t))(**(_QWORD **)(v5 + 32) + 224i64))(
        *(_QWORD *)(v5 + 32),
        Fw::InvitationCommon::m_SessionId.m_steamid);
    }
  }
  return 0;
}

