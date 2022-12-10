#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix3x4.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cxform.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixpool.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"

enum Scaleform::Render::MatrixPoolImpl::<unnamed-enum-Pool_HandlePageSize>
{
	Pool_HandlePageSize = 2032,
	Pool_HandlePageAlign = 2048,
	Pool_HandlePageMask = 2047,
	Pool_DataPageSize = 4096,
	Pool_DataPageAlign = 16,
};
struct Scaleform::Render::MatrixPoolImpl::HandlePageBase :
	Scaleform::ListNode<Scaleform::Render::MatrixPoolImpl::HandlePageBase>
{
	unsigned long UseCount; // 0x10
	Scaleform::Render::MatrixPoolImpl::EntryHandle * pFreeList; // 0x18
	Scaleform::Render::MatrixPoolImpl::EntryHandleTable * pTable; // 0x20
	HandlePageBase();
};
struct Scaleform::Render::MatrixPoolImpl::HandlePage :
	Scaleform::Render::MatrixPoolImpl::HandlePageBase
{
	enum <unnamed-enum-EntryCount>
	{
		EntryCount = 249,
	};
	Scaleform::Render::MatrixPoolImpl::EntryHandle Entries[249]; // 0x28
	void AddEntriesToFreeList();
	HandlePage();
};
struct Scaleform::Render::MatrixPoolImpl::DataPage :
	Scaleform::ListNode<Scaleform::Render::MatrixPoolImpl::DataPage>
{
	Scaleform::Render::MatrixPoolImpl::MatrixPool * pPool; // 0x10
	unsigned short FreeTail; // 0x18
	unsigned short FreeMiddle; // 0x1A
	static unsigned long long GetDataSize();
	unsigned char * GetData();
	Scaleform::Render::MatrixPoolImpl::DataHeader * GetFirstHeader();
	Scaleform::Render::MatrixPoolImpl::DataHeader * GetHeaderTailEnd();
	Scaleform::Render::MatrixPoolImpl::DataHeader * GetHeaderBufferEnd();
	void Init(Scaleform::Render::MatrixPoolImpl::MatrixPool *);
	Scaleform::Render::MatrixPoolImpl::DataHeader * CreateDataHeader(void *, unsigned long long, Scaleform::Render::MatrixPoolImpl::EntryHandle *);
	void CopyData(Scaleform::Render::MatrixPoolImpl::DataHeader *, Scaleform::Render::MatrixPoolImpl::DataHeader *);
	DataPage();
};
void Scaleform::Render::MatrixPoolImpl::EntryHandle::ReleaseHandle(); // 0x140394D50
bool Scaleform::Render::MatrixPoolImpl::EntryHandleTable::allocEntryPage(); // 0x140395340
Scaleform::Render::MatrixPoolImpl::EntryHandle * Scaleform::Render::MatrixPoolImpl::EntryHandleTable::AllocEntry(Scaleform::Render::MatrixPoolImpl::DataHeader * header); // 0x140394B10
void Scaleform::Render::MatrixPoolImpl::DataHeader::Release(); // 0x140394D00
struct Scaleform::Render::MatrixPoolImpl::DefaultMatrixData
{
	Scaleform::Render::MatrixPoolImpl::DataHeader Data; // 0x0
	unsigned char DataBytes[48]; // 0x0
	DefaultMatrixData();
};
void Scaleform::Render::MatrixPoolImpl::HMatrix::SetMatrix2D(const Scaleform::Render::Matrix2x4<float> & m); // 0x140394E90
void Scaleform::Render::MatrixPoolImpl::HMatrix::SetMatrix3D(const Scaleform::Render::Matrix3x4<float> & m); // 0x140394FA0
void Scaleform::Render::MatrixPoolImpl::HMatrix::SetCxform(const Scaleform::Render::Cxform & m); // 0x140394DF0
void Scaleform::Render::MatrixPoolImpl::HMatrix::SetTextureMatrix(const Scaleform::Render::Matrix2x4<float> & m, unsigned long index); // 0x140395060
void Scaleform::Render::MatrixPoolImpl::HMatrix::SetUserData(const void * data, unsigned long long size); // 0x140395160
void Scaleform::Render::MatrixPoolImpl::HMatrix::operator=(const Scaleform::Render::MatrixPoolImpl::HMatrix & other); // 0x140394A10
const Scaleform::Render::Matrix3x4<float> & Scaleform::Render::MatrixPoolImpl::HMatrix::GetMatrix3D(); // 0x140394C70
const Scaleform::Render::Matrix2x4<float> & Scaleform::Render::MatrixPoolImpl::HMatrix::GetTextureMatrix(unsigned long index); // 0x140394CB0
Scaleform::Render::MatrixPoolImpl::MatrixPool::MatrixPool(Scaleform::MemoryHeap * heap); // 0x1403948E0
Scaleform::Render::MatrixPoolImpl::MatrixPool::~MatrixPool(); // 0x140394950
Scaleform::Render::MatrixPoolImpl::EntryHandle * Scaleform::Render::MatrixPoolImpl::MatrixPool::createMatrixHelper(const Scaleform::Render::Matrix2x4<float> & m, const Scaleform::Render::Cxform & cx, unsigned long formatBits); // 0x140395450
Scaleform::Render::MatrixPoolImpl::EntryHandle * Scaleform::Render::MatrixPoolImpl::MatrixPool::createMatrixHelper(const Scaleform::Render::Matrix3x4<float> & m, const Scaleform::Render::Cxform & cx, unsigned long formatBits); // 0x140395600
Scaleform::Render::MatrixPoolImpl::HMatrix Scaleform::Render::MatrixPoolImpl::MatrixPool::CreateMatrix(const Scaleform::Render::Matrix2x4<float> & m, unsigned long formatBits); // 0x140394BE0
Scaleform::Render::MatrixPoolImpl::HMatrix Scaleform::Render::MatrixPoolImpl::MatrixPool::CreateMatrix(const Scaleform::Render::Matrix3x4<float> & m, unsigned long formatBits); // 0x140394C40
Scaleform::Render::MatrixPoolImpl::HMatrix Scaleform::Render::MatrixPoolImpl::MatrixPool::CreateMatrix(const Scaleform::Render::Matrix2x4<float> & m, const Scaleform::Render::Cxform & cx, unsigned long formatBits); // 0x140394BB0
Scaleform::Render::MatrixPoolImpl::HMatrix Scaleform::Render::MatrixPoolImpl::MatrixPool::CreateMatrix(const Scaleform::Render::Matrix3x4<float> & m, const Scaleform::Render::Cxform & cx, unsigned long formatBits); // 0x140394C10
bool Scaleform::Render::MatrixPoolImpl::MatrixPool::allocDataPage(); // 0x1403952B0
bool Scaleform::Render::MatrixPoolImpl::MatrixPool::ensureAllocSpace(unsigned long long size); // 0x140395790
Scaleform::Render::MatrixPoolImpl::DataHeader * Scaleform::Render::MatrixPoolImpl::MatrixPool::allocData(unsigned long long size, Scaleform::Render::MatrixPoolImpl::EntryHandle * handle); // 0x140395210
Scaleform::Render::MatrixPoolImpl::EntryHandle * Scaleform::Render::MatrixPoolImpl::MatrixPool::allocMatrixData(unsigned long formatBits); // 0x1403953C0
bool Scaleform::Render::MatrixPoolImpl::MatrixPool::reallocMatrixData(Scaleform::Render::MatrixPoolImpl::EntryHandle * handle, unsigned long formatBits); // 0x140395840
bool Scaleform::Render::MatrixPoolImpl::MatrixPool::squeezeMemoryRange(Scaleform::Render::MatrixPoolImpl::DataPage * squeezeStart, Scaleform::Render::MatrixPoolImpl::DataPage * squeezeEnd, Scaleform::Render::MatrixPoolImpl::MatrixPool::SqueezeType type); // 0x140395C40
enum Scaleform::Render::MatrixPoolImpl::MatrixPool::squeezeMemoryRange::__l2::<unnamed-enum-SquezePageThreshold>
{
	SquezePageThreshold = 203,
	FreeTailTerminateThreshold = 1016,
};
Scaleform::Render::MatrixPoolImpl::HMatrixConstants::ElementsInfo Scaleform::Render::MatrixPoolImpl::HMatrixConstants::MatrixElementSizeTable[16]; // 0x1409F9C20
Scaleform::Render::MatrixPoolImpl::EntryHandle Scaleform::Render::MatrixPoolImpl::HMatrix::NullHandle; // 0x1409F9C70
Scaleform::Render::MatrixPoolImpl::DefaultMatrixData Scaleform::Render::MatrixPoolImpl::HMatrix_DefaultMatrixData; // 0x1409F9C78
void(*Scaleform::Render::MatrixPoolImpl::HMatrix_DefaultMatrixData$initializer$)(); // 0x140739D58//decompilation failure at 1409F9C20!
//decompilation failure at 1409F9C70!
//decompilation failure at 1409F9C78!
//decompilation failure at 140739D58!
void __fastcall Scaleform::Render::MatrixPoolImpl::MatrixPool::MatrixPool(
        Scaleform::Render::MatrixPoolImpl::MatrixPool *this,
        Scaleform::MemoryHeap *heap)
{
  this->pHeap = heap;
  this->__vftable = (Scaleform::Render::MatrixPoolImpl::MatrixPool_vtbl *)&Scaleform::RefCountImplCore::`vftable';
  this->RefCount = 1;
  this->__vftable = (Scaleform::Render::MatrixPoolImpl::MatrixPool_vtbl *)&Scaleform::Render::MatrixPoolImpl::MatrixPool::`vftable';
  this->AllocatedSpace = 0i64;
  this->DataPageCount = 0i64;
  this->FreedSpace = 0i64;
  this->HandleTable.pHeap = heap;
  this->HandleTable.pPool = this;
  this->HandleTable.FullPages.Root.pPrev = (Scaleform::Render::MatrixPoolImpl::HandlePageBase *)&this->HandleTable.FullPages;
  this->HandleTable.FullPages.Root.pNext = (Scaleform::Render::MatrixPoolImpl::HandlePageBase *)&this->HandleTable.FullPages;
  this->HandleTable.PartiallyFreePages.Root.pPrev = (Scaleform::Render::MatrixPoolImpl::HandlePageBase *)&this->HandleTable.PartiallyFreePages;
  this->HandleTable.PartiallyFreePages.Root.pNext = (Scaleform::Render::MatrixPoolImpl::HandlePageBase *)&this->HandleTable.PartiallyFreePages;
  this->DataPages.Root.pPrev = (Scaleform::Render::MatrixPoolImpl::DataPage *)&this->DataPages;
  this->DataPages.Root.pNext = (Scaleform::Render::MatrixPoolImpl::DataPage *)&this->DataPages;
  this->pAllocPage = 0i64;
  this->pSqueezePage = 0i64;
  this->pLastFreedPage = 0i64;
}

void __fastcall Scaleform::Render::MatrixPoolImpl::MatrixPool::~MatrixPool(
        Scaleform::Render::MatrixPoolImpl::MatrixPool *this)
{
  Scaleform::List<Scaleform::Render::MatrixPoolImpl::DataPage,Scaleform::Render::MatrixPoolImpl::DataPage,Scaleform::ListNode<Scaleform::Render::MatrixPoolImpl::DataPage> > *p_DataPages; // rsi
  Scaleform::Render::MatrixPoolImpl::DataPage *pNext; // rdi

  p_DataPages = &this->DataPages;
  this->__vftable = (Scaleform::Render::MatrixPoolImpl::MatrixPool_vtbl *)&Scaleform::Render::MatrixPoolImpl::MatrixPool::`vftable';
  if ( (Scaleform::List<Scaleform::Render::MatrixPoolImpl::DataPage,Scaleform::Render::MatrixPoolImpl::DataPage,Scaleform::ListNode<Scaleform::Render::MatrixPoolImpl::DataPage> > *)this->DataPages.Root.pNext != &this->DataPages )
  {
    do
    {
      pNext = this->DataPages.Root.pNext;
      pNext->pPrev->pNext = pNext->pNext;
      pNext->pNext->Scaleform::ListNode<Scaleform::Render::MatrixPoolImpl::DataPage>::$4BE43C08DE34ACEC764C2AE60C422C4D::pPrev = pNext->pPrev;
      pNext->pPrev = (Scaleform::Render::MatrixPoolImpl::DataPage *)-1i64;
      pNext->pNext = (Scaleform::Render::MatrixPoolImpl::DataPage *)-1i64;
      this->AllocatedSpace -= 4064i64;
      --this->DataPageCount;
      if ( this->pLastFreedPage )
        ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
      this->pLastFreedPage = pNext;
    }
    while ( (Scaleform::List<Scaleform::Render::MatrixPoolImpl::DataPage,Scaleform::Render::MatrixPoolImpl::DataPage,Scaleform::ListNode<Scaleform::Render::MatrixPoolImpl::DataPage> > *)p_DataPages->Root.pNext != p_DataPages );
  }
  if ( this->pLastFreedPage )
    ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
  Scaleform::RefCountImplCore::~RefCountImplCore(this);
}

void __fastcall Scaleform::Render::MatrixPoolImpl::HMatrix::operator=(
        Scaleform::Render::MatrixPoolImpl::HMatrix *this,
        const Scaleform::Render::MatrixPoolImpl::HMatrix *other)
{
  Scaleform::Render::MatrixPoolImpl::DataHeader *pHeader; // rbx
  bool v5; // zf
  __int64 DataPageOffset; // rcx

  if ( other->pHandle != &Scaleform::Render::MatrixPoolImpl::HMatrix::NullHandle )
    ++other->pHandle->pHeader->RefCount;
  if ( this->pHandle == &Scaleform::Render::MatrixPoolImpl::HMatrix::NullHandle
    || (pHeader = this->pHandle->pHeader, v5 = pHeader->RefCount == 1, --pHeader->RefCount, !v5) )
  {
    this->pHandle = other->pHandle;
  }
  else
  {
    DataPageOffset = pHeader->DataPageOffset;
    *(_WORD *)((char *)&pHeader[1].RefCount + DataPageOffset + 2) += 16 * pHeader->UnitSize;
    (*(Scaleform::Render::MatrixPoolImpl::EntryHandle **)((char *)&pHeader[1].pHandle + DataPageOffset))[5].pHeader += pHeader->UnitSize;
    Scaleform::Render::MatrixPoolImpl::EntryHandle::ReleaseHandle(pHeader->pHandle);
    pHeader->pHandle = 0i64;
    this->pHandle = other->pHandle;
  }
}

Scaleform::Render::MatrixPoolImpl::EntryHandle *__fastcall Scaleform::Render::MatrixPoolImpl::EntryHandleTable::AllocEntry(
        Scaleform::Render::MatrixPoolImpl::EntryHandleTable *this,
        Scaleform::Render::MatrixPoolImpl::DataHeader *header)
{
  Scaleform::Render::MatrixPoolImpl::EntryHandle *result; // rax
  Scaleform::Render::MatrixPoolImpl::HandlePageBase *pNext; // r8
  Scaleform::Render::MatrixPoolImpl::EntryHandle *pFreeList; // r9
  Scaleform::Render::MatrixPoolImpl::EntryHandle v7; // rax

  if ( (Scaleform::List<Scaleform::Render::MatrixPoolImpl::HandlePage,Scaleform::Render::MatrixPoolImpl::HandlePageBase,Scaleform::ListNode<Scaleform::Render::MatrixPoolImpl::HandlePageBase> > *)this->PartiallyFreePages.Root.pNext == &this->PartiallyFreePages
    && !Scaleform::Render::MatrixPoolImpl::EntryHandleTable::allocEntryPage(this) )
  {
    return 0i64;
  }
  pNext = this->PartiallyFreePages.Root.pNext;
  pFreeList = pNext->pFreeList;
  v7.pHeader = pFreeList->pHeader;
  ++pNext->UseCount;
  pNext->pFreeList = v7.pNext;
  if ( !pFreeList->pHeader )
  {
    pNext->pPrev->pNext = pNext->pNext;
    pNext->pNext->Scaleform::ListNode<Scaleform::Render::MatrixPoolImpl::HandlePageBase>::$A9D15A06A1C137EF24CADC8A1D018DCB::pPrev = pNext->pPrev;
    pNext->pPrev = (Scaleform::Render::MatrixPoolImpl::HandlePageBase *)-1i64;
    pNext->pNext = (Scaleform::Render::MatrixPoolImpl::HandlePageBase *)-1i64;
    pNext->pPrev = this->FullPages.Root.pPrev;
    pNext->pNext = (Scaleform::Render::MatrixPoolImpl::HandlePageBase *)&this->FullPages;
    this->FullPages.Root.pPrev->pNext = pNext;
    this->FullPages.Root.pPrev = pNext;
  }
  result = pFreeList;
  pFreeList->pHeader = header;
  return result;
}

Scaleform::Render::MatrixPoolImpl::HMatrix *__fastcall Scaleform::Render::MatrixPoolImpl::MatrixPool::CreateMatrix(
        Scaleform::Render::MatrixPoolImpl::MatrixPool *this,
        Scaleform::Render::MatrixPoolImpl::HMatrix *result,
        const Scaleform::Render::Matrix2x4<float> *m,
        const Scaleform::Render::Cxform *cx,
        unsigned int formatBits)
{
  result->pHandle = Scaleform::Render::MatrixPoolImpl::MatrixPool::createMatrixHelper(this, m, cx, formatBits);
  return result;
}

Scaleform::Render::MatrixPoolImpl::HMatrix *__fastcall Scaleform::Render::MatrixPoolImpl::MatrixPool::CreateMatrix(
        Scaleform::Render::MatrixPoolImpl::MatrixPool *this,
        Scaleform::Render::MatrixPoolImpl::HMatrix *result,
        const Scaleform::Render::Matrix2x4<float> *m,
        unsigned int formatBits)
{
  result->pHandle = Scaleform::Render::MatrixPoolImpl::MatrixPool::createMatrixHelper(
                      this,
                      m,
                      &Scaleform::Render::Cxform::Identity,
                      formatBits);
  return result;
}

Scaleform::Render::MatrixPoolImpl::HMatrix *__fastcall Scaleform::Render::MatrixPoolImpl::MatrixPool::CreateMatrix(
        Scaleform::Render::MatrixPoolImpl::MatrixPool *this,
        Scaleform::Render::MatrixPoolImpl::HMatrix *result,
        const Scaleform::Render::Matrix3x4<float> *m,
        const Scaleform::Render::Cxform *cx,
        unsigned int formatBits)
{
  result->pHandle = Scaleform::Render::MatrixPoolImpl::MatrixPool::createMatrixHelper(this, m, cx, formatBits);
  return result;
}

Scaleform::Render::MatrixPoolImpl::HMatrix *__fastcall Scaleform::Render::MatrixPoolImpl::MatrixPool::CreateMatrix(
        Scaleform::Render::MatrixPoolImpl::MatrixPool *this,
        Scaleform::Render::MatrixPoolImpl::HMatrix *result,
        const Scaleform::Render::Matrix3x4<float> *m,
        unsigned int formatBits)
{
  result->pHandle = Scaleform::Render::MatrixPoolImpl::MatrixPool::createMatrixHelper(
                      this,
                      m,
                      &Scaleform::Render::Cxform::Identity,
                      formatBits);
  return result;
}

Scaleform::Render::Matrix3x4<float> *__fastcall Scaleform::Render::MatrixPoolImpl::HMatrix::GetMatrix3D(
        Scaleform::Render::MatrixPoolImpl::HMatrix *this)
{
  Scaleform::Render::MatrixPoolImpl::DataHeader *pHeader; // rcx

  pHeader = this->pHandle->pHeader;
  if ( (pHeader->Format & 0x10) != 0 )
    return (Scaleform::Render::Matrix3x4<float> *)&pHeader[Scaleform::Render::MatrixPoolImpl::HMatrixConstants::MatrixElementSizeTable[pHeader->Format & 0xF].Offsets[4]
                                                         + 1];
  else
    return &Scaleform::Render::Matrix3x4<float>::Identity;
}

const Scaleform::Render::Matrix2x4<float> *__fastcall Scaleform::Render::MatrixPoolImpl::HMatrix::GetTextureMatrix(
        Scaleform::Render::MatrixPoolImpl::HMatrix *this,
        unsigned int index)
{
  if ( ((unsigned __int8)(1 << (index + 1)) & this->pHandle->pHeader->Format) != 0 )
    return (const Scaleform::Render::Matrix2x4<float> *)&this->pHandle->pHeader[Scaleform::Render::MatrixPoolImpl::HMatrixConstants::MatrixElementSizeTable[this->pHandle->pHeader->Format & 0xF].Offsets[index + 1]
                                                                              + 1];
  else
    return (const Scaleform::Render::Matrix2x4<float> *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[7][152];
}

void __fastcall Scaleform::Render::MatrixPoolImpl::DataHeader::Release(
        Scaleform::Render::MatrixPoolImpl::DataHeader *this)
{
  __int64 DataPageOffset; // rdx

  if ( this->RefCount-- == 1 )
  {
    DataPageOffset = this->DataPageOffset;
    *(_WORD *)((char *)&this[1].RefCount + DataPageOffset + 2) += 16 * this->UnitSize;
    (*(Scaleform::Render::MatrixPoolImpl::EntryHandle **)((char *)&this[1].pHandle + DataPageOffset))[5].pHeader += this->UnitSize;
    Scaleform::Render::MatrixPoolImpl::EntryHandle::ReleaseHandle(this->pHandle);
    this->pHandle = 0i64;
  }
}

void __fastcall Scaleform::Render::MatrixPoolImpl::EntryHandle::ReleaseHandle(
        Scaleform::Render::MatrixPoolImpl::EntryHandle *this)
{
  char *v2; // r8
  __int64 v3; // rcx
  bool v4; // zf

  v2 = (char *)((unsigned __int64)this & 0xFFFFFFFFFFFFF800ui64);
  if ( !*(_QWORD *)(((unsigned __int64)this & 0xFFFFFFFFFFFFF800ui64) + 0x18) )
  {
    *(_QWORD *)(*(_QWORD *)((unsigned __int64)this & 0xFFFFFFFFFFFFF800ui64) + 8i64) = *(_QWORD *)(((unsigned __int64)this & 0xFFFFFFFFFFFFF800ui64)
                                                                                                 + 8);
    **(_QWORD **)(((unsigned __int64)this & 0xFFFFFFFFFFFFF800ui64) + 8) = *(_QWORD *)v2;
    v3 = *(_QWORD *)(((unsigned __int64)this & 0xFFFFFFFFFFFFF800ui64) + 0x20);
    *(_QWORD *)v2 = -1i64;
    v3 += 32i64;
    *((_QWORD *)v2 + 1) = -1i64;
    *((_QWORD *)v2 + 1) = *(_QWORD *)(v3 + 8);
    *(_QWORD *)v2 = v3;
    **(_QWORD **)(v3 + 8) = v2;
    *(_QWORD *)(v3 + 8) = v2;
  }
  this->pHeader = *(Scaleform::Render::MatrixPoolImpl::DataHeader **)(v2 + 24);
  v4 = (*((_DWORD *)v2 + 4))-- == 1;
  *((_QWORD *)v2 + 3) = this;
  if ( v4 )
  {
    *(_QWORD *)(*(_QWORD *)v2 + 8i64) = *((_QWORD *)v2 + 1);
    **((_QWORD **)v2 + 1) = *(_QWORD *)v2;
    *(_QWORD *)v2 = -1i64;
    *((_QWORD *)v2 + 1) = -1i64;
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v2);
  }
}

void __fastcall Scaleform::Render::MatrixPoolImpl::HMatrix::SetCxform(
        Scaleform::Render::MatrixPoolImpl::HMatrix *this,
        const Scaleform::Render::Cxform *m)
{
  Scaleform::Render::MatrixPoolImpl::DataHeader *pHeader; // rdx
  __int64 v5; // rcx

  if ( (this->pHandle->pHeader->Format & 1) == 0 )
  {
    if ( Scaleform::Render::Cxform::operator==((Scaleform::Render::Cxform *)m, &Scaleform::Render::Cxform::Identity) )
      return;
    Scaleform::Render::MatrixPoolImpl::MatrixPool::reallocMatrixData(
      *(Scaleform::Render::MatrixPoolImpl::MatrixPool **)(*(_QWORD *)(((unsigned __int64)this->pHandle & 0xFFFFFFFFFFFFF800ui64)
                                                                    + 0x20)
                                                        + 8i64),
      this->pHandle,
      this->pHandle->pHeader->Format | 1);
  }
  pHeader = this->pHandle->pHeader;
  v5 = Scaleform::Render::MatrixPoolImpl::HMatrixConstants::MatrixElementSizeTable[pHeader->Format & 0xF].Offsets[0]
     + 1i64;
  pHeader[v5] = *(Scaleform::Render::MatrixPoolImpl::DataHeader *)&m->M[0][0];
  pHeader[v5 + 1] = *(Scaleform::Render::MatrixPoolImpl::DataHeader *)&m->M[1][0];
}

void __fastcall Scaleform::Render::MatrixPoolImpl::HMatrix::SetMatrix2D(
        Scaleform::Render::MatrixPoolImpl::HMatrix *this,
        const Scaleform::Render::Matrix2x4<float> *m)
{
  Scaleform::Render::MatrixPoolImpl::EntryHandle *pHandle; // rdi
  unsigned __int8 Format; // si
  Scaleform::Render::MatrixPoolImpl::DataHeader *pHeader; // rdx
  __int64 v7; // rcx
  Scaleform::Render::Matrix2x4<float> Buf1; // [rsp+20h] [rbp-48h] BYREF
  __int128 v9; // [rsp+40h] [rbp-28h]

  pHandle = this->pHandle;
  Format = this->pHandle->pHeader->Format;
  if ( (Format & 0x10) != 0 )
  {
    Buf1 = *m;
    v9 = _xmm;
    if ( !memcmp(&Buf1, &Scaleform::Render::Matrix3x4<float>::Identity, 0x30ui64) )
      return;
    Scaleform::Render::MatrixPoolImpl::MatrixPool::reallocMatrixData(
      *(Scaleform::Render::MatrixPoolImpl::MatrixPool **)(*(_QWORD *)(((unsigned __int64)pHandle & 0xFFFFFFFFFFFFF800ui64)
                                                                    + 0x20)
                                                        + 8i64),
      pHandle,
      Format & 0xEF);
  }
  pHeader = this->pHandle->pHeader;
  v7 = Scaleform::Render::MatrixPoolImpl::HMatrixConstants::MatrixElementSizeTable[pHeader->Format & 0xF].Offsets[4]
     + 1i64;
  *(float *)&pHeader[v7].pHandle = m->M[0][0];
  HIDWORD(pHeader[v7].pHandle) = LODWORD(m->M[0][1]);
  pHeader[v7].RefCount = LODWORD(m->M[0][2]);
  *(float *)&pHeader[v7].DataPageOffset = m->M[0][3];
  *(float *)&pHeader[v7 + 1].pHandle = m->M[1][0];
  HIDWORD(pHeader[v7 + 1].pHandle) = LODWORD(m->M[1][1]);
  pHeader[v7 + 1].RefCount = LODWORD(m->M[1][2]);
  *(float *)&pHeader[v7 + 1].DataPageOffset = m->M[1][3];
}

void __fastcall Scaleform::Render::MatrixPoolImpl::HMatrix::SetMatrix3D(
        Scaleform::Render::MatrixPoolImpl::HMatrix *this,
        const Scaleform::Render::Matrix3x4<float> *m)
{
  Scaleform::Render::MatrixPoolImpl::EntryHandle *pHandle; // rbx
  unsigned __int8 Format; // si
  Scaleform::Render::MatrixPoolImpl::DataHeader *pHeader; // rcx
  __int64 v7; // rdx

  pHandle = this->pHandle;
  Format = this->pHandle->pHeader->Format;
  if ( (Format & 0x10) == 0 )
  {
    if ( !memcmp(m, &Scaleform::Render::Matrix3x4<float>::Identity, 0x30ui64) )
      return;
    Scaleform::Render::MatrixPoolImpl::MatrixPool::reallocMatrixData(
      *(Scaleform::Render::MatrixPoolImpl::MatrixPool **)(*(_QWORD *)(((unsigned __int64)pHandle & 0xFFFFFFFFFFFFF800ui64)
                                                                    + 0x20)
                                                        + 8i64),
      pHandle,
      Format | 0x10);
  }
  pHeader = this->pHandle->pHeader;
  v7 = Scaleform::Render::MatrixPoolImpl::HMatrixConstants::MatrixElementSizeTable[pHeader->Format & 0xF].Offsets[4]
     + 1i64;
  pHeader[v7] = *(Scaleform::Render::MatrixPoolImpl::DataHeader *)&m->M[0][0];
  pHeader[v7 + 1] = *(Scaleform::Render::MatrixPoolImpl::DataHeader *)&m->M[1][0];
  pHeader[v7 + 2] = *(Scaleform::Render::MatrixPoolImpl::DataHeader *)&m->M[2][0];
}

void __fastcall Scaleform::Render::MatrixPoolImpl::HMatrix::SetTextureMatrix(
        Scaleform::Render::MatrixPoolImpl::HMatrix *this,
        const Scaleform::Render::Matrix2x4<float> *m,
        unsigned int index)
{
  Scaleform::Render::MatrixPoolImpl::EntryHandle *pHandle; // rdi
  unsigned int v4; // ebp
  int v7; // ebx
  Scaleform::Render::MatrixPoolImpl::DataHeader *pHeader; // r8
  __int64 v9; // rdx

  pHandle = this->pHandle;
  v4 = index + 1;
  v7 = 1 << (index + 1);
  if ( ((unsigned __int8)v7 & this->pHandle->pHeader->Format) == 0 )
  {
    if ( !memcmp(
            m,
            &extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[7][152],
            0x20ui64) )
      return;
    Scaleform::Render::MatrixPoolImpl::MatrixPool::reallocMatrixData(
      *(Scaleform::Render::MatrixPoolImpl::MatrixPool **)(*(_QWORD *)(((unsigned __int64)pHandle & 0xFFFFFFFFFFFFF800ui64)
                                                                    + 0x20)
                                                        + 8i64),
      pHandle,
      v7 | pHandle->pHeader->Format);
  }
  pHeader = this->pHandle->pHeader;
  v9 = Scaleform::Render::MatrixPoolImpl::HMatrixConstants::MatrixElementSizeTable[pHeader->Format & 0xF].Offsets[v4]
     + 1i64;
  *(float *)&pHeader[v9].pHandle = m->M[0][0];
  HIDWORD(pHeader[v9].pHandle) = LODWORD(m->M[0][1]);
  pHeader[v9].RefCount = LODWORD(m->M[0][2]);
  *(float *)&pHeader[v9].DataPageOffset = m->M[0][3];
  *(float *)&pHeader[v9 + 1].pHandle = m->M[1][0];
  HIDWORD(pHeader[v9 + 1].pHandle) = LODWORD(m->M[1][1]);
  pHeader[v9 + 1].RefCount = LODWORD(m->M[1][2]);
  *(float *)&pHeader[v9 + 1].DataPageOffset = m->M[1][3];
}

void __fastcall Scaleform::Render::MatrixPoolImpl::HMatrix::SetUserData(
        Scaleform::Render::MatrixPoolImpl::HMatrix *this,
        const void *data,
        unsigned __int64 size)
{
  Scaleform::Render::MatrixPoolImpl::DataHeader *pHeader; // rax
  Scaleform::Render::MatrixPoolImpl::DataHeader *v7; // rcx

  pHeader = this->pHandle->pHeader;
  if ( (pHeader->Format & 8) == 0 )
  {
    if ( !data )
      return;
    Scaleform::Render::MatrixPoolImpl::MatrixPool::reallocMatrixData(
      *(Scaleform::Render::MatrixPoolImpl::MatrixPool **)(*(_QWORD *)(((unsigned __int64)this->pHandle & 0xFFFFFFFFFFFFF800ui64)
                                                                    + 0x20)
                                                        + 8i64),
      this->pHandle,
      pHeader->Format | 8);
  }
  v7 = &this->pHandle->pHeader[Scaleform::Render::MatrixPoolImpl::HMatrixConstants::MatrixElementSizeTable[this->pHandle->pHeader->Format & 0xF].Offsets[3]
                             + 1];
  if ( data )
    memmove(v7, data, size);
  else
    memset(v7, 0, size);
}

Scaleform::Render::MatrixPoolImpl::DataHeader *__fastcall Scaleform::Render::MatrixPoolImpl::MatrixPool::allocData(
        Scaleform::Render::MatrixPoolImpl::MatrixPool *this,
        unsigned __int64 size,
        Scaleform::Render::MatrixPoolImpl::EntryHandle *handle)
{
  Scaleform::Render::MatrixPoolImpl::DataPage *pAllocPage; // rax
  unsigned __int64 v4; // rdi
  Scaleform::Render::MatrixPoolImpl::DataHeader *result; // rax
  Scaleform::Render::MatrixPoolImpl::DataPage *v9; // rcx

  pAllocPage = this->pAllocPage;
  v4 = size + 16;
  if ( (!pAllocPage || pAllocPage->FreeTail < v4)
    && !Scaleform::Render::MatrixPoolImpl::MatrixPool::ensureAllocSpace(this, v4) )
  {
    return 0i64;
  }
  v9 = this->pAllocPage;
  result = (Scaleform::Render::MatrixPoolImpl::DataHeader *)((char *)&v9[128] - v9->FreeTail);
  result->pHandle = handle;
  result->RefCount = 1;
  result->DataPageOffset = (_WORD)v9 - (_WORD)result;
  result->UnitSize = (size >> 4) + 1;
  result->Format = 0;
  v9->FreeTail -= v4;
  return result;
}

bool __fastcall Scaleform::Render::MatrixPoolImpl::MatrixPool::allocDataPage(
        Scaleform::Render::MatrixPoolImpl::MatrixPool *this)
{
  Scaleform::Render::MatrixPoolImpl::DataPage *pLastFreedPage; // rdx
  Scaleform::Render::MatrixPoolImpl::DataPage *v3; // rax

  pLastFreedPage = this->pLastFreedPage;
  if ( pLastFreedPage )
  {
    this->pLastFreedPage = 0i64;
  }
  else
  {
    v3 = (Scaleform::Render::MatrixPoolImpl::DataPage *)this->pHeap->Alloc(this->pHeap, 4096i64, 16i64, 0i64);
    pLastFreedPage = v3;
    if ( !v3 )
      return (char)v3;
  }
  pLastFreedPage->pPool = this;
  *(_DWORD *)&pLastFreedPage->FreeTail = 4064;
  pLastFreedPage->pPrev = this->DataPages.Root.pPrev;
  pLastFreedPage->pNext = (Scaleform::Render::MatrixPoolImpl::DataPage *)&this->DataPages;
  this->DataPages.Root.pPrev->pNext = pLastFreedPage;
  LOBYTE(v3) = 1;
  this->DataPages.Root.pPrev = pLastFreedPage;
  this->AllocatedSpace += 4064i64;
  ++this->DataPageCount;
  this->pAllocPage = pLastFreedPage;
  return (char)v3;
}

bool __fastcall Scaleform::Render::MatrixPoolImpl::EntryHandleTable::allocEntryPage(
        Scaleform::Render::MatrixPoolImpl::EntryHandleTable *this)
{
  Scaleform::Render::MatrixPoolImpl::HandlePageBase *v2; // rax
  Scaleform::Render::MatrixPoolImpl::HandlePageBase *v3; // r8
  Scaleform::Render::MatrixPoolImpl::EntryHandle *v4; // rdx
  __int64 v5; // rcx
  Scaleform::Render::MatrixPoolImpl::EntryHandle *p_pFreeList; // rax

  v2 = (Scaleform::Render::MatrixPoolImpl::HandlePageBase *)this->pHeap->Alloc(this->pHeap, 2032i64, 2048i64, 0i64);
  v3 = v2;
  if ( v2 )
  {
    v4 = 0i64;
    v2->pTable = this;
    v2->UseCount = 0;
    v5 = 249i64;
    p_pFreeList = (Scaleform::Render::MatrixPoolImpl::EntryHandle *)&v2[50].pFreeList;
    do
    {
      p_pFreeList->pHeader = (Scaleform::Render::MatrixPoolImpl::DataHeader *)v4;
      v4 = p_pFreeList--;
      --v5;
    }
    while ( v5 );
    v3->pFreeList = v4;
    v3->pPrev = this->PartiallyFreePages.Root.pPrev;
    v3->pNext = (Scaleform::Render::MatrixPoolImpl::HandlePageBase *)&this->PartiallyFreePages;
    this->PartiallyFreePages.Root.pPrev->pNext = v3;
    LOBYTE(v2) = 1;
    this->PartiallyFreePages.Root.pPrev = v3;
  }
  return (char)v2;
}

Scaleform::Render::MatrixPoolImpl::EntryHandle *__fastcall Scaleform::Render::MatrixPoolImpl::MatrixPool::allocMatrixData(
        Scaleform::Render::MatrixPoolImpl::MatrixPool *this,
        unsigned int formatBits)
{
  unsigned __int8 v3; // di
  int v4; // ebp
  Scaleform::Render::MatrixPoolImpl::EntryHandle *v5; // rax
  Scaleform::Render::MatrixPoolImpl::EntryHandle *v6; // rbx
  Scaleform::Render::MatrixPoolImpl::DataHeader *v7; // rax

  v3 = formatBits;
  v4 = Scaleform::Render::MatrixPoolImpl::HMatrixConstants::MatrixElementSizeTable[formatBits & 0xF].Offsets[4];
  v5 = Scaleform::Render::MatrixPoolImpl::EntryHandleTable::AllocEntry(&this->HandleTable, 0i64);
  v6 = v5;
  if ( !v5 )
    return 0i64;
  v7 = Scaleform::Render::MatrixPoolImpl::MatrixPool::allocData(this, 16 * (v4 + ((v3 & 0x10 | 0x20u) >> 4)), v5);
  v6->pHeader = v7;
  if ( !v7 )
  {
    Scaleform::Render::MatrixPoolImpl::EntryHandle::ReleaseHandle(v6);
    return 0i64;
  }
  v7->Format = v3;
  return v6;
}

Scaleform::Render::MatrixPoolImpl::EntryHandle *__fastcall Scaleform::Render::MatrixPoolImpl::MatrixPool::createMatrixHelper(
        Scaleform::Render::MatrixPoolImpl::MatrixPool *this,
        const Scaleform::Render::Matrix2x4<float> *m,
        const Scaleform::Render::Cxform *cx,
        unsigned int formatBits)
{
  char v5; // bl
  Scaleform::Render::MatrixPoolImpl::EntryHandle *v7; // rax
  Scaleform::Render::MatrixPoolImpl::EntryHandle *v8; // r10
  Scaleform::Render::MatrixPoolImpl::DataHeader *pHeader; // r9
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  Scaleform::Render::MatrixPoolImpl::DataHeader *v14; // rax

  v5 = formatBits;
  v7 = Scaleform::Render::MatrixPoolImpl::MatrixPool::allocMatrixData(this, formatBits);
  v8 = v7;
  if ( !v7 )
    return &Scaleform::Render::MatrixPoolImpl::HMatrix::NullHandle;
  pHeader = v7->pHeader;
  v10 = Scaleform::Render::MatrixPoolImpl::HMatrixConstants::MatrixElementSizeTable[v7->pHeader->Format & 0xF].Offsets[4]
      + 1i64;
  *(float *)&pHeader[v10].pHandle = m->M[0][0];
  HIDWORD(pHeader[v10].pHandle) = LODWORD(m->M[0][1]);
  pHeader[v10].RefCount = LODWORD(m->M[0][2]);
  *(float *)&pHeader[v10].DataPageOffset = m->M[0][3];
  *(float *)&pHeader[v10 + 1].pHandle = m->M[1][0];
  HIDWORD(pHeader[v10 + 1].pHandle) = LODWORD(m->M[1][1]);
  pHeader[v10 + 1].RefCount = LODWORD(m->M[1][2]);
  *(float *)&pHeader[v10 + 1].DataPageOffset = m->M[1][3];
  if ( (v5 & 1) != 0 )
  {
    v11 = Scaleform::Render::MatrixPoolImpl::HMatrixConstants::MatrixElementSizeTable[pHeader->Format & 0xF].Offsets[0]
        + 1i64;
    pHeader[v11] = *(Scaleform::Render::MatrixPoolImpl::DataHeader *)&cx->M[0][0];
    pHeader[v11 + 1] = *(Scaleform::Render::MatrixPoolImpl::DataHeader *)&cx->M[1][0];
  }
  if ( (v5 & 2) != 0 )
  {
    v12 = (__int64)&v7->pHeader[Scaleform::Render::MatrixPoolImpl::HMatrixConstants::MatrixElementSizeTable[v7->pHeader->Format & 0xF].Offsets[1]
                              + 1];
    *(_QWORD *)v12 = 1065353216i64;
    *(_QWORD *)(v12 + 8) = 0i64;
    *(_DWORD *)(v12 + 16) = 0;
    *(_QWORD *)(v12 + 20) = 1065353216i64;
    *(_DWORD *)(v12 + 28) = 0;
  }
  if ( (v5 & 4) != 0 )
  {
    v13 = (__int64)&v8->pHeader[Scaleform::Render::MatrixPoolImpl::HMatrixConstants::MatrixElementSizeTable[v8->pHeader->Format & 0xF].Offsets[2]
                              + 1];
    *(_QWORD *)v13 = 1065353216i64;
    *(_QWORD *)(v13 + 8) = 0i64;
    *(_DWORD *)(v13 + 16) = 0;
    *(_QWORD *)(v13 + 20) = 1065353216i64;
    *(_DWORD *)(v13 + 28) = 0;
  }
  if ( (v5 & 8) != 0 )
  {
    v14 = &v8->pHeader[Scaleform::Render::MatrixPoolImpl::HMatrixConstants::MatrixElementSizeTable[v8->pHeader->Format & 0xF].Offsets[3]
                     + 1];
    v14->pHandle = 0i64;
    *(_QWORD *)&v14->RefCount = 0i64;
    v14[1].pHandle = 0i64;
    *(_QWORD *)&v14[1].RefCount = 0i64;
    v14[2].pHandle = 0i64;
    *(_QWORD *)&v14[2].RefCount = 0i64;
    v14[3].pHandle = 0i64;
    *(_QWORD *)&v14[3].RefCount = 0i64;
  }
  return v8;
}

Scaleform::Render::MatrixPoolImpl::EntryHandle *__fastcall Scaleform::Render::MatrixPoolImpl::MatrixPool::createMatrixHelper(
        Scaleform::Render::MatrixPoolImpl::MatrixPool *this,
        const Scaleform::Render::Matrix3x4<float> *m,
        const Scaleform::Render::Cxform *cx,
        unsigned int formatBits)
{
  char v5; // bl
  Scaleform::Render::MatrixPoolImpl::EntryHandle *v7; // rax
  Scaleform::Render::MatrixPoolImpl::EntryHandle *v8; // r11
  Scaleform::Render::MatrixPoolImpl::DataHeader *pHeader; // r10
  __int64 v10; // rcx
  Scaleform::Render::MatrixPoolImpl::DataHeader *v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  Scaleform::Render::MatrixPoolImpl::DataHeader *v15; // rax

  v5 = formatBits;
  v7 = Scaleform::Render::MatrixPoolImpl::MatrixPool::allocMatrixData(this, formatBits);
  v8 = v7;
  if ( !v7 )
    return &Scaleform::Render::MatrixPoolImpl::HMatrix::NullHandle;
  pHeader = v7->pHeader;
  v10 = Scaleform::Render::MatrixPoolImpl::HMatrixConstants::MatrixElementSizeTable[v7->pHeader->Format & 0xF].Offsets[4]
      + 1i64;
  pHeader[v10] = *(Scaleform::Render::MatrixPoolImpl::DataHeader *)&m->M[0][0];
  pHeader[v10 + 1] = *(Scaleform::Render::MatrixPoolImpl::DataHeader *)&m->M[1][0];
  pHeader[v10 + 2] = *(Scaleform::Render::MatrixPoolImpl::DataHeader *)&m->M[2][0];
  if ( (v5 & 1) != 0 )
  {
    v11 = v7->pHeader;
    v12 = Scaleform::Render::MatrixPoolImpl::HMatrixConstants::MatrixElementSizeTable[v7->pHeader->Format & 0xF].Offsets[0]
        + 1i64;
    v11[v12] = *(Scaleform::Render::MatrixPoolImpl::DataHeader *)&cx->M[0][0];
    v11[v12 + 1] = *(Scaleform::Render::MatrixPoolImpl::DataHeader *)&cx->M[1][0];
  }
  if ( (v5 & 2) != 0 )
  {
    v13 = (__int64)&v7->pHeader[Scaleform::Render::MatrixPoolImpl::HMatrixConstants::MatrixElementSizeTable[v7->pHeader->Format & 0xF].Offsets[1]
                              + 1];
    *(_QWORD *)v13 = 1065353216i64;
    *(_QWORD *)(v13 + 8) = 0i64;
    *(_DWORD *)(v13 + 16) = 0;
    *(_QWORD *)(v13 + 20) = 1065353216i64;
    *(_DWORD *)(v13 + 28) = 0;
  }
  if ( (v5 & 4) != 0 )
  {
    v14 = (__int64)&v8->pHeader[Scaleform::Render::MatrixPoolImpl::HMatrixConstants::MatrixElementSizeTable[v8->pHeader->Format & 0xF].Offsets[2]
                              + 1];
    *(_QWORD *)v14 = 1065353216i64;
    *(_QWORD *)(v14 + 8) = 0i64;
    *(_DWORD *)(v14 + 16) = 0;
    *(_QWORD *)(v14 + 20) = 1065353216i64;
    *(_DWORD *)(v14 + 28) = 0;
  }
  if ( (v5 & 8) != 0 )
  {
    v15 = &v8->pHeader[Scaleform::Render::MatrixPoolImpl::HMatrixConstants::MatrixElementSizeTable[v8->pHeader->Format & 0xF].Offsets[3]
                     + 1];
    v15->pHandle = 0i64;
    *(_QWORD *)&v15->RefCount = 0i64;
    v15[1].pHandle = 0i64;
    *(_QWORD *)&v15[1].RefCount = 0i64;
    v15[2].pHandle = 0i64;
    *(_QWORD *)&v15[2].RefCount = 0i64;
    v15[3].pHandle = 0i64;
    *(_QWORD *)&v15[3].RefCount = 0i64;
  }
  return v8;
}

bool __fastcall Scaleform::Render::MatrixPoolImpl::MatrixPool::ensureAllocSpace(
        Scaleform::Render::MatrixPoolImpl::MatrixPool *this,
        unsigned __int64 size)
{
  Scaleform::Render::MatrixPoolImpl::DataPage *pPrev; // rax
  Scaleform::List<Scaleform::Render::MatrixPoolImpl::DataPage,Scaleform::Render::MatrixPoolImpl::DataPage,Scaleform::ListNode<Scaleform::Render::MatrixPoolImpl::DataPage> > *p_DataPages; // rcx
  Scaleform::Render::MatrixPoolImpl::DataPage *pSqueezePage; // rdx
  Scaleform::Render::MatrixPoolImpl::DataPage *pAllocPage; // rax

  pPrev = this->DataPages.Root.pPrev;
  p_DataPages = &this->DataPages;
  if ( this->pAllocPage != pPrev
    && (Scaleform::List<Scaleform::Render::MatrixPoolImpl::DataPage,Scaleform::Render::MatrixPoolImpl::DataPage,Scaleform::ListNode<Scaleform::Render::MatrixPoolImpl::DataPage> > *)p_DataPages->Root.pNext != p_DataPages )
  {
    this->pAllocPage = pPrev;
    if ( pPrev->FreeTail >= size )
      return 1;
  }
  if ( this->FreedSpace >= (3 * this->AllocatedSpace) >> 5 )
  {
    pSqueezePage = this->pSqueezePage;
    if ( !pSqueezePage
      || !Scaleform::Render::MatrixPoolImpl::MatrixPool::squeezeMemoryRange(
            this,
            pSqueezePage,
            this->DataPages.Root.pNext->pPrev,
            Squeeze_Incremental) )
    {
      Scaleform::Render::MatrixPoolImpl::MatrixPool::squeezeMemoryRange(
        this,
        this->DataPages.Root.pNext,
        this->DataPages.Root.pNext->pPrev,
        Squeeze_Incremental);
    }
  }
  pAllocPage = this->pAllocPage;
  return pAllocPage && pAllocPage->FreeTail >= size
      || Scaleform::Render::MatrixPoolImpl::MatrixPool::allocDataPage(this);
}

bool __fastcall Scaleform::Render::MatrixPoolImpl::MatrixPool::reallocMatrixData(
        Scaleform::Render::MatrixPoolImpl::MatrixPool *this,
        Scaleform::Render::MatrixPoolImpl::EntryHandle *handle,
        unsigned int formatBits)
{
  unsigned __int8 v4; // bl
  unsigned int v5; // esi
  Scaleform::Render::MatrixPoolImpl::DataHeader *v7; // rax
  Scaleform::Render::MatrixPoolImpl::DataHeader *v8; // r10
  Scaleform::Render::MatrixPoolImpl::DataHeader *pHeader; // r9
  unsigned __int8 Format; // di
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rax
  Scaleform::Render::MatrixPoolImpl::DataHeader v14; // xmm1
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 v17; // rdx
  Scaleform::Render::Cxform *v18; // rdx
  __int64 v19; // rcx
  char *v20; // r8
  char *v21; // r11
  __int64 v22; // rdx
  __int64 v23; // rdx
  Scaleform::Render::MatrixPoolImpl::DataHeader *v24; // rdx
  __int64 v25; // rax
  unsigned __int16 UnitSize; // cx

  v4 = formatBits;
  v5 = formatBits & 0x10;
  v7 = Scaleform::Render::MatrixPoolImpl::MatrixPool::allocData(
         this,
         16
       * (Scaleform::Render::MatrixPoolImpl::HMatrixConstants::MatrixElementSizeTable[formatBits & 0xF].Offsets[4]
        + ((v5 | 0x20) >> 4)),
         handle);
  v8 = v7;
  if ( v7 )
  {
    pHeader = handle->pHeader;
    v7->Format = v4;
    v7->RefCount = pHeader->RefCount;
    Format = pHeader->Format;
    v11 = Format & 0xF;
    if ( v5 )
    {
      if ( (Format & 0x10) != 0 )
      {
        v12 = Scaleform::Render::MatrixPoolImpl::HMatrixConstants::MatrixElementSizeTable[v11].Offsets[4] + 1i64;
        v13 = Scaleform::Render::MatrixPoolImpl::HMatrixConstants::MatrixElementSizeTable[v4 & 0xF].Offsets[4] + 1i64;
        v8[v13] = pHeader[Scaleform::Render::MatrixPoolImpl::HMatrixConstants::MatrixElementSizeTable[v11].Offsets[4]
                        + 1];
        v8[v13 + 1] = pHeader[v12 + 1];
        v8[v13 + 2] = pHeader[v12 + 2];
      }
      else
      {
        v14 = pHeader[Scaleform::Render::MatrixPoolImpl::HMatrixConstants::MatrixElementSizeTable[v11].Offsets[4] + 2];
        v15 = Scaleform::Render::MatrixPoolImpl::HMatrixConstants::MatrixElementSizeTable[v4 & 0xF].Offsets[4] + 1i64;
        v8[v15] = pHeader[Scaleform::Render::MatrixPoolImpl::HMatrixConstants::MatrixElementSizeTable[v11].Offsets[4]
                        + 1];
        v8[v15 + 1] = v14;
        v8[v15 + 2] = (Scaleform::Render::MatrixPoolImpl::DataHeader)_xmm;
      }
    }
    else
    {
      v16 = Scaleform::Render::MatrixPoolImpl::HMatrixConstants::MatrixElementSizeTable[v11].Offsets[4] + 1i64;
      v17 = Scaleform::Render::MatrixPoolImpl::HMatrixConstants::MatrixElementSizeTable[v4 & 0xF].Offsets[4] + 1i64;
      LODWORD(v7[v17].pHandle) = pHeader[Scaleform::Render::MatrixPoolImpl::HMatrixConstants::MatrixElementSizeTable[v11].Offsets[4]
                                       + 1].pHandle;
      HIDWORD(v7[v17].pHandle) = HIDWORD(pHeader[v16].pHandle);
      v7[v17].RefCount = pHeader[v16].RefCount;
      *(_DWORD *)&v7[v17].DataPageOffset = *(_DWORD *)&pHeader[v16].DataPageOffset;
      LODWORD(v7[v17 + 1].pHandle) = pHeader[v16 + 1].pHandle;
      HIDWORD(v7[v17 + 1].pHandle) = HIDWORD(pHeader[v16 + 1].pHandle);
      v7[v17 + 1].RefCount = pHeader[v16 + 1].RefCount;
      *(_DWORD *)&v7[v17 + 1].DataPageOffset = *(_DWORD *)&pHeader[v16 + 1].DataPageOffset;
    }
    if ( (v4 & 1) != 0 )
    {
      if ( (Format & 1) != 0 )
        v18 = (Scaleform::Render::Cxform *)&pHeader[Scaleform::Render::MatrixPoolImpl::HMatrixConstants::MatrixElementSizeTable[pHeader->Format & 0xF].Offsets[0]
                                                  + 1];
      else
        v18 = &Scaleform::Render::Cxform::Identity;
      v19 = Scaleform::Render::MatrixPoolImpl::HMatrixConstants::MatrixElementSizeTable[v8->Format & 0xF].Offsets[0]
          + 1i64;
      v8[v19] = *(Scaleform::Render::MatrixPoolImpl::DataHeader *)&v18->M[0][0];
      v8[v19 + 1] = *(Scaleform::Render::MatrixPoolImpl::DataHeader *)&v18->M[1][0];
    }
    v20 = &extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[7][152];
    if ( (v4 & 2) != 0 )
    {
      if ( (Format & 2) != 0 )
        v21 = (char *)&pHeader[Scaleform::Render::MatrixPoolImpl::HMatrixConstants::MatrixElementSizeTable[pHeader->Format & 0xF].Offsets[1]
                             + 1];
      else
        v21 = &extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[7][152];
      v22 = Scaleform::Render::MatrixPoolImpl::HMatrixConstants::MatrixElementSizeTable[v8->Format & 0xF].Offsets[1]
          + 1i64;
      LODWORD(v8[v22].pHandle) = *(_DWORD *)v21;
      HIDWORD(v8[v22].pHandle) = *((_DWORD *)v21 + 1);
      v8[v22].RefCount = *((_DWORD *)v21 + 2);
      *(_DWORD *)&v8[v22].DataPageOffset = *((_DWORD *)v21 + 3);
      LODWORD(v8[v22 + 1].pHandle) = *((_DWORD *)v21 + 4);
      HIDWORD(v8[v22 + 1].pHandle) = *((_DWORD *)v21 + 5);
      v8[v22 + 1].RefCount = *((_DWORD *)v21 + 6);
      *(_DWORD *)&v8[v22 + 1].DataPageOffset = *((_DWORD *)v21 + 7);
    }
    if ( (v4 & 4) != 0 )
    {
      if ( (Format & 4) != 0 )
        v20 = (char *)&pHeader[Scaleform::Render::MatrixPoolImpl::HMatrixConstants::MatrixElementSizeTable[pHeader->Format & 0xF].Offsets[2]
                             + 1];
      v23 = Scaleform::Render::MatrixPoolImpl::HMatrixConstants::MatrixElementSizeTable[v8->Format & 0xF].Offsets[2]
          + 1i64;
      LODWORD(v8[v23].pHandle) = *(_DWORD *)v20;
      HIDWORD(v8[v23].pHandle) = *((_DWORD *)v20 + 1);
      v8[v23].RefCount = *((_DWORD *)v20 + 2);
      *(_DWORD *)&v8[v23].DataPageOffset = *((_DWORD *)v20 + 3);
      LODWORD(v8[v23 + 1].pHandle) = *((_DWORD *)v20 + 4);
      HIDWORD(v8[v23 + 1].pHandle) = *((_DWORD *)v20 + 5);
      v8[v23 + 1].RefCount = *((_DWORD *)v20 + 6);
      *(_DWORD *)&v8[v23 + 1].DataPageOffset = *((_DWORD *)v20 + 7);
    }
    if ( (v4 & 8) != 0 )
    {
      v24 = &v8[Scaleform::Render::MatrixPoolImpl::HMatrixConstants::MatrixElementSizeTable[v8->Format & 0xF].Offsets[3]
              + 1];
      if ( (Format & 8) != 0 )
      {
        v25 = Scaleform::Render::MatrixPoolImpl::HMatrixConstants::MatrixElementSizeTable[pHeader->Format & 0xF].Offsets[3]
            + 1i64;
        *v24 = pHeader[Scaleform::Render::MatrixPoolImpl::HMatrixConstants::MatrixElementSizeTable[pHeader->Format & 0xF].Offsets[3]
                     + 1];
        v24[1] = pHeader[v25 + 1];
        v24[2] = pHeader[v25 + 2];
        v24[3] = pHeader[v25 + 3];
      }
      else
      {
        v24->pHandle = 0i64;
        *(_QWORD *)&v24->RefCount = 0i64;
        v24[1].pHandle = 0i64;
        *(_QWORD *)&v24[1].RefCount = 0i64;
        v24[2].pHandle = 0i64;
        *(_QWORD *)&v24[2].RefCount = 0i64;
        v24[3].pHandle = 0i64;
        *(_QWORD *)&v24[3].RefCount = 0i64;
      }
    }
    if ( pHeader->pHandle != &Scaleform::Render::MatrixPoolImpl::HMatrix::NullHandle )
    {
      UnitSize = pHeader->UnitSize;
      pHeader->pHandle = 0i64;
      pHeader->RefCount = 0;
      UnitSize *= 16;
      *(_WORD *)((char *)&pHeader[1].RefCount + pHeader->DataPageOffset + 2) += UnitSize;
      this->FreedSpace += UnitSize;
    }
    handle->pHeader = v8;
    LOBYTE(v7) = 1;
  }
  return (char)v7;
}

__int64 __fastcall Scaleform::Render::MatrixPoolImpl::MatrixPool::squeezeMemoryRange(
        Scaleform::Render::MatrixPoolImpl::MatrixPool *this,
        Scaleform::Render::MatrixPoolImpl::DataPage *squeezeStart,
        Scaleform::Render::MatrixPoolImpl::DataPage *squeezeEnd,
        Scaleform::Render::MatrixPoolImpl::MatrixPool::SqueezeType type)
{
  Scaleform::Render::MatrixPoolImpl::MatrixPool *v4; // rbp
  Scaleform::Render::MatrixPoolImpl::MatrixPool::SqueezeType v5; // er14
  unsigned __int8 v6; // cl
  Scaleform::Render::MatrixPoolImpl::DataPage *pNext; // rsi
  Scaleform::Render::MatrixPoolImpl::DataPage *v8; // r13
  Scaleform::Render::MatrixPoolImpl::DataPage *v9; // rbx
  Scaleform::Render::MatrixPoolImpl::DataPage *v10; // r15
  __int64 FreeMiddle; // r8
  __int64 FreeTail; // rcx
  Scaleform::Render::MatrixPoolImpl::DataPage *v13; // rdx
  Scaleform::Render::MatrixPoolImpl::DataPage *v14; // rdi
  __int64 v15; // r12
  int v16; // ebp
  unsigned __int16 v17; // r15
  $4BE43C08DE34ACEC764C2AE60C422C4D *v18; // rdx
  Scaleform::Render::MatrixPoolImpl::DataPage *v19; // rdi
  Scaleform::Render::MatrixPoolImpl::DataPage *pLastFreedPage; // rdx
  __int64 result; // rax
  unsigned int v22; // [rsp+20h] [rbp-58h]
  char v24; // [rsp+88h] [rbp+10h]

  v4 = this;
  v5 = type;
  v6 = 0;
  v24 = 0;
  pNext = squeezeStart;
  v8 = 0i64;
  v9 = 0i64;
  v4->pAllocPage = 0i64;
  v10 = 0i64;
  v4->pSqueezePage = 0i64;
  if ( squeezeStart == squeezeEnd )
    goto LABEL_30;
  do
  {
    FreeMiddle = pNext->FreeMiddle;
    FreeTail = pNext->FreeTail;
    v22 = FreeMiddle;
    if ( (unsigned int)(FreeMiddle + FreeTail) <= 0xCB )
    {
      pNext = pNext->pNext;
      v6 = v24;
      continue;
    }
    v13 = pNext + 1;
    v14 = pNext + 1;
    v15 = (__int64)&pNext[128] - FreeTail;
    if ( v8 || (v10 = pNext + 128, v8 = pNext, v9 = pNext + 1, (_WORD)FreeMiddle) )
    {
      if ( v13 != (Scaleform::Render::MatrixPoolImpl::DataPage *)v15 )
      {
        do
        {
          v16 = BYTE6(v14->pVoidNext);
          if ( LODWORD(v14->pNext) )
          {
            if ( (Scaleform::Render::MatrixPoolImpl::DataPage *)((char *)v9 + (unsigned int)(16 * v16)) > v10 )
            {
              v17 = (_WORD)v10 - (_WORD)v9;
              v9 = v13;
              v8->FreeTail = v17;
              v8 = pNext;
              v10 = pNext + 128;
            }
            if ( v9 != v14 )
            {
              memmove(v9, v14, 16i64 * BYTE6(v14->pVoidNext));
              v13 = pNext + 1;
              WORD2(v9->pVoidNext) = (_WORD)v8 - (_WORD)v9;
              v9->pPrev->pPrev = v9;
            }
            v9 = (Scaleform::Render::MatrixPoolImpl::DataPage *)((char *)v9 + (unsigned int)(16 * v16));
          }
          v14 = (Scaleform::Render::MatrixPoolImpl::DataPage *)((char *)v14 + (unsigned int)(16 * v16));
        }
        while ( v14 != (Scaleform::Render::MatrixPoolImpl::DataPage *)v15 );
        v4 = this;
        FreeMiddle = v22;
        v5 = type;
      }
    }
    else
    {
      v9 = (Scaleform::Render::MatrixPoolImpl::DataPage *)((char *)pNext - FreeTail + 4096);
    }
    v4->FreedSpace -= pNext->FreeMiddle;
    pNext->FreeMiddle = 0;
    if ( v8 == pNext )
    {
      if ( v9 != &v8[1] )
      {
        if ( (_WORD)FreeMiddle && (char *)v10 - (char *)v9 >= 1016 )
        {
          v6 = 1;
          v24 = 1;
          if ( v5 == Squeeze_Incremental )
            break;
          pNext = pNext->pNext;
        }
        else
        {
          v6 = v24;
          pNext = pNext->pNext;
        }
        continue;
      }
      v8 = 0i64;
    }
    v18 = &pNext->8;
    v19 = pNext;
    pNext = pNext->pNext;
    v19->pPrev->pNext = pNext;
    v18->pNext->pPrev = v19->pPrev;
    v19->pPrev = (Scaleform::Render::MatrixPoolImpl::DataPage *)-1i64;
    v18->pNext = (Scaleform::Render::MatrixPoolImpl::DataPage *)-1i64;
    v4->AllocatedSpace -= 4064i64;
    --v4->DataPageCount;
    pLastFreedPage = v4->pLastFreedPage;
    if ( pLastFreedPage )
      ((void (__fastcall *)(Scaleform::MemoryHeap *, Scaleform::Render::MatrixPoolImpl::DataPage *, __int64))Scaleform::Memory::pGlobalHeap->Free)(
        Scaleform::Memory::pGlobalHeap,
        pLastFreedPage,
        FreeMiddle);
    v4->pLastFreedPage = v19;
    v6 = 1;
    v24 = 1;
    if ( v5 == Squeeze_Incremental )
      break;
  }
  while ( pNext != squeezeEnd );
  if ( v8 )
  {
    result = v6;
    v8->FreeTail = (_WORD)v10 - (_WORD)v9;
    v4->pAllocPage = v8;
    v4->pSqueezePage = v8;
    return result;
  }
LABEL_30:
  v4->pAllocPage = 0i64;
  if ( pNext != (Scaleform::Render::MatrixPoolImpl::DataPage *)&v4->DataPages )
    v4->pSqueezePage = pNext;
  return v6;
}

