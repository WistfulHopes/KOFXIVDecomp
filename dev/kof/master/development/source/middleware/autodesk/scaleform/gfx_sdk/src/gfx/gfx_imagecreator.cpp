#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/sif_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/tga_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/png_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_characterdef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_twips.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/jpeg_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefileutil.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_system.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_imagecreator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_image.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_loader.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefile.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/dds_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cxform.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_resource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysfile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_gradients.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_font.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatapacked.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_pathdatapacker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_wwhelper.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_event.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_keycodes.h"

Scaleform::GFx::ImageCreator::ImageCreator(Scaleform::Render::TextureManager * textureManager); // 0x1402EFCE0
Scaleform::Render::Image * Scaleform::GFx::ImageCreator::LoadImageFile(const Scaleform::GFx::ImageCreateInfo & info, const Scaleform::String & url); // 0x1402F0300
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
Scaleform::Render::Image * Scaleform::GFx::ImageCreator::LoadExportedImage(const Scaleform::GFx::ImageCreateExportInfo & info, const Scaleform::String & url); // 0x1402F0170
Scaleform::Render::Image * Scaleform::GFx::ImageCreator::CreateImage(const Scaleform::GFx::ImageCreateInfo & info, Scaleform::Render::ImageSource * source); // 0x1402F00D0
Scaleform::GFx::ImageFileHandlerRegistry::ImageFileHandlerRegistry(Scaleform::GFx::ImageFileHandlerRegistry::InitType init); // 0x1402EFD50void __fastcall Scaleform::GFx::ImageCreator::ImageCreator(
        Scaleform::GFx::ImageCreator *this,
        Scaleform::Render::TextureManager *textureManager)
{
  this->SType = State_OrigNodeBounds|State_MaskNode;
  this->__vftable = (Scaleform::GFx::ImageCreator_vtbl *)&Scaleform::RefCountImplCore::`vftable';
  this->__vftable = (Scaleform::GFx::ImageCreator_vtbl *)&Scaleform::GFx::ImageCreator::`vftable';
  this->RefCount = 1;
  if ( textureManager )
  {
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)textureManager);
    this->pTextureManager.pObject = textureManager;
  }
  else
  {
    this->pTextureManager.pObject = 0i64;
  }
}

void __fastcall Scaleform::GFx::ImageFileHandlerRegistry::ImageFileHandlerRegistry(
        Scaleform::GFx::ImageFileHandlerRegistry *this,
        Scaleform::GFx::ImageFileHandlerRegistry::InitType init)
{
  this->SType = State_Type_Count|State_MaskNode;
  this->Scaleform::GFx::State::Scaleform::RefCountBase<Scaleform::GFx::State,2>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,2>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable = (Scaleform::GFx::ImageFileHandlerRegistry_vtbl *)&Scaleform::RefCountImplCore::`vftable';
  this->RefCount = 1;
  this->Scaleform::GFx::State::Scaleform::RefCountBase<Scaleform::GFx::State,2>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,2>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable = (Scaleform::GFx::ImageFileHandlerRegistry_vtbl *)&Scaleform::GFx::State::`vftable';
  Scaleform::Render::ImageFileHandlerRegistry::ImageFileHandlerRegistry(
    &this->Scaleform::Render::ImageFileHandlerRegistry,
    0);
  this->Scaleform::GFx::State::Scaleform::RefCountBase<Scaleform::GFx::State,2>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,2>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable = (Scaleform::GFx::ImageFileHandlerRegistry_vtbl *)&Scaleform::GFx::ImageFileHandlerRegistry::`vftable'{for `Scaleform::GFx::State'};
  this->Scaleform::Render::ImageFileHandlerRegistry::__vftable = (Scaleform::Render::ImageFileHandlerRegistry_vtbl *)&Scaleform::GFx::ImageFileHandlerRegistry::`vftable'{for `Scaleform::Render::ImageFileHandlerRegistry'};
  if ( init == 1 )
  {
    Scaleform::Render::ImageFileHandlerRegistry::AddHandler(
      &this->Scaleform::Render::ImageFileHandlerRegistry,
      &Scaleform::Render::SIF::FileReader::Instance);
    Scaleform::Render::ImageFileHandlerRegistry::AddHandler(
      &this->Scaleform::Render::ImageFileHandlerRegistry,
      &Scaleform::Render::TGA::FileReader::Instance);
    Scaleform::Render::ImageFileHandlerRegistry::AddHandler(
      &this->Scaleform::Render::ImageFileHandlerRegistry,
      &Scaleform::Render::PNG::FileReader::Instance);
    Scaleform::Render::ImageFileHandlerRegistry::AddHandler(
      &this->Scaleform::Render::ImageFileHandlerRegistry,
      &Scaleform::Render::DDS::FileReader::Instance);
  }
}

void __fastcall Scaleform::MemoryFile::MemoryFile(
        Scaleform::MemoryFile *this,
        const Scaleform::String *fileName,
        const unsigned __int8 *pBuffer,
        int buffSize)
{
  this->__vftable = (Scaleform::MemoryFile_vtbl *)&Scaleform::RefCountImplCore::`vftable';
  this->RefCount = 1;
  this->__vftable = (Scaleform::MemoryFile_vtbl *)&Scaleform::MemoryFile::`vftable';
  Scaleform::String::String(&this->FilePath, fileName);
  this->FileData = pBuffer;
  this->FileSize = buffSize;
  this->FileIndex = 0;
  this->Valid = (*(_QWORD *)(fileName->HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) & 0x7FFFFFFFFFFFFFFFi64) != 0
             && pBuffer
             && buffSize > 0;
}

__int64 __fastcall Scaleform::MemoryFile::BytesAvailable(Scaleform::MemoryFile *this)
{
  return (unsigned int)(this->FileSize - this->FileIndex);
}

char __fastcall Scaleform::MemoryFile::ChangeSize(Scaleform::MemoryFile *this, int newSize)
{
  this->FileSize = newSize;
  return 1;
}

bool __fastcall Scaleform::MemoryFile::Close(Scaleform::MemoryFile *this)
{
  this->Valid = 0;
  return 0;
}

__int64 __fastcall AgHttp::onSingletonExit(__crt_locale_data *__formal)
{
  return 0i64;
}

Scaleform::Render::Image *__fastcall Scaleform::GFx::ImageCreator::CreateImage(
        Scaleform::GFx::ImageCreator *this,
        const Scaleform::GFx::ImageCreateInfo *info,
        Scaleform::Render::ImageSource *source)
{
  int v3; // er9
  bool v4; // zf
  Scaleform::Render::ImageSource_vtbl *v5; // rax
  unsigned int Use; // [rsp+20h] [rbp-38h] BYREF
  Scaleform::MemoryHeap *pHeap; // [rsp+28h] [rbp-30h]
  Scaleform::Render::TextureManager *pObject; // [rsp+30h] [rbp-28h]
  __int64 v10; // [rsp+38h] [rbp-20h]
  int v11; // [rsp+40h] [rbp-18h]

  v3 = 0;
  v4 = info->RUse == Use_FontTexture;
  pHeap = info->pHeap;
  Use = info->Use;
  pObject = this->pTextureManager.pObject;
  v10 = 0i64;
  if ( v4 )
    v3 = 9;
  v5 = source->__vftable;
  v11 = v3;
  return v5->CreateCompatibleImage(source, (const Scaleform::Render::ImageCreateArgs *)&Use);
}

char __fastcall Scaleform::Render::BlendModeEffect::canCacheAcrossTransform(const bool __formal)
{
  return 1;
}

const char *__fastcall Scaleform::FILEFile::GetFilePath(Scaleform::FILEFile *this)
{
  return (const char *)((this->FileName.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12);
}

__int64 __fastcall Scaleform::Render::ShapeMeshProvider::GetLayerCount(Concurrency::details::ContextBase *this)
{
  return this->m_id;
}

_BOOL8 __fastcall Scaleform::MemoryFile::IsValid(Scaleform::MemoryFile *this)
{
  return this->Valid;
}

bool __fastcall Scaleform::GFx::InteractiveObject::OnCharEvent(
        Scaleform::Render::Texture *this,
        Scaleform::Render::RenderTargetData *__formal)
{
  return 0;
}

__int64 __fastcall Scaleform::MemoryFile::LGetLength(Scaleform::MemoryFile *this)
{
  return this->FileSize;
}

__int64 __fastcall Scaleform::GFx::ZLibFile::LSeek(Scaleform::FILEFile *this, __int64 offset, __int64 origin)
{
  return this->Seek(this, offset, origin);
}

__int64 __fastcall Scaleform::MemoryFile::LTell(Scaleform::MemoryFile *this)
{
  return this->FileIndex;
}

Scaleform::Render::Image *__fastcall Scaleform::GFx::ImageCreator::LoadExportedImage(
        Scaleform::GFx::ImageCreator *this,
        const Scaleform::GFx::ImageCreateExportInfo *info,
        const Scaleform::String *url)
{
  Scaleform::Render::Image *v6; // rax
  Scaleform::Render::Image *v7; // rdi
  Scaleform::String *Extension; // rax
  unsigned __int64 v9; // rcx
  __int64 v10; // rax
  char v11; // dl
  bool v12; // zf
  bool v13; // bp
  void *v14; // rbx
  void *v15; // rbx
  Scaleform::Render::Image *v16; // rax
  void *v17; // rbx
  Scaleform::String v18; // [rsp+50h] [rbp+8h] BYREF
  Scaleform::String result; // [rsp+68h] [rbp+20h] BYREF

  v6 = (Scaleform::Render::Image *)((__int64 (__fastcall *)(Scaleform::GFx::ImageCreator *))this->LoadImageFile)(this);
  v7 = v6;
  if ( !v6 )
  {
    if ( Scaleform::String::HasExtension((const char *)((url->HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12)) )
    {
      Extension = Scaleform::String::GetExtension((Scaleform::String *)url, &result);
      v9 = Scaleform::String::ToLower(Extension, &v18)->HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64;
      v10 = 0i64;
      while ( 1 )
      {
        v11 = *(_BYTE *)(v9 + v10++ + 12);
        v12 = v11 == aDds[v10 - 1];
        if ( v11 != aDds[v10 - 1] )
          break;
        if ( v10 == 5 )
        {
          v12 = v11 == aDds[4];
          break;
        }
      }
      v13 = !v12;
      v14 = (void *)(v18.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
      if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
             (volatile int *)((v18.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
             -1) == 1 )
        Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v14);
      v15 = (void *)(result.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
      if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
             (volatile int *)((result.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
             -1) == 1 )
        Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v15);
      if ( v13 )
      {
        Scaleform::String::String(&v18, url);
        Scaleform::String::StripExtension(&v18);
        Scaleform::String::AppendString(&v18, ".dds", -1i64);
        v16 = this->LoadImageFile(this, info, &v18);
        v17 = (void *)(v18.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
        v7 = v16;
        if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
               (volatile int *)((v18.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
               -1) == 1 )
          Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v17);
      }
      return v7;
    }
    else
    {
      return 0i64;
    }
  }
  return v6;
}

Scaleform::Render::Image *__fastcall Scaleform::GFx::ImageCreator::LoadImageFile(
        Scaleform::GFx::ImageCreator *this,
        const Scaleform::GFx::ImageCreateInfo *info,
        const Scaleform::String *url)
{
  Scaleform::GFx::ImageFileHandlerRegistry *pIFHRegistry; // r13
  Scaleform::String *v7; // rax
  void *v8; // rbx
  Scaleform::String *v9; // rax
  const Scaleform::String *v10; // rax
  void *v11; // rbx
  void *v12; // rbx
  Scaleform::Render::TextureManager *pObject; // rcx
  char v14; // r14
  const Scaleform::String *v15; // rax
  void *v16; // rbx
  const Scaleform::String *v17; // rax
  void *v18; // rbx
  const Scaleform::String *v19; // rax
  void *v20; // rbx
  const Scaleform::String *v21; // rax
  void *v22; // rbx
  Scaleform::File *v23; // rbx
  Scaleform::MemoryFile *v24; // rax
  Scaleform::File *v25; // rax
  bool v26; // zf
  int v27; // eax
  Scaleform::Render::ImageSource *v28; // rdi
  Scaleform::Render::Image *v29; // rsi
  void *v30; // rbx
  Scaleform::String path; // [rsp+48h] [rbp-79h] BYREF
  Scaleform::String v33; // [rsp+50h] [rbp-71h] BYREF
  Scaleform::String result; // [rsp+58h] [rbp-69h] BYREF
  Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy> bytes; // [rsp+60h] [rbp-61h] BYREF
  unsigned int Use; // [rsp+78h] [rbp-49h] BYREF
  __int128 v37; // [rsp+80h] [rbp-41h]
  __int64 v38; // [rsp+90h] [rbp-31h]
  int v39; // [rsp+98h] [rbp-29h]
  Scaleform::Render::ImageFileReader *preader; // [rsp+A0h] [rbp-21h] BYREF
  Scaleform::FileStat v41; // [rsp+A8h] [rbp-19h] BYREF
  Scaleform::FileStat pfileStat; // [rsp+C0h] [rbp-1h] BYREF

  pIFHRegistry = info->pIFHRegistry;
  if ( !pIFHRegistry || !info->pFileOpener )
    return 0i64;
  v7 = Scaleform::String::Substring(
         (Scaleform::String *)url,
         &result,
         0i64,
         (*(_QWORD *)(url->HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) & 0x7FFFFFFFFFFFFFFFi64) - 3);
  Scaleform::String::operator+(v7, &path, "dds");
  v8 = (void *)(result.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
  if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
         (volatile int *)((result.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
         -1) == 1 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v8);
  if ( !Scaleform::SysFile::GetFileStat(&pfileStat, &path) )
  {
    v9 = Scaleform::String::Substring(
           (Scaleform::String *)url,
           &v33,
           0i64,
           (*(_QWORD *)(url->HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) & 0x7FFFFFFFFFFFFFFFi64) - 3);
    v10 = Scaleform::String::operator+(v9, &result, "png");
    Scaleform::String::operator=(&path, v10);
    v11 = (void *)(result.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
    if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
           (volatile int *)((result.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
           -1) == 1 )
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v11);
    v12 = (void *)(v33.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
    if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
           (volatile int *)((v33.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
           -1) == 1 )
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v12);
  }
  if ( !Scaleform::String::HasExtension((const char *)((url->HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12)) )
  {
    pObject = this->pTextureManager.pObject;
    if ( !pObject )
      goto LABEL_24;
    v14 = pObject->GetTextureFormatSupport(pObject);
    if ( (v14 & 1) == 0 )
      goto LABEL_49;
    v15 = Scaleform::String::operator+((Scaleform::String *)url, &v33, ".dds");
    Scaleform::String::operator=(&path, v15);
    v16 = (void *)(v33.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
    if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
           (volatile int *)((v33.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
           -1) == 1 )
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v16);
    if ( !Scaleform::SysFile::GetFileStat(&v41, &path) )
    {
LABEL_49:
      if ( (v14 & 0x10) == 0 )
        goto LABEL_50;
      v17 = Scaleform::String::operator+((Scaleform::String *)url, &v33, ".sif");
      Scaleform::String::operator=(&path, v17);
      v18 = (void *)(v33.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
      if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
             (volatile int *)((v33.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
             -1) == 1 )
        Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v18);
      if ( !Scaleform::SysFile::GetFileStat(&v41, &path) )
      {
LABEL_50:
        if ( (v14 & 8) == 0 )
          goto LABEL_24;
        v19 = Scaleform::String::operator+((Scaleform::String *)url, &v33, ".pvr");
        Scaleform::String::operator=(&path, v19);
        v20 = (void *)(v33.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
        if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
               (volatile int *)((v33.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
               -1) == 1 )
          Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v20);
        if ( !Scaleform::SysFile::GetFileStat(&v41, &path) )
        {
LABEL_24:
          v21 = Scaleform::String::operator+((Scaleform::String *)url, &v33, ".tga");
          Scaleform::String::operator=(&path, v21);
          v22 = (void *)(v33.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
          if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
                 (volatile int *)((v33.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
                 -1) == 1 )
            Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v22);
        }
      }
    }
  }
  v23 = 0i64;
  memset(&bytes, 0, sizeof(bytes));
  if ( !Scaleform::GFx::URLBuilder::IsProtocol(&path) )
  {
    v25 = info->pFileOpener->OpenFile(
            info->pFileOpener,
            (path.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12,
            33i64,
            438i64);
    goto LABEL_32;
  }
  if ( Scaleform::GFx::URLBuilder::SendURLRequest(&bytes, &path, Url_Method_Get, 0i64, 0, 0i64, 0i64) )
  {
    if ( bytes.Data.Size )
    {
      v24 = (Scaleform::MemoryFile *)Scaleform::Memory::pGlobalHeap->Alloc(Scaleform::Memory::pGlobalHeap, 48i64, 0i64);
      if ( v24 )
      {
        Scaleform::MemoryFile::MemoryFile(v24, &path, bytes.Data.Data, bytes.Data.Size);
LABEL_32:
        v23 = v25;
      }
    }
  }
  Use = 0;
  v38 = 0i64;
  v39 = 0;
  v37 = 0i64;
  if ( Scaleform::Render::ImageFileHandlerRegistry::DetectFormat(
         &pIFHRegistry->Scaleform::Render::ImageFileHandlerRegistry,
         &preader,
         v23,
         0i64,
         0i64) == ImageFile_Unknown )
    goto LABEL_38;
  v26 = info->RUse == Use_FontTexture;
  *(_QWORD *)&v37 = info->pHeap;
  Use = info->Use;
  *((_QWORD *)&v37 + 1) = this->pTextureManager.pObject;
  v27 = v39;
  if ( v26 )
    v27 = 9;
  v39 = v27;
  v28 = preader->ReadImageSource(preader, v23, &Use);
  if ( !v28 )
  {
LABEL_38:
    v29 = pIFHRegistry->ReadImage(
            &pIFHRegistry->Scaleform::Render::ImageFileHandlerRegistry,
            v23,
            (const Scaleform::Render::ImageCreateArgs *)&Use);
  }
  else
  {
    v29 = this->CreateImage(this, info, v28);
    v28->Release(v28);
  }
  if ( bytes.Data.Data )
    ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
  if ( v23 )
    Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v23);
  v30 = (void *)(path.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
  if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
         (volatile int *)((path.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
         -1) == 1 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v30);
  return v29;
}

__int64 __fastcall Scaleform::MemoryFile::Read(Scaleform::MemoryFile *this, unsigned __int8 *pbufer, int numBytes)
{
  __int64 FileIndex; // rcx
  int FileSize; // er8

  FileIndex = this->FileIndex;
  FileSize = this->FileSize;
  if ( (int)FileIndex + numBytes > FileSize )
    numBytes = FileSize - FileIndex;
  if ( numBytes > 0 )
  {
    memmove(pbufer, &this->FileData[FileIndex], numBytes);
    this->FileIndex += numBytes;
  }
  return (unsigned int)numBytes;
}

__int64 __fastcall Scaleform::MemoryFile::Seek(Scaleform::MemoryFile *this, int offset, int origin)
{
  int v3; // er8
  __int64 result; // rax

  if ( origin )
  {
    v3 = origin - 1;
    if ( v3 )
    {
      if ( v3 == 1 )
      {
        result = (unsigned int)(this->FileSize - offset);
        this->FileIndex = result;
        return result;
      }
    }
    else
    {
      this->FileIndex += offset;
    }
    return (unsigned int)this->FileIndex;
  }
  else
  {
    this->FileIndex = offset;
    return (unsigned int)offset;
  }
}

__int64 __fastcall Scaleform::MemoryFile::SkipBytes(Scaleform::MemoryFile *this, int numBytes)
{
  int FileIndex; // er8
  int FileSize; // er9

  FileIndex = this->FileIndex;
  FileSize = this->FileSize;
  if ( FileIndex + numBytes > FileSize )
    numBytes = FileSize - FileIndex;
  this->FileIndex = FileIndex + numBytes;
  return (unsigned int)numBytes;
}

__int64 __fastcall Scaleform::MemoryFile::Tell(Scaleform::MemoryFile *this)
{
  return (unsigned int)this->FileIndex;
}

