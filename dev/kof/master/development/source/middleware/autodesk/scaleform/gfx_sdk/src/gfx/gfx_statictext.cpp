#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraystaticbuff.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_imagecreator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessgen.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/tga_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessellator.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_wstring.h"
#include "program files (x86)/windows kits/8.1/include/um/propidl.h"
#include "program files (x86)/windows kits/8.1/include/um/winbase.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_fontmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphfitter.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_vertex.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_containers.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treeshape.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/jpeg_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapemeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefileutil.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitive.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_gradients.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocaddr.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_image.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_radixtree.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_stroker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_shape.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_streamcontext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_drawingcontext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatafloat.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_pathdatapacker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_shapeswf.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hairliner.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_listalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_playerimpl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textmeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_queue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_sprite.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_highlight.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphparam.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix4x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_displayobjcontainer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_font.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatapacked.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_interactiveobject.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_moviedef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_constants.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_autoptr.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_states.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_statebag.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessdefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_hash.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_spritedef.h"
#include "program files (x86)/windows kits/8.1/include/shared/stralign.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_fontmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_keycodes.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_statictext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_displayobject.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asmovierootbase.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_charposinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_displaylist.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_loadprocess.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_playertasks.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_screentoworld.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix3x4.h"
#include "program files (x86)/windows kits/8.1/include/shared/winerror.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_point3.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_twips.h"
#include "program files (x86)/windows kits/8.1/include/shared/guiddef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_strokeraa.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "program files (x86)/windows kits/8.1/include/um/oleauto.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treetext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_loaderimpl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_docview.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_styledtext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_rasterizer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_sgmlparser.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_imageresource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_resourcehandle.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asutils.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_core.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_textfielddef.h"
#include "program files (x86)/windows kits/8.1/include/um/winnt.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_fontresource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_characterdef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "program files (x86)/windows kits/8.1/include/shared/basetsd.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_player.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_resource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hal.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_viewport.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threadcheck.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_stream.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cxform.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_log.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_taskmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_fontcompactor.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_loader.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_pathdatastorage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_input.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treenode.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_context.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_system.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_assoundintf.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_fontlib.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_linebuffer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraypaged.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_range.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_wwhelper.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshkey.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_drawableimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_buffer.h"
#include "program files (x86)/windows kits/8.1/include/um/winuser.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixstate.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_profiler.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixpool.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filters.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filterparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_event.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_filterdesc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textlayout.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_scale9grid.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"

void Scaleform::GFx::StaticTextRecord::Read(Scaleform::GFx::Stream * in, long glyphCount, long glyphBits, long advanceBits); // 0x1403F02E0
float Scaleform::GFx::StaticTextRecord::GetCumulativeAdvance(); // 0x1403EF400
void Scaleform::GFx::StaticTextRecordList::Clear(); // 0x1403EEB70
Scaleform::GFx::StaticTextRecord * Scaleform::GFx::StaticTextRecordList::AddRecord(); // 0x1403EEA70
void Scaleform::GFx::StaticTextDef::Read(Scaleform::GFx::LoadProcess * p, Scaleform::GFx::TagType tagType); // 0x1403EFD60
bool Scaleform::GFx::StaticTextDef::DefPointTestLocal(const Scaleform::Render::Point<float> & pt, bool testShape, const Scaleform::GFx::DisplayObjectBase * pinst); // 0x1403EEF90
Scaleform::GFx::StaticTextCharacter::StaticTextCharacter(Scaleform::GFx::StaticTextDef * pdef, Scaleform::GFx::MovieDefImpl * pbindingDefImpl, Scaleform::GFx::ASMovieRootBase * pasRoot, Scaleform::GFx::InteractiveObject * parent, Scaleform::GFx::ResourceId id); // 0x1403EDC30
Scaleform::GFx::StaticTextCharacter::~StaticTextCharacter(); // 0x1403EE630
Scaleform::GFx::StaticTextCharacter::HighlightDesc * Scaleform::GFx::StaticTextCharacter::CreateTextHighlighter(); // 0x1403EEF00
void Scaleform::GFx::StaticTextCharacter::SetMatrix(const Scaleform::Render::Matrix2x4<float> & m); // 0x1403F0720
const Scaleform::Render::Matrix2x4<float> & Scaleform::GFx::StaticTextCharacter::GetMatrix(); // 0x1403EF470
void Scaleform::GFx::StaticTextCharacter::SetFilters(const Scaleform::Render::FilterSet * filters); // 0x1403F0600
Scaleform::Ptr<Scaleform::Render::TreeNode> Scaleform::GFx::StaticTextCharacter::CreateRenderNode(Scaleform::Render::ContextImpl::Context & context); // 0x1403EEE80
class Scaleform::Ptr<Scaleform::Render::TreeText>
{
protected:
	Scaleform::Render::TreeText * pObject; // 0x0
public:
	Ptr<Scaleform::Render::TreeText>(const Scaleform::Ptr<Scaleform::Render::TreeText> &);
	Ptr<Scaleform::Render::TreeText>(Scaleform::Render::TreeText *);
	Ptr<Scaleform::Render::TreeText>(Scaleform::Ptr<Scaleform::Render::TreeText> &, Scaleform::PickType);
	Ptr<Scaleform::Render::TreeText>(Scaleform::Pickable<Scaleform::Render::TreeText>);
	Ptr<Scaleform::Render::TreeText>(Scaleform::Render::TreeText &);
	Ptr<Scaleform::Render::TreeText>();
	~Ptr<Scaleform::Render::TreeText>();
	bool operator==(Scaleform::Render::TreeText *);
	bool operator==(const Scaleform::Ptr<Scaleform::Render::TreeText> &);
	bool operator!=(Scaleform::Render::TreeText *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Render::TreeText> &);
	bool operator<(const Scaleform::Ptr<Scaleform::Render::TreeText> &);
	Scaleform::Ptr<Scaleform::Render::TreeText> & operator=(Scaleform::Pickable<Scaleform::Render::TreeText>);
	const Scaleform::Ptr<Scaleform::Render::TreeText> & operator=(Scaleform::Render::TreeText &);
	const Scaleform::Ptr<Scaleform::Render::TreeText> & operator=(Scaleform::Render::TreeText *);
	const Scaleform::Ptr<Scaleform::Render::TreeText> & operator=(const Scaleform::Ptr<Scaleform::Render::TreeText> &);
	Scaleform::Ptr<Scaleform::Render::TreeText> & SetPtr(Scaleform::Pickable<Scaleform::Render::TreeText>);
	Scaleform::Ptr<Scaleform::Render::TreeText> & SetPtr(Scaleform::Render::TreeText &);
	Scaleform::Ptr<Scaleform::Render::TreeText> & SetPtr(Scaleform::Render::TreeText *);
	Scaleform::Ptr<Scaleform::Render::TreeText> & SetPtr(const Scaleform::Ptr<Scaleform::Render::TreeText> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Render::TreeText * & GetRawRef();
	Scaleform::Render::TreeText * GetPtr();
	Scaleform::Render::TreeText & operator*();
	Scaleform::Render::TreeText * operator->();
	Scaleform::Render::TreeText * operator class Scaleform::Render::TreeText *();
	Scaleform::Ptr<Scaleform::Render::TreeText> & Pick(Scaleform::Render::TreeText *);
	Scaleform::Ptr<Scaleform::Render::TreeText> & Pick(Scaleform::Pickable<Scaleform::Render::TreeText>);
	Scaleform::Ptr<Scaleform::Render::TreeText> & Pick(Scaleform::Ptr<Scaleform::Render::TreeText> &);
};
void Scaleform::GFx::StaticTextCharacter::RecreateVisibleTextLayout(); // 0x1403F0380
Scaleform::GFx::StaticTextSnapshotData::StaticTextSnapshotData(); // 0x1403EE5F0
void Scaleform::GFx::StaticTextSnapshotData::Visit(Scaleform::GFx::StaticTextSnapshotData::GlyphVisitor * pvisitor, unsigned long long start, unsigned long long end); // 0x1403F0B30
void Scaleform::GFx::StaticTextSnapshotData::Add(Scaleform::GFx::StaticTextCharacter * pstChar); // 0x1403EE7D0
unsigned long long Scaleform::GFx::StaticTextSnapshotData::GetCharCount(); // 0x1403EF2F0
Scaleform::String Scaleform::GFx::StaticTextSnapshotData::GetSubString(unsigned long long start, unsigned long long end, bool binclNewLines); // 0x1403EF6C0
Scaleform::String Scaleform::GFx::StaticTextSnapshotData::GetSelectedText(bool binclNewLines); // 0x1403EF4F0
long Scaleform::GFx::StaticTextSnapshotData::FindTextA(unsigned long long start, const char * query, bool bcaseSensitive); // 0x1403EEFC0
bool Scaleform::GFx::StaticTextSnapshotData::IsSelected(unsigned long long start, unsigned long long end); // 0x1403EFC50
void Scaleform::GFx::StaticTextSnapshotData::SetSelected(unsigned long long start, unsigned long long end, bool bselect); // 0x1403F0940
void Scaleform::GFx::StaticTextSnapshotData::SetSelectColor(const Scaleform::Render::Color & color); // 0x1403F08D0
Scaleform::Render::Point<float> Scaleform::GFx::ClosestPointOnRectangle(const Scaleform::Render::Rect<float> & r, const Scaleform::Render::Point<float> & p); // 0x1403EEC40
enum Scaleform::GFx::ClosestPointOnRectangle::__l2::RegionFlags
{
	Reg_X0 = 0,
	Reg_X1 = 1,
	Reg_X2 = 2,
	Reg_Y0 = 0,
	Reg_Y1 = 16,
	Reg_Y2 = 32,
};
long Scaleform::GFx::StaticTextSnapshotData::HitTestTextNearPos(float x, float y, float closedist); // 0x1403EF7B0
void Scaleform::GFx::GFx_DefineTextLoader(Scaleform::GFx::LoadProcess * p, const Scaleform::GFx::TagInfo & tagInfo); // 0x1403EF120float __fastcall Scaleform::Render::Math2D::PointToSegmentPos<Scaleform::Render::Point<float>,Scaleform::Render::Point<float>>(
        const Scaleform::Render::Point<float> *v1,
        const Scaleform::Render::Point<float> *v2,
        const Scaleform::Render::Point<float> *v)
{
  float result; // xmm0_4
  float y; // xmm1_4
  float v5; // xmm3_4
  float v6; // xmm2_4

  result = 0.0;
  y = v1->y;
  v5 = v2->x - v1->x;
  v6 = v2->y - y;
  if ( v5 != 0.0 || v6 != 0.0 )
    return (float)((float)((float)(v->y - y) * v6) + (float)((float)(v->x - v1->x) * v5))
         / (float)((float)(v6 * v6) + (float)(v5 * v5));
  return result;
}

void __fastcall Scaleform::GFx::StaticTextCharacter::StaticTextCharacter(
        Scaleform::GFx::StaticTextCharacter *this,
        Scaleform::GFx::StaticTextDef *pdef,
        Scaleform::GFx::MovieDefImpl *pbindingDefImpl,
        Scaleform::GFx::ASMovieRootBase *pasRoot,
        Scaleform::GFx::InteractiveObject *parent,
        unsigned int *id)
{
  Scaleform::GFx::StaticTextCharacter *v6; // rdi
  Scaleform::GFx::MovieDefImpl *v7; // rsi
  Scaleform::GFx::StaticTextDef *v8; // rbx
  float v9; // xmm1_4
  float v10; // xmm5_4
  float v11; // xmm4_4
  float v12; // xmm3_4
  float v13; // xmm2_4
  float v14; // xmm7_4
  float v15; // xmm6_4
  unsigned int v16; // er12
  __int64 v17; // rcx
  Scaleform::GFx::StaticTextRecord *v18; // r15
  Scaleform::GFx::ResourceBinding *p_ResourceBinding; // rcx
  unsigned int BindIndex; // er8
  __int64 v21; // rbx
  Scaleform::GFx::Resource *pObject; // r14
  Scaleform::GFx::ResourceBinding *v23; // rax
  Scaleform::GFx::ImportData *volatile Value; // rdi
  unsigned int v25; // er14
  __int64 v26; // rbx
  __int64 v27; // rbx
  Scaleform::Log *v28; // rsi
  __int64 v29; // rax
  __int64 v30; // rdi
  Scaleform::RefCountVImpl *v31; // rbx
  Scaleform::RefCountVImpl *v32; // rbx
  unsigned int Size; // er13
  Scaleform::Render::Text::LineBuffer::Line *inserted; // rax
  __int64 v35; // rsi
  bool v36; // zf
  int v37; // eax
  float x; // xmm3_4
  float y; // xmm2_4
  float TextHeight; // xmm4_4
  float v41; // xmm3_4
  int v42; // eax
  float v43; // xmm2_4
  float v44; // xmm6_4
  double v45; // xmm0_8
  double v46; // xmm0_8
  int v47; // edx
  double v48; // xmm0_8
  double v49; // xmm0_8
  __int64 v50; // rdi
  __int64 v51; // rdi
  int v52; // edx
  Scaleform::Render::Text::LineBuffer::FormatDataEntry *v53; // r10
  unsigned int v54; // er12
  int v55; // er9
  unsigned int v56; // er14
  Scaleform::RefCountVImpl *v57; // rsi
  int GlyphAdvance; // eax
  float v59; // xmm1_4
  int v60; // eax
  int Raw; // eax
  double v62; // xmm0_8
  double v63; // xmm0_8
  int v64; // ecx
  int v65; // er9
  int v66; // edx
  int v67; // er8
  int v68; // ecx
  float v69; // xmm2_4
  float v70; // xmm1_4
  Scaleform::Log *v71; // rbx
  int v72; // [rsp+38h] [rbp-D0h]
  int v73; // [rsp+3Ch] [rbp-CCh]
  int v74; // [rsp+3Ch] [rbp-CCh]
  unsigned int v75; // [rsp+40h] [rbp-C8h]
  Scaleform::GFx::Resource *pdata; // [rsp+48h] [rbp-C0h]
  Scaleform::GFx::ResourceBindData pdata_8; // [rsp+50h] [rbp-B8h] BYREF
  Scaleform::RefCountVImpl *v78; // [rsp+60h] [rbp-A8h]
  Scaleform::GFx::ResourceId v79; // [rsp+68h] [rbp-A0h] BYREF
  int v80; // [rsp+6Ch] [rbp-9Ch]
  __int64 v81; // [rsp+70h] [rbp-98h]
  Scaleform::GFx::MovieDefImpl *v82; // [rsp+78h] [rbp-90h]
  Scaleform::GFx::StaticTextDef *v83; // [rsp+80h] [rbp-88h]
  Scaleform::GFx::StaticTextCharacter *v84; // [rsp+88h] [rbp-80h]
  Scaleform::Render::Text::LineBuffer *p_TextGlyphRecords; // [rsp+90h] [rbp-78h]
  Scaleform::Render::Text::LineBuffer::Line *v86; // [rsp+98h] [rbp-70h]
  __int64 v87; // [rsp+A0h] [rbp-68h]
  Scaleform::Render::Matrix2x4<float> m; // [rsp+A8h] [rbp-60h] BYREF
  int v89; // [rsp+C8h] [rbp-40h]
  Scaleform::Ptr<Scaleform::Log> result; // [rsp+D0h] [rbp-38h] BYREF
  Scaleform::Render::Text::LineBuffer::FormatDataEntry *FormatData; // [rsp+D8h] [rbp-30h]
  Scaleform::Ptr<Scaleform::Log> v92; // [rsp+E0h] [rbp-28h] BYREF
  Scaleform::Render::Rect<float> pr; // [rsp+E8h] [rbp-20h] BYREF
  Scaleform::Render::Matrix2x4<float> v94; // [rsp+F8h] [rbp-10h] BYREF

  v6 = this;
  v84 = this;
  v7 = pbindingDefImpl;
  v82 = pbindingDefImpl;
  v8 = pdef;
  v79.Id = *id;
  v83 = pdef;
  Scaleform::GFx::DisplayObject::DisplayObject(this, pasRoot, parent, &v79.Id);
  v6->Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable = (Scaleform::GFx::StaticTextCharacter_vtbl *)&Scaleform::GFx::StaticTextCharacter::`vftable'{for `Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>'};
  v6->Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Scaleform::GFx::LogBase<Scaleform::GFx::DisplayObjectBase>::__vftable = (Scaleform::GFx::LogBase<Scaleform::GFx::DisplayObjectBase>_vtbl *)&Scaleform::GFx::StaticTextCharacter::`vftable'{for `Scaleform::GFx::LogBase<Scaleform::GFx::DisplayObjectBase>'};
  if ( v8 )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)v8);
  v6->pDef.pObject = v8;
  *(_QWORD *)&v6->OrigMatrix.M[0][0] = 1065353216i64;
  *(_QWORD *)&v6->OrigMatrix.M[0][2] = 0i64;
  v6->OrigMatrix.M[1][0] = 0.0;
  *(_QWORD *)&v6->OrigMatrix.M[1][1] = 1065353216i64;
  v6->OrigMatrix.M[1][3] = 0.0;
  p_TextGlyphRecords = &v6->TextGlyphRecords;
  Scaleform::Render::Text::LineBuffer::LineBuffer(&v6->TextGlyphRecords);
  v6->Filter.RefCount = 1;
  v6->Filter.__vftable = (Scaleform::Render::Text::TextFilter_vtbl *)&Scaleform::Render::Text::TextFilter::`vftable';
  v6->Filter.ShadowParams.Mode = 0;
  v6->Filter.ShadowParams.Passes = 1;
  v6->Filter.ShadowParams.BlurX = 100.0;
  *(_QWORD *)&v6->Filter.ShadowParams.BlurY = 1120403456i64;
  v6->Filter.ShadowParams.Offset.y = 0.0;
  v6->Filter.ShadowParams.Strength = 1.0;
  v6->Filter.ShadowParams.Gradient.pObject = 0i64;
  *(_DWORD *)&v6->Filter.ShadowParams.Colors[0].Channels.Green = 16711680;
  v6->Filter.ShadowParams.Colors[0].Channels.Blue = 0;
  *(_WORD *)&v6->Filter.ShadowParams.Colors[1].Channels.Green = 0;
  v6->Filter.ShadowParams.Colors[1].Channels.Alpha = 0;
  Scaleform::Render::Text::TextFilter::SetDefaultShadow(&v6->Filter);
  v6->pHighlight = 0i64;
  v6->Flags = 0;
  v9 = v8->MatrixPriv.M[0][1];
  v10 = v8->MatrixPriv.M[1][0];
  v11 = v8->MatrixPriv.M[1][1];
  v12 = v8->MatrixPriv.M[1][2];
  v13 = v8->MatrixPriv.M[1][3];
  v14 = v8->MatrixPriv.M[0][2];
  v15 = v8->MatrixPriv.M[0][3];
  v94.M[0][0] = v8->MatrixPriv.M[0][0];
  *(_QWORD *)&v94.M[0][1] = __PAIR64__(LODWORD(v14), LODWORD(v9));
  v94.M[0][3] = v15;
  *(_QWORD *)&v94.M[1][0] = __PAIR64__(LODWORD(v11), LODWORD(v10));
  *(_QWORD *)&v94.M[1][2] = __PAIR64__(LODWORD(v13), LODWORD(v12));
  *(_QWORD *)&m.M[0][0] = __PAIR64__(LODWORD(v9), LODWORD(v94.M[0][0]));
  *(_QWORD *)&m.M[0][2] = __PAIR64__(LODWORD(v15), LODWORD(v14));
  *(_QWORD *)&m.M[1][0] = __PAIR64__(LODWORD(v11), LODWORD(v10));
  *(_QWORD *)&m.M[1][2] = __PAIR64__(LODWORD(v13), LODWORD(v12));
  Scaleform::Render::Matrix2x4<float>::SetInverse(&v94, &m);
  Scaleform::Render::Matrix2x4<float>::EncloseTransform(&v94, &pr, &v8->TextRect);
  v72 = 0;
  if ( pr.x1 >= 0.0 )
    pr.x1 = 0.0;
  if ( pr.y1 >= 0.0 )
    pr.y1 = 0.0;
  if ( pr.x2 <= 0.0 )
    pr.x2 = 0.0;
  if ( pr.y2 <= 0.0 )
    pr.y2 = 0.0;
  v16 = 0;
  v75 = 0;
  LODWORD(v81) = v8->TextRecords.Records.Data.Size;
  if ( (_DWORD)v81 )
  {
    v17 = 0i64;
    v87 = 0i64;
    while ( 1 )
    {
      v18 = v8->TextRecords.Records.Data.Data[v17];
      p_ResourceBinding = &v7->pBindData.pObject->ResourceBinding;
      pdata_8 = 0i64;
      if ( v18->pFont.HType == RH_Index )
      {
        BindIndex = v18->pFont.BindIndex;
        if ( p_ResourceBinding->Frozen && BindIndex < p_ResourceBinding->ResourceCount )
        {
          v21 = (__int64)&p_ResourceBinding->pResources[BindIndex];
          if ( *(_QWORD *)v21 )
          {
            Scaleform::Render::RenderBuffer::AddRef(*(Scaleform::RefCountVImpl **)v21);
            if ( pdata_8.pResource.pObject )
              Scaleform::GFx::Resource::Release(pdata_8.pResource.pObject);
          }
          pObject = *(Scaleform::GFx::Resource **)v21;
          pdata_8.pResource.pObject = pObject;
          v23 = *(Scaleform::GFx::ResourceBinding **)(v21 + 8);
          v8 = v83;
          pdata_8.pBinding = v23;
          pdata = pObject;
        }
        else
        {
          Scaleform::GFx::ResourceBinding::GetResourceData_Locked(p_ResourceBinding, &pdata_8, BindIndex);
          pObject = pdata_8.pResource.pObject;
          pdata = pdata_8.pResource.pObject;
        }
      }
      else
      {
        pdata_8.pBinding = p_ResourceBinding;
        if ( v18->pFont.HType )
        {
          pObject = 0i64;
          pdata = 0i64;
        }
        else
        {
          pObject = v18->pFont.pResource;
          pdata = pObject;
          if ( pObject )
          {
            Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)pObject);
            if ( pdata_8.pResource.pObject )
              Scaleform::GFx::Resource::Release(pdata_8.pResource.pObject);
          }
        }
        pdata_8.pResource.pObject = pObject;
      }
      if ( !pObject )
        break;
      if ( (v8->Flags & 2) == 0 )
      {
        Value = v7->pBindData.pObject->pDataDef.pObject->pData.pObject->BindData.pImports.Value;
        if ( Value )
        {
          do
          {
            v25 = 0;
            if ( Value->Imports.Data.Size )
            {
              v26 = 0i64;
              do
              {
                v27 = v26;
                if ( Value->Imports.Data.Data[v27].BindIndex == v18->pFont.BindIndex )
                {
                  v28 = Scaleform::GFx::StateBag::GetLog(&v7->Scaleform::GFx::StateBag, &result)->pObject;
                  if ( result.pObject )
                    Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)result.pObject);
                  if ( v28 )
                    Scaleform::Log::LogWarning(
                      v28,
                      "Static text uses imported font! FontId = %d, import name = %s",
                      v18->FontId,
                      (const char *)((Value->Imports.Data.Data[v27].SymbolName.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64)
                                   + 12));
                  v7 = v82;
                }
                v26 = ++v25;
              }
              while ( v25 < Value->Imports.Data.Size );
            }
            Value = Value->pNext.Value;
          }
          while ( Value );
          pObject = pdata;
        }
      }
      v29 = ((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))Scaleform::Memory::pGlobalHeap->Alloc)(
              Scaleform::Memory::pGlobalHeap,
              64i64);
      v78 = (Scaleform::RefCountVImpl *)v29;
      v30 = v29;
      if ( v29 )
      {
        v31 = (Scaleform::RefCountVImpl *)pObject[1].__vftable;
        *(_QWORD *)v29 = &Scaleform::RefCountImplCore::`vftable';
        *(_DWORD *)(v29 + 8) = 1;
        *(_QWORD *)v29 = &Scaleform::Render::Text::FontHandle::`vftable';
        *(_QWORD *)(v29 + 16) = 0i64;
        *(_DWORD *)(v29 + 24) = 0;
        Scaleform::StringLH::StringLH((Scaleform::StringLH *)(v29 + 32));
        *(_DWORD *)(v30 + 40) = 1065353216;
        if ( v31 )
          Scaleform::Render::RenderBuffer::AddRef(v31);
        *(_QWORD *)(v30 + 48) = v31;
        *(_QWORD *)v30 = &Scaleform::GFx::FontHandle::`vftable';
        v32 = (Scaleform::RefCountVImpl *)v30;
        *(_QWORD *)(v30 + 56) = 0i64;
      }
      else
      {
        v32 = 0i64;
        v78 = 0i64;
      }
      Size = v18->Glyphs.Data.Size;
      if ( Size > 0xFF || (HIDWORD(pObject[1].GetResourceReport) & 0x2000) != 0 )
        inserted = Scaleform::Render::Text::LineBuffer::InsertNewLine(p_TextGlyphRecords, v16, Size, 2u, Line32);
      else
        inserted = Scaleform::Render::Text::LineBuffer::InsertNewLine(p_TextGlyphRecords, v16, Size, 2u, Line8);
      v86 = inserted;
      v35 = (__int64)inserted;
      v36 = (inserted->MemSize & 0x80000000) == 0;
      v37 = v72;
      if ( v36 )
      {
        *(_DWORD *)(v35 + 8) = v72;
      }
      else
      {
        *(_DWORD *)(v35 + 8) &= 0xFF000000;
        *(_DWORD *)(v35 + 8) |= v72 & 0xFFFFFF;
        v37 = v72;
      }
      x = v18->Offset.x;
      y = v18->Offset.y;
      v72 = Size + v37;
      if ( (HIDWORD(pObject[1].GetResourceReport) & 0x2000) != 0 )
      {
        TextHeight = v18->TextHeight;
        v41 = x + COERCE_FLOAT(LODWORD(pr.x1) ^ _xmm);
        v42 = (int)TextHeight;
        v43 = (float)(y - TextHeight) + COERCE_FLOAT(LODWORD(pr.y1) ^ _xmm);
        if ( *(int *)v35 >= 0 )
          *(_WORD *)(v35 + 38) = v42;
        else
          *(_WORD *)(v35 + 26) = v42;
        v44 = *((float *)&pObject[1].GetResourceTypeCode + 1) * (float)(TextHeight * 0.0009765625) + v18->TextHeight;
      }
      else
      {
        v44 = 0.0;
        v41 = x + COERCE_FLOAT(LODWORD(pr.x1) ^ _xmm);
        v43 = y + COERCE_FLOAT(LODWORD(pr.y1) ^ _xmm);
      }
      v45 = v43;
      if ( v43 <= 0.0 )
        v46 = v45 - 0.5;
      else
        v46 = v45 + 0.5;
      v47 = (int)v46;
      v48 = v41;
      if ( v41 <= 0.0 )
        v49 = v48 - 0.5;
      else
        v49 = v48 + 0.5;
      *(_DWORD *)(v35 + 16) = v47;
      *(_DWORD *)(v35 + 12) = (int)v49;
      if ( *(int *)v35 >= 0 )
        *(_QWORD *)(v35 + 20) = 0i64;
      else
        *(_DWORD *)(v35 + 20) = 0;
      v50 = 42i64;
      if ( *(int *)v35 < 0 )
        v50 = 30i64;
      v51 = v35 + v50;
      FormatData = Scaleform::Render::Text::LineBuffer::Line::GetFormatData((Scaleform::Render::Text::LineBuffer::Line *)v35);
      v52 = 0;
      v53 = FormatData;
      v73 = 0;
      v54 = 0;
      v55 = 0;
      v56 = 0;
      if ( Size )
      {
        v57 = v78;
        do
        {
          *(_DWORD *)(v51 + 8i64 * v54) = 0;
          *(_DWORD *)(v51 + 8i64 * v54 + 4) = 4096;
          *(_WORD *)(v51 + 8i64 * v54) = v18->Glyphs.Data.Data[v56].GlyphIndex;
          GlyphAdvance = (int)v18->Glyphs.Data.Data[v56].GlyphAdvance;
          if ( GlyphAdvance < 0 )
          {
            v52 = v73;
            *(_WORD *)(v51 + 8i64 * v54 + 2) = abs32(GlyphAdvance);
            *(_WORD *)(v51 + 8i64 * v54 + 6) = 64;
          }
          else
          {
            *(_WORD *)(v51 + 8i64 * v54 + 2) = GlyphAdvance;
            *(_WORD *)(v51 + 8i64 * v54 + 6) = 0;
          }
          v59 = v18->TextHeight * 0.050000001;
          v55 += (int)v18->Glyphs.Data.Data[v56].GlyphAdvance;
          v80 = v55;
          if ( v59 < 256.0 && (v60 = (int)(float)(v59 * 16.0), (v60 & 0xF) != 0) )
          {
            *(_WORD *)(v51 + 8i64 * v54 + 6) |= 0x10u;
          }
          else
          {
            *(_WORD *)(v51 + 8i64 * v54 + 6) &= ~0x10u;
            v60 = (int)v59;
          }
          *(_WORD *)(v51 + 8i64 * v54 + 4) = v60 & 0xFFF | 0x1000;
          if ( !v56 )
          {
            *(_WORD *)(v51 + 8i64 * v54 + 6) |= 0x4000u;
            *(_WORD *)(v51 + 8i64 * v54 + 6) |= 0x2000u;
            v74 = v52 + 1;
            v53[v52].pFont = (Scaleform::Render::Text::FontHandle *)v57;
            Scaleform::Render::RenderBuffer::AddRef(v57);
            Raw = v18->ColorV.Raw;
            *(_WORD *)(v51 + 8i64 * v54 + 6) |= 0x4000u;
            *(_WORD *)(v51 + 8i64 * v54 + 6) |= 0x1000u;
            v53 = FormatData;
            v55 = v80;
            v89 = Raw;
            FormatData[v74].ColorV = Raw;
            v52 = v74 + 1;
            v73 = v74 + 1;
          }
          ++v56;
          if ( v51 && v54 < Size )
            ++v54;
        }
        while ( v56 < Size );
        v35 = (__int64)v86;
        v32 = v78;
      }
      if ( (HIDWORD(pdata[1].GetResourceReport) & 0x2000) != 0 )
      {
        v62 = v44;
        if ( v44 <= 0.0 )
          v63 = v62 - 0.5;
        else
          v63 = v62 + 0.5;
        v64 = (int)v63;
        if ( v55 < 0 )
          v55 = 0;
        if ( *(int *)v35 >= 0 )
        {
          *(_DWORD *)(v35 + 20) = v55;
          *(_DWORD *)(v35 + 24) = v64;
        }
        else
        {
          *(_WORD *)(v35 + 20) = v55;
          *(_WORD *)(v35 + 22) = v64;
        }
        if ( *(int *)v35 >= 0 )
          *(_DWORD *)(v35 + 32) = Size;
        else
          *(_BYTE *)(v35 + 11) = Size;
        v65 = *(_DWORD *)(v35 + 16);
        if ( *(int *)v35 >= 0 )
          v66 = *(_DWORD *)(v35 + 24);
        else
          v66 = *(unsigned __int16 *)(v35 + 22);
        if ( *(int *)v35 >= 0 )
          v68 = *(_DWORD *)(v35 + 20);
        else
          v68 = *(unsigned __int16 *)(v35 + 20);
        v67 = *(_DWORD *)(v35 + 12);
        v69 = (float)(v68 + v67);
        v70 = (float)(v66 + v65);
        if ( v69 <= pr.x1 )
          pr.x1 = (float)(v68 + v67);
        if ( v70 <= pr.y1 )
          pr.y1 = (float)(v66 + v65);
        if ( pr.x2 <= v69 )
          pr.x2 = (float)(v68 + v67);
        if ( pr.y2 <= v70 )
          pr.y2 = (float)(v66 + v65);
      }
      if ( v32 )
        Scaleform::RefCountImpl::Release(v32);
      if ( pdata_8.pResource.pObject )
        Scaleform::GFx::Resource::Release(pdata_8.pResource.pObject);
      v16 = v75 + 1;
      v7 = v82;
      v17 = v87 + 1;
      v8 = v83;
      v75 = v16;
      ++v87;
      if ( v16 >= (unsigned int)v81 )
      {
        v6 = v84;
        goto LABEL_118;
      }
    }
    v71 = Scaleform::GFx::StateBag::GetLog(&v7->Scaleform::GFx::StateBag, &v92)->pObject;
    if ( v92.pObject )
      Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v92.pObject);
    if ( v71 )
      Scaleform::Log::LogError(v71, "Text style with undefined font; FontId = %d", v18->FontId);
    if ( pdata_8.pResource.pObject )
      Scaleform::GFx::Resource::Release(pdata_8.pResource.pObject);
  }
  else
  {
LABEL_118:
    v6->TextGlyphRecords.Geom.VisibleRect = pr;
    v6->TextGlyphRecords.Geom.Flags |= 4u;
    Scaleform::Render::Text::TextFilter::SetDefaultShadow(&v6->Filter);
    v8->Flags |= 2u;
    Scaleform::GFx::StaticTextCharacter::RecreateVisibleTextLayout(v6);
  }
}

void __fastcall Scaleform::GFx::StaticTextSnapshotData::StaticTextSnapshotData(
        Scaleform::GFx::StaticTextSnapshotData *this)
{
  this->StaticTextCharRefs.Data.Data = 0i64;
  this->StaticTextCharRefs.Data.Size = 0i64;
  this->StaticTextCharRefs.Data.Policy.Capacity = 0i64;
  Scaleform::StringLH::StringLH(&this->SnapshotString);
  this->SelectColor.Raw = -256;
}

void __fastcall Scaleform::GFx::StaticTextCharacter::~StaticTextCharacter(Scaleform::GFx::StaticTextCharacter *this)
{
  Scaleform::GFx::StaticTextCharacter::HighlightDesc *pHighlight; // rdi
  Scaleform::RefCountVImpl *pObject; // rcx
  Scaleform::GFx::StaticTextDef *v4; // rcx

  pHighlight = this->pHighlight;
  this->Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountWeakSupportImpl,322>::Scaleform::RefCountWeakSupportImpl::Scaleform::RefCountNTSImpl::Scaleform::RefCountNTSImplCore::__vftable = (Scaleform::GFx::StaticTextCharacter_vtbl *)&Scaleform::GFx::StaticTextCharacter::`vftable'{for `Scaleform::RefCountBaseWeakSupport<Scaleform::GFx::DisplayObjectBase,322>'};
  this->Scaleform::GFx::DisplayObject::Scaleform::GFx::DisplayObjectBase::Scaleform::GFx::LogBase<Scaleform::GFx::DisplayObjectBase>::__vftable = (Scaleform::GFx::LogBase<Scaleform::GFx::DisplayObjectBase>_vtbl *)&Scaleform::GFx::StaticTextCharacter::`vftable'{for `Scaleform::GFx::LogBase<Scaleform::GFx::DisplayObjectBase>'};
  if ( pHighlight )
  {
    Scaleform::Memory::pGlobalHeap->Free(
      Scaleform::Memory::pGlobalHeap,
      pHighlight->HighlightManager.Highlighters.Data.Data);
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, pHighlight);
  }
  pObject = (Scaleform::RefCountVImpl *)this->Filter.ShadowParams.Gradient.pObject;
  if ( pObject )
    Scaleform::RefCountImpl::Release(pObject);
  Scaleform::RefCountNTSImplCore::~RefCountNTSImplCore(&this->Filter);
  Scaleform::Render::Text::LineBuffer::~LineBuffer(&this->TextGlyphRecords);
  v4 = this->pDef.pObject;
  if ( v4 )
    Scaleform::GFx::Resource::Release(v4);
  Scaleform::GFx::DisplayObject::~DisplayObject(this);
}

void __fastcall Scaleform::GFx::StaticTextSnapshotData::Add(
        Scaleform::GFx::StaticTextSnapshotData *this,
        Scaleform::GFx::StaticTextCharacter *pstChar)
{
  Scaleform::GFx::StaticTextCharacter *v2; // rbx
  unsigned __int64 v4; // r14
  float OffsetX; // xmm6_4
  char v6; // r12
  Scaleform::Render::Text::LineBuffer *p_TextGlyphRecords; // rcx
  unsigned int v8; // er13
  Scaleform::Render::Text::LineBuffer::Line *v10; // rdi
  unsigned int GlyphsCount; // esi
  __int64 v12; // rbx
  Scaleform::Render::Text::LineBuffer::FormatDataEntry *FormatData; // rax
  Scaleform::RefCountVImpl *pObject; // rcx
  Scaleform::Render::Font *v15; // rbx
  __int64 Index; // rdx
  unsigned int v17; // eax
  Scaleform::Render::Text::ImageDesc *v18; // rcx
  Scaleform::GFx::StaticTextSnapshotData::CharRef *v19; // rdx
  Scaleform::Render::Text::LineBuffer::GlyphIterator v20; // [rsp+28h] [rbp-89h] BYREF
  unsigned int v21; // [rsp+118h] [rbp+67h]

  v2 = pstChar;
  if ( pstChar )
    ++pstChar->RefCount;
  v4 = 0i64;
  OffsetX = 0.0;
  v6 = 1;
  p_TextGlyphRecords = &pstChar->TextGlyphRecords;
  v8 = 0;
LABEL_4:
  v21 = v8;
  while ( p_TextGlyphRecords && v8 < p_TextGlyphRecords->Lines.Data.Size && (v8 & 0x80000000) == 0 )
  {
    v10 = p_TextGlyphRecords->Lines.Data.Data[v8];
    if ( v6 )
    {
      OffsetX = (float)p_TextGlyphRecords->Lines.Data.Data[v8]->Data32.OffsetX;
    }
    else if ( (float)p_TextGlyphRecords->Lines.Data.Data[v8]->Data32.OffsetX == OffsetX )
    {
      Scaleform::String::AppendChar(&this->SnapshotString, 0xAu);
    }
    if ( (v10->MemSize & 0x80000000) == 0 )
      GlyphsCount = v10->Data32.GlyphsCount;
    else
      GlyphsCount = v10->Data8.GlyphsCount;
    v12 = 42i64;
    if ( (v10->MemSize & 0x80000000) != 0 )
      v12 = 30i64;
    FormatData = Scaleform::Render::Text::LineBuffer::Line::GetFormatData(v10);
    v20.HighlighterIter.CurDesc.StartPos = -1i64;
    v20.HighlighterIter.CurDesc.Offset = -1i64;
    memset(&v20.HighlighterIter, 0, 24);
    v20.pGlyphs = (Scaleform::Render::Text::LineBuffer::GlyphEntry *)((char *)v10 + v12);
    v20.HighlighterIter.CurDesc.Length = 0i64;
    memset(&v20.HighlighterIter.CurDesc.AdjStartPos, 0, 33);
    memset(&v20.ColorV, 0, 40);
    v20.pNextFormatData = FormatData;
    v20.pEndGlyphs = (Scaleform::Render::Text::LineBuffer::GlyphEntry *)((char *)v10 + 8 * GlyphsCount + v12);
    Scaleform::Render::Text::LineBuffer::GlyphIterator::UpdateDesc(&v20);
    pObject = (Scaleform::RefCountVImpl *)v20.pFontHandle.pObject;
    if ( v20.pFontHandle.pObject )
    {
      v15 = v20.pFontHandle.pObject->pFont.pObject;
      if ( v15 )
      {
        while ( v20.pGlyphs && v20.pGlyphs < v20.pEndGlyphs )
        {
          if ( v20.pGlyphs->Index == 0xFFFF )
            Index = 0xFFFFFFFFi64;
          else
            Index = v20.pGlyphs->Index;
          v17 = v15->GetCharValue(v15, Index);
          if ( v17 != -1 )
          {
            ++v4;
            Scaleform::String::AppendChar(&this->SnapshotString, v17);
          }
          Scaleform::Render::Text::LineBuffer::GlyphIterator::operator++(&v20);
        }
        v18 = v20.pImage.pObject;
        v6 = 0;
        v8 = v21;
        if ( v20.pImage.pObject )
LABEL_34:
          Scaleform::RefCountNTSImpl::Release(v18);
        pObject = (Scaleform::RefCountVImpl *)v20.pFontHandle.pObject;
        goto LABEL_36;
      }
    }
    if ( v20.pImage.pObject )
    {
      v18 = v20.pImage.pObject;
      goto LABEL_34;
    }
LABEL_36:
    if ( pObject )
      Scaleform::RefCountImpl::Release(pObject);
    v2 = pstChar;
    p_TextGlyphRecords = &pstChar->TextGlyphRecords;
    if ( v8 < pstChar->TextGlyphRecords.Lines.Data.Size )
    {
      ++v8;
      goto LABEL_4;
    }
  }
  Scaleform::ArrayDataBase<Scaleform::GFx::DisplayList::DisplayEntry,Scaleform::AllocatorLH<Scaleform::GFx::DisplayList::DisplayEntry,2>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
    (Scaleform::ArrayDataBase<Scaleform::GFx::Button::CharToRec,Scaleform::AllocatorLH<Scaleform::GFx::Button::CharToRec,2>,Scaleform::ArrayDefaultPolicy> *)this,
    this,
    this->StaticTextCharRefs.Data.Size + 1);
  v19 = &this->StaticTextCharRefs.Data.Data[this->StaticTextCharRefs.Data.Size - 1];
  if ( v19 )
  {
    if ( v2 )
      ++v2->RefCount;
    v19->pChar.pObject = v2;
    v19->CharCount = v4;
  }
  if ( v2 )
    Scaleform::RefCountNTSImpl::Release(v2);
}

Scaleform::GFx::StaticTextRecord *__fastcall Scaleform::GFx::StaticTextRecordList::AddRecord(
        Scaleform::GFx::StaticTextRecordList *this)
{
  Scaleform::GFx::StaticTextRecord *result; // rax
  Scaleform::GFx::StaticTextRecord *v3; // rbx
  unsigned __int64 Size; // rax
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // r8
  Scaleform::GFx::StaticTextRecord **Data; // rcx
  Scaleform::GFx::StaticTextRecord **v8; // rax
  int v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = 258;
  result = (Scaleform::GFx::StaticTextRecord *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                                 Scaleform::Memory::pGlobalHeap,
                                                 this,
                                                 64i64,
                                                 &v9);
  v3 = result;
  if ( !result )
    return result;
  result->Glyphs.Data.Data = 0i64;
  result->Glyphs.Data.Size = 0i64;
  result->Glyphs.Data.Policy.Capacity = 0i64;
  result->pFont.HType = RH_Pointer;
  result->pFont.pResource = 0i64;
  result->Offset = 0i64;
  result->TextHeight = 1.0;
  result->FontId = 0;
  Size = this->Records.Data.Size;
  v5 = Size + 1;
  if ( Size + 1 >= Size )
  {
    if ( v5 > this->Records.Data.Policy.Capacity )
    {
      v6 = v5 + (v5 >> 2);
      goto LABEL_7;
    }
  }
  else if ( v5 < this->Records.Data.Policy.Capacity >> 1 )
  {
    v6 = Size + 1;
LABEL_7:
    Scaleform::ArrayDataBase<Scaleform::GFx::StaticTextRecord *,Scaleform::AllocatorLH<Scaleform::GFx::StaticTextRecord *,258>,Scaleform::ArrayDefaultPolicy>::Reserve(
      (Scaleform::ArrayDataBase<Scaleform::GFx::StaticTextRecord::GlyphEntry,Scaleform::AllocatorLH<Scaleform::GFx::StaticTextRecord::GlyphEntry,258>,Scaleform::ArrayDefaultPolicy> *)this,
      this,
      v6);
  }
  Data = this->Records.Data.Data;
  this->Records.Data.Size = v5;
  v8 = &Data[v5 - 1];
  if ( v8 )
    *v8 = v3;
  return v3;
}

void __fastcall Scaleform::GFx::StaticTextCharacter::AdvanceFrame(
        Scaleform::GFx::StaticTextCharacter *this,
        bool nextFrame,
        float framePos)
{
  if ( nextFrame )
    this->Flags |= 2u;
  else
    this->Flags &= ~2u;
}

void __fastcall Scaleform::GFx::StaticTextRecordList::Clear(Scaleform::GFx::StaticTextRecordList *this)
{
  unsigned __int64 Size; // rbp
  unsigned __int64 i; // rdi
  Scaleform::GFx::StaticTextRecord *v4; // rbx
  Scaleform::GFx::Resource *pResource; // rcx
  unsigned __int64 Capacity; // rax

  Size = this->Records.Data.Size;
  for ( i = 0i64; i < Size; ++i )
  {
    v4 = this->Records.Data.Data[i];
    if ( v4 )
    {
      if ( v4->pFont.HType == RH_Pointer )
      {
        pResource = v4->pFont.pResource;
        if ( pResource )
          Scaleform::GFx::Resource::Release(pResource);
      }
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v4->Glyphs.Data.Data);
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v4);
    }
  }
  if ( this->Records.Data.Size )
  {
    Capacity = this->Records.Data.Policy.Capacity;
    if ( (Capacity & 0xFFFFFFFFFFFFFFFEui64) != 0 )
    {
      if ( Capacity )
      {
        if ( this->Records.Data.Data )
        {
          ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
          this->Records.Data.Data = 0i64;
        }
        this->Records.Data.Policy.Capacity = 0i64;
      }
    }
  }
  this->Records.Data.Size = 0i64;
}

Scaleform::Render::Point<float> *__fastcall Scaleform::GFx::ClosestPointOnRectangle(
        Scaleform::Render::Point<float> *result,
        const Scaleform::Render::Rect<float> *r,
        const Scaleform::Render::Point<float> *p)
{
  float x; // xmm0_4
  float y2; // xmm6_4
  float x2; // xmm7_4
  float y1; // xmm8_4
  float x1; // xmm9_4
  int v9; // eax
  float y; // xmm0_4
  float v11; // xmm0_4
  float v12; // xmm1_4
  float v13; // xmm0_4
  float v14; // xmm0_4
  Scaleform::Render::Point<float> v1; // [rsp+20h] [rbp-88h] BYREF
  Scaleform::Render::Point<float> v2; // [rsp+30h] [rbp-78h] BYREF
  Scaleform::Render::Point<float> v18; // [rsp+40h] [rbp-68h] BYREF
  Scaleform::Render::Point<float> v19; // [rsp+50h] [rbp-58h] BYREF

  x = p->x;
  y2 = r->y2;
  x2 = r->x2;
  y1 = r->y1;
  x1 = r->x1;
  v2.x = x1;
  v19.x = x2;
  v19.y = y1;
  v2.y = y2;
  v18.x = x2;
  v18.y = y2;
  v9 = 0;
  v1.x = x1;
  v1.y = y1;
  if ( x1 < x )
  {
    LOBYTE(v9) = x >= x2;
    ++v9;
  }
  y = p->y;
  if ( y1 < y )
  {
    if ( y < y2 )
      v9 |= 0x10u;
    else
      v9 |= 0x20u;
  }
  switch ( v9 )
  {
    case 0:
      result->x = x1;
      result->y = y1;
      break;
    case 1:
      v13 = Scaleform::Render::Math2D::PointToSegmentPos<Scaleform::Render::Point<float>,Scaleform::Render::Point<float>>(
              &v1,
              &v19,
              p);
      result->x = (float)((float)(x2 - x1) * v13) + x1;
      result->y = (float)((float)(y1 - y1) * v13) + y1;
      break;
    case 2:
      result->x = x2;
      result->y = y1;
      break;
    case 16:
      v11 = Scaleform::Render::Math2D::PointToSegmentPos<Scaleform::Render::Point<float>,Scaleform::Render::Point<float>>(
              &v1,
              &v2,
              p);
      v12 = (float)((float)(x1 - x1) * v11) + x1;
      goto LABEL_10;
    case 17:
    case 33:
      v14 = Scaleform::Render::Math2D::PointToSegmentPos<Scaleform::Render::Point<float>,Scaleform::Render::Point<float>>(
              &v2,
              &v18,
              p);
      result->x = (float)((float)(x2 - x1) * v14) + x1;
      result->y = (float)((float)(y2 - y2) * v14) + y2;
      break;
    case 18:
      v11 = Scaleform::Render::Math2D::PointToSegmentPos<Scaleform::Render::Point<float>,Scaleform::Render::Point<float>>(
              &v19,
              &v18,
              p);
      v12 = (float)((float)(x2 - x2) * v11) + x2;
LABEL_10:
      result->x = v12;
      result->y = (float)((float)(y2 - y1) * v11) + y1;
      break;
    case 32:
      result->x = x1;
      result->y = y2;
      break;
    case 34:
      result->x = x2;
      result->y = y2;
      break;
    default:
      result->x = 3.4028235e38;
      result->y = 3.4028235e38;
      break;
  }
  return result;
}

Scaleform::Ptr<Scaleform::Render::TreeNode> *__fastcall Scaleform::GFx::StaticTextCharacter::CreateRenderNode(
        Scaleform::GFx::StaticTextCharacter *this,
        Scaleform::Ptr<Scaleform::Render::TreeNode> *result,
        Scaleform::Render::ContextImpl::Context *context)
{
  Scaleform::Render::TreeText::NodeData *v5; // rax
  Scaleform::Render::ContextImpl::EntryData *v6; // rdi
  Scaleform::Render::TreeNode *EntryHelper; // rax

  v5 = (Scaleform::Render::TreeText::NodeData *)context->pHeap->Alloc(context->pHeap, 176i64, 0i64);
  v6 = v5;
  if ( v5 )
    Scaleform::Render::TreeText::NodeData::NodeData(v5);
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

Scaleform::GFx::StaticTextCharacter::HighlightDesc *__fastcall Scaleform::GFx::StaticTextCharacter::CreateTextHighlighter(
        Scaleform::GFx::StaticTextCharacter *this)
{
  Scaleform::GFx::MovieImpl *MovieImpl; // rax
  __int64 v3; // rax
  Scaleform::Render::Text::Highlighter *v4; // rax
  Scaleform::GFx::StaticTextCharacter::HighlightDesc *v5; // rdi
  Scaleform::GFx::StaticTextCharacter::HighlightDesc *result; // rax

  if ( this->pHighlight )
    return this->pHighlight;
  MovieImpl = Scaleform::GFx::DisplayObjectBase::FindMovieImpl(this);
  v3 = (__int64)MovieImpl->GetHeap(MovieImpl);
  v4 = (Scaleform::Render::Text::Highlighter *)(*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 80i64))(
                                                 v3,
                                                 56i64);
  v5 = (Scaleform::GFx::StaticTextCharacter::HighlightDesc *)v4;
  if ( v4 )
  {
    Scaleform::Render::Text::Highlighter::Highlighter(v4);
    result = v5;
    this->pHighlight = v5;
  }
  else
  {
    this->pHighlight = 0i64;
    return 0i64;
  }
  return result;
}

bool __fastcall Scaleform::GFx::StaticTextDef::DefPointTestLocal(
        Scaleform::GFx::StaticTextDef *this,
        const Scaleform::Render::Point<float> *pt,
        bool testShape,
        const Scaleform::GFx::DisplayObjectBase *pinst)
{
  float y; // xmm1_4
  bool result; // al

  result = 0;
  if ( this->TextRect.x2 >= pt->x && pt->x >= this->TextRect.x1 )
  {
    y = pt->y;
    if ( this->TextRect.y2 >= y && y >= this->TextRect.y1 )
      return 1;
  }
  return result;
}

__int64 __fastcall Scaleform::GFx::StaticTextSnapshotData::FindTextA(
        Scaleform::GFx::StaticTextSnapshotData *this,
        unsigned __int64 start,
        const char *query,
        bool bcaseSensitive)
{
  signed int v6; // er15
  int Char_Advance0; // er14
  unsigned int v8; // esi
  unsigned int v9; // eax
  unsigned int v10; // ebx
  unsigned int v11; // edi
  int v12; // ebx
  unsigned int v13; // edi
  unsigned int v14; // eax
  bool v15; // zf
  unsigned int v16; // edx
  unsigned int v17; // ecx
  char *v19; // [rsp+20h] [rbp-38h] BYREF
  char *v20; // [rsp+60h] [rbp+8h] BYREF
  char *v21; // [rsp+68h] [rbp+10h] BYREF
  char *putf8Buffer; // [rsp+70h] [rbp+18h] BYREF

  putf8Buffer = (char *)query;
  v6 = start;
  Char_Advance0 = Scaleform::UTF8Util::DecodeNextChar_Advance0((const char **)&putf8Buffer);
  if ( !Char_Advance0 )
    --putf8Buffer;
  v19 = (char *)((this->SnapshotString.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12);
  v8 = 0;
  while ( 1 )
  {
    v9 = Scaleform::UTF8Util::DecodeNextChar_Advance0((const char **)&v19);
    v10 = v9;
    if ( !v9 )
      return 0xFFFFFFFFi64;
    if ( (int)v8 < v6 )
      goto LABEL_8;
    if ( bcaseSensitive )
    {
      if ( v9 != Char_Advance0 )
        goto LABEL_8;
LABEL_14:
      v21 = v19;
      v20 = putf8Buffer;
      do
      {
        v12 = -1;
        v13 = Scaleform::UTF8Util::DecodeNextChar_Advance0((const char **)&v20);
        if ( !v13 )
          --v20;
        do
        {
          v14 = Scaleform::UTF8Util::DecodeNextChar_Advance0((const char **)&v21);
          if ( !v14 )
            --v21;
          ++v12;
        }
        while ( v14 == 10 );
        if ( !v14 )
          break;
        if ( !v13 )
          return v8;
        if ( bcaseSensitive )
        {
          v15 = v14 == v13;
        }
        else
        {
          v16 = v14 - 32;
          if ( v14 - 97 > 0x19 )
            v16 = v14;
          v17 = v13 - 32;
          if ( v13 - 97 > 0x19 )
            v17 = v13;
          v15 = v16 == v17;
        }
      }
      while ( v15 );
      if ( !v13 )
        return v8;
      if ( !v14 )
        return 0xFFFFFFFFi64;
      v8 = v8 - v12 + 1;
    }
    else
    {
      v11 = v9 - 32;
      if ( v9 - 97 > 0x19 )
        v11 = v9;
      if ( v11 == Scaleform::SFtoupper(Char_Advance0) )
        goto LABEL_14;
LABEL_8:
      if ( v10 == 10 )
        --v8;
      ++v8;
    }
  }
}

void __fastcall Scaleform::GFx::GFx_DefineTextLoader(
        Scaleform::GFx::LoadProcess *p,
        const Scaleform::GFx::TagInfo *tagInfo)
{
  Scaleform::GFx::SWFProcessInfo *pAltStream; // rbx
  int v5; // eax
  __int64 Pos; // r8
  unsigned __int16 v7; // si
  __int64 v8; // rax
  Scaleform::GFx::StaticTextDef *v9; // rbx
  Scaleform::GFx::MovieDataDef::LoadTaskData *pObject; // rcx
  Scaleform::GFx::ResourceId rid; // [rsp+30h] [rbp+8h] BYREF

  pAltStream = (Scaleform::GFx::SWFProcessInfo *)p->pAltStream;
  if ( !pAltStream )
    pAltStream = &p->ProcessInfo;
  v5 = pAltStream->Stream.DataSize - pAltStream->Stream.Pos;
  pAltStream->Stream.UnusedBits = 0;
  if ( v5 < 2 )
    Scaleform::GFx::Stream::PopulateBuffer(&pAltStream->Stream, 2);
  Pos = pAltStream->Stream.Pos;
  v7 = pAltStream->Stream.pBuffer[Pos] | (pAltStream->Stream.pBuffer[(unsigned int)(Pos + 1)] << 8);
  pAltStream->Stream.Pos = Pos + 2;
  v8 = ((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))p->pLoadData.pObject->pHeap->Alloc)(
         p->pLoadData.pObject->pHeap,
         112i64);
  v9 = (Scaleform::GFx::StaticTextDef *)v8;
  if ( v8 )
  {
    *(_QWORD *)v8 = &Scaleform::GFx::Resource::`vftable';
    *(_DWORD *)(v8 + 8) = 1;
    *(_QWORD *)(v8 + 16) = 0i64;
    *(_DWORD *)(v8 + 24) = 0x40000;
    *(_QWORD *)v8 = &Scaleform::GFx::StaticTextDef::`vftable';
    *(_QWORD *)(v8 + 32) = 0i64;
    *(_QWORD *)(v8 + 40) = 0i64;
    *(_QWORD *)(v8 + 48) = 1065353216i64;
    *(_QWORD *)(v8 + 56) = 0i64;
    *(_DWORD *)(v8 + 64) = 0;
    *(_QWORD *)(v8 + 68) = 1065353216i64;
    *(_DWORD *)(v8 + 76) = 0;
    *(_QWORD *)(v8 + 80) = 0i64;
    *(_QWORD *)(v8 + 88) = 0i64;
    *(_QWORD *)(v8 + 96) = 0i64;
    *(_BYTE *)(v8 + 104) = 0;
  }
  else
  {
    v9 = 0i64;
  }
  Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogParseShape(
    &p->Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess>,
    "TextCharacter, id = %d\n");
  Scaleform::GFx::StaticTextDef::Read(v9, p, tagInfo->TagType);
  if ( p->LoadState == LS_LoadingRoot )
  {
    pObject = p->pLoadData.pObject;
    rid.Id = v7;
    Scaleform::GFx::MovieDataDef::LoadTaskData::AddResource(pObject, &rid, v9);
  }
  if ( v9 )
    Scaleform::GFx::Resource::Release(v9);
}

Scaleform::Render::Rect<float> *__fastcall Scaleform::GFx::StaticTextCharacter::GetBounds(
        Scaleform::GFx::StaticTextCharacter *this,
        Scaleform::Render::Rect<float> *result,
        const Scaleform::Render::Matrix2x4<float> *transform)
{
  const Scaleform::Render::Rect<float> *v5; // rax
  char v7[16]; // [rsp+20h] [rbp-28h] BYREF

  v5 = (const Scaleform::Render::Rect<float> *)((__int64 (__fastcall *)(Scaleform::GFx::StaticTextDef *, char *))this->pDef.pObject->GetBoundsLocal)(
                                                 this->pDef.pObject,
                                                 v7);
  Scaleform::Render::Matrix2x4<float>::EncloseTransform((Scaleform::Render::Matrix2x4<float> *)transform, result, v5);
  return result;
}

Scaleform::Render::Rect<float> *__fastcall Scaleform::GFx::StaticTextDef::GetBoundsLocal(
        Scaleform::GFx::StaticTextDef *this,
        Scaleform::Render::Rect<float> *result,
        float __formal)
{
  *result = this->TextRect;
  return result;
}

unsigned __int64 __fastcall Scaleform::GFx::StaticTextSnapshotData::GetCharCount(
        Scaleform::GFx::StaticTextSnapshotData *this)
{
  unsigned __int64 Size; // r11
  __int64 v2; // rdx
  unsigned __int64 v4; // r10
  unsigned __int64 v5; // r8
  Scaleform::GFx::StaticTextSnapshotData::CharRef *Data; // r9
  __m128i v7; // xmm2
  __m128i v8; // xmm1
  __int64 v9; // rcx
  __m128i v10; // xmm0
  __m128i v11; // xmm0
  __m128i v12; // xmm1
  __int64 v13; // r9
  Scaleform::GFx::StaticTextSnapshotData::CharRef *v14; // rbx
  __int64 v15; // rcx
  unsigned __int64 v16; // rax

  Size = this->StaticTextCharRefs.Data.Size;
  v2 = 0i64;
  v4 = 0i64;
  v5 = 0i64;
  if ( Size >= 4 )
  {
    Data = this->StaticTextCharRefs.Data.Data;
    v7 = 0i64;
    v8 = 0i64;
    v9 = 0i64;
    do
    {
      v10.m128i_i64[0] = Data[v9].CharCount;
      v5 += 4i64;
      v10.m128i_i64[1] = Data[v9 + 1].CharCount;
      v9 += 4i64;
      v7 = _mm_add_epi64(v10, v7);
      v10.m128i_i64[0] = *((_QWORD *)&Data[v9 - 1] - 1);
      v10.m128i_i64[1] = Data[v9 - 1].CharCount;
      v11 = _mm_add_epi64(v10, v8);
      v8 = v11;
    }
    while ( v5 < (Size & 0xFFFFFFFFFFFFFFFCui64) );
    v12 = _mm_add_epi64(v11, v7);
    v4 = _mm_add_epi64(v12, _mm_srli_si128(v12, 8)).m128i_u64[0];
  }
  v13 = 0i64;
  if ( v5 >= Size )
    return v4;
  if ( Size - v5 >= 2 )
  {
    v14 = this->StaticTextCharRefs.Data.Data;
    v15 = v5;
    v16 = ((Size - v5 - 2) >> 1) + 1;
    v5 += 2 * v16;
    do
    {
      v2 += v14[v15].CharCount;
      v13 += v14[v15 + 1].CharCount;
      v15 += 2i64;
      --v16;
    }
    while ( v16 );
  }
  if ( v5 < Size )
    v4 += this->StaticTextCharRefs.Data.Data[v5].CharCount;
  return v4 + v13 + v2;
}

Scaleform::GFx::StaticTextDef *__fastcall Scaleform::GFx::StaticTextCharacter::GetCharacterDef(
        Scaleform::GFx::StaticTextCharacter *this)
{
  return this->pDef.pObject;
}

float __fastcall Scaleform::GFx::StaticTextRecord::GetCumulativeAdvance(Scaleform::GFx::StaticTextRecord *this)
{
  unsigned __int64 Size; // rdx
  unsigned __int64 v2; // r9
  float result; // xmm0_4
  float *p_GlyphAdvance; // rax
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // rdx
  float *v7; // rcx

  Size = this->Glyphs.Data.Size;
  v2 = 0i64;
  result = 0.0;
  if ( Size >= 4 )
  {
    p_GlyphAdvance = &this->Glyphs.Data.Data[1].GlyphAdvance;
    v5 = ((Size - 4) >> 2) + 1;
    v2 = 4 * v5;
    do
    {
      result = (float)((float)((float)(result + *(p_GlyphAdvance - 2)) + *p_GlyphAdvance) + p_GlyphAdvance[2])
             + p_GlyphAdvance[4];
      p_GlyphAdvance += 8;
      --v5;
    }
    while ( v5 );
  }
  if ( v2 < Size )
  {
    v6 = Size - v2;
    v7 = &this->Glyphs.Data.Data[v2].GlyphAdvance;
    do
    {
      result = result + *v7;
      v7 += 2;
      --v6;
    }
    while ( v6 );
  }
  return result;
}

Scaleform::Render::Matrix2x4<float> *__fastcall Scaleform::GFx::StaticTextCharacter::GetMatrix(
        Scaleform::GFx::StaticTextCharacter *this)
{
  return &this->OrigMatrix;
}

Scaleform::Render::Rect<float> *__fastcall Scaleform::GFx::StaticTextCharacter::GetRectBounds(
        Scaleform::GFx::StaticTextCharacter *this,
        Scaleform::Render::Rect<float> *result,
        const Scaleform::Render::Matrix2x4<float> *transform)
{
  const Scaleform::Render::Rect<float> *v5; // rax
  char v7[16]; // [rsp+20h] [rbp-28h] BYREF

  v5 = (const Scaleform::Render::Rect<float> *)((__int64 (__fastcall *)(Scaleform::GFx::StaticTextDef *, char *))this->pDef.pObject->GetRectBoundsLocal)(
                                                 this->pDef.pObject,
                                                 v7);
  Scaleform::Render::Matrix2x4<float>::EncloseTransform((Scaleform::Render::Matrix2x4<float> *)transform, result, v5);
  return result;
}

__int64 __fastcall Scaleform::GFx::StaticTextDef::GetResourceTypeCode(Scaleform::GFx::StaticTextDef *this)
{
  return 33280i64;
}

Scaleform::String *__fastcall Scaleform::GFx::StaticTextSnapshotData::GetSelectedText(
        Scaleform::GFx::StaticTextSnapshotData *this,
        Scaleform::String *result,
        bool binclNewLines)
{
  __int64 v6; // r14
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // r13
  __int64 v9; // r15
  Scaleform::GFx::StaticTextCharacter::HighlightDesc *pHighlight; // rcx
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rsi
  unsigned int Char_Advance0; // eax
  unsigned int v14; // eax
  Scaleform::Render::Text::HighlightDesc v16; // [rsp+20h] [rbp-C8h] BYREF
  Scaleform::Render::Text::HighlighterRangeIterator resulta; // [rsp+60h] [rbp-88h] BYREF
  char *putf8Buffer; // [rsp+F0h] [rbp+8h] BYREF

  Scaleform::String::String(result);
  v6 = 0i64;
  v7 = 0i64;
  v8 = 0i64;
  putf8Buffer = (char *)((this->SnapshotString.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12);
  if ( this->StaticTextCharRefs.Data.Size )
  {
    v9 = 0i64;
    do
    {
      pHighlight = this->StaticTextCharRefs.Data.Data[v9].pChar.pObject->pHighlight;
      if ( pHighlight )
      {
        Scaleform::Render::Text::Highlighter::GetRangeIterator(
          &pHighlight->HighlightManager,
          &resulta,
          0i64,
          0xFFFFFFFF);
        while ( !Scaleform::Render::Text::HighlighterRangeIterator::IsFinished(&resulta) )
        {
          Scaleform::Render::Text::HighlighterRangeIterator::operator*(&resulta, &v16);
          v11 = v6 + v16.StartPos;
          v12 = v6 + v16.StartPos + v16.Length;
          v16.StartPos += v6;
          if ( v12 > v7 )
          {
            if ( v7 < v11 )
            {
              do
              {
                Char_Advance0 = Scaleform::UTF8Util::DecodeNextChar_Advance0((const char **)&putf8Buffer);
                if ( Char_Advance0 )
                {
                  if ( Char_Advance0 == 10 )
                    --v7;
                }
                else
                {
                  --putf8Buffer;
                }
                ++v7;
              }
              while ( v7 < v16.StartPos );
            }
            if ( v7 < v12 )
            {
              while ( 1 )
              {
                v14 = Scaleform::UTF8Util::DecodeNextChar_Advance0((const char **)&putf8Buffer);
                if ( !v14 )
                  --putf8Buffer;
                if ( binclNewLines )
                {
                  if ( v14 == 10 )
                  {
                    Scaleform::String::AppendChar(result, 0xAu);
                  }
                  else
                  {
LABEL_19:
                    Scaleform::String::AppendChar(result, v14);
                    if ( ++v7 >= v12 )
                      break;
                  }
                }
                else if ( v14 != 10 )
                {
                  goto LABEL_19;
                }
              }
            }
            v7 = v12;
          }
          Scaleform::Render::Text::HighlighterRangeIterator::operator++(&resulta, 0);
        }
        v6 += this->StaticTextCharRefs.Data.Data[v9].CharCount;
      }
      ++v8;
      ++v9;
    }
    while ( v8 < this->StaticTextCharRefs.Data.Size );
  }
  return result;
}

Scaleform::String *__fastcall Scaleform::GFx::StaticTextSnapshotData::GetSubString(
        Scaleform::GFx::StaticTextSnapshotData *this,
        Scaleform::String *result,
        unsigned __int64 start,
        unsigned __int64 end,
        bool binclNewLines)
{
  bool v9; // bl
  unsigned int Char_Advance0; // eax
  char *putf8Buffer; // [rsp+30h] [rbp+8h] BYREF

  Scaleform::String::String(result);
  putf8Buffer = (char *)((this->SnapshotString.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12);
  if ( start < end )
  {
    v9 = binclNewLines;
    do
    {
      Char_Advance0 = Scaleform::UTF8Util::DecodeNextChar_Advance0((const char **)&putf8Buffer);
      if ( !Char_Advance0 )
        break;
      if ( Char_Advance0 == 10 )
      {
        if ( v9 )
          Scaleform::String::AppendChar(result, 0xAu);
      }
      else
      {
        Scaleform::String::AppendChar(result, Char_Advance0);
        ++start;
      }
    }
    while ( start < end );
  }
  return result;
}

__int64 __fastcall Scaleform::GFx::StaticTextCharacter::GetTopMostMouseEntity(
        Scaleform::GFx::StaticTextCharacter *this,
        const Scaleform::Render::Point<float> *pt,
        Scaleform::GFx::DisplayObjectBase::TopMostDescr *pdescr)
{
  Scaleform::GFx::InteractiveObject *TopMostMouseEntityDef; // rax

  TopMostMouseEntityDef = Scaleform::GFx::DisplayObjectBase::GetTopMostMouseEntityDef(
                            this,
                            this->pDef.pObject,
                            pt,
                            pdescr->TestAll,
                            pdescr->pIgnoreMC);
  pdescr->pResult = TopMostMouseEntityDef;
  return 2 - (unsigned int)(TopMostMouseEntityDef != 0i64);
}

__int64 __fastcall Scaleform::Render::DICommand_Draw::GetType(Scaleform::GFx::AS3::Instances::fl::XMLAttr *this)
{
  return 5i64;
}

__int64 __fastcall Scaleform::GFx::StaticTextSnapshotData::HitTestTextNearPos(
        Scaleform::GFx::StaticTextSnapshotData *this,
        float x,
        float y,
        float closedist)
{
  int v4; // edi
  float v6; // xmm9_4
  Scaleform::Render::Text::LineBuffer *v7; // r13
  __int64 v8; // rsi
  float v9; // xmm13_4
  float v10; // xmm8_4
  float v12; // xmm11_4
  unsigned __int64 v13; // r15
  __int64 v14; // rbx
  Scaleform::GFx::StaticTextCharacter *pObject; // r14
  float *v16; // rax
  float v17; // xmm1_4
  float v18; // xmm4_4
  float v19; // xmm3_4
  float v20; // xmm5_4
  float v21; // xmm7_4
  float v22; // xmm5_4
  float v23; // xmm1_4
  float v24; // xmm6_4
  float v25; // xmm2_4
  float v26; // xmm5_4
  const Scaleform::Render::Rect<float> *p_VisibleRect; // rdx
  float x2; // xmm0_4
  float v29; // xmm7_4
  float v30; // xmm6_4
  float v31; // xmm9_4
  float v32; // xmm1_4
  float v33; // xmm7_4
  float v34; // xmm0_4
  int v35; // er15
  float v36; // xmm8_4
  float v37; // xmm11_4
  Scaleform::Render::Text::LineBuffer::Line *v38; // rsi
  float OffsetX; // xmm1_4
  int v40; // ecx
  float v41; // xmm8_4
  unsigned int GlyphsCount; // er14
  __int64 v43; // rbx
  Scaleform::Render::Text::LineBuffer::FormatDataEntry *FormatData; // rax
  int v45; // ebx
  int Advance; // eax
  int TextPos; // eax
  unsigned int v48; // ebx
  Scaleform::Render::Point<float> result; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v51; // [rsp+30h] [rbp-D8h]
  Scaleform::Render::Text::LineBuffer::GlyphIterator v52; // [rsp+38h] [rbp-D0h] BYREF
  Scaleform::Render::Text::LineBuffer::Iterator v53; // [rsp+D8h] [rbp-30h] BYREF
  Scaleform::Render::Point<float> p; // [rsp+1D8h] [rbp+D0h] BYREF
  float v55; // [rsp+1E0h] [rbp+D8h]
  float v56; // [rsp+1F0h] [rbp+E8h]

  v56 = closedist;
  v55 = x;
  v4 = 0;
  v6 = x;
  v7 = 0i64;
  v8 = 0i64;
  v9 = FLOAT_3_4028235e38;
  v10 = 0.0;
  v51 = 0i64;
  v12 = 0.0;
  v13 = 0i64;
  if ( !this->StaticTextCharRefs.Data.Size )
    return 0xFFFFFFFFi64;
  v14 = 0i64;
  while ( 1 )
  {
    pObject = this->StaticTextCharRefs.Data.Data[v14].pChar.pObject;
    v16 = (float *)pObject->GetMatrix(pObject);
    v17 = v16[1];
    v18 = v16[3];
    v19 = v16[7];
    v20 = (float)(v16[5] * *v16) - (float)(v16[4] * v17);
    if ( v20 == 0.0 )
    {
      v21 = *(float *)&FLOAT_1_0;
      LODWORD(v22) = LODWORD(v18) ^ _xmm;
      v23 = 0.0;
      v24 = 0.0;
      v25 = *(float *)&FLOAT_1_0;
    }
    else
    {
      v25 = *v16 * (float)(1.0 / v20);
      LODWORD(v23) = COERCE_UNSIGNED_INT(v17 * (float)(1.0 / v20)) ^ _xmm;
      v21 = v16[5] * (float)(1.0 / v20);
      LODWORD(v24) = COERCE_UNSIGNED_INT(v16[4] * (float)(1.0 / v20)) ^ _xmm;
      v26 = (float)(v19 * v23) + (float)(v18 * v21);
      v19 = (float)(v19 * v25) + (float)(v18 * v24);
      LODWORD(v22) = LODWORD(v26) ^ _xmm;
    }
    p_VisibleRect = &pObject->TextGlyphRecords.Geom.VisibleRect;
    x2 = pObject->TextGlyphRecords.Geom.VisibleRect.x2;
    v29 = (float)((float)(v21 * v6) + (float)(v23 * y)) + v22;
    v30 = (float)((float)(v24 * v6) + (float)(v25 * y)) + COERCE_FLOAT(LODWORD(v19) ^ _xmm);
    p.x = v29;
    p.y = v30;
    if ( x2 >= v29
      && v29 >= p_VisibleRect->x1
      && pObject->TextGlyphRecords.Geom.VisibleRect.y2 >= v30
      && v30 >= pObject->TextGlyphRecords.Geom.VisibleRect.y1 )
    {
      v7 = (Scaleform::Render::Text::LineBuffer *)pObject;
      v35 = v8;
      v10 = v29;
      v12 = v30;
      goto LABEL_17;
    }
    Scaleform::GFx::ClosestPointOnRectangle(&result, p_VisibleRect, &p);
    v31 = result.x;
    v32 = result.x - v29;
    v33 = result.y;
    v34 = sqrtf((float)((float)(result.y - v30) * (float)(result.y - v30)) + (float)(v32 * v32));
    if ( v56 > v34 && v9 > v34 )
    {
      v7 = (Scaleform::Render::Text::LineBuffer *)pObject;
      v51 = v8;
      v9 = v34;
      v10 = v31;
      v12 = v33;
    }
    ++v13;
    v8 += this->StaticTextCharRefs.Data.Data[v14++].CharCount;
    if ( v13 >= this->StaticTextCharRefs.Data.Size )
      break;
    v6 = v55;
  }
  v35 = v51;
LABEL_17:
  if ( !v7 )
    return 0xFFFFFFFFi64;
  v36 = v10 - v7[2].Geom.VisibleRect.x1;
  v37 = v12 - v7[2].Geom.VisibleRect.y1;
  p.x = v36;
  p.y = v37;
  Scaleform::Render::Text::LineBuffer::FindLineAtOffset(v7 + 2, &v53, &p);
  if ( !v53.pLineBuffer )
    return 0xFFFFFFFFi64;
  if ( v53.CurrentPos >= v53.pLineBuffer->Lines.Data.Size )
    return 0xFFFFFFFFi64;
  if ( (v53.CurrentPos & 0x80000000) != 0 )
    return 0xFFFFFFFFi64;
  v38 = v53.pLineBuffer->Lines.Data.Data[v53.CurrentPos];
  OffsetX = (float)v38->Data32.OffsetX;
  if ( v36 < OffsetX )
    return 0xFFFFFFFFi64;
  v40 = (v38->MemSize & 0x80000000) == 0 ? v38->Data32.Width : v38->Data8.Width;
  if ( (float)((float)v40 + OffsetX) < v36 )
    return 0xFFFFFFFFi64;
  v41 = v36 - OffsetX;
  if ( (v38->MemSize & 0x80000000) == 0 )
    GlyphsCount = v38->Data32.GlyphsCount;
  else
    GlyphsCount = v38->Data8.GlyphsCount;
  v43 = 42i64;
  if ( (v38->MemSize & 0x80000000) != 0 )
    v43 = 30i64;
  FormatData = Scaleform::Render::Text::LineBuffer::Line::GetFormatData(v38);
  memset(&v52.HighlighterIter, 0, 24);
  v52.pGlyphs = (Scaleform::Render::Text::LineBuffer::GlyphEntry *)((char *)v38 + v43);
  v52.HighlighterIter.CurDesc.StartPos = -1i64;
  v52.pEndGlyphs = (Scaleform::Render::Text::LineBuffer::GlyphEntry *)((char *)v38 + 8 * GlyphsCount + v43);
  v52.HighlighterIter.CurDesc.Length = 0i64;
  v52.HighlighterIter.CurDesc.Offset = -1i64;
  memset(&v52.HighlighterIter.CurDesc.AdjStartPos, 0, 33);
  memset(&v52.ColorV, 0, 40);
  v52.pNextFormatData = FormatData;
  Scaleform::Render::Text::LineBuffer::GlyphIterator::UpdateDesc(&v52);
  v45 = 0;
  while ( v52.pGlyphs && v52.pGlyphs < v52.pEndGlyphs )
  {
    Advance = v52.pGlyphs->Advance;
    if ( (v52.pGlyphs->Flags & 0x40) != 0 )
      Advance = -Advance;
    v4 += Advance;
    if ( (float)v4 > v41 )
      break;
    v45 += v52.pGlyphs->LenAndFontSize >> 12;
    Scaleform::Render::Text::LineBuffer::GlyphIterator::operator++(&v52);
  }
  TextPos = v38->Data32.TextPos;
  if ( (v38->MemSize & 0x80000000) != 0 )
  {
    TextPos &= 0xFFFFFFu;
    if ( TextPos == 0xFFFFFF )
      TextPos = -1;
  }
  v48 = v35 + TextPos + v45;
  if ( v52.pImage.pObject )
    Scaleform::RefCountNTSImpl::Release(v52.pImage.pObject);
  if ( v52.pFontHandle.pObject )
    Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v52.pFontHandle.pObject);
  return v48;
}

__int64 __fastcall Scaleform::GFx::StaticTextSnapshotData::IsSelected(
        Scaleform::GFx::StaticTextSnapshotData *this,
        unsigned __int64 start,
        unsigned __int64 end)
{
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rbp
  __int64 v8; // rdi
  Scaleform::GFx::StaticTextCharacter *pObject; // rax
  unsigned __int8 v10; // di
  void *v11; // rbx
  Scaleform::String v13; // [rsp+40h] [rbp+8h] BYREF

  Scaleform::String::String(&v13);
  v6 = 0i64;
  v7 = 0i64;
  if ( !this->StaticTextCharRefs.Data.Size )
  {
LABEL_11:
    v10 = 0;
    goto LABEL_12;
  }
  v8 = 0i64;
  while ( 1 )
  {
    pObject = this->StaticTextCharRefs.Data.Data[v8].pChar.pObject;
    if ( pObject->pHighlight )
      break;
LABEL_10:
    ++v7;
    ++v8;
    if ( v7 >= this->StaticTextCharRefs.Data.Size )
      goto LABEL_11;
  }
  if ( v6 <= start )
  {
    if ( start < v6 + this->StaticTextCharRefs.Data.Data[v8].CharCount )
      goto LABEL_8;
    if ( v6 < start )
      goto LABEL_9;
  }
  if ( v6 >= end )
  {
LABEL_9:
    v6 += this->StaticTextCharRefs.Data.Data[v8].CharCount;
    goto LABEL_10;
  }
LABEL_8:
  if ( !Scaleform::Render::Text::Highlighter::IsAnyCharSelected(
          &pObject->pHighlight->HighlightManager,
          start - v6,
          end - v6) )
    goto LABEL_9;
  v10 = 1;
LABEL_12:
  v11 = (void *)(v13.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
  if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
         (volatile int *)((v13.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
         -1) == 1 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v11);
  return v10;
}

__int64 __fastcall Scaleform::GFx::StaticTextCharacter::PointTestLocal(
        Scaleform::GFx::StaticTextCharacter *this,
        const Scaleform::Render::Point<float> *pt,
        __int64 hitTestMask)
{
  LOBYTE(hitTestMask) = hitTestMask & 1;
  return ((__int64 (__fastcall *)(Scaleform::GFx::StaticTextDef *, const Scaleform::Render::Point<float> *, __int64, Scaleform::GFx::StaticTextCharacter *))this->pDef.pObject->DefPointTestLocal)(
           this->pDef.pObject,
           pt,
           hitTestMask,
           this);
}

void __fastcall Scaleform::GFx::StaticTextDef::Read(
        Scaleform::GFx::StaticTextDef *this,
        Scaleform::GFx::LoadProcess *p,
        Scaleform::GFx::TagType tagType)
{
  Scaleform::GFx::SWFProcessInfo *pAltStream; // rdi
  Scaleform::GFx::StaticTextDef *v4; // r15
  int v5; // eax
  __int64 Pos; // rdx
  unsigned int v7; // er13
  int v8; // eax
  __int64 v9; // rdx
  unsigned int advanceBits; // ebp
  char v11; // bl
  Scaleform::RefCountVImpl *v12; // r12
  float v13; // xmm9_4
  Scaleform::GFx::ResourceHandle::HandleType v14; // er14
  float v15; // xmm6_4
  float v16; // xmm7_4
  float v17; // xmm10_4
  int v18; // eax
  __int64 v19; // rdx
  int v20; // ecx
  __int64 v21; // rsi
  int v22; // er15
  char v23; // bp
  char v24; // r14
  char v25; // si
  char v26; // r15
  int v27; // eax
  __int64 v28; // rdx
  unsigned int v29; // ebx
  Scaleform::GFx::ResourceHandle::HandleType HType; // eax
  Scaleform::GFx::Resource *v31; // rcx
  int v32; // eax
  __int64 v33; // r8
  unsigned __int8 *pBuffer; // rcx
  __int16 v35; // dx
  __int16 v36; // ax
  int v37; // eax
  __int64 v38; // r8
  unsigned __int8 *v39; // rcx
  __int16 v40; // dx
  __int16 v41; // ax
  bool v42; // zf
  int v43; // eax
  __int64 v44; // rax
  int v45; // edx
  __int64 v46; // rbx
  Scaleform::GFx::StaticTextRecord *v47; // rax
  Scaleform::GFx::StaticTextRecord *v48; // rbx
  Scaleform::GFx::Resource *pResource; // rcx
  unsigned __int16 v50; // [rsp+30h] [rbp-C8h]
  Scaleform::GFx::ResourceHandle::HandleType v51; // [rsp+34h] [rbp-C4h]
  unsigned int v52; // [rsp+38h] [rbp-C0h]
  Scaleform::Render::Color pc; // [rsp+3Ch] [rbp-BCh] BYREF
  Scaleform::GFx::ResourceId rid; // [rsp+40h] [rbp-B8h] BYREF
  Scaleform::GFx::ResourceHandle phandle; // [rsp+48h] [rbp-B0h] BYREF

  pAltStream = (Scaleform::GFx::SWFProcessInfo *)p->pAltStream;
  v4 = this;
  if ( !pAltStream )
    pAltStream = &p->ProcessInfo;
  Scaleform::GFx::Stream::ReadRect(&pAltStream->Stream, &this->TextRect);
  Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogParseShape(
    (Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess> *)pAltStream,
    "  TextRect = { l: %f, t: %f, r: %f, b: %f }\n");
  Scaleform::GFx::Stream::ReadMatrix(&pAltStream->Stream, &v4->MatrixPriv);
  Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogParseShape(
    (Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess> *)pAltStream,
    "  mat:\n");
  v5 = pAltStream->Stream.DataSize - pAltStream->Stream.Pos;
  pAltStream->Stream.UnusedBits = 0;
  if ( v5 < 1 )
    Scaleform::GFx::Stream::PopulateBuffer1(&pAltStream->Stream);
  Pos = pAltStream->Stream.Pos;
  v7 = pAltStream->Stream.pBuffer[Pos];
  v8 = pAltStream->Stream.DataSize - (Pos + 1);
  pAltStream->Stream.Pos = Pos + 1;
  pAltStream->Stream.UnusedBits = 0;
  if ( v8 < 1 )
    Scaleform::GFx::Stream::PopulateBuffer1(&pAltStream->Stream);
  v9 = pAltStream->Stream.Pos;
  advanceBits = pAltStream->Stream.pBuffer[v9];
  v52 = advanceBits;
  pAltStream->Stream.Pos = v9 + 1;
  Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogParseShape(
    (Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess> *)pAltStream,
    "begin text records\n");
  v11 = 0;
  v12 = 0i64;
  v13 = 0.0;
  v50 = 0;
  v14 = RH_Pointer;
  v51 = RH_Pointer;
  v15 = 0.0;
  v16 = 0.0;
  v17 = 0.0;
  while ( 1 )
  {
    v18 = pAltStream->Stream.DataSize - pAltStream->Stream.Pos;
    pAltStream->Stream.UnusedBits = 0;
    if ( v18 < 1 )
      Scaleform::GFx::Stream::PopulateBuffer1(&pAltStream->Stream);
    v19 = pAltStream->Stream.Pos;
    v20 = pAltStream->Stream.pBuffer[v19];
    pAltStream->Stream.Pos = v19 + 1;
    v21 = (unsigned int)v20;
    if ( !(_BYTE)v20 )
      break;
    if ( v11 )
    {
      v11 = 0;
      if ( v15 >= 0.0 || v17 <= 0.0 )
      {
        v47 = Scaleform::GFx::StaticTextRecordList::AddRecord(&v4->TextRecords);
        v48 = v47;
        if ( v47 )
        {
          v47->Offset.x = v16;
          v17 = v15;
          v47->Offset.y = v15;
          if ( v14 == RH_Pointer && v12 )
            Scaleform::Render::RenderBuffer::AddRef(v12);
          if ( v48->pFont.HType == RH_Pointer )
          {
            pResource = v48->pFont.pResource;
            if ( pResource )
              Scaleform::GFx::Resource::Release(pResource);
          }
          v48->pFont.HType = v14;
          v48->pFont.pResource = (Scaleform::GFx::Resource *)v12;
          v48->TextHeight = v13;
          v48->ColorV = pc;
          v48->FontId = v50;
          Scaleform::GFx::StaticTextRecord::Read(v48, &pAltStream->Stream, v21, v7, advanceBits);
          v16 = v16 + Scaleform::GFx::StaticTextRecord::GetCumulativeAdvance(v48);
        }
        Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogParseShape(
          (Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess> *)pAltStream,
          "  GlyphRecords: count = %d\n");
        v11 = 0;
      }
      else
      {
        Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogParseShape(
          (Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess> *)pAltStream,
          "  Negative Y-offset, 16-bit value rollover, skipping the line...\n");
        if ( (int)v21 > 0 )
        {
          v46 = v21;
          do
          {
            Scaleform::GFx::Stream::ReadUInt(&pAltStream->Stream, v7);
            Scaleform::GFx::Stream::ReadSInt(&pAltStream->Stream, advanceBits);
            --v46;
          }
          while ( v46 );
          v11 = 0;
        }
      }
    }
    else
    {
      v11 = 1;
      v22 = v20 >> 3;
      v23 = (v20 >> 2) & 1;
      v24 = (v20 >> 1) & 1;
      v25 = v20 & 1;
      Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogParseShape(
        (Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess> *)pAltStream,
        "  text style change\n");
      v26 = v22 & 1;
      if ( v26 )
      {
        v27 = pAltStream->Stream.DataSize - pAltStream->Stream.Pos;
        pAltStream->Stream.UnusedBits = 0;
        if ( v27 < 2 )
          Scaleform::GFx::Stream::PopulateBuffer(&pAltStream->Stream, 2);
        v28 = pAltStream->Stream.Pos;
        v29 = (unsigned __int16)(pAltStream->Stream.pBuffer[v28] | (pAltStream->Stream.pBuffer[pAltStream->Stream.Pos
                                                                                             + 1] << 8));
        v50 = pAltStream->Stream.pBuffer[v28] | (pAltStream->Stream.pBuffer[pAltStream->Stream.Pos + 1] << 8);
        pAltStream->Stream.Pos = v28 + 2;
        Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogParseShape(
          (Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess> *)pAltStream,
          "  HasFont: font id = %d\n");
        rid.Id = v29;
        phandle.HType = RH_Pointer;
        phandle.pResource = 0i64;
        Scaleform::GFx::MovieDataDef::LoadTaskData::GetResourceHandle(p->pLoadData.pObject, &phandle, &rid);
        HType = phandle.HType;
        v31 = phandle.pResource;
        if ( phandle.HType == RH_Pointer && phandle.pResource )
        {
          Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)phandle.pResource);
          v31 = phandle.pResource;
          HType = phandle.HType;
        }
        if ( v51 == RH_Pointer && v12 )
        {
          Scaleform::GFx::Resource::Release((Scaleform::GFx::Resource *)v12);
          v31 = phandle.pResource;
          HType = phandle.HType;
        }
        v51 = HType;
        v12 = (Scaleform::RefCountVImpl *)v31;
        if ( HType == RH_Pointer && v31 )
          Scaleform::GFx::Resource::Release(v31);
        v11 = 1;
      }
      if ( v23 )
      {
        if ( tagType == Tag_DefineText )
          Scaleform::GFx::Stream::ReadRgb(&pAltStream->Stream, &pc);
        else
          Scaleform::GFx::Stream::ReadRgba(&pAltStream->Stream, &pc);
        Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogParseShape(
          (Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess> *)pAltStream,
          "  HasColor\n");
      }
      if ( v25 )
      {
        v32 = pAltStream->Stream.DataSize - pAltStream->Stream.Pos;
        pAltStream->Stream.UnusedBits = 0;
        if ( v32 < 2 )
          Scaleform::GFx::Stream::PopulateBuffer(&pAltStream->Stream, 2);
        v33 = pAltStream->Stream.Pos;
        pBuffer = pAltStream->Stream.pBuffer;
        v35 = pBuffer[pAltStream->Stream.Pos + 1];
        v36 = pBuffer[v33];
        pAltStream->Stream.Pos = v33 + 2;
        v16 = (float)(__int16)(v36 | (v35 << 8));
        Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogParseShape(
          (Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess> *)pAltStream,
          "  XOffset = %g\n");
      }
      if ( v24 )
      {
        v37 = pAltStream->Stream.DataSize - pAltStream->Stream.Pos;
        pAltStream->Stream.UnusedBits = 0;
        if ( v37 < 2 )
          Scaleform::GFx::Stream::PopulateBuffer(&pAltStream->Stream, 2);
        v38 = pAltStream->Stream.Pos;
        v39 = pAltStream->Stream.pBuffer;
        v40 = v39[pAltStream->Stream.Pos + 1];
        v41 = v39[v38];
        pAltStream->Stream.Pos = v38 + 2;
        v15 = (float)(__int16)(v41 | (v40 << 8));
        Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogParseShape(
          (Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess> *)pAltStream,
          "  YOffset = %g\n");
      }
      advanceBits = v52;
      v42 = v26 == 0;
      v4 = this;
      v14 = v51;
      if ( !v42 )
      {
        v43 = pAltStream->Stream.DataSize - pAltStream->Stream.Pos;
        pAltStream->Stream.UnusedBits = 0;
        if ( v43 < 2 )
          Scaleform::GFx::Stream::PopulateBuffer(&pAltStream->Stream, 2);
        v44 = pAltStream->Stream.Pos;
        v45 = pAltStream->Stream.pBuffer[v44] | (pAltStream->Stream.pBuffer[pAltStream->Stream.Pos + 1] << 8);
        pAltStream->Stream.Pos = v44 + 2;
        v13 = (float)v45;
        Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogParseShape(
          (Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess> *)pAltStream,
          "  TextHeight = %g\n");
        v4 = this;
      }
    }
  }
  Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogParseShape(
    (Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess> *)pAltStream,
    "end text records\n");
  if ( v14 == RH_Pointer && v12 )
    Scaleform::GFx::Resource::Release((Scaleform::GFx::Resource *)v12);
}

void __fastcall Scaleform::GFx::StaticTextRecord::Read(
        Scaleform::GFx::StaticTextRecord *this,
        Scaleform::GFx::Stream *in,
        int glyphCount,
        int glyphBits,
        int advanceBits)
{
  __int64 v5; // rbp
  __int64 i; // rdi
  Scaleform::GFx::StaticTextRecord::GlyphEntry *Data; // rbx
  Scaleform::GFx::StaticTextRecord::GlyphEntry *v11; // rbx

  v5 = glyphCount;
  Scaleform::ArrayData<Scaleform::GFx::StaticTextRecord::GlyphEntry,Scaleform::AllocatorLH<Scaleform::GFx::StaticTextRecord::GlyphEntry,258>,Scaleform::ArrayDefaultPolicy>::Resize(
    &this->Glyphs.Data,
    glyphCount);
  for ( i = 0i64; i < v5; ++i )
  {
    Data = this->Glyphs.Data.Data;
    Data[i].GlyphIndex = Scaleform::GFx::Stream::ReadUInt(in, glyphBits);
    v11 = this->Glyphs.Data.Data;
    v11[i].GlyphAdvance = (float)Scaleform::GFx::Stream::ReadSInt(in, advanceBits);
  }
}

void __fastcall Scaleform::GFx::StaticTextCharacter::RecreateVisibleTextLayout(
        Scaleform::GFx::StaticTextCharacter *this)
{
  Scaleform::Render::TreeText *RenderNode; // rdi
  Scaleform::GFx::StaticTextCharacter::HighlightDesc *pHighlight; // rcx
  Scaleform::Render::TextFieldParam params; // [rsp+20h] [rbp-E0h] BYREF
  Scaleform::Render::TextLayout::Builder bld; // [rsp+60h] [rbp-A0h] BYREF

  RenderNode = (Scaleform::Render::TreeText *)Scaleform::GFx::DisplayObjectBase::GetRenderNode(this);
  Scaleform::Render::TextLayout::Builder::Builder(&bld, Scaleform::Memory::pGlobalHeap);
  pHighlight = this->pHighlight;
  if ( pHighlight && !pHighlight->HighlightManager.Valid )
  {
    Scaleform::Render::Text::Highlighter::UpdateGlyphIndices(&pHighlight->HighlightManager, 0i64);
    this->pHighlight->HighlightManager.Valid = 1;
  }
  *(_DWORD *)&params.TextParam.BlurY = 0x100000;
  params.TextParam.pFont = 0i64;
  *(_QWORD *)&params.TextParam.GlyphIndex = 0i64;
  params.ShadowParam.pFont = 0i64;
  *(_QWORD *)&params.ShadowParam.GlyphIndex = 0i64;
  *(_QWORD *)&params.ShadowColor = 0i64;
  params.ShadowOffsetY = 0.0;
  *(_DWORD *)&params.ShadowParam.BlurY = 0x100000;
  Scaleform::Render::Text::LoadTextFieldParamFromTextFilter(&params, &this->Filter);
  if ( (this->pDef.pObject->Flags & 1) != 0 )
  {
    params.TextParam.Flags |= 3u;
    params.ShadowParam.Flags |= 3u;
  }
  Scaleform::Render::Text::LineBuffer::CreateVisibleTextLayout(
    &this->TextGlyphRecords,
    &bld,
    &this->pHighlight->HighlightManager,
    &params);
  bld.Bounds = this->TextGlyphRecords.Geom.VisibleRect;
  Scaleform::Render::TreeText::SetLayout(RenderNode, &bld);
  Scaleform::Render::TextLayout::Builder::~Builder(&bld);
}

void __fastcall Scaleform::ArrayDataBase<Scaleform::GFx::StaticTextRecord *,Scaleform::AllocatorLH<Scaleform::GFx::StaticTextRecord *,258>,Scaleform::ArrayDefaultPolicy>::Reserve(
        Scaleform::ArrayDataBase<Scaleform::GFx::StaticTextRecord::GlyphEntry,Scaleform::AllocatorLH<Scaleform::GFx::StaticTextRecord::GlyphEntry,258>,Scaleform::ArrayDefaultPolicy> *this,
        const void *pheapAddr,
        unsigned __int64 newCapacity)
{
  Scaleform::GFx::StaticTextRecord::GlyphEntry *Data; // rdx
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // r8
  Scaleform::GFx::StaticTextRecord::GlyphEntry *v8; // rax
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
        v8 = (Scaleform::GFx::StaticTextRecord::GlyphEntry *)Scaleform::Memory::pGlobalHeap->Realloc(
                                                               Scaleform::Memory::pGlobalHeap,
                                                               Data,
                                                               v7);
        this->Policy.Capacity = v6;
        this->Data = v8;
        return;
      }
      v9 = 258;
      this->Data = (Scaleform::GFx::StaticTextRecord::GlyphEntry *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
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

void __fastcall Scaleform::ArrayData<Scaleform::GFx::StaticTextRecord::GlyphEntry,Scaleform::AllocatorLH<Scaleform::GFx::StaticTextRecord::GlyphEntry,258>,Scaleform::ArrayDefaultPolicy>::Resize(
        Scaleform::ArrayData<Scaleform::GFx::StaticTextRecord::GlyphEntry,Scaleform::AllocatorLH<Scaleform::GFx::StaticTextRecord::GlyphEntry,258>,Scaleform::ArrayDefaultPolicy> *this,
        unsigned __int64 newSize)
{
  unsigned __int64 Size; // rsi
  unsigned __int64 v5; // r8
  Scaleform::GFx::StaticTextRecord::GlyphEntry *v6; // rcx
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
    Scaleform::ArrayDataBase<Scaleform::GFx::StaticTextRecord *,Scaleform::AllocatorLH<Scaleform::GFx::StaticTextRecord *,258>,Scaleform::ArrayDefaultPolicy>::Reserve(
      this,
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
      {
        v6->GlyphIndex = -1;
        v6->GlyphAdvance = 0.0;
      }
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

__int64 __fastcall Scaleform::SFtoupper(int c)
{
  __int64 result; // rax

  result = (unsigned int)(c - 32);
  if ( (unsigned int)(c - 97) > 0x19 )
    return (unsigned int)c;
  return result;
}

void __fastcall Scaleform::GFx::StaticTextCharacter::SetFilters(
        Scaleform::GFx::StaticTextCharacter *this,
        const Scaleform::Render::FilterSet *filters)
{
  unsigned int v4; // ebx
  const Scaleform::Render::Filter *Filter; // rax
  Scaleform::Render::Text::TextFilter v6; // [rsp+20h] [rbp-78h] BYREF

  if ( filters )
  {
    v6.RefCount = 1;
    v6.__vftable = (Scaleform::Render::Text::TextFilter_vtbl *)&Scaleform::Render::Text::TextFilter::`vftable';
    v6.ShadowParams.Passes = 1;
    v6.ShadowParams.BlurX = 100.0;
    v4 = 0;
    v6.ShadowParams.Mode = 0;
    *(_QWORD *)&v6.ShadowParams.BlurY = 1120403456i64;
    LODWORD(v6.ShadowParams.Strength) = FLOAT_1_0;
    v6.ShadowParams.Offset.y = 0.0;
    v6.ShadowParams.Gradient.pObject = 0i64;
    *(_DWORD *)&v6.ShadowParams.Colors[0].Channels.Green = 16711680;
    v6.ShadowParams.Colors[0].Channels.Blue = 0;
    *(_WORD *)&v6.ShadowParams.Colors[1].Channels.Green = 0;
    v6.ShadowParams.Colors[1].Channels.Alpha = 0;
    Scaleform::Render::Text::TextFilter::SetDefaultShadow(&v6);
    if ( Scaleform::Render::FilterSet::GetFilterCount((Scaleform::Render::FilterSet *)filters) )
    {
      do
      {
        Filter = Scaleform::Render::FilterSet::GetFilter((Scaleform::Render::FilterSet *)filters, v4);
        Scaleform::Render::Text::TextFilter::LoadFilterDesc(&v6, Filter);
        ++v4;
      }
      while ( v4 < Scaleform::Render::FilterSet::GetFilterCount((Scaleform::Render::FilterSet *)filters) );
    }
    this->SetTextFilters(this, &v6);
    if ( v6.ShadowParams.Gradient.pObject )
      Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v6.ShadowParams.Gradient.pObject);
    Scaleform::RefCountNTSImplCore::~RefCountNTSImplCore(&v6);
  }
}

void __fastcall Scaleform::GFx::StaticTextCharacter::SetMatrix(
        Scaleform::GFx::StaticTextCharacter *this,
        const Scaleform::Render::Matrix2x4<float> *m)
{
  float *pObject; // rax
  float v3; // xmm7_4
  float v4; // xmm5_4
  float v5; // xmm8_4
  float v6; // xmm6_4
  float v7; // xmm3_4
  float v8; // xmm4_4
  float v9; // xmm2_4
  float v10; // xmm0_4
  Scaleform::Render::Matrix2x4<float> mt; // [rsp+20h] [rbp-68h] BYREF

  this->OrigMatrix = *m;
  pObject = (float *)this->pDef.pObject;
  v3 = m->M[0][0];
  v4 = m->M[0][1];
  v5 = m->M[1][0];
  v6 = m->M[1][1];
  v7 = m->M[0][3];
  v8 = m->M[1][3];
  mt.M[0][2] = m->M[0][2];
  *(_QWORD *)&mt.M[0][0] = __PAIR64__(LODWORD(v4), LODWORD(v3));
  mt.M[0][3] = v7;
  mt.M[1][0] = v5;
  mt.M[1][3] = v8;
  *(_QWORD *)&mt.M[1][1] = LODWORD(v6);
  mt.M[0][0] = (float)(v3 * pObject[12]) + (float)(v4 * pObject[16]);
  mt.M[1][0] = (float)(v5 * pObject[12]) + (float)(v6 * pObject[16]);
  mt.M[0][1] = (float)(v4 * pObject[17]) + (float)(v3 * pObject[13]);
  v9 = v6 * pObject[17];
  v10 = v5 * pObject[13];
  mt.M[0][2] = 0.0;
  mt.M[1][1] = v9 + v10;
  mt.M[0][3] = v7 + (float)((float)(v3 * pObject[15]) + (float)(v4 * pObject[19]));
  mt.M[1][3] = v8 + (float)((float)(v5 * pObject[15]) + (float)(v6 * pObject[19]));
  Scaleform::GFx::DisplayObject::SetMatrix(this, &mt);
}

void __fastcall Scaleform::GFx::StaticTextSnapshotData::SetSelectColor(
        Scaleform::GFx::StaticTextSnapshotData *this,
        const Scaleform::Render::Color *color)
{
  unsigned __int64 v2; // rbx
  __int64 v4; // rdi
  Scaleform::GFx::StaticTextCharacter::HighlightDesc *pHighlight; // rcx

  v2 = 0i64;
  this->SelectColor = *color;
  if ( this->StaticTextCharRefs.Data.Size )
  {
    v4 = 0i64;
    do
    {
      pHighlight = this->StaticTextCharRefs.Data.Data[v4].pChar.pObject->pHighlight;
      if ( pHighlight )
        Scaleform::Render::Text::Highlighter::SetSelectColor(&pHighlight->HighlightManager, &this->SelectColor);
      ++v2;
      ++v4;
    }
    while ( v2 < this->StaticTextCharRefs.Data.Size );
  }
}

void __fastcall Scaleform::GFx::StaticTextSnapshotData::SetSelected(
        Scaleform::GFx::StaticTextSnapshotData *this,
        unsigned __int64 start,
        unsigned __int64 end,
        bool bselect)
{
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rbp
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // r12
  __int64 v10; // r15
  unsigned __int64 v11; // r13
  Scaleform::GFx::StaticTextCharacter *pObject; // rsi
  Scaleform::Render::Text::Highlighter *p_HighlightManager; // r8
  Scaleform::GFx::StaticTextCharacter::HighlightDesc *TextHighlighter; // rax
  Scaleform::GFx::StaticTextSnapshotData::CharRef *Data; // rax
  unsigned __int64 v16; // rcx
  Scaleform::Render::Text::HighlightDesc merge; // [rsp+20h] [rbp-78h] BYREF
  unsigned __int64 v18; // [rsp+B0h] [rbp+18h]
  bool v19; // [rsp+B8h] [rbp+20h]

  v19 = bselect;
  v18 = end;
  v5 = 0i64;
  v6 = end - start;
  v8 = 0i64;
  v9 = 0i64;
  if ( this->StaticTextCharRefs.Data.Size )
  {
    v10 = 0i64;
    do
    {
      v11 = v8 + this->StaticTextCharRefs.Data.Data[v10].CharCount;
      if ( start > v8 )
        goto LABEL_6;
      if ( v8 < end )
        goto LABEL_7;
      if ( start >= v8 )
      {
LABEL_6:
        if ( start < v11 )
        {
LABEL_7:
          pObject = this->StaticTextCharRefs.Data.Data[v10].pChar.pObject;
          p_HighlightManager = &pObject->pHighlight->HighlightManager;
          if ( !p_HighlightManager )
          {
            TextHighlighter = Scaleform::GFx::StaticTextCharacter::CreateTextHighlighter(this->StaticTextCharRefs.Data.Data[v10].pChar.pObject);
            bselect = v19;
            p_HighlightManager = (Scaleform::Render::Text::Highlighter *)TextHighlighter;
            v5 = 0i64;
          }
          merge.Info.BackgroundColor.Raw = this->SelectColor.Raw;
          merge.Length = 0i64;
          merge.Offset = -1i64;
          memset(&merge.AdjStartPos, 0, 20);
          *(_QWORD *)&merge.Info.TextColor.Channels.Blue = 0i64;
          merge.Info.Flags = 8;
          if ( v8 <= start )
            v5 = start - v8;
          Data = this->StaticTextCharRefs.Data.Data;
          merge.StartPos = v5;
          v16 = Data[v10].CharCount - v5;
          merge.AdjStartPos = v5;
          if ( v6 < v16 )
            v16 = v6;
          merge.Length = v16;
          merge.GlyphNum = v16;
          if ( bselect )
            Scaleform::Render::Text::Highlighter::Add(p_HighlightManager, &merge);
          else
            Scaleform::Render::Text::Highlighter::Remove(p_HighlightManager, &merge);
          v6 -= merge.Length;
          Scaleform::GFx::StaticTextCharacter::RecreateVisibleTextLayout(pObject);
          end = v18;
          v5 = 0i64;
          bselect = v19;
        }
      }
      ++v9;
      ++v10;
      v8 = v11;
    }
    while ( v9 < this->StaticTextCharRefs.Data.Size );
  }
}

void __fastcall Scaleform::GFx::StaticTextCharacter::SetTextFilters(
        Scaleform::GFx::StaticTextCharacter *this,
        const Scaleform::Render::Text::TextFilter *f)
{
  this->Filter.BlurX = f->BlurX;
  this->Filter.BlurY = f->BlurY;
  this->Filter.BlurStrength = f->BlurStrength;
  Scaleform::Render::BlurFilterParams::operator=(&this->Filter.ShadowParams, &f->ShadowParams);
  this->Filter.ShadowFlags = f->ShadowFlags;
  this->Filter.ShadowAngle = f->ShadowAngle;
  this->Filter.ShadowDistance = f->ShadowDistance;
  this->Filter.ShadowAlpha = f->ShadowAlpha;
  Scaleform::GFx::StaticTextCharacter::RecreateVisibleTextLayout(this);
}

void __fastcall Scaleform::GFx::StaticTextSnapshotData::Visit(
        Scaleform::GFx::StaticTextSnapshotData *this,
        Scaleform::GFx::StaticTextSnapshotData::GlyphVisitor *pvisitor,
        unsigned __int64 start,
        unsigned __int64 end)
{
  Scaleform::GFx::StaticTextSnapshotData *v4; // rax
  unsigned __int64 v6; // rsi
  __int64 v7; // r14
  float v8; // xmm8_4
  _QWORD *v9; // rbx
  float *v10; // rax
  _QWORD *v11; // rcx
  __int64 v12; // r13
  float v13; // xmm11_4
  float v14; // xmm12_4
  Scaleform::Render::Text::LineBuffer::Line *v16; // r14
  unsigned __int64 v17; // r12
  int Leading; // eax
  float v19; // xmm10_4
  unsigned int GlyphsCount; // er15
  __int64 v21; // rbx
  Scaleform::Render::Text::LineBuffer::FormatDataEntry *FormatData; // rax
  Scaleform::Render::Font *pObject; // r14
  unsigned int ColorV; // eax
  Scaleform::Render::Text::LineBuffer::GlyphEntry *pGlyphs; // rbx
  float v26; // xmm0_4
  float v27; // xmm0_4
  float v28; // xmm6_4
  float v29; // xmm7_4
  float v30; // xmm0_4
  float v31; // xmm3_4
  float v32; // xmm2_4
  float v33; // xmm0_4
  float v34; // xmm3_4
  float v35; // xmm1_4
  float v36; // xmm0_4
  float v37; // xmm1_4
  unsigned __int16 Index; // ax
  __int64 v39; // rdx
  int Advance; // eax
  bool v41; // zf
  unsigned int v42; // [rsp+28h] [rbp-E0h]
  __int64 v43; // [rsp+30h] [rbp-D8h]
  unsigned __int64 Size; // [rsp+38h] [rbp-D0h]
  float *v48; // [rsp+58h] [rbp-B0h]
  _QWORD *v49; // [rsp+60h] [rbp-A8h]
  Scaleform::Render::Text::LineBuffer::GlyphIterator v50; // [rsp+68h] [rbp-A0h] BYREF
  Scaleform::Render::Matrix2x4<float> v51; // [rsp+108h] [rbp+0h] BYREF
  Scaleform::Render::Rect<float> pr; // [rsp+128h] [rbp+20h] BYREF
  Scaleform::Render::Matrix2x4<float> m; // [rsp+138h] [rbp+30h] BYREF
  Scaleform::Render::Rect<float> r; // [rsp+158h] [rbp+50h] BYREF

  if ( pvisitor )
  {
    v4 = this;
    v6 = 0i64;
    Size = this->StaticTextCharRefs.Data.Size;
    if ( Size )
    {
      v7 = 0i64;
      v43 = 0i64;
      do
      {
        v8 = 0.0;
        v9 = *(Scaleform::GFx::StaticTextCharacter **)((char *)&v4->StaticTextCharRefs.Data.Data->pChar.pObject + v7);
        v10 = (float *)(*(__int64 (__fastcall **)(_QWORD *))(*v9 + 16i64))(v9);
        v11 = v9 + 24;
        v48 = v10;
        v49 = v9 + 24;
        v12 = 0i64;
        v13 = (float)((float)(v10[1] * 0.0) + (float)(*v10 * 0.0)) + v10[3];
        v14 = (float)((float)(v10[5] * 0.0) + (float)(v10[4] * 0.0)) + v10[7];
LABEL_5:
        v42 = v12;
        while ( v11 && (unsigned __int64)(unsigned int)v12 < v11[1] && (int)v12 >= 0 )
        {
          v16 = *(Scaleform::Render::Text::LineBuffer::Line **)(*v11 + 8 * v12);
          v17 = 0i64;
          v8 = fminf((float)v16->Data32.OffsetX, v8);
          if ( (v16->MemSize & 0x80000000) == 0 )
            Leading = v16->Data32.Leading;
          else
            Leading = v16->Data8.Leading;
          v19 = (float)(v16->Data32.OffsetY + Leading);
          if ( (v16->MemSize & 0x80000000) == 0 )
            GlyphsCount = v16->Data32.GlyphsCount;
          else
            GlyphsCount = v16->Data8.GlyphsCount;
          v21 = 42i64;
          if ( (v16->MemSize & 0x80000000) != 0 )
            v21 = 30i64;
          FormatData = Scaleform::Render::Text::LineBuffer::Line::GetFormatData(v16);
          memset(&v50.HighlighterIter, 0, 24);
          v50.pGlyphs = (Scaleform::Render::Text::LineBuffer::GlyphEntry *)((char *)v16 + v21);
          v50.HighlighterIter.CurDesc.StartPos = -1i64;
          v50.pEndGlyphs = (Scaleform::Render::Text::LineBuffer::GlyphEntry *)((char *)v16 + 8 * GlyphsCount + v21);
          v50.HighlighterIter.CurDesc.Length = 0i64;
          v50.HighlighterIter.CurDesc.Offset = -1i64;
          memset(&v50.HighlighterIter.CurDesc.AdjStartPos, 0, 33);
          memset(&v50.ColorV, 0, 40);
          v50.pNextFormatData = FormatData;
          Scaleform::Render::Text::LineBuffer::GlyphIterator::UpdateDesc(&v50);
          if ( v50.pFontHandle.pObject )
            pObject = v50.pFontHandle.pObject->pFont.pObject;
          else
            pObject = 0i64;
          ColorV = v50.ColorV;
          pvisitor->pFont = pObject;
          pvisitor->ColorValue.Raw = ColorV;
          while ( 1 )
          {
            pGlyphs = v50.pGlyphs;
            if ( !v50.pGlyphs || v50.pGlyphs >= v50.pEndGlyphs )
              break;
            if ( v6 >= start && v6 < end )
            {
              pvisitor->RunIdx = v17;
              v26 = (float)(pGlyphs->LenAndFontSize & 0xFFF);
              if ( (pGlyphs->Flags & 0x10) != 0 )
                v26 = v26 * 0.0625;
              pvisitor->Height = v26;
              *(_OWORD *)&v51.M[0][0] = _xmm;
              v27 = v48[4];
              *(_OWORD *)&v51.M[1][0] = _xmm;
              v28 = atan2f(v27, *v48);
              v29 = cosf(v28);
              v30 = sinf(v28);
              m.M[0][0] = v29;
              *(_OWORD *)&m.M[1][0] = __PAIR64__(LODWORD(v29), LODWORD(v30));
              LODWORD(m.M[0][1]) = LODWORD(v30) ^ _xmm;
              *(_QWORD *)&m.M[0][2] = 0i64;
              Scaleform::Render::Matrix2x4<float>::Append(&v51, &m);
              v31 = v51.M[1][3];
              v32 = v51.M[0][3] + (float)(v13 + v8);
              pvisitor->Matrix.M[0][0] = v51.M[0][0];
              v33 = v51.M[0][2];
              v34 = v31 + (float)(v14 + v19);
              pvisitor->Matrix.M[0][1] = v51.M[0][1];
              v35 = v51.M[1][0];
              pvisitor->Matrix.M[0][2] = v33;
              v36 = v51.M[1][1];
              pvisitor->Matrix.M[0][3] = v32;
              pvisitor->Matrix.M[1][0] = v35;
              v37 = v51.M[1][2];
              pvisitor->Matrix.M[1][1] = v36;
              pvisitor->Matrix.M[1][2] = v37;
              pvisitor->Matrix.M[1][3] = v34;
              Index = pGlyphs->Index;
              v51.M[0][3] = v32;
              v51.M[1][3] = v34;
              r = 0i64;
              if ( Index == 0xFFFF )
                v39 = 0xFFFFFFFFi64;
              else
                v39 = Index;
              pObject->GetGlyphBounds(pObject, v39, &r);
              Scaleform::Render::Matrix2x4<float>::EncloseTransform(&v51, &pr, &r);
              pvisitor->Corners = pr;
              pvisitor->bSelected = Scaleform::GFx::StaticTextSnapshotData::IsSelected(this, v6, v6 + 1);
              pvisitor->OnVisit(pvisitor);
              ++v17;
            }
            Advance = pGlyphs->Advance;
            if ( (pGlyphs->Flags & 0x40) != 0 )
              Advance = -Advance;
            ++v6;
            v8 = v8 + (float)Advance;
            Scaleform::Render::Text::LineBuffer::GlyphIterator::operator++(&v50);
          }
          v12 = v42;
          if ( v50.pImage.pObject )
            Scaleform::RefCountNTSImpl::Release(v50.pImage.pObject);
          if ( v50.pFontHandle.pObject )
            Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v50.pFontHandle.pObject);
          v11 = v49;
          if ( (unsigned __int64)v42 < v49[1] )
          {
            v12 = v42 + 1;
            goto LABEL_5;
          }
        }
        v4 = this;
        v7 = v43 + 16;
        v41 = Size-- == 1;
        v43 += 16i64;
      }
      while ( !v41 );
    }
  }
}

