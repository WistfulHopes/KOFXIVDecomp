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
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshkey.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_playertasks.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_assoundintf.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_rasterizer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_screentoworld.h"
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
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_keycodes.h"
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
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_input.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filters.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filterparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_states.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix4x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_statebag.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_playerimpl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_sprite.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_drawingcontext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessgen.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_shapeswf.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessellator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_shape.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treeshape.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_fontcompactor.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_pathdatastorage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapemeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_log.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_font.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatapacked.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_spritedef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_loader.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_pathdatapacker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_constants.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_fontmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_fontmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_displayobjcontainer.h"
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

Scaleform::GFx::DisplayObjContainer::DisplayObjContainer(Scaleform::GFx::MovieDefImpl * pbindingDefImpl, Scaleform::GFx::ASMovieRootBase * pasRoot, Scaleform::GFx::InteractiveObject * pparent, Scaleform::GFx::ResourceId id); // 0x1403488B0
Scaleform::AmpMovieObjectDesc::~AmpMovieObjectDesc(); // 0x140348990
Scaleform::GFx::DisplayObjContainer::~DisplayObjContainer(); // 0x140348A20
void Scaleform::GFx::DisplayObjContainer::AssignRootNode(bool importFlag); // 0x140348BD0
Scaleform::GFx::MovieDefRootNode * Scaleform::GFx::DisplayObjContainer::FindRootNode(); // 0x140349100
void Scaleform::GFx::DisplayObjContainer::OnInsertionAsLevel(long level); // 0x140349990
void Scaleform::GFx::DisplayObjContainer::MoveDisplayObject(const Scaleform::GFx::CharPosInfo & pos); // 0x140349960
void Scaleform::GFx::DisplayObjContainer::CreateAndReplaceDisplayObject(const Scaleform::GFx::CharPosInfo & pos, const Scaleform::GFx::ASString & name, Scaleform::GFx::DisplayObjectBase * * newChar); // 0x140348F40
void Scaleform::GFx::DisplayObjContainer::ReplaceDisplayObject(const Scaleform::GFx::CharPosInfo & pos, Scaleform::GFx::DisplayObjectBase * ch, const Scaleform::GFx::ASString & name); // 0x14034A170
void Scaleform::GFx::DisplayObjContainer::RemoveDisplayObject(long depth, Scaleform::GFx::ResourceId id); // 0x14034A0F0
void Scaleform::GFx::DisplayObjContainer::RemoveDisplayObject(Scaleform::GFx::DisplayObjectBase * ch); // 0x14034A130
Scaleform::GFx::DisplayObjectBase * Scaleform::GFx::DisplayObjContainer::GetChildAt(unsigned long index); // 0x140349170
void Scaleform::GFx::DisplayObjContainer::PropagateMouseEvent(const Scaleform::GFx::EventId & id); // 0x140349F90
void Scaleform::GFx::DisplayObjContainer::PropagateKeyEvent(const Scaleform::GFx::EventId & id, long * pkeyMask); // 0x140349F20
void Scaleform::GFx::DisplayObjContainer::CalcDisplayListHitTestMaskArray(Scaleform::ArrayPOD<unsigned char,2,Scaleform::ArrayDefaultPolicy> * phitTest, const Scaleform::Render::Point<float> & pt, bool testShape); // 0x140348D40
Scaleform::GFx::DisplayObjectBase::TopMostResult Scaleform::GFx::DisplayObjContainer::GetTopMostMouseEntity(const Scaleform::Render::Point<float> & pt, Scaleform::GFx::DisplayObjectBase::TopMostDescr * pdescr); // 0x140349390
bool Scaleform::GFx::DisplayObjContainer::PointTestLocal(const Scaleform::Render::Point<float> & pt, unsigned char hitTestMask); // 0x140349A60
void Scaleform::GFx::DisplayObjContainer::PropagateFocusGroupMask(unsigned long mask); // 0x140349E90
void Scaleform::GFx::DisplayObjContainer::GetChildDescTree(Scaleform::AmpMovieObjectDesc * parent, Scaleform::MemoryHeap * heap); // 0x140349190
void Scaleform::GFx::DisplayObjContainer::FillTabableArray(Scaleform::GFx::InteractiveObject::FillTabableParams * params); // 0x1403490C0
bool Scaleform::GFx::DisplayObjContainer::Contains(Scaleform::GFx::DisplayObjectBase * ch); // 0x140348E90
Scaleform::GFx::FontManager * Scaleform::GFx::DisplayObjContainer::GetFontManager(); // 0x140349340
void Scaleform::GFx::DisplayObjContainer::SetStateChangeFlags(unsigned char flags); // 0x14034A380
void Scaleform::GFx::DisplayObjContainer::ForceShutdown(); // 0x140349140
bool Scaleform::GFx::DisplayObjContainer::Has3D(); // 0x140349830
void Scaleform::GFx::DisplayObjContainer::UpdateViewAndPerspective(); // 0x14034A400
void Scaleform::GFx::DisplayObjContainer::SetScale9Grid(const Scaleform::Render::Rect<float> & rect); // 0x14034A2B0
void Scaleform::GFx::DisplayObjContainer::PropagateScale9GridExists(); // 0x14034A020void __fastcall Scaleform::GFx::DisplayObjContainer::DisplayObjContainer(
        Scaleform::GFx::DisplayObjContainer *this,
        Scaleform::GFx::MovieDefImpl *pbindingDefImpl,
        Scaleform::GFx::ASMovieRootBase *pasRoot,
        Scaleform::GFx::InteractiveObject *pparent,
        _DWORD *id)
{
  LODWORD(id) = *id;
  Scaleform::GFx::InteractiveObject::InteractiveObject(
    this,
    pbindingDefImpl,
    pasRoot,
    pparent,
    (Scaleform::GFx::ResourceId)&id);
  this->Scaleform::GFx::InteractiveObject::Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable = (Scaleform::GFx::DisplayObjContainer_vtbl *)&Scaleform::GFx::DisplayObjContainer::`vftable'{for `Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>'};
  this->Scaleform::GFx::InteractiveObject::Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Scaleform::GFx::LogBase<Scaleform::GFx::DisplayObjectBase>::__vftable = (Scaleform::GFx::LogBase<Scaleform::GFx::DisplayObjectBase>_vtbl *)&Scaleform::GFx::DisplayObjContainer::`vftable'{for `Scaleform::GFx::LogBase<Scaleform::GFx::DisplayObjectBase>'};
  Scaleform::GFx::DisplayList::DisplayList(&this->mDisplayList);
  this->pRootNode = 0i64;
  this->Scaleform::GFx::InteractiveObject::Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Flags |= 0x200u;
}

void __fastcall Scaleform::ArrayDataBase<Scaleform::GFx::StaticTextSnapshotData::CharRef,Scaleform::AllocatorLH<Scaleform::GFx::StaticTextSnapshotData::CharRef,2>,Scaleform::ArrayDefaultPolicy>::~ArrayDataBase<Scaleform::GFx::StaticTextSnapshotData::CharRef,Scaleform::AllocatorLH<Scaleform::GFx::StaticTextSnapshotData::CharRef,2>,Scaleform::ArrayDefaultPolicy>(
        Scaleform::ArrayDataBase<Scaleform::GFx::StaticTextSnapshotData::CharRef,Scaleform::AllocatorLH<Scaleform::GFx::StaticTextSnapshotData::CharRef,2>,Scaleform::ArrayDefaultPolicy> *this)
{
  unsigned __int64 Size; // rdi
  Scaleform::GFx::StaticTextSnapshotData::CharRef *i; // rbx

  Size = this->Size;
  for ( i = &this->Data[Size - 1]; Size; --Size )
  {
    if ( i->pChar.pObject )
      Scaleform::RefCountNTSImpl::Release(i->pChar.pObject);
    --i;
  }
  Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->Data);
}

void __fastcall Scaleform::AmpMovieObjectDesc::~AmpMovieObjectDesc(Scaleform::AmpMovieObjectDesc *this)
{
  unsigned __int64 Size; // rdi
  Scaleform::RefCountVImpl **i; // rbx
  volatile int *v4; // rbx

  Size = this->Children.Data.Size;
  for ( i = (Scaleform::RefCountVImpl **)&this->Children.Data.Data[Size - 1]; Size; --Size )
  {
    if ( *i )
      Scaleform::RefCountImpl::Release(*i);
    --i;
  }
  Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->Children.Data.Data);
  v4 = (volatile int *)(this->Description.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
  if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(v4 + 2, -1) == 1 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, (void *)v4);
  Scaleform::RefCountImplCore::~RefCountImplCore(this);
}

void __fastcall Scaleform::GFx::DisplayObjContainer::~DisplayObjContainer(Scaleform::GFx::DisplayObjContainer *this)
{
  Scaleform::GFx::MovieDefRootNode *pRootNode; // rax
  Scaleform::GFx::MovieDefRootNode *v3; // rdx
  Scaleform::GFx::MovieDefRootNode *v4; // rcx
  Scaleform::GFx::DisplayList::DepthToIndexContainer *DepthToIndexMap; // rsi

  this->Scaleform::GFx::InteractiveObject::Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable = (Scaleform::GFx::DisplayObjContainer_vtbl *)&Scaleform::GFx::DisplayObjContainer::`vftable'{for `Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>'};
  this->Scaleform::GFx::InteractiveObject::Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Scaleform::GFx::LogBase<Scaleform::GFx::DisplayObjectBase>::__vftable = (Scaleform::GFx::LogBase<Scaleform::GFx::DisplayObjectBase>_vtbl *)&Scaleform::GFx::DisplayObjContainer::`vftable'{for `Scaleform::GFx::LogBase<Scaleform::GFx::DisplayObjectBase>'};
  pRootNode = this->pRootNode;
  if ( pRootNode )
  {
    --pRootNode->SpriteRefCount;
    v3 = this->pRootNode;
    if ( !v3->SpriteRefCount )
    {
      v3->pPrev->pNext = v3->pNext;
      v3->pNext->pPrev = v3->pPrev;
      v4 = this->pRootNode;
      if ( v4 )
        ((void (__fastcall *)(Scaleform::GFx::MovieDefRootNode *, __int64))v4->~MovieDefRootNode)(v4, 1i64);
    }
  }
  Scaleform::GFx::DisplayList::Clear(&this->mDisplayList, this);
  ActorWeapon::ActionFlagCheck((_SETJMP_FLOAT128 *)this);
  DepthToIndexMap = this->mDisplayList.DepthToIndexMap;
  if ( DepthToIndexMap )
  {
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, DepthToIndexMap->Array.Data.Data);
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, DepthToIndexMap);
  }
  Scaleform::ArrayDataBase<Scaleform::GFx::StaticTextSnapshotData::CharRef,Scaleform::AllocatorLH<Scaleform::GFx::StaticTextSnapshotData::CharRef,2>,Scaleform::ArrayDefaultPolicy>::~ArrayDataBase<Scaleform::GFx::StaticTextSnapshotData::CharRef,Scaleform::AllocatorLH<Scaleform::GFx::StaticTextSnapshotData::CharRef,2>,Scaleform::ArrayDefaultPolicy>((Scaleform::ArrayDataBase<Scaleform::GFx::StaticTextSnapshotData::CharRef,Scaleform::AllocatorLH<Scaleform::GFx::StaticTextSnapshotData::CharRef,2>,Scaleform::ArrayDefaultPolicy> *)&this->mDisplayList);
  Scaleform::GFx::InteractiveObject::~InteractiveObject(this);
}

__int64 __fastcall AgHttp::onSingletonExit(__crt_locale_data *__formal)
{
  return 0i64;
}

void __fastcall Scaleform::GFx::DisplayObjContainer::AssignRootNode(
        Scaleform::GFx::DisplayObjContainer *this,
        bool importFlag)
{
  Scaleform::GFx::FontManager *v4; // rsi
  Scaleform::GFx::MovieImpl *pMovieImpl; // r8
  Scaleform::GFx::MovieDefRootNode *pNext; // rax
  Scaleform::ArrayDefaultPolicy *p_Policy; // r9
  Scaleform::GFx::ASMovieRootBase *pASRoot; // rcx
  Scaleform::MemoryHeap *pHeap; // r14
  unsigned int v10; // eax
  Scaleform::GFx::FontManager *v11; // rax
  Scaleform::GFx::FontManager *v12; // rax
  Scaleform::GFx::MovieDefRootNode *pRootNode; // rdi
  Scaleform::RefCountVImpl *pObject; // rcx
  Scaleform::GFx::MovieDefRootNode *v15; // rdx
  Scaleform::GFx::MovieImpl *v16; // rcx

  if ( !this->pRootNode )
  {
    v4 = 0i64;
    pMovieImpl = this->pASRoot->pMovieImpl;
    pNext = pMovieImpl->RootMovieDefNodes.Root.pNext;
    p_Policy = &pMovieImpl->MovieLevels.Data.Policy;
    if ( pMovieImpl == (Scaleform::GFx::MovieImpl *)-112i64 )
      p_Policy = 0i64;
    while ( pNext != (Scaleform::GFx::MovieDefRootNode *)p_Policy )
    {
      if ( pNext->pDefImpl == this->pDefImpl.pObject && pNext->ImportFlag == importFlag )
      {
        ++pNext->SpriteRefCount;
        this->pRootNode = pNext;
        break;
      }
      pNext = pNext->pNext;
    }
    if ( !this->pRootNode )
    {
      pASRoot = this->pASRoot;
      pHeap = pASRoot->pMovieImpl->pHeap;
      this->pRootNode = pASRoot->CreateMovieDefRootNode(pASRoot, pHeap, this->pDefImpl.pObject, importFlag);
      this->pRootNode->BytesLoaded = this->pDefImpl.pObject->pBindData.pObject->BytesLoaded;
      if ( importFlag )
        v10 = 0;
      else
        v10 = this->pDefImpl.pObject->GetLoadingFrame(this->pDefImpl.pObject);
      this->pRootNode->LoadingFrame = v10;
      v11 = (Scaleform::GFx::FontManager *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))pHeap->Alloc)(
                                             pHeap,
                                             112i64);
      if ( v11 )
      {
        Scaleform::GFx::FontManager::FontManager(
          v11,
          this->pASRoot->pMovieImpl,
          this->pDefImpl.pObject,
          this->pASRoot->pMovieImpl->pFontManagerStates.pObject);
        v4 = v12;
      }
      pRootNode = this->pRootNode;
      pObject = (Scaleform::RefCountVImpl *)pRootNode->pFontManager.pObject;
      if ( pObject )
        Scaleform::RefCountImpl::Release(pObject);
      pRootNode->pFontManager.pObject = v4;
      v15 = this->pRootNode;
      v16 = this->pASRoot->pMovieImpl;
      v15->pNext = v16->RootMovieDefNodes.Root.pNext;
      v15->pPrev = (Scaleform::GFx::MovieDefRootNode *)&v16->MovieLevels.Data.Policy;
      v16->RootMovieDefNodes.Root.pNext->pPrev = v15;
      v16->RootMovieDefNodes.Root.pNext = v15;
    }
  }
}

void __fastcall Scaleform::GFx::DisplayObjContainer::CalcDisplayListHitTestMaskArray(
        Scaleform::GFx::DisplayObjContainer *this,
        Scaleform::ArrayPOD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *phitTest,
        const Scaleform::Render::Point<float> *pt,
        bool testShape)
{
  unsigned __int64 Size; // rdi
  unsigned __int64 i; // rsi
  Scaleform::GFx::DisplayObjectBase *pCharacter; // r15
  unsigned __int8 *Data; // rbx
  __int64 v11; // r8
  bool v12; // al
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // r8
  Scaleform::GFx::DisplayObjectBase *v15; // rcx
  Scaleform::Render::Matrix2x4<float> v16; // [rsp+20h] [rbp-48h] BYREF
  Scaleform::Render::Point<float> result; // [rsp+70h] [rbp+8h] BYREF

  Size = this->mDisplayList.DisplayObjectArray.Data.Size;
  for ( i = 0i64; i < Size; ++i )
  {
    pCharacter = this->mDisplayList.DisplayObjectArray.Data.Data[i].pCharacter;
    if ( pCharacter->ClipDepth )
    {
      if ( !phitTest->Data.Size )
      {
        if ( Size > phitTest->Data.Policy.Capacity )
          Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorGH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
            (Scaleform::ArrayDataBase<char,Scaleform::AllocatorGH<char,2>,Scaleform::ArrayDefaultPolicy> *)phitTest,
            phitTest,
            Size + (Size >> 2));
        phitTest->Data.Size = Size;
        memset(phitTest->Data.Data, 1, Size);
      }
      v16 = *pCharacter->GetMatrix(pCharacter);
      Scaleform::Render::Matrix2x4<float>::TransformByInverse(&v16, &result, pt);
      Data = phitTest->Data.Data;
      LOBYTE(v11) = 1;
      v12 = pCharacter->PointTestLocal(pCharacter, &result, v11);
      v13 = i + 1;
      Data[i] = v12;
      if ( i + 1 < Size )
      {
        v14 = v13;
        do
        {
          v15 = this->mDisplayList.DisplayObjectArray.Data.Data[v14].pCharacter;
          if ( v15 && v15->Depth > pCharacter->ClipDepth )
            break;
          ++v14;
          phitTest->Data.Data[v13++] = phitTest->Data.Data[i];
        }
        while ( v13 < Size );
      }
      i = v13 - 1;
    }
  }
}

char __fastcall Scaleform::GFx::DisplayObjContainer::Contains(
        Scaleform::GFx::DisplayObjContainer *this,
        Scaleform::GFx::DisplayObjectBase *ch)
{
  __int64 v5; // rbx
  __int64 i; // rdi
  Scaleform::GFx::DisplayObjContainer *pCharacter; // rcx

  if ( this == ch || ch && ch->pParent == this )
    return 1;
  v5 = 0i64;
  if ( !this->mDisplayList.DisplayObjectArray.Data.Size )
    return 0;
  for ( i = 0i64; ; ++i )
  {
    pCharacter = 0i64;
    if ( (this->mDisplayList.DisplayObjectArray.Data.Data[i].pCharacter->Flags & 0x200) != 0 )
      pCharacter = (Scaleform::GFx::DisplayObjContainer *)this->mDisplayList.DisplayObjectArray.Data.Data[i].pCharacter;
    if ( pCharacter && Scaleform::GFx::DisplayObjContainer::Contains(pCharacter, ch) )
      break;
    if ( ++v5 >= this->mDisplayList.DisplayObjectArray.Data.Size )
      return 0;
  }
  return 1;
}

void __fastcall Scaleform::GFx::DisplayObjContainer::CreateAndReplaceDisplayObject(
        Scaleform::GFx::DisplayObjContainer *this,
        const Scaleform::GFx::CharPosInfo *pos,
        const Scaleform::GFx::ASString *name,
        Scaleform::GFx::DisplayObjectBase **newChar)
{
  int Depth; // edx
  Scaleform::GFx::DisplayObjectBase *CharacterAtDepth; // rax
  Scaleform::RefCountNTSImpl *v10; // rdi
  int v11; // er15
  Scaleform::GFx::ASMovieRootBase *pASRoot; // rdx
  Scaleform::GFx::DisplayObjectBase *v13; // r14
  Scaleform::GFx::ASSupport *pObject; // rcx
  Scaleform::GFx::DisplayObjectBase *v15; // rbx
  _BOOL8 v16; // rdx
  Scaleform::GFx::CharacterCreateInfo v17; // [rsp+30h] [rbp-58h] BYREF
  Scaleform::GFx::ResourceId id; // [rsp+90h] [rbp+8h] BYREF
  unsigned int v19; // [rsp+98h] [rbp+10h] BYREF

  id.Id = pos->CharacterId.Id;
  Scaleform::GFx::MovieDefImpl::GetCharacterCreateInfo(this->pDefImpl.pObject, &v17, (Scaleform::GFx::ResourceId)&id);
  if ( v17.pCharDef )
  {
    Depth = pos->Depth;
    id.Id = pos->CharacterId.Id;
    CharacterAtDepth = Scaleform::GFx::DisplayList::GetCharacterAtDepth(&this->mDisplayList, Depth, &id, 0i64);
    v10 = CharacterAtDepth;
    if ( CharacterAtDepth )
      ++CharacterAtDepth->RefCount;
    v11 = -1;
    if ( CharacterAtDepth && CharacterAtDepth->Depth >= -1 )
      v11 = CharacterAtDepth->GetVisible(CharacterAtDepth);
    pASRoot = this->pASRoot;
    v13 = 0i64;
    pObject = pASRoot->pASSupport.pObject;
    v19 = pos->CharacterId.Id;
    v15 = (Scaleform::GFx::DisplayObjectBase *)((__int64 (__fastcall *)(Scaleform::GFx::ASSupport *, Scaleform::GFx::MovieImpl *, Scaleform::GFx::CharacterCreateInfo *, Scaleform::GFx::DisplayObjContainer *, unsigned int *, _DWORD))pObject->CreateCharacterInstance)(
                                                 pObject,
                                                 pASRoot->pMovieImpl,
                                                 &v17,
                                                 this,
                                                 &v19,
                                                 0);
    Scaleform::GFx::DisplayObjContainer::ReplaceDisplayObject(this, pos, v15, name);
    if ( v11 > -1 )
    {
      LOBYTE(v16) = v11 != 0;
      v15->SetVisible(v15, v16);
    }
    if ( newChar )
    {
      if ( v15->RefCount > 1 )
        v13 = v15;
      *newChar = v13;
    }
    if ( v15 )
      Scaleform::RefCountNTSImpl::Release(v15);
    if ( v10 )
      Scaleform::RefCountNTSImpl::Release(v10);
  }
  else
  {
    Scaleform::GFx::LogBase<Scaleform::GFx::DisplayObjectBase>::LogError(
      &this->Scaleform::GFx::LogBase<Scaleform::GFx::DisplayObjectBase>,
      "DisplayObjContainer::ReplaceDisplayObject() - unknown cid = %d",
      LOWORD(pos->CharacterId.Id));
  }
}

void __fastcall ActorWeapon::ActionFlagCheck(_SETJMP_FLOAT128 *JumpBuffer)
{
  ;
}

void __fastcall Scaleform::GFx::DisplayObjContainer::FillTabableArray(
        Scaleform::GFx::DisplayObjContainer *this,
        Scaleform::GFx::InteractiveObject::FillTabableParams *params)
{
  unsigned __int8 AvmObjOffset; // al
  __int64 v4; // rax

  AvmObjOffset = this->AvmObjOffset;
  if ( AvmObjOffset )
  {
    v4 = ((__int64 (__fastcall *)(char *))(*(Scaleform::GFx::DisplayObjContainer_vtbl **)((char *)&this->Scaleform::GFx::InteractiveObject::Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable
                                                                                        + 4 * AvmObjOffset))->SetMatrix3D)((char *)this + 4 * AvmObjOffset);
    (*(void (__fastcall **)(__int64, Scaleform::GFx::InteractiveObject::FillTabableParams *))(*(_QWORD *)v4 + 184i64))(
      v4,
      params);
  }
}

Scaleform::GFx::MovieDefRootNode *__fastcall Scaleform::GFx::DisplayObjContainer::FindRootNode(
        Scaleform::GFx::DisplayObjContainer *this)
{
  Scaleform::GFx::DisplayObjContainer *v1; // rax

  while ( this )
  {
    v1 = 0i64;
    if ( (this->Scaleform::GFx::InteractiveObject::Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Flags & 0x200) != 0 )
      v1 = this;
    if ( v1 && v1->pRootNode )
      return v1->pRootNode;
    this = (Scaleform::GFx::DisplayObjContainer *)this->pParent;
  }
  return 0i64;
}

void __fastcall Scaleform::GFx::DisplayObjContainer::ForceShutdown(Scaleform::GFx::DisplayObjContainer *this)
{
  Scaleform::GFx::DisplayList::Clear(&this->mDisplayList, this);
}

Scaleform::Render::Rect<float> *__fastcall Scaleform::GFx::DisplayObjContainer::GetBounds(
        Scaleform::GFx::DisplayObjContainer *this,
        Scaleform::Render::Rect<float> *result,
        const Scaleform::Render::Matrix2x4<float> *t)
{
  Scaleform::GFx::DisplayList::GetBounds(&this->mDisplayList, result, t);
  return result;
}

Scaleform::GFx::DisplayObjectBase *__fastcall Scaleform::GFx::DisplayObjContainer::GetChildAt(
        Scaleform::GFx::DisplayObjContainer *this,
        unsigned int index)
{
  if ( index < this->mDisplayList.DisplayObjectArray.Data.Size )
    return this->mDisplayList.DisplayObjectArray.Data.Data[index].pCharacter;
  else
    return 0i64;
}

void __fastcall Scaleform::GFx::DisplayObjContainer::GetChildDescTree(
        Scaleform::GFx::DisplayObjContainer *this,
        Scaleform::AmpMovieObjectDesc *parent,
        Scaleform::MemoryHeap *heap)
{
  unsigned __int64 v3; // rbp
  Scaleform::MemoryHeap *v4; // r9
  Scaleform::GFx::DisplayObjContainer *v5; // rax
  __int64 v6; // rcx
  Scaleform::ArrayLH<Scaleform::Ptr<Scaleform::AmpMovieObjectDesc>,2,Scaleform::ArrayDefaultPolicy> *p_Children; // rsi
  __int64 v8; // rdi
  Scaleform::StringLH *v9; // rax
  Scaleform::StringLH *v10; // rbx
  Scaleform::GFx::DisplayObject *v11; // rcx
  Scaleform::GFx::ASString *Name; // rax
  Scaleform::GFx::ASStringNode *pNode; // rcx
  Scaleform::Ptr<Scaleform::AmpMovieObjectDesc> *v15; // rsi
  Scaleform::GFx::ASString result; // [rsp+20h] [rbp-28h] BYREF
  Scaleform::ArrayLH<Scaleform::Ptr<Scaleform::AmpMovieObjectDesc>,2,Scaleform::ArrayDefaultPolicy> *v17; // [rsp+28h] [rbp-20h]
  __int64 v20; // [rsp+68h] [rbp+20h]

  v3 = 0i64;
  v4 = heap;
  v5 = this;
  if ( this->mDisplayList.DisplayObjectArray.Data.Size )
  {
    v6 = 0i64;
    p_Children = &parent->Children;
    v17 = &parent->Children;
    v20 = 0i64;
    do
    {
      v8 = *(__int64 *)((char *)&v5->mDisplayList.DisplayObjectArray.Data.Data->pCharacter + v6);
      v9 = (Scaleform::StringLH *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))v4->Alloc)(v4, 48i64);
      v10 = v9;
      if ( v9 )
      {
        v9[1].HeapTypeBits = 0i64;
        v9[2].HeapTypeBits = 0i64;
        v9[3].HeapTypeBits = 0i64;
        v9[4].HeapTypeBits = 0i64;
        v9[5].HeapTypeBits = 0i64;
        v9->HeapTypeBits = (unsigned __int64)&Scaleform::RefCountImplCore::`vftable';
        v9->HeapTypeBits = (unsigned __int64)&Scaleform::AmpMovieObjectDesc::`vftable';
        LODWORD(v9[1].pData) = 1;
        Scaleform::StringLH::StringLH(v9 + 2);
        v10[3].HeapTypeBits = 0i64;
        v10[4].HeapTypeBits = 0i64;
        v10[5].HeapTypeBits = 0i64;
      }
      else
      {
        v10 = 0i64;
      }
      v11 = 0i64;
      if ( (*(_BYTE *)(v8 + 107) & 1) != 0 )
        v11 = (Scaleform::GFx::DisplayObject *)v8;
      if ( v11 )
      {
        Name = Scaleform::GFx::DisplayObject::GetName(v11, &result);
        Scaleform::String::operator=(v10 + 2, Name->pNode->pData);
        pNode = result.pNode;
        if ( result.pNode->RefCount-- == 1 )
          Scaleform::GFx::ASStringNode::ReleaseNode(pNode);
      }
      else
      {
        Scaleform::String::operator=(v10 + 2, "Unnamed");
      }
      Scaleform::ArrayDataBase<Scaleform::Ptr<Scaleform::Render::ContextImpl::ContextCaptureNotify>,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::Render::ContextImpl::ContextCaptureNotify>,2>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
        (Scaleform::ArrayDataBase<Scaleform::Ptr<Scaleform::Render::ContextImpl::ContextCaptureNotify>,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::Render::ContextImpl::ContextCaptureNotify>,2>,Scaleform::ArrayDefaultPolicy> *)p_Children,
        p_Children,
        p_Children->Data.Size + 1);
      v15 = &p_Children->Data.Data[p_Children->Data.Size - 1];
      if ( v15 )
      {
        if ( v10 )
          Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)v10);
        v15->pObject = (Scaleform::AmpMovieObjectDesc *)v10;
      }
      if ( v10 )
        Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v10);
      if ( (*(_WORD *)(v8 + 106) & 0x200) != 0 )
        Scaleform::GFx::DisplayObjContainer::GetChildDescTree(
          (Scaleform::GFx::DisplayObjContainer *)v8,
          (Scaleform::AmpMovieObjectDesc *)v10,
          heap);
      ++v3;
      v5 = this;
      v6 = v20 + 16;
      p_Children = v17;
      v4 = heap;
      v20 += 16i64;
    }
    while ( v3 < this->mDisplayList.DisplayObjectArray.Data.Size );
  }
}

Scaleform::GFx::FontManager *__fastcall Scaleform::GFx::DisplayObjContainer::GetFontManager(
        Scaleform::GFx::DisplayObjContainer *this)
{
  Scaleform::GFx::MovieDefRootNode *pRootNode; // rax
  Scaleform::GFx::InteractiveObject *pParent; // rcx

  pRootNode = this->pRootNode;
  if ( pRootNode )
    return pRootNode->pFontManager.pObject;
  pParent = this->pParent;
  if ( pParent )
    return pParent->GetFontManager(pParent);
  else
    return 0i64;
}

Scaleform::Render::Rect<float> *__fastcall Scaleform::GFx::Sprite::GetRectBounds(
        Scaleform::GFx::Sprite *this,
        Scaleform::Render::Rect<float> *result,
        const Scaleform::Render::Matrix2x4<float> *transform)
{
  Scaleform::GFx::DisplayList::GetRectBounds(&this->mDisplayList, result, transform);
  return result;
}

__int64 __fastcall Scaleform::GFx::DisplayObjContainer::GetTopMostMouseEntity(
        Scaleform::GFx::DisplayObjContainer *this,
        const Scaleform::Render::Point<float> *pt,
        Scaleform::GFx::DisplayObjectBase::TopMostDescr *pdescr)
{
  Scaleform::GFx::Sprite *v6; // rdi
  Scaleform::GFx::DisplayObject *Mask; // rax
  Scaleform::GFx::DisplayObject *v8; // rsi
  __int64 v9; // r8
  Scaleform::Render::ScreenToWorld *p_ScreenToWorld; // rdi
  unsigned __int8 AvmObjOffset; // al
  __int64 v12; // rax
  unsigned int v13; // ebx
  Scaleform::Render::Point<float> p; // [rsp+30h] [rbp-D0h] BYREF
  Scaleform::Render::Point<float> ptOut; // [rsp+38h] [rbp-C8h] BYREF
  Scaleform::ArrayPOD<unsigned char,2,Scaleform::ArrayDefaultPolicy> phitTest; // [rsp+40h] [rbp-C0h] BYREF
  Scaleform::Render::Matrix3x4<float> pmat; // [rsp+60h] [rbp-A0h] BYREF
  Scaleform::Render::Matrix2x4<float> v19; // [rsp+90h] [rbp-70h] BYREF
  __int128 v20; // [rsp+B0h] [rbp-50h]
  __int128 v21; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v22; // [rsp+D0h] [rbp-30h]
  __int128 v23; // [rsp+E0h] [rbp-20h]
  __int128 v24; // [rsp+F0h] [rbp-10h]

  v6 = this->GetHitAreaHolder(this);
  if ( (this->Scaleform::GFx::InteractiveObject::Flags & 0x800) != 0
    || !this->GetVisible(this) && !v6
    || this->IsUsedAsMask(this)
    || pdescr->pIgnoreMC == this
    || !this->IsFocusAllowed(this, this->pASRoot->pMovieImpl, pdescr->ControllerIdx) )
  {
    goto LABEL_25;
  }
  if ( !Scaleform::GFx::DisplayObject::TransformPointToLocalAndCheckBounds(this, &p, pt, 1, 0i64) )
    return 2i64;
  Mask = Scaleform::GFx::DisplayObject::GetMask(this);
  v8 = Mask;
  if ( Mask )
  {
    if ( Mask->IsUsedAsMask(Mask) && (v8->Flags & 0x10) == 0 )
    {
      if ( Scaleform::GFx::DisplayObjectBase::Has3D(v8) )
      {
        *(_OWORD *)&v19.M[1][0] = 0x3F80000000000000ui64;
        v22 = 0x3F80000000000000ui64;
        *((_QWORD *)&v24 + 1) = 0x3F80000000000000i64;
        *(_OWORD *)&pmat.M[1][0] = 0x3F80000000000000ui64;
        *(_OWORD *)&v19.M[0][0] = 0x3F800000ui64;
        *((_QWORD *)&v20 + 1) = 1065353216i64;
        v21 = 0x3F800000ui64;
        *((_QWORD *)&v23 + 1) = 1065353216i64;
        *(_OWORD *)&pmat.M[0][0] = 0x3F800000ui64;
        *(_QWORD *)&pmat.M[2][2] = 1065353216i64;
        *(_QWORD *)&v20 = 0i64;
        *(_QWORD *)&v23 = 0i64;
        *(_QWORD *)&v24 = 0i64;
        *(_QWORD *)&pmat.M[2][0] = 0i64;
        Scaleform::GFx::DisplayObjectBase::GetWorldMatrix3D(v8, &pmat);
        p_ScreenToWorld = &this->pASRoot->pMovieImpl->ScreenToWorld;
        if ( v8->GetProjectionMatrix3D(v8, (Scaleform::Render::Matrix4x4<float> *)&v21, 0) )
        {
          *(_OWORD *)&p_ScreenToWorld->MatProj.M[0][0] = v21;
          *(_OWORD *)&p_ScreenToWorld->MatProj.M[1][0] = v22;
          *(_OWORD *)&p_ScreenToWorld->MatProj.M[2][0] = v23;
          *(_OWORD *)&p_ScreenToWorld->MatProj.M[3][0] = v24;
        }
        if ( v8->GetViewMatrix3D(v8, (Scaleform::Render::Matrix3x4<float> *)&v19, 0) )
        {
          *(Scaleform::Render::Matrix2x4<float> *)&p_ScreenToWorld->MatView.M[0][0] = v19;
          *(_OWORD *)&p_ScreenToWorld->MatView.M[2][0] = v20;
        }
        p_ScreenToWorld->MatWorld = pmat;
        Scaleform::Render::ScreenToWorld::GetWorldPoint(p_ScreenToWorld, &ptOut);
      }
      else
      {
        *(_OWORD *)&v19.M[0][0] = _xmm;
        *(_OWORD *)&v19.M[1][0] = _xmm;
        *(_OWORD *)&pmat.M[0][0] = _xmm;
        *(_OWORD *)&pmat.M[1][0] = _xmm;
        Scaleform::GFx::DisplayObjectBase::GetWorldMatrix(v8, (Scaleform::Render::Matrix2x4<float> *)&pmat);
        Scaleform::Render::Matrix2x4<float>::SetInverse(&v19, (const Scaleform::Render::Matrix2x4<float> *)&pmat);
        *(_OWORD *)&pmat.M[0][0] = _xmm;
        *(_OWORD *)&pmat.M[1][0] = _xmm;
        Scaleform::GFx::DisplayObjectBase::GetWorldMatrix(this, (Scaleform::Render::Matrix2x4<float> *)&pmat);
        ptOut.x = (float)((float)((float)((float)(pmat.M[1][1] * v19.M[0][1]) + (float)(v19.M[0][0] * pmat.M[0][1]))
                                * p.y)
                        + (float)((float)((float)(pmat.M[1][0] * v19.M[0][1]) + (float)(pmat.M[0][0] * v19.M[0][0]))
                                * p.x))
                + (float)(v19.M[0][3]
                        + (float)((float)(v19.M[0][1] * pmat.M[1][3]) + (float)(v19.M[0][0] * pmat.M[0][3])));
        ptOut.y = (float)((float)((float)((float)(pmat.M[1][1] * v19.M[1][1]) + (float)(v19.M[1][0] * pmat.M[0][1]))
                                * p.y)
                        + (float)((float)((float)(pmat.M[1][0] * v19.M[1][1]) + (float)(pmat.M[0][0] * v19.M[1][0]))
                                * p.x))
                + (float)(v19.M[1][3]
                        + (float)((float)(v19.M[1][1] * pmat.M[1][3]) + (float)(v19.M[1][0] * pmat.M[0][3])));
      }
      LOBYTE(v9) = 1;
      if ( !v8->PointTestLocal(v8, &ptOut, v9) )
      {
LABEL_25:
        pdescr->pResult = 0i64;
        return 2i64;
      }
    }
  }
  memset(&phitTest, 0, sizeof(phitTest));
  Scaleform::GFx::DisplayObjContainer::CalcDisplayListHitTestMaskArray(this, &phitTest, &p, 1);
  AvmObjOffset = this->AvmObjOffset;
  if ( AvmObjOffset )
  {
    v12 = ((__int64 (__fastcall *)(char *))(*(Scaleform::GFx::DisplayObjContainer_vtbl **)((char *)&this->Scaleform::GFx::InteractiveObject::Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable
                                                                                         + 4 * AvmObjOffset))->SetMatrix3D)((char *)this + 4 * AvmObjOffset);
    v13 = (*(__int64 (__fastcall **)(__int64, Scaleform::Render::Point<float> *, Scaleform::GFx::DisplayObjectBase::TopMostDescr *, Scaleform::ArrayPOD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *))(*(_QWORD *)v12 + 176i64))(
            v12,
            &p,
            pdescr,
            &phitTest);
  }
  else
  {
    v13 = 2;
  }
  if ( phitTest.Data.Data )
    ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
  return v13;
}

char __fastcall Scaleform::GFx::DisplayObjContainer::Has3D(Scaleform::GFx::DisplayObjContainer *this)
{
  Scaleform::Render::TreeNode *pObject; // rcx
  __int64 v4; // rbx
  unsigned __int64 Size; // rbp
  __int64 i; // rdi
  Scaleform::GFx::DisplayObjectBase *pCharacter; // rcx

  pObject = this->pRenNode.pObject;
  if ( pObject
    && (*(_WORD *)(*(_QWORD *)(*(_QWORD *)(((unsigned __int64)pObject & 0xFFFFFFFFFFFFF000ui64) + 0x20)
                             + 8i64
                             * (unsigned int)((int)((_DWORD)pObject - ((unsigned int)pObject & 0xFFFFF000) - 56) / 56)
                             + 40)
                 + 10i64) & 0x200) != 0 )
  {
    return 1;
  }
  v4 = 0i64;
  Size = this->mDisplayList.DisplayObjectArray.Data.Size;
  if ( !Size )
    return 0;
  for ( i = 0i64; ; ++i )
  {
    pCharacter = this->mDisplayList.DisplayObjectArray.Data.Data[i].pCharacter;
    if ( pCharacter )
    {
      if ( pCharacter->Has3D(pCharacter) )
        break;
    }
    if ( ++v4 >= Size )
      return 0;
  }
  return 1;
}

void Scaleform::GFx::LogBase<Scaleform::GFx::DisplayObjectBase>::LogError(
        Scaleform::GFx::LogBase<Scaleform::GFx::DisplayObjectBase> *this,
        const char *pfmt,
        ...)
{
  Scaleform::GFx::LogBase<Scaleform::GFx::DisplayObjectBase> *v3; // rcx
  __int64 *v4; // rax
  __int64 v5; // r10
  int v6[6]; // [rsp+20h] [rbp-18h] BYREF
  va_list va; // [rsp+50h] [rbp+18h] BYREF

  va_start(va, pfmt);
  v3 = this - 3;
  if ( !this )
    v3 = 0i64;
  v4 = (__int64 *)((__int64 (__fastcall *)(Scaleform::GFx::LogBase<Scaleform::GFx::DisplayObjectBase> *))v3->__vftable[38].~LogBase<Scaleform::GFx::DisplayObjectBase>)(v3);
  if ( v4 )
  {
    v5 = *v4;
    v6[0] = 200704;
    (*(void (__fastcall **)(__int64 *, int *, const char *, __int64 *))(v5 + 8))(v4, v6, pfmt, (__int64 *)va);
  }
}

void __fastcall Scaleform::GFx::DisplayObjContainer::MoveDisplayObject(
        Scaleform::GFx::DisplayObjContainer *this,
        const Scaleform::GFx::CharPosInfo *pos)
{
  Scaleform::GFx::DisplayList::MoveDisplayObject(&this->mDisplayList, this, pos);
  ActorWeapon::ActionFlagCheck((_SETJMP_FLOAT128 *)this);
}

void __fastcall Scaleform::GFx::DisplayObjContainer::OnInsertionAsLevel(
        Scaleform::GFx::DisplayObjContainer *this,
        int level)
{
  Scaleform::GFx::InteractiveObject *pMainMovie; // rcx
  _BOOL8 v4; // rdx
  unsigned int Flags; // ecx
  int v6; // eax

  if ( level )
  {
    if ( level > 0 )
    {
      pMainMovie = this->pASRoot->pMovieImpl->pMainMovie;
      if ( pMainMovie )
      {
        if ( pMainMovie->IsFocusRectEnabled(pMainMovie) )
        {
          this->Scaleform::GFx::InteractiveObject::Flags |= 0x180u;
        }
        else
        {
          this->Scaleform::GFx::InteractiveObject::Flags &= ~0x80u;
          this->Scaleform::GFx::InteractiveObject::Flags |= 0x100u;
        }
      }
    }
  }
  else
  {
    this->Scaleform::GFx::InteractiveObject::Flags |= 0x180u;
  }
  Scaleform::GFx::InteractiveObject::AddToPlayList(this);
  Flags = this->Scaleform::GFx::InteractiveObject::Flags;
  if ( (Flags & 0x200000) == 0 || (Flags & 0x400000) != 0 )
    v4 = 0i64;
  else
    LOBYTE(v4) = 1;
  v6 = this->CheckAdvanceStatus(this, v4);
  if ( v6 == -1 )
  {
    this->Scaleform::GFx::InteractiveObject::Flags |= 0x400000u;
  }
  else if ( v6 == 1 )
  {
    Scaleform::GFx::InteractiveObject::AddToOptimizedPlayList(this);
    this->FocusGroupMask = -1;
    return;
  }
  this->FocusGroupMask = -1;
}

char __fastcall Scaleform::GFx::DisplayObjContainer::PointTestLocal(
        Scaleform::GFx::DisplayObjContainer *this,
        const Scaleform::Render::Point<float> *pt,
        unsigned __int8 hitTestMask)
{
  char v6; // al
  Scaleform::GFx::DisplayObjContainer_vtbl *v7; // rax
  float *v8; // rax
  float y; // xmm1_4
  char v10; // r13
  unsigned __int64 Size; // rsi
  Scaleform::GFx::DisplayObject *Mask; // rax
  Scaleform::GFx::DisplayObject *v13; // rbx
  Scaleform::GFx::DisplayObject_vtbl *v14; // rax
  float v15; // xmm9_4
  unsigned __int64 v16; // rdi
  _BYTE *v17; // r12
  float x; // xmm0_4
  float v19; // xmm1_4
  unsigned __int64 v20; // rsi
  Scaleform::GFx::DisplayObjectBase *pCharacter; // rbx
  char v22; // bl
  Scaleform::Render::Point<float> v24; // [rsp+28h] [rbp-91h] BYREF
  Scaleform::Render::Matrix2x4<float> v25; // [rsp+30h] [rbp-89h] BYREF
  Scaleform::Render::Matrix2x4<float> pmat; // [rsp+50h] [rbp-69h] BYREF
  Scaleform::Render::Point<float> result; // [rsp+70h] [rbp-49h] BYREF

  if ( (this->Scaleform::GFx::InteractiveObject::Flags & 0x800) != 0 )
    return 0;
  if ( (this->Scaleform::GFx::InteractiveObject::Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Flags & 1) == 0 )
  {
    v7 = this->Scaleform::GFx::InteractiveObject::Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable;
    *(_OWORD *)&pmat.M[0][0] = _xmm;
    *(_OWORD *)&pmat.M[1][0] = _xmm;
    v8 = (float *)v7->GetBounds(this, (Scaleform::Render::Rect<float> *)&result, &pmat);
    if ( v8[2] < pt->x )
      return 0;
    if ( pt->x < *v8 )
      return 0;
    y = pt->y;
    if ( v8[3] < y || y < v8[1] )
      return 0;
  }
  v10 = hitTestMask & 2;
  if ( (hitTestMask & 2) == 0 || (v6 = this->GetVisible(this)) != 0 )
  {
    Size = this->mDisplayList.DisplayObjectArray.Data.Size;
    Mask = Scaleform::GFx::DisplayObject::GetMask(this);
    v13 = Mask;
    if ( !Mask )
      goto LABEL_14;
    if ( !Mask->IsUsedAsMask(Mask) )
      goto LABEL_14;
    if ( (v13->Flags & 0x10) != 0 )
      goto LABEL_14;
    *(_OWORD *)&v25.M[0][0] = _xmm;
    *(_OWORD *)&v25.M[1][0] = _xmm;
    *(_OWORD *)&pmat.M[0][0] = _xmm;
    *(_OWORD *)&pmat.M[1][0] = _xmm;
    Scaleform::GFx::DisplayObjectBase::GetWorldMatrix(v13, &pmat);
    Scaleform::Render::Matrix2x4<float>::SetInverse(&v25, &pmat);
    *(_OWORD *)&pmat.M[0][0] = _xmm;
    *(_OWORD *)&pmat.M[1][0] = _xmm;
    Scaleform::GFx::DisplayObjectBase::GetWorldMatrix(this, &pmat);
    v14 = v13->Scaleform::GFx::DisplayObjectBase::Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable;
    v15 = (float)((float)((float)(pmat.M[1][0] * v25.M[0][1]) + (float)(pmat.M[0][0] * v25.M[0][0])) * pt->x)
        + (float)((float)((float)(v25.M[0][0] * pmat.M[0][1]) + (float)(pmat.M[1][1] * v25.M[0][1])) * pt->y);
    result.y = (float)((float)((float)((float)(pmat.M[1][0] * v25.M[1][1]) + (float)(pmat.M[0][0] * v25.M[1][0])) * pt->x)
                     + (float)((float)((float)(v25.M[1][0] * pmat.M[0][1]) + (float)(pmat.M[1][1] * v25.M[1][1])) * pt->y))
             + (float)(v25.M[1][3] + (float)((float)(v25.M[1][1] * pmat.M[1][3]) + (float)(v25.M[1][0] * pmat.M[0][3])));
    result.x = v15
             + (float)(v25.M[0][3] + (float)((float)(v25.M[0][1] * pmat.M[1][3]) + (float)(v25.M[0][0] * pmat.M[0][3])));
    v6 = v14->PointTestLocal(v13, &result, hitTestMask);
    if ( v6 )
    {
LABEL_14:
      memset(&v25, 0, 24);
      Scaleform::GFx::DisplayObjContainer::CalcDisplayListHitTestMaskArray(
        this,
        (Scaleform::ArrayPOD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *)&v25,
        pt,
        hitTestMask & 1);
      v16 = Size - 1;
      v17 = *(_BYTE **)&v25.M[0][0];
      *(_OWORD *)&pmat.M[0][0] = _xmm;
      x = pt->x;
      *(_OWORD *)&pmat.M[1][0] = _xmm;
      v19 = pt->y;
      v24.x = x;
      v24.y = v19;
      if ( (__int64)(Size - 1) < 0 )
      {
LABEL_23:
        v22 = 0;
      }
      else
      {
        v20 = v16;
        while ( 1 )
        {
          pCharacter = this->mDisplayList.DisplayObjectArray.Data.Data[v20].pCharacter;
          if ( (!v10 || pCharacter->GetVisible(pCharacter))
            && (!*(_QWORD *)&v25.M[0][2] || v17[v16] && !pCharacter->ClipDepth) )
          {
            pmat = *pCharacter->GetMatrix(pCharacter);
            Scaleform::Render::Matrix2x4<float>::TransformByInverse(&pmat, &result, pt);
            v24 = result;
            if ( pCharacter->PointTestLocal(pCharacter, &v24, hitTestMask) )
              break;
          }
          --v20;
          if ( (--v16 & 0x8000000000000000ui64) != 0i64 )
            goto LABEL_23;
        }
        v22 = 1;
      }
      if ( v17 )
        Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v17);
      return v22;
    }
  }
  return v6;
}

void __fastcall Scaleform::GFx::DisplayObjContainer::PropagateFocusGroupMask(
        Scaleform::GFx::DisplayObjContainer *this,
        unsigned int mask)
{
  unsigned __int64 Size; // rdi
  __int64 v5; // rbx
  Scaleform::GFx::DisplayObjectBase *pCharacter; // rcx
  Scaleform::GFx::DisplayObjectBase_vtbl *v7; // rax

  Size = this->mDisplayList.DisplayObjectArray.Data.Size;
  this->FocusGroupMask = mask;
  if ( Size )
  {
    v5 = 0i64;
    do
    {
      pCharacter = 0i64;
      if ( SLOBYTE(this->mDisplayList.DisplayObjectArray.Data.Data[v5].pCharacter->Flags) < 0 )
        pCharacter = this->mDisplayList.DisplayObjectArray.Data.Data[v5].pCharacter;
      if ( pCharacter )
      {
        v7 = pCharacter->Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable;
        HIWORD(pCharacter[1].pRenNode.pObject) = mask;
        ((void (__fastcall *)(Scaleform::GFx::DisplayObjectBase *, _QWORD))v7[1].GetY)(pCharacter, mask);
      }
      ++v5;
      --Size;
    }
    while ( Size );
  }
}

void __fastcall Scaleform::GFx::DisplayObjContainer::PropagateKeyEvent(
        Scaleform::GFx::DisplayObjContainer *this,
        const Scaleform::GFx::EventId *id,
        int *pkeyMask)
{
  if ( this )
    ++this->RefCount;
  if ( this->GetVisible(this) )
  {
    Scaleform::GFx::DisplayList::PropagateKeyEvent(&this->mDisplayList, id, pkeyMask);
    this->OnKeyEvent(this, id, pkeyMask);
  }
  Scaleform::RefCountNTSImpl::Release(this);
}

void __fastcall Scaleform::GFx::DisplayObjContainer::PropagateMouseEvent(
        Scaleform::GFx::DisplayObjContainer *this,
        const Scaleform::GFx::EventId *id)
{
  unsigned __int8 AvmObjOffset; // al
  __int64 v5; // rax

  if ( this )
    ++this->RefCount;
  if ( id->Id == 8 && this->pASRoot->pMovieImpl->MouseCursorCount )
    Scaleform::GFx::InteractiveObject::DoMouseDrag(this, id->ControllerIndex);
  if ( this->GetVisible(this) )
  {
    Scaleform::GFx::DisplayList::PropagateMouseEvent(&this->mDisplayList, id);
    AvmObjOffset = this->AvmObjOffset;
    if ( AvmObjOffset )
    {
      v5 = ((__int64 (__fastcall *)(char *))(*(Scaleform::GFx::DisplayObjContainer_vtbl **)((char *)&this->Scaleform::GFx::InteractiveObject::Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable
                                                                                          + 4 * AvmObjOffset))->SetMatrix3D)((char *)this + 4 * AvmObjOffset);
      (*(void (__fastcall **)(__int64, const Scaleform::GFx::EventId *))(*(_QWORD *)v5 + 64i64))(v5, id);
    }
  }
  Scaleform::RefCountNTSImpl::Release(this);
}

void __fastcall Scaleform::GFx::DisplayObjContainer::PropagateScale9GridExists(
        Scaleform::GFx::DisplayObjContainer *this)
{
  Scaleform::Render::Rect<float> *Scale9Grid; // rax
  __int64 v3; // rbx
  bool v4; // cf
  char v5; // al
  bool v6; // bp
  unsigned __int64 i; // rsi
  Scaleform::GFx::DisplayObjectBase *pCharacter; // rcx
  Scaleform::Render::Rect<float> result; // [rsp+20h] [rbp-38h] BYREF

  Scale9Grid = Scaleform::GFx::DisplayObjectBase::GetScale9Grid(this, &result);
  v3 = 0i64;
  if ( Scale9Grid->x1 >= Scale9Grid->x2 || (v4 = Scale9Grid->y1 < Scale9Grid->y2, v5 = 0, !v4) )
    v5 = 1;
  v6 = v5 == 0;
  if ( (this->Scaleform::GFx::InteractiveObject::Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Flags & 1) != 0
    || v5 )
  {
    for ( i = this->mDisplayList.DisplayObjectArray.Data.Size; i; --i )
    {
      pCharacter = this->mDisplayList.DisplayObjectArray.Data.Data[v3].pCharacter;
      if ( (this->Scaleform::GFx::InteractiveObject::Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Flags & 1) != 0
        || v6 )
      {
        pCharacter->Flags |= 1u;
      }
      else
      {
        pCharacter->Flags &= ~1u;
      }
      pCharacter->PropagateScale9GridExists(pCharacter);
      ++v3;
    }
  }
}

void __fastcall Scaleform::GFx::DisplayObjContainer::RemoveDisplayObject(
        Scaleform::GFx::DisplayObjContainer *this,
        int depth,
        unsigned int *id)
{
  Scaleform::GFx::ResourceId ida; // [rsp+30h] [rbp+8h] BYREF

  ida.Id = *id;
  Scaleform::GFx::DisplayList::RemoveDisplayObject(&this->mDisplayList, this, depth, (int *)&ida);
  ActorWeapon::ActionFlagCheck((_SETJMP_FLOAT128 *)this);
}

void __fastcall Scaleform::GFx::DisplayObjContainer::RemoveDisplayObject(
        Scaleform::GFx::DisplayObjContainer *this,
        Scaleform::GFx::DisplayObjectBase *ch)
{
  signed __int64 DisplayIndex; // rax

  DisplayIndex = Scaleform::GFx::DisplayList::FindDisplayIndex(&this->mDisplayList, ch);
  if ( DisplayIndex >= 0 )
    Scaleform::GFx::DisplayList::RemoveEntryAtIndex(&this->mDisplayList, this, DisplayIndex);
}

void __fastcall Scaleform::GFx::DisplayObjContainer::ReplaceDisplayObject(
        Scaleform::GFx::DisplayObjContainer *this,
        const Scaleform::GFx::CharPosInfo *pos,
        Scaleform::GFx::DisplayObjectBase *ch,
        const Scaleform::GFx::ASString *name)
{
  if ( name->pNode->Size
    && (this->Scaleform::GFx::InteractiveObject::Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Flags & 0x100) != 0 )
  {
    Scaleform::GFx::DisplayObject::SetName((Scaleform::GFx::DisplayObject *)ch, name);
  }
  Scaleform::GFx::DisplayList::ReplaceDisplayObject(&this->mDisplayList, this, pos, ch);
  if ( name->pNode->Size && SLOBYTE(ch->Flags) < 0 )
    this->pASRoot->ResolveStickyVariables(this->pASRoot, (Scaleform::GFx::InteractiveObject *)ch);
  ActorWeapon::ActionFlagCheck((_SETJMP_FLOAT128 *)this);
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

void __fastcall Scaleform::ArrayDataBase<Scaleform::Ptr<Scaleform::Render::ContextImpl::ContextCaptureNotify>,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::Render::ContextImpl::ContextCaptureNotify>,2>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
        Scaleform::ArrayDataBase<Scaleform::Ptr<Scaleform::Render::ContextImpl::ContextCaptureNotify>,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::Render::ContextImpl::ContextCaptureNotify>,2>,Scaleform::ArrayDefaultPolicy> *this,
        const void *pheapAddr,
        unsigned __int64 newSize)
{
  unsigned __int64 Size; // rsi
  unsigned __int64 v7; // rsi
  Scaleform::RefCountVImpl **i; // rbx

  Size = this->Size;
  if ( newSize >= Size )
  {
    if ( newSize <= this->Policy.Capacity )
    {
      this->Size = newSize;
    }
    else
    {
      Scaleform::ArrayDataBase<Scaleform::Render::Text::LineBuffer::Line *,Scaleform::AllocatorLH<Scaleform::Render::Text::LineBuffer::Line *,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        (Scaleform::ArrayDataBase<Scaleform::Render::TextureFormat *,Scaleform::AllocatorLH<Scaleform::Render::TextureFormat *,2>,Scaleform::ArrayDefaultPolicy> *)this,
        pheapAddr,
        newSize + (newSize >> 2));
      this->Size = newSize;
    }
  }
  else
  {
    v7 = Size - newSize;
    for ( i = (Scaleform::RefCountVImpl **)&this->Data[newSize - 1 + v7]; v7; --v7 )
    {
      if ( *i )
        Scaleform::RefCountImpl::Release(*i);
      --i;
    }
    if ( newSize < this->Policy.Capacity >> 1 )
      Scaleform::ArrayDataBase<Scaleform::Render::Text::LineBuffer::Line *,Scaleform::AllocatorLH<Scaleform::Render::Text::LineBuffer::Line *,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        (Scaleform::ArrayDataBase<Scaleform::Render::TextureFormat *,Scaleform::AllocatorLH<Scaleform::Render::TextureFormat *,2>,Scaleform::ArrayDefaultPolicy> *)this,
        pheapAddr,
        newSize);
    this->Size = newSize;
  }
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

void __fastcall Scaleform::GFx::DisplayObjContainer::SetStateChangeFlags(
        Scaleform::GFx::DisplayObjContainer *this,
        unsigned __int8 flags)
{
  unsigned __int64 Size; // rsi
  __int64 v5; // rbx

  this->Scaleform::GFx::InteractiveObject::Flags &= 0xFFF0FFFF;
  Size = this->mDisplayList.DisplayObjectArray.Data.Size;
  this->Scaleform::GFx::InteractiveObject::Flags |= (flags & 0xF) << 16;
  if ( Size )
  {
    v5 = 0i64;
    do
    {
      this->mDisplayList.DisplayObjectArray.Data.Data[v5].pCharacter->SetStateChangeFlags(
        this->mDisplayList.DisplayObjectArray.Data.Data[v5].pCharacter,
        flags);
      ++v5;
      --Size;
    }
    while ( Size );
  }
}

void __fastcall Scaleform::GFx::DisplayObjContainer::UpdateViewAndPerspective(
        Scaleform::GFx::DisplayObjContainer *this)
{
  unsigned __int64 Size; // rdi
  __int64 v3; // rbx
  Scaleform::GFx::DisplayObjectBase *pCharacter; // rcx

  Scaleform::GFx::DisplayObjectBase::UpdateViewAndPerspective(this);
  Size = this->mDisplayList.DisplayObjectArray.Data.Size;
  if ( Size )
  {
    v3 = 0i64;
    do
    {
      pCharacter = this->mDisplayList.DisplayObjectArray.Data.Data[v3].pCharacter;
      if ( pCharacter )
        pCharacter->UpdateViewAndPerspective(pCharacter);
      ++v3;
      --Size;
    }
    while ( Size );
  }
}

