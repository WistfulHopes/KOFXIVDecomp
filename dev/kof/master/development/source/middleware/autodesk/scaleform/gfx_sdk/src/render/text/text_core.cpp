#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_image.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_gradients.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatapacked.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_pathdatapacker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_fontmanager.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_font.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_hash.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cxform.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_range.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_core.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"

unsigned long long Scaleform::Render::Text::HTMLImageTagDesc::GetHash(); // 0x1402F7300
class Scaleform::FixedSizeHash<int>
{
public:
	static unsigned long long SDBM_Hash(const void *, unsigned long long, unsigned long long);
	unsigned long long operator()(const long &);
};
Scaleform::Render::Text::TextFormat::TextFormat(Scaleform::MemoryHeap * pheap); // 0x1402F63D0
Scaleform::Render::Text::TextFormat::TextFormat(const Scaleform::Render::Text::TextFormat & srcfmt, Scaleform::Render::Text::Allocator * allocator); // 0x1402F6330
Scaleform::Render::Text::TextFormat::~TextFormat(); // 0x1402F64A0
Scaleform::Render::Text::TextFormat & Scaleform::Render::Text::TextFormat::operator=(const Scaleform::Render::Text::TextFormat & srcfmt); // 0x1402F65A0
void Scaleform::Render::Text::TextFormat::SetFontList(const Scaleform::String & fontList); // 0x1402F89A0
void Scaleform::Render::Text::TextFormat::SetFontList(const char * pfontList, unsigned long long fontListSz); // 0x1402F8A80
void Scaleform::Render::Text::TextFormat::SetFontList(const wchar_t * pfontList, unsigned long long fontListSz); // 0x1402F8B70
const Scaleform::String & Scaleform::Render::Text::TextFormat::GetFontList(); // 0x1402F7270
void Scaleform::Render::Text::TextFormat::SetFontName(const Scaleform::String & fontName); // 0x1402F8C90
void Scaleform::Render::Text::TextFormat::SetFontName(const char * pfontName, unsigned long long fontNameSz); // 0x1402F8CA0
void Scaleform::Render::Text::TextFormat::SetFontHandle(Scaleform::Render::Text::FontHandle * pfontHandle); // 0x1402F8950
void Scaleform::Render::Text::TextFormat::SetUrl(const char * purl, unsigned long long urlSz); // 0x1402F8DD0
void Scaleform::Render::Text::TextFormat::SetUrl(const wchar_t * purl, unsigned long long urlSz); // 0x1402F8E40
void Scaleform::Render::Text::TextFormat::SetUrl(const Scaleform::String & url); // 0x1402F8DA0
void Scaleform::Render::Text::TextFormat::SetBold(bool bold); // 0x1402F88D0
void Scaleform::Render::Text::TextFormat::SetItalic(bool italic); // 0x1402F8CC0
void Scaleform::Render::Text::TextFormat::SetUnderline(bool underline); // 0x1402F8D80
void Scaleform::Render::Text::TextFormat::SetKerning(bool kerning); // 0x1402F8D40
bool Scaleform::Render::Text::TextFormat::IsFontSame(const Scaleform::Render::Text::TextFormat & fmt); // 0x1402F7ED0
bool Scaleform::Render::Text::TextFormat::IsHTMLFontTagSame(const Scaleform::Render::Text::TextFormat & fmt); // 0x1402F7F70
Scaleform::Render::Text::TextFormat Scaleform::Render::Text::TextFormat::Merge(const Scaleform::Render::Text::TextFormat & fmt); // 0x1402F8370
Scaleform::Render::Text::TextFormat Scaleform::Render::Text::TextFormat::Intersection(const Scaleform::Render::Text::TextFormat & fmt); // 0x1402F7940
void Scaleform::Render::Text::TextFormat::InitByDefaultValues(); // 0x1402F74F0
unsigned long long Scaleform::Render::Text::TextFormat::HashFunctor::CalcHash(const Scaleform::Render::Text::TextFormat & data); // 0x1402F6DC0
union Scaleform::Render::Text::TextFormat::HashFunctor::CalcHash::__l2::LetterSpacingUnion
{
public:
	unsigned long long AsInt; // 0x0
	float AsFloat; // 0x0
};
Scaleform::Render::Text::ParagraphFormat::~ParagraphFormat(); // 0x1402F6450
Scaleform::Render::Text::ParagraphFormat Scaleform::Render::Text::ParagraphFormat::Merge(const Scaleform::Render::Text::ParagraphFormat & fmt); // 0x1402F8090
Scaleform::Render::Text::ParagraphFormat Scaleform::Render::Text::ParagraphFormat::Intersection(const Scaleform::Render::Text::ParagraphFormat & fmt); // 0x1402F75E0
void Scaleform::Render::Text::ParagraphFormat::InitByDefaultValues(); // 0x1402F7490
const unsigned long * Scaleform::Render::Text::ParagraphFormat::GetTabStops(unsigned long * pnum); // 0x1402F7470
void Scaleform::Render::Text::ParagraphFormat::SetTabStopsElement(unsigned long idx, unsigned long val); // 0x1402F8D60
void Scaleform::Render::Text::ParagraphFormat::AllocTabStops(unsigned long num); // 0x1402F6940
void Scaleform::Render::Text::ParagraphFormat::FreeTabStops(); // 0x1402F71B0
bool Scaleform::Render::Text::ParagraphFormat::TabStopsEqual(const unsigned long * psrcTabStops); // 0x1402F8EB0
void Scaleform::Render::Text::ParagraphFormat::CopyTabStops(const unsigned long * psrcTabStops); // 0x1402F6F40
Scaleform::Render::Text::ParagraphFormat & Scaleform::Render::Text::ParagraphFormat::operator=(const Scaleform::Render::Text::ParagraphFormat & src); // 0x1402F6550
unsigned long long Scaleform::Render::Text::ParagraphFormat::HashFunctor::CalcHash(const Scaleform::Render::Text::ParagraphFormat & data); // 0x1402F6CB0
class Scaleform::FixedSizeHash<unsigned int>
{
public:
	static unsigned long long SDBM_Hash(const void *, unsigned long long, unsigned long long);
	unsigned long long operator()(const unsigned long &);
};
Scaleform::Render::Text::TextFormat * Scaleform::Render::Text::Allocator::AllocateTextFormat(const Scaleform::Render::Text::TextFormat & srcfmt); // 0x1402F6B00
Scaleform::Render::Text::ParagraphFormat * Scaleform::Render::Text::Allocator::AllocateParagraphFormat(const Scaleform::Render::Text::ParagraphFormat & srcfmt); // 0x1402F69A0
void Scaleform::Render::Text::Allocator::VisitTextFormatCache(Scaleform::Render::Text::Allocator::TextFormatVisitor & visitor); // 0x1402F8F00
bool Scaleform::Render::Text::Allocator::FlushTextFormatCache(bool noAllocationsAllowed); // 0x1402F70D0
bool Scaleform::Render::Text::Allocator::FlushParagraphFormatCache(bool noAllocationsAllowed); // 0x1402F6FF0char __fastcall Scaleform::HashSetBase<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *>,Scaleform::Render::Text::ParagraphFormat::HashFunctor,Scaleform::Render::Text::ParagraphFormat::HashFunctor,Scaleform::AllocatorLH<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *>,74>,Scaleform::HashsetCachedEntry<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *>,Scaleform::Render::Text::ParagraphFormat::HashFunctor>>::RemoveAlt<Scaleform::Render::Text::ParagraphFormat *>(
        Scaleform::HashSetBase<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *>,Scaleform::Render::Text::ParagraphFormat::HashFunctor,Scaleform::Render::Text::ParagraphFormat::HashFunctor,Scaleform::AllocatorLH<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *>,74>,Scaleform::HashsetCachedEntry<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *>,Scaleform::Render::Text::ParagraphFormat::HashFunctor> > *this,
        Scaleform::Render::Text::ParagraphFormat *const *key)
{
  Scaleform::HashSetBase<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *>,Scaleform::Render::Text::ParagraphFormat::HashFunctor,Scaleform::Render::Text::ParagraphFormat::HashFunctor,Scaleform::AllocatorLH<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *>,74>,Scaleform::HashsetCachedEntry<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *>,Scaleform::Render::Text::ParagraphFormat::HashFunctor> >::TableType *pTable; // rbp
  const Scaleform::Render::Text::ParagraphFormat *v5; // rsi
  unsigned __int64 v6; // rbx
  unsigned __int64 *v7; // rdi
  __int64 v8; // r14
  unsigned __int64 v9; // r15
  Scaleform::Render::Text::ParagraphFormat *v10; // rcx
  unsigned __int64 v11; // rax
  unsigned __int64 *v12; // rcx

  pTable = this->pTable;
  if ( !this->pTable )
    return 0;
  v5 = *key;
  v6 = pTable->SizeMask & Scaleform::Render::Text::ParagraphFormat::HashFunctor::CalcHash(*(const Scaleform::Render::Text::ParagraphFormat **)key);
  v7 = &pTable[1].EntryCount + 3 * v6;
  if ( *v7 == -2i64 || v7[1] != v6 )
    return 0;
  v8 = -1i64;
  v9 = v6;
  while ( 1 )
  {
    if ( v7[1] == v9 )
    {
      v10 = (Scaleform::Render::Text::ParagraphFormat *)v7[2];
      if ( v5 == v10 || v10 && v5 && Scaleform::Render::Text::ParagraphFormat::operator==(v10, v5) )
        break;
    }
    v8 = v6;
    v6 = *v7;
    if ( *v7 == -1i64 )
      return 0;
    v7 = &pTable[1].EntryCount + 3 * v6;
  }
  v11 = *v7;
  if ( v9 == v6 )
  {
    if ( v11 != -1i64 )
    {
      *v7 = -2i64;
      v12 = &pTable->EntryCount + 3 * v11;
      *v7 = v12[2];
      v7[1] = v12[3];
      v7[2] = v12[4];
      v7 = v12 + 2;
    }
  }
  else
  {
    *(&pTable[1].EntryCount + 3 * v8) = v11;
  }
  *v7 = -2i64;
  --this->pTable->EntryCount;
  return 1;
}

char __fastcall Scaleform::HashSetBase<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,Scaleform::Render::Text::TextFormat::HashFunctor,Scaleform::Render::Text::TextFormat::HashFunctor,Scaleform::AllocatorLH<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,74>,Scaleform::HashsetCachedEntry<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,Scaleform::Render::Text::TextFormat::HashFunctor>>::RemoveAlt<Scaleform::Render::Text::TextFormat *>(
        Scaleform::HashSetBase<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,Scaleform::Render::Text::TextFormat::HashFunctor,Scaleform::Render::Text::TextFormat::HashFunctor,Scaleform::AllocatorLH<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,74>,Scaleform::HashsetCachedEntry<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,Scaleform::Render::Text::TextFormat::HashFunctor> > *this,
        Scaleform::Render::Text::TextFormat *const *key)
{
  unsigned __int64 v5; // rax
  Scaleform::HashSetBase<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,Scaleform::Render::Text::TextFormat::HashFunctor,Scaleform::Render::Text::TextFormat::HashFunctor,Scaleform::AllocatorLH<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,74>,Scaleform::HashsetCachedEntry<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,Scaleform::Render::Text::TextFormat::HashFunctor> >::TableType *v6; // rdi
  unsigned __int64 v7; // rbx
  bool v8; // zf
  unsigned __int64 *v9; // rdi
  unsigned __int64 v10; // rbp
  __int64 v11; // r14
  const Scaleform::Render::Text::TextFormat *v12; // rdx
  Scaleform::Render::Text::TextFormat *v13; // rcx
  unsigned __int64 v14; // rax
  __int64 v15; // rcx
  Scaleform::HashSetBase<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,Scaleform::Render::Text::TextFormat::HashFunctor,Scaleform::Render::Text::TextFormat::HashFunctor,Scaleform::AllocatorLH<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,74>,Scaleform::HashsetCachedEntry<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,Scaleform::Render::Text::TextFormat::HashFunctor> >::TableType *pTable; // rax
  unsigned __int64 *v17; // rdx

  if ( !this->pTable )
    return 0;
  v5 = Scaleform::Render::Text::TextFormat::HashFunctor::CalcHash(*(const Scaleform::Render::Text::TextFormat **)key);
  v6 = this->pTable + 1;
  v7 = v5 & this->pTable->SizeMask;
  v8 = *(&v6->EntryCount + 3 * v7) == -2i64;
  v9 = &v6->EntryCount + 3 * v7;
  if ( v8 || v9[1] != v7 )
    return 0;
  v10 = v5 & this->pTable->SizeMask;
  v11 = -1i64;
  while ( 1 )
  {
    if ( v9[1] == v10 )
    {
      v12 = *key;
      v13 = (Scaleform::Render::Text::TextFormat *)v9[2];
      if ( *key == v13 || v13 && v12 && Scaleform::Render::Text::TextFormat::operator==(v13, v12) )
        break;
    }
    v11 = v7;
    v7 = *v9;
    if ( *v9 == -1i64 )
      return 0;
    v9 = &this->pTable[v7 + 1].EntryCount + v7;
  }
  v14 = *v9;
  if ( v10 == v7 )
  {
    if ( v14 != -1i64 )
    {
      v15 = 3 * v14;
      pTable = this->pTable;
      *v9 = -2i64;
      v17 = &pTable->EntryCount + v15;
      *v9 = v17[2];
      v9[1] = v17[3];
      v9[2] = v17[4];
      v9 = v17 + 2;
    }
  }
  else
  {
    *(&this->pTable[1].EntryCount + 3 * v11) = v14;
  }
  *v9 = -2i64;
  --this->pTable->EntryCount;
  return 1;
}

char __fastcall Scaleform::HashSetBase<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,Scaleform::Render::Text::TextFormat::HashFunctor,Scaleform::Render::Text::TextFormat::HashFunctor,Scaleform::AllocatorLH<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,74>,Scaleform::HashsetCachedEntry<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,Scaleform::Render::Text::TextFormat::HashFunctor>>::Iterator::RemoveAlt<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>>(
        Scaleform::HashSetBase<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,Scaleform::Render::Text::TextFormat::HashFunctor,Scaleform::Render::Text::TextFormat::HashFunctor,Scaleform::AllocatorLH<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,74>,Scaleform::HashsetCachedEntry<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,Scaleform::Render::Text::TextFormat::HashFunctor> >::Iterator *this,
        const Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *> *key)
{
  const Scaleform::HashSetBase<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,Scaleform::Render::Text::TextFormat::HashFunctor,Scaleform::Render::Text::TextFormat::HashFunctor,Scaleform::AllocatorLH<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,74>,Scaleform::HashsetCachedEntry<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,Scaleform::Render::Text::TextFormat::HashFunctor> > *pHash; // r14
  unsigned __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rbx
  bool v8; // zf
  __int64 *v9; // rdi
  unsigned __int64 v10; // rbp
  __int64 v11; // rsi
  Scaleform::Render::Text::TextFormat *P; // rdx
  Scaleform::Render::Text::TextFormat *v13; // rcx
  unsigned __int64 v14; // rax
  __int64 v15; // rcx
  Scaleform::HashSetBase<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,Scaleform::Render::Text::TextFormat::HashFunctor,Scaleform::Render::Text::TextFormat::HashFunctor,Scaleform::AllocatorLH<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,74>,Scaleform::HashsetCachedEntry<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,Scaleform::Render::Text::TextFormat::HashFunctor> >::TableType *pTable; // rax
  unsigned __int64 *v17; // rdx

  pHash = this->pHash;
  v5 = Scaleform::Render::Text::TextFormat::HashFunctor::CalcHash(key->P);
  v6 = (__int64)&pHash->pTable[1];
  v7 = v5 & pHash->pTable->SizeMask;
  v8 = *(_QWORD *)(v6 + 24 * v7) == -2i64;
  v9 = (__int64 *)(v6 + 24 * v7);
  if ( v8 || v9[1] != v7 )
    return 0;
  v10 = v5 & pHash->pTable->SizeMask;
  v11 = -1i64;
  while ( 1 )
  {
    if ( v9[1] == v10 )
    {
      P = key->P;
      v13 = (Scaleform::Render::Text::TextFormat *)v9[2];
      if ( key->P == v13 || v13 && P && Scaleform::Render::Text::TextFormat::operator==(v13, P) )
        break;
    }
    v11 = v7;
    v7 = *v9;
    if ( *v9 == -1 )
      return 0;
    v9 = (__int64 *)(&pHash->pTable[v7 + 1].EntryCount + v7);
  }
  if ( v7 == this->Index )
  {
    v14 = *v9;
    if ( v10 == v7 )
    {
      if ( v14 != -1i64 )
      {
        v15 = 3 * v14;
        pTable = pHash->pTable;
        *v9 = -2i64;
        v17 = &pTable->EntryCount + v15;
        *v9 = v17[2];
        v9[1] = v17[3];
        v9[2] = v17[4];
        v9 = (__int64 *)(v17 + 2);
        --this->Index;
      }
    }
    else
    {
      *(&pHash->pTable[1].EntryCount + 3 * v11) = v14;
    }
    *v9 = -2i64;
    --pHash->pTable->EntryCount;
  }
  return 1;
}

void __fastcall Scaleform::HashSetBase<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *>,Scaleform::Render::Text::ParagraphFormat::HashFunctor,Scaleform::Render::Text::ParagraphFormat::HashFunctor,Scaleform::AllocatorLH<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *>,74>,Scaleform::HashsetCachedEntry<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *>,Scaleform::Render::Text::ParagraphFormat::HashFunctor>>::add<Scaleform::Render::Text::ParagraphFormat *>(
        Scaleform::HashSetBase<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *>,Scaleform::Render::Text::ParagraphFormat::HashFunctor,Scaleform::Render::Text::ParagraphFormat::HashFunctor,Scaleform::AllocatorLH<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *>,74>,Scaleform::HashsetCachedEntry<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *>,Scaleform::Render::Text::ParagraphFormat::HashFunctor> > *this,
        void *pmemAddr,
        Scaleform::Render::Text::ParagraphFormat *const *key,
        unsigned __int64 hashValue)
{
  Scaleform::HashSetBase<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *>,Scaleform::Render::Text::ParagraphFormat::HashFunctor,Scaleform::Render::Text::ParagraphFormat::HashFunctor,Scaleform::AllocatorLH<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *>,74>,Scaleform::HashsetCachedEntry<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *>,Scaleform::Render::Text::ParagraphFormat::HashFunctor> >::TableType *pTable; // rax
  unsigned __int64 v8; // r8
  unsigned __int64 SizeMask; // r8
  unsigned __int64 v10; // rbx
  Scaleform::HashSetBase<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *>,Scaleform::Render::Text::ParagraphFormat::HashFunctor,Scaleform::Render::Text::ParagraphFormat::HashFunctor,Scaleform::AllocatorLH<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *>,74>,Scaleform::HashsetCachedEntry<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *>,Scaleform::Render::Text::ParagraphFormat::HashFunctor> >::TableType *v11; // r9
  unsigned __int64 v12; // r11
  unsigned __int64 *v13; // r8
  Scaleform::Render::Text::ParagraphFormat *v14; // rax
  __int64 v15; // rdx
  unsigned __int64 *v16; // r10
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rcx
  bool v19; // zf
  unsigned __int64 *i; // rcx
  __int64 v21; // rcx

  pTable = this->pTable;
  if ( this->pTable )
  {
    SizeMask = pTable->SizeMask;
    if ( 5 * pTable->EntryCount <= 4 * SizeMask + 4 )
      goto LABEL_6;
    v8 = 2 * SizeMask + 2;
  }
  else
  {
    v8 = 8i64;
  }
  Scaleform::HashSetBase<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *>,Scaleform::Render::Text::ParagraphFormat::HashFunctor,Scaleform::Render::Text::ParagraphFormat::HashFunctor,Scaleform::AllocatorLH<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *>,74>,Scaleform::HashsetCachedEntry<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *>,Scaleform::Render::Text::ParagraphFormat::HashFunctor>>::setRawCapacity(
    this,
    pmemAddr,
    v8);
LABEL_6:
  v10 = this->pTable->SizeMask & hashValue;
  ++this->pTable->EntryCount;
  v11 = this->pTable;
  v12 = *(&this->pTable[1].EntryCount + 3 * v10);
  v13 = &this->pTable->EntryCount + 3 * v10;
  if ( v12 == -2i64 )
  {
    v14 = *key;
    v13[2] = -1i64;
    v13[3] = 0i64;
    v13[4] = (unsigned __int64)v14;
  }
  else
  {
    v15 = v10;
    do
      v15 = v11->SizeMask & (v15 + 1);
    while ( *(&v11[1].EntryCount + 3 * v15) != -2i64 );
    v16 = &v11[v15 + 1].EntryCount + v15;
    v17 = v13[3];
    if ( v17 == v10 )
    {
      if ( v16 )
      {
        *v16 = v12;
        v16[1] = v13[3];
        v16[2] = v13[4];
      }
      v13[4] = (unsigned __int64)*key;
      v13[2] = v15;
    }
    else
    {
      v18 = v17 + 2 * (v17 + 1);
      v19 = *(&v11->EntryCount + v18) == v10;
      for ( i = &v11->EntryCount + v18; !v19; i = &v11->EntryCount + v21 )
      {
        v21 = *i + 2 * (*i + 1);
        v19 = *(&v11->EntryCount + v21) == v10;
      }
      if ( v16 )
      {
        *v16 = v12;
        v16[1] = v13[3];
        v16[2] = v13[4];
      }
      *i = v15;
      v13[4] = (unsigned __int64)*key;
      v13[2] = -1i64;
    }
  }
  v13[3] = v10;
}

void __fastcall Scaleform::HashSetBase<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,Scaleform::Render::Text::TextFormat::HashFunctor,Scaleform::Render::Text::TextFormat::HashFunctor,Scaleform::AllocatorLH<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,74>,Scaleform::HashsetCachedEntry<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,Scaleform::Render::Text::TextFormat::HashFunctor>>::add<Scaleform::Render::Text::TextFormat *>(
        Scaleform::HashSetBase<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,Scaleform::Render::Text::TextFormat::HashFunctor,Scaleform::Render::Text::TextFormat::HashFunctor,Scaleform::AllocatorLH<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,74>,Scaleform::HashsetCachedEntry<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,Scaleform::Render::Text::TextFormat::HashFunctor> > *this,
        void *pmemAddr,
        Scaleform::Render::Text::TextFormat *const *key,
        unsigned __int64 hashValue)
{
  Scaleform::HashSetBase<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,Scaleform::Render::Text::TextFormat::HashFunctor,Scaleform::Render::Text::TextFormat::HashFunctor,Scaleform::AllocatorLH<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,74>,Scaleform::HashsetCachedEntry<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,Scaleform::Render::Text::TextFormat::HashFunctor> >::TableType *pTable; // rax
  unsigned __int64 v8; // r8
  unsigned __int64 SizeMask; // r8
  unsigned __int64 v10; // rbx
  Scaleform::HashSetBase<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,Scaleform::Render::Text::TextFormat::HashFunctor,Scaleform::Render::Text::TextFormat::HashFunctor,Scaleform::AllocatorLH<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,74>,Scaleform::HashsetCachedEntry<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,Scaleform::Render::Text::TextFormat::HashFunctor> >::TableType *v11; // r9
  unsigned __int64 v12; // r11
  unsigned __int64 *v13; // r8
  Scaleform::Render::Text::TextFormat *v14; // rax
  __int64 v15; // rdx
  unsigned __int64 *v16; // r10
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rcx
  bool v19; // zf
  unsigned __int64 *i; // rcx
  __int64 v21; // rcx

  pTable = this->pTable;
  if ( this->pTable )
  {
    SizeMask = pTable->SizeMask;
    if ( 5 * pTable->EntryCount <= 4 * SizeMask + 4 )
      goto LABEL_6;
    v8 = 2 * SizeMask + 2;
  }
  else
  {
    v8 = 8i64;
  }
  Scaleform::HashSetBase<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,Scaleform::Render::Text::TextFormat::HashFunctor,Scaleform::Render::Text::TextFormat::HashFunctor,Scaleform::AllocatorLH<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,74>,Scaleform::HashsetCachedEntry<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,Scaleform::Render::Text::TextFormat::HashFunctor>>::setRawCapacity(
    this,
    pmemAddr,
    v8);
LABEL_6:
  v10 = this->pTable->SizeMask & hashValue;
  ++this->pTable->EntryCount;
  v11 = this->pTable;
  v12 = *(&this->pTable[1].EntryCount + 3 * v10);
  v13 = &this->pTable->EntryCount + 3 * v10;
  if ( v12 == -2i64 )
  {
    v14 = *key;
    v13[2] = -1i64;
    v13[3] = 0i64;
    v13[4] = (unsigned __int64)v14;
  }
  else
  {
    v15 = v10;
    do
      v15 = v11->SizeMask & (v15 + 1);
    while ( *(&v11[1].EntryCount + 3 * v15) != -2i64 );
    v16 = &v11[v15 + 1].EntryCount + v15;
    v17 = v13[3];
    if ( v17 == v10 )
    {
      if ( v16 )
      {
        *v16 = v12;
        v16[1] = v13[3];
        v16[2] = v13[4];
      }
      v13[4] = (unsigned __int64)*key;
      v13[2] = v15;
    }
    else
    {
      v18 = v17 + 2 * (v17 + 1);
      v19 = *(&v11->EntryCount + v18) == v10;
      for ( i = &v11->EntryCount + v18; !v19; i = &v11->EntryCount + v21 )
      {
        v21 = *i + 2 * (*i + 1);
        v19 = *(&v11->EntryCount + v21) == v10;
      }
      if ( v16 )
      {
        *v16 = v12;
        v16[1] = v13[3];
        v16[2] = v13[4];
      }
      *i = v15;
      v13[4] = (unsigned __int64)*key;
      v13[2] = -1i64;
    }
  }
  v13[3] = v10;
}

void __fastcall Scaleform::HashSetBase<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *>,Scaleform::Render::Text::ParagraphFormat::HashFunctor,Scaleform::Render::Text::ParagraphFormat::HashFunctor,Scaleform::AllocatorLH<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *>,74>,Scaleform::HashsetCachedEntry<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *>,Scaleform::Render::Text::ParagraphFormat::HashFunctor>>::add<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *>>(
        Scaleform::HashSetBase<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *>,Scaleform::Render::Text::ParagraphFormat::HashFunctor,Scaleform::Render::Text::ParagraphFormat::HashFunctor,Scaleform::AllocatorLH<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *>,74>,Scaleform::HashsetCachedEntry<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *>,Scaleform::Render::Text::ParagraphFormat::HashFunctor> > *this,
        void *pmemAddr,
        const Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *> *key,
        unsigned __int64 hashValue)
{
  Scaleform::HashSetBase<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *>,Scaleform::Render::Text::ParagraphFormat::HashFunctor,Scaleform::Render::Text::ParagraphFormat::HashFunctor,Scaleform::AllocatorLH<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *>,74>,Scaleform::HashsetCachedEntry<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *>,Scaleform::Render::Text::ParagraphFormat::HashFunctor> >::TableType *pTable; // rax
  unsigned __int64 v8; // r8
  unsigned __int64 SizeMask; // r8
  unsigned __int64 v10; // rbx
  Scaleform::HashSetBase<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *>,Scaleform::Render::Text::ParagraphFormat::HashFunctor,Scaleform::Render::Text::ParagraphFormat::HashFunctor,Scaleform::AllocatorLH<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *>,74>,Scaleform::HashsetCachedEntry<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *>,Scaleform::Render::Text::ParagraphFormat::HashFunctor> >::TableType *v11; // r9
  unsigned __int64 v12; // r11
  Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *> *v13; // r8
  __int64 v14; // rdx
  unsigned __int64 *v15; // r10
  Scaleform::Render::Text::ParagraphFormat *P; // rax
  char *v17; // rcx
  bool v18; // zf
  unsigned __int64 *i; // rcx
  __int64 v20; // rcx

  pTable = this->pTable;
  if ( this->pTable )
  {
    SizeMask = pTable->SizeMask;
    if ( 5 * pTable->EntryCount <= 4 * SizeMask + 4 )
      goto LABEL_6;
    v8 = 2 * SizeMask + 2;
  }
  else
  {
    v8 = 8i64;
  }
  Scaleform::HashSetBase<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *>,Scaleform::Render::Text::ParagraphFormat::HashFunctor,Scaleform::Render::Text::ParagraphFormat::HashFunctor,Scaleform::AllocatorLH<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *>,74>,Scaleform::HashsetCachedEntry<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *>,Scaleform::Render::Text::ParagraphFormat::HashFunctor>>::setRawCapacity(
    this,
    pmemAddr,
    v8);
LABEL_6:
  v10 = this->pTable->SizeMask & hashValue;
  ++this->pTable->EntryCount;
  v11 = this->pTable;
  v12 = *(&this->pTable[1].EntryCount + 3 * v10);
  v13 = (Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *> *)this->pTable + 3 * v10;
  if ( v12 == -2i64 )
  {
    v13[2].P = (Scaleform::Render::Text::ParagraphFormat *)-1i64;
    v13[3].P = 0i64;
    v13[4].P = key->P;
  }
  else
  {
    v14 = v10;
    do
      v14 = v11->SizeMask & (v14 + 1);
    while ( *(&v11[1].EntryCount + 3 * v14) != -2i64 );
    v15 = &v11[v14 + 1].EntryCount + v14;
    P = v13[3].P;
    if ( P == (Scaleform::Render::Text::ParagraphFormat *)v10 )
    {
      if ( v15 )
      {
        *v15 = v12;
        v15[1] = (unsigned __int64)v13[3].P;
        v15[2] = (unsigned __int64)v13[4].P;
      }
      v13[4].P = key->P;
      v13[2].P = (Scaleform::Render::Text::ParagraphFormat *)v14;
    }
    else
    {
      v17 = (char *)P + 2 * ((_QWORD)&P->pAllocator + 1);
      v18 = *(&v11->EntryCount + (_QWORD)v17) == v10;
      for ( i = &v11->EntryCount + (_QWORD)v17; !v18; i = &v11->EntryCount + v20 )
      {
        v20 = *i + 2 * (*i + 1);
        v18 = *(&v11->EntryCount + v20) == v10;
      }
      if ( v15 )
      {
        *v15 = v12;
        v15[1] = (unsigned __int64)v13[3].P;
        v15[2] = (unsigned __int64)v13[4].P;
      }
      *i = v14;
      v13[4].P = key->P;
      v13[2].P = (Scaleform::Render::Text::ParagraphFormat *)-1i64;
    }
  }
  v13[3].P = (Scaleform::Render::Text::ParagraphFormat *)v10;
}

void __fastcall Scaleform::HashSetBase<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,Scaleform::Render::Text::TextFormat::HashFunctor,Scaleform::Render::Text::TextFormat::HashFunctor,Scaleform::AllocatorLH<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,74>,Scaleform::HashsetCachedEntry<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,Scaleform::Render::Text::TextFormat::HashFunctor>>::add<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>>(
        Scaleform::HashSetBase<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,Scaleform::Render::Text::TextFormat::HashFunctor,Scaleform::Render::Text::TextFormat::HashFunctor,Scaleform::AllocatorLH<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,74>,Scaleform::HashsetCachedEntry<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,Scaleform::Render::Text::TextFormat::HashFunctor> > *this,
        void *pmemAddr,
        const Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *> *key,
        unsigned __int64 hashValue)
{
  Scaleform::HashSetBase<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,Scaleform::Render::Text::TextFormat::HashFunctor,Scaleform::Render::Text::TextFormat::HashFunctor,Scaleform::AllocatorLH<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,74>,Scaleform::HashsetCachedEntry<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,Scaleform::Render::Text::TextFormat::HashFunctor> >::TableType *pTable; // rax
  unsigned __int64 v8; // r8
  unsigned __int64 SizeMask; // r8
  unsigned __int64 v10; // rbx
  Scaleform::HashSetBase<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,Scaleform::Render::Text::TextFormat::HashFunctor,Scaleform::Render::Text::TextFormat::HashFunctor,Scaleform::AllocatorLH<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,74>,Scaleform::HashsetCachedEntry<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,Scaleform::Render::Text::TextFormat::HashFunctor> >::TableType *v11; // r9
  unsigned __int64 v12; // r11
  Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *> *v13; // r8
  __int64 v14; // rdx
  unsigned __int64 *v15; // r10
  Scaleform::Render::Text::TextFormat *P; // rax
  char *v17; // rcx
  bool v18; // zf
  unsigned __int64 *i; // rcx
  __int64 v20; // rcx

  pTable = this->pTable;
  if ( this->pTable )
  {
    SizeMask = pTable->SizeMask;
    if ( 5 * pTable->EntryCount <= 4 * SizeMask + 4 )
      goto LABEL_6;
    v8 = 2 * SizeMask + 2;
  }
  else
  {
    v8 = 8i64;
  }
  Scaleform::HashSetBase<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,Scaleform::Render::Text::TextFormat::HashFunctor,Scaleform::Render::Text::TextFormat::HashFunctor,Scaleform::AllocatorLH<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,74>,Scaleform::HashsetCachedEntry<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,Scaleform::Render::Text::TextFormat::HashFunctor>>::setRawCapacity(
    this,
    pmemAddr,
    v8);
LABEL_6:
  v10 = this->pTable->SizeMask & hashValue;
  ++this->pTable->EntryCount;
  v11 = this->pTable;
  v12 = *(&this->pTable[1].EntryCount + 3 * v10);
  v13 = (Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *> *)this->pTable + 3 * v10;
  if ( v12 == -2i64 )
  {
    v13[2].P = (Scaleform::Render::Text::TextFormat *)-1i64;
    v13[3].P = 0i64;
    v13[4].P = key->P;
  }
  else
  {
    v14 = v10;
    do
      v14 = v11->SizeMask & (v14 + 1);
    while ( *(&v11[1].EntryCount + 3 * v14) != -2i64 );
    v15 = &v11[v14 + 1].EntryCount + v14;
    P = v13[3].P;
    if ( P == (Scaleform::Render::Text::TextFormat *)v10 )
    {
      if ( v15 )
      {
        *v15 = v12;
        v15[1] = (unsigned __int64)v13[3].P;
        v15[2] = (unsigned __int64)v13[4].P;
      }
      v13[4].P = key->P;
      v13[2].P = (Scaleform::Render::Text::TextFormat *)v14;
    }
    else
    {
      v17 = (char *)P + 2 * ((_QWORD)&P->pAllocator + 1);
      v18 = *(&v11->EntryCount + (_QWORD)v17) == v10;
      for ( i = &v11->EntryCount + (_QWORD)v17; !v18; i = &v11->EntryCount + v20 )
      {
        v20 = *i + 2 * (*i + 1);
        v18 = *(&v11->EntryCount + v20) == v10;
      }
      if ( v15 )
      {
        *v15 = v12;
        v15[1] = (unsigned __int64)v13[3].P;
        v15[2] = (unsigned __int64)v13[4].P;
      }
      *i = v14;
      v13[4].P = key->P;
      v13[2].P = (Scaleform::Render::Text::TextFormat *)-1i64;
    }
  }
  v13[3].P = (Scaleform::Render::Text::TextFormat *)v10;
}

unsigned __int64 __fastcall Scaleform::HashSetBase<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *>,Scaleform::Render::Text::ParagraphFormat::HashFunctor,Scaleform::Render::Text::ParagraphFormat::HashFunctor,Scaleform::AllocatorLH<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *>,74>,Scaleform::HashsetCachedEntry<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *>,Scaleform::Render::Text::ParagraphFormat::HashFunctor>>::findIndexCore<Scaleform::Render::Text::ParagraphFormat *>(
        Scaleform::HashSetBase<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *>,Scaleform::Render::Text::ParagraphFormat::HashFunctor,Scaleform::Render::Text::ParagraphFormat::HashFunctor,Scaleform::AllocatorLH<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *>,74>,Scaleform::HashsetCachedEntry<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *>,Scaleform::Render::Text::ParagraphFormat::HashFunctor> > *this,
        Scaleform::Render::Text::ParagraphFormat *const *key,
        unsigned __int64 hashValue)
{
  Scaleform::HashSetBase<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *>,Scaleform::Render::Text::ParagraphFormat::HashFunctor,Scaleform::Render::Text::ParagraphFormat::HashFunctor,Scaleform::AllocatorLH<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *>,74>,Scaleform::HashsetCachedEntry<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *>,Scaleform::Render::Text::ParagraphFormat::HashFunctor> >::TableType *pTable; // rbp
  unsigned __int64 v6; // rdi
  Scaleform::HashSetBase<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *>,Scaleform::Render::Text::ParagraphFormat::HashFunctor,Scaleform::Render::Text::ParagraphFormat::HashFunctor,Scaleform::AllocatorLH<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *>,74>,Scaleform::HashsetCachedEntry<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *>,Scaleform::Render::Text::ParagraphFormat::HashFunctor> >::TableType *v7; // rbx
  bool v8; // zf
  unsigned __int64 *v9; // rbx
  const Scaleform::Render::Text::ParagraphFormat *v10; // rdx
  Scaleform::Render::Text::ParagraphFormat *v11; // rcx

  pTable = this->pTable;
  v6 = hashValue;
  v7 = this->pTable + 1;
  v8 = *(&v7->EntryCount + 3 * hashValue) == -2i64;
  v9 = &v7->EntryCount + 3 * hashValue;
  if ( v8 || v9[1] != hashValue )
    return -1i64;
  while ( 1 )
  {
    if ( v9[1] == hashValue )
    {
      v10 = *key;
      v11 = (Scaleform::Render::Text::ParagraphFormat *)v9[2];
      if ( *key == v11 || v11 && v10 && Scaleform::Render::Text::ParagraphFormat::operator==(v11, v10) )
        break;
    }
    v6 = *v9;
    if ( *v9 == -1i64 )
      return -1i64;
    v9 = &pTable[1].EntryCount + 3 * v6;
  }
  return v6;
}

unsigned __int64 __fastcall Scaleform::HashSetBase<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,Scaleform::Render::Text::TextFormat::HashFunctor,Scaleform::Render::Text::TextFormat::HashFunctor,Scaleform::AllocatorLH<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,74>,Scaleform::HashsetCachedEntry<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,Scaleform::Render::Text::TextFormat::HashFunctor>>::findIndexCore<Scaleform::Render::Text::TextFormat *>(
        Scaleform::HashSetBase<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,Scaleform::Render::Text::TextFormat::HashFunctor,Scaleform::Render::Text::TextFormat::HashFunctor,Scaleform::AllocatorLH<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,74>,Scaleform::HashsetCachedEntry<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,Scaleform::Render::Text::TextFormat::HashFunctor> > *this,
        Scaleform::Render::Text::TextFormat *const *key,
        unsigned __int64 hashValue)
{
  unsigned __int64 v3; // rbx
  bool v5; // zf
  unsigned __int64 *v6; // rbx
  unsigned __int64 v9; // rdi
  const Scaleform::Render::Text::TextFormat *v10; // rdx
  Scaleform::Render::Text::TextFormat *v11; // rcx

  v3 = hashValue + 2 * (hashValue + 1);
  v5 = *(&this->pTable->EntryCount + v3) == -2i64;
  v6 = &this->pTable->EntryCount + v3;
  v9 = hashValue;
  if ( v5 || v6[1] != hashValue )
    return -1i64;
  while ( 1 )
  {
    if ( v6[1] == hashValue )
    {
      v10 = *key;
      v11 = (Scaleform::Render::Text::TextFormat *)v6[2];
      if ( *key == v11 || v11 && v10 && Scaleform::Render::Text::TextFormat::operator==(v11, v10) )
        break;
    }
    v9 = *v6;
    if ( *v6 == -1i64 )
      return -1i64;
    v6 = &this->pTable[v9 + 1].EntryCount + v9;
  }
  return v9;
}

void __fastcall Scaleform::Render::Text::TextFormat::TextFormat(
        Scaleform::Render::Text::TextFormat *this,
        const Scaleform::Render::Text::TextFormat *srcfmt,
        Scaleform::Render::Text::Allocator *allocator)
{
  Scaleform::Render::Text::HTMLImageTagDesc *pObject; // rax
  Scaleform::RefCountVImpl *v6; // rcx

  this->pAllocator = allocator;
  this->RefCount = 1;
  Scaleform::StringDH::CopyConstructHelper(&this->FontList, &srcfmt->FontList, srcfmt->FontList.pHeap);
  Scaleform::StringDH::CopyConstructHelper(&this->Url, &srcfmt->Url, srcfmt->FontList.pHeap);
  pObject = srcfmt->pImageDesc.pObject;
  if ( pObject )
    ++pObject->RefCount;
  this->pImageDesc.pObject = srcfmt->pImageDesc.pObject;
  v6 = (Scaleform::RefCountVImpl *)srcfmt->pFontHandle.pObject;
  if ( v6 )
    Scaleform::Render::RenderBuffer::AddRef(v6);
  this->pFontHandle.pObject = srcfmt->pFontHandle.pObject;
  this->ColorV = srcfmt->ColorV;
  this->LetterSpacing = srcfmt->LetterSpacing;
  this->FontSize = srcfmt->FontSize;
  this->FormatFlags = srcfmt->FormatFlags;
  this->PresentMask = srcfmt->PresentMask;
}

void __fastcall Scaleform::Render::Text::TextFormat::TextFormat(
        Scaleform::Render::Text::TextFormat *this,
        Scaleform::MemoryHeap *pheap)
{
  bool v4; // zf
  Scaleform::MemoryHeap *v5; // rdx
  Scaleform::MemoryHeap *v6; // rdx

  this->RefCount = 1;
  this->pAllocator = 0i64;
  v4 = pheap == 0i64;
  v5 = Scaleform::Memory::pGlobalHeap;
  if ( !v4 )
    v5 = pheap;
  Scaleform::StringDH::StringDH(&this->FontList, v5);
  v6 = Scaleform::Memory::pGlobalHeap;
  if ( pheap )
    v6 = pheap;
  Scaleform::StringDH::StringDH(&this->Url, v6);
  this->pImageDesc.pObject = 0i64;
  this->pFontHandle.pObject = 0i64;
  this->LetterSpacing = 0.0;
  this->FontSize = 0;
  this->FormatFlags = 0;
  this->PresentMask = 0;
  this->ColorV = -16777216;
}

void __fastcall Scaleform::Render::Text::ParagraphFormat::~ParagraphFormat(
        Scaleform::Render::Text::ParagraphFormat *this)
{
  Scaleform::Render::Text::Allocator *pAllocator; // rcx
  Scaleform::Render::Text::ParagraphFormat *key; // [rsp+30h] [rbp+8h] BYREF

  pAllocator = this->pAllocator;
  if ( pAllocator )
  {
    key = this;
    Scaleform::HashSetBase<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *>,Scaleform::Render::Text::ParagraphFormat::HashFunctor,Scaleform::Render::Text::ParagraphFormat::HashFunctor,Scaleform::AllocatorLH<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *>,74>,Scaleform::HashsetCachedEntry<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *>,Scaleform::Render::Text::ParagraphFormat::HashFunctor>>::RemoveAlt<Scaleform::Render::Text::ParagraphFormat *>(
      &pAllocator->ParagraphFormatStorage,
      &key);
  }
  Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->pTabStops);
  this->pTabStops = 0i64;
}

void __fastcall Scaleform::Render::Text::TextFormat::~TextFormat(Scaleform::Render::Text::TextFormat *this)
{
  Scaleform::Render::Text::Allocator *pAllocator; // rcx
  Scaleform::RefCountVImpl *pObject; // rcx
  Scaleform::Render::Text::HTMLImageTagDesc *v4; // rcx
  volatile int *v5; // rbx
  volatile int *v6; // rbx
  Scaleform::Render::Text::TextFormat *key; // [rsp+30h] [rbp+8h] BYREF

  pAllocator = this->pAllocator;
  if ( pAllocator )
  {
    key = this;
    Scaleform::HashSetBase<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,Scaleform::Render::Text::TextFormat::HashFunctor,Scaleform::Render::Text::TextFormat::HashFunctor,Scaleform::AllocatorLH<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,74>,Scaleform::HashsetCachedEntry<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,Scaleform::Render::Text::TextFormat::HashFunctor>>::RemoveAlt<Scaleform::Render::Text::TextFormat *>(
      &pAllocator->TextFormatStorage,
      &key);
  }
  pObject = (Scaleform::RefCountVImpl *)this->pFontHandle.pObject;
  if ( pObject )
    Scaleform::RefCountImpl::Release(pObject);
  v4 = this->pImageDesc.pObject;
  if ( v4 )
    Scaleform::RefCountNTSImpl::Release(v4);
  v5 = (volatile int *)(this->Url.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
  if ( (unsigned int)Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(v5 + 2, -1) == 1 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, (void *)v5);
  v6 = (volatile int *)(this->FontList.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
  if ( (unsigned int)Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(v6 + 2, -1) == 1 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, (void *)v6);
}

Scaleform::Render::Text::ParagraphFormat *__fastcall Scaleform::Render::Text::ParagraphFormat::operator=(
        Scaleform::Render::Text::ParagraphFormat *this,
        const Scaleform::Render::Text::ParagraphFormat *src)
{
  this->BlockIndent = src->BlockIndent;
  this->Indent = src->Indent;
  this->Leading = src->Leading;
  this->LeftMargin = src->LeftMargin;
  this->RightMargin = src->RightMargin;
  this->PresentMask = src->PresentMask;
  Scaleform::Render::Text::ParagraphFormat::CopyTabStops(this, src->pTabStops);
  return this;
}

Scaleform::Render::Text::TextFormat *__fastcall Scaleform::Render::Text::TextFormat::operator=(
        Scaleform::Render::Text::TextFormat *this,
        const Scaleform::Render::Text::TextFormat *srcfmt)
{
  Scaleform::Render::Text::HTMLImageTagDesc *pObject; // rax
  Scaleform::Render::Text::HTMLImageTagDesc *v5; // rcx
  Scaleform::RefCountVImpl *v6; // rcx
  Scaleform::RefCountVImpl *v7; // rcx

  this->pAllocator = srcfmt->pAllocator;
  Scaleform::String::operator=(&this->FontList, &srcfmt->FontList);
  Scaleform::String::operator=(&this->Url, &srcfmt->Url);
  pObject = srcfmt->pImageDesc.pObject;
  if ( pObject )
    ++pObject->RefCount;
  v5 = this->pImageDesc.pObject;
  if ( v5 )
    Scaleform::RefCountNTSImpl::Release(v5);
  this->pImageDesc.pObject = srcfmt->pImageDesc.pObject;
  v6 = (Scaleform::RefCountVImpl *)srcfmt->pFontHandle.pObject;
  if ( v6 )
    Scaleform::Render::RenderBuffer::AddRef(v6);
  v7 = (Scaleform::RefCountVImpl *)this->pFontHandle.pObject;
  if ( v7 )
    Scaleform::RefCountImpl::Release(v7);
  this->pFontHandle.pObject = srcfmt->pFontHandle.pObject;
  this->ColorV = srcfmt->ColorV;
  this->LetterSpacing = srcfmt->LetterSpacing;
  this->FontSize = srcfmt->FontSize;
  this->FormatFlags = srcfmt->FormatFlags;
  this->PresentMask = srcfmt->PresentMask;
  return this;
}

bool __fastcall Scaleform::Render::Text::FontHandle::operator==(
        Scaleform::Render::Text::FontHandle *this,
        const Scaleform::Render::Text::FontHandle *f)
{
  unsigned __int8 *v4; // rax
  unsigned __int64 v5; // r8
  int v6; // ecx
  int v7; // edx

  if ( this->pFontManager != f->pFontManager
    || this->pFont.pObject != f->pFont.pObject
    || this->OverridenFontFlags != f->OverridenFontFlags )
  {
    return 0;
  }
  v4 = (unsigned __int8 *)((this->FontName.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12);
  v5 = (f->FontName.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) - (this->FontName.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
  do
  {
    v6 = v4[v5];
    v7 = *v4 - v6;
    if ( v7 )
      break;
    ++v4;
  }
  while ( v6 );
  return !v7 && this->FontScaleFactor == f->FontScaleFactor;
}

bool __fastcall Scaleform::Render::Text::HTMLImageTagDesc::operator==(
        Scaleform::Render::Text::HTMLImageTagDesc *this,
        const Scaleform::Render::Text::HTMLImageTagDesc *f)
{
  unsigned __int8 *v3; // rax
  unsigned __int64 v5; // r8
  int v6; // ecx
  int v7; // edx
  unsigned __int8 *v8; // rax
  int v9; // ecx
  int v10; // edx

  v3 = (unsigned __int8 *)((this->Url.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12);
  v5 = (f->Url.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) - (this->Url.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
  do
  {
    v6 = v3[v5];
    v7 = *v3 - v6;
    if ( v7 )
      break;
    ++v3;
  }
  while ( v6 );
  if ( v7 )
    return 0;
  v8 = (unsigned __int8 *)((this->Id.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12);
  do
  {
    v9 = v8[(f->Id.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) - (this->Id.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64)];
    v10 = *v8 - v9;
    if ( v10 )
      break;
    ++v8;
  }
  while ( v9 );
  return !v10
      && this->VSpace == f->VSpace
      && this->HSpace == f->HSpace
      && this->ParaId == f->ParaId
      && this->Alignment == f->Alignment;
}

bool __fastcall Scaleform::Render::Text::ParagraphFormat::operator==(
        Scaleform::Render::Text::ParagraphFormat *this,
        const Scaleform::Render::Text::ParagraphFormat *f)
{
  return this->PresentMask == f->PresentMask
      && this->BlockIndent == f->BlockIndent
      && this->Indent == f->Indent
      && this->Leading == f->Leading
      && this->LeftMargin == f->LeftMargin
      && this->RightMargin == f->RightMargin
      && Scaleform::Render::Text::ParagraphFormat::TabStopsEqual(this, f->pTabStops);
}

bool __fastcall Scaleform::Render::Text::TextFormat::operator==(
        Scaleform::Render::Text::TextFormat *this,
        const Scaleform::Render::Text::TextFormat *f)
{
  unsigned __int16 PresentMask; // cx
  unsigned __int16 v5; // dx
  bool v6; // cl
  Scaleform::Render::Text::FontHandle *v7; // rcx
  Scaleform::Render::Text::FontHandle *v8; // rdx
  bool IsUrlSet; // bl
  Scaleform::Render::Text::HTMLImageTagDesc *pObject; // rbx
  Scaleform::Render::Text::HTMLImageTagDesc *v11; // rdx
  bool result; // al

  PresentMask = this->PresentMask;
  v5 = f->PresentMask;
  result = 0;
  if ( PresentMask == v5
    && this->FormatFlags == f->FormatFlags
    && this->ColorV == f->ColorV
    && this->FontSize == f->FontSize )
  {
    v6 = (PresentMask & 4) != 0;
    if ( v6 == ((v5 & 4) != 0)
      && (!v6
       || !Scaleform::String::CompareNoCase(
             (const char *)((this->FontList.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12),
             (const char *)((f->FontList.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12)))
      && this->LetterSpacing == f->LetterSpacing
      && ((this->PresentMask & 0x800) != 0) == ((f->PresentMask & 0x800) != 0) )
    {
      if ( (this->PresentMask & 0x800) == 0
        || (v7 = this->pFontHandle.pObject, v8 = f->pFontHandle.pObject, v7 == v8)
        || v7 && v8 && Scaleform::Render::Text::FontHandle::operator==(v7, v8) )
      {
        IsUrlSet = Scaleform::Render::Text::TextFormat::IsUrlSet((Scaleform::Render::Text::TextFormat *)f);
        if ( Scaleform::Render::Text::TextFormat::IsUrlSet(this) == IsUrlSet
          && (!Scaleform::Render::Text::TextFormat::IsUrlSet(this)
           || !Scaleform::String::CompareNoCase(
                 (const char *)((this->Url.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12),
                 (const char *)((f->Url.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12))) )
        {
          pObject = this->pImageDesc.pObject;
          if ( pObject )
          {
            v11 = f->pImageDesc.pObject;
            if ( v11 )
            {
              if ( Scaleform::Render::Text::HTMLImageTagDesc::operator==(this->pImageDesc.pObject, v11) )
                return 1;
            }
          }
          if ( pObject == f->pImageDesc.pObject )
            return 1;
        }
      }
    }
  }
  return result;
}

void __fastcall Scaleform::Render::Text::ParagraphFormat::AllocTabStops(
        Scaleform::Render::Text::ParagraphFormat *this,
        unsigned int num)
{
  unsigned int *v4; // rax

  Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->pTabStops);
  this->pTabStops = 0i64;
  v4 = (unsigned int *)Scaleform::Memory::pGlobalHeap->Alloc(Scaleform::Memory::pGlobalHeap, 4i64 * (num + 1), 0i64);
  this->pTabStops = v4;
  *v4 = num;
}

Scaleform::Render::Text::ParagraphFormat *__fastcall Scaleform::Render::Text::Allocator::AllocateParagraphFormat(
        Scaleform::Render::Text::Allocator *this,
        const Scaleform::Render::Text::ParagraphFormat *srcfmt)
{
  Scaleform::HashSetBase<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *>,Scaleform::Render::Text::ParagraphFormat::HashFunctor,Scaleform::Render::Text::ParagraphFormat::HashFunctor,Scaleform::AllocatorLH<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *>,74>,Scaleform::HashsetCachedEntry<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *>,Scaleform::Render::Text::ParagraphFormat::HashFunctor> >::TableType *pTable; // rbx
  Scaleform::HashSetLH<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *>,Scaleform::Render::Text::ParagraphFormat::HashFunctor,Scaleform::Render::Text::ParagraphFormat::HashFunctor,74,Scaleform::HashsetCachedEntry<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *>,Scaleform::Render::Text::ParagraphFormat::HashFunctor> > *p_ParagraphFormatStorage; // rsi
  unsigned __int64 v6; // r9
  __int64 v7; // r8
  unsigned __int64 v8; // rdx
  bool v9; // zf
  unsigned __int64 *v10; // rdx
  unsigned __int64 *v11; // rax
  Scaleform::HashSetBase<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *>,Scaleform::Render::Text::ParagraphFormat::HashFunctor,Scaleform::Render::Text::ParagraphFormat::HashFunctor,Scaleform::AllocatorLH<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *>,74>,Scaleform::HashsetCachedEntry<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *>,Scaleform::Render::Text::ParagraphFormat::HashFunctor> >::TableType *v13; // rcx
  const Scaleform::Render::Text::ParagraphFormat *v14; // rbx
  unsigned __int64 EntryCount; // rcx
  Scaleform::Render::Text::ParagraphFormat *v16; // rax
  Scaleform::Render::Text::ParagraphFormat *v17; // rax
  unsigned __int64 v18; // rax
  Scaleform::HashSetBase<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *>,Scaleform::Render::Text::ParagraphFormat::HashFunctor,Scaleform::Render::Text::ParagraphFormat::HashFunctor,Scaleform::AllocatorLH<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *>,74>,Scaleform::HashsetCachedEntry<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *>,Scaleform::Render::Text::ParagraphFormat::HashFunctor> > v19; // rdi
  unsigned __int64 v20; // rbp
  signed __int64 v21; // rax
  Scaleform::Render::Text::ParagraphFormat *key; // [rsp+30h] [rbp+8h] BYREF

  pTable = this->ParagraphFormatStorage.pTable;
  p_ParagraphFormatStorage = &this->ParagraphFormatStorage;
  if ( !pTable )
    goto LABEL_11;
  v6 = pTable->SizeMask & Scaleform::Render::Text::ParagraphFormat::HashFunctor::CalcHash(srcfmt);
  v7 = v6;
  v8 = v6 + 2 * (v6 + 1);
  v9 = *(&pTable->EntryCount + v8) == -2i64;
  v10 = &pTable->EntryCount + v8;
  if ( v9 || v10[1] != v6 )
    goto LABEL_11;
  while ( v10[1] != v6 || (const Scaleform::Render::Text::ParagraphFormat *)v10[2] != srcfmt )
  {
    v7 = *v10;
    if ( *v10 == -1i64 )
      goto LABEL_11;
    v10 = &pTable[v7 + 1].EntryCount + v7;
  }
  if ( v7 >= 0 && (v11 = &pTable[v7 + 2].EntryCount + v7) != 0i64 )
  {
    ++*(_DWORD *)(*v11 + 8);
    return (Scaleform::Render::Text::ParagraphFormat *)*v11;
  }
  else
  {
LABEL_11:
    v13 = pTable;
    v14 = 0i64;
    if ( v13 )
      EntryCount = v13->EntryCount;
    else
      EntryCount = 0i64;
    if ( EntryCount >= this->ParagraphFormatStorageCap )
      Scaleform::Render::Text::Allocator::FlushParagraphFormatCache(this, 0);
    v16 = (Scaleform::Render::Text::ParagraphFormat *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))this->pHeap->Alloc)(
                                                        this->pHeap,
                                                        40i64);
    if ( v16 )
    {
      Scaleform::Render::Text::ParagraphFormat::ParagraphFormat(v16, srcfmt, this);
      v14 = v17;
      key = v17;
    }
    else
    {
      key = 0i64;
    }
    v18 = Scaleform::Render::Text::ParagraphFormat::HashFunctor::CalcHash(v14);
    v19.pTable = p_ParagraphFormatStorage->pTable;
    v20 = v18;
    if ( p_ParagraphFormatStorage->pTable
      && (v21 = Scaleform::HashSetBase<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *>,Scaleform::Render::Text::ParagraphFormat::HashFunctor,Scaleform::Render::Text::ParagraphFormat::HashFunctor,Scaleform::AllocatorLH<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *>,74>,Scaleform::HashsetCachedEntry<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *>,Scaleform::Render::Text::ParagraphFormat::HashFunctor>>::findIndexCore<Scaleform::Render::Text::ParagraphFormat *>(
                  p_ParagraphFormatStorage,
                  &key,
                  v18 & v19.pTable->SizeMask),
          v21 >= 0) )
    {
      *(&v19.pTable[2].EntryCount + 3 * v21) = (unsigned __int64)v14;
    }
    else
    {
      Scaleform::HashSetBase<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *>,Scaleform::Render::Text::ParagraphFormat::HashFunctor,Scaleform::Render::Text::ParagraphFormat::HashFunctor,Scaleform::AllocatorLH<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *>,74>,Scaleform::HashsetCachedEntry<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *>,Scaleform::Render::Text::ParagraphFormat::HashFunctor>>::add<Scaleform::Render::Text::ParagraphFormat *>(
        p_ParagraphFormatStorage,
        p_ParagraphFormatStorage,
        &key,
        v20);
    }
    return (Scaleform::Render::Text::ParagraphFormat *)v14;
  }
}

Scaleform::Render::Text::TextFormat *__fastcall Scaleform::Render::Text::Allocator::AllocateTextFormat(
        Scaleform::Render::Text::Allocator *this,
        const Scaleform::Render::Text::TextFormat *srcfmt)
{
  unsigned __int64 v4; // rax
  Scaleform::HashSetBase<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,Scaleform::Render::Text::TextFormat::HashFunctor,Scaleform::Render::Text::TextFormat::HashFunctor,Scaleform::AllocatorLH<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,74>,Scaleform::HashsetCachedEntry<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,Scaleform::Render::Text::TextFormat::HashFunctor> >::TableType *pTable; // r9
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx
  bool v9; // zf
  unsigned __int64 *v10; // rcx
  unsigned __int64 *v11; // rax
  Scaleform::HashSetBase<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,Scaleform::Render::Text::TextFormat::HashFunctor,Scaleform::Render::Text::TextFormat::HashFunctor,Scaleform::AllocatorLH<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,74>,Scaleform::HashsetCachedEntry<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,Scaleform::Render::Text::TextFormat::HashFunctor> >::TableType *v13; // rcx
  Scaleform::Render::Text::TextFormat *v14; // rax
  Scaleform::Render::Text::TextFormat *v15; // rax
  const Scaleform::Render::Text::TextFormat *v16; // rbx
  Scaleform::RefCountVImpl *pObject; // rcx
  Scaleform::HashSetLH<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,Scaleform::Render::Text::TextFormat::HashFunctor,Scaleform::Render::Text::TextFormat::HashFunctor,74,Scaleform::HashsetCachedEntry<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,Scaleform::Render::Text::TextFormat::HashFunctor> > *p_TextFormatStorage; // rdi
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rsi
  signed __int64 v21; // rax
  Scaleform::Render::Text::TextFormat *key; // [rsp+38h] [rbp+10h] BYREF

  if ( (srcfmt->PresentMask & 0x200) == 0 )
  {
    if ( this->TextFormatStorage.pTable )
    {
      v4 = Scaleform::Render::Text::TextFormat::HashFunctor::CalcHash(srcfmt);
      pTable = this->TextFormatStorage.pTable;
      v6 = v4 & pTable->SizeMask;
      v7 = v6;
      v8 = v6 + 2 * (v6 + 1);
      v9 = *(&pTable->EntryCount + v8) == -2i64;
      v10 = &pTable->EntryCount + v8;
      if ( !v9 && v10[1] == v6 )
      {
        while ( v10[1] != v6 || (const Scaleform::Render::Text::TextFormat *)v10[2] != srcfmt )
        {
          v7 = *v10;
          if ( *v10 == -1i64 )
            goto LABEL_12;
          v10 = &pTable[v7 + 1].EntryCount + v7;
        }
        if ( v7 >= 0 )
        {
          v11 = &pTable[v7 + 2].EntryCount + v7;
          if ( v11 )
          {
            ++*(_DWORD *)(*v11 + 8);
            return (Scaleform::Render::Text::TextFormat *)*v11;
          }
        }
      }
    }
LABEL_12:
    v13 = this->TextFormatStorage.pTable;
    if ( v13 )
      v13 = (Scaleform::HashSetBase<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,Scaleform::Render::Text::TextFormat::HashFunctor,Scaleform::Render::Text::TextFormat::HashFunctor,Scaleform::AllocatorLH<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,74>,Scaleform::HashsetCachedEntry<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,Scaleform::Render::Text::TextFormat::HashFunctor> >::TableType *)v13->EntryCount;
    if ( (unsigned __int64)v13 >= this->TextFormatStorageCap )
      Scaleform::Render::Text::Allocator::FlushTextFormatCache(this, 0);
  }
  v14 = (Scaleform::Render::Text::TextFormat *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))this->pHeap->Alloc)(
                                                 this->pHeap,
                                                 80i64);
  if ( v14 )
  {
    Scaleform::Render::Text::TextFormat::TextFormat(v14, srcfmt, this);
    v16 = v15;
    key = v15;
  }
  else
  {
    v16 = 0i64;
    key = 0i64;
  }
  if ( (this->Flags & 1) != 0 && (v16->PresentMask & 0x800) != 0 )
  {
    pObject = (Scaleform::RefCountVImpl *)v16->pFontHandle.pObject;
    if ( pObject )
      Scaleform::RefCountImpl::Release(pObject);
    v16->pFontHandle.pObject = 0i64;
    v16->PresentMask &= ~0x800u;
  }
  if ( (srcfmt->PresentMask & 0x200) == 0 )
  {
    p_TextFormatStorage = &this->TextFormatStorage;
    v19 = Scaleform::Render::Text::TextFormat::HashFunctor::CalcHash(v16);
    v20 = v19;
    if ( p_TextFormatStorage->pTable )
    {
      v21 = Scaleform::HashSetBase<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,Scaleform::Render::Text::TextFormat::HashFunctor,Scaleform::Render::Text::TextFormat::HashFunctor,Scaleform::AllocatorLH<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,74>,Scaleform::HashsetCachedEntry<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,Scaleform::Render::Text::TextFormat::HashFunctor>>::findIndexCore<Scaleform::Render::Text::TextFormat *>(
              p_TextFormatStorage,
              &key,
              v19 & p_TextFormatStorage->pTable->SizeMask);
      if ( v21 >= 0 )
      {
        *(&p_TextFormatStorage->pTable[2].EntryCount + 3 * v21) = (unsigned __int64)v16;
        return (Scaleform::Render::Text::TextFormat *)v16;
      }
    }
    Scaleform::HashSetBase<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,Scaleform::Render::Text::TextFormat::HashFunctor,Scaleform::Render::Text::TextFormat::HashFunctor,Scaleform::AllocatorLH<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,74>,Scaleform::HashsetCachedEntry<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,Scaleform::Render::Text::TextFormat::HashFunctor>>::add<Scaleform::Render::Text::TextFormat *>(
      p_TextFormatStorage,
      p_TextFormatStorage,
      &key,
      v20);
  }
  return (Scaleform::Render::Text::TextFormat *)v16;
}

unsigned __int64 __fastcall Scaleform::Render::Text::ParagraphFormat::HashFunctor::CalcHash(
        const Scaleform::Render::Text::ParagraphFormat *data)
{
  unsigned __int16 PresentMask; // r10
  __int64 v2; // rax
  unsigned int *pTabStops; // r11
  __int64 i; // r8
  __int64 v5; // rdx

  PresentMask = data->PresentMask;
  v2 = 0i64;
  if ( (PresentMask & 0x40) != 0 )
  {
    pTabStops = data->pTabStops;
    if ( pTabStops )
    {
      v2 = 5381i64;
      for ( i = 4i64 * (*pTabStops + 1); i; v2 = v5 + 65599 * v2 )
        v5 = *((unsigned __int8 *)pTabStops + --i);
    }
  }
  if ( (PresentMask & 2) != 0 )
    v2 = data->BlockIndent ^ (unsigned __int64)v2;
  if ( (PresentMask & 4) != 0 )
    v2 ^= (__int64)data->Indent << 8;
  if ( (PresentMask & 8) != 0 )
    v2 ^= (__int64)data->Leading << 12;
  if ( (PresentMask & 0x10) != 0 )
    v2 ^= (unsigned __int64)data->LeftMargin << 16;
  if ( (PresentMask & 0x20) != 0 )
    v2 ^= (unsigned __int64)data->RightMargin << 18;
  return ((unsigned __int64)PresentMask >> 1) & 0xC00 ^ (((PresentMask & 0x8080) == 0x8080) | ((unsigned __int64)PresentMask << 9) | ((unsigned __int64)PresentMask >> 8) & 6) ^ v2;
}

__int64 __fastcall Scaleform::Render::Text::TextFormat::HashFunctor::CalcHash(
        const Scaleform::Render::Text::TextFormat *data)
{
  __int64 v2; // rcx
  unsigned __int16 PresentMask; // dx
  __int64 FormatFlags; // rcx
  Scaleform::Render::Text::HTMLImageTagDesc *pObject; // rcx
  __int64 v6; // rdx
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 LetterSpacing_low; // [rsp+20h] [rbp-48h]
  __int64 ColorV; // [rsp+28h] [rbp-40h]
  __int64 v12; // [rsp+30h] [rbp-38h]
  __int64 v13; // [rsp+38h] [rbp-30h]
  __int64 v14; // [rsp+40h] [rbp-28h]
  unsigned __int64 Hash; // [rsp+48h] [rbp-20h]

  v2 = 0i64;
  ColorV = 0i64;
  Hash = 0i64;
  PresentMask = data->PresentMask;
  if ( (PresentMask & 0x401) != 0 )
    ColorV = data->ColorV;
  LetterSpacing_low = LODWORD(data->LetterSpacing);
  if ( (PresentMask & 2) != 0 )
    v2 = LetterSpacing_low;
  v12 = v2;
  FormatFlags = data->FormatFlags;
  v13 = FormatFlags;
  if ( (PresentMask & 8) != 0 )
  {
    FormatFlags |= (unsigned __int64)data->FontSize << 8;
    v13 = FormatFlags;
  }
  if ( data->pFontHandle.pObject )
    v13 = FormatFlags | 0x1000000;
  v14 = PresentMask;
  if ( (PresentMask & 0x200) != 0 )
  {
    pObject = data->pImageDesc.pObject;
    if ( pObject )
      Hash = Scaleform::Render::Text::HTMLImageTagDesc::GetHash(pObject);
  }
  v6 = 40i64;
  v7 = 5381i64;
  do
  {
    v8 = *((unsigned __int8 *)&LetterSpacing_low + v6-- + 7);
    v7 = v8 + 65599 * v7;
  }
  while ( v6 );
  if ( (data->PresentMask & 4) != 0 )
    v7 ^= Scaleform::String::BernsteinHashFunctionCIS(
            (const void *)((data->FontList.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12),
            *(_QWORD *)(data->FontList.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) & 0x7FFFFFFFFFFFFFFFi64,
            0x1505ui64);
  if ( (data->PresentMask & 0x100) != 0 && Scaleform::String::GetLength(&data->Url) )
    return v7 ^ Scaleform::String::BernsteinHashFunctionCIS(
                  (const void *)((data->Url.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12),
                  *(_QWORD *)(data->Url.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) & 0x7FFFFFFFFFFFFFFFi64,
                  0x1505ui64);
  else
    return v7;
}

void __fastcall Scaleform::HashSetBase<Scaleform::GFx::AS3::TR::NodeBlock *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *>,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *>,Scaleform::AllocatorDH<Scaleform::GFx::AS3::TR::NodeBlock *,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::AS3::TR::NodeBlock *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *>>>::Clear(
        Scaleform::HashSetBase<Scaleform::PtrCmpNN<Scaleform::GFx::AS3::TR::Type const >,Scaleform::GFx::AS3::TR::Type::HashFunctor,Scaleform::GFx::AS3::TR::Type::HashFunctor,Scaleform::AllocatorDH<Scaleform::PtrCmpNN<Scaleform::GFx::AS3::TR::Type const >,348>,Scaleform::HashsetCachedEntry<Scaleform::PtrCmpNN<Scaleform::GFx::AS3::TR::Type const >,Scaleform::GFx::AS3::TR::Type::HashFunctor> > *this)
{
  __int64 v2; // rdx
  unsigned __int64 v3; // r8

  if ( this->pTable )
  {
    v2 = 0i64;
    v3 = this->pTable->SizeMask + 1;
    do
    {
      if ( *(unsigned __int64 *)((char *)&this->pTable[1].EntryCount + v2) != -2i64 )
        *(unsigned __int64 *)((char *)&this->pTable[1].EntryCount + v2) = -2i64;
      v2 += 24i64;
      --v3;
    }
    while ( v3 );
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->pTable);
    this->pTable = 0i64;
  }
}

void __fastcall Scaleform::Render::Text::ParagraphFormat::CopyTabStops(
        Scaleform::Render::Text::ParagraphFormat *this,
        const unsigned int *psrcTabStops)
{
  __int64 v4; // rsi
  unsigned int *pTabStops; // rdx
  unsigned int *v6; // rax

  if ( psrcTabStops )
  {
    v4 = *psrcTabStops;
    pTabStops = this->pTabStops;
    if ( !pTabStops || *pTabStops != (_DWORD)v4 )
    {
      ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
      this->pTabStops = 0i64;
      v6 = (unsigned int *)Scaleform::Memory::pGlobalHeap->Alloc(
                             Scaleform::Memory::pGlobalHeap,
                             4i64 * (unsigned int)(v4 + 1),
                             0i64);
      this->pTabStops = v6;
      *v6 = v4;
    }
    memmove(this->pTabStops + 1, psrcTabStops + 1, 4 * v4);
  }
  else
  {
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->pTabStops);
    this->pTabStops = 0i64;
  }
}

bool __fastcall Scaleform::Render::Text::Allocator::FlushParagraphFormatCache(
        Scaleform::Render::Text::Allocator *this,
        bool noAllocationsAllowed)
{
  Scaleform::HashSetBase<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *>,Scaleform::Render::Text::ParagraphFormat::HashFunctor,Scaleform::Render::Text::ParagraphFormat::HashFunctor,Scaleform::AllocatorLH<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *>,74>,Scaleform::HashsetCachedEntry<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *>,Scaleform::Render::Text::ParagraphFormat::HashFunctor> >::TableType *pTable; // rax
  unsigned __int64 v3; // rbx
  unsigned __int64 EntryCount; // rbp
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // r8
  Scaleform::HashSetBase<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *>,Scaleform::Render::Text::ParagraphFormat::HashFunctor,Scaleform::Render::Text::ParagraphFormat::HashFunctor,Scaleform::AllocatorLH<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *>,74>,Scaleform::HashsetCachedEntry<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *>,Scaleform::Render::Text::ParagraphFormat::HashFunctor> >::TableType *v8; // rax
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // rax
  Scaleform::HashSetBase<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *>,Scaleform::Render::Text::ParagraphFormat::HashFunctor,Scaleform::Render::Text::ParagraphFormat::HashFunctor,Scaleform::AllocatorLH<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *>,74>,Scaleform::HashsetCachedEntry<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *>,Scaleform::Render::Text::ParagraphFormat::HashFunctor> >::TableType *v11; // rax
  unsigned __int64 v12; // rcx
  Scaleform::HashSetBase<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *>,Scaleform::Render::Text::ParagraphFormat::HashFunctor,Scaleform::Render::Text::ParagraphFormat::HashFunctor,Scaleform::AllocatorLH<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *>,74>,Scaleform::HashsetCachedEntry<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *>,Scaleform::Render::Text::ParagraphFormat::HashFunctor> >::TableType *v13; // rax
  unsigned int v14; // eax
  Scaleform::HashSetBase<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *>,Scaleform::Render::Text::ParagraphFormat::HashFunctor,Scaleform::Render::Text::ParagraphFormat::HashFunctor,Scaleform::AllocatorLH<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *>,74>,Scaleform::HashsetCachedEntry<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *>,Scaleform::Render::Text::ParagraphFormat::HashFunctor> >::TableType *v15; // rax

  pTable = this->ParagraphFormatStorage.pTable;
  v3 = 0i64;
  EntryCount = 0i64;
  if ( pTable )
    EntryCount = pTable->EntryCount;
  if ( !noAllocationsAllowed )
  {
    v6 = pTable ? pTable->EntryCount : 0i64;
    v7 = 5 * v6;
    v8 = this->ParagraphFormatStorage.pTable;
    v9 = v7 >> 2;
    v10 = v8 ? v8->EntryCount : 0i64;
    if ( v9 > v10 )
      Scaleform::HashSetBase<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *>,Scaleform::Render::Text::ParagraphFormat::HashFunctor,Scaleform::Render::Text::ParagraphFormat::HashFunctor,Scaleform::AllocatorLH<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *>,74>,Scaleform::HashsetCachedEntry<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *>,Scaleform::Render::Text::ParagraphFormat::HashFunctor>>::setRawCapacity(
        &this->ParagraphFormatStorage,
        &this->ParagraphFormatStorage,
        v9);
  }
  v11 = this->ParagraphFormatStorage.pTable;
  v12 = 0i64;
  if ( v11 )
    v12 = v11->EntryCount;
  v13 = this->ParagraphFormatStorage.pTable;
  if ( v12 < this->ParagraphFormatStorageCap )
  {
    if ( !v13 || v13->EntryCount <= 0x64 )
      this->ParagraphFormatStorageCap = 100;
  }
  else
  {
    if ( v13 )
      v14 = v13->EntryCount + 10;
    else
      v14 = 10;
    this->ParagraphFormatStorageCap = v14;
  }
  v15 = this->ParagraphFormatStorage.pTable;
  if ( v15 )
    v3 = v15->EntryCount;
  return EntryCount != v3;
}

bool __fastcall Scaleform::Render::Text::Allocator::FlushTextFormatCache(
        Scaleform::Render::Text::Allocator *this,
        bool noAllocationsAllowed)
{
  Scaleform::HashSetBase<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,Scaleform::Render::Text::TextFormat::HashFunctor,Scaleform::Render::Text::TextFormat::HashFunctor,Scaleform::AllocatorLH<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,74>,Scaleform::HashsetCachedEntry<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,Scaleform::Render::Text::TextFormat::HashFunctor> >::TableType *pTable; // rax
  unsigned __int64 v3; // rbx
  unsigned __int64 EntryCount; // rbp
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // r8
  Scaleform::HashSetBase<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,Scaleform::Render::Text::TextFormat::HashFunctor,Scaleform::Render::Text::TextFormat::HashFunctor,Scaleform::AllocatorLH<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,74>,Scaleform::HashsetCachedEntry<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,Scaleform::Render::Text::TextFormat::HashFunctor> >::TableType *v8; // rax
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // rax
  Scaleform::HashSetBase<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,Scaleform::Render::Text::TextFormat::HashFunctor,Scaleform::Render::Text::TextFormat::HashFunctor,Scaleform::AllocatorLH<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,74>,Scaleform::HashsetCachedEntry<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,Scaleform::Render::Text::TextFormat::HashFunctor> >::TableType *v11; // rax
  unsigned __int64 v12; // rcx
  Scaleform::HashSetBase<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,Scaleform::Render::Text::TextFormat::HashFunctor,Scaleform::Render::Text::TextFormat::HashFunctor,Scaleform::AllocatorLH<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,74>,Scaleform::HashsetCachedEntry<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,Scaleform::Render::Text::TextFormat::HashFunctor> >::TableType *v13; // rax
  unsigned int v14; // eax
  Scaleform::HashSetBase<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,Scaleform::Render::Text::TextFormat::HashFunctor,Scaleform::Render::Text::TextFormat::HashFunctor,Scaleform::AllocatorLH<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,74>,Scaleform::HashsetCachedEntry<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,Scaleform::Render::Text::TextFormat::HashFunctor> >::TableType *v15; // rax

  pTable = this->TextFormatStorage.pTable;
  v3 = 0i64;
  EntryCount = 0i64;
  if ( pTable )
    EntryCount = pTable->EntryCount;
  if ( !noAllocationsAllowed )
  {
    v6 = pTable ? pTable->EntryCount : 0i64;
    v7 = 5 * v6;
    v8 = this->TextFormatStorage.pTable;
    v9 = v7 >> 2;
    v10 = v8 ? v8->EntryCount : 0i64;
    if ( v9 > v10 )
      Scaleform::HashSetBase<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,Scaleform::Render::Text::TextFormat::HashFunctor,Scaleform::Render::Text::TextFormat::HashFunctor,Scaleform::AllocatorLH<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,74>,Scaleform::HashsetCachedEntry<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,Scaleform::Render::Text::TextFormat::HashFunctor>>::setRawCapacity(
        &this->TextFormatStorage,
        &this->TextFormatStorage,
        v9);
  }
  v11 = this->TextFormatStorage.pTable;
  v12 = 0i64;
  if ( v11 )
    v12 = v11->EntryCount;
  v13 = this->TextFormatStorage.pTable;
  if ( v12 < this->TextFormatStorageCap )
  {
    if ( !v13 || v13->EntryCount <= 0x64 )
      this->TextFormatStorageCap = 100;
  }
  else
  {
    if ( v13 )
      v14 = v13->EntryCount + 10;
    else
      v14 = 10;
    this->TextFormatStorageCap = v14;
  }
  v15 = this->TextFormatStorage.pTable;
  if ( v15 )
    v3 = v15->EntryCount;
  return EntryCount != v3;
}

void __fastcall Scaleform::Render::Text::ParagraphFormat::FreeTabStops(Scaleform::Render::Text::ParagraphFormat *this)
{
  Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->pTabStops);
  this->pTabStops = 0i64;
}

Scaleform::RefCountVImpl *__fastcall Scaleform::Render::Text::TextFormat::GetFontHandle(
        Scaleform::Render::Text::TextFormat *this)
{
  Scaleform::RefCountVImpl *v2; // rcx
  Scaleform::RefCountVImpl *pObject; // rcx
  Scaleform::RefCountVImpl *v4; // rdi
  char v5; // si
  Scaleform::RefCountVImpl *v6; // rbx
  Scaleform::RefCountVImpl *v8; // [rsp+30h] [rbp+8h]

  v2 = 0i64;
  LODWORD(v8) = 0;
  if ( (this->PresentMask & 0x800) != 0 )
  {
    pObject = (Scaleform::RefCountVImpl *)this->pFontHandle.pObject;
    if ( pObject )
      Scaleform::Render::RenderBuffer::AddRef(pObject);
    v4 = (Scaleform::RefCountVImpl *)this->pFontHandle.pObject;
    v5 = 1;
    v2 = v8;
    v6 = v4;
  }
  else
  {
    v4 = v8;
    v5 = 2;
    v6 = 0i64;
  }
  if ( (v5 & 2) != 0 )
  {
    v5 &= ~2u;
    if ( v2 )
      Scaleform::RefCountImpl::Release(v2);
  }
  if ( (v5 & 1) != 0 && v4 )
    Scaleform::RefCountImpl::Release(v4);
  return v6;
}

Scaleform::StringDH *__fastcall Scaleform::Render::Text::TextFormat::GetFontList(
        Scaleform::Render::Text::TextFormat *this)
{
  Scaleform::StringDH *result; // rax

  if ( dword_140A72118 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 40i64) )
  {
    Init_thread_header(&dword_140A72118);
    if ( dword_140A72118 == -1 )
    {
      Scaleform::String::String(&emptyStr);
      atexit(Scaleform::Render::Text::TextFormat::GetFontList_::_2_::_dynamic_atexit_destructor_for__emptyStr__);
      Init_thread_footer(&dword_140A72118);
    }
  }
  result = &this->FontList;
  if ( (this->PresentMask & 4) == 0 )
    return (Scaleform::StringDH *)&emptyStr;
  return result;
}

unsigned __int64 __fastcall Scaleform::Render::Text::HTMLImageTagDesc::GetHash(
        Scaleform::Render::Text::HTMLImageTagDesc *this)
{
  __int64 v2; // rdi
  __int64 v3; // rax
  __int64 v4; // rdx
  unsigned __int64 v5; // rbx
  char v7; // [rsp+1Fh] [rbp-39h]
  __int64 VSpace; // [rsp+20h] [rbp-38h]
  __int64 HSpace; // [rsp+28h] [rbp-30h]
  __int64 ParaId; // [rsp+30h] [rbp-28h]
  __int64 Alignment; // [rsp+38h] [rbp-20h]

  VSpace = this->VSpace;
  v2 = 5381i64;
  HSpace = this->HSpace;
  ParaId = this->ParaId;
  Alignment = this->Alignment;
  v3 = 32i64;
  do
  {
    v4 = (unsigned __int8)*(&v7 + v3--);
    v2 = v4 + 65599 * v2;
  }
  while ( v3 );
  v5 = v2 ^ Scaleform::String::BernsteinHashFunctionCIS(
              (const void *)((this->Url.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12),
              *(_QWORD *)(this->Url.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) & 0x7FFFFFFFFFFFFFFFi64,
              0x1505ui64);
  return v5 ^ Scaleform::String::BernsteinHashFunctionCIS(
                (const void *)((this->Id.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12),
                *(_QWORD *)(this->Id.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) & 0x7FFFFFFFFFFFFFFFi64,
                0x1505ui64);
}

Scaleform::Render::Text::HTMLImageTagDesc *__fastcall Scaleform::Render::Text::TextFormat::GetImageDesc(
        Scaleform::Render::Text::TextFormat *this)
{
  Scaleform::RefCountNTSImpl *v2; // rcx
  Scaleform::Render::Text::HTMLImageTagDesc *pObject; // rax
  Scaleform::Render::Text::HTMLImageTagDesc *v4; // rdi
  char v5; // si
  Scaleform::Render::Text::HTMLImageTagDesc *v6; // rbx
  Scaleform::Render::Text::HTMLImageTagDesc *v8; // [rsp+30h] [rbp+8h]

  v2 = 0i64;
  LODWORD(v8) = 0;
  if ( (this->PresentMask & 0x200) != 0 )
  {
    pObject = this->pImageDesc.pObject;
    if ( pObject )
      ++pObject->RefCount;
    v4 = this->pImageDesc.pObject;
    v5 = 1;
    v2 = v8;
    v6 = v4;
  }
  else
  {
    v4 = v8;
    v5 = 2;
    v6 = 0i64;
  }
  if ( (v5 & 2) != 0 )
  {
    v5 &= ~2u;
    if ( v2 )
      Scaleform::RefCountNTSImpl::Release(v2);
  }
  if ( (v5 & 1) != 0 && v4 )
    Scaleform::RefCountNTSImpl::Release(v4);
  return v6;
}

unsigned int *__fastcall Scaleform::Render::Text::ParagraphFormat::GetTabStops(
        Scaleform::Render::Text::ParagraphFormat *this,
        unsigned int *pnum)
{
  unsigned int *result; // rax

  result = this->pTabStops;
  if ( result )
  {
    if ( pnum )
      *pnum = *result;
    return this->pTabStops + 1;
  }
  return result;
}

void __fastcall Scaleform::Render::Text::ParagraphFormat::InitByDefaultValues(
        Scaleform::Render::Text::ParagraphFormat *this)
{
  unsigned __int16 PresentMask; // ax
  unsigned int *pTabStops; // rdx

  PresentMask = this->PresentMask;
  *(_QWORD *)&this->BlockIndent = 0i64;
  this->RightMargin = 0;
  pTabStops = this->pTabStops;
  this->PresentMask = PresentMask & 0x7940 | 1;
  Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, pTabStops);
  this->pTabStops = 0i64;
  this->PresentMask &= ~0x40u;
}

void __fastcall Scaleform::Render::Text::TextFormat::InitByDefaultValues(Scaleform::Render::Text::TextFormat *this)
{
  Scaleform::RefCountVImpl *pObject; // rcx
  unsigned __int16 PresentMask; // ax
  Scaleform::RefCountVImpl *v4; // rcx
  unsigned __int16 v5; // ax

  this->ColorV &= 0xFF000000;
  this->PresentMask |= 1u;
  Scaleform::Render::Text::TextFormat::SetFontList(this, "Times New Roman", 0xFFFFFFFFFFFFFFFFui64);
  this->PresentMask |= 8u;
  this->FontSize = 240;
  if ( (this->PresentMask & 0x800) != 0 && (this->FormatFlags & 1) != 0 )
  {
    pObject = (Scaleform::RefCountVImpl *)this->pFontHandle.pObject;
    if ( pObject )
      Scaleform::RefCountImpl::Release(pObject);
    this->pFontHandle.pObject = 0i64;
    this->PresentMask &= ~0x800u;
  }
  this->PresentMask |= 0x10u;
  PresentMask = this->PresentMask;
  this->FormatFlags &= ~1u;
  if ( (PresentMask & 0x800) != 0 && (this->FormatFlags & 2) != 0 )
  {
    v4 = (Scaleform::RefCountVImpl *)this->pFontHandle.pObject;
    if ( v4 )
      Scaleform::RefCountImpl::Release(v4);
    this->pFontHandle.pObject = 0i64;
    this->PresentMask &= ~0x800u;
  }
  v5 = this->PresentMask;
  this->FormatFlags &= 0xF1u;
  this->ColorV |= 0xFF000000;
  this->LetterSpacing = 0.0;
  this->PresentMask = v5 & 0xFB1D | 0xE0;
  Scaleform::String::Clear(&this->Url);
  this->PresentMask &= ~0x100u;
}

Scaleform::Render::Text::ParagraphFormat *__fastcall Scaleform::Render::Text::ParagraphFormat::Intersection(
        Scaleform::Render::Text::ParagraphFormat *this,
        Scaleform::Render::Text::ParagraphFormat *result,
        const Scaleform::Render::Text::ParagraphFormat *fmt)
{
  bool v5; // zf
  unsigned __int16 v6; // bx
  unsigned int *v7; // r12
  unsigned __int16 PresentMask; // cx
  unsigned __int16 v10; // dx
  unsigned __int16 v11; // r8
  __int16 v12; // r8
  __int16 v13; // ax
  __int16 v14; // bx
  unsigned int *pTabStops; // rcx
  unsigned int *v16; // rsi
  unsigned __int16 v17; // dx
  unsigned __int16 v18; // cx
  Scaleform::Render::Text::ParagraphFormat v20; // [rsp+20h] [rbp-48h] BYREF
  Scaleform::Render::Text::ParagraphFormat *key; // [rsp+80h] [rbp+18h] BYREF

  v5 = (this->PresentMask & 1) == 0;
  v6 = 0;
  v7 = 0i64;
  v20.pAllocator = 0i64;
  v20.RefCount = 1;
  memset(&v20.pTabStops, 0, 20);
  if ( !v5 && (fmt->PresentMask & 1) != 0 )
  {
    PresentMask = fmt->PresentMask;
    if ( ((this->PresentMask ^ PresentMask) & 0x600) == 0 )
    {
      v6 = PresentMask & 0x600 | 1;
      v20.PresentMask = v6;
    }
  }
  v10 = this->PresentMask;
  if ( (v10 & 0x80u) != 0 )
  {
    v11 = fmt->PresentMask;
    if ( (v11 & 0x80u) != 0 )
    {
      v12 = v11 & 0x8080;
      if ( ((v10 & 0x8080) == 0x8080) == (v12 == -32640) )
      {
        v13 = v6 | 0x8000;
        v14 = v6 & 0x7FFF;
        if ( v12 == -32640 )
          v14 = v13;
        v6 = v14 | 0x80;
        v20.PresentMask = v6;
      }
    }
  }
  if ( (v10 & 2) != 0 && (fmt->PresentMask & 2) != 0 && this->BlockIndent == fmt->BlockIndent )
  {
    v6 |= 2u;
    v20.BlockIndent = fmt->BlockIndent;
    v20.PresentMask = v6;
  }
  if ( (v10 & 4) != 0 && (fmt->PresentMask & 4) != 0 && this->Indent == fmt->Indent )
  {
    v6 |= 4u;
    v20.Indent = fmt->Indent;
    v20.PresentMask = v6;
  }
  if ( (v10 & 8) != 0 && (fmt->PresentMask & 8) != 0 && this->Leading == fmt->Leading )
  {
    v6 |= 8u;
    v20.Leading = fmt->Leading;
    v20.PresentMask = v6;
  }
  if ( (v10 & 0x10) != 0 && (fmt->PresentMask & 0x10) != 0 && this->LeftMargin == fmt->LeftMargin )
  {
    v6 |= 0x10u;
    v20.LeftMargin = fmt->LeftMargin;
    v20.PresentMask = v6;
  }
  if ( (v10 & 0x20) != 0 && (fmt->PresentMask & 0x20) != 0 && this->RightMargin == fmt->RightMargin )
  {
    v6 |= 0x20u;
    v20.RightMargin = fmt->RightMargin;
    v20.PresentMask = v6;
  }
  if ( (v10 & 0x40) != 0 && (fmt->PresentMask & 0x40) != 0 )
  {
    pTabStops = this->pTabStops;
    v16 = fmt->pTabStops;
    if ( pTabStops == v16
      || pTabStops && v16 && *pTabStops == *v16 && !memcmp(pTabStops + 1, v16 + 1, 4i64 * *pTabStops) )
    {
      if ( v16 && *v16 )
      {
        Scaleform::Render::Text::ParagraphFormat::CopyTabStops(&v20, v16);
        v7 = v20.pTabStops;
        v6 = v20.PresentMask | 0x40;
      }
      else
      {
        Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, 0i64);
        v6 = v20.PresentMask & 0xFFBF;
        v20.pTabStops = 0i64;
      }
      v20.PresentMask = v6;
    }
  }
  v17 = this->PresentMask;
  if ( (v17 & 0x100) != 0 )
  {
    v18 = fmt->PresentMask;
    if ( (v18 & 0x100) != 0 && ((v18 ^ v17) & 0x1800) == 0 )
    {
      v6 = (v6 ^ v18) & 0x1800 ^ v6 | 0x100;
      v20.PresentMask = v6;
    }
  }
  result->BlockIndent = v20.BlockIndent;
  result->Indent = v20.Indent;
  result->Leading = v20.Leading;
  result->LeftMargin = v20.LeftMargin;
  result->RightMargin = v20.RightMargin;
  result->pAllocator = 0i64;
  result->RefCount = 1;
  result->pTabStops = 0i64;
  result->PresentMask = v6;
  Scaleform::Render::Text::ParagraphFormat::CopyTabStops(result, v7);
  if ( v20.pAllocator )
  {
    key = &v20;
    Scaleform::HashSetBase<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *>,Scaleform::Render::Text::ParagraphFormat::HashFunctor,Scaleform::Render::Text::ParagraphFormat::HashFunctor,Scaleform::AllocatorLH<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *>,74>,Scaleform::HashsetCachedEntry<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *>,Scaleform::Render::Text::ParagraphFormat::HashFunctor>>::RemoveAlt<Scaleform::Render::Text::ParagraphFormat *>(
      &v20.pAllocator->ParagraphFormatStorage,
      &key);
  }
  Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v20.pTabStops);
  return result;
}

Scaleform::Render::Text::TextFormat *__fastcall Scaleform::Render::Text::TextFormat::Intersection(
        Scaleform::Render::Text::TextFormat *this,
        Scaleform::Render::Text::TextFormat *result,
        const Scaleform::Render::Text::TextFormat *fmt)
{
  Scaleform::MemoryHeap *pHeap; // rbx
  Scaleform::MemoryHeap *v7; // rdx
  Scaleform::MemoryHeap *v8; // rdx
  unsigned __int16 PresentMask; // r8
  unsigned __int8 v10; // cl
  int v11; // er10
  unsigned __int16 v12; // dx
  char v13; // r9
  unsigned __int8 FormatFlags; // r9
  unsigned __int8 v15; // r9
  unsigned __int8 v16; // cl
  unsigned int ColorV; // eax
  unsigned __int8 ColorV_high; // al
  float LetterSpacing; // xmm3_4
  unsigned __int16 FontSize; // ax
  Scaleform::StringDH *FontList; // rax
  Scaleform::RefCountVImpl *FontHandle; // rbx
  Scaleform::RefCountVImpl *v23; // rax
  Scaleform::Render::Text::FontHandle *v24; // rbx
  Scaleform::Render::Text::HTMLImageTagDesc *pObject; // rax
  Scaleform::Render::Text::HTMLImageTagDesc *v26; // rbx
  Scaleform::Render::Text::HTMLImageTagDesc *ImageDesc; // rax
  Scaleform::Render::Text::HTMLImageTagDesc *v28; // rbx
  Scaleform::MemoryHeap *v29; // r8
  Scaleform::Render::Text::HTMLImageTagDesc *v30; // rcx
  Scaleform::RefCountVImpl *v31; // rdx
  unsigned int v32; // eax
  float v33; // xmm0_4
  Scaleform::Render::Text::Allocator *pAllocator; // rax
  void *v35; // rbx
  void *v36; // rbx
  Scaleform::Render::Text::TextFormat v38; // [rsp+20h] [rbp-60h] BYREF
  Scaleform::Render::Text::TextFormat *key; // [rsp+A0h] [rbp+20h] BYREF

  LODWORD(key) = 0;
  pHeap = fmt->FontList.pHeap;
  v7 = Scaleform::Memory::pGlobalHeap;
  v38.pAllocator = 0i64;
  if ( pHeap )
    v7 = pHeap;
  v38.RefCount = 1;
  Scaleform::StringDH::StringDH(&v38.FontList, v7);
  v8 = Scaleform::Memory::pGlobalHeap;
  if ( pHeap )
    v8 = pHeap;
  Scaleform::StringDH::StringDH(&v38.Url, v8);
  PresentMask = this->PresentMask;
  v10 = 0;
  v38.FontSize = 0;
  v38.LetterSpacing = 0.0;
  v11 = -16777216;
  *(_OWORD *)&v38.pImageDesc.pObject = 0i64;
  v12 = 0;
  v38.ColorV = -16777216;
  v38.FormatFlags = 0;
  v38.PresentMask = 0;
  if ( (PresentMask & 0x10) != 0 && (fmt->PresentMask & 0x10) != 0 )
  {
    v13 = fmt->FormatFlags & 1;
    if ( (this->FormatFlags & 1) == v13 )
    {
      v12 = 16;
      v38.PresentMask = 16;
      v10 = v13 != 0;
      v38.FormatFlags = v13 != 0;
    }
  }
  if ( (PresentMask & 0x20) != 0
    && (fmt->PresentMask & 0x20) != 0
    && ((this->FormatFlags & 2) != 0) == ((fmt->FormatFlags & 2) != 0) )
  {
    if ( (fmt->FormatFlags & 2) != 0 )
      v10 |= 2u;
    else
      v10 &= ~2u;
    v12 |= 0x20u;
    v38.FormatFlags = v10;
    v38.PresentMask = v12;
  }
  if ( (PresentMask & 0x40) != 0 && (fmt->PresentMask & 0x40) != 0 )
  {
    FormatFlags = fmt->FormatFlags;
    if ( ((FormatFlags ^ this->FormatFlags) & 4) == 0 )
    {
      if ( (FormatFlags & 4) != 0 )
        v10 |= 4u;
      else
        v10 &= ~4u;
      v12 |= 0x40u;
      v38.FormatFlags = v10;
      v38.PresentMask = v12;
    }
  }
  if ( (PresentMask & 0x80u) != 0 && SLOBYTE(fmt->PresentMask) < 0 )
  {
    v15 = fmt->FormatFlags;
    if ( ((v15 ^ this->FormatFlags) & 8) == 0 )
    {
      if ( (v15 & 8) != 0 )
        v16 = v10 | 8;
      else
        v16 = v10 & 0xF7;
      v38.FormatFlags = v16;
      v12 |= 0x80u;
      v38.PresentMask = v12;
    }
  }
  if ( (this->PresentMask & 1) != 0 && (fmt->PresentMask & 1) != 0 )
  {
    ColorV = fmt->ColorV;
    if ( this->ColorV == ColorV )
    {
      v12 |= 1u;
      v38.ColorV = fmt->ColorV;
      v38.PresentMask = v12;
      v11 = ColorV;
    }
  }
  if ( (PresentMask & 0x400) != 0 && (fmt->PresentMask & 0x400) != 0 )
  {
    ColorV_high = HIBYTE(fmt->ColorV);
    if ( HIBYTE(this->ColorV) == ColorV_high )
    {
      v38.ColorV = v11 & 0xFFFFFF | (ColorV_high << 24);
      v12 |= 0x400u;
      v38.PresentMask = v12;
    }
  }
  if ( (PresentMask & 2) != 0 && (fmt->PresentMask & 2) != 0 )
  {
    LetterSpacing = fmt->LetterSpacing;
    if ( (float)(this->LetterSpacing * 0.050000001) == (float)(LetterSpacing * 0.050000001) )
    {
      v12 |= 2u;
      v38.PresentMask = v12;
      v38.LetterSpacing = (float)(__int16)(int)LetterSpacing;
    }
  }
  if ( (PresentMask & 8) != 0 && (fmt->PresentMask & 8) != 0 )
  {
    FontSize = fmt->FontSize;
    if ( this->FontSize == FontSize )
    {
      v38.PresentMask = v12 | 8;
      v38.FontSize = FontSize;
    }
  }
  if ( (PresentMask & 4) != 0
    && (fmt->PresentMask & 4) != 0
    && !Scaleform::String::CompareNoCase(
          (const char *)((this->FontList.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12),
          (const char *)((fmt->FontList.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12)) )
  {
    FontList = Scaleform::Render::Text::TextFormat::GetFontList((Scaleform::Render::Text::TextFormat *)fmt);
    Scaleform::Render::Text::TextFormat::SetFontList(&v38, FontList);
  }
  if ( (this->PresentMask & 0x800) != 0 && (fmt->PresentMask & 0x800) != 0 )
  {
    FontHandle = Scaleform::Render::Text::TextFormat::GetFontHandle((Scaleform::Render::Text::TextFormat *)fmt);
    if ( Scaleform::Render::Text::TextFormat::GetFontHandle(this) == FontHandle )
    {
      v23 = Scaleform::Render::Text::TextFormat::GetFontHandle((Scaleform::Render::Text::TextFormat *)fmt);
      v24 = (Scaleform::Render::Text::FontHandle *)v23;
      if ( v23 )
        Scaleform::Render::RenderBuffer::AddRef(v23);
      if ( v38.pFontHandle.pObject )
        Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v38.pFontHandle.pObject);
      v38.pFontHandle.pObject = v24;
      v38.PresentMask |= 0x800u;
    }
  }
  if ( (this->PresentMask & 0x100) != 0
    && Scaleform::String::GetLength(&this->Url)
    && (fmt->PresentMask & 0x100) != 0
    && Scaleform::String::GetLength(&fmt->Url)
    && !Scaleform::String::CompareNoCase(
          (const char *)((this->Url.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12),
          (const char *)((fmt->Url.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12)) )
  {
    Scaleform::String::operator=(&v38.Url, &fmt->Url);
    v38.PresentMask |= 0x100u;
  }
  if ( (this->PresentMask & 0x200) != 0 && (fmt->PresentMask & 0x200) != 0 )
  {
    pObject = this->pImageDesc.pObject;
    if ( pObject )
      ++pObject->RefCount;
    v26 = this->pImageDesc.pObject;
    if ( v26 )
      Scaleform::RefCountNTSImpl::Release(this->pImageDesc.pObject);
    if ( v26 == Scaleform::Render::Text::TextFormat::GetImageDesc((Scaleform::Render::Text::TextFormat *)fmt) )
    {
      ImageDesc = Scaleform::Render::Text::TextFormat::GetImageDesc((Scaleform::Render::Text::TextFormat *)fmt);
      v28 = ImageDesc;
      if ( ImageDesc )
        ++ImageDesc->RefCount;
      if ( v38.pImageDesc.pObject )
        Scaleform::RefCountNTSImpl::Release(v38.pImageDesc.pObject);
      v38.pImageDesc.pObject = v28;
      v38.PresentMask |= 0x200u;
    }
  }
  v29 = v38.FontList.pHeap;
  result->pAllocator = 0i64;
  result->RefCount = 1;
  Scaleform::StringDH::CopyConstructHelper(&result->FontList, &v38.FontList, v29);
  Scaleform::StringDH::CopyConstructHelper(&result->Url, &v38.Url, v38.FontList.pHeap);
  v30 = v38.pImageDesc.pObject;
  if ( v38.pImageDesc.pObject )
  {
    ++v38.pImageDesc.pObject->RefCount;
    v30 = v38.pImageDesc.pObject;
  }
  v31 = (Scaleform::RefCountVImpl *)v38.pFontHandle.pObject;
  result->pImageDesc.pObject = v30;
  if ( v31 )
  {
    Scaleform::Render::RenderBuffer::AddRef(v31);
    v31 = (Scaleform::RefCountVImpl *)v38.pFontHandle.pObject;
    v30 = v38.pImageDesc.pObject;
  }
  v32 = v38.ColorV;
  v33 = v38.LetterSpacing;
  result->pFontHandle.pObject = (Scaleform::Render::Text::FontHandle *)v31;
  result->ColorV = v32;
  result->FontSize = v38.FontSize;
  result->FormatFlags = v38.FormatFlags;
  result->PresentMask = v38.PresentMask;
  pAllocator = v38.pAllocator;
  result->LetterSpacing = v33;
  if ( pAllocator )
  {
    key = &v38;
    Scaleform::HashSetBase<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,Scaleform::Render::Text::TextFormat::HashFunctor,Scaleform::Render::Text::TextFormat::HashFunctor,Scaleform::AllocatorLH<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,74>,Scaleform::HashsetCachedEntry<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,Scaleform::Render::Text::TextFormat::HashFunctor>>::RemoveAlt<Scaleform::Render::Text::TextFormat *>(
      &pAllocator->TextFormatStorage,
      &key);
    v31 = (Scaleform::RefCountVImpl *)v38.pFontHandle.pObject;
    v30 = v38.pImageDesc.pObject;
  }
  if ( v31 )
  {
    Scaleform::RefCountImpl::Release(v31);
    v30 = v38.pImageDesc.pObject;
  }
  if ( v30 )
    Scaleform::RefCountNTSImpl::Release(v30);
  v35 = (void *)(v38.Url.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
  if ( (unsigned int)Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
                       (volatile int *)((v38.Url.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
                       -1) == 1 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v35);
  v36 = (void *)(v38.FontList.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
  if ( (unsigned int)Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
                       (volatile int *)((v38.FontList.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
                       -1) == 1 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v36);
  return result;
}

bool __fastcall Scaleform::Render::Text::TextFormat::IsFontSame(
        Scaleform::Render::Text::TextFormat *this,
        const Scaleform::Render::Text::TextFormat *fmt)
{
  unsigned __int8 FormatFlags; // cl
  unsigned __int8 v5; // dl
  bool result; // al

  result = 0;
  if ( (this->PresentMask & 4) != 0
    && (fmt->PresentMask & 4) != 0
    && !Scaleform::String::CompareNoCase(
          (const char *)((this->FontList.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12),
          (const char *)((fmt->FontList.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12))
    || (this->PresentMask & 0x800) != 0
    && (fmt->PresentMask & 0x800) != 0
    && this->pFontHandle.pObject == fmt->pFontHandle.pObject )
  {
    FormatFlags = this->FormatFlags;
    v5 = fmt->FormatFlags;
    if ( ((v5 ^ FormatFlags) & 1) == 0 && ((v5 ^ FormatFlags) & 2) == 0 )
      return 1;
  }
  return result;
}

bool __fastcall Scaleform::Render::Text::TextFormat::IsHTMLFontTagSame(
        Scaleform::Render::Text::TextFormat *this,
        const Scaleform::Render::Text::TextFormat *fmt)
{
  return ((this->PresentMask & 4) != 0
       && (fmt->PresentMask & 4) != 0
       && !Scaleform::String::CompareNoCase(
             (const char *)((this->FontList.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12),
             (const char *)((fmt->FontList.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12))
       || (this->PresentMask & 0x800) != 0
       && (fmt->PresentMask & 0x800) != 0
       && this->pFontHandle.pObject == fmt->pFontHandle.pObject)
      && ((this->ColorV ^ fmt->ColorV) & 0xFFFFFF) == 0
      && HIBYTE(this->ColorV) == HIBYTE(fmt->ColorV)
      && (float)((float)this->FontSize * 0.050000001) == (float)((float)fmt->FontSize * 0.050000001)
      && ((this->FormatFlags ^ fmt->FormatFlags) & 8) == 0
      && (float)(this->LetterSpacing * 0.050000001) == (float)(fmt->LetterSpacing * 0.050000001);
}

bool __fastcall Scaleform::Render::Text::TextFormat::IsUrlSet(Scaleform::Render::Text::TextFormat *this)
{
  return (this->PresentMask & 0x100) != 0 && Scaleform::String::GetLength(&this->Url);
}

Scaleform::Render::Text::ParagraphFormat *__fastcall Scaleform::Render::Text::ParagraphFormat::Merge(
        Scaleform::Render::Text::ParagraphFormat *this,
        Scaleform::Render::Text::ParagraphFormat *result,
        const Scaleform::Render::Text::ParagraphFormat *fmt)
{
  unsigned __int16 PresentMask; // ax
  unsigned int *pTabStops; // r14
  Scaleform::MemoryHeap_vtbl *v7; // rax
  unsigned int v8; // ebx
  unsigned int *v9; // r9
  unsigned __int16 v10; // dx
  unsigned __int16 v11; // r8
  __int16 v12; // ax
  __int16 v13; // dx
  unsigned int *v14; // rdx
  unsigned __int16 v15; // cx
  unsigned __int16 RightMargin; // ax
  Scaleform::Render::Text::ParagraphFormat v18; // [rsp+20h] [rbp-38h] BYREF
  Scaleform::Render::Text::ParagraphFormat *key; // [rsp+70h] [rbp+18h] BYREF

  v18.BlockIndent = this->BlockIndent;
  v18.Indent = this->Indent;
  v18.Leading = this->Leading;
  v18.LeftMargin = this->LeftMargin;
  v18.RightMargin = this->RightMargin;
  PresentMask = this->PresentMask;
  pTabStops = this->pTabStops;
  v18.pAllocator = 0i64;
  v18.RefCount = 1;
  v18.pTabStops = 0i64;
  v18.PresentMask = PresentMask;
  v7 = Scaleform::Memory::pGlobalHeap->__vftable;
  if ( pTabStops )
  {
    v8 = *pTabStops;
    v7->Free(Scaleform::Memory::pGlobalHeap, 0i64);
    v18.pTabStops = 0i64;
    v18.pTabStops = (unsigned int *)Scaleform::Memory::pGlobalHeap->Alloc(
                                      Scaleform::Memory::pGlobalHeap,
                                      4i64 * (v8 + 1),
                                      0i64);
    *v18.pTabStops = v8;
    memmove(v18.pTabStops + 1, pTabStops + 1, 4i64 * v8);
    v9 = v18.pTabStops;
  }
  else
  {
    v7->Free(Scaleform::Memory::pGlobalHeap, 0i64);
    v9 = 0i64;
    v18.pTabStops = 0i64;
  }
  if ( (fmt->PresentMask & 1) != 0 )
  {
    v10 = v18.PresentMask ^ (v18.PresentMask ^ fmt->PresentMask) & 0x600 | 1;
    v18.PresentMask = v10;
  }
  else
  {
    v10 = v18.PresentMask;
  }
  v11 = fmt->PresentMask;
  if ( (v11 & 0x80u) != 0 )
  {
    v12 = v10 | 0x8000;
    v13 = v10 & 0x7FFF;
    if ( (v11 & 0x8080) == 0x8080 )
      v13 = v12;
    v10 = v13 | 0x80;
    v18.PresentMask = v10;
  }
  if ( (v11 & 2) != 0 )
  {
    v10 |= 2u;
    v18.BlockIndent = fmt->BlockIndent;
    v18.PresentMask = v10;
  }
  if ( (v11 & 4) != 0 )
  {
    v10 |= 4u;
    v18.Indent = fmt->Indent;
    v18.PresentMask = v10;
  }
  if ( (v11 & 8) != 0 )
  {
    v10 |= 8u;
    v18.Leading = fmt->Leading;
    v18.PresentMask = v10;
  }
  if ( (v11 & 0x10) != 0 )
  {
    v10 |= 0x10u;
    v18.LeftMargin = fmt->LeftMargin;
    v18.PresentMask = v10;
  }
  if ( (v11 & 0x20) != 0 )
  {
    v10 |= 0x20u;
    v18.RightMargin = fmt->RightMargin;
    v18.PresentMask = v10;
  }
  if ( (v11 & 0x40) != 0 )
  {
    v14 = fmt->pTabStops;
    if ( v14 && *v14 )
    {
      Scaleform::Render::Text::ParagraphFormat::CopyTabStops(&v18, v14);
      v9 = v18.pTabStops;
      v10 = v18.PresentMask | 0x40;
    }
    else
    {
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v9);
      v10 = v18.PresentMask & 0xFFBF;
      v18.pTabStops = 0i64;
      v9 = 0i64;
    }
    v18.PresentMask = v10;
  }
  v15 = fmt->PresentMask;
  if ( (v15 & 0x100) != 0 )
  {
    v10 = (v10 ^ v15) & 0x1800 ^ v10 | 0x100;
    v18.PresentMask = v10;
  }
  result->BlockIndent = v18.BlockIndent;
  result->Indent = v18.Indent;
  result->Leading = v18.Leading;
  result->LeftMargin = v18.LeftMargin;
  RightMargin = v18.RightMargin;
  result->PresentMask = v10;
  result->RightMargin = RightMargin;
  result->pAllocator = 0i64;
  result->RefCount = 1;
  result->pTabStops = 0i64;
  Scaleform::Render::Text::ParagraphFormat::CopyTabStops(result, v9);
  if ( v18.pAllocator )
  {
    key = &v18;
    Scaleform::HashSetBase<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *>,Scaleform::Render::Text::ParagraphFormat::HashFunctor,Scaleform::Render::Text::ParagraphFormat::HashFunctor,Scaleform::AllocatorLH<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *>,74>,Scaleform::HashsetCachedEntry<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *>,Scaleform::Render::Text::ParagraphFormat::HashFunctor>>::RemoveAlt<Scaleform::Render::Text::ParagraphFormat *>(
      &v18.pAllocator->ParagraphFormatStorage,
      &key);
  }
  Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v18.pTabStops);
  return result;
}

Scaleform::Render::Text::TextFormat *__fastcall Scaleform::Render::Text::TextFormat::Merge(
        Scaleform::Render::Text::TextFormat *this,
        Scaleform::Render::Text::TextFormat *result,
        const Scaleform::Render::Text::TextFormat *fmt)
{
  Scaleform::MemoryHeap *pHeap; // r8
  Scaleform::Render::Text::HTMLImageTagDesc *pObject; // rax
  Scaleform::RefCountVImpl *v8; // rcx
  Scaleform::Render::Text::FontHandle *v9; // r9
  float LetterSpacing; // xmm0_4
  unsigned __int8 FormatFlags; // r8
  unsigned __int16 PresentMask; // dx
  char v13; // al
  char v14; // bl
  bool v15; // bl
  unsigned __int16 v16; // r10
  unsigned __int8 v17; // r8
  unsigned int ColorV; // eax
  int v19; // eax
  unsigned __int16 FontSize; // ax
  Scaleform::StringDH *p_FontList; // rbx
  Scaleform::RefCountVImpl *v22; // rcx
  Scaleform::RefCountVImpl *v23; // rbx
  Scaleform::Render::Text::HTMLImageTagDesc *v24; // rax
  Scaleform::Render::Text::HTMLImageTagDesc *v25; // rbx
  Scaleform::MemoryHeap *v26; // r8
  Scaleform::Render::Text::HTMLImageTagDesc *v27; // rcx
  Scaleform::RefCountVImpl *v28; // rdx
  unsigned int v29; // eax
  float v30; // xmm0_4
  Scaleform::Render::Text::Allocator *pAllocator; // rax
  void *v32; // rbx
  void *v33; // rbx
  Scaleform::Render::Text::TextFormat v35; // [rsp+20h] [rbp-50h] BYREF
  Scaleform::Render::Text::TextFormat *key; // [rsp+90h] [rbp+20h] BYREF

  LODWORD(key) = 0;
  pHeap = this->FontList.pHeap;
  v35.pAllocator = 0i64;
  v35.RefCount = 1;
  Scaleform::StringDH::CopyConstructHelper(&v35.FontList, &this->FontList, pHeap);
  Scaleform::StringDH::CopyConstructHelper(&v35.Url, &this->Url, this->FontList.pHeap);
  pObject = this->pImageDesc.pObject;
  if ( pObject )
    ++pObject->RefCount;
  v8 = (Scaleform::RefCountVImpl *)this->pFontHandle.pObject;
  v35.pImageDesc.pObject = this->pImageDesc.pObject;
  if ( v8 )
    Scaleform::Render::RenderBuffer::AddRef(v8);
  v9 = this->pFontHandle.pObject;
  LetterSpacing = this->LetterSpacing;
  FormatFlags = this->FormatFlags;
  PresentMask = this->PresentMask;
  v35.ColorV = this->ColorV;
  v35.FontSize = this->FontSize;
  v13 = LOBYTE(fmt->PresentMask) >> 4;
  v35.LetterSpacing = LetterSpacing;
  v35.pFontHandle.pObject = v9;
  v35.FormatFlags = FormatFlags;
  v35.PresentMask = PresentMask;
  if ( (v13 & 1) != 0 )
  {
    v14 = fmt->FormatFlags & 1;
    if ( (PresentMask & 0x800) != 0 && (FormatFlags & 1) != v14 )
    {
      if ( v9 )
      {
        Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v9);
        PresentMask = v35.PresentMask;
        FormatFlags = v35.FormatFlags;
      }
      v9 = 0i64;
      v35.pFontHandle.pObject = 0i64;
      PresentMask &= ~0x800u;
    }
    if ( v14 )
      FormatFlags |= 1u;
    else
      FormatFlags &= ~1u;
    PresentMask |= 0x10u;
    v35.FormatFlags = FormatFlags;
    v35.PresentMask = PresentMask;
  }
  if ( (fmt->PresentMask & 0x20) != 0 )
  {
    v15 = (fmt->FormatFlags & 2) != 0;
    if ( (PresentMask & 0x800) != 0 && ((FormatFlags & 2) != 0) != v15 )
    {
      if ( v9 )
      {
        Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v9);
        PresentMask = v35.PresentMask;
        FormatFlags = v35.FormatFlags;
      }
      v9 = 0i64;
      v35.pFontHandle.pObject = 0i64;
      PresentMask &= ~0x800u;
    }
    if ( v15 )
      FormatFlags |= 2u;
    else
      FormatFlags &= ~2u;
    PresentMask |= 0x20u;
    v35.FormatFlags = FormatFlags;
    v35.PresentMask = PresentMask;
  }
  v16 = fmt->PresentMask;
  if ( (v16 & 0x40) != 0 )
  {
    if ( (fmt->FormatFlags & 4) != 0 )
      FormatFlags |= 4u;
    else
      FormatFlags &= ~4u;
    PresentMask |= 0x40u;
    v35.FormatFlags = FormatFlags;
    v35.PresentMask = PresentMask;
  }
  if ( (v16 & 0x80u) != 0 )
  {
    if ( (fmt->FormatFlags & 8) != 0 )
      v17 = FormatFlags | 8;
    else
      v17 = FormatFlags & 0xF7;
    v35.FormatFlags = v17;
    PresentMask |= 0x80u;
    v35.PresentMask = PresentMask;
  }
  if ( (fmt->PresentMask & 1) != 0 )
  {
    ColorV = fmt->ColorV;
    PresentMask |= 1u;
    v35.PresentMask = PresentMask;
    v35.ColorV = ColorV;
  }
  if ( (v16 & 0x400) != 0 )
  {
    PresentMask |= 0x400u;
    v35.ColorV = v35.ColorV & 0xFFFFFF | (HIBYTE(fmt->ColorV) << 24);
    v35.PresentMask = PresentMask;
  }
  if ( (v16 & 2) != 0 )
  {
    v19 = (int)fmt->LetterSpacing;
    PresentMask |= 2u;
    v35.PresentMask = PresentMask;
    v35.LetterSpacing = (float)(__int16)v19;
  }
  if ( (v16 & 8) != 0 )
  {
    FontSize = fmt->FontSize;
    PresentMask |= 8u;
    v35.PresentMask = PresentMask;
    v35.FontSize = FontSize;
  }
  if ( (v16 & 4) != 0 )
  {
    p_FontList = (Scaleform::StringDH *)&emptyStr;
    if ( dword_140A72118 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 40i64) )
    {
      Init_thread_header(&dword_140A72118);
      if ( dword_140A72118 == -1 )
      {
        Scaleform::String::String(&emptyStr);
        atexit(Scaleform::Render::Text::TextFormat::GetFontList_::_2_::_dynamic_atexit_destructor_for__emptyStr__);
        Init_thread_footer(&dword_140A72118);
      }
    }
    if ( (fmt->PresentMask & 4) != 0 )
      p_FontList = &fmt->FontList;
    Scaleform::Render::Text::TextFormat::SetFontList(&v35, p_FontList);
    PresentMask = v35.PresentMask;
    v9 = v35.pFontHandle.pObject;
  }
  if ( (fmt->PresentMask & 0x800) != 0 )
  {
    v22 = (Scaleform::RefCountVImpl *)fmt->pFontHandle.pObject;
    if ( v22 )
    {
      Scaleform::Render::RenderBuffer::AddRef(v22);
      PresentMask = v35.PresentMask;
      v9 = v35.pFontHandle.pObject;
    }
    v23 = (Scaleform::RefCountVImpl *)fmt->pFontHandle.pObject;
    if ( v23 )
    {
      Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)fmt->pFontHandle.pObject);
      Scaleform::Render::RenderBuffer::AddRef(v23);
      PresentMask = v35.PresentMask;
      v9 = v35.pFontHandle.pObject;
    }
    if ( v9 )
    {
      Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v9);
      PresentMask = v35.PresentMask;
    }
    v35.pFontHandle.pObject = (Scaleform::Render::Text::FontHandle *)v23;
    PresentMask |= 0x800u;
    v35.PresentMask = PresentMask;
  }
  if ( (fmt->PresentMask & 0x100) != 0 )
  {
    if ( Scaleform::String::GetLength(&fmt->Url) )
    {
      PresentMask = v35.PresentMask;
      if ( (fmt->PresentMask & 0x100) != 0 )
      {
        if ( Scaleform::String::GetLength(&fmt->Url) )
        {
          Scaleform::String::operator=(&v35.Url, &fmt->Url);
          PresentMask = v35.PresentMask | 0x100;
          v35.PresentMask |= 0x100u;
        }
        else
        {
          PresentMask = v35.PresentMask;
        }
      }
    }
    else
    {
      Scaleform::String::Clear(&v35.Url);
      PresentMask = v35.PresentMask & 0xFEFF;
      v35.PresentMask &= ~0x100u;
    }
  }
  if ( (fmt->PresentMask & 0x200) != 0 )
  {
    v24 = fmt->pImageDesc.pObject;
    if ( v24 )
    {
      ++v24->RefCount;
      PresentMask = v35.PresentMask;
    }
    v25 = fmt->pImageDesc.pObject;
    if ( v25 )
    {
      Scaleform::RefCountNTSImpl::Release(fmt->pImageDesc.pObject);
      ++v25->RefCount;
      PresentMask = v35.PresentMask;
    }
    if ( v35.pImageDesc.pObject )
    {
      Scaleform::RefCountNTSImpl::Release(v35.pImageDesc.pObject);
      PresentMask = v35.PresentMask;
    }
    v35.pImageDesc.pObject = v25;
    v35.PresentMask = PresentMask | 0x200;
  }
  v26 = v35.FontList.pHeap;
  result->pAllocator = 0i64;
  result->RefCount = 1;
  Scaleform::StringDH::CopyConstructHelper(&result->FontList, &v35.FontList, v26);
  Scaleform::StringDH::CopyConstructHelper(&result->Url, &v35.Url, v35.FontList.pHeap);
  v27 = v35.pImageDesc.pObject;
  if ( v35.pImageDesc.pObject )
  {
    ++v35.pImageDesc.pObject->RefCount;
    v27 = v35.pImageDesc.pObject;
  }
  v28 = (Scaleform::RefCountVImpl *)v35.pFontHandle.pObject;
  result->pImageDesc.pObject = v27;
  if ( v28 )
  {
    Scaleform::Render::RenderBuffer::AddRef(v28);
    v28 = (Scaleform::RefCountVImpl *)v35.pFontHandle.pObject;
    v27 = v35.pImageDesc.pObject;
  }
  v29 = v35.ColorV;
  v30 = v35.LetterSpacing;
  result->pFontHandle.pObject = (Scaleform::Render::Text::FontHandle *)v28;
  result->ColorV = v29;
  result->FontSize = v35.FontSize;
  result->FormatFlags = v35.FormatFlags;
  result->PresentMask = v35.PresentMask;
  pAllocator = v35.pAllocator;
  result->LetterSpacing = v30;
  if ( pAllocator )
  {
    key = &v35;
    Scaleform::HashSetBase<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,Scaleform::Render::Text::TextFormat::HashFunctor,Scaleform::Render::Text::TextFormat::HashFunctor,Scaleform::AllocatorLH<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,74>,Scaleform::HashsetCachedEntry<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,Scaleform::Render::Text::TextFormat::HashFunctor>>::RemoveAlt<Scaleform::Render::Text::TextFormat *>(
      &pAllocator->TextFormatStorage,
      &key);
    v28 = (Scaleform::RefCountVImpl *)v35.pFontHandle.pObject;
    v27 = v35.pImageDesc.pObject;
  }
  if ( v28 )
  {
    Scaleform::RefCountImpl::Release(v28);
    v27 = v35.pImageDesc.pObject;
  }
  if ( v27 )
    Scaleform::RefCountNTSImpl::Release(v27);
  v32 = (void *)(v35.Url.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
  if ( (unsigned int)Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
                       (volatile int *)((v35.Url.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
                       -1) == 1 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v32);
  v33 = (void *)(v35.FontList.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
  if ( (unsigned int)Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
                       (volatile int *)((v35.FontList.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
                       -1) == 1 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v33);
  return result;
}

void __fastcall Scaleform::Render::Text::TextFormat::SetBold(Scaleform::Render::Text::TextFormat *this, bool bold)
{
  Scaleform::RefCountVImpl *pObject; // rcx

  if ( (this->PresentMask & 0x800) != 0 && (this->FormatFlags & 1) != bold )
  {
    pObject = (Scaleform::RefCountVImpl *)this->pFontHandle.pObject;
    if ( pObject )
      Scaleform::RefCountImpl::Release(pObject);
    this->pFontHandle.pObject = 0i64;
    this->PresentMask &= ~0x800u;
  }
  if ( bold )
    this->FormatFlags |= 1u;
  else
    this->FormatFlags &= ~1u;
  this->PresentMask |= 0x10u;
}

void __fastcall Scaleform::Render::Text::TextFormat::SetFontHandle(
        Scaleform::Render::Text::TextFormat *this,
        Scaleform::Render::Text::FontHandle *pfontHandle)
{
  Scaleform::RefCountVImpl *pObject; // rcx

  if ( pfontHandle )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)pfontHandle);
  pObject = (Scaleform::RefCountVImpl *)this->pFontHandle.pObject;
  if ( pObject )
    Scaleform::RefCountImpl::Release(pObject);
  this->pFontHandle.pObject = pfontHandle;
  this->PresentMask |= 0x800u;
}

void __fastcall Scaleform::Render::Text::TextFormat::SetFontList(
        Scaleform::Render::Text::TextFormat *this,
        const Scaleform::String *fontList)
{
  __int64 Length; // rbx
  Scaleform::RefCountVImpl *pObject; // rcx
  Scaleform::String::DataDesc *pData; // rcx

  if ( (this->PresentMask & 0x800) != 0 )
  {
    Length = Scaleform::String::GetLength(&this->FontList);
    if ( Length != Scaleform::String::GetLength((Scaleform::String *)fontList)
      || Scaleform::String::CompareNoCase(
           (const char *)((this->FontList.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12),
           (const char *)((fontList->HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12)) )
    {
      pObject = (Scaleform::RefCountVImpl *)this->pFontHandle.pObject;
      if ( pObject )
        Scaleform::RefCountImpl::Release(pObject);
      this->pFontHandle.pObject = 0i64;
      this->PresentMask &= ~0x800u;
    }
  }
  Scaleform::String::operator=(&this->FontList, fontList);
  pData = this->FontList.pData;
  this->PresentMask |= 4u;
  if ( strchr((const char *)(((unsigned __int64)pData & 0xFFFFFFFFFFFFFFFCui64) + 12), 44) )
    this->PresentMask &= ~0x1000u;
  else
    this->PresentMask |= 0x1000u;
}

void __fastcall Scaleform::Render::Text::TextFormat::SetFontList(
        Scaleform::Render::Text::TextFormat *this,
        const char *pfontList,
        unsigned __int64 fontListSz)
{
  __int64 v3; // rbx
  Scaleform::RefCountVImpl *pObject; // rcx
  Scaleform::String::DataDesc *pData; // rcx

  v3 = fontListSz;
  if ( fontListSz == -1i64 )
  {
    v3 = -1i64;
    do
      ++v3;
    while ( pfontList[v3] );
  }
  if ( (this->PresentMask & 0x800) != 0
    && (Scaleform::String::GetLength(&this->FontList) != v3
     || (unsigned int)Scaleform::String::CompareNoCase(
                        (const char *)((this->FontList.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12),
                        pfontList,
                        v3)) )
  {
    pObject = (Scaleform::RefCountVImpl *)this->pFontHandle.pObject;
    if ( pObject )
      Scaleform::RefCountImpl::Release(pObject);
    this->pFontHandle.pObject = 0i64;
    this->PresentMask &= ~0x800u;
  }
  Scaleform::String::Clear(&this->FontList);
  Scaleform::String::AppendString(&this->FontList, pfontList, v3);
  pData = this->FontList.pData;
  this->PresentMask |= 4u;
  if ( strchr((const char *)(((unsigned __int64)pData & 0xFFFFFFFFFFFFFFFCui64) + 12), 44) )
    this->PresentMask &= ~0x1000u;
  else
    this->PresentMask |= 0x1000u;
}

void __fastcall Scaleform::Render::Text::TextFormat::SetFontList(
        Scaleform::Render::Text::TextFormat *this,
        const wchar_t *pfontList,
        unsigned __int64 fontListSz)
{
  unsigned __int64 v4; // rbp
  __int64 v6; // rsi
  int v7; // ebx
  Scaleform::RefCountVImpl *pObject; // rcx
  Scaleform::String::DataDesc *pData; // rcx

  v4 = fontListSz;
  if ( fontListSz == -1i64 )
    v4 = Scaleform::SFwcslen(pfontList);
  if ( (this->PresentMask & 0x800) != 0 )
  {
    if ( Scaleform::String::GetLength(&this->FontList) == v4 )
    {
      v6 = 0i64;
      if ( !v4 )
        goto LABEL_12;
      while ( 1 )
      {
        v7 = Scaleform::SFtowlower(*(char *)((this->FontList.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + v6 + 12));
        if ( v7 != (unsigned int)Scaleform::SFtowlower(pfontList[v6]) )
          break;
        if ( ++v6 >= v4 )
          goto LABEL_12;
      }
    }
    pObject = (Scaleform::RefCountVImpl *)this->pFontHandle.pObject;
    if ( pObject )
      Scaleform::RefCountImpl::Release(pObject);
    this->pFontHandle.pObject = 0i64;
    this->PresentMask &= ~0x800u;
  }
LABEL_12:
  Scaleform::String::Clear(&this->FontList);
  Scaleform::String::AppendString(&this->FontList, pfontList, v4);
  pData = this->FontList.pData;
  this->PresentMask |= 4u;
  if ( strchr((const char *)(((unsigned __int64)pData & 0xFFFFFFFFFFFFFFFCui64) + 12), 44) )
    this->PresentMask &= ~0x1000u;
  else
    this->PresentMask |= 0x1000u;
}

// attributes: thunk
void __fastcall Scaleform::Render::Text::TextFormat::SetFontName(
        Scaleform::Render::Text::TextFormat *this,
        const Scaleform::String *fontName)
{
  Scaleform::Render::Text::TextFormat::SetFontList(this, fontName);
}

void __fastcall Scaleform::Render::Text::TextFormat::SetFontName(
        Scaleform::Render::Text::TextFormat *this,
        const char *pfontName,
        unsigned __int64 fontNameSz)
{
  if ( fontNameSz == -1i64 )
  {
    do
      ++fontNameSz;
    while ( pfontName[fontNameSz] );
  }
  Scaleform::Render::Text::TextFormat::SetFontList(this, pfontName, fontNameSz);
}

void __fastcall Scaleform::Render::Text::TextFormat::SetItalic(Scaleform::Render::Text::TextFormat *this, bool italic)
{
  Scaleform::RefCountVImpl *pObject; // rcx

  if ( (this->PresentMask & 0x800) != 0 && ((this->FormatFlags & 2) != 0) != italic )
  {
    pObject = (Scaleform::RefCountVImpl *)this->pFontHandle.pObject;
    if ( pObject )
      Scaleform::RefCountImpl::Release(pObject);
    this->pFontHandle.pObject = 0i64;
    this->PresentMask &= ~0x800u;
  }
  if ( italic )
    this->FormatFlags |= 2u;
  else
    this->FormatFlags &= ~2u;
  this->PresentMask |= 0x20u;
}

void __fastcall Scaleform::Render::Text::TextFormat::SetKerning(
        Scaleform::Render::Text::TextFormat *this,
        bool kerning)
{
  if ( kerning )
    this->FormatFlags |= 8u;
  else
    this->FormatFlags &= ~8u;
  this->PresentMask |= 0x80u;
}

void __fastcall Scaleform::Render::Text::ParagraphFormat::SetTabStopsElement(
        Scaleform::Render::Text::ParagraphFormat *this,
        unsigned int idx,
        unsigned int val)
{
  unsigned int *pTabStops; // r9

  pTabStops = this->pTabStops;
  if ( pTabStops )
  {
    if ( idx < *pTabStops )
      pTabStops[idx + 1] = val;
  }
}

void __fastcall Scaleform::Render::Text::TextFormat::SetUnderline(
        Scaleform::Render::Text::TextFormat *this,
        bool underline)
{
  if ( underline )
    this->FormatFlags |= 4u;
  else
    this->FormatFlags &= ~4u;
  this->PresentMask |= 0x40u;
}

void __fastcall Scaleform::Render::Text::TextFormat::SetUrl(
        Scaleform::Render::Text::TextFormat *this,
        const Scaleform::String *url)
{
  Scaleform::String::operator=(&this->Url, url);
  this->PresentMask |= 0x100u;
}

void __fastcall Scaleform::Render::Text::TextFormat::SetUrl(
        Scaleform::Render::Text::TextFormat *this,
        const char *purl,
        unsigned __int64 urlSz)
{
  __int64 v3; // rbx

  v3 = urlSz;
  if ( urlSz == -1i64 )
  {
    v3 = -1i64;
    do
      ++v3;
    while ( purl[v3] );
  }
  Scaleform::String::Clear(&this->Url);
  Scaleform::String::AppendString(&this->Url, purl, v3);
  this->PresentMask |= 0x100u;
}

void __fastcall Scaleform::Render::Text::TextFormat::SetUrl(
        Scaleform::Render::Text::TextFormat *this,
        const wchar_t *purl,
        unsigned __int64 urlSz)
{
  __int64 v3; // rdi

  v3 = urlSz;
  if ( urlSz == -1i64 )
    v3 = Scaleform::SFwcslen(purl);
  Scaleform::String::Clear(&this->Url);
  Scaleform::String::AppendString(&this->Url, purl, v3);
  this->PresentMask |= 0x100u;
}

bool __fastcall Scaleform::Render::Text::ParagraphFormat::TabStopsEqual(
        Scaleform::Render::Text::ParagraphFormat *this,
        const unsigned int *psrcTabStops)
{
  unsigned int *pTabStops; // rcx

  pTabStops = this->pTabStops;
  if ( pTabStops == psrcTabStops )
    return 1;
  if ( pTabStops && psrcTabStops && *pTabStops == *psrcTabStops )
    return memcmp(pTabStops + 1, psrcTabStops + 1, 4i64 * *pTabStops) == 0;
  return 0;
}

void __fastcall Scaleform::Render::Text::Allocator::VisitTextFormatCache(
        Scaleform::Render::Text::Allocator *this,
        Scaleform::Render::Text::Allocator::TextFormatVisitor *visitor)
{
  Scaleform::HashSetBase<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,Scaleform::Render::Text::TextFormat::HashFunctor,Scaleform::Render::Text::TextFormat::HashFunctor,Scaleform::AllocatorLH<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,74>,Scaleform::HashsetCachedEntry<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,Scaleform::Render::Text::TextFormat::HashFunctor> >::TableType *pTable; // rax
  Scaleform::HashSetLH<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,Scaleform::Render::Text::TextFormat::HashFunctor,Scaleform::Render::Text::TextFormat::HashFunctor,74,Scaleform::HashsetCachedEntry<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,Scaleform::Render::Text::TextFormat::HashFunctor> > *p_TextFormatStorage; // rdi
  unsigned __int64 Index; // rbx
  unsigned __int64 SizeMask; // rcx
  Scaleform::HashSetBase<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,Scaleform::Render::Text::TextFormat::HashFunctor,Scaleform::Render::Text::TextFormat::HashFunctor,Scaleform::AllocatorLH<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,74>,Scaleform::HashsetCachedEntry<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,Scaleform::Render::Text::TextFormat::HashFunctor> >::TableType *v7; // rax
  Scaleform::HashSetBase<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,Scaleform::Render::Text::TextFormat::HashFunctor,Scaleform::Render::Text::TextFormat::HashFunctor,Scaleform::AllocatorLH<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,74>,Scaleform::HashsetCachedEntry<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,Scaleform::Render::Text::TextFormat::HashFunctor> > v8; // rcx
  Scaleform::HashSetBase<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,Scaleform::Render::Text::TextFormat::HashFunctor,Scaleform::Render::Text::TextFormat::HashFunctor,Scaleform::AllocatorLH<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,74>,Scaleform::HashsetCachedEntry<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,Scaleform::Render::Text::TextFormat::HashFunctor> > v9; // rdx
  unsigned __int64 v10; // rcx
  unsigned __int64 *v11; // rax
  Scaleform::HashSetBase<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,Scaleform::Render::Text::TextFormat::HashFunctor,Scaleform::Render::Text::TextFormat::HashFunctor,Scaleform::AllocatorLH<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,74>,Scaleform::HashsetCachedEntry<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,Scaleform::Render::Text::TextFormat::HashFunctor> >::Iterator v12; // [rsp+20h] [rbp-18h] BYREF

  pTable = this->TextFormatStorage.pTable;
  p_TextFormatStorage = &this->TextFormatStorage;
  if ( pTable )
  {
    SizeMask = pTable->SizeMask;
    Index = 0i64;
    v7 = pTable + 1;
    do
    {
      if ( v7->EntryCount != -2i64 )
        break;
      ++Index;
      v7 = (Scaleform::HashSetBase<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,Scaleform::Render::Text::TextFormat::HashFunctor,Scaleform::Render::Text::TextFormat::HashFunctor,Scaleform::AllocatorLH<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,74>,Scaleform::HashsetCachedEntry<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,Scaleform::Render::Text::TextFormat::HashFunctor> >::TableType *)((char *)v7 + 24);
    }
    while ( Index <= SizeMask );
    v12.pHash = p_TextFormatStorage;
    v12.Index = Index;
  }
  else
  {
    v12 = 0i64;
    Index = 0i64;
    p_TextFormatStorage = 0i64;
  }
  while ( p_TextFormatStorage )
  {
    v8.pTable = p_TextFormatStorage->pTable;
    if ( !p_TextFormatStorage->pTable || (signed __int64)Index > (signed __int64)v8.pTable->SizeMask )
      break;
    if ( !*(&v8.pTable[2].EntryCount + 3 * Index)
      || !((unsigned __int8 (__fastcall *)(Scaleform::Render::Text::Allocator::TextFormatVisitor *))visitor->Visit)(visitor) )
    {
      Scaleform::HashSetBase<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,Scaleform::Render::Text::TextFormat::HashFunctor,Scaleform::Render::Text::TextFormat::HashFunctor,Scaleform::AllocatorLH<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,74>,Scaleform::HashsetCachedEntry<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,Scaleform::Render::Text::TextFormat::HashFunctor>>::Iterator::RemoveAlt<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>>(
        &v12,
        (const Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *> *)&p_TextFormatStorage->pTable[2]
      + 3 * Index);
      Index = v12.Index;
      p_TextFormatStorage = (Scaleform::HashSetLH<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,Scaleform::Render::Text::TextFormat::HashFunctor,Scaleform::Render::Text::TextFormat::HashFunctor,74,Scaleform::HashsetCachedEntry<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,Scaleform::Render::Text::TextFormat::HashFunctor> > *)v12.pHash;
    }
    v9.pTable = p_TextFormatStorage->pTable;
    v10 = p_TextFormatStorage->pTable->SizeMask;
    if ( (__int64)Index <= (__int64)v10 )
    {
      v12.Index = ++Index;
      if ( Index <= v10 )
      {
        v11 = &v9.pTable[Index + 1].EntryCount + Index;
        do
        {
          if ( *v11 != -2i64 )
            break;
          ++Index;
          v11 += 3;
          v12.Index = Index;
        }
        while ( Index <= v10 );
      }
    }
  }
}

void __fastcall Scaleform::HashSetBase<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *>,Scaleform::Render::Text::ParagraphFormat::HashFunctor,Scaleform::Render::Text::ParagraphFormat::HashFunctor,Scaleform::AllocatorLH<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *>,74>,Scaleform::HashsetCachedEntry<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *>,Scaleform::Render::Text::ParagraphFormat::HashFunctor>>::setRawCapacity(
        Scaleform::HashSetBase<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *>,Scaleform::Render::Text::ParagraphFormat::HashFunctor,Scaleform::Render::Text::ParagraphFormat::HashFunctor,Scaleform::AllocatorLH<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *>,74>,Scaleform::HashsetCachedEntry<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *>,Scaleform::Render::Text::ParagraphFormat::HashFunctor> > *this,
        void *pheapAddr,
        unsigned __int64 newSize)
{
  __int64 v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rcx
  unsigned __int64 v8; // rbp
  const Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *> *v9; // rsi
  unsigned __int64 v10; // rax
  int v11; // [rsp+60h] [rbp+18h] BYREF
  Scaleform::HashSetBase<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *>,Scaleform::Render::Text::ParagraphFormat::HashFunctor,Scaleform::Render::Text::ParagraphFormat::HashFunctor,Scaleform::AllocatorLH<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *>,74>,Scaleform::HashsetCachedEntry<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *>,Scaleform::Render::Text::ParagraphFormat::HashFunctor> > v12; // [rsp+68h] [rbp+20h] BYREF

  if ( newSize )
  {
    if ( newSize >= 8 )
      v5 = 1i64 << ((unsigned __int8)Scaleform::Alg::UpperBit(newSize - 1) + 1);
    else
      v5 = 8i64;
    v11 = 74;
    v6 = 0i64;
    v12.pTable = 0i64;
    v12.pTable = (Scaleform::HashSetBase<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *>,Scaleform::Render::Text::ParagraphFormat::HashFunctor,Scaleform::Render::Text::ParagraphFormat::HashFunctor,Scaleform::AllocatorLH<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *>,74>,Scaleform::HashsetCachedEntry<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *>,Scaleform::Render::Text::ParagraphFormat::HashFunctor> >::TableType *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(Scaleform::Memory::pGlobalHeap, pheapAddr, 24 * v5 + 16, &v11);
    v12.pTable->EntryCount = 0i64;
    v12.pTable->SizeMask = v5 - 1;
    if ( v5 )
    {
      v7 = 0i64;
      do
      {
        v7 += 24i64;
        *(_QWORD *)((char *)v12.pTable + v7 - 8) = -2i64;
        --v5;
      }
      while ( v5 );
    }
    if ( this->pTable )
    {
      v8 = this->pTable->SizeMask + 1;
      do
      {
        v9 = (const Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *> *)((char *)this->pTable + v6);
        if ( v9[2].P != (Scaleform::Render::Text::ParagraphFormat *)-2i64 )
        {
          v10 = Scaleform::Render::Text::ParagraphFormat::HashFunctor::CalcHash(v9[4].P);
          Scaleform::HashSetBase<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *>,Scaleform::Render::Text::ParagraphFormat::HashFunctor,Scaleform::Render::Text::ParagraphFormat::HashFunctor,Scaleform::AllocatorLH<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *>,74>,Scaleform::HashsetCachedEntry<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *>,Scaleform::Render::Text::ParagraphFormat::HashFunctor>>::add<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *>>(
            &v12,
            pheapAddr,
            v9 + 4,
            v10);
          v9[2].P = (Scaleform::Render::Text::ParagraphFormat *)-2i64;
        }
        v6 += 24i64;
        --v8;
      }
      while ( v8 );
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->pTable);
    }
    this->pTable = v12.pTable;
  }
  else
  {
    Scaleform::HashSetBase<Scaleform::GFx::AS3::TR::NodeBlock *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *>,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *>,Scaleform::AllocatorDH<Scaleform::GFx::AS3::TR::NodeBlock *,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::AS3::TR::NodeBlock *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *>>>::Clear((Scaleform::HashSetBase<Scaleform::PtrCmpNN<Scaleform::GFx::AS3::TR::Type const >,Scaleform::GFx::AS3::TR::Type::HashFunctor,Scaleform::GFx::AS3::TR::Type::HashFunctor,Scaleform::AllocatorDH<Scaleform::PtrCmpNN<Scaleform::GFx::AS3::TR::Type const >,348>,Scaleform::HashsetCachedEntry<Scaleform::PtrCmpNN<Scaleform::GFx::AS3::TR::Type const >,Scaleform::GFx::AS3::TR::Type::HashFunctor> > *)this);
  }
}

void __fastcall Scaleform::HashSetBase<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,Scaleform::Render::Text::TextFormat::HashFunctor,Scaleform::Render::Text::TextFormat::HashFunctor,Scaleform::AllocatorLH<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,74>,Scaleform::HashsetCachedEntry<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,Scaleform::Render::Text::TextFormat::HashFunctor>>::setRawCapacity(
        Scaleform::HashSetBase<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,Scaleform::Render::Text::TextFormat::HashFunctor,Scaleform::Render::Text::TextFormat::HashFunctor,Scaleform::AllocatorLH<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,74>,Scaleform::HashsetCachedEntry<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,Scaleform::Render::Text::TextFormat::HashFunctor> > *this,
        void *pheapAddr,
        unsigned __int64 newSize)
{
  __int64 v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rcx
  unsigned __int64 v8; // rbp
  const Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *> *v9; // rsi
  __int64 v10; // rax
  int v11; // [rsp+60h] [rbp+18h] BYREF
  Scaleform::HashSetBase<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,Scaleform::Render::Text::TextFormat::HashFunctor,Scaleform::Render::Text::TextFormat::HashFunctor,Scaleform::AllocatorLH<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,74>,Scaleform::HashsetCachedEntry<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,Scaleform::Render::Text::TextFormat::HashFunctor> > v12; // [rsp+68h] [rbp+20h] BYREF

  if ( newSize )
  {
    if ( newSize >= 8 )
      v5 = 1i64 << ((unsigned __int8)Scaleform::Alg::UpperBit(newSize - 1) + 1);
    else
      v5 = 8i64;
    v11 = 74;
    v6 = 0i64;
    v12.pTable = 0i64;
    v12.pTable = (Scaleform::HashSetBase<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,Scaleform::Render::Text::TextFormat::HashFunctor,Scaleform::Render::Text::TextFormat::HashFunctor,Scaleform::AllocatorLH<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,74>,Scaleform::HashsetCachedEntry<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,Scaleform::Render::Text::TextFormat::HashFunctor> >::TableType *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(Scaleform::Memory::pGlobalHeap, pheapAddr, 24 * v5 + 16, &v11);
    v12.pTable->EntryCount = 0i64;
    v12.pTable->SizeMask = v5 - 1;
    if ( v5 )
    {
      v7 = 0i64;
      do
      {
        v7 += 24i64;
        *(_QWORD *)((char *)v12.pTable + v7 - 8) = -2i64;
        --v5;
      }
      while ( v5 );
    }
    if ( this->pTable )
    {
      v8 = this->pTable->SizeMask + 1;
      do
      {
        v9 = (const Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *> *)((char *)this->pTable
                                                                                                + v6);
        if ( v9[2].P != (Scaleform::Render::Text::TextFormat *)-2i64 )
        {
          v10 = Scaleform::Render::Text::TextFormat::HashFunctor::CalcHash(v9[4].P);
          Scaleform::HashSetBase<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,Scaleform::Render::Text::TextFormat::HashFunctor,Scaleform::Render::Text::TextFormat::HashFunctor,Scaleform::AllocatorLH<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,74>,Scaleform::HashsetCachedEntry<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,Scaleform::Render::Text::TextFormat::HashFunctor>>::add<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>>(
            &v12,
            pheapAddr,
            v9 + 4,
            v10);
          v9[2].P = (Scaleform::Render::Text::TextFormat *)-2i64;
        }
        v6 += 24i64;
        --v8;
      }
      while ( v8 );
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->pTable);
    }
    this->pTable = v12.pTable;
  }
  else
  {
    Scaleform::HashSetBase<Scaleform::GFx::AS3::TR::NodeBlock *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *>,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *>,Scaleform::AllocatorDH<Scaleform::GFx::AS3::TR::NodeBlock *,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::AS3::TR::NodeBlock *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *>>>::Clear((Scaleform::HashSetBase<Scaleform::PtrCmpNN<Scaleform::GFx::AS3::TR::Type const >,Scaleform::GFx::AS3::TR::Type::HashFunctor,Scaleform::GFx::AS3::TR::Type::HashFunctor,Scaleform::AllocatorDH<Scaleform::PtrCmpNN<Scaleform::GFx::AS3::TR::Type const >,348>,Scaleform::HashsetCachedEntry<Scaleform::PtrCmpNN<Scaleform::GFx::AS3::TR::Type const >,Scaleform::GFx::AS3::TR::Type::HashFunctor> > *)this);
  }
}

