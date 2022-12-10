#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/jpeg_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefileutil.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_system.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_types.h"
#include "program files (x86)/windows kits/8.1/include/shared/winerror.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_charposinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraypaged.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_streamcontext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_loaderimpl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_resourcehandle.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_playerimpl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_stream.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix4x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_sprite.h"
#include "program files (x86)/windows kits/8.1/include/shared/guiddef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_displayobjcontainer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_scale9grid.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraystaticbuff.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixstate.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_hash.h"
#include "program files (x86)/windows kits/8.1/include/um/oleauto.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asmovierootbase.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_player.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hal.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threadcheck.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textlayout.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_gradients.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_wstring.h"
#include "program files (x86)/windows kits/8.1/include/um/winnt.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_image.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_font.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatapacked.h"
#include "program files (x86)/windows kits/8.1/include/shared/basetsd.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_pathdatapacker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_listalloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_profiler.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_strokeraa.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_wwhelper.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix3x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_point3.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_twips.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_displaylist.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_displayobject.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_states.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_statebag.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshkey.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_rasterizer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_playertasks.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_assoundintf.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_screentoworld.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/windows kits/8.1/include/um/winuser.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_fontlib.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixpool.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_taskmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textmeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphparam.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessdefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_core.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_range.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_vertex.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "program files (x86)/windows kits/8.1/include/um/propidl.h"
#include "program files (x86)/windows kits/8.1/include/um/winbase.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_viewport.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treenode.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_context.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cxform.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asutils.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_containers.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_drawableimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_buffer.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_fontresource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_event.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_imageresource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_keycodes.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_queue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_interactiveobject.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitive.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_moviedef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocaddr.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_radixtree.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_autoptr.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_characterdef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filters.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_input.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filterparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_resource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessgen.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_drawingcontext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessellator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_shapeswf.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_shape.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treeshape.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_fontcompactor.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_pathdatastorage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapemeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_spritedef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_constants.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_fontmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_fontmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphfitter.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_log.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "program files (x86)/windows kits/8.1/include/shared/stralign.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_loader.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_imagecreator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/tga_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_stroker.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hairliner.h"

Scaleform::GFx::DisplayList::DisplayList(); // 0x1403CE4C0
long long Scaleform::GFx::DisplayList::FindDisplayIndex(const Scaleform::GFx::DisplayObjectBase * ch); // 0x1403CE790
Scaleform::GFx::DisplayObjectBase * Scaleform::GFx::DisplayList::GetDisplayObjectAtDepth(long depth, bool * pisMarkedForRemove); // 0x1403CED50
Scaleform::GFx::DisplayObjectBase * Scaleform::GFx::DisplayList::GetCharacterAtDepth(long depth, Scaleform::GFx::ResourceId id, unsigned long long * pindex); // 0x1403CEC90
bool Scaleform::GFx::DisplayList::SwapEntriesAtIndexes(Scaleform::GFx::DisplayObjectBase * owner, unsigned long long origIndex1, unsigned long long origIndex2); // 0x1403D0590
Scaleform::GFx::DisplayObject * Scaleform::GFx::DisplayList::GetDisplayObjectByName(const Scaleform::GFx::ASString & name, bool caseSensitive); // 0x1403CEDD0
void Scaleform::GFx::DisplayList::AddDisplayObject(Scaleform::GFx::DisplayObjectBase * owner, const Scaleform::GFx::CharPosInfo & pos, Scaleform::GFx::DisplayObjectBase * ch, unsigned long addFlags); // 0x1403CE4E0
void Scaleform::GFx::DisplayList::AddEntryAtIndex(Scaleform::GFx::DisplayObjectBase * owner, unsigned long long index, Scaleform::GFx::DisplayObjectBase * ch); // 0x1403CE620
void Scaleform::GFx::DisplayList::MoveDisplayObject(Scaleform::GFx::DisplayObjectBase * owner, const Scaleform::GFx::CharPosInfo & pos); // 0x1403CF900
void Scaleform::GFx::DisplayList::ReplaceDisplayObject(Scaleform::GFx::DisplayObjectBase * owner, const Scaleform::GFx::CharPosInfo & pos, Scaleform::GFx::DisplayObjectBase * ch); // 0x1403CFFE0
void Scaleform::GFx::DisplayList::RemoveDisplayObject(Scaleform::GFx::DisplayObjectBase * owner, long depth, Scaleform::GFx::ResourceId id); // 0x1403CFC00
void Scaleform::GFx::DisplayList::RemoveEntryAtIndex(Scaleform::GFx::DisplayObjectBase * owner, unsigned long long index); // 0x1403CFCE0
void Scaleform::GFx::DisplayList::Clear(Scaleform::GFx::DisplayObjectBase * owner); // 0x1403CE6B0
bool Scaleform::GFx::DisplayList::UnloadAll(Scaleform::GFx::DisplayObjectBase * owner); // 0x1403D08F0
void Scaleform::GFx::DisplayList::MarkAllEntriesForRemoval(Scaleform::GFx::DisplayObjectBase * owner, unsigned long targetFrame); // 0x1403CF860
void Scaleform::GFx::DisplayList::UnloadMarkedObjects(Scaleform::GFx::DisplayObjectBase * owner); // 0x1403D0C40
void Scaleform::GFx::DisplayList::ReplaceRenderTreeNode(Scaleform::GFx::DisplayObjectBase * owner, unsigned long long index); // 0x1403D01F0
void Scaleform::GFx::DisplayList::RemoveFromRenderTree(Scaleform::GFx::DisplayObjectBase * owner, unsigned long long index); // 0x1403CFD30
void Scaleform::GFx::DisplayList::InsertIntoRenderTree(Scaleform::GFx::DisplayObjectBase * owner, unsigned long long index); // 0x1403CF330
bool Scaleform::GFx::DisplayList::SwapRenderTreeNodes(Scaleform::GFx::DisplayObjectBase * owner, unsigned long long index1, unsigned long long index2); // 0x1403D06E0
bool Scaleform::GFx::DisplayList::UnloadDisplayObjectAtIndex(Scaleform::GFx::DisplayObjectBase * owner, unsigned long long index); // 0x1403D0AA0
void Scaleform::GFx::DisplayList::PropagateMouseEvent(const Scaleform::GFx::EventId & id); // 0x1403CFAF0
void Scaleform::GFx::DisplayList::PropagateKeyEvent(const Scaleform::GFx::EventId & id, long * pkeyMask); // 0x1403CFA50
Scaleform::Render::Rect<float> Scaleform::GFx::DisplayList::GetBounds(const Scaleform::Render::Matrix2x4<float> & transform); // 0x1403CEA50
Scaleform::Render::Rect<float> Scaleform::GFx::DisplayList::GetRectBounds(const Scaleform::Render::Matrix2x4<float> & transform); // 0x1403CF010
unsigned long long Scaleform::GFx::DisplayList::FindDisplayIndex(long depth); // 0x1403CE7C0void __fastcall Scaleform::GFx::DisplayList::DisplayList(Scaleform::GFx::DisplayList *this)
{
  this->DisplayObjectArray.Data.Data = 0i64;
  this->DisplayObjectArray.Data.Size = 0i64;
  this->DisplayObjectArray.Data.Policy.Capacity = 0i64;
  this->DepthToIndexMap = 0i64;
  this->pCachedChar = 0i64;
  this->ModId = 0;
  this->Flags = 0;
}

void __fastcall Scaleform::GFx::DisplayList::AddDisplayObject(
        Scaleform::GFx::DisplayList *this,
        Scaleform::GFx::DisplayObjectBase *owner,
        const Scaleform::GFx::CharPosInfo *pos,
        Scaleform::GFx::DisplayObjectBase *ch,
        unsigned int addFlags)
{
  int Depth; // er14
  unsigned __int64 Size; // r12
  unsigned __int64 DisplayIndex; // rax
  unsigned __int64 v12; // rsi
  _BOOL8 v13; // rdx

  Depth = pos->Depth;
  Size = this->DisplayObjectArray.Data.Size;
  DisplayIndex = Scaleform::GFx::DisplayList::FindDisplayIndex(this, Depth);
  v12 = DisplayIndex;
  this->pCachedChar = 0i64;
  if ( (addFlags & 1) != 0
    && DisplayIndex < Size
    && this->DisplayObjectArray.Data.Data[DisplayIndex].pCharacter->Depth == Depth )
  {
    Scaleform::GFx::DisplayList::UnloadDisplayObjectAtIndex(this, owner, DisplayIndex);
    v12 = Scaleform::GFx::DisplayList::FindDisplayIndex(this, Depth);
  }
  ch->Depth = Depth;
  Scaleform::GFx::DisplayObjectBase::SetCxform(ch, &pos->ColorTransform);
  ch->SetMatrix(ch, &pos->Matrix_1);
  ((void (__fastcall *)(Scaleform::GFx::DisplayObjectBase *))ch->SetRatio)(ch);
  ch->ClipDepth = pos->ClipDepth;
  ch->SetBlendMode(ch, (Scaleform::Render::BlendMode)pos->BlendMode);
  ch->SetFilters(ch, pos->pFilters.pObject);
  if ( (pos->Flags.Flags & 0x200) != 0 )
  {
    LOBYTE(v13) = pos->Visible != 0;
    ch->SetVisible(ch, v13);
  }
  ++this->ModId;
  Scaleform::GFx::DisplayList::AddEntryAtIndex(this, owner, v12, ch);
  ch->Flags &= 0xEFEFu;
  ch->OnEventLoad(ch);
}

void __fastcall Scaleform::GFx::DisplayList::AddEntryAtIndex(
        Scaleform::GFx::DisplayList *this,
        Scaleform::GFx::DisplayObjectBase *owner,
        unsigned __int64 index,
        Scaleform::GFx::DisplayObjectBase *ch)
{
  unsigned __int8 Flags; // al
  Scaleform::GFx::DisplayList::DisplayEntry val; // [rsp+20h] [rbp-18h] BYREF

  *(_QWORD *)&val.TreeIndex = -1i64;
  val.pCharacter = ch;
  if ( ch )
    ++ch->RefCount;
  ++this->ModId;
  Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::GFx::DisplayList::DisplayEntry,Scaleform::AllocatorLH<Scaleform::GFx::DisplayList::DisplayEntry,2>,Scaleform::ArrayDefaultPolicy>>::InsertAt(
    &this->DisplayObjectArray,
    index,
    &val);
  Scaleform::GFx::DisplayList::InsertIntoRenderTree(this, owner, index);
  Flags = this->Flags;
  if ( (Flags & 2) != 0 )
    this->Flags = Flags | 1;
  if ( ch )
    Scaleform::RefCountNTSImpl::Release(ch);
}

void __fastcall Scaleform::GFx::DisplayList::Clear(
        Scaleform::GFx::DisplayList *this,
        Scaleform::GFx::DisplayObjectBase *owner)
{
  Scaleform::GFx::MovieImpl *pMovieImpl; // rdi
  Scaleform::GFx::MovieDefImpl *v5; // rax
  Scaleform::GFx::DisplayList::DisplayEntry *Data; // rdi
  Scaleform::GFx::DisplayObjectBase *pCharacter; // rcx

  pMovieImpl = owner->pASRoot->pMovieImpl;
  v5 = owner->GetResourceMovieDef(owner);
  Scaleform::GFx::MovieImpl::AddMovieDefToKillList(pMovieImpl, v5);
  while ( this->DisplayObjectArray.Data.Size )
  {
    ++this->ModId;
    Data = this->DisplayObjectArray.Data.Data;
    this->pCachedChar = 0i64;
    Data->pCharacter->OnEventUnload(Data->pCharacter);
    Scaleform::GFx::DisplayList::RemoveFromRenderTree(this, owner, 0i64);
    Data->pCharacter->pParent = 0i64;
    if ( this->DisplayObjectArray.Data.Size == 1 )
    {
      Scaleform::ArrayDataBase<Scaleform::GFx::DisplayList::DisplayEntry,Scaleform::AllocatorLH<Scaleform::GFx::DisplayList::DisplayEntry,2>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
        (Scaleform::ArrayDataBase<Scaleform::GFx::Button::CharToRec,Scaleform::AllocatorLH<Scaleform::GFx::Button::CharToRec,2>,Scaleform::ArrayDefaultPolicy> *)this,
        this,
        0i64);
    }
    else
    {
      pCharacter = this->DisplayObjectArray.Data.Data->pCharacter;
      if ( pCharacter )
        Scaleform::RefCountNTSImpl::Release(pCharacter);
      memmove(
        this->DisplayObjectArray.Data.Data,
        &this->DisplayObjectArray.Data.Data[1],
        16 * this->DisplayObjectArray.Data.Size - 16);
      --this->DisplayObjectArray.Data.Size;
    }
  }
  this->pCachedChar = 0i64;
  Scaleform::ArrayDataBase<Scaleform::GFx::DisplayList::DisplayEntry,Scaleform::AllocatorLH<Scaleform::GFx::DisplayList::DisplayEntry,2>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
    (Scaleform::ArrayDataBase<Scaleform::GFx::Button::CharToRec,Scaleform::AllocatorLH<Scaleform::GFx::Button::CharToRec,2>,Scaleform::ArrayDefaultPolicy> *)this,
    this,
    0i64);
}

__int64 __fastcall Scaleform::GFx::DisplayList::FindDisplayIndex(
        Scaleform::GFx::DisplayList *this,
        const Scaleform::GFx::DisplayObjectBase *ch)
{
  unsigned __int64 Size; // r8
  __int64 result; // rax
  Scaleform::GFx::DisplayList::DisplayEntry *i; // rcx

  Size = this->DisplayObjectArray.Data.Size;
  result = 0i64;
  if ( !Size )
    return -1i64;
  for ( i = this->DisplayObjectArray.Data.Data; i->pCharacter != ch; ++i )
  {
    if ( ++result >= Size )
      return -1i64;
  }
  return result;
}

__int64 __fastcall Scaleform::GFx::DisplayList::FindDisplayIndex(Scaleform::GFx::DisplayList *this, int depth)
{
  __int64 v2; // rbx
  __int64 v5; // rbp
  unsigned __int64 v6; // r12
  Scaleform::GFx::DisplayList::DepthToIndexContainer *v7; // rax
  unsigned __int64 Size; // r13
  unsigned __int64 v9; // rsi
  __int64 v10; // r15
  Scaleform::GFx::DisplayList::DisplayEntry *Data; // rcx
  int v12; // er8
  Scaleform::GFx::DisplayList::DepthToIndexContainer *DepthToIndexMap; // rcx
  __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  Scaleform::GFx::DisplayList::DepthToIndexContainer *v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rax
  Scaleform::GFx::DisplayList::DisplayEntry *i; // rcx
  int v21; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0i64;
  if ( (this->Flags & 1) != 0 )
  {
    v5 = -1i64;
    if ( this->DisplayObjectArray.Data.Size <= 0xA )
    {
      DepthToIndexMap = this->DepthToIndexMap;
      if ( DepthToIndexMap )
        Scaleform::ArrayData<Scaleform::GFx::DisplayList::DepthToIndexMapElem,Scaleform::AllocatorLH<Scaleform::GFx::DisplayList::DepthToIndexMapElem,2>,Scaleform::ArrayDefaultPolicy>::Resize(
          &DepthToIndexMap->Array.Data,
          0i64);
    }
    else
    {
      v6 = 0i64;
      if ( !this->DepthToIndexMap )
      {
        v21 = 322;
        v7 = (Scaleform::GFx::DisplayList::DepthToIndexContainer *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                                                     Scaleform::Memory::pGlobalHeap,
                                                                     this,
                                                                     24i64,
                                                                     &v21);
        if ( v7 )
        {
          v7->Array.Data.Data = 0i64;
          v7->Array.Data.Size = 0i64;
          v7->Array.Data.Policy.Capacity = 0i64;
        }
        else
        {
          v7 = 0i64;
        }
        this->DepthToIndexMap = v7;
      }
      Size = this->DisplayObjectArray.Data.Size;
      v9 = 0i64;
      if ( Size )
      {
        v10 = 0i64;
        do
        {
          Data = this->DisplayObjectArray.Data.Data;
          if ( v5 == -1 && Data[v10].pCharacter->Depth >= depth )
            v5 = v9;
          v12 = Data[v10].pCharacter->Depth;
          if ( v12 != -1 )
            Scaleform::GFx::DisplayList::DepthToIndexContainer::SetElement(this->DepthToIndexMap, v6++, v12, v9);
          ++v9;
          ++v10;
        }
        while ( v9 < Size );
      }
      Scaleform::ArrayData<Scaleform::GFx::DisplayList::DepthToIndexMapElem,Scaleform::AllocatorLH<Scaleform::GFx::DisplayList::DepthToIndexMapElem,2>,Scaleform::ArrayDefaultPolicy>::Resize(
        &this->DepthToIndexMap->Array.Data,
        v6);
    }
    this->Flags &= ~1u;
    if ( v5 != -1 )
      return v5;
  }
  if ( (this->Flags & 2) == 0 )
  {
    v15 = this->DisplayObjectArray.Data.Size;
    while ( v15 > 0 )
    {
      if ( this->DisplayObjectArray.Data.Data[(v15 >> 1) + v2].pCharacter->Depth >= depth )
      {
        v15 >>= 1;
      }
      else
      {
        v2 += (v15 >> 1) + 1;
        v15 += -1 - (v15 >> 1);
      }
    }
    return v2;
  }
  v17 = this->DepthToIndexMap;
  if ( !v17 || this->DisplayObjectArray.Data.Size <= 0xA )
  {
    v16 = this->DisplayObjectArray.Data.Size;
    if ( !v16 )
      return v16;
    for ( i = this->DisplayObjectArray.Data.Data; i->pCharacter->Depth < depth; ++i )
    {
      if ( ++v2 >= v16 )
        return this->DisplayObjectArray.Data.Size;
    }
    return v2;
  }
  v18 = v17->Array.Data.Size;
  while ( v18 > 0 )
  {
    v19 = (v18 >> 1) + v2;
    if ( v17->Array.Data.Data[v19].Depth >= depth )
    {
      v18 >>= 1;
    }
    else
    {
      v2 = v19 + 1;
      v18 += -1 - (v18 >> 1);
    }
  }
  if ( v2 == v17->Array.Data.Size )
    return this->DisplayObjectArray.Data.Size;
  else
    return v17->Array.Data.Data[v2].Index;
}

Scaleform::Render::TreeNode *__fastcall Scaleform::Render::TreeContainer::GetAt(
        Scaleform::Render::TreeContainer *this,
        unsigned __int64 index)
{
  __int64 v2; // rax

  v2 = *(_QWORD *)(*(_QWORD *)(((unsigned __int64)this & 0xFFFFFFFFFFFFF000ui64) + 0x20)
                 + 8i64 * (unsigned int)((int)((_DWORD)this - ((unsigned int)this & 0xFFFFF000) - 56) / 56)
                 + 40);
  if ( (*(_BYTE *)(v2 + 144) & 1) != 0 )
    return *(Scaleform::Render::TreeNode **)((*(_QWORD *)(v2 + 144) & 0xFFFFFFFFFFFFFFFEui64) + 8 * index + 16);
  else
    return *(Scaleform::Render::TreeNode **)(v2 + 8 * index + 144);
}

Scaleform::Render::Rect<float> *__fastcall Scaleform::GFx::DisplayList::GetBounds(
        Scaleform::GFx::DisplayList *this,
        Scaleform::Render::Rect<float> *result,
        const Scaleform::Render::Matrix2x4<float> *transform)
{
  unsigned __int64 Size; // r14
  __int64 v4; // rdi
  Scaleform::GFx::DisplayObjectBase *pCharacter; // rsi
  Scaleform::GFx::DisplayObjectBase *v9; // rcx
  float *v10; // rax
  float v11; // xmm4_4
  float v12; // xmm3_4
  float v13; // xmm6_4
  float v14; // xmm5_4
  float v15; // xmm0_4
  float v16; // xmm2_4
  float *v17; // rax
  float v18; // xmm7_4
  float v19; // xmm9_4
  float v20; // xmm6_4
  float v21; // xmm8_4
  float v22; // xmm0_4
  __int128 v24; // [rsp+28h] [rbp-49h] BYREF
  __int128 i; // [rsp+38h] [rbp-39h]
  Scaleform::Render::Rect<float> v26; // [rsp+48h] [rbp-29h] BYREF

  Size = this->DisplayObjectArray.Data.Size;
  v4 = 0i64;
  *(_QWORD *)&result->x1 = 0i64;
  *(_QWORD *)&result->x2 = 0i64;
  v24 = _xmm;
  for ( i = _xmm; Size; --Size )
  {
    pCharacter = this->DisplayObjectArray.Data.Data[v4].pCharacter;
    if ( pCharacter )
    {
      v9 = this->DisplayObjectArray.Data.Data[v4].pCharacter;
      v24 = *(_OWORD *)&transform->M[0][0];
      i = *(_OWORD *)&transform->M[1][0];
      v10 = (float *)pCharacter->GetMatrix(v9);
      v11 = *(float *)&v24;
      v12 = *((float *)&v24 + 1);
      v13 = *(float *)&i;
      v14 = *((float *)&i + 1);
      *(float *)&v24 = (float)(*((float *)&v24 + 1) * v10[4]) + (float)(*(float *)&v24 * *v10);
      *(float *)&i = (float)(*((float *)&i + 1) * v10[4]) + (float)(*(float *)&i * *v10);
      *((float *)&v24 + 1) = (float)(v11 * v10[1]) + (float)(*((float *)&v24 + 1) * v10[5]);
      v15 = *((float *)&i + 1) * v10[5];
      v16 = v13 * v10[1];
      DWORD2(v24) = 0;
      *(_QWORD *)((char *)&i + 4) = COERCE_UNSIGNED_INT(v16 + v15);
      *((float *)&v24 + 3) = *((float *)&v24 + 3) + (float)((float)(v11 * v10[3]) + (float)(v12 * v10[7]));
      *((float *)&i + 3) = *((float *)&i + 3) + (float)((float)(v13 * v10[3]) + (float)(v14 * v10[7]));
      v17 = (float *)pCharacter->GetBounds(pCharacter, &v26, (const Scaleform::Render::Matrix2x4<float> *)&v24);
      v18 = *v17;
      v19 = v17[2];
      v20 = v17[1];
      v21 = v17[3];
      if ( *v17 < v19 && v20 < v21 )
      {
        if ( Scaleform::Render::Rect<float>::IsEmpty(result) )
        {
          result->x2 = v19;
          result->y2 = v21;
        }
        else
        {
          v18 = fminf(v18, result->x1);
          v20 = fminf(v20, result->y1);
          v22 = fmaxf(result->y2, v21);
          result->x2 = fmaxf(result->x2, v19);
          result->y2 = v22;
        }
        result->y1 = v20;
        result->x1 = v18;
      }
    }
    ++v4;
  }
  return result;
}

Scaleform::GFx::DisplayObjectBase *__fastcall Scaleform::GFx::DisplayList::GetCharacterAtDepth(
        Scaleform::GFx::DisplayList *this,
        int depth,
        _DWORD *id,
        unsigned __int64 *pindex)
{
  unsigned __int64 DisplayIndex; // rax
  unsigned __int64 Size; // r15
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rsi
  Scaleform::GFx::DisplayObjectBase *pCharacter; // rbx

  DisplayIndex = Scaleform::GFx::DisplayList::FindDisplayIndex(this, depth);
  Size = this->DisplayObjectArray.Data.Size;
  v10 = DisplayIndex;
  if ( DisplayIndex >= Size )
    return 0i64;
  v11 = DisplayIndex;
  if ( this->DisplayObjectArray.Data.Data[DisplayIndex].pCharacter->Depth != depth || DisplayIndex == -1i64 )
    return 0i64;
  while ( 1 )
  {
    pCharacter = this->DisplayObjectArray.Data.Data[v11].pCharacter;
    if ( pCharacter )
      ++pCharacter->RefCount;
    if ( pCharacter->Depth == depth && pCharacter->Id.Id == *id )
      break;
    Scaleform::RefCountNTSImpl::Release(pCharacter);
    ++v10;
    ++v11;
    if ( v10 >= Size )
      return 0i64;
  }
  if ( pindex )
    *pindex = v10;
  Scaleform::RefCountNTSImpl::Release(pCharacter);
  return pCharacter;
}

Scaleform::GFx::DisplayObjectBase *__fastcall Scaleform::GFx::DisplayList::GetDisplayObjectAtDepth(
        Scaleform::GFx::DisplayList *this,
        int depth,
        bool *pisMarkedForRemove)
{
  unsigned __int64 DisplayIndex; // rax
  unsigned __int64 v7; // r10
  Scaleform::GFx::DisplayObjectBase *result; // rax

  DisplayIndex = Scaleform::GFx::DisplayList::FindDisplayIndex(this, depth);
  v7 = DisplayIndex;
  if ( DisplayIndex >= this->DisplayObjectArray.Data.Size )
    return 0i64;
  result = this->DisplayObjectArray.Data.Data[DisplayIndex].pCharacter;
  if ( result->Depth != depth || v7 == -1i64 || result->Depth != depth )
    return 0i64;
  if ( pisMarkedForRemove )
    *pisMarkedForRemove = (result->Flags & 0x40) != 0;
  return result;
}

Scaleform::GFx::DisplayObject *__fastcall Scaleform::GFx::DisplayList::GetDisplayObjectByName(
        Scaleform::GFx::DisplayList *this,
        const Scaleform::GFx::ASString *name,
        bool caseSensitive)
{
  int v3; // ebx
  Scaleform::GFx::ASStringNode *pNode; // rcx
  Scaleform::GFx::DisplayObject *pCachedChar; // rcx
  bool v9; // di
  Scaleform::GFx::ASStringNode *v10; // rcx
  bool v11; // zf
  unsigned __int64 Size; // r12
  unsigned __int64 v13; // rbp
  __int64 v14; // r14
  Scaleform::GFx::DisplayObjectBase *pCharacter; // rdi
  bool v16; // si
  Scaleform::GFx::ASStringNode *v17; // rcx
  Scaleform::GFx::DisplayObject *v18; // rcx
  Scaleform::GFx::ASString *v19; // rdi
  char v20; // di
  Scaleform::GFx::ASStringNode *v21; // rcx
  unsigned __int64 v22; // r12
  unsigned __int64 v23; // rbp
  __int64 v24; // r14
  Scaleform::GFx::ASString *v25; // rsi
  char v26; // si
  Scaleform::GFx::ASStringNode *v27; // rcx
  Scaleform::GFx::ASString result; // [rsp+58h] [rbp+10h] BYREF

  v3 = 0;
  LODWORD(result.pNode) = 0;
  pNode = name->pNode;
  if ( !name->pNode->Size )
    return 0i64;
  if ( caseSensitive )
  {
    pCachedChar = this->pCachedChar;
    v9 = 0;
    if ( pCachedChar )
    {
      v3 = 1;
      if ( Scaleform::GFx::DisplayObject::GetName(pCachedChar, &result)->pNode == name->pNode )
        v9 = 1;
    }
    if ( (v3 & 1) != 0 )
    {
      v10 = result.pNode;
      v3 &= ~1u;
      v11 = result.pNode->RefCount-- == 1;
      if ( v11 )
        Scaleform::GFx::ASStringNode::ReleaseNode(v10);
    }
    if ( v9 )
      return this->pCachedChar;
    Size = this->DisplayObjectArray.Data.Size;
    v13 = 0i64;
    if ( !Size )
      goto LABEL_24;
    v14 = 0i64;
    while ( 1 )
    {
      pCharacter = this->DisplayObjectArray.Data.Data[v14].pCharacter;
      v16 = 0;
      if ( pCharacter )
      {
        if ( (pCharacter->Flags & 0x100) != 0 )
        {
          v3 |= 2u;
          if ( Scaleform::GFx::DisplayObject::GetName(
                 (Scaleform::GFx::DisplayObject *)this->DisplayObjectArray.Data.Data[v14].pCharacter,
                 &result)->pNode == name->pNode )
            v16 = 1;
        }
      }
      if ( (v3 & 2) != 0 )
      {
        v17 = result.pNode;
        v3 &= ~2u;
        v11 = result.pNode->RefCount-- == 1;
        if ( v11 )
          Scaleform::GFx::ASStringNode::ReleaseNode(v17);
      }
      if ( v16 )
        break;
      ++v13;
      ++v14;
      if ( v13 >= Size )
        goto LABEL_24;
    }
  }
  else
  {
    if ( !pNode->pLower )
      Scaleform::GFx::ASStringNode::ResolveLowercase_Impl(pNode);
    v18 = this->pCachedChar;
    if ( !v18 )
      goto LABEL_33;
    v19 = Scaleform::GFx::DisplayObject::GetName(v18, &result);
    if ( !v19->pNode->pLower )
      Scaleform::GFx::ASStringNode::ResolveLowercase_Impl(v19->pNode);
    v3 = 4;
    if ( name->pNode->pLower == v19->pNode->pLower )
      v20 = 1;
    else
LABEL_33:
      v20 = 0;
    if ( (v3 & 4) != 0 )
    {
      v21 = result.pNode;
      v3 &= ~4u;
      v11 = result.pNode->RefCount-- == 1;
      if ( v11 )
        Scaleform::GFx::ASStringNode::ReleaseNode(v21);
    }
    if ( v20 )
      return this->pCachedChar;
    v22 = this->DisplayObjectArray.Data.Size;
    v23 = 0i64;
    if ( !v22 )
      goto LABEL_24;
    v24 = 0i64;
    while ( 1 )
    {
      pCharacter = this->DisplayObjectArray.Data.Data[v24].pCharacter;
      if ( !pCharacter || (pCharacter->Flags & 0x100) == 0 )
        goto LABEL_46;
      v3 |= 8u;
      v25 = Scaleform::GFx::DisplayObject::GetName(
              (Scaleform::GFx::DisplayObject *)this->DisplayObjectArray.Data.Data[v24].pCharacter,
              &result);
      if ( !v25->pNode->pLower )
        Scaleform::GFx::ASStringNode::ResolveLowercase_Impl(v25->pNode);
      if ( name->pNode->pLower == v25->pNode->pLower )
        v26 = 1;
      else
LABEL_46:
        v26 = 0;
      if ( (v3 & 8) != 0 )
      {
        v27 = result.pNode;
        v3 &= ~8u;
        v11 = result.pNode->RefCount-- == 1;
        if ( v11 )
          Scaleform::GFx::ASStringNode::ReleaseNode(v27);
      }
      if ( v26 )
        break;
      ++v23;
      ++v24;
      if ( v23 >= v22 )
        goto LABEL_24;
    }
  }
  if ( pCharacter )
  {
    this->pCachedChar = (Scaleform::GFx::DisplayObject *)pCharacter;
    return this->pCachedChar;
  }
LABEL_24:
  this->pCachedChar = 0i64;
  return this->pCachedChar;
}

Scaleform::Render::Rect<float> *__fastcall Scaleform::GFx::DisplayList::GetRectBounds(
        Scaleform::GFx::DisplayList *this,
        Scaleform::Render::Rect<float> *result,
        const Scaleform::Render::Matrix2x4<float> *transform)
{
  unsigned __int64 Size; // r14
  __int64 v4; // rdi
  Scaleform::GFx::DisplayObjectBase *pCharacter; // rsi
  Scaleform::GFx::DisplayObjectBase *v9; // rcx
  float *v10; // rax
  float v11; // xmm4_4
  float v12; // xmm3_4
  float v13; // xmm6_4
  float v14; // xmm5_4
  float v15; // xmm0_4
  float v16; // xmm2_4
  float *v17; // rax
  float v18; // xmm7_4
  float v19; // xmm9_4
  float v20; // xmm6_4
  float v21; // xmm8_4
  float v22; // xmm0_4
  __int128 v24; // [rsp+28h] [rbp-49h] BYREF
  __int128 i; // [rsp+38h] [rbp-39h]
  Scaleform::Render::Rect<float> v26; // [rsp+48h] [rbp-29h] BYREF

  Size = this->DisplayObjectArray.Data.Size;
  v4 = 0i64;
  *(_QWORD *)&result->x1 = 0i64;
  *(_QWORD *)&result->x2 = 0i64;
  v24 = _xmm;
  for ( i = _xmm; Size; --Size )
  {
    pCharacter = this->DisplayObjectArray.Data.Data[v4].pCharacter;
    if ( pCharacter )
    {
      v9 = this->DisplayObjectArray.Data.Data[v4].pCharacter;
      v24 = *(_OWORD *)&transform->M[0][0];
      i = *(_OWORD *)&transform->M[1][0];
      v10 = (float *)pCharacter->GetMatrix(v9);
      v11 = *(float *)&v24;
      v12 = *((float *)&v24 + 1);
      v13 = *(float *)&i;
      v14 = *((float *)&i + 1);
      *(float *)&v24 = (float)(*((float *)&v24 + 1) * v10[4]) + (float)(*(float *)&v24 * *v10);
      *(float *)&i = (float)(*((float *)&i + 1) * v10[4]) + (float)(*(float *)&i * *v10);
      *((float *)&v24 + 1) = (float)(v11 * v10[1]) + (float)(*((float *)&v24 + 1) * v10[5]);
      v15 = *((float *)&i + 1) * v10[5];
      v16 = v13 * v10[1];
      DWORD2(v24) = 0;
      *(_QWORD *)((char *)&i + 4) = COERCE_UNSIGNED_INT(v16 + v15);
      *((float *)&v24 + 3) = *((float *)&v24 + 3) + (float)((float)(v11 * v10[3]) + (float)(v12 * v10[7]));
      *((float *)&i + 3) = *((float *)&i + 3) + (float)((float)(v13 * v10[3]) + (float)(v14 * v10[7]));
      v17 = (float *)pCharacter->GetRectBounds(pCharacter, &v26, (const Scaleform::Render::Matrix2x4<float> *)&v24);
      v18 = *v17;
      v19 = v17[2];
      v20 = v17[1];
      v21 = v17[3];
      if ( *v17 < v19 && v20 < v21 )
      {
        if ( Scaleform::Render::Rect<float>::IsEmpty(result) )
        {
          result->x2 = v19;
          result->y2 = v21;
        }
        else
        {
          v18 = fminf(v18, result->x1);
          v20 = fminf(v20, result->y1);
          v22 = fmaxf(result->y2, v21);
          result->x2 = fmaxf(result->x2, v19);
          result->y2 = v22;
        }
        result->y1 = v20;
        result->x1 = v18;
      }
    }
    ++v4;
  }
  return result;
}

void __fastcall Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::GFx::DisplayList::DisplayEntry,Scaleform::AllocatorLH<Scaleform::GFx::DisplayList::DisplayEntry,2>,Scaleform::ArrayDefaultPolicy>>::InsertAt(
        Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::GFx::DisplayList::DisplayEntry,Scaleform::AllocatorLH<Scaleform::GFx::DisplayList::DisplayEntry,2>,Scaleform::ArrayDefaultPolicy> > *this,
        unsigned __int64 index,
        const Scaleform::GFx::DisplayList::DisplayEntry *val)
{
  unsigned __int64 Size; // rbp
  Scaleform::GFx::DisplayList::DisplayEntry *v7; // rax
  __int64 v8; // rdi
  unsigned __int64 v9; // r8
  Scaleform::GFx::DisplayList::DisplayEntry *v10; // rbx
  Scaleform::GFx::DisplayObjectBase *pCharacter; // rax

  Size = this->Data.Size;
  Scaleform::ArrayDataBase<Scaleform::GFx::DisplayList::DisplayEntry,Scaleform::AllocatorLH<Scaleform::GFx::DisplayList::DisplayEntry,2>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
    (Scaleform::ArrayDataBase<Scaleform::GFx::Button::CharToRec,Scaleform::AllocatorLH<Scaleform::GFx::Button::CharToRec,2>,Scaleform::ArrayDefaultPolicy> *)this,
    this,
    Size + 1);
  if ( Size + 1 > Size )
  {
    v7 = &this->Data.Data[Size];
    v8 = 1i64;
    do
    {
      if ( v7 )
      {
        v7->pCharacter = 0i64;
        *(_QWORD *)&v7->TreeIndex = -1i64;
      }
      ++v7;
      --v8;
    }
    while ( v8 );
  }
  v9 = this->Data.Size;
  if ( index < v9 - 1 )
    memmove(&this->Data.Data[index + 1], &this->Data.Data[index], 16 * (v9 - index) - 16);
  v10 = &this->Data.Data[index];
  if ( v10 )
  {
    v10->pCharacter = 0i64;
    pCharacter = val->pCharacter;
    v10->pCharacter = val->pCharacter;
    if ( pCharacter )
      ++pCharacter->RefCount;
    v10->TreeIndex = val->TreeIndex;
    v10->MaskTreeIndex = val->MaskTreeIndex;
  }
}

void __fastcall Scaleform::GFx::DisplayList::InsertIntoRenderTree(
        Scaleform::GFx::DisplayList *this,
        Scaleform::GFx::DisplayObjectBase *owner,
        unsigned __int64 index)
{
  unsigned __int64 v3; // rsi
  Scaleform::GFx::DisplayList::DisplayEntry *v5; // r13
  unsigned __int64 v6; // rbp
  Scaleform::Render::TreeContainer *v8; // rbx
  Scaleform::Render::TreeNode *RenderNode; // rax
  Scaleform::Render::TreeNode *v10; // r12
  char v11; // r10
  signed __int64 v12; // rdi
  Scaleform::GFx::DisplayList::DisplayEntry *Data; // rdx
  unsigned int *p_TreeIndex; // rcx
  int v15; // er13
  unsigned __int64 v16; // rdi
  Scaleform::Render::ContextImpl::Context *v17; // rax
  Scaleform::Render::TreeContainer *v18; // rbx
  unsigned __int64 Size; // rdx
  unsigned int *v20; // rcx
  unsigned int v21; // er8
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rbp
  Scaleform::GFx::DisplayObjectBase *v24; // r9
  unsigned __int64 v25; // r12
  Scaleform::GFx::DisplayList::DisplayEntry *v26; // r15
  int v27; // ecx
  unsigned __int64 v28; // r13
  Scaleform::Render::TreeNode *v29; // rax
  Scaleform::Render::TreeNode *v30; // rsi
  bool v31; // zf
  Scaleform::GFx::DisplayList::DisplayEntry *v32; // r8
  unsigned int v33; // ebx
  unsigned int *v34; // rax
  Scaleform::GFx::DisplayList::DisplayEntry *v35; // rdi
  int Depth; // ecx
  Scaleform::Render::TreeContainer *v37; // rsi
  Scaleform::Render::ContextImpl::Context *RenderContext; // rax
  Scaleform::Render::TreeContainer *v39; // rbx
  unsigned __int64 v40; // rdx
  unsigned __int64 v41; // r8
  Scaleform::GFx::DisplayList::DisplayEntry *v42; // rcx
  int v43; // er10
  unsigned __int64 v44; // rcx
  unsigned int TreeIndex; // eax
  unsigned int indexa; // [rsp+20h] [rbp-58h]
  Scaleform::Render::TreeContainer *v47; // [rsp+28h] [rbp-50h]
  Scaleform::GFx::DisplayList::DisplayEntry *v48; // [rsp+30h] [rbp-48h]
  Scaleform::Render::TreeNode *v49; // [rsp+38h] [rbp-40h]
  int v50; // [rsp+80h] [rbp+8h]
  unsigned __int64 v51; // [rsp+90h] [rbp+18h]
  unsigned int v52; // [rsp+90h] [rbp+18h]
  Scaleform::GFx::DisplayObjectBase *pCharacter; // [rsp+98h] [rbp+20h]

  v3 = 16 * index;
  v5 = &this->DisplayObjectArray.Data.Data[index];
  v51 = 16 * index;
  v6 = index;
  v48 = v5;
  if ( (v5->pCharacter->Flags & 0x8000u) != 0 )
  {
    Scaleform::GFx::MovieImpl::UpdateTransformParent(owner->pASRoot->pMovieImpl, v5->pCharacter, owner);
    return;
  }
  v8 = owner->GetRenderContainer(owner);
  v47 = v8;
  pCharacter = v5->pCharacter;
  RenderNode = Scaleform::GFx::DisplayObjectBase::GetRenderNode(v5->pCharacter);
  v49 = RenderNode;
  v10 = RenderNode;
  if ( RenderNode )
    ++RenderNode->RefCount;
  v11 = 0;
  if ( !v6 )
  {
    indexa = 0;
    v5->TreeIndex = 0;
LABEL_14:
    v15 = 1;
    v50 = 1;
    goto LABEL_15;
  }
  v12 = this->DisplayObjectArray.Data.Size - 1;
  if ( v6 - 1 < v12 )
    v12 = v6 - 1;
  if ( v12 < 0 )
  {
LABEL_13:
    indexa = 0;
    v5->TreeIndex = 0;
    goto LABEL_14;
  }
  Data = this->DisplayObjectArray.Data.Data;
  p_TreeIndex = &this->DisplayObjectArray.Data.Data[v12].TreeIndex;
  while ( *p_TreeIndex == -1 )
  {
    p_TreeIndex -= 4;
    if ( --v12 < 0 )
      goto LABEL_13;
  }
  v32 = &Data[v12];
  indexa = 0;
  if ( !v32->pCharacter->ClipDepth && v32->MaskTreeIndex == -1 )
    goto LABEL_67;
  v33 = 0;
  if ( v12 )
  {
    v34 = &Data[v12].TreeIndex;
    do
    {
      if ( v34[1] == -1 )
      {
        if ( *v34 != -1 )
          break;
      }
      else if ( *v34 != -1 )
      {
        ++v33;
      }
      v34 -= 4;
      --v12;
    }
    while ( v12 );
  }
  v35 = &Data[v12];
  Depth = pCharacter->Depth;
  if ( Depth <= v35->pCharacter->ClipDepth && (Depth > v35->pCharacter->Depth || Depth == -1) )
  {
    v5->TreeIndex = v35->TreeIndex;
    v5->MaskTreeIndex = v33;
    v37 = (Scaleform::Render::TreeContainer *)Scaleform::Render::TreeContainer::GetAt(v47, v35->TreeIndex);
    if ( pCharacter->ClipDepth )
    {
      RenderContext = Scaleform::GFx::DisplayObjectBase::GetRenderContext(owner);
      v39 = Scaleform::Render::ContextImpl::Context::CreateEntry<Scaleform::Render::TreeContainer>(RenderContext);
      Scaleform::Render::TreeNode::SetMaskNode(v39, v10);
      Scaleform::Render::TreeContainer::Insert(v37, v5->MaskTreeIndex, v39);
      if ( v39 )
      {
        v31 = v39->RefCount-- == 1;
        if ( v31 )
          Scaleform::Render::ContextImpl::Entry::destroyHelper(v39);
      }
    }
    else
    {
      Scaleform::Render::TreeContainer::Insert(v37, v33, v10);
    }
    v40 = v6 + 1;
    if ( v6 + 1 < this->DisplayObjectArray.Data.Size )
    {
      v41 = v40;
      do
      {
        v42 = &this->DisplayObjectArray.Data.Data[v41];
        v43 = v42->pCharacter->Depth;
        if ( v43 > v35->pCharacter->ClipDepth || v43 <= v35->pCharacter->Depth )
          break;
        if ( v42->TreeIndex != -1 )
          ++v42->MaskTreeIndex;
        ++v40;
        ++v41;
      }
      while ( v40 < this->DisplayObjectArray.Data.Size );
    }
    v11 = 1;
    v3 = v51;
  }
  else
  {
LABEL_67:
    v5->TreeIndex = v32->TreeIndex + 1;
  }
  v15 = 1;
  v50 = 1;
  if ( v11 )
    goto LABEL_74;
  v8 = v47;
LABEL_15:
  v16 = v6 + 1;
  if ( pCharacter->ClipDepth )
  {
    v17 = Scaleform::GFx::DisplayObjectBase::GetRenderContext(owner);
    v18 = Scaleform::Render::ContextImpl::Context::CreateEntry<Scaleform::Render::TreeContainer>(v17);
    Scaleform::Render::TreeNode::SetMaskNode(v18, v10);
    Size = this->DisplayObjectArray.Data.Size;
    if ( v16 < Size )
    {
      v20 = (unsigned int *)((char *)&this->DisplayObjectArray.Data.Data[1].TreeIndex + v3);
      v21 = *v20;
      v52 = *v20;
      if ( *v20 != -1 )
        goto LABEL_22;
      v22 = v6 + 1;
      do
      {
        ++v16;
        v20 += 4;
        ++v6;
        if ( ++v22 >= Size )
          break;
        v21 = *v20;
      }
      while ( *v20 == -1 );
      v52 = v21;
      if ( v21 != -1 )
      {
LABEL_22:
        v23 = v6 + 1;
        if ( v23 < Size )
        {
          v24 = pCharacter;
          v25 = v23;
          do
          {
            v26 = &this->DisplayObjectArray.Data.Data[v25];
            v27 = v26->pCharacter->Depth;
            if ( v27 > v24->ClipDepth || v27 <= v24->Depth || v26->pCharacter->ClipDepth )
              break;
            ++v16;
            if ( v26->TreeIndex != -1 )
            {
              v28 = v21;
              v29 = Scaleform::Render::TreeContainer::GetAt(v47, v21);
              v30 = v29;
              if ( v29 )
                ++v29->RefCount;
              Scaleform::Render::TreeContainer::Remove(v47, v28, 1ui64);
              v26->TreeIndex = v48->TreeIndex;
              v26->MaskTreeIndex = indexa;
              Scaleform::Render::TreeContainer::Insert(v18, indexa, v30);
              v15 = v50 - 1;
              ++indexa;
              --v50;
              if ( v30 )
              {
                v31 = v30->RefCount-- == 1;
                if ( v31 )
                  Scaleform::Render::ContextImpl::Entry::destroyHelper(v30);
              }
              v21 = v52;
              v24 = pCharacter;
            }
            ++v23;
            ++v25;
          }
          while ( v23 < this->DisplayObjectArray.Data.Size );
          v10 = v49;
        }
      }
    }
    Scaleform::Render::TreeContainer::Insert(v47, v48->TreeIndex, v18);
    if ( v18 )
    {
      v31 = v18->RefCount-- == 1;
      if ( v31 )
        Scaleform::Render::ContextImpl::Entry::destroyHelper(v18);
    }
  }
  else
  {
    Scaleform::Render::TreeContainer::Insert(v8, v48->TreeIndex, v10);
  }
  if ( v16 < this->DisplayObjectArray.Data.Size )
  {
    v44 = v16;
    do
    {
      TreeIndex = this->DisplayObjectArray.Data.Data[v44].TreeIndex;
      if ( TreeIndex != -1 )
        this->DisplayObjectArray.Data.Data[v44].TreeIndex = v15 + TreeIndex;
      ++v16;
      ++v44;
    }
    while ( v16 < this->DisplayObjectArray.Data.Size );
  }
LABEL_74:
  if ( v10 )
  {
    v31 = v10->RefCount-- == 1;
    if ( v31 )
      Scaleform::Render::ContextImpl::Entry::destroyHelper(v10);
  }
}

bool __fastcall Scaleform::Render::Rect<float>::IsEmpty(Scaleform::Render::Rect<float> *this)
{
  return this->x1 >= this->x2 || this->y1 >= this->y2;
}

void __fastcall Scaleform::GFx::DisplayList::MarkAllEntriesForRemoval(
        Scaleform::GFx::DisplayList *this,
        Scaleform::GFx::DisplayObjectBase *owner,
        unsigned int targetFrame)
{
  unsigned __int64 Size; // rbp
  unsigned __int64 v4; // rdi
  __int64 v8; // rsi
  Scaleform::GFx::DisplayList::DisplayEntry *Data; // rax
  Scaleform::GFx::DisplayObjectBase *pCharacter; // rbx

  Size = this->DisplayObjectArray.Data.Size;
  v4 = 0i64;
  if ( Size )
  {
    v8 = 0i64;
    do
    {
      Data = this->DisplayObjectArray.Data.Data;
      pCharacter = this->DisplayObjectArray.Data.Data[v8].pCharacter;
      if ( pCharacter )
        ++pCharacter->RefCount;
      if ( pCharacter->Depth <= 0x3FFFu && pCharacter->CreateFrame > targetFrame )
      {
        Data[v8].pCharacter->Flags |= 0x40u;
        Scaleform::GFx::DisplayList::RemoveFromRenderTree(this, owner, v4);
      }
      Scaleform::RefCountNTSImpl::Release(pCharacter);
      ++v4;
      ++v8;
    }
    while ( v4 < Size );
  }
}

void __fastcall Scaleform::GFx::DisplayList::MoveDisplayObject(
        Scaleform::GFx::DisplayList *this,
        Scaleform::GFx::DisplayObjectBase *owner,
        const Scaleform::GFx::CharPosInfo *pos)
{
  int Depth; // ebp
  unsigned __int64 Size; // rbx
  unsigned __int64 DisplayIndex; // rax
  Scaleform::GFx::DisplayList::DisplayEntry *v9; // r8
  Scaleform::GFx::DisplayObjectBase *pCharacter; // rbx
  _BOOL8 v11; // rdx
  _BOOL8 v12; // rdx

  Depth = pos->Depth;
  Size = this->DisplayObjectArray.Data.Size;
  DisplayIndex = Scaleform::GFx::DisplayList::FindDisplayIndex(this, Depth);
  if ( DisplayIndex < Size )
  {
    v9 = &this->DisplayObjectArray.Data.Data[DisplayIndex];
    pCharacter = v9->pCharacter;
    if ( v9->pCharacter->Depth == Depth )
    {
      ++this->ModId;
      v9->pCharacter->Flags &= ~0x40u;
      if ( v9->TreeIndex == -1 )
        Scaleform::GFx::DisplayList::InsertIntoRenderTree(this, owner, DisplayIndex);
      if ( !pCharacter->GetAcceptAnimMoves(pCharacter) )
      {
        if ( !pCharacter->GetContinueAnimationFlag(pCharacter) )
          return;
        LOBYTE(v12) = 1;
        pCharacter->SetAcceptAnimMoves(pCharacter, v12);
      }
      if ( (pos->Flags.Flags & 8) != 0 )
        Scaleform::GFx::DisplayObjectBase::SetCxform(pCharacter, &pos->ColorTransform);
      if ( (pos->Flags.Flags & 4) != 0 )
        pCharacter->SetMatrix(pCharacter, &pos->Matrix_1);
      if ( SLOBYTE(pos->Flags.Flags) < 0 )
        pCharacter->SetBlendMode(pCharacter, (Scaleform::Render::BlendMode)pos->BlendMode);
      if ( (pos->Flags.Flags & 0x200) != 0 )
      {
        LOBYTE(v11) = pos->Visible != 0;
        pCharacter->SetVisible(pCharacter, v11);
      }
      pCharacter->SetFilters(pCharacter, pos->pFilters.pObject);
      ((void (__fastcall *)(Scaleform::GFx::DisplayObjectBase *))pCharacter->SetRatio)(pCharacter);
    }
  }
}

void __fastcall Scaleform::GFx::DisplayList::PropagateKeyEvent(
        Scaleform::GFx::DisplayList *this,
        const Scaleform::GFx::EventId *id,
        int *pkeyMask)
{
  unsigned __int64 v3; // rdi
  __int64 v7; // rsi
  Scaleform::GFx::DisplayObjectBase *pCharacter; // rbx

  v3 = 0i64;
  if ( this->DisplayObjectArray.Data.Size )
  {
    v7 = 0i64;
    do
    {
      pCharacter = this->DisplayObjectArray.Data.Data[v7].pCharacter;
      if ( pCharacter )
        ++pCharacter->RefCount;
      if ( pCharacter->GetVisible(pCharacter) && SLOBYTE(pCharacter->Flags) < 0 )
        ((void (__fastcall *)(Scaleform::GFx::DisplayObjectBase *, const Scaleform::GFx::EventId *, int *))pCharacter->Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable[1].SetScale9Grid)(
          pCharacter,
          id,
          pkeyMask);
      Scaleform::RefCountNTSImpl::Release(pCharacter);
      ++v3;
      ++v7;
    }
    while ( v3 < this->DisplayObjectArray.Data.Size );
  }
}

void __fastcall Scaleform::GFx::DisplayList::PropagateMouseEvent(
        Scaleform::GFx::DisplayList *this,
        const Scaleform::GFx::EventId *id)
{
  signed __int64 i; // rbx
  char *pCharacter; // rdi

  for ( i = this->DisplayObjectArray.Data.Size - 1; i >= 0; --i )
  {
    pCharacter = (char *)this->DisplayObjectArray.Data.Data[i].pCharacter;
    if ( (*(unsigned __int8 (__fastcall **)(char *))(*(_QWORD *)pCharacter + 472i64))(pCharacter) )
    {
      if ( pCharacter[106] < 0 )
        (*(void (__fastcall **)(char *, const Scaleform::GFx::EventId *))(*(_QWORD *)pCharacter + 792i64))(
          pCharacter,
          id);
      if ( i >= (signed __int64)this->DisplayObjectArray.Data.Size )
        i = this->DisplayObjectArray.Data.Size;
    }
  }
}

void __fastcall Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::GFx::DisplayList::DisplayEntry,Scaleform::AllocatorLH<Scaleform::GFx::DisplayList::DisplayEntry,2>,Scaleform::ArrayDefaultPolicy>>::RemoveAt(
        Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::GFx::DisplayList::DisplayEntry,Scaleform::AllocatorLH<Scaleform::GFx::DisplayList::DisplayEntry,2>,Scaleform::ArrayDefaultPolicy> > *this,
        unsigned __int64 index)
{
  unsigned __int64 v4; // rdi
  Scaleform::GFx::DisplayObjectBase *pCharacter; // rcx

  if ( this->Data.Size == 1 )
  {
    Scaleform::ArrayDataBase<Scaleform::GFx::DisplayList::DisplayEntry,Scaleform::AllocatorLH<Scaleform::GFx::DisplayList::DisplayEntry,2>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
      (Scaleform::ArrayDataBase<Scaleform::GFx::Button::CharToRec,Scaleform::AllocatorLH<Scaleform::GFx::Button::CharToRec,2>,Scaleform::ArrayDefaultPolicy> *)this,
      this,
      0i64);
  }
  else
  {
    v4 = index;
    pCharacter = this->Data.Data[index].pCharacter;
    if ( pCharacter )
      Scaleform::RefCountNTSImpl::Release(pCharacter);
    memmove(&this->Data.Data[v4], &this->Data.Data[v4 + 1], 16 * (this->Data.Size - index) - 16);
    --this->Data.Size;
  }
}

void __fastcall Scaleform::GFx::DisplayList::RemoveDisplayObject(
        Scaleform::GFx::DisplayList *this,
        Scaleform::GFx::DisplayObjectBase *owner,
        int depth,
        int *id)
{
  unsigned __int64 Size; // rbp
  unsigned __int64 DisplayIndex; // rax
  unsigned __int64 v10; // r10
  unsigned __int64 v11; // rax
  Scaleform::GFx::DisplayObjectBase *pCharacter; // rdi
  int v13; // edx
  Scaleform::GFx::DisplayList::DisplayEntry *v14; // rcx

  Size = this->DisplayObjectArray.Data.Size;
  DisplayIndex = Scaleform::GFx::DisplayList::FindDisplayIndex(this, depth);
  v10 = DisplayIndex;
  if ( DisplayIndex < Size )
  {
    v11 = DisplayIndex;
    pCharacter = this->DisplayObjectArray.Data.Data[v11].pCharacter;
    if ( pCharacter )
      ++pCharacter->RefCount;
    if ( pCharacter->Depth == depth )
    {
      ++this->ModId;
      this->pCachedChar = 0i64;
      v13 = *id;
      if ( *id == 0x40000 || (v14 = &this->DisplayObjectArray.Data.Data[v11], v14->pCharacter->Id.Id == v13) )
      {
LABEL_10:
        Scaleform::GFx::DisplayList::UnloadDisplayObjectAtIndex(this, owner, v10);
      }
      else
      {
        while ( ++v10 < Size && v14[1].pCharacter->Depth == depth )
        {
          v14 = &this->DisplayObjectArray.Data.Data[v10];
          if ( v14->pCharacter->Id.Id == v13 )
            goto LABEL_10;
        }
      }
    }
    Scaleform::RefCountNTSImpl::Release(pCharacter);
  }
}

void __fastcall Scaleform::GFx::DisplayList::RemoveEntryAtIndex(
        Scaleform::GFx::DisplayList *this,
        Scaleform::GFx::DisplayObjectBase *owner,
        unsigned __int64 index)
{
  unsigned __int8 Flags; // al

  Scaleform::GFx::DisplayList::RemoveFromRenderTree(this, owner, index);
  Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::GFx::DisplayList::DisplayEntry,Scaleform::AllocatorLH<Scaleform::GFx::DisplayList::DisplayEntry,2>,Scaleform::ArrayDefaultPolicy>>::RemoveAt(
    &this->DisplayObjectArray,
    index);
  Flags = this->Flags;
  ++this->ModId;
  this->pCachedChar = 0i64;
  if ( (Flags & 2) != 0 )
    this->Flags = Flags | 1;
}

void __fastcall Scaleform::GFx::DisplayList::RemoveFromRenderTree(
        Scaleform::GFx::DisplayList *this,
        Scaleform::GFx::DisplayObjectBase *owner,
        unsigned __int64 index)
{
  unsigned __int64 v3; // r13
  Scaleform::GFx::DisplayList::DisplayEntry *v5; // rsi
  Scaleform::GFx::MovieDefImpl *v7; // rbx
  Scaleform::GFx::MovieImpl *pMovieImpl; // rbx
  Scaleform::GFx::MovieDefImpl *v9; // rax
  Scaleform::Render::TreeContainer *v10; // rax
  unsigned __int64 TreeIndex; // rdx
  Scaleform::Render::TreeContainer *v12; // r9
  int v13; // er12
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // r14
  unsigned __int64 v16; // r15
  Scaleform::GFx::DisplayList::DisplayEntry *v17; // rbp
  unsigned int v18; // eax
  Scaleform::Render::TreeNode *v19; // rax
  Scaleform::Render::TreeNode *v20; // rbx
  unsigned int v21; // eax
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rcx
  unsigned int v25; // eax
  unsigned __int64 MaskTreeIndex; // rbx
  Scaleform::Render::TreeContainer *v27; // rax
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // rcx
  unsigned int v30; // er8
  Scaleform::Render::TreeContainer *v31; // [rsp+60h] [rbp+8h]
  Scaleform::Render::TreeContainer *v32; // [rsp+70h] [rbp+18h]

  v3 = index;
  v5 = &this->DisplayObjectArray.Data.Data[index];
  if ( v5->TreeIndex == -1 )
  {
    if ( (v5->pCharacter->Flags & 0x8000u) != 0 )
      Scaleform::GFx::MovieImpl::UpdateTransformParent(owner->pASRoot->pMovieImpl, v5->pCharacter, 0i64);
  }
  else
  {
    v7 = v5->pCharacter->GetResourceMovieDef(v5->pCharacter);
    if ( v7 != owner->GetResourceMovieDef(owner) )
    {
      pMovieImpl = v5->pCharacter->pASRoot->pMovieImpl;
      v9 = v5->pCharacter->GetResourceMovieDef(v5->pCharacter);
      Scaleform::GFx::MovieImpl::AddMovieDefToKillList(pMovieImpl, v9);
    }
    v10 = owner->GetRenderContainer(owner);
    TreeIndex = v5->TreeIndex;
    v32 = v10;
    if ( v5->MaskTreeIndex == -1 )
    {
      v31 = (Scaleform::Render::TreeContainer *)Scaleform::Render::TreeContainer::GetAt(v10, TreeIndex);
      v12 = v31;
      v13 = -1;
      v14 = (__int64)((unsigned __int128)((__int64)((__int64)&v31[-1] - ((unsigned __int64)v31 & 0xFFFFFFFFFFFFF000ui64))
                                        * (__int128)0x4924924924924925i64) >> 64) >> 4;
      if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(((unsigned __int64)v31 & 0xFFFFFFFFFFFFF000ui64) + 0x20)
                                 + 8 * ((unsigned int)v14 + (v14 >> 63))
                                 + 40)
                     + 10i64) & 0x10) != 0 )
      {
        v15 = v3 + 1;
        if ( v3 + 1 < this->DisplayObjectArray.Data.Size )
        {
          v16 = v15;
          do
          {
            v17 = &this->DisplayObjectArray.Data.Data[v16];
            v18 = v17->TreeIndex;
            if ( (v18 != v5->TreeIndex || v17->MaskTreeIndex == -1) && v18 != -1 )
              break;
            ++v3;
            if ( v18 != -1 )
            {
              v19 = Scaleform::Render::TreeContainer::GetAt(v12, 0i64);
              v20 = v19;
              if ( v19 )
                ++v19->RefCount;
              Scaleform::Render::TreeContainer::Remove(v31, 0i64, 1ui64);
              v21 = v5->TreeIndex + v17->MaskTreeIndex;
              v17->TreeIndex = v21;
              v17->MaskTreeIndex = -1;
              Scaleform::Render::TreeContainer::Insert(v32, v21, v20);
              ++v13;
              if ( v20 )
              {
                if ( v20->RefCount-- == 1 )
                  Scaleform::Render::ContextImpl::Entry::destroyHelper(v20);
              }
              v12 = v31;
            }
            ++v15;
            ++v16;
          }
          while ( v15 < this->DisplayObjectArray.Data.Size );
        }
      }
      Scaleform::Render::TreeContainer::Remove(v32, v13 + v5->TreeIndex + 1, 1ui64);
      v23 = v3 + 1;
      if ( v3 + 1 < this->DisplayObjectArray.Data.Size )
      {
        v24 = v23;
        do
        {
          v25 = this->DisplayObjectArray.Data.Data[v24].TreeIndex;
          if ( v25 != -1 )
            this->DisplayObjectArray.Data.Data[v24].TreeIndex = v13 + v25;
          ++v23;
          ++v24;
        }
        while ( v23 < this->DisplayObjectArray.Data.Size );
      }
    }
    else
    {
      MaskTreeIndex = v5->MaskTreeIndex;
      v27 = (Scaleform::Render::TreeContainer *)Scaleform::Render::TreeContainer::GetAt(v10, TreeIndex);
      Scaleform::Render::TreeContainer::Remove(v27, MaskTreeIndex, 1ui64);
      v28 = v3 + 1;
      if ( v3 + 1 < this->DisplayObjectArray.Data.Size )
      {
        v29 = v28;
        do
        {
          v30 = this->DisplayObjectArray.Data.Data[v29].TreeIndex;
          if ( v30 != -1 )
          {
            if ( v30 != v5->TreeIndex )
              break;
            --this->DisplayObjectArray.Data.Data[v29].MaskTreeIndex;
          }
          ++v28;
          ++v29;
        }
        while ( v28 < this->DisplayObjectArray.Data.Size );
      }
    }
    *(_QWORD *)&v5->TreeIndex = -1i64;
  }
}

void __fastcall Scaleform::GFx::DisplayList::ReplaceDisplayObject(
        Scaleform::GFx::DisplayList *this,
        Scaleform::GFx::DisplayObjectBase *owner,
        const Scaleform::GFx::CharPosInfo *pos,
        Scaleform::GFx::DisplayObjectBase *ch)
{
  int Depth; // er12
  unsigned __int64 Size; // rbx
  unsigned __int64 DisplayIndex; // rax
  unsigned __int64 v11; // r13
  Scaleform::GFx::DisplayList::DisplayEntry *v12; // rbx
  Scaleform::GFx::DisplayObjectBase *pCharacter; // rsi
  Scaleform::GFx::DisplayObjectBase_vtbl *v14; // rax
  const Scaleform::GFx::CharPosInfo *Cxform; // rax
  Scaleform::Render::Matrix2x4<float> *p_Matrix_1; // rax
  Scaleform::Render::BlendMode BlendMode; // eax
  _BOOL8 v18; // rdx
  Scaleform::GFx::DisplayObjectBase_vtbl *v19; // rbx
  bool v20; // al
  unsigned __int8 Flags; // al

  Depth = pos->Depth;
  Size = this->DisplayObjectArray.Data.Size;
  DisplayIndex = Scaleform::GFx::DisplayList::FindDisplayIndex(this, Depth);
  v11 = DisplayIndex;
  if ( DisplayIndex < Size && (v12 = &this->DisplayObjectArray.Data.Data[DisplayIndex], v12->pCharacter->Depth == Depth) )
  {
    ++this->ModId;
    pCharacter = v12->pCharacter;
    if ( v12->pCharacter )
      ++pCharacter->RefCount;
    v14 = ch->Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable;
    ch->Depth = Depth;
    v14->Restart(ch);
    v12->pCharacter->Flags &= ~0x40u;
    if ( v12->TreeIndex == -1 )
      Scaleform::GFx::DisplayList::InsertIntoRenderTree(this, owner, v11);
    if ( v12->pCharacter )
      Scaleform::RefCountNTSImpl::Release(v12->pCharacter);
    v12->pCharacter = ch;
    ++ch->RefCount;
    if ( (pos->Flags.Flags & 8) != 0 )
      Cxform = pos;
    else
      Cxform = (const Scaleform::GFx::CharPosInfo *)Scaleform::GFx::DisplayObjectBase::GetCxform(pCharacter);
    Scaleform::GFx::DisplayObjectBase::SetCxform(ch, &Cxform->ColorTransform);
    if ( (pos->Flags.Flags & 4) != 0 )
      p_Matrix_1 = &pos->Matrix_1;
    else
      p_Matrix_1 = (Scaleform::Render::Matrix2x4<float> *)pCharacter->GetMatrix(pCharacter);
    ch->SetMatrix(ch, p_Matrix_1);
    if ( SLOBYTE(pos->Flags.Flags) >= 0 )
      BlendMode = pCharacter->GetBlendMode(pCharacter);
    else
      BlendMode = pos->BlendMode;
    ch->SetBlendMode(ch, BlendMode);
    ((void (__fastcall *)(Scaleform::GFx::DisplayObjectBase *))ch->SetRatio)(ch);
    ch->ClipDepth = pos->ClipDepth;
    ch->SetFilters(ch, pos->pFilters.pObject);
    if ( (pos->Flags.Flags & 0x200) != 0 )
    {
      LOBYTE(v18) = pos->Visible != 0;
      ch->SetVisible(ch, v18);
    }
    else
    {
      v19 = ch->Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable;
      v20 = pCharacter->GetVisible(pCharacter);
      v19->SetVisible(ch, v20);
    }
    Scaleform::GFx::DisplayList::ReplaceRenderTreeNode(this, owner, v11);
    Flags = this->Flags;
    if ( (Flags & 2) != 0 )
      this->Flags = Flags | 1;
    this->pCachedChar = 0i64;
    pCharacter->OnEventUnload(pCharacter);
    ch->OnEventLoad(ch);
    Scaleform::RefCountNTSImpl::Release(pCharacter);
  }
  else
  {
    Scaleform::GFx::DisplayList::AddDisplayObject(this, owner, pos, ch, 1u);
  }
}

void __fastcall Scaleform::GFx::DisplayList::ReplaceRenderTreeNode(
        Scaleform::GFx::DisplayList *this,
        Scaleform::GFx::DisplayObjectBase *owner,
        unsigned __int64 index)
{
  Scaleform::GFx::DisplayList::DisplayEntry *v4; // rsi
  Scaleform::Render::TreeContainer *v5; // rax
  Scaleform::GFx::DisplayObjectBase *pCharacter; // rdi
  Scaleform::Render::TreeContainer *v7; // rbp
  Scaleform::GFx::MovieDefImpl *v8; // rbx
  Scaleform::GFx::MovieImpl *pMovieImpl; // rbx
  Scaleform::GFx::MovieDefImpl *v10; // rax
  _QWORD *v11; // rdx
  Scaleform::Render::TreeContainer *v12; // rbx
  Scaleform::Render::TreeNode *RenderNode; // rax
  Scaleform::Render::TreeNode *v14; // rax
  unsigned __int64 TreeIndex; // rdx
  Scaleform::Render::TreeContainer *v16; // rcx

  v4 = &this->DisplayObjectArray.Data.Data[index];
  if ( (v4->pCharacter->Flags & 0x8000u) != 0 )
  {
    Scaleform::GFx::MovieImpl::UpdateTransformParent(owner->pASRoot->pMovieImpl, v4->pCharacter, owner);
    return;
  }
  v5 = owner->GetRenderContainer(owner);
  pCharacter = v4->pCharacter;
  v7 = v5;
  v8 = owner->GetResourceMovieDef(owner);
  if ( pCharacter->GetResourceMovieDef(pCharacter) != v8 )
  {
    pMovieImpl = v4->pCharacter->pASRoot->pMovieImpl;
    v10 = v4->pCharacter->GetResourceMovieDef(v4->pCharacter);
    Scaleform::GFx::MovieImpl::AddMovieDefToKillList(pMovieImpl, v10);
  }
  v11 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFF000ui64) + 0x20)
                             + 8i64 * (unsigned int)((int)((_DWORD)v7 - ((unsigned int)v7 & 0xFFFFF000) - 56) / 56)
                             + 40)
                 + 144i64);
  if ( (*(_BYTE *)v11 & 1) != 0 )
    v11 = (_QWORD *)((*v11 & 0xFFFFFFFFFFFFFFFEui64) + 16);
  v12 = (Scaleform::Render::TreeContainer *)v11[v4->TreeIndex];
  if ( v4->MaskTreeIndex == -1 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(((unsigned __int64)v12 & 0xFFFFFFFFFFFFF000ui64) + 0x20)
                               + 8i64 * (unsigned int)((int)((_DWORD)v12 - ((unsigned int)v12 & 0xFFFFF000) - 56) / 56)
                               + 40)
                   + 10i64) & 0x10) != 0 )
    {
      RenderNode = Scaleform::GFx::DisplayObjectBase::GetRenderNode(v4->pCharacter);
      Scaleform::Render::TreeNode::SetMaskNode(v12, RenderNode);
      return;
    }
    Scaleform::Render::TreeContainer::Remove(v7, v4->TreeIndex, 1ui64);
    v14 = Scaleform::GFx::DisplayObjectBase::GetRenderNode(v4->pCharacter);
    TreeIndex = v4->TreeIndex;
    v16 = v7;
  }
  else
  {
    Scaleform::Render::TreeContainer::Remove(v12, v4->MaskTreeIndex, 1ui64);
    v14 = Scaleform::GFx::DisplayObjectBase::GetRenderNode(v4->pCharacter);
    TreeIndex = v4->MaskTreeIndex;
    v16 = v12;
  }
  Scaleform::Render::TreeContainer::Insert(v16, TreeIndex, v14);
}

void __fastcall Scaleform::ArrayDataBase<Scaleform::Render::Text::LineBuffer::Line *,Scaleform::AllocatorLH<Scaleform::Render::Text::LineBuffer::Line *,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        Scaleform::ArrayDataBase<Scaleform::Render::TextureFormat *,Scaleform::AllocatorLH<Scaleform::Render::TextureFormat *,2>,Scaleform::ArrayDefaultPolicy> *this,
        const void *pheapAddr,
        unsigned __int64 newCapacity)
{
  Scaleform::Render::TextureFormat **Data; // rdx
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // r8
  Scaleform::Render::TextureFormat **v8; // rax
  int v9; // [rsp+30h] [rbp+8h] BYREF

  if ( newCapacity != this->Policy.Capacity )
  {
    Data = this->Data;
    if ( newCapacity )
    {
      v6 = (newCapacity + 3) & 0xFFFFFFFFFFFFFFFCui64;
      v7 = 8 * v6;
      if ( Data )
      {
        v8 = (Scaleform::Render::TextureFormat **)Scaleform::Memory::pGlobalHeap->Realloc(
                                                    Scaleform::Memory::pGlobalHeap,
                                                    Data,
                                                    v7);
        this->Policy.Capacity = v6;
        this->Data = v8;
        return;
      }
      v9 = 2;
      this->Data = (Scaleform::Render::TextureFormat **)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                                          Scaleform::Memory::pGlobalHeap,
                                                          pheapAddr,
                                                          v7,
                                                          &v9);
    }
    else
    {
      v6 = 0i64;
      if ( Data )
      {
        ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
        this->Data = 0i64;
        this->Policy.Capacity = 0i64;
        return;
      }
    }
    this->Policy.Capacity = v6;
  }
}

void __fastcall Scaleform::ArrayDataBase<Scaleform::Render::Primitive::MeshEntry,Scaleform::AllocatorLH<Scaleform::Render::Primitive::MeshEntry,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        Scaleform::ArrayDataBase<Scaleform::GFx::Button::CharToRec,Scaleform::AllocatorLH<Scaleform::GFx::Button::CharToRec,2>,Scaleform::ArrayDefaultPolicy> *this,
        const void *pheapAddr,
        unsigned __int64 newCapacity)
{
  Scaleform::GFx::Button::CharToRec *Data; // rdx
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // r8
  Scaleform::GFx::Button::CharToRec *v8; // rax
  int v9; // [rsp+30h] [rbp+8h] BYREF

  if ( newCapacity != this->Policy.Capacity )
  {
    Data = this->Data;
    if ( newCapacity )
    {
      v6 = (newCapacity + 3) & 0xFFFFFFFFFFFFFFFCui64;
      v7 = 16 * v6;
      if ( Data )
      {
        v8 = (Scaleform::GFx::Button::CharToRec *)Scaleform::Memory::pGlobalHeap->Realloc(
                                                    Scaleform::Memory::pGlobalHeap,
                                                    Data,
                                                    v7);
        this->Policy.Capacity = v6;
        this->Data = v8;
        return;
      }
      v9 = 2;
      this->Data = (Scaleform::GFx::Button::CharToRec *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                                          Scaleform::Memory::pGlobalHeap,
                                                          pheapAddr,
                                                          v7,
                                                          &v9);
    }
    else
    {
      v6 = 0i64;
      if ( Data )
      {
        ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
        this->Data = 0i64;
        this->Policy.Capacity = 0i64;
        return;
      }
    }
    this->Policy.Capacity = v6;
  }
}

void __fastcall Scaleform::ArrayData<Scaleform::GFx::DisplayList::DepthToIndexMapElem,Scaleform::AllocatorLH<Scaleform::GFx::DisplayList::DepthToIndexMapElem,2>,Scaleform::ArrayDefaultPolicy>::Resize(
        Scaleform::ArrayData<Scaleform::GFx::DisplayList::DepthToIndexMapElem,Scaleform::AllocatorLH<Scaleform::GFx::DisplayList::DepthToIndexMapElem,2>,Scaleform::ArrayDefaultPolicy> *this,
        unsigned __int64 newSize)
{
  unsigned __int64 Size; // rsi
  unsigned __int64 v5; // r8
  Scaleform::GFx::DisplayList::DepthToIndexMapElem *v6; // rax
  unsigned __int64 i; // rbx

  Size = this->Size;
  if ( newSize >= Size )
  {
    if ( newSize > this->Policy.Capacity )
    {
      v5 = newSize + (newSize >> 2);
      goto LABEL_6;
    }
  }
  else if ( newSize < this->Policy.Capacity >> 1 )
  {
    v5 = newSize;
LABEL_6:
    Scaleform::ArrayDataBase<Scaleform::Render::Text::LineBuffer::Line *,Scaleform::AllocatorLH<Scaleform::Render::Text::LineBuffer::Line *,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      (Scaleform::ArrayDataBase<Scaleform::Render::TextureFormat *,Scaleform::AllocatorLH<Scaleform::Render::TextureFormat *,2>,Scaleform::ArrayDefaultPolicy> *)this,
      this,
      v5);
  }
  this->Size = newSize;
  if ( newSize > Size )
  {
    v6 = &this->Data[Size];
    for ( i = newSize - Size; i; --i )
    {
      if ( v6 )
        *v6 = (Scaleform::GFx::DisplayList::DepthToIndexMapElem)-1i64;
      ++v6;
    }
  }
}

void __fastcall Scaleform::ArrayDataBase<Scaleform::GFx::DisplayList::DisplayEntry,Scaleform::AllocatorLH<Scaleform::GFx::DisplayList::DisplayEntry,2>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
        Scaleform::ArrayDataBase<Scaleform::GFx::Button::CharToRec,Scaleform::AllocatorLH<Scaleform::GFx::Button::CharToRec,2>,Scaleform::ArrayDefaultPolicy> *this,
        const void *pheapAddr,
        unsigned __int64 newSize)
{
  unsigned __int64 Size; // rdi
  unsigned __int64 v7; // rdi
  Scaleform::GFx::Button::CharToRec *i; // rbx

  Size = this->Size;
  if ( newSize >= Size )
  {
    if ( newSize <= this->Policy.Capacity )
    {
      this->Size = newSize;
    }
    else
    {
      Scaleform::ArrayDataBase<Scaleform::Render::Primitive::MeshEntry,Scaleform::AllocatorLH<Scaleform::Render::Primitive::MeshEntry,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        this,
        pheapAddr,
        newSize + (newSize >> 2));
      this->Size = newSize;
    }
  }
  else
  {
    v7 = Size - newSize;
    for ( i = &this->Data[v7 - 1 + newSize]; v7; --v7 )
    {
      if ( i->Char.pObject )
        Scaleform::RefCountNTSImpl::Release(i->Char.pObject);
      --i;
    }
    if ( newSize < this->Policy.Capacity >> 1 )
      Scaleform::ArrayDataBase<Scaleform::Render::Primitive::MeshEntry,Scaleform::AllocatorLH<Scaleform::Render::Primitive::MeshEntry,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        this,
        pheapAddr,
        newSize);
    this->Size = newSize;
  }
}

void __fastcall Scaleform::GFx::DisplayList::DepthToIndexContainer::SetElement(
        Scaleform::GFx::DisplayList::DepthToIndexContainer *this,
        unsigned __int64 index,
        int depth,
        unsigned int mappedIndex)
{
  unsigned __int64 Size; // rax
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // r8
  Scaleform::GFx::DisplayList::DepthToIndexMapElem *Data; // rax
  unsigned __int64 *v9; // rcx
  unsigned __int64 v10; // [rsp+30h] [rbp+8h]

  Size = this->Array.Data.Size;
  v10 = __PAIR64__(mappedIndex, depth);
  if ( index < Size )
  {
    this->Array.Data.Data[index] = (Scaleform::GFx::DisplayList::DepthToIndexMapElem)__PAIR64__(mappedIndex, depth);
    return;
  }
  v6 = Size + 1;
  if ( Size + 1 >= Size )
  {
    if ( v6 <= this->Array.Data.Policy.Capacity )
      goto LABEL_9;
    v7 = v6 + (v6 >> 2);
  }
  else
  {
    if ( v6 >= this->Array.Data.Policy.Capacity >> 1 )
      goto LABEL_9;
    v7 = Size + 1;
  }
  Scaleform::ArrayDataBase<Scaleform::Render::Text::LineBuffer::Line *,Scaleform::AllocatorLH<Scaleform::Render::Text::LineBuffer::Line *,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
    (Scaleform::ArrayDataBase<Scaleform::Render::TextureFormat *,Scaleform::AllocatorLH<Scaleform::Render::TextureFormat *,2>,Scaleform::ArrayDefaultPolicy> *)this,
    this,
    v7);
LABEL_9:
  Data = this->Array.Data.Data;
  this->Array.Data.Size = v6;
  v9 = (unsigned __int64 *)&Data[v6 - 1];
  if ( v9 )
    *v9 = v10;
}

char __fastcall Scaleform::GFx::DisplayList::SwapEntriesAtIndexes(
        Scaleform::GFx::DisplayList *this,
        Scaleform::GFx::DisplayObjectBase *owner,
        unsigned __int64 origIndex1,
        unsigned __int64 origIndex2)
{
  Scaleform::GFx::DisplayList::DisplayEntry *Data; // rax
  Scaleform::GFx::DisplayObjectBase *pCharacter; // rbx
  Scaleform::GFx::DisplayObjectBase *v10; // rcx
  unsigned __int64 v11; // r12
  Scaleform::GFx::DisplayObjectBase *v12; // rbp
  Scaleform::GFx::DisplayList::DisplayEntry *v13; // r13
  Scaleform::GFx::DisplayList::DisplayEntry *v14; // r15
  Scaleform::GFx::DisplayList::DisplayEntry *v15; // r15
  bool v16; // di
  unsigned int TreeIndex; // [rsp+70h] [rbp+18h]
  unsigned int MaskTreeIndex; // [rsp+78h] [rbp+20h]

  if ( origIndex1 == origIndex2 )
    return 1;
  Data = this->DisplayObjectArray.Data.Data;
  pCharacter = this->DisplayObjectArray.Data.Data[origIndex1].pCharacter;
  if ( pCharacter )
    ++pCharacter->RefCount;
  MaskTreeIndex = Data[origIndex1].MaskTreeIndex;
  TreeIndex = Data[origIndex1].TreeIndex;
  if ( (pCharacter->Flags & 0x8000u) != 0
    || origIndex2 < this->DisplayObjectArray.Data.Size
    && (this->DisplayObjectArray.Data.Data[origIndex2].pCharacter->Flags & 0x8000u) != 0 )
  {
    v16 = 0;
  }
  else
  {
    ++this->ModId;
    v10 = this->DisplayObjectArray.Data.Data[origIndex1].pCharacter;
    v11 = origIndex2;
    v12 = this->DisplayObjectArray.Data.Data[origIndex2].pCharacter;
    v13 = &this->DisplayObjectArray.Data.Data[origIndex2];
    v14 = &this->DisplayObjectArray.Data.Data[origIndex1];
    if ( v10 )
      Scaleform::RefCountNTSImpl::Release(v10);
    v14->pCharacter = v12;
    if ( v12 )
      ++v12->RefCount;
    v14->TreeIndex = v13->TreeIndex;
    v14->MaskTreeIndex = v13->MaskTreeIndex;
    v15 = &this->DisplayObjectArray.Data.Data[v11];
    if ( v15->pCharacter )
      Scaleform::RefCountNTSImpl::Release(v15->pCharacter);
    v15->pCharacter = pCharacter;
    ++pCharacter->RefCount;
    v15->TreeIndex = TreeIndex;
    v15->MaskTreeIndex = MaskTreeIndex;
    v16 = Scaleform::GFx::DisplayList::SwapRenderTreeNodes(this, owner, origIndex1, origIndex2);
  }
  Scaleform::RefCountNTSImpl::Release(pCharacter);
  return v16;
}

char __fastcall Scaleform::GFx::DisplayList::SwapRenderTreeNodes(
        Scaleform::GFx::DisplayList *this,
        Scaleform::GFx::DisplayObjectBase *owner,
        unsigned __int64 index1,
        unsigned __int64 index2)
{
  Scaleform::GFx::DisplayList::DisplayEntry *v4; // rdi
  Scaleform::GFx::DisplayList::DisplayEntry *v5; // rbx
  Scaleform::Render::TreeNode *RenderNode; // rax
  unsigned int MaskTreeIndex; // ecx
  Scaleform::Render::TreeNode *v8; // r12
  Scaleform::Render::TreeContainer *pParent; // r15
  unsigned __int64 v10; // r14
  Scaleform::Render::TreeNode *v11; // rax
  unsigned int TreeIndex; // ecx
  Scaleform::Render::TreeNode *v13; // r13
  Scaleform::Render::TreeContainer *v14; // rbp
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // rdx
  Scaleform::Render::TreeNode *v17; // r8
  unsigned __int64 v18; // rdx
  Scaleform::Render::TreeContainer *v19; // rcx
  unsigned int v20; // ecx
  unsigned int v21; // ecx
  unsigned int v22; // ecx
  unsigned int v23; // ecx

  v4 = &this->DisplayObjectArray.Data.Data[index1];
  v5 = &this->DisplayObjectArray.Data.Data[index2];
  if ( (v4->pCharacter->Flags & 0x8000u) == 0 && (v5->pCharacter->Flags & 0x8000u) == 0 )
  {
    RenderNode = Scaleform::GFx::DisplayObjectBase::GetRenderNode(v4->pCharacter);
    MaskTreeIndex = v4->MaskTreeIndex;
    v8 = RenderNode;
    if ( MaskTreeIndex == -1 )
      MaskTreeIndex = v4->TreeIndex;
    pParent = (Scaleform::Render::TreeContainer *)RenderNode->pParent;
    v10 = MaskTreeIndex;
    v11 = Scaleform::GFx::DisplayObjectBase::GetRenderNode(v5->pCharacter);
    TreeIndex = v5->MaskTreeIndex;
    v13 = v11;
    if ( TreeIndex == -1 )
      TreeIndex = v5->TreeIndex;
    v14 = (Scaleform::Render::TreeContainer *)v11->pParent;
    v15 = TreeIndex;
    if ( v4->pCharacter->ClipDepth || v5->pCharacter->ClipDepth )
    {
      v22 = v4->TreeIndex;
      v4->TreeIndex = v5->TreeIndex;
      v5->TreeIndex = v22;
      v23 = v4->MaskTreeIndex;
      v4->MaskTreeIndex = v5->MaskTreeIndex;
      v5->MaskTreeIndex = v23;
      Scaleform::GFx::DisplayList::RemoveFromRenderTree(this, owner, index1);
      Scaleform::GFx::DisplayList::RemoveFromRenderTree(this, owner, index2);
      Scaleform::GFx::DisplayList::InsertIntoRenderTree(this, owner, index1);
      Scaleform::GFx::DisplayList::InsertIntoRenderTree(this, owner, index2);
      return 1;
    }
    if ( pParent == v14 )
    {
      if ( v10 >= TreeIndex )
      {
        Scaleform::Render::TreeContainer::Remove(v14, TreeIndex, 1ui64);
        Scaleform::Render::TreeContainer::Remove(pParent, v10 - 1, 1ui64);
        Scaleform::Render::TreeContainer::Insert(v14, v15, v8);
        v17 = v13;
        v18 = v10;
        v19 = pParent;
LABEL_15:
        Scaleform::Render::TreeContainer::Insert(v19, v18, v17);
        v20 = v4->TreeIndex;
        v4->TreeIndex = v5->TreeIndex;
        v5->TreeIndex = v20;
        v21 = v4->MaskTreeIndex;
        v4->MaskTreeIndex = v5->MaskTreeIndex;
        v5->MaskTreeIndex = v21;
        return 1;
      }
      Scaleform::Render::TreeContainer::Remove(pParent, v10, 1ui64);
      v16 = v15 - 1;
    }
    else
    {
      Scaleform::Render::TreeContainer::Remove(pParent, v10, 1ui64);
      v16 = v15;
    }
    Scaleform::Render::TreeContainer::Remove(v14, v16, 1ui64);
    Scaleform::Render::TreeContainer::Insert(pParent, v10, v13);
    v17 = v8;
    v18 = v15;
    v19 = v14;
    goto LABEL_15;
  }
  return 0;
}

__int64 __fastcall Scaleform::GFx::DisplayList::UnloadAll(
        Scaleform::GFx::DisplayList *this,
        Scaleform::GFx::DisplayObjectBase *owner)
{
  unsigned __int8 v3; // r13
  unsigned __int64 v4; // rsi
  __int64 v5; // r14
  Scaleform::GFx::DisplayList::DisplayEntry *Data; // rax
  Scaleform::GFx::DisplayList::DisplayEntry *v7; // r15
  Scaleform::GFx::DisplayObjectBase *pCharacter; // rdi
  bool v9; // r12
  Scaleform::GFx::DisplayObjectBase *v10; // rcx
  Scaleform::GFx::DisplayObjectBase *v11; // rdi
  int Depth; // ebp
  int v13; // ebp
  __int64 DisplayIndex; // rax
  unsigned __int8 v15; // al
  Scaleform::GFx::DisplayObjectBase *v17; // rcx
  unsigned __int8 Flags; // al
  Scaleform::GFx::DisplayList::DisplayEntry val; // [rsp+20h] [rbp-38h] BYREF
  Scaleform::GFx::DisplayObjectBase *v20; // [rsp+68h] [rbp+10h]

  v20 = owner;
  v3 = 1;
  this->pCachedChar = 0i64;
  v4 = 0i64;
  if ( this->DisplayObjectArray.Data.Size )
  {
    v5 = 0i64;
    do
    {
      Data = this->DisplayObjectArray.Data.Data;
      ++this->ModId;
      v7 = &Data[v5];
      Scaleform::GFx::DisplayList::RemoveFromRenderTree(this, owner, v4);
      pCharacter = v7->pCharacter;
      if ( (v7->pCharacter->Flags & 0x40) != 0 )
        goto LABEL_18;
      if ( !pCharacter )
      {
        v17 = this->DisplayObjectArray.Data.Data[v5].pCharacter;
        if ( v17 )
          v17->pParent = 0i64;
        Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::GFx::DisplayList::DisplayEntry,Scaleform::AllocatorLH<Scaleform::GFx::DisplayList::DisplayEntry,2>,Scaleform::ArrayDefaultPolicy>>::RemoveAt(
          &this->DisplayObjectArray,
          v4);
        Flags = this->Flags;
        this->pCachedChar = 0i64;
        if ( (Flags & 2) != 0 )
          this->Flags = Flags | 1;
        goto LABEL_19;
      }
      if ( (pCharacter->Flags & 0x1000) != 0 || pCharacter->Depth < -1 )
        goto LABEL_18;
      v9 = pCharacter->OnUnloading(v7->pCharacter);
      pCharacter->Flags |= 0x1000u;
      if ( v9 )
      {
        pCharacter->OnEventUnload(pCharacter);
        v10 = this->DisplayObjectArray.Data.Data[v5].pCharacter;
        if ( v10 )
          v10->pParent = 0i64;
        Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::GFx::DisplayList::DisplayEntry,Scaleform::AllocatorLH<Scaleform::GFx::DisplayList::DisplayEntry,2>,Scaleform::ArrayDefaultPolicy>>::RemoveAt(
          &this->DisplayObjectArray,
          v4);
      }
      else
      {
        v11 = v7->pCharacter;
        Depth = v7->pCharacter->Depth;
        if ( Depth >= 0 )
        {
          val.pCharacter = v7->pCharacter;
          v13 = ~Depth;
          if ( v11 )
            ++v11->RefCount;
          val.TreeIndex = v7->TreeIndex;
          val.MaskTreeIndex = v7->MaskTreeIndex;
          Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::GFx::DisplayList::DisplayEntry,Scaleform::AllocatorLH<Scaleform::GFx::DisplayList::DisplayEntry,2>,Scaleform::ArrayDefaultPolicy>>::RemoveAt(
            &this->DisplayObjectArray,
            v4);
          v11->Depth = v13;
          DisplayIndex = Scaleform::GFx::DisplayList::FindDisplayIndex(this, v13);
          Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::GFx::DisplayList::DisplayEntry,Scaleform::AllocatorLH<Scaleform::GFx::DisplayList::DisplayEntry,2>,Scaleform::ArrayDefaultPolicy>>::InsertAt(
            &this->DisplayObjectArray,
            DisplayIndex,
            &val);
          Scaleform::RefCountNTSImpl::Release(v11);
        }
      }
      v15 = this->Flags;
      this->pCachedChar = 0i64;
      if ( (v15 & 2) != 0 )
        this->Flags = v15 | 1;
      if ( !v9 )
      {
LABEL_18:
        ++v4;
        ++v5;
        v3 = 0;
      }
LABEL_19:
      owner = v20;
    }
    while ( v4 < this->DisplayObjectArray.Data.Size );
  }
  return v3;
}

char __fastcall Scaleform::GFx::DisplayList::UnloadDisplayObjectAtIndex(
        Scaleform::GFx::DisplayList *this,
        Scaleform::GFx::DisplayObjectBase *owner,
        unsigned __int64 index)
{
  unsigned __int64 v3; // r14
  Scaleform::GFx::DisplayList::DisplayEntry *v6; // r13
  Scaleform::GFx::DisplayObjectBase *pCharacter; // rdi
  bool v9; // al
  bool v10; // r12
  Scaleform::GFx::DisplayObjectBase *v11; // rdx
  Scaleform::GFx::DisplayObjectBase *v12; // rdi
  int Depth; // ebp
  int v14; // ebp
  __int64 DisplayIndex; // rax
  unsigned __int8 Flags; // al
  Scaleform::GFx::DisplayObjectBase *v17; // rcx
  unsigned __int8 v18; // al
  Scaleform::GFx::DisplayList::DisplayEntry val; // [rsp+20h] [rbp-38h] BYREF

  v3 = index;
  v6 = &this->DisplayObjectArray.Data.Data[index];
  Scaleform::GFx::DisplayList::RemoveFromRenderTree(this, owner, index);
  pCharacter = v6->pCharacter;
  if ( (v6->pCharacter->Flags & 0x40) != 0 )
    return 0;
  if ( pCharacter )
  {
    if ( (pCharacter->Flags & 0x1000) != 0 || pCharacter->Depth < -1 )
    {
      return 0;
    }
    else
    {
      v9 = pCharacter->OnUnloading(pCharacter);
      pCharacter->Flags |= 0x1000u;
      v10 = v9;
      if ( v9 )
      {
        pCharacter->OnEventUnload(pCharacter);
        v11 = this->DisplayObjectArray.Data.Data[v3].pCharacter;
        if ( v11 )
          v11->pParent = 0i64;
        Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::GFx::DisplayList::DisplayEntry,Scaleform::AllocatorLH<Scaleform::GFx::DisplayList::DisplayEntry,2>,Scaleform::ArrayDefaultPolicy>>::RemoveAt(
          &this->DisplayObjectArray,
          index);
      }
      else
      {
        v12 = v6->pCharacter;
        Depth = v6->pCharacter->Depth;
        if ( Depth >= 0 )
        {
          val.pCharacter = v6->pCharacter;
          v14 = ~Depth;
          if ( v12 )
            ++v12->RefCount;
          val.TreeIndex = v6->TreeIndex;
          val.MaskTreeIndex = v6->MaskTreeIndex;
          Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::GFx::DisplayList::DisplayEntry,Scaleform::AllocatorLH<Scaleform::GFx::DisplayList::DisplayEntry,2>,Scaleform::ArrayDefaultPolicy>>::RemoveAt(
            &this->DisplayObjectArray,
            index);
          v12->Depth = v14;
          DisplayIndex = Scaleform::GFx::DisplayList::FindDisplayIndex(this, v14);
          Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::GFx::DisplayList::DisplayEntry,Scaleform::AllocatorLH<Scaleform::GFx::DisplayList::DisplayEntry,2>,Scaleform::ArrayDefaultPolicy>>::InsertAt(
            &this->DisplayObjectArray,
            DisplayIndex,
            &val);
          Scaleform::RefCountNTSImpl::Release(v12);
        }
      }
      Flags = this->Flags;
      this->pCachedChar = 0i64;
      if ( (Flags & 2) != 0 )
        this->Flags = Flags | 1;
      return v10;
    }
  }
  else
  {
    v17 = this->DisplayObjectArray.Data.Data[v3].pCharacter;
    if ( v17 )
      v17->pParent = 0i64;
    Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::GFx::DisplayList::DisplayEntry,Scaleform::AllocatorLH<Scaleform::GFx::DisplayList::DisplayEntry,2>,Scaleform::ArrayDefaultPolicy>>::RemoveAt(
      &this->DisplayObjectArray,
      index);
    v18 = this->Flags;
    this->pCachedChar = 0i64;
    if ( (v18 & 2) != 0 )
      this->Flags = v18 | 1;
    return 1;
  }
}

void __fastcall Scaleform::GFx::DisplayList::UnloadMarkedObjects(
        Scaleform::GFx::DisplayList *this,
        Scaleform::GFx::DisplayObjectBase *owner)
{
  unsigned __int64 v2; // rbx
  __int64 v5; // rdi
  Scaleform::GFx::DisplayObjectBase *pCharacter; // rcx

  v2 = 0i64;
  this->pCachedChar = 0i64;
  if ( this->DisplayObjectArray.Data.Size )
  {
    v5 = 0i64;
    do
    {
      pCharacter = this->DisplayObjectArray.Data.Data[v5].pCharacter;
      if ( (pCharacter->Flags & 0x40) != 0 )
      {
        pCharacter->Flags &= ~0x40u;
        if ( Scaleform::GFx::DisplayList::UnloadDisplayObjectAtIndex(this, owner, v2) )
        {
          --v2;
          --v5;
        }
      }
      ++v2;
      ++v5;
    }
    while ( v2 < this->DisplayObjectArray.Data.Size );
  }
  ++this->ModId;
  this->pCachedChar = 0i64;
}

