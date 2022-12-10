#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_pathdatapacker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_twips.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixpool.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_hash.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cxform.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filters.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filterparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textlayout.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_rasterizer.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_scale9grid.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraystaticbuff.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshkey.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_drawableimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_buffer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_vertex.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessdefs.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_states.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_statebag.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix4x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix3x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphfitter.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_stroker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_context.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_constants.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textmeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_containers.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_gradients.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitive.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocaddr.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_radixtree.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_fontcachehandle.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_font.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphparam.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_image.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatapacked.h"

void Scaleform::Render::FontCacheHandleRef::releaseFont(); // 0x1402EFCA0
void Scaleform::Render::FontCacheHandleManager::ProcessKillList(); // 0x1402EFAA0
void Scaleform::Render::FontCacheHandleManager::DestroyAllFonts(); // 0x1402EF990
void Scaleform::Render::FontCacheHandleManager::fontLost(Scaleform::Render::FontCacheHandleRef * href); // 0x1402EFC10
Scaleform::Render::FontCacheHandle * Scaleform::Render::FontCacheHandleManager::RegisterFont(Scaleform::Render::Font * font); // 0x1402EFB40void __fastcall Scaleform::Render::FontCacheHandleManager::DestroyAllFonts(
        Scaleform::Render::FontCacheHandleManager *this)
{
  Scaleform::Lock *p_FontLock; // rbx
  Scaleform::Render::FontCacheHandle *pNext; // rdi
  Scaleform::List<Scaleform::Render::FontCacheHandle,Scaleform::Render::FontCacheHandle,Scaleform::ListNode<Scaleform::Render::FontCacheHandle> > *v4; // rsi
  char v5; // r15
  Scaleform::Render::GlyphCache *pCache; // rcx
  Scaleform::Render::FontCacheHandle *v7; // r14
  Scaleform::Render::FontCacheHandle *v8; // rdi
  Scaleform::List<Scaleform::Render::FontCacheHandle,Scaleform::Render::FontCacheHandle,Scaleform::ListNode<Scaleform::Render::FontCacheHandle> > *Fonts; // rsi
  Scaleform::Render::FontCacheHandle *v10; // rbp
  Scaleform::RefCountVImpl *v11; // rax

  p_FontLock = &this->FontLock;
  Scaleform::Lock::DoLock(&this->FontLock);
  pNext = this->Fonts[1].Root.pNext;
  v4 = &this->Fonts[1];
  if ( pNext != (Scaleform::Render::FontCacheHandle *)&this->Fonts[1] )
  {
    v5 = 0;
    do
    {
      pCache = this->pCache;
      v7 = pNext->pNext;
      if ( pCache )
      {
        Scaleform::Render::GlyphCache::CleanUpFont(pCache, pNext);
        v5 = 1;
      }
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, pNext);
      pNext = v7;
    }
    while ( v7 != (Scaleform::Render::FontCacheHandle *)v4 );
    v4->Root.pPrev = (Scaleform::Render::FontCacheHandle *)v4;
    this->Fonts[1].Root.pNext = (Scaleform::Render::FontCacheHandle *)&this->Fonts[1];
    if ( v5 )
      Scaleform::Render::GlyphCache::MergeCacheSlots(this->pCache);
  }
  v8 = this->Fonts[0].Root.pNext;
  Fonts = this->Fonts;
  if ( v8 != (Scaleform::Render::FontCacheHandle *)this->Fonts )
  {
    do
    {
      v10 = v8->pNext;
      v8->pFont->hRef.pFontHandle = 0i64;
      v11 = (Scaleform::RefCountVImpl *)Scaleform::AtomicOpsRaw_8ByteImpl::Exchange_NoSync(
                                          (volatile __int64 *)&v8->pFont->hRef,
                                          0i64);
      if ( v11 )
        Scaleform::RefCountImpl::Release(v11);
      v8->pFont = 0i64;
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v8);
      v8 = v10;
    }
    while ( v10 != (Scaleform::Render::FontCacheHandle *)Fonts );
    Fonts->Root.pPrev = (Scaleform::Render::FontCacheHandle *)Fonts;
    Fonts->Root.pNext = (Scaleform::Render::FontCacheHandle *)Fonts;
  }
  Scaleform::Lock::Unlock(p_FontLock);
}

void __fastcall Scaleform::Render::FontCacheHandleManager::ProcessKillList(
        Scaleform::Render::FontCacheHandleManager *this)
{
  Scaleform::Render::FontCacheHandle *pNext; // rdi
  Scaleform::List<Scaleform::Render::FontCacheHandle,Scaleform::Render::FontCacheHandle,Scaleform::ListNode<Scaleform::Render::FontCacheHandle> > *v3; // rsi
  char v4; // r15
  Scaleform::Render::GlyphCache *pCache; // rcx
  Scaleform::Render::FontCacheHandle *v6; // rbp

  Scaleform::Lock::DoLock(&this->FontLock);
  pNext = this->Fonts[1].Root.pNext;
  v3 = &this->Fonts[1];
  if ( pNext != (Scaleform::Render::FontCacheHandle *)&this->Fonts[1] )
  {
    v4 = 0;
    do
    {
      pCache = this->pCache;
      v6 = pNext->pNext;
      if ( pCache )
      {
        Scaleform::Render::GlyphCache::CleanUpFont(pCache, pNext);
        v4 = 1;
      }
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, pNext);
      pNext = v6;
    }
    while ( v6 != (Scaleform::Render::FontCacheHandle *)v3 );
    v3->Root.pPrev = (Scaleform::Render::FontCacheHandle *)v3;
    this->Fonts[1].Root.pNext = (Scaleform::Render::FontCacheHandle *)&this->Fonts[1];
    if ( v4 )
      Scaleform::Render::GlyphCache::MergeCacheSlots(this->pCache);
  }
  Scaleform::Lock::Unlock(&this->FontLock);
}

Scaleform::Render::FontCacheHandle *__fastcall Scaleform::Render::FontCacheHandleManager::RegisterFont(
        Scaleform::Render::FontCacheHandleManager *this,
        Scaleform::Render::Font *font)
{
  Scaleform::Render::FontCacheHandle *v4; // rax
  Scaleform::Render::FontCacheHandle *volatile pFontHandle; // rdx
  Scaleform::Render::FontCacheHandle *pPrev; // rax

  if ( !font->hRef.pManager.Value )
  {
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)this);
    font->hRef.pManager.Value = this;
  }
  if ( !font->hRef.pFontHandle )
  {
    Scaleform::Lock::DoLock(&this->FontLock);
    v4 = (Scaleform::Render::FontCacheHandle *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))this->pRenderHeap->Alloc)(
                                                 this->pRenderHeap,
                                                 32i64);
    if ( v4 )
    {
      v4->pPrev = (Scaleform::Render::FontCacheHandle *)-1i64;
      v4->pNext = (Scaleform::Render::FontCacheHandle *)-1i64;
      v4->pManager = this;
      v4->pFont = font;
    }
    font->hRef.pFontHandle = v4;
    if ( !font->hRef.pFontHandle )
    {
      Scaleform::Lock::Unlock(&this->FontLock);
      return 0i64;
    }
    pFontHandle = font->hRef.pFontHandle;
    pPrev = this->Fonts[0].Root.pPrev;
    pFontHandle->pNext = (Scaleform::Render::FontCacheHandle *)this->Fonts;
    pFontHandle->pPrev = pPrev;
    this->Fonts[0].Root.pPrev->pNext = pFontHandle;
    this->Fonts[0].Root.pPrev = pFontHandle;
    Scaleform::Lock::Unlock(&this->FontLock);
  }
  return font->hRef.pFontHandle;
}

void __fastcall Scaleform::Render::FontCacheHandleManager::fontLost(
        Scaleform::Render::FontCacheHandleManager *this,
        Scaleform::Render::FontCacheHandleRef *href)
{
  Scaleform::Render::FontCacheHandle *volatile pFontHandle; // r8

  Scaleform::Lock::DoLock(&this->FontLock);
  pFontHandle = href->pFontHandle;
  if ( pFontHandle )
  {
    pFontHandle->pPrev->pNext = pFontHandle->pNext;
    pFontHandle->pNext->Scaleform::ListNode<Scaleform::Render::FontCacheHandle>::$29A7DCD470A9F46E3CE3439AB4CC2646::pPrev = pFontHandle->pPrev;
    pFontHandle->pPrev = (Scaleform::Render::FontCacheHandle *)-1i64;
    pFontHandle->pNext = (Scaleform::Render::FontCacheHandle *)-1i64;
    pFontHandle->pPrev = this->Fonts[1].Root.pPrev;
    pFontHandle->pNext = (Scaleform::Render::FontCacheHandle *)&this->Fonts[1];
    this->Fonts[1].Root.pPrev->pNext = pFontHandle;
    this->Fonts[1].Root.pPrev = pFontHandle;
    pFontHandle->pFont = 0i64;
  }
  Scaleform::Lock::Unlock(&this->FontLock);
}

void __fastcall Scaleform::Render::FontCacheHandleRef::releaseFont(Scaleform::Render::FontCacheHandleRef *this)
{
  Scaleform::Render::FontCacheHandleManager *v2; // rax
  Scaleform::RefCountVImpl *v3; // rbx

  v2 = (Scaleform::Render::FontCacheHandleManager *)Scaleform::AtomicOpsRaw_8ByteImpl::Exchange_NoSync(
                                                      (volatile __int64 *)this,
                                                      0i64);
  v3 = (Scaleform::RefCountVImpl *)v2;
  if ( v2 )
  {
    Scaleform::Render::FontCacheHandleManager::fontLost(v2, this);
    Scaleform::RefCountImpl::Release(v3);
  }
}

