#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_buffergeneric.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_buffer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_image.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"

Scaleform::Render::Size<unsigned long> Scaleform::Render::RBGenericImpl::RenderBufferManager::RoundUpImageSize(const Scaleform::Render::Size<unsigned long> & size); // 0x1406FBA00
Scaleform::Render::RBGenericImpl::RenderBufferManager::RenderBufferManager(Scaleform::Render::RBGenericImpl::DSSizeMode depthStencilSizeMode, unsigned long long memReuseLimit, unsigned long long memAbsoluteLimit); // 0x1406FB000
bool Scaleform::Render::RBGenericImpl::RenderBufferManager::Initialize(Scaleform::Render::TextureManager * manager); // 0x1406FB820
void Scaleform::Render::RBGenericImpl::RenderBufferManager::Destroy(); // 0x1406FB6B0
void Scaleform::Render::RBGenericImpl::RenderBufferManager::EndFrame(); // 0x1406FB710
void Scaleform::Render::RBGenericImpl::RenderBufferManager::Reset(); // 0x1406FB9B0
void Scaleform::Render::RBGenericImpl::RenderBufferManager::SetLimits(unsigned long long memReuseLimit, unsigned long long memAbsoluteLimit); // 0x1406FBB80
void Scaleform::Render::RBGenericImpl::RenderBufferManager::DumpUsage(); // 0x1406FB6F0
Scaleform::Render::RenderTarget * Scaleform::Render::RBGenericImpl::RenderBufferManager::CreateRenderTarget(const Scaleform::Render::Size<unsigned long> & size, Scaleform::Render::RenderBufferType type, Scaleform::Render::ImageFormat format, Scaleform::Render::Texture * texture); // 0x1406FB4C0
Scaleform::Render::RBGenericImpl::RenderTarget * Scaleform::Render::RBGenericImpl::RenderBufferManager::createRenderTarget(const Scaleform::Render::Size<unsigned long> & size, Scaleform::Render::RenderBufferType type, Scaleform::Render::ImageFormat format, Scaleform::Render::Texture * texture); // 0x1406FBBC0
Scaleform::Render::RenderTarget * Scaleform::Render::RBGenericImpl::RenderBufferManager::CreateTempRenderTarget(const Scaleform::Render::Size<unsigned long> & size); // 0x1406FB4D0
Scaleform::Render::DepthStencilBuffer * Scaleform::Render::RBGenericImpl::RenderBufferManager::CreateDepthStencilBuffer(const Scaleform::Render::Size<unsigned long> & size, bool temporary); // 0x1406FB240
Scaleform::Render::RBGenericImpl::RenderBufferManager::ReserveSpaceResult Scaleform::Render::RBGenericImpl::RenderBufferManager::reserveSpace(Scaleform::Render::RBGenericImpl::CacheData * * pdata, const Scaleform::Render::Size<unsigned long> & size, Scaleform::Render::RenderBufferType type, Scaleform::Render::ImageFormat format, unsigned long long requestSize); // 0x1406FC150
Scaleform::Render::RBGenericImpl::CacheData * Scaleform::Render::RBGenericImpl::RenderBufferManager::findMatch(Scaleform::Render::RBGenericImpl::RBCacheListType ltype, const Scaleform::Render::Size<unsigned long> & size, Scaleform::Render::RenderBufferType bufferType, Scaleform::Render::ImageFormat format); // 0x1406FC030
void Scaleform::Render::RBGenericImpl::RenderBufferManager::evictAll(Scaleform::Render::RBGenericImpl::RBCacheListType ltype); // 0x1406FBCF0
void Scaleform::Render::RBGenericImpl::RenderBufferManager::evictOverReuseLimit(Scaleform::Render::RBGenericImpl::RBCacheListType ltype); // 0x1406FBDF0
bool Scaleform::Render::RBGenericImpl::RenderBufferManager::evictUntilAvailable(Scaleform::Render::RBGenericImpl::RBCacheListType ltype, unsigned long long requestSize); // 0x1406FBF00
void Scaleform::Render::RBGenericImpl::RenderTarget::SetInUse(Scaleform::Render::RenderTargetUse inUse); // 0x1406FBAB0
void Scaleform::Render::RBGenericImpl::RenderTarget::Release(); // 0x1406FB910
void Scaleform::Render::RBGenericImpl::DepthStencilBuffer::AddRef(); // 0x1406FB230
void Scaleform::Render::RBGenericImpl::DepthStencilBuffer::Release(); // 0x1406FB890void __fastcall Scaleform::Render::RBGenericImpl::RenderBufferManager::RenderBufferManager(
        Scaleform::Render::RBGenericImpl::RenderBufferManager *this,
        Scaleform::Render::RBGenericImpl::DSSizeMode depthStencilSizeMode,
        unsigned __int64 memReuseLimit,
        unsigned __int64 memAbsoluteLimit)
{
  __int64 v5; // rcx
  Scaleform::List<Scaleform::Render::RBGenericImpl::CacheData,Scaleform::Render::RBGenericImpl::CacheData,Scaleform::ListNode<Scaleform::Render::RBGenericImpl::CacheData> > *BufferCache; // rax

  this->__vftable = (Scaleform::Render::RBGenericImpl::RenderBufferManager_vtbl *)&Scaleform::RefCountImplCore::`vftable';
  this->__vftable = (Scaleform::Render::RBGenericImpl::RenderBufferManager_vtbl *)&Scaleform::Render::RBGenericImpl::RenderBufferManager::`vftable';
  this->RefCount = 1;
  this->pTextureManager.pObject = 0i64;
  this->AllocSize = 0i64;
  this->DefImageFormat = Image_None;
  this->RequirePow2 = 0;
  this->ReuseLimit = memReuseLimit;
  this->AbsoluteLimit = memAbsoluteLimit;
  this->DepthStencilSizeMode = depthStencilSizeMode;
  v5 = 7i64;
  BufferCache = this->BufferCache;
  do
  {
    BufferCache->Root.pPrev = (Scaleform::Render::RBGenericImpl::CacheData *)BufferCache;
    BufferCache->Root.pNext = (Scaleform::Render::RBGenericImpl::CacheData *)BufferCache;
    ++BufferCache;
    --v5;
  }
  while ( v5 );
}

void __fastcall Scaleform::Render::RBGenericImpl::DepthStencilBuffer::AddRef(
        Scaleform::Render::RBGenericImpl::RenderTarget *this)
{
  ++this->RefCount;
}

Scaleform::Render::RenderBuffer *__fastcall Scaleform::Render::RBGenericImpl::RenderBufferManager::CreateDepthStencilBuffer(
        Scaleform::Render::RBGenericImpl::RenderBufferManager *this,
        const Scaleform::Render::Size<unsigned long> *size,
        bool temporary)
{
  bool v6; // zf
  Scaleform::Render::RBGenericImpl::CacheData *v7; // rbx
  Scaleform::Render::RenderBuffer *pBuffer; // rdi
  Scaleform::Render::Size<unsigned long> *v9; // rcx
  unsigned int Height; // eax
  Scaleform::Render::Size<unsigned long> v11; // rbp
  Scaleform::Render::RBGenericImpl::RenderBufferManager::ReserveSpaceResult v12; // eax
  int v13; // ecx
  Scaleform::Render::DepthStencilSurface *v14; // rbx
  Scaleform::Render::RBGenericImpl::CacheData *p_RefCount; // r14
  unsigned int v16; // ecx
  Scaleform::Render::RBGenericImpl::CacheData *pNext; // rax
  Scaleform::Render::Size<unsigned long> v18; // [rsp+30h] [rbp-48h] BYREF
  Scaleform::Render::RBGenericImpl::CacheData *pdata; // [rsp+38h] [rbp-40h] BYREF
  Scaleform::Render::Size<unsigned long> result; // [rsp+40h] [rbp-38h] BYREF
  int v21; // [rsp+80h] [rbp+8h] BYREF
  Scaleform::Render::Size<unsigned long> sizea; // [rsp+98h] [rbp+20h] BYREF

  if ( !this->pTextureManager.pObject )
    return 0i64;
  v6 = this->DepthStencilSizeMode == DSSM_Exact;
  v7 = 0i64;
  pdata = 0i64;
  pBuffer = 0i64;
  if ( v6 )
  {
    v9 = &v18;
    v18 = *size;
  }
  else
  {
    v9 = Scaleform::Render::RBGenericImpl::RenderBufferManager::RoundUpImageSize(this, &result, size);
  }
  Height = v9->Height;
  sizea.Width = v9->Width;
  sizea.Height = Height;
  v11 = (Scaleform::Render::Size<unsigned long>)(4 * Height * sizea.Width);
  if ( temporary )
  {
    v12 = Scaleform::Render::RBGenericImpl::RenderBufferManager::reserveSpace(
            this,
            &pdata,
            &sizea,
            RBuffer_DepthStencil,
            Image_None,
            4 * Height * sizea.Width);
    v7 = pdata;
    v13 = v12;
  }
  else
  {
    v13 = 1;
  }
  if ( v13 )
  {
    if ( v13 == 1 )
    {
      v14 = this->pTextureManager.pObject->CreateDepthStencilSurface(this->pTextureManager.pObject, &sizea, 0i64);
      if ( v14 )
      {
        v21 = 72;
        pBuffer = (Scaleform::Render::RenderBuffer *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                                       Scaleform::Memory::pGlobalHeap,
                                                       this,
                                                       96i64,
                                                       &v21);
        if ( pBuffer )
        {
          *(_QWORD *)&pBuffer->RefCount = 0i64;
          p_RefCount = (Scaleform::Render::RBGenericImpl::CacheData *)&pBuffer[1].RefCount;
          pBuffer->pManager = this;
          pBuffer->__vftable = (Scaleform::Render::RenderBuffer_vtbl *)&Scaleform::RefCountImplCore::`vftable';
          pBuffer->RefCount = 1;
          pBuffer->__vftable = (Scaleform::Render::RenderBuffer_vtbl *)&Scaleform::Render::RenderBuffer::`vftable';
          pBuffer->pRenderTargetData = 0i64;
          pBuffer->Type = 6 - temporary;
          v16 = sizea.Height;
          pBuffer->BufferSize.Width = sizea.Width;
          pBuffer->BufferSize.Height = v16;
          pBuffer[1].__vftable = 0i64;
          *(_QWORD *)&pBuffer[1].RefCount = -1i64;
          *(_QWORD *)&pBuffer[1].gap10 = -1i64;
          pBuffer[1].pManager = (Scaleform::Render::RenderBufferManager *)pBuffer;
          pBuffer[1].pRenderTargetData = 0i64;
          pBuffer[1].BufferSize = 0i64;
          pBuffer->__vftable = (Scaleform::Render::RenderBuffer_vtbl *)&Scaleform::Render::RBGenericImpl::DepthStencilBuffer::`vftable';
          Scaleform::Render::DepthStencilBuffer::initSurface((Scaleform::Render::DepthStencilBuffer *)pBuffer, v14);
          if ( temporary )
          {
            LODWORD(pBuffer[1].pRenderTargetData) = 1;
            *(_QWORD *)&pBuffer[1].gap10 = this->BufferCache[1].Root.pNext;
            p_RefCount->pPrev = (Scaleform::Render::RBGenericImpl::CacheData *)&this->BufferCache[1];
            this->BufferCache[1].Root.pNext->pPrev = p_RefCount;
            this->BufferCache[1].Root.pNext = p_RefCount;
            this->AllocSize += *(_QWORD *)&v11;
          }
          pBuffer[1].BufferSize = v11;
          Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v14);
        }
        else
        {
          pBuffer = 0i64;
          Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v14);
        }
      }
    }
  }
  else
  {
    v7->pPrev->pNext = v7->pNext;
    v7->pNext->Scaleform::ListNode<Scaleform::Render::RBGenericImpl::CacheData>::$8F38D2EF32BC6CBC78F578DFBEA87914::pPrev = v7->pPrev;
    v7->pPrev = (Scaleform::Render::RBGenericImpl::CacheData *)-1i64;
    v7->pNext = (Scaleform::Render::RBGenericImpl::CacheData *)-1i64;
    v7->ListType = RBCL_InUse;
    pNext = this->BufferCache[1].Root.pNext;
    v7->pPrev = (Scaleform::Render::RBGenericImpl::CacheData *)&this->BufferCache[1];
    v7->pNext = pNext;
    this->BufferCache[1].Root.pNext->pPrev = v7;
    this->BufferCache[1].Root.pNext = v7;
    pBuffer = v7->pBuffer;
    pBuffer->AddRef(pBuffer);
  }
  return pBuffer;
}

Scaleform::Render::RBGenericImpl::RenderTarget *__fastcall Scaleform::Render::RBGenericImpl::RenderBufferManager::CreateRenderTarget(
        Scaleform::Render::RBGenericImpl::RenderBufferManager *this,
        const Scaleform::Render::Size<unsigned long> *size,
        Scaleform::Render::RenderBufferType type,
        Scaleform::Render::ImageFormat format,
        Scaleform::Render::Texture *texture)
{
  if ( this->pTextureManager.pObject )
    return Scaleform::Render::RBGenericImpl::RenderBufferManager::createRenderTarget(this, size, type, format, texture);
  else
    return 0i64;
}

Scaleform::Render::RenderBuffer *__fastcall Scaleform::Render::RBGenericImpl::RenderBufferManager::CreateTempRenderTarget(
        Scaleform::Render::RBGenericImpl::RenderBufferManager *this,
        const Scaleform::Render::Size<unsigned long> *size)
{
  Scaleform::Render::RenderBuffer *pBuffer; // rdi
  Scaleform::Render::ImageFormat format; // er15
  unsigned int v7; // ebp
  unsigned __int64 requestSize; // rbp
  Scaleform::Render::RBGenericImpl::RenderBufferManager::ReserveSpaceResult v9; // eax
  Scaleform::Render::Texture *v10; // rax
  Scaleform::RefCountVImpl *v11; // rbx
  Scaleform::Render::RBGenericImpl::RenderTarget *RenderTarget; // rax
  unsigned int Width; // ecx
  unsigned int Height; // eax
  unsigned int v15; // eax
  Scaleform::Render::RenderTargetData *pRenderTargetData; // rax
  Scaleform::Render::Size<unsigned long> result; // [rsp+70h] [rbp+8h] BYREF
  Scaleform::Render::RBGenericImpl::CacheData *pdata; // [rsp+80h] [rbp+18h] BYREF

  if ( !this->pTextureManager.pObject )
    return 0i64;
  pdata = 0i64;
  pBuffer = 0i64;
  Scaleform::Render::RBGenericImpl::RenderBufferManager::RoundUpImageSize(this, &result, size);
  format = this->DefImageFormat;
  v7 = result.Height * result.Width;
  requestSize = (unsigned __int64)(Scaleform::Render::ImageData::GetFormatBitsPerPixel(format, 0) * v7) >> 3;
  v9 = Scaleform::Render::RBGenericImpl::RenderBufferManager::reserveSpace(
         this,
         &pdata,
         &result,
         RBuffer_Temporary,
         format,
         requestSize);
  if ( v9 )
  {
    if ( v9 == RS_Alloc )
    {
      v10 = this->pTextureManager.pObject->CreateTexture(
              this->pTextureManager.pObject,
              (unsigned int)format,
              1i64,
              &result,
              1024,
              0i64,
              0i64);
      v11 = (Scaleform::RefCountVImpl *)v10;
      if ( v10 )
      {
        pdata = (Scaleform::Render::RBGenericImpl::CacheData *)v10->ImgSize;
        RenderTarget = Scaleform::Render::RBGenericImpl::RenderBufferManager::createRenderTarget(
                         this,
                         (const Scaleform::Render::Size<unsigned long> *)&pdata,
                         RBuffer_Temporary,
                         format,
                         v10);
        pBuffer = RenderTarget;
        if ( RenderTarget )
        {
          RenderTarget->ListType = RBCL_InUse;
          RenderTarget->pNext = this->BufferCache[1].Root.pNext;
          RenderTarget->pPrev = (Scaleform::Render::RBGenericImpl::CacheData *)&this->BufferCache[1];
          this->BufferCache[1].Root.pNext->pPrev = &RenderTarget->Scaleform::Render::RBGenericImpl::CacheData;
          this->BufferCache[1].Root.pNext = &RenderTarget->Scaleform::Render::RBGenericImpl::CacheData;
          Width = size->Width;
          Height = size->Height;
          pBuffer[1].__vftable = 0i64;
          pBuffer[1].RefCount = Width;
          *((_DWORD *)&pBuffer[1].RefCount + 1) = Height;
          pBuffer[2].__vftable = (Scaleform::Render::RenderBuffer_vtbl *)requestSize;
          this->AllocSize += requestSize;
        }
        Scaleform::RefCountImpl::Release(v11);
      }
    }
  }
  else
  {
    pBuffer = pdata->pBuffer;
    pBuffer->pRenderTargetData->StripDepthStencilTarget(pBuffer->pRenderTargetData);
    ((void (__fastcall *)(Scaleform::Render::RenderBuffer *, __int64))pBuffer->__vftable[1].Release)(pBuffer, 1i64);
    v15 = size->Width;
    *((_DWORD *)&pBuffer[1].RefCount + 1) = size->Height;
    pBuffer[1].__vftable = 0i64;
    pBuffer[1].RefCount = v15;
    pBuffer->AddRef(pBuffer);
    pRenderTargetData = pBuffer->pRenderTargetData;
    if ( pRenderTargetData )
      pRenderTargetData->CacheID = 0i64;
  }
  return pBuffer;
}

void __fastcall Scaleform::Render::RBGenericImpl::RenderBufferManager::Destroy(
        Scaleform::Render::RBGenericImpl::RenderBufferManager *this)
{
  Scaleform::RefCountVImpl *pObject; // rcx

  this->Reset(this);
  this->DefImageFormat = Image_None;
  pObject = (Scaleform::RefCountVImpl *)this->pTextureManager.pObject;
  if ( pObject )
    Scaleform::RefCountImpl::Release(pObject);
  this->pTextureManager.pObject = 0i64;
}

void __fastcall Scaleform::Render::RBGenericImpl::RenderBufferManager::DumpUsage(
        Scaleform::Render::RBGenericImpl::RenderBufferManager *this)
{
  Scaleform::List<Scaleform::Render::RBGenericImpl::CacheData,Scaleform::Render::RBGenericImpl::CacheData,Scaleform::ListNode<Scaleform::Render::RBGenericImpl::CacheData> > *BufferCache; // rax
  __int64 v2; // rdx

  BufferCache = this->BufferCache;
  v2 = 7i64;
  do
  {
    ++BufferCache;
    --v2;
  }
  while ( v2 );
}

void __fastcall Scaleform::Render::RBGenericImpl::RenderBufferManager::EndFrame(
        Scaleform::Render::RBGenericImpl::RenderBufferManager *this)
{
  Scaleform::Render::RBGenericImpl::CacheData *pNext; // r8
  Scaleform::List<Scaleform::Render::RBGenericImpl::CacheData,Scaleform::Render::RBGenericImpl::CacheData,Scaleform::ListNode<Scaleform::Render::RBGenericImpl::CacheData> > *v3; // rax
  Scaleform::List<Scaleform::Render::RBGenericImpl::CacheData,Scaleform::Render::RBGenericImpl::CacheData,Scaleform::ListNode<Scaleform::Render::RBGenericImpl::CacheData> > *v4; // rdx
  Scaleform::Render::RBGenericImpl::CacheData *pPrev; // rcx
  Scaleform::Render::RBGenericImpl::CacheData *v6; // r9
  Scaleform::List<Scaleform::Render::RBGenericImpl::CacheData,Scaleform::Render::RBGenericImpl::CacheData,Scaleform::ListNode<Scaleform::Render::RBGenericImpl::CacheData> > *v7; // r8
  Scaleform::Render::RBGenericImpl::CacheData *v8; // rcx
  Scaleform::Render::RBGenericImpl::CacheData *v9; // r9
  Scaleform::Render::RBGenericImpl::CacheData *v10; // rcx
  Scaleform::List<Scaleform::Render::RBGenericImpl::CacheData,Scaleform::Render::RBGenericImpl::CacheData,Scaleform::ListNode<Scaleform::Render::RBGenericImpl::CacheData> > *v11; // rax
  Scaleform::List<Scaleform::Render::RBGenericImpl::CacheData,Scaleform::Render::RBGenericImpl::CacheData,Scaleform::ListNode<Scaleform::Render::RBGenericImpl::CacheData> > *v12; // rbx
  Scaleform::Render::RBGenericImpl::CacheData *v13; // rdx
  Scaleform::Render::RBGenericImpl::CacheData *v14; // rcx

  Scaleform::Render::RBGenericImpl::RenderBufferManager::evictOverReuseLimit(this, RBCL_Reuse_LRU);
  Scaleform::Render::RBGenericImpl::RenderBufferManager::evictOverReuseLimit(this, RBCL_LRU);
  if ( (Scaleform::List<Scaleform::Render::RBGenericImpl::CacheData,Scaleform::Render::RBGenericImpl::CacheData,Scaleform::ListNode<Scaleform::Render::RBGenericImpl::CacheData> > *)this->BufferCache[0].Root.pNext != this->BufferCache
    || (Scaleform::List<Scaleform::Render::RBGenericImpl::CacheData,Scaleform::Render::RBGenericImpl::CacheData,Scaleform::ListNode<Scaleform::Render::RBGenericImpl::CacheData> > *)this->BufferCache[1].Root.pNext != &this->BufferCache[1] )
  {
    this->DumpUsage(this);
  }
  pNext = this->BufferCache[1].Root.pNext;
  v3 = &this->BufferCache[1];
  v4 = &this->BufferCache[2];
  if ( pNext != (Scaleform::Render::RBGenericImpl::CacheData *)&this->BufferCache[1] )
  {
    pPrev = v3->Root.pPrev;
    v3->Root.pPrev = (Scaleform::Render::RBGenericImpl::CacheData *)v3;
    this->BufferCache[1].Root.pNext = (Scaleform::Render::RBGenericImpl::CacheData *)&this->BufferCache[1];
    pPrev->pNext = this->BufferCache[2].Root.pNext;
    pNext->pPrev = (Scaleform::Render::RBGenericImpl::CacheData *)v4;
    this->BufferCache[2].Root.pNext->pPrev = pPrev;
    this->BufferCache[2].Root.pNext = pNext;
  }
  v6 = this->BufferCache[3].Root.pNext;
  v7 = &this->BufferCache[3];
  if ( v6 != (Scaleform::Render::RBGenericImpl::CacheData *)&this->BufferCache[3] )
  {
    v8 = v7->Root.pPrev;
    v7->Root.pPrev = (Scaleform::Render::RBGenericImpl::CacheData *)v7;
    this->BufferCache[3].Root.pNext = (Scaleform::Render::RBGenericImpl::CacheData *)&this->BufferCache[3];
    v8->pNext = this->BufferCache[4].Root.pNext;
    v6->pPrev = (Scaleform::Render::RBGenericImpl::CacheData *)&this->BufferCache[4];
    this->BufferCache[4].Root.pNext->pPrev = v8;
    this->BufferCache[4].Root.pNext = v6;
  }
  v9 = this->BufferCache[2].Root.pNext;
  if ( v9 != (Scaleform::Render::RBGenericImpl::CacheData *)v4 )
  {
    v10 = v4->Root.pPrev;
    v4->Root.pPrev = (Scaleform::Render::RBGenericImpl::CacheData *)v4;
    this->BufferCache[2].Root.pNext = (Scaleform::Render::RBGenericImpl::CacheData *)&this->BufferCache[2];
    v10->pNext = this->BufferCache[3].Root.pNext;
    v9->pPrev = (Scaleform::Render::RBGenericImpl::CacheData *)v7;
    this->BufferCache[3].Root.pNext->pPrev = v10;
    this->BufferCache[3].Root.pNext = v9;
  }
  v11 = &this->BufferCache[5];
  v12 = &this->BufferCache[6];
  v13 = v11->Root.pNext;
  if ( v13 != (Scaleform::Render::RBGenericImpl::CacheData *)v11 )
  {
    v14 = v11->Root.pPrev;
    v11->Root.pPrev = (Scaleform::Render::RBGenericImpl::CacheData *)v11;
    v11->Root.pNext = (Scaleform::Render::RBGenericImpl::CacheData *)v11;
    v14->pNext = v12->Root.pNext;
    v13->pPrev = (Scaleform::Render::RBGenericImpl::CacheData *)v12;
    v12->Root.pNext->pPrev = v14;
    v12->Root.pNext = v13;
  }
}

__int64 __fastcall Scaleform::Render::StrokerAA::GetMeshVertexCount(AgDelayedSaveDataMount *this)
{
  return LODWORD(this->m_mountPoint.m_text);
}

Scaleform::Render::Texture *__fastcall EffectData::getSiblingFront(
        Scaleform::Render::RBGenericImpl::RenderTarget *this)
{
  return this->pTexture.pObject;
}

char __fastcall Scaleform::Render::RBGenericImpl::RenderBufferManager::Initialize(
        Scaleform::Render::RBGenericImpl::RenderBufferManager *this,
        Scaleform::Render::TextureManager *manager)
{
  Scaleform::RefCountVImpl *pObject; // rcx
  Scaleform::Render::ImageFormat v5; // eax

  if ( manager )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)manager);
  pObject = (Scaleform::RefCountVImpl *)this->pTextureManager.pObject;
  if ( pObject )
    Scaleform::RefCountImpl::Release(pObject);
  this->pTextureManager.pObject = manager;
  v5 = manager->GetDrawableImageFormat(manager);
  this->DefImageFormat = v5;
  this->RequirePow2 = !manager->IsNonPow2Supported(manager, v5, 1024u);
  return 1;
}

void __fastcall Scaleform::Render::RBGenericImpl::DepthStencilBuffer::Release(
        Scaleform::Render::RBGenericImpl::DepthStencilBuffer *this)
{
  Scaleform::Render::RenderBufferManager *pManager; // rdx
  __int64 v2; // r9
  Scaleform::Render::RBGenericImpl::CacheData *v3; // r9

  if ( --this->RefCount <= 0 )
  {
    if ( this->Type == RBuffer_DepthStencil )
    {
      pManager = this->pManager;
      v2 = (unsigned int)(this->ListType > RBCL_ThisFrame) + 5;
      this->pPrev->pNext = this->pNext;
      this->pNext->Scaleform::Render::RBGenericImpl::CacheData::Scaleform::ListNode<Scaleform::Render::RBGenericImpl::CacheData>::$8F38D2EF32BC6CBC78F578DFBEA87914::pPrev = this->pPrev;
      this->ListType = v2;
      this->pPrev = (Scaleform::Render::RBGenericImpl::CacheData *)-1i64;
      this->pNext = (Scaleform::Render::RBGenericImpl::CacheData *)-1i64;
      v3 = (Scaleform::Render::RBGenericImpl::CacheData *)&pManager[v2 + 4];
      this->pNext = v3->pNext;
      this->pPrev = v3;
      v3->pNext->Scaleform::ListNode<Scaleform::Render::RBGenericImpl::CacheData>::$8F38D2EF32BC6CBC78F578DFBEA87914::pPrev = &this->Scaleform::Render::RBGenericImpl::CacheData;
      v3->pNext = &this->Scaleform::Render::RBGenericImpl::CacheData;
    }
    else
    {
      ((void (__fastcall *)(Scaleform::Render::RBGenericImpl::DepthStencilBuffer *, __int64))this->~RefCountImplCore)(
        this,
        1i64);
    }
  }
}

void __fastcall Scaleform::Render::RBGenericImpl::RenderTarget::Release(
        Scaleform::Render::RBGenericImpl::RenderTarget *this)
{
  Scaleform::Render::RenderBufferManager *pManager; // rdx
  __int64 v2; // r9
  Scaleform::Render::RBGenericImpl::CacheData *v3; // r9

  if ( --this->RefCount <= 0 )
  {
    if ( this->pBuffer->Type != RBuffer_Temporary || this->RTStatus == RTS_Lost )
    {
      ((void (__fastcall *)(Scaleform::Render::RBGenericImpl::RenderTarget *, __int64))this->~RefCountImplCore)(
        this,
        1i64);
    }
    else
    {
      pManager = this->pManager;
      v2 = (unsigned int)(this->ListType > RBCL_ThisFrame) + 5;
      this->pPrev->pNext = this->pNext;
      this->pNext->Scaleform::Render::RBGenericImpl::CacheData::Scaleform::ListNode<Scaleform::Render::RBGenericImpl::CacheData>::$8F38D2EF32BC6CBC78F578DFBEA87914::pPrev = this->pPrev;
      this->ListType = v2;
      this->pPrev = (Scaleform::Render::RBGenericImpl::CacheData *)-1i64;
      this->pNext = (Scaleform::Render::RBGenericImpl::CacheData *)-1i64;
      v3 = (Scaleform::Render::RBGenericImpl::CacheData *)&pManager[v2 + 4];
      this->pNext = v3->pNext;
      this->pPrev = v3;
      v3->pNext->Scaleform::ListNode<Scaleform::Render::RBGenericImpl::CacheData>::$8F38D2EF32BC6CBC78F578DFBEA87914::pPrev = &this->Scaleform::Render::RBGenericImpl::CacheData;
      v3->pNext = &this->Scaleform::Render::RBGenericImpl::CacheData;
      this->RTStatus = RTS_Available;
    }
  }
}

void __fastcall Scaleform::Render::RBGenericImpl::RenderBufferManager::Reset(
        Scaleform::Render::RBGenericImpl::RenderBufferManager *this)
{
  Scaleform::Render::RBGenericImpl::RenderBufferManager::evictAll(this, RBCL_ThisFrame);
  Scaleform::Render::RBGenericImpl::RenderBufferManager::evictAll(this, RBCL_PrevFrame);
  Scaleform::Render::RBGenericImpl::RenderBufferManager::evictAll(this, RBCL_LRU);
  Scaleform::Render::RBGenericImpl::RenderBufferManager::evictAll(this, RBCL_Reuse_ThisFrame);
  Scaleform::Render::RBGenericImpl::RenderBufferManager::evictAll(this, RBCL_Reuse_LRU);
}

Scaleform::Render::Size<unsigned long> *__fastcall Scaleform::Render::RBGenericImpl::RenderBufferManager::RoundUpImageSize(
        Scaleform::Render::RBGenericImpl::RenderBufferManager *this,
        Scaleform::Render::Size<unsigned long> *result,
        const Scaleform::Render::Size<unsigned long> *size)
{
  bool v3; // zf
  unsigned int Height; // ecx
  unsigned int v6; // ecx
  unsigned int v7; // ecx
  signed int v8; // edx
  unsigned int v9; // ecx
  unsigned int v10; // ecx
  signed int v11; // eax
  Scaleform::Render::Size<unsigned long> *v12; // rax
  int v13; // eax
  int v14; // ecx

  v3 = !this->RequirePow2;
  Height = size->Height;
  if ( v3 )
  {
    v13 = (size->Width + 31) & 0xFFFFFFE0;
    v14 = (Height + 31) & 0xFFFFFFE0;
    if ( v13 < 32 )
      v13 = 32;
    result->Width = v13;
    v12 = result;
    if ( v14 < 32 )
      v14 = 32;
    result->Height = v14;
  }
  else
  {
    v6 = ((((Height - 1) >> 1) | (Height - 1)) >> 2) | ((Height - 1) >> 1) | (Height - 1);
    v7 = (((v6 >> 4) | v6) >> 8) | (v6 >> 4) | v6;
    v8 = (v7 | HIWORD(v7)) + 1;
    v9 = ((((size->Width - 1) >> 1) | (size->Width - 1)) >> 2) | ((size->Width - 1) >> 1) | (size->Width - 1);
    v10 = (((v9 >> 4) | v9) >> 8) | (v9 >> 4) | v9;
    v11 = (v10 | HIWORD(v10)) + 1;
    if ( v11 < 32 )
      v11 = 32;
    result->Width = v11;
    v12 = result;
    if ( v8 < 32 )
      v8 = 32;
    result->Height = v8;
  }
  return v12;
}

void __fastcall Scaleform::Render::RBGenericImpl::RenderTarget::SetInUse(
        Scaleform::Render::RBGenericImpl::RenderTarget *this,
        Scaleform::Render::RenderTargetUse inUse)
{
  __int32 v2; // edx
  Scaleform::Render::RenderBufferManager *v3; // rdx
  Scaleform::Render::RBGenericImpl::CacheData *pManager; // rdx

  if ( this->Type == RBuffer_Temporary )
  {
    if ( inUse == RTUse_Unused )
      goto LABEL_5;
    v2 = inUse - 1;
    if ( !v2 )
    {
      pManager = (Scaleform::Render::RBGenericImpl::CacheData *)this->pManager;
      this->pPrev->pNext = this->pNext;
      this->pNext->Scaleform::Render::RBGenericImpl::CacheData::Scaleform::ListNode<Scaleform::Render::RBGenericImpl::CacheData>::$8F38D2EF32BC6CBC78F578DFBEA87914::pPrev = this->pPrev;
      this->pPrev = (Scaleform::Render::RBGenericImpl::CacheData *)-1i64;
      this->pNext = (Scaleform::Render::RBGenericImpl::CacheData *)-1i64;
      this->ListType = RBCL_InUse;
      this->pNext = pManager[2].pNext;
      this->pPrev = pManager + 2;
      pManager[2].pNext->Scaleform::ListNode<Scaleform::Render::RBGenericImpl::CacheData>::$8F38D2EF32BC6CBC78F578DFBEA87914::pPrev = &this->Scaleform::Render::RBGenericImpl::CacheData;
      pManager[2].pNext = &this->Scaleform::Render::RBGenericImpl::CacheData;
      this->RTStatus = RTS_InUse;
      return;
    }
    if ( v2 == 1 )
    {
LABEL_5:
      if ( this->ListType < RBCL_ThisFrame )
      {
        v3 = this->pManager;
        this->pPrev->pNext = this->pNext;
        this->pNext->Scaleform::Render::RBGenericImpl::CacheData::Scaleform::ListNode<Scaleform::Render::RBGenericImpl::CacheData>::$8F38D2EF32BC6CBC78F578DFBEA87914::pPrev = this->pPrev;
        this->pPrev = (Scaleform::Render::RBGenericImpl::CacheData *)-1i64;
        this->pNext = (Scaleform::Render::RBGenericImpl::CacheData *)-1i64;
        this->ListType = RBCL_ThisFrame;
        this->pNext = *(Scaleform::Render::RBGenericImpl::CacheData **)&v3[6].RefCount;
        this->pPrev = (Scaleform::Render::RBGenericImpl::CacheData *)&v3[6];
        **(_QWORD **)&v3[6].RefCount = &this->Scaleform::Render::RBGenericImpl::CacheData;
        *(_QWORD *)&v3[6].RefCount = &this->Scaleform::Render::RBGenericImpl::CacheData;
      }
      this->RTStatus = RTS_Available;
    }
  }
}

void __fastcall Scaleform::Render::RBGenericImpl::RenderBufferManager::SetLimits(
        Scaleform::Render::RBGenericImpl::RenderBufferManager *this,
        unsigned __int64 memReuseLimit,
        unsigned __int64 memAbsoluteLimit)
{
  unsigned __int64 ReuseLimit; // rax

  ReuseLimit = this->ReuseLimit;
  this->ReuseLimit = memReuseLimit;
  this->AbsoluteLimit = memAbsoluteLimit;
  if ( memReuseLimit < ReuseLimit )
  {
    Scaleform::Render::RBGenericImpl::RenderBufferManager::evictOverReuseLimit(this, RBCL_Reuse_LRU);
    Scaleform::Render::RBGenericImpl::RenderBufferManager::evictOverReuseLimit(this, RBCL_LRU);
  }
}

Scaleform::Render::RBGenericImpl::RenderTarget *__fastcall Scaleform::Render::RBGenericImpl::RenderBufferManager::createRenderTarget(
        Scaleform::Render::RBGenericImpl::RenderBufferManager *this,
        const Scaleform::Render::Size<unsigned long> *size,
        Scaleform::Render::RenderBufferType type,
        Scaleform::Render::ImageFormat format,
        Scaleform::Render::Texture *texture)
{
  Scaleform::Render::RBGenericImpl::RenderTarget *v9; // rax
  Scaleform::Render::RBGenericImpl::RenderTarget *v10; // rbx
  unsigned int Height; // ecx
  unsigned int v12; // ecx
  Scaleform::RefCountVImpl *pObject; // rcx
  Scaleform::Render::RBGenericImpl::RenderTarget *result; // rax
  unsigned int Width; // ecx
  unsigned int v16; // edx
  int v17[6]; // [rsp+20h] [rbp-18h] BYREF

  v17[0] = 72;
  v9 = (Scaleform::Render::RBGenericImpl::RenderTarget *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                                           Scaleform::Memory::pGlobalHeap,
                                                           this,
                                                           120i64,
                                                           v17);
  v10 = v9;
  if ( !v9 )
    return 0i64;
  *(_QWORD *)&v9->RefCount = 0i64;
  v9->__vftable = (Scaleform::Render::RBGenericImpl::RenderTarget_vtbl *)&Scaleform::RefCountImplCore::`vftable';
  v9->__vftable = (Scaleform::Render::RBGenericImpl::RenderTarget_vtbl *)&Scaleform::Render::RenderBuffer::`vftable';
  v9->pManager = this;
  v9->RefCount = 1;
  v9->Type = type;
  v9->pRenderTargetData = 0i64;
  Height = size->Height;
  v9->BufferSize.Width = size->Width;
  v9->BufferSize.Height = Height;
  v9->__vftable = (Scaleform::Render::RBGenericImpl::RenderTarget_vtbl *)&Scaleform::Render::RenderTarget::`vftable';
  v12 = size->Height;
  v9->ViewRect.x2 = size->Width;
  *(_QWORD *)&v9->ViewRect.x1 = 0i64;
  v9->ViewRect.y2 = v12;
  v9->pPrev = (Scaleform::Render::RBGenericImpl::CacheData *)-1i64;
  v9->pNext = (Scaleform::Render::RBGenericImpl::CacheData *)-1i64;
  v9->pBuffer = v9;
  *(_QWORD *)&v9->ListType = 0i64;
  v9->DataSize = 0i64;
  v9->__vftable = (Scaleform::Render::RBGenericImpl::RenderTarget_vtbl *)&Scaleform::Render::RBGenericImpl::RenderTarget::`vftable';
  v9->pTexture.pObject = 0i64;
  v9->RTStatus = RTS_InUse;
  v9->Format = format;
  if ( texture )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)texture);
  pObject = (Scaleform::RefCountVImpl *)v10->pTexture.pObject;
  if ( pObject )
    Scaleform::RefCountImpl::Release(pObject);
  v10->pTexture.pObject = texture;
  result = v10;
  Width = size->Width;
  v16 = size->Height;
  *(_QWORD *)&v10->ViewRect.x1 = 0i64;
  v10->ViewRect.x2 = Width;
  v10->ViewRect.y2 = v16;
  return result;
}

void __fastcall Scaleform::Render::RBGenericImpl::RenderBufferManager::evictAll(
        Scaleform::Render::RBGenericImpl::RenderBufferManager *this,
        Scaleform::Render::RBGenericImpl::RBCacheListType ltype)
{
  Scaleform::List<Scaleform::Render::RBGenericImpl::CacheData,Scaleform::Render::RBGenericImpl::CacheData,Scaleform::ListNode<Scaleform::Render::RBGenericImpl::CacheData> > *v3; // rdi
  Scaleform::RefCountImplCore *v4; // r14
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rbx
  int v8; // eax
  Scaleform::RefCountVImpl *v9; // rcx
  void (__fastcall ***v10)(_QWORD, __int64); // rcx
  int v11; // eax

  v3 = &this->BufferCache[ltype];
  if ( (Scaleform::List<Scaleform::Render::RBGenericImpl::CacheData,Scaleform::Render::RBGenericImpl::CacheData,Scaleform::ListNode<Scaleform::Render::RBGenericImpl::CacheData> > *)v3->Root.pNext != v3 )
  {
    v4 = (Scaleform::Render::RBGenericImpl::RenderBufferManager *)((char *)this + 16 * ltype);
    do
    {
      v5 = *(_QWORD *)&v4[4].RefCount;
      *(_QWORD *)(*(_QWORD *)v5 + 8i64) = *(_QWORD *)(v5 + 8);
      **(_QWORD **)(v5 + 8) = *(_QWORD *)v5;
      v6 = *(_QWORD *)(v5 + 32);
      *(_QWORD *)v5 = -1i64;
      *(_QWORD *)(v5 + 8) = -1i64;
      *(_DWORD *)(v5 + 24) = 0;
      this->AllocSize -= v6;
      *(_QWORD *)(v5 + 32) = 0i64;
      v7 = *(_QWORD *)(v5 + 16);
      v8 = *(_DWORD *)(v7 + 20);
      if ( v8 == 3 )
      {
        v9 = *(Scaleform::RefCountVImpl **)(v7 + 104);
        if ( v9 )
          Scaleform::RefCountImpl::Release(v9);
        *(_QWORD *)(v7 + 104) = 0i64;
        v10 = *(void (__fastcall ****)(_QWORD, __int64))(v7 + 32);
        if ( v10 )
        {
          (**v10)(v10, 1i64);
          *(_QWORD *)(v7 + 32) = 0i64;
        }
        v11 = *(_DWORD *)(v7 + 8);
        *(_DWORD *)(v7 + 112) = 3;
        if ( v11 )
          continue;
      }
      else if ( v8 != 5 || !v7 )
      {
        continue;
      }
      (**(void (__fastcall ***)(__int64, __int64))v7)(v7, 1i64);
    }
    while ( (Scaleform::List<Scaleform::Render::RBGenericImpl::CacheData,Scaleform::Render::RBGenericImpl::CacheData,Scaleform::ListNode<Scaleform::Render::RBGenericImpl::CacheData> > *)v3->Root.pNext != v3 );
  }
}

void __fastcall Scaleform::Render::RBGenericImpl::RenderBufferManager::evictOverReuseLimit(
        Scaleform::Render::RBGenericImpl::RenderBufferManager *this,
        Scaleform::Render::RBGenericImpl::RBCacheListType ltype)
{
  Scaleform::List<Scaleform::Render::RBGenericImpl::CacheData,Scaleform::Render::RBGenericImpl::CacheData,Scaleform::ListNode<Scaleform::Render::RBGenericImpl::CacheData> > *v3; // rbp
  __int64 v4; // rsi
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rbx
  int v8; // eax
  Scaleform::RefCountVImpl *v9; // rcx
  void (__fastcall ***v10)(_QWORD, __int64); // rcx
  int v11; // eax

  if ( this->AllocSize > this->ReuseLimit )
  {
    v3 = &this->BufferCache[ltype];
    v4 = 2 * ((int)ltype + 4i64);
    do
    {
      v5 = *((_QWORD *)&this->__vftable + v4);
      if ( (Scaleform::List<Scaleform::Render::RBGenericImpl::CacheData,Scaleform::Render::RBGenericImpl::CacheData,Scaleform::ListNode<Scaleform::Render::RBGenericImpl::CacheData> > *)v5 == v3 )
        return;
      *(_QWORD *)(*(_QWORD *)v5 + 8i64) = *(_QWORD *)(v5 + 8);
      **(_QWORD **)(v5 + 8) = *(_QWORD *)v5;
      v6 = *(_QWORD *)(v5 + 32);
      *(_QWORD *)v5 = -1i64;
      *(_QWORD *)(v5 + 8) = -1i64;
      *(_DWORD *)(v5 + 24) = 0;
      this->AllocSize -= v6;
      *(_QWORD *)(v5 + 32) = 0i64;
      v7 = *(_QWORD *)(v5 + 16);
      v8 = *(_DWORD *)(v7 + 20);
      if ( v8 == 3 )
      {
        v9 = *(Scaleform::RefCountVImpl **)(v7 + 104);
        if ( v9 )
          Scaleform::RefCountImpl::Release(v9);
        *(_QWORD *)(v7 + 104) = 0i64;
        v10 = *(void (__fastcall ****)(_QWORD, __int64))(v7 + 32);
        if ( v10 )
        {
          (**v10)(v10, 1i64);
          *(_QWORD *)(v7 + 32) = 0i64;
        }
        v11 = *(_DWORD *)(v7 + 8);
        *(_DWORD *)(v7 + 112) = 3;
        if ( v11 )
          continue;
      }
      else if ( v8 != 5 || !v7 )
      {
        continue;
      }
      (**(void (__fastcall ***)(__int64, __int64))v7)(v7, 1i64);
    }
    while ( this->AllocSize > this->ReuseLimit );
  }
}

bool __fastcall Scaleform::Render::RBGenericImpl::RenderBufferManager::evictUntilAvailable(
        Scaleform::Render::RBGenericImpl::RenderBufferManager *this,
        Scaleform::Render::RBGenericImpl::RBCacheListType ltype,
        unsigned __int64 requestSize)
{
  Scaleform::List<Scaleform::Render::RBGenericImpl::CacheData,Scaleform::Render::RBGenericImpl::CacheData,Scaleform::ListNode<Scaleform::Render::RBGenericImpl::CacheData> > *v5; // rbp
  __int64 v6; // r14
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rbx
  int v10; // eax
  Scaleform::RefCountVImpl *v11; // rcx
  void (__fastcall ***v12)(_QWORD, __int64); // rcx
  int v13; // eax

  if ( requestSize + this->AllocSize > this->ReuseLimit )
  {
    v5 = &this->BufferCache[ltype];
    v6 = 2 * ((int)ltype + 4i64);
    do
    {
      v7 = *((_QWORD *)&this->__vftable + v6);
      if ( (Scaleform::List<Scaleform::Render::RBGenericImpl::CacheData,Scaleform::Render::RBGenericImpl::CacheData,Scaleform::ListNode<Scaleform::Render::RBGenericImpl::CacheData> > *)v7 == v5 )
        return requestSize + this->AllocSize <= this->ReuseLimit;
      *(_QWORD *)(*(_QWORD *)v7 + 8i64) = *(_QWORD *)(v7 + 8);
      **(_QWORD **)(v7 + 8) = *(_QWORD *)v7;
      v8 = *(_QWORD *)(v7 + 32);
      *(_QWORD *)v7 = -1i64;
      *(_QWORD *)(v7 + 8) = -1i64;
      *(_DWORD *)(v7 + 24) = 0;
      this->AllocSize -= v8;
      *(_QWORD *)(v7 + 32) = 0i64;
      v9 = *(_QWORD *)(v7 + 16);
      v10 = *(_DWORD *)(v9 + 20);
      if ( v10 == 3 )
      {
        v11 = *(Scaleform::RefCountVImpl **)(v9 + 104);
        if ( v11 )
          Scaleform::RefCountImpl::Release(v11);
        *(_QWORD *)(v9 + 104) = 0i64;
        v12 = *(void (__fastcall ****)(_QWORD, __int64))(v9 + 32);
        if ( v12 )
        {
          (**v12)(v12, 1i64);
          *(_QWORD *)(v9 + 32) = 0i64;
        }
        v13 = *(_DWORD *)(v9 + 8);
        *(_DWORD *)(v9 + 112) = 3;
        if ( v13 )
          continue;
      }
      else if ( v10 != 5 || !v9 )
      {
        continue;
      }
      (**(void (__fastcall ***)(__int64, __int64))v9)(v9, 1i64);
    }
    while ( requestSize + this->AllocSize > this->ReuseLimit );
  }
  return requestSize + this->AllocSize <= this->ReuseLimit;
}

Scaleform::Render::RBGenericImpl::CacheData *__fastcall Scaleform::Render::RBGenericImpl::RenderBufferManager::findMatch(
        Scaleform::Render::RBGenericImpl::RenderBufferManager *this,
        Scaleform::Render::RBGenericImpl::RBCacheListType ltype,
        const Scaleform::Render::Size<unsigned long> *size,
        Scaleform::Render::RenderBufferType bufferType,
        Scaleform::Render::ImageFormat format)
{
  Scaleform::List<Scaleform::Render::RBGenericImpl::CacheData,Scaleform::Render::RBGenericImpl::CacheData,Scaleform::ListNode<Scaleform::Render::RBGenericImpl::CacheData> > *v6; // rsi
  Scaleform::Render::RBGenericImpl::CacheData *i; // r11
  Scaleform::Render::RBGenericImpl::DSSizeMode DepthStencilSizeMode; // edx
  Scaleform::Render::RenderBuffer *pBuffer; // rax
  __int32 v10; // edx
  unsigned int Width; // er10
  unsigned int Height; // edx
  unsigned int v13; // ecx

  v6 = &this->BufferCache[ltype];
  for ( i = v6->Root.pPrev; i != (Scaleform::Render::RBGenericImpl::CacheData *)v6; i = i->pPrev )
  {
    if ( bufferType == RBuffer_DepthStencil )
      DepthStencilSizeMode = this->DepthStencilSizeMode;
    else
      DepthStencilSizeMode = DSSM_None;
    pBuffer = i->pBuffer;
    if ( pBuffer->Type == bufferType && i->Format == format )
    {
      v10 = DepthStencilSizeMode - 1;
      if ( v10 )
      {
        if ( v10 == 1 )
        {
          if ( pBuffer->BufferSize.Width >= size->Width && pBuffer->BufferSize.Height >= size->Height )
            return i;
        }
        else
        {
          Width = pBuffer->BufferSize.Width;
          if ( size->Width <= Width )
          {
            Height = size->Height;
            v13 = pBuffer->BufferSize.Height;
            if ( Height <= v13 && (27 * Width * v13) >> 5 <= size->Width * Height )
              return i;
          }
        }
      }
      else if ( size->Width == pBuffer->BufferSize.Width && size->Height == pBuffer->BufferSize.Height )
      {
        return i;
      }
    }
  }
  return 0i64;
}

void __fastcall Scaleform::Render::DepthStencilBuffer::initSurface(
        Scaleform::Render::DepthStencilBuffer *this,
        Scaleform::Render::DepthStencilSurface *surface)
{
  Scaleform::RefCountVImpl *pObject; // rcx

  if ( surface )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)surface);
  pObject = (Scaleform::RefCountVImpl *)this->pSurface.pObject;
  if ( pObject )
    Scaleform::RefCountImpl::Release(pObject);
  this->pSurface.pObject = surface;
}

__int64 __fastcall Scaleform::Render::RBGenericImpl::RenderBufferManager::reserveSpace(
        Scaleform::Render::RBGenericImpl::RenderBufferManager *this,
        Scaleform::Render::RBGenericImpl::CacheData **pdata,
        const Scaleform::Render::Size<unsigned long> *size,
        Scaleform::Render::RenderBufferType type,
        Scaleform::Render::ImageFormat format,
        unsigned __int64 requestSize)
{
  unsigned __int64 AbsoluteLimit; // rax
  __int64 result; // rax
  Scaleform::Render::RBGenericImpl::CacheData *Match; // rax
  Scaleform::Render::RBGenericImpl::CacheData *v13; // rax
  Scaleform::Render::RBGenericImpl::CacheData *v14; // rax
  Scaleform::Render::RBGenericImpl::CacheData *v15; // rax
  unsigned __int64 v16; // rdx

  AbsoluteLimit = this->AbsoluteLimit;
  if ( AbsoluteLimit && requestSize > AbsoluteLimit )
    return 2i64;
  Match = Scaleform::Render::RBGenericImpl::RenderBufferManager::findMatch(this, RBCL_Reuse_LRU, size, type, format);
  *pdata = Match;
  if ( !Match )
    *pdata = Scaleform::Render::RBGenericImpl::RenderBufferManager::findMatch(
               this,
               RBCL_Reuse_ThisFrame,
               size,
               type,
               format);
  if ( *pdata )
    return 0i64;
  if ( Scaleform::Render::RBGenericImpl::RenderBufferManager::evictUntilAvailable(this, RBCL_Reuse_LRU, requestSize) )
    return 1i64;
  v13 = Scaleform::Render::RBGenericImpl::RenderBufferManager::findMatch(this, RBCL_LRU, size, type, format);
  *pdata = v13;
  if ( v13 )
    return 0i64;
  if ( Scaleform::Render::RBGenericImpl::RenderBufferManager::evictUntilAvailable(this, RBCL_LRU, requestSize)
    || Scaleform::Render::RBGenericImpl::RenderBufferManager::evictUntilAvailable(
         this,
         RBCL_Reuse_ThisFrame,
         requestSize) )
  {
    return 1i64;
  }
  v14 = Scaleform::Render::RBGenericImpl::RenderBufferManager::findMatch(this, RBCL_PrevFrame, size, type, format);
  *pdata = v14;
  if ( v14 )
    return 0i64;
  if ( Scaleform::Render::RBGenericImpl::RenderBufferManager::evictUntilAvailable(this, RBCL_PrevFrame, requestSize) )
    return 1i64;
  v15 = Scaleform::Render::RBGenericImpl::RenderBufferManager::findMatch(this, RBCL_ThisFrame, size, type, format);
  *pdata = v15;
  if ( v15 )
    return 0i64;
  if ( Scaleform::Render::RBGenericImpl::RenderBufferManager::evictUntilAvailable(this, RBCL_ThisFrame, requestSize) )
    return 1i64;
  v16 = this->AbsoluteLimit;
  if ( !v16 )
    return 1i64;
  result = 2i64;
  if ( requestSize + this->AllocSize <= v16 )
    return 1i64;
  return result;
}

