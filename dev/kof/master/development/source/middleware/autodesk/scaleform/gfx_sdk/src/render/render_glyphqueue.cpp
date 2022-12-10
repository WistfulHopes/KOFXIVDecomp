#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_listalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_hash.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphparam.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_image.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"

Scaleform::Render::GlyphQueue::GlyphQueue(); // 0x140405A00
void Scaleform::Render::GlyphQueue::Clear(); // 0x140405F70
void Scaleform::Render::GlyphQueue::Init(Scaleform::Render::GlyphEvictNotifier * notifier, unsigned long firstTexture, unsigned long numTextures, unsigned long textureWidth, unsigned long textureHeight, unsigned long maxSlotHeight, bool fenceWaitOnFull); // 0x140406280
void Scaleform::Render::GlyphQueue::PinSlot(Scaleform::Render::GlyphSlot * slot); // 0x1404064E0
void Scaleform::Render::GlyphQueue::UnpinSlot(Scaleform::Render::GlyphSlot * slot, Scaleform::Render::Fence * fence); // 0x140406680
Scaleform::Render::GlyphNode * Scaleform::Render::GlyphQueue::packGlyph(unsigned long w, unsigned long h, Scaleform::Render::GlyphNode * glyph); // 0x1404073B0
void Scaleform::Render::GlyphQueue::splitSlot(Scaleform::Render::GlyphSlot * slot, unsigned long w); // 0x140407B90
void Scaleform::Render::GlyphQueue::splitGlyph(Scaleform::Render::GlyphSlot * slot, bool left, unsigned long w); // 0x140407AA0
Scaleform::Render::GlyphNode * Scaleform::Render::GlyphQueue::packGlyph(unsigned long w, unsigned long h, Scaleform::Render::GlyphSlot * slot); // 0x140407560
Scaleform::Render::GlyphNode * Scaleform::Render::GlyphQueue::findSpaceInSlots(unsigned long w, unsigned long h); // 0x140406E90
Scaleform::Render::GlyphSlot * Scaleform::Render::GlyphQueue::initNewSlot(Scaleform::Render::GlyphBand * band, unsigned long x, unsigned long w); // 0x140406FF0
Scaleform::Render::GlyphNode * Scaleform::Render::GlyphQueue::allocateNewSlot(unsigned long w, unsigned long h); // 0x140406940
void Scaleform::Render::GlyphQueue::releaseGlyphTree(Scaleform::Render::GlyphNode * glyph); // 0x140407670
void Scaleform::Render::GlyphQueue::releaseSlot(Scaleform::Render::GlyphSlot * slot); // 0x1404076E0
void Scaleform::Render::GlyphQueue::mergeSlots(Scaleform::Render::GlyphSlot * from, Scaleform::Render::GlyphSlot * to, unsigned long w); // 0x140407290
Scaleform::Render::GlyphSlot * Scaleform::Render::GlyphQueue::mergeSlotWithNeighbor(Scaleform::Render::GlyphSlot * slot); // 0x1404070D0
Scaleform::Render::GlyphNode * Scaleform::Render::GlyphQueue::evictOldSlot(unsigned long w, unsigned long h, unsigned long pass); // 0x140406B20
Scaleform::Render::GlyphNode * Scaleform::Render::GlyphQueue::evictOldSlot(unsigned long w, unsigned long h); // 0x140406AB0
Scaleform::Render::TextNotifier * Scaleform::Render::GlyphQueue::CreateNotifier(Scaleform::Render::GlyphNode * node, Scaleform::Render::TextMeshProvider * tm); // 0x140406110
void Scaleform::Render::GlyphQueue::RemoveNotifier(Scaleform::Render::TextNotifier * notifier); // 0x1404064F0
Scaleform::Render::GlyphNode * Scaleform::Render::GlyphQueue::FindGlyph(const Scaleform::Render::GlyphParam & gp); // 0x140406190
Scaleform::Render::GlyphNode * Scaleform::Render::GlyphQueue::AllocateGlyph(const Scaleform::Render::GlyphParam & gp, unsigned long w, unsigned long h); // 0x140405B50
void Scaleform::Render::GlyphQueue::UnpinAllSlots(); // 0x1404065E0
void Scaleform::Render::GlyphQueue::MergeEmptySlots(); // 0x140406310
void Scaleform::Render::GlyphQueue::CleanUpTexture(unsigned long textureId); // 0x140405EC0
const Scaleform::Render::GlyphNode * Scaleform::Render::GlyphQueue::findFontInSlot(Scaleform::Render::GlyphNode * glyph, const Scaleform::Render::FontCacheHandle * font); // 0x140406E40
void Scaleform::Render::GlyphQueue::CleanUpFont(const Scaleform::Render::FontCacheHandle * font); // 0x140405D70char __fastcall Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeHashF,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::GlyphParamHash,75>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeHashF>>::RemoveAlt<Scaleform::Render::GlyphParamHash>(
        Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeHashF,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::GlyphParamHash,75>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeHashF> > *this,
        const Scaleform::Render::GlyphParamHash *key)
{
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeHashF,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::GlyphParamHash,75>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeHashF> >::TableType *pTable; // r8
  unsigned __int16 BlurY; // bx
  Scaleform::Render::FontCacheHandle *pFont; // r11
  __int64 Flags; // rbp
  __int64 FontSize; // rsi
  __int64 GlyphIndex; // rdi
  __int64 BlurX; // r14
  __int64 BlurStrength; // r15
  __int64 v12; // rcx
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeHashF,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::GlyphParamHash,75>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeHashF> >::TableType *v13; // rdx
  __int64 v14; // r10
  __int64 v15; // r9
  unsigned __int64 EntryCount; // rax
  unsigned __int64 v17; // rax
  __int64 v18; // rax

  pTable = this->pTable;
  if ( !this->pTable )
    return 0;
  BlurY = key->Param->BlurY;
  pFont = key->Param->pFont;
  Flags = key->Param->Flags;
  FontSize = key->Param->FontSize;
  GlyphIndex = key->Param->GlyphIndex;
  BlurX = key->Param->BlurX;
  BlurStrength = key->Param->BlurStrength;
  v12 = pTable->SizeMask & ((unsigned __int64)pFont ^ BlurStrength ^ BlurX ^ Flags ^ FontSize ^ GlyphIndex ^ ((unsigned __int64)pFont >> 6) ^ (2i64 * BlurY));
  v13 = &pTable[2 * v12 + 1];
  if ( v13->EntryCount == -2i64 || v13->SizeMask != v12 )
    return 0;
  v14 = pTable->SizeMask & ((unsigned __int64)pFont ^ BlurStrength ^ BlurX ^ Flags ^ FontSize ^ GlyphIndex ^ ((unsigned __int64)pFont >> 6) ^ (2i64 * BlurY));
  v15 = -1i64;
  while ( 1 )
  {
    if ( v13->SizeMask == v14 )
    {
      EntryCount = v13[1].EntryCount;
      if ( *(Scaleform::Render::FontCacheHandle **)EntryCount == pFont
        && *(_WORD *)(EntryCount + 8) == (_WORD)GlyphIndex
        && *(_WORD *)(EntryCount + 10) == (_WORD)FontSize
        && *(_WORD *)(EntryCount + 12) == (_WORD)Flags
        && *(_WORD *)(EntryCount + 14) == (_WORD)BlurX
        && *(_WORD *)(EntryCount + 16) == BlurY
        && *(_WORD *)(EntryCount + 18) == (_WORD)BlurStrength )
      {
        break;
      }
    }
    v15 = v12;
    v12 = v13->EntryCount;
    if ( v13->EntryCount == -1i64 )
      return 0;
    v13 = &pTable[2 * v12 + 1];
  }
  v17 = v13->EntryCount;
  if ( v14 == v12 )
  {
    if ( v17 != -1i64 )
    {
      v13->EntryCount = -2i64;
      v18 = 2 * v17;
      v13->EntryCount = pTable[v18 + 1].EntryCount;
      v13->SizeMask = pTable[v18 + 1].SizeMask;
      v13[1].EntryCount = pTable[v18 + 2].EntryCount;
      v13[1].SizeMask = pTable[v18 + 2].SizeMask;
      v13 = &pTable[v18 + 1];
    }
  }
  else
  {
    pTable[2 * v15 + 1].EntryCount = v17;
  }
  v13->EntryCount = -2i64;
  --this->pTable->EntryCount;
  return 1;
}

void __fastcall Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeHashF,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::GlyphParamHash,75>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeHashF>>::add<Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>>(
        Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeHashF,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::GlyphParamHash,75>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeHashF> > *this,
        void *pmemAddr,
        const Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash> *key,
        unsigned __int64 hashValue)
{
  unsigned __int64 v7; // rdi
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeHashF,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::GlyphParamHash,75>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeHashF> >::TableType *pTable; // r10
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeHashF,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::GlyphParamHash,75>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeHashF> >::TableType *v9; // rdx
  unsigned __int64 EntryCount; // r11
  __int64 v11; // rcx
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeHashF,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::GlyphParamHash,75>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeHashF> >::TableType *v12; // r9
  unsigned __int64 SizeMask; // rax
  Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash> v14; // xmm0
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeHashF,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::GlyphParamHash,75>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeHashF> >::TableType *i; // r8

  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeHashF,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::GlyphParamHash,75>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeHashF>>::CheckExpand(
    this,
    pmemAddr);
  v7 = this->pTable->SizeMask & hashValue;
  ++this->pTable->EntryCount;
  pTable = this->pTable;
  v9 = &this->pTable[2 * v7];
  EntryCount = v9[1].EntryCount;
  if ( EntryCount == -2i64 )
  {
    v9[1].EntryCount = -1i64;
    v9[1].SizeMask = 0i64;
    v9[2].EntryCount = (unsigned __int64)key->First.Param;
    v9[2].SizeMask = (unsigned __int64)key->Second;
  }
  else
  {
    v11 = v7;
    do
      v11 = pTable->SizeMask & (v11 + 1);
    while ( pTable[2 * v11 + 1].EntryCount != -2i64 );
    v12 = &pTable[2 * v11 + 1];
    SizeMask = v9[1].SizeMask;
    if ( SizeMask == v7 )
    {
      if ( v12 )
      {
        v12->EntryCount = EntryCount;
        v12->SizeMask = v9[1].SizeMask;
        v12[1].EntryCount = v9[2].EntryCount;
        v12[1].SizeMask = v9[2].SizeMask;
      }
      v14 = *key;
      v9[1].EntryCount = v11;
    }
    else
    {
      for ( i = &pTable[2 * SizeMask + 1]; i->EntryCount != v7; i = &pTable[2 * i->EntryCount + 1] )
        ;
      if ( v12 )
      {
        v12->EntryCount = EntryCount;
        v12->SizeMask = v9[1].SizeMask;
        v12[1].EntryCount = v9[2].EntryCount;
        v12[1].SizeMask = v9[2].SizeMask;
      }
      i->EntryCount = v11;
      v14 = *key;
      v9[1].EntryCount = -1i64;
    }
    v9[2] = (Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeHashF,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::GlyphParamHash,75>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeHashF> >::TableType)v14;
  }
  v9[1].SizeMask = v7;
}

void __fastcall Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeHashF,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::GlyphParamHash,75>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeHashF>>::add<Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeRef>(
        Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeHashF,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::GlyphParamHash,75>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeHashF> > *this,
        void *pmemAddr,
        const Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeRef *key,
        unsigned __int64 hashValue)
{
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeHashF,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::GlyphParamHash,75>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeHashF> >::TableType *pTable; // rax
  unsigned __int64 v8; // r8
  unsigned __int64 SizeMask; // r8
  unsigned __int64 v10; // rbx
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeHashF,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::GlyphParamHash,75>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeHashF> >::TableType *v11; // rcx
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeHashF,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::GlyphParamHash,75>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeHashF> >::TableType *v12; // r8
  unsigned __int64 EntryCount; // r11
  __int64 v14; // rdx
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeHashF,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::GlyphParamHash,75>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeHashF> >::TableType *v15; // r10
  unsigned __int64 v16; // rax
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeHashF,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::GlyphParamHash,75>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeHashF> >::TableType *i; // r9

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
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeHashF,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::GlyphParamHash,75>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeHashF>>::setRawCapacity(
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
    v12[2].EntryCount = (unsigned __int64)key->pFirst->Param;
    v12[2].SizeMask = (unsigned __int64)*key->pSecond;
  }
  else
  {
    v14 = v10;
    do
      v14 = v11->SizeMask & (v14 + 1);
    while ( v11[2 * v14 + 1].EntryCount != -2i64 );
    v15 = &v11[2 * v14 + 1];
    v16 = v12[1].SizeMask;
    if ( v16 == v10 )
    {
      if ( v15 )
      {
        v15->EntryCount = EntryCount;
        v15->SizeMask = v12[1].SizeMask;
        v15[1].EntryCount = v12[2].EntryCount;
        v15[1].SizeMask = v12[2].SizeMask;
      }
      v12[2].EntryCount = (unsigned __int64)key->pFirst->Param;
      v12[2].SizeMask = (unsigned __int64)*key->pSecond;
      v12[1].EntryCount = v14;
    }
    else
    {
      for ( i = &v11[2 * v16 + 1]; i->EntryCount != v10; i = &v11[2 * i->EntryCount + 1] )
        ;
      if ( v15 )
      {
        v15->EntryCount = EntryCount;
        v15->SizeMask = v12[1].SizeMask;
        v15[1].EntryCount = v12[2].EntryCount;
        v15[1].SizeMask = v12[2].SizeMask;
      }
      i->EntryCount = v14;
      v12[2].EntryCount = (unsigned __int64)key->pFirst->Param;
      v12[2].SizeMask = (unsigned __int64)*key->pSecond;
      v12[1].EntryCount = -1i64;
    }
  }
  v12[1].SizeMask = v10;
}

unsigned __int64 __fastcall Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeHashF,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::GlyphParamHash,75>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeHashF>>::findIndexCore<Scaleform::Render::GlyphParamHash>(
        Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeHashF,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::GlyphParamHash,75>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeHashF> > *this,
        const Scaleform::Render::GlyphParamHash *key,
        unsigned __int64 hashValue)
{
  unsigned __int64 v4; // r10
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeHashF,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::GlyphParamHash,75>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeHashF> >::TableType *v5; // r9
  const Scaleform::Render::GlyphParam *Param; // rdx
  unsigned __int64 EntryCount; // rax

  v4 = hashValue;
  v5 = &this->pTable[2 * hashValue + 1];
  if ( v5->EntryCount == -2i64 || v5->SizeMask != hashValue )
    return -1i64;
  while ( 1 )
  {
    if ( v5->SizeMask == hashValue )
    {
      Param = key->Param;
      EntryCount = v5[1].EntryCount;
      if ( *(Scaleform::Render::FontCacheHandle **)EntryCount == key->Param->pFont
        && *(_WORD *)(EntryCount + 8) == Param->GlyphIndex
        && *(_WORD *)(EntryCount + 10) == Param->FontSize
        && *(_WORD *)(EntryCount + 12) == Param->Flags
        && *(_WORD *)(EntryCount + 14) == Param->BlurX
        && *(_WORD *)(EntryCount + 16) == Param->BlurY
        && *(_WORD *)(EntryCount + 18) == Param->BlurStrength )
      {
        break;
      }
    }
    v4 = v5->EntryCount;
    if ( v5->EntryCount == -1i64 )
      return -1i64;
    v5 = &this->pTable[2 * v4 + 1];
  }
  return v4;
}

void __fastcall Scaleform::Render::GlyphQueue::GlyphQueue(Scaleform::Render::GlyphQueue *this)
{
  Scaleform::List2<Scaleform::Render::GlyphSlot,Scaleform::Render::GlyphSlot_Active> *p_ActiveSlots; // rcx

  *(_QWORD *)&this->MinSlotSpace = 10i64;
  *(_QWORD *)&this->NumTextures = 0i64;
  *(_QWORD *)&this->TextureHeight = 0i64;
  this->NumBandsInTexture = 0;
  this->FenceWaitOnFullCache = 0;
  this->Slots.FirstPage = 0i64;
  this->Slots.LastPage = 0i64;
  this->Slots.NumElementsInPage = 127;
  this->Slots.FirstEmptySlot = 0i64;
  this->Slots.pHeapOrPtr = &this->Slots;
  this->SlotQueue.Root.pPrev = (Scaleform::Render::GlyphSlot *)&this->SlotQueue;
  this->SlotQueue.Root.pNext = (Scaleform::Render::GlyphSlot *)&this->SlotQueue;
  this->SlotQueueSize = 0;
  p_ActiveSlots = &this->ActiveSlots;
  p_ActiveSlots->Root.pPrev = (Scaleform::Render::GlyphSlot *)-1i64;
  p_ActiveSlots->Root.pNext = (Scaleform::Render::GlyphSlot *)-1i64;
  p_ActiveSlots->Root.TextFields.Root.pPrev = (Scaleform::Render::TextNotifier *)&p_ActiveSlots->Root.TextFields;
  p_ActiveSlots->Root.TextFields.Root.pNext = (Scaleform::Render::TextNotifier *)&p_ActiveSlots->Root.TextFields;
  p_ActiveSlots->Root.SlotFence.pObject = 0i64;
  p_ActiveSlots->Root.pPrevActive = &p_ActiveSlots->Root;
  p_ActiveSlots->Root.pNextActive = &p_ActiveSlots->Root;
  this->Glyphs.FirstPage = 0i64;
  this->Glyphs.LastPage = 0i64;
  this->Glyphs.NumElementsInPage = 127;
  this->Glyphs.FirstEmptySlot = 0i64;
  this->Glyphs.pHeapOrPtr = &this->Glyphs;
  this->Bands.Data = 0i64;
  this->Bands.Size = 0i64;
  this->Bands.Capacity = 0i64;
  this->GlyphHTable.mHash.pTable = 0i64;
  this->NumUsedBands = 0;
  this->Notifiers.FirstPage = 0i64;
  this->Notifiers.LastPage = 0i64;
  this->Notifiers.NumElementsInPage = 127;
  this->Notifiers.FirstEmptySlot = 0i64;
  this->Notifiers.pHeapOrPtr = &this->Notifiers;
  this->pEvictNotifier = 0i64;
}

Scaleform::Render::GlyphNode *__fastcall Scaleform::ListAllocBase<Scaleform::Render::GlyphNode,127,Scaleform::AllocatorLH_POD<Scaleform::Render::GlyphNode,75>>::Alloc(
        Scaleform::ListAllocBase<Scaleform::Render::GlyphNode,127,Scaleform::AllocatorLH_POD<Scaleform::Render::GlyphNode,75> > *this,
        const Scaleform::Render::GlyphNode *v)
{
  Scaleform::Render::GlyphNode *result; // rax
  __int16 y; // cx

  result = Scaleform::ListAllocBase<Scaleform::Render::GlyphNode,127,Scaleform::AllocatorLH_POD<Scaleform::Render::GlyphNode,75>>::allocate(this);
  *(_OWORD *)&result->Param.pFont = *(_OWORD *)&v->Param.pFont;
  *(_QWORD *)&result->Param.BlurY = *(_QWORD *)&v->Param.BlurY;
  result->pSlot = v->pSlot;
  result->pNext = v->pNext;
  result->pNex2 = v->pNex2;
  result->mRect = v->mRect;
  y = v->Origin.y;
  result->Origin.x = v->Origin.x;
  result->Origin.y = y;
  result->Scale = v->Scale;
  return result;
}

Scaleform::Render::GlyphNode *__fastcall Scaleform::Render::GlyphQueue::AllocateGlyph(
        Scaleform::Render::GlyphQueue *this,
        const Scaleform::Render::GlyphParam *gp,
        unsigned int w,
        unsigned int h)
{
  Scaleform::Render::GlyphNode *result; // rax
  Scaleform::HashLH<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash,75,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeHashF> > *p_GlyphHTable; // rsi
  Scaleform::Render::GlyphSlot *pSlot; // r8
  const Scaleform::Render::GlyphParam *p_Param; // rdi
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeHashF,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::GlyphParamHash,75>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeHashF> >::TableType *pTable; // rbx
  signed __int64 v13; // rax
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeHashF,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::GlyphParamHash,75>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeHashF> >::TableType *v14; // rcx
  unsigned __int64 *p_SizeMask; // rax
  __int64 BlurY; // r9
  Scaleform::Render::GlyphParamHash key; // [rsp+20h] [rbp-28h] BYREF
  Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeRef v18; // [rsp+28h] [rbp-20h] BYREF
  Scaleform::Render::GlyphNode *v19; // [rsp+50h] [rbp+8h] BYREF

  if ( h < this->MinSlotSpace )
    this->MinSlotSpace = h;
  if ( w < this->MinSlotSpace )
    this->MinSlotSpace = w;
  result = Scaleform::Render::GlyphQueue::findSpaceInSlots(this, w, h);
  v19 = result;
  if ( result
    || (result = Scaleform::Render::GlyphQueue::allocateNewSlot(this, w, h), (v19 = result) != 0i64)
    || (result = Scaleform::Render::GlyphQueue::evictOldSlot(this, w, h), (v19 = result) != 0i64) )
  {
    p_GlyphHTable = &this->GlyphHTable;
    *(_OWORD *)&result->Param.pFont = *(_OWORD *)&gp->pFont;
    *(_QWORD *)&result->Param.BlurY = *(_QWORD *)&gp->BlurY;
    v19->Origin.x = 0;
    v19->Origin.y = 0;
    pSlot = v19->pSlot;
    pSlot->pPrev->pNext = pSlot->pNext;
    pSlot->pNext->Scaleform::ListNode<Scaleform::Render::GlyphSlot>::$19EFFF1FCB293ECE1CA932C9014AE38B::pPrev = pSlot->pPrev;
    pSlot->pPrev = this->SlotQueue.Root.pPrev;
    pSlot->pNext = (Scaleform::Render::GlyphSlot *)&this->SlotQueue;
    this->SlotQueue.Root.pPrev->pNext = pSlot;
    p_Param = &v19->Param;
    this->SlotQueue.Root.pPrev = pSlot;
    pTable = this->GlyphHTable.mHash.pTable;
    key.Param = p_Param;
    if ( pTable
      && (v13 = Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeHashF,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::GlyphParamHash,75>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeHashF>>::findIndexCore<Scaleform::Render::GlyphParamHash>(
                  &p_GlyphHTable->mHash,
                  &key,
                  pTable->SizeMask & ((__int64)p_Param->pFont ^ ((unsigned __int64)p_Param->pFont >> 6) ^ p_Param->GlyphIndex ^ p_Param->FontSize ^ p_Param->Flags ^ p_Param->BlurX ^ p_Param->BlurStrength ^ (2i64 * p_Param->BlurY))),
          v13 >= 0) )
    {
      v14 = &pTable[2 * v13 + 2];
    }
    else
    {
      v14 = 0i64;
    }
    p_SizeMask = &v14->SizeMask;
    if ( !v14 )
      p_SizeMask = 0i64;
    if ( !p_SizeMask )
    {
      BlurY = p_Param->BlurY;
      v18.pFirst = &key;
      v18.pSecond = &v19;
      Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeHashF,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::GlyphParamHash,75>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeHashF>>::add<Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeRef>(
        &p_GlyphHTable->mHash,
        p_GlyphHTable,
        &v18,
        (unsigned __int64)p_Param->pFont ^ ((unsigned __int64)p_Param->pFont >> 6) ^ p_Param->GlyphIndex ^ p_Param->FontSize ^ p_Param->Flags ^ p_Param->BlurX ^ p_Param->BlurStrength ^ (unsigned __int64)(2 * BlurY));
      return v19;
    }
    return (Scaleform::Render::GlyphNode *)p_Param;
  }
  return result;
}

void __fastcall Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeHashF,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::GlyphParamHash,75>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeHashF>>::CheckExpand(
        Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeHashF,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::GlyphParamHash,75>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeHashF> > *this,
        void *pmemAddr)
{
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeHashF,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::GlyphParamHash,75>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeHashF> >::TableType *pTable; // rax
  unsigned __int64 SizeMask; // r8

  pTable = this->pTable;
  if ( this->pTable )
  {
    SizeMask = pTable->SizeMask;
    if ( 5 * pTable->EntryCount > 4 * SizeMask + 4 )
      Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeHashF,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::GlyphParamHash,75>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeHashF>>::setRawCapacity(
        this,
        pmemAddr,
        2 * SizeMask + 2);
  }
  else
  {
    Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeHashF,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::GlyphParamHash,75>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeHashF>>::setRawCapacity(
      this,
      pmemAddr,
      8ui64);
  }
}

void __fastcall Scaleform::Render::GlyphQueue::CleanUpFont(
        Scaleform::Render::GlyphQueue *this,
        const Scaleform::Render::FontCacheHandle *font)
{
  Scaleform::Render::GlyphSlot *pNext; // rbx
  Scaleform::List<Scaleform::Render::GlyphSlot,Scaleform::Render::GlyphSlot,Scaleform::ListNode<Scaleform::Render::GlyphSlot> > *p_SlotQueue; // rbp
  Scaleform::Render::GlyphNode *pRoot; // rdi
  Scaleform::Render::GlyphSlot *v7; // rsi
  const Scaleform::Render::GlyphNode *FontInSlot; // rax
  Scaleform::Render::Fence *v9; // rax
  Scaleform::Render::Fence *v10; // rax
  Scaleform::Render::Fence *pObject; // rcx

  pNext = this->SlotQueue.Root.pNext;
  p_SlotQueue = &this->SlotQueue;
  if ( pNext != (Scaleform::Render::GlyphSlot *)&this->SlotQueue )
  {
    do
    {
      pRoot = pNext->pRoot;
      v7 = pNext->pNext;
      if ( pRoot )
      {
        if ( pRoot->Param.pFont != font )
        {
          FontInSlot = Scaleform::Render::GlyphQueue::findFontInSlot(pRoot->pNext, font);
          if ( !FontInSlot )
            FontInSlot = Scaleform::Render::GlyphQueue::findFontInSlot(pRoot->pNex2, font);
          pRoot = (Scaleform::Render::GlyphNode *)FontInSlot;
        }
        if ( pRoot )
        {
          if ( !pNext->PinCount
            && ((v9 = pNext->SlotFence.pObject) != 0i64
             && (!v9->HasData || !v9->Data || Scaleform::Render::FenceImpl::WaitFence(v9->Data, FenceType_Fragment))
             || (v10 = pNext->SlotFence.pObject) == 0i64
             || !v10->HasData
             || !v10->Data
             || !Scaleform::Render::FenceImpl::IsPending(v10->Data, FenceType_Fragment)) )
          {
            pObject = pNext->SlotFence.pObject;
            if ( pObject )
              Scaleform::Render::Fence::Release(pObject);
            pNext->SlotFence.pObject = 0i64;
          }
          Scaleform::Render::GlyphQueue::releaseSlot(this, pNext);
          pNext->pPrev->pNext = pNext->pNext;
          pNext->pNext->Scaleform::ListNode<Scaleform::Render::GlyphSlot>::$19EFFF1FCB293ECE1CA932C9014AE38B::pPrev = pNext->pPrev;
          pNext->pNext = p_SlotQueue->Root.pNext;
          pNext->pPrev = (Scaleform::Render::GlyphSlot *)p_SlotQueue;
          p_SlotQueue->Root.pNext->pPrev = pNext;
          p_SlotQueue->Root.pNext = pNext;
        }
      }
      pNext = v7;
    }
    while ( v7 != (Scaleform::Render::GlyphSlot *)p_SlotQueue );
  }
}

void __fastcall Scaleform::Render::GlyphQueue::CleanUpTexture(
        Scaleform::Render::GlyphQueue *this,
        unsigned int textureId)
{
  Scaleform::Render::GlyphSlot *pNext; // rbx
  Scaleform::List<Scaleform::Render::GlyphSlot,Scaleform::Render::GlyphSlot,Scaleform::ListNode<Scaleform::Render::GlyphSlot> > *p_SlotQueue; // rsi
  Scaleform::Render::GlyphSlot *v6; // rdi

  pNext = this->SlotQueue.Root.pNext;
  p_SlotQueue = &this->SlotQueue;
  if ( pNext != (Scaleform::Render::GlyphSlot *)&this->SlotQueue )
  {
    do
    {
      v6 = pNext->pNext;
      if ( (pNext->TextureId & 0x7FFF) == textureId )
      {
        Scaleform::Render::GlyphQueue::releaseSlot(this, pNext);
        pNext->pPrev->pNext = pNext->pNext;
        pNext->pNext->Scaleform::ListNode<Scaleform::Render::GlyphSlot>::$19EFFF1FCB293ECE1CA932C9014AE38B::pPrev = pNext->pPrev;
        pNext->pNext = p_SlotQueue->Root.pNext;
        pNext->pPrev = (Scaleform::Render::GlyphSlot *)p_SlotQueue;
        p_SlotQueue->Root.pNext->pPrev = pNext;
        p_SlotQueue->Root.pNext = pNext;
      }
      pNext = v6;
    }
    while ( v6 != (Scaleform::Render::GlyphSlot *)p_SlotQueue );
  }
  Scaleform::Render::GlyphQueue::MergeEmptySlots(this);
}

void __fastcall Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::AS3::TR::NodeBlock *,Scaleform::List<Scaleform::GFx::AS3::TR::Range,Scaleform::GFx::AS3::TR::Range,Scaleform::ListNode<Scaleform::GFx::AS3::TR::Range>> *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *>>,Scaleform::HashNode<Scaleform::GFx::AS3::TR::NodeBlock *,Scaleform::List<Scaleform::GFx::AS3::TR::Range,Scaleform::GFx::AS3::TR::Range,Scaleform::ListNode<Scaleform::GFx::AS3::TR::Range>> *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *>>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::AS3::TR::NodeBlock *,Scaleform::List<Scaleform::GFx::AS3::TR::Range,Scaleform::GFx::AS3::TR::Range,Scaleform::ListNode<Scaleform::GFx::AS3::TR::Range>> *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *>>::NodeAltHashF,Scaleform::AllocatorDH<Scaleform::HashNode<Scaleform::GFx::AS3::TR::NodeBlock *,Scaleform::List<Scaleform::GFx::AS3::TR::Range,Scaleform::GFx::AS3::TR::Range,Scaleform::ListNode<Scaleform::GFx::AS3::TR::Range>> *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *>>,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::AS3::TR::NodeBlock *,Scaleform::List<Scaleform::GFx::AS3::TR::Range,Scaleform::GFx::AS3::TR::Range,Scaleform::ListNode<Scaleform::GFx::AS3::TR::Range>> *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *>>,Scaleform::HashNode<Scaleform::GFx::AS3::TR::NodeBlock *,Scaleform::List<Scaleform::GFx::AS3::TR::Range,Scaleform::GFx::AS3::TR::Range,Scaleform::ListNode<Scaleform::GFx::AS3::TR::Range>> *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *>>::NodeHashF>>::Clear(
        Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::AS3::TR::NodeBlock *,Scaleform::List<Scaleform::GFx::AS3::TR::Range,Scaleform::GFx::AS3::TR::Range,Scaleform::ListNode<Scaleform::GFx::AS3::TR::Range> > *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *> >,Scaleform::HashNode<Scaleform::GFx::AS3::TR::NodeBlock *,Scaleform::List<Scaleform::GFx::AS3::TR::Range,Scaleform::GFx::AS3::TR::Range,Scaleform::ListNode<Scaleform::GFx::AS3::TR::Range> > *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *> >::NodeHashF,Scaleform::HashNode<Scaleform::GFx::AS3::TR::NodeBlock *,Scaleform::List<Scaleform::GFx::AS3::TR::Range,Scaleform::GFx::AS3::TR::Range,Scaleform::ListNode<Scaleform::GFx::AS3::TR::Range> > *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *> >::NodeAltHashF,Scaleform::AllocatorDH<Scaleform::HashNode<Scaleform::GFx::AS3::TR::NodeBlock *,Scaleform::List<Scaleform::GFx::AS3::TR::Range,Scaleform::GFx::AS3::TR::Range,Scaleform::ListNode<Scaleform::GFx::AS3::TR::Range> > *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *> >,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::AS3::TR::NodeBlock *,Scaleform::List<Scaleform::GFx::AS3::TR::Range,Scaleform::GFx::AS3::TR::Range,Scaleform::ListNode<Scaleform::GFx::AS3::TR::Range> > *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *> >,Scaleform::HashNode<Scaleform::GFx::AS3::TR::NodeBlock *,Scaleform::List<Scaleform::GFx::AS3::TR::Range,Scaleform::GFx::AS3::TR::Range,Scaleform::ListNode<Scaleform::GFx::AS3::TR::Range> > *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *> >::NodeHashF> > *this)
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
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->pTable);
    this->pTable = 0i64;
  }
}

void __fastcall Scaleform::Render::GlyphQueue::Clear(Scaleform::Render::GlyphQueue *this)
{
  Scaleform::Render::GlyphSlot *pNext; // rdi
  Scaleform::List<Scaleform::Render::GlyphSlot,Scaleform::Render::GlyphSlot,Scaleform::ListNode<Scaleform::Render::GlyphSlot> > *i; // r14
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeHashF,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::GlyphParamHash,75>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeHashF> >::TableType *pTable; // rax
  __int64 v5; // rcx
  __int64 v6; // rdx
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeHashF,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::GlyphParamHash,75>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeHashF> >::TableType *v7; // rax
  __int64 v8; // r8
  __int64 v9; // rcx
  Scaleform::List2<Scaleform::Render::GlyphSlot,Scaleform::Render::GlyphSlot_Band> *p_Slots; // rdx
  Scaleform::ListAllocBase<Scaleform::Render::GlyphSlot,127,Scaleform::AllocatorLH_POD<Scaleform::Render::GlyphSlot,75> >::PageType *FirstPage; // rdx
  Scaleform::ListAllocBase<Scaleform::Render::GlyphSlot,127,Scaleform::AllocatorLH_POD<Scaleform::Render::GlyphSlot,75> >::PageType *v12; // rdi
  Scaleform::ListAllocBase<Scaleform::Render::GlyphNode,127,Scaleform::AllocatorLH_POD<Scaleform::Render::GlyphNode,75> >::PageType *v13; // rdx
  Scaleform::ListAllocBase<Scaleform::Render::GlyphNode,127,Scaleform::AllocatorLH_POD<Scaleform::Render::GlyphNode,75> >::PageType *v14; // rdi

  pNext = this->SlotQueue.Root.pNext;
  for ( i = &this->SlotQueue; pNext != (Scaleform::Render::GlyphSlot *)i; pNext = pNext->pNext )
  {
    while ( (Scaleform::List<Scaleform::Render::TextNotifier,Scaleform::Render::TextNotifier,Scaleform::ListNode<Scaleform::Render::TextNotifier> > *)pNext->TextFields.Root.pNext != &pNext->TextFields )
      this->pEvictNotifier->Evict(this->pEvictNotifier, pNext->TextFields.Root.pNext->pText);
  }
  pTable = this->GlyphHTable.mHash.pTable;
  if ( pTable )
  {
    v5 = 0i64;
    v6 = pTable->SizeMask + 1;
    do
    {
      v7 = this->GlyphHTable.mHash.pTable;
      if ( v7[v5 + 1].EntryCount != -2i64 )
        v7[v5 + 1].EntryCount = -2i64;
      v5 += 2i64;
      --v6;
    }
    while ( v6 );
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->GlyphHTable.mHash.pTable);
    this->GlyphHTable.mHash.pTable = 0i64;
  }
  i->Root.pPrev = (Scaleform::Render::GlyphSlot *)i;
  i->Root.pNext = (Scaleform::Render::GlyphSlot *)i;
  v8 = 0i64;
  this->ActiveSlots.Root.pPrevActive = &this->ActiveSlots.Root;
  for ( this->ActiveSlots.Root.pNextActive = &this->ActiveSlots.Root;
        (unsigned int)v8 < this->NumUsedBands;
        p_Slots->Root.pNextInBand = &p_Slots->Root )
  {
    v9 = (unsigned int)v8;
    v8 = (unsigned int)(v8 + 1);
    p_Slots = &this->Bands.Data[v9].Slots;
    p_Slots->Root.pPrevInBand = &p_Slots->Root;
  }
  FirstPage = this->Slots.FirstPage;
  if ( FirstPage )
  {
    do
    {
      v12 = FirstPage->pNext;
      ((void (__fastcall *)(Scaleform::MemoryHeap *, Scaleform::ListAllocBase<Scaleform::Render::GlyphSlot,127,Scaleform::AllocatorLH_POD<Scaleform::Render::GlyphSlot,75> >::PageType *, __int64))Scaleform::Memory::pGlobalHeap->Free)(
        Scaleform::Memory::pGlobalHeap,
        FirstPage,
        v8);
      FirstPage = v12;
    }
    while ( v12 );
  }
  this->Slots.FirstPage = 0i64;
  this->Slots.LastPage = 0i64;
  this->Slots.NumElementsInPage = 127;
  this->Slots.FirstEmptySlot = 0i64;
  v13 = this->Glyphs.FirstPage;
  if ( v13 )
  {
    do
    {
      v14 = v13->pNext;
      ((void (__fastcall *)(Scaleform::MemoryHeap *, Scaleform::ListAllocBase<Scaleform::Render::GlyphNode,127,Scaleform::AllocatorLH_POD<Scaleform::Render::GlyphNode,75> >::PageType *, __int64))Scaleform::Memory::pGlobalHeap->Free)(
        Scaleform::Memory::pGlobalHeap,
        v13,
        v8);
      v13 = v14;
    }
    while ( v14 );
  }
  this->Glyphs.FirstPage = 0i64;
  this->Glyphs.LastPage = 0i64;
  this->Glyphs.FirstEmptySlot = 0i64;
  this->Glyphs.NumElementsInPage = 127;
  this->SlotQueueSize = 0;
  this->NumUsedBands = 0;
}

Scaleform::Render::TextNotifier *__fastcall Scaleform::Render::GlyphQueue::CreateNotifier(
        Scaleform::Render::GlyphQueue *this,
        Scaleform::Render::GlyphNode *node,
        Scaleform::Render::TextMeshProvider *tm)
{
  Scaleform::Render::GlyphSlot *pSlot; // rsi
  Scaleform::Render::TextNotifier *pPrev; // rax
  Scaleform::Render::TextNotifier *p_TextFields; // rbx
  Scaleform::Render::TextNotifier *result; // rax
  Scaleform::Render::TextNotifier *v8; // rcx

  pSlot = node->pSlot;
  pPrev = pSlot->TextFields.Root.pPrev;
  p_TextFields = (Scaleform::Render::TextNotifier *)&pSlot->TextFields;
  if ( pPrev != (Scaleform::Render::TextNotifier *)&pSlot->TextFields && tm == pPrev->pText )
    return 0i64;
  result = Scaleform::ListAllocBase<Scaleform::Render::TextNotifier,127,Scaleform::AllocatorLH_POD<Scaleform::Render::TextNotifier,75>>::allocate(&this->Notifiers);
  result->pSlot = pSlot;
  result->pText = tm;
  v8 = p_TextFields->pPrev;
  result->pNext = p_TextFields;
  result->pPrev = v8;
  p_TextFields->pPrev->pNext = result;
  p_TextFields->pPrev = result;
  return result;
}

Scaleform::Render::GlyphNode *__fastcall Scaleform::Render::GlyphQueue::FindGlyph(
        Scaleform::Render::GlyphQueue *this,
        const Scaleform::Render::GlyphParam *gp)
{
  Scaleform::HashLH<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash,75,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeHashF> > *p_GlyphHTable; // rcx
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeHashF,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::GlyphParamHash,75>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeHashF> > v4; // rbx
  signed __int64 v5; // rax
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeHashF,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::GlyphParamHash,75>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeHashF> >::TableType *v6; // rax
  unsigned __int64 *p_SizeMask; // rcx
  Scaleform::Render::GlyphNode *result; // rax
  Scaleform::Render::GlyphSlot *v9; // r9
  Scaleform::Render::GlyphParamHash key; // [rsp+30h] [rbp+8h] BYREF

  key.Param = gp;
  p_GlyphHTable = &this->GlyphHTable;
  v4.pTable = p_GlyphHTable->mHash.pTable;
  if ( p_GlyphHTable->mHash.pTable
    && (v5 = Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeHashF,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::GlyphParamHash,75>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeHashF>>::findIndexCore<Scaleform::Render::GlyphParamHash>(
               &p_GlyphHTable->mHash,
               &key,
               v4.pTable->SizeMask & ((__int64)gp->pFont ^ ((unsigned __int64)gp->pFont >> 6) ^ gp->GlyphIndex ^ gp->FontSize ^ gp->Flags ^ gp->BlurX ^ gp->BlurStrength ^ (2i64 * gp->BlurY))),
        v5 >= 0) )
  {
    v6 = &v4.pTable[2 * v5 + 2];
  }
  else
  {
    v6 = 0i64;
  }
  p_SizeMask = &v6->SizeMask;
  if ( !v6 )
    p_SizeMask = 0i64;
  if ( !p_SizeMask )
    return 0i64;
  result = (Scaleform::Render::GlyphNode *)*p_SizeMask;
  v9 = *(Scaleform::Render::GlyphSlot **)(*p_SizeMask + 24);
  v9->pPrev->pNext = v9->pNext;
  v9->pNext->Scaleform::ListNode<Scaleform::Render::GlyphSlot>::$19EFFF1FCB293ECE1CA932C9014AE38B::pPrev = v9->pPrev;
  v9->pPrev = this->SlotQueue.Root.pPrev;
  v9->pNext = (Scaleform::Render::GlyphSlot *)&this->SlotQueue;
  this->SlotQueue.Root.pPrev->pNext = v9;
  this->SlotQueue.Root.pPrev = v9;
  return result;
}

void __fastcall Scaleform::Render::GlyphQueue::Init(
        Scaleform::Render::GlyphQueue *this,
        Scaleform::Render::GlyphEvictNotifier *notifier,
        unsigned int firstTexture,
        unsigned int numTextures,
        unsigned int textureWidth,
        unsigned int textureHeight,
        unsigned int maxSlotHeight,
        bool fenceWaitOnFull)
{
  unsigned __int64 v12; // rdi

  Scaleform::Render::GlyphQueue::Clear(this);
  this->TextureWidth = textureWidth;
  this->TextureHeight = textureHeight;
  this->MaxSlotHeight = maxSlotHeight;
  this->NumBandsInTexture = textureHeight / maxSlotHeight;
  this->FenceWaitOnFullCache = fenceWaitOnFull;
  this->NumTextures = numTextures;
  this->FirstTexture = firstTexture;
  v12 = numTextures * (textureHeight / maxSlotHeight);
  Scaleform::ArrayUnsafeBase<Scaleform::Render::GlyphBand,Scaleform::AllocatorLH_POD<Scaleform::Render::GlyphBand,75>>::Reserve(
    &this->Bands,
    v12,
    0i64);
  this->Bands.Size = v12;
  this->pEvictNotifier = notifier;
}

void __fastcall Scaleform::Render::GlyphQueue::MergeEmptySlots(Scaleform::Render::GlyphQueue *this)
{
  unsigned __int64 v1; // r14
  __int64 v3; // r15
  Scaleform::Render::GlyphBand *Data; // rax
  Scaleform::Render::GlyphSlot *pNextInBand; // rdi
  Scaleform::List2<Scaleform::Render::GlyphSlot,Scaleform::Render::GlyphSlot_Band> *p_Slots; // rbp
  Scaleform::Render::GlyphSlot *v7; // rbx
  Scaleform::ListAllocBase<Scaleform::Render::GlyphNode,127,Scaleform::AllocatorLH_POD<Scaleform::Render::GlyphNode,75> >::NodeType *pRoot; // rcx
  unsigned __int16 v9; // dx
  Scaleform::Render::GlyphNode *v10; // rcx
  unsigned __int16 x; // ax

  v1 = 0i64;
  if ( this->NumUsedBands )
  {
    v3 = 0i64;
    do
    {
      Data = this->Bands.Data;
      pNextInBand = Data[v3].Slots.Root.pNextInBand;
      p_Slots = &Data[v3].Slots;
      while ( pNextInBand != (Scaleform::Render::GlyphSlot *)p_Slots )
      {
        v7 = pNextInBand->pNextInBand;
        if ( v7 == (Scaleform::Render::GlyphSlot *)p_Slots )
          break;
        if ( (__int64)v7->pRoot->pNext | (__int64)v7->pRoot->pNex2 | (__int64)pNextInBand->pRoot->pNext | (__int64)pNextInBand->pRoot->pNex2 )
        {
          pNextInBand = pNextInBand->pNextInBand;
        }
        else
        {
          Scaleform::Render::GlyphQueue::releaseSlot(this, pNextInBand);
          Scaleform::Render::GlyphQueue::releaseSlot(this, v7);
          pRoot = (Scaleform::ListAllocBase<Scaleform::Render::GlyphNode,127,Scaleform::AllocatorLH_POD<Scaleform::Render::GlyphNode,75> >::NodeType *)v7->pRoot;
          v9 = pNextInBand->w + v7->w;
          pRoot->pNext = this->Glyphs.FirstEmptySlot;
          this->Glyphs.FirstEmptySlot = pRoot;
          v7->pPrev->pNext = v7->pNext;
          v7->pNext->Scaleform::ListNode<Scaleform::Render::GlyphSlot>::$19EFFF1FCB293ECE1CA932C9014AE38B::pPrev = v7->pPrev;
          --this->SlotQueueSize;
          if ( (v7->TextureId & 0x8000u) == 0 )
          {
            v7->pPrevActive->pNextActive = v7->pNextActive;
            v7->pNextActive->pPrevActive = v7->pPrevActive;
          }
          v7->pPrevInBand->pNextInBand = v7->pNextInBand;
          v7->pNextInBand->pPrevInBand = v7->pPrevInBand;
          v7->pPrev = (Scaleform::Render::GlyphSlot *)this->Slots.FirstEmptySlot;
          this->Slots.FirstEmptySlot = (Scaleform::ListAllocBase<Scaleform::Render::GlyphSlot,127,Scaleform::AllocatorLH_POD<Scaleform::Render::GlyphSlot,75> >::NodeType *)v7;
          v10 = pNextInBand->pRoot;
          x = pNextInBand->x;
          pNextInBand->w = v9;
          v10->mRect.x = x;
          pNextInBand->pRoot->mRect.y = pNextInBand->pBand->y;
          pNextInBand->pRoot->mRect.w = v9;
          pNextInBand->pRoot->mRect.h = pNextInBand->pBand->h;
          pNextInBand->pPrev->pNext = pNextInBand->pNext;
          pNextInBand->pNext->Scaleform::ListNode<Scaleform::Render::GlyphSlot>::$19EFFF1FCB293ECE1CA932C9014AE38B::pPrev = pNextInBand->pPrev;
          pNextInBand->pNext = this->SlotQueue.Root.pNext;
          pNextInBand->pPrev = (Scaleform::Render::GlyphSlot *)&this->SlotQueue;
          this->SlotQueue.Root.pNext->pPrev = pNextInBand;
          this->SlotQueue.Root.pNext = pNextInBand;
        }
      }
      ++v1;
      ++v3;
    }
    while ( v1 < this->NumUsedBands );
  }
}

void __fastcall Scaleform::Render::GlyphQueue::PinSlot(Scaleform::Render::GlyphSlot *slot)
{
  ++slot->PinCount;
}

void __fastcall Scaleform::Render::GlyphQueue::RemoveNotifier(
        Scaleform::Render::GlyphQueue *this,
        Scaleform::Render::TextNotifier *notifier)
{
  notifier->pPrev->pNext = notifier->pNext;
  notifier->pNext->Scaleform::ListNode<Scaleform::Render::TextNotifier>::$01DB6CF22C7BDC58B14089C0594FCE40::pPrev = notifier->pPrev;
  notifier->pPrev = (Scaleform::Render::TextNotifier *)-1i64;
  notifier->pNext = (Scaleform::Render::TextNotifier *)-1i64;
  notifier->pPrev = (Scaleform::Render::TextNotifier *)this->Notifiers.FirstEmptySlot;
  this->Notifiers.FirstEmptySlot = (Scaleform::ListAllocBase<Scaleform::Render::TextNotifier,127,Scaleform::AllocatorLH_POD<Scaleform::Render::TextNotifier,75> >::NodeType *)notifier;
}

void __fastcall Scaleform::ArrayUnsafeBase<Scaleform::Render::GlyphBand,Scaleform::AllocatorLH_POD<Scaleform::Render::GlyphBand,75>>::Reserve(
        Scaleform::ArrayUnsafeBase<Scaleform::Render::GlyphBand,Scaleform::AllocatorLH_POD<Scaleform::Render::GlyphBand,75> > *this,
        unsigned __int64 cap,
        unsigned __int64 extraTail)
{
  int v6; // [rsp+30h] [rbp+8h] BYREF

  if ( cap <= this->Capacity )
  {
    this->Size = 0i64;
  }
  else
  {
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->Data);
    this->Capacity = cap + extraTail;
    if ( cap + extraTail )
    {
      v6 = 75;
      this->Data = (Scaleform::Render::GlyphBand *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                                     Scaleform::Memory::pGlobalHeap,
                                                     this,
                                                     112 * (cap + extraTail),
                                                     &v6);
    }
    else
    {
      this->Data = 0i64;
    }
    this->Size = 0i64;
  }
}

void __fastcall Scaleform::Render::GlyphQueue::UnpinAllSlots(Scaleform::Render::GlyphQueue *this)
{
  Scaleform::Render::GlyphSlot *pNext; // rbx
  Scaleform::List<Scaleform::Render::GlyphSlot,Scaleform::Render::GlyphSlot,Scaleform::ListNode<Scaleform::Render::GlyphSlot> > *i; // rdi
  Scaleform::Render::Fence *pObject; // rax
  Scaleform::Render::Fence *v4; // rax
  Scaleform::Render::Fence *v5; // rcx

  pNext = this->SlotQueue.Root.pNext;
  for ( i = &this->SlotQueue; pNext != (Scaleform::Render::GlyphSlot *)i; pNext = pNext->pNext )
  {
    pObject = pNext->SlotFence.pObject;
    pNext->PinCount = 0;
    if ( pObject
      && (!pObject->HasData
       || !pObject->Data
       || Scaleform::Render::FenceImpl::WaitFence(pObject->Data, FenceType_Fragment))
      || (v4 = pNext->SlotFence.pObject) == 0i64
      || !v4->HasData
      || !v4->Data
      || !Scaleform::Render::FenceImpl::IsPending(v4->Data, FenceType_Fragment) )
    {
      v5 = pNext->SlotFence.pObject;
      if ( v5 )
        Scaleform::Render::Fence::Release(v5);
      pNext->SlotFence.pObject = 0i64;
    }
  }
}

void __fastcall Scaleform::Render::GlyphQueue::UnpinSlot(
        Scaleform::Render::GlyphSlot *slot,
        Scaleform::Render::Fence *fence)
{
  Scaleform::Render::Fence *pObject; // rax
  Scaleform::Render::Fence *v5; // rcx

  if ( fence )
  {
    if ( fence->HasData )
    {
      if ( fence->Data )
      {
        if ( Scaleform::Render::FenceImpl::IsPending(fence->Data, FenceType_Fragment) )
        {
          pObject = slot->SlotFence.pObject;
          if ( !pObject
            || fence->Data && (!pObject->Data || Scaleform::Render::FenceImpl::operator>(fence->Data, pObject->Data)) )
          {
            ++fence->RefCount;
            v5 = slot->SlotFence.pObject;
            if ( v5 )
              Scaleform::Render::Fence::Release(v5);
            slot->SlotFence.pObject = fence;
          }
        }
      }
    }
  }
  --slot->PinCount;
}

Scaleform::ListAllocBase<Scaleform::Render::GlyphNode,127,Scaleform::AllocatorLH_POD<Scaleform::Render::GlyphNode,75> >::PageType *__fastcall Scaleform::ListAllocBase<Scaleform::Render::GlyphNode,127,Scaleform::AllocatorLH_POD<Scaleform::Render::GlyphNode,75>>::allocate(
        Scaleform::ListAllocBase<Scaleform::Render::GlyphNode,127,Scaleform::AllocatorLH_POD<Scaleform::Render::GlyphNode,75> > *this)
{
  Scaleform::ListAllocBase<Scaleform::Render::GlyphNode,127,Scaleform::AllocatorLH_POD<Scaleform::Render::GlyphNode,75> >::PageType *result; // rax
  unsigned int NumElementsInPage; // eax
  Scaleform::ListAllocBase<Scaleform::Render::GlyphNode,127,Scaleform::AllocatorLH_POD<Scaleform::Render::GlyphNode,75> >::PageType *v4; // rdx
  void *pHeapOrPtr; // rdx
  Scaleform::ListAllocBase<Scaleform::Render::GlyphNode,127,Scaleform::AllocatorLH_POD<Scaleform::Render::GlyphNode,75> >::PageType *LastPage; // rcx
  int v7; // [rsp+30h] [rbp+8h] BYREF

  result = (Scaleform::ListAllocBase<Scaleform::Render::GlyphNode,127,Scaleform::AllocatorLH_POD<Scaleform::Render::GlyphNode,75> >::PageType *)this->FirstEmptySlot;
  if ( result )
  {
    this->FirstEmptySlot = (Scaleform::ListAllocBase<Scaleform::Render::GlyphNode,127,Scaleform::AllocatorLH_POD<Scaleform::Render::GlyphNode,75> >::NodeType *)result->Data[0].Param.pFont;
  }
  else
  {
    NumElementsInPage = this->NumElementsInPage;
    if ( NumElementsInPage >= 0x7F )
    {
      pHeapOrPtr = this->pHeapOrPtr;
      v7 = 75;
      result = (Scaleform::ListAllocBase<Scaleform::Render::GlyphNode,127,Scaleform::AllocatorLH_POD<Scaleform::Render::GlyphNode,75> >::PageType *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(Scaleform::Memory::pGlobalHeap, pHeapOrPtr, 8136i64, &v7);
      result->pNext = 0i64;
      LastPage = this->LastPage;
      if ( LastPage )
        LastPage->pNext = result;
      else
        this->FirstPage = result;
      this->LastPage = result;
      this->NumElementsInPage = 1;
    }
    else
    {
      v4 = this->LastPage;
      if ( v4 )
      {
        this->NumElementsInPage = NumElementsInPage + 1;
        return (Scaleform::ListAllocBase<Scaleform::Render::GlyphNode,127,Scaleform::AllocatorLH_POD<Scaleform::Render::GlyphNode,75> >::PageType *)((char *)v4 + 64 * (unsigned __int64)NumElementsInPage);
      }
      else
      {
        return 0i64;
      }
    }
  }
  return result;
}

Scaleform::ListAllocBase<Scaleform::Render::GlyphSlot,127,Scaleform::AllocatorLH_POD<Scaleform::Render::GlyphSlot,75> >::PageType *__fastcall Scaleform::ListAllocBase<Scaleform::Render::GlyphSlot,127,Scaleform::AllocatorLH_POD<Scaleform::Render::GlyphSlot,75>>::allocate(
        Scaleform::ListAllocBase<Scaleform::Render::GlyphSlot,127,Scaleform::AllocatorLH_POD<Scaleform::Render::GlyphSlot,75> > *this)
{
  Scaleform::ListAllocBase<Scaleform::Render::GlyphSlot,127,Scaleform::AllocatorLH_POD<Scaleform::Render::GlyphSlot,75> >::PageType *result; // rax
  __int64 NumElementsInPage; // rdx
  Scaleform::ListAllocBase<Scaleform::Render::GlyphSlot,127,Scaleform::AllocatorLH_POD<Scaleform::Render::GlyphSlot,75> >::PageType *v4; // r8
  void *pHeapOrPtr; // rdx
  Scaleform::ListAllocBase<Scaleform::Render::GlyphSlot,127,Scaleform::AllocatorLH_POD<Scaleform::Render::GlyphSlot,75> >::PageType *LastPage; // rcx
  int v7; // [rsp+30h] [rbp+8h] BYREF

  result = (Scaleform::ListAllocBase<Scaleform::Render::GlyphSlot,127,Scaleform::AllocatorLH_POD<Scaleform::Render::GlyphSlot,75> >::PageType *)this->FirstEmptySlot;
  if ( result )
  {
    this->FirstEmptySlot = (Scaleform::ListAllocBase<Scaleform::Render::GlyphSlot,127,Scaleform::AllocatorLH_POD<Scaleform::Render::GlyphSlot,75> >::NodeType *)result->Data[0].pPrev;
  }
  else
  {
    NumElementsInPage = this->NumElementsInPage;
    if ( (unsigned int)NumElementsInPage >= 0x7F )
    {
      pHeapOrPtr = this->pHeapOrPtr;
      v7 = 75;
      result = (Scaleform::ListAllocBase<Scaleform::Render::GlyphSlot,127,Scaleform::AllocatorLH_POD<Scaleform::Render::GlyphSlot,75> >::PageType *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(Scaleform::Memory::pGlobalHeap, pHeapOrPtr, 13216i64, &v7);
      result->pNext = 0i64;
      LastPage = this->LastPage;
      if ( LastPage )
        LastPage->pNext = result;
      else
        this->FirstPage = result;
      this->LastPage = result;
      this->NumElementsInPage = 1;
    }
    else
    {
      v4 = this->LastPage;
      if ( v4 )
      {
        this->NumElementsInPage = NumElementsInPage + 1;
        return (Scaleform::ListAllocBase<Scaleform::Render::GlyphSlot,127,Scaleform::AllocatorLH_POD<Scaleform::Render::GlyphSlot,75> >::PageType *)((char *)v4 + 104 * NumElementsInPage);
      }
      else
      {
        return 0i64;
      }
    }
  }
  return result;
}

Scaleform::ListAllocBase<Scaleform::Render::TextNotifier,127,Scaleform::AllocatorLH_POD<Scaleform::Render::TextNotifier,75> >::PageType *__fastcall Scaleform::ListAllocBase<Scaleform::Render::TextNotifier,127,Scaleform::AllocatorLH_POD<Scaleform::Render::TextNotifier,75>>::allocate(
        Scaleform::ListAllocBase<Scaleform::Render::TextNotifier,127,Scaleform::AllocatorLH_POD<Scaleform::Render::TextNotifier,75> > *this)
{
  Scaleform::ListAllocBase<Scaleform::Render::TextNotifier,127,Scaleform::AllocatorLH_POD<Scaleform::Render::TextNotifier,75> >::PageType *result; // rax
  unsigned int NumElementsInPage; // eax
  Scaleform::ListAllocBase<Scaleform::Render::TextNotifier,127,Scaleform::AllocatorLH_POD<Scaleform::Render::TextNotifier,75> >::PageType *v4; // rdx
  void *pHeapOrPtr; // rdx
  Scaleform::ListAllocBase<Scaleform::Render::TextNotifier,127,Scaleform::AllocatorLH_POD<Scaleform::Render::TextNotifier,75> >::PageType *LastPage; // rcx
  int v7; // [rsp+30h] [rbp+8h] BYREF

  result = (Scaleform::ListAllocBase<Scaleform::Render::TextNotifier,127,Scaleform::AllocatorLH_POD<Scaleform::Render::TextNotifier,75> >::PageType *)this->FirstEmptySlot;
  if ( result )
  {
    this->FirstEmptySlot = (Scaleform::ListAllocBase<Scaleform::Render::TextNotifier,127,Scaleform::AllocatorLH_POD<Scaleform::Render::TextNotifier,75> >::NodeType *)result->Data[0].pPrev;
  }
  else
  {
    NumElementsInPage = this->NumElementsInPage;
    if ( NumElementsInPage >= 0x7F )
    {
      pHeapOrPtr = this->pHeapOrPtr;
      v7 = 75;
      result = (Scaleform::ListAllocBase<Scaleform::Render::TextNotifier,127,Scaleform::AllocatorLH_POD<Scaleform::Render::TextNotifier,75> >::PageType *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(Scaleform::Memory::pGlobalHeap, pHeapOrPtr, 4072i64, &v7);
      result->pNext = 0i64;
      LastPage = this->LastPage;
      if ( LastPage )
        LastPage->pNext = result;
      else
        this->FirstPage = result;
      this->LastPage = result;
      this->NumElementsInPage = 1;
    }
    else
    {
      v4 = this->LastPage;
      if ( v4 )
      {
        this->NumElementsInPage = NumElementsInPage + 1;
        return (Scaleform::ListAllocBase<Scaleform::Render::TextNotifier,127,Scaleform::AllocatorLH_POD<Scaleform::Render::TextNotifier,75> >::PageType *)((char *)v4 + 32 * NumElementsInPage);
      }
      else
      {
        return 0i64;
      }
    }
  }
  return result;
}

Scaleform::Render::GlyphNode *__fastcall Scaleform::Render::GlyphQueue::allocateNewSlot(
        Scaleform::Render::GlyphQueue *this,
        unsigned int w,
        unsigned int h)
{
  unsigned __int64 NumUsedBands; // rcx
  unsigned int v7; // edx
  Scaleform::Render::GlyphBand *v8; // r8
  unsigned __int16 v9; // cx
  unsigned int MaxSlotHeight; // ecx
  Scaleform::Render::GlyphBand *v11; // rdi
  unsigned int RightSpace; // ecx
  unsigned int v13; // er9
  Scaleform::Render::GlyphSlot *inited; // r9
  Scaleform::Render::GlyphSlot *pNextActive; // rax

  NumUsedBands = this->NumUsedBands;
  if ( (!(_DWORD)NumUsedBands || this->Bands.Data[(unsigned int)(NumUsedBands - 1)].RightSpace < w)
    && NumUsedBands < this->Bands.Size )
  {
    v7 = (unsigned int)NumUsedBands % this->NumBandsInTexture;
    v8 = &this->Bands.Data[NumUsedBands];
    v8->TextureId = (unsigned int)NumUsedBands / this->NumBandsInTexture + LOWORD(this->FirstTexture);
    v9 = v7 * LOWORD(this->MaxSlotHeight);
    v8->y = v9;
    if ( v7 + 1 == this->NumBandsInTexture )
      LOWORD(MaxSlotHeight) = this->TextureHeight - v9;
    else
      MaxSlotHeight = this->MaxSlotHeight;
    v8->h = MaxSlotHeight;
    v8->RightSpace = this->TextureWidth;
    v8->Slots.Root.pPrevInBand = &v8->Slots.Root;
    v8->Slots.Root.pNextInBand = &v8->Slots.Root;
    ++this->NumUsedBands;
  }
  v11 = &this->Bands.Data[this->NumUsedBands - 1];
  RightSpace = v11->RightSpace;
  if ( w > RightSpace )
    return 0i64;
  v13 = w;
  if ( RightSpace - w < w )
    v13 = v11->RightSpace;
  inited = Scaleform::Render::GlyphQueue::initNewSlot(this, v11, this->TextureWidth - RightSpace, v13);
  v11->RightSpace -= inited->w;
  inited->pPrev = this->SlotQueue.Root.pPrev;
  inited->pNext = (Scaleform::Render::GlyphSlot *)&this->SlotQueue;
  this->SlotQueue.Root.pPrev->pNext = inited;
  this->SlotQueue.Root.pPrev = inited;
  ++this->SlotQueueSize;
  inited->pPrevInBand = v11->Slots.Root.pPrevInBand;
  inited->pNextInBand = &v11->Slots.Root;
  v11->Slots.Root.pPrevInBand->pNextInBand = inited;
  v11->Slots.Root.pPrevInBand = inited;
  pNextActive = this->ActiveSlots.Root.pNextActive;
  inited->pPrevActive = &this->ActiveSlots.Root;
  inited->pNextActive = pNextActive;
  this->ActiveSlots.Root.pNextActive->pPrevActive = inited;
  this->ActiveSlots.Root.pNextActive = inited;
  return Scaleform::Render::GlyphQueue::packGlyph(this, w, h, inited);
}

Scaleform::Render::GlyphNode *__fastcall Scaleform::Render::GlyphQueue::evictOldSlot(
        Scaleform::Render::GlyphQueue *this,
        unsigned int w,
        unsigned int h)
{
  Scaleform::Render::GlyphNode *result; // rax

  this->pEvictNotifier->ApplyInUseList(this->pEvictNotifier);
  result = Scaleform::Render::GlyphQueue::evictOldSlot(this, w, h, 0);
  if ( !result )
  {
    this->pEvictNotifier->UpdatePinList(this->pEvictNotifier);
    return Scaleform::Render::GlyphQueue::evictOldSlot(this, w, h, 1u);
  }
  return result;
}

Scaleform::Render::GlyphNode *__fastcall Scaleform::Render::GlyphQueue::evictOldSlot(
        Scaleform::Render::GlyphQueue *this,
        unsigned int w,
        unsigned int h,
        unsigned int pass)
{
  Scaleform::Render::GlyphSlot *pNext; // rbx
  unsigned int SlotQueueSize; // ebp
  Scaleform::List<Scaleform::Render::GlyphSlot,Scaleform::Render::GlyphSlot,Scaleform::ListNode<Scaleform::Render::GlyphSlot> > *p_SlotQueue; // rdi
  int v10; // esi
  Scaleform::Render::Fence *v11; // rax
  Scaleform::Render::Fence *v12; // rax
  Scaleform::Render::Fence *pObject; // rcx
  Scaleform::Render::GlyphSlot *v14; // rax
  Scaleform::Render::GlyphSlot *i; // rbp
  Scaleform::Render::Fence *v16; // rax
  Scaleform::Render::Fence *v17; // rax
  Scaleform::Render::Fence *v18; // rcx
  Scaleform::Render::GlyphSlot *v19; // rbx
  unsigned int v20; // esi
  Scaleform::Render::GlyphBand *pBand; // r14
  Scaleform::Render::Fence *v22; // rax
  Scaleform::Render::Fence *v23; // rax
  Scaleform::Render::Fence *v24; // rcx
  Scaleform::Render::GlyphSlot *pPrev; // rcx
  Scaleform::List<Scaleform::Render::GlyphSlot,Scaleform::Render::GlyphSlot,Scaleform::ListNode<Scaleform::Render::GlyphSlot> > *v26; // rax
  char v27; // al
  unsigned int v28; // eax
  unsigned __int16 RightSpace; // ax

  pNext = this->SlotQueue.Root.pNext;
  SlotQueueSize = this->SlotQueueSize;
  if ( !pass )
    SlotQueueSize >>= 1;
  p_SlotQueue = &this->SlotQueue;
  v10 = 0;
  while ( pNext != (Scaleform::Render::GlyphSlot *)p_SlotQueue )
  {
    if ( !pNext->PinCount
      && (this->FenceWaitOnFullCache
       && (v11 = pNext->SlotFence.pObject) != 0i64
       && (!v11->HasData || !v11->Data || Scaleform::Render::FenceImpl::WaitFence(v11->Data, FenceType_Fragment))
       || (v12 = pNext->SlotFence.pObject) == 0i64
       || !v12->HasData
       || !v12->Data
       || !Scaleform::Render::FenceImpl::IsPending(v12->Data, FenceType_Fragment)) )
    {
      pObject = pNext->SlotFence.pObject;
      if ( pObject )
        Scaleform::Render::Fence::Release(pObject);
      pNext->SlotFence.pObject = 0i64;
      if ( pNext->w >= w )
      {
        Scaleform::Render::GlyphQueue::releaseSlot(this, pNext);
        return Scaleform::Render::GlyphQueue::packGlyph(this, w, h, pNext);
      }
      v14 = Scaleform::Render::GlyphQueue::mergeSlotWithNeighbor(this, pNext);
      if ( v14 )
      {
        if ( v14->pRoot->mRect.w >= w )
          return Scaleform::Render::GlyphQueue::packGlyph(this, w, h, v14);
        break;
      }
    }
    pNext = pNext->pNext;
    if ( ++v10 > SlotQueueSize )
      break;
  }
  for ( i = this->SlotQueue.Root.pNext; i != (Scaleform::Render::GlyphSlot *)p_SlotQueue; i = i->pNext )
  {
    if ( !i->PinCount
      && (this->FenceWaitOnFullCache
       && (v16 = i->SlotFence.pObject) != 0i64
       && (!v16->HasData || !v16->Data || Scaleform::Render::FenceImpl::WaitFence(v16->Data, FenceType_Fragment))
       || (v17 = i->SlotFence.pObject) == 0i64
       || !v17->HasData
       || !v17->Data
       || !Scaleform::Render::FenceImpl::IsPending(v17->Data, FenceType_Fragment)) )
    {
      v18 = i->SlotFence.pObject;
      if ( v18 )
        Scaleform::Render::Fence::Release(v18);
      v19 = i;
      i->SlotFence.pObject = 0i64;
      v20 = 0;
      pBand = i->pBand;
      if ( i != (Scaleform::Render::GlyphSlot *)&pBand->Slots )
      {
        do
        {
          if ( v19->PinCount )
            break;
          if ( !this->FenceWaitOnFullCache
            || (v22 = v19->SlotFence.pObject) == 0i64
            || v22->HasData && v22->Data && !Scaleform::Render::FenceImpl::WaitFence(v22->Data, FenceType_Fragment) )
          {
            v23 = v19->SlotFence.pObject;
            if ( v23 )
            {
              if ( v23->HasData && v23->Data && Scaleform::Render::FenceImpl::IsPending(v23->Data, FenceType_Fragment) )
                break;
            }
          }
          v24 = v19->SlotFence.pObject;
          if ( v24 )
            Scaleform::Render::Fence::Release(v24);
          v19->SlotFence.pObject = 0i64;
          if ( pass
            || (pPrev = v19,
                v26 = (Scaleform::List<Scaleform::Render::GlyphSlot,Scaleform::Render::GlyphSlot,Scaleform::ListNode<Scaleform::Render::GlyphSlot> > *)v19,
                v19 == (Scaleform::Render::GlyphSlot *)p_SlotQueue) )
          {
LABEL_50:
            v27 = 1;
          }
          else
          {
            while ( v26 != p_SlotQueue )
            {
              pPrev = pPrev->pPrev;
              v26 = (Scaleform::List<Scaleform::Render::GlyphSlot,Scaleform::Render::GlyphSlot,Scaleform::ListNode<Scaleform::Render::GlyphSlot> > *)v26->Root.pNext;
              if ( pPrev == (Scaleform::Render::GlyphSlot *)p_SlotQueue )
                goto LABEL_50;
            }
            v27 = 0;
          }
          if ( v19 != i && !v27 )
            break;
          v28 = v19->w;
          if ( v28 >= w )
          {
            Scaleform::Render::GlyphQueue::releaseSlot(this, v19);
            return Scaleform::Render::GlyphQueue::packGlyph(this, w, h, v19);
          }
          v20 += v28;
          RightSpace = pBand->RightSpace;
          if ( RightSpace && v19 == pBand->Slots.Root.pPrevInBand && v20 + RightSpace >= w )
          {
            v20 += RightSpace;
            pBand->RightSpace = 0;
          }
          if ( v20 >= w )
          {
            Scaleform::Render::GlyphQueue::mergeSlots(this, i, v19, v20);
            return Scaleform::Render::GlyphQueue::packGlyph(this, w, h, i);
          }
          v19 = v19->pNextInBand;
        }
        while ( v19 != (Scaleform::Render::GlyphSlot *)&pBand->Slots );
      }
    }
  }
  return 0i64;
}

Scaleform::Render::GlyphNode *__fastcall Scaleform::Render::GlyphQueue::findFontInSlot(
        Scaleform::Render::GlyphNode *glyph,
        const Scaleform::Render::FontCacheHandle *font)
{
  Scaleform::Render::GlyphNode *v3; // rbx
  Scaleform::Render::GlyphNode *result; // rax

  v3 = glyph;
  if ( !glyph )
    return 0i64;
  while ( v3->Param.pFont != font )
  {
    result = (Scaleform::Render::GlyphNode *)Scaleform::Render::GlyphQueue::findFontInSlot(v3->pNext, font);
    if ( result )
      return result;
    v3 = v3->pNex2;
    if ( !v3 )
      return 0i64;
  }
  return v3;
}

Scaleform::Render::GlyphNode *__fastcall Scaleform::Render::GlyphQueue::findSpaceInSlots(
        Scaleform::Render::GlyphQueue *this,
        unsigned int w,
        unsigned int h)
{
  Scaleform::Render::GlyphSlot *pNextActive; // rbx
  Scaleform::List2<Scaleform::Render::GlyphSlot,Scaleform::Render::GlyphSlot_Active> *p_ActiveSlots; // r14
  Scaleform::Render::GlyphNode *pRoot; // rdx
  Scaleform::List2<Scaleform::Render::GlyphSlot,Scaleform::Render::GlyphSlot_Active> *v9; // rsi
  unsigned int v10; // er8
  unsigned int v11; // er9
  int x; // ecx
  int v13; // eax
  Scaleform::Render::GlyphNode *result; // rax
  unsigned __int16 Failures; // cx

  pNextActive = this->ActiveSlots.Root.pNextActive;
  p_ActiveSlots = &this->ActiveSlots;
  if ( pNextActive != (Scaleform::Render::GlyphSlot *)&this->ActiveSlots )
  {
    while ( 1 )
    {
      pRoot = pNextActive->pRoot;
      v9 = (Scaleform::List2<Scaleform::Render::GlyphSlot,Scaleform::Render::GlyphSlot_Active> *)pNextActive->pNextActive;
      if ( !pRoot->Param.pFont )
      {
        v10 = pNextActive->w;
        if ( v10 > 2 * w )
        {
          if ( pRoot->pNext )
          {
            if ( !pRoot->pNex2 && pRoot->mRect.h == pNextActive->pBand->h )
            {
              v11 = pRoot->mRect.w;
              if ( v11 > w )
              {
                x = pRoot->mRect.x;
                v13 = pNextActive->x;
                if ( ((_WORD)x == (unsigned __int16)v13) != (v11 + x == v10 + v13) )
                  Scaleform::Render::GlyphQueue::splitGlyph(this, pNextActive, (_WORD)x == (unsigned __int16)v13, w);
              }
            }
          }
          else if ( !pRoot->pNex2 )
          {
            Scaleform::Render::GlyphQueue::splitSlot(this, pNextActive, w);
          }
        }
      }
      result = Scaleform::Render::GlyphQueue::packGlyph(this, w, h, pNextActive->pRoot);
      if ( !result )
        ++pNextActive->Failures;
      Failures = pNextActive->Failures;
      if ( Failures > 0x10u )
        break;
      if ( !Failures )
        goto LABEL_19;
      if ( result )
      {
        pNextActive->Failures = Failures - 1;
LABEL_19:
        if ( result )
          return result;
      }
      pNextActive = &v9->Root;
      if ( v9 == p_ActiveSlots )
        return 0i64;
    }
    pNextActive->pPrevActive->pNextActive = pNextActive->pNextActive;
    pNextActive->pNextActive->pPrevActive = pNextActive->pPrevActive;
    pNextActive->TextureId |= 0x8000u;
    goto LABEL_19;
  }
  return 0i64;
}

Scaleform::ListAllocBase<Scaleform::Render::GlyphSlot,127,Scaleform::AllocatorLH_POD<Scaleform::Render::GlyphSlot,75> >::PageType *__fastcall Scaleform::Render::GlyphQueue::initNewSlot(
        Scaleform::Render::GlyphQueue *this,
        Scaleform::Render::GlyphBand *band,
        unsigned int x,
        unsigned int w)
{
  unsigned __int16 v5; // si
  unsigned __int16 v6; // di
  Scaleform::ListAllocBase<Scaleform::Render::GlyphSlot,127,Scaleform::AllocatorLH_POD<Scaleform::Render::GlyphSlot,75> >::PageType *v8; // rbp
  Scaleform::ListAllocBase<Scaleform::Render::GlyphNode,127,Scaleform::AllocatorLH_POD<Scaleform::Render::GlyphNode,75> >::PageType *v9; // r8
  Scaleform::ListAllocBase<Scaleform::Render::GlyphSlot,127,Scaleform::AllocatorLH_POD<Scaleform::Render::GlyphSlot,75> >::PageType *result; // rax
  Scaleform::Render::GlyphRect v11; // [rsp+40h] [rbp+8h]

  v5 = w;
  v6 = x;
  v8 = Scaleform::ListAllocBase<Scaleform::Render::GlyphSlot,127,Scaleform::AllocatorLH_POD<Scaleform::Render::GlyphSlot,75>>::allocate(&this->Slots);
  v9 = Scaleform::ListAllocBase<Scaleform::Render::GlyphNode,127,Scaleform::AllocatorLH_POD<Scaleform::Render::GlyphNode,75>>::allocate(&this->Glyphs);
  v8->Data[0].pRoot = (Scaleform::Render::GlyphNode *)v9;
  v8->Data[0].pBand = band;
  v8->Data[0].TextureId = band->TextureId;
  v8->Data[0].x = v6;
  v8->Data[0].w = v5;
  v8->Data[0].Failures = 0;
  v8->Data[0].PinCount = 0;
  v8->Data[0].TextFields.Root.pPrev = (Scaleform::Render::TextNotifier *)&v8->Data[0].TextFields;
  v8->Data[0].TextFields.Root.pNext = (Scaleform::Render::TextNotifier *)&v8->Data[0].TextFields;
  v8->Data[0].SlotFence.pObject = 0i64;
  v9->Data[0].Param.pFont = 0i64;
  *(_QWORD *)&v9->Data[0].Param.GlyphIndex = 0i64;
  v9->Data[0].Param.BlurY = 0;
  v9->Data[0].Param.BlurStrength = 16;
  v9->Data[0].pSlot = (Scaleform::Render::GlyphSlot *)v8;
  v9->Data[0].pNext = 0i64;
  v9->Data[0].pNex2 = 0i64;
  v11.x = v8->Data[0].x;
  v11.y = band->y;
  v11.w = v8->Data[0].w;
  v11.h = band->h;
  v9->Data[0].mRect = v11;
  result = v8;
  v9->Data[0].Origin = 0;
  return result;
}

Scaleform::Render::GlyphSlot *__fastcall Scaleform::Render::GlyphQueue::mergeSlotWithNeighbor(
        Scaleform::Render::GlyphQueue *this,
        Scaleform::Render::GlyphSlot *slot)
{
  Scaleform::Render::GlyphBand *pBand; // r13
  Scaleform::Render::GlyphSlot *pNextInBand; // rbx
  char v6; // bp
  Scaleform::Render::GlyphNode *pRoot; // rsi
  Scaleform::ListAllocBase<Scaleform::Render::GlyphNode,127,Scaleform::AllocatorLH_POD<Scaleform::Render::GlyphNode,75> >::NodeType *v8; // r14
  int x; // edx
  int w; // er8
  int v11; // eax
  bool v12; // zf
  __int16 TextureId; // ax
  Scaleform::ListAllocBase<Scaleform::Render::GlyphNode,127,Scaleform::AllocatorLH_POD<Scaleform::Render::GlyphNode,75> >::NodeType *v15; // [rsp+58h] [rbp+10h]

  pBand = slot->pBand;
  pNextInBand = slot->pNextInBand;
  v6 = 1;
  if ( pNextInBand == (Scaleform::Render::GlyphSlot *)&pBand->Slots )
  {
    pNextInBand = slot->pPrevInBand;
    v6 = 0;
    if ( pNextInBand == (Scaleform::Render::GlyphSlot *)&pBand->Slots )
      return 0i64;
  }
  if ( pNextInBand->w > slot->w )
    return 0i64;
  pRoot = pNextInBand->pRoot;
  v8 = (Scaleform::ListAllocBase<Scaleform::Render::GlyphNode,127,Scaleform::AllocatorLH_POD<Scaleform::Render::GlyphNode,75> >::NodeType *)slot->pRoot;
  Scaleform::Render::GlyphQueue::releaseSlot(this, slot);
  x = slot->x;
  w = slot->w;
  slot->pPrev->pNext = slot->pNext;
  slot->pNext->Scaleform::ListNode<Scaleform::Render::GlyphSlot>::$19EFFF1FCB293ECE1CA932C9014AE38B::pPrev = slot->pPrev;
  --this->SlotQueueSize;
  if ( (slot->TextureId & 0x8000u) == 0 )
  {
    slot->pPrevActive->pNextActive = slot->pNextActive;
    slot->pNextActive->pPrevActive = slot->pPrevActive;
  }
  slot->pPrevInBand->pNextInBand = slot->pNextInBand;
  slot->pNextInBand->pPrevInBand = slot->pPrevInBand;
  slot->pPrev = (Scaleform::Render::GlyphSlot *)this->Slots.FirstEmptySlot;
  this->Slots.FirstEmptySlot = (Scaleform::ListAllocBase<Scaleform::Render::GlyphSlot,127,Scaleform::AllocatorLH_POD<Scaleform::Render::GlyphSlot,75> >::NodeType *)slot;
  if ( pRoot->Param.pFont
    || pRoot->pNex2
    || pRoot->mRect.h != pBand->h
    || ((v11 = pRoot->mRect.x, !v6) ? (v12 = v11 + pRoot->mRect.w == x) : (v12 = w + x == v11), !v12) )
  {
    v8[4].pNext = (Scaleform::ListAllocBase<Scaleform::Render::GlyphNode,127,Scaleform::AllocatorLH_POD<Scaleform::Render::GlyphNode,75> >::NodeType *)pRoot;
    v8[5].pNext = 0i64;
    v8[3].pNext = (Scaleform::ListAllocBase<Scaleform::Render::GlyphNode,127,Scaleform::AllocatorLH_POD<Scaleform::Render::GlyphNode,75> >::NodeType *)pNextInBand;
    WORD1(v15) = pBand->y;
    HIWORD(v15) = pBand->h;
    LOWORD(v15) = x;
    WORD2(v15) = w;
    v8[6].pNext = v15;
    pNextInBand->pRoot = (Scaleform::Render::GlyphNode *)v8;
  }
  else
  {
    v8->pNext = this->Glyphs.FirstEmptySlot;
    this->Glyphs.FirstEmptySlot = v8;
    if ( v6 )
      pRoot->mRect.x = x;
    pRoot->mRect.w += w;
  }
  if ( v6 )
    pNextInBand->x = x;
  pNextInBand->w += w;
  TextureId = pNextInBand->TextureId;
  if ( TextureId < 0 )
  {
    pNextInBand->Failures = 0;
    pNextInBand->TextureId = TextureId & 0x7FFF;
    pNextInBand->pNextActive = this->ActiveSlots.Root.pNextActive;
    pNextInBand->pPrevActive = &this->ActiveSlots.Root;
    this->ActiveSlots.Root.pNextActive->pPrevActive = pNextInBand;
    this->ActiveSlots.Root.pNextActive = pNextInBand;
  }
  return pNextInBand;
}

void __fastcall Scaleform::Render::GlyphQueue::mergeSlots(
        Scaleform::Render::GlyphQueue *this,
        Scaleform::Render::GlyphSlot *from,
        Scaleform::Render::GlyphSlot *to,
        unsigned int w)
{
  unsigned __int16 v4; // r15
  Scaleform::Render::GlyphSlot *i; // rbx
  Scaleform::Render::GlyphSlot *pNextInBand; // rbp
  Scaleform::ListAllocBase<Scaleform::Render::GlyphNode,127,Scaleform::AllocatorLH_POD<Scaleform::Render::GlyphNode,75> >::NodeType *pRoot; // rcx
  Scaleform::Render::GlyphNode *v11; // rax

  v4 = w;
  for ( i = from; ; i = pNextInBand )
  {
    pNextInBand = i->pNextInBand;
    Scaleform::Render::GlyphQueue::releaseSlot(this, i);
    if ( i != from )
    {
      pRoot = (Scaleform::ListAllocBase<Scaleform::Render::GlyphNode,127,Scaleform::AllocatorLH_POD<Scaleform::Render::GlyphNode,75> >::NodeType *)i->pRoot;
      pRoot->pNext = this->Glyphs.FirstEmptySlot;
      this->Glyphs.FirstEmptySlot = pRoot;
      i->pPrev->pNext = i->pNext;
      i->pNext->Scaleform::ListNode<Scaleform::Render::GlyphSlot>::$19EFFF1FCB293ECE1CA932C9014AE38B::pPrev = i->pPrev;
      --this->SlotQueueSize;
      if ( (i->TextureId & 0x8000u) == 0 )
      {
        i->pPrevActive->pNextActive = i->pNextActive;
        i->pNextActive->pPrevActive = i->pPrevActive;
      }
      i->pPrevInBand->pNextInBand = i->pNextInBand;
      i->pNextInBand->pPrevInBand = i->pPrevInBand;
      i->pPrev = (Scaleform::Render::GlyphSlot *)this->Slots.FirstEmptySlot;
      this->Slots.FirstEmptySlot = (Scaleform::ListAllocBase<Scaleform::Render::GlyphSlot,127,Scaleform::AllocatorLH_POD<Scaleform::Render::GlyphSlot,75> >::NodeType *)i;
    }
    if ( i == to )
      break;
  }
  v11 = from->pRoot;
  from->w = v4;
  v11->mRect.w = v4;
  from->pPrev->pNext = from->pNext;
  from->pNext->Scaleform::ListNode<Scaleform::Render::GlyphSlot>::$19EFFF1FCB293ECE1CA932C9014AE38B::pPrev = from->pPrev;
  from->pNext = this->SlotQueue.Root.pNext;
  from->pPrev = (Scaleform::Render::GlyphSlot *)&this->SlotQueue;
  this->SlotQueue.Root.pNext->pPrev = from;
  this->SlotQueue.Root.pNext = from;
}

Scaleform::Render::GlyphNode *__fastcall Scaleform::Render::GlyphQueue::packGlyph(
        Scaleform::Render::GlyphQueue *this,
        unsigned int w,
        unsigned int h,
        Scaleform::Render::GlyphNode *glyph)
{
  Scaleform::Render::GlyphNode *pNext; // r9
  Scaleform::Render::GlyphNode *v8; // r10
  Scaleform::Render::GlyphNode *result; // rax
  Scaleform::Render::GlyphNode *pNex2; // r9
  unsigned int v11; // ebp
  unsigned int v12; // edi
  unsigned int v13; // edi
  unsigned int v14; // ebp
  Scaleform::Render::GlyphNode *v15; // rax
  Scaleform::Render::GlyphNode *v16; // rax
  Scaleform::Render::GlyphNode *v17; // rax
  Scaleform::Render::GlyphQueue *v18; // [rsp+40h] [rbp+8h]
  unsigned __int16 v19; // [rsp+50h] [rbp+18h]

  v19 = h;
  v18 = this;
  if ( glyph->Param.pFont )
  {
    pNext = glyph->pNext;
    v8 = 0i64;
    if ( pNext )
    {
      result = Scaleform::Render::GlyphQueue::packGlyph(this, w, h, pNext);
      v8 = result;
      if ( result )
        return result;
      this = v18;
    }
    pNex2 = glyph->pNex2;
    if ( pNex2 )
      return Scaleform::Render::GlyphQueue::packGlyph(this, w, h, pNex2);
    return v8;
  }
  else
  {
    v11 = glyph->mRect.w;
    if ( w > v11 )
      return 0i64;
    v12 = glyph->mRect.h;
    if ( h > v12 )
    {
      return 0i64;
    }
    else
    {
      v13 = v12 - h;
      v14 = v11 - w;
      if ( v14 >= this->MinSlotSpace || v13 >= this->MinSlotSpace )
      {
        v15 = Scaleform::ListAllocBase<Scaleform::Render::GlyphNode,127,Scaleform::AllocatorLH_POD<Scaleform::Render::GlyphNode,75>>::Alloc(
                &this->Glyphs,
                glyph);
        glyph->pNext = v15;
        if ( v14 <= v13 )
        {
          v15->mRect.y = v19 + glyph->mRect.y;
          glyph->pNext->mRect.h = v13;
          if ( v14 >= v18->MinSlotSpace )
          {
            v17 = Scaleform::ListAllocBase<Scaleform::Render::GlyphNode,127,Scaleform::AllocatorLH_POD<Scaleform::Render::GlyphNode,75>>::Alloc(
                    &v18->Glyphs,
                    glyph);
            glyph->pNex2 = v17;
            v17->pNext = 0i64;
            glyph->pNex2->mRect.x = w + glyph->mRect.x;
            glyph->pNex2->mRect.w = v14;
            glyph->pNex2->mRect.h = v19;
          }
        }
        else
        {
          v15->mRect.x = w + glyph->mRect.x;
          glyph->pNext->mRect.w = v14;
          if ( v13 >= v18->MinSlotSpace )
          {
            v16 = Scaleform::ListAllocBase<Scaleform::Render::GlyphNode,127,Scaleform::AllocatorLH_POD<Scaleform::Render::GlyphNode,75>>::Alloc(
                    &v18->Glyphs,
                    glyph);
            glyph->pNex2 = v16;
            v16->pNext = 0i64;
            glyph->pNex2->mRect.y = v19 + glyph->mRect.y;
            glyph->pNex2->mRect.h = v13;
            glyph->pNex2->mRect.w = w;
            result = glyph;
            glyph->mRect.w = w;
            glyph->mRect.h = v19;
            return result;
          }
        }
      }
      result = glyph;
      glyph->mRect.w = w;
      glyph->mRect.h = v19;
    }
  }
  return result;
}

Scaleform::Render::GlyphNode *__fastcall Scaleform::Render::GlyphQueue::packGlyph(
        Scaleform::Render::GlyphQueue *this,
        unsigned int w,
        unsigned int h,
        Scaleform::Render::GlyphSlot *slot)
{
  Scaleform::Render::GlyphNode *pRoot; // r9
  unsigned int v9; // er10
  unsigned int v10; // edx
  int x; // ecx
  int v12; // eax
  Scaleform::Render::GlyphNode *result; // rax
  unsigned __int16 Failures; // cx

  pRoot = slot->pRoot;
  if ( !pRoot->Param.pFont )
  {
    v9 = slot->w;
    if ( v9 > 2 * w )
    {
      if ( pRoot->pNext )
      {
        if ( !pRoot->pNex2 && pRoot->mRect.h == slot->pBand->h )
        {
          v10 = pRoot->mRect.w;
          if ( v10 > w )
          {
            x = pRoot->mRect.x;
            v12 = slot->x;
            if ( ((_WORD)x == (unsigned __int16)v12) != (v10 + x == v9 + v12) )
              Scaleform::Render::GlyphQueue::splitGlyph(this, slot, (_WORD)x == (unsigned __int16)v12, w);
          }
        }
      }
      else if ( !pRoot->pNex2 )
      {
        Scaleform::Render::GlyphQueue::splitSlot(this, slot, w);
      }
    }
  }
  result = Scaleform::Render::GlyphQueue::packGlyph(this, w, h, slot->pRoot);
  if ( !result )
    ++slot->Failures;
  Failures = slot->Failures;
  if ( Failures <= 0x10u )
  {
    if ( Failures )
    {
      if ( result )
        slot->Failures = Failures - 1;
    }
  }
  else
  {
    slot->pPrevActive->pNextActive = slot->pNextActive;
    slot->pNextActive->pPrevActive = slot->pPrevActive;
    slot->TextureId |= 0x8000u;
  }
  return result;
}

void __fastcall Scaleform::Render::GlyphQueue::releaseGlyphTree(
        Scaleform::Render::GlyphQueue *this,
        Scaleform::Render::GlyphNode *glyph)
{
  Scaleform::Render::GlyphParamHash key; // [rsp+38h] [rbp+10h] BYREF

  if ( glyph )
  {
    Scaleform::Render::GlyphQueue::releaseGlyphTree(this, glyph->pNext);
    Scaleform::Render::GlyphQueue::releaseGlyphTree(this, glyph->pNex2);
    if ( glyph->Param.pFont )
    {
      key.Param = &glyph->Param;
      Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeHashF,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::GlyphParamHash,75>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeHashF>>::RemoveAlt<Scaleform::Render::GlyphParamHash>(
        &this->GlyphHTable.mHash,
        &key);
    }
    glyph->Param.pFont = 0i64;
    glyph->Param.pFont = (Scaleform::Render::FontCacheHandle *)this->Glyphs.FirstEmptySlot;
    this->Glyphs.FirstEmptySlot = (Scaleform::ListAllocBase<Scaleform::Render::GlyphNode,127,Scaleform::AllocatorLH_POD<Scaleform::Render::GlyphNode,75> >::NodeType *)glyph;
  }
}

void __fastcall Scaleform::Render::GlyphQueue::releaseSlot(
        Scaleform::Render::GlyphQueue *this,
        Scaleform::Render::GlyphSlot *slot)
{
  char v4; // al
  Scaleform::Render::Fence *pObject; // rax
  Scaleform::Render::Fence *v6; // rax
  Scaleform::Render::Fence *v7; // rcx
  bool v8; // dl
  Scaleform::Render::GlyphNode *pRoot; // rax
  Scaleform::Render::GlyphNode *pNext; // rsi
  Scaleform::Render::GlyphNode *pNex2; // rsi
  Scaleform::Render::GlyphBand *pBand; // rax
  unsigned __int16 RightSpace; // cx
  Scaleform::Render::GlyphBand *v14; // rcx
  unsigned __int16 h; // ax
  Scaleform::Render::GlyphNode *v16; // rcx
  Scaleform::Render::Fence *v17; // rcx
  signed __int16 TextureId; // ax
  Scaleform::Render::GlyphParamHash key; // [rsp+38h] [rbp+10h] BYREF

  if ( slot->PinCount )
  {
    v4 = 1;
  }
  else
  {
    pObject = slot->SlotFence.pObject;
    if ( (!pObject
       || pObject->HasData
       && pObject->Data
       && !Scaleform::Render::FenceImpl::WaitFence(pObject->Data, FenceType_Fragment))
      && (v6 = slot->SlotFence.pObject) != 0i64
      && v6->HasData
      && v6->Data
      && Scaleform::Render::FenceImpl::IsPending(v6->Data, FenceType_Fragment) )
    {
      v4 = 1;
    }
    else
    {
      v7 = slot->SlotFence.pObject;
      if ( v7 )
        Scaleform::Render::Fence::Release(v7);
      slot->SlotFence.pObject = 0i64;
      v4 = 0;
    }
  }
  v8 = warned_4;
  if ( !warned_4 )
    v8 = v4;
  pRoot = slot->pRoot;
  warned_4 = v8;
  pNext = pRoot->pNext;
  if ( pNext )
  {
    Scaleform::Render::GlyphQueue::releaseGlyphTree(this, pNext->pNext);
    Scaleform::Render::GlyphQueue::releaseGlyphTree(this, pNext->pNex2);
    if ( pNext->Param.pFont )
    {
      key.Param = &pNext->Param;
      Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeHashF,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::GlyphParamHash,75>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeHashF>>::RemoveAlt<Scaleform::Render::GlyphParamHash>(
        &this->GlyphHTable.mHash,
        &key);
    }
    pNext->Param.pFont = 0i64;
    pNext->Param.pFont = (Scaleform::Render::FontCacheHandle *)this->Glyphs.FirstEmptySlot;
    this->Glyphs.FirstEmptySlot = (Scaleform::ListAllocBase<Scaleform::Render::GlyphNode,127,Scaleform::AllocatorLH_POD<Scaleform::Render::GlyphNode,75> >::NodeType *)pNext;
  }
  pNex2 = slot->pRoot->pNex2;
  if ( pNex2 )
  {
    Scaleform::Render::GlyphQueue::releaseGlyphTree(this, pNex2->pNext);
    Scaleform::Render::GlyphQueue::releaseGlyphTree(this, pNex2->pNex2);
    if ( pNex2->Param.pFont )
    {
      key.Param = &pNex2->Param;
      Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeHashF,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::GlyphParamHash,75>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeHashF>>::RemoveAlt<Scaleform::Render::GlyphParamHash>(
        &this->GlyphHTable.mHash,
        &key);
    }
    pNex2->Param.pFont = 0i64;
    pNex2->Param.pFont = (Scaleform::Render::FontCacheHandle *)this->Glyphs.FirstEmptySlot;
    this->Glyphs.FirstEmptySlot = (Scaleform::ListAllocBase<Scaleform::Render::GlyphNode,127,Scaleform::AllocatorLH_POD<Scaleform::Render::GlyphNode,75> >::NodeType *)pNex2;
  }
  while ( (Scaleform::List<Scaleform::Render::TextNotifier,Scaleform::Render::TextNotifier,Scaleform::ListNode<Scaleform::Render::TextNotifier> > *)slot->TextFields.Root.pNext != &slot->TextFields )
    this->pEvictNotifier->Evict(this->pEvictNotifier, slot->TextFields.Root.pNext->pText);
  if ( slot->pRoot->Param.pFont )
  {
    key.Param = &slot->pRoot->Param;
    Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeHashF,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::GlyphParamHash,75>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeHashF>>::RemoveAlt<Scaleform::Render::GlyphParamHash>(
      &this->GlyphHTable.mHash,
      &key);
  }
  pBand = slot->pBand;
  RightSpace = pBand->RightSpace;
  if ( RightSpace && slot == pBand->Slots.Root.pPrevInBand )
  {
    slot->w += RightSpace;
    pBand->RightSpace = 0;
  }
  slot->pRoot->Param.pFont = 0i64;
  v14 = slot->pBand;
  LOWORD(key.Param) = slot->x;
  WORD1(key.Param) = v14->y;
  WORD2(key.Param) = slot->w;
  h = v14->h;
  v16 = slot->pRoot;
  HIWORD(key.Param) = h;
  v16->mRect = (Scaleform::Render::GlyphRect)key.Param;
  slot->pRoot->pNext = 0i64;
  slot->pRoot->pNex2 = 0i64;
  slot->Failures = 0;
  v17 = slot->SlotFence.pObject;
  if ( v17 )
    Scaleform::Render::Fence::Release(v17);
  slot->SlotFence.pObject = 0i64;
  TextureId = slot->TextureId;
  if ( TextureId < 0 )
  {
    slot->TextureId = TextureId & 0x7FFF;
    slot->pNextActive = this->ActiveSlots.Root.pNextActive;
    slot->pPrevActive = &this->ActiveSlots.Root;
    this->ActiveSlots.Root.pNextActive->pPrevActive = slot;
    this->ActiveSlots.Root.pNextActive = slot;
  }
}

void __fastcall Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeHashF,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::GlyphParamHash,75>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeHashF>>::setRawCapacity(
        Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeHashF,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::GlyphParamHash,75>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeHashF> > *this,
        void *pheapAddr,
        unsigned __int64 newSize)
{
  __int64 v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // rcx
  unsigned __int64 v8; // rsi
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeHashF,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::GlyphParamHash,75>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeHashF> >::TableType *pTable; // rdi
  const Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash> *v10; // r8
  int v11; // [rsp+50h] [rbp+18h] BYREF
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeHashF,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::GlyphParamHash,75>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeHashF> > v12; // [rsp+58h] [rbp+20h] BYREF

  if ( newSize )
  {
    if ( newSize >= 8 )
      v5 = 1i64 << ((unsigned __int8)Scaleform::Alg::UpperBit(newSize - 1) + 1);
    else
      v5 = 8i64;
    v11 = 75;
    v6 = 0i64;
    v12.pTable = 0i64;
    v12.pTable = (Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeHashF,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::GlyphParamHash,75>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeHashF> >::TableType *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(Scaleform::Memory::pGlobalHeap, pheapAddr, 32 * v5 + 16, &v11);
    v12.pTable->EntryCount = 0i64;
    v12.pTable->SizeMask = v5 - 1;
    if ( v5 )
    {
      v7 = 0i64;
      do
      {
        v7 += 2i64;
        v12.pTable[v7 - 1].EntryCount = -2i64;
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
          v10 = (const Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash> *)&pTable[v6 + 2];
          Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeHashF,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::GlyphParamHash,75>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeHashF>>::add<Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>>(
            &v12,
            pheapAddr,
            v10,
            (__int64)v10->First.Param->pFont ^ ((unsigned __int64)v10->First.Param->pFont >> 6) ^ v10->First.Param->GlyphIndex ^ v10->First.Param->FontSize ^ v10->First.Param->Flags ^ v10->First.Param->BlurX ^ v10->First.Param->BlurStrength ^ (2i64 * v10->First.Param->BlurY));
          pTable[v6 + 1].EntryCount = -2i64;
        }
        v6 += 2i64;
        --v8;
      }
      while ( v8 );
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->pTable);
    }
    this->pTable = v12.pTable;
  }
  else
  {
    Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::AS3::TR::NodeBlock *,Scaleform::List<Scaleform::GFx::AS3::TR::Range,Scaleform::GFx::AS3::TR::Range,Scaleform::ListNode<Scaleform::GFx::AS3::TR::Range>> *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *>>,Scaleform::HashNode<Scaleform::GFx::AS3::TR::NodeBlock *,Scaleform::List<Scaleform::GFx::AS3::TR::Range,Scaleform::GFx::AS3::TR::Range,Scaleform::ListNode<Scaleform::GFx::AS3::TR::Range>> *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *>>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::AS3::TR::NodeBlock *,Scaleform::List<Scaleform::GFx::AS3::TR::Range,Scaleform::GFx::AS3::TR::Range,Scaleform::ListNode<Scaleform::GFx::AS3::TR::Range>> *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *>>::NodeAltHashF,Scaleform::AllocatorDH<Scaleform::HashNode<Scaleform::GFx::AS3::TR::NodeBlock *,Scaleform::List<Scaleform::GFx::AS3::TR::Range,Scaleform::GFx::AS3::TR::Range,Scaleform::ListNode<Scaleform::GFx::AS3::TR::Range>> *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *>>,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::AS3::TR::NodeBlock *,Scaleform::List<Scaleform::GFx::AS3::TR::Range,Scaleform::GFx::AS3::TR::Range,Scaleform::ListNode<Scaleform::GFx::AS3::TR::Range>> *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *>>,Scaleform::HashNode<Scaleform::GFx::AS3::TR::NodeBlock *,Scaleform::List<Scaleform::GFx::AS3::TR::Range,Scaleform::GFx::AS3::TR::Range,Scaleform::ListNode<Scaleform::GFx::AS3::TR::Range>> *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *>>::NodeHashF>>::Clear((Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::AS3::TR::NodeBlock *,Scaleform::List<Scaleform::GFx::AS3::TR::Range,Scaleform::GFx::AS3::TR::Range,Scaleform::ListNode<Scaleform::GFx::AS3::TR::Range> > *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *> >,Scaleform::HashNode<Scaleform::GFx::AS3::TR::NodeBlock *,Scaleform::List<Scaleform::GFx::AS3::TR::Range,Scaleform::GFx::AS3::TR::Range,Scaleform::ListNode<Scaleform::GFx::AS3::TR::Range> > *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *> >::NodeHashF,Scaleform::HashNode<Scaleform::GFx::AS3::TR::NodeBlock *,Scaleform::List<Scaleform::GFx::AS3::TR::Range,Scaleform::GFx::AS3::TR::Range,Scaleform::ListNode<Scaleform::GFx::AS3::TR::Range> > *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *> >::NodeAltHashF,Scaleform::AllocatorDH<Scaleform::HashNode<Scaleform::GFx::AS3::TR::NodeBlock *,Scaleform::List<Scaleform::GFx::AS3::TR::Range,Scaleform::GFx::AS3::TR::Range,Scaleform::ListNode<Scaleform::GFx::AS3::TR::Range> > *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *> >,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::AS3::TR::NodeBlock *,Scaleform::List<Scaleform::GFx::AS3::TR::Range,Scaleform::GFx::AS3::TR::Range,Scaleform::ListNode<Scaleform::GFx::AS3::TR::Range> > *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *> >,Scaleform::HashNode<Scaleform::GFx::AS3::TR::NodeBlock *,Scaleform::List<Scaleform::GFx::AS3::TR::Range,Scaleform::GFx::AS3::TR::Range,Scaleform::ListNode<Scaleform::GFx::AS3::TR::Range> > *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *> >::NodeHashF> > *)this);
  }
}

void __fastcall Scaleform::Render::GlyphQueue::splitGlyph(
        Scaleform::Render::GlyphQueue *this,
        Scaleform::Render::GlyphSlot *slot,
        bool left,
        unsigned int w)
{
  Scaleform::Render::GlyphNode *pRoot; // rbp
  Scaleform::Render::GlyphBand *pBand; // rdx
  __int16 v9; // di
  bool v10; // zf
  unsigned int v11; // er9
  int x; // er8
  Scaleform::ListAllocBase<Scaleform::Render::GlyphSlot,127,Scaleform::AllocatorLH_POD<Scaleform::Render::GlyphSlot,75> >::PageType *v13; // rax
  Scaleform::Render::GlyphSlot *pPrevInBand; // rcx
  Scaleform::ListAllocBase<Scaleform::Render::GlyphSlot,127,Scaleform::AllocatorLH_POD<Scaleform::Render::GlyphSlot,75> >::PageType *inited; // rdx
  Scaleform::Render::GlyphSlot *pNextInBand; // rax
  Scaleform::Render::GlyphSlot *pNext; // rax

  pRoot = slot->pRoot;
  pBand = slot->pBand;
  v9 = pRoot->mRect.w - w;
  v10 = !left;
  v11 = pRoot->mRect.w - w;
  x = pRoot->mRect.x;
  if ( v10 )
  {
    inited = Scaleform::Render::GlyphQueue::initNewSlot(this, pBand, w + x, v11);
    pNextInBand = slot->pNextInBand;
    inited->Data[0].pPrevInBand = slot;
    inited->Data[0].pNextInBand = pNextInBand;
    pNextInBand->pPrevInBand = (Scaleform::Render::GlyphSlot *)inited;
    slot->pNextInBand = (Scaleform::Render::GlyphSlot *)inited;
  }
  else
  {
    v13 = Scaleform::Render::GlyphQueue::initNewSlot(this, pBand, x, v11);
    pPrevInBand = slot->pPrevInBand;
    inited = v13;
    v13->Data[0].pNextInBand = slot;
    v13->Data[0].pPrevInBand = pPrevInBand;
    pPrevInBand->pNextInBand = (Scaleform::Render::GlyphSlot *)v13;
    slot->x += v9;
    LOWORD(pPrevInBand) = slot->x;
    slot->pPrevInBand = (Scaleform::Render::GlyphSlot *)v13;
    pRoot->mRect.x = (unsigned __int16)pPrevInBand;
  }
  pRoot->mRect.w = w;
  slot->w -= v9;
  pNext = this->SlotQueue.Root.pNext;
  inited->Data[0].pPrev = (Scaleform::Render::GlyphSlot *)&this->SlotQueue;
  inited->Data[0].pNext = pNext;
  this->SlotQueue.Root.pNext->pPrev = (Scaleform::Render::GlyphSlot *)inited;
  this->SlotQueue.Root.pNext = (Scaleform::Render::GlyphSlot *)inited;
  ++this->SlotQueueSize;
  inited->Data[0].pNextActive = this->ActiveSlots.Root.pNextActive;
  inited->Data[0].pPrevActive = &this->ActiveSlots.Root;
  this->ActiveSlots.Root.pNextActive->pPrevActive = (Scaleform::Render::GlyphSlot *)inited;
  this->ActiveSlots.Root.pNextActive = (Scaleform::Render::GlyphSlot *)inited;
}

void __fastcall Scaleform::Render::GlyphQueue::splitSlot(
        Scaleform::Render::GlyphQueue *this,
        Scaleform::Render::GlyphSlot *slot,
        unsigned int w)
{
  unsigned __int16 v3; // bx
  Scaleform::ListAllocBase<Scaleform::Render::GlyphSlot,127,Scaleform::AllocatorLH_POD<Scaleform::Render::GlyphSlot,75> >::PageType *inited; // rax
  Scaleform::Render::GlyphNode *pRoot; // rdx
  Scaleform::Render::GlyphSlot *v8; // r8
  Scaleform::Render::GlyphSlot *pNextInBand; // rax

  v3 = w;
  inited = Scaleform::Render::GlyphQueue::initNewSlot(this, slot->pBand, w + slot->x, slot->w - w);
  pRoot = slot->pRoot;
  v8 = (Scaleform::Render::GlyphSlot *)inited;
  slot->w = v3;
  pRoot->mRect.w = v3;
  inited->Data[0].pNext = this->SlotQueue.Root.pNext;
  inited->Data[0].pPrev = (Scaleform::Render::GlyphSlot *)&this->SlotQueue;
  this->SlotQueue.Root.pNext->pPrev = (Scaleform::Render::GlyphSlot *)inited;
  this->SlotQueue.Root.pNext = (Scaleform::Render::GlyphSlot *)inited;
  ++this->SlotQueueSize;
  pNextInBand = slot->pNextInBand;
  v8->pPrevInBand = slot;
  v8->pNextInBand = pNextInBand;
  pNextInBand->pPrevInBand = v8;
  slot->pNextInBand = v8;
  v8->pNextActive = this->ActiveSlots.Root.pNextActive;
  v8->pPrevActive = &this->ActiveSlots.Root;
  this->ActiveSlots.Root.pNextActive->pPrevActive = v8;
  this->ActiveSlots.Root.pNextActive = v8;
}

