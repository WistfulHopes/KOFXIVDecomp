#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textlayout.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatapacked.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_pathdatapacker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_font.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraystaticbuff.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_gradients.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphparam.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_image.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"

const unsigned long Scaleform::Render::TextLayout_RecordSizes[10]; // 0x14074C730
Scaleform::Render::TextLayout::TextLayout(const Scaleform::Render::TextLayout::Builder & builder); // 0x14037F1A0
void Scaleform::Render::TextLayout::Clear(); // 0x14037F790
void Scaleform::Render::TextLayout::Create(const Scaleform::Render::TextLayout::Builder & builder); // 0x14037F870
unsigned long long Scaleform::Render::TextLayout::ReadNext(unsigned long long pos, Scaleform::Render::TextLayout::Record * rec); // 0x14037FD70
Scaleform::Render::TextLayout::Builder::Builder(Scaleform::MemoryHeap * heap); // 0x14037F0C0
void Scaleform::Render::TextLayout::Builder::AddChar(unsigned long glyphIndex, float advance, bool invisible, bool fauxBold, bool fauxItalic); // 0x14037F2D0
void Scaleform::Render::TextLayout::Builder::ChangeColor(unsigned long color); // 0x14037F660
void Scaleform::Render::TextLayout::Builder::SetBackground(unsigned long bkColor, unsigned long brColor); // 0x14037FEF0
void Scaleform::Render::TextLayout::Builder::ChangeFont(Scaleform::Render::Font * f, float size); // 0x14037F6C0
void Scaleform::Render::TextLayout::Builder::AddRefCntData(Scaleform::RefCountImpl * p); // 0x14037F4B0
void Scaleform::Render::TextLayout::Builder::SetNewLine(float x, float y); // 0x14037FF60
void Scaleform::Render::TextLayout::Builder::AddSelection(const Scaleform::Render::Rect<float> & r, unsigned long color); // 0x14037F550
void Scaleform::Render::TextLayout::Builder::AddUnderline(float x, float y, float len, Scaleform::Render::TextUnderlineStyle style, unsigned long color); // 0x14037F5D0
void Scaleform::Render::TextLayout::Builder::AddCursor(const Scaleform::Render::Rect<float> & r, unsigned long color); // 0x14037F360
void Scaleform::Render::TextLayout::Builder::AddImage(Scaleform::Render::Image * img, float scaleX, float scaleY, float baseLine, float advance); // 0x14037F3E0//decompilation failure at 14074C730!
void __fastcall Scaleform::Render::TextLayout::Builder::Builder(
        Scaleform::Render::TextLayout::Builder *this,
        Scaleform::MemoryHeap *heap)
{
  *(_DWORD *)&this->Param.TextParam.BlurY = 0x100000;
  this->Param.TextParam.pFont = 0i64;
  *(_QWORD *)&this->Param.TextParam.GlyphIndex = 0i64;
  this->Param.ShadowParam.pFont = 0i64;
  *(_QWORD *)&this->Param.ShadowParam.GlyphIndex = 0i64;
  *(_DWORD *)&this->Param.ShadowParam.BlurY = 0x100000;
  *(_QWORD *)&this->Param.ShadowColor = 0i64;
  this->Param.ShadowOffsetY = 0.0;
  *(_QWORD *)&this->Bounds.x1 = 0i64;
  *(_QWORD *)&this->Bounds.x2 = 0i64;
  *(_QWORD *)&this->ClipBox.x1 = 0i64;
  *(_QWORD *)&this->ClipBox.x2 = 0i64;
  this->Data.Data = this->Data.Static;
  this->Data.pHeap = heap;
  this->Data.Size = 0i64;
  this->Data.Reserved = 1024i64;
  this->Fonts.Data = this->Fonts.Static;
  this->Fonts.pHeap = heap;
  this->Fonts.Size = 0i64;
  this->Fonts.Reserved = 32i64;
  this->Images.Data = this->Images.Static;
  this->Images.pHeap = heap;
  this->Images.Size = 0i64;
  this->Images.Reserved = 32i64;
  this->RefCntData.Data = this->RefCntData.Static;
  this->RefCntData.pHeap = heap;
  this->RefCntData.Size = 0i64;
  this->RefCntData.Reserved = 32i64;
  this->LastFont = 0i64;
  this->LastScale = 1.0;
}

void __fastcall Scaleform::Render::TextLayout::TextLayout(
        Scaleform::Render::TextLayout *this,
        const Scaleform::Render::TextLayout::Builder *builder)
{
  this->__vftable = (Scaleform::Render::TextLayout_vtbl *)&Scaleform::RefCountImplCore::`vftable';
  this->__vftable = (Scaleform::Render::TextLayout_vtbl *)&Scaleform::Render::TextLayout::`vftable';
  this->RefCount = 1;
  this->Param.TextParam.pFont = 0i64;
  *(_QWORD *)&this->Param.TextParam.GlyphIndex = 0i64;
  *(_DWORD *)&this->Param.TextParam.BlurY = 0x100000;
  this->Param.ShadowParam.pFont = 0i64;
  *(_QWORD *)&this->Param.ShadowParam.GlyphIndex = 0i64;
  *(_DWORD *)&this->Param.ShadowParam.BlurY = 0x100000;
  *(_QWORD *)&this->Param.ShadowColor = 0i64;
  this->Param.ShadowOffsetY = 0.0;
  *(_QWORD *)&this->Bounds.x1 = 0i64;
  *(_QWORD *)&this->Bounds.x2 = 0i64;
  *(_QWORD *)&this->ClipBox.x1 = 0i64;
  *(_QWORD *)&this->ClipBox.x2 = 0i64;
  this->Data.Data.Data = 0i64;
  this->Data.Data.Size = 0i64;
  this->Data.Data.Policy.Capacity = 0i64;
  this->pFonts = 0i64;
  this->FontCount = 0i64;
  this->pImages = 0i64;
  this->ImageCount = 0i64;
  this->pRefCntData = 0i64;
  this->RefCntCount = 0i64;
  Scaleform::Render::TextLayout::Create(this, builder);
}

void __fastcall Scaleform::Render::TextLayout::Builder::AddChar(
        Scaleform::Render::TextLayout::Builder *this,
        unsigned int glyphIndex,
        float advance,
        bool invisible,
        bool fauxBold,
        bool fauxItalic)
{
  bool v7; // r9
  unsigned __int8 *v8; // rbx
  int v9; // edi
  unsigned __int8 v10; // r8
  unsigned __int8 v11; // cl
  unsigned __int8 val[2]; // [rsp+20h] [rbp-18h] BYREF
  __int16 v13; // [rsp+22h] [rbp-16h]
  float v14; // [rsp+24h] [rbp-14h]

  v14 = advance;
  val[0] = 0;
  v7 = invisible;
  v13 = glyphIndex;
  v8 = val;
  v9 = 8;
  v10 = v7 | 2;
  if ( !fauxBold )
    v10 = v7;
  v11 = v10 | 4;
  if ( !fauxItalic )
    v11 = v10;
  val[1] = v11;
  do
  {
    Scaleform::ArrayStaticBuffPOD<unsigned char,1024,2>::PushBack(&this->Data, v8++);
    --v9;
  }
  while ( v9 );
}

void __fastcall Scaleform::Render::TextLayout::Builder::AddCursor(
        Scaleform::Render::TextLayout::Builder *this,
        const Scaleform::Render::Rect<float> *r,
        unsigned int color)
{
  Scaleform::Render::Rect<float> v3; // xmm0
  unsigned __int8 *v4; // rbx
  Scaleform::ArrayStaticBuffPOD<unsigned char,1024,2> *p_Data; // rsi
  int v6; // edi
  unsigned __int8 val[4]; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v8; // [rsp+24h] [rbp-24h]
  Scaleform::Render::Rect<float> v9; // [rsp+28h] [rbp-20h]

  v3 = *r;
  *(_DWORD *)val = 7;
  v4 = val;
  v8 = color;
  p_Data = &this->Data;
  v9 = v3;
  v6 = 24;
  do
  {
    Scaleform::ArrayStaticBuffPOD<unsigned char,1024,2>::PushBack(p_Data, v4++);
    --v6;
  }
  while ( v6 );
}

void __fastcall Scaleform::Render::TextLayout::Builder::AddImage(
        Scaleform::Render::TextLayout::Builder *this,
        Scaleform::Render::Image *img,
        float scaleX,
        float scaleY,
        float baseLine,
        float advance)
{
  const unsigned __int8 *v6; // rdi
  unsigned __int64 v7; // rbx
  int v10; // esi
  unsigned __int64 Size; // rcx
  Scaleform::Render::Image **Data; // rax
  int v13; // [rsp+20h] [rbp-38h] BYREF
  Scaleform::Render::Image *v14; // [rsp+28h] [rbp-30h]
  float v15; // [rsp+30h] [rbp-28h]
  float v16; // [rsp+34h] [rbp-24h]
  float v17; // [rsp+38h] [rbp-20h]
  float v18; // [rsp+3Ch] [rbp-1Ch]
  Scaleform::RefCountImpl *val; // [rsp+68h] [rbp+10h] BYREF

  val = (Scaleform::RefCountImpl *)img;
  v6 = (const unsigned __int8 *)&v13;
  v7 = 0i64;
  v15 = scaleX;
  v16 = scaleY;
  v17 = baseLine;
  v10 = 32;
  v18 = advance;
  v13 = 8;
  v14 = img;
  do
  {
    Scaleform::ArrayStaticBuffPOD<unsigned char,1024,2>::PushBack(&this->Data, v6++);
    --v10;
  }
  while ( v10 );
  Size = this->Images.Size;
  if ( Size )
  {
    Data = this->Images.Data;
    while ( img != *Data )
    {
      ++v7;
      ++Data;
      if ( v7 >= Size )
        goto LABEL_7;
    }
  }
  else
  {
LABEL_7:
    Scaleform::ArrayStaticBuffPOD<Scaleform::Render::Font *,32,2>::PushBack(
      (Scaleform::ArrayStaticBuffPOD<Scaleform::RefCountImpl *,32,2> *)&this->Images,
      &val);
  }
}

void __fastcall Scaleform::Render::TextLayout::Builder::AddRefCntData(
        Scaleform::Render::TextLayout::Builder *this,
        Scaleform::RefCountImpl *p)
{
  unsigned __int8 *v4; // rbx
  int v5; // edi
  unsigned __int64 Size; // rdx
  unsigned __int64 v7; // rcx
  Scaleform::RefCountImpl **Data; // rax
  unsigned __int8 val[2]; // [rsp+20h] [rbp-28h] BYREF
  Scaleform::RefCountImpl *v10; // [rsp+28h] [rbp-20h]
  Scaleform::RefCountImpl *v11; // [rsp+58h] [rbp+10h] BYREF

  v11 = p;
  strcpy((char *)val, "\t");
  v10 = p;
  v4 = val;
  v5 = 16;
  do
  {
    Scaleform::ArrayStaticBuffPOD<unsigned char,1024,2>::PushBack(&this->Data, v4++);
    --v5;
  }
  while ( v5 );
  Size = this->RefCntData.Size;
  v7 = 0i64;
  if ( Size )
  {
    Data = this->RefCntData.Data;
    while ( p != *Data )
    {
      ++v7;
      ++Data;
      if ( v7 >= Size )
        goto LABEL_7;
    }
  }
  else
  {
LABEL_7:
    Scaleform::ArrayStaticBuffPOD<Scaleform::Render::Font *,32,2>::PushBack(&this->RefCntData, &v11);
  }
}

void __fastcall Scaleform::Render::TextLayout::Builder::AddSelection(
        Scaleform::Render::TextLayout::Builder *this,
        const Scaleform::Render::Rect<float> *r,
        unsigned int color)
{
  Scaleform::Render::Rect<float> v3; // xmm0
  unsigned __int8 *v4; // rbx
  Scaleform::ArrayStaticBuffPOD<unsigned char,1024,2> *p_Data; // rsi
  int v6; // edi
  unsigned __int8 val[4]; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v8; // [rsp+24h] [rbp-24h]
  Scaleform::Render::Rect<float> v9; // [rsp+28h] [rbp-20h]

  v3 = *r;
  *(_DWORD *)val = 5;
  v4 = val;
  v8 = color;
  p_Data = &this->Data;
  v9 = v3;
  v6 = 24;
  do
  {
    Scaleform::ArrayStaticBuffPOD<unsigned char,1024,2>::PushBack(p_Data, v4++);
    --v6;
  }
  while ( v6 );
}

void __fastcall Scaleform::Render::TextLayout::Builder::AddUnderline(
        Scaleform::Render::TextLayout::Builder *this,
        float x,
        float y,
        float len,
        Scaleform::Render::TextUnderlineStyle style,
        unsigned int color)
{
  unsigned __int8 *v6; // rbx
  Scaleform::ArrayStaticBuffPOD<unsigned char,1024,2> *p_Data; // rsi
  int v8; // edi
  unsigned __int8 val[2]; // [rsp+20h] [rbp-28h] BYREF
  __int16 v10; // [rsp+22h] [rbp-26h]
  float v11; // [rsp+24h] [rbp-24h]
  float v12; // [rsp+28h] [rbp-20h]
  float v13; // [rsp+2Ch] [rbp-1Ch]
  unsigned int v14; // [rsp+30h] [rbp-18h]

  v6 = val;
  v10 = style;
  p_Data = &this->Data;
  v8 = 20;
  v14 = color;
  v11 = x;
  v12 = y;
  v13 = len;
  *(_WORD *)val = 6;
  do
  {
    Scaleform::ArrayStaticBuffPOD<unsigned char,1024,2>::PushBack(p_Data, v6++);
    --v8;
  }
  while ( v8 );
}

void __fastcall Scaleform::Render::TextLayout::Builder::ChangeColor(
        Scaleform::Render::TextLayout::Builder *this,
        unsigned int color)
{
  const unsigned __int8 *p_val; // rdi
  Scaleform::ArrayStaticBuffPOD<unsigned char,1024,2> *p_Data; // rsi
  int v4; // ebx
  int val; // [rsp+40h] [rbp+18h] BYREF
  unsigned int v6; // [rsp+44h] [rbp+1Ch]

  val = 1;
  p_val = (const unsigned __int8 *)&val;
  v6 = color;
  p_Data = &this->Data;
  v4 = 8;
  do
  {
    Scaleform::ArrayStaticBuffPOD<unsigned char,1024,2>::PushBack(p_Data, p_val++);
    --v4;
  }
  while ( v4 );
}

void __fastcall Scaleform::Render::TextLayout::Builder::ChangeFont(
        Scaleform::Render::TextLayout::Builder *this,
        Scaleform::Render::Font *f,
        float size)
{
  unsigned __int64 v3; // rbx
  const unsigned __int8 *v4; // rdi
  int v6; // esi
  float v8; // xmm0_4
  unsigned __int64 v9; // rcx
  Scaleform::Render::Font **Data; // rax
  _DWORD v11[2]; // [rsp+20h] [rbp-38h] BYREF
  Scaleform::Render::Font *v12; // [rsp+28h] [rbp-30h]
  Scaleform::RefCountImpl *val; // [rsp+68h] [rbp+10h] BYREF

  val = f;
  v3 = 0i64;
  v11[0] = 4;
  *(float *)&v11[1] = size;
  v4 = (const unsigned __int8 *)v11;
  v12 = f;
  v6 = 16;
  do
  {
    Scaleform::ArrayStaticBuffPOD<unsigned char,1024,2>::PushBack(&this->Data, v4++);
    --v6;
  }
  while ( v6 );
  this->LastFont = f;
  v8 = f->GetNominalGlyphHeight(f);
  v9 = this->Fonts.Size;
  this->LastScale = size / v8;
  if ( v9 )
  {
    Data = this->Fonts.Data;
    while ( f != *Data )
    {
      ++v3;
      ++Data;
      if ( v3 >= v9 )
        goto LABEL_7;
    }
  }
  else
  {
LABEL_7:
    Scaleform::ArrayStaticBuffPOD<Scaleform::Render::Font *,32,2>::PushBack(
      (Scaleform::ArrayStaticBuffPOD<Scaleform::RefCountImpl *,32,2> *)&this->Fonts,
      &val);
  }
}

void __fastcall Scaleform::Render::TextLayout::Clear(Scaleform::Render::TextLayout *this)
{
  unsigned __int64 i; // rdi
  unsigned __int64 j; // rdi
  Scaleform::Render::Image *v4; // rcx
  unsigned __int64 k; // rdi

  for ( i = 0i64; i < this->FontCount; ++i )
    Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)this->pFonts[i]);
  for ( j = 0i64; j < this->ImageCount; ++j )
  {
    v4 = this->pImages[j];
    v4->Release(v4);
  }
  for ( k = 0i64; k < this->RefCntCount; ++k )
    Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)this->pRefCntData[k]);
  if ( this->Data.Data.Size && (this->Data.Data.Policy.Capacity & 0xFFFFFFFFFFFFFFFEui64) != 0 )
    Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,74>,Scaleform::ArrayDefaultPolicy>::Reserve(
      &this->Data.Data,
      &this->Data,
      0i64);
  this->Data.Data.Size = 0i64;
}

void __fastcall Scaleform::Render::TextLayout::Create(
        Scaleform::Render::TextLayout *this,
        const Scaleform::Render::TextLayout::Builder *builder)
{
  unsigned __int64 v2; // rdi
  float x1; // eax
  float y2; // xmm2_4
  float x2; // xmm1_4
  float v8; // xmm1_4
  float v9; // eax
  float v10; // xmm2_4
  unsigned __int64 Size; // rax
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rax
  Scaleform::Render::Font **pFonts; // rcx
  Scaleform::Render::Image **pImages; // rcx
  Scaleform::RefCountImpl **pRefCntData; // rcx
  unsigned __int64 i; // rsi
  unsigned __int64 j; // rsi
  Scaleform::Render::Image *v20; // rcx

  v2 = 0i64;
  this->pFonts = 0i64;
  this->FontCount = 0i64;
  this->pImages = 0i64;
  this->ImageCount = 0i64;
  this->pRefCntData = 0i64;
  this->RefCntCount = 0i64;
  x1 = builder->Bounds.x1;
  y2 = builder->Bounds.y2;
  x2 = builder->Bounds.x2;
  this->Bounds.y1 = builder->Bounds.y1;
  this->Bounds.x2 = x2;
  this->Bounds.y2 = y2;
  this->Bounds.x1 = x1;
  v8 = builder->ClipBox.x2;
  v9 = builder->ClipBox.x1;
  v10 = builder->ClipBox.y2;
  this->ClipBox.y1 = builder->ClipBox.y1;
  this->ClipBox.x2 = v8;
  this->ClipBox.y2 = v10;
  this->ClipBox.x1 = v9;
  this->Param = builder->Param;
  Size = builder->Data.Size;
  this->DataSize = Size;
  v12 = (Size + 7) & 0xFFFFFFFFFFFFFFF8ui64;
  Scaleform::ArrayData<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,74>,Scaleform::ArrayDefaultPolicy>::Resize(
    &this->Data.Data,
    v12 + 8 * (builder->Images.Size + builder->Fonts.Size + builder->RefCntData.Size));
  if ( builder->Fonts.Size )
  {
    this->pFonts = (Scaleform::Render::Font **)&this->Data.Data.Data[v12];
    v13 = builder->Fonts.Size;
    this->FontCount = v13;
    v12 += 8 * v13;
  }
  if ( builder->Images.Size )
  {
    this->pImages = (Scaleform::Render::Image **)&this->Data.Data.Data[v12];
    v14 = builder->Images.Size;
    this->ImageCount = v14;
    v12 += 8 * v14;
  }
  if ( builder->RefCntData.Size )
  {
    this->pRefCntData = (Scaleform::RefCountImpl **)&this->Data.Data.Data[v12];
    this->RefCntCount = builder->RefCntData.Size;
  }
  if ( builder->Data.Size )
    memmove(this->Data.Data.Data, builder->Data.Data, this->DataSize);
  pFonts = this->pFonts;
  if ( pFonts )
    memmove(pFonts, builder->Fonts.Data, 8 * this->FontCount);
  pImages = this->pImages;
  if ( pImages )
    memmove(pImages, builder->Images.Data, 8 * this->ImageCount);
  pRefCntData = this->pRefCntData;
  if ( pRefCntData )
    memmove(pRefCntData, builder->RefCntData.Data, 8 * this->RefCntCount);
  for ( i = 0i64; i < this->FontCount; ++i )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)this->pFonts[i]);
  for ( j = 0i64; j < this->ImageCount; ++j )
  {
    v20 = this->pImages[j];
    v20->AddRef(v20);
  }
  if ( this->RefCntCount )
  {
    do
      Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)this->pRefCntData[v2++]);
    while ( v2 < this->RefCntCount );
  }
}

void __fastcall Scaleform::ArrayStaticBuffPOD<unsigned char,1024,2>::PushBack(
        Scaleform::ArrayStaticBuffPOD<unsigned char,1024,2> *this,
        const unsigned __int8 *val)
{
  unsigned __int64 Size; // rcx
  Scaleform::MemoryHeap *pHeap; // rcx
  unsigned __int64 v6; // rdx
  unsigned __int8 *v7; // rax
  unsigned __int8 *Static; // rcx
  __int64 v9; // rdx
  __int128 v10; // xmm0
  unsigned __int64 Reserved; // r8
  unsigned __int8 *Data; // rdx

  Size = this->Size;
  if ( Size >= 0x400 )
  {
    if ( Size == 1024 )
    {
      pHeap = this->pHeap;
      v6 = 2 * this->Reserved;
      this->Reserved = v6;
      if ( pHeap )
        v7 = (unsigned __int8 *)pHeap->Alloc(pHeap, v6, 0i64);
      else
        v7 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                  Scaleform::Memory::pGlobalHeap,
                                  this,
                                  v6,
                                  0i64);
      this->Data = v7;
      Static = this->Static;
      v9 = 8i64;
      do
      {
        v7 += 128;
        v10 = *(_OWORD *)Static;
        Static += 128;
        *((_OWORD *)v7 - 8) = v10;
        *((_OWORD *)v7 - 7) = *((_OWORD *)Static - 7);
        *((_OWORD *)v7 - 6) = *((_OWORD *)Static - 6);
        *((_OWORD *)v7 - 5) = *((_OWORD *)Static - 5);
        *((_OWORD *)v7 - 4) = *((_OWORD *)Static - 4);
        *((_OWORD *)v7 - 3) = *((_OWORD *)Static - 3);
        *((_OWORD *)v7 - 2) = *((_OWORD *)Static - 2);
        *((_OWORD *)v7 - 1) = *((_OWORD *)Static - 1);
        --v9;
      }
      while ( v9 );
    }
    else
    {
      Reserved = this->Reserved;
      if ( Size >= Reserved )
      {
        Data = this->Data;
        this->Reserved = 2 * Reserved;
        this->Data = (unsigned __int8 *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, unsigned __int8 *))Scaleform::Memory::pGlobalHeap->Realloc)(
                                          Scaleform::Memory::pGlobalHeap,
                                          Data);
      }
    }
    this->Data[this->Size++] = *val;
  }
  else
  {
    this->Static[Size] = *val;
    ++this->Size;
  }
}

void __fastcall Scaleform::ArrayStaticBuffPOD<Scaleform::Render::Font *,32,2>::PushBack(
        Scaleform::ArrayStaticBuffPOD<Scaleform::RefCountImpl *,32,2> *this,
        Scaleform::RefCountImpl *const *val)
{
  unsigned __int64 Size; // rcx
  unsigned __int64 Reserved; // r8
  Scaleform::MemoryHeap *pHeap; // rcx
  unsigned __int64 v7; // r8
  Scaleform::RefCountImpl **v8; // rax
  Scaleform::RefCountImpl **Static; // rcx
  __int64 v10; // rdx
  __int128 v11; // xmm0
  Scaleform::RefCountImpl **Data; // rdx
  unsigned __int64 v13; // r8

  Size = this->Size;
  if ( Size >= 0x20 )
  {
    Reserved = this->Reserved;
    if ( Size == 32 )
    {
      pHeap = this->pHeap;
      v7 = 2 * Reserved;
      this->Reserved = v7;
      if ( pHeap )
        v8 = (Scaleform::RefCountImpl **)pHeap->Alloc(pHeap, 8 * v7, 0i64);
      else
        v8 = (Scaleform::RefCountImpl **)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                           Scaleform::Memory::pGlobalHeap,
                                           this,
                                           8 * v7,
                                           0i64);
      this->Data = v8;
      Static = this->Static;
      v10 = 2i64;
      do
      {
        v8 += 16;
        v11 = *(_OWORD *)Static;
        Static += 16;
        *((_OWORD *)v8 - 8) = v11;
        *((_OWORD *)v8 - 7) = *((_OWORD *)Static - 7);
        *((_OWORD *)v8 - 6) = *((_OWORD *)Static - 6);
        *((_OWORD *)v8 - 5) = *((_OWORD *)Static - 5);
        *((_OWORD *)v8 - 4) = *((_OWORD *)Static - 4);
        *((_OWORD *)v8 - 3) = *((_OWORD *)Static - 3);
        *((_OWORD *)v8 - 2) = *((_OWORD *)Static - 2);
        *((_OWORD *)v8 - 1) = *((_OWORD *)Static - 1);
        --v10;
      }
      while ( v10 );
    }
    else if ( Size >= Reserved )
    {
      Data = this->Data;
      v13 = 2 * Reserved;
      this->Reserved = v13;
      this->Data = (Scaleform::RefCountImpl **)Scaleform::Memory::pGlobalHeap->Realloc(
                                                 Scaleform::Memory::pGlobalHeap,
                                                 Data,
                                                 8 * v13);
    }
    this->Data[this->Size++] = *val;
  }
  else
  {
    this->Static[Size] = *val;
    ++this->Size;
  }
}

unsigned __int64 __fastcall Scaleform::Render::TextLayout::ReadNext(
        Scaleform::Render::TextLayout *this,
        unsigned __int64 pos,
        Scaleform::Render::TextLayout::Record *rec)
{
  int v5; // ecx
  unsigned __int64 v6; // rdx
  unsigned __int8 *p_Flags; // r8
  unsigned int v8; // er9
  unsigned __int8 v9; // cl

  if ( pos >= this->DataSize )
    return 0i64;
  v5 = this->Data.Data.Data[pos];
  v6 = pos + 1;
  rec->mChar.Tag = v5;
  p_Flags = &rec->mChar.Flags;
  v8 = Scaleform::Render::TextLayout_RecordSizes[v5] - 1;
  if ( Scaleform::Render::TextLayout_RecordSizes[v5] != 1 )
  {
    do
    {
      ++p_Flags;
      v9 = this->Data.Data.Data[v6++];
      *(p_Flags - 1) = v9;
      --v8;
    }
    while ( v8 );
  }
  return v6;
}

void __fastcall Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,74>,Scaleform::ArrayDefaultPolicy>::Reserve(
        Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,74>,Scaleform::ArrayDefaultPolicy> *this,
        const void *pheapAddr,
        unsigned __int64 newCapacity)
{
  unsigned __int8 *Data; // rdx
  unsigned __int64 v6; // rdi
  unsigned __int8 *v7; // rax
  int v8; // [rsp+30h] [rbp+8h] BYREF

  if ( newCapacity != this->Policy.Capacity )
  {
    Data = this->Data;
    if ( newCapacity )
    {
      v6 = (newCapacity + 3) & 0xFFFFFFFFFFFFFFFCui64;
      if ( Data )
      {
        v7 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(Scaleform::Memory::pGlobalHeap, Data, v6);
        this->Policy.Capacity = v6;
        this->Data = v7;
        return;
      }
      v8 = 74;
      this->Data = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                        Scaleform::Memory::pGlobalHeap,
                                        pheapAddr,
                                        v6,
                                        &v8);
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

void __fastcall Scaleform::ArrayData<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,74>,Scaleform::ArrayDefaultPolicy>::Resize(
        Scaleform::ArrayData<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,74>,Scaleform::ArrayDefaultPolicy> *this,
        unsigned __int64 newSize)
{
  if ( newSize >= this->Size )
  {
    if ( newSize > this->Policy.Capacity )
    {
      Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,74>,Scaleform::ArrayDefaultPolicy>::Reserve(
        this,
        this,
        newSize + (newSize >> 2));
      this->Size = newSize;
      return;
    }
  }
  else if ( newSize < this->Policy.Capacity >> 1 )
  {
    Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,74>,Scaleform::ArrayDefaultPolicy>::Reserve(
      this,
      this,
      newSize);
    this->Size = newSize;
    return;
  }
  this->Size = newSize;
}

void __fastcall Scaleform::Render::TextLayout::Builder::SetBackground(
        Scaleform::Render::TextLayout::Builder *this,
        unsigned int bkColor,
        unsigned int brColor)
{
  unsigned __int8 *v3; // rdi
  Scaleform::ArrayStaticBuffPOD<unsigned char,1024,2> *p_Data; // rsi
  int v5; // ebx
  unsigned __int8 val[4]; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v7; // [rsp+24h] [rbp-24h]
  unsigned int v8; // [rsp+28h] [rbp-20h]

  *(_DWORD *)val = 2;
  v3 = val;
  v7 = bkColor;
  p_Data = &this->Data;
  v8 = brColor;
  v5 = 12;
  do
  {
    Scaleform::ArrayStaticBuffPOD<unsigned char,1024,2>::PushBack(p_Data, v3++);
    --v5;
  }
  while ( v5 );
}

void __fastcall Scaleform::Render::TextLayout::Builder::SetNewLine(
        Scaleform::Render::TextLayout::Builder *this,
        float x,
        float y)
{
  unsigned __int8 *v3; // rbx
  Scaleform::ArrayStaticBuffPOD<unsigned char,1024,2> *p_Data; // rsi
  int v5; // edi
  unsigned __int8 val[4]; // [rsp+20h] [rbp-28h] BYREF
  float v7; // [rsp+24h] [rbp-24h]
  float v8; // [rsp+28h] [rbp-20h]

  v7 = x;
  v3 = val;
  v8 = y;
  p_Data = &this->Data;
  *(_DWORD *)val = 3;
  v5 = 12;
  do
  {
    Scaleform::ArrayStaticBuffPOD<unsigned char,1024,2>::PushBack(p_Data, v3++);
    --v5;
  }
  while ( v5 );
}

