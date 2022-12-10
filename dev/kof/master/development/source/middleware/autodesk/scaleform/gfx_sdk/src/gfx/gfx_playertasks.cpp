#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hairliner.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/jpeg_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefileutil.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix3x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_point3.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_image.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_wwhelper.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_twips.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_displaylist.h"
#include "program files (x86)/windows kits/8.1/include/shared/winerror.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_charposinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraypaged.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_streamcontext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_loaderimpl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_resourcehandle.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_stream.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "program files (x86)/windows kits/8.1/include/shared/guiddef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixstate.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_wstring.h"
#include "program files (x86)/windows kits/8.1/include/um/oleauto.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asmovierootbase.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_player.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hal.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threadcheck.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textlayout.h"
#include "program files (x86)/windows kits/8.1/include/um/winnt.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "program files (x86)/windows kits/8.1/include/shared/basetsd.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_profiler.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_strokeraa.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cxform.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_gradients.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_playertasks.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_screentoworld.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshkey.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_assoundintf.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_rasterizer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_listalloc.h"
#include "program files (x86)/windows kits/8.1/include/um/winuser.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_fontlib.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_displayobject.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_characterdef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixpool.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_taskmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_scale9grid.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraystaticbuff.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textmeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphparam.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessdefs.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_core.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_range.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_keycodes.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "program files (x86)/windows kits/8.1/include/um/propidl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_vertex.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_event.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "program files (x86)/windows kits/8.1/include/um/winbase.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_viewport.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treenode.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_context.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asutils.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_containers.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_drawableimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_fontresource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_buffer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_hash.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_imageresource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_sprite.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_queue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_displayobjcontainer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_moviedef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitive.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_autoptr.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_input.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_interactiveobject.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocaddr.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_radixtree.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_types.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filters.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filterparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_states.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix4x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_statebag.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_drawingcontext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_shapeswf.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_shape.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessgen.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treeshape.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessellator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapemeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_spritedef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_fontcompactor.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_pathdatastorage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_log.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_font.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatapacked.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_fontmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_loader.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_pathdatapacker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_fontmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_constants.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_playerimpl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphfitter.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_system.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "program files (x86)/windows kits/8.1/include/shared/stralign.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_imagecreator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/tga_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_resource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_stroker.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"

Scaleform::String Scaleform::GFx::GetUrlStrGfx(const Scaleform::String & url); // 0x140364930
Scaleform::GFx::MoviePreloadTask::MoviePreloadTask(Scaleform::GFx::MovieImpl * pmovieRoot, const Scaleform::String & url, bool stripped, bool quietOpen); // 0x140363CB0
Scaleform::GFx::LoadBinaryTask::~LoadBinaryTask(); // 0x140363EA0
void Scaleform::GFx::MoviePreloadTask::Execute(); // 0x140364790
bool Scaleform::GFx::MoviePreloadTask::IsDone(); // 0x1403649D0
Scaleform::GFx::MovieDefImpl * Scaleform::GFx::MoviePreloadTask::GetMoiveDefImpl(); // 0x1403D6F90
Scaleform::GFx::LoadQueueEntryMT::LoadQueueEntryMT(Scaleform::GFx::LoadQueueEntry * pqueueEntry, Scaleform::GFx::MovieImpl * pmovieRoot); // 0x140363900
Scaleform::GFx::LoadQueueEntryMT::~LoadQueueEntryMT(); // 0x140363F40
Scaleform::GFx::LoadVarsTask::~LoadVarsTask(); // 0x140363F60
Scaleform::GFx::MoviePreloadTask::~MoviePreloadTask(); // 0x140364020
void Scaleform::GFx::LoadQueueEntryMT::Cancel(); // 0x1403643C0
Scaleform::GFx::LoadVarsTask::LoadVarsTask(Scaleform::GFx::LoadStates * pls, const Scaleform::String & level0Path, const Scaleform::String & url); // 0x140363C00
void Scaleform::GFx::LoadVarsTask::Execute(); // 0x1403645B0
Scaleform::GFx::LoadQueueEntryMT_LoadVars::LoadQueueEntryMT_LoadVars(Scaleform::GFx::LoadQueueEntry * pqueueEntry, Scaleform::GFx::MovieImpl * pmovieRoot); // 0x140363A90
bool Scaleform::GFx::LoadQueueEntryMT_LoadVars::LoadFinished(); // 0x140364AB0
Scaleform::GFx::LoadBinaryTask::LoadBinaryTask(Scaleform::GFx::LoadStates * pls, const Scaleform::String & level0Path, const Scaleform::String & url); // 0x140363840
void Scaleform::GFx::LoadBinaryTask::Execute(); // 0x1403643D0
Scaleform::GFx::LoadQueueEntryMT_LoadBinary::LoadQueueEntryMT_LoadBinary(Scaleform::GFx::LoadQueueEntry * pqueueEntry, Scaleform::GFx::MovieImpl * pmovieRoot); // 0x140363920
bool Scaleform::GFx::LoadQueueEntryMT_LoadBinary::LoadFinished(); // 0x1403649E0void __fastcall Scaleform::GFx::LoadBinaryTask::LoadBinaryTask(
        Scaleform::GFx::LoadBinaryTask *this,
        Scaleform::GFx::LoadStates *pls,
        const Scaleform::String *level0Path,
        const Scaleform::String *url)
{
  this->ThisTaskId = Id_MovieDataLoad;
  this->__vftable = (Scaleform::GFx::LoadBinaryTask_vtbl *)&Scaleform::RefCountImplCore::`vftable';
  this->RefCount = 1;
  this->__vftable = (Scaleform::GFx::LoadBinaryTask_vtbl *)&Scaleform::GFx::Task::`vftable';
  this->__vftable = (Scaleform::GFx::LoadBinaryTask_vtbl *)&Scaleform::GFx::LoadBinaryTask::`vftable';
  this->CurrentState = State_Idle;
  if ( pls )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)pls);
  this->pLoadStates.pObject = pls;
  Scaleform::String::String(&this->Level0Path, level0Path);
  Scaleform::String::String(&this->Url, url);
  this->Data.Data.Data = 0i64;
  this->Data.Data.Size = 0i64;
  this->Data.Data.Policy.Capacity = 0i64;
  this->FileLen = 0;
  this->Done = 0;
  this->Succeeded = 0;
}

void __fastcall Scaleform::GFx::LoadQueueEntryMT::LoadQueueEntryMT(
        Scaleform::GFx::LoadQueueEntryMT *this,
        Scaleform::GFx::LoadQueueEntry *pqueueEntry,
        Scaleform::GFx::MovieImpl *pmovieRoot)
{
  this->pMovieImpl = pmovieRoot;
  this->__vftable = (Scaleform::GFx::LoadQueueEntryMT_vtbl *)&Scaleform::GFx::LoadQueueEntryMT::`vftable';
  this->pNext = 0i64;
  this->pPrev = 0i64;
  this->pQueueEntry = pqueueEntry;
}

void __fastcall Scaleform::GFx::LoadQueueEntryMT_LoadBinary::LoadQueueEntryMT_LoadBinary(
        Scaleform::GFx::LoadQueueEntryMT_LoadBinary *this,
        Scaleform::GFx::LoadQueueEntry *pqueueEntry,
        Scaleform::GFx::MovieImpl *pmovieRoot)
{
  Scaleform::GFx::LoadBinaryTask *v3; // rsi
  Scaleform::GFx::LoadStates *v6; // rbp
  Scaleform::GFx::MovieImpl *pMovieImpl; // r8
  Scaleform::GFx::LoaderImpl *pObject; // rbx
  Scaleform::GFx::StateBag *v9; // rax
  Scaleform::GFx::LoadStates *v10; // rax
  Scaleform::GFx::LoadStates *v11; // rbx
  Scaleform::RefCountVImpl *v12; // rcx
  Scaleform::GFx::LoadBinaryTask *v13; // rax
  Scaleform::GFx::LoadBinaryTask *v14; // rax
  Scaleform::RefCountVImpl *v15; // rcx
  Scaleform::RefCountVImpl *v16; // rbx
  void *v17; // rbx
  Scaleform::String ppath; // [rsp+40h] [rbp+8h] BYREF

  this->pMovieImpl = pmovieRoot;
  this->pQueueEntry = pqueueEntry;
  v3 = 0i64;
  this->pNext = 0i64;
  this->pPrev = 0i64;
  this->__vftable = (Scaleform::GFx::LoadQueueEntryMT_LoadBinary_vtbl *)&Scaleform::GFx::LoadQueueEntryMT_LoadBinary::`vftable';
  this->pTask.pObject = 0i64;
  this->pLoadStates.pObject = 0i64;
  v6 = (Scaleform::GFx::LoadStates *)Scaleform::Memory::pGlobalHeap->Alloc(Scaleform::Memory::pGlobalHeap, 144i64, 0i64);
  if ( v6 )
  {
    pMovieImpl = this->pMovieImpl;
    pObject = pMovieImpl->pMainMovieDef.pObject->pLoaderImpl.pObject;
    v9 = (Scaleform::GFx::StateBag *)pMovieImpl->GetStateBagImpl(&pMovieImpl->Scaleform::GFx::StateBag);
    Scaleform::GFx::LoadStates::LoadStates(v6, pObject, v9, 0i64);
    v11 = v10;
  }
  else
  {
    v11 = 0i64;
  }
  v12 = (Scaleform::RefCountVImpl *)this->pLoadStates.pObject;
  if ( v12 )
    Scaleform::RefCountImpl::Release(v12);
  this->pLoadStates.pObject = v11;
  Scaleform::String::String(&ppath);
  Scaleform::GFx::MovieImpl::GetMainMoviePath(this->pMovieImpl, &ppath);
  v13 = (Scaleform::GFx::LoadBinaryTask *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))Scaleform::Memory::pGlobalHeap->Alloc)(
                                            Scaleform::Memory::pGlobalHeap,
                                            88i64);
  if ( v13 )
  {
    Scaleform::GFx::LoadBinaryTask::LoadBinaryTask(v13, this->pLoadStates.pObject, &ppath, &pqueueEntry->URL);
    v3 = v14;
  }
  v15 = (Scaleform::RefCountVImpl *)this->pTask.pObject;
  if ( v15 )
    Scaleform::RefCountImpl::Release(v15);
  this->pTask.pObject = v3;
  v16 = (Scaleform::RefCountVImpl *)this->pMovieImpl->GetStateAddRef(&this->pMovieImpl->Scaleform::GFx::StateBag, 24i64);
  ((void (__fastcall *)(Scaleform::RefCountVImpl *, Scaleform::GFx::LoadBinaryTask *))v16->AddRef)(
    v16,
    this->pTask.pObject);
  Scaleform::RefCountImpl::Release(v16);
  v17 = (void *)(ppath.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
  if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
         (volatile int *)((ppath.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
         -1) == 1 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v17);
}

void __fastcall Scaleform::GFx::LoadQueueEntryMT_LoadVars::LoadQueueEntryMT_LoadVars(
        Scaleform::GFx::LoadQueueEntryMT_LoadVars *this,
        Scaleform::GFx::LoadQueueEntry *pqueueEntry,
        Scaleform::GFx::MovieImpl *pmovieRoot)
{
  Scaleform::GFx::LoadVarsTask *v3; // rsi
  Scaleform::GFx::LoadStates *v6; // rbp
  Scaleform::GFx::MovieImpl *pMovieImpl; // r8
  Scaleform::GFx::LoaderImpl *pObject; // rbx
  Scaleform::GFx::StateBag *v9; // rax
  Scaleform::GFx::LoadStates *v10; // rax
  Scaleform::GFx::LoadStates *v11; // rbx
  Scaleform::RefCountVImpl *v12; // rcx
  Scaleform::GFx::LoadVarsTask *v13; // rax
  Scaleform::GFx::LoadVarsTask *v14; // rax
  Scaleform::RefCountVImpl *v15; // rcx
  Scaleform::RefCountVImpl *v16; // rbx
  void *v17; // rbx
  Scaleform::String ppath; // [rsp+40h] [rbp+8h] BYREF

  this->pMovieImpl = pmovieRoot;
  this->pQueueEntry = pqueueEntry;
  v3 = 0i64;
  this->pNext = 0i64;
  this->pPrev = 0i64;
  this->__vftable = (Scaleform::GFx::LoadQueueEntryMT_LoadVars_vtbl *)&Scaleform::GFx::LoadQueueEntryMT_LoadVars::`vftable';
  this->pTask.pObject = 0i64;
  this->pLoadStates.pObject = 0i64;
  v6 = (Scaleform::GFx::LoadStates *)Scaleform::Memory::pGlobalHeap->Alloc(Scaleform::Memory::pGlobalHeap, 144i64, 0i64);
  if ( v6 )
  {
    pMovieImpl = this->pMovieImpl;
    pObject = pMovieImpl->pMainMovieDef.pObject->pLoaderImpl.pObject;
    v9 = (Scaleform::GFx::StateBag *)pMovieImpl->GetStateBagImpl(&pMovieImpl->Scaleform::GFx::StateBag);
    Scaleform::GFx::LoadStates::LoadStates(v6, pObject, v9, 0i64);
    v11 = v10;
  }
  else
  {
    v11 = 0i64;
  }
  v12 = (Scaleform::RefCountVImpl *)this->pLoadStates.pObject;
  if ( v12 )
    Scaleform::RefCountImpl::Release(v12);
  this->pLoadStates.pObject = v11;
  Scaleform::String::String(&ppath);
  Scaleform::GFx::MovieImpl::GetMainMoviePath(this->pMovieImpl, &ppath);
  v13 = (Scaleform::GFx::LoadVarsTask *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))Scaleform::Memory::pGlobalHeap->Alloc)(
                                          Scaleform::Memory::pGlobalHeap,
                                          72i64);
  if ( v13 )
  {
    Scaleform::GFx::LoadVarsTask::LoadVarsTask(v13, this->pLoadStates.pObject, &ppath, &pqueueEntry->URL);
    v3 = v14;
  }
  v15 = (Scaleform::RefCountVImpl *)this->pTask.pObject;
  if ( v15 )
    Scaleform::RefCountImpl::Release(v15);
  this->pTask.pObject = v3;
  v16 = (Scaleform::RefCountVImpl *)this->pMovieImpl->GetStateAddRef(&this->pMovieImpl->Scaleform::GFx::StateBag, 24i64);
  ((void (__fastcall *)(Scaleform::RefCountVImpl *, Scaleform::GFx::LoadVarsTask *))v16->AddRef)(
    v16,
    this->pTask.pObject);
  Scaleform::RefCountImpl::Release(v16);
  v17 = (void *)(ppath.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
  if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
         (volatile int *)((ppath.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
         -1) == 1 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v17);
}

void __fastcall Scaleform::GFx::LoadVarsTask::LoadVarsTask(
        Scaleform::GFx::LoadVarsTask *this,
        Scaleform::GFx::LoadStates *pls,
        const Scaleform::String *level0Path,
        const Scaleform::String *url)
{
  this->ThisTaskId = Id_MovieDataLoad;
  this->__vftable = (Scaleform::GFx::LoadVarsTask_vtbl *)&Scaleform::RefCountImplCore::`vftable';
  this->__vftable = (Scaleform::GFx::LoadVarsTask_vtbl *)&Scaleform::GFx::Task::`vftable';
  this->RefCount = 1;
  this->__vftable = (Scaleform::GFx::LoadVarsTask_vtbl *)&Scaleform::GFx::LoadVarsTask::`vftable';
  this->CurrentState = State_Idle;
  if ( pls )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)pls);
  this->pLoadStates.pObject = pls;
  Scaleform::String::String(&this->Level0Path, level0Path);
  Scaleform::String::String(&this->Url, url);
  Scaleform::String::String(&this->Data);
  this->FileLen = 0;
  this->Done = 0;
  this->Succeeded = 0;
}

void __fastcall Scaleform::GFx::MoviePreloadTask::MoviePreloadTask(
        Scaleform::GFx::MoviePreloadTask *this,
        Scaleform::GFx::MovieImpl *pmovieRoot,
        const Scaleform::String *url,
        bool stripped,
        bool quietOpen)
{
  Scaleform::GFx::LoadStates *v5; // rbp
  Scaleform::String *p_UrlStrGfx; // rbx
  Scaleform::GFx::LoadStates *v11; // r12
  Scaleform::GFx::LoaderImpl *pObject; // rbx
  Scaleform::GFx::StateBag *v13; // rax
  Scaleform::GFx::LoadStates *v14; // rax
  Scaleform::RefCountVImpl *v15; // rcx
  unsigned int v16; // eax
  bool v17; // zf
  const char *v18; // rax
  unsigned __int64 v19; // rcx
  void *v20; // rbx
  Scaleform::String src; // [rsp+50h] [rbp+8h] BYREF

  this->ThisTaskId = Id_MovieDataLoad;
  this->__vftable = (Scaleform::GFx::MoviePreloadTask_vtbl *)&Scaleform::RefCountImplCore::`vftable';
  v5 = 0i64;
  this->RefCount = 1;
  this->__vftable = (Scaleform::GFx::MoviePreloadTask_vtbl *)&Scaleform::GFx::Task::`vftable';
  this->CurrentState = State_Idle;
  this->__vftable = (Scaleform::GFx::MoviePreloadTask_vtbl *)&Scaleform::GFx::MoviePreloadTask::`vftable';
  this->pLoadStates.pObject = 0i64;
  Scaleform::String::String(&this->Level0Path);
  Scaleform::String::String(&this->Url, url);
  p_UrlStrGfx = &this->UrlStrGfx;
  Scaleform::String::String(&this->UrlStrGfx);
  this->pDefImpl.pObject = 0i64;
  this->Done = 0;
  v11 = (Scaleform::GFx::LoadStates *)Scaleform::Memory::pGlobalHeap->Alloc(
                                        Scaleform::Memory::pGlobalHeap,
                                        144i64,
                                        0i64);
  if ( v11 )
  {
    pObject = pmovieRoot->pMainMovieDef.pObject->pLoaderImpl.pObject;
    v13 = (Scaleform::GFx::StateBag *)pmovieRoot->GetStateBagImpl(&pmovieRoot->Scaleform::GFx::StateBag);
    Scaleform::GFx::LoadStates::LoadStates(v11, pObject, v13, 0i64);
    v5 = v14;
    p_UrlStrGfx = &this->UrlStrGfx;
  }
  v15 = (Scaleform::RefCountVImpl *)this->pLoadStates.pObject;
  if ( v15 )
    Scaleform::RefCountImpl::Release(v15);
  this->pLoadStates.pObject = v5;
  v16 = pmovieRoot->pMainMovieDef.pObject->pBindData.pObject->LoadFlags & 0xFFFEFFFC | 0x10000;
  v17 = !quietOpen;
  this->LoadFlags = v16;
  if ( !v17 )
    this->LoadFlags = v16 | 0x200000;
  Scaleform::GFx::MovieImpl::GetMainMoviePath(pmovieRoot, &this->Level0Path);
  if ( stripped )
  {
    Scaleform::String::String(&src);
    v18 = (const char *)(this->Url.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
    v19 = *(_QWORD *)v18 & 0x7FFFFFFFFFFFFFFFi64;
    if ( v19 > 4 && !Scaleform::String::CompareNoCase(&v18[v19 + 8], ".swf") )
    {
      Scaleform::String::Clear(&src);
      Scaleform::String::AppendString(
        &src,
        (const char *)((this->Url.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12),
        (*(_QWORD *)(this->Url.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) & 0x7FFFFFFFFFFFFFFFi64) - 4);
      Scaleform::String::AppendString(&src, ".gfx", -1i64);
    }
    Scaleform::String::operator=(p_UrlStrGfx, &src);
    v20 = (void *)(src.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
    if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
           (volatile int *)((src.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
           -1) == 1 )
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v20);
  }
}

void __fastcall Scaleform::GFx::LoadBinaryTask::~LoadBinaryTask(Scaleform::GFx::LoadBinaryTask *this)
{
  volatile int *v2; // rbx
  volatile int *v3; // rbx
  Scaleform::RefCountVImpl *pObject; // rcx

  if ( this->Data.Data.Data )
    ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
  v2 = (volatile int *)(this->Url.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
  if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(v2 + 2, -1) == 1 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, (void *)v2);
  v3 = (volatile int *)(this->Level0Path.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
  if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(v3 + 2, -1) == 1 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, (void *)v3);
  pObject = (Scaleform::RefCountVImpl *)this->pLoadStates.pObject;
  if ( pObject )
    Scaleform::RefCountImpl::Release(pObject);
  this->__vftable = (Scaleform::GFx::LoadBinaryTask_vtbl *)&Scaleform::GFx::Task::`vftable';
  Scaleform::RefCountImplCore::~RefCountImplCore(this);
}

void __fastcall Scaleform::GFx::LoadQueueEntryMT::~LoadQueueEntryMT(Scaleform::GFx::LoadQueueEntryMT *this)
{
  Scaleform::GFx::LoadQueueEntry *pQueueEntry; // rcx

  this->__vftable = (Scaleform::GFx::LoadQueueEntryMT_vtbl *)&Scaleform::GFx::LoadQueueEntryMT::`vftable';
  pQueueEntry = this->pQueueEntry;
  if ( pQueueEntry )
    ((void (__fastcall *)(Scaleform::GFx::LoadQueueEntry *, __int64))pQueueEntry->~LoadQueueEntry)(pQueueEntry, 1i64);
}

void __fastcall Scaleform::GFx::LoadVarsTask::~LoadVarsTask(Scaleform::GFx::LoadVarsTask *this)
{
  volatile int *v2; // rbx
  volatile int *v3; // rbx
  volatile int *v4; // rbx
  Scaleform::RefCountVImpl *pObject; // rcx

  v2 = (volatile int *)(this->Data.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
  if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(v2 + 2, -1) == 1 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, (void *)v2);
  v3 = (volatile int *)(this->Url.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
  if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(v3 + 2, -1) == 1 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, (void *)v3);
  v4 = (volatile int *)(this->Level0Path.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
  if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(v4 + 2, -1) == 1 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, (void *)v4);
  pObject = (Scaleform::RefCountVImpl *)this->pLoadStates.pObject;
  if ( pObject )
    Scaleform::RefCountImpl::Release(pObject);
  this->__vftable = (Scaleform::GFx::LoadVarsTask_vtbl *)&Scaleform::GFx::Task::`vftable';
  Scaleform::RefCountImplCore::~RefCountImplCore(this);
}

void __fastcall Scaleform::GFx::MoviePreloadTask::~MoviePreloadTask(Scaleform::GFx::MoviePreloadTask *this)
{
  Scaleform::GFx::MovieDefImpl *pObject; // rcx
  volatile int *v3; // rbx
  volatile int *v4; // rbx
  volatile int *v5; // rbx
  Scaleform::RefCountVImpl *v6; // rcx

  pObject = this->pDefImpl.pObject;
  if ( pObject )
    Scaleform::GFx::Resource::Release(pObject);
  v3 = (volatile int *)(this->UrlStrGfx.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
  if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(v3 + 2, -1) == 1 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, (void *)v3);
  v4 = (volatile int *)(this->Url.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
  if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(v4 + 2, -1) == 1 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, (void *)v4);
  v5 = (volatile int *)(this->Level0Path.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
  if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(v5 + 2, -1) == 1 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, (void *)v5);
  v6 = (Scaleform::RefCountVImpl *)this->pLoadStates.pObject;
  if ( v6 )
    Scaleform::RefCountImpl::Release(v6);
  this->__vftable = (Scaleform::GFx::MoviePreloadTask_vtbl *)&Scaleform::GFx::Task::`vftable';
  Scaleform::RefCountImplCore::~RefCountImplCore(this);
}

void __fastcall Scaleform::GFx::LoadQueueEntryMT::Cancel(Scaleform::GFx::LoadQueueEntryMT *this)
{
  this->pQueueEntry->Canceled = 1;
}

void __fastcall Scaleform::GFx::LoadBinaryTask::Execute(Scaleform::GFx::LoadBinaryTask *this)
{
  Scaleform::File *v2; // rbx
  Scaleform::MemoryFile *v3; // rax
  Scaleform::File *v4; // rax
  unsigned __int8 *Data; // rdx
  void *v6; // rbx
  void *v7; // rbx
  void *v8; // rbx
  Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy> bytes; // [rsp+40h] [rbp-38h] BYREF
  Scaleform::GFx::URLBuilder::LocationInfo loc; // [rsp+58h] [rbp-20h] BYREF
  Scaleform::String pdest; // [rsp+80h] [rbp+8h] BYREF

  loc.Use = File_LoadVars;
  Scaleform::String::String(&loc.FileName, &this->Url);
  Scaleform::String::String(&loc.ParentPath, &this->Level0Path);
  Scaleform::String::String(&pdest);
  Scaleform::GFx::LoadStates::BuildURL(this->pLoadStates.pObject, &pdest, &loc);
  v2 = 0i64;
  memset(&bytes, 0, sizeof(bytes));
  if ( !(unsigned __int8)Scaleform::GFx::URLBuilder::IsProtocol(&pdest) )
  {
    v4 = Scaleform::GFx::LoadStates::OpenFile(
           this->pLoadStates.pObject,
           (const char *)((pdest.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12),
           0);
    goto LABEL_7;
  }
  if ( !Scaleform::GFx::URLBuilder::SendURLRequest(&bytes, &pdest, Url_Method_Get, 0i64, 0, 0i64, 0i64)
    || !bytes.Data.Size )
  {
    goto LABEL_10;
  }
  v3 = (Scaleform::MemoryFile *)Scaleform::Memory::pGlobalHeap->Alloc(Scaleform::Memory::pGlobalHeap, 48i64, 0i64);
  if ( v3 )
  {
    Scaleform::MemoryFile::MemoryFile(v3, &pdest, bytes.Data.Data, bytes.Data.Size);
LABEL_7:
    v2 = v4;
  }
  if ( v2 )
  {
    this->Succeeded = Scaleform::GFx::MovieImpl::ReadBinaryData(&this->Data, v2, &this->FileLen);
    goto LABEL_11;
  }
LABEL_10:
  this->Succeeded = 0;
LABEL_11:
  Data = bytes.Data.Data;
  this->Done = 1;
  if ( Data )
    ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
  if ( v2 )
    Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v2);
  v6 = (void *)(pdest.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
  if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
         (volatile int *)((pdest.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
         -1) == 1 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v6);
  v7 = (void *)(loc.ParentPath.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
  if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
         (volatile int *)((loc.ParentPath.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
         -1) == 1 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v7);
  v8 = (void *)(loc.FileName.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
  if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
         (volatile int *)((loc.FileName.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
         -1) == 1 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v8);
}

void __fastcall Scaleform::GFx::LoadVarsTask::Execute(Scaleform::GFx::LoadVarsTask *this)
{
  Scaleform::File *v2; // rbx
  Scaleform::MemoryFile *v3; // rax
  Scaleform::File *v4; // rax
  unsigned __int8 *Data; // rdx
  void *v6; // rbx
  void *v7; // rbx
  void *v8; // rbx
  Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy> bytes; // [rsp+40h] [rbp-38h] BYREF
  Scaleform::GFx::URLBuilder::LocationInfo loc; // [rsp+58h] [rbp-20h] BYREF
  Scaleform::String pdest; // [rsp+80h] [rbp+8h] BYREF

  loc.Use = File_LoadVars;
  Scaleform::String::String(&loc.FileName, &this->Url);
  Scaleform::String::String(&loc.ParentPath, &this->Level0Path);
  Scaleform::String::String(&pdest);
  Scaleform::GFx::LoadStates::BuildURL(this->pLoadStates.pObject, &pdest, &loc);
  v2 = 0i64;
  memset(&bytes, 0, sizeof(bytes));
  if ( !(unsigned __int8)Scaleform::GFx::URLBuilder::IsProtocol(&pdest) )
  {
    v4 = Scaleform::GFx::LoadStates::OpenFile(
           this->pLoadStates.pObject,
           (const char *)((pdest.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12),
           0);
    goto LABEL_7;
  }
  if ( !Scaleform::GFx::URLBuilder::SendURLRequest(&bytes, &pdest, Url_Method_Get, 0i64, 0, 0i64, 0i64)
    || !bytes.Data.Size )
  {
    goto LABEL_10;
  }
  v3 = (Scaleform::MemoryFile *)Scaleform::Memory::pGlobalHeap->Alloc(Scaleform::Memory::pGlobalHeap, 48i64, 0i64);
  if ( v3 )
  {
    Scaleform::MemoryFile::MemoryFile(v3, &pdest, bytes.Data.Data, bytes.Data.Size);
LABEL_7:
    v2 = v4;
  }
  if ( v2 )
  {
    this->Succeeded = Scaleform::GFx::MovieImpl::ReadTextData(&this->Data, v2, &this->FileLen, 0);
    goto LABEL_11;
  }
LABEL_10:
  this->Succeeded = 0;
LABEL_11:
  Data = bytes.Data.Data;
  this->Done = 1;
  if ( Data )
    ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
  if ( v2 )
    Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v2);
  v6 = (void *)(pdest.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
  if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
         (volatile int *)((pdest.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
         -1) == 1 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v6);
  v7 = (void *)(loc.ParentPath.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
  if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
         (volatile int *)((loc.ParentPath.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
         -1) == 1 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v7);
  v8 = (void *)(loc.FileName.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
  if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
         (volatile int *)((loc.FileName.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
         -1) == 1 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v8);
}

void __fastcall Scaleform::GFx::MoviePreloadTask::Execute(Scaleform::GFx::MoviePreloadTask *this)
{
  Scaleform::GFx::MovieDefImpl *v2; // rax
  Scaleform::GFx::MovieDefImpl *pObject; // rcx
  Scaleform::GFx::MovieDefImpl *v4; // rbx
  void *v5; // rbx
  void *v6; // rbx
  Scaleform::GFx::MovieDefImpl *v7; // rax
  Scaleform::GFx::MovieDefImpl *v8; // rcx
  Scaleform::GFx::MovieDefImpl *v9; // rbx
  void *v10; // rbx
  void *v11; // rbx
  Scaleform::GFx::URLBuilder::LocationInfo loc; // [rsp+30h] [rbp-38h] BYREF
  Scaleform::GFx::URLBuilder::LocationInfo v13; // [rsp+48h] [rbp-20h] BYREF

  if ( Scaleform::String::GetLength(&this->UrlStrGfx) )
  {
    loc.Use = File_LoadMovie;
    Scaleform::String::String(&loc.FileName, &this->UrlStrGfx);
    Scaleform::String::String(&loc.ParentPath, &this->Level0Path);
    v2 = Scaleform::GFx::LoaderImpl::CreateMovie_LoadState(this->pLoadStates.pObject, &loc, this->LoadFlags, 0i64, 0i64);
    pObject = this->pDefImpl.pObject;
    v4 = v2;
    if ( pObject )
      Scaleform::GFx::Resource::Release(pObject);
    this->pDefImpl.pObject = v4;
    v5 = (void *)(loc.ParentPath.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
    if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
           (volatile int *)((loc.ParentPath.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
           -1) == 1 )
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v5);
    v6 = (void *)(loc.FileName.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
    if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
           (volatile int *)((loc.FileName.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
           -1) == 1 )
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v6);
  }
  if ( !this->pDefImpl.pObject )
  {
    v13.Use = File_LoadMovie;
    Scaleform::String::String(&v13.FileName, &this->Url);
    Scaleform::String::String(&v13.ParentPath, &this->Level0Path);
    v7 = Scaleform::GFx::LoaderImpl::CreateMovie_LoadState(this->pLoadStates.pObject, &v13, this->LoadFlags, 0i64, 0i64);
    v8 = this->pDefImpl.pObject;
    v9 = v7;
    if ( v8 )
      Scaleform::GFx::Resource::Release(v8);
    this->pDefImpl.pObject = v9;
    v10 = (void *)(v13.ParentPath.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
    if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
           (volatile int *)((v13.ParentPath.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
           -1) == 1 )
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v10);
    v11 = (void *)(v13.FileName.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
    if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
           (volatile int *)((v13.FileName.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
           -1) == 1 )
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v11);
  }
  this->Done = 1;
}

Scaleform::GFx::AS3::ClassTraits::fl::XMLList *__fastcall Scaleform::GFx::MovieImpl::GetHeap(
        Scaleform::GFx::AS3::XMLSupportImpl *this)
{
  return this->TraitsXMLList.pObject;
}

Scaleform::String *__fastcall Scaleform::GFx::GetUrlStrGfx(Scaleform::String *result, const Scaleform::String *url)
{
  const char *v4; // rax
  unsigned __int64 v5; // rcx

  Scaleform::String::String(result);
  v4 = (const char *)(url->HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
  v5 = *(_QWORD *)v4 & 0x7FFFFFFFFFFFFFFFi64;
  if ( v5 > 4 && !Scaleform::String::CompareNoCase(&v4[v5 + 8], ".swf") )
  {
    Scaleform::String::Clear(result);
    Scaleform::String::AppendString(
      result,
      (const char *)((url->HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12),
      (*(_QWORD *)(url->HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) & 0x7FFFFFFFFFFFFFFFi64) - 4);
    Scaleform::String::AppendString(result, ".gfx", -1i64);
  }
  return result;
}

bool __fastcall Scaleform::GFx::MoviePreloadTask::IsDone(Scaleform::GFx::MoviePreloadTask *this)
{
  return this->Done == 1;
}

char __fastcall Scaleform::Render::BlendModeEffect::canCacheAcrossTransform(const bool __formal)
{
  return 1;
}

__int64 __fastcall Scaleform::GFx::LoadQueueEntryMT_LoadBinary::LoadFinished(
        Scaleform::GFx::LoadQueueEntryMT_LoadBinary *this)
{
  Scaleform::GFx::LoadBinaryTask *pObject; // rbx
  bool Succeeded; // r8
  char v4; // al
  __int64 FileLen; // r9
  Scaleform::GFx::LoadQueueEntry *pQueueEntry; // rdx
  unsigned __int8 v7; // bl
  Scaleform::ArrayData<unsigned char,Scaleform::AllocatorGH<unsigned char,2>,Scaleform::ArrayDefaultPolicy> v9; // [rsp+30h] [rbp-28h] BYREF
  BOOL v10; // [rsp+60h] [rbp+8h]

  pObject = this->pTask.pObject;
  memset(&v9, 0, sizeof(v9));
  if ( pObject->Done == 1 )
  {
    Scaleform::ArrayData<unsigned char,Scaleform::AllocatorGH<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Resize(
      &v9,
      pObject->Data.Data.Size);
    memmove(v9.Data, pObject->Data.Data.Data, pObject->Data.Data.Size);
    FileLen = (unsigned int)pObject->FileLen;
    v4 = 1;
    Succeeded = pObject->Succeeded;
  }
  else
  {
    Succeeded = v10;
    v4 = 0;
    FileLen = v10;
  }
  pQueueEntry = this->pQueueEntry;
  if ( pQueueEntry->Canceled )
  {
    if ( v4 )
      goto LABEL_10;
LABEL_8:
    v7 = 0;
    goto LABEL_11;
  }
  if ( !v4 )
    goto LABEL_8;
  this->pMovieImpl->pASMovieRoot.pObject->ProcessLoadBinaryMT(
    this->pMovieImpl->pASMovieRoot.pObject,
    pQueueEntry,
    this->pLoadStates.pObject,
    (const Scaleform::ArrayPOD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *)&v9,
    (int)FileLen,
    Succeeded);
LABEL_10:
  v7 = 1;
LABEL_11:
  if ( v9.Data )
    ((void (__fastcall *)(Scaleform::MemoryHeap *, unsigned __int8 *, Scaleform::MemoryHeap_vtbl *, __int64))Scaleform::Memory::pGlobalHeap->Free)(
      Scaleform::Memory::pGlobalHeap,
      v9.Data,
      Scaleform::Memory::pGlobalHeap->__vftable,
      FileLen);
  return v7;
}

__int64 __fastcall Scaleform::GFx::LoadQueueEntryMT_LoadVars::LoadFinished(
        Scaleform::GFx::LoadQueueEntryMT_LoadVars *this)
{
  Scaleform::GFx::LoadVarsTask *pObject; // rbx
  char Succeeded; // r8
  char v4; // al
  int FileLen; // er9
  Scaleform::GFx::LoadQueueEntry *pQueueEntry; // rdx
  unsigned __int8 v7; // di
  void *v8; // rbx
  bool v10; // [rsp+28h] [rbp-10h]
  Scaleform::String v11; // [rsp+40h] [rbp+8h] BYREF

  Scaleform::String::String(&v11);
  pObject = this->pTask.pObject;
  if ( pObject->Done == 1 )
  {
    Scaleform::String::operator=(&v11, &pObject->Data);
    FileLen = pObject->FileLen;
    v4 = 1;
    Succeeded = pObject->Succeeded;
  }
  else
  {
    Succeeded = (char)v11.pData;
    v4 = 0;
    FileLen = (int)v11.pData;
  }
  pQueueEntry = this->pQueueEntry;
  if ( pQueueEntry->Canceled )
  {
    if ( v4 )
      goto LABEL_10;
LABEL_8:
    v7 = 0;
    goto LABEL_11;
  }
  if ( !v4 )
    goto LABEL_8;
  v10 = Succeeded;
  this->pMovieImpl->pASMovieRoot.pObject->ProcessLoadVarsMT(
    this->pMovieImpl->pASMovieRoot.pObject,
    pQueueEntry,
    this->pLoadStates.pObject,
    &v11,
    FileLen,
    v10);
LABEL_10:
  v7 = 1;
LABEL_11:
  v8 = (void *)(v11.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
  if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
         (volatile int *)((v11.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
         -1) == 1 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v8);
  return v7;
}

