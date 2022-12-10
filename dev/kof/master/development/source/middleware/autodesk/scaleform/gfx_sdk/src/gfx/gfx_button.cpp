#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hairliner.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/jpeg_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefileutil.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_listalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_displayobject.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_buttondef.h"
#include "program files (x86)/windows kits/8.1/include/shared/winerror.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_charposinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_scale9grid.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraypaged.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraystaticbuff.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_streamcontext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_loaderimpl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_resourcehandle.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_stream.h"
#include "program files (x86)/windows kits/8.1/include/shared/guiddef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixstate.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "program files (x86)/windows kits/8.1/include/um/oleauto.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_keycodes.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asmovierootbase.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_player.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hal.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_vertex.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threadcheck.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textlayout.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "program files (x86)/windows kits/8.1/include/um/winnt.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asstring.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_hash.h"
#include "program files (x86)/windows kits/8.1/include/shared/basetsd.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_interactiveobject.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_profiler.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_playertasks.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_drawingcontext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_strokeraa.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_screentoworld.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_shapeswf.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_shape.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treeshape.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapemeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_states.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix4x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_statebag.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshkey.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_log.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_assoundintf.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_rasterizer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_loader.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "program files (x86)/windows kits/8.1/include/um/winuser.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_fontlib.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_system.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_characterdef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixpool.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_resource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_core.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_taskmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_range.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textmeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphparam.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessdefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_playerimpl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_sprite.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_loadprocess.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_displayobjcontainer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_displaylist.h"
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
#include "program files (x86)/windows kits/8.1/include/um/propidl.h"
#include "program files (x86)/windows kits/8.1/include/um/winbase.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_input.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_viewport.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treenode.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_context.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asutils.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_containers.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_drawableimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_fontresource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_buffer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_imageresource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_queue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_moviedef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitive.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_autoptr.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocaddr.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_radixtree.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_spritedef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filters.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_fontmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filterparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_fontmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_event.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessgen.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessellator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_fontcompactor.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_pathdatastorage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_font.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatapacked.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_pathdatapacker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_constants.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_button.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphfitter.h"
#include "program files (x86)/windows kits/8.1/include/shared/stralign.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_imagecreator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/tga_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_stroker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cxform.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_gradients.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"

Scaleform::GFx::Button::Button(Scaleform::GFx::ButtonDef * def, Scaleform::GFx::MovieDefImpl * pbindingDefImpl, Scaleform::GFx::ASMovieRootBase * pasRoot, Scaleform::GFx::InteractiveObject * parent, Scaleform::GFx::ResourceId id); // 0x1406F6710
Scaleform::GFx::Button::~Button(); // 0x1406F6830
void Scaleform::GFx::Button::SetScale9Grid(const Scaleform::Render::Rect<float> & rect); // 0x14034A2B0
void Scaleform::GFx::Button::PropagateScale9GridExists(); // 0x1406F7DC0
void Scaleform::GFx::Button::PropagateNoAdvanceGlobalFlag(); // 0x1406F7B40
void Scaleform::GFx::Button::PropagateNoAdvanceLocalFlag(); // 0x1406F7C80
void Scaleform::GFx::Button::SetVisible(bool visible); // 0x1406F80E0
void Scaleform::GFx::Button::Restart(); // 0x1406F7FA0
void Scaleform::GFx::Button::OnEventLoad(); // 0x1406F74A0
void Scaleform::GFx::Button::OnEventUnload(); // 0x1406F74E0
bool Scaleform::GFx::Button::PointTestLocal(const Scaleform::Render::Point<float> & pt, unsigned char hitTestMask); // 0x1406F7960
Scaleform::GFx::DisplayObjectBase::TopMostResult Scaleform::GFx::Button::GetTopMostMouseEntity(const Scaleform::Render::Point<float> & pt, Scaleform::GFx::DisplayObjectBase::TopMostDescr * pdescr); // 0x1406F7350
Scaleform::Render::Rect<float> Scaleform::GFx::Button::GetBoundsOfRecord(const Scaleform::Render::Matrix2x4<float> & transform, Scaleform::GFx::DisplayObjectBase * pch); // 0x1406F6C20
Scaleform::Render::Rect<float> Scaleform::GFx::Button::GetRectBounds(const Scaleform::Render::Matrix2x4<float> & transform, Scaleform::GFx::DisplayObjectBase * pch); // 0x1406F7090
Scaleform::Render::Rect<float> Scaleform::GFx::Button::GetBounds(const Scaleform::Render::Matrix2x4<float> & transform); // 0x1406F6AF0
Scaleform::Render::Rect<float> Scaleform::GFx::Button::GetRectBounds(const Scaleform::Render::Matrix2x4<float> & transform); // 0x1406F7220
Scaleform::Render::Rect<float> Scaleform::GFx::Button::GetBoundsOfState(const Scaleform::Render::Matrix2x4<float> & transform, Scaleform::GFx::Button::ButtonState state); // 0x1406F6DB0
Scaleform::Render::Rect<float> Scaleform::GFx::Button::GetFocusRect(); // 0x1406F6F10
void Scaleform::GFx::Button::OnGettingKeyboardFocus(unsigned long controllerIdx, Scaleform::GFx::FocusMovedType fmt); // 0x1406F7530
bool Scaleform::GFx::Button::OnLosingKeyboardFocus(Scaleform::GFx::InteractiveObject * __formal, unsigned long controllerIdx, Scaleform::GFx::FocusMovedType __formal); // 0x1406F7740
void Scaleform::GFx::Button::PropagateMouseEvent(const Scaleform::GFx::EventId & evt); // 0x1406F7B00
bool Scaleform::GFx::Button::OnMouseEvent(const Scaleform::GFx::EventId & evt); // 0x1406F77B0
void Scaleform::GFx::Button::UnloadCharactersForState(Scaleform::GFx::Button::ButtonState state); // 0x1406F81C0
void Scaleform::GFx::Button::RemoveDisplayObject(Scaleform::GFx::DisplayObjectBase * chToRemove); // 0x1406F7EE0
void Scaleform::GFx::Button::CreateCharacters(); // 0x1406F69F0
void Scaleform::GFx::Button::SwitchState(); // 0x1406F8180
void Scaleform::GFx::Button::SetStateChangeFlags(unsigned char flags); // 0x1406F8040
bool Scaleform::GFx::Button::OnKeyEvent(const Scaleform::GFx::EventId & id, long * pkeyMask); // 0x1406F7580
void Scaleform::GFx::Button::AdvanceFrame(bool nextFrame, float __formal); // 0x1406F6970
long Scaleform::GFx::Button::CheckAdvanceStatus(bool playingNow); // 0x1406F69C0
Scaleform::GFx::Button::ButtonState Scaleform::GFx::Button::GetButtonState(Scaleform::GFx::ButtonRecord::MouseState mouseState); // 0x1406F6EF0
Scaleform::Ptr<Scaleform::Render::TreeContainer> Scaleform::GFx::Button::CreateStateRenderContainer(Scaleform::GFx::Button::ButtonState buttonState); // 0x1406F6A20void __fastcall Scaleform::GFx::InteractiveObject::ModifyOptimizedPlayListLocal<Scaleform::GFx::Button>(
        Scaleform::GFx::InteractiveObject *this)
{
  unsigned int Flags; // edx
  bool v2; // r8
  int v3; // eax

  Flags = this->Flags;
  v2 = (Flags & 0x200000) != 0 && (Flags & 0x400000) == 0;
  if ( (Flags & 0xC) != 0 || (this->Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Flags & 0x40) != 0 )
  {
    if ( !v2 )
      return;
    goto LABEL_11;
  }
  v3 = !v2;
  if ( v3 == -1 )
  {
LABEL_11:
    this->Flags = Flags | 0x400000;
    return;
  }
  if ( v3 == 1 )
    Scaleform::GFx::InteractiveObject::AddToOptimizedPlayList(this);
}

void __fastcall Scaleform::GFx::Button::Button(
        Scaleform::GFx::Button *this,
        Scaleform::GFx::ButtonDef *def,
        Scaleform::GFx::MovieDefImpl *pbindingDefImpl,
        Scaleform::GFx::ASMovieRootBase *pasRoot,
        Scaleform::GFx::InteractiveObject *parent,
        unsigned int *id)
{
  Scaleform::GFx::Button::StateCharacters *States; // rcx
  __int64 v9; // rdx
  Scaleform::ArrayDefaultPolicy *p_Policy; // rax
  Scaleform::GFx::Scale9Grid *pScale9Grid; // rax
  Scaleform::Render::Rect<float> v12; // xmm0
  Scaleform::GFx::ResourceId v13; // [rsp+30h] [rbp-58h] BYREF
  Scaleform::Render::Rect<float> v14; // [rsp+40h] [rbp-48h]
  Scaleform::Render::Rect<float> rect; // [rsp+50h] [rbp-38h] BYREF

  v13.Id = *id;
  Scaleform::GFx::InteractiveObject::InteractiveObject(
    this,
    pbindingDefImpl,
    pasRoot,
    parent,
    (Scaleform::GFx::ResourceId)&v13);
  this->pDef = def;
  this->Scaleform::GFx::InteractiveObject::Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable = (Scaleform::GFx::Button_vtbl *)&Scaleform::GFx::Button::`vftable'{for `Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>'};
  States = this->States;
  v9 = 4i64;
  this->Scaleform::GFx::InteractiveObject::Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Scaleform::GFx::LogBase<Scaleform::GFx::DisplayObjectBase>::__vftable = (Scaleform::GFx::LogBase<Scaleform::GFx::DisplayObjectBase>_vtbl *)&Scaleform::GFx::Button::`vftable'{for `Scaleform::GFx::LogBase<Scaleform::GFx::DisplayObjectBase>'};
  p_Policy = &this->States[0].Characters.Data.Policy;
  do
  {
    States->pRenNode.pObject = 0i64;
    ++States;
    p_Policy[-2].Capacity = 0i64;
    p_Policy[-1].Capacity = 0i64;
    p_Policy->Capacity = 0i64;
    p_Policy += 4;
    --v9;
  }
  while ( v9 );
  *(_QWORD *)&this->LastMouseFlags = 0i64;
  this->MouseState = Unknown;
  pScale9Grid = def->pScale9Grid;
  if ( pScale9Grid )
    v12 = pScale9Grid->Rect;
  else
    v12 = 0i64;
  v14 = v12;
  rect = v12;
  Scaleform::GFx::DisplayObjContainer::SetScale9Grid((Scaleform::GFx::DisplayObjContainer *)this, &rect);
  if ( this->pDef->Menu )
    this->Scaleform::GFx::InteractiveObject::Flags |= 0x4000u;
  else
    this->Scaleform::GFx::InteractiveObject::Flags &= ~0x4000u;
}

void __fastcall Scaleform::GFx::Button::~Button(Scaleform::GFx::Button *this)
{
  int *p_LastMouseFlags; // rsi
  __int64 v3; // rbp
  __int64 v4; // rdi
  Scaleform::RefCountNTSImpl **v5; // rbx
  Scaleform::Render::ContextImpl::Entry *v6; // rcx

  this->Scaleform::GFx::InteractiveObject::Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable = (Scaleform::GFx::Button_vtbl *)&Scaleform::GFx::Button::`vftable'{for `Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>'};
  p_LastMouseFlags = &this->LastMouseFlags;
  v3 = 4i64;
  this->Scaleform::GFx::InteractiveObject::Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Scaleform::GFx::LogBase<Scaleform::GFx::DisplayObjectBase>::__vftable = (Scaleform::GFx::LogBase<Scaleform::GFx::DisplayObjectBase>_vtbl *)&Scaleform::GFx::Button::`vftable'{for `Scaleform::GFx::LogBase<Scaleform::GFx::DisplayObjectBase>'};
  do
  {
    v4 = *((_QWORD *)p_LastMouseFlags - 2);
    p_LastMouseFlags -= 8;
    v5 = (Scaleform::RefCountNTSImpl **)(16 * v4 + *((_QWORD *)p_LastMouseFlags + 1) - 16i64);
    --v3;
    for ( ; v4; --v4 )
    {
      if ( *v5 )
        Scaleform::RefCountNTSImpl::Release(*v5);
      v5 -= 2;
    }
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, (void *)*((_QWORD *)p_LastMouseFlags + 1));
    v6 = *(Scaleform::Render::ContextImpl::Entry **)p_LastMouseFlags;
    if ( *(_QWORD *)p_LastMouseFlags )
    {
      if ( v6->RefCount-- == 1 )
        Scaleform::Render::ContextImpl::Entry::destroyHelper(v6);
    }
  }
  while ( v3 );
  Scaleform::GFx::InteractiveObject::~InteractiveObject(this);
}

void __fastcall Scaleform::GFx::Button::AdvanceFrame(Scaleform::GFx::Button *this, bool nextFrame, float __formal)
{
  unsigned __int8 AvmObjOffset; // al
  __int64 v4; // rax
  __int64 v5; // [rsp+20h] [rbp-28h] BYREF
  int v6; // [rsp+28h] [rbp-20h]
  char v7; // [rsp+2Ch] [rbp-1Ch]
  int v8; // [rsp+30h] [rbp-18h]

  if ( nextFrame )
  {
    AvmObjOffset = this->AvmObjOffset;
    if ( AvmObjOffset )
    {
      v5 = 2i64;
      v6 = 0;
      v7 = 0;
      v8 = 65280;
      v4 = ((__int64 (__fastcall *)(char *))(*(Scaleform::GFx::Button_vtbl **)((char *)&this->Scaleform::GFx::InteractiveObject::Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable
                                                                             + 4 * AvmObjOffset))->SetMatrix)((char *)this + 4 * AvmObjOffset);
      (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v4 + 64i64))(v4, &v5);
    }
  }
}

__int64 __fastcall Scaleform::GFx::Button::CheckAdvanceStatus(Scaleform::GFx::Button *this, bool playingNow)
{
  unsigned int v2; // er8

  v2 = 0;
  if ( (this->Scaleform::GFx::InteractiveObject::Flags & 0xC) != 0
    || (this->Scaleform::GFx::InteractiveObject::Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Flags & 0x40) != 0 )
  {
    if ( playingNow )
      return (unsigned int)-1;
    return v2;
  }
  else
  {
    LOBYTE(v2) = !playingNow;
    return v2;
  }
}

void __fastcall Scaleform::GFx::Button::CreateCharacters(Scaleform::GFx::Button *this)
{
  unsigned __int8 AvmObjOffset; // al
  __int64 v2; // rax

  AvmObjOffset = this->AvmObjOffset;
  if ( AvmObjOffset )
  {
    v2 = ((__int64 (__fastcall *)(char *))(*(Scaleform::GFx::Button_vtbl **)((char *)&this->Scaleform::GFx::InteractiveObject::Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable
                                                                           + 4 * AvmObjOffset))->SetMatrix)((char *)this + 4 * AvmObjOffset);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 176i64))(v2);
  }
}

Scaleform::Ptr<Scaleform::Render::TreeContainer> *__fastcall Scaleform::GFx::Button::CreateStateRenderContainer(
        Scaleform::GFx::Button *this,
        Scaleform::Ptr<Scaleform::Render::TreeContainer> *result,
        Scaleform::GFx::Button::ButtonState buttonState)
{
  __int64 v3; // r14
  Scaleform::Render::ContextImpl::Context *RenderContext; // rsi
  Scaleform::Render::TreeNode::NodeData *v7; // rax
  Scaleform::Render::TreeNode::NodeData *v8; // rbx
  Scaleform::GFx::Button_vtbl *EntryHelper; // rsi
  __int64 v10; // rbx
  Scaleform::Render::ContextImpl::Entry *v11; // rcx

  v3 = buttonState;
  RenderContext = Scaleform::GFx::DisplayObjectBase::GetRenderContext(this);
  v7 = (Scaleform::Render::TreeNode::NodeData *)RenderContext->pHeap->Alloc(RenderContext->pHeap, 160ui64, 0i64);
  v8 = v7;
  if ( v7 )
  {
    Scaleform::Render::TreeNode::NodeData::NodeData(v7, ET_Container);
    v8->__vftable = (Scaleform::Render::TreeNode::NodeData_vtbl *)&Scaleform::Render::TreeContainer::NodeData::`vftable';
    *(_QWORD *)&v8[1].Type = 0i64;
    v8[1].__vftable = 0i64;
  }
  EntryHelper = (Scaleform::GFx::Button_vtbl *)Scaleform::Render::ContextImpl::Context::createEntryHelper(
                                                 RenderContext,
                                                 v8);
  v10 = 32 * (v3 + 7);
  v11 = *(Scaleform::Render::ContextImpl::Entry **)((char *)&this->Scaleform::GFx::InteractiveObject::Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable
                                                  + v10);
  if ( v11 )
  {
    if ( v11->RefCount-- == 1 )
      Scaleform::Render::ContextImpl::Entry::destroyHelper(v11);
  }
  *(Scaleform::GFx::Button_vtbl **)((char *)&this->Scaleform::GFx::InteractiveObject::Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable
                                  + v10) = EntryHelper;
  if ( EntryHelper )
    ++EntryHelper->CreateRenderNode;
  result->pObject = *(Scaleform::Render::TreeContainer **)((char *)&this->Scaleform::GFx::InteractiveObject::Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable
                                                         + v10);
  return result;
}

Scaleform::Render::Rect<float> *__fastcall Scaleform::GFx::Button::GetBounds(
        Scaleform::GFx::Button *this,
        Scaleform::Render::Rect<float> *result,
        const Scaleform::Render::Matrix2x4<float> *transform)
{
  unsigned __int64 v3; // rdi
  char v5; // r15
  Scaleform::GFx::ButtonRecord::MouseState MouseState; // edx
  __int64 v9; // rsi
  __int32 v10; // edx
  __int64 v11; // rsi
  __int64 v12; // r14
  Scaleform::Render::Rect<float> *BoundsOfRecord; // rax
  float x1; // xmm4_4
  float x2; // xmm0_4
  float y1; // xmm2_4
  float y2; // xmm3_4
  float v18; // xmm1_4
  float v19; // xmm0_4
  Scaleform::Render::Rect<float> resulta; // [rsp+20h] [rbp-28h] BYREF

  v3 = 0i64;
  *(_QWORD *)&result->x1 = 0i64;
  v5 = 0;
  *(_QWORD *)&result->x2 = 0i64;
  MouseState = this->MouseState;
  v9 = 0i64;
  if ( MouseState )
  {
    v10 = MouseState - 1;
    if ( v10 )
    {
      if ( v10 == 1 )
        v9 = 1i64;
    }
    else
    {
      v9 = 2i64;
    }
  }
  v11 = v9;
  if ( this->States[v11].Characters.Data.Size )
  {
    v12 = 0i64;
    do
    {
      BoundsOfRecord = Scaleform::GFx::Button::GetBoundsOfRecord(
                         this,
                         &resulta,
                         transform,
                         this->States[v11].Characters.Data.Data[v12].Char.pObject);
      x1 = BoundsOfRecord->x1;
      x2 = BoundsOfRecord->x2;
      y1 = BoundsOfRecord->y1;
      y2 = BoundsOfRecord->y2;
      if ( x2 != BoundsOfRecord->x1 || y2 != y1 )
      {
        if ( v5 )
        {
          x1 = fminf(x1, result->x1);
          y1 = fminf(y1, result->y1);
          v18 = fmaxf(result->x2, x2);
          v19 = fmaxf(result->y2, y2);
          result->x2 = v18;
          result->y2 = v19;
        }
        else
        {
          result->x2 = x2;
          v5 = 1;
          result->y2 = y2;
        }
        result->y1 = y1;
        result->x1 = x1;
      }
      ++v3;
      ++v12;
    }
    while ( v3 < this->States[v11].Characters.Data.Size );
  }
  return result;
}

Scaleform::Render::Rect<float> *__fastcall Scaleform::GFx::Button::GetBoundsOfRecord(
        Scaleform::GFx::Button *this,
        Scaleform::Render::Rect<float> *result,
        const Scaleform::Render::Matrix2x4<float> *transform,
        Scaleform::GFx::DisplayObjectBase *pch)
{
  Scaleform::GFx::DisplayObjectBase_vtbl *v6; // rax
  float *v7; // rax
  float v8; // xmm4_4
  float v9; // xmm3_4
  float v10; // xmm6_4
  Scaleform::GFx::DisplayObjectBase_vtbl *v11; // r9
  float v12; // xmm5_4
  float v13; // xmm0_4
  float v14; // xmm2_4
  __int64 v15; // rax
  float v16; // xmm2_4
  float v17; // xmm1_4
  float v18; // ecx
  Scaleform::Render::Matrix2x4<float> v20; // [rsp+20h] [rbp-50h] BYREF
  Scaleform::Render::Rect<float> v21; // [rsp+40h] [rbp-30h] BYREF

  *(_QWORD *)&result->x1 = 0i64;
  *(_QWORD *)&result->x2 = 0i64;
  *(_OWORD *)&v20.M[0][0] = _xmm;
  *(_OWORD *)&v20.M[1][0] = _xmm;
  if ( pch )
  {
    v6 = pch->Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable;
    v20 = *transform;
    v7 = (float *)v6->GetMatrix(pch);
    v8 = v20.M[0][0];
    v9 = v20.M[0][1];
    v10 = v20.M[1][0];
    v11 = pch->Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable;
    v12 = v20.M[1][1];
    v20.M[0][0] = (float)(v20.M[0][1] * v7[4]) + (float)(v20.M[0][0] * *v7);
    v20.M[1][0] = (float)(v20.M[1][1] * v7[4]) + (float)(v20.M[1][0] * *v7);
    v20.M[0][1] = (float)(v8 * v7[1]) + (float)(v20.M[0][1] * v7[5]);
    v13 = v20.M[1][1] * v7[5];
    v14 = v10 * v7[1];
    v20.M[0][2] = 0.0;
    *(_QWORD *)&v20.M[1][1] = COERCE_UNSIGNED_INT(v14 + v13);
    v20.M[0][3] = v20.M[0][3] + (float)((float)(v8 * v7[3]) + (float)(v9 * v7[7]));
    v20.M[1][3] = v20.M[1][3] + (float)((float)(v10 * v7[3]) + (float)(v12 * v7[7]));
    v15 = (__int64)v11->GetBounds(pch, &v21, &v20);
    v16 = *(float *)(v15 + 12);
    v17 = *(float *)(v15 + 8);
    v18 = *(float *)v15;
    result->y1 = *(float *)(v15 + 4);
    result->x2 = v17;
    result->y2 = v16;
    result->x1 = v18;
  }
  return result;
}

Scaleform::Render::Rect<float> *__fastcall Scaleform::GFx::Button::GetBoundsOfState(
        Scaleform::GFx::Button *this,
        Scaleform::Render::Rect<float> *result,
        const Scaleform::Render::Matrix2x4<float> *transform,
        Scaleform::GFx::Button::ButtonState state)
{
  unsigned __int64 v4; // rdi
  __int64 v5; // rbp
  __int64 v9; // rsi
  Scaleform::Render::Rect<float> *BoundsOfRecord; // rax
  float x1; // xmm8_4
  float x2; // xmm9_4
  float y1; // xmm6_4
  float y2; // xmm7_4
  float v15; // xmm0_4
  Scaleform::Render::Rect<float> resulta; // [rsp+20h] [rbp-68h] BYREF

  v4 = 0i64;
  v5 = state;
  *(_QWORD *)&result->x1 = 0i64;
  *(_QWORD *)&result->x2 = 0i64;
  if ( this->States[v5].Characters.Data.Size )
  {
    v9 = 0i64;
    do
    {
      BoundsOfRecord = Scaleform::GFx::Button::GetBoundsOfRecord(
                         this,
                         &resulta,
                         transform,
                         this->States[v5].Characters.Data.Data[v9].Char.pObject);
      x1 = BoundsOfRecord->x1;
      x2 = BoundsOfRecord->x2;
      y1 = BoundsOfRecord->y1;
      y2 = BoundsOfRecord->y2;
      if ( x2 != BoundsOfRecord->x1 || y2 != y1 )
      {
        if ( Scaleform::Render::Rect<float>::IsNull(result) )
        {
          result->x2 = x2;
          result->y2 = y2;
        }
        else
        {
          x1 = fminf(x1, result->x1);
          y1 = fminf(y1, result->y1);
          v15 = fmaxf(result->y2, y2);
          result->x2 = fmaxf(result->x2, x2);
          result->y2 = v15;
        }
        result->y1 = y1;
        result->x1 = x1;
      }
      ++v4;
      ++v9;
    }
    while ( v4 < this->States[v5].Characters.Data.Size );
  }
  return result;
}

__int64 __fastcall Scaleform::GFx::Button::GetButtonState(Scaleform::GFx::ButtonRecord::MouseState mouseState)
{
  __int32 v1; // ecx

  if ( mouseState )
  {
    v1 = mouseState - 1;
    if ( !v1 )
      return 2i64;
    if ( v1 == 1 )
      return 1i64;
  }
  return 0i64;
}

Scaleform::GFx::TextFieldDef *__fastcall Scaleform::GFx::Button::GetCharacterDef(Scaleform::GFx::TextField *this)
{
  return this->pDef.pObject;
}

Scaleform::Render::Rect<float> *__fastcall Scaleform::GFx::Button::GetFocusRect(
        Scaleform::GFx::Button *this,
        Scaleform::Render::Rect<float> *result)
{
  Scaleform::Render::Rect<float> *BoundsOfState; // rax
  float x1; // xmm2_4
  float x2; // xmm3_4
  float y1; // xmm0_4
  float y2; // xmm1_4
  Scaleform::Render::Rect<float> *v9; // rax
  Scaleform::Render::Rect<float> *v10; // rax
  Scaleform::Render::Rect<float> *v11; // rax
  Scaleform::Render::Rect<float> resulta; // [rsp+20h] [rbp-48h] BYREF
  Scaleform::Render::Matrix2x4<float> transform; // [rsp+30h] [rbp-38h] BYREF

  *(_OWORD *)&transform.M[0][0] = _xmm;
  *(_OWORD *)&transform.M[1][0] = _xmm;
  BoundsOfState = Scaleform::GFx::Button::GetBoundsOfState(this, &resulta, &transform, Hit);
  x1 = BoundsOfState->x1;
  x2 = BoundsOfState->x2;
  y1 = BoundsOfState->y1;
  y2 = BoundsOfState->y2;
  if ( x2 != BoundsOfState->x1 )
    goto LABEL_10;
  if ( y2 != y1 )
    goto LABEL_10;
  v9 = Scaleform::GFx::Button::GetBoundsOfState(this, &resulta, &transform, Down);
  x1 = v9->x1;
  x2 = v9->x2;
  y1 = v9->y1;
  y2 = v9->y2;
  if ( x2 != v9->x1 )
    goto LABEL_10;
  if ( y2 != y1 )
    goto LABEL_10;
  v10 = Scaleform::GFx::Button::GetBoundsOfState(this, &resulta, &transform, Over);
  x1 = v10->x1;
  x2 = v10->x2;
  y1 = v10->y1;
  y2 = v10->y2;
  if ( x2 != v10->x1 )
    goto LABEL_10;
  if ( y2 == y1
    && (v11 = Scaleform::GFx::Button::GetBoundsOfState(this, &resulta, &transform, Up),
        x1 = v11->x1,
        x2 = v11->x2,
        y1 = v11->y1,
        y2 = v11->y2,
        x2 == v11->x1)
    && y2 == y1 )
  {
    this->GetBounds(this, result, &transform);
  }
  else
  {
LABEL_10:
    result->y2 = y2;
    result->x2 = x2;
    result->y1 = y1;
    result->x1 = x1;
  }
  return result;
}

Scaleform::Render::Rect<float> *__fastcall Scaleform::GFx::Button::GetRectBounds(
        Scaleform::GFx::Button *this,
        Scaleform::Render::Rect<float> *result,
        const Scaleform::Render::Matrix2x4<float> *transform,
        Scaleform::GFx::DisplayObjectBase *pch)
{
  Scaleform::GFx::DisplayObjectBase_vtbl *v6; // rax
  float *v7; // rax
  float v8; // xmm4_4
  float v9; // xmm3_4
  float v10; // xmm6_4
  Scaleform::GFx::DisplayObjectBase_vtbl *v11; // r9
  float v12; // xmm5_4
  float v13; // xmm0_4
  float v14; // xmm2_4
  __int64 v15; // rax
  float v16; // xmm2_4
  float v17; // xmm1_4
  float v18; // ecx
  Scaleform::Render::Matrix2x4<float> v20; // [rsp+20h] [rbp-50h] BYREF
  Scaleform::Render::Rect<float> v21; // [rsp+40h] [rbp-30h] BYREF

  *(_QWORD *)&result->x1 = 0i64;
  *(_QWORD *)&result->x2 = 0i64;
  *(_OWORD *)&v20.M[0][0] = _xmm;
  *(_OWORD *)&v20.M[1][0] = _xmm;
  if ( pch )
  {
    v6 = pch->Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable;
    v20 = *transform;
    v7 = (float *)v6->GetMatrix(pch);
    v8 = v20.M[0][0];
    v9 = v20.M[0][1];
    v10 = v20.M[1][0];
    v11 = pch->Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable;
    v12 = v20.M[1][1];
    v20.M[0][0] = (float)(v20.M[0][1] * v7[4]) + (float)(v20.M[0][0] * *v7);
    v20.M[1][0] = (float)(v20.M[1][1] * v7[4]) + (float)(v20.M[1][0] * *v7);
    v20.M[0][1] = (float)(v8 * v7[1]) + (float)(v20.M[0][1] * v7[5]);
    v13 = v20.M[1][1] * v7[5];
    v14 = v10 * v7[1];
    v20.M[0][2] = 0.0;
    *(_QWORD *)&v20.M[1][1] = COERCE_UNSIGNED_INT(v14 + v13);
    v20.M[0][3] = v20.M[0][3] + (float)((float)(v8 * v7[3]) + (float)(v9 * v7[7]));
    v20.M[1][3] = v20.M[1][3] + (float)((float)(v10 * v7[3]) + (float)(v12 * v7[7]));
    v15 = (__int64)v11->GetRectBounds(pch, &v21, &v20);
    v16 = *(float *)(v15 + 12);
    v17 = *(float *)(v15 + 8);
    v18 = *(float *)v15;
    result->y1 = *(float *)(v15 + 4);
    result->x2 = v17;
    result->y2 = v16;
    result->x1 = v18;
  }
  return result;
}

Scaleform::Render::Rect<float> *__fastcall Scaleform::GFx::Button::GetRectBounds(
        Scaleform::GFx::Button *this,
        Scaleform::Render::Rect<float> *result,
        const Scaleform::Render::Matrix2x4<float> *transform)
{
  unsigned __int64 v3; // rdi
  char v5; // r15
  Scaleform::GFx::ButtonRecord::MouseState MouseState; // edx
  __int64 v9; // rsi
  __int32 v10; // edx
  __int64 v11; // rsi
  __int64 v12; // r14
  Scaleform::Render::Rect<float> *RectBounds; // rax
  float x1; // xmm4_4
  float x2; // xmm0_4
  float y1; // xmm2_4
  float y2; // xmm3_4
  float v18; // xmm1_4
  float v19; // xmm0_4
  Scaleform::Render::Rect<float> resulta; // [rsp+20h] [rbp-28h] BYREF

  v3 = 0i64;
  *(_QWORD *)&result->x1 = 0i64;
  v5 = 0;
  *(_QWORD *)&result->x2 = 0i64;
  MouseState = this->MouseState;
  v9 = 0i64;
  if ( MouseState )
  {
    v10 = MouseState - 1;
    if ( v10 )
    {
      if ( v10 == 1 )
        v9 = 1i64;
    }
    else
    {
      v9 = 2i64;
    }
  }
  v11 = v9;
  if ( this->States[v11].Characters.Data.Size )
  {
    v12 = 0i64;
    do
    {
      RectBounds = Scaleform::GFx::Button::GetRectBounds(
                     this,
                     &resulta,
                     transform,
                     this->States[v11].Characters.Data.Data[v12].Char.pObject);
      x1 = RectBounds->x1;
      x2 = RectBounds->x2;
      y1 = RectBounds->y1;
      y2 = RectBounds->y2;
      if ( x2 != RectBounds->x1 || y2 != y1 )
      {
        if ( v5 )
        {
          x1 = fminf(x1, result->x1);
          y1 = fminf(y1, result->y1);
          v18 = fmaxf(result->x2, x2);
          v19 = fmaxf(result->y2, y2);
          result->x2 = v18;
          result->y2 = v19;
        }
        else
        {
          result->x2 = x2;
          v5 = 1;
          result->y2 = y2;
        }
        result->y1 = y1;
        result->x1 = x1;
      }
      ++v3;
      ++v12;
    }
    while ( v3 < this->States[v11].Characters.Data.Size );
  }
  return result;
}

__int64 __fastcall Scaleform::GFx::Button::GetTopMostMouseEntity(
        Scaleform::GFx::Button *this,
        const Scaleform::Render::Point<float> *pt,
        Scaleform::GFx::DisplayObjectBase::TopMostDescr *pdescr)
{
  __int64 result; // rax
  unsigned __int64 v7; // rdi
  __int64 v8; // rsi
  Scaleform::GFx::DisplayObjectBase *pObject; // r14
  __int64 v10; // r8
  float y; // xmm1_4
  Scaleform::Render::Point<float> p; // [rsp+60h] [rbp+8h] BYREF
  Scaleform::Render::Point<float> v13; // [rsp+70h] [rbp+18h] BYREF

  pdescr->pResult = 0i64;
  if ( !this->GetVisible(this)
    || pdescr->pIgnoreMC == this
    || !this->IsFocusAllowed(this, this->pASRoot->pMovieImpl, pdescr->ControllerIdx)
    || !Scaleform::GFx::DisplayObject::TransformPointToLocalAndCheckBounds(this, &p, pt, 1, 0i64) )
  {
    return 2i64;
  }
  v7 = 0i64;
  if ( this->States[3].Characters.Data.Size )
  {
    v8 = 0i64;
    while ( 1 )
    {
      pObject = this->States[3].Characters.Data.Data[v8].Char.pObject;
      if ( pObject )
      {
        Scaleform::GFx::DisplayObjectBase::TransformPointToLocal(pObject, &v13, &p, 1, 0i64);
        LOBYTE(v10) = 1;
        if ( pObject->PointTestLocal(pObject, &v13, v10) )
          break;
      }
      ++v7;
      ++v8;
      if ( v7 >= this->States[3].Characters.Data.Size )
        goto LABEL_11;
    }
    pdescr->pResult = this;
    return 1i64;
  }
  else
  {
LABEL_11:
    result = 3i64;
    y = p.y;
    pdescr->LocalPt.x = p.x;
    pdescr->LocalPt.y = y;
  }
  return result;
}

__int64 __fastcall Scaleform::Render::DICommand_Dispose::GetType(Scaleform::Render::DICommand_Dispose *this)
{
  return 6i64;
}

bool __fastcall Scaleform::Render::Rect<float>::IsNull(Scaleform::Render::Rect<float> *this)
{
  return this->x2 == this->x1 && this->y2 == this->y1;
}

void __fastcall Scaleform::GFx::Button::OnEventLoad(Scaleform::GFx::Button *this)
{
  unsigned __int8 AvmObjOffset; // al
  __int64 v3; // rax

  Scaleform::GFx::InteractiveObject::OnEventLoad(this);
  AvmObjOffset = this->AvmObjOffset;
  if ( AvmObjOffset )
  {
    v3 = ((__int64 (__fastcall *)(char *))(*(Scaleform::GFx::Button_vtbl **)((char *)&this->Scaleform::GFx::InteractiveObject::Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable
                                                                           + 4 * AvmObjOffset))->SetMatrix)((char *)this + 4 * AvmObjOffset);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 176i64))(v3);
  }
}

void __fastcall Scaleform::GFx::Button::OnEventUnload(Scaleform::GFx::Button *this)
{
  this->Scaleform::GFx::InteractiveObject::Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Flags |= 0x1000u;
  Scaleform::GFx::Button::UnloadCharactersForState(this, Up);
  Scaleform::GFx::Button::UnloadCharactersForState(this, Over);
  Scaleform::GFx::Button::UnloadCharactersForState(this, Down);
  Scaleform::GFx::Button::UnloadCharactersForState(this, Hit);
  Scaleform::GFx::InteractiveObject::OnEventUnload(this);
}

void __fastcall Scaleform::GFx::Button::OnGettingKeyboardFocus(
        Scaleform::GFx::Button *this,
        unsigned int controllerIdx,
        Scaleform::GFx::FocusMovedType fmt)
{
  Scaleform::GFx::Button_vtbl *v3; // rax
  __int64 v4; // [rsp+20h] [rbp-28h] BYREF
  int v5; // [rsp+28h] [rbp-20h]
  char v6; // [rsp+2Ch] [rbp-1Ch]
  char v7; // [rsp+30h] [rbp-18h]
  char v8; // [rsp+31h] [rbp-17h]
  __int16 v9; // [rsp+32h] [rbp-16h]

  if ( fmt == GFx_FocusMovedByKeyboard )
  {
    v3 = this->Scaleform::GFx::InteractiveObject::Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable;
    v8 = controllerIdx;
    v4 = 0x2000i64;
    v5 = 9;
    v6 = 0;
    v7 = 0;
    v9 = 0;
    v3->OnMouseEvent(this, (const Scaleform::GFx::EventId *)&v4);
  }
}

char __fastcall Scaleform::GFx::Button::OnKeyEvent(
        Scaleform::GFx::Button *this,
        const Scaleform::GFx::EventId *id,
        int *pkeyMask)
{
  unsigned __int8 AvmObjOffset; // al
  __int64 v7; // rax
  unsigned __int8 AsciiCode; // dl
  Scaleform::GFx::Button_vtbl *v9; // rax
  Scaleform::GFx::MovieImpl *pMovieImpl; // rsi
  unsigned int v11; // eax
  int v12; // eax
  Scaleform::GFx::Button_vtbl *v13; // rax
  __int64 v14; // r9
  __int64 v15; // rdx
  Scaleform::GFx::Button_vtbl *v16; // rax
  __int64 v18; // [rsp+20h] [rbp-20h] BYREF
  unsigned int KeyCode; // [rsp+28h] [rbp-18h]
  unsigned __int8 v20; // [rsp+2Ch] [rbp-14h]
  int v21; // [rsp+30h] [rbp-10h]

  AvmObjOffset = this->AvmObjOffset;
  if ( AvmObjOffset )
  {
    v7 = ((__int64 (__fastcall *)(char *))(*(Scaleform::GFx::Button_vtbl **)((char *)&this->Scaleform::GFx::InteractiveObject::Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable
                                                                           + 4 * AvmObjOffset))->SetMatrix)((char *)this + 4 * AvmObjOffset);
    (*(void (__fastcall **)(__int64, const Scaleform::GFx::EventId *, int *))(*(_QWORD *)v7 + 192i64))(v7, id, pkeyMask);
  }
  if ( id->Id == 64 )
  {
    if ( (*pkeyMask & 0x10000) == 0 )
    {
      AsciiCode = id->AsciiCode;
      if ( !AsciiCode )
      {
        if ( id->WcharCode - 32 > 0x5F )
        {
          if ( id->KeyCode >= 0x20 )
            AsciiCode = Scaleform::GFx::EventId::ConvertKeyCodeToAscii((Scaleform::GFx::EventId *)id);
        }
        else
        {
          AsciiCode = id->WcharCode;
        }
      }
      v9 = this->Scaleform::GFx::InteractiveObject::Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable;
      KeyCode = id->KeyCode;
      v20 = AsciiCode;
      v18 = 0x20000i64;
      v21 = 0;
      if ( v9->OnMouseEvent(this, (const Scaleform::GFx::EventId *)&v18) )
        *pkeyMask |= 0x10000u;
    }
    pMovieImpl = this->pASRoot->pMovieImpl;
    if ( Scaleform::GFx::MovieImpl::IsKeyboardFocused(pMovieImpl, this, id->ControllerIndex) )
    {
      v11 = id->KeyCode;
      if ( v11 == 13 || v11 == 32 )
      {
        if ( this->IsFocusRectEnabled(this) )
          goto LABEL_19;
        v12 = (pMovieImpl->Flags >> 26) & 3;
        if ( v12 == 3 )
          v12 = -1;
        if ( v12 == 1 )
        {
LABEL_19:
          BYTE1(v21) = id->ControllerIndex;
          v13 = this->Scaleform::GFx::InteractiveObject::Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable;
          v18 = 1024i64;
          KeyCode = 13;
          v20 = 0;
          LOBYTE(v21) = 0;
          HIWORD(v21) = 0;
          v13->OnMouseEvent(this, (const Scaleform::GFx::EventId *)&v18);
          ++this->RefCount;
          LOBYTE(v14) = 1;
          ((void (__fastcall *)(Scaleform::GFx::MovieImpl *, __int64, _QWORD, __int64))pMovieImpl->Advance)(
            pMovieImpl,
            v15,
            0i64,
            v14);
          BYTE1(v21) = id->ControllerIndex;
          v16 = this->Scaleform::GFx::InteractiveObject::Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable;
          v18 = 2048i64;
          KeyCode = 13;
          v20 = 0;
          LOBYTE(v21) = 0;
          HIWORD(v21) = 0;
          v16->OnMouseEvent(this, (const Scaleform::GFx::EventId *)&v18);
          Scaleform::RefCountNTSImpl::Release(this);
        }
      }
    }
  }
  return 1;
}

char __fastcall Scaleform::GFx::Button::OnLosingKeyboardFocus(
        Scaleform::GFx::Button *this,
        Scaleform::GFx::InteractiveObject *__formal,
        unsigned int controllerIdx,
        Scaleform::GFx::FocusMovedType a4)
{
  Scaleform::GFx::Button_vtbl *v4; // rax
  __int64 v6; // [rsp+20h] [rbp-28h] BYREF
  int v7; // [rsp+28h] [rbp-20h]
  char v8; // [rsp+2Ch] [rbp-1Ch]
  char v9; // [rsp+30h] [rbp-18h]
  char v10; // [rsp+31h] [rbp-17h]
  __int16 v11; // [rsp+32h] [rbp-16h]

  if ( this->pASRoot->pMovieImpl->FocusGroups[this->pASRoot->pMovieImpl->FocusGroupIndexes[controllerIdx]].FocusRectShown )
  {
    v4 = this->Scaleform::GFx::InteractiveObject::Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable;
    v6 = 0x4000i64;
    v7 = 9;
    v8 = 0;
    v9 = 0;
    v11 = 0;
    v10 = controllerIdx;
    v4->OnMouseEvent(this, (const Scaleform::GFx::EventId *)&v6);
  }
  return 1;
}

char __fastcall Scaleform::GFx::Button::OnMouseEvent(Scaleform::GFx::Button *this, const Scaleform::GFx::EventId *evt)
{
  unsigned __int16 Flags; // ax
  char v5; // si
  __int64 ControllerIndex; // rax
  Scaleform::GFx::MouseState *v7; // rcx
  unsigned int Id; // eax
  unsigned int v9; // eax
  unsigned __int8 AvmObjOffset; // al
  __int64 v12; // rax

  Flags = this->Scaleform::GFx::InteractiveObject::Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Flags;
  if ( (Flags & 0x1000) != 0 || this->Depth < -1 || (Flags & 0x10) != 0 )
    return 0;
  v5 = 0;
  if ( !evt->RollOverCnt )
  {
    ControllerIndex = (unsigned int)evt->ControllerIndex;
    if ( (unsigned int)ControllerIndex < 6 )
      v7 = &this->pASRoot->pMovieImpl->mMouseState[ControllerIndex];
    else
      v7 = 0i64;
    Id = evt->Id;
    if ( evt->Id > 0x1000 )
    {
      if ( Id == 0x2000 )
      {
        if ( (this->Scaleform::GFx::InteractiveObject::Flags & 0x4000) == 0 || (v7->PrevButtonsState & 1) == 0 )
        {
          if ( (v7->CurButtonsState & 1) != 0 )
            return 0;
          goto LABEL_25;
        }
        goto LABEL_23;
      }
      if ( Id != 0x4000 )
      {
        if ( Id != 0x8000 )
        {
          if ( Id == 0x10000 )
            this->MouseState = 2 * ((this->Scaleform::GFx::InteractiveObject::Flags & 0x4000) == 0);
          goto LABEL_26;
        }
        goto LABEL_23;
      }
    }
    else if ( Id != 4096 )
    {
      if ( Id != 16 )
      {
        if ( Id == 32 )
        {
LABEL_25:
          this->MouseState = MouseDown;
          goto LABEL_26;
        }
        if ( Id != 1024 )
        {
          if ( Id == 2048 )
            goto LABEL_25;
LABEL_26:
          Scaleform::GFx::Button::SwitchState(this);
          goto LABEL_27;
        }
      }
LABEL_23:
      this->MouseState = MouseMove;
      goto LABEL_26;
    }
    this->MouseState = Unknown;
    goto LABEL_26;
  }
LABEL_27:
  v9 = (this->pASRoot->pMovieImpl->Flags >> 28) & 3;
  if ( v9 == 3 )
    v9 = -1;
  if ( v9 == 1 && ((evt->Id - 0x2000) & 0xFFFFDFFF) == 0 && evt->KeyCode )
    return 0;
  AvmObjOffset = this->AvmObjOffset;
  if ( AvmObjOffset )
  {
    v12 = ((__int64 (__fastcall *)(char *))(*(Scaleform::GFx::Button_vtbl **)((char *)&this->Scaleform::GFx::InteractiveObject::Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable
                                                                            + 4 * AvmObjOffset))->SetMatrix)((char *)this + 4 * AvmObjOffset);
    return (*(__int64 (__fastcall **)(__int64, const Scaleform::GFx::EventId *))(*(_QWORD *)v12 + 184i64))(v12, evt);
  }
  return v5;
}

char __fastcall Scaleform::GFx::Button::PointTestLocal(
        Scaleform::GFx::Button *this,
        const Scaleform::Render::Point<float> *pt,
        unsigned __int8 hitTestMask)
{
  Scaleform::GFx::Button_vtbl *v7; // rax
  float *v8; // rax
  float y; // xmm1_4
  __int64 v10; // rsi
  __int64 i; // r14
  Scaleform::GFx::DisplayObjectBase *pObject; // rbx
  Scaleform::Render::Matrix2x4<float> v13; // [rsp+20h] [rbp-78h] BYREF
  Scaleform::Render::Point<float> result; // [rsp+40h] [rbp-58h] BYREF

  if ( (this->Scaleform::GFx::InteractiveObject::Flags & 0x800) != 0 )
    return 0;
  if ( (hitTestMask & 2) != 0 && !this->GetVisible(this) )
    return 0;
  if ( (this->Scaleform::GFx::InteractiveObject::Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Flags & 1) == 0 )
  {
    v7 = this->Scaleform::GFx::InteractiveObject::Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable;
    *(_OWORD *)&v13.M[0][0] = _xmm;
    *(_OWORD *)&v13.M[1][0] = _xmm;
    v8 = (float *)v7->GetBounds(this, (Scaleform::Render::Rect<float> *)&result, &v13);
    if ( v8[2] >= pt->x && pt->x >= *v8 )
    {
      y = pt->y;
      if ( v8[3] >= y && y >= v8[1] )
      {
        if ( (hitTestMask & 1) == 0 )
          return 1;
        goto LABEL_13;
      }
    }
    return 0;
  }
LABEL_13:
  v10 = 0i64;
  if ( !this->States[3].Characters.Data.Size )
    return 0;
  for ( i = 0i64; ; ++i )
  {
    pObject = this->States[3].Characters.Data.Data[i].Char.pObject;
    if ( pObject && ((hitTestMask & 2) == 0 || pObject->GetVisible(pObject)) )
    {
      v13 = *pObject->GetMatrix(pObject);
      Scaleform::Render::Matrix2x4<float>::TransformByInverse(&v13, &result, pt);
      if ( pObject->PointTestLocal(pObject, &result, hitTestMask) )
        break;
    }
    if ( ++v10 >= this->States[3].Characters.Data.Size )
      return 0;
  }
  return 1;
}

void __fastcall Scaleform::GFx::Button::PropagateMouseEvent(
        Scaleform::GFx::Button *this,
        const Scaleform::GFx::EventId *evt)
{
  if ( evt->Id == 8 )
    Scaleform::GFx::InteractiveObject::DoMouseDrag(this, evt->ControllerIndex);
  this->OnEvent(this, evt);
}

void __fastcall Scaleform::GFx::Button::PropagateNoAdvanceGlobalFlag(Scaleform::GFx::Button *this)
{
  bool v2; // r14
  unsigned __int64 *p_Size; // rbp
  __int64 v4; // r12
  unsigned __int64 v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // rcx
  Scaleform::GFx::InteractiveObject *v8; // rbx
  _BOOL8 v9; // rdx
  unsigned int Flags; // ecx
  int v11; // eax

  v2 = (this->Scaleform::GFx::InteractiveObject::Flags & 8) != 0;
  if ( this->pASRoot->pMovieImpl )
  {
    p_Size = &this->States[0].Characters.Data.Size;
    v4 = 4i64;
    do
    {
      v5 = 0i64;
      if ( *p_Size )
      {
        v6 = 0i64;
        do
        {
          v7 = *(_QWORD *)(v6 + *(p_Size - 1));
          if ( v7 )
          {
            v8 = 0i64;
            if ( *(char *)(v7 + 106) < 0 )
              v8 = *(Scaleform::GFx::InteractiveObject **)(v6 + *(p_Size - 1));
            if ( v8 )
            {
              if ( (this->Scaleform::GFx::InteractiveObject::Flags & 8) != 0 || v2 )
                v8->Flags |= 8u;
              else
                v8->Flags &= ~8u;
              v8->PropagateNoAdvanceGlobalFlag(v8);
              Flags = v8->Flags;
              if ( (Flags & 0x200000) == 0 || (Flags & 0x400000) != 0 )
                v9 = 0i64;
              else
                LOBYTE(v9) = 1;
              v11 = v8->CheckAdvanceStatus(v8, v9);
              if ( v11 == -1 )
              {
                v8->Flags |= 0x400000u;
              }
              else if ( v11 == 1 )
              {
                Scaleform::GFx::InteractiveObject::AddToOptimizedPlayList(v8);
              }
            }
          }
          ++v5;
          v6 += 16i64;
        }
        while ( v5 < *p_Size );
      }
      p_Size += 4;
      --v4;
    }
    while ( v4 );
  }
}

void __fastcall Scaleform::GFx::Button::PropagateNoAdvanceLocalFlag(Scaleform::GFx::Button *this)
{
  bool v2; // r14
  unsigned __int64 *p_Size; // rbp
  __int64 v4; // r12
  unsigned __int64 v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // rcx
  Scaleform::GFx::InteractiveObject *v8; // rbx
  _BOOL8 v9; // rdx
  unsigned int Flags; // ecx
  int v11; // eax

  v2 = (this->Scaleform::GFx::InteractiveObject::Flags & 4) != 0;
  if ( this->pASRoot->pMovieImpl )
  {
    p_Size = &this->States[0].Characters.Data.Size;
    v4 = 4i64;
    do
    {
      v5 = 0i64;
      if ( *p_Size )
      {
        v6 = 0i64;
        do
        {
          v7 = *(_QWORD *)(v6 + *(p_Size - 1));
          if ( v7 )
          {
            v8 = 0i64;
            if ( *(char *)(v7 + 106) < 0 )
              v8 = *(Scaleform::GFx::InteractiveObject **)(v6 + *(p_Size - 1));
            if ( v8 )
            {
              if ( (this->Scaleform::GFx::InteractiveObject::Flags & 4) != 0 || v2 )
                v8->Flags |= 4u;
              else
                v8->Flags &= ~4u;
              v8->PropagateNoAdvanceLocalFlag(v8);
              Flags = v8->Flags;
              if ( (Flags & 0x200000) == 0 || (Flags & 0x400000) != 0 )
                v9 = 0i64;
              else
                LOBYTE(v9) = 1;
              v11 = v8->CheckAdvanceStatus(v8, v9);
              if ( v11 == -1 )
              {
                v8->Flags |= 0x400000u;
              }
              else if ( v11 == 1 )
              {
                Scaleform::GFx::InteractiveObject::AddToOptimizedPlayList(v8);
              }
            }
          }
          ++v5;
          v6 += 16i64;
        }
        while ( v5 < *p_Size );
      }
      p_Size += 4;
      --v4;
    }
    while ( v4 );
  }
}

void __fastcall Scaleform::GFx::Button::PropagateScale9GridExists(Scaleform::GFx::Button *this)
{
  Scaleform::Render::Rect<float> *Scale9Grid; // rax
  bool v3; // al
  bool v4; // r14
  unsigned __int64 *p_Size; // rsi
  __int64 v6; // r15
  unsigned __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rdx
  _WORD *v10; // rcx
  Scaleform::Render::Rect<float> result; // [rsp+20h] [rbp-48h] BYREF

  Scale9Grid = Scaleform::GFx::DisplayObjectBase::GetScale9Grid(this, &result);
  v3 = Scale9Grid->x1 >= Scale9Grid->x2 || Scale9Grid->y1 >= Scale9Grid->y2;
  v4 = !v3;
  if ( (this->Scaleform::GFx::InteractiveObject::Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Flags & 1) != 0
    || v3 )
  {
    p_Size = &this->States[0].Characters.Data.Size;
    v6 = 4i64;
    do
    {
      v7 = 0i64;
      if ( *p_Size )
      {
        v8 = 0i64;
        do
        {
          v9 = *(_QWORD *)(v8 + *(p_Size - 1));
          if ( v9 )
          {
            v10 = 0i64;
            if ( *(char *)(v9 + 106) < 0 )
              v10 = *(_WORD **)(v8 + *(p_Size - 1));
            if ( v10 )
            {
              if ( (this->Scaleform::GFx::InteractiveObject::Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Flags & 1) != 0
                || v4 )
              {
                v10[53] |= 1u;
              }
              else
              {
                v10[53] &= ~1u;
              }
              (*(void (__fastcall **)(_WORD *))(*(_QWORD *)v10 + 160i64))(v10);
            }
          }
          ++v7;
          v8 += 16i64;
        }
        while ( v7 < *p_Size );
      }
      p_Size += 4;
      --v6;
    }
    while ( v6 );
  }
}

void __fastcall Scaleform::GFx::Button::RemoveDisplayObject(
        Scaleform::GFx::Button *this,
        Scaleform::GFx::DisplayObjectBase *chToRemove)
{
  Scaleform::ArrayLH<Scaleform::GFx::Button::CharToRec,2,Scaleform::ArrayDefaultPolicy> *p_Characters; // rdi
  __int64 v4; // rbp
  unsigned __int64 v5; // rsi
  __int64 v6; // rbx
  Scaleform::GFx::DisplayObjectBase *pObject; // rdx
  Scaleform::GFx::DisplayObjectBase *v8; // rcx
  Scaleform::GFx::Button::CharToRec *Data; // r14
  Scaleform::RefCountNTSImpl *v10; // rcx

  p_Characters = &this->States[0].Characters;
  v4 = 4i64;
  do
  {
    v5 = 0i64;
    if ( p_Characters->Data.Size )
    {
      v6 = 0i64;
      do
      {
        pObject = p_Characters->Data.Data[v6].Char.pObject;
        if ( pObject )
        {
          v8 = 0i64;
          if ( SLOBYTE(pObject->Flags) < 0 )
            v8 = p_Characters->Data.Data[v6].Char.pObject;
          if ( v8 == chToRemove )
          {
            v8->OnEventUnload(v8);
            Data = p_Characters->Data.Data;
            v10 = p_Characters->Data.Data[v6].Char.pObject;
            if ( v10 )
              Scaleform::RefCountNTSImpl::Release(v10);
            Data[v6].Char.pObject = 0i64;
          }
        }
        ++v5;
        ++v6;
      }
      while ( v5 < p_Characters->Data.Size );
    }
    p_Characters = (Scaleform::ArrayLH<Scaleform::GFx::Button::CharToRec,2,Scaleform::ArrayDefaultPolicy> *)((char *)p_Characters + 32);
    --v4;
  }
  while ( v4 );
}

void __fastcall Scaleform::GFx::Button::Restart(Scaleform::GFx::Button *this)
{
  Scaleform::ArrayLH<Scaleform::GFx::Button::CharToRec,2,Scaleform::ArrayDefaultPolicy> *p_Characters; // rsi
  __int64 v2; // rbp
  unsigned __int64 v3; // rbx
  __int64 v4; // rdi
  Scaleform::GFx::DisplayObjectBase *pObject; // rcx

  *(_QWORD *)&this->LastMouseFlags = 0i64;
  p_Characters = &this->States[0].Characters;
  this->MouseState = Unknown;
  v2 = 4i64;
  this->RollOverCnt = 0;
  do
  {
    v3 = 0i64;
    if ( p_Characters->Data.Size )
    {
      v4 = 0i64;
      do
      {
        pObject = p_Characters->Data.Data[v4].Char.pObject;
        if ( pObject )
          pObject->Restart(pObject);
        ++v3;
        ++v4;
      }
      while ( v3 < p_Characters->Data.Size );
    }
    p_Characters = (Scaleform::ArrayLH<Scaleform::GFx::Button::CharToRec,2,Scaleform::ArrayDefaultPolicy> *)((char *)p_Characters + 32);
    --v2;
  }
  while ( v2 );
}

void __fastcall Scaleform::GFx::DisplayObjContainer::SetScale9Grid(
        Scaleform::GFx::DisplayObjContainer *this,
        const Scaleform::Render::Rect<float> *rect)
{
  Scaleform::Render::Rect<float> *Scale9Grid; // rax
  bool v5; // si
  Scaleform::Render::Rect<float> result; // [rsp+20h] [rbp-28h] BYREF

  Scale9Grid = Scaleform::GFx::DisplayObjectBase::GetScale9Grid(this, &result);
  v5 = rect->x1 != Scale9Grid->x1
    || rect->x2 != Scale9Grid->x2
    || rect->y1 != Scale9Grid->y1
    || rect->y2 != Scale9Grid->y2;
  Scaleform::GFx::DisplayObjectBase::SetScale9Grid(this, rect);
  if ( rect->x1 >= rect->x2 || rect->y1 >= rect->y2 )
    this->Scaleform::GFx::InteractiveObject::Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Flags &= ~1u;
  else
    this->Scaleform::GFx::InteractiveObject::Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Flags |= 1u;
  if ( v5 )
    this->PropagateScale9GridExists(this);
}

void __fastcall Scaleform::GFx::Button::SetStateChangeFlags(Scaleform::GFx::Button *this, unsigned __int8 flags)
{
  unsigned __int64 *p_Size; // rsi
  __int64 v4; // r14
  unsigned __int64 v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rcx

  this->Scaleform::GFx::InteractiveObject::Flags &= 0xFFF0FFFF;
  p_Size = &this->States[0].Characters.Data.Size;
  v4 = 4i64;
  this->Scaleform::GFx::InteractiveObject::Flags |= (flags & 0xF) << 16;
  do
  {
    v5 = 0i64;
    if ( *p_Size )
    {
      v6 = 0i64;
      do
      {
        v7 = *(_QWORD *)(v6 + *(p_Size - 1));
        if ( v7 )
          (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v7 + 632i64))(v7, flags);
        ++v5;
        v6 += 16i64;
      }
      while ( v5 < *p_Size );
    }
    p_Size += 4;
    --v4;
  }
  while ( v4 );
}

void __fastcall Scaleform::GFx::Button::SetVisible(Scaleform::GFx::Button *this, bool visible)
{
  Scaleform::GFx::MovieImpl *pMovieImpl; // rcx
  bool v5; // dl
  unsigned int Flags; // ecx
  unsigned int v7; // ecx
  Scaleform::GFx::InteractiveObject *pParent; // rax

  Scaleform::GFx::DisplayObjectBase::SetVisible(this, visible);
  pMovieImpl = this->pASRoot->pMovieImpl;
  if ( pMovieImpl )
  {
    v5 = !visible && (pMovieImpl->Flags & 0x800) != 0;
    Flags = this->Scaleform::GFx::InteractiveObject::Flags;
    if ( v5 != ((Flags & 8) != 0) )
    {
      if ( v5 )
        v7 = Flags | 8;
      else
        v7 = Flags & 0xFFFFFFF7;
      this->Scaleform::GFx::InteractiveObject::Flags = v7;
      Scaleform::GFx::InteractiveObject::ModifyOptimizedPlayListLocal<Scaleform::GFx::Button>(this);
      pParent = this->pParent;
      if ( pParent )
      {
        if ( (pParent->Flags & 8) == 0 )
          this->PropagateNoAdvanceGlobalFlag(this);
      }
    }
  }
}

void __fastcall Scaleform::GFx::Button::SwitchState(Scaleform::GFx::Button *this)
{
  unsigned __int8 AvmObjOffset; // al
  __int64 v3; // rax

  AvmObjOffset = this->AvmObjOffset;
  if ( AvmObjOffset )
  {
    v3 = ((__int64 (__fastcall *)(char *))(*(Scaleform::GFx::Button_vtbl **)((char *)&this->Scaleform::GFx::InteractiveObject::Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable
                                                                           + 4 * AvmObjOffset))->SetMatrix)((char *)this + 4 * AvmObjOffset);
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 200i64))(v3, (unsigned int)this->MouseState);
  }
}

void __fastcall Scaleform::GFx::Button::UnloadCharactersForState(
        Scaleform::GFx::Button *this,
        Scaleform::GFx::Button::ButtonState state)
{
  unsigned __int64 v2; // rdi
  unsigned __int64 v4; // rbp
  __int64 v5; // r13
  Scaleform::ArrayLH<Scaleform::GFx::Button::CharToRec,2,Scaleform::ArrayDefaultPolicy> *p_Characters; // r14
  __int64 v7; // rsi
  char *pObject; // rbx
  Scaleform::GFx::DisplayObjectBase *v9; // rax
  Scaleform::GFx::Button::CharToRec *Data; // rbx
  Scaleform::RefCountNTSImpl *v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rax
  Scaleform::Render::TreeContainer *v16; // rax

  v2 = 0i64;
  v4 = 0i64;
  v5 = state;
  p_Characters = &this->States[state].Characters;
  if ( p_Characters->Data.Size )
  {
    v7 = 0i64;
    do
    {
      pObject = (char *)p_Characters->Data.Data[v7].Char.pObject;
      v9 = 0i64;
      if ( pObject[106] < 0 )
        v9 = p_Characters->Data.Data[v7].Char.pObject;
      if ( v9
        && (*(unsigned __int8 (__fastcall **)(Scaleform::GFx::DisplayObjectBase *))(*(_QWORD *)pObject + 592i64))(p_Characters->Data.Data[v7].Char.pObject) )
      {
        (*(void (__fastcall **)(char *))(*(_QWORD *)pObject + 600i64))(pObject);
      }
      Data = p_Characters->Data.Data;
      v11 = p_Characters->Data.Data[v7].Char.pObject;
      if ( v11 )
        Scaleform::RefCountNTSImpl::Release(v11);
      Data[v7].Char.pObject = 0i64;
      ++v4;
      ++v7;
    }
    while ( v4 < p_Characters->Data.Size );
  }
  Scaleform::ArrayDataBase<Scaleform::GFx::DisplayList::DisplayEntry,Scaleform::AllocatorLH<Scaleform::GFx::DisplayList::DisplayEntry,2>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
    &p_Characters->Data,
    p_Characters,
    0i64);
  v12 = 32 * (v5 + 7);
  v13 = *(__int64 *)((char *)&this->Scaleform::GFx::InteractiveObject::Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable
                   + v12);
  if ( v13 )
  {
    v14 = *(_QWORD *)(*(_QWORD *)((v13 & 0xFFFFFFFFFFFFF000ui64) + 0x20)
                    + 8i64 * (unsigned int)((int)(v13 - (v13 & 0xFFFFF000) - 56) / 56)
                    + 40);
    v15 = *(_QWORD *)(v14 + 144);
    if ( v15 )
    {
      if ( (v15 & 1) != 0 )
      {
        v2 = *(_QWORD *)((v15 & 0xFFFFFFFFFFFFFFFEui64) + 8);
      }
      else
      {
        LOBYTE(v2) = *(_QWORD *)(v14 + 152) != 0i64;
        ++v2;
      }
    }
    Scaleform::Render::TreeContainer::Remove(
      *(Scaleform::Render::TreeContainer **)((char *)&this->Scaleform::GFx::InteractiveObject::Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable
                                           + v12),
      0i64,
      v2);
    if ( (*(Scaleform::GFx::Button_vtbl **)((char *)&this->Scaleform::GFx::InteractiveObject::Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable
                                          + v12))->GetMatrix3D )
    {
      v16 = this->GetRenderContainer(this);
      Scaleform::Render::TreeContainer::Remove(v16, 0i64, 1ui64);
    }
  }
}

