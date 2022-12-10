#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessdefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatapacked.h"
#include "dev/silverware/git/sdk/util/agservice.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_pathdatapacker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_linebuffer.h"
#include "dev/silverware/git/sdk/agthreadpool.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_highlight.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglshader.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloat.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/mat_aos.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_profiler.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_states.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/jobmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/tga_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_statebag.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/mediamanager.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thr/xthread"
#include "program files (x86)/windows kits/8.1/include/shared/guiddef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_simplemeshcache.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/audiopresenter.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/fontprovider/render_fontproviderwinapi.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "program files (x86)/windows kits/8.1/include/shared/stralign.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/functional"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_bundle.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/matrix4unaligned.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloatmp.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/quat_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_new.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapemeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/jpeg_imagefile.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/resourcemanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treetext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefileutil.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/algorithm"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_docview.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_range.h"
#include "dev/silverware/git/sdk/3rdparty/steam/isteamhtmlsurface.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/string"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdata/effectappdata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_hash.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exthread.h"
#include "dev/kof/master/development/source/ps4project/baseproject/pcutil/pcdummy.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/bilinkable.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/mediasound.h"
#include "dev/silverware/git/sdk/agreferencedobjectinl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "dev/silverware/git/sdk/agpointer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix4x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixpool.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shader.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_sse.h"
#include "dev/silverware/git/sdk/agreferencedobject.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_sgmlparser.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdata/effectdata.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_types.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thread"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_context.h"
#include "program files (x86)/windows kits/8.1/include/um/winnt.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/memory"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_constants.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/chartdata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessgen.h"
#include "program files (x86)/windows kits/8.1/include/shared/basetsd.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treeshape.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessellator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmodel.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/atomic"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "dev/silverware/git/sdk/agthread.h"
#include "dev/silverware/git/sdk/agmutex.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/tuple"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitivebundle.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/libcommon.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector2unaligned.h"
#include "dev/silverware/git/sdk/agscopedlock.h"
#include "dev/silverware/git/sdk/agreferenceinl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treecachenode.h"
#include "dev/silverware/git/sdk/agconditionvariable.inl"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treenode.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_loader.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xfacet"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cacheeffect.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_system.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphfitter.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefile.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_functions.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/ios"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_player.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/effect.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocnum"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_types.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/particledata.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steam_api_internal.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_exception.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_resource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xiosbase"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglbone.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocale"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_stroker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/array"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/dds_imagefile.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/time.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_typeinfo.h"
#include "dev/silverware/git/sdk/agreferencecount.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textmeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "program files (x86)/windows kits/8.1/include/um/winuser.h"
#include "dev/silverware/git/sdk/memory/agallocators.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphparam.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcache.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steam_api.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/particleemitter.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcacheconfig.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/refcountable.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/emitter.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hairliner.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/mutex"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/map"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_filterdesc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_styledtext.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/chrono"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtree"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix3x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_core.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_queue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "dev/silverware/git/sdk/input/agcontrollercomponent.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_fontmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitive.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocaddr.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmirror.h"
#include "dev/silverware/git/sdk/util/agdelegate.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/boolinvec.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_radixtree.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdatalistmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_twips.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_containers.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/list"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_wwhelper.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/system_error"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/randommt.h"
#include "dev/silverware/git/sdk/system/agsysteminfo.h"
#include "dev/silverware/git/sdk/util/agservicecommand.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector3unaligned.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xxatomic"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/stdexcept"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstring"
#include "dev/silverware/git/sdk/3rdparty/steam/matchmakingtypes.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_vertex.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/fontprovider/render_fontproviderhud.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_wstring.h"
#include "dev/silverware/git/sdk/util/agdebugchannels.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xhash"
#include "dev/silverware/git/sdk/util/agperformancecounter.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/silverware/git/sdk/agclock.h"
#include "program files (x86)/windows kits/8.1/include/um/winbase.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/debug/logging.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/vec_aos.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/heapmemory.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/boolinvec.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/mutex.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/limits"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threadcheck.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/vectormath_aos.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textlayout.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_image.h"
#include "dev/silverware/git/sdk/agcondition.h"
#include "dev/silverware/git/sdk/platforms/pc/system/agpcsysteminfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exlockable.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/globalheapmemory.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/fixmemory.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocinfo"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogleffect.h"
#include "dev/silverware/git/sdk/agreferencecountinl.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xutility"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/utility"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/emitterformstate/emitterformstatecurve.h"
#include "dev/silverware/git/sdk/filesystem/agfile.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/iosfwd"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/future_asset.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_movie.h"
#include "dev/silverware/git/sdk/filesystem/agpath.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_operation.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/asyncjob.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogllight.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/bitset"
#include "dev/silverware/git/sdk/filesystem/agmount.h"
#include "dev/silverware/git/sdk/input/agsdlmappingparser.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/atomic_int.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglcurve.h"
#include "dev/silverware/git/sdk/filesystem/agdirectory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_screentoworld.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_strokeraa.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_scale9grid.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/mat_aos.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraystaticbuff.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglsprite.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cxform.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steamclientpublic.h"
#include "dev/kof/master/development/source/ps4project/baseproject/pcutil/pccontrolsmanager.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglrender.h"
#include "dev/silverware/git/sdk/input/aginputmanager.h"
#include "dev/silverware/git/sdk/agsingleton.h"
#include "dev/silverware/git/sdk/aghash.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector4unaligned.h"
#include "dev/silverware/git/sdk/agmutex.inl"
#include "dev/silverware/git/sdk/agstringutils.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglfog.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic0.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/math.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_event.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/variableheapmemorybase.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/vecidx_aos.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/png_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_keycodes.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/floatinvec.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshkey.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixstate.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_gradients.h"
#include "dev/silverware/git/sdk/agpointerinl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_rasterizer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_viewport.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectcommon.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/quat_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vector"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_drawableimage.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hal.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_buffer.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/floatinvec.h"
#include "dev/silverware/git/sdk/agcondition.inl"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory0"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_characterdef.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exwaitcondition.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/physicalheapmemory.h"
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
#include "dev/kof/master/development/source/baseproject/jni/game/check/operationmapper.h"
#include "dev/silverware/git/sdk/agstream.h"
#include "dev/silverware/git/sdk/system/aguser.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstddef"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filters.h"
#include "dev/silverware/git/sdk/agstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filterparams.h"
#include "dev/silverware/git/sdk/system/agusermanager.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_math.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/exception"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/type_traits"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/deque"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_font.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/vec_aos.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/effect.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/field.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/randomnumbers.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglvec3.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/oglinheritance/ogleffectvec3.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdata/effectdata.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdata/fielddata.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdata/attractionfielddata.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/oglinheritance/ogleffectvec2.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglvec2.cpp"

std::piecewise_construct_t std::piecewise_construct; // 0x14089E381
void AttractionField::ownInitialize(); // 0x140135460
void AttractionField::updateForceFieldData(bool mirrorFlag, const OGLMatrix & worldMat, Effect * pEffect, float frame); // 0x1401354F0
void AttractionField::updateForceFieldData(bool mirrorFlag, const OGLMatrix & actionMat, ParticleEmitter * pParticleEmitter, float frame); // 0x140135570//decompilation failure at 14089E381!
void __fastcall AttractionField::ownInitialize(AttractionField *this)
{
  bool v1; // zf
  EffectData *v3; // [rsp+30h] [rbp+8h]

  v1 = this->m_SettingData == 0i64;
  *(_WORD *)&this->m_EffectDeleteFlag = 256;
  if ( v1 )
  {
    v3 = (EffectData *)operator new(0x88ui64);
    v3->AllDialogData._Mypair._Myval2._Myfirst = 0i64;
    v3->AllDialogData._Mypair._Myval2._Mylast = 0i64;
    v3->AllDialogData._Mypair._Myval2._Myend = 0i64;
    v3->AllDialogChartData._Mypair._Myval2._Myfirst = 0i64;
    v3->AllDialogChartData._Mypair._Myval2._Mylast = 0i64;
    v3->AllDialogChartData._Mypair._Myval2._Myend = 0i64;
    v3->blurUV1.__vftable = (OGLEffectVec2_vtbl *)&OGLEffectVec2::`vftable';
    v3->blurUV2.__vftable = (OGLEffectVec2_vtbl *)&OGLEffectVec2::`vftable';
    v3->blurUV1.OGLVec2 = 0i64;
    v3->__vftable = (EffectData_vtbl *)&AttractionFieldData::`vftable';
    v3->blurUV2.OGLVec2 = 0i64;
    v3->parent = 0i64;
    v3->child = 0i64;
    v3->siblingFront = 0i64;
    v3->siblingBack = 0i64;
    this->m_SettingData = v3;
  }
}

void __fastcall TurbulenceField::updateForceFieldData(
        TurbulenceField *this,
        bool mirrorFlag,
        const OGLMatrix *actionMat,
        Effect *pEffect,
        float frame)
{
  EffectData *v9; // rax

  v9 = pEffect->getSettingData(pEffect);
  if ( (unsigned int)v9->getEffectType(v9) <= 1 )
    ((void (__fastcall *)(TurbulenceField *, bool, const OGLMatrix *, Effect *, _DWORD))this->updateForceFieldData)(
      this,
      mirrorFlag,
      actionMat,
      pEffect,
      LODWORD(frame));
}

void __fastcall AttractionField::updateForceFieldData(
        AttractionField *this,
        bool mirrorFlag,
        const OGLMatrix *actionMat,
        ParticleEmitter *pParticleEmitter,
        float frame)
{
  EffectData *m_SettingData; // r8
  DialogData *Myfirst; // rcx
  float v9; // xmm10_4
  DialogChartData *v10; // r9
  float ChartDataY; // xmm9_4
  DialogData *v12; // rcx
  EffectData *v13; // r8
  DialogData *v14; // rcx
  DialogChartData *v15; // r9
  float v16; // xmm11_4
  DialogData *v17; // rcx
  EffectData *v18; // r8
  DialogData *v19; // rcx
  float *v20; // r10
  DialogData *v21; // rcx
  float *v22; // r9
  DialogData *v23; // rcx
  float v24; // xmm0_4
  float v25; // xmm1_4
  float v26; // xmm2_4
  unsigned int i; // esi
  ParticleData *v28; // rbx
  float v29; // xmm6_4
  float v30; // xmm7_4
  float v31; // xmm8_4
  float v32; // xmm14_4
  float v33; // xmm15_4
  float v34; // xmm8_4
  float *m; // rcx
  float v36; // xmm3_4
  float v37; // xmm2_4
  OGLEffectVec3 *v38; // rax
  float *p_x; // rax
  OGLMatrix *v40; // rcx
  float v41; // xmm11_4
  float v42; // xmm9_4
  float v43; // xmm8_4
  float v44; // xmm13_4
  float v45; // xmm12_4
  float v46; // xmm10_4
  float v47; // [rsp+28h] [rbp-E0h]
  float v48; // [rsp+30h] [rbp-D8h]
  float v49; // [rsp+34h] [rbp-D4h]
  float v50; // [rsp+38h] [rbp-D0h]
  float v51; // [rsp+3Ch] [rbp-CCh]
  float v52; // [rsp+40h] [rbp-C8h]
  float v53; // [rsp+44h] [rbp-C4h]
  float v54; // [rsp+48h] [rbp-C0h]
  float v55; // [rsp+4Ch] [rbp-BCh]
  float v56; // [rsp+50h] [rbp-B8h]
  OGLVec3 v; // [rsp+60h] [rbp-A8h] BYREF
  void **v58; // [rsp+70h] [rbp-98h]
  unsigned __int64 v59; // [rsp+78h] [rbp-90h]
  float v60; // [rsp+80h] [rbp-88h]
  OGLEffectVec3 v61; // [rsp+88h] [rbp-80h] BYREF
  __int64 v62; // [rsp+A0h] [rbp-68h]
  OGLEffectVec3 result; // [rsp+A8h] [rbp-60h] BYREF
  OGLEffectMatrix v64; // [rsp+C8h] [rbp-40h] BYREF

  v62 = -2i64;
  m_SettingData = this->m_SettingData;
  if ( !(m_SettingData->AllDialogData._Mypair._Myval2._Mylast - m_SettingData->AllDialogData._Mypair._Myval2._Myfirst) )
    std::_Xout_of_range("invalid vector<T> subscript");
  Myfirst = m_SettingData->AllDialogData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(Myfirst->allEditNumData._Mypair._Myval2._Mylast
                        - Myfirst->allEditNumData._Mypair._Myval2._Myfirst) <= 9 )
    std::_Xout_of_range("invalid vector<T> subscript");
  v9 = Myfirst->allEditNumData._Mypair._Myval2._Myfirst[9];
  v54 = v9;
  if ( (unsigned __int64)(Myfirst->allButtonIndexData._Mypair._Myval2._Mylast
                        - Myfirst->allButtonIndexData._Mypair._Myval2._Myfirst) <= 1 )
    std::_Xout_of_range("invalid vector<T> subscript");
  if ( Myfirst->allButtonIndexData._Mypair._Myval2._Myfirst[1] )
  {
    v10 = m_SettingData->AllDialogChartData._Mypair._Myval2._Myfirst;
    if ( (unsigned __int64)(v10->dialogChartData._Mypair._Myval2._Mylast - v10->dialogChartData._Mypair._Myval2._Myfirst) <= 3 )
      std::_Xout_of_range("invalid vector<T> subscript");
    ChartDataY = D3DMath::GetChartDataY(this->age, v10->dialogChartData._Mypair._Myval2._Myfirst + 3);
  }
  else
  {
    if ( !(m_SettingData->AllDialogData._Mypair._Myval2._Mylast - m_SettingData->AllDialogData._Mypair._Myval2._Myfirst) )
      std::_Xout_of_range("invalid vector<T> subscript");
    v12 = m_SettingData->AllDialogData._Mypair._Myval2._Myfirst;
    if ( (unsigned __int64)(v12->allEditNumData._Mypair._Myval2._Mylast - v12->allEditNumData._Mypair._Myval2._Myfirst) <= 0xA )
      std::_Xout_of_range("invalid vector<T> subscript");
    ChartDataY = v12->allEditNumData._Mypair._Myval2._Myfirst[10];
  }
  v49 = ChartDataY;
  v13 = this->m_SettingData;
  v14 = v13->AllDialogData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(v14->allButtonIndexData._Mypair._Myval2._Mylast
                        - v14->allButtonIndexData._Mypair._Myval2._Myfirst) <= 2 )
    std::_Xout_of_range("invalid vector<T> subscript");
  if ( v14->allButtonIndexData._Mypair._Myval2._Myfirst[2] )
  {
    v15 = v13->AllDialogChartData._Mypair._Myval2._Myfirst;
    if ( (unsigned __int64)(v15->dialogChartData._Mypair._Myval2._Mylast - v15->dialogChartData._Mypair._Myval2._Myfirst) <= 4 )
      std::_Xout_of_range("invalid vector<T> subscript");
    v16 = D3DMath::GetChartDataY(this->age, v15->dialogChartData._Mypair._Myval2._Myfirst + 4);
  }
  else
  {
    if ( !(v13->AllDialogData._Mypair._Myval2._Mylast - v13->AllDialogData._Mypair._Myval2._Myfirst) )
      std::_Xout_of_range("invalid vector<T> subscript");
    v17 = v13->AllDialogData._Mypair._Myval2._Myfirst;
    if ( (unsigned __int64)(v17->allEditNumData._Mypair._Myval2._Mylast - v17->allEditNumData._Mypair._Myval2._Myfirst) <= 0xB )
      std::_Xout_of_range("invalid vector<T> subscript");
    v16 = v17->allEditNumData._Mypair._Myval2._Myfirst[11];
  }
  v48 = v16;
  v59 = 0i64;
  v60 = 0.0;
  v58 = &OGLEffectVec3::`vftable';
  v18 = this->m_SettingData;
  if ( !(v18->AllDialogData._Mypair._Myval2._Mylast - v18->AllDialogData._Mypair._Myval2._Myfirst) )
    std::_Xout_of_range("invalid vector<T> subscript");
  v19 = v18->AllDialogData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(v19->allEditNumData._Mypair._Myval2._Mylast - v19->allEditNumData._Mypair._Myval2._Myfirst) <= 8 )
    std::_Xout_of_range("invalid vector<T> subscript");
  v20 = v19->allEditNumData._Mypair._Myval2._Myfirst;
  if ( !(v18->AllDialogData._Mypair._Myval2._Mylast - v18->AllDialogData._Mypair._Myval2._Myfirst) )
    std::_Xout_of_range("invalid vector<T> subscript");
  v21 = v18->AllDialogData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(v21->allEditNumData._Mypair._Myval2._Mylast - v21->allEditNumData._Mypair._Myval2._Myfirst) <= 7 )
    std::_Xout_of_range("invalid vector<T> subscript");
  v22 = v21->allEditNumData._Mypair._Myval2._Myfirst;
  if ( !(v18->AllDialogData._Mypair._Myval2._Mylast - v18->AllDialogData._Mypair._Myval2._Myfirst) )
    std::_Xout_of_range("invalid vector<T> subscript");
  v23 = v18->AllDialogData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(v23->allEditNumData._Mypair._Myval2._Mylast - v23->allEditNumData._Mypair._Myval2._Myfirst) <= 6 )
    std::_Xout_of_range("invalid vector<T> subscript");
  v24 = v20[8];
  v55 = v24;
  v25 = v22[7];
  v56 = v25;
  v26 = v23->allEditNumData._Mypair._Myval2._Myfirst[6];
  v47 = v26;
  v59 = __PAIR64__(LODWORD(v25), LODWORD(v26));
  v60 = v24;
  for ( i = 0;
        i < (unsigned int)(pParticleEmitter->m_ParticleData._Mypair._Myval2._Mylast
                         - pParticleEmitter->m_ParticleData._Mypair._Myval2._Myfirst);
        v26 = v47 )
  {
    if ( pParticleEmitter->m_ParticleData._Mypair._Myval2._Mylast
       - pParticleEmitter->m_ParticleData._Mypair._Myval2._Myfirst <= (unsigned __int64)(int)i )
      std::_Xout_of_range("invalid vector<T> subscript");
    v28 = pParticleEmitter->m_ParticleData._Mypair._Myval2._Myfirst[i];
    v29 = v26 - v28->GlobalMat.m[12];
    v30 = v25 - v28->GlobalMat.m[13];
    v31 = v24 - v28->GlobalMat.m[14];
    if ( v16 > sqrtf((float)((float)(v30 * v30) + (float)(v29 * v29)) + (float)(v31 * v31)) )
    {
      v.x = v29;
      v.y = v30;
      v.z = v31;
      OGLVec3::normalize(&v, &v);
      v32 = v.x * v9;
      v33 = v.y * v9;
      v34 = v.z * v9;
      v50 = v.z * v9;
      v52 = v.x * ChartDataY;
      v51 = v.y * ChartDataY;
      v53 = v.z * ChartDataY;
      v61.__vftable = (OGLEffectVec3_vtbl *)&OGLEffectVec3::`vftable';
      m = v28->ActMat.m;
      if ( v28 == (ParticleData *)-472i64 )
        m = 0i64;
      v36 = (float)((float)(v33 * m[5]) + (float)(v32 * m[1])) + (float)(v34 * m[9]);
      v37 = (float)((float)(v33 * m[6]) + (float)(v32 * m[2])) + (float)(v34 * m[10]);
      v61.x = (float)((float)(v33 * m[4]) + (float)(v32 * *m)) + (float)(v34 * m[8]);
      v61.y = v36;
      v61.z = v37;
      v38 = OGLEffectVec3::operator*(&v61, &result, frame);
      if ( v38 )
        p_x = &v38->x;
      else
        p_x = 0i64;
      v28->WorldPos.x = v28->WorldPos.x + *p_x;
      v28->WorldPos.y = p_x[1] + v28->WorldPos.y;
      v28->WorldPos.z = p_x[2] + v28->WorldPos.z;
      v40 = &v28->ReferenceMat.OGLMatrix;
      if ( v28 == (ParticleData *)-328i64 )
        v40 = 0i64;
      v64.OGLMatrix = *v40;
      v64.__vftable = (OGLEffectMatrix_vtbl *)&OGLEffectMatrix::`vftable';
      OGLEffectMatrix::inverse(&v64);
      v41 = (float)((float)(v64.m[4] * v33) + (float)(v64.m[0] * v32)) + (float)(v64.m[8] * v34);
      v42 = (float)((float)(v64.m[5] * v33) + (float)(v64.m[1] * v32)) + (float)(v64.m[9] * v34);
      v43 = (float)((float)(v64.m[6] * v33) + (float)(v64.m[2] * v32)) + (float)(v64.m[10] * v50);
      v44 = (float)((float)(v64.m[4] * v51) + (float)(v64.m[0] * v52)) + (float)(v64.m[8] * v53);
      v45 = (float)((float)(v64.m[5] * v51) + (float)(v64.m[1] * v52)) + (float)(v64.m[9] * v53);
      v46 = (float)((float)(v64.m[6] * v51) + (float)(v64.m[2] * v52)) + (float)(v64.m[10] * v53);
      v28->LocalPos.x = v41 + v28->LocalPos.x;
      v28->LocalPos.y = v42 + v28->LocalPos.y;
      v28->LocalPos.z = v43 + v28->LocalPos.z;
      v28->LocalVel.x = v44 + v28->LocalVel.x;
      v28->LocalVel.y = v45 + v28->LocalVel.y;
      v28->LocalVel.z = v46 + v28->LocalVel.z;
      v9 = v54;
      v16 = v48;
    }
    ++i;
    ChartDataY = v49;
    v24 = v55;
    v25 = v56;
  }
}

