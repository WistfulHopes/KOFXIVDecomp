#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshkey.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixstate.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_gradients.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_rasterizer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_viewport.h"
#include "dev/silverware/git/sdk/util/agservice.h"
#include "dev/silverware/git/sdk/agthreadpool.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglshader.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_drawableimage.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/mat_aos.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hal.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_buffer.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/jobmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_characterdef.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exwaitcondition.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thr/xthread"
#include "program files (x86)/windows kits/8.1/include/shared/guiddef.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/operationmapper.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filters.h"
#include "program files (x86)/windows kits/8.1/include/shared/stralign.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filterparams.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/functional"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_font.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/matrix4unaligned.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessdefs.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/quat_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_new.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/resourcemanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatapacked.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/algorithm"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_pathdatapacker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_linebuffer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_highlight.h"
#include "dev/silverware/git/sdk/3rdparty/steam/isteamhtmlsurface.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/string"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_profiler.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_states.h"
#include "dev/kof/master/development/source/ps4project/baseproject/pcutil/pcdummy.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/tga_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_statebag.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/mediamanager.h"
#include "dev/silverware/git/sdk/agreferencedobjectinl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "dev/silverware/git/sdk/agpointer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_simplemeshcache.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/audiopresenter.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_sse.h"
#include "dev/silverware/git/sdk/agreferencedobject.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/fontprovider/render_fontproviderwinapi.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdata/effectdata.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_types.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thread"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "program files (x86)/windows kits/8.1/include/um/winnt.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/memory"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/chartdata.h"
#include "program files (x86)/windows kits/8.1/include/shared/basetsd.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_bundle.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmodel.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/atomic"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloatmp.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapemeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/jpeg_imagefile.h"
#include "dev/silverware/git/sdk/agthread.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treetext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefileutil.h"
#include "dev/silverware/git/sdk/agmutex.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/tuple"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_docview.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/libcommon.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector2unaligned.h"
#include "dev/silverware/git/sdk/agscopedlock.h"
#include "dev/silverware/git/sdk/agreferenceinl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_range.h"
#include "dev/silverware/git/sdk/agconditionvariable.inl"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xfacet"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdata/effectappdata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_hash.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exthread.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_functions.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/ios"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/bilinkable.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/mediasound.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/effect.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocnum"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/particledata.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steam_api_internal.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_exception.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix4x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixpool.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xiosbase"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shader.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglbone.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocale"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_sgmlparser.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/array"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_context.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/time.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_typeinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_constants.h"
#include "dev/silverware/git/sdk/agreferencecount.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessgen.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treeshape.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessellator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "program files (x86)/windows kits/8.1/include/um/winuser.h"
#include "dev/silverware/git/sdk/memory/agallocators.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steam_api.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/mutex"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/map"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitivebundle.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/chrono"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtree"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treecachenode.h"
#include "dev/silverware/git/sdk/input/agcontrollercomponent.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treenode.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_loader.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cacheeffect.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_system.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphfitter.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmirror.h"
#include "dev/silverware/git/sdk/util/agdelegate.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/boolinvec.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_player.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/list"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_resource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/system_error"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/randomnumbers.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_stroker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/dds_imagefile.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/randommt.h"
#include "dev/silverware/git/sdk/system/agsysteminfo.h"
#include "dev/silverware/git/sdk/util/agservicecommand.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector3unaligned.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textmeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xxatomic"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/stdexcept"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstring"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphparam.h"
#include "dev/silverware/git/sdk/3rdparty/steam/matchmakingtypes.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcache.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/particleemitter.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcacheconfig.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/refcountable.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/emitter.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hairliner.h"
#include "dev/silverware/git/sdk/util/agdebugchannels.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_filterdesc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_styledtext.h"
#include "dev/silverware/git/sdk/util/agperformancecounter.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix3x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_core.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_queue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "dev/silverware/git/sdk/agclock.h"
#include "program files (x86)/windows kits/8.1/include/um/winbase.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_fontmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitive.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/debug/logging.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocaddr.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/vec_aos.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_radixtree.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdatalistmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_twips.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/heapmemory.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/boolinvec.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_containers.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_wwhelper.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/mutex.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/limits"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/vectormath_aos.h"
#include "dev/silverware/git/sdk/agcondition.h"
#include "dev/silverware/git/sdk/platforms/pc/system/agpcsysteminfo.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/globalheapmemory.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/fixmemory.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocinfo"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogleffect.h"
#include "dev/silverware/git/sdk/agreferencecountinl.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xutility"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/utility"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "dev/silverware/git/sdk/filesystem/agfile.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/iosfwd"
#include "dev/silverware/git/sdk/filesystem/agpath.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_vertex.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogllight.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/fontprovider/render_fontproviderhud.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_wstring.h"
#include "dev/silverware/git/sdk/filesystem/agmount.h"
#include "dev/silverware/git/sdk/input/agsdlmappingparser.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xhash"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglcurve.h"
#include "dev/silverware/git/sdk/filesystem/agdirectory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/mat_aos.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglsprite.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threadcheck.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steamclientpublic.h"
#include "dev/kof/master/development/source/ps4project/baseproject/pcutil/pccontrolsmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textlayout.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_image.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglrender.h"
#include "dev/silverware/git/sdk/input/aginputmanager.h"
#include "dev/silverware/git/sdk/agsingleton.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exlockable.h"
#include "dev/silverware/git/sdk/aghash.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector4unaligned.h"
#include "dev/silverware/git/sdk/agmutex.inl"
#include "dev/silverware/git/sdk/agstringutils.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglfog.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic0.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/math.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/emitterformstate/emitterformstatecurve.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/variableheapmemorybase.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/vecidx_aos.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/future_asset.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_movie.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/floatinvec.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_operation.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/asyncjob.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/bitset"
#include "dev/silverware/git/sdk/agpointerinl.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/atomic_int.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_screentoworld.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectcommon.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/quat_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vector"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/floatinvec.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_strokeraa.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_scale9grid.h"
#include "dev/silverware/git/sdk/agcondition.inl"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory0"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraystaticbuff.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/physicalheapmemory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cxform.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "dev/silverware/git/sdk/agsemaphore.h"
#include "dev/silverware/git/sdk/agmemorystream.h"
#include "dev/silverware/git/sdk/agvector2.h"
#include "dev/silverware/git/sdk/agsemaphore.inl"
#include "dev/silverware/git/sdk/agconditionvariable.h"
#include "dev/silverware/git/sdk/agmemorypool.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_vec64.h"
#include "dev/silverware/git/sdk/agmath.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/condition_variable"
#include "dev/silverware/git/sdk/input/agcontrollerbuttoncomponent.h"
#include "dev/silverware/git/sdk/input/agcontroller.h"
#include "dev/silverware/git/sdk/agstream.h"
#include "dev/silverware/git/sdk/system/aguser.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstddef"
#include "dev/silverware/git/sdk/agstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/silverware/git/sdk/system/agusermanager.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_math.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/exception"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/type_traits"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/deque"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_event.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/vec_aos.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/png_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_keycodes.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/effect.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/field.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/randomnumbers.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglvec3.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/oglinheritance/ogleffectvec3.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/oglinheritance/ogleffectquat.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglquat.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdata/effectdata.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdata/fielddata.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdata/collisionfielddata.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/oglinheritance/ogleffectvec2.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglvec2.cpp"

std::piecewise_construct_t std::piecewise_construct; // 0x14089E382
void CollisionField::ownInitialize(); // 0x140135DD0
void CollisionField::updateForceFieldData(bool mirrorFlag, const OGLMatrix & worldMat, Effect * pEffect, float frame); // 0x140135E60
void CollisionField::updateForceFieldData(bool mirrorFlag, const OGLMatrix & actionMat, ParticleEmitter * pParticleEmitter, float frame); // 0x140135EA0
void CollisionField::localCollision(bool mirrorFlag, const OGLMatrix & actionMat, ParticleEmitter * pParticleEmitter, float frame); // 0x140135F40
void CollisionField::worldCollision(bool mirrorFlag, const OGLMatrix & actionMat, ParticleEmitter * pParticleEmitter, float frame); // 0x1401364C0
void CollisionField::collisionBehavior(OGLEffectVec3 * Vel, OGLEffectQuat * RotVel, ParticleData * pParticleData, bool mirrorFlag, const OGLMatrix & actionMat, ParticleEmitter * pParticleEmitter, float frame); // 0x140136D00//decompilation failure at 14089E382!
float __fastcall RandomNumbers::uniformRandomNumbers<float>(RandomNumbers *this, float under, float over)
{
  float result; // xmm0_4

  result = 0.0;
  if ( under != 0.0 || over != 0.0 )
    return (float)((float)((float)rand() / 32767.0) * (float)(over - under)) + under;
  return result;
}

float __fastcall RandomNumbers::widthUniformRandomNumbers<float>(RandomNumbers *this, float width)
{
  float result; // xmm0_4

  result = 0.0;
  if ( width != 0.0 )
    return (float)((float)((float)rand() / 32767.0) * (float)(width - COERCE_FLOAT(LODWORD(width) ^ _xmm)))
         + COERCE_FLOAT(LODWORD(width) ^ _xmm);
  return result;
}

void __fastcall CollisionField::collisionBehavior(
        CollisionField *this,
        OGLEffectVec3 *Vel,
        OGLEffectQuat *RotVel,
        ParticleData *pParticleData)
{
  float v7; // xmm7_4
  EffectData *m_SettingData; // r8
  DialogData *Myfirst; // rcx
  int v10; // edx
  DialogData *v11; // rcx
  float *v12; // r10
  DialogData *v13; // rcx
  float *v14; // r9
  DialogData *v15; // rcx
  float v16; // xmm15_4
  float v17; // xmm14_4
  DialogData *v18; // rcx
  float v19; // xmm8_4
  float v20; // xmm9_4
  EffectData *v21; // r8
  DialogData *v22; // rcx
  float v23; // xmm10_4
  float v24; // xmm8_4
  EffectData *v25; // r8
  DialogData *v26; // rcx
  float v27; // xmm10_4
  float v28; // xmm0_4
  float v29; // xmm8_4
  float v30; // xmm9_4
  EffectData *v31; // r8
  DialogData *v32; // rcx
  float *v33; // r10
  DialogData *v34; // rcx
  float *v35; // r9
  DialogData *v36; // rcx
  float v37; // xmm15_4
  float v38; // xmm14_4
  DialogData *v39; // rcx
  float v40; // xmm8_4
  float v41; // xmm9_4
  EffectData *v42; // r8
  DialogData *v43; // rcx
  float v44; // xmm10_4
  float v45; // xmm8_4
  EffectData *v46; // r8
  DialogData *v47; // rcx
  float v48; // xmm10_4
  float v49; // xmm7_4
  EffectData *v50; // r8
  DialogData *v51; // rcx
  DialogData *v52; // rcx
  int v53; // edx
  int v54; // edx
  __int64 rfX; // [rsp+40h] [rbp-C8h] BYREF
  float rfZ[2]; // [rsp+48h] [rbp-C0h] BYREF
  void **v57; // [rsp+50h] [rbp-B8h]
  __int64 v58; // [rsp+58h] [rbp-B0h]
  __int64 v59; // [rsp+60h] [rbp-A8h]
  void **v60; // [rsp+68h] [rbp-A0h]
  __int64 v61; // [rsp+70h] [rbp-98h]
  float v62; // [rsp+78h] [rbp-90h]
  float v63; // [rsp+148h] [rbp+40h]
  float v64; // [rsp+148h] [rbp+40h]

  v7 = 0.0;
  v58 = 0i64;
  LODWORD(v59) = 0;
  v57 = &OGLEffectVec3::`vftable';
  v61 = 0i64;
  v62 = 0.0;
  v60 = &OGLEffectVec3::`vftable';
  m_SettingData = this->m_SettingData;
  if ( !(m_SettingData->AllDialogData._Mypair._Myval2._Mylast - m_SettingData->AllDialogData._Mypair._Myval2._Myfirst) )
    std::_Xout_of_range("invalid vector<T> subscript");
  Myfirst = m_SettingData->AllDialogData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(Myfirst->allComboIndexData._Mypair._Myval2._Mylast
                        - Myfirst->allComboIndexData._Mypair._Myval2._Myfirst) <= 4 )
    std::_Xout_of_range("invalid vector<T> subscript");
  v10 = Myfirst->allComboIndexData._Mypair._Myval2._Myfirst[4];
  if ( v10 )
  {
    if ( v10 == 1 )
      pParticleData->Flags |= 1u;
  }
  else
  {
    if ( !(m_SettingData->AllDialogData._Mypair._Myval2._Mylast - m_SettingData->AllDialogData._Mypair._Myval2._Myfirst) )
      std::_Xout_of_range("invalid vector<T> subscript");
    v11 = m_SettingData->AllDialogData._Mypair._Myval2._Myfirst;
    if ( (unsigned __int64)(v11->allEditNumData._Mypair._Myval2._Mylast - v11->allEditNumData._Mypair._Myval2._Myfirst) <= 0xB )
      std::_Xout_of_range("invalid vector<T> subscript");
    v12 = v11->allEditNumData._Mypair._Myval2._Myfirst;
    if ( !(m_SettingData->AllDialogData._Mypair._Myval2._Mylast - m_SettingData->AllDialogData._Mypair._Myval2._Myfirst) )
      std::_Xout_of_range("invalid vector<T> subscript");
    v13 = m_SettingData->AllDialogData._Mypair._Myval2._Myfirst;
    if ( (unsigned __int64)(v13->allEditNumData._Mypair._Myval2._Mylast - v13->allEditNumData._Mypair._Myval2._Myfirst) <= 0xA )
      std::_Xout_of_range("invalid vector<T> subscript");
    v14 = v13->allEditNumData._Mypair._Myval2._Myfirst;
    if ( !(m_SettingData->AllDialogData._Mypair._Myval2._Mylast - m_SettingData->AllDialogData._Mypair._Myval2._Myfirst) )
      std::_Xout_of_range("invalid vector<T> subscript");
    v15 = m_SettingData->AllDialogData._Mypair._Myval2._Myfirst;
    if ( (unsigned __int64)(v15->allEditNumData._Mypair._Myval2._Mylast - v15->allEditNumData._Mypair._Myval2._Myfirst) <= 9 )
      std::_Xout_of_range("invalid vector<T> subscript");
    v16 = v12[11] / 100.0;
    v63 = v14[10] / 100.0;
    v17 = v15->allEditNumData._Mypair._Myval2._Myfirst[9] / 100.0;
    *(float *)&v58 = v17;
    *((float *)&v58 + 1) = v63;
    *(float *)&v59 = v16;
    if ( !(m_SettingData->AllDialogData._Mypair._Myval2._Mylast - m_SettingData->AllDialogData._Mypair._Myval2._Myfirst) )
      std::_Xout_of_range("invalid vector<T> subscript");
    v18 = m_SettingData->AllDialogData._Mypair._Myval2._Myfirst;
    if ( (unsigned __int64)(v18->allEditNumData._Mypair._Myval2._Mylast - v18->allEditNumData._Mypair._Myval2._Myfirst) <= 0xE )
      std::_Xout_of_range("invalid vector<T> subscript");
    v19 = v18->allEditNumData._Mypair._Myval2._Myfirst[14];
    if ( v19 == 0.0 )
      v20 = 0.0;
    else
      v20 = (float)((float)((float)rand() / 32767.0) * (float)(v19 - COERCE_FLOAT(LODWORD(v19) ^ _xmm)))
          + COERCE_FLOAT(LODWORD(v19) ^ _xmm);
    v21 = this->m_SettingData;
    if ( !(v21->AllDialogData._Mypair._Myval2._Mylast - v21->AllDialogData._Mypair._Myval2._Myfirst) )
      std::_Xout_of_range("invalid vector<T> subscript");
    v22 = v21->AllDialogData._Mypair._Myval2._Myfirst;
    if ( (unsigned __int64)(v22->allEditNumData._Mypair._Myval2._Mylast - v22->allEditNumData._Mypair._Myval2._Myfirst) <= 0xD )
      std::_Xout_of_range("invalid vector<T> subscript");
    v23 = v22->allEditNumData._Mypair._Myval2._Myfirst[13];
    if ( v23 == 0.0 )
      v24 = 0.0;
    else
      v24 = (float)((float)((float)rand() / 32767.0) * (float)(v23 - COERCE_FLOAT(LODWORD(v23) ^ _xmm)))
          + COERCE_FLOAT(LODWORD(v23) ^ _xmm);
    v25 = this->m_SettingData;
    if ( !(v25->AllDialogData._Mypair._Myval2._Mylast - v25->AllDialogData._Mypair._Myval2._Myfirst) )
      std::_Xout_of_range("invalid vector<T> subscript");
    v26 = v25->AllDialogData._Mypair._Myval2._Myfirst;
    if ( (unsigned __int64)(v26->allEditNumData._Mypair._Myval2._Mylast - v26->allEditNumData._Mypair._Myval2._Myfirst) <= 0xC )
      std::_Xout_of_range("invalid vector<T> subscript");
    v27 = v26->allEditNumData._Mypair._Myval2._Myfirst[12];
    if ( v27 == 0.0 )
      v28 = 0.0;
    else
      v28 = (float)((float)((float)rand() / 32767.0) * (float)(v27 - COERCE_FLOAT(LODWORD(v27) ^ _xmm)))
          + COERCE_FLOAT(LODWORD(v27) ^ _xmm);
    v29 = (float)(v24 / 100.0) + v63;
    v30 = (float)(v20 / 100.0) + v16;
    *(float *)&v58 = 1.0 - (float)(v17 + (float)(v28 / 100.0));
    *((float *)&v58 + 1) = 1.0 - v29;
    *(float *)&v59 = 1.0 - v30;
    Vel->x = *(float *)&v58 * Vel->x;
    Vel->y = (float)(1.0 - v29) * Vel->y;
    Vel->z = (float)(1.0 - v30) * Vel->z;
    v31 = this->m_SettingData;
    if ( !(v31->AllDialogData._Mypair._Myval2._Mylast - v31->AllDialogData._Mypair._Myval2._Myfirst) )
      std::_Xout_of_range("invalid vector<T> subscript");
    v32 = v31->AllDialogData._Mypair._Myval2._Myfirst;
    if ( (unsigned __int64)(v32->allEditNumData._Mypair._Myval2._Mylast - v32->allEditNumData._Mypair._Myval2._Myfirst) <= 0x11 )
      std::_Xout_of_range("invalid vector<T> subscript");
    v33 = v32->allEditNumData._Mypair._Myval2._Myfirst;
    if ( !(v31->AllDialogData._Mypair._Myval2._Mylast - v31->AllDialogData._Mypair._Myval2._Myfirst) )
      std::_Xout_of_range("invalid vector<T> subscript");
    v34 = v31->AllDialogData._Mypair._Myval2._Myfirst;
    if ( (unsigned __int64)(v34->allEditNumData._Mypair._Myval2._Mylast - v34->allEditNumData._Mypair._Myval2._Myfirst) <= 0x10 )
      std::_Xout_of_range("invalid vector<T> subscript");
    v35 = v34->allEditNumData._Mypair._Myval2._Myfirst;
    if ( !(v31->AllDialogData._Mypair._Myval2._Mylast - v31->AllDialogData._Mypair._Myval2._Myfirst) )
      std::_Xout_of_range("invalid vector<T> subscript");
    v36 = v31->AllDialogData._Mypair._Myval2._Myfirst;
    if ( (unsigned __int64)(v36->allEditNumData._Mypair._Myval2._Mylast - v36->allEditNumData._Mypair._Myval2._Myfirst) <= 0xF )
      std::_Xout_of_range("invalid vector<T> subscript");
    v37 = v33[17] / 100.0;
    v64 = v35[16] / 100.0;
    v38 = v36->allEditNumData._Mypair._Myval2._Myfirst[15] / 100.0;
    *(float *)&v61 = v38;
    *((float *)&v61 + 1) = v64;
    v62 = v37;
    if ( !(v31->AllDialogData._Mypair._Myval2._Mylast - v31->AllDialogData._Mypair._Myval2._Myfirst) )
      std::_Xout_of_range("invalid vector<T> subscript");
    v39 = v31->AllDialogData._Mypair._Myval2._Myfirst;
    if ( (unsigned __int64)(v39->allEditNumData._Mypair._Myval2._Mylast - v39->allEditNumData._Mypair._Myval2._Myfirst) <= 0x14 )
      std::_Xout_of_range("invalid vector<T> subscript");
    v40 = v39->allEditNumData._Mypair._Myval2._Myfirst[20];
    if ( v40 == 0.0 )
      v41 = 0.0;
    else
      v41 = (float)((float)((float)rand() / 32767.0) * (float)(v40 - COERCE_FLOAT(LODWORD(v40) ^ _xmm)))
          + COERCE_FLOAT(LODWORD(v40) ^ _xmm);
    v42 = this->m_SettingData;
    if ( !(v42->AllDialogData._Mypair._Myval2._Mylast - v42->AllDialogData._Mypair._Myval2._Myfirst) )
      std::_Xout_of_range("invalid vector<T> subscript");
    v43 = v42->AllDialogData._Mypair._Myval2._Myfirst;
    if ( (unsigned __int64)(v43->allEditNumData._Mypair._Myval2._Mylast - v43->allEditNumData._Mypair._Myval2._Myfirst) <= 0x13 )
      std::_Xout_of_range("invalid vector<T> subscript");
    v44 = v43->allEditNumData._Mypair._Myval2._Myfirst[19];
    if ( v44 == 0.0 )
      v45 = 0.0;
    else
      v45 = (float)((float)((float)rand() / 32767.0) * (float)(v44 - COERCE_FLOAT(LODWORD(v44) ^ _xmm)))
          + COERCE_FLOAT(LODWORD(v44) ^ _xmm);
    v46 = this->m_SettingData;
    if ( !(v46->AllDialogData._Mypair._Myval2._Mylast - v46->AllDialogData._Mypair._Myval2._Myfirst) )
      std::_Xout_of_range("invalid vector<T> subscript");
    v47 = v46->AllDialogData._Mypair._Myval2._Myfirst;
    if ( (unsigned __int64)(v47->allEditNumData._Mypair._Myval2._Mylast - v47->allEditNumData._Mypair._Myval2._Myfirst) <= 0x12 )
      std::_Xout_of_range("invalid vector<T> subscript");
    v48 = v47->allEditNumData._Mypair._Myval2._Myfirst[18];
    if ( v48 != 0.0 )
      v7 = (float)((float)((float)rand() / 32767.0) * (float)(v48 - COERCE_FLOAT(LODWORD(v48) ^ _xmm)))
         + COERCE_FLOAT(LODWORD(v48) ^ _xmm);
    v49 = 1.0 - (float)(v38 + (float)(v7 / 100.0));
    *(float *)&v61 = v49;
    *((float *)&v61 + 1) = 1.0 - (float)((float)(v45 / 100.0) + v64);
    v62 = 1.0 - (float)((float)(v41 / 100.0) + v37);
    rfX = 0i64;
    rfZ[0] = 0.0;
    OGLEffectQuat::getRotateEuler(RotVel, (float *)&rfX, (float *)&rfX + 1, rfZ);
    *(float *)&rfX = *(float *)&rfX * v49;
    *((float *)&rfX + 1) = *((float *)&rfX + 1) * (float)(1.0 - (float)((float)(v45 / 100.0) + v64));
    rfZ[0] = rfZ[0] * (float)(1.0 - (float)((float)(v41 / 100.0) + v37));
    OGLEffectQuat::setRotateEuler(RotVel, *(float *)&rfX, *((float *)&rfX + 1), rfZ[0]);
    v50 = this->m_SettingData;
    if ( !(v50->AllDialogData._Mypair._Myval2._Mylast - v50->AllDialogData._Mypair._Myval2._Myfirst) )
      std::_Xout_of_range("invalid vector<T> subscript");
    v51 = v50->AllDialogData._Mypair._Myval2._Myfirst;
    if ( !(v51->allComboIndexData._Mypair._Myval2._Mylast - v51->allComboIndexData._Mypair._Myval2._Myfirst) )
      std::_Xout_of_range("invalid vector<T> subscript");
    if ( !*v51->allComboIndexData._Mypair._Myval2._Myfirst )
    {
      if ( !(v50->AllDialogData._Mypair._Myval2._Mylast - v50->AllDialogData._Mypair._Myval2._Myfirst) )
        std::_Xout_of_range("invalid vector<T> subscript");
      v52 = v50->AllDialogData._Mypair._Myval2._Myfirst;
      if ( !(v52->allButtonIndexData._Mypair._Myval2._Mylast - v52->allButtonIndexData._Mypair._Myval2._Myfirst) )
        std::_Xout_of_range("invalid vector<T> subscript");
      v53 = *v52->allButtonIndexData._Mypair._Myval2._Myfirst;
      if ( v53 )
      {
        v54 = v53 - 1;
        if ( v54 )
        {
          if ( v54 == 1 )
            Vel->x = Vel->x * -1.0;
        }
        else
        {
          Vel->z = Vel->z * -1.0;
        }
      }
      else
      {
        Vel->y = Vel->y * -1.0;
      }
    }
  }
}

void __fastcall CollisionField::localCollision(
        CollisionField *this,
        bool mirrorFlag,
        const OGLMatrix *actionMat,
        ParticleEmitter *pParticleEmitter,
        float frame)
{
  unsigned int v8; // esi
  float v9; // xmm8_4
  ParticleData *v10; // r14
  OGLVec3 *v11; // rcx
  OGLVec3 *v12; // rcx
  EffectData *m_SettingData; // r8
  DialogData *Myfirst; // rcx
  float *v15; // r10
  DialogData *v16; // rcx
  float *v17; // r9
  DialogData *v18; // rcx
  float v19; // xmm1_4
  float v20; // xmm6_4
  float v21; // xmm6_4
  bool v22; // r9
  DialogData *v23; // rcx
  DialogData *v24; // rcx
  int v25; // edx
  int v26; // edx
  OGLEffectVec3 *v27; // rax
  float *p_x; // rax
  OGLMatrix *v29; // rcx
  int *v30; // rax
  _OWORD *v31; // rcx
  int planeNormal; // [rsp+20h] [rbp-E0h]
  OGLEffectVec3 v33; // [rsp+40h] [rbp-C0h] BYREF
  OGLEffectVec3 planePoint; // [rsp+58h] [rbp-A8h] BYREF
  void **v35; // [rsp+70h] [rbp-90h] BYREF
  int v36; // [rsp+78h] [rbp-88h]
  float v37; // [rsp+7Ch] [rbp-84h]
  float v38; // [rsp+80h] [rbp-80h]
  OGLEffectVec3 p2; // [rsp+90h] [rbp-70h] BYREF
  OGLEffectVec3 p1; // [rsp+A8h] [rbp-58h] BYREF
  OGLEffectVec3 result; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v42; // [rsp+D8h] [rbp-28h]
  OGLMatrix v43; // [rsp+E0h] [rbp-20h] BYREF
  bool collisionFlag; // [rsp+1A8h] [rbp+A8h] BYREF

  v42 = -2i64;
  v8 = 0;
  if ( (unsigned int)(pParticleEmitter->m_ParticleData._Mypair._Myval2._Mylast
                    - pParticleEmitter->m_ParticleData._Mypair._Myval2._Myfirst) )
  {
    v9 = frame;
    do
    {
      if ( pParticleEmitter->m_ParticleData._Mypair._Myval2._Mylast
         - pParticleEmitter->m_ParticleData._Mypair._Myval2._Myfirst <= (unsigned __int64)(int)v8 )
        std::_Xout_of_range("invalid vector<T> subscript");
      v10 = pParticleEmitter->m_ParticleData._Mypair._Myval2._Myfirst[v8];
      v11 = &v10->LocalPos.OGLVec3;
      if ( v10 == (ParticleData *)-664i64 )
        v11 = 0i64;
      p1.OGLVec3 = *v11;
      p1.__vftable = (OGLEffectVec3_vtbl *)&OGLEffectVec3::`vftable';
      v12 = &v10->PreLocalPos.OGLVec3;
      if ( v10 == (ParticleData *)-688i64 )
        v12 = 0i64;
      p2.OGLVec3 = *v12;
      p2.__vftable = (OGLEffectVec3_vtbl *)&OGLEffectVec3::`vftable';
      *(_QWORD *)&v33.x = 0i64;
      v33.z = 0.0;
      v33.__vftable = (OGLEffectVec3_vtbl *)&OGLEffectVec3::`vftable';
      planePoint.__vftable = (OGLEffectVec3_vtbl *)&OGLEffectVec3::`vftable';
      *(_QWORD *)&planePoint.x = 0i64;
      planePoint.z = 0.0;
      m_SettingData = this->m_SettingData;
      if ( !(m_SettingData->AllDialogData._Mypair._Myval2._Mylast - m_SettingData->AllDialogData._Mypair._Myval2._Myfirst) )
        std::_Xout_of_range("invalid vector<T> subscript");
      Myfirst = m_SettingData->AllDialogData._Mypair._Myval2._Myfirst;
      if ( (unsigned __int64)(Myfirst->allEditNumData._Mypair._Myval2._Mylast
                            - Myfirst->allEditNumData._Mypair._Myval2._Myfirst) <= 8 )
        std::_Xout_of_range("invalid vector<T> subscript");
      v15 = Myfirst->allEditNumData._Mypair._Myval2._Myfirst;
      if ( !(m_SettingData->AllDialogData._Mypair._Myval2._Mylast - m_SettingData->AllDialogData._Mypair._Myval2._Myfirst) )
        std::_Xout_of_range("invalid vector<T> subscript");
      v16 = m_SettingData->AllDialogData._Mypair._Myval2._Myfirst;
      if ( (unsigned __int64)(v16->allEditNumData._Mypair._Myval2._Mylast - v16->allEditNumData._Mypair._Myval2._Myfirst) <= 7 )
        std::_Xout_of_range("invalid vector<T> subscript");
      v17 = v16->allEditNumData._Mypair._Myval2._Myfirst + 7;
      if ( !(m_SettingData->AllDialogData._Mypair._Myval2._Mylast - m_SettingData->AllDialogData._Mypair._Myval2._Myfirst) )
        std::_Xout_of_range("invalid vector<T> subscript");
      v18 = m_SettingData->AllDialogData._Mypair._Myval2._Myfirst;
      if ( (unsigned __int64)(v18->allEditNumData._Mypair._Myval2._Mylast - v18->allEditNumData._Mypair._Myval2._Myfirst) <= 6 )
        std::_Xout_of_range("invalid vector<T> subscript");
      v19 = v15[8];
      v20 = *v17;
      planePoint.x = v18->allEditNumData._Mypair._Myval2._Myfirst[6] + 0.0;
      v21 = v20 + 0.0;
      planePoint.y = v21;
      planePoint.z = v19 + 0.0;
      v22 = 0;
      collisionFlag = 0;
      if ( !(m_SettingData->AllDialogData._Mypair._Myval2._Mylast - m_SettingData->AllDialogData._Mypair._Myval2._Myfirst) )
        std::_Xout_of_range("invalid vector<T> subscript");
      v23 = m_SettingData->AllDialogData._Mypair._Myval2._Myfirst;
      if ( !(v23->allComboIndexData._Mypair._Myval2._Mylast - v23->allComboIndexData._Mypair._Myval2._Myfirst) )
        std::_Xout_of_range("invalid vector<T> subscript");
      if ( !*v23->allComboIndexData._Mypair._Myval2._Myfirst )
      {
        if ( !(m_SettingData->AllDialogData._Mypair._Myval2._Mylast
             - m_SettingData->AllDialogData._Mypair._Myval2._Myfirst) )
          std::_Xout_of_range("invalid vector<T> subscript");
        v24 = m_SettingData->AllDialogData._Mypair._Myval2._Myfirst;
        if ( !(v24->allButtonIndexData._Mypair._Myval2._Mylast - v24->allButtonIndexData._Mypair._Myval2._Myfirst) )
          std::_Xout_of_range("invalid vector<T> subscript");
        v25 = *v24->allButtonIndexData._Mypair._Myval2._Myfirst;
        if ( v25 )
        {
          v26 = v25 - 1;
          if ( v26 )
          {
            if ( v26 == 1 )
            {
              *(_QWORD *)&v33.x = 1065353216i64;
              v33.z = 0.0;
            }
          }
          else
          {
            *(_QWORD *)&v33.x = 0i64;
            v33.z = 1.0;
          }
        }
        else
        {
          v33.x = 0.0;
          *(_QWORD *)&v33.y = 1065353216i64;
        }
        v27 = D3DMath::CollisionLineAndPlane(&result, &p1, &p2, &planePoint, &v33, &collisionFlag);
        if ( v27 )
          p_x = &v27->x;
        else
          p_x = 0i64;
        planePoint.x = *p_x;
        v21 = p_x[1];
        planePoint.y = v21;
        planePoint.z = p_x[2];
        v22 = collisionFlag;
      }
      if ( v22 )
      {
        v29 = &v10->ReferenceMat.OGLMatrix;
        if ( v10 == (ParticleData *)-328i64 )
          v29 = 0i64;
        v43 = *v29;
        OGLMatrix::inverse(&v43);
        v30 = (int *)&v10->LocalVel.OGLVec3;
        if ( v10 == (ParticleData *)-712i64 )
          v30 = 0i64;
        v36 = *v30;
        v37 = *((float *)v30 + 1);
        v38 = *((float *)v30 + 2);
        v35 = &OGLEffectVec3::`vftable';
        v31 = (_OWORD *)&v10->LocalRotVel.x;
        if ( v10 == (ParticleData *)-760i64 )
          v31 = 0i64;
        *(_OWORD *)&result.x = *v31;
        result.__vftable = (OGLEffectVec3_vtbl *)&OGLEffectQuat::`vftable';
        LOBYTE(planeNormal) = mirrorFlag;
        ((void (__fastcall *)(CollisionField *, void ***, OGLEffectVec3 *, ParticleData *, int, const OGLMatrix *, ParticleEmitter *, _DWORD, OGLEffectVec3_vtbl *, _QWORD, _DWORD, OGLEffectVec3_vtbl *))this->collisionBehavior)(
          this,
          &v35,
          &result,
          v10,
          planeNormal,
          actionMat,
          pParticleEmitter,
          LODWORD(v9),
          v33.__vftable,
          *(_QWORD *)&v33.x,
          LODWORD(v33.z),
          planePoint.__vftable);
        LODWORD(v10->LocalVel.x) = v36;
        v10->LocalVel.y = v37;
        v10->LocalVel.z = v38;
        v10->LocalRotVel.OGLQuat = *(OGLQuat *)&result.x;
        v10->LocalMat.m[13] = v21;
        v10->LocalPos.OGLVec3 = planePoint.OGLVec3;
      }
      ++v8;
    }
    while ( v8 < (unsigned int)(pParticleEmitter->m_ParticleData._Mypair._Myval2._Mylast
                              - pParticleEmitter->m_ParticleData._Mypair._Myval2._Myfirst) );
  }
}

void __fastcall CollisionField::ownInitialize(CollisionField *this)
{
  bool v1; // zf
  EffectData *v3; // [rsp+30h] [rbp+8h]

  v1 = this->m_SettingData == 0i64;
  *(_WORD *)&this->m_EffectDeleteFlag = 256;
  if ( v1 )
  {
    v3 = (EffectData *)operator new(0x90ui64);
    v3->AllDialogData._Mypair._Myval2._Myfirst = 0i64;
    v3->AllDialogData._Mypair._Myval2._Mylast = 0i64;
    v3->AllDialogData._Mypair._Myval2._Myend = 0i64;
    v3->AllDialogChartData._Mypair._Myval2._Myfirst = 0i64;
    v3->AllDialogChartData._Mypair._Myval2._Mylast = 0i64;
    v3->AllDialogChartData._Mypair._Myval2._Myend = 0i64;
    v3->blurUV1.__vftable = (OGLEffectVec2_vtbl *)&OGLEffectVec2::`vftable';
    v3->blurUV2.__vftable = (OGLEffectVec2_vtbl *)&OGLEffectVec2::`vftable';
    v3->blurUV1.OGLVec2 = 0i64;
    v3->__vftable = (EffectData_vtbl *)&CollisionFieldData::`vftable';
    v3->blurUV2.OGLVec2 = 0i64;
    v3->parent = 0i64;
    v3->child = 0i64;
    v3->siblingFront = 0i64;
    v3->siblingBack = 0i64;
    this->m_SettingData = v3;
  }
}

void __fastcall CollisionField::updateForceFieldData(
        CollisionField *this,
        __int64 mirrorFlag,
        const OGLMatrix *worldMat,
        Effect *pEffect)
{
  __int64 v6; // rax

  v6 = ((__int64 (__fastcall *)(Effect *, __int64, const OGLMatrix *))pEffect->getSettingData)(
         pEffect,
         mirrorFlag,
         worldMat);
  if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v6 + 88i64))(v6) <= 1 )
    *(_QWORD *)&pEffect[1].m_RandomNumbers.mt[40] = this;
}

void __fastcall CollisionField::updateForceFieldData(
        CollisionField *this,
        bool mirrorFlag,
        const OGLMatrix *actionMat,
        ParticleEmitter *pParticleEmitter,
        float frame)
{
  EffectData *m_SettingData; // r10
  DialogData *Myfirst; // r11
  int *v8; // rdx
  CollisionField_vtbl *v9; // rax

  m_SettingData = this->m_SettingData;
  Myfirst = m_SettingData->AllDialogData._Mypair._Myval2._Myfirst;
  if ( !(m_SettingData->AllDialogData._Mypair._Myval2._Mylast - Myfirst) )
    std::_Xout_of_range("invalid vector<T> subscript");
  v8 = Myfirst->allButtonIndexData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(Myfirst->allButtonIndexData._Mypair._Myval2._Mylast - v8) <= 2 )
    std::_Xout_of_range("invalid vector<T> subscript");
  v9 = this->__vftable;
  if ( v8[2] )
    ((void (__fastcall *)(CollisionField *, bool, const OGLMatrix *, ParticleEmitter *, _DWORD))v9->worldCollision)(
      this,
      mirrorFlag,
      actionMat,
      pParticleEmitter,
      LODWORD(frame));
  else
    ((void (__fastcall *)(CollisionField *, bool, const OGLMatrix *, ParticleEmitter *, _DWORD))v9->localCollision)(
      this,
      mirrorFlag,
      actionMat,
      pParticleEmitter,
      LODWORD(frame));
}

void __fastcall CollisionField::worldCollision(
        CollisionField *this,
        bool mirrorFlag,
        const OGLMatrix *actionMat,
        ParticleEmitter *pParticleEmitter,
        float frame)
{
  CollisionField *v6; // rbx
  unsigned int i; // er12
  ParticleData *v8; // r15
  OGLVec3 *v9; // rcx
  OGLVec3 *v10; // rcx
  EffectData *m_SettingData; // r8
  DialogData *Myfirst; // rcx
  float *v13; // r10
  DialogData *v14; // rcx
  float *v15; // r9
  DialogData *v16; // rcx
  float v17; // xmm1_4
  float v18; // xmm0_4
  __m128 v19; // xmm15
  bool v20; // r9
  DialogData *v21; // rcx
  DialogData *v22; // rcx
  int v23; // edx
  int v24; // edx
  OGLEffectVec3 *v25; // rax
  float *p_x; // rax
  OGLMatrix *v27; // rbx
  OGLMatrix *v28; // rdi
  float *v29; // rax
  float v30; // xmm2_4
  float v31; // xmm6_4
  float v32; // xmm3_4
  __int128 *v33; // rcx
  float v34; // xmm5_4
  float v35; // xmm4_4
  float v36; // xmm6_4
  float v37; // xmm3_4
  float v38; // xmm2_4
  float v39; // xmm4_4
  float v40; // xmm14_4
  float v41; // xmm11_4
  float v42; // xmm10_4
  float v43; // xmm13_4
  float v44; // xmm9_4
  float v45; // xmm8_4
  float v46; // xmm4_4
  float v47; // xmm12_4
  float v48; // xmm6_4
  float v49; // xmm5_4
  float v50; // xmm2_4
  float v51; // xmm13_4
  float v52; // xmm12_4
  int planeNormal; // [rsp+28h] [rbp-E0h]
  float v54; // [rsp+48h] [rbp-C0h]
  float v55; // [rsp+4Ch] [rbp-BCh]
  OGLEffectVec3 v56; // [rsp+50h] [rbp-B8h] BYREF
  OGLEffectVec3 planePoint; // [rsp+68h] [rbp-A0h] BYREF
  void **v58; // [rsp+80h] [rbp-88h] BYREF
  float v59; // [rsp+88h] [rbp-80h]
  float v60; // [rsp+8Ch] [rbp-7Ch]
  float v61; // [rsp+90h] [rbp-78h]
  OGLMatrix v62; // [rsp+98h] [rbp-70h] BYREF
  void **v63; // [rsp+E0h] [rbp-28h] BYREF
  __int128 v64; // [rsp+E8h] [rbp-20h]
  OGLEffectVec3 p2; // [rsp+100h] [rbp-8h] BYREF
  OGLEffectVec3 p1; // [rsp+118h] [rbp+10h] BYREF
  OGLMatrix In; // [rsp+138h] [rbp+30h] BYREF
  __int64 v68; // [rsp+178h] [rbp+70h]
  OGLEffectVec3 result; // [rsp+180h] [rbp+78h] BYREF
  bool collisionFlag; // [rsp+2A0h] [rbp+198h] BYREF

  v68 = -2i64;
  v6 = this;
  for ( i = 0;
        i < (unsigned int)(pParticleEmitter->m_ParticleData._Mypair._Myval2._Mylast
                         - pParticleEmitter->m_ParticleData._Mypair._Myval2._Myfirst);
        ++i )
  {
    if ( pParticleEmitter->m_ParticleData._Mypair._Myval2._Mylast
       - pParticleEmitter->m_ParticleData._Mypair._Myval2._Myfirst <= (unsigned __int64)(int)i )
      std::_Xout_of_range("invalid vector<T> subscript");
    v8 = pParticleEmitter->m_ParticleData._Mypair._Myval2._Myfirst[i];
    v9 = &v8->WorldPos.OGLVec3;
    if ( v8 == (ParticleData *)-616i64 )
      v9 = 0i64;
    p1.OGLVec3 = *v9;
    p1.__vftable = (OGLEffectVec3_vtbl *)&OGLEffectVec3::`vftable';
    v10 = &v8->PreWorldPos.OGLVec3;
    if ( v8 == (ParticleData *)-640i64 )
      v10 = 0i64;
    p2.OGLVec3 = *v10;
    p2.__vftable = (OGLEffectVec3_vtbl *)&OGLEffectVec3::`vftable';
    *(_QWORD *)&v56.x = 0i64;
    v56.z = 0.0;
    v56.__vftable = (OGLEffectVec3_vtbl *)&OGLEffectVec3::`vftable';
    planePoint.__vftable = (OGLEffectVec3_vtbl *)&OGLEffectVec3::`vftable';
    *(_QWORD *)&planePoint.x = 0i64;
    planePoint.z = 0.0;
    m_SettingData = v6->m_SettingData;
    if ( !(m_SettingData->AllDialogData._Mypair._Myval2._Mylast - m_SettingData->AllDialogData._Mypair._Myval2._Myfirst) )
      std::_Xout_of_range("invalid vector<T> subscript");
    Myfirst = m_SettingData->AllDialogData._Mypair._Myval2._Myfirst;
    if ( (unsigned __int64)(Myfirst->allEditNumData._Mypair._Myval2._Mylast
                          - Myfirst->allEditNumData._Mypair._Myval2._Myfirst) <= 8 )
      std::_Xout_of_range("invalid vector<T> subscript");
    v13 = Myfirst->allEditNumData._Mypair._Myval2._Myfirst;
    if ( !(m_SettingData->AllDialogData._Mypair._Myval2._Mylast - m_SettingData->AllDialogData._Mypair._Myval2._Myfirst) )
      std::_Xout_of_range("invalid vector<T> subscript");
    v14 = m_SettingData->AllDialogData._Mypair._Myval2._Myfirst;
    if ( (unsigned __int64)(v14->allEditNumData._Mypair._Myval2._Mylast - v14->allEditNumData._Mypair._Myval2._Myfirst) <= 7 )
      std::_Xout_of_range("invalid vector<T> subscript");
    v15 = v14->allEditNumData._Mypair._Myval2._Myfirst + 7;
    if ( !(m_SettingData->AllDialogData._Mypair._Myval2._Mylast - m_SettingData->AllDialogData._Mypair._Myval2._Myfirst) )
      std::_Xout_of_range("invalid vector<T> subscript");
    v16 = m_SettingData->AllDialogData._Mypair._Myval2._Myfirst;
    if ( (unsigned __int64)(v16->allEditNumData._Mypair._Myval2._Mylast - v16->allEditNumData._Mypair._Myval2._Myfirst) <= 6 )
      std::_Xout_of_range("invalid vector<T> subscript");
    v17 = v13[8];
    v18 = *v15;
    v19 = (__m128)*((unsigned int *)v16->allEditNumData._Mypair._Myval2._Myfirst + 6);
    v19.m128_f32[0] = v19.m128_f32[0] + 0.0;
    LODWORD(planePoint.x) = v19.m128_i32[0];
    v54 = v18 + 0.0;
    planePoint.y = v18 + 0.0;
    v55 = v17 + 0.0;
    planePoint.z = v17 + 0.0;
    v20 = 0;
    collisionFlag = 0;
    if ( !(m_SettingData->AllDialogData._Mypair._Myval2._Mylast - m_SettingData->AllDialogData._Mypair._Myval2._Myfirst) )
      std::_Xout_of_range("invalid vector<T> subscript");
    v21 = m_SettingData->AllDialogData._Mypair._Myval2._Myfirst;
    if ( !(v21->allComboIndexData._Mypair._Myval2._Mylast - v21->allComboIndexData._Mypair._Myval2._Myfirst) )
      std::_Xout_of_range("invalid vector<T> subscript");
    if ( !*v21->allComboIndexData._Mypair._Myval2._Myfirst )
    {
      if ( !(m_SettingData->AllDialogData._Mypair._Myval2._Mylast - m_SettingData->AllDialogData._Mypair._Myval2._Myfirst) )
        std::_Xout_of_range("invalid vector<T> subscript");
      v22 = m_SettingData->AllDialogData._Mypair._Myval2._Myfirst;
      if ( !(v22->allButtonIndexData._Mypair._Myval2._Mylast - v22->allButtonIndexData._Mypair._Myval2._Myfirst) )
        std::_Xout_of_range("invalid vector<T> subscript");
      v23 = *v22->allButtonIndexData._Mypair._Myval2._Myfirst;
      if ( v23 )
      {
        v24 = v23 - 1;
        if ( v24 )
        {
          if ( v24 == 1 )
          {
            *(_QWORD *)&v56.x = 1065353216i64;
            v56.z = 0.0;
          }
        }
        else
        {
          *(_QWORD *)&v56.x = 0i64;
          v56.z = 1.0;
        }
      }
      else
      {
        v56.x = 0.0;
        *(_QWORD *)&v56.y = 1065353216i64;
      }
      v25 = D3DMath::CollisionLineAndPlane(&result, &p1, &p2, &planePoint, &v56, &collisionFlag);
      if ( v25 )
        p_x = &v25->x;
      else
        p_x = 0i64;
      v19 = (__m128)*(unsigned int *)p_x;
      planePoint.x = *p_x;
      v54 = p_x[1];
      planePoint.y = v54;
      v55 = p_x[2];
      planePoint.z = v55;
      v20 = collisionFlag;
    }
    if ( v20 )
    {
      v27 = &v8->ReferenceMat.OGLMatrix;
      if ( v8 == (ParticleData *)-328i64 )
        v27 = 0i64;
      v62 = *v27;
      v28 = &v8->ActMat.OGLMatrix;
      if ( v8 == (ParticleData *)-472i64 )
        v28 = 0i64;
      In = *v28;
      OGLMatrix::multiply(&v62, &In);
      OGLMatrix::inverse(&v62);
      OGLMatrix::inverse(&In);
      v29 = &v8->LocalVel.x;
      if ( v8 == (ParticleData *)-712i64 )
        v29 = 0i64;
      v30 = *v29;
      v31 = v29[1];
      v32 = v29[2];
      v58 = &OGLEffectVec3::`vftable';
      v33 = (__int128 *)&v8->LocalRotVel.OGLQuat;
      if ( v8 == (ParticleData *)-760i64 )
        v33 = 0i64;
      v64 = *v33;
      v63 = &OGLEffectQuat::`vftable';
      v34 = (float)((float)(v31 * v27->m[4]) + (float)(v30 * v27->m[0])) + (float)(v32 * v27->m[8]);
      v35 = (float)((float)(v31 * v27->m[5]) + (float)(v30 * v27->m[1])) + (float)(v32 * v27->m[9]);
      v36 = (float)((float)(v31 * v27->m[6]) + (float)(v30 * v27->m[2])) + (float)(v32 * v27->m[10]);
      v37 = (float)((float)(v35 * v28->m[4]) + (float)(v34 * v28->m[0])) + (float)(v36 * v28->m[8]);
      v38 = (float)((float)(v35 * v28->m[5]) + (float)(v34 * v28->m[1])) + (float)(v36 * v28->m[9]);
      v39 = (float)((float)(v35 * v28->m[6]) + (float)(v34 * v28->m[2])) + (float)(v36 * v28->m[10]);
      v59 = v37;
      v60 = v38;
      v61 = v39;
      v6 = this;
      LOBYTE(planeNormal) = mirrorFlag;
      ((void (__fastcall *)(CollisionField *, void ***, void ***, ParticleData *, int, const OGLMatrix *, ParticleEmitter *, _DWORD))this->collisionBehavior)(
        this,
        &v58,
        &v63,
        v8,
        planeNormal,
        actionMat,
        pParticleEmitter,
        LODWORD(frame));
      v40 = v62.m[4];
      v41 = v62.m[0];
      v42 = v62.m[8];
      v43 = v62.m[5];
      v44 = v62.m[1];
      v45 = v62.m[9];
      v46 = (float)((float)(v62.m[5] * v60) + (float)(v62.m[1] * v59)) + (float)(v62.m[9] * v61);
      v47 = v62.m[6];
      v48 = v62.m[2];
      v49 = v62.m[10];
      v50 = (float)((float)(v62.m[6] * v60) + (float)(v62.m[2] * v59)) + (float)(v62.m[10] * v61);
      v8->LocalVel.x = (float)((float)(v62.m[4] * v60) + (float)(v62.m[0] * v59)) + (float)(v62.m[8] * v61);
      v8->LocalVel.y = v46;
      v8->LocalVel.z = v50;
      v8->LocalRotVel.OGLQuat = (OGLQuat)v64;
      *(_QWORD *)&v8->WorldPos.x = _mm_unpacklo_ps(v19, (__m128)LODWORD(v54)).m128_u64[0];
      v8->WorldPos.z = planePoint.z;
      v8->GlobalMat.m[13] = (float)((float)((float)(In.m[5] * v54) + (float)(In.m[1] * v19.m128_f32[0]))
                                  + (float)(In.m[9] * v55))
                          + In.m[13];
      v51 = (float)((float)((float)(v43 * v54) + (float)(v44 * v19.m128_f32[0])) + (float)(v45 * v55)) + v62.m[13];
      v52 = (float)((float)((float)(v47 * v54) + (float)(v48 * v19.m128_f32[0])) + (float)(v49 * v55)) + v62.m[14];
      v8->LocalPos.x = (float)((float)((float)(v40 * v54) + (float)(v41 * v19.m128_f32[0])) + (float)(v42 * v55))
                     + v62.m[12];
      v8->LocalPos.y = v51;
      v8->LocalPos.z = v52;
      v8->LocalMat.m[13] = v51;
    }
  }
}

