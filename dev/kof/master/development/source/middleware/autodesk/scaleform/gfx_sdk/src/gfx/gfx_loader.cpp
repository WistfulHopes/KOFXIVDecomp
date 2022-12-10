#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_imageresource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_system.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_types.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_loaderimpl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_loader.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_hash.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "program files (x86)/windows kits/8.1/include/shared/stralign.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_resourcehandle.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_gradients.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_log.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_image.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_font.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatapacked.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_pathdatapacker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_wwhelper.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/time.h"
#include "program files (x86)/windows kits/8.1/include/shared/winerror.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_stream.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_twips.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "program files (x86)/windows kits/8.1/include/shared/guiddef.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "program files (x86)/windows kits/8.1/include/um/oleauto.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "program files (x86)/windows kits/8.1/include/um/winnt.h"
#include "program files (x86)/windows kits/8.1/include/shared/basetsd.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cxform.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_event.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_keycodes.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_characterdef.h"
#include "program files (x86)/windows kits/8.1/include/um/winuser.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_taskmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_resource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "program files (x86)/windows kits/8.1/include/um/propidl.h"
#include "program files (x86)/windows kits/8.1/include/um/winbase.h"

long GFx_Compile_with_SF_BUILD_DEBUG; // 0x140A7210C
void Scaleform::GFx::URLBuilder::BuildURL(Scaleform::String * ppath, const Scaleform::GFx::URLBuilder::LocationInfo & loc); // 0x1402EECA0
void Scaleform::GFx::URLBuilder::DefaultBuildURL(Scaleform::String * ppath, const Scaleform::GFx::URLBuilder::LocationInfo & loc); // 0x1402EED50
bool Scaleform::GFx::URLBuilder::IsPathAbsolute(const char * putf8str); // 0x1402EF3A0
bool Scaleform::GFx::URLBuilder::ExtractFilePath(Scaleform::String * ppath); // 0x1402EF110
bool Scaleform::GFx::URLBuilder::IsProtocol(const Scaleform::String & path); // 0x1402EF430
bool Scaleform::GFx::URLBuilder::SendURLRequest(Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy> * bytes, const Scaleform::String & path, Scaleform::GFx::URLBuilder::UrlMethod method, const char * data, long dataLength, const Scaleform::Array<Scaleform::String,2,Scaleform::ArrayDefaultPolicy> * headers, const char * contentType); // 0x1402EF580
unsigned long long Scaleform::GFx::URLBuilder::HttpWriteData(char * buffer, unsigned long long size, unsigned long long nmemb, void * userp); // 0x1402EF230
unsigned long long Scaleform::GFx::URLBuilder::HttpReadData(void * ptr, unsigned long long size, unsigned long long nmemb, void * userp); // 0x1402EF1D0
Scaleform::GFx::Loader::Loader(const Scaleform::Ptr<Scaleform::GFx::FileOpenerBase> & pfileOpener, const Scaleform::Ptr<Scaleform::GFx::ZlibSupportBase> & pzlib); // 0x1402EE9F0
void Scaleform::GFx::Loader::InitLoader(const Scaleform::GFx::Loader::LoaderConfig & cfg); // 0x1402EF270
Scaleform::GFx::StateBag * Scaleform::GFx::Loader::GetStateBagImpl(); // 0x1402EF1B0
bool Scaleform::GFx::Loader::CheckTagLoader(long tagType); // 0x1402EECC0
Scaleform::GFx::ResourceLib * Scaleform::GFx::Loader::GetResourceLib(); // 0x14065ED30
Scaleform::GFx::MovieDef * Scaleform::GFx::Loader::CreateMovie(const char * pfilename, unsigned long loadConstants, unsigned long long memoryArena); // 0x1402EED20
void Scaleform::GFx::Loader::CancelLoading(); // 0x1402EECB0
void Scaleform::GFx::System::Init(const Scaleform::MemoryHeap::HeapDesc & rootHeapDesc, Scaleform::SysAllocBase * psysAlloc); // 0x1402EF260
void Scaleform::GFx::System::Destroy(); // 0x1402EF090//decompilation failure at 140A7210C!
void __fastcall Scaleform::GFx::Loader::Loader(
        Scaleform::GFx::Loader *this,
        const Scaleform::Ptr<Scaleform::GFx::FileOpenerBase> *pfileOpener,
        const Scaleform::Ptr<Scaleform::GFx::ZlibSupportBase> *pzlib)
{
  Scaleform::RefCountVImpl *pObject; // rcx
  Scaleform::GFx::FileOpenerBase *v7; // rdi
  Scaleform::GFx::ZlibSupportBase *v8; // rsi
  Scaleform::GFx::Loader::LoaderConfig cfg; // [rsp+20h] [rbp-28h] BYREF

  cfg.DefLoadFlags = 0;
  this->__vftable = (Scaleform::GFx::Loader_vtbl *)&Scaleform::GFx::Loader::`vftable';
  if ( pfileOpener->pObject )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)pfileOpener->pObject);
  pObject = (Scaleform::RefCountVImpl *)pzlib->pObject;
  v7 = pfileOpener->pObject;
  cfg.pFileOpener.pObject = v7;
  if ( pObject )
    Scaleform::Render::RenderBuffer::AddRef(pObject);
  v8 = pzlib->pObject;
  cfg.pZLibSupport.pObject = v8;
  Scaleform::GFx::Loader::InitLoader(this, &cfg);
  if ( v8 )
    Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v8);
  if ( v7 )
    Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v7);
}

void __fastcall Scaleform::ArrayDataBase<Scaleform::String,Scaleform::AllocatorGH<Scaleform::String,2>,Scaleform::ArrayDefaultPolicy>::~ArrayDataBase<Scaleform::String,Scaleform::AllocatorGH<Scaleform::String,2>,Scaleform::ArrayDefaultPolicy>(
        Scaleform::ArrayDataBase<Scaleform::String,Scaleform::AllocatorGH<Scaleform::String,2>,Scaleform::ArrayDefaultPolicy> *this)
{
  unsigned __int64 Size; // rsi
  Scaleform::String *i; // rdi
  volatile int *v4; // rbx

  Size = this->Size;
  for ( i = &this->Data[Size - 1]; Size; --Size )
  {
    v4 = (volatile int *)(i->HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
    if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(v4 + 2, -1) == 1 )
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, (void *)v4);
    --i;
  }
  if ( this->Data )
    ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
}

void __fastcall Scaleform::ArrayData<unsigned char,Scaleform::AllocatorGH<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Append(
        Scaleform::ArrayData<unsigned char,Scaleform::AllocatorGH<unsigned char,2>,Scaleform::ArrayDefaultPolicy> *this,
        const unsigned __int8 *other,
        unsigned __int64 count)
{
  unsigned __int64 v3; // rdi
  unsigned __int64 Size; // r14
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // r8
  unsigned __int8 *v9; // rax

  if ( !count )
    return;
  v3 = count;
  Size = this->Size;
  v7 = Size + count;
  if ( Size + count >= Size )
  {
    if ( v7 <= this->Policy.Capacity )
      goto LABEL_8;
    v8 = v7 + (v7 >> 2);
  }
  else
  {
    if ( v7 >= this->Policy.Capacity >> 1 )
      goto LABEL_8;
    v8 = Size + count;
  }
  Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorGH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
    (Scaleform::ArrayDataBase<char,Scaleform::AllocatorGH<char,2>,Scaleform::ArrayDefaultPolicy> *)this,
    this,
    v8);
LABEL_8:
  v9 = &this->Data[Size];
  this->Size = v7;
  do
  {
    if ( v9 )
      *v9 = *other;
    ++other;
    ++v9;
    --v3;
  }
  while ( v3 );
}

void __fastcall Scaleform::GFx::URLBuilder::BuildURL(
        Scaleform::GFx::URLBuilder *this,
        Scaleform::String *ppath,
        const Scaleform::GFx::URLBuilder::LocationInfo *loc)
{
  Scaleform::GFx::URLBuilder::DefaultBuildURL(ppath, loc);
}

void __fastcall Scaleform::GFx::Loader::CancelLoading(Scaleform::GFx::Loader *this)
{
  Scaleform::GFx::LoaderImpl::CancelLoading(this->pImpl);
}

bool __fastcall Scaleform::GFx::Loader::CheckTagLoader(Scaleform::GFx::Loader *this, int tagType)
{
  if ( !this->pImpl )
    return 0;
  if ( (unsigned int)tagType < 0x5C )
    return Scaleform::GFx::SWF_TagLoaderTable[tagType] != 0i64;
  if ( (unsigned int)(tagType - 1000) > 9 )
    return 0;
  return Scaleform::GFx::GFx_GFX_TagLoaderTable[tagType - 1000] != 0i64;
}

Scaleform::GFx::MovieDef *__fastcall Scaleform::GFx::Loader::CreateMovie(
        Scaleform::GFx::Loader *this,
        const char *pfilename,
        unsigned int loadConstants,
        unsigned __int64 memoryArena)
{
  Scaleform::GFx::LoaderImpl *pImpl; // rcx

  if ( pfilename && *pfilename && (pImpl = this->pImpl) != 0i64 )
    return Scaleform::GFx::LoaderImpl::CreateMovie(pImpl, pfilename, loadConstants | this->DefLoadFlags, memoryArena);
  else
    return 0i64;
}

void __fastcall Scaleform::GFx::URLBuilder::DefaultBuildURL(
        Scaleform::String *ppath,
        const Scaleform::GFx::URLBuilder::LocationInfo *loc)
{
  unsigned __int64 Length; // rax
  unsigned int CharAt; // eax
  unsigned __int64 v6; // r15
  __int64 v7; // r14
  Scaleform::String *Data; // r13
  unsigned __int64 Size; // rsi
  unsigned __int64 i; // r12
  unsigned int v11; // eax
  _BYTE *v12; // rcx
  Scaleform::String *v13; // rbx
  __int64 v14; // rdi
  void *v15; // rbx
  Scaleform::String *v16; // rcx
  void *v17; // rbx
  void *v18; // rbx
  Scaleform::ArrayDataBase<Scaleform::String,Scaleform::AllocatorGH<Scaleform::String,2>,Scaleform::ArrayDefaultPolicy> pheapAddr; // [rsp+20h] [rbp-40h] BYREF
  Scaleform::String v21; // [rsp+98h] [rbp+38h] BYREF
  Scaleform::String src; // [rsp+A0h] [rbp+40h] BYREF
  Scaleform::String v23; // [rsp+A8h] [rbp+48h] BYREF

  if ( (*(_QWORD *)(loc->ParentPath.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) & 0x7FFFFFFFFFFFFFFFi64) == 0
    || Scaleform::GFx::URLBuilder::IsPathAbsolute((const char *)((loc->FileName.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64)
                                                               + 12)) )
  {
    Scaleform::String::operator=(ppath, &loc->FileName);
  }
  else
  {
    Scaleform::String::String(&v21, &loc->ParentPath);
    Length = Scaleform::String::GetLength(&v21);
    CharAt = Scaleform::String::GetCharAt(&v21, Length - 1);
    if ( CharAt != 92 && CharAt != 47 )
      Scaleform::String::AppendChar(&v21, 0x2Fu);
    Scaleform::String::operator+=(&v21, &loc->FileName);
    v6 = 0i64;
    v7 = 0i64;
    memset(&pheapAddr, 0, sizeof(pheapAddr));
    Data = 0i64;
    Size = 0i64;
    Scaleform::String::String(&src);
    for ( i = 0i64; i < Scaleform::String::GetLength(&v21); ++i )
    {
      v11 = Scaleform::String::GetCharAt(&v21, i);
      if ( v11 == 47 || v11 == 92 )
      {
        v12 = (_BYTE *)(src.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
        if ( *(_BYTE *)((src.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12) == asc_14092A80C[0]
          && v12[13] == asc_14092A80C[1]
          && v12[14] == asc_14092A80C[2] )
        {
          if ( Size )
          {
            Scaleform::String::String(&v23, &Data[Size - 1]);
            Scaleform::ArrayDataBase<Scaleform::String,Scaleform::AllocatorGH<Scaleform::String,2>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
              &pheapAddr,
              &pheapAddr,
              Size - 1);
            Data = pheapAddr.Data;
            if ( Size - 1 > Size )
            {
              v13 = &pheapAddr.Data[Size];
              v14 = -1i64;
              do
              {
                if ( v13 )
                  Scaleform::String::String(v13);
                ++v13;
                --v14;
              }
              while ( v14 );
            }
            v15 = (void *)(v23.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
            if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
                   (volatile int *)((v23.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
                   -1) == 1 )
              Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v15);
            Size = pheapAddr.Size;
          }
          else
          {
            ++v7;
          }
        }
        else if ( v12[12] != set[0] || v12[13] != set[1] )
        {
          Scaleform::String::AppendChar(&src, v11);
          Scaleform::ArrayDataBase<Scaleform::String,Scaleform::AllocatorGH<Scaleform::String,2>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
            &pheapAddr,
            &pheapAddr,
            Size + 1);
          Size = pheapAddr.Size;
          Data = pheapAddr.Data;
          v16 = &pheapAddr.Data[pheapAddr.Size - 1];
          if ( v16 )
            Scaleform::String::String(v16, &src);
        }
        Scaleform::String::Clear(&src);
      }
      else
      {
        Scaleform::String::AppendChar(&src, v11);
      }
    }
    Scaleform::String::Clear(ppath);
    for ( ; v7; --v7 )
      Scaleform::String::AppendString(ppath, "../", -1i64);
    if ( Size )
    {
      do
        Scaleform::String::AppendString(
          ppath,
          (const char *)((Data[v6++].HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12),
          -1i64);
      while ( v6 < Size );
    }
    Scaleform::String::operator+=(ppath, &src);
    v17 = (void *)(src.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
    if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
           (volatile int *)((src.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
           -1) == 1 )
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v17);
    Scaleform::ArrayDataBase<Scaleform::String,Scaleform::AllocatorGH<Scaleform::String,2>,Scaleform::ArrayDefaultPolicy>::~ArrayDataBase<Scaleform::String,Scaleform::AllocatorGH<Scaleform::String,2>,Scaleform::ArrayDefaultPolicy>(&pheapAddr);
    v18 = (void *)(v21.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
    if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
           (volatile int *)((v21.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
           -1) == 1 )
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v18);
  }
}

// attributes: thunk
void Scaleform::GFx::System::Destroy(void)
{
  Scaleform::System::Destroy();
}

void __fastcall Scaleform::ConstructorMov<Scaleform::String>::DestructArray(
        Scaleform::String *p,
        unsigned __int64 count)
{
  Scaleform::String *v2; // rdi
  unsigned __int64 v3; // rsi
  volatile int *v4; // rbx

  if ( count )
  {
    v2 = &p[count - 1];
    v3 = count;
    do
    {
      v4 = (volatile int *)(v2->HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
      if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(v4 + 2, -1) == 1 )
        Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, (void *)v4);
      --v2;
      --v3;
    }
    while ( v3 );
  }
}

_BOOL8 __fastcall Scaleform::GFx::URLBuilder::ExtractFilePath(Scaleform::String *ppath)
{
  signed __int64 v2; // rdi
  unsigned int CharAt; // eax
  const Scaleform::String *v4; // rax
  void *v5; // rbx
  Scaleform::String result; // [rsp+38h] [rbp+10h] BYREF

  v2 = Scaleform::String::GetLength(ppath) - 1;
  if ( v2 >= 0 )
  {
    while ( 1 )
    {
      CharAt = Scaleform::String::GetCharAt(ppath, v2);
      if ( CharAt == 47 || CharAt == 92 )
        break;
      if ( --v2 < 0 )
        return v2 >= 0;
    }
    v4 = Scaleform::String::Substring(ppath, &result, 0i64, v2 + 1);
    Scaleform::String::operator=(ppath, v4);
    v5 = (void *)(result.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
    if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
           (volatile int *)((result.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
           -1) == 1 )
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v5);
  }
  return v2 >= 0;
}

AgAudioChannelData *__fastcall AgAudioChannel::getInternalData(AgAudioChannel *this)
{
  return this->m_internalData;
}

Scaleform::GFx::StateBag *__fastcall Scaleform::GFx::MovieDefImpl::GetStateBagImpl(Scaleform::GFx::MovieDefImpl *this)
{
  Scaleform::GFx::StateBag *v1; // rdx
  Scaleform::GFx::StateBag *result; // rax

  v1 = *(Scaleform::GFx::StateBag **)&this->RefCount.Value;
  result = v1 + 2;
  if ( !v1 )
    return 0i64;
  return result;
}

size_t __fastcall Scaleform::GFx::URLBuilder::HttpReadData(
        void *ptr,
        unsigned __int64 size,
        unsigned __int64 nmemb,
        void *userp)
{
  const void *v6; // rdx
  size_t v7; // rdi
  size_t v8; // r8
  size_t result; // rax

  v6 = *(const void **)userp;
  v7 = nmemb * size;
  v8 = *((_QWORD *)userp + 1);
  if ( v8 < v7 )
  {
    memmove(ptr, v6, v8);
    result = *((_QWORD *)userp + 1);
    *((_QWORD *)userp + 1) = 0i64;
  }
  else
  {
    memmove(ptr, v6, v7);
    *((_QWORD *)userp + 1) -= v7;
    return v7;
  }
  return result;
}

unsigned __int64 __fastcall Scaleform::GFx::URLBuilder::HttpWriteData(
        char *buffer,
        unsigned __int64 size,
        unsigned __int64 nmemb,
        void *userp)
{
  unsigned __int64 v4; // rbx

  v4 = nmemb * size;
  if ( nmemb * size )
    Scaleform::ArrayData<unsigned char,Scaleform::AllocatorGH<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Append(
      (Scaleform::ArrayData<unsigned char,Scaleform::AllocatorGH<unsigned char,2>,Scaleform::ArrayDefaultPolicy> *)userp,
      (const unsigned __int8 *)buffer,
      v4);
  return v4;
}

// attributes: thunk
void __fastcall Scaleform::GFx::System::Init(
        const Scaleform::MemoryHeap::HeapDesc *rootHeapDesc,
        Scaleform::SysAllocBase *psysAlloc)
{
  Scaleform::System::Init(rootHeapDesc, psysAlloc);
}

void __fastcall Scaleform::GFx::Loader::InitLoader(
        Scaleform::GFx::Loader *this,
        const Scaleform::GFx::Loader::LoaderConfig *cfg)
{
  unsigned int DefLoadFlags; // eax
  bool v5; // bl
  Scaleform::GFx::ResourceLib *v6; // rax
  Scaleform::GFx::LoaderImpl *v7; // rax
  __int64 v8; // rax
  Scaleform::GFx::State *v9; // rbx

  ActorWeapon::ActionFlagCheck((_SETJMP_FLOAT128 *)this);
  DefLoadFlags = cfg->DefLoadFlags;
  this->DefLoadFlags = cfg->DefLoadFlags;
  v5 = (DefLoadFlags & 0x10000000) != 0;
  v6 = (Scaleform::GFx::ResourceLib *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))Scaleform::Memory::pGlobalHeap->Alloc)(
                                        Scaleform::Memory::pGlobalHeap,
                                        40i64);
  if ( v6 )
    Scaleform::GFx::ResourceLib::ResourceLib(v6, v5);
  this->pStrongResourceLib = v6;
  v7 = (Scaleform::GFx::LoaderImpl *)Scaleform::Memory::pGlobalHeap->Alloc(Scaleform::Memory::pGlobalHeap, 128i64, 0i64);
  if ( v7 )
    Scaleform::GFx::LoaderImpl::LoaderImpl(v7, this->pStrongResourceLib, v5);
  this->pImpl = v7;
  if ( v7 )
  {
    this->SetState(this, State_OrigScale9Parent|State_MaskNode, cfg->pFileOpener.pObject);
    v8 = ((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))Scaleform::Memory::pGlobalHeap->Alloc)(
           Scaleform::Memory::pGlobalHeap,
           32i64);
    v9 = (Scaleform::GFx::State *)v8;
    if ( v8 )
    {
      *(_DWORD *)(v8 + 16) = 16;
      *(_QWORD *)v8 = &Scaleform::RefCountImplCore::`vftable';
      *(_QWORD *)v8 = &Scaleform::GFx::ParseControl::`vftable';
      *(_DWORD *)(v8 + 8) = 1;
      *(_DWORD *)(v8 + 24) = 0;
    }
    else
    {
      v9 = 0i64;
    }
    this->SetState(this, (Scaleform::GFx::State::StateType)16i64, v9);
    if ( v9 )
      Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v9);
    this->SetState(this, State_Internal_MaskOwner|State_MaskNode|0x10, cfg->pZLibSupport.pObject);
  }
}

char __fastcall Scaleform::GFx::URLBuilder::IsPathAbsolute(const char *url)
{
  unsigned int Char_Advance0; // eax
  unsigned int v2; // eax
  char *putf8Buffer; // [rsp+30h] [rbp+8h] BYREF

  putf8Buffer = (char *)url;
  if ( !url || !*url )
    return 1;
  Char_Advance0 = Scaleform::UTF8Util::DecodeNextChar_Advance0((const char **)&putf8Buffer);
  if ( !Char_Advance0 )
    --putf8Buffer;
  if ( Char_Advance0 == 47 || Char_Advance0 == 92 )
    return 1;
  while ( Char_Advance0 )
  {
    do
    {
      if ( Char_Advance0 == 58 )
      {
        v2 = Scaleform::UTF8Util::DecodeNextChar_Advance0((const char **)&putf8Buffer);
        if ( v2 )
        {
          if ( v2 == 47 || v2 == 92 )
            return 1;
        }
        else
        {
          --putf8Buffer;
        }
      }
      else if ( Char_Advance0 == 47 || Char_Advance0 == 92 )
      {
        return 0;
      }
      Char_Advance0 = Scaleform::UTF8Util::DecodeNextChar_Advance0((const char **)&putf8Buffer);
    }
    while ( Char_Advance0 );
    --putf8Buffer;
  }
  return 0;
}

__int64 __fastcall Scaleform::GFx::URLBuilder::IsProtocol(const Scaleform::String *path)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  __int64 v3; // rdx
  char v4; // cl
  unsigned __int8 v5; // di
  char v7; // cl
  Scaleform::String result; // [rsp+38h] [rbp+10h] BYREF

  Scaleform::String::GetProtocol((Scaleform::String *)path, &result);
  v1 = result.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64;
  v2 = 0i64;
  v3 = 0i64;
  while ( 1 )
  {
    v4 = *(_BYTE *)(v1 + v3++ + 12);
    if ( v4 != aHttp[v3 - 1] )
      break;
    if ( v3 == 8 )
      goto LABEL_4;
  }
  while ( 1 )
  {
    v7 = *(_BYTE *)(v1 + v2++ + 12);
    if ( v7 != aFile[v2 - 1] )
      break;
    if ( v2 == 8 )
      goto LABEL_4;
  }
  if ( !strcmp((const char *)(v1 + 12), "https://") )
  {
LABEL_4:
    v5 = 1;
    goto LABEL_5;
  }
  v5 = 0;
LABEL_5:
  if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync((volatile int *)(v1 + 8), -1) == 1 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, (void *)v1);
  return v5;
}

void __fastcall Scaleform::ArrayDataBase<Scaleform::Render::ImageFileHandler *,Scaleform::AllocatorGH<Scaleform::Render::ImageFileHandler *,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        Scaleform::ArrayDataBase<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile>,Scaleform::AllocatorGH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile>,2>,Scaleform::ArrayDefaultPolicy> *this,
        const void *pheapAddr,
        unsigned __int64 newCapacity)
{
  Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile> *Data; // rdx
  unsigned __int64 v5; // rdi
  Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile> *v6; // rax
  int v7; // [rsp+30h] [rbp+8h] BYREF

  if ( newCapacity != this->Policy.Capacity )
  {
    Data = this->Data;
    if ( newCapacity )
    {
      v5 = (newCapacity + 3) & 0xFFFFFFFFFFFFFFFCui64;
      if ( Data )
      {
        v6 = (Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile> *)Scaleform::Memory::pGlobalHeap->Realloc(
                                                                            Scaleform::Memory::pGlobalHeap,
                                                                            Data,
                                                                            8 * v5);
        this->Policy.Capacity = v5;
        this->Data = v6;
        return;
      }
      v7 = 2;
      this->Data = (Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile> *)Scaleform::Memory::pGlobalHeap->Alloc(
                                                                                  Scaleform::Memory::pGlobalHeap,
                                                                                  8 * v5,
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

void __fastcall Scaleform::ArrayDataBase<Scaleform::String,Scaleform::AllocatorGH<Scaleform::String,2>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
        Scaleform::ArrayDataBase<Scaleform::String,Scaleform::AllocatorGH<Scaleform::String,2>,Scaleform::ArrayDefaultPolicy> *this,
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
      Scaleform::ArrayDataBase<Scaleform::Render::ImageFileHandler *,Scaleform::AllocatorGH<Scaleform::Render::ImageFileHandler *,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        (Scaleform::ArrayDataBase<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile>,Scaleform::AllocatorGH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile>,2>,Scaleform::ArrayDefaultPolicy> *)this,
        pheapAddr,
        newSize + (newSize >> 2));
      this->Size = newSize;
    }
  }
  else
  {
    Scaleform::ConstructorMov<Scaleform::String>::DestructArray(&this->Data[newSize], Size - newSize);
    if ( newSize < this->Policy.Capacity >> 1 )
      Scaleform::ArrayDataBase<Scaleform::Render::ImageFileHandler *,Scaleform::AllocatorGH<Scaleform::Render::ImageFileHandler *,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        (Scaleform::ArrayDataBase<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile>,Scaleform::AllocatorGH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile>,2>,Scaleform::ArrayDefaultPolicy> *)this,
        pheapAddr,
        newSize);
    this->Size = newSize;
  }
}

bool __fastcall Scaleform::GFx::URLBuilder::SendURLRequest(
        Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy> *bytes,
        const Scaleform::String *path,
        Scaleform::GFx::URLBuilder::UrlMethod method,
        const char *data,
        int dataLength,
        const Scaleform::Array<Scaleform::String,2,Scaleform::ArrayDefaultPolicy> *headers,
        const char *contentType)
{
  char v8; // si
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rbp
  _QWORD *v16; // rax
  bool v17; // r15
  void *v18; // rbx
  __int64 v19; // rax
  void *v20; // rbx
  unsigned __int64 i; // rbx
  __int64 v22; // rax
  int v23; // ebx
  Scaleform::String v25; // [rsp+20h] [rbp-38h] BYREF
  __int64 v26[6]; // [rsp+28h] [rbp-30h] BYREF

  v8 = 0;
  LODWORD(v25.pData) = 0;
  v12 = curl_easy_init();
  v13 = v12;
  if ( !v12 )
    return v12;
  curl_easy_setopt(v12, 10002i64, (path->HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12);
  curl_easy_setopt(v13, 20011i64, Scaleform::GFx::URLBuilder::HttpWriteData);
  curl_easy_setopt(v13, 10001i64, bytes);
  curl_easy_setopt(v13, 10018i64, "Scaleform-agent/1.0");
  curl_easy_setopt(v13, 64i64, 0i64);
  curl_easy_setopt(v13, 81i64, 0i64);
  if ( method == Url_Method_Post )
  {
    if ( !data || dataLength <= 0 )
    {
      curl_easy_setopt(v13, 47i64, 1i64);
      goto LABEL_12;
    }
    v14 = 10015i64;
  }
  else
  {
    if ( method != Url_Method_Put )
      goto LABEL_12;
    curl_easy_setopt(v13, 46i64, 1i64);
    curl_easy_setopt(v13, 54i64, 1i64);
    if ( !data || dataLength <= 0 )
      goto LABEL_12;
    v26[0] = (__int64)data;
    v26[1] = dataLength;
    data = (const char *)dataLength;
    curl_easy_setopt(v13, 10009i64, v26);
    curl_easy_setopt(v13, 20012i64, Scaleform::GFx::URLBuilder::HttpReadData);
    v14 = 30115i64;
  }
  curl_easy_setopt(v13, v14, data);
LABEL_12:
  curl_easy_setopt(v13, 10001i64, bytes);
  v15 = 0i64;
  v17 = 0;
  if ( contentType )
  {
    Scaleform::String::String(&v25, contentType);
    v8 = 1;
    if ( (*(_QWORD *)(*v16 & 0xFFFFFFFFFFFFFFFCui64) & 0x7FFFFFFFFFFFFFFFi64) != 0 )
      v17 = 1;
  }
  if ( (v8 & 1) != 0 )
  {
    v18 = (void *)(v25.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
    if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
           (volatile int *)((v25.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
           -1) == 1 )
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v18);
  }
  if ( v17 )
  {
    Scaleform::String::String(&v25, "Content-Type: ");
    Scaleform::String::AppendString(&v25, contentType, -1i64);
    v19 = curl_slist_append(0i64, (v25.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12);
    v20 = (void *)(v25.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
    v15 = v19;
    if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
           (volatile int *)((v25.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
           -1) == 1 )
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v20);
  }
  if ( headers )
  {
    for ( i = 0i64; i < headers->Data.Size; v15 = v22 )
      v22 = curl_slist_append(v15, (headers->Data.Data[i++].HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12);
  }
  if ( v15 )
    curl_easy_setopt(v13, 10023i64, v15);
  v23 = curl_easy_perform(v13);
  curl_easy_cleanup(v13);
  LOBYTE(v12) = v23 == 0;
  return v12;
}

