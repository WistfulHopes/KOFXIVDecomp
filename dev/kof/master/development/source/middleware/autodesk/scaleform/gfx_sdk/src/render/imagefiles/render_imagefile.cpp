#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_image.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"

Scaleform::Render::Image * Scaleform::Render::ImageFileReader::Read(Scaleform::File * file, const Scaleform::Render::ImageCreateArgs & args); // 0x14037C570
class Scaleform::Ptr<Scaleform::Render::ImageSource>
{
protected:
	Scaleform::Render::ImageSource * pObject; // 0x0
public:
	Ptr<Scaleform::Render::ImageSource>(const Scaleform::Ptr<Scaleform::Render::ImageSource> &);
	Ptr<Scaleform::Render::ImageSource>(Scaleform::Render::ImageSource *);
	Ptr<Scaleform::Render::ImageSource>(Scaleform::Ptr<Scaleform::Render::ImageSource> &, Scaleform::PickType);
	Ptr<Scaleform::Render::ImageSource>(Scaleform::Pickable<Scaleform::Render::ImageSource>);
	Ptr<Scaleform::Render::ImageSource>(Scaleform::Render::ImageSource &);
	Ptr<Scaleform::Render::ImageSource>();
	~Ptr<Scaleform::Render::ImageSource>();
	bool operator==(Scaleform::Render::ImageSource *);
	bool operator==(const Scaleform::Ptr<Scaleform::Render::ImageSource> &);
	bool operator!=(Scaleform::Render::ImageSource *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Render::ImageSource> &);
	bool operator<(const Scaleform::Ptr<Scaleform::Render::ImageSource> &);
	Scaleform::Ptr<Scaleform::Render::ImageSource> & operator=(Scaleform::Pickable<Scaleform::Render::ImageSource>);
	const Scaleform::Ptr<Scaleform::Render::ImageSource> & operator=(Scaleform::Render::ImageSource &);
	const Scaleform::Ptr<Scaleform::Render::ImageSource> & operator=(Scaleform::Render::ImageSource *);
	const Scaleform::Ptr<Scaleform::Render::ImageSource> & operator=(const Scaleform::Ptr<Scaleform::Render::ImageSource> &);
	Scaleform::Ptr<Scaleform::Render::ImageSource> & SetPtr(Scaleform::Pickable<Scaleform::Render::ImageSource>);
	Scaleform::Ptr<Scaleform::Render::ImageSource> & SetPtr(Scaleform::Render::ImageSource &);
	Scaleform::Ptr<Scaleform::Render::ImageSource> & SetPtr(Scaleform::Render::ImageSource *);
	Scaleform::Ptr<Scaleform::Render::ImageSource> & SetPtr(const Scaleform::Ptr<Scaleform::Render::ImageSource> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Render::ImageSource * & GetRawRef();
	Scaleform::Render::ImageSource * GetPtr();
	Scaleform::Render::ImageSource & operator*();
	Scaleform::Render::ImageSource * operator->();
	Scaleform::Render::ImageSource * operator class Scaleform::Render::ImageSource *();
	Scaleform::Ptr<Scaleform::Render::ImageSource> & Pick(Scaleform::Render::ImageSource *);
	Scaleform::Ptr<Scaleform::Render::ImageSource> & Pick(Scaleform::Pickable<Scaleform::Render::ImageSource>);
	Scaleform::Ptr<Scaleform::Render::ImageSource> & Pick(Scaleform::Ptr<Scaleform::Render::ImageSource> &);
};
class Scaleform::Ptr<Scaleform::Render::RawImage>
{
protected:
	Scaleform::Render::RawImage * pObject; // 0x0
public:
	Ptr<Scaleform::Render::RawImage>(const Scaleform::Ptr<Scaleform::Render::RawImage> &);
	Ptr<Scaleform::Render::RawImage>(Scaleform::Render::RawImage *);
	Ptr<Scaleform::Render::RawImage>(Scaleform::Ptr<Scaleform::Render::RawImage> &, Scaleform::PickType);
	Ptr<Scaleform::Render::RawImage>(Scaleform::Pickable<Scaleform::Render::RawImage>);
	Ptr<Scaleform::Render::RawImage>(Scaleform::Render::RawImage &);
	Ptr<Scaleform::Render::RawImage>();
	~Ptr<Scaleform::Render::RawImage>();
	bool operator==(Scaleform::Render::RawImage *);
	bool operator==(const Scaleform::Ptr<Scaleform::Render::RawImage> &);
	bool operator!=(Scaleform::Render::RawImage *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Render::RawImage> &);
	bool operator<(const Scaleform::Ptr<Scaleform::Render::RawImage> &);
	Scaleform::Ptr<Scaleform::Render::RawImage> & operator=(Scaleform::Pickable<Scaleform::Render::RawImage>);
	const Scaleform::Ptr<Scaleform::Render::RawImage> & operator=(Scaleform::Render::RawImage &);
	const Scaleform::Ptr<Scaleform::Render::RawImage> & operator=(Scaleform::Render::RawImage *);
	const Scaleform::Ptr<Scaleform::Render::RawImage> & operator=(const Scaleform::Ptr<Scaleform::Render::RawImage> &);
	Scaleform::Ptr<Scaleform::Render::RawImage> & SetPtr(Scaleform::Pickable<Scaleform::Render::RawImage>);
	Scaleform::Ptr<Scaleform::Render::RawImage> & SetPtr(Scaleform::Render::RawImage &);
	Scaleform::Ptr<Scaleform::Render::RawImage> & SetPtr(Scaleform::Render::RawImage *);
	Scaleform::Ptr<Scaleform::Render::RawImage> & SetPtr(const Scaleform::Ptr<Scaleform::Render::RawImage> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Render::RawImage * & GetRawRef();
	Scaleform::Render::RawImage * GetPtr();
	Scaleform::Render::RawImage & operator*();
	Scaleform::Render::RawImage * operator->();
	Scaleform::Render::RawImage * operator class Scaleform::Render::RawImage *();
	Scaleform::Ptr<Scaleform::Render::RawImage> & Pick(Scaleform::Render::RawImage *);
	Scaleform::Ptr<Scaleform::Render::RawImage> & Pick(Scaleform::Pickable<Scaleform::Render::RawImage>);
	Scaleform::Ptr<Scaleform::Render::RawImage> & Pick(Scaleform::Ptr<Scaleform::Render::RawImage> &);
};
Scaleform::Render::ImageFileHandlerRegistry::ImageFileHandlerRegistry(unsigned long handlerCount, ...); // 0x14037C2A0
void Scaleform::Render::ImageFileHandlerRegistry::AddHandler(Scaleform::Render::ImageFileHandler * handler); // 0x14037C370
Scaleform::Render::ImageFileReader * Scaleform::Render::ImageFileHandlerRegistry::GetReader(Scaleform::Render::ImageFileFormat format); // 0x14037C4F0
Scaleform::Render::ImageFileFormat Scaleform::Render::ImageFileHandlerRegistry::DetectFormat(Scaleform::Render::ImageFileReader * * preader, Scaleform::File * file, unsigned char * header, unsigned long long headerSize); // 0x14037C440
Scaleform::Render::Image * Scaleform::Render::ImageFileHandlerRegistry::ReadImage(Scaleform::File * file, const Scaleform::Render::ImageCreateArgs & args); // 0x14037C5F0void Scaleform::Render::ImageFileHandlerRegistry::ImageFileHandlerRegistry(
        Scaleform::Render::ImageFileHandlerRegistry *this,
        unsigned int handlerCount,
        ...)
{
  int v2; // esi
  unsigned int *v4; // r14
  Scaleform::Render::ImageFileHandler *v5; // rbp
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // r8
  Scaleform::Render::ImageFileHandler **v8; // rcx
  Scaleform::Render::ImageFileHandler **v9; // rcx
  unsigned int v10; // [rsp+68h] [rbp+10h] BYREF

  v10 = handlerCount;
  v2 = 0;
  this->__vftable = (Scaleform::Render::ImageFileHandlerRegistry_vtbl *)&Scaleform::Render::ImageFileHandlerRegistry::`vftable';
  this->Handlers.Data.Data = 0i64;
  this->Handlers.Data.Size = 0i64;
  this->Handlers.Data.Policy.Capacity = 0i64;
  if ( handlerCount )
  {
    v4 = &v10;
    while ( 1 )
    {
      v5 = (Scaleform::Render::ImageFileHandler *)*((_QWORD *)v4 + 1);
      v4 += 2;
      if ( v5 )
        break;
LABEL_12:
      if ( ++v2 >= v10 )
        return;
    }
    v6 = this->Handlers.Data.Size + 1;
    if ( v6 >= this->Handlers.Data.Size )
    {
      if ( v6 <= this->Handlers.Data.Policy.Capacity )
        goto LABEL_10;
      v7 = v6 + (v6 >> 2);
    }
    else
    {
      if ( v6 >= this->Handlers.Data.Policy.Capacity >> 1 )
        goto LABEL_10;
      v7 = this->Handlers.Data.Size + 1;
    }
    Scaleform::ArrayDataBase<Scaleform::Render::ImageFileHandler *,Scaleform::AllocatorGH<Scaleform::Render::ImageFileHandler *,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      (Scaleform::ArrayDataBase<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile>,Scaleform::AllocatorGH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile>,2>,Scaleform::ArrayDefaultPolicy> *)&this->Handlers,
      &this->Handlers,
      v7);
LABEL_10:
    v8 = this->Handlers.Data.Data - 1;
    this->Handlers.Data.Size = v6;
    v9 = &v8[v6];
    if ( v9 )
      *v9 = v5;
    goto LABEL_12;
  }
}

void __fastcall Scaleform::Render::ImageFileHandlerRegistry::AddHandler(
        Scaleform::Render::ImageFileHandlerRegistry *this,
        Scaleform::Render::ImageFileHandler *handler)
{
  unsigned int v3; // ebx
  __int64 v5; // r8
  Scaleform::Render::ImageFileHandler *v6; // rcx
  Scaleform::Render::ImageFileFormat v7; // edi
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // r8
  Scaleform::Render::ImageFileHandler **v10; // rcx
  Scaleform::Render::ImageFileHandler **v11; // rcx

  if ( !handler )
    return;
  v3 = 0;
  if ( !this->Handlers.Data.Size )
  {
LABEL_6:
    v8 = this->Handlers.Data.Size + 1;
    if ( v8 >= this->Handlers.Data.Size )
    {
      if ( v8 <= this->Handlers.Data.Policy.Capacity )
        goto LABEL_12;
      v9 = v8 + (v8 >> 2);
    }
    else
    {
      if ( v8 >= this->Handlers.Data.Policy.Capacity >> 1 )
        goto LABEL_12;
      v9 = this->Handlers.Data.Size + 1;
    }
    Scaleform::ArrayDataBase<Scaleform::Render::ImageFileHandler *,Scaleform::AllocatorGH<Scaleform::Render::ImageFileHandler *,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      (Scaleform::ArrayDataBase<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile>,Scaleform::AllocatorGH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile>,2>,Scaleform::ArrayDefaultPolicy> *)&this->Handlers,
      &this->Handlers,
      v9);
LABEL_12:
    v10 = this->Handlers.Data.Data - 1;
    this->Handlers.Data.Size = v8;
    v11 = &v10[v8];
    if ( v11 )
      *v11 = handler;
    return;
  }
  v5 = 0i64;
  while ( 1 )
  {
    v6 = this->Handlers.Data.Data[v5];
    v7 = v6->GetFormat(v6);
    if ( v7 == handler->GetFormat(handler) )
      break;
    v5 = ++v3;
    if ( v3 >= this->Handlers.Data.Size )
      goto LABEL_6;
  }
}

__int64 __fastcall Scaleform::Render::ImageFileHandlerRegistry::DetectFormat(
        Scaleform::Render::ImageFileHandlerRegistry *this,
        Scaleform::Render::ImageFileReader **preader,
        Scaleform::File *file,
        unsigned __int8 *header,
        unsigned __int64 headerSize)
{
  Scaleform::Render::ImageFileReader **v5; // r14
  __int64 v9; // rbx
  unsigned __int64 v10; // rbp
  Scaleform::Render::ImageFileHandler *v11; // rcx
  Scaleform::Render::ImageFileHandler *v12; // rsi
  char v14; // [rsp+50h] [rbp+8h] BYREF

  v5 = (Scaleform::Render::ImageFileReader **)&v14;
  if ( preader )
    v5 = preader;
  v9 = 0i64;
  if ( this->Handlers.Data.Size )
  {
    v10 = headerSize;
    while ( 1 )
    {
      v11 = this->Handlers.Data.Data[v9];
      if ( v11->IsReader(v11) )
      {
        v12 = this->Handlers.Data.Data[v9];
        if ( ((unsigned __int8 (__fastcall *)(Scaleform::Render::ImageFileHandler *, Scaleform::File *, unsigned __int8 *, unsigned __int64))v12->__vftable[1].~ImageFileHandler)(
               v12,
               file,
               header,
               v10) )
        {
          break;
        }
      }
      if ( ++v9 >= this->Handlers.Data.Size )
        goto LABEL_8;
    }
    *v5 = (Scaleform::Render::ImageFileReader *)v12;
    return ((__int64 (__fastcall *)(Scaleform::Render::ImageFileHandler *))v12->GetFormat)(v12);
  }
  else
  {
LABEL_8:
    *v5 = 0i64;
    return 1i64;
  }
}

Scaleform::Render::ImageFileHandler *__fastcall Scaleform::Render::ImageFileHandlerRegistry::GetReader(
        Scaleform::Render::ImageFileHandlerRegistry *this,
        Scaleform::Render::ImageFileFormat format)
{
  __int64 v2; // rbx
  Scaleform::Render::ImageFileHandler *v5; // rcx
  Scaleform::Render::ImageFileHandler *v6; // rcx

  v2 = 0i64;
  if ( !this->Handlers.Data.Size )
    return 0i64;
  while ( 1 )
  {
    v5 = this->Handlers.Data.Data[v2];
    if ( v5->IsReader(v5) )
    {
      v6 = this->Handlers.Data.Data[v2];
      if ( v6->GetFormat(v6) == format )
        break;
    }
    if ( ++v2 >= this->Handlers.Data.Size )
      return 0i64;
  }
  return this->Handlers.Data.Data[v2];
}

Scaleform::Render::Image *__fastcall Scaleform::Render::ImageFileReader::Read(
        Scaleform::Render::ImageFileReader *this,
        Scaleform::File *file,
        const Scaleform::Render::ImageCreateArgs *args)
{
  Scaleform::Render::ImageFileReader_vtbl *v3; // rax
  Scaleform::Render::Image *result; // rax
  Scaleform::Render::Image *v6; // rbx
  __int64 v7; // rdi
  int v8; // [rsp+20h] [rbp-38h] BYREF
  __int128 v9; // [rsp+28h] [rbp-30h]
  __int64 v10; // [rsp+38h] [rbp-20h]
  int v11; // [rsp+40h] [rbp-18h]

  v3 = this->__vftable;
  v8 = 0;
  v10 = 0i64;
  v9 = 0i64;
  v11 = 0;
  result = (Scaleform::Render::Image *)v3->ReadImageSource(this, file, (const Scaleform::Render::ImageCreateArgs *)&v8);
  v6 = result;
  if ( result )
  {
    v7 = ((__int64 (__fastcall *)(Scaleform::Render::Image *, const Scaleform::Render::ImageCreateArgs *))result->GetUse)(
           result,
           args);
    v6->Release(v6);
    return (Scaleform::Render::Image *)v7;
  }
  return result;
}

Scaleform::Render::Image *__fastcall Scaleform::Render::ImageFileHandlerRegistry::ReadImage(
        Scaleform::Render::ImageFileHandlerRegistry *this,
        Scaleform::File *file,
        const Scaleform::Render::ImageCreateArgs *args)
{
  __int64 v3; // rbx
  Scaleform::Render::ImageFileHandler *v7; // rcx
  Scaleform::Render::ImageFileHandler *v8; // rsi

  v3 = 0i64;
  if ( !this->Handlers.Data.Size )
    return 0i64;
  while ( 1 )
  {
    v7 = this->Handlers.Data.Data[v3];
    if ( v7->IsReader(v7) )
    {
      v8 = this->Handlers.Data.Data[v3];
      if ( ((unsigned __int8 (__fastcall *)(Scaleform::Render::ImageFileHandler *, Scaleform::File *, _QWORD, _QWORD))v8->__vftable[1].~ImageFileHandler)(
             v8,
             file,
             0i64,
             0i64) )
      {
        break;
      }
    }
    if ( ++v3 >= this->Handlers.Data.Size )
      return 0i64;
  }
  return (Scaleform::Render::Image *)((__int64 (__fastcall *)(Scaleform::Render::ImageFileHandler *, Scaleform::File *, const Scaleform::Render::ImageCreateArgs *))v8->__vftable[1].IsReader)(
                                       v8,
                                       file,
                                       args);
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

