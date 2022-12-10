#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_gradients.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_drawableimage.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_buffer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_highlight.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatapacked.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_pathdatapacker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphparam.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_scale9grid.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_vertex.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_image.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cxform.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_font.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_hash.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_states.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_statebag.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_context.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_containers.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_fontmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_constants.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textlayout.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraystaticbuff.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_core.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_twips.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_filterdesc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filters.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filterparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_linebuffer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_range.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"

Scaleform::Render::Text::LineBuffer::Line * Scaleform::Render::Text::LineBuffer::TextLineAllocator::AllocLine(unsigned long size, Scaleform::Render::Text::LineBuffer::LineType lineType); // 0x14038C300
void Scaleform::Render::Text::LineBuffer::TextLineAllocator::FreeLine(Scaleform::Render::Text::LineBuffer::Line * ptr); // 0x14038D740
void Scaleform::Render::Text::LineBuffer::ReleasePartOfLine(Scaleform::Render::Text::LineBuffer::GlyphEntry * pglyphs, unsigned long n, Scaleform::Render::Text::LineBuffer::FormatDataEntry * pnextFormatData); // 0x14038DC80
void Scaleform::Render::Text::LineBuffer::GlyphInserter::ResetTo(const Scaleform::Render::Text::LineBuffer::GlyphInserter & savedPos); // 0x14038DE30
void Scaleform::Render::Text::LineBuffer::GlyphIterator::operator++(); // 0x14038C270
void Scaleform::Render::Text::LineBuffer::GlyphIterator::UpdateDesc(); // 0x14038E280
Scaleform::Render::Text::LineBuffer::FormatDataEntry * Scaleform::Render::Text::LineBuffer::Line::GetFormatData(); // 0x14038D7A0
void Scaleform::Render::Text::LineBuffer::Line::Release(); // 0x14038DBF0
bool Scaleform::Render::Text::LineBuffer::Line::HasNewLine(); // 0x14038D8E0
Scaleform::Render::Text::LineBuffer::LineBuffer(); // 0x14038C210
Scaleform::Render::Text::LineBuffer::~LineBuffer(); // 0x14038C240
const Scaleform::Render::Text::LineBuffer::Line * Scaleform::Render::Text::LineBuffer::GetLine(unsigned long lineIdx); // 0x14038D800
unsigned long Scaleform::Render::Text::LineBuffer::CalcLineSize(unsigned long glyphCount, unsigned long formatDataElementsCount, Scaleform::Render::Text::LineBuffer::LineType lineType); // 0x14038C4C0
Scaleform::Render::Text::LineBuffer::Line * Scaleform::Render::Text::LineBuffer::InsertNewLine(unsigned long lineIdx, unsigned long glyphCount, unsigned long formatDataElementsCount, Scaleform::Render::Text::LineBuffer::LineType lineType); // 0x14038D940
void Scaleform::Render::Text::LineBuffer::RemoveLines(unsigned long lineIdx, unsigned long num); // 0x14038DD10
unsigned long Scaleform::Render::Text::LineBuffer::GetVScrollOffsetInFixp(); // 0x14038D8B0
void Scaleform::Render::Text::LineBuffer::SetFirstVisibleLine(unsigned long line); // 0x14038E260
void Scaleform::Render::Text::LineBuffer::SetHScrollOffset(unsigned long offset); // 0x14038E270
Scaleform::Render::Text::LineBuffer::Iterator Scaleform::Render::Text::LineBuffer::FindLineByTextPos(unsigned long long textPos); // 0x14038D5F0
Scaleform::Render::Text::LineBuffer::Iterator Scaleform::Render::Text::LineBuffer::FindLineAtYOffset(float yoff); // 0x14038D490
Scaleform::Render::Text::LineBuffer::Iterator Scaleform::Render::Text::LineBuffer::FindLineAtOffset(const Scaleform::Render::Point<float> & p); // 0x14038D2C0
bool Scaleform::Render::Text::LineBuffer::IsLineVisible(unsigned long lineIndex, float yOffset); // 0x14038DA00
bool Scaleform::Render::Text::LineBuffer::IsPartiallyVisible(float yOffset); // 0x14038DA90
void Scaleform::Render::Text::LineBuffer::Scale(float scaleFactor); // 0x14038DEA0
long Scaleform::Render::Text::LineBuffer::GetMinLineHeight(); // 0x14038D820
void Scaleform::Render::Text::LineBuffer::CreateVisibleTextLayout(Scaleform::Render::TextLayout::Builder & bld, const Scaleform::Render::Text::Highlighter * phighlighter, const Scaleform::Render::TextFieldParam & textFieldParam); // 0x14038C4E0
Scaleform::Render::Text::FontHandle * Scaleform::Render::Text::LineBuffer::FindFirstFontInfo(); // 0x14038D0E0
void Scaleform::Render::Text::LoadTextFieldParamFromTextFilter(Scaleform::Render::TextFieldParam & params, const Scaleform::Render::Text::TextFilter & filter); // 0x14038DB20void __fastcall Scaleform::Render::Text::LineBuffer::GlyphIterator::GlyphIterator(
        Scaleform::Render::Text::LineBuffer::GlyphIterator *this,
        void *pglyphs,
        unsigned int glyphsCount,
        Scaleform::Render::Text::LineBuffer::FormatDataEntry *pfmtData)
{
  this->HighlighterIter.pManager = 0i64;
  this->HighlighterIter.CurAdjStartPos = 0i64;
  this->HighlighterIter.NumGlyphs = 0i64;
  this->HighlighterIter.CurDesc.Length = 0i64;
  this->HighlighterIter.CurDesc.AdjStartPos = 0i64;
  this->HighlighterIter.CurDesc.GlyphNum = 0i64;
  *(_QWORD *)&this->HighlighterIter.CurDesc.Id = 0i64;
  this->HighlighterIter.CurDesc.StartPos = -1i64;
  this->HighlighterIter.CurDesc.Offset = -1i64;
  *(_QWORD *)&this->HighlighterIter.CurDesc.Info.TextColor.Channels.Blue = 0i64;
  this->HighlighterIter.CurDesc.Info.Flags = 0;
  *(_QWORD *)&this->ColorV = 0i64;
  *(_QWORD *)&this->UnderlineColor = 0i64;
  this->pFontHandle.pObject = 0i64;
  this->pImage.pObject = 0i64;
  *(_QWORD *)&this->UnderlineStyle = 0i64;
  this->pGlyphs = (Scaleform::Render::Text::LineBuffer::GlyphEntry *)pglyphs;
  this->pNextFormatData = pfmtData;
  this->pEndGlyphs = (Scaleform::Render::Text::LineBuffer::GlyphEntry *)((char *)pglyphs + 8 * glyphsCount);
  Scaleform::Render::Text::LineBuffer::GlyphIterator::UpdateDesc(this);
}

void __fastcall Scaleform::Render::Text::LineBuffer::GlyphIterator::GlyphIterator(
        Scaleform::Render::Text::LineBuffer::GlyphIterator *this,
        void *pglyphs,
        unsigned int glyphsCount,
        Scaleform::Render::Text::LineBuffer::FormatDataEntry *pfmtData,
        const Scaleform::Render::Text::Highlighter *highlighter,
        unsigned __int64 lineStartPos)
{
  __int64 v6; // rbx
  Scaleform::Render::Text::HighlighterPosIterator result; // [rsp+20h] [rbp-68h] BYREF

  v6 = glyphsCount;
  this->HighlighterIter.pManager = 0i64;
  this->HighlighterIter.CurAdjStartPos = 0i64;
  this->HighlighterIter.NumGlyphs = 0i64;
  this->HighlighterIter.CurDesc.StartPos = -1i64;
  this->HighlighterIter.CurDesc.Length = 0i64;
  this->HighlighterIter.CurDesc.Offset = -1i64;
  this->HighlighterIter.CurDesc.AdjStartPos = 0i64;
  this->HighlighterIter.CurDesc.GlyphNum = 0i64;
  *(_QWORD *)&this->HighlighterIter.CurDesc.Id = 0i64;
  *(_QWORD *)&this->HighlighterIter.CurDesc.Info.TextColor.Channels.Blue = 0i64;
  this->HighlighterIter.CurDesc.Info.Flags = 0;
  *(_QWORD *)&this->ColorV = 0i64;
  *(_QWORD *)&this->UnderlineColor = 0i64;
  this->pFontHandle.pObject = 0i64;
  this->pImage.pObject = 0i64;
  *(_QWORD *)&this->UnderlineStyle = 0i64;
  this->HighlighterIter = *Scaleform::Render::Text::Highlighter::GetPosIterator(
                             (Scaleform::Render::Text::Highlighter *)highlighter,
                             &result,
                             lineStartPos,
                             0xFFFFFFFFFFFFFFFFui64);
  this->pEndGlyphs = (Scaleform::Render::Text::LineBuffer::GlyphEntry *)((char *)pglyphs + 8 * v6);
  this->pGlyphs = (Scaleform::Render::Text::LineBuffer::GlyphEntry *)pglyphs;
  this->pNextFormatData = pfmtData;
  Scaleform::Render::Text::LineBuffer::GlyphIterator::UpdateDesc(this);
}

void __fastcall Scaleform::Render::Text::LineBuffer::LineBuffer(Scaleform::Render::Text::LineBuffer *this)
{
  this->Lines.Data.Data = 0i64;
  this->Lines.Data.Size = 0i64;
  this->Lines.Data.Policy.Capacity = 0i64;
  this->Geom.FirstVisibleLinePos = 0;
  *(_QWORD *)&this->Geom.VisibleRect.x2 = 0i64;
  *(_QWORD *)&this->Geom.VisibleRect.y2 = 0i64;
  this->Geom.Flags = 0;
  *(_QWORD *)&this->Geom.VisibleRect.x1 = 0i64;
  this->Geom.VisibleRect.x2 = 0.0;
  this->LastHScrollOffset = -1;
}

void __fastcall Scaleform::Render::Text::LineBuffer::~LineBuffer(Scaleform::Render::Text::LineBuffer *this)
{
  this->Geom.Flags |= 1u;
  Scaleform::Render::Text::LineBuffer::RemoveLines(this, 0, this->Lines.Data.Size);
  Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->Lines.Data.Data);
}

void __fastcall Scaleform::Render::Text::LineBuffer::GlyphIterator::operator++(
        Scaleform::Render::Text::LineBuffer::GlyphIterator *this)
{
  Scaleform::Render::Text::LineBuffer::GlyphEntry *pGlyphs; // rcx

  pGlyphs = this->pGlyphs;
  if ( pGlyphs && pGlyphs < this->pEndGlyphs )
  {
    if ( !this->Delta )
      this->Delta = pGlyphs->LenAndFontSize >> 12;
    this->pGlyphs = pGlyphs + 1;
    if ( (pGlyphs[1].LenAndFontSize & 0xF000) != 0
      && this->Delta
      && !Scaleform::Render::Text::HighlighterPosIterator::IsFinished(&this->HighlighterIter) )
    {
      Scaleform::Render::Text::HighlighterPosIterator::operator+=(&this->HighlighterIter, this->Delta);
      this->Delta = 0;
    }
    Scaleform::Render::Text::LineBuffer::GlyphIterator::UpdateDesc(this);
  }
}

Scaleform::Render::Text::LineBuffer::Line *__fastcall Scaleform::Render::Text::LineBuffer::TextLineAllocator::AllocLine(
        Scaleform::Render::Text::LineBuffer::TextLineAllocator *this,
        unsigned int size,
        Scaleform::Render::Text::LineBuffer::LineType lineType)
{
  Scaleform::Render::Text::LineBuffer::Line *result; // rax
  unsigned int v6; // ecx

  result = (Scaleform::Render::Text::LineBuffer::Line *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                                          Scaleform::Memory::pGlobalHeap,
                                                          this,
                                                          size,
                                                          0i64);
  result->MemSize &= 0xF8000000;
  result->MemSize |= size & 0x7FFFFFF;
  v6 = result->MemSize & 0x7FFFFFF;
  if ( lineType )
  {
    result->MemSize = v6 | 0x40000000;
    *(_QWORD *)&result->Data32.GlyphsCount = 0i64;
    *(_DWORD *)((char *)&result->Data8 + 34) = 0;
    *(_QWORD *)&result->Data8.OffsetX = 0i64;
    *(_QWORD *)&result->Data8.Width = 0i64;
    result->Data32.TextLength = 0;
  }
  else
  {
    result->MemSize = v6 | 0xC0000000;
    *(_QWORD *)&result->Data8.TextPosAndLength = 0i64;
    *(_QWORD *)&result->Data8.OffsetY = 0i64;
    *(_DWORD *)&result->Data8.BaseLineOffset = 0;
  }
  return result;
}

Scaleform::Render::Text::LineBuffer::GlyphIterator *__fastcall Scaleform::Render::Text::LineBuffer::Line::Begin(
        Scaleform::Render::Text::LineBuffer::Line *this,
        Scaleform::Render::Text::LineBuffer::GlyphIterator *result,
        const Scaleform::Render::Text::Highlighter *phighlighter)
{
  unsigned int TextPos; // er10
  __int64 v6; // rdx
  __int64 GlyphsCount; // rax
  Scaleform::Render::Text::LineBuffer::FormatDataEntry *v8; // r8
  unsigned int v9; // er11
  __int64 v10; // rdx
  __int64 v12; // rdx
  __int64 v13; // rax
  Scaleform::Render::Text::LineBuffer::FormatDataEntry *v14; // r9
  unsigned int v15; // eax
  __int64 v16; // rdx

  if ( phighlighter )
  {
    TextPos = this->Data32.TextPos;
    if ( (this->MemSize & 0x80000000) != 0 )
    {
      TextPos &= 0xFFFFFFu;
      if ( TextPos == 0xFFFFFF )
        TextPos = -1;
    }
    v6 = 49i64;
    if ( (this->MemSize & 0x80000000) != 0 )
      v6 = 37i64;
    if ( (this->MemSize & 0x80000000) == 0 )
      GlyphsCount = this->Data32.GlyphsCount;
    else
      GlyphsCount = this->Data8.GlyphsCount;
    if ( (this->MemSize & 0x80000000) == 0 )
      v9 = this->Data32.GlyphsCount;
    else
      v9 = this->Data8.GlyphsCount;
    v8 = (Scaleform::Render::Text::LineBuffer::FormatDataEntry *)(((unsigned __int64)this + 8 * GlyphsCount + v6) & 0xFFFFFFFFFFFFFFF8ui64);
    v10 = 42i64;
    if ( (this->MemSize & 0x80000000) != 0 )
      v10 = 30i64;
    Scaleform::Render::Text::LineBuffer::GlyphIterator::GlyphIterator(
      result,
      (char *)this + v10,
      v9,
      v8,
      phighlighter,
      TextPos);
    return result;
  }
  else
  {
    v12 = 49i64;
    if ( (this->MemSize & 0x80000000) != 0 )
      v12 = 37i64;
    if ( (this->MemSize & 0x80000000) == 0 )
      v13 = this->Data32.GlyphsCount;
    else
      v13 = this->Data8.GlyphsCount;
    v14 = (Scaleform::Render::Text::LineBuffer::FormatDataEntry *)(((unsigned __int64)this + 8 * v13 + v12) & 0xFFFFFFFFFFFFFFF8ui64);
    if ( (this->MemSize & 0x80000000) == 0 )
      v15 = this->Data32.GlyphsCount;
    else
      v15 = this->Data8.GlyphsCount;
    v16 = 42i64;
    if ( (this->MemSize & 0x80000000) != 0 )
      v16 = 30i64;
    Scaleform::Render::Text::LineBuffer::GlyphIterator::GlyphIterator(result, (char *)this + v16, v15, v14);
    return result;
  }
}

__int64 __fastcall Scaleform::Render::Text::LineBuffer::CalcLineSize(
        unsigned int glyphCount,
        unsigned int formatDataElementsCount,
        Scaleform::Render::Text::LineBuffer::LineType lineType)
{
  int v3; // eax

  v3 = 37;
  if ( lineType )
    v3 = 49;
  return ((v3 + 8 * glyphCount) & 0xFFFFFFF8) + 8 * formatDataElementsCount;
}

void __fastcall Scaleform::Render::Text::LineBuffer::CreateVisibleTextLayout(
        Scaleform::Render::Text::LineBuffer *this,
        Scaleform::Render::TextLayout::Builder *bld,
        const Scaleform::Render::Text::Highlighter *phighlighter,
        const Scaleform::Render::TextFieldParam *textFieldParam)
{
  unsigned __int64 FirstVisibleLinePos; // r13
  int v5; // er10
  const Scaleform::Render::Text::Highlighter *v6; // rdi
  Scaleform::Render::TextLayout::Builder *v7; // rsi
  unsigned __int64 Size; // rax
  bool v10; // bl
  float v11; // xmm7_4
  unsigned int v12; // er14
  bool v13; // zf
  float v14; // xmm11_4
  float y2; // xmm2_4
  float x2; // xmm1_4
  float x1; // eax
  float v18; // xmm6_4
  unsigned __int64 v19; // rcx
  bool v20; // al
  Scaleform::Render::Text::LineBuffer::Line *v21; // rcx
  unsigned int v22; // eax
  int OffsetY; // eax
  unsigned int Height; // eax
  Scaleform::Render::Text::LineBuffer::Line *v25; // rsi
  float v26; // xmm12_4
  unsigned __int16 BaseLineOffset; // ax
  float v28; // xmm14_4
  Scaleform::Render::Text::HighlightInfo::UnderlineStyle UnderlineStyle; // ebx
  char v30; // r9
  unsigned int v31; // er15
  unsigned int UnderlineColor; // edi
  float v33; // xmm13_4
  float v34; // xmm8_4
  unsigned int v35; // ecx
  unsigned __int16 v36; // ax
  __m128i v37; // xmm15
  Scaleform::Render::Text::LineBuffer::GlyphEntry *pGlyphs; // rcx
  float v39; // xmm15_4
  unsigned __int16 Flags; // dx
  int Advance; // er8
  unsigned int Index; // er10
  float v43; // xmm10_4
  unsigned int SelectionColor; // esi
  Scaleform::Render::Text::ImageDesc *pObject; // r13
  float ScreenWidth; // xmm7_4
  float v47; // xmm10_4
  float v48; // xmm6_4
  Scaleform::Render::Font *v49; // r9
  __int64 v50; // rax
  float v51; // xmm6_4
  float v52; // xmm1_4
  float v53; // xmm0_4
  float v54; // xmm2_4
  Scaleform::Render::TextLayout::Builder *v55; // rax
  float v56; // xmm1_4
  float v57; // xmm3_4
  Scaleform::Render::Image *v58; // rbx
  int v59; // esi
  float v60; // xmm7_4
  float v61; // xmm8_4
  float v62; // xmm6_4
  float v63; // xmm0_4
  unsigned int Delta; // eax
  unsigned int ColorV; // ebx
  Scaleform::Render::TextLayout::Builder *v66; // r14
  int v67; // er14
  bool v68; // r13
  Scaleform::Render::TextUnderlineStyle v69; // ecx
  Scaleform::Render::TextUnderlineStyle v70; // ecx
  int v71; // edi
  float v72; // xmm9_4
  float v73; // xmm1_4
  float v74; // xmm6_4
  float v75; // xmm9_4
  float v76; // xmm7_4
  signed int HScrollOffset; // eax
  bool v78; // dl
  bool v79; // cl
  Scaleform::Render::TextUnderlineStyle v80; // ecx
  float v81; // xmm2_4
  const Scaleform::Render::TextFieldParam *v82; // rdi
  char v83; // [rsp+38h] [rbp-D0h]
  char v84; // [rsp+39h] [rbp-CFh]
  bool v85; // [rsp+3Ah] [rbp-CEh]
  bool v86; // [rsp+3Bh] [rbp-CDh]
  int v87; // [rsp+3Ch] [rbp-CCh]
  __int64 v88; // [rsp+40h] [rbp-C8h]
  float v90; // [rsp+50h] [rbp-B8h]
  Scaleform::LogMessageId id; // [rsp+54h] [rbp-B4h] BYREF
  int v92; // [rsp+58h] [rbp-B0h]
  float v93; // [rsp+5Ch] [rbp-ACh]
  Scaleform::Render::Font *f; // [rsp+60h] [rbp-A8h]
  Scaleform::Render::Text::LineBuffer::Line *v95; // [rsp+68h] [rbp-A0h]
  unsigned __int16 *p_Flags; // [rsp+70h] [rbp-98h]
  Scaleform::Render::Font *v97; // [rsp+78h] [rbp-90h]
  unsigned __int64 v98; // [rsp+80h] [rbp-88h]
  const Scaleform::Render::Text::Highlighter *v99; // [rsp+88h] [rbp-80h]
  const Scaleform::Render::TextFieldParam *v100; // [rsp+90h] [rbp-78h]
  Scaleform::Render::Text::LineBuffer::GlyphIterator result; // [rsp+98h] [rbp-70h] BYREF
  Scaleform::Render::Rect<float> v102; // [rsp+138h] [rbp+30h] BYREF
  Scaleform::Render::Rect<float> r; // [rsp+148h] [rbp+40h] BYREF
  __int128 v104; // [rsp+158h] [rbp+50h] BYREF

  FirstVisibleLinePos = this->Geom.FirstVisibleLinePos;
  v5 = 0;
  v100 = textFieldParam;
  v6 = phighlighter;
  v99 = phighlighter;
  v7 = bld;
  v92 = FirstVisibleLinePos;
  if ( (_DWORD)FirstVisibleLinePos )
  {
    Size = this->Lines.Data.Size;
    if ( FirstVisibleLinePos < Size && (FirstVisibleLinePos & 0x80000000) == 0i64 && Size )
      v5 = this->Lines.Data.Data[FirstVisibleLinePos]->Data32.OffsetY - (*this->Lines.Data.Data)->Data32.OffsetY;
  }
  v10 = (this->Geom.Flags & 4) != 0;
  v86 = v10;
  v104 = 0i64;
  LODWORD(v11) = COERCE_UNSIGNED_INT((float)v5) ^ _xmm;
  v93 = v11;
  if ( phighlighter )
    Scaleform::Render::Text::Highlighter::HasUnderlineHighlight((Scaleform::Render::Text::Highlighter *)phighlighter);
  v12 = 0;
  v13 = (this->Geom.Flags & 0x24) == 0;
  v14 = 0.0;
  v97 = 0i64;
  if ( v13 && Scaleform::Render::Text::LineBuffer::IsPartiallyVisible(this, v11) )
  {
    y2 = this->Geom.VisibleRect.y2;
    x2 = this->Geom.VisibleRect.x2;
    x1 = this->Geom.VisibleRect.x1;
    v7->ClipBox.y1 = this->Geom.VisibleRect.y1;
    v7->ClipBox.x2 = x2;
    v7->ClipBox.y2 = y2;
    v7->ClipBox.x1 = x1;
    v84 = 1;
  }
  else
  {
    v84 = 0;
  }
  v18 = FLOAT_20_0;
LABEL_13:
  v19 = (unsigned int)FirstVisibleLinePos;
  v98 = (unsigned int)FirstVisibleLinePos;
  if ( (unsigned int)FirstVisibleLinePos >= this->Lines.Data.Size || (FirstVisibleLinePos & 0x80000000) != 0i64 )
  {
    v20 = 0;
  }
  else if ( v10 )
  {
    v20 = 1;
  }
  else
  {
    v21 = this->Lines.Data.Data[(unsigned int)FirstVisibleLinePos];
    v22 = this->Geom.FirstVisibleLinePos;
    if ( (_DWORD)FirstVisibleLinePos == v22 )
    {
      OffsetY = v21->Data32.OffsetY;
      v19 = v98;
      v20 = (float)((float)(this->Geom.VisibleRect.y2 - this->Geom.VisibleRect.y1) + v18) >= (float)((float)OffsetY + v11);
    }
    else if ( (unsigned int)FirstVisibleLinePos <= v22
           || ((v21->MemSize & 0x80000000) == 0 ? (Height = v21->Data32.Height) : (Height = v21->Data8.Height),
               (float)((float)(this->Geom.VisibleRect.y2 - this->Geom.VisibleRect.y1) + v18) < (float)((float)(int)(v21->Data32.OffsetY + Height) + v11)) )
    {
      v19 = v98;
      v20 = 0;
    }
    else
    {
      v19 = v98;
      v20 = 1;
    }
  }
  if ( v20 )
  {
    v25 = this->Lines.Data.Data[v19];
    v95 = v25;
    v26 = (float)v25->Data32.OffsetX + this->Geom.VisibleRect.x1;
    if ( (v25->MemSize & 0x80000000) == 0 )
      BaseLineOffset = v25->Data32.BaseLineOffset;
    else
      BaseLineOffset = v25->Data8.BaseLineOffset;
    v28 = (float)((float)v25->Data32.OffsetY + this->Geom.VisibleRect.y1) + (float)((float)BaseLineOffset + v11);
    Scaleform::Render::Text::LineBuffer::Line::Begin(v25, &result, v6);
    UnderlineStyle = Underline_None;
    v90 = 0.0;
    v30 = 1;
    v88 = 0i64;
    v83 = 1;
    v102 = 0i64;
    v31 = 0;
    UnderlineColor = 0;
    v33 = 0.0;
    v34 = 0.0;
    if ( (v25->MemSize & 0x80000000) == 0 )
      v35 = v25->Data32.Height;
    else
      v35 = v25->Data8.Height;
    if ( (v25->MemSize & 0x80000000) == 0 )
      v36 = v25->Data32.BaseLineOffset;
    else
      v36 = v25->Data8.BaseLineOffset;
    v37 = _mm_cvtsi32_si128(v35);
    pGlyphs = result.pGlyphs;
    v39 = _mm_cvtepi32_ps(v37).m128_f32[0] - (float)v36;
    while ( 1 )
    {
      if ( !pGlyphs || pGlyphs >= result.pEndGlyphs )
      {
LABEL_134:
        if ( UnderlineColor )
        {
          switch ( UnderlineStyle )
          {
            case Underline_Thick:
              v80 = TextUnderline_Thick;
              break;
            case Underline_Dotted:
              v80 = TextUnderline_Dotted;
              break;
            case Underline_DottedThick:
              v80 = TextUnderline_DottedThick;
              break;
            case Underline_DitheredSingle:
              v80 = TextUnderline_Dithered;
              break;
            case Underline_DitheredThick:
              v80 = TextUnderline_DitheredThick;
              break;
            default:
              v80 = TextUnderline_Single;
              break;
          }
          v7 = bld;
          Scaleform::Render::TextLayout::Builder::AddUnderline(
            bld,
            v33 - (float)(int)this->Geom.HScrollOffset,
            (float)(v39 * 0.5) + v34,
            (float)SHIDWORD(v88),
            v80,
            UnderlineColor);
        }
        else
        {
          v7 = bld;
        }
        if ( v31 )
        {
          LODWORD(v81) = COERCE_UNSIGNED_INT((float)(int)this->Geom.HScrollOffset) ^ _xmm;
          v102.x1 = v102.x1 + v81;
          v102.x2 = v102.x2 + v81;
          v102.y1 = v102.y1 + -0.0;
          v102.y2 = v102.y2 + -0.0;
          Scaleform::Render::TextLayout::Builder::AddSelection(v7, &v102, v31);
        }
        if ( result.pImage.pObject )
          Scaleform::RefCountNTSImpl::Release(result.pImage.pObject);
        if ( result.pFontHandle.pObject )
          Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)result.pFontHandle.pObject);
        v11 = v93;
        LODWORD(FirstVisibleLinePos) = v92;
        v10 = v86;
        v6 = v99;
        if ( v98 < this->Lines.Data.Size )
          LODWORD(FirstVisibleLinePos) = ++v92;
        goto LABEL_13;
      }
      Flags = pGlyphs->Flags;
      Advance = pGlyphs->Advance;
      p_Flags = &pGlyphs->Flags;
      if ( (Flags & 0x40) != 0 )
        Advance = -Advance;
      v87 = Advance;
      if ( pGlyphs->Index == 0xFFFF )
        Index = -1;
      else
        Index = pGlyphs->Index;
      v43 = FLOAT_N1_0;
      SelectionColor = result.SelectionColor;
      pObject = 0i64;
      f = 0i64;
      id.Id = Index;
      if ( result.pImage.pObject )
      {
        ScreenWidth = result.pImage.pObject->ScreenWidth;
        pObject = result.pImage.pObject;
      }
      else
      {
        v47 = (float)(pGlyphs->LenAndFontSize & 0xFFF);
        if ( (Flags & 0x10) != 0 )
          v47 = v47 * 0.0625;
        v43 = v47 * v18;
        v48 = v43 * 0.0009765625;
        if ( result.pFontHandle.pObject )
          v49 = result.pFontHandle.pObject->pFont.pObject;
        else
          v49 = 0i64;
        v13 = (this->Geom.Flags & 4) == 0;
        f = v49;
        if ( v13 )
        {
          if ( Index == -1 )
          {
            ScreenWidth = (float)Advance * v48;
          }
          else
          {
            v50 = (__int64)v49->GetGlyphBounds(v49, Index, (Scaleform::Render::Rect<float> *)&v104);
            pGlyphs = result.pGlyphs;
            ScreenWidth = *(float *)(v50 + 8) * v48;
          }
        }
        else
        {
          ScreenWidth = 0.0;
        }
        v30 = v83;
      }
      v51 = v26 - (float)(int)this->Geom.HScrollOffset;
      if ( (this->Geom.Flags & 4) == 0 )
      {
        if ( this->Geom.VisibleRect.x1 >= (float)(v51 + ScreenWidth) )
          goto LABEL_76;
        if ( (int)v51 >= (int)this->Geom.VisibleRect.x2 )
        {
          v18 = FLOAT_20_0;
          goto LABEL_134;
        }
      }
      v85 = result.UnderlineStyle != Underline_None;
      if ( v30 )
      {
        Scaleform::Render::TextLayout::Builder::SetNewLine(bld, v51, v28);
        v83 = 0;
      }
      if ( (*p_Flags & 0x200) != 0
        || v84
        || (this->Geom.Flags & 0x24) != 0
        || ((v52 = this->Geom.VisibleRect.x1, v52 <= v51) || (float)(v51 + ScreenWidth) <= v52)
        && ((v53 = this->Geom.VisibleRect.x2, v53 <= v51) || (float)(v51 + ScreenWidth) <= v53) )
      {
        v55 = bld;
      }
      else
      {
        v54 = this->Geom.VisibleRect.x2 + 0.0;
        v55 = bld;
        v56 = this->Geom.VisibleRect.y1 + -40.0;
        v57 = this->Geom.VisibleRect.y2 + 40.0;
        v84 = 1;
        bld->ClipBox.x1 = this->Geom.VisibleRect.x1 + 0.0;
        bld->ClipBox.x2 = v54;
        bld->ClipBox.y1 = v56;
        bld->ClipBox.y2 = v57;
      }
      if ( !pObject )
        break;
      v58 = pObject->pImage.pObject;
      if ( !v58 )
      {
        id.Id = 135168;
        Scaleform::LogDebugMessage(&id, "An image in TextLayout is NULL");
        pGlyphs = result.pGlyphs;
        UnderlineStyle = (int)v88;
LABEL_76:
        v59 = v87;
        goto LABEL_77;
      }
      v59 = v87;
      v60 = pObject->Matrix.M[1][0];
      v61 = pObject->Matrix.M[0][0];
      v62 = sqrtf(
              (float)(pObject->Matrix.M[0][1] * pObject->Matrix.M[0][1])
            + (float)(pObject->Matrix.M[1][1] * pObject->Matrix.M[1][1]));
      v63 = sqrtf((float)(v61 * v61) + (float)(v60 * v60));
      Scaleform::Render::TextLayout::Builder::AddImage(bld, v58, v63, v62, pObject->BaseLineY, (float)v87);
      pGlyphs = result.pGlyphs;
      v34 = v90;
      UnderlineStyle = (int)v88;
LABEL_77:
      if ( pGlyphs && pGlyphs < result.pEndGlyphs )
      {
        Delta = result.Delta;
        if ( !result.Delta )
        {
          Delta = pGlyphs->LenAndFontSize >> 12;
          result.Delta = Delta;
        }
        result.pGlyphs = pGlyphs + 1;
        if ( (pGlyphs[1].LenAndFontSize & 0xF000) != 0
          && Delta
          && !Scaleform::Render::Text::HighlighterPosIterator::IsFinished(&result.HighlighterIter) )
        {
          Scaleform::Render::Text::HighlighterPosIterator::operator+=(&result.HighlighterIter, result.Delta);
          result.Delta = 0;
        }
        Scaleform::Render::Text::LineBuffer::GlyphIterator::UpdateDesc(&result);
        pGlyphs = result.pGlyphs;
      }
      v18 = FLOAT_20_0;
      v30 = v83;
      v26 = v26 + (float)v59;
    }
    ColorV = result.ColorV;
    if ( result.ColorV != v12 )
      Scaleform::Render::TextLayout::Builder::ChangeColor(v55, result.ColorV);
    if ( f == v97 && v43 == v14 )
    {
      v66 = bld;
    }
    else
    {
      v66 = bld;
      Scaleform::Render::TextLayout::Builder::ChangeFont(bld, f, v43);
      Scaleform::Render::TextLayout::Builder::AddRefCntData(bld, result.pFontHandle.pObject);
    }
    if ( (*((_BYTE *)p_Flags + 1) & 1) != 0 )
    {
      if ( UnderlineColor )
      {
        switch ( (int)v88 )
        {
          case 2:
            v70 = TextUnderline_Thick;
            break;
          case 3:
            v70 = TextUnderline_Dotted;
            break;
          case 4:
            v70 = TextUnderline_DottedThick;
            break;
          case 5:
            v70 = TextUnderline_Dithered;
            break;
          case 6:
            v70 = TextUnderline_DitheredThick;
            break;
          default:
            v70 = TextUnderline_Single;
            break;
        }
        Scaleform::Render::TextLayout::Builder::AddUnderline(
          v66,
          v33 - (float)(int)this->Geom.HScrollOffset,
          (float)(v39 * 0.5) + v34,
          (float)SHIDWORD(v88),
          v70,
          UnderlineColor);
      }
      v67 = v87;
      v68 = 0;
      HIDWORD(v88) = 0;
    }
    else if ( UnderlineColor == result.UnderlineColor && (_DWORD)v88 == result.UnderlineStyle )
    {
      v67 = v87;
      v68 = v85;
      if ( result.UnderlineColor )
        HIDWORD(v88) += v87;
    }
    else
    {
      if ( UnderlineColor )
      {
        switch ( (int)v88 )
        {
          case 2:
            v69 = TextUnderline_Thick;
            break;
          case 3:
            v69 = TextUnderline_Dotted;
            break;
          case 4:
            v69 = TextUnderline_DottedThick;
            break;
          case 5:
            v69 = TextUnderline_Dithered;
            break;
          case 6:
            v69 = TextUnderline_DitheredThick;
            break;
          default:
            v69 = TextUnderline_Single;
            break;
        }
        Scaleform::Render::TextLayout::Builder::AddUnderline(
          v66,
          v33 - (float)(int)this->Geom.HScrollOffset,
          (float)(v39 * 0.5) + v34,
          (float)SHIDWORD(v88),
          v69,
          UnderlineColor);
      }
      v67 = v87;
      v33 = v26;
      v68 = v85;
      HIDWORD(v88) = v87;
      v90 = v28;
    }
    if ( result.SelectionColor || v31 )
    {
      v71 = Scaleform::Render::Text::LineBuffer::Line::GetHeight(v95);
      v72 = (float)(Scaleform::Render::Text::LineBuffer::Line::GetNonNegLeading(v95) + v71);
      v73 = v28 - Scaleform::Render::Text::LineBuffer::Line::GetAscent(v95);
      v74 = v26 + 0.0;
      v75 = v72 + v73;
      v76 = v73 + 0.0;
      if ( SelectionColor != v31 )
      {
        if ( v31 )
        {
          HScrollOffset = this->Geom.HScrollOffset;
          r.x1 = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)HScrollOffset) ^ _xmm) + v102.x1;
          r.x2 = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)HScrollOffset) ^ _xmm) + v102.x2;
          r.y1 = v102.y1 + -0.0;
          r.y2 = v102.y2 + -0.0;
          Scaleform::Render::TextLayout::Builder::AddSelection(bld, &r, v31);
        }
        v102.x2 = (float)v67 + v26;
        v102.y2 = v75;
        goto LABEL_126;
      }
      if ( SelectionColor )
      {
        v74 = fminf(v74, v102.x1);
        v76 = fminf(v76, v102.y1);
        v102.x2 = fmaxf(v102.x2, (float)v67 + v26);
        v102.y2 = fmaxf(v102.y2, v75);
LABEL_126:
        v102.y1 = v76;
        v102.x1 = v74;
      }
    }
    if ( result.pFontHandle.pObject )
    {
      v78 = result.pFontHandle.pObject->OverridenFontFlags & 1;
      v79 = (result.pFontHandle.pObject->OverridenFontFlags & 2) != 0;
    }
    else
    {
      v78 = 0;
      v79 = 0;
    }
    Scaleform::Render::TextLayout::Builder::AddChar(bld, id.Id, (float)v67, (*p_Flags & 0x200) != 0, v79, v78);
    v31 = SelectionColor;
    pGlyphs = result.pGlyphs;
    v12 = ColorV;
    v34 = v90;
    v14 = v43;
    v59 = v87;
    v97 = f;
    if ( v68 )
    {
      UnderlineStyle = result.UnderlineStyle;
      UnderlineColor = result.UnderlineColor;
      LODWORD(v88) = result.UnderlineStyle;
    }
    else
    {
      UnderlineColor = 0;
      UnderlineStyle = Underline_None;
      LODWORD(v88) = 0;
    }
    goto LABEL_77;
  }
  v82 = v100;
  *(_OWORD *)&v7->Param.TextParam.pFont = *(_OWORD *)&v100->TextParam.pFont;
  *(_OWORD *)&v7->Param.TextParam.BlurY = *(_OWORD *)&v82->TextParam.BlurY;
  *(_OWORD *)&v7->Param.ShadowParam.GlyphIndex = *(_OWORD *)&v82->ShadowParam.GlyphIndex;
  *(_OWORD *)&v7->Param.ShadowColor = *(_OWORD *)&v82->ShadowColor;
}

Scaleform::Render::Text::FontHandle *__fastcall Scaleform::Render::Text::LineBuffer::FindFirstFontInfo(
        Scaleform::Render::Text::LineBuffer *this)
{
  unsigned __int64 Size; // rdi
  unsigned __int64 i; // rbx
  __int64 v4; // r8
  Scaleform::Render::Text::LineBuffer::Line *v5; // rcx
  bool v6; // dl
  char *v7; // r8
  __int64 GlyphsCount; // rax
  Scaleform::Render::Text::LineBuffer::FormatDataEntry *v9; // r8
  unsigned int v10; // er9
  __int64 v11; // rax
  unsigned int Delta; // eax
  Scaleform::RefCountVImpl *pObject; // rcx
  Scaleform::Render::Text::FontHandle *v15; // rbx
  Scaleform::Render::Text::LineBuffer::GlyphIterator v16; // [rsp+20h] [rbp-59h] BYREF

  Size = this->Lines.Data.Size;
  for ( i = 0i64; i < Size; ++i )
  {
    v4 = 42i64;
    v5 = this->Lines.Data.Data[i];
    v6 = (v5->MemSize & 0x80000000) != 0;
    if ( (v5->MemSize & 0x80000000) != 0 )
      v4 = 30i64;
    v7 = (char *)v5 + v4;
    if ( (v5->MemSize & 0x80000000) == 0 )
      GlyphsCount = v5->Data32.GlyphsCount;
    else
      GlyphsCount = v5->Data8.GlyphsCount;
    v9 = (Scaleform::Render::Text::LineBuffer::FormatDataEntry *)((unsigned __int64)&v7[8 * GlyphsCount + 7] & 0xFFFFFFFFFFFFFFF8ui64);
    if ( (v5->MemSize & 0x80000000) == 0 )
      v10 = v5->Data32.GlyphsCount;
    else
      v10 = v5->Data8.GlyphsCount;
    v16.HighlighterIter.pManager = 0i64;
    v11 = 42i64;
    v16.HighlighterIter.CurAdjStartPos = 0i64;
    if ( v6 )
      v11 = 30i64;
    v16.HighlighterIter.NumGlyphs = 0i64;
    v16.HighlighterIter.CurDesc.StartPos = -1i64;
    v16.pGlyphs = (Scaleform::Render::Text::LineBuffer::GlyphEntry *)((char *)v5 + v11);
    v16.HighlighterIter.CurDesc.Length = 0i64;
    v16.HighlighterIter.CurDesc.Offset = -1i64;
    memset(&v16.HighlighterIter.CurDesc.AdjStartPos, 0, 33);
    v16.pEndGlyphs = (Scaleform::Render::Text::LineBuffer::GlyphEntry *)((char *)v5 + 8 * v10 + v11);
    memset(&v16.ColorV, 0, 40);
    v16.pNextFormatData = v9;
    while ( 1 )
    {
      Scaleform::Render::Text::LineBuffer::GlyphIterator::UpdateDesc(&v16);
      if ( !v16.pGlyphs || v16.pGlyphs >= v16.pEndGlyphs )
        break;
      if ( (v16.pGlyphs->Flags & 0x2000) != 0 )
      {
        pObject = (Scaleform::RefCountVImpl *)v16.pFontHandle.pObject;
        v15 = v16.pFontHandle.pObject;
        if ( v16.pImage.pObject )
        {
          Scaleform::RefCountNTSImpl::Release(v16.pImage.pObject);
          pObject = (Scaleform::RefCountVImpl *)v16.pFontHandle.pObject;
        }
        if ( pObject )
          Scaleform::RefCountImpl::Release(pObject);
        return v15;
      }
      Delta = v16.Delta;
      if ( !v16.Delta )
      {
        Delta = v16.pGlyphs->LenAndFontSize >> 12;
        v16.Delta = Delta;
      }
      ++v16.pGlyphs;
      if ( (v16.pGlyphs->LenAndFontSize & 0xF000) != 0
        && Delta
        && !Scaleform::Render::Text::HighlighterPosIterator::IsFinished(&v16.HighlighterIter) )
      {
        Scaleform::Render::Text::HighlighterPosIterator::operator+=(&v16.HighlighterIter, v16.Delta);
        v16.Delta = 0;
      }
    }
    if ( v16.pImage.pObject )
      Scaleform::RefCountNTSImpl::Release(v16.pImage.pObject);
    if ( v16.pFontHandle.pObject )
      Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v16.pFontHandle.pObject);
  }
  return 0i64;
}

Scaleform::Render::Text::LineBuffer::Iterator *__fastcall Scaleform::Render::Text::LineBuffer::FindLineAtOffset(
        Scaleform::Render::Text::LineBuffer *this,
        Scaleform::Render::Text::LineBuffer::Iterator *result,
        const Scaleform::Render::Point<float> *p)
{
  signed __int64 Size; // rsi
  __int64 v6; // r9
  __int64 v7; // r10
  Scaleform::Render::Text::LineBuffer::Line **Data; // rdi
  float y; // xmm3_4
  __int64 v10; // rbx
  Scaleform::Render::Text::LineBuffer::Line *v11; // rax
  float OffsetY; // xmm2_4
  int Height; // er8
  int Leading; // ecx
  Scaleform::Render::Text::LineBuffer::Line *v15; // rcx
  int v16; // edi
  float v17; // xmm2_4
  int v18; // er8
  int v19; // eax
  int v20; // eax
  Scaleform::Render::Text::LineBuffer::Iterator *v21; // rax
  bool v22; // al

  Size = this->Lines.Data.Size;
  if ( Size )
  {
    v6 = 0i64;
    v7 = this->Lines.Data.Size;
    if ( Size > 0 )
    {
      Data = this->Lines.Data.Data;
      y = p->y;
      do
      {
        v10 = (v7 >> 1) + v6;
        v11 = Data[v10];
        OffsetY = (float)v11->Data32.OffsetY;
        if ( y >= OffsetY
          && ((v11->MemSize & 0x80000000) == 0 ? (Height = v11->Data32.Height) : (Height = v11->Data8.Height),
              (v11->MemSize & 0x80000000) == 0 ? (Leading = v11->Data32.Leading) : (Leading = v11->Data8.Leading),
              (float)((float)((float)Height + OffsetY) + (float)Leading) > y)
          || (int)(float)(OffsetY - y) >= 0 )
        {
          v7 >>= 1;
        }
        else
        {
          v6 = v10 + 1;
          v7 += -1 - (v7 >> 1);
        }
      }
      while ( v7 > 0 );
    }
    if ( v6 == Size )
      --v6;
    v15 = this->Lines.Data.Data[(unsigned int)v6];
    v16 = v15->Data32.OffsetY;
    if ( v15 )
    {
      v17 = p->y;
      while ( v17 >= (float)v15->Data32.OffsetY )
      {
        v18 = (v15->MemSize & 0x80000000) == 0 ? v15->Data32.Height : v15->Data8.Height;
        v19 = (v15->MemSize & 0x80000000) == 0 ? v15->Data32.Leading : v15->Data8.Leading;
        if ( (float)(v18 + v15->Data32.OffsetY + v19) <= v17 )
          break;
        if ( p->x >= (float)v15->Data32.OffsetX )
        {
          v20 = (v15->MemSize & 0x80000000) == 0 ? v15->Data32.Width : v15->Data8.Width;
          if ( (float)(v15->Data32.OffsetX + v20) > p->x )
          {
            v22 = (this->Geom.Flags & 4) != 0;
            result->pLineBuffer = this;
            result->StaticText = v22;
            result->CurrentPos = v6;
            result->YOffset = 0.0;
            goto LABEL_36;
          }
        }
        if ( ++v6 != Size )
        {
          v15 = this->Lines.Data.Data[(unsigned int)v6];
          if ( v15->Data32.OffsetY == v16 )
            continue;
        }
        break;
      }
    }
  }
  result->pLineBuffer = 0i64;
  *(_QWORD *)&result->CurrentPos = 0i64;
  result->StaticText = 0;
LABEL_36:
  v21 = result;
  result->pHighlight = 0i64;
  return v21;
}

Scaleform::Render::Text::LineBuffer::Iterator *__fastcall Scaleform::Render::Text::LineBuffer::FindLineAtYOffset(
        Scaleform::Render::Text::LineBuffer *this,
        Scaleform::Render::Text::LineBuffer::Iterator *result,
        float yoff)
{
  __int64 Size; // r8
  __int64 v6; // r10
  Scaleform::Render::Text::LineBuffer::Line **Data; // r14
  __int64 v8; // rbx
  Scaleform::Render::Text::LineBuffer::Line *v9; // rax
  float OffsetY; // xmm2_4
  int Height; // er11
  int Leading; // ecx
  Scaleform::Render::Text::LineBuffer::Line *v13; // r8
  unsigned int v14; // ecx
  int v15; // eax
  bool v16; // al
  Scaleform::Render::Text::LineBuffer::Iterator *v17; // rax

  if ( !this->Lines.Data.Size )
    goto LABEL_27;
  Size = this->Lines.Data.Size;
  v6 = 0i64;
  if ( Size > 0 )
  {
    Data = this->Lines.Data.Data;
    do
    {
      v8 = (Size >> 1) + v6;
      v9 = Data[v8];
      OffsetY = (float)v9->Data32.OffsetY;
      if ( yoff >= OffsetY
        && ((v9->MemSize & 0x80000000) == 0 ? (Height = v9->Data32.Height) : (Height = v9->Data8.Height),
            (v9->MemSize & 0x80000000) == 0 ? (Leading = v9->Data32.Leading) : (Leading = v9->Data8.Leading),
            (float)((float)((float)Height + OffsetY) + (float)Leading) > yoff)
        || (int)(float)(OffsetY - yoff) >= 0 )
      {
        Size >>= 1;
      }
      else
      {
        v6 = v8 + 1;
        Size += -1 - (Size >> 1);
      }
    }
    while ( Size > 0 );
  }
  if ( v6 == this->Lines.Data.Size )
    LODWORD(v6) = v6 - 1;
  v13 = this->Lines.Data.Data[(unsigned int)v6];
  if ( yoff >= (float)v13->Data32.OffsetY
    && ((v13->MemSize & 0x80000000) == 0 ? (v14 = v13->Data32.Height) : (v14 = v13->Data8.Height),
        (v13->MemSize & 0x80000000) == 0 ? (v15 = v13->Data32.Leading) : (v15 = v13->Data8.Leading),
        (float)(int)(v14 + v13->Data32.OffsetY + v15) > yoff) )
  {
    v16 = (this->Geom.Flags & 4) != 0;
    result->pLineBuffer = this;
    result->StaticText = v16;
    v17 = result;
    result->CurrentPos = v6;
    result->YOffset = 0.0;
    result->pHighlight = 0i64;
  }
  else
  {
LABEL_27:
    result->pLineBuffer = 0i64;
    v17 = result;
    *(_QWORD *)&result->CurrentPos = 0i64;
    result->StaticText = 0;
    result->pHighlight = 0i64;
  }
  return v17;
}

Scaleform::Render::Text::LineBuffer::Iterator *__fastcall Scaleform::Render::Text::LineBuffer::FindLineByTextPos(
        Scaleform::Render::Text::LineBuffer *this,
        Scaleform::Render::Text::LineBuffer::Iterator *result,
        unsigned __int64 textPos)
{
  __int64 Size; // r9
  __int64 v6; // r11
  Scaleform::Render::Text::LineBuffer::Line **Data; // r14
  __int64 v8; // rdi
  Scaleform::Render::Text::LineBuffer::Line *v9; // rax
  int v10; // ecx
  unsigned int TextLength; // er8
  Scaleform::Render::Text::LineBuffer::Line *v12; // r8
  unsigned int v13; // ecx
  unsigned int TextPosAndLength_high; // eax
  bool v15; // al
  Scaleform::Render::Text::LineBuffer::Iterator *v16; // rax

  if ( !this->Lines.Data.Size )
    goto LABEL_27;
  Size = this->Lines.Data.Size;
  v6 = 0i64;
  if ( Size > 0 )
  {
    Data = this->Lines.Data.Data;
    do
    {
      v8 = (Size >> 1) + v6;
      v9 = Data[v8];
      v10 = v9->Data32.TextPos;
      if ( (v9->MemSize & 0x80000000) != 0 )
      {
        v10 &= 0xFFFFFFu;
        if ( v10 == 0xFFFFFF )
          v10 = -1;
      }
      if ( (int)textPos >= v10
        && ((v9->MemSize & 0x80000000) == 0 ? (TextLength = v9->Data32.TextLength) : (TextLength = HIBYTE(v9->Data8.TextPosAndLength)),
            (int)textPos < (int)(TextLength + v10))
        || v10 - (int)textPos >= 0 )
      {
        Size >>= 1;
      }
      else
      {
        v6 = v8 + 1;
        Size += -1 - (Size >> 1);
      }
    }
    while ( Size > 0 );
  }
  if ( v6 == this->Lines.Data.Size )
    LODWORD(v6) = v6 - 1;
  v12 = this->Lines.Data.Data[(unsigned int)v6];
  v13 = v12->Data32.TextPos;
  if ( (v12->MemSize & 0x80000000) != 0 )
  {
    v13 &= 0xFFFFFFu;
    if ( v13 == 0xFFFFFF )
      v13 = -1;
  }
  if ( textPos >= v13
    && ((v12->MemSize & 0x80000000) == 0 ? (TextPosAndLength_high = v12->Data32.TextLength) : (TextPosAndLength_high = HIBYTE(v12->Data8.TextPosAndLength)),
        textPos <= TextPosAndLength_high + v13) )
  {
    v15 = (this->Geom.Flags & 4) != 0;
    result->pLineBuffer = this;
    result->StaticText = v15;
    v16 = result;
    result->CurrentPos = v6;
    result->YOffset = 0.0;
    result->pHighlight = 0i64;
  }
  else
  {
LABEL_27:
    result->pLineBuffer = 0i64;
    v16 = result;
    *(_QWORD *)&result->CurrentPos = 0i64;
    result->StaticText = 0;
    result->pHighlight = 0i64;
  }
  return v16;
}

void __fastcall Scaleform::Render::Text::LineBuffer::TextLineAllocator::FreeLine(
        Scaleform::Render::Text::LineBuffer::TextLineAllocator *this,
        Scaleform::Render::Text::LineBuffer::Line *ptr)
{
  if ( ptr )
  {
    Scaleform::Render::Text::LineBuffer::Line::Release(ptr);
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, ptr);
  }
}

float __fastcall Scaleform::Render::Text::LineBuffer::Line::GetAscent(Scaleform::Render::Text::LineBuffer::Line *this)
{
  if ( (this->MemSize & 0x80000000) == 0 )
    return (float)this->Data32.BaseLineOffset;
  else
    return (float)this->Data8.BaseLineOffset;
}

Scaleform::Render::Text::LineBuffer::FormatDataEntry *__fastcall Scaleform::Render::Text::LineBuffer::Line::GetFormatData(
        Scaleform::Render::Text::LineBuffer::Line *this)
{
  __int64 v1; // rdx

  v1 = 49i64;
  if ( (this->MemSize & 0x80000000) != 0 )
    v1 = 37i64;
  if ( (this->MemSize & 0x80000000) == 0 )
    return (Scaleform::Render::Text::LineBuffer::FormatDataEntry *)(((unsigned __int64)this
                                                                   + 8 * this->Data32.GlyphsCount
                                                                   + v1) & 0xFFFFFFFFFFFFFFF8ui64);
  else
    return (Scaleform::Render::Text::LineBuffer::FormatDataEntry *)(((unsigned __int64)this
                                                                   + 8 * this->Data8.GlyphsCount
                                                                   + v1) & 0xFFFFFFFFFFFFFFF8ui64);
}

__int64 __fastcall Scaleform::Render::Text::LineBuffer::Line::GetHeight(
        Scaleform::Render::Text::LineBuffer::Line *this)
{
  if ( (this->MemSize & 0x80000000) == 0 )
    return this->Data32.Height;
  else
    return this->Data8.Height;
}

Scaleform::Render::Text::LineBuffer::Line *__fastcall Scaleform::Render::Text::LineBuffer::GetLine(
        Scaleform::Render::Text::LineBuffer *this,
        unsigned int lineIdx)
{
  if ( lineIdx < this->Lines.Data.Size )
    return this->Lines.Data.Data[lineIdx];
  else
    return 0i64;
}

__int64 __fastcall Scaleform::Render::Text::LineBuffer::GetMinLineHeight(Scaleform::Render::Text::LineBuffer *this)
{
  unsigned __int64 Size; // r10
  __int64 v4; // rcx
  int v5; // er8
  Scaleform::Render::Text::LineBuffer::Line *v6; // rdx
  int v7; // eax
  int Height; // eax

  if ( !LODWORD(this->Lines.Data.Size) )
    return 0i64;
  Size = this->Lines.Data.Size;
  v4 = 0i64;
  v5 = 0x7FFFFFFF;
  while ( (unsigned int)v4 < Size && (int)v4 >= 0 )
  {
    v6 = this->Lines.Data.Data[v4];
    if ( (v6->MemSize & 0x80000000) == 0 )
    {
      Height = v6->Data32.Height;
      v4 = (unsigned int)(v4 + 1);
      if ( Height >= v5 )
        Height = v5;
      v5 = Height;
    }
    else
    {
      v7 = v6->Data8.Height;
      v4 = (unsigned int)(v4 + 1);
      if ( v7 >= v5 )
        v7 = v5;
      v5 = v7;
    }
  }
  return (unsigned int)v5;
}

int __fastcall Scaleform::Render::Text::LineBuffer::Line::GetNonNegLeading(
        Scaleform::Render::Text::LineBuffer::Line *this)
{
  int result; // eax

  if ( (this->MemSize & 0x80000000) == 0 )
  {
    LOWORD(result) = this->Data32.Leading;
    if ( (__int16)result > 0 )
      return (__int16)result;
  }
  else
  {
    LOBYTE(result) = this->Data8.Leading;
    if ( (char)result > 0 )
      return (char)result;
  }
  return 0;
}

__int64 __fastcall Scaleform::Render::Text::LineBuffer::GetVScrollOffsetInFixp(
        Scaleform::Render::Text::LineBuffer *this)
{
  unsigned __int64 FirstVisibleLinePos; // rax
  unsigned __int64 Size; // rdx

  FirstVisibleLinePos = this->Geom.FirstVisibleLinePos;
  if ( (_DWORD)FirstVisibleLinePos
    && (Size = this->Lines.Data.Size, FirstVisibleLinePos < Size)
    && (FirstVisibleLinePos & 0x80000000) == 0i64
    && Size )
  {
    return (unsigned int)(this->Lines.Data.Data[FirstVisibleLinePos]->Data32.OffsetY
                        - (*this->Lines.Data.Data)->Data32.OffsetY);
  }
  else
  {
    return 0i64;
  }
}

bool __fastcall Scaleform::Render::Text::LineBuffer::Line::HasNewLine(Scaleform::Render::Text::LineBuffer::Line *this)
{
  bool v2; // al
  unsigned int GlyphsCount; // ecx
  __int64 v4; // rdx
  __int64 v5; // rax

  v2 = (this->MemSize & 0x80000000) != 0;
  if ( (this->MemSize & 0x80000000) == 0 )
    GlyphsCount = this->Data32.GlyphsCount;
  else
    GlyphsCount = this->Data8.GlyphsCount;
  if ( !GlyphsCount )
    return 0;
  v4 = 42i64;
  if ( v2 )
    v4 = 30i64;
  v5 = v4 + 8i64 * (GlyphsCount - 1);
  return (*((_BYTE *)&this->Data8.ParagraphId + v5 + 3) & 1) != 0
      && *(_WORD *)((char *)&this->Data32.GlyphsCount + v5) >= 0x1000u;
}

Scaleform::Render::Text::LineBuffer::Line *__fastcall Scaleform::Render::Text::LineBuffer::InsertNewLine(
        Scaleform::Render::Text::LineBuffer *this,
        unsigned int lineIdx,
        unsigned int glyphCount,
        unsigned int formatDataElementsCount,
        Scaleform::Render::Text::LineBuffer::LineType lineType)
{
  unsigned __int64 v6; // rbp
  int v8; // eax
  Scaleform::Render::Text::LineBuffer::Line *result; // rax
  Scaleform::Render::Text::LineBuffer::Line *v10; // rbx
  unsigned __int64 Size; // r8
  Scaleform::Render::Text::LineBuffer::Line **v12; // rcx

  v6 = lineIdx;
  v8 = 37;
  if ( lineType )
    v8 = 49;
  result = Scaleform::Render::Text::LineBuffer::TextLineAllocator::AllocLine(
             &this->LineAllocator,
             ((v8 + 8 * glyphCount) & 0xFFFFFFF8) + 8 * formatDataElementsCount,
             lineType);
  v10 = result;
  if ( result )
  {
    if ( (result->MemSize & 0x80000000) == 0 )
      result->Data32.GlyphsCount = glyphCount;
    else
      result->Data8.GlyphsCount = glyphCount;
    Scaleform::ArrayData<Scaleform::Render::BundleEntry *,Scaleform::AllocatorLH<Scaleform::Render::BundleEntry *,2>,Scaleform::ArrayDefaultPolicy>::Resize(
      (Scaleform::ArrayData<Scaleform::Render::BundleEntry *,Scaleform::AllocatorLH<Scaleform::Render::BundleEntry *,2>,Scaleform::ArrayDefaultPolicy> *)this,
      this->Lines.Data.Size + 1);
    Size = this->Lines.Data.Size;
    if ( v6 < Size - 1 )
      memmove(&this->Lines.Data.Data[v6 + 1], &this->Lines.Data.Data[v6], 8 * (Size - v6) - 8);
    v12 = &this->Lines.Data.Data[v6];
    if ( v12 )
      *v12 = v10;
    return v10;
  }
  return result;
}

_BOOL8 __fastcall Scaleform::Render::Text::LineBuffer::IsLineVisible(
        Scaleform::Render::Text::LineBuffer *this,
        unsigned int lineIndex,
        float yOffset)
{
  Scaleform::Render::Text::LineBuffer::Line *v3; // r9
  unsigned int FirstVisibleLinePos; // eax
  int v6; // eax

  v3 = this->Lines.Data.Data[lineIndex];
  FirstVisibleLinePos = this->Geom.FirstVisibleLinePos;
  if ( lineIndex == FirstVisibleLinePos )
    return (float)((float)(this->Geom.VisibleRect.y2 - this->Geom.VisibleRect.y1) + 20.0) >= (float)((float)v3->Data32.OffsetY + yOffset);
  if ( lineIndex <= FirstVisibleLinePos )
    return 0i64;
  v6 = (v3->MemSize & 0x80000000) == 0 ? v3->Data32.Height : v3->Data8.Height;
  return (float)((float)(this->Geom.VisibleRect.y2 - this->Geom.VisibleRect.y1) + 20.0) >= (float)((float)(v3->Data32.OffsetY + v6)
                                                                                                 + yOffset);
}

bool __fastcall Scaleform::Render::Text::LineBuffer::IsPartiallyVisible(
        Scaleform::Render::Text::LineBuffer *this,
        float yOffset)
{
  unsigned int FirstVisibleLinePos; // eax
  Scaleform::Render::Text::LineBuffer::Line *v4; // r8
  int v7; // eax
  float v8; // xmm1_4
  float v9; // xmm0_4
  bool result; // al

  FirstVisibleLinePos = this->Geom.FirstVisibleLinePos;
  result = 0;
  if ( FirstVisibleLinePos < LODWORD(this->Lines.Data.Size) )
  {
    v4 = this->Lines.Data.Data[FirstVisibleLinePos];
    if ( (v4->MemSize & 0x80000000) == 0 ? v4->Data32.Width : v4->Data8.Width )
    {
      if ( (v4->MemSize & 0x80000000) == 0 ? v4->Data32.Height : v4->Data8.Height )
      {
        v7 = (v4->MemSize & 0x80000000) == 0 ? v4->Data32.Height : v4->Data8.Height;
        v8 = (float)(this->Geom.VisibleRect.y2 - this->Geom.VisibleRect.y1) + 20.0;
        v9 = (float)v4->Data32.OffsetY + yOffset;
        if ( v8 >= v9 && (float)(v9 + (float)v7) > v8 )
          return 1;
      }
    }
  }
  return result;
}

void __fastcall Scaleform::Render::Text::LoadTextFieldParamFromTextFilter(
        Scaleform::Render::TextFieldParam *params,
        const Scaleform::Render::Text::TextFilter *filter)
{
  params->TextParam.BlurX = (int)(float)((float)(filter->BlurX * 16.0) + 0.5);
  params->TextParam.BlurY = (int)(float)((float)(filter->BlurY * 16.0) + 0.5);
  params->TextParam.Flags = 128;
  params->TextParam.BlurStrength = (int)(float)((float)(filter->BlurStrength * 16.0) + 0.5);
  if ( (filter->ShadowFlags & 1) == 0 )
  {
    params->ShadowParam.Flags = filter->ShadowFlags & 0xFFFE;
    params->ShadowParam.BlurX = (int)(float)((float)(filter->ShadowParams.BlurX * 16.0) + 0.5);
    params->ShadowParam.BlurY = (int)(float)((float)(filter->ShadowParams.BlurX * 16.0) + 0.5);
    params->ShadowParam.BlurStrength = (int)(float)((float)(filter->ShadowParams.Strength * 16.0) + 0.5);
    params->ShadowColor = filter->ShadowParams.Colors[0].Raw;
    *(Scaleform::Render::Point<float> *)&params->ShadowOffsetX = filter->ShadowParams.Offset;
  }
}

void __fastcall Scaleform::Render::Text::LineBuffer::Line::Release(Scaleform::Render::Text::LineBuffer::Line *this)
{
  signed int MemSize; // ecx
  bool v3; // cl
  __int64 v4; // r10
  Scaleform::Render::Text::LineBuffer::GlyphEntry *v5; // r10
  unsigned int GlyphsCount; // er9
  __int64 v7; // rdx
  __int64 v8; // rax

  MemSize = this->MemSize;
  if ( (MemSize & 0x40000000) != 0 )
  {
    v3 = MemSize < 0;
    v4 = 42i64;
    if ( v3 )
      v4 = 30i64;
    v5 = (Scaleform::Render::Text::LineBuffer::GlyphEntry *)((char *)this + v4);
    if ( v3 )
      GlyphsCount = this->Data8.GlyphsCount;
    else
      GlyphsCount = this->Data32.GlyphsCount;
    v7 = 49i64;
    if ( v3 )
      v7 = 37i64;
    if ( v3 )
      v8 = this->Data8.GlyphsCount;
    else
      v8 = this->Data32.GlyphsCount;
    Scaleform::Render::Text::LineBuffer::ReleasePartOfLine(
      v5,
      GlyphsCount,
      (Scaleform::Render::Text::LineBuffer::FormatDataEntry *)(((unsigned __int64)this + 8 * v8 + v7) & 0xFFFFFFFFFFFFFFF8ui64));
    if ( (this->MemSize & 0x80000000) == 0 )
      this->Data32.GlyphsCount = 0;
    else
      this->Data8.GlyphsCount = 0;
  }
}

void __fastcall Scaleform::Render::Text::LineBuffer::ReleasePartOfLine(
        Scaleform::Render::Text::LineBuffer::GlyphEntry *pglyphs,
        unsigned int n,
        Scaleform::Render::Text::LineBuffer::FormatDataEntry *pnextFormatData)
{
  unsigned __int16 *p_Flags; // rdi
  __int64 v5; // rsi
  Scaleform::Render::Text::LineBuffer::FormatDataEntry *v6; // rax

  if ( n )
  {
    p_Flags = &pglyphs->Flags;
    v5 = n;
    do
    {
      if ( (*p_Flags & 0x4000) != 0 )
      {
        if ( (*p_Flags & 0x2000) != 0 )
        {
          Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)pnextFormatData->pFont);
          ++pnextFormatData;
        }
        v6 = pnextFormatData + 1;
        if ( (*p_Flags & 0x1000) == 0 )
          v6 = pnextFormatData;
        pnextFormatData = v6;
        if ( (*p_Flags & 0x800) != 0 )
        {
          Scaleform::RefCountNTSImpl::Release(v6->pImage);
          ++pnextFormatData;
        }
      }
      p_Flags += 4;
      --v5;
    }
    while ( v5 );
  }
}

void __fastcall Scaleform::Render::Text::LineBuffer::RemoveLines(
        Scaleform::Render::Text::LineBuffer *this,
        unsigned int lineIdx,
        unsigned int num)
{
  unsigned int v4; // ebp
  unsigned int v5; // edi
  __int64 v6; // r15
  __int64 v7; // r12
  Scaleform::Render::Text::LineBuffer::Line *v8; // r14
  unsigned __int64 Size; // r8
  unsigned __int64 Capacity; // rax

  v4 = 0;
  v5 = lineIdx;
  v6 = num;
  v7 = lineIdx;
  if ( num )
  {
    do
    {
      if ( !this || v5 >= this->Lines.Data.Size || (v5 & 0x80000000) != 0 )
        break;
      v8 = this->Lines.Data.Data[v5];
      if ( v8 )
      {
        Scaleform::Render::Text::LineBuffer::Line::Release(this->Lines.Data.Data[v5]);
        Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v8);
      }
      if ( v5 < this->Lines.Data.Size )
        ++v5;
      ++v4;
    }
    while ( v4 < (unsigned int)v6 );
  }
  Size = this->Lines.Data.Size;
  if ( Size == v6 )
  {
    if ( Size )
    {
      Capacity = this->Lines.Data.Policy.Capacity;
      if ( (Capacity & 0xFFFFFFFFFFFFFFFEui64) != 0 )
      {
        if ( Capacity )
        {
          if ( this->Lines.Data.Data )
          {
            ((void (__fastcall *)(Scaleform::MemoryHeap *, Scaleform::Render::Text::LineBuffer::Line **, unsigned __int64, __int64))Scaleform::Memory::pGlobalHeap->Free)(
              Scaleform::Memory::pGlobalHeap,
              this->Lines.Data.Data,
              Size,
              v7);
            this->Lines.Data.Data = 0i64;
          }
          this->Lines.Data.Policy.Capacity = 0i64;
        }
      }
    }
    this->Lines.Data.Size = 0i64;
  }
  else
  {
    memmove(&this->Lines.Data.Data[v7], &this->Lines.Data.Data[v7] + v6, 8 * (Size - v7 - v6));
    this->Lines.Data.Size -= v6;
  }
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

void __fastcall Scaleform::Render::Text::LineBuffer::GlyphInserter::ResetTo(
        Scaleform::Render::Text::LineBuffer::GlyphInserter *this,
        const Scaleform::Render::Text::LineBuffer::GlyphInserter *savedPos)
{
  __int64 GlyphIndex; // rcx
  unsigned int v5; // edx

  GlyphIndex = savedPos->GlyphIndex;
  v5 = this->GlyphIndex;
  if ( (unsigned int)GlyphIndex < v5 && this->GlyphsCount )
    Scaleform::Render::Text::LineBuffer::ReleasePartOfLine(
      &savedPos->pGlyphs[GlyphIndex],
      v5 - GlyphIndex,
      &savedPos->pNextFormatData[savedPos->FormatDataIndex]);
  this->pGlyphs = savedPos->pGlyphs;
  this->pNextFormatData = savedPos->pNextFormatData;
  this->GlyphIndex = savedPos->GlyphIndex;
  this->GlyphsCount = savedPos->GlyphsCount;
  this->FormatDataIndex = savedPos->FormatDataIndex;
}

void __fastcall Scaleform::ArrayData<Scaleform::Render::BundleEntry *,Scaleform::AllocatorLH<Scaleform::Render::BundleEntry *,2>,Scaleform::ArrayDefaultPolicy>::Resize(
        Scaleform::ArrayData<Scaleform::Render::BundleEntry *,Scaleform::AllocatorLH<Scaleform::Render::BundleEntry *,2>,Scaleform::ArrayDefaultPolicy> *this,
        unsigned __int64 newSize)
{
  if ( newSize >= this->Size )
  {
    if ( newSize > this->Policy.Capacity )
    {
      Scaleform::ArrayDataBase<Scaleform::Render::Text::LineBuffer::Line *,Scaleform::AllocatorLH<Scaleform::Render::Text::LineBuffer::Line *,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        (Scaleform::ArrayDataBase<Scaleform::Render::TextureFormat *,Scaleform::AllocatorLH<Scaleform::Render::TextureFormat *,2>,Scaleform::ArrayDefaultPolicy> *)this,
        this,
        newSize + (newSize >> 2));
      this->Size = newSize;
      return;
    }
  }
  else if ( newSize < this->Policy.Capacity >> 1 )
  {
    Scaleform::ArrayDataBase<Scaleform::Render::Text::LineBuffer::Line *,Scaleform::AllocatorLH<Scaleform::Render::Text::LineBuffer::Line *,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      (Scaleform::ArrayDataBase<Scaleform::Render::TextureFormat *,Scaleform::AllocatorLH<Scaleform::Render::TextureFormat *,2>,Scaleform::ArrayDefaultPolicy> *)this,
      this,
      newSize);
    this->Size = newSize;
    return;
  }
  this->Size = newSize;
}

void __fastcall Scaleform::Render::Text::LineBuffer::Scale(
        Scaleform::Render::Text::LineBuffer *this,
        float scaleFactor)
{
  int v4; // ebx
  char v5; // al
  Scaleform::Render::Text::LineBuffer::Line *v6; // rcx
  bool v7; // al
  int Leading; // edx
  float v9; // xmm1_4
  int Width; // edx
  float v11; // xmm2_4
  int Height; // edx
  float v13; // xmm0_4
  int v14; // edx
  float v15; // xmm0_4
  int v16; // edx
  int v17; // er8
  bool v18; // dl
  unsigned __int16 BaseLineOffset; // ax
  int v20; // eax
  __int64 v21; // r8
  char *v22; // r8
  __int64 GlyphsCount; // rax
  Scaleform::Render::Text::LineBuffer::FormatDataEntry *v24; // r9
  unsigned int v25; // er8
  __int64 v26; // rax
  Scaleform::Render::Text::LineBuffer::GlyphEntry *pGlyphs; // rcx
  int Advance; // eax
  int v29; // eax
  unsigned __int16 LenAndFontSize; // r8
  unsigned __int16 Flags; // dx
  float v32; // xmm1_4
  float v33; // xmm1_4
  int v34; // eax
  unsigned __int16 v35; // dx
  unsigned int Delta; // eax
  Scaleform::Render::Text::LineBuffer::GlyphIterator v37; // [rsp+28h] [rbp-A9h] BYREF

  v4 = 0;
  while ( 1 )
  {
    if ( !this || (unsigned int)v4 >= this->Lines.Data.Size || (v5 = 0, v4 < 0) )
      v5 = 1;
    if ( v5 )
      break;
    v6 = this->Lines.Data.Data[v4];
    v7 = (v6->MemSize & 0x80000000) != 0;
    if ( (v6->MemSize & 0x80000000) == 0 )
      Leading = v6->Data32.Leading;
    else
      Leading = v6->Data8.Leading;
    v9 = (float)Leading * scaleFactor;
    if ( (v6->MemSize & 0x80000000) == 0 )
      Width = v6->Data32.Width;
    else
      Width = v6->Data8.Width;
    v11 = (float)Width * scaleFactor;
    if ( (v6->MemSize & 0x80000000) == 0 )
      Height = v6->Data32.Height;
    else
      Height = v6->Data8.Height;
    v13 = (float)Height;
    v14 = (int)v9;
    v15 = v13 * scaleFactor;
    if ( (v6->MemSize & 0x80000000) == 0 )
      v6->Data32.Leading = v14;
    else
      v6->Data8.Leading = v14;
    v16 = (int)v15;
    v17 = (int)v11;
    if ( v7 )
    {
      v6->Data8.Width = v17;
      v6->Data8.Height = v16;
    }
    else
    {
      v6->Data32.Width = v17;
      v6->Data32.Height = v16;
    }
    v18 = (v6->MemSize & 0x80000000) != 0;
    if ( (v6->MemSize & 0x80000000) == 0 )
      BaseLineOffset = v6->Data32.BaseLineOffset;
    else
      BaseLineOffset = v6->Data8.BaseLineOffset;
    v20 = (int)(float)((float)BaseLineOffset * scaleFactor);
    if ( (v6->MemSize & 0x80000000) == 0 )
      v6->Data32.BaseLineOffset = v20;
    else
      v6->Data8.BaseLineOffset = v20;
    v21 = 42i64;
    if ( v18 )
      v21 = 30i64;
    v22 = (char *)v6 + v21;
    v6->Data32.OffsetX = (int)(float)((float)v6->Data32.OffsetX * scaleFactor);
    v6->Data32.OffsetY = (int)(float)((float)v6->Data32.OffsetY * scaleFactor);
    if ( v18 )
      GlyphsCount = v6->Data8.GlyphsCount;
    else
      GlyphsCount = v6->Data32.GlyphsCount;
    v24 = (Scaleform::Render::Text::LineBuffer::FormatDataEntry *)((unsigned __int64)&v22[8 * GlyphsCount + 7] & 0xFFFFFFFFFFFFFFF8ui64);
    if ( v18 )
      v25 = v6->Data8.GlyphsCount;
    else
      v25 = v6->Data32.GlyphsCount;
    memset(&v37.HighlighterIter, 0, 24);
    v26 = 42i64;
    if ( v18 )
      v26 = 30i64;
    v37.HighlighterIter.CurDesc.StartPos = -1i64;
    v37.HighlighterIter.CurDesc.Length = 0i64;
    v37.pGlyphs = (Scaleform::Render::Text::LineBuffer::GlyphEntry *)((char *)v6 + v26);
    v37.HighlighterIter.CurDesc.Offset = -1i64;
    memset(&v37.HighlighterIter.CurDesc.AdjStartPos, 0, 33);
    v37.pEndGlyphs = (Scaleform::Render::Text::LineBuffer::GlyphEntry *)((char *)v6 + 8 * v25 + v26);
    memset(&v37.ColorV, 0, 40);
    v37.pNextFormatData = v24;
    Scaleform::Render::Text::LineBuffer::GlyphIterator::UpdateDesc(&v37);
LABEL_39:
    pGlyphs = v37.pGlyphs;
    while ( pGlyphs && pGlyphs < v37.pEndGlyphs )
    {
      Advance = pGlyphs->Advance;
      if ( (pGlyphs->Flags & 0x40) != 0 )
        Advance = -Advance;
      v29 = (int)(float)((float)Advance * scaleFactor);
      if ( v29 < 0 )
      {
        LOWORD(v29) = abs32(v29);
        pGlyphs->Flags |= 0x40u;
      }
      else
      {
        pGlyphs->Flags &= ~0x40u;
      }
      LenAndFontSize = pGlyphs->LenAndFontSize;
      Flags = pGlyphs->Flags;
      pGlyphs->Advance = v29;
      v32 = (float)(LenAndFontSize & 0xFFF);
      if ( (Flags & 0x10) != 0 )
        v32 = v32 * 0.0625;
      v33 = v32 * scaleFactor;
      if ( v33 < 256.0 && (v34 = (int)(float)(v33 * 16.0), (v34 & 0xF) != 0) )
      {
        v35 = Flags | 0x10;
      }
      else
      {
        v35 = Flags & 0xFFEF;
        v34 = (int)v33;
      }
      pGlyphs->Flags = v35;
      pGlyphs->LenAndFontSize = LenAndFontSize ^ (LenAndFontSize ^ v34) & 0xFFF;
      pGlyphs = v37.pGlyphs;
      if ( !v37.pGlyphs )
        break;
      if ( v37.pGlyphs < v37.pEndGlyphs )
      {
        Delta = v37.Delta;
        if ( !v37.Delta )
        {
          Delta = v37.pGlyphs->LenAndFontSize >> 12;
          v37.Delta = Delta;
        }
        ++v37.pGlyphs;
        if ( (v37.pGlyphs->LenAndFontSize & 0xF000) != 0
          && Delta
          && !Scaleform::Render::Text::HighlighterPosIterator::IsFinished(&v37.HighlighterIter) )
        {
          Scaleform::Render::Text::HighlighterPosIterator::operator+=(&v37.HighlighterIter, v37.Delta);
          v37.Delta = 0;
        }
        Scaleform::Render::Text::LineBuffer::GlyphIterator::UpdateDesc(&v37);
        goto LABEL_39;
      }
    }
    if ( v37.pImage.pObject )
      Scaleform::RefCountNTSImpl::Release(v37.pImage.pObject);
    if ( v37.pFontHandle.pObject )
      Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v37.pFontHandle.pObject);
    if ( (unsigned int)v4 < this->Lines.Data.Size )
      ++v4;
  }
  this->Geom.Flags |= 1u;
}

void __fastcall Scaleform::Render::Text::LineBuffer::SetFirstVisibleLine(
        Scaleform::Render::Text::LineBuffer *this,
        unsigned int line)
{
  this->Geom.FirstVisibleLinePos = line;
  this->Geom.Flags |= 1u;
}

void __fastcall Scaleform::Render::Text::LineBuffer::SetHScrollOffset(
        Scaleform::Render::Text::LineBuffer *this,
        unsigned int offset)
{
  this->Geom.HScrollOffset = offset;
}

void __fastcall Scaleform::Render::Text::LineBuffer::GlyphIterator::UpdateDesc(
        Scaleform::Render::Text::LineBuffer::GlyphIterator *this)
{
  Scaleform::Render::Text::ImageDesc *pObject; // rcx
  Scaleform::Render::Text::LineBuffer::GlyphEntry *pGlyphs; // rax
  unsigned __int16 Flags; // cx
  Scaleform::RefCountVImpl **pNextFormatData; // rax
  Scaleform::RefCountVImpl *v6; // rdi
  Scaleform::RefCountVImpl *v7; // rcx
  Scaleform::Render::Text::LineBuffer::GlyphEntry *v8; // rdx
  Scaleform::Render::Text::LineBuffer::FormatDataEntry *v9; // rcx
  unsigned int ColorV; // eax
  Scaleform::Render::Text::ImageDesc *pImage; // rdi
  Scaleform::Render::Text::ImageDesc *v12; // rcx
  unsigned __int8 v13; // al
  unsigned int Raw; // eax
  Scaleform::Render::Text::LineBuffer::GlyphEntry *v15; // rax

  pObject = this->pImage.pObject;
  if ( pObject )
    Scaleform::RefCountNTSImpl::Release(pObject);
  this->pImage.pObject = 0i64;
  pGlyphs = this->pGlyphs;
  if ( this->pGlyphs && pGlyphs < this->pEndGlyphs )
  {
    Flags = pGlyphs->Flags;
    if ( (Flags & 0x4000) != 0 )
    {
      if ( (Flags & 0x2000) != 0 )
      {
        pNextFormatData = (Scaleform::RefCountVImpl **)this->pNextFormatData;
        v6 = *pNextFormatData;
        if ( *pNextFormatData )
          Scaleform::Render::RenderBuffer::AddRef(*pNextFormatData);
        v7 = (Scaleform::RefCountVImpl *)this->pFontHandle.pObject;
        if ( v7 )
          Scaleform::RefCountImpl::Release(v7);
        this->pFontHandle.pObject = (Scaleform::Render::Text::FontHandle *)v6;
        ++this->pNextFormatData;
      }
      v8 = this->pGlyphs;
      if ( (this->pGlyphs->Flags & 0x1000) != 0 )
      {
        v9 = this->pNextFormatData;
        ColorV = v9->ColorV;
        this->ColorV = v9->ColorV;
        this->OrigColor = ColorV;
        this->pNextFormatData = v9 + 1;
      }
      if ( (v8->Flags & 0x800) != 0 )
      {
        pImage = this->pNextFormatData->pImage;
        if ( pImage )
          ++pImage->RefCount;
        v12 = this->pImage.pObject;
        if ( v12 )
          Scaleform::RefCountNTSImpl::Release(v12);
        this->pImage.pObject = pImage;
        ++this->pNextFormatData;
      }
    }
    if ( (this->pGlyphs->Flags & 0x400) != 0 )
    {
      this->UnderlineColor = this->ColorV;
      this->UnderlineStyle = Underline_Single;
    }
    else
    {
      this->UnderlineStyle = Underline_None;
    }
    if ( Scaleform::Render::Text::HighlighterPosIterator::IsFinished(&this->HighlighterIter) )
    {
      v15 = this->pGlyphs;
      this->SelectionColor = 0;
      if ( (v15->Flags & 0x400) != 0 )
      {
        this->UnderlineColor = this->ColorV;
        this->UnderlineStyle = Underline_Single;
      }
    }
    else
    {
      this->ColorV = this->OrigColor;
      if ( (this->pGlyphs->LenAndFontSize & 0xF000) != 0 || (this->pGlyphs->Flags & 8) != 0 )
      {
        if ( (this->HighlighterIter.CurDesc.Info.Flags & 0x10) != 0 )
          this->ColorV = this->HighlighterIter.CurDesc.Info.TextColor.Raw;
        v13 = this->HighlighterIter.CurDesc.Info.Flags;
        if ( (v13 & 7) != 0 )
          this->UnderlineStyle = v13 & 7;
        if ( (this->HighlighterIter.CurDesc.Info.Flags & 0x20) != 0 )
          Raw = this->HighlighterIter.CurDesc.Info.UnderlineColor.Raw;
        else
          Raw = this->ColorV;
        this->UnderlineColor = Raw;
        if ( (this->HighlighterIter.CurDesc.Info.Flags & 8) != 0 )
          this->SelectionColor = this->HighlighterIter.CurDesc.Info.BackgroundColor.Raw;
        else
          this->SelectionColor = 0;
      }
    }
  }
}

