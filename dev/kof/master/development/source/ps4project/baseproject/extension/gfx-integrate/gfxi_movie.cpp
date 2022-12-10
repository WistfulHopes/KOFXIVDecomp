#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hal.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_buffer.h"
#include "dev/silverware/git/sdk/3rdparty/steam/matchmakingtypes.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/quat_aos.h"
#include "dev/silverware/git/sdk/agsemaphore.inl"
#include "dev/silverware/git/sdk/agconditionvariable.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/condition_variable"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_characterdef.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/floatinvec.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/refcountable.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "program files (x86)/windows kits/8.1/include/um/winbase.h"
#include "dev/silverware/git/sdk/agvector2.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/variableheapmemorybase.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_vec64.h"
#include "dev/silverware/git/sdk/agmath.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
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
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_pathdatapacker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_linebuffer.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/time.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/type_traits"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_highlight.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_operation.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/physicalheapmemory.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/map"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/bitset"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_game_interface.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloat.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstddef"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtree"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_profiler.h"
#include "dev/silverware/git/sdk/input/agcontrollercomponent.h"
#include "dev/silverware/git/sdk/agpointer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_states.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/mat_aos.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/tga_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_statebag.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_simplemeshcache.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/fontprovider/render_fontproviderwinapi.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_bundle.h"
#include "dev/silverware/git/sdk/input/agsdlmappingparser.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloatmp.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steamclientpublic.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/mutex"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapemeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/jpeg_imagefile.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/matrix4unaligned.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/algorithm"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/chrono"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treetext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefileutil.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/quat_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/limits"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_new.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_docview.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/jobmanager.h"
#include "dev/kof/master/development/source/ps4project/baseproject/pcutil/pcdummy.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_typeinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_range.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "dev/silverware/git/sdk/system/agsysteminfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_hash.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xutility"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/utility"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix4x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixpool.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/iosfwd"
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
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessgen.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/resourcemanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treeshape.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessellator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/operationmapper.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory0"
#include "dev/kof/master/development/source/baseproject/jni/framework/libcommon.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exwaitcondition.h"
#include "dev/silverware/git/sdk/agconditionvariable.inl"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/exception"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitivebundle.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_exception.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treecachenode.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xhash"
#include "dev/silverware/git/sdk/platforms/pc/system/agpcsysteminfo.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/list"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treenode.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_player.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_loader.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector2unaligned.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cacheeffect.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_system.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphfitter.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_functions.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_resource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_stroker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/dds_imagefile.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/system_error"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textmeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/stdexcept"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphparam.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcache.h"
#include "program files (x86)/windows kits/8.1/include/shared/guiddef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcacheconfig.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_loader.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hairliner.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_log.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_filterdesc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_styledtext.h"
#include "program files (x86)/windows kits/8.1/include/shared/stralign.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix3x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_core.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_queue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/tuple"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_fontmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitive.h"
#include "dev/silverware/git/sdk/agmemorystream.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocaddr.h"
#include "dev/silverware/git/sdk/agmemorypool.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_radixtree.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_fontman.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_twips.h"
#include "dev/silverware/git/sdk/input/agcontrollerbuttoncomponent.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_fontlib.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_containers.h"
#include "dev/silverware/git/sdk/agstream.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/boolinvec.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_wwhelper.h"
#include "dev/silverware/git/sdk/agmutex.inl"
#include "dev/silverware/git/sdk/3rdparty/steam/isteamhtmlsurface.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/string"
#include "dev/silverware/git/sdk/agreferencedobjectinl.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic.h"
#include "dev/silverware/git/sdk/agpointerinl.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic0.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_renderer.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector3unaligned.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_vertex.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/fontprovider/render_fontproviderhud.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_wstring.h"
#include "program files (x86)/windows kits/8.1/include/um/winnt.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "program files (x86)/windows kits/8.1/include/shared/basetsd.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/vec_aos.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/boolinvec.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threadcheck.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/ios"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textlayout.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_image.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocnum"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/vectormath_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xiosbase"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thread"
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
#include "dev/silverware/git/sdk/3rdparty/steam/steam_api_internal.h"
#include "dev/silverware/git/sdk/agreferencedobject.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xxatomic"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "dev/silverware/git/sdk/agreferencecount.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/debug/logging.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vector"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_screentoworld.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "program files (x86)/windows kits/8.1/include/um/winuser.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_strokeraa.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_scale9grid.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steam_api.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraystaticbuff.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/globalheapmemory.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thr/xthread"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cxform.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/fixmemory.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/mat_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/array"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_movie.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/asyncjob.h"
#include "dev/kof/master/development/source/ps4project/baseproject/pcutil/pccontrolsmanager.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exlockable.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_event.h"
#include "dev/silverware/git/sdk/memory/agallocators.h"
#include "dev/silverware/git/sdk/input/aginputmanager.h"
#include "dev/silverware/git/sdk/agmutex.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/atomic_int.h"
#include "dev/silverware/git/sdk/agsingleton.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_keycodes.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector4unaligned.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/atomic"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/png_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/vecidx_aos.h"
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
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_drawableimage.h"
#include "dev/silverware/git/sdk/agsemaphore.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_operation.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_renderer.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/asyncjob.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exthread.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exlockable.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_fontman.cpp"

class extension::gfxi_detail::MovieProxy :
	extension::RefCountable<extension::gfxi_detail::MovieProxy>,
	extension::gfxi_detail::MovieStackNode,
	protected extension::gfxi_detail::MovieInstanceListNode,
	protected extension::GFXIMovieContext
{
public:
	MovieProxy(Scaleform::Ptr<Scaleform::GFx::Movie>);
private:
	MovieProxy(const extension::gfxi_detail::MovieProxy &);
	extension::gfxi_detail::MovieProxy & operator=(const extension::gfxi_detail::MovieProxy &);
	~MovieProxy();
public:
	void advance(float);
	void setMultiControllerMode(extension::GFXIMultiControllerMode::Spec);
	void bindKeyMapping(const extension::GFXIKeyMapping &, long);
	extension::GFXIMultiControllerMode::Spec getMultiControllerMode();
	void setIgnoreInputFrames(unsigned long);
	bool isFinished();
	void setSelfOwn();
	void releaseSelfOwn();
	void releaseSelfOwnIfFinished();
	void setBgAlpha(float);
	void accept(extension::gfxi_detail::MovieInstanceVisitor &);
	void renderDisplayHandle(extension::GFXIRenderer &);
	bool isStop();
	void start();
	void stop();
	void show();
	void hidden();
	void setPause(bool);
	long getPriority();
	void setPriority(long);
	void setViewport(const Scaleform::GFx::Viewport &);
private:
	long m_iPriority; // 0x30
	bool m_bAdvance; // 0x34
	bool m_bRender; // 0x35
	bool m_bPause; // 0x36
	extension::gfxi_detail::MovieOperationGenerator m_operationGenerator; // 0x38
	bool m_isSelfOwn; // 0xE0
	static extension::gfxi_detail::MovieInstanceListNode s_instanceListEnd; // 0xFFFFFFFFFFFFFFFF
};
class extension::RefCountable<extension::gfxi_detail::MovieProxy>
{
private:
	extension::AtomicInt m_refCount; // 0x0
	void addRef();
	void release();
protected:
	RefCountable<extension::gfxi_detail::MovieProxy>(const extension::RefCountable<extension::gfxi_detail::MovieProxy> &);
public:
	RefCountable<extension::gfxi_detail::MovieProxy>();
protected:
	extension::RefCountable<extension::gfxi_detail::MovieProxy> & operator=(const extension::RefCountable<extension::gfxi_detail::MovieProxy> &);
	~RefCountable<extension::gfxi_detail::MovieProxy>();
};
extension::gfxi_detail::MovieProxy::MovieProxy(Scaleform::Ptr<Scaleform::GFx::Movie> m); // 0x14027A610
extension::gfxi_detail::MovieProxy::~MovieProxy(); // 0x14027A700
void extension::gfxi_detail::MovieProxy::renderDisplayHandle(extension::GFXIRenderer & renderer); // 0x14027A790
class extension::GFXIMovieData::LoadJob :
	extension::FutureObjectJob<extension::GFXIMovieData>
{
	class Base_t;
public:
	LoadJob(extension::RefCountablePtr<extension::AsyncContent<extension::GFXIMovieData> >);
	virtual long run();
	virtual ~LoadJob();
};
class extension::FutureObjectJob<extension::GFXIMovieData> :
	extension::ExThread::Runnable,
	extension::AsyncContentConstants,
	extension::FutureObjectSpec
{
public:
	FutureObjectJob<extension::GFXIMovieData>(extension::RefCountablePtr<extension::AsyncContent<extension::GFXIMovieData> >);
private:
	FutureObjectJob<extension::GFXIMovieData>(const extension::FutureObjectJob<extension::GFXIMovieData> &);
	extension::FutureObjectJob<extension::GFXIMovieData> & operator=(const extension::FutureObjectJob<extension::GFXIMovieData> &);
	class ContentSharedPtr_t;
public:
	virtual ~FutureObjectJob<extension::GFXIMovieData>();
	void setResult(std::unique_ptr<extension::GFXIMovieData,std::default_delete<extension::GFXIMovieData> > &);
	void setErrorResult(extension::AsyncContentConstants::ErrorCode);
	const std::string & contentPath();
	bool isCancelRequested();
	extension::RefCountablePtr<extension::AsyncContent<extension::GFXIMovieData> > releaseContent();
	long run() = 0;
private:
	std::unique_ptr<extension::GFXIMovieData,std::default_delete<extension::GFXIMovieData> > createOnErrorData();
	extension::RefCountablePtr<extension::AsyncContent<extension::GFXIMovieData> > m_content; // 0x18
};
extension::GFXIMovieData::LoadJob::LoadJob(extension::RefCountablePtr<extension::AsyncContent<extension::GFXIMovieData> > c); // 0x14027A840
long extension::GFXIMovieData::LoadJob::run(); // 0x14027A900
void extension::GFXIMovieData::EnqueueFutureMovieDataJob(extension::RefCountablePtr<extension::AsyncContent<extension::GFXIMovieData> > shared); // 0x14027AAB0
extension::GFXIMovie extension::GFXIMovieData::createInstance(); // 0x14027ABA0
extension::RefCountablePtr<extension::gfxi_detail::MovieProxy>::~RefCountablePtr<extension::gfxi_detail::MovieProxy>(); // 0x14027AD80
extension::gfxi_detail::MovieInstanceListNode::~MovieInstanceListNode(); // 0x140273250
extension::GFXIMovie & extension::GFXIMovie::operator=(const extension::GFXIMovie & o); // 0x14027ADD0
Scaleform::GFx::Value extension::GFXIMovie::createASArray(); // 0x14027AE30
Scaleform::GFx::Value extension::GFXIMovie::getASVariable(const char * pathToVar); // 0x14027AE80
bool extension::GFXIMovie::invoke(const char * pathToVar, Scaleform::GFx::Value * presult, Scaleform::GFx::Value * pargs, unsigned long numArgs); // 0x14027AEB0
bool extension::GFXIMovie::advance(float deltaT); // 0x14027AF10
bool extension::GFXIMovie::render(); // 0x14027AF80
extension::GFXIMovieStack & extension::GFXIMovieStack::Instance(); // 0x14027AFF0
void extension::GFXIMovieStack::pushPriority(extension::GFXIMovie & movie, long priority, bool isSelfOwn); // 0x14027B060
class std::chrono::duration<float,std::ratio<1,1> >
{
	class _Myt;
	typedef float rep;
	struct period;
public:
	float count();
	std::chrono::duration<float,std::ratio<1,1> > operator+();
	std::chrono::duration<float,std::ratio<1,1> > operator-();
	std::chrono::duration<float,std::ratio<1,1> > operator++(long);
	std::chrono::duration<float,std::ratio<1,1> > & operator++();
	std::chrono::duration<float,std::ratio<1,1> > operator--(long);
	std::chrono::duration<float,std::ratio<1,1> > & operator--();
	std::chrono::duration<float,std::ratio<1,1> > & operator+=(const std::chrono::duration<float,std::ratio<1,1> > &);
	std::chrono::duration<float,std::ratio<1,1> > & operator-=(const std::chrono::duration<float,std::ratio<1,1> > &);
	std::chrono::duration<float,std::ratio<1,1> > & operator*=(const float &);
	std::chrono::duration<float,std::ratio<1,1> > & operator/=(const float &);
	std::chrono::duration<float,std::ratio<1,1> > & operator%=(const std::chrono::duration<float,std::ratio<1,1> > &);
	std::chrono::duration<float,std::ratio<1,1> > & operator%=(const float &);
	static std::chrono::duration<float,std::ratio<1,1> > zero();
	static std::chrono::duration<float,std::ratio<1,1> > min();
	static std::chrono::duration<float,std::ratio<1,1> > max();
private:
	float _MyRep; // 0x0
};
void(*??s_instanceListEnd$initializer$@MovieProxy@gfxi_detail@extension@@0P6AXXZEA@@3P6AXXZEA)(); // 0x1407408B0
std::piecewise_construct_t std::piecewise_construct; // 0x1408AED1B
void extension::GFXIMovieStack::advance(float deltaT); // 0x14027B100
void extension::GFXIMovieStack::render(); // 0x14027B210
void extension::GFXIMovieStack::renderPriority(long backPrio, long frontPrio); // 0x14027B310//decompilation failure at 1407408B0!
//decompilation failure at 1408AED1B!
void __fastcall extension::FutureObjectJob<extension::GFXIMovieData>::FutureObjectJob<extension::GFXIMovieData>(
        extension::FutureObjectJob<extension::GFXIMovieData> *this,
        extension::RefCountablePtr<extension::AsyncContent<extension::GFXIMovieData> > c)
{
  volatile signed __int64 *My_val; // r8
  extension::AsyncContent<extension::GFXIMovieData> *v3; // rdi

  this->__vftable = (extension::FutureObjectJob<extension::GFXIMovieData>_vtbl *)&AgSimpleThreadHost::`vftable';
  this->m_abort = 0;
  this->m_running = 1;
  this->__vftable = (extension::FutureObjectJob<extension::GFXIMovieData>_vtbl *)&extension::FutureObjectJob<extension::GFXIMovieData>::`vftable';
  My_val = (volatile signed __int64 *)c.m_ptr->m_refCount.m_value._My_val;
  this->m_content.m_ptr = (extension::AsyncContent<extension::GFXIMovieData> *)c.m_ptr->m_refCount.m_value._My_val;
  if ( My_val )
    _InterlockedExchangeAdd64(My_val, 1ui64);
  _InterlockedExchangeAdd64((volatile signed __int64 *)&extension::FutureObjectSpec::s_futureObjectJobCount, 1ui64);
  v3 = (extension::AsyncContent<extension::GFXIMovieData> *)c.m_ptr->m_refCount.m_value._My_val;
  if ( c.m_ptr->m_refCount.m_value._My_val
    && _InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFui64) == 1 )
  {
    if ( v3 )
    {
      extension::AsyncContent<extension::GFXIMovieData>::~AsyncContent<extension::GFXIMovieData>(v3);
      operator delete(v3, 0x68ui64);
    }
  }
}

void __fastcall extension::GFXIMovieData::LoadJob::LoadJob(
        extension::GFXIMovieData::LoadJob *this,
        extension::RefCountablePtr<extension::AsyncContent<extension::GFXIMovieData> > c)
{
  extension::AsyncContent<extension::GFXIMovieData> *My_val; // rax
  extension::AsyncContent<extension::GFXIMovieData> *v5; // rdi
  extension::RefCountablePtr<extension::AsyncContent<extension::GFXIMovieData> > ca; // [rsp+30h] [rbp+8h] BYREF

  My_val = (extension::AsyncContent<extension::GFXIMovieData> *)c.m_ptr->m_refCount.m_value._My_val;
  ca.m_ptr = My_val;
  if ( My_val )
    _InterlockedExchangeAdd64((volatile signed __int64 *)My_val, 1ui64);
  extension::FutureObjectJob<extension::GFXIMovieData>::FutureObjectJob<extension::GFXIMovieData>(
    this,
    (extension::RefCountablePtr<extension::AsyncContent<extension::GFXIMovieData> >)&ca);
  this->__vftable = (extension::GFXIMovieData::LoadJob_vtbl *)&extension::GFXIMovieData::LoadJob::`vftable';
  v5 = (extension::AsyncContent<extension::GFXIMovieData> *)c.m_ptr->m_refCount.m_value._My_val;
  if ( v5 )
  {
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFui64) == 1 )
    {
      extension::AsyncContent<extension::GFXIMovieData>::~AsyncContent<extension::GFXIMovieData>(v5);
      operator delete(v5, 0x68ui64);
    }
  }
}

void __fastcall extension::gfxi_detail::MovieProxy::MovieProxy(
        extension::gfxi_detail::MovieProxy *this,
        Scaleform::Ptr<Scaleform::GFx::Movie> m)
{
  extension::gfxi_detail::MovieInstanceListNode *v4; // rdi
  Scaleform::GFx::Movie *v5; // rcx
  Scaleform::GFx::Movie *v6; // [rsp+70h] [rbp+18h] BYREF
  Scaleform::GFx::Movie **v7; // [rsp+78h] [rbp+20h]

  this->m_refCount.m_value._My_val = 1i64;
  this->extension::gfxi_detail::MovieStackNode::extension::BiLinkable<extension::gfxi_detail::MovieStackNode>::m_Prev = &this->extension::gfxi_detail::MovieStackNode;
  this->extension::gfxi_detail::MovieStackNode::extension::BiLinkable<extension::gfxi_detail::MovieStackNode>::m_Next = &this->extension::gfxi_detail::MovieStackNode;
  v4 = &this->extension::gfxi_detail::MovieInstanceListNode;
  this->extension::gfxi_detail::MovieInstanceListNode::extension::BiLinkable<extension::gfxi_detail::MovieInstanceListNode>::m_Prev = &this->extension::gfxi_detail::MovieInstanceListNode;
  this->extension::gfxi_detail::MovieInstanceListNode::extension::BiLinkable<extension::gfxi_detail::MovieInstanceListNode>::m_Next = &this->extension::gfxi_detail::MovieInstanceListNode;
  if ( m.pObject->__vftable )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)m.pObject->__vftable);
  v6 = (Scaleform::GFx::Movie *)m.pObject->__vftable;
  v5 = v6;
  v7 = &v6;
  if ( v6 )
  {
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)v6);
    v5 = v6;
  }
  this->m_movie.pObject = v5;
  if ( v5 )
    Scaleform::GFx::Movie::Release(v5);
  *(_WORD *)&this->m_bAdvance = 257;
  this->m_bPause = 0;
  extension::gfxi_detail::MovieOperationGenerator::MovieOperationGenerator(&this->m_operationGenerator);
  this->m_isSelfOwn = 0;
  v4->m_Next->extension::BiLinkable<extension::gfxi_detail::MovieInstanceListNode>::m_Prev = *(extension::BiLinkable<extension::gfxi_detail::MovieInstanceListNode> **)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataBase[4][8];
  *(_QWORD *)(*(_QWORD *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataBase[4][8]
            + 8i64) = v4->m_Next;
  v4->m_Next = (extension::BiLinkable<extension::gfxi_detail::MovieInstanceListNode> *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataBase[4][8];
  *(_QWORD *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataBase[4][8] = v4;
  if ( m.pObject->__vftable )
    Scaleform::GFx::Movie::Release((Scaleform::GFx::Movie *)m.pObject->__vftable);
}

void __fastcall extension::FutureObjectJob<extension::GFXIMovieData>::~FutureObjectJob<extension::GFXIMovieData>(
        extension::FutureObjectJob<extension::GFXIMovieData> *this)
{
  extension::AsyncContent<extension::GFXIMovieData> *m_ptr; // rdi
  extension::AsyncContent<extension::GFXIMovieData> *v3; // rdi

  m_ptr = this->m_content.m_ptr;
  this->__vftable = (extension::FutureObjectJob<extension::GFXIMovieData>_vtbl *)&extension::FutureObjectJob<extension::GFXIMovieData>::`vftable';
  if ( m_ptr && (m_ptr->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
  {
    m_ptr->m_errorCode = 5;
    EnterCriticalSection((LPCRITICAL_SECTION)&extension::AsyncStatus::s_mutex);
    _InterlockedOr64((volatile signed __int64 *)&m_ptr->m_status, 1ui64);
    EnterCriticalSection((LPCRITICAL_SECTION)&extension::AsyncStatus::s_signalCondition.m_mutex);
    WakeAllConditionVariable((PCONDITION_VARIABLE)&extension::AsyncStatus::s_signalCondition.m_conditionVariable.m_data);
    LeaveCriticalSection((LPCRITICAL_SECTION)&extension::AsyncStatus::s_signalCondition.m_mutex);
    LeaveCriticalSection((LPCRITICAL_SECTION)&extension::AsyncStatus::s_mutex);
  }
  _InterlockedExchangeAdd64(
    (volatile signed __int64 *)&extension::FutureObjectSpec::s_futureObjectJobCount,
    0xFFFFFFFFFFFFFFFFui64);
  v3 = this->m_content.m_ptr;
  if ( v3 && _InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFui64) == 1 )
  {
    extension::AsyncContent<extension::GFXIMovieData>::~AsyncContent<extension::GFXIMovieData>(v3);
    operator delete(v3, 0x68ui64);
  }
  this->__vftable = (extension::FutureObjectJob<extension::GFXIMovieData>_vtbl *)&AgIThreadHost::`vftable';
}

void __fastcall Scaleform::Ptr<Scaleform::GFx::MovieDef>::~Ptr<Scaleform::GFx::MovieDef>(
        Scaleform::Ptr<Scaleform::GFx::MovieDef> *this)
{
  Scaleform::GFx::MovieDef *pObject; // rcx

  pObject = this->pObject;
  if ( pObject )
    Scaleform::GFx::Resource::Release(pObject);
}

void __fastcall extension::GFXIMovie::~GFXIMovie(extension::GFXIMovie *this)
{
  extension::gfxi_detail::MovieProxy *m_ptr; // rbx

  m_ptr = this->m_movieProxy.m_ptr;
  if ( this->m_movieProxy.m_ptr
    && _InterlockedExchangeAdd64((volatile signed __int64 *)m_ptr, 0xFFFFFFFFFFFFFFFFui64) == 1 )
  {
    if ( m_ptr )
    {
      extension::gfxi_detail::MovieProxy::~MovieProxy(m_ptr);
      operator delete(m_ptr, 0xE8ui64);
    }
  }
}

void __fastcall extension::gfxi_detail::MovieStackNode::~MovieStackNode(
        extension::exsound_detail::SoundNameRegistry::BucketNode *this)
{
  this->m_Next->extension::BiLinkable<extension::exsound_detail::SoundNameRegistry::BucketNode>::m_Prev = this->m_Prev;
  this->m_Prev->m_Next = this->m_Next;
  this->m_Next = this;
  this->m_Prev = this;
}

void __fastcall extension::gfxi_detail::MovieProxy::~MovieProxy(extension::gfxi_detail::MovieProxy *this)
{
  Scaleform::GFx::Movie *pObject; // rcx

  `eh vector destructor iterator'(
    this->m_operationGenerator.m_keyEventGenerator,
    0x28ui64,
    4ui64,
    (void (__fastcall *)(void *))extension::gfxi_detail::MovieKeyEventGenerator::~MovieKeyEventGenerator);
  pObject = this->m_movie.pObject;
  if ( pObject )
    Scaleform::GFx::Movie::Release(pObject);
  this->extension::gfxi_detail::MovieInstanceListNode::extension::BiLinkable<extension::gfxi_detail::MovieInstanceListNode>::m_Next->extension::gfxi_detail::MovieInstanceListNode::extension::BiLinkable<extension::gfxi_detail::MovieInstanceListNode>::m_Prev = this->extension::gfxi_detail::MovieInstanceListNode::extension::BiLinkable<extension::gfxi_detail::MovieInstanceListNode>::m_Prev;
  this->extension::gfxi_detail::MovieInstanceListNode::extension::BiLinkable<extension::gfxi_detail::MovieInstanceListNode>::m_Prev->extension::gfxi_detail::MovieInstanceListNode::extension::BiLinkable<extension::gfxi_detail::MovieInstanceListNode>::m_Next = this->extension::gfxi_detail::MovieInstanceListNode::extension::BiLinkable<extension::gfxi_detail::MovieInstanceListNode>::m_Next;
  this->extension::gfxi_detail::MovieInstanceListNode::extension::BiLinkable<extension::gfxi_detail::MovieInstanceListNode>::m_Next = &this->extension::gfxi_detail::MovieInstanceListNode;
  this->extension::gfxi_detail::MovieInstanceListNode::extension::BiLinkable<extension::gfxi_detail::MovieInstanceListNode>::m_Prev = &this->extension::gfxi_detail::MovieInstanceListNode;
  this->extension::gfxi_detail::MovieStackNode::extension::BiLinkable<extension::gfxi_detail::MovieStackNode>::m_Next->extension::gfxi_detail::MovieStackNode::extension::BiLinkable<extension::gfxi_detail::MovieStackNode>::m_Prev = this->extension::gfxi_detail::MovieStackNode::extension::BiLinkable<extension::gfxi_detail::MovieStackNode>::m_Prev;
  this->extension::gfxi_detail::MovieStackNode::extension::BiLinkable<extension::gfxi_detail::MovieStackNode>::m_Prev->extension::gfxi_detail::MovieStackNode::extension::BiLinkable<extension::gfxi_detail::MovieStackNode>::m_Next = this->extension::gfxi_detail::MovieStackNode::extension::BiLinkable<extension::gfxi_detail::MovieStackNode>::m_Next;
  this->extension::gfxi_detail::MovieStackNode::extension::BiLinkable<extension::gfxi_detail::MovieStackNode>::m_Next = &this->extension::gfxi_detail::MovieStackNode;
  this->extension::gfxi_detail::MovieStackNode::extension::BiLinkable<extension::gfxi_detail::MovieStackNode>::m_Prev = &this->extension::gfxi_detail::MovieStackNode;
}

extension::GFXIMovie *__fastcall extension::GFXIMovie::operator=(
        extension::GFXIMovie *this,
        const extension::GFXIMovie *o)
{
  extension::gfxi_detail::MovieProxy *m_ptr; // rcx
  extension::gfxi_detail::MovieProxy *v4; // rbx

  m_ptr = o->m_movieProxy.m_ptr;
  if ( o->m_movieProxy.m_ptr )
    _InterlockedExchangeAdd64((volatile signed __int64 *)m_ptr, 1ui64);
  v4 = this->m_movieProxy.m_ptr;
  this->m_movieProxy.m_ptr = m_ptr;
  if ( v4 && _InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFui64) == 1 )
  {
    extension::gfxi_detail::MovieProxy::~MovieProxy(v4);
    operator delete(v4, 0xE8ui64);
  }
  return this;
}

void __fastcall extension::GFXIMovieData::EnqueueFutureMovieDataJob(
        extension::RefCountablePtr<extension::AsyncContent<extension::GFXIMovieData> > shared)
{
  extension::GFXIMovieData::LoadJob *v2; // rax
  extension::AsyncContent<extension::GFXIMovieData> *My_val; // rdx
  extension::ExThread::Runnable *v4; // rax
  extension::AsyncContent<extension::GFXIMovieData> *v5; // rbx
  std::unique_ptr<extension::ExThread::Runnable> obj; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+28h] [rbp-20h]
  void (__fastcall ****v8)(_QWORD, __int64); // [rsp+30h] [rbp-18h]
  extension::GFXIMovieData::LoadJob **v9; // [rsp+38h] [rbp-10h]
  extension::GFXIMovieData::LoadJob *v10; // [rsp+58h] [rbp+10h] BYREF
  void (__fastcall ***v11)(_QWORD, __int64); // [rsp+60h] [rbp+18h] BYREF
  extension::RefCountablePtr<extension::AsyncContent<extension::GFXIMovieData> > c; // [rsp+68h] [rbp+20h] BYREF

  v7 = -2i64;
  v2 = (extension::GFXIMovieData::LoadJob *)operator new(0x20ui64);
  v10 = v2;
  My_val = (extension::AsyncContent<extension::GFXIMovieData> *)shared.m_ptr->m_refCount.m_value._My_val;
  c.m_ptr = My_val;
  if ( My_val )
    _InterlockedExchangeAdd64((volatile signed __int64 *)My_val, 1ui64);
  extension::GFXIMovieData::LoadJob::LoadJob(
    v2,
    (extension::RefCountablePtr<extension::AsyncContent<extension::GFXIMovieData> >)&c);
  v8 = &v11;
  v11 = 0i64;
  v9 = &v10;
  v10 = 0i64;
  obj._Mypair._Myval2 = v4;
  extension::SynchronizedQueue<extension::ExThread::Runnable>::enqueue(
    &extension::AsyncWorker::s_instance.m_loadJobConsumer.m_jobQueue,
    (std::unique_ptr<extension::ExThread::Runnable>)&obj);
  if ( v10 )
    ((void (__fastcall *)(extension::GFXIMovieData::LoadJob *, __int64))v10->~AgIThreadHost)(v10, 1i64);
  if ( v11 )
    (**v11)(v11, 1i64);
  v5 = (extension::AsyncContent<extension::GFXIMovieData> *)shared.m_ptr->m_refCount.m_value._My_val;
  if ( v5 )
  {
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFui64) == 1 )
    {
      extension::AsyncContent<extension::GFXIMovieData>::~AsyncContent<extension::GFXIMovieData>(v5);
      operator delete(v5, 0x68ui64);
    }
  }
}

Scaleform::Ptr<Scaleform::GFx::ActionControl> *__fastcall Scaleform::GFx::StateBag::GetActionControl(
        Scaleform::GFx::StateBag *this,
        Scaleform::Ptr<Scaleform::GFx::ActionControl> *result)
{
  result->pObject = (Scaleform::GFx::ActionControl *)this->GetStateAddRef(this, 3i64);
  return result;
}

extension::GFXIMovieStack *__fastcall extension::GFXIMovieStack::Instance()
{
  if ( dword_140ACDF74 > *(_DWORD *)(*(_QWORD *)NtCurrentTeb()->Reserved1[11] + 40i64) )
  {
    Init_thread_header(&dword_140ACDF74);
    if ( dword_140ACDF74 == -1 )
    {
      the_instance_0.m_movieListEnd.m_Prev = &the_instance_0.m_movieListEnd;
      the_instance_0.m_movieListEnd.m_Next = &the_instance_0.m_movieListEnd;
      atexit(extension::GFXIMovieStack::Instance_::_2_::_dynamic_atexit_destructor_for__the_instance__);
      Init_thread_footer(&dword_140ACDF74);
    }
  }
  return &the_instance_0;
}

char __fastcall extension::GFXIMovie::advance(extension::GFXIMovie *this, float deltaT)
{
  extension::gfxi_detail::MovieProxy *m_ptr; // rbx
  __int64 v4; // r9
  __int64 v5; // rdx

  m_ptr = this->m_movieProxy.m_ptr;
  if ( !this->m_movieProxy.m_ptr )
    return 0;
  if ( m_ptr->m_bAdvance )
  {
    extension::gfxi_detail::MovieOperationGenerator::postKeyboardEvent(
      &m_ptr->m_operationGenerator,
      m_ptr->m_movie.pObject);
    LOBYTE(v4) = 1;
    ((void (__fastcall *)(Scaleform::GFx::Movie *, __int64, __int64, __int64))m_ptr->m_movie.pObject->Advance)(
      m_ptr->m_movie.pObject,
      v5,
      2i64,
      v4);
  }
  return 1;
}

void __fastcall extension::GFXIMovieStack::advance(extension::GFXIMovieStack *this, float deltaT)
{
  extension::BiLinkable<extension::gfxi_detail::MovieStackNode> *m_Next; // rdi
  extension::gfxi_detail::MovieStackNode *p_m_movieListEnd; // rsi
  bool v4; // zf
  extension::gfxi_detail::MovieProxy *p_m_Next; // rbx
  __int64 v6; // r9
  __int64 v7; // rdx

  m_Next = this->m_movieListEnd.m_Next;
  p_m_movieListEnd = &this->m_movieListEnd;
  while ( m_Next != p_m_movieListEnd )
  {
    v4 = m_Next == 0i64;
    p_m_Next = (extension::gfxi_detail::MovieProxy *)&m_Next[-1].m_Next;
    m_Next = m_Next->m_Next;
    if ( v4 )
      p_m_Next = 0i64;
    if ( p_m_Next->m_isSelfOwn
      && (p_m_Next->m_movie.pObject->HasLooped(p_m_Next->m_movie.pObject)
       || p_m_Next->m_movie.pObject->IsExitRequested(p_m_Next->m_movie.pObject)) )
    {
      p_m_Next->m_isSelfOwn = 0;
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)p_m_Next, 0xFFFFFFFFFFFFFFFFui64) == 1 )
      {
        if ( p_m_Next )
        {
          extension::gfxi_detail::MovieProxy::~MovieProxy(p_m_Next);
          operator delete(p_m_Next, 0xE8ui64);
        }
      }
    }
    if ( p_m_Next->m_bAdvance )
    {
      extension::gfxi_detail::MovieOperationGenerator::postKeyboardEvent(
        &p_m_Next->m_operationGenerator,
        p_m_Next->m_movie.pObject);
      LOBYTE(v6) = 1;
      ((void (__fastcall *)(Scaleform::GFx::Movie *, __int64, __int64, __int64))p_m_Next->m_movie.pObject->Advance)(
        p_m_Next->m_movie.pObject,
        v7,
        2i64,
        v6);
    }
  }
}

Scaleform::GFx::Value *__fastcall extension::GFXIMovie::createASArray(
        extension::GFXIMovie *this,
        Scaleform::GFx::Value *result)
{
  extension::gfxi_detail::MovieProxy *m_ptr; // rcx
  Scaleform::GFx::Value *v4; // rax

  m_ptr = this->m_movieProxy.m_ptr;
  if ( m_ptr )
  {
    extension::GFXIMovieContext::createASArray(&m_ptr->extension::GFXIMovieContext, result);
    return result;
  }
  else
  {
    result->pObjectInterface = 0i64;
    result->Type = VT_None;
    v4 = result;
    result->pPrev = (Scaleform::GFx::Value *)-1i64;
    result->pNext = (Scaleform::GFx::Value *)-1i64;
  }
  return v4;
}

Scaleform::GFx::Value *__fastcall extension::GFXIMovieContext::createASArray(
        extension::GFXIMovieContext *this,
        Scaleform::GFx::Value *result)
{
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_None;
  Scaleform::GFx::Movie::CreateArray(this->m_movie.pObject, result);
  return result;
}

extension::GFXIMovie *__fastcall extension::GFXIMovieData::createInstance(
        extension::GFXIMovieData *this,
        extension::GFXIMovie *result)
{
  extension::GFXILoader *v4; // rax
  Scaleform::GFx::ActionControl *pObject; // rdi
  Scaleform::Render::ThreadCommandQueue *Myval2; // rdx
  Scaleform::GFx::MovieDef *v7; // rcx
  Scaleform::RefCountVImpl *v8; // rbx
  extension::gfxi_detail::MovieProxy *v9; // rdi
  extension::gfxi_detail::MovieProxy *m_ptr; // rdi
  extension::gfxi_detail::MovieProxy *v11; // rax
  extension::GFXIRenderer *v12; // rax
  extension::GFXIFontManager *v13; // rdi
  __int64 v14; // r9
  __int64 v15; // rdx
  int v17; // [rsp+40h] [rbp-59h] BYREF
  __int64 v18; // [rsp+48h] [rbp-51h]
  __int64 v19; // [rsp+50h] [rbp-49h]
  __int64 v20; // [rsp+58h] [rbp-41h]
  __int64 v21; // [rsp+60h] [rbp-39h]
  __int64 v22; // [rsp+68h] [rbp-31h]
  __int64 v23; // [rsp+70h] [rbp-29h]
  __int64 v24; // [rsp+78h] [rbp-21h]
  Tween::EasingType v25; // [rsp+80h] [rbp-19h]
  __int64 v26; // [rsp+84h] [rbp-15h]
  __int64 v27; // [rsp+8Ch] [rbp-Dh]
  __int64 v28; // [rsp+94h] [rbp-5h]
  __int64 v29; // [rsp+A0h] [rbp+7h]
  extension::gfxi_detail::MovieProxy *v30; // [rsp+A8h] [rbp+Fh]
  Scaleform::Ptr<Scaleform::GFx::Movie> m; // [rsp+100h] [rbp+67h] BYREF
  extension::GFXIMovie *v32; // [rsp+108h] [rbp+6Fh]
  Scaleform::RefCountVImpl *v33; // [rsp+110h] [rbp+77h]
  Scaleform::Ptr<Scaleform::GFx::ActionControl> resulta; // [rsp+118h] [rbp+7Fh] BYREF

  v32 = result;
  v29 = -2i64;
  result->m_movieProxy.m_ptr = 0i64;
  v4 = extension::GFXILoader::Instance();
  pObject = Scaleform::GFx::StateBag::GetActionControl(v4->m_loader._Mypair._Myval2, &resulta)->pObject;
  if ( resulta.pObject )
    Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)resulta.pObject);
  Myval2 = extension::GFXIRenderer::Instance()->m_commandQueue._Mypair._Myval2;
  v7 = this->m_movieDef.pObject;
  v17 = 0;
  v18 = 16i64;
  v19 = 0x2000i64;
  v20 = 0x2000i64;
  v21 = -1i64;
  v22 = 0i64;
  v23 = 0i64;
  v25 = FLOAT_0_25;
  v26 = -1i64;
  v27 = -1i64;
  v28 = -1i64;
  v24 = 0i64;
  v8 = (Scaleform::RefCountVImpl *)v7->CreateInstance(
                                     v7,
                                     (const Scaleform::GFx::MemoryParams *)&v17,
                                     0,
                                     pObject,
                                     Myval2);
  v33 = v8;
  if ( v8 )
  {
    v9 = (extension::gfxi_detail::MovieProxy *)operator new(0xE8ui64);
    v30 = v9;
    Scaleform::Render::RenderBuffer::AddRef(v8);
    m.pObject = (Scaleform::GFx::Movie *)v8;
    extension::gfxi_detail::MovieProxy::MovieProxy(v9, (Scaleform::Ptr<Scaleform::GFx::Movie>)&m);
    m_ptr = result->m_movieProxy.m_ptr;
    result->m_movieProxy.m_ptr = v11;
    if ( m_ptr )
    {
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)m_ptr, 0xFFFFFFFFFFFFFFFFui64) == 1 )
      {
        extension::gfxi_detail::MovieProxy::~MovieProxy(m_ptr);
        operator delete(m_ptr, 0xE8ui64);
      }
      v8 = v33;
    }
    v12 = extension::GFXIRenderer::Instance();
    ((void (__fastcall *)(Scaleform::RefCountVImpl *, Scaleform::GFx::Viewport *))v8->__vftable[4].~RefCountImplCore)(
      v8,
      &v12->m_defaultMovieViewport);
    v8->__vftable[11].~RefCountImplCore(v8);
    ((void (__fastcall *)(Scaleform::RefCountVImpl *, __int64))v8->__vftable[15].~RefCountImplCore)(v8, 4i64);
    v13 = extension::GFXIFontManager::Instance();
    ((void (__fastcall *)(Scaleform::RefCountVImpl *, __int64, Scaleform::GFx::FontLib *))v8[1].Release)(
      &v8[1],
      20i64,
      v13->m_currentFontStates.m_fontLib.pObject);
    ((void (__fastcall *)(Scaleform::RefCountVImpl *, __int64, Scaleform::GFx::FontMap *))v8[1].Release)(
      &v8[1],
      23i64,
      v13->m_currentFontStates.m_fontMap.pObject);
    LOBYTE(v14) = 1;
    ((void (__fastcall *)(Scaleform::RefCountVImpl *, __int64, __int64, __int64))v8->__vftable[8].~RefCountImplCore)(
      v8,
      v15,
      2i64,
      v14);
  }
  if ( v8 )
    Scaleform::GFx::Movie::Release((Scaleform::GFx::Movie *)v8);
  return result;
}

Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::QName> *__fastcall extension::FutureObjectJob<OGLCurve>::createOnErrorData(
        Scaleform::GFx::AS3::Instances::fl::XML *this,
        Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::Instances::fl::QName> *result)
{
  result->pObject = 0i64;
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFXIMovie::getASVariable(
        extension::GFXIMovie *this,
        Scaleform::GFx::Value *result,
        const char *pathToVar)
{
  extension::GFXIMovieContext::getASVariable(&this->m_movieProxy.m_ptr->extension::GFXIMovieContext, result, pathToVar);
  return result;
}

Scaleform::GFx::Value *__fastcall extension::GFXIMovieContext::getASVariable(
        extension::GFXIMovieContext *this,
        Scaleform::GFx::Value *result,
        const char *pathToVar)
{
  result->pPrev = (Scaleform::GFx::Value *)-1i64;
  result->pNext = (Scaleform::GFx::Value *)-1i64;
  result->pObjectInterface = 0i64;
  result->Type = VT_None;
  Scaleform::GFx::Movie::GetVariable(this->m_movie.pObject, result, "_root.testParam");
  return result;
}

bool __fastcall extension::GFXIMovie::invoke(
        extension::GFXIMovie *this,
        const char *pathToVar,
        Scaleform::GFx::Value *presult,
        Scaleform::GFx::Value *pargs,
        unsigned int numArgs)
{
  extension::gfxi_detail::MovieProxy *m_ptr; // rbx
  bool result; // al

  m_ptr = this->m_movieProxy.m_ptr;
  result = Scaleform::GFx::Movie::IsAvailable(this->m_movieProxy.m_ptr->m_movie.pObject, pathToVar);
  if ( result )
    return Scaleform::GFx::Movie::Invoke(m_ptr->m_movie.pObject, pathToVar, presult, pargs, numArgs);
  return result;
}

void __fastcall extension::GFXIMovieStack::pushPriority(
        extension::GFXIMovieStack *this,
        extension::GFXIMovie *movie,
        int priority,
        bool isSelfOwn)
{
  extension::gfxi_detail::MovieProxy *m_ptr; // rbx
  extension::gfxi_detail::MovieStackNode *p_m_movieListEnd; // rdx
  extension::GFXIMovieStack *m_Next; // rax
  __int64 v7; // rcx

  m_ptr = movie->m_movieProxy.m_ptr;
  if ( movie->m_movieProxy.m_ptr )
    _InterlockedExchangeAdd64((volatile signed __int64 *)m_ptr, 1ui64);
  m_ptr->m_iPriority = priority;
  p_m_movieListEnd = &this->m_movieListEnd;
  m_Next = (extension::GFXIMovieStack *)this->m_movieListEnd.m_Next;
  if ( m_Next != (extension::GFXIMovieStack *)&this->m_movieListEnd )
  {
    do
    {
      v7 = (__int64)&m_Next[1];
      if ( !m_Next )
        v7 = 48i64;
      if ( *(_DWORD *)v7 >= priority )
        break;
      m_Next = (extension::GFXIMovieStack *)m_Next->m_lastTick;
    }
    while ( m_Next != (extension::GFXIMovieStack *)p_m_movieListEnd );
  }
  m_ptr->extension::gfxi_detail::MovieStackNode::extension::BiLinkable<extension::gfxi_detail::MovieStackNode>::m_Next->extension::gfxi_detail::MovieStackNode::extension::BiLinkable<extension::gfxi_detail::MovieStackNode>::m_Prev = *(extension::BiLinkable<extension::gfxi_detail::MovieStackNode> **)&m_Next->m_isAdvanceCalled;
  *(_QWORD *)(*(_QWORD *)&m_Next->m_isAdvanceCalled + 8i64) = m_ptr->extension::gfxi_detail::MovieStackNode::extension::BiLinkable<extension::gfxi_detail::MovieStackNode>::m_Next;
  m_ptr->extension::gfxi_detail::MovieStackNode::extension::BiLinkable<extension::gfxi_detail::MovieStackNode>::m_Next = (extension::BiLinkable<extension::gfxi_detail::MovieStackNode> *)m_Next;
  *(_QWORD *)&m_Next->m_isAdvanceCalled = &m_ptr->extension::gfxi_detail::MovieStackNode;
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)m_ptr, 0xFFFFFFFFFFFFFFFFui64) == 1 )
  {
    extension::gfxi_detail::MovieProxy::~MovieProxy(m_ptr);
    operator delete(m_ptr, 0xE8ui64);
  }
}

char __fastcall extension::GFXIMovie::render(extension::GFXIMovie *this)
{
  extension::GFXIRenderer *v3; // rbx

  if ( !this->m_movieProxy.m_ptr )
    return 0;
  v3 = extension::GFXIRenderer::Instance();
  extension::GFXIRenderer::beginScene(v3);
  extension::gfxi_detail::MovieProxy::renderDisplayHandle(this->m_movieProxy.m_ptr, v3);
  if ( v3->m_glm )
  {
    v3->m_hal.pObject->EndScene(v3->m_hal.pObject);
    glEnable(0x8DB9u);
  }
  return 1;
}

void __fastcall extension::GFXIMovieStack::render(extension::GFXIMovieStack *this)
{
  extension::GFXIRenderer *v2; // rsi
  extension::BiLinkable<extension::gfxi_detail::MovieStackNode> *m_Next; // rdi
  extension::gfxi_detail::MovieStackNode *p_m_movieListEnd; // rbp
  bool v5; // zf
  extension::gfxi_detail::MovieProxy *p_m_Next; // rbx

  v2 = extension::GFXIRenderer::Instance();
  extension::GFXIRenderer::beginScene(v2);
  m_Next = this->m_movieListEnd.m_Next;
  p_m_movieListEnd = &this->m_movieListEnd;
  while ( m_Next != p_m_movieListEnd )
  {
    v5 = m_Next == 0i64;
    p_m_Next = (extension::gfxi_detail::MovieProxy *)&m_Next[-1].m_Next;
    m_Next = m_Next->m_Next;
    if ( v5 )
      p_m_Next = 0i64;
    if ( p_m_Next->m_isSelfOwn
      && (p_m_Next->m_movie.pObject->HasLooped(p_m_Next->m_movie.pObject)
       || p_m_Next->m_movie.pObject->IsExitRequested(p_m_Next->m_movie.pObject)) )
    {
      p_m_Next->m_isSelfOwn = 0;
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)p_m_Next, 0xFFFFFFFFFFFFFFFFui64) == 1 )
      {
        if ( p_m_Next )
        {
          extension::gfxi_detail::MovieProxy::~MovieProxy(p_m_Next);
          operator delete(p_m_Next, 0xE8ui64);
        }
      }
    }
    extension::gfxi_detail::MovieProxy::renderDisplayHandle(p_m_Next, v2);
  }
  if ( v2->m_glm )
  {
    v2->m_hal.pObject->EndScene(v2->m_hal.pObject);
    glEnable(0x8DB9u);
  }
}

void __fastcall extension::gfxi_detail::MovieProxy::renderDisplayHandle(
        extension::gfxi_detail::MovieProxy *this,
        extension::GFXIRenderer *renderer)
{
  Scaleform::RefCountVImpl **v3; // rdi
  Scaleform::Render::ContextImpl::RenderNotify *v4; // rax
  Scaleform::Render::HAL *pObject; // rbx
  Scaleform::Render::TreeRoot *RenderEntry; // rax
  Scaleform::Render::ContextImpl::RTHandle v7; // [rsp+40h] [rbp+8h] BYREF
  Scaleform::Render::ContextImpl::RTHandle *v8; // [rsp+50h] [rbp+18h]

  if ( this->m_bRender )
  {
    v3 = (Scaleform::RefCountVImpl **)this->m_movie.pObject->GetDisplayHandle(this->m_movie.pObject);
    if ( *v3 )
      Scaleform::Render::RenderBuffer::AddRef(*v3);
    v7.pData.pObject = (Scaleform::Render::ContextImpl::RTHandle::HandleData *)*v3;
    v8 = &v7;
    renderer->m_hal.pObject->NextSceneRasterMode = RasterMode_Solid;
    v4 = renderer->m_hal.pObject->GetContextNotify(renderer->m_hal.pObject);
    if ( Scaleform::Render::ContextImpl::RTHandle::NextCapture(&v7, v4) )
    {
      pObject = renderer->m_hal.pObject;
      RenderEntry = (Scaleform::Render::TreeRoot *)Scaleform::Render::ContextImpl::RTHandle::GetRenderEntry(&v7);
      Scaleform::Render::HAL::Draw(pObject, RenderEntry);
    }
    Scaleform::Render::ContextImpl::RTHandle::~RTHandle(&v7);
  }
}

void __fastcall extension::GFXIMovieStack::renderPriority(extension::GFXIMovieStack *this, int backPrio, int frontPrio)
{
  extension::GFXIRenderer *v6; // rsi
  extension::BiLinkable<extension::gfxi_detail::MovieStackNode> *m_Next; // rdi
  extension::gfxi_detail::MovieStackNode *p_m_movieListEnd; // rbp
  bool v9; // zf
  extension::gfxi_detail::MovieProxy *p_m_Next; // rbx
  int m_iPriority; // eax

  v6 = extension::GFXIRenderer::Instance();
  extension::GFXIRenderer::beginScene(v6);
  m_Next = this->m_movieListEnd.m_Next;
  p_m_movieListEnd = &this->m_movieListEnd;
  while ( m_Next != p_m_movieListEnd )
  {
    v9 = m_Next == 0i64;
    p_m_Next = (extension::gfxi_detail::MovieProxy *)&m_Next[-1].m_Next;
    m_Next = m_Next->m_Next;
    if ( v9 )
      p_m_Next = 0i64;
    if ( p_m_Next->m_isSelfOwn
      && (p_m_Next->m_movie.pObject->HasLooped(p_m_Next->m_movie.pObject)
       || p_m_Next->m_movie.pObject->IsExitRequested(p_m_Next->m_movie.pObject)) )
    {
      p_m_Next->m_isSelfOwn = 0;
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)p_m_Next, 0xFFFFFFFFFFFFFFFFui64) == 1 )
      {
        if ( p_m_Next )
        {
          extension::gfxi_detail::MovieProxy::~MovieProxy(p_m_Next);
          operator delete(p_m_Next, 0xE8ui64);
        }
      }
    }
    m_iPriority = p_m_Next->m_iPriority;
    if ( m_iPriority >= backPrio && m_iPriority <= frontPrio )
      extension::gfxi_detail::MovieProxy::renderDisplayHandle(p_m_Next, v6);
  }
  if ( v6->m_glm )
  {
    v6->m_hal.pObject->EndScene(v6->m_hal.pObject);
    glEnable(0x8DB9u);
  }
}

__int64 __fastcall extension::GFXIMovieData::LoadJob::run(extension::GFXIMovieData::LoadJob *this)
{
  extension::AsyncContent<extension::GFXIMovieData> *m_ptr; // rax
  __int64 v3; // rax
  std::unique_ptr<extension::GFXIMovieData> *v4; // rax
  Scaleform::GFx::Loader *Myval2; // rcx
  std::unique_ptr<extension::GFXIMovieData> *v6; // rax
  const std::string *p_m_name; // rdx
  Scaleform::RefCountVImpl *Movie; // rdi
  std::unique_ptr<extension::GFXIMovieData> *v9; // rax
  extension::GFXIMovieData *v10; // r14
  Scaleform::GFx::Resource **p_pObject; // rbx
  extension::AsyncContent<extension::GFXIMovieData> *v12; // rcx
  extension::GFXIMovieData *v14; // [rsp+70h] [rbp+8h] BYREF
  char v15; // [rsp+78h] [rbp+10h] BYREF
  char v16; // [rsp+80h] [rbp+18h] BYREF
  std::unique_ptr<extension::GFXIMovieData> result; // [rsp+88h] [rbp+20h] BYREF

  m_ptr = this->m_content.m_ptr;
  if ( m_ptr && (m_ptr->m_status.m_stateFlags.m_value._My_val & 2) != 0
    || (v3 = *(_QWORD *)(*(_QWORD *)NtCurrentTeb()->Reserved1[11] + 16i64)) != 0
    && (*(_QWORD *)(v3 + 8) & 0x100i64) != 0 )
  {
    if ( this->m_content.m_ptr )
    {
      v4 = this->createOnErrorData(this, &v14);
      extension::AsyncContent<extension::GFXIMovieData>::setErrorResultWithData(
        this->m_content.m_ptr,
        4,
        (std::unique_ptr<extension::GFXIMovieData>)v4);
    }
  }
  else
  {
    Myval2 = extension::GFXILoader::Instance()->m_loader._Mypair._Myval2;
    if ( Myval2 )
    {
      p_m_name = &this->m_content.m_ptr->m_name;
      if ( this->m_content.m_ptr->m_name._Mypair._Myval2._Myres >= 0x10 )
        p_m_name = (const std::string *)p_m_name->_Mypair._Myval2._Bx._Ptr;
      Movie = (Scaleform::RefCountVImpl *)Scaleform::GFx::Loader::CreateMovie(
                                            Myval2,
                                            p_m_name->_Mypair._Myval2._Bx._Buf,
                                            0x80042u,
                                            0i64);
      if ( Movie )
      {
        v10 = (extension::GFXIMovieData *)operator new(8ui64);
        v14 = v10;
        v10->m_movieDef.pObject = 0i64;
        p_pObject = &v10->m_movieDef.pObject;
        Scaleform::Render::RenderBuffer::AddRef(Movie);
        if ( v10->m_movieDef.pObject )
          Scaleform::GFx::Resource::Release(v10->m_movieDef.pObject);
        v10->m_movieDef.pObject = (Scaleform::GFx::MovieDef *)Movie;
        v12 = this->m_content.m_ptr;
        if ( v12 )
        {
          p_pObject = 0i64;
          result._Mypair._Myval2 = v10;
          extension::AsyncContent<extension::GFXIMovieData>::setResult(
            v12,
            (std::unique_ptr<extension::GFXIMovieData>)&result);
        }
        if ( p_pObject )
        {
          if ( *p_pObject )
            Scaleform::GFx::Resource::Release(*p_pObject);
          operator delete(p_pObject, 8ui64);
        }
        Scaleform::GFx::Resource::Release((Scaleform::GFx::Resource *)Movie);
      }
      else if ( this->m_content.m_ptr )
      {
        v9 = this->createOnErrorData(this, &v16);
        extension::AsyncContent<extension::GFXIMovieData>::setErrorResultWithData(
          this->m_content.m_ptr,
          1,
          (std::unique_ptr<extension::GFXIMovieData>)v9);
      }
    }
    else if ( this->m_content.m_ptr )
    {
      v6 = this->createOnErrorData(this, &v15);
      extension::AsyncContent<extension::GFXIMovieData>::setErrorResultWithData(
        this->m_content.m_ptr,
        1,
        (std::unique_ptr<extension::GFXIMovieData>)v6);
    }
  }
  return 0i64;
}

void __fastcall extension::AsyncContent<extension::GFXIMovieData>::setErrorResultWithData(
        extension::AsyncContent<extension::GFXIMovieData> *this,
        int e,
        std::unique_ptr<extension::GFXIMovieData> data)
{
  Scaleform::GFx::MovieDef *pObject; // rax
  extension::GFXIMovieData *Myval2; // rdi
  Scaleform::GFx::Resource **v7; // rbx

  if ( (this->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
  {
    this->m_errorCode = e;
    pObject = data._Mypair._Myval2->m_movieDef.pObject;
    data._Mypair._Myval2->m_movieDef.pObject = 0i64;
    Myval2 = this->m_data._Mypair._Myval2;
    this->m_data._Mypair._Myval2 = (extension::GFXIMovieData *)pObject;
    if ( Myval2 )
    {
      if ( Myval2->m_movieDef.pObject )
        Scaleform::GFx::Resource::Release(Myval2->m_movieDef.pObject);
      operator delete(Myval2, 8ui64);
    }
    EnterCriticalSection((LPCRITICAL_SECTION)&extension::AsyncStatus::s_mutex);
    _InterlockedOr64((volatile signed __int64 *)&this->m_status, 1ui64);
    EnterCriticalSection((LPCRITICAL_SECTION)&extension::AsyncStatus::s_signalCondition.m_mutex);
    WakeAllConditionVariable((PCONDITION_VARIABLE)&extension::AsyncStatus::s_signalCondition.m_conditionVariable.m_data);
    LeaveCriticalSection((LPCRITICAL_SECTION)&extension::AsyncStatus::s_signalCondition.m_mutex);
    LeaveCriticalSection((LPCRITICAL_SECTION)&extension::AsyncStatus::s_mutex);
  }
  v7 = (Scaleform::GFx::Resource **)data._Mypair._Myval2->m_movieDef.pObject;
  if ( data._Mypair._Myval2->m_movieDef.pObject )
  {
    if ( *v7 )
      Scaleform::GFx::Resource::Release(*v7);
    operator delete(v7, 8ui64);
  }
}

void __fastcall extension::AsyncContent<extension::GFXIMovieData>::setResult(
        extension::AsyncContent<extension::GFXIMovieData> *this,
        std::unique_ptr<extension::GFXIMovieData> result)
{
  Scaleform::GFx::MovieDef *pObject; // rax
  extension::GFXIMovieData *Myval2; // rdi
  Scaleform::GFx::Resource **v6; // rbx

  if ( (this->m_status.m_stateFlags.m_value._My_val & 1) == 0 )
  {
    pObject = result._Mypair._Myval2->m_movieDef.pObject;
    if ( result._Mypair._Myval2->m_movieDef.pObject )
    {
      result._Mypair._Myval2->m_movieDef.pObject = 0i64;
      Myval2 = this->m_data._Mypair._Myval2;
      this->m_data._Mypair._Myval2 = (extension::GFXIMovieData *)pObject;
      if ( Myval2 )
      {
        if ( Myval2->m_movieDef.pObject )
          Scaleform::GFx::Resource::Release(Myval2->m_movieDef.pObject);
        operator delete(Myval2, 8ui64);
      }
    }
    else
    {
      this->m_errorCode = 5;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)&extension::AsyncStatus::s_mutex);
    _InterlockedOr64((volatile signed __int64 *)&this->m_status, 1ui64);
    EnterCriticalSection((LPCRITICAL_SECTION)&extension::AsyncStatus::s_signalCondition.m_mutex);
    WakeAllConditionVariable((PCONDITION_VARIABLE)&extension::AsyncStatus::s_signalCondition.m_conditionVariable.m_data);
    LeaveCriticalSection((LPCRITICAL_SECTION)&extension::AsyncStatus::s_signalCondition.m_mutex);
    LeaveCriticalSection((LPCRITICAL_SECTION)&extension::AsyncStatus::s_mutex);
  }
  v6 = (Scaleform::GFx::Resource **)result._Mypair._Myval2->m_movieDef.pObject;
  if ( result._Mypair._Myval2->m_movieDef.pObject )
  {
    if ( *v6 )
      Scaleform::GFx::Resource::Release(*v6);
    operator delete(v6, 8ui64);
  }
}

