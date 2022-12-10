#include "dev/kof/master/development/source/ps4project/baseproject/extension/bilinkable.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphparam.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/memory"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcache.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thr/xthread"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcacheconfig.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exwaitcondition.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hairliner.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/globalheapmemory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_filterdesc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_styledtext.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/fixmemory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix3x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_core.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_queue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "dev/silverware/git/sdk/input/agsdlmappingparser.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_fontmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitive.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/matrix4unaligned.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_bank.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocaddr.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/quat_aos.h"
#include "dev/silverware/git/sdk/platforms/pc/system/agpcsysteminfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_radixtree.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdatalistmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_twips.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectcommon.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_containers.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_wwhelper.h"
#include "dev/silverware/git/sdk/agreferencecountinl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_sse.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xhash"
#include "dev/silverware/git/sdk/3rdparty/steam/steamclientpublic.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_vertex.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/fontprovider/render_fontproviderhud.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_wstring.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic0.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "dev/silverware/git/sdk/util/agservicecommand.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/variableheapmemorybase.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector2unaligned.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/refcountable.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threadcheck.h"
#include "dev/silverware/git/sdk/util/agdebugchannels.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textlayout.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_image.h"
#include "dev/silverware/git/sdk/util/agperformancecounter.h"
#include "dev/silverware/git/sdk/agmemorystream.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdata/effectdata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "dev/silverware/git/sdk/agclock.h"
#include "dev/silverware/git/sdk/agmemorypool.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_functions.h"
#include "dev/silverware/git/sdk/input/agcontrollerbuttoncomponent.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "dev/silverware/git/sdk/agpointerinl.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/chartdata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "dev/silverware/git/sdk/agstream.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/physicalheapmemory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "dev/silverware/git/sdk/agsemaphore.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_movie.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exthread.h"
#include "dev/silverware/git/sdk/agsemaphore.inl"
#include "dev/silverware/git/sdk/agconditionvariable.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/gfx-integrate/gfxi_operation.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/condition_variable"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/bitset"
#include "dev/silverware/git/sdk/agcondition.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_screentoworld.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/deque"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/mediasound.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_strokeraa.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_scale9grid.h"
#include "dev/silverware/git/sdk/filesystem/agfile.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraystaticbuff.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmodel.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_hashkey.h"
#include "dev/silverware/git/sdk/filesystem/agpath.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cxform.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglcurve.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/atomic_int.h"
#include "dev/silverware/git/sdk/filesystem/agmount.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/effect.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/atomic"
#include "dev/silverware/git/sdk/filesystem/agdirectory.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/boolinvec.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/time.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/jobmanager.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_event.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglsprite.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/png_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_keycodes.h"
#include "program files (x86)/windows kits/8.1/include/shared/guiddef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshkey.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixstate.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_gradients.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglrender.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector3unaligned.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_rasterizer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_viewport.h"
#include "dev/silverware/git/sdk/aghash.h"
#include "program files (x86)/windows kits/8.1/include/shared/stralign.h"
#include "dev/silverware/git/sdk/agstringutils.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglfog.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglbone.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_drawableimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hal.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_buffer.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_typeinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_characterdef.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/resourcemanager.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xfacet"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xutility"
#include "dev/silverware/git/sdk/3rdparty/steam/isteamhtmlsurface.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/vec_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/list"
#include "dev/kof/master/development/source/baseproject/jni/game/check/operationmapper.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/boolinvec.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/randommt.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filters.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filterparams.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphqueue.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdata/effectappdata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_font.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmirror.h"
#include "dev/silverware/git/sdk/agcondition.inl"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/vectormath_aos.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessdefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatapacked.h"
#include "program files (x86)/windows kits/8.1/include/um/winnt.h"
#include "dev/silverware/git/sdk/agreferencedobjectinl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_pathdatapacker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_linebuffer.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/functional"
#include "dev/silverware/git/sdk/agpointer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_highlight.h"
#include "program files (x86)/windows kits/8.1/include/shared/basetsd.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstring"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/future_asset.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloat.h"
#include "dev/silverware/git/sdk/system/agusermanager.h"
#include "dev/silverware/git/sdk/agreferencedobject.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_profiler.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/asyncjob.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory0"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_states.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/tga_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_statebag.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/exception"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xxatomic"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_simplemeshcache.h"
#include "dev/silverware/git/sdk/util/agservice.h"
#include "dev/silverware/git/sdk/agconditionvariable.inl"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/fontprovider/render_fontproviderwinapi.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglshader.h"
#include "dev/silverware/git/sdk/agthreadpool.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_exception.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/mat_aos.h"
#include "dev/silverware/git/sdk/agthread.h"
#include "dev/silverware/git/sdk/agmutex.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/array"
#include "dev/silverware/git/sdk/agscopedlock.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_bundle.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steam_api_internal.h"
#include "dev/kof/master/development/source/ps4project/baseproject/pcutil/pccontrolsmanager.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/algorithm"
#include "dev/silverware/git/sdk/input/aginputmanager.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/system_error"
#include "dev/silverware/git/sdk/agsingleton.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloatmp.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector4unaligned.h"
#include "dev/silverware/git/sdk/agmutex.inl"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapemeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/jpeg_imagefile.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/stdexcept"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treetext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefileutil.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/utility"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_docview.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_range.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/vecidx_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/iosfwd"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/map"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exlockable.h"
#include "program files (x86)/windows kits/8.1/include/um/winuser.h"
#include "dev/silverware/git/sdk/memory/agallocators.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/floatinvec.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtree"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "dev/silverware/git/sdk/input/agcontrollercomponent.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_hash.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogleffect.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steam_api.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/tuple"
#include "dev/kof/master/development/source/ps4project/baseproject/pcutil/pcdummy.h"
#include "dev/silverware/git/sdk/util/agdelegate.h"
#include "dev/silverware/git/sdk/agreferencecount.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_new.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix4x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixpool.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/quat_aos.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/particledata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shader.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogllight.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/mediamanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_sgmlparser.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/floatinvec.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_context.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_constants.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/audiopresenter.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstddef"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessgen.h"
#include "dev/silverware/git/sdk/agvector2.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/type_traits"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treeshape.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessellator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_vec64.h"
#include "dev/silverware/git/sdk/agmath.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/math.h"
#include "dev/silverware/git/sdk/input/agcontroller.h"
#include "dev/silverware/git/sdk/system/aguser.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "dev/silverware/git/sdk/agstring.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_math.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/mutex"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_manager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitivebundle.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/string"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/chrono"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treecachenode.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/libcommon.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/vec_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/limits"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treenode.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_loader.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cacheeffect.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_system.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphfitter.h"
#include "dev/silverware/git/sdk/3rdparty/steam/matchmakingtypes.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/ios"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefile.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocnum"
#include "dev/silverware/git/sdk/system/agsysteminfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_player.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_types.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xiosbase"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_resource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocale"
#include "program files (x86)/windows kits/8.1/include/um/winbase.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocinfo"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/mat_aos.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_stroker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/debug/logging.h"
#include "dev/silverware/git/sdk/agreferenceinl.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vector"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/dds_imagefile.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/heapmemory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textmeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/mutex.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thread"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglvec3.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sound/ex_sound_bank.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/audiopresenter.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/audio/mediamanager.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exlockable.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/asyncjob.cpp"

class extension::SoundManager::Player
{
public:
	Player();
private:
	Player(const extension::SoundManager::Player &);
	extension::SoundManager::Player & operator=(const extension::SoundManager::Player &);
	enum SoundBindSpec
	{
		SoundBind_SE = 0,
		SoundBind_BGM = 1,
	};
public:
	~Player();
	void initialize(CMediaManager *, long, const extension::SoundManager::ManagerRealtimeState &);
	void finalize();
	bool isSoundReleased();
	bool isBGM();
	bool isSE();
	bool isLockPeriod();
	bool isSameBankElement(const extension::SoundSource &);
	bool isFadeOutStop();
	float soundLength();
	float playPosition();
	bool setPosition(float);
	float playTime();
	float lockTime();
	float playTimeWeightiness();
	bool isLessImportantPlay(const extension::SoundManager::Player &);
	long priority();
	unsigned long group();
	unsigned long userTag();
	const extension::RefCountablePtr<extension::exsound_detail::RuntimeEffector> runtimeEffector();
	float lastOutputVolume();
	const extension::SoundSource & soundSource();
	bool bindSound(const extension::SoundSource &, extension::SoundManager::Player::SoundBindSpec);
	void releaseSound();
	void setGroup(unsigned long);
	void maskPadOutputUsers(unsigned long);
	void setPriority(long);
	void setUserTag(unsigned long);
	void setBaseVolume(float);
	void setMasterVolume(float *);
	void setLockTime(float);
	void setRuntimeEffector(const extension::RefCountablePtr<extension::exsound_detail::RuntimeEffector> &);
	void play(float, float);
	void stop(float);
	void updatePlayState();
	void updateRealtimeAttribute(const OGLVec3 &);
	void updateRuntimeVolume();
	bool isPaused();
	void pauseStop();
	void pausePlay();
	const extension::SoundHashKey & getSoundHashKey();
	void setStereoChange(bool);
private:
	static const long Max_Login_User; // 0xFFFFFFFFFFFFFFFF
	enum PlayerFlagSet
	{
		PlayerFlag_IsBGM = 1,
		PlayerFlag_IsSE = 2,
		PlayerFlag_IsOutSurround = 16,
		PlayerFlag_Is3DSound = 32,
		PlayerFlag_IsStereoPan = 64,
		PlayerFlag_ReleaseOnFadeOut = -2147483648,
		PlayerFlag_Pause = 1073741824,
	};
	void bindPresenterSound(CAudioPresenter &);
	void bindPresenterSound();
	void releasePresenterSound(CAudioPresenter &);
	long getReverbType();
	const extension::SoundManager::ReverbState * selectReverbState();
	void applyPresenterReverb(CAudioPresenter &, const extension::SoundManager::ReverbState *);
	void applyPresenterReverb(const extension::SoundManager::ReverbState *);
	void startPresenter(CAudioPresenter &, float);
	void setFade(float, float);
	void setStartFade(float, float, float);
	float calcOutputVolume();
	void setOutputVolume(float);
	bool isReverbEnable(const extension::SoundManager::ReverbState *);
	float * m_masterVolumeRef; // 0x0
	const extension::SoundManager::ManagerRealtimeState * m_rtStateRef; // 0x8
	unsigned long m_playerFlags; // 0x10
	unsigned long m_group; // 0x14
	long m_priority; // 0x18
	unsigned long m_userTag; // 0x1C
	extension::RefCountablePtr<extension::exsound_detail::RuntimeEffector> m_runtimeEffector; // 0x20
	float m_baseVolume; // 0x28
	float m_lockTime; // 0x2C
	float m_fadeGoalTime; // 0x30
	float m_fadeGoalVolume; // 0x34
	float m_fadeLastTime; // 0x38
	float m_fadeLastVolume; // 0x3C
	float m_lastOutputVolume; // 0x40
	float m_pauseTime; // 0x44
	float m_pauseTotalTime; // 0x48
	extension::SoundSource m_soundSource; // 0x50
	std::unique_ptr<CAudioPresenter,std::default_delete<CAudioPresenter> > m_presenter; // 0x80
};
const extension::RefCountablePtr<extension::exsound_detail::RuntimeEffector> extension::SoundManager::Player::runtimeEffector(); // 0x1402BE580
class std::unique_ptr<CAudioPresenter,std::default_delete<CAudioPresenter> > :
	std::_Unique_ptr_base<CAudioPresenter,std::default_delete<CAudioPresenter> >
{
	class _Myt;
	class _Mybase;
	typedef CAudioPresenter pointer;
	class element_type;
	struct deleter_type;
public:
	unique_ptr<CAudioPresenter,std::default_delete<CAudioPresenter> >(const std::unique_ptr<CAudioPresenter,std::default_delete<CAudioPresenter> > &);
	unique_ptr<CAudioPresenter,std::default_delete<CAudioPresenter> >(std::unique_ptr<CAudioPresenter,std::default_delete<CAudioPresenter> > &);
	unique_ptr<CAudioPresenter,std::default_delete<CAudioPresenter> >(CAudioPresenter *, std::default_delete<CAudioPresenter> &);
	unique_ptr<CAudioPresenter,std::default_delete<CAudioPresenter> >(CAudioPresenter *, const std::default_delete<CAudioPresenter> &);
	unique_ptr<CAudioPresenter,std::default_delete<CAudioPresenter> >(CAudioPresenter *);
	unique_ptr<CAudioPresenter,std::default_delete<CAudioPresenter> >(void *);
	unique_ptr<CAudioPresenter,std::default_delete<CAudioPresenter> >();
	std::unique_ptr<CAudioPresenter,std::default_delete<CAudioPresenter> > & operator=(const std::unique_ptr<CAudioPresenter,std::default_delete<CAudioPresenter> > &);
	std::unique_ptr<CAudioPresenter,std::default_delete<CAudioPresenter> > & operator=(std::unique_ptr<CAudioPresenter,std::default_delete<CAudioPresenter> > &);
	std::unique_ptr<CAudioPresenter,std::default_delete<CAudioPresenter> > & operator=(void *);
	void swap(std::unique_ptr<CAudioPresenter,std::default_delete<CAudioPresenter> > &);
	~unique_ptr<CAudioPresenter,std::default_delete<CAudioPresenter> >();
	CAudioPresenter & operator*();
	CAudioPresenter * operator->();
	CAudioPresenter * get();
	bool operator bool();
	CAudioPresenter * release();
	void reset(CAudioPresenter *);
};
extension::SoundManager::Player::Player(); // 0x1402BE5A0
extension::SoundManager::SERequest::SERequest(const extension::SoundManager::SERequest & __that); // 0x1402BF590
extension::SoundManager::SERequest::SERequest(); // 0x1402C0FB0
extension::SoundManager::Player::~Player(); // 0x1402BE630
extension::SoundManager::SERequest::~SERequest(); // 0x1402BF620
bool extension::SoundManager::Player::isLockPeriod(); // 0x1402BE690
float extension::SoundManager::Player::playPosition(); // 0x1402BE6E0
float extension::SoundManager::Player::playTimeWeightiness(); // 0x1402BE730
bool extension::SoundManager::Player::bindSound(const extension::SoundSource & ss, extension::SoundManager::Player::SoundBindSpec bindSpec); // 0x1402BE7F0
void extension::SoundManager::Player::releaseSound(); // 0x1402BE950
void extension::SoundManager::Player::bindPresenterSound(); // 0x1402BEA50
void extension::SoundManager::Player::applyPresenterReverb(CAudioPresenter & presenter, const extension::SoundManager::ReverbState * refState); // 0x1402BEB80
void extension::SoundManager::Player::play(float fadeTime, float startTime); // 0x1402BED10
void extension::SoundManager::Player::stop(float fadeTime); // 0x1402BEE10
void extension::SoundManager::Player::updateRealtimeAttribute(const OGLVec3 & listenerPosition); // 0x1402BEEA0
void extension::SoundManager::Player::pauseStop(); // 0x1402BEF70
void extension::SoundManager::Player::pausePlay(); // 0x1402BEFF0
void extension::SoundManager::Player::updateRuntimeVolume(); // 0x1402BF0A0
void extension::SoundManager::Player::setOutputVolume(float vol); // 0x1402BF210
class extension::SoundManager::SERequestFilter
{
private:
	extension::SoundManager::SERequest m_pattern; // 0x0
public:
	SERequestFilter(extension::SoundManager::SERequestFilter &);
	SERequestFilter(const extension::SoundManager::SERequestFilter &);
	SERequestFilter(const extension::SoundManager::SERequest &);
	bool operator()(const extension::SoundManager::SERequest &);
	~SERequestFilter();
	extension::SoundManager::SERequestFilter & operator=(extension::SoundManager::SERequestFilter &);
	extension::SoundManager::SERequestFilter & operator=(const extension::SoundManager::SERequestFilter &);
};
bool extension::SoundManager::SERequestFilter::operator()(const extension::SoundManager::SERequest & target); // 0x1402BF4E0
void extension::SoundManager::ReverbState::set(long attenuationPercent, long delayTimeMsec, long repeatCount, long reflectionAttenuationPercent, long fluctuationTimeMsec); // 0x1402BF640
void extension::SoundManager::ManagerRealtimeState::reset(); // 0x1402BF740
extension::SoundManager::SoundManager(); // 0x1402BF7C0
extension::SoundManager::BGMRequest::~BGMRequest(); // 0x1402BFA00
void extension::SoundManager::initialize(CMediaManager * mediaManager); // 0x1402BFA10
bool extension::SoundManager::playBGM(const extension::SoundSource & source, float fadeTime, float startTime, bool bNonStop); // 0x1402BFBA0
void extension::SoundManager::stopBGM(float fadeTime); // 0x1402BFC40
bool extension::SoundManager::playSE(const extension::SoundSource & source, const extension::SoundManager::SEPlayParams & params); // 0x1402BFCD0
bool extension::SoundManager::isPlayingSE(const extension::SoundSource & source, const extension::SoundManager::SEPlayParams & params); // 0x1402BFE80
class extension::SoundManager::isPlayingSE::__l10::<lambda_76ee7a82abe225d7e9baf73e922f0811>
{
public:
	bool operator()(const extension::SoundManager::SERequest &);
	<lambda_76ee7a82abe225d7e9baf73e922f0811>(extension::SoundManager::isPlayingSE::__l10::<lambda_76ee7a82abe225d7e9baf73e922f0811> &);
	<lambda_76ee7a82abe225d7e9baf73e922f0811>();
	<lambda_76ee7a82abe225d7e9baf73e922f0811>(const extension::SoundSource &, const extension::SoundManager::SEPlayParams &);
private:
	const extension::SoundSource & source; // 0x0
	const extension::SoundManager::SEPlayParams & params; // 0x8
public:
	extension::SoundManager::isPlayingSE::__l10::<lambda_76ee7a82abe225d7e9baf73e922f0811> & operator=(const extension::SoundManager::isPlayingSE::__l10::<lambda_76ee7a82abe225d7e9baf73e922f0811> &);
};
std::piecewise_construct_t std::piecewise_construct; // 0x1408AF11F
bool extension::SoundManager::stopSE(const extension::SoundSource & source, const extension::SoundManager::SEStopParams & params); // 0x1402C0070
void extension::SoundManager::stopGroupSE(unsigned long group); // 0x1402C0210
void extension::SoundManager::stopUserTagedSE(unsigned long userTagMask, float fadeTime); // 0x1402C03B0
void extension::SoundManager::stopSE(float fadeTime); // 0x1402C0550
void extension::SoundManager::pauseGroupSE(unsigned long group, bool pause); // 0x1402C0630
float extension::SoundManager::BGMPlay_getPosition(); // 0x1402C0710
extension::SoundHashKey extension::SoundManager::BGMPlay_getSoundHashKey(); // 0x1402C0790
void extension::SoundManager::Debug_dumpPlayInfo(std::vector<extension::SoundManager::PlayInfo,std::allocator<extension::SoundManager::PlayInfo> > & result); // 0x1402C07E0
void extension::SoundManager::frameUpdate(); // 0x1402C0990
void extension::SoundManager::handleRequestedBGM(); // 0x1402C0C50
void extension::SoundManager::assignBGMPlayer(const extension::SoundSource & ss, float fadeTime, float startTime); // 0x1402C0DA0
extension::SoundManager::SERequest extension::SoundManager::MakeSERequestPlay(const extension::SoundSource & ss, const extension::SoundManager::SEPlayParams & params); // 0x1402C0F40
extension::SoundManager::SERequest extension::SoundManager::MakeSERequestStop(const extension::SoundSource & ss, const extension::SoundManager::SEStopParams & params); // 0x1402C1020
extension::SoundManager::SERequest extension::SoundManager::MakeSERequestStopGroup(unsigned long group); // 0x1402C1090
extension::SoundManager::SERequest extension::SoundManager::MakeSERequestStopUserTaged(unsigned long userTagMask, float fadeTime); // 0x1402C10D0
extension::SoundManager::SERequest extension::SoundManager::MakeSERequestStopAll(float fadeTime); // 0x1402C1120
extension::SoundManager::SERequest extension::SoundManager::MakeSERequestPauseGroup(unsigned long group, bool pause); // 0x1402C1170
void extension::SoundManager::handleRequestedSE(); // 0x1402C11C0
void extension::SoundManager::assignSEPlayer(const extension::SoundManager::SERequest & r); // 0x1402C13E0
void extension::SoundManager::stopSEPlayer(const extension::SoundManager::SERequest & r); // 0x1402C15D0
bool extension::SoundManager::excludeMultiSEPlayer(const extension::SoundManager::SERequest & r); // 0x1402C1690
bool extension::SoundManager::stopGroupLimitSEPlayer(unsigned long group, long priority); // 0x1402C1760
extension::SoundManager::Player * extension::SoundManager::findPlayer(long priority, extension::SoundManager::PlayerFilterOption filterOpt); // 0x1402C18C0
void extension::SoundManager::initializePlayers(); // 0x1402C1960
void extension::SoundManager::finalizePlayers(); // 0x1402C1A80
float extension::SoundManager::NextRandom(); // 0x1402C1B20//decompilation failure at 1408AF11F!
std::_List_node<extension::SoundManager::SERequest,void *> *__fastcall std::_List_buy<extension::SoundManager::SERequest>::_Buynode<extension::SoundManager::SERequest const &>(
        std::_List_buy<extension::SoundManager::SERequest> *this,
        std::_List_node<extension::SoundManager::SERequest,void *> *_Next,
        std::_List_node<extension::SoundManager::SERequest,void *> *_Prev,
        const extension::SoundManager::SERequest *<_Val_0>)
{
  std::_List_node<extension::SoundManager::SERequest,void *> *v5; // r10

  v5 = std::_List_alloc<std::_List_base_types<extension::SoundManager::SERequest>>::_Buynode0(this, _Next, _Prev);
  if ( v5 != (std::_List_node<extension::SoundManager::SERequest,void *> *)-16i64 )
    extension::SoundManager::SERequest::SERequest(&v5->_Myval, <_Val_0>);
  return v5;
}

std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<extension::SoundManager::SERequest> > > *__fastcall std::_Find_if_unchecked<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<extension::SoundManager::SERequest>>>,extension::SoundManager::SERequestFilter>(
        std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<extension::SoundManager::SERequest> > > *result,
        std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<extension::SoundManager::SERequest> > > _First,
        std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<extension::SoundManager::SERequest> > > _Last,
        extension::SoundManager::SERequestFilter *_Pred)
{
  extension::SoundManager::SERequest *p_Myval; // rbx
  const extension::exsound_detail::SoundBankElementDefinition *m_ptr; // rax
  unsigned int m_playGroup; // eax
  extension::exsound_detail::RuntimeEffector *v9; // rcx
  extension::exsound_detail::RuntimeEffector *v10; // rax
  bool v11; // r9
  bool isSameEffector; // al
  std::_List_node<extension::SoundManager::SERequest,void *> *i; // [rsp+38h] [rbp+10h]
  std::_List_node<extension::SoundManager::SERequest,void *> *Ptr; // [rsp+40h] [rbp+18h]

  Ptr = _Last._Ptr;
  for ( i = _First._Ptr; _First._Ptr != _Last._Ptr; i = _First._Ptr )
  {
    p_Myval = &_First._Ptr->_Myval;
    if ( _Pred->m_pattern.m_tag )
    {
      if ( _Pred->m_pattern.m_tag != Tag_Stop )
        break;
      m_ptr = _Pred->m_pattern.m_soundSource.m_elementDef.m_ptr;
      if ( !m_ptr || m_ptr == _First._Ptr->_Myval.m_soundSource.m_elementDef.m_ptr )
      {
        m_playGroup = _Pred->m_pattern.m_playGroup;
        if ( (m_playGroup == -1 || m_playGroup == _First._Ptr->_Myval.m_playGroup)
          && (_Pred->m_pattern.m_userTag & _First._Ptr->_Myval.m_userTag) == _Pred->m_pattern.m_userTag )
        {
          break;
        }
      }
    }
    else
    {
      v9 = _First._Ptr->_Myval.m_runtimeEffector.m_ptr;
      v10 = _Pred->m_pattern.m_runtimeEffector.m_ptr;
      v11 = v9 == v10;
      if ( v9 != v10 && v9 && v10 )
      {
        isSameEffector = extension::exsound_detail::RuntimeEffector::isSameEffector(
                           v9,
                           _Pred->m_pattern.m_runtimeEffector.m_ptr);
        _Last._Ptr = Ptr;
        v11 = isSameEffector;
        _First._Ptr = i;
      }
      if ( p_Myval->m_tag == Tag_Play
        && p_Myval->m_soundSource.m_elementDef.m_ptr == _Pred->m_pattern.m_soundSource.m_elementDef.m_ptr
        && p_Myval->m_playGroup == _Pred->m_pattern.m_playGroup
        && v11 )
      {
        break;
      }
    }
    _First._Ptr = _First._Ptr->_Next;
  }
  result->_Ptr = _First._Ptr;
  return result;
}

void __fastcall std::list<extension::SoundManager::SERequest>::_Remove_if<extension::SoundManager::SERequestFilter>(
        std::list<extension::SoundManager::SERequest> *this,
        extension::SoundManager::SERequestFilter *_Pred)
{
  std::_List_node<extension::SoundManager::SERequest,void *> *Next; // rbx
  __int64 v5; // rdx
  std::_Wrap_alloc<std::allocator<extension::exsound_detail::SoundBankMediaDefinition> > *v6; // r8
  std::integral_constant<bool,0> v7; // r9
  std::_List_node<extension::SoundManager::SERequest,void *> *v8; // rdi
  extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body *m_ptr; // rcx
  extension::exsound_detail::SoundBankElementDefinition *v10; // rsi
  extension::exsound_detail::RuntimeEffector *v11; // rsi
  std::_Func_base<float> *v12; // rcx

  Next = this->_Mypair._Myval2._Myhead->_Next;
  while ( Next != this->_Mypair._Myval2._Myhead )
  {
    if ( extension::SoundManager::SERequestFilter::operator()(_Pred, &Next->_Myval) )
    {
      v8 = Next->_Next;
      Next->_Prev->_Next = Next->_Next;
      Next->_Next->_Prev = Next->_Prev;
      --this->_Mypair._Myval2._Mysize;
      m_ptr = Next->_Myval.m_soundSource.m_sound.m_body.m_ptr;
      if ( m_ptr )
      {
        v5 = _InterlockedExchangeAdd64(
               (volatile signed __int64 *)&m_ptr->m_refCount.m_ptr->m_sharedCount,
               0xFFFFFFFFFFFFFFFFui64);
        if ( v5 == 1 )
          ((void (__fastcall *)(extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body *, __int64))m_ptr->~RefCountableWeakSupportBase)(
            m_ptr,
            1i64);
      }
      v10 = (extension::exsound_detail::SoundBankElementDefinition *)Next->_Myval.m_soundSource.m_elementDef.m_ptr;
      if ( v10 && _InterlockedExchangeAdd64((volatile signed __int64 *)v10, 0xFFFFFFFFFFFFFFFFui64) == 1 )
      {
        extension::exsound_detail::SoundBankElementDefinition::~SoundBankElementDefinition(v10, v5, v6, v7);
        operator delete(v10, 0x68ui64);
      }
      v11 = Next->_Myval.m_runtimeEffector.m_ptr;
      if ( v11 && _InterlockedExchangeAdd64((volatile signed __int64 *)v11, 0xFFFFFFFFFFFFFFFFui64) == 1 )
      {
        v12 = v11->getPanPositionFunc._Mystorage._Ptrs[7];
        if ( v12 )
        {
          LOBYTE(v5) = v12 != (std::_Func_base<float> *)&v11->getPanPositionFunc;
          v12->_Delete_this(v12, v5);
          v11->getPanPositionFunc._Mystorage._Ptrs[7] = 0i64;
        }
        operator delete(v11, 0x60ui64);
      }
      operator delete(Next);
      Next = v8;
    }
    else
    {
      Next = Next->_Next;
    }
  }
}

extension::SoundManager::PlayInfo *__fastcall std::_Uninitialized_move_al_unchecked1<extension::SoundManager::PlayInfo *,extension::SoundManager::PlayInfo *,std::allocator<extension::SoundManager::PlayInfo>>(
        extension::SoundManager::PlayInfo *_First,
        extension::SoundManager::PlayInfo *_Last,
        extension::SoundManager::PlayInfo *_Dest,
        std::_Wrap_alloc<std::allocator<extension::SoundManager::PlayInfo> > *_Al)
{
  float *p_PlayTime; // r9
  extension::exsound_detail::SoundNameRegistry::NameBuffer *v5; // rcx

  if ( _First != _Last )
  {
    p_PlayTime = &_First->PlayTime;
    do
    {
      if ( _Dest )
      {
        _Dest->IsPlaying = *((_BYTE *)p_PlayTime - 4);
        _Dest->IsBGM = *((_BYTE *)p_PlayTime - 3);
        _Dest->PlayTime = *p_PlayTime;
        _Dest->LockTime = p_PlayTime[1];
        _Dest->Volume = p_PlayTime[2];
        _Dest->Group = (unsigned int)p_PlayTime[3];
        _Dest->UserTag = (unsigned int)p_PlayTime[4];
        v5 = *(extension::exsound_detail::SoundNameRegistry::NameBuffer **)(p_PlayTime + 5);
        _Dest->SoundKey.m_sharedBuffer.m_ptr = v5;
        if ( v5 )
          _InterlockedExchangeAdd64((volatile signed __int64 *)&v5->m_refCount.m_ptr->m_sharedCount, 1ui64);
      }
      ++_Dest;
      p_PlayTime += 8;
    }
    while ( p_PlayTime - 1 != (float *)_Last );
  }
  return _Dest;
}

std::_List_iterator<std::_List_val<std::_List_simple_types<extension::SoundManager::SERequest> > > *__fastcall std::find_if<std::_List_iterator<std::_List_val<std::_List_simple_types<extension::SoundManager::SERequest>>>,extension::SoundManager::SERequestFilter>(
        std::_List_iterator<std::_List_val<std::_List_simple_types<extension::SoundManager::SERequest> > > *result,
        std::_List_iterator<std::_List_val<std::_List_simple_types<extension::SoundManager::SERequest> > > _First,
        std::_List_iterator<std::_List_val<std::_List_simple_types<extension::SoundManager::SERequest> > > _Last,
        extension::SoundManager::SERequestFilter *_Pred)
{
  __int64 v6; // rdx
  std::_Wrap_alloc<std::allocator<extension::exsound_detail::SoundBankMediaDefinition> > *v7; // r8
  std::integral_constant<bool,0> v8; // r9
  __int64 v9; // rdx
  std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<extension::SoundManager::SERequest> > > resulta; // [rsp+40h] [rbp+8h] BYREF
  std::_List_node<extension::SoundManager::SERequest,void *> *Ptr; // [rsp+48h] [rbp+10h]
  extension::SoundManager::SERequestFilter *v13; // [rsp+58h] [rbp+20h]

  v13 = _Pred;
  Ptr = _First._Ptr;
  Ptr = std::_Find_if_unchecked<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<extension::SoundManager::SERequest>>>,extension::SoundManager::SERequestFilter>(
          &resulta,
          (std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<extension::SoundManager::SERequest> > >)_First._Ptr,
          (std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<extension::SoundManager::SERequest> > >)_Last._Ptr,
          _Pred)->_Ptr;
  result->_Ptr = Ptr;
  extension::SoundSource::~SoundSource(&_Pred->m_pattern.m_soundSource, v6, v7, v8);
  extension::RefCountablePtr<extension::exsound_detail::RuntimeEffector>::~RefCountablePtr<extension::exsound_detail::RuntimeEffector>(
    &_Pred->m_pattern.m_runtimeEffector,
    v9);
  return result;
}

void __fastcall extension::SoundManager::Player::Player(extension::SoundManager::Player *this)
{
  extension::SoundSource *p_m_soundSource; // rbx

  this->m_masterVolumeRef = 0i64;
  this->m_rtStateRef = 0i64;
  *(_QWORD *)&this->m_playerFlags = 0i64;
  *(_QWORD *)&this->m_priority = 0i64;
  this->m_runtimeEffector.m_ptr = 0i64;
  *(_QWORD *)&this->m_baseVolume = 0i64;
  *(_QWORD *)&this->m_fadeGoalTime = 0i64;
  *(_QWORD *)&this->m_fadeLastTime = 0i64;
  *(_QWORD *)&this->m_lastOutputVolume = 0i64;
  this->m_pauseTotalTime = 0.0;
  p_m_soundSource = &this->m_soundSource;
  this->m_soundSource.m_elementDef.m_ptr = 0i64;
  this->m_soundSource.m_sound.m_isNoCache = 0;
  extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body::GetSharedEmpty(&this->m_soundSource.m_sound.m_body);
  p_m_soundSource->m_lockTime = 0.0;
  p_m_soundSource->m_baseVolume = 1.0;
  *(_QWORD *)&p_m_soundSource->m_pitchBendFrequencyScale = 1065353216i64;
  p_m_soundSource->m_soundFlags = 0;
  p_m_soundSource->m_bStereoChange = 0;
  this->m_presenter._Mypair._Myval2 = 0i64;
}

void __fastcall extension::SoundManager::SERequest::SERequest(
        extension::SoundManager::SERequest *this,
        const extension::SoundManager::SERequest *__that)
{
  extension::exsound_detail::RuntimeEffector *m_ptr; // r8
  extension::exsound_detail::SoundBankElementDefinition *v3; // r8
  extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body *v4; // rax

  this->m_tag = __that->m_tag;
  m_ptr = __that->m_runtimeEffector.m_ptr;
  this->m_runtimeEffector.m_ptr = m_ptr;
  if ( m_ptr )
    _InterlockedExchangeAdd64((volatile signed __int64 *)m_ptr, 1ui64);
  v3 = (extension::exsound_detail::SoundBankElementDefinition *)__that->m_soundSource.m_elementDef.m_ptr;
  this->m_soundSource.m_elementDef.m_ptr = v3;
  if ( v3 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)v3, 1ui64);
  this->m_soundSource.m_sound.m_isNoCache = __that->m_soundSource.m_sound.m_isNoCache;
  v4 = __that->m_soundSource.m_sound.m_body.m_ptr;
  this->m_soundSource.m_sound.m_body.m_ptr = v4;
  if ( v4 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)&v4->m_refCount.m_ptr->m_sharedCount, 1ui64);
  this->m_soundSource.m_lockTime = __that->m_soundSource.m_lockTime;
  this->m_soundSource.m_baseVolume = __that->m_soundSource.m_baseVolume;
  this->m_soundSource.m_pitchBendFrequencyScale = __that->m_soundSource.m_pitchBendFrequencyScale;
  this->m_soundSource.m_priority = __that->m_soundSource.m_priority;
  this->m_soundSource.m_soundFlags = __that->m_soundSource.m_soundFlags;
  this->m_soundSource.m_bStereoChange = __that->m_soundSource.m_bStereoChange;
  this->m_playGroup = __that->m_playGroup;
  this->m_userTag = __that->m_userTag;
  this->m_fadeTime = __that->m_fadeTime;
}

void __fastcall extension::SoundManager::SERequest::SERequest(extension::SoundManager::SERequest *this)
{
  extension::SoundSource *p_m_soundSource; // rbx

  this->m_runtimeEffector.m_ptr = 0i64;
  p_m_soundSource = &this->m_soundSource;
  this->m_soundSource.m_elementDef.m_ptr = 0i64;
  this->m_soundSource.m_sound.m_isNoCache = 0;
  extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body::GetSharedEmpty(&this->m_soundSource.m_sound.m_body);
  p_m_soundSource->m_lockTime = 0.0;
  p_m_soundSource->m_baseVolume = 1.0;
  *(_QWORD *)&p_m_soundSource->m_pitchBendFrequencyScale = 1065353216i64;
  p_m_soundSource->m_soundFlags = 0;
  p_m_soundSource->m_bStereoChange = 0;
}

void __fastcall extension::SoundManager::SoundManager(extension::SoundManager *this)
{
  extension::SoundManager::ManagerRealtimeState *p_m_rtState; // rcx
  std::_List_alloc<std::_List_base_types<extension::SoundManager::SERequest> > *v3; // rcx
  std::_List_alloc<std::_List_base_types<extension::SoundManager::SERequest> > *v4; // rcx
  float **m_groupSEVolumeRefs; // rbx
  _QWORD *v6; // rax
  extension::SoundManager::Player *v7; // rdi
  unsigned int *v8; // rdi
  __int64 i; // rcx
  __int64 v10; // rax

  this->m_mediaManager = 0i64;
  *(_WORD *)&this->m_isMediaManagerOwner = 0;
  p_m_rtState = &this->m_rtState;
  *(_QWORD *)&p_m_rtState->listener3D.Direction.y = 0i64;
  p_m_rtState->listener3D.Dirty = 0;
  *(_QWORD *)&p_m_rtState->listener3D.Position.x = 0i64;
  *(_QWORD *)&p_m_rtState->listener3D.Position.z = 0i64;
  p_m_rtState->listener3D.Direction.y = 0.0;
  p_m_rtState->listener3D.Direction.z = -1.0;
  p_m_rtState->reverb.Attenuation = 0.5;
  *(_QWORD *)&p_m_rtState->reverb.DelayTimeMsec = 1i64;
  p_m_rtState->reverb.Dirty = 1;
  p_m_rtState->stageReverb.Attenuation = 0.5;
  *(_QWORD *)&p_m_rtState->stageReverb.DelayTimeMsec = 1i64;
  p_m_rtState->stageReverb.Dirty = 1;
  extension::SoundManager::ManagerRealtimeState::reset(p_m_rtState);
  this->m_masterVolumeBGM = 1.0;
  *(_QWORD *)&this->m_masterVolumeSE = 1065353216i64;
  this->m_lastBGMPlayer = 0i64;
  this->m_bgmRequest.m_soundSource.m_elementDef.m_ptr = 0i64;
  this->m_bgmRequest.m_soundSource.m_sound.m_isNoCache = 0;
  extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body::GetSharedEmpty(&this->m_bgmRequest.m_soundSource.m_sound.m_body);
  this->m_bgmRequest.m_soundSource.m_lockTime = 0.0;
  this->m_bgmRequest.m_soundSource.m_baseVolume = 1.0;
  *(_QWORD *)&this->m_bgmRequest.m_soundSource.m_pitchBendFrequencyScale = 1065353216i64;
  this->m_bgmRequest.m_soundSource.m_soundFlags = 0;
  this->m_bgmRequest.m_soundSource.m_bStereoChange = 0;
  *(_WORD *)&this->m_bgmRequest.m_reserved = 0;
  this->m_bgmRequest.m_pause = Pause_None;
  this->m_seRequests._Mypair._Myval2._Myhead = 0i64;
  this->m_seRequests._Mypair._Myval2._Mysize = 0i64;
  this->m_seRequests._Mypair._Myval2._Myhead = std::_List_alloc<std::_List_base_types<extension::SoundManager::SERequest>>::_Buynode0(
                                                 v3,
                                                 0i64,
                                                 0i64);
  this->m_seRequestsAudioLoadPending._Mypair._Myval2._Myhead = 0i64;
  this->m_seRequestsAudioLoadPending._Mypair._Myval2._Mysize = 0i64;
  this->m_seRequestsAudioLoadPending._Mypair._Myval2._Myhead = std::_List_alloc<std::_List_base_types<extension::SoundManager::SERequest>>::_Buynode0(
                                                                 v4,
                                                                 0i64,
                                                                 0i64);
  memset(this->m_groupPlayerLimits, 0, sizeof(this->m_groupPlayerLimits));
  m_groupSEVolumeRefs = this->m_groupSEVolumeRefs;
  memset(this->m_groupSEVolumeRefs, 0, sizeof(this->m_groupSEVolumeRefs));
  memset(this->m_groupSEVolumeCombined, 0, sizeof(this->m_groupSEVolumeCombined));
  this->m_bgmVolumeModulationRef = 0i64;
  this->m_bgmVolumeCombined = 0.0;
  this->m_padMasterVolume = 1.0;
  this->m_padVolumeModulationRef = 0i64;
  this->m_padVolumeCombined = 0.0;
  memset(this->m_groupLocalPadOutputMaskUsers, 0, sizeof(this->m_groupLocalPadOutputMaskUsers));
  *(_QWORD *)&this->m_vecListenerPosition.x = 0i64;
  this->m_vecListenerPosition.z = 0.0;
  v6 = operator new[](0x1108ui64);
  if ( v6 )
  {
    *v6 = 32i64;
    v7 = (extension::SoundManager::Player *)(v6 + 1);
    `eh vector constructor iterator'(
      v6 + 1,
      0x88ui64,
      0x20ui64,
      (void (__fastcall *)(void *))extension::SoundManager::Player::Player,
      (void (__fastcall *)(void *))extension::SoundManager::Player::~Player);
  }
  else
  {
    v7 = 0i64;
  }
  this->m_players._Mypair._Myval2 = v7;
  InitializeCriticalSection((LPCRITICAL_SECTION)&this->m_mutex);
  this->m_groupPlayerLimits[0] = 0;
  v8 = &this->m_groupPlayerLimits[1];
  for ( i = 23i64; i; --i )
    *v8++ = 1;
  v10 = 3i64;
  do
  {
    *m_groupSEVolumeRefs = 0i64;
    m_groupSEVolumeRefs[1] = 0i64;
    m_groupSEVolumeRefs[2] = 0i64;
    m_groupSEVolumeRefs += 8;
    *(m_groupSEVolumeRefs - 5) = 0i64;
    *(m_groupSEVolumeRefs - 4) = 0i64;
    *(m_groupSEVolumeRefs - 3) = 0i64;
    *(m_groupSEVolumeRefs - 2) = 0i64;
    *(m_groupSEVolumeRefs - 1) = 0i64;
    --v10;
  }
  while ( v10 );
}

void __fastcall std::list<extension::SoundManager::SERequest>::~list<extension::SoundManager::SERequest>(
        std::list<extension::SoundManager::SERequest> *this)
{
  std::list<extension::SoundManager::SERequest>::clear(this);
  operator delete(this->_Mypair._Myval2._Myhead);
}

// attributes: thunk
void __fastcall extension::SoundManager::BGMRequest::~BGMRequest(
        extension::SoundManager::BGMRequest *this,
        __int64 a2,
        std::_Wrap_alloc<std::allocator<extension::exsound_detail::SoundBankMediaDefinition> > *a3,
        std::integral_constant<bool,0> a4)
{
  extension::SoundSource::~SoundSource(&this->m_soundSource, a2, a3, a4);
}

void __fastcall extension::SoundManager::Player::~Player(
        extension::SoundManager::Player *this,
        unsigned __int64 a2,
        std::_Wrap_alloc<std::allocator<extension::exsound_detail::SoundBankMediaDefinition> > *a3,
        std::integral_constant<bool,0> a4)
{
  CAudioPresenter *Myval2; // rdi
  __int64 v6; // rdx

  Myval2 = this->m_presenter._Mypair._Myval2;
  if ( Myval2 )
  {
    CAudioPresenter::finalize(this->m_presenter._Mypair._Myval2, a2);
    DeleteCriticalSection((LPCRITICAL_SECTION)&Myval2->m_sound_mutex);
    operator delete(Myval2, 0x248ui64);
  }
  extension::SoundSource::~SoundSource(&this->m_soundSource, a2, a3, a4);
  extension::RefCountablePtr<extension::exsound_detail::RuntimeEffector>::~RefCountablePtr<extension::exsound_detail::RuntimeEffector>(
    &this->m_runtimeEffector,
    v6);
}

void __fastcall extension::SoundManager::SERequest::~SERequest(
        extension::SoundManager::SERequestFilter *this,
        __int64 a2,
        std::_Wrap_alloc<std::allocator<extension::exsound_detail::SoundBankMediaDefinition> > *a3,
        std::integral_constant<bool,0> a4)
{
  __int64 v5; // rdx

  extension::SoundSource::~SoundSource(&this->m_pattern.m_soundSource, a2, a3, a4);
  extension::RefCountablePtr<extension::exsound_detail::RuntimeEffector>::~RefCountablePtr<extension::exsound_detail::RuntimeEffector>(
    &this->m_pattern.m_runtimeEffector,
    v5);
}

char __fastcall extension::SoundManager::SERequestFilter::operator()(
        extension::SoundManager::SERequestFilter *this,
        const extension::SoundManager::SERequest *target)
{
  extension::SoundManager::SERequest::Tag m_tag; // ecx
  const extension::exsound_detail::SoundBankElementDefinition *m_ptr; // rax
  unsigned int m_playGroup; // eax
  extension::exsound_detail::RuntimeEffector *v8; // rcx
  extension::exsound_detail::RuntimeEffector *v9; // rdx
  bool isSameEffector; // al

  m_tag = this->m_pattern.m_tag;
  if ( m_tag )
  {
    if ( m_tag != Tag_Stop )
      return 1;
    m_ptr = this->m_pattern.m_soundSource.m_elementDef.m_ptr;
    if ( m_ptr && m_ptr != target->m_soundSource.m_elementDef.m_ptr )
      return 0;
    m_playGroup = this->m_pattern.m_playGroup;
    if ( m_playGroup != -1 && m_playGroup != target->m_playGroup )
      return 0;
    if ( (this->m_pattern.m_userTag & target->m_userTag) != this->m_pattern.m_userTag )
      return 0;
  }
  else
  {
    v8 = target->m_runtimeEffector.m_ptr;
    v9 = this->m_pattern.m_runtimeEffector.m_ptr;
    isSameEffector = v8 == v9;
    if ( v8 != v9 && v8 && v9 )
      isSameEffector = extension::exsound_detail::RuntimeEffector::isSameEffector(v8, v9);
    if ( target->m_tag
      || target->m_soundSource.m_elementDef.m_ptr != this->m_pattern.m_soundSource.m_elementDef.m_ptr
      || target->m_playGroup != this->m_pattern.m_playGroup
      || !isSameEffector )
    {
      return 0;
    }
  }
  return 1;
}

float __fastcall extension::SoundManager::BGMPlay_getPosition(extension::SoundManager *this)
{
  extension::SoundManager::Player *m_lastBGMPlayer; // rcx
  CAudioPresenter *Myval2; // rax
  CMediaSound *m_Sound; // rcx
  _SND_BANK_INFO *p_m_BankInfo; // rcx

  if ( this->m_bgmRequest.m_reserved && this->m_bgmRequest.m_soundSource.m_elementDef.m_ptr )
    return 0.0;
  m_lastBGMPlayer = this->m_lastBGMPlayer;
  if ( !m_lastBGMPlayer )
    return 0.0;
  if ( (m_lastBGMPlayer->m_playerFlags & 0x40000000) != 0 )
    return m_lastBGMPlayer->m_pauseTime;
  Myval2 = m_lastBGMPlayer->m_presenter._Mypair._Myval2;
  m_Sound = Myval2->m_Sound;
  if ( m_Sound && (p_m_BankInfo = &m_Sound->m_BankInfo) != 0i64 && !Myval2->m_playend )
    return (float)Myval2->bufferPtr / (float)((float)p_m_BankInfo->channel * p_m_BankInfo->freq);
  else
    return 0.0;
}

extension::SoundHashKey *__fastcall extension::SoundManager::BGMPlay_getSoundHashKey(
        extension::SoundManager *this,
        extension::SoundHashKey *result)
{
  const extension::exsound_detail::SoundBankElementDefinition *m_ptr; // rax
  extension::SoundManager::Player *m_lastBGMPlayer; // rax
  extension::exsound_detail::SoundNameRegistry::NameBuffer *v4; // rax

  if ( !this->m_bgmRequest.m_reserved || (m_ptr = this->m_bgmRequest.m_soundSource.m_elementDef.m_ptr) == 0i64 )
  {
    m_lastBGMPlayer = this->m_lastBGMPlayer;
    if ( !m_lastBGMPlayer )
    {
      result->m_sharedBuffer.m_ptr = 0i64;
      return result;
    }
    m_ptr = m_lastBGMPlayer->m_soundSource.m_elementDef.m_ptr;
  }
  v4 = m_ptr->m_name.m_sharedBuffer.m_ptr;
  result->m_sharedBuffer.m_ptr = v4;
  if ( v4 )
  {
    _InterlockedExchangeAdd64((volatile signed __int64 *)&v4->m_refCount.m_ptr->m_sharedCount, 1ui64);
    return result;
  }
  return result;
}

void __fastcall extension::SoundManager::Debug_dumpPlayInfo(
        extension::SoundManager *this,
        std::vector<extension::SoundManager::PlayInfo> *result)
{
  unsigned __int64 m_Sound; // rdx
  __int64 i; // rbx
  extension::SoundManager::Player *Myval2; // rsi
  extension::SoundManager::PlayInfo *Mylast; // rax
  extension::SoundManager::PlayInfo *v8; // rax
  bool v9; // cl
  float m_pauseTime; // xmm1_4
  CAudioPresenter *v11; // rcx
  extension::exsound_detail::SoundNameRegistry::NameBuffer *m_ptr; // r8
  extension::exsound_detail::SoundNameRegistry::NameBuffer *v13; // rcx

  std::vector<extension::SoundManager::PlayInfo>::clear(result);
  if ( (unsigned __int64)(result->_Mypair._Myval2._Myend - result->_Mypair._Myval2._Myfirst) < 0x20 )
    std::vector<extension::SoundManager::PlayInfo>::_Reallocate(result, 0x20ui64);
  for ( i = 0i64; i < 32; ++i )
  {
    Myval2 = this->m_players._Mypair._Myval2;
    if ( result->_Mypair._Myval2._Mylast == result->_Mypair._Myval2._Myend )
      std::vector<extension::SoundManager::PlayInfo>::_Reserve(result, m_Sound);
    Mylast = result->_Mypair._Myval2._Mylast;
    if ( Mylast )
    {
      *(_QWORD *)&Mylast->IsPlaying = 0i64;
      *(_QWORD *)&Mylast->LockTime = 0i64;
      *(_QWORD *)&Mylast->Group = 0i64;
      Mylast->SoundKey.m_sharedBuffer.m_ptr = 0i64;
    }
    v8 = ++result->_Mypair._Myval2._Mylast;
    v9 = Myval2[i].m_soundSource.m_elementDef.m_ptr != 0i64;
    v8[-1].IsPlaying = v9;
    if ( v9 )
    {
      v8[-1].IsBGM = Myval2[i].m_playerFlags & 1;
      if ( (Myval2[i].m_playerFlags & 0x40000000) != 0 )
      {
        m_pauseTime = Myval2[i].m_pauseTime;
      }
      else
      {
        v11 = Myval2[i].m_presenter._Mypair._Myval2;
        m_Sound = (unsigned __int64)v11->m_Sound;
        if ( m_Sound )
        {
          m_Sound += 288i64;
          if ( m_Sound )
          {
            if ( v11->m_playend )
              m_pauseTime = 0.0;
            else
              m_pauseTime = (float)v11->bufferPtr / (float)((float)*(int *)(m_Sound + 40) * *(float *)(m_Sound + 44));
          }
          else
          {
            m_pauseTime = 0.0;
          }
        }
        else
        {
          m_pauseTime = 0.0;
        }
      }
      v8[-1].PlayTime = m_pauseTime;
      v8[-1].LockTime = Myval2[i].m_lockTime;
      v8[-1].Volume = Myval2[i].m_lastOutputVolume;
      v8[-1].Group = Myval2[i].m_group;
      v8[-1].UserTag = Myval2[i].m_userTag;
      m_ptr = Myval2[i].m_soundSource.m_elementDef.m_ptr->m_name.m_sharedBuffer.m_ptr;
      if ( m_ptr )
      {
        m_Sound = (unsigned __int64)m_ptr->m_refCount.m_ptr;
        _InterlockedExchangeAdd64((volatile signed __int64 *)(m_Sound + 16), 1ui64);
      }
      v13 = v8[-1].SoundKey.m_sharedBuffer.m_ptr;
      v8[-1].SoundKey.m_sharedBuffer.m_ptr = m_ptr;
      if ( v13 )
      {
        m_Sound = (unsigned __int64)v13->m_refCount.m_ptr;
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(m_Sound + 16), 0xFFFFFFFFFFFFFFFFui64) == 1 )
          ((void (__fastcall *)(extension::exsound_detail::SoundNameRegistry::NameBuffer *, __int64))v13->~RefCountableWeakSupportBase)(
            v13,
            1i64);
      }
    }
    else
    {
      v8[-1].IsBGM = 0;
      *(_QWORD *)&v8[-1].PlayTime = 0i64;
      *(_QWORD *)&v8[-1].Volume = 0i64;
      v8[-1].UserTag = 0;
    }
  }
}

extension::SoundManager::SERequest *__fastcall extension::SoundManager::MakeSERequestPauseGroup(
        extension::SoundManager::SERequest *result,
        unsigned int group,
        bool pause)
{
  extension::SoundManager::SERequest::SERequest(result);
  result->m_playGroup = group;
  *(_QWORD *)&result->m_userTag = 0i64;
  result->m_tag = 3 - pause;
  return result;
}

extension::SoundManager::SERequest *__fastcall extension::SoundManager::MakeSERequestPlay(
        extension::SoundManager::SERequest *result,
        const extension::SoundSource *ss,
        const extension::SoundManager::SEPlayParams *params)
{
  std::_Wrap_alloc<std::allocator<extension::exsound_detail::SoundBankMediaDefinition> > *v6; // r8
  std::integral_constant<bool,0> v7; // r9
  extension::SoundManager::SERequest *v8; // rax

  extension::SoundManager::SERequest::SERequest(result);
  extension::RefCountablePtr<extension::exsound_detail::RuntimeEffector>::operator=(
    &result->m_runtimeEffector,
    &params->m_runtimeEffector);
  result->m_tag = Tag_Play;
  extension::SoundSource::operator=(&result->m_soundSource, ss, v6, v7);
  result->m_playGroup = params->m_playGroup;
  result->m_userTag = params->m_userTag;
  v8 = result;
  result->m_fadeTime = 0.0;
  return v8;
}

extension::SoundManager::SERequest *__fastcall extension::SoundManager::MakeSERequestStop(
        extension::SoundManager::SERequest *result,
        const extension::SoundSource *ss,
        const extension::SoundManager::SEStopParams *params)
{
  std::_Wrap_alloc<std::allocator<extension::exsound_detail::SoundBankMediaDefinition> > *v6; // r8
  std::integral_constant<bool,0> v7; // r9

  extension::SoundManager::SERequest::SERequest(result);
  extension::RefCountablePtr<extension::exsound_detail::RuntimeEffector>::operator=(
    &result->m_runtimeEffector,
    &params->m_runtimeEffector);
  result->m_tag = Tag_Stop;
  extension::SoundSource::operator=(&result->m_soundSource, ss, v6, v7);
  result->m_playGroup = params->m_playGroup;
  result->m_userTag = params->m_userTagMask;
  result->m_fadeTime = params->m_fadeTime;
  return result;
}

extension::SoundManager::SERequest *__fastcall extension::SoundManager::MakeSERequestStopAll(
        extension::SoundManager::SERequest *result,
        float fadeTime)
{
  extension::SoundManager::SERequest *v3; // rax

  extension::SoundManager::SERequest::SERequest(result);
  result->m_fadeTime = fadeTime;
  v3 = result;
  result->m_tag = Tag_Stop;
  result->m_playGroup = -1;
  result->m_userTag = 0;
  return v3;
}

extension::SoundManager::SERequest *__fastcall extension::SoundManager::MakeSERequestStopGroup(
        extension::SoundManager::SERequest *result,
        unsigned int group)
{
  extension::SoundManager::SERequest *v4; // rax

  extension::SoundManager::SERequest::SERequest(result);
  result->m_playGroup = group;
  v4 = result;
  result->m_tag = Tag_Stop;
  *(_QWORD *)&result->m_userTag = 0i64;
  return v4;
}

extension::SoundManager::SERequest *__fastcall extension::SoundManager::MakeSERequestStopUserTaged(
        extension::SoundManager::SERequest *result,
        unsigned int userTagMask,
        float fadeTime)
{
  extension::SoundManager::SERequest *v5; // rax

  extension::SoundManager::SERequest::SERequest(result);
  result->m_fadeTime = fadeTime;
  v5 = result;
  result->m_userTag = userTagMask;
  result->m_tag = Tag_Stop;
  result->m_playGroup = -1;
  return v5;
}

float __fastcall extension::SoundManager::NextRandom()
{
  extension::SoundManager::s_randomState ^= (((((extension::SoundManager::s_randomState << 13) ^ extension::SoundManager::s_randomState) >> 7) ^ (extension::SoundManager::s_randomState << 13) ^ extension::SoundManager::s_randomState) << 17) ^ (((extension::SoundManager::s_randomState << 13) ^ extension::SoundManager::s_randomState) >> 7) ^ (extension::SoundManager::s_randomState << 13);
  return ldexp((float)(extension::SoundManager::s_randomState & 0xFFFFFF), -24);
}

std::_List_node<extension::SoundManager::SERequest,void *> *__fastcall std::_List_alloc<std::_List_base_types<extension::SoundManager::SERequest>>::_Buynode0(
        std::_List_alloc<std::_List_base_types<extension::SoundManager::SERequest> > *this,
        std::_List_node<extension::SoundManager::SERequest,void *> *_Next,
        std::_List_node<extension::SoundManager::SERequest,void *> *_Prev)
{
  std::_List_node<extension::SoundManager::SERequest,void *> *result; // rax

  result = (std::_List_node<extension::SoundManager::SERequest,void *> *)operator new(0x60ui64);
  if ( !_Next )
  {
    _Next = result;
    _Prev = result;
  }
  if ( result )
    result->_Next = _Next;
  if ( result != (std::_List_node<extension::SoundManager::SERequest,void *> *)-8i64 )
    result->_Prev = _Prev;
  return result;
}

void __fastcall std::vector<extension::SoundManager::PlayInfo>::_Reallocate(
        std::vector<extension::SoundManager::PlayInfo> *this,
        unsigned __int64 _Count,
        __int64 a3,
        std::_Wrap_alloc<std::allocator<extension::SoundManager::PlayInfo> > *a4)
{
  extension::SoundManager::PlayInfo *v6; // rdi
  unsigned __int64 v7; // rcx
  extension::exsound_detail::SoundNameRegistry::NameBuffer *v8; // rax
  extension::exsound_detail::SoundNameRegistry::NameBuffer *m_ptr; // rcx
  extension::SoundManager::PlayInfo *Mylast; // r12
  extension::SoundManager::PlayInfo *Myfirst; // rbx
  signed __int64 v12; // r14

  if ( _Count )
  {
    if ( _Count > 0x7FFFFFFFFFFFFFFi64 )
      std::_Xbad_alloc();
    v7 = 32 * _Count;
    if ( 32 * _Count < 0x1000 )
    {
      v6 = (extension::SoundManager::PlayInfo *)operator new(v7);
    }
    else
    {
      if ( v7 + 39 <= v7 )
        std::_Xbad_alloc();
      v8 = (extension::exsound_detail::SoundNameRegistry::NameBuffer *)operator new(v7 + 39);
      v6 = (extension::SoundManager::PlayInfo *)(((unsigned __int64)&v8[1].__vftable + 7) & 0xFFFFFFFFFFFFFFE0ui64);
      v6[-1].SoundKey.m_sharedBuffer.m_ptr = v8;
    }
  }
  else
  {
    v6 = 0i64;
  }
  std::_Uninitialized_move_al_unchecked1<extension::SoundManager::PlayInfo *,extension::SoundManager::PlayInfo *,std::allocator<extension::SoundManager::PlayInfo>>(
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
      m_ptr = Myfirst->SoundKey.m_sharedBuffer.m_ptr;
      if ( m_ptr
        && _InterlockedExchangeAdd64(
             (volatile signed __int64 *)&m_ptr->m_refCount.m_ptr->m_sharedCount,
             0xFFFFFFFFFFFFFFFFui64) == 1 )
      {
        ((void (__fastcall *)(extension::exsound_detail::SoundNameRegistry::NameBuffer *, __int64))m_ptr->~RefCountableWeakSupportBase)(
          m_ptr,
          1i64);
      }
    }
    std::_Wrap_alloc<std::allocator<AgDirectory::DirectoryEntry>>::deallocate(
      (std::_Wrap_alloc<std::allocator<AgDirectory::DirectoryEntry> > *)m_ptr,
      (AgDirectory::DirectoryEntry *)this->_Mypair._Myval2._Myfirst,
      this->_Mypair._Myval2._Myend - this->_Mypair._Myval2._Myfirst);
  }
  this->_Mypair._Myval2._Myend = &v6[_Count];
  this->_Mypair._Myval2._Mylast = (extension::SoundManager::PlayInfo *)((char *)v6 + (v12 & 0xFFFFFFFFFFFFFFE0ui64));
  this->_Mypair._Myval2._Myfirst = v6;
}

void __fastcall std::vector<extension::SoundManager::PlayInfo>::_Reserve(
        std::vector<extension::SoundManager::PlayInfo> *this,
        unsigned __int64 _Count)
{
  extension::SoundManager::PlayInfo *Myend; // r9
  extension::SoundManager::PlayInfo *Mylast; // rdx
  extension::SoundManager::PlayInfo *Myfirst; // rcx
  __int64 v6; // rdx
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // rcx

  Myend = this->_Mypair._Myval2._Myend;
  Mylast = this->_Mypair._Myval2._Mylast;
  if ( !(Myend - Mylast) )
  {
    Myfirst = this->_Mypair._Myval2._Myfirst;
    v6 = Mylast - Myfirst;
    if ( v6 == 0x7FFFFFFFFFFFFFFi64 )
      std::_Xlength_error("vector<T> too long");
    v7 = v6 + 1;
    v8 = Myend - Myfirst;
    v9 = 0i64;
    if ( 0x7FFFFFFFFFFFFFFi64 - (v8 >> 1) >= v8 )
      v9 = v8 + (v8 >> 1);
    if ( v9 >= v7 )
      v7 = v9;
    std::vector<extension::SoundManager::PlayInfo>::_Reallocate(
      this,
      v7,
      (__int64)this,
      (std::_Wrap_alloc<std::allocator<extension::SoundManager::PlayInfo> > *)v8);
  }
}

void __fastcall std::list<extension::SoundManager::SERequest>::_Splice_same(
        std::list<extension::SoundManager::SERequest> *this,
        std::_List_const_iterator<std::_List_val<std::_List_simple_types<extension::SoundManager::SERequest> > > _Where,
        std::list<extension::SoundManager::SERequest> *_Right,
        std::_List_const_iterator<std::_List_val<std::_List_simple_types<extension::SoundManager::SERequest> > > _First,
        std::_List_const_iterator<std::_List_val<std::_List_simple_types<extension::SoundManager::SERequest> > > _Last,
        unsigned __int64 _Count)
{
  unsigned __int64 Mysize; // r10
  std::_List_node<extension::SoundManager::SERequest,void *> *Prev; // r8

  if ( this != _Right )
  {
    Mysize = this->_Mypair._Myval2._Mysize;
    if ( 0x2AAAAAAAAAAAAA9i64 - Mysize < _Count )
      std::_Xlength_error("list<T> too long");
    this->_Mypair._Myval2._Mysize = Mysize + _Count;
    _Right->_Mypair._Myval2._Mysize -= _Count;
  }
  _First._Ptr->_Prev->_Next = _Last._Ptr;
  _Last._Ptr->_Prev->_Next = _Where._Ptr;
  _Where._Ptr->_Prev->_Next = _First._Ptr;
  Prev = _Where._Ptr->_Prev;
  _Where._Ptr->_Prev = _Last._Ptr->_Prev;
  _Last._Ptr->_Prev = _First._Ptr->_Prev;
  _First._Ptr->_Prev = Prev;
}

void __fastcall extension::SoundManager::Player::applyPresenterReverb(
        extension::SoundManager::Player *this,
        CAudioPresenter *presenter,
        const extension::SoundManager::ReverbState *refState)
{
  unsigned int m_soundFlags; // eax
  int v7; // ebx
  const extension::SoundManager::ManagerRealtimeState *m_rtStateRef; // rax
  int v9; // ecx
  int v10; // ecx
  CMediaSound *Sound; // rax
  int channel; // er8
  int freq; // er11
  float Attenuation; // xmm1_4
  int RepeatCount; // er9
  float reflectionAttenuation; // xmm0_4
  unsigned int v17; // er10
  unsigned int fluctuations; // ecx
  CMediaManager *m_pMediaManager; // rax

  if ( !refState || refState->Attenuation <= 0.0 || refState->RepeatCount <= 0 )
  {
    v7 = 0;
    goto LABEL_15;
  }
  m_soundFlags = this->m_soundSource.m_soundFlags;
  v7 = 0;
  if ( (m_soundFlags & 1) != 0 )
  {
    v7 = 3;
  }
  else if ( (m_soundFlags & 0x40) != 0 )
  {
    v7 = 1;
  }
  else if ( (m_soundFlags & 2) == 0 )
  {
    m_rtStateRef = this->m_rtStateRef;
    v9 = 0;
    if ( m_rtStateRef->isGlobalReverb )
      v9 = 3;
    v7 = v9;
  }
  if ( v7 != 1 )
  {
LABEL_15:
    presenter->m_iReverb = v7;
    if ( !v7 )
      return;
    goto LABEL_16;
  }
  v10 = siStageReverbPortCounter;
  presenter->m_iReverb = siStageReverbPortCounter + 1;
  siStageReverbPortCounter = (v10 - 1) & 1;
LABEL_16:
  Sound = extension::SoundSource::getSound(&this->m_soundSource, (extension::AsyncStatus::Step)this);
  channel = Sound->m_BankInfo.channel;
  freq = (int)Sound->m_BankInfo.freq;
  if ( v7 == 1 && presenter->m_pMediaManager )
    channel = 8;
  Attenuation = refState->Attenuation;
  RepeatCount = refState->RepeatCount;
  reflectionAttenuation = refState->ReflectionAttenuation;
  v17 = channel * (freq * refState->DelayTimeMsec / 1000);
  fluctuations = 2 * v17;
  if ( channel * (freq * refState->FluctuationTimeMsec / 1000) <= (int)(2 * v17) )
    fluctuations = channel * (freq * refState->FluctuationTimeMsec / 1000);
  if ( v7 == 1 && (m_pMediaManager = presenter->m_pMediaManager) != 0i64 )
  {
    m_pMediaManager->m_bReverbAttenuation = Attenuation;
    m_pMediaManager->m_bReverbReflectionAttenuation = reflectionAttenuation;
    m_pMediaManager->m_bReverbRepeatCount = RepeatCount;
    m_pMediaManager->m_bReverbAttenuationTimes = v17;
  }
  else
  {
    CAudioPresenter::setReverbParameter(presenter, Attenuation, v17, RepeatCount, reflectionAttenuation, fluctuations);
  }
}

void __fastcall extension::SoundManager::assignBGMPlayer(
        extension::SoundManager *this,
        const extension::SoundSource *ss,
        float fadeTime,
        float startTime)
{
  extension::AsyncStatus::Step v6; // edx
  extension::SoundManager::PlayerFilterOption v7; // er8
  char *Ptr; // rcx
  char *v9; // rax
  extension::SoundManager::Player *Player; // rax
  extension::SoundManager::Player *v11; // rbx
  extension::exsound_detail::SoundChannelDefinition *p_m_channelDef; // rax
  float m_gamePad; // xmm1_4
  float *p_m_padVolumeCombined; // rax
  std::string result; // [rsp+20h] [rbp-58h] BYREF

  if ( extension::SoundSource::getSound((extension::SoundSource *)ss, (extension::AsyncStatus::Step)ss) )
  {
    Player = extension::SoundManager::findPlayer(this, 0x7FFFFFFF, v7);
    v11 = Player;
    if ( Player && extension::SoundManager::Player::bindSound(Player, ss, SoundBind_BGM) )
    {
      v11->m_group = 0;
      v11->m_baseVolume = ss->m_baseVolume;
      if ( ss->m_elementDef.m_ptr )
        p_m_channelDef = &ss->m_elementDef.m_ptr->m_channelDef;
      else
        p_m_channelDef = (extension::exsound_detail::SoundChannelDefinition *)&unk_140A5C658;
      m_gamePad = p_m_channelDef->m_gamePad;
      p_m_padVolumeCombined = &this->m_padVolumeCombined;
      if ( m_gamePad <= 0.0 )
        p_m_padVolumeCombined = &this->m_bgmVolumeCombined;
      v11->m_masterVolumeRef = p_m_padVolumeCombined;
      v11->m_lockTime = 0.0;
      extension::SoundManager::Player::play(v11, fadeTime, startTime);
      this->m_lastBGMPlayer = v11;
    }
  }
  else if ( extension::SoundSource::isLoadError((extension::SoundSource *)ss, v6) )
  {
    extension::SoundSource::getAudioFilePath((extension::SoundSource *)ss, &result);
    _DummyLogging("BGM audio file load failed... [%s]");
    if ( result._Mypair._Myval2._Myres >= 0x10 )
    {
      Ptr = result._Mypair._Myval2._Bx._Ptr;
      if ( result._Mypair._Myval2._Myres + 1 >= 0x1000 )
      {
        if ( (result._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
          invalid_parameter_noinfo_noreturn();
        v9 = (char *)*((_QWORD *)result._Mypair._Myval2._Bx._Ptr - 1);
        if ( v9 >= result._Mypair._Myval2._Bx._Ptr )
          invalid_parameter_noinfo_noreturn();
        if ( (char *)(result._Mypair._Myval2._Bx._Ptr - v9) < (char *)8 )
          invalid_parameter_noinfo_noreturn();
        if ( (char *)(result._Mypair._Myval2._Bx._Ptr - v9) > (char *)0x27 )
          invalid_parameter_noinfo_noreturn();
        Ptr = (char *)*((_QWORD *)result._Mypair._Myval2._Bx._Ptr - 1);
      }
      operator delete(Ptr);
    }
  }
}

void __fastcall extension::SoundManager::assignSEPlayer(
        extension::SoundManager *this,
        const extension::SoundManager::SERequest *r)
{
  int m_priority; // er14
  __int64 m_playGroup; // r15
  extension::AsyncStatus::Step v6; // edx
  char *Ptr; // rcx
  char *v8; // rax
  extension::SoundManager::PlayerFilterOption v9; // er8
  extension::SoundManager::Player *Player; // rax
  extension::SoundManager::Player *v11; // rbx
  const extension::exsound_detail::SoundBankElementDefinition *m_ptr; // rax
  extension::exsound_detail::SoundChannelDefinition *p_m_channelDef; // rax
  std::string result; // [rsp+20h] [rbp-68h] BYREF

  m_priority = r->m_soundSource.m_priority;
  m_playGroup = r->m_playGroup;
  if ( (r->m_soundSource.m_soundFlags & 4) != 0 || extension::SoundManager::excludeMultiSEPlayer(this, r) )
  {
    if ( extension::SoundSource::getSound(&r->m_soundSource, (extension::AsyncStatus::Step)r) )
    {
      if ( extension::SoundManager::stopGroupLimitSEPlayer(this, m_playGroup, m_priority) )
      {
        Player = extension::SoundManager::findPlayer(this, m_priority, v9);
        v11 = Player;
        if ( Player )
        {
          if ( extension::SoundManager::Player::bindSound(Player, &r->m_soundSource, SoundBind_SE) )
          {
            v11->m_group = m_playGroup;
            v11->m_priority = m_priority;
            v11->m_userTag = r->m_userTag;
            v11->m_baseVolume = r->m_soundSource.m_baseVolume;
            m_ptr = r->m_soundSource.m_elementDef.m_ptr;
            if ( m_ptr )
              p_m_channelDef = &m_ptr->m_channelDef;
            else
              p_m_channelDef = (extension::exsound_detail::SoundChannelDefinition *)&unk_140A5C658;
            if ( p_m_channelDef->m_gamePad <= 0.0 )
              v11->m_masterVolumeRef = &this->m_groupSEVolumeCombined[m_playGroup];
            else
              v11->m_masterVolumeRef = &this->m_padVolumeCombined;
            v11->m_presenter._Mypair._Myval2->m_bChangeRL = r->m_soundSource.m_bStereoChange;
            v11->m_lockTime = r->m_soundSource.m_lockTime;
            extension::RefCountablePtr<extension::exsound_detail::RuntimeEffector>::operator=(
              &v11->m_runtimeEffector,
              &r->m_runtimeEffector);
            extension::SoundManager::Player::play(v11, r->m_fadeTime, 0.0);
          }
        }
      }
    }
    else if ( extension::SoundSource::isLoadError(&r->m_soundSource, v6) )
    {
      extension::SoundSource::getAudioFilePath(&r->m_soundSource, &result);
      _DummyLogging("se audio file load failed. [%s]");
      if ( result._Mypair._Myval2._Myres >= 0x10 )
      {
        Ptr = result._Mypair._Myval2._Bx._Ptr;
        if ( result._Mypair._Myval2._Myres + 1 >= 0x1000 )
        {
          if ( (result._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
            invalid_parameter_noinfo_noreturn();
          v8 = (char *)*((_QWORD *)result._Mypair._Myval2._Bx._Ptr - 1);
          if ( v8 >= result._Mypair._Myval2._Bx._Ptr )
            invalid_parameter_noinfo_noreturn();
          if ( (char *)(result._Mypair._Myval2._Bx._Ptr - v8) < (char *)8 )
            invalid_parameter_noinfo_noreturn();
          if ( (char *)(result._Mypair._Myval2._Bx._Ptr - v8) > (char *)0x27 )
            invalid_parameter_noinfo_noreturn();
          Ptr = (char *)*((_QWORD *)result._Mypair._Myval2._Bx._Ptr - 1);
        }
        operator delete(Ptr);
      }
    }
  }
}

void __fastcall extension::SoundManager::Player::bindPresenterSound(
        extension::SoundManager::Player *this,
        extension::AsyncStatus::Step a2)
{
  CAudioPresenter *Myval2; // rdi
  CMediaSound *Sound; // rax
  float m_pitchBendFrequencyScale; // xmm0_4
  CAudioPresenter *v6; // rdx
  CMediaSound *v7; // rax
  CMediaSound *v8; // r9
  bool v9; // r8
  bool v10; // dl
  unsigned int m_soundFlags; // eax
  const extension::SoundManager::ManagerRealtimeState *m_rtStateRef; // rcx
  extension::SoundManager::ReverbState *p_stageReverb; // rcx

  Myval2 = this->m_presenter._Mypair._Myval2;
  Sound = extension::SoundSource::getSound(&this->m_soundSource, a2);
  CAudioPresenter::setSound(Myval2, Sound);
  if ( SLOBYTE(this->m_soundSource.m_soundFlags) < 0 )
    m_pitchBendFrequencyScale = this->m_soundSource.m_pitchBendFrequencyScale;
  else
    m_pitchBendFrequencyScale = *(float *)&FLOAT_1_0;
  Myval2->m_fPitchScale = m_pitchBendFrequencyScale;
  v6 = this->m_presenter._Mypair._Myval2;
  if ( v6 )
    v6->m_Type = this->m_playerFlags & 1;
  v7 = extension::SoundSource::getSound(&this->m_soundSource, (extension::AsyncStatus::Step)v6);
  v8 = v7;
  if ( v7 )
  {
    v9 = (this->m_playerFlags & 0x20) != 0;
    if ( (this->m_playerFlags & 0x20) != 0 )
    {
      v10 = 0;
      if ( v7->m_BankInfo.channel == 1 )
        v10 = (this->m_playerFlags & 0x20) != 0;
      v9 = v10;
      goto LABEL_24;
    }
    m_soundFlags = this->m_soundSource.m_soundFlags;
    if ( (m_soundFlags & 0x40) != 0 && v8->m_BankInfo.channel == 1 )
    {
      if ( (m_soundFlags & 1) != 0 )
      {
        m_rtStateRef = this->m_rtStateRef;
        goto LABEL_19;
      }
      if ( (m_soundFlags & 0x40) != 0 )
      {
        p_stageReverb = &this->m_rtStateRef->stageReverb;
LABEL_20:
        if ( p_stageReverb && p_stageReverb->Attenuation > 0.0 && p_stageReverb->RepeatCount > 0 )
          v9 = 1;
        goto LABEL_24;
      }
      if ( (m_soundFlags & 2) == 0 )
      {
        m_rtStateRef = this->m_rtStateRef;
        if ( m_rtStateRef->isGlobalReverb )
        {
LABEL_19:
          p_stageReverb = &m_rtStateRef->reverb;
          goto LABEL_20;
        }
      }
    }
LABEL_24:
    this->m_presenter._Mypair._Myval2->m_3DSound.bUse3DSound = v9;
  }
  this->m_presenter._Mypair._Myval2->m_bStereoPan = (this->m_playerFlags & 0x40) != 0;
}

bool __fastcall extension::SoundManager::Player::bindSound(
        extension::SoundManager::Player *this,
        const extension::SoundSource *ss,
        extension::SoundManager::Player::SoundBindSpec bindSpec)
{
  extension::AsyncStatus::Step v6; // edx
  CMediaSound *Sound; // rax
  extension::exsound_detail::SoundChannelDefinition *v8; // rsi
  std::_Wrap_alloc<std::allocator<extension::exsound_detail::SoundBankMediaDefinition> > *v9; // r8
  std::integral_constant<bool,0> v10; // r9
  extension::SoundManager::ReverbState *p_reverb; // rdi
  unsigned int m_soundFlags; // eax
  float CurrentTotalTime; // xmm0_4
  extension::AsyncStatus::Step v14; // edx
  unsigned int v15; // eax
  const extension::SoundManager::ManagerRealtimeState *m_rtStateRef; // rax

  extension::SoundManager::Player::releaseSound(this);
  Sound = extension::SoundSource::getSound((extension::SoundSource *)ss, v6);
  if ( Sound )
  {
    v8 = ss->m_elementDef.m_ptr ? &ss->m_elementDef.m_ptr->m_channelDef : (extension::exsound_detail::SoundChannelDefinition *)&unk_140A5C658;
    LOBYTE(Sound) = extension::exsound_detail::SoundChannelDefinition::isOutSurround(v8);
    if ( (_BYTE)Sound || v8->m_gamePad > 0.0 )
    {
      extension::SoundSource::operator=(&this->m_soundSource, ss, v9, v10);
      p_reverb = 0i64;
      this->m_playerFlags = 0;
      if ( extension::exsound_detail::SoundChannelDefinition::isOutSurround(v8) )
        this->m_playerFlags = 16;
      m_soundFlags = this->m_soundSource.m_soundFlags;
      if ( (m_soundFlags & 0x10) != 0 )
        this->m_playerFlags |= 0x20u;
      if ( (m_soundFlags & 0x20) != 0 )
        this->m_playerFlags |= 0x40u;
      if ( bindSpec )
      {
        if ( bindSpec == SoundBind_BGM )
          this->m_playerFlags |= 1u;
      }
      else
      {
        this->m_playerFlags |= 2u;
      }
      this->m_baseVolume = 1.0;
      this->m_fadeGoalVolume = 1.0;
      CurrentTotalTime = CAudioPresenter::getCurrentTotalTime(this->m_presenter._Mypair._Myval2);
      this->m_fadeLastTime = CurrentTotalTime;
      *(_QWORD *)&this->m_fadeLastVolume = 0i64;
      *(_QWORD *)&this->m_pauseTime = 0i64;
      this->m_fadeGoalTime = CurrentTotalTime + 0.0;
      extension::SoundManager::Player::bindPresenterSound(this, v14);
      v15 = this->m_soundSource.m_soundFlags;
      if ( (v15 & 1) != 0 )
      {
        p_reverb = &this->m_rtStateRef->reverb;
      }
      else if ( (v15 & 0x40) != 0 )
      {
        p_reverb = &this->m_rtStateRef->stageReverb;
      }
      else if ( (v15 & 2) == 0 )
      {
        m_rtStateRef = this->m_rtStateRef;
        if ( m_rtStateRef->isGlobalReverb )
          p_reverb = &m_rtStateRef->reverb;
      }
      extension::SoundManager::Player::applyPresenterReverb(this, this->m_presenter._Mypair._Myval2, p_reverb);
      LOBYTE(Sound) = 1;
    }
  }
  return (char)Sound;
}

void __fastcall std::list<extension::SoundManager::SERequest>::clear(
        std::list<extension::SoundManager::SERequest> *this,
        __int64 a2,
        std::_Wrap_alloc<std::allocator<extension::exsound_detail::SoundBankMediaDefinition> > *a3,
        std::integral_constant<bool,0> a4)
{
  std::_List_node<extension::SoundManager::SERequest,void *> *Next; // rdi
  std::_List_node<extension::SoundManager::SERequest,void *> *v6; // rbp
  extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body *m_ptr; // rcx
  extension::exsound_detail::SoundBankElementDefinition *v8; // rbx
  extension::exsound_detail::RuntimeEffector *v9; // rbx
  std::_Func_base<float> *v10; // rcx

  Next = this->_Mypair._Myval2._Myhead->_Next;
  this->_Mypair._Myval2._Myhead->_Next = this->_Mypair._Myval2._Myhead;
  this->_Mypair._Myval2._Myhead->_Prev = this->_Mypair._Myval2._Myhead;
  this->_Mypair._Myval2._Mysize = 0i64;
  if ( Next != this->_Mypair._Myval2._Myhead )
  {
    do
    {
      v6 = Next->_Next;
      m_ptr = Next->_Myval.m_soundSource.m_sound.m_body.m_ptr;
      if ( m_ptr )
      {
        a2 = _InterlockedExchangeAdd64(
               (volatile signed __int64 *)&m_ptr->m_refCount.m_ptr->m_sharedCount,
               0xFFFFFFFFFFFFFFFFui64);
        if ( a2 == 1 )
          ((void (__fastcall *)(extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body *, __int64))m_ptr->~RefCountableWeakSupportBase)(
            m_ptr,
            1i64);
      }
      v8 = (extension::exsound_detail::SoundBankElementDefinition *)Next->_Myval.m_soundSource.m_elementDef.m_ptr;
      if ( v8 && _InterlockedExchangeAdd64((volatile signed __int64 *)v8, 0xFFFFFFFFFFFFFFFFui64) == 1 )
      {
        extension::exsound_detail::SoundBankElementDefinition::~SoundBankElementDefinition(v8, a2, a3, a4);
        operator delete(v8, 0x68ui64);
      }
      v9 = Next->_Myval.m_runtimeEffector.m_ptr;
      if ( v9 && _InterlockedExchangeAdd64((volatile signed __int64 *)v9, 0xFFFFFFFFFFFFFFFFui64) == 1 )
      {
        v10 = v9->getPanPositionFunc._Mystorage._Ptrs[7];
        if ( v10 )
        {
          LOBYTE(a2) = v10 != (std::_Func_base<float> *)&v9->getPanPositionFunc;
          v10->_Delete_this(v10, a2);
          v9->getPanPositionFunc._Mystorage._Ptrs[7] = 0i64;
        }
        operator delete(v9, 0x60ui64);
      }
      operator delete(Next);
      Next = v6;
    }
    while ( v6 != this->_Mypair._Myval2._Myhead );
  }
}

void __fastcall std::vector<extension::SoundManager::PlayInfo>::clear(
        std::vector<extension::SoundManager::PlayInfo> *this)
{
  extension::SoundManager::PlayInfo *Mylast; // rsi
  extension::SoundManager::PlayInfo *Myfirst; // rbx
  extension::exsound_detail::SoundNameRegistry::NameBuffer *m_ptr; // rcx

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
      m_ptr = Myfirst->SoundKey.m_sharedBuffer.m_ptr;
      if ( m_ptr )
      {
        if ( _InterlockedExchangeAdd64(
               (volatile signed __int64 *)&m_ptr->m_refCount.m_ptr->m_sharedCount,
               0xFFFFFFFFFFFFFFFFui64) == 1 )
          ((void (__fastcall *)(extension::exsound_detail::SoundNameRegistry::NameBuffer *, __int64))m_ptr->~RefCountableWeakSupportBase)(
            m_ptr,
            1i64);
      }
      ++Myfirst;
    }
    while ( Myfirst != Mylast );
    this->_Mypair._Myval2._Mylast = this->_Mypair._Myval2._Myfirst;
  }
}

void __fastcall extension::SoundManager::BGMRequest::clear(
        extension::SoundManager::BGMRequest *this,
        __int64 a2,
        std::_Wrap_alloc<std::allocator<extension::exsound_detail::SoundBankMediaDefinition> > *a3,
        std::integral_constant<bool,0> a4)
{
  extension::exsound_detail::SoundBankElementDefinition *m_ptr; // rbx

  m_ptr = (extension::exsound_detail::SoundBankElementDefinition *)this->m_soundSource.m_elementDef.m_ptr;
  this->m_soundSource.m_elementDef.m_ptr = 0i64;
  if ( m_ptr && _InterlockedExchangeAdd64((volatile signed __int64 *)m_ptr, 0xFFFFFFFFFFFFFFFFui64) == 1 )
  {
    extension::exsound_detail::SoundBankElementDefinition::~SoundBankElementDefinition(m_ptr, a2, a3, a4);
    operator delete(m_ptr, 0x68ui64);
  }
  extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::reset(&this->m_soundSource.m_sound);
  *(_WORD *)&this->m_reserved = 0;
  this->m_pause = Pause_None;
}

__int64 __fastcall extension::SoundManager::excludeMultiSEPlayer(
        extension::SoundManager *this,
        const extension::SoundManager::SERequest *r)
{
  unsigned int m_playGroup; // ebp
  unsigned __int8 v5; // di
  __int64 i; // rbx
  extension::SoundManager::Player *v7; // r8
  const extension::exsound_detail::SoundBankElementDefinition *m_ptr; // rdx
  float m_pauseTotalTime; // xmm0_4

  m_playGroup = r->m_playGroup;
  v5 = 1;
  for ( i = 0i64; i < 32; ++i )
  {
    v7 = &this->m_players._Mypair._Myval2[i];
    m_ptr = v7->m_soundSource.m_elementDef.m_ptr;
    if ( m_ptr
      && (v7->m_playerFlags & 2) != 0
      && m_ptr == r->m_soundSource.m_elementDef.m_ptr
      && v7->m_group == m_playGroup )
    {
      if ( (v7->m_playerFlags & 0x40000000) != 0 )
        m_pauseTotalTime = v7->m_pauseTotalTime;
      else
        m_pauseTotalTime = CAudioPresenter::getCurrentTotalTime(v7->m_presenter._Mypair._Myval2);
      if ( v7->m_lockTime < m_pauseTotalTime )
        extension::SoundManager::Player::stop(v7, 0.0);
      else
        v5 = 0;
    }
  }
  return v5;
}

void __fastcall extension::SoundManager::finalizePlayers(extension::SoundManager *this)
{
  __int64 i; // rbx
  extension::SoundManager::Player *v3; // rdi
  unsigned __int64 v4; // rdx
  CAudioPresenter *Myval2; // rsi

  for ( i = 0i64; i < 32; ++i )
  {
    v3 = &this->m_players._Mypair._Myval2[i];
    extension::SoundManager::Player::releaseSound(v3);
    Myval2 = v3->m_presenter._Mypair._Myval2;
    v3->m_presenter._Mypair._Myval2 = 0i64;
    if ( Myval2 )
    {
      CAudioPresenter::finalize(Myval2, v4);
      DeleteCriticalSection((LPCRITICAL_SECTION)&Myval2->m_sound_mutex);
      operator delete(Myval2, 0x248ui64);
    }
  }
}

extension::SoundManager::Player *__fastcall extension::SoundManager::findPlayer(
        extension::SoundManager *this,
        int priority,
        extension::SoundManager::PlayerFilterOption filterOpt)
{
  extension::SoundManager::Player *Myval2; // r10
  extension::SoundManager::Player *v4; // r11
  __int64 v5; // rbx
  int m_priority; // eax
  extension::SoundManager::Player *v8; // r11
  float v9; // xmm0_4
  float v10; // xmm4_4

  Myval2 = this->m_players._Mypair._Myval2;
  v4 = 0i64;
  v5 = 0i64;
  while ( Myval2->m_soundSource.m_elementDef.m_ptr )
  {
    if ( (Myval2->m_playerFlags & 2) != 0 )
    {
      m_priority = Myval2->m_priority;
      if ( m_priority <= priority && (m_priority != priority || !extension::SoundManager::Player::isLockPeriod(Myval2)) )
      {
        if ( !v4
          || (extension::SoundManager::Player::playTimeWeightiness(Myval2),
              v9 = extension::SoundManager::Player::playTimeWeightiness(v8),
              v9 > v10) )
        {
          v4 = Myval2;
        }
      }
    }
    ++v5;
    ++Myval2;
    if ( v5 >= 32 )
      return v4;
  }
  return Myval2;
}

void __fastcall extension::SoundManager::frameUpdate(extension::SoundManager *this)
{
  float *m_bgmVolumeModulationRef; // rax
  float v3; // xmm0_4
  float v4; // xmm1_4
  float *v5; // rcx
  float **v6; // rax
  __int64 v7; // r8
  float *v8; // rdx
  float v9; // xmm1_4
  float v10; // xmm1_4
  float *v11; // rdx
  float v12; // xmm1_4
  float *v13; // rdx
  float v14; // xmm1_4
  float *v15; // rdx
  float v16; // xmm1_4
  float *v17; // rdx
  float v18; // xmm1_4
  float *v19; // rdx
  float v20; // xmm1_4
  float *v21; // rdx
  float v22; // xmm1_4
  float *m_padVolumeModulationRef; // rax
  __int64 i; // rbx
  extension::SoundManager::Player *v25; // rcx
  CAudioPresenter *Myval2; // rax
  __int64 v27; // rbx
  __int64 v28; // r14
  __int64 v29; // rsi
  extension::SoundManager::Player *m_lastBGMPlayer; // rax
  __int64 v31; // rsi
  _BOOL8 v32; // rdx
  extension::exsound_detail::RuntimeEffector *m_ptr; // rcx
  extension::exsound_detail::RuntimeEffector *v34; // rbx
  std::function<float __cdecl(void)> *p_getPanPositionFunc; // rbp
  std::_Func_base<float> *v36; // rcx
  extension::RefCountablePtr<extension::exsound_detail::RuntimeEffector> result; // [rsp+50h] [rbp+8h] BYREF

  if ( this->m_mediaManager )
  {
    m_bgmVolumeModulationRef = this->m_bgmVolumeModulationRef;
    v3 = *(float *)&FLOAT_1_0;
    if ( m_bgmVolumeModulationRef )
      v4 = *m_bgmVolumeModulationRef;
    else
      v4 = *(float *)&FLOAT_1_0;
    this->m_bgmVolumeCombined = v4 * this->m_masterVolumeBGM;
    v5 = &this->m_groupSEVolumeCombined[1];
    v6 = &this->m_groupSEVolumeRefs[1];
    v7 = 3i64;
    do
    {
      v8 = *(v6 - 1);
      if ( v8 )
        v9 = *v8;
      else
        v9 = *(float *)&FLOAT_1_0;
      *(v5 - 1) = v9 * this->m_masterVolumeSE;
      if ( *v6 )
        v10 = **v6;
      else
        v10 = *(float *)&FLOAT_1_0;
      *v5 = v10 * this->m_masterVolumeSE;
      v11 = v6[1];
      if ( v11 )
        v12 = *v11;
      else
        v12 = *(float *)&FLOAT_1_0;
      v5[1] = v12 * this->m_masterVolumeSE;
      v13 = v6[2];
      if ( v13 )
        v14 = *v13;
      else
        v14 = *(float *)&FLOAT_1_0;
      v5[2] = v14 * this->m_masterVolumeSE;
      v15 = v6[3];
      if ( v15 )
        v16 = *v15;
      else
        v16 = *(float *)&FLOAT_1_0;
      v5[3] = v16 * this->m_masterVolumeSE;
      v17 = v6[4];
      if ( v17 )
        v18 = *v17;
      else
        v18 = *(float *)&FLOAT_1_0;
      v5[4] = v18 * this->m_masterVolumeSE;
      v19 = v6[5];
      if ( v19 )
        v20 = *v19;
      else
        v20 = *(float *)&FLOAT_1_0;
      v5[5] = v20 * this->m_masterVolumeSE;
      v21 = v6[6];
      if ( v21 )
        v22 = *v21;
      else
        v22 = *(float *)&FLOAT_1_0;
      v5[6] = v22 * this->m_masterVolumeSE;
      v6 += 8;
      v5 += 8;
      --v7;
    }
    while ( v7 );
    m_padVolumeModulationRef = this->m_padVolumeModulationRef;
    if ( m_padVolumeModulationRef )
      v3 = *m_padVolumeModulationRef;
    this->m_padVolumeCombined = v3 * this->m_padMasterVolume;
    for ( i = 0i64; i < 32; ++i )
    {
      v25 = &this->m_players._Mypair._Myval2[i];
      Myval2 = v25->m_presenter._Mypair._Myval2;
      if ( Myval2->m_Sound && Myval2->m_playend && (v25->m_playerFlags & 0x40000000) == 0 )
        extension::SoundManager::Player::releaseSound(v25);
    }
    extension::SoundManager::handleRequestedBGM(this);
    extension::SoundManager::handleRequestedSE(this);
    v27 = 0i64;
    v28 = 32i64;
    v29 = 32i64;
    do
    {
      extension::SoundManager::Player::updateRealtimeAttribute(
        &this->m_players._Mypair._Myval2[v27++],
        &this->m_vecListenerPosition);
      --v29;
    }
    while ( v29 );
    m_lastBGMPlayer = this->m_lastBGMPlayer;
    if ( m_lastBGMPlayer && (m_lastBGMPlayer->m_playerFlags & 1) == 0 )
      this->m_lastBGMPlayer = 0i64;
    this->m_rtState.listener3D.Dirty = 0;
    this->m_rtState.reverb.Dirty = 0;
    this->m_rtState.stageReverb.Dirty = 0;
    v31 = 0i64;
    do
    {
      extension::SoundManager::Player::runtimeEffector(&this->m_players._Mypair._Myval2[v31], &result);
      m_ptr = result.m_ptr;
      if ( result.m_ptr )
      {
        result.m_ptr->m_dirty = 0;
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)m_ptr, 0xFFFFFFFFFFFFFFFFui64) == 1 )
        {
          v34 = result.m_ptr;
          p_getPanPositionFunc = &result.m_ptr->getPanPositionFunc;
          v36 = result.m_ptr->getPanPositionFunc._Mystorage._Ptrs[7];
          if ( v36 )
          {
            LOBYTE(v32) = v36 != (std::_Func_base<float> *)p_getPanPositionFunc;
            v36->_Delete_this(v36, v32);
            p_getPanPositionFunc->_Mystorage._Ptrs[7] = 0i64;
          }
          operator delete(v34, 0x60ui64);
        }
      }
      ++v31;
      --v28;
    }
    while ( v28 );
  }
}

void __fastcall extension::SoundManager::handleRequestedBGM(
        extension::SoundManager *this,
        __int64 a2,
        std::_Wrap_alloc<std::allocator<extension::exsound_detail::SoundBankMediaDefinition> > *a3,
        std::integral_constant<bool,0> a4)
{
  extension::AsyncContent<CMediaSound> *m_ptr; // rax
  extension::SoundManager::BGMRequest::PauseTag m_pause; // esi
  __int64 i; // rbx
  extension::SoundManager::Player *v8; // rcx
  float v9; // xmm0_4
  extension::SoundManager::Player *m_lastBGMPlayer; // rcx
  __int64 v11; // rbx
  float m_fadeOutTime; // xmm6_4
  extension::SoundManager::Player *v13; // rcx

  if ( this->m_bgmRequest.m_reserved )
  {
    m_ptr = this->m_bgmRequest.m_soundSource.m_sound.m_body.m_ptr->m_content.m_ptr;
    if ( !m_ptr || m_ptr->m_isDataReleased || (m_ptr->m_status.m_stateFlags.m_value._My_val & 1) != 0 )
    {
      m_pause = this->m_bgmRequest.m_pause;
      if ( m_pause )
      {
        for ( i = 0i64; i < 32; ++i )
        {
          v8 = &this->m_players._Mypair._Myval2[i];
          if ( v8->m_soundSource.m_elementDef.m_ptr && (v8->m_playerFlags & 2) == 0 )
          {
            if ( m_pause == Pause_Stop )
              extension::SoundManager::Player::pauseStop(v8);
            else
              extension::SoundManager::Player::pausePlay(v8);
          }
        }
      }
      else
      {
        if ( this->m_bgmRequest.m_soundSource.m_elementDef.m_ptr )
        {
          v9 = 0.0;
          if ( this->m_bgmRequest.m_startTime < 0.0 )
          {
            m_lastBGMPlayer = this->m_lastBGMPlayer;
            if ( m_lastBGMPlayer )
              v9 = extension::SoundManager::Player::playPosition(m_lastBGMPlayer);
            this->m_bgmRequest.m_startTime = v9;
          }
        }
        if ( !this->m_bgmRequest.m_nonStop )
        {
          v11 = 0i64;
          m_fadeOutTime = this->m_bgmRequest.m_fadeOutTime;
          do
          {
            v13 = &this->m_players._Mypair._Myval2[v11];
            if ( v13->m_soundSource.m_elementDef.m_ptr && (v13->m_playerFlags & 2) == 0 )
              extension::SoundManager::Player::stop(v13, m_fadeOutTime);
            ++v11;
          }
          while ( v11 < 32 );
        }
        if ( this->m_bgmRequest.m_soundSource.m_elementDef.m_ptr )
          extension::SoundManager::assignBGMPlayer(
            this,
            &this->m_bgmRequest.m_soundSource,
            this->m_bgmRequest.m_fadeInTime,
            this->m_bgmRequest.m_startTime);
      }
      extension::SoundManager::BGMRequest::clear(&this->m_bgmRequest, a2, a3, a4);
    }
  }
}

void __fastcall extension::SoundManager::handleRequestedSE(extension::SoundManager *this)
{
  _RTL_CRITICAL_SECTION *p_m_mutex; // rbx
  std::_List_node<extension::SoundManager::SERequest,void *> *Myhead; // rdx
  std::_Wrap_alloc<std::allocator<extension::exsound_detail::SoundBankMediaDefinition> > *v4; // r8
  std::integral_constant<bool,0> v5; // r9
  std::list<extension::SoundManager::SERequest> *p_m_seRequests; // r14
  std::_List_node<extension::SoundManager::SERequest,void *> *Next; // rbx
  extension::AsyncContent<CMediaSound> *m_ptr; // rax
  std::list<extension::SoundManager::SERequest> *p_m_seRequestsAudioLoadPending; // rcx
  std::_List_const_iterator<std::_List_val<std::_List_simple_types<extension::SoundManager::SERequest> > > _Last; // rax
  extension::SoundManager::SERequest::Tag m_tag; // eax
  extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body *v12; // rcx
  extension::exsound_detail::SoundBankElementDefinition *v13; // rdi
  extension::exsound_detail::RuntimeEffector *v14; // rdi
  std::_Func_base<float> *v15; // rcx
  extension::ExSimpleMutex *v16; // [rsp+38h] [rbp-40h]

  p_m_mutex = (_RTL_CRITICAL_SECTION *)&this->m_mutex;
  v16 = &this->m_mutex;
  EnterCriticalSection((LPCRITICAL_SECTION)&this->m_mutex);
  if ( this->m_seRequests._Mypair._Myval2._Mysize )
  {
    p_m_seRequests = &this->m_seRequests;
    do
    {
      Next = p_m_seRequests->_Mypair._Myval2._Myhead->_Next;
      m_ptr = Next->_Myval.m_soundSource.m_sound.m_body.m_ptr->m_content.m_ptr;
      if ( !m_ptr || m_ptr->m_isDataReleased || (m_ptr->m_status.m_stateFlags.m_value._My_val & 1) != 0 )
      {
        m_tag = Next->_Myval.m_tag;
        if ( m_tag )
        {
          if ( (unsigned int)(m_tag - 1) <= 2 )
            extension::SoundManager::stopSEPlayer(this, &Next->_Myval);
        }
        else
        {
          extension::SoundManager::assignSEPlayer(this, &Next->_Myval);
        }
        Next->_Prev->_Next = Next->_Next;
        Next->_Next->_Prev = Next->_Prev;
        --this->m_seRequests._Mypair._Myval2._Mysize;
        v12 = Next->_Myval.m_soundSource.m_sound.m_body.m_ptr;
        if ( v12 )
        {
          Myhead = (std::_List_node<extension::SoundManager::SERequest,void *> *)_InterlockedExchangeAdd64(
                                                                                   (volatile signed __int64 *)&v12->m_refCount.m_ptr->m_sharedCount,
                                                                                   0xFFFFFFFFFFFFFFFFui64);
          if ( Myhead == (std::_List_node<extension::SoundManager::SERequest,void *> *)1 )
            ((void (__fastcall *)(extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::Body *, __int64))v12->~RefCountableWeakSupportBase)(
              v12,
              1i64);
        }
        v13 = (extension::exsound_detail::SoundBankElementDefinition *)Next->_Myval.m_soundSource.m_elementDef.m_ptr;
        if ( v13 && _InterlockedExchangeAdd64((volatile signed __int64 *)v13, 0xFFFFFFFFFFFFFFFFui64) == 1 )
        {
          extension::exsound_detail::SoundBankElementDefinition::~SoundBankElementDefinition(
            v13,
            (__int64)Myhead,
            v4,
            v5);
          operator delete(v13, 0x68ui64);
        }
        v14 = Next->_Myval.m_runtimeEffector.m_ptr;
        if ( v14 && _InterlockedExchangeAdd64((volatile signed __int64 *)v14, 0xFFFFFFFFFFFFFFFFui64) == 1 )
        {
          v15 = v14->getPanPositionFunc._Mystorage._Ptrs[7];
          if ( v15 )
          {
            LOBYTE(Myhead) = v15 != (std::_Func_base<float> *)&v14->getPanPositionFunc;
            v15->_Delete_this(v15, (bool)Myhead);
            v14->getPanPositionFunc._Mystorage._Ptrs[7] = 0i64;
          }
          operator delete(v14, 0x60ui64);
        }
        operator delete(Next);
      }
      else
      {
        p_m_seRequestsAudioLoadPending = &this->m_seRequestsAudioLoadPending;
        Myhead = this->m_seRequestsAudioLoadPending._Mypair._Myval2._Myhead;
        if ( Next != p_m_seRequests->_Mypair._Myval2._Myhead )
        {
          _Last._Ptr = Next->_Next;
          if ( p_m_seRequestsAudioLoadPending != p_m_seRequests || Myhead != Next && Myhead != _Last._Ptr )
            std::list<extension::SoundManager::SERequest>::_Splice_same(
              p_m_seRequestsAudioLoadPending,
              (std::_List_const_iterator<std::_List_val<std::_List_simple_types<extension::SoundManager::SERequest> > >)Myhead,
              &this->m_seRequests,
              (std::_List_const_iterator<std::_List_val<std::_List_simple_types<extension::SoundManager::SERequest> > >)Next,
              _Last,
              1ui64);
        }
      }
    }
    while ( this->m_seRequests._Mypair._Myval2._Mysize );
    p_m_mutex = (_RTL_CRITICAL_SECTION *)v16;
  }
  if ( &this->m_seRequests != &this->m_seRequestsAudioLoadPending
    && this->m_seRequestsAudioLoadPending._Mypair._Myval2._Mysize )
  {
    std::list<extension::SoundManager::SERequest>::_Splice_same(
      &this->m_seRequests,
      (std::_List_const_iterator<std::_List_val<std::_List_simple_types<extension::SoundManager::SERequest> > >)this->m_seRequests._Mypair._Myval2._Myhead,
      &this->m_seRequestsAudioLoadPending,
      (std::_List_const_iterator<std::_List_val<std::_List_simple_types<extension::SoundManager::SERequest> > >)this->m_seRequestsAudioLoadPending._Mypair._Myval2._Myhead->_Next,
      (std::_List_const_iterator<std::_List_val<std::_List_simple_types<extension::SoundManager::SERequest> > >)this->m_seRequestsAudioLoadPending._Mypair._Myval2._Myhead,
      this->m_seRequestsAudioLoadPending._Mypair._Myval2._Mysize);
  }
  LeaveCriticalSection(p_m_mutex);
}

void __fastcall extension::SoundManager::initialize(extension::SoundManager *this, CMediaManager *mediaManager)
{
  CMediaManager *m_mediaManager; // rdi
  CMediaManager *v5; // rax
  unsigned int *m_groupLocalPadOutputMaskUsers; // rcx
  __int64 v7; // rdx
  __int64 v8; // rdi
  unsigned int *v9; // rdi
  __int64 i; // rcx
  float **m_groupSEVolumeRefs; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  std::_Wrap_alloc<std::allocator<extension::exsound_detail::SoundBankMediaDefinition> > *v14; // r8
  std::integral_constant<bool,0> v15; // r9
  __int64 v16; // rdx
  std::_Wrap_alloc<std::allocator<extension::exsound_detail::SoundBankMediaDefinition> > *v17; // r8
  std::integral_constant<bool,0> v18; // r9
  __int64 v19; // rdx
  std::_Wrap_alloc<std::allocator<extension::exsound_detail::SoundBankMediaDefinition> > *v20; // r8
  std::integral_constant<bool,0> v21; // r9
  __int64 v22; // rcx
  __int64 ticks; // rax
  CMediaManager *v24; // [rsp+40h] [rbp+8h]

  extension::SoundManager::finalizePlayers(this);
  if ( this->m_isMediaManagerOwner )
  {
    m_mediaManager = this->m_mediaManager;
    if ( this->m_mediaManager )
    {
      CMediaManager::~CMediaManager(this->m_mediaManager);
      operator delete(m_mediaManager, 0x938ui64);
    }
  }
  this->m_mediaManager = 0i64;
  this->m_isMediaManagerOwner = 0;
  if ( mediaManager )
  {
    this->m_mediaManager = mediaManager;
  }
  else
  {
    v24 = (CMediaManager *)operator new(0x938ui64);
    CMediaManager::CMediaManager(v24);
    this->m_mediaManager = v5;
    this->m_isMediaManagerOwner = 1;
  }
  this->m_debugIsDisableAllRequest = 0;
  m_groupLocalPadOutputMaskUsers = this->m_groupLocalPadOutputMaskUsers;
  v7 = 0i64;
  v8 = 24i64;
  if ( this->m_groupLocalPadOutputMaskUsers > (unsigned int *)&this->m_vecListenerPosition )
    v8 = 0i64;
  if ( this->m_groupLocalPadOutputMaskUsers <= (unsigned int *)&this->m_vecListenerPosition )
  {
    do
    {
      *m_groupLocalPadOutputMaskUsers++ = 0;
      ++v7;
    }
    while ( v7 != v8 );
  }
  this->m_groupPlayerLimits[0] = 0;
  v9 = &this->m_groupPlayerLimits[1];
  for ( i = 23i64; i; --i )
    *v9++ = 1;
  m_groupSEVolumeRefs = this->m_groupSEVolumeRefs;
  v12 = 3i64;
  do
  {
    *m_groupSEVolumeRefs = 0i64;
    m_groupSEVolumeRefs[1] = 0i64;
    m_groupSEVolumeRefs[2] = 0i64;
    m_groupSEVolumeRefs += 8;
    *(m_groupSEVolumeRefs - 5) = 0i64;
    *(m_groupSEVolumeRefs - 4) = 0i64;
    *(m_groupSEVolumeRefs - 3) = 0i64;
    *(m_groupSEVolumeRefs - 2) = 0i64;
    *(m_groupSEVolumeRefs - 1) = 0i64;
    --v12;
  }
  while ( v12 );
  this->m_bgmVolumeModulationRef = 0i64;
  extension::SoundManager::initializePlayers(this);
  this->m_masterVolumeSE = 1.0;
  this->m_masterVolumeBGM = 1.0;
  extension::SoundManager::ManagerRealtimeState::reset(&this->m_rtState);
  this->m_globalPadOutputMaskUsers = 0;
  this->m_lastBGMPlayer = 0i64;
  extension::SoundManager::BGMRequest::clear(&this->m_bgmRequest, v13, v14, v15);
  std::list<extension::SoundManager::SERequest>::clear(&this->m_seRequests, v16, v17, v18);
  std::list<extension::SoundManager::SERequest>::clear(&this->m_seRequestsAudioLoadPending, v19, v20, v21);
  ticks = Xtime_get_ticks(v22);
  if ( !ticks )
    ticks = 123456789i64;
  extension::SoundManager::s_randomState = ticks;
}

void __fastcall extension::SoundManager::initializePlayers(extension::SoundManager *this)
{
  int v2; // esi
  extension::SoundManager::ManagerRealtimeState *p_m_rtState; // r12
  __int64 v4; // rbp
  extension::SoundManager::Player *Myval2; // r14
  CMediaManager *m_mediaManager; // rbx
  unsigned __int64 v7; // rdx
  CAudioPresenter *v8; // rbx
  CAudioPresenter *v9; // rax
  char *v10; // [rsp+68h] [rbp+10h]

  v2 = 0;
  p_m_rtState = &this->m_rtState;
  v4 = 0i64;
  do
  {
    Myval2 = this->m_players._Mypair._Myval2;
    m_mediaManager = this->m_mediaManager;
    Myval2[v4].m_rtStateRef = p_m_rtState;
    v10 = (char *)operator new(0x248ui64);
    *(_QWORD *)(v10 + 52) = 0i64;
    *(_QWORD *)(v10 + 60) = 0i64;
    *(_QWORD *)(v10 + 68) = 0i64;
    *(_QWORD *)(v10 + 76) = 0i64;
    *((_DWORD *)v10 + 21) = 0;
    InitializeCriticalSection((LPCRITICAL_SECTION)(v10 + 188));
    *((_DWORD *)v10 + 63) = 0;
    CAudioPresenter::initialize((CAudioPresenter *)v10, m_mediaManager);
    v8 = Myval2[v4].m_presenter._Mypair._Myval2;
    Myval2[v4].m_presenter._Mypair._Myval2 = (CAudioPresenter *)v10;
    if ( v8 )
    {
      CAudioPresenter::finalize(v8, v7);
      DeleteCriticalSection((LPCRITICAL_SECTION)&v8->m_sound_mutex);
      operator delete(v8, 0x248ui64);
    }
    v9 = Myval2[v4].m_presenter._Mypair._Myval2;
    if ( v2 >= 0 )
    {
      v9->m_PlayerInfo.port = v2;
      *(_QWORD *)&v9->m_UserIndex = 0i64;
    }
    ++v2;
    ++v4;
  }
  while ( v2 < 32 );
}

bool __fastcall extension::SoundManager::Player::isLockPeriod(extension::SoundManager::Player *this)
{
  extension::SoundManager::Player *v1; // r8
  float v2; // xmm0_4
  bool result; // al

  v1 = this;
  result = 0;
  if ( this->m_soundSource.m_elementDef.m_ptr )
  {
    v2 = (this->m_playerFlags & 0x40000000) != 0 ? this->m_pauseTotalTime : CAudioPresenter::getCurrentTotalTime(this->m_presenter._Mypair._Myval2);
    if ( v1->m_lockTime >= v2 )
      return 1;
  }
  return result;
}

bool __fastcall extension::exsound_detail::SoundChannelDefinition::isOutSurround(
        extension::exsound_detail::SoundChannelDefinition *this)
{
  return this->m_frontL > 0.0
      || this->m_frontR > 0.0
      || this->m_frontC > 0.0
      || this->m_LFE > 0.0
      || this->m_surroundL > 0.0
      || this->m_surroundR > 0.0
      || this->m_backL > 0.0
      || this->m_backR > 0.0;
}

char __fastcall extension::SoundManager::isPlayingSE(
        extension::SoundManager *this,
        const extension::SoundSource *source,
        const extension::SoundManager::SEPlayParams *params)
{
  std::_List_node<extension::SoundManager::SERequest,void *> *Myhead; // rbx
  std::_List_node<extension::SoundManager::SERequest,void *> *v8; // rcx
  std::_List_node<extension::SoundManager::SERequest,void *> *Next; // rax
  unsigned int m_playGroup; // edx
  const extension::exsound_detail::SoundBankElementDefinition *m_ptr; // rdx
  extension::SoundManager::Player *Myval2; // r8
  __int64 v13; // rcx
  const extension::exsound_detail::SoundBankElementDefinition *v14; // rdx
  char v15; // bl
  __int64 v16; // rdx
  std::_Wrap_alloc<std::allocator<extension::exsound_detail::SoundBankMediaDefinition> > *v17; // r8
  std::integral_constant<bool,0> v18; // r9
  __int64 v19; // rdx
  extension::SoundManager::SERequest result; // [rsp+28h] [rbp-79h] BYREF
  extension::SoundManager::SERequestFilter v21; // [rsp+78h] [rbp-29h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+C8h] [rbp+27h]
  int v23; // [rsp+D0h] [rbp+2Fh]
  __int64 v24; // [rsp+D8h] [rbp+37h]
  std::_List_iterator<std::_List_val<std::_List_simple_types<extension::SoundManager::SERequest> > > v25; // [rsp+110h] [rbp+6Fh] BYREF

  v24 = -2i64;
  if ( !source->m_elementDef.m_ptr || (source->m_soundFlags & 8) != 0 )
    return 0;
  extension::SoundManager::MakeSERequestPlay(&result, source, params);
  lpCriticalSection = (LPCRITICAL_SECTION)&this->m_mutex;
  v23 = 1;
  EnterCriticalSection((LPCRITICAL_SECTION)&this->m_mutex);
  v21.m_pattern.m_tag = result.m_tag;
  v21.m_pattern.m_runtimeEffector.m_ptr = result.m_runtimeEffector.m_ptr;
  if ( result.m_runtimeEffector.m_ptr )
    _InterlockedExchangeAdd64((volatile signed __int64 *)result.m_runtimeEffector.m_ptr, 1ui64);
  v21.m_pattern.m_soundSource.m_elementDef.m_ptr = result.m_soundSource.m_elementDef.m_ptr;
  if ( result.m_soundSource.m_elementDef.m_ptr )
    _InterlockedExchangeAdd64((volatile signed __int64 *)result.m_soundSource.m_elementDef.m_ptr, 1ui64);
  v21.m_pattern.m_soundSource.m_sound.m_isNoCache = result.m_soundSource.m_sound.m_isNoCache;
  v21.m_pattern.m_soundSource.m_sound.m_body.m_ptr = result.m_soundSource.m_sound.m_body.m_ptr;
  if ( result.m_soundSource.m_sound.m_body.m_ptr )
    _InterlockedExchangeAdd64(
      (volatile signed __int64 *)&result.m_soundSource.m_sound.m_body.m_ptr->m_refCount.m_ptr->m_sharedCount,
      1ui64);
  v21.m_pattern.m_soundSource.m_lockTime = result.m_soundSource.m_lockTime;
  v21.m_pattern.m_soundSource.m_baseVolume = result.m_soundSource.m_baseVolume;
  v21.m_pattern.m_soundSource.m_pitchBendFrequencyScale = result.m_soundSource.m_pitchBendFrequencyScale;
  v21.m_pattern.m_soundSource.m_priority = result.m_soundSource.m_priority;
  v21.m_pattern.m_soundSource.m_soundFlags = result.m_soundSource.m_soundFlags;
  v21.m_pattern.m_soundSource.m_bStereoChange = result.m_soundSource.m_bStereoChange;
  v21.m_pattern.m_playGroup = result.m_playGroup;
  v21.m_pattern.m_userTag = result.m_userTag;
  v21.m_pattern.m_fadeTime = result.m_fadeTime;
  Myhead = this->m_seRequests._Mypair._Myval2._Myhead;
  if ( std::find_if<std::_List_iterator<std::_List_val<std::_List_simple_types<extension::SoundManager::SERequest>>>,extension::SoundManager::SERequestFilter>(
         &v25,
         (std::_List_iterator<std::_List_val<std::_List_simple_types<extension::SoundManager::SERequest> > >)Myhead->_Next,
         (std::_List_iterator<std::_List_val<std::_List_simple_types<extension::SoundManager::SERequest> > >)Myhead,
         &v21)->_Ptr == Myhead )
  {
    v8 = this->m_seRequests._Mypair._Myval2._Myhead;
    Next = v8->_Next;
    if ( v8->_Next != v8 )
    {
      do
      {
        if ( Next->_Myval.m_tag == Tag_Stop )
        {
          if ( source->m_elementDef.m_ptr )
          {
            m_playGroup = Next->_Myval.m_playGroup;
            if ( (params->m_playGroup == m_playGroup || m_playGroup == -1)
              && (Next->_Myval.m_userTag & params->m_userTag) == Next->_Myval.m_userTag )
            {
              m_ptr = Next->_Myval.m_soundSource.m_elementDef.m_ptr;
              if ( !m_ptr || source->m_elementDef.m_ptr == m_ptr )
                break;
            }
          }
        }
        Next = Next->_Next;
      }
      while ( Next != v8 );
      if ( Next != v8 )
      {
LABEL_29:
        v15 = 0;
        goto LABEL_30;
      }
    }
    Myval2 = this->m_players._Mypair._Myval2;
    v13 = 0i64;
    while ( 1 )
    {
      v14 = Myval2[v13].m_soundSource.m_elementDef.m_ptr;
      if ( v14 )
      {
        if ( (Myval2[v13].m_playerFlags & 2) != 0
          && v14 == source->m_elementDef.m_ptr
          && Myval2[v13].m_group == result.m_playGroup )
        {
          break;
        }
      }
      if ( ++v13 >= 32 )
        goto LABEL_29;
    }
  }
  v15 = 1;
LABEL_30:
  LeaveCriticalSection(lpCriticalSection);
  extension::SoundSource::~SoundSource(&result.m_soundSource, v16, v17, v18);
  extension::RefCountablePtr<extension::exsound_detail::RuntimeEffector>::~RefCountablePtr<extension::exsound_detail::RuntimeEffector>(
    &result.m_runtimeEffector,
    v19);
  return v15;
}

void __fastcall extension::SoundManager::pauseGroupSE(extension::SoundManager *this, unsigned int group, bool pause)
{
  std::_List_node<extension::SoundManager::SERequest,void *> *Myhead; // rsi
  std::_List_buy<extension::SoundManager::SERequest> *v5; // rcx
  std::_List_node<extension::SoundManager::SERequest,void *> *v6; // rax
  __int64 v7; // rdx
  std::_Wrap_alloc<std::allocator<extension::exsound_detail::SoundBankMediaDefinition> > *v8; // r8
  std::integral_constant<bool,0> v9; // r9
  __int64 v10; // rdx
  extension::SoundManager::SERequest v11; // [rsp+40h] [rbp-58h] BYREF

  if ( !this->m_debugIsDisableAllRequest && group < 0x18 )
  {
    extension::SoundManager::MakeSERequestPauseGroup(&v11, group, pause);
    EnterCriticalSection((LPCRITICAL_SECTION)&this->m_mutex);
    Myhead = this->m_seRequests._Mypair._Myval2._Myhead;
    v6 = std::_List_buy<extension::SoundManager::SERequest>::_Buynode<extension::SoundManager::SERequest const &>(
           v5,
           Myhead,
           Myhead->_Prev,
           &v11);
    if ( this->m_seRequests._Mypair._Myval2._Mysize == 0x2AAAAAAAAAAAAA9i64 )
      std::_Xlength_error("list<T> too long");
    ++this->m_seRequests._Mypair._Myval2._Mysize;
    Myhead->_Prev = v6;
    v6->_Prev->_Next = v6;
    LeaveCriticalSection((LPCRITICAL_SECTION)&this->m_mutex);
    extension::SoundSource::~SoundSource(&v11.m_soundSource, v7, v8, v9);
    extension::RefCountablePtr<extension::exsound_detail::RuntimeEffector>::~RefCountablePtr<extension::exsound_detail::RuntimeEffector>(
      &v11.m_runtimeEffector,
      v10);
  }
}

void __fastcall extension::SoundManager::Player::pausePlay(extension::SoundManager::Player *this)
{
  unsigned int m_playerFlags; // ecx
  float v3; // xmm1_4
  float *m_masterVolumeRef; // rax
  int *v5; // rax
  bool v6; // cc
  float v7; // xmm1_4
  CAudioPresenter *v8; // rcx
  float v9; // [rsp+30h] [rbp+8h] BYREF
  int v10; // [rsp+38h] [rbp+10h] BYREF

  m_playerFlags = this->m_playerFlags;
  if ( (m_playerFlags & 0x40000000) != 0 )
  {
    v3 = this->m_fadeLastVolume * this->m_baseVolume;
    m_masterVolumeRef = this->m_masterVolumeRef;
    this->m_playerFlags = m_playerFlags & 0xBFFFFFFF;
    v9 = v3;
    if ( m_masterVolumeRef )
    {
      v3 = v3 * *m_masterVolumeRef;
      v9 = v3;
    }
    v5 = (int *)&v9;
    v6 = v3 >= 1.0;
    v10 = 1065353216;
    v7 = 0.0;
    if ( v6 )
      v5 = &v10;
    if ( *(float *)v5 > 0.0 )
      v7 = *(float *)v5;
    extension::SoundManager::Player::setOutputVolume(this, v7);
    CAudioPresenter::setPauseTime(this->m_presenter._Mypair._Myval2, this->m_pauseTotalTime);
    if ( !CAudioPresenter::play(v8) )
      extension::SoundManager::Player::releaseSound(this);
    *(_QWORD *)&this->m_pauseTime = 0i64;
  }
}

void __fastcall extension::SoundManager::Player::pauseStop(extension::SoundManager::Player *this)
{
  CAudioPresenter *Myval2; // rax
  CMediaSound *m_Sound; // rcx
  float v4; // xmm1_4
  _SND_BANK_INFO *p_m_BankInfo; // rcx

  if ( (this->m_playerFlags & 0x40000000) == 0 )
  {
    Myval2 = this->m_presenter._Mypair._Myval2;
    m_Sound = Myval2->m_Sound;
    if ( m_Sound && (p_m_BankInfo = &m_Sound->m_BankInfo) != 0i64 && !Myval2->m_playend )
      v4 = (float)Myval2->bufferPtr / (float)((float)p_m_BankInfo->channel * p_m_BankInfo->freq);
    else
      v4 = 0.0;
    this->m_pauseTime = v4;
    this->m_pauseTotalTime = CAudioPresenter::getCurrentTotalTime(Myval2);
    CAudioPresenter::stop(this->m_presenter._Mypair._Myval2);
    this->m_playerFlags |= 0x40000000u;
  }
}

void __fastcall extension::SoundManager::Player::play(
        extension::SoundManager::Player *this,
        float fadeTime,
        float startTime)
{
  float v4; // xmm3_4
  float *v5; // rax
  float v6; // xmm1_4
  float *m_masterVolumeRef; // rax
  float *v8; // rax
  CAudioPresenter *v9; // rcx
  float v10; // [rsp+40h] [rbp+8h] BYREF
  int v11; // [rsp+58h] [rbp+20h] BYREF

  if ( this->m_soundSource.m_elementDef.m_ptr )
  {
    this->m_fadeLastTime = startTime;
    v4 = 0.0;
    this->m_fadeGoalVolume = 1.0;
    v5 = &v10;
    v11 = 0;
    v10 = fadeTime;
    if ( fadeTime <= 0.0 )
      v5 = (float *)&v11;
    this->m_fadeGoalTime = startTime + *v5;
    if ( fadeTime < 0.00000011920929 )
      this->m_fadeLastVolume = 1.0;
    v6 = this->m_fadeLastVolume * this->m_baseVolume;
    this->m_playerFlags &= ~0x40000000u;
    *(_QWORD *)&this->m_pauseTime = 0i64;
    m_masterVolumeRef = this->m_masterVolumeRef;
    v10 = v6;
    if ( m_masterVolumeRef )
    {
      v6 = v6 * *m_masterVolumeRef;
      v10 = v6;
    }
    v8 = &v10;
    v11 = 1065353216;
    if ( v6 >= 1.0 )
      v8 = (float *)&v11;
    if ( *v8 > 0.0 )
      v4 = *v8;
    extension::SoundManager::Player::setOutputVolume(this, v4);
    CAudioPresenter::setPauseTime(this->m_presenter._Mypair._Myval2, startTime);
    if ( !CAudioPresenter::play(v9) )
      extension::SoundManager::Player::releaseSound(this);
  }
}

bool __fastcall extension::SoundManager::playBGM(
        extension::SoundManager *this,
        const extension::SoundSource *source,
        float fadeTime,
        float startTime,
        bool bNonStop)
{
  std::_Wrap_alloc<std::allocator<extension::exsound_detail::SoundBankMediaDefinition> > *v5; // r8
  std::integral_constant<bool,0> v6; // r9
  bool result; // al

  if ( this->m_debugIsDisableAllRequest || !source->m_elementDef.m_ptr )
    return 0;
  if ( !this->m_bgmRequest.m_reserved || this->m_bgmRequest.m_soundSource.m_elementDef.m_ptr )
    this->m_bgmRequest.m_fadeOutTime = fadeTime;
  extension::SoundSource::operator=(&this->m_bgmRequest.m_soundSource, source, v5, v6);
  this->m_bgmRequest.m_nonStop = bNonStop;
  result = 1;
  this->m_bgmRequest.m_fadeInTime = fadeTime;
  this->m_bgmRequest.m_startTime = startTime;
  this->m_bgmRequest.m_pause = Pause_None;
  this->m_bgmRequest.m_reserved = 1;
  return result;
}

float __fastcall extension::SoundManager::Player::playPosition(extension::SoundManager::Player *this)
{
  CAudioPresenter *Myval2; // rax
  CMediaSound *m_Sound; // rcx
  _SND_BANK_INFO *p_m_BankInfo; // rcx

  if ( (this->m_playerFlags & 0x40000000) != 0 )
    return this->m_pauseTime;
  Myval2 = this->m_presenter._Mypair._Myval2;
  m_Sound = Myval2->m_Sound;
  if ( m_Sound && (p_m_BankInfo = &m_Sound->m_BankInfo) != 0i64 && !Myval2->m_playend )
    return (float)Myval2->bufferPtr / (float)((float)p_m_BankInfo->channel * p_m_BankInfo->freq);
  else
    return 0.0;
}

char __fastcall extension::SoundManager::playSE(
        extension::SoundManager *this,
        const extension::SoundSource *source,
        const extension::SoundManager::SEPlayParams *params)
{
  __int64 v5; // rdx
  std::_Wrap_alloc<std::allocator<extension::exsound_detail::SoundBankMediaDefinition> > *v6; // r8
  std::integral_constant<bool,0> v7; // r9
  __int64 v8; // rdx
  std::_List_node<extension::SoundManager::SERequest,void *> *Myhead; // rbx
  std::_List_buy<extension::SoundManager::SERequest> *v10; // rcx
  std::_List_node<extension::SoundManager::SERequest,void *> *v11; // rax
  __int64 v12; // rdx
  std::_Wrap_alloc<std::allocator<extension::exsound_detail::SoundBankMediaDefinition> > *v13; // r8
  std::integral_constant<bool,0> v14; // r9
  __int64 v15; // rdx
  extension::SoundManager::SERequestFilter v16; // [rsp+20h] [rbp-C8h] BYREF
  extension::SoundManager::SERequest v17; // [rsp+70h] [rbp-78h] BYREF
  LPCRITICAL_SECTION p_m_mutex; // [rsp+C0h] [rbp-28h]
  int v19; // [rsp+C8h] [rbp-20h]
  __int64 v20; // [rsp+D0h] [rbp-18h]

  v20 = -2i64;
  if ( this->m_debugIsDisableAllRequest || !source->m_elementDef.m_ptr || (source->m_soundFlags & 8) != 0 )
    return 0;
  extension::SoundManager::MakeSERequestPlay(&v17, source, params);
  p_m_mutex = (LPCRITICAL_SECTION)&this->m_mutex;
  v19 = 1;
  EnterCriticalSection((LPCRITICAL_SECTION)&this->m_mutex);
  v16.m_pattern.m_tag = v17.m_tag;
  v16.m_pattern.m_runtimeEffector.m_ptr = v17.m_runtimeEffector.m_ptr;
  if ( v17.m_runtimeEffector.m_ptr )
    _InterlockedExchangeAdd64((volatile signed __int64 *)v17.m_runtimeEffector.m_ptr, 1ui64);
  v16.m_pattern.m_soundSource.m_elementDef.m_ptr = v17.m_soundSource.m_elementDef.m_ptr;
  if ( v17.m_soundSource.m_elementDef.m_ptr )
    _InterlockedExchangeAdd64((volatile signed __int64 *)v17.m_soundSource.m_elementDef.m_ptr, 1ui64);
  v16.m_pattern.m_soundSource.m_sound.m_isNoCache = v17.m_soundSource.m_sound.m_isNoCache;
  v16.m_pattern.m_soundSource.m_sound.m_body.m_ptr = v17.m_soundSource.m_sound.m_body.m_ptr;
  if ( v17.m_soundSource.m_sound.m_body.m_ptr )
    _InterlockedExchangeAdd64(
      (volatile signed __int64 *)&v17.m_soundSource.m_sound.m_body.m_ptr->m_refCount.m_ptr->m_sharedCount,
      1ui64);
  v16.m_pattern.m_soundSource.m_lockTime = v17.m_soundSource.m_lockTime;
  *(_QWORD *)&v16.m_pattern.m_soundSource.m_baseVolume = *(_QWORD *)&v17.m_soundSource.m_baseVolume;
  v16.m_pattern.m_soundSource.m_priority = v17.m_soundSource.m_priority;
  v16.m_pattern.m_soundSource.m_soundFlags = v17.m_soundSource.m_soundFlags;
  v16.m_pattern.m_soundSource.m_bStereoChange = v17.m_soundSource.m_bStereoChange;
  v16.m_pattern.m_playGroup = v17.m_playGroup;
  v16.m_pattern.m_userTag = v17.m_userTag;
  v16.m_pattern.m_fadeTime = v17.m_fadeTime;
  std::list<extension::SoundManager::SERequest>::_Remove_if<extension::SoundManager::SERequestFilter>(
    &this->m_seRequests,
    &v16);
  extension::SoundSource::~SoundSource(&v16.m_pattern.m_soundSource, v5, v6, v7);
  extension::RefCountablePtr<extension::exsound_detail::RuntimeEffector>::~RefCountablePtr<extension::exsound_detail::RuntimeEffector>(
    &v16.m_pattern.m_runtimeEffector,
    v8);
  Myhead = this->m_seRequests._Mypair._Myval2._Myhead;
  v11 = std::_List_buy<extension::SoundManager::SERequest>::_Buynode<extension::SoundManager::SERequest const &>(
          v10,
          Myhead,
          Myhead->_Prev,
          &v17);
  if ( this->m_seRequests._Mypair._Myval2._Mysize == 0x2AAAAAAAAAAAAA9i64 )
    std::_Xlength_error("list<T> too long");
  ++this->m_seRequests._Mypair._Myval2._Mysize;
  Myhead->_Prev = v11;
  v11->_Prev->_Next = v11;
  LeaveCriticalSection(p_m_mutex);
  extension::SoundSource::~SoundSource(&v17.m_soundSource, v12, v13, v14);
  extension::RefCountablePtr<extension::exsound_detail::RuntimeEffector>::~RefCountablePtr<extension::exsound_detail::RuntimeEffector>(
    &v17.m_runtimeEffector,
    v15);
  return 1;
}

float __fastcall extension::SoundManager::Player::playTimeWeightiness(extension::SoundManager::Player *this)
{
  CAudioPresenter *Myval2; // rax
  CMediaSound *m_Sound; // r8
  float v4; // xmm1_4
  float m_lockTime; // xmm3_4
  float end; // xmm2_4

  Myval2 = this->m_presenter._Mypair._Myval2;
  m_Sound = Myval2->m_Sound;
  if ( m_Sound
    && Myval2 != (CAudioPresenter *)-88i64
    && (m_Sound->m_BankInfo.loop < 0 || Myval2->m_PlayerInfo.loopCount) )
  {
    return FLOAT_2_0;
  }
  if ( m_Sound )
  {
    if ( m_Sound == (CMediaSound *)-288i64 )
    {
      v4 = 0.0;
    }
    else if ( Myval2->m_playend )
    {
      v4 = 0.0;
    }
    else
    {
      v4 = (float)Myval2->bufferPtr / (float)((float)m_Sound->m_BankInfo.channel * m_Sound->m_BankInfo.freq);
    }
  }
  else
  {
    v4 = 0.0;
  }
  m_lockTime = this->m_lockTime;
  if ( m_lockTime >= v4 )
    return *(float *)&FLOAT_1_0;
  if ( m_Sound )
    end = m_Sound->m_BankInfo.end;
  else
    end = 0.0;
  if ( v4 < end )
    return (float)(end - v4) / (float)(end - m_lockTime);
  else
    return 0.0;
}

void __fastcall extension::SoundManager::Player::releaseSound(
        extension::SoundManager::Player *this,
        __int64 a2,
        std::_Wrap_alloc<std::allocator<extension::exsound_detail::SoundBankMediaDefinition> > *a3,
        std::integral_constant<bool,0> a4)
{
  CAudioPresenter *Myval2; // rbx
  extension::exsound_detail::SoundBankElementDefinition *m_ptr; // rbx
  __int64 v7; // rdx
  extension::exsound_detail::RuntimeEffector *v8; // rbx
  std::function<float __cdecl(void)> *v9; // rcx

  Myval2 = this->m_presenter._Mypair._Myval2;
  if ( Myval2 && Myval2->m_Sound )
  {
    CAudioPresenter::stop(Myval2);
    Myval2->m_Sound = 0i64;
  }
  m_ptr = (extension::exsound_detail::SoundBankElementDefinition *)this->m_soundSource.m_elementDef.m_ptr;
  this->m_soundSource.m_elementDef.m_ptr = 0i64;
  if ( m_ptr && _InterlockedExchangeAdd64((volatile signed __int64 *)m_ptr, 0xFFFFFFFFFFFFFFFFui64) == 1 )
  {
    extension::exsound_detail::SoundBankElementDefinition::~SoundBankElementDefinition(m_ptr, a2, a3, a4);
    operator delete(m_ptr, 0x68ui64);
  }
  extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::reset(&this->m_soundSource.m_sound);
  this->m_masterVolumeRef = 0i64;
  *(_QWORD *)&this->m_playerFlags = 0i64;
  *(_QWORD *)&this->m_priority = 0i64;
  v8 = this->m_runtimeEffector.m_ptr;
  this->m_runtimeEffector.m_ptr = 0i64;
  if ( v8 && _InterlockedExchangeAdd64((volatile signed __int64 *)v8, 0xFFFFFFFFFFFFFFFFui64) == 1 )
  {
    v9 = (std::function<float __cdecl(void)> *)v8->getPanPositionFunc._Mystorage._Ptrs[7];
    if ( v9 )
    {
      LOBYTE(v7) = v9 != &v8->getPanPositionFunc;
      ((void (__fastcall *)(std::function<float __cdecl(void)> *, __int64))v9->_Mystorage._Ptrs[0][4].__vftable)(v9, v7);
      v8->getPanPositionFunc._Mystorage._Ptrs[7] = 0i64;
    }
    operator delete(v8, 0x60ui64);
  }
  *(_QWORD *)&this->m_baseVolume = 0i64;
  *(_QWORD *)&this->m_fadeGoalTime = 0i64;
  *(_QWORD *)&this->m_fadeLastTime = 0i64;
  *(_QWORD *)&this->m_lastOutputVolume = 0i64;
  this->m_pauseTotalTime = 0.0;
}

void __fastcall extension::SoundManager::ManagerRealtimeState::reset(
        extension::SoundManager::ManagerRealtimeState *this)
{
  this->listener3D.Dirty = 0;
  *(_QWORD *)&this->listener3D.Position.x = 0i64;
  *(_QWORD *)&this->listener3D.Position.z = 0i64;
  this->listener3D.Direction.y = 0.0;
  this->listener3D.Direction.z = -1.0;
  this->reverb.Attenuation = 0.5;
  this->reverb.DelayTimeMsec = 200;
  this->reverb.RepeatCount = 10;
  *(_QWORD *)&this->reverb.ReflectionAttenuation = 1056964608i64;
  this->reverb.Dirty = 0;
  this->stageReverb.Attenuation = 0.5;
  *(_QWORD *)&this->stageReverb.DelayTimeMsec = 1i64;
  this->stageReverb.Dirty = 1;
  this->isGlobalReverb = 0;
}

const extension::RefCountablePtr<extension::exsound_detail::RuntimeEffector> *__fastcall extension::SoundManager::Player::runtimeEffector(
        extension::SoundManager::Player *this,
        const extension::RefCountablePtr<extension::exsound_detail::RuntimeEffector> *result)
{
  extension::exsound_detail::RuntimeEffector *m_ptr; // r8

  m_ptr = this->m_runtimeEffector.m_ptr;
  result->m_ptr = m_ptr;
  if ( m_ptr )
    _InterlockedExchangeAdd64((volatile signed __int64 *)m_ptr, 1ui64);
  return result;
}

void __fastcall extension::SoundManager::ReverbState::set(
        extension::SoundManager::ReverbState *this,
        int attenuationPercent,
        int delayTimeMsec,
        int repeatCount,
        int reflectionAttenuationPercent,
        int fluctuationTimeMsec)
{
  int *v7; // rax
  bool v8; // r11
  float Attenuation; // xmm0_4
  int v10; // edx
  unsigned int v11; // eax
  int v12; // edx
  int v13; // er8
  __m128i v14; // xmm2
  int *v15; // rax
  float v16; // xmm2_4
  int v17; // eax
  int *p_reflectionAttenuationPercent; // rax
  float v19; // xmm2_4
  int v20; // ecx
  int v21; // eax
  int v22; // ecx
  float v23; // xmm1_4
  int v24; // [rsp+8h] [rbp+8h] BYREF
  int v25; // [rsp+10h] [rbp+10h] BYREF
  int v26; // [rsp+20h] [rbp+20h] BYREF

  v24 = 100;
  v25 = attenuationPercent;
  v26 = repeatCount;
  v7 = &v25;
  if ( attenuationPercent >= 100 )
    v7 = &v24;
  v8 = 0;
  Attenuation = this->Attenuation;
  v10 = *v7;
  v24 = 30;
  v11 = 0;
  if ( v10 > 0 )
    v11 = v10;
  v12 = 0;
  if ( delayTimeMsec > 0 )
    v12 = delayTimeMsec;
  v13 = 0;
  v14 = _mm_cvtsi32_si128(v11);
  v15 = &v26;
  if ( repeatCount >= 30 )
    v15 = &v24;
  LODWORD(v16) = _mm_cvtepi32_ps(v14).m128_u32[0];
  v17 = *v15;
  v24 = 100;
  if ( v17 > 0 )
    v13 = v17;
  p_reflectionAttenuationPercent = &reflectionAttenuationPercent;
  v19 = v16 / 100.0;
  if ( reflectionAttenuationPercent >= 100 )
    p_reflectionAttenuationPercent = &v24;
  v20 = *p_reflectionAttenuationPercent;
  v21 = 0;
  if ( v20 > 0 )
    v21 = v20;
  v22 = 0;
  if ( fluctuationTimeMsec > 0 )
    v22 = fluctuationTimeMsec;
  v23 = (float)v21 / 100.0;
  if ( Attenuation != v19
    || this->DelayTimeMsec != v12
    || this->RepeatCount != v13
    || this->ReflectionAttenuation != v23
    || this->FluctuationTimeMsec != v22 )
  {
    v8 = 1;
  }
  this->Attenuation = v19;
  this->ReflectionAttenuation = v23;
  this->Dirty = v8;
  this->DelayTimeMsec = v12;
  this->RepeatCount = v13;
  this->FluctuationTimeMsec = v22;
}

void __fastcall extension::SoundManager::Player::setOutputVolume(extension::SoundManager::Player *this, float vol)
{
  unsigned int m_soundFlags; // eax
  extension::exsound_detail::RuntimeEffector *m_ptr; // rax
  float m_pan3D; // xmm6_4
  float v6; // xmm6_4
  float v7; // xmm9_4
  float v8; // xmm0_4
  const extension::exsound_detail::SoundBankElementDefinition *v9; // rax
  float v10; // xmm4_4
  float *p_m_frontL; // rax
  CAudioPresenter *Myval2; // rcx
  float v13; // xmm3_4
  float v14; // xmm8_4
  extension::exsound_detail::RuntimeEffector *v15; // rax
  __int64 v16; // xmm0_8
  float z; // ecx
  CAudioPresenter *v18; // rax
  const extension::SoundManager::ManagerRealtimeState *m_rtStateRef; // rax
  CAudioPresenter *v20; // rcx
  const extension::SoundManager::ManagerRealtimeState *v21; // rax
  CAudioPresenter *v22; // rcx
  const extension::exsound_detail::SoundBankElementDefinition *v23; // rax
  float *v24; // rax
  CAudioPresenter *v25; // rcx
  float v26; // xmm3_4
  float v27; // xmm4_4
  float v28; // xmm5_4
  float v29; // xmm6_4
  float v30; // xmm7_4
  float v31; // xmm8_4
  float v32; // xmm0_4
  float v33; // xmm1_4

  m_soundFlags = this->m_soundSource.m_soundFlags;
  this->m_lastOutputVolume = vol;
  if ( (m_soundFlags & 0x20) != 0 )
  {
    m_ptr = this->m_runtimeEffector.m_ptr;
    if ( m_ptr )
      m_pan3D = m_ptr->m_pan3D;
    else
      m_pan3D = 0.0;
    v6 = (float)((float)((float)(m_pan3D + 1.0) * 0.5) * 3.1415927) * 0.5;
    cosf(v6);
    v7 = fmaxf(v6, 0.0);
    v8 = sinf(v6);
    v9 = this->m_soundSource.m_elementDef.m_ptr;
    v10 = fmaxf(v8, 0.0);
    if ( v9 )
      p_m_frontL = &v9->m_channelDef.m_frontL;
    else
      p_m_frontL = (float *)&unk_140A5C658;
    Myval2 = this->m_presenter._Mypair._Myval2;
    v13 = (float)((float)(p_m_frontL[1] * 0.78539819) + (float)(*p_m_frontL * 0.78539819)) * vol;
    v14 = (float)(vol * p_m_frontL[3]) * 4096.0;
    Myval2->m_volume._7_1ch.FrontLeft = (int)(float)(fminf(v13 * v7, 1.0) * 4096.0);
    Myval2->m_volume._7_1ch.FrontRight = (int)(float)(fminf(v13 * v10, 1.0) * 4096.0);
    Myval2->m_volume._7_1ch.FrontCenter = (int)(float)(fminf(v13 * 0.0, 1.0) * 4096.0);
    Myval2->m_volume._7_1ch.Subwoofer = (int)v14;
    *((_QWORD *)&Myval2->m_volume._1ch + 2) = 0i64;
    *((_QWORD *)&Myval2->m_volume._1ch + 3) = 0i64;
  }
  else if ( (m_soundFlags & 0x10) != 0 && (v15 = this->m_runtimeEffector.m_ptr) != 0i64 && v15->m_useSoundPosition )
  {
    v16 = *(_QWORD *)&v15->m_soundObjectPosition.x;
    z = v15->m_soundObjectPosition.z;
    this->m_presenter._Mypair._Myval2->m_3DSound.fBaseVolume = vol;
    v18 = this->m_presenter._Mypair._Myval2;
    *(_QWORD *)&v18->m_3DSound.vSoundPos.x = v16;
    v18->m_3DSound.vSoundPos.z = z;
    m_rtStateRef = this->m_rtStateRef;
    if ( m_rtStateRef )
    {
      v20 = this->m_presenter._Mypair._Myval2;
      *(_QWORD *)&v20->m_3DSound.vListenerPos.x = *(_QWORD *)&m_rtStateRef->listener3D.Position.x;
      v20->m_3DSound.vListenerPos.z = m_rtStateRef->listener3D.Position.z;
      v21 = this->m_rtStateRef;
      v22 = this->m_presenter._Mypair._Myval2;
      *(_QWORD *)&v22->m_3DSound.vListenerDic.x = *(_QWORD *)&v21->listener3D.Direction.x;
      v22->m_3DSound.vListenerDic.z = v21->listener3D.Direction.z;
    }
    CAudioPresenter::setVolume3D(this->m_presenter._Mypair._Myval2);
  }
  else
  {
    v23 = this->m_soundSource.m_elementDef.m_ptr;
    if ( v23 )
      v24 = &v23->m_channelDef.m_frontL;
    else
      v24 = (float *)&unk_140A5C658;
    v25 = this->m_presenter._Mypair._Myval2;
    v26 = vol * v24[2];
    v27 = vol * v24[3];
    v28 = vol * v24[4];
    v29 = vol * v24[5];
    v30 = vol * v24[6];
    v31 = vol * v24[7];
    v32 = (float)(vol * *v24) * 4096.0;
    v33 = (float)(vol * v24[1]) * 4096.0;
    v25->m_volume._7_1ch.FrontLeft = (int)v32;
    v25->m_volume._7_1ch.FrontRight = (int)v33;
    v25->m_volume._7_1ch.FrontCenter = (int)(float)(v26 * 4096.0);
    v25->m_volume._7_1ch.Subwoofer = (int)(float)(v27 * 4096.0);
    v25->m_volume._7_1ch.SurroundL = (int)(float)(v28 * 4096.0);
    v25->m_volume._7_1ch.SurroundR = (int)(float)(v29 * 4096.0);
    v25->m_volume._7_1ch.SurroundBackL = (int)(float)(v30 * 4096.0);
    v25->m_volume._7_1ch.SurroundBackR = (int)(float)(v31 * 4096.0);
  }
}

void __fastcall extension::SoundManager::Player::stop(
        extension::SoundManager::Player *this,
        float fadeTime,
        __int64 a3,
        std::integral_constant<bool,0> a4)
{
  __int64 v4; // rdx
  unsigned int m_playerFlags; // ecx
  CAudioPresenter *Myval2; // rcx
  __int64 v8; // r8
  float CurrentTotalTime; // xmm0_4
  float *v10; // rax
  float v11; // xmm4_4
  float v12; // [rsp+30h] [rbp+8h] BYREF
  int v13; // [rsp+40h] [rbp+18h] BYREF

  if ( this->m_soundSource.m_elementDef.m_ptr )
  {
    if ( fadeTime < 0.00000011920929 || (m_playerFlags = this->m_playerFlags, (m_playerFlags & 0x40000000) != 0) )
    {
      extension::SoundManager::Player::releaseSound(
        this,
        v4,
        (std::_Wrap_alloc<std::allocator<extension::exsound_detail::SoundBankMediaDefinition> > *)this,
        a4);
    }
    else
    {
      this->m_fadeGoalVolume = 0.0;
      this->m_playerFlags = m_playerFlags | 0x80000000;
      Myval2 = this->m_presenter._Mypair._Myval2;
      v12 = fadeTime;
      CurrentTotalTime = CAudioPresenter::getCurrentTotalTime(Myval2);
      *(float *)(v8 + 56) = CurrentTotalTime;
      v10 = &v12;
      v13 = 0;
      if ( v11 <= 0.0 )
        v10 = (float *)&v13;
      *(float *)(v8 + 48) = CurrentTotalTime + *v10;
    }
  }
}

void __fastcall extension::SoundManager::stopBGM(
        extension::SoundManager *this,
        float fadeTime,
        std::_Wrap_alloc<std::allocator<extension::exsound_detail::SoundBankMediaDefinition> > *a3,
        std::integral_constant<bool,0> a4)
{
  __int64 v4; // rdx
  extension::exsound_detail::SoundBankElementDefinition *m_ptr; // rbx

  if ( !this->m_debugIsDisableAllRequest )
  {
    m_ptr = (extension::exsound_detail::SoundBankElementDefinition *)this->m_bgmRequest.m_soundSource.m_elementDef.m_ptr;
    this->m_bgmRequest.m_soundSource.m_elementDef.m_ptr = 0i64;
    if ( m_ptr )
    {
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)m_ptr, 0xFFFFFFFFFFFFFFFFui64) == 1 )
      {
        extension::exsound_detail::SoundBankElementDefinition::~SoundBankElementDefinition(m_ptr, v4, a3, a4);
        operator delete(m_ptr, 0x68ui64);
      }
    }
    extension::BasicFutureObject<CMediaSound,extension::exsound_detail::FutureSoundOption>::reset(&this->m_bgmRequest.m_soundSource.m_sound);
    *(_QWORD *)&this->m_bgmRequest.m_fadeInTime = 0i64;
    this->m_bgmRequest.m_pause = Pause_None;
    this->m_bgmRequest.m_fadeOutTime = fadeTime;
    *(_WORD *)&this->m_bgmRequest.m_reserved = 1;
  }
}

char __fastcall extension::SoundManager::stopGroupLimitSEPlayer(
        extension::SoundManager *this,
        unsigned int group,
        int priority)
{
  unsigned int v3; // er9
  __int64 v6; // r8
  extension::SoundManager::Player *Myval2; // rcx
  char *v8; // r11
  __int64 v9; // rdx
  extension::SoundManager::Player *v10; // rbx
  extension::SoundManager::Player *v11; // r10
  int m_priority; // eax
  float CurrentTotalTime; // xmm0_4
  float v14; // xmm0_4
  float v15; // xmm4_4
  char v16[256]; // [rsp+20h] [rbp-118h] BYREF

  v3 = group;
  if ( group >= 0x18 )
    return 1;
  v6 = this->m_groupPlayerLimits[group];
  if ( !(_DWORD)v6 )
    return 1;
  Myval2 = this->m_players._Mypair._Myval2;
  v8 = v16;
  v9 = 32i64;
  do
  {
    if ( Myval2->m_soundSource.m_elementDef.m_ptr && (Myval2->m_playerFlags & 2) != 0 && Myval2->m_group == v3 )
    {
      *(_QWORD *)v8 = Myval2;
      v8 += 8;
    }
    ++Myval2;
    --v9;
  }
  while ( v9 );
  if ( (v8 - v16) >> 3 < v6 )
    return 1;
  v10 = 0i64;
  if ( v16 >= v8 )
    return 0;
  do
  {
    v11 = (extension::SoundManager::Player *)*((_QWORD *)v8 - 1);
    v8 -= 8;
    m_priority = v11->m_priority;
    if ( m_priority <= priority )
    {
      if ( m_priority != priority
        || !v11->m_soundSource.m_elementDef.m_ptr
        || ((v11->m_playerFlags & 0x40000000) == 0 ? (CurrentTotalTime = CAudioPresenter::getCurrentTotalTime(v11->m_presenter._Mypair._Myval2)) : (CurrentTotalTime = v11->m_pauseTotalTime),
            v11->m_lockTime < CurrentTotalTime) )
      {
        if ( !v10
          || (extension::SoundManager::Player::playTimeWeightiness(v11),
              v14 = extension::SoundManager::Player::playTimeWeightiness(v10),
              v14 > v15) )
        {
          v10 = v11;
        }
      }
    }
  }
  while ( v8 > v16 );
  if ( !v10 )
    return 0;
  extension::SoundManager::Player::stop(v10, 0.0, v6, (std::integral_constant<bool,0>)v3);
  return 1;
}

void __fastcall extension::SoundManager::stopGroupSE(extension::SoundManager *this, unsigned int group)
{
  __int64 v3; // rdx
  std::_Wrap_alloc<std::allocator<extension::exsound_detail::SoundBankMediaDefinition> > *v4; // r8
  std::integral_constant<bool,0> v5; // r9
  __int64 v6; // rdx
  std::_List_node<extension::SoundManager::SERequest,void *> *Myhead; // rbx
  std::_List_buy<extension::SoundManager::SERequest> *v8; // rcx
  std::_List_node<extension::SoundManager::SERequest,void *> *v9; // rax
  __int64 v10; // rdx
  std::_Wrap_alloc<std::allocator<extension::exsound_detail::SoundBankMediaDefinition> > *v11; // r8
  std::integral_constant<bool,0> v12; // r9
  __int64 v13; // rdx
  extension::SoundManager::SERequestFilter v14; // [rsp+20h] [rbp-C8h] BYREF
  extension::SoundManager::SERequest v15; // [rsp+70h] [rbp-78h] BYREF
  LPCRITICAL_SECTION p_m_mutex; // [rsp+C0h] [rbp-28h]
  int v17; // [rsp+C8h] [rbp-20h]
  __int64 v18; // [rsp+D0h] [rbp-18h]

  v18 = -2i64;
  if ( !this->m_debugIsDisableAllRequest && group < 0x18 )
  {
    extension::SoundManager::MakeSERequestStopGroup(&v15, group);
    p_m_mutex = (LPCRITICAL_SECTION)&this->m_mutex;
    v17 = 1;
    EnterCriticalSection((LPCRITICAL_SECTION)&this->m_mutex);
    v14.m_pattern.m_tag = v15.m_tag;
    v14.m_pattern.m_runtimeEffector.m_ptr = v15.m_runtimeEffector.m_ptr;
    if ( v15.m_runtimeEffector.m_ptr )
      _InterlockedExchangeAdd64((volatile signed __int64 *)v15.m_runtimeEffector.m_ptr, 1ui64);
    v14.m_pattern.m_soundSource.m_elementDef.m_ptr = v15.m_soundSource.m_elementDef.m_ptr;
    if ( v15.m_soundSource.m_elementDef.m_ptr )
      _InterlockedExchangeAdd64((volatile signed __int64 *)v15.m_soundSource.m_elementDef.m_ptr, 1ui64);
    v14.m_pattern.m_soundSource.m_sound.m_isNoCache = v15.m_soundSource.m_sound.m_isNoCache;
    v14.m_pattern.m_soundSource.m_sound.m_body.m_ptr = v15.m_soundSource.m_sound.m_body.m_ptr;
    if ( v15.m_soundSource.m_sound.m_body.m_ptr )
      _InterlockedExchangeAdd64(
        (volatile signed __int64 *)&v15.m_soundSource.m_sound.m_body.m_ptr->m_refCount.m_ptr->m_sharedCount,
        1ui64);
    v14.m_pattern.m_soundSource.m_lockTime = v15.m_soundSource.m_lockTime;
    *(_QWORD *)&v14.m_pattern.m_soundSource.m_baseVolume = *(_QWORD *)&v15.m_soundSource.m_baseVolume;
    v14.m_pattern.m_soundSource.m_priority = v15.m_soundSource.m_priority;
    v14.m_pattern.m_soundSource.m_soundFlags = v15.m_soundSource.m_soundFlags;
    v14.m_pattern.m_soundSource.m_bStereoChange = v15.m_soundSource.m_bStereoChange;
    v14.m_pattern.m_playGroup = v15.m_playGroup;
    v14.m_pattern.m_userTag = v15.m_userTag;
    v14.m_pattern.m_fadeTime = v15.m_fadeTime;
    std::list<extension::SoundManager::SERequest>::_Remove_if<extension::SoundManager::SERequestFilter>(
      &this->m_seRequests,
      &v14);
    extension::SoundSource::~SoundSource(&v14.m_pattern.m_soundSource, v3, v4, v5);
    extension::RefCountablePtr<extension::exsound_detail::RuntimeEffector>::~RefCountablePtr<extension::exsound_detail::RuntimeEffector>(
      &v14.m_pattern.m_runtimeEffector,
      v6);
    Myhead = this->m_seRequests._Mypair._Myval2._Myhead;
    v9 = std::_List_buy<extension::SoundManager::SERequest>::_Buynode<extension::SoundManager::SERequest const &>(
           v8,
           Myhead,
           Myhead->_Prev,
           &v15);
    if ( this->m_seRequests._Mypair._Myval2._Mysize == 0x2AAAAAAAAAAAAA9i64 )
      std::_Xlength_error("list<T> too long");
    ++this->m_seRequests._Mypair._Myval2._Mysize;
    Myhead->_Prev = v9;
    v9->_Prev->_Next = v9;
    LeaveCriticalSection(p_m_mutex);
    extension::SoundSource::~SoundSource(&v15.m_soundSource, v10, v11, v12);
    extension::RefCountablePtr<extension::exsound_detail::RuntimeEffector>::~RefCountablePtr<extension::exsound_detail::RuntimeEffector>(
      &v15.m_runtimeEffector,
      v13);
  }
}

void __fastcall extension::SoundManager::stopSE(extension::SoundManager *this, float fadeTime)
{
  __int64 v3; // rdx
  std::_Wrap_alloc<std::allocator<extension::exsound_detail::SoundBankMediaDefinition> > *v4; // r8
  std::integral_constant<bool,0> v5; // r9
  std::_List_node<extension::SoundManager::SERequest,void *> *Myhead; // rsi
  std::_List_buy<extension::SoundManager::SERequest> *v7; // rcx
  std::_List_node<extension::SoundManager::SERequest,void *> *v8; // rax
  __int64 v9; // rdx
  std::_Wrap_alloc<std::allocator<extension::exsound_detail::SoundBankMediaDefinition> > *v10; // r8
  std::integral_constant<bool,0> v11; // r9
  __int64 v12; // rdx
  extension::SoundManager::SERequest v13; // [rsp+40h] [rbp-58h] BYREF

  if ( !this->m_debugIsDisableAllRequest )
  {
    extension::SoundManager::MakeSERequestStopAll(&v13, fadeTime);
    EnterCriticalSection((LPCRITICAL_SECTION)&this->m_mutex);
    std::list<extension::SoundManager::SERequest>::clear(&this->m_seRequests, v3, v4, v5);
    Myhead = this->m_seRequests._Mypair._Myval2._Myhead;
    v8 = std::_List_buy<extension::SoundManager::SERequest>::_Buynode<extension::SoundManager::SERequest const &>(
           v7,
           Myhead,
           Myhead->_Prev,
           &v13);
    if ( this->m_seRequests._Mypair._Myval2._Mysize == 0x2AAAAAAAAAAAAA9i64 )
      std::_Xlength_error("list<T> too long");
    ++this->m_seRequests._Mypair._Myval2._Mysize;
    Myhead->_Prev = v8;
    v8->_Prev->_Next = v8;
    LeaveCriticalSection((LPCRITICAL_SECTION)&this->m_mutex);
    extension::SoundSource::~SoundSource(&v13.m_soundSource, v9, v10, v11);
    extension::RefCountablePtr<extension::exsound_detail::RuntimeEffector>::~RefCountablePtr<extension::exsound_detail::RuntimeEffector>(
      &v13.m_runtimeEffector,
      v12);
  }
}

char __fastcall extension::SoundManager::stopSE(
        extension::SoundManager *this,
        const extension::SoundSource *source,
        const extension::SoundManager::SEStopParams *params)
{
  __int64 v5; // rdx
  std::_Wrap_alloc<std::allocator<extension::exsound_detail::SoundBankMediaDefinition> > *v6; // r8
  std::integral_constant<bool,0> v7; // r9
  __int64 v8; // rdx
  std::_List_node<extension::SoundManager::SERequest,void *> *Myhead; // rbx
  std::_List_buy<extension::SoundManager::SERequest> *v10; // rcx
  std::_List_node<extension::SoundManager::SERequest,void *> *v11; // rax
  __int64 v12; // rdx
  std::_Wrap_alloc<std::allocator<extension::exsound_detail::SoundBankMediaDefinition> > *v13; // r8
  std::integral_constant<bool,0> v14; // r9
  __int64 v15; // rdx
  extension::SoundManager::SERequestFilter v16; // [rsp+20h] [rbp-C8h] BYREF
  extension::SoundManager::SERequest v17; // [rsp+70h] [rbp-78h] BYREF
  LPCRITICAL_SECTION p_m_mutex; // [rsp+C0h] [rbp-28h]
  int v19; // [rsp+C8h] [rbp-20h]
  __int64 v20; // [rsp+D0h] [rbp-18h]

  v20 = -2i64;
  if ( this->m_debugIsDisableAllRequest || !source->m_elementDef.m_ptr )
    return 0;
  extension::SoundManager::MakeSERequestStop(&v17, source, params);
  p_m_mutex = (LPCRITICAL_SECTION)&this->m_mutex;
  v19 = 1;
  EnterCriticalSection((LPCRITICAL_SECTION)&this->m_mutex);
  v16.m_pattern.m_tag = v17.m_tag;
  v16.m_pattern.m_runtimeEffector.m_ptr = v17.m_runtimeEffector.m_ptr;
  if ( v17.m_runtimeEffector.m_ptr )
    _InterlockedExchangeAdd64((volatile signed __int64 *)v17.m_runtimeEffector.m_ptr, 1ui64);
  v16.m_pattern.m_soundSource.m_elementDef.m_ptr = v17.m_soundSource.m_elementDef.m_ptr;
  if ( v17.m_soundSource.m_elementDef.m_ptr )
    _InterlockedExchangeAdd64((volatile signed __int64 *)v17.m_soundSource.m_elementDef.m_ptr, 1ui64);
  v16.m_pattern.m_soundSource.m_sound.m_isNoCache = v17.m_soundSource.m_sound.m_isNoCache;
  v16.m_pattern.m_soundSource.m_sound.m_body.m_ptr = v17.m_soundSource.m_sound.m_body.m_ptr;
  if ( v17.m_soundSource.m_sound.m_body.m_ptr )
    _InterlockedExchangeAdd64(
      (volatile signed __int64 *)&v17.m_soundSource.m_sound.m_body.m_ptr->m_refCount.m_ptr->m_sharedCount,
      1ui64);
  v16.m_pattern.m_soundSource.m_lockTime = v17.m_soundSource.m_lockTime;
  *(_QWORD *)&v16.m_pattern.m_soundSource.m_baseVolume = *(_QWORD *)&v17.m_soundSource.m_baseVolume;
  v16.m_pattern.m_soundSource.m_priority = v17.m_soundSource.m_priority;
  v16.m_pattern.m_soundSource.m_soundFlags = v17.m_soundSource.m_soundFlags;
  v16.m_pattern.m_soundSource.m_bStereoChange = v17.m_soundSource.m_bStereoChange;
  v16.m_pattern.m_playGroup = v17.m_playGroup;
  v16.m_pattern.m_userTag = v17.m_userTag;
  v16.m_pattern.m_fadeTime = v17.m_fadeTime;
  std::list<extension::SoundManager::SERequest>::_Remove_if<extension::SoundManager::SERequestFilter>(
    &this->m_seRequests,
    &v16);
  extension::SoundSource::~SoundSource(&v16.m_pattern.m_soundSource, v5, v6, v7);
  extension::RefCountablePtr<extension::exsound_detail::RuntimeEffector>::~RefCountablePtr<extension::exsound_detail::RuntimeEffector>(
    &v16.m_pattern.m_runtimeEffector,
    v8);
  Myhead = this->m_seRequests._Mypair._Myval2._Myhead;
  v11 = std::_List_buy<extension::SoundManager::SERequest>::_Buynode<extension::SoundManager::SERequest const &>(
          v10,
          Myhead,
          Myhead->_Prev,
          &v17);
  if ( this->m_seRequests._Mypair._Myval2._Mysize == 0x2AAAAAAAAAAAAA9i64 )
    std::_Xlength_error("list<T> too long");
  ++this->m_seRequests._Mypair._Myval2._Mysize;
  Myhead->_Prev = v11;
  v11->_Prev->_Next = v11;
  LeaveCriticalSection(p_m_mutex);
  extension::SoundSource::~SoundSource(&v17.m_soundSource, v12, v13, v14);
  extension::RefCountablePtr<extension::exsound_detail::RuntimeEffector>::~RefCountablePtr<extension::exsound_detail::RuntimeEffector>(
    &v17.m_runtimeEffector,
    v15);
  return 1;
}

void __fastcall extension::SoundManager::stopSEPlayer(
        extension::SoundManager *this,
        const extension::SoundManager::SERequest *r,
        __int64 a3,
        std::integral_constant<bool,0> a4)
{
  unsigned int m_playGroup; // esi
  unsigned int m_userTag; // ebp
  __int64 i; // rbx
  extension::SoundManager::Player *v9; // rcx
  const extension::exsound_detail::SoundBankElementDefinition *m_ptr; // rdx
  const extension::exsound_detail::SoundBankElementDefinition *v11; // rax

  m_playGroup = r->m_playGroup;
  m_userTag = r->m_userTag;
  for ( i = 0i64; i < 32; ++i )
  {
    v9 = &this->m_players._Mypair._Myval2[i];
    m_ptr = v9->m_soundSource.m_elementDef.m_ptr;
    if ( m_ptr )
    {
      if ( (v9->m_playerFlags & 2) != 0 )
      {
        v11 = r->m_soundSource.m_elementDef.m_ptr;
        if ( (!v11 || m_ptr == v11)
          && (m_playGroup == -1 || v9->m_group == m_playGroup)
          && (m_userTag & v9->m_userTag) == m_userTag )
        {
          if ( r->m_tag == Tag_PauseStop )
          {
            extension::SoundManager::Player::pauseStop(v9);
          }
          else if ( r->m_tag == Tag_PausePlay )
          {
            extension::SoundManager::Player::pausePlay(v9);
          }
          else
          {
            extension::SoundManager::Player::stop(v9, r->m_fadeTime, a3, a4);
          }
        }
      }
    }
  }
}

void __fastcall extension::SoundManager::stopUserTagedSE(
        extension::SoundManager *this,
        unsigned int userTagMask,
        float fadeTime)
{
  __int64 v4; // rdx
  std::_Wrap_alloc<std::allocator<extension::exsound_detail::SoundBankMediaDefinition> > *v5; // r8
  std::integral_constant<bool,0> v6; // r9
  __int64 v7; // rdx
  std::_List_node<extension::SoundManager::SERequest,void *> *Myhead; // rbx
  std::_List_buy<extension::SoundManager::SERequest> *v9; // rcx
  std::_List_node<extension::SoundManager::SERequest,void *> *v10; // rax
  __int64 v11; // rdx
  std::_Wrap_alloc<std::allocator<extension::exsound_detail::SoundBankMediaDefinition> > *v12; // r8
  std::integral_constant<bool,0> v13; // r9
  __int64 v14; // rdx
  extension::SoundManager::SERequestFilter _Pred; // [rsp+28h] [rbp-69h] BYREF
  extension::SoundManager::SERequest result; // [rsp+78h] [rbp-19h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+C8h] [rbp+37h]
  int v18; // [rsp+D0h] [rbp+3Fh]
  __int64 v19; // [rsp+D8h] [rbp+47h]

  v19 = -2i64;
  if ( !this->m_debugIsDisableAllRequest )
  {
    extension::SoundManager::MakeSERequestStopUserTaged(&result, userTagMask, fadeTime);
    lpCriticalSection = (LPCRITICAL_SECTION)&this->m_mutex;
    v18 = 1;
    EnterCriticalSection((LPCRITICAL_SECTION)&this->m_mutex);
    _Pred.m_pattern.m_tag = result.m_tag;
    _Pred.m_pattern.m_runtimeEffector.m_ptr = result.m_runtimeEffector.m_ptr;
    if ( result.m_runtimeEffector.m_ptr )
      _InterlockedExchangeAdd64((volatile signed __int64 *)result.m_runtimeEffector.m_ptr, 1ui64);
    _Pred.m_pattern.m_soundSource.m_elementDef.m_ptr = result.m_soundSource.m_elementDef.m_ptr;
    if ( result.m_soundSource.m_elementDef.m_ptr )
      _InterlockedExchangeAdd64((volatile signed __int64 *)result.m_soundSource.m_elementDef.m_ptr, 1ui64);
    _Pred.m_pattern.m_soundSource.m_sound.m_isNoCache = result.m_soundSource.m_sound.m_isNoCache;
    _Pred.m_pattern.m_soundSource.m_sound.m_body.m_ptr = result.m_soundSource.m_sound.m_body.m_ptr;
    if ( result.m_soundSource.m_sound.m_body.m_ptr )
      _InterlockedExchangeAdd64(
        (volatile signed __int64 *)&result.m_soundSource.m_sound.m_body.m_ptr->m_refCount.m_ptr->m_sharedCount,
        1ui64);
    _Pred.m_pattern.m_soundSource.m_lockTime = result.m_soundSource.m_lockTime;
    _Pred.m_pattern.m_soundSource.m_baseVolume = result.m_soundSource.m_baseVolume;
    _Pred.m_pattern.m_soundSource.m_pitchBendFrequencyScale = result.m_soundSource.m_pitchBendFrequencyScale;
    _Pred.m_pattern.m_soundSource.m_priority = result.m_soundSource.m_priority;
    _Pred.m_pattern.m_soundSource.m_soundFlags = result.m_soundSource.m_soundFlags;
    _Pred.m_pattern.m_soundSource.m_bStereoChange = result.m_soundSource.m_bStereoChange;
    _Pred.m_pattern.m_playGroup = result.m_playGroup;
    _Pred.m_pattern.m_userTag = result.m_userTag;
    _Pred.m_pattern.m_fadeTime = result.m_fadeTime;
    std::list<extension::SoundManager::SERequest>::_Remove_if<extension::SoundManager::SERequestFilter>(
      &this->m_seRequests,
      &_Pred);
    extension::SoundSource::~SoundSource(&_Pred.m_pattern.m_soundSource, v4, v5, v6);
    extension::RefCountablePtr<extension::exsound_detail::RuntimeEffector>::~RefCountablePtr<extension::exsound_detail::RuntimeEffector>(
      &_Pred.m_pattern.m_runtimeEffector,
      v7);
    Myhead = this->m_seRequests._Mypair._Myval2._Myhead;
    v10 = std::_List_buy<extension::SoundManager::SERequest>::_Buynode<extension::SoundManager::SERequest const &>(
            v9,
            Myhead,
            Myhead->_Prev,
            &result);
    if ( this->m_seRequests._Mypair._Myval2._Mysize == 0x2AAAAAAAAAAAAA9i64 )
      std::_Xlength_error("list<T> too long");
    ++this->m_seRequests._Mypair._Myval2._Mysize;
    Myhead->_Prev = v10;
    v10->_Prev->_Next = v10;
    LeaveCriticalSection(lpCriticalSection);
    extension::SoundSource::~SoundSource(&result.m_soundSource, v11, v12, v13);
    extension::RefCountablePtr<extension::exsound_detail::RuntimeEffector>::~RefCountablePtr<extension::exsound_detail::RuntimeEffector>(
      &result.m_runtimeEffector,
      v14);
  }
}

void __fastcall extension::SoundManager::Player::updateRealtimeAttribute(
        extension::SoundManager::Player *this,
        const OGLVec3 *listenerPosition)
{
  extension::exsound_detail::RuntimeEffector *m_ptr; // rdi
  float v5; // xmm0_4
  float v6; // xmm2_4
  float m_lastOutputVolume; // xmm6_4
  float v8; // xmm1_4
  double v9; // xmm0_8

  if ( this->m_soundSource.m_elementDef.m_ptr )
  {
    extension::SoundManager::Player::updateRuntimeVolume(this);
    m_ptr = this->m_runtimeEffector.m_ptr;
    if ( m_ptr )
    {
      if ( m_ptr->m_useSoundPosition && (this->m_soundSource.m_soundFlags & 0x30) == 0 )
      {
        v5 = m_ptr->m_soundObjectPosition.y - listenerPosition->y;
        v6 = m_ptr->m_soundObjectPosition.z - listenerPosition->z;
        m_lastOutputVolume = this->m_lastOutputVolume;
        v8 = (float)(m_ptr->m_distanceAttenuation
                   / sqrtf(
                       (float)((float)(v5 * v5)
                             + (float)((float)(m_ptr->m_soundObjectPosition.x - listenerPosition->x)
                                     * (float)(m_ptr->m_soundObjectPosition.x - listenerPosition->x)))
                     + (float)(v6 * v6)))
           * m_lastOutputVolume;
        if ( v8 <= 1.0 )
          v9 = v8;
        else
          v9 = DOUBLE_1_0;
        extension::SoundManager::Player::setOutputVolume(this, v9);
        this->m_lastOutputVolume = m_lastOutputVolume;
      }
    }
  }
}

void __fastcall extension::SoundManager::Player::updateRuntimeVolume(
        extension::SoundManager::Player *this,
        __int64 a2,
        __int64 a3,
        std::integral_constant<bool,0> a4)
{
  std::_Wrap_alloc<std::allocator<extension::exsound_detail::SoundBankMediaDefinition> > *m_playerFlags; // r8
  float m_fadeGoalVolume; // xmm4_4
  float m_lastOutputVolume; // xmm7_4
  float CurrentTotalTime; // xmm3_4
  float v9; // xmm5_4
  float m_fadeGoalTime; // xmm0_4
  float m_fadeLastTime; // xmm2_4
  float *p_m_fadeGoalTime; // rax
  float v13; // xmm1_4
  float *m_masterVolumeRef; // rax
  int *v15; // rax
  float v16; // xmm6_4
  extension::exsound_detail::RuntimeEffector *m_ptr; // rcx
  const extension::SoundManager::ManagerRealtimeState *m_rtStateRef; // rax
  float v19; // [rsp+50h] [rbp+8h] BYREF
  int v20; // [rsp+58h] [rbp+10h] BYREF

  m_playerFlags = (std::_Wrap_alloc<std::allocator<extension::exsound_detail::SoundBankMediaDefinition> > *)this->m_playerFlags;
  if ( (this->m_playerFlags & 0x40000000) == 0 )
  {
    m_fadeGoalVolume = this->m_fadeGoalVolume;
    m_lastOutputVolume = this->m_lastOutputVolume;
    if ( m_fadeGoalVolume != this->m_fadeLastVolume )
    {
      CurrentTotalTime = CAudioPresenter::getCurrentTotalTime(this->m_presenter._Mypair._Myval2);
      m_fadeGoalTime = this->m_fadeGoalTime;
      v19 = CurrentTotalTime;
      if ( CurrentTotalTime < m_fadeGoalTime )
      {
        m_fadeLastTime = this->m_fadeLastTime;
        if ( CurrentTotalTime > m_fadeLastTime )
          this->m_fadeLastVolume = (float)((float)((float)(CurrentTotalTime - m_fadeLastTime)
                                                 / (float)(m_fadeGoalTime - m_fadeLastTime))
                                         * (float)(m_fadeGoalVolume - v9))
                                 + v9;
      }
      else
      {
        this->m_fadeLastVolume = m_fadeGoalVolume;
      }
      p_m_fadeGoalTime = &v19;
      if ( this->m_fadeGoalTime <= CurrentTotalTime )
        p_m_fadeGoalTime = &this->m_fadeGoalTime;
      this->m_fadeLastTime = *p_m_fadeGoalTime;
    }
    v13 = this->m_baseVolume * this->m_fadeLastVolume;
    m_masterVolumeRef = this->m_masterVolumeRef;
    v19 = v13;
    if ( m_masterVolumeRef )
    {
      v13 = v13 * *m_masterVolumeRef;
      v19 = v13;
    }
    v15 = (int *)&v19;
    v20 = 1065353216;
    if ( v13 >= 1.0 )
      v15 = &v20;
    v16 = *(float *)v15;
    if ( *(float *)v15 <= 0.0 )
      v16 = 0.0;
    if ( (int)m_playerFlags < 0 && m_fadeGoalVolume == 0.0 && v16 == 0.0 )
    {
      extension::SoundManager::Player::releaseSound(this, a2, m_playerFlags, a4);
    }
    else if ( m_lastOutputVolume != v16
           || ((unsigned __int8)m_playerFlags & 0x60) != 0
           && (m_ptr = this->m_runtimeEffector.m_ptr) != 0i64
           && extension::exsound_detail::RuntimeEffector::isDirty(m_ptr)
           || (m_rtStateRef = this->m_rtStateRef) != 0i64 && m_rtStateRef->listener3D.Dirty )
    {
      extension::SoundManager::Player::setOutputVolume(this, v16);
    }
  }
}

