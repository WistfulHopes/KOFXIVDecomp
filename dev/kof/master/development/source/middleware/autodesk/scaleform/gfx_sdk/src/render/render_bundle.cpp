#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_font.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessdefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatapacked.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hal.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_pathdatapacker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threadcheck.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_image.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_drawableimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_scale9grid.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_buffer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_viewport.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessgen.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessellator.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_gradients.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphfitter.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_stroker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitive.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocaddr.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_radixtree.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hairliner.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix4x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix3x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_queue.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_hash.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixstate.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_vertex.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_states.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_statebag.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textlayout.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_profiler.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cacheeffect.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixpool.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cxform.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_strokeraa.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraystaticbuff.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_twips.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_rasterizer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshkey.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_bundle.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filters.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_containers.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filterparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textmeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphparam.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treecachenode.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treenode.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_context.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_constants.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphqueue.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"

bool Scaleform::Render::BundleEntry::UpdateBundleEntry(Scaleform::Render::HAL * hal, Scaleform::Render::TreeCacheRoot * tr); // 0x1403EDA10
void Scaleform::Render::BundleEntryRange::StripChainsByDepth(unsigned long topDepth); // 0x1403ED990
bool Scaleform::Render::BundleEntryRangeMatcher::Match(Scaleform::Render::BundleEntryRange & other, unsigned long * mergeDepth); // 0x1403ED500
enum Scaleform::Render::BundleEntryRangeMatcher::Match::__l6::<unnamed-enum-KeyStackLimit>
{
	KeyStackLimit = 6,
};
void(*Scaleform::Render::SortKeyInterface::ullInterface$initializer$::operator<=)(); // 0x140739E48
Scaleform::Render::SortKeyInterface Scaleform::Render::SortKeyInterface::NullInterface; // 0x1409FA3E0
void Scaleform::Render::Bundle::UpdateChain(Scaleform::Render::HAL * hal, Scaleform::Render::BundleEntry * newTop); // 0x1403EDA80
void Scaleform::Render::Bundle::InsertEntry(Scaleform::Render::HAL * __formal, unsigned long long index, Scaleform::Render::BundleEntry * shape); // 0x1403ED490
void Scaleform::Render::Bundle::RemoveEntries(unsigned long long index, unsigned long long count); // 0x1403ED7C0
void Scaleform::Render::Bundle::UpdateMesh(Scaleform::Render::HAL * __formal, Scaleform::Render::BundleEntry * __formal); // 0x14002E7C0
void Scaleform::Render::Bundle::RemoveEntry(Scaleform::Render::BundleEntry * entry); // 0x1403ED8C0
bool Scaleform::Render::Bundle::findEntryIndex(unsigned long long * pindex, Scaleform::Render::BundleEntry * entry); // 0x1403EDB80//decompilation failure at 140739E48!
//decompilation failure at 1409FA3E0!
void __fastcall Scaleform::Render::Bundle::InsertEntry(
        Scaleform::Render::Bundle *this,
        Scaleform::Render::HAL *__formal,
        unsigned __int64 index,
        Scaleform::Render::BundleEntry *shape)
{
  Scaleform::ArrayLH<Scaleform::Render::BundleEntry *,2,Scaleform::ArrayDefaultPolicy> *p_Entries; // rdi
  unsigned __int64 Size; // r8
  Scaleform::Render::BundleEntry **v8; // rcx

  p_Entries = &this->Entries;
  Scaleform::ArrayData<Scaleform::Render::BundleEntry *,Scaleform::AllocatorLH<Scaleform::Render::BundleEntry *,2>,Scaleform::ArrayDefaultPolicy>::Resize(
    &this->Entries.Data,
    this->Entries.Data.Size + 1);
  Size = p_Entries->Data.Size;
  if ( index < Size - 1 )
    memmove(&p_Entries->Data.Data[index + 1], &p_Entries->Data.Data[index], 8 * (Size - index) - 8);
  v8 = &p_Entries->Data.Data[index];
  if ( v8 )
    *v8 = shape;
}

bool __fastcall Scaleform::Render::BundleEntryRangeMatcher::Match(
        Scaleform::Render::BundleEntryRangeMatcher *this,
        Scaleform::Render::BundleEntryRange *other,
        unsigned int *mergeDepth)
{
  unsigned int *v4; // r9
  Scaleform::Render::BundleEntryRange *v5; // r10
  Scaleform::Render::BundleEntry *pFirst; // rdi
  Scaleform::Render::BundleEntry *v8; // r15
  bool v9; // zf
  Scaleform::Render::BundleEntry **pLastEntries; // r8
  unsigned int v11; // ebp
  unsigned __int64 v12; // rsi
  int v13; // er13
  char v14; // r12
  Scaleform::Render::SortKeyInterface *pImpl; // rcx
  unsigned int Flags; // edx
  Scaleform::Render::BundleEntry *v17; // rdx
  __int64 p_pChain; // rax
  Scaleform::Render::TreeCacheNode *pSourceNode; // rax
  unsigned __int64 LastEntryCount; // rax
  __int64 p_Key; // r14
  __int64 v22; // rax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  Scaleform::Render::BundleEntry **v26; // [rsp+20h] [rbp-88h]
  __int64 *v29; // [rsp+40h] [rbp-68h]
  __int64 v30[6]; // [rsp+48h] [rbp-60h] BYREF

  v4 = mergeDepth;
  v5 = other;
  if ( (other->Length & 0x7FFFFFFF) > (this->Length & 0x7FFFFFFF) )
    return 0;
  pFirst = other->pFirst;
  v8 = this->pFirst;
  if ( !this->pFirst )
    return pFirst == 0i64;
  v9 = pFirst == 0i64;
  if ( pFirst )
  {
    pLastEntries = this->pLastEntries;
    v11 = 0;
    v12 = 0i64;
    v13 = 0;
    v26 = this->pLastEntries;
    while ( 1 )
    {
      v14 = 0;
      if ( v13 != v11 )
        goto LABEL_27;
      pImpl = v8->Key.pImpl;
      Flags = pImpl->Flags;
      if ( (Flags & 0x8000) != 0
        || v8->Key.Data != pFirst->Key.Data
        || pImpl != pFirst->Key.pImpl
        || (Flags & 0x2000) == 0 )
      {
        goto LABEL_27;
      }
      if ( v4 )
      {
        if ( v12 >= this->LastEntryCount || (v17 = *pLastEntries) == 0i64 )
          v17 = v8;
        p_pChain = (__int64)&v17->pChain;
        if ( v17->pChain )
        {
          do
          {
            v17 = *(Scaleform::Render::BundleEntry **)p_pChain;
            v9 = *(_QWORD *)(*(_QWORD *)p_pChain + 8i64) == 0i64;
            p_pChain = *(_QWORD *)p_pChain + 8i64;
          }
          while ( !v9 );
        }
        pSourceNode = v17->pSourceNode;
        v17->pChain = pFirst;
        v17->ChainHeight = pSourceNode->Depth - *(_WORD *)v4;
        LastEntryCount = this->LastEntryCount;
        if ( v12 < LastEntryCount )
          goto LABEL_22;
        if ( v12 < 8 )
          break;
      }
LABEL_23:
      if ( pFirst == v5->pLast )
        pFirst = 0i64;
      else
        pFirst = pFirst->pNextPattern;
      v14 = 1;
LABEL_27:
      p_Key = (__int64)&v8->Key;
      if ( (v8->Key.pImpl->Flags & 0x1000) != 0 )
      {
        if ( v11 == 6 )
          return 0;
        v22 = v11++;
        v30[v22] = p_Key;
        v23 = v13 + 1;
        if ( !v14 )
          v23 = v13;
        v13 = v23;
      }
      else if ( v11 )
      {
        v29 = &v30[v11 - 1];
        v24 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, Scaleform::Render::SortKey *, unsigned int *))(**(_QWORD **)*v29 + 24i64))(
                *(_QWORD *)*v29,
                *(_QWORD *)(*v29 + 8),
                &v8->Key,
                v4);
        if ( v24 )
        {
          if ( v13 == v11 && !v14 )
            return 0;
          pLastEntries = v26;
          v4 = mergeDepth;
          v5 = other;
          if ( v24 == 2 )
          {
            v9 = v13 == v11;
            v25 = v13 - 1;
            --v11;
            if ( !v9 )
              v25 = v13;
            v13 = v25;
          }
          else
          {
            *v29 = p_Key;
          }
        }
        else
        {
          pLastEntries = v26;
          v4 = mergeDepth;
          v5 = other;
        }
      }
      if ( v8 != this->pLast )
      {
        v8 = v8->pNextPattern;
        ++pLastEntries;
        ++v12;
        v26 = pLastEntries;
        if ( pFirst )
          continue;
      }
      return pFirst == 0i64;
    }
    if ( LastEntryCount < v12 )
    {
      do
        this->pLastEntries[this->LastEntryCount++] = 0i64;
      while ( this->LastEntryCount < v12 );
    }
    ++this->LastEntryCount;
LABEL_22:
    *pLastEntries = pFirst;
    goto LABEL_23;
  }
  return v9;
}

void __fastcall Scaleform::Render::Bundle::RemoveEntries(
        Scaleform::Render::Bundle *this,
        unsigned __int64 index,
        unsigned __int64 count)
{
  unsigned int v6; // esi
  __int64 v7; // rax
  __int64 v8; // rdi
  Scaleform::RefCountNTSImpl *v9; // rcx
  unsigned __int64 Size; // r8
  unsigned __int64 Capacity; // rax

  v6 = 0;
  if ( count )
  {
    v7 = 0i64;
    do
    {
      v8 = *((_QWORD *)&this->Entries.Data.Data[v7] + index);
      v9 = *(Scaleform::RefCountNTSImpl **)(v8 + 40);
      if ( v9 )
        Scaleform::RefCountNTSImpl::Release(v9);
      ++v6;
      *(_QWORD *)(v8 + 40) = 0i64;
      v7 = v6;
      *(_WORD *)(v8 + 18) = 0;
    }
    while ( v6 < count );
  }
  Size = this->Entries.Data.Size;
  if ( Size == count )
  {
    if ( Size )
    {
      Capacity = this->Entries.Data.Policy.Capacity;
      if ( (Capacity & 0xFFFFFFFFFFFFFFFEui64) != 0 )
      {
        if ( Capacity )
        {
          if ( this->Entries.Data.Data )
          {
            ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
            this->Entries.Data.Data = 0i64;
          }
          this->Entries.Data.Policy.Capacity = 0i64;
        }
      }
    }
    this->Entries.Data.Size = 0i64;
  }
  else
  {
    memmove(&this->Entries.Data.Data[index], &this->Entries.Data.Data[index] + count, 8 * (Size - index - count));
    this->Entries.Data.Size -= count;
  }
}

void __fastcall Scaleform::Render::Bundle::RemoveEntry(
        Scaleform::Render::Bundle *this,
        Scaleform::Render::BundleEntry *entry)
{
  unsigned __int64 Size; // r9
  unsigned __int64 IndexHint; // rdx
  Scaleform::Render::BundleEntry **i; // rax

  Size = this->Entries.Data.Size;
  IndexHint = entry->IndexHint;
  if ( IndexHint >= Size || this->Entries.Data.Data[IndexHint] != entry )
  {
    IndexHint = 0i64;
    if ( !Size )
      return;
    for ( i = this->Entries.Data.Data; *i != entry; ++i )
    {
      if ( ++IndexHint >= Size )
        return;
    }
    entry->IndexHint = IndexHint;
  }
  this->RemoveEntries(this, IndexHint, 1ui64);
}

void __fastcall Scaleform::ArrayDataBase<Scaleform::Render::Text::LineBuffer::Line *,Scaleform::AllocatorLH<Scaleform::Render::Text::LineBuffer::Line *,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        Scaleform::ArrayDataBase<Scaleform::Render::TextureFormat *,Scaleform::AllocatorLH<Scaleform::Render::TextureFormat *,2>,Scaleform::ArrayDefaultPolicy> *this,
        const void *pheapAddr,
        unsigned __int64 newCapacity)
{
  Scaleform::Render::TextureFormat **Data; // rdx
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // r8
  Scaleform::Render::TextureFormat **v8; // rax
  int v9; // [rsp+30h] [rbp+8h] BYREF

  if ( newCapacity != this->Policy.Capacity )
  {
    Data = this->Data;
    if ( newCapacity )
    {
      v6 = (newCapacity + 3) & 0xFFFFFFFFFFFFFFFCui64;
      v7 = 8 * v6;
      if ( Data )
      {
        v8 = (Scaleform::Render::TextureFormat **)Scaleform::Memory::pGlobalHeap->Realloc(
                                                    Scaleform::Memory::pGlobalHeap,
                                                    Data,
                                                    v7);
        this->Policy.Capacity = v6;
        this->Data = v8;
        return;
      }
      v9 = 2;
      this->Data = (Scaleform::Render::TextureFormat **)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                                          Scaleform::Memory::pGlobalHeap,
                                                          pheapAddr,
                                                          v7,
                                                          &v9);
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

void __fastcall Scaleform::ArrayData<Scaleform::Render::BundleEntry *,Scaleform::AllocatorLH<Scaleform::Render::BundleEntry *,2>,Scaleform::ArrayDefaultPolicy>::Resize(
        Scaleform::ArrayData<Scaleform::Render::BundleEntry *,Scaleform::AllocatorLH<Scaleform::Render::BundleEntry *,2>,Scaleform::ArrayDefaultPolicy> *this,
        unsigned __int64 newSize)
{
  if ( newSize >= this->Size )
  {
    if ( newSize > this->Policy.Capacity )
    {
      Scaleform::ArrayDataBase<Scaleform::Render::Text::LineBuffer::Line *,Scaleform::AllocatorLH<Scaleform::Render::Text::LineBuffer::Line *,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        (Scaleform::ArrayDataBase<Scaleform::Render::TextureFormat *,Scaleform::AllocatorLH<Scaleform::Render::TextureFormat *,2>,Scaleform::ArrayDefaultPolicy> *)this,
        this,
        newSize + (newSize >> 2));
      this->Size = newSize;
      return;
    }
  }
  else if ( newSize < this->Policy.Capacity >> 1 )
  {
    Scaleform::ArrayDataBase<Scaleform::Render::Text::LineBuffer::Line *,Scaleform::AllocatorLH<Scaleform::Render::Text::LineBuffer::Line *,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      (Scaleform::ArrayDataBase<Scaleform::Render::TextureFormat *,Scaleform::AllocatorLH<Scaleform::Render::TextureFormat *,2>,Scaleform::ArrayDefaultPolicy> *)this,
      this,
      newSize);
    this->Size = newSize;
    return;
  }
  this->Size = newSize;
}

void __fastcall Scaleform::Render::BundleEntryRange::StripChainsByDepth(
        Scaleform::Render::BundleEntryRange *this,
        unsigned int topDepth)
{
  Scaleform::Render::BundleEntry *pFirst; // r9
  Scaleform::Render::Bundle *pObject; // r8
  Scaleform::Render::BundleEntry *v4; // rax
  __int64 p_pChain; // r8
  bool v6; // zf

  pFirst = this->pFirst;
  if ( this->pFirst )
  {
    while ( 1 )
    {
      pObject = pFirst->pBundle.pObject;
      v4 = pFirst;
      if ( pObject )
        pObject->NeedUpdate = 1;
      p_pChain = (__int64)&pFirst->pChain;
      if ( pFirst->pChain )
      {
        do
        {
          if ( v4->ChainHeight > v4->pSourceNode->Depth - topDepth )
            break;
          v4 = *(Scaleform::Render::BundleEntry **)p_pChain;
          v6 = *(_QWORD *)(*(_QWORD *)p_pChain + 8i64) == 0i64;
          p_pChain = *(_QWORD *)p_pChain + 8i64;
        }
        while ( !v6 );
      }
      v4->pChain = 0i64;
      v4->ChainHeight = 0;
      if ( pFirst == this->pLast )
        break;
      pFirst = pFirst->pNextPattern;
    }
  }
}

char __fastcall Scaleform::Render::BundleEntry::UpdateBundleEntry(
        Scaleform::Render::BundleEntry *this,
        Scaleform::Render::HAL *hal,
        Scaleform::Render::TreeCacheRoot *tr)
{
  Scaleform::Render::Bundle *pObject; // rax
  Scaleform::Render::Bundle *v6; // rbx

  this->Key.pImpl->UpdateBundleEntry(this->Key.pImpl, hal, this->Key.Data, this, tr);
  if ( this->pBundle.pObject )
  {
    pObject = this->pBundle.pObject;
    if ( pObject )
      ++pObject->RefCount;
    v6 = this->pBundle.pObject;
    if ( v6->NeedUpdate )
      Scaleform::Render::Bundle::UpdateChain(this->pBundle.pObject, hal, this);
    Scaleform::RefCountNTSImpl::Release(v6);
  }
  return 1;
}

void __fastcall Scaleform::Render::Bundle::UpdateChain(
        Scaleform::Render::Bundle *this,
        Scaleform::Render::HAL *hal,
        Scaleform::Render::BundleEntry *newTop)
{
  unsigned __int64 v3; // rbx
  Scaleform::Render::BundleEntry *i; // rdi
  unsigned __int64 Size; // r9
  unsigned __int64 v9; // r8
  Scaleform::Render::BundleEntry **v10; // rcx
  unsigned __int64 v11; // r8

  v3 = 0i64;
  this->NeedUpdate = 0;
  for ( i = newTop; i; ++v3 )
  {
    Size = this->Entries.Data.Size;
    if ( v3 >= Size || i != this->Entries.Data.Data[v3] )
    {
      if ( i->pBundle.pObject != this )
        goto LABEL_13;
      v9 = v3;
      if ( v3 < Size )
      {
        v10 = &this->Entries.Data.Data[v3];
        do
        {
          if ( *v10 == i )
            break;
          ++v9;
          ++v10;
        }
        while ( v9 < Size );
        if ( v9 > v3 )
          this->RemoveEntries(this, v3, v9 - v3);
      }
      if ( v3 >= this->Entries.Data.Size || i != this->Entries.Data.Data[v3] )
      {
LABEL_13:
        Scaleform::Render::BundleEntry::SetBundle(i, this, v3);
        this->InsertEntry(this, hal, v3, i);
      }
    }
    i = i->pChain;
  }
  v11 = this->Entries.Data.Size;
  if ( v3 < v11 )
    this->RemoveEntries(this, v3, v11 - v3);
  this->pTop = newTop;
}

void __fastcall ActorWeapon::ActionFlagCheck(_SETJMP_FLOAT128 *JumpBuffer)
{
  ;
}

char __fastcall Scaleform::Render::Bundle::findEntryIndex(
        Scaleform::Render::Bundle *this,
        unsigned __int64 *pindex,
        Scaleform::Render::BundleEntry *entry)
{
  unsigned __int64 IndexHint; // r10
  unsigned __int64 Size; // r9
  unsigned __int64 v6; // rax
  Scaleform::Render::BundleEntry **i; // rcx

  IndexHint = entry->IndexHint;
  Size = this->Entries.Data.Size;
  if ( IndexHint < Size && this->Entries.Data.Data[IndexHint] == entry )
  {
    *pindex = IndexHint;
    return 1;
  }
  else
  {
    v6 = 0i64;
    if ( Size )
    {
      for ( i = this->Entries.Data.Data; *i != entry; ++i )
      {
        if ( ++v6 >= Size )
          return 0;
      }
      entry->IndexHint = v6;
      *pindex = v6;
      return 1;
    }
    else
    {
      return 0;
    }
  }
}

