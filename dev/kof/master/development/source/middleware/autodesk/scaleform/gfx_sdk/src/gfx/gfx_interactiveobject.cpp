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
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_playerimpl.h"
#include "program files (x86)/windows kits/8.1/include/shared/winerror.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_sprite.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_charposinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_displayobjcontainer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraypaged.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_displaylist.h"
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
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshkey.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_assoundintf.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_rasterizer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_playertasks.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_listalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_screentoworld.h"
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
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_keycodes.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_core.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_range.h"
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
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_queue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_moviedef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitive.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_autoptr.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocaddr.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_radixtree.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filters.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_input.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filterparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_states.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix4x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_statebag.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessgen.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_drawingcontext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessellator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_shapeswf.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_shape.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_fontcompactor.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_pathdatastorage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treeshape.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_log.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_font.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatapacked.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapemeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_loader.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_pathdatapacker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_spritedef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_constants.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_fontmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_fontmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphfitter.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_system.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_interactiveobject.h"
#include "program files (x86)/windows kits/8.1/include/shared/stralign.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_imagecreator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/tga_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_resource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_stroker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hairliner.h"

Scaleform::GFx::InteractiveObject::InteractiveObject(Scaleform::GFx::MovieDefImpl * pbindingDefImpl, Scaleform::GFx::ASMovieRootBase * pasRoot, Scaleform::GFx::InteractiveObject * pparent, Scaleform::GFx::ResourceId id); // 0x140347B80
Scaleform::GFx::InteractiveObject::~InteractiveObject(); // 0x140347C40
Scaleform::Ptr<Scaleform::Render::TreeNode> Scaleform::GFx::InteractiveObject::CreateRenderNode(Scaleform::Render::ContextImpl::Context & context); // 0x140347F20
Scaleform::Render::TreeContainer * Scaleform::GFx::InteractiveObject::GetRenderContainer(); // 0x140348330
Scaleform::GFx::MovieDefImpl * Scaleform::GFx::InteractiveObject::GetResourceMovieDef(); // 0x140348340
void Scaleform::GFx::InteractiveObject::OnEventLoad(); // 0x1403485D0
void Scaleform::GFx::InteractiveObject::OnEventUnload(); // 0x1403485E0
bool Scaleform::GFx::InteractiveObject::OnUnloading(); // 0x1403486A0
bool Scaleform::GFx::InteractiveObject::IsInPlayList(); // 0x140348530
void Scaleform::GFx::InteractiveObject::AddToPlayList(); // 0x140347E80
void Scaleform::GFx::InteractiveObject::InsertToPlayListAfter(Scaleform::GFx::InteractiveObject * pafterCh); // 0x140348380
bool Scaleform::GFx::InteractiveObject::IsValidOptAdvListMember(Scaleform::GFx::MovieImpl * proot); // 0x1403485A0
void Scaleform::GFx::InteractiveObject::AddToOptimizedPlayList(); // 0x140347D20
void Scaleform::GFx::InteractiveObject::RemoveFromPlayList(); // 0x140348760
void Scaleform::GFx::InteractiveObject::RemoveFromOptimizedPlayList(); // 0x1403486D0
void Scaleform::GFx::InteractiveObject::CloneInternalData(const Scaleform::GFx::InteractiveObject * src); // 0x140347ED0
void Scaleform::GFx::InteractiveObject::DoMouseDrag(unsigned long mouseIndex); // 0x140347FE0
bool Scaleform::GFx::InteractiveObject::IsFocusRectEnabled(); // 0x1403484D0
void Scaleform::GFx::InteractiveObject::OnFocus(Scaleform::GFx::InteractiveObject::FocusEventType event, Scaleform::GFx::InteractiveObject * oldOrNewFocusCh, unsigned long controllerIdx, Scaleform::GFx::FocusMovedType fmt); // 0x140348630
bool Scaleform::GFx::InteractiveObject::IsTabable(); // 0x140348560
Scaleform::GFx::ASStringManager * Scaleform::GFx::InteractiveObject::GetStringManager(); // 0x140348360
unsigned long Scaleform::GFx::InteractiveObject::GetCursorType(); // 0x140348250
unsigned short Scaleform::GFx::InteractiveObject::GetFocusGroupMask(); // 0x140348280
bool Scaleform::GFx::InteractiveObject::IsFocusAllowed(Scaleform::GFx::MovieImpl * proot, unsigned long controllerIdx); // 0x140348430
bool Scaleform::GFx::InteractiveObject::IsFocusAllowed(Scaleform::GFx::MovieImpl * proot, unsigned long controllerIdx); // 0x1403483E0
bool Scaleform::GFx::InteractiveObject::IsFocusEnabled(Scaleform::GFx::FocusMovedType fmt); // 0x140348490void __fastcall Scaleform::GFx::InteractiveObject::InteractiveObject(
        Scaleform::GFx::InteractiveObject *this,
        Scaleform::GFx::MovieDefImpl *pbindingDefImpl,
        Scaleform::GFx::ASMovieRootBase *pasRoot,
        Scaleform::GFx::InteractiveObject *pparent,
        _DWORD *id)
{
  LODWORD(id) = *id;
  Scaleform::GFx::DisplayObject::DisplayObject(this, pasRoot, pparent, (unsigned int *)&id);
  this->Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable = (Scaleform::GFx::InteractiveObject_vtbl *)&Scaleform::GFx::InteractiveObject::`vftable'{for `Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>'};
  this->Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Scaleform::GFx::LogBase<Scaleform::GFx::DisplayObjectBase>::__vftable = (Scaleform::GFx::LogBase<Scaleform::GFx::DisplayObjectBase>_vtbl *)&Scaleform::GFx::InteractiveObject::`vftable'{for `Scaleform::GFx::LogBase<Scaleform::GFx::DisplayObjectBase>'};
  if ( pbindingDefImpl )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)pbindingDefImpl);
  this->pDefImpl.pObject = pbindingDefImpl;
  this->Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Flags |= 0x80u;
  *(_QWORD *)&this->Flags = 16i64;
  this->RollOverCnt = 0;
  this->pDisplayCallback = 0i64;
  this->DisplayCallbackUserPtr = 0i64;
  this->pPlayPrev = 0i64;
  this->pPlayNext = 0i64;
  this->pPlayPrevOpt = 0i64;
  this->pPlayNextOpt = 0i64;
}

void __fastcall Scaleform::GFx::InteractiveObject::~InteractiveObject(Scaleform::GFx::InteractiveObject *this)
{
  Scaleform::GFx::MovieDefImpl *pObject; // rcx

  this->Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable = (Scaleform::GFx::InteractiveObject_vtbl *)&Scaleform::GFx::InteractiveObject::`vftable'{for `Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>'};
  this->Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Scaleform::GFx::LogBase<Scaleform::GFx::DisplayObjectBase>::__vftable = (Scaleform::GFx::LogBase<Scaleform::GFx::DisplayObjectBase>_vtbl *)&Scaleform::GFx::InteractiveObject::`vftable'{for `Scaleform::GFx::LogBase<Scaleform::GFx::DisplayObjectBase>'};
  Scaleform::GFx::InteractiveObject::RemoveFromPlayList(this);
  pObject = this->pDefImpl.pObject;
  if ( pObject )
    Scaleform::GFx::Resource::Release(pObject);
  Scaleform::GFx::DisplayObject::~DisplayObject(this);
}

void __fastcall Scaleform::GFx::InteractiveObject::AddToOptimizedPlayList(Scaleform::GFx::InteractiveObject *this)
{
  Scaleform::GFx::ASMovieRootBase *pASRoot; // rax
  unsigned int Flags; // ecx
  Scaleform::GFx::MovieImpl *pMovieImpl; // rdi
  unsigned __int16 v5; // cx
  Scaleform::GFx::InteractiveObject *pPlayPrev; // rcx
  Scaleform::GFx::InteractiveObject *pPlayListOptHead; // rax
  unsigned int v8; // ecx
  unsigned int v9; // ecx
  Scaleform::GFx::InteractiveObject *pPlayNextOpt; // rax

  pASRoot = this->pASRoot;
  Flags = this->Flags;
  pMovieImpl = pASRoot->pMovieImpl;
  if ( (Flags & 0x200000) != 0 || (pMovieImpl->Flags & 0x80000) != 0 )
  {
    this->Flags = Flags & 0xFFBFFFFF;
  }
  else
  {
    v5 = this->Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Flags;
    if ( (v5 & 0x10) == 0
      && (v5 & 0x1000) == 0
      && this->Depth >= -1
      && Scaleform::GFx::InteractiveObject::IsInPlayList(this) )
    {
      pPlayPrev = this->pPlayPrev;
      if ( pPlayPrev )
      {
        while ( (pPlayPrev->Flags & 0x200000) == 0
             || (((unsigned __int8)(pMovieImpl->Flags2 >> 3) ^ (unsigned __int8)(pPlayPrev->Flags >> 23)) & 1) != 0 )
        {
          pPlayPrev = pPlayPrev->pPlayPrev;
          if ( !pPlayPrev )
            goto LABEL_11;
        }
        pPlayNextOpt = pPlayPrev->pPlayNextOpt;
        this->pPlayNextOpt = pPlayNextOpt;
        this->pPlayPrevOpt = pPlayPrev;
        if ( pPlayNextOpt )
          pPlayNextOpt->pPlayPrevOpt = this;
        pPlayPrev->pPlayNextOpt = this;
      }
      else
      {
LABEL_11:
        pPlayListOptHead = pMovieImpl->pPlayListOptHead;
        this->pPlayNextOpt = pPlayListOptHead;
        this->pPlayPrevOpt = 0i64;
        if ( pPlayListOptHead )
          pPlayListOptHead->pPlayPrevOpt = this;
        pMovieImpl->pPlayListOptHead = this;
      }
      this->Flags |= 0x200000u;
      v8 = this->Flags;
      if ( (pMovieImpl->Flags2 & 8) != 0 )
        v9 = v8 | 0x800000;
      else
        v9 = v8 & 0xFF7FFFFF;
      this->Flags = v9;
      this->Flags &= ~0x400000u;
    }
  }
}

void __fastcall Scaleform::GFx::InteractiveObject::AddToPlayList(Scaleform::GFx::InteractiveObject *this)
{
  unsigned __int16 Flags; // dx
  Scaleform::GFx::MovieImpl *pMovieImpl; // rdx
  Scaleform::GFx::InteractiveObject *pPlayListHead; // rax

  Flags = this->Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Flags;
  if ( (Flags & 0x10) == 0 && (Flags & 0x1000) == 0 && this->Depth >= -1 )
  {
    pMovieImpl = this->pASRoot->pMovieImpl;
    pPlayListHead = pMovieImpl->pPlayListHead;
    if ( pPlayListHead )
    {
      pPlayListHead->pPlayPrev = this;
      this->pPlayNext = pMovieImpl->pPlayListHead;
    }
    pMovieImpl->pPlayListHead = this;
  }
}

__int64 __fastcall AgHttp::onSingletonExit(__crt_locale_data *__formal)
{
  return 0i64;
}

void __fastcall Scaleform::GFx::InteractiveObject::CloneInternalData(
        Scaleform::GFx::InteractiveObject *this,
        const Scaleform::GFx::InteractiveObject *src)
{
  Scaleform::GFx::DisplayObjectBase::GeomDataType *pGeomData; // rdx
  unsigned __int8 AvmObjOffset; // al
  __int64 v6; // rax

  pGeomData = src->pGeomData;
  if ( pGeomData )
    Scaleform::GFx::DisplayObjectBase::SetGeomData(this, pGeomData);
  AvmObjOffset = this->AvmObjOffset;
  if ( AvmObjOffset )
  {
    v6 = ((__int64 (__fastcall *)(char *))(*(Scaleform::GFx::InteractiveObject_vtbl **)((char *)&this->Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable
                                                                                      + 4 * AvmObjOffset))->CreateRenderNode)((char *)this + 4 * AvmObjOffset);
    (*(void (__fastcall **)(__int64, const Scaleform::GFx::InteractiveObject *))(*(_QWORD *)v6 + 112i64))(v6, src);
  }
}

Scaleform::Ptr<Scaleform::Render::TreeNode> *__fastcall Scaleform::GFx::InteractiveObject::CreateRenderNode(
        Scaleform::GFx::InteractiveObject *this,
        Scaleform::Ptr<Scaleform::Render::TreeNode> *result,
        Scaleform::Render::ContextImpl::Context *context)
{
  Scaleform::Render::TreeNode::NodeData *v5; // rax
  Scaleform::Render::TreeNode::NodeData *v6; // rdi
  Scaleform::Render::TreeNode *EntryHelper; // rax

  v5 = (Scaleform::Render::TreeNode::NodeData *)context->pHeap->Alloc(context->pHeap, 160i64, 0i64);
  v6 = v5;
  if ( v5 )
  {
    Scaleform::Render::TreeNode::NodeData::NodeData(v5, ET_Container);
    v6->__vftable = (Scaleform::Render::TreeNode::NodeData_vtbl *)&Scaleform::Render::TreeContainer::NodeData::`vftable';
    *(_QWORD *)&v6[1].Type = 0i64;
    v6[1].__vftable = 0i64;
  }
  EntryHelper = (Scaleform::Render::TreeNode *)Scaleform::Render::ContextImpl::Context::createEntryHelper(context, v6);
  if ( EntryHelper )
    ++EntryHelper->RefCount;
  result->pObject = EntryHelper;
  if ( EntryHelper )
  {
    if ( EntryHelper->RefCount-- == 1 )
      Scaleform::Render::ContextImpl::Entry::destroyHelper(EntryHelper);
  }
  return result;
}

void __fastcall Scaleform::GFx::InteractiveObject::DoDisplayCallback(Scaleform::GFx::InteractiveObject *this)
{
  void (__fastcall *pDisplayCallback)(void *); // rax

  pDisplayCallback = this->pDisplayCallback;
  if ( pDisplayCallback )
    pDisplayCallback(this->DisplayCallbackUserPtr);
}

void __fastcall Scaleform::GFx::InteractiveObject::DoMouseDrag(
        Scaleform::GFx::InteractiveObject *this,
        unsigned int mouseIndex)
{
  Scaleform::GFx::ASMovieRootBase *pASRoot; // rax
  Scaleform::GFx::InteractiveObject *pParent; // rcx
  Scaleform::GFx::MovieImpl::DragState st; // [rsp+20h] [rbp-79h] BYREF
  Scaleform::Render::Matrix2x4<float> m; // [rsp+50h] [rbp-49h] BYREF
  Scaleform::Render::Matrix2x4<float> pmat; // [rsp+70h] [rbp-29h] BYREF

  pASRoot = this->pASRoot;
  memset(&st, 0, 18);
  memset(&st.BoundLT, 0, 24);
  st.MouseIndex = -1;
  Scaleform::GFx::MovieImpl::GetDragState(pASRoot->pMovieImpl, mouseIndex, &st);
  if ( this == st.pCharacter )
  {
    pParent = this->pParent;
    *(_OWORD *)&pmat.M[0][0] = _xmm;
    *(_OWORD *)&pmat.M[1][0] = _xmm;
    if ( pParent )
    {
      *(_OWORD *)&pmat.M[0][0] = _xmm;
      *(_OWORD *)&pmat.M[1][0] = _xmm;
      Scaleform::GFx::DisplayObjectBase::GetWorldMatrix(pParent, &pmat);
    }
    m = pmat;
    Scaleform::Render::Matrix2x4<float>::SetInverse(&pmat, &m);
    this->SetAcceptAnimMoves(this, 0);
    ((void (__fastcall *)(Scaleform::GFx::InteractiveObject *))this->SetX)(this);
    ((void (__fastcall *)(Scaleform::GFx::InteractiveObject *))this->SetY)(this);
  }
}

void __fastcall ActorWeapon::ActionFlagCheck(_SETJMP_FLOAT128 *JumpBuffer)
{
  ;
}

__int64 __fastcall Scaleform::GFx::InteractiveObject::GetCursorType(Scaleform::GFx::InteractiveObject *this)
{
  unsigned __int8 AvmObjOffset; // al
  __int64 v2; // rax

  AvmObjOffset = this->AvmObjOffset;
  if ( !AvmObjOffset )
    return 0i64;
  v2 = ((__int64 (__fastcall *)(char *))(*(Scaleform::GFx::InteractiveObject_vtbl **)((char *)&this->Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable
                                                                                    + 4 * AvmObjOffset))->CreateRenderNode)((char *)this + 4 * AvmObjOffset);
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 104i64))(v2);
}

__int64 __fastcall Scaleform::GFx::InteractiveObject::GetFocusGroupMask(Scaleform::GFx::InteractiveObject *this)
{
  Scaleform::GFx::InteractiveObject *pParent; // rcx

  if ( this->FocusGroupMask )
    return this->FocusGroupMask;
  pParent = this->pParent;
  if ( pParent )
    this->FocusGroupMask = Scaleform::GFx::InteractiveObject::GetFocusGroupMask(pParent);
  return this->FocusGroupMask;
}

Scaleform::Render::Rect<float> *__fastcall Scaleform::GFx::InteractiveObject::GetFocusRect(
        Scaleform::GFx::InteractiveObject *this,
        Scaleform::Render::Rect<float> *result)
{
  Scaleform::GFx::InteractiveObject_vtbl *v3; // r9
  __int128 v5[2]; // [rsp+20h] [rbp-38h] BYREF

  v3 = this->Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable;
  v5[0] = _xmm;
  v5[1] = _xmm;
  v3->GetBounds(this, result, (const Scaleform::Render::Matrix2x4<float> *)v5);
  return result;
}

bool __fastcall Scaleform::GFx::InteractiveObject::OnCharEvent(
        Scaleform::Render::Texture *this,
        Scaleform::Render::RenderTargetData *__formal)
{
  return 0;
}

__int64 __fastcall AgUser::isSignedIn(Concurrency::details::ThreadInternalContext *this)
{
  return 1i64;
}

// attributes: thunk
Scaleform::Render::TreeNode *__fastcall Scaleform::GFx::InteractiveObject::GetRenderContainer(
        Scaleform::GFx::InteractiveObject *this)
{
  return Scaleform::GFx::DisplayObjectBase::GetRenderNode(this);
}

Scaleform::GFx::MovieDefImpl *__fastcall Scaleform::GFx::InteractiveObject::GetResourceMovieDef(
        Scaleform::GFx::InteractiveObject *this)
{
  return this->pDefImpl.pObject;
}

__int64 __fastcall Scaleform::GFx::InteractiveObject::GetStateChangeFlags(Scaleform::GFx::InteractiveObject *this)
{
  return HIWORD(this->Flags) & 0xF;
}

Scaleform::GFx::ASStringManager *__fastcall Scaleform::GFx::InteractiveObject::GetStringManager(
        Scaleform::GFx::InteractiveObject *this)
{
  Scaleform::GFx::ASMovieRootBase *pObject; // rcx

  pObject = this->pASRoot->pMovieImpl->pASMovieRoot.pObject;
  return pObject->GetStringManager(pObject);
}

void __fastcall Scaleform::GFx::InteractiveObject::InsertToPlayListAfter(
        Scaleform::GFx::InteractiveObject *this,
        Scaleform::GFx::InteractiveObject *pafterCh)
{
  unsigned __int16 Flags; // r8
  Scaleform::GFx::InteractiveObject *pPlayNext; // rax

  Flags = this->Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Flags;
  if ( (Flags & 0x10) == 0 && (Flags & 0x1000) == 0 && this->Depth >= -1 )
  {
    this->pPlayPrev = pafterCh;
    this->pPlayNext = pafterCh->pPlayNext;
    pafterCh->pPlayNext = this;
    pPlayNext = this->pPlayNext;
    if ( pPlayNext )
      pPlayNext->pPlayPrev = this;
  }
}

unsigned __int8 __fastcall Scaleform::GFx::InteractiveObject::IsFocusAllowed(
        Scaleform::GFx::InteractiveObject *this,
        Scaleform::GFx::MovieImpl *proot,
        unsigned int controllerIdx)
{
  unsigned int v4; // edi
  Scaleform::GFx::InteractiveObject *pParent; // rcx
  int FocusGroupMask; // eax

  v4 = proot->FocusGroupIndexes[controllerIdx];
  if ( !this->FocusGroupMask )
  {
    pParent = this->pParent;
    if ( pParent )
      this->FocusGroupMask = Scaleform::GFx::InteractiveObject::GetFocusGroupMask(pParent);
  }
  FocusGroupMask = this->FocusGroupMask;
  return _bittest(&FocusGroupMask, v4);
}

unsigned __int8 __fastcall Scaleform::GFx::InteractiveObject::IsFocusAllowed(
        Scaleform::GFx::InteractiveObject *this,
        Scaleform::GFx::MovieImpl *proot,
        unsigned int controllerIdx)
{
  unsigned int v3; // edi
  int v4; // eax
  Scaleform::GFx::InteractiveObject *pParent; // rbx
  Scaleform::GFx::InteractiveObject *v6; // rcx

  v3 = proot->FocusGroupIndexes[controllerIdx];
  LOWORD(v4) = this->FocusGroupMask;
  if ( !(_WORD)v4 )
  {
    pParent = this->pParent;
    if ( !pParent->FocusGroupMask )
    {
      v6 = pParent->pParent;
      if ( v6 )
        pParent->FocusGroupMask = Scaleform::GFx::InteractiveObject::GetFocusGroupMask(v6);
    }
    LOWORD(v4) = pParent->FocusGroupMask;
  }
  v4 = (unsigned __int16)v4;
  return _bittest(&v4, v3);
}

char __fastcall Scaleform::GFx::InteractiveObject::IsFocusEnabled(
        Scaleform::GFx::InteractiveObject *this,
        Scaleform::GFx::FocusMovedType fmt)
{
  unsigned __int8 AvmObjOffset; // al
  __int64 v4; // rax

  AvmObjOffset = this->AvmObjOffset;
  if ( !AvmObjOffset )
    return 1;
  v4 = ((__int64 (__fastcall *)(char *))(*(Scaleform::GFx::InteractiveObject_vtbl **)((char *)&this->Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable
                                                                                    + 4 * AvmObjOffset))->CreateRenderNode)((char *)this + 4 * AvmObjOffset);
  return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 160i64))(v4, (unsigned int)fmt);
}

char __fastcall Scaleform::GFx::InteractiveObject::IsFocusRectEnabled(
        Scaleform::GFx::InteractiveObject *this,
        _BOOL8 a2)
{
  Scaleform::GFx::InteractiveObject *v4; // rax

  if ( (this->Flags & 0x180) != 0 )
    return (this->Flags & 0x180) == 384;
  LOBYTE(a2) = 1;
  v4 = this->GetTopParent(this, a2);
  return !v4 || v4 == this || v4->IsFocusRectEnabled(v4);
}

bool __fastcall Scaleform::GFx::InteractiveObject::IsInPlayList(Scaleform::GFx::InteractiveObject *this)
{
  return this->pPlayNext || this->pPlayPrev || this->pASRoot->pMovieImpl->pPlayListHead == this;
}

bool __fastcall Scaleform::GFx::InteractiveObject::IsTabable(Scaleform::GFx::InteractiveObject *this)
{
  unsigned __int8 AvmObjOffset; // al
  __int64 v2; // rax

  AvmObjOffset = this->AvmObjOffset;
  if ( !AvmObjOffset )
    return 0;
  v2 = ((__int64 (__fastcall *)(char *))(*(Scaleform::GFx::InteractiveObject_vtbl **)((char *)&this->Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable
                                                                                    + 4 * AvmObjOffset))->CreateRenderNode)((char *)this + 4 * AvmObjOffset);
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 168i64))(v2);
}

bool __fastcall Scaleform::GFx::InteractiveObject::IsValidOptAdvListMember(
        Scaleform::GFx::InteractiveObject *this,
        Scaleform::GFx::MovieImpl *proot)
{
  return (this->Flags & 0x200000) != 0
      && (((unsigned __int8)(this->Flags >> 23) ^ (unsigned __int8)(proot->Flags2 >> 3)) & 1) == 0;
}

// attributes: thunk
void __fastcall Scaleform::GFx::InteractiveObject::OnEventLoad(Scaleform::GFx::InteractiveObject *this)
{
  Scaleform::GFx::DisplayObject::OnEventLoad(this);
}

void __fastcall Scaleform::GFx::InteractiveObject::OnEventUnload(Scaleform::GFx::InteractiveObject *this)
{
  Scaleform::GFx::MovieImpl *pMovieImpl; // rdi

  this->Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Flags |= 0x1000u;
  pMovieImpl = this->pASRoot->pMovieImpl;
  Scaleform::GFx::InteractiveObject::RemoveFromPlayList(this);
  if ( pMovieImpl )
  {
    Scaleform::GFx::MovieImpl::StopDragCharacter(pMovieImpl, this);
    Scaleform::GFx::MovieImpl::ResetFocusForChar(pMovieImpl, this);
  }
  Scaleform::GFx::DisplayObject::OnEventUnload(this);
}

void __fastcall Scaleform::GFx::InteractiveObject::OnFocus(
        Scaleform::GFx::InteractiveObject *this,
        Scaleform::GFx::InteractiveObject::FocusEventType event,
        Scaleform::GFx::InteractiveObject *oldOrNewFocusCh,
        unsigned int controllerIdx,
        Scaleform::GFx::FocusMovedType fmt)
{
  unsigned __int8 AvmObjOffset; // al
  __int64 v9; // rax

  AvmObjOffset = this->AvmObjOffset;
  if ( AvmObjOffset )
  {
    v9 = ((__int64 (__fastcall *)(char *))(*(Scaleform::GFx::InteractiveObject_vtbl **)((char *)&this->Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable
                                                                                      + 4 * AvmObjOffset))->CreateRenderNode)((char *)this + 4 * AvmObjOffset);
    (*(void (__fastcall **)(__int64, _QWORD, Scaleform::GFx::InteractiveObject *, _QWORD, Scaleform::GFx::FocusMovedType))(*(_QWORD *)v9 + 128i64))(
      v9,
      (unsigned int)event,
      oldOrNewFocusCh,
      controllerIdx,
      fmt);
  }
}

void __fastcall Scaleform::GFx::InteractiveObject::OnKeyEvent(
        Scaleform::GFx::InteractiveObject *this,
        const Scaleform::GFx::EventId *id)
{
  this->OnEvent(this, id);
}

char __fastcall Scaleform::Render::BlendModeEffect::canCacheAcrossTransform(const bool __formal)
{
  return 1;
}

// attributes: thunk
char __fastcall Scaleform::GFx::InteractiveObject::OnUnloading(Scaleform::GFx::InteractiveObject *this)
{
  return Scaleform::Render::BlendModeEffect::canCacheAcrossTransform((const bool)this);
}

void __fastcall Scaleform::GFx::InteractiveObject::PropagateFocusGroupMask(
        Scaleform::GFx::InteractiveObject *this,
        unsigned int mask)
{
  this->FocusGroupMask = mask;
}

void __fastcall Scaleform::GFx::InteractiveObject::PropagateKeyEvent(
        Scaleform::GFx::InteractiveObject *this,
        const Scaleform::GFx::EventId *id,
        int *pkeyMask)
{
  this->OnKeyEvent(this, id, pkeyMask);
}

void __fastcall Scaleform::GFx::InteractiveObject::RemoveFromOptimizedPlayList(Scaleform::GFx::InteractiveObject *this)
{
  Scaleform::GFx::MovieImpl *pMovieImpl; // r8
  Scaleform::GFx::InteractiveObject *pPlayPrevOpt; // rdx
  Scaleform::GFx::InteractiveObject *pPlayNextOpt; // rax
  Scaleform::GFx::InteractiveObject *v4; // rdx

  pMovieImpl = this->pASRoot->pMovieImpl;
  if ( (this->Flags & 0x200000) != 0 )
  {
    if ( (pMovieImpl->Flags & 0x80000) == 0
      && (((unsigned __int8)(this->Flags >> 23) ^ (unsigned __int8)(pMovieImpl->Flags2 >> 3)) & 1) == 0 )
    {
      pPlayPrevOpt = this->pPlayPrevOpt;
      pPlayNextOpt = this->pPlayNextOpt;
      if ( pPlayPrevOpt )
        pPlayPrevOpt->pPlayNextOpt = pPlayNextOpt;
      else
        pMovieImpl->pPlayListOptHead = pPlayNextOpt;
      v4 = this->pPlayNextOpt;
      if ( v4 )
        v4->pPlayPrevOpt = this->pPlayPrevOpt;
    }
    this->Flags &= 0xFF9FFFFF;
    this->pPlayPrevOpt = 0i64;
    this->pPlayNextOpt = 0i64;
  }
}

void __fastcall Scaleform::GFx::InteractiveObject::RemoveFromPlayList(Scaleform::GFx::InteractiveObject *this)
{
  Scaleform::GFx::MovieImpl *pMovieImpl; // rdx
  Scaleform::GFx::InteractiveObject *pPlayPrevOpt; // r8
  Scaleform::GFx::InteractiveObject *pPlayNextOpt; // rax
  Scaleform::GFx::InteractiveObject *v4; // r8
  Scaleform::GFx::InteractiveObject *pPlayNext; // r8
  Scaleform::GFx::InteractiveObject *pPlayPrev; // r8

  pMovieImpl = this->pASRoot->pMovieImpl;
  if ( (this->Flags & 0x200000) != 0 )
  {
    if ( (pMovieImpl->Flags & 0x80000) == 0
      && (((unsigned __int8)(this->Flags >> 23) ^ (unsigned __int8)(pMovieImpl->Flags2 >> 3)) & 1) == 0 )
    {
      pPlayPrevOpt = this->pPlayPrevOpt;
      pPlayNextOpt = this->pPlayNextOpt;
      if ( pPlayPrevOpt )
        pPlayPrevOpt->pPlayNextOpt = pPlayNextOpt;
      else
        pMovieImpl->pPlayListOptHead = pPlayNextOpt;
      v4 = this->pPlayNextOpt;
      if ( v4 )
        v4->pPlayPrevOpt = this->pPlayPrevOpt;
    }
    this->Flags &= 0xFF9FFFFF;
    this->pPlayPrevOpt = 0i64;
    this->pPlayNextOpt = 0i64;
  }
  pPlayNext = this->pPlayNext;
  if ( pPlayNext )
    pPlayNext->pPlayPrev = this->pPlayPrev;
  pPlayPrev = this->pPlayPrev;
  if ( pPlayPrev )
  {
    pPlayPrev->pPlayNext = this->pPlayNext;
    this->pPlayPrev = 0i64;
    this->pPlayNext = 0i64;
  }
  else
  {
    if ( pMovieImpl->pPlayListHead == this )
      pMovieImpl->pPlayListHead = this->pPlayNext;
    this->pPlayPrev = 0i64;
    this->pPlayNext = 0i64;
  }
}

void __fastcall Scaleform::GFx::InteractiveObject::SetBlendMode(
        Scaleform::GFx::InteractiveObject *this,
        Scaleform::Render::BlendMode blend)
{
  Scaleform::GFx::DisplayObjectBase::SetBlendMode(this, blend);
  ActorWeapon::ActionFlagCheck((_SETJMP_FLOAT128 *)this);
}

void __fastcall Scaleform::GFx::InteractiveObject::SetDisplayCallback(
        Scaleform::GFx::InteractiveObject *this,
        void (__fastcall *callback)(void *),
        void *userPtr)
{
  this->pDisplayCallback = callback;
  this->DisplayCallbackUserPtr = userPtr;
}

void __fastcall Scaleform::GFx::InteractiveObject::SetStateChangeFlags(
        Scaleform::GFx::InteractiveObject *this,
        unsigned __int8 flags)
{
  this->Flags &= 0xFFF0FFFF;
  this->Flags |= (flags & 0xF) << 16;
}

