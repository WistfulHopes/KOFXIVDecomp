#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_pathdatapacker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "program files (x86)/windows kits/8.1/include/shared/winerror.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "program files (x86)/windows kits/8.1/include/shared/guiddef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "program files (x86)/windows kits/8.1/include/um/oleauto.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_font.h"
#include "program files (x86)/windows kits/8.1/include/um/winnt.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "program files (x86)/windows kits/8.1/include/shared/basetsd.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "program files (x86)/windows kits/8.1/include/shared/strsafe.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "program files (x86)/windows kits/8.1/include/um/winuser.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "program files (x86)/windows kits/8.1/include/um/propidl.h"
#include "program files (x86)/windows kits/8.1/include/um/winbase.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_gradients.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/fontprovider/render_fontproviderwinapi.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_hash.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "program files (x86)/windows kits/8.1/include/shared/stralign.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_image.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatapacked.h"

struct Scaleform::Render::GFxGdiSelectObjectGuard
{
	HDC__ * WinDC; // 0x0
	void * WinObj; // 0x8
	GFxGdiSelectObjectGuard(HDC__ *, void *);
	~GFxGdiSelectObjectGuard();
};
Scaleform::Render::ExternalFontWinAPI::~ExternalFontWinAPI(); // 0x14036F760
long Scaleform::Render::EnumFontFamExProc(tagENUMLOGFONTEXW * lpelfe, tagNEWTEXTMETRICEXW * lpntme, unsigned long FontType, long long lParam); // 0x14036FD50
Scaleform::Render::ExternalFontWinAPI::ExternalFontWinAPI(Scaleform::Render::FontProviderWinAPI * pprovider, Scaleform::Render::FontSysDataWinAPI * sysData, const char * name, unsigned long fontFlags, Scaleform::Lock * fontLock); // 0x14036F2D0
void Scaleform::Render::ExternalFontWinAPI::loadKerningPairs(); // 0x140373BA0
class Scaleform::Array<tagKERNINGPAIR,2,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayData<tagKERNINGPAIR,Scaleform::AllocatorGH<tagKERNINGPAIR,2>,Scaleform::ArrayDefaultPolicy> >
{
	struct ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	Array<tagKERNINGPAIR,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::Array<tagKERNINGPAIR,2,Scaleform::ArrayDefaultPolicy> &);
	Array<tagKERNINGPAIR,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDefaultPolicy &);
	Array<tagKERNINGPAIR,2,Scaleform::ArrayDefaultPolicy>(long);
	Array<tagKERNINGPAIR,2,Scaleform::ArrayDefaultPolicy>();
	const Scaleform::Array<tagKERNINGPAIR,2,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::Array<tagKERNINGPAIR,2,Scaleform::ArrayDefaultPolicy> &);
	~Array<tagKERNINGPAIR,2,Scaleform::ArrayDefaultPolicy>();
};
typedef _GLYPHMETRICS GLYPHMETRICS;
typedef const wchar_t * STRSAFE_PCNZWCH;
typedef tagTTPOLYGONHEADER TTPOLYGONHEADER;
typedef long(*OLDFONTENUMPROCW)(const tagLOGFONTW *, const tagTEXTMETRICW *, unsigned long, long long);
typedef tagNEWTEXTMETRICW NEWTEXTMETRICW;
typedef tagFONTSIGNATURE FONTSIGNATURE;
typedef const char * STRSAFE_PCNZCH;
typedef tagLOGFONTW * LPLOGFONTW;
typedef tagLOGFONTW LOGFONTW;
typedef long(*FONTENUMPROCW)(const tagLOGFONTW *, const tagTEXTMETRICW *, unsigned long, long long);
typedef const wchar_t * STRSAFE_PCUNZWCH;
typedef _GLYPHMETRICS * LPGLYPHMETRICS;
typedef tagKERNINGPAIR * LPKERNINGPAIR;
typedef char * STRSAFE_LPSTR;
typedef wchar_t * STRSAFE_LPWSTR;
typedef tagPOINTFX POINTFX;
typedef tagENUMLOGFONTEXW ENUMLOGFONTEXW;
typedef const char * STRSAFE_LPCSTR;
typedef tagNEWTEXTMETRICEXW NEWTEXTMETRICEXW;
bool Scaleform::Render::ExternalFontWinAPI::decomposeGlyphOutline(const unsigned char * data, unsigned long size, Scaleform::Render::GlyphShape * shape, unsigned long hintedSize); // 0x1403731D0
typedef tagTTPOLYCURVE TTPOLYCURVE;
typedef _MAT2 MAT2;
typedef const wchar_t * STRSAFE_LPCWSTR;
typedef tagPOINT POINT;
class Scaleform::Render::GFxBitsetIterator
{
public:
	GFxBitsetIterator(const unsigned char *, unsigned long);
	void operator++();
	unsigned long GetBit();
private:
	const unsigned char * Bits; // 0x0
	unsigned char Mask; // 0x8
};
void Scaleform::Render::ExternalFontWinAPI::decomposeGlyphBitmap(const unsigned char * data, long w, long h, long x, long y, Scaleform::Render::GlyphRaster * raster); // 0x140373120
long Scaleform::Render::ExternalFontWinAPI::GetGlyphIndex(unsigned short code); // 0x14036FF30
bool Scaleform::Render::ExternalFontWinAPI::IsHintedVectorGlyph(unsigned long glyphIndex, unsigned long hintedSize); // 0x140370AF0
bool Scaleform::Render::ExternalFontWinAPI::IsHintedRasterGlyph(unsigned long glyphIndex, unsigned long hintedSize); // 0x140370A50
bool Scaleform::Render::ExternalFontWinAPI::GetTemporaryGlyphShape(unsigned long glyphIndex, unsigned long hintedSize, Scaleform::Render::GlyphShape * shape); // 0x140370740
bool Scaleform::Render::ExternalFontWinAPI::GetGlyphRaster(unsigned long glyphIndex, unsigned long hintedSize, Scaleform::Render::GlyphRaster * raster); // 0x140370270
float Scaleform::Render::ExternalFontWinAPI::GetAdvance(unsigned long glyphIndex); // 0x14036FD60
float Scaleform::Render::ExternalFontWinAPI::GetKerningAdjustment(unsigned long lastCode, unsigned long thisCode); // 0x140370660
float Scaleform::Render::ExternalFontWinAPI::GetGlyphWidth(unsigned long glyphIndex); // 0x1403705E0
float Scaleform::Render::ExternalFontWinAPI::GetGlyphHeight(unsigned long glyphIndex); // 0x14036FEB0
Scaleform::Render::Rect<float> & Scaleform::Render::ExternalFontWinAPI::GetGlyphBounds(unsigned long glyphIndex, Scaleform::Render::Rect<float> * prect); // 0x14036FDE0
const char * Scaleform::Render::ExternalFontWinAPI::GetName(); // 0x140370730
Scaleform::Render::FontProviderWinAPI::FontProviderWinAPI(HDC__ * dc); // 0x14036F650
Scaleform::Render::FontProviderWinAPI::~FontProviderWinAPI(); // 0x14036F8F0
Scaleform::Render::Font::NativeHintingType * Scaleform::Render::FontProviderWinAPI::findNativeHinting(const char * name); // 0x140373B10
Scaleform::Render::Font * Scaleform::Render::FontProviderWinAPI::CreateFont(const char * name, unsigned long fontFlags); // 0x14036FB90
long Scaleform::Render::LoadFontNamesProc(tagENUMLOGFONTEXW * lpelfe, tagNEWTEXTMETRICEXW * __formal, unsigned long __formal, long long lParam); // 0x140370BF0
void Scaleform::Render::FontProviderWinAPI::LoadFontNames(Scaleform::StringHash<Scaleform::String,Scaleform::AllocatorGH<Scaleform::String,2> > & fontnames); // 0x140370B90void __fastcall Scaleform::HashSetBase<Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short>>,Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short>>::NodeHashF,Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short>>::NodeAltHashF,Scaleform::AllocatorLH<unsigned short,2>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short>>,Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short>>::NodeHashF>>::add<Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short>>>(
        Scaleform::HashSetBase<Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short> >,Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short> >::NodeHashF,Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned short,2>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short> >,Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short> >::NodeHashF> > *this,
        void *pmemAddr,
        const Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short> > *key,
        unsigned __int64 hashValue)
{
  unsigned __int64 v7; // rdi
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short> >,Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short> >::NodeHashF,Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned short,2>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short> >,Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short> >::NodeHashF> >::TableType *pTable; // rcx
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short> >,Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short> >::NodeHashF,Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned short,2>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short> >,Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short> >::NodeHashF> >::TableType *v9; // r10
  unsigned __int64 EntryCount; // r11
  unsigned __int64 SizeMask; // r9
  __int64 v12; // rdx
  unsigned __int64 v13; // rax
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short> >,Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short> >::NodeHashF,Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned short,2>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short> >,Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short> >::NodeHashF> >::TableType *v14; // r8
  Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short> > v15; // rax
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short> >,Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short> >::NodeHashF,Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned short,2>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short> >,Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short> >::NodeHashF> >::TableType *i; // rax

  Scaleform::HashSetBase<Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short>>,Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short>>::NodeHashF,Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short>>::NodeAltHashF,Scaleform::AllocatorLH<unsigned short,2>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short>>,Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short>>::NodeHashF>>::CheckExpand(
    this,
    pmemAddr);
  v7 = this->pTable->SizeMask & hashValue;
  ++this->pTable->EntryCount;
  pTable = this->pTable;
  v9 = &this->pTable[v7 + 1];
  EntryCount = v9->EntryCount;
  if ( v9->EntryCount == -2i64 )
  {
    v9->EntryCount = -1i64;
    LOWORD(v9->SizeMask) = key->First;
    HIDWORD(v9->SizeMask) = key->Second;
  }
  else
  {
    SizeMask = pTable->SizeMask;
    v12 = v7;
    do
      v12 = SizeMask & (v12 + 1);
    while ( pTable[v12 + 1].EntryCount != -2i64 );
    v13 = SizeMask & LOWORD(v9->SizeMask);
    v14 = &pTable[v12 + 1];
    if ( v13 == v7 )
    {
      if ( v14 )
      {
        v14->EntryCount = EntryCount;
        LOWORD(v14->SizeMask) = v9->SizeMask;
        HIDWORD(v14->SizeMask) = HIDWORD(v9->SizeMask);
      }
      v15 = *key;
      v9->EntryCount = v12;
    }
    else
    {
      for ( i = &pTable[v13 + 1]; i->EntryCount != v7; i = &pTable[i->EntryCount + 1] )
        ;
      if ( v14 )
      {
        v14->EntryCount = EntryCount;
        LOWORD(v14->SizeMask) = v9->SizeMask;
        HIDWORD(v14->SizeMask) = HIDWORD(v9->SizeMask);
      }
      i->EntryCount = v12;
      v15 = *key;
      v9->EntryCount = -1i64;
    }
    v9->SizeMask = (unsigned __int64)v15;
  }
}

void __fastcall Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType>>,Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType>>::NodeHashF,Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType>>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::ExternalFontWinAPI::KerningPairType,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType>>,Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType>>::NodeHashF>>::add<Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType>>>(
        Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType> >,Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType> >::NodeHashF,Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::ExternalFontWinAPI::KerningPairType,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType> >,Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType> >::NodeHashF> > *this,
        void *pmemAddr,
        const Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType> > *key,
        unsigned __int64 hashValue)
{
  unsigned __int64 v7; // rdi
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType> >,Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType> >::NodeHashF,Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::ExternalFontWinAPI::KerningPairType,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType> >,Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType> >::NodeHashF> >::TableType *pTable; // rdx
  unsigned __int64 v9; // r11
  __int64 v10; // r8
  unsigned __int64 *v11; // r9
  __int64 v12; // rax
  Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType> > v13; // rax
  __int64 v14; // rcx
  bool v15; // zf
  unsigned __int64 *i; // rcx
  __int64 v17; // rcx

  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType>>,Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType>>::NodeHashF,Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType>>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::ExternalFontWinAPI::KerningPairType,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType>>,Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType>>::NodeHashF>>::CheckExpand(
    this,
    pmemAddr);
  v7 = this->pTable->SizeMask & hashValue;
  ++this->pTable->EntryCount;
  pTable = this->pTable;
  v9 = *(&this->pTable[1].EntryCount + 3 * v7);
  if ( v9 == -2i64 )
  {
    *(&pTable[1].EntryCount + 3 * v7) = -1i64;
    *(&pTable[1].SizeMask + 3 * v7) = 0i64;
    *((_DWORD *)&pTable[2].EntryCount + 6 * v7) = key->First;
    *((_DWORD *)&pTable[2].EntryCount + 6 * v7 + 1) = LODWORD(key->Second);
  }
  else
  {
    v10 = v7;
    do
      v10 = pTable->SizeMask & (v10 + 1);
    while ( *(&pTable[1].EntryCount + 3 * v10) != -2i64 );
    v11 = &pTable[v10 + 1].EntryCount + v10;
    v12 = *(&pTable[1].SizeMask + 3 * v7);
    if ( v12 == v7 )
    {
      if ( v11 )
      {
        *v11 = v9;
        v11[1] = *(&pTable[1].SizeMask + 3 * v7);
        *((_DWORD *)v11 + 4) = *((_DWORD *)&pTable[2].EntryCount + 6 * v7);
        *((_DWORD *)v11 + 5) = *((_DWORD *)&pTable[2].EntryCount + 6 * v7 + 1);
      }
      v13 = *key;
      *(&pTable[1].EntryCount + 3 * v7) = v10;
    }
    else
    {
      v14 = v12 + 2 * (v12 + 1);
      v15 = *(&pTable->EntryCount + v14) == v7;
      for ( i = &pTable->EntryCount + v14; !v15; i = &pTable->EntryCount + v17 )
      {
        v17 = *i + 2 * (*i + 1);
        v15 = *(&pTable->EntryCount + v17) == v7;
      }
      if ( v11 )
      {
        *v11 = v9;
        v11[1] = *(&pTable[1].SizeMask + 3 * v7);
        *((_DWORD *)v11 + 4) = *((_DWORD *)&pTable[2].EntryCount + 6 * v7);
        *((_DWORD *)v11 + 5) = *((_DWORD *)&pTable[2].EntryCount + 6 * v7 + 1);
      }
      *i = v10;
      v13 = *key;
      *(&pTable[1].EntryCount + 3 * v7) = -1i64;
    }
    *((Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType> > *)&pTable[2].EntryCount
    + 3 * v7) = v13;
  }
  *(&pTable[1].SizeMask + 3 * v7) = v7;
}

void __fastcall Scaleform::HashSetBase<Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short>>,Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short>>::NodeHashF,Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short>>::NodeAltHashF,Scaleform::AllocatorLH<unsigned short,2>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short>>,Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short>>::NodeHashF>>::add<Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short>>::NodeRef>(
        Scaleform::HashSetBase<Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short> >,Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short> >::NodeHashF,Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned short,2>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short> >,Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short> >::NodeHashF> > *this,
        void *pmemAddr,
        const Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short> >::NodeRef *key,
        unsigned __int64 hashValue)
{
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short> >,Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short> >::NodeHashF,Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned short,2>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short> >,Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short> >::NodeHashF> >::TableType *pTable; // rax
  unsigned __int64 v8; // r8
  unsigned __int64 SizeMask; // r8
  unsigned __int64 v10; // rbx
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short> >,Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short> >::NodeHashF,Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned short,2>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short> >,Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short> >::NodeHashF> >::TableType *v11; // r9
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short> >,Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short> >::NodeHashF,Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned short,2>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short> >,Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short> >::NodeHashF> >::TableType *v12; // r8
  unsigned __int64 EntryCount; // r11
  unsigned __int64 v14; // rcx
  __int64 v15; // rdx
  unsigned __int64 v16; // rax
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short> >,Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short> >::NodeHashF,Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned short,2>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short> >,Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short> >::NodeHashF> >::TableType *v17; // r10
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short> >,Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short> >::NodeHashF,Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned short,2>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short> >,Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short> >::NodeHashF> >::TableType *i; // rcx

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
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short>>,Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short>>::NodeHashF,Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short>>::NodeAltHashF,Scaleform::AllocatorLH<unsigned short,2>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short>>,Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short>>::NodeHashF>>::setRawCapacity(
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
    LOWORD(v12->SizeMask) = *key->pFirst;
    HIDWORD(v12->SizeMask) = *key->pSecond;
  }
  else
  {
    v14 = v11->SizeMask;
    v15 = v10;
    do
      v15 = v14 & (v15 + 1);
    while ( v11[v15 + 1].EntryCount != -2i64 );
    v16 = v14 & LOWORD(v12->SizeMask);
    v17 = &v11[v15 + 1];
    if ( v16 == v10 )
    {
      if ( v17 )
      {
        v17->EntryCount = EntryCount;
        LOWORD(v17->SizeMask) = v12->SizeMask;
        HIDWORD(v17->SizeMask) = HIDWORD(v12->SizeMask);
      }
      LOWORD(v12->SizeMask) = *key->pFirst;
      HIDWORD(v12->SizeMask) = *key->pSecond;
      v12->EntryCount = v15;
    }
    else
    {
      for ( i = &v11[v16 + 1]; i->EntryCount != v10; i = &v11[i->EntryCount + 1] )
        ;
      if ( v17 )
      {
        v17->EntryCount = EntryCount;
        LOWORD(v17->SizeMask) = v12->SizeMask;
        HIDWORD(v17->SizeMask) = HIDWORD(v12->SizeMask);
      }
      i->EntryCount = v15;
      LOWORD(v12->SizeMask) = *key->pFirst;
      HIDWORD(v12->SizeMask) = *key->pSecond;
      v12->EntryCount = -1i64;
    }
  }
}

void __fastcall Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType>>,Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType>>::NodeHashF,Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType>>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::ExternalFontWinAPI::KerningPairType,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType>>,Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType>>::NodeHashF>>::add<Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType>>::NodeRef>(
        Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType> >,Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType> >::NodeHashF,Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::ExternalFontWinAPI::KerningPairType,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType> >,Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType> >::NodeHashF> > *this,
        void *pmemAddr,
        const Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType> >::NodeRef *key,
        unsigned __int64 hashValue)
{
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType> >,Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType> >::NodeHashF,Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::ExternalFontWinAPI::KerningPairType,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType> >,Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType> >::NodeHashF> >::TableType *pTable; // rax
  unsigned __int64 v8; // r8
  unsigned __int64 SizeMask; // r8
  unsigned __int64 v10; // rbx
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType> >,Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType> >::NodeHashF,Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::ExternalFontWinAPI::KerningPairType,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType> >,Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType> >::NodeHashF> >::TableType *v11; // rdx
  unsigned __int64 v12; // r11
  __int64 v13; // r8
  unsigned __int64 *v14; // r10
  __int64 v15; // rax
  __int64 v16; // rcx
  bool v17; // zf
  unsigned __int64 *i; // rcx
  __int64 v19; // rcx

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
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType>>,Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType>>::NodeHashF,Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType>>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::ExternalFontWinAPI::KerningPairType,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType>>,Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType>>::NodeHashF>>::setRawCapacity(
    this,
    pmemAddr,
    v8);
LABEL_6:
  v10 = this->pTable->SizeMask & hashValue;
  ++this->pTable->EntryCount;
  v11 = this->pTable;
  v12 = *(&this->pTable[1].EntryCount + 3 * v10);
  if ( v12 == -2i64 )
  {
    *(&v11[1].EntryCount + 3 * v10) = -1i64;
    *(&v11[1].SizeMask + 3 * v10) = 0i64;
    *((_DWORD *)&v11[2].EntryCount + 6 * v10) = *key->pFirst;
    *((_DWORD *)&v11[2].EntryCount + 6 * v10 + 1) = *(_DWORD *)key->pSecond;
  }
  else
  {
    v13 = v10;
    do
      v13 = v11->SizeMask & (v13 + 1);
    while ( *(&v11[1].EntryCount + 3 * v13) != -2i64 );
    v14 = &v11[v13 + 1].EntryCount + v13;
    v15 = *(&v11[1].SizeMask + 3 * v10);
    if ( v15 == v10 )
    {
      if ( v14 )
      {
        *v14 = v12;
        v14[1] = *(&v11[1].SizeMask + 3 * v10);
        *((_DWORD *)v14 + 4) = *((_DWORD *)&v11[2].EntryCount + 6 * v10);
        *((_DWORD *)v14 + 5) = *((_DWORD *)&v11[2].EntryCount + 6 * v10 + 1);
      }
      *((_DWORD *)&v11[2].EntryCount + 6 * v10) = *key->pFirst;
      *((_DWORD *)&v11[2].EntryCount + 6 * v10 + 1) = *(_DWORD *)key->pSecond;
      *(&v11[1].EntryCount + 3 * v10) = v13;
    }
    else
    {
      v16 = v15 + 2 * (v15 + 1);
      v17 = *(&v11->EntryCount + v16) == v10;
      for ( i = &v11->EntryCount + v16; !v17; i = &v11->EntryCount + v19 )
      {
        v19 = *i + 2 * (*i + 1);
        v17 = *(&v11->EntryCount + v19) == v10;
      }
      if ( v14 )
      {
        *v14 = v12;
        v14[1] = *(&v11[1].SizeMask + 3 * v10);
        *((_DWORD *)v14 + 4) = *((_DWORD *)&v11[2].EntryCount + 6 * v10);
        *((_DWORD *)v14 + 5) = *((_DWORD *)&v11[2].EntryCount + 6 * v10 + 1);
      }
      *i = v13;
      *((_DWORD *)&v11[2].EntryCount + 6 * v10) = *key->pFirst;
      *((_DWORD *)&v11[2].EntryCount + 6 * v10 + 1) = *(_DWORD *)key->pSecond;
      *(&v11[1].EntryCount + 3 * v10) = -1i64;
    }
  }
  *(&v11[1].SizeMask + 3 * v10) = v10;
}

void __fastcall Scaleform::Render::ExternalFontWinAPI::ExternalFontWinAPI(
        Scaleform::Render::ExternalFontWinAPI *this,
        Scaleform::Render::FontProviderWinAPI *pprovider,
        Scaleform::Render::FontSysDataWinAPI *sysData,
        const char *name,
        unsigned int fontFlags,
        Scaleform::Lock *fontLock)
{
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 Length; // rbx
  signed __int64 v13; // r8
  wchar_t *lfFaceName; // rcx
  __int64 v15; // rdx
  wchar_t v16; // ax
  wchar_t *v17; // rax
  Scaleform::Render::FontSysDataWinAPI *pSysData; // rcx
  __int64 v19; // rcx
  char v20; // al
  __int64 v21; // rcx
  char v22; // al
  int v23; // ecx
  HFONT__ *FontW; // rax
  HDC__ *WinHDC; // rbx
  HGDIOBJ v26; // rsi
  float Scale1024; // xmm2_4
  float v28; // xmm1_4
  float tmDescent; // xmm0_4
  LPARAM lParam; // [rsp+70h] [rbp-E8h] BYREF
  tagTEXTMETRICW tm; // [rsp+78h] [rbp-E0h] BYREF
  tagLOGFONTW Logfont; // [rsp+C0h] [rbp-98h] BYREF

  this->__vftable = (Scaleform::Render::ExternalFontWinAPI_vtbl *)&Scaleform::RefCountImplCore::`vftable';
  this->__vftable = (Scaleform::Render::ExternalFontWinAPI_vtbl *)&Scaleform::Render::Font::`vftable';
  this->Flags = fontFlags;
  this->RefCount = 1;
  *(_QWORD *)&this->Ascent = 0i64;
  this->Leading = 0.0;
  *(_DWORD *)&this->LowerCaseTop = 0;
  this->hRef.pManager.Value = 0i64;
  this->hRef.pFontHandle = 0i64;
  this->__vftable = (Scaleform::Render::ExternalFontWinAPI_vtbl *)&Scaleform::Render::ExternalFontWinAPI::`vftable';
  if ( pprovider )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)pprovider);
  this->pFontProvider.pObject = pprovider;
  this->pSysData = sysData;
  this->Name.Data.Data = 0i64;
  this->Name.Data.Size = 0i64;
  this->Name.Data.Policy.Capacity = 0i64;
  this->NameW.Data.Data = 0i64;
  this->NameW.Data.Size = 0i64;
  this->NameW.Data.Policy.Capacity = 0i64;
  this->MasterFont = 0i64;
  this->HintedFont = 0i64;
  this->LastHintedFontSize = 0;
  this->Glyphs.Data.Data = 0i64;
  this->Glyphs.Data.Size = 0i64;
  this->Glyphs.Data.Policy.Capacity = 0i64;
  this->CodeTable.mHash.pTable = 0i64;
  this->KerningPairs.mHash.pTable = 0i64;
  this->Scale1024 = 4.2666669;
  Scaleform::String::String(&this->Hinting.Typeface);
  v10 = -1i64;
  this->pFontLock = fontLock;
  do
    ++v10;
  while ( name[v10] );
  Scaleform::ArrayData<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Resize(
    (Scaleform::ArrayData<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy> *)&this->Name,
    v10 + 1);
  v11 = -1i64;
  do
    ++v11;
  while ( name[v11] );
  strcpy_s(this->Name.Data.Data, v11 + 1, name);
  Length = Scaleform::UTF8Util::GetLength(name, -1i64);
  Scaleform::ArrayData<wchar_t,Scaleform::AllocatorLH<wchar_t,2>,Scaleform::ArrayDefaultPolicy>::Resize(
    &this->NameW.Data,
    Length + 1);
  Scaleform::UTF8Util::DecodeStringSafe(this->NameW.Data.Data, Length + 1, name, -1i64);
  v13 = (char *)this->NameW.Data.Data - (char *)Logfont.lfFaceName;
  lfFaceName = Logfont.lfFaceName;
  v15 = 32i64;
  do
  {
    if ( v15 == -2147483614 )
      break;
    v16 = *(wchar_t *)((char *)lfFaceName + v13);
    if ( !v16 )
      break;
    *lfFaceName++ = v16;
    --v15;
  }
  while ( v15 );
  v17 = lfFaceName - 1;
  LOBYTE(lParam) = 0;
  if ( v15 )
    v17 = lfFaceName;
  pSysData = this->pSysData;
  *v17 = 0;
  Logfont.lfCharSet = 1;
  EnumFontFamiliesExW(
    pSysData->WinHDC,
    &Logfont,
    (FONTENUMPROCW)Scaleform::Render::EnumFontFamExProc,
    (LPARAM)&lParam,
    0);
  if ( (_BYTE)lParam )
    goto LABEL_22;
  v19 = 0i64;
  while ( 1 )
  {
    v20 = name[v19++];
    if ( v20 != aSans[v19 - 1] )
      break;
    if ( v19 == 6 )
      goto LABEL_22;
  }
  if ( !strcmp(name, "_typewriter") )
  {
LABEL_22:
    v23 = 400;
    if ( (this->Flags & 2) != 0 )
      v23 = 700;
    FontW = CreateFontW(-240, 0, 0, 0, v23, this->Flags & 1, 0, 0, 1u, 0, 0, 4u, 0, this->NameW.Data.Data);
    this->MasterFont = FontW;
    if ( FontW )
    {
      WinHDC = this->pSysData->WinHDC;
      v26 = SelectObject(WinHDC, FontW);
      if ( GetTextMetricsW(this->pSysData->WinHDC, &tm) )
      {
        Scale1024 = this->Scale1024;
        v28 = (float)tm.tmAscent * Scale1024;
        this->Leading = (float)tm.tmExternalLeading * Scale1024;
        tmDescent = (float)tm.tmDescent;
        this->Ascent = v28;
        this->Descent = tmDescent * Scale1024;
        Scaleform::Render::ExternalFontWinAPI::loadKerningPairs(this);
      }
      SelectObject(WinHDC, v26);
    }
  }
  else
  {
    v21 = 0i64;
    while ( 1 )
    {
      v22 = name[v21++];
      if ( v22 != aSerif[v21 - 1] )
        break;
      if ( v21 == 7 )
        goto LABEL_22;
    }
  }
}

void __fastcall Scaleform::Render::FontProviderWinAPI::FontProviderWinAPI(
        Scaleform::Render::FontProviderWinAPI *this,
        HDC__ *dc)
{
  unsigned __int64 v3; // r8
  unsigned __int64 Size; // rax
  Scaleform::Render::Font::NativeHintingType *v5; // rbx
  void *v6; // rbx
  Scaleform::String src; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+28h] [rbp-20h]
  unsigned int v9; // [rsp+30h] [rbp-18h]
  unsigned int v10; // [rsp+34h] [rbp-14h]

  this->__vftable = (Scaleform::Render::FontProviderWinAPI_vtbl *)&Scaleform::RefCountImplCore::`vftable';
  this->RefCount = 1;
  this->__vftable = (Scaleform::Render::FontProviderWinAPI_vtbl *)&Scaleform::Render::FontProviderWinAPI::`vftable';
  this->SysData.GlyphBuffer.Data.Data = 0i64;
  this->SysData.GlyphBuffer.Data.Size = 0i64;
  this->SysData.GlyphBuffer.Data.Policy.Capacity = 0i64;
  this->SysData.WinHDC = dc;
  this->NativeHinting.Data.Data = 0i64;
  this->NativeHinting.Data.Size = 0i64;
  this->NativeHinting.Data.Policy.Capacity = 0i64;
  Scaleform::Lock::Lock(&this->FontLock, 0);
  Scaleform::String::String(&src);
  v3 = this->NativeHinting.Data.Size + 1;
  v8 = 1i64;
  v9 = 24;
  v10 = 24;
  Scaleform::ArrayDataBase<Scaleform::Render::Font::NativeHintingType,Scaleform::AllocatorGH<Scaleform::Render::Font::NativeHintingType,2>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
    &this->NativeHinting.Data,
    &this->NativeHinting,
    v3);
  Size = this->NativeHinting.Data.Size;
  v5 = &this->NativeHinting.Data.Data[Size - 1];
  if ( v5 )
  {
    Scaleform::String::String(&this->NativeHinting.Data.Data[Size - 1].Typeface, &src);
    *(_QWORD *)&v5->RasterRange = v8;
    v5->MaxRasterHintedSize = v9;
    v5->MaxVectorHintedSize = v10;
  }
  v6 = (void *)(src.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
  if ( (unsigned int)Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
                       (volatile int *)((src.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
                       -1) == 1 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v6);
}

void __fastcall Scaleform::Render::ExternalFontWinAPI::~ExternalFontWinAPI(Scaleform::Render::ExternalFontWinAPI *this)
{
  HFONT__ *HintedFont; // rcx
  HFONT__ *MasterFont; // rcx
  volatile int *v4; // rbx
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType> >,Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType> >::NodeHashF,Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::ExternalFontWinAPI::KerningPairType,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType> >,Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType> >::NodeHashF> >::TableType *pTable; // rax
  __int64 v6; // rcx
  __int64 v7; // rdx
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType> >,Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType> >::NodeHashF,Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::ExternalFontWinAPI::KerningPairType,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType> >,Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType> >::NodeHashF> >::TableType *v8; // rax
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short> >,Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short> >::NodeHashF,Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned short,2>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short> >,Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short> >::NodeHashF> >::TableType *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short> >,Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short> >::NodeHashF,Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned short,2>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short> >,Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short> >::NodeHashF> >::TableType *v12; // rax
  Scaleform::RefCountVImpl *pObject; // rcx

  this->__vftable = (Scaleform::Render::ExternalFontWinAPI_vtbl *)&Scaleform::Render::ExternalFontWinAPI::`vftable';
  HintedFont = this->HintedFont;
  if ( HintedFont )
    DeleteObject(HintedFont);
  MasterFont = this->MasterFont;
  if ( MasterFont )
    DeleteObject(MasterFont);
  v4 = (volatile int *)(this->Hinting.Typeface.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
  if ( (unsigned int)Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(v4 + 2, -1) == 1 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, (void *)v4);
  pTable = this->KerningPairs.mHash.pTable;
  if ( pTable )
  {
    v6 = 0i64;
    v7 = pTable->SizeMask + 1;
    do
    {
      v8 = this->KerningPairs.mHash.pTable;
      if ( *(unsigned __int64 *)((char *)&v8[1].EntryCount + v6) != -2i64 )
        *(unsigned __int64 *)((char *)&v8[1].EntryCount + v6) = -2i64;
      v6 += 24i64;
      --v7;
    }
    while ( v7 );
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->KerningPairs.mHash.pTable);
    this->KerningPairs.mHash.pTable = 0i64;
  }
  v9 = this->CodeTable.mHash.pTable;
  if ( v9 )
  {
    v10 = 0i64;
    v11 = v9->SizeMask + 1;
    do
    {
      v12 = this->CodeTable.mHash.pTable;
      if ( v12[v10 + 1].EntryCount != -2i64 )
        v12[v10 + 1].EntryCount = -2i64;
      ++v10;
      --v11;
    }
    while ( v11 );
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->CodeTable.mHash.pTable);
    this->CodeTable.mHash.pTable = 0i64;
  }
  Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->Glyphs.Data.Data);
  Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->NameW.Data.Data);
  Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->Name.Data.Data);
  pObject = (Scaleform::RefCountVImpl *)this->pFontProvider.pObject;
  if ( pObject )
    Scaleform::RefCountImpl::Release(pObject);
  this->__vftable = (Scaleform::Render::ExternalFontWinAPI_vtbl *)&Scaleform::Render::Font::`vftable';
  Scaleform::Render::FontCacheHandleRef::releaseFont(&this->hRef);
  Scaleform::RefCountImplCore::~RefCountImplCore(this);
}

void __fastcall Scaleform::Render::FontProviderWinAPI::~FontProviderWinAPI(Scaleform::Render::FontProviderWinAPI *this)
{
  this->__vftable = (Scaleform::Render::FontProviderWinAPI_vtbl *)&Scaleform::Render::FontProviderWinAPI::`vftable';
  Scaleform::Lock::~Lock(&this->FontLock);
  Scaleform::ConstructorMov<Scaleform::Render::Font::NativeHintingType>::DestructArray(
    this->NativeHinting.Data.Data,
    this->NativeHinting.Data.Size);
  if ( this->NativeHinting.Data.Data )
    ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
  if ( this->SysData.GlyphBuffer.Data.Data )
    ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
  this->__vftable = (Scaleform::Render::FontProviderWinAPI_vtbl *)&Scaleform::Render::FontProvider::`vftable';
  Scaleform::RefCountImplCore::~RefCountImplCore(this);
}

void __fastcall Scaleform::HashSetBase<Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short>>,Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short>>::NodeHashF,Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short>>::NodeAltHashF,Scaleform::AllocatorLH<unsigned short,2>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short>>,Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short>>::NodeHashF>>::CheckExpand(
        Scaleform::HashSetBase<Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short> >,Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short> >::NodeHashF,Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned short,2>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short> >,Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short> >::NodeHashF> > *this,
        void *pmemAddr)
{
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short> >,Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short> >::NodeHashF,Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned short,2>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short> >,Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short> >::NodeHashF> >::TableType *pTable; // rax
  unsigned __int64 SizeMask; // r8

  pTable = this->pTable;
  if ( this->pTable )
  {
    SizeMask = pTable->SizeMask;
    if ( 5 * pTable->EntryCount > 4 * SizeMask + 4 )
      Scaleform::HashSetBase<Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short>>,Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short>>::NodeHashF,Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short>>::NodeAltHashF,Scaleform::AllocatorLH<unsigned short,2>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short>>,Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short>>::NodeHashF>>::setRawCapacity(
        this,
        pmemAddr,
        2 * SizeMask + 2);
  }
  else
  {
    Scaleform::HashSetBase<Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short>>,Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short>>::NodeHashF,Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short>>::NodeAltHashF,Scaleform::AllocatorLH<unsigned short,2>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short>>,Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short>>::NodeHashF>>::setRawCapacity(
      this,
      pmemAddr,
      8ui64);
  }
}

void __fastcall Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType>>,Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType>>::NodeHashF,Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType>>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::ExternalFontWinAPI::KerningPairType,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType>>,Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType>>::NodeHashF>>::CheckExpand(
        Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType> >,Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType> >::NodeHashF,Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::ExternalFontWinAPI::KerningPairType,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType> >,Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType> >::NodeHashF> > *this,
        void *pmemAddr)
{
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType> >,Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType> >::NodeHashF,Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::ExternalFontWinAPI::KerningPairType,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType> >,Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType> >::NodeHashF> >::TableType *pTable; // rax
  unsigned __int64 SizeMask; // r8

  pTable = this->pTable;
  if ( this->pTable )
  {
    SizeMask = pTable->SizeMask;
    if ( 5 * pTable->EntryCount > 4 * SizeMask + 4 )
      Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType>>,Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType>>::NodeHashF,Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType>>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::ExternalFontWinAPI::KerningPairType,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType>>,Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType>>::NodeHashF>>::setRawCapacity(
        this,
        pmemAddr,
        2 * SizeMask + 2);
  }
  else
  {
    Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType>>,Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType>>::NodeHashF,Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType>>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::ExternalFontWinAPI::KerningPairType,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType>>,Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType>>::NodeHashF>>::setRawCapacity(
      this,
      pmemAddr,
      8ui64);
  }
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

void __fastcall Scaleform::HashSetBase<Scaleform::GFx::AS3::TR::NodeBlock *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *>,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *>,Scaleform::AllocatorDH<Scaleform::GFx::AS3::TR::NodeBlock *,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::AS3::TR::NodeBlock *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *>>>::Clear(
        Scaleform::HashSetBase<Scaleform::PtrCmpNN<Scaleform::GFx::AS3::TR::Type const >,Scaleform::GFx::AS3::TR::Type::HashFunctor,Scaleform::GFx::AS3::TR::Type::HashFunctor,Scaleform::AllocatorDH<Scaleform::PtrCmpNN<Scaleform::GFx::AS3::TR::Type const >,348>,Scaleform::HashsetCachedEntry<Scaleform::PtrCmpNN<Scaleform::GFx::AS3::TR::Type const >,Scaleform::GFx::AS3::TR::Type::HashFunctor> > *this)
{
  __int64 v2; // rdx
  unsigned __int64 v3; // r8

  if ( this->pTable )
  {
    v2 = 0i64;
    v3 = this->pTable->SizeMask + 1;
    do
    {
      if ( *(unsigned __int64 *)((char *)&this->pTable[1].EntryCount + v2) != -2i64 )
        *(unsigned __int64 *)((char *)&this->pTable[1].EntryCount + v2) = -2i64;
      v2 += 24i64;
      --v3;
    }
    while ( v3 );
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->pTable);
    this->pTable = 0i64;
  }
}

Scaleform::Render::Font *__fastcall Scaleform::Render::FontProviderWinAPI::CreateFont(
        Scaleform::Render::FontProviderWinAPI *this,
        const char *name,
        unsigned int fontFlags)
{
  __int16 v4; // bx
  Scaleform::Render::ExternalFontWinAPI *v6; // rax
  __int64 v7; // rax
  _DWORD *v8; // rbx
  Scaleform::Render::Font::NativeHintingType *NativeHinting; // rax
  Scaleform::Render::Font::NativeHintingRange VectorRange; // eax
  Scaleform::Render::Font::NativeHintingType *Data; // rcx
  int v13; // [rsp+50h] [rbp+18h] BYREF

  v13 = 75;
  v4 = fontFlags;
  v6 = (Scaleform::Render::ExternalFontWinAPI *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                                  Scaleform::Memory::pGlobalHeap,
                                                  this,
                                                  224i64,
                                                  &v13);
  if ( v6 )
  {
    Scaleform::Render::ExternalFontWinAPI::ExternalFontWinAPI(
      v6,
      this,
      &this->SysData,
      name,
      v4 & 0x303 | 0x30,
      &this->FontLock);
    v8 = (_DWORD *)v7;
    if ( v7 && !*(_QWORD *)(v7 + 120) )
    {
      Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v7);
      return 0i64;
    }
  }
  else
  {
    v8 = 0i64;
  }
  NativeHinting = Scaleform::Render::FontProviderWinAPI::findNativeHinting(this, name);
  if ( NativeHinting )
  {
    v8[52] = NativeHinting->MaxRasterHintedSize;
    v8[53] = NativeHinting->MaxVectorHintedSize;
    v8[50] = NativeHinting->RasterRange;
    VectorRange = NativeHinting->VectorRange;
  }
  else
  {
    Data = this->NativeHinting.Data.Data;
    v8[52] = Data->MaxRasterHintedSize;
    v8[53] = Data->MaxVectorHintedSize;
    v8[50] = Data->RasterRange;
    VectorRange = Data->VectorRange;
  }
  v8[51] = VectorRange;
  return (Scaleform::Render::Font *)v8;
}

void __fastcall Scaleform::ConstructorMov<Scaleform::Render::Font::NativeHintingType>::DestructArray(
        Scaleform::Render::Font::NativeHintingType *p,
        unsigned __int64 count)
{
  unsigned __int64 v2; // rsi
  Scaleform::Render::Font::NativeHintingType *v3; // rdi
  volatile int *v4; // rbx

  if ( count )
  {
    v2 = count;
    v3 = &p[count - 1];
    do
    {
      v4 = (volatile int *)(v3->Typeface.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
      if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(v4 + 2, -1) == 1 )
        Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, (void *)v4);
      --v3;
      --v2;
    }
    while ( v2 );
  }
}

void __fastcall Scaleform::Render::ShapeDataPacked<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::EndPath(
        Scaleform::Render::ShapeDataPacked<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> > *this)
{
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *pContainer; // rbx
  unsigned __int64 v2; // rdi
  unsigned __int64 v3; // r8
  unsigned __int8 *Data; // rax

  pContainer = this->pContainer;
  v2 = pContainer->Data.Size + 1;
  if ( v2 >= pContainer->Data.Size )
  {
    if ( v2 > pContainer->Data.Policy.Capacity )
    {
      v3 = v2 + (v2 >> 2);
      goto LABEL_6;
    }
  }
  else if ( v2 < pContainer->Data.Policy.Capacity >> 1 )
  {
    v3 = pContainer->Data.Size + 1;
LABEL_6:
    Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      &this->pContainer->Data,
      this->pContainer,
      v3);
  }
  Data = pContainer->Data.Data;
  pContainer->Data.Size = v2;
  Data[v2 - 1] = 15;
}

void __fastcall Scaleform::Render::ShapeDataPacked<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::EndShape(
        Scaleform::Render::ShapeDataPacked<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> > *this)
{
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *pContainer; // rbx
  unsigned __int64 v2; // rdi
  unsigned __int64 v3; // r8
  unsigned __int8 *Data; // rax

  pContainer = this->pContainer;
  v2 = pContainer->Data.Size + 1;
  if ( v2 >= pContainer->Data.Size )
  {
    if ( v2 > pContainer->Data.Policy.Capacity )
    {
      v3 = v2 + (v2 >> 2);
      goto LABEL_6;
    }
  }
  else if ( v2 < pContainer->Data.Policy.Capacity >> 1 )
  {
    v3 = pContainer->Data.Size + 1;
LABEL_6:
    Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      &this->pContainer->Data,
      this->pContainer,
      v3);
  }
  Data = pContainer->Data.Data;
  pContainer->Data.Size = v2;
  Data[v2 - 1] = 0;
}

__int64 __fastcall Scaleform::Render::EnumFontFamExProc(
        tagENUMLOGFONTEXW *lpelfe,
        tagNEWTEXTMETRICEXW *lpntme,
        unsigned int FontType,
        __int64 lParam)
{
  *(_BYTE *)lParam = 1;
  return 0i64;
}

float __fastcall Scaleform::Render::ExternalFontWinAPI::GetAdvance(
        Scaleform::Render::ExternalFontWinAPI *this,
        unsigned int glyphIndex)
{
  __int64 v2; // rsi
  Scaleform::Lock *pFontLock; // rbx
  float Advance; // xmm6_4
  float result; // xmm0_4

  v2 = glyphIndex;
  if ( (_WORD)glyphIndex == 0xFFFF )
  {
    this->GetNominalGlyphWidth(this);
  }
  else
  {
    pFontLock = this->pFontLock;
    Scaleform::Lock::DoLock(pFontLock);
    Advance = this->Glyphs.Data.Data[v2].Advance;
    Scaleform::Lock::Unlock(pFontLock);
    return Advance;
  }
  return result;
}

Scaleform::Render::Rect<float> *__fastcall Scaleform::Render::ExternalFontWinAPI::GetGlyphBounds(
        Scaleform::Render::ExternalFontWinAPI *this,
        unsigned int glyphIndex,
        Scaleform::Render::Rect<float> *prect)
{
  __int64 v3; // rbp
  double v6; // xmm0_8
  float v7; // xmm6_4
  Scaleform::Render::Rect<float> *result; // rax
  Scaleform::Lock *pFontLock; // rbx
  Scaleform::Render::ExternalFontWinAPI::GlyphType *Data; // rax
  float y2; // xmm2_4
  float x2; // xmm1_4
  float y1; // xmm0_4

  v3 = glyphIndex;
  if ( (_WORD)glyphIndex == 0xFFFF )
  {
    v6 = ((double (*)(void))this->GetNominalGlyphHeight)();
    v7 = *(float *)&v6;
    *(float *)&v6 = this->GetNominalGlyphWidth(this);
    prect->y2 = v7;
    *(_QWORD *)&prect->x1 = 0i64;
    result = prect;
    prect->x2 = *(float *)&v6;
  }
  else
  {
    pFontLock = this->pFontLock;
    Scaleform::Lock::DoLock(pFontLock);
    Data = this->Glyphs.Data.Data;
    y2 = Data[v3].Bounds.y2;
    x2 = Data[v3].Bounds.x2;
    y1 = Data[v3].Bounds.y1;
    *(float *)&Data = Data[v3].Bounds.x1;
    prect->y1 = y1;
    prect->x2 = x2;
    prect->y2 = y2;
    LODWORD(prect->x1) = (_DWORD)Data;
    Scaleform::Lock::Unlock(pFontLock);
    return prect;
  }
  return result;
}

float __fastcall Scaleform::Render::ExternalFontWinAPI::GetGlyphHeight(
        Scaleform::Render::ExternalFontWinAPI *this,
        unsigned int glyphIndex)
{
  __int64 v2; // rsi
  Scaleform::Lock *pFontLock; // rbx
  float v5; // xmm6_4
  float result; // xmm0_4

  v2 = glyphIndex;
  if ( (_WORD)glyphIndex == 0xFFFF )
  {
    this->GetNominalGlyphHeight(this);
  }
  else
  {
    pFontLock = this->pFontLock;
    Scaleform::Lock::DoLock(pFontLock);
    v5 = this->Glyphs.Data.Data[v2].Bounds.y2 - this->Glyphs.Data.Data[v2].Bounds.y1;
    Scaleform::Lock::Unlock(pFontLock);
    return v5;
  }
  return result;
}

__int64 __fastcall Scaleform::Render::ExternalFontWinAPI::GetGlyphIndex(
        Scaleform::Render::ExternalFontWinAPI *this,
        unsigned __int16 code)
{
  bool v2; // zf
  Scaleform::Lock *pFontLock; // rbx
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short> >,Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short> >::NodeHashF,Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned short,2>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short> >,Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short> >::NodeHashF> >::TableType *pTable; // r9
  unsigned __int64 SizeMask; // r8
  __int64 v7; // r10
  __int64 EntryCount; // rdx
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short> >,Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short> >::NodeHashF,Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned short,2>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short> >,Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short> >::NodeHashF> >::TableType *v9; // rcx
  __int64 p_SizeMask; // rcx
  unsigned int *v11; // rax
  unsigned int v12; // edi
  HDC__ *WinHDC; // r12
  HGDIOBJ v14; // rax
  Scaleform::Render::FontSysDataWinAPI *pSysData; // rcx
  float Scale1024; // xmm0_4
  unsigned __int64 v17; // rdi
  int v18; // er13
  float v19; // xmm6_4
  float v20; // xmm9_4
  float v21; // xmm8_4
  float v22; // xmm10_4
  float v23; // xmm7_4
  unsigned __int64 v24; // r8
  Scaleform::Render::ExternalFontWinAPI::GlyphType *Data; // rcx
  __int64 v26; // rcx
  int v28; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v29; // [rsp+50h] [rbp-B8h] BYREF
  HGDIOBJ h; // [rsp+58h] [rbp-B0h]
  Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short> >::NodeRef key; // [rsp+60h] [rbp-A8h] BYREF
  MAT2 mat2; // [rsp+70h] [rbp-98h] BYREF
  _GLYPHMETRICS gm; // [rsp+80h] [rbp-88h] BYREF

  v2 = this->MasterFont == 0i64;
  LOWORD(v28) = code;
  if ( !v2 )
  {
    pFontLock = this->pFontLock;
    Scaleform::Lock::DoLock(pFontLock);
    pTable = this->CodeTable.mHash.pTable;
    if ( !pTable )
      goto LABEL_11;
    SizeMask = pTable->SizeMask;
    v7 = SizeMask & (unsigned __int16)v28;
    EntryCount = v7;
    v9 = &pTable[v7 + 1];
    if ( v9->EntryCount == -2i64 || (SizeMask & LOWORD(v9->SizeMask)) != v7 )
      goto LABEL_11;
    while ( (pTable->SizeMask & LOWORD(v9->SizeMask)) != v7 || LOWORD(v9->SizeMask) != (_WORD)v28 )
    {
      EntryCount = v9->EntryCount;
      if ( v9->EntryCount == -1i64 )
        goto LABEL_11;
      v9 = &pTable[EntryCount + 1];
    }
    if ( EntryCount >= 0 )
      p_SizeMask = (__int64)&pTable[EntryCount + 1].SizeMask;
    else
LABEL_11:
      p_SizeMask = 0i64;
    v11 = (unsigned int *)(p_SizeMask + 4);
    if ( !p_SizeMask )
      v11 = 0i64;
    if ( v11 )
    {
      v12 = *v11;
LABEL_28:
      Scaleform::Lock::Unlock(pFontLock);
      return v12;
    }
    WinHDC = this->pSysData->WinHDC;
    v14 = SelectObject(WinHDC, this->MasterFont);
    pSysData = this->pSysData;
    h = v14;
    *(_QWORD *)&mat2.eM11.fract = 0x10000i64;
    mat2.eM21 = 0;
    mat2.eM22 = (_FIXED)0x10000;
    if ( GetGlyphOutlineW(pSysData->WinHDC, (unsigned __int16)v28, 0, &gm, 0, 0i64, &mat2) == -1 )
    {
      v12 = -1;
LABEL_27:
      SelectObject(WinHDC, h);
      goto LABEL_28;
    }
    Scale1024 = this->Scale1024;
    v17 = this->Glyphs.Data.Size + 1;
    v18 = (unsigned __int16)v28;
    LODWORD(v19) = COERCE_UNSIGNED_INT((float)gm.gmptGlyphOrigin.y * Scale1024) ^ _xmm;
    v20 = (float)gm.gmptGlyphOrigin.x * Scale1024;
    v21 = (float)((float)(int)gm.gmBlackBoxY * Scale1024) + v19;
    v22 = (float)gm.gmCellIncX * Scale1024;
    v23 = (float)((float)(int)gm.gmBlackBoxX * Scale1024) + v20;
    if ( v17 >= this->Glyphs.Data.Size )
    {
      if ( v17 > this->Glyphs.Data.Policy.Capacity )
      {
        v24 = v17 + (v17 >> 2);
        goto LABEL_23;
      }
    }
    else if ( v17 < this->Glyphs.Data.Policy.Capacity >> 1 )
    {
      v24 = this->Glyphs.Data.Size + 1;
LABEL_23:
      Scaleform::ArrayDataBase<Scaleform::Render::ExternalFontWinAPI::GlyphType,Scaleform::AllocatorLH<Scaleform::Render::ExternalFontWinAPI::GlyphType,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        (Scaleform::ArrayDataBase<Scaleform::GFx::AS3::Value,Scaleform::AllocatorLH<Scaleform::GFx::AS3::Value,2>,Scaleform::ArrayDefaultPolicy> *)&this->Glyphs,
        &this->Glyphs,
        v24);
    }
    Data = this->Glyphs.Data.Data;
    this->Glyphs.Data.Size = v17;
    v26 = (__int64)&Data[v17 - 1];
    if ( v26 )
    {
      *(float *)(v26 + 4) = v22;
      *(_DWORD *)v26 = v18;
      *(float *)(v26 + 16) = v20;
      *(float *)(v26 + 20) = v19;
      *(float *)(v26 + 24) = v23;
      *(float *)(v26 + 28) = v21;
    }
    LODWORD(v29) = LODWORD(this->Glyphs.Data.Size) - 1;
    key.pFirst = (const unsigned __int16 *)&v28;
    key.pSecond = (const unsigned int *)&v29;
    Scaleform::HashSetBase<Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short>>,Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short>>::NodeHashF,Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short>>::NodeAltHashF,Scaleform::AllocatorLH<unsigned short,2>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short>>,Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short>>::NodeHashF>>::add<Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short>>::NodeRef>(
      &this->CodeTable.mHash,
      &this->CodeTable,
      &key,
      (unsigned __int16)v28);
    v12 = LODWORD(this->Glyphs.Data.Size) - 1;
    goto LABEL_27;
  }
  return 0xFFFFFFFFi64;
}

char __fastcall Scaleform::Render::ExternalFontWinAPI::GetGlyphRaster(
        Scaleform::Render::ExternalFontWinAPI *this,
        unsigned int glyphIndex,
        unsigned int hintedSize,
        Scaleform::Render::GlyphRaster *raster)
{
  __int64 v5; // rsi
  Scaleform::Lock *pFontLock; // rbx
  Scaleform::Render::ExternalFontWinAPI::GlyphType *v10; // r14
  HFONT__ *HintedFont; // rcx
  int cWeight; // ecx
  HDC__ *WinHDC; // r15
  HGDIOBJ v14; // rax
  Scaleform::Render::FontSysDataWinAPI *pSysData; // rsi
  void *v16; // r12
  unsigned __int64 v17; // r8
  Scaleform::Render::FontSysDataWinAPI *v18; // r10
  signed int GlyphOutlineW; // eax
  Scaleform::Render::FontSysDataWinAPI *v20; // rdx
  DWORD v21; // eax
  char v22; // di
  MAT2 mat2; // [rsp+78h] [rbp-80h] BYREF
  _GLYPHMETRICS gm; // [rsp+88h] [rbp-70h] BYREF

  v5 = glyphIndex;
  if ( (unsigned __int16)glyphIndex == 0xFFFF
    || !((unsigned __int8 (__fastcall *)(Scaleform::Render::ExternalFontWinAPI *, _QWORD))this->IsHintedRasterGlyph)(
          this,
          glyphIndex) )
  {
    return 0;
  }
  pFontLock = this->pFontLock;
  Scaleform::Lock::DoLock(pFontLock);
  v10 = &this->Glyphs.Data.Data[v5];
  if ( hintedSize != this->LastHintedFontSize )
  {
    HintedFont = this->HintedFont;
    if ( HintedFont )
      DeleteObject(HintedFont);
    cWeight = 400;
    if ( (this->Flags & 2) != 0 )
      cWeight = 700;
    this->HintedFont = CreateFontW(
                         -hintedSize,
                         0,
                         0,
                         0,
                         cWeight,
                         this->Flags & 1,
                         0,
                         0,
                         1u,
                         0,
                         0,
                         4u,
                         0,
                         this->NameW.Data.Data);
    this->LastHintedFontSize = hintedSize;
  }
  WinHDC = this->pSysData->WinHDC;
  v14 = SelectObject(WinHDC, this->HintedFont);
  pSysData = this->pSysData;
  v16 = v14;
  if ( !pSysData->GlyphBuffer.Data.Size )
  {
    if ( pSysData->GlyphBuffer.Data.Size <= 0x3F8 )
    {
      if ( pSysData->GlyphBuffer.Data.Policy.Capacity < 0x3F8 )
      {
        v17 = 1270i64;
        goto LABEL_16;
      }
    }
    else if ( (pSysData->GlyphBuffer.Data.Policy.Capacity & 0xFFFFFFFFFFFFFFFEui64) > 0x7F0 )
    {
      v17 = 1016i64;
LABEL_16:
      Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorGH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        (Scaleform::ArrayDataBase<char,Scaleform::AllocatorGH<char,2>,Scaleform::ArrayDefaultPolicy> *)this->pSysData,
        this->pSysData,
        v17);
    }
    pSysData->GlyphBuffer.Data.Size = 1016i64;
  }
  v18 = this->pSysData;
  *(_QWORD *)&mat2.eM11.fract = 0x10000i64;
  mat2.eM22 = (_FIXED)0x10000;
  mat2.eM21 = 0;
  GlyphOutlineW = GetGlyphOutlineW(
                    v18->WinHDC,
                    v10->Code,
                    1u,
                    &gm,
                    v18->GlyphBuffer.Data.Size,
                    v18->GlyphBuffer.Data.Data,
                    &mat2);
  if ( GlyphOutlineW == -1 || (v20 = this->pSysData, GlyphOutlineW > SLODWORD(v20->GlyphBuffer.Data.Size)) )
  {
    v21 = GetGlyphOutlineW(this->pSysData->WinHDC, v10->Code, 1u, &gm, 0, 0i64, &mat2);
    if ( v21 == -1
      || (Scaleform::ArrayData<unsigned char,Scaleform::AllocatorGH<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Resize(
            &this->pSysData->GlyphBuffer.Data,
            (int)(v21 + 1016)),
          GlyphOutlineW = GetGlyphOutlineW(
                            this->pSysData->WinHDC,
                            v10->Code,
                            1u,
                            &gm,
                            this->pSysData->GlyphBuffer.Data.Size,
                            this->pSysData->GlyphBuffer.Data.Data,
                            &mat2),
          GlyphOutlineW == -1)
      || (v20 = this->pSysData, GlyphOutlineW > SLODWORD(v20->GlyphBuffer.Data.Size)) )
    {
      v22 = 0;
      goto LABEL_32;
    }
  }
  if ( !GlyphOutlineW )
  {
    raster->Width = 1;
    raster->Height = 1;
    if ( raster->Raster.Data.Size <= 1 )
    {
      if ( !raster->Raster.Data.Policy.Capacity )
LABEL_29:
        Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,75>,Scaleform::ArrayDefaultPolicy>::Reserve(
          &raster->Raster.Data,
          &raster->Raster,
          1ui64);
    }
    else if ( (raster->Raster.Data.Policy.Capacity & 0xFFFFFFFFFFFFFFFEui64) > 2 )
    {
      goto LABEL_29;
    }
    raster->Raster.Data.Size = 1i64;
    v22 = 1;
    *raster->Raster.Data.Data = 0;
    goto LABEL_32;
  }
  Scaleform::Render::ExternalFontWinAPI::decomposeGlyphBitmap(
    this,
    v20->GlyphBuffer.Data.Data,
    gm.gmBlackBoxX,
    gm.gmBlackBoxY,
    gm.gmptGlyphOrigin.x,
    gm.gmptGlyphOrigin.y,
    raster);
  v22 = 1;
LABEL_32:
  SelectObject(WinHDC, v16);
  Scaleform::Lock::Unlock(pFontLock);
  return v22;
}

float __fastcall Scaleform::Render::ExternalFontWinAPI::GetGlyphWidth(
        Scaleform::Render::ExternalFontWinAPI *this,
        unsigned int glyphIndex)
{
  __int64 v2; // rsi
  Scaleform::Lock *pFontLock; // rbx
  float v5; // xmm6_4
  float result; // xmm0_4

  v2 = glyphIndex;
  if ( (_WORD)glyphIndex == 0xFFFF )
  {
    this->GetNominalGlyphWidth(this);
  }
  else
  {
    pFontLock = this->pFontLock;
    Scaleform::Lock::DoLock(pFontLock);
    v5 = this->Glyphs.Data.Data[v2].Bounds.x2 - this->Glyphs.Data.Data[v2].Bounds.x1;
    Scaleform::Lock::Unlock(pFontLock);
    return v5;
  }
  return result;
}

float __fastcall Scaleform::Render::ExternalFontWinAPI::GetKerningAdjustment(
        Scaleform::Render::ExternalFontWinAPI *this,
        unsigned int lastCode,
        unsigned int thisCode)
{
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType> >,Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType> >::NodeHashF,Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::ExternalFontWinAPI::KerningPairType,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType> >,Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType> >::NodeHashF> >::TableType *pTable; // r10
  __int16 v4; // r11
  __int16 v5; // bx
  __int64 v6; // rax
  __int64 v7; // r9
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  bool v13; // zf
  unsigned __int64 *v14; // rcx
  float *v15; // rcx
  __int64 v17; // [rsp+8h] [rbp+8h]
  __int16 v18; // [rsp+10h] [rbp+10h]
  __int16 v19; // [rsp+12h] [rbp+12h]

  pTable = this->KerningPairs.mHash.pTable;
  v4 = thisCode;
  v19 = thisCode;
  v5 = lastCode;
  v18 = lastCode;
  if ( !pTable )
    return 0.0;
  v6 = 5381i64;
  v7 = 4i64;
  do
  {
    v8 = *((unsigned __int8 *)&v17 + v7-- + 7);
    v9 = 65599 * v6 + v8;
    v6 = v9;
  }
  while ( v7 );
  v10 = v9 & pTable->SizeMask;
  v11 = v10;
  v12 = v10 + 2 * (v10 + 1);
  v13 = *(&pTable->EntryCount + v12) == -2i64;
  v14 = &pTable->EntryCount + v12;
  if ( v13 || v14[1] != v10 )
    return 0.0;
  while ( v14[1] != v10 || *((_WORD *)v14 + 8) != v5 || *((_WORD *)v14 + 9) != v4 )
  {
    v11 = *v14;
    if ( *v14 == -1i64 )
      return 0.0;
    v14 = &pTable[v11 + 1].EntryCount + v11;
  }
  if ( v11 >= 0 && (v15 = (float *)(&pTable[v11 + 2].EntryCount + v11)) != 0i64 )
    return v15[1];
  else
    return 0.0;
}

Scaleform::GFx::AS3::MemoryContextImpl *__fastcall Scaleform::Render::ExternalFontWinAPI::GetName(
        Scaleform::GFx::AS3::MovieRoot *this)
{
  return this->MemContext.pObject;
}

__int64 __fastcall AgHttp::onSingletonExit(__crt_locale_data *__formal)
{
  return 0i64;
}

bool __fastcall Scaleform::Render::ExternalFontWinAPI::GetTemporaryGlyphShape(
        Scaleform::Render::ExternalFontWinAPI *this,
        unsigned int glyphIndex,
        unsigned int hintedSize,
        Scaleform::Render::GlyphShape *shape)
{
  __int64 v5; // rsi
  char v9; // al
  Scaleform::Lock *pFontLock; // rbx
  HFONT__ *MasterFont; // rdx
  Scaleform::Render::ExternalFontWinAPI::GlyphType *v12; // r14
  HFONT__ *HintedFont; // rcx
  int cWeight; // ecx
  HDC__ *WinHDC; // r15
  HGDIOBJ v16; // rax
  Scaleform::Render::FontSysDataWinAPI *pSysData; // rsi
  void *v18; // r12
  unsigned __int64 v19; // r8
  Scaleform::Render::FontSysDataWinAPI *v20; // r10
  signed int GlyphOutlineW; // eax
  Scaleform::Render::FontSysDataWinAPI *v22; // rdx
  DWORD v23; // eax
  bool v24; // di
  MAT2 mat2; // [rsp+78h] [rbp-80h] BYREF
  _GLYPHMETRICS gm; // [rsp+88h] [rbp-70h] BYREF

  v5 = glyphIndex;
  if ( (unsigned __int16)glyphIndex == 0xFFFF )
    return 0;
  v9 = ((__int64 (__fastcall *)(Scaleform::Render::ExternalFontWinAPI *, _QWORD))this->IsHintedVectorGlyph)(
         this,
         glyphIndex);
  pFontLock = this->pFontLock;
  if ( !v9 )
    hintedSize = 0;
  Scaleform::Lock::DoLock(this->pFontLock);
  MasterFont = this->MasterFont;
  v12 = &this->Glyphs.Data.Data[v5];
  if ( hintedSize )
  {
    if ( hintedSize != this->LastHintedFontSize )
    {
      HintedFont = this->HintedFont;
      if ( HintedFont )
        DeleteObject(HintedFont);
      cWeight = 400;
      if ( (this->Flags & 2) != 0 )
        cWeight = 700;
      this->HintedFont = CreateFontW(
                           -hintedSize,
                           0,
                           0,
                           0,
                           cWeight,
                           this->Flags & 1,
                           0,
                           0,
                           1u,
                           0,
                           0,
                           4u,
                           0,
                           this->NameW.Data.Data);
      this->LastHintedFontSize = hintedSize;
    }
    MasterFont = this->HintedFont;
  }
  WinHDC = this->pSysData->WinHDC;
  v16 = SelectObject(WinHDC, MasterFont);
  pSysData = this->pSysData;
  v18 = v16;
  if ( !pSysData->GlyphBuffer.Data.Size )
  {
    if ( pSysData->GlyphBuffer.Data.Size <= 0x3F8 )
    {
      if ( pSysData->GlyphBuffer.Data.Policy.Capacity < 0x3F8 )
      {
        v19 = 1270i64;
        goto LABEL_19;
      }
    }
    else if ( (pSysData->GlyphBuffer.Data.Policy.Capacity & 0xFFFFFFFFFFFFFFFEui64) > 0x7F0 )
    {
      v19 = 1016i64;
LABEL_19:
      Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorGH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        (Scaleform::ArrayDataBase<char,Scaleform::AllocatorGH<char,2>,Scaleform::ArrayDefaultPolicy> *)this->pSysData,
        this->pSysData,
        v19);
    }
    pSysData->GlyphBuffer.Data.Size = 1016i64;
  }
  v20 = this->pSysData;
  *(_QWORD *)&mat2.eM11.fract = 0x10000i64;
  mat2.eM22 = (_FIXED)0x10000;
  mat2.eM21 = 0;
  GlyphOutlineW = GetGlyphOutlineW(
                    v20->WinHDC,
                    v12->Code,
                    2u,
                    &gm,
                    v20->GlyphBuffer.Data.Size,
                    v20->GlyphBuffer.Data.Data,
                    &mat2);
  v24 = (GlyphOutlineW != -1 && (v22 = this->pSysData, GlyphOutlineW <= SLODWORD(v22->GlyphBuffer.Data.Size))
      || (v23 = GetGlyphOutlineW(this->pSysData->WinHDC, v12->Code, 2u, &gm, 0, 0i64, &mat2), v23 != -1)
      && (Scaleform::ArrayData<unsigned char,Scaleform::AllocatorGH<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Resize(
            &this->pSysData->GlyphBuffer.Data,
            (int)(v23 + 1016)),
          GlyphOutlineW = GetGlyphOutlineW(
                            this->pSysData->WinHDC,
                            v12->Code,
                            2u,
                            &gm,
                            this->pSysData->GlyphBuffer.Data.Size,
                            this->pSysData->GlyphBuffer.Data.Data,
                            &mat2),
          GlyphOutlineW != -1)
      && (v22 = this->pSysData, GlyphOutlineW <= SLODWORD(v22->GlyphBuffer.Data.Size)))
     && (!GlyphOutlineW
      || Scaleform::Render::ExternalFontWinAPI::decomposeGlyphOutline(
           this,
           v22->GlyphBuffer.Data.Data,
           GlyphOutlineW,
           shape,
           hintedSize));
  SelectObject(WinHDC, v18);
  Scaleform::Lock::Unlock(pFontLock);
  return v24;
}

char __fastcall Scaleform::Render::ExternalFontWinAPI::IsHintedRasterGlyph(
        Scaleform::Render::ExternalFontWinAPI *this,
        unsigned int glyphIndex,
        unsigned int hintedSize)
{
  __int64 v4; // rsi
  Scaleform::Render::Font::NativeHintingRange RasterRange; // eax
  Scaleform::Lock *pFontLock; // rbx
  bool IsCJK; // di

  v4 = glyphIndex;
  if ( (unsigned __int16)glyphIndex == 0xFFFF )
    return 0;
  RasterRange = this->Hinting.RasterRange;
  if ( RasterRange == DontHint || hintedSize > this->Hinting.MaxRasterHintedSize )
    return 0;
  if ( RasterRange == HintAll )
    return 1;
  pFontLock = this->pFontLock;
  Scaleform::Lock::DoLock(pFontLock);
  IsCJK = Scaleform::Render::Font::IsCJK(this, this->Glyphs.Data.Data[v4].Code);
  Scaleform::Lock::Unlock(pFontLock);
  return IsCJK;
}

char __fastcall Scaleform::Render::ExternalFontWinAPI::IsHintedVectorGlyph(
        Scaleform::Render::ExternalFontWinAPI *this,
        unsigned int glyphIndex,
        unsigned int hintedSize)
{
  __int64 v4; // rsi
  Scaleform::Render::Font::NativeHintingRange VectorRange; // eax
  Scaleform::Lock *pFontLock; // rbx
  bool IsCJK; // di

  v4 = glyphIndex;
  if ( (unsigned __int16)glyphIndex == 0xFFFF )
    return 0;
  VectorRange = this->Hinting.VectorRange;
  if ( VectorRange == DontHint || hintedSize > this->Hinting.MaxVectorHintedSize )
    return 0;
  if ( VectorRange == HintAll )
    return 1;
  pFontLock = this->pFontLock;
  Scaleform::Lock::DoLock(pFontLock);
  IsCJK = Scaleform::Render::Font::IsCJK(this, this->Glyphs.Data.Data[v4].Code);
  Scaleform::Lock::Unlock(pFontLock);
  return IsCJK;
}

void __fastcall Scaleform::Render::FontProviderWinAPI::LoadFontNames(
        Scaleform::Render::FontProviderWinAPI *this,
        Scaleform::StringHash<Scaleform::String,Scaleform::AllocatorGH<Scaleform::String,2> > *fontnames)
{
  HDC__ *WinHDC; // rcx
  tagLOGFONTW Logfont; // [rsp+30h] [rbp-78h] BYREF

  WinHDC = this->SysData.WinHDC;
  Logfont.lfCharSet = 1;
  Logfont.lfFaceName[0] = 0;
  Logfont.lfPitchAndFamily = 0;
  EnumFontFamiliesExW(WinHDC, &Logfont, (FONTENUMPROCW)Scaleform::Render::LoadFontNamesProc, (LPARAM)fontnames, 0);
}

__int64 __fastcall Scaleform::Render::LoadFontNamesProc(
        tagENUMLOGFONTEXW *lpelfe,
        tagNEWTEXTMETRICEXW *__formal,
        unsigned int a3,
        __int64 lParam)
{
  void *v5; // rbx
  Scaleform::HashNode<Scaleform::String,Scaleform::String,Scaleform::String::NoCaseHashFunctor>::NodeRef key; // [rsp+20h] [rbp-18h] BYREF
  Scaleform::String v8; // [rsp+40h] [rbp+8h] BYREF

  Scaleform::String::String(&v8, lpelfe->elfFullName);
  key.pFirst = &v8;
  key.pSecond = &v8;
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::String,Scaleform::String,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashNode<Scaleform::String,Scaleform::String,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::HashNode<Scaleform::String,Scaleform::String,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorGH<Scaleform::String,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::String,Scaleform::String,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashNode<Scaleform::String,Scaleform::String,Scaleform::String::NoCaseHashFunctor>::NodeHashF>>::Set<Scaleform::HashNode<Scaleform::String,Scaleform::String,Scaleform::String::NoCaseHashFunctor>::NodeRef>(
    (Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::String,Scaleform::String,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashNode<Scaleform::String,Scaleform::String,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::HashNode<Scaleform::String,Scaleform::String,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorGH<Scaleform::String,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::String,Scaleform::String,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashNode<Scaleform::String,Scaleform::String,Scaleform::String::NoCaseHashFunctor>::NodeHashF> > *)lParam,
    (void *)lParam,
    &key);
  v5 = (void *)(v8.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
  if ( (unsigned int)Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
                       (volatile int *)((v8.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
                       -1) == 1 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v5);
  return 1i64;
}

void __fastcall Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy> *this,
        const void *pheapAddr,
        unsigned __int64 newCapacity)
{
  unsigned __int8 *Data; // rdx
  unsigned __int64 v6; // rdi
  unsigned __int8 *v7; // rax
  int v8; // [rsp+30h] [rbp+8h] BYREF

  if ( newCapacity != this->Policy.Capacity )
  {
    Data = this->Data;
    if ( newCapacity )
    {
      v6 = (newCapacity + 3) & 0xFFFFFFFFFFFFFFFCui64;
      if ( Data )
      {
        v7 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(Scaleform::Memory::pGlobalHeap, Data, v6);
        this->Policy.Capacity = v6;
        this->Data = v7;
        return;
      }
      v8 = 2;
      this->Data = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                        Scaleform::Memory::pGlobalHeap,
                                        pheapAddr,
                                        v6,
                                        &v8);
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

void __fastcall Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,75>,Scaleform::ArrayDefaultPolicy>::Reserve(
        Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,75>,Scaleform::ArrayDefaultPolicy> *this,
        const void *pheapAddr,
        unsigned __int64 newCapacity)
{
  unsigned __int8 *Data; // rdx
  unsigned __int64 v6; // rdi
  unsigned __int8 *v7; // rax
  int v8; // [rsp+30h] [rbp+8h] BYREF

  if ( newCapacity != this->Policy.Capacity )
  {
    Data = this->Data;
    if ( newCapacity )
    {
      v6 = (newCapacity + 3) & 0xFFFFFFFFFFFFFFFCui64;
      if ( Data )
      {
        v7 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(Scaleform::Memory::pGlobalHeap, Data, v6);
        this->Policy.Capacity = v6;
        this->Data = v7;
        return;
      }
      v8 = 75;
      this->Data = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                        Scaleform::Memory::pGlobalHeap,
                                        pheapAddr,
                                        v6,
                                        &v8);
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

void __fastcall Scaleform::ArrayDataBase<Scaleform::Render::ExternalFontWinAPI::GlyphType,Scaleform::AllocatorLH<Scaleform::Render::ExternalFontWinAPI::GlyphType,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        Scaleform::ArrayDataBase<Scaleform::GFx::AS3::Value,Scaleform::AllocatorLH<Scaleform::GFx::AS3::Value,2>,Scaleform::ArrayDefaultPolicy> *this,
        const void *pheapAddr,
        unsigned __int64 newCapacity)
{
  Scaleform::GFx::AS3::Value *Data; // rdx
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // r8
  Scaleform::GFx::AS3::Value *v8; // rax
  int v9; // [rsp+30h] [rbp+8h] BYREF

  if ( newCapacity != this->Policy.Capacity )
  {
    Data = this->Data;
    if ( newCapacity )
    {
      v6 = (newCapacity + 3) & 0xFFFFFFFFFFFFFFFCui64;
      v7 = 32 * v6;
      if ( Data )
      {
        v8 = (Scaleform::GFx::AS3::Value *)Scaleform::Memory::pGlobalHeap->Realloc(
                                             Scaleform::Memory::pGlobalHeap,
                                             Data,
                                             v7);
        this->Policy.Capacity = v6;
        this->Data = v8;
        return;
      }
      v9 = 2;
      this->Data = (Scaleform::GFx::AS3::Value *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
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

void __fastcall Scaleform::ArrayDataBase<Scaleform::GFx::Text::CSSToken<wchar_t>,Scaleform::AllocatorGH<Scaleform::GFx::Text::CSSToken<wchar_t>,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        Scaleform::ArrayDataBase<Scaleform::Render::Font::NativeHintingType,Scaleform::AllocatorGH<Scaleform::Render::Font::NativeHintingType,2>,Scaleform::ArrayDefaultPolicy> *this,
        const void *pheapAddr,
        unsigned __int64 newCapacity)
{
  Scaleform::Render::Font::NativeHintingType *Data; // rdx
  unsigned __int64 v5; // rdi
  Scaleform::Render::Font::NativeHintingType *v6; // rax
  int v7; // [rsp+30h] [rbp+8h] BYREF

  if ( newCapacity != this->Policy.Capacity )
  {
    Data = this->Data;
    if ( newCapacity )
    {
      v5 = (newCapacity + 3) & 0xFFFFFFFFFFFFFFFCui64;
      if ( Data )
      {
        v6 = (Scaleform::Render::Font::NativeHintingType *)Scaleform::Memory::pGlobalHeap->Realloc(
                                                             Scaleform::Memory::pGlobalHeap,
                                                             Data,
                                                             24 * v5);
        this->Policy.Capacity = v5;
        this->Data = v6;
        return;
      }
      v7 = 2;
      this->Data = (Scaleform::Render::Font::NativeHintingType *)Scaleform::Memory::pGlobalHeap->Alloc(
                                                                   Scaleform::Memory::pGlobalHeap,
                                                                   24 * v5,
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

void __fastcall Scaleform::ArrayDataBase<wchar_t,Scaleform::AllocatorLH<wchar_t,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        Scaleform::ArrayDataBase<wchar_t,Scaleform::AllocatorLH<wchar_t,2>,Scaleform::ArrayDefaultPolicy> *this,
        const void *pheapAddr,
        unsigned __int64 newCapacity)
{
  wchar_t *Data; // rdx
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // r8
  wchar_t *v8; // rax
  int v9; // [rsp+30h] [rbp+8h] BYREF

  if ( newCapacity != this->Policy.Capacity )
  {
    Data = this->Data;
    if ( newCapacity )
    {
      v6 = (newCapacity + 3) & 0xFFFFFFFFFFFFFFFCui64;
      v7 = 2 * v6;
      if ( Data )
      {
        v8 = (wchar_t *)Scaleform::Memory::pGlobalHeap->Realloc(Scaleform::Memory::pGlobalHeap, Data, v7);
        this->Policy.Capacity = v6;
        this->Data = v8;
        return;
      }
      v9 = 2;
      this->Data = (wchar_t *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
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

void __fastcall Scaleform::ArrayData<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Resize(
        Scaleform::ArrayData<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy> *this,
        unsigned __int64 newSize)
{
  if ( newSize >= this->Size )
  {
    if ( newSize > this->Policy.Capacity )
    {
      Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        this,
        this,
        newSize + (newSize >> 2));
      this->Size = newSize;
      return;
    }
  }
  else if ( newSize < this->Policy.Capacity >> 1 )
  {
    Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      this,
      this,
      newSize);
    this->Size = newSize;
    return;
  }
  this->Size = newSize;
}

void __fastcall Scaleform::ArrayData<unsigned char,Scaleform::AllocatorGH<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Resize(
        Scaleform::ArrayData<unsigned char,Scaleform::AllocatorGH<unsigned char,2>,Scaleform::ArrayDefaultPolicy> *this,
        unsigned __int64 newSize)
{
  if ( newSize >= this->Size )
  {
    if ( newSize > this->Policy.Capacity )
    {
      Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorGH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        (Scaleform::ArrayDataBase<char,Scaleform::AllocatorGH<char,2>,Scaleform::ArrayDefaultPolicy> *)this,
        this,
        newSize + (newSize >> 2));
      this->Size = newSize;
      return;
    }
  }
  else if ( newSize < this->Policy.Capacity >> 1 )
  {
    Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorGH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      (Scaleform::ArrayDataBase<char,Scaleform::AllocatorGH<char,2>,Scaleform::ArrayDefaultPolicy> *)this,
      this,
      newSize);
    this->Size = newSize;
    return;
  }
  this->Size = newSize;
}

void __fastcall Scaleform::ArrayData<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,75>,Scaleform::ArrayDefaultPolicy>::Resize(
        Scaleform::ArrayData<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,75>,Scaleform::ArrayDefaultPolicy> *this,
        unsigned __int64 newSize)
{
  if ( newSize >= this->Size )
  {
    if ( newSize > this->Policy.Capacity )
    {
      Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,75>,Scaleform::ArrayDefaultPolicy>::Reserve(
        this,
        this,
        newSize + (newSize >> 2));
      this->Size = newSize;
      return;
    }
  }
  else if ( newSize < this->Policy.Capacity >> 1 )
  {
    Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,75>,Scaleform::ArrayDefaultPolicy>::Reserve(
      this,
      this,
      newSize);
    this->Size = newSize;
    return;
  }
  this->Size = newSize;
}

void __fastcall Scaleform::ArrayData<tagKERNINGPAIR,Scaleform::AllocatorGH<tagKERNINGPAIR,2>,Scaleform::ArrayDefaultPolicy>::Resize(
        Scaleform::ArrayData<tagKERNINGPAIR,Scaleform::AllocatorGH<tagKERNINGPAIR,2>,Scaleform::ArrayDefaultPolicy> *this,
        unsigned __int64 newSize)
{
  if ( newSize >= this->Size )
  {
    if ( newSize > this->Policy.Capacity )
    {
      Scaleform::ArrayDataBase<Scaleform::Render::ImageFileHandler *,Scaleform::AllocatorGH<Scaleform::Render::ImageFileHandler *,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        (Scaleform::ArrayDataBase<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile>,Scaleform::AllocatorGH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile>,2>,Scaleform::ArrayDefaultPolicy> *)this,
        this,
        newSize + (newSize >> 2));
      this->Size = newSize;
      return;
    }
  }
  else if ( newSize < this->Policy.Capacity >> 1 )
  {
    Scaleform::ArrayDataBase<Scaleform::Render::ImageFileHandler *,Scaleform::AllocatorGH<Scaleform::Render::ImageFileHandler *,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      (Scaleform::ArrayDataBase<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile>,Scaleform::AllocatorGH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::VMAbcFile>,2>,Scaleform::ArrayDefaultPolicy> *)this,
      this,
      newSize);
    this->Size = newSize;
    return;
  }
  this->Size = newSize;
}

void __fastcall Scaleform::ArrayData<wchar_t,Scaleform::AllocatorLH<wchar_t,2>,Scaleform::ArrayDefaultPolicy>::Resize(
        Scaleform::ArrayData<wchar_t,Scaleform::AllocatorLH<wchar_t,2>,Scaleform::ArrayDefaultPolicy> *this,
        unsigned __int64 newSize)
{
  if ( newSize >= this->Size )
  {
    if ( newSize > this->Policy.Capacity )
    {
      Scaleform::ArrayDataBase<wchar_t,Scaleform::AllocatorLH<wchar_t,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        this,
        this,
        newSize + (newSize >> 2));
      this->Size = newSize;
      return;
    }
  }
  else if ( newSize < this->Policy.Capacity >> 1 )
  {
    Scaleform::ArrayDataBase<wchar_t,Scaleform::AllocatorLH<wchar_t,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      this,
      this,
      newSize);
    this->Size = newSize;
    return;
  }
  this->Size = newSize;
}

void __fastcall Scaleform::ArrayDataBase<Scaleform::Render::Font::NativeHintingType,Scaleform::AllocatorGH<Scaleform::Render::Font::NativeHintingType,2>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
        Scaleform::ArrayDataBase<Scaleform::Render::Font::NativeHintingType,Scaleform::AllocatorGH<Scaleform::Render::Font::NativeHintingType,2>,Scaleform::ArrayDefaultPolicy> *this,
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
      Scaleform::ArrayDataBase<Scaleform::GFx::Text::CSSToken<wchar_t>,Scaleform::AllocatorGH<Scaleform::GFx::Text::CSSToken<wchar_t>,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        this,
        pheapAddr,
        newSize + (newSize >> 2));
      this->Size = newSize;
    }
  }
  else
  {
    Scaleform::ConstructorMov<Scaleform::Render::Font::NativeHintingType>::DestructArray(
      &this->Data[newSize],
      Size - newSize);
    if ( newSize < this->Policy.Capacity >> 1 )
      Scaleform::ArrayDataBase<Scaleform::GFx::Text::CSSToken<wchar_t>,Scaleform::AllocatorGH<Scaleform::GFx::Text::CSSToken<wchar_t>,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        this,
        pheapAddr,
        newSize);
    this->Size = newSize;
  }
}

__int64 __fastcall Scaleform::Render::PathDataEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::WriteEndPath(
        Scaleform::Render::PathDataEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> > *this)
{
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *Data; // rbx
  unsigned __int64 v2; // rdi
  unsigned __int64 v3; // r8
  unsigned __int8 *v4; // rax

  Data = this->Data;
  v2 = this->Data->Data.Size + 1;
  if ( v2 >= this->Data->Data.Size )
  {
    if ( v2 > Data->Data.Policy.Capacity )
    {
      v3 = v2 + (v2 >> 2);
      goto LABEL_6;
    }
  }
  else if ( v2 < Data->Data.Policy.Capacity >> 1 )
  {
    v3 = this->Data->Data.Size + 1;
LABEL_6:
    Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      &this->Data->Data,
      this->Data,
      v3);
  }
  v4 = Data->Data.Data;
  Data->Data.Size = v2;
  v4[v2 - 1] = 15;
  return 1i64;
}

__int64 __fastcall Scaleform::Render::PathDataEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::WriteHLine(
        Scaleform::Render::PathDataEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> > *this,
        int x)
{
  unsigned __int8 v4; // bp
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *Data; // rdi
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // r8
  unsigned __int8 *v8; // rax
  int v9; // esi
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v10; // rbx
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // r8
  unsigned __int8 *v13; // rax
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v15; // rbx
  unsigned __int8 v16; // bp
  unsigned __int64 v17; // rdi
  unsigned __int64 v18; // r8
  unsigned __int8 *v19; // rax
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v20; // rbx
  unsigned __int64 v21; // rdi
  unsigned __int64 v22; // r8
  unsigned __int8 *v23; // rax
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v24; // rbx
  int v25; // ebp
  unsigned __int64 v26; // rdi
  unsigned __int64 v27; // r8
  unsigned __int8 *v28; // rax
  int v29; // esi
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v30; // rbx
  unsigned __int64 v31; // rdi
  unsigned __int64 v32; // r8
  unsigned __int8 *v33; // rax

  v4 = 16 * x;
  if ( (unsigned int)(x + 2048) <= 0xFFF )
  {
    Data = this->Data;
    v6 = this->Data->Data.Size + 1;
    if ( v6 >= this->Data->Data.Size )
    {
      if ( v6 <= Data->Data.Policy.Capacity )
        goto LABEL_8;
      v7 = v6 + (v6 >> 2);
    }
    else
    {
      if ( v6 >= Data->Data.Policy.Capacity >> 1 )
        goto LABEL_8;
      v7 = this->Data->Data.Size + 1;
    }
    Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      &this->Data->Data,
      this->Data,
      v7);
LABEL_8:
    v8 = Data->Data.Data;
    Data->Data.Size = v6;
    v9 = x >> 4;
    v8[v6 - 1] = v4;
    v10 = this->Data;
    v11 = this->Data->Data.Size + 1;
    if ( v11 >= this->Data->Data.Size )
    {
      if ( v11 > v10->Data.Policy.Capacity )
      {
        v12 = v11 + (v11 >> 2);
        goto LABEL_13;
      }
    }
    else if ( v11 < v10->Data.Policy.Capacity >> 1 )
    {
      v12 = this->Data->Data.Size + 1;
LABEL_13:
      Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        &this->Data->Data,
        this->Data,
        v12);
    }
    v13 = v10->Data.Data;
    v10->Data.Size = v11;
    v13[v11 - 1] = v9;
    return 2i64;
  }
  v15 = this->Data;
  v16 = v4 | 1;
  v17 = this->Data->Data.Size + 1;
  if ( v17 >= this->Data->Data.Size )
  {
    if ( v17 <= v15->Data.Policy.Capacity )
      goto LABEL_21;
    v18 = v17 + (v17 >> 2);
  }
  else
  {
    if ( v17 >= v15->Data.Policy.Capacity >> 1 )
      goto LABEL_21;
    v18 = this->Data->Data.Size + 1;
  }
  Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
    &this->Data->Data,
    this->Data,
    v18);
LABEL_21:
  v19 = v15->Data.Data;
  v15->Data.Size = v17;
  v19[v17 - 1] = v16;
  v20 = this->Data;
  v21 = this->Data->Data.Size + 1;
  if ( v21 >= this->Data->Data.Size )
  {
    if ( v21 <= v20->Data.Policy.Capacity )
      goto LABEL_27;
    v22 = v21 + (v21 >> 2);
  }
  else
  {
    if ( v21 >= v20->Data.Policy.Capacity >> 1 )
      goto LABEL_27;
    v22 = this->Data->Data.Size + 1;
  }
  Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
    &this->Data->Data,
    this->Data,
    v22);
LABEL_27:
  v23 = v20->Data.Data;
  v20->Data.Size = v21;
  v23[v21 - 1] = x >> 4;
  v24 = this->Data;
  v25 = x >> 12;
  v26 = this->Data->Data.Size + 1;
  if ( v26 >= this->Data->Data.Size )
  {
    if ( v26 <= v24->Data.Policy.Capacity )
      goto LABEL_33;
    v27 = v26 + (v26 >> 2);
  }
  else
  {
    if ( v26 >= v24->Data.Policy.Capacity >> 1 )
      goto LABEL_33;
    v27 = this->Data->Data.Size + 1;
  }
  Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
    &this->Data->Data,
    this->Data,
    v27);
LABEL_33:
  v28 = v24->Data.Data;
  v24->Data.Size = v26;
  v29 = x >> 20;
  v28[v26 - 1] = v25;
  v30 = this->Data;
  v31 = this->Data->Data.Size + 1;
  if ( v31 >= this->Data->Data.Size )
  {
    if ( v31 > v30->Data.Policy.Capacity )
    {
      v32 = v31 + (v31 >> 2);
      goto LABEL_38;
    }
  }
  else if ( v31 < v30->Data.Policy.Capacity >> 1 )
  {
    v32 = this->Data->Data.Size + 1;
LABEL_38:
    Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      &this->Data->Data,
      this->Data,
      v32);
  }
  v33 = v30->Data.Data;
  v30->Data.Size = v31;
  v33[v31 - 1] = v29;
  return 3i64;
}

__int64 __fastcall Scaleform::Render::PathDataEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::WriteLine(
        Scaleform::Render::PathDataEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> > *this,
        int x,
        int y)
{
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *Data; // rsi
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // r8
  unsigned __int8 *v9; // rax
  unsigned __int8 v10; // di
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v11; // rbx
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // r8
  unsigned __int8 *v14; // rax
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v16; // rsi
  unsigned __int64 v17; // rbp
  unsigned __int64 v18; // r8
  unsigned __int8 *v19; // rax
  unsigned __int8 v20; // bp
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v21; // rbx
  unsigned __int64 v22; // rsi
  unsigned __int64 v23; // r8
  unsigned __int8 *v24; // rax
  int v25; // edi
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v26; // rbx
  unsigned __int64 v27; // rsi
  unsigned __int64 v28; // r8
  unsigned __int8 *v29; // rax
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v30; // rsi
  unsigned __int64 v31; // rbp
  unsigned __int64 v32; // r8
  unsigned __int8 *v33; // rax
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v34; // rsi
  unsigned __int64 v35; // rbp
  unsigned __int64 v36; // r8
  unsigned __int8 *v37; // rax
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v38; // rsi
  unsigned __int8 v39; // bl
  unsigned __int64 v40; // rbp
  unsigned __int64 v41; // r8
  unsigned __int8 *v42; // rax
  int v43; // edi
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v44; // rbx
  unsigned __int64 v45; // rsi
  unsigned __int64 v46; // r8
  unsigned __int8 *v47; // rax
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v48; // rsi
  unsigned __int64 v49; // rbp
  unsigned __int64 v50; // r8
  unsigned __int8 *v51; // rax
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v52; // rsi
  unsigned __int64 v53; // rbp
  unsigned __int64 v54; // r8
  unsigned __int8 *v55; // rax
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v56; // rsi
  unsigned __int64 v57; // rbp
  unsigned __int64 v58; // r8
  unsigned __int8 *v59; // rax
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v60; // rsi
  unsigned __int64 v61; // rbp
  unsigned __int64 v62; // r8
  unsigned __int8 *v63; // rax
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v64; // rsi
  unsigned __int8 v65; // bl
  unsigned __int64 v66; // rbp
  unsigned __int64 v67; // r8
  unsigned __int8 *v68; // rax
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v69; // rbx
  unsigned __int64 v70; // rsi
  unsigned __int64 v71; // r8
  unsigned __int8 *v72; // rax
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v73; // rbx
  int v74; // ebp
  unsigned __int64 v75; // rsi
  unsigned __int64 v76; // r8
  unsigned __int8 *v77; // rax
  int v78; // edi
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v79; // rbx
  unsigned __int64 v80; // rsi
  unsigned __int64 v81; // r8
  unsigned __int8 *v82; // rax

  if ( (unsigned int)(x + 32) <= 0x3F && (unsigned int)(y + 32) <= 0x3F )
  {
    Data = this->Data;
    v7 = this->Data->Data.Size + 1;
    if ( v7 >= this->Data->Data.Size )
    {
      if ( v7 <= Data->Data.Policy.Capacity )
        goto LABEL_9;
      v8 = v7 + (v7 >> 2);
    }
    else
    {
      if ( v7 >= Data->Data.Policy.Capacity >> 1 )
        goto LABEL_9;
      v8 = this->Data->Data.Size + 1;
    }
    Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      &this->Data->Data,
      this->Data,
      v8);
LABEL_9:
    v9 = Data->Data.Data;
    Data->Data.Size = v7;
    v9[v7 - 1] = (16 * x) | 4;
    v10 = (x >> 4) & 3 | (4 * y);
    v11 = this->Data;
    v12 = this->Data->Data.Size + 1;
    if ( v12 >= this->Data->Data.Size )
    {
      if ( v12 > v11->Data.Policy.Capacity )
      {
        v13 = v12 + (v12 >> 2);
        goto LABEL_14;
      }
    }
    else if ( v12 < v11->Data.Policy.Capacity >> 1 )
    {
      v13 = this->Data->Data.Size + 1;
LABEL_14:
      Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        &this->Data->Data,
        this->Data,
        v13);
    }
    v14 = v11->Data.Data;
    v11->Data.Size = v12;
    v14[v12 - 1] = v10;
    return 2i64;
  }
  if ( (unsigned int)(x + 512) <= 0x3FF && (unsigned int)(y + 512) <= 0x3FF )
  {
    v16 = this->Data;
    v17 = this->Data->Data.Size + 1;
    if ( v17 >= this->Data->Data.Size )
    {
      if ( v17 <= v16->Data.Policy.Capacity )
        goto LABEL_24;
      v18 = v17 + (v17 >> 2);
    }
    else
    {
      if ( v17 >= v16->Data.Policy.Capacity >> 1 )
        goto LABEL_24;
      v18 = this->Data->Data.Size + 1;
    }
    Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      &this->Data->Data,
      this->Data,
      v18);
LABEL_24:
    v19 = v16->Data.Data;
    v16->Data.Size = v17;
    v19[v17 - 1] = (16 * x) | 5;
    v20 = (x >> 4) & 0x3F | ((_BYTE)y << 6);
    v21 = this->Data;
    v22 = this->Data->Data.Size + 1;
    if ( v22 >= this->Data->Data.Size )
    {
      if ( v22 <= v21->Data.Policy.Capacity )
        goto LABEL_30;
      v23 = v22 + (v22 >> 2);
    }
    else
    {
      if ( v22 >= v21->Data.Policy.Capacity >> 1 )
        goto LABEL_30;
      v23 = this->Data->Data.Size + 1;
    }
    Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      &this->Data->Data,
      this->Data,
      v23);
LABEL_30:
    v24 = v21->Data.Data;
    v21->Data.Size = v22;
    v25 = y >> 2;
    v24[v22 - 1] = v20;
    v26 = this->Data;
    v27 = this->Data->Data.Size + 1;
    if ( v27 >= this->Data->Data.Size )
    {
      if ( v27 > v26->Data.Policy.Capacity )
      {
        v28 = v27 + (v27 >> 2);
        goto LABEL_35;
      }
    }
    else if ( v27 < v26->Data.Policy.Capacity >> 1 )
    {
      v28 = this->Data->Data.Size + 1;
LABEL_35:
      Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        &this->Data->Data,
        this->Data,
        v28);
    }
    v29 = v26->Data.Data;
    v26->Data.Size = v27;
    v29[v27 - 1] = v25;
    return 3i64;
  }
  if ( (unsigned int)(x + 0x2000) <= 0x3FFF && (unsigned int)(y + 0x2000) <= 0x3FFF )
  {
    v30 = this->Data;
    v31 = this->Data->Data.Size + 1;
    if ( v31 >= this->Data->Data.Size )
    {
      if ( v31 <= v30->Data.Policy.Capacity )
        goto LABEL_45;
      v32 = v31 + (v31 >> 2);
    }
    else
    {
      if ( v31 >= v30->Data.Policy.Capacity >> 1 )
        goto LABEL_45;
      v32 = this->Data->Data.Size + 1;
    }
    Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      &this->Data->Data,
      this->Data,
      v32);
LABEL_45:
    v33 = v30->Data.Data;
    v30->Data.Size = v31;
    v33[v31 - 1] = (16 * x) | 6;
    v34 = this->Data;
    v35 = this->Data->Data.Size + 1;
    if ( v35 >= this->Data->Data.Size )
    {
      if ( v35 <= v34->Data.Policy.Capacity )
        goto LABEL_51;
      v36 = v35 + (v35 >> 2);
    }
    else
    {
      if ( v35 >= v34->Data.Policy.Capacity >> 1 )
        goto LABEL_51;
      v36 = this->Data->Data.Size + 1;
    }
    Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      &this->Data->Data,
      this->Data,
      v36);
LABEL_51:
    v37 = v34->Data.Data;
    v34->Data.Size = v35;
    v37[v35 - 1] = x >> 4;
    v38 = this->Data;
    v39 = (4 * y) | (x >> 12) & 3;
    v40 = this->Data->Data.Size + 1;
    if ( v40 >= this->Data->Data.Size )
    {
      if ( v40 <= v38->Data.Policy.Capacity )
        goto LABEL_57;
      v41 = v40 + (v40 >> 2);
    }
    else
    {
      if ( v40 >= v38->Data.Policy.Capacity >> 1 )
        goto LABEL_57;
      v41 = this->Data->Data.Size + 1;
    }
    Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      &this->Data->Data,
      this->Data,
      v41);
LABEL_57:
    v42 = v38->Data.Data;
    v38->Data.Size = v40;
    v43 = y >> 6;
    v42[v40 - 1] = v39;
    v44 = this->Data;
    v45 = this->Data->Data.Size + 1;
    if ( v45 >= this->Data->Data.Size )
    {
      if ( v45 > v44->Data.Policy.Capacity )
      {
        v46 = v45 + (v45 >> 2);
        goto LABEL_62;
      }
    }
    else if ( v45 < v44->Data.Policy.Capacity >> 1 )
    {
      v46 = this->Data->Data.Size + 1;
LABEL_62:
      Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        &this->Data->Data,
        this->Data,
        v46);
    }
    v47 = v44->Data.Data;
    v44->Data.Size = v45;
    v47[v45 - 1] = v43;
    return 4i64;
  }
  v48 = this->Data;
  v49 = this->Data->Data.Size + 1;
  if ( v49 >= this->Data->Data.Size )
  {
    if ( v49 <= v48->Data.Policy.Capacity )
      goto LABEL_70;
    v50 = v49 + (v49 >> 2);
  }
  else
  {
    if ( v49 >= v48->Data.Policy.Capacity >> 1 )
      goto LABEL_70;
    v50 = this->Data->Data.Size + 1;
  }
  Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
    &this->Data->Data,
    this->Data,
    v50);
LABEL_70:
  v51 = v48->Data.Data;
  v48->Data.Size = v49;
  v51[v49 - 1] = (16 * x) | 7;
  v52 = this->Data;
  v53 = this->Data->Data.Size + 1;
  if ( v53 >= this->Data->Data.Size )
  {
    if ( v53 <= v52->Data.Policy.Capacity )
      goto LABEL_76;
    v54 = v53 + (v53 >> 2);
  }
  else
  {
    if ( v53 >= v52->Data.Policy.Capacity >> 1 )
      goto LABEL_76;
    v54 = this->Data->Data.Size + 1;
  }
  Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
    &this->Data->Data,
    this->Data,
    v54);
LABEL_76:
  v55 = v52->Data.Data;
  v52->Data.Size = v53;
  v55[v53 - 1] = x >> 4;
  v56 = this->Data;
  v57 = this->Data->Data.Size + 1;
  if ( v57 >= this->Data->Data.Size )
  {
    if ( v57 <= v56->Data.Policy.Capacity )
      goto LABEL_82;
    v58 = v57 + (v57 >> 2);
  }
  else
  {
    if ( v57 >= v56->Data.Policy.Capacity >> 1 )
      goto LABEL_82;
    v58 = this->Data->Data.Size + 1;
  }
  Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
    &this->Data->Data,
    this->Data,
    v58);
LABEL_82:
  v59 = v56->Data.Data;
  v56->Data.Size = v57;
  v59[v57 - 1] = x >> 12;
  v60 = this->Data;
  v61 = this->Data->Data.Size + 1;
  if ( v61 >= this->Data->Data.Size )
  {
    if ( v61 <= v60->Data.Policy.Capacity )
      goto LABEL_88;
    v62 = v61 + (v61 >> 2);
  }
  else
  {
    if ( v61 >= v60->Data.Policy.Capacity >> 1 )
      goto LABEL_88;
    v62 = this->Data->Data.Size + 1;
  }
  Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
    &this->Data->Data,
    this->Data,
    v62);
LABEL_88:
  v63 = v60->Data.Data;
  v60->Data.Size = v61;
  v63[v61 - 1] = x >> 20;
  v64 = this->Data;
  v65 = (4 * y) | (x >> 28) & 3;
  v66 = this->Data->Data.Size + 1;
  if ( v66 >= this->Data->Data.Size )
  {
    if ( v66 <= v64->Data.Policy.Capacity )
      goto LABEL_94;
    v67 = v66 + (v66 >> 2);
  }
  else
  {
    if ( v66 >= v64->Data.Policy.Capacity >> 1 )
      goto LABEL_94;
    v67 = this->Data->Data.Size + 1;
  }
  Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
    &this->Data->Data,
    this->Data,
    v67);
LABEL_94:
  v68 = v64->Data.Data;
  v64->Data.Size = v66;
  v68[v66 - 1] = v65;
  v69 = this->Data;
  v70 = this->Data->Data.Size + 1;
  if ( v70 >= this->Data->Data.Size )
  {
    if ( v70 <= v69->Data.Policy.Capacity )
      goto LABEL_100;
    v71 = v70 + (v70 >> 2);
  }
  else
  {
    if ( v70 >= v69->Data.Policy.Capacity >> 1 )
      goto LABEL_100;
    v71 = this->Data->Data.Size + 1;
  }
  Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
    &this->Data->Data,
    this->Data,
    v71);
LABEL_100:
  v72 = v69->Data.Data;
  v69->Data.Size = v70;
  v72[v70 - 1] = y >> 6;
  v73 = this->Data;
  v74 = y >> 14;
  v75 = this->Data->Data.Size + 1;
  if ( v75 >= this->Data->Data.Size )
  {
    if ( v75 <= v73->Data.Policy.Capacity )
      goto LABEL_106;
    v76 = v75 + (v75 >> 2);
  }
  else
  {
    if ( v75 >= v73->Data.Policy.Capacity >> 1 )
      goto LABEL_106;
    v76 = this->Data->Data.Size + 1;
  }
  Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
    &this->Data->Data,
    this->Data,
    v76);
LABEL_106:
  v77 = v73->Data.Data;
  v73->Data.Size = v75;
  v78 = y >> 22;
  v77[v75 - 1] = v74;
  v79 = this->Data;
  v80 = this->Data->Data.Size + 1;
  if ( v80 >= this->Data->Data.Size )
  {
    if ( v80 > v79->Data.Policy.Capacity )
    {
      v81 = v80 + (v80 >> 2);
      goto LABEL_111;
    }
  }
  else if ( v80 < v79->Data.Policy.Capacity >> 1 )
  {
    v81 = this->Data->Data.Size + 1;
LABEL_111:
    Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      &this->Data->Data,
      this->Data,
      v81);
  }
  v82 = v79->Data.Data;
  v79->Data.Size = v80;
  v82[v80 - 1] = v78;
  return 8i64;
}

__int64 __fastcall Scaleform::Render::PathDataEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::WriteQuad(
        Scaleform::Render::PathDataEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> > *this,
        int cx,
        int cy,
        int ax,
        int ay)
{
  int v6; // eax
  int v7; // ecx
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *Data; // r15
  unsigned __int64 v12; // r12
  unsigned __int64 v13; // r8
  unsigned __int8 *v14; // rax
  char v15; // bl
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v16; // rsi
  unsigned __int8 v17; // bl
  unsigned __int64 v18; // r15
  unsigned __int64 v19; // r8
  unsigned __int8 *v20; // rax
  unsigned __int8 v21; // di
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v22; // rbx
  unsigned __int64 v23; // rsi
  unsigned __int64 v24; // r8
  unsigned __int8 *v25; // rax
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v27; // r15
  unsigned __int64 v28; // r12
  unsigned __int64 v29; // r8
  unsigned __int8 *v30; // rax
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v31; // r15
  unsigned __int8 v32; // bl
  unsigned __int64 v33; // r12
  unsigned __int64 v34; // r8
  unsigned __int8 *v35; // rax
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v36; // rbx
  unsigned __int8 v37; // si
  unsigned __int64 v38; // r15
  unsigned __int64 v39; // r8
  unsigned __int8 *v40; // rax
  unsigned __int8 v41; // di
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v42; // rbx
  unsigned __int64 v43; // rsi
  unsigned __int64 v44; // r8
  unsigned __int8 *v45; // rax
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v46; // r15
  unsigned __int64 v47; // r12
  unsigned __int64 v48; // r8
  unsigned __int8 *v49; // rax
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v50; // r15
  unsigned __int8 v51; // bl
  unsigned __int64 v52; // r12
  unsigned __int64 v53; // r8
  unsigned __int8 *v54; // rax
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v55; // rbx
  unsigned __int8 v56; // si
  unsigned __int64 v57; // r15
  unsigned __int64 v58; // r8
  unsigned __int8 *v59; // rax
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v60; // rbx
  unsigned __int8 v61; // di
  unsigned __int64 v62; // rsi
  unsigned __int64 v63; // r8
  unsigned __int8 *v64; // rax
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v65; // rbx
  unsigned __int64 v66; // rdi
  unsigned __int64 v67; // r8
  unsigned __int8 *v68; // rax
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v69; // r15
  unsigned __int64 v70; // r12
  unsigned __int64 v71; // r8
  unsigned __int8 *v72; // rax
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v73; // r15
  unsigned __int8 v74; // bl
  unsigned __int64 v75; // r12
  unsigned __int64 v76; // r8
  unsigned __int8 *v77; // rax
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v78; // rbx
  unsigned __int64 v79; // r15
  unsigned __int64 v80; // r8
  unsigned __int8 *v81; // rax
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v82; // rbx
  unsigned __int8 v83; // si
  unsigned __int64 v84; // r15
  unsigned __int64 v85; // r8
  unsigned __int8 *v86; // rax
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v87; // rbx
  unsigned __int8 v88; // di
  unsigned __int64 v89; // rsi
  unsigned __int64 v90; // r8
  unsigned __int8 *v91; // rax
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v92; // rbx
  unsigned __int64 v93; // rdi
  unsigned __int64 v94; // r8
  unsigned __int8 *v95; // rax
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v96; // r15
  unsigned __int64 v97; // r12
  unsigned __int64 v98; // r8
  unsigned __int8 *v99; // rax
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v100; // r15
  unsigned __int64 v101; // r12
  unsigned __int64 v102; // r8
  unsigned __int8 *v103; // rax
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v104; // r15
  unsigned __int8 v105; // bl
  unsigned __int64 v106; // r12
  unsigned __int64 v107; // r8
  unsigned __int8 *v108; // rax
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v109; // rbx
  unsigned __int8 v110; // si
  unsigned __int64 v111; // r15
  unsigned __int64 v112; // r8
  unsigned __int8 *v113; // rax
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v114; // rbx
  unsigned __int64 v115; // rsi
  unsigned __int64 v116; // r8
  unsigned __int8 *v117; // rax
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v118; // rbx
  unsigned __int8 v119; // di
  unsigned __int64 v120; // rsi
  unsigned __int64 v121; // r8
  unsigned __int8 *v122; // rax
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v123; // rbx
  unsigned __int64 v124; // rdi
  unsigned __int64 v125; // r8
  unsigned __int8 *v126; // rax
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v127; // r15
  unsigned __int64 v128; // r12
  unsigned __int64 v129; // r8
  unsigned __int8 *v130; // rax
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v131; // r15
  unsigned __int64 v132; // r12
  unsigned __int64 v133; // r8
  unsigned __int8 *v134; // rax
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v135; // r15
  unsigned __int8 v136; // bl
  unsigned __int64 v137; // r12
  unsigned __int64 v138; // r8
  unsigned __int8 *v139; // rax
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v140; // rbx
  unsigned __int64 v141; // r15
  unsigned __int64 v142; // r8
  unsigned __int8 *v143; // rax
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v144; // rbx
  unsigned __int8 v145; // r15
  unsigned __int64 v146; // rsi
  unsigned __int64 v147; // r8
  unsigned __int8 *v148; // rax
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v149; // rbx
  unsigned __int64 v150; // rsi
  unsigned __int64 v151; // r8
  unsigned __int8 *v152; // rax
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v153; // rbx
  unsigned __int8 v154; // si
  unsigned __int64 v155; // rdi
  unsigned __int64 v156; // r8
  unsigned __int8 *v157; // rax
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v158; // rbx
  unsigned __int64 v159; // rdi
  unsigned __int64 v160; // r8
  unsigned __int8 *v161; // rax
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v162; // r15
  unsigned __int64 v163; // r12
  unsigned __int64 v164; // r8
  unsigned __int8 *v165; // rax
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v166; // r15
  unsigned __int64 v167; // r12
  unsigned __int64 v168; // r8
  unsigned __int8 *v169; // rax
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v170; // r15
  unsigned __int64 v171; // r12
  unsigned __int64 v172; // r8
  unsigned __int8 *v173; // rax
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v174; // r15
  unsigned __int64 v175; // r12
  unsigned __int64 v176; // r8
  unsigned __int8 *v177; // rax
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v178; // r15
  unsigned __int8 v179; // bl
  unsigned __int64 v180; // r12
  unsigned __int64 v181; // r8
  unsigned __int8 *v182; // rax
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v183; // rbx
  unsigned __int64 v184; // r15
  unsigned __int64 v185; // r8
  unsigned __int8 *v186; // rax
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v187; // rbx
  unsigned __int64 v188; // r15
  unsigned __int64 v189; // r8
  unsigned __int8 *v190; // rax
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v191; // rbx
  unsigned __int64 v192; // r15
  unsigned __int64 v193; // r8
  unsigned __int8 *v194; // rax
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v195; // rbx
  unsigned __int8 v196; // si
  unsigned __int64 v197; // r15
  unsigned __int64 v198; // r8
  unsigned __int8 *v199; // rax
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v200; // rbx
  unsigned __int64 v201; // rsi
  unsigned __int64 v202; // r8
  unsigned __int8 *v203; // rax
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v204; // rbx
  unsigned __int64 v205; // rsi
  unsigned __int64 v206; // r8
  unsigned __int8 *v207; // rax
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v208; // rbx
  unsigned __int64 v209; // rsi
  unsigned __int64 v210; // r8
  unsigned __int8 *v211; // rax
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v212; // rbx
  unsigned __int8 v213; // di
  unsigned __int64 v214; // rsi
  unsigned __int64 v215; // r8
  unsigned __int8 *v216; // rax
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v217; // rbx
  unsigned __int64 v218; // rdi
  unsigned __int64 v219; // r8
  unsigned __int8 *v220; // rax
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v221; // rbx
  unsigned __int64 v222; // rdi
  unsigned __int64 v223; // r8
  unsigned __int8 *v224; // rax
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v225; // rbx
  unsigned __int64 v226; // rdi
  unsigned __int64 v227; // r8
  unsigned __int8 *v228; // rax

  v6 = cx;
  if ( cy > cx )
    v6 = cy;
  v7 = cx;
  if ( cy < cx )
    v7 = cy;
  if ( ax < v7 )
    v7 = ax;
  if ( ax > v6 )
    v6 = ax;
  if ( ay < v7 )
    v7 = ay;
  if ( ay > v6 )
    v6 = ay;
  if ( v7 >= -16 && v6 <= 15 )
  {
    Data = this->Data;
    v12 = this->Data->Data.Size + 1;
    if ( v12 >= this->Data->Data.Size )
    {
      if ( v12 <= Data->Data.Policy.Capacity )
        goto LABEL_21;
      v13 = v12 + (v12 >> 2);
    }
    else
    {
      if ( v12 >= Data->Data.Policy.Capacity >> 1 )
        goto LABEL_21;
      v13 = this->Data->Data.Size + 1;
    }
    Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      &this->Data->Data,
      this->Data,
      v13);
LABEL_21:
    v14 = Data->Data.Data;
    Data->Data.Size = v12;
    v14[v12 - 1] = (16 * cx) | 8;
    v15 = (2 * cy) & 0x3F | (cx >> 4) & 1;
    v16 = this->Data;
    v17 = ((_BYTE)ax << 6) | v15;
    v18 = this->Data->Data.Size + 1;
    if ( v18 >= this->Data->Data.Size )
    {
      if ( v18 <= v16->Data.Policy.Capacity )
        goto LABEL_27;
      v19 = v18 + (v18 >> 2);
    }
    else
    {
      if ( v18 >= v16->Data.Policy.Capacity >> 1 )
        goto LABEL_27;
      v19 = this->Data->Data.Size + 1;
    }
    Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      &this->Data->Data,
      this->Data,
      v19);
LABEL_27:
    v20 = v16->Data.Data;
    v16->Data.Size = v18;
    v20[v18 - 1] = v17;
    v21 = (8 * ay) | (ax >> 2) & 7;
    v22 = this->Data;
    v23 = this->Data->Data.Size + 1;
    if ( v23 >= this->Data->Data.Size )
    {
      if ( v23 > v22->Data.Policy.Capacity )
      {
        v24 = v23 + (v23 >> 2);
        goto LABEL_32;
      }
    }
    else if ( v23 < v22->Data.Policy.Capacity >> 1 )
    {
      v24 = this->Data->Data.Size + 1;
LABEL_32:
      Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        &this->Data->Data,
        this->Data,
        v24);
    }
    v25 = v22->Data.Data;
    v22->Data.Size = v23;
    v25[v23 - 1] = v21;
    return 3i64;
  }
  if ( v7 >= -64 && v6 <= 63 )
  {
    v27 = this->Data;
    v28 = this->Data->Data.Size + 1;
    if ( v28 >= this->Data->Data.Size )
    {
      if ( v28 <= v27->Data.Policy.Capacity )
        goto LABEL_42;
      v29 = v28 + (v28 >> 2);
    }
    else
    {
      if ( v28 >= v27->Data.Policy.Capacity >> 1 )
        goto LABEL_42;
      v29 = this->Data->Data.Size + 1;
    }
    Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      &this->Data->Data,
      this->Data,
      v29);
LABEL_42:
    v30 = v27->Data.Data;
    v27->Data.Size = v28;
    v30[v28 - 1] = (16 * cx) | 9;
    v31 = this->Data;
    v32 = (8 * cy) | (cx >> 4) & 7;
    v33 = this->Data->Data.Size + 1;
    if ( v33 >= this->Data->Data.Size )
    {
      if ( v33 <= v31->Data.Policy.Capacity )
        goto LABEL_48;
      v34 = v33 + (v33 >> 2);
    }
    else
    {
      if ( v33 >= v31->Data.Policy.Capacity >> 1 )
        goto LABEL_48;
      v34 = this->Data->Data.Size + 1;
    }
    Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      &this->Data->Data,
      this->Data,
      v34);
LABEL_48:
    v35 = v31->Data.Data;
    v31->Data.Size = v33;
    v35[v33 - 1] = v32;
    v36 = this->Data;
    v37 = (4 * ax) | (cy >> 5) & 3;
    v38 = this->Data->Data.Size + 1;
    if ( v38 >= this->Data->Data.Size )
    {
      if ( v38 <= v36->Data.Policy.Capacity )
        goto LABEL_54;
      v39 = v38 + (v38 >> 2);
    }
    else
    {
      if ( v38 >= v36->Data.Policy.Capacity >> 1 )
        goto LABEL_54;
      v39 = this->Data->Data.Size + 1;
    }
    Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      &this->Data->Data,
      this->Data,
      v39);
LABEL_54:
    v40 = v36->Data.Data;
    v36->Data.Size = v38;
    v40[v38 - 1] = v37;
    v41 = (2 * ay) | (ax >> 6) & 1;
    v42 = this->Data;
    v43 = this->Data->Data.Size + 1;
    if ( v43 >= this->Data->Data.Size )
    {
      if ( v43 > v42->Data.Policy.Capacity )
      {
        v44 = v43 + (v43 >> 2);
        goto LABEL_59;
      }
    }
    else if ( v43 < v42->Data.Policy.Capacity >> 1 )
    {
      v44 = this->Data->Data.Size + 1;
LABEL_59:
      Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        &this->Data->Data,
        this->Data,
        v44);
    }
    v45 = v42->Data.Data;
    v42->Data.Size = v43;
    v45[v43 - 1] = v41;
    return 4i64;
  }
  if ( v7 >= -256 && v6 <= 255 )
  {
    v46 = this->Data;
    v47 = this->Data->Data.Size + 1;
    if ( v47 >= this->Data->Data.Size )
    {
      if ( v47 <= v46->Data.Policy.Capacity )
        goto LABEL_69;
      v48 = v47 + (v47 >> 2);
    }
    else
    {
      if ( v47 >= v46->Data.Policy.Capacity >> 1 )
        goto LABEL_69;
      v48 = this->Data->Data.Size + 1;
    }
    Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      &this->Data->Data,
      this->Data,
      v48);
LABEL_69:
    v49 = v46->Data.Data;
    v46->Data.Size = v47;
    v49[v47 - 1] = (16 * cx) | 0xA;
    v50 = this->Data;
    v51 = (32 * cy) | (cx >> 4) & 0x1F;
    v52 = this->Data->Data.Size + 1;
    if ( v52 >= this->Data->Data.Size )
    {
      if ( v52 <= v50->Data.Policy.Capacity )
        goto LABEL_75;
      v53 = v52 + (v52 >> 2);
    }
    else
    {
      if ( v52 >= v50->Data.Policy.Capacity >> 1 )
        goto LABEL_75;
      v53 = this->Data->Data.Size + 1;
    }
    Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      &this->Data->Data,
      this->Data,
      v53);
LABEL_75:
    v54 = v50->Data.Data;
    v50->Data.Size = v52;
    v54[v52 - 1] = v51;
    v55 = this->Data;
    v56 = ((_BYTE)ax << 6) | (cy >> 3) & 0x3F;
    v57 = this->Data->Data.Size + 1;
    if ( v57 >= this->Data->Data.Size )
    {
      if ( v57 <= v55->Data.Policy.Capacity )
        goto LABEL_81;
      v58 = v57 + (v57 >> 2);
    }
    else
    {
      if ( v57 >= v55->Data.Policy.Capacity >> 1 )
        goto LABEL_81;
      v58 = this->Data->Data.Size + 1;
    }
    Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      &this->Data->Data,
      this->Data,
      v58);
LABEL_81:
    v59 = v55->Data.Data;
    v55->Data.Size = v57;
    v59[v57 - 1] = v56;
    v60 = this->Data;
    v61 = ((_BYTE)ay << 7) | (ax >> 2) & 0x7F;
    v62 = this->Data->Data.Size + 1;
    if ( v62 >= this->Data->Data.Size )
    {
      if ( v62 <= v60->Data.Policy.Capacity )
        goto LABEL_87;
      v63 = v62 + (v62 >> 2);
    }
    else
    {
      if ( v62 >= v60->Data.Policy.Capacity >> 1 )
        goto LABEL_87;
      v63 = this->Data->Data.Size + 1;
    }
    Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      &this->Data->Data,
      this->Data,
      v63);
LABEL_87:
    v64 = v60->Data.Data;
    v60->Data.Size = v62;
    v64[v62 - 1] = v61;
    v65 = this->Data;
    v66 = this->Data->Data.Size + 1;
    if ( v66 >= this->Data->Data.Size )
    {
      if ( v66 > v65->Data.Policy.Capacity )
      {
        v67 = v66 + (v66 >> 2);
        goto LABEL_92;
      }
    }
    else if ( v66 < v65->Data.Policy.Capacity >> 1 )
    {
      v67 = this->Data->Data.Size + 1;
LABEL_92:
      Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        &this->Data->Data,
        this->Data,
        v67);
    }
    v68 = v65->Data.Data;
    v65->Data.Size = v66;
    v68[v66 - 1] = ay >> 1;
    return 5i64;
  }
  if ( v7 >= -1024 && v6 <= 1023 )
  {
    v69 = this->Data;
    v70 = this->Data->Data.Size + 1;
    if ( v70 >= this->Data->Data.Size )
    {
      if ( v70 <= v69->Data.Policy.Capacity )
        goto LABEL_102;
      v71 = v70 + (v70 >> 2);
    }
    else
    {
      if ( v70 >= v69->Data.Policy.Capacity >> 1 )
        goto LABEL_102;
      v71 = this->Data->Data.Size + 1;
    }
    Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      &this->Data->Data,
      this->Data,
      v71);
LABEL_102:
    v72 = v69->Data.Data;
    v69->Data.Size = v70;
    v72[v70 - 1] = (16 * cx) | 0xB;
    v73 = this->Data;
    v74 = ((_BYTE)cy << 7) | (cx >> 4) & 0x7F;
    v75 = this->Data->Data.Size + 1;
    if ( v75 >= this->Data->Data.Size )
    {
      if ( v75 <= v73->Data.Policy.Capacity )
        goto LABEL_108;
      v76 = v75 + (v75 >> 2);
    }
    else
    {
      if ( v75 >= v73->Data.Policy.Capacity >> 1 )
        goto LABEL_108;
      v76 = this->Data->Data.Size + 1;
    }
    Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      &this->Data->Data,
      this->Data,
      v76);
LABEL_108:
    v77 = v73->Data.Data;
    v73->Data.Size = v75;
    v77[v75 - 1] = v74;
    v78 = this->Data;
    v79 = this->Data->Data.Size + 1;
    if ( v79 >= this->Data->Data.Size )
    {
      if ( v79 <= v78->Data.Policy.Capacity )
        goto LABEL_114;
      v80 = v79 + (v79 >> 2);
    }
    else
    {
      if ( v79 >= v78->Data.Policy.Capacity >> 1 )
        goto LABEL_114;
      v80 = this->Data->Data.Size + 1;
    }
    Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      &this->Data->Data,
      this->Data,
      v80);
LABEL_114:
    v81 = v78->Data.Data;
    v78->Data.Size = v79;
    v81[v79 - 1] = cy >> 1;
    v82 = this->Data;
    v83 = (4 * ax) | (cy >> 9) & 3;
    v84 = this->Data->Data.Size + 1;
    if ( v84 >= this->Data->Data.Size )
    {
      if ( v84 <= v82->Data.Policy.Capacity )
        goto LABEL_120;
      v85 = v84 + (v84 >> 2);
    }
    else
    {
      if ( v84 >= v82->Data.Policy.Capacity >> 1 )
        goto LABEL_120;
      v85 = this->Data->Data.Size + 1;
    }
    Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      &this->Data->Data,
      this->Data,
      v85);
LABEL_120:
    v86 = v82->Data.Data;
    v82->Data.Size = v84;
    v86[v84 - 1] = v83;
    v87 = this->Data;
    v88 = (32 * ay) | (ax >> 6) & 0x1F;
    v89 = this->Data->Data.Size + 1;
    if ( v89 >= this->Data->Data.Size )
    {
      if ( v89 <= v87->Data.Policy.Capacity )
        goto LABEL_126;
      v90 = v89 + (v89 >> 2);
    }
    else
    {
      if ( v89 >= v87->Data.Policy.Capacity >> 1 )
        goto LABEL_126;
      v90 = this->Data->Data.Size + 1;
    }
    Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      &this->Data->Data,
      this->Data,
      v90);
LABEL_126:
    v91 = v87->Data.Data;
    v87->Data.Size = v89;
    v91[v89 - 1] = v88;
    v92 = this->Data;
    v93 = this->Data->Data.Size + 1;
    if ( v93 >= this->Data->Data.Size )
    {
      if ( v93 > v92->Data.Policy.Capacity )
      {
        v94 = v93 + (v93 >> 2);
        goto LABEL_131;
      }
    }
    else if ( v93 < v92->Data.Policy.Capacity >> 1 )
    {
      v94 = this->Data->Data.Size + 1;
LABEL_131:
      Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        &this->Data->Data,
        this->Data,
        v94);
    }
    v95 = v92->Data.Data;
    v92->Data.Size = v93;
    v95[v93 - 1] = ay >> 3;
    return 6i64;
  }
  if ( v7 >= -4096 && v6 <= 4095 )
  {
    v96 = this->Data;
    v97 = this->Data->Data.Size + 1;
    if ( v97 >= this->Data->Data.Size )
    {
      if ( v97 <= v96->Data.Policy.Capacity )
        goto LABEL_141;
      v98 = v97 + (v97 >> 2);
    }
    else
    {
      if ( v97 >= v96->Data.Policy.Capacity >> 1 )
        goto LABEL_141;
      v98 = this->Data->Data.Size + 1;
    }
    Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      &this->Data->Data,
      this->Data,
      v98);
LABEL_141:
    v99 = v96->Data.Data;
    v96->Data.Size = v97;
    v99[v97 - 1] = (16 * cx) | 0xC;
    v100 = this->Data;
    v101 = this->Data->Data.Size + 1;
    if ( v101 >= this->Data->Data.Size )
    {
      if ( v101 <= v100->Data.Policy.Capacity )
        goto LABEL_147;
      v102 = v101 + (v101 >> 2);
    }
    else
    {
      if ( v101 >= v100->Data.Policy.Capacity >> 1 )
        goto LABEL_147;
      v102 = this->Data->Data.Size + 1;
    }
    Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      &this->Data->Data,
      this->Data,
      v102);
LABEL_147:
    v103 = v100->Data.Data;
    v100->Data.Size = v101;
    v103[v101 - 1] = cx >> 4;
    v104 = this->Data;
    v105 = (2 * cy) | (cx >> 12) & 1;
    v106 = this->Data->Data.Size + 1;
    if ( v106 >= this->Data->Data.Size )
    {
      if ( v106 <= v104->Data.Policy.Capacity )
        goto LABEL_153;
      v107 = v106 + (v106 >> 2);
    }
    else
    {
      if ( v106 >= v104->Data.Policy.Capacity >> 1 )
        goto LABEL_153;
      v107 = this->Data->Data.Size + 1;
    }
    Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      &this->Data->Data,
      this->Data,
      v107);
LABEL_153:
    v108 = v104->Data.Data;
    v104->Data.Size = v106;
    v108[v106 - 1] = v105;
    v109 = this->Data;
    v110 = ((_BYTE)ax << 6) | (cy >> 7) & 0x3F;
    v111 = this->Data->Data.Size + 1;
    if ( v111 >= this->Data->Data.Size )
    {
      if ( v111 <= v109->Data.Policy.Capacity )
        goto LABEL_159;
      v112 = v111 + (v111 >> 2);
    }
    else
    {
      if ( v111 >= v109->Data.Policy.Capacity >> 1 )
        goto LABEL_159;
      v112 = this->Data->Data.Size + 1;
    }
    Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      &this->Data->Data,
      this->Data,
      v112);
LABEL_159:
    v113 = v109->Data.Data;
    v109->Data.Size = v111;
    v113[v111 - 1] = v110;
    v114 = this->Data;
    v115 = this->Data->Data.Size + 1;
    if ( v115 >= this->Data->Data.Size )
    {
      if ( v115 <= v114->Data.Policy.Capacity )
        goto LABEL_165;
      v116 = v115 + (v115 >> 2);
    }
    else
    {
      if ( v115 >= v114->Data.Policy.Capacity >> 1 )
        goto LABEL_165;
      v116 = this->Data->Data.Size + 1;
    }
    Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      &this->Data->Data,
      this->Data,
      v116);
LABEL_165:
    v117 = v114->Data.Data;
    v114->Data.Size = v115;
    v117[v115 - 1] = ax >> 2;
    v118 = this->Data;
    v119 = (8 * ay) | (ax >> 10) & 7;
    v120 = this->Data->Data.Size + 1;
    if ( v120 >= this->Data->Data.Size )
    {
      if ( v120 <= v118->Data.Policy.Capacity )
        goto LABEL_171;
      v121 = v120 + (v120 >> 2);
    }
    else
    {
      if ( v120 >= v118->Data.Policy.Capacity >> 1 )
        goto LABEL_171;
      v121 = this->Data->Data.Size + 1;
    }
    Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      &this->Data->Data,
      this->Data,
      v121);
LABEL_171:
    v122 = v118->Data.Data;
    v118->Data.Size = v120;
    v122[v120 - 1] = v119;
    v123 = this->Data;
    v124 = this->Data->Data.Size + 1;
    if ( v124 >= this->Data->Data.Size )
    {
      if ( v124 > v123->Data.Policy.Capacity )
      {
        v125 = v124 + (v124 >> 2);
        goto LABEL_176;
      }
    }
    else if ( v124 < v123->Data.Policy.Capacity >> 1 )
    {
      v125 = this->Data->Data.Size + 1;
LABEL_176:
      Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        &this->Data->Data,
        this->Data,
        v125);
    }
    v126 = v123->Data.Data;
    v123->Data.Size = v124;
    v126[v124 - 1] = ay >> 5;
    return 7i64;
  }
  if ( v7 >= -16384 && v6 <= 0x3FFF )
  {
    v127 = this->Data;
    v128 = this->Data->Data.Size + 1;
    if ( v128 >= this->Data->Data.Size )
    {
      if ( v128 <= v127->Data.Policy.Capacity )
        goto LABEL_186;
      v129 = v128 + (v128 >> 2);
    }
    else
    {
      if ( v128 >= v127->Data.Policy.Capacity >> 1 )
        goto LABEL_186;
      v129 = this->Data->Data.Size + 1;
    }
    Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      &this->Data->Data,
      this->Data,
      v129);
LABEL_186:
    v130 = v127->Data.Data;
    v127->Data.Size = v128;
    v130[v128 - 1] = (16 * cx) | 0xD;
    v131 = this->Data;
    v132 = this->Data->Data.Size + 1;
    if ( v132 >= this->Data->Data.Size )
    {
      if ( v132 <= v131->Data.Policy.Capacity )
        goto LABEL_192;
      v133 = v132 + (v132 >> 2);
    }
    else
    {
      if ( v132 >= v131->Data.Policy.Capacity >> 1 )
        goto LABEL_192;
      v133 = this->Data->Data.Size + 1;
    }
    Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      &this->Data->Data,
      this->Data,
      v133);
LABEL_192:
    v134 = v131->Data.Data;
    v131->Data.Size = v132;
    v134[v132 - 1] = cx >> 4;
    v135 = this->Data;
    v136 = (8 * cy) | (cx >> 12) & 7;
    v137 = this->Data->Data.Size + 1;
    if ( v137 >= this->Data->Data.Size )
    {
      if ( v137 <= v135->Data.Policy.Capacity )
        goto LABEL_198;
      v138 = v137 + (v137 >> 2);
    }
    else
    {
      if ( v137 >= v135->Data.Policy.Capacity >> 1 )
        goto LABEL_198;
      v138 = this->Data->Data.Size + 1;
    }
    Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      &this->Data->Data,
      this->Data,
      v138);
LABEL_198:
    v139 = v135->Data.Data;
    v135->Data.Size = v137;
    v139[v137 - 1] = v136;
    v140 = this->Data;
    v141 = this->Data->Data.Size + 1;
    if ( v141 >= this->Data->Data.Size )
    {
      if ( v141 <= v140->Data.Policy.Capacity )
        goto LABEL_204;
      v142 = v141 + (v141 >> 2);
    }
    else
    {
      if ( v141 >= v140->Data.Policy.Capacity >> 1 )
        goto LABEL_204;
      v142 = this->Data->Data.Size + 1;
    }
    Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      &this->Data->Data,
      this->Data,
      v142);
LABEL_204:
    v143 = v140->Data.Data;
    v140->Data.Size = v141;
    v143[v141 - 1] = cy >> 5;
    v144 = this->Data;
    v145 = (cy >> 13) & 3 | (4 * ax);
    v146 = this->Data->Data.Size + 1;
    if ( v146 >= this->Data->Data.Size )
    {
      if ( v146 <= v144->Data.Policy.Capacity )
        goto LABEL_210;
      v147 = v146 + (v146 >> 2);
    }
    else
    {
      if ( v146 >= v144->Data.Policy.Capacity >> 1 )
        goto LABEL_210;
      v147 = this->Data->Data.Size + 1;
    }
    Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      &this->Data->Data,
      this->Data,
      v147);
LABEL_210:
    v148 = v144->Data.Data;
    v144->Data.Size = v146;
    v148[v146 - 1] = v145;
    v149 = this->Data;
    v150 = this->Data->Data.Size + 1;
    if ( v150 >= this->Data->Data.Size )
    {
      if ( v150 <= v149->Data.Policy.Capacity )
        goto LABEL_216;
      v151 = v150 + (v150 >> 2);
    }
    else
    {
      if ( v150 >= v149->Data.Policy.Capacity >> 1 )
        goto LABEL_216;
      v151 = this->Data->Data.Size + 1;
    }
    Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      &this->Data->Data,
      this->Data,
      v151);
LABEL_216:
    v152 = v149->Data.Data;
    v149->Data.Size = v150;
    v152[v150 - 1] = ax >> 6;
    v153 = this->Data;
    v154 = (ax >> 14) & 1 | (2 * ay);
    v155 = this->Data->Data.Size + 1;
    if ( v155 >= this->Data->Data.Size )
    {
      if ( v155 <= v153->Data.Policy.Capacity )
        goto LABEL_222;
      v156 = v155 + (v155 >> 2);
    }
    else
    {
      if ( v155 >= v153->Data.Policy.Capacity >> 1 )
        goto LABEL_222;
      v156 = this->Data->Data.Size + 1;
    }
    Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      &this->Data->Data,
      this->Data,
      v156);
LABEL_222:
    v157 = v153->Data.Data;
    v153->Data.Size = v155;
    v157[v155 - 1] = v154;
    v158 = this->Data;
    v159 = this->Data->Data.Size + 1;
    if ( v159 >= this->Data->Data.Size )
    {
      if ( v159 > v158->Data.Policy.Capacity )
      {
        v160 = v159 + (v159 >> 2);
        goto LABEL_227;
      }
    }
    else if ( v159 < v158->Data.Policy.Capacity >> 1 )
    {
      v160 = this->Data->Data.Size + 1;
LABEL_227:
      Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        &this->Data->Data,
        this->Data,
        v160);
    }
    v161 = v158->Data.Data;
    v158->Data.Size = v159;
    v161[v159 - 1] = ay >> 7;
    return 8i64;
  }
  v162 = this->Data;
  v163 = this->Data->Data.Size + 1;
  if ( v163 >= this->Data->Data.Size )
  {
    if ( v163 <= v162->Data.Policy.Capacity )
      goto LABEL_235;
    v164 = v163 + (v163 >> 2);
  }
  else
  {
    if ( v163 >= v162->Data.Policy.Capacity >> 1 )
      goto LABEL_235;
    v164 = this->Data->Data.Size + 1;
  }
  Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
    &this->Data->Data,
    this->Data,
    v164);
LABEL_235:
  v165 = v162->Data.Data;
  v162->Data.Size = v163;
  v165[v163 - 1] = (16 * cx) | 0xE;
  v166 = this->Data;
  v167 = this->Data->Data.Size + 1;
  if ( v167 >= this->Data->Data.Size )
  {
    if ( v167 <= v166->Data.Policy.Capacity )
      goto LABEL_241;
    v168 = v167 + (v167 >> 2);
  }
  else
  {
    if ( v167 >= v166->Data.Policy.Capacity >> 1 )
      goto LABEL_241;
    v168 = this->Data->Data.Size + 1;
  }
  Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
    &this->Data->Data,
    this->Data,
    v168);
LABEL_241:
  v169 = v166->Data.Data;
  v166->Data.Size = v167;
  v169[v167 - 1] = cx >> 4;
  v170 = this->Data;
  v171 = this->Data->Data.Size + 1;
  if ( v171 >= this->Data->Data.Size )
  {
    if ( v171 <= v170->Data.Policy.Capacity )
      goto LABEL_247;
    v172 = v171 + (v171 >> 2);
  }
  else
  {
    if ( v171 >= v170->Data.Policy.Capacity >> 1 )
      goto LABEL_247;
    v172 = this->Data->Data.Size + 1;
  }
  Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
    &this->Data->Data,
    this->Data,
    v172);
LABEL_247:
  v173 = v170->Data.Data;
  v170->Data.Size = v171;
  v173[v171 - 1] = cx >> 12;
  v174 = this->Data;
  v175 = this->Data->Data.Size + 1;
  if ( v175 >= this->Data->Data.Size )
  {
    if ( v175 <= v174->Data.Policy.Capacity )
      goto LABEL_253;
    v176 = v175 + (v175 >> 2);
  }
  else
  {
    if ( v175 >= v174->Data.Policy.Capacity >> 1 )
      goto LABEL_253;
    v176 = this->Data->Data.Size + 1;
  }
  Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
    &this->Data->Data,
    this->Data,
    v176);
LABEL_253:
  v177 = v174->Data.Data;
  v174->Data.Size = v175;
  v177[v175 - 1] = cx >> 20;
  v178 = this->Data;
  v179 = (8 * cy) | (cx >> 28) & 7;
  v180 = this->Data->Data.Size + 1;
  if ( v180 >= this->Data->Data.Size )
  {
    if ( v180 <= v178->Data.Policy.Capacity )
      goto LABEL_259;
    v181 = v180 + (v180 >> 2);
  }
  else
  {
    if ( v180 >= v178->Data.Policy.Capacity >> 1 )
      goto LABEL_259;
    v181 = this->Data->Data.Size + 1;
  }
  Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
    &this->Data->Data,
    this->Data,
    v181);
LABEL_259:
  v182 = v178->Data.Data;
  v178->Data.Size = v180;
  v182[v180 - 1] = v179;
  v183 = this->Data;
  v184 = this->Data->Data.Size + 1;
  if ( v184 >= this->Data->Data.Size )
  {
    if ( v184 <= v183->Data.Policy.Capacity )
      goto LABEL_265;
    v185 = v184 + (v184 >> 2);
  }
  else
  {
    if ( v184 >= v183->Data.Policy.Capacity >> 1 )
      goto LABEL_265;
    v185 = this->Data->Data.Size + 1;
  }
  Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
    &this->Data->Data,
    this->Data,
    v185);
LABEL_265:
  v186 = v183->Data.Data;
  v183->Data.Size = v184;
  v186[v184 - 1] = cy >> 5;
  v187 = this->Data;
  v188 = this->Data->Data.Size + 1;
  if ( v188 >= this->Data->Data.Size )
  {
    if ( v188 <= v187->Data.Policy.Capacity )
      goto LABEL_271;
    v189 = v188 + (v188 >> 2);
  }
  else
  {
    if ( v188 >= v187->Data.Policy.Capacity >> 1 )
      goto LABEL_271;
    v189 = this->Data->Data.Size + 1;
  }
  Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
    &this->Data->Data,
    this->Data,
    v189);
LABEL_271:
  v190 = v187->Data.Data;
  v187->Data.Size = v188;
  v190[v188 - 1] = cy >> 13;
  v191 = this->Data;
  v192 = this->Data->Data.Size + 1;
  if ( v192 >= this->Data->Data.Size )
  {
    if ( v192 <= v191->Data.Policy.Capacity )
      goto LABEL_277;
    v193 = v192 + (v192 >> 2);
  }
  else
  {
    if ( v192 >= v191->Data.Policy.Capacity >> 1 )
      goto LABEL_277;
    v193 = this->Data->Data.Size + 1;
  }
  Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
    &this->Data->Data,
    this->Data,
    v193);
LABEL_277:
  v194 = v191->Data.Data;
  v191->Data.Size = v192;
  v194[v192 - 1] = cy >> 21;
  v195 = this->Data;
  v196 = (4 * ax) | (cy >> 29) & 3;
  v197 = this->Data->Data.Size + 1;
  if ( v197 >= this->Data->Data.Size )
  {
    if ( v197 <= v195->Data.Policy.Capacity )
      goto LABEL_283;
    v198 = v197 + (v197 >> 2);
  }
  else
  {
    if ( v197 >= v195->Data.Policy.Capacity >> 1 )
      goto LABEL_283;
    v198 = this->Data->Data.Size + 1;
  }
  Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
    &this->Data->Data,
    this->Data,
    v198);
LABEL_283:
  v199 = v195->Data.Data;
  v195->Data.Size = v197;
  v199[v197 - 1] = v196;
  v200 = this->Data;
  v201 = this->Data->Data.Size + 1;
  if ( v201 >= this->Data->Data.Size )
  {
    if ( v201 <= v200->Data.Policy.Capacity )
      goto LABEL_289;
    v202 = v201 + (v201 >> 2);
  }
  else
  {
    if ( v201 >= v200->Data.Policy.Capacity >> 1 )
      goto LABEL_289;
    v202 = this->Data->Data.Size + 1;
  }
  Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
    &this->Data->Data,
    this->Data,
    v202);
LABEL_289:
  v203 = v200->Data.Data;
  v200->Data.Size = v201;
  v203[v201 - 1] = ax >> 6;
  v204 = this->Data;
  v205 = this->Data->Data.Size + 1;
  if ( v205 >= this->Data->Data.Size )
  {
    if ( v205 <= v204->Data.Policy.Capacity )
      goto LABEL_295;
    v206 = v205 + (v205 >> 2);
  }
  else
  {
    if ( v205 >= v204->Data.Policy.Capacity >> 1 )
      goto LABEL_295;
    v206 = this->Data->Data.Size + 1;
  }
  Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
    &this->Data->Data,
    this->Data,
    v206);
LABEL_295:
  v207 = v204->Data.Data;
  v204->Data.Size = v205;
  v207[v205 - 1] = ax >> 14;
  v208 = this->Data;
  v209 = this->Data->Data.Size + 1;
  if ( v209 >= this->Data->Data.Size )
  {
    if ( v209 <= v208->Data.Policy.Capacity )
      goto LABEL_301;
    v210 = v209 + (v209 >> 2);
  }
  else
  {
    if ( v209 >= v208->Data.Policy.Capacity >> 1 )
      goto LABEL_301;
    v210 = this->Data->Data.Size + 1;
  }
  Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
    &this->Data->Data,
    this->Data,
    v210);
LABEL_301:
  v211 = v208->Data.Data;
  v208->Data.Size = v209;
  v211[v209 - 1] = ax >> 22;
  v212 = this->Data;
  v213 = (2 * ay) | (ax >> 30) & 1;
  v214 = this->Data->Data.Size + 1;
  if ( v214 >= this->Data->Data.Size )
  {
    if ( v214 <= v212->Data.Policy.Capacity )
      goto LABEL_307;
    v215 = v214 + (v214 >> 2);
  }
  else
  {
    if ( v214 >= v212->Data.Policy.Capacity >> 1 )
      goto LABEL_307;
    v215 = this->Data->Data.Size + 1;
  }
  Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
    &this->Data->Data,
    this->Data,
    v215);
LABEL_307:
  v216 = v212->Data.Data;
  v212->Data.Size = v214;
  v216[v214 - 1] = v213;
  v217 = this->Data;
  v218 = this->Data->Data.Size + 1;
  if ( v218 >= this->Data->Data.Size )
  {
    if ( v218 <= v217->Data.Policy.Capacity )
      goto LABEL_313;
    v219 = v218 + (v218 >> 2);
  }
  else
  {
    if ( v218 >= v217->Data.Policy.Capacity >> 1 )
      goto LABEL_313;
    v219 = this->Data->Data.Size + 1;
  }
  Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
    &this->Data->Data,
    this->Data,
    v219);
LABEL_313:
  v220 = v217->Data.Data;
  v217->Data.Size = v218;
  v220[v218 - 1] = ay >> 7;
  v221 = this->Data;
  v222 = this->Data->Data.Size + 1;
  if ( v222 >= this->Data->Data.Size )
  {
    if ( v222 <= v221->Data.Policy.Capacity )
      goto LABEL_319;
    v223 = v222 + (v222 >> 2);
  }
  else
  {
    if ( v222 >= v221->Data.Policy.Capacity >> 1 )
      goto LABEL_319;
    v223 = this->Data->Data.Size + 1;
  }
  Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
    &this->Data->Data,
    this->Data,
    v223);
LABEL_319:
  v224 = v221->Data.Data;
  v221->Data.Size = v222;
  v224[v222 - 1] = ay >> 15;
  v225 = this->Data;
  v226 = this->Data->Data.Size + 1;
  if ( v226 >= this->Data->Data.Size )
  {
    if ( v226 > v225->Data.Policy.Capacity )
    {
      v227 = v226 + (v226 >> 2);
      goto LABEL_324;
    }
  }
  else if ( v226 < v225->Data.Policy.Capacity >> 1 )
  {
    v227 = this->Data->Data.Size + 1;
LABEL_324:
    Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      &this->Data->Data,
      this->Data,
      v227);
  }
  v228 = v225->Data.Data;
  v225->Data.Size = v226;
  v228[v226 - 1] = ay >> 23;
  return 16i64;
}

__int64 __fastcall Scaleform::Render::PathDataEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::WriteSInt30(
        Scaleform::Render::PathDataEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> > *this,
        int v)
{
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *Data; // rdi
  unsigned __int64 v5; // rsi
  unsigned __int8 v6; // bl
  unsigned __int64 v7; // r8
  unsigned __int8 *v8; // rax
  char v10; // bp
  unsigned __int8 v11; // bp
  unsigned __int64 v12; // r8
  unsigned __int8 *v13; // rax
  int v14; // ebx
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v15; // rdi
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // r8
  unsigned __int8 *v18; // rax
  unsigned __int8 v19; // bp
  unsigned __int64 v20; // r8
  unsigned __int8 *v21; // rax
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v22; // rdi
  int v23; // ebp
  unsigned __int64 v24; // rsi
  unsigned __int64 v25; // r8
  unsigned __int8 *v26; // rax
  int v27; // ebx
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v28; // rdi
  unsigned __int64 v29; // rsi
  unsigned __int64 v30; // r8
  unsigned __int8 *v31; // rax
  unsigned __int8 v32; // bp
  unsigned __int64 v33; // r8
  unsigned __int8 *v34; // rax
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v35; // rdi
  unsigned __int64 v36; // rsi
  unsigned __int64 v37; // r8
  unsigned __int8 *v38; // rax
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v39; // rdi
  int v40; // ebp
  unsigned __int64 v41; // rsi
  unsigned __int64 v42; // r8
  unsigned __int8 *v43; // rax
  int v44; // ebx
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v45; // rdi
  unsigned __int64 v46; // rsi
  unsigned __int64 v47; // r8
  unsigned __int8 *v48; // rax

  Data = this->Data;
  v5 = this->Data->Data.Size + 1;
  if ( (unsigned int)(v + 32) <= 0x3F )
  {
    v6 = 4 * v;
    if ( v5 >= Data->Data.Size )
    {
      if ( v5 > Data->Data.Policy.Capacity )
      {
        v7 = v5 + (v5 >> 2);
        goto LABEL_7;
      }
    }
    else if ( v5 < Data->Data.Policy.Capacity >> 1 )
    {
      v7 = this->Data->Data.Size + 1;
LABEL_7:
      Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        &Data->Data,
        Data,
        v7);
    }
    v8 = Data->Data.Data;
    Data->Data.Size = v5;
    v8[v5 - 1] = v6;
    return 1i64;
  }
  v10 = 4 * v;
  if ( (unsigned int)(v + 0x2000) <= 0x3FFF )
  {
    v11 = v10 | 1;
    if ( v5 >= Data->Data.Size )
    {
      if ( v5 <= Data->Data.Policy.Capacity )
        goto LABEL_16;
      v12 = v5 + (v5 >> 2);
    }
    else
    {
      if ( v5 >= Data->Data.Policy.Capacity >> 1 )
        goto LABEL_16;
      v12 = this->Data->Data.Size + 1;
    }
    Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      &Data->Data,
      Data,
      v12);
LABEL_16:
    v13 = Data->Data.Data;
    Data->Data.Size = v5;
    v14 = v >> 6;
    v13[v5 - 1] = v11;
    v15 = this->Data;
    v16 = this->Data->Data.Size + 1;
    if ( v16 >= this->Data->Data.Size )
    {
      if ( v16 > v15->Data.Policy.Capacity )
      {
        v17 = v16 + (v16 >> 2);
        goto LABEL_21;
      }
    }
    else if ( v16 < v15->Data.Policy.Capacity >> 1 )
    {
      v17 = this->Data->Data.Size + 1;
LABEL_21:
      Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        &v15->Data,
        v15,
        v17);
    }
    v18 = v15->Data.Data;
    v15->Data.Size = v16;
    v18[v16 - 1] = v14;
    return 2i64;
  }
  if ( (unsigned int)(v + 0x200000) <= 0x3FFFFF )
  {
    v19 = v10 | 2;
    if ( v5 >= Data->Data.Size )
    {
      if ( v5 <= Data->Data.Policy.Capacity )
        goto LABEL_30;
      v20 = v5 + (v5 >> 2);
    }
    else
    {
      if ( v5 >= Data->Data.Policy.Capacity >> 1 )
        goto LABEL_30;
      v20 = this->Data->Data.Size + 1;
    }
    Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      &Data->Data,
      Data,
      v20);
LABEL_30:
    v21 = Data->Data.Data;
    Data->Data.Size = v5;
    v21[v5 - 1] = v19;
    v22 = this->Data;
    v23 = v >> 6;
    v24 = this->Data->Data.Size + 1;
    if ( v24 >= this->Data->Data.Size )
    {
      if ( v24 <= v22->Data.Policy.Capacity )
        goto LABEL_36;
      v25 = v24 + (v24 >> 2);
    }
    else
    {
      if ( v24 >= v22->Data.Policy.Capacity >> 1 )
        goto LABEL_36;
      v25 = this->Data->Data.Size + 1;
    }
    Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      &v22->Data,
      v22,
      v25);
LABEL_36:
    v26 = v22->Data.Data;
    v22->Data.Size = v24;
    v27 = v >> 14;
    v26[v24 - 1] = v23;
    v28 = this->Data;
    v29 = this->Data->Data.Size + 1;
    if ( v29 >= this->Data->Data.Size )
    {
      if ( v29 > v28->Data.Policy.Capacity )
      {
        v30 = v29 + (v29 >> 2);
        goto LABEL_41;
      }
    }
    else if ( v29 < v28->Data.Policy.Capacity >> 1 )
    {
      v30 = this->Data->Data.Size + 1;
LABEL_41:
      Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        &v28->Data,
        v28,
        v30);
    }
    v31 = v28->Data.Data;
    v28->Data.Size = v29;
    v31[v29 - 1] = v27;
    return 3i64;
  }
  v32 = v10 | 3;
  if ( v5 >= Data->Data.Size )
  {
    if ( v5 <= Data->Data.Policy.Capacity )
      goto LABEL_49;
    v33 = v5 + (v5 >> 2);
  }
  else
  {
    if ( v5 >= Data->Data.Policy.Capacity >> 1 )
      goto LABEL_49;
    v33 = this->Data->Data.Size + 1;
  }
  Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
    &Data->Data,
    Data,
    v33);
LABEL_49:
  v34 = Data->Data.Data;
  Data->Data.Size = v5;
  v34[v5 - 1] = v32;
  v35 = this->Data;
  v36 = this->Data->Data.Size + 1;
  if ( v36 >= this->Data->Data.Size )
  {
    if ( v36 <= v35->Data.Policy.Capacity )
      goto LABEL_55;
    v37 = v36 + (v36 >> 2);
  }
  else
  {
    if ( v36 >= v35->Data.Policy.Capacity >> 1 )
      goto LABEL_55;
    v37 = this->Data->Data.Size + 1;
  }
  Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
    &v35->Data,
    v35,
    v37);
LABEL_55:
  v38 = v35->Data.Data;
  v35->Data.Size = v36;
  v38[v36 - 1] = v >> 6;
  v39 = this->Data;
  v40 = v >> 14;
  v41 = this->Data->Data.Size + 1;
  if ( v41 >= this->Data->Data.Size )
  {
    if ( v41 <= v39->Data.Policy.Capacity )
      goto LABEL_61;
    v42 = v41 + (v41 >> 2);
  }
  else
  {
    if ( v41 >= v39->Data.Policy.Capacity >> 1 )
      goto LABEL_61;
    v42 = this->Data->Data.Size + 1;
  }
  Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
    &v39->Data,
    v39,
    v42);
LABEL_61:
  v43 = v39->Data.Data;
  v39->Data.Size = v41;
  v44 = v >> 22;
  v43[v41 - 1] = v40;
  v45 = this->Data;
  v46 = this->Data->Data.Size + 1;
  if ( v46 >= this->Data->Data.Size )
  {
    if ( v46 > v45->Data.Policy.Capacity )
    {
      v47 = v46 + (v46 >> 2);
      goto LABEL_66;
    }
  }
  else if ( v46 < v45->Data.Policy.Capacity >> 1 )
  {
    v47 = this->Data->Data.Size + 1;
LABEL_66:
    Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      &v45->Data,
      v45,
      v47);
  }
  v48 = v45->Data.Data;
  v45->Data.Size = v46;
  v48[v46 - 1] = v44;
  return 4i64;
}

__int64 __fastcall Scaleform::Render::PathDataEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::WriteUInt15(
        Scaleform::Render::PathDataEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> > *this,
        unsigned int v)
{
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *Data; // rbx
  unsigned __int64 v5; // rdi
  unsigned __int8 v6; // si
  unsigned __int64 v7; // r8
  unsigned __int8 *v8; // rax
  unsigned __int8 v10; // bp
  unsigned __int64 v11; // r8
  unsigned __int8 *v12; // rax
  unsigned int v13; // esi
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v14; // rbx
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // r8
  unsigned __int8 *v17; // rax

  Data = this->Data;
  v5 = this->Data->Data.Size + 1;
  if ( v <= 0x7F )
  {
    v6 = 2 * v;
    if ( v5 >= Data->Data.Size )
    {
      if ( v5 > Data->Data.Policy.Capacity )
      {
        v7 = v5 + (v5 >> 2);
        goto LABEL_7;
      }
    }
    else if ( v5 < Data->Data.Policy.Capacity >> 1 )
    {
      v7 = this->Data->Data.Size + 1;
LABEL_7:
      Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        &this->Data->Data,
        this->Data,
        v7);
    }
    v8 = Data->Data.Data;
    Data->Data.Size = v5;
    v8[v5 - 1] = v6;
    return 1i64;
  }
  v10 = (2 * v) | 1;
  if ( v5 >= Data->Data.Size )
  {
    if ( v5 <= Data->Data.Policy.Capacity )
      goto LABEL_15;
    v11 = v5 + (v5 >> 2);
  }
  else
  {
    if ( v5 >= Data->Data.Policy.Capacity >> 1 )
      goto LABEL_15;
    v11 = this->Data->Data.Size + 1;
  }
  Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
    &Data->Data,
    Data,
    v11);
LABEL_15:
  v12 = Data->Data.Data;
  Data->Data.Size = v5;
  v13 = v >> 7;
  v12[v5 - 1] = v10;
  v14 = this->Data;
  v15 = this->Data->Data.Size + 1;
  if ( v15 >= this->Data->Data.Size )
  {
    if ( v15 > v14->Data.Policy.Capacity )
    {
      v16 = v15 + (v15 >> 2);
      goto LABEL_20;
    }
  }
  else if ( v15 < v14->Data.Policy.Capacity >> 1 )
  {
    v16 = this->Data->Data.Size + 1;
LABEL_20:
    Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      &this->Data->Data,
      this->Data,
      v16);
  }
  v17 = v14->Data.Data;
  v14->Data.Size = v15;
  v17[v15 - 1] = v13;
  return 2i64;
}

__int64 __fastcall Scaleform::Render::PathDataEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::WriteVLine(
        Scaleform::Render::PathDataEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> > *this,
        int y)
{
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *Data; // rbx
  char v5; // bp
  unsigned __int64 v6; // rdi
  unsigned __int8 v7; // bp
  unsigned __int64 v8; // r8
  unsigned __int8 *v9; // rax
  int v10; // esi
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v11; // rbx
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // r8
  unsigned __int8 *v14; // rax
  unsigned __int8 v16; // bp
  unsigned __int64 v17; // r8
  unsigned __int8 *v18; // rax
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v19; // rbx
  unsigned __int64 v20; // rdi
  unsigned __int64 v21; // r8
  unsigned __int8 *v22; // rax
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v23; // rbx
  int v24; // ebp
  unsigned __int64 v25; // rdi
  unsigned __int64 v26; // r8
  unsigned __int8 *v27; // rax
  int v28; // esi
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v29; // rbx
  unsigned __int64 v30; // rdi
  unsigned __int64 v31; // r8
  unsigned __int8 *v32; // rax

  Data = this->Data;
  v5 = 16 * y;
  v6 = this->Data->Data.Size + 1;
  if ( (unsigned int)(y + 2048) <= 0xFFF )
  {
    v7 = v5 | 2;
    if ( v6 >= Data->Data.Size )
    {
      if ( v6 <= Data->Data.Policy.Capacity )
        goto LABEL_8;
      v8 = v6 + (v6 >> 2);
    }
    else
    {
      if ( v6 >= Data->Data.Policy.Capacity >> 1 )
        goto LABEL_8;
      v8 = this->Data->Data.Size + 1;
    }
    Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      &this->Data->Data,
      this->Data,
      v8);
LABEL_8:
    v9 = Data->Data.Data;
    Data->Data.Size = v6;
    v10 = y >> 4;
    v9[v6 - 1] = v7;
    v11 = this->Data;
    v12 = this->Data->Data.Size + 1;
    if ( v12 >= this->Data->Data.Size )
    {
      if ( v12 > v11->Data.Policy.Capacity )
      {
        v13 = v12 + (v12 >> 2);
        goto LABEL_13;
      }
    }
    else if ( v12 < v11->Data.Policy.Capacity >> 1 )
    {
      v13 = this->Data->Data.Size + 1;
LABEL_13:
      Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        &this->Data->Data,
        this->Data,
        v13);
    }
    v14 = v11->Data.Data;
    v11->Data.Size = v12;
    v14[v12 - 1] = v10;
    return 2i64;
  }
  v16 = v5 | 3;
  if ( v6 >= Data->Data.Size )
  {
    if ( v6 <= Data->Data.Policy.Capacity )
      goto LABEL_21;
    v17 = v6 + (v6 >> 2);
  }
  else
  {
    if ( v6 >= Data->Data.Policy.Capacity >> 1 )
      goto LABEL_21;
    v17 = this->Data->Data.Size + 1;
  }
  Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
    &this->Data->Data,
    this->Data,
    v17);
LABEL_21:
  v18 = Data->Data.Data;
  Data->Data.Size = v6;
  v18[v6 - 1] = v16;
  v19 = this->Data;
  v20 = this->Data->Data.Size + 1;
  if ( v20 >= this->Data->Data.Size )
  {
    if ( v20 <= v19->Data.Policy.Capacity )
      goto LABEL_27;
    v21 = v20 + (v20 >> 2);
  }
  else
  {
    if ( v20 >= v19->Data.Policy.Capacity >> 1 )
      goto LABEL_27;
    v21 = this->Data->Data.Size + 1;
  }
  Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
    &this->Data->Data,
    this->Data,
    v21);
LABEL_27:
  v22 = v19->Data.Data;
  v19->Data.Size = v20;
  v22[v20 - 1] = y >> 4;
  v23 = this->Data;
  v24 = y >> 12;
  v25 = this->Data->Data.Size + 1;
  if ( v25 >= this->Data->Data.Size )
  {
    if ( v25 <= v23->Data.Policy.Capacity )
      goto LABEL_33;
    v26 = v25 + (v25 >> 2);
  }
  else
  {
    if ( v25 >= v23->Data.Policy.Capacity >> 1 )
      goto LABEL_33;
    v26 = this->Data->Data.Size + 1;
  }
  Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
    &this->Data->Data,
    this->Data,
    v26);
LABEL_33:
  v27 = v23->Data.Data;
  v23->Data.Size = v25;
  v28 = y >> 20;
  v27[v25 - 1] = v24;
  v29 = this->Data;
  v30 = this->Data->Data.Size + 1;
  if ( v30 >= this->Data->Data.Size )
  {
    if ( v30 > v29->Data.Policy.Capacity )
    {
      v31 = v30 + (v30 >> 2);
      goto LABEL_38;
    }
  }
  else if ( v30 < v29->Data.Policy.Capacity >> 1 )
  {
    v31 = this->Data->Data.Size + 1;
LABEL_38:
    Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      &this->Data->Data,
      this->Data,
      v31);
  }
  v32 = v29->Data.Data;
  v29->Data.Size = v30;
  v32[v30 - 1] = v28;
  return 3i64;
}

void __fastcall Scaleform::Render::ExternalFontWinAPI::decomposeGlyphBitmap(
        Scaleform::Render::ExternalFontWinAPI *this,
        const unsigned __int8 *data,
        int w,
        int h,
        int x,
        int y,
        Scaleform::Render::GlyphRaster *raster)
{
  __int64 v9; // rsi
  unsigned __int8 *v10; // r8
  __int64 v11; // r10
  const unsigned __int8 *v12; // rdx
  unsigned __int8 v13; // al
  __int64 v14; // r9

  v9 = (unsigned int)w;
  raster->OriginX = -x;
  raster->OriginY = y;
  raster->Width = w;
  raster->Height = h;
  Scaleform::ArrayData<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,75>,Scaleform::ArrayDefaultPolicy>::Resize(
    &raster->Raster.Data,
    h * w);
  v10 = raster->Raster.Data.Data;
  if ( h > 0 )
  {
    v11 = (unsigned int)h;
    do
    {
      v12 = data;
      v13 = 0x80;
      if ( (int)v9 > 0 )
      {
        v14 = v9;
        do
        {
          *v10++ = -((v13 & *v12) != 0);
          v13 >>= 1;
          if ( !v13 )
          {
            ++v12;
            v13 = 0x80;
          }
          --v14;
        }
        while ( v14 );
      }
      data += (int)((((int)v9 + 31) >> 3) & 0xFFFFFFFC);
      --v11;
    }
    while ( v11 );
  }
}

char __fastcall Scaleform::Render::ExternalFontWinAPI::decomposeGlyphOutline(
        Scaleform::Render::ExternalFontWinAPI *this,
        const unsigned __int8 *data,
        unsigned int size,
        Scaleform::Render::GlyphShape *shape,
        unsigned int hintedSize)
{
  Scaleform::Render::GlyphShape *v5; // r15
  const unsigned __int8 *v7; // r14
  bool v8; // zf
  unsigned int v9; // edi
  const unsigned __int8 *v10; // rdi
  unsigned int v11; // er12
  _WORD *v12; // r13
  int v13; // ebx
  unsigned __int64 v14; // rax
  int v15; // edi
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *pContainer; // rsi
  float Multiplier; // xmm8_4
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // r14
  unsigned __int64 v20; // r8
  unsigned __int8 *v21; // rax
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // r14
  unsigned __int64 v24; // r8
  unsigned __int8 *v25; // rax
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // r14
  unsigned __int64 v28; // r8
  unsigned __int8 *v29; // rax
  int v30; // er14
  Scaleform::Render::PathDataEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> > *v31; // rcx
  int v32; // esi
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // r14
  unsigned __int64 v35; // r8
  unsigned __int8 *v36; // rax
  int v37; // er12
  int *v38; // r15
  int v39; // ecx
  int v40; // eax
  float v41; // xmm2_4
  int v42; // edi
  float v43; // xmm1_4
  int v44; // ebx
  float v45; // xmm1_4
  int v46; // ebx
  int v47; // eax
  int v48; // edi
  int v49; // edx
  int v50; // er15
  __int64 *v51; // r12
  __int64 v52; // rcx
  int v53; // er8
  int v54; // edx
  float v55; // xmm2_4
  int v56; // edi
  int v57; // ebx
  float v58; // xmm1_4
  int v59; // eax
  int v60; // er8
  Scaleform::Render::PathDataEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> > *v61; // rcx
  int v62; // edx
  int v63; // er9
  float v64; // xmm1_4
  int v65; // eax
  int v66; // ecx
  __int64 v68; // [rsp+38h] [rbp-D0h]
  __int64 v69; // [rsp+40h] [rbp-C8h]
  const unsigned __int8 *v70; // [rsp+48h] [rbp-C0h]
  Scaleform::Render::PathDataEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> > v71; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v72; // [rsp+58h] [rbp-B0h]
  unsigned __int64 v73; // [rsp+60h] [rbp-A8h]
  Scaleform::Render::PathDataEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> > v74; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v75; // [rsp+70h] [rbp-98h]
  Scaleform::Render::PathDataEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> > v76; // [rsp+78h] [rbp-90h] BYREF
  float v77; // [rsp+80h] [rbp-88h]
  Scaleform::Render::PathDataEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> > v78; // [rsp+88h] [rbp-80h] BYREF
  float v79; // [rsp+90h] [rbp-78h]
  Scaleform::Render::PathDataEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> > v80; // [rsp+98h] [rbp-70h] BYREF
  float v81; // [rsp+A0h] [rbp-68h]
  unsigned __int64 v82; // [rsp+A8h] [rbp-60h]
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v83; // [rsp+B0h] [rbp-58h] BYREF
  float v84; // [rsp+B8h] [rbp-50h]
  Scaleform::Render::PathDataEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> > v85; // [rsp+C0h] [rbp-48h] BYREF
  float v86; // [rsp+C8h] [rbp-40h]
  int v87; // [rsp+190h] [rbp+88h]
  int v88; // [rsp+198h] [rbp+90h]

  v5 = shape;
  v7 = &data[size];
  v70 = data;
  v8 = shape->Data.Data.Size == 0;
  v82 = (unsigned __int64)v7;
  if ( !v8 && (shape->Data.Data.Policy.Capacity & 0xFFFFFFFFFFFFFFFEui64) != 0 )
    Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      &shape->Data.Data,
      &shape->Data,
      0i64);
  v9 = 0;
  v5->Data.Data.Size = 0i64;
  if ( data < v7 )
  {
    v10 = data;
    v11 = hintedSize;
    while ( 1 )
    {
      v12 = v10 + 16;
      v13 = *((_DWORD *)v10 + 3);
      v14 = (unsigned __int64)&v10[*(unsigned int *)v10];
      v15 = *((_DWORD *)v10 + 2);
      pContainer = v5->pContainer;
      Multiplier = v5->Multiplier;
      v73 = v14;
      if ( !v11 )
      {
        *(float *)&v72 = Multiplier;
        v71.Data = pContainer;
        Scaleform::Render::PathDataEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::WriteUInt15(
          &v71,
          1u);
        v33 = pContainer->Data.Size;
        v34 = v33 + 1;
        if ( v33 + 1 >= v33 )
        {
          if ( v34 > pContainer->Data.Policy.Capacity )
          {
            v35 = v34 + (v34 >> 2);
LABEL_31:
            Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
              &pContainer->Data,
              pContainer,
              v35);
          }
        }
        else if ( v34 < pContainer->Data.Policy.Capacity >> 1 )
        {
          v35 = v33 + 1;
          goto LABEL_31;
        }
        v36 = pContainer->Data.Data;
        pContainer->Data.Size = v34;
        v36[v34 - 1] = 4;
        Scaleform::Render::PathDataEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::WriteUInt30(
          &v71,
          0);
        Scaleform::Render::PathDataEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::WriteUInt30(
          &v71,
          0);
        v30 = (int)(float)((float)((float)((float)((SHIWORD(v15) << 8) + BYTE1(v15)) * 4.0) / 240.0) * Multiplier);
        v87 = v30;
        Scaleform::Render::PathDataEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::WriteSInt30(
          &v71,
          v30);
        v31 = &v71;
        v32 = (int)(float)((float)((float)((float)((SHIWORD(v13) << 8) + BYTE1(v13)) * -4.0) / 240.0) * Multiplier);
        goto LABEL_33;
      }
      *(float *)&v75 = Multiplier;
      v74.Data = pContainer;
      Scaleform::Render::PathDataEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::WriteUInt15(
        &v74,
        1u);
      v18 = pContainer->Data.Size;
      v19 = v18 + 1;
      if ( v18 + 1 >= v18 )
      {
        if ( v19 <= pContainer->Data.Policy.Capacity )
          goto LABEL_13;
        v20 = v19 + (v19 >> 2);
      }
      else
      {
        if ( v19 >= pContainer->Data.Policy.Capacity >> 1 )
          goto LABEL_13;
        v20 = v18 + 1;
      }
      Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        &pContainer->Data,
        pContainer,
        v20);
LABEL_13:
      v21 = pContainer->Data.Data;
      pContainer->Data.Size = v19;
      v21[v19 - 1] = 4;
      v22 = pContainer->Data.Size;
      v23 = v22 + 1;
      if ( v22 + 1 >= v22 )
      {
        if ( v23 <= pContainer->Data.Policy.Capacity )
          goto LABEL_19;
        v24 = v23 + (v23 >> 2);
      }
      else
      {
        if ( v23 >= pContainer->Data.Policy.Capacity >> 1 )
          goto LABEL_19;
        v24 = v22 + 1;
      }
      Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        &pContainer->Data,
        pContainer,
        v24);
LABEL_19:
      v25 = pContainer->Data.Data;
      pContainer->Data.Size = v23;
      v25[v23 - 1] = 0;
      v26 = pContainer->Data.Size;
      v27 = v26 + 1;
      if ( v26 + 1 >= v26 )
      {
        if ( v27 > pContainer->Data.Policy.Capacity )
        {
          v28 = v27 + (v27 >> 2);
          goto LABEL_24;
        }
      }
      else if ( v27 < pContainer->Data.Policy.Capacity >> 1 )
      {
        v28 = v26 + 1;
LABEL_24:
        Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
          &pContainer->Data,
          pContainer,
          v28);
      }
      v29 = pContainer->Data.Data;
      pContainer->Data.Size = v27;
      v29[v27 - 1] = 0;
      v30 = (int)(float)((float)((float)((float)((float)(unsigned __int16)v15 * 20.0) * 0.000015258789)
                               + (float)((float)SHIWORD(v15) * 20.0))
                       * Multiplier);
      v87 = v30;
      Scaleform::Render::PathDataEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::WriteSInt30(
        &v74,
        v30);
      v31 = &v74;
      v32 = (int)COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                (float)((float)((float)((float)(unsigned __int16)v13 * 20.0) * 0.000015258789)
                                      + (float)((float)SHIWORD(v13) * 20.0))
                              * Multiplier) ^ _xmm);
LABEL_33:
      v88 = v32;
      Scaleform::Render::PathDataEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::WriteSInt30(
        v31,
        v32);
      if ( (unsigned __int64)v12 < v73 )
      {
        do
        {
          if ( *v12 == 1 )
          {
            v37 = 0;
            if ( v12[1] )
            {
              v38 = (int *)(v12 + 2);
              do
              {
                v39 = v38[1];
                v40 = *v38;
                if ( hintedSize )
                {
                  v41 = shape->Multiplier;
                  v76.Data = shape->pContainer;
                  v77 = v41;
                  v42 = (int)(float)((float)((float)((float)SHIWORD(v40) * 20.0)
                                           + (float)((float)((float)(unsigned __int16)v40 * 20.0) * 0.000015258789))
                                   * v41)
                      - v30;
                  v43 = (float)((float)((float)SHIWORD(v39) * 20.0)
                              + (float)((float)((float)(unsigned __int16)v39 * 20.0) * 0.000015258789))
                      * v41;
                  v44 = -(v32 + (int)v43);
                  if ( v32 + (int)v43 )
                  {
                    if ( v42 )
                    {
                      Scaleform::Render::PathDataEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::WriteLine(
                        &v76,
                        v42,
                        v44);
                      v30 += v42;
                    }
                    else
                    {
                      Scaleform::Render::PathDataEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::WriteVLine(
                        &v76,
                        v44);
                    }
                    v32 = -(int)v43;
                  }
                  else
                  {
                    Scaleform::Render::PathDataEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::WriteHLine(
                      &v76,
                      v42);
                    v30 += v42;
                    v32 = -(int)v43;
                  }
                }
                else
                {
                  v45 = shape->Multiplier;
                  v78.Data = shape->pContainer;
                  v79 = v45;
                  v46 = -v30
                      - (int)(float)((float)((float)((float)(BYTE1(v40) + (SHIWORD(v40) << 8)) * -4.0) / 240.0) * v45);
                  v47 = (int)(float)((float)((float)((float)(BYTE1(v39) + (SHIWORD(v39) << 8)) * 4.0) / 240.0) * v45);
                  v48 = -v32 - v47;
                  if ( -v32 == v47 )
                  {
                    Scaleform::Render::PathDataEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::WriteHLine(
                      &v78,
                      v46);
                  }
                  else if ( v46 )
                  {
                    Scaleform::Render::PathDataEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::WriteLine(
                      &v78,
                      v46,
                      v48);
                  }
                  else
                  {
                    Scaleform::Render::PathDataEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::WriteVLine(
                      &v78,
                      v48);
                  }
                  v30 += v46;
                  v32 += v48;
                }
                ++v37;
                v38 += 2;
              }
              while ( v37 < (unsigned __int16)v12[1] );
            }
          }
          if ( *v12 == 2 )
          {
            v49 = (unsigned __int16)v12[1];
            v50 = 0;
            if ( v49 - 1 > 0 )
            {
              v51 = (__int64 *)(v12 + 2);
              do
              {
                v52 = *v51++;
                v68 = *v51;
                v69 = v52;
                if ( v50 >= v49 - 2 )
                {
                  HIWORD(v54) = HIWORD(*v51);
                  HIWORD(v53) = WORD1(*v51);
                }
                else
                {
                  v53 = ((int)v52 + (int)v68) / 2;
                  LODWORD(v68) = v53;
                  v54 = (HIDWORD(v68) + HIDWORD(v52)) / 2;
                  HIDWORD(v68) = v54;
                }
                if ( hintedSize )
                {
                  v55 = shape->Multiplier;
                  v83 = shape->pContainer;
                  v84 = v55;
                  v56 = (int)(float)((float)((float)((float)SHIWORD(v53) * 20.0)
                                           + (float)((float)((float)(unsigned __int16)v68 * 20.0) * 0.000015258789))
                                   * v55)
                      - v30;
                  v57 = -(v32
                        + (int)(float)((float)((float)((float)SHIWORD(v54) * 20.0)
                                             + (float)((float)((float)WORD2(v68) * 20.0) * 0.000015258789))
                                     * v55));
                  v58 = (float)SWORD1(v52);
                  v59 = (unsigned __int16)v52;
                  v60 = -(v32
                        + (int)(float)((float)((float)((float)((float)WORD2(v52) * 20.0) * 0.000015258789)
                                             + (float)((float)SHIWORD(v52) * 20.0))
                                     * v55));
                  v61 = (Scaleform::Render::PathDataEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> > *)&v83;
                  v62 = (int)(float)((float)((float)(v58 * 20.0) + (float)((float)((float)v59 * 20.0) * 0.000015258789))
                                   * v55)
                      - v30;
                }
                else
                {
                  v63 = BYTE1(v52);
                  v61 = &v85;
                  v64 = shape->Multiplier;
                  v85.Data = shape->pContainer;
                  v86 = v64;
                  v56 = -v30
                      - (int)(float)((float)((float)((float)((SWORD1(v68) << 8) + BYTE1(v68)) * -4.0) / 240.0) * v64);
                  v57 = -v32
                      - (int)(float)((float)((float)((float)((SHIWORD(v68) << 8) + HIBYTE(WORD2(v68))) * 4.0) / 240.0)
                                   * v64);
                  v60 = -v32
                      - (int)(float)((float)((float)((float)((SHIWORD(v69) << 8) + HIBYTE(WORD2(v69))) * 4.0) / 240.0)
                                   * v64);
                  v62 = -v30 - (int)(float)((float)((float)((float)((SWORD1(v69) << 8) + v63) * -4.0) / 240.0) * v64);
                }
                Scaleform::Render::PathDataEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::WriteQuad(
                  v61,
                  v62,
                  v60,
                  v56,
                  v57);
                v49 = (unsigned __int16)v12[1];
                v30 += v56;
                v32 += v57;
                ++v50;
              }
              while ( v50 < v49 - 1 );
            }
          }
          v12 += 4 * (unsigned __int16)v12[1] + 2;
        }
        while ( (unsigned __int64)v12 < v73 );
        v5 = shape;
        v11 = hintedSize;
      }
      v81 = v5->Multiplier;
      v10 = &v70[*(unsigned int *)v70];
      v80.Data = v5->pContainer;
      v70 = v10;
      if ( v30 != v87 || v32 != v88 )
      {
        v65 = v87 - v30;
        v66 = v88 - v32;
        if ( v88 == v32 )
        {
          Scaleform::Render::PathDataEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::WriteHLine(
            &v80,
            v65);
        }
        else if ( v65 )
        {
          Scaleform::Render::PathDataEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::WriteLine(
            &v80,
            v65,
            v66);
        }
        else
        {
          Scaleform::Render::PathDataEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::WriteVLine(
            &v80,
            v66);
        }
      }
      Scaleform::Render::ShapeDataPacked<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::EndPath(v5);
      if ( (unsigned __int64)v10 >= v82 )
      {
        v9 = 0;
        break;
      }
    }
  }
  if ( v5->IsEmpty(v5) )
    return 0;
  Scaleform::Render::ShapeDataPacked<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::EndShape(v5);
  if ( hintedSize )
    v9 = 20 * hintedSize;
  v5->HintedSize = v9;
  return 1;
}

Scaleform::Render::Font::NativeHintingType *__fastcall Scaleform::Render::FontProviderWinAPI::findNativeHinting(
        Scaleform::Render::FontProviderWinAPI *this,
        const char *name)
{
  unsigned int v2; // ebx
  __int64 v5; // rax
  __int64 v6; // rsi

  v2 = 0;
  if ( !this->NativeHinting.Data.Size )
    return 0i64;
  v5 = 0i64;
  while ( 1 )
  {
    v6 = v5;
    if ( !Scaleform::String::CompareNoCase(
            (const char *)((this->NativeHinting.Data.Data[v5].Typeface.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12),
            name) )
      break;
    v5 = ++v2;
    if ( v2 >= this->NativeHinting.Data.Size )
      return 0i64;
  }
  return &this->NativeHinting.Data.Data[v6];
}

void __fastcall Scaleform::Render::ExternalFontWinAPI::loadKerningPairs(Scaleform::Render::ExternalFontWinAPI *this)
{
  unsigned int v1; // edi
  Scaleform::Render::FontSysDataWinAPI *pSysData; // rcx
  tagKERNINGPAIR *Data; // rsi
  unsigned __int64 Size; // rbp
  DWORD KerningPairsW; // eax
  DWORD v7; // ebx
  Scaleform::HashLH<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType>,2,Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType> >,Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType> >::NodeHashF> > *p_KerningPairs; // rbx
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType> >,Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType> >::NodeHashF,Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::ExternalFontWinAPI::KerningPairType,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType> >,Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType> >::NodeHashF> >::TableType *pTable; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  unsigned __int64 v14; // r9
  __int64 v15; // rcx
  Scaleform::ArrayData<tagKERNINGPAIR,Scaleform::AllocatorGH<tagKERNINGPAIR,2>,Scaleform::ArrayDefaultPolicy> v16; // [rsp+20h] [rbp-38h] BYREF
  void *retaddr; // [rsp+58h] [rbp+0h]
  unsigned __int16 wFirst; // [rsp+60h] [rbp+8h] BYREF
  unsigned __int16 wSecond; // [rsp+62h] [rbp+Ah]
  float v20; // [rsp+68h] [rbp+10h] BYREF

  v1 = 0;
  pSysData = this->pSysData;
  memset(&v16, 0, sizeof(v16));
  Data = 0i64;
  Size = 0i64;
  KerningPairsW = GetKerningPairsW(pSysData->WinHDC, 0, 0i64);
  v7 = KerningPairsW;
  if ( KerningPairsW )
  {
    Scaleform::ArrayData<tagKERNINGPAIR,Scaleform::AllocatorGH<tagKERNINGPAIR,2>,Scaleform::ArrayDefaultPolicy>::Resize(
      &v16,
      KerningPairsW);
    Data = v16.Data;
    GetKerningPairsW(this->pSysData->WinHDC, v7, v16.Data);
    Size = v16.Size;
  }
  p_KerningPairs = &this->KerningPairs;
  pTable = this->KerningPairs.mHash.pTable;
  if ( pTable )
  {
    v10 = 0i64;
    v11 = pTable->SizeMask + 1;
    do
    {
      if ( *(unsigned __int64 *)((char *)&p_KerningPairs->mHash.pTable[1].EntryCount + v10) != -2i64 )
        *(unsigned __int64 *)((char *)&p_KerningPairs->mHash.pTable[1].EntryCount + v10) = -2i64;
      v10 += 24i64;
      --v11;
    }
    while ( v11 );
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, p_KerningPairs->mHash.pTable);
    p_KerningPairs->mHash.pTable = 0i64;
  }
  if ( Size )
  {
    v12 = 0i64;
    v16.Data = (tagKERNINGPAIR *)&wFirst;
    v16.Size = (unsigned __int64)&v20;
    do
    {
      v13 = 4i64;
      wFirst = Data[v12].wFirst;
      v14 = 5381i64;
      wSecond = Data[v12].wSecond;
      v20 = (float)Data[v12].iKernAmount * this->Scale1024;
      do
      {
        v15 = *((unsigned __int8 *)&retaddr + v13-- + 7);
        v14 = v15 + 65599 * v14;
      }
      while ( v13 );
      Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType>>,Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType>>::NodeHashF,Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType>>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::ExternalFontWinAPI::KerningPairType,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType>>,Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType>>::NodeHashF>>::add<Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType>>::NodeRef>(
        &this->KerningPairs.mHash,
        &this->KerningPairs,
        (const Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType> >::NodeRef *)&v16,
        v14);
      v12 = ++v1;
    }
    while ( v1 < Size );
  }
  if ( Data )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, Data);
}

void __fastcall Scaleform::HashSetBase<Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short>>,Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short>>::NodeHashF,Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short>>::NodeAltHashF,Scaleform::AllocatorLH<unsigned short,2>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short>>,Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short>>::NodeHashF>>::setRawCapacity(
        Scaleform::HashSetBase<Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short> >,Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short> >::NodeHashF,Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned short,2>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short> >,Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short> >::NodeHashF> > *this,
        void *pheapAddr,
        unsigned __int64 newSize)
{
  __int64 v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // rcx
  unsigned __int64 v8; // rsi
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short> >,Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short> >::NodeHashF,Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned short,2>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short> >,Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short> >::NodeHashF> >::TableType *pTable; // rdi
  int v10; // [rsp+50h] [rbp+18h] BYREF
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short> >,Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short> >::NodeHashF,Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned short,2>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short> >,Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short> >::NodeHashF> > v11; // [rsp+58h] [rbp+20h] BYREF

  if ( newSize )
  {
    if ( newSize >= 8 )
      v5 = 1i64 << ((unsigned __int8)Scaleform::Alg::UpperBit(newSize - 1) + 1);
    else
      v5 = 8i64;
    v10 = 2;
    v6 = 0i64;
    v11.pTable = 0i64;
    v11.pTable = (Scaleform::HashSetBase<Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short> >,Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short> >::NodeHashF,Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned short,2>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short> >,Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short> >::NodeHashF> >::TableType *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(Scaleform::Memory::pGlobalHeap, pheapAddr, 16 * (v5 + 1), &v10);
    v11.pTable->EntryCount = 0i64;
    v11.pTable->SizeMask = v5 - 1;
    if ( v5 )
    {
      v7 = 0i64;
      do
      {
        v11.pTable[++v7].EntryCount = -2i64;
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
          Scaleform::HashSetBase<Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short>>,Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short>>::NodeHashF,Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short>>::NodeAltHashF,Scaleform::AllocatorLH<unsigned short,2>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short>>,Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short>>::NodeHashF>>::add<Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short>>>(
            &v11,
            pheapAddr,
            (const Scaleform::HashNode<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short> > *)&pTable[v6 + 1].SizeMask,
            LOWORD(pTable[v6 + 1].SizeMask));
          pTable[v6 + 1].EntryCount = -2i64;
        }
        ++v6;
        --v8;
      }
      while ( v8 );
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->pTable);
    }
    this->pTable = v11.pTable;
  }
  else
  {
    Scaleform::HashSetBase<Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short>>,Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short>>::NodeHashF,Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short>>::NodeAltHashF,Scaleform::AllocatorLH<unsigned short,261>,Scaleform::HashsetNodeEntry<Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short>>,Scaleform::HashNode<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short>>::NodeHashF>>::Clear((Scaleform::HashSetBase<Scaleform::GFx::AS3::Instances::fl::Namespace *,Scaleform::GFx::AS3::NamespaceInstanceFactory::NamespaceHashFunc,Scaleform::GFx::AS3::NamespaceInstanceFactory::NamespaceHashFunc,Scaleform::AllocatorLH<Scaleform::GFx::AS3::Instances::fl::Namespace *,2>,Scaleform::HashsetEntry<Scaleform::GFx::AS3::Instances::fl::Namespace *,Scaleform::GFx::AS3::NamespaceInstanceFactory::NamespaceHashFunc> > *)this);
  }
}

void __fastcall Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType>>,Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType>>::NodeHashF,Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType>>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::ExternalFontWinAPI::KerningPairType,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType>>,Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType>>::NodeHashF>>::setRawCapacity(
        Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType> >,Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType> >::NodeHashF,Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::ExternalFontWinAPI::KerningPairType,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType> >,Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType> >::NodeHashF> > *this,
        void *pheapAddr,
        unsigned __int64 newSize)
{
  __int64 v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rcx
  unsigned __int64 v8; // rbp
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType> >,Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType> >::NodeHashF,Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::ExternalFontWinAPI::KerningPairType,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType> >,Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType> >::NodeHashF> >::TableType *pTable; // rbx
  __int64 v10; // rax
  const Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType> > *v11; // r8
  unsigned __int64 v12; // r9
  __int64 v13; // rdx
  int v14; // [rsp+50h] [rbp+18h] BYREF
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType> >,Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType> >::NodeHashF,Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::ExternalFontWinAPI::KerningPairType,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType> >,Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType> >::NodeHashF> > v15; // [rsp+58h] [rbp+20h] BYREF

  if ( newSize )
  {
    if ( newSize >= 8 )
      v5 = 1i64 << ((unsigned __int8)Scaleform::Alg::UpperBit(newSize - 1) + 1);
    else
      v5 = 8i64;
    v14 = 2;
    v6 = 0i64;
    v15.pTable = 0i64;
    v15.pTable = (Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType> >,Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType> >::NodeHashF,Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::ExternalFontWinAPI::KerningPairType,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType> >,Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType> >::NodeHashF> >::TableType *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(Scaleform::Memory::pGlobalHeap, pheapAddr, 24 * v5 + 16, &v14);
    v15.pTable->EntryCount = 0i64;
    v15.pTable->SizeMask = v5 - 1;
    if ( v5 )
    {
      v7 = 0i64;
      do
      {
        v7 += 24i64;
        *(_QWORD *)((char *)v15.pTable + v7 - 8) = -2i64;
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
        if ( *(unsigned __int64 *)((char *)&this->pTable[1].EntryCount + v6) != -2i64 )
        {
          v10 = 4i64;
          v11 = (const Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType> > *)((char *)&pTable[2] + v6);
          v12 = 5381i64;
          do
          {
            v13 = *((unsigned __int8 *)v11 + --v10);
            v12 = v13 + 65599 * v12;
          }
          while ( v10 );
          Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType>>,Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType>>::NodeHashF,Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType>>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::ExternalFontWinAPI::KerningPairType,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType>>,Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType>>::NodeHashF>>::add<Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType>>>(
            &v15,
            pheapAddr,
            v11,
            v12);
          *(unsigned __int64 *)((char *)&pTable[1].EntryCount + v6) = -2i64;
        }
        v6 += 24i64;
        --v8;
      }
      while ( v8 );
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->pTable);
    }
    this->pTable = v15.pTable;
  }
  else
  {
    Scaleform::HashSetBase<Scaleform::GFx::AS3::TR::NodeBlock *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *>,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *>,Scaleform::AllocatorDH<Scaleform::GFx::AS3::TR::NodeBlock *,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::AS3::TR::NodeBlock *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::TR::NodeBlock *>>>::Clear((Scaleform::HashSetBase<Scaleform::PtrCmpNN<Scaleform::GFx::AS3::TR::Type const >,Scaleform::GFx::AS3::TR::Type::HashFunctor,Scaleform::GFx::AS3::TR::Type::HashFunctor,Scaleform::AllocatorDH<Scaleform::PtrCmpNN<Scaleform::GFx::AS3::TR::Type const >,348>,Scaleform::HashsetCachedEntry<Scaleform::PtrCmpNN<Scaleform::GFx::AS3::TR::Type const >,Scaleform::GFx::AS3::TR::Type::HashFunctor> > *)this);
  }
}

