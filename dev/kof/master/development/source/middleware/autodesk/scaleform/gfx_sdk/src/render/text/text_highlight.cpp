#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_hash.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textlayout.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_core.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cxform.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_drawableimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_buffer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_scale9grid.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraystaticbuff.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_range.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_linebuffer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphparam.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_states.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_statebag.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_context.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_containers.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_image.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_constants.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_sgmlparser.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_vertex.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_gradients.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatapacked.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_pathdatapacker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_twips.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_highlight.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_filterdesc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_docview.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filters.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filterparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_styledtext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_fontmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_font.h"

struct Scaleform::Render::Text::IdComparator
{
	static long Compare(const Scaleform::Render::Text::HighlightDesc &, unsigned long);
	static long Less(const Scaleform::Render::Text::HighlightDesc &, unsigned long);
};
Scaleform::Render::Text::Highlighter::Highlighter(); // 0x14038B160
Scaleform::Render::Text::HighlightDesc * Scaleform::Render::Text::Highlighter::CreateNewHighlighter(Scaleform::Render::Text::HighlightDesc * pdesc); // 0x14038B3C0
Scaleform::Render::Text::HighlightDesc * Scaleform::Render::Text::Highlighter::CreateHighlighter(const Scaleform::Render::Text::HighlightDesc & desc); // 0x14038B300
Scaleform::Render::Text::HighlightDesc * Scaleform::Render::Text::Highlighter::GetHighlighterPtr(unsigned long id); // 0x14038B4D0
Scaleform::Render::Text::HighlighterPosIterator Scaleform::Render::Text::Highlighter::GetPosIterator(unsigned long long startPos, unsigned long long len); // 0x14038B550
Scaleform::Render::Text::HighlighterRangeIterator Scaleform::Render::Text::Highlighter::GetRangeIterator(unsigned long long startPos, unsigned long flags); // 0x14038B5A0
void Scaleform::Render::Text::Highlighter::UpdateGlyphIndices(const Scaleform::Render::Text::CompositionStringBase * pcs); // 0x14038BF90
bool Scaleform::Render::Text::Highlighter::HasUnderlineHighlight(); // 0x14038B600
void Scaleform::Render::Text::Highlighter::Add(Scaleform::Render::Text::HighlightDesc & merge); // 0x14038B210
void Scaleform::Render::Text::Highlighter::Remove(const Scaleform::Render::Text::HighlightDesc & cut); // 0x14038BB80
class Scaleform::Array<Scaleform::Render::Text::HighlightDesc,2,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Render::Text::HighlightDesc,Scaleform::AllocatorGH<Scaleform::Render::Text::HighlightDesc,2>,Scaleform::ArrayDefaultPolicy> >
{
	struct ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	Array<Scaleform::Render::Text::HighlightDesc,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::Array<Scaleform::Render::Text::HighlightDesc,2,Scaleform::ArrayDefaultPolicy> &);
	Array<Scaleform::Render::Text::HighlightDesc,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDefaultPolicy &);
	Array<Scaleform::Render::Text::HighlightDesc,2,Scaleform::ArrayDefaultPolicy>(long);
	Array<Scaleform::Render::Text::HighlightDesc,2,Scaleform::ArrayDefaultPolicy>();
	const Scaleform::Array<Scaleform::Render::Text::HighlightDesc,2,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::Array<Scaleform::Render::Text::HighlightDesc,2,Scaleform::ArrayDefaultPolicy> &);
	~Array<Scaleform::Render::Text::HighlightDesc,2,Scaleform::ArrayDefaultPolicy>();
};
void Scaleform::Render::Text::Highlighter::SetSelectColor(const Scaleform::Render::Color & color); // 0x14038BF60
bool Scaleform::Render::Text::Highlighter::IsAnyCharSelected(unsigned long long selectStart, unsigned long long selectEnd); // 0x14038BA30
void Scaleform::Render::Text::HighlighterRangeIterator::InitCurDesc(); // 0x14038B760
Scaleform::Render::Text::HighlightDesc Scaleform::Render::Text::HighlighterRangeIterator::operator*(); // 0x14038B180
void Scaleform::Render::Text::HighlighterRangeIterator::operator++(long __formal); // 0x14038B1D0
bool Scaleform::Render::Text::HighlighterRangeIterator::IsFinished(); // 0x14038BAA0
void Scaleform::Render::Text::HighlighterPosIterator::InitCurDesc(); // 0x14038B650
void Scaleform::Render::Text::HighlighterPosIterator::operator+=(unsigned long long p); // 0x14038B1F0
bool Scaleform::Render::Text::HighlighterPosIterator::IsFinished(); // 0x14038BA90void __fastcall Scaleform::Render::Text::Highlighter::Highlighter(Scaleform::Render::Text::Highlighter *this)
{
  this->Highlighters.Data.Data = 0i64;
  this->Highlighters.Data.Size = 0i64;
  this->Highlighters.Data.Policy.Capacity = 0i64;
  this->LastId = 0;
  this->CorrectionPos = 0i64;
  this->CorrectionLen = 0i64;
  *(_WORD *)&this->Valid = 0;
}

Scaleform::Render::Text::HighlightDesc *__fastcall Scaleform::Render::Text::HighlighterRangeIterator::operator*(
        Scaleform::Render::Text::HighlighterRangeIterator *this,
        Scaleform::Render::Text::HighlightDesc *result)
{
  *result = this->CurDesc;
  return result;
}

void __fastcall Scaleform::Render::Text::HighlighterRangeIterator::operator++(
        Scaleform::Render::Text::HighlighterRangeIterator *this,
        int __formal)
{
  if ( this->CurRangeIndex < this->pManager->Highlighters.Data.Size )
  {
    if ( this->CurDesc.GlyphNum )
      Scaleform::Render::Text::HighlighterRangeIterator::InitCurDesc(this);
  }
}

void __fastcall Scaleform::Render::Text::HighlighterPosIterator::operator+=(
        Scaleform::Render::Text::HighlighterPosIterator *this,
        unsigned __int64 p)
{
  unsigned __int64 CurAdjStartPos; // rax

  CurAdjStartPos = this->CurAdjStartPos;
  if ( CurAdjStartPos < this->NumGlyphs )
  {
    if ( p )
    {
      this->CurAdjStartPos = p + CurAdjStartPos;
      Scaleform::Render::Text::HighlighterPosIterator::InitCurDesc(this);
    }
  }
}

void __fastcall Scaleform::Render::Text::Highlighter::Add(
        Scaleform::Render::Text::Highlighter *this,
        Scaleform::Render::Text::HighlightDesc *merge)
{
  char v2; // di
  unsigned __int64 v3; // r9
  unsigned __int64 Size; // rbx
  __int64 v7; // r11
  Scaleform::Render::Text::HighlightDesc *Data; // rax
  unsigned __int64 StartPos; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rcx

  v2 = 0;
  v3 = merge->StartPos + merge->Length;
  Size = this->Highlighters.Data.Size;
  if ( !Size )
  {
LABEL_13:
    Scaleform::Render::Text::Highlighter::CreateNewHighlighter(this, merge);
    return;
  }
  v7 = 0i64;
  do
  {
    Data = this->Highlighters.Data.Data;
    StartPos = merge->StartPos;
    v10 = this->Highlighters.Data.Data[v7].StartPos;
    v11 = v10 + this->Highlighters.Data.Data[v7].Length;
    if ( v10 <= merge->StartPos )
    {
      if ( StartPos <= v11 )
      {
        if ( v3 > v11 )
        {
          v2 = 1;
          Data[v7].Length += v3 - v11;
          Data[v7].GlyphNum = Data[v7].Length;
          *(_WORD *)&this->Valid = 0;
        }
        goto LABEL_11;
      }
      if ( v10 <= StartPos )
        goto LABEL_11;
    }
    if ( v10 < v3 )
    {
      v12 = v10 - StartPos;
      v2 = 1;
      Data[v7].StartPos -= v12;
      v13 = Data[v7].StartPos;
      Data[v7].Length += v12;
      Data[v7].AdjStartPos = v13;
      Data[v7].GlyphNum = Data[v7].Length;
      *(_WORD *)&this->Valid = 0;
      if ( v11 <= v3 )
      {
        Data[v7].Length += v3 - v11;
        Data[v7].GlyphNum = Data[v7].Length;
      }
    }
LABEL_11:
    ++v7;
    --Size;
  }
  while ( Size );
  if ( !v2 )
    goto LABEL_13;
}

Scaleform::Render::Text::HighlightDesc *__fastcall Scaleform::Render::Text::Highlighter::CreateHighlighter(
        Scaleform::Render::Text::Highlighter *this,
        const Scaleform::Render::Text::HighlightDesc *desc)
{
  unsigned int Id; // esi
  __int64 Size; // r8
  unsigned __int64 v6; // rbx

  *(_WORD *)&this->Valid = 0;
  Id = desc->Id;
  if ( Scaleform::Render::Text::Highlighter::GetHighlighterPtr(this, Id) )
    return 0i64;
  Size = this->Highlighters.Data.Size;
  v6 = 0i64;
  while ( Size > 0 )
  {
    if ( (int)(this->Highlighters.Data.Data[(Size >> 1) + v6].Id - Id) >= 0 )
    {
      Size >>= 1;
    }
    else
    {
      v6 += (Size >> 1) + 1;
      Size += -1 - (Size >> 1);
    }
  }
  Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Render::Text::HighlightDesc,Scaleform::AllocatorLH<Scaleform::Render::Text::HighlightDesc,2>,Scaleform::ArrayDefaultPolicy>>::InsertAt(
    &this->Highlighters,
    v6,
    desc);
  return &this->Highlighters.Data.Data[v6];
}

Scaleform::Render::Text::HighlightDesc *__fastcall Scaleform::Render::Text::Highlighter::CreateNewHighlighter(
        Scaleform::Render::Text::Highlighter *this,
        Scaleform::Render::Text::HighlightDesc *pdesc)
{
  unsigned __int64 Size; // rsi
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // r8
  unsigned int LastId; // er10
  __int64 v7; // rax
  Scaleform::Render::Text::HighlightDesc *v8; // rcx
  __int64 v9; // rcx

  Size = this->Highlighters.Data.Size;
  *(_WORD *)&this->Valid = 0;
  v4 = 0i64;
  do
  {
    ++this->LastId;
    v5 = 0i64;
    LastId = this->LastId;
    v7 = Size;
    while ( v7 > 0 )
    {
      if ( (int)(this->Highlighters.Data.Data[(v7 >> 1) + v5].Id - LastId) >= 0 )
      {
        v7 >>= 1;
      }
      else
      {
        v5 += (v7 >> 1) + 1;
        v7 += -1 - (v7 >> 1);
      }
    }
    if ( v5 >= Size )
      break;
    v8 = &this->Highlighters.Data.Data[v5];
    if ( v8->Id != LastId )
      break;
  }
  while ( v8 );
  pdesc->Id = LastId;
  v9 = this->Highlighters.Data.Size;
  while ( v9 > 0 )
  {
    if ( (int)(this->Highlighters.Data.Data[(v9 >> 1) + v4].Id - LastId) >= 0 )
    {
      v9 >>= 1;
    }
    else
    {
      v4 += (v9 >> 1) + 1;
      v9 += -1 - (v9 >> 1);
    }
  }
  Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Render::Text::HighlightDesc,Scaleform::AllocatorLH<Scaleform::Render::Text::HighlightDesc,2>,Scaleform::ArrayDefaultPolicy>>::InsertAt(
    &this->Highlighters,
    v4,
    pdesc);
  return &this->Highlighters.Data.Data[v4];
}

Scaleform::Render::Text::HighlightDesc *__fastcall Scaleform::Render::Text::Highlighter::GetHighlighterPtr(
        Scaleform::Render::Text::Highlighter *this,
        unsigned int id)
{
  __int64 Size; // rax
  unsigned __int64 v3; // r9
  Scaleform::Render::Text::HighlightDesc *result; // rax

  Size = this->Highlighters.Data.Size;
  v3 = 0i64;
  while ( Size > 0 )
  {
    if ( (int)(this->Highlighters.Data.Data[(Size >> 1) + v3].Id - id) >= 0 )
    {
      Size >>= 1;
    }
    else
    {
      v3 += (Size >> 1) + 1;
      Size += -1 - (Size >> 1);
    }
  }
  if ( v3 >= this->Highlighters.Data.Size )
    return 0i64;
  result = &this->Highlighters.Data.Data[v3];
  if ( result->Id != id )
    return 0i64;
  return result;
}

Scaleform::Render::Text::HighlighterPosIterator *__fastcall Scaleform::Render::Text::Highlighter::GetPosIterator(
        Scaleform::Render::Text::Highlighter *this,
        Scaleform::Render::Text::HighlighterPosIterator *result,
        unsigned __int64 startPos,
        unsigned __int64 len)
{
  result->pManager = this;
  result->CurAdjStartPos = startPos;
  result->NumGlyphs = len;
  result->CurDesc.Length = 0i64;
  result->CurDesc.AdjStartPos = 0i64;
  result->CurDesc.GlyphNum = 0i64;
  *(_QWORD *)&result->CurDesc.Id = 0i64;
  result->CurDesc.StartPos = -1i64;
  result->CurDesc.Offset = -1i64;
  *(_QWORD *)&result->CurDesc.Info.TextColor.Channels.Blue = 0i64;
  result->CurDesc.Info.Flags = 0;
  Scaleform::Render::Text::HighlighterPosIterator::InitCurDesc(result);
  return result;
}

Scaleform::Render::Text::HighlighterRangeIterator *__fastcall Scaleform::Render::Text::Highlighter::GetRangeIterator(
        Scaleform::Render::Text::Highlighter *this,
        Scaleform::Render::Text::HighlighterRangeIterator *result,
        unsigned __int64 startPos,
        unsigned int flags)
{
  result->pManager = this;
  result->CurRangeIndex = 0i64;
  result->CurTextPos = startPos;
  result->CurDesc.StartPos = -1i64;
  result->CurDesc.Length = 0i64;
  result->CurDesc.Offset = -1i64;
  result->CurDesc.AdjStartPos = 0i64;
  result->CurDesc.GlyphNum = 0i64;
  *(_QWORD *)&result->CurDesc.Id = 0i64;
  *(_QWORD *)&result->CurDesc.Info.TextColor.Channels.Blue = 0i64;
  result->CurDesc.Info.Flags = 0;
  result->Flags = flags;
  Scaleform::Render::Text::HighlighterRangeIterator::InitCurDesc(result);
  return result;
}

bool __fastcall Scaleform::Render::Text::Highlighter::HasUnderlineHighlight(Scaleform::Render::Text::Highlighter *this)
{
  unsigned __int64 Size; // r8
  __int64 v2; // rdx
  unsigned __int8 *i; // rax

  if ( !this->HasUnderline )
  {
    Size = this->Highlighters.Data.Size;
    v2 = 0i64;
    this->HasUnderline = -1;
    if ( Size )
    {
      for ( i = &this->Highlighters.Data.Data->Info.Flags; (*i & 7) == 0; i += 64 )
      {
        if ( ++v2 >= Size )
          return this->HasUnderline == 1;
      }
      this->HasUnderline = 1;
    }
  }
  return this->HasUnderline == 1;
}

void __fastcall Scaleform::Render::Text::HighlighterPosIterator::InitCurDesc(
        Scaleform::Render::Text::HighlighterPosIterator *this)
{
  unsigned __int64 CurAdjStartPos; // rbx
  unsigned __int8 v3; // dl
  unsigned int v4; // ebp
  unsigned int v5; // esi
  unsigned int v6; // edi
  unsigned __int64 Size; // r11
  unsigned __int8 *p_Flags; // rax
  __int64 v9; // rcx
  unsigned __int64 v10; // r9
  unsigned __int8 v11; // cl

  CurAdjStartPos = this->CurAdjStartPos;
  if ( CurAdjStartPos >= this->NumGlyphs )
  {
    *(_QWORD *)&this->CurDesc.Info.TextColor.Channels.Blue = 0i64;
    this->CurDesc.Info.BackgroundColor.Raw = 0;
    this->CurDesc.Info.Flags = 0;
    this->CurDesc.GlyphNum = 0i64;
    this->CurDesc.AdjStartPos = CurAdjStartPos;
    this->CurDesc.Id = 0;
  }
  else
  {
    v3 = 0;
    v4 = 0;
    v5 = 0;
    v6 = 0;
    Size = this->pManager->Highlighters.Data.Size;
    if ( Size )
    {
      p_Flags = &this->pManager->Highlighters.Data.Data->Info.Flags;
      do
      {
        v9 = *((_QWORD *)p_Flags - 3);
        if ( v9 )
        {
          v10 = *((_QWORD *)p_Flags - 4);
          if ( CurAdjStartPos >= v10 && CurAdjStartPos < v10 + v9 )
          {
            v11 = *p_Flags;
            if ( (*p_Flags & 7) != 0 )
              v3 = v11 & 7 | v3 & 0xF8;
            if ( (v11 & 8) != 0 )
            {
              v4 = *((_DWORD *)p_Flags - 3);
              v3 |= 8u;
            }
            if ( (v11 & 0x10) != 0 )
            {
              v5 = *((_DWORD *)p_Flags - 2);
              v3 |= 0x10u;
            }
            if ( (v11 & 0x20) != 0 )
            {
              v6 = *((_DWORD *)p_Flags - 1);
              v3 |= 0x20u;
            }
          }
        }
        p_Flags += 64;
        --Size;
      }
      while ( Size );
    }
    this->CurDesc.StartPos = -1i64;
    this->CurDesc.Length = 0i64;
    this->CurDesc.Offset = -1i64;
    this->CurDesc.AdjStartPos = 0i64;
    this->CurDesc.Id = 0;
    this->CurDesc.Info.BackgroundColor.Raw = v4;
    this->CurDesc.Info.TextColor.Raw = v5;
    this->CurDesc.Info.UnderlineColor.Raw = v6;
    this->CurDesc.Info.Flags = v3;
    this->CurDesc.GlyphNum = 1i64;
    this->CurDesc.AdjStartPos = CurAdjStartPos;
    this->CurDesc.Id = 0;
  }
}

void __fastcall Scaleform::Render::Text::HighlighterRangeIterator::InitCurDesc(
        Scaleform::Render::Text::HighlighterRangeIterator *this)
{
  unsigned __int64 v1; // r15
  unsigned __int64 v2; // r10
  __int64 v3; // r11
  unsigned int v5; // ebx
  unsigned int v6; // ecx
  unsigned __int8 v7; // r9
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rdx
  unsigned int v10; // esi
  unsigned int v11; // ebp
  const Scaleform::Render::Text::Highlighter *pManager; // rax
  unsigned __int64 v13; // r8
  unsigned __int64 Size; // r13
  Scaleform::Render::Text::HighlightDesc *Data; // r12
  unsigned __int8 *p_Flags; // rax
  unsigned __int8 v17; // r10
  __int64 v18; // rbx
  unsigned __int64 CurTextPos; // rsi
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rbp
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rcx
  __int64 StartPos; // [rsp+0h] [rbp-58h]
  __int64 v25; // [rsp+8h] [rbp-50h]
  unsigned int v26; // [rsp+60h] [rbp+8h]
  unsigned int v27; // [rsp+68h] [rbp+10h]
  unsigned int v28; // [rsp+70h] [rbp+18h]
  unsigned int v29; // [rsp+78h] [rbp+20h]

  v1 = 0i64;
  v2 = -1i64;
  v3 = -1i64;
  StartPos = -1i64;
  v25 = -1i64;
  v5 = 0;
  v29 = 0;
  v6 = 0;
  v27 = 0;
  v28 = 0;
  v7 = 0;
  v8 = 0i64;
  v26 = 0;
  v9 = 0i64;
  v10 = 0;
  v11 = 0;
  do
  {
    pManager = this->pManager;
    v13 = -1i64;
    Size = this->pManager->Highlighters.Data.Size;
    if ( Size )
    {
      Data = pManager->Highlighters.Data.Data;
      p_Flags = &pManager->Highlighters.Data.Data->Info.Flags;
      while ( 1 )
      {
        v17 = *p_Flags;
        if ( (this->Flags & *p_Flags) != 0 )
          break;
        v11 = v26;
LABEL_33:
        ++Data;
        p_Flags += 64;
        if ( !--Size )
        {
          v6 = v28;
          v2 = StartPos;
          v3 = v25;
          v10 = v29;
          goto LABEL_35;
        }
      }
      v18 = *((_QWORD *)p_Flags - 3);
      CurTextPos = this->CurTextPos;
      if ( v18 )
      {
        v20 = *((_QWORD *)p_Flags - 4);
        if ( CurTextPos >= v20 )
        {
          v21 = v20 + v18;
          if ( CurTextPos < v20 + v18 )
          {
            if ( !v1 )
            {
              v8 = this->CurTextPos;
              v11 = *((_DWORD *)p_Flags - 3);
              v1 = *((_QWORD *)p_Flags - 6);
              StartPos = Data->StartPos;
              v25 = *((_QWORD *)p_Flags - 5);
              v5 = *((_DWORD *)p_Flags - 1);
              v9 = v20 - CurTextPos + *((_QWORD *)p_Flags - 3);
              v29 = *((_DWORD *)p_Flags - 4);
              v7 = *p_Flags;
              v26 = v11;
              v28 = *((_DWORD *)p_Flags - 2);
              v27 = v5;
              if ( v20 + *((_QWORD *)p_Flags - 3) <= v13 )
                goto LABEL_26;
              v9 = v13 - CurTextPos;
LABEL_25:
              v11 = v26;
LABEL_26:
              v23 = *((_QWORD *)p_Flags - 4);
              if ( v23 > CurTextPos )
              {
                if ( v13 < v23 )
                  v23 = v13;
                v13 = v23;
                if ( v1 && v9 + v8 > v23 )
                  v9 = v23 - v8;
              }
              goto LABEL_33;
            }
            if ( (this->Flags & *p_Flags) != this->Flags )
            {
              if ( (v17 & 7) != 0 )
                v7 = v17 & 7 | v7 & 0xF8;
              if ( (v17 & 8) != 0 )
              {
                v7 |= 8u;
                v26 = *((_DWORD *)p_Flags - 3);
              }
              if ( (v17 & 0x10) != 0 )
              {
                v7 |= 0x10u;
                v28 = *((_DWORD *)p_Flags - 2);
              }
              if ( (v17 & 0x20) != 0 )
              {
                v5 = *((_DWORD *)p_Flags - 1);
                v7 |= 0x20u;
                v27 = v5;
              }
              else
              {
                v5 = v27;
              }
              v22 = v8 + v9;
              if ( v21 < v22 )
                v22 = v21;
              v9 = v22 - v8;
              v13 = v9 + v8;
              goto LABEL_25;
            }
          }
        }
      }
      v5 = v27;
      goto LABEL_25;
    }
LABEL_35:
    this->CurDesc.StartPos = v2;
    this->CurDesc.Length = v1;
    this->CurDesc.Offset = v3;
    this->CurDesc.AdjStartPos = v8;
    this->CurDesc.GlyphNum = v9;
    this->CurDesc.Id = v10;
    this->CurDesc.Info.BackgroundColor.Raw = v11;
    this->CurDesc.Info.TextColor.Raw = v6;
    this->CurDesc.Info.UnderlineColor.Raw = v5;
    this->CurDesc.Info.Flags = v7;
    this->CurTextPos = v13;
  }
  while ( !v1 && v13 != -1i64 );
}

void __fastcall Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Render::Text::HighlightDesc,Scaleform::AllocatorLH<Scaleform::Render::Text::HighlightDesc,2>,Scaleform::ArrayDefaultPolicy>>::InsertAt(
        Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Render::Text::HighlightDesc,Scaleform::AllocatorLH<Scaleform::Render::Text::HighlightDesc,2>,Scaleform::ArrayDefaultPolicy> > *this,
        unsigned __int64 index,
        const Scaleform::Render::Text::HighlightDesc *val)
{
  unsigned __int64 Size; // r8
  Scaleform::Render::Text::HighlightDesc *v7; // rbx

  Scaleform::ArrayData<Scaleform::Render::Text::HighlightDesc,Scaleform::AllocatorLH<Scaleform::Render::Text::HighlightDesc,2>,Scaleform::ArrayDefaultPolicy>::Resize(
    &this->Data,
    this->Data.Size + 1);
  Size = this->Data.Size;
  if ( index < Size - 1 )
    memmove(&this->Data.Data[index + 1], &this->Data.Data[index], ((Size - index) << 6) - 64);
  v7 = &this->Data.Data[index];
  if ( v7 )
  {
    v7->StartPos = val->StartPos;
    v7->Length = val->Length;
    v7->Offset = val->Offset;
    v7->AdjStartPos = val->AdjStartPos;
    v7->GlyphNum = val->GlyphNum;
    v7->Id = val->Id;
    v7->Info.BackgroundColor.Raw = val->Info.BackgroundColor.Raw;
    v7->Info.TextColor.Raw = val->Info.TextColor.Raw;
    v7->Info.UnderlineColor.Raw = val->Info.UnderlineColor.Raw;
    v7->Info.Flags = val->Info.Flags;
  }
}

char __fastcall Scaleform::Render::Text::Highlighter::IsAnyCharSelected(
        Scaleform::Render::Text::Highlighter *this,
        unsigned __int64 selectStart,
        unsigned __int64 selectEnd)
{
  unsigned __int64 Size; // rbx
  __int64 v4; // r10
  Scaleform::Render::Text::HighlightDesc *i; // r9
  unsigned __int64 StartPos; // rax

  Size = this->Highlighters.Data.Size;
  v4 = 0i64;
  if ( !Size )
    return 0;
  for ( i = this->Highlighters.Data.Data; ; ++i )
  {
    StartPos = i->StartPos;
    if ( i->StartPos > selectStart )
      goto LABEL_6;
    if ( selectStart < StartPos + i->Length )
      return 1;
    if ( StartPos >= selectStart )
    {
LABEL_6:
      if ( StartPos < selectEnd )
        break;
    }
    if ( ++v4 >= Size )
      return 0;
  }
  return 1;
}

bool __fastcall Scaleform::Render::Text::HighlighterPosIterator::IsFinished(
        Scaleform::Render::Text::HighlighterPosIterator *this)
{
  return this->CurAdjStartPos >= this->NumGlyphs;
}

bool __fastcall Scaleform::Render::Text::HighlighterRangeIterator::IsFinished(
        Scaleform::Render::Text::HighlighterRangeIterator *this)
{
  return this->CurRangeIndex >= this->pManager->Highlighters.Data.Size || !this->CurDesc.GlyphNum;
}

void __fastcall Scaleform::ArrayData<Scaleform::Render::Text::HighlightDesc,Scaleform::AllocatorGH<Scaleform::Render::Text::HighlightDesc,2>,Scaleform::ArrayDefaultPolicy>::PushBack(
        Scaleform::ArrayData<Scaleform::Render::Text::HighlightDesc,Scaleform::AllocatorGH<Scaleform::Render::Text::HighlightDesc,2>,Scaleform::ArrayDefaultPolicy> *this,
        const Scaleform::Render::Text::HighlightDesc *val)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 v5; // r8
  Scaleform::Render::Text::HighlightDesc *Data; // rcx
  __int64 v7; // rcx

  v3 = this->Size + 1;
  if ( v3 >= this->Size )
  {
    if ( v3 <= this->Policy.Capacity )
      goto LABEL_7;
    v5 = v3 + (v3 >> 2);
  }
  else
  {
    if ( v3 >= this->Policy.Capacity >> 1 )
      goto LABEL_7;
    v5 = this->Size + 1;
  }
  Scaleform::ArrayDataBase<Scaleform::Render::Text::HighlightDesc,Scaleform::AllocatorGH<Scaleform::Render::Text::HighlightDesc,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
    this,
    this,
    v5);
LABEL_7:
  Data = this->Data;
  this->Size = v3;
  v7 = (__int64)&Data[v3 - 1];
  if ( v7 )
  {
    *(_QWORD *)v7 = val->StartPos;
    *(_QWORD *)(v7 + 8) = val->Length;
    *(_QWORD *)(v7 + 16) = val->Offset;
    *(_QWORD *)(v7 + 24) = val->AdjStartPos;
    *(_QWORD *)(v7 + 32) = val->GlyphNum;
    *(_DWORD *)(v7 + 40) = val->Id;
    *(_DWORD *)(v7 + 44) = val->Info.BackgroundColor.Raw;
    *(_DWORD *)(v7 + 48) = val->Info.TextColor.Raw;
    *(_DWORD *)(v7 + 52) = val->Info.UnderlineColor.Raw;
    *(_BYTE *)(v7 + 56) = val->Info.Flags;
  }
}

void __fastcall Scaleform::Render::Text::Highlighter::Remove(
        Scaleform::Render::Text::Highlighter *this,
        const Scaleform::Render::Text::HighlightDesc *cut)
{
  Scaleform::Render::Text::HighlightDesc *Data; // rdi
  unsigned __int64 v4; // rbp
  unsigned __int64 v5; // r14
  __int64 v7; // rsi
  unsigned __int64 StartPos; // rcx
  Scaleform::Render::Text::HighlightDesc *v9; // rax
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  unsigned __int64 Size; // r8
  unsigned __int64 v14; // rcx
  Scaleform::Render::Text::HighlightDesc *v15; // rsi
  Scaleform::ArrayData<Scaleform::Render::Text::HighlightDesc,Scaleform::AllocatorGH<Scaleform::Render::Text::HighlightDesc,2>,Scaleform::ArrayDefaultPolicy> v16; // [rsp+20h] [rbp-78h] BYREF
  Scaleform::Render::Text::HighlightDesc val; // [rsp+40h] [rbp-58h] BYREF

  Data = 0i64;
  v4 = cut->StartPos + cut->Length;
  v5 = 0i64;
  memset(&v16, 0, sizeof(v16));
  if ( this->Highlighters.Data.Size )
  {
    v7 = 0i64;
    while ( 1 )
    {
      StartPos = cut->StartPos;
      v9 = &this->Highlighters.Data.Data[v7];
      v10 = v9->StartPos;
      v11 = v9->StartPos + v9->Length;
      if ( v9->StartPos >= cut->StartPos )
        goto LABEL_9;
      if ( StartPos < v11 )
      {
        if ( v4 >= v11 )
        {
          v9->Length += StartPos - v11;
          goto LABEL_16;
        }
        v12 = StartPos - v10;
        val.StartPos = v4;
        v9->Length = v12;
        v9->GlyphNum = v12;
        val.Offset = v9->Offset;
        val.Id = v9->Id;
        val.Info = v9->Info;
        val.Length = v11 - v4;
        val.GlyphNum = v11 - v4;
        val.AdjStartPos = v4;
        Scaleform::ArrayData<Scaleform::Render::Text::HighlightDesc,Scaleform::AllocatorGH<Scaleform::Render::Text::HighlightDesc,2>,Scaleform::ArrayDefaultPolicy>::PushBack(
          &v16,
          &val);
LABEL_17:
        *(_WORD *)&this->Valid = 0;
        goto LABEL_18;
      }
      if ( v10 >= StartPos )
      {
LABEL_9:
        if ( v10 < v4 )
        {
          if ( v11 <= v4 )
          {
            Size = this->Highlighters.Data.Size;
            if ( Size == 1 )
            {
              Scaleform::ArrayData<Scaleform::Render::Text::HighlightDesc,Scaleform::AllocatorLH<Scaleform::Render::Text::HighlightDesc,2>,Scaleform::ArrayDefaultPolicy>::Resize(
                &this->Highlighters.Data,
                0i64);
            }
            else
            {
              memmove(&this->Highlighters.Data.Data[v7], &v9[1], ((Size - (_QWORD)Data) << 6) - 64);
              --this->Highlighters.Data.Size;
            }
            Data = (Scaleform::Render::Text::HighlightDesc *)((char *)Data - 1);
            --v7;
            goto LABEL_17;
          }
          v9->StartPos = v4;
          v14 = v9->StartPos;
          v9->Length -= v4 - v10;
          v9->AdjStartPos = v14;
LABEL_16:
          v9->GlyphNum = v9->Length;
          goto LABEL_17;
        }
      }
LABEL_18:
      Data = (Scaleform::Render::Text::HighlightDesc *)((char *)Data + 1);
      ++v7;
      if ( (unsigned __int64)Data >= this->Highlighters.Data.Size )
      {
        v5 = v16.Size;
        Data = v16.Data;
        break;
      }
    }
  }
  if ( v5 )
  {
    v15 = Data;
    do
    {
      Scaleform::Render::Text::Highlighter::CreateNewHighlighter(this, v15++);
      --v5;
    }
    while ( v5 );
  }
  if ( Data )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, Data);
}

void __fastcall Scaleform::ArrayDataBase<Scaleform::Render::Text::HighlightDesc,Scaleform::AllocatorGH<Scaleform::Render::Text::HighlightDesc,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        Scaleform::ArrayDataBase<Scaleform::Render::Text::HighlightDesc,Scaleform::AllocatorGH<Scaleform::Render::Text::HighlightDesc,2>,Scaleform::ArrayDefaultPolicy> *this,
        const void *pheapAddr,
        unsigned __int64 newCapacity)
{
  Scaleform::Render::Text::HighlightDesc *Data; // rdx
  unsigned __int64 v5; // rdi
  Scaleform::Render::Text::HighlightDesc *v6; // rax
  int v7; // [rsp+30h] [rbp+8h] BYREF

  if ( newCapacity != this->Policy.Capacity )
  {
    Data = this->Data;
    if ( newCapacity )
    {
      v5 = (newCapacity + 3) & 0xFFFFFFFFFFFFFFFCui64;
      if ( Data )
      {
        v6 = (Scaleform::Render::Text::HighlightDesc *)Scaleform::Memory::pGlobalHeap->Realloc(
                                                         Scaleform::Memory::pGlobalHeap,
                                                         Data,
                                                         v5 << 6);
        this->Policy.Capacity = v5;
        this->Data = v6;
        return;
      }
      v7 = 2;
      this->Data = (Scaleform::Render::Text::HighlightDesc *)Scaleform::Memory::pGlobalHeap->Alloc(
                                                               Scaleform::Memory::pGlobalHeap,
                                                               v5 << 6,
                                                               &v7);
    }
    else
    {
      v5 = 0i64;
      if ( Data )
      {
        ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
        this->Data = 0i64;
        this->Policy.Capacity = 0i64;
        return;
      }
    }
    this->Policy.Capacity = v5;
  }
}

void __fastcall Scaleform::ArrayDataBase<Scaleform::Render::Text::HighlightDesc,Scaleform::AllocatorLH<Scaleform::Render::Text::HighlightDesc,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        Scaleform::ArrayDataBase<Scaleform::Render::Text::HighlightDesc,Scaleform::AllocatorLH<Scaleform::Render::Text::HighlightDesc,2>,Scaleform::ArrayDefaultPolicy> *this,
        const void *pheapAddr,
        unsigned __int64 newCapacity)
{
  Scaleform::Render::Text::HighlightDesc *Data; // rdx
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // r8
  Scaleform::Render::Text::HighlightDesc *v8; // rax
  int v9; // [rsp+30h] [rbp+8h] BYREF

  if ( newCapacity != this->Policy.Capacity )
  {
    Data = this->Data;
    if ( newCapacity )
    {
      v6 = (newCapacity + 3) & 0xFFFFFFFFFFFFFFFCui64;
      v7 = v6 << 6;
      if ( Data )
      {
        v8 = (Scaleform::Render::Text::HighlightDesc *)Scaleform::Memory::pGlobalHeap->Realloc(
                                                         Scaleform::Memory::pGlobalHeap,
                                                         Data,
                                                         v7);
        this->Policy.Capacity = v6;
        this->Data = v8;
        return;
      }
      v9 = 2;
      this->Data = (Scaleform::Render::Text::HighlightDesc *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
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

void __fastcall Scaleform::ArrayData<Scaleform::Render::Text::HighlightDesc,Scaleform::AllocatorLH<Scaleform::Render::Text::HighlightDesc,2>,Scaleform::ArrayDefaultPolicy>::Resize(
        Scaleform::ArrayData<Scaleform::Render::Text::HighlightDesc,Scaleform::AllocatorLH<Scaleform::Render::Text::HighlightDesc,2>,Scaleform::ArrayDefaultPolicy> *this,
        unsigned __int64 newSize)
{
  unsigned __int64 Size; // rsi
  unsigned __int64 v5; // r8
  Scaleform::Render::Text::HighlightDesc *v6; // rcx
  unsigned __int64 v7; // rbx
  Scaleform::Render::Color *p_TextColor; // rax

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
    Scaleform::ArrayDataBase<Scaleform::Render::Text::HighlightDesc,Scaleform::AllocatorLH<Scaleform::Render::Text::HighlightDesc,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      this,
      this,
      v5);
  }
  this->Size = newSize;
  if ( newSize > Size )
  {
    v6 = &this->Data[Size];
    v7 = newSize - Size;
    if ( v7 )
    {
      p_TextColor = &v6->Info.TextColor;
      do
      {
        if ( v6 )
        {
          v6->StartPos = -1i64;
          *(_QWORD *)&p_TextColor[-10].Channels.Blue = 0i64;
          *(_QWORD *)&p_TextColor[-8].Channels.Blue = -1i64;
          *(_QWORD *)&p_TextColor[-6].Channels.Blue = 0i64;
          *(_QWORD *)&p_TextColor[-4].Channels.Blue = 0i64;
          *(_QWORD *)&p_TextColor[-2].Channels.Blue = 0i64;
          *(_QWORD *)&p_TextColor->Channels.Blue = 0i64;
          p_TextColor[2].Channels.Blue = 0;
        }
        ++v6;
        p_TextColor += 16;
        --v7;
      }
      while ( v7 );
    }
  }
}

void __fastcall Scaleform::Render::Text::Highlighter::SetSelectColor(
        Scaleform::Render::Text::Highlighter *this,
        const Scaleform::Render::Color *color)
{
  unsigned __int64 Size; // r10
  __int64 v3; // r9

  Size = this->Highlighters.Data.Size;
  if ( Size )
  {
    v3 = 0i64;
    do
    {
      this->Highlighters.Data.Data[v3++].Info.BackgroundColor = *color;
      --Size;
    }
    while ( Size );
  }
  *(_WORD *)&this->Valid = 0;
}

void __fastcall Scaleform::Render::Text::Highlighter::UpdateGlyphIndices(
        Scaleform::Render::Text::Highlighter *this,
        const Scaleform::Render::Text::CompositionStringBase *pcs)
{
  __int64 v2; // rbx
  unsigned __int64 Size; // r11
  Scaleform::Render::Text::HighlightDesc *Data; // rax
  unsigned __int64 StartPos; // rdx
  unsigned __int64 Length; // r8
  unsigned __int64 CorrectionLen; // r10
  unsigned __int64 CorrectionPos; // r9
  __int64 Offset; // rcx
  unsigned __int64 v12; // rcx

  v2 = 0i64;
  this->CorrectionLen = 0i64;
  this->CorrectionPos = 0i64;
  if ( pcs )
  {
    this->CorrectionPos = pcs->GetPosition((Scaleform::Render::Text::CompositionStringBase *)pcs);
    this->CorrectionLen = pcs->GetLength((Scaleform::Render::Text::CompositionStringBase *)pcs);
  }
  Size = this->Highlighters.Data.Size;
  for ( *(_WORD *)&this->Valid = 0; Size; --Size )
  {
    Data = this->Highlighters.Data.Data;
    StartPos = this->Highlighters.Data.Data[v2].StartPos;
    Length = this->Highlighters.Data.Data[v2].Length;
    Data[v2].AdjStartPos = StartPos;
    Data[v2].GlyphNum = Length;
    CorrectionLen = this->CorrectionLen;
    if ( CorrectionLen )
    {
      CorrectionPos = this->CorrectionPos;
      if ( !Length )
        goto LABEL_11;
      if ( StartPos > CorrectionPos )
        goto LABEL_12;
      if ( CorrectionPos < Length + StartPos )
      {
        Offset = Data[v2].Offset;
        if ( Offset >= 0 )
        {
          v12 = StartPos + Offset;
LABEL_13:
          Data[v2].AdjStartPos = v12;
          goto LABEL_14;
        }
        Data[v2].GlyphNum = CorrectionLen + Length;
      }
      else
      {
LABEL_11:
        if ( StartPos > CorrectionPos )
        {
LABEL_12:
          v12 = CorrectionLen + StartPos;
          goto LABEL_13;
        }
      }
    }
LABEL_14:
    ++v2;
  }
}

