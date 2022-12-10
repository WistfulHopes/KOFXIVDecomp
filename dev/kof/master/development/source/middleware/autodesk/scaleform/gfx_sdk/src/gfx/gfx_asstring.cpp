#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_twips.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_loader.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_characterdef.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_system.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_resource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_hash.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cxform.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_wstring.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_gradients.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_image.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_font.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatapacked.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_pathdatapacker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_wwhelper.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asutils.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_log.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_event.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_keycodes.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asstring.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"

void Scaleform::GFx::ASString::Clear(); // 0x140328F20
bool Scaleform::GFx::ASString::operator<(const Scaleform::GFx::ASString & str); // 0x140328AF0
unsigned long Scaleform::GFx::ASConstString::GetLength(); // 0x140329600
unsigned long Scaleform::GFx::ASConstString::GetCharAt(unsigned long index); // 0x140329500
unsigned long Scaleform::GFx::ASConstString::GetFirstCharAt(unsigned long long index, const char * * offset); // 0x1403295A0
unsigned long Scaleform::GFx::ASConstString::GetNextChar(const char * * offset); // 0x140329670
Scaleform::GFx::ASStringNode * Scaleform::GFx::ASConstString::AppendCharNode(unsigned long ch); // 0x140328E80
Scaleform::GFx::ASStringNode * Scaleform::GFx::ASConstString::SubstringNode(long start, long end); // 0x140329BC0
Scaleform::GFx::ASStringNode * Scaleform::GFx::ASConstString::TruncateWhitespaceNode(); // 0x140329D80
Scaleform::GFx::ASStringNode * Scaleform::GFx::ASConstString::ToUpperNode(); // 0x140329CC0
Scaleform::GFx::ASStringNode * Scaleform::GFx::ASConstString::ToLowerNode(); // 0x140329C80
void Scaleform::GFx::ASString::operator=(const char * pstr); // 0x1403289D0
void Scaleform::GFx::ASString::Append(const char * str, unsigned long long len); // 0x140328DF0
void Scaleform::GFx::ASString::Append(const Scaleform::GFx::ASString & str); // 0x140328D60
Scaleform::GFx::ASString Scaleform::GFx::ASString::operator+(const char * pstr); // 0x140328AA0
Scaleform::GFx::ASString Scaleform::GFx::ASString::operator+(const Scaleform::GFx::ASString & str); // 0x140328A60
long Scaleform::GFx::ASConstString::LocaleCompare_CaseCheck(const char * pstr, unsigned long long len, bool caseSensitive); // 0x1403297E0
void Scaleform::GFx::ASStringNode::ResolveLowercase_Impl(); // 0x140329AF0
void Scaleform::GFx::ASStringNode::ReleaseNode(); // 0x140329AA0
Scaleform::GFx::ASStringManager::ASStringManager(Scaleform::MemoryHeap * pheap); // 0x140328650
Scaleform::GFx::ASStringManager::~ASStringManager(); // 0x140328760
void Scaleform::GFx::ASStringManager::AllocateStringNodes(); // 0x140328C50
void Scaleform::GFx::ASStringManager::AllocateTextBuffers(); // 0x140328CD0
char * Scaleform::GFx::ASStringManager::AllocTextBuffer(const char * pbuffer, unsigned long long length); // 0x140328BC0
Scaleform::GFx::ASStringNode * Scaleform::GFx::ASStringManager::CreateConstStringNode(const char * pstr, unsigned long long length, unsigned long stringFlags); // 0x140328FB0
Scaleform::GFx::ASStringNode * Scaleform::GFx::ASStringManager::CreateStringNode(const char * pstr, unsigned long long length); // 0x1403292C0
Scaleform::GFx::ASStringNode * Scaleform::GFx::ASStringManager::CreateStringNode(const char * pstr); // 0x1403290B0
Scaleform::GFx::ASStringNode * Scaleform::GFx::ASStringManager::CreateStringNode(const wchar_t * pwstr, long long len); // 0x1403293F0
Scaleform::GFx::ASStringNode * Scaleform::GFx::ASStringManager::CreateStringNode(const char * pstr1, unsigned long long l1, const char * pstr2, unsigned long long l2); // 0x1403290D0
void Scaleform::GFx::ASStringManager::InitBuiltinArray(Scaleform::GFx::ASStringNodeHolder * nodes, const char * * strings, unsigned long count); // 0x1403296B0
void Scaleform::GFx::ASStringManager::ReleaseBuiltinArray(Scaleform::GFx::ASStringNodeHolder * nodes, unsigned long count); // 0x1403299C0char __fastcall Scaleform::HashSetBase<Scaleform::GFx::ASStringNode *,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>,Scaleform::AllocatorDH<Scaleform::GFx::ASStringNode *,324>,Scaleform::HashsetEntry<Scaleform::GFx::ASStringNode *,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>>>::RemoveAlt<Scaleform::GFx::ASStringNode *>(
        Scaleform::HashSetBase<Scaleform::GFx::ASStringNode *,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>,Scaleform::AllocatorDH<Scaleform::GFx::ASStringNode *,324>,Scaleform::HashsetEntry<Scaleform::GFx::ASStringNode *,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *> > > *this,
        Scaleform::GFx::ASStringNode *const *key)
{
  Scaleform::HashSetBase<Scaleform::GFx::ASStringNode *,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>,Scaleform::AllocatorDH<Scaleform::GFx::ASStringNode *,324>,Scaleform::HashsetEntry<Scaleform::GFx::ASStringNode *,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *> > >::TableType *pTable; // r9
  unsigned __int64 SizeMask; // r10
  Scaleform::GFx::ASStringNode *v6; // rbx
  __int64 EntryCount; // r8
  Scaleform::HashSetBase<Scaleform::GFx::ASStringNode *,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>,Scaleform::AllocatorDH<Scaleform::GFx::ASStringNode *,324>,Scaleform::HashsetEntry<Scaleform::GFx::ASStringNode *,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *> > >::TableType *v8; // rdx
  __int64 v9; // r11
  __int64 v10; // r10
  Scaleform::GFx::ASStringNode *v11; // rcx
  unsigned __int64 v12; // rcx
  Scaleform::HashSetBase<Scaleform::GFx::ASStringNode *,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>,Scaleform::AllocatorDH<Scaleform::GFx::ASStringNode *,324>,Scaleform::HashsetEntry<Scaleform::GFx::ASStringNode *,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *> > >::TableType *v13; // rcx

  pTable = this->pTable;
  if ( !this->pTable )
    return 0;
  SizeMask = pTable->SizeMask;
  v6 = *key;
  EntryCount = (unsigned int)SizeMask & (*key)->HashFlags;
  v8 = &pTable[EntryCount + 1];
  if ( v8->EntryCount == -2i64 || ((unsigned int)SizeMask & *(_DWORD *)(v8->SizeMask + 28)) != EntryCount )
    return 0;
  v9 = EntryCount;
  v10 = -1i64;
  while ( 1 )
  {
    v11 = (Scaleform::GFx::ASStringNode *)v8->SizeMask;
    if ( (pTable->SizeMask & v11->HashFlags) == v9 && v11 == v6 )
      break;
    v10 = EntryCount;
    EntryCount = v8->EntryCount;
    if ( v8->EntryCount == -1i64 )
      return 0;
    v8 = &pTable[EntryCount + 1];
  }
  if ( v9 == EntryCount )
  {
    v12 = v8->EntryCount;
    if ( v8->EntryCount != -1i64 )
    {
      v8->EntryCount = -2i64;
      v13 = &pTable[v12 + 1];
      v8->EntryCount = v13->EntryCount;
      v8->SizeMask = v13->SizeMask;
      v8 = v13;
    }
  }
  else
  {
    pTable[v10 + 1].EntryCount = v8->EntryCount;
  }
  v8->EntryCount = -2i64;
  --this->pTable->EntryCount;
  return 1;
}

void __fastcall Scaleform::HashSetBase<Scaleform::GFx::ASStringNode *,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>,Scaleform::AllocatorDH<Scaleform::GFx::ASStringNode *,324>,Scaleform::HashsetEntry<Scaleform::GFx::ASStringNode *,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>>>::add<Scaleform::GFx::ASStringNode *>(
        Scaleform::HashSetBase<Scaleform::GFx::ASStringNode *,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>,Scaleform::AllocatorDH<Scaleform::GFx::ASStringNode *,324>,Scaleform::HashsetEntry<Scaleform::GFx::ASStringNode *,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *> > > *this,
        void *pmemAddr,
        Scaleform::GFx::ASStringNode *const *key,
        unsigned __int64 hashValue)
{
  Scaleform::HashSetBase<Scaleform::GFx::ASStringNode *,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>,Scaleform::AllocatorDH<Scaleform::GFx::ASStringNode *,324>,Scaleform::HashsetEntry<Scaleform::GFx::ASStringNode *,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *> > >::TableType *pTable; // rax
  unsigned __int64 v8; // r8
  unsigned __int64 SizeMask; // r8
  unsigned __int64 v10; // rbx
  Scaleform::HashSetBase<Scaleform::GFx::ASStringNode *,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>,Scaleform::AllocatorDH<Scaleform::GFx::ASStringNode *,324>,Scaleform::HashsetEntry<Scaleform::GFx::ASStringNode *,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *> > >::TableType *v11; // r9
  Scaleform::HashSetBase<Scaleform::GFx::ASStringNode *,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>,Scaleform::AllocatorDH<Scaleform::GFx::ASStringNode *,324>,Scaleform::HashsetEntry<Scaleform::GFx::ASStringNode *,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *> > >::TableType *v12; // r8
  unsigned __int64 EntryCount; // rdi
  Scaleform::GFx::ASStringNode *v14; // rax
  unsigned __int64 v15; // rcx
  __int64 v16; // rdx
  Scaleform::HashSetBase<Scaleform::GFx::ASStringNode *,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>,Scaleform::AllocatorDH<Scaleform::GFx::ASStringNode *,324>,Scaleform::HashsetEntry<Scaleform::GFx::ASStringNode *,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *> > >::TableType *v17; // r10
  __int64 v18; // r11
  Scaleform::HashSetBase<Scaleform::GFx::ASStringNode *,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>,Scaleform::AllocatorDH<Scaleform::GFx::ASStringNode *,324>,Scaleform::HashsetEntry<Scaleform::GFx::ASStringNode *,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *> > >::TableType *i; // rcx

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
  Scaleform::HashSetBase<Scaleform::GFx::ASStringNode *,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>,Scaleform::AllocatorDH<Scaleform::GFx::ASStringNode *,324>,Scaleform::HashsetEntry<Scaleform::GFx::ASStringNode *,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>>>::setRawCapacity(
    this,
    pmemAddr,
    v8);
LABEL_6:
  v10 = this->pTable->SizeMask & hashValue;
  ++this->pTable->EntryCount;
  v11 = this->pTable;
  v12 = &this->pTable[v10 + 1];
  EntryCount = v12->EntryCount;
  if ( v12->EntryCount == -2i64 )
  {
    v12->EntryCount = -1i64;
    v14 = *key;
  }
  else
  {
    v15 = v11->SizeMask;
    v16 = v10;
    do
      v16 = v15 & (v16 + 1);
    while ( v11[v16 + 1].EntryCount != -2i64 );
    v17 = &v11[v16 + 1];
    v18 = (unsigned int)v15 & *(_DWORD *)(v12->SizeMask + 28);
    if ( v18 == v10 )
    {
      if ( v17 )
      {
        v17->EntryCount = EntryCount;
        v17->SizeMask = v12->SizeMask;
      }
      v14 = *key;
      v12->EntryCount = v16;
    }
    else
    {
      for ( i = &v11[v18 + 1]; i->EntryCount != v10; i = &v11[i->EntryCount + 1] )
        ;
      if ( v17 )
      {
        v17->EntryCount = EntryCount;
        v17->SizeMask = v12->SizeMask;
      }
      i->EntryCount = v16;
      v14 = *key;
      v12->EntryCount = -1i64;
    }
  }
  v12->SizeMask = (unsigned __int64)v14;
}

unsigned __int64 __fastcall Scaleform::HashSetBase<Scaleform::GFx::ASStringNode *,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>,Scaleform::AllocatorDH<Scaleform::GFx::ASStringNode *,324>,Scaleform::HashsetEntry<Scaleform::GFx::ASStringNode *,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>>>::findIndexCore<Scaleform::GFx::ASStringKey>(
        Scaleform::HashSetBase<Scaleform::GFx::ASStringNode *,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>,Scaleform::AllocatorDH<Scaleform::GFx::ASStringNode *,324>,Scaleform::HashsetEntry<Scaleform::GFx::ASStringNode *,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *> > > *this,
        const Scaleform::GFx::ASStringKey *key,
        unsigned __int64 hashValue)
{
  Scaleform::HashSetBase<Scaleform::GFx::ASStringNode *,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>,Scaleform::AllocatorDH<Scaleform::GFx::ASStringNode *,324>,Scaleform::HashsetEntry<Scaleform::GFx::ASStringNode *,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *> > >::TableType *pTable; // r9
  Scaleform::HashSetBase<Scaleform::GFx::ASStringNode *,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>,Scaleform::AllocatorDH<Scaleform::GFx::ASStringNode *,324>,Scaleform::HashsetEntry<Scaleform::GFx::ASStringNode *,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *> > >::TableType *v5; // rbx
  unsigned __int64 EntryCount; // rdi
  unsigned __int64 SizeMask; // rcx
  unsigned __int64 Length; // r8

  pTable = this->pTable;
  v5 = &this->pTable[hashValue + 1];
  EntryCount = hashValue;
  if ( v5->EntryCount == -2i64 || (pTable->SizeMask & *(unsigned int *)(v5->SizeMask + 28)) != hashValue )
    return -1i64;
  while ( 1 )
  {
    SizeMask = v5->SizeMask;
    if ( (pTable->SizeMask & *(unsigned int *)(SizeMask + 28)) == hashValue )
    {
      Length = key->Length;
      if ( *(_DWORD *)(SizeMask + 32) == Length && !strncmp(*(const char **)SizeMask, key->pStr, Length) )
        break;
    }
    EntryCount = v5->EntryCount;
    if ( v5->EntryCount == -1i64 )
      return -1i64;
    pTable = this->pTable;
    v5 = &this->pTable[EntryCount + 1];
  }
  return EntryCount;
}

void __fastcall Scaleform::GFx::ASStringManager::ASStringManager(
        Scaleform::GFx::ASStringManager *this,
        Scaleform::MemoryHeap *pheap)
{
  unsigned __int64 v3; // rax
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  Scaleform::GFx::ASStringNode *key; // [rsp+40h] [rbp+8h] BYREF

  this->pHeap = pheap;
  this->__vftable = (Scaleform::GFx::ASStringManager_vtbl *)&Scaleform::RefCountImplCore::`vftable';
  this->RefCount = 1;
  this->__vftable = (Scaleform::GFx::ASStringManager_vtbl *)&Scaleform::GFx::ASStringManager::`vftable';
  this->StringSet.pTable = 0i64;
  this->StringSet.pHeap = pheap;
  this->pLog.pObject = 0i64;
  Scaleform::StringLH::StringLH(&this->FileName);
  this->pStringNodePages = 0i64;
  this->pFreeStringNodes = 0i64;
  this->pFreeTextBuffers = 0i64;
  this->pTextBufferPages = 0i64;
  this->EmptyStringNode.RefCount = 1;
  this->EmptyStringNode.Size = 0;
  v3 = Scaleform::String::BernsteinHashFunctionCIS(&pnewText, 0i64, 0x1505ui64);
  this->EmptyStringNode.pManager = this;
  this->EmptyStringNode.pData = &pnewText;
  this->EmptyStringNode.pLower = &this->EmptyStringNode;
  key = &this->EmptyStringNode;
  this->EmptyStringNode.HashFlags = v3 & 0xFFFFFF | 0xC8000000;
  *(_QWORD *)&this->EmptyStringNode.LastLength = -1i64;
  this->EmptyStringNode.LastBufferPosAccessed = 0i64;
  Scaleform::HashSetBase<Scaleform::GFx::ASStringNode *,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>,Scaleform::AllocatorDH<Scaleform::GFx::ASStringNode *,324>,Scaleform::HashsetEntry<Scaleform::GFx::ASStringNode *,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>>>::add<Scaleform::GFx::ASStringNode *>(
    &this->StringSet,
    this->StringSet.pHeap,
    &key,
    this->EmptyStringNode.HashFlags);
  v4 = *(_OWORD *)&this->EmptyStringNode.pLower;
  *(_OWORD *)&this->NullStringNode.pData = *(_OWORD *)&this->EmptyStringNode.pData;
  v5 = *(_OWORD *)&this->EmptyStringNode.Size;
  *(_OWORD *)&this->NullStringNode.pLower = v4;
  *(_QWORD *)&v4 = this->EmptyStringNode.LastBufferPosAccessed;
  *(_OWORD *)&this->NullStringNode.Size = v5;
  this->NullStringNode.LastBufferPosAccessed = (const char *)v4;
  this->NullStringNode.pLower = &this->NullStringNode;
}

void __fastcall Scaleform::GFx::ASStringManager::~ASStringManager(Scaleform::GFx::ASStringManager *this)
{
  unsigned int v2; // esi
  Scaleform::GFx::ASStringManager::StringNodePage *pStringNodePages; // r14
  __int64 v4; // rbp
  Scaleform::GFx::ASStringManager::StringNodePage *v5; // rbx
  const char *v6; // rdx
  Scaleform::GFx::ASStringManager::TextPage::Entry *pData; // rdx
  Scaleform::GFx::ASStringManager::TextPage *pTextBufferPages; // rax
  void *pMem; // rdx
  Scaleform::GFx::LogState *pObject; // rcx
  char *v11; // r8
  volatile int *v12; // rbx
  Scaleform::RefCountVImpl *v13; // rcx
  Scaleform::HashSetBase<Scaleform::GFx::ASStringNode *,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>,Scaleform::AllocatorDH<Scaleform::GFx::ASStringNode *,324>,Scaleform::HashsetEntry<Scaleform::GFx::ASStringNode *,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *> > >::TableType *pTable; // rax
  __int64 v15; // rcx
  __int64 v16; // rdx
  Scaleform::HashSetBase<Scaleform::GFx::ASStringNode *,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>,Scaleform::AllocatorDH<Scaleform::GFx::ASStringNode *,324>,Scaleform::HashsetEntry<Scaleform::GFx::ASStringNode *,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *> > >::TableType *v17; // rax
  Scaleform::StringBuffer v18; // [rsp+20h] [rbp-48h] BYREF

  this->__vftable = (Scaleform::GFx::ASStringManager_vtbl *)&Scaleform::GFx::ASStringManager::`vftable';
  Scaleform::StringBuffer::StringBuffer(&v18, Scaleform::Memory::pGlobalHeap);
  v2 = 0;
  while ( this->pStringNodePages )
  {
    pStringNodePages = this->pStringNodePages;
    v4 = 127i64;
    v5 = pStringNodePages;
    this->pStringNodePages = pStringNodePages->pNext;
    do
    {
      if ( v5->Nodes[0].pData )
      {
        if ( v2 < 0x10 )
        {
          v6 = "'";
          if ( v2 )
            v6 = ", '";
          Scaleform::StringBuffer::AppendString(&v18, v6, -1i64);
          Scaleform::StringBuffer::AppendString(&v18, v5->Nodes[0].pData, -1i64);
          Scaleform::StringBuffer::AppendString(&v18, "'", -1i64);
        }
        ++v2;
        if ( (v5->Nodes[0].HashFlags & 0x40000000) == 0 )
        {
          pData = (Scaleform::GFx::ASStringManager::TextPage::Entry *)v5->Nodes[0].pData;
          if ( v5->Nodes[0].Size >= 0x10 )
          {
            Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, pData);
          }
          else
          {
            pData->pNextAlloc = this->pFreeTextBuffers;
            this->pFreeTextBuffers = pData;
          }
        }
      }
      v5 = (Scaleform::GFx::ASStringManager::StringNodePage *)((char *)v5 + 56);
      --v4;
    }
    while ( v4 );
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, pStringNodePages);
  }
  while ( this->pTextBufferPages )
  {
    pTextBufferPages = this->pTextBufferPages;
    pMem = pTextBufferPages->pMem;
    this->pTextBufferPages = pTextBufferPages->pNext;
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, pMem);
  }
  if ( v2 )
  {
    pObject = this->pLog.pObject;
    if ( pObject )
    {
      Scaleform::GFx::LogBase<Scaleform::GFx::LogState>::LogScriptError(
        &pObject->Scaleform::GFx::LogBase<Scaleform::GFx::LogState>,
        "ActionScript Memory leaks in movie '%s', including %d string nodes",
        (const char *)((this->FileName.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12),
        v2);
      v11 = (char *)&pnewText;
      if ( v18.pData )
        v11 = v18.pData;
      Scaleform::GFx::LogBase<Scaleform::GFx::LogState>::LogScriptError(
        &this->pLog.pObject->Scaleform::GFx::LogBase<Scaleform::GFx::LogState>,
        "Leaked string content: %s\n",
        v11);
    }
  }
  Scaleform::StringBuffer::~StringBuffer(&v18);
  v12 = (volatile int *)(this->FileName.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
  if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(v12 + 2, -1) == 1 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, (void *)v12);
  v13 = (Scaleform::RefCountVImpl *)this->pLog.pObject;
  if ( v13 )
    Scaleform::RefCountImpl::Release(v13);
  pTable = this->StringSet.pTable;
  if ( pTable )
  {
    v15 = 0i64;
    v16 = pTable->SizeMask + 1;
    do
    {
      v17 = this->StringSet.pTable;
      if ( v17[v15 + 1].EntryCount != -2i64 )
        v17[v15 + 1].EntryCount = -2i64;
      ++v15;
      --v16;
    }
    while ( v16 );
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->StringSet.pTable);
    this->StringSet.pTable = 0i64;
  }
  Scaleform::RefCountImplCore::~RefCountImplCore(this);
}

void __fastcall Scaleform::GFx::ASString::operator=(Scaleform::GFx::ASString *this, const char *pstr)
{
  unsigned __int64 v3; // r8
  Scaleform::GFx::ASStringNode *StringNode; // rsi
  Scaleform::GFx::ASStringNode *pNode; // rbx
  Scaleform::GFx::ASStringNode *pLower; // rcx
  Scaleform::HashSetBase<Scaleform::GFx::ASStringNode *,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>,Scaleform::AllocatorDH<Scaleform::GFx::ASStringNode *,324>,Scaleform::HashsetEntry<Scaleform::GFx::ASStringNode *,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *> > > *p_StringSet; // rcx
  Scaleform::GFx::ASStringNode *key; // [rsp+30h] [rbp+8h] BYREF

  v3 = -1i64;
  do
    ++v3;
  while ( pstr[v3] );
  StringNode = Scaleform::GFx::ASStringManager::CreateStringNode(this->pNode->pManager, pstr, v3);
  ++StringNode->RefCount;
  pNode = this->pNode;
  if ( this->pNode->RefCount-- == 1 )
  {
    pLower = pNode->pLower;
    if ( pLower != pNode && pLower )
      Scaleform::GFx::ASStringNode::Release(pLower);
    p_StringSet = &pNode->pManager->StringSet;
    key = pNode;
    Scaleform::HashSetBase<Scaleform::GFx::ASStringNode *,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>,Scaleform::AllocatorDH<Scaleform::GFx::ASStringNode *,324>,Scaleform::HashsetEntry<Scaleform::GFx::ASStringNode *,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>>>::RemoveAlt<Scaleform::GFx::ASStringNode *>(
      p_StringSet,
      &key);
    Scaleform::GFx::ASStringManager::FreeStringNode(pNode->pManager, pNode);
  }
  this->pNode = StringNode;
}

Scaleform::GFx::ASString *__fastcall Scaleform::GFx::ASString::operator+(
        Scaleform::GFx::ASString *this,
        Scaleform::GFx::ASString *result,
        const Scaleform::GFx::ASString *str)
{
  Scaleform::GFx::ASStringNode *StringNode; // rax

  StringNode = Scaleform::GFx::ASStringManager::CreateStringNode(
                 this->pNode->pManager,
                 this->pNode->pData,
                 this->pNode->Size,
                 str->pNode->pData,
                 str->pNode->Size);
  result->pNode = StringNode;
  ++StringNode->RefCount;
  return result;
}

Scaleform::GFx::ASString *__fastcall Scaleform::GFx::ASString::operator+(
        Scaleform::GFx::ASString *this,
        Scaleform::GFx::ASString *result,
        const char *pstr)
{
  Scaleform::GFx::ASStringNode *pNode; // rdx
  unsigned __int64 l2; // rax
  Scaleform::GFx::ASStringManager *pManager; // rcx
  Scaleform::GFx::ASStringNode *StringNode; // rax

  pNode = this->pNode;
  l2 = -1i64;
  pManager = this->pNode->pManager;
  do
    ++l2;
  while ( pstr[l2] );
  StringNode = Scaleform::GFx::ASStringManager::CreateStringNode(pManager, pNode->pData, pNode->Size, pstr, l2);
  result->pNode = StringNode;
  ++StringNode->RefCount;
  return result;
}

bool __fastcall Scaleform::GFx::ASString::operator<(
        Scaleform::GFx::ASString *this,
        const Scaleform::GFx::ASString *str)
{
  Scaleform::GFx::ASStringNode *pNode; // rcx
  Scaleform::GFx::ASStringNode *v3; // rdx
  unsigned int Size; // ebx
  size_t v6; // r8
  const char *pData; // rdx
  unsigned int v8; // edi
  const char *v9; // rcx
  int v10; // ecx

  pNode = this->pNode;
  v3 = str->pNode;
  if ( pNode == v3 )
    return 0;
  Size = v3->Size;
  v6 = Size;
  pData = v3->pData;
  v8 = pNode->Size;
  v9 = pNode->pData;
  if ( v8 < Size )
    v6 = v8;
  v10 = memcmp(v9, pData, v6);
  if ( v10 )
    return v10 < 0;
  else
    return v8 < Size;
}

Scaleform::GFx::ASStringManager::TextPage::Entry *__fastcall Scaleform::GFx::ASStringManager::AllocTextBuffer(
        Scaleform::GFx::ASStringManager *this,
        const char *pbuffer,
        unsigned __int64 length)
{
  Scaleform::GFx::ASStringManager::TextPage::Entry *pFreeTextBuffers; // rax
  Scaleform::GFx::ASStringManager::TextPage::Entry *v7; // rbx

  if ( length >= 0x10 )
  {
    v7 = (Scaleform::GFx::ASStringManager::TextPage::Entry *)this->pHeap->Alloc(this->pHeap, length + 1, 0i64);
  }
  else
  {
    if ( !this->pFreeTextBuffers )
      Scaleform::GFx::ASStringManager::AllocateTextBuffers(this);
    pFreeTextBuffers = this->pFreeTextBuffers;
    v7 = 0i64;
    if ( pFreeTextBuffers )
    {
      v7 = this->pFreeTextBuffers;
      this->pFreeTextBuffers = pFreeTextBuffers->pNextAlloc;
    }
  }
  if ( v7 )
  {
    memmove(v7, pbuffer, length);
    v7->Buff[length] = 0;
  }
  return v7;
}

void __fastcall Scaleform::GFx::ASStringManager::AllocateStringNodes(Scaleform::GFx::ASStringManager *this)
{
  Scaleform::GFx::ASStringManager::StringNodePage *v2; // rax
  __int64 v3; // r8
  unsigned int *p_LastLength; // rax
  Scaleform::GFx::ASStringNode *v5; // rdx

  v2 = (Scaleform::GFx::ASStringManager::StringNodePage *)this->pHeap->Alloc(this->pHeap, 7120i64, 0i64);
  if ( v2 )
  {
    v3 = 127i64;
    v2->pNext = this->pStringNodePages;
    this->pStringNodePages = v2;
    p_LastLength = &v2->Nodes[0].LastLength;
    do
    {
      *(_QWORD *)(p_LastLength - 7) = this;
      v5 = (Scaleform::GFx::ASStringNode *)(p_LastLength - 9);
      *(_QWORD *)p_LastLength = -1i64;
      *(_QWORD *)(p_LastLength + 3) = 0i64;
      p_LastLength += 14;
      v5->pData = 0i64;
      *(_QWORD *)(p_LastLength - 19) = this->pFreeStringNodes;
      this->pFreeStringNodes = v5;
      --v3;
    }
    while ( v3 );
  }
}

void __fastcall Scaleform::GFx::ASStringManager::AllocateTextBuffers(Scaleform::GFx::ASStringManager *this)
{
  void *v2; // rax
  Scaleform::GFx::ASStringManager::TextPage *v3; // rcx
  __int64 v4; // r8
  Scaleform::GFx::ASStringManager::TextPage::Entry *v5; // rax
  Scaleform::GFx::ASStringManager::TextPage::Entry *v6; // rdx
  Scaleform::GFx::ASStringManager::TextPage::Entry *v7; // rcx

  v2 = this->pHeap->Alloc(this->pHeap, 2040i64, 0i64);
  v3 = (Scaleform::GFx::ASStringManager::TextPage *)(((unsigned __int64)v2 + 7) & 0xFFFFFFFFFFFFFFF8ui64);
  if ( v3 )
  {
    v3->pMem = v2;
    v4 = 21i64;
    v3->pNext = this->pTextBufferPages;
    v5 = &v3->Entries[2];
    this->pTextBufferPages = v3;
    do
    {
      v5[-2].pNextAlloc = this->pFreeTextBuffers;
      v5[-1].pNextAlloc = v5 - 2;
      v6 = v5 + 2;
      v5->pNextAlloc = v5 - 1;
      v5[1].pNextAlloc = v5;
      v5[2].pNextAlloc = v5 + 1;
      v7 = v5 + 3;
      v5 += 6;
      v7->pNextAlloc = v6;
      this->pFreeTextBuffers = v7;
      --v4;
    }
    while ( v4 );
  }
}

void __fastcall Scaleform::GFx::ASString::Append(Scaleform::GFx::ASString *this, const Scaleform::GFx::ASString *str)
{
  Scaleform::GFx::ASStringNode *StringNode; // rsi
  Scaleform::GFx::ASStringNode *pNode; // rbx
  Scaleform::GFx::ASStringNode *pLower; // rcx
  Scaleform::HashSetBase<Scaleform::GFx::ASStringNode *,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>,Scaleform::AllocatorDH<Scaleform::GFx::ASStringNode *,324>,Scaleform::HashsetEntry<Scaleform::GFx::ASStringNode *,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *> > > *p_StringSet; // rcx
  Scaleform::GFx::ASStringNode *key; // [rsp+40h] [rbp+8h] BYREF

  StringNode = Scaleform::GFx::ASStringManager::CreateStringNode(
                 this->pNode->pManager,
                 this->pNode->pData,
                 this->pNode->Size,
                 str->pNode->pData,
                 str->pNode->Size);
  ++StringNode->RefCount;
  pNode = this->pNode;
  if ( this->pNode->RefCount-- == 1 )
  {
    pLower = pNode->pLower;
    if ( pLower != pNode && pLower )
      Scaleform::GFx::ASStringNode::Release(pLower);
    p_StringSet = &pNode->pManager->StringSet;
    key = pNode;
    Scaleform::HashSetBase<Scaleform::GFx::ASStringNode *,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>,Scaleform::AllocatorDH<Scaleform::GFx::ASStringNode *,324>,Scaleform::HashsetEntry<Scaleform::GFx::ASStringNode *,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>>>::RemoveAlt<Scaleform::GFx::ASStringNode *>(
      p_StringSet,
      &key);
    Scaleform::GFx::ASStringManager::FreeStringNode(pNode->pManager, pNode);
  }
  this->pNode = StringNode;
}

void __fastcall Scaleform::GFx::ASString::Append(Scaleform::GFx::ASString *this, const char *str, unsigned __int64 len)
{
  Scaleform::GFx::ASStringNode *StringNode; // rsi
  Scaleform::GFx::ASStringNode *pNode; // rbx
  Scaleform::GFx::ASStringNode *pLower; // rcx
  Scaleform::HashSetBase<Scaleform::GFx::ASStringNode *,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>,Scaleform::AllocatorDH<Scaleform::GFx::ASStringNode *,324>,Scaleform::HashsetEntry<Scaleform::GFx::ASStringNode *,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *> > > *p_StringSet; // rcx
  Scaleform::GFx::ASStringNode *key; // [rsp+40h] [rbp+8h] BYREF

  StringNode = Scaleform::GFx::ASStringManager::CreateStringNode(
                 this->pNode->pManager,
                 this->pNode->pData,
                 this->pNode->Size,
                 str,
                 len);
  ++StringNode->RefCount;
  pNode = this->pNode;
  if ( this->pNode->RefCount-- == 1 )
  {
    pLower = pNode->pLower;
    if ( pLower != pNode && pLower )
      Scaleform::GFx::ASStringNode::Release(pLower);
    p_StringSet = &pNode->pManager->StringSet;
    key = pNode;
    Scaleform::HashSetBase<Scaleform::GFx::ASStringNode *,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>,Scaleform::AllocatorDH<Scaleform::GFx::ASStringNode *,324>,Scaleform::HashsetEntry<Scaleform::GFx::ASStringNode *,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>>>::RemoveAlt<Scaleform::GFx::ASStringNode *>(
      p_StringSet,
      &key);
    Scaleform::GFx::ASStringManager::FreeStringNode(pNode->pManager, pNode);
  }
  this->pNode = StringNode;
}

Scaleform::GFx::ASStringNode *__fastcall Scaleform::GFx::ASConstString::AppendCharNode(
        Scaleform::GFx::ASConstString *this,
        unsigned int ch)
{
  Scaleform::GFx::ASStringNode *result; // rax
  __int64 pindex; // [rsp+30h] [rbp-28h] BYREF
  char pbuffer[8]; // [rsp+38h] [rbp-20h] BYREF

  pindex = 0i64;
  Scaleform::UTF8Util::EncodeCharSafe(pbuffer, 8ui64, &pindex, ch);
  result = Scaleform::GFx::ASStringManager::CreateStringNode(
             this->pNode->pManager,
             this->pNode->pData,
             this->pNode->Size,
             pbuffer,
             pindex);
  if ( (this->pNode->HashFlags & 0x8000000) != 0 && ch < 0x80 )
    result->HashFlags |= 0x8000000u;
  return result;
}

void __fastcall Scaleform::HashSetBase<Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short>>,Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short>>::NodeHashF,Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short>>::NodeAltHashF,Scaleform::AllocatorLH<unsigned short,261>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short>>,Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short>>::NodeHashF>>::Clear(
        Scaleform::HashSetBase<Scaleform::GFx::AS3::Instances::fl::Namespace *,Scaleform::GFx::AS3::NamespaceInstanceFactory::NamespaceHashFunc,Scaleform::GFx::AS3::NamespaceInstanceFactory::NamespaceHashFunc,Scaleform::AllocatorLH<Scaleform::GFx::AS3::Instances::fl::Namespace *,2>,Scaleform::HashsetEntry<Scaleform::GFx::AS3::Instances::fl::Namespace *,Scaleform::GFx::AS3::NamespaceInstanceFactory::NamespaceHashFunc> > *this)
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
      ++v2;
      --v3;
    }
    while ( v3 );
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->pTable);
    this->pTable = 0i64;
  }
}

void __fastcall Scaleform::GFx::ASString::Clear(Scaleform::GFx::ASString *this)
{
  Scaleform::GFx::ASStringManager *pManager; // rdi
  Scaleform::GFx::ASStringNode *p_EmptyStringNode; // rdi
  Scaleform::GFx::ASStringNode *pNode; // rbx
  Scaleform::GFx::ASStringNode *pLower; // rcx
  Scaleform::HashSetBase<Scaleform::GFx::ASStringNode *,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>,Scaleform::AllocatorDH<Scaleform::GFx::ASStringNode *,324>,Scaleform::HashsetEntry<Scaleform::GFx::ASStringNode *,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *> > > *p_StringSet; // rcx
  Scaleform::GFx::ASStringNode *key; // [rsp+30h] [rbp+8h] BYREF

  pManager = this->pNode->pManager;
  ++pManager->EmptyStringNode.RefCount;
  p_EmptyStringNode = &pManager->EmptyStringNode;
  pNode = this->pNode;
  if ( this->pNode->RefCount-- == 1 )
  {
    pLower = pNode->pLower;
    if ( pLower != pNode )
    {
      if ( pLower )
        Scaleform::GFx::ASStringNode::Release(pLower);
    }
    p_StringSet = &pNode->pManager->StringSet;
    key = pNode;
    Scaleform::HashSetBase<Scaleform::GFx::ASStringNode *,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>,Scaleform::AllocatorDH<Scaleform::GFx::ASStringNode *,324>,Scaleform::HashsetEntry<Scaleform::GFx::ASStringNode *,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>>>::RemoveAlt<Scaleform::GFx::ASStringNode *>(
      p_StringSet,
      &key);
    Scaleform::GFx::ASStringManager::FreeStringNode(pNode->pManager, pNode);
    this->pNode = p_EmptyStringNode;
  }
  else
  {
    this->pNode = p_EmptyStringNode;
  }
}

Scaleform::GFx::ASStringNode *__fastcall Scaleform::GFx::ASStringManager::CreateConstStringNode(
        Scaleform::GFx::ASStringManager *this,
        const char *pstr,
        unsigned __int64 length,
        unsigned int stringFlags)
{
  unsigned __int64 v8; // rax
  Scaleform::HashSetBase<Scaleform::GFx::ASStringNode *,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>,Scaleform::AllocatorDH<Scaleform::GFx::ASStringNode *,324>,Scaleform::HashsetEntry<Scaleform::GFx::ASStringNode *,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *> > >::TableType *pTable; // r8
  unsigned __int64 v10; // rsi
  signed __int64 v11; // rax
  Scaleform::GFx::ASStringNode *result; // rax
  Scaleform::GFx::ASStringNode *pFreeStringNodes; // rbx
  Scaleform::GFx::ASStringKey key; // [rsp+20h] [rbp-48h] BYREF
  Scaleform::GFx::ASStringNode *v15; // [rsp+70h] [rbp+8h] BYREF

  key.pStr = pstr;
  v8 = Scaleform::String::BernsteinHashFunctionCIS(pstr, length, 0x1505ui64);
  pTable = this->StringSet.pTable;
  v10 = v8 & 0xFFFFFF;
  key.Length = length;
  key.HashValue = v10;
  if ( pTable
    && (v11 = Scaleform::HashSetBase<Scaleform::GFx::ASStringNode *,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>,Scaleform::AllocatorDH<Scaleform::GFx::ASStringNode *,324>,Scaleform::HashsetEntry<Scaleform::GFx::ASStringNode *,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>>>::findIndexCore<Scaleform::GFx::ASStringKey>(
                &this->StringSet,
                &key,
                v10 & pTable->SizeMask),
        v11 >= 0) )
  {
    result = (Scaleform::GFx::ASStringNode *)this->StringSet.pTable[v11 + 1].SizeMask;
    result->HashFlags |= stringFlags;
  }
  else
  {
    if ( !this->pFreeStringNodes )
      Scaleform::GFx::ASStringManager::AllocateStringNodes(this);
    pFreeStringNodes = this->pFreeStringNodes;
    if ( pFreeStringNodes )
      this->pFreeStringNodes = pFreeStringNodes->pLower;
    v15 = pFreeStringNodes;
    if ( pFreeStringNodes )
    {
      pFreeStringNodes->RefCount = 0;
      pFreeStringNodes->Size = length;
      pFreeStringNodes->pData = pstr;
      pFreeStringNodes->HashFlags = stringFlags | v10 | 0x40000000;
      pFreeStringNodes->pLower = 0i64;
      Scaleform::HashSetBase<Scaleform::GFx::ASStringNode *,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>,Scaleform::AllocatorDH<Scaleform::GFx::ASStringNode *,324>,Scaleform::HashsetEntry<Scaleform::GFx::ASStringNode *,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>>>::add<Scaleform::GFx::ASStringNode *>(
        &this->StringSet,
        this->StringSet.pHeap,
        &v15,
        pFreeStringNodes->HashFlags);
      return pFreeStringNodes;
    }
    else
    {
      return &this->EmptyStringNode;
    }
  }
  return result;
}

Scaleform::GFx::ASStringNode *__fastcall Scaleform::GFx::ASStringManager::CreateStringNode(
        Scaleform::GFx::ASStringManager *this,
        const char *pstr)
{
  unsigned __int64 v3; // r8

  if ( !pstr )
    return &this->EmptyStringNode;
  v3 = -1i64;
  do
    ++v3;
  while ( pstr[v3] );
  return Scaleform::GFx::ASStringManager::CreateStringNode(this, pstr, v3);
}

Scaleform::GFx::ASStringNode *__fastcall Scaleform::GFx::ASStringManager::CreateStringNode(
        Scaleform::GFx::ASStringManager *this,
        const char *pstr1,
        unsigned __int64 l1,
        const char *pstr2,
        unsigned __int64 l2)
{
  unsigned __int64 v5; // r14
  unsigned __int64 v10; // rbp
  Scaleform::GFx::ASStringManager::TextPage::Entry *pFreeTextBuffers; // rax
  Scaleform::GFx::ASStringManager::TextPage::Entry *v12; // rdi
  unsigned __int64 v13; // rax
  Scaleform::HashSetBase<Scaleform::GFx::ASStringNode *,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>,Scaleform::AllocatorDH<Scaleform::GFx::ASStringNode *,324>,Scaleform::HashsetEntry<Scaleform::GFx::ASStringNode *,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *> > >::TableType *pTable; // r8
  unsigned __int64 v15; // r15
  signed __int64 v16; // rax
  Scaleform::GFx::ASStringNode *SizeMask; // rsi
  Scaleform::GFx::ASStringNode *result; // rax
  Scaleform::GFx::ASStringNode *pFreeStringNodes; // rsi
  Scaleform::GFx::ASStringKey key; // [rsp+20h] [rbp-38h] BYREF

  v5 = l2;
  v10 = l1 + l2;
  if ( l1 + l2 >= 0x10 )
  {
    v12 = (Scaleform::GFx::ASStringManager::TextPage::Entry *)this->pHeap->Alloc(this->pHeap, v10 + 1, 0i64);
  }
  else
  {
    if ( !this->pFreeTextBuffers )
      Scaleform::GFx::ASStringManager::AllocateTextBuffers(this);
    pFreeTextBuffers = this->pFreeTextBuffers;
    v12 = 0i64;
    if ( pFreeTextBuffers )
    {
      v12 = this->pFreeTextBuffers;
      this->pFreeTextBuffers = pFreeTextBuffers->pNextAlloc;
    }
  }
  if ( !v12 )
    return &this->EmptyStringNode;
  if ( pstr1 && l1 )
    memmove(v12, pstr1, l1);
  if ( pstr2 && v5 )
    memmove((char *)v12 + l1, pstr2, v5);
  v12->Buff[v10] = 0;
  key.pStr = (const char *)v12;
  v13 = Scaleform::String::BernsteinHashFunctionCIS(v12, v10, 0x1505ui64);
  pTable = this->StringSet.pTable;
  v15 = v13 & 0xFFFFFF;
  key.Length = v10;
  key.HashValue = v15;
  if ( !pTable
    || (v16 = Scaleform::HashSetBase<Scaleform::GFx::ASStringNode *,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>,Scaleform::AllocatorDH<Scaleform::GFx::ASStringNode *,324>,Scaleform::HashsetEntry<Scaleform::GFx::ASStringNode *,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>>>::findIndexCore<Scaleform::GFx::ASStringKey>(
                &this->StringSet,
                &key,
                v15 & pTable->SizeMask),
        v16 < 0) )
  {
    if ( !this->pFreeStringNodes )
      Scaleform::GFx::ASStringManager::AllocateStringNodes(this);
    pFreeStringNodes = this->pFreeStringNodes;
    if ( pFreeStringNodes )
      this->pFreeStringNodes = pFreeStringNodes->pLower;
    l2 = (unsigned __int64)pFreeStringNodes;
    if ( pFreeStringNodes )
    {
      pFreeStringNodes->RefCount = 0;
      pFreeStringNodes->Size = v10;
      pFreeStringNodes->pData = (const char *)v12;
      pFreeStringNodes->HashFlags = v15;
      pFreeStringNodes->pLower = 0i64;
      Scaleform::HashSetBase<Scaleform::GFx::ASStringNode *,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>,Scaleform::AllocatorDH<Scaleform::GFx::ASStringNode *,324>,Scaleform::HashsetEntry<Scaleform::GFx::ASStringNode *,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>>>::add<Scaleform::GFx::ASStringNode *>(
        &this->StringSet,
        this->StringSet.pHeap,
        (Scaleform::GFx::ASStringNode *const *)&l2,
        pFreeStringNodes->HashFlags);
      return pFreeStringNodes;
    }
    if ( v10 >= 0x10 )
    {
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v12);
    }
    else
    {
      v12->pNextAlloc = this->pFreeTextBuffers;
      this->pFreeTextBuffers = v12;
    }
    return &this->EmptyStringNode;
  }
  SizeMask = (Scaleform::GFx::ASStringNode *)this->StringSet.pTable[v16 + 1].SizeMask;
  if ( v10 >= 0x10 )
  {
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v12);
    return SizeMask;
  }
  else
  {
    v12->pNextAlloc = this->pFreeTextBuffers;
    result = SizeMask;
    this->pFreeTextBuffers = v12;
  }
  return result;
}

Scaleform::GFx::ASStringNode *__fastcall Scaleform::GFx::ASStringManager::CreateStringNode(
        Scaleform::GFx::ASStringManager *this,
        const char *pstr,
        unsigned __int64 length)
{
  unsigned __int64 v6; // rax
  Scaleform::HashSetBase<Scaleform::GFx::ASStringNode *,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>,Scaleform::AllocatorDH<Scaleform::GFx::ASStringNode *,324>,Scaleform::HashsetEntry<Scaleform::GFx::ASStringNode *,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *> > >::TableType *pTable; // r8
  unsigned __int64 v8; // r15
  signed __int64 v9; // rax
  Scaleform::GFx::ASStringNode *pFreeStringNodes; // rbx
  Scaleform::GFx::ASStringManager::TextPage::Entry *v12; // rax
  Scaleform::GFx::ASStringKey key; // [rsp+20h] [rbp-38h] BYREF
  Scaleform::GFx::ASStringNode *v14; // [rsp+68h] [rbp+10h] BYREF

  if ( !pstr || !length )
    return &this->EmptyStringNode;
  key.pStr = pstr;
  v6 = Scaleform::String::BernsteinHashFunctionCIS(pstr, length, 0x1505ui64);
  pTable = this->StringSet.pTable;
  v8 = v6 & 0xFFFFFF;
  key.Length = length;
  key.HashValue = v8;
  if ( pTable )
  {
    v9 = Scaleform::HashSetBase<Scaleform::GFx::ASStringNode *,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>,Scaleform::AllocatorDH<Scaleform::GFx::ASStringNode *,324>,Scaleform::HashsetEntry<Scaleform::GFx::ASStringNode *,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>>>::findIndexCore<Scaleform::GFx::ASStringKey>(
           &this->StringSet,
           &key,
           v8 & pTable->SizeMask);
    if ( v9 >= 0 )
      return (Scaleform::GFx::ASStringNode *)this->StringSet.pTable[v9 + 1].SizeMask;
  }
  if ( !this->pFreeStringNodes )
    Scaleform::GFx::ASStringManager::AllocateStringNodes(this);
  pFreeStringNodes = this->pFreeStringNodes;
  if ( pFreeStringNodes )
    this->pFreeStringNodes = pFreeStringNodes->pLower;
  v14 = pFreeStringNodes;
  if ( !pFreeStringNodes )
    return &this->EmptyStringNode;
  v12 = Scaleform::GFx::ASStringManager::AllocTextBuffer(this, pstr, length);
  pFreeStringNodes->pData = (const char *)v12;
  if ( !v12 )
  {
    Scaleform::GFx::ASStringManager::FreeStringNode(this, pFreeStringNodes);
    return &this->EmptyStringNode;
  }
  pFreeStringNodes->RefCount = 0;
  pFreeStringNodes->Size = length;
  pFreeStringNodes->HashFlags = v8;
  pFreeStringNodes->pLower = 0i64;
  Scaleform::HashSetBase<Scaleform::GFx::ASStringNode *,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>,Scaleform::AllocatorDH<Scaleform::GFx::ASStringNode *,324>,Scaleform::HashsetEntry<Scaleform::GFx::ASStringNode *,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>>>::add<Scaleform::GFx::ASStringNode *>(
    &this->StringSet,
    this->StringSet.pHeap,
    &v14,
    pFreeStringNodes->HashFlags);
  return pFreeStringNodes;
}

Scaleform::GFx::ASStringNode *__fastcall Scaleform::GFx::ASStringManager::CreateStringNode(
        Scaleform::GFx::ASStringManager *this,
        const wchar_t *pwstr,
        __int64 len)
{
  Scaleform::GFx::ASStringNode *StringNode; // rax
  void *v7; // rbx
  Scaleform::GFx::ASStringNode *v8; // rdi
  Scaleform::String v10; // [rsp+48h] [rbp+20h] BYREF

  Scaleform::String::String(&v10);
  Scaleform::String::AppendString(&v10, pwstr, len);
  StringNode = Scaleform::GFx::ASStringManager::CreateStringNode(
                 this,
                 (const char *)((v10.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12),
                 *(_QWORD *)(v10.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) & 0x7FFFFFFFFFFFFFFFi64);
  v7 = (void *)(v10.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
  v8 = StringNode;
  if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
         (volatile int *)((v10.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
         -1) == 1 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v7);
  return v8;
}

void __fastcall Scaleform::GFx::ASStringManager::FreeStringNode(
        Scaleform::GFx::ASStringManager *this,
        Scaleform::GFx::ASStringNode *pnode)
{
  Scaleform::GFx::ASStringManager::TextPage::Entry *pData; // rdx

  pData = (Scaleform::GFx::ASStringManager::TextPage::Entry *)pnode->pData;
  if ( pData )
  {
    if ( (pnode->HashFlags & 0x40000000) == 0 )
    {
      if ( pnode->Size >= 0x10 )
      {
        ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
      }
      else
      {
        pData->pNextAlloc = this->pFreeTextBuffers;
        this->pFreeTextBuffers = pData;
      }
    }
    pnode->pData = 0i64;
  }
  *(_QWORD *)&pnode->LastLength = -1i64;
  pnode->LastBufferPosAccessed = 0i64;
  pnode->pLower = this->pFreeStringNodes;
  this->pFreeStringNodes = pnode;
}

__int64 __fastcall Scaleform::GFx::ASConstString::GetCharAt(Scaleform::GFx::ASConstString *this, unsigned int index)
{
  Scaleform::GFx::ASStringNode *pNode; // rax
  unsigned int LastIndexAccessed; // ecx
  char *LastBufferPosAccessed; // rcx
  signed int v8; // ebx
  unsigned int Char_Advance0; // ecx
  char *putf8Buffer; // [rsp+30h] [rbp+8h] BYREF

  pNode = this->pNode;
  if ( (this->pNode->HashFlags & 0x8000000) != 0 )
    return (unsigned int)pNode->pData[index];
  LastIndexAccessed = pNode->LastIndexAccessed;
  if ( LastIndexAccessed == -1 || index < LastIndexAccessed )
  {
    pNode->LastIndexAccessed = 0;
    this->pNode->LastBufferPosAccessed = this->pNode->pData;
  }
  LastBufferPosAccessed = (char *)this->pNode->LastBufferPosAccessed;
  v8 = index - this->pNode->LastIndexAccessed;
  for ( putf8Buffer = LastBufferPosAccessed; ; LastBufferPosAccessed = putf8Buffer )
  {
    this->pNode->LastBufferPosAccessed = LastBufferPosAccessed;
    --v8;
    Char_Advance0 = Scaleform::UTF8Util::DecodeNextChar_Advance0((const char **)&putf8Buffer);
    if ( v8 < 0 )
      break;
  }
  this->pNode->LastIndexAccessed = index;
  return Char_Advance0;
}

unsigned int __fastcall Scaleform::GFx::ASConstString::GetFirstCharAt(
        Scaleform::GFx::ASConstString *this,
        unsigned __int64 index,
        const char **offset)
{
  Scaleform::GFx::ASStringNode *pNode; // rax
  char *v6; // rdi
  unsigned int result; // eax
  char *putf8Buffer; // [rsp+30h] [rbp+8h] BYREF

  pNode = this->pNode;
  putf8Buffer = (char *)this->pNode->pData;
  v6 = &putf8Buffer[pNode->Size];
  while ( 1 )
  {
    result = Scaleform::UTF8Util::DecodeNextChar_Advance0((const char **)&putf8Buffer);
    --index;
    if ( putf8Buffer >= v6 )
      break;
    if ( (index & 0x8000000000000000ui64) != 0i64 )
    {
      *offset = putf8Buffer;
      return result;
    }
  }
  return result;
}

__int64 __fastcall Scaleform::GFx::ASConstString::GetLength(Scaleform::GFx::ASConstString *this)
{
  Scaleform::GFx::ASStringNode *pNode; // rcx
  __int64 Size; // rdi
  __int64 result; // rax

  pNode = this->pNode;
  Size = pNode->Size;
  if ( (pNode->HashFlags & 0x8000000) != 0 )
    return (unsigned int)Size;
  result = pNode->LastLength;
  if ( (_DWORD)result == -1 )
  {
    this->pNode->LastLength = Scaleform::UTF8Util::GetLength(pNode->pData, Size);
    if ( this->pNode->LastLength == (_DWORD)Size )
      this->pNode->HashFlags |= 0x8000000u;
    return this->pNode->LastLength;
  }
  return result;
}

unsigned int __fastcall Scaleform::GFx::ASConstString::GetNextChar(
        Scaleform::GFx::ASConstString *this,
        const char **offset)
{
  unsigned int result; // eax

  if ( (this->pNode->HashFlags & 0x8000000) != 0 )
  {
    return *(*offset)++;
  }
  else
  {
    result = Scaleform::UTF8Util::DecodeNextChar_Advance0(offset);
    if ( !result )
      --*offset;
  }
  return result;
}

void __fastcall Scaleform::GFx::ASStringManager::InitBuiltinArray(
        Scaleform::GFx::ASStringManager *this,
        Scaleform::GFx::ASStringNodeHolder *nodes,
        const char **strings,
        unsigned int count)
{
  signed __int64 v4; // r14
  Scaleform::GFx::ASStringNodeHolder *v5; // rsi
  __int64 v6; // rbp
  const char *v8; // rdx
  unsigned __int64 v9; // r8
  Scaleform::GFx::ASStringNode *ConstStringNode; // rbx
  Scaleform::GFx::ASStringNode *pLower; // rcx
  Scaleform::HashSetBase<Scaleform::GFx::ASStringNode *,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>,Scaleform::AllocatorDH<Scaleform::GFx::ASStringNode *,324>,Scaleform::HashsetEntry<Scaleform::GFx::ASStringNode *,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *> > > *p_StringSet; // rcx
  char *pData; // rdx
  Scaleform::GFx::ASStringManager *pManager; // rdi
  Scaleform::GFx::ASStringNode *key; // [rsp+20h] [rbp-28h] BYREF

  if ( count )
  {
    v4 = (char *)strings - (char *)nodes;
    v5 = nodes;
    v6 = count;
    do
    {
      v8 = *(const char **)((char *)&v5->pNode + v4);
      v9 = -1i64;
      do
        ++v9;
      while ( v8[v9] );
      ConstStringNode = Scaleform::GFx::ASStringManager::CreateConstStringNode(this, v8, v9, 0x80000000);
      ++ConstStringNode->RefCount;
      v5->pNode = ConstStringNode;
      ++ConstStringNode->RefCount;
      Scaleform::GFx::ASStringNode::ResolveLowercase_Impl(v5->pNode);
      if ( ConstStringNode->RefCount-- == 1 )
      {
        pLower = ConstStringNode->pLower;
        if ( pLower != ConstStringNode && pLower )
          Scaleform::GFx::ASStringNode::Release(pLower);
        p_StringSet = &ConstStringNode->pManager->StringSet;
        key = ConstStringNode;
        Scaleform::HashSetBase<Scaleform::GFx::ASStringNode *,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>,Scaleform::AllocatorDH<Scaleform::GFx::ASStringNode *,324>,Scaleform::HashsetEntry<Scaleform::GFx::ASStringNode *,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>>>::RemoveAlt<Scaleform::GFx::ASStringNode *>(
          p_StringSet,
          &key);
        pData = (char *)ConstStringNode->pData;
        pManager = ConstStringNode->pManager;
        if ( ConstStringNode->pData )
        {
          if ( (ConstStringNode->HashFlags & 0x40000000) == 0 )
          {
            if ( ConstStringNode->Size >= 0x10 )
            {
              ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
            }
            else
            {
              *(_QWORD *)pData = pManager->pFreeTextBuffers;
              pManager->pFreeTextBuffers = (Scaleform::GFx::ASStringManager::TextPage::Entry *)pData;
            }
          }
          ConstStringNode->pData = 0i64;
        }
        *(_QWORD *)&ConstStringNode->LastLength = -1i64;
        ConstStringNode->LastBufferPosAccessed = 0i64;
        ConstStringNode->pLower = pManager->pFreeStringNodes;
        pManager->pFreeStringNodes = ConstStringNode;
      }
      ++v5;
      --v6;
    }
    while ( v6 );
  }
}

__int64 __fastcall Scaleform::GFx::ASConstString::LocaleCompare_CaseCheck(
        Scaleform::GFx::ASConstString *this,
        const char *pstr,
        unsigned __int64 len,
        bool caseSensitive)
{
  unsigned __int64 v5; // rbx
  Scaleform::GFx::ASStringNode *pNode; // rcx
  __int64 Size; // rdi
  __int64 v10; // r14
  wchar_t *v11; // rsi
  wchar_t *v12; // rdi
  int v13; // eax
  unsigned int v14; // ebx
  char v16[512]; // [rsp+20h] [rbp-448h] BYREF
  char v17[512]; // [rsp+220h] [rbp-248h] BYREF

  v5 = len;
  if ( len == -1i64 )
  {
    v5 = -1i64;
    do
      ++v5;
    while ( pstr[v5] );
  }
  pNode = this->pNode;
  Size = pNode->Size;
  if ( (pNode->HashFlags & 0x8000000) == 0 )
  {
    if ( pNode->LastLength == -1 )
    {
      this->pNode->LastLength = Scaleform::UTF8Util::GetLength(pNode->pData, Size);
      if ( this->pNode->LastLength == (_DWORD)Size )
        this->pNode->HashFlags |= 0x8000000u;
      LODWORD(Size) = this->pNode->LastLength;
    }
    else
    {
      LODWORD(Size) = pNode->LastLength;
    }
  }
  v10 = (unsigned int)Size;
  if ( (unsigned int)Size < 0xFAui64 )
    v11 = (wchar_t *)v16;
  else
    v11 = (wchar_t *)Scaleform::Memory::pGlobalHeap->Alloc(
                       Scaleform::Memory::pGlobalHeap,
                       2i64 * (unsigned int)Size + 2,
                       0i64);
  if ( v5 < 0xFA )
    v12 = (wchar_t *)v17;
  else
    v12 = (wchar_t *)Scaleform::Memory::pGlobalHeap->Alloc(Scaleform::Memory::pGlobalHeap, 2 * v5 + 2, 0i64);
  Scaleform::UTF8Util::DecodeStringSafe(v11, v10 + 1, this->pNode->pData, this->pNode->Size);
  Scaleform::UTF8Util::DecodeStringSafe(v12, v5 + 1, pstr, v5);
  if ( caseSensitive )
    v13 = wcscoll(v11, v12);
  else
    v13 = wcsicoll(v11, v12);
  v14 = v13;
  if ( v11 != (wchar_t *)v16 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v11);
  if ( v12 != (wchar_t *)v17 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v12);
  return v14;
}

void __fastcall Scaleform::GFx::ASStringNode::Release(Scaleform::GFx::ASStringNode *this)
{
  Scaleform::GFx::ASStringNode *pLower; // rcx
  Scaleform::HashSetUncachedDH<Scaleform::GFx::ASStringNode *,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>,324> *p_StringSet; // rcx
  Scaleform::GFx::ASStringNode *key; // [rsp+30h] [rbp+8h] BYREF

  if ( this->RefCount-- == 1 )
  {
    pLower = this->pLower;
    if ( pLower != this )
    {
      if ( pLower )
        Scaleform::GFx::ASStringNode::Release(pLower);
    }
    p_StringSet = &this->pManager->StringSet;
    key = this;
    Scaleform::HashSetBase<Scaleform::GFx::ASStringNode *,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>,Scaleform::AllocatorDH<Scaleform::GFx::ASStringNode *,324>,Scaleform::HashsetEntry<Scaleform::GFx::ASStringNode *,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>>>::RemoveAlt<Scaleform::GFx::ASStringNode *>(
      p_StringSet,
      &key);
    Scaleform::GFx::ASStringManager::FreeStringNode(this->pManager, this);
  }
}

void __fastcall Scaleform::GFx::ASStringManager::ReleaseBuiltinArray(
        Scaleform::GFx::ASStringManager *this,
        Scaleform::GFx::ASStringNodeHolder *nodes,
        unsigned int count)
{
  __int64 v4; // rbp
  Scaleform::GFx::ASStringNode *pNode; // rbx
  Scaleform::GFx::ASStringNode *pLower; // rcx
  Scaleform::HashSetBase<Scaleform::GFx::ASStringNode *,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>,Scaleform::AllocatorDH<Scaleform::GFx::ASStringNode *,324>,Scaleform::HashsetEntry<Scaleform::GFx::ASStringNode *,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *> > > *p_StringSet; // rcx
  char *pData; // rdx
  Scaleform::GFx::ASStringManager *pManager; // rsi
  Scaleform::GFx::ASStringNode *key; // [rsp+58h] [rbp+20h] BYREF

  if ( count )
  {
    v4 = count;
    do
    {
      pNode = nodes->pNode;
      if ( nodes->pNode->RefCount-- == 1 )
      {
        pLower = pNode->pLower;
        if ( pLower != pNode && pLower )
          Scaleform::GFx::ASStringNode::Release(pLower);
        p_StringSet = &pNode->pManager->StringSet;
        key = pNode;
        Scaleform::HashSetBase<Scaleform::GFx::ASStringNode *,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>,Scaleform::AllocatorDH<Scaleform::GFx::ASStringNode *,324>,Scaleform::HashsetEntry<Scaleform::GFx::ASStringNode *,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>>>::RemoveAlt<Scaleform::GFx::ASStringNode *>(
          p_StringSet,
          &key);
        pData = (char *)pNode->pData;
        pManager = pNode->pManager;
        if ( pNode->pData )
        {
          if ( (pNode->HashFlags & 0x40000000) == 0 )
          {
            if ( pNode->Size >= 0x10 )
            {
              ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
            }
            else
            {
              *(_QWORD *)pData = pManager->pFreeTextBuffers;
              pManager->pFreeTextBuffers = (Scaleform::GFx::ASStringManager::TextPage::Entry *)pData;
            }
          }
          pNode->pData = 0i64;
        }
        *(_QWORD *)&pNode->LastLength = -1i64;
        pNode->LastBufferPosAccessed = 0i64;
        pNode->pLower = pManager->pFreeStringNodes;
        pManager->pFreeStringNodes = pNode;
      }
      nodes->pNode = 0i64;
      ++nodes;
      --v4;
    }
    while ( v4 );
  }
}

void __fastcall Scaleform::GFx::ASStringNode::ReleaseNode(Scaleform::GFx::ASStringNode *this)
{
  Scaleform::GFx::ASStringNode *pLower; // rcx
  Scaleform::HashSetUncachedDH<Scaleform::GFx::ASStringNode *,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>,324> *p_StringSet; // rcx
  Scaleform::GFx::ASStringNode *key; // [rsp+30h] [rbp+8h] BYREF

  pLower = this->pLower;
  if ( pLower != this )
  {
    if ( pLower )
    {
      if ( pLower->RefCount-- == 1 )
        Scaleform::GFx::ASStringNode::ReleaseNode(pLower);
    }
  }
  p_StringSet = &this->pManager->StringSet;
  key = this;
  Scaleform::HashSetBase<Scaleform::GFx::ASStringNode *,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>,Scaleform::AllocatorDH<Scaleform::GFx::ASStringNode *,324>,Scaleform::HashsetEntry<Scaleform::GFx::ASStringNode *,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>>>::RemoveAlt<Scaleform::GFx::ASStringNode *>(
    p_StringSet,
    &key);
  Scaleform::GFx::ASStringManager::FreeStringNode(this->pManager, this);
}

void __fastcall Scaleform::GFx::ASStringNode::ResolveLowercase_Impl(Scaleform::GFx::ASStringNode *this)
{
  Scaleform::String *v2; // rax
  void *v3; // rbx
  Scaleform::GFx::ASStringNode *StringNode; // rax
  void *v5; // rbx
  Scaleform::String result; // [rsp+30h] [rbp+8h] BYREF
  Scaleform::String v7; // [rsp+38h] [rbp+10h] BYREF

  Scaleform::String::String(&v7, this->pData, this->Size);
  Scaleform::String::ToLower(v2, &result);
  v3 = (void *)(v7.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
  if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
         (volatile int *)((v7.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
         -1) == 1 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v3);
  StringNode = Scaleform::GFx::ASStringManager::CreateStringNode(
                 this->pManager,
                 (const char *)((result.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12),
                 *(_QWORD *)(result.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) & 0x7FFFFFFFFFFFFFFFi64);
  if ( StringNode != &this->pManager->EmptyStringNode )
  {
    this->pLower = StringNode;
    if ( StringNode != this )
      ++StringNode->RefCount;
  }
  v5 = (void *)(result.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
  if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
         (volatile int *)((result.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
         -1) == 1 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v5);
}

Scaleform::GFx::ASStringNode *__fastcall Scaleform::GFx::ASConstString::SubstringNode(
        Scaleform::GFx::ASConstString *this,
        int start,
        int end)
{
  Scaleform::GFx::ASStringNode *pNode; // rax
  char *pData; // rcx
  int v9; // ebx
  const char *v10; // rbp
  const char *v11; // rdi
  unsigned int Char_Advance0; // eax
  char *putf8Buffer; // [rsp+58h] [rbp+20h] BYREF

  pNode = this->pNode;
  if ( start == end )
    return &pNode->pManager->EmptyStringNode;
  pData = (char *)pNode->pData;
  v9 = 0;
  v10 = pNode->pData;
  v11 = pNode->pData;
  putf8Buffer = (char *)pNode->pData;
  do
  {
    if ( v9 == start )
      v11 = pData;
    Char_Advance0 = Scaleform::UTF8Util::DecodeNextChar_Advance0((const char **)&putf8Buffer);
    pData = putf8Buffer;
    if ( !Char_Advance0 )
      pData = --putf8Buffer;
    if ( ++v9 == end )
    {
      v10 = pData;
      goto LABEL_14;
    }
  }
  while ( Char_Advance0 );
  if ( v9 < end )
    v10 = pData;
LABEL_14:
  if ( v10 < v11 )
    LODWORD(v10) = (_DWORD)v11;
  return Scaleform::GFx::ASStringManager::CreateStringNode(this->pNode->pManager, v11, (int)v10 - (int)v11);
}

Scaleform::GFx::ASStringNode *__fastcall Scaleform::GFx::ASConstString::ToLowerNode(
        Scaleform::GFx::ASConstString *this)
{
  Scaleform::GFx::ASStringNode *pNode; // rcx
  Scaleform::GFx::ASStringNode *result; // rax

  pNode = this->pNode;
  if ( !pNode->pLower )
    Scaleform::GFx::ASStringNode::ResolveLowercase_Impl(pNode);
  result = this->pNode->pLower;
  if ( !result )
    return &this->pNode->pManager->EmptyStringNode;
  return result;
}

Scaleform::GFx::ASStringNode *__fastcall Scaleform::GFx::ASConstString::ToUpperNode(
        Scaleform::GFx::ASConstString *this)
{
  Scaleform::String *v2; // rax
  void *v3; // rbx
  Scaleform::GFx::ASStringNode *StringNode; // rax
  void *v5; // rbx
  Scaleform::GFx::ASStringNode *v6; // rdi
  Scaleform::String result; // [rsp+30h] [rbp+8h] BYREF
  Scaleform::String v9; // [rsp+38h] [rbp+10h] BYREF

  Scaleform::String::String(&v9, this->pNode->pData, this->pNode->Size);
  Scaleform::String::ToUpper(v2, &result);
  v3 = (void *)(v9.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
  if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
         (volatile int *)((v9.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
         -1) == 1 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v3);
  StringNode = Scaleform::GFx::ASStringManager::CreateStringNode(
                 this->pNode->pManager,
                 (const char *)((result.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12),
                 *(_QWORD *)(result.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) & 0x7FFFFFFFFFFFFFFFi64);
  v5 = (void *)(result.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
  v6 = StringNode;
  if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
         (volatile int *)((result.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
         -1) == 1 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v5);
  return v6;
}

Scaleform::GFx::ASStringNode *__fastcall Scaleform::GFx::ASConstString::TruncateWhitespaceNode(
        Scaleform::GFx::ASConstString *this)
{
  const char *pData; // rax
  unsigned __int64 Size; // r8
  const char *pStr; // rcx
  Scaleform::StringDataPtr result; // [rsp+20h] [rbp-28h] BYREF
  Scaleform::StringDataPtr v7; // [rsp+30h] [rbp-18h] BYREF

  pData = this->pNode->pData;
  v7.Size = this->pNode->Size;
  v7.pStr = pData;
  Scaleform::StringDataPtr::GetTruncateWhitespace(&v7, &result);
  Size = result.Size;
  pStr = result.pStr;
  if ( v7.Size != result.Size )
    return Scaleform::GFx::ASStringManager::CreateStringNode(this->pNode->pManager, pStr, Size);
  if ( v7.pStr != result.pStr )
  {
    if ( !result.pStr || !v7.pStr )
      return Scaleform::GFx::ASStringManager::CreateStringNode(this->pNode->pManager, pStr, Size);
    if ( strncmp(result.pStr, v7.pStr, result.Size) )
    {
      Size = result.Size;
      pStr = result.pStr;
      return Scaleform::GFx::ASStringManager::CreateStringNode(this->pNode->pManager, pStr, Size);
    }
  }
  return this->pNode;
}

void __fastcall Scaleform::HashSetBase<Scaleform::GFx::ASStringNode *,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>,Scaleform::AllocatorDH<Scaleform::GFx::ASStringNode *,324>,Scaleform::HashsetEntry<Scaleform::GFx::ASStringNode *,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>>>::setRawCapacity(
        Scaleform::HashSetBase<Scaleform::GFx::ASStringNode *,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>,Scaleform::AllocatorDH<Scaleform::GFx::ASStringNode *,324>,Scaleform::HashsetEntry<Scaleform::GFx::ASStringNode *,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *> > > *this,
        void *pheapAddr,
        unsigned __int64 newSize)
{
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rcx
  unsigned __int64 v9; // rsi
  Scaleform::HashSetBase<Scaleform::GFx::ASStringNode *,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>,Scaleform::AllocatorDH<Scaleform::GFx::ASStringNode *,324>,Scaleform::HashsetEntry<Scaleform::GFx::ASStringNode *,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *> > >::TableType *pTable; // rdi
  int v11; // [rsp+50h] [rbp+18h] BYREF
  Scaleform::HashSetBase<Scaleform::GFx::ASStringNode *,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>,Scaleform::AllocatorDH<Scaleform::GFx::ASStringNode *,324>,Scaleform::HashsetEntry<Scaleform::GFx::ASStringNode *,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *> > > v12; // [rsp+58h] [rbp+20h] BYREF

  if ( newSize )
  {
    if ( newSize >= 8 )
      v5 = 1i64 << ((unsigned __int8)Scaleform::Alg::UpperBit(newSize - 1) + 1);
    else
      v5 = 8i64;
    v6 = *(_QWORD *)pheapAddr;
    v7 = 0i64;
    v12.pTable = 0i64;
    v11 = 324;
    v12.pTable = (Scaleform::HashSetBase<Scaleform::GFx::ASStringNode *,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>,Scaleform::AllocatorDH<Scaleform::GFx::ASStringNode *,324>,Scaleform::HashsetEntry<Scaleform::GFx::ASStringNode *,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *> > >::TableType *)(*(__int64 (__fastcall **)(void *, __int64, int *))(v6 + 80))(pheapAddr, 16 * (v5 + 1), &v11);
    v12.pTable->EntryCount = 0i64;
    v12.pTable->SizeMask = v5 - 1;
    if ( v5 )
    {
      v8 = 0i64;
      do
      {
        v12.pTable[++v8].EntryCount = -2i64;
        --v5;
      }
      while ( v5 );
    }
    if ( this->pTable )
    {
      v9 = this->pTable->SizeMask + 1;
      do
      {
        pTable = this->pTable;
        if ( this->pTable[v7 + 1].EntryCount != -2i64 )
        {
          Scaleform::HashSetBase<Scaleform::GFx::ASStringNode *,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>,Scaleform::AllocatorDH<Scaleform::GFx::ASStringNode *,324>,Scaleform::HashsetEntry<Scaleform::GFx::ASStringNode *,Scaleform::GFx::ASStringNodeHashFunc<Scaleform::GFx::ASStringNode *>>>::add<Scaleform::GFx::ASStringNode *>(
            &v12,
            pheapAddr,
            (Scaleform::GFx::ASStringNode *const *)&pTable[v7 + 1].SizeMask,
            *(unsigned int *)(pTable[v7 + 1].SizeMask + 28));
          pTable[v7 + 1].EntryCount = -2i64;
        }
        ++v7;
        --v9;
      }
      while ( v9 );
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->pTable);
    }
    this->pTable = v12.pTable;
  }
  else
  {
    Scaleform::HashSetBase<Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short>>,Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short>>::NodeHashF,Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short>>::NodeAltHashF,Scaleform::AllocatorLH<unsigned short,261>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short>>,Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short>>::NodeHashF>>::Clear((Scaleform::HashSetBase<Scaleform::GFx::AS3::Instances::fl::Namespace *,Scaleform::GFx::AS3::NamespaceInstanceFactory::NamespaceHashFunc,Scaleform::GFx::AS3::NamespaceInstanceFactory::NamespaceHashFunc,Scaleform::AllocatorLH<Scaleform::GFx::AS3::Instances::fl::Namespace *,2>,Scaleform::HashsetEntry<Scaleform::GFx::AS3::Instances::fl::Namespace *,Scaleform::GFx::AS3::NamespaceInstanceFactory::NamespaceHashFunc> > *)this);
  }
}

