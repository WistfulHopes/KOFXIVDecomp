#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraystaticbuff.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_strokeraa.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_queue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_docview.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_range.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_vertex.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_rasterizer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_drawableimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_filterdesc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_buffer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_core.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshkey.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_fontmanager.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_font.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treecachetext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_states.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treecachenode.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessdefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixpool.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_statebag.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_bundle.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatapacked.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treenode.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_pathdatapacker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_hash.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_context.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_styledtext.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix3x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitivebundle.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessgen.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessellator.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hal.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cacheeffect.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threadcheck.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textmeshprovider.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphparam.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitive.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphfitter.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocaddr.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_radixtree.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_stroker.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hairliner.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_gradients.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_image.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cxform.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_linebuffer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_containers.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_highlight.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_viewport.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_twips.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixstate.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_profiler.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_constants.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treetext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filters.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filterparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_sgmlparser.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textlayout.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix4x4.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_scale9grid.h"

Scaleform::Render::TreeText::NodeData::NodeData(const Scaleform::Render::TreeText::NodeData & __that); // 0x1402F2EA0
Scaleform::Render::TreeText::NodeData::NodeData(); // 0x1402F2FB0
Scaleform::Render::TextLayout::Builder::~Builder(); // 0x1402F2FF0
Scaleform::Render::BlurFilterParams & Scaleform::Render::BlurFilterParams::operator=(const Scaleform::Render::BlurFilterParams & __that); // 0x1402F30D0
Scaleform::Render::TreeText::NodeData & Scaleform::Render::TreeText::NodeData::operator=(const Scaleform::Render::TreeText::NodeData & __that); // 0x1402F3150
Scaleform::Render::TreeText::NodeData::NodeData(Scaleform::Render::ContextImpl::NonlocalCloneArg<Scaleform::Render::TreeText::NodeData> src); // 0x1402F2F20
bool Scaleform::Render::TreeText::NodeData::PropagateUp(Scaleform::Render::ContextImpl::Entry * entry); // 0x1402F3F10
Scaleform::Render::TreeCacheNode * Scaleform::Render::TreeText::NodeData::updateCache(Scaleform::Render::HAL * hal, Scaleform::Render::TreeCacheNode * pparent, Scaleform::Render::TreeCacheNode * pinsert, Scaleform::Render::TreeNode * pnode, unsigned short depth); // 0x1402F5720
Scaleform::Render::TreeNode * Scaleform::Render::TreeText::NodeData::CloneCreate(Scaleform::Render::ContextImpl::Context * context); // 0x1402F3310
void Scaleform::Render::TreeText::SetLayout(const Scaleform::Render::TextLayout::Builder & b); // 0x1402F50C0
void Scaleform::Render::TreeText::Init(Scaleform::Render::Text::Allocator * pallocator, Scaleform::Render::Text::FontManagerBase * fntMgr, Scaleform::Log * log); // 0x1402F3AE0
void Scaleform::Render::TreeText::Init(Scaleform::Render::Text::DocView * docView); // 0x1402F3CA0
Scaleform::Render::Text::DocView * Scaleform::Render::TreeText::GetDocView(); // 0x1402F36D0
void Scaleform::Render::TreeText::SetText(const char * putf8Str, unsigned long long lengthInBytes); // 0x1402F5350
void Scaleform::Render::TreeText::SetText(const wchar_t * pstr, unsigned long long lengthInChars); // 0x1402F53E0
Scaleform::String Scaleform::Render::TreeText::GetText(); // 0x1402F39F0
void Scaleform::Render::TreeText::SetHtmlText(const char * putf8Str, unsigned long long lengthInBytes, Scaleform::ArrayDH<Scaleform::Render::Text::StyledText::HTMLImageTagInfo,2,Scaleform::ArrayDefaultPolicy> * pimgInfoArr); // 0x1402F4F60
void Scaleform::Render::TreeText::SetHtmlText(const wchar_t * pstr, unsigned long long lengthInChars, Scaleform::ArrayDH<Scaleform::Render::Text::StyledText::HTMLImageTagInfo,2,Scaleform::ArrayDefaultPolicy> * pimgInfoArr); // 0x1402F5010
Scaleform::String Scaleform::Render::TreeText::GetHtmlText(); // 0x1402F3970
void Scaleform::Render::TreeText::SetBounds(const Scaleform::Render::Rect<float> & r); // 0x1402F44C0
Scaleform::Render::Rect<float> Scaleform::Render::TreeText::GetBounds(); // 0x1402F3640
void Scaleform::Render::TreeText::SetColor(Scaleform::Render::Color c, unsigned long long startPos, unsigned long long endPos); // 0x1402F4550
void Scaleform::Render::TreeText::SetFont(const char * pfontName, unsigned long long startPos, unsigned long long endPos); // 0x1402F4B20
void Scaleform::Render::TreeText::SetFontSize(float fontSize, unsigned long long startPos, unsigned long long endPos); // 0x1402F4C70
void Scaleform::Render::TreeText::SetFontStyle(Scaleform::Render::TreeText::FontStyle fontStyle, unsigned long long startPos, unsigned long long endPos); // 0x1402F4DD0
void Scaleform::Render::TreeText::SetLetterSpacing(float letterSpacing, unsigned long long startPos, unsigned long long endPos); // 0x1402F5160
void Scaleform::Render::TreeText::SetUnderline(bool underline, unsigned long long startPos, unsigned long long endPos); // 0x1402F5470
void Scaleform::Render::TreeText::SetMultiline(bool multiline); // 0x1402F52B0
bool Scaleform::Render::TreeText::IsMultiline(); // 0x1402F3E10
void Scaleform::Render::TreeText::SetWordWrap(bool wordWrap); // 0x1402F5680
bool Scaleform::Render::TreeText::IsWordWrap(); // 0x1402F3E70
void Scaleform::Render::TreeText::SetAlignment(Scaleform::Render::TreeText::Alignment a); // 0x1402F4240
Scaleform::Render::TreeText::Alignment Scaleform::Render::TreeText::GetAlignment(); // 0x1402F34A0
void Scaleform::Render::TreeText::SetVAlignment(Scaleform::Render::TreeText::VAlignment a); // 0x1402F55C0
Scaleform::Render::TreeText::VAlignment Scaleform::Render::TreeText::GetVAlignment(); // 0x1402F3A70
void Scaleform::Render::TreeText::SetBorderColor(const Scaleform::Render::Color & borderColor); // 0x1402F4420
void Scaleform::Render::TreeText::SetBorderColor(unsigned long borderColor); // 0x1402F4430
Scaleform::Render::Color Scaleform::Render::TreeText::GetBorderColor(); // 0x1402F35E0
void Scaleform::Render::TreeText::SetBackgroundColor(const Scaleform::Render::Color & bkgColor); // 0x1402F4380
void Scaleform::Render::TreeText::SetBackgroundColor(unsigned long bkgColor); // 0x1402F4390
Scaleform::Render::Color Scaleform::Render::TreeText::GetBackgroundColor(); // 0x1402F3580
void Scaleform::Render::TreeText::SetAAMode(Scaleform::Render::TreeText::AAMode aa); // 0x1402F41A0
Scaleform::Render::TreeText::AAMode Scaleform::Render::TreeText::GetAAMode(); // 0x1402F3440
void Scaleform::Render::TreeText::Filter::InitByDefaultValues(); // 0x1402F3CF0
void Scaleform::Render::TreeText::SetFilters(const Scaleform::Render::TreeText::Filter * filters, unsigned long long filtersCnt); // 0x1402F46A0
unsigned long long Scaleform::Render::TreeText::GetFilters(Scaleform::Render::TreeText::Filter * filtersBuf, unsigned long long filtersCntInBuf); // 0x1402F3710
void Scaleform::Render::TreeText::ClearFilters(); // 0x1402F32D0
void Scaleform::Render::TreeText::NotifyLayoutChanged(); // 0x1402F3ED0void __fastcall Scaleform::Render::TreeNode::NodeData::NodeData(
        Scaleform::Render::TreeNode::NodeData *this,
        Scaleform::Render::ContextImpl::NonlocalCloneArg<Scaleform::Render::TreeNode::NodeData> src)
{
  float y2; // xmm2_4
  float x2; // xmm1_4
  float y1; // xmm0_4
  float v5; // xmm2_4
  float v6; // xmm1_4
  float v7; // xmm0_4

  this->__vftable = (Scaleform::Render::TreeNode::NodeData_vtbl *)&Scaleform::Render::ContextImpl::EntryData::`vftable';
  this->Type = src.pC->Type;
  this->Flags = src.pC->Flags & 0xFFCF;
  this->__vftable = (Scaleform::Render::TreeNode::NodeData_vtbl *)&Scaleform::Render::TreeNode::NodeData::`vftable';
  this->M34 = src.pC->M34;
  this->States.ArraySize = 0i64;
  this->States.DataValue = 0i64;
  this->Cx = src.pC->Cx;
  y2 = src.pC->AproxLocalBounds.y2;
  x2 = src.pC->AproxLocalBounds.x2;
  y1 = src.pC->AproxLocalBounds.y1;
  this->AproxLocalBounds.x1 = src.pC->AproxLocalBounds.x1;
  this->AproxLocalBounds.y1 = y1;
  this->AproxLocalBounds.x2 = x2;
  this->AproxLocalBounds.y2 = y2;
  v5 = src.pC->AproxParentBounds.y2;
  v6 = src.pC->AproxParentBounds.x2;
  v7 = src.pC->AproxParentBounds.y1;
  this->AproxParentBounds.x1 = src.pC->AproxParentBounds.x1;
  this->AproxParentBounds.y1 = v7;
  this->AproxParentBounds.x2 = v6;
  this->AproxParentBounds.y2 = v5;
}

void __fastcall Scaleform::Render::TreeText::NodeData::NodeData(
        Scaleform::Render::TreeText::NodeData *this,
        const Scaleform::Render::TreeText::NodeData *__that)
{
  Scaleform::Render::Text::DocView *pObject; // rcx
  Scaleform::RefCountVImpl *v5; // rcx

  Scaleform::Render::TreeNode::NodeData::NodeData(this, __that);
  this->__vftable = (Scaleform::Render::TreeText::NodeData_vtbl *)&Scaleform::Render::TreeText::NodeData::`vftable';
  pObject = __that->pDocView.pObject;
  if ( pObject )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)pObject);
  this->pDocView.pObject = __that->pDocView.pObject;
  v5 = (Scaleform::RefCountVImpl *)__that->pLayout.pObject;
  if ( v5 )
    Scaleform::Render::RenderBuffer::AddRef(v5);
  this->pLayout.pObject = __that->pLayout.pObject;
  this->TextFlags = __that->TextFlags;
}

void __fastcall Scaleform::Render::TreeText::NodeData::NodeData(
        Scaleform::Render::TreeText::NodeData *this,
        Scaleform::Render::ContextImpl::NonlocalCloneArg<Scaleform::Render::TreeText::NodeData> src)
{
  const Scaleform::Render::TreeText::NodeData *pC; // rax
  Scaleform::Render::Text::DocView *pObject; // rcx
  Scaleform::Render::TextLayout **p_pObject; // rdi
  Scaleform::RefCountVImpl *v6; // rcx

  Scaleform::Render::TreeNode::NodeData::NodeData(
    this,
    (Scaleform::Render::ContextImpl::NonlocalCloneArg<Scaleform::Render::TreeNode::NodeData>)src.pC);
  this->__vftable = (Scaleform::Render::TreeText::NodeData_vtbl *)&Scaleform::Render::TreeText::NodeData::`vftable';
  pC = src.pC;
  pObject = src.pC->pDocView.pObject;
  if ( pObject )
  {
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)pObject);
    pC = src.pC;
  }
  p_pObject = &pC->pLayout.pObject;
  this->pDocView.pObject = src.pC->pDocView.pObject;
  v6 = (Scaleform::RefCountVImpl *)pC->pLayout.pObject;
  if ( v6 )
  {
    Scaleform::Render::RenderBuffer::AddRef(v6);
    pC = src.pC;
  }
  this->pLayout.pObject = *p_pObject;
  this->TextFlags = pC->TextFlags;
}

void __fastcall Scaleform::Render::TreeText::NodeData::NodeData(Scaleform::Render::TreeText::NodeData *this)
{
  Scaleform::Render::TreeNode::NodeData::NodeData(this, ET_Text);
  this->__vftable = (Scaleform::Render::TreeText::NodeData_vtbl *)&Scaleform::Render::TreeText::NodeData::`vftable';
  this->pDocView.pObject = 0i64;
  this->pLayout.pObject = 0i64;
  this->TextFlags = 0;
}

void __fastcall Scaleform::Render::TextLayout::Builder::~Builder(Scaleform::Render::TextLayout::Builder *this)
{
  Scaleform::RefCountImpl **Static; // rdi

  Static = this->RefCntData.Static;
  if ( this->RefCntData.Data != this->RefCntData.Static )
    ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
  this->RefCntData.Data = Static;
  this->RefCntData.Size = 0i64;
  if ( this->Images.Data != this->Images.Static )
    ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
  this->Images.Data = this->Images.Static;
  this->Images.Size = 0i64;
  if ( this->Fonts.Data != this->Fonts.Static )
    ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
  this->Fonts.Data = this->Fonts.Static;
  this->Fonts.Size = 0i64;
  if ( this->Data.Data != this->Data.Static )
    ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
  this->Data.Size = 0i64;
  this->Data.Data = this->Data.Static;
}

Scaleform::Render::BlurFilterParams *__fastcall Scaleform::Render::BlurFilterParams::operator=(
        Scaleform::Render::BlurFilterParams *this,
        const Scaleform::Render::BlurFilterParams *__that)
{
  float x; // eax
  Scaleform::RefCountVImpl *pObject; // rcx
  Scaleform::RefCountVImpl *v6; // rcx

  this->Mode = __that->Mode;
  this->Passes = __that->Passes;
  this->BlurX = __that->BlurX;
  this->BlurY = __that->BlurY;
  x = __that->Offset.x;
  this->Offset.y = __that->Offset.y;
  this->Offset.x = x;
  this->Strength = __that->Strength;
  *(_QWORD *)&this->Colors[0].Channels.Blue = *(_QWORD *)&__that->Colors[0].Channels.Blue;
  pObject = (Scaleform::RefCountVImpl *)__that->Gradient.pObject;
  if ( pObject )
    Scaleform::Render::RenderBuffer::AddRef(pObject);
  v6 = (Scaleform::RefCountVImpl *)this->Gradient.pObject;
  if ( v6 )
    Scaleform::RefCountImpl::Release(v6);
  this->Gradient.pObject = __that->Gradient.pObject;
  return this;
}

Scaleform::Render::TreeText::NodeData *__fastcall Scaleform::Render::TreeText::NodeData::operator=(
        Scaleform::Render::TreeText::NodeData *this,
        const Scaleform::Render::TreeText::NodeData *__that)
{
  Scaleform::Render::Text::DocView *pObject; // rcx
  Scaleform::Render::Text::DocView *v5; // rcx
  Scaleform::RefCountVImpl *v6; // rcx
  Scaleform::RefCountVImpl *v7; // rcx

  Scaleform::Render::TreeNode::NodeData::operator=(this, __that);
  pObject = __that->pDocView.pObject;
  if ( pObject )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)pObject);
  v5 = this->pDocView.pObject;
  if ( v5 )
    Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v5);
  this->pDocView.pObject = __that->pDocView.pObject;
  v6 = (Scaleform::RefCountVImpl *)__that->pLayout.pObject;
  if ( v6 )
    Scaleform::Render::RenderBuffer::AddRef(v6);
  v7 = (Scaleform::RefCountVImpl *)this->pLayout.pObject;
  if ( v7 )
    Scaleform::RefCountImpl::Release(v7);
  this->pLayout.pObject = __that->pLayout.pObject;
  this->TextFlags = __that->TextFlags;
  return this;
}

void __fastcall Scaleform::Render::TreeText::ClearFilters(Scaleform::Render::TreeText *this)
{
  Scaleform::Render::TreeText::Filter filters; // [rsp+20h] [rbp-28h] BYREF

  filters.Type = 0;
  Scaleform::Render::TreeText::Filter::InitByDefaultValues(&filters);
  Scaleform::Render::TreeText::SetFilters(this, &filters, 1ui64);
}

Scaleform::Render::ContextImpl::Entry *__fastcall Scaleform::Render::TreeText::NodeData::CloneCreate(
        Scaleform::Render::TreeText::NodeData *this,
        Scaleform::Render::ContextImpl::Context *context)
{
  Scaleform::Render::TreeText::NodeData *v4; // rax
  Scaleform::Render::ContextImpl::EntryData *v5; // rbx

  v4 = (Scaleform::Render::TreeText::NodeData *)context->pHeap->Alloc(context->pHeap, 176i64, 0i64);
  v5 = v4;
  if ( v4 )
    Scaleform::Render::TreeText::NodeData::NodeData(
      v4,
      (Scaleform::Render::ContextImpl::NonlocalCloneArg<Scaleform::Render::TreeText::NodeData>)this);
  return Scaleform::Render::ContextImpl::Context::createEntryHelper(context, v5);
}

void __fastcall Scaleform::Render::ContextImpl::ContextData_ImplMixin<Scaleform::Render::TreeText::NodeData,Scaleform::Render::TreeNode::NodeData>::ConstructCopy(
        Scaleform::Render::ContextImpl::ContextData_ImplMixin<Scaleform::Render::TreeText::NodeData,Scaleform::Render::TreeNode::NodeData> *this,
        Scaleform::Render::LinearHeap *heap)
{
  Scaleform::Render::TreeText::NodeData *v3; // rax

  ++Scaleform::Render::ContextImpl::ConstructCopyCalls;
  v3 = (Scaleform::Render::TreeText::NodeData *)Scaleform::Render::LinearHeap::Alloc(heap, 0xB0ui64);
  if ( v3 )
    Scaleform::Render::TreeText::NodeData::NodeData(v3, (const Scaleform::Render::TreeText::NodeData *)this);
}

void __fastcall Scaleform::Render::ContextImpl::ContextData_ImplMixin<Scaleform::Render::TreeText::NodeData,Scaleform::Render::TreeNode::NodeData>::CopyTo(
        Scaleform::Render::ContextImpl::ContextData_ImplMixin<Scaleform::Render::TreeText::NodeData,Scaleform::Render::TreeNode::NodeData> *this,
        void *pdest)
{
  Scaleform::Render::TreeText::NodeData::operator=(
    (Scaleform::Render::TreeText::NodeData *)pdest,
    (const Scaleform::Render::TreeText::NodeData *)this);
  ++Scaleform::Render::ContextImpl::CopyCalls;
}

void __fastcall Scaleform::Render::ContextImpl::ContextData_ImplMixin<Scaleform::Render::TreeShape::NodeData,Scaleform::Render::TreeNode::NodeData>::Destroy(
        Scaleform::Render::ContextImpl::ContextData_ImplMixin<Scaleform::Render::TreeText::NodeData,Scaleform::Render::TreeNode::NodeData> *this)
{
  ++Scaleform::Render::ContextImpl::DestroyCalls;
  ((void (__fastcall *)(Scaleform::Render::ContextImpl::ContextData_ImplMixin<Scaleform::Render::TreeText::NodeData,Scaleform::Render::TreeNode::NodeData> *, _QWORD))this->~EntryData)(
    this,
    0i64);
}

bool __fastcall Scaleform::Render::BlurFilterParams::EqualsAll(
        Scaleform::Render::BlurFilterParams *this,
        const Scaleform::Render::BlurFilterParams *b)
{
  return this->Mode == b->Mode
      && this->BlurX == b->BlurX
      && this->BlurY == b->BlurY
      && this->Passes == b->Passes
      && this->Offset.x == b->Offset.x
      && this->Offset.y == b->Offset.y
      && this->Strength == b->Strength
      && this->Colors[0].Raw == b->Colors[0].Raw
      && this->Colors[1].Raw == b->Colors[1].Raw;
}

__int64 __fastcall Scaleform::Render::TreeText::GetAAMode(Scaleform::Render::TreeText *this)
{
  __int64 result; // rax

  result = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(((unsigned __int64)this & 0xFFFFFFFFFFFFF000ui64) + 0x20)
                                 + 8i64
                                 * (unsigned int)((int)((_DWORD)this - ((unsigned int)this & 0xFFFFF000) - 56) / 56)
                                 + 40)
                     + 144i64);
  if ( result )
    return (*(unsigned __int8 *)(result + 344) >> 6) & 1;
  return result;
}

__int64 __fastcall Scaleform::Render::TreeText::GetAlignment(Scaleform::Render::TreeText *this)
{
  __int64 v1; // rcx
  unsigned int v2; // ebx
  Scaleform::Render::Text::ParagraphFormat v4; // [rsp+30h] [rbp-38h] BYREF

  v1 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(((unsigned __int64)this & 0xFFFFFFFFFFFFF000ui64) + 0x20)
                             + 8i64 * (unsigned int)((int)((_DWORD)this - ((unsigned int)this & 0xFFFFF000) - 56) / 56)
                             + 40)
                 + 144i64);
  if ( v1 )
  {
    v2 = 1;
    v4.pAllocator = 0i64;
    v4.RefCount = 1;
    memset(&v4.pTabStops, 0, 20);
    Scaleform::Render::Text::StyledText::GetTextAndParagraphFormat(
      *(Scaleform::Render::Text::StyledText **)(v1 + 16),
      0i64,
      &v4,
      0i64,
      0xFFFFFFFFFFFFFFFFui64);
    if ( (v4.PresentMask & 1) != 0 )
    {
      switch ( (v4.PresentMask >> 9) & 3 )
      {
        case 1:
LABEL_9:
          Scaleform::Render::Text::ParagraphFormat::~ParagraphFormat(&v4);
          return v2;
        case 2:
          v2 = 3;
          goto LABEL_9;
        case 3:
          v2 = 2;
          goto LABEL_9;
      }
    }
    v2 = 0;
    goto LABEL_9;
  }
  return 0i64;
}

Scaleform::Render::Color *__fastcall Scaleform::Render::TreeText::GetBackgroundColor(
        Scaleform::Render::TreeText *this,
        Scaleform::Render::Color *result)
{
  Scaleform::Render::Color *v2; // rax

  v2 = *(Scaleform::Render::Color **)(*(_QWORD *)(*(_QWORD *)(((unsigned __int64)this & 0xFFFFFFFFFFFFF000ui64) + 0x20)
                                                + 8i64
                                                * (unsigned int)((int)((_DWORD)this
                                                                     - ((unsigned int)this & 0xFFFFF000)
                                                                     - 56)
                                                               / 56)
                                                + 40)
                                    + 144i64);
  if ( v2 )
    *result = v2[83];
  else
    result->Raw = 0;
  return result;
}

Scaleform::Render::Color *__fastcall Scaleform::Render::TreeText::GetBorderColor(
        Scaleform::Render::TreeText *this,
        Scaleform::Render::Color *result)
{
  Scaleform::Render::Color *v2; // rax

  v2 = *(Scaleform::Render::Color **)(*(_QWORD *)(*(_QWORD *)(((unsigned __int64)this & 0xFFFFFFFFFFFFF000ui64) + 0x20)
                                                + 8i64
                                                * (unsigned int)((int)((_DWORD)this
                                                                     - ((unsigned int)this & 0xFFFFF000)
                                                                     - 56)
                                                               / 56)
                                                + 40)
                                    + 144i64);
  if ( v2 )
    *result = v2[82];
  else
    result->Raw = 0;
  return result;
}

Scaleform::Render::Rect<float> *__fastcall Scaleform::Render::TreeText::GetBounds(
        Scaleform::Render::TreeText *this,
        Scaleform::Render::Rect<float> *result)
{
  Scaleform::Render::Text::DocView *v3; // rcx
  Scaleform::Render::Rect<float> *ViewRect; // rax
  float x2; // ecx
  Scaleform::Render::Rect<float> *v6; // rax

  v3 = *(Scaleform::Render::Text::DocView **)(*(_QWORD *)(*(_QWORD *)(((unsigned __int64)this & 0xFFFFFFFFFFFFF000ui64)
                                                                    + 0x20)
                                                        + 8i64
                                                        * (unsigned int)((int)((_DWORD)this
                                                                             - ((unsigned int)this & 0xFFFFF000)
                                                                             - 56)
                                                                       / 56)
                                                        + 40)
                                            + 144i64);
  if ( v3 )
  {
    ViewRect = Scaleform::Render::Text::DocView::GetViewRect(v3);
    result->x1 = ViewRect->x1;
    result->y1 = ViewRect->y1;
    x2 = ViewRect->x2;
    result->y2 = ViewRect->y2;
    v6 = result;
    result->x2 = x2;
  }
  else
  {
    *(_QWORD *)&result->x1 = 0i64;
    *(_QWORD *)&result->x2 = 0i64;
    return result;
  }
  return v6;
}

Scaleform::Render::Text::DocView *__fastcall Scaleform::Render::TreeText::GetDocView(Scaleform::Render::TreeText *this)
{
  return *(Scaleform::Render::Text::DocView **)(*(_QWORD *)(*(_QWORD *)(((unsigned __int64)this & 0xFFFFFFFFFFFFF000ui64)
                                                                      + 0x20)
                                                          + 8i64
                                                          * (unsigned int)((int)((_DWORD)this
                                                                               - ((unsigned int)this & 0xFFFFF000)
                                                                               - 56)
                                                                         / 56)
                                                          + 40)
                                              + 144i64);
}

unsigned __int64 __fastcall Scaleform::Render::TreeText::GetFilters(
        Scaleform::Render::TreeText *this,
        Scaleform::Render::TreeText::Filter *filtersBuf,
        unsigned __int64 filtersCntInBuf)
{
  __int64 v4; // r9
  unsigned __int64 v5; // r11
  unsigned __int64 v6; // rdx
  unsigned __int64 v8; // r8

  v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(((unsigned __int64)this & 0xFFFFFFFFFFFFF000ui64) + 0x20)
                             + 8i64 * (unsigned int)((int)((_DWORD)this - ((unsigned int)this & 0xFFFFF000) - 56) / 56)
                             + 40)
                 + 144i64);
  if ( !v4 )
    return 0i64;
  v5 = 0i64;
  if ( (*(float *)(v4 + 240) != 0.0 || *(float *)(v4 + 244) != 0.0) && filtersCntInBuf )
  {
    filtersBuf->Type = 2;
    v5 = 1i64;
    filtersBuf->Blur.BlurX = *(float *)(v4 + 240) * 0.050000001;
    filtersBuf->Blur.BlurY = *(float *)(v4 + 244) * 0.050000001;
    filtersBuf->Blur.Strength = *(float *)(v4 + 248) * 100.0;
  }
  if ( (*(float *)(v4 + 264) != 0.0 || *(float *)(v4 + 268) != 0.0) && v5 < filtersCntInBuf )
  {
    if ( *(float *)(v4 + 308) == 0.0 && *(float *)(v4 + 312) == 0.0 )
    {
      v6 = v5;
      filtersBuf[v6].Type = 3;
      filtersBuf[v6].Glow.Flags = *(_BYTE *)(v4 + 304);
      filtersBuf[v6].Blur.BlurX = *(float *)(v4 + 264) * 0.050000001;
      filtersBuf[v6].Blur.BlurY = *(float *)(v4 + 268) * 0.050000001;
      filtersBuf[v6].Blur.Strength = *(float *)(v4 + 280) * 100.0;
      filtersBuf[v6].Glow.Color = *(_DWORD *)(v4 + 284) & 0xFFFFFF | (*(unsigned __int8 *)(v4 + 316) << 24);
      return v5 + 1;
    }
    v8 = v5;
    filtersBuf[v8].Type = 1;
    filtersBuf[v8].Glow.Flags = *(_BYTE *)(v4 + 304);
    filtersBuf[v8].Blur.BlurX = *(float *)(v4 + 264) * 0.050000001;
    filtersBuf[v8].Blur.BlurY = *(float *)(v4 + 268) * 0.050000001;
    filtersBuf[v8].Blur.Strength = *(float *)(v4 + 280) * 100.0;
    filtersBuf[v8].Glow.Color = *(_DWORD *)(v4 + 284) & 0xFFFFFF | (*(unsigned __int8 *)(v4 + 316) << 24);
    ++v5;
    filtersBuf[v8].DropShadow.Angle = *(float *)(v4 + 308) * 180.0 / 3.141592653589793;
    filtersBuf[v8].DropShadow.Distance = *(float *)(v4 + 312) * 0.050000001;
  }
  return v5;
}

Scaleform::String *__fastcall Scaleform::Render::TreeText::GetHtmlText(
        Scaleform::Render::TreeText *this,
        Scaleform::String *result)
{
  Scaleform::Render::Text::DocView *v3; // rcx

  v3 = *(Scaleform::Render::Text::DocView **)(*(_QWORD *)(*(_QWORD *)(((unsigned __int64)this & 0xFFFFFFFFFFFFF000ui64)
                                                                    + 0x20)
                                                        + 8i64
                                                        * (unsigned int)((int)((_DWORD)this
                                                                             - ((unsigned int)this & 0xFFFFF000)
                                                                             - 56)
                                                                       / 56)
                                                        + 40)
                                            + 144i64);
  if ( v3 )
    Scaleform::Render::Text::DocView::GetHtml(v3, result);
  else
    Scaleform::String::String(result, &pnewText);
  return result;
}

Scaleform::String *__fastcall Scaleform::Render::TreeText::GetText(
        Scaleform::Render::TreeText *this,
        Scaleform::String *result)
{
  Scaleform::Render::Text::DocView *v3; // rcx

  v3 = *(Scaleform::Render::Text::DocView **)(*(_QWORD *)(*(_QWORD *)(((unsigned __int64)this & 0xFFFFFFFFFFFFF000ui64)
                                                                    + 0x20)
                                                        + 8i64
                                                        * (unsigned int)((int)((_DWORD)this
                                                                             - ((unsigned int)this & 0xFFFFF000)
                                                                             - 56)
                                                                       / 56)
                                                        + 40)
                                            + 144i64);
  if ( v3 )
    Scaleform::Render::Text::DocView::GetText(v3, result);
  else
    Scaleform::String::String(result, &pnewText);
  return result;
}

__int64 __fastcall Scaleform::Render::TreeText::GetVAlignment(Scaleform::Render::TreeText *this)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(((unsigned __int64)this & 0xFFFFFFFFFFFFF000ui64) + 0x20)
                             + 8i64 * (unsigned int)((int)((_DWORD)this - ((unsigned int)this & 0xFFFFF000) - 56) / 56)
                             + 40)
                 + 144i64);
  if ( v1 )
  {
    if ( ((*(unsigned __int8 *)(v1 + 345) >> 2) & 3) == 2 )
      return 2i64;
    if ( ((*(unsigned __int8 *)(v1 + 345) >> 2) & 3) == 3 )
      return 1i64;
  }
  return 0i64;
}

void __fastcall Scaleform::Render::TreeText::Init(
        Scaleform::Render::TreeText *this,
        Scaleform::Render::Text::Allocator *pallocator,
        Scaleform::Render::Text::FontManagerBase *fntMgr,
        Scaleform::Log *log)
{
  Scaleform::Render::ContextImpl::EntryData *WritableData; // rdi
  Scaleform::Render::Text::DocView *v9; // rax
  Scaleform::Render::ContextImpl::EntryData_vtbl *v10; // rax
  Scaleform::Render::ContextImpl::EntryData_vtbl *v11; // rsi
  Scaleform::RefCountVImpl *v12; // rcx
  Scaleform::MemoryHeap *v13; // rax
  __int64 v14; // rax
  Scaleform::Render::ContextImpl::EntryData *v15; // rax
  int v16; // [rsp+20h] [rbp-98h] BYREF
  Scaleform::Render::Text::ParagraphFormat defaultParagraphFmt; // [rsp+28h] [rbp-90h] BYREF
  Scaleform::Render::Text::TextFormat defaultTextFmt; // [rsp+50h] [rbp-68h] BYREF

  WritableData = Scaleform::Render::ContextImpl::Entry::getWritableData(this, 0x400u);
  if ( !WritableData[9].__vftable )
  {
    v9 = (Scaleform::Render::Text::DocView *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, Scaleform::Render::TreeText *, __int64, int *, int))Scaleform::Memory::pGlobalHeap->AllocAutoHeap)(
                                               Scaleform::Memory::pGlobalHeap,
                                               this,
                                               352i64,
                                               &v16,
                                               74);
    if ( v9 )
    {
      Scaleform::Render::Text::DocView::DocView(v9, pallocator, fntMgr, log);
      v11 = v10;
    }
    else
    {
      v11 = 0i64;
    }
    v12 = (Scaleform::RefCountVImpl *)WritableData[9].__vftable;
    if ( v12 )
      Scaleform::RefCountImpl::Release(v12);
    WritableData[9].__vftable = v11;
    v13 = Scaleform::Memory::pGlobalHeap->GetAllocHeapOrNULL(Scaleform::Memory::pGlobalHeap, this);
    Scaleform::Render::Text::TextFormat::TextFormat(&defaultTextFmt, v13);
    Scaleform::Render::Text::TextFormat::InitByDefaultValues(&defaultTextFmt);
    Scaleform::Render::Text::StyledText::SetDefaultTextFormat(
      (Scaleform::Render::Text::StyledText *)WritableData[9].CopyTo,
      &defaultTextFmt);
    defaultParagraphFmt.pAllocator = 0i64;
    defaultParagraphFmt.RefCount = 1;
    memset(&defaultParagraphFmt.pTabStops, 0, 20);
    Scaleform::Render::Text::ParagraphFormat::InitByDefaultValues(&defaultParagraphFmt);
    Scaleform::Render::Text::StyledText::SetDefaultParagraphFormat(
      (Scaleform::Render::Text::StyledText *)WritableData[9].CopyTo,
      &defaultParagraphFmt);
    v14 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(((unsigned __int64)this & 0xFFFFFFFFFFFFF000ui64) + 0x20)
                                + 8i64
                                * (unsigned int)((int)((_DWORD)this - ((unsigned int)this & 0xFFFFF000) - 56) / 56)
                                + 40)
                    + 144i64);
    if ( v14 )
      *(_BYTE *)(v14 + 344) &= ~0x40u;
    v15 = Scaleform::Render::ContextImpl::Entry::getWritableData(this, 0x400u);
    LOBYTE(v15[10].__vftable) |= 1u;
    if ( !this->PNode.Scaleform::Render::TreeNode::Scaleform::Render::ContextImpl::Entry::pPrev )
      Scaleform::Render::ContextImpl::Entry::addToPropagateImpl(this);
    Scaleform::Render::Text::ParagraphFormat::~ParagraphFormat(&defaultParagraphFmt);
    Scaleform::Render::Text::TextFormat::~TextFormat(&defaultTextFmt);
  }
}

void __fastcall Scaleform::Render::TreeText::Init(
        Scaleform::Render::TreeText *this,
        Scaleform::Render::Text::DocView *docView)
{
  Scaleform::Render::ContextImpl::EntryData *WritableData; // rbx
  Scaleform::RefCountVImpl *v4; // rcx

  WritableData = Scaleform::Render::ContextImpl::Entry::getWritableData(this, 0x400u);
  if ( docView )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)docView);
  v4 = (Scaleform::RefCountVImpl *)WritableData[9].__vftable;
  if ( v4 )
    Scaleform::RefCountImpl::Release(v4);
  WritableData[9].__vftable = (Scaleform::Render::ContextImpl::EntryData_vtbl *)docView;
}

void __fastcall Scaleform::Render::TreeText::Filter::InitByDefaultValues(Scaleform::Render::TreeText::Filter *this)
{
  float BlurY; // xmm1_4
  unsigned __int8 v3; // al
  int ShadowAlpha; // ecx
  float v5; // xmm0_4
  unsigned int Raw; // eax
  float v7; // xmm0_4
  Scaleform::RefCountVImpl *pObject; // rcx
  float v9; // xmm1_4
  Scaleform::Render::Text::TextFilter v10; // [rsp+20h] [rbp-19h] BYREF

  v10.__vftable = (Scaleform::Render::Text::TextFilter_vtbl *)&Scaleform::Render::Text::TextFilter::`vftable';
  LODWORD(v10.ShadowParams.Strength) = FLOAT_1_0;
  v10.ShadowParams.Mode = 0;
  v10.ShadowParams.Offset.y = 0.0;
  v10.ShadowParams.Gradient.pObject = 0i64;
  v10.ShadowParams.Colors[0].Channels.Blue = 0;
  *(_WORD *)&v10.ShadowParams.Colors[1].Channels.Green = 0;
  v10.ShadowParams.Colors[1].Channels.Alpha = 0;
  v10.RefCount = 1;
  v10.ShadowParams.Passes = 1;
  v10.ShadowParams.BlurX = 100.0;
  *(_QWORD *)&v10.ShadowParams.BlurY = 1120403456i64;
  *(_DWORD *)&v10.ShadowParams.Colors[0].Channels.Green = 16711680;
  Scaleform::Render::Text::TextFilter::SetDefaultShadow(&v10);
  BlurY = v10.BlurY;
  v3 = LOBYTE(v10.ShadowFlags) | 0x80;
  ShadowAlpha = v10.ShadowAlpha;
  this->Blur.BlurX = v10.BlurX;
  v5 = v10.BlurStrength * 100.0;
  this->Glow.Flags = v3;
  Raw = v10.ShadowParams.Colors[0].Raw;
  this->Blur.Strength = v5;
  v7 = v10.ShadowAngle / 10.0;
  this->Glow.Color = Raw & 0xFFFFFF | (ShadowAlpha << 24);
  pObject = (Scaleform::RefCountVImpl *)v10.ShadowParams.Gradient.pObject;
  this->Blur.BlurY = BlurY;
  v9 = v10.ShadowDistance * 0.050000001;
  this->DropShadow.Angle = v7;
  this->DropShadow.Distance = v9;
  if ( pObject )
    Scaleform::RefCountImpl::Release(pObject);
  Scaleform::RefCountNTSImplCore::~RefCountNTSImplCore(&v10);
}

__int64 __fastcall Scaleform::Render::TreeText::IsMultiline(Scaleform::Render::TreeText *this)
{
  __int64 result; // rax

  result = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(((unsigned __int64)this & 0xFFFFFFFFFFFFF000ui64) + 0x20)
                                 + 8i64
                                 * (unsigned int)((int)((_DWORD)this - ((unsigned int)this & 0xFFFFF000) - 56) / 56)
                                 + 40)
                     + 144i64);
  if ( result )
    return (*(unsigned __int8 *)(result + 344) >> 2) & 1;
  return result;
}

__int64 __fastcall Scaleform::Render::TreeText::IsWordWrap(Scaleform::Render::TreeText *this)
{
  __int64 result; // rax

  result = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(((unsigned __int64)this & 0xFFFFFFFFFFFFF000ui64) + 0x20)
                                 + 8i64
                                 * (unsigned int)((int)((_DWORD)this - ((unsigned int)this & 0xFFFFF000) - 56) / 56)
                                 + 40)
                     + 144i64);
  if ( result )
    return (*(unsigned __int8 *)(result + 344) >> 3) & 1;
  return result;
}

void __fastcall Scaleform::Render::TreeText::NotifyLayoutChanged(Scaleform::Render::TreeText *this)
{
  Scaleform::Render::ContextImpl::EntryData *WritableData; // rax

  WritableData = Scaleform::Render::ContextImpl::Entry::getWritableData(this, 0x400u);
  LOBYTE(WritableData[10].__vftable) |= 1u;
  if ( !this->PNode.Scaleform::Render::TreeNode::Scaleform::Render::ContextImpl::Entry::pPrev )
    Scaleform::Render::ContextImpl::Entry::addToPropagateImpl(this);
}

bool __fastcall Scaleform::Render::TreeText::NodeData::PropagateUp(
        Scaleform::Render::TreeText::NodeData *this,
        Scaleform::Render::ContextImpl::Entry *entry)
{
  Scaleform::Render::Text::DocView *pObject; // rcx
  Scaleform::Render::ContextImpl::EntryData *WritableData; // rdi
  Scaleform::Render::TextLayout *v6; // rax
  __int64 v7; // rax
  __int64 v8; // rsi
  Scaleform::RefCountVImpl *v9; // rcx
  Scaleform::Render::TextLayout *v10; // rax
  float y2; // xmm3_4
  float x2; // xmm2_4
  float y1; // xmm1_4
  Scaleform::Render::Matrix2x4<float> *v14; // rax
  Scaleform::Render::TreeNode::NodeData *v16; // rax
  int v17[4]; // [rsp+20h] [rbp-E0h] BYREF
  Scaleform::Render::Rect<float> bounds; // [rsp+30h] [rbp-D0h] BYREF
  Scaleform::Render::Rect<float> pr; // [rsp+40h] [rbp-C0h] BYREF
  Scaleform::Render::Rect<float> v20; // [rsp+50h] [rbp-B0h] BYREF
  Scaleform::Render::TextLayout::Builder bld; // [rsp+60h] [rbp-A0h] BYREF

  pObject = this->pDocView.pObject;
  bounds = 0i64;
  pr = 0i64;
  v20 = 0i64;
  if ( pObject )
  {
    if ( (pObject->RTFlags & 3) != 0 )
      Scaleform::Render::Text::DocView::Format(pObject);
    if ( (this->TextFlags & 1) != 0 )
    {
      Scaleform::Render::TextLayout::Builder::Builder(&bld, Scaleform::Memory::pGlobalHeap);
      Scaleform::Render::Text::DocView::CreateVisibleTextLayout(this->pDocView.pObject, &bld);
      v17[0] = 74;
      WritableData = Scaleform::Render::ContextImpl::Entry::getWritableData(entry, 0x400u);
      v6 = (Scaleform::Render::TextLayout *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                              Scaleform::Memory::pGlobalHeap,
                                              this,
                                              192i64,
                                              v17);
      if ( v6 )
      {
        Scaleform::Render::TextLayout::TextLayout(v6, &bld);
        v8 = v7;
      }
      else
      {
        v8 = 0i64;
      }
      v9 = *(Scaleform::RefCountVImpl **)&WritableData[9].Type;
      if ( v9 )
        Scaleform::RefCountImpl::Release(v9);
      *(_QWORD *)&WritableData[9].Type = v8;
      LOBYTE(WritableData[10].__vftable) &= ~1u;
      Scaleform::Render::TextLayout::Builder::~Builder(&bld);
    }
  }
  v10 = this->pLayout.pObject;
  if ( v10 )
  {
    y2 = v10->Bounds.y2;
    x2 = v10->Bounds.x2;
    y1 = v10->Bounds.y1;
    bounds.x1 = v10->Bounds.x1;
    bounds.y1 = y1;
    bounds.x2 = x2;
    bounds.y2 = y2;
    v20.x1 = bounds.x1;
    v20.y1 = y1;
    v20.x2 = x2;
    v20.y2 = y2;
    Scaleform::Render::TreeNode::NodeData::expandByFilterBounds(this, &bounds, 0);
    if ( (this->Flags & 0x200) != 0 )
    {
      Scaleform::Render::Matrix3x4<float>::EncloseTransform(&this->M34, &pr, &bounds);
    }
    else
    {
      v14 = (Scaleform::Render::Matrix2x4<float> *)Scaleform::Render::TreeNode::NodeData::M2D(this);
      Scaleform::Render::Matrix2x4<float>::EncloseTransform(v14, &pr, &bounds);
    }
  }
  if ( bounds.x1 == this->AproxLocalBounds.x1
    && bounds.x2 == this->AproxLocalBounds.x2
    && bounds.y1 == this->AproxLocalBounds.y1
    && bounds.y2 == this->AproxLocalBounds.y2
    && pr.x1 == bounds.x1
    && pr.x2 == bounds.x2
    && pr.y1 == bounds.y1
    && pr.y2 == bounds.y2 )
  {
    return 0;
  }
  v16 = (Scaleform::Render::TreeNode::NodeData *)Scaleform::Render::ContextImpl::Entry::getWritableData(entry, 8u);
  v16->AproxLocalBounds = bounds;
  v16->AproxParentBounds = pr;
  Scaleform::Render::TreeNode::NodeData::updateOriginalBoundState(v16, &v20);
  return this->Flags & 1;
}

void __fastcall Scaleform::Render::TreeText::SetAAMode(
        Scaleform::Render::TreeText *this,
        Scaleform::Render::TreeText::AAMode aa)
{
  __int64 v3; // rax
  Scaleform::Render::ContextImpl::EntryData *WritableData; // rax

  v3 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(((unsigned __int64)this & 0xFFFFFFFFFFFFF000ui64) + 0x20)
                             + 8i64 * (unsigned int)((int)((_DWORD)this - ((unsigned int)this & 0xFFFFF000) - 56) / 56)
                             + 40)
                 + 144i64);
  if ( v3 )
  {
    if ( aa == AA_Readability )
      *(_BYTE *)(v3 + 344) |= 0x40u;
    else
      *(_BYTE *)(v3 + 344) &= ~0x40u;
  }
  WritableData = Scaleform::Render::ContextImpl::Entry::getWritableData(this, 0x400u);
  LOBYTE(WritableData[10].__vftable) |= 1u;
  if ( !this->PNode.Scaleform::Render::TreeNode::Scaleform::Render::ContextImpl::Entry::pPrev )
    Scaleform::Render::ContextImpl::Entry::addToPropagateImpl(this);
}

void __fastcall Scaleform::Render::TreeText::SetAlignment(
        Scaleform::Render::TreeText *this,
        Scaleform::Render::TreeText::Alignment a)
{
  __int64 v3; // rbx
  Scaleform::Render::Text::DocView *v4; // rcx
  char v5; // al
  __int64 v6; // rbx
  const Scaleform::Render::Text::ParagraphFormat *v7; // rax
  Scaleform::Render::ContextImpl::EntryData *WritableData; // rax
  Scaleform::Render::Text::ParagraphFormat fmt; // [rsp+20h] [rbp-58h] BYREF
  Scaleform::Render::Text::ParagraphFormat result; // [rsp+48h] [rbp-30h] BYREF

  v3 = *(_QWORD *)(*(_QWORD *)(((unsigned __int64)this & 0xFFFFFFFFFFFFF000ui64) + 0x20)
                 + 8i64 * (unsigned int)((int)((_DWORD)this - ((unsigned int)this & 0xFFFFF000) - 56) / 56)
                 + 40);
  v4 = *(Scaleform::Render::Text::DocView **)(v3 + 144);
  if ( v4 )
  {
    switch ( a )
    {
      case Align_TopCenter:
        v5 = 1;
        break;
      case Align_BottomCenter:
        v5 = 3;
        break;
      case Align_CenterLeft:
        v5 = 2;
        break;
      default:
        v5 = 0;
        break;
    }
    fmt.pAllocator = 0i64;
    memset(&fmt.pTabStops, 0, 18);
    fmt.PresentMask = ((v5 & 3) << 9) | 1;
    fmt.RefCount = 1;
    Scaleform::Render::Text::DocView::SetParagraphFormat(v4, &fmt, 0i64, 0xFFFFFFFFFFFFFFFFui64);
    v6 = *(_QWORD *)(v3 + 144);
    v7 = Scaleform::Render::Text::ParagraphFormat::Merge(
           *(Scaleform::Render::Text::ParagraphFormat **)(*(_QWORD *)(v6 + 16) + 48i64),
           &result,
           &fmt);
    Scaleform::Render::Text::StyledText::SetDefaultParagraphFormat(
      *(Scaleform::Render::Text::StyledText **)(v6 + 16),
      v7);
    Scaleform::Render::Text::ParagraphFormat::~ParagraphFormat(&result);
    Scaleform::Render::Text::ParagraphFormat::~ParagraphFormat(&fmt);
  }
  WritableData = Scaleform::Render::ContextImpl::Entry::getWritableData(this, 0x400u);
  LOBYTE(WritableData[10].__vftable) |= 1u;
  if ( !this->PNode.Scaleform::Render::TreeNode::Scaleform::Render::ContextImpl::Entry::pPrev )
    Scaleform::Render::ContextImpl::Entry::addToPropagateImpl(this);
}

void __fastcall Scaleform::Render::TreeText::SetBackgroundColor(
        Scaleform::Render::TreeText *this,
        const Scaleform::Render::Color *bkgColor)
{
  Scaleform::Render::TreeText::SetBackgroundColor(this, bkgColor->Raw);
}

void __fastcall Scaleform::Render::TreeText::SetBackgroundColor(
        Scaleform::Render::TreeText *this,
        unsigned int bkgColor)
{
  __int64 v3; // rax
  Scaleform::Render::ContextImpl::EntryData *WritableData; // rax

  v3 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(((unsigned __int64)this & 0xFFFFFFFFFFFFF000ui64) + 0x20)
                             + 8i64 * (unsigned int)((int)((_DWORD)this - ((unsigned int)this & 0xFFFFF000) - 56) / 56)
                             + 40)
                 + 144i64);
  if ( v3 )
    *(_DWORD *)(v3 + 332) = bkgColor;
  WritableData = Scaleform::Render::ContextImpl::Entry::getWritableData(this, 0x400u);
  LOBYTE(WritableData[10].__vftable) |= 1u;
  if ( !this->PNode.Scaleform::Render::TreeNode::Scaleform::Render::ContextImpl::Entry::pPrev )
    Scaleform::Render::ContextImpl::Entry::addToPropagateImpl(this);
}

void __fastcall Scaleform::Render::TreeText::SetBorderColor(
        Scaleform::Render::TreeText *this,
        const Scaleform::Render::Color *borderColor)
{
  Scaleform::Render::TreeText::SetBorderColor(this, borderColor->Raw);
}

void __fastcall Scaleform::Render::TreeText::SetBorderColor(
        Scaleform::Render::TreeText *this,
        unsigned int borderColor)
{
  __int64 v3; // rax
  Scaleform::Render::ContextImpl::EntryData *WritableData; // rax

  v3 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(((unsigned __int64)this & 0xFFFFFFFFFFFFF000ui64) + 0x20)
                             + 8i64 * (unsigned int)((int)((_DWORD)this - ((unsigned int)this & 0xFFFFF000) - 56) / 56)
                             + 40)
                 + 144i64);
  if ( v3 )
    *(_DWORD *)(v3 + 328) = borderColor;
  WritableData = Scaleform::Render::ContextImpl::Entry::getWritableData(this, 0x400u);
  LOBYTE(WritableData[10].__vftable) |= 1u;
  if ( !this->PNode.Scaleform::Render::TreeNode::Scaleform::Render::ContextImpl::Entry::pPrev )
    Scaleform::Render::ContextImpl::Entry::addToPropagateImpl(this);
}

void __fastcall Scaleform::Render::TreeText::SetBounds(
        Scaleform::Render::TreeText *this,
        const Scaleform::Render::Rect<float> *r)
{
  Scaleform::Render::Text::DocView *v3; // rcx
  Scaleform::Render::ContextImpl::EntryData *WritableData; // rax

  v3 = *(Scaleform::Render::Text::DocView **)(*(_QWORD *)(*(_QWORD *)(((unsigned __int64)this & 0xFFFFFFFFFFFFF000ui64)
                                                                    + 0x20)
                                                        + 8i64
                                                        * (unsigned int)((int)((_DWORD)this
                                                                             - ((unsigned int)this & 0xFFFFF000)
                                                                             - 56)
                                                                       / 56)
                                                        + 40)
                                            + 144i64);
  if ( v3 )
    Scaleform::Render::Text::DocView::SetViewRect(v3, r, UseExternally);
  WritableData = Scaleform::Render::ContextImpl::Entry::getWritableData(this, 0x400u);
  LOBYTE(WritableData[10].__vftable) |= 1u;
  if ( !this->PNode.Scaleform::Render::TreeNode::Scaleform::Render::ContextImpl::Entry::pPrev )
    Scaleform::Render::ContextImpl::Entry::addToPropagateImpl(this);
}

void __fastcall Scaleform::Render::TreeText::SetColor(
        Scaleform::Render::TreeText *this,
        unsigned int *c,
        unsigned __int64 startPos,
        unsigned __int64 endPos)
{
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rax
  Scaleform::MemoryHeap *v11; // rax
  unsigned int v12; // eax
  Scaleform::Render::Text::DocView *v13; // rcx
  __int64 v14; // rbx
  const Scaleform::Render::Text::TextFormat *v15; // rax
  Scaleform::Render::ContextImpl::EntryData *WritableData; // rax
  Scaleform::Render::Text::TextFormat fmt; // [rsp+20h] [rbp-A8h] BYREF
  Scaleform::Render::Text::TextFormat result; // [rsp+70h] [rbp-58h] BYREF

  v8 = *(_QWORD *)(*(_QWORD *)(((unsigned __int64)this & 0xFFFFFFFFFFFFF000ui64) + 0x20)
                 + 8i64 * (unsigned int)((int)((_DWORD)this - ((unsigned int)this & 0xFFFFF000) - 56) / 56)
                 + 40);
  v9 = *(_QWORD *)(v8 + 144);
  if ( v9 )
  {
    v10 = *(_QWORD *)(*(_QWORD *)(v9 + 16) + 16i64);
    if ( v10 )
      v11 = *(Scaleform::MemoryHeap **)(v10 + 48);
    else
      v11 = (Scaleform::MemoryHeap *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->GetAllocHeapOrNULL)(Scaleform::Memory::pGlobalHeap);
    Scaleform::Render::Text::TextFormat::TextFormat(&fmt, v11);
    v12 = *c;
    v13 = *(Scaleform::Render::Text::DocView **)(v8 + 144);
    fmt.PresentMask |= 1u;
    fmt.ColorV = v12;
    Scaleform::Render::Text::DocView::SetTextFormat(v13, &fmt, startPos, endPos);
    v14 = *(_QWORD *)(v8 + 144);
    v15 = Scaleform::Render::Text::TextFormat::Merge(
            *(Scaleform::Render::Text::TextFormat **)(*(_QWORD *)(v14 + 16) + 56i64),
            &result,
            &fmt);
    Scaleform::Render::Text::StyledText::SetDefaultTextFormat(*(Scaleform::Render::Text::StyledText **)(v14 + 16), v15);
    Scaleform::Render::Text::TextFormat::~TextFormat(&result);
    Scaleform::Render::Text::TextFormat::~TextFormat(&fmt);
  }
  WritableData = Scaleform::Render::ContextImpl::Entry::getWritableData(this, 0x400u);
  LOBYTE(WritableData[10].__vftable) |= 1u;
  if ( !this->PNode.Scaleform::Render::TreeNode::Scaleform::Render::ContextImpl::Entry::pPrev )
    Scaleform::Render::ContextImpl::Entry::addToPropagateImpl(this);
}

void __fastcall Scaleform::Render::TreeText::SetFilters(
        Scaleform::Render::TreeText *this,
        const Scaleform::Render::TreeText::Filter *filters,
        unsigned __int64 filtersCnt)
{
  __int64 v6; // r14
  $8EDA14245F84505F2E4421D0FC94AFAE *v7; // rbx
  float BlurY; // xmm1_4
  float v9; // xmm0_4
  unsigned int Color; // eax
  float v11; // xmm0_4
  float v12; // xmm6_4
  float v13; // xmm0_4
  float v14; // xmm1_4
  float v15; // xmm0_4
  float v16; // xmm1_4
  float v17; // xmm0_4
  unsigned int v18; // eax
  float v19; // xmm0_4
  float Distance; // xmm1_4
  float v21; // xmm8_4
  float v22; // xmm7_4
  __int64 v23; // rbx
  Scaleform::Render::ContextImpl::EntryData *WritableData; // rax
  Scaleform::Render::Text::TextFilter v25; // [rsp+28h] [rbp-E0h] BYREF

  v6 = *(_QWORD *)(*(_QWORD *)(((unsigned __int64)this & 0xFFFFFFFFFFFFF000ui64) + 0x20)
                 + 8i64 * (unsigned int)((int)((_DWORD)this - ((unsigned int)this & 0xFFFFF000) - 56) / 56)
                 + 40);
  if ( *(_QWORD *)(v6 + 144) )
  {
    v25.__vftable = (Scaleform::Render::Text::TextFilter_vtbl *)&Scaleform::Render::Text::TextFilter::`vftable';
    v25.ShadowParams.Mode = 0;
    v25.ShadowParams.Offset.y = 0.0;
    v25.ShadowParams.Gradient.pObject = 0i64;
    v25.ShadowParams.Colors[0].Channels.Blue = 0;
    *(_WORD *)&v25.ShadowParams.Colors[1].Channels.Green = 0;
    v25.ShadowParams.Colors[1].Channels.Alpha = 0;
    LODWORD(v25.ShadowParams.Strength) = FLOAT_1_0;
    v25.RefCount = 1;
    v25.ShadowParams.Passes = 1;
    v25.ShadowParams.BlurX = 100.0;
    *(_QWORD *)&v25.ShadowParams.BlurY = 1120403456i64;
    *(_DWORD *)&v25.ShadowParams.Colors[0].Channels.Green = 16711680;
    Scaleform::Render::Text::TextFilter::SetDefaultShadow(&v25);
    if ( filtersCnt )
    {
      v7 = &filters->4;
      while ( LODWORD(v7[-1].DropShadow.Distance) != 1 )
      {
        if ( LODWORD(v7[-1].DropShadow.Distance) == 2 )
        {
          v14 = v7->Blur.BlurY * 20.0;
          v25.BlurX = v7->Blur.BlurX * 20.0;
          v15 = v7->Blur.Strength / 100.0;
          v25.BlurY = v14;
          v25.BlurStrength = v15;
        }
        else if ( LODWORD(v7[-1].DropShadow.Distance) == 3 )
        {
          BlurY = v7->Blur.BlurY;
          v9 = v7->Blur.BlurX * 20.0;
          v25.ShadowFlags = v7->Glow.Flags;
          Color = v7->Glow.Color;
          v25.ShadowParams.BlurX = v9;
          v11 = v7->Blur.Strength / 100.0;
          v25.ShadowAlpha = HIBYTE(Color);
          *(_QWORD *)&v25.ShadowAngle = 0i64;
          v25.ShadowParams.Colors[0].Raw = Color;
          v25.ShadowParams.BlurY = BlurY * 20.0;
          v25.ShadowParams.Strength = v11;
          cosf(0.0);
          v12 = 0.0 * 0.0;
          v13 = sinf(0.0) * 0.0;
LABEL_10:
          v25.ShadowParams.Offset.y = v13;
          v25.ShadowParams.Offset.x = v12;
        }
        v7 = ($8EDA14245F84505F2E4421D0FC94AFAE *)((char *)v7 + 32);
        if ( !--filtersCnt )
          goto LABEL_12;
      }
      v16 = v7->Blur.BlurY;
      v17 = v7->Blur.BlurX * 20.0;
      v25.ShadowFlags = v7->Glow.Flags;
      v18 = v7->Glow.Color;
      v25.ShadowParams.BlurX = v17;
      v19 = v7->Blur.Strength / 100.0;
      v25.ShadowAlpha = HIBYTE(v18);
      v25.ShadowParams.Colors[0].Raw = v18;
      v25.ShadowParams.BlurY = v16 * 20.0;
      Distance = v7->DropShadow.Distance;
      v25.ShadowParams.Strength = v19;
      v21 = v7->DropShadow.Angle * 3.141592653589793 / 180.0;
      v22 = (float)(__int16)(int)(float)(Distance * 20.0);
      v25.ShadowAngle = v21;
      v25.ShadowDistance = v22;
      cosf(v21);
      v12 = v21 * v22;
      v13 = sinf(v21) * v22;
      goto LABEL_10;
    }
LABEL_12:
    v23 = *(_QWORD *)(v6 + 144);
    if ( *(float *)(v23 + 240) != v25.BlurX
      || *(float *)(v23 + 244) != v25.BlurY
      || *(float *)(v23 + 248) != v25.BlurStrength
      || !Scaleform::Render::BlurFilterParams::EqualsAll(
            (Scaleform::Render::BlurFilterParams *)(v23 + 256),
            &v25.ShadowParams)
      || *(_DWORD *)(v23 + 304) != v25.ShadowFlags
      || *(float *)(v23 + 308) != v25.ShadowAngle
      || *(float *)(v23 + 312) != v25.ShadowDistance
      || *(_BYTE *)(v23 + 316) != v25.ShadowAlpha )
    {
      *(float *)(v23 + 240) = v25.BlurX;
      *(float *)(v23 + 244) = v25.BlurY;
      *(float *)(v23 + 248) = v25.BlurStrength;
      Scaleform::Render::BlurFilterParams::operator=(
        (Scaleform::Render::BlurFilterParams *)(v23 + 256),
        &v25.ShadowParams);
      *(_DWORD *)(v23 + 304) = v25.ShadowFlags;
      *(float *)(v23 + 308) = v25.ShadowAngle;
      *(float *)(v23 + 312) = v25.ShadowDistance;
      *(_BYTE *)(v23 + 316) = v25.ShadowAlpha;
    }
    if ( v25.ShadowParams.Gradient.pObject )
      Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v25.ShadowParams.Gradient.pObject);
    Scaleform::RefCountNTSImplCore::~RefCountNTSImplCore(&v25);
  }
  WritableData = Scaleform::Render::ContextImpl::Entry::getWritableData(this, 0x400u);
  LOBYTE(WritableData[10].__vftable) |= 1u;
  if ( !this->PNode.Scaleform::Render::TreeNode::Scaleform::Render::ContextImpl::Entry::pPrev )
    Scaleform::Render::ContextImpl::Entry::addToPropagateImpl(this);
}

void __fastcall Scaleform::Render::TreeText::SetFont(
        Scaleform::Render::TreeText *this,
        const char *pfontName,
        unsigned __int64 startPos,
        unsigned __int64 endPos)
{
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rax
  Scaleform::MemoryHeap *v11; // rax
  __int64 v12; // rbx
  const Scaleform::Render::Text::TextFormat *v13; // rax
  Scaleform::Render::ContextImpl::EntryData *WritableData; // rax
  Scaleform::Render::Text::TextFormat fmt; // [rsp+20h] [rbp-A8h] BYREF
  Scaleform::Render::Text::TextFormat result; // [rsp+70h] [rbp-58h] BYREF

  v8 = *(_QWORD *)(*(_QWORD *)(((unsigned __int64)this & 0xFFFFFFFFFFFFF000ui64) + 0x20)
                 + 8i64 * (unsigned int)((int)((_DWORD)this - ((unsigned int)this & 0xFFFFF000) - 56) / 56)
                 + 40);
  v9 = *(_QWORD *)(v8 + 144);
  if ( v9 )
  {
    v10 = *(_QWORD *)(*(_QWORD *)(v9 + 16) + 16i64);
    if ( v10 )
      v11 = *(Scaleform::MemoryHeap **)(v10 + 48);
    else
      v11 = (Scaleform::MemoryHeap *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->GetAllocHeapOrNULL)(Scaleform::Memory::pGlobalHeap);
    Scaleform::Render::Text::TextFormat::TextFormat(&fmt, v11);
    Scaleform::Render::Text::TextFormat::SetFontName(&fmt, pfontName, 0xFFFFFFFFFFFFFFFFui64);
    Scaleform::Render::Text::DocView::SetTextFormat(
      *(Scaleform::Render::Text::DocView **)(v8 + 144),
      &fmt,
      startPos,
      endPos);
    v12 = *(_QWORD *)(v8 + 144);
    v13 = Scaleform::Render::Text::TextFormat::Merge(
            *(Scaleform::Render::Text::TextFormat **)(*(_QWORD *)(v12 + 16) + 56i64),
            &result,
            &fmt);
    Scaleform::Render::Text::StyledText::SetDefaultTextFormat(*(Scaleform::Render::Text::StyledText **)(v12 + 16), v13);
    Scaleform::Render::Text::TextFormat::~TextFormat(&result);
    Scaleform::Render::Text::TextFormat::~TextFormat(&fmt);
  }
  WritableData = Scaleform::Render::ContextImpl::Entry::getWritableData(this, 0x400u);
  LOBYTE(WritableData[10].__vftable) |= 1u;
  if ( !this->PNode.Scaleform::Render::TreeNode::Scaleform::Render::ContextImpl::Entry::pPrev )
    Scaleform::Render::ContextImpl::Entry::addToPropagateImpl(this);
}

void __fastcall Scaleform::Render::TreeText::SetFontSize(
        Scaleform::Render::TreeText *this,
        float fontSize,
        unsigned __int64 startPos,
        unsigned __int64 endPos)
{
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rax
  Scaleform::MemoryHeap *v10; // rax
  int v11; // eax
  Scaleform::Render::Text::DocView *v12; // rcx
  __int64 v13; // rbx
  const Scaleform::Render::Text::TextFormat *v14; // rax
  Scaleform::Render::ContextImpl::EntryData *WritableData; // rax
  Scaleform::Render::Text::TextFormat fmt; // [rsp+20h] [rbp-B8h] BYREF
  Scaleform::Render::Text::TextFormat result; // [rsp+70h] [rbp-68h] BYREF

  v7 = *(_QWORD *)(*(_QWORD *)(((unsigned __int64)this & 0xFFFFFFFFFFFFF000ui64) + 0x20)
                 + 8i64 * (unsigned int)((int)((_DWORD)this - ((unsigned int)this & 0xFFFFF000) - 56) / 56)
                 + 40);
  v8 = *(_QWORD *)(v7 + 144);
  if ( v8 )
  {
    v9 = *(_QWORD *)(*(_QWORD *)(v8 + 16) + 16i64);
    if ( v9 )
      v10 = *(Scaleform::MemoryHeap **)(v9 + 48);
    else
      v10 = (Scaleform::MemoryHeap *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->GetAllocHeapOrNULL)(Scaleform::Memory::pGlobalHeap);
    Scaleform::Render::Text::TextFormat::TextFormat(&fmt, v10);
    if ( fontSize >= 3276.8 )
      LOWORD(v11) = -1;
    else
      v11 = (int)(float)(fontSize * 20.0);
    v12 = *(Scaleform::Render::Text::DocView **)(v7 + 144);
    fmt.PresentMask |= 8u;
    fmt.FontSize = v11;
    Scaleform::Render::Text::DocView::SetTextFormat(v12, &fmt, startPos, endPos);
    v13 = *(_QWORD *)(v7 + 144);
    v14 = Scaleform::Render::Text::TextFormat::Merge(
            *(Scaleform::Render::Text::TextFormat **)(*(_QWORD *)(v13 + 16) + 56i64),
            &result,
            &fmt);
    Scaleform::Render::Text::StyledText::SetDefaultTextFormat(*(Scaleform::Render::Text::StyledText **)(v13 + 16), v14);
    Scaleform::Render::Text::TextFormat::~TextFormat(&result);
    Scaleform::Render::Text::TextFormat::~TextFormat(&fmt);
  }
  WritableData = Scaleform::Render::ContextImpl::Entry::getWritableData(this, 0x400u);
  LOBYTE(WritableData[10].__vftable) |= 1u;
  if ( !this->PNode.Scaleform::Render::TreeNode::Scaleform::Render::ContextImpl::Entry::pPrev )
    Scaleform::Render::ContextImpl::Entry::addToPropagateImpl(this);
}

void __fastcall Scaleform::Render::TreeText::SetFontStyle(
        Scaleform::Render::TreeText *this,
        Scaleform::Render::TreeText::FontStyle fontStyle,
        unsigned __int64 startPos,
        unsigned __int64 endPos)
{
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rax
  Scaleform::MemoryHeap *v11; // rax
  __int32 v12; // ebx
  __int32 v13; // ebx
  bool v14; // dl
  bool v15; // dl
  __int64 v16; // rbx
  const Scaleform::Render::Text::TextFormat *v17; // rax
  Scaleform::Render::ContextImpl::EntryData *WritableData; // rax
  Scaleform::Render::Text::TextFormat fmt; // [rsp+20h] [rbp-A8h] BYREF
  Scaleform::Render::Text::TextFormat result; // [rsp+70h] [rbp-58h] BYREF

  v8 = *(_QWORD *)(*(_QWORD *)(((unsigned __int64)this & 0xFFFFFFFFFFFFF000ui64) + 0x20)
                 + 8i64 * (unsigned int)((int)((_DWORD)this - ((unsigned int)this & 0xFFFFF000) - 56) / 56)
                 + 40);
  v9 = *(_QWORD *)(v8 + 144);
  if ( !v9 )
    goto LABEL_16;
  v10 = *(_QWORD *)(*(_QWORD *)(v9 + 16) + 16i64);
  if ( v10 )
    v11 = *(Scaleform::MemoryHeap **)(v10 + 48);
  else
    v11 = (Scaleform::MemoryHeap *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->GetAllocHeapOrNULL)(Scaleform::Memory::pGlobalHeap);
  Scaleform::Render::Text::TextFormat::TextFormat(&fmt, v11);
  if ( fontStyle == Normal )
  {
    v15 = 0;
    goto LABEL_13;
  }
  v12 = fontStyle - 1;
  if ( !v12 )
  {
    v15 = 1;
LABEL_13:
    Scaleform::Render::Text::TextFormat::SetBold(&fmt, v15);
    v14 = 0;
    goto LABEL_14;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
    Scaleform::Render::Text::TextFormat::SetBold(&fmt, 0);
    v14 = 1;
    goto LABEL_14;
  }
  if ( v13 == 1 )
  {
    Scaleform::Render::Text::TextFormat::SetBold(&fmt, 1);
    v14 = 1;
LABEL_14:
    Scaleform::Render::Text::TextFormat::SetItalic(&fmt, v14);
  }
  Scaleform::Render::Text::DocView::SetTextFormat(
    *(Scaleform::Render::Text::DocView **)(v8 + 144),
    &fmt,
    startPos,
    endPos);
  v16 = *(_QWORD *)(v8 + 144);
  v17 = Scaleform::Render::Text::TextFormat::Merge(
          *(Scaleform::Render::Text::TextFormat **)(*(_QWORD *)(v16 + 16) + 56i64),
          &result,
          &fmt);
  Scaleform::Render::Text::StyledText::SetDefaultTextFormat(*(Scaleform::Render::Text::StyledText **)(v16 + 16), v17);
  Scaleform::Render::Text::TextFormat::~TextFormat(&result);
  Scaleform::Render::Text::TextFormat::~TextFormat(&fmt);
LABEL_16:
  WritableData = Scaleform::Render::ContextImpl::Entry::getWritableData(this, 0x400u);
  LOBYTE(WritableData[10].__vftable) |= 1u;
  if ( !this->PNode.Scaleform::Render::TreeNode::Scaleform::Render::ContextImpl::Entry::pPrev )
    Scaleform::Render::ContextImpl::Entry::addToPropagateImpl(this);
}

void __fastcall Scaleform::Render::TreeText::SetHtmlText(
        Scaleform::Render::TreeText *this,
        const char *putf8Str,
        unsigned __int64 lengthInBytes,
        Scaleform::ArrayDH<Scaleform::Render::Text::StyledText::HTMLImageTagInfo,2,Scaleform::ArrayDefaultPolicy> *pimgInfoArr)
{
  Scaleform::Render::Text::DocView *v5; // rcx
  Scaleform::Render::ContextImpl::EntryData *WritableData; // rax

  v5 = *(Scaleform::Render::Text::DocView **)(*(_QWORD *)(*(_QWORD *)(((unsigned __int64)this & 0xFFFFFFFFFFFFF000ui64)
                                                                    + 0x20)
                                                        + 8i64
                                                        * (unsigned int)((int)((_DWORD)this
                                                                             - ((unsigned int)this & 0xFFFFF000)
                                                                             - 56)
                                                                       / 56)
                                                        + 40)
                                            + 144i64);
  if ( v5 )
    Scaleform::Render::Text::DocView::ParseHtml(v5, putf8Str, lengthInBytes, 0, pimgInfoArr, 0i64, 0i64, 0i64);
  WritableData = Scaleform::Render::ContextImpl::Entry::getWritableData(this, 0x400u);
  LOBYTE(WritableData[10].__vftable) |= 1u;
  if ( !this->PNode.Scaleform::Render::TreeNode::Scaleform::Render::ContextImpl::Entry::pPrev )
    Scaleform::Render::ContextImpl::Entry::addToPropagateImpl(this);
}

void __fastcall Scaleform::Render::TreeText::SetHtmlText(
        Scaleform::Render::TreeText *this,
        const wchar_t *pstr,
        unsigned __int64 lengthInChars,
        Scaleform::ArrayDH<Scaleform::Render::Text::StyledText::HTMLImageTagInfo,2,Scaleform::ArrayDefaultPolicy> *pimgInfoArr)
{
  Scaleform::Render::Text::DocView *v5; // rcx
  Scaleform::Render::ContextImpl::EntryData *WritableData; // rax

  v5 = *(Scaleform::Render::Text::DocView **)(*(_QWORD *)(*(_QWORD *)(((unsigned __int64)this & 0xFFFFFFFFFFFFF000ui64)
                                                                    + 0x20)
                                                        + 8i64
                                                        * (unsigned int)((int)((_DWORD)this
                                                                             - ((unsigned int)this & 0xFFFFF000)
                                                                             - 56)
                                                                       / 56)
                                                        + 40)
                                            + 144i64);
  if ( v5 )
    Scaleform::Render::Text::DocView::ParseHtml(v5, pstr, lengthInChars, 0, pimgInfoArr, 0i64, 0i64, 0i64);
  WritableData = Scaleform::Render::ContextImpl::Entry::getWritableData(this, 0x400u);
  LOBYTE(WritableData[10].__vftable) |= 1u;
  if ( !this->PNode.Scaleform::Render::TreeNode::Scaleform::Render::ContextImpl::Entry::pPrev )
    Scaleform::Render::ContextImpl::Entry::addToPropagateImpl(this);
}

void __fastcall Scaleform::Render::TreeText::SetLayout(
        Scaleform::Render::TreeText *this,
        const Scaleform::Render::TextLayout::Builder *b)
{
  Scaleform::Render::ContextImpl::EntryData *WritableData; // rax
  Scaleform::Render::ContextImpl::EntryData *v5; // rsi
  Scaleform::Render::TextLayout *v6; // rax
  __int64 v7; // rax
  __int64 v8; // rbx
  Scaleform::RefCountVImpl *v9; // rcx
  int v10; // [rsp+30h] [rbp+8h] BYREF

  WritableData = Scaleform::Render::ContextImpl::Entry::getWritableData(this, 0x400u);
  v10 = 74;
  v5 = WritableData;
  v6 = (Scaleform::Render::TextLayout *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                          Scaleform::Memory::pGlobalHeap,
                                          this,
                                          192i64,
                                          &v10);
  if ( v6 )
  {
    Scaleform::Render::TextLayout::TextLayout(v6, b);
    v8 = v7;
  }
  else
  {
    v8 = 0i64;
  }
  v9 = *(Scaleform::RefCountVImpl **)&v5[9].Type;
  if ( v9 )
    Scaleform::RefCountImpl::Release(v9);
  *(_QWORD *)&v5[9].Type = v8;
  if ( !this->PNode.Scaleform::Render::TreeNode::Scaleform::Render::ContextImpl::Entry::pPrev )
    Scaleform::Render::ContextImpl::Entry::addToPropagateImpl(this);
}

void __fastcall Scaleform::Render::TreeText::SetLetterSpacing(
        Scaleform::Render::TreeText *this,
        float letterSpacing,
        unsigned __int64 startPos,
        unsigned __int64 endPos)
{
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rax
  Scaleform::MemoryHeap *v10; // rax
  Scaleform::Render::Text::DocView *v11; // rcx
  __int64 v12; // rbx
  const Scaleform::Render::Text::TextFormat *v13; // rax
  Scaleform::Render::ContextImpl::EntryData *WritableData; // rax
  Scaleform::Render::Text::TextFormat fmt; // [rsp+20h] [rbp-B8h] BYREF
  Scaleform::Render::Text::TextFormat result; // [rsp+70h] [rbp-68h] BYREF

  v7 = *(_QWORD *)(*(_QWORD *)(((unsigned __int64)this & 0xFFFFFFFFFFFFF000ui64) + 0x20)
                 + 8i64 * (unsigned int)((int)((_DWORD)this - ((unsigned int)this & 0xFFFFF000) - 56) / 56)
                 + 40);
  v8 = *(_QWORD *)(v7 + 144);
  if ( v8 )
  {
    v9 = *(_QWORD *)(*(_QWORD *)(v8 + 16) + 16i64);
    if ( v9 )
      v10 = *(Scaleform::MemoryHeap **)(v9 + 48);
    else
      v10 = (Scaleform::MemoryHeap *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->GetAllocHeapOrNULL)(Scaleform::Memory::pGlobalHeap);
    Scaleform::Render::Text::TextFormat::TextFormat(&fmt, v10);
    v11 = *(Scaleform::Render::Text::DocView **)(v7 + 144);
    fmt.PresentMask |= 2u;
    fmt.LetterSpacing = letterSpacing * 20.0;
    Scaleform::Render::Text::DocView::SetTextFormat(v11, &fmt, startPos, endPos);
    v12 = *(_QWORD *)(v7 + 144);
    v13 = Scaleform::Render::Text::TextFormat::Merge(
            *(Scaleform::Render::Text::TextFormat **)(*(_QWORD *)(v12 + 16) + 56i64),
            &result,
            &fmt);
    Scaleform::Render::Text::StyledText::SetDefaultTextFormat(*(Scaleform::Render::Text::StyledText **)(v12 + 16), v13);
    Scaleform::Render::Text::TextFormat::~TextFormat(&result);
    Scaleform::Render::Text::TextFormat::~TextFormat(&fmt);
  }
  WritableData = Scaleform::Render::ContextImpl::Entry::getWritableData(this, 0x400u);
  LOBYTE(WritableData[10].__vftable) |= 1u;
  if ( !this->PNode.Scaleform::Render::TreeNode::Scaleform::Render::ContextImpl::Entry::pPrev )
    Scaleform::Render::ContextImpl::Entry::addToPropagateImpl(this);
}

void __fastcall Scaleform::Render::TreeText::SetMultiline(Scaleform::Render::TreeText *this, bool multiline)
{
  __int64 v3; // rax
  Scaleform::Render::ContextImpl::EntryData *WritableData; // rax

  v3 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(((unsigned __int64)this & 0xFFFFFFFFFFFFF000ui64) + 0x20)
                             + 8i64 * (unsigned int)((int)((_DWORD)this - ((unsigned int)this & 0xFFFFF000) - 56) / 56)
                             + 40)
                 + 144i64);
  if ( v3 )
  {
    if ( multiline )
      *(_BYTE *)(v3 + 344) |= 4u;
    else
      *(_BYTE *)(v3 + 344) &= ~4u;
  }
  WritableData = Scaleform::Render::ContextImpl::Entry::getWritableData(this, 0x400u);
  LOBYTE(WritableData[10].__vftable) |= 1u;
  if ( !this->PNode.Scaleform::Render::TreeNode::Scaleform::Render::ContextImpl::Entry::pPrev )
    Scaleform::Render::ContextImpl::Entry::addToPropagateImpl(this);
}

void __fastcall Scaleform::Render::TreeText::SetText(
        Scaleform::Render::TreeText *this,
        const char *putf8Str,
        unsigned __int64 lengthInBytes)
{
  Scaleform::Render::Text::DocView *v4; // rcx
  Scaleform::Render::ContextImpl::EntryData *WritableData; // rax

  v4 = *(Scaleform::Render::Text::DocView **)(*(_QWORD *)(*(_QWORD *)(((unsigned __int64)this & 0xFFFFFFFFFFFFF000ui64)
                                                                    + 0x20)
                                                        + 8i64
                                                        * (unsigned int)((int)((_DWORD)this
                                                                             - ((unsigned int)this & 0xFFFFF000)
                                                                             - 56)
                                                                       / 56)
                                                        + 40)
                                            + 144i64);
  if ( v4 )
    Scaleform::Render::Text::DocView::SetText(v4, putf8Str, lengthInBytes);
  WritableData = Scaleform::Render::ContextImpl::Entry::getWritableData(this, 0x400u);
  LOBYTE(WritableData[10].__vftable) |= 1u;
  if ( !this->PNode.Scaleform::Render::TreeNode::Scaleform::Render::ContextImpl::Entry::pPrev )
    Scaleform::Render::ContextImpl::Entry::addToPropagateImpl(this);
}

void __fastcall Scaleform::Render::TreeText::SetText(
        Scaleform::Render::TreeText *this,
        const wchar_t *pstr,
        unsigned __int64 lengthInChars)
{
  Scaleform::Render::Text::DocView *v4; // rcx
  Scaleform::Render::ContextImpl::EntryData *WritableData; // rax

  v4 = *(Scaleform::Render::Text::DocView **)(*(_QWORD *)(*(_QWORD *)(((unsigned __int64)this & 0xFFFFFFFFFFFFF000ui64)
                                                                    + 0x20)
                                                        + 8i64
                                                        * (unsigned int)((int)((_DWORD)this
                                                                             - ((unsigned int)this & 0xFFFFF000)
                                                                             - 56)
                                                                       / 56)
                                                        + 40)
                                            + 144i64);
  if ( v4 )
    Scaleform::Render::Text::DocView::SetText(v4, pstr, lengthInChars);
  WritableData = Scaleform::Render::ContextImpl::Entry::getWritableData(this, 0x400u);
  LOBYTE(WritableData[10].__vftable) |= 1u;
  if ( !this->PNode.Scaleform::Render::TreeNode::Scaleform::Render::ContextImpl::Entry::pPrev )
    Scaleform::Render::ContextImpl::Entry::addToPropagateImpl(this);
}

void __fastcall Scaleform::Render::TreeText::SetUnderline(
        Scaleform::Render::TreeText *this,
        bool underline,
        unsigned __int64 startPos,
        unsigned __int64 endPos)
{
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rax
  Scaleform::MemoryHeap *v11; // rax
  __int64 v12; // rbx
  const Scaleform::Render::Text::TextFormat *v13; // rax
  Scaleform::Render::ContextImpl::EntryData *WritableData; // rax
  Scaleform::Render::Text::TextFormat fmt; // [rsp+20h] [rbp-A8h] BYREF
  Scaleform::Render::Text::TextFormat result; // [rsp+70h] [rbp-58h] BYREF

  v8 = *(_QWORD *)(*(_QWORD *)(((unsigned __int64)this & 0xFFFFFFFFFFFFF000ui64) + 0x20)
                 + 8i64 * (unsigned int)((int)((_DWORD)this - ((unsigned int)this & 0xFFFFF000) - 56) / 56)
                 + 40);
  v9 = *(_QWORD *)(v8 + 144);
  if ( v9 )
  {
    v10 = *(_QWORD *)(*(_QWORD *)(v9 + 16) + 16i64);
    if ( v10 )
      v11 = *(Scaleform::MemoryHeap **)(v10 + 48);
    else
      v11 = (Scaleform::MemoryHeap *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->GetAllocHeapOrNULL)(Scaleform::Memory::pGlobalHeap);
    Scaleform::Render::Text::TextFormat::TextFormat(&fmt, v11);
    Scaleform::Render::Text::TextFormat::SetUnderline(&fmt, underline);
    Scaleform::Render::Text::DocView::SetTextFormat(
      *(Scaleform::Render::Text::DocView **)(v8 + 144),
      &fmt,
      startPos,
      endPos);
    v12 = *(_QWORD *)(v8 + 144);
    v13 = Scaleform::Render::Text::TextFormat::Merge(
            *(Scaleform::Render::Text::TextFormat **)(*(_QWORD *)(v12 + 16) + 56i64),
            &result,
            &fmt);
    Scaleform::Render::Text::StyledText::SetDefaultTextFormat(*(Scaleform::Render::Text::StyledText **)(v12 + 16), v13);
    Scaleform::Render::Text::TextFormat::~TextFormat(&result);
    Scaleform::Render::Text::TextFormat::~TextFormat(&fmt);
  }
  WritableData = Scaleform::Render::ContextImpl::Entry::getWritableData(this, 0x400u);
  LOBYTE(WritableData[10].__vftable) |= 1u;
  if ( !this->PNode.Scaleform::Render::TreeNode::Scaleform::Render::ContextImpl::Entry::pPrev )
    Scaleform::Render::ContextImpl::Entry::addToPropagateImpl(this);
}

void __fastcall Scaleform::Render::TreeText::SetVAlignment(
        Scaleform::Render::TreeText *this,
        Scaleform::Render::TreeText::VAlignment a)
{
  __int64 v4; // rdx
  __int32 v5; // er10
  char v6; // al
  Scaleform::Render::ContextImpl::EntryData *WritableData; // rax

  v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(((unsigned __int64)this & 0xFFFFFFFFFFFFF000ui64) + 0x20)
                             + 8i64 * (unsigned int)((int)((_DWORD)this - ((unsigned int)this & 0xFFFFF000) - 56) / 56)
                             + 40)
                 + 144i64);
  if ( v4 )
  {
    v5 = a - 1;
    if ( v5 )
    {
      if ( v5 == 1 )
        v6 = 2;
      else
        v6 = 1;
    }
    else
    {
      v6 = 3;
    }
    *(_BYTE *)(v4 + 345) &= 0xF3u;
    *(_BYTE *)(v4 + 345) |= 4 * (v6 & 3);
    *(_BYTE *)(v4 + 347) |= 1u;
  }
  WritableData = Scaleform::Render::ContextImpl::Entry::getWritableData(this, 0x400u);
  LOBYTE(WritableData[10].__vftable) |= 1u;
  if ( !this->PNode.Scaleform::Render::TreeNode::Scaleform::Render::ContextImpl::Entry::pPrev )
    Scaleform::Render::ContextImpl::Entry::addToPropagateImpl(this);
}

void __fastcall Scaleform::Render::TreeText::SetWordWrap(Scaleform::Render::TreeText *this, bool wordWrap)
{
  Scaleform::Render::Text::DocView *v3; // rcx
  Scaleform::Render::ContextImpl::EntryData *WritableData; // rax

  v3 = *(Scaleform::Render::Text::DocView **)(*(_QWORD *)(*(_QWORD *)(((unsigned __int64)this & 0xFFFFFFFFFFFFF000ui64)
                                                                    + 0x20)
                                                        + 8i64
                                                        * (unsigned int)((int)((_DWORD)this
                                                                             - ((unsigned int)this & 0xFFFFF000)
                                                                             - 56)
                                                                       / 56)
                                                        + 40)
                                            + 144i64);
  if ( v3 )
  {
    if ( wordWrap )
      Scaleform::Render::Text::DocView::SetWordWrap(v3);
    else
      Scaleform::Render::Text::DocView::ClearWordWrap(v3);
  }
  WritableData = Scaleform::Render::ContextImpl::Entry::getWritableData(this, 0x400u);
  LOBYTE(WritableData[10].__vftable) |= 1u;
  if ( !this->PNode.Scaleform::Render::TreeNode::Scaleform::Render::ContextImpl::Entry::pPrev )
    Scaleform::Render::ContextImpl::Entry::addToPropagateImpl(this);
}

Scaleform::Render::TreeCacheNode *__fastcall Scaleform::Render::TreeText::NodeData::updateCache(
        Scaleform::Render::TreeText::NodeData *this,
        Scaleform::Render::HAL *hal,
        Scaleform::Render::TreeCacheNode *pparent,
        Scaleform::Render::TreeCacheNode *pinsert,
        Scaleform::Render::TreeNode *pnode,
        unsigned __int16 depth)
{
  Scaleform::Render::TreeText *v6; // rbp
  Scaleform::Render::TreeCacheNode *pRenderer; // rbx
  Scaleform::Render::TreeCacheNode *v12; // r9
  int v13; // edi
  Scaleform::Render::TreeNode *v14; // rcx
  Scaleform::Render::TreeCacheText *v15; // r14
  Scaleform::Render::GlyphCache *v16; // rax
  Scaleform::Render::TreeCacheNode *v17; // rax

  v6 = (Scaleform::Render::TreeText *)pnode;
  pRenderer = pnode->pRenderer;
  if ( pRenderer )
    goto LABEL_8;
  v12 = pparent;
  v13 = this->Flags & 0x21 | ((unsigned __int8)pparent->Flags | (unsigned __int8)(2 * (this->Flags & 0x20))) & 0xC0;
  do
  {
    if ( (_BYTE)pRenderer )
      break;
    v14 = v12->pNode;
    v12 = v12->pParent;
    LOBYTE(pRenderer) = (*(_WORD *)((*(_QWORD *)(*(_QWORD *)(((unsigned __int64)v14 & 0xFFFFFFFFFFFFF000ui64) + 0x28)
                                               + 8i64
                                               * (unsigned int)((int)((_DWORD)v14 - ((unsigned int)v14 & 0xFFFFF000) - 56)
                                                              / 56)
                                               + 40) & 0xFFFFFFFFFFFFFFFEui64)
                                  + 10) & 0x200) != 0;
  }
  while ( v12 );
  LODWORD(pnode) = 71;
  v15 = (Scaleform::Render::TreeCacheText *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                              Scaleform::Memory::pGlobalHeap,
                                              pparent,
                                              432i64,
                                              &pnode);
  if ( v15 )
  {
    v16 = hal->GetGlyphCache(hal);
    Scaleform::Render::TreeCacheText::TreeCacheText(v15, v6, v16, v13 | ((_BYTE)pRenderer != 0 ? 0x200 : 0));
    pRenderer = v17;
    if ( v17 )
    {
      v6->pRenderer = v17;
LABEL_8:
      Scaleform::Render::TreeCacheNode::UpdateInsertIntoParent(pRenderer, hal, pparent, pinsert, this, depth);
      return pRenderer;
    }
  }
  return 0i64;
}

