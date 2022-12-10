#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_range.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stackmempool.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_sgmlparser.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_core.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_image.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_msgformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_locale.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_gradients.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_styledtext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatapacked.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_pathdatapacker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_fontmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_font.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_hash.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cxform.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"

Scaleform::Render::Text::Paragraph * Scaleform::Render::Text::Allocator::AllocateParagraph(); // 0x1402F9D50
wchar_t * Scaleform::Render::Text::Paragraph::TextBuffer::CreatePosition(Scaleform::Render::Text::Allocator * pallocator, unsigned long long pos, unsigned long long length); // 0x1402FB1A0
Scaleform::Render::Text::Paragraph::Paragraph(const Scaleform::Render::Text::Paragraph & o, Scaleform::Render::Text::Allocator * ptextAllocator); // 0x1402F95A0
void Scaleform::Render::Text::Paragraph::SetTextFormat(Scaleform::Render::Text::Allocator * pallocator, const Scaleform::Render::Text::TextFormat & fmt, unsigned long long startPos, unsigned long long endPos); // 0x140300840
Scaleform::Render::Text::TextFormat Scaleform::Render::Text::Paragraph::GetTextFormat(unsigned long long startPos, unsigned long long endPos); // 0x1402FDC50
Scaleform::Render::Text::TextFormat * Scaleform::Render::Text::Paragraph::GetTextFormatPtr(unsigned long long startPos); // 0x1402FDEF0
void Scaleform::Render::Text::Paragraph::SetFormat(Scaleform::Render::Text::Allocator * pallocator, const Scaleform::Render::Text::ParagraphFormat & fmt); // 0x1403000D0
Scaleform::Render::Text::Paragraph::FormatRunIterator Scaleform::Render::Text::Paragraph::GetIterator(); // 0x1402FD3A0
void Scaleform::Render::Text::Paragraph::SetTermNullFormat(); // 0x1403006F0
void Scaleform::Render::Text::Paragraph::InsertString(Scaleform::Render::Text::Allocator * pallocator, const wchar_t * pstr, unsigned long long pos, unsigned long long length, const Scaleform::Render::Text::TextFormat * pnewFmt); // 0x1402FE520
void Scaleform::Render::Text::Paragraph::AppendTermNull(Scaleform::Render::Text::Allocator * pallocator, const Scaleform::Render::Text::TextFormat * pdefTextFmt); // 0x1402FA870
void Scaleform::Render::Text::Paragraph::RemoveTermNull(); // 0x1402FFBA0
unsigned long long Scaleform::Render::Text::Paragraph::GetLength(); // 0x1402FD470
void Scaleform::Render::Text::Paragraph::Remove(unsigned long long startPos, unsigned long long endPos); // 0x1402FF2E0
void Scaleform::Render::Text::Paragraph::Copy(Scaleform::Render::Text::Allocator * pallocator, const Scaleform::Render::Text::Paragraph & psrcPara, unsigned long long startSrcIndex, unsigned long long startDestIndex, unsigned long long length); // 0x1402FAB10
Scaleform::Render::Text::Paragraph::FormatRunIterator::FormatRunIterator(const Scaleform::RangeDataArray<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>,Scaleform::ArrayLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> >,2,Scaleform::ArrayDefaultPolicy> > & fmts, const Scaleform::Render::Text::Paragraph::TextBuffer & textHandle, unsigned long long index); // 0x1402F9470
const Scaleform::Render::Text::Paragraph::StyledTextRun & Scaleform::Render::Text::Paragraph::FormatRunIterator::operator*(); // 0x1402F9B30
void Scaleform::Render::Text::Paragraph::FormatRunIterator::operator++(); // 0x1402F9C10
Scaleform::Render::Text::Paragraph::CharactersIterator::CharactersIterator(const Scaleform::Render::Text::Paragraph * pparagraph, unsigned long long index); // 0x1402F93B0
Scaleform::Render::Text::Paragraph::CharacterInfo & Scaleform::Render::Text::Paragraph::CharactersIterator::operator*(); // 0x1402F9A00
void Scaleform::Render::Text::Paragraph::CharactersIterator::operator+=(unsigned long long n); // 0x1402F9C70
const wchar_t * Scaleform::Render::Text::Paragraph::CharactersIterator::GetRemainingTextPtr(unsigned long long * plen); // 0x1402FD620
Scaleform::Render::Text::StyledText::StyledText(Scaleform::Render::Text::Allocator * pallocator); // 0x1402F9740
Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> > & Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> >::operator=(const Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> > & __that); // 0x1402F9990
Scaleform::Render::Text::Paragraph * Scaleform::Render::Text::StyledText::AppendNewParagraph(const Scaleform::Render::Text::ParagraphFormat * pdefParaFmt); // 0x1402F9FA0
Scaleform::Render::Text::Paragraph * Scaleform::Render::Text::StyledText::AppendCopyOfParagraph(const Scaleform::Render::Text::Paragraph & srcPara); // 0x1402F9E60
Scaleform::Render::Text::Paragraph * Scaleform::Render::Text::StyledText::InsertNewParagraph(Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,Scaleform::AllocatorLH<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,2>,Scaleform::ArrayDefaultPolicy> >::Iterator & iter, const Scaleform::Render::Text::ParagraphFormat * pdefParaFmt); // 0x1402FE310
Scaleform::Render::Text::Paragraph * Scaleform::Render::Text::StyledText::InsertCopyOfParagraph(Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,Scaleform::AllocatorLH<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,2>,Scaleform::ArrayDefaultPolicy> >::Iterator & iter, const Scaleform::Render::Text::Paragraph & srcPara); // 0x1402FE1C0
Scaleform::Render::Text::Paragraph * Scaleform::Render::Text::StyledText::GetLastParagraph(); // 0x1402FD450
unsigned long long Scaleform::Render::Text::StyledText::AppendString(const char * putf8String, unsigned long long stringSize, Scaleform::Render::Text::StyledText::NewLinePolicy newLinePolicy); // 0x1402FA120
unsigned long long Scaleform::Render::Text::StyledText::AppendString(const char * putf8String, unsigned long long stringSize, Scaleform::Render::Text::StyledText::NewLinePolicy newLinePolicy, const Scaleform::Render::Text::TextFormat * pdefTextFmt, const Scaleform::Render::Text::ParagraphFormat * pdefParaFmt); // 0x1402FA140
unsigned long long Scaleform::Render::Text::StyledText::AppendString(const wchar_t * pstr, unsigned long long length, Scaleform::Render::Text::StyledText::NewLinePolicy newLinePolicy, const Scaleform::Render::Text::TextFormat * pdefTextFmt, const Scaleform::Render::Text::ParagraphFormat * pdefParaFmt); // 0x1402FA4E0
void Scaleform::Render::Text::StyledText::SetText(const char * putf8String, unsigned long long stringSize); // 0x140300780
void Scaleform::Render::Text::StyledText::SetText(const wchar_t * pstr, unsigned long long length); // 0x1403007E0
Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,Scaleform::AllocatorLH<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,2>,Scaleform::ArrayDefaultPolicy> >::Iterator Scaleform::Render::Text::StyledText::GetParagraphByIndex(unsigned long long index, unsigned long long * pindexInParagraph); // 0x1402FD510
void Scaleform::Render::Text::StyledText::EnsureTermNull(); // 0x1402FB3A0
void Scaleform::Render::Text::StyledText::SetTextFormat(const Scaleform::Render::Text::TextFormat & fmt, unsigned long long startPos, unsigned long long endPos); // 0x140300C60
void Scaleform::Render::Text::StyledText::SetParagraphFormat(const Scaleform::Render::Text::ParagraphFormat & fmt, unsigned long long startPos, unsigned long long endPos); // 0x140300190
void Scaleform::Render::Text::StyledText::GetTextAndParagraphFormat(Scaleform::Render::Text::TextFormat * pdestTextFmt, Scaleform::Render::Text::ParagraphFormat * pdestParaFmt, unsigned long long startPos, unsigned long long endPos); // 0x1402FD920
bool Scaleform::Render::Text::StyledText::GetTextAndParagraphFormat(const Scaleform::Render::Text::TextFormat * * ppdestTextFmt, const Scaleform::Render::Text::ParagraphFormat * * ppdestParaFmt, unsigned long long pos); // 0x1402FDBA0
void Scaleform::Render::Text::StyledText::SetDefaultTextFormat(const Scaleform::Render::Text::TextFormat & defaultTextFmt); // 0x1402FFF40
void Scaleform::Render::Text::StyledText::SetDefaultParagraphFormat(const Scaleform::Render::Text::ParagraphFormat & defaultParagraphFmt); // 0x1402FFE60
void Scaleform::Render::Text::StyledText::SetDefaultTextFormat(const Scaleform::Render::Text::TextFormat * pdefaultTextFmt); // 0x140300050
void Scaleform::Render::Text::StyledText::SetDefaultParagraphFormat(const Scaleform::Render::Text::ParagraphFormat * pdefaultParagraphFmt); // 0x1402FFED0
Scaleform::String Scaleform::Render::Text::StyledText::GetHtml(); // 0x1402FB6E0
Scaleform::StringBuffer & Scaleform::Render::Text::StyledText::GetHtml(Scaleform::StringBuffer * strBuf); // 0x1402FB740
unsigned long long Scaleform::Render::Text::StyledText::GetLength(); // 0x1402FD4A0
Scaleform::String Scaleform::Render::Text::StyledText::GetText(); // 0x1402FD660
Scaleform::String & Scaleform::Render::Text::StyledText::GetText(Scaleform::String * retStr); // 0x1402FD6A0
void Scaleform::Render::Text::StyledText::GetText(Scaleform::WStringBuffer * pBuffer); // 0x1402FD740
void Scaleform::Render::Text::StyledText::GetText(Scaleform::WStringBuffer * pBuffer, unsigned long long startPos, unsigned long long endPos); // 0x1402FD810
Scaleform::Render::Text::StyledText * Scaleform::Render::Text::StyledText::CopyStyledText(unsigned long long startPos, unsigned long long endPos); // 0x1402FAE40
void Scaleform::Render::Text::StyledText::CopyStyledText(Scaleform::Render::Text::StyledText * pdest, unsigned long long startPos, unsigned long long endPos); // 0x1402FAEC0
unsigned long long Scaleform::Render::Text::StyledText::InsertString(const wchar_t * pstr, unsigned long long pos, unsigned long long length, Scaleform::Render::Text::StyledText::NewLinePolicy newLinePolicy); // 0x1402FE650
unsigned long long Scaleform::Render::Text::StyledText::InsertString(const wchar_t * pstr, unsigned long long pos, unsigned long long length, Scaleform::Render::Text::StyledText::NewLinePolicy newLinePolicy, const Scaleform::Render::Text::TextFormat * pdefTextFmt, const Scaleform::Render::Text::ParagraphFormat * pdefParaFmt); // 0x1402FE680
unsigned long long Scaleform::Render::Text::StyledText::InsertStyledText(const Scaleform::Render::Text::StyledText & text, unsigned long long pos, unsigned long long length); // 0x1402FED50
void Scaleform::Render::Text::StyledText::Remove(unsigned long long startPos, unsigned long long length); // 0x1402FF370
void Scaleform::Render::Text::StyledText::OnDocumentChanged(); // 0x14002E7C0
void Scaleform::Render::Text::StyledText::Clear(); // 0x1402FA9E0
void Scaleform::Render::Text::Style::Reset(); // 0x1402FFC30void __fastcall Scaleform::MsgFormat::FormatD1<unsigned long>(Scaleform::MsgFormat *this, const unsigned int *v)
{
  Scaleform::StackMemPool<512,8,Scaleform::MemPoolImmediateFree> *p_MemPool; // rdi
  char *BuffPtr; // r9
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rax
  Scaleform::MemoryHeap *pHeap; // rcx
  Scaleform::Formatter *v9; // rax

  if ( Scaleform::MsgFormat::NextFormatter(this) )
  {
    p_MemPool = &this->MemPool;
    do
    {
      if ( this->MemPool.BuffSize < 0x60 )
      {
        pHeap = p_MemPool->pHeap;
        if ( !p_MemPool->pHeap )
          pHeap = Scaleform::Memory::pGlobalHeap;
        BuffPtr = (char *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64, __int64))pHeap->Alloc)(
                            pHeap,
                            96i64,
                            8i64);
      }
      else
      {
        BuffPtr = this->MemPool.BuffPtr;
        this->MemPool.BuffPtr = (char *)(((unsigned __int64)(BuffPtr + 95) & 0xFFFFFFFFFFFFFFF8ui64) + 8);
        v6 = ((unsigned __int64)(BuffPtr + 95) & 0xFFFFFFFFFFFFFFF8ui64) - (_QWORD)p_MemPool;
        v7 = 512 - v6;
        if ( v6 >= 0x200 )
          v7 = 0i64;
        this->MemPool.BuffSize = v7;
      }
      if ( BuffPtr )
        Scaleform::LongFormatter::LongFormatter((Scaleform::LongFormatter *)BuffPtr, this, *v);
      else
        v9 = 0i64;
      Scaleform::MsgFormat::Bind(this, v9, 1);
    }
    while ( Scaleform::MsgFormat::NextFormatter(this) );
  }
  ++this->FirstArgNum;
}

void __fastcall Scaleform::MsgFormat::FormatD1<Scaleform::StringLH>(
        Scaleform::MsgFormat *this,
        const Scaleform::StringLH *v)
{
  Scaleform::StackMemPool<512,8,Scaleform::MemPoolImmediateFree> *p_MemPool; // rdi
  char *BuffPtr; // r9
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rax
  Scaleform::MemoryHeap *pHeap; // rcx
  Scaleform::Formatter *v9; // rax

  if ( Scaleform::MsgFormat::NextFormatter(this) )
  {
    p_MemPool = &this->MemPool;
    do
    {
      if ( this->MemPool.BuffSize < 0x28 )
      {
        pHeap = p_MemPool->pHeap;
        if ( !p_MemPool->pHeap )
          pHeap = Scaleform::Memory::pGlobalHeap;
        BuffPtr = (char *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64, __int64))pHeap->Alloc)(
                            pHeap,
                            40i64,
                            8i64);
      }
      else
      {
        BuffPtr = this->MemPool.BuffPtr;
        this->MemPool.BuffPtr = (char *)(((unsigned __int64)(BuffPtr + 39) & 0xFFFFFFFFFFFFFFF8ui64) + 8);
        v6 = ((unsigned __int64)(BuffPtr + 39) & 0xFFFFFFFFFFFFFFF8ui64) - (_QWORD)p_MemPool;
        v7 = 512 - v6;
        if ( v6 >= 0x200 )
          v7 = 0i64;
        this->MemPool.BuffSize = v7;
      }
      if ( BuffPtr )
        Scaleform::StrFormatter::StrFormatter((Scaleform::StrFormatter *)BuffPtr, this, v);
      else
        v9 = 0i64;
      Scaleform::MsgFormat::Bind(this, v9, 1);
    }
    while ( Scaleform::MsgFormat::NextFormatter(this) );
  }
  ++this->FirstArgNum;
}

void __fastcall Scaleform::Render::Text::Paragraph::CharactersIterator::CharactersIterator(
        Scaleform::Render::Text::Paragraph::CharactersIterator *this,
        const Scaleform::Render::Text::Paragraph *pparagraph,
        unsigned __int64 index)
{
  __int64 v6; // rcx
  const Scaleform::RangeDataArray<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>,Scaleform::ArrayLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> >,2,Scaleform::ArrayDefaultPolicy> > *pArray; // rax
  signed __int64 v8; // r8
  __int64 v9; // rcx

  this->PlaceHolder.pFormat.pObject = 0i64;
  this->PlaceHolder.Index = 0i64;
  this->PlaceHolder.Character = 0;
  this->pFormatInfo = &pparagraph->FormatInfo;
  Scaleform::RangeDataArray<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>,Scaleform::ArrayLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>>,2,Scaleform::ArrayDefaultPolicy>>::GetIteratorByNearestIndex(
    &pparagraph->FormatInfo,
    &this->FormatIterator,
    index);
  this->pText = (const Scaleform::Render::Text::Paragraph::TextBuffer *)pparagraph;
  this->CurTextIndex = index;
  v6 = this->FormatIterator.Index;
  if ( v6 >= 0 )
  {
    pArray = this->FormatIterator.pArray;
    if ( v6 < pArray->Ranges.Data.Size )
    {
      v8 = pArray->Ranges.Data.Data[v6].Index;
      if ( ((__int64)index < v8 || (__int64)index > (signed __int64)(pArray->Ranges.Data.Data[v6].Length + v8 - 1))
        && (int)index > this->FormatIterator.pArray->Ranges.Data.Data[this->FormatIterator.Index].Index )
      {
        v9 = this->FormatIterator.Index;
        if ( v9 < (signed __int64)this->FormatIterator.pArray->Ranges.Data.Size )
          this->FormatIterator.Index = v9 + 1;
      }
    }
  }
}

void __fastcall Scaleform::Render::Text::Paragraph::FormatRunIterator::FormatRunIterator(
        Scaleform::Render::Text::Paragraph::FormatRunIterator *this,
        const Scaleform::RangeDataArray<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>,Scaleform::ArrayLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> >,2,Scaleform::ArrayDefaultPolicy> > *fmts,
        const Scaleform::Render::Text::Paragraph::TextBuffer *textHandle,
        unsigned __int64 index)
{
  __int64 v7; // rcx
  const Scaleform::RangeDataArray<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>,Scaleform::ArrayLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> >,2,Scaleform::ArrayDefaultPolicy> > *pArray; // rax
  signed __int64 v9; // r8
  __int64 v10; // r8
  __int64 v11; // rcx

  this->PlaceHolder.pText = 0i64;
  this->PlaceHolder.Index = 0i64;
  this->PlaceHolder.Length = 0i64;
  this->PlaceHolder.pFormat.pObject = 0i64;
  this->pFormatInfo = fmts;
  Scaleform::RangeDataArray<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>,Scaleform::ArrayLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>>,2,Scaleform::ArrayDefaultPolicy>>::GetIteratorByNearestIndex(
    (Scaleform::RangeDataArray<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>,Scaleform::ArrayLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> >,2,Scaleform::ArrayDefaultPolicy> > *)fmts,
    &this->FormatIterator,
    index);
  this->pText = textHandle;
  this->CurTextIndex = 0i64;
  v7 = this->FormatIterator.Index;
  if ( v7 >= 0 )
  {
    pArray = this->FormatIterator.pArray;
    if ( v7 < pArray->Ranges.Data.Size )
    {
      v9 = pArray->Ranges.Data.Data[v7].Index;
      if ( (__int64)index < v9 || (__int64)index > (signed __int64)(pArray->Ranges.Data.Data[v7].Length + v9 - 1) )
      {
        if ( (signed __int64)index > this->FormatIterator.pArray->Ranges.Data.Data[this->FormatIterator.Index].Index )
        {
          v10 = this->FormatIterator.pArray->Ranges.Data.Data[this->FormatIterator.Index].Index;
          this->CurTextIndex = v10;
          this->CurTextIndex = v10 + this->FormatIterator.pArray->Ranges.Data.Data[this->FormatIterator.Index].Length;
          v11 = this->FormatIterator.Index;
          if ( v11 < (signed __int64)this->FormatIterator.pArray->Ranges.Data.Size )
            this->FormatIterator.Index = v11 + 1;
        }
      }
      else
      {
        this->CurTextIndex = this->FormatIterator.pArray->Ranges.Data.Data[this->FormatIterator.Index].Index;
      }
    }
  }
}

void __fastcall Scaleform::Render::Text::Paragraph::Paragraph(
        Scaleform::Render::Text::Paragraph *this,
        const Scaleform::Render::Text::Paragraph *o,
        Scaleform::Render::Text::Allocator *ptextAllocator)
{
  wchar_t *v6; // rax
  unsigned __int64 Size; // r9
  unsigned __int64 v8; // rsi
  unsigned int NewParagraphId; // ecx
  Scaleform::Render::Text::ParagraphFormat *ParagraphFormat; // rax
  Scaleform::Render::Text::ParagraphFormat *pObject; // rbx
  Scaleform::Render::Text::ParagraphFormat *v12; // rdi
  bool v13; // zf
  __int64 v14; // r14
  Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> > *Data; // rbp
  Scaleform::Render::Text::TextFormat *TextFormat; // rax
  Scaleform::Render::Text::TextFormat *v17; // rbx
  Scaleform::Render::Text::TextFormat *v18; // rdi

  v6 = (wchar_t *)ptextAllocator->pHeap->Alloc(ptextAllocator->pHeap, 2 * o->Text.Size, 0i64);
  this->Text.pText = v6;
  Size = o->Text.Size;
  this->Text.Size = Size;
  this->Text.Allocated = Size;
  memmove(v6, o->Text.pText, 2 * o->Text.Size);
  v8 = 0i64;
  this->pFormat.pObject = 0i64;
  this->FormatInfo.Ranges.Data.Data = 0i64;
  this->FormatInfo.Ranges.Data.Size = 0i64;
  this->FormatInfo.Ranges.Data.Policy.Capacity = 0i64;
  Scaleform::ArrayData<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>>,Scaleform::AllocatorLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>>,2>,Scaleform::ArrayDefaultPolicy>::Append(
    &this->FormatInfo.Ranges.Data,
    o->FormatInfo.Ranges.Data.Data,
    o->FormatInfo.Ranges.Data.Size);
  this->StartIndex = o->StartIndex;
  this->ModCounter = 0;
  NewParagraphId = ptextAllocator->NewParagraphId;
  ptextAllocator->NewParagraphId = NewParagraphId + 1;
  this->UniqueId = NewParagraphId;
  ParagraphFormat = Scaleform::Render::Text::Allocator::AllocateParagraphFormat(ptextAllocator, o->pFormat.pObject);
  pObject = this->pFormat.pObject;
  v12 = ParagraphFormat;
  if ( pObject )
  {
    v13 = pObject->RefCount-- == 1;
    if ( v13 )
    {
      Scaleform::Render::Text::ParagraphFormat::~ParagraphFormat(pObject);
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, pObject);
    }
  }
  this->pFormat.pObject = v12;
  v14 = 0i64;
  while ( v14 >= 0 && v8 < this->FormatInfo.Ranges.Data.Size )
  {
    Data = this->FormatInfo.Ranges.Data.Data;
    TextFormat = Scaleform::Render::Text::Allocator::AllocateTextFormat(ptextAllocator, Data[v14].Data.pObject);
    v17 = TextFormat;
    if ( TextFormat )
      ++TextFormat->RefCount;
    v18 = Data[v14].Data.pObject;
    if ( v18 )
    {
      v13 = v18->RefCount-- == 1;
      if ( v13 )
      {
        Scaleform::Render::Text::TextFormat::~TextFormat(v18);
        Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v18);
      }
    }
    Data[v14].Data.pObject = v17;
    if ( v17 )
    {
      v13 = v17->RefCount-- == 1;
      if ( v13 )
      {
        Scaleform::Render::Text::TextFormat::~TextFormat(v17);
        Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v17);
      }
    }
    if ( (signed __int64)v8 < (signed __int64)this->FormatInfo.Ranges.Data.Size )
    {
      ++v8;
      ++v14;
    }
  }
}

void __fastcall Scaleform::Render::Text::StyledText::StyledText(
        Scaleform::Render::Text::StyledText *this,
        Scaleform::Render::Text::Allocator *pallocator)
{
  Scaleform::Render::Text::ParagraphFormat *v4; // rax
  Scaleform::Render::Text::ParagraphFormat *pObject; // rsi
  Scaleform::Render::Text::ParagraphFormat *v6; // rbp
  bool v7; // zf
  Scaleform::Render::Text::TextFormat *TextFormat; // rax
  Scaleform::Render::Text::TextFormat *v9; // rdi
  Scaleform::Render::Text::TextFormat *v10; // rsi
  Scaleform::Render::Text::ParagraphFormat srcfmt; // [rsp+20h] [rbp-38h] BYREF

  this->RefCount = 1;
  this->__vftable = (Scaleform::Render::Text::StyledText_vtbl *)&Scaleform::Render::Text::StyledText::`vftable';
  if ( pallocator )
    ++pallocator->RefCount;
  this->pTextAllocator.pObject = pallocator;
  this->Paragraphs.Data.Data = 0i64;
  this->Paragraphs.Data.Size = 0i64;
  this->Paragraphs.Data.Policy.Capacity = 0i64;
  this->pDefaultParagraphFormat.pObject = 0i64;
  this->pDefaultTextFormat.pObject = 0i64;
  this->RTFlags = 0;
  srcfmt.pAllocator = 0i64;
  srcfmt.RefCount = 1;
  memset(&srcfmt.pTabStops, 0, 20);
  v4 = Scaleform::Render::Text::Allocator::AllocateParagraphFormat(pallocator, &srcfmt);
  pObject = this->pDefaultParagraphFormat.pObject;
  v6 = v4;
  if ( pObject )
  {
    v7 = pObject->RefCount-- == 1;
    if ( v7 )
    {
      Scaleform::Render::Text::ParagraphFormat::~ParagraphFormat(pObject);
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, pObject);
    }
  }
  this->pDefaultParagraphFormat.pObject = v6;
  Scaleform::Render::Text::ParagraphFormat::~ParagraphFormat(&srcfmt);
  TextFormat = Scaleform::Render::Text::Allocator::AllocateTextFormat(pallocator, &pallocator->EntryTextFormat);
  v9 = this->pDefaultTextFormat.pObject;
  v10 = TextFormat;
  if ( v9 )
  {
    v7 = v9->RefCount-- == 1;
    if ( v7 )
    {
      Scaleform::Render::Text::TextFormat::~TextFormat(v9);
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v9);
    }
  }
  this->pDefaultTextFormat.pObject = v10;
}

void __fastcall Scaleform::ArrayDataBase<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>>,Scaleform::AllocatorLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>>,2>,Scaleform::ArrayDefaultPolicy>::~ArrayDataBase<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>>,Scaleform::AllocatorLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>>,2>,Scaleform::ArrayDefaultPolicy>(
        Scaleform::ArrayDataBase<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> >,Scaleform::AllocatorLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> >,2>,Scaleform::ArrayDefaultPolicy> *this)
{
  unsigned __int64 Size; // rsi
  Scaleform::Ptr<Scaleform::Render::Text::TextFormat> *p_Data; // rdi
  Scaleform::Render::Text::TextFormat *pObject; // rbx

  Size = this->Size;
  if ( Size )
  {
    p_Data = &this->Data[Size - 1].Data;
    do
    {
      pObject = p_Data->pObject;
      if ( p_Data->pObject )
      {
        if ( pObject->RefCount-- == 1 )
        {
          Scaleform::Render::Text::TextFormat::~TextFormat(pObject);
          Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, pObject);
        }
      }
      p_Data -= 3;
      --Size;
    }
    while ( Size );
  }
  Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->Data);
}

void __fastcall Scaleform::Render::Text::StyledText::~StyledText(Scaleform::Render::Text::StyledText *this)
{
  Scaleform::Render::Text::TextFormat *pObject; // rdi
  bool v3; // zf
  Scaleform::Render::Text::ParagraphFormat *v4; // rdi
  Scaleform::Render::Text::Allocator *v5; // rcx

  this->__vftable = (Scaleform::Render::Text::StyledText_vtbl *)&Scaleform::Render::Text::StyledText::`vftable';
  Scaleform::Render::Text::StyledText::Clear(this);
  pObject = this->pDefaultTextFormat.pObject;
  if ( pObject )
  {
    v3 = pObject->RefCount-- == 1;
    if ( v3 )
    {
      Scaleform::Render::Text::TextFormat::~TextFormat(pObject);
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, pObject);
    }
  }
  v4 = this->pDefaultParagraphFormat.pObject;
  if ( v4 )
  {
    v3 = v4->RefCount-- == 1;
    if ( v3 )
    {
      Scaleform::Render::Text::ParagraphFormat::~ParagraphFormat(v4);
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v4);
    }
  }
  Scaleform::ConstructorMov<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper>::DestructArray(
    this->Paragraphs.Data.Data,
    this->Paragraphs.Data.Size);
  Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->Paragraphs.Data.Data);
  v5 = this->pTextAllocator.pObject;
  if ( v5 )
    Scaleform::RefCountNTSImpl::Release(v5);
  Scaleform::RefCountNTSImplCore::~RefCountNTSImplCore(this);
}

Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> > *__fastcall Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>>::operator=(
        Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> > *this,
        const Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> > *__that)
{
  Scaleform::Render::Text::TextFormat *pObject; // rax
  Scaleform::Render::Text::TextFormat *v5; // rbx

  this->Scaleform::Range = __that->Scaleform::Range;
  pObject = __that->Data.pObject;
  if ( pObject )
    ++pObject->RefCount;
  v5 = this->Data.pObject;
  if ( v5 )
  {
    if ( v5->RefCount-- == 1 )
    {
      Scaleform::Render::Text::TextFormat::~TextFormat(v5);
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v5);
    }
  }
  this->Data.pObject = __that->Data.pObject;
  return this;
}

Scaleform::Render::Text::Paragraph::CharactersIterator *__fastcall Scaleform::Render::Text::Paragraph::CharactersIterator::operator*(
        Scaleform::Render::Text::Paragraph::CharactersIterator *this)
{
  const Scaleform::Render::Text::Paragraph::TextBuffer *pText; // rax
  unsigned __int64 v3; // r8
  __int64 Index; // rcx
  const Scaleform::RangeDataArray<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>,Scaleform::ArrayLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> >,2,Scaleform::ArrayDefaultPolicy> > *pArray; // rax
  __int64 v6; // rsi
  Scaleform::Render::Text::TextFormat *v7; // rdi
  bool v8; // zf
  __int64 v9; // rax
  Scaleform::Render::Text::TextFormat *v10; // rdi
  Scaleform::Render::Text::Paragraph::CharactersIterator *result; // rax
  unsigned __int64 CurTextIndex; // rax
  Scaleform::Render::Text::TextFormat *pObject; // rsi

  pText = this->pText;
  if ( !pText || (v3 = this->CurTextIndex, v3 >= pText->Size) )
  {
    CurTextIndex = this->CurTextIndex;
    this->PlaceHolder.Character = 0;
    this->PlaceHolder.Index = CurTextIndex;
    pObject = this->PlaceHolder.pFormat.pObject;
    if ( this->PlaceHolder.pFormat.pObject )
    {
      v8 = pObject->RefCount-- == 1;
      if ( v8 )
      {
        Scaleform::Render::Text::TextFormat::~TextFormat(pObject);
        Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, pObject);
      }
    }
    goto LABEL_19;
  }
  this->PlaceHolder.Character = pText->pText[v3];
  this->PlaceHolder.Index = v3;
  Index = this->FormatIterator.Index;
  if ( Index < 0
    || (pArray = this->FormatIterator.pArray, Index >= pArray->Ranges.Data.Size)
    || (v6 = (__int64)&pArray->Ranges.Data.Data[Index], v3 < *(_QWORD *)v6) )
  {
    v7 = this->PlaceHolder.pFormat.pObject;
    if ( this->PlaceHolder.pFormat.pObject )
    {
      v8 = v7->RefCount-- == 1;
      if ( v8 )
      {
        Scaleform::Render::Text::TextFormat::~TextFormat(v7);
        Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v7);
      }
    }
LABEL_19:
    result = this;
    this->PlaceHolder.pFormat.pObject = 0i64;
    return result;
  }
  v9 = *(_QWORD *)(v6 + 16);
  if ( v9 )
    ++*(_DWORD *)(v9 + 8);
  v10 = this->PlaceHolder.pFormat.pObject;
  if ( this->PlaceHolder.pFormat.pObject )
  {
    v8 = v10->RefCount-- == 1;
    if ( v8 )
    {
      Scaleform::Render::Text::TextFormat::~TextFormat(v10);
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v10);
    }
  }
  this->PlaceHolder.pFormat.pObject = *(Scaleform::Render::Text::TextFormat **)(v6 + 16);
  return this;
}

Scaleform::Render::Text::Paragraph::FormatRunIterator *__fastcall Scaleform::Render::Text::Paragraph::FormatRunIterator::operator*(
        Scaleform::Render::Text::Paragraph::FormatRunIterator *this)
{
  __int64 Index; // rcx
  const Scaleform::RangeDataArray<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>,Scaleform::ArrayLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> >,2,Scaleform::ArrayDefaultPolicy> > *pArray; // rax
  __int64 v4; // r9
  __int64 v5; // r8
  unsigned __int64 v6; // rdx
  wchar_t *v7; // rcx
  Scaleform::Render::Text::Paragraph::FormatRunIterator *result; // rax
  const Scaleform::Render::Text::Paragraph::TextBuffer *pText; // rax
  __int64 CurTextIndex; // r8
  unsigned __int64 Size; // rdx
  wchar_t *v12; // rax
  Scaleform::Render::Text::TextFormat *pObject; // rdi

  Index = this->FormatIterator.Index;
  if ( Index < 0 || (pArray = this->FormatIterator.pArray, Index >= pArray->Ranges.Data.Size) )
  {
    pText = this->pText;
    CurTextIndex = this->CurTextIndex;
    Size = pText->Size;
    v12 = pText->pText;
    this->PlaceHolder.Index = CurTextIndex;
    this->PlaceHolder.Length = Size - CurTextIndex;
    this->PlaceHolder.pText = &v12[CurTextIndex];
  }
  else
  {
    v4 = (__int64)&pArray->Ranges.Data.Data[Index];
    v5 = *(_QWORD *)v4;
    v6 = this->CurTextIndex;
    v7 = this->pText->pText;
    if ( v6 >= *(_QWORD *)v4 )
      return (Scaleform::Render::Text::Paragraph::FormatRunIterator *)Scaleform::Render::Text::Paragraph::StyledTextRun::Set(
                                                                        &this->PlaceHolder,
                                                                        &v7[v5],
                                                                        v5,
                                                                        *(_QWORD *)(v4 + 8),
                                                                        *(Scaleform::Render::Text::TextFormat **)(v4 + 16));
    this->PlaceHolder.Index = v6;
    this->PlaceHolder.Length = v5 - v6;
    this->PlaceHolder.pText = &v7[v6];
  }
  pObject = this->PlaceHolder.pFormat.pObject;
  if ( pObject )
  {
    if ( pObject->RefCount-- == 1 )
    {
      Scaleform::Render::Text::TextFormat::~TextFormat(pObject);
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, pObject);
    }
  }
  result = this;
  this->PlaceHolder.pFormat.pObject = 0i64;
  return result;
}

void __fastcall Scaleform::Render::Text::Paragraph::FormatRunIterator::operator++(
        Scaleform::Render::Text::Paragraph::FormatRunIterator *this)
{
  __int64 Index; // rcx
  const Scaleform::RangeDataArray<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>,Scaleform::ArrayLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> >,2,Scaleform::ArrayDefaultPolicy> > *pArray; // rax
  unsigned __int64 CurTextIndex; // r9
  __int64 v5; // rdx
  Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> > *Data; // rcx
  unsigned __int64 v7; // rax
  __int64 v8; // rcx

  Index = this->FormatIterator.Index;
  if ( Index < 0 || (pArray = this->FormatIterator.pArray, Index >= pArray->Ranges.Data.Size) )
  {
    this->CurTextIndex = this->pText->Size;
  }
  else
  {
    CurTextIndex = this->CurTextIndex;
    v5 = Index;
    Data = pArray->Ranges.Data.Data;
    v7 = pArray->Ranges.Data.Data[v5].Index;
    if ( CurTextIndex >= v7 )
    {
      this->CurTextIndex = CurTextIndex + Data[v5].Length;
      v8 = this->FormatIterator.Index;
      if ( v8 < (signed __int64)this->FormatIterator.pArray->Ranges.Data.Size )
        this->FormatIterator.Index = v8 + 1;
    }
    else
    {
      this->CurTextIndex = v7;
    }
  }
}

void __fastcall Scaleform::Render::Text::Paragraph::CharactersIterator::operator+=(
        Scaleform::Render::Text::Paragraph::CharactersIterator *this,
        unsigned __int64 n)
{
  unsigned __int64 i; // r9
  const Scaleform::Render::Text::Paragraph::TextBuffer *pText; // rax
  unsigned __int64 CurTextIndex; // rdx
  unsigned __int64 v5; // r10
  __int64 Index; // rdx
  const Scaleform::RangeDataArray<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>,Scaleform::ArrayLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> >,2,Scaleform::ArrayDefaultPolicy> > *pArray; // rax
  __int64 v8; // rdx

  for ( i = n; i; --i )
  {
    pText = this->pText;
    if ( pText && (CurTextIndex = this->CurTextIndex, CurTextIndex < pText->Size) )
    {
      v5 = CurTextIndex + 1;
      this->CurTextIndex = CurTextIndex + 1;
      Index = this->FormatIterator.Index;
      if ( Index >= 0 )
      {
        pArray = this->FormatIterator.pArray;
        if ( Index < pArray->Ranges.Data.Size
          && v5 >= pArray->Ranges.Data.Data[Index].Index + pArray->Ranges.Data.Data[Index].Length )
        {
          v8 = this->FormatIterator.Index;
          if ( v8 < (signed __int64)this->FormatIterator.pArray->Ranges.Data.Size )
            this->FormatIterator.Index = v8 + 1;
        }
      }
    }
    else
    {
      this->CurTextIndex = pText->Size;
    }
  }
}

Scaleform::Render::Text::Paragraph *__fastcall Scaleform::Render::Text::Allocator::AllocateParagraph(
        Scaleform::Render::Text::Allocator *this)
{
  Scaleform::Render::Text::Paragraph *result; // rax
  unsigned int NewParagraphId; // ecx

  result = (Scaleform::Render::Text::Paragraph *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))this->pHeap->Alloc)(
                                                   this->pHeap,
                                                   72i64);
  if ( result )
  {
    result->Text.pText = 0i64;
    result->Text.Size = 0i64;
    result->Text.Allocated = 0i64;
    result->pFormat.pObject = 0i64;
    result->FormatInfo.Ranges.Data.Data = 0i64;
    result->FormatInfo.Ranges.Data.Size = 0i64;
    result->FormatInfo.Ranges.Data.Policy.Capacity = 0i64;
    result->StartIndex = 0i64;
    result->ModCounter = 0;
    NewParagraphId = this->NewParagraphId;
    this->NewParagraphId = NewParagraphId + 1;
    result->UniqueId = NewParagraphId;
  }
  return result;
}

void __fastcall Scaleform::ArrayData<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>>,Scaleform::AllocatorLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>>,2>,Scaleform::ArrayDefaultPolicy>::Append(
        Scaleform::ArrayData<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> >,Scaleform::AllocatorLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> >,2>,Scaleform::ArrayDefaultPolicy> *this,
        const Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> > *other,
        unsigned __int64 count)
{
  unsigned __int64 v3; // rdi
  unsigned __int64 Size; // rbx
  Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> > *v7; // rax
  Scaleform::Ptr<Scaleform::Render::Text::TextFormat> *p_Data; // r8
  Scaleform::Render::Text::TextFormat *pObject; // rdx

  if ( count )
  {
    v3 = count;
    Size = this->Size;
    Scaleform::ArrayDataBase<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>>,Scaleform::AllocatorLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>>,2>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
      this,
      this,
      Size + count);
    v7 = &this->Data[Size];
    p_Data = &other->Data;
    do
    {
      if ( v7 )
      {
        pObject = p_Data[-1].pObject;
        v7->Index = (__int64)p_Data[-2].pObject;
        v7->Length = (unsigned __int64)pObject;
        if ( p_Data->pObject )
          ++p_Data->pObject->RefCount;
        v7->Data = (Scaleform::Ptr<Scaleform::Render::Text::TextFormat>)p_Data->pObject;
      }
      p_Data += 3;
      ++v7;
      --v3;
    }
    while ( v3 );
  }
}

Scaleform::Render::Text::Paragraph *__fastcall Scaleform::Render::Text::StyledText::AppendCopyOfParagraph(
        Scaleform::Render::Text::StyledText *this,
        const Scaleform::Render::Text::Paragraph *srcPara)
{
  Scaleform::Render::Text::Paragraph *v2; // rbx
  unsigned __int64 Size; // rcx
  unsigned __int64 v6; // rbp
  Scaleform::Render::Text::Paragraph *pPara; // rcx
  unsigned __int64 v8; // rax
  unsigned __int64 StartIndex; // r9
  unsigned __int64 v10; // rdx
  wchar_t *v11; // rcx
  Scaleform::Render::Text::Allocator *Allocator; // rdi
  Scaleform::Render::Text::Paragraph *v13; // rax
  Scaleform::Render::Text::Paragraph *v14; // rax
  Scaleform::Render::Text::Paragraph *v15; // rdi
  Scaleform::Render::Text::StyledText::ParagraphPtrWrapper *v16; // rdx
  Scaleform::Render::Text::ParagraphFormat *pObject; // rdi
  Scaleform::Render::Text::Paragraph *result; // rax

  v2 = 0i64;
  Size = this->Paragraphs.Data.Size;
  v6 = 0i64;
  if ( Size )
  {
    pPara = this->Paragraphs.Data.Data[Size - 1].pPara;
    v8 = pPara->Text.Size;
    StartIndex = pPara->StartIndex;
    if ( v8 )
    {
      v10 = v8 - 1;
      if ( !pPara->Text.pText || (v11 = &pPara->Text.pText[v10], v10 >= v8) )
        v11 = 0i64;
      if ( !*v11 )
        --v8;
    }
    v6 = v8 + StartIndex;
  }
  Allocator = Scaleform::Render::Text::StyledText::GetAllocator(this);
  v13 = (Scaleform::Render::Text::Paragraph *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))Allocator->pHeap->Alloc)(
                                                Allocator->pHeap,
                                                72i64);
  if ( v13 )
  {
    Scaleform::Render::Text::Paragraph::Paragraph(v13, srcPara, Allocator);
    v15 = v14;
  }
  else
  {
    v15 = 0i64;
  }
  Scaleform::ArrayDataBase<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,Scaleform::AllocatorLH<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,2>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
    &this->Paragraphs.Data,
    &this->Paragraphs,
    this->Paragraphs.Data.Size + 1);
  v16 = &this->Paragraphs.Data.Data[this->Paragraphs.Data.Size - 1];
  if ( v16 )
    v16->pPara = v15;
  if ( !v16 )
    v2 = v15;
  if ( v2 )
  {
    Scaleform::ArrayDataBase<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>>,Scaleform::AllocatorLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>>,2>,Scaleform::ArrayDefaultPolicy>::~ArrayDataBase<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>>,Scaleform::AllocatorLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>>,2>,Scaleform::ArrayDefaultPolicy>(&v2->FormatInfo.Ranges.Data);
    pObject = v2->pFormat.pObject;
    if ( pObject )
    {
      if ( pObject->RefCount-- == 1 )
      {
        Scaleform::Render::Text::ParagraphFormat::~ParagraphFormat(pObject);
        Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, pObject);
      }
    }
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v2);
  }
  result = this->Paragraphs.Data.Data[this->Paragraphs.Data.Size - 1].pPara;
  result->StartIndex = v6;
  return result;
}

Scaleform::Render::Text::Paragraph *__fastcall Scaleform::Render::Text::StyledText::AppendNewParagraph(
        Scaleform::Render::Text::StyledText *this,
        const Scaleform::Render::Text::ParagraphFormat *pdefParaFmt)
{
  Scaleform::Render::Text::Paragraph *v2; // rbx
  unsigned __int64 Size; // rcx
  unsigned __int64 v6; // r15
  Scaleform::Render::Text::Paragraph *pPara; // rcx
  unsigned __int64 v8; // rax
  unsigned __int64 StartIndex; // r9
  unsigned __int64 v10; // rdx
  wchar_t *v11; // rcx
  Scaleform::Render::Text::Allocator *Allocator; // r14
  __int64 v13; // rax
  Scaleform::Render::Text::Paragraph *v14; // rdi
  unsigned int NewParagraphId; // ecx
  Scaleform::Render::Text::StyledText::ParagraphPtrWrapper *v16; // rdx
  Scaleform::Render::Text::ParagraphFormat *pObject; // rdi
  unsigned __int64 v19; // rcx
  Scaleform::Render::Text::StyledText::ParagraphPtrWrapper *Data; // rax
  Scaleform::Render::Text::Paragraph *v21; // rbx
  Scaleform::Render::Text::Paragraph *result; // rax

  v2 = 0i64;
  Size = this->Paragraphs.Data.Size;
  v6 = 0i64;
  if ( Size )
  {
    pPara = this->Paragraphs.Data.Data[Size - 1].pPara;
    v8 = pPara->Text.Size;
    StartIndex = pPara->StartIndex;
    if ( v8 )
    {
      v10 = v8 - 1;
      if ( !pPara->Text.pText || (v11 = &pPara->Text.pText[v10], v10 >= v8) )
        v11 = 0i64;
      if ( !*v11 )
        --v8;
    }
    v6 = v8 + StartIndex;
  }
  Allocator = Scaleform::Render::Text::StyledText::GetAllocator(this);
  v13 = ((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))Allocator->pHeap->Alloc)(Allocator->pHeap, 72i64);
  v14 = (Scaleform::Render::Text::Paragraph *)v13;
  if ( v13 )
  {
    *(_QWORD *)v13 = 0i64;
    *(_QWORD *)(v13 + 8) = 0i64;
    *(_QWORD *)(v13 + 16) = 0i64;
    *(_QWORD *)(v13 + 24) = 0i64;
    *(_QWORD *)(v13 + 32) = 0i64;
    *(_QWORD *)(v13 + 40) = 0i64;
    *(_QWORD *)(v13 + 48) = 0i64;
    *(_QWORD *)(v13 + 56) = 0i64;
    *(_WORD *)(v13 + 68) = 0;
    NewParagraphId = Allocator->NewParagraphId;
    Allocator->NewParagraphId = NewParagraphId + 1;
    *(_DWORD *)(v13 + 64) = NewParagraphId;
  }
  else
  {
    v14 = 0i64;
  }
  Scaleform::ArrayDataBase<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,Scaleform::AllocatorLH<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,2>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
    &this->Paragraphs.Data,
    &this->Paragraphs,
    this->Paragraphs.Data.Size + 1);
  v16 = &this->Paragraphs.Data.Data[this->Paragraphs.Data.Size - 1];
  if ( v16 )
    v16->pPara = v14;
  if ( !v16 )
    v2 = v14;
  if ( v2 )
  {
    Scaleform::ArrayDataBase<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>>,Scaleform::AllocatorLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>>,2>,Scaleform::ArrayDefaultPolicy>::~ArrayDataBase<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>>,Scaleform::AllocatorLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>>,2>,Scaleform::ArrayDefaultPolicy>(&v2->FormatInfo.Ranges.Data);
    pObject = v2->pFormat.pObject;
    if ( pObject )
    {
      if ( pObject->RefCount-- == 1 )
      {
        Scaleform::Render::Text::ParagraphFormat::~ParagraphFormat(pObject);
        Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, pObject);
      }
    }
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v2);
  }
  v19 = this->Paragraphs.Data.Size;
  Data = this->Paragraphs.Data.Data;
  v21 = Data[v19 - 1].pPara;
  if ( !pdefParaFmt )
    pdefParaFmt = this->pDefaultParagraphFormat.pObject;
  Scaleform::Render::Text::Paragraph::SetFormat(Data[v19 - 1].pPara, this->pTextAllocator.pObject, pdefParaFmt);
  result = v21;
  v21->StartIndex = v6;
  return result;
}

unsigned __int64 __fastcall Scaleform::Render::Text::StyledText::AppendString(
        Scaleform::Render::Text::StyledText *this,
        const char *putf8String,
        unsigned __int64 stringSize,
        Scaleform::Render::Text::StyledText::NewLinePolicy newLinePolicy)
{
  return Scaleform::Render::Text::StyledText::AppendString(
           this,
           putf8String,
           stringSize,
           newLinePolicy,
           this->pDefaultTextFormat.pObject,
           this->pDefaultParagraphFormat.pObject);
}

unsigned __int64 __fastcall Scaleform::Render::Text::StyledText::AppendString(
        Scaleform::Render::Text::StyledText *this,
        const char *putf8String,
        unsigned __int64 stringSize,
        Scaleform::Render::Text::StyledText::NewLinePolicy newLinePolicy,
        const Scaleform::Render::Text::TextFormat *pdefTextFmt,
        const Scaleform::Render::Text::ParagraphFormat *pdefParaFmt)
{
  char *v6; // r14
  const char *v8; // r13
  int v9; // ebx
  signed __int64 v10; // rcx
  Scaleform::Render::Text::Paragraph *pPara; // r15
  unsigned __int64 StartIndex; // rsi
  const Scaleform::Render::Text::ParagraphFormat *v13; // rdi
  int v14; // ecx
  unsigned __int64 Size; // rbp
  unsigned __int64 v16; // rax
  wchar_t *v17; // rax
  int v18; // edi
  unsigned __int64 v19; // rsi
  int Char_Advance0; // eax
  char *v21; // rcx
  unsigned __int64 v22; // r8
  unsigned __int64 v23; // rdx
  wchar_t *v24; // rax
  wchar_t *pText; // rax
  wchar_t *v26; // rdi
  int v27; // eax
  int v28; // eax
  int v29; // eax
  const Scaleform::Render::Text::TextFormat *v30; // rbx
  bool v31; // zf
  unsigned __int64 result; // rax
  unsigned __int64 v33; // [rsp+30h] [rbp-68h]
  Scaleform::Render::Text::Paragraph *appended; // [rsp+38h] [rbp-60h]
  unsigned __int64 v35; // [rsp+40h] [rbp-58h]
  int v36; // [rsp+A0h] [rbp+8h]
  char *putf8Buffer; // [rsp+A8h] [rbp+10h] BYREF
  unsigned __int64 v38; // [rsp+B0h] [rbp+18h]
  Scaleform::Render::Text::StyledText::NewLinePolicy v39; // [rsp+B8h] [rbp+20h]

  v39 = newLinePolicy;
  v6 = (char *)putf8String;
  if ( stringSize == -1i64 )
  {
    do
      ++stringSize;
    while ( putf8String[stringSize] );
  }
  v8 = &putf8String[stringSize];
  v9 = 0;
  v10 = this->Paragraphs.Data.Size - 1;
  v38 = 0i64;
  if ( v10 < 0 || v10 >= SLODWORD(this->Paragraphs.Data.Size) )
  {
    pPara = 0i64;
    appended = 0i64;
    goto LABEL_8;
  }
  pPara = this->Paragraphs.Data.Data[v10].pPara;
  appended = pPara;
  if ( !pPara )
  {
LABEL_8:
    StartIndex = 0i64;
    goto LABEL_9;
  }
  StartIndex = pPara->StartIndex;
LABEL_9:
  v33 = StartIndex;
  this->OnTextInserting(this, StartIndex, stringSize, putf8String);
  v13 = pdefParaFmt;
  v14 = 0;
  do
  {
    v36 = v14 + 1;
    if ( v14 || !pPara )
    {
      Size = 0i64;
      appended = Scaleform::Render::Text::StyledText::AppendNewParagraph(this, v13);
      pPara = appended;
      v35 = 0i64;
      appended->StartIndex = StartIndex;
    }
    else
    {
      Scaleform::Render::Text::Paragraph::RemoveTermNull(pPara);
      Size = pPara->Text.Size;
      v35 = Size;
      if ( !Size )
        goto LABEL_20;
      v16 = Size - 1;
      if ( pPara->Text.pText && v16 < Size )
        v17 = &pPara->Text.pText[v16];
      else
        v17 = 0i64;
      if ( !*v17 )
        v35 = --Size;
      if ( !Size )
      {
LABEL_20:
        if ( v13 )
          Scaleform::Render::Text::Paragraph::SetFormat(pPara, this->pTextAllocator.pObject, v13);
      }
    }
    v18 = v9;
    putf8Buffer = v6;
    v9 = -1;
    v19 = 0i64;
    if ( v6 >= v8 )
      break;
    while ( v9 )
    {
      Char_Advance0 = Scaleform::UTF8Util::DecodeNextChar_Advance0((const char **)&putf8Buffer);
      v21 = putf8Buffer;
      if ( !Char_Advance0 )
        v21 = --putf8Buffer;
      if ( v39 || v18 != 13 || v19 || (v18 = -1, Char_Advance0 != 10) )
      {
        v9 = Char_Advance0;
        if ( Char_Advance0 == 10 )
          goto LABEL_38;
        if ( Char_Advance0 == 13 )
          break;
        ++v19;
      }
      else
      {
        ++v6;
      }
      if ( v21 >= v8 )
        break;
    }
    if ( v9 == 10 || v9 == 13 )
LABEL_38:
      ++v19;
    if ( v19 )
    {
      v22 = pPara->Text.Size;
      v23 = v22 + v19;
      if ( pPara->Text.Allocated < v22 + v19 )
      {
        if ( pPara->Text.pText )
          v24 = (wchar_t *)Scaleform::Memory::pGlobalHeap->Realloc(
                             Scaleform::Memory::pGlobalHeap,
                             pPara->Text.pText,
                             2 * v23);
        else
          v24 = (wchar_t *)this->pTextAllocator.pObject->pHeap->Alloc(
                             this->pTextAllocator.pObject->pHeap,
                             2 * v23,
                             0i64);
        v22 = pPara->Text.Size;
        pPara->Text.pText = v24;
        pPara->Text.Allocated = v22 + v19;
      }
      if ( v22 > Size )
        memmove(&pPara->Text.pText[v19 + Size], &pPara->Text.pText[Size], 2 * (v22 - Size));
      pText = pPara->Text.pText;
      pPara->Text.Size += v19;
      v26 = &pText[Size];
      Scaleform::RangeDataArray<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>,Scaleform::ArrayLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>>,2,Scaleform::ArrayDefaultPolicy>>::ExpandRange(
        &pPara->FormatInfo,
        Size,
        v19);
      ++pPara->ModCounter;
      v9 = -1;
      putf8Buffer = v6;
      if ( v6 < v8 )
      {
        do
        {
          if ( !v9 )
            break;
          v27 = Scaleform::UTF8Util::DecodeNextChar_Advance0((const char **)&putf8Buffer);
          v9 = v27;
          if ( !v27 )
            --putf8Buffer;
          if ( v27 == 13 || v27 == 10 )
          {
            v9 = 10;
            if ( (this->RTFlags & 2) != 0 )
              v9 = 13;
          }
          *v26 = v9;
          v28 = 10;
          ++v26;
          if ( (this->RTFlags & 2) != 0 )
            v28 = 13;
        }
        while ( v9 != v28 && putf8Buffer < v8 );
        pPara = appended;
        Size = v35;
      }
      Scaleform::Render::Text::Paragraph::SetTextFormat(
        pPara,
        this->pTextAllocator.pObject,
        pdefTextFmt,
        Size,
        0xFFFFFFFFFFFFFFFFui64);
      v6 = putf8Buffer;
      v33 += v19 + Size;
      v38 += v19;
    }
    if ( v6 >= v8 )
      break;
    v13 = pdefParaFmt;
    v14 = v36;
    StartIndex = v33;
  }
  while ( v9 );
  v29 = 10;
  if ( (this->RTFlags & 2) != 0 )
    v29 = 13;
  if ( v9 == v29 )
    pPara = Scaleform::Render::Text::StyledText::AppendNewParagraph(this, pdefParaFmt);
  v30 = pdefTextFmt;
  Scaleform::Render::Text::Paragraph::AppendTermNull(pPara, this->pTextAllocator.pObject, pdefTextFmt);
  if ( (v30->PresentMask & 0x100) == 0 )
    return v38;
  v31 = Scaleform::String::GetLength(&v30->Url) == 0;
  result = v38;
  if ( !v31 )
    this->RTFlags |= 1u;
  return result;
}

unsigned __int64 __fastcall Scaleform::Render::Text::StyledText::AppendString(
        Scaleform::Render::Text::StyledText *this,
        const wchar_t *pstr,
        unsigned __int64 length,
        Scaleform::Render::Text::StyledText::NewLinePolicy newLinePolicy,
        const Scaleform::Render::Text::TextFormat *pdefTextFmt,
        const Scaleform::Render::Text::ParagraphFormat *pdefParaFmt)
{
  int v6; // esi
  unsigned __int64 v7; // r13
  const wchar_t *v8; // r12
  Scaleform::Render::Text::StyledText *v9; // rdi
  __int64 v10; // r14
  Scaleform::Render::Text::Paragraph *pPara; // r14
  unsigned __int64 StartIndex; // rbp
  const Scaleform::Render::Text::ParagraphFormat *v13; // rbx
  int v14; // ecx
  int v15; // er15
  unsigned __int64 Size; // rbp
  unsigned __int64 v17; // rax
  wchar_t *v18; // rax
  unsigned __int64 v19; // rbx
  wchar_t *v20; // r15
  unsigned __int64 v21; // r8
  unsigned __int64 v22; // rdx
  wchar_t *v23; // rax
  wchar_t *pText; // rax
  int v25; // eax
  char v26; // r8
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rax
  wchar_t *v29; // rax
  __int16 v30; // cx
  unsigned __int64 v31; // rbp
  bool v32; // zf
  unsigned __int64 result; // rax
  __int64 v34; // [rsp+30h] [rbp-58h]
  const wchar_t *v35; // [rsp+38h] [rbp-50h]
  int v37; // [rsp+98h] [rbp+10h]
  unsigned __int64 v38; // [rsp+A0h] [rbp+18h]

  v6 = 0;
  v7 = length;
  v8 = pstr;
  v9 = this;
  if ( length == -1i64 )
    v7 = Scaleform::SFwcslen(pstr);
  v10 = v9->Paragraphs.Data.Size - 1;
  v35 = &v8[v7];
  if ( v10 < 0 || v10 >= SLODWORD(v9->Paragraphs.Data.Size) )
  {
    pPara = 0i64;
    goto LABEL_8;
  }
  pPara = v9->Paragraphs.Data.Data[v10].pPara;
  if ( !pPara )
  {
LABEL_8:
    StartIndex = 0i64;
    goto LABEL_9;
  }
  StartIndex = pPara->StartIndex;
LABEL_9:
  v38 = StartIndex;
  v9->OnTextInserting(v9, StartIndex, v7, v8);
  v13 = pdefParaFmt;
  v14 = 0;
  v34 = 0i64;
  v15 = 10;
  while ( 1 )
  {
    v37 = v14 + 1;
    if ( v14 || !pPara )
    {
      pPara = Scaleform::Render::Text::StyledText::AppendNewParagraph(v9, v13);
      Size = 0i64;
      pPara->StartIndex = v38;
    }
    else
    {
      Scaleform::Render::Text::Paragraph::RemoveTermNull(pPara);
      Size = pPara->Text.Size;
      if ( !Size )
        goto LABEL_20;
      v17 = Size - 1;
      if ( pPara->Text.pText && v17 < Size )
        v18 = &pPara->Text.pText[v17];
      else
        v18 = 0i64;
      if ( !*v18 )
        --Size;
      if ( !Size )
      {
LABEL_20:
        if ( v13 )
          Scaleform::Render::Text::Paragraph::SetFormat(pPara, v9->pTextAllocator.pObject, v13);
      }
    }
    v19 = 0i64;
    if ( newLinePolicy == NLP_CompressCRLF && v6 == 13 && *v8 == 10 )
    {
      ++v8;
      if ( !--v7 )
        break;
    }
    if ( v7 )
    {
      while ( 1 )
      {
        v6 = v8[v19];
        if ( v6 == 10 )
          break;
        if ( v6 != 13 )
        {
          if ( v8[v19] )
          {
            if ( ++v19 < v7 )
              continue;
          }
        }
        goto LABEL_32;
      }
    }
    else
    {
LABEL_32:
      if ( v6 != 10 && v6 != 13 )
        goto LABEL_35;
    }
    ++v19;
LABEL_35:
    if ( v19 )
    {
      v21 = pPara->Text.Size;
      v22 = v21 + v19;
      if ( pPara->Text.Allocated < v21 + v19 )
      {
        if ( pPara->Text.pText )
          v23 = (wchar_t *)Scaleform::Memory::pGlobalHeap->Realloc(
                             Scaleform::Memory::pGlobalHeap,
                             pPara->Text.pText,
                             2 * v22);
        else
          v23 = (wchar_t *)v9->pTextAllocator.pObject->pHeap->Alloc(v9->pTextAllocator.pObject->pHeap, 2 * v22, 0i64);
        v21 = pPara->Text.Size;
        pPara->Text.pText = v23;
        pPara->Text.Allocated = v21 + v19;
      }
      if ( v21 > Size )
        memmove(&pPara->Text.pText[v19 + Size], &pPara->Text.pText[Size], 2 * (v21 - Size));
      pText = pPara->Text.pText;
      pPara->Text.Size += v19;
      v20 = &pText[Size];
      Scaleform::RangeDataArray<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>,Scaleform::ArrayLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>>,2,Scaleform::ArrayDefaultPolicy>>::ExpandRange(
        &pPara->FormatInfo,
        Size,
        v19);
      ++pPara->ModCounter;
    }
    else
    {
      v20 = 0i64;
    }
    memmove(v20, v8, 2 * v19);
    v8 += v19;
    v7 -= v19;
    if ( v6 == 10 || v6 == 13 )
    {
      v9 = this;
      v15 = 10;
      v25 = 10;
      v26 = this->RTFlags & 2;
      if ( v26 )
        v25 = 13;
      if ( v6 != v25 )
      {
        v27 = pPara->Text.Size;
        if ( v27 )
        {
          v28 = v27 - 1;
          if ( pPara->Text.pText && v28 < v27 )
            v29 = &pPara->Text.pText[v28];
          else
            v29 = 0i64;
          if ( !*v29 )
            --v27;
          if ( v27 )
          {
            v30 = 10;
            if ( v26 )
              v30 = 13;
            pPara->Text.pText[v27 - 1] = v30;
          }
        }
        v6 = 10;
        if ( (this->RTFlags & 2) != 0 )
          v6 = 13;
      }
    }
    else
    {
      v9 = this;
      v15 = 10;
    }
    Scaleform::Render::Text::Paragraph::SetTextFormat(
      pPara,
      v9->pTextAllocator.pObject,
      pdefTextFmt,
      Size,
      0xFFFFFFFFFFFFFFFFui64);
    v38 += v19 + Size;
    v31 = v19 + v34;
    v34 += v19;
    if ( v8 < v35 )
    {
      v13 = pdefParaFmt;
      v14 = v37;
      if ( v6 )
        continue;
    }
    goto LABEL_69;
  }
  v31 = v34;
LABEL_69:
  if ( (v9->RTFlags & 2) != 0 )
    v15 = 13;
  if ( v6 == v15 )
    pPara = Scaleform::Render::Text::StyledText::AppendNewParagraph(v9, pdefParaFmt);
  Scaleform::Render::Text::Paragraph::AppendTermNull(pPara, v9->pTextAllocator.pObject, pdefTextFmt);
  if ( (pdefTextFmt->PresentMask & 0x100) == 0 )
    return v31;
  v32 = Scaleform::String::GetLength(&pdefTextFmt->Url) == 0;
  result = v31;
  if ( !v32 )
    v9->RTFlags |= 1u;
  return result;
}

void __fastcall Scaleform::Render::Text::Paragraph::AppendTermNull(
        Scaleform::Render::Text::Paragraph *this,
        Scaleform::Render::Text::Allocator *pallocator,
        const Scaleform::Render::Text::TextFormat *pdefTextFmt)
{
  unsigned __int64 Size; // rdi
  wchar_t *pText; // rcx
  unsigned __int64 v8; // rax
  bool v9; // cf
  wchar_t *v10; // rax
  unsigned __int64 v11; // rax
  wchar_t *v12; // rax
  Scaleform::RangeDataArray<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>,Scaleform::ArrayLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> >,2,Scaleform::ArrayDefaultPolicy> > *p_FormatInfo; // rbp
  wchar_t *Position; // r14
  Scaleform::Render::Text::TextFormat *TextFormat; // rax
  Scaleform::Render::Text::TextFormat *v16; // rbx
  Scaleform::Render::Text::TextFormat *pObject; // rdi
  bool v18; // zf
  Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> > range; // [rsp+20h] [rbp-38h] BYREF

  Size = this->Text.Size;
  if ( !Size )
    goto LABEL_6;
  pText = this->Text.pText;
  v8 = Size - 1;
  if ( !pText || (v9 = v8 < Size, v10 = &pText[v8], !v9) )
    v10 = 0i64;
  if ( *v10 )
  {
LABEL_6:
    if ( Size )
    {
      v11 = Size - 1;
      if ( !this->Text.pText || (v9 = v11 < Size, v12 = &this->Text.pText[v11], !v9) )
        v12 = 0i64;
      if ( !*v12 )
        --Size;
    }
    p_FormatInfo = &this->FormatInfo;
    Position = Scaleform::Render::Text::Paragraph::TextBuffer::CreatePosition(&this->Text, pallocator, Size, 1ui64);
    Scaleform::RangeDataArray<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>,Scaleform::ArrayLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>>,2,Scaleform::ArrayDefaultPolicy>>::ExpandRange(
      &this->FormatInfo,
      Size,
      1ui64);
    ++this->ModCounter;
    if ( Position )
    {
      *Position = 0;
      if ( !this->FormatInfo.Ranges.Data.Size )
      {
        if ( pdefTextFmt )
        {
          TextFormat = Scaleform::Render::Text::Allocator::AllocateTextFormat(pallocator, pdefTextFmt);
          range.Index = Size;
          v16 = TextFormat;
          range.Length = 1i64;
          if ( TextFormat )
            ++TextFormat->RefCount;
          range.Data.pObject = TextFormat;
          Scaleform::RangeDataArray<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>,Scaleform::ArrayLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>>,2,Scaleform::ArrayDefaultPolicy>>::SetRange(
            p_FormatInfo,
            &range);
          pObject = range.Data.pObject;
          if ( range.Data.pObject )
          {
            v18 = range.Data.pObject->RefCount-- == 1;
            if ( v18 )
            {
              Scaleform::Render::Text::TextFormat::~TextFormat(pObject);
              Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, pObject);
            }
          }
          if ( v16 )
          {
            v18 = v16->RefCount-- == 1;
            if ( v18 )
            {
              Scaleform::Render::Text::TextFormat::~TextFormat(v16);
              Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v16);
            }
          }
        }
      }
    }
  }
}

void __fastcall Scaleform::Render::Text::StyledText::Clear(Scaleform::Render::Text::StyledText *this)
{
  unsigned __int64 Size; // rbp
  unsigned __int64 i; // rsi
  Scaleform::MemoryHeap *v4; // r14
  __int64 v5; // rax
  Scaleform::Render::Text::Allocator *v6; // rbx
  Scaleform::Render::Text::Allocator *pObject; // rcx
  Scaleform::Render::Text::Paragraph *pPara; // rbx

  Size = this->Paragraphs.Data.Size;
  for ( i = 0i64; i < Size; pPara->Text.Size = 0i64 )
  {
    if ( !this->pTextAllocator.pObject )
    {
      v4 = Scaleform::Memory::pGlobalHeap->GetAllocHeapOrNULL(Scaleform::Memory::pGlobalHeap, this);
      v5 = (__int64)v4->Alloc(v4, 144ui64, 0i64);
      v6 = (Scaleform::Render::Text::Allocator *)v5;
      if ( v5 )
      {
        *(_DWORD *)(v5 + 8) = 1;
        *(_QWORD *)v5 = &Scaleform::Render::Text::Allocator::`vftable';
        *(_QWORD *)(v5 + 16) = 0i64;
        *(_QWORD *)(v5 + 24) = 0i64;
        *(_DWORD *)(v5 + 32) = 100;
        *(_DWORD *)(v5 + 36) = 100;
        *(_DWORD *)(v5 + 40) = 1;
        *(_QWORD *)(v5 + 48) = v4;
        Scaleform::Render::Text::TextFormat::TextFormat((Scaleform::Render::Text::TextFormat *)(v5 + 56), v4);
        v6->Flags = 0;
      }
      else
      {
        v6 = 0i64;
      }
      pObject = this->pTextAllocator.pObject;
      if ( pObject )
        Scaleform::RefCountNTSImpl::Release(pObject);
      this->pTextAllocator.pObject = v6;
    }
    pPara = this->Paragraphs.Data.Data[i].pPara;
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, pPara->Text.pText);
    ++i;
    pPara->Text.pText = 0i64;
    pPara->Text.Allocated = 0i64;
  }
  Scaleform::ArrayDataBase<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,Scaleform::AllocatorLH<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,2>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
    &this->Paragraphs.Data,
    &this->Paragraphs,
    0i64);
  this->RTFlags &= ~1u;
}

void __fastcall Scaleform::Render::Text::Paragraph::Copy(
        Scaleform::Render::Text::Paragraph *this,
        Scaleform::Render::Text::Allocator *pallocator,
        const Scaleform::Render::Text::Paragraph *psrcPara,
        unsigned __int64 startSrcIndex,
        unsigned __int64 startDestIndex,
        unsigned __int64 length)
{
  unsigned __int64 v6; // r14
  wchar_t *v10; // r15
  unsigned __int64 CurTextIndex; // rdx
  Scaleform::Render::Text::TextFormat *pObject; // rbx
  unsigned __int64 Size; // r10
  __int64 Index; // r8
  unsigned __int64 v15; // r11
  wchar_t *pText; // rcx
  Scaleform::Render::Text::Paragraph::FormatRunIterator *v17; // rax
  bool v18; // zf
  signed __int64 v19; // r9
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rdi
  unsigned __int64 v22; // rsi
  Scaleform::Render::Text::TextFormat *TextFormat; // rbx
  Scaleform::Render::Text::TextFormat *v24; // rdi
  Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> > *v25; // r10
  unsigned __int64 v26; // rdi
  wchar_t *v27; // rax
  unsigned __int64 v28; // rcx
  bool v29; // cf
  wchar_t *v30; // rcx
  unsigned __int64 v31; // rcx
  Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> > range; // [rsp+38h] [rbp-49h] BYREF
  Scaleform::Render::Text::Paragraph::FormatRunIterator v33; // [rsp+58h] [rbp-29h] BYREF

  v6 = length;
  if ( length )
  {
    Scaleform::Render::Text::Paragraph::InsertString(
      this,
      pallocator,
      &psrcPara->Text.pText[startSrcIndex],
      startDestIndex,
      length);
    Scaleform::Render::Text::Paragraph::FormatRunIterator::FormatRunIterator(
      &v33,
      &psrcPara->FormatInfo,
      &psrcPara->Text,
      startSrcIndex);
    v10 = 0i64;
    CurTextIndex = v33.CurTextIndex;
    pObject = v33.PlaceHolder.pFormat.pObject;
    Size = v33.pText->Size;
    if ( v33.CurTextIndex < Size )
    {
      Index = v33.FormatIterator.Index;
      while ( 1 )
      {
        if ( !v6 )
          goto LABEL_39;
        if ( Index < 0 || Index >= v33.FormatIterator.pArray->Ranges.Data.Size )
          break;
        v15 = v33.FormatIterator.pArray->Ranges.Data.Data[Index].Index;
        pText = v33.pText->pText;
        if ( CurTextIndex < v15 )
        {
          v33.PlaceHolder.Length = v15 - CurTextIndex;
LABEL_11:
          v33.PlaceHolder.Index = CurTextIndex;
          v33.PlaceHolder.pText = &pText[CurTextIndex];
          if ( pObject )
          {
            v18 = pObject->RefCount-- == 1;
            if ( v18 )
            {
              Scaleform::Render::Text::TextFormat::~TextFormat(pObject);
              Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, pObject);
            }
            Index = v33.FormatIterator.Index;
            CurTextIndex = v33.CurTextIndex;
          }
          pObject = 0i64;
          v17 = &v33;
          v33.PlaceHolder.pFormat.pObject = 0i64;
          goto LABEL_16;
        }
        v17 = (Scaleform::Render::Text::Paragraph::FormatRunIterator *)Scaleform::Render::Text::Paragraph::StyledTextRun::Set(
                                                                         &v33.PlaceHolder,
                                                                         &pText[v15],
                                                                         v15,
                                                                         v33.FormatIterator.pArray->Ranges.Data.Data[Index].Length,
                                                                         v33.FormatIterator.pArray->Ranges.Data.Data[Index].Data.pObject);
        CurTextIndex = v33.CurTextIndex;
        Index = v33.FormatIterator.Index;
        pObject = v33.PlaceHolder.pFormat.pObject;
LABEL_16:
        v19 = v17->PlaceHolder.Index;
        v20 = v17->PlaceHolder.Length;
        if ( v19 >= (__int64)startSrcIndex )
        {
          v21 = v19 - startSrcIndex;
        }
        else
        {
          v21 = 0i64;
          v20 = v19 + v20 - startSrcIndex;
        }
        v22 = v6;
        if ( v20 < v6 )
          v22 = v20;
        if ( v17->PlaceHolder.pFormat.pObject )
        {
          TextFormat = Scaleform::Render::Text::Allocator::AllocateTextFormat(
                         pallocator,
                         v17->PlaceHolder.pFormat.pObject);
          range.Length = v22;
          range.Index = v21 + startDestIndex;
          if ( TextFormat )
            ++TextFormat->RefCount;
          range.Data.pObject = TextFormat;
          Scaleform::RangeDataArray<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>,Scaleform::ArrayLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>>,2,Scaleform::ArrayDefaultPolicy>>::SetRange(
            &this->FormatInfo,
            &range);
          v24 = range.Data.pObject;
          if ( range.Data.pObject )
          {
            v18 = range.Data.pObject->RefCount-- == 1;
            if ( v18 )
            {
              Scaleform::Render::Text::TextFormat::~TextFormat(v24);
              Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v24);
            }
          }
          if ( TextFormat )
          {
            v18 = TextFormat->RefCount-- == 1;
            if ( v18 )
            {
              Scaleform::Render::Text::TextFormat::~TextFormat(TextFormat);
              Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, TextFormat);
            }
          }
          pObject = v33.PlaceHolder.pFormat.pObject;
          Index = v33.FormatIterator.Index;
          CurTextIndex = v33.CurTextIndex;
        }
        v6 -= v22;
        if ( Index < 0 || Index >= v33.FormatIterator.pArray->Ranges.Data.Size )
        {
          CurTextIndex = v33.pText->Size;
          v33.CurTextIndex = CurTextIndex;
        }
        else
        {
          v25 = &v33.FormatIterator.pArray->Ranges.Data.Data[Index];
          if ( CurTextIndex >= v25->Index )
          {
            CurTextIndex += v25->Length;
            v33.CurTextIndex = CurTextIndex;
            if ( Index < (signed __int64)v33.FormatIterator.pArray->Ranges.Data.Size )
              v33.FormatIterator.Index = ++Index;
          }
          else
          {
            CurTextIndex = v25->Index;
            v33.CurTextIndex = v25->Index;
          }
        }
        Size = v33.pText->Size;
        if ( CurTextIndex >= Size )
          goto LABEL_39;
      }
      pText = v33.pText->pText;
      v33.PlaceHolder.Length = Size - CurTextIndex;
      goto LABEL_11;
    }
LABEL_39:
    v26 = this->Text.Size;
    if ( v26 )
    {
      v27 = this->Text.pText;
      v28 = v26 - 1;
      if ( !this->Text.pText || (v29 = v28 < v26, v30 = &v27[v28], !v29) )
        v30 = 0i64;
      if ( !*v30 )
      {
        v31 = v26 - 1;
        if ( v27 && v31 < v26 )
          v10 = &v27[v31];
        if ( !*v10 )
          --v26;
        Scaleform::RangeDataArray<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>,Scaleform::ArrayLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>>,2,Scaleform::ArrayDefaultPolicy>>::ExpandRange(
          &this->FormatInfo,
          v26,
          1ui64);
        Scaleform::RangeDataArray<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>,Scaleform::ArrayLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>>,2,Scaleform::ArrayDefaultPolicy>>::RemoveRange(
          &this->FormatInfo,
          v26 + 1,
          1ui64);
        pObject = v33.PlaceHolder.pFormat.pObject;
      }
    }
    ++this->ModCounter;
    if ( pObject )
    {
      v18 = pObject->RefCount-- == 1;
      if ( v18 )
      {
        Scaleform::Render::Text::TextFormat::~TextFormat(pObject);
        Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, pObject);
      }
    }
  }
}

Scaleform::Render::Text::StyledText *__fastcall Scaleform::Render::Text::StyledText::CopyStyledText(
        Scaleform::Render::Text::StyledText *this,
        unsigned __int64 startPos,
        unsigned __int64 endPos)
{
  Scaleform::Render::Text::Allocator *Allocator; // rbx
  Scaleform::Render::Text::StyledText *v7; // rax
  Scaleform::Render::Text::StyledText *v8; // rax
  Scaleform::Render::Text::StyledText *v9; // rbx

  Allocator = Scaleform::Render::Text::StyledText::GetAllocator(this);
  v7 = (Scaleform::Render::Text::StyledText *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))Allocator->pHeap->Alloc)(
                                                Allocator->pHeap,
                                                72i64);
  if ( v7 )
  {
    Scaleform::Render::Text::StyledText::StyledText(v7, Allocator);
    v9 = v8;
  }
  else
  {
    v9 = 0i64;
  }
  Scaleform::Render::Text::StyledText::CopyStyledText(this, v9, startPos, endPos);
  return v9;
}

void __fastcall Scaleform::Render::Text::StyledText::CopyStyledText(
        Scaleform::Render::Text::StyledText *this,
        Scaleform::Render::Text::StyledText *pdest,
        unsigned __int64 startPos,
        unsigned __int64 endPos)
{
  unsigned __int64 v6; // rsi
  Scaleform::Render::Text::StyledText *v7; // rdi
  wchar_t *v8; // rbp
  unsigned __int64 v9; // rsi
  Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,Scaleform::AllocatorLH<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,2>,Scaleform::ArrayDefaultPolicy> > *pArray; // r15
  __int64 CurIndex; // rdi
  Scaleform::Render::Text::Paragraph *pPara; // r12
  Scaleform::Render::Text::Paragraph *appended; // rax
  unsigned __int64 Size; // rcx
  unsigned __int64 v15; // rdx
  wchar_t *v16; // rax
  unsigned __int64 v17; // rcx
  unsigned __int64 length; // rbx
  Scaleform::Render::Text::Allocator *Allocator; // rax
  const Scaleform::Render::Text::Paragraph *v20; // rdx
  unsigned __int64 v21; // rax
  bool v22; // cf
  wchar_t *v23; // rax
  const Scaleform::Render::Text::Paragraph *v24; // rdi
  Scaleform::Render::Text::Paragraph *v25; // rbx
  Scaleform::Render::Text::Allocator *v26; // rax
  signed __int64 v27; // rcx
  Scaleform::Render::Text::Paragraph *v28; // rdx
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rcx
  wchar_t *v31; // rax
  wchar_t v32; // ax
  signed __int64 v33; // rcx
  Scaleform::Render::Text::Paragraph *v34; // rax
  unsigned __int64 v35; // rcx
  unsigned __int64 v36; // rdx
  Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,Scaleform::AllocatorLH<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,2>,Scaleform::ArrayDefaultPolicy> >::Iterator result; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 pindexInParagraph; // [rsp+88h] [rbp+10h] BYREF
  Scaleform::Render::Text::Paragraph *v40; // [rsp+90h] [rbp+18h]

  v6 = endPos;
  v7 = this;
  if ( endPos == -1i64 )
    v6 = Scaleform::Render::Text::StyledText::GetLength(this);
  v8 = 0i64;
  pindexInParagraph = 0i64;
  v9 = v6 - startPos;
  Scaleform::Render::Text::StyledText::Clear(pdest);
  pdest->OnTextInserting(pdest, startPos, v9, &pnewText);
  Scaleform::Render::Text::StyledText::GetParagraphByIndex(v7, &result, startPos, &pindexInParagraph);
  pArray = result.pArray;
  if ( result.pArray )
  {
    CurIndex = result.CurIndex;
    if ( result.CurIndex >= 0 && result.CurIndex < SLODWORD(result.pArray->Data.Size) )
    {
      if ( !pindexInParagraph )
        goto LABEL_18;
      pPara = result.pArray->Data.Data[result.CurIndex].pPara;
      appended = Scaleform::Render::Text::StyledText::AppendNewParagraph(pdest, pPara->pFormat.pObject);
      Size = pPara->Text.Size;
      v40 = appended;
      if ( Size )
      {
        v15 = Size - 1;
        if ( !pPara->Text.pText || (v16 = &pPara->Text.pText[v15], v15 >= Size) )
          v16 = 0i64;
        if ( !*v16 )
          --Size;
      }
      v17 = Size - pindexInParagraph;
      length = v9;
      if ( v17 < v9 )
        length = v17;
      Allocator = Scaleform::Render::Text::StyledText::GetAllocator(pdest);
      Scaleform::Render::Text::Paragraph::Copy(v40, Allocator, pPara, pindexInParagraph, 0i64, length);
      while ( 1 )
      {
        v9 -= length;
        if ( CurIndex < (signed __int64)pArray->Data.Size )
          ++CurIndex;
LABEL_18:
        if ( CurIndex < 0 || CurIndex >= SLODWORD(pArray->Data.Size) || !v9 )
          break;
        v20 = pArray->Data.Data[CurIndex].pPara;
        length = v20->Text.Size;
        if ( length )
        {
          v21 = length - 1;
          if ( !v20->Text.pText || (v22 = v21 < length, v23 = &v20->Text.pText[v21], !v22) )
            v23 = 0i64;
          if ( !*v23 )
            --length;
        }
        if ( length > v9 )
        {
          v24 = pArray->Data.Data[CurIndex].pPara;
          v25 = Scaleform::Render::Text::StyledText::AppendNewParagraph(pdest, v24->pFormat.pObject);
          v26 = Scaleform::Render::Text::StyledText::GetAllocator(pdest);
          Scaleform::Render::Text::Paragraph::Copy(v25, v26, v24, 0i64, 0i64, v9);
          break;
        }
        Scaleform::Render::Text::StyledText::AppendCopyOfParagraph(pdest, v20);
      }
    }
    v7 = this;
  }
  v27 = pdest->Paragraphs.Data.Size - 1;
  if ( v27 >= 0 && v27 < SLODWORD(pdest->Paragraphs.Data.Size) )
  {
    v28 = pdest->Paragraphs.Data.Data[v27].pPara;
    if ( v28 )
    {
      v29 = v28->Text.Size;
      if ( v29 )
      {
        v30 = v29 - 1;
        if ( !v28->Text.pText || (v22 = v30 < v29, v31 = &v28->Text.pText[v30], !v22) )
          v31 = 0i64;
        v32 = *v31;
        if ( v32 == 10 || v32 == 13 )
          Scaleform::Render::Text::StyledText::AppendNewParagraph(pdest, v28->pFormat.pObject);
      }
    }
  }
  v33 = pdest->Paragraphs.Data.Size - 1;
  if ( v33 >= 0 && v33 < SLODWORD(pdest->Paragraphs.Data.Size) && (v34 = pdest->Paragraphs.Data.Data[v33].pPara) != 0i64
    || (v34 = Scaleform::Render::Text::StyledText::AppendNewParagraph(pdest, 0i64)) != 0i64 )
  {
    v35 = v34->Text.Size;
    if ( !v35 )
      goto LABEL_51;
    v36 = v35 - 1;
    if ( v34->Text.pText && v36 < v35 )
      v8 = &v34->Text.pText[v36];
    if ( *v8 != 10 && *v8 != 13 )
LABEL_51:
      Scaleform::Render::Text::Paragraph::AppendTermNull(
        v34,
        pdest->pTextAllocator.pObject,
        pdest->pDefaultTextFormat.pObject);
  }
  if ( (v7->RTFlags & 1) != 0 )
    pdest->RTFlags |= 1u;
}

wchar_t *__fastcall Scaleform::Render::Text::Paragraph::TextBuffer::CreatePosition(
        Scaleform::Render::Text::Paragraph::TextBuffer *this,
        Scaleform::Render::Text::Allocator *pallocator,
        unsigned __int64 pos,
        unsigned __int64 length)
{
  unsigned __int64 Size; // r8
  unsigned __int64 v7; // r9
  wchar_t *v9; // rax
  wchar_t *pText; // rax

  Size = this->Size;
  v7 = Size + length;
  if ( this->Allocated < v7 )
  {
    if ( this->pText )
      v9 = (wchar_t *)Scaleform::Memory::pGlobalHeap->Realloc(Scaleform::Memory::pGlobalHeap, this->pText, 2 * v7);
    else
      v9 = (wchar_t *)pallocator->pHeap->Alloc(pallocator->pHeap, 2 * v7, 0i64);
    Size = this->Size;
    this->pText = v9;
    this->Allocated = Size + length;
  }
  if ( Size > pos )
    memmove(&this->pText[pos + length], &this->pText[pos], 2 * (Size - pos));
  pText = this->pText;
  this->Size += length;
  return &pText[pos];
}

void __fastcall Scaleform::ConstructorMov<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper>::Destruct(
        Scaleform::Render::Text::StyledText::ParagraphPtrWrapper *p)
{
  Scaleform::Render::Text::Paragraph *pPara; // rdi
  Scaleform::Render::Text::ParagraphFormat *pObject; // rbx

  pPara = p->pPara;
  if ( p->pPara )
  {
    Scaleform::ArrayDataBase<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>>,Scaleform::AllocatorLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>>,2>,Scaleform::ArrayDefaultPolicy>::~ArrayDataBase<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>>,Scaleform::AllocatorLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>>,2>,Scaleform::ArrayDefaultPolicy>(&pPara->FormatInfo.Ranges.Data);
    pObject = pPara->pFormat.pObject;
    if ( pObject )
    {
      if ( pObject->RefCount-- == 1 )
      {
        Scaleform::Render::Text::ParagraphFormat::~ParagraphFormat(pObject);
        Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, pObject);
      }
    }
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, pPara);
  }
}

void __fastcall Scaleform::ConstructorMov<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>>>::DestructArray(
        Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> > *p,
        unsigned __int64 count)
{
  unsigned __int64 v2; // rsi
  Scaleform::Ptr<Scaleform::Render::Text::TextFormat> *p_Data; // rdi
  Scaleform::Render::Text::TextFormat *pObject; // rbx

  if ( count )
  {
    v2 = count;
    p_Data = &p[count - 1].Data;
    do
    {
      pObject = p_Data->pObject;
      if ( p_Data->pObject )
      {
        if ( pObject->RefCount-- == 1 )
        {
          Scaleform::Render::Text::TextFormat::~TextFormat(pObject);
          Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, pObject);
        }
      }
      p_Data -= 3;
      --v2;
    }
    while ( v2 );
  }
}

void __fastcall Scaleform::ConstructorMov<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper>::DestructArray(
        Scaleform::Render::Text::StyledText::ParagraphPtrWrapper *p,
        unsigned __int64 count)
{
  Scaleform::Render::Text::StyledText::ParagraphPtrWrapper *v2; // rsi
  unsigned __int64 v3; // rbp
  Scaleform::Render::Text::Paragraph *pPara; // rbx
  Scaleform::Render::Text::ParagraphFormat *pObject; // rdi

  if ( count )
  {
    v2 = &p[count - 1];
    v3 = count;
    do
    {
      pPara = v2->pPara;
      if ( v2->pPara )
      {
        Scaleform::ArrayDataBase<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>>,Scaleform::AllocatorLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>>,2>,Scaleform::ArrayDefaultPolicy>::~ArrayDataBase<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>>,Scaleform::AllocatorLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>>,2>,Scaleform::ArrayDefaultPolicy>(&pPara->FormatInfo.Ranges.Data);
        pObject = pPara->pFormat.pObject;
        if ( pObject )
        {
          if ( pObject->RefCount-- == 1 )
          {
            Scaleform::Render::Text::ParagraphFormat::~ParagraphFormat(pObject);
            Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, pObject);
          }
        }
        Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, pPara);
      }
      --v2;
      --v3;
    }
    while ( v3 );
  }
}

void __fastcall Scaleform::Render::Text::StyledText::EnsureTermNull(Scaleform::Render::Text::StyledText *this)
{
  signed __int64 v2; // rcx
  Scaleform::Render::Text::Paragraph *pPara; // rax
  unsigned __int64 Size; // rcx
  unsigned __int64 v5; // rdx
  wchar_t *v6; // rcx
  wchar_t v7; // cx

  v2 = this->Paragraphs.Data.Size - 1;
  if ( v2 >= 0 && v2 < SLODWORD(this->Paragraphs.Data.Size) && (pPara = this->Paragraphs.Data.Data[v2].pPara) != 0i64
    || (pPara = Scaleform::Render::Text::StyledText::AppendNewParagraph(this, 0i64)) != 0i64 )
  {
    Size = pPara->Text.Size;
    if ( !Size
      || ((v5 = Size - 1, !pPara->Text.pText) || v5 >= Size ? (v6 = 0i64) : (v6 = &pPara->Text.pText[v5]),
          (v7 = *v6, v7 != 10) && v7 != 13) )
    {
      Scaleform::Render::Text::Paragraph::AppendTermNull(
        pPara,
        this->pTextAllocator.pObject,
        this->pDefaultTextFormat.pObject);
    }
  }
}

void __fastcall Scaleform::RangeDataArray<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>,Scaleform::ArrayLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>>,2,Scaleform::ArrayDefaultPolicy>>::ExpandRange(
        Scaleform::RangeDataArray<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>,Scaleform::ArrayLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> >,2,Scaleform::ArrayDefaultPolicy> > *this,
        __int64 startPos,
        unsigned __int64 length)
{
  unsigned __int64 Size; // rdi
  __int64 NearestRangeIndex; // rax
  signed __int64 v8; // r9
  Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> > *v9; // rdx
  __int64 Index; // r8
  __int64 v11; // rcx
  signed __int64 v12; // rax
  __int64 v13; // rcx

  Size = this->Ranges.Data.Size;
  if ( Size )
  {
    NearestRangeIndex = Scaleform::RangeDataArray<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>,Scaleform::ArrayLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>>,2,Scaleform::ArrayDefaultPolicy>>::FindNearestRangeIndex(
                          this,
                          startPos);
    v8 = NearestRangeIndex;
    if ( NearestRangeIndex >= 0 )
    {
      if ( NearestRangeIndex >= Size )
        v8 = Size - 1;
    }
    else
    {
      v8 = 0i64;
    }
    if ( v8 < (__int64)Size )
    {
      v9 = &this->Ranges.Data.Data[v8];
      if ( v9 )
      {
        if ( (Index = v9->Index, startPos >= v9->Index) && (v11 = v9->Length, startPos <= v11 + Index - 1)
          || (v11 = v9->Length, v11 + Index == startPos) )
        {
          v9->Length = v11 + length;
        }
      }
    }
    v12 = this->Ranges.Data.Size;
    if ( v8 < v12 )
      ++v8;
    v13 = v8;
    while ( v13 >= 0 && v8 < (unsigned __int64)v12 )
    {
      this->Ranges.Data.Data[v13].Index += length;
      v12 = this->Ranges.Data.Size;
      if ( v8 < v12 )
      {
        ++v8;
        ++v13;
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

Scaleform::Render::Text::Allocator *__fastcall Scaleform::Render::Text::StyledText::GetAllocator(
        Scaleform::Render::Text::StyledText *this)
{
  Scaleform::MemoryHeap *v2; // rdi
  Scaleform::Render::Text::Allocator *v3; // rax
  Scaleform::Render::Text::Allocator *v4; // rax
  Scaleform::Render::Text::Allocator *v5; // rdi
  Scaleform::Render::Text::Allocator *pObject; // rcx

  if ( this->pTextAllocator.pObject )
    return this->pTextAllocator.pObject;
  v2 = Scaleform::Memory::pGlobalHeap->GetAllocHeapOrNULL(Scaleform::Memory::pGlobalHeap, this);
  v3 = (Scaleform::Render::Text::Allocator *)v2->Alloc(v2, 144ui64, 0i64);
  if ( v3 )
  {
    Scaleform::Render::Text::Allocator::Allocator(v3, v2, 0);
    v5 = v4;
  }
  else
  {
    v5 = 0i64;
  }
  pObject = this->pTextAllocator.pObject;
  if ( pObject )
    Scaleform::RefCountNTSImpl::Release(pObject);
  this->pTextAllocator.pObject = v5;
  return v5;
}

Scaleform::String *__fastcall Scaleform::Render::Text::StyledText::GetHtml(
        Scaleform::Render::Text::StyledText *this,
        Scaleform::String *result)
{
  const Scaleform::StringBuffer *Html; // rax
  Scaleform::StringBuffer strBuf; // [rsp+20h] [rbp-38h] BYREF

  Scaleform::StringBuffer::StringBuffer(&strBuf, Scaleform::Memory::pGlobalHeap);
  Html = Scaleform::Render::Text::StyledText::GetHtml(this, &strBuf);
  Scaleform::String::String(result, Html);
  Scaleform::StringBuffer::~StringBuffer(&strBuf);
  return result;
}

Scaleform::StringBuffer *__fastcall Scaleform::Render::Text::StyledText::GetHtml(
        Scaleform::Render::Text::StyledText *this,
        Scaleform::StringBuffer *strBuf)
{
  Scaleform::StringBuffer *v2; // r12
  unsigned __int64 Size; // r9
  Scaleform::ArrayLH<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,2,Scaleform::ArrayDefaultPolicy> *p_Paragraphs; // rdx
  Scaleform::RefCountNTSImpl *v6; // rdi
  __int64 v7; // rcx
  Scaleform::RefCountNTSImpl *v8; // rsi
  __int64 v9; // r8
  Scaleform::Render::Text::StyledText::ParagraphPtrWrapper *Data; // rax
  Scaleform::Render::Text::Paragraph *pPara; // r13
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rcx
  bool v14; // cf
  wchar_t *v15; // rcx
  bool v16; // zf
  __int64 pObject; // r14
  int v18; // ebx
  char *BuffPtr; // r9
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rax
  Scaleform::MemoryHeap *pHeap; // rcx
  Scaleform::Formatter *v23; // rax
  unsigned int v24; // ebx
  char *v25; // r9
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // rax
  Scaleform::MemoryHeap *v28; // rcx
  Scaleform::Formatter *v29; // rax
  unsigned int v30; // ebx
  char *v31; // r9
  unsigned __int64 v32; // rcx
  unsigned __int64 v33; // rax
  Scaleform::MemoryHeap *v34; // rcx
  Scaleform::Formatter *v35; // rax
  unsigned int v36; // ebx
  char *v37; // r9
  unsigned __int64 v38; // rcx
  unsigned __int64 v39; // rax
  Scaleform::MemoryHeap *v40; // rcx
  Scaleform::Formatter *v41; // rax
  int v42; // ebx
  char *v43; // r9
  unsigned __int64 v44; // rcx
  unsigned __int64 v45; // rax
  Scaleform::MemoryHeap *v46; // rcx
  Scaleform::Formatter *v47; // rax
  unsigned int *TabStops; // r15
  unsigned int v49; // er14
  char *v50; // r9
  unsigned __int64 v51; // rcx
  unsigned __int64 v52; // rax
  Scaleform::MemoryHeap *v53; // rcx
  Scaleform::Formatter *v54; // rax
  const char *v55; // rdx
  const char *v56; // rdx
  char v57; // r14
  Scaleform::Render::Text::TextFormat *v58; // r9
  __int64 v59; // r10
  unsigned __int64 v60; // r11
  Scaleform::Render::Text::TextFormat *v61; // rbx
  Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> > *v62; // rdx
  wchar_t *pText; // rax
  unsigned __int64 Index; // r12
  Scaleform::Render::Text::TextFormat *v65; // r15
  wchar_t *v66; // r13
  unsigned __int64 Length; // r12
  Scaleform::Render::Text::HTMLImageTagDesc *v68; // rax
  int v69; // ecx
  Scaleform::RefCountNTSImpl *v70; // r15
  Scaleform::Render::Text::TextFormat *v71; // r13
  bool v72; // al
  float v73; // xmm0_4
  char *v74; // r9
  unsigned __int64 v75; // rcx
  unsigned __int64 v76; // rax
  Scaleform::MemoryHeap *v77; // rcx
  Scaleform::Formatter *v78; // rax
  float v79; // xmm0_4
  char *v80; // r9
  unsigned __int64 v81; // rcx
  unsigned __int64 v82; // rax
  Scaleform::MemoryHeap *v83; // rcx
  Scaleform::Formatter *v84; // rax
  int v85; // ecx
  int v86; // er14
  char *v87; // r9
  unsigned __int64 v88; // rcx
  unsigned __int64 v89; // rax
  Scaleform::MemoryHeap *v90; // rcx
  Scaleform::Formatter *v91; // rax
  int v92; // ecx
  int v93; // er14
  char *v94; // r9
  unsigned __int64 v95; // rcx
  unsigned __int64 v96; // rax
  Scaleform::MemoryHeap *v97; // rcx
  Scaleform::Formatter *v98; // rax
  const char *v99; // rdx
  char v100; // r15
  Scaleform::Render::Text::TextFormat *v101; // r14
  Scaleform::StringBuffer *v102; // r15
  Scaleform::StringDH *FontList; // r14
  int FontSize; // eax
  unsigned int v105; // er14
  char *v106; // r9
  unsigned __int64 v107; // rcx
  unsigned __int64 v108; // rax
  Scaleform::MemoryHeap *v109; // rcx
  Scaleform::Formatter *v110; // rax
  unsigned int ColorV; // er14
  int v112; // er14
  char *v113; // r9
  unsigned __int64 v114; // rcx
  unsigned __int64 v115; // rax
  Scaleform::MemoryHeap *v116; // rcx
  Scaleform::Formatter *v117; // rax
  float v118; // xmm6_4
  char *v119; // r8
  unsigned __int64 v120; // rcx
  unsigned __int64 v121; // rax
  Scaleform::MemoryHeap *v122; // rcx
  Scaleform::Formatter *v123; // rax
  unsigned int ColorV_high; // er14
  char *v125; // r9
  unsigned __int64 v126; // rcx
  unsigned __int64 v127; // rax
  Scaleform::MemoryHeap *v128; // rcx
  Scaleform::Formatter *v129; // rax
  bool v130; // r14
  char *v131; // r9
  unsigned __int64 v132; // rcx
  unsigned __int64 v133; // rax
  Scaleform::MemoryHeap *v134; // rcx
  Scaleform::Formatter *v135; // rax
  unsigned __int64 v137; // r14
  Scaleform::StringBuffer *v138; // r15
  Scaleform::RefCountNTSImpl *v139; // rsi
  __int16 v140; // ax
  unsigned __int16 v141; // cx
  unsigned __int64 v142; // r8
  Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> > *v143; // rdx
  const char *v144; // rdx
  Scaleform::Render::Text::TextFormat *v145; // rbx
  char v147; // [rsp+28h] [rbp-E0h]
  Scaleform::MsgFormat::Sink r; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v149; // [rsp+48h] [rbp-C0h]
  Scaleform::Render::Text::TextFormat *v150; // [rsp+50h] [rbp-B8h]
  Scaleform::StringBuffer *v151; // [rsp+58h] [rbp-B0h]
  Scaleform::Render::Text::TextFormat *fmt; // [rsp+60h] [rbp-A8h]
  Scaleform::RefCountNTSImpl *v153; // [rsp+68h] [rbp-A0h]
  __int64 v154; // [rsp+70h] [rbp-98h]
  unsigned int pnum[2]; // [rsp+78h] [rbp-90h] BYREF
  Scaleform::ArrayLH<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,2,Scaleform::ArrayDefaultPolicy> *v156; // [rsp+80h] [rbp-88h]
  unsigned __int64 v157; // [rsp+88h] [rbp-80h]
  __int64 v158; // [rsp+90h] [rbp-78h]
  unsigned __int64 v159; // [rsp+98h] [rbp-70h]
  Scaleform::RefCountNTSImpl *v160; // [rsp+A0h] [rbp-68h]
  Scaleform::RefCountNTSImpl *v161; // [rsp+A8h] [rbp-60h]
  __int64 v162; // [rsp+B0h] [rbp-58h]
  Scaleform::Render::Text::Paragraph *v163; // [rsp+B8h] [rbp-50h]
  __int64 v164; // [rsp+C0h] [rbp-48h]
  Scaleform::MsgFormat f; // [rsp+C8h] [rbp-40h] BYREF

  v2 = strBuf;
  v151 = strBuf;
  v160 = this;
  LODWORD(v149) = 0;
  Scaleform::StringBuffer::operator=(strBuf, &pnewText);
  Size = this->Paragraphs.Data.Size;
  p_Paragraphs = &this->Paragraphs;
  v6 = v160;
  v7 = 0i64;
  v8 = v160;
  v9 = 0i64;
  v156 = &this->Paragraphs;
  v159 = Size;
  v161 = v160;
  v153 = v160;
LABEL_2:
  v154 = v7;
LABEL_3:
  if ( p_Paragraphs && v7 >= 0 && v7 < SLODWORD(p_Paragraphs->Data.Size) )
  {
    Data = p_Paragraphs->Data.Data;
    v158 = ++v9;
    pPara = Data[v7].pPara;
    v163 = pPara;
    if ( v9 == Size )
    {
      v12 = pPara->Text.Size;
      if ( !v12 )
        goto LABEL_365;
      v13 = v12 - 1;
      if ( !pPara->Text.pText || (v14 = v13 < v12, v15 = &pPara->Text.pText[v13], !v14) )
        v15 = 0i64;
      v16 = *v15 == 0;
      v7 = v154;
      p_Paragraphs = v156;
      if ( v16 )
        --v12;
      if ( !v12 )
        goto LABEL_365;
    }
    Scaleform::StringBuffer::AppendString(v2, "<TEXTFORMAT", -1i64);
    pObject = (__int64)pPara->pFormat.pObject;
    v164 = pObject;
    if ( (*(_BYTE *)(pObject + 34) & 4) != 0 )
    {
      v18 = *(__int16 *)(pObject + 26);
      r.Type = tStrBuffer;
      r.SinkData.pStr = (Scaleform::String *)v2;
      Scaleform::MsgFormat::MsgFormat(&f, &r);
      Scaleform::MsgFormat::Parse(&f, " INDENT=\"{0}\"");
      while ( Scaleform::MsgFormat::NextFormatter(&f) )
      {
        if ( f.MemPool.BuffSize < 0x60 )
        {
          pHeap = f.MemPool.pHeap;
          if ( !f.MemPool.pHeap )
            pHeap = Scaleform::Memory::pGlobalHeap;
          BuffPtr = (char *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64, __int64))pHeap->Alloc)(
                              pHeap,
                              96i64,
                              8i64);
        }
        else
        {
          BuffPtr = f.MemPool.BuffPtr;
          f.MemPool.BuffPtr = (char *)(((unsigned __int64)(f.MemPool.BuffPtr + 95) & 0xFFFFFFFFFFFFFFF8ui64) + 8);
          v20 = f.MemPool.BuffPtr - (char *)&f.MemPool - 8;
          v21 = 512 - v20;
          if ( v20 >= 0x200 )
            v21 = 0i64;
          f.MemPool.BuffSize = v21;
        }
        if ( BuffPtr )
          Scaleform::LongFormatter::LongFormatter((Scaleform::LongFormatter *)BuffPtr, &f, v18);
        else
          v23 = 0i64;
        Scaleform::MsgFormat::Bind(&f, v23, 1);
      }
      ++f.FirstArgNum;
      Scaleform::MsgFormat::FinishFormatD(&f);
      Scaleform::MsgFormat::~MsgFormat(&f);
    }
    if ( (*(_BYTE *)(pObject + 34) & 2) != 0 )
    {
      v24 = *(unsigned __int16 *)(pObject + 24);
      r.Type = tStrBuffer;
      r.SinkData.pStr = (Scaleform::String *)v2;
      Scaleform::MsgFormat::MsgFormat(&f, &r);
      Scaleform::MsgFormat::Parse(&f, " BLOCKINDENT=\"{0}\"");
      while ( Scaleform::MsgFormat::NextFormatter(&f) )
      {
        if ( f.MemPool.BuffSize < 0x60 )
        {
          v28 = f.MemPool.pHeap;
          if ( !f.MemPool.pHeap )
            v28 = Scaleform::Memory::pGlobalHeap;
          v25 = (char *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64, __int64))v28->Alloc)(
                          v28,
                          96i64,
                          8i64);
        }
        else
        {
          v25 = f.MemPool.BuffPtr;
          f.MemPool.BuffPtr = (char *)(((unsigned __int64)(f.MemPool.BuffPtr + 95) & 0xFFFFFFFFFFFFFFF8ui64) + 8);
          v26 = f.MemPool.BuffPtr - (char *)&f.MemPool - 8;
          v27 = 512 - v26;
          if ( v26 >= 0x200 )
            v27 = 0i64;
          f.MemPool.BuffSize = v27;
        }
        if ( v25 )
          Scaleform::LongFormatter::LongFormatter((Scaleform::LongFormatter *)v25, &f, v24);
        else
          v29 = 0i64;
        Scaleform::MsgFormat::Bind(&f, v29, 1);
      }
      ++f.FirstArgNum;
      Scaleform::MsgFormat::FinishFormatD(&f);
      Scaleform::MsgFormat::~MsgFormat(&f);
    }
    if ( (*(_BYTE *)(pObject + 34) & 0x10) != 0 )
    {
      v30 = *(unsigned __int16 *)(pObject + 30);
      r.Type = tStrBuffer;
      r.SinkData.pStr = (Scaleform::String *)v2;
      Scaleform::MsgFormat::MsgFormat(&f, &r);
      Scaleform::MsgFormat::Parse(&f, " LEFTMARGIN=\"{0}\"");
      while ( Scaleform::MsgFormat::NextFormatter(&f) )
      {
        if ( f.MemPool.BuffSize < 0x60 )
        {
          v34 = f.MemPool.pHeap;
          if ( !f.MemPool.pHeap )
            v34 = Scaleform::Memory::pGlobalHeap;
          v31 = (char *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64, __int64))v34->Alloc)(
                          v34,
                          96i64,
                          8i64);
        }
        else
        {
          v31 = f.MemPool.BuffPtr;
          f.MemPool.BuffPtr = (char *)(((unsigned __int64)(f.MemPool.BuffPtr + 95) & 0xFFFFFFFFFFFFFFF8ui64) + 8);
          v32 = f.MemPool.BuffPtr - (char *)&f.MemPool - 8;
          v33 = 512 - v32;
          if ( v32 >= 0x200 )
            v33 = 0i64;
          f.MemPool.BuffSize = v33;
        }
        if ( v31 )
          Scaleform::LongFormatter::LongFormatter((Scaleform::LongFormatter *)v31, &f, v30);
        else
          v35 = 0i64;
        Scaleform::MsgFormat::Bind(&f, v35, 1);
      }
      ++f.FirstArgNum;
      Scaleform::MsgFormat::FinishFormatD(&f);
      Scaleform::MsgFormat::~MsgFormat(&f);
    }
    if ( (*(_BYTE *)(pObject + 34) & 0x20) != 0 )
    {
      v36 = *(unsigned __int16 *)(pObject + 32);
      r.Type = tStrBuffer;
      r.SinkData.pStr = (Scaleform::String *)v2;
      Scaleform::MsgFormat::MsgFormat(&f, &r);
      Scaleform::MsgFormat::Parse(&f, " RIGHTMARGIN=\"{0}\"");
      while ( Scaleform::MsgFormat::NextFormatter(&f) )
      {
        if ( f.MemPool.BuffSize < 0x60 )
        {
          v40 = f.MemPool.pHeap;
          if ( !f.MemPool.pHeap )
            v40 = Scaleform::Memory::pGlobalHeap;
          v37 = (char *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64, __int64))v40->Alloc)(
                          v40,
                          96i64,
                          8i64);
        }
        else
        {
          v37 = f.MemPool.BuffPtr;
          f.MemPool.BuffPtr = (char *)(((unsigned __int64)(f.MemPool.BuffPtr + 95) & 0xFFFFFFFFFFFFFFF8ui64) + 8);
          v38 = f.MemPool.BuffPtr - (char *)&f.MemPool - 8;
          v39 = 512 - v38;
          if ( v38 >= 0x200 )
            v39 = 0i64;
          f.MemPool.BuffSize = v39;
        }
        if ( v37 )
          Scaleform::LongFormatter::LongFormatter((Scaleform::LongFormatter *)v37, &f, v36);
        else
          v41 = 0i64;
        Scaleform::MsgFormat::Bind(&f, v41, 1);
      }
      ++f.FirstArgNum;
      Scaleform::MsgFormat::FinishFormatD(&f);
      Scaleform::MsgFormat::~MsgFormat(&f);
    }
    if ( (*(_BYTE *)(pObject + 34) & 8) != 0 )
    {
      v42 = *(__int16 *)(pObject + 28);
      r.Type = tStrBuffer;
      r.SinkData.pStr = (Scaleform::String *)v2;
      Scaleform::MsgFormat::MsgFormat(&f, &r);
      Scaleform::MsgFormat::Parse(&f, " LEADING=\"{0}\"");
      while ( Scaleform::MsgFormat::NextFormatter(&f) )
      {
        if ( f.MemPool.BuffSize < 0x60 )
        {
          v46 = f.MemPool.pHeap;
          if ( !f.MemPool.pHeap )
            v46 = Scaleform::Memory::pGlobalHeap;
          v43 = (char *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64, __int64))v46->Alloc)(
                          v46,
                          96i64,
                          8i64);
        }
        else
        {
          v43 = f.MemPool.BuffPtr;
          f.MemPool.BuffPtr = (char *)(((unsigned __int64)(f.MemPool.BuffPtr + 95) & 0xFFFFFFFFFFFFFFF8ui64) + 8);
          v44 = f.MemPool.BuffPtr - (char *)&f.MemPool - 8;
          v45 = 512 - v44;
          if ( v44 >= 0x200 )
            v45 = 0i64;
          f.MemPool.BuffSize = v45;
        }
        if ( v43 )
          Scaleform::LongFormatter::LongFormatter((Scaleform::LongFormatter *)v43, &f, v42);
        else
          v47 = 0i64;
        Scaleform::MsgFormat::Bind(&f, v47, 1);
      }
      ++f.FirstArgNum;
      Scaleform::MsgFormat::FinishFormatD(&f);
      Scaleform::MsgFormat::~MsgFormat(&f);
    }
    if ( (*(_BYTE *)(pObject + 34) & 0x40) != 0 )
    {
      Scaleform::StringBuffer::AppendString(v2, " TABSTOPS=\"", -1i64);
      TabStops = Scaleform::Render::Text::ParagraphFormat::GetTabStops(
                   (Scaleform::Render::Text::ParagraphFormat *)pObject,
                   pnum);
      v49 = 0;
      if ( pnum[0] )
      {
        do
        {
          r.Type = tStrBuffer;
          r.SinkData.pStr = (Scaleform::String *)v2;
          Scaleform::MsgFormat::MsgFormat(&f, &r);
          Scaleform::MsgFormat::Parse(&f, "{0:sw:,:}{1}");
          while ( Scaleform::MsgFormat::NextFormatter(&f) )
          {
            if ( f.MemPool.BuffSize < 0x30 )
            {
              v53 = f.MemPool.pHeap;
              if ( !f.MemPool.pHeap )
                v53 = Scaleform::Memory::pGlobalHeap;
              v50 = (char *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64, __int64))v53->Alloc)(
                              v53,
                              48i64,
                              8i64);
            }
            else
            {
              v50 = f.MemPool.BuffPtr;
              f.MemPool.BuffPtr = (char *)(((unsigned __int64)(f.MemPool.BuffPtr + 47) & 0xFFFFFFFFFFFFFFF8ui64) + 8);
              v51 = f.MemPool.BuffPtr - (char *)&f.MemPool - 8;
              v52 = 512 - v51;
              if ( v51 >= 0x200 )
                v52 = 0i64;
              f.MemPool.BuffSize = v52;
            }
            if ( v50 )
              Scaleform::BoolFormatter::BoolFormatter((Scaleform::BoolFormatter *)v50, &f, v49 != 0);
            else
              v54 = 0i64;
            Scaleform::MsgFormat::Bind(&f, v54, 1);
          }
          ++f.FirstArgNum;
          Scaleform::MsgFormat::FormatD1<unsigned long>(&f, &TabStops[v49]);
          Scaleform::MsgFormat::FinishFormatD(&f);
          Scaleform::MsgFormat::~MsgFormat(&f);
          ++v49;
        }
        while ( v49 < pnum[0] );
        v8 = v153;
      }
      Scaleform::StringBuffer::AppendString(v2, "\"", -1i64);
      pObject = v164;
    }
    Scaleform::StringBuffer::AppendString(v2, "><", -1i64);
    v55 = "P";
    if ( (*(_WORD *)(pObject + 34) & 0x8080) == 0x8080 )
      v55 = "LI";
    Scaleform::StringBuffer::AppendString(v2, v55, -1i64);
    Scaleform::StringBuffer::AppendString(v2, " ALIGN=\"", -1i64);
    if ( ((*(unsigned __int16 *)(pObject + 34) >> 9) & 3) != 0 )
    {
      switch ( (*(unsigned __int16 *)(pObject + 34) >> 9) & 3 )
      {
        case 1:
          v56 = "RIGHT";
          break;
        case 2:
          v56 = "JUSTIFY";
          break;
        case 3:
          v56 = "CENTER";
          break;
        default:
          goto LABEL_112;
      }
    }
    else
    {
      v56 = "LEFT";
    }
    Scaleform::StringBuffer::AppendString(v2, v56, -1i64);
LABEL_112:
    Scaleform::StringBuffer::AppendString(v2, "\">", -1i64);
    v57 = 0;
    v150 = 0i64;
    v16 = pPara->Text.Size == 0;
    v58 = 0i64;
    v59 = 0i64;
    v162 = 0i64;
    v60 = 0i64;
    v157 = 0i64;
    v61 = 0i64;
    v147 = 0;
    if ( v16 )
      goto LABEL_356;
    while ( 1 )
    {
      if ( v59 < 0 || v59 >= pPara->FormatInfo.Ranges.Data.Size )
      {
        Index = pPara->Text.Size;
        pText = pPara->Text.pText;
LABEL_314:
        Length = Index - v60;
        v66 = &pText[v60];
        if ( v58 )
        {
          v16 = v58->RefCount-- == 1;
          if ( v16 )
          {
            Scaleform::Render::Text::TextFormat::~TextFormat(v58);
            Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v150);
          }
        }
        v150 = 0i64;
LABEL_318:
        v100 = v147;
        goto LABEL_319;
      }
      v62 = pPara->FormatInfo.Ranges.Data.Data;
      pText = pPara->Text.pText;
      Index = v62[v59].Index;
      if ( v60 < Index )
        goto LABEL_314;
      v65 = v62[v59].Data.pObject;
      v66 = &pText[Index];
      Length = v62[v59].Length;
      fmt = v65;
      if ( v65 )
        ++v65->RefCount;
      if ( v58 )
      {
        v16 = v58->RefCount-- == 1;
        if ( v16 )
        {
          Scaleform::Render::Text::TextFormat::~TextFormat(v58);
          Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v150);
        }
      }
      v150 = v65;
      if ( !v65 )
        goto LABEL_318;
      if ( (v65->PresentMask & 0x200) != 0 )
      {
        v68 = v65->pImageDesc.pObject;
        v69 = v149 | 1;
        LODWORD(v149) = v149 | 1;
        if ( v68 )
          ++v68->RefCount;
        v6 = v65->pImageDesc.pObject;
        v161 = v6;
        v70 = v6;
      }
      else
      {
        v69 = v149 | 2;
        LODWORD(v149) = v149 | 2;
        v8 = 0i64;
        v153 = 0i64;
        v70 = 0i64;
      }
      if ( (v69 & 2) != 0 )
      {
        v69 &= ~2u;
        LODWORD(v149) = v69;
        if ( v8 )
        {
          Scaleform::RefCountNTSImpl::Release(v8);
          v69 = v149;
        }
      }
      if ( (v69 & 1) != 0 )
      {
        LODWORD(v149) = v69 & 0xFFFFFFFE;
        if ( v6 )
          Scaleform::RefCountNTSImpl::Release(v6);
      }
      if ( v70 )
      {
        v71 = fmt;
        ++v70->RefCount;
        v72 = (v71->PresentMask & 0x100) != 0 && Scaleform::String::GetLength(&v71->Url);
        v2 = v151;
        if ( v72 )
        {
          r.Type = tStrBuffer;
          r.SinkData.pStr = (Scaleform::String *)v151;
          Scaleform::MsgFormat::MsgFormat(&f, &r);
          Scaleform::MsgFormat::Parse(&f, "<A HREF=\"{0}\">");
          Scaleform::MsgFormat::FormatD1<Scaleform::StringLH>(&f, (const Scaleform::StringLH *)&v71->Url);
          Scaleform::MsgFormat::FinishFormatD(&f);
          Scaleform::MsgFormat::~MsgFormat(&f);
        }
        Scaleform::StringBuffer::AppendString(v2, "<IMG SRC=\"", -1i64);
        Scaleform::StringBuffer::AppendString(
          v2,
          (const char *)(((unsigned __int64)v70[5].__vftable & 0xFFFFFFFFFFFFFFFCui64) + 12),
          *(_QWORD *)((unsigned __int64)v70[5].__vftable & 0xFFFFFFFFFFFFFFFCui64) & 0x7FFFFFFFFFFFFFFFi64);
        Scaleform::StringBuffer::AppendString(v2, "\"", -1i64);
        v73 = *(float *)&v70[2].__vftable;
        if ( v73 > 0.0 )
        {
          r.Type = tStrBuffer;
          r.SinkData.pStr = (Scaleform::String *)v2;
          Scaleform::MsgFormat::MsgFormat(&f, &r);
          Scaleform::MsgFormat::Parse(&f, " WIDTH=\"{0}\"");
          if ( Scaleform::MsgFormat::NextFormatter(&f) )
          {
            do
            {
              if ( f.MemPool.BuffSize < 0x60 )
              {
                v77 = f.MemPool.pHeap;
                if ( !f.MemPool.pHeap )
                  v77 = Scaleform::Memory::pGlobalHeap;
                v74 = (char *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64, __int64))v77->Alloc)(
                                v77,
                                96i64,
                                8i64);
              }
              else
              {
                v74 = f.MemPool.BuffPtr;
                f.MemPool.BuffPtr = (char *)(((unsigned __int64)(f.MemPool.BuffPtr + 95) & 0xFFFFFFFFFFFFFFF8ui64) + 8);
                v75 = f.MemPool.BuffPtr - (char *)&f.MemPool - 8;
                v76 = 512 - v75;
                if ( v75 >= 0x200 )
                  v76 = 0i64;
                f.MemPool.BuffSize = v76;
              }
              if ( v74 )
                Scaleform::LongFormatter::LongFormatter(
                  (Scaleform::LongFormatter *)v74,
                  &f,
                  (int)(float)(v73 * 0.050000001));
              else
                v78 = 0i64;
              Scaleform::MsgFormat::Bind(&f, v78, 1);
            }
            while ( Scaleform::MsgFormat::NextFormatter(&f) );
            v71 = fmt;
          }
          ++f.FirstArgNum;
          Scaleform::MsgFormat::FinishFormatD(&f);
          Scaleform::MsgFormat::~MsgFormat(&f);
        }
        v79 = *((float *)&v70[2].__vftable + 1);
        if ( v79 > 0.0 )
        {
          r.Type = tStrBuffer;
          r.SinkData.pStr = (Scaleform::String *)v2;
          Scaleform::MsgFormat::MsgFormat(&f, &r);
          Scaleform::MsgFormat::Parse(&f, " HEIGHT=\"{0}\"");
          if ( Scaleform::MsgFormat::NextFormatter(&f) )
          {
            do
            {
              if ( f.MemPool.BuffSize < 0x60 )
              {
                v83 = f.MemPool.pHeap;
                if ( !f.MemPool.pHeap )
                  v83 = Scaleform::Memory::pGlobalHeap;
                v80 = (char *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64, __int64))v83->Alloc)(
                                v83,
                                96i64,
                                8i64);
              }
              else
              {
                v80 = f.MemPool.BuffPtr;
                f.MemPool.BuffPtr = (char *)(((unsigned __int64)(f.MemPool.BuffPtr + 95) & 0xFFFFFFFFFFFFFFF8ui64) + 8);
                v81 = f.MemPool.BuffPtr - (char *)&f.MemPool - 8;
                v82 = 512 - v81;
                if ( v81 >= 0x200 )
                  v82 = 0i64;
                f.MemPool.BuffSize = v82;
              }
              if ( v80 )
                Scaleform::LongFormatter::LongFormatter(
                  (Scaleform::LongFormatter *)v80,
                  &f,
                  (int)(float)(v79 * 0.050000001));
              else
                v84 = 0i64;
              Scaleform::MsgFormat::Bind(&f, v84, 1);
            }
            while ( Scaleform::MsgFormat::NextFormatter(&f) );
            v8 = v153;
          }
          ++f.FirstArgNum;
          Scaleform::MsgFormat::FinishFormatD(&f);
          Scaleform::MsgFormat::~MsgFormat(&f);
        }
        v85 = (int)v70[6].__vftable;
        if ( v85 )
        {
          r.Type = tStrBuffer;
          r.SinkData.pStr = (Scaleform::String *)v2;
          v86 = v85 / 20;
          Scaleform::MsgFormat::MsgFormat(&f, &r);
          Scaleform::MsgFormat::Parse(&f, " VSPACE=\"{0}\"");
          if ( Scaleform::MsgFormat::NextFormatter(&f) )
          {
            do
            {
              if ( f.MemPool.BuffSize < 0x60 )
              {
                v90 = f.MemPool.pHeap;
                if ( !f.MemPool.pHeap )
                  v90 = Scaleform::Memory::pGlobalHeap;
                v87 = (char *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64, __int64))v90->Alloc)(
                                v90,
                                96i64,
                                8i64);
              }
              else
              {
                v87 = f.MemPool.BuffPtr;
                f.MemPool.BuffPtr = (char *)(((unsigned __int64)(f.MemPool.BuffPtr + 95) & 0xFFFFFFFFFFFFFFF8ui64) + 8);
                v88 = f.MemPool.BuffPtr - (char *)&f.MemPool - 8;
                v89 = 512 - v88;
                if ( v88 >= 0x200 )
                  v89 = 0i64;
                f.MemPool.BuffSize = v89;
              }
              if ( v87 )
                Scaleform::LongFormatter::LongFormatter((Scaleform::LongFormatter *)v87, &f, v86);
              else
                v91 = 0i64;
              Scaleform::MsgFormat::Bind(&f, v91, 1);
            }
            while ( Scaleform::MsgFormat::NextFormatter(&f) );
            v71 = fmt;
          }
          ++f.FirstArgNum;
          Scaleform::MsgFormat::FinishFormatD(&f);
          Scaleform::MsgFormat::~MsgFormat(&f);
        }
        v92 = HIDWORD(v70[6].__vftable);
        if ( v92 )
        {
          r.Type = tStrBuffer;
          r.SinkData.pStr = (Scaleform::String *)v2;
          v93 = v92 / 20;
          Scaleform::MsgFormat::MsgFormat(&f, &r);
          Scaleform::MsgFormat::Parse(&f, " HSPACE=\"{0}\"");
          if ( Scaleform::MsgFormat::NextFormatter(&f) )
          {
            do
            {
              if ( f.MemPool.BuffSize < 0x60 )
              {
                v97 = f.MemPool.pHeap;
                if ( !f.MemPool.pHeap )
                  v97 = Scaleform::Memory::pGlobalHeap;
                v94 = (char *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64, __int64))v97->Alloc)(
                                v97,
                                96i64,
                                8i64);
              }
              else
              {
                v94 = f.MemPool.BuffPtr;
                f.MemPool.BuffPtr = (char *)(((unsigned __int64)(f.MemPool.BuffPtr + 95) & 0xFFFFFFFFFFFFFFF8ui64) + 8);
                v95 = f.MemPool.BuffPtr - (char *)&f.MemPool - 8;
                v96 = 512 - v95;
                if ( v95 >= 0x200 )
                  v96 = 0i64;
                f.MemPool.BuffSize = v96;
              }
              if ( v94 )
                Scaleform::LongFormatter::LongFormatter((Scaleform::LongFormatter *)v94, &f, v93);
              else
                v98 = 0i64;
              Scaleform::MsgFormat::Bind(&f, v98, 1);
            }
            while ( Scaleform::MsgFormat::NextFormatter(&f) );
            v8 = v153;
          }
          ++f.FirstArgNum;
          Scaleform::MsgFormat::FinishFormatD(&f);
          Scaleform::MsgFormat::~MsgFormat(&f);
        }
        if ( (*(_QWORD *)(*(_QWORD *)&v70[5].RefCount & 0xFFFFFFFFFFFFFFFCui64) & 0x7FFFFFFFFFFFFFFFi64) != 0 )
        {
          r.Type = tStrBuffer;
          r.SinkData.pStr = (Scaleform::String *)v2;
          Scaleform::MsgFormat::MsgFormat(&f, &r);
          Scaleform::MsgFormat::Parse(&f, " ID=\"{0}\"");
          Scaleform::MsgFormat::FormatD1<Scaleform::StringLH>(&f, (const Scaleform::StringLH *)&v70[5].RefCount);
          Scaleform::MsgFormat::FinishFormatD(&f);
          Scaleform::MsgFormat::~MsgFormat(&f);
        }
        Scaleform::StringBuffer::AppendString(v2, " ALIGN=\"", -1i64);
        if ( *((_BYTE *)&v70[6].RefCount + 4) )
        {
          if ( *((_BYTE *)&v70[6].RefCount + 4) != 1 )
          {
            if ( *((_BYTE *)&v70[6].RefCount + 4) == 2 )
            {
              v99 = "left";
              goto LABEL_210;
            }
LABEL_211:
            Scaleform::StringBuffer::AppendString(v2, "\">", -1i64);
            if ( (v71->PresentMask & 0x100) != 0 && Scaleform::String::GetLength(&v71->Url) )
              Scaleform::StringBuffer::AppendString(v2, "</A>", -1i64);
            Scaleform::RefCountNTSImpl::Release(v70);
            v100 = v147;
LABEL_345:
            v58 = v150;
            goto LABEL_346;
          }
          v99 = "right";
        }
        else
        {
          v99 = "baseline";
        }
LABEL_210:
        Scaleform::StringBuffer::AppendString(v2, v99, -1i64);
        goto LABEL_211;
      }
      v16 = v57 == 0;
      v101 = fmt;
      if ( v16 )
        break;
      if ( v61 && !Scaleform::Render::Text::TextFormat::IsHTMLFontTagSame(v61, fmt) )
      {
        v102 = v151;
        Scaleform::StringBuffer::AppendString(v151, "</FONT>", -1i64);
LABEL_220:
        Scaleform::StringBuffer::AppendString(v102, "<FONT", -1i64);
        if ( (v101->PresentMask & 4) != 0 )
        {
          r.Type = tStrBuffer;
          r.SinkData.pStr = (Scaleform::String *)v102;
          FontList = Scaleform::Render::Text::TextFormat::GetFontList(v101);
          Scaleform::MsgFormat::MsgFormat(&f, &r);
          Scaleform::MsgFormat::Parse(&f, " FACE=\"{0}\"");
          Scaleform::MsgFormat::FormatD1<Scaleform::StringLH>(&f, (const Scaleform::StringLH *)FontList);
          Scaleform::MsgFormat::FinishFormatD(&f);
          Scaleform::MsgFormat::~MsgFormat(&f);
          v101 = fmt;
        }
        if ( (v101->PresentMask & 8) != 0 )
        {
          FontSize = v101->FontSize;
          r.Type = tStrBuffer;
          r.SinkData.pStr = (Scaleform::String *)v102;
          v105 = (int)(float)((float)FontSize * 0.050000001);
          Scaleform::MsgFormat::MsgFormat(&f, &r);
          Scaleform::MsgFormat::Parse(&f, " SIZE=\"{0}\"");
          if ( Scaleform::MsgFormat::NextFormatter(&f) )
          {
            do
            {
              if ( f.MemPool.BuffSize < 0x60 )
              {
                v109 = f.MemPool.pHeap;
                if ( !f.MemPool.pHeap )
                  v109 = Scaleform::Memory::pGlobalHeap;
                v106 = (char *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64, __int64))v109->Alloc)(
                                 v109,
                                 96i64,
                                 8i64);
              }
              else
              {
                v106 = f.MemPool.BuffPtr;
                f.MemPool.BuffPtr = (char *)(((unsigned __int64)(f.MemPool.BuffPtr + 95) & 0xFFFFFFFFFFFFFFF8ui64) + 8);
                v107 = f.MemPool.BuffPtr - (char *)&f.MemPool - 8;
                v108 = 512 - v107;
                if ( v107 >= 0x200 )
                  v108 = 0i64;
                f.MemPool.BuffSize = v108;
              }
              if ( v106 )
                Scaleform::LongFormatter::LongFormatter((Scaleform::LongFormatter *)v106, &f, v105);
              else
                v110 = 0i64;
              Scaleform::MsgFormat::Bind(&f, v110, 1);
            }
            while ( Scaleform::MsgFormat::NextFormatter(&f) );
            v8 = v153;
          }
          ++f.FirstArgNum;
          Scaleform::MsgFormat::FinishFormatD(&f);
          Scaleform::MsgFormat::~MsgFormat(&f);
          v101 = fmt;
        }
        if ( (v101->PresentMask & 1) != 0 )
        {
          ColorV = v101->ColorV;
          r.Type = tStrBuffer;
          v112 = ColorV & 0xFFFFFF;
          r.SinkData.pStr = (Scaleform::String *)v102;
          Scaleform::MsgFormat::MsgFormat(&f, &r);
          Scaleform::MsgFormat::Parse(&f, " COLOR=\"#{0:X:.6}\"");
          if ( Scaleform::MsgFormat::NextFormatter(&f) )
          {
            do
            {
              if ( f.MemPool.BuffSize < 0x60 )
              {
                v116 = f.MemPool.pHeap;
                if ( !f.MemPool.pHeap )
                  v116 = Scaleform::Memory::pGlobalHeap;
                v113 = (char *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64, __int64))v116->Alloc)(
                                 v116,
                                 96i64,
                                 8i64);
              }
              else
              {
                v113 = f.MemPool.BuffPtr;
                f.MemPool.BuffPtr = (char *)(((unsigned __int64)(f.MemPool.BuffPtr + 95) & 0xFFFFFFFFFFFFFFF8ui64) + 8);
                v114 = f.MemPool.BuffPtr - (char *)&f.MemPool - 8;
                v115 = 512 - v114;
                if ( v114 >= 0x200 )
                  v115 = 0i64;
                f.MemPool.BuffSize = v115;
              }
              if ( v113 )
                Scaleform::LongFormatter::LongFormatter((Scaleform::LongFormatter *)v113, &f, v112);
              else
                v117 = 0i64;
              Scaleform::MsgFormat::Bind(&f, v117, 1);
            }
            while ( Scaleform::MsgFormat::NextFormatter(&f) );
            v8 = v153;
          }
          ++f.FirstArgNum;
          Scaleform::MsgFormat::FinishFormatD(&f);
          Scaleform::MsgFormat::~MsgFormat(&f);
          v101 = fmt;
        }
        if ( (v101->PresentMask & 2) != 0 )
        {
          v118 = v101->LetterSpacing * 0.050000001;
          r.Type = tStrBuffer;
          r.SinkData.pStr = (Scaleform::String *)v102;
          Scaleform::MsgFormat::MsgFormat(&f, &r);
          Scaleform::MsgFormat::Parse(&f, " LETTERSPACING=\"{0}\"");
          if ( Scaleform::MsgFormat::NextFormatter(&f) )
          {
            do
            {
              if ( f.MemPool.BuffSize < 0x1A8 )
              {
                v122 = f.MemPool.pHeap;
                if ( !f.MemPool.pHeap )
                  v122 = Scaleform::Memory::pGlobalHeap;
                v119 = (char *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64, __int64))v122->Alloc)(
                                 v122,
                                 424i64,
                                 8i64);
              }
              else
              {
                v119 = f.MemPool.BuffPtr;
                f.MemPool.BuffPtr = (char *)(((unsigned __int64)(f.MemPool.BuffPtr + 423) & 0xFFFFFFFFFFFFFFF8ui64) + 8);
                v120 = f.MemPool.BuffPtr - (char *)&f.MemPool - 8;
                v121 = 512 - v120;
                if ( v120 >= 0x200 )
                  v121 = 0i64;
                f.MemPool.BuffSize = v121;
              }
              if ( v119 )
                Scaleform::DoubleFormatter::DoubleFormatter((Scaleform::DoubleFormatter *)v119, &f, v118);
              else
                v123 = 0i64;
              Scaleform::MsgFormat::Bind(&f, v123, 1);
            }
            while ( Scaleform::MsgFormat::NextFormatter(&f) );
            v8 = v153;
          }
          ++f.FirstArgNum;
          Scaleform::MsgFormat::FinishFormatD(&f);
          Scaleform::MsgFormat::~MsgFormat(&f);
        }
        if ( (v101->PresentMask & 0x400) != 0 )
        {
          ColorV_high = HIBYTE(v101->ColorV);
          r.Type = tStrBuffer;
          r.SinkData.pStr = (Scaleform::String *)v102;
          Scaleform::MsgFormat::MsgFormat(&f, &r);
          Scaleform::MsgFormat::Parse(&f, " ALPHA=\"#{0:X:.2}\"");
          if ( Scaleform::MsgFormat::NextFormatter(&f) )
          {
            do
            {
              if ( f.MemPool.BuffSize < 0x60 )
              {
                v128 = f.MemPool.pHeap;
                if ( !f.MemPool.pHeap )
                  v128 = Scaleform::Memory::pGlobalHeap;
                v125 = (char *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64, __int64))v128->Alloc)(
                                 v128,
                                 96i64,
                                 8i64);
              }
              else
              {
                v125 = f.MemPool.BuffPtr;
                f.MemPool.BuffPtr = (char *)(((unsigned __int64)(f.MemPool.BuffPtr + 95) & 0xFFFFFFFFFFFFFFF8ui64) + 8);
                v126 = f.MemPool.BuffPtr - (char *)&f.MemPool - 8;
                v127 = 512 - v126;
                if ( v126 >= 0x200 )
                  v127 = 0i64;
                f.MemPool.BuffSize = v127;
              }
              if ( v125 )
                Scaleform::LongFormatter::LongFormatter((Scaleform::LongFormatter *)v125, &f, ColorV_high);
              else
                v129 = 0i64;
              Scaleform::MsgFormat::Bind(&f, v129, 1);
            }
            while ( Scaleform::MsgFormat::NextFormatter(&f) );
            v8 = v153;
          }
          ++f.FirstArgNum;
          Scaleform::MsgFormat::FinishFormatD(&f);
          Scaleform::MsgFormat::~MsgFormat(&f);
          v101 = fmt;
        }
        v130 = (v101->FormatFlags & 8) != 0;
        r.Type = tStrBuffer;
        r.SinkData.pStr = (Scaleform::String *)v102;
        Scaleform::MsgFormat::MsgFormat(&f, &r);
        Scaleform::MsgFormat::Parse(&f, " KERNING=\"{0:sw:1:0}\"");
        if ( Scaleform::MsgFormat::NextFormatter(&f) )
        {
          do
          {
            if ( f.MemPool.BuffSize < 0x30 )
            {
              v134 = f.MemPool.pHeap;
              if ( !f.MemPool.pHeap )
                v134 = Scaleform::Memory::pGlobalHeap;
              v131 = (char *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64, __int64))v134->Alloc)(
                               v134,
                               48i64,
                               8i64);
            }
            else
            {
              v131 = f.MemPool.BuffPtr;
              f.MemPool.BuffPtr = (char *)(((unsigned __int64)(f.MemPool.BuffPtr + 47) & 0xFFFFFFFFFFFFFFF8ui64) + 8);
              v132 = f.MemPool.BuffPtr - (char *)&f.MemPool - 8;
              v133 = 512 - v132;
              if ( v132 >= 0x200 )
                v133 = 0i64;
              f.MemPool.BuffSize = v133;
            }
            if ( v131 )
              Scaleform::BoolFormatter::BoolFormatter((Scaleform::BoolFormatter *)v131, &f, v130);
            else
              v135 = 0i64;
            Scaleform::MsgFormat::Bind(&f, v135, 1);
          }
          while ( Scaleform::MsgFormat::NextFormatter(&f) );
          v8 = v153;
        }
        ++f.FirstArgNum;
        Scaleform::MsgFormat::FinishFormatD(&f);
        Scaleform::MsgFormat::~MsgFormat(&f);
        Scaleform::StringBuffer::AppendString(v102, ">", -1i64);
        v101 = fmt;
        v100 = 1;
        v147 = 1;
        goto LABEL_297;
      }
      v100 = v147;
LABEL_297:
      if ( (v101->PresentMask & 0x100) != 0 && Scaleform::String::GetLength(&v101->Url) )
      {
        r.SinkData.pStr = (Scaleform::String *)v151;
        r.Type = tStrBuffer;
        Scaleform::MsgFormat::MsgFormat(&f, &r);
        Scaleform::MsgFormat::Parse(&f, "<A HREF=\"{0}\">");
        Scaleform::MsgFormat::FormatD1<Scaleform::StringLH>(&f, (const Scaleform::StringLH *)&v101->Url);
        Scaleform::MsgFormat::FinishFormatD(&f);
        Scaleform::MsgFormat::~MsgFormat(&f);
      }
      if ( (v101->FormatFlags & 1) != 0 )
        Scaleform::StringBuffer::AppendString(v151, "<B>", -1i64);
      if ( (v101->FormatFlags & 2) != 0 )
        Scaleform::StringBuffer::AppendString(v151, "<I>", -1i64);
      if ( (v101->FormatFlags & 4) != 0 )
        Scaleform::StringBuffer::AppendString(v151, "<U>", -1i64);
      ++v101->RefCount;
      if ( v61 )
      {
        v16 = v61->RefCount-- == 1;
        if ( v16 )
        {
          Scaleform::Render::Text::TextFormat::~TextFormat(v61);
          Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v61);
        }
      }
      v61 = v101;
LABEL_319:
      v137 = 0i64;
      if ( Length )
      {
        v138 = v151;
        v139 = v160;
        do
        {
          v140 = 10;
          v141 = v66[v137];
          if ( ((__int64)v139[4].__vftable & 2) != 0 )
            v140 = 13;
          if ( v141 != v140 && v141 )
          {
            switch ( v141 )
            {
              case 0x22u:
                Scaleform::StringBuffer::AppendString(v138, aQuo, -1i64);
                break;
              case 0x26u:
                Scaleform::StringBuffer::AppendString(v138, aAmp_0, -1i64);
                break;
              case 0x27u:
                Scaleform::StringBuffer::AppendString(v138, "&apos;", -1i64);
                break;
              case 0x3Cu:
                Scaleform::StringBuffer::AppendString(v138, "&lt;", -1i64);
                break;
              case 0x3Eu:
                Scaleform::StringBuffer::AppendString(v138, "&gt;", -1i64);
                break;
              case 0xA0u:
                Scaleform::StringBuffer::AppendString(v138, "&nbsp;", -1i64);
                break;
              default:
                Scaleform::StringBuffer::AppendChar(v138, v141);
                break;
            }
          }
          ++v137;
        }
        while ( v137 < Length );
        v6 = v161;
        v8 = v153;
        v100 = v147;
      }
      v58 = v150;
      v2 = v151;
      if ( v150 )
      {
        if ( (v150->FormatFlags & 4) != 0 )
        {
          Scaleform::StringBuffer::AppendString(v151, "</U>", -1i64);
          v58 = v150;
        }
        if ( (v58->FormatFlags & 2) != 0 )
        {
          Scaleform::StringBuffer::AppendString(v2, "</I>", -1i64);
          v58 = v150;
        }
        if ( (v58->FormatFlags & 1) != 0 )
        {
          Scaleform::StringBuffer::AppendString(v2, "</B>", -1i64);
          v58 = v150;
        }
        if ( (v58->PresentMask & 0x100) != 0 )
        {
          if ( Scaleform::String::GetLength(&v58->Url) )
            Scaleform::StringBuffer::AppendString(v2, "</A>", -1i64);
          goto LABEL_345;
        }
      }
LABEL_346:
      v59 = v162;
      pPara = v163;
      if ( v162 < 0 || (v142 = v163->FormatInfo.Ranges.Data.Size, v162 >= v142) )
      {
        v60 = v163->Text.Size;
        v157 = v60;
      }
      else
      {
        v143 = v163->FormatInfo.Ranges.Data.Data;
        if ( v157 >= v143[v162].Index )
        {
          v60 = v143[v162].Length + v157;
          v157 = v60;
          if ( v162 < (__int64)v142 )
            v59 = ++v162;
        }
        else
        {
          v60 = v143[v162].Index;
          v157 = v60;
        }
      }
      if ( v60 >= v163->Text.Size )
      {
        if ( v100 )
          Scaleform::StringBuffer::AppendString(v2, "</FONT>", -1i64);
LABEL_356:
        Scaleform::StringBuffer::AppendString(v2, "</", -1i64);
        v144 = "P";
        if ( (*(_WORD *)(v164 + 34) & 0x8080) == 0x8080 )
          v144 = "LI";
        Scaleform::StringBuffer::AppendString(v2, v144, -1i64);
        Scaleform::StringBuffer::AppendString(v2, "></TEXTFORMAT>", -1i64);
        if ( v61 )
        {
          v16 = v61->RefCount-- == 1;
          if ( v16 )
          {
            Scaleform::Render::Text::TextFormat::~TextFormat(v61);
            Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v61);
          }
        }
        v145 = v150;
        if ( v150 )
        {
          v16 = v150->RefCount-- == 1;
          if ( v16 )
          {
            Scaleform::Render::Text::TextFormat::~TextFormat(v145);
            Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v145);
          }
        }
        v7 = v154;
        p_Paragraphs = v156;
        v9 = v158;
        Size = v159;
LABEL_365:
        if ( v7 < (signed __int64)p_Paragraphs->Data.Size )
        {
          ++v7;
          goto LABEL_2;
        }
        goto LABEL_3;
      }
      v57 = v147;
    }
    v102 = v151;
    goto LABEL_220;
  }
  return v2;
}

Scaleform::Render::Text::Paragraph::FormatRunIterator *__fastcall Scaleform::Render::Text::Paragraph::GetIterator(
        Scaleform::Render::Text::Paragraph *this,
        Scaleform::Render::Text::Paragraph::FormatRunIterator *result)
{
  Scaleform::Render::Text::Paragraph::FormatRunIterator *v2; // rax

  result->PlaceHolder.pText = 0i64;
  result->PlaceHolder.Index = 0i64;
  result->PlaceHolder.Length = 0i64;
  result->PlaceHolder.pFormat.pObject = 0i64;
  result->pFormatInfo = &this->FormatInfo;
  result->FormatIterator.pArray = &this->FormatInfo;
  v2 = result;
  result->FormatIterator.Index = 0i64;
  result->pText = (const Scaleform::Render::Text::Paragraph::TextBuffer *)this;
  result->CurTextIndex = 0i64;
  return v2;
}

Scaleform::RangeDataArray<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>,Scaleform::ArrayLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> >,2,Scaleform::ArrayDefaultPolicy> >::ConstIterator *__fastcall Scaleform::RangeDataArray<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>,Scaleform::ArrayLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>>,2,Scaleform::ArrayDefaultPolicy>>::GetIteratorByNearestIndex(
        Scaleform::RangeDataArray<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>,Scaleform::ArrayLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> >,2,Scaleform::ArrayDefaultPolicy> > *this,
        Scaleform::RangeDataArray<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>,Scaleform::ArrayLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> >,2,Scaleform::ArrayDefaultPolicy> >::ConstIterator *result,
        __int64 index)
{
  __int64 NearestRangeIndex; // rdx
  unsigned __int64 Size; // rax
  Scaleform::RangeDataArray<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>,Scaleform::ArrayLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> >,2,Scaleform::ArrayDefaultPolicy> >::ConstIterator v8; // [rsp+20h] [rbp-18h]

  v8 = (Scaleform::RangeDataArray<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>,Scaleform::ArrayLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> >,2,Scaleform::ArrayDefaultPolicy> >::ConstIterator)(unsigned __int64)this;
  NearestRangeIndex = Scaleform::RangeDataArray<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>,Scaleform::ArrayLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>>,2,Scaleform::ArrayDefaultPolicy>>::FindNearestRangeIndex(
                        this,
                        index);
  *result = v8;
  if ( NearestRangeIndex >= 0 )
  {
    Size = this->Ranges.Data.Size;
    if ( NearestRangeIndex < Size )
      result->Index += NearestRangeIndex;
    else
      result->Index = Size - 1;
    return result;
  }
  else
  {
    result->Index = 0i64;
    return result;
  }
}

Scaleform::Render::Text::Paragraph *__fastcall Scaleform::Render::Text::StyledText::GetLastParagraph(
        Scaleform::Render::Text::StyledText *this)
{
  signed __int64 v1; // r8

  v1 = this->Paragraphs.Data.Size - 1;
  if ( v1 < 0 || v1 >= SLODWORD(this->Paragraphs.Data.Size) )
    return 0i64;
  else
    return this->Paragraphs.Data.Data[v1].pPara;
}

unsigned __int64 __fastcall Scaleform::Render::Text::Paragraph::GetLength(Scaleform::Render::Text::Paragraph *this)
{
  unsigned __int64 result; // rax
  unsigned __int64 v2; // rdx
  wchar_t *v3; // rcx

  result = this->Text.Size;
  if ( result )
  {
    v2 = result - 1;
    if ( this->Text.pText && v2 < result )
      v3 = &this->Text.pText[v2];
    else
      v3 = 0i64;
    if ( !*v3 )
      --result;
  }
  return result;
}

__int64 __fastcall Scaleform::Render::Text::StyledText::GetLength(Scaleform::Render::Text::StyledText *this)
{
  __int64 v1; // r9
  Scaleform::ArrayLH<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,2,Scaleform::ArrayDefaultPolicy> *p_Paragraphs; // rdx
  __int64 v3; // rcx
  Scaleform::Render::Text::Paragraph *pPara; // r10
  unsigned __int64 Size; // rax
  unsigned __int64 v6; // r8
  wchar_t *v7; // r8

  v1 = 0i64;
  p_Paragraphs = &this->Paragraphs;
  v3 = 0i64;
  while ( p_Paragraphs && v3 >= 0 && v3 < SLODWORD(p_Paragraphs->Data.Size) )
  {
    pPara = p_Paragraphs->Data.Data[v3].pPara;
    Size = pPara->Text.Size;
    if ( Size )
    {
      v6 = Size - 1;
      if ( pPara->Text.pText && v6 < Size )
        v7 = &pPara->Text.pText[v6];
      else
        v7 = 0i64;
      if ( !*v7 )
        --Size;
    }
    v1 += Size;
    if ( v3 < (signed __int64)p_Paragraphs->Data.Size )
      ++v3;
  }
  return v1;
}

Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,Scaleform::AllocatorLH<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,2>,Scaleform::ArrayDefaultPolicy> >::Iterator *__fastcall Scaleform::Render::Text::StyledText::GetParagraphByIndex(
        Scaleform::Render::Text::StyledText *this,
        Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,Scaleform::AllocatorLH<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,2>,Scaleform::ArrayDefaultPolicy> >::Iterator *result,
        unsigned __int64 index,
        unsigned __int64 *pindexInParagraph)
{
  __int64 Size; // r10
  Scaleform::ArrayLH<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,2,Scaleform::ArrayDefaultPolicy> *p_Paragraphs; // rsi
  unsigned __int64 v6; // rbx
  unsigned __int64 v10; // r9
  Scaleform::Render::Text::Paragraph *pPara; // rax
  unsigned __int64 StartIndex; // r8
  Scaleform::Render::Text::Paragraph *v13; // rax
  unsigned __int64 v14; // rdx
  Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,Scaleform::AllocatorLH<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,2>,Scaleform::ArrayDefaultPolicy> >::Iterator *v15; // rax
  Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,Scaleform::AllocatorLH<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,2>,Scaleform::ArrayDefaultPolicy> >::Iterator v16; // [rsp+0h] [rbp-28h]

  Size = this->Paragraphs.Data.Size;
  p_Paragraphs = &this->Paragraphs;
  v6 = 0i64;
  while ( Size > 0 )
  {
    v10 = (Size >> 1) + v6;
    pPara = p_Paragraphs->Data.Data[v10].pPara;
    StartIndex = pPara->StartIndex;
    if ( index >= StartIndex && index < StartIndex + pPara->Text.Size || (int)StartIndex - (int)index >= 0 )
    {
      Size >>= 1;
    }
    else
    {
      v6 = v10 + 1;
      Size += -1 - (Size >> 1);
    }
  }
  if ( v6 < this->Paragraphs.Data.Size
    && ((v13 = p_Paragraphs->Data.Data[v6].pPara, v14 = v13->StartIndex, index >= v14) && index < v14 + v13->Text.Size
     || (_DWORD)v14 == (_DWORD)index) )
  {
    v16.CurIndex = (int)v6;
    if ( pindexInParagraph )
      *pindexInParagraph = index - p_Paragraphs->Data.Data[(int)v6].pPara->StartIndex;
    v15 = result;
    v16.pArray = &this->Paragraphs;
    *result = v16;
  }
  else
  {
    v15 = result;
    result->pArray = 0i64;
    result->CurIndex = -1i64;
  }
  return v15;
}

wchar_t *__fastcall Scaleform::Render::Text::Paragraph::CharactersIterator::GetRemainingTextPtr(
        Scaleform::Render::Text::Paragraph::CharactersIterator *this,
        unsigned __int64 *plen)
{
  const Scaleform::Render::Text::Paragraph::TextBuffer *pText; // rax
  unsigned __int64 CurTextIndex; // r8
  unsigned __int64 Size; // rax

  pText = this->pText;
  if ( pText && (CurTextIndex = this->CurTextIndex, Size = pText->Size, CurTextIndex < Size) )
  {
    if ( plen )
      *plen = Size - CurTextIndex;
    return &this->pText->pText[this->CurTextIndex];
  }
  else
  {
    *plen = 0i64;
    return 0i64;
  }
}

Scaleform::String *__fastcall Scaleform::Render::Text::StyledText::GetText(
        Scaleform::Render::Text::StyledText *this,
        Scaleform::String *result)
{
  Scaleform::String::String(result);
  Scaleform::Render::Text::StyledText::GetText(this, result);
  return result;
}

Scaleform::String *__fastcall Scaleform::Render::Text::StyledText::GetText(
        Scaleform::Render::Text::StyledText *this,
        Scaleform::String *retStr)
{
  Scaleform::ArrayLH<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,2,Scaleform::ArrayDefaultPolicy> *p_Paragraphs; // rdi
  __int64 v5; // rbx
  Scaleform::Render::Text::Paragraph *pPara; // rcx
  unsigned __int64 Size; // r8
  const wchar_t *pText; // rdx
  unsigned __int64 v9; // rax
  const wchar_t *v10; // rax

  Scaleform::String::operator=(retStr, &pnewText);
  p_Paragraphs = &this->Paragraphs;
  v5 = 0i64;
  while ( p_Paragraphs && v5 >= 0 && v5 < SLODWORD(p_Paragraphs->Data.Size) )
  {
    pPara = p_Paragraphs->Data.Data[v5].pPara;
    Size = pPara->Text.Size;
    pText = pPara->Text.pText;
    if ( Size )
    {
      v9 = Size - 1;
      if ( pText && v9 < Size )
        v10 = &pText[v9];
      else
        v10 = 0i64;
      if ( !*v10 )
        --Size;
    }
    Scaleform::String::AppendString(retStr, pText, Size);
    if ( v5 < (signed __int64)p_Paragraphs->Data.Size )
      ++v5;
  }
  return retStr;
}

void __fastcall Scaleform::Render::Text::StyledText::GetText(
        Scaleform::Render::Text::StyledText *this,
        Scaleform::WStringBuffer *pBuffer)
{
  __int64 Length; // rax
  Scaleform::ArrayLH<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,2,Scaleform::ArrayDefaultPolicy> *p_Paragraphs; // rsi
  __int64 v6; // rdi
  __int64 v7; // rbp
  Scaleform::Render::Text::Paragraph *pPara; // rbx
  wchar_t *pText; // rdx
  unsigned __int64 Size; // rbx
  unsigned __int64 v11; // rax
  bool v12; // cf
  char *v13; // rax

  Length = Scaleform::Render::Text::StyledText::GetLength(this);
  Scaleform::WStringBuffer::Resize(pBuffer, Length + 1);
  p_Paragraphs = &this->Paragraphs;
  v6 = 0i64;
  v7 = 0i64;
  while ( p_Paragraphs && v6 >= 0 && v6 < SLODWORD(p_Paragraphs->Data.Size) )
  {
    pPara = p_Paragraphs->Data.Data[v6].pPara;
    pText = pPara->Text.pText;
    Size = pPara->Text.Size;
    if ( Size )
    {
      v11 = Size - 1;
      if ( !pText || (v12 = v11 < Size, v13 = (char *)&pText[v11], !v12) )
        v13 = 0i64;
      if ( !*(_WORD *)v13 )
        --Size;
    }
    memmove(&pBuffer->pText[v7], pText, 2 * Size);
    v7 += Size;
    if ( v6 < (signed __int64)p_Paragraphs->Data.Size )
      ++v6;
  }
  pBuffer->pText[v7] = 0;
}

void __fastcall Scaleform::Render::Text::StyledText::GetText(
        Scaleform::Render::Text::StyledText *this,
        Scaleform::WStringBuffer *pBuffer,
        unsigned __int64 startPos,
        unsigned __int64 endPos)
{
  unsigned __int64 Length; // rbp
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // r9
  __int64 v10; // r14
  Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,Scaleform::AllocatorLH<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,2>,Scaleform::ArrayDefaultPolicy> > *pArray; // rsi
  __int64 CurIndex; // rdi
  Scaleform::Render::Text::Paragraph *pPara; // rdx
  unsigned __int64 Size; // rbx
  unsigned __int64 v15; // rax
  bool v16; // cf
  wchar_t *v17; // rax
  unsigned __int64 v18; // rbx
  Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,Scaleform::AllocatorLH<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,2>,Scaleform::ArrayDefaultPolicy> >::Iterator result; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 pindexInParagraph; // [rsp+68h] [rbp+10h] BYREF

  Length = endPos;
  if ( endPos == -1i64 )
    Length = Scaleform::Render::Text::StyledText::GetLength(this);
  v8 = Length - startPos;
  Scaleform::WStringBuffer::Resize(pBuffer, v8 + 1);
  pindexInParagraph = 0i64;
  Scaleform::Render::Text::StyledText::GetParagraphByIndex(this, &result, startPos, &pindexInParagraph);
  v9 = pindexInParagraph;
  v10 = 0i64;
  pArray = result.pArray;
  CurIndex = result.CurIndex;
  while ( pArray && CurIndex >= 0 && CurIndex < SLODWORD(pArray->Data.Size) && v8 )
  {
    pPara = pArray->Data.Data[CurIndex].pPara;
    Size = pPara->Text.Size;
    if ( Size )
    {
      v15 = Size - 1;
      if ( !pPara->Text.pText || (v16 = v15 < Size, v17 = &pPara->Text.pText[v15], !v16) )
        v17 = 0i64;
      if ( !*v17 )
        --Size;
    }
    v18 = Size - v9;
    if ( v18 > v8 )
      v18 = v8;
    memmove(&pBuffer->pText[v10], &pPara->Text.pText[v9], 2 * v18);
    v10 += v18;
    v8 -= v18;
    v9 = 0i64;
    if ( CurIndex < (signed __int64)pArray->Data.Size )
      ++CurIndex;
  }
  pBuffer->pText[v10] = 0;
}

void __fastcall Scaleform::Render::Text::StyledText::GetTextAndParagraphFormat(
        Scaleform::Render::Text::StyledText *this,
        Scaleform::Render::Text::TextFormat *pdestTextFmt,
        Scaleform::Render::Text::ParagraphFormat *pdestParaFmt,
        unsigned __int64 startPos,
        unsigned __int64 endPos)
{
  Scaleform::Render::Text::ParagraphFormat *v5; // rdi
  Scaleform::Render::Text::TextFormat *v7; // rsi
  unsigned __int64 v8; // r14
  Scaleform::MemoryHeap *v9; // rax
  int v10; // er13
  __int64 CurIndex; // rdi
  unsigned __int64 v12; // r12
  Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,Scaleform::AllocatorLH<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,2>,Scaleform::ArrayDefaultPolicy> > *pArray; // r15
  Scaleform::Render::Text::Paragraph *pPara; // rsi
  unsigned __int64 Size; // rbx
  unsigned __int64 v16; // rax
  bool v17; // cf
  wchar_t *v18; // rax
  int v19; // eax
  unsigned __int64 v20; // r9
  Scaleform::Render::Text::Paragraph *v21; // rcx
  const Scaleform::Render::Text::TextFormat *v22; // rax
  Scaleform::Render::Text::TextFormat *v23; // rcx
  Scaleform::Render::Text::TextFormat *TextFormat; // rax
  const Scaleform::Render::Text::TextFormat *v25; // rax
  Scaleform::Render::Text::ParagraphFormat *pObject; // rcx
  int v27; // eax
  const Scaleform::Render::Text::ParagraphFormat *v28; // rax
  Scaleform::Render::Text::ParagraphFormat src; // [rsp+20h] [rbp-E0h] BYREF
  Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,Scaleform::AllocatorLH<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,2>,Scaleform::ArrayDefaultPolicy> >::Iterator result; // [rsp+48h] [rbp-B8h] BYREF
  Scaleform::Render::Text::TextFormat v31; // [rsp+58h] [rbp-A8h] BYREF
  Scaleform::Render::Text::TextFormat fmt; // [rsp+B0h] [rbp-50h] BYREF
  Scaleform::Render::Text::TextFormat v33; // [rsp+100h] [rbp+0h] BYREF
  unsigned __int64 pindexInParagraph; // [rsp+1A8h] [rbp+A8h] BYREF

  v5 = pdestParaFmt;
  v7 = pdestTextFmt;
  v8 = endPos - startPos;
  Scaleform::Render::Text::StyledText::GetParagraphByIndex(this, &result, startPos, &pindexInParagraph);
  v9 = Scaleform::Memory::pGlobalHeap->GetAllocHeapOrNULL(Scaleform::Memory::pGlobalHeap, this);
  Scaleform::Render::Text::TextFormat::TextFormat(&fmt, v9);
  src.RefCount = 1;
  src.pAllocator = 0i64;
  v10 = 0;
  memset(&src.pTabStops, 0, 20);
  LODWORD(endPos) = 0;
  if ( v8 )
  {
    CurIndex = result.CurIndex;
    v12 = pindexInParagraph;
    pArray = result.pArray;
    do
    {
      if ( !pArray || CurIndex < 0 || CurIndex >= SLODWORD(pArray->Data.Size) )
        break;
      pPara = pArray->Data.Data[CurIndex].pPara;
      Size = pPara->Text.Size;
      if ( Size )
      {
        v16 = Size - 1;
        if ( !pPara->Text.pText || (v17 = v16 < Size, v18 = &pPara->Text.pText[v16], !v17) )
          v18 = 0i64;
        if ( !*v18 )
          --Size;
      }
      if ( v8 < Size )
        Size = v8;
      if ( !Size )
        break;
      v19 = v10;
      v20 = Size + v12;
      ++v10;
      v21 = pArray->Data.Data[CurIndex].pPara;
      if ( v19 )
      {
        TextFormat = Scaleform::Render::Text::Paragraph::GetTextFormat(v21, &v33, v12, v20);
        v25 = Scaleform::Render::Text::TextFormat::Intersection(TextFormat, &v31, &fmt);
        Scaleform::Render::Text::TextFormat::operator=(&fmt, v25);
        Scaleform::Render::Text::TextFormat::~TextFormat(&v31);
        v23 = &v33;
      }
      else
      {
        v22 = Scaleform::Render::Text::Paragraph::GetTextFormat(v21, &v31, v12, v20);
        Scaleform::Render::Text::TextFormat::operator=(&fmt, v22);
        v23 = &v31;
      }
      Scaleform::Render::Text::TextFormat::~TextFormat(v23);
      if ( !v12 )
      {
        pObject = pPara->pFormat.pObject;
        if ( pObject )
        {
          v27 = endPos;
          LODWORD(endPos) = endPos + 1;
          if ( v27 )
          {
            v28 = Scaleform::Render::Text::ParagraphFormat::Intersection(
                    pObject,
                    (Scaleform::Render::Text::ParagraphFormat *)&v31,
                    &src);
            Scaleform::Render::Text::ParagraphFormat::operator=(&src, v28);
            Scaleform::Render::Text::ParagraphFormat::~ParagraphFormat((Scaleform::Render::Text::ParagraphFormat *)&v31);
          }
          else
          {
            Scaleform::Render::Text::ParagraphFormat::operator=(&src, pObject);
          }
        }
      }
      v8 -= Size;
      if ( CurIndex < (signed __int64)pArray->Data.Size )
        ++CurIndex;
    }
    while ( v8 );
    v5 = pdestParaFmt;
    v7 = pdestTextFmt;
  }
  if ( v7 )
    Scaleform::Render::Text::TextFormat::operator=(v7, &fmt);
  if ( v5 )
    Scaleform::Render::Text::ParagraphFormat::operator=(v5, &src);
  Scaleform::Render::Text::ParagraphFormat::~ParagraphFormat(&src);
  Scaleform::Render::Text::TextFormat::~TextFormat(&fmt);
}

__int64 __fastcall Scaleform::Render::Text::StyledText::GetTextAndParagraphFormat(
        Scaleform::Render::Text::StyledText *this,
        const Scaleform::Render::Text::TextFormat **ppdestTextFmt,
        const Scaleform::Render::Text::ParagraphFormat **ppdestParaFmt,
        unsigned __int64 pos)
{
  Scaleform::Render::Text::ParagraphFormat *v7; // r9
  unsigned __int8 v8; // r10
  Scaleform::Render::Text::Paragraph *pPara; // rbx
  Scaleform::Render::Text::TextFormat *pObject; // rax
  __int64 v11; // rax
  Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,Scaleform::AllocatorLH<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,2>,Scaleform::ArrayDefaultPolicy> >::Iterator result; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int64 pindexInParagraph; // [rsp+48h] [rbp+10h] BYREF

  Scaleform::Render::Text::StyledText::GetParagraphByIndex(this, &result, pos, &pindexInParagraph);
  v7 = 0i64;
  v8 = 0;
  if ( !result.pArray
    || result.CurIndex < 0
    || result.CurIndex >= SLODWORD(result.pArray->Data.Size)
    || (pPara = result.pArray->Data.Data[result.CurIndex].pPara,
        pObject = Scaleform::Render::Text::Paragraph::GetTextFormatPtr(pPara, pindexInParagraph),
        v7 = pPara->pFormat.pObject,
        v8 = 1,
        !pObject) )
  {
    pObject = this->pDefaultTextFormat.pObject;
  }
  if ( !v7 )
    v7 = this->pDefaultParagraphFormat.pObject;
  if ( ppdestTextFmt )
    *ppdestTextFmt = pObject;
  v11 = v8;
  if ( ppdestParaFmt )
    *ppdestParaFmt = v7;
  return v11;
}

Scaleform::Render::Text::TextFormat *__fastcall Scaleform::Render::Text::Paragraph::GetTextFormat(
        Scaleform::Render::Text::Paragraph *this,
        Scaleform::Render::Text::TextFormat *result,
        unsigned __int64 startPos,
        unsigned __int64 endPos)
{
  Scaleform::Render::Text::TextFormat *v5; // r15
  unsigned __int64 v6; // r12
  unsigned __int64 v8; // r13
  __int64 v9; // r13
  Scaleform::MemoryHeap *v10; // rax
  Scaleform::Render::Text::TextFormat *pObject; // rbx
  int v12; // er8
  __int64 Index; // rdi
  unsigned __int64 CurTextIndex; // rbp
  const Scaleform::Render::Text::Paragraph::TextBuffer *pText; // r14
  unsigned __int64 Size; // rsi
  Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> > *v17; // rdx
  unsigned __int64 Length; // rsi
  __int64 v19; // r15
  bool v20; // zf
  Scaleform::Render::Text::TextFormat *v21; // r14
  const Scaleform::Render::Text::TextFormat *v22; // rax
  unsigned __int64 v23; // rdx
  Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> > *v24; // r8
  Scaleform::Render::Text::Paragraph::FormatRunIterator v26; // [rsp+20h] [rbp-128h] BYREF
  Scaleform::Render::Text::TextFormat fmt; // [rsp+70h] [rbp-D8h] BYREF
  Scaleform::Render::Text::TextFormat resulta; // [rsp+C0h] [rbp-88h] BYREF
  int v29; // [rsp+150h] [rbp+8h]

  v5 = result;
  v6 = startPos;
  Scaleform::Render::Text::Paragraph::FormatRunIterator::FormatRunIterator(
    &v26,
    &this->FormatInfo,
    &this->Text,
    startPos);
  v8 = v6;
  if ( endPos >= v6 )
    v8 = endPos;
  if ( v8 == -1i64 )
    v9 = 0x7FFFFFFFFFFFFFFFi64;
  else
    v9 = v8 - v6;
  v10 = Scaleform::Memory::pGlobalHeap->GetAllocHeapOrNULL(Scaleform::Memory::pGlobalHeap, this);
  Scaleform::Render::Text::TextFormat::TextFormat(&fmt, v10);
  pObject = v26.PlaceHolder.pFormat.pObject;
  v12 = 0;
  v29 = 0;
  if ( v9 > 0 )
  {
    Index = v26.FormatIterator.Index;
    CurTextIndex = v26.CurTextIndex;
    pText = v26.pText;
    do
    {
      Size = pText->Size;
      if ( CurTextIndex >= Size )
        break;
      if ( Index >= 0
        && Index < v26.FormatIterator.pArray->Ranges.Data.Size
        && (Size = v26.FormatIterator.pArray->Ranges.Data.Data[Index].Index,
            v17 = &v26.FormatIterator.pArray->Ranges.Data.Data[Index],
            CurTextIndex >= Size) )
      {
        v21 = v17->Data.pObject;
        v19 = v26.FormatIterator.pArray->Ranges.Data.Data[Index].Index;
        Length = v17->Length;
        if ( v21 )
          ++v21->RefCount;
        if ( pObject )
        {
          v20 = pObject->RefCount-- == 1;
          if ( v20 )
          {
            Scaleform::Render::Text::TextFormat::~TextFormat(pObject);
            Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, pObject);
            v12 = v29;
          }
        }
        pObject = v21;
        if ( v21 )
        {
          v29 = v12 + 1;
          if ( v12 )
          {
            v22 = Scaleform::Render::Text::TextFormat::Intersection(v21, &resulta, &fmt);
            Scaleform::Render::Text::TextFormat::operator=(&fmt, v22);
            Scaleform::Render::Text::TextFormat::~TextFormat(&resulta);
          }
          else
          {
            Scaleform::Render::Text::TextFormat::operator=(&fmt, v21);
          }
        }
        pText = v26.pText;
      }
      else
      {
        Length = Size - CurTextIndex;
        v19 = CurTextIndex;
        if ( pObject )
        {
          v20 = pObject->RefCount-- == 1;
          if ( v20 )
          {
            Scaleform::Render::Text::TextFormat::~TextFormat(pObject);
            Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, pObject);
          }
        }
        pObject = 0i64;
      }
      v9 += v6 - Length - v19;
      v6 = Length + v19;
      if ( Index < 0 || (v23 = v26.FormatIterator.pArray->Ranges.Data.Size, Index >= v23) )
      {
        CurTextIndex = pText->Size;
      }
      else
      {
        v24 = &v26.FormatIterator.pArray->Ranges.Data.Data[Index];
        if ( CurTextIndex >= v24->Index )
        {
          CurTextIndex += v24->Length;
          if ( Index < (__int64)v23 )
            ++Index;
        }
        else
        {
          CurTextIndex = v24->Index;
        }
      }
      v12 = v29;
    }
    while ( v9 > 0 );
    v5 = result;
  }
  Scaleform::Render::Text::TextFormat::TextFormat(v5, &fmt, 0i64);
  Scaleform::Render::Text::TextFormat::~TextFormat(&fmt);
  if ( pObject )
  {
    v20 = pObject->RefCount-- == 1;
    if ( v20 )
    {
      Scaleform::Render::Text::TextFormat::~TextFormat(pObject);
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, pObject);
    }
  }
  return v5;
}

Scaleform::Render::Text::TextFormat *__fastcall Scaleform::Render::Text::Paragraph::GetTextFormatPtr(
        Scaleform::Render::Text::Paragraph *this,
        unsigned __int64 startPos)
{
  Scaleform::Render::Text::TextFormat *v2; // rdi
  unsigned __int64 Size; // r8
  wchar_t *pText; // rax
  Scaleform::Render::Text::Paragraph::StyledTextRun *v5; // rax
  Scaleform::Render::Text::TextFormat *pObject; // rbx
  Scaleform::Render::Text::TextFormat *v7; // rax
  Scaleform::Render::Text::TextFormat *v8; // rbx
  bool v9; // zf
  Scaleform::Render::Text::Paragraph::FormatRunIterator v11; // [rsp+30h] [rbp-58h] BYREF

  Scaleform::Render::Text::Paragraph::FormatRunIterator::FormatRunIterator(
    &v11,
    &this->FormatInfo,
    &this->Text,
    startPos);
  v2 = 0i64;
  Size = v11.pText->Size;
  if ( v11.CurTextIndex >= Size )
  {
    pObject = v11.PlaceHolder.pFormat.pObject;
    goto LABEL_14;
  }
  if ( v11.FormatIterator.Index < 0 || v11.FormatIterator.Index >= v11.FormatIterator.pArray->Ranges.Data.Size )
  {
    pText = v11.pText->pText;
  }
  else
  {
    Size = v11.FormatIterator.pArray->Ranges.Data.Data[v11.FormatIterator.Index].Index;
    pText = v11.pText->pText;
    if ( v11.CurTextIndex >= Size )
    {
      v5 = Scaleform::Render::Text::Paragraph::StyledTextRun::Set(
             &v11.PlaceHolder,
             &pText[Size],
             Size,
             v11.FormatIterator.pArray->Ranges.Data.Data[v11.FormatIterator.Index].Length,
             v11.FormatIterator.pArray->Ranges.Data.Data[v11.FormatIterator.Index].Data.pObject);
      pObject = v11.PlaceHolder.pFormat.pObject;
      v7 = v5->pFormat.pObject;
      if ( v7 )
        v2 = v7;
      goto LABEL_14;
    }
  }
  v8 = v11.PlaceHolder.pFormat.pObject;
  v11.PlaceHolder.Index = v11.CurTextIndex;
  v11.PlaceHolder.Length = Size - v11.CurTextIndex;
  v11.PlaceHolder.pText = &pText[v11.CurTextIndex];
  if ( v11.PlaceHolder.pFormat.pObject )
  {
    v9 = v11.PlaceHolder.pFormat.pObject->RefCount-- == 1;
    if ( v9 )
    {
      Scaleform::Render::Text::TextFormat::~TextFormat(v8);
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v8);
    }
  }
  pObject = 0i64;
  v11.PlaceHolder.pFormat.pObject = 0i64;
LABEL_14:
  if ( pObject )
  {
    v9 = pObject->RefCount-- == 1;
    if ( v9 )
    {
      Scaleform::Render::Text::TextFormat::~TextFormat(pObject);
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, pObject);
    }
  }
  return v2;
}

void __fastcall Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>>,Scaleform::AllocatorLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>>,2>,Scaleform::ArrayDefaultPolicy>>::InsertAt(
        Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> >,Scaleform::AllocatorLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> >,2>,Scaleform::ArrayDefaultPolicy> > *this,
        unsigned __int64 index,
        const Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> > *val)
{
  unsigned __int64 Size; // r15
  Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> > *v7; // rax
  __int64 v8; // rbx
  unsigned __int64 v9; // r8
  Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> > *v10; // rdx
  unsigned __int64 Length; // rcx
  Scaleform::Render::Text::TextFormat *pObject; // rax

  Size = this->Data.Size;
  Scaleform::ArrayDataBase<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>>,Scaleform::AllocatorLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>>,2>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
    &this->Data,
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
        v7->Index = 0i64;
        v7->Length = 0i64;
        v7->Data.pObject = 0i64;
      }
      ++v7;
      --v8;
    }
    while ( v8 );
  }
  v9 = this->Data.Size;
  if ( index < v9 - 1 )
    memmove(&this->Data.Data[index + 1], &this->Data.Data[index], 24 * (v9 - index) - 24);
  v10 = &this->Data.Data[index];
  if ( v10 )
  {
    Length = val->Length;
    v10->Index = val->Index;
    v10->Length = Length;
    pObject = val->Data.pObject;
    if ( pObject )
      ++pObject->RefCount;
    v10->Data.pObject = val->Data.pObject;
  }
}

void __fastcall Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,Scaleform::AllocatorLH<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,2>,Scaleform::ArrayDefaultPolicy>>::InsertAt(
        Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,Scaleform::AllocatorLH<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,2>,Scaleform::ArrayDefaultPolicy> > *this,
        unsigned __int64 index,
        const Scaleform::Render::Text::StyledText::ParagraphPtrWrapper *val)
{
  unsigned __int64 Size; // rbp
  Scaleform::Render::Text::StyledText::ParagraphPtrWrapper *v7; // rax
  __int64 v8; // rbx
  unsigned __int64 v9; // r8
  Scaleform::Render::Text::StyledText::ParagraphPtrWrapper *v10; // rcx

  Size = this->Data.Size;
  Scaleform::ArrayDataBase<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,Scaleform::AllocatorLH<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,2>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
    &this->Data,
    this,
    Size + 1);
  if ( Size + 1 > Size )
  {
    v7 = &this->Data.Data[Size];
    v8 = 1i64;
    do
    {
      if ( v7 )
        v7->pPara = 0i64;
      ++v7;
      --v8;
    }
    while ( v8 );
  }
  v9 = this->Data.Size;
  if ( index < v9 - 1 )
    memmove(&this->Data.Data[index + 1], &this->Data.Data[index], 8 * (v9 - index) - 8);
  v10 = &this->Data.Data[index];
  if ( v10 )
  {
    v10->pPara = val->pPara;
    val->pPara = 0i64;
  }
}

Scaleform::Render::Text::Paragraph *__fastcall Scaleform::Render::Text::StyledText::InsertCopyOfParagraph(
        Scaleform::Render::Text::StyledText *this,
        Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,Scaleform::AllocatorLH<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,2>,Scaleform::ArrayDefaultPolicy> >::Iterator *iter,
        const Scaleform::Render::Text::Paragraph *srcPara)
{
  __int64 CurIndex; // rdi
  Scaleform::Render::Text::Paragraph *v6; // rbx
  unsigned __int64 v7; // rbp
  Scaleform::Render::Text::Paragraph *pPara; // rcx
  unsigned __int64 Size; // rax
  unsigned __int64 StartIndex; // r9
  unsigned __int64 v11; // rdx
  wchar_t *v12; // rcx
  Scaleform::Render::Text::Allocator *Allocator; // r15
  Scaleform::Render::Text::Paragraph *v14; // rax
  Scaleform::Render::Text::Paragraph *v15; // rax
  Scaleform::ArrayLH<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,2,Scaleform::ArrayDefaultPolicy> *p_Paragraphs; // r14
  Scaleform::Render::Text::Paragraph *v17; // rbx
  Scaleform::Render::Text::ParagraphFormat *pObject; // rsi
  Scaleform::Render::Text::Paragraph *result; // rax
  Scaleform::Render::Text::StyledText::ParagraphPtrWrapper val; // [rsp+48h] [rbp+10h] BYREF

  if ( !iter->pArray )
    return Scaleform::Render::Text::StyledText::AppendCopyOfParagraph(this, srcPara);
  CurIndex = iter->CurIndex;
  if ( CurIndex < 0 || CurIndex >= SLODWORD(iter->pArray->Data.Size) )
    return Scaleform::Render::Text::StyledText::AppendCopyOfParagraph(this, srcPara);
  v6 = 0i64;
  v7 = 0i64;
  if ( CurIndex )
  {
    pPara = this->Paragraphs.Data.Data[CurIndex - 1].pPara;
    Size = pPara->Text.Size;
    StartIndex = pPara->StartIndex;
    if ( Size )
    {
      v11 = Size - 1;
      if ( !pPara->Text.pText || (v12 = &pPara->Text.pText[v11], v11 >= Size) )
        v12 = 0i64;
      if ( !*v12 )
        --Size;
    }
    v7 = Size + StartIndex;
  }
  Allocator = Scaleform::Render::Text::StyledText::GetAllocator(this);
  v14 = (Scaleform::Render::Text::Paragraph *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))Allocator->pHeap->Alloc)(
                                                Allocator->pHeap,
                                                72i64);
  if ( v14 )
  {
    Scaleform::Render::Text::Paragraph::Paragraph(v14, srcPara, Allocator);
    v6 = v15;
  }
  p_Paragraphs = &this->Paragraphs;
  val.pPara = v6;
  Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,Scaleform::AllocatorLH<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,2>,Scaleform::ArrayDefaultPolicy>>::InsertAt(
    &this->Paragraphs,
    CurIndex,
    &val);
  v17 = val.pPara;
  if ( val.pPara )
  {
    Scaleform::ArrayDataBase<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>>,Scaleform::AllocatorLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>>,2>,Scaleform::ArrayDefaultPolicy>::~ArrayDataBase<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>>,Scaleform::AllocatorLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>>,2>,Scaleform::ArrayDefaultPolicy>(&val.pPara->FormatInfo.Ranges.Data);
    pObject = v17->pFormat.pObject;
    if ( pObject )
    {
      if ( pObject->RefCount-- == 1 )
      {
        Scaleform::Render::Text::ParagraphFormat::~ParagraphFormat(pObject);
        Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, pObject);
      }
    }
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v17);
  }
  result = p_Paragraphs->Data.Data[CurIndex].pPara;
  result->StartIndex = v7;
  return result;
}

Scaleform::Render::Text::Paragraph *__fastcall Scaleform::Render::Text::StyledText::InsertNewParagraph(
        Scaleform::Render::Text::StyledText *this,
        Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,Scaleform::AllocatorLH<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,2>,Scaleform::ArrayDefaultPolicy> >::Iterator *iter,
        const Scaleform::Render::Text::ParagraphFormat *pdefParaFmt)
{
  const Scaleform::Render::Text::ParagraphFormat *v3; // r15
  __int64 CurIndex; // rdi
  wchar_t *v6; // r14
  Scaleform::Render::Text::Paragraph *pPara; // rcx
  unsigned __int64 Size; // rax
  unsigned __int64 v9; // rdx
  Scaleform::Render::Text::Allocator *Allocator; // rax
  Scaleform::Render::Text::Paragraph *v11; // rbx
  Scaleform::Render::Text::ParagraphFormat *pObject; // rbp
  Scaleform::Render::Text::StyledText::ParagraphPtrWrapper *Data; // rax
  Scaleform::Render::Text::Paragraph *v15; // rbx
  Scaleform::Render::Text::StyledText::ParagraphPtrWrapper val; // [rsp+58h] [rbp+10h] BYREF

  v3 = pdefParaFmt;
  if ( !iter->pArray )
    return Scaleform::Render::Text::StyledText::AppendNewParagraph(this, pdefParaFmt);
  CurIndex = iter->CurIndex;
  if ( CurIndex < 0 || CurIndex >= SLODWORD(iter->pArray->Data.Size) )
    return Scaleform::Render::Text::StyledText::AppendNewParagraph(this, pdefParaFmt);
  v6 = 0i64;
  if ( CurIndex )
  {
    pPara = this->Paragraphs.Data.Data[CurIndex - 1].pPara;
    Size = pPara->Text.Size;
    if ( Size )
    {
      v9 = Size - 1;
      if ( pPara->Text.pText && v9 < Size )
        v6 = &pPara->Text.pText[v9];
      if ( !*v6 )
        --Size;
    }
    v6 = (wchar_t *)(Size + pPara->StartIndex);
  }
  Allocator = Scaleform::Render::Text::StyledText::GetAllocator(this);
  val.pPara = Scaleform::Render::Text::Allocator::AllocateParagraph(Allocator);
  Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,Scaleform::AllocatorLH<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,2>,Scaleform::ArrayDefaultPolicy>>::InsertAt(
    &this->Paragraphs,
    CurIndex,
    &val);
  v11 = val.pPara;
  if ( val.pPara )
  {
    Scaleform::ArrayDataBase<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>>,Scaleform::AllocatorLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>>,2>,Scaleform::ArrayDefaultPolicy>::~ArrayDataBase<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>>,Scaleform::AllocatorLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>>,2>,Scaleform::ArrayDefaultPolicy>(&val.pPara->FormatInfo.Ranges.Data);
    pObject = v11->pFormat.pObject;
    if ( pObject )
    {
      if ( pObject->RefCount-- == 1 )
      {
        Scaleform::Render::Text::ParagraphFormat::~ParagraphFormat(pObject);
        Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, pObject);
      }
    }
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v11);
  }
  Data = this->Paragraphs.Data.Data;
  v15 = Data[CurIndex].pPara;
  if ( !v3 )
    v3 = this->pDefaultParagraphFormat.pObject;
  Scaleform::Render::Text::Paragraph::SetFormat(Data[CurIndex].pPara, this->pTextAllocator.pObject, v3);
  v15->StartIndex = (unsigned __int64)v6;
  return v15;
}

void __fastcall Scaleform::Render::Text::Paragraph::InsertString(
        Scaleform::Render::Text::Paragraph *this,
        Scaleform::Render::Text::Allocator *pallocator,
        const wchar_t *pstr,
        unsigned __int64 pos,
        unsigned __int64 length)
{
  unsigned __int64 v5; // rbx
  wchar_t *Position; // rbp

  v5 = length;
  if ( length )
  {
    if ( length == -1i64 )
    {
      v5 = 0i64;
      if ( *pstr )
      {
        do
          ++v5;
        while ( pstr[v5] );
      }
    }
    if ( v5 )
    {
      Position = Scaleform::Render::Text::Paragraph::TextBuffer::CreatePosition(&this->Text, pallocator, pos, v5);
      Scaleform::RangeDataArray<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>,Scaleform::ArrayLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>>,2,Scaleform::ArrayDefaultPolicy>>::ExpandRange(
        &this->FormatInfo,
        pos,
        v5);
      ++this->ModCounter;
      if ( Position )
      {
        memmove(Position, pstr, 2 * v5);
        Scaleform::Render::Text::Paragraph::SetTermNullFormat(this);
        ++this->ModCounter;
      }
    }
  }
}

void __fastcall Scaleform::Render::Text::Paragraph::InsertString(
        Scaleform::Render::Text::Paragraph *this,
        Scaleform::Render::Text::Allocator *pallocator,
        const wchar_t *pstr,
        unsigned __int64 pos,
        unsigned __int64 length,
        const Scaleform::Render::Text::TextFormat *pnewFmt)
{
  unsigned __int64 v6; // rbx
  wchar_t *Position; // r14
  Scaleform::Render::Text::TextFormat *pObject; // rbx
  bool v12; // zf
  Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> > range; // [rsp+20h] [rbp-38h] BYREF

  v6 = length;
  if ( length )
  {
    if ( length == -1i64 )
    {
      v6 = 0i64;
      if ( *pstr )
      {
        do
          ++v6;
        while ( pstr[v6] );
      }
    }
    if ( v6 )
    {
      Position = Scaleform::Render::Text::Paragraph::TextBuffer::CreatePosition(&this->Text, pallocator, pos, v6);
      Scaleform::RangeDataArray<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>,Scaleform::ArrayLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>>,2,Scaleform::ArrayDefaultPolicy>>::ExpandRange(
        &this->FormatInfo,
        pos,
        v6);
      ++this->ModCounter;
      if ( Position )
      {
        memmove(Position, pstr, 2 * v6);
        if ( pnewFmt )
        {
          pnewFmt->RefCount += 2;
          range.Index = pos;
          range.Length = v6;
          range.Data.pObject = (Scaleform::Render::Text::TextFormat *)pnewFmt;
          Scaleform::RangeDataArray<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>,Scaleform::ArrayLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>>,2,Scaleform::ArrayDefaultPolicy>>::SetRange(
            &this->FormatInfo,
            &range);
          pObject = range.Data.pObject;
          if ( range.Data.pObject )
          {
            v12 = range.Data.pObject->RefCount-- == 1;
            if ( v12 )
            {
              Scaleform::Render::Text::TextFormat::~TextFormat(pObject);
              Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, pObject);
            }
          }
          v12 = pnewFmt->RefCount-- == 1;
          if ( v12 )
          {
            Scaleform::Render::Text::TextFormat::~TextFormat((Scaleform::Render::Text::TextFormat *)pnewFmt);
            Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, (void *)pnewFmt);
          }
        }
        Scaleform::Render::Text::Paragraph::SetTermNullFormat(this);
        ++this->ModCounter;
      }
    }
  }
}

unsigned __int64 __fastcall Scaleform::Render::Text::StyledText::InsertString(
        Scaleform::Render::Text::StyledText *this,
        const wchar_t *pstr,
        unsigned __int64 pos,
        unsigned __int64 length,
        Scaleform::Render::Text::StyledText::NewLinePolicy newLinePolicy)
{
  return Scaleform::Render::Text::StyledText::InsertString(
           this,
           pstr,
           pos,
           length,
           newLinePolicy,
           this->pDefaultTextFormat.pObject,
           this->pDefaultParagraphFormat.pObject);
}

__int64 __fastcall Scaleform::Render::Text::StyledText::InsertString(
        Scaleform::Render::Text::StyledText *this,
        const wchar_t *pstr,
        unsigned __int64 pos,
        unsigned __int64 length,
        Scaleform::Render::Text::StyledText::NewLinePolicy newLinePolicy,
        const Scaleform::Render::Text::TextFormat *pdefTextFmt,
        const Scaleform::Render::Text::ParagraphFormat *pdefParaFmt)
{
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rbx
  Scaleform::Render::Text::StyledText *v10; // r13
  unsigned __int64 Size; // rbp
  unsigned __int64 v13; // r8
  __int64 v14; // r9
  Scaleform::ArrayLH<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,2,Scaleform::ArrayDefaultPolicy> *p_Paragraphs; // r14
  __int64 v16; // r10
  __int64 v17; // r11
  Scaleform::Render::Text::Paragraph *pPara; // rax
  unsigned __int64 StartIndex; // r8
  Scaleform::Render::Text::StyledText::ParagraphPtrWrapper *Data; // rax
  Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,Scaleform::AllocatorLH<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,2>,Scaleform::ArrayDefaultPolicy> >::Iterator si128; // xmm6
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rbx
  const Scaleform::Render::Text::ParagraphFormat *v24; // r9
  wchar_t v25; // bp
  __int64 CurIndex; // r15
  Scaleform::ArrayLH<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,2,Scaleform::ArrayDefaultPolicy> *pArray; // r14
  Scaleform::Render::Text::Paragraph *v28; // r12
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rcx
  bool v31; // cf
  wchar_t *v32; // rcx
  __int64 v33; // rax
  Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,Scaleform::AllocatorLH<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,2>,Scaleform::ArrayDefaultPolicy> > *inserted; // rax
  Scaleform::Render::Text::ParagraphFormat *pObject; // r13
  Scaleform::Render::Text::Paragraph *v36; // rcx
  Scaleform::Render::Text::ParagraphFormat *v37; // r14
  unsigned __int64 v39; // r13
  unsigned __int64 v40; // r13
  unsigned __int64 v41; // r8
  unsigned __int64 v42; // r14
  unsigned __int64 v43; // r13
  unsigned __int64 v44; // r14
  wchar_t *pText; // rax
  unsigned __int64 v46; // rcx
  wchar_t *v47; // rcx
  unsigned __int64 v48; // rcx
  wchar_t *v49; // rcx
  __int16 v50; // dx
  unsigned __int64 v51; // r8
  Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,Scaleform::AllocatorLH<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,2>,Scaleform::ArrayDefaultPolicy> > *v52; // rdx
  Scaleform::Render::Text::Paragraph *v53; // rcx
  __int64 v54; // rcx
  Scaleform::Render::Text::Paragraph *appended; // rax
  unsigned __int64 v56; // rcx
  unsigned __int64 v57; // rdx
  unsigned __int64 v58; // [rsp+30h] [rbp-88h]
  __int64 v59; // [rsp+38h] [rbp-80h]
  Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,Scaleform::AllocatorLH<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,2>,Scaleform::ArrayDefaultPolicy> >::Iterator iter; // [rsp+40h] [rbp-78h] BYREF
  Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,Scaleform::AllocatorLH<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,2>,Scaleform::ArrayDefaultPolicy> >::Iterator v61; // [rsp+50h] [rbp-68h] BYREF
  __m128i v62; // [rsp+60h] [rbp-58h]
  unsigned __int64 startSrcIndex; // [rsp+D8h] [rbp+20h]

  v7 = length;
  v8 = pos;
  v10 = this;
  if ( !length )
    return 0i64;
  if ( pos > Scaleform::Render::Text::StyledText::GetLength(this) )
    v8 = Scaleform::Render::Text::StyledText::GetLength(v10);
  if ( v7 == -1i64 )
  {
    v7 = 0i64;
    if ( *pstr )
    {
      do
        ++v7;
      while ( pstr[v7] );
    }
  }
  v10->OnTextInserting(v10, v8, v7, pstr);
  Size = v10->Paragraphs.Data.Size;
  v13 = 0i64;
  startSrcIndex = 0i64;
  if ( !Size )
  {
    si128 = (Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,Scaleform::AllocatorLH<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,2>,Scaleform::ArrayDefaultPolicy> >::Iterator)_mm_load_si128((const __m128i *)&_xmm_ffffffffffffffff0000000000000000);
    v61 = si128;
LABEL_22:
    v23 = 0i64;
    v58 = 0i64;
    goto LABEL_23;
  }
  v14 = v10->Paragraphs.Data.Size;
  p_Paragraphs = &v10->Paragraphs;
  v16 = 0i64;
  while ( v14 > 0 )
  {
    v17 = (v14 >> 1) + v16;
    pPara = p_Paragraphs->Data.Data[v17].pPara;
    StartIndex = pPara->StartIndex;
    if ( v8 >= StartIndex && v8 < StartIndex + pPara->Text.Size || (int)StartIndex - (int)v8 >= 0 )
    {
      v14 >>= 1;
    }
    else
    {
      v16 = v17 + 1;
      v14 += -1 - (v14 >> 1);
    }
  }
  if ( v16 == Size )
    LODWORD(v16) = v16 - 1;
  Data = p_Paragraphs->Data.Data;
  v61.pArray = &v10->Paragraphs;
  v61.CurIndex = (int)v16;
  si128 = v61;
  v22 = Data[(int)v16].pPara->StartIndex;
  v13 = v8 - v22;
  v58 = v22;
  startSrcIndex = v8 - v22;
  if ( (int)v16 < 0 || (int)v16 >= (__int64)SLODWORD(v10->Paragraphs.Data.Size) )
    goto LABEL_22;
  v23 = 0i64;
LABEL_23:
  v24 = pdefParaFmt;
  v25 = 0;
  CurIndex = v61.CurIndex;
  v59 = 0i64;
  while ( 1 )
  {
    if ( newLinePolicy == NLP_IgnoreCRLF )
    {
      if ( !v7 )
        break;
      do
      {
        if ( *pstr != 13 && *pstr != 10 )
          break;
        ++pstr;
        --v7;
      }
      while ( v7 );
      if ( !v7 )
        break;
    }
    pArray = (Scaleform::ArrayLH<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,2,Scaleform::ArrayDefaultPolicy> *)v61.pArray;
    if ( !v61.pArray || CurIndex < 0 || CurIndex >= SLODWORD(v61.pArray->Data.Size) )
    {
      Scaleform::Render::Text::StyledText::AppendNewParagraph(v10, v24);
      v24 = pdefParaFmt;
      v62 = (__m128i)(unsigned __int64)&v10->Paragraphs;
      v13 = 0i64;
      si128 = (Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,Scaleform::AllocatorLH<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,2>,Scaleform::ArrayDefaultPolicy> >::Iterator)v62;
      v61 = (Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,Scaleform::AllocatorLH<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,2>,Scaleform::ArrayDefaultPolicy> >::Iterator)v62;
      CurIndex = 0i64;
      pArray = &v10->Paragraphs;
      startSrcIndex = 0i64;
    }
    v28 = pArray->Data.Data[CurIndex].pPara;
    v29 = v28->Text.Size;
    if ( !v29 )
      goto LABEL_41;
    v30 = v29 - 1;
    if ( !v28->Text.pText || (v31 = v30 < v29, v32 = &v28->Text.pText[v30], !v31) )
      v32 = 0i64;
    if ( !*v32 )
      --v29;
    if ( !v29 )
    {
LABEL_41:
      Scaleform::Render::Text::Paragraph::SetFormat(pArray->Data.Data[CurIndex].pPara, v10->pTextAllocator.pObject, v24);
      v13 = startSrcIndex;
    }
    v33 = -1i64;
    if ( newLinePolicy == NLP_CompressCRLF && v25 == 13 && *pstr == 10 )
    {
      ++pstr;
      if ( !--v7 )
      {
        v23 = 0i64;
        break;
      }
    }
    if ( v7 )
    {
      while ( 1 )
      {
        v25 = pstr[v23];
        if ( v25 == 10 || v25 == 13 )
          break;
        if ( !v25 )
          goto LABEL_70;
        if ( ++v23 >= v7 )
          goto LABEL_51;
      }
      if ( newLinePolicy == NLP_IgnoreCRLF )
      {
        v25 = 1;
LABEL_70:
        Scaleform::Render::Text::Paragraph::InsertString(v28, v10->pTextAllocator.pObject, pstr, v13, v23, pdefTextFmt);
        goto LABEL_91;
      }
      v33 = v23;
    }
LABEL_51:
    if ( v25 == 10 || v25 == 13 )
      ++v23;
    if ( v33 == -1 )
      goto LABEL_70;
    iter = si128;
    if ( CurIndex < (signed __int64)pArray->Data.Size )
      iter.CurIndex = CurIndex + 1;
    inserted = (Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,Scaleform::AllocatorLH<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,2>,Scaleform::ArrayDefaultPolicy> > *)Scaleform::Render::Text::StyledText::InsertNewParagraph(v10, &iter, pdefParaFmt);
    pObject = v28->pFormat.pObject;
    v36 = (Scaleform::Render::Text::Paragraph *)inserted;
    iter.pArray = inserted;
    if ( pObject )
      ++pObject->RefCount;
    v37 = (Scaleform::Render::Text::ParagraphFormat *)inserted[1].Data.Data;
    if ( v37 )
    {
      if ( v37->RefCount-- == 1 )
      {
        Scaleform::Render::Text::ParagraphFormat::~ParagraphFormat(v37);
        Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v37);
        v36 = (Scaleform::Render::Text::Paragraph *)iter.pArray;
      }
    }
    v36->pFormat.pObject = pObject;
    ++v36->ModCounter;
    Scaleform::Render::Text::Paragraph::Copy(
      v36,
      this->pTextAllocator.pObject,
      v28,
      startSrcIndex,
      0i64,
      v28->Text.Size - startSrcIndex);
    v39 = v28->Text.Size;
    Scaleform::Render::Text::Paragraph::InsertString(
      v28,
      this->pTextAllocator.pObject,
      pstr,
      startSrcIndex,
      v23,
      pdefTextFmt);
    v40 = v39 - startSrcIndex;
    if ( v40 )
    {
      v41 = v28->Text.Size;
      v42 = v41;
      if ( v40 < v41 )
        v42 = v40;
      v43 = v41 - v42;
      if ( v41 == -1i64 )
      {
        v42 = -1i64;
LABEL_72:
        if ( v43 < v41 )
        {
          if ( v42 + v43 < v41 )
          {
            memmove(&v28->Text.pText[v43], &v28->Text.pText[v42 + v43], 2 * (v41 - v42 - v43));
            v28->Text.Size -= v42;
          }
          else
          {
            v28->Text.Size = v43;
          }
        }
        Scaleform::RangeDataArray<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>,Scaleform::ArrayLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>>,2,Scaleform::ArrayDefaultPolicy>>::RemoveRange(
          &v28->FormatInfo,
          v43,
          v42);
        v44 = v28->Text.Size;
        if ( v44 )
        {
          pText = v28->Text.pText;
          v46 = v44 - 1;
          if ( v28->Text.pText && v46 < v44 )
            v47 = &pText[v46];
          else
            v47 = 0i64;
          if ( !*v47 )
          {
            v48 = v44 - 1;
            if ( pText && v48 < v44 )
              v49 = &pText[v48];
            else
              v49 = 0i64;
            if ( !*v49 )
              --v44;
            Scaleform::RangeDataArray<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>,Scaleform::ArrayLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>>,2,Scaleform::ArrayDefaultPolicy>>::ExpandRange(
              &v28->FormatInfo,
              v44,
              1ui64);
            Scaleform::RangeDataArray<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>,Scaleform::ArrayLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>>,2,Scaleform::ArrayDefaultPolicy>>::RemoveRange(
              &v28->FormatInfo,
              v44 + 1,
              1ui64);
          }
        }
        ++v28->ModCounter;
        goto LABEL_90;
      }
      if ( v42 )
        goto LABEL_72;
    }
LABEL_90:
    pArray = (Scaleform::ArrayLH<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,2,Scaleform::ArrayDefaultPolicy> *)v61.pArray;
    v10 = this;
LABEL_91:
    if ( v25 == 13 || v25 == 10 )
    {
      v50 = 10;
      v51 = startSrcIndex;
      if ( (v10->RTFlags & 2) != 0 )
        v50 = 13;
      if ( v25 != v50 )
        v28->Text.pText[v23 - 1 + startSrcIndex] = v50;
    }
    else
    {
      v51 = startSrcIndex;
    }
    v59 += v23;
    pstr += v23;
    v7 -= v23;
    v28->StartIndex = v58;
    if ( newLinePolicy == NLP_IgnoreCRLF )
    {
      v13 = v23 + v51;
      startSrcIndex = v13;
      v23 = 0i64;
    }
    else
    {
      v23 = 0i64;
      v13 = 0i64;
      startSrcIndex = 0i64;
      v58 += v28->Text.Size;
      if ( CurIndex < (signed __int64)pArray->Data.Size )
      {
        v61.CurIndex = ++CurIndex;
        si128 = (Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,Scaleform::AllocatorLH<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,2>,Scaleform::ArrayDefaultPolicy> >::Iterator)_mm_load_si128((const __m128i *)&v61);
      }
    }
    if ( v7 )
    {
      v24 = pdefParaFmt;
      if ( v25 )
        continue;
    }
    break;
  }
  v52 = v61.pArray;
  while ( v52 && CurIndex >= 0 && CurIndex < SLODWORD(v52->Data.Size) )
  {
    v53 = v52->Data.Data[CurIndex].pPara;
    v53->StartIndex = v58;
    v58 += v53->Text.Size;
    if ( CurIndex < (signed __int64)v52->Data.Size )
      ++CurIndex;
  }
  v54 = v10->Paragraphs.Data.Size - 1;
  if ( v54 >= 0
    && v54 < SLODWORD(v10->Paragraphs.Data.Size)
    && (appended = v10->Paragraphs.Data.Data[v54].pPara) != 0i64
    || (appended = Scaleform::Render::Text::StyledText::AppendNewParagraph(v10, 0i64)) != 0i64 )
  {
    v56 = appended->Text.Size;
    if ( !v56 )
      goto LABEL_122;
    v57 = v56 - 1;
    if ( appended->Text.pText && v57 < v56 )
      v23 = (unsigned __int64)&appended->Text.pText[v57];
    if ( *(_WORD *)v23 != 10 && *(_WORD *)v23 != 13 )
LABEL_122:
      Scaleform::Render::Text::Paragraph::AppendTermNull(
        appended,
        v10->pTextAllocator.pObject,
        v10->pDefaultTextFormat.pObject);
  }
  if ( (pdefTextFmt->PresentMask & 0x100) != 0 && Scaleform::String::GetLength(&pdefTextFmt->Url) )
    v10->RTFlags |= 1u;
  return v59;
}

unsigned __int64 __fastcall Scaleform::Render::Text::StyledText::InsertStyledText(
        Scaleform::Render::Text::StyledText *this,
        const Scaleform::Render::Text::StyledText *text,
        unsigned __int64 pos,
        unsigned __int64 length)
{
  unsigned __int64 v5; // rbx
  unsigned __int64 v8; // rax
  unsigned __int64 Size; // rsi
  wchar_t *v10; // r12
  __int64 v11; // r9
  Scaleform::ArrayLH<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,2,Scaleform::ArrayDefaultPolicy> *p_Paragraphs; // r8
  __int64 v13; // r10
  __int64 v14; // r11
  Scaleform::Render::Text::Paragraph *pPara; // rax
  unsigned __int64 StartIndex; // rdx
  Scaleform::Render::Text::StyledText::ParagraphPtrWrapper *Data; // rax
  Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,Scaleform::AllocatorLH<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,2>,Scaleform::ArrayDefaultPolicy> >::Iterator v18; // xmm0
  unsigned __int64 startDestIndex; // rdi
  __int64 CurIndex; // rbx
  unsigned __int64 v21; // rsi
  Scaleform::Render::Text::StyledText::ParagraphPtrWrapper *v22; // rax
  Scaleform::Render::Text::Paragraph *v23; // rbp
  Scaleform::Render::Text::Paragraph *v24; // r15
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rcx
  bool v27; // cf
  wchar_t *v28; // rcx
  unsigned __int64 v29; // rsi
  Scaleform::Render::Text::Paragraph *v30; // r15
  Scaleform::Render::Text::Paragraph *v31; // rbp
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rcx
  wchar_t *v34; // rcx
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // rcx
  unsigned __int64 v37; // r12
  Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,Scaleform::AllocatorLH<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,2>,Scaleform::ArrayDefaultPolicy> > *v38; // r8
  Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,Scaleform::AllocatorLH<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,2>,Scaleform::ArrayDefaultPolicy> > *pArray; // rax
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // rcx
  wchar_t *v42; // rcx
  unsigned __int64 v43; // rsi
  const Scaleform::Render::Text::StyledText *v44; // rcx
  __int64 v45; // rbp
  const Scaleform::Render::Text::Paragraph *v46; // r15
  unsigned __int64 v47; // rax
  unsigned __int64 v48; // rdi
  unsigned __int64 v49; // rcx
  wchar_t *v50; // rcx
  unsigned __int64 v51; // rcx
  wchar_t *v52; // rax
  wchar_t v53; // ax
  Scaleform::Render::Text::Paragraph *v54; // rdi
  unsigned __int64 v55; // rax
  unsigned __int64 v56; // rcx
  wchar_t *v57; // rcx
  Scaleform::Render::Text::Paragraph *v58; // rcx
  signed __int64 v59; // rcx
  Scaleform::Render::Text::Paragraph *appended; // rax
  unsigned __int64 v61; // rcx
  unsigned __int64 v62; // rdx
  unsigned __int64 lengtha; // [rsp+28h] [rbp-70h]
  Scaleform::Render::Text::Paragraph *inserted; // [rsp+30h] [rbp-68h]
  Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,Scaleform::AllocatorLH<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,2>,Scaleform::ArrayDefaultPolicy> >::Iterator iter; // [rsp+40h] [rbp-58h] BYREF
  Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,Scaleform::AllocatorLH<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,2>,Scaleform::ArrayDefaultPolicy> >::Iterator v67; // [rsp+50h] [rbp-48h] BYREF
  unsigned __int64 v69; // [rsp+B8h] [rbp+20h]

  v69 = length;
  v5 = length;
  v8 = Scaleform::Render::Text::StyledText::GetLength((Scaleform::Render::Text::StyledText *)text);
  if ( v5 == -1i64 || v5 > v8 )
  {
    v5 = v8;
    v69 = v8;
  }
  if ( !v5 || !text->Paragraphs.Data.Size )
    return 0i64;
  this->OnTextInserting(this, pos, v5, &pnewText);
  Size = this->Paragraphs.Data.Size;
  v10 = 0i64;
  if ( !Size )
    goto LABEL_19;
  v11 = this->Paragraphs.Data.Size;
  p_Paragraphs = &this->Paragraphs;
  v13 = 0i64;
  if ( v11 > 0 )
  {
    do
    {
      v14 = (v11 >> 1) + v13;
      pPara = p_Paragraphs->Data.Data[v14].pPara;
      StartIndex = pPara->StartIndex;
      if ( pos >= StartIndex && pos < StartIndex + pPara->Text.Size || (int)StartIndex - (int)pos >= 0 )
      {
        v11 >>= 1;
      }
      else
      {
        v13 = v14 + 1;
        v11 += -1 - (v11 >> 1);
      }
    }
    while ( v11 > 0 );
    p_Paragraphs = &this->Paragraphs;
  }
  if ( v13 == Size )
    LODWORD(v13) = v13 - 1;
  Data = p_Paragraphs->Data.Data;
  v67.pArray = p_Paragraphs;
  v67.CurIndex = (int)v13;
  v18 = v67;
  startDestIndex = pos - Data[(int)v13].pPara->StartIndex;
  if ( (int)v13 < 0 || (int)v13 >= (__int64)SLODWORD(p_Paragraphs->Data.Size) )
  {
LABEL_19:
    Scaleform::Render::Text::StyledText::AppendNewParagraph(this, 0i64);
    v67.CurIndex = 0i64;
    v67.pArray = &this->Paragraphs;
    startDestIndex = 0i64;
    v18 = (Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,Scaleform::AllocatorLH<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,2>,Scaleform::ArrayDefaultPolicy> >::Iterator)(unsigned __int64)&this->Paragraphs;
  }
  CurIndex = v67.CurIndex;
  if ( v18.pArray && v67.CurIndex >= 0 && v67.CurIndex < SLODWORD(v18.pArray->Data.Size) )
    v21 = v18.pArray->Data.Data[v67.CurIndex].pPara->StartIndex;
  else
    v21 = 0i64;
  v22 = v18.pArray->Data.Data;
  if ( text->Paragraphs.Data.Size == 1 )
  {
    v23 = v22[v67.CurIndex].pPara;
    v24 = text->Paragraphs.Data.Data->pPara;
    v25 = v24->Text.Size;
    if ( v25 )
    {
      v26 = v25 - 1;
      if ( !v24->Text.pText || (v27 = v26 < v25, v28 = &v24->Text.pText[v26], !v27) )
        v28 = 0i64;
      if ( !*v28 )
        --v25;
    }
    Scaleform::Render::Text::Paragraph::Copy(v23, this->pTextAllocator.pObject, v24, 0i64, startDestIndex, v25);
    if ( !startDestIndex )
      Scaleform::Render::Text::Paragraph::SetFormat(v23, this->pTextAllocator.pObject, v24->pFormat.pObject);
    v29 = v23->Text.Size + v21;
  }
  else
  {
    v30 = v22[v67.CurIndex].pPara;
    iter = v18;
    if ( v67.CurIndex < (signed __int64)v18.pArray->Data.Size )
      iter.CurIndex = v67.CurIndex + 1;
    inserted = Scaleform::Render::Text::StyledText::InsertNewParagraph(this, &iter, v30->pFormat.pObject);
    Scaleform::Render::Text::Paragraph::Copy(
      inserted,
      this->pTextAllocator.pObject,
      v30,
      startDestIndex,
      0i64,
      v30->Text.Size - startDestIndex);
    iter.pArray = (Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,Scaleform::AllocatorLH<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,2>,Scaleform::ArrayDefaultPolicy> > *)(v30->Text.Size - startDestIndex);
    v31 = text->Paragraphs.Data.Data->pPara;
    v32 = v31->Text.Size;
    if ( v32 )
    {
      v33 = v32 - 1;
      if ( !v31->Text.pText || (v27 = v33 < v32, v34 = &v31->Text.pText[v33], !v27) )
        v34 = 0i64;
      if ( !*v34 )
        --v32;
    }
    Scaleform::Render::Text::Paragraph::Copy(v30, this->pTextAllocator.pObject, v31, 0i64, startDestIndex, v32);
    v35 = v31->Text.Size;
    if ( v35 )
    {
      v36 = v35 - 1;
      if ( v31->Text.pText && v36 < v35 )
        v10 = &v31->Text.pText[v36];
      if ( !*v10 )
        --v35;
    }
    v37 = v69 - v35;
    if ( !startDestIndex )
      Scaleform::Render::Text::Paragraph::SetFormat(v30, this->pTextAllocator.pObject, v31->pFormat.pObject);
    if ( iter.pArray )
    {
      v38 = (Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,Scaleform::AllocatorLH<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,2>,Scaleform::ArrayDefaultPolicy> > *)v30->Text.Size;
      pArray = v38;
      if ( iter.pArray < v38 )
        pArray = iter.pArray;
      Scaleform::Render::Text::Paragraph::Remove(v30, v30->Text.Size - (_QWORD)pArray, (unsigned __int64)v38);
    }
    v40 = v30->Text.Size;
    if ( v40 )
    {
      v41 = v40 - 1;
      if ( v30->Text.pText && v41 < v40 )
        v42 = &v30->Text.pText[v41];
      else
        v42 = 0i64;
      if ( !*v42 )
        --v40;
    }
    v43 = v40 + v21;
    if ( CurIndex < (signed __int64)v18.pArray->Data.Size )
      v67.CurIndex = ++CurIndex;
    v44 = text;
    v45 = (signed __int64)text->Paragraphs.Data.Size > 0;
    while ( v45 >= 0 && v45 < SLODWORD(v44->Paragraphs.Data.Size) && v37 )
    {
      v46 = v44->Paragraphs.Data.Data[v45].pPara;
      v47 = v46->Text.Size;
      v48 = v47;
      if ( v47 )
      {
        v49 = v47 - 1;
        if ( v46->Text.pText && v49 < v47 )
          v50 = &v46->Text.pText[v49];
        else
          v50 = 0i64;
        if ( !*v50 )
          v48 = v47 - 1;
      }
      if ( v48 > v37
        || v48 == v37
        && (!v47
         || ((v51 = v47 - 1, !v46->Text.pText) || v51 >= v47 ? (v52 = 0i64) : (v52 = &v46->Text.pText[v51]),
             (v53 = *v52, v53 != 13) && v53 != 10)) )
      {
        v10 = 0i64;
        lengtha = v48;
        v54 = inserted;
        Scaleform::Render::Text::Paragraph::Copy(inserted, this->pTextAllocator.pObject, v46, 0i64, 0i64, lengtha);
        Scaleform::Render::Text::Paragraph::SetFormat(inserted, this->pTextAllocator.pObject, v46->pFormat.pObject);
        goto LABEL_90;
      }
      Scaleform::Render::Text::StyledText::InsertCopyOfParagraph(this, &v67, v46);
      v44 = text;
      v37 -= v48;
      v43 += v48;
      if ( v45 < (signed __int64)text->Paragraphs.Data.Size )
        ++v45;
      if ( CurIndex < (signed __int64)v18.pArray->Data.Size )
        v67.CurIndex = ++CurIndex;
    }
    v54 = inserted;
    v10 = 0i64;
LABEL_90:
    v55 = v54->Text.Size;
    v54->StartIndex = v43;
    if ( v55 )
    {
      v56 = v55 - 1;
      if ( !v54->Text.pText || (v27 = v56 < v55, v57 = &v54->Text.pText[v56], !v27) )
        v57 = 0i64;
      if ( !*v57 )
        --v55;
    }
    v29 = v55 + v43;
  }
  if ( CurIndex < (signed __int64)v18.pArray->Data.Size )
    ++CurIndex;
  while ( CurIndex >= 0 )
  {
    if ( CurIndex >= SLODWORD(v18.pArray->Data.Size) )
      break;
    v58 = v18.pArray->Data.Data[CurIndex].pPara;
    if ( v58->StartIndex == v29 )
      break;
    v58->StartIndex = v29;
    v29 += v58->Text.Size;
    if ( CurIndex < (signed __int64)v18.pArray->Data.Size )
      ++CurIndex;
  }
  v59 = this->Paragraphs.Data.Size - 1;
  if ( v59 >= 0
    && v59 < SLODWORD(this->Paragraphs.Data.Size)
    && (appended = this->Paragraphs.Data.Data[v59].pPara) != 0i64
    || (appended = Scaleform::Render::Text::StyledText::AppendNewParagraph(this, 0i64)) != 0i64 )
  {
    v61 = appended->Text.Size;
    if ( !v61 )
      goto LABEL_114;
    v62 = v61 - 1;
    if ( appended->Text.pText && v62 < v61 )
      v10 = &appended->Text.pText[v62];
    if ( *v10 != 10 && *v10 != 13 )
LABEL_114:
      Scaleform::Render::Text::Paragraph::AppendTermNull(
        appended,
        this->pTextAllocator.pObject,
        this->pDefaultTextFormat.pObject);
  }
  if ( (text->RTFlags & 1) != 0 )
    this->RTFlags |= 1u;
  return v69;
}

bool __fastcall Scaleform::RangeDataArray<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>,Scaleform::ArrayLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>>,2,Scaleform::ArrayDefaultPolicy>>::Iterator::IsFinished(
        Scaleform::RangeDataArray<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>,Scaleform::ArrayLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> >,2,Scaleform::ArrayDefaultPolicy> >::Iterator *this)
{
  __int64 Index; // rdx

  Index = this->Index;
  return Index < 0 || Index >= this->pArray->Ranges.Data.Size;
}

void __fastcall ActorWeapon::ActionFlagCheck(_SETJMP_FLOAT128 *JumpBuffer)
{
  ;
}

void __fastcall Scaleform::Render::Text::Paragraph::Remove(
        Scaleform::Render::Text::Paragraph *this,
        unsigned __int64 startPos,
        unsigned __int64 endPos)
{
  unsigned __int64 v5; // rbx
  unsigned __int64 Size; // r8

  if ( endPos == -1i64 )
  {
    v5 = -1i64;
  }
  else
  {
    v5 = endPos - startPos;
    if ( endPos == startPos )
      return;
  }
  Size = this->Text.Size;
  if ( startPos < Size )
  {
    if ( v5 + startPos < Size )
    {
      memmove(&this->Text.pText[startPos], &this->Text.pText[v5 + startPos], 2 * (Size - v5 - startPos));
      this->Text.Size -= v5;
    }
    else
    {
      this->Text.Size = startPos;
    }
  }
  Scaleform::RangeDataArray<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>,Scaleform::ArrayLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>>,2,Scaleform::ArrayDefaultPolicy>>::RemoveRange(
    &this->FormatInfo,
    startPos,
    v5);
  Scaleform::Render::Text::Paragraph::SetTermNullFormat(this);
  ++this->ModCounter;
}

void __fastcall Scaleform::Render::Text::StyledText::Remove(
        Scaleform::Render::Text::StyledText *this,
        unsigned __int64 startPos,
        unsigned __int64 length)
{
  unsigned __int64 v4; // rbp
  Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,Scaleform::AllocatorLH<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,2>,Scaleform::ArrayDefaultPolicy> > *pArray; // rbx
  wchar_t *v7; // r13
  __int64 CurIndex; // rdi
  unsigned __int64 v9; // r15
  Scaleform::Render::Text::Paragraph *pPara; // rcx
  unsigned __int64 Size; // rax
  unsigned __int64 v12; // rsi
  const Scaleform::Render::Text::Paragraph *v13; // rsi
  unsigned __int64 v14; // r12
  Scaleform::Render::Text::Paragraph *v15; // rbp
  Scaleform::Render::Text::ParagraphFormat *pObject; // rsi
  Scaleform::Render::Text::Paragraph *v18; // rbp
  bool v19; // cl
  const Scaleform::Render::Text::Paragraph *v20; // rsi
  signed __int64 v21; // rcx
  Scaleform::Render::Text::Paragraph *appended; // rax
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rdx
  unsigned __int64 pindexInParagraph; // [rsp+30h] [rbp-58h] BYREF
  Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,Scaleform::AllocatorLH<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,2>,Scaleform::ArrayDefaultPolicy> >::Iterator result; // [rsp+38h] [rbp-50h] BYREF
  bool v27; // [rsp+90h] [rbp+8h]
  unsigned __int64 v28; // [rsp+A0h] [rbp+18h]
  Scaleform::Render::Text::Paragraph *v29; // [rsp+A8h] [rbp+20h]

  v28 = length;
  v4 = length;
  if ( length == -1i64 )
  {
    v4 = Scaleform::Render::Text::StyledText::GetLength(this);
    v28 = v4;
  }
  this->OnTextRemoving(this, startPos, v4);
  Scaleform::Render::Text::StyledText::GetParagraphByIndex(this, &result, startPos, &pindexInParagraph);
  pArray = result.pArray;
  v7 = 0i64;
  CurIndex = result.CurIndex;
  v9 = v4;
  v29 = 0i64;
  v27 = 0;
  if ( result.pArray && result.CurIndex >= 0 && result.CurIndex < SLODWORD(result.pArray->Data.Size) )
  {
    pPara = result.pArray->Data.Data[result.CurIndex].pPara;
    Size = pPara->Text.Size;
    v12 = Size - pindexInParagraph;
    if ( v4 < Size - pindexInParagraph )
      v12 = v4;
    if ( v12 <= Size )
    {
      v29 = result.pArray->Data.Data[result.CurIndex].pPara;
      v27 = v12 + pindexInParagraph >= Size;
      Scaleform::Render::Text::Paragraph::Remove(pPara, pindexInParagraph, v12 + pindexInParagraph);
      v9 = v4 - v12;
      if ( CurIndex < (signed __int64)pArray->Data.Size )
        ++CurIndex;
    }
  }
  while ( pArray )
  {
    if ( CurIndex < 0 || CurIndex >= SLODWORD(pArray->Data.Size) )
      goto LABEL_25;
    v13 = pArray->Data.Data[CurIndex].pPara;
    v14 = v13->Text.Size;
    if ( v9 < v14 )
    {
      v18 = v29;
      if ( v29 && v27 )
      {
        Scaleform::Render::Text::Paragraph::Copy(v29, this->pTextAllocator.pObject, v13, v9, v29->Text.Size, v14 - v9);
        this->OnParagraphRemoving(this, v13);
        Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v13->Text.pText);
        v13->Text.pText = 0i64;
        v13->Text.Allocated = 0i64;
        v13->Text.Size = 0i64;
        if ( CurIndex < SLODWORD(pArray->Data.Size) )
          Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,Scaleform::AllocatorLH<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,2>,Scaleform::ArrayDefaultPolicy>>::RemoveAt(
            pArray,
            CurIndex);
        v19 = 0;
LABEL_27:
        if ( CurIndex >= 0 && CurIndex < SLODWORD(pArray->Data.Size) )
        {
          v20 = pArray->Data.Data[CurIndex].pPara;
          if ( v20->Text.Size )
          {
            if ( v18 && v19 )
            {
              Scaleform::Render::Text::Paragraph::Copy(
                v18,
                this->pTextAllocator.pObject,
                v20,
                0i64,
                v18->Text.Size,
                v20->Text.Size);
              goto LABEL_33;
            }
          }
          else
          {
LABEL_33:
            this->OnParagraphRemoving(this, v20);
            Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v20->Text.pText);
            v20->Text.pText = 0i64;
            v20->Text.Allocated = 0i64;
            v20->Text.Size = 0i64;
            if ( CurIndex < SLODWORD(pArray->Data.Size) )
              Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,Scaleform::AllocatorLH<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,2>,Scaleform::ArrayDefaultPolicy>>::RemoveAt(
                pArray,
                CurIndex);
          }
        }
        while ( CurIndex >= 0 && CurIndex < SLODWORD(pArray->Data.Size) )
        {
          pArray->Data.Data[CurIndex].pPara->StartIndex -= v28;
          if ( CurIndex < (signed __int64)pArray->Data.Size )
            ++CurIndex;
        }
        break;
      }
LABEL_26:
      v19 = v27;
      goto LABEL_27;
    }
    this->OnParagraphRemoving(this, pArray->Data.Data[CurIndex].pPara);
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v13->Text.pText);
    v13->Text.pText = 0i64;
    v13->Text.Allocated = 0i64;
    v13->Text.Size = 0i64;
    if ( CurIndex < SLODWORD(pArray->Data.Size) )
    {
      if ( pArray->Data.Size == 1 )
      {
        Scaleform::ArrayDataBase<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,Scaleform::AllocatorLH<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,2>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
          &pArray->Data,
          pArray,
          0i64);
      }
      else
      {
        v15 = pArray->Data.Data[CurIndex].pPara;
        if ( v15 )
        {
          Scaleform::ArrayDataBase<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>>,Scaleform::AllocatorLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>>,2>,Scaleform::ArrayDefaultPolicy>::~ArrayDataBase<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>>,Scaleform::AllocatorLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>>,2>,Scaleform::ArrayDefaultPolicy>(&v15->FormatInfo.Ranges.Data);
          pObject = v15->pFormat.pObject;
          if ( pObject )
          {
            if ( pObject->RefCount-- == 1 )
            {
              Scaleform::Render::Text::ParagraphFormat::~ParagraphFormat(pObject);
              Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, pObject);
            }
          }
          Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v15);
        }
        memmove(&pArray->Data.Data[CurIndex], &pArray->Data.Data[CurIndex + 1], 8 * (pArray->Data.Size - CurIndex) - 8);
        --pArray->Data.Size;
      }
    }
    v9 -= v14;
    if ( !v9 )
    {
LABEL_25:
      v18 = v29;
      goto LABEL_26;
    }
  }
  v21 = this->Paragraphs.Data.Size - 1;
  if ( v21 >= 0
    && v21 < SLODWORD(this->Paragraphs.Data.Size)
    && (appended = this->Paragraphs.Data.Data[v21].pPara) != 0i64
    || (appended = Scaleform::Render::Text::StyledText::AppendNewParagraph(this, 0i64)) != 0i64 )
  {
    v23 = appended->Text.Size;
    if ( !v23 )
      goto LABEL_54;
    v24 = v23 - 1;
    if ( appended->Text.pText && v24 < v23 )
      v7 = &appended->Text.pText[v24];
    if ( *v7 != 10 && *v7 != 13 )
LABEL_54:
      Scaleform::Render::Text::Paragraph::AppendTermNull(
        appended,
        this->pTextAllocator.pObject,
        this->pDefaultTextFormat.pObject);
  }
}

void __fastcall Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>>,Scaleform::AllocatorLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>>,2>,Scaleform::ArrayDefaultPolicy>>::RemoveAt(
        Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> >,Scaleform::AllocatorLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> >,2>,Scaleform::ArrayDefaultPolicy> > *this,
        unsigned __int64 index)
{
  unsigned __int64 v4; // r14
  Scaleform::Render::Text::TextFormat *pObject; // rdi

  if ( this->Data.Size == 1 )
  {
    Scaleform::ArrayDataBase<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>>,Scaleform::AllocatorLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>>,2>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
      &this->Data,
      this,
      0i64);
  }
  else
  {
    v4 = index;
    pObject = this->Data.Data[index].Data.pObject;
    if ( pObject )
    {
      if ( pObject->RefCount-- == 1 )
      {
        Scaleform::Render::Text::TextFormat::~TextFormat(pObject);
        Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, pObject);
      }
    }
    memmove(&this->Data.Data[v4], &this->Data.Data[v4 + 1], 24 * (this->Data.Size - index) - 24);
    --this->Data.Size;
  }
}

void __fastcall Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,Scaleform::AllocatorLH<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,2>,Scaleform::ArrayDefaultPolicy>>::RemoveAt(
        Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,Scaleform::AllocatorLH<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,2>,Scaleform::ArrayDefaultPolicy> > *this,
        unsigned __int64 index)
{
  if ( this->Data.Size == 1 )
  {
    Scaleform::ArrayDataBase<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,Scaleform::AllocatorLH<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,2>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
      &this->Data,
      this,
      0i64);
  }
  else
  {
    Scaleform::ConstructorMov<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper>::Destruct(&this->Data.Data[index]);
    memmove(&this->Data.Data[index], &this->Data.Data[index + 1], 8 * (this->Data.Size - index) - 8);
    --this->Data.Size;
  }
}

void __fastcall Scaleform::RangeDataArray<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>,Scaleform::ArrayLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>>,2,Scaleform::ArrayDefaultPolicy>>::RemoveRange(
        Scaleform::RangeDataArray<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>,Scaleform::ArrayLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> >,2,Scaleform::ArrayDefaultPolicy> > *this,
        __int64 startPos,
        unsigned __int64 length)
{
  unsigned __int64 Size; // rsi
  __int64 NearestRangeIndex; // rax
  __int64 v8; // rbx
  __int64 Index; // r9
  Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> > *v10; // rdx
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // r8
  bool v14; // cc
  signed __int64 v15; // rax
  __int64 v16; // rsi
  unsigned __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // r15
  __int64 v20; // rcx
  signed __int64 v21; // r8
  Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> > *v22; // rdx
  signed __int64 v23; // rax
  signed __int64 v24; // r14
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rcx
  Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> > *v27; // rdx
  Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> > *v28; // r8
  __int64 v29; // rcx
  Scaleform::RangeDataArray<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>,Scaleform::ArrayLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> >,2,Scaleform::ArrayDefaultPolicy> >::Iterator v30; // [rsp+20h] [rbp-28h] BYREF

  Size = this->Ranges.Data.Size;
  if ( !Size )
    return;
  NearestRangeIndex = Scaleform::RangeDataArray<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>,Scaleform::ArrayLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>>,2,Scaleform::ArrayDefaultPolicy>>::FindNearestRangeIndex(
                        this,
                        startPos);
  v30.pArray = this;
  v8 = NearestRangeIndex;
  if ( NearestRangeIndex >= 0 )
  {
    if ( NearestRangeIndex < Size )
    {
      v30.Index = NearestRangeIndex;
    }
    else
    {
      v8 = Size - 1;
      v30.Index = Size - 1;
    }
  }
  else
  {
    v8 = 0i64;
    v30.Index = 0i64;
  }
  if ( length == -1i64 )
    length = 0x7FFFFFFFFFFFFFFFi64 - startPos;
  Index = this->Ranges.Data.Data[v8].Index;
  v10 = &this->Ranges.Data.Data[v8];
  if ( startPos < Index )
    goto LABEL_41;
  v11 = v10->Length;
  if ( (__int64)(startPos + length - 1) <= (__int64)(v11 + Index - 1) )
  {
    if ( Index == startPos )
    {
      v12 = length;
      if ( (__int64)length > (__int64)v11 )
        v12 = v10->Length;
      v13 = v11 - v12;
      v10->Length = v13;
      v10->Index = Index + v12;
      if ( v13 )
        goto LABEL_47;
      goto LABEL_15;
    }
    if ( (__int64)(v11 + Index) <= (__int64)(startPos + length) )
    {
      if ( length <= v11 )
        v10->Length = v11 - length;
      else
        v10->Length = 0i64;
      v15 = this->Ranges.Data.Size;
      if ( v8 < v15 )
        v30.Index = ++v8;
      v16 = v8;
      if ( v8 < v15 )
        v30.Index = ++v8;
      goto LABEL_48;
    }
    if ( length <= v11 )
      v10->Length = v11 - length;
    else
      v10->Length = 0i64;
    if ( v10->Length )
      goto LABEL_23;
    goto LABEL_15;
  }
  if ( startPos < Index )
    goto LABEL_41;
  v17 = v10->Length;
  if ( startPos <= (__int64)(v17 + Index - 1) )
  {
    if ( Index + v17 - startPos <= v17 )
      v10->Length = startPos - Index;
    else
      v10->Length = 0i64;
    if ( v10->Length )
    {
LABEL_23:
      v14 = v8 < (signed __int64)this->Ranges.Data.Size;
      goto LABEL_45;
    }
LABEL_15:
    if ( v8 >= 0 && v8 < this->Ranges.Data.Size )
      Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>>,Scaleform::AllocatorLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>>,2>,Scaleform::ArrayDefaultPolicy>>::RemoveAt(
        &this->Ranges,
        v8);
    goto LABEL_47;
  }
  if ( startPos < Index )
    goto LABEL_41;
  if ( startPos <= (signed __int64)(v10->Length + Index - 1) )
  {
LABEL_44:
    v14 = v8 < (__int64)Size;
LABEL_45:
    if ( v14 )
      v30.Index = ++v8;
    goto LABEL_47;
  }
  if ( startPos >= Index )
    v18 = LODWORD(v10->Length) - startPos + Index - 1;
  else
LABEL_41:
    v18 = Index - startPos;
  if ( v18 <= 0 )
    goto LABEL_44;
LABEL_47:
  v16 = v8;
LABEL_48:
  if ( !Scaleform::RangeDataArray<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>,Scaleform::ArrayLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>>,2,Scaleform::ArrayDefaultPolicy>>::Iterator::IsFinished(&v30) )
  {
    v19 = v8;
    do
    {
      v20 = this->Ranges.Data.Data[v19].Index;
      if ( v20 < startPos
        || (signed __int64)(this->Ranges.Data.Data[v19].Length - 1 + v20) > (__int64)(length + startPos - 1) )
      {
        break;
      }
      if ( v8 >= 0 && v8 < this->Ranges.Data.Size )
        Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>>,Scaleform::AllocatorLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>>,2>,Scaleform::ArrayDefaultPolicy>>::RemoveAt(
          &this->Ranges,
          v8);
    }
    while ( !Scaleform::RangeDataArray<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>,Scaleform::ArrayLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>>,2,Scaleform::ArrayDefaultPolicy>>::Iterator::IsFinished(&v30) );
  }
  if ( v8 >= 0 && v8 < this->Ranges.Data.Size )
  {
    v21 = length + startPos - 1;
    v22 = &this->Ranges.Data.Data[v8];
    if ( v21 >= v22->Index )
    {
      v23 = v22->Length;
      if ( v21 <= v23 + v22->Index - 1 )
      {
        v24 = length + startPos - v22->Index;
        if ( v24 > v23 )
          v24 = v22->Length;
        v22->Index += v24;
        v22->Length = v23 - v24;
      }
    }
  }
  if ( v16 >= 0 )
  {
    v25 = v16 - 1;
    if ( v16 - 1 >= 0 )
    {
      v26 = this->Ranges.Data.Size;
      if ( v25 < v26 && v16 < v26 )
      {
        v27 = &this->Ranges.Data.Data[v25];
        v28 = &this->Ranges.Data.Data[v16];
        if ( v27->Index + v27->Length == v28->Index - length && v27->Data.pObject == v28->Data.pObject )
        {
          v27->Length += v28->Length;
          if ( v16 < this->Ranges.Data.Size )
            Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>>,Scaleform::AllocatorLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>>,2>,Scaleform::ArrayDefaultPolicy>>::RemoveAt(
              &this->Ranges,
              v16);
        }
      }
    }
  }
  v29 = v16;
  while ( v29 >= 0 && v16 < this->Ranges.Data.Size )
  {
    this->Ranges.Data.Data[v29].Index -= length;
    if ( v16 < (signed __int64)this->Ranges.Data.Size )
    {
      ++v16;
      ++v29;
    }
  }
}

void __fastcall Scaleform::Render::Text::Paragraph::RemoveTermNull(Scaleform::Render::Text::Paragraph *this)
{
  unsigned __int64 Size; // rdx
  wchar_t *pText; // rax
  unsigned __int64 v4; // r8
  wchar_t *v5; // rcx
  bool v6; // cf
  wchar_t *v7; // r8
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // rcx

  Size = this->Text.Size;
  if ( Size )
  {
    pText = this->Text.pText;
    v4 = Size - 1;
    v5 = 0i64;
    if ( !pText || (v6 = v4 < Size, v7 = &pText[v4], !v6) )
      v7 = 0i64;
    if ( !*v7 )
    {
      v8 = Size - 1;
      if ( pText && v8 < Size )
        v5 = &pText[v8];
      if ( !*v5 )
        --Size;
      Scaleform::RangeDataArray<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>,Scaleform::ArrayLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>>,2,Scaleform::ArrayDefaultPolicy>>::RemoveRange(
        &this->FormatInfo,
        Size,
        1ui64);
      v9 = this->Text.Size;
      if ( v9 )
      {
        if ( !this->Text.pText[v9 - 1] )
          this->Text.Size = v9 - 1;
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

void __fastcall Scaleform::Render::Text::Style::Reset(Scaleform::Render::Text::Style *this)
{
  const Scaleform::Render::Text::TextFormat *v2; // rax
  Scaleform::Render::Text::TextFormat v3; // [rsp+20h] [rbp-58h] BYREF

  Scaleform::Render::Text::TextFormat::TextFormat(&v3, this->mTextFormat.FontList.pHeap);
  Scaleform::Render::Text::TextFormat::operator=(&this->mTextFormat, v2);
  Scaleform::Render::Text::TextFormat::~TextFormat(&v3);
  v3.RefCount = 1;
  v3.pAllocator = 0i64;
  memset(&v3.FontList, 0, 20);
  Scaleform::Render::Text::ParagraphFormat::operator=(
    &this->mParagraphFormat,
    (const Scaleform::Render::Text::ParagraphFormat *)&v3);
  Scaleform::Render::Text::ParagraphFormat::~ParagraphFormat((Scaleform::Render::Text::ParagraphFormat *)&v3);
}

void __fastcall Scaleform::ArrayDataBase<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>>,Scaleform::AllocatorLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>>,2>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
        Scaleform::ArrayDataBase<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> >,Scaleform::AllocatorLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> >,2>,Scaleform::ArrayDefaultPolicy> *this,
        const void *pheapAddr,
        unsigned __int64 newSize)
{
  unsigned __int64 Size; // rdx

  Size = this->Size;
  if ( newSize >= Size )
  {
    if ( newSize <= this->Policy.Capacity )
    {
      this->Size = newSize;
    }
    else
    {
      Scaleform::ArrayDataBase<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>>,Scaleform::AllocatorLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>>,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        this,
        pheapAddr,
        newSize + (newSize >> 2));
      this->Size = newSize;
    }
  }
  else
  {
    Scaleform::ConstructorMov<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>>>::DestructArray(
      &this->Data[newSize],
      Size - newSize);
    if ( newSize < this->Policy.Capacity >> 1 )
      Scaleform::ArrayDataBase<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>>,Scaleform::AllocatorLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>>,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        this,
        pheapAddr,
        newSize);
    this->Size = newSize;
  }
}

void __fastcall Scaleform::ArrayDataBase<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,Scaleform::AllocatorLH<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,2>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
        Scaleform::ArrayDataBase<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,Scaleform::AllocatorLH<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,2>,Scaleform::ArrayDefaultPolicy> *this,
        const void *pheapAddr,
        unsigned __int64 newSize)
{
  unsigned __int64 Size; // rdx

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
    Scaleform::ConstructorMov<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper>::DestructArray(
      &this->Data[newSize],
      Size - newSize);
    if ( newSize < this->Policy.Capacity >> 1 )
      Scaleform::ArrayDataBase<Scaleform::Render::Text::LineBuffer::Line *,Scaleform::AllocatorLH<Scaleform::Render::Text::LineBuffer::Line *,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        (Scaleform::ArrayDataBase<Scaleform::Render::TextureFormat *,Scaleform::AllocatorLH<Scaleform::Render::TextureFormat *,2>,Scaleform::ArrayDefaultPolicy> *)this,
        pheapAddr,
        newSize);
    this->Size = newSize;
  }
}

Scaleform::Render::Text::Paragraph::StyledTextRun *__fastcall Scaleform::Render::Text::Paragraph::StyledTextRun::Set(
        Scaleform::Render::Text::Paragraph::StyledTextRun *this,
        const wchar_t *ptext,
        __int64 index,
        unsigned __int64 len,
        Scaleform::Render::Text::TextFormat *pfmt)
{
  Scaleform::Render::Text::TextFormat *pObject; // rsi
  bool v7; // zf
  Scaleform::Render::Text::Paragraph::StyledTextRun *result; // rax

  this->pText = ptext;
  this->Index = index;
  this->Length = len;
  if ( pfmt )
    ++pfmt->RefCount;
  pObject = this->pFormat.pObject;
  if ( pObject && (v7 = pObject->RefCount == 1, --pObject->RefCount, v7) )
  {
    Scaleform::Render::Text::TextFormat::~TextFormat(pObject);
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, pObject);
    result = this;
    this->pFormat.pObject = pfmt;
  }
  else
  {
    result = this;
    this->pFormat.pObject = pfmt;
  }
  return result;
}

void __fastcall Scaleform::Render::Text::StyledText::SetDefaultParagraphFormat(
        Scaleform::Render::Text::StyledText *this,
        const Scaleform::Render::Text::ParagraphFormat *defaultParagraphFmt)
{
  Scaleform::Render::Text::Allocator *Allocator; // rax
  Scaleform::Render::Text::ParagraphFormat *ParagraphFormat; // rax
  Scaleform::Render::Text::ParagraphFormat *pObject; // rbx
  Scaleform::Render::Text::ParagraphFormat *v7; // rsi

  Allocator = Scaleform::Render::Text::StyledText::GetAllocator(this);
  ParagraphFormat = Scaleform::Render::Text::Allocator::AllocateParagraphFormat(Allocator, defaultParagraphFmt);
  pObject = this->pDefaultParagraphFormat.pObject;
  v7 = ParagraphFormat;
  if ( pObject )
  {
    if ( pObject->RefCount-- == 1 )
    {
      Scaleform::Render::Text::ParagraphFormat::~ParagraphFormat(pObject);
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, pObject);
    }
  }
  this->pDefaultParagraphFormat.pObject = v7;
}

void __fastcall Scaleform::Render::Text::StyledText::SetDefaultParagraphFormat(
        Scaleform::Render::Text::StyledText *this,
        const Scaleform::Render::Text::ParagraphFormat *pdefaultParagraphFmt)
{
  Scaleform::Render::Text::ParagraphFormat *pObject; // rdi
  bool v5; // zf

  if ( pdefaultParagraphFmt )
    ++pdefaultParagraphFmt->RefCount;
  pObject = this->pDefaultParagraphFormat.pObject;
  if ( pObject && (v5 = pObject->RefCount == 1, --pObject->RefCount, v5) )
  {
    Scaleform::Render::Text::ParagraphFormat::~ParagraphFormat(pObject);
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, pObject);
    this->pDefaultParagraphFormat.pObject = (Scaleform::Render::Text::ParagraphFormat *)pdefaultParagraphFmt;
  }
  else
  {
    this->pDefaultParagraphFormat.pObject = (Scaleform::Render::Text::ParagraphFormat *)pdefaultParagraphFmt;
  }
}

void __fastcall Scaleform::Render::Text::StyledText::SetDefaultTextFormat(
        Scaleform::Render::Text::StyledText *this,
        const Scaleform::Render::Text::TextFormat *defaultTextFmt)
{
  Scaleform::Render::Text::Allocator *Allocator; // rax
  Scaleform::Render::Text::TextFormat *v5; // rax
  Scaleform::Render::Text::TextFormat *pObject; // rdi
  Scaleform::Render::Text::TextFormat *v7; // rsi
  bool v8; // zf
  Scaleform::Render::Text::Allocator *v9; // rax
  Scaleform::Render::Text::TextFormat *TextFormat; // rax
  Scaleform::Render::Text::TextFormat *v11; // rdi
  Scaleform::Render::Text::TextFormat *v12; // rsi
  Scaleform::Render::Text::TextFormat srcfmt; // [rsp+20h] [rbp-58h] BYREF

  if ( Scaleform::Render::Text::TextFormat::GetImageDesc((Scaleform::Render::Text::TextFormat *)defaultTextFmt) )
  {
    Scaleform::Render::Text::TextFormat::TextFormat(&srcfmt, defaultTextFmt, 0i64);
    if ( srcfmt.pImageDesc.pObject )
      Scaleform::RefCountNTSImpl::Release(srcfmt.pImageDesc.pObject);
    srcfmt.pImageDesc.pObject = 0i64;
    srcfmt.PresentMask |= 0x200u;
    Allocator = Scaleform::Render::Text::StyledText::GetAllocator(this);
    v5 = Scaleform::Render::Text::Allocator::AllocateTextFormat(Allocator, &srcfmt);
    pObject = this->pDefaultTextFormat.pObject;
    v7 = v5;
    if ( pObject )
    {
      v8 = pObject->RefCount-- == 1;
      if ( v8 )
      {
        Scaleform::Render::Text::TextFormat::~TextFormat(pObject);
        Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, pObject);
      }
    }
    this->pDefaultTextFormat.pObject = v7;
    Scaleform::Render::Text::TextFormat::~TextFormat(&srcfmt);
  }
  else
  {
    v9 = Scaleform::Render::Text::StyledText::GetAllocator(this);
    TextFormat = Scaleform::Render::Text::Allocator::AllocateTextFormat(v9, defaultTextFmt);
    v11 = this->pDefaultTextFormat.pObject;
    v12 = TextFormat;
    if ( v11 )
    {
      v8 = v11->RefCount-- == 1;
      if ( v8 )
      {
        Scaleform::Render::Text::TextFormat::~TextFormat(v11);
        Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v11);
      }
    }
    this->pDefaultTextFormat.pObject = v12;
  }
}

void __fastcall Scaleform::Render::Text::StyledText::SetDefaultTextFormat(
        Scaleform::Render::Text::StyledText *this,
        const Scaleform::Render::Text::TextFormat *pdefaultTextFmt)
{
  Scaleform::Render::Text::TextFormat *pObject; // rdi

  if ( Scaleform::Render::Text::TextFormat::GetImageDesc((Scaleform::Render::Text::TextFormat *)pdefaultTextFmt) )
  {
    Scaleform::Render::Text::StyledText::SetDefaultTextFormat(this, pdefaultTextFmt);
  }
  else
  {
    if ( pdefaultTextFmt )
      ++pdefaultTextFmt->RefCount;
    pObject = this->pDefaultTextFormat.pObject;
    if ( pObject )
    {
      if ( pObject->RefCount-- == 1 )
      {
        Scaleform::Render::Text::TextFormat::~TextFormat(pObject);
        Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, pObject);
      }
    }
    this->pDefaultTextFormat.pObject = (Scaleform::Render::Text::TextFormat *)pdefaultTextFmt;
  }
}

void __fastcall Scaleform::Render::Text::Paragraph::SetFormat(
        Scaleform::Render::Text::Paragraph *this,
        Scaleform::Render::Text::Allocator *pallocator,
        const Scaleform::Render::Text::ParagraphFormat *fmt)
{
  Scaleform::Render::Text::ParagraphFormat *pObject; // rcx
  const Scaleform::Render::Text::ParagraphFormat *v6; // rax
  Scaleform::Render::Text::ParagraphFormat *ParagraphFormat; // rbx
  Scaleform::Render::Text::ParagraphFormat *v8; // rsi
  bool v9; // zf
  Scaleform::Render::Text::ParagraphFormat result; // [rsp+20h] [rbp-38h] BYREF

  pObject = this->pFormat.pObject;
  if ( pObject )
  {
    v6 = Scaleform::Render::Text::ParagraphFormat::Merge(pObject, &result, fmt);
    ParagraphFormat = Scaleform::Render::Text::Allocator::AllocateParagraphFormat(pallocator, v6);
    Scaleform::Render::Text::ParagraphFormat::~ParagraphFormat(&result);
  }
  else
  {
    ParagraphFormat = Scaleform::Render::Text::Allocator::AllocateParagraphFormat(pallocator, fmt);
  }
  if ( ParagraphFormat )
    ++ParagraphFormat->RefCount;
  v8 = this->pFormat.pObject;
  if ( v8 )
  {
    v9 = v8->RefCount-- == 1;
    if ( v9 )
    {
      Scaleform::Render::Text::ParagraphFormat::~ParagraphFormat(v8);
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v8);
    }
  }
  this->pFormat.pObject = ParagraphFormat;
  ++this->ModCounter;
  if ( ParagraphFormat )
  {
    v9 = ParagraphFormat->RefCount-- == 1;
    if ( v9 )
    {
      Scaleform::Render::Text::ParagraphFormat::~ParagraphFormat(ParagraphFormat);
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, ParagraphFormat);
    }
  }
}

void __fastcall Scaleform::Render::Text::StyledText::SetParagraphFormat(
        Scaleform::Render::Text::StyledText *this,
        const Scaleform::Render::Text::ParagraphFormat *fmt,
        unsigned __int64 startPos,
        unsigned __int64 endPos)
{
  Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,Scaleform::AllocatorLH<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,2>,Scaleform::ArrayDefaultPolicy> > *pArray; // r15
  unsigned __int64 v9; // rsi
  __int64 CurIndex; // rbx
  unsigned __int64 i; // rdi
  Scaleform::Render::Text::Paragraph *pPara; // r14
  unsigned __int64 Size; // rax
  unsigned __int64 v14; // rcx
  wchar_t *v15; // rcx
  Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,Scaleform::AllocatorLH<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,2>,Scaleform::ArrayDefaultPolicy> >::Iterator result; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 pindexInParagraph; // [rsp+70h] [rbp+18h] BYREF

  Scaleform::Render::Text::StyledText::GetParagraphByIndex(this, &result, startPos, &pindexInParagraph);
  pArray = result.pArray;
  v9 = endPos - startPos;
  CurIndex = result.CurIndex;
  for ( i = pindexInParagraph; pArray && CurIndex >= 0 && CurIndex < SLODWORD(pArray->Data.Size); i = 0i64 )
  {
    pPara = pArray->Data.Data[CurIndex].pPara;
    if ( !i )
      Scaleform::Render::Text::Paragraph::SetFormat(
        pArray->Data.Data[CurIndex].pPara,
        this->pTextAllocator.pObject,
        fmt);
    if ( !v9 )
      break;
    Size = pPara->Text.Size;
    if ( Size )
    {
      v14 = Size - 1;
      if ( pPara->Text.pText && v14 < Size )
        v15 = &pPara->Text.pText[v14];
      else
        v15 = 0i64;
      if ( !*v15 )
        --Size;
    }
    if ( v9 <= Size )
      Size = v9 + i;
    v9 += i - Size;
    if ( CurIndex < (signed __int64)pArray->Data.Size )
      ++CurIndex;
  }
}

void __fastcall Scaleform::RangeDataArray<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>,Scaleform::ArrayLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>>,2,Scaleform::ArrayDefaultPolicy>>::SetRange(
        Scaleform::RangeDataArray<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>,Scaleform::ArrayLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> >,2,Scaleform::ArrayDefaultPolicy> > *this,
        const Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> > *range)
{
  unsigned __int64 Size; // rbp
  __int64 Index; // rbx
  __int64 NearestRangeIndex; // rax
  __int64 v7; // rdi
  __int64 v8; // r9
  Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> > *v9; // rdx
  unsigned __int64 v10; // r8
  signed __int64 v11; // rax
  Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> > *v12; // rcx
  Scaleform::Render::Text::TextFormat *pObject; // rax
  __int64 v14; // r10
  signed __int64 v15; // r8
  Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> > *v16; // rcx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rdx
  signed __int64 v19; // rcx
  __int64 v20; // r15
  Scaleform::Render::Text::TextFormat *v21; // rbx
  unsigned __int64 v23; // rax
  unsigned __int64 Length; // rax
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rax
  __int64 v27; // r8
  int v28; // eax
  __int64 v29; // r8
  unsigned __int64 v30; // rdx
  Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> > *v31; // r8
  __int64 v32; // r9
  __int64 v33; // rax
  __int64 v34; // rdx
  unsigned __int64 v35; // rbx
  Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> > *v36; // rdx
  unsigned __int64 v37; // rax
  __int64 v38; // rdx
  unsigned __int64 v39; // r9
  Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> > *v40; // r8
  Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> > *v41; // rcx
  Scaleform::RangeDataArray<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>,Scaleform::ArrayLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> >,2,Scaleform::ArrayDefaultPolicy> >::Iterator v42; // [rsp+20h] [rbp-48h] BYREF
  Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> > val; // [rsp+30h] [rbp-38h] BYREF

  Size = this->Ranges.Data.Size;
  if ( !Size )
  {
    Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>>,Scaleform::AllocatorLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>>,2>,Scaleform::ArrayDefaultPolicy>>::InsertAt(
      &this->Ranges,
      0i64,
      range);
    return;
  }
  Index = range->Index;
  NearestRangeIndex = Scaleform::RangeDataArray<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>,Scaleform::ArrayLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>>,2,Scaleform::ArrayDefaultPolicy>>::FindNearestRangeIndex(
                        this,
                        range->Index);
  v42.pArray = this;
  v7 = NearestRangeIndex;
  if ( NearestRangeIndex >= 0 )
  {
    if ( NearestRangeIndex < Size )
    {
      v42.Index = NearestRangeIndex;
    }
    else
    {
      v7 = Size - 1;
      v42.Index = Size - 1;
    }
  }
  else
  {
    v7 = 0i64;
    v42.Index = 0i64;
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
        if ( v7 < (signed __int64)this->Ranges.Data.Size )
          v42.Index = ++v7;
LABEL_34:
        v20 = v7;
        Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>>,Scaleform::AllocatorLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>>,2>,Scaleform::ArrayDefaultPolicy>>::InsertAt(
          &this->Ranges,
          v7,
          range);
        goto LABEL_54;
      }
    }
    v27 = v9->Index;
    if ( Index < v9->Index )
      goto LABEL_46;
    if ( Index <= (signed __int64)(v9->Length + v27 - 1) )
      goto LABEL_50;
    if ( Index >= v27 )
      v28 = LODWORD(v9->Length) - Index + v27 - 1;
    else
LABEL_46:
      v28 = v27 - Index;
    if ( v28 > 0 )
    {
LABEL_49:
      Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>>,Scaleform::AllocatorLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>>,2>,Scaleform::ArrayDefaultPolicy>>::InsertAt(
        &this->Ranges,
        v7,
        range);
      goto LABEL_53;
    }
LABEL_50:
    Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>>,Scaleform::AllocatorLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>>,2>,Scaleform::ArrayDefaultPolicy>>::InsertAt(
      &this->Ranges,
      v7 + 1,
      range);
    if ( v7 < (signed __int64)this->Ranges.Data.Size )
      ++v7;
    v42.Index = v7;
    goto LABEL_53;
  }
  v11 = v9->Length;
  if ( v9->Index != Index )
  {
    if ( v9->Index + v11 > (__int64)(v10 + Index) )
    {
      pObject = v9->Data.pObject;
      v14 = v9->Index;
      v15 = v9->Length;
      if ( pObject )
        ++pObject->RefCount;
      v16 = &this->Ranges.Data.Data[v8];
      val.Data.pObject = v9->Data.pObject;
      v17 = v16->Index + v16->Length - range->Index;
      v18 = v16->Length;
      if ( v17 <= v18 )
        v16->Length = v18 - v17;
      else
        v16->Length = 0i64;
      v19 = range->Length + this->Ranges.Data.Data[v8].Length;
      if ( v19 > v15 )
        v19 = v15;
      val.Length = v15 - v19;
      val.Index = v19 + v14;
      Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>>,Scaleform::AllocatorLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>>,2>,Scaleform::ArrayDefaultPolicy>>::InsertAt(
        &this->Ranges,
        v7 + 1,
        range);
      if ( v7 < (signed __int64)this->Ranges.Data.Size )
        ++v7;
      v20 = v7;
      Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>>,Scaleform::AllocatorLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>>,2>,Scaleform::ArrayDefaultPolicy>>::InsertAt(
        &this->Ranges,
        v7 + 1,
        &val);
      if ( v7 < (signed __int64)this->Ranges.Data.Size )
        ++v7;
      v21 = val.Data.pObject;
      v42.Index = v7;
      if ( val.Data.pObject )
      {
        if ( val.Data.pObject->RefCount-- == 1 )
        {
          Scaleform::Render::Text::TextFormat::~TextFormat(v21);
          Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v21);
        }
      }
      goto LABEL_56;
    }
    v23 = v9->Length;
    if ( v10 <= v23 )
      v9->Length = v23 - v10;
    else
      v9->Length = 0i64;
    if ( v7 < (signed __int64)this->Ranges.Data.Size )
      v42.Index = ++v7;
    goto LABEL_34;
  }
  if ( (__int64)v10 > v11 )
    v10 = v9->Length;
  v9->Index += v10;
  v9->Length = v11 - v10;
  v12 = &this->Ranges.Data.Data[v8];
  if ( v12->Length )
    goto LABEL_49;
  Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>>::operator=(v12, range);
LABEL_53:
  v20 = v7;
LABEL_54:
  if ( v7 < (signed __int64)this->Ranges.Data.Size )
    v42.Index = ++v7;
LABEL_56:
  while ( !Scaleform::RangeDataArray<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>,Scaleform::ArrayLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>>,2,Scaleform::ArrayDefaultPolicy>>::Iterator::IsFinished(&v42) )
  {
    v29 = this->Ranges.Data.Data[v7].Index;
    if ( v29 < range->Index
      || (signed __int64)(this->Ranges.Data.Data[v7].Length + v29 - 1) > (signed __int64)(range->Length
                                                                                        - 1
                                                                                        + range->Index) )
    {
      break;
    }
    if ( v7 >= 0 && v7 < this->Ranges.Data.Size )
      Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>>,Scaleform::AllocatorLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>>,2>,Scaleform::ArrayDefaultPolicy>>::RemoveAt(
        &this->Ranges,
        v7);
  }
  if ( v7 >= 0 && v7 < this->Ranges.Data.Size )
  {
    v30 = range->Length;
    v31 = &this->Ranges.Data.Data[v7];
    v32 = v30 + range->Index - 1;
    if ( v32 >= v31->Index )
    {
      v33 = v31->Length;
      if ( v32 <= v33 + v31->Index - 1 )
      {
        v34 = range->Index + v30 - v31->Index;
        if ( v34 > v33 )
          v34 = v31->Length;
        v31->Index += v34;
        v31->Length = v33 - v34;
      }
    }
  }
  if ( v20 >= 0 )
  {
    v35 = v20 - 1;
    if ( v20 - 1 >= 0 && v35 < this->Ranges.Data.Size )
    {
      v36 = &this->Ranges.Data.Data[v35];
      if ( v36->Length )
      {
        if ( v36->Index + v36->Length == range->Index && v36->Data.pObject == this->Ranges.Data.Data[v20].Data.pObject )
        {
          v36->Length += range->Length;
          if ( v20 < this->Ranges.Data.Size )
            Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>>,Scaleform::AllocatorLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>>,2>,Scaleform::ArrayDefaultPolicy>>::RemoveAt(
              &this->Ranges,
              v20);
          --v20;
        }
      }
      else
      {
        Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>>,Scaleform::AllocatorLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>>,2>,Scaleform::ArrayDefaultPolicy>>::RemoveAt(
          &this->Ranges,
          --v20);
      }
    }
  }
  v37 = this->Ranges.Data.Size;
  v38 = v20;
  if ( v20 < (__int64)v37 )
    v38 = v20 + 1;
  if ( v38 >= 0 && v38 < v37 )
  {
    v39 = this->Ranges.Data.Data[v38].Length;
    v40 = &this->Ranges.Data.Data[v38];
    if ( !v39
      || (v41 = &this->Ranges.Data.Data[v20], v41->Index + v41->Length == v40->Index)
      && v41->Data.pObject == v40->Data.pObject
      && (v41->Length += v39, v38 < this->Ranges.Data.Size) )
    {
      Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>>,Scaleform::AllocatorLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>>,2>,Scaleform::ArrayDefaultPolicy>>::RemoveAt(
        &this->Ranges,
        v38);
    }
  }
}

void __fastcall Scaleform::Render::Text::Paragraph::SetTermNullFormat(Scaleform::Render::Text::Paragraph *this)
{
  unsigned __int64 Size; // rdi
  wchar_t *pText; // rax
  unsigned __int64 v4; // r8
  wchar_t *v5; // rdx
  wchar_t *v6; // rcx
  unsigned __int64 v7; // rcx

  Size = this->Text.Size;
  if ( Size )
  {
    pText = this->Text.pText;
    v4 = Size - 1;
    v5 = 0i64;
    if ( !this->Text.pText || (v6 = &pText[v4], v4 >= Size) )
      v6 = 0i64;
    if ( !*v6 )
    {
      v7 = Size - 1;
      if ( pText && v7 < Size )
        v5 = &pText[v7];
      if ( !*v5 )
        --Size;
      Scaleform::RangeDataArray<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>,Scaleform::ArrayLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>>,2,Scaleform::ArrayDefaultPolicy>>::ExpandRange(
        &this->FormatInfo,
        Size,
        1ui64);
      Scaleform::RangeDataArray<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>,Scaleform::ArrayLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>>,2,Scaleform::ArrayDefaultPolicy>>::RemoveRange(
        &this->FormatInfo,
        Size + 1,
        1ui64);
    }
  }
}

void __fastcall Scaleform::Render::Text::StyledText::SetText(
        Scaleform::Render::Text::StyledText *this,
        const char *putf8String,
        unsigned __int64 stringSize)
{
  Scaleform::Render::Text::StyledText::Clear(this);
  Scaleform::Render::Text::StyledText::AppendString(
    this,
    putf8String,
    stringSize,
    NLP_ReplaceCRLF,
    this->pDefaultTextFormat.pObject,
    this->pDefaultParagraphFormat.pObject);
}

void __fastcall Scaleform::Render::Text::StyledText::SetText(
        Scaleform::Render::Text::StyledText *this,
        const wchar_t *pstr,
        unsigned __int64 length)
{
  Scaleform::Render::Text::StyledText::Clear(this);
  Scaleform::Render::Text::StyledText::AppendString(
    this,
    pstr,
    length,
    NLP_ReplaceCRLF,
    this->pDefaultTextFormat.pObject,
    this->pDefaultParagraphFormat.pObject);
}

void __fastcall Scaleform::Render::Text::Paragraph::SetTextFormat(
        Scaleform::Render::Text::Paragraph *this,
        Scaleform::Render::Text::Allocator *pallocator,
        const Scaleform::Render::Text::TextFormat *fmt,
        unsigned __int64 startPos,
        unsigned __int64 endPos)
{
  Scaleform::Render::Text::Allocator *v5; // rbx
  Scaleform::Render::Text::Paragraph *v6; // r12
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // r15
  Scaleform::Render::Text::TextFormat *pObject; // rsi
  unsigned __int64 CurTextIndex; // rbp
  __int64 Index; // r14
  unsigned __int64 Size; // rdi
  Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> > *v13; // rdx
  Scaleform::Render::Text::TextFormat *v14; // rbx
  unsigned __int64 v15; // r12
  unsigned __int64 Length; // rdi
  bool v17; // zf
  __int64 v18; // r15
  const Scaleform::Render::Text::TextFormat *v19; // rax
  const Scaleform::Render::Text::TextFormat *v20; // rdx
  unsigned __int64 v21; // r13
  Scaleform::Render::Text::TextFormat *TextFormat; // rbx
  Scaleform::Render::Text::TextFormat *v23; // r15
  const Scaleform::Render::Text::Paragraph::TextBuffer *pText; // r9
  __int64 v25; // r15
  const Scaleform::RangeDataArray<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>,Scaleform::ArrayLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> >,2,Scaleform::ArrayDefaultPolicy> > *pArray; // rbx
  signed __int64 v27; // r12
  unsigned __int64 v28; // r15
  Scaleform::Render::Text::TextFormat *v29; // rdi
  __int64 v30; // rdx
  Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> > *v31; // r8
  Scaleform::Render::Text::TextFormat *v32; // [rsp+20h] [rbp-168h]
  Scaleform::RangeDataArray<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>,Scaleform::ArrayLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> >,2,Scaleform::ArrayDefaultPolicy> > *p_FormatInfo; // [rsp+28h] [rbp-160h]
  Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> > range; // [rsp+30h] [rbp-158h] BYREF
  Scaleform::Render::Text::Paragraph::FormatRunIterator v35; // [rsp+50h] [rbp-138h] BYREF
  Scaleform::Render::Text::TextFormat v36; // [rsp+A0h] [rbp-E8h] BYREF
  Scaleform::Render::Text::TextFormat result; // [rsp+F0h] [rbp-98h] BYREF
  unsigned __int64 endPosa; // [rsp+1B0h] [rbp+28h]

  v5 = pallocator;
  v6 = this;
  v7 = startPos;
  p_FormatInfo = &this->FormatInfo;
  Scaleform::Render::Text::Paragraph::FormatRunIterator::FormatRunIterator(
    &v35,
    &this->FormatInfo,
    &this->Text,
    startPos);
  v8 = v7;
  if ( endPos >= v7 )
    v8 = endPos;
  if ( v8 == -1i64 )
  {
    endPosa = 0x7FFFFFFFFFFFFFFFi64;
  }
  else
  {
    endPosa = v8 - v7;
    if ( (__int64)(v8 - v7) <= 0 )
    {
      pObject = v35.PlaceHolder.pFormat.pObject;
      goto LABEL_63;
    }
  }
  pObject = v35.PlaceHolder.pFormat.pObject;
  CurTextIndex = v35.CurTextIndex;
  Index = v35.FormatIterator.Index;
  do
  {
    Size = v35.pText->Size;
    if ( CurTextIndex >= Size )
      break;
    if ( Index < 0
      || Index >= v35.FormatIterator.pArray->Ranges.Data.Size
      || (Size = v35.FormatIterator.pArray->Ranges.Data.Data[Index].Index,
          v13 = &v35.FormatIterator.pArray->Ranges.Data.Data[Index],
          CurTextIndex < Size) )
    {
      Length = Size - CurTextIndex;
      v15 = CurTextIndex;
      if ( pObject )
      {
        v17 = pObject->RefCount-- == 1;
        if ( v17 )
        {
          Scaleform::Render::Text::TextFormat::~TextFormat(pObject);
          Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, pObject);
        }
      }
      pObject = 0i64;
    }
    else
    {
      v14 = v13->Data.pObject;
      v15 = v35.FormatIterator.pArray->Ranges.Data.Data[Index].Index;
      Length = v13->Length;
      if ( v14 )
        ++v14->RefCount;
      if ( pObject )
      {
        v17 = pObject->RefCount-- == 1;
        if ( v17 )
        {
          Scaleform::Render::Text::TextFormat::~TextFormat(pObject);
          Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, pObject);
        }
      }
      pObject = v14;
      v5 = pallocator;
    }
    v18 = v15;
    if ( v7 > v15 )
      v18 = v7;
    Scaleform::Render::Text::TextFormat::TextFormat(&v36, v5->pHeap);
    if ( pObject )
    {
      v19 = Scaleform::Render::Text::TextFormat::Merge(pObject, &result, fmt);
      Scaleform::Render::Text::TextFormat::operator=(&v36, v19);
      Scaleform::Render::Text::TextFormat::~TextFormat(&result);
      v20 = &v36;
    }
    else
    {
      v20 = fmt;
    }
    v21 = endPosa;
    TextFormat = Scaleform::Render::Text::Allocator::AllocateTextFormat(v5, v20);
    v32 = TextFormat;
    range.Index = v18;
    if ( v15 + Length - v18 < endPosa )
      v21 = v15 + Length - v18;
    range.Length = v21;
    if ( TextFormat )
      ++TextFormat->RefCount;
    range.Data.pObject = TextFormat;
    Scaleform::RangeDataArray<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>,Scaleform::ArrayLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>>,2,Scaleform::ArrayDefaultPolicy>>::SetRange(
      p_FormatInfo,
      &range);
    v23 = range.Data.pObject;
    if ( range.Data.pObject )
    {
      v17 = range.Data.pObject->RefCount-- == 1;
      if ( v17 )
      {
        Scaleform::Render::Text::TextFormat::~TextFormat(v23);
        Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v23);
      }
    }
    pText = v35.pText;
    v25 = endPosa - v21;
    endPosa -= v21;
    if ( CurTextIndex < v35.pText->Size )
    {
      pArray = v35.FormatIterator.pArray;
      v27 = Length + v15;
      do
      {
        if ( Index < 0
          || Index >= pArray->Ranges.Data.Size
          || (v28 = pArray->Ranges.Data.Data[Index].Index, CurTextIndex < v28) )
        {
          v28 = CurTextIndex;
          if ( pObject )
          {
            v17 = pObject->RefCount-- == 1;
            if ( v17 )
            {
              Scaleform::Render::Text::TextFormat::~TextFormat(pObject);
              Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, pObject);
              pText = v35.pText;
            }
          }
          pObject = 0i64;
        }
        else
        {
          v29 = pArray->Ranges.Data.Data[Index].Data.pObject;
          if ( v29 )
            ++v29->RefCount;
          if ( pObject )
          {
            v17 = pObject->RefCount-- == 1;
            if ( v17 )
            {
              Scaleform::Render::Text::TextFormat::~TextFormat(pObject);
              Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, pObject);
              pText = v35.pText;
            }
          }
          pObject = v29;
        }
        if ( (__int64)v28 >= v27 )
          break;
        if ( Index < 0 || (v30 = pArray->Ranges.Data.Size, Index >= (unsigned __int64)v30) )
        {
          CurTextIndex = pText->Size;
        }
        else
        {
          v31 = &pArray->Ranges.Data.Data[Index];
          if ( CurTextIndex >= v31->Index )
          {
            CurTextIndex += v31->Length;
            if ( Index < v30 )
              ++Index;
          }
          else
          {
            CurTextIndex = v31->Index;
          }
        }
      }
      while ( CurTextIndex < pText->Size );
      TextFormat = v32;
      v25 = endPosa;
    }
    if ( TextFormat )
    {
      v17 = TextFormat->RefCount-- == 1;
      if ( v17 )
      {
        Scaleform::Render::Text::TextFormat::~TextFormat(TextFormat);
        Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, TextFormat);
      }
    }
    Scaleform::Render::Text::TextFormat::~TextFormat(&v36);
    v7 = startPos;
    v5 = pallocator;
  }
  while ( v25 > 0 );
  v6 = this;
LABEL_63:
  ++v6->ModCounter;
  if ( pObject )
  {
    v17 = pObject->RefCount-- == 1;
    if ( v17 )
    {
      Scaleform::Render::Text::TextFormat::~TextFormat(pObject);
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, pObject);
    }
  }
}

void __fastcall Scaleform::Render::Text::StyledText::SetTextFormat(
        Scaleform::Render::Text::StyledText *this,
        const Scaleform::Render::Text::TextFormat *fmt,
        unsigned __int64 startPos,
        unsigned __int64 endPos)
{
  Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,Scaleform::AllocatorLH<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,2>,Scaleform::ArrayDefaultPolicy> > *pArray; // r14
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rbp
  __int64 CurIndex; // rdi
  Scaleform::Render::Text::Paragraph *pPara; // r10
  unsigned __int64 Size; // rax
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  wchar_t *v16; // rdx
  unsigned __int64 v17; // rbx
  unsigned __int64 v18; // rcx
  wchar_t *v19; // rax
  Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,Scaleform::AllocatorLH<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,2>,Scaleform::ArrayDefaultPolicy> >::Iterator result; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int64 pindexInParagraph; // [rsp+78h] [rbp+10h] BYREF

  Scaleform::Render::Text::StyledText::GetParagraphByIndex(this, &result, startPos, &pindexInParagraph);
  pArray = result.pArray;
  v9 = endPos - startPos;
  v10 = pindexInParagraph;
  CurIndex = result.CurIndex;
  while ( pArray && CurIndex >= 0 && CurIndex < SLODWORD(pArray->Data.Size) )
  {
    pPara = pArray->Data.Data[CurIndex].pPara;
    Size = pPara->Text.Size;
    v14 = Size;
    if ( Size )
    {
      v15 = Size - 1;
      if ( pPara->Text.pText && v15 < Size )
        v16 = &pPara->Text.pText[v15];
      else
        v16 = 0i64;
      if ( !*v16 )
        v14 = Size - 1;
    }
    v17 = v9 + v10;
    if ( v9 + v10 <= v14 )
    {
      if ( v9 + v10 != v14 )
        goto LABEL_23;
    }
    else
    {
      v17 = v14;
    }
    if ( Size )
    {
      v18 = Size - 1;
      if ( pPara->Text.pText && v18 < Size )
        v19 = &pPara->Text.pText[v18];
      else
        v19 = 0i64;
      if ( !*v19 )
      {
        ++v17;
        if ( v9 != -1i64 )
          ++v9;
      }
    }
LABEL_23:
    Scaleform::Render::Text::Paragraph::SetTextFormat(pPara, this->pTextAllocator.pObject, fmt, v10, v17);
    v9 += v10 - v17;
    v10 = 0i64;
    if ( CurIndex < (signed __int64)pArray->Data.Size )
      ++CurIndex;
  }
  if ( (fmt->PresentMask & 0x100) != 0 && Scaleform::String::GetLength(&fmt->Url) )
    this->RTFlags |= 1u;
}

