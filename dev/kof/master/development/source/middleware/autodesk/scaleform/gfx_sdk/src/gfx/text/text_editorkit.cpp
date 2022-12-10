#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_constants.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_sgmlparser.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_vertex.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_image.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textmeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessdefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_queue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitive.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocaddr.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_radixtree.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_characterdef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "program files (x86)/windows kits/8.1/include/um/propidl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_twips.h"
#include "program files (x86)/windows kits/8.1/include/um/winbase.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asutils.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_moviedef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_filterdesc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_loaderimpl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_resourcehandle.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filters.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_stream.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filterparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_loader.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_system.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_gradients.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessgen.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatapacked.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessellator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_pathdatapacker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textlayout.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphfitter.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treenode.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_viewport.h"
#include "program files (x86)/windows kits/8.1/include/shared/stralign.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_imagecreator.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_stroker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/tga_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_fontmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_autoptr.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_font.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_hash.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_drawableimage.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_buffer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cxform.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hairliner.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_scale9grid.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraystaticbuff.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/jpeg_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefileutil.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asmovierootbase.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_player.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hal.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_types.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threadcheck.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_event.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_keycodes.h"
#include "program files (x86)/windows kits/8.1/include/shared/winerror.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_charposinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_resource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_streamcontext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_linebuffer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraypaged.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphparam.h"
#include "program files (x86)/windows kits/8.1/include/shared/guiddef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_taskmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixstate.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_styledtext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_core.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "program files (x86)/windows kits/8.1/include/um/oleauto.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_wwhelper.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_highlight.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "program files (x86)/windows kits/8.1/include/um/winnt.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_states.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_statebag.h"
#include "program files (x86)/windows kits/8.1/include/shared/basetsd.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_context.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_strokeraa.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_containers.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixpool.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_input.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_fontresource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_interactiveobject.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_imageresource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_displayobject.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_profiler.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_log.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/text/text_editorkit.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_docview.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_range.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshkey.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix4x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_rasterizer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix3x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_assoundintf.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_point3.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "program files (x86)/windows kits/8.1/include/um/winuser.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_fontcompactor.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_pathdatastorage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_fontlib.h"

Scaleform::GFx::Text::EditorKit::EditorKit(Scaleform::Render::Text::DocView * pdocview); // 0x140429340
Scaleform::GFx::Text::EditorKit::~EditorKit(); // 0x1404294B0
void Scaleform::GFx::Text::EditorKit::SetCursorPos(unsigned long long pos, bool selectionAllowed); // 0x14042C4A0
unsigned long long Scaleform::GFx::Text::EditorKit::GetCursorPos(); // 0x1403D6F90
void Scaleform::GFx::Text::EditorKit::Advance(double timer); // 0x140429900
bool Scaleform::GFx::Text::EditorKit::CalcCursorRectInLineBuffer(unsigned long long charIndex, Scaleform::Render::Rect<float> * pcursorRect, unsigned long * plineIndex, unsigned long * pglyphIndex, bool avoidComposStr, Scaleform::Render::Text::LineBuffer::Line::Alignment * plineAlignment); // 0x140429A90
bool Scaleform::GFx::Text::EditorKit::CalcCursorRectOnScreen(unsigned long long charIndex, Scaleform::Render::Rect<float> * pcursorRect, unsigned long * plineIndex, unsigned long * pglyphIndex, bool avoidComposStr, Scaleform::Render::Text::LineBuffer::Line::Alignment * plineAlignment); // 0x140429D80
const Scaleform::Render::Text::LineBuffer::GlyphEntry * Scaleform::GFx::Text::EditorKit::GetGlyphEntryAtIndex(unsigned long long charIndex, unsigned long long * ptextPos); // 0x14042A560
void Scaleform::GFx::Text::EditorKit::UpdateWideCursor(); // 0x14042CCA0
void Scaleform::GFx::Text::EditorKit::AddDrawCursorInfo(Scaleform::Render::TextLayout::Builder & bld); // 0x1404295F0
void Scaleform::GFx::Text::EditorKit::ResetBlink(bool state, bool blocked); // 0x14042C170
bool Scaleform::GFx::Text::EditorKit::ScrollToPosition(unsigned long long pos, bool avoidComposStr, bool wideCursor); // 0x14042C2C0
void Scaleform::GFx::Text::EditorKit::OnMouseDown(float x, float y, long buttons); // 0x14042B450
void Scaleform::GFx::Text::EditorKit::OnMouseUp(float x, float y, long buttons); // 0x14042B8A0
void Scaleform::GFx::Text::EditorKit::OnMouseMove(float x, float y); // 0x14042B7D0
bool Scaleform::GFx::Text::EditorKit::OnKeyUp(long keyCode, const Scaleform::KeyModifiers & specKeysState); // 0x14042B3C0
bool Scaleform::GFx::Text::EditorKit::OnKeyDown(long keyCode, const Scaleform::KeyModifiers & specKeysState); // 0x14042ACD0
bool Scaleform::GFx::Text::EditorKit::OnChar(unsigned long wcharCode); // 0x14042A980
void Scaleform::GFx::Text::EditorKit::OnDocumentChanged(unsigned long notifyMask); // 0x14042AC50
void Scaleform::GFx::Text::EditorKit::OnSetFocus(); // 0x14042B8C0
void Scaleform::GFx::Text::EditorKit::OnKillFocus(); // 0x14042B410
void Scaleform::GFx::Text::EditorKit::SetSelection(unsigned long long startPos, unsigned long long endPos); // 0x14042CB80
void Scaleform::GFx::Text::EditorKit::CopyToClipboard(unsigned long long startPos, unsigned long long endPos, bool useRichClipboard); // 0x14042A2D0
void Scaleform::GFx::Text::EditorKit::CutToClipboard(unsigned long long startPos, unsigned long long endPos, bool useRichClipboard); // 0x14042A3D0
unsigned long long Scaleform::GFx::Text::EditorKit::PasteFromClipboard(unsigned long long startPos, unsigned long long endPos, bool useRichClipboard); // 0x14042BAE0
void Scaleform::GFx::Text::EditorKit::InvalidateSelectionColors(); // 0x14042A8B0
unsigned long long Scaleform::GFx::Text::EditorKit::TextPos2GlyphOffset(unsigned long long textPos); // 0x14042CC00
unsigned long long Scaleform::GFx::Text::EditorKit::TextPos2GlyphPos(unsigned long long textPos); // 0x14042CC50
unsigned long long Scaleform::GFx::Text::EditorKit::GlyphPos2TextPos(unsigned long long glyphPos); // 0x14042A760
bool Scaleform::GFx::Text::EditorKit::ParseRestrict(const char * restrStr, unsigned long long restrStrLen); // 0x14042B900
bool Scaleform::GFx::Text::EditorKit::SetRestrict(const Scaleform::String & restrStr); // 0x14042CB20
const Scaleform::String * Scaleform::GFx::Text::EditorKit::GetRestrict(); // 0x14042A750
void Scaleform::GFx::Text::EditorKit::ClearRestrict(); // 0x14042A230void __fastcall Scaleform::GFx::Text::EditorKit::EditorKit(
        Scaleform::GFx::Text::EditorKit *this,
        Scaleform::Render::Text::DocView *pdocview)
{
  Scaleform::RefCountVImpl *pObject; // rcx

  this->__vftable = (Scaleform::GFx::Text::EditorKit_vtbl *)&Scaleform::RefCountImplCore::`vftable';
  this->__vftable = (Scaleform::GFx::Text::EditorKit_vtbl *)&Scaleform::GFx::Text::EditorKit::`vftable';
  this->RefCount = 1;
  if ( pdocview )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)pdocview);
  this->pDocView.pObject = pdocview;
  this->pClipboard.pObject = 0i64;
  this->pKeyMap.pObject = 0i64;
  this->pComposStr.pObject = 0i64;
  this->pRestrict.pObject = 0i64;
  this->pRestrict.Owner = 1;
  this->CursorRect.FormatCounter = 0;
  this->Flags = 0;
  this->CursorTimer = 0.0;
  this->CursorPos = 0i64;
  this->CursorColor.Raw = -16777216;
  this->LastAdvanceTime = 0.0;
  this->LastHorizCursorPos = -1.0;
  this->LastClickTime = 0;
  *(_QWORD *)&this->CursorRect.Value.x1 = 0i64;
  *(_QWORD *)&this->CursorRect.Value.x2 = 0i64;
  *(_QWORD *)&this->ActiveSelectionBkColor = -16777216i64;
  *(_QWORD *)&this->InactiveSelectionBkColor = -8355712i64;
  Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)this);
  pObject = (Scaleform::RefCountVImpl *)pdocview->pEditorKit.pObject;
  if ( pObject )
    Scaleform::RefCountImpl::Release(pObject);
  pdocview->pEditorKit.pObject = this;
}

void __fastcall Scaleform::AutoPtr<Scaleform::GFx::Text::EditorKit::RestrictParams>::~AutoPtr<Scaleform::GFx::Text::EditorKit::RestrictParams>(
        Scaleform::AutoPtr<Scaleform::GFx::Text::EditorKit::RestrictParams> *this)
{
  Scaleform::GFx::Text::EditorKit::RestrictParams *pObject; // rsi
  volatile int *v3; // rbx

  pObject = this->pObject;
  if ( this->pObject )
  {
    if ( this->Owner )
    {
      this->Owner = 0;
      v3 = (volatile int *)(pObject->RestrictString.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
      if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(v3 + 2, -1) == 1 )
        Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, (void *)v3);
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, pObject->RestrictRanges.Ranges.Data.Data);
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, pObject);
    }
    this->pObject = 0i64;
    this->Owner = 0;
  }
  else
  {
    this->Owner = 0;
  }
}

void __fastcall Scaleform::GFx::Text::EditorKit::~EditorKit(Scaleform::GFx::Text::EditorKit *this)
{
  Scaleform::RefCountVImpl *pObject; // rcx
  Scaleform::RefCountVImpl *v3; // rcx
  Scaleform::RefCountVImpl *v4; // rcx
  Scaleform::Render::Text::DocView *v5; // rcx

  this->__vftable = (Scaleform::GFx::Text::EditorKit_vtbl *)&Scaleform::GFx::Text::EditorKit::`vftable';
  Scaleform::AutoPtr<Scaleform::GFx::Text::EditorKit::RestrictParams>::~AutoPtr<Scaleform::GFx::Text::EditorKit::RestrictParams>(&this->pRestrict);
  pObject = (Scaleform::RefCountVImpl *)this->pComposStr.pObject;
  if ( pObject )
    Scaleform::RefCountImpl::Release(pObject);
  v3 = (Scaleform::RefCountVImpl *)this->pKeyMap.pObject;
  if ( v3 )
    Scaleform::RefCountImpl::Release(v3);
  v4 = (Scaleform::RefCountVImpl *)this->pClipboard.pObject;
  if ( v4 )
    Scaleform::RefCountImpl::Release(v4);
  v5 = this->pDocView.pObject;
  if ( v5 )
    Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v5);
  this->__vftable = (Scaleform::GFx::Text::EditorKit_vtbl *)&Scaleform::Render::RenderBufferManager::`vftable';
  Scaleform::RefCountImplCore::~RefCountImplCore(this);
}

void __fastcall Scaleform::GFx::Text::EditorKit::AddDrawCursorInfo(
        Scaleform::GFx::Text::EditorKit *this,
        Scaleform::Render::TextLayout::Builder *bld)
{
  unsigned __int16 Flags; // cx
  unsigned int LineIndexOfChar; // esi
  unsigned __int16 FormatCounter; // cx
  Scaleform::GFx::Text::EditorKit_vtbl *v7; // rax
  unsigned __int64 CursorPos; // rdi
  float x1; // xmm6_4
  float v10; // xmm7_4
  Scaleform::Render::Text::TextFormat *pObject; // rax
  Scaleform::Render::Text::DocView::HighlightDescLoc *pHighlight; // rcx
  float y1; // xmm0_4
  float y2; // xmm1_4
  unsigned __int16 v15; // cx
  Scaleform::Render::Text::DocView *v16; // rdi
  float HScrollOffset; // xmm6_4
  int VScrollOffsetInFixp; // eax
  float v19; // xmm6_4
  float v20; // xmm1_4
  float v21; // xmm1_4
  float v22; // xmm0_4
  float v23; // xmm3_4
  float v24; // xmm2_4
  float x2; // xmm5_4
  float v26; // xmm4_4
  bool IsLineVisible; // al
  unsigned int Raw; // er8
  unsigned int plineIndex[4]; // [rsp+40h] [rbp-C0h] BYREF
  Scaleform::Render::Rect<float> pcursorRect; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int pglyphIndex[4]; // [rsp+60h] [rbp-A0h] BYREF
  Scaleform::Render::Text::HighlighterPosIterator result; // [rsp+70h] [rbp-90h] BYREF
  Scaleform::Render::Rect<float> r; // [rsp+D0h] [rbp-30h] BYREF

  if ( !this->IsReadOnly(this) )
  {
    Flags = this->Flags;
    if ( (Flags & 0x400) != 0 )
    {
      if ( (Flags & 0x100) != 0 )
      {
        Scaleform::GFx::Text::EditorKit::UpdateWideCursor(this);
      }
      else if ( (Flags & 8) != 0 )
      {
        LineIndexOfChar = -1;
        FormatCounter = this->pDocView.pObject->FormatCounter;
        plineIndex[0] = -1;
        if ( this->CursorRect.FormatCounter != FormatCounter )
        {
          v7 = this->__vftable;
          CursorPos = this->CursorPos;
          pcursorRect = 0i64;
          if ( v7->HasCompositionString(this) )
            CursorPos += this->pComposStr.pObject->CursorPos;
          if ( Scaleform::GFx::Text::EditorKit::CalcCursorRectInLineBuffer(
                 this,
                 CursorPos,
                 &pcursorRect,
                 plineIndex,
                 pglyphIndex,
                 0,
                 0i64) )
          {
            x1 = pcursorRect.x1;
            v10 = pcursorRect.x1;
            pObject = this->pDocView.pObject->pDocument.pObject->pDefaultTextFormat.pObject;
            if ( pObject && (pObject->PresentMask & 1) != 0 )
              this->CursorColor.Raw = pObject->ColorV;
            pHighlight = this->pDocView.pObject->pHighlight;
            if ( pHighlight )
            {
              Scaleform::Render::Text::Highlighter::GetPosIterator(
                &pHighlight->HighlightManager,
                &result,
                this->CursorPos,
                0xFFFFFFFFFFFFFFFFui64);
              if ( (result.CurDesc.Info.Flags & 0x10) != 0 )
                this->CursorColor.Raw = result.CurDesc.Info.TextColor.Raw;
            }
          }
          else
          {
            pcursorRect = 0i64;
            v10 = 0.0;
            x1 = 0.0;
          }
          y1 = pcursorRect.y1;
          y2 = pcursorRect.y2;
          LineIndexOfChar = plineIndex[0];
          v15 = this->pDocView.pObject->FormatCounter;
          this->CursorRect.Value.x2 = v10;
          this->CursorRect.Value.x1 = x1;
          this->CursorRect.Value.y1 = y1;
          this->CursorRect.Value.y2 = y2;
          this->CursorRect.FormatCounter = v15;
        }
        v16 = this->pDocView.pObject;
        r = this->CursorRect.Value;
        HScrollOffset = (float)(int)v16->mLineBuffer.Geom.HScrollOffset;
        VScrollOffsetInFixp = Scaleform::Render::Text::LineBuffer::GetVScrollOffsetInFixp(&v16->mLineBuffer);
        LODWORD(v19) = LODWORD(HScrollOffset) ^ _xmm;
        r.x1 = r.x1 + v19;
        r.x2 = r.x2 + v19;
        LODWORD(v20) = COERCE_UNSIGNED_INT((float)VScrollOffsetInFixp) ^ _xmm;
        r.y1 = r.y1 + v20;
        r.y2 = r.y2 + v20;
        v21 = v16->mLineBuffer.Geom.VisibleRect.y1;
        v22 = v16->mLineBuffer.Geom.VisibleRect.x1;
        v23 = r.y2 + v21;
        v24 = r.x1 + v22;
        x2 = r.x2 + v22;
        v26 = r.y1 + v21;
        r.y2 = v23;
        r.x1 = r.x1 + v22;
        r.x2 = r.x2 + v22;
        r.y1 = r.y1 + v21;
        if ( v23 > v16->mLineBuffer.Geom.VisibleRect.y2 )
        {
          if ( LineIndexOfChar == -1 )
            LineIndexOfChar = Scaleform::Render::Text::DocView::GetLineIndexOfChar(
                                this->pDocView.pObject,
                                this->CursorPos);
          IsLineVisible = Scaleform::Render::Text::LineBuffer::IsLineVisible(
                            &this->pDocView.pObject->mLineBuffer,
                            LineIndexOfChar);
          x2 = r.x2;
          v26 = r.y1;
          v24 = r.x1;
          if ( IsLineVisible )
          {
            v23 = v16->mLineBuffer.Geom.VisibleRect.y2;
            r.y2 = v23;
          }
          else
          {
            v23 = r.y2;
          }
        }
        if ( v16->mLineBuffer.Geom.VisibleRect.x2 >= x2
          && v16->mLineBuffer.Geom.VisibleRect.y2 >= v23
          && v24 >= v16->mLineBuffer.Geom.VisibleRect.x1
          && v26 >= v16->mLineBuffer.Geom.VisibleRect.y1 )
        {
          Raw = this->CursorColor.Raw;
          r.x2 = v24 + 20.0;
          Scaleform::Render::TextLayout::Builder::AddCursor(bld, &r, Raw);
        }
      }
    }
  }
}

void __fastcall Scaleform::GFx::Text::EditorKit::Advance(Scaleform::GFx::Text::EditorKit *this, long double timer)
{
  Scaleform::GFx::Text::EditorKit_vtbl *v2; // rax
  double v4; // xmm6_8
  double v5; // xmm6_8
  unsigned __int16 Flags; // cx
  unsigned __int16 v7; // cx
  Scaleform::Render::Text::DocView *pObject; // rax
  Scaleform::Render::Text::DocView::DocumentListener *v9; // rcx
  const Scaleform::Render::Rect<float> *ViewRect; // rax
  float y; // xmm2_4
  Scaleform::Render::Text::DocView *v12; // rcx
  unsigned int FirstVisibleLinePos; // edx
  unsigned __int64 v14; // rax
  unsigned int v15; // edi
  unsigned __int64 CursorPosInLine; // rax

  v2 = this->__vftable;
  v4 = timer - this->LastAdvanceTime;
  this->LastAdvanceTime = timer;
  if ( !((unsigned __int8 (*)(void))v2->IsReadOnly)() )
  {
    v5 = v4 + this->CursorTimer;
    if ( v5 <= 0.5 )
    {
      this->CursorTimer = v5;
    }
    else
    {
      Flags = this->Flags;
      if ( (Flags & 0x10) == 0 )
      {
        v7 = (Flags & 8) != 0 ? Flags & 0xFFF7 : Flags | 8;
        pObject = this->pDocView.pObject;
        this->Flags = v7;
        v9 = pObject->pDocumentListener.pObject;
        if ( v9 )
          v9->Editor_OnCursorBlink(v9, this, (this->Flags & 8) != 0);
      }
      this->CursorTimer = 0.0;
      this->Flags &= ~0x10u;
    }
  }
  if ( (this->Flags & 0x20) != 0 )
  {
    ViewRect = Scaleform::Render::Text::DocView::GetViewRect(this->pDocView.pObject);
    y = this->LastMousePos.y;
    v12 = this->pDocView.pObject;
    if ( ViewRect->y1 < y )
    {
      if ( this->LastMousePos.y >= Scaleform::Render::Text::DocView::GetViewRect(v12)->y2 )
      {
        v15 = Scaleform::Render::Text::DocView::GetBottomVScroll(this->pDocView.pObject) + 1;
        if ( v15 < Scaleform::Render::Text::DocView::GetLinesCount(this->pDocView.pObject) )
        {
          CursorPosInLine = Scaleform::Render::Text::DocView::GetCursorPosInLine(
                              this->pDocView.pObject,
                              v15,
                              this->LastMousePos.y);
          if ( CursorPosInLine != this->CursorPos )
            Scaleform::GFx::Text::EditorKit::SetCursorPos(this, CursorPosInLine, (this->Flags & 2) != 0);
        }
      }
    }
    else
    {
      FirstVisibleLinePos = v12->mLineBuffer.Geom.FirstVisibleLinePos;
      if ( FirstVisibleLinePos )
      {
        v14 = Scaleform::Render::Text::DocView::GetCursorPosInLine(v12, FirstVisibleLinePos - 1, y);
        if ( v14 != this->CursorPos )
          Scaleform::GFx::Text::EditorKit::SetCursorPos(this, v14, (this->Flags & 2) != 0);
      }
    }
  }
}

char __fastcall Scaleform::GFx::Text::EditorKit::CalcCursorRectInLineBuffer(
        Scaleform::GFx::Text::EditorKit *this,
        unsigned __int64 charIndex,
        Scaleform::Render::Rect<float> *pcursorRect,
        unsigned int *plineIndex,
        unsigned int *pglyphIndex,
        bool avoidComposStr,
        Scaleform::Render::Text::LineBuffer::Line::Alignment *plineAlignment)
{
  unsigned int LineIndexOfChar; // eax
  Scaleform::Render::Text::LineBuffer::Line *v11; // r14
  __int64 TextPos; // rax
  unsigned int v13; // edi
  unsigned __int64 v14; // r12
  int v15; // esi
  unsigned int GlyphsCount; // er15
  __int64 v17; // rbx
  unsigned int i; // ebx
  Scaleform::Render::Text::LineBuffer::GlyphEntry *pGlyphs; // rcx
  Scaleform::Render::Text::LineBuffer::GlyphEntry *pEndGlyphs; // r8
  unsigned __int16 Flags; // dx
  int Advance; // eax
  unsigned __int16 v23; // dx
  int v24; // eax
  float v25; // xmm3_4
  int v26; // eax
  float v27; // xmm2_4
  float OffsetY; // xmm1_4
  int Height; // eax
  Scaleform::Render::Text::LineBuffer::GlyphIterator v31; // [rsp+20h] [rbp-91h] BYREF
  unsigned int v32; // [rsp+100h] [rbp+4Fh]

  Scaleform::Render::Text::DocView::ForceReformat(this->pDocView.pObject);
  LineIndexOfChar = Scaleform::Render::Text::DocView::GetLineIndexOfChar(this->pDocView.pObject, charIndex);
  v32 = LineIndexOfChar;
  if ( LineIndexOfChar == -1 )
    return 0;
  v11 = this->pDocView.pObject->mLineBuffer.Lines.Data.Data[LineIndexOfChar];
  if ( plineAlignment )
    *plineAlignment = (v11->MemSize >> 27) & 3;
  if ( (v11->MemSize & 0x80000000) == 0 )
  {
    TextPos = v11->Data32.TextPos;
  }
  else
  {
    TextPos = v11->Data32.TextPos & 0xFFFFFF;
    if ( (_DWORD)TextPos == 0xFFFFFF )
      TextPos = 0xFFFFFFFFi64;
  }
  v13 = 0;
  v14 = charIndex - TextPos;
  v15 = 0;
  if ( (v11->MemSize & 0x80000000) == 0 )
    GlyphsCount = v11->Data32.GlyphsCount;
  else
    GlyphsCount = v11->Data8.GlyphsCount;
  v17 = 42i64;
  if ( (v11->MemSize & 0x80000000) != 0 )
    v17 = 30i64;
  memset(&v31.HighlighterIter, 0, 24);
  v31.pGlyphs = (Scaleform::Render::Text::LineBuffer::GlyphEntry *)((char *)v11 + v17);
  v31.HighlighterIter.CurDesc.StartPos = -1i64;
  v31.pEndGlyphs = (Scaleform::Render::Text::LineBuffer::GlyphEntry *)((char *)v11 + 8 * GlyphsCount + v17);
  v31.HighlighterIter.CurDesc.Length = 0i64;
  v31.HighlighterIter.CurDesc.Offset = -1i64;
  memset(&v31.HighlighterIter.CurDesc.AdjStartPos, 0, 33);
  memset(&v31.ColorV, 0, 40);
  v31.pNextFormatData = Scaleform::Render::Text::LineBuffer::Line::GetFormatData(v11);
  Scaleform::Render::Text::LineBuffer::GlyphIterator::UpdateDesc(&v31);
  for ( i = 0; ; ++i )
  {
    pGlyphs = v31.pGlyphs;
    pEndGlyphs = v31.pEndGlyphs;
    if ( !v31.pGlyphs )
      break;
    if ( v31.pGlyphs >= v31.pEndGlyphs )
      break;
    if ( v31.pGlyphs->LenAndFontSize >= 0x1000u )
      break;
    Flags = v31.pGlyphs->Flags;
    if ( (Flags & 0x100) != 0 )
      break;
    Advance = v31.pGlyphs->Advance;
    if ( (Flags & 0x40) != 0 )
      Advance = -Advance;
    v15 += Advance;
    Scaleform::Render::Text::LineBuffer::GlyphIterator::operator++(&v31);
  }
  if ( v14 )
  {
    do
    {
      if ( !pGlyphs || pGlyphs >= pEndGlyphs )
        break;
      v23 = pGlyphs->Flags;
      v24 = pGlyphs->Advance;
      if ( (v23 & 0x40) != 0 )
        v24 = -v24;
      v15 += v24;
      if ( !avoidComposStr || (v23 & 4) == 0 )
        v13 += pGlyphs->LenAndFontSize >> 12;
      ++i;
      Scaleform::Render::Text::LineBuffer::GlyphIterator::operator++(&v31);
      pEndGlyphs = v31.pEndGlyphs;
      pGlyphs = v31.pGlyphs;
    }
    while ( v13 < v14 );
  }
  v25 = 0.0;
  if ( pGlyphs && pGlyphs < pEndGlyphs )
  {
    v26 = pGlyphs->Advance;
    if ( (pGlyphs->Flags & 0x40) != 0 )
      v26 = -v26;
    v25 = (float)v26;
  }
  v27 = (float)v11->Data32.OffsetX + (float)v15;
  pcursorRect->x1 = v27;
  OffsetY = (float)v11->Data32.OffsetY;
  pcursorRect->x2 = v25 + v27;
  pcursorRect->y1 = OffsetY;
  if ( (v11->MemSize & 0x80000000) == 0 )
    Height = v11->Data32.Height;
  else
    Height = v11->Data8.Height;
  pcursorRect->y2 = (float)Height + OffsetY;
  if ( plineIndex )
    *plineIndex = v32;
  if ( pglyphIndex )
    *pglyphIndex = i;
  if ( v31.pImage.pObject )
    Scaleform::RefCountNTSImpl::Release(v31.pImage.pObject);
  if ( v31.pFontHandle.pObject )
    Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v31.pFontHandle.pObject);
  return 1;
}

__int64 __fastcall Scaleform::GFx::Text::EditorKit::CalcCursorRectOnScreen(
        Scaleform::GFx::Text::EditorKit *this,
        unsigned __int64 charIndex,
        Scaleform::Render::Rect<float> *pcursorRect,
        unsigned int *plineIndex,
        unsigned int *pglyphIndex,
        bool avoidComposStr,
        Scaleform::Render::Text::LineBuffer::Line::Alignment *plineAlignment)
{
  unsigned __int8 v9; // si
  Scaleform::Render::Text::DocView *pObject; // rcx
  int HScrollOffset; // ebx
  int VScrollOffsetInFixp; // eax
  float v13; // xmm1_4
  float v14; // xmm0_4
  float v15; // xmm2_4
  float v16; // xmm1_4
  float v17; // xmm0_4
  float v18; // xmm2_4
  const Scaleform::Render::Rect<float> *ViewRect; // rax
  Scaleform::Render::Text::DocView *v20; // rcx
  float v21; // xmm4_4
  float v22; // xmm5_4
  float v23; // xmm2_4
  float v24; // xmm3_4
  float y1; // xmm1_4
  float x1; // xmm0_4

  v9 = Scaleform::GFx::Text::EditorKit::CalcCursorRectInLineBuffer(
         this,
         charIndex,
         pcursorRect,
         plineIndex,
         pglyphIndex,
         avoidComposStr,
         plineAlignment);
  if ( v9 )
  {
    pObject = this->pDocView.pObject;
    HScrollOffset = pObject->mLineBuffer.Geom.HScrollOffset;
    VScrollOffsetInFixp = Scaleform::Render::Text::LineBuffer::GetVScrollOffsetInFixp(&pObject->mLineBuffer);
    LODWORD(v13) = COERCE_UNSIGNED_INT((float)HScrollOffset) ^ _xmm;
    v14 = v13 + pcursorRect->x1;
    LODWORD(v15) = COERCE_UNSIGNED_INT((float)VScrollOffsetInFixp) ^ _xmm;
    v16 = v13 + pcursorRect->x2;
    pcursorRect->x1 = v14;
    v17 = v15 + pcursorRect->y1;
    v18 = v15 + pcursorRect->y2;
    pcursorRect->x2 = v16;
    pcursorRect->y1 = v17;
    pcursorRect->y2 = v18;
    ViewRect = Scaleform::Render::Text::DocView::GetViewRect(this->pDocView.pObject);
    v20 = this->pDocView.pObject;
    v21 = (float)(v20->mLineBuffer.Geom.VisibleRect.x1 - ViewRect->x1) + pcursorRect->x1;
    v22 = (float)(v20->mLineBuffer.Geom.VisibleRect.y1 - ViewRect->y1) + pcursorRect->y1;
    pcursorRect->x1 = v21;
    pcursorRect->y1 = v22;
    v23 = (float)(this->pDocView.pObject->mLineBuffer.Geom.VisibleRect.x1 - ViewRect->x1) + pcursorRect->x2;
    v24 = (float)(this->pDocView.pObject->mLineBuffer.Geom.VisibleRect.y1 - ViewRect->y1) + pcursorRect->y2;
    pcursorRect->x2 = v23;
    pcursorRect->y2 = v24;
    y1 = ViewRect->y1;
    x1 = ViewRect->x1;
    pcursorRect->y1 = v22 + y1;
    pcursorRect->x1 = v21 + x1;
    pcursorRect->x2 = v23 + x1;
    pcursorRect->y2 = v24 + y1;
  }
  return v9;
}

void __fastcall Scaleform::RangeDataArray<void *,Scaleform::ArrayLH<Scaleform::RangeData<void *>,2,Scaleform::ArrayDefaultPolicy>>::ClearRange(
        Scaleform::RangeDataArray<void *,Scaleform::ArrayLH<Scaleform::RangeData<void *>,2,Scaleform::ArrayDefaultPolicy> > *this,
        __int64 startPos,
        unsigned __int64 length)
{
  unsigned __int64 Size; // rbp
  __int64 NearestRangeIndex; // rax
  signed __int64 v8; // rbx
  signed __int64 v9; // r9
  Scaleform::RangeData<void *> *v10; // rdx
  signed __int64 v11; // rcx
  unsigned __int64 v12; // rax
  bool v13; // cc
  unsigned __int64 v14; // rbp
  __int64 Index; // r15
  void *Data; // r12
  signed __int64 v17; // rdx
  signed __int64 v18; // rax
  __int64 v19; // r15
  unsigned __int64 v20; // rbp
  unsigned __int64 v21; // r8
  Scaleform::RangeData<void *> *v22; // rdx
  unsigned __int64 v23; // rax
  signed __int64 v24; // rax
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // rax
  signed __int64 v28; // r15
  Scaleform::RangeData<void *> *v29; // r9
  unsigned __int64 v30; // rax
  signed __int64 v31; // r8
  Scaleform::RangeData<void *> *v32; // rdx
  signed __int64 v33; // rax
  signed __int64 v34; // rsi
  Scaleform::RangeDataArray<void *,Scaleform::ArrayLH<Scaleform::RangeData<void *>,2,Scaleform::ArrayDefaultPolicy> >::Iterator v35; // [rsp+20h] [rbp-28h] BYREF

  Size = this->Ranges.Data.Size;
  if ( !Size )
    return;
  NearestRangeIndex = Scaleform::RangeDataArray<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>,Scaleform::ArrayLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>>,2,Scaleform::ArrayDefaultPolicy>>::FindNearestRangeIndex(
                        (Scaleform::RangeDataArray<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>,Scaleform::ArrayLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> >,2,Scaleform::ArrayDefaultPolicy> > *)this,
                        startPos);
  v35.pArray = this;
  v8 = NearestRangeIndex;
  if ( NearestRangeIndex >= 0 )
  {
    if ( NearestRangeIndex < Size )
    {
      v35.Index = NearestRangeIndex;
    }
    else
    {
      v8 = Size - 1;
      v35.Index = Size - 1;
    }
  }
  else
  {
    v8 = 0i64;
    v35.Index = 0i64;
  }
  if ( length == -1i64 )
    length = 0x7FFFFFFFFFFFFFFFi64 - startPos;
  v9 = v8;
  v10 = &this->Ranges.Data.Data[v8];
  if ( startPos < v10->Index || (__int64)(startPos + length - 1) > (signed __int64)(v10->Length - 1 + v10->Index) )
  {
    if ( startPos < v10->Index || (v25 = v10->Length, startPos > (__int64)(v25 + v10->Index - 1)) )
    {
      v13 = v8 < (__int64)Size;
      goto LABEL_41;
    }
    v26 = v10->Length;
    v27 = v10->Index + v25 - startPos;
    if ( v27 <= v26 )
      v10->Length = v26 - v27;
    else
      v10->Length = 0i64;
LABEL_33:
    v24 = this->Ranges.Data.Size;
    if ( v8 >= v24 )
      goto LABEL_43;
    v35.Index = ++v8;
    v13 = v8 < v24;
LABEL_41:
    if ( v13 )
      v35.Index = ++v8;
    goto LABEL_43;
  }
  if ( v10->Index != startPos )
  {
    if ( (signed __int64)(v10->Index + v10->Length) > (signed __int64)(startPos + length) )
    {
      v14 = v10->Length;
      Index = v10->Index;
      Data = v10->Data;
      if ( v10->Index + v14 - startPos <= v14 )
        v10->Length = startPos - v10->Index;
      else
        v10->Length = 0i64;
      v17 = this->Ranges.Data.Size;
      v18 = length + this->Ranges.Data.Data[v9].Length;
      if ( v18 > (__int64)v14 )
        v18 = v14;
      v19 = v18 + Index;
      v20 = v14 - v18;
      if ( v8 < v17 )
        v35.Index = ++v8;
      Scaleform::ArrayData<Scaleform::RangeData<void *>,Scaleform::AllocatorLH<Scaleform::RangeData<void *>,2>,Scaleform::ArrayDefaultPolicy>::Resize(
        &this->Ranges.Data,
        v17 + 1);
      v21 = this->Ranges.Data.Size;
      if ( v8 < v21 - 1 )
        memmove(&this->Ranges.Data.Data[v8 + 1], &this->Ranges.Data.Data[v8], 24 * (v21 - v8) - 24);
      v22 = &this->Ranges.Data.Data[v8];
      if ( v22 )
      {
        v22->Index = v19;
        v22->Length = v20;
        v22->Data = Data;
      }
      v13 = v8 < (signed __int64)this->Ranges.Data.Size;
      goto LABEL_41;
    }
    v23 = v10->Length;
    if ( length <= v23 )
      v10->Length = v23 - length;
    else
      v10->Length = 0i64;
    goto LABEL_33;
  }
  v11 = v10->Length;
  v12 = length;
  if ( (__int64)length > v11 )
    v12 = v10->Length;
  v10->Index += v12;
  v10->Length = v11 - v12;
  if ( this->Ranges.Data.Data[v9].Length )
  {
    v13 = v8 < (signed __int64)this->Ranges.Data.Size;
    goto LABEL_41;
  }
  Scaleform::RangeDataArray<void *,Scaleform::ArrayLH<Scaleform::RangeData<void *>,2,Scaleform::ArrayDefaultPolicy>>::Iterator::Remove(&v35);
LABEL_43:
  if ( !Scaleform::RangeDataArray<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>,Scaleform::ArrayLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>>,2,Scaleform::ArrayDefaultPolicy>>::Iterator::IsFinished((Scaleform::RangeDataArray<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>,Scaleform::ArrayLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> >,2,Scaleform::ArrayDefaultPolicy> >::Iterator *)&v35) )
  {
    v28 = v8;
    do
    {
      v29 = &this->Ranges.Data.Data[v28];
      if ( v29->Index < startPos || (signed __int64)(v29->Length - 1 + v29->Index) > (__int64)(length + startPos - 1) )
        break;
      if ( v8 >= 0 )
      {
        v30 = this->Ranges.Data.Size;
        if ( v8 < v30 )
        {
          if ( v30 == 1 )
          {
            Scaleform::ArrayData<Scaleform::RangeData<void *>,Scaleform::AllocatorLH<Scaleform::RangeData<void *>,2>,Scaleform::ArrayDefaultPolicy>::Resize(
              &this->Ranges.Data,
              0i64);
          }
          else
          {
            memmove(&this->Ranges.Data.Data[v28], &v29[1], 24 * (v30 - v8) - 24);
            --this->Ranges.Data.Size;
          }
        }
      }
    }
    while ( !Scaleform::RangeDataArray<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>,Scaleform::ArrayLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>>,2,Scaleform::ArrayDefaultPolicy>>::Iterator::IsFinished((Scaleform::RangeDataArray<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>,Scaleform::ArrayLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> >,2,Scaleform::ArrayDefaultPolicy> >::Iterator *)&v35) );
  }
  if ( v8 >= 0 && v8 < this->Ranges.Data.Size )
  {
    v31 = length + startPos - 1;
    v32 = &this->Ranges.Data.Data[v8];
    if ( v31 >= v32->Index )
    {
      v33 = v32->Length;
      if ( v31 <= v33 + v32->Index - 1 )
      {
        v34 = length + startPos - v32->Index;
        if ( v34 > v33 )
          v34 = v32->Length;
        v32->Index += v34;
        v32->Length = v33 - v34;
      }
    }
  }
}

void __fastcall Scaleform::GFx::Text::EditorKit::ClearRestrict(Scaleform::GFx::Text::EditorKit *this)
{
  Scaleform::GFx::Text::EditorKit::RestrictParams *pObject; // rsi
  volatile int *v3; // rbx

  pObject = this->pRestrict.pObject;
  if ( pObject )
  {
    if ( this->pRestrict.Owner )
    {
      this->pRestrict.Owner = 0;
      v3 = (volatile int *)(pObject->RestrictString.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
      if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(v3 + 2, -1) == 1 )
        Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, (void *)v3);
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, pObject->RestrictRanges.Ranges.Data.Data);
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, pObject);
    }
    this->pRestrict.pObject = 0i64;
    this->pRestrict.Owner = 0;
  }
  else
  {
    this->pRestrict.Owner = 0;
  }
}

void __fastcall Scaleform::GFx::Text::EditorKit::CopyToClipboard(
        Scaleform::GFx::Text::EditorKit *this,
        unsigned __int64 startPos,
        unsigned __int64 endPos,
        bool useRichClipboard)
{
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rdi
  Scaleform::Render::Text::DocView *pObject; // rcx
  Scaleform::Render::Text::StyledText *v9; // rax
  wchar_t *pText; // rdx
  Scaleform::RefCountNTSImpl *v11; // rbx
  wchar_t *v12; // rdx
  Scaleform::WStringBuffer pBuffer; // [rsp+20h] [rbp-28h] BYREF

  v5 = endPos;
  v6 = startPos;
  if ( this->pClipboard.pObject )
  {
    pObject = this->pDocView.pObject;
    if ( (pObject->Flags & 0x10) == 0 )
    {
      if ( endPos < startPos )
      {
        v6 = endPos;
        v5 = startPos;
      }
      memset(&pBuffer, 0, sizeof(pBuffer));
      Scaleform::Render::Text::StyledText::GetText(pObject->pDocument.pObject, &pBuffer, v6, v5);
      if ( useRichClipboard )
      {
        v9 = Scaleform::Render::Text::StyledText::CopyStyledText(this->pDocView.pObject->pDocument.pObject, v6, v5);
        pText = (wchar_t *)&unk_140740B00;
        v11 = v9;
        if ( pBuffer.pText )
          pText = pBuffer.pText;
        Scaleform::GFx::Clipboard::SetTextAndStyledText(this->pClipboard.pObject, pText, pBuffer.Length, v9);
        if ( v11 )
          Scaleform::RefCountNTSImpl::Release(v11);
      }
      else
      {
        v12 = (wchar_t *)&unk_140740B00;
        if ( pBuffer.pText )
          v12 = pBuffer.pText;
        Scaleform::GFx::Clipboard::SetText(this->pClipboard.pObject, v12, pBuffer.Length);
      }
      Scaleform::WStringBuffer::~WStringBuffer(&pBuffer);
    }
  }
}

void __fastcall Scaleform::GFx::Text::EditorKit::CutToClipboard(
        Scaleform::GFx::Text::EditorKit *this,
        unsigned __int64 startPos,
        unsigned __int64 endPos,
        bool useRichClipboard)
{
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rbx
  Scaleform::Render::Text::DocView::DocumentListener *pObject; // rcx
  unsigned __int64 v8; // r8

  v4 = endPos;
  v5 = startPos;
  if ( this->pClipboard.pObject )
  {
    if ( endPos < startPos )
    {
      v5 = endPos;
      v4 = startPos;
    }
    Scaleform::GFx::Text::EditorKit::CopyToClipboard(this, v5, v4, useRichClipboard);
    if ( !this->IsReadOnly(this) )
    {
      pObject = this->pDocView.pObject->pDocumentListener.pObject;
      if ( !pObject || pObject->Editor_OnRemovingText(pObject, this, v5, v4 - v5) )
      {
        v8 = v4 - v5;
        if ( v4 < v5 )
          v8 = 0i64;
        Scaleform::Render::Text::StyledText::Remove(this->pDocView.pObject->pDocument.pObject, v5, v8);
      }
    }
  }
}

unsigned __int64 __fastcall Scaleform::RangeDataArray<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>,Scaleform::ArrayLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>>,2,Scaleform::ArrayDefaultPolicy>>::FindNearestRangeIndex(
        Scaleform::RangeDataArray<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>,Scaleform::ArrayLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> >,2,Scaleform::ArrayDefaultPolicy> > *this,
        __int64 index)
{
  unsigned __int64 Size; // r10
  unsigned __int64 v5; // r9
  unsigned __int64 v6; // r11
  unsigned __int64 v7; // r10
  unsigned __int64 v8; // rdx
  __int64 v9; // rdi
  Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> > *v10; // rbx
  int v11; // eax
  __int64 v12; // rdx
  Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> > *v13; // rbx
  int v14; // eax
  Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> > *v15; // r9
  __int64 v16; // rdx
  int v17; // eax

  Size = this->Ranges.Data.Size;
  if ( !Size )
    return 0i64;
  v5 = 0i64;
  v6 = 0i64;
  v7 = Size - 1;
  if ( v7 )
  {
    while ( v7 != -1i64 )
    {
      v8 = (v7 + v5) >> 1;
      v9 = this->Ranges.Data.Data[v8].Index;
      v10 = &this->Ranges.Data.Data[v8];
      if ( index < v9 )
        goto LABEL_8;
      if ( index <= (signed __int64)(v10->Length + v9 - 1) )
        return (v7 + v5) >> 1;
      if ( index >= v9 )
        v11 = LODWORD(v10->Length) - index + v9 - 1;
      else
LABEL_8:
        v11 = v9 - index;
      if ( !v11 )
        return (v7 + v5) >> 1;
      if ( v11 >= 0 )
      {
        v7 = v8 - 1;
      }
      else
      {
        v6 = v5;
        v5 = v8 + 1;
      }
      if ( v5 >= v7 )
        break;
    }
  }
  if ( v5 == v7 )
  {
    v12 = this->Ranges.Data.Data[v5].Index;
    v13 = &this->Ranges.Data.Data[v5];
    if ( index < v12 )
      goto LABEL_19;
    if ( index <= (signed __int64)(v13->Length + v12 - 1) )
      return v5;
    if ( index >= v12 )
      v14 = LODWORD(v13->Length) - index + LODWORD(v13->Index) - 1;
    else
LABEL_19:
      v14 = v12 - index;
    if ( !v14 )
      return v5;
  }
  if ( v6 < v7 )
  {
    v15 = &this->Ranges.Data.Data[v6 + 1];
    do
    {
      v16 = v15->Index;
      if ( index < v15->Index )
        goto LABEL_29;
      if ( index <= (signed __int64)(v15->Length + v16 - 1) )
        return v6;
      if ( index >= v16 )
        v17 = LODWORD(v15->Length) - index + LODWORD(v15->Index) - 1;
      else
LABEL_29:
        v17 = v16 - index;
      if ( v17 >= 0 )
        break;
      ++v6;
      ++v15;
    }
    while ( v6 < v7 );
  }
  return v6;
}

unsigned __int64 __fastcall Scaleform::RangeDataArray<void *,Scaleform::ArrayLH<Scaleform::RangeData<void *>,2,Scaleform::ArrayDefaultPolicy>>::FindRangeIndex(
        Scaleform::RangeDataArray<void *,Scaleform::ArrayLH<Scaleform::RangeData<void *>,2,Scaleform::ArrayDefaultPolicy> > *this,
        __int64 index)
{
  unsigned __int64 v3; // r11
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // r9
  __int64 v6; // rbx
  Scaleform::RangeData<void *> *v7; // r10
  int v8; // eax
  __int64 v9; // rdx
  Scaleform::RangeData<void *> *v10; // r9
  int v11; // eax

  v3 = 0i64;
  v4 = this->Ranges.Data.Size - 1;
  if ( this->Ranges.Data.Size != 1 )
  {
    while ( v4 != -1i64 )
    {
      v5 = (v4 + v3) >> 1;
      v6 = this->Ranges.Data.Data[v5].Index;
      v7 = &this->Ranges.Data.Data[v5];
      if ( index < v6 )
        goto LABEL_6;
      if ( index <= (signed __int64)(v7->Length + v6 - 1) )
        return (v4 + v3) >> 1;
      if ( index >= v6 )
        v8 = LODWORD(v7->Length) - index + v6 - 1;
      else
LABEL_6:
        v8 = v6 - index;
      if ( !v8 )
        return (v4 + v3) >> 1;
      if ( v8 >= 0 )
        v4 = v5 - 1;
      else
        v3 = v5 + 1;
      if ( v3 >= v4 )
        break;
    }
  }
  if ( v3 == v4 )
  {
    v9 = this->Ranges.Data.Data[v3].Index;
    v10 = &this->Ranges.Data.Data[v3];
    if ( index < v9 )
      goto LABEL_17;
    if ( index <= (signed __int64)(v10->Length + v9 - 1) )
      return v3;
    if ( index >= v9 )
      v11 = LODWORD(v10->Length) - index + LODWORD(v10->Index) - 1;
    else
LABEL_17:
      v11 = v9 - index;
    if ( !v11 )
      return v3;
  }
  return -1i64;
}

Scaleform::GFx::AS3::VMAppDomain *__fastcall Scaleform::GFx::FontManagerStates::GetStateBagImpl(
        Scaleform::GFx::AS3::VMAppDomain *this)
{
  return this->ParentDomain;
}

Scaleform::GFx::AS3::ClassTraits::fl::XMLList *__fastcall Scaleform::GFx::MovieImpl::GetHeap(
        Scaleform::GFx::AS3::XMLSupportImpl *this)
{
  return this->TraitsXMLList.pObject;
}

Scaleform::Render::Text::LineBuffer::Line *__fastcall Scaleform::GFx::Text::EditorKit::GetGlyphEntryAtIndex(
        Scaleform::GFx::Text::EditorKit *this,
        unsigned __int64 charIndex,
        unsigned __int64 *ptextPos)
{
  unsigned int LineIndexOfChar; // eax
  Scaleform::Render::Text::LineBuffer::Line *result; // rax
  unsigned int TextPos; // edi
  unsigned __int64 v9; // r15
  unsigned int GlyphsCount; // er12
  __int64 v11; // rbx
  Scaleform::Render::Text::LineBuffer::GlyphEntry *v12; // r14
  Scaleform::Render::Text::LineBuffer::GlyphEntry *pGlyphs; // rax
  Scaleform::Render::Text::LineBuffer::GlyphEntry *pEndGlyphs; // rcx
  int v15; // ebx
  unsigned int v16; // esi
  Scaleform::Render::Text::LineBuffer::GlyphIterator v17; // [rsp+20h] [rbp-69h] BYREF

  LineIndexOfChar = Scaleform::Render::Text::DocView::GetLineIndexOfChar(this->pDocView.pObject, charIndex);
  if ( LineIndexOfChar == -1 )
    return 0i64;
  result = (Scaleform::Render::Text::LineBuffer::Line *)Scaleform::Render::Text::LineBuffer::GetLine(
                                                          &this->pDocView.pObject->mLineBuffer,
                                                          LineIndexOfChar);
  if ( result )
  {
    TextPos = result->Data32.TextPos;
    if ( (result->MemSize & 0x80000000) != 0 )
    {
      TextPos &= 0xFFFFFFu;
      if ( TextPos == 0xFFFFFF )
        TextPos = -1;
    }
    v9 = charIndex - TextPos;
    if ( (result->MemSize & 0x80000000) == 0 )
      GlyphsCount = result->Data32.GlyphsCount;
    else
      GlyphsCount = result->Data8.GlyphsCount;
    v11 = 42i64;
    if ( (result->MemSize & 0x80000000) != 0 )
      v11 = 30i64;
    v12 = 0i64;
    v17.HighlighterIter.CurDesc.StartPos = -1i64;
    memset(&v17.HighlighterIter, 0, 24);
    v17.pGlyphs = (Scaleform::Render::Text::LineBuffer::GlyphEntry *)((char *)result + v11);
    v17.HighlighterIter.CurDesc.Length = 0i64;
    v17.pEndGlyphs = (Scaleform::Render::Text::LineBuffer::GlyphEntry *)((char *)result + 8 * GlyphsCount + v11);
    v17.HighlighterIter.CurDesc.Offset = -1i64;
    memset(&v17.HighlighterIter.CurDesc.AdjStartPos, 0, 33);
    memset(&v17.ColorV, 0, 40);
    v17.pNextFormatData = Scaleform::Render::Text::LineBuffer::Line::GetFormatData(result);
    Scaleform::Render::Text::LineBuffer::GlyphIterator::UpdateDesc(&v17);
    while ( 1 )
    {
      pGlyphs = v17.pGlyphs;
      pEndGlyphs = v17.pEndGlyphs;
      if ( !v17.pGlyphs
        || v17.pGlyphs >= v17.pEndGlyphs
        || v17.pGlyphs->LenAndFontSize >= 0x1000u
        || (v17.pGlyphs->Flags & 0x100) != 0 )
      {
        break;
      }
      Scaleform::Render::Text::LineBuffer::GlyphIterator::operator++(&v17);
    }
    v15 = 0;
    v16 = 0;
    while ( 1 )
    {
      TextPos += v15;
      if ( !pGlyphs )
        break;
      if ( pGlyphs >= pEndGlyphs )
        break;
      v15 = pGlyphs->LenAndFontSize >> 12;
      v12 = pGlyphs;
      v16 += v15;
      Scaleform::Render::Text::LineBuffer::GlyphIterator::operator++(&v17);
      if ( v16 > v9 )
        break;
      pEndGlyphs = v17.pEndGlyphs;
      pGlyphs = v17.pGlyphs;
    }
    if ( ptextPos )
      *ptextPos = TextPos;
    if ( v17.pImage.pObject )
      Scaleform::RefCountNTSImpl::Release(v17.pImage.pObject);
    if ( v17.pFontHandle.pObject )
      Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v17.pFontHandle.pObject);
    return (Scaleform::Render::Text::LineBuffer::Line *)v12;
  }
  return result;
}

Scaleform::GFx::Text::EditorKit::RestrictParams *__fastcall Scaleform::GFx::Text::EditorKit::GetRestrict(
        Scaleform::GFx::Text::EditorKit *this)
{
  Scaleform::GFx::Text::EditorKit::RestrictParams *result; // rax

  result = this->pRestrict.pObject;
  if ( result )
    return (Scaleform::GFx::Text::EditorKit::RestrictParams *)((char *)result + 24);
  return result;
}

__int64 __fastcall Scaleform::GFx::Text::EditorKit::GlyphPos2TextPos(
        Scaleform::GFx::Text::EditorKit *this,
        unsigned __int64 glyphPos)
{
  Scaleform::GFx::Text::CompositionString *pObject; // rdi
  __int64 v5; // rbx
  bool v6; // cf
  Scaleform::GFx::Text::CompositionString_vtbl *v7; // rax

  if ( !this->HasCompositionString(this) || glyphPos <= this->pComposStr.pObject->GetPosition(this->pComposStr.pObject) )
    return glyphPos;
  pObject = this->pComposStr.pObject;
  v5 = pObject->GetPosition(pObject);
  v6 = glyphPos < (__int64)pObject->GetLength(pObject) + v5;
  v7 = this->pComposStr.pObject->__vftable;
  if ( !v6 )
  {
    glyphPos -= ((__int64 (*)(void))v7->GetLength)();
    return glyphPos;
  }
  return ((__int64 (*)(void))v7->GetPosition)();
}

bool __fastcall Scaleform::GFx::Text::EditorKit::HasCompositionString(Scaleform::GFx::Text::EditorKit *this)
{
  Scaleform::GFx::Text::CompositionString *pObject; // rcx

  pObject = this->pComposStr.pObject;
  return pObject && pObject->GetLength(pObject);
}

void __fastcall Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::RangeData<void *>,Scaleform::AllocatorLH<Scaleform::RangeData<void *>,2>,Scaleform::ArrayDefaultPolicy>>::InsertAt(
        Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::RangeData<void *>,Scaleform::AllocatorLH<Scaleform::RangeData<void *>,2>,Scaleform::ArrayDefaultPolicy> > *this,
        unsigned __int64 index,
        const Scaleform::RangeData<void *> *val)
{
  unsigned __int64 Size; // rcx
  Scaleform::RangeData<void *> *v7; // rdx
  unsigned __int64 Length; // rcx

  Scaleform::ArrayData<Scaleform::RangeData<void *>,Scaleform::AllocatorLH<Scaleform::RangeData<void *>,2>,Scaleform::ArrayDefaultPolicy>::Resize(
    &this->Data,
    this->Data.Size + 1);
  Size = this->Data.Size;
  if ( index < Size - 1 )
    memmove(&this->Data.Data[index + 1], &this->Data.Data[index], 24 * (Size - index) - 24);
  v7 = &this->Data.Data[index];
  if ( v7 )
  {
    Length = val->Length;
    v7->Index = val->Index;
    v7->Length = Length;
    v7->Data = val->Data;
  }
}

void __fastcall Scaleform::GFx::Text::EditorKit::InvalidateSelectionColors(Scaleform::GFx::Text::EditorKit *this)
{
  if ( (this->Flags & 0x400) != 0 )
  {
    Scaleform::Render::Text::DocView::SetSelectionTextColor(this->pDocView.pObject, this->ActiveSelectionTextColor);
    Scaleform::Render::Text::DocView::SetSelectionBackgroundColor(this->pDocView.pObject, this->ActiveSelectionBkColor);
  }
  else
  {
    Scaleform::Render::Text::DocView::SetSelectionTextColor(this->pDocView.pObject, this->InactiveSelectionTextColor);
    Scaleform::Render::Text::DocView::SetSelectionBackgroundColor(
      this->pDocView.pObject,
      this->InactiveSelectionBkColor);
  }
}

bool __fastcall Scaleform::RangeDataArray<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>,Scaleform::ArrayLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>>,2,Scaleform::ArrayDefaultPolicy>>::Iterator::IsFinished(
        Scaleform::RangeDataArray<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>,Scaleform::ArrayLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> >,2,Scaleform::ArrayDefaultPolicy> >::Iterator *this)
{
  __int64 Index; // rdx

  Index = this->Index;
  return Index < 0 || Index >= this->pArray->Ranges.Data.Size;
}

bool __fastcall Scaleform::Render::Text::LineBuffer::IsLineVisible(
        Scaleform::Render::Text::LineBuffer *this,
        unsigned int lineIndex)
{
  int VScrollOffsetInFixp; // eax

  VScrollOffsetInFixp = Scaleform::Render::Text::LineBuffer::GetVScrollOffsetInFixp(this);
  return Scaleform::Render::Text::LineBuffer::IsLineVisible(
           this,
           lineIndex,
           COERCE_FLOAT(COERCE_UNSIGNED_INT((float)VScrollOffsetInFixp) ^ _xmm));
}

bool __fastcall Scaleform::GFx::Text::EditorKit::IsReadOnly(Scaleform::GFx::Text::EditorKit *this)
{
  return this->Flags & 1;
}

char __fastcall Scaleform::GFx::Text::EditorKit::OnChar(Scaleform::GFx::Text::EditorKit *this, unsigned int wcharCode)
{
  unsigned int v2; // ebp
  Scaleform::GFx::Text::EditorKit::RestrictParams *pObject; // rbx
  __int64 RangeIndex; // rax
  char v6; // si
  unsigned __int64 Size; // rcx
  bool v8; // cf
  char v9; // al
  int v10; // ebx
  unsigned __int16 v11; // ax
  Scaleform::GFx::Text::EditorKit::RestrictParams *v12; // rbx
  __int64 v13; // rax
  unsigned __int64 v14; // rcx
  unsigned __int64 CursorPos; // rbx
  char v17; // r12
  Scaleform::Render::Text::DocView *v18; // r13
  unsigned __int64 BeginSelection; // rax
  unsigned __int64 EndSelection; // r14
  unsigned __int64 v21; // rsi
  char v22; // r15
  Scaleform::Render::Text::DocView *v23; // rcx
  Scaleform::Render::Text::DocView *v24; // rcx
  unsigned __int64 v25; // rbx
  unsigned __int64 v26; // rax
  Scaleform::Render::Text::DocView *v27; // rcx
  __int16 v28; // dx
  Scaleform::Render::Text::DocView::DocumentText *v29; // rax
  unsigned __int64 v30; // rax
  bool v31; // zf
  Scaleform::Render::Text::DocView::DocumentListener *v32; // rcx
  unsigned __int64 command; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v34; // [rsp+28h] [rbp-40h]
  __int16 v35; // [rsp+30h] [rbp-38h]

  v2 = wcharCode;
  if ( wcharCode && (this->Flags & 0x20) == 0 )
  {
    pObject = this->pRestrict.pObject;
    if ( !pObject )
      goto LABEL_26;
    RangeIndex = Scaleform::RangeDataArray<void *,Scaleform::ArrayLH<Scaleform::RangeData<void *>,2,Scaleform::ArrayDefaultPolicy>>::FindRangeIndex(
                   &pObject->RestrictRanges,
                   (unsigned __int16)wcharCode);
    v6 = 0;
    if ( RangeIndex == -1 )
      goto LABEL_11;
    if ( RangeIndex >= 0 )
    {
      Size = pObject->RestrictRanges.Ranges.Data.Size;
      if ( RangeIndex >= Size )
        RangeIndex = Size - 1;
      if ( RangeIndex < 0 )
        goto LABEL_11;
    }
    else
    {
      RangeIndex = 0i64;
    }
    v8 = RangeIndex < pObject->RestrictRanges.Ranges.Data.Size;
    v9 = 0;
    if ( v8 )
    {
LABEL_12:
      if ( !v9 )
        goto LABEL_26;
      v10 = Scaleform::SFtowupper(v2);
      v11 = Scaleform::SFtowlower(v2);
      if ( v2 != v10 )
        v11 = v10;
      v12 = this->pRestrict.pObject;
      LOWORD(v2) = v11;
      if ( !v12 )
        goto LABEL_26;
      v13 = Scaleform::RangeDataArray<void *,Scaleform::ArrayLH<Scaleform::RangeData<void *>,2,Scaleform::ArrayDefaultPolicy>>::FindRangeIndex(
              &this->pRestrict.pObject->RestrictRanges,
              v11);
      if ( v13 != -1 )
      {
        if ( v13 < 0 )
        {
          v13 = 0i64;
          goto LABEL_22;
        }
        v14 = v12->RestrictRanges.Ranges.Data.Size;
        if ( v13 >= v14 )
          v13 = v14 - 1;
        if ( v13 >= 0 )
        {
LABEL_22:
          if ( v13 < v12->RestrictRanges.Ranges.Data.Size )
            goto LABEL_24;
        }
      }
      v6 = 1;
LABEL_24:
      if ( v6 )
        return 0;
LABEL_26:
      CursorPos = this->CursorPos;
      v17 = 0;
      v18 = this->pDocView.pObject;
      BeginSelection = v18->BeginSelection;
      EndSelection = v18->EndSelection;
      v21 = EndSelection;
      if ( BeginSelection < EndSelection )
        EndSelection = v18->BeginSelection;
      if ( v21 < BeginSelection )
        v21 = v18->BeginSelection;
      v22 = 0;
      if ( this->IsReadOnly(this) )
        return v17;
      if ( (_WORD)v2 == 13 )
      {
        v27 = this->pDocView.pObject;
        if ( (v27->Flags & 4) == 0 )
          goto LABEL_52;
        v28 = 10;
        this->Flags &= ~0x40u;
        v29 = v27->pDocument.pObject;
        if ( EndSelection == v21 )
        {
          if ( (v29->RTFlags & 2) != 0 )
            v28 = 13;
          v30 = this->CursorPos;
          LOWORD(v34) = v28;
          command = v30;
          Scaleform::Render::Text::DocView::EditCommand(v27, Cmd_InsertChar, &command);
        }
        else
        {
          v31 = (v29->RTFlags & 2) == 0;
          command = EndSelection;
          if ( !v31 )
            v28 = 13;
          v34 = v21;
          v35 = v28;
          Scaleform::Render::Text::DocView::EditCommand(v27, Cmd_ReplaceTextByChar, &command);
          CursorPos = v21;
          if ( EndSelection < v21 )
            CursorPos = EndSelection;
        }
        ++CursorPos;
      }
      else
      {
        if ( (unsigned __int16)v2 < 0x20u )
          return v17;
        if ( EndSelection != v21 )
          goto LABEL_38;
        if ( SLOBYTE(this->Flags) < 0 )
          ++v21;
        if ( EndSelection == v21 )
        {
          v23 = this->pDocView.pObject;
          command = this->CursorPos;
          LOWORD(v34) = v2;
          CursorPos += Scaleform::Render::Text::DocView::EditCommand(v23, Cmd_InsertChar, &command);
        }
        else
        {
LABEL_38:
          v24 = this->pDocView.pObject;
          command = EndSelection;
          v34 = v21;
          v35 = v2;
          v25 = Scaleform::Render::Text::DocView::EditCommand(v24, Cmd_ReplaceTextByChar, &command);
          v26 = v21;
          if ( EndSelection < v21 )
            v26 = EndSelection;
          CursorPos = v26 + v25;
        }
      }
      v22 = 1;
LABEL_52:
      if ( this->CursorPos != CursorPos || EndSelection != CursorPos || v21 != CursorPos )
      {
        Scaleform::GFx::Text::EditorKit::SetCursorPos(this, CursorPos, 0);
        v17 = 1;
      }
      if ( v22 )
      {
        v32 = v18->pDocumentListener.pObject;
        if ( v32 )
          v32->Editor_OnChanged(v32, this);
      }
      return v17;
    }
LABEL_11:
    v9 = 1;
    goto LABEL_12;
  }
  return 0;
}

void __fastcall Scaleform::GFx::Text::EditorKit::OnDocumentChanged(
        Scaleform::GFx::Text::EditorKit *this,
        unsigned int notifyMask)
{
  unsigned __int64 Length; // rdx

  if ( (notifyMask & 0x102) == 0 )
  {
    if ( this->CursorPos <= Scaleform::Render::Text::StyledText::GetLength(this->pDocView.pObject->pDocument.pObject) )
      return;
    Length = Scaleform::Render::Text::StyledText::GetLength(this->pDocView.pObject->pDocument.pObject);
    goto LABEL_7;
  }
  if ( !this->IsReadOnly(this) || (this->Flags & 2) != 0 )
  {
    Length = 0i64;
LABEL_7:
    Scaleform::GFx::Text::EditorKit::SetCursorPos(this, Length, (this->Flags & 2) != 0);
  }
}

__int64 __fastcall Scaleform::GFx::Text::EditorKit::OnKeyDown(
        Scaleform::GFx::Text::EditorKit *this,
        int keyCode,
        const Scaleform::KeyModifiers *specKeysState)
{
  unsigned __int64 Length; // rax
  Scaleform::Render::Text::DocView::DocumentListener *v6; // rcx
  unsigned __int64 v7; // r12
  unsigned __int64 CursorPos; // rdi
  Scaleform::Render::Text::DocView *v9; // rcx
  float LastHorizCursorPos; // xmm6_4
  unsigned __int64 EndSelection; // rsi
  unsigned __int64 v12; // r14
  bool v13; // r13
  unsigned __int64 BeginSelection; // rax
  Scaleform::GFx::TextKeyMap *v15; // rcx
  const Scaleform::GFx::TextKeyMap::KeyMapEntry *v16; // rax
  const Scaleform::GFx::TextKeyMap::KeyMapEntry *v17; // r15
  char v18; // cl
  bool v20; // cf
  char v21; // r15
  char v22; // al
  unsigned int LineIndexOfChar; // eax
  unsigned int v24; // eax
  unsigned int v25; // er12
  Scaleform::Render::Text::DocView *v26; // rcx
  unsigned __int64 LineLength; // rax
  unsigned __int64 v28; // r15
  unsigned int v29; // eax
  Scaleform::Render::Text::DocView *v30; // rcx
  unsigned int v31; // edi
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // r15
  unsigned __int64 v34; // rdx
  unsigned int BottomVScroll; // eax
  Scaleform::Render::Text::DocView *v36; // rcx
  unsigned int v37; // eax
  unsigned __int64 v38; // rdx
  unsigned int v39; // eax
  Scaleform::Render::Text::DocView *v40; // rcx
  unsigned int v41; // edi
  char v42; // al
  char v43; // al
  Scaleform::Render::Text::DocView *v44; // rcx
  Scaleform::Render::Text::DocView *v45; // rcx
  unsigned __int64 v46; // rax
  unsigned __int16 Flags; // cx
  Scaleform::Render::Text::DocView::DocumentListener *v48; // rcx
  __int64 result; // rax
  Scaleform::Render::Text::DocView *pObject; // [rsp+48h] [rbp-28h]
  Scaleform::Render::Rect<float> pcursorRect; // [rsp+50h] [rbp-20h] BYREF
  unsigned __int8 v52; // [rsp+B0h] [rbp+40h]
  unsigned __int64 phasNewLine; // [rsp+C8h] [rbp+58h] BYREF

  pObject = this->pDocView.pObject;
  Length = Scaleform::Render::Text::StyledText::GetLength(pObject->pDocument.pObject);
  v6 = pObject->pDocumentListener.pObject;
  v7 = Length;
  CursorPos = this->CursorPos;
  v52 = 0;
  if ( v6 )
    keyCode = v6->Editor_OnKey(v6, this, keyCode);
  v9 = this->pDocView.pObject;
  LastHorizCursorPos = FLOAT_N1_0;
  EndSelection = v9->EndSelection;
  v12 = EndSelection;
  v13 = (this->Flags & 0x40) != 0;
  BeginSelection = v9->BeginSelection;
  v15 = this->pKeyMap.pObject;
  if ( BeginSelection < EndSelection )
    EndSelection = BeginSelection;
  if ( v12 < BeginSelection )
    v12 = BeginSelection;
  if ( v15 )
  {
    v16 = Scaleform::GFx::TextKeyMap::Find(v15, keyCode, specKeysState, State_Down);
    v17 = v16;
    if ( v16 )
    {
      switch ( v16->Action )
      {
        case KeyAct_EnterSelectionMode:
          v18 = 1;
          if ( (this->Flags & 2) == 0 )
            v18 = v13;
          goto LABEL_101;
        case KeyAct_Left:
          if ( CursorPos == -1i64 )
            CursorPos = v7;
          if ( !CursorPos-- )
            CursorPos = 0i64;
          if ( (this->Flags & 0x40) == 0 )
          {
            v20 = EndSelection < v12;
            if ( EndSelection != v12 )
              goto LABEL_27;
          }
          goto LABEL_29;
        case KeyAct_Right:
          if ( CursorPos == -1i64 )
          {
            CursorPos = v7;
          }
          else if ( CursorPos < v7 )
          {
            ++CursorPos;
          }
          if ( (this->Flags & 0x40) != 0 || EndSelection == v12 )
            goto LABEL_29;
          v20 = v12 < EndSelection;
LABEL_27:
          CursorPos = v12;
          if ( v20 )
            CursorPos = EndSelection;
          goto LABEL_29;
        case KeyAct_Up:
          v42 = LOBYTE(this->Flags) >> 6;
          pcursorRect = 0i64;
          if ( (v42 & 1) == 0 )
          {
            v20 = EndSelection < v12;
            if ( EndSelection != v12 )
              goto LABEL_27;
          }
          v21 = 0;
          if ( (unsigned __int8)Scaleform::GFx::Text::EditorKit::CalcCursorRectOnScreen(
                                  this,
                                  this->CursorPos,
                                  &pcursorRect,
                                  (unsigned int *)&phasNewLine,
                                  0i64,
                                  1,
                                  0i64) )
          {
            if ( (_DWORD)phasNewLine )
            {
              LastHorizCursorPos = this->LastHorizCursorPos;
              if ( LastHorizCursorPos < 0.0 )
                LastHorizCursorPos = pcursorRect.x1;
              CursorPos = Scaleform::Render::Text::DocView::GetCursorPosInLine(
                            this->pDocView.pObject,
                            (int)phasNewLine - 1,
                            LastHorizCursorPos);
            }
            else
            {
LABEL_39:
              CursorPos = 0i64;
            }
          }
          goto LABEL_30;
        case KeyAct_Down:
          v43 = LOBYTE(this->Flags) >> 6;
          pcursorRect = 0i64;
          if ( (v43 & 1) == 0 )
          {
            v20 = v12 < EndSelection;
            if ( v12 != EndSelection )
              goto LABEL_27;
          }
          v21 = 0;
          if ( !(unsigned __int8)Scaleform::GFx::Text::EditorKit::CalcCursorRectOnScreen(
                                   this,
                                   this->CursorPos,
                                   &pcursorRect,
                                   (unsigned int *)&phasNewLine,
                                   0i64,
                                   1,
                                   0i64) )
            goto LABEL_30;
          v41 = phasNewLine + 1;
          if ( v41 >= Scaleform::Render::Text::DocView::GetLinesCount(this->pDocView.pObject) )
          {
LABEL_55:
            CursorPos = v7;
          }
          else
          {
            LastHorizCursorPos = this->LastHorizCursorPos;
            if ( LastHorizCursorPos < 0.0 )
              LastHorizCursorPos = pcursorRect.x1;
LABEL_69:
            CursorPos = Scaleform::Render::Text::DocView::GetCursorPosInLine(
                          this->pDocView.pObject,
                          v41,
                          LastHorizCursorPos);
          }
          goto LABEL_30;
        case KeyAct_PageUp:
          v34 = this->CursorPos;
          v21 = 0;
          pcursorRect = 0i64;
          if ( (unsigned __int8)Scaleform::GFx::Text::EditorKit::CalcCursorRectOnScreen(
                                  this,
                                  v34,
                                  &pcursorRect,
                                  (unsigned int *)&phasNewLine,
                                  0i64,
                                  1,
                                  0i64) )
          {
            LastHorizCursorPos = this->LastHorizCursorPos;
            if ( LastHorizCursorPos < 0.0 )
              LastHorizCursorPos = pcursorRect.x1;
            BottomVScroll = Scaleform::Render::Text::DocView::GetBottomVScroll(this->pDocView.pObject);
            v36 = this->pDocView.pObject;
            v37 = BottomVScroll - v36->mLineBuffer.Geom.FirstVisibleLinePos + 1;
            if ( (unsigned int)phasNewLine >= v37 )
              CursorPos = Scaleform::Render::Text::DocView::GetCursorPosInLine(
                            v36,
                            (unsigned int)phasNewLine - v37,
                            LastHorizCursorPos);
            else
              CursorPos = 0i64;
          }
          goto LABEL_30;
        case KeyAct_PageDown:
          v38 = this->CursorPos;
          v21 = 0;
          pcursorRect = 0i64;
          if ( !(unsigned __int8)Scaleform::GFx::Text::EditorKit::CalcCursorRectOnScreen(
                                   this,
                                   v38,
                                   &pcursorRect,
                                   (unsigned int *)&phasNewLine,
                                   0i64,
                                   1,
                                   0i64) )
            goto LABEL_30;
          LastHorizCursorPos = this->LastHorizCursorPos;
          if ( LastHorizCursorPos < 0.0 )
            LastHorizCursorPos = pcursorRect.x1;
          v39 = Scaleform::Render::Text::DocView::GetBottomVScroll(this->pDocView.pObject);
          v40 = this->pDocView.pObject;
          v41 = v39 - v40->mLineBuffer.Geom.FirstVisibleLinePos + phasNewLine + 1;
          if ( v41 >= Scaleform::Render::Text::DocView::GetLinesCount(v40) )
            goto LABEL_55;
          goto LABEL_69;
        case KeyAct_LineHome:
          LineIndexOfChar = Scaleform::Render::Text::DocView::GetLineIndexOfChar(
                              this->pDocView.pObject,
                              this->CursorPos);
          if ( LineIndexOfChar != -1 )
            CursorPos = Scaleform::Render::Text::DocView::GetLineOffset(this->pDocView.pObject, LineIndexOfChar);
          goto LABEL_29;
        case KeyAct_LineEnd:
          v24 = Scaleform::Render::Text::DocView::GetLineIndexOfChar(this->pDocView.pObject, this->CursorPos);
          v25 = v24;
          if ( v24 != -1 )
          {
            v26 = this->pDocView.pObject;
            LOBYTE(phasNewLine) = 0;
            LineLength = Scaleform::Render::Text::DocView::GetLineLength(v26, v24, (bool *)&phasNewLine);
            v28 = LineLength;
            if ( (_BYTE)phasNewLine )
              v28 = LineLength - 1;
            CursorPos = v28 + Scaleform::Render::Text::DocView::GetLineOffset(this->pDocView.pObject, v25);
          }
          goto LABEL_29;
        case KeyAct_PageHome:
          CursorPos = Scaleform::Render::Text::DocView::GetLineOffset(
                        this->pDocView.pObject,
                        this->pDocView.pObject->mLineBuffer.Geom.FirstVisibleLinePos);
          goto LABEL_29;
        case KeyAct_PageEnd:
          v29 = Scaleform::Render::Text::DocView::GetBottomVScroll(this->pDocView.pObject);
          v30 = this->pDocView.pObject;
          LOBYTE(phasNewLine) = 0;
          v31 = v29;
          v32 = Scaleform::Render::Text::DocView::GetLineLength(v30, v29, (bool *)&phasNewLine);
          v33 = v32;
          if ( (_BYTE)phasNewLine )
            v33 = v32 - 1;
          CursorPos = v33 + Scaleform::Render::Text::DocView::GetLineOffset(this->pDocView.pObject, v31);
          goto LABEL_29;
        case KeyAct_DocHome:
          v21 = 0;
          goto LABEL_39;
        case KeyAct_DocEnd:
          CursorPos = v7;
          goto LABEL_29;
        case KeyAct_Backspace:
          if ( this->IsReadOnly(this) )
            goto LABEL_29;
          v44 = this->pDocView.pObject;
          this->Flags &= ~0x40u;
          if ( EndSelection != v12 )
            goto LABEL_73;
          phasNewLine = CursorPos;
          CursorPos -= Scaleform::Render::Text::DocView::EditCommand(v44, Cmd_BackspaceChar, &phasNewLine);
          v21 = 1;
          goto LABEL_30;
        case KeyAct_Delete:
          if ( this->IsReadOnly(this) )
            goto LABEL_29;
          this->Flags &= ~0x40u;
          if ( EndSelection == v12 )
          {
            if ( this->CursorPos >= v7 )
            {
LABEL_29:
              v21 = 0;
            }
            else
            {
              v45 = this->pDocView.pObject;
              phasNewLine = CursorPos;
              Scaleform::Render::Text::DocView::EditCommand(v45, Cmd_DeleteChar, &phasNewLine);
              v21 = 1;
            }
          }
          else
          {
            v44 = this->pDocView.pObject;
LABEL_73:
            *(_QWORD *)&pcursorRect.x2 = v12;
            *(_QWORD *)&pcursorRect.x1 = EndSelection;
            Scaleform::Render::Text::DocView::EditCommand(v44, Cmd_DeleteText, &pcursorRect);
            CursorPos = v12;
            v21 = 1;
            if ( EndSelection < v12 )
              CursorPos = EndSelection;
          }
          goto LABEL_30;
        case KeyAct_Copy:
        case KeyAct_Cut:
          if ( !this->pClipboard.pObject )
            goto LABEL_29;
          if ( this->IsReadOnly(this) || v17->Action == KeyAct_Copy )
          {
            this->Flags &= ~0x40u;
            Scaleform::GFx::Text::EditorKit::CopyToClipboard(this, EndSelection, v12, (this->Flags & 4) != 0);
          }
          else
          {
            this->Flags &= ~0x40u;
            Scaleform::GFx::Text::EditorKit::CutToClipboard(this, EndSelection, v12, (this->Flags & 4) != 0);
            CursorPos = v12;
            v21 = 1;
            if ( EndSelection < v12 )
              CursorPos = EndSelection;
LABEL_30:
            if ( this->CursorPos == CursorPos )
            {
              Flags = this->Flags;
              if ( (Flags & 0x40) != 0 || EndSelection == v12 )
              {
                v22 = 0;
              }
              else
              {
                Scaleform::GFx::Text::EditorKit::SetCursorPos(this, CursorPos, (Flags & 2) != 0);
                v22 = 1;
                v52 = 1;
              }
            }
            else
            {
              Scaleform::GFx::Text::EditorKit::SetCursorPos(this, CursorPos, (this->Flags & 2) != 0);
              v22 = 1;
              this->LastHorizCursorPos = LastHorizCursorPos;
              v52 = 1;
            }
            if ( v21 )
            {
              if ( !v22 )
                Scaleform::Render::Text::DocView::SetDefaultTextAndParaFormat(this->pDocView.pObject, this->CursorPos);
              v48 = pObject->pDocumentListener.pObject;
              if ( v48 )
                v48->Editor_OnChanged(v48, this);
            }
          }
          break;
        case KeyAct_Paste:
          v46 = Scaleform::GFx::Text::EditorKit::PasteFromClipboard(this, EndSelection, v12, (this->Flags & 4) != 0);
          if ( v46 == -1i64 )
            goto LABEL_29;
          CursorPos = v46;
          v21 = 1;
          goto LABEL_30;
        case KeyAct_SelectAll:
          Scaleform::GFx::Text::EditorKit::SetCursorPos(this, v7, (this->Flags & 2) != 0);
          Scaleform::Render::Text::DocView::SetSelection(this->pDocView.pObject, 0i64, v7, 1);
          break;
        default:
          break;
      }
    }
  }
  v18 = v13;
LABEL_101:
  result = v52;
  if ( v18 )
    this->Flags |= 0x40u;
  return result;
}

char __fastcall Scaleform::GFx::Text::EditorKit::OnKeyUp(
        Scaleform::GFx::Text::EditorKit *this,
        int keyCode,
        const Scaleform::KeyModifiers *specKeysState)
{
  Scaleform::GFx::TextKeyMap *pObject; // rcx
  const Scaleform::GFx::TextKeyMap::KeyMapEntry *v5; // rax
  unsigned __int16 Flags; // cx

  pObject = this->pKeyMap.pObject;
  if ( pObject )
  {
    v5 = Scaleform::GFx::TextKeyMap::Find(pObject, keyCode, specKeysState, State_Up);
    if ( v5 )
    {
      if ( v5->Action == KeyAct_LeaveSelectionMode )
      {
        Flags = this->Flags;
        if ( (Flags & 0x42) == 66 )
          this->Flags = Flags & 0xFFBF;
      }
    }
  }
  return 1;
}

void __fastcall Scaleform::GFx::Text::EditorKit::OnKillFocus(Scaleform::GFx::Text::EditorKit *this)
{
  Scaleform::Render::Text::DocView::SetSelectionTextColor(this->pDocView.pObject, this->InactiveSelectionTextColor);
  Scaleform::Render::Text::DocView::SetSelectionBackgroundColor(this->pDocView.pObject, this->InactiveSelectionBkColor);
  this->Flags &= 0xFB9Fu;
}

void __fastcall Scaleform::GFx::Text::EditorKit::OnMouseDown(
        Scaleform::GFx::Text::EditorKit *this,
        float x,
        float y,
        int buttons)
{
  const Scaleform::Render::Rect<float> *ViewRect; // rbx
  float v6; // xmm7_4
  float v7; // xmm6_4
  bool v8; // r14
  bool v9; // di
  unsigned __int64 v10; // r8
  unsigned __int16 Flags; // cx
  Scaleform::Render::Text::DocView *pObject; // rcx
  unsigned __int64 CursorPosAtPoint; // rax
  unsigned __int64 v14; // rbx
  unsigned __int16 v15; // dx
  unsigned __int16 v16; // dx
  Scaleform::Render::Text::Paragraph *pPara; // r13
  unsigned __int64 Length; // rax
  unsigned __int64 v19; // rdi
  unsigned __int64 v20; // r15
  unsigned __int64 v21; // rbp
  wchar_t *pText; // r12
  wchar_t *v23; // rbx
  wchar_t v24; // r14
  wchar_t v25; // r10
  unsigned __int64 v26; // r8
  int v27; // er9
  int v28; // eax
  int v29; // er9
  int v30; // eax
  unsigned __int64 StartIndex; // rbx
  unsigned __int64 v32; // rdi
  unsigned __int64 pindexInParagraph; // [rsp+20h] [rbp-68h] BYREF
  Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,Scaleform::AllocatorLH<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,2>,Scaleform::ArrayDefaultPolicy> >::Iterator result; // [rsp+28h] [rbp-60h] BYREF

  if ( (buttons & 1) != 0 )
  {
    ViewRect = Scaleform::Render::Text::DocView::GetViewRect(this->pDocView.pObject);
    v6 = floorf(x - ViewRect->x1);
    v7 = floorf(y - ViewRect->y1);
    v8 = 0;
    v9 = 0;
    v10 = Scaleform::Timer::GetTicks() / 0x3E8;
    if ( this->LastMousePos.x == v6 && this->LastMousePos.y == v7 && (unsigned int)v10 <= this->LastClickTime + 300 )
    {
      Flags = this->Flags;
      v9 = (Flags & 0x200) != 0;
      this->Flags = Flags | 0x200;
      v8 = (Flags & 0x200) == 0;
    }
    else
    {
      this->Flags &= ~0x200u;
    }
    pObject = this->pDocView.pObject;
    this->LastMousePos.x = v6;
    this->LastMousePos.y = v7;
    this->LastClickTime = v10;
    CursorPosAtPoint = Scaleform::Render::Text::DocView::GetCursorPosAtPoint(pObject, v6, v7);
    v14 = CursorPosAtPoint;
    if ( CursorPosAtPoint != -1i64 )
    {
      Scaleform::GFx::Text::EditorKit::SetCursorPos(this, CursorPosAtPoint, (this->Flags & 2) != 0);
      v15 = this->Flags;
      if ( (v15 & 2) != 0 && (v15 & 0x20) == 0 )
      {
        v16 = v15 | 0x20;
        this->Flags = v16;
        if ( v8 || v9 )
        {
          Scaleform::Render::Text::StyledText::GetParagraphByIndex(
            this->pDocView.pObject->pDocument.pObject,
            &result,
            v14,
            &pindexInParagraph);
          if ( result.pArray && result.CurIndex >= 0 && result.CurIndex < SLODWORD(result.pArray->Data.Size) )
          {
            pPara = result.pArray->Data.Data[result.CurIndex].pPara;
            Length = Scaleform::Render::Text::Paragraph::GetLength(pPara);
            v19 = pindexInParagraph;
            v20 = Length;
            v21 = pindexInParagraph;
            if ( v8 )
            {
              pText = pPara->Text.pText;
              if ( pindexInParagraph )
              {
                v23 = &pText[pindexInParagraph - 1];
                do
                {
                  v24 = *v23;
                  if ( Scaleform::SFiswspace(*v23) )
                    break;
                  if ( !Scaleform::SFiswalnum(v24) )
                    break;
                  --v23;
                  --v21;
                }
                while ( v21 );
              }
              for ( ; v19 < v20; ++v19 )
              {
                v25 = pText[v19];
                v26 = (unsigned __int64)v25 >> 8;
                v27 = Scaleform::UnicodeSpaceBits[v26];
                if ( Scaleform::UnicodeSpaceBits[v26] )
                {
                  if ( v27 == 1 )
                    break;
                  v28 = Scaleform::UnicodeSpaceBits[v27 + ((v25 >> 4) & 0xF)];
                  if ( _bittest(&v28, v25 & 0xF) )
                    break;
                }
                v29 = Scaleform::UnicodeAlnumBits[v26];
                if ( !Scaleform::UnicodeAlnumBits[v26] )
                  break;
                if ( v29 != 1 )
                {
                  v30 = Scaleform::UnicodeAlnumBits[v29 + ((v25 >> 4) & 0xF)];
                  if ( !_bittest(&v30, v25 & 0xF) )
                    break;
                }
              }
            }
            else
            {
              v21 = 0i64;
              v19 = Length;
            }
            StartIndex = pPara->StartIndex;
            v32 = StartIndex + v19;
            Scaleform::GFx::Text::EditorKit::SetCursorPos(this, v32, (this->Flags & 2) != 0);
            Scaleform::Render::Text::DocView::SetSelection(this->pDocView.pObject, StartIndex + v21, v32, 1);
          }
        }
        else if ( (v16 & 0x40) == 0 )
        {
          Scaleform::Render::Text::DocView::SetSelection(this->pDocView.pObject, v14, v14, 1);
        }
      }
    }
  }
}

void __fastcall Scaleform::GFx::Text::EditorKit::OnMouseMove(Scaleform::GFx::Text::EditorKit *this, float x, float y)
{
  const Scaleform::Render::Rect<float> *ViewRect; // rbx
  float v5; // xmm6_4
  float v6; // xmm0_4
  Scaleform::Render::Text::DocView *pObject; // rcx
  unsigned __int64 CursorPosAtPoint; // rax
  unsigned __int64 v9; // rbx

  if ( (this->Flags & 0x20) != 0 )
  {
    ViewRect = Scaleform::Render::Text::DocView::GetViewRect(this->pDocView.pObject);
    v5 = floorf(x - ViewRect->x1);
    v6 = floorf(y - ViewRect->y1);
    pObject = this->pDocView.pObject;
    this->LastMousePos.x = v5;
    this->LastMousePos.y = v6;
    CursorPosAtPoint = Scaleform::Render::Text::DocView::GetCursorPosAtPoint(pObject, v5, v6);
    v9 = CursorPosAtPoint;
    if ( CursorPosAtPoint != -1i64 )
    {
      Scaleform::GFx::Text::EditorKit::SetCursorPos(this, CursorPosAtPoint, (this->Flags & 2) != 0);
      if ( (this->Flags & 2) != 0 )
        Scaleform::Render::Text::DocView::SetSelection(
          this->pDocView.pObject,
          this->pDocView.pObject->BeginSelection,
          v9,
          1);
    }
  }
}

void __fastcall Scaleform::GFx::Text::EditorKit::OnMouseUp(
        Scaleform::GFx::Text::EditorKit *this,
        float x,
        float y,
        int buttons)
{
  if ( (buttons & 1) == 0 )
    this->Flags &= ~0x20u;
}

void __fastcall Scaleform::GFx::Text::EditorKit::OnSetFocus(Scaleform::GFx::Text::EditorKit *this)
{
  Scaleform::Render::Text::DocView::SetSelectionTextColor(this->pDocView.pObject, this->ActiveSelectionTextColor);
  Scaleform::Render::Text::DocView::SetSelectionBackgroundColor(this->pDocView.pObject, this->ActiveSelectionBkColor);
  this->Flags |= 0x400u;
}

char __fastcall Scaleform::GFx::Text::EditorKit::ParseRestrict(
        Scaleform::GFx::Text::EditorKit *this,
        const char *restrStr,
        unsigned __int64 restrStrLen)
{
  Scaleform::GFx::Text::EditorKit::RestrictParams *v6; // rbx
  unsigned int v8; // ebp
  const char *v9; // r13
  unsigned int v10; // edi
  bool v11; // r15
  unsigned int Char_Advance0; // ebx
  char *v13; // rax
  Scaleform::GFx::Text::EditorKit::RestrictParams *pObject; // rcx
  Scaleform::RangeData<void *> range; // [rsp+20h] [rbp-58h] BYREF
  int v16; // [rsp+80h] [rbp+8h] BYREF
  char *putf8Buffer; // [rsp+98h] [rbp+20h] BYREF

  v16 = 325;
  v6 = (Scaleform::GFx::Text::EditorKit::RestrictParams *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                                            Scaleform::Memory::pGlobalHeap,
                                                            this,
                                                            32i64,
                                                            &v16);
  if ( v6 )
  {
    v6->RestrictString.HeapTypeBits = 0i64;
    v6->RestrictRanges.Ranges.Data.Data = 0i64;
    v6->RestrictRanges.Ranges.Data.Size = 0i64;
    v6->RestrictRanges.Ranges.Data.Policy.Capacity = 0i64;
    Scaleform::StringLH::StringLH(&v6->RestrictString);
  }
  else
  {
    v6 = 0i64;
  }
  Scaleform::AutoPtr<Scaleform::GFx::Text::EditorKit::RestrictParams>::Reset(&this->pRestrict, v6, 1);
  if ( !this->pRestrict.pObject )
    return 0;
  v8 = 0;
  v9 = &restrStr[restrStrLen];
  v10 = 0;
  v11 = 0;
  putf8Buffer = (char *)restrStr;
  if ( restrStr < v9 )
  {
    do
    {
      Char_Advance0 = Scaleform::UTF8Util::DecodeNextChar_Advance0((const char **)&putf8Buffer);
      v13 = putf8Buffer;
      if ( !Char_Advance0 )
        v13 = --putf8Buffer;
      switch ( Char_Advance0 )
      {
        case '^':
          v11 = !v11;
          break;
        case '\\':
          if ( v13 >= v9 )
            return 1;
          Char_Advance0 = Scaleform::UTF8Util::DecodeNextChar_Advance0((const char **)&putf8Buffer);
          if ( !Char_Advance0 )
            --putf8Buffer;
LABEL_15:
          if ( v10 )
          {
            if ( Char_Advance0 < v10 )
              Char_Advance0 = v10;
          }
          else
          {
            v10 = Char_Advance0;
          }
          pObject = this->pRestrict.pObject;
          if ( v11 )
          {
            if ( !pObject->RestrictRanges.Ranges.Data.Size )
            {
              range.Index = 0i64;
              range.Length = 0x10000i64;
              range.Data = 0i64;
              Scaleform::RangeDataArray<void *,Scaleform::ArrayLH<Scaleform::RangeData<void *>,2,Scaleform::ArrayDefaultPolicy>>::SetRange(
                &pObject->RestrictRanges,
                &range);
            }
            Scaleform::RangeDataArray<void *,Scaleform::ArrayLH<Scaleform::RangeData<void *>,2,Scaleform::ArrayDefaultPolicy>>::ClearRange(
              &this->pRestrict.pObject->RestrictRanges,
              v10,
              Char_Advance0 - v10 + 1);
          }
          else
          {
            range.Index = v10;
            range.Data = 0i64;
            range.Length = Char_Advance0 - v10 + 1;
            Scaleform::RangeDataArray<void *,Scaleform::ArrayLH<Scaleform::RangeData<void *>,2,Scaleform::ArrayDefaultPolicy>>::SetRange(
              &pObject->RestrictRanges,
              &range);
          }
          v13 = putf8Buffer;
          v8 = Char_Advance0;
          v10 = 0;
          break;
        case '-':
          v10 = v8;
          break;
        default:
          goto LABEL_15;
      }
    }
    while ( v13 < v9 );
  }
  return 1;
}

unsigned __int64 __fastcall Scaleform::GFx::Text::EditorKit::PasteFromClipboard(
        Scaleform::GFx::Text::EditorKit *this,
        unsigned __int64 startPos,
        unsigned __int64 endPos,
        bool useRichClipboard)
{
  unsigned __int64 v4; // r13
  Scaleform::GFx::Clipboard *pObject; // rcx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // r12
  Scaleform::Render::Text::StyledText *v12; // rax
  Scaleform::Render::Text::StyledText *v13; // rsi
  Scaleform::Render::Text::DocView *v14; // rax
  wchar_t *v15; // r14
  Scaleform::Render::Text::DocView::CommandType v16; // edx
  wchar_t *v17; // r14
  Scaleform::Render::Text::DocView *v18; // rcx
  const Scaleform::WStringBuffer *v20; // rsi
  wchar_t *v21; // r14
  Scaleform::Render::Text::DocView::DocumentListener *v22; // rcx
  wchar_t *pText; // rdx
  wchar_t *v24; // rax
  Scaleform::WStringBuffer *p_command; // r8
  __int64 Length; // rcx
  bool v27; // zf
  Scaleform::Render::Text::DocView::CommandType v28; // edx
  Scaleform::Render::Text::DocView::DocumentListener *v29; // rcx
  const wchar_t *v30; // rdx
  wchar_t *v31; // rax
  unsigned __int64 v32; // rcx
  unsigned __int64 v33; // rbx
  unsigned __int64 v34; // rsi
  unsigned __int64 v35; // r13
  unsigned int CharAt; // eax
  Scaleform::GFx::Text::EditorKit::RestrictParams *v37; // rbx
  unsigned int v38; // er14
  __int64 RangeIndex; // rax
  unsigned __int64 Size; // rcx
  char v41; // al
  int v42; // ebx
  unsigned __int16 v43; // r15
  Scaleform::GFx::Text::EditorKit::RestrictParams *v44; // rbx
  __int64 v45; // rax
  unsigned __int64 v46; // rcx
  char v47; // al
  Scaleform::Render::Text::DocView *v48; // rcx
  Scaleform::Render::Text::DocView *v49; // rcx
  void *v50; // rbx
  Scaleform::String result; // [rsp+30h] [rbp-40h] BYREF
  unsigned __int64 command; // [rsp+38h] [rbp-38h] BYREF
  unsigned __int64 v53; // [rsp+40h] [rbp-30h]
  __int64 v54; // [rsp+48h] [rbp-28h]
  Scaleform::WStringBuffer pBuffer; // [rsp+50h] [rbp-20h] BYREF
  __int64 v56; // [rsp+A0h] [rbp+30h]

  v4 = -1i64;
  v56 = -1i64;
  if ( !this->IsReadOnly(this) )
  {
    pObject = this->pClipboard.pObject;
    if ( pObject )
    {
      if ( endPos < startPos )
      {
        v10 = endPos;
        endPos = startPos;
        startPos = v10;
      }
      v11 = 0i64;
      if ( !useRichClipboard || !pObject->ContainsRichText(pObject) )
      {
        v20 = this->pClipboard.pObject->GetText(this->pClipboard.pObject);
        if ( v20->Length )
        {
          v21 = (wchar_t *)&unk_140740B00;
          this->Flags &= ~0x40u;
          if ( startPos == endPos )
          {
            v22 = this->pDocView.pObject->pDocumentListener.pObject;
            if ( v22 )
            {
              pText = (wchar_t *)&unk_140740B00;
              if ( v20->pText )
                pText = v20->pText;
              if ( !v22->Editor_OnInsertingText(v22, this, startPos, v20->Length, pText) )
                return -1i64;
            }
            v24 = v20->pText;
            p_command = (Scaleform::WStringBuffer *)&command;
            Length = v20->Length;
            v27 = v20->pText == 0i64;
            command = startPos;
            v28 = Cmd_InsertPlainText;
            if ( !v27 )
              v21 = v24;
            v54 = Length;
            v53 = (unsigned __int64)v21;
          }
          else
          {
            v29 = this->pDocView.pObject->pDocumentListener.pObject;
            if ( v29 )
            {
              if ( !v29->Editor_OnRemovingText(v29, this, startPos, endPos - startPos) )
                return -1i64;
              v30 = (const wchar_t *)&unk_140740B00;
              if ( v20->pText )
                v30 = v20->pText;
              if ( !this->pDocView.pObject->pDocumentListener.pObject->Editor_OnInsertingText(
                      this->pDocView.pObject->pDocumentListener.pObject,
                      this,
                      startPos,
                      v20->Length,
                      v30) )
                return -1i64;
            }
            v31 = v20->pText;
            p_command = &pBuffer;
            v32 = v20->Length;
            v27 = v20->pText == 0i64;
            pBuffer.pText = (wchar_t *)startPos;
            v28 = Cmd_ReplaceTextByPlainText;
            if ( !v27 )
              v21 = v31;
            pBuffer.Length = endPos;
            pBuffer.Reserved.pBuffer = v21;
            pBuffer.Reserved.Size = v32;
          }
          v4 = startPos + Scaleform::Render::Text::DocView::EditCommand(this->pDocView.pObject, v28, p_command);
          v56 = v4;
        }
LABEL_45:
        if ( this->pRestrict.pObject )
        {
          v33 = Scaleform::Render::Text::StyledText::GetLength(this->pDocView.pObject->pDocument.pObject);
          Scaleform::Render::Text::DocView::GetText(this->pDocView.pObject, &result);
          v34 = 0i64;
          if ( v33 )
          {
            v35 = v33;
            while ( 1 )
            {
              CharAt = Scaleform::String::GetCharAt(&result, v11);
              v37 = this->pRestrict.pObject;
              v38 = CharAt;
              if ( !v37 )
                goto LABEL_74;
              RangeIndex = Scaleform::RangeDataArray<void *,Scaleform::ArrayLH<Scaleform::RangeData<void *>,2,Scaleform::ArrayDefaultPolicy>>::FindRangeIndex(
                             &this->pRestrict.pObject->RestrictRanges,
                             (unsigned __int16)CharAt);
              if ( RangeIndex == -1 )
                goto LABEL_57;
              if ( RangeIndex >= 0 )
              {
                Size = v37->RestrictRanges.Ranges.Data.Size;
                if ( RangeIndex >= Size )
                  RangeIndex = Size - 1;
                if ( RangeIndex < 0 )
                  goto LABEL_57;
              }
              else
              {
                RangeIndex = 0i64;
              }
              if ( RangeIndex < v37->RestrictRanges.Ranges.Data.Size )
              {
                v41 = 0;
                goto LABEL_58;
              }
LABEL_57:
              v41 = 1;
LABEL_58:
              if ( !v41 )
                goto LABEL_74;
              v42 = Scaleform::SFtowupper(v38);
              v43 = Scaleform::SFtowlower(v38);
              if ( v38 != v42 )
                v43 = v42;
              v44 = this->pRestrict.pObject;
              if ( !v44 )
              {
LABEL_73:
                v49 = this->pDocView.pObject;
                v53 = v34 + 1;
                command = v34;
                LOWORD(v54) = v43;
                Scaleform::Render::Text::DocView::EditCommand(v49, Cmd_ReplaceTextByChar, &command);
                goto LABEL_74;
              }
              v45 = Scaleform::RangeDataArray<void *,Scaleform::ArrayLH<Scaleform::RangeData<void *>,2,Scaleform::ArrayDefaultPolicy>>::FindRangeIndex(
                      &this->pRestrict.pObject->RestrictRanges,
                      v43);
              if ( v45 == -1 )
              {
LABEL_70:
                v47 = 1;
                goto LABEL_71;
              }
              if ( v45 >= 0 )
              {
                v46 = v44->RestrictRanges.Ranges.Data.Size;
                if ( v45 >= v46 )
                  v45 = v46 - 1;
                if ( v45 < 0 )
                  goto LABEL_70;
              }
              else
              {
                v45 = 0i64;
              }
              if ( v45 >= v44->RestrictRanges.Ranges.Data.Size )
                goto LABEL_70;
              v47 = 0;
LABEL_71:
              if ( !v47 )
                goto LABEL_73;
              v48 = this->pDocView.pObject;
              command = v34;
              Scaleform::Render::Text::DocView::EditCommand(v48, Cmd_DeleteChar, &command);
              --v34;
LABEL_74:
              ++v11;
              ++v34;
              if ( v11 >= v35 )
              {
                v4 = v56;
                break;
              }
            }
          }
          v50 = (void *)(result.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
          if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
                 (volatile int *)((result.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
                 -1) == 1 )
            Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v50);
        }
        return v4;
      }
      v12 = this->pClipboard.pObject->GetStyledText(this->pClipboard.pObject);
      v13 = v12;
      if ( !v12 )
        goto LABEL_45;
      ++v12->RefCount;
      if ( !Scaleform::Render::Text::StyledText::GetLength(v12) )
        goto LABEL_24;
      this->Flags &= ~0x40u;
      v14 = this->pDocView.pObject;
      if ( startPos == endPos )
      {
        if ( !v14->pDocumentListener.pObject )
        {
LABEL_15:
          v53 = (unsigned __int64)v13;
          v16 = Cmd_InsertStyledText;
LABEL_23:
          v18 = this->pDocView.pObject;
          command = startPos;
          v4 = startPos + Scaleform::Render::Text::DocView::EditCommand(v18, v16, &command);
          v56 = v4;
LABEL_24:
          Scaleform::RefCountNTSImpl::Release(v13);
          goto LABEL_45;
        }
        memset(&pBuffer, 0, sizeof(pBuffer));
        Scaleform::Render::Text::StyledText::GetText(v13, &pBuffer);
        v15 = (wchar_t *)&unk_140740B00;
        if ( pBuffer.pText )
          v15 = pBuffer.pText;
        if ( this->pDocView.pObject->pDocumentListener.pObject->Editor_OnInsertingText(
               this->pDocView.pObject->pDocumentListener.pObject,
               this,
               startPos,
               pBuffer.Length,
               v15) )
        {
          Scaleform::WStringBuffer::~WStringBuffer(&pBuffer);
          goto LABEL_15;
        }
        goto LABEL_25;
      }
      if ( v14->pDocumentListener.pObject )
      {
        memset(&pBuffer, 0, sizeof(pBuffer));
        Scaleform::Render::Text::StyledText::GetText(v13, &pBuffer);
        if ( !this->pDocView.pObject->pDocumentListener.pObject->Editor_OnRemovingText(
                this->pDocView.pObject->pDocumentListener.pObject,
                this,
                startPos,
                endPos - startPos) )
          goto LABEL_25;
        v17 = (wchar_t *)&unk_140740B00;
        if ( pBuffer.pText )
          v17 = pBuffer.pText;
        if ( !this->pDocView.pObject->pDocumentListener.pObject->Editor_OnInsertingText(
                this->pDocView.pObject->pDocumentListener.pObject,
                this,
                startPos,
                pBuffer.Length,
                v17) )
        {
LABEL_25:
          Scaleform::WStringBuffer::~WStringBuffer(&pBuffer);
          Scaleform::RefCountNTSImpl::Release(v13);
          return -1i64;
        }
        Scaleform::WStringBuffer::~WStringBuffer(&pBuffer);
      }
      v53 = endPos;
      v54 = (__int64)v13;
      v16 = Cmd_ReplaceTextByStyledText;
      goto LABEL_23;
    }
  }
  return v4;
}

void __fastcall Scaleform::RangeDataArray<void *,Scaleform::ArrayLH<Scaleform::RangeData<void *>,2,Scaleform::ArrayDefaultPolicy>>::Iterator::Remove(
        Scaleform::RangeDataArray<void *,Scaleform::ArrayLH<Scaleform::RangeData<void *>,2,Scaleform::ArrayDefaultPolicy> >::Iterator *this)
{
  __int64 Index; // rdx
  Scaleform::RangeDataArray<void *,Scaleform::ArrayLH<Scaleform::RangeData<void *>,2,Scaleform::ArrayDefaultPolicy> > *pArray; // rbx
  unsigned __int64 Size; // r8

  Index = this->Index;
  if ( Index >= 0 )
  {
    pArray = this->pArray;
    if ( Index < this->pArray->Ranges.Data.Size )
    {
      Size = pArray->Ranges.Data.Size;
      if ( Size == 1 )
      {
        Scaleform::ArrayData<Scaleform::RangeData<void *>,Scaleform::AllocatorLH<Scaleform::RangeData<void *>,2>,Scaleform::ArrayDefaultPolicy>::Resize(
          &this->pArray->Ranges.Data,
          0i64);
      }
      else
      {
        memmove(&pArray->Ranges.Data.Data[Index], &pArray->Ranges.Data.Data[Index + 1], 24 * (Size - Index) - 24);
        --pArray->Ranges.Data.Size;
      }
    }
  }
}

void __fastcall Scaleform::ArrayDataBase<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>>,Scaleform::AllocatorLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>>,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        Scaleform::ArrayDataBase<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> >,Scaleform::AllocatorLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> >,2>,Scaleform::ArrayDefaultPolicy> *this,
        const void *pheapAddr,
        unsigned __int64 newCapacity)
{
  Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> > *Data; // rdx
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // r8
  Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> > *v8; // rax
  int v9; // [rsp+30h] [rbp+8h] BYREF

  if ( newCapacity != this->Policy.Capacity )
  {
    Data = this->Data;
    if ( newCapacity )
    {
      v6 = (newCapacity + 3) & 0xFFFFFFFFFFFFFFFCui64;
      v7 = 24 * v6;
      if ( Data )
      {
        v8 = (Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> > *)Scaleform::Memory::pGlobalHeap->Realloc(
                                                                                             Scaleform::Memory::pGlobalHeap,
                                                                                             Data,
                                                                                             v7);
        this->Policy.Capacity = v6;
        this->Data = v8;
        return;
      }
      v9 = 2;
      this->Data = (Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> > *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
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

void __fastcall Scaleform::AutoPtr<Scaleform::GFx::Text::EditorKit::RestrictParams>::Reset(
        Scaleform::AutoPtr<Scaleform::GFx::Text::EditorKit::RestrictParams> *this,
        Scaleform::GFx::Text::EditorKit::RestrictParams *p,
        bool owner)
{
  Scaleform::GFx::Text::EditorKit::RestrictParams *pObject; // rsi
  volatile int *v7; // rbx

  pObject = this->pObject;
  if ( this->pObject != p )
  {
    if ( pObject && this->Owner )
    {
      this->Owner = 0;
      v7 = (volatile int *)(pObject->RestrictString.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
      if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(v7 + 2, -1) == 1 )
        Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, (void *)v7);
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, pObject->RestrictRanges.Ranges.Data.Data);
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, pObject);
    }
    this->pObject = p;
  }
  this->Owner = p && owner;
}

void __fastcall Scaleform::GFx::Text::EditorKit::ResetBlink(
        Scaleform::GFx::Text::EditorKit *this,
        bool state,
        bool blocked)
{
  if ( this->IsReadOnly(this) || !state )
    this->Flags &= ~8u;
  else
    this->Flags |= 8u;
  this->CursorTimer = 0.0;
  if ( blocked )
    this->Flags |= 0x10u;
}

void __fastcall Scaleform::ArrayData<Scaleform::RangeData<void *>,Scaleform::AllocatorLH<Scaleform::RangeData<void *>,2>,Scaleform::ArrayDefaultPolicy>::Resize(
        Scaleform::ArrayData<Scaleform::RangeData<void *>,Scaleform::AllocatorLH<Scaleform::RangeData<void *>,2>,Scaleform::ArrayDefaultPolicy> *this,
        unsigned __int64 newSize)
{
  unsigned __int64 Size; // rsi
  unsigned __int64 v5; // r8
  Scaleform::RangeData<void *> *v6; // rax
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
    Scaleform::ArrayDataBase<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>>,Scaleform::AllocatorLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>>,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      (Scaleform::ArrayDataBase<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> >,Scaleform::AllocatorLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> >,2>,Scaleform::ArrayDefaultPolicy> *)this,
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
        v6->Index = 0i64;
        v6->Length = 0i64;
      }
      ++v6;
    }
  }
}

__int64 __fastcall Scaleform::SFiswalnum(wchar_t charCode)
{
  unsigned __int64 v1; // rax
  int v2; // er8
  int v4; // edx
  int v5; // ecx

  v1 = (unsigned __int64)charCode >> 8;
  v2 = Scaleform::UnicodeAlnumBits[v1];
  if ( !Scaleform::UnicodeAlnumBits[v1] )
    return 0i64;
  if ( v2 == 1 )
    return 1i64;
  v4 = charCode & 0xF;
  v5 = Scaleform::UnicodeAlnumBits[v2 + ((charCode >> 4) & 0xF)];
  return _bittest(&v5, v4);
}

bool __fastcall Scaleform::GFx::Text::EditorKit::ScrollToPosition(
        Scaleform::GFx::Text::EditorKit *this,
        unsigned __int64 pos,
        bool avoidComposStr,
        bool wideCursor)
{
  bool v7; // di
  Scaleform::Render::Text::DocView *pObject; // rcx
  float x1; // xmm1_4
  float v10; // xmm2_4
  float x2; // xmm3_4
  int v12; // edx
  signed int HScrollOffset; // ebx
  signed int v14; // ebp
  bool v15; // sf
  float v16; // xmm0_4
  Scaleform::Render::Text::DocView *v17; // rcx
  Scaleform::Render::Text::DocView *v18; // rcx
  unsigned int v19; // ebx
  Scaleform::Render::Text::LineBuffer::Line::Alignment plineAlignment; // [rsp+40h] [rbp-58h] BYREF
  unsigned int plineIndex[3]; // [rsp+44h] [rbp-54h] BYREF
  Scaleform::Render::Rect<float> pcursorRect; // [rsp+50h] [rbp-48h] BYREF

  pcursorRect = 0i64;
  v7 = 0;
  if ( !(unsigned __int8)Scaleform::GFx::Text::EditorKit::CalcCursorRectOnScreen(
                           this,
                           pos,
                           &pcursorRect,
                           plineIndex,
                           0i64,
                           avoidComposStr,
                           &plineAlignment) )
    return v7;
  pObject = this->pDocView.pObject;
  x1 = pcursorRect.x1;
  v10 = wideCursor ? pcursorRect.x2 : pcursorRect.x1 + 20.0;
  x2 = pObject->mLineBuffer.Geom.VisibleRect.x2;
  if ( x2 >= v10
    && pObject->mLineBuffer.Geom.VisibleRect.y2 >= pcursorRect.y2
    && pcursorRect.x1 >= pObject->mLineBuffer.Geom.VisibleRect.x1
    && pcursorRect.y1 >= pObject->mLineBuffer.Geom.VisibleRect.y1 )
  {
    return v7;
  }
  if ( (pObject->AlignProps & 0x30) != 0 || (pObject->Flags & 1) != 0 )
    return v7;
  v12 = 1200;
  HScrollOffset = pObject->mLineBuffer.Geom.HScrollOffset;
  if ( plineAlignment )
    v12 = 0;
  v14 = pObject->mLineBuffer.Geom.HScrollOffset;
  if ( v10 <= x2 )
  {
    v16 = pObject->mLineBuffer.Geom.VisibleRect.x1;
    if ( v16 <= pcursorRect.x1 )
      goto LABEL_23;
    HScrollOffset -= v12 + (int)(float)(v16 - pcursorRect.x1);
    v15 = HScrollOffset < 0;
  }
  else
  {
    pcursorRect = 0i64;
    HScrollOffset += (int)(float)((float)(x1 - x2) + (float)v12);
    if ( pos
      && Scaleform::Render::Text::DocView::GetExactCharBoundaries(pObject, &pcursorRect, pos - 1)
      && (int)(float)(pcursorRect.x1 - 40.0) < HScrollOffset )
    {
      HScrollOffset = (int)(float)(pcursorRect.x1 - 40.0);
    }
    v15 = HScrollOffset < 0;
  }
  if ( v15 )
    HScrollOffset = 0;
LABEL_23:
  v17 = this->pDocView.pObject;
  if ( (v17->Flags & 8) == 0 || HScrollOffset < v14 )
    v7 = Scaleform::Render::Text::DocView::SetHScrollOffset(v17, HScrollOffset);
  v18 = this->pDocView.pObject;
  v19 = plineIndex[0];
  if ( plineIndex[0] < v18->mLineBuffer.Geom.FirstVisibleLinePos )
    return v7 | Scaleform::Render::Text::DocView::SetVScrollOffset(v18, plineIndex[0]);
  if ( v19 > Scaleform::Render::Text::DocView::GetBottomVScroll(v18) )
    return v7 | Scaleform::Render::Text::DocView::SetBottomVScroll(this->pDocView.pObject, v19);
  return v7;
}

void __fastcall Scaleform::GFx::Text::EditorKit::SetCursorPos(
        Scaleform::GFx::Text::EditorKit *this,
        unsigned __int64 pos,
        bool selectionAllowed)
{
  unsigned __int64 v4; // rdi
  unsigned __int64 Length; // rax
  Scaleform::Render::Text::DocView *pObject; // rax
  Scaleform::Render::Text::LineBuffer::Line *GlyphEntryAtIndex; // rax
  unsigned __int16 GlyphsCount; // cx
  unsigned __int16 Flags; // cx
  bool v11; // zf
  Scaleform::Render::Text::DocView *v12; // rcx
  unsigned __int64 CursorPos; // r8
  unsigned __int64 BeginSelection; // rdx
  Scaleform::Render::Text::DocView::DocumentListener *v15; // rcx
  unsigned __int64 ptextPos; // [rsp+30h] [rbp+8h] BYREF

  v4 = pos;
  if ( pos != -1i64 )
  {
    Length = Scaleform::Render::Text::StyledText::GetLength(this->pDocView.pObject->pDocument.pObject);
    if ( v4 > Length )
      v4 = Length;
    if ( this->IsReadOnly(this) )
      this->Flags &= ~8u;
    else
      this->Flags |= 8u;
    pObject = this->pDocView.pObject;
    this->CursorTimer = 0.0;
    if ( pObject->pImageSubstitutor )
    {
      GlyphEntryAtIndex = Scaleform::GFx::Text::EditorKit::GetGlyphEntryAtIndex(this, v4, &ptextPos);
      if ( GlyphEntryAtIndex )
      {
        GlyphsCount = GlyphEntryAtIndex->Data32.GlyphsCount;
        if ( (GlyphsCount & 0xF000) != 4096 && ptextPos != v4 )
        {
          if ( v4 < this->CursorPos )
            v4 = ptextPos;
          else
            v4 = ptextPos + ((unsigned __int64)GlyphsCount >> 12);
        }
      }
    }
  }
  this->CursorPos = v4;
  --this->CursorRect.FormatCounter;
  this->LastHorizCursorPos = -1.0;
  if ( v4 != -1i64 )
  {
    Scaleform::GFx::Text::EditorKit::ScrollToPosition(this, v4, 1, this->Flags & 0x100);
    Scaleform::Render::Text::DocView::SetDefaultTextAndParaFormat(this->pDocView.pObject, this->CursorPos);
  }
  Flags = this->Flags;
  if ( (Flags & 2) != 0 )
  {
    if ( selectionAllowed )
    {
      v11 = (Flags & 0x60) == 0;
      v12 = this->pDocView.pObject;
      if ( !v11 )
      {
        CursorPos = this->CursorPos;
        BeginSelection = v12->BeginSelection;
LABEL_22:
        Scaleform::Render::Text::DocView::SetSelection(v12, BeginSelection, CursorPos, 1);
        goto LABEL_23;
      }
    }
    else
    {
      v12 = this->pDocView.pObject;
    }
    BeginSelection = this->CursorPos;
    CursorPos = BeginSelection;
    goto LABEL_22;
  }
LABEL_23:
  v15 = this->pDocView.pObject->pDocumentListener.pObject;
  if ( v15 )
    v15->Editor_OnCursorMoved(v15, this);
}

void __fastcall Scaleform::RangeDataArray<void *,Scaleform::ArrayLH<Scaleform::RangeData<void *>,2,Scaleform::ArrayDefaultPolicy>>::SetRange(
        Scaleform::RangeDataArray<void *,Scaleform::ArrayLH<Scaleform::RangeData<void *>,2,Scaleform::ArrayDefaultPolicy> > *this,
        const Scaleform::RangeData<void *> *range)
{
  unsigned __int64 Size; // r15
  __int64 Index; // rdi
  __int64 NearestRangeIndex; // rax
  __int64 v7; // rsi
  __int64 v8; // r10
  Scaleform::RangeData<void *> *v9; // rdx
  unsigned __int64 v10; // r8
  signed __int64 v11; // rax
  Scaleform::RangeData<void *> *v12; // rax
  signed __int64 v13; // r12
  __int64 v14; // r13
  signed __int64 v15; // rcx
  __int64 v16; // r13
  unsigned __int64 v17; // r12
  signed __int64 v18; // rdx
  __int64 v19; // rdi
  __int64 v20; // r15
  unsigned __int64 v21; // r8
  Scaleform::RangeData<void *> *v22; // rdx
  unsigned __int64 v23; // rax
  unsigned __int64 Length; // rax
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rax
  __int64 v27; // r8
  int v28; // eax
  __int64 v29; // r15
  Scaleform::RangeData<void *> *v30; // r9
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rdx
  Scaleform::RangeData<void *> *v33; // r8
  __int64 v34; // r9
  __int64 v35; // rax
  __int64 v36; // rdx
  unsigned __int64 v37; // rsi
  unsigned __int64 v38; // rcx
  Scaleform::RangeData<void *> *v39; // r9
  unsigned __int64 v40; // rdx
  __int64 v41; // rcx
  unsigned __int64 v42; // r8
  Scaleform::RangeData<void *> *v43; // r9
  Scaleform::RangeData<void *> *v44; // rcx
  Scaleform::RangeDataArray<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>,Scaleform::ArrayLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> >,2,Scaleform::ArrayDefaultPolicy> >::Iterator v45; // [rsp+20h] [rbp-28h] BYREF
  Scaleform::RangeDataArray<void *,Scaleform::ArrayLH<Scaleform::RangeData<void *>,2,Scaleform::ArrayDefaultPolicy> >::Iterator v46; // [rsp+30h] [rbp-18h] BYREF
  void *Data; // [rsp+70h] [rbp+28h]

  Size = this->Ranges.Data.Size;
  if ( !Size )
  {
    Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::RangeData<void *>,Scaleform::AllocatorLH<Scaleform::RangeData<void *>,2>,Scaleform::ArrayDefaultPolicy>>::InsertAt(
      &this->Ranges,
      0i64,
      range);
    return;
  }
  Index = range->Index;
  NearestRangeIndex = Scaleform::RangeDataArray<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>,Scaleform::ArrayLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>>,2,Scaleform::ArrayDefaultPolicy>>::FindNearestRangeIndex(
                        (Scaleform::RangeDataArray<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>,Scaleform::ArrayLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> >,2,Scaleform::ArrayDefaultPolicy> > *)this,
                        range->Index);
  v45.pArray = (Scaleform::RangeDataArray<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>,Scaleform::ArrayLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> >,2,Scaleform::ArrayDefaultPolicy> > *)this;
  v7 = NearestRangeIndex;
  if ( NearestRangeIndex >= 0 )
  {
    if ( NearestRangeIndex < Size )
    {
      v45.Index = NearestRangeIndex;
    }
    else
    {
      v7 = Size - 1;
      v45.Index = Size - 1;
    }
  }
  else
  {
    v7 = 0i64;
    v45.Index = 0i64;
  }
  v8 = v7;
  v9 = &this->Ranges.Data.Data[v7];
  if ( Index < v9->Index
    || (v10 = range->Length, (__int64)(v10 + Index - 1) > (signed __int64)(v9->Length - 1 + v9->Index)) )
  {
    if ( Index >= v9->Index )
    {
      Length = v9->Length;
      if ( Index <= (__int64)(Length + v9->Index - 1) )
      {
        v25 = v9->Length;
        v26 = v9->Index + Length - Index;
        if ( v26 <= v25 )
          v9->Length = v25 - v26;
        else
          v9->Length = 0i64;
LABEL_31:
        if ( v7 < (signed __int64)this->Ranges.Data.Size )
          v45.Index = ++v7;
        v46.pArray = this;
        v46.Index = v7;
        v19 = v7;
        Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::RangeData<void *>,Scaleform::AllocatorLH<Scaleform::RangeData<void *>,2>,Scaleform::ArrayDefaultPolicy>>::InsertAt(
          &this->Ranges,
          v7,
          range);
        goto LABEL_50;
      }
    }
    v27 = v9->Index;
    if ( Index < v9->Index )
      goto LABEL_42;
    if ( Index <= (signed __int64)(v9->Length + v27 - 1) )
      goto LABEL_46;
    if ( Index >= v27 )
      v28 = LODWORD(v9->Length) - Index + v27 - 1;
    else
LABEL_42:
      v28 = v27 - Index;
    if ( v28 > 0 )
    {
LABEL_45:
      Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::RangeData<void *>,Scaleform::AllocatorLH<Scaleform::RangeData<void *>,2>,Scaleform::ArrayDefaultPolicy>>::InsertAt(
        &this->Ranges,
        v7,
        range);
      goto LABEL_49;
    }
LABEL_46:
    Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::RangeData<void *>,Scaleform::AllocatorLH<Scaleform::RangeData<void *>,2>,Scaleform::ArrayDefaultPolicy>>::InsertAt(
      &this->Ranges,
      v7 + 1,
      range);
    if ( v7 < (signed __int64)this->Ranges.Data.Size )
      ++v7;
    v45.Index = v7;
    goto LABEL_49;
  }
  v11 = v9->Length;
  if ( v9->Index != Index )
  {
    if ( v9->Index + v11 > (__int64)(v10 + Index) )
    {
      Data = v9->Data;
      v13 = v9->Length;
      v14 = v9->Index;
      if ( v9->Index + v13 - Index <= (unsigned __int64)v13 )
        v9->Length = Index - v9->Index;
      else
        v9->Length = 0i64;
      v15 = range->Length + this->Ranges.Data.Data[v8].Length;
      if ( v15 > v13 )
        v15 = v13;
      v16 = v15 + v14;
      v17 = v13 - v15;
      Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::RangeData<void *>,Scaleform::AllocatorLH<Scaleform::RangeData<void *>,2>,Scaleform::ArrayDefaultPolicy>>::InsertAt(
        &this->Ranges,
        v7 + 1,
        range);
      v18 = this->Ranges.Data.Size;
      v46.pArray = this;
      if ( v7 < v18 )
        ++v7;
      v45.Index = v7;
      v19 = v7;
      v46.Index = v7;
      v20 = v7 + 1;
      Scaleform::ArrayData<Scaleform::RangeData<void *>,Scaleform::AllocatorLH<Scaleform::RangeData<void *>,2>,Scaleform::ArrayDefaultPolicy>::Resize(
        &this->Ranges.Data,
        v18 + 1);
      v21 = this->Ranges.Data.Size;
      if ( v7 + 1 < v21 - 1 )
        memmove(&this->Ranges.Data.Data[v20 + 1], &this->Ranges.Data.Data[v20], 24 * (v21 - v20) - 24);
      v22 = &this->Ranges.Data.Data[v20];
      if ( v22 )
      {
        v22->Data = Data;
        v22->Index = v16;
        v22->Length = v17;
      }
      if ( v7 < (signed __int64)this->Ranges.Data.Size )
      {
        ++v7;
        v45.Index = v20;
      }
      goto LABEL_52;
    }
    v23 = v9->Length;
    if ( v10 <= v23 )
      v9->Length = v23 - v10;
    else
      v9->Length = 0i64;
    goto LABEL_31;
  }
  if ( (__int64)v10 > v11 )
    v10 = v9->Length;
  v9->Index += v10;
  v9->Length = v11 - v10;
  v12 = this->Ranges.Data.Data;
  if ( this->Ranges.Data.Data[v8].Length )
    goto LABEL_45;
  v12[v8].Scaleform::Range = range->Scaleform::Range;
  v12[v8].Data = range->Data;
LABEL_49:
  v46.pArray = this;
  v19 = v7;
  v46.Index = v7;
LABEL_50:
  if ( v7 < (signed __int64)this->Ranges.Data.Size )
    v45.Index = ++v7;
LABEL_52:
  if ( !Scaleform::RangeDataArray<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>,Scaleform::ArrayLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>>,2,Scaleform::ArrayDefaultPolicy>>::Iterator::IsFinished(&v45) )
  {
    v29 = v7;
    do
    {
      v30 = &this->Ranges.Data.Data[v29];
      if ( v30->Index < range->Index
        || (signed __int64)(v30->Length + v30->Index - 1) > (signed __int64)(range->Length + range->Index - 1) )
      {
        break;
      }
      if ( v7 >= 0 )
      {
        v31 = this->Ranges.Data.Size;
        if ( v7 < v31 )
        {
          if ( v31 == 1 )
          {
            Scaleform::ArrayData<Scaleform::RangeData<void *>,Scaleform::AllocatorLH<Scaleform::RangeData<void *>,2>,Scaleform::ArrayDefaultPolicy>::Resize(
              &this->Ranges.Data,
              0i64);
          }
          else
          {
            memmove(&this->Ranges.Data.Data[v29], &v30[1], 24 * (v31 - v7) - 24);
            --this->Ranges.Data.Size;
          }
        }
      }
    }
    while ( !Scaleform::RangeDataArray<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>,Scaleform::ArrayLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>>,2,Scaleform::ArrayDefaultPolicy>>::Iterator::IsFinished(&v45) );
  }
  if ( v7 >= 0 && v7 < this->Ranges.Data.Size )
  {
    v32 = range->Length;
    v33 = &this->Ranges.Data.Data[v7];
    v34 = v32 + range->Index - 1;
    if ( v34 >= v33->Index )
    {
      v35 = v33->Length;
      if ( v34 <= v35 + v33->Index - 1 )
      {
        v36 = range->Index + v32 - v33->Index;
        if ( v36 > v35 )
          v36 = v33->Length;
        v33->Index += v36;
        v33->Length = v35 - v36;
      }
    }
  }
  if ( v19 >= 0 )
  {
    v37 = v19 - 1;
    if ( v19 - 1 >= 0 )
    {
      v38 = this->Ranges.Data.Size;
      if ( v37 < v38 )
      {
        v39 = &this->Ranges.Data.Data[v37];
        if ( v39->Length )
        {
          if ( v39->Index + v39->Length == range->Index && v39->Data == this->Ranges.Data.Data[v19].Data )
          {
            v39->Length += range->Length;
            Scaleform::RangeDataArray<void *,Scaleform::ArrayLH<Scaleform::RangeData<void *>,2,Scaleform::ArrayDefaultPolicy>>::Iterator::Remove(&v46);
            --v19;
          }
        }
        else
        {
          --v19;
          if ( v38 == 1 )
          {
            Scaleform::ArrayData<Scaleform::RangeData<void *>,Scaleform::AllocatorLH<Scaleform::RangeData<void *>,2>,Scaleform::ArrayDefaultPolicy>::Resize(
              &this->Ranges.Data,
              0i64);
          }
          else
          {
            memmove(&this->Ranges.Data.Data[v37], &v39[1], 24 * (v38 - v37) - 24);
            --this->Ranges.Data.Size;
          }
        }
      }
    }
  }
  v40 = this->Ranges.Data.Size;
  v41 = v19;
  v46.pArray = this;
  v46.Index = v19;
  if ( v19 < (__int64)v40 )
  {
    v41 = v19 + 1;
    v46.Index = v19 + 1;
  }
  if ( v41 >= 0 && v41 < v40 )
  {
    v42 = this->Ranges.Data.Data[v41].Length;
    v43 = &this->Ranges.Data.Data[v41];
    if ( v42 )
    {
      v44 = &this->Ranges.Data.Data[v19];
      if ( v44->Index + v44->Length == v43->Index && v44->Data == v43->Data )
      {
        v44->Length += v42;
        Scaleform::RangeDataArray<void *,Scaleform::ArrayLH<Scaleform::RangeData<void *>,2,Scaleform::ArrayDefaultPolicy>>::Iterator::Remove(&v46);
      }
    }
    else if ( v40 == 1 )
    {
      Scaleform::ArrayData<Scaleform::RangeData<void *>,Scaleform::AllocatorLH<Scaleform::RangeData<void *>,2>,Scaleform::ArrayDefaultPolicy>::Resize(
        &this->Ranges.Data,
        0i64);
    }
    else
    {
      memmove(&this->Ranges.Data.Data[v41], &v43[1], 24 * (v40 - v41) - 24);
      --this->Ranges.Data.Size;
    }
  }
}

__int64 __fastcall Scaleform::GFx::Text::EditorKit::SetRestrict(
        Scaleform::GFx::Text::EditorKit *this,
        const Scaleform::String *restrStr)
{
  unsigned __int8 v4; // bl

  v4 = Scaleform::GFx::Text::EditorKit::ParseRestrict(
         this,
         (const char *)((restrStr->HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12),
         *(_QWORD *)(restrStr->HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) & 0x7FFFFFFFFFFFFFFFi64);
  Scaleform::String::operator=(&this->pRestrict.pObject->RestrictString, restrStr);
  return v4;
}

void __fastcall Scaleform::GFx::Text::EditorKit::SetSelection(
        Scaleform::GFx::Text::EditorKit *this,
        unsigned __int64 startPos,
        unsigned __int64 endPos)
{
  if ( !this->IsReadOnly(this) || (this->Flags & 2) != 0 )
    Scaleform::GFx::Text::EditorKit::SetCursorPos(this, endPos, (this->Flags & 2) != 0);
  Scaleform::Render::Text::DocView::SetSelection(this->pDocView.pObject, startPos, endPos, (this->Flags & 2) != 0);
}

unsigned __int64 __fastcall Scaleform::GFx::Text::EditorKit::TextPos2GlyphOffset(
        Scaleform::GFx::Text::EditorKit *this,
        unsigned __int64 textPos)
{
  if ( this->HasCompositionString(this) && textPos > this->pComposStr.pObject->GetPosition(this->pComposStr.pObject) )
    return textPos + this->pComposStr.pObject->GetLength(this->pComposStr.pObject);
  else
    return textPos;
}

unsigned __int64 __fastcall Scaleform::GFx::Text::EditorKit::TextPos2GlyphPos(
        Scaleform::GFx::Text::EditorKit *this,
        unsigned __int64 textPos)
{
  if ( this->HasCompositionString(this) && textPos >= this->pComposStr.pObject->GetPosition(this->pComposStr.pObject) )
    return textPos + this->pComposStr.pObject->GetLength(this->pComposStr.pObject);
  else
    return textPos;
}

void __fastcall Scaleform::GFx::Text::EditorKit::UpdateWideCursor(Scaleform::GFx::Text::EditorKit *this)
{
  Scaleform::Render::Text::Highlighter *HighlighterManager; // rdi
  Scaleform::Render::Text::HighlightDesc *HighlighterPtr; // rax
  Scaleform::Render::Text::HighlightDesc *v4; // rdx
  bool v5; // r8
  unsigned __int64 CursorPos; // rcx
  Scaleform::Render::Text::HighlightDesc desc; // [rsp+20h] [rbp-48h] BYREF

  if ( !this->IsReadOnly(this) && (this->Flags & 0x100) != 0 )
  {
    HighlighterManager = Scaleform::Render::Text::DocView::CreateHighlighterManager(this->pDocView.pObject);
    HighlighterPtr = Scaleform::Render::Text::Highlighter::GetHighlighterPtr(HighlighterManager, 0x7FFFFFFEu);
    v4 = HighlighterPtr;
    if ( HighlighterPtr )
    {
      v5 = HighlighterPtr->Length != 0;
    }
    else
    {
      desc.Info.UnderlineColor.Raw = 0;
      memset(&desc, 0, 40);
      desc.Id = 2147483646;
      *(_QWORD *)&desc.Info.BackgroundColor.Channels.Blue = -16777216i64;
      desc.Info.Flags = 24;
      v4 = Scaleform::Render::Text::Highlighter::CreateHighlighter(HighlighterManager, &desc);
      v5 = 0;
    }
    CursorPos = this->CursorPos;
    if ( v4->StartPos != CursorPos || v5 != ((this->Flags & 8) != 0) )
    {
      v4->StartPos = CursorPos;
      v4->Length = (this->Flags >> 3) & 1;
      Scaleform::Render::Text::DocView::UpdateHighlight(this->pDocView.pObject, v4);
    }
  }
}

