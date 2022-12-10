#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hal.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_buffer.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thr/xthread"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_characterdef.h"
#include "dev/silverware/git/sdk/util/agservicecommand.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/globalheapmemory.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/fixmemory.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charahitrectformat.h"
#include "dev/silverware/git/sdk/input/agsdlmappingparser.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/matrix4unaligned.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/operationmapper.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/quat_aos.h"
#include "dev/silverware/git/sdk/platforms/pc/system/agpcsysteminfo.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/randommt.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filters.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filterparams.h"
#include "dev/silverware/git/sdk/util/agdebugchannels.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphqueue.h"
#include "dev/silverware/git/sdk/util/agperformancecounter.h"
#include "dev/silverware/git/sdk/agreferencecountinl.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdata/effectappdata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_font.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmirror.h"
#include "dev/silverware/git/sdk/agclock.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessdefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatapacked.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/stageprojectdata.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaattackdataformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_pathdatapacker.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charadamagesettingformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_linebuffer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_highlight.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloat.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_sse.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_profiler.h"
#include "dev/silverware/git/sdk/agcondition.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steamclientpublic.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_states.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/tga_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_statebag.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic0.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_simplemeshcache.h"
#include "dev/silverware/git/sdk/filesystem/agfile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/fontprovider/render_fontproviderwinapi.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglshader.h"
#include "dev/silverware/git/sdk/filesystem/agpath.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/variableheapmemorybase.h"
#include "dev/silverware/git/sdk/filesystem/agmount.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/soundgroupdataformat.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/mediamanager.h"
#include "dev/silverware/git/sdk/filesystem/agdirectory.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector2unaligned.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_bundle.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloatmp.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/audiopresenter.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xxatomic"
#include "dev/silverware/git/sdk/agmemorystream.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapemeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/jpeg_imagefile.h"
#include "dev/silverware/git/sdk/agmemorypool.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_functions.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actor.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treetext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefileutil.h"
#include "dev/silverware/git/sdk/input/agcontrollerbuttoncomponent.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "dev/silverware/git/sdk/agpointerinl.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/fix32.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_docview.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/math.h"
#include "dev/silverware/git/sdk/agstream.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_range.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/physicalheapmemory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "dev/silverware/git/sdk/agsemaphore.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "dev/silverware/git/sdk/agsemaphore.inl"
#include "dev/silverware/git/sdk/agconditionvariable.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_hash.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/condition_variable"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix4x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixpool.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/particledata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shader.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogllight.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/deque"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_sgmlparser.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_context.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exlockable.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_constants.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessgen.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/mediasound.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treeshape.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessellator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/boolinvec.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/time.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "dev/silverware/git/sdk/agcondition.inl"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitivebundle.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/jobmanager.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treecachenode.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treenode.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_loader.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cacheeffect.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_system.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphfitter.h"
#include "program files (x86)/windows kits/8.1/include/shared/guiddef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_player.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector3unaligned.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_types.h"
#include "dev/silverware/git/sdk/system/agusermanager.h"
#include "program files (x86)/windows kits/8.1/include/shared/stralign.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/future_asset.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_resource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/asyncjob.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_stroker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/dds_imagefile.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_typeinfo.h"
#include "dev/silverware/git/sdk/util/agservice.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/resourcemanager.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaprojectdataformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textmeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "dev/silverware/git/sdk/agthreadpool.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xfacet"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xutility"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphparam.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charabasestatusformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcache.h"
#include "dev/silverware/git/sdk/3rdparty/steam/isteamhtmlsurface.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/vec_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/list"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcacheconfig.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/boolinvec.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hairliner.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_filterdesc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_styledtext.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix3x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_core.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_queue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_fontmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitive.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/vectormath_aos.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocaddr.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/bilinkable.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_radixtree.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdatalistmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_twips.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectcommon.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_containers.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_manager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_wwhelper.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exwaitcondition.h"
#include "program files (x86)/windows kits/8.1/include/um/winnt.h"
#include "dev/silverware/git/sdk/agreferencedobjectinl.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/functional"
#include "dev/silverware/git/sdk/agpointer.h"
#include "dev/kof/master/development/source/baseproject/jni/game/data/sounddata.h"
#include "program files (x86)/windows kits/8.1/include/shared/basetsd.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstring"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogleffect.h"
#include "dev/silverware/git/sdk/agreferencedobject.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory0"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_bank.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/exception"
#include "dev/silverware/git/sdk/agconditionvariable.inl"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_vertex.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_exception.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/fontprovider/render_fontproviderhud.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_wstring.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/mat_aos.h"
#include "dev/silverware/git/sdk/agthread.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charadataunify.h"
#include "dev/silverware/git/sdk/agmutex.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/array"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaactiondataformat.h"
#include "dev/silverware/git/sdk/agscopedlock.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charafilebase.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steam_api_internal.h"
#include "dev/kof/master/development/source/ps4project/baseproject/pcutil/pccontrolsmanager.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/algorithm"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "dev/silverware/git/sdk/input/aginputmanager.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/system_error"
#include "dev/silverware/git/sdk/agsingleton.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector4unaligned.h"
#include "dev/silverware/git/sdk/agmutex.inl"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/commanddataformat.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/stdexcept"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/utility"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threadcheck.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/vecidx_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/iosfwd"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/map"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textlayout.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_image.h"
#include "program files (x86)/windows kits/8.1/include/um/winuser.h"
#include "dev/silverware/git/sdk/memory/agallocators.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/floatinvec.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtree"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdata/effectdata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "dev/silverware/git/sdk/input/agcontrollercomponent.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steam_api.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/tuple"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/chartdata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "dev/kof/master/development/source/ps4project/baseproject/pcutil/pcdummy.h"
#include "dev/silverware/git/sdk/util/agdelegate.h"
#include "dev/silverware/git/sdk/agreferencecount.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_new.h"
#include "dev/silverware/git/sdk/agreferenceinl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/quat_aos.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_movie.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/refcountable.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_operation.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/floatinvec.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/bitset"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstddef"
#include "dev/silverware/git/sdk/agvector2.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/type_traits"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charamaterialsettingformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_screentoworld.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_vec64.h"
#include "dev/silverware/git/sdk/agmath.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/silverware/git/sdk/input/agcontroller.h"
#include "dev/silverware/git/sdk/system/aguser.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_strokeraa.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_scale9grid.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exthread.h"
#include "dev/silverware/git/sdk/agstring.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraystaticbuff.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmodel.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_math.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/mutex"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cxform.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/string"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/chrono"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglcurve.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/libcommon.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/vec_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/limits"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/effect.h"
#include "dev/silverware/git/sdk/3rdparty/steam/matchmakingtypes.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/ios"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocnum"
#include "dev/silverware/git/sdk/system/agsysteminfo.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xiosbase"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_event.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglsprite.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_hashkey.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocale"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/png_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_keycodes.h"
#include "program files (x86)/windows kits/8.1/include/um/winbase.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocinfo"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/mat_aos.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/cpusequencedataformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/atomic_int.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/debug/logging.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vector"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshkey.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixstate.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_gradients.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglrender.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/atomic"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_rasterizer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_viewport.h"
#include "dev/silverware/git/sdk/aghash.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/heapmemory.h"
#include "dev/silverware/git/sdk/agstringutils.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglfog.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglbone.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xhash"
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/mutex.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thread"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_drawableimage.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/memory"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/cfile.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglinputstream.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/fileutil.cpp"

std::piecewise_construct_t std::piecewise_construct; // 0x1408A0B44
const char FILE_IDENTIFIER[4]; // 0x1408A0B48
void StageProjectData::InitData(); // 0x140223140
bool StageProjectData::GetStageModelFilePath(STAGE_ID stageID, char * outBuf, long bufferSize); // 0x140223390
bool StageProjectData::GetLightFilePath(STAGE_ID stageID, char * outBuf, long bufferSize); // 0x140223420
bool StageProjectData::GetPostEffectFilePath(STAGE_ID stageID, char * outBuf, long bufferSize); // 0x1402234C0
bool StageProjectData::GetCharacterLightFilePath(STAGE_ID stageID, CHARACTER_NO characterNo, char * outBuf, long bufferSize); // 0x140223560
bool StageProjectData::GetSoundBankFilePath(STAGE_ID stageID, char * outBuf, long bufferSize); // 0x140223630
const char * StageProjectData::FindPlaySoundByCharacterPosition(STAGE_ID stageID, SoundId soundID, float characterPositionX); // 0x1402236C0
bool StageProjectData::IsHostTeamCharacter(STAGE_ID stageID, CHARACTER_NO characterNo); // 0x140223890
StageProjectData::STAGEPROJ_ERR_ID StageProjectData::ReadFile(const char * fileName); // 0x140223920
const StageProjectData::StageSpCharaLightData * StageProjectData::findCharacterLightData(STAGE_ID stageID, CHARACTER_NO characterNo); // 0x1402244A0//decompilation failure at 1408A0B44!
//decompilation failure at 1408A0B48!
char *__fastcall StageProjectData::FindPlaySoundByCharacterPosition(
        StageProjectData *this,
        STAGE_ID stageID,
        SoundId soundID,
        float characterPositionX)
{
  __int64 v6; // rdx
  int v7; // er8
  StageProjectData::StageData *m_pDatas; // r11
  __int64 m_stageCount; // r10
  StageProjectData::StageData *v10; // rax
  __int64 v11; // rcx
  StageProjectData::StageData *v13; // r8
  int v14; // ecx
  __int64 soundCount; // r9
  StageProjectData::StageSound *i; // rax

  if ( this->m_readStatus != STAGEPROJ_ERR_SUCCESS )
    return 0i64;
  v6 = 0i64;
  v7 = 0;
  if ( this->m_stageCount <= 0 )
    return 0i64;
  m_pDatas = this->m_pDatas;
  m_stageCount = this->m_stageCount;
  v10 = m_pDatas;
  v11 = 0i64;
  while ( v10->stageNo != stageID )
  {
    ++v7;
    ++v11;
    ++v10;
    if ( v11 >= m_stageCount )
      return 0i64;
  }
  v13 = &m_pDatas[(__int64)v7];
  if ( !v13 || !v13->bUseSoundBank )
    return 0i64;
  switch ( soundID )
  {
    case SND_NONE:
      v14 = 0;
      break;
    case SND_SE_STAGE_BOUND:
      v14 = 2;
      break;
    case SND_SE_STAGE_LAND:
      v14 = 3;
      break;
    case SND_SE_DASH_LEFT:
      v14 = 4;
      break;
    case SND_SE_DASH_RIGHT:
      v14 = 5;
      break;
    case SND_SE_WALK_LEFT:
      v14 = 6;
      break;
    case SND_SE_WALK_RIGHT:
      v14 = 7;
      break;
    case SND_SE_STAGE_GAYA:
      v14 = 1;
      break;
    default:
      return 0i64;
  }
  soundCount = v13->soundCount;
  if ( (int)soundCount <= 0 )
    return 0i64;
  for ( i = v13->pSounds; i->type != v14 || characterPositionX < i->areaMin || i->areaMax < characterPositionX; ++i )
  {
    if ( ++v6 >= soundCount )
      return 0i64;
  }
  return i->pName;
}

char __fastcall StageProjectData::GetCharacterLightFilePath(
        StageProjectData *this,
        STAGE_ID stageID,
        CHARACTER_NO characterNo,
        char *outBuf,
        int bufferSize)
{
  int v8; // er10
  StageProjectData::StageData *m_pDatas; // r11
  __int64 v10; // r8
  __int64 m_stageCount; // rcx
  StageProjectData::StageData *i; // rax
  StageProjectData::StageData *v14; // rbx
  const StageProjectData::StageSpCharaLightData *CharacterLightData; // rax
  char *m_pProjectFileDir; // r9
  const char *pStageID; // rcx
  const char *filename; // rax

  if ( this->m_readStatus != STAGEPROJ_ERR_SUCCESS )
    return 0;
  v8 = 0;
  if ( this->m_stageCount <= 0 )
    return 0;
  m_pDatas = this->m_pDatas;
  v10 = 0i64;
  m_stageCount = this->m_stageCount;
  for ( i = m_pDatas; i->stageNo != stageID; ++i )
  {
    ++v8;
    if ( ++v10 >= m_stageCount )
      return 0;
  }
  v14 = &m_pDatas[(__int64)v8];
  if ( !v14 )
    return 0;
  CharacterLightData = StageProjectData::findCharacterLightData(this, stageID, characterNo);
  if ( !CharacterLightData )
    return 0;
  m_pProjectFileDir = this->m_pProjectFileDir;
  if ( !m_pProjectFileDir )
    return 0;
  pStageID = v14->pStageID;
  if ( !pStageID )
    return 0;
  filename = CharacterLightData->filename;
  if ( !filename )
    return 0;
  sprintf_s(outBuf, bufferSize, "%s%s/%s.csv", m_pProjectFileDir, pStageID, filename);
  return 1;
}

char __fastcall StageProjectData::GetLightFilePath(
        StageProjectData *this,
        STAGE_ID stageID,
        char *outBuf,
        int bufferSize)
{
  unsigned __int64 v5; // rbx
  int v6; // er10
  StageProjectData::StageData *m_pDatas; // rax
  __int64 v8; // r8
  StageProjectData::StageData *v10; // rax
  char *m_pProjectFileDir; // r9
  const char *pStageID; // rcx

  v5 = bufferSize;
  if ( this->m_readStatus != STAGEPROJ_ERR_SUCCESS )
    return 0;
  v6 = 0;
  if ( this->m_stageCount <= 0 )
    return 0;
  m_pDatas = this->m_pDatas;
  v8 = 0i64;
  while ( m_pDatas->stageNo != stageID )
  {
    ++v6;
    ++v8;
    ++m_pDatas;
    if ( v8 >= this->m_stageCount )
      return 0;
  }
  v10 = &this->m_pDatas[(__int64)v6];
  if ( !v10 )
    return 0;
  m_pProjectFileDir = this->m_pProjectFileDir;
  if ( !m_pProjectFileDir )
    return 0;
  pStageID = v10->pStageID;
  if ( !pStageID || !v10->pWorldLightFilename )
    return 0;
  sprintf_s(outBuf, v5, "%s%s/%s.csv", m_pProjectFileDir, pStageID, v10->pWorldLightFilename);
  return 1;
}

char __fastcall StageProjectData::GetPostEffectFilePath(
        StageProjectData *this,
        STAGE_ID stageID,
        char *outBuf,
        int bufferSize)
{
  unsigned __int64 v5; // rbx
  int v6; // er10
  StageProjectData::StageData *m_pDatas; // rax
  __int64 v8; // r8
  StageProjectData::StageData *v10; // rax
  char *m_pProjectFileDir; // r9
  const char *pStageID; // rcx

  v5 = bufferSize;
  if ( this->m_readStatus != STAGEPROJ_ERR_SUCCESS )
    return 0;
  v6 = 0;
  if ( this->m_stageCount <= 0 )
    return 0;
  m_pDatas = this->m_pDatas;
  v8 = 0i64;
  while ( m_pDatas->stageNo != stageID )
  {
    ++v6;
    ++v8;
    ++m_pDatas;
    if ( v8 >= this->m_stageCount )
      return 0;
  }
  v10 = &this->m_pDatas[(__int64)v6];
  if ( !v10 )
    return 0;
  m_pProjectFileDir = this->m_pProjectFileDir;
  if ( !m_pProjectFileDir )
    return 0;
  pStageID = v10->pStageID;
  if ( !pStageID || !v10->pPostEffectFilename )
    return 0;
  sprintf_s(outBuf, v5, "%s%s/%s.csv", m_pProjectFileDir, pStageID, v10->pPostEffectFilename);
  return 1;
}

char __fastcall StageProjectData::GetSoundBankFilePath(
        StageProjectData *this,
        STAGE_ID stageID,
        char *outBuf,
        int bufferSize)
{
  int v7; // edx
  StageProjectData::StageData *m_pDatas; // r11
  __int64 m_stageCount; // r8
  StageProjectData::StageData *v10; // rax
  __int64 v11; // rcx
  StageProjectData::StageData *v13; // rax
  char *m_pProjectFileDir; // r9

  if ( this->m_readStatus != STAGEPROJ_ERR_SUCCESS )
    return 0;
  v7 = 0;
  if ( this->m_stageCount <= 0 )
    return 0;
  m_pDatas = this->m_pDatas;
  m_stageCount = this->m_stageCount;
  v10 = m_pDatas;
  v11 = 0i64;
  while ( v10->stageNo != stageID )
  {
    ++v7;
    ++v11;
    ++v10;
    if ( v11 >= m_stageCount )
      return 0;
  }
  v13 = &m_pDatas[(__int64)v7];
  if ( !v13 )
    return 0;
  if ( !v13->bUseSoundBank )
    return 0;
  m_pProjectFileDir = this->m_pProjectFileDir;
  if ( !m_pProjectFileDir || !v13->pSoundBankFilePath )
    return 0;
  sprintf_s(outBuf, 0x200ui64, "%s%s", m_pProjectFileDir, v13->pSoundBankFilePath);
  return 1;
}

char __fastcall StageProjectData::GetStageModelFilePath(
        StageProjectData *this,
        STAGE_ID stageID,
        char *outBuf,
        int bufferSize)
{
  int v4; // er9
  StageProjectData::StageData *m_pDatas; // rax
  __int64 v6; // r8
  StageProjectData::StageData *v8; // rax
  char *m_pProjectFileDir; // r9
  const char *pStageID; // rcx

  if ( this->m_readStatus != STAGEPROJ_ERR_SUCCESS )
    return 0;
  v4 = 0;
  if ( this->m_stageCount <= 0 )
    return 0;
  m_pDatas = this->m_pDatas;
  v6 = 0i64;
  while ( m_pDatas->stageNo != stageID )
  {
    ++v4;
    ++v6;
    ++m_pDatas;
    if ( v6 >= this->m_stageCount )
      return 0;
  }
  v8 = &this->m_pDatas[(__int64)v4];
  if ( !v8 )
    return 0;
  m_pProjectFileDir = this->m_pProjectFileDir;
  if ( !m_pProjectFileDir )
    return 0;
  pStageID = v8->pStageID;
  if ( !pStageID )
    return 0;
  sprintf_s(Buffer, 0xFFui64, "%s%s/%s.cast", m_pProjectFileDir, pStageID, v8->pStageID);
  return 1;
}

void __fastcall StageProjectData::InitData(StageProjectData *this, unsigned __int64 a2)
{
  int v3; // ebp
  __int64 v4; // r15
  StageProjectData::StageData *m_pDatas; // rbx
  char *pStageID; // rcx
  char *pStageName; // rcx
  char *pGimmickFileName; // rcx
  int *pHostCharacterID; // rcx
  char *pWorldLightFilename; // rcx
  char *pPostEffectFilename; // rcx
  char *pSoundBankFilePath; // rcx
  int v13; // esi
  __int64 v14; // rdi
  char *pFileName; // rcx
  char *pName; // rcx
  StageProjectData::StageSound *pSounds; // rcx
  __int64 spCharaLightCount; // rsi
  __int64 v19; // rdi
  char *filename; // rcx
  char *id; // rcx
  StageProjectData::StageSpCharaLightData *pSpCharaLight; // rcx
  StageProjectData::StageData *v23; // rcx
  char *m_pProjectFileDir; // rcx
  CHARACTER_NO *m_pCameraLightCharacterIDs; // rcx

  if ( this->m_pDatas )
  {
    v3 = 0;
    if ( this->m_stageCount > 0 )
    {
      v4 = 0i64;
      do
      {
        m_pDatas = this->m_pDatas;
        pStageID = m_pDatas[v4].pStageID;
        if ( pStageID )
        {
          operator delete(pStageID, a2);
          m_pDatas[v4].pStageID = 0i64;
        }
        pStageName = m_pDatas[v4].pStageName;
        if ( pStageName )
        {
          operator delete(pStageName, a2);
          m_pDatas[v4].pStageName = 0i64;
        }
        pGimmickFileName = m_pDatas[v4].pGimmickFileName;
        if ( pGimmickFileName )
        {
          operator delete(pGimmickFileName, a2);
          m_pDatas[v4].pGimmickFileName = 0i64;
        }
        pHostCharacterID = m_pDatas[v4].pHostCharacterID;
        if ( pHostCharacterID )
        {
          operator delete(pHostCharacterID, a2);
          m_pDatas[v4].pHostCharacterID = 0i64;
        }
        pWorldLightFilename = m_pDatas[v4].pWorldLightFilename;
        if ( pWorldLightFilename )
        {
          operator delete(pWorldLightFilename, a2);
          m_pDatas[v4].pWorldLightFilename = 0i64;
        }
        pPostEffectFilename = m_pDatas[v4].pPostEffectFilename;
        if ( pPostEffectFilename )
        {
          operator delete(pPostEffectFilename, a2);
          m_pDatas[v4].pPostEffectFilename = 0i64;
        }
        pSoundBankFilePath = m_pDatas[v4].pSoundBankFilePath;
        if ( pSoundBankFilePath )
        {
          operator delete(pSoundBankFilePath, a2);
          m_pDatas[v4].pSoundBankFilePath = 0i64;
        }
        if ( m_pDatas[v4].pSounds )
        {
          v13 = 0;
          if ( m_pDatas[v4].soundCount > 0 )
          {
            v14 = 0i64;
            do
            {
              pFileName = m_pDatas[v4].pSounds[v14].pFileName;
              if ( pFileName )
              {
                operator delete(pFileName, a2);
                m_pDatas[v4].pSounds[v14].pFileName = 0i64;
              }
              pName = m_pDatas[v4].pSounds[v14].pName;
              if ( pName )
              {
                operator delete(pName, a2);
                m_pDatas[v4].pSounds[v14].pName = 0i64;
              }
              ++v13;
              ++v14;
            }
            while ( v13 < m_pDatas[v4].soundCount );
          }
          pSounds = m_pDatas[v4].pSounds;
          if ( pSounds )
          {
            operator delete(pSounds, a2);
            m_pDatas[v4].pSounds = 0i64;
          }
        }
        spCharaLightCount = m_pDatas[v4].spCharaLightCount;
        if ( spCharaLightCount > 0 )
        {
          v19 = 0i64;
          do
          {
            filename = m_pDatas[v4].pSpCharaLight[v19].filename;
            if ( filename )
            {
              operator delete(filename, a2);
              m_pDatas[v4].pSpCharaLight[v19].filename = 0i64;
            }
            id = m_pDatas[v4].pSpCharaLight[v19].id;
            if ( id )
            {
              operator delete(id, a2);
              m_pDatas[v4].pSpCharaLight[v19].id = 0i64;
            }
            ++v19;
            --spCharaLightCount;
          }
          while ( spCharaLightCount );
        }
        pSpCharaLight = m_pDatas[v4].pSpCharaLight;
        if ( pSpCharaLight )
        {
          operator delete(pSpCharaLight, a2);
          m_pDatas[v4].pSpCharaLight = 0i64;
        }
        ++v3;
        ++v4;
      }
      while ( v3 < this->m_stageCount );
    }
    v23 = this->m_pDatas;
    if ( v23 )
    {
      operator delete(v23, a2);
      this->m_pDatas = 0i64;
    }
    m_pProjectFileDir = this->m_pProjectFileDir;
    if ( m_pProjectFileDir )
    {
      operator delete(m_pProjectFileDir, a2);
      this->m_pProjectFileDir = 0i64;
    }
    m_pCameraLightCharacterIDs = this->m_pCameraLightCharacterIDs;
    if ( m_pCameraLightCharacterIDs )
    {
      operator delete(m_pCameraLightCharacterIDs, a2);
      this->m_pCameraLightCharacterIDs = 0i64;
    }
    this->m_cameraLightCharacterIDCount = 0;
    *(_QWORD *)&this->m_fileHeader.dataVersion = 0i64;
    this->m_fileHeader.pProjectName = 0i64;
    this->m_readStatus = STAGEPROJ_ERR_NONE;
  }
}

char __fastcall StageProjectData::IsHostTeamCharacter(
        StageProjectData *this,
        STAGE_ID stageID,
        CHARACTER_NO characterNo)
{
  __int64 v4; // rax
  int v5; // er9
  StageProjectData::StageData *m_pDatas; // rbx
  __int64 m_stageCount; // r11
  StageProjectData::StageData *v8; // rcx
  __int64 v9; // r8
  StageProjectData::StageData *v11; // rcx
  __int64 hostCharacterCount; // rdx
  int *i; // rcx

  if ( this->m_readStatus != STAGEPROJ_ERR_SUCCESS )
    return 0;
  v4 = 0i64;
  v5 = 0;
  if ( this->m_stageCount <= 0 )
    return 0;
  m_pDatas = this->m_pDatas;
  m_stageCount = this->m_stageCount;
  v8 = m_pDatas;
  v9 = 0i64;
  while ( v8->stageNo != stageID )
  {
    ++v5;
    ++v9;
    ++v8;
    if ( v9 >= m_stageCount )
      return 0;
  }
  v11 = &m_pDatas[(__int64)v5];
  if ( !v11 )
    return 0;
  hostCharacterCount = v11->hostCharacterCount;
  if ( (int)hostCharacterCount <= 0 )
    return 0;
  for ( i = v11->pHostCharacterID; *i != characterNo; ++i )
  {
    if ( ++v4 >= hostCharacterCount )
      return 0;
  }
  return 1;
}

__int64 __fastcall StageProjectData::ReadFile(StageProjectData *this, const char *fileName, int a3, int a4)
{
  StageProjectData *v4; // r13
  const char *v5; // r12
  unsigned int v6; // eax
  unsigned __int8 *v7; // r15
  unsigned __int64 v9; // rdx
  char *pProjectName; // rcx
  int v11; // er8
  char *v12; // rax
  __int64 m_uiPoint; // rbx
  unsigned int m_uiSize; // er14
  unsigned __int8 *m_pucData; // rdi
  int v16; // edx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rdx
  int v19; // eax
  FileUtil::Header v20; // rcx
  StageProjectData::StageData *v21; // r15
  char *v22; // rax
  __int64 v23; // rcx
  char v24; // al
  int v25; // edx
  int *v26; // rax
  int v27; // er9
  __int64 v28; // r8
  __int64 v29; // r10
  int v30; // edx
  int v31; // ecx
  StageProjectData::StageSpCharaLightData *v32; // rax
  bool v33; // cc
  __int64 v34; // r13
  __int64 pSpCharaLight; // r8
  int v36; // ecx
  __int64 v37; // rax
  int v38; // esi
  signed int v39; // esi
  _BYTE *v40; // rax
  _BYTE *v41; // r12
  int v42; // eax
  int v43; // ecx
  __int64 v44; // rax
  int v45; // esi
  signed int v46; // esi
  char *v47; // rax
  char *v48; // r12
  int v49; // edx
  StageProjectData::StageSound *v50; // rax
  __int64 v51; // r13
  __int64 pSounds; // r8
  int v53; // ecx
  __int64 v54; // rax
  int v55; // esi
  signed int v56; // esi
  _BYTE *v57; // rax
  _BYTE *v58; // r12
  int v59; // ecx
  __int64 v60; // rax
  int v61; // esi
  signed int v62; // esi
  _BYTE *v63; // rax
  _BYTE *v64; // r12
  int v65; // xmm0_4
  int v66; // ecx
  int v67; // xmm0_4
  int v68; // ecx
  int v69; // eax
  float v70; // xmm0_4
  float v71; // ecx
  int v72; // edx
  int v73; // edx
  float v74; // xmm0_4
  float v75; // ecx
  int v76; // ecx
  __int64 v77; // rax
  int v78; // esi
  signed int v79; // esi
  char *v80; // rax
  char *v81; // r12
  __int64 v82; // r13
  int v83; // ecx
  __int64 v84; // rax
  int v85; // esi
  signed int v86; // esi
  char *v87; // rax
  char *v88; // r12
  int v89; // ecx
  __int64 v90; // rax
  int v91; // esi
  signed int v92; // esi
  char *v93; // rax
  char *v94; // r12
  char *v95; // rax
  unsigned int v96; // edi
  unsigned int v97; // esi
  unsigned __int8 *v98; // rbx
  CHARACTER_NO *v99; // rax
  int v100; // er10
  __int64 v101; // r9
  __int64 v102; // r8
  __int64 v103; // r11
  OGLInputStream pStream; // [rsp+30h] [rbp-39h] BYREF
  int v105; // [rsp+48h] [rbp-21h]
  __int64 v106; // [rsp+50h] [rbp-19h]
  int v107; // [rsp+58h] [rbp-11h]
  StageProjectData *v108; // [rsp+60h] [rbp-9h]
  unsigned __int8 *buf; // [rsp+68h] [rbp-1h] BYREF
  const char *v110; // [rsp+70h] [rbp+7h]
  FileUtil::Header pOutHeader; // [rsp+78h] [rbp+Fh] BYREF

  v4 = this;
  v108 = this;
  v110 = fileName;
  buf = 0i64;
  v5 = fileName;
  v6 = CFile::ResourceDataLoaderNew(fileName, (int)fileName, a3, a4, &buf);
  v7 = buf;
  if ( buf )
  {
    pStream.m_pucData = buf;
    pStream.m_uiPoint = 0;
    pStream.m_uiSize = v6;
    pStream.m_uiVersion = 0;
    FileUtil::readHeader(&pStream, &pOutHeader);
    if ( *(_DWORD *)pOutHeader.fileIdentifier == *(_DWORD *)FILE_IDENTIFIER_0 )
    {
      pProjectName = v4->m_fileHeader.pProjectName;
      if ( pProjectName )
      {
        operator delete(pProjectName, v9);
        v4->m_fileHeader.pProjectName = 0i64;
      }
      if ( pStream.m_uiSize > pStream.m_uiPoint )
      {
        v11 = pStream.m_pucData[pStream.m_uiPoint] | ((pStream.m_pucData[pStream.m_uiPoint + 1] | ((pStream.m_pucData[pStream.m_uiPoint + 2] | (pStream.m_pucData[pStream.m_uiPoint + 3] << 8)) << 8)) << 8);
        pStream.m_uiPoint += 4;
      }
      else
      {
        v11 = 0;
      }
      v4->m_fileHeader.dataVersion = v11;
      v12 = FileUtil::readString(&pStream);
      m_uiPoint = pStream.m_uiPoint;
      m_uiSize = pStream.m_uiSize;
      m_pucData = pStream.m_pucData;
      v4->m_fileHeader.pProjectName = v12;
      if ( m_uiSize > (unsigned int)m_uiPoint )
      {
        v16 = m_pucData[m_uiPoint] | ((m_pucData[(unsigned int)(m_uiPoint + 1)] | ((m_pucData[(unsigned int)(m_uiPoint + 2)] | (m_pucData[(unsigned int)(m_uiPoint + 3)] << 8)) << 8)) << 8);
        m_uiPoint = (unsigned int)(m_uiPoint + 4);
        pStream.m_uiPoint = m_uiPoint;
      }
      else
      {
        v16 = 0;
      }
      v4->m_stageCount = v16;
      v17 = (__int64)v16 << 7;
      if ( !is_mul_ok(v16, 0x80ui64) )
        v17 = -1i64;
      v4->m_pDatas = (StageProjectData::StageData *)operator new[](v17);
      v19 = 0;
      v107 = 0;
      if ( v4->m_stageCount > 0 )
      {
        v20 = 0i64;
        pOutHeader = 0i64;
        do
        {
          v21 = &v4->m_pDatas[*(_QWORD *)&v20];
          if ( v4->m_fileHeader.dataVersion < 102 )
          {
            v21->stageNo = v19;
          }
          else if ( m_uiSize > (unsigned int)m_uiPoint )
          {
            v21->stageNo = m_pucData[m_uiPoint] | ((m_pucData[(unsigned int)(m_uiPoint + 1)] | ((m_pucData[(unsigned int)(m_uiPoint + 2)] | (m_pucData[(unsigned int)(m_uiPoint + 3)] << 8)) << 8)) << 8);
            pStream.m_uiPoint = m_uiPoint + 4;
          }
          else
          {
            v21->stageNo = STAGE_ID_TRA;
          }
          v21->pStageID = FileUtil::readString(&pStream);
          v21->pStageName = FileUtil::readString(&pStream);
          v22 = FileUtil::readString(&pStream);
          v21->pGimmickFileName = v22;
          if ( !v22 )
            goto LABEL_27;
          v23 = -1i64;
          do
            ++v23;
          while ( v22[v23] );
          if ( v23 )
            v24 = 1;
          else
LABEL_27:
            v24 = 0;
          m_uiPoint = pStream.m_uiPoint;
          m_uiSize = pStream.m_uiSize;
          m_pucData = pStream.m_pucData;
          v21->isEnableGimmickData = v24;
          if ( m_uiSize > (unsigned int)m_uiPoint )
          {
            v25 = m_pucData[m_uiPoint] | ((m_pucData[(unsigned int)(m_uiPoint + 1)] | ((m_pucData[(unsigned int)(m_uiPoint + 2)] | (m_pucData[(unsigned int)(m_uiPoint + 3)] << 8)) << 8)) << 8);
            m_uiPoint = (unsigned int)(m_uiPoint + 4);
            pStream.m_uiPoint = m_uiPoint;
          }
          else
          {
            v25 = 0;
          }
          v21->hostCharacterCount = v25;
          if ( v25 <= 0 )
          {
            v21->pHostCharacterID = 0i64;
          }
          else
          {
            v26 = (int *)operator new[](saturated_mul(v25, 4ui64));
            v27 = 0;
            v21->pHostCharacterID = v26;
            if ( v21->hostCharacterCount > 0 )
            {
              v28 = 0i64;
              v29 = (unsigned int)(m_uiPoint + 2);
              do
              {
                if ( m_uiSize > (unsigned int)m_uiPoint )
                {
                  v31 = m_pucData[m_uiPoint];
                  m_uiPoint = (unsigned int)(m_uiPoint + 4);
                  v30 = v31 | ((m_pucData[(unsigned int)(v29 - 1)] | ((m_pucData[v29] | (m_pucData[(unsigned int)(v29 + 1)] << 8)) << 8)) << 8);
                  v29 = (unsigned int)(v29 + 4);
                }
                else
                {
                  v30 = 0;
                }
                ++v27;
                v21->pHostCharacterID[v28++] = v30;
              }
              while ( v27 < v21->hostCharacterCount );
              pStream.m_uiPoint = m_uiPoint;
            }
          }
          if ( m_uiSize <= (unsigned int)m_uiPoint
            || (m_uiPoint = (unsigned int)(m_uiPoint + 4),
                pStream.m_uiPoint = m_uiPoint,
                m_uiSize <= (unsigned int)m_uiPoint)
            || (m_uiPoint = (unsigned int)(m_uiPoint + 4),
                pStream.m_uiPoint = m_uiPoint,
                m_uiSize <= (unsigned int)m_uiPoint) )
          {
            v18 = 0i64;
          }
          else
          {
            v18 = m_pucData[m_uiPoint] | ((m_pucData[(unsigned int)(m_uiPoint + 1)] | ((m_pucData[(unsigned int)(m_uiPoint + 2)] | (m_pucData[(unsigned int)(m_uiPoint + 3)] << 8)) << 8)) << 8);
            m_uiPoint = (unsigned int)(m_uiPoint + 4);
            pStream.m_uiPoint = m_uiPoint;
          }
          v21->spCharaLightCount = v18;
          if ( (int)v18 <= 0 )
          {
            v21->pSpCharaLight = 0i64;
          }
          else
          {
            v32 = (StageProjectData::StageSpCharaLightData *)operator new[](saturated_mul((int)v18, 0x18ui64));
            v33 = v21->spCharaLightCount <= 0;
            v21->pSpCharaLight = v32;
            v105 = 0;
            if ( !v33 )
            {
              v34 = 0i64;
              do
              {
                pSpCharaLight = (__int64)v21->pSpCharaLight;
                v106 = pSpCharaLight;
                if ( m_uiSize > (unsigned int)m_uiPoint )
                {
                  v18 = m_pucData[m_uiPoint] | ((m_pucData[(unsigned int)(m_uiPoint + 1)] | ((m_pucData[(unsigned int)(m_uiPoint + 2)] | (m_pucData[(unsigned int)(m_uiPoint + 3)] << 8)) << 8)) << 8);
                  m_uiPoint = (unsigned int)(m_uiPoint + 4);
                  pStream.m_uiPoint = m_uiPoint;
                }
                else
                {
                  v18 = 0i64;
                }
                *(_DWORD *)(pSpCharaLight + v34) = v18;
                if ( m_uiSize > (unsigned int)m_uiPoint
                  && (v36 = m_pucData[m_uiPoint],
                      v37 = (unsigned int)(m_uiPoint + 1),
                      v38 = (m_pucData[(unsigned int)(m_uiPoint + 2)] | (m_pucData[(unsigned int)(m_uiPoint + 3)] << 8)) << 8,
                      m_uiPoint = (unsigned int)(m_uiPoint + 4),
                      LODWORD(v37) = m_pucData[v37],
                      pStream.m_uiPoint = m_uiPoint,
                      (v39 = v36 | (((unsigned int)v37 | v38) << 8)) != 0) )
                {
                  v40 = operator new[](v39 + 1);
                  v41 = v40;
                  if ( m_uiSize > (unsigned int)m_uiPoint )
                  {
                    memmove(v40, &m_pucData[(unsigned int)m_uiPoint], v39);
                    m_uiPoint = (unsigned int)(v39 + m_uiPoint);
                    pStream.m_uiPoint = m_uiPoint;
                  }
                  pSpCharaLight = v106;
                  v41[v39] = 0;
                }
                else
                {
                  v41 = 0i64;
                }
                v42 = v105;
                *(_QWORD *)(pSpCharaLight + v34 + 8) = v41;
                *(_QWORD *)(pSpCharaLight + v34 + 16) = 0i64;
                v34 += 24i64;
                v105 = v42 + 1;
              }
              while ( v42 + 1 < v21->spCharaLightCount );
              v4 = v108;
            }
          }
          v21->bUseSoundBank = 0;
          v21->pSoundBankFilePath = 0i64;
          v21->pSounds = 0i64;
          *(_QWORD *)&v21->soundCount = 0i64;
          *(_QWORD *)&v21->reverbParams.delayTime = 0i64;
          *(_QWORD *)&v21->reverbParams.fluctuation = 0i64;
          if ( v4->m_fileHeader.dataVersion >= 103 )
          {
            if ( m_uiSize > (unsigned int)m_uiPoint )
            {
              v18 = m_pucData[m_uiPoint] | ((m_pucData[(unsigned int)(m_uiPoint + 1)] | ((m_pucData[(unsigned int)(m_uiPoint + 2)] | (m_pucData[(unsigned int)(m_uiPoint + 3)] << 8)) << 8)) << 8);
              m_uiPoint = (unsigned int)(m_uiPoint + 4);
              pStream.m_uiPoint = m_uiPoint;
            }
            else
            {
              v18 = 0i64;
            }
            v21->bUseSoundBank = (_DWORD)v18 != 0;
            if ( (_DWORD)v18 )
            {
              if ( m_uiSize > (unsigned int)m_uiPoint
                && (v43 = m_pucData[m_uiPoint],
                    v44 = (unsigned int)(m_uiPoint + 1),
                    v45 = (m_pucData[(unsigned int)(m_uiPoint + 2)] | (m_pucData[(unsigned int)(m_uiPoint + 3)] << 8)) << 8,
                    m_uiPoint = (unsigned int)(m_uiPoint + 4),
                    LODWORD(v44) = m_pucData[v44],
                    pStream.m_uiPoint = m_uiPoint,
                    (v46 = v43 | (((unsigned int)v44 | v45) << 8)) != 0) )
              {
                v47 = (char *)operator new[](v46 + 1);
                v48 = v47;
                if ( m_uiSize > (unsigned int)m_uiPoint )
                {
                  memmove(v47, &m_pucData[(unsigned int)m_uiPoint], v46);
                  m_uiPoint = (unsigned int)(v46 + m_uiPoint);
                  pStream.m_uiPoint = m_uiPoint;
                }
                v48[v46] = 0;
              }
              else
              {
                v48 = 0i64;
              }
              v21->pSoundBankFilePath = v48;
              if ( v4->m_fileHeader.dataVersion >= 104 )
              {
                if ( m_uiSize > (unsigned int)m_uiPoint )
                {
                  v49 = m_pucData[m_uiPoint] | ((m_pucData[(unsigned int)(m_uiPoint + 1)] | ((m_pucData[(unsigned int)(m_uiPoint + 2)] | (m_pucData[(unsigned int)(m_uiPoint + 3)] << 8)) << 8)) << 8);
                  m_uiPoint = (unsigned int)(m_uiPoint + 4);
                  pStream.m_uiPoint = m_uiPoint;
                }
                else
                {
                  v49 = 0;
                }
                v21->soundCount = v49;
                v50 = (StageProjectData::StageSound *)operator new[](saturated_mul(v49, 0x20ui64));
                v33 = v21->soundCount <= 0;
                v21->pSounds = v50;
                v105 = 0;
                if ( !v33 )
                {
                  v51 = 0i64;
                  do
                  {
                    pSounds = (__int64)v21->pSounds;
                    v106 = pSounds;
                    if ( m_uiSize > (unsigned int)m_uiPoint
                      && (v53 = m_pucData[m_uiPoint],
                          v54 = (unsigned int)(m_uiPoint + 1),
                          v55 = (m_pucData[(unsigned int)(m_uiPoint + 2)] | (m_pucData[(unsigned int)(m_uiPoint + 3)] << 8)) << 8,
                          m_uiPoint = (unsigned int)(m_uiPoint + 4),
                          LODWORD(v54) = m_pucData[v54],
                          pStream.m_uiPoint = m_uiPoint,
                          (v56 = v53 | (((unsigned int)v54 | v55) << 8)) != 0) )
                    {
                      v57 = operator new[](v56 + 1);
                      v58 = v57;
                      if ( m_uiSize > (unsigned int)m_uiPoint )
                      {
                        memmove(v57, &m_pucData[(unsigned int)m_uiPoint], v56);
                        m_uiPoint = (unsigned int)(v56 + m_uiPoint);
                        pStream.m_uiPoint = m_uiPoint;
                      }
                      pSounds = v106;
                      v58[v56] = 0;
                    }
                    else
                    {
                      v58 = 0i64;
                    }
                    *(_QWORD *)(pSounds + v51 + 8) = v58;
                    if ( m_uiSize > (unsigned int)m_uiPoint
                      && (v59 = m_pucData[m_uiPoint],
                          v60 = (unsigned int)(m_uiPoint + 1),
                          v61 = (m_pucData[(unsigned int)(m_uiPoint + 2)] | (m_pucData[(unsigned int)(m_uiPoint + 3)] << 8)) << 8,
                          m_uiPoint = (unsigned int)(m_uiPoint + 4),
                          LODWORD(v60) = m_pucData[v60],
                          pStream.m_uiPoint = m_uiPoint,
                          (v62 = v59 | (((unsigned int)v60 | v61) << 8)) != 0) )
                    {
                      v63 = operator new[](v62 + 1);
                      v64 = v63;
                      if ( m_uiSize > (unsigned int)m_uiPoint )
                      {
                        memmove(v63, &m_pucData[(unsigned int)m_uiPoint], v62);
                        m_uiPoint = (unsigned int)(v62 + m_uiPoint);
                        pStream.m_uiPoint = m_uiPoint;
                      }
                      pSounds = v106;
                      v64[v62] = 0;
                    }
                    else
                    {
                      v64 = 0i64;
                    }
                    *(_QWORD *)(pSounds + v51) = v64;
                    if ( m_uiSize > (unsigned int)m_uiPoint )
                    {
                      v18 = m_pucData[m_uiPoint] | ((m_pucData[(unsigned int)(m_uiPoint + 1)] | ((m_pucData[(unsigned int)(m_uiPoint + 2)] | (m_pucData[(unsigned int)(m_uiPoint + 3)] << 8)) << 8)) << 8);
                      m_uiPoint = (unsigned int)(m_uiPoint + 4);
                      pStream.m_uiPoint = m_uiPoint;
                    }
                    else
                    {
                      v18 = 0i64;
                    }
                    *(_DWORD *)(pSounds + v51 + 16) = v18;
                    if ( m_uiSize > (unsigned int)m_uiPoint )
                    {
                      v66 = *(_DWORD *)&m_pucData[m_uiPoint];
                      m_uiPoint = (unsigned int)(m_uiPoint + 4);
                      LODWORD(v106) = v66;
                      v65 = v66;
                      pStream.m_uiPoint = m_uiPoint;
                    }
                    else
                    {
                      v65 = 0;
                    }
                    *(_DWORD *)(pSounds + v51 + 20) = v65;
                    if ( m_uiSize > (unsigned int)m_uiPoint )
                    {
                      v68 = *(_DWORD *)&m_pucData[m_uiPoint];
                      m_uiPoint = (unsigned int)(m_uiPoint + 4);
                      LODWORD(v106) = v68;
                      v67 = v68;
                      pStream.m_uiPoint = m_uiPoint;
                    }
                    else
                    {
                      v67 = 0;
                    }
                    v69 = v105;
                    *(_DWORD *)(pSounds + v51 + 24) = v67;
                    v51 += 32i64;
                    v105 = v69 + 1;
                  }
                  while ( v69 + 1 < v21->soundCount );
                  v4 = v108;
                }
              }
            }
            if ( v4->m_fileHeader.dataVersion >= 106 )
            {
              if ( m_uiSize > (unsigned int)m_uiPoint )
              {
                v71 = *(float *)&m_pucData[m_uiPoint];
                m_uiPoint = (unsigned int)(m_uiPoint + 4);
                *(float *)&v106 = v71;
                v70 = v71;
                pStream.m_uiPoint = m_uiPoint;
              }
              else
              {
                v70 = 0.0;
              }
              v21->reverbParams.attenuationRate = v70;
              if ( m_uiSize > (unsigned int)m_uiPoint )
              {
                v72 = m_pucData[m_uiPoint] | ((m_pucData[(unsigned int)(m_uiPoint + 1)] | ((m_pucData[(unsigned int)(m_uiPoint + 2)] | (m_pucData[(unsigned int)(m_uiPoint + 3)] << 8)) << 8)) << 8);
                m_uiPoint = (unsigned int)(m_uiPoint + 4);
                pStream.m_uiPoint = m_uiPoint;
              }
              else
              {
                v72 = 0;
              }
              v21->reverbParams.delayTime = v72;
              if ( m_uiSize > (unsigned int)m_uiPoint )
              {
                v73 = m_pucData[m_uiPoint] | ((m_pucData[(unsigned int)(m_uiPoint + 1)] | ((m_pucData[(unsigned int)(m_uiPoint + 2)] | (m_pucData[(unsigned int)(m_uiPoint + 3)] << 8)) << 8)) << 8);
                m_uiPoint = (unsigned int)(m_uiPoint + 4);
                pStream.m_uiPoint = m_uiPoint;
              }
              else
              {
                v73 = 0;
              }
              v21->reverbParams.repeatCount = v73;
              if ( m_uiSize > (unsigned int)m_uiPoint )
              {
                v18 = m_pucData[m_uiPoint] | ((m_pucData[(unsigned int)(m_uiPoint + 1)] | ((m_pucData[(unsigned int)(m_uiPoint + 2)] | (m_pucData[(unsigned int)(m_uiPoint + 3)] << 8)) << 8)) << 8);
                m_uiPoint = (unsigned int)(m_uiPoint + 4);
                pStream.m_uiPoint = m_uiPoint;
              }
              else
              {
                v18 = 0i64;
              }
              v21->reverbParams.fluctuation = v18;
              if ( v4->m_fileHeader.dataVersion >= 107 )
              {
                if ( m_uiSize > (unsigned int)m_uiPoint )
                {
                  v75 = *(float *)&m_pucData[m_uiPoint];
                  m_uiPoint = (unsigned int)(m_uiPoint + 4);
                  *(float *)&v106 = v75;
                  v74 = v75;
                  pStream.m_uiPoint = m_uiPoint;
                }
                else
                {
                  v74 = 0.0;
                }
                v21->reverbParams.reflectionAttenuationRate = v74;
              }
            }
          }
          if ( m_uiSize > (unsigned int)m_uiPoint
            && (v76 = m_pucData[m_uiPoint],
                v77 = (unsigned int)(m_uiPoint + 1),
                v78 = (m_pucData[(unsigned int)(m_uiPoint + 2)] | (m_pucData[(unsigned int)(m_uiPoint + 3)] << 8)) << 8,
                m_uiPoint = (unsigned int)(m_uiPoint + 4),
                LODWORD(v77) = m_pucData[v77],
                pStream.m_uiPoint = m_uiPoint,
                (v79 = v76 | (((unsigned int)v77 | v78) << 8)) != 0) )
          {
            v80 = (char *)operator new[](v79 + 1);
            v81 = v80;
            if ( m_uiSize > (unsigned int)m_uiPoint )
            {
              memmove(v80, &m_pucData[(unsigned int)m_uiPoint], v79);
              m_uiPoint = (unsigned int)(v79 + m_uiPoint);
              pStream.m_uiPoint = m_uiPoint;
            }
            v81[v79] = 0;
          }
          else
          {
            v81 = 0i64;
          }
          v21->pWorldLightFilename = v81;
          if ( m_uiSize > (unsigned int)m_uiPoint )
          {
            m_uiPoint = (unsigned int)(m_uiPoint + 4);
            pStream.m_uiPoint = m_uiPoint;
          }
          if ( v21->spCharaLightCount > 0 )
          {
            v105 = 0;
            v82 = 0i64;
            do
            {
              if ( m_uiSize > (unsigned int)m_uiPoint
                && (v83 = m_pucData[m_uiPoint],
                    v84 = (unsigned int)(m_uiPoint + 1),
                    v85 = (m_pucData[(unsigned int)(m_uiPoint + 2)] | (m_pucData[(unsigned int)(m_uiPoint + 3)] << 8)) << 8,
                    m_uiPoint = (unsigned int)(m_uiPoint + 4),
                    LODWORD(v84) = m_pucData[v84],
                    pStream.m_uiPoint = m_uiPoint,
                    (v86 = v83 | (((unsigned int)v84 | v85) << 8)) != 0) )
              {
                v87 = (char *)operator new[](v86 + 1);
                v88 = v87;
                if ( m_uiSize > (unsigned int)m_uiPoint )
                {
                  memmove(v87, &m_pucData[(unsigned int)m_uiPoint], v86);
                  m_uiPoint = (unsigned int)(v86 + m_uiPoint);
                  pStream.m_uiPoint = m_uiPoint;
                }
                v88[v86] = 0;
              }
              else
              {
                v88 = 0i64;
              }
              v21->pSpCharaLight[v82++].filename = v88;
              ++v105;
            }
            while ( v105 < v21->spCharaLightCount );
            v4 = v108;
          }
          if ( m_uiSize > (unsigned int)m_uiPoint
            && (v89 = m_pucData[m_uiPoint],
                v90 = (unsigned int)(m_uiPoint + 1),
                v91 = (m_pucData[(unsigned int)(m_uiPoint + 2)] | (m_pucData[(unsigned int)(m_uiPoint + 3)] << 8)) << 8,
                m_uiPoint = (unsigned int)(m_uiPoint + 4),
                LODWORD(v90) = m_pucData[v90],
                pStream.m_uiPoint = m_uiPoint,
                (v92 = v89 | (((unsigned int)v90 | v91) << 8)) != 0) )
          {
            v93 = (char *)operator new[](v92 + 1);
            v94 = v93;
            if ( m_uiSize > (unsigned int)m_uiPoint )
            {
              memmove(v93, &m_pucData[(unsigned int)m_uiPoint], v92);
              m_uiPoint = (unsigned int)(v92 + m_uiPoint);
              pStream.m_uiPoint = m_uiPoint;
            }
            v94[v92] = 0;
          }
          else
          {
            v94 = 0i64;
          }
          v19 = v107 + 1;
          v20 = (FileUtil::Header)(*(_QWORD *)&pOutHeader + 1i64);
          v21->pPostEffectFilename = v94;
          v107 = v19;
          pOutHeader = v20;
        }
        while ( v19 < v4->m_stageCount );
        v7 = buf;
        v5 = v110;
      }
      if ( v4->m_fileHeader.dataVersion >= 105 )
      {
        v95 = FileUtil::readString(&pStream);
        if ( v95 )
          operator delete(v95, v18);
        if ( v4->m_fileHeader.dataVersion >= 109 )
        {
          v96 = pStream.m_uiPoint;
          v97 = pStream.m_uiSize;
          v98 = pStream.m_pucData;
          if ( pStream.m_uiSize > pStream.m_uiPoint )
          {
            v18 = pStream.m_pucData[pStream.m_uiPoint] | ((pStream.m_pucData[pStream.m_uiPoint + 1] | ((pStream.m_pucData[pStream.m_uiPoint + 2] | (pStream.m_pucData[pStream.m_uiPoint + 3] << 8)) << 8)) << 8);
            v96 = pStream.m_uiPoint + 4;
          }
          else
          {
            v18 = 0i64;
          }
          v4->m_cameraLightCharacterIDCount = v18;
          if ( (int)v18 > 0 )
          {
            v99 = (CHARACTER_NO *)operator new[](saturated_mul((int)v18, 4ui64));
            v100 = 0;
            v4->m_pCameraLightCharacterIDs = v99;
            if ( v4->m_cameraLightCharacterIDCount > 0 )
            {
              v101 = 0i64;
              v102 = v96 + 2;
              do
              {
                v103 = (unsigned int)(v102 - 2);
                if ( v97 > (unsigned int)v103 )
                {
                  v18 = v98[v103] | ((v98[(unsigned int)(v102 - 1)] | ((v98[v102] | (v98[(unsigned int)(v102 + 1)] << 8)) << 8)) << 8);
                  v102 = (unsigned int)(v102 + 4);
                }
                else
                {
                  v18 = 0i64;
                }
                ++v100;
                v4->m_pCameraLightCharacterIDs[v101++] = v18;
              }
              while ( v100 < v4->m_cameraLightCharacterIDCount );
            }
          }
        }
      }
      operator delete(v7, v18);
      v4->m_pProjectFileDir = FileUtil::getFilePath(v5);
      v4->m_readStatus = STAGEPROJ_ERR_SUCCESS;
    }
    else
    {
      v4->m_readStatus = STAGEPROJ_ERR_FAILED;
    }
    return (unsigned int)v4->m_readStatus;
  }
  else
  {
    v4->m_readStatus = STAGEPROJ_ERR_FAILED;
    return 2i64;
  }
}

StageProjectData::StageSpCharaLightData *__fastcall StageProjectData::findCharacterLightData(
        StageProjectData *this,
        STAGE_ID stageID,
        CHARACTER_NO characterNo)
{
  int v6; // edx
  int v7; // er8
  StageProjectData::StageData *m_pDatas; // rbx
  __int64 m_stageCount; // r11
  StageProjectData::StageData *v10; // rax
  __int64 v11; // rcx
  StageProjectData::StageData *v12; // rax
  StageProjectData::StageSpCharaLightData *pSpCharaLight; // r10
  __int64 spCharaLightCount; // r8
  StageProjectData::StageSpCharaLightData *v15; // rax
  __int64 v16; // rcx

  if ( this->m_readStatus != STAGEPROJ_ERR_SUCCESS )
    return 0i64;
  v6 = 0;
  v7 = 0;
  if ( this->m_stageCount <= 0 )
    return 0i64;
  m_pDatas = this->m_pDatas;
  m_stageCount = this->m_stageCount;
  v10 = m_pDatas;
  v11 = 0i64;
  while ( v10->stageNo != stageID )
  {
    ++v7;
    ++v11;
    ++v10;
    if ( v11 >= m_stageCount )
      return 0i64;
  }
  v12 = &m_pDatas[(__int64)v7];
  if ( !v12 || v12->spCharaLightCount <= 0 )
    return 0i64;
  pSpCharaLight = v12->pSpCharaLight;
  spCharaLightCount = v12->spCharaLightCount;
  v15 = pSpCharaLight;
  v16 = 0i64;
  while ( v15->no != characterNo )
  {
    ++v6;
    ++v16;
    ++v15;
    if ( v16 >= spCharaLightCount )
      return 0i64;
  }
  return &pSpCharaLight[v6];
}

