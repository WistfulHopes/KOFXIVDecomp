#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatapacked.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_pathdatapacker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_twips.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_gradients.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_pathdatastorage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_types.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_image.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_hash.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_fontcompactor.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraypaged.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cxform.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_event.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_keycodes.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_font.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"

Scaleform::GFx::FontCompactor::FontCompactor(Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> & data); // 0x140422950
Scaleform::GFx::FontCompactor::~FontCompactor(); // 0x140422A00
void Scaleform::GFx::FontCompactor::normalizeLastContour(); // 0x1404265A0
void Scaleform::GFx::FontCompactor::computeBounds(long * x1, long * y1, long * x2, long * y2); // 0x140425EC0
void Scaleform::GFx::FontCompactor::StartFont(const char * name, unsigned long flags, unsigned long nominalSize, long ascent, long descent, long leading); // 0x140423DC0
void Scaleform::GFx::FontCompactor::StartGlyph(); // 0x140423F80
void Scaleform::GFx::FontCompactor::MoveTo(short x, short y); // 0x1404239D0
void Scaleform::GFx::FontCompactor::LineTo(short x, short y); // 0x1404238F0
void Scaleform::GFx::FontCompactor::QuadTo(short cx, short cy, short ax, short ay); // 0x140423C40
unsigned long Scaleform::GFx::FontCompactor::navigateToEndGlyph(unsigned long pos); // 0x140426390
bool Scaleform::GFx::FontCompactor::GlyphsEqual(unsigned long pos, const Scaleform::GFx::FontCompactor & cmpFont, unsigned long cmpPos); // 0x140423830
bool Scaleform::GFx::FontCompactor::PathsEqual(unsigned long pos, const Scaleform::GFx::FontCompactor & cmpPath, unsigned long cmpPos); // 0x140423A90
unsigned long Scaleform::GFx::FontCompactor::ComputePathHash(unsigned long pos); // 0x140422FA0
void Scaleform::GFx::FontCompactor::EndGlyph(bool mergeContours); // 0x1404231E0
void Scaleform::GFx::FontCompactor::AssignGlyphCode(unsigned long glyphIndex, unsigned long glyphCode); // 0x140422DF0
void Scaleform::GFx::FontCompactor::AssignGlyphAdvance(unsigned long glyphIndex, long advanceX); // 0x140422DC0
void Scaleform::GFx::FontCompactor::AddKerningPair(unsigned long char1, unsigned long char2, long adjustment); // 0x140422BF0
void Scaleform::GFx::FontCompactor::UpdateMetrics(long ascent, long descent, long leading); // 0x140423F90
void Scaleform::GFx::FontCompactor::EndFont(); // 0x1404230B0void __fastcall Scaleform::Alg::QuickSortSliced<Scaleform::ArrayPagedPOD<Scaleform::GFx::FontCompactor::KerningPairType,6,64,261>,bool (*)(Scaleform::GFx::FontCompactor::KerningPairType const &,Scaleform::GFx::FontCompactor::KerningPairType const &)>(
        Scaleform::ArrayPagedPOD<Scaleform::GFx::FontCompactor::KerningPairType,6,64,261> *arr,
        unsigned __int64 start,
        unsigned __int64 end,
        bool (__fastcall *less)(const Scaleform::GFx::FontCompactor::KerningPairType *, const Scaleform::GFx::FontCompactor::KerningPairType *))
{
  signed __int64 v5; // r9
  unsigned __int64 v6; // r13
  unsigned __int64 *i; // r12
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rdi
  Scaleform::GFx::FontCompactor::KerningPairType **Pages; // rdx
  Scaleform::GFx::FontCompactor::KerningPairType *v12; // r8
  unsigned __int64 v13; // r14
  Scaleform::GFx::FontCompactor::KerningPairType *v14; // rdx
  unsigned __int64 v15; // r15
  Scaleform::GFx::FontCompactor::KerningPairType v16; // rax
  Scaleform::GFx::FontCompactor::KerningPairType **v17; // rcx
  const Scaleform::GFx::FontCompactor::KerningPairType *v18; // rdx
  Scaleform::GFx::FontCompactor::KerningPairType *v19; // rcx
  Scaleform::GFx::FontCompactor::KerningPairType **v20; // rcx
  Scaleform::GFx::FontCompactor::KerningPairType *v21; // r8
  Scaleform::GFx::FontCompactor::KerningPairType *v22; // rdx
  Scaleform::GFx::FontCompactor::KerningPairType v23; // rax
  Scaleform::GFx::FontCompactor::KerningPairType **v24; // rcx
  Scaleform::GFx::FontCompactor::KerningPairType *v25; // rdx
  Scaleform::GFx::FontCompactor::KerningPairType *v26; // r8
  Scaleform::GFx::FontCompactor::KerningPairType v27; // rax
  Scaleform::GFx::FontCompactor::KerningPairType **v28; // rcx
  Scaleform::GFx::FontCompactor::KerningPairType *v29; // r8
  Scaleform::GFx::FontCompactor::KerningPairType *v30; // rdx
  Scaleform::GFx::FontCompactor::KerningPairType v31; // rax
  Scaleform::GFx::FontCompactor::KerningPairType **v32; // rdx
  Scaleform::GFx::FontCompactor::KerningPairType *v33; // r8
  Scaleform::GFx::FontCompactor::KerningPairType *v34; // rdx
  Scaleform::GFx::FontCompactor::KerningPairType v35; // rax
  Scaleform::GFx::FontCompactor::KerningPairType *v36; // rdx
  Scaleform::GFx::FontCompactor::KerningPairType v37; // rax
  signed __int64 v38; // r15
  unsigned __int64 v39; // rbx
  unsigned __int64 v40; // rdi
  unsigned __int64 v41; // r14
  unsigned __int64 j; // rbx
  Scaleform::GFx::FontCompactor::KerningPairType **v43; // rdx
  unsigned __int64 v44; // rcx
  unsigned __int64 v45; // rax
  Scaleform::GFx::FontCompactor::KerningPairType *v46; // r8
  Scaleform::GFx::FontCompactor::KerningPairType *v47; // rdx
  Scaleform::GFx::FontCompactor::KerningPairType v48; // rax
  unsigned __int64 v49; // [rsp+20h] [rbp-308h]
  signed __int64 v50; // [rsp+28h] [rbp-300h]
  unsigned __int64 v51; // [rsp+30h] [rbp-2F8h]
  unsigned __int64 v52; // [rsp+40h] [rbp-2E8h]
  unsigned __int64 v53[80]; // [rsp+50h] [rbp-2D8h] BYREF

  v50 = end;
  v5 = end;
  v6 = start;
  if ( end - start >= 2 )
  {
    for ( i = v53; ; v6 = *i )
    {
      while ( (__int64)(v5 - v6) > 9 )
      {
        v9 = v5 - 1;
        v10 = v6 + 1;
        Pages = arr->Pages;
        v12 = &Pages[(v6 + (__int64)(v5 - v6) / 2) >> 6][((_DWORD)v6 + (unsigned int)((__int64)(v5 - v6) / 2)) & 0x3F];
        v13 = v6 >> 6;
        v14 = Pages[v13];
        v15 = v6 & 0x3F;
        v16 = v14[v15];
        v14[v15] = *v12;
        *v12 = v16;
        v17 = arr->Pages;
        v51 = (v6 + 1) >> 6;
        v18 = &v17[v51][((_BYTE)v6 + 1) & 0x3F];
        v19 = v17[(unsigned __int64)(v5 - 1) >> 6];
        v52 = 8 * ((unsigned __int64)(v5 - 1) >> 6);
        v49 = ((_BYTE)v5 - 1) & 0x3F;
        if ( less(&v19[v49], v18) )
        {
          v20 = arr->Pages;
          v21 = v20[v51];
          v22 = &v20[v52 / 8][v49];
          v23 = *v22;
          *v22 = v21[((_BYTE)v6 + 1) & 0x3F];
          v21[((_BYTE)v6 + 1) & 0x3F] = v23;
        }
        if ( less(&arr->Pages[v13][v15], &arr->Pages[(v6 + 1) >> 6][((_BYTE)v6 + 1) & 0x3F]) )
        {
          v24 = arr->Pages;
          v25 = v24[v13];
          v26 = &v24[v51][((_BYTE)v6 + 1) & 0x3F];
          v27 = v25[v6 & 0x3F];
          v25[v6 & 0x3F] = *v26;
          *v26 = v27;
        }
        if ( less(&arr->Pages[v52 / 8][v49], &arr->Pages[v13][v15]) )
        {
          v28 = arr->Pages;
          v29 = v28[v13];
          v30 = &v28[v52 / 8][v49];
          v31 = *v30;
          *v30 = v29[v6 & 0x3F];
          v29[v6 & 0x3F] = v31;
        }
        while ( 1 )
        {
          do
            ++v10;
          while ( less(&arr->Pages[v10 >> 6][v10 & 0x3F], &arr->Pages[v13][v15]) );
          do
            --v9;
          while ( less(&arr->Pages[v13][v15], &arr->Pages[v9 >> 6][v9 & 0x3F]) );
          v32 = arr->Pages;
          v33 = &v32[v9 >> 6][v9 & 0x3F];
          if ( (__int64)v10 > (__int64)v9 )
            break;
          v34 = &v32[v10 >> 6][v10 & 0x3F];
          v35 = *v34;
          *v34 = *v33;
          *v33 = v35;
        }
        v36 = v32[v13];
        v5 = v50;
        v37 = v36[v6 & 0x3F];
        v36[v6 & 0x3F] = *v33;
        *v33 = v37;
        if ( (__int64)(v9 - v6) <= (__int64)(v50 - v10) )
        {
          i[1] = v50;
          v5 = v9;
          *i = v10;
          i += 2;
          v50 = v9;
        }
        else
        {
          *i = v6;
          v6 = v10;
          i[1] = v9;
          i += 2;
        }
      }
      v38 = v6 + 1;
      v39 = v6;
      if ( (__int64)(v6 + 1) < v5 )
      {
        do
        {
          v40 = v39 >> 6;
          v41 = v39 & 0x3F;
          for ( j = v39 + 1; less(&arr->Pages[j >> 6][j & 0x3F], &arr->Pages[v40][v41]); v41 = ((_DWORD)j - 1) & 0x3F )
          {
            v43 = arr->Pages;
            v44 = j & 0x3F;
            v45 = j-- >> 6;
            v46 = v43[v40];
            v47 = &v43[v45][v44];
            v48 = *v47;
            *v47 = v46[v41];
            v46[v41] = v48;
            if ( j == v6 )
              break;
            v40 = (j - 1) >> 6;
          }
          v39 = v38++;
        }
        while ( v38 < v50 );
      }
      if ( i <= v53 )
        break;
      v5 = *(i - 1);
      i -= 2;
      v50 = v5;
    }
  }
}

void __fastcall Scaleform::HashSetBase<unsigned short,Scaleform::FixedSizeHash<unsigned short>,Scaleform::FixedSizeHash<unsigned short>,Scaleform::AllocatorGH<unsigned short,2>,Scaleform::HashsetCachedEntry<unsigned short,Scaleform::FixedSizeHash<unsigned short>>>::add<unsigned short>(
        Scaleform::HashSetBase<unsigned short,Scaleform::FixedSizeHash<unsigned short>,Scaleform::FixedSizeHash<unsigned short>,Scaleform::AllocatorGH<unsigned short,2>,Scaleform::HashsetCachedEntry<unsigned short,Scaleform::FixedSizeHash<unsigned short> > > *this,
        void *pmemAddr,
        const unsigned __int16 *key,
        unsigned __int64 hashValue)
{
  Scaleform::HashSetBase<unsigned short,Scaleform::FixedSizeHash<unsigned short>,Scaleform::FixedSizeHash<unsigned short>,Scaleform::AllocatorGH<unsigned short,2>,Scaleform::HashsetCachedEntry<unsigned short,Scaleform::FixedSizeHash<unsigned short> > >::TableType *pTable; // rax
  unsigned __int64 v8; // r8
  unsigned __int64 SizeMask; // r8
  unsigned __int64 v10; // rbx
  Scaleform::HashSetBase<unsigned short,Scaleform::FixedSizeHash<unsigned short>,Scaleform::FixedSizeHash<unsigned short>,Scaleform::AllocatorGH<unsigned short,2>,Scaleform::HashsetCachedEntry<unsigned short,Scaleform::FixedSizeHash<unsigned short> > >::TableType *v11; // r9
  unsigned __int64 v12; // r11
  char *v13; // r8
  unsigned __int16 v14; // ax
  __int64 v15; // rdx
  unsigned __int64 *v16; // r10
  __int64 v17; // rax
  __int64 v18; // rcx
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
  Scaleform::HashSetBase<unsigned short,Scaleform::FixedSizeHash<unsigned short>,Scaleform::FixedSizeHash<unsigned short>,Scaleform::AllocatorGH<unsigned short,2>,Scaleform::HashsetCachedEntry<unsigned short,Scaleform::FixedSizeHash<unsigned short>>>::setRawCapacity(
    this,
    pmemAddr,
    v8);
LABEL_6:
  v10 = this->pTable->SizeMask & hashValue;
  ++this->pTable->EntryCount;
  v11 = this->pTable;
  v12 = *(&this->pTable[1].EntryCount + 3 * v10);
  v13 = (char *)this->pTable + 24 * v10;
  if ( v12 == -2i64 )
  {
    *((_QWORD *)v13 + 2) = -1i64;
    *((_QWORD *)v13 + 3) = 0i64;
    v14 = *key;
  }
  else
  {
    v15 = v10;
    do
      v15 = v11->SizeMask & (v15 + 1);
    while ( *(&v11[1].EntryCount + 3 * v15) != -2i64 );
    v16 = &v11[v15 + 1].EntryCount + v15;
    v17 = *((_QWORD *)v13 + 3);
    if ( v17 == v10 )
    {
      if ( v16 )
      {
        *v16 = v12;
        v16[1] = *((_QWORD *)v13 + 3);
        *((_WORD *)v16 + 8) = *((_WORD *)v13 + 16);
      }
      v14 = *key;
      *((_QWORD *)v13 + 2) = v15;
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
        v16[1] = *((_QWORD *)v13 + 3);
        *((_WORD *)v16 + 8) = *((_WORD *)v13 + 16);
      }
      *i = v15;
      v14 = *key;
      *((_QWORD *)v13 + 2) = -1i64;
    }
  }
  *((_QWORD *)v13 + 3) = v10;
  *((_WORD *)v13 + 16) = v14;
}

void __fastcall Scaleform::HashSetBase<Scaleform::GFx::FontCompactor::ContourKeyType,Scaleform::GFx::FontCompactor::ContourKeyType,Scaleform::GFx::FontCompactor::ContourKeyType,Scaleform::AllocatorGH<Scaleform::GFx::FontCompactor::ContourKeyType,261>,Scaleform::HashsetCachedEntry<Scaleform::GFx::FontCompactor::ContourKeyType,Scaleform::GFx::FontCompactor::ContourKeyType>>::add<Scaleform::GFx::FontCompactor::ContourKeyType>(
        Scaleform::HashSetBase<Scaleform::GFx::FontCompactor::GlyphKeyType,Scaleform::GFx::FontCompactor::GlyphKeyType,Scaleform::GFx::FontCompactor::GlyphKeyType,Scaleform::AllocatorGH<Scaleform::GFx::FontCompactor::ContourKeyType,261>,Scaleform::HashsetCachedEntry<Scaleform::GFx::FontCompactor::GlyphKeyType,Scaleform::GFx::FontCompactor::GlyphKeyType> > *this,
        void *pmemAddr,
        const Scaleform::GFx::FontCompactor::GlyphKeyType *key,
        unsigned __int64 hashValue)
{
  Scaleform::HashSetBase<Scaleform::GFx::FontCompactor::GlyphKeyType,Scaleform::GFx::FontCompactor::GlyphKeyType,Scaleform::GFx::FontCompactor::GlyphKeyType,Scaleform::AllocatorGH<Scaleform::GFx::FontCompactor::ContourKeyType,261>,Scaleform::HashsetCachedEntry<Scaleform::GFx::FontCompactor::GlyphKeyType,Scaleform::GFx::FontCompactor::GlyphKeyType> >::TableType *pTable; // rax
  unsigned __int64 v8; // r8
  unsigned __int64 SizeMask; // r8
  unsigned __int64 v10; // rbx
  Scaleform::HashSetBase<Scaleform::GFx::FontCompactor::GlyphKeyType,Scaleform::GFx::FontCompactor::GlyphKeyType,Scaleform::GFx::FontCompactor::GlyphKeyType,Scaleform::AllocatorGH<Scaleform::GFx::FontCompactor::ContourKeyType,261>,Scaleform::HashsetCachedEntry<Scaleform::GFx::FontCompactor::GlyphKeyType,Scaleform::GFx::FontCompactor::GlyphKeyType> >::TableType *v11; // r8
  Scaleform::HashSetBase<Scaleform::GFx::FontCompactor::GlyphKeyType,Scaleform::GFx::FontCompactor::GlyphKeyType,Scaleform::GFx::FontCompactor::GlyphKeyType,Scaleform::AllocatorGH<Scaleform::GFx::FontCompactor::ContourKeyType,261>,Scaleform::HashsetCachedEntry<Scaleform::GFx::FontCompactor::GlyphKeyType,Scaleform::GFx::FontCompactor::GlyphKeyType> >::TableType *v12; // rdx
  unsigned __int64 EntryCount; // r11
  Scaleform::GFx::FontCompactor::GlyphKeyType v14; // xmm0
  __int64 v15; // rcx
  __int64 v16; // r10
  unsigned __int64 v17; // rax
  Scaleform::HashSetBase<Scaleform::GFx::FontCompactor::GlyphKeyType,Scaleform::GFx::FontCompactor::GlyphKeyType,Scaleform::GFx::FontCompactor::GlyphKeyType,Scaleform::AllocatorGH<Scaleform::GFx::FontCompactor::ContourKeyType,261>,Scaleform::HashsetCachedEntry<Scaleform::GFx::FontCompactor::GlyphKeyType,Scaleform::GFx::FontCompactor::GlyphKeyType> >::TableType *i; // r9

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
  Scaleform::HashSetBase<Scaleform::GFx::FontCompactor::ContourKeyType,Scaleform::GFx::FontCompactor::ContourKeyType,Scaleform::GFx::FontCompactor::ContourKeyType,Scaleform::AllocatorGH<Scaleform::GFx::FontCompactor::ContourKeyType,261>,Scaleform::HashsetCachedEntry<Scaleform::GFx::FontCompactor::ContourKeyType,Scaleform::GFx::FontCompactor::ContourKeyType>>::setRawCapacity(
    this,
    pmemAddr,
    v8);
LABEL_6:
  v10 = this->pTable->SizeMask & hashValue;
  ++this->pTable->EntryCount;
  v11 = this->pTable;
  v12 = &this->pTable[2 * v10];
  EntryCount = v12[1].EntryCount;
  if ( EntryCount == -2i64 )
  {
    v12[1].EntryCount = -1i64;
    v12[1].SizeMask = 0i64;
    v14 = *key;
  }
  else
  {
    v15 = v10;
    do
      v15 = v11->SizeMask & (v15 + 1);
    while ( v11[2 * v15 + 1].EntryCount != -2i64 );
    v16 = (__int64)&v11[2 * v15 + 1];
    v17 = v12[1].SizeMask;
    if ( v17 == v10 )
    {
      if ( v16 )
      {
        *(_QWORD *)v16 = EntryCount;
        *(_QWORD *)(v16 + 8) = v12[1].SizeMask;
        *(Scaleform::HashSetBase<Scaleform::GFx::FontCompactor::GlyphKeyType,Scaleform::GFx::FontCompactor::GlyphKeyType,Scaleform::GFx::FontCompactor::GlyphKeyType,Scaleform::AllocatorGH<Scaleform::GFx::FontCompactor::ContourKeyType,261>,Scaleform::HashsetCachedEntry<Scaleform::GFx::FontCompactor::GlyphKeyType,Scaleform::GFx::FontCompactor::GlyphKeyType> >::TableType *)(v16 + 16) = v12[2];
      }
      v14 = *key;
      v12[1].EntryCount = v15;
    }
    else
    {
      for ( i = &v11[2 * v17 + 1]; i->EntryCount != v10; i = &v11[2 * i->EntryCount + 1] )
        ;
      if ( v16 )
      {
        *(_QWORD *)v16 = EntryCount;
        *(_QWORD *)(v16 + 8) = v12[1].SizeMask;
        *(Scaleform::HashSetBase<Scaleform::GFx::FontCompactor::GlyphKeyType,Scaleform::GFx::FontCompactor::GlyphKeyType,Scaleform::GFx::FontCompactor::GlyphKeyType,Scaleform::AllocatorGH<Scaleform::GFx::FontCompactor::ContourKeyType,261>,Scaleform::HashsetCachedEntry<Scaleform::GFx::FontCompactor::GlyphKeyType,Scaleform::GFx::FontCompactor::GlyphKeyType> >::TableType *)(v16 + 16) = v12[2];
      }
      i->EntryCount = v15;
      v14 = *key;
      v12[1].EntryCount = -1i64;
    }
  }
  v12[1].SizeMask = v10;
  v12[2] = (Scaleform::HashSetBase<Scaleform::GFx::FontCompactor::GlyphKeyType,Scaleform::GFx::FontCompactor::GlyphKeyType,Scaleform::GFx::FontCompactor::GlyphKeyType,Scaleform::AllocatorGH<Scaleform::GFx::FontCompactor::ContourKeyType,261>,Scaleform::HashsetCachedEntry<Scaleform::GFx::FontCompactor::GlyphKeyType,Scaleform::GFx::FontCompactor::GlyphKeyType> >::TableType)v14;
}

unsigned __int64 __fastcall Scaleform::HashSetBase<Scaleform::GFx::FontCompactor::GlyphKeyType,Scaleform::GFx::FontCompactor::GlyphKeyType,Scaleform::GFx::FontCompactor::GlyphKeyType,Scaleform::AllocatorGH<Scaleform::GFx::FontCompactor::ContourKeyType,261>,Scaleform::HashsetCachedEntry<Scaleform::GFx::FontCompactor::GlyphKeyType,Scaleform::GFx::FontCompactor::GlyphKeyType>>::findIndexCore<Scaleform::GFx::FontCompactor::GlyphKeyType>(
        Scaleform::HashSetBase<Scaleform::GFx::FontCompactor::GlyphKeyType,Scaleform::GFx::FontCompactor::GlyphKeyType,Scaleform::GFx::FontCompactor::GlyphKeyType,Scaleform::AllocatorGH<Scaleform::GFx::FontCompactor::ContourKeyType,261>,Scaleform::HashsetCachedEntry<Scaleform::GFx::FontCompactor::GlyphKeyType,Scaleform::GFx::FontCompactor::GlyphKeyType> > *this,
        const Scaleform::GFx::FontCompactor::GlyphKeyType *key,
        unsigned __int64 hashValue)
{
  Scaleform::HashSetBase<Scaleform::GFx::FontCompactor::GlyphKeyType,Scaleform::GFx::FontCompactor::GlyphKeyType,Scaleform::GFx::FontCompactor::GlyphKeyType,Scaleform::AllocatorGH<Scaleform::GFx::FontCompactor::ContourKeyType,261>,Scaleform::HashsetCachedEntry<Scaleform::GFx::FontCompactor::GlyphKeyType,Scaleform::GFx::FontCompactor::GlyphKeyType> >::TableType *v3; // rbx
  unsigned __int64 EntryCount; // rdi

  v3 = &this->pTable[2 * hashValue + 1];
  EntryCount = hashValue;
  if ( v3->EntryCount == -2i64 || v3->SizeMask != hashValue )
    return -1i64;
  while ( v3->SizeMask != hashValue
       || !Scaleform::GFx::FontCompactor::GlyphsEqual(
             (Scaleform::GFx::FontCompactor *)v3[1].EntryCount,
             HIDWORD(v3[1].SizeMask),
             key->pFont,
             key->DataStart) )
  {
    EntryCount = v3->EntryCount;
    if ( v3->EntryCount == -1i64 )
      return -1i64;
    v3 = &this->pTable[2 * EntryCount + 1];
  }
  return EntryCount;
}

void __fastcall Scaleform::GFx::FontCompactor::FontCompactor(
        Scaleform::GFx::FontCompactor *this,
        Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> *data)
{
  this->RefCount = 1;
  this->__vftable = (Scaleform::GFx::FontCompactor_vtbl *)&Scaleform::GFx::FontCompactor::`vftable';
  this->Encoder.Data = data;
  this->Decoder.Data = data;
  this->ContourHash.pTable = 0i64;
  this->GlyphHash.pTable = 0i64;
  this->TmpVertices.Size = 0i64;
  this->TmpVertices.NumPages = 0i64;
  this->TmpVertices.MaxPages = 0i64;
  this->TmpVertices.Pages = 0i64;
  this->TmpContours.Size = 0i64;
  this->TmpContours.NumPages = 0i64;
  this->TmpContours.MaxPages = 0i64;
  this->TmpContours.Pages = 0i64;
  this->TmpContour.Size = 0i64;
  this->TmpContour.NumPages = 0i64;
  this->TmpContour.MaxPages = 0i64;
  this->TmpContour.Pages = 0i64;
  this->GlyphCodes.pTable = 0i64;
  this->GlyphInfoTable.Size = 0i64;
  this->GlyphInfoTable.NumPages = 0i64;
  this->GlyphInfoTable.MaxPages = 0i64;
  this->GlyphInfoTable.Pages = 0i64;
  this->KerningTable.Size = 0i64;
  this->KerningTable.NumPages = 0i64;
  this->KerningTable.MaxPages = 0i64;
  this->KerningTable.Pages = 0i64;
}

void __fastcall Scaleform::GFx::FontCompactor::~FontCompactor(Scaleform::GFx::FontCompactor *this)
{
  Scaleform::HashSetBase<unsigned short,Scaleform::FixedSizeHash<unsigned short>,Scaleform::FixedSizeHash<unsigned short>,Scaleform::AllocatorGH<unsigned short,2>,Scaleform::HashsetCachedEntry<unsigned short,Scaleform::FixedSizeHash<unsigned short> > >::TableType *pTable; // rax
  __int64 v3; // rcx
  __int64 v4; // rdx
  Scaleform::HashSetBase<unsigned short,Scaleform::FixedSizeHash<unsigned short>,Scaleform::FixedSizeHash<unsigned short>,Scaleform::AllocatorGH<unsigned short,2>,Scaleform::HashsetCachedEntry<unsigned short,Scaleform::FixedSizeHash<unsigned short> > >::TableType *v5; // rax
  Scaleform::HashSetBase<Scaleform::GFx::FontCompactor::GlyphKeyType,Scaleform::GFx::FontCompactor::GlyphKeyType,Scaleform::GFx::FontCompactor::GlyphKeyType,Scaleform::AllocatorGH<Scaleform::GFx::FontCompactor::ContourKeyType,261>,Scaleform::HashsetCachedEntry<Scaleform::GFx::FontCompactor::GlyphKeyType,Scaleform::GFx::FontCompactor::GlyphKeyType> >::TableType *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rdx
  Scaleform::HashSetBase<Scaleform::GFx::FontCompactor::GlyphKeyType,Scaleform::GFx::FontCompactor::GlyphKeyType,Scaleform::GFx::FontCompactor::GlyphKeyType,Scaleform::AllocatorGH<Scaleform::GFx::FontCompactor::ContourKeyType,261>,Scaleform::HashsetCachedEntry<Scaleform::GFx::FontCompactor::GlyphKeyType,Scaleform::GFx::FontCompactor::GlyphKeyType> >::TableType *v9; // rax
  Scaleform::HashSetBase<Scaleform::GFx::FontCompactor::ContourKeyType,Scaleform::GFx::FontCompactor::ContourKeyType,Scaleform::GFx::FontCompactor::ContourKeyType,Scaleform::AllocatorGH<Scaleform::GFx::FontCompactor::ContourKeyType,261>,Scaleform::HashsetCachedEntry<Scaleform::GFx::FontCompactor::ContourKeyType,Scaleform::GFx::FontCompactor::ContourKeyType> >::TableType *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  Scaleform::HashSetBase<Scaleform::GFx::FontCompactor::ContourKeyType,Scaleform::GFx::FontCompactor::ContourKeyType,Scaleform::GFx::FontCompactor::ContourKeyType,Scaleform::AllocatorGH<Scaleform::GFx::FontCompactor::ContourKeyType,261>,Scaleform::HashsetCachedEntry<Scaleform::GFx::FontCompactor::ContourKeyType,Scaleform::GFx::FontCompactor::ContourKeyType> >::TableType *v13; // rax

  this->__vftable = (Scaleform::GFx::FontCompactor_vtbl *)&Scaleform::GFx::FontCompactor::`vftable';
  Scaleform::ArrayPagedBase<Scaleform::GFx::FontCompactor::KerningPairType,6,64,Scaleform::AllocatorPagedGH_POD<Scaleform::GFx::FontCompactor::KerningPairType,261>>::ClearAndRelease((Scaleform::ArrayPagedBase<Scaleform::GFx::FontCompactor::VertexType,6,64,Scaleform::AllocatorPagedGH_POD<Scaleform::GFx::FontCompactor::VertexType,261> > *)&this->KerningTable);
  Scaleform::ArrayPagedBase<Scaleform::GFx::FontCompactor::KerningPairType,6,64,Scaleform::AllocatorPagedGH_POD<Scaleform::GFx::FontCompactor::KerningPairType,261>>::ClearAndRelease((Scaleform::ArrayPagedBase<Scaleform::GFx::FontCompactor::VertexType,6,64,Scaleform::AllocatorPagedGH_POD<Scaleform::GFx::FontCompactor::VertexType,261> > *)&this->GlyphInfoTable);
  pTable = this->GlyphCodes.pTable;
  if ( pTable )
  {
    v3 = 0i64;
    v4 = pTable->SizeMask + 1;
    do
    {
      v5 = this->GlyphCodes.pTable;
      if ( *(unsigned __int64 *)((char *)&v5[1].EntryCount + v3) != -2i64 )
        *(unsigned __int64 *)((char *)&v5[1].EntryCount + v3) = -2i64;
      v3 += 24i64;
      --v4;
    }
    while ( v4 );
    if ( this->GlyphCodes.pTable )
      ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
    this->GlyphCodes.pTable = 0i64;
  }
  Scaleform::ArrayPagedBase<Scaleform::GFx::FontCompactor::KerningPairType,6,64,Scaleform::AllocatorPagedGH_POD<Scaleform::GFx::FontCompactor::KerningPairType,261>>::ClearAndRelease(&this->TmpContour);
  Scaleform::ArrayPagedBase<Scaleform::GFx::FontCompactor::KerningPairType,6,64,Scaleform::AllocatorPagedGH_POD<Scaleform::GFx::FontCompactor::KerningPairType,261>>::ClearAndRelease((Scaleform::ArrayPagedBase<Scaleform::GFx::FontCompactor::VertexType,6,64,Scaleform::AllocatorPagedGH_POD<Scaleform::GFx::FontCompactor::VertexType,261> > *)&this->TmpContours);
  Scaleform::ArrayPagedBase<Scaleform::GFx::FontCompactor::KerningPairType,6,64,Scaleform::AllocatorPagedGH_POD<Scaleform::GFx::FontCompactor::KerningPairType,261>>::ClearAndRelease(&this->TmpVertices);
  v6 = this->GlyphHash.pTable;
  if ( v6 )
  {
    v7 = 0i64;
    v8 = v6->SizeMask + 1;
    do
    {
      v9 = this->GlyphHash.pTable;
      if ( v9[v7 + 1].EntryCount != -2i64 )
        v9[v7 + 1].EntryCount = -2i64;
      v7 += 2i64;
      --v8;
    }
    while ( v8 );
    if ( this->GlyphHash.pTable )
      ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
    this->GlyphHash.pTable = 0i64;
  }
  v10 = this->ContourHash.pTable;
  if ( v10 )
  {
    v11 = 0i64;
    v12 = v10->SizeMask + 1;
    do
    {
      v13 = this->ContourHash.pTable;
      if ( v13[v11 + 1].EntryCount != -2i64 )
        v13[v11 + 1].EntryCount = -2i64;
      v11 += 2i64;
      --v12;
    }
    while ( v12 );
    if ( this->ContourHash.pTable )
      ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
    this->ContourHash.pTable = 0i64;
  }
  Scaleform::RefCountNTSImplCore::~RefCountNTSImplCore(this);
}

unsigned __int64 __fastcall Scaleform::FixedSizeHash<unsigned short>::operator()(
        Scaleform::FixedSizeHash<unsigned short> *this,
        const unsigned __int16 *data)
{
  __int64 v2; // rcx
  unsigned __int64 result; // rax
  __int64 v4; // r8

  v2 = 2i64;
  result = 5381i64;
  do
  {
    v4 = *((unsigned __int8 *)data + --v2);
    result = v4 + 65599 * result;
  }
  while ( v2 );
  return result;
}

void __fastcall Scaleform::GFx::FontCompactor::AddKerningPair(
        Scaleform::GFx::FontCompactor *this,
        unsigned int char1,
        unsigned int char2,
        int adjustment)
{
  Scaleform::HashSetBase<unsigned short,Scaleform::FixedSizeHash<unsigned short>,Scaleform::FixedSizeHash<unsigned short>,Scaleform::AllocatorGH<unsigned short,2>,Scaleform::HashsetCachedEntry<unsigned short,Scaleform::FixedSizeHash<unsigned short> > >::TableType *pTable; // rbx
  unsigned __int16 v5; // si
  __int16 v7; // di
  __int64 v9; // r11
  __int64 v10; // r10
  __int64 v11; // rax
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  bool v18; // zf
  unsigned __int64 *v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rcx
  unsigned __int64 *v25; // rcx
  unsigned __int64 v26; // rdi
  Scaleform::GFx::FontCompactor::KerningPairType v27; // [rsp+40h] [rbp+8h]
  __int16 v28; // [rsp+48h] [rbp+10h]

  pTable = this->GlyphCodes.pTable;
  v5 = char1;
  v28 = char1;
  v7 = char2;
  if ( pTable )
  {
    v9 = 5381i64;
    v10 = 2i64;
    v11 = 5381i64;
    v12 = 2i64;
    do
    {
      v13 = *((unsigned __int8 *)&v27.Adjustment + v12-- + 3);
      v14 = 65599 * v11 + v13;
      v11 = v14;
    }
    while ( v12 );
    v15 = v14 & pTable->SizeMask;
    v16 = v15;
    v17 = v15 + 2 * (v15 + 1);
    v18 = *(&pTable->EntryCount + v17) == -2i64;
    v19 = &pTable->EntryCount + v17;
    if ( !v18 && v19[1] == v15 )
    {
      while ( v19[1] != v15 || *((_WORD *)v19 + 8) != v5 )
      {
        v16 = *v19;
        if ( *v19 == -1i64 )
          return;
        v19 = &pTable[v16 + 1].EntryCount + v16;
      }
      if ( v16 >= 0 )
      {
        if ( (Scaleform::HashSetBase<unsigned short,Scaleform::FixedSizeHash<unsigned short>,Scaleform::FixedSizeHash<unsigned short>,Scaleform::AllocatorGH<unsigned short,2>,Scaleform::HashsetCachedEntry<unsigned short,Scaleform::FixedSizeHash<unsigned short> > >::TableType *)((char *)&pTable[v16 + 2] + 8 * v16) )
        {
          v28 = v7;
          do
          {
            v20 = *((unsigned __int8 *)&v27.Adjustment + v10-- + 3);
            v21 = 65599 * v9 + v20;
            v9 = v21;
          }
          while ( v10 );
          v22 = v21 & pTable->SizeMask;
          v23 = v22;
          v24 = v22 + 2 * (v22 + 1);
          v18 = *(&pTable->EntryCount + v24) == -2i64;
          v25 = &pTable->EntryCount + v24;
          if ( !v18 && v25[1] == v22 )
          {
            while ( v25[1] != v22 || *((_WORD *)v25 + 8) != v7 )
            {
              v23 = *v25;
              if ( *v25 == -1i64 )
                return;
              v25 = &pTable[v23 + 1].EntryCount + v23;
            }
            if ( v23 >= 0
              && (Scaleform::HashSetBase<unsigned short,Scaleform::FixedSizeHash<unsigned short>,Scaleform::FixedSizeHash<unsigned short>,Scaleform::AllocatorGH<unsigned short,2>,Scaleform::HashsetCachedEntry<unsigned short,Scaleform::FixedSizeHash<unsigned short> > >::TableType *)((char *)&pTable[v23 + 2] + 8 * v23) )
            {
              v27.Char2 = v7;
              v26 = this->KerningTable.Size >> 6;
              v27.Char1 = v5;
              v27.Adjustment = adjustment;
              if ( v26 >= this->KerningTable.NumPages )
                Scaleform::ArrayPagedBase<Scaleform::GFx::FontCompactor::GlyphInfoType,6,64,Scaleform::AllocatorPagedGH_POD<Scaleform::GFx::FontCompactor::GlyphInfoType,261>>::allocatePage(
                  &this->KerningTable,
                  v26);
              this->KerningTable.Pages[v26][this->KerningTable.Size & 0x3F] = v27;
              ++this->KerningTable.Size;
            }
          }
        }
      }
    }
  }
}

void __fastcall Scaleform::GFx::FontCompactor::AssignGlyphAdvance(
        Scaleform::GFx::FontCompactor *this,
        unsigned int glyphIndex,
        int advanceX)
{
  if ( glyphIndex < this->GlyphInfoTable.Size )
    this->GlyphInfoTable.Pages[(unsigned __int64)glyphIndex >> 6][glyphIndex & 0x3F].AdvanceX = advanceX;
}

void __fastcall Scaleform::GFx::FontCompactor::AssignGlyphCode(
        Scaleform::GFx::FontCompactor *this,
        unsigned int glyphIndex,
        unsigned int glyphCode)
{
  unsigned __int16 v3; // r11
  Scaleform::GFx::FontCompactor::GlyphInfoType **Pages; // rax
  unsigned __int64 v5; // r9
  Scaleform::HashSet<unsigned short,Scaleform::FixedSizeHash<unsigned short>,Scaleform::FixedSizeHash<unsigned short>,Scaleform::AllocatorGH<unsigned short,2>,Scaleform::HashsetCachedEntry<unsigned short,Scaleform::FixedSizeHash<unsigned short> > > *p_GlyphCodes; // rdi
  __int64 v7; // r8
  Scaleform::HashSetBase<unsigned short,Scaleform::FixedSizeHash<unsigned short>,Scaleform::FixedSizeHash<unsigned short>,Scaleform::AllocatorGH<unsigned short,2>,Scaleform::HashsetCachedEntry<unsigned short,Scaleform::FixedSizeHash<unsigned short> > >::TableType *pTable; // rbx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // r10
  __int64 v14; // rdx
  __int64 v15; // rcx
  bool v16; // zf
  unsigned __int64 *v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // [rsp+30h] [rbp+8h]
  unsigned __int16 key; // [rsp+38h] [rbp+10h] BYREF

  v3 = glyphCode;
  if ( glyphIndex < this->GlyphInfoTable.Size )
  {
    Pages = this->GlyphInfoTable.Pages;
    v5 = 5381i64;
    p_GlyphCodes = &this->GlyphCodes;
    key = glyphCode;
    Pages[(unsigned __int64)glyphIndex >> 6][glyphIndex & 0x3F].GlyphCode = glyphCode;
    v7 = 2i64;
    pTable = this->GlyphCodes.pTable;
    if ( !pTable )
      goto LABEL_13;
    v9 = 5381i64;
    v10 = 2i64;
    do
    {
      v11 = *((unsigned __int8 *)&v19 + v10-- + 7);
      v12 = 65599 * v9 + v11;
      v9 = v12;
    }
    while ( v10 );
    v13 = v12 & pTable->SizeMask;
    v14 = v13;
    v15 = v13 + 2 * (v13 + 1);
    v16 = *(&pTable->EntryCount + v15) == -2i64;
    v17 = &pTable->EntryCount + v15;
    if ( v16 || v17[1] != v13 )
      goto LABEL_13;
    while ( v17[1] != v13 || *((_WORD *)v17 + 8) != v3 )
    {
      v14 = *v17;
      if ( *v17 == -1i64 )
        goto LABEL_13;
      v17 = &pTable[v14 + 1].EntryCount + v14;
    }
    if ( v14 < 0
      || !(Scaleform::HashSetBase<unsigned short,Scaleform::FixedSizeHash<unsigned short>,Scaleform::FixedSizeHash<unsigned short>,Scaleform::AllocatorGH<unsigned short,2>,Scaleform::HashsetCachedEntry<unsigned short,Scaleform::FixedSizeHash<unsigned short> > >::TableType *)((char *)&pTable[v14 + 2] + 8 * v14) )
    {
LABEL_13:
      key = v3;
      do
      {
        v18 = *((unsigned __int8 *)&v19 + v7-- + 7);
        v5 = v18 + 65599 * v5;
      }
      while ( v7 );
      Scaleform::HashSetBase<unsigned short,Scaleform::FixedSizeHash<unsigned short>,Scaleform::FixedSizeHash<unsigned short>,Scaleform::AllocatorGH<unsigned short,2>,Scaleform::HashsetCachedEntry<unsigned short,Scaleform::FixedSizeHash<unsigned short>>>::add<unsigned short>(
        p_GlyphCodes,
        p_GlyphCodes,
        &key,
        v5);
    }
  }
}

void __fastcall Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorGH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>::Clear(
        Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorGH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > *this)
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
    if ( this->pTable )
      ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
    this->pTable = 0i64;
  }
}

void __fastcall Scaleform::HashSetBase<Scaleform::GFx::ResourceWeakLib::ResourceNode,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp,Scaleform::AllocatorGH<Scaleform::GFx::ResourceWeakLib::ResourceNode,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::ResourceWeakLib::ResourceNode,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp>>::Clear(
        Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::AS3::GASRefCountBase *,Scaleform::GFx::AS3::WeakProxy *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::GASRefCountBase *> >,Scaleform::HashNode<Scaleform::GFx::AS3::GASRefCountBase *,Scaleform::GFx::AS3::WeakProxy *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::GASRefCountBase *> >::NodeHashF,Scaleform::HashNode<Scaleform::GFx::AS3::GASRefCountBase *,Scaleform::GFx::AS3::WeakProxy *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::GASRefCountBase *> >::NodeAltHashF,Scaleform::AllocatorGH<Scaleform::GFx::AS3::GASRefCountBase *,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::AS3::GASRefCountBase *,Scaleform::GFx::AS3::WeakProxy *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::GASRefCountBase *> >,Scaleform::HashNode<Scaleform::GFx::AS3::GASRefCountBase *,Scaleform::GFx::AS3::WeakProxy *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::GASRefCountBase *> >::NodeHashF> > *this)
{
  __int64 v2; // rdx
  unsigned __int64 v3; // r8

  if ( this->pTable )
  {
    v2 = 0i64;
    v3 = this->pTable->SizeMask + 1;
    do
    {
      if ( this->pTable[v2 + 1].EntryCount != -2i64 )
        this->pTable[v2 + 1].EntryCount = -2i64;
      v2 += 2i64;
      --v3;
    }
    while ( v3 );
    if ( this->pTable )
      ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
    this->pTable = 0i64;
  }
}

void __fastcall Scaleform::ArrayPagedBase<Scaleform::GFx::FontCompactor::KerningPairType,6,64,Scaleform::AllocatorPagedGH_POD<Scaleform::GFx::FontCompactor::KerningPairType,261>>::ClearAndRelease(
        Scaleform::ArrayPagedBase<Scaleform::GFx::FontCompactor::VertexType,6,64,Scaleform::AllocatorPagedGH_POD<Scaleform::GFx::FontCompactor::VertexType,261> > *this)
{
  unsigned __int64 NumPages; // rcx
  Scaleform::GFx::FontCompactor::VertexType **v3; // rdi

  NumPages = this->NumPages;
  if ( NumPages )
  {
    v3 = &this->Pages[NumPages - 1];
    do
    {
      --this->NumPages;
      if ( *v3 )
        ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
      --v3;
    }
    while ( this->NumPages );
    --this->NumPages;
    if ( this->Pages )
      ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
  }
  this->MaxPages = 0i64;
  this->NumPages = 0i64;
  this->Size = 0i64;
  this->Pages = 0i64;
}

__int64 __fastcall Scaleform::GFx::FontCompactor::ComputePathHash(
        Scaleform::GFx::FontCompactor *this,
        unsigned int pos)
{
  Scaleform::GFx::PathDataDecoder<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> > *p_Decoder; // rsi
  unsigned int v3; // ebx
  unsigned int v4; // edi
  unsigned int v5; // ebp
  unsigned __int8 **Pages; // r11
  unsigned int v7; // edx
  char *v8; // r8
  __int64 v9; // rax
  int v10; // er10
  __int64 v11; // r9
  __int64 v12; // rcx
  unsigned __int64 v13; // rax
  char *v14; // rcx
  __int64 v15; // rdx
  int v16; // eax
  unsigned int v; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int8 v19; // [rsp+28h] [rbp-30h] BYREF
  char v20; // [rsp+29h] [rbp-2Fh] BYREF

  p_Decoder = &this->Decoder;
  v3 = 0;
  v4 = Scaleform::GFx::PathDataDecoder<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261>>::ReadUInt30(
         &this->Decoder,
         pos,
         &v)
     + pos;
  v5 = v >> 1;
  if ( v >> 1 )
  {
    Pages = p_Decoder->Data->Pages;
    do
    {
      v7 = v4 + 1;
      v8 = &v20;
      --v5;
      v19 = Pages[(unsigned __int64)v4 >> 12][v4 & 0xFFF];
      v9 = v19 & 0xF;
      v10 = Scaleform::GFx::PathDataDecoder<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261>>::Sizes[v9];
      if ( Scaleform::GFx::PathDataDecoder<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261>>::Sizes[v9] )
      {
        v11 = Scaleform::GFx::PathDataDecoder<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261>>::Sizes[v9];
        do
        {
          ++v8;
          v12 = v7 & 0xFFF;
          v13 = (unsigned __int64)v7++ >> 12;
          *(v8 - 1) = Pages[v13][v12];
          --v11;
        }
        while ( v11 );
      }
      v4 += v10 + 1;
      v14 = (char *)&v19;
      v15 = (unsigned int)(v10 + 1);
      do
      {
        v16 = (unsigned __int8)*v14++;
        v3 = v16 ^ (33 * v3);
        --v15;
      }
      while ( v15 );
    }
    while ( v5 );
  }
  return v3;
}

void __fastcall Scaleform::GFx::FontCompactor::EndFont(Scaleform::GFx::FontCompactor *this)
{
  unsigned int v1; // esi
  unsigned int v3; // ebp
  unsigned __int64 v4; // rdx
  Scaleform::GFx::FontCompactor::GlyphInfoType *v5; // rdi
  unsigned __int64 v6; // rdx
  Scaleform::GFx::FontCompactor::KerningPairType *v7; // rdi

  v1 = 0;
  v3 = 0;
  if ( this->GlyphInfoTable.Size )
  {
    v4 = 0i64;
    do
    {
      v5 = &this->GlyphInfoTable.Pages[v4 >> 6][v4 & 0x3F];
      Scaleform::GFx::PathDataEncoder<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261>>::WriteUInt16fixlen(
        &this->Encoder,
        v5->GlyphCode);
      Scaleform::GFx::PathDataEncoder<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261>>::WriteSInt16fixlen(
        &this->Encoder,
        v5->AdvanceX);
      Scaleform::GFx::PathDataEncoder<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261>>::WriteUInt32fixlen(
        &this->Encoder,
        v5->GlobalOffset);
      v4 = ++v3;
    }
    while ( v3 < this->GlyphInfoTable.Size );
  }
  Scaleform::Alg::QuickSortSliced<Scaleform::ArrayPagedPOD<Scaleform::GFx::FontCompactor::KerningPairType,6,64,261>,bool (*)(Scaleform::GFx::FontCompactor::KerningPairType const &,Scaleform::GFx::FontCompactor::KerningPairType const &)>(
    &this->KerningTable,
    0i64,
    this->KerningTable.Size,
    Scaleform::GFx::FontCompactor::cmpKerningPairs);
  Scaleform::GFx::PathDataEncoder<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261>>::WriteUInt30(
    &this->Encoder,
    this->KerningTable.Size);
  if ( this->KerningTable.Size )
  {
    v6 = 0i64;
    do
    {
      v7 = &this->KerningTable.Pages[v6 >> 6][v6 & 0x3F];
      Scaleform::GFx::PathDataEncoder<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261>>::WriteUInt16fixlen(
        &this->Encoder,
        v7->Char1);
      Scaleform::GFx::PathDataEncoder<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261>>::WriteUInt16fixlen(
        &this->Encoder,
        v7->Char2);
      Scaleform::GFx::PathDataEncoder<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261>>::WriteSInt16fixlen(
        &this->Encoder,
        v7->Adjustment);
      v6 = ++v1;
    }
    while ( v1 < this->KerningTable.Size );
  }
}

void __fastcall Scaleform::GFx::FontCompactor::EndGlyph(Scaleform::GFx::FontCompactor *this, bool mergeContours)
{
  unsigned int v3; // edi
  unsigned int Size; // esi
  unsigned __int64 v5; // rax
  char v6; // cl
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  __int64 v9; // rdx
  unsigned int v10; // er8
  int v11; // ebx
  Scaleform::GFx::FontCompactor::ContourType *v12; // rax
  unsigned int DataSize; // er9
  Scaleform::GFx::FontCompactor::ContourType *v14; // r12
  unsigned int v15; // edx
  unsigned __int64 DataStart; // rcx
  __int64 v17; // rdx
  Scaleform::GFx::FontCompactor::VertexType *v18; // rax
  int y; // er14
  int v20; // ebp
  unsigned int i; // esi
  unsigned int v22; // er9
  Scaleform::GFx::FontCompactor::VertexType **Pages; // r10
  __int64 v24; // rcx
  Scaleform::GFx::FontCompactor::VertexType *v25; // rax
  __int16 x; // dx
  Scaleform::GFx::FontCompactor::VertexType *v27; // r8
  __int64 v28; // rcx
  Scaleform::GFx::FontCompactor::VertexType *v29; // rax
  int v30; // ebx
  int v31; // edi
  int v32; // edi
  Scaleform::GFx::PathDataEncoder<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> > *p_Encoder; // rcx
  int v34; // ebx
  int v35; // edx
  unsigned __int64 v36; // rbp
  unsigned int v37; // eax
  Scaleform::HashSetBase<Scaleform::GFx::FontCompactor::ContourKeyType,Scaleform::GFx::FontCompactor::ContourKeyType,Scaleform::GFx::FontCompactor::ContourKeyType,Scaleform::AllocatorGH<Scaleform::GFx::FontCompactor::ContourKeyType,261>,Scaleform::HashsetCachedEntry<Scaleform::GFx::FontCompactor::ContourKeyType,Scaleform::GFx::FontCompactor::ContourKeyType> >::TableType *pTable; // rdx
  unsigned __int64 v39; // r12
  __int64 v40; // rsi
  __int64 EntryCount; // rdi
  Scaleform::HashSetBase<Scaleform::GFx::FontCompactor::ContourKeyType,Scaleform::GFx::FontCompactor::ContourKeyType,Scaleform::GFx::FontCompactor::ContourKeyType,Scaleform::AllocatorGH<Scaleform::GFx::FontCompactor::ContourKeyType,261>,Scaleform::HashsetCachedEntry<Scaleform::GFx::FontCompactor::ContourKeyType,Scaleform::GFx::FontCompactor::ContourKeyType> >::TableType *v42; // rbx
  Scaleform::HashSetBase<Scaleform::GFx::FontCompactor::ContourKeyType,Scaleform::GFx::FontCompactor::ContourKeyType,Scaleform::GFx::FontCompactor::ContourKeyType,Scaleform::AllocatorGH<Scaleform::GFx::FontCompactor::ContourKeyType,261>,Scaleform::HashsetCachedEntry<Scaleform::GFx::FontCompactor::ContourKeyType,Scaleform::GFx::FontCompactor::ContourKeyType> >::TableType *v43; // rdi
  Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> *Data; // rcx
  unsigned int v45; // eax
  unsigned __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rcx
  unsigned __int64 v49; // rax
  Scaleform::HashSetBase<Scaleform::GFx::FontCompactor::GlyphKeyType,Scaleform::GFx::FontCompactor::GlyphKeyType,Scaleform::GFx::FontCompactor::GlyphKeyType,Scaleform::AllocatorGH<Scaleform::GFx::FontCompactor::ContourKeyType,261>,Scaleform::HashsetCachedEntry<Scaleform::GFx::FontCompactor::GlyphKeyType,Scaleform::GFx::FontCompactor::GlyphKeyType> >::TableType *v50; // r8
  signed __int64 v51; // rax
  Scaleform::HashSetBase<Scaleform::GFx::FontCompactor::GlyphKeyType,Scaleform::GFx::FontCompactor::GlyphKeyType,Scaleform::GFx::FontCompactor::GlyphKeyType,Scaleform::AllocatorGH<Scaleform::GFx::FontCompactor::ContourKeyType,261>,Scaleform::HashsetCachedEntry<Scaleform::GFx::FontCompactor::GlyphKeyType,Scaleform::GFx::FontCompactor::GlyphKeyType> >::TableType *v52; // rax
  Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> *v53; // rdx
  unsigned int FontStartGlyphs; // er9
  unsigned int FontNumGlyphs; // er10
  Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> *v56; // rax
  unsigned int FontTotalGlyphBytes; // er10
  unsigned int v58; // er9
  Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> *v59; // rax
  Scaleform::ArrayPagedBase<Scaleform::GFx::FontCompactor::KerningPairType,6,64,Scaleform::AllocatorPagedGH_POD<Scaleform::GFx::FontCompactor::KerningPairType,261> > *p_GlyphInfoTable; // r13
  unsigned __int64 v61; // rbx
  int v; // [rsp+30h] [rbp-68h] BYREF
  unsigned int v63; // [rsp+34h] [rbp-64h]
  Scaleform::GFx::FontCompactor::KerningPairType v64; // [rsp+38h] [rbp-60h]
  Scaleform::GFx::FontCompactor::GlyphKeyType key; // [rsp+40h] [rbp-58h] BYREF
  int x1; // [rsp+A0h] [rbp+8h] BYREF
  bool v67; // [rsp+A8h] [rbp+10h]
  int y1; // [rsp+B0h] [rbp+18h] BYREF
  int x2; // [rsp+B8h] [rbp+20h] BYREF

  v67 = mergeContours;
  v3 = 0;
  *(_DWORD *)&v64.Char1 = LOWORD(this->FontNumGlyphs);
  Size = this->Encoder.Data->Size;
  v63 = Size;
  v64.Adjustment = Size;
  if ( this->TmpContours.Size )
    Scaleform::GFx::FontCompactor::normalizeLastContour(this);
  Scaleform::GFx::FontCompactor::computeBounds(this, &x1, &y1, &x2, &v);
  Scaleform::GFx::PathDataEncoder<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261>>::WriteSInt15(
    &this->Encoder,
    x1);
  Scaleform::GFx::PathDataEncoder<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261>>::WriteSInt15(
    &this->Encoder,
    y1);
  Scaleform::GFx::PathDataEncoder<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261>>::WriteSInt15(
    &this->Encoder,
    x2);
  Scaleform::GFx::PathDataEncoder<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261>>::WriteSInt15(&this->Encoder, v);
  Scaleform::GFx::PathDataEncoder<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261>>::WriteUInt15(
    &this->Encoder,
    this->TmpContours.Size);
  v5 = this->TmpContours.Size;
  v6 = 0;
  LOBYTE(x1) = 0;
  if ( v5 )
  {
    v7 = 0i64;
    y1 = 0;
    while ( 1 )
    {
      v8 = v7 >> 6;
      v9 = v7 & 0x3F;
      v10 = 1;
      v11 = 0;
      v12 = this->TmpContours.Pages[v8];
      DataSize = v12[v9].DataSize;
      v14 = &v12[v9];
      if ( DataSize > 1 )
      {
        v15 = v14->DataStart + 1;
        do
        {
          ++v11;
          if ( (this->TmpVertices.Pages[(unsigned __int64)v15 >> 6][v15 & 0x3F].x & 1) != 0 )
          {
            ++v10;
            ++v15;
          }
          ++v10;
          ++v15;
        }
        while ( v10 < DataSize );
      }
      DataStart = v14->DataStart;
      v17 = DataStart & 0x3F;
      v18 = this->TmpVertices.Pages[DataStart >> 6];
      y = v18[v17].y;
      v20 = v18[v17].x >> 1;
      Scaleform::GFx::PathDataEncoder<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261>>::WriteSInt15(
        &this->Encoder,
        v20);
      Scaleform::GFx::PathDataEncoder<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261>>::WriteSInt15(
        &this->Encoder,
        y);
      x2 = this->Encoder.Data->Size;
      Scaleform::GFx::PathDataEncoder<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261>>::WriteUInt30(
        &this->Encoder,
        2 * v11);
      for ( i = 1; i < v14->DataSize; ++i )
      {
        v22 = v14->DataStart;
        Pages = this->TmpVertices.Pages;
        v24 = ((unsigned __int8)v14->DataStart + (_BYTE)i) & 0x3F;
        v25 = Pages[(unsigned __int64)(v14->DataStart + i) >> 6];
        x = v25[v24].x;
        v27 = &v25[v24];
        if ( (x & 1) != 0 )
        {
          v28 = ((_BYTE)v22 + (_BYTE)++i) & 0x3F;
          v29 = Pages[(unsigned __int64)(v22 + i) >> 6];
          v30 = v29[v28].y;
          v31 = v29[v28].x >> 1;
          Scaleform::GFx::PathDataEncoder<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261>>::WriteQuad(
            &this->Encoder,
            (x >> 1) - v20,
            v27->y - y,
            v31 - (x >> 1),
            v30 - v27->y);
          v20 = v31;
          y = v30;
        }
        else
        {
          v32 = v27->y;
          p_Encoder = &this->Encoder;
          v34 = x >> 1;
          if ( v34 == v20 )
          {
            Scaleform::GFx::PathDataEncoder<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261>>::WriteVLine(
              p_Encoder,
              v32 - y);
          }
          else
          {
            v35 = v34 - v20;
            if ( v32 == y )
              Scaleform::GFx::PathDataEncoder<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261>>::WriteHLine(
                p_Encoder,
                v35);
            else
              Scaleform::GFx::PathDataEncoder<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261>>::WriteLine(
                p_Encoder,
                v35,
                v32 - y);
          }
          v20 = v34;
          y = v32;
        }
      }
      if ( v67 )
      {
        v36 = (unsigned int)x2;
        key.pFont = this;
        v37 = Scaleform::GFx::FontCompactor::ComputePathHash(this, x2);
        pTable = this->ContourHash.pTable;
        v39 = v37;
        key.HashValue = v37;
        key.DataStart = v36;
        if ( !pTable )
          goto LABEL_47;
        v40 = v37 & pTable->SizeMask;
        EntryCount = v40;
        v42 = &pTable[2 * v40 + 1];
        if ( v42->EntryCount == -2i64 || v42->SizeMask != v40 )
          goto LABEL_47;
        while ( v42->SizeMask != v40
             || !Scaleform::GFx::FontCompactor::PathsEqual(
                   (Scaleform::GFx::FontCompactor *)v42[1].EntryCount,
                   HIDWORD(v42[1].SizeMask),
                   this,
                   v36) )
        {
          EntryCount = v42->EntryCount;
          if ( v42->EntryCount == -1i64 )
            goto LABEL_47;
          v42 = &this->ContourHash.pTable[2 * EntryCount + 1];
        }
        if ( EntryCount < 0 || (v43 = &this->ContourHash.pTable[2 * EntryCount + 2]) == 0i64 )
        {
LABEL_47:
          Scaleform::HashSetBase<Scaleform::GFx::FontCompactor::ContourKeyType,Scaleform::GFx::FontCompactor::ContourKeyType,Scaleform::GFx::FontCompactor::ContourKeyType,Scaleform::AllocatorGH<Scaleform::GFx::FontCompactor::ContourKeyType,261>,Scaleform::HashsetCachedEntry<Scaleform::GFx::FontCompactor::ContourKeyType,Scaleform::GFx::FontCompactor::ContourKeyType>>::add<Scaleform::GFx::FontCompactor::ContourKeyType>(
            (Scaleform::HashSetBase<Scaleform::GFx::FontCompactor::GlyphKeyType,Scaleform::GFx::FontCompactor::GlyphKeyType,Scaleform::GFx::FontCompactor::GlyphKeyType,Scaleform::AllocatorGH<Scaleform::GFx::FontCompactor::ContourKeyType,261>,Scaleform::HashsetCachedEntry<Scaleform::GFx::FontCompactor::GlyphKeyType,Scaleform::GFx::FontCompactor::GlyphKeyType> > *)&this->ContourHash,
            &this->ContourHash,
            &key,
            v39);
          v6 = 1;
          LOBYTE(x1) = 1;
          goto LABEL_34;
        }
        Data = this->Encoder.Data;
        if ( v36 < Data->Size )
          Data->Size = v36;
        Scaleform::GFx::PathDataEncoder<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261>>::WriteUInt30(
          &this->Encoder,
          (2 * HIDWORD(v43->SizeMask)) | 1);
      }
      v6 = x1;
LABEL_34:
      v3 = 0;
      v7 = (unsigned int)++y1;
      if ( (unsigned int)y1 >= this->TmpContours.Size )
      {
        Size = v63;
        break;
      }
    }
  }
  ++this->FontNumGlyphs;
  if ( v67 && !v6 )
  {
    v45 = Scaleform::GFx::FontCompactor::navigateToEndGlyph(this, Size);
    if ( Size < v45 )
    {
      v46 = Size;
      v47 = v45 - Size;
      do
      {
        v48 = v46 & 0xFFF;
        v49 = v46++ >> 12;
        v3 = this->Decoder.Data->Pages[v49][v48] ^ (33 * v3);
        --v47;
      }
      while ( v47 );
    }
    v50 = this->GlyphHash.pTable;
    key.pFont = this;
    key.HashValue = v3;
    key.DataStart = Size;
    if ( v50
      && (v51 = Scaleform::HashSetBase<Scaleform::GFx::FontCompactor::GlyphKeyType,Scaleform::GFx::FontCompactor::GlyphKeyType,Scaleform::GFx::FontCompactor::GlyphKeyType,Scaleform::AllocatorGH<Scaleform::GFx::FontCompactor::ContourKeyType,261>,Scaleform::HashsetCachedEntry<Scaleform::GFx::FontCompactor::GlyphKeyType,Scaleform::GFx::FontCompactor::GlyphKeyType>>::findIndexCore<Scaleform::GFx::FontCompactor::GlyphKeyType>(
                  &this->GlyphHash,
                  &key,
                  v3 & v50->SizeMask),
          v51 >= 0)
      && (v52 = &this->GlyphHash.pTable[2 * v51 + 2]) != 0i64 )
    {
      v53 = this->Encoder.Data;
      if ( Size < v53->Size )
        v53->Size = Size;
      v64.Adjustment = HIDWORD(v52->SizeMask);
    }
    else
    {
      Scaleform::HashSetBase<Scaleform::GFx::FontCompactor::ContourKeyType,Scaleform::GFx::FontCompactor::ContourKeyType,Scaleform::GFx::FontCompactor::ContourKeyType,Scaleform::AllocatorGH<Scaleform::GFx::FontCompactor::ContourKeyType,261>,Scaleform::HashsetCachedEntry<Scaleform::GFx::FontCompactor::ContourKeyType,Scaleform::GFx::FontCompactor::ContourKeyType>>::add<Scaleform::GFx::FontCompactor::ContourKeyType>(
        &this->GlyphHash,
        &this->GlyphHash,
        &key,
        v3);
    }
  }
  FontStartGlyphs = this->FontStartGlyphs;
  FontNumGlyphs = this->FontNumGlyphs;
  v56 = this->Encoder.Data;
  this->FontTotalGlyphBytes += LODWORD(v56->Size) - Size;
  v56->Pages[(unsigned __int64)FontStartGlyphs >> 12][FontStartGlyphs & 0xFFF] = FontNumGlyphs;
  this->Encoder.Data->Pages[(unsigned __int64)(FontStartGlyphs + 1) >> 12][((_WORD)FontStartGlyphs + 1) & 0xFFF] = BYTE1(FontNumGlyphs);
  this->Encoder.Data->Pages[(unsigned __int64)(FontStartGlyphs + 2) >> 12][((_WORD)FontStartGlyphs + 2) & 0xFFF] = BYTE2(FontNumGlyphs);
  this->Encoder.Data->Pages[(unsigned __int64)(FontStartGlyphs + 3) >> 12][((_WORD)FontStartGlyphs + 3) & 0xFFF] = HIBYTE(FontNumGlyphs);
  FontTotalGlyphBytes = this->FontTotalGlyphBytes;
  v58 = this->FontStartGlyphs + 4;
  this->Encoder.Data->Pages[(unsigned __int64)v58 >> 12][(LOWORD(this->FontStartGlyphs) + 4) & 0xFFF] = FontTotalGlyphBytes;
  this->Encoder.Data->Pages[(unsigned __int64)(v58 + 1) >> 12][((_WORD)v58 + 1) & 0xFFF] = BYTE1(FontTotalGlyphBytes);
  this->Encoder.Data->Pages[(unsigned __int64)(v58 + 2) >> 12][((_WORD)v58 + 2) & 0xFFF] = BYTE2(FontTotalGlyphBytes);
  v59 = this->Encoder.Data;
  p_GlyphInfoTable = (Scaleform::ArrayPagedBase<Scaleform::GFx::FontCompactor::KerningPairType,6,64,Scaleform::AllocatorPagedGH_POD<Scaleform::GFx::FontCompactor::KerningPairType,261> > *)&this->GlyphInfoTable;
  v59->Pages[(unsigned __int64)(v58 + 3) >> 12][((_WORD)v58 + 3) & 0xFFF] = HIBYTE(FontTotalGlyphBytes);
  v61 = p_GlyphInfoTable->Size >> 6;
  if ( v61 >= p_GlyphInfoTable->NumPages )
    Scaleform::ArrayPagedBase<Scaleform::GFx::FontCompactor::GlyphInfoType,6,64,Scaleform::AllocatorPagedGH_POD<Scaleform::GFx::FontCompactor::GlyphInfoType,261>>::allocatePage(
      p_GlyphInfoTable,
      p_GlyphInfoTable->Size >> 6);
  p_GlyphInfoTable->Pages[v61][p_GlyphInfoTable->Size & 0x3F] = v64;
  ++p_GlyphInfoTable->Size;
}

char __fastcall Scaleform::GFx::FontCompactor::GlyphsEqual(
        Scaleform::GFx::FontCompactor *this,
        unsigned int pos,
        const Scaleform::GFx::FontCompactor *cmpFont,
        unsigned int cmpPos)
{
  unsigned int v6; // ebx
  unsigned int v8; // esi

  v6 = pos;
  v8 = Scaleform::GFx::FontCompactor::navigateToEndGlyph(this, pos);
  if ( v8 - v6 != Scaleform::GFx::FontCompactor::navigateToEndGlyph((Scaleform::GFx::FontCompactor *)cmpFont, cmpPos)
                - cmpPos )
    return 0;
  if ( v6 < v8 )
  {
    while ( this->Decoder.Data->Pages[(unsigned __int64)v6 >> 12][v6 & 0xFFF] == cmpFont->Decoder.Data->Pages[(unsigned __int64)cmpPos >> 12][cmpPos & 0xFFF] )
    {
      ++v6;
      ++cmpPos;
      if ( v6 >= v8 )
        return 1;
    }
    return 0;
  }
  return 1;
}

void __fastcall Scaleform::GFx::FontCompactor::LineTo(Scaleform::GFx::FontCompactor *this, __int16 x, __int16 y)
{
  Scaleform::GFx::FontCompactor::VertexType v4; // eax
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rcx
  Scaleform::GFx::FontCompactor::ContourType *v7; // rax
  Scaleform::GFx::FontCompactor::VertexType v8; // [rsp+30h] [rbp+8h]

  if ( !this->TmpContours.Pages[(this->TmpContours.Size - 1) >> 6][(LODWORD(this->TmpContours.Size) - 1) & 0x3F].DataSize
    || (v4 = this->TmpVertices.Pages[(this->TmpVertices.Size - 1) >> 6][(LODWORD(this->TmpVertices.Size) - 1) & 0x3F],
        x != v4.x >> 1)
    || y != v4.y )
  {
    v5 = this->TmpVertices.Size >> 6;
    v8.x = 2 * x;
    v8.y = y;
    if ( v5 >= this->TmpVertices.NumPages )
      Scaleform::ArrayPagedBase<Scaleform::GFx::FontCompactor::VertexType,6,64,Scaleform::AllocatorPagedGH_POD<Scaleform::GFx::FontCompactor::VertexType,261>>::allocatePage(
        &this->TmpVertices,
        v5);
    this->TmpVertices.Pages[v5][this->TmpVertices.Size & 0x3F] = v8;
    ++this->TmpVertices.Size;
    v6 = this->TmpContours.Size - 1;
    v7 = this->TmpContours.Pages[v6 >> 6];
    ++v7[v6 & 0x3F].DataSize;
  }
}

void __fastcall Scaleform::GFx::FontCompactor::MoveTo(Scaleform::GFx::FontCompactor *this, __int16 x, __int16 y)
{
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rdi
  Scaleform::GFx::FontCompactor::ContourType v8; // [rsp+40h] [rbp+8h]
  Scaleform::GFx::FontCompactor::VertexType v9; // [rsp+48h] [rbp+10h]

  if ( this->TmpContours.Size )
    Scaleform::GFx::FontCompactor::normalizeLastContour(this);
  v6 = this->TmpContours.Size >> 6;
  v8.DataStart = this->TmpVertices.Size;
  v8.DataSize = 1;
  if ( v6 >= this->TmpContours.NumPages )
    Scaleform::ArrayPagedBase<Scaleform::GFx::FontCompactor::GlyphInfoType,6,64,Scaleform::AllocatorPagedGH_POD<Scaleform::GFx::FontCompactor::GlyphInfoType,261>>::allocatePage(
      (Scaleform::ArrayPagedBase<Scaleform::GFx::FontCompactor::KerningPairType,6,64,Scaleform::AllocatorPagedGH_POD<Scaleform::GFx::FontCompactor::KerningPairType,261> > *)&this->TmpContours,
      v6);
  v9.x = 2 * x;
  v9.y = y;
  this->TmpContours.Pages[v6][this->TmpContours.Size & 0x3F] = v8;
  ++this->TmpContours.Size;
  v7 = this->TmpVertices.Size >> 6;
  if ( v7 >= this->TmpVertices.NumPages )
    Scaleform::ArrayPagedBase<Scaleform::GFx::FontCompactor::VertexType,6,64,Scaleform::AllocatorPagedGH_POD<Scaleform::GFx::FontCompactor::VertexType,261>>::allocatePage(
      &this->TmpVertices,
      this->TmpVertices.Size >> 6);
  this->TmpVertices.Pages[v7][this->TmpVertices.Size & 0x3F] = v9;
  ++this->TmpVertices.Size;
}

char __fastcall Scaleform::GFx::FontCompactor::PathsEqual(
        Scaleform::GFx::FontCompactor *this,
        unsigned int pos,
        const Scaleform::GFx::FontCompactor *cmpPath,
        unsigned int cmpPos)
{
  Scaleform::GFx::PathDataDecoder<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> > *p_Decoder; // r14
  unsigned int v7; // ebp
  unsigned int v8; // er15
  unsigned int v10; // er12
  unsigned __int8 **Pages; // rsi
  unsigned __int8 **v12; // r14
  unsigned int v13; // er8
  int v14; // edi
  char *v15; // rax
  __int64 v16; // r9
  __int64 v17; // rdx
  unsigned __int64 v18; // rcx
  unsigned int v19; // edx
  char *v20; // r8
  unsigned int v21; // edi
  __int64 v22; // rax
  int v23; // ebx
  __int64 v24; // r9
  __int64 v25; // rcx
  unsigned __int64 v26; // rax
  int v27; // ebx
  unsigned int v; // [rsp+20h] [rbp-78h] BYREF
  unsigned int v29; // [rsp+24h] [rbp-74h] BYREF
  unsigned __int8 Buf2; // [rsp+28h] [rbp-70h] BYREF
  char v31; // [rsp+29h] [rbp-6Fh] BYREF
  unsigned __int8 Buf1; // [rsp+38h] [rbp-60h] BYREF
  char v33; // [rsp+39h] [rbp-5Fh] BYREF

  p_Decoder = &this->Decoder;
  v7 = Scaleform::GFx::PathDataDecoder<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261>>::ReadUInt30(
         &this->Decoder,
         pos,
         &v)
     + pos;
  v8 = cmpPos
     + Scaleform::GFx::PathDataDecoder<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261>>::ReadUInt30(
         &cmpPath->Decoder,
         cmpPos,
         &v29);
  if ( v != v29 )
    return 0;
  v10 = v >> 1;
  if ( !(v >> 1) )
    return 1;
  Pages = p_Decoder->Data->Pages;
  v12 = cmpPath->Decoder.Data->Pages;
  while ( 1 )
  {
    v13 = v7 + 1;
    --v10;
    Buf1 = Pages[(unsigned __int64)v7 >> 12][v7 & 0xFFF];
    v14 = Scaleform::GFx::PathDataDecoder<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261>>::Sizes[Buf1 & 0xF];
    v15 = &v33;
    if ( Scaleform::GFx::PathDataDecoder<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261>>::Sizes[Buf1 & 0xF] )
    {
      v16 = Scaleform::GFx::PathDataDecoder<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261>>::Sizes[Buf1 & 0xF];
      do
      {
        ++v15;
        v17 = v13 & 0xFFF;
        v18 = (unsigned __int64)v13++ >> 12;
        *(v15 - 1) = Pages[v18][v17];
        --v16;
      }
      while ( v16 );
    }
    v19 = v8 + 1;
    v20 = &v31;
    v21 = v14 + 1;
    Buf2 = v12[(unsigned __int64)v8 >> 12][v8 & 0xFFF];
    v22 = Buf2 & 0xF;
    v23 = Scaleform::GFx::PathDataDecoder<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261>>::Sizes[v22];
    if ( Scaleform::GFx::PathDataDecoder<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261>>::Sizes[v22] )
    {
      v24 = Scaleform::GFx::PathDataDecoder<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261>>::Sizes[v22];
      do
      {
        ++v20;
        v25 = v19 & 0xFFF;
        v26 = (unsigned __int64)v19++ >> 12;
        *(v20 - 1) = v12[v26][v25];
        --v24;
      }
      while ( v24 );
    }
    v27 = v23 + 1;
    if ( v21 != v27 || memcmp(&Buf1, &Buf2, v21) )
      break;
    v7 += v21;
    v8 += v27;
    if ( !v10 )
      return 1;
  }
  return 0;
}

void __fastcall Scaleform::GFx::FontCompactor::QuadTo(
        Scaleform::GFx::FontCompactor *this,
        __int16 cx,
        __int16 cy,
        __int16 ax,
        __int16 ay)
{
  int v8; // eax
  unsigned __int64 v9; // rbp
  Scaleform::GFx::FontCompactor::VertexType v10; // eax
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rcx
  Scaleform::GFx::FontCompactor::ContourType *v13; // rax
  Scaleform::GFx::FontCompactor::VertexType v14; // [rsp+40h] [rbp+8h]
  Scaleform::GFx::FontCompactor::VertexType v15; // [rsp+40h] [rbp+8h]
  Scaleform::GFx::FontCompactor::VertexType v16; // [rsp+40h] [rbp+8h]

  if ( !this->TmpContours.Pages[(this->TmpContours.Size - 1) >> 6][(LODWORD(this->TmpContours.Size) - 1) & 0x3F].DataSize )
    goto LABEL_6;
  v14 = this->TmpVertices.Pages[(this->TmpVertices.Size - 1) >> 6][(LODWORD(this->TmpVertices.Size) - 1) & 0x3F];
  v8 = (ax - (v14.x >> 1)) * (cy - ay) - (ay - v14.y) * (cx - ax);
  if ( (ay - v14.y) * (cx - ax) - (ax - (v14.x >> 1)) * (cy - ay) >= 0 )
    v8 = (ay - v14.y) * (cx - ax) - (ax - (v14.x >> 1)) * (cy - ay);
  if ( v8 <= 5 )
  {
    Scaleform::GFx::FontCompactor::LineTo(this, ax, ay);
  }
  else
  {
LABEL_6:
    v15.y = cy;
    v9 = this->TmpVertices.Size >> 6;
    if ( v9 >= this->TmpVertices.NumPages )
      Scaleform::ArrayPagedBase<Scaleform::GFx::FontCompactor::VertexType,6,64,Scaleform::AllocatorPagedGH_POD<Scaleform::GFx::FontCompactor::VertexType,261>>::allocatePage(
        &this->TmpVertices,
        v9);
    v15.x = (2 * cx) | 1;
    v10 = v15;
    v16.x = (2 * ax) | 1;
    v16.y = ay;
    this->TmpVertices.Pages[v9][this->TmpVertices.Size & 0x3F] = v10;
    v11 = ++this->TmpVertices.Size >> 6;
    if ( v11 >= this->TmpVertices.NumPages )
      Scaleform::ArrayPagedBase<Scaleform::GFx::FontCompactor::VertexType,6,64,Scaleform::AllocatorPagedGH_POD<Scaleform::GFx::FontCompactor::VertexType,261>>::allocatePage(
        &this->TmpVertices,
        this->TmpVertices.Size >> 6);
    this->TmpVertices.Pages[v11][this->TmpVertices.Size & 0x3F] = v16;
    ++this->TmpVertices.Size;
    v12 = this->TmpContours.Size - 1;
    v13 = this->TmpContours.Pages[v12 >> 6];
    v13[v12 & 0x3F].DataSize += 2;
  }
}

void __fastcall Scaleform::GFx::FontCompactor::StartFont(
        Scaleform::GFx::FontCompactor *this,
        const char *name,
        unsigned int flags,
        unsigned int nominalSize,
        int ascent,
        int descent,
        int leading)
{
  char v7; // bp
  const char *i; // r14
  Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> *Data; // rbx
  unsigned __int64 v13; // rdi
  Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> *v14; // rdi
  unsigned __int64 v15; // rbx
  Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> *v16; // rax
  Scaleform::HashSetBase<unsigned short,Scaleform::FixedSizeHash<unsigned short>,Scaleform::FixedSizeHash<unsigned short>,Scaleform::AllocatorGH<unsigned short,2>,Scaleform::HashsetCachedEntry<unsigned short,Scaleform::FixedSizeHash<unsigned short> > >::TableType *pTable; // rax
  __int64 v18; // rcx
  __int64 v19; // rdx
  Scaleform::HashSetBase<unsigned short,Scaleform::FixedSizeHash<unsigned short>,Scaleform::FixedSizeHash<unsigned short>,Scaleform::AllocatorGH<unsigned short,2>,Scaleform::HashsetCachedEntry<unsigned short,Scaleform::FixedSizeHash<unsigned short> > >::TableType *v20; // rax

  v7 = *name;
  for ( i = name; *i; v7 = *i )
  {
    Data = this->Encoder.Data;
    v13 = Data->Size >> 12;
    if ( v13 >= Data->NumPages )
      Scaleform::ArrayPagedBase<unsigned char,12,256,Scaleform::AllocatorPagedLH_POD<unsigned char,261>>::allocatePage(
        this->Encoder.Data,
        Data->Size >> 12);
    ++i;
    Data->Pages[v13][Data->Size & 0xFFF] = v7;
    ++Data->Size;
  }
  v14 = this->Encoder.Data;
  v15 = v14->Size >> 12;
  if ( v15 >= v14->NumPages )
    Scaleform::ArrayPagedBase<unsigned char,12,256,Scaleform::AllocatorPagedLH_POD<unsigned char,261>>::allocatePage(
      this->Encoder.Data,
      v14->Size >> 12);
  v14->Pages[v15][v14->Size & 0xFFF] = 0;
  ++v14->Size;
  this->FontMetricsPos = this->Encoder.Data->Size;
  Scaleform::GFx::PathDataEncoder<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261>>::WriteUInt16fixlen(
    &this->Encoder,
    flags);
  Scaleform::GFx::PathDataEncoder<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261>>::WriteUInt16fixlen(
    &this->Encoder,
    nominalSize);
  Scaleform::GFx::PathDataEncoder<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261>>::WriteSInt16fixlen(
    &this->Encoder,
    ascent);
  Scaleform::GFx::PathDataEncoder<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261>>::WriteSInt16fixlen(
    &this->Encoder,
    descent);
  Scaleform::GFx::PathDataEncoder<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261>>::WriteSInt16fixlen(
    &this->Encoder,
    leading);
  v16 = this->Encoder.Data;
  *(_QWORD *)&this->FontNumGlyphs = 0i64;
  this->FontStartGlyphs = v16->Size;
  Scaleform::GFx::PathDataEncoder<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261>>::WriteUInt32fixlen(
    &this->Encoder,
    0);
  Scaleform::GFx::PathDataEncoder<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261>>::WriteUInt32fixlen(
    &this->Encoder,
    0);
  pTable = this->GlyphCodes.pTable;
  if ( pTable )
  {
    v18 = 0i64;
    v19 = pTable->SizeMask + 1;
    do
    {
      v20 = this->GlyphCodes.pTable;
      if ( *(unsigned __int64 *)((char *)&v20[1].EntryCount + v18) != -2i64 )
        *(unsigned __int64 *)((char *)&v20[1].EntryCount + v18) = -2i64;
      v18 += 24i64;
      --v19;
    }
    while ( v19 );
    if ( this->GlyphCodes.pTable )
      ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
    this->GlyphCodes.pTable = 0i64;
  }
  this->KerningTable.Size = 0i64;
  this->GlyphInfoTable.Size = 0i64;
}

void __fastcall Scaleform::GFx::FontCompactor::StartGlyph(Scaleform::GFx::FontCompactor *this)
{
  this->TmpVertices.Size = 0i64;
  this->TmpContours.Size = 0i64;
}

void __fastcall Scaleform::GFx::FontCompactor::UpdateMetrics(
        Scaleform::GFx::FontCompactor *this,
        int ascent,
        int descent,
        int leading)
{
  __int16 v4; // si
  unsigned int v5; // ebx
  unsigned int v6; // er8
  unsigned int v7; // er8

  v4 = descent;
  v5 = this->FontMetricsPos + 4;
  this->Encoder.Data->Pages[(unsigned __int64)v5 >> 12][(LOWORD(this->FontMetricsPos) + 4) & 0xFFF] = ascent;
  this->Encoder.Data->Pages[(unsigned __int64)(v5 + 1) >> 12][((_WORD)v5 + 1) & 0xFFF] = BYTE1(ascent);
  v6 = this->FontMetricsPos + 6;
  this->Encoder.Data->Pages[(unsigned __int64)v6 >> 12][(LOWORD(this->FontMetricsPos) + 6) & 0xFFF] = v4;
  this->Encoder.Data->Pages[(unsigned __int64)(v6 + 1) >> 12][((_WORD)v6 + 1) & 0xFFF] = HIBYTE(v4);
  v7 = this->FontMetricsPos + 8;
  this->Encoder.Data->Pages[(unsigned __int64)v7 >> 12][(LOWORD(this->FontMetricsPos) + 8) & 0xFFF] = leading;
  this->Encoder.Data->Pages[(unsigned __int64)(v7 + 1) >> 12][((_WORD)v7 + 1) & 0xFFF] = BYTE1(leading);
}

__int64 __fastcall Scaleform::GFx::PathDataEncoder<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261>>::WriteHLine(
        Scaleform::GFx::PathDataEncoder<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> > *this,
        int x)
{
  Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> *Data; // rdi
  unsigned __int8 v5; // bp
  unsigned __int64 v6; // rsi
  int v7; // ebx
  Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> *v8; // rdi
  unsigned __int64 v9; // rsi
  __int64 result; // rax
  unsigned __int8 v11; // bp
  Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> *v12; // rdi
  int v13; // ebp
  unsigned __int64 v14; // rsi
  int v15; // ebx
  unsigned __int64 v16; // rsi

  Data = this->Data;
  v5 = 16 * x;
  v6 = this->Data->Size >> 12;
  if ( (unsigned int)(x + 2048) > 0xFFF )
  {
    v11 = v5 | 1;
    if ( v6 >= Data->NumPages )
      Scaleform::ArrayPagedBase<unsigned char,12,256,Scaleform::AllocatorPagedLH_POD<unsigned char,261>>::allocatePage(
        this->Data,
        this->Data->Size >> 12);
    Data->Pages[v6][Data->Size & 0xFFF] = v11;
    ++Data->Size;
    v12 = this->Data;
    v13 = x >> 4;
    v14 = this->Data->Size >> 12;
    if ( v14 >= this->Data->NumPages )
      Scaleform::ArrayPagedBase<unsigned char,12,256,Scaleform::AllocatorPagedLH_POD<unsigned char,261>>::allocatePage(
        this->Data,
        this->Data->Size >> 12);
    v15 = x >> 12;
    v12->Pages[v14][v12->Size & 0xFFF] = v13;
    ++v12->Size;
    v8 = this->Data;
    v16 = this->Data->Size >> 12;
    if ( v16 >= this->Data->NumPages )
      Scaleform::ArrayPagedBase<unsigned char,12,256,Scaleform::AllocatorPagedLH_POD<unsigned char,261>>::allocatePage(
        this->Data,
        this->Data->Size >> 12);
    v8->Pages[v16][v8->Size & 0xFFF] = v15;
    result = 3i64;
  }
  else
  {
    if ( v6 >= Data->NumPages )
      Scaleform::ArrayPagedBase<unsigned char,12,256,Scaleform::AllocatorPagedLH_POD<unsigned char,261>>::allocatePage(
        this->Data,
        this->Data->Size >> 12);
    v7 = x >> 4;
    Data->Pages[v6][Data->Size & 0xFFF] = v5;
    ++Data->Size;
    v8 = this->Data;
    v9 = this->Data->Size >> 12;
    if ( v9 >= this->Data->NumPages )
      Scaleform::ArrayPagedBase<unsigned char,12,256,Scaleform::AllocatorPagedLH_POD<unsigned char,261>>::allocatePage(
        this->Data,
        this->Data->Size >> 12);
    v8->Pages[v9][v8->Size & 0xFFF] = v7;
    result = 2i64;
  }
  ++v8->Size;
  return result;
}

__int64 __fastcall Scaleform::GFx::PathDataEncoder<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261>>::WriteLine(
        Scaleform::GFx::PathDataEncoder<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> > *this,
        int x,
        int y)
{
  Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> *v6; // r15
  unsigned __int8 v7; // r14
  unsigned __int64 v8; // rbp
  unsigned __int8 v9; // bl
  Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> *v10; // rdi
  unsigned __int64 v11; // rsi
  __int64 result; // rax
  Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> *v13; // r15
  unsigned __int64 v14; // rbp
  Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> *v15; // rbp
  unsigned __int8 v16; // bl
  unsigned __int64 v17; // r14
  int v18; // edi
  Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> *v19; // rbx
  unsigned __int64 v20; // rsi
  Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> *v21; // rbp
  unsigned __int64 v22; // r14
  Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> *v23; // rbp
  unsigned __int64 v24; // r14
  Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> *v25; // rbp
  unsigned __int8 v26; // bl
  unsigned __int64 v27; // r14
  int v28; // edi
  unsigned __int64 v29; // rsi
  Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> *Data; // rbp
  unsigned __int64 v31; // r14
  Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> *v32; // rbp
  unsigned __int64 v33; // r14
  Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> *v34; // rbp
  unsigned __int8 v35; // bl
  unsigned __int64 v36; // r14
  unsigned __int8 *v37; // rax
  int v38; // er14
  Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> *v39; // rbx
  unsigned __int64 v40; // rbp
  int v41; // edi
  unsigned __int64 v42; // rsi

  if ( (unsigned int)(x + 32) > 0x3F || (unsigned int)(y + 32) > 0x3F )
  {
    if ( (unsigned int)(x + 512) > 0x3FF || (unsigned int)(y + 512) > 0x3FF )
    {
      if ( (unsigned int)(x + 0x2000) > 0x3FFF || (unsigned int)(y + 0x2000) > 0x3FFF )
      {
        Data = this->Data;
        v31 = this->Data->Size >> 12;
        if ( v31 >= this->Data->NumPages )
          Scaleform::ArrayPagedBase<unsigned char,12,256,Scaleform::AllocatorPagedLH_POD<unsigned char,261>>::allocatePage(
            this->Data,
            this->Data->Size >> 12);
        Data->Pages[v31][Data->Size & 0xFFF] = (16 * x) | 7;
        ++Data->Size;
        v32 = this->Data;
        v33 = this->Data->Size >> 12;
        if ( v33 >= this->Data->NumPages )
          Scaleform::ArrayPagedBase<unsigned char,12,256,Scaleform::AllocatorPagedLH_POD<unsigned char,261>>::allocatePage(
            this->Data,
            this->Data->Size >> 12);
        v32->Pages[v33][v32->Size & 0xFFF] = x >> 4;
        ++v32->Size;
        v34 = this->Data;
        v35 = ((_BYTE)y << 6) | (x >> 12) & 0x3F;
        v36 = this->Data->Size >> 12;
        if ( v36 >= this->Data->NumPages )
          Scaleform::ArrayPagedBase<unsigned char,12,256,Scaleform::AllocatorPagedLH_POD<unsigned char,261>>::allocatePage(
            this->Data,
            this->Data->Size >> 12);
        v37 = v34->Pages[v36];
        v38 = y >> 2;
        v37[v34->Size & 0xFFF] = v35;
        ++v34->Size;
        v39 = this->Data;
        v40 = this->Data->Size >> 12;
        if ( v40 >= this->Data->NumPages )
          Scaleform::ArrayPagedBase<unsigned char,12,256,Scaleform::AllocatorPagedLH_POD<unsigned char,261>>::allocatePage(
            this->Data,
            this->Data->Size >> 12);
        v41 = y >> 10;
        v39->Pages[v40][v39->Size & 0xFFF] = v38;
        ++v39->Size;
        v19 = this->Data;
        v42 = this->Data->Size >> 12;
        if ( v42 >= v19->NumPages )
          Scaleform::ArrayPagedBase<unsigned char,12,256,Scaleform::AllocatorPagedLH_POD<unsigned char,261>>::allocatePage(
            v19,
            v42);
        v19->Pages[v42][v19->Size & 0xFFF] = v41;
        result = 5i64;
      }
      else
      {
        v21 = this->Data;
        v22 = this->Data->Size >> 12;
        if ( v22 >= this->Data->NumPages )
          Scaleform::ArrayPagedBase<unsigned char,12,256,Scaleform::AllocatorPagedLH_POD<unsigned char,261>>::allocatePage(
            this->Data,
            this->Data->Size >> 12);
        v21->Pages[v22][v21->Size & 0xFFF] = (16 * x) | 6;
        ++v21->Size;
        v23 = this->Data;
        v24 = this->Data->Size >> 12;
        if ( v24 >= this->Data->NumPages )
          Scaleform::ArrayPagedBase<unsigned char,12,256,Scaleform::AllocatorPagedLH_POD<unsigned char,261>>::allocatePage(
            this->Data,
            this->Data->Size >> 12);
        v23->Pages[v24][v23->Size & 0xFFF] = x >> 4;
        ++v23->Size;
        v25 = this->Data;
        v26 = (4 * y) | (x >> 12) & 3;
        v27 = this->Data->Size >> 12;
        if ( v27 >= this->Data->NumPages )
          Scaleform::ArrayPagedBase<unsigned char,12,256,Scaleform::AllocatorPagedLH_POD<unsigned char,261>>::allocatePage(
            this->Data,
            this->Data->Size >> 12);
        v28 = y >> 6;
        v25->Pages[v27][v25->Size & 0xFFF] = v26;
        ++v25->Size;
        v19 = this->Data;
        v29 = this->Data->Size >> 12;
        if ( v29 >= v19->NumPages )
          Scaleform::ArrayPagedBase<unsigned char,12,256,Scaleform::AllocatorPagedLH_POD<unsigned char,261>>::allocatePage(
            v19,
            v29);
        v19->Pages[v29][v19->Size & 0xFFF] = v28;
        result = 4i64;
      }
    }
    else
    {
      v13 = this->Data;
      v14 = this->Data->Size >> 12;
      if ( v14 >= this->Data->NumPages )
        Scaleform::ArrayPagedBase<unsigned char,12,256,Scaleform::AllocatorPagedLH_POD<unsigned char,261>>::allocatePage(
          this->Data,
          this->Data->Size >> 12);
      v13->Pages[v14][v13->Size & 0xFFF] = (16 * x) | 5;
      ++v13->Size;
      v15 = this->Data;
      v16 = ((_BYTE)y << 6) | (x >> 4) & 0x3F;
      v17 = this->Data->Size >> 12;
      if ( v17 >= this->Data->NumPages )
        Scaleform::ArrayPagedBase<unsigned char,12,256,Scaleform::AllocatorPagedLH_POD<unsigned char,261>>::allocatePage(
          this->Data,
          this->Data->Size >> 12);
      v18 = y >> 2;
      v15->Pages[v17][v15->Size & 0xFFF] = v16;
      ++v15->Size;
      v19 = this->Data;
      v20 = this->Data->Size >> 12;
      if ( v20 >= v19->NumPages )
        Scaleform::ArrayPagedBase<unsigned char,12,256,Scaleform::AllocatorPagedLH_POD<unsigned char,261>>::allocatePage(
          v19,
          v20);
      v19->Pages[v20][v19->Size & 0xFFF] = v18;
      result = 3i64;
    }
    ++v19->Size;
  }
  else
  {
    v6 = this->Data;
    v7 = (16 * x) | 4;
    v8 = this->Data->Size >> 12;
    if ( v8 >= this->Data->NumPages )
      Scaleform::ArrayPagedBase<unsigned char,12,256,Scaleform::AllocatorPagedLH_POD<unsigned char,261>>::allocatePage(
        this->Data,
        this->Data->Size >> 12);
    v9 = (4 * y) | (x >> 4) & 3;
    v6->Pages[v8][v6->Size & 0xFFF] = v7;
    ++v6->Size;
    v10 = this->Data;
    v11 = this->Data->Size >> 12;
    if ( v11 >= v10->NumPages )
      Scaleform::ArrayPagedBase<unsigned char,12,256,Scaleform::AllocatorPagedLH_POD<unsigned char,261>>::allocatePage(
        v10,
        v11);
    v10->Pages[v11][v10->Size & 0xFFF] = v9;
    result = 2i64;
    ++v10->Size;
  }
  return result;
}

__int64 __fastcall Scaleform::GFx::PathDataEncoder<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261>>::WriteQuad(
        Scaleform::GFx::PathDataEncoder<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> > *this,
        int cx,
        int cy,
        int ax,
        int ay)
{
  int v6; // eax
  int v7; // ecx
  Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> *v11; // r15
  unsigned __int64 v12; // r12
  char v13; // bl
  Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> *v14; // rsi
  unsigned __int8 v15; // bl
  unsigned __int64 v16; // r15
  unsigned __int8 v17; // bp
  Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> *v18; // rbx
  unsigned __int64 v19; // rdi
  __int64 result; // rax
  Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> *v21; // r15
  unsigned __int64 v22; // r12
  unsigned __int8 *v23; // rax
  unsigned __int8 v24; // r12
  Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> *v25; // rsi
  unsigned __int64 v26; // r15
  Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> *v27; // rsi
  unsigned __int8 v28; // bl
  unsigned __int64 v29; // r15
  unsigned __int8 v30; // di
  unsigned __int64 v31; // rsi
  Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> *v32; // r15
  unsigned __int64 v33; // r12
  unsigned __int8 *v34; // rax
  unsigned __int8 v35; // r12
  Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> *v36; // rsi
  unsigned __int64 v37; // r15
  Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> *v38; // rsi
  unsigned __int8 v39; // bl
  unsigned __int64 v40; // r15
  Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> *v41; // rbx
  unsigned __int8 v42; // si
  unsigned __int64 v43; // rdi
  unsigned __int64 v44; // rdi
  Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> *v45; // r15
  unsigned __int64 v46; // r12
  unsigned __int8 *v47; // rax
  unsigned __int8 v48; // r12
  Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> *v49; // rsi
  unsigned __int64 v50; // r15
  Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> *v51; // rsi
  unsigned __int64 v52; // r15
  Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> *v53; // rsi
  unsigned __int8 v54; // bl
  unsigned __int64 v55; // r15
  Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> *v56; // rbx
  unsigned __int8 v57; // di
  unsigned __int64 v58; // rsi
  unsigned __int64 v59; // rdi
  Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> *v60; // r15
  unsigned __int64 v61; // r12
  Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> *v62; // r15
  unsigned __int64 v63; // r12
  Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> *v64; // r15
  unsigned __int8 v65; // si
  unsigned __int64 v66; // r12
  Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> *v67; // rsi
  unsigned __int8 v68; // bl
  unsigned __int64 v69; // r15
  Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> *v70; // rbx
  unsigned __int64 v71; // rsi
  Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> *v72; // rbx
  unsigned __int8 v73; // di
  unsigned __int64 v74; // rsi
  unsigned __int64 v75; // rdi
  Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> *v76; // r15
  unsigned __int64 v77; // r12
  Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> *v78; // r15
  unsigned __int64 v79; // r12
  Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> *v80; // r15
  unsigned __int8 v81; // si
  unsigned __int64 v82; // r12
  Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> *v83; // rsi
  unsigned __int64 v84; // r15
  Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> *v85; // rsi
  unsigned __int8 v86; // bl
  unsigned __int64 v87; // r15
  Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> *v88; // rbx
  unsigned __int64 v89; // rsi
  Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> *v90; // rbx
  unsigned __int8 v91; // di
  unsigned __int64 v92; // rsi
  unsigned __int64 v93; // rdi
  Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> *v94; // r15
  unsigned __int64 v95; // r12
  Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> *v96; // r15
  unsigned __int64 v97; // r12
  Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> *v98; // r15
  unsigned __int8 v99; // si
  unsigned __int64 v100; // r12
  Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> *v101; // rsi
  unsigned __int64 v102; // r15
  Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> *v103; // rsi
  unsigned __int8 v104; // bl
  unsigned __int64 v105; // r15
  Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> *v106; // rbx
  unsigned __int64 v107; // rsi
  Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> *v108; // rbx
  unsigned __int8 v109; // di
  unsigned __int64 v110; // rsi
  Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> *v111; // rbx
  unsigned __int64 v112; // rdi
  unsigned __int64 v113; // rdi
  Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> *Data; // r15
  unsigned __int64 v115; // r12
  Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> *v116; // r15
  unsigned __int64 v117; // r12
  Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> *v118; // r15
  unsigned __int8 v119; // si
  unsigned __int64 v120; // r12
  Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> *v121; // rsi
  unsigned __int64 v122; // r15
  Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> *v123; // rsi
  unsigned __int64 v124; // r15
  Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> *v125; // rsi
  unsigned __int8 v126; // bl
  unsigned __int64 v127; // r15
  Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> *v128; // rbx
  unsigned __int64 v129; // rsi
  Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> *v130; // rbx
  unsigned __int8 v131; // di
  unsigned __int64 v132; // rsi
  Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> *v133; // rbx
  unsigned __int64 v134; // rdi
  unsigned __int64 v135; // rdi

  v6 = cx;
  if ( cy > cx )
    v6 = cy;
  v7 = cx;
  if ( cy < cx )
    v7 = cy;
  if ( ax < v7 )
    v7 = ax;
  if ( ax > v6 )
    v6 = ax;
  if ( ay < v7 )
    v7 = ay;
  if ( ay > v6 )
    v6 = ay;
  if ( v7 < -16 || v6 > 15 )
  {
    if ( v7 < -64 || v6 > 63 )
    {
      if ( v7 < -256 || v6 > 255 )
      {
        if ( v7 < -1024 || v6 > 1023 )
        {
          if ( v7 < -4096 || v6 > 4095 )
          {
            if ( v7 < -16384 || v6 > 0x3FFF )
            {
              if ( v7 < -65536 || v6 > 0xFFFF )
              {
                Data = this->Data;
                v115 = this->Data->Size >> 12;
                if ( v115 >= this->Data->NumPages )
                  Scaleform::ArrayPagedBase<unsigned char,12,256,Scaleform::AllocatorPagedLH_POD<unsigned char,261>>::allocatePage(
                    this->Data,
                    this->Data->Size >> 12);
                Data->Pages[v115][Data->Size & 0xFFF] = (16 * cx) | 0xF;
                ++Data->Size;
                v116 = this->Data;
                v117 = this->Data->Size >> 12;
                if ( v117 >= this->Data->NumPages )
                  Scaleform::ArrayPagedBase<unsigned char,12,256,Scaleform::AllocatorPagedLH_POD<unsigned char,261>>::allocatePage(
                    this->Data,
                    this->Data->Size >> 12);
                v116->Pages[v117][v116->Size & 0xFFF] = cx >> 4;
                ++v116->Size;
                v118 = this->Data;
                v119 = ((_BYTE)cy << 7) | (cx >> 12) & 0x7F;
                v120 = this->Data->Size >> 12;
                if ( v120 >= this->Data->NumPages )
                  Scaleform::ArrayPagedBase<unsigned char,12,256,Scaleform::AllocatorPagedLH_POD<unsigned char,261>>::allocatePage(
                    this->Data,
                    this->Data->Size >> 12);
                v118->Pages[v120][v118->Size & 0xFFF] = v119;
                ++v118->Size;
                v121 = this->Data;
                v122 = this->Data->Size >> 12;
                if ( v122 >= this->Data->NumPages )
                  Scaleform::ArrayPagedBase<unsigned char,12,256,Scaleform::AllocatorPagedLH_POD<unsigned char,261>>::allocatePage(
                    this->Data,
                    this->Data->Size >> 12);
                v121->Pages[v122][v121->Size & 0xFFF] = cy >> 1;
                ++v121->Size;
                v123 = this->Data;
                v124 = this->Data->Size >> 12;
                if ( v124 >= this->Data->NumPages )
                  Scaleform::ArrayPagedBase<unsigned char,12,256,Scaleform::AllocatorPagedLH_POD<unsigned char,261>>::allocatePage(
                    this->Data,
                    this->Data->Size >> 12);
                v123->Pages[v124][v123->Size & 0xFFF] = cy >> 9;
                ++v123->Size;
                v125 = this->Data;
                v126 = (4 * ax) | (cy >> 17) & 3;
                v127 = this->Data->Size >> 12;
                if ( v127 >= this->Data->NumPages )
                  Scaleform::ArrayPagedBase<unsigned char,12,256,Scaleform::AllocatorPagedLH_POD<unsigned char,261>>::allocatePage(
                    this->Data,
                    this->Data->Size >> 12);
                v125->Pages[v127][v125->Size & 0xFFF] = v126;
                ++v125->Size;
                v128 = this->Data;
                v129 = this->Data->Size >> 12;
                if ( v129 >= this->Data->NumPages )
                  Scaleform::ArrayPagedBase<unsigned char,12,256,Scaleform::AllocatorPagedLH_POD<unsigned char,261>>::allocatePage(
                    this->Data,
                    this->Data->Size >> 12);
                v128->Pages[v129][v128->Size & 0xFFF] = ax >> 6;
                ++v128->Size;
                v130 = this->Data;
                v131 = (32 * ay) | (ax >> 14) & 0x1F;
                v132 = this->Data->Size >> 12;
                if ( v132 >= this->Data->NumPages )
                  Scaleform::ArrayPagedBase<unsigned char,12,256,Scaleform::AllocatorPagedLH_POD<unsigned char,261>>::allocatePage(
                    this->Data,
                    this->Data->Size >> 12);
                v130->Pages[v132][v130->Size & 0xFFF] = v131;
                ++v130->Size;
                v133 = this->Data;
                v134 = this->Data->Size >> 12;
                if ( v134 >= this->Data->NumPages )
                  Scaleform::ArrayPagedBase<unsigned char,12,256,Scaleform::AllocatorPagedLH_POD<unsigned char,261>>::allocatePage(
                    this->Data,
                    this->Data->Size >> 12);
                v133->Pages[v134][v133->Size & 0xFFF] = ay >> 3;
                ++v133->Size;
                v18 = this->Data;
                v135 = this->Data->Size >> 12;
                if ( v135 >= this->Data->NumPages )
                  Scaleform::ArrayPagedBase<unsigned char,12,256,Scaleform::AllocatorPagedLH_POD<unsigned char,261>>::allocatePage(
                    this->Data,
                    this->Data->Size >> 12);
                v18->Pages[v135][v18->Size & 0xFFF] = ay >> 11;
                result = 10i64;
              }
              else
              {
                v94 = this->Data;
                v95 = this->Data->Size >> 12;
                if ( v95 >= this->Data->NumPages )
                  Scaleform::ArrayPagedBase<unsigned char,12,256,Scaleform::AllocatorPagedLH_POD<unsigned char,261>>::allocatePage(
                    this->Data,
                    this->Data->Size >> 12);
                v94->Pages[v95][v94->Size & 0xFFF] = (16 * cx) | 0xE;
                ++v94->Size;
                v96 = this->Data;
                v97 = this->Data->Size >> 12;
                if ( v97 >= this->Data->NumPages )
                  Scaleform::ArrayPagedBase<unsigned char,12,256,Scaleform::AllocatorPagedLH_POD<unsigned char,261>>::allocatePage(
                    this->Data,
                    this->Data->Size >> 12);
                v96->Pages[v97][v96->Size & 0xFFF] = cx >> 4;
                ++v96->Size;
                v98 = this->Data;
                v99 = (32 * cy) | (cx >> 12) & 0x1F;
                v100 = this->Data->Size >> 12;
                if ( v100 >= this->Data->NumPages )
                  Scaleform::ArrayPagedBase<unsigned char,12,256,Scaleform::AllocatorPagedLH_POD<unsigned char,261>>::allocatePage(
                    this->Data,
                    this->Data->Size >> 12);
                v98->Pages[v100][v98->Size & 0xFFF] = v99;
                ++v98->Size;
                v101 = this->Data;
                v102 = this->Data->Size >> 12;
                if ( v102 >= this->Data->NumPages )
                  Scaleform::ArrayPagedBase<unsigned char,12,256,Scaleform::AllocatorPagedLH_POD<unsigned char,261>>::allocatePage(
                    this->Data,
                    this->Data->Size >> 12);
                v101->Pages[v102][v101->Size & 0xFFF] = cy >> 3;
                ++v101->Size;
                v103 = this->Data;
                v104 = ((_BYTE)ax << 6) | (cy >> 11) & 0x3F;
                v105 = this->Data->Size >> 12;
                if ( v105 >= this->Data->NumPages )
                  Scaleform::ArrayPagedBase<unsigned char,12,256,Scaleform::AllocatorPagedLH_POD<unsigned char,261>>::allocatePage(
                    this->Data,
                    this->Data->Size >> 12);
                v103->Pages[v105][v103->Size & 0xFFF] = v104;
                ++v103->Size;
                v106 = this->Data;
                v107 = this->Data->Size >> 12;
                if ( v107 >= this->Data->NumPages )
                  Scaleform::ArrayPagedBase<unsigned char,12,256,Scaleform::AllocatorPagedLH_POD<unsigned char,261>>::allocatePage(
                    this->Data,
                    this->Data->Size >> 12);
                v106->Pages[v107][v106->Size & 0xFFF] = ax >> 2;
                ++v106->Size;
                v108 = this->Data;
                v109 = ((_BYTE)ay << 7) | (ax >> 10) & 0x7F;
                v110 = this->Data->Size >> 12;
                if ( v110 >= this->Data->NumPages )
                  Scaleform::ArrayPagedBase<unsigned char,12,256,Scaleform::AllocatorPagedLH_POD<unsigned char,261>>::allocatePage(
                    this->Data,
                    this->Data->Size >> 12);
                v108->Pages[v110][v108->Size & 0xFFF] = v109;
                ++v108->Size;
                v111 = this->Data;
                v112 = this->Data->Size >> 12;
                if ( v112 >= this->Data->NumPages )
                  Scaleform::ArrayPagedBase<unsigned char,12,256,Scaleform::AllocatorPagedLH_POD<unsigned char,261>>::allocatePage(
                    this->Data,
                    this->Data->Size >> 12);
                v111->Pages[v112][v111->Size & 0xFFF] = ay >> 1;
                ++v111->Size;
                v18 = this->Data;
                v113 = this->Data->Size >> 12;
                if ( v113 >= this->Data->NumPages )
                  Scaleform::ArrayPagedBase<unsigned char,12,256,Scaleform::AllocatorPagedLH_POD<unsigned char,261>>::allocatePage(
                    this->Data,
                    this->Data->Size >> 12);
                v18->Pages[v113][v18->Size & 0xFFF] = ay >> 9;
                result = 9i64;
              }
            }
            else
            {
              v76 = this->Data;
              v77 = this->Data->Size >> 12;
              if ( v77 >= this->Data->NumPages )
                Scaleform::ArrayPagedBase<unsigned char,12,256,Scaleform::AllocatorPagedLH_POD<unsigned char,261>>::allocatePage(
                  this->Data,
                  this->Data->Size >> 12);
              v76->Pages[v77][v76->Size & 0xFFF] = (16 * cx) | 0xD;
              ++v76->Size;
              v78 = this->Data;
              v79 = this->Data->Size >> 12;
              if ( v79 >= this->Data->NumPages )
                Scaleform::ArrayPagedBase<unsigned char,12,256,Scaleform::AllocatorPagedLH_POD<unsigned char,261>>::allocatePage(
                  this->Data,
                  this->Data->Size >> 12);
              v78->Pages[v79][v78->Size & 0xFFF] = cx >> 4;
              ++v78->Size;
              v80 = this->Data;
              v81 = (8 * cy) | (cx >> 12) & 7;
              v82 = this->Data->Size >> 12;
              if ( v82 >= this->Data->NumPages )
                Scaleform::ArrayPagedBase<unsigned char,12,256,Scaleform::AllocatorPagedLH_POD<unsigned char,261>>::allocatePage(
                  this->Data,
                  this->Data->Size >> 12);
              v80->Pages[v82][v80->Size & 0xFFF] = v81;
              ++v80->Size;
              v83 = this->Data;
              v84 = this->Data->Size >> 12;
              if ( v84 >= this->Data->NumPages )
                Scaleform::ArrayPagedBase<unsigned char,12,256,Scaleform::AllocatorPagedLH_POD<unsigned char,261>>::allocatePage(
                  this->Data,
                  this->Data->Size >> 12);
              v83->Pages[v84][v83->Size & 0xFFF] = cy >> 5;
              ++v83->Size;
              v85 = this->Data;
              v86 = (4 * ax) | (cy >> 13) & 3;
              v87 = this->Data->Size >> 12;
              if ( v87 >= this->Data->NumPages )
                Scaleform::ArrayPagedBase<unsigned char,12,256,Scaleform::AllocatorPagedLH_POD<unsigned char,261>>::allocatePage(
                  this->Data,
                  this->Data->Size >> 12);
              v85->Pages[v87][v85->Size & 0xFFF] = v86;
              ++v85->Size;
              v88 = this->Data;
              v89 = this->Data->Size >> 12;
              if ( v89 >= this->Data->NumPages )
                Scaleform::ArrayPagedBase<unsigned char,12,256,Scaleform::AllocatorPagedLH_POD<unsigned char,261>>::allocatePage(
                  this->Data,
                  this->Data->Size >> 12);
              v88->Pages[v89][v88->Size & 0xFFF] = ax >> 6;
              ++v88->Size;
              v90 = this->Data;
              v91 = (2 * ay) | (ax >> 14) & 1;
              v92 = this->Data->Size >> 12;
              if ( v92 >= this->Data->NumPages )
                Scaleform::ArrayPagedBase<unsigned char,12,256,Scaleform::AllocatorPagedLH_POD<unsigned char,261>>::allocatePage(
                  this->Data,
                  this->Data->Size >> 12);
              v90->Pages[v92][v90->Size & 0xFFF] = v91;
              ++v90->Size;
              v18 = this->Data;
              v93 = this->Data->Size >> 12;
              if ( v93 >= this->Data->NumPages )
                Scaleform::ArrayPagedBase<unsigned char,12,256,Scaleform::AllocatorPagedLH_POD<unsigned char,261>>::allocatePage(
                  this->Data,
                  this->Data->Size >> 12);
              v18->Pages[v93][v18->Size & 0xFFF] = ay >> 7;
              result = 8i64;
            }
          }
          else
          {
            v60 = this->Data;
            v61 = this->Data->Size >> 12;
            if ( v61 >= this->Data->NumPages )
              Scaleform::ArrayPagedBase<unsigned char,12,256,Scaleform::AllocatorPagedLH_POD<unsigned char,261>>::allocatePage(
                this->Data,
                this->Data->Size >> 12);
            v60->Pages[v61][v60->Size & 0xFFF] = (16 * cx) | 0xC;
            ++v60->Size;
            v62 = this->Data;
            v63 = this->Data->Size >> 12;
            if ( v63 >= this->Data->NumPages )
              Scaleform::ArrayPagedBase<unsigned char,12,256,Scaleform::AllocatorPagedLH_POD<unsigned char,261>>::allocatePage(
                this->Data,
                this->Data->Size >> 12);
            v62->Pages[v63][v62->Size & 0xFFF] = cx >> 4;
            ++v62->Size;
            v64 = this->Data;
            v65 = (2 * cy) | (cx >> 12) & 1;
            v66 = this->Data->Size >> 12;
            if ( v66 >= this->Data->NumPages )
              Scaleform::ArrayPagedBase<unsigned char,12,256,Scaleform::AllocatorPagedLH_POD<unsigned char,261>>::allocatePage(
                this->Data,
                this->Data->Size >> 12);
            v64->Pages[v66][v64->Size & 0xFFF] = v65;
            ++v64->Size;
            v67 = this->Data;
            v68 = ((_BYTE)ax << 6) | (cy >> 7) & 0x3F;
            v69 = this->Data->Size >> 12;
            if ( v69 >= this->Data->NumPages )
              Scaleform::ArrayPagedBase<unsigned char,12,256,Scaleform::AllocatorPagedLH_POD<unsigned char,261>>::allocatePage(
                this->Data,
                this->Data->Size >> 12);
            v67->Pages[v69][v67->Size & 0xFFF] = v68;
            ++v67->Size;
            v70 = this->Data;
            v71 = this->Data->Size >> 12;
            if ( v71 >= this->Data->NumPages )
              Scaleform::ArrayPagedBase<unsigned char,12,256,Scaleform::AllocatorPagedLH_POD<unsigned char,261>>::allocatePage(
                this->Data,
                this->Data->Size >> 12);
            v70->Pages[v71][v70->Size & 0xFFF] = ax >> 2;
            ++v70->Size;
            v72 = this->Data;
            v73 = (8 * ay) | (ax >> 10) & 7;
            v74 = this->Data->Size >> 12;
            if ( v74 >= this->Data->NumPages )
              Scaleform::ArrayPagedBase<unsigned char,12,256,Scaleform::AllocatorPagedLH_POD<unsigned char,261>>::allocatePage(
                this->Data,
                this->Data->Size >> 12);
            v72->Pages[v74][v72->Size & 0xFFF] = v73;
            ++v72->Size;
            v18 = this->Data;
            v75 = this->Data->Size >> 12;
            if ( v75 >= this->Data->NumPages )
              Scaleform::ArrayPagedBase<unsigned char,12,256,Scaleform::AllocatorPagedLH_POD<unsigned char,261>>::allocatePage(
                this->Data,
                this->Data->Size >> 12);
            v18->Pages[v75][v18->Size & 0xFFF] = ay >> 5;
            result = 7i64;
          }
        }
        else
        {
          v45 = this->Data;
          v46 = this->Data->Size >> 12;
          if ( v46 >= this->Data->NumPages )
            Scaleform::ArrayPagedBase<unsigned char,12,256,Scaleform::AllocatorPagedLH_POD<unsigned char,261>>::allocatePage(
              this->Data,
              this->Data->Size >> 12);
          v47 = v45->Pages[v46];
          v48 = (cx >> 4) & 0x7F | ((_BYTE)cy << 7);
          v47[v45->Size & 0xFFF] = (16 * cx) | 0xB;
          ++v45->Size;
          v49 = this->Data;
          v50 = this->Data->Size >> 12;
          if ( v50 >= this->Data->NumPages )
            Scaleform::ArrayPagedBase<unsigned char,12,256,Scaleform::AllocatorPagedLH_POD<unsigned char,261>>::allocatePage(
              this->Data,
              this->Data->Size >> 12);
          v49->Pages[v50][v49->Size & 0xFFF] = v48;
          ++v49->Size;
          v51 = this->Data;
          v52 = this->Data->Size >> 12;
          if ( v52 >= this->Data->NumPages )
            Scaleform::ArrayPagedBase<unsigned char,12,256,Scaleform::AllocatorPagedLH_POD<unsigned char,261>>::allocatePage(
              this->Data,
              this->Data->Size >> 12);
          v51->Pages[v52][v51->Size & 0xFFF] = cy >> 1;
          ++v51->Size;
          v53 = this->Data;
          v54 = (4 * ax) | (cy >> 9) & 3;
          v55 = this->Data->Size >> 12;
          if ( v55 >= this->Data->NumPages )
            Scaleform::ArrayPagedBase<unsigned char,12,256,Scaleform::AllocatorPagedLH_POD<unsigned char,261>>::allocatePage(
              this->Data,
              this->Data->Size >> 12);
          v53->Pages[v55][v53->Size & 0xFFF] = v54;
          ++v53->Size;
          v56 = this->Data;
          v57 = (32 * ay) | (ax >> 6) & 0x1F;
          v58 = this->Data->Size >> 12;
          if ( v58 >= this->Data->NumPages )
            Scaleform::ArrayPagedBase<unsigned char,12,256,Scaleform::AllocatorPagedLH_POD<unsigned char,261>>::allocatePage(
              this->Data,
              this->Data->Size >> 12);
          v56->Pages[v58][v56->Size & 0xFFF] = v57;
          ++v56->Size;
          v18 = this->Data;
          v59 = this->Data->Size >> 12;
          if ( v59 >= this->Data->NumPages )
            Scaleform::ArrayPagedBase<unsigned char,12,256,Scaleform::AllocatorPagedLH_POD<unsigned char,261>>::allocatePage(
              this->Data,
              this->Data->Size >> 12);
          v18->Pages[v59][v18->Size & 0xFFF] = ay >> 3;
          result = 6i64;
        }
      }
      else
      {
        v32 = this->Data;
        v33 = this->Data->Size >> 12;
        if ( v33 >= this->Data->NumPages )
          Scaleform::ArrayPagedBase<unsigned char,12,256,Scaleform::AllocatorPagedLH_POD<unsigned char,261>>::allocatePage(
            this->Data,
            this->Data->Size >> 12);
        v34 = v32->Pages[v33];
        v35 = (cx >> 4) & 0x1F | (32 * cy);
        v34[v32->Size & 0xFFF] = (16 * cx) | 0xA;
        ++v32->Size;
        v36 = this->Data;
        v37 = this->Data->Size >> 12;
        if ( v37 >= this->Data->NumPages )
          Scaleform::ArrayPagedBase<unsigned char,12,256,Scaleform::AllocatorPagedLH_POD<unsigned char,261>>::allocatePage(
            this->Data,
            this->Data->Size >> 12);
        v36->Pages[v37][v36->Size & 0xFFF] = v35;
        ++v36->Size;
        v38 = this->Data;
        v39 = ((_BYTE)ax << 6) | (cy >> 3) & 0x3F;
        v40 = this->Data->Size >> 12;
        if ( v40 >= this->Data->NumPages )
          Scaleform::ArrayPagedBase<unsigned char,12,256,Scaleform::AllocatorPagedLH_POD<unsigned char,261>>::allocatePage(
            this->Data,
            this->Data->Size >> 12);
        v38->Pages[v40][v38->Size & 0xFFF] = v39;
        ++v38->Size;
        v41 = this->Data;
        v42 = (ax >> 2) & 0x7F | ((_BYTE)ay << 7);
        v43 = this->Data->Size >> 12;
        if ( v43 >= this->Data->NumPages )
          Scaleform::ArrayPagedBase<unsigned char,12,256,Scaleform::AllocatorPagedLH_POD<unsigned char,261>>::allocatePage(
            this->Data,
            this->Data->Size >> 12);
        v41->Pages[v43][v41->Size & 0xFFF] = v42;
        ++v41->Size;
        v18 = this->Data;
        v44 = this->Data->Size >> 12;
        if ( v44 >= this->Data->NumPages )
          Scaleform::ArrayPagedBase<unsigned char,12,256,Scaleform::AllocatorPagedLH_POD<unsigned char,261>>::allocatePage(
            this->Data,
            this->Data->Size >> 12);
        v18->Pages[v44][v18->Size & 0xFFF] = ay >> 1;
        result = 5i64;
      }
    }
    else
    {
      v21 = this->Data;
      v22 = this->Data->Size >> 12;
      if ( v22 >= this->Data->NumPages )
        Scaleform::ArrayPagedBase<unsigned char,12,256,Scaleform::AllocatorPagedLH_POD<unsigned char,261>>::allocatePage(
          this->Data,
          this->Data->Size >> 12);
      v23 = v21->Pages[v22];
      v24 = (cx >> 4) & 7 | (8 * cy);
      v23[v21->Size & 0xFFF] = (16 * cx) | 9;
      ++v21->Size;
      v25 = this->Data;
      v26 = this->Data->Size >> 12;
      if ( v26 >= this->Data->NumPages )
        Scaleform::ArrayPagedBase<unsigned char,12,256,Scaleform::AllocatorPagedLH_POD<unsigned char,261>>::allocatePage(
          this->Data,
          this->Data->Size >> 12);
      v25->Pages[v26][v25->Size & 0xFFF] = v24;
      ++v25->Size;
      v27 = this->Data;
      v28 = (4 * ax) | (cy >> 5) & 3;
      v29 = this->Data->Size >> 12;
      if ( v29 >= this->Data->NumPages )
        Scaleform::ArrayPagedBase<unsigned char,12,256,Scaleform::AllocatorPagedLH_POD<unsigned char,261>>::allocatePage(
          this->Data,
          this->Data->Size >> 12);
      v30 = (2 * ay) | (ax >> 6) & 1;
      v27->Pages[v29][v27->Size & 0xFFF] = v28;
      ++v27->Size;
      v18 = this->Data;
      v31 = this->Data->Size >> 12;
      if ( v31 >= this->Data->NumPages )
        Scaleform::ArrayPagedBase<unsigned char,12,256,Scaleform::AllocatorPagedLH_POD<unsigned char,261>>::allocatePage(
          this->Data,
          this->Data->Size >> 12);
      v18->Pages[v31][v18->Size & 0xFFF] = v30;
      result = 4i64;
    }
  }
  else
  {
    v11 = this->Data;
    v12 = this->Data->Size >> 12;
    if ( v12 >= this->Data->NumPages )
      Scaleform::ArrayPagedBase<unsigned char,12,256,Scaleform::AllocatorPagedLH_POD<unsigned char,261>>::allocatePage(
        this->Data,
        this->Data->Size >> 12);
    v13 = (cx >> 4) & 1 | (2 * cy) & 0x3F;
    v11->Pages[v12][v11->Size & 0xFFF] = (16 * cx) | 8;
    ++v11->Size;
    v14 = this->Data;
    v15 = ((_BYTE)ax << 6) | v13;
    v16 = this->Data->Size >> 12;
    if ( v16 >= this->Data->NumPages )
      Scaleform::ArrayPagedBase<unsigned char,12,256,Scaleform::AllocatorPagedLH_POD<unsigned char,261>>::allocatePage(
        this->Data,
        this->Data->Size >> 12);
    v17 = (ax >> 2) & 7 | (8 * ay);
    v14->Pages[v16][v14->Size & 0xFFF] = v15;
    ++v14->Size;
    v18 = this->Data;
    v19 = this->Data->Size >> 12;
    if ( v19 >= this->Data->NumPages )
      Scaleform::ArrayPagedBase<unsigned char,12,256,Scaleform::AllocatorPagedLH_POD<unsigned char,261>>::allocatePage(
        this->Data,
        this->Data->Size >> 12);
    v18->Pages[v19][v18->Size & 0xFFF] = v17;
    result = 3i64;
  }
  ++v18->Size;
  return result;
}

__int64 __fastcall Scaleform::GFx::PathDataEncoder<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261>>::WriteSInt15(
        Scaleform::GFx::PathDataEncoder<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> > *this,
        int v)
{
  Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> *Data; // rbx
  unsigned __int64 v5; // rsi
  unsigned __int8 v6; // di
  __int64 result; // rax
  unsigned __int8 v8; // bp
  int v9; // edi
  unsigned __int64 v10; // rsi

  Data = this->Data;
  v5 = this->Data->Size >> 12;
  if ( (unsigned int)(v + 64) > 0x7F )
  {
    v8 = (2 * v) | 1;
    if ( v5 >= Data->NumPages )
      Scaleform::ArrayPagedBase<unsigned char,12,256,Scaleform::AllocatorPagedLH_POD<unsigned char,261>>::allocatePage(
        Data,
        v5);
    v9 = v >> 7;
    Data->Pages[v5][Data->Size & 0xFFF] = v8;
    ++Data->Size;
    Data = this->Data;
    v10 = this->Data->Size >> 12;
    if ( v10 >= this->Data->NumPages )
      Scaleform::ArrayPagedBase<unsigned char,12,256,Scaleform::AllocatorPagedLH_POD<unsigned char,261>>::allocatePage(
        this->Data,
        this->Data->Size >> 12);
    Data->Pages[v10][Data->Size & 0xFFF] = v9;
    result = 2i64;
  }
  else
  {
    v6 = 2 * v;
    if ( v5 >= Data->NumPages )
      Scaleform::ArrayPagedBase<unsigned char,12,256,Scaleform::AllocatorPagedLH_POD<unsigned char,261>>::allocatePage(
        this->Data,
        this->Data->Size >> 12);
    Data->Pages[v5][Data->Size & 0xFFF] = v6;
    result = 1i64;
  }
  ++Data->Size;
  return result;
}

void __fastcall Scaleform::GFx::PathDataEncoder<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261>>::WriteSInt16fixlen(
        Scaleform::GFx::PathDataEncoder<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> > *this,
        int v)
{
  Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> *Data; // rbx
  unsigned __int64 v5; // rdi
  Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> *v6; // rbx
  int v7; // esi
  unsigned __int64 v8; // rdi

  Data = this->Data;
  v5 = this->Data->Size >> 12;
  if ( v5 >= this->Data->NumPages )
    Scaleform::ArrayPagedBase<unsigned char,12,256,Scaleform::AllocatorPagedLH_POD<unsigned char,261>>::allocatePage(
      this->Data,
      this->Data->Size >> 12);
  Data->Pages[v5][Data->Size & 0xFFF] = v;
  ++Data->Size;
  v6 = this->Data;
  v7 = v >> 8;
  v8 = this->Data->Size >> 12;
  if ( v8 >= this->Data->NumPages )
    Scaleform::ArrayPagedBase<unsigned char,12,256,Scaleform::AllocatorPagedLH_POD<unsigned char,261>>::allocatePage(
      this->Data,
      this->Data->Size >> 12);
  v6->Pages[v8][v6->Size & 0xFFF] = v7;
  ++v6->Size;
}

__int64 __fastcall Scaleform::GFx::PathDataEncoder<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261>>::WriteUInt15(
        Scaleform::GFx::PathDataEncoder<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> > *this,
        unsigned int v)
{
  Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> *Data; // rbx
  unsigned __int64 v5; // rsi
  unsigned __int8 v6; // di
  __int64 result; // rax
  unsigned __int8 v8; // bp
  unsigned int v9; // edi
  unsigned __int64 v10; // rsi

  Data = this->Data;
  v5 = this->Data->Size >> 12;
  if ( v > 0x7F )
  {
    v8 = (2 * v) | 1;
    if ( v5 >= Data->NumPages )
      Scaleform::ArrayPagedBase<unsigned char,12,256,Scaleform::AllocatorPagedLH_POD<unsigned char,261>>::allocatePage(
        Data,
        v5);
    v9 = v >> 7;
    Data->Pages[v5][Data->Size & 0xFFF] = v8;
    ++Data->Size;
    Data = this->Data;
    v10 = this->Data->Size >> 12;
    if ( v10 >= this->Data->NumPages )
      Scaleform::ArrayPagedBase<unsigned char,12,256,Scaleform::AllocatorPagedLH_POD<unsigned char,261>>::allocatePage(
        this->Data,
        this->Data->Size >> 12);
    Data->Pages[v10][Data->Size & 0xFFF] = v9;
    result = 2i64;
  }
  else
  {
    v6 = 2 * v;
    if ( v5 >= Data->NumPages )
      Scaleform::ArrayPagedBase<unsigned char,12,256,Scaleform::AllocatorPagedLH_POD<unsigned char,261>>::allocatePage(
        this->Data,
        this->Data->Size >> 12);
    Data->Pages[v5][Data->Size & 0xFFF] = v6;
    result = 1i64;
  }
  ++Data->Size;
  return result;
}

void __fastcall Scaleform::GFx::PathDataEncoder<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261>>::WriteUInt16fixlen(
        Scaleform::GFx::PathDataEncoder<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> > *this,
        unsigned int v)
{
  Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> *Data; // rbx
  unsigned __int64 v5; // rdi
  Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> *v6; // rbx
  unsigned int v7; // esi
  unsigned __int64 v8; // rdi

  Data = this->Data;
  v5 = this->Data->Size >> 12;
  if ( v5 >= this->Data->NumPages )
    Scaleform::ArrayPagedBase<unsigned char,12,256,Scaleform::AllocatorPagedLH_POD<unsigned char,261>>::allocatePage(
      this->Data,
      this->Data->Size >> 12);
  Data->Pages[v5][Data->Size & 0xFFF] = v;
  ++Data->Size;
  v6 = this->Data;
  v7 = v >> 8;
  v8 = this->Data->Size >> 12;
  if ( v8 >= this->Data->NumPages )
    Scaleform::ArrayPagedBase<unsigned char,12,256,Scaleform::AllocatorPagedLH_POD<unsigned char,261>>::allocatePage(
      this->Data,
      this->Data->Size >> 12);
  v6->Pages[v8][v6->Size & 0xFFF] = v7;
  ++v6->Size;
}

__int64 __fastcall Scaleform::GFx::PathDataEncoder<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261>>::WriteUInt30(
        Scaleform::GFx::PathDataEncoder<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> > *this,
        unsigned int v)
{
  Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> *v4; // rdi
  unsigned __int8 v5; // bl
  unsigned __int64 v6; // rsi
  __int64 result; // rax
  Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> *Data; // rsi
  char v9; // r14
  unsigned __int64 v10; // rbp
  unsigned __int8 v11; // r14
  unsigned int v12; // ebx
  unsigned __int64 v13; // rsi
  unsigned __int8 v14; // r14
  Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> *v15; // rsi
  unsigned int v16; // er14
  unsigned __int64 v17; // rbp
  unsigned int v18; // ebx
  unsigned __int64 v19; // rsi
  unsigned __int8 v20; // r14
  Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> *v21; // rsi
  unsigned __int64 v22; // rbp
  Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> *v23; // rsi
  unsigned int v24; // er14
  unsigned __int64 v25; // rbp
  unsigned int v26; // ebx
  unsigned __int64 v27; // rsi

  if ( v > 0x3F )
  {
    Data = this->Data;
    v9 = 4 * v;
    v10 = this->Data->Size >> 12;
    if ( v > 0x3FFF )
    {
      if ( v > 0x3FFFFF )
      {
        v20 = v9 | 3;
        if ( v10 >= Data->NumPages )
          Scaleform::ArrayPagedBase<unsigned char,12,256,Scaleform::AllocatorPagedLH_POD<unsigned char,261>>::allocatePage(
            Data,
            Data->Size >> 12);
        Data->Pages[v10][Data->Size & 0xFFF] = v20;
        ++Data->Size;
        v21 = this->Data;
        v22 = this->Data->Size >> 12;
        if ( v22 >= this->Data->NumPages )
          Scaleform::ArrayPagedBase<unsigned char,12,256,Scaleform::AllocatorPagedLH_POD<unsigned char,261>>::allocatePage(
            this->Data,
            this->Data->Size >> 12);
        v21->Pages[v22][v21->Size & 0xFFF] = v >> 6;
        ++v21->Size;
        v23 = this->Data;
        v24 = v >> 14;
        v25 = this->Data->Size >> 12;
        if ( v25 >= this->Data->NumPages )
          Scaleform::ArrayPagedBase<unsigned char,12,256,Scaleform::AllocatorPagedLH_POD<unsigned char,261>>::allocatePage(
            this->Data,
            this->Data->Size >> 12);
        v26 = v >> 22;
        v23->Pages[v25][v23->Size & 0xFFF] = v24;
        ++v23->Size;
        v4 = this->Data;
        v27 = v4->Size >> 12;
        if ( v27 >= v4->NumPages )
          Scaleform::ArrayPagedBase<unsigned char,12,256,Scaleform::AllocatorPagedLH_POD<unsigned char,261>>::allocatePage(
            v4,
            v4->Size >> 12);
        v4->Pages[v27][v4->Size & 0xFFF] = v26;
        result = 4i64;
      }
      else
      {
        v14 = v9 | 2;
        if ( v10 >= Data->NumPages )
          Scaleform::ArrayPagedBase<unsigned char,12,256,Scaleform::AllocatorPagedLH_POD<unsigned char,261>>::allocatePage(
            Data,
            Data->Size >> 12);
        Data->Pages[v10][Data->Size & 0xFFF] = v14;
        ++Data->Size;
        v15 = this->Data;
        v16 = v >> 6;
        v17 = this->Data->Size >> 12;
        if ( v17 >= this->Data->NumPages )
          Scaleform::ArrayPagedBase<unsigned char,12,256,Scaleform::AllocatorPagedLH_POD<unsigned char,261>>::allocatePage(
            this->Data,
            this->Data->Size >> 12);
        v18 = v >> 14;
        v15->Pages[v17][v15->Size & 0xFFF] = v16;
        ++v15->Size;
        v4 = this->Data;
        v19 = v4->Size >> 12;
        if ( v19 >= v4->NumPages )
          Scaleform::ArrayPagedBase<unsigned char,12,256,Scaleform::AllocatorPagedLH_POD<unsigned char,261>>::allocatePage(
            v4,
            v4->Size >> 12);
        v4->Pages[v19][v4->Size & 0xFFF] = v18;
        result = 3i64;
      }
    }
    else
    {
      v11 = v9 | 1;
      if ( v10 >= Data->NumPages )
        Scaleform::ArrayPagedBase<unsigned char,12,256,Scaleform::AllocatorPagedLH_POD<unsigned char,261>>::allocatePage(
          Data,
          Data->Size >> 12);
      v12 = v >> 6;
      Data->Pages[v10][Data->Size & 0xFFF] = v11;
      ++Data->Size;
      v4 = this->Data;
      v13 = v4->Size >> 12;
      if ( v13 >= v4->NumPages )
        Scaleform::ArrayPagedBase<unsigned char,12,256,Scaleform::AllocatorPagedLH_POD<unsigned char,261>>::allocatePage(
          v4,
          v4->Size >> 12);
      v4->Pages[v13][v4->Size & 0xFFF] = v12;
      result = 2i64;
    }
  }
  else
  {
    v4 = this->Data;
    v5 = 4 * v;
    v6 = this->Data->Size >> 12;
    if ( v6 >= this->Data->NumPages )
      Scaleform::ArrayPagedBase<unsigned char,12,256,Scaleform::AllocatorPagedLH_POD<unsigned char,261>>::allocatePage(
        this->Data,
        this->Data->Size >> 12);
    v4->Pages[v6][v4->Size & 0xFFF] = v5;
    result = 1i64;
  }
  ++v4->Size;
  return result;
}

void __fastcall Scaleform::GFx::PathDataEncoder<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261>>::WriteUInt32fixlen(
        Scaleform::GFx::PathDataEncoder<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> > *this,
        unsigned int v)
{
  Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> *Data; // rbx
  unsigned __int64 v5; // rdi
  Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> *v6; // rbx
  unsigned __int64 v7; // rdi
  Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> *v8; // rbx
  unsigned int v9; // ebp
  unsigned __int64 v10; // rdi
  unsigned int v11; // esi
  Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> *v12; // rbx
  unsigned __int64 v13; // rdi

  Data = this->Data;
  v5 = this->Data->Size >> 12;
  if ( v5 >= this->Data->NumPages )
    Scaleform::ArrayPagedBase<unsigned char,12,256,Scaleform::AllocatorPagedLH_POD<unsigned char,261>>::allocatePage(
      this->Data,
      this->Data->Size >> 12);
  Data->Pages[v5][Data->Size & 0xFFF] = v;
  ++Data->Size;
  v6 = this->Data;
  v7 = this->Data->Size >> 12;
  if ( v7 >= this->Data->NumPages )
    Scaleform::ArrayPagedBase<unsigned char,12,256,Scaleform::AllocatorPagedLH_POD<unsigned char,261>>::allocatePage(
      this->Data,
      this->Data->Size >> 12);
  v6->Pages[v7][v6->Size & 0xFFF] = BYTE1(v);
  ++v6->Size;
  v8 = this->Data;
  v9 = HIWORD(v);
  v10 = this->Data->Size >> 12;
  if ( v10 >= this->Data->NumPages )
    Scaleform::ArrayPagedBase<unsigned char,12,256,Scaleform::AllocatorPagedLH_POD<unsigned char,261>>::allocatePage(
      this->Data,
      this->Data->Size >> 12);
  v11 = HIBYTE(v);
  v8->Pages[v10][v8->Size & 0xFFF] = v9;
  ++v8->Size;
  v12 = this->Data;
  v13 = this->Data->Size >> 12;
  if ( v13 >= this->Data->NumPages )
    Scaleform::ArrayPagedBase<unsigned char,12,256,Scaleform::AllocatorPagedLH_POD<unsigned char,261>>::allocatePage(
      this->Data,
      this->Data->Size >> 12);
  v12->Pages[v13][v12->Size & 0xFFF] = v11;
  ++v12->Size;
}

__int64 __fastcall Scaleform::GFx::PathDataEncoder<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261>>::WriteVLine(
        Scaleform::GFx::PathDataEncoder<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> > *this,
        int y)
{
  Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> *Data; // rdi
  char v5; // bp
  unsigned __int64 v6; // rsi
  unsigned __int8 v7; // bp
  int v8; // ebx
  Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> *v9; // rdi
  unsigned __int64 v10; // rsi
  __int64 result; // rax
  unsigned __int8 v12; // bp
  Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> *v13; // rdi
  int v14; // ebp
  unsigned __int64 v15; // rsi
  int v16; // ebx
  unsigned __int64 v17; // rsi

  Data = this->Data;
  v5 = 16 * y;
  v6 = this->Data->Size >> 12;
  if ( (unsigned int)(y + 2048) > 0xFFF )
  {
    v12 = v5 | 3;
    if ( v6 >= Data->NumPages )
      Scaleform::ArrayPagedBase<unsigned char,12,256,Scaleform::AllocatorPagedLH_POD<unsigned char,261>>::allocatePage(
        this->Data,
        this->Data->Size >> 12);
    Data->Pages[v6][Data->Size & 0xFFF] = v12;
    ++Data->Size;
    v13 = this->Data;
    v14 = y >> 4;
    v15 = this->Data->Size >> 12;
    if ( v15 >= this->Data->NumPages )
      Scaleform::ArrayPagedBase<unsigned char,12,256,Scaleform::AllocatorPagedLH_POD<unsigned char,261>>::allocatePage(
        this->Data,
        this->Data->Size >> 12);
    v16 = y >> 12;
    v13->Pages[v15][v13->Size & 0xFFF] = v14;
    ++v13->Size;
    v9 = this->Data;
    v17 = this->Data->Size >> 12;
    if ( v17 >= this->Data->NumPages )
      Scaleform::ArrayPagedBase<unsigned char,12,256,Scaleform::AllocatorPagedLH_POD<unsigned char,261>>::allocatePage(
        this->Data,
        this->Data->Size >> 12);
    v9->Pages[v17][v9->Size & 0xFFF] = v16;
    result = 3i64;
  }
  else
  {
    v7 = v5 | 2;
    if ( v6 >= Data->NumPages )
      Scaleform::ArrayPagedBase<unsigned char,12,256,Scaleform::AllocatorPagedLH_POD<unsigned char,261>>::allocatePage(
        this->Data,
        this->Data->Size >> 12);
    v8 = y >> 4;
    Data->Pages[v6][Data->Size & 0xFFF] = v7;
    ++Data->Size;
    v9 = this->Data;
    v10 = this->Data->Size >> 12;
    if ( v10 >= this->Data->NumPages )
      Scaleform::ArrayPagedBase<unsigned char,12,256,Scaleform::AllocatorPagedLH_POD<unsigned char,261>>::allocatePage(
        this->Data,
        this->Data->Size >> 12);
    v9->Pages[v10][v9->Size & 0xFFF] = v8;
    result = 2i64;
  }
  ++v9->Size;
  return result;
}

void __fastcall Scaleform::ArrayPagedBase<unsigned char,12,256,Scaleform::AllocatorPagedLH_POD<unsigned char,261>>::allocatePage(
        Scaleform::ArrayPagedBase<unsigned char,12,256,Scaleform::AllocatorPagedLH_POD<unsigned char,261> > *this,
        unsigned __int64 nb)
{
  unsigned __int64 MaxPages; // r8
  unsigned __int8 **Pages; // rdx
  unsigned __int8 **v6; // rax
  int v7; // [rsp+30h] [rbp+8h] BYREF

  MaxPages = this->MaxPages;
  if ( nb >= MaxPages )
  {
    Pages = this->Pages;
    if ( Pages )
    {
      v6 = (unsigned __int8 **)Scaleform::Memory::pGlobalHeap->Realloc(
                                 Scaleform::Memory::pGlobalHeap,
                                 Pages,
                                 8 * MaxPages + 2048);
    }
    else
    {
      v7 = 261;
      v6 = (unsigned __int8 **)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                 Scaleform::Memory::pGlobalHeap,
                                 this,
                                 2048i64,
                                 &v7);
    }
    this->MaxPages += 256i64;
    this->Pages = v6;
  }
  v7 = 261;
  this->Pages[nb] = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                         Scaleform::Memory::pGlobalHeap,
                                         this,
                                         4096i64,
                                         &v7);
  ++this->NumPages;
}

void __fastcall Scaleform::ArrayPagedBase<Scaleform::GFx::FontCompactor::GlyphInfoType,6,64,Scaleform::AllocatorPagedGH_POD<Scaleform::GFx::FontCompactor::GlyphInfoType,261>>::allocatePage(
        Scaleform::ArrayPagedBase<Scaleform::GFx::FontCompactor::KerningPairType,6,64,Scaleform::AllocatorPagedGH_POD<Scaleform::GFx::FontCompactor::KerningPairType,261> > *this,
        unsigned __int64 nb)
{
  unsigned __int64 MaxPages; // r8
  Scaleform::GFx::FontCompactor::KerningPairType **Pages; // rdx
  Scaleform::GFx::FontCompactor::KerningPairType **v6; // rax
  int v7; // [rsp+30h] [rbp+8h] BYREF

  MaxPages = this->MaxPages;
  if ( nb >= MaxPages )
  {
    Pages = this->Pages;
    if ( Pages )
    {
      v6 = (Scaleform::GFx::FontCompactor::KerningPairType **)Scaleform::Memory::pGlobalHeap->Realloc(
                                                                Scaleform::Memory::pGlobalHeap,
                                                                Pages,
                                                                8 * MaxPages + 512);
    }
    else
    {
      v7 = 261;
      v6 = (Scaleform::GFx::FontCompactor::KerningPairType **)Scaleform::Memory::pGlobalHeap->Alloc(
                                                                Scaleform::Memory::pGlobalHeap,
                                                                512i64,
                                                                &v7);
    }
    this->MaxPages += 64i64;
    this->Pages = v6;
  }
  v7 = 261;
  this->Pages[nb] = (Scaleform::GFx::FontCompactor::KerningPairType *)Scaleform::Memory::pGlobalHeap->Alloc(
                                                                        Scaleform::Memory::pGlobalHeap,
                                                                        512i64,
                                                                        &v7);
  ++this->NumPages;
}

void __fastcall Scaleform::ArrayPagedBase<Scaleform::GFx::FontCompactor::VertexType,6,64,Scaleform::AllocatorPagedGH_POD<Scaleform::GFx::FontCompactor::VertexType,261>>::allocatePage(
        Scaleform::ArrayPagedBase<Scaleform::GFx::FontCompactor::VertexType,6,64,Scaleform::AllocatorPagedGH_POD<Scaleform::GFx::FontCompactor::VertexType,261> > *this,
        unsigned __int64 nb)
{
  unsigned __int64 MaxPages; // r8
  Scaleform::GFx::FontCompactor::VertexType **Pages; // rdx
  Scaleform::GFx::FontCompactor::VertexType **v6; // rax
  int v7; // [rsp+30h] [rbp+8h] BYREF

  MaxPages = this->MaxPages;
  if ( nb >= MaxPages )
  {
    Pages = this->Pages;
    if ( Pages )
    {
      v6 = (Scaleform::GFx::FontCompactor::VertexType **)Scaleform::Memory::pGlobalHeap->Realloc(
                                                           Scaleform::Memory::pGlobalHeap,
                                                           Pages,
                                                           8 * MaxPages + 512);
    }
    else
    {
      v7 = 261;
      v6 = (Scaleform::GFx::FontCompactor::VertexType **)Scaleform::Memory::pGlobalHeap->Alloc(
                                                           Scaleform::Memory::pGlobalHeap,
                                                           512i64,
                                                           &v7);
    }
    this->MaxPages += 64i64;
    this->Pages = v6;
  }
  v7 = 261;
  this->Pages[nb] = (Scaleform::GFx::FontCompactor::VertexType *)Scaleform::Memory::pGlobalHeap->Alloc(
                                                                   Scaleform::Memory::pGlobalHeap,
                                                                   256i64,
                                                                   &v7);
  ++this->NumPages;
}

bool __fastcall Scaleform::GFx::FontCompactor::cmpKerningPairs(
        const Scaleform::GFx::FontCompactor::KerningPairType *a,
        const Scaleform::GFx::FontCompactor::KerningPairType *b)
{
  bool v2; // cf

  v2 = a->Char1 < b->Char1;
  if ( a->Char1 == b->Char1 )
    return a->Char2 < b->Char2;
  return v2;
}

void __fastcall Scaleform::GFx::FontCompactor::computeBounds(
        Scaleform::GFx::FontCompactor *this,
        int *x1,
        int *y1,
        int *x2,
        int *y2)
{
  int *v8; // rbp
  Scaleform::GFx::FontCompactor *v9; // r8
  unsigned int v10; // er9
  unsigned __int64 v11; // r11
  unsigned __int64 v12; // rcx
  __int64 v13; // r11
  Scaleform::GFx::FontCompactor::ContourType *v14; // r13
  int v15; // ebx
  int v16; // ecx
  unsigned int v17; // er12
  unsigned int DataStart; // er9
  Scaleform::GFx::FontCompactor::VertexType **Pages; // r10
  __int64 v20; // rdi
  Scaleform::GFx::FontCompactor::VertexType *v21; // r8
  __int16 x; // dx
  float v23; // xmm10_4
  __int64 v24; // r13
  float v25; // xmm8_4
  float v26; // xmm9_4
  float v27; // xmm0_4
  float v28; // xmm7_4
  float y; // xmm2_4
  float v30; // xmm1_4
  int v31; // ebp
  int v32; // eax
  float v33; // xmm4_4
  float v34; // xmm2_4
  float v35; // xmm3_4
  float v36; // xmm0_4
  float v37; // xmm8_4
  float v38; // xmm6_4
  int v39; // ebx
  int v40; // eax
  int v41; // eax
  __int64 v42; // [rsp+20h] [rbp-D8h]
  Scaleform::GFx::FontCompactor::ContourType *v43; // [rsp+28h] [rbp-D0h]
  Scaleform::GFx::FontCompactor::VertexType *v46; // [rsp+110h] [rbp+18h]
  unsigned int v47; // [rsp+118h] [rbp+20h]
  int *y2a; // [rsp+120h] [rbp+28h]

  *x1 = 0x3FFF;
  v8 = x1;
  v9 = this;
  *y1 = 0x3FFF;
  *x2 = -16383;
  v10 = 0;
  *y2 = -16383;
  v47 = 0;
  if ( this->TmpContours.Size )
  {
    v11 = 0i64;
    do
    {
      v12 = v11 >> 6;
      v13 = v11 & 0x3F;
      v42 = v13;
      v14 = v9->TmpContours.Pages[v12];
      v43 = v14;
      LODWORD(v12) = v9->TmpVertices.Pages[(unsigned __int64)v14[v13].DataStart >> 6][v14[v13].DataStart & 0x3F];
      v15 = SWORD1(v12);
      v16 = (__int16)v12 >> 1;
      if ( v16 < *v8 )
        *v8 = v16;
      if ( v15 < *y1 )
        *y1 = v15;
      if ( v16 > *x2 )
        *x2 = v16;
      if ( v15 > *y2 )
        *y2 = v15;
      v17 = 1;
      if ( v14[v13].DataSize > 1 )
      {
        do
        {
          DataStart = v14[v13].DataStart;
          Pages = v9->TmpVertices.Pages;
          v20 = ((_BYTE)DataStart + (_BYTE)v17) & 0x3F;
          v21 = Pages[(unsigned __int64)(DataStart + v17) >> 6];
          v46 = v21;
          x = v21[v20].x;
          if ( (x & 1) != 0 )
          {
            ++v17;
            v23 = (float)v16;
            v24 = ((_BYTE)DataStart + (_BYTE)v17) & 0x3F;
            y2a = (int *)&Pages[(unsigned __int64)(DataStart + v17) >> 6]->x;
            v25 = (float)(x >> 1);
            v26 = (float)(SLOWORD(y2a[v24]) >> 1);
            v27 = (float)((float)(v25 + v25) - (float)v16) - v26;
            if ( v27 != 0.0 )
            {
              v28 = (float)(v25 - v23) / v27;
              if ( v28 > 0.0 && v28 < 1.0 )
              {
                y = (float)v21[v20].y;
                v30 = (float)((float)(y - (float)v15) * v28) + (float)v15;
                v31 = (int)(float)(floorf(
                                     (float)((float)((float)((float)((float)((float)SHIWORD(y2a[v24]) - y) * v28) + y)
                                                   - v30)
                                           * v28)
                                   + v30)
                                 + 0.5);
                v32 = (int)(float)(floorf(
                                     (float)((float)((float)((float)((float)(v26 - v25) * v28) + v25)
                                                   - (float)((float)((float)(v25 - v23) * v28) + v23))
                                           * v28)
                                   + (float)((float)((float)(v25 - v23) * v28) + v23))
                                 + 0.5);
                if ( v32 < *x1 )
                  *x1 = v32;
                if ( v31 < *y1 )
                  *y1 = v31;
                if ( v32 > *x2 )
                  *x2 = v32;
                v21 = v46;
                if ( v31 > *y2 )
                  *y2 = v31;
                v8 = x1;
              }
            }
            v33 = (float)v15;
            v34 = (float)v21[v20].y;
            v35 = (float)SHIWORD(y2a[v24]);
            v36 = (float)((float)(v34 + v34) - (float)v15) - v35;
            if ( v36 != 0.0 )
            {
              v37 = (float)(v34 - v33) / v36;
              if ( v37 > 0.0 && v37 < 1.0 )
              {
                v38 = (float)(v21[v20].x >> 1);
                v39 = (int)(float)(floorf(
                                     (float)((float)((float)((float)((float)(v35 - v34) * v37) + v34)
                                                   - (float)((float)((float)(v34 - v33) * v37) + v33))
                                           * v37)
                                   + (float)((float)((float)(v34 - v33) * v37) + v33))
                                 + 0.5);
                v40 = (int)(float)(floorf(
                                     (float)((float)((float)((float)((float)((float)(SLOWORD(y2a[v24]) >> 1) - v38) * v37)
                                                           + v38)
                                                   - (float)((float)((float)(v38 - v23) * v37) + v23))
                                           * v37)
                                   + (float)((float)((float)(v38 - v23) * v37) + v23))
                                 + 0.5);
                if ( v40 < *v8 )
                  *v8 = v40;
                if ( v39 < *y1 )
                  *y1 = v39;
                if ( v40 > *x2 )
                  *x2 = v40;
                if ( v39 > *y2 )
                  *y2 = v39;
              }
            }
            v13 = v42;
            v41 = y2a[v24];
            v14 = v43;
          }
          else
          {
            v41 = (int)v21[v20];
          }
          v15 = SHIWORD(v41);
          v16 = (__int16)v41 >> 1;
          if ( v16 < *v8 )
            *v8 = v16;
          if ( SHIWORD(v41) < *y1 )
            *y1 = SHIWORD(v41);
          if ( v16 > *x2 )
            *x2 = v16;
          if ( SHIWORD(v41) > *y2 )
            *y2 = SHIWORD(v41);
          v9 = this;
          ++v17;
        }
        while ( v17 < v14[v13].DataSize );
        v10 = v47;
      }
      v11 = ++v10;
      v47 = v10;
    }
    while ( v10 < v9->TmpContours.Size );
  }
}

__int64 __fastcall Scaleform::GFx::FontCompactor::navigateToEndGlyph(
        Scaleform::GFx::FontCompactor *this,
        unsigned int pos)
{
  Scaleform::GFx::PathDataDecoder<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> > *p_Decoder; // r14
  unsigned __int8 **Pages; // r15
  unsigned int v4; // ebx
  unsigned int v5; // ebx
  unsigned int v6; // ebx
  unsigned int v7; // esi
  int v8; // esi
  int v9; // eax
  unsigned int v10; // ebx
  unsigned int v11; // ebx
  unsigned int v12; // ebx
  unsigned int i; // er11
  unsigned int v14; // er8
  char *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // r9
  unsigned int v; // [rsp+20h] [rbp-48h] BYREF
  char v20; // [rsp+29h] [rbp-3Fh] BYREF

  p_Decoder = &this->Decoder;
  Pages = this->Decoder.Data->Pages;
  v4 = ((Pages[(unsigned __int64)(((Pages[(unsigned __int64)pos >> 12][pos & 0xFFF] & 1) != 0) + 1 + pos) >> 12][(((Pages[(unsigned __int64)pos >> 12][pos & 0xFFF] & 1) != 0) + 1 + (_WORD)pos) & 0xFFF] & 1) != 0)
     + 1
     + ((Pages[(unsigned __int64)pos >> 12][pos & 0xFFF] & 1) != 0)
     + 1
     + pos;
  v5 = ((Pages[(unsigned __int64)v4 >> 12][(((Pages[(unsigned __int64)(((Pages[(unsigned __int64)pos >> 12][pos & 0xFFF] & 1) != 0)
                                                                     + 1
                                                                     + pos) >> 12][(((Pages[(unsigned __int64)pos >> 12][pos & 0xFFF] & 1) != 0)
                                                                                  + 1
                                                                                  + (_WORD)pos) & 0xFFF] & 1) != 0)
                                          + 1
                                          + ((Pages[(unsigned __int64)pos >> 12][pos & 0xFFF] & 1) != 0)
                                          + 1
                                          + (_WORD)pos) & 0xFFF] & 1) != 0)
     + 1
     + v4;
  v6 = ((Pages[(unsigned __int64)v5 >> 12][v5 & 0xFFF] & 1) != 0) + 1 + v5;
  v7 = Pages[(unsigned __int64)v6 >> 12][v6 & 0xFFF];
  if ( (v7 & 1) != 0 )
  {
    v8 = (v7 >> 1) | (Pages[(unsigned __int64)(v6 + 1) >> 12][((_WORD)v6 + 1) & 0xFFF] << 7);
    v9 = 2;
  }
  else
  {
    v8 = v7 >> 1;
    v9 = 1;
  }
  v10 = v9 + v6;
  while ( v8 )
  {
    --v8;
    v11 = ((Pages[(unsigned __int64)v10 >> 12][v10 & 0xFFF] & 1) != 0) + 1 + v10;
    v12 = ((Pages[(unsigned __int64)v11 >> 12][v11 & 0xFFF] & 1) != 0) + 1 + v11;
    v10 = Scaleform::GFx::PathDataDecoder<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261>>::ReadUInt30(
            p_Decoder,
            v12,
            &v)
        + v12;
    if ( (v & 1) == 0 )
    {
      for ( i = v >> 1;
            i;
            v10 += Scaleform::GFx::PathDataDecoder<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261>>::Sizes[v16]
                 + 1 )
      {
        v14 = v10 + 1;
        --i;
        v15 = &v20;
        v16 = p_Decoder->Data->Pages[(unsigned __int64)v10 >> 12][v10 & 0xFFF] & 0xF;
        if ( Scaleform::GFx::PathDataDecoder<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261>>::Sizes[v16] )
        {
          v17 = Scaleform::GFx::PathDataDecoder<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261>>::Sizes[v16];
          do
          {
            ++v15;
            ++v14;
            --v17;
          }
          while ( v17 );
        }
      }
      v = i - 1;
    }
  }
  return v10;
}

void __fastcall Scaleform::GFx::FontCompactor::normalizeLastContour(Scaleform::GFx::FontCompactor *this)
{
  Scaleform::GFx::FontCompactor::ContourType *v2; // r13
  Scaleform::GFx::FontCompactor::VertexType v3; // eax
  Scaleform::GFx::FontCompactor::VertexType v4; // ecx
  unsigned __int64 Size; // rax
  unsigned int DataSize; // er11
  unsigned __int64 DataStart; // rax
  unsigned __int64 v8; // rax
  unsigned int v9; // er8
  Scaleform::GFx::FontCompactor::VertexType **Pages; // rbx
  int v11; // er12
  unsigned int v12; // edx
  unsigned int v13; // er15
  unsigned int v14; // er14
  int v15; // er10
  __int64 y; // r9
  unsigned int v17; // er8
  unsigned int v18; // eax
  Scaleform::GFx::FontCompactor::VertexType *v19; // rax
  unsigned __int64 v20; // rbx
  unsigned int v21; // er8
  Scaleform::GFx::FontCompactor::VertexType **v22; // r10
  Scaleform::GFx::FontCompactor::VertexType v23; // ebx
  unsigned __int64 v24; // r15
  Scaleform::GFx::FontCompactor::VertexType v25; // edi
  unsigned __int64 v26; // rbx
  unsigned __int64 v27; // rdi
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // rbx
  Scaleform::GFx::FontCompactor::VertexType *v31; // rdi
  unsigned __int64 MaxPages; // r8
  Scaleform::GFx::FontCompactor::VertexType **v33; // rdx
  Scaleform::GFx::FontCompactor::VertexType **v34; // rax
  unsigned int v35; // [rsp+60h] [rbp+8h] BYREF
  int v36; // [rsp+68h] [rbp+10h] BYREF

  v2 = &this->TmpContours.Pages[(this->TmpContours.Size - 1) >> 6][(LODWORD(this->TmpContours.Size) - 1) & 0x3F];
  v3 = this->TmpVertices.Pages[(this->TmpVertices.Size - 1) >> 6][(LODWORD(this->TmpVertices.Size) - 1) & 0x3F];
  if ( (v3.x & 1) == 0 )
  {
    v4 = this->TmpVertices.Pages[(unsigned __int64)v2->DataStart >> 6][v2->DataStart & 0x3F];
    v35 = (unsigned int)this->TmpVertices.Pages[(unsigned __int64)v2->DataStart >> 6][v2->DataStart & 0x3F];
    if ( __PAIR32__(v4.y, v35) == v3 )
    {
      --v2->DataSize;
      Size = this->TmpVertices.Size;
      if ( Size )
        this->TmpVertices.Size = Size - 1;
    }
  }
  DataSize = v2->DataSize;
  if ( DataSize < 3 )
  {
    DataStart = v2->DataStart;
    if ( DataStart < this->TmpVertices.Size )
      this->TmpVertices.Size = DataStart;
    v8 = this->TmpContours.Size;
    if ( v8 )
      this->TmpContours.Size = v8 - 1;
    return;
  }
  v9 = v2->DataStart;
  Pages = this->TmpVertices.Pages;
  v11 = 1;
  v12 = 1;
  v13 = 0;
  v14 = 0;
  v15 = Pages[(unsigned __int64)v9 >> 6][v9 & 0x3F].x >> 1;
  y = (unsigned int)Pages[(unsigned __int64)v9 >> 6][v9 & 0x3F].y;
  v17 = v2->DataStart + 1;
  do
  {
    v18 = (unsigned int)Pages[(unsigned __int64)v17 >> 6][v17 & 0x3F];
    v35 = v18;
    if ( (v18 & 1) != 0 )
    {
      ++v12;
      ++v17;
      goto LABEL_19;
    }
    if ( SHIWORD(v18) < (int)y )
    {
      y = (unsigned int)SHIWORD(v18);
LABEL_18:
      v14 = v12;
      goto LABEL_19;
    }
    if ( SHIWORD(v18) == (_DWORD)y && (__int16)v35 >> 1 < v15 )
    {
      v15 = (__int16)v35;
      goto LABEL_18;
    }
LABEL_19:
    ++v12;
    ++v17;
  }
  while ( v12 < DataSize );
  if ( !v14 )
    return;
  this->TmpContour.Size = 0i64;
  v19 = Pages[(unsigned __int64)(v14 + v2->DataStart) >> 6];
  v20 = this->TmpContour.Size >> 6;
  v35 = *(_DWORD *)&v19[((_BYTE)v14 + LOBYTE(v2->DataStart)) & 0x3F] & 0xFFFFFFFE;
  if ( v20 >= this->TmpContour.NumPages )
    Scaleform::ArrayPagedBase<Scaleform::GFx::FontCompactor::VertexType,6,64,Scaleform::AllocatorPagedGH_POD<Scaleform::GFx::FontCompactor::VertexType,261>>::allocatePage(
      &this->TmpContour,
      v20);
  this->TmpContour.Pages[v20][this->TmpContour.Size & 0x3F] = (Scaleform::GFx::FontCompactor::VertexType)v35;
  ++this->TmpContour.Size;
  if ( v2->DataSize > 1 )
  {
    while ( 2 )
    {
      v21 = v2->DataSize;
      y = v2->DataStart;
      ++v14;
      v22 = this->TmpVertices.Pages;
      v23 = v22[(unsigned __int64)((unsigned int)y + v14 % v21) >> 6][((_BYTE)y + (unsigned __int8)(v14 % v21)) & 0x3F];
      v35 = (unsigned int)v23;
      if ( (v23.x & 1) != 0 )
      {
        ++v14;
        v24 = this->TmpContour.Size >> 6;
        ++v11;
        v25 = v22[(unsigned __int64)((unsigned int)y + v14 % v21) >> 6][((_BYTE)y + (unsigned __int8)(v14 % v21)) & 0x3F];
        if ( v24 >= this->TmpContour.NumPages )
          Scaleform::ArrayPagedBase<Scaleform::GFx::FontCompactor::VertexType,6,64,Scaleform::AllocatorPagedGH_POD<Scaleform::GFx::FontCompactor::VertexType,261>>::allocatePage(
            &this->TmpContour,
            this->TmpContour.Size >> 6);
        this->TmpContour.Pages[v24][this->TmpContour.Size & 0x3F] = v23;
        v26 = ++this->TmpContour.Size >> 6;
        if ( v26 >= this->TmpContour.NumPages )
          Scaleform::ArrayPagedBase<Scaleform::GFx::FontCompactor::VertexType,6,64,Scaleform::AllocatorPagedGH_POD<Scaleform::GFx::FontCompactor::VertexType,261>>::allocatePage(
            &this->TmpContour,
            this->TmpContour.Size >> 6);
        this->TmpContour.Pages[v26][this->TmpContour.Size & 0x3F] = v25;
        goto LABEL_35;
      }
      if ( (((unsigned __int16)v35 ^ this->TmpContour.Pages[(this->TmpContour.Size - 1) >> 6][(LODWORD(this->TmpContour.Size)
                                                                                             - 1) & 0x3F].x) & 0xFFFE) != 0
        || HIWORD(v35) != this->TmpContour.Pages[(this->TmpContour.Size - 1) >> 6][(LODWORD(this->TmpContour.Size) - 1) & 0x3F].y )
      {
        v27 = this->TmpContour.Size >> 6;
        if ( v27 >= this->TmpContour.NumPages )
          Scaleform::ArrayPagedBase<Scaleform::GFx::FontCompactor::VertexType,6,64,Scaleform::AllocatorPagedGH_POD<Scaleform::GFx::FontCompactor::VertexType,261>>::allocatePage(
            &this->TmpContour,
            this->TmpContour.Size >> 6);
        this->TmpContour.Pages[v27][this->TmpContour.Size & 0x3F] = v23;
LABEL_35:
        ++this->TmpContour.Size;
      }
      if ( ++v11 >= v2->DataSize )
      {
        v13 = 0;
        break;
      }
      continue;
    }
  }
  v28 = v2->DataStart;
  if ( v28 < this->TmpVertices.Size )
    this->TmpVertices.Size = v28;
  if ( this->TmpContour.Size )
  {
    v29 = 0i64;
    do
    {
      v30 = this->TmpVertices.Size >> 6;
      v31 = &this->TmpContour.Pages[v29 >> 6][v29 & 0x3F];
      if ( v30 >= this->TmpVertices.NumPages )
      {
        MaxPages = this->TmpVertices.MaxPages;
        if ( v30 >= MaxPages )
        {
          v33 = this->TmpVertices.Pages;
          if ( v33 )
          {
            v34 = (Scaleform::GFx::FontCompactor::VertexType **)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, Scaleform::GFx::FontCompactor::VertexType **, unsigned __int64, __int64))Scaleform::Memory::pGlobalHeap->Realloc)(
                                                                  Scaleform::Memory::pGlobalHeap,
                                                                  v33,
                                                                  8 * MaxPages + 512,
                                                                  y);
          }
          else
          {
            v35 = 261;
            v34 = (Scaleform::GFx::FontCompactor::VertexType **)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64, unsigned int *, __int64))Scaleform::Memory::pGlobalHeap->Alloc)(
                                                                  Scaleform::Memory::pGlobalHeap,
                                                                  512i64,
                                                                  &v35,
                                                                  y);
          }
          this->TmpVertices.MaxPages += 64i64;
          this->TmpVertices.Pages = v34;
        }
        v36 = 261;
        this->TmpVertices.Pages[v30] = (Scaleform::GFx::FontCompactor::VertexType *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64, int *, __int64))Scaleform::Memory::pGlobalHeap->Alloc)(
                                                                                      Scaleform::Memory::pGlobalHeap,
                                                                                      256i64,
                                                                                      &v36,
                                                                                      y);
        ++this->TmpVertices.NumPages;
      }
      ++v13;
      this->TmpVertices.Pages[v30][this->TmpVertices.Size & 0x3F] = *v31;
      ++this->TmpVertices.Size;
      v29 = v13;
    }
    while ( v13 < this->TmpContour.Size );
  }
  v2->DataSize = this->TmpContour.Size;
}

void __fastcall Scaleform::HashSetBase<unsigned short,Scaleform::FixedSizeHash<unsigned short>,Scaleform::FixedSizeHash<unsigned short>,Scaleform::AllocatorGH<unsigned short,2>,Scaleform::HashsetCachedEntry<unsigned short,Scaleform::FixedSizeHash<unsigned short>>>::setRawCapacity(
        Scaleform::HashSetBase<unsigned short,Scaleform::FixedSizeHash<unsigned short>,Scaleform::FixedSizeHash<unsigned short>,Scaleform::AllocatorGH<unsigned short,2>,Scaleform::HashsetCachedEntry<unsigned short,Scaleform::FixedSizeHash<unsigned short> > > *this,
        void *pheapAddr,
        unsigned __int64 newSize)
{
  __int64 v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rcx
  unsigned __int64 v8; // rbp
  const unsigned __int16 *v9; // rsi
  unsigned __int64 v10; // rax
  int v11; // [rsp+60h] [rbp+18h] BYREF
  Scaleform::HashSetBase<unsigned short,Scaleform::FixedSizeHash<unsigned short>,Scaleform::FixedSizeHash<unsigned short>,Scaleform::AllocatorGH<unsigned short,2>,Scaleform::HashsetCachedEntry<unsigned short,Scaleform::FixedSizeHash<unsigned short> > > v12; // [rsp+68h] [rbp+20h] BYREF

  if ( newSize )
  {
    if ( newSize >= 8 )
      v5 = 1i64 << ((unsigned __int8)Scaleform::Alg::UpperBit(newSize - 1) + 1);
    else
      v5 = 8i64;
    v11 = 2;
    v6 = 0i64;
    v12.pTable = 0i64;
    v12.pTable = (Scaleform::HashSetBase<unsigned short,Scaleform::FixedSizeHash<unsigned short>,Scaleform::FixedSizeHash<unsigned short>,Scaleform::AllocatorGH<unsigned short,2>,Scaleform::HashsetCachedEntry<unsigned short,Scaleform::FixedSizeHash<unsigned short> > >::TableType *)Scaleform::Memory::pGlobalHeap->Alloc(Scaleform::Memory::pGlobalHeap, 24 * v5 + 16, &v11);
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
        v9 = (const unsigned __int16 *)((char *)this->pTable + v6);
        if ( *((_QWORD *)v9 + 2) != -2i64 )
        {
          v10 = Scaleform::FixedSizeHash<unsigned short>::operator()(
                  (Scaleform::FixedSizeHash<unsigned short> *)&v11,
                  v9 + 16);
          Scaleform::HashSetBase<unsigned short,Scaleform::FixedSizeHash<unsigned short>,Scaleform::FixedSizeHash<unsigned short>,Scaleform::AllocatorGH<unsigned short,2>,Scaleform::HashsetCachedEntry<unsigned short,Scaleform::FixedSizeHash<unsigned short>>>::add<unsigned short>(
            &v12,
            pheapAddr,
            v9 + 16,
            v10);
          *((_QWORD *)v9 + 2) = -2i64;
        }
        v6 += 24i64;
        --v8;
      }
      while ( v8 );
      if ( this->pTable )
        ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
    }
    this->pTable = v12.pTable;
  }
  else
  {
    Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorGH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>::Clear((Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorGH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > *)this);
  }
}

void __fastcall Scaleform::HashSetBase<Scaleform::GFx::FontCompactor::ContourKeyType,Scaleform::GFx::FontCompactor::ContourKeyType,Scaleform::GFx::FontCompactor::ContourKeyType,Scaleform::AllocatorGH<Scaleform::GFx::FontCompactor::ContourKeyType,261>,Scaleform::HashsetCachedEntry<Scaleform::GFx::FontCompactor::ContourKeyType,Scaleform::GFx::FontCompactor::ContourKeyType>>::setRawCapacity(
        Scaleform::HashSetBase<Scaleform::GFx::FontCompactor::GlyphKeyType,Scaleform::GFx::FontCompactor::GlyphKeyType,Scaleform::GFx::FontCompactor::GlyphKeyType,Scaleform::AllocatorGH<Scaleform::GFx::FontCompactor::ContourKeyType,261>,Scaleform::HashsetCachedEntry<Scaleform::GFx::FontCompactor::GlyphKeyType,Scaleform::GFx::FontCompactor::GlyphKeyType> > *this,
        void *pheapAddr,
        unsigned __int64 newSize)
{
  __int64 v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // rcx
  unsigned __int64 v8; // rsi
  Scaleform::HashSetBase<Scaleform::GFx::FontCompactor::GlyphKeyType,Scaleform::GFx::FontCompactor::GlyphKeyType,Scaleform::GFx::FontCompactor::GlyphKeyType,Scaleform::AllocatorGH<Scaleform::GFx::FontCompactor::ContourKeyType,261>,Scaleform::HashsetCachedEntry<Scaleform::GFx::FontCompactor::GlyphKeyType,Scaleform::GFx::FontCompactor::GlyphKeyType> >::TableType *pTable; // rdi
  int v10; // [rsp+50h] [rbp+18h] BYREF
  Scaleform::HashSetBase<Scaleform::GFx::FontCompactor::GlyphKeyType,Scaleform::GFx::FontCompactor::GlyphKeyType,Scaleform::GFx::FontCompactor::GlyphKeyType,Scaleform::AllocatorGH<Scaleform::GFx::FontCompactor::ContourKeyType,261>,Scaleform::HashsetCachedEntry<Scaleform::GFx::FontCompactor::GlyphKeyType,Scaleform::GFx::FontCompactor::GlyphKeyType> > v11; // [rsp+58h] [rbp+20h] BYREF

  if ( newSize )
  {
    if ( newSize >= 8 )
      v5 = 1i64 << ((unsigned __int8)Scaleform::Alg::UpperBit(newSize - 1) + 1);
    else
      v5 = 8i64;
    v10 = 261;
    v6 = 0i64;
    v11.pTable = 0i64;
    v11.pTable = (Scaleform::HashSetBase<Scaleform::GFx::FontCompactor::GlyphKeyType,Scaleform::GFx::FontCompactor::GlyphKeyType,Scaleform::GFx::FontCompactor::GlyphKeyType,Scaleform::AllocatorGH<Scaleform::GFx::FontCompactor::ContourKeyType,261>,Scaleform::HashsetCachedEntry<Scaleform::GFx::FontCompactor::GlyphKeyType,Scaleform::GFx::FontCompactor::GlyphKeyType> >::TableType *)Scaleform::Memory::pGlobalHeap->Alloc(Scaleform::Memory::pGlobalHeap, 32 * v5 + 16, &v10);
    v11.pTable->EntryCount = 0i64;
    v11.pTable->SizeMask = v5 - 1;
    if ( v5 )
    {
      v7 = 0i64;
      do
      {
        v7 += 2i64;
        v11.pTable[v7 - 1].EntryCount = -2i64;
        --v5;
      }
      while ( v5 );
    }
    if ( this->pTable )
    {
      v8 = this->pTable->SizeMask + 1;
      do
      {
        pTable = this->pTable;
        if ( this->pTable[v6 + 1].EntryCount != -2i64 )
        {
          Scaleform::HashSetBase<Scaleform::GFx::FontCompactor::ContourKeyType,Scaleform::GFx::FontCompactor::ContourKeyType,Scaleform::GFx::FontCompactor::ContourKeyType,Scaleform::AllocatorGH<Scaleform::GFx::FontCompactor::ContourKeyType,261>,Scaleform::HashsetCachedEntry<Scaleform::GFx::FontCompactor::ContourKeyType,Scaleform::GFx::FontCompactor::ContourKeyType>>::add<Scaleform::GFx::FontCompactor::ContourKeyType>(
            &v11,
            pheapAddr,
            (const Scaleform::GFx::FontCompactor::GlyphKeyType *)&pTable[v6 + 2],
            LODWORD(pTable[v6 + 2].SizeMask));
          pTable[v6 + 1].EntryCount = -2i64;
        }
        v6 += 2i64;
        --v8;
      }
      while ( v8 );
      if ( this->pTable )
        ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
    }
    this->pTable = v11.pTable;
  }
  else
  {
    Scaleform::HashSetBase<Scaleform::GFx::ResourceWeakLib::ResourceNode,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp,Scaleform::AllocatorGH<Scaleform::GFx::ResourceWeakLib::ResourceNode,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::ResourceWeakLib::ResourceNode,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp>>::Clear((Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::AS3::GASRefCountBase *,Scaleform::GFx::AS3::WeakProxy *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::GASRefCountBase *> >,Scaleform::HashNode<Scaleform::GFx::AS3::GASRefCountBase *,Scaleform::GFx::AS3::WeakProxy *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::GASRefCountBase *> >::NodeHashF,Scaleform::HashNode<Scaleform::GFx::AS3::GASRefCountBase *,Scaleform::GFx::AS3::WeakProxy *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::GASRefCountBase *> >::NodeAltHashF,Scaleform::AllocatorGH<Scaleform::GFx::AS3::GASRefCountBase *,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::AS3::GASRefCountBase *,Scaleform::GFx::AS3::WeakProxy *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::GASRefCountBase *> >,Scaleform::HashNode<Scaleform::GFx::AS3::GASRefCountBase *,Scaleform::GFx::AS3::WeakProxy *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::GASRefCountBase *> >::NodeHashF> > *)this);
  }
}

