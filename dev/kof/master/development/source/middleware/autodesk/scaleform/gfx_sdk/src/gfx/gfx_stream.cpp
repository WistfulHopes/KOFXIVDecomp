#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cxform.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_wstring.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_event.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_keycodes.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_gradients.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_image.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_font.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatapacked.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_pathdatapacker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_streamcontext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_wwhelper.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stackmempool.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_log.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_twips.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_types.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_msgformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_locale.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_loader.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_characterdef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_system.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_resource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_stream.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"

Scaleform::GFx::Stream::Stream(Scaleform::File * pinput, Scaleform::MemoryHeap * pheap, Scaleform::Log * plog, Scaleform::GFx::ParseControl * pparseControl); // 0x140390C40
Scaleform::GFx::Stream::Stream(const unsigned char * pbuffer, unsigned long bufSize, Scaleform::MemoryHeap * pheap, Scaleform::Log * plog, Scaleform::GFx::ParseControl * pparseControl); // 0x140390CB0
Scaleform::GFx::Stream::~Stream(); // 0x140390D80
void Scaleform::GFx::Stream::Initialize(Scaleform::File * pinput, Scaleform::Log * plog, Scaleform::GFx::ParseControl * pparseControl); // 0x140390F60
void Scaleform::GFx::Stream::ShutDown(); // 0x140392820
unsigned long Scaleform::GFx::Stream::ReadUInt(unsigned long bitcount); // 0x1403923C0
unsigned long Scaleform::GFx::Stream::ReadUInt1(); // 0x140392340
long Scaleform::GFx::Stream::ReadSInt(unsigned long bitcount); // 0x140391F50
bool Scaleform::GFx::Stream::PopulateBuffer(long size); // 0x140391290
bool Scaleform::GFx::Stream::PopulateBuffer1(); // 0x140391280
void Scaleform::GFx::Stream::SyncFileStream(); // 0x140392860
bool Scaleform::GFx::Stream::ReadString(Scaleform::String * pstr); // 0x140391F80
class Scaleform::Array<char,2,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayData<char,Scaleform::AllocatorGH<char,2>,Scaleform::ArrayDefaultPolicy> >
{
	typedef char ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	Array<char,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::Array<char,2,Scaleform::ArrayDefaultPolicy> &);
	Array<char,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDefaultPolicy &);
	Array<char,2,Scaleform::ArrayDefaultPolicy>(long);
	Array<char,2,Scaleform::ArrayDefaultPolicy>();
	const Scaleform::Array<char,2,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::Array<char,2,Scaleform::ArrayDefaultPolicy> &);
	~Array<char,2,Scaleform::ArrayDefaultPolicy>();
};
bool Scaleform::GFx::Stream::ReadStringWithLength(Scaleform::String * pstr); // 0x1403921E0
struct Scaleform::GFx::Stream::ReadStringWithLength::__l2::StringReader :
	Scaleform::String::InitStruct,
	Uncopyable
{
	Scaleform::GFx::Stream * pStream; // 0x8
	StringReader(Scaleform::GFx::Stream *);
	virtual void InitString(char *, unsigned long long);
	virtual ~StringReader();
	Scaleform::GFx::Stream::ReadStringWithLength::__l2::StringReader & operator=(Scaleform::GFx::Stream::ReadStringWithLength::__l2::StringReader &);
	Scaleform::GFx::Stream::ReadStringWithLength::__l2::StringReader & operator=(const Scaleform::GFx::Stream::ReadStringWithLength::__l2::StringReader &);
};
char * Scaleform::GFx::Stream::ReadStringWithLength(Scaleform::MemoryHeap * pheap); // 0x1403920F0
long Scaleform::GFx::Stream::ReadToBuffer(unsigned char * pdestBuf, unsigned long sz); // 0x140392270
void Scaleform::GFx::Stream::SetPosition(long pos); // 0x1403927A0
Scaleform::GFx::TagType Scaleform::GFx::Stream::OpenTag(Scaleform::GFx::TagInfo * pTagInfo); // 0x140391040
Scaleform::GFx::TagType Scaleform::GFx::Stream::OpenTag(); // 0x140391180
void Scaleform::GFx::Stream::CloseTag(); // 0x140390E80
long Scaleform::GFx::Stream::GetTagEndPosition(); // 0x140390EB0
void Scaleform::GFx::Stream::ReadMatrix(Scaleform::Render::Matrix2x4<float> * pm); // 0x140391980
void Scaleform::GFx::Stream::ReadCxformRgba(Scaleform::Render::Cxform * pcxform); // 0x140391570
void Scaleform::GFx::Stream::ReadRect(Scaleform::Render::Rect<float> * pr); // 0x140391D60
void Scaleform::GFx::Stream::ReadRgb(Scaleform::Render::Color * pc); // 0x140391E50
void Scaleform::GFx::Stream::ReadRgba(Scaleform::Render::Color * pc); // 0x140391F00
unsigned long Scaleform::GFx::Stream::ReadVU32(); // 0x140392680
Scaleform::Log * Scaleform::GFx::Stream::GetLog(); // 0x140487310
bool Scaleform::GFx::Stream::IsVerboseParse(); // 0x140391020
bool Scaleform::GFx::Stream::IsVerboseParseShape(); // 0x140391030
unsigned long Scaleform::GFx::StreamContext::ReadUInt(unsigned long bitcount); // 0x140392470
void Scaleform::GFx::StreamContext::ReadMatrix(Scaleform::Render::Matrix2x4<float> * pm); // 0x140391B30
void Scaleform::GFx::StreamContext::ReadCxformRgb(Scaleform::Render::Cxform * pcxform); // 0x1403913B0
void Scaleform::GFx::StreamContext::ReadCxformRgba(Scaleform::Render::Cxform * pcxform); // 0x140391770void __fastcall Scaleform::GFx::Stream::Stream(
        Scaleform::GFx::Stream *this,
        Scaleform::File *pinput,
        Scaleform::MemoryHeap *pheap,
        Scaleform::Log *plog,
        Scaleform::GFx::ParseControl *pparseControl)
{
  this->__vftable = (Scaleform::GFx::Stream_vtbl *)&Scaleform::GFx::Stream::`vftable';
  this->pInput.pObject = 0i64;
  Scaleform::StringDH::StringDH(&this->FileName, pheap);
  this->pBuffer = this->BuiltinBuffer;
  this->BufferSize = 512;
  Scaleform::GFx::Stream::Initialize(this, pinput, plog, pparseControl);
}

void __fastcall Scaleform::GFx::Stream::Stream(
        Scaleform::GFx::Stream *this,
        const unsigned __int8 *pbuffer,
        unsigned int bufSize,
        Scaleform::MemoryHeap *pheap,
        Scaleform::Log *plog,
        Scaleform::GFx::ParseControl *pparseControl)
{
  Scaleform::RefCountVImpl *pObject; // rcx
  unsigned int ParseFlags; // ecx
  unsigned int BufferSize; // eax

  this->__vftable = (Scaleform::GFx::Stream_vtbl *)&Scaleform::GFx::Stream::`vftable';
  this->pInput.pObject = 0i64;
  Scaleform::StringDH::StringDH(&this->FileName, pheap);
  this->pBuffer = (unsigned __int8 *)pbuffer;
  if ( pbuffer )
    this->BufferSize = bufSize;
  else
    this->BufferSize = 0;
  pObject = (Scaleform::RefCountVImpl *)this->pInput.pObject;
  if ( pObject )
    Scaleform::RefCountImpl::Release(pObject);
  this->pInput.pObject = 0i64;
  this->pLog = plog;
  this->pParseControl = pparseControl;
  if ( pparseControl )
    ParseFlags = pparseControl->ParseFlags;
  else
    ParseFlags = 0;
  this->ParseFlags = ParseFlags;
  *(_WORD *)&this->CurrentByte = 0;
  Scaleform::String::Clear(&this->FileName);
  *(_QWORD *)&this->TagStack[1] = 0i64;
  this->TagStack[0] = 0;
  BufferSize = this->BufferSize;
  this->DataSize = BufferSize;
  this->FilePos = BufferSize;
  this->Pos = 0;
  this->ResyncFile = 0;
}

void __fastcall Scaleform::GFx::Stream::~Stream(Scaleform::GFx::Stream *this)
{
  Scaleform::String::DataDesc *pData; // rbx
  volatile int *v3; // rbx
  Scaleform::RefCountVImpl *pObject; // rcx

  pData = this->FileName.pData;
  this->__vftable = (Scaleform::GFx::Stream_vtbl *)&Scaleform::GFx::Stream::`vftable';
  v3 = (volatile int *)((unsigned __int64)pData & 0xFFFFFFFFFFFFFFFCui64);
  if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(v3 + 2, -1) == 1 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, (void *)v3);
  pObject = (Scaleform::RefCountVImpl *)this->pInput.pObject;
  if ( pObject )
    Scaleform::RefCountImpl::Release(pObject);
  this->__vftable = (Scaleform::GFx::Stream_vtbl *)&Scaleform::GFx::LogBase<Scaleform::GFx::LogState>::`vftable';
}

void __fastcall Scaleform::GFx::Stream::CloseTag(Scaleform::GFx::Stream *this)
{
  Scaleform::GFx::Stream::SetPosition(this, this->TagStack[--this->TagStackEntryCount]);
  this->UnusedBits = 0;
}

AgDisplayPlatformImplementation *__fastcall Scaleform::GFx::Stream::GetLog(AgDisplay *this)
{
  return this->m_platformImplementation;
}

__int64 __fastcall Scaleform::GFx::Stream::GetTagEndPosition(Scaleform::GFx::Stream *this)
{
  __int64 v1; // rax

  v1 = this->TagStackEntryCount - 1;
  if ( (unsigned int)v1 >= 2 )
    return 0i64;
  else
    return (unsigned int)this->TagStack[v1];
}

void __fastcall Scaleform::GFx::Stream::Initialize(
        Scaleform::GFx::Stream *this,
        Scaleform::File *pinput,
        Scaleform::Log *plog,
        Scaleform::GFx::ParseControl *pparseControl)
{
  Scaleform::RefCountVImpl *pObject; // rcx
  unsigned int ParseFlags; // eax
  const char *v10; // rax

  if ( pinput )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)pinput);
  pObject = (Scaleform::RefCountVImpl *)this->pInput.pObject;
  if ( pObject )
    Scaleform::RefCountImpl::Release(pObject);
  this->pInput.pObject = pinput;
  this->pLog = plog;
  this->pParseControl = pparseControl;
  if ( pparseControl )
    ParseFlags = pparseControl->ParseFlags;
  else
    ParseFlags = 0;
  this->ParseFlags = ParseFlags;
  *(_WORD *)&this->CurrentByte = 0;
  if ( pinput )
  {
    v10 = pinput->GetFilePath(pinput);
    Scaleform::String::operator=(&this->FileName, v10);
  }
  else
  {
    Scaleform::String::Clear(&this->FileName);
  }
  *(_QWORD *)&this->TagStack[1] = 0i64;
  this->TagStack[0] = 0;
  *(_QWORD *)&this->Pos = 0i64;
  this->ResyncFile = 0;
  if ( pinput )
    this->FilePos = pinput->Tell(pinput);
  else
    this->FilePos = 0;
}

char __fastcall Scaleform::Render::BlendModeEffect::canCacheAcrossTransform(const bool __formal)
{
  return 1;
}

__int64 __fastcall Scaleform::GFx::Stream::IsVerboseParse(Scaleform::GFx::Stream *this)
{
  return this->ParseFlags & 1;
}

__int64 __fastcall Scaleform::GFx::Stream::IsVerboseParseShape(Scaleform::GFx::Stream *this)
{
  return (this->ParseFlags >> 4) & 1;
}

__int64 __fastcall Scaleform::GFx::Stream::OpenTag(Scaleform::GFx::Stream *this, Scaleform::GFx::TagInfo *pTagInfo)
{
  unsigned int DataSize; // er8
  unsigned int v5; // esi
  int v6; // esi
  __int64 Pos; // r8
  unsigned __int8 *pBuffer; // rdx
  int v9; // edi
  int v10; // ecx
  unsigned int v11; // ebp
  int v12; // edi
  Scaleform::GFx::TagType v13; // ebp
  int v14; // eax
  unsigned __int8 *v15; // r9
  unsigned int v16; // edx
  __int64 result; // rax

  DataSize = this->DataSize;
  v5 = this->FilePos - DataSize;
  this->UnusedBits = 0;
  v6 = this->Pos + v5;
  if ( (int)(DataSize - this->Pos) < 2 )
    Scaleform::GFx::Stream::PopulateBuffer(this, 2);
  Pos = this->Pos;
  pBuffer = this->pBuffer;
  v9 = pBuffer[(unsigned int)(Pos + 1)];
  v10 = pBuffer[Pos];
  this->Pos = Pos + 2;
  v11 = v10 | (v9 << 8);
  v12 = v10 & 0x3F;
  v13 = v11 >> 6;
  if ( v12 == 63 )
  {
    v14 = this->DataSize - (Pos + 2);
    this->UnusedBits = 0;
    if ( v14 < 4 )
      Scaleform::GFx::Stream::PopulateBuffer(this, 4);
    v15 = this->pBuffer;
    v16 = this->Pos;
    v12 = v15[v16] | ((((v15[v16 + 2] | (v15[v16 + 3] << 8)) << 8) | v15[v16 + 1]) << 8);
    this->Pos = v16 + 4;
  }
  pTagInfo->TagOffset = v6;
  pTagInfo->TagType = v13;
  pTagInfo->TagLength = v12;
  pTagInfo->TagDataOffset = this->Pos + this->FilePos - this->DataSize;
  if ( (this->ParseFlags & 1) != 0 )
    Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogParseShape(
      (Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess> *)this,
      "---------------Tag type = %d, Tag length = %d, offset = %d\n");
  result = (unsigned int)v13;
  this->TagStack[this->TagStackEntryCount++] = v12 + this->Pos + this->FilePos - this->DataSize;
  return result;
}

__int64 __fastcall Scaleform::GFx::Stream::OpenTag(Scaleform::GFx::Stream *this)
{
  signed int v2; // eax
  __int64 Pos; // r8
  unsigned __int8 *pBuffer; // rdx
  int v5; // edi
  int v6; // ecx
  unsigned int v7; // esi
  int v8; // edi
  unsigned int v9; // esi
  int v10; // eax
  unsigned __int8 *v11; // r9
  unsigned int v12; // edx
  __int64 result; // rax

  v2 = this->DataSize - this->Pos;
  this->UnusedBits = 0;
  if ( v2 < 2 )
    Scaleform::GFx::Stream::PopulateBuffer(this, 2);
  Pos = this->Pos;
  pBuffer = this->pBuffer;
  v5 = pBuffer[(unsigned int)(Pos + 1)];
  v6 = pBuffer[Pos];
  this->Pos = Pos + 2;
  v7 = v6 | (v5 << 8);
  v8 = v6 & 0x3F;
  v9 = v7 >> 6;
  if ( v8 == 63 )
  {
    v10 = this->DataSize - (Pos + 2);
    this->UnusedBits = 0;
    if ( v10 < 4 )
      Scaleform::GFx::Stream::PopulateBuffer(this, 4);
    v11 = this->pBuffer;
    v12 = this->Pos;
    v8 = v11[v12] | ((((v11[v12 + 2] | (v11[v12 + 3] << 8)) << 8) | v11[v12 + 1]) << 8);
    this->Pos = v12 + 4;
  }
  if ( (this->ParseFlags & 1) != 0 )
    Scaleform::GFx::LogBase<Scaleform::GFx::Stream>::LogParseShape(
      (Scaleform::GFx::LogBase<Scaleform::GFx::LoadProcess> *)this,
      "---------------Tag type = %d, Tag length = %d\n");
  result = v9;
  this->TagStack[this->TagStackEntryCount++] = v8 + this->Pos + this->FilePos - this->DataSize;
  return result;
}

bool __fastcall Scaleform::GFx::Stream::PopulateBuffer1(Scaleform::GFx::Stream *this)
{
  return Scaleform::GFx::Stream::PopulateBuffer(this, 1);
}

bool __fastcall Scaleform::GFx::Stream::PopulateBuffer(Scaleform::GFx::Stream *this, int size)
{
  Scaleform::File *pObject; // rcx
  __int64 Pos; // rdx
  unsigned int DataSize; // eax
  Scaleform::File *v7; // rcx
  __int64 v8; // rdx
  int v9; // ebx
  int v10; // eax
  unsigned int v11; // edx
  int v12; // ecx
  bool result; // al
  unsigned int BufferSize; // eax

  if ( !this->DataSize )
  {
    pObject = this->pInput.pObject;
    if ( pObject )
    {
      this->FilePos = pObject->Tell(pObject);
      this->ResyncFile = 0;
    }
  }
  Pos = this->Pos;
  DataSize = this->DataSize;
  if ( (unsigned int)Pos >= DataSize )
  {
    *(_QWORD *)&this->Pos = 0i64;
  }
  else
  {
    memmove(this->pBuffer, &this->pBuffer[Pos], DataSize - (unsigned int)Pos);
    this->DataSize -= this->Pos;
    this->Pos = 0;
  }
  v7 = this->pInput.pObject;
  if ( v7 )
  {
    v8 = this->DataSize;
    v9 = this->BufferSize - v8;
    v10 = v7->Read(v7, &this->pBuffer[v8], v9);
    if ( v10 >= v9 )
    {
      this->DataSize += v10;
      this->FilePos += v10;
      return 1;
    }
    else
    {
      if ( v10 > 0 )
      {
        this->DataSize += v10;
        this->FilePos += v10;
      }
      memset(&this->pBuffer[this->DataSize], 0, this->BufferSize - this->DataSize);
      v11 = this->Pos;
      v12 = this->DataSize - v11;
      result = size <= v12;
      if ( v12 < size )
        this->DataSize = v11 + size;
    }
  }
  else
  {
    this->BufferSize = 512;
    this->pBuffer = this->BuiltinBuffer;
    memset(this->BuiltinBuffer, 0, sizeof(this->BuiltinBuffer));
    BufferSize = this->BufferSize;
    this->FilePos += BufferSize;
    this->DataSize = BufferSize;
    result = 0;
    this->Pos = 0;
  }
  return result;
}

void __fastcall Scaleform::GFx::StreamContext::ReadCxformRgb(
        Scaleform::GFx::StreamContext *this,
        Scaleform::Render::Cxform *pcxform)
{
  unsigned __int64 CurByteIndex; // r8
  const unsigned __int8 *pData; // rax
  unsigned __int8 v6; // r12
  int v7; // er12
  unsigned __int8 v8; // bl
  unsigned int UInt; // eax
  unsigned int v10; // esi
  int v11; // eax
  int v12; // ebx
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // er15
  int v17; // eax
  int v18; // eax

  if ( this->CurBitIndex )
    ++this->CurByteIndex;
  CurByteIndex = this->CurByteIndex;
  pData = this->pData;
  this->CurBitIndex = 0;
  v6 = pData[CurByteIndex];
  this->CurBitIndex = 1;
  v7 = v6 & 0x80;
  v8 = pData[CurByteIndex];
  this->CurBitIndex = 2;
  UInt = Scaleform::GFx::StreamContext::ReadUInt(this, 4u);
  v10 = UInt;
  if ( (v8 & 0x40) != 0 )
  {
    v11 = Scaleform::GFx::StreamContext::ReadUInt(this, UInt);
    v12 = 1 << (v10 - 1);
    if ( (v12 & v11) != 0 )
      v11 |= -1 << v10;
    pcxform->M[0][0] = (float)v11 * 0.00390625;
    v13 = Scaleform::GFx::StreamContext::ReadUInt(this, v10);
    if ( (v12 & v13) != 0 )
      v13 |= -1 << v10;
    pcxform->M[0][1] = (float)v13 * 0.00390625;
    v14 = Scaleform::GFx::StreamContext::ReadUInt(this, v10);
    if ( (v12 & v14) != 0 )
      v14 |= -1 << v10;
    pcxform->M[0][2] = (float)v14 * 0.00390625;
  }
  else
  {
    pcxform->M[0][0] = 1.0;
    pcxform->M[0][1] = 1.0;
    pcxform->M[0][2] = 1.0;
  }
  pcxform->M[0][3] = 1.0;
  if ( v7 )
  {
    v15 = Scaleform::GFx::StreamContext::ReadUInt(this, v10);
    v16 = 1 << (v10 - 1);
    if ( (v16 & v15) != 0 )
      v15 |= -1 << v10;
    pcxform->M[1][0] = (float)v15;
    v17 = Scaleform::GFx::StreamContext::ReadUInt(this, v10);
    if ( (v16 & v17) != 0 )
      v17 |= -1 << v10;
    pcxform->M[1][1] = (float)v17;
    v18 = Scaleform::GFx::StreamContext::ReadUInt(this, v10);
    if ( (v16 & v18) != 0 )
      v18 |= -1 << v10;
    pcxform->M[1][3] = 1.0;
    pcxform->M[1][2] = (float)v18;
  }
  else
  {
    *(_QWORD *)&pcxform->M[1][0] = 0i64;
    *(_QWORD *)&pcxform->M[1][2] = 0i64;
  }
  Scaleform::Render::Cxform::Normalize(pcxform);
}

void __fastcall Scaleform::GFx::Stream::ReadCxformRgba(
        Scaleform::GFx::Stream *this,
        Scaleform::Render::Cxform *pcxform)
{
  unsigned int UInt1; // er12
  unsigned int v5; // ebx
  unsigned int UInt; // eax
  unsigned int v7; // esi
  int v8; // eax
  int v9; // ebx
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // er15
  int v15; // eax
  int v16; // eax
  int v17; // eax

  this->UnusedBits = 0;
  UInt1 = Scaleform::GFx::Stream::ReadUInt1(this);
  v5 = Scaleform::GFx::Stream::ReadUInt1(this);
  UInt = Scaleform::GFx::Stream::ReadUInt(this, 4u);
  v7 = UInt;
  if ( v5 )
  {
    v8 = Scaleform::GFx::Stream::ReadUInt(this, UInt);
    v9 = 1 << (v7 - 1);
    if ( (v9 & v8) != 0 )
      v8 |= -1 << v7;
    pcxform->M[0][0] = (float)v8 * 0.00390625;
    v10 = Scaleform::GFx::Stream::ReadUInt(this, v7);
    if ( (v9 & v10) != 0 )
      v10 |= -1 << v7;
    pcxform->M[0][1] = (float)v10 * 0.00390625;
    v11 = Scaleform::GFx::Stream::ReadUInt(this, v7);
    if ( (v9 & v11) != 0 )
      v11 |= -1 << v7;
    pcxform->M[0][2] = (float)v11 * 0.00390625;
    v12 = Scaleform::GFx::Stream::ReadUInt(this, v7);
    if ( (v9 & v12) != 0 )
      v12 |= -1 << v7;
    pcxform->M[0][3] = (float)v12 * 0.00390625;
  }
  else
  {
    pcxform->M[0][0] = 1.0;
    pcxform->M[0][1] = 1.0;
    pcxform->M[0][2] = 1.0;
    pcxform->M[0][3] = 1.0;
  }
  if ( UInt1 )
  {
    v13 = Scaleform::GFx::Stream::ReadUInt(this, v7);
    v14 = 1 << (v7 - 1);
    if ( (v14 & v13) != 0 )
      v13 |= -1 << v7;
    pcxform->M[1][0] = (float)v13;
    v15 = Scaleform::GFx::Stream::ReadUInt(this, v7);
    if ( (v14 & v15) != 0 )
      v15 |= -1 << v7;
    pcxform->M[1][1] = (float)v15;
    v16 = Scaleform::GFx::Stream::ReadUInt(this, v7);
    if ( (v14 & v16) != 0 )
      v16 |= -1 << v7;
    pcxform->M[1][2] = (float)v16;
    v17 = Scaleform::GFx::Stream::ReadUInt(this, v7);
    if ( (v14 & v17) != 0 )
      v17 |= -1 << v7;
    pcxform->M[1][3] = (float)v17;
  }
  else
  {
    *(_QWORD *)&pcxform->M[1][0] = 0i64;
    *(_QWORD *)&pcxform->M[1][2] = 0i64;
  }
  Scaleform::Render::Cxform::Normalize(pcxform);
}

void __fastcall Scaleform::GFx::StreamContext::ReadCxformRgba(
        Scaleform::GFx::StreamContext *this,
        Scaleform::Render::Cxform *pcxform)
{
  unsigned __int64 CurByteIndex; // r8
  const unsigned __int8 *pData; // rax
  unsigned __int8 v6; // r12
  int v7; // er12
  unsigned __int8 v8; // bl
  unsigned int UInt; // eax
  unsigned int v10; // esi
  int v11; // eax
  int v12; // ebx
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // er15
  int v18; // eax
  int v19; // eax
  int v20; // eax

  if ( this->CurBitIndex )
    ++this->CurByteIndex;
  CurByteIndex = this->CurByteIndex;
  pData = this->pData;
  this->CurBitIndex = 0;
  v6 = pData[CurByteIndex];
  this->CurBitIndex = 1;
  v7 = v6 & 0x80;
  v8 = pData[CurByteIndex];
  this->CurBitIndex = 2;
  UInt = Scaleform::GFx::StreamContext::ReadUInt(this, 4u);
  v10 = UInt;
  if ( (v8 & 0x40) != 0 )
  {
    v11 = Scaleform::GFx::StreamContext::ReadUInt(this, UInt);
    v12 = 1 << (v10 - 1);
    if ( (v12 & v11) != 0 )
      v11 |= -1 << v10;
    pcxform->M[0][0] = (float)v11 * 0.00390625;
    v13 = Scaleform::GFx::StreamContext::ReadUInt(this, v10);
    if ( (v12 & v13) != 0 )
      v13 |= -1 << v10;
    pcxform->M[0][1] = (float)v13 * 0.00390625;
    v14 = Scaleform::GFx::StreamContext::ReadUInt(this, v10);
    if ( (v12 & v14) != 0 )
      v14 |= -1 << v10;
    pcxform->M[0][2] = (float)v14 * 0.00390625;
    v15 = Scaleform::GFx::StreamContext::ReadUInt(this, v10);
    if ( (v12 & v15) != 0 )
      v15 |= -1 << v10;
    pcxform->M[0][3] = (float)v15 * 0.00390625;
  }
  else
  {
    pcxform->M[0][0] = 1.0;
    pcxform->M[0][1] = 1.0;
    pcxform->M[0][2] = 1.0;
    pcxform->M[0][3] = 1.0;
  }
  if ( v7 )
  {
    v16 = Scaleform::GFx::StreamContext::ReadUInt(this, v10);
    v17 = 1 << (v10 - 1);
    if ( (v17 & v16) != 0 )
      v16 |= -1 << v10;
    pcxform->M[1][0] = (float)v16;
    v18 = Scaleform::GFx::StreamContext::ReadUInt(this, v10);
    if ( (v17 & v18) != 0 )
      v18 |= -1 << v10;
    pcxform->M[1][1] = (float)v18;
    v19 = Scaleform::GFx::StreamContext::ReadUInt(this, v10);
    if ( (v17 & v19) != 0 )
      v19 |= -1 << v10;
    pcxform->M[1][2] = (float)v19;
    v20 = Scaleform::GFx::StreamContext::ReadUInt(this, v10);
    if ( (v17 & v20) != 0 )
      v20 |= -1 << v10;
    pcxform->M[1][3] = (float)v20;
  }
  else
  {
    *(_QWORD *)&pcxform->M[1][0] = 0i64;
    *(_QWORD *)&pcxform->M[1][2] = 0i64;
  }
  Scaleform::Render::Cxform::Normalize(pcxform);
}

void __fastcall Scaleform::GFx::Stream::ReadMatrix(
        Scaleform::GFx::Stream *this,
        Scaleform::Render::Matrix2x4<float> *pm)
{
  unsigned int UInt; // esi
  int v5; // eax
  int v6; // er15
  int v7; // eax
  unsigned int v8; // esi
  int v9; // eax
  int v10; // er15
  int v11; // eax
  signed int v12; // eax
  unsigned int v13; // esi
  int v14; // eax
  int v15; // er14
  int v16; // eax

  this->UnusedBits = 0;
  *(_QWORD *)&pm->M[0][2] = 0i64;
  pm->M[1][0] = 0.0;
  pm->M[1][3] = 0.0;
  *(_QWORD *)&pm->M[0][0] = 1065353216i64;
  *(_QWORD *)&pm->M[1][1] = 1065353216i64;
  if ( Scaleform::GFx::Stream::ReadUInt1(this) )
  {
    UInt = Scaleform::GFx::Stream::ReadUInt(this, 5u);
    v5 = Scaleform::GFx::Stream::ReadUInt(this, UInt);
    v6 = 1 << (UInt - 1);
    if ( (v6 & v5) != 0 )
      v5 |= -1 << UInt;
    pm->M[0][0] = (float)v5 * 0.000015258789;
    v7 = Scaleform::GFx::Stream::ReadUInt(this, UInt);
    if ( (v6 & v7) != 0 )
      v7 |= -1 << UInt;
    pm->M[1][1] = (float)v7 * 0.000015258789;
  }
  if ( Scaleform::GFx::Stream::ReadUInt1(this) )
  {
    v8 = Scaleform::GFx::Stream::ReadUInt(this, 5u);
    v9 = Scaleform::GFx::Stream::ReadUInt(this, v8);
    v10 = 1 << (v8 - 1);
    if ( (v10 & v9) != 0 )
      v9 |= -1 << v8;
    pm->M[1][0] = (float)v9 * 0.000015258789;
    v11 = Scaleform::GFx::Stream::ReadUInt(this, v8);
    if ( (v10 & v11) != 0 )
      v11 |= -1 << v8;
    pm->M[0][1] = (float)v11 * 0.000015258789;
  }
  v12 = Scaleform::GFx::Stream::ReadUInt(this, 5u);
  v13 = v12;
  if ( v12 > 0 )
  {
    v14 = Scaleform::GFx::Stream::ReadUInt(this, v12);
    v15 = 1 << (v13 - 1);
    if ( (v15 & v14) != 0 )
      v14 |= -1 << v13;
    pm->M[0][3] = (float)v14;
    v16 = Scaleform::GFx::Stream::ReadUInt(this, v13);
    if ( (v15 & v16) != 0 )
      v16 |= -1 << v13;
    pm->M[1][3] = (float)v16;
  }
}

void __fastcall Scaleform::GFx::StreamContext::ReadMatrix(
        Scaleform::GFx::StreamContext *this,
        Scaleform::Render::Matrix2x4<float> *pm)
{
  unsigned int CurBitIndex; // edx
  unsigned __int64 CurByteIndex; // r9
  int v6; // er8
  unsigned int UInt; // ebp
  int v8; // eax
  int v9; // er12
  int v10; // eax
  unsigned int v11; // edx
  unsigned __int64 v12; // r9
  int v13; // er8
  unsigned int v14; // ebp
  int v15; // eax
  int v16; // er15
  int v17; // eax
  signed int v18; // eax
  unsigned int v19; // ebp
  int v20; // eax
  int v21; // er14
  int v22; // eax

  if ( this->CurBitIndex )
    ++this->CurByteIndex;
  this->CurBitIndex = 0;
  *(_OWORD *)&pm->M[0][0] = 0x3F800000ui64;
  pm->M[1][0] = 0.0;
  *(_QWORD *)&pm->M[1][1] = 1065353216i64;
  pm->M[1][3] = 0.0;
  CurBitIndex = this->CurBitIndex;
  CurByteIndex = this->CurByteIndex;
  v6 = (unsigned __int8)this->pData[CurByteIndex] & (1 << (7 - CurBitIndex));
  this->CurBitIndex = CurBitIndex + 1;
  if ( CurBitIndex + 1 >= 8 )
  {
    this->CurBitIndex = 0;
    this->CurByteIndex = CurByteIndex + 1;
  }
  if ( v6 )
  {
    UInt = Scaleform::GFx::StreamContext::ReadUInt(this, 5u);
    v8 = Scaleform::GFx::StreamContext::ReadUInt(this, UInt);
    v9 = 1 << (UInt - 1);
    if ( (v9 & v8) != 0 )
      v8 |= -1 << UInt;
    pm->M[0][0] = (float)v8 * 0.000015258789;
    v10 = Scaleform::GFx::StreamContext::ReadUInt(this, UInt);
    if ( (v9 & v10) != 0 )
      v10 |= -1 << UInt;
    pm->M[1][1] = (float)v10 * 0.000015258789;
  }
  v11 = this->CurBitIndex;
  v12 = this->CurByteIndex;
  v13 = (unsigned __int8)this->pData[v12] & (1 << (7 - v11));
  this->CurBitIndex = v11 + 1;
  if ( v11 + 1 >= 8 )
  {
    this->CurBitIndex = 0;
    this->CurByteIndex = v12 + 1;
  }
  if ( v13 )
  {
    v14 = Scaleform::GFx::StreamContext::ReadUInt(this, 5u);
    v15 = Scaleform::GFx::StreamContext::ReadUInt(this, v14);
    v16 = 1 << (v14 - 1);
    if ( (v16 & v15) != 0 )
      v15 |= -1 << v14;
    pm->M[1][0] = (float)v15 * 0.000015258789;
    v17 = Scaleform::GFx::StreamContext::ReadUInt(this, v14);
    if ( (v16 & v17) != 0 )
      v17 |= -1 << v14;
    pm->M[0][1] = (float)v17 * 0.000015258789;
  }
  v18 = Scaleform::GFx::StreamContext::ReadUInt(this, 5u);
  v19 = v18;
  if ( v18 > 0 )
  {
    v20 = Scaleform::GFx::StreamContext::ReadUInt(this, v18);
    v21 = 1 << (v19 - 1);
    if ( (v21 & v20) != 0 )
      v20 |= -1 << v19;
    pm->M[0][3] = (float)v20;
    v22 = Scaleform::GFx::StreamContext::ReadUInt(this, v19);
    if ( (v21 & v22) != 0 )
      v22 |= -1 << v19;
    pm->M[1][3] = (float)v22;
  }
}

void __fastcall Scaleform::GFx::Stream::ReadRect(Scaleform::GFx::Stream *this, Scaleform::Render::Rect<float> *pr)
{
  unsigned int UInt; // ebx
  int v5; // eax
  int v6; // er14
  int v7; // eax
  int v8; // eax
  int v9; // eax

  this->UnusedBits = 0;
  UInt = Scaleform::GFx::Stream::ReadUInt(this, 5u);
  v5 = Scaleform::GFx::Stream::ReadUInt(this, UInt);
  v6 = 1 << (UInt - 1);
  if ( (v6 & v5) != 0 )
    v5 |= -1 << UInt;
  pr->x1 = (float)v5;
  v7 = Scaleform::GFx::Stream::ReadUInt(this, UInt);
  if ( (v6 & v7) != 0 )
    v7 |= -1 << UInt;
  pr->x2 = (float)v7;
  v8 = Scaleform::GFx::Stream::ReadUInt(this, UInt);
  if ( (v6 & v8) != 0 )
    v8 |= -1 << UInt;
  pr->y1 = (float)v8;
  v9 = Scaleform::GFx::Stream::ReadUInt(this, UInt);
  if ( (v6 & v9) != 0 )
    v9 |= -1 << UInt;
  pr->y2 = (float)v9;
}

void __fastcall Scaleform::GFx::Stream::ReadRgb(Scaleform::GFx::Stream *this, Scaleform::Render::Color *pc)
{
  signed int v3; // eax
  __int64 Pos; // rdx
  unsigned __int8 v6; // cl
  signed int v7; // eax
  __int64 v8; // r8
  unsigned __int8 v9; // cl
  signed int v10; // eax
  __int64 v11; // rdx
  unsigned __int8 v12; // cl

  v3 = this->DataSize - this->Pos;
  this->UnusedBits = 0;
  if ( v3 < 1 )
    Scaleform::GFx::Stream::PopulateBuffer(this, 1);
  Pos = this->Pos;
  v6 = this->pBuffer[Pos];
  this->Pos = Pos + 1;
  pc->Channels.Red = v6;
  v7 = this->DataSize - this->Pos;
  this->UnusedBits = 0;
  if ( v7 < 1 )
    Scaleform::GFx::Stream::PopulateBuffer(this, 1);
  v8 = this->Pos;
  v9 = this->pBuffer[v8];
  this->Pos = v8 + 1;
  pc->Channels.Green = v9;
  v10 = this->DataSize - this->Pos;
  this->UnusedBits = 0;
  if ( v10 < 1 )
    Scaleform::GFx::Stream::PopulateBuffer(this, 1);
  v11 = this->Pos;
  v12 = this->pBuffer[v11];
  this->Pos = v11 + 1;
  pc->Channels.Blue = v12;
  pc->Channels.Alpha = -1;
}

void __fastcall Scaleform::GFx::Stream::ReadRgba(Scaleform::GFx::Stream *this, Scaleform::Render::Color *pc)
{
  signed int v4; // eax
  __int64 Pos; // rdx
  unsigned __int8 v6; // cl

  Scaleform::GFx::Stream::ReadRgb(this, pc);
  v4 = this->DataSize - this->Pos;
  this->UnusedBits = 0;
  if ( v4 < 1 )
    Scaleform::GFx::Stream::PopulateBuffer(this, 1);
  Pos = this->Pos;
  v6 = this->pBuffer[Pos];
  this->Pos = Pos + 1;
  pc->Channels.Alpha = v6;
}

int __fastcall Scaleform::GFx::Stream::ReadSInt(Scaleform::GFx::Stream *this, unsigned int bitcount)
{
  char v2; // bl
  int result; // eax

  v2 = bitcount;
  result = Scaleform::GFx::Stream::ReadUInt(this, bitcount);
  if ( _bittest(&result, (unsigned __int8)(v2 - 1)) )
    return (-1 << v2) | result;
  return result;
}

__int64 __fastcall Scaleform::GFx::Stream::ReadString(Scaleform::GFx::Stream *this, Scaleform::String *pstr)
{
  char *Data; // r14
  unsigned __int64 v3; // rbp
  unsigned __int64 Capacity; // rsi
  signed int v7; // eax
  __int64 Pos; // rcx
  unsigned __int64 v9; // rbx
  unsigned __int8 v10; // r15
  unsigned __int64 v11; // r8
  unsigned __int8 *v12; // rax
  unsigned __int64 v13; // r8
  Scaleform::ArrayDataBase<char,Scaleform::AllocatorGH<char,2>,Scaleform::ArrayDefaultPolicy> pheapAddr; // [rsp+20h] [rbp-38h] BYREF

  Data = 0i64;
  this->UnusedBits = 0;
  memset(&pheapAddr, 0, sizeof(pheapAddr));
  v3 = 0i64;
  Capacity = 0i64;
  while ( 1 )
  {
    v7 = this->DataSize - this->Pos;
    this->UnusedBits = 0;
    if ( v7 < 1 )
      Scaleform::GFx::Stream::PopulateBuffer(this, 1);
    Pos = this->Pos;
    v9 = v3 + 1;
    v10 = this->pBuffer[Pos];
    this->Pos = Pos + 1;
    if ( !v10 )
      break;
    if ( v9 >= v3 )
    {
      if ( v9 > Capacity )
      {
        v11 = v9 + (v9 >> 2);
        goto LABEL_10;
      }
    }
    else if ( v9 < Capacity >> 1 )
    {
      v11 = v3 + 1;
LABEL_10:
      Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorGH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        &pheapAddr,
        &pheapAddr,
        v11);
      Data = pheapAddr.Data;
      Capacity = pheapAddr.Policy.Capacity;
    }
    pheapAddr.Size = ++v3;
    v12 = (unsigned __int8 *)&Data[v9 - 1];
    if ( v12 )
      *v12 = v10;
  }
  if ( v9 >= v3 )
  {
    if ( v9 > Capacity )
    {
      v13 = v9 + (v9 >> 2);
LABEL_18:
      Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorGH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        &pheapAddr,
        &pheapAddr,
        v13);
      Data = pheapAddr.Data;
    }
  }
  else if ( v9 < Capacity >> 1 )
  {
    v13 = v3 + 1;
    goto LABEL_18;
  }
  if ( &Data[v3] )
    Data[v3] = 0;
  if ( v3 == -1i64 )
  {
    Scaleform::String::Clear(pstr);
  }
  else
  {
    Scaleform::String::AssignString(pstr, Data, v3);
    LOBYTE(v9) = 1;
  }
  if ( Data )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, Data);
  return (unsigned __int8)v9;
}

char *__fastcall Scaleform::GFx::Stream::ReadStringWithLength(
        Scaleform::GFx::Stream *this,
        Scaleform::MemoryHeap *pheap)
{
  signed int v3; // eax
  __int64 Pos; // rdx
  unsigned int v6; // ecx
  __int64 v8; // rbp
  _BYTE *v9; // rsi
  __int64 i; // rdi
  signed int v11; // ecx
  __int64 v12; // rdx
  unsigned __int8 v13; // cl

  v3 = this->DataSize - this->Pos;
  this->UnusedBits = 0;
  if ( v3 < 1 )
    Scaleform::GFx::Stream::PopulateBuffer(this, 1);
  Pos = this->Pos;
  v6 = this->pBuffer[Pos];
  this->Pos = Pos + 1;
  if ( !(_BYTE)v6 )
    return 0i64;
  v8 = v6;
  v9 = pheap->Alloc(pheap, v6 + 1, 0i64);
  for ( i = 0i64; i < v8; ++i )
  {
    v11 = this->DataSize - this->Pos;
    this->UnusedBits = 0;
    if ( v11 < 1 )
      Scaleform::GFx::Stream::PopulateBuffer(this, 1);
    v12 = this->Pos;
    v13 = this->pBuffer[v12];
    this->Pos = v12 + 1;
    v9[i] = v13;
  }
  v9[(int)v8] = 0;
  return v9;
}

char __fastcall Scaleform::GFx::Stream::ReadStringWithLength(Scaleform::GFx::Stream *this, Scaleform::String *pstr)
{
  signed int v3; // eax
  __int64 Pos; // rdx
  unsigned int v6; // ecx
  Scaleform::String::InitStruct src; // [rsp+20h] [rbp-18h] BYREF
  Scaleform::GFx::Stream *v9; // [rsp+28h] [rbp-10h]

  v3 = this->DataSize - this->Pos;
  this->UnusedBits = 0;
  if ( v3 < 1 )
    Scaleform::GFx::Stream::PopulateBuffer(this, 1);
  Pos = this->Pos;
  v6 = this->pBuffer[Pos];
  this->Pos = Pos + 1;
  if ( (_BYTE)v6 )
  {
    v9 = this;
    src.__vftable = (Scaleform::String::InitStruct_vtbl *)`Scaleform::GFx::Stream::ReadStringWithLength'::`2'::StringReader::`vftable';
    Scaleform::String::AssignString(pstr, &src, v6);
    return 1;
  }
  else
  {
    Scaleform::String::Clear(pstr);
    return 0;
  }
}

__int64 __fastcall Scaleform::GFx::Stream::ReadToBuffer(
        Scaleform::GFx::Stream *this,
        unsigned __int8 *pdestBuf,
        unsigned int sz)
{
  unsigned int v3; // esi
  unsigned int Pos; // eax
  unsigned int DataSize; // ecx
  signed int v9; // eax

  v3 = 0;
  if ( !this->DataSize )
  {
    this->FilePos = this->pInput.pObject->Tell(this->pInput.pObject);
    this->ResyncFile = 0;
  }
  Pos = this->Pos;
  DataSize = this->DataSize;
  if ( Pos < DataSize )
  {
    v3 = DataSize - Pos;
    if ( sz < DataSize - Pos )
      v3 = sz;
    memmove(pdestBuf, &this->pBuffer[Pos], v3);
    this->Pos += v3;
    sz -= v3;
    pdestBuf += v3;
  }
  if ( this->Pos >= this->DataSize )
    *(_QWORD *)&this->Pos = 0i64;
  if ( sz )
  {
    v9 = this->pInput.pObject->Read(this->pInput.pObject, pdestBuf, sz);
    this->FilePos += v9;
    v3 += v9;
    if ( v9 < (int)sz )
      memset(&pdestBuf[v9], 0, sz - v9);
  }
  return v3;
}

__int64 __fastcall Scaleform::GFx::Stream::ReadUInt1(Scaleform::GFx::Stream *this)
{
  unsigned __int8 UnusedBits; // al
  __int64 Pos; // rcx
  unsigned int v4; // edx
  __int64 result; // rax
  unsigned __int8 CurrentByte; // r8
  char v7; // dl

  UnusedBits = this->UnusedBits;
  if ( UnusedBits )
  {
    CurrentByte = this->CurrentByte;
    v7 = UnusedBits - 1;
    this->UnusedBits = UnusedBits - 1;
    result = CurrentByte >> (UnusedBits - 1);
    this->CurrentByte = CurrentByte & ((1 << v7) - 1);
  }
  else
  {
    this->UnusedBits = 0;
    if ( (signed int)(this->DataSize - this->Pos) < 1 )
      Scaleform::GFx::Stream::PopulateBuffer(this, 1);
    Pos = this->Pos;
    v4 = this->pBuffer[Pos];
    this->Pos = Pos + 1;
    result = v4 >> 7;
    this->UnusedBits = 7;
    this->CurrentByte = v4 & 0x7F;
  }
  return result;
}

__int64 __fastcall Scaleform::GFx::Stream::ReadUInt(Scaleform::GFx::Stream *this, unsigned int bitcount)
{
  unsigned int v2; // esi
  signed int v3; // edi
  unsigned __int8 UnusedBits; // al
  int v6; // ecx
  int v7; // eax
  unsigned int v8; // eax
  unsigned int CurrentByte; // edx
  char v10; // cl
  signed int v11; // eax
  __int64 Pos; // r8
  unsigned __int8 v13; // dl

  v2 = 0;
  v3 = bitcount;
  while ( v3 > 0 )
  {
    UnusedBits = this->UnusedBits;
    if ( UnusedBits )
    {
      v6 = UnusedBits;
      if ( v3 < UnusedBits )
      {
        CurrentByte = this->CurrentByte;
        v10 = UnusedBits - v3;
        this->UnusedBits = UnusedBits - v3;
        v3 = 0;
        this->CurrentByte = CurrentByte & ((1 << v10) - 1);
        v8 = CurrentByte >> v10;
      }
      else
      {
        v7 = this->CurrentByte;
        v3 -= v6;
        this->UnusedBits = 0;
        v8 = v7 << v3;
      }
      v2 |= v8;
    }
    else
    {
      v11 = this->DataSize - this->Pos;
      this->UnusedBits = 0;
      if ( v11 < 1 )
        Scaleform::GFx::Stream::PopulateBuffer(this, 1);
      Pos = this->Pos;
      v13 = this->pBuffer[Pos];
      this->Pos = Pos + 1;
      this->CurrentByte = v13;
      this->UnusedBits = 8;
    }
  }
  return v2;
}

__int64 __fastcall Scaleform::GFx::StreamContext::ReadUInt(Scaleform::GFx::StreamContext *this, unsigned int bitcount)
{
  unsigned int CurBitIndex; // er8
  unsigned int v4; // er11
  int v5; // ebx
  unsigned int v6; // er8
  __int64 result; // rax
  unsigned __int64 CurByteIndex; // rdx
  const unsigned __int8 *pData; // rcx
  const unsigned __int8 *v10; // rcx
  int v11; // eax
  int v12; // er8
  int v13; // ecx
  unsigned __int64 v14; // rax
  const unsigned __int8 *v15; // r8
  int v16; // er9
  unsigned int v17; // eax
  int v18; // eax
  int v19; // er8
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rcx
  unsigned int v22; // ecx

  CurBitIndex = this->CurBitIndex;
  v4 = CurBitIndex + bitcount;
  v5 = (1 << (8 - CurBitIndex)) - 1;
  if ( !bytesInBits[bitcount] )
    return 0i64;
  if ( bytesInBits[bitcount] != 1 )
  {
    if ( bytesInBits[bitcount] != 2 )
    {
      if ( bytesInBits[bitcount] == 3 )
      {
        CurByteIndex = this->CurByteIndex;
        pData = this->pData;
        if ( v4 <= 0x18 )
        {
          v18 = pData[CurByteIndex + 2];
          v19 = (pData[CurByteIndex + 1] | ((unsigned __int8)(v5 & pData[CurByteIndex]) << 8)) << 8;
          v13 = 24;
          v6 = v18 | v19;
          v14 = CurByteIndex + 2;
          goto LABEL_19;
        }
      }
      else
      {
        if ( bytesInBits[bitcount] != 4 )
        {
          v6 = 0;
LABEL_7:
          ++this->CurByteIndex;
          result = v6;
          this->CurBitIndex = 0;
          return result;
        }
        CurByteIndex = this->CurByteIndex;
        if ( v4 > 0x20 )
        {
          v15 = this->pData;
          v16 = (unsigned __int8)this->pData[CurByteIndex + 3] | (((unsigned __int8)this->pData[CurByteIndex + 2] | (((unsigned __int8)this->pData[CurByteIndex + 1] | ((unsigned __int8)(v5 & this->pData[CurByteIndex]) << 8)) << 8)) << 8);
          this->CurByteIndex = CurByteIndex + 4;
          v17 = v15[CurByteIndex + 4];
          this->CurBitIndex = v4 - 32;
          return (v16 << (v4 - 32)) | (v17 >> (8 - (v4 - 32)));
        }
        pData = this->pData;
      }
      v10 = &pData[CurByteIndex];
      v11 = v10[3];
      v12 = (v10[2] | ((v10[1] | ((unsigned __int8)(v5 & *v10) << 8)) << 8)) << 8;
      v13 = 32;
      v6 = v11 | v12;
      v14 = CurByteIndex + 3;
LABEL_19:
      this->CurByteIndex = v14;
      goto LABEL_20;
    }
    if ( v4 > 0x10 )
    {
      v20 = this->CurByteIndex;
      v13 = 24;
      v6 = (unsigned __int8)this->pData[v20 + 2] | (((unsigned __int8)this->pData[v20 + 1] | ((unsigned __int8)(v5 & this->pData[v20]) << 8)) << 8);
      v14 = v20 + 2;
      goto LABEL_19;
    }
LABEL_18:
    v21 = this->CurByteIndex;
    v6 = (unsigned __int8)this->pData[v21 + 1] | ((unsigned __int8)(v5 & this->pData[v21]) << 8);
    v14 = v21 + 1;
    v13 = 16;
    goto LABEL_19;
  }
  if ( v4 > 8 )
    goto LABEL_18;
  v13 = 8;
  v6 = (unsigned __int8)(v5 & this->pData[this->CurByteIndex]);
LABEL_20:
  v22 = v13 - v4;
  if ( !v22 )
    goto LABEL_7;
  result = v6 >> v22;
  this->CurBitIndex = 8 - v22;
  return result;
}

__int64 __fastcall Scaleform::GFx::Stream::ReadVU32(Scaleform::GFx::Stream *this)
{
  unsigned int v1; // edi
  unsigned int v3; // esi
  signed int v4; // eax
  __int64 Pos; // rcx
  char v6; // r8
  int v7; // edx

  v1 = 0;
  v3 = 0;
  do
  {
    v4 = this->DataSize - this->Pos;
    this->UnusedBits = 0;
    if ( v4 < 1 )
      Scaleform::GFx::Stream::PopulateBuffer(this, 1);
    Pos = this->Pos;
    v6 = this->pBuffer[Pos];
    this->Pos = Pos + 1;
    v7 = (v6 & 0x7F) << v3;
    v3 += 7;
    v1 |= v7;
  }
  while ( v3 < 0x20 && v6 < 0 );
  return v1;
}

void __fastcall Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorGH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        Scaleform::ArrayDataBase<char,Scaleform::AllocatorGH<char,2>,Scaleform::ArrayDefaultPolicy> *this,
        const void *pheapAddr,
        unsigned __int64 newCapacity)
{
  char *Data; // rdx
  unsigned __int64 v5; // rdi
  char *v6; // rax
  int v7; // [rsp+30h] [rbp+8h] BYREF

  if ( newCapacity != this->Policy.Capacity )
  {
    Data = this->Data;
    if ( newCapacity )
    {
      v5 = (newCapacity + 3) & 0xFFFFFFFFFFFFFFFCui64;
      if ( Data )
      {
        v6 = (char *)Scaleform::Memory::pGlobalHeap->Realloc(
                       Scaleform::Memory::pGlobalHeap,
                       Data,
                       (newCapacity + 3) & 0xFFFFFFFFFFFFFFFCui64);
        this->Policy.Capacity = v5;
        this->Data = v6;
        return;
      }
      v7 = 2;
      this->Data = (char *)Scaleform::Memory::pGlobalHeap->Alloc(Scaleform::Memory::pGlobalHeap, v5, &v7);
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

void __fastcall Scaleform::GFx::Stream::SetPosition(Scaleform::GFx::Stream *this, int pos)
{
  int FilePos; // ecx
  unsigned int DataSize; // eax

  this->UnusedBits = 0;
  FilePos = this->FilePos;
  DataSize = this->DataSize;
  if ( pos < (int)(FilePos - DataSize) || pos >= FilePos )
  {
    if ( (this->ResyncFile || FilePos - DataSize + this->Pos != pos)
      && this->pInput.pObject->Seek(this->pInput.pObject, pos, 0) >= 0 )
    {
      this->ResyncFile = 0;
      *(_QWORD *)&this->Pos = 0i64;
      this->FilePos = pos;
    }
  }
  else
  {
    this->Pos = pos + DataSize - FilePos;
  }
}

void __fastcall Scaleform::GFx::Stream::ShutDown(Scaleform::GFx::Stream *this)
{
  Scaleform::RefCountVImpl *pObject; // rcx

  Scaleform::String::Clear(&this->FileName);
  pObject = (Scaleform::RefCountVImpl *)this->pInput.pObject;
  if ( pObject )
    Scaleform::RefCountImpl::Release(pObject);
  this->pInput.pObject = 0i64;
  this->pLog = 0i64;
  this->pParseControl = 0i64;
}

void __fastcall Scaleform::GFx::Stream::SyncFileStream(Scaleform::GFx::Stream *this)
{
  unsigned int v2; // eax

  v2 = this->pInput.pObject->Seek(this->pInput.pObject, this->Pos + this->FilePos - this->DataSize, 0);
  if ( v2 != -1 )
  {
    this->FilePos = v2;
    *(_QWORD *)&this->Pos = 0i64;
  }
}

