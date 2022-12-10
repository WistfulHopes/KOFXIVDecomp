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
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/jobmanager.h"
#include "dev/kof/master/development/source/ps4project/baseproject/pcutil/pcdummy.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_drawableimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/refcountable.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hal.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_buffer.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_characterdef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "dev/silverware/git/sdk/agscopedlock.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/operationmapper.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/randommt.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filters.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filterparams.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_sse.h"
#include "dev/silverware/git/sdk/agreferencecountinl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphqueue.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_types.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdata/effectappdata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_font.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/resourcemanager.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/time.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/type_traits"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessdefs.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/libcommon.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstddef"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatapacked.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_pathdatapacker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_linebuffer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_highlight.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_profiler.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector2unaligned.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_states.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/tga_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_statebag.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/mediamanager.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_functions.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_simplemeshcache.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/audiopresenter.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/fontprovider/render_fontproviderwinapi.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/mutex"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmodel.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/algorithm"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/chrono"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_bundle.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/limits"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_new.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglcurve.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_typeinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloatmp.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapemeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/jpeg_imagefile.h"
#include "program files (x86)/windows kits/8.1/include/shared/guiddef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/silverware/git/sdk/system/agsysteminfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treetext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefileutil.h"
#include "dev/silverware/git/sdk/agreferenceinl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_docview.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xutility"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_range.h"
#include "program files (x86)/windows kits/8.1/include/shared/stralign.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/utility"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglsprite.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "dev/silverware/git/sdk/agmemorystream.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/iosfwd"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_hash.h"
#include "dev/silverware/git/sdk/agmemorypool.h"
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
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessgen.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treeshape.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessellator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector3unaligned.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_exception.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xhash"
#include "dev/silverware/git/sdk/platforms/pc/system/agpcsysteminfo.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/list"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
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
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_stroker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/stdexcept"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/dds_imagefile.h"
#include "dev/silverware/git/sdk/util/agservicecommand.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/vectormath_aos.h"
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
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hairliner.h"
#include "dev/silverware/git/sdk/util/agperformancecounter.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/debug/logging.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_filterdesc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_styledtext.h"
#include "dev/silverware/git/sdk/agclock.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix3x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_core.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_queue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_fontmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitive.h"
#include "dev/silverware/git/sdk/agmutex.inl"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocaddr.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_radixtree.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdatalistmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_twips.h"
#include "program files (x86)/windows kits/8.1/include/um/winuser.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectcommon.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_containers.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/string"
#include "dev/silverware/git/sdk/agreferencedobjectinl.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_wwhelper.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steam_api.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic0.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/globalheapmemory.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "dev/silverware/git/sdk/agcondition.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/fixmemory.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/mat_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/array"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogleffect.h"
#include "dev/kof/master/development/source/ps4project/baseproject/pcutil/pccontrolsmanager.h"
#include "dev/silverware/git/sdk/memory/agallocators.h"
#include "dev/silverware/git/sdk/input/aginputmanager.h"
#include "dev/silverware/git/sdk/agsingleton.h"
#include "dev/silverware/git/sdk/filesystem/agfile.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector4unaligned.h"
#include "dev/silverware/git/sdk/filesystem/agpath.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogllight.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_vertex.h"
#include "dev/silverware/git/sdk/filesystem/agmount.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/fontprovider/render_fontproviderhud.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_wstring.h"
#include "dev/silverware/git/sdk/filesystem/agdirectory.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/vecidx_aos.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/floatinvec.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/ios"
#include "dev/silverware/git/sdk/3rdparty/steam/matchmakingtypes.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/quat_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocnum"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/floatinvec.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xiosbase"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thread"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threadcheck.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocale"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exthread.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/memory"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory"
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
#include "dev/silverware/git/sdk/agstring.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_movie.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/mutex.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_math.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vector"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_operation.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/bitset"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/vec_aos.h"
#include "dev/silverware/git/sdk/util/agdelegate.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_screentoworld.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thr/xthread"
#include "dev/kof/master/development/source/baseproject/jni/game/util/easycommand.h"
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
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_event.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/deque"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/png_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_keycodes.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "dev/silverware/git/sdk/input/agsdlmappingparser.h"
#include "dev/kof/master/development/source/baseproject/jni/game/check/operationmapper.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/pcutil/pccontrolsmanager.cpp"

std::piecewise_construct_t std::piecewise_construct; // 0x1408A0D2A
const EasyCommand::CommandData s_commandData[40][1]; // 0x1408A0ED0
long EasyCommand::Update(); // 0x1402392B0
EasyCommand::RetValue EasyCommand::KeyCheckAND(long key, GameOperations::GameOpSpec sp, EasyCommand::CheckOption op); // 0x1402394D0
EasyCommand::RetValue EasyCommand::KeyCheckOR(long key, GameOperations::GameOpSpec sp, EasyCommand::CheckOption op); // 0x140239700
EasyCommand::RetValue EasyCommand::KeyCheckExclusive(long key, GameOperations::GameOpSpec sp, EasyCommand::CheckOption op); // 0x140239910
EasyCommand::RetValue EasyCommand::KeyCheckFirst(long key, GameOperations::GameOpSpec sp, EasyCommand::CheckOption op); // 0x140239B50//decompilation failure at 1408A0D2A!
//decompilation failure at 1408A0ED0!
__int64 __fastcall EasyCommand::KeyCheckAND(
        EasyCommand *this,
        int key,
        GameOperations::GameOpSpec sp,
        EasyCommand::CheckOption op)
{
  __int64 v5; // rbx
  UserGameOperation *v7; // rax
  int v8; // er11
  UserGameOperation *v9; // rdi
  int v10; // er8
  Framework::GLManager *p_m_gamepad; // rcx
  int v12; // eax
  UserGameOperation::UserSlot *p_m_emptyUserSlot; // r9
  char *v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int128 v19; // xmm1
  __int64 v21; // rdx
  signed __int64 v22; // r8
  int v23[2]; // [rsp+20h] [rbp-68h] BYREF
  __int128 v24; // [rsp+28h] [rbp-60h]
  __int128 v25; // [rsp+38h] [rbp-50h] BYREF
  __int128 v26[2]; // [rsp+48h] [rbp-40h]

  v5 = sp;
  v7 = UserGameOperation::Instance();
  v8 = 0;
  v9 = v7;
  if ( !Framework::GLManager::glm )
    goto LABEL_7;
  v10 = *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2199612i64);
  if ( !v10 )
    goto LABEL_7;
  p_m_gamepad = (Framework::GLManager *)&Framework::GLManager::glm->m_controllerContext.m_gamepad;
  v12 = 0;
  if ( &Framework::GLManager::glm->m_controllerContext.m_gamepad == (std::array<AgPointer<AgController>,4> *)&Framework::GLManager::glm->m_controllerContext.m_lastUsedContType )
    goto LABEL_7;
  while ( 1 )
  {
    ++v12;
    if ( p_m_gamepad->m_commandBufferSyncLazyFuncQueue._Mypair._Myval2._Myproxy )
    {
      if ( v12 == v10 )
        break;
    }
    p_m_gamepad = (Framework::GLManager *)((char *)p_m_gamepad + 16);
    if ( p_m_gamepad == (Framework::GLManager *)&Framework::GLManager::glm->m_controllerContext.m_lastUsedContType )
      goto LABEL_7;
  }
  if ( v12 == -1 )
LABEL_7:
    p_m_emptyUserSlot = &v9->m_emptyUserSlot;
  else
    p_m_emptyUserSlot = &v9->m_slots[v12 - 1];
  if ( !p_m_emptyUserSlot || v9->m_keyboardLocked && ((unsigned int)v5 <= 3 || (unsigned int)(v5 - 6) <= 5) )
  {
LABEL_20:
    LOBYTE(v8) = _bittest(&key, v5);
    return (unsigned int)(v8 + 3);
  }
  else
  {
    v23[0] = 0xFFFF;
    v14 = (char *)&v9->m_ButtonConfig[v5];
    v15 = 0i64;
    while ( *(int *)((char *)&v23[v15] + (char *)&v9->m_ButtonConfig[v5] - (char *)v23) == v23[v15] )
    {
      if ( --v15 < 0 )
        goto LABEL_15;
    }
    v21 = 0i64;
    v23[0] = *(_DWORD *)v14 & p_m_emptyUserSlot->m_stableChannels._Array[0];
    v22 = v14 - (char *)v23;
    while ( v23[v21] == *(int *)((char *)&v23[v21] + v22) )
    {
      if ( --v21 < 0 )
        goto LABEL_27;
    }
LABEL_15:
    v16 = 3i64;
    v17 = 3i64;
    v18 = (char *)p_m_emptyUserSlot - ((char *)&v25 + 8) + 24;
    v19 = *(_OWORD *)&v9->m_KeyboardButtonConfig[v5]._Array[2];
    v24 = *(_OWORD *)v9->m_KeyboardButtonConfig[v5]._Array;
    v25 = v19;
    do
    {
      *((_QWORD *)&v24 + v17) &= *(_QWORD *)((char *)&v24 + 8 * v17 + v18);
      --v17;
    }
    while ( v17 >= 0 );
    v26[0] = v24;
    v26[1] = v25;
    while ( !*((_QWORD *)v26 + v16) )
    {
      if ( --v16 < 0 )
        goto LABEL_20;
    }
LABEL_27:
    if ( op == COUNTER_HIT && (unsigned int)v5 > 3 )
      return 1i64;
    else
      return 3 - (unsigned int)((key & (1 << v5)) != 0);
  }
}

__int64 __fastcall EasyCommand::KeyCheckExclusive(
        EasyCommand *this,
        int key,
        GameOperations::GameOpSpec sp,
        EasyCommand::CheckOption op)
{
  __int64 v5; // rdi
  int v6; // ebx
  char v7; // r14
  UserGameOperation *v9; // rsi
  int v10; // er8
  Framework::GLManager *p_m_gamepad; // rax
  int v12; // edx
  UserGameOperation::UserSlot *p_m_emptyUserSlot; // r9
  std::bitset<16> *v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int128 v19; // xmm1
  __int64 v21; // rdx
  signed __int64 v22; // r8
  int v23[2]; // [rsp+20h] [rbp-78h] BYREF
  __int128 v24; // [rsp+28h] [rbp-70h]
  __int128 v25; // [rsp+38h] [rbp-60h] BYREF
  __int128 v26[2]; // [rsp+48h] [rbp-50h]

  v5 = sp;
  v6 = 0;
  v7 = 0;
  if ( ((key & 0xF) != 0) == (unsigned int)sp <= GameOp_Dir_U )
    v7 = 1;
  v9 = UserGameOperation::Instance();
  if ( !Framework::GLManager::glm )
    goto LABEL_9;
  v10 = *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2199612i64);
  if ( !v10 )
    goto LABEL_9;
  p_m_gamepad = (Framework::GLManager *)&Framework::GLManager::glm->m_controllerContext.m_gamepad;
  v12 = 0;
  if ( &Framework::GLManager::glm->m_controllerContext.m_gamepad == (std::array<AgPointer<AgController>,4> *)&Framework::GLManager::glm->m_controllerContext.m_lastUsedContType )
    goto LABEL_9;
  while ( 1 )
  {
    ++v12;
    if ( p_m_gamepad->m_commandBufferSyncLazyFuncQueue._Mypair._Myval2._Myproxy )
    {
      if ( v12 == v10 )
        break;
    }
    p_m_gamepad = (Framework::GLManager *)((char *)p_m_gamepad + 16);
    if ( p_m_gamepad == (Framework::GLManager *)&Framework::GLManager::glm->m_controllerContext.m_lastUsedContType )
      goto LABEL_9;
  }
  if ( v12 == -1 )
LABEL_9:
    p_m_emptyUserSlot = &v9->m_emptyUserSlot;
  else
    p_m_emptyUserSlot = &v9->m_slots[v12 - 1];
  if ( !p_m_emptyUserSlot || v9->m_keyboardLocked && ((unsigned int)v5 <= 3 || (unsigned int)(v5 - 6) <= 5) )
  {
LABEL_22:
    LOBYTE(v6) = _bittest(&key, v5);
    return (unsigned int)(v6 + 3);
  }
  v23[0] = 0xFFFF;
  v14 = &v9->m_ButtonConfig[v5];
  v15 = 0i64;
  while ( *(int *)((char *)&v23[v15] + (char *)&v9->m_ButtonConfig[v5] - (char *)v23) == v23[v15] )
  {
    if ( --v15 < 0 )
      goto LABEL_17;
  }
  v21 = 0i64;
  v23[0] = v14->_Array[0] & p_m_emptyUserSlot->m_stableChannels._Array[0];
  v22 = (char *)v14 - (char *)v23;
  while ( v23[v21] == *(int *)((char *)&v23[v21] + v22) )
  {
    if ( --v21 < 0 )
      goto LABEL_29;
  }
LABEL_17:
  v16 = 3i64;
  v17 = 3i64;
  v18 = (char *)p_m_emptyUserSlot - ((char *)&v25 + 8) + 24;
  v19 = *(_OWORD *)&v9->m_KeyboardButtonConfig[v5]._Array[2];
  v24 = *(_OWORD *)v9->m_KeyboardButtonConfig[v5]._Array;
  v25 = v19;
  do
  {
    *((_QWORD *)&v24 + v17) &= *(_QWORD *)((char *)&v24 + 8 * v17 + v18);
    --v17;
  }
  while ( v17 >= 0 );
  v26[0] = v24;
  v26[1] = v25;
  while ( !*((_QWORD *)v26 + v16) )
  {
    if ( --v16 < 0 )
      goto LABEL_22;
  }
LABEL_29:
  if ( op == COUNTER_HIT && (unsigned int)v5 > 3 )
    return 1i64;
  if ( !_bittest(&key, v5) )
  {
    LOBYTE(v6) = v7 != 0;
    return (unsigned int)(v6 + 3);
  }
  return 2i64;
}

__int64 __fastcall EasyCommand::KeyCheckFirst(
        EasyCommand *this,
        int key,
        GameOperations::GameOpSpec sp,
        EasyCommand::CheckOption op)
{
  __int64 v5; // rbx
  UserGameOperation *v7; // rax
  int v8; // er10
  UserGameOperation *v9; // rdi
  int v10; // er9
  Framework::GLManager *p_m_gamepad; // rcx
  int v12; // eax
  UserGameOperation::UserSlot *p_m_emptyUserSlot; // r9
  char *v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int128 v19; // xmm1
  __int64 v21; // rdx
  signed __int64 v22; // r8
  int v23[2]; // [rsp+20h] [rbp-68h] BYREF
  __int128 v24; // [rsp+28h] [rbp-60h]
  __int128 v25; // [rsp+38h] [rbp-50h] BYREF
  __int128 v26[2]; // [rsp+48h] [rbp-40h]

  v5 = sp;
  v7 = UserGameOperation::Instance();
  v8 = 0;
  v9 = v7;
  if ( !Framework::GLManager::glm )
    goto LABEL_7;
  v10 = *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2199612i64);
  if ( !v10 )
    goto LABEL_7;
  p_m_gamepad = (Framework::GLManager *)&Framework::GLManager::glm->m_controllerContext.m_gamepad;
  v12 = 0;
  if ( &Framework::GLManager::glm->m_controllerContext.m_gamepad == (std::array<AgPointer<AgController>,4> *)&Framework::GLManager::glm->m_controllerContext.m_lastUsedContType )
    goto LABEL_7;
  while ( 1 )
  {
    ++v12;
    if ( p_m_gamepad->m_commandBufferSyncLazyFuncQueue._Mypair._Myval2._Myproxy )
    {
      if ( v12 == v10 )
        break;
    }
    p_m_gamepad = (Framework::GLManager *)((char *)p_m_gamepad + 16);
    if ( p_m_gamepad == (Framework::GLManager *)&Framework::GLManager::glm->m_controllerContext.m_lastUsedContType )
      goto LABEL_7;
  }
  if ( v12 == -1 )
LABEL_7:
    p_m_emptyUserSlot = &v9->m_emptyUserSlot;
  else
    p_m_emptyUserSlot = &v9->m_slots[v12 - 1];
  if ( !p_m_emptyUserSlot || v9->m_keyboardLocked && ((unsigned int)v5 <= 3 || (unsigned int)(v5 - 6) <= 5) )
  {
LABEL_20:
    LOBYTE(v8) = _bittest(&key, v5);
    return (unsigned int)(v8 + 3);
  }
  else
  {
    v23[0] = 0xFFFF;
    v14 = (char *)&v9->m_ButtonConfig[v5];
    v15 = 0i64;
    while ( *(int *)((char *)&v23[v15] + (char *)&v9->m_ButtonConfig[v5] - (char *)v23) == v23[v15] )
    {
      if ( --v15 < 0 )
        goto LABEL_15;
    }
    v21 = 0i64;
    v23[0] = *(_DWORD *)v14 & p_m_emptyUserSlot->m_stableChannels._Array[0];
    v22 = v14 - (char *)v23;
    while ( v23[v21] == *(int *)((char *)&v23[v21] + v22) )
    {
      if ( --v21 < 0 )
        goto LABEL_27;
    }
LABEL_15:
    v16 = 3i64;
    v17 = 3i64;
    v18 = (char *)p_m_emptyUserSlot - ((char *)&v25 + 8) + 24;
    v19 = *(_OWORD *)&v9->m_KeyboardButtonConfig[v5]._Array[2];
    v24 = *(_OWORD *)v9->m_KeyboardButtonConfig[v5]._Array;
    v25 = v19;
    do
    {
      *((_QWORD *)&v24 + v17) &= *(_QWORD *)((char *)&v24 + 8 * v17 + v18);
      --v17;
    }
    while ( v17 >= 0 );
    v26[0] = v24;
    v26[1] = v25;
    while ( !*((_QWORD *)v26 + v16) )
    {
      if ( --v16 < 0 )
        goto LABEL_20;
    }
LABEL_27:
    if ( op == COUNTER_HIT && (unsigned int)v5 > 3 )
    {
      return 1i64;
    }
    else
    {
      LOBYTE(v8) = _bittest(&key, v5);
      return (unsigned int)(v8 + 1);
    }
  }
}

__int64 __fastcall EasyCommand::KeyCheckOR(
        EasyCommand *this,
        int key,
        GameOperations::GameOpSpec sp,
        EasyCommand::CheckOption op)
{
  __int64 v5; // rsi
  UserGameOperation *v7; // rbx
  int v8; // er9
  Framework::GLManager *p_m_gamepad; // rcx
  int v10; // eax
  UserGameOperation::UserSlot *p_m_emptyUserSlot; // r8
  unsigned int v12; // er11
  std::bitset<16> *v13; // r10
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int128 v17; // xmm1
  __int64 v18; // rax
  __int64 v19; // rdx
  signed __int64 v20; // r10
  int v22[2]; // [rsp+20h] [rbp-68h] BYREF
  __int128 v23; // [rsp+28h] [rbp-60h]
  __int128 v24; // [rsp+38h] [rbp-50h] BYREF
  __int128 v25[2]; // [rsp+48h] [rbp-40h]

  v5 = sp;
  v7 = UserGameOperation::Instance();
  if ( !Framework::GLManager::glm )
    goto LABEL_7;
  v8 = *(_DWORD *)(*(_QWORD *)&AppMain::pApp + 2199612i64);
  if ( !v8 )
    goto LABEL_7;
  p_m_gamepad = (Framework::GLManager *)&Framework::GLManager::glm->m_controllerContext.m_gamepad;
  v10 = 0;
  if ( &Framework::GLManager::glm->m_controllerContext.m_gamepad == (std::array<AgPointer<AgController>,4> *)&Framework::GLManager::glm->m_controllerContext.m_lastUsedContType )
    goto LABEL_7;
  while ( 1 )
  {
    ++v10;
    if ( p_m_gamepad->m_commandBufferSyncLazyFuncQueue._Mypair._Myval2._Myproxy )
    {
      if ( v10 == v8 )
        break;
    }
    p_m_gamepad = (Framework::GLManager *)((char *)p_m_gamepad + 16);
    if ( p_m_gamepad == (Framework::GLManager *)&Framework::GLManager::glm->m_controllerContext.m_lastUsedContType )
      goto LABEL_7;
  }
  if ( v10 == -1 )
LABEL_7:
    p_m_emptyUserSlot = &v7->m_emptyUserSlot;
  else
    p_m_emptyUserSlot = &v7->m_slots[v10 - 1];
  v12 = 3;
  if ( p_m_emptyUserSlot && (!v7->m_keyboardLocked || (unsigned int)v5 > 3 && (unsigned int)(v5 - 6) > 5) )
  {
    v22[0] = 0xFFFF;
    v13 = &v7->m_ButtonConfig[v5];
    v14 = 0i64;
    while ( *(int *)((char *)&v22[v14] + (char *)&v7->m_ButtonConfig[v5] - (char *)v22) == v22[v14] )
    {
      if ( --v14 < 0 )
        goto LABEL_15;
    }
    v19 = 0i64;
    v22[0] = v13->_Array[0] & p_m_emptyUserSlot->m_stableChannels._Array[0];
    v20 = (char *)v13 - (char *)v22;
    while ( v22[v19] == *(int *)((char *)&v22[v19] + v20) )
    {
      if ( --v19 < 0 )
        goto LABEL_26;
    }
LABEL_15:
    v15 = 3i64;
    v16 = (char *)p_m_emptyUserSlot - ((char *)&v24 + 8) + 24;
    v17 = *(_OWORD *)&v7->m_KeyboardButtonConfig[v5]._Array[2];
    v23 = *(_OWORD *)v7->m_KeyboardButtonConfig[v5]._Array;
    v24 = v17;
    do
    {
      *((_QWORD *)&v23 + v15) &= *(_QWORD *)((char *)&v23 + 8 * v15 + v16);
      --v15;
    }
    while ( v15 >= 0 );
    v18 = 3i64;
    v25[0] = v23;
    v25[1] = v24;
    while ( !*((_QWORD *)v25 + v18) )
    {
      if ( --v18 < 0 )
        return v12;
    }
LABEL_26:
    if ( op == COUNTER_HIT && (unsigned int)v5 > 3 )
      return 1i64;
    if ( _bittest(&key, v5) )
      return 0;
  }
  return v12;
}

__int64 __fastcall EasyCommand::Update(EasyCommand *this)
{
  int v1; // eax
  const EasyCommand::CommandData *v3; // rbp
  bool v4; // zf
  EasyCommand::CheckType Type; // eax
  int v6; // ebx
  __int64 v7; // rdi
  int v8; // eax
  __int64 v9; // rdi
  int v10; // eax
  __int64 v11; // rdi
  int v12; // eax
  __int64 v13; // rdi
  int v14; // eax
  __int64 v15; // rax
  GameOperations::GameOpSpec v17[4]; // [rsp+20h] [rbp-58h]
  __m128i si128; // [rsp+30h] [rbp-48h]

  v1 = this->m_CommandCount[0];
  v3 = &s_commandData[0][this->m_CommandCount[0]];
  v4 = this->m_CommandStatus[0] == PLAY;
  *(__m128i *)v17 = _mm_load_si128((const __m128i *)&_xmm);
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  if ( !v4 )
    return 0i64;
  if ( v1 <= 0 || (++this->m_TimeCount[0], this->m_TimeCount[0] < v3->Time) )
  {
    Type = v3->Type;
    v6 = -1;
    if ( Type )
    {
      switch ( Type )
      {
        case 1:
          v9 = 0i64;
          while ( 1 )
          {
            v10 = EasyCommand::KeyCheckOR(this, v3->Key, v17[v9], v3->Op);
            if ( v10 == 1 )
              break;
            if ( !v10 )
              v6 = 2;
            if ( ++v9 >= 8 )
              goto LABEL_41;
          }
          break;
        case 2:
          v11 = 0i64;
          while ( 1 )
          {
            v12 = EasyCommand::KeyCheckExclusive(this, v3->Key, v17[v11], v3->Op);
            if ( v12 == 1 )
              break;
            if ( v12 == 2 )
            {
              if ( v6 != 4 )
                v6 = 2;
            }
            else if ( v12 == 4 )
            {
              v6 = 4;
            }
            if ( ++v11 >= 8 )
              goto LABEL_41;
          }
          break;
        case 3:
          v13 = 0i64;
          while ( 1 )
          {
            v14 = EasyCommand::KeyCheckFirst(this, v3->Key, v17[v13], v3->Op);
            if ( v14 == 1 )
              break;
            if ( v14 == 2 )
            {
              if ( v6 != 4 )
                v6 = 2;
            }
            else if ( v14 == 4 )
            {
              v6 = 4;
            }
            if ( ++v13 >= 8 )
            {
LABEL_41:
              if ( v6 == 2 )
              {
                v15 = ++this->m_CommandCount[0];
                this->m_TimeCount[0] = 0;
                if ( s_commandData[0][v15].Time == -1 )
                {
                  this->m_CommandStatus[0] = SKIP;
                  return 1i64;
                }
              }
              return 0i64;
            }
          }
          break;
        default:
          return 0i64;
      }
    }
    else
    {
      v7 = 0i64;
      while ( 1 )
      {
        v8 = EasyCommand::KeyCheckAND(this, v3->Key, v17[v7], v3->Op);
        if ( v8 == 1 )
          break;
        if ( v8 == 2 )
        {
          if ( v6 != 4 )
            v6 = 2;
        }
        else if ( v8 == 4 )
        {
          v6 = 4;
        }
        if ( ++v7 >= 8 )
          goto LABEL_41;
      }
    }
    this->m_CommandStatus[0] = SKIP|PLAY;
  }
  else
  {
    this->m_CommandStatus[0] = SKIP|PLAY;
  }
  return 1i64;
}

